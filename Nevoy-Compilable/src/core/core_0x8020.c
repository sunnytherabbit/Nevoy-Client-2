// Core group: core_0x8020
// Address range: 0x180200c60 - 0x180200fd0
int64_t function_180200c60(int64_t a1) {
    uint32_t v1 = *(int32_t *)((int64_t)g1201 + 0x40e4); // 0x180200caf
    int32_t * v2 = (int32_t *)(a1 + 8); // 0x180200cbe
    int64_t v3; // 0x180200c60
    function_1801d0b40("ID: 0x%08X, ActiveID: 0x%08X", (int64_t)*v2, (int64_t)v1, v3);
    function_1801a9d50(*v2);
    int64_t v4 = (int64_t)*(int32_t *)(a1 + 84); // 0x180200cfa
    uint32_t v5 = *(int32_t *)(a1 + 16); // 0x180200d05
    uint32_t v6 = *(int32_t *)(a1 + 12); // 0x180200d11
    function_1801d0b40("CurLenW: %d, CurLenA: %d, Cursor: %d, Selection: %d..%d", (int64_t)v6, (int64_t)v5, v4);
    int128_t v7 = __asm_cvtss2sd(*(int32_t *)(a1 + 112)); // 0x180200d25
    unsigned char v8 = *(char *)(a1 + 106); // 0x180200d2f
    int128_t v9 = __asm_movaps(v7); // 0x180200d33
    function_1801d0b40("has_preferred_x: %d (%.2f)", (int64_t)v8, __asm_movq_20(v9), v4);
    int16_t * v10 = (int16_t *)(a1 + 3700); // 0x180200d4e
    int16_t v11 = *v10; // 0x180200d4e
    int16_t * v12 = (int16_t *)(a1 + 3698); // 0x180200d5a
    int16_t v13 = *v12; // 0x180200d5a
    uint32_t v14 = *(int32_t *)(a1 + 3704); // 0x180200d75
    function_1801d0b40("undo_point: %d, redo_point: %d, undo_char_point: %d, redo_char_point: %d", (int64_t)v13 & 0xffffffff, (int64_t)v11 & 0xffffffff, (int64_t)v14);
    function_18018a790();
    int128_t v15 = __asm_mulss(v7, 0x41200000); // 0x180200d93
    int64_t v16 = __asm_movss(v15); // 0x180200d9b
    int32_t v17 = __asm_movss(__asm_xorps(v15, v15)); // bp-128, 0x180200da4
    int128_t v18 = __asm_movss_31((int32_t)v16); // 0x180200daa
    int64_t v19 = __asm_movss(v18); // 0x180200db0
    int64_t v20 = function_180187060("undopoints", (int64_t)&v17, 9, 0, 0x100000000 * v19 / 0x100000000); // 0x180200dde
    if ((v20 & 255) == 0) {
        // 0x180200fb1
        function_180187140((int64_t)"undopoints");
        return function_18026ad50((int64_t)g731);
    }
    int128_t v21 = __asm_xorps(v18, v18); // 0x180200dee
    int32_t v22 = __asm_movss(v21); // bp-120, 0x180200df1
    __asm_movss(__asm_xorps(v21, v21));
    function_180188b40(14, (int64_t)&v22);
    char v23; // bp-88, 0x180200c60
    int64_t v24 = &v23;
    int64_t v25 = 0;
    int64_t v26; // 0x180200c60
    int64_t v27; // bp-87, 0x180200c60
    int64_t v28; // 0x180200c60
    int64_t v29; // 0x180200e50
    int32_t * v30; // 0x180200e56
    while (true) {
      lab_0x180200e42:
        // 0x180200e42
        v26 = v25;
        v29 = a1 + 116 + 16 * v26;
        v30 = (int32_t *)v29;
        v28 = 117;
        if (v26 < (int64_t)*v12) {
            goto lab_0x180200ee2;
        } else {
            // 0x180200e9b
            v28 = 114;
            if (v26 >= (int64_t)*v10) {
                goto lab_0x180200ee2;
            } else {
                // 0x180200eb6
                function_18018c7b0(v29 & -256 | 1);
                v23 = 0;
                __asm_rep_stosb_memset((char *)&v27, 0, 63);
                uint32_t v31 = *v30; // 0x180200f7a
                function_1801d0b40("%c [%02d] where %03d, insert %03d, delete %03d, char_storage %03d \"%s\"", 32, v26, (int64_t)v31);
                function_18018c8c0();
                goto lab_0x180200fa1;
            }
        }
    }
  lab_0x180200fa6:
    // 0x180200fa6
    function_180188c40(1);
    // 0x180200fb1
    function_180187140(1);
    return function_18026ad50((int64_t)g731);
  lab_0x180200ee2:;
    int64_t v32 = v28;
    v23 = 0;
    __asm_rep_stosb_memset((char *)&v27, 0, 63);
    int32_t v33 = *(int32_t *)(v29 + 12); // 0x180200ee7
    if (v33 == -1) {
        uint32_t v34 = *v30; // 0x180200f7a
        function_1801d0b40("%c [%02d] where %03d, insert %03d, delete %03d, char_storage %03d \"%s\"", v32, v26, (int64_t)v34);
    } else {
        int64_t v35 = a1 + 1700 + 2 * (int64_t)v33; // 0x180200efb
        function_180195ff0(v24, 64, v35, 2 * (int64_t)*(int32_t *)(v29 + 4) + v35);
        uint32_t v36 = *v30; // 0x180200f7a
        function_1801d0b40("%c [%02d] where %03d, insert %03d, delete %03d, char_storage %03d \"%s\"", v32, v26, (int64_t)v36);
    }
    goto lab_0x180200fa1;
  lab_0x180200fa1:
    // 0x180200fa1
    v25 = v26 + 1;
    if (v25 == 99) {
        // break -> 0x180200fa6
        goto lab_0x180200fa6;
    }
    goto lab_0x180200e42;
}

// Address range: 0x180200fe0 - 0x18020105b
int64_t function_180200fe0(int64_t a1) {
    // 0x180200fe0
    int64_t v1; // 0x180200fe0
    int64_t v2; // 0x180200fe0
    function_1801d0b40("SearchBuffer = \"%s\"", a1 + 24, v2, v1);
    char v3 = *(char *)(a1 + 18); // 0x18020100f
    unsigned char v4 = *(char *)(a1 + 17); // 0x180201018
    int64_t v5 = (int64_t)*(char *)(a1 + 100); // 0x18020101c
    function_1801d0b40("SingleCharMode = %d, Size = %d, Lock = %d", (int64_t)v4, (int64_t)v3 & 0xffffffff, v5);
    int128_t v6 = __asm_cvtss2sd(*(int32_t *)(a1 + 96)); // 0x180201033
    uint32_t v7 = *(int32_t *)(a1 + 92); // 0x18020103d
    return function_1801d0b40("LastRequest = time: %.2f, frame: %d", __asm_movq_20(__asm_movaps(v6)), (int64_t)v7, v5);
}

// Address range: 0x180201070 - 0x1802011cf
int64_t function_180201070(int64_t a1) {
    int64_t v1 = function_18018d9a0(); // 0x180201079
    int32_t v2 = *(int32_t *)(a1 + 12); // 0x180201086
    char * v3; // 0x180201070
    if ((v1 + 0xfffffffe & 0xffffffff) <= (int64_t)v2) {
        // 0x1802010e1
        v3 = "N/A";
        if (a1 != 0) {
            // 0x1802010ec
            v3 = (char *)*(int64_t *)(a1 + 8);
        }
    } else {
        // 0x1802010e1
        function_180188880(0, function_1801894b0(1));
        v3 = "N/A";
    }
    uint32_t v4 = *(int32_t *)(a1 + 8); // 0x180201110
    int64_t v5 = function_1801e0440((int64_t)v4, "MultiSelect 0x%08X in '%s'%s", v4, (int32_t)(int64_t)v3); // 0x180201134
    if ((v1 + 0xfffffffe & 0xffffffff) > (int64_t)v2) {
        // 0x180201146
        function_180188970(1);
    }
    uint32_t v6 = (int32_t)v5 & 255;
    int64_t result = v6; // 0x180201158
    if (v6 != 0) {
        char v7 = *(char *)(a1 + 20); // 0x180201161
        int64_t v8 = *(int64_t *)(a1 + 24); // 0x18020116d
        function_1801d0b40("RangeSrcItem = %I64d (0x%I64X), RangeSelected = %d", v8, v8, (int64_t)v7 & 0xffffffff);
        int64_t v9 = (int64_t)*(char *)(a1 + 21) & 0xffffffff; // 0x18020118f
        int64_t v10 = *(int64_t *)(a1 + 32); // 0x180201197
        function_1801d0b40("NavIdItem = %I64d (0x%I64X), NavIdSelected = %d", v10, v10, v9);
        function_1801d0b40("LastSelectionSize = %d", (int64_t)*(int32_t *)(a1 + 16), v10, v9);
        result = function_1801e0900((int64_t)"LastSelectionSize = %d");
    }
    // 0x1802011ca
    return result;
}

// Address range: 0x1802011e0 - 0x180201598
int64_t function_1802011e0(int64_t a1, int32_t * a2, int32_t a3, int64_t a4, int64_t a5, char a6) {
    int64_t v1 = (int64_t)a2;
    uint32_t v2 = (int32_t)v1;
    int32_t v3 = 1; // 0x180201213
    if (v2 < 32) {
        // 0x180201219
        v3 = 0;
        if ((a3 & 0x4000000) != 0 != (v2 == 10) && (a3 & 32) != 0 != (v2 == 9)) {
            // 0x180201590
            return 0;
        }
    }
    // 0x1802012b5
    if (a6 != 0) {
        // 0x1802012ea
        if (v2 >= 0x10000) {
            // 0x180201590
            return 0;
        }
    } else {
        // 0x1802012c1
        if (v2 < 0x10000 != (v2 != 127 == v2 > 0xf8ff)) {
            // 0x180201590
            return 0;
        }
    }
    int32_t v4 = v2; // 0x180201302
    int32_t v5; // 0x1802011e0
    uint16_t v6; // 0x18020132e
    int32_t v7; // 0x180201335
    if ((a3 & 0x2000001f) == 0 || v3 == 0) {
        goto lab_0x1802014f6;
    } else {
        // 0x18020131c
        v6 = *(int16_t *)(a1 + 224);
        v7 = v6;
        int32_t v8 = v2; // 0x180201347
        if ((a3 & 0x20000005) != 0) {
            // 0x180201349
            v8 = v2 != 46 == (v2 != 44) ? v2 : v7;
        }
        int32_t v9 = v8;
        v5 = (a3 & 7) != 0 == v9 < 0xff5f ? v9 - 0xfee0 : v9;
        if (v5 == v7 || (a3 & 1) == 0 || v5 < 58) {
            goto lab_0x1802013d7;
        } else {
            switch (v5) {
                case 47: {
                    goto lab_0x1802013d7;
                }
                case 45: {
                    goto lab_0x1802013d7;
                }
                case 43: {
                    goto lab_0x1802013d7;
                }
                case 42: {
                    goto lab_0x1802013d7;
                }
                default: {
                    // 0x180201590
                    return v6 & -256;
                }
            }
        }
    }
  lab_0x1802014f6:
    // 0x1802014f6
    if ((a3 & 0x100000) == 0) {
        // 0x180201590
        return 1;
    }
    // 0x18020150a
    int32_t * v10; // bp-72, 0x1802011e0
    function_1801e4980((int64_t *)&v10, v1);
    *(int64_t *)&v10 = (int64_t)g1201;
    if ((int32_t)a4 != 0) {
        // 0x180201590
        return a4 & -256;
    }
    uint32_t v11 = v4 & 0xffff;
    *a2 = v11;
    int64_t v12 = v11; // 0x180201581
    if (v11 != 0) {
        // 0x180201590
        return v12 & 0xffffff00 | 1;
    }
    // 0x180201590
    return v12 & 0xff00;
  lab_0x1802013d7:
    if (v5 == v7 || (a3 & 4) == 0 || v5 < 58) {
        goto lab_0x18020142e;
    } else {
        switch (v5) {
            case 101: {
                goto lab_0x18020142e;
            }
            case 69: {
                goto lab_0x18020142e;
            }
            case 47: {
                goto lab_0x18020142e;
            }
            case 45: {
                goto lab_0x18020142e;
            }
            case 43: {
                goto lab_0x18020142e;
            }
            case 42: {
                goto lab_0x18020142e;
            }
            default: {
                // 0x180201590
                return v6 & -256;
            }
        }
    }
  lab_0x18020142e:
    // 0x18020142e
    if ((v5 & -33) >= 71 && (a3 & 2) != 0 && v5 >= 58) {
        // 0x180201590
        return 0;
    }
    // 0x18020146d
    v4 = (a3 & 8) != 0 == v5 < 123 ? v5 - 32 : v5;
    if ((a3 & 16) != 0) {
        // 0x1802014a2
        if (v4 == 0x3000 || v4 == 32 || v4 == 9) {
            // 0x180201590
            return 0;
        }
    }
    // 0x1802014e8
    *a2 = v4;
    goto lab_0x1802014f6;
}

// Address range: 0x1802015a0 - 0x180201659
int64_t function_1802015a0(int64_t a1, int64_t * a2) {
    char v1 = *(char *)a1; // 0x1802015c5
    int64_t v2 = a1; // 0x1802015e7
    int32_t v3 = 0; // 0x1802015e7
    if (v1 == 0) {
        // 0x180201643
        *a2 = a1;
        return 1;
    }
    v2++;
    v3 += (int32_t)(v1 == 10);
    char v4 = *(char *)v2; // 0x1802015c5
    while (v4 != 0) {
        // 0x1802015e9
        v2++;
        v3 += (int32_t)(v4 == 10);
        v4 = *(char *)v2;
    }
    // 0x180201643
    *a2 = v2;
    return v3 + 1;
}

// Address range: 0x180201660 - 0x1802018f8
int64_t function_180201660(int64_t * a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, char a7) {
    int64_t result = (int64_t)a1;
    int64_t v1 = *(int64_t *)(a2 + 0x3d88); // 0x18020168d
    int32_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 0x3d90))); // 0x1802016a6
    int128_t v3 = __asm_divss_38(__asm_movss_31(v2), *(int32_t *)(v1 + 20)); // 0x1802016b7
    int32_t v4 = __asm_movss(v3); // 0x1802016bc
    int128_t v5 = __asm_xorps(v3, v3); // 0x1802016ca
    *(int32_t *)a1 = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1802016d9
    int64_t v7 = __asm_movss(v6); // 0x1802016dc
    int32_t * v8 = (int32_t *)(result + 4); // 0x1802016dc
    *v8 = (int32_t)v7;
    int128_t v9 = __asm_xorps(v6, v6); // 0x1802016e1
    int64_t v10 = __asm_movss(v9); // 0x1802016f2
    int64_t v11 = a3; // 0x1802016f2
    int128_t v12 = v9; // 0x1802016f2
    int64_t v13; // 0x180201660
    int32_t v14; // 0x180201660
    int32_t v15; // 0x180201660
    int64_t v16; // 0x180201660
    int64_t v17; // 0x180201660
    bool v18; // 0x180201660
    while (true) {
      lab_0x1802016f7_2:;
        int128_t v19 = v12;
        v14 = v10;
        int128_t v20 = v14;
        v16 = v11;
        if (v16 >= a4) {
            // break (via goto) -> 0x180201808
            goto lab_0x180201808;
        }
        uint16_t v21 = *(int16_t *)v16; // 0x18020170f
        v11 = v16 + 2;
        while (v21 != 10) {
            // 0x1802017ca
            if (v21 != 13) {
                // 0x1802017d6
                function_18021bb90(v1, (int32_t)v21);
                int64_t v22 = __asm_movss(__asm_mulss(v19, v4)); // 0x1802017eb
                int128_t v23 = __asm_addss(__asm_movss_31(v14), (int32_t)v22); // 0x1802017f7
                v10 = __asm_movss(v23);
                v12 = v23;
                goto lab_0x1802016f7_2;
            }
            v16 = v11;
            if (v16 >= a4) {
                // break (via goto) -> 0x180201808
                goto lab_0x180201808;
            }
            // 0x18020170a
            v21 = *(int16_t *)v16;
            v11 = v16 + 2;
        }
        int32_t v24 = __asm_movss(__asm_movss_31(*(int32_t *)&v13)); // 0x180201743
        __asm_comiss(__asm_movss_31(v24), v20);
        int64_t v25; // 0x180201660
        if (v21 < 10) {
            // 0x180201764
            v25 = __asm_movss(__asm_movss_31(v14));
        } else {
            // 0x180201756
            v25 = __asm_movss(__asm_movss_31(v24));
        }
        int64_t v26 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x180201776
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v26));
        int128_t v27 = __asm_addss(__asm_movss_31(*v8), v2); // 0x18020179b
        *v8 = (int32_t)__asm_movss(v27);
        int128_t v28 = __asm_xorps(v27, v27); // 0x1802017ae
        int64_t v29 = __asm_movss(v28); // 0x1802017b1
        v10 = v29;
        v12 = v28;
        if (a7 != 0) {
            // 0x180201808
            v15 = v29;
            v17 = v11;
            v18 = false;
            goto lab_0x180201808_3;
        }
        goto lab_0x1802016f7_2;
    }
  lab_0x180201808:
    // 0x180201808
    v15 = v14;
    v17 = v16;
    v18 = v16 == a4;
    goto lab_0x180201808_3;
  lab_0x1802016f7:
    // 0x1802016f7
    goto lab_0x1802016f7_2;
  lab_0x180201808_3:
    // 0x180201808
    __asm_comiss(__asm_movss_31(v15), *(int128_t *)&v13);
    if (!v18) {
        // 0x18020181b
        int32_t v30; // 0x180201660
        int64_t v31 = __asm_movss(__asm_movss_31(v30)); // 0x180201829
        *(int32_t *)a1 = (int32_t)v31;
    }
    if (a6 == 0) {
        // 0x180201895
        __asm_comiss(__asm_movss_31(v15), g30);
        __asm_ucomiss(__asm_movss_31(*v8), (int32_t)g30);
    } else {
        int64_t v32 = __asm_movss(__asm_addss(__asm_movss_31(*v8), v2)); // 0x18020184b
        int32_t v33 = __asm_movss(__asm_movss_31(v15)); // bp-24, 0x180201857
        __asm_movss(__asm_movss_31((int32_t)v32));
        *(int64_t *)a6 = *(int64_t *)&v33;
        __asm_comiss(__asm_movss_31(v15), g30);
        *v8 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v8), v2));
    }
    if (a5 != 0) {
        // 0x1802018d8
        *(int64_t *)a5 = v17;
    }
    // 0x1802018e8
    return result;
}

// Address range: 0x180201900 - 0x18020195d
int64_t function_180201900(int64_t a1, int64_t a2) {
    int128_t v1 = __asm_movss_31(*(int32_t *)(a2 + 4)); // 0x18020192c
    int32_t v2 = __asm_cvttss2si(__asm_subss(v1, *(int32_t *)(a1 + 4))); // 0x180201936
    int64_t v3; // 0x180201900
    int64_t v4; // 0x180201900
    return v2 == 0 ? (int32_t)v3 - (int32_t)v4 : v2;
}

// Address range: 0x180201970 - 0x1802019df
int64_t function_180201970(int32_t a1) {
    int64_t result = (int64_t)g1201; // 0x180201978
    if (a1 >= 0 == (a1 != 0)) {
        int128_t v1 = __asm_movss_31(*(int32_t *)(result + 0x3d90)); // 0x18020199c
        int32_t * v2 = (int32_t *)(result + 0x3950); // 0x1802019a4
        int128_t v3 = __asm_subss(__asm_mulss_35(__asm_addss(v1, *v2), __asm_cvtsi2ss(a1)), *v2); // 0x1802019ba
        int128_t v4 = __asm_movss_31(*(int32_t *)(result + 0x390c)); // 0x1802019c6
        __asm_addss_34(v3, __asm_mulss(v4, *(int32_t *)&g41));
    } else {
        // 0x18020198a
        __asm_movss_31(0x7f7fffff);
    }
    // 0x1802019da
    return result;
}

// Address range: 0x1802019f0 - 0x180201a18
int64_t function_1802019f0(int64_t a1, int64_t a2) {
    // 0x1802019f0
    return *(int64_t *)(0x100000000 * a2 / 0x20000000 + a1);
}

// Address range: 0x180201a20 - 0x180201ab1
int64_t function_180201a20(int64_t a1, int64_t a2) {
    // 0x180201a20
    if (*(char *)a1 == 0) {
        // 0x180201a86
        return 0;
    }
    int32_t v1 = 0; // 0x180201a53
    int64_t v2 = a1;
    int64_t result = v2; // 0x180201a5d
    while (v1 != (int32_t)a2) {
        int64_t v3 = v2 + 1 + function_18029e0a0(v2); // 0x180201a70
        v1++;
        result = 0;
        if (*(char *)v3 == 0) {
            // break -> 0x180201a86
            return 0;
        }
        v2 = v3;
        result = v2;
    }
    // 0x180201a86
    return result;
}

// Address range: 0x180201ac0 - 0x180201b0d
int64_t function_180201ac0(int64_t a1, int64_t a2) {
    // 0x180201ac0
    return 0;
}

// Address range: 0x180201b20 - 0x180201b63
int64_t function_180201b20(int64_t a1, int64_t a2) {
    // 0x180201b20
    int64_t v1; // 0x180201b20
    char v2 = v1;
    int64_t v3; // 0x180201b20
    char v4 = v3;
    return v2 < v4 ? 0xffffffff : (int64_t)(v2 > v4);
}

// Address range: 0x180201b70 - 0x180201bb3
int64_t function_180201b70(int64_t a1, int64_t a2) {
    // 0x180201b70
    int64_t v1; // 0x180201b70
    unsigned char v2 = (char)v1;
    int64_t v3; // 0x180201b70
    unsigned char v4 = (char)v3;
    return v2 < v4 ? 0xffffffff : (int64_t)(v2 > v4);
}

// Address range: 0x180201bc0 - 0x180201c03
int64_t function_180201bc0(int64_t a1, int64_t a2) {
    // 0x180201bc0
    int64_t v1; // 0x180201bc0
    int16_t v2 = v1;
    int64_t v3; // 0x180201bc0
    int16_t v4 = v3;
    return v2 < v4 ? 0xffffffff : (int64_t)(v2 > v4);
}

// Address range: 0x180201c10 - 0x180201c53
int64_t function_180201c10(int64_t a1, int64_t a2) {
    // 0x180201c10
    int64_t v1; // 0x180201c10
    uint16_t v2 = (int16_t)v1;
    int64_t v3; // 0x180201c10
    uint16_t v4 = (int16_t)v3;
    return v2 < v4 ? 0xffffffff : (int64_t)(v2 > v4);
}

// Address range: 0x180201c60 - 0x180201c9b
int64_t function_180201c60(int64_t a1, int64_t a2) {
    // 0x180201c60
    int64_t v1; // 0x180201c60
    int64_t v2 = v1 & 0xffffffff; // 0x180201c74
    int64_t v3; // 0x180201c60
    int64_t v4 = 0x100000000 * v3 / 0x100000000; // 0x180201c78
    return v4 < v2 ? 0xffffffff : (int64_t)(v4 > v2);
}

// Address range: 0x180201cb0 - 0x180201ceb
int64_t function_180201cb0(int64_t a1, int64_t a2) {
    // 0x180201cb0
    int64_t v1; // 0x180201cb0
    uint32_t v2 = (int32_t)v1;
    int64_t v3; // 0x180201cb0
    uint32_t v4 = (int32_t)v3;
    return v4 >= v2 ? (int64_t)(v4 > v2) : 0xffffffff;
}

// Address range: 0x180201d00 - 0x180201d3f
int64_t function_180201d00(int64_t a1, int64_t a2) {
    // 0x180201d00
    return 0;
}

// Address range: 0x180201d50 - 0x180201d8f
int64_t function_180201d50(int64_t a1, int64_t a2) {
    // 0x180201d50
    return 0;
}

// Address range: 0x180201da0 - 0x180201de1
int64_t function_180201da0(int64_t a1, int64_t a2) {
    // 0x180201da0
    int64_t v1; // 0x180201da0
    int128_t v2 = __asm_movss_31((int32_t)v1); // 0x180201db4
    int64_t v3; // 0x180201da0
    int128_t v4 = *(int128_t *)&v3; // 0x180201db8
    __asm_comiss(v2, v4);
    int64_t result = 0xffffffff; // 0x180201dbb
    bool v5; // 0x180201da0
    bool v6; // 0x180201da0
    if (v5 || v6) {
        // 0x180201dc4
        int64_t v7; // 0x180201da0
        __asm_comiss(__asm_movss_31((int32_t)v4), *(int128_t *)&v7);
        result = 0;
    }
    // 0x180201de0
    return result;
}

// Address range: 0x180201df0 - 0x180201e33
int64_t function_180201df0(int64_t a1, int64_t a2) {
    // 0x180201df0
    int64_t v1; // 0x180201df0
    __asm_comisd(__asm_movsd(a2), *(int128_t *)&v1);
    int64_t result = 0xffffffff; // 0x180201e0c
    bool v2; // 0x180201df0
    bool v3; // 0x180201df0
    if (v2 || v3) {
        // 0x180201e15
        int64_t v4; // 0x180201df0
        __asm_comisd(__asm_movsd(a2), *(int128_t *)&v4);
        result = 0;
    }
    // 0x180201e32
    return result;
}

// Address range: 0x180201e40 - 0x180201eb0
int64_t function_180201e40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180201e40
    int64_t v1; // 0x180201e40
    char v2 = v1;
    int64_t v3; // 0x180201e40
    if (a2 != 0) {
        // 0x180201e57
        int64_t v4; // 0x180201e40
        char v5 = v4;
        v3 = 0x100000000000000 * v1 / 0x100000000000000;
        if (v2 < v5) {
            // 0x180201e6b
            *(char *)a1 = v5;
            // 0x180201eaf
            return a1 & -256 | 1;
        }
    }
    // 0x180201e7e
    if (a3 == 0) {
        // 0x180201eaf
        return v3 & -256;
    }
    // 0x180201e86
    int64_t v6; // 0x180201e40
    unsigned char v7 = (char)v6;
    if (v2 <= v7) {
        // 0x180201eaf
        return 0x100000000000000 * v1 / 0x100000000000000 & -256;
    }
    // 0x180201e9a
    *(char *)a1 = v7;
    // 0x180201eaf
    return a1 & -256 | 1;
}

// Address range: 0x180201ec0 - 0x180201f30
int64_t function_180201ec0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180201ec0
    int64_t v1; // 0x180201ec0
    unsigned char v2 = (char)v1;
    int64_t v3; // 0x180201ec0
    if (a2 != 0) {
        // 0x180201ed7
        int64_t v4; // 0x180201ec0
        unsigned char v5 = (char)v4;
        v3 = 0;
        if (v2 < v5) {
            // 0x180201eeb
            *(char *)a1 = v5;
            // 0x180201f2f
            return a1 & -256 | 1;
        }
    }
    // 0x180201efe
    if (a3 == 0) {
        // 0x180201f2f
        return v3 & -256;
    }
    // 0x180201f06
    int64_t v6; // 0x180201ec0
    unsigned char v7 = (char)v6;
    if (v2 <= v7) {
        // 0x180201f2f
        return 0;
    }
    // 0x180201f1a
    *(char *)a1 = v7;
    // 0x180201f2f
    return a1 & -256 | 1;
}

// Address range: 0x180201f40 - 0x180201fb2
int64_t function_180201f40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180201f40
    int64_t v1; // 0x180201f40
    int16_t v2 = v1;
    int64_t v3; // 0x180201f40
    if (a2 != 0) {
        // 0x180201f57
        int64_t v4; // 0x180201f40
        int16_t v5 = v4;
        v3 = 0x1000000000000 * v1 / 0x1000000000000;
        if (v2 < v5) {
            // 0x180201f6b
            *(int16_t *)a1 = v5;
            // 0x180201fb1
            return a1 & -256 | 1;
        }
    }
    // 0x180201f7f
    if (a3 == 0) {
        // 0x180201fb1
        return v3 & -256;
    }
    // 0x180201f87
    int64_t v6; // 0x180201f40
    uint16_t v7 = (int16_t)v6;
    if (v2 <= v7) {
        // 0x180201fb1
        return 0x1000000000000 * v1 / 0x1000000000000 & -256;
    }
    // 0x180201f9b
    *(int16_t *)a1 = v7;
    // 0x180201fb1
    return a1 & -256 | 1;
}

// Address range: 0x180201fc0 - 0x180202032
int64_t function_180201fc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180201fc0
    int64_t v1; // 0x180201fc0
    uint16_t v2 = (int16_t)v1;
    int64_t v3; // 0x180201fc0
    if (a2 != 0) {
        // 0x180201fd7
        int64_t v4; // 0x180201fc0
        uint16_t v5 = (int16_t)v4;
        v3 = v1 & 0xffff;
        if (v2 < v5) {
            // 0x180201feb
            *(int16_t *)a1 = v5;
            // 0x180202031
            return a1 & -256 | 1;
        }
    }
    // 0x180201fff
    if (a3 == 0) {
        // 0x180202031
        return v3 & -256;
    }
    // 0x180202007
    int64_t v6; // 0x180201fc0
    uint16_t v7 = (int16_t)v6;
    if (v2 <= v7) {
        // 0x180202031
        return v1 & 0xffff & -256;
    }
    // 0x18020201b
    *(int16_t *)a1 = v7;
    // 0x180202031
    return a1 & -256 | 1;
}

// Address range: 0x180202040 - 0x1802020a6
int64_t function_180202040(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180202040
    int64_t v1; // 0x180202040
    int64_t v2; // 0x180202040
    if (a2 != 0) {
        // 0x180202057
        v1 = a1;
        int64_t v3; // 0x180202040
        if (0x100000000 * v2 / 0x100000000 < (v3 & 0xffffffff)) {
            // 0x180202067
            *(int32_t *)a1 = (int32_t)v3;
            // 0x1802020a5
            return a1 & -256 | 1;
        }
    }
    // 0x180202079
    if (a3 == 0) {
        // 0x1802020a5
        return v1 & -256;
    }
    // 0x180202081
    int64_t v4; // 0x180202040
    if (0x100000000 * v2 / 0x100000000 <= (v4 & 0xffffffff)) {
        // 0x1802020a5
        return a1 & -256;
    }
    // 0x180202091
    *(int32_t *)a1 = (int32_t)v4;
    // 0x1802020a5
    return a1 & -256 | 1;
}

// Address range: 0x1802020b0 - 0x180202116
int64_t function_1802020b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1802020b0
    int64_t v1; // 0x1802020b0
    uint32_t v2 = (int32_t)v1;
    int64_t v3; // 0x1802020b0
    if (a2 != 0) {
        // 0x1802020c7
        int64_t v4; // 0x1802020b0
        uint32_t v5 = (int32_t)v4;
        v3 = a1;
        if (v2 < v5) {
            // 0x1802020d7
            *(int32_t *)a1 = v5;
            // 0x180202115
            return a1 & -256 | 1;
        }
    }
    // 0x1802020e9
    if (a3 == 0) {
        // 0x180202115
        return v3 & -256;
    }
    // 0x1802020f1
    int64_t v6; // 0x1802020b0
    uint32_t v7 = (int32_t)v6;
    if (v2 <= v7) {
        // 0x180202115
        return a1 & -256;
    }
    // 0x180202101
    *(int32_t *)a1 = v7;
    // 0x180202115
    return a1 & -256 | 1;
}

// Address range: 0x180202120 - 0x18020218e
int64_t function_180202120(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180202120
    int64_t v1; // 0x180202120
    return ((a3 | a2) == 0 ? v1 : a1) & -256;
}

// Address range: 0x1802021a0 - 0x18020220e
int64_t function_1802021a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1802021a0
    int64_t v1; // 0x1802021a0
    return ((a3 | a2) == 0 ? v1 : a1) & -256;
}

// Address range: 0x180202220 - 0x180202294
int64_t function_180202220(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180202220
    if (a2 != 0) {
        // 0x180202237
        int64_t v1; // 0x180202220
        int32_t v2 = v1;
        int64_t v3; // 0x180202220
        __asm_comiss(__asm_movss_31(v2), *(int128_t *)&v3);
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31(v2));
        // 0x180202293
        return a1 & -256 | 1;
    }
    int64_t result; // 0x180202220
    if (a3 == 0) {
        // 0x180202291
        int64_t v4; // 0x180202220
        result = v4 & -256;
    } else {
        // 0x180202268
        int64_t v5; // 0x180202220
        int128_t v6 = __asm_movss_31((int32_t)v5); // 0x180202272
        int64_t v7; // 0x180202220
        int128_t v8 = *(int128_t *)&v7; // 0x180202276
        __asm_comiss(v6, v8);
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
        result = a1 & -256 | 1;
    }
    // 0x180202293
    return result;
}

// Address range: 0x1802022a0 - 0x180202316
int64_t function_1802022a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    if (a2 != 0) {
        // 0x1802022b7
        int64_t v2; // 0x1802022a0
        __asm_comisd(__asm_movsd(a2), *(int128_t *)&v2);
        *(int64_t *)a1 = __asm_movsd_17(__asm_movsd(a2));
        // 0x180202315
        return a1 & -256 | 1;
    }
    int64_t result; // 0x1802022a0
    if (a3 == 0) {
        // 0x180202313
        int64_t v3; // 0x1802022a0
        result = v3 & -256;
    } else {
        int128_t v4 = __asm_movsd(a3); // 0x1802022f3
        int128_t v5 = *(int128_t *)&v1; // 0x1802022f7
        __asm_comisd(v4, v5);
        *(int64_t *)a1 = __asm_movsd_17(__asm_movsd((int64_t)v5));
        result = a1 & -256 | 1;
    }
    // 0x180202315
    return result;
}

// Address range: 0x180202320 - 0x180202390
int64_t function_180202320(int32_t a1) {
    if (a1 < 0) {
        // 0x18020232f
        __asm_movss_31(0x800000);
        // 0x18020238b
        int64_t result; // 0x180202320
        return result;
    }
    int64_t result2; // 0x180202320
    int64_t v1; // 0x180202320
    if (a1 > 9) {
        int128_t v2 = __asm_movaps(__asm_cvtsi2ss(-a1)); // 0x180202363
        int128_t v3 = __asm_movss_31(0x41200000); // 0x180202366
        result2 = function_180272490(v3, v2);
        v1 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v3)));
    } else {
        int64_t v4 = a1; // 0x180202340
        int128_t v5 = __asm_movss_31(*(int32_t *)(4 * v4 + (int64_t)&g424)); // 0x18020234c
        result2 = v4;
        v1 = __asm_movss(v5);
    }
    // 0x180202385
    __asm_movss_31((int32_t)v1);
    // 0x18020238b
    return result2;
}

// Address range: 0x1802023a0 - 0x18020246b
int64_t function_1802023a0(int64_t a1, int32_t * a2) {
    // 0x1802023a0
    int64_t v1; // 0x1802023a0
    int64_t v2 = (int64_t)(bool)((char)v1 == 45) + a1;
    int64_t result = v2 + (int64_t)(*(char *)v2 == 43);
    char v3 = *(char *)result; // 0x1802023fe
    int32_t v4 = 0; // 0x180202404
    int64_t result2 = result; // 0x180202404
    int32_t v5; // 0x1802023a0
    if (v3 > 57) {
        // 0x18020243d
        v5 = 0;
        *a2 = (char)v1 != 45 ? v5 : -v5;
        return result;
    }
    v4 = (int32_t)v3 - 48 + 10 * v4;
    result2++;
    char v6 = *(char *)result2; // 0x1802023fe
    while (v6 <= 57) {
        // 0x180202413
        v4 = (int32_t)v6 - 48 + 10 * v4;
        result2++;
        v6 = *(char *)result2;
    }
    // 0x18020243d
    v5 = v4;
    *a2 = (char)v1 != 45 ? v5 : -v5;
    return result2;
}

// Address range: 0x180202480 - 0x18020248e
int64_t function_180202480(int64_t a1) {
    // 0x180202480
    return (int64_t)*(int32_t *)(a1 + 12);
}

// Address range: 0x1802024a0 - 0x1802024dd
int64_t function_1802024a0(int64_t a1, int64_t a2) {
    uint16_t result = *(int16_t *)(*(int64_t *)(a1 + 32) + 0x100000000 * a2 / 0x80000000); // 0x1802024d5
    return result;
}

// Address range: 0x1802024f0 - 0x180202590
int64_t function_1802024f0(int64_t a1, int32_t a2, int32_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x180202523
    uint16_t v2 = *(int16_t *)(v1 + 2 * (int64_t)(a3 + a2)); // 0x180202535
    int64_t result; // 0x1802024f0
    if (v2 != 10) {
        // 0x180202551
        function_18021bb90(*(int64_t *)(v1 + 0x3d88), (int32_t)v2);
        int128_t v3; // 0x1802024f0
        __asm_mulss(v3, *(int32_t *)(v1 + 0x3d98));
        result = v1;
    } else {
        // 0x180202547
        __asm_movss_31(-0x40800000);
        result = v2;
    }
    // 0x18020258b
    return result;
}

// Address range: 0x1802025a0 - 0x1802025ca
int64_t function_1802025a0(int32_t a1) {
    // 0x1802025a0
    return (uint32_t)(a1 < 0x200000 ? a1 : 0);
}

// Address range: 0x1802025d0 - 0x1802026c2
int64_t function_1802025d0(int32_t * a1, int64_t a2, int32_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(a2 + 32); // 0x1802025e8
    int64_t v3 = 0; // bp-24, 0x1802025f1
    int32_t v4 = *(int32_t *)(a2 + 12); // 0x1802025ff
    int64_t v5 = v2 + 2 * (int64_t)a3; // 0x180202619
    int64_t v6 = &v3; // 0x18020262b
    int32_t v7; // bp-40, 0x1802025d0
    function_180201660((int64_t *)&v7, v6, v5, 2 * (int64_t)v4 + v2, v6, 0, 1);
    int128_t v8; // 0x1802025d0
    *a1 = (int32_t)__asm_movss(__asm_xorps(v8, v8));
    *(int32_t *)(v1 + 4) = (int32_t)__asm_movss(__asm_movss_31(v7));
    int32_t v9; // 0x1802025d0
    int128_t v10 = __asm_movss_31(v9); // 0x18020266e
    *(int32_t *)(v1 + 8) = (int32_t)__asm_movss(v10);
    *(int32_t *)(v1 + 12) = (int32_t)__asm_movss(__asm_xorps(v10, v10));
    *(int32_t *)(v1 + 16) = (int32_t)__asm_movss(__asm_movss_31(v9));
    int64_t result = (v3 - v5) / 2; // 0x1802026b2
    *(int32_t *)(v1 + 20) = (int32_t)result;
    return result;
}

// Address range: 0x1802026d0 - 0x18020275a
int64_t function_1802026d0(int64_t a1) {
    int64_t result = 0; // 0x1802026d0
    switch ((int32_t)a1) {
        case 44: {
        }
        case 59: {
        }
        case 40: {
        }
        case 41: {
        }
        case 123: {
        }
        case 125: {
        }
        case 91: {
        }
        case 93: {
        }
        case 124: {
        }
        case 10: {
        }
        case 13: {
        }
        case 46: {
        }
        case 33: {
        }
        case 92: {
        }
        case 47: {
            // 0x18020274a
            result = 1;
            // break -> 0x180202751
            return 0;
        }
    }
    // 0x180202751
    return result;
}

// Address range: 0x180202760 - 0x18020295a
int64_t function_180202760(int64_t a1, int32_t a2) {
    // 0x180202760
    if ((*(int32_t *)(a1 + 3720) & 1024) != 0 || a2 >= 0 != a2 != 0) {
        // 0x180202952
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x1802027b9
    uint16_t v2 = *(int16_t *)(*v1 + 2 * (int64_t)(a2 - 1)); // 0x1802027cb
    int64_t v3 = function_1802026d0((int64_t)v2); // 0x180202846
    uint16_t v4 = *(int16_t *)(*v1 + 2 * (int64_t)a2); // 0x18020287f
    int32_t v5 = (int32_t)function_1802026d0((int64_t)v4) & 255;
    if ((v3 & 255) == 0 != (v2 != 0x3000 && v2 != 32 && v2 != 9)) {
        if (v5 == 0 == (v4 != 0x3000 && v4 != 32 && v4 != 9)) {
            // 0x180202952
            return 1;
        }
    }
    // 0x18020292a
    if ((v3 & 255) == 0 != v5 != 0) {
        // 0x180202952
        return 0;
    }
    // 0x180202952
    return 1;
}

// Address range: 0x180202960 - 0x180202b51
int64_t function_180202960(int64_t a1, int32_t a2) {
    // 0x180202960
    if ((*(int32_t *)(a1 + 3720) & 1024) != 0 || a2 >= 0 != a2 != 0) {
        // 0x180202b49
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x1802029b6
    uint16_t v2 = *(int16_t *)(*v1 + 2 * (int64_t)a2); // 0x1802029c8
    int64_t v3 = function_1802026d0((int64_t)v2); // 0x180202a40
    uint16_t v4 = *(int16_t *)(*v1 + 2 * (int64_t)(a2 - 1)); // 0x180202a7c
    int32_t v5 = (int32_t)function_1802026d0((int64_t)v4) & 255;
    if (v2 == 0x3000 || v2 == 32 || v2 == 9) {
        if (v5 == 0 == (v4 != 0x3000 && v4 != 32 && v4 != 9)) {
            // 0x180202b49
            return 1;
        }
    }
    // 0x180202b21
    if ((v3 & 255) == 0 != v5 != 0) {
        // 0x180202b49
        return 0;
    }
    // 0x180202b49
    return 1;
}

// Address range: 0x180202b60 - 0x180202bbe
int64_t function_180202b60(int64_t a1, int32_t a2) {
    int32_t v1 = a2; // 0x180202b73
    v1--;
    int64_t result = 0; // 0x180202b7c
    while (v1 >= 0) {
        // 0x180202b7e
        if ((int32_t)function_180202760(a1, v1) != 0) {
            result = v1;
            return result;
        }
        v1--;
        result = 0;
    }
  lab_0x180202b9c:
    // 0x180202b9c
    return result;
}

// Address range: 0x180202bd0 - 0x180202c40
int64_t function_180202bd0(int64_t a1, int32_t a2) {
    uint32_t v1 = *(int32_t *)(a1 + 12); // 0x180202bec
    int64_t v2 = v1; // 0x180202bf3
    int32_t v3 = a2; // 0x180202bef
    v3++;
    int64_t v4 = v3; // 0x180202bfb
    while (v4 < v2) {
        // 0x180202bfd
        if ((int32_t)function_180202960(a1, v3) != 0) {
            // break -> 0x180202c1b
            return 0;
        }
        v3++;
        v4 = v3;
    }
    // 0x180202c1b
    return (int64_t)(v4 > v2 ? v1 : v3);
}

// Address range: 0x180202c50 - 0x180202cc0
int64_t function_180202c50(int64_t a1, int32_t a2) {
    uint32_t v1 = *(int32_t *)(a1 + 12); // 0x180202c6c
    int64_t v2 = v1; // 0x180202c73
    int32_t v3 = a2; // 0x180202c6f
    v3++;
    int64_t v4 = v3; // 0x180202c7b
    while (v4 < v2) {
        // 0x180202c7d
        if ((int32_t)function_180202760(a1, v3) != 0) {
            // break -> 0x180202c9b
            return 0;
        }
        v3++;
        v4 = v3;
    }
    // 0x180202c9b
    return (int64_t)(v4 > v2 ? v1 : v3);
}

// Address range: 0x180202cd0 - 0x180202d1c
int64_t function_180202cd0(int64_t a1, int32_t a2) {
    // 0x180202cd0
    int64_t result; // 0x180202cd0
    if (*(char *)(a1 + 89) == 0) {
        // 0x180202d09
        result = function_180202c50(a1, a2);
    } else {
        // 0x180202cf7
        result = function_180202bd0(a1, a2);
    }
    // 0x180202d17
    return result;
}

// Address range: 0x180202d30 - 0x180202e34
int64_t function_180202d30(int64_t a1, int64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x180202d4c
    int64_t v2 = 0x100000000 * a2 / 0x80000000; // 0x180202d50
    int64_t v3 = *v1 + v2; // 0x180202d50
    int16_t * v4 = (int16_t *)v3; // 0x180202d54
    *(char *)(a1 + 3718) = 1;
    int64_t v5 = 2 * (int64_t)a3; // 0x180202d6f
    int64_t v6 = function_180196720(v4, (int64_t *)(v3 + v5)); // 0x180202d7b
    int32_t * v7 = (int32_t *)(a1 + 16); // 0x180202d89
    *v7 = *v7 - (int32_t)v6;
    int32_t * v8 = (int32_t *)(a1 + 12); // 0x180202dad
    *v8 = *v8 - a3;
    int64_t v9 = v5 + v2 + *v1; // 0x180202dd1
    int16_t v10 = *(int16_t *)v9; // 0x180202ddf
    int64_t v11 = v9; // 0x180202e06
    int16_t * v12 = v4; // 0x180202e06
    if (v10 == 0) {
        // 0x180202e25
        *v4 = 0;
        return 0;
    }
    v11 += 2;
    *v12 = v10;
    v12 = (int16_t *)((int64_t)v12 + 2);
    int16_t v13 = *(int16_t *)v11; // 0x180202ddf
    while (v13 != 0) {
        // 0x180202e08
        v11 += 2;
        *v12 = v13;
        v12 = (int16_t *)((int64_t)v12 + 2);
        v13 = *(int16_t *)v11;
    }
    // 0x180202e25
    *v12 = 0;
    return 0;
}

// Address range: 0x180202e40 - 0x1802030f2
int64_t function_180202e40(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = a4;
    int32_t v2 = *(int32_t *)(a1 + 3720); // 0x180202e62
    int32_t * v3 = (int32_t *)(a1 + 12); // 0x180202e8e
    int32_t v4 = *v3; // 0x180202e8e
    int64_t v5 = 2 * v1; // 0x180202ea5
    int32_t v6 = function_180196720((int16_t *)a3, (int64_t *)(v5 + a3)); // 0x180202eb9
    if ((v2 & 0x200000) == 0) {
        int32_t v7 = v6 + 1 + *(int32_t *)(a1 + 16); // 0x180202ed5
        if (v7 > *(int32_t *)(a1 + 76)) {
            // 0x1802030ea
            return v7 & -256;
        }
    }
    int32_t v8 = v4 + 1;
    int64_t v9 = a1 + 24; // 0x180202f04
    if (v8 + a4 > *(int32_t *)v9) {
        // 0x180202f0d
        if ((v2 & 0x200000) == 0) {
            // 0x1802030ea
            return 0;
        }
        int32_t v10 = 4 * a4; // 0x180202f67
        int32_t v11 = 32; // 0x180202f73
        if (v10 > 31) {
            uint32_t v12 = a4 > 256 ? a4 : 256;
            v11 = (int64_t)v10 > (int64_t)v12 ? v12 : v10;
        }
        // 0x180202fa3
        function_1801cfcd0(v9, v11 + v8);
    }
    int64_t v13 = 0x100000000 * a2;
    int64_t * v14 = (int64_t *)(a1 + 32); // 0x180202fcc
    int64_t v15 = *v14; // 0x180202fcc
    int32_t v16 = a2; // 0x180202fd9
    int64_t v17; // 0x180202e40
    if (v4 == v16) {
        // 0x180202fc4
        v17 = v15 + v13 / 0x80000000;
    } else {
        int64_t v18 = v15 + v13 / 0x80000000;
        function_18029d4e0(v18 + v5, v18, 2 * (int64_t)(v4 - v16), v1);
        v17 = v18;
    }
    // 0x18020303d
    function_18029d4e0(v17, a3, v5, v1);
    *(char *)(a1 + 3718) = 1;
    *v3 = *v3 + a4;
    int32_t * v19 = (int32_t *)(a1 + 16); // 0x18020309d
    *v19 = *v19 + v6;
    *(int16_t *)(2 * (int64_t)*v3 + *v14) = 0;
    // 0x1802030ea
    return 1;
}

// Address range: 0x180203100 - 0x18020334a
int64_t function_180203100(int64_t a1) {
    // 0x180203100
    int128_t v1; // 0x180203100
    __asm_movss(v1);
    int128_t v2; // 0x180203100
    __asm_movss(v2);
    int64_t v3 = function_180202480(a1); // 0x180203129
    int128_t v4; // 0x180203100
    int128_t v5 = __asm_xorps(v4, v4); // 0x180203132
    __asm_movss(v5);
    int128_t v6 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v5, v5))); // 0x18020314c
    int32_t v7 = __asm_movss(v6); // bp-48, 0x180203152
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v6, v6))));
    if ((v3 & 0xffffffff) != 0) {
        // 0x180203183
        function_1802025d0(&v7, a1, 0);
    }
    // 0x180203338
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180203350 - 0x1802033fa
int64_t function_180203350(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180203350
    int128_t v1; // 0x180203350
    int64_t v2 = __asm_movss(v1); // 0x180203350
    int128_t v3; // 0x180203350
    int64_t v4 = __asm_movss(v3); // 0x180203356
    int64_t v5 = v2; // 0x180203384
    if (*(char *)(a2 + 23) != 0) {
        // 0x180203386
        int64_t v6; // bp-40, 0x180203350
        function_1802025d0((int32_t *)&v6, a1, 0);
        int32_t v7; // 0x180203350
        v5 = __asm_movss(__asm_movss_31(v7));
    }
    // 0x1802033a4
    __asm_movss_31((int32_t)v5);
    __asm_movss_31((int32_t)v4);
    *(int32_t *)a2 = (int32_t)function_180203100(a1);
    int64_t v8; // 0x180203350
    *(int32_t *)(a2 + 4) = *(int32_t *)&v8;
    *(int32_t *)(a2 + 8) = *(int32_t *)&v8;
    *(char *)(a2 + 22) = 0;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180203400 - 0x1802034c0
int64_t function_180203400(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180203400
    int128_t v1; // 0x180203400
    int64_t v2 = __asm_movss(v1); // 0x180203400
    int128_t v3; // 0x180203400
    int64_t v4 = __asm_movss(v3); // 0x180203406
    int64_t v5 = v2; // 0x18020343c
    if (*(char *)(a2 + 23) != 0) {
        // 0x18020343e
        int64_t v6; // bp-48, 0x180203400
        function_1802025d0((int32_t *)&v6, a1, 0);
        int32_t v7; // 0x180203400
        v5 = __asm_movss(__asm_movss_31(v7));
    }
    int32_t * v8 = (int32_t *)(a2 + 8); // 0x180203466
    int32_t * v9 = (int32_t *)(a2 + 4); // 0x180203469
    if (*v9 == *v8) {
        // 0x18020346e
        int64_t v10; // 0x180203400
        *v9 = (int32_t)v10;
    }
    // 0x18020347d
    __asm_movss_31((int32_t)v5);
    __asm_movss_31((int32_t)v4);
    int32_t v11 = function_180203100(a1); // 0x180203493
    *v8 = v11;
    *(int32_t *)a2 = v11;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802034d0 - 0x180203783
int64_t function_1802034d0(int64_t a1, int64_t a2) {
    int16_t * v1 = (int16_t *)(a2 + 3614); // 0x180203505
    int16_t v2 = *v1; // 0x180203505
    if (v2 == 0) {
        // 0x18020376f
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = a2 + 16;
    int32_t v4; // bp-56, 0x1802034d0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)(16 * (int64_t)v2 + v3), 16);
    int16_t * v5 = (int16_t *)(a2 + 3616); // 0x180203546
    int64_t v6 = 16 * (int64_t)*v5 + v3; // 0x18020355a
    *(int32_t *)(v6 + 12) = -1;
    *(int32_t *)v6 = v4;
    uint32_t v7; // 0x1802034d0
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)(a2 + 3620); // 0x1802035a4
        int32_t v9 = *v8 + v7;
        if (v9 < 999) {
            int32_t * v10 = (int32_t *)(a2 + 3624); // 0x1802035da
            int32_t v11 = *v10; // 0x1802035da
            int16_t v12 = *v5;
            int16_t v13 = v12; // 0x1802035e0
            int32_t v14 = v11; // 0x1802035e0
            int16_t v15 = v12; // 0x1802035e0
            if (v9 > v11) {
                while (v13 != 99) {
                    // 0x1802035f8
                    function_180205670(a2 + 32);
                    uint32_t v16 = *v10; // 0x1802035da
                    int16_t v17 = *v5;
                    v13 = v17;
                    v14 = v16;
                    v15 = v17;
                    if (*v8 + v7 <= v16) {
                        goto lab_0x18020367c;
                    }
                }
                // 0x18020376f
                return function_18026ad50((int64_t)g731);
            }
          lab_0x18020367c:;
            int32_t * v18 = (int32_t *)(a2 + 28 + 16 * (int64_t)v15); // 0x18020363f
            *v18 = v14 - v7;
            *v10 = *v10 - v7;
            int32_t v19 = 0; // 0x18020366c
            int64_t v20 = function_1802024a0(a1, (int64_t)(v4 + v19)); // 0x180203692
            *(int16_t *)(a2 + 1616 + 2 * (int64_t)(*v18 + v19)) = (int16_t)v20;
            v19++;
            while ((int64_t)v19 < (int64_t)v7) {
                // 0x18020367c
                v20 = function_1802024a0(a1, (int64_t)(v4 + v19));
                *(int16_t *)(a2 + 1616 + 2 * (int64_t)(*v18 + v19)) = (int16_t)v20;
                v19++;
            }
        } else {
            // 0x1802035b5
            *(int32_t *)(v6 + 4) = 0;
        }
        // 0x1802036be
        function_180202d30(a1, (int64_t)v4, v7);
    }
    int32_t v21; // 0x1802034d0
    if (v21 != 0) {
        // 0x1802036dc
        int32_t v22; // 0x1802034d0
        function_180202e40(a1, (int64_t)v4, a2 + 1616 + 2 * (int64_t)v22, v21);
        int32_t * v23 = (int32_t *)(a2 + 3620); // 0x180203710
        *v23 = *v23 - v21;
    }
    // 0x180203723
    *(int32_t *)a2 = v4 + v21;
    *v1 = *v1 - 1;
    *v5 = *v5 - 1;
    // 0x18020376f
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180203790 - 0x1802039df
int64_t function_180203790(int64_t a1, int64_t a2) {
    int16_t * v1 = (int16_t *)(a2 + 3616); // 0x1802037c2
    int16_t v2 = *v1; // 0x1802037c2
    if (v2 == 99) {
        // 0x1802039cb
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = a2 + 32; // 0x1802037b4
    int16_t * v4 = (int16_t *)(a2 + 3614); // 0x1802037d8
    int64_t v5 = 16 * (int64_t)*v4 + v3; // 0x1802037e9
    int32_t * v6 = (int32_t *)v5; // 0x1802037ef
    int32_t v7; // bp-48, 0x180203790
    __asm_rep_movsb_memcpy((char *)&v7, (char *)(16 * (int64_t)v2 + v3), 16);
    *v6 = v7;
    int32_t * v8 = (int32_t *)(v5 + 12); // 0x180203845
    *v8 = -1;
    int32_t v9; // 0x180203790
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)(v5 + 4); // 0x180203832
        int32_t * v11 = (int32_t *)(a2 + 3620); // 0x18020385c
        int32_t v12 = *v11; // 0x18020385c
        if (*v10 + v12 > *(int32_t *)(a2 + 3624)) {
            // 0x180203877
            *v10 = 0;
            *(int32_t *)(v5 + 8) = 0;
        } else {
            // 0x180203894
            *v8 = v12;
            *v11 = *v10 + *v11;
            if (*v10 != 0) {
                int32_t v13 = 0; // 0x1802038d3
                int64_t v14 = function_1802024a0(a1, (int64_t)(*v6 + v13)); // 0x1802038f9
                *(int16_t *)(a2 + 1616 + 2 * (int64_t)(*v8 + v13)) = (int16_t)v14;
                v13++;
                while ((int64_t)v13 < (int64_t)*v10) {
                    // 0x1802038e7
                    v14 = function_1802024a0(a1, (int64_t)(*v6 + v13));
                    *(int16_t *)(a2 + 1616 + 2 * (int64_t)(*v8 + v13)) = (int16_t)v14;
                    v13++;
                }
            }
        }
        // 0x180203925
        function_180202d30(a1, (int64_t)v7, v9);
    }
    int32_t v15; // 0x180203790
    if (v15 != 0) {
        // 0x180203940
        int32_t v16; // 0x180203790
        function_180202e40(a1, (int64_t)v7, a2 + 1616 + 2 * (int64_t)v16, v15);
        int32_t * v17 = (int32_t *)(a2 + 3624); // 0x18020396d
        *v17 = *v17 + v15;
    }
    // 0x180203982
    *(int32_t *)a2 = v7 + v15;
    *v4 = *v4 + 1;
    *v1 = *v1 + 1;
    // 0x1802039cb
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802039f0 - 0x180203a7d
int64_t function_1802039f0(int64_t a1, int64_t a2, int32_t a3, uint32_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_180205930(a2 + 32, a3, a4, 0, a1); // 0x180203a20
    if (v1 == 0) {
        // 0x180203a78
        return 0;
    }
    int64_t result = a4; // 0x180203a46
    if (a4 == 0) {
        // 0x180203a78
        return 0;
    }
    int32_t v2 = 0; // 0x180203a4e
    int64_t v3 = function_1802024a0(a1, (int64_t)(v2 + a3)); // 0x180203a63
    *(int16_t *)v1 = (int16_t)v3;
    v2++;
    int64_t v4 = v2; // 0x180203a4e
    while (v4 < result) {
        // 0x180203a50
        v3 = function_1802024a0(a1, (int64_t)(v2 + a3));
        *(int16_t *)(2 * v4 + v1) = (int16_t)v3;
        v2++;
        v4 = v2;
    }
    // 0x180203a78
    return result;
}

// Address range: 0x180203a90 - 0x180203ac5
int64_t function_180203a90(int64_t a1, int32_t a2, int32_t a3) {
    // 0x180203a90
    return function_180205930(a1 + 32, a2, 0, a3, (int64_t)a2);
}

// Address range: 0x180203ad0 - 0x180203b5f
int64_t function_180203ad0(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int32_t a5) {
    int64_t result = a4 & 0xffffffff;
    int64_t v1 = function_180205930(a2 + 32, a3, (int32_t)a4, a5, a1); // 0x180203b02
    if (result == 0 || v1 == 0) {
        // 0x180203b5a
        return 0;
    }
    int32_t v2 = 0; // 0x180203b12
    int64_t v3 = function_1802024a0(a1, (int64_t)(v2 + a3)); // 0x180203b45
    *(int16_t *)v1 = (int16_t)v3;
    v2++;
    int64_t v4 = v2; // 0x180203b30
    while (result > v4) {
        // 0x180203b32
        v3 = function_1802024a0(a1, (int64_t)(v2 + a3));
        *(int16_t *)(2 * v4 + v1) = (int16_t)v3;
        v2++;
        v4 = v2;
    }
    // 0x180203b5a
    return result;
}

// Address range: 0x180203b70 - 0x180203dba
int64_t function_180203b70(int64_t * a1, int64_t a2, uint32_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = function_180202480(a2); // 0x180203ba4
    int32_t v3 = v2; // 0x180203ba9
    int32_t v4; // bp-48, 0x180203b70
    int128_t v5; // 0x180203b70
    int32_t v6; // 0x180203b70
    int32_t v7; // 0x180203b70
    if ((int32_t)a4 != 0 && v3 == a3) {
        // 0x180203bcc
        function_1802025d0(&v4, a2, 0);
        *(int32_t *)(v1 + 4) = (int32_t)__asm_movss(__asm_xorps(v5, v5));
        *(int32_t *)(v1 + 12) = 0;
        *(int32_t *)(v1 + 16) = v3;
        *(int32_t *)(v1 + 8) = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(v7), v6));
        int32_t v8; // 0x180203b70
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31(v8));
        // 0x180203da8
        return function_18026ad50((int64_t)g731);
    }
    int64_t v9 = __asm_movss(__asm_xorps(v5, v5)); // 0x180203c35
    int32_t * v10 = (int32_t *)(v1 + 4); // 0x180203c35
    *v10 = (int32_t)v9;
    function_1802025d0(&v4, a2, 0);
    int64_t v11 = a3; // 0x180203c62
    int32_t v12 = 0; // 0x180203c62
    int32_t v13 = 0; // 0x180203c62
    int32_t v14; // 0x180203b70
    uint32_t v15; // 0x180203b70
    if (v11 >= (int64_t)v15) {
        int32_t v16 = 0;
        int32_t v17; // 0x180203b70
        int32_t v18 = v17;
        int64_t v19; // 0x180203c8f
        if (v3 >= 1 && v18 == v3) {
            // 0x180203c82
            v19 = function_1802024a0(a2, v2 + 0xffffffff & 0xffffffff);
            if (*(int16_t *)&g717 != (int16_t)v19) {
                // break -> 0x180203cef
                return 0;
            }
        }
        // 0x180203ca4
        int32_t v20; // 0x180203b70
        *v10 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v10), v20));
        v12 = v16;
        v13 = v18;
        v14 = 0;
        while (v18 != v3) {
            // 0x180203c3a
            function_1802025d0(&v4, a2, v18);
            int32_t v21 = v18 + v15; // 0x180203c57
            int32_t v22 = v16; // 0x180203c62
            v12 = v16;
            v13 = v18;
            if (v11 < (int64_t)v21) {
                // break -> 0x180203cef
                return 0;
            }
            v16 = v18;
            v18 = v21;
            if (v3 >= 1 && v18 == v3) {
                // 0x180203c82
                v19 = function_1802024a0(a2, v2 + 0xffffffff & 0xffffffff);
                v12 = v22;
                v13 = v16;
                if (*(int16_t *)&g717 != (int16_t)v19) {
                    // break -> 0x180203cef
                    return 0;
                }
            }
            // 0x180203ca4
            *v10 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v10), v20));
            v12 = v16;
            v13 = v18;
            v14 = 0;
        }
    }
    // 0x180203cef
    *(int32_t *)(v1 + 12) = v13;
    *(int32_t *)(v1 + 16) = v14;
    *(int32_t *)(v1 + 8) = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(v7), v6));
    *(int32_t *)(v1 + 20) = v12;
    int128_t v23 = __asm_movss_31(v4); // 0x180203d36
    *(int32_t *)a1 = (int32_t)__asm_movss(v23);
    if (v13 >= a3) {
        // 0x180203da8
        return function_18026ad50((int64_t)g731);
    }
    int32_t v24 = 0; // 0x180203d4e
    function_1802024f0(a2, v13, v24);
    int64_t v25 = __asm_movss(v23); // 0x180203d7c
    int64_t v26; // 0x180203b70
    int64_t v27 = __asm_movss(__asm_movss_31(*(int32_t *)&v26)); // 0x180203d8b
    int128_t v28 = __asm_addss(__asm_movss_31((int32_t)v27), (int32_t)v25); // 0x180203d97
    *(int32_t *)a1 = (int32_t)__asm_movss(v28);
    v24++;
    while (v24 != a3 - v13) {
        // 0x180203d69
        function_1802024f0(a2, v13, v24);
        v25 = __asm_movss(v28);
        v27 = __asm_movss(__asm_movss_31(*(int32_t *)&v26));
        v28 = __asm_addss(__asm_movss_31((int32_t)v27), (int32_t)v25);
        *(int32_t *)a1 = (int32_t)__asm_movss(v28);
        v24++;
    }
    // 0x180203da8
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180203dc0 - 0x180203e60
int64_t function_180203dc0(int64_t a1, int64_t result) {
    int64_t v1 = function_180202480(a1); // 0x180203dd3
    int32_t v2 = v1; // 0x180203dd8
    int32_t * v3 = (int32_t *)(result + 8); // 0x180203de6
    int32_t v4 = *v3; // 0x180203de6
    int32_t * v5 = (int32_t *)(result + 4); // 0x180203de9
    int32_t v6 = *v5; // 0x180203de9
    int64_t v7 = v1 & 0xffffffff;
    if (v6 != v4) {
        int32_t v8 = v6; // 0x180203dfa
        int32_t v9 = v4; // 0x180203dfa
        if (v7 < (int64_t)v6) {
            // 0x180203dfc
            *v5 = v2;
            v8 = v2;
            v9 = *v3;
        }
        int32_t v10 = v8; // 0x180203e14
        int32_t v11 = v9; // 0x180203e14
        if (v7 < (int64_t)v9) {
            // 0x180203e16
            *v3 = v2;
            v10 = *v5;
            v11 = v2;
        }
        // 0x180203e22
        if (v10 == v11) {
            // 0x180203e34
            *(int32_t *)result = v10;
        }
    }
    // 0x180203e43
    int64_t v12; // 0x180203dc0
    if (v7 < (int64_t)*(int32_t *)&v12) {
        // 0x180203e50
        *(int32_t *)result = v2;
    }
    // 0x180203e5b
    return result;
}

// Address range: 0x180203e70 - 0x180203ec2
int64_t function_180203e70(int64_t a1, int64_t result, uint32_t a3, int64_t a4) {
    int32_t v1 = a4; // 0x180203e70
    function_1802039f0(a1, result, a3, v1, (int64_t)a3, 0x100000000 * a4 / 0x100000000);
    function_180202d30(a1, (int64_t)a3, v1);
    *(char *)(result + 22) = 0;
    return result;
}

// Address range: 0x180203ed0 - 0x180203fbc
int64_t function_180203ed0(int64_t a1, int64_t result) {
    // 0x180203ed0
    function_180203dc0(a1, result);
    int32_t * v1 = (int32_t *)(result + 8); // 0x180203ef8
    uint32_t v2 = *v1; // 0x180203ef8
    int32_t * v3 = (int32_t *)(result + 4); // 0x180203efb
    int32_t v4 = *v3; // 0x180203efb
    if (v4 == v2) {
        // 0x180203fb7
        return result;
    }
    int64_t v5; // 0x180203ed0
    if ((int64_t)v4 < (int64_t)v2) {
        // 0x180203f16
        function_180203e70(a1, result, v4, (int64_t)(v2 - v4));
        *(int32_t *)result = *v3;
        *v1 = *(int32_t *)&v5;
    } else {
        // 0x180203f63
        function_180203e70(a1, result, v2, (int64_t)(v4 - v2));
        *(int32_t *)result = *v1;
        *v3 = *(int32_t *)&v5;
    }
    // 0x180203fae
    *(char *)(result + 22) = 0;
    // 0x180203fb7
    return result;
}

// Address range: 0x180203fd0 - 0x180204016
int64_t function_180203fd0(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 4); // 0x180203fe3
    uint32_t v2 = *v1; // 0x180203fe3
    int32_t * v3 = (int32_t *)(result + 8); // 0x180203fe6
    int32_t v4 = *v3; // 0x180203fe6
    if ((int64_t)v4 < (int64_t)v2) {
        // 0x180203feb
        *v3 = v2;
        *v1 = v4;
    }
    // 0x180204011
    return result;
}

// Address range: 0x180204020 - 0x180204072
int64_t function_180204020(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 8); // 0x180204033
    int32_t * v2 = (int32_t *)(result + 4); // 0x180204036
    if (*v2 != *v1) {
        // 0x18020403b
        function_180203fd0(result);
        *(int32_t *)result = *v2;
        *v1 = *v2;
        *(char *)(result + 22) = 0;
    }
    // 0x18020406d
    return result;
}

// Address range: 0x180204080 - 0x1802040e6
int64_t function_180204080(int64_t a1, int64_t result) {
    int32_t * v1 = (int32_t *)(result + 8); // 0x180204098
    int32_t * v2 = (int32_t *)(result + 4); // 0x18020409b
    if (*v2 != *v1) {
        // 0x1802040a0
        function_180203fd0(result);
        function_180203dc0(a1, result);
        *(int32_t *)result = *v1;
        *v2 = *v1;
        *(char *)(result + 22) = 0;
    }
    // 0x1802040e1
    return result;
}

// Address range: 0x1802040f0 - 0x180204138
int64_t function_1802040f0(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 8); // 0x1802040ff
    int32_t v2 = *v1; // 0x1802040ff
    int32_t * v3 = (int32_t *)(result + 4); // 0x180204102
    if (*v3 != v2) {
        // 0x180204128
        *(int32_t *)result = v2;
    } else {
        // 0x180204107
        int64_t v4; // 0x1802040f0
        int32_t v5 = v4;
        *v1 = v5;
        *v3 = v5;
    }
    // 0x180204137
    return result;
}

// Address range: 0x180204140 - 0x180204186
int64_t function_180204140(int64_t a1, int64_t a2) {
    int64_t result = 0; // 0x18020415e
    if (*(int32_t *)(a2 + 4) != *(int32_t *)(a2 + 8)) {
        // 0x180204160
        function_180203ed0(a1, a2);
        *(char *)(a2 + 22) = 0;
        result = 1;
    }
    // 0x180204181
    return result;
}

// Address range: 0x180204190 - 0x180204228
int64_t function_180204190(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5) {
    // 0x180204190
    function_180203dc0(a1, a2);
    function_180203ed0(a1, a2);
    int64_t result = 0; // 0x1802041e7
    int64_t v1; // 0x180204190
    if ((function_180202e40(a1, v1 & 0xffffffff, a3, a4) & 255) != 0) {
        int32_t v2 = v1;
        function_180203a90(a2, v2, a4);
        *(int32_t *)a2 = v2 + a4;
        *(char *)(a2 + 22) = 0;
        result = 1;
    }
    // 0x180204223
    return result;
}

// Address range: 0x180204230 - 0x180204600
int64_t function_180204230(int64_t a1, int64_t a2, uint32_t a3) {
    // 0x180204230
    if ((int32_t)a3 > 0x600000) {
        int32_t v1 = a3 - 0x600001; // 0x1802042ab
        if (v1 < 15) {
            // 0x1802042bb
            return (int64_t)*(int32_t *)(4 * (int64_t)v1 + 0x180205478) + 0x180000000;
        }
    } else {
        if (a3 == 0x600000) {
            // 0x180204591
            function_180203dc0(a1, a2);
            function_1802040f0(a2);
            int32_t * v2 = (int32_t *)(a2 + 8); // 0x1802045bc
            uint32_t v3 = *v2; // 0x1802045bc
            int32_t v4 = v3; // 0x1802045c0
            if (v3 >= 1) {
                // 0x1802045c2
                v4 = v3 - 1;
                *v2 = v4;
            }
            // 0x1802045da
            *(int32_t *)a2 = v4;
            *(char *)(a2 + 22) = 0;
            return function_180205420((int64_t)v4);
        }
        int32_t v5 = a3 - 0x200000; // 0x18020427f
        if (v5 < 16) {
            // 0x18020428f
            return (int64_t)*(int32_t *)(4 * (int64_t)v5 + 0x180205438) + 0x180000000;
        }
    }
    int64_t v6 = a3; // 0x1802042d3
    int64_t v7 = function_1802025a0(a3); // 0x1802042da
    int32_t v8 = v7; // 0x1802042df
    if (v8 < 1) {
        // 0x180204478
        return function_180205420(v6);
    }
    int16_t v9 = v7; // bp-244, 0x1802042f3
    if (v8 == 10) {
        // 0x1802042ff
        if (*(char *)(a2 + 23) != 0) {
            // 0x18020430f
            return function_180205420(v6);
        }
    }
    // 0x180204314
    int64_t v10; // 0x180204230
    int32_t v11 = v10;
    int64_t v12; // 0x180204230
    if (*(char *)(a2 + 12) != 0) {
        // 0x180204328
        if (*(int32_t *)(a2 + 4) == *(int32_t *)(a2 + 8)) {
            // 0x180204344
            if (function_180202480(a1) > 0x100000000 * v10 / 0x100000000) {
                // 0x180204361
                function_180203ad0(a1, a2, v11, 1, 1);
                int64_t v13 = v10 & 0xffffffff;
                function_180202d30(a1, v13, 1);
                int64_t v14 = function_180202e40(a1, v13, (int64_t)&v9, 1); // 0x1802043ca
                v12 = a1;
                if ((v14 & 255) != 0) {
                    // 0x1802043d6
                    *(int32_t *)a2 = v11 + 1;
                    *(char *)(a2 + 22) = 0;
                    v12 = a2;
                }
                // 0x180204478
                return function_180205420(v12);
            }
        }
    }
    // 0x1802043fa
    function_180203ed0(a1, a2);
    int64_t v15 = function_180202e40(a1, v10 & 0xffffffff, (int64_t)&v9, 1); // 0x18020442d
    v12 = a1;
    if ((v15 & 255) != 0) {
        // 0x180204439
        function_180203a90(a2, v11, 1);
        *(int32_t *)a2 = v11 + 1;
        *(char *)(a2 + 22) = 0;
        v12 = a2;
    }
    // 0x180204478
    return function_180205420(v12);
}

// Address range: 0x180204600 - 0x180204664
int64_t function_180204600(void) {
    // 0x180204600
    int32_t * v1; // 0x180204600
    int64_t v2 = (int64_t)v1; // 0x180204600
    int64_t v3; // 0x180204600
    if (*(int32_t *)(v2 + 4) == *(int32_t *)(v2 + 8)) {
        // 0x180204628
        int64_t v4; // 0x180204600
        function_180202b60(v4, *v1);
        function_180203dc0(v4, v2);
    } else {
        // 0x180204618
        function_180204020(v2);
        v3 = v2;
    }
    // 0x18020465f
    return function_180205420(v3);
}

// Address range: 0x180204664 - 0x1802046db
int64_t function_180204664(void) {
    // 0x180204664
    int32_t * v1; // 0x180204664
    int64_t v2 = (int64_t)v1; // 0x180204664
    int32_t * v3 = (int32_t *)(v2 + 8); // 0x180204674
    if (*(int32_t *)(v2 + 4) == *v3) {
        // 0x18020467c
        function_1802040f0(v2);
    }
    // 0x18020468a
    int64_t v4; // 0x180204664
    *v3 = (int32_t)function_180202b60(v4, *v1);
    function_180203dc0(v4, v2);
    return function_180205420(v4);
}

// Address range: 0x1802046db - 0x180204747
int64_t function_1802046db(void) {
    // 0x1802046db
    int32_t * v1; // 0x1802046db
    int64_t v2 = (int64_t)v1; // 0x1802046db
    int64_t v3; // 0x1802046db
    if (*(int32_t *)(v2 + 4) == *(int32_t *)(v2 + 8)) {
        // 0x18020470b
        function_180202cd0(v3, *v1);
        function_180203dc0(v3, v2);
    } else {
        // 0x1802046f3
        function_180204080(v3, v2);
    }
    // 0x180204742
    return function_180205420(v3);
}

// Address range: 0x180204747 - 0x1802047be
int64_t function_180204747(void) {
    // 0x180204747
    int32_t * v1; // 0x180204747
    int64_t v2 = (int64_t)v1; // 0x180204747
    int32_t * v3 = (int32_t *)(v2 + 8); // 0x180204757
    if (*(int32_t *)(v2 + 4) == *v3) {
        // 0x18020475f
        function_1802040f0(v2);
    }
    // 0x18020476d
    int64_t v4; // 0x180204747
    *v3 = (int32_t)function_180202cd0(v4, *v1);
    function_180203dc0(v4, v2);
    return function_180205420(v4);
}

// Address range: 0x1802047be - 0x18020481e
int64_t function_1802047be(void) {
    // 0x1802047be
    int32_t * v1; // 0x1802047be
    int64_t v2 = (int64_t)v1; // 0x1802047be
    function_1802040f0(v2);
    int32_t * v3 = (int32_t *)(v2 + 8); // 0x1802047d3
    *v3 = *v3 + 1;
    int64_t v4; // 0x1802047be
    function_180203dc0(v4, v2);
    *(char *)(v2 + 22) = 0;
    return function_180205420((int64_t)*v3);
}

// Address range: 0x18020481e - 0x180204b62
int64_t function_18020481e(void) {
    // 0x18020481e
    int32_t v1; // 0x18020481e
    int32_t v2 = v1 & 0x400000; // 0x180204825
    int32_t * v3; // 0x18020481e
    int64_t v4 = (int64_t)v3;
    int64_t v5; // 0x18020481e
    if ((v1 & -0x400001) != 0x20000f) {
        // 0x1802048a6
        v5 = 1;
        if (*(char *)(v4 + 23) != 0) {
            // 0x1802048b6
            return v2 | 0x200001;
        }
    } else {
        // 0x180204894
        v5 = (int64_t)*(int32_t *)(v4 + 16);
    }
    // 0x1802048d3
    int64_t v6; // 0x18020481e
    if (v2 == 0) {
        // 0x1802048ea
        if (*(int32_t *)(v4 + 4) != *(int32_t *)(v4 + 8)) {
            // 0x180204902
            function_180204080(v6, v4);
        }
    } else {
        // 0x1802048da
        function_1802040f0(v4);
    }
    // 0x180204918
    function_180203dc0(v6, v4);
    unsigned char v7 = *(char *)(v4 + 23); // 0x180204935
    int32_t v8; // bp+184, 0x18020481e
    function_180203b70((int64_t *)&v8, v6, *v3, (int64_t)v7);
    if (v5 == 0) {
        // 0x180204b5d
        return function_180205420((int64_t)&v8);
    }
    char * v9 = (char *)(v4 + 22); // 0x18020498a
    int32_t * v10 = (int32_t *)(v4 + 28);
    int32_t v11 = 0; // 0x18020496b
    int64_t v12; // 0x18020481e
    if (*v9 == 0) {
        // 0x1802049a7
        v12 = __asm_movss(__asm_movss_31(v8));
    } else {
        // 0x180204992
        v12 = __asm_movss(__asm_movss_31(*v10));
    }
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1802049bc
    int32_t v14; // 0x18020481e
    int32_t v15; // 0x18020481e
    uint32_t v16 = v15 + v14;
    int64_t v17; // 0x18020481e
    while (v15 != 0) {
        int64_t v18 = function_1802024a0(v6, (int64_t)(v16 - 1)); // 0x180204a03
        uint16_t v19 = *(int16_t *)&g717; // 0x180204a0b
        if (v19 != (int16_t)v18) {
            // 0x1802049e7
            v17 = v19;
            return function_180205420(v17);
        }
        // 0x180204a1b
        int32_t v20; // bp+232, 0x18020481e
        function_1802025d0(&v20, v6, v16);
        int128_t v21 = __asm_movss_31(v20); // 0x180204a49
        int64_t v22 = __asm_movss(v21); // 0x180204a52
        uint32_t v23; // 0x18020481e
        if (v23 != 0) {
            bool v24 = true; // 0x18020481e
            int32_t v25 = v22; // 0x180204ab4
            int32_t v26 = 0;
            char v27 = llvm_ctpop_i8((char)-v23); // 0x180204a73
            function_1802024f0(v6, v16, v26);
            int32_t v28 = __asm_movss(v21); // 0x180204a8f
            __asm_ucomiss(__asm_movss_31(v28), -0x40800000);
            int32_t v29; // 0x18020481e
            while (v29 != 0 || (v27 & 1) == 0) {
                // 0x180204aa8
                v25 = __asm_movss(__asm_addss(__asm_movss_31(v25), v28));
                int128_t v30 = __asm_movss_31(v25); // 0x180204aba
                __asm_comiss(v30, 0);
                if (!v24 && v29 != 0) {
                    // break -> 0x180204ae1
                    return 0;
                }
                int32_t v31 = v26 + 1; // 0x180204a66
                int32_t v32 = v31 - v23; // 0x180204a73
                v29 = v32;
                v24 = v31 < v23;
                if ((int64_t)v31 >= (int64_t)v23) {
                    // break -> 0x180204ae1
                    return 0;
                }
                v26 = v31;
                v27 = llvm_ctpop_i8((char)v32);
                function_1802024f0(v6, v16, v26);
                v28 = __asm_movss(v30);
                __asm_ucomiss(__asm_movss_31(v28), -0x40800000);
            }
        }
        // 0x180204ae1
        function_180203dc0(v6, v4);
        *v9 = 1;
        *v10 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v13));
        if (v2 != 0) {
            // 0x180204b1c
            *(int32_t *)(v4 + 8) = *v3;
        }
        // 0x180204b31
        v11++;
        if (v5 <= (int64_t)v11) {
            // 0x180204971
            v17 = v16;
            return function_180205420(v17);
        }
        if (*v9 == 0) {
            // 0x1802049a7
            v12 = __asm_movss(__asm_movss_31(v8));
        } else {
            // 0x180204992
            v12 = __asm_movss(__asm_movss_31(*v10));
        }
        // 0x1802049b6
        v13 = __asm_movss(__asm_movss_31((int32_t)v12));
        v16 += v15;
    }
    // 0x1802049b6
    v17 = v16;
  lab_0x180204b5d:
    // 0x180204b5d
    return function_180205420(v17);
}

// Address range: 0x180204b62 - 0x180204efb
int64_t function_180204b62(void) {
    // 0x180204b62
    int32_t v1; // 0x180204b62
    int32_t v2 = v1 & 0x400000; // 0x180204b69
    int32_t * v3; // 0x180204b62
    int64_t v4 = (int64_t)v3;
    int64_t v5; // 0x180204b62
    if ((v1 & -0x400001) != 0x20000e) {
        // 0x180204c08
        v5 = 1;
        if (*(char *)(v4 + 23) != 0) {
            // 0x180204c18
            return v2 | 0x200000;
        }
    } else {
        // 0x180204bf0
        v5 = (int64_t)*(int32_t *)(v4 + 16);
    }
    // 0x180204c34
    if (v2 == 0) {
        // 0x180204c4e
        if (*(int32_t *)(v4 + 4) != *(int32_t *)(v4 + 8)) {
            // 0x180204c66
            function_180204020(v4);
        }
    } else {
        // 0x180204c3e
        function_1802040f0(v4);
    }
    // 0x180204c74
    int64_t v6; // 0x180204b62
    function_180203dc0(v6, v4);
    unsigned char v7 = *(char *)(v4 + 23); // 0x180204c91
    int32_t v8; // bp+208, 0x180204b62
    int64_t v9 = &v8; // 0x180204cab
    function_180203b70((int64_t *)&v8, v6, *v3, (int64_t)v7);
    if (v5 == 0) {
        // 0x180204ef6
        return function_180205420(v9);
    }
    char * v10 = (char *)(v4 + 22); // 0x180204ce6
    int32_t * v11 = (int32_t *)(v4 + 28);
    int32_t v12 = 0; // 0x180204cc7
    int64_t v13 = v9;
    int64_t v14; // 0x180204b62
    int64_t v15; // 0x180204b62
    int32_t v16; // 0x180204b62
    int32_t v17; // 0x180204b62
    int32_t v18; // 0x180204b62
    int32_t v19; // 0x180204b62
    while (true) {
      lab_0x180204cde:
        // 0x180204cde
        v18 = v17;
        int64_t v20; // 0x180204b62
        if (*v10 == 0) {
            // 0x180204d06
            v20 = __asm_movss(__asm_movss_31(v8));
        } else {
            // 0x180204cee
            v20 = __asm_movss(__asm_movss_31(*v11));
        }
        int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x180204d21
        v14 = v13;
        if (v18 == v16) {
            // break -> 0x180204ef6
            return 0;
        }
        // 0x180204d3f
        int32_t v22; // bp+256, 0x180204b62
        function_1802025d0(&v22, v6, v18);
        int128_t v23 = __asm_movss_31(v22); // 0x180204d70
        int64_t v24 = __asm_movss(v23); // 0x180204d79
        uint32_t v25; // 0x180204b62
        if (v25 != 0) {
            bool v26 = true; // 0x180204b62
            int32_t v27 = v24; // 0x180204de7
            int32_t v28 = 0;
            char v29 = llvm_ctpop_i8((char)-v25); // 0x180204d9a
            function_1802024f0(v6, v18, v28);
            int32_t v30 = __asm_movss(v23); // 0x180204db9
            __asm_ucomiss(__asm_movss_31(v30), -0x40800000);
            int32_t v31; // 0x180204b62
            while (v31 != 0 || (v29 & 1) == 0) {
                // 0x180204dd8
                v27 = __asm_movss(__asm_addss(__asm_movss_31(v27), v30));
                int128_t v32 = __asm_movss_31(v27); // 0x180204ded
                __asm_comiss(v32, 0);
                if (!v26 && v31 != 0) {
                    // break -> 0x180204e1a
                    return 0;
                }
                int32_t v33 = v28 + 1; // 0x180204d8d
                int32_t v34 = v33 - v25; // 0x180204d9a
                v31 = v34;
                v26 = v33 < v25;
                if ((int64_t)v33 >= (int64_t)v25) {
                    // break -> 0x180204e1a
                    return 0;
                }
                v28 = v33;
                v29 = llvm_ctpop_i8((char)v34);
                function_1802024f0(v6, v18, v28);
                v30 = __asm_movss(v32);
                __asm_ucomiss(__asm_movss_31(v30), -0x40800000);
            }
        }
        // 0x180204e1a
        function_180203dc0(v6, v4);
        *v10 = 1;
        *v11 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v21));
        int64_t v35; // 0x180204b62
        if (v2 != 0) {
            uint32_t v36 = *v3; // 0x180204e6b
            *(int32_t *)(v4 + 8) = v36;
            v35 = v36;
        }
        int32_t v37 = v18 < 1 ? 0 : v18 - 1;
        v19 = v37;
        v15 = v35;
        if (v37 >= 1) {
            int32_t v38 = v37; // 0x180204ead
            int64_t v39 = v37;
            v38--;
            int64_t v40 = function_1802024a0(v6, (int64_t)v38); // 0x180204eb9
            uint16_t v41 = *(int16_t *)&g717; // 0x180204ec1
            while (v41 != (int16_t)v40) {
                int64_t v42 = v39 - 1; // 0x180204ea7
                if (v38 < 1) {
                    // 0x180204ed8
                    v19 = 0;
                    v15 = v41;
                    goto lab_0x180204ed8_2;
                }
                v39 = v42;
                v38--;
                v40 = function_1802024a0(v6, (int64_t)v38);
                v41 = *(int16_t *)&g717;
            }
            // 0x180204ea9
            v19 = v39;
            v15 = v41;
        }
        goto lab_0x180204ed8_2;
    }
    // 0x180204ef6
    return function_180205420(v14);
  lab_0x180204ed8_2:
    // 0x180204ed8
    v13 = v15;
    v12++;
    v17 = v19;
    v16 = v18;
    v14 = v13;
    if (v5 <= (int64_t)v12) {
        return function_180205420(v14);
    }
    goto lab_0x180204cde;
}

// Address range: 0x180204efb - 0x180204f8a
int64_t function_180204efb(void) {
    // 0x180204efb
    int32_t * v1; // 0x180204efb
    int64_t v2 = (int64_t)v1; // 0x180204efb
    int64_t v3; // 0x180204efb
    if (*(int32_t *)(v2 + 4) != *(int32_t *)(v2 + 8)) {
        // 0x180204f13
        function_180203ed0(v3, v2);
        // 0x180204f79
        *(char *)(v2 + 22) = 0;
        int64_t v4; // 0x180204efb
        return function_180205420(v4);
    }
    int64_t v5 = function_180202480(v3) & 0xffffffff; // 0x180204f47
    int32_t v6 = *v1; // 0x180204f4e
    if (v5 > (int64_t)v6) {
        // 0x180204f52
        function_180203e70(v3, v2, v6, 1);
    }
    // 0x180204f79
    *(char *)(v2 + 22) = 0;
    return function_180205420(v5);
}

// Address range: 0x180204f8a - 0x18020502e
int64_t function_180204f8a(void) {
    // 0x180204f8a
    int32_t * v1; // 0x180204f8a
    int64_t v2 = (int64_t)v1; // 0x180204f8a
    int64_t v3; // 0x180204f8a
    int64_t v4; // 0x180204f8a
    if (*(int32_t *)(v2 + 4) != *(int32_t *)(v2 + 8)) {
        // 0x180204fa2
        function_180203ed0(v4, v2);
        // 0x18020501d
        *(char *)(v2 + 22) = 0;
        return function_180205420(v3);
    }
    // 0x180204fba
    function_180203dc0(v4, v2);
    uint32_t v5 = *v1; // 0x180204fd8
    if (v5 >= 1) {
        // 0x180204fdd
        function_180203e70(v4, v2, v5 - 1, 1);
        v3 = v2;
    }
    // 0x18020501d
    *(char *)(v2 + 22) = 0;
    return function_180205420(v3);
}

// Address range: 0x18020502e - 0x18020506b
int64_t function_18020502e(void) {
    // 0x18020502e
    int32_t * v1; // 0x18020502e
    int64_t v2 = (int64_t)v1; // 0x18020502e
    *(int32_t *)(v2 + 8) = 0;
    *(int32_t *)(v2 + 4) = 0;
    *(char *)(v2 + 22) = 0;
    int64_t v3; // 0x18020502e
    return function_180205420(v3);
}

// Address range: 0x18020506b - 0x1802050b1
int64_t function_18020506b(void) {
    // 0x18020506b
    int64_t v1; // 0x18020506b
    function_180202480(v1);
    int32_t * v2; // 0x18020506b
    int64_t v3 = (int64_t)v2; // 0x180205078
    *(int32_t *)(v3 + 8) = 0;
    *(int32_t *)(v3 + 4) = 0;
    *(char *)(v3 + 22) = 0;
    return function_180205420(v3);
}

// Address range: 0x1802050b1 - 0x1802050ec
int64_t function_1802050b1(void) {
    // 0x1802050b1
    int32_t * v1; // 0x1802050b1
    int64_t v2 = (int64_t)v1; // 0x1802050b1
    function_1802040f0(v2);
    *(int32_t *)(v2 + 8) = 0;
    *(char *)(v2 + 22) = 0;
    return function_180205420(v2);
}

// Address range: 0x1802050ec - 0x180205141
int64_t function_1802050ec(void) {
    // 0x1802050ec
    int32_t * v1; // 0x1802050ec
    int64_t v2 = (int64_t)v1; // 0x1802050ec
    function_1802040f0(v2);
    int64_t v3; // 0x1802050ec
    int64_t v4 = function_180202480(v3); // 0x180205101
    *(int32_t *)(v2 + 8) = (int32_t)v4;
    *(char *)(v2 + 22) = 0;
    return function_180205420(v4 & 0xffffffff);
}

// Address range: 0x180205141 - 0x1802051e3
int64_t function_180205141(void) {
    // 0x180205141
    int32_t * v1; // 0x180205141
    int64_t v2 = (int64_t)v1; // 0x180205141
    int64_t v3; // 0x180205141
    function_180203dc0(v3, v2);
    function_180204020(v2);
    if (*(char *)(v2 + 23) != 0) {
        // 0x1802051d2
        *(char *)(v2 + 22) = 0;
        return function_180205420(v2);
    }
    int32_t v4 = *v1;
    if (v4 < 1) {
        // 0x1802051d2
        *(char *)(v2 + 22) = 0;
        return function_180205420(v2);
    }
    int64_t v5 = function_1802024a0(v3, (int64_t)(v4 - 1)); // 0x1802051a7
    uint16_t v6 = *(int16_t *)&g717; // 0x1802051af
    while (v6 != (int16_t)v5) {
        int32_t v7 = *v1 - 1; // 0x1802051c4
        if (v7 < 1) {
            // 0x1802051d2
            *(char *)(v2 + 22) = 0;
            return function_180205420(v2);
        }
        v5 = function_1802024a0(v3, (int64_t)(v7 - 1));
        v6 = *(int16_t *)&g717;
    }
    // 0x1802051d2
    *(char *)(v2 + 22) = 0;
    return function_180205420((int64_t)v6);
}

// Address range: 0x1802051e3 - 0x18020529e
int64_t function_1802051e3(void) {
    // 0x1802051e3
    int64_t v1; // 0x1802051e3
    int64_t v2 = function_180202480(v1); // 0x1802051eb
    int32_t * v3; // 0x1802051e3
    int64_t v4 = (int64_t)v3; // 0x1802051f7
    function_180203dc0(v1, v4);
    function_180204020(v4);
    if (*(char *)(v4 + 23) != 0) {
        // 0x18020528d
        *(char *)(v4 + 22) = 0;
        return function_180205420(v2 & 0xffffffff);
    }
    int64_t v5 = v2 & 0xffffffff; // 0x180205245
    int32_t v6 = *v3; // 0x18020524c
    if (v5 <= (int64_t)v6) {
        // 0x18020528d
        *(char *)(v4 + 22) = 0;
        return function_180205420(v5);
    }
    int64_t v7 = function_1802024a0(v1, (int64_t)v6); // 0x180205262
    uint16_t v8 = *(int16_t *)&g717; // 0x18020526a
    while (v8 != (int16_t)v7) {
        int32_t v9 = *v3 + 1; // 0x18020527f
        if (v5 <= (int64_t)v9) {
            // 0x18020528d
            *(char *)(v4 + 22) = 0;
            return function_180205420(v5);
        }
        v7 = function_1802024a0(v1, (int64_t)v9);
        v8 = *(int16_t *)&g717;
    }
    // 0x18020528d
    *(char *)(v4 + 22) = 0;
    return function_180205420((int64_t)v8);
}

// Address range: 0x18020529e - 0x180205355
int64_t function_18020529e(void) {
    // 0x18020529e
    int32_t * v1; // 0x18020529e
    int64_t v2 = (int64_t)v1; // 0x18020529e
    int64_t v3; // 0x18020529e
    function_180203dc0(v3, v2);
    function_1802040f0(v2);
    if (*(char *)(v2 + 23) != 0) {
        uint32_t v4 = 0; // 0x18020533f
        *(int32_t *)(v2 + 8) = v4;
        *(char *)(v2 + 22) = 0;
        return function_180205420((int64_t)v4);
    }
    int32_t v5 = *v1;
    if (v5 < 1) {
        // 0x18020532f
        *(int32_t *)(v2 + 8) = v5;
        *(char *)(v2 + 22) = 0;
        return function_180205420((int64_t)v5);
    }
    int64_t v6 = function_1802024a0(v3, (int64_t)(v5 - 1)); // 0x180205304
    int32_t v7 = *v1;
    int32_t v8 = v7; // 0x180205315
    while (*(int16_t *)&g717 != (int16_t)v6) {
        int32_t v9 = v7 - 1; // 0x180205321
        v8 = v9;
        if (v9 < 1) {
            // break -> 0x18020532f
            return 0;
        }
        v6 = function_1802024a0(v3, (int64_t)(v9 - 1));
        v7 = *v1;
        v8 = v7;
    }
    // 0x18020532f
    *(int32_t *)(v2 + 8) = v8;
    *(char *)(v2 + 22) = 0;
    return function_180205420((int64_t)v8);
}

// Address range: 0x180205355 - 0x180205420
int64_t function_180205355(void) {
    // 0x180205355
    int64_t v1; // 0x180205355
    int64_t v2 = function_180202480(v1); // 0x18020535d
    int32_t * v3; // 0x180205355
    int64_t result = (int64_t)v3; // 0x180205369
    function_180203dc0(v1, result);
    function_1802040f0(result);
    if (*(char *)(result + 23) != 0) {
        // 0x1802053ff
        *(int32_t *)(result + 8) = (int32_t)v2;
        *(char *)(result + 22) = 0;
        return result;
    }
    uint64_t v4 = v2 & 0xffffffff; // 0x1802053b7
    int32_t v5 = *v3; // 0x1802053be
    if (v4 <= (int64_t)v5) {
        // 0x1802053ff
        *(int32_t *)(result + 8) = v5;
        *(char *)(result + 22) = 0;
        return result;
    }
    int64_t v6 = function_1802024a0(v1, (int64_t)v5); // 0x1802053d4
    int32_t v7 = *v3;
    int32_t v8 = v7; // 0x1802053e5
    while (*(int16_t *)&g717 != (int16_t)v6) {
        int32_t v9 = v7 + 1; // 0x1802053f1
        v8 = v9;
        if (v4 <= (int64_t)v9) {
            // break -> 0x1802053ff
            return 0;
        }
        v6 = function_1802024a0(v1, (int64_t)v9);
        v7 = *v3;
        v8 = v7;
    }
    // 0x1802053ff
    *(int32_t *)(result + 8) = v8;
    *(char *)(result + 22) = 0;
    return result;
}

// Address range: 0x180205420 - 0x180205438
int64_t function_180205420(int64_t a1) {
    // 0x180205420
    int64_t v1; // 0x180205420
    int64_t v2; // 0x180205420
    return function_18026ad50(v2 ^ v1);
}

// Address range: 0x1802054c0 - 0x1802054e6
int64_t function_1802054c0(int64_t result) {
    // 0x1802054c0
    *(int16_t *)(result + 3584) = 99;
    *(int32_t *)(result + 3592) = 999;
    return result;
}

// Address range: 0x1802054f0 - 0x18020565d
int64_t function_1802054f0(int64_t a1) {
    int16_t * v1 = (int16_t *)(a1 + 3582); // 0x1802054fe
    int16_t result = *v1; // 0x1802054fe
    if (result < 1) {
        // 0x180205658
        return result;
    }
    int64_t v2 = a1 + 12; // 0x18020551b
    int16_t v3 = result; // 0x180205520
    int64_t v4; // 0x1802054f0
    if (*(int32_t *)v2 >= 0) {
        int32_t v5 = *(int32_t *)(a1 + 4); // 0x180205534
        int32_t * v6 = (int32_t *)(a1 + 3588); // 0x180205545
        int32_t v7 = *v6 - v5; // 0x18020554b
        *v6 = v7;
        int64_t v8 = a1 + 1584; // 0x180205571
        function_18029d4e0(v8, 2 * (int64_t)v5 + v8, 2 * (int64_t)v7, v4);
        int16_t v9 = *v1; // 0x1802055b7
        v3 = v9;
        if (v9 > 0) {
            int32_t * v10 = (int32_t *)v2; // 0x1802055d2
            uint32_t v11 = *v10; // 0x1802055d2
            int16_t v12 = v9; // 0x1802055d7
            if (v11 >= 0) {
                // 0x1802055d9
                *v10 = v11 - v5;
                v12 = *v1;
            }
            int32_t v13 = 1; // 0x1802055ac
            int64_t v14 = v13;
            int16_t v15 = v12; // 0x1802055c2
            int32_t v16 = v13; // 0x1802055c2
            v3 = v12;
            while (v14 < (int64_t)v12) {
                // 0x1802055c4
                v10 = (int32_t *)(16 * v14 + v2);
                v11 = *v10;
                v12 = v15;
                if (v11 >= 0) {
                    // 0x1802055d9
                    *v10 = v11 - v5;
                    v12 = *v1;
                }
                // 0x180205603
                v13 = v16 + 1;
                v14 = v13;
                v15 = v12;
                v16 = v13;
                v3 = v12;
            }
        }
    }
    int16_t v17 = v3 - 1; // 0x180205611
    *v1 = v17;
    // 0x180205658
    return function_18029d4e0(a1, a1 + 16, 16 * (int64_t)v17, v4);
}

// Address range: 0x180205670 - 0x180205852
int64_t function_180205670(int64_t a1) {
    int16_t * v1 = (int16_t *)(a1 + 3584); // 0x180205686
    int16_t v2 = *v1; // 0x180205686
    int64_t result = v2;
    if (v2 > 98) {
        // 0x18020584d
        return result;
    }
    int64_t v3 = result; // 0x1802056aa
    int64_t v4; // 0x180205670
    if (*(int32_t *)(a1 + 1580) >= 0) {
        int32_t v5 = *(int32_t *)(a1 + 1572); // 0x1802056be
        int32_t * v6 = (int32_t *)(a1 + 3592); // 0x1802056cb
        int32_t v7 = *v6 + v5; // 0x1802056d1
        *v6 = v7;
        int64_t v8 = a1 + 1584 + 2 * (int64_t)v7; // 0x180205708
        function_18029d4e0(v8, v8 - 2 * (int64_t)v5, 2 * (int64_t)(999 - v7), v4);
        int16_t v9 = *v1; // 0x180205752
        int16_t v10 = v9; // 0x180205771
        if (v9 < 98) {
            int64_t v11 = v9;
            int32_t * v12 = (int32_t *)(a1 + 12 + 16 * v11); // 0x180205781
            uint32_t v13 = *v12; // 0x180205781
            if (v13 >= 0) {
                // 0x180205788
                *v12 = v13 + v5;
            }
            // 0x1802057b0
            v11++;
            while (v11 != 98) {
                // 0x180205773
                v12 = (int32_t *)(a1 + 12 + 16 * v11);
                v13 = *v12;
                if (v13 >= 0) {
                    // 0x180205788
                    *v12 = v13 + v5;
                }
                // 0x1802057b0
                v11++;
            }
            // 0x180205769
            v10 = *v1;
        }
        // 0x1802057b2
        v3 = v10;
    }
    int64_t v14 = 16 * v3; // 0x1802057c7
    int64_t v15 = v14 + a1;
    function_18029d4e0(v15 + 16, v15, 1568 - v14, v4);
    uint16_t result2 = *v1 + 1; // 0x18020583e
    *v1 = result2;
    // 0x18020584d
    return result2;
}

// Address range: 0x180205860 - 0x180205928
int64_t function_180205860(int64_t a1, uint32_t a2) {
    // 0x180205860
    function_1802054c0(a1);
    int16_t * v1 = (int16_t *)(a1 + 3582); // 0x18020587d
    if (*v1 == 99) {
        // 0x180205889
        function_1802054f0(a1);
    }
    if (a2 >= 1000) {
        // 0x18020589e
        *v1 = 0;
        *(int32_t *)(a1 + 3588) = 0;
        // 0x180205923
        return 0;
    }
    int32_t * v2 = (int32_t *)(a1 + 3588); // 0x1802058c4
    if (*v2 + a2 >= 1000) {
        function_1802054f0(a1);
        while (*v2 + a2 >= 1000) {
            // 0x1802058d5
            function_1802054f0(a1);
        }
    }
    int16_t v3 = *v1; // 0x1802058e7
    *v1 = v3 + 1;
    // 0x180205923
    return 16 * (int64_t)v3 + a1;
}

// Address range: 0x180205930 - 0x1802059ea
int64_t function_180205930(int64_t a1, int32_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = function_180205860(a1, a3); // 0x180205950
    if (v1 == 0) {
        // 0x1802059e5
        return 0;
    }
    // 0x180205966
    *(int32_t *)v1 = a2;
    *(int32_t *)(v1 + 4) = a3;
    *(int32_t *)(v1 + 8) = a4;
    int64_t result; // 0x180205930
    if (a3 != 0) {
        int32_t * v2 = (int32_t *)(a1 + 3588); // 0x1802059ac
        int32_t * v3 = (int32_t *)(v1 + 12); // 0x1802059b2
        *v3 = *v2;
        *v2 = *v2 + a3;
        result = a1 + 1584 + 2 * (int64_t)*v3;
    } else {
        // 0x180205990
        *(int32_t *)(v1 + 12) = -1;
        result = 0;
    }
    // 0x1802059e5
    return result;
}

// Address range: 0x1802059f0 - 0x180205aa4
int64_t function_1802059f0(int64_t result, int32_t a2) {
    // 0x1802059f0
    *(int16_t *)(result + 3614) = 0;
    *(int32_t *)(result + 3620) = 0;
    *(int16_t *)(result + 3616) = 99;
    *(int32_t *)(result + 3624) = 999;
    *(int32_t *)(result + 4) = 0;
    *(int32_t *)(result + 8) = 0;
    *(int32_t *)result = 0;
    *(char *)(result + 22) = 0;
    int128_t v1; // 0x1802059f0
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(__asm_xorps(v1, v1));
    *(char *)(result + 20) = 0;
    *(char *)(result + 21) = 1;
    *(char *)(result + 23) = (char)a2;
    *(char *)(result + 12) = 0;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x180205ab0 - 0x180205ad1
int64_t function_180205ab0(int64_t a1, int32_t a2) {
    // 0x180205ab0
    return function_1802059f0(a1, a2);
}

// Address range: 0x180205ae0 - 0x180205b16
int64_t function_180205ae0(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x180205ae0
    return function_180204190(a1, a2, a3, a4, (int64_t)a4);
}

// Address range: 0x180205b20 - 0x180205bea
int64_t function_180205b20(int64_t a1, int64_t result, int64_t * a3, int32_t a4, char a5) {
    int32_t * v1 = (int32_t *)(a1 + 12); // 0x180205b45
    function_180203ad0(a1, result, 0, (int64_t)*v1, a4);
    function_180202d30(a1, 0, *v1);
    int32_t * v2 = (int32_t *)(result + 8); // 0x180205b75
    *v2 = 0;
    int32_t * v3 = (int32_t *)(result + 4); // 0x180205b81
    *v3 = 0;
    int32_t * v4 = (int32_t *)result; // 0x180205b8d
    *v4 = 0;
    if (a4 >= 0 != a4 != 0) {
        // 0x180205be5
        return result;
    }
    int64_t result2 = 0; // 0x180205bb7
    if ((function_180202e40(a1, 0, (int64_t)a3, a4) & 255) != 0) {
        // 0x180205bb9
        *v2 = a4;
        *v3 = a4;
        *v4 = a4;
        *(char *)(result + 22) = 0;
        result2 = result;
    }
    // 0x180205be5
    return result2;
}

// Address range: 0x180205bf0 - 0x180205e71
int64_t function_180205bf0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x180205c06
    int64_t v2 = *(int64_t *)(a1 + 32); // 0x180205c1a
    int32_t v3 = *(int32_t *)(a1 + 12); // 0x180205c2b
    int64_t v4 = function_180196660(a2, (int64_t)a3 + a2); // 0x180205c53
    int32_t v5 = v4; // 0x180205c58
    function_18021c2e0(v1 + 0x6368, (0x100000000 * v4 + 0x100000000) / 0x80000000 & 0xfffffffe);
    int64_t v6 = *(int64_t *)(v1 + 0x6370); // 0x180205c8e
    function_180196570(v6, v5 + 1, a2, (int32_t)a2 + a3, NULL);
    int64_t result = v4 & 0xffffffff; // 0x180205cd6
    uint32_t v7 = result > (int64_t)v3 ? v3 : v5;
    int32_t v8 = 0; // 0x180205d1e
    int32_t v9 = 0; // 0x180205d1e
    if (v7 != 0) {
        int64_t v10 = 0; // 0x180205d2a
        v9 = v8;
        while (*(int16_t *)(v10 + v2) == *(int16_t *)(v10 + v6)) {
            // 0x180205d42
            v8++;
            int64_t v11 = v8; // 0x180205d1e
            v9 = v8;
            if (v11 >= (int64_t)v7) {
                // break -> 0x180205d44
                return 0;
            }
            v10 = 2 * v11;
            v9 = v8;
        }
    }
    uint32_t v12 = v9;
    if (v12 == v3 == v12 == v5) {
        // 0x180205e69
        return result;
    }
    int64_t v13 = v12; // 0x180205d87
    int32_t v14 = v3;
    int32_t v15 = v5;
    v14--;
    v15--;
    int64_t v16 = v14; // 0x180205d8f
    while (v16 >= v13) {
        int64_t v17 = v15; // 0x180205d99
        if (v17 < v13) {
            // break -> 0x180205dbf
            return 0;
        }
        // 0x180205d9b
        if (*(int16_t *)(2 * v16 + v2) != *(int16_t *)(2 * v17 + v6)) {
            // break -> 0x180205dbf
            return 0;
        }
        v14--;
        v15--;
        v16 = v14;
    }
    int32_t v18 = v15 - v12 + 1; // 0x180205dcb
    int32_t v19 = v14 - v12 + 1; // 0x180205ddd
    int64_t result2 = v19; // 0x180205ddd
    if (v19 < 1 == (v18 >= 0 != v18 != 0)) {
        // 0x180205e69
        return result2;
    }
    int64_t v20 = function_180205930(a1 + 116, v12, v19, v18, (int64_t)v15); // 0x180205e0e
    if (v19 == 0 || v20 == 0) {
        // 0x180205e69
        return 0;
    }
    int32_t v21 = 0; // 0x180205e1e
    int64_t v22 = function_1802024a0(a1, (int64_t)(v21 + v12)); // 0x180205e54
    *(int16_t *)v20 = (int16_t)v22;
    v21++;
    int64_t v23 = v21; // 0x180205e3c
    while (v23 < result2) {
        // 0x180205e3e
        v22 = function_1802024a0(a1, (int64_t)(v21 + v12));
        *(int16_t *)(2 * v23 + v20) = (int16_t)v22;
        v21++;
        v23 = v21;
    }
    // 0x180205e69
    return result2;
}

// Address range: 0x180205e80 - 0x180205f6f
int64_t function_180205e80(int64_t a1, int32_t * a2) {
    int64_t result = (int64_t)g1201; // 0x180205e8e
    if (*(int32_t *)(result + 0x5f64) != *(int32_t *)(result + 0x5f60)) {
        // 0x180205f6a
        return result;
    }
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 8))); // 0x180205ec9
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 4))); // 0x180205ee2
    int128_t v3 = __asm_movss_31(*(int32_t *)a1); // 0x180205ef6
    int32_t v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v3))); // bp-32, 0x180205f07
    __asm_movss(__asm_movss_31((int32_t)v2));
    int128_t v5 = __asm_movss_31((int32_t)v1); // 0x180205f19
    __asm_movss(v5);
    __asm_movss(__asm_xorps(v5, v5));
    int64_t v6 = function_18018e010((int64_t *)&v4); // 0x180205f40
    int64_t result2 = v6; // 0x180205f50
    if (*(int32_t *)(result + 0x5f70) == (int32_t)v6) {
        // 0x180205f54
        *a2 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(result + 0x5f68)));
        result2 = (int64_t)a2;
    }
    // 0x180205f6a
    return result2;
}

// Address range: 0x180205f80 - 0x1802060ef
int64_t function_180205f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)g1201; // 0x180205f98
    if (*(int32_t *)(result + 0x5f64) != *(int32_t *)(result + 0x5f60)) {
        // 0x1802060ea
        return result;
    }
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 8))); // 0x180205fd3
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 4))); // 0x180205fec
    int128_t v3 = __asm_movss_31(*(int32_t *)a1); // 0x180206000
    int32_t v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v3))); // bp-32, 0x180206011
    __asm_movss(__asm_movss_31((int32_t)v2));
    int128_t v5 = __asm_movss_31((int32_t)v1); // 0x180206023
    __asm_movss(v5);
    __asm_movss(__asm_xorps(v5, v5));
    int64_t result2 = function_18018e010((int64_t *)&v4); // 0x18020604a
    int32_t v6 = *(int32_t *)(result + 0x5f70) - (int32_t)result2; // 0x180206054
    if (v6 != 0) {
        // 0x1802060ea
        return result2;
    }
    char v7 = llvm_ctpop_i8((char)v6); // 0x180206054
    int64_t v8; // 0x180205f80
    int128_t v9 = __asm_movss_31((int32_t)v8); // 0x180206069
    int32_t v10 = *(int32_t *)&g30; // 0x18020606d
    __asm_ucomiss(v9, v10);
    int32_t v11; // 0x180205f80
    if ((v7 & 1) == 0) {
        // 0x180206078
        int64_t v12; // 0x180205f80
        __asm_ucomiss(__asm_movss_31((int32_t)v12), v10);
        int64_t v13; // 0x180205f80
        v11 = v13;
    } else {
        int64_t v14 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 0x5f68))); // 0x1802060b6
        *(int32_t *)a2 = (int32_t)v14;
        int64_t v15; // 0x180205f80
        v11 = *(int32_t *)&v15;
    }
    // 0x1802060ba
    __asm_ucomiss(__asm_movss_31(v11), v10);
    int64_t result3 = a4; // 0x1802060cd
    if ((v7 & 1) != 0) {
        int64_t v16 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 0x5f6c))); // 0x1802060e6
        *(int32_t *)a3 = (int32_t)v16;
        result3 = a3;
    }
    // 0x1802060ea
    return result3;
}

// Address range: 0x180206100 - 0x180206425
int64_t function_180206100(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180206100
    int128_t v1; // 0x180206100
    int64_t v2 = __asm_movss(v1); // 0x180206100
    int128_t v3; // 0x180206100
    int128_t v4 = __asm_xorps(v3, v3); // 0x18020611c
    int128_t v5; // 0x180206100
    __asm_comiss(v4, v5);
    int32_t v6; // 0x180206100
    int64_t v7; // 0x180206100
    uint64_t v8; // 0x180206100
    if (v8 < 201) {
        int32_t v9 = v5; // 0x180206134
        __asm_comiss(__asm_movss_31(v9), g40);
        v6 = g40;
        v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v9))));
    } else {
        int64_t v10 = __asm_movss(__asm_xorps(v4, v4)); // 0x18020612c
        v6 = *(int32_t *)&g40;
        v7 = v10;
    }
    int32_t v11 = v2; // 0x180206100
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x180206177
    int128_t v13 = __asm_mulss(__asm_movss_31((int32_t)v12), 0x437f0000); // 0x180206183
    int32_t v14 = __asm_cvttss2si(__asm_addss(v13, *(int32_t *)&g38)); // 0x180206193
    int32_t v15 = a3; // 0x18020619b
    int128_t v16 = __asm_movss_31(v15); // 0x18020619b
    int32_t v17 = *(int32_t *)&g41;
    int32_t v18 = __asm_movss(__asm_addss(v16, v17)); // bp-136, 0x1802061ac
    int32_t v19; // 0x180206100
    __asm_movss(__asm_addss(__asm_movss_31(v19), v6));
    int32_t v20 = a2; // 0x1802061e3
    int32_t v21 = __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(v20), v15), v6)); // bp-128, 0x1802061fd
    int32_t v22; // 0x180206100
    __asm_movss(__asm_movss_31(v22));
    int64_t v23 = *(int64_t *)&v21; // 0x180206221
    int32_t v24 = 0x1000000 * v14; // 0x180206230
    int64_t v25 = v24; // 0x180206255
    function_180231b20(a1, v23, *(int64_t *)&v18, 1, v25, (int64_t)&g1381);
    int32_t v26 = __asm_movss(__asm_addss(__asm_movss_31(v20), v15)); // bp-120, 0x18020626d
    __asm_movss(__asm_movss_31(v22));
    int64_t v27 = v24 | 0xffffff; // 0x1802062ca
    function_180231b20(a1, *(int64_t *)&v26, a3, 1, v27, (int64_t)&g1381);
    int32_t v28 = __asm_movss(__asm_addss(__asm_movss_31(v15), v17)); // bp-112, 0x1802062e1
    __asm_movss(__asm_addss(__asm_movss_31(v19), v6));
    int128_t v29 = __asm_subss(__asm_subss(__asm_addss(__asm_movss_31(v20), v11), v15), v6); // 0x180206339
    int32_t v30 = __asm_movss(v29); // bp-104, 0x180206341
    __asm_movss(__asm_movss_31(v22));
    int64_t v31 = *(int64_t *)&v30; // 0x18020636b
    function_180231b20(a1, v31, *(int64_t *)&v28, 0, v25, (int64_t)&g1381);
    int32_t v32 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v20), v11), v15)); // bp-96, 0x1802063bd
    __asm_movss(__asm_movss_31(v22));
    int64_t v33 = *(int64_t *)&v32; // 0x18020640c
    return function_180231b20(a1, v33, a3, 0, v27, (int64_t)&g1381);
}

// Address range: 0x180206430 - 0x180206545
int64_t function_180206430(int32_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18020643a
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x18020644b
    int64_t v3 = v1 + 0x4b88; // 0x18020645c
    int32_t * v4 = (int32_t *)v3; // 0x18020646c
    function_1801cff50(v3, *v4 + 1);
    int64_t v5 = 28 * (int64_t)(*v4 - 1) + *(int64_t *)(v1 + 0x4b90); // 0x1802064a4
    *(int32_t *)v5 = *(int32_t *)(v1 + 0x4a40);
    *(int32_t *)(v5 + 4) = a1;
    *(int32_t *)(v5 + 8) = *(int32_t *)(v1 + 0x4a44);
    __asm_rep_movsb_memcpy((char *)(v5 + 12), (char *)(v1 + 0x4a5c), 16);
    int32_t * v6 = (int32_t *)(v2 + 420); // 0x180206529
    uint32_t result = 1 << (*(int32_t *)(v2 + 416) & 31) | *v6; // 0x18020652f
    *v6 = result;
    return result;
}

// Address range: 0x180206550 - 0x18020665e
int64_t function_180206550(uint64_t a1, uint64_t a2, int64_t a3) {
    int32_t result = 0; // 0x180206575
    int64_t v1 = a1; // 0x180206575
    if (a1 >= a2) {
        // 0x180206655
        return 0;
    }
    int64_t v2 = a3; // 0x180206575
    char v3 = *(char *)v1; // 0x180206580
    int32_t v4 = v3; // 0x180206583
    char v5 = *(char *)v2; // 0x180206599
    int32_t v6 = v5; // 0x1802065b2
    while ((((v5 > 122 ? v6 : v6 & 223) ^ (v3 > 122 ? v4 : v4 & 223)) & 255) == 0) {
        // 0x180206646
        v1++;
        result++;
        v2++;
        if (v1 >= a2) {
            // break -> 0x180206655
            return 0;
        }
        v3 = *(char *)v1;
        v4 = v3;
        v5 = *(char *)v2;
        v6 = v5;
    }
    // 0x180206655
    return result;
}

// Address range: 0x180206670 - 0x1802067ca
int64_t function_180206670(int32_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18020667d
    *(int32_t *)(v1 + 0x4f48) = a1;
    *(char *)(v1 + 0x4f4d) = 1;
    char v2 = a2 == -1;
    *(char *)(v1 + 0x4f4e) = v2;
    *(char *)(v1 + 0x4f4f) = v2;
    int32_t * v3 = (int32_t *)(v1 + 0x4f54); // 0x1802066f3
    *v3 = *v3 & -0x10000 | *(int32_t *)(v1 + 304) & 0xffff;
    int64_t v4 = *(int64_t *)(*(int64_t *)(v1 + 0x4078) + 296); // 0x18020672d
    int32_t v5; // 0x180206670
    int64_t v6 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v1 + 276)), v5)); // 0x180206749
    int128_t v7 = __asm_movss_31(*(int32_t *)(v1 + 272)); // 0x180206754
    int64_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v7, (int32_t)v4)))); // 0x18020676a
    int128_t v9 = __asm_movss_31((int32_t)v6); // 0x180206770
    __asm_movss(v9);
    int64_t v10 = 0x100000000 * v8 / 0x100000000; // 0x18020677c
    *(int64_t *)(v1 + 0x4f60) = v10;
    *(int64_t *)(v1 + 0x4f58) = v10;
    int128_t v11 = __asm_xorps(v9, v9); // 0x180206799
    int32_t v12 = __asm_movss(v11); // bp-40, 0x18020679c
    __asm_movss(__asm_xorps(v11, v11));
    int64_t result = *(int64_t *)&v12; // 0x1802067ba
    *(int64_t *)(v1 + 0x4f68) = result;
    return result;
}

// Address range: 0x1802067d0 - 0x18020687f
int64_t function_1802067d0(int64_t a1, int64_t a2) {
    // 0x1802067d0
    if ((*(int32_t *)((int64_t)g1201 + 0x6184) & 32) != 0) {
        // 0x1802067fc
        int64_t v1; // 0x1802067d0
        int64_t v2; // 0x1802067d0
        int64_t v3; // 0x1802067d0
        function_18018fdd0("[selection] BeginBoxSelect() 0X%08X: Activate\n", v3 & 0xffffffff, v2, v1);
    }
    // 0x180206816
    *(char *)(a1 + 4) = 1;
    *(int64_t *)(a1 + 40) = a2;
    *(char *)(a1 + 5) = 0;
    int64_t v4; // 0x1802067d0
    uint32_t v5 = *(int32_t *)&v4; // 0x180206840
    function_18019e5d0(v5, a2);
    function_1801a4a10((int64_t)v5);
    if (*(char *)(a1 + 6) == 0) {
        // 0x18020687a
        return 0;
    }
    uint32_t v6 = *(int32_t *)(a1 + 12) & 0x3000; // 0x180206868
    int64_t result = v6; // 0x18020686f
    if (v6 == 0) {
        // 0x180206871
        *(char *)(a1 + 8) = 1;
        result = a1;
    }
    // 0x18020687a
    return result;
}

// Address range: 0x180206890 - 0x18020690d
int64_t function_180206890(int64_t result) {
    int64_t v1 = (int64_t)g1201; // 0x180206899
    *(char *)(result + 5) = 0;
    *(char *)(result + 4) = 0;
    int64_t v2; // 0x180206890
    uint32_t v3 = *(int32_t *)&v2; // 0x1802068c1
    int64_t v4 = v3;
    v2 = v4;
    if (*(int32_t *)(v1 + 0x40e4) != v3) {
        // 0x1802068fd
        *(int32_t *)result = 0;
        return result;
    }
    int64_t v5 = v4; // 0x1802068db
    int64_t v6; // 0x180206890
    if ((*(int32_t *)(v1 + 0x6184) & 32) != 0) {
        // 0x1802068dd
        v2 = (int64_t)"[selection] BeginBoxSelect() 0X%08X: Deactivate\n";
        int64_t v7; // 0x180206890
        int64_t v8; // 0x180206890
        function_18018fdd0("[selection] BeginBoxSelect() 0X%08X: Deactivate\n", v4, v8, v7);
        v5 = (int64_t)"[selection] BeginBoxSelect() 0X%08X: Deactivate\n";
        v6 = v4;
    }
    // 0x1802068f7
    function_18019e9f0(v5, v6);
    // 0x1802068fd
    *(int32_t *)result = 0;
    return result;
}

// Address range: 0x180206920 - 0x180206eff
int64_t function_180206920(uint64_t a1, uint64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)g1201; // 0x180206936
    int64_t v3 = v1 + 8;
    int64_t v4 = a2 + 152;
    char v5 = llvm_ctpop_i8((char)v4);
    int32_t * v6 = (int32_t *)(v2 + 0x3d90);
    int32_t v7 = g40;
    int32_t * v8 = (int32_t *)(v2 + 24);
    int64_t v9 = a1 + 32;
    char v10 = llvm_ctpop_i8((char)v9);
    int64_t v11 = 0;
    int64_t v12; // 0x180206920
    bool v13; // 0x180206920
    int32_t v14; // 0x180206920
    int32_t * v15; // 0x180206d8e
    int32_t v16; // 0x180206de0
    int32_t v17; // 0x180206b00
    bool v18; // 0x180206920
    while (true) {
      lab_0x180206961:
        // 0x180206961
        v12 = v11;
        int64_t v19 = 4 * v12; // 0x180206981
        int32_t v20 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 272 + v19))); // 0x180206999
        int32_t * v21 = (int32_t *)(v19 + v3); // 0x1802069c0
        __asm_comiss(__asm_movss_31(v20), __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v21))));
        int64_t v22; // 0x180206920
        if (a3 > (int64_t *)-9 || v3 == 0) {
            int128_t v23 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v19 + v1)))); // 0x180206a54
            __asm_comiss(v23, (int128_t)v20);
            v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v23, v23))));
        } else {
            int128_t v24 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v21))); // 0x180206a0e
            v22 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v20), v24)));
        }
        int32_t v25 = __asm_movss(__asm_movss_31((int32_t)v22)); // 0x180206abf
        int64_t v26 = __asm_movss(__asm_movss_31(*(int32_t *)(v19 + v4))); // 0x180206b00
        int128_t v27 = __asm_movss_31(v25); // 0x180206b06
        __asm_ucomiss(v27, *(int32_t *)&g30);
        if ((v5 & 1) == 0 || v4 != 0) {
            int128_t v28 = v25; // 0x180206abf
            v17 = v26;
            int128_t v29 = __asm_xorps(v27, v27); // 0x180206b17
            __asm_comiss(v29, v28);
            if (a2 > 0xffffffffffffff67 || v4 == 0) {
                // 0x180206cfc
                __asm_comiss(__asm_movss_31(v25), g30);
                int64_t v30 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v25)))); // 0x180206b90
                int64_t v31 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v30)))); // 0x180206bae
                int64_t v32 = __asm_movss(__asm_mulss(__asm_movss_31(*v6), 0x40a00000)); // 0x180206bcc
                int32_t v33 = __asm_movss(__asm_movss_31(*v6)); // 0x180206be2
                int128_t v34 = __asm_subss(__asm_movss_31((int32_t)v32), v33); // 0x180206bf1
                int128_t v35 = __asm_movaps(__asm_divss(__asm_subss(__asm_movss_31((int32_t)v31), v33), v34)); // 0x180206c0a
                int32_t v36 = __asm_movss(v35); // 0x180206c0d
                __asm_comiss(__asm_xorps(v35, v35), (int128_t)v36);
                __asm_comiss(__asm_movss_31(v36), g40);
                int128_t v37 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v36))); // 0x180206c53
                int128_t v38 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v37)))); // 0x180206c6e
                int128_t v39 = __asm_addss(__asm_mulss_35(v38, __asm_subss(__asm_movss_31(0x40800000), v7)), v7); // 0x180206c8b
                int128_t v40 = __asm_movss_31((int32_t)__asm_movss(v39)); // 0x180206c9c
                int64_t v41 = __asm_movss(v40); // 0x180206ca5
                __asm_comiss(__asm_xorps(v40, v40), v28);
                int128_t v42 = __asm_movss_31(v25); // 0x180206cc8
                __asm_comiss(v42, g30);
                int64_t v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v42, v42)))); // 0x180206cf6
                int64_t v44 = __asm_movss(__asm_movss_31((int32_t)v43)); // 0x180206d02
                int128_t v45 = __asm_mulss(__asm_mulss(__asm_movss_31(*v6), 0x420c0000), (int32_t)v41); // 0x180206d20
                int64_t v46 = __asm_movss(__asm_mulss(__asm_mulss_35(v45, __asm_movss_31((int32_t)v44)), *v8)); // 0x180206d40
                v15 = (int32_t *)(v19 + v9);
                int32_t v47 = __asm_movss(__asm_addss(__asm_movss_31(*v15), (int32_t)v46)); // 0x180206da3
                *v15 = v47;
                v16 = __asm_movss(__asm_movss_31(v47));
                __asm_comiss(__asm_movss_31(v16), g30);
                if (a1 <= 0xffffffffffffffdf) {
                    goto lab_0x180206e16;
                } else {
                    // 0x180206df5
                    __asm_ucomiss(__asm_cvtsi2ss(__asm_cvttss2si_39(v16)), v16);
                    if ((v10 & 1) == 0 || v9 != 0) {
                        int32_t v48 = __asm_cvttss2si_39(v16) - 1; // 0x180206e0e
                        v13 = (llvm_ctpop_i8((char)v48) & 1) == 0;
                        v18 = v48 == 0;
                        v14 = v48;
                        goto lab_0x180206e20;
                    } else {
                        goto lab_0x180206e16;
                    }
                }
            } else {
                // 0x180206b21
                __asm_comiss(__asm_xorps(v29, v29), (int128_t)v17);
                goto lab_0x18020694c;
            }
        } else {
            goto lab_0x18020694c;
        }
    }
    // 0x180206ef7
    return 2;
  lab_0x18020694c:
    // 0x18020694c
    v11 = v12 + 1;
    if (v11 == 2) {
        return 2;
    }
    goto lab_0x180206961;
  lab_0x180206e16:
    // 0x180206e16
    v13 = (v10 & 1) == 0;
    v18 = v9 == 0;
    v14 = __asm_cvttss2si_39(v16);
    goto lab_0x180206e20;
  lab_0x180206e20:;
    int128_t v49 = __asm_cvtsi2ss(v14); // 0x180206e20
    int32_t v50 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v49))); // 0x180206e38
    __asm_ucomiss(__asm_movss_31(v50), (int32_t)g30);
    if (v13 || !v18) {
        // 0x180206e54
        __asm_movaps(__asm_addss(__asm_movss_31(v17), v50));
        if (v12 != 0) {
            // 0x180206e7a
            function_18019d8f0(a2);
        } else {
            // 0x180206e5b
            function_18019d8a0(a2);
        }
        // 0x180206e97
        *v15 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v15), v50));
    }
    goto lab_0x18020694c;
}

// Address range: 0x180206f10 - 0x18020709b
int64_t function_180206f10(char * a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8);
    int64_t v2; // 0x180206f10
    int64_t result = v1 + 24 * 0x100000000 * v2 / 0x100000000; // 0x180206f63
    if ((int32_t)v2 == 0) {
        // 0x180207093
        return result;
    }
    int64_t v3 = (int64_t)a1;
    int32_t * v4 = (int32_t *)((int64_t)g1201 + 0x6184);
    int32_t * v5 = (int32_t *)v1;
    int32_t v6 = *v5; // 0x180206fa5
    int32_t v7 = v6; // 0x180206fa8
    unsigned char v8; // 0x180206fc1
    int64_t v9; // 0x180206fec
    if (v6 == 1) {
        // 0x180206faa
        v7 = v6;
        if ((*v4 & 32) != 0) {
            // 0x180206fbc
            v8 = *(char *)(v1 + 4);
            v9 = v8 == 0 ? (int64_t)"Clear" : (int64_t)"SelectAll";
            function_18018fdd0("[selection] %s: Request: SetAll %d (= %s)\n", v3, (int64_t)v8, v9);
            v7 = *v5;
        }
    }
    // 0x18020700f
    int64_t v10; // 0x180207066
    int64_t v11; // 0x18020706f
    if (v7 == 2) {
        // 0x180207019
        if ((*v4 & 32) != 0) {
            // 0x18020702b
            v10 = *(int64_t *)(v1 + 16);
            v11 = *(int64_t *)(v1 + 8);
            function_18018fdd0("[selection] %s: Request: SetRange %I64d..%I64d (0x%I64X..0x%I64X) = %d (dir %d)\n", v3, v11, v10);
        }
    }
    int64_t v12 = v1 + 24; // 0x180206f7d
    while (result != v12) {
        int64_t v13 = v12;
        v5 = (int32_t *)v13;
        v6 = *v5;
        v7 = v6;
        if (v6 == 1) {
            // 0x180206faa
            v7 = v6;
            if ((*v4 & 32) != 0) {
                // 0x180206fbc
                v8 = *(char *)(v13 + 4);
                v9 = v8 == 0 ? (int64_t)"Clear" : (int64_t)"SelectAll";
                function_18018fdd0("[selection] %s: Request: SetAll %d (= %s)\n", v3, (int64_t)v8, v9);
                v7 = *v5;
            }
        }
        // 0x18020700f
        if (v7 == 2) {
            // 0x180207019
            if ((*v4 & 32) != 0) {
                // 0x18020702b
                v10 = *(int64_t *)(v13 + 16);
                v11 = *(int64_t *)(v13 + 8);
                function_18018fdd0("[selection] %s: Request: SetRange %I64d..%I64d (0x%I64X..0x%I64X) = %d (dir %d)\n", v3, v11, v10);
            }
        }
        // 0x18020708e
        v12 = v13 + 24;
    }
    // 0x180207093
    return result;
}

// Address range: 0x1802070b0 - 0x18020730f
int64_t function_1802070b0(int64_t * a1, int64_t a2, uint64_t a3) {
    int64_t result = (int64_t)a1;
    if ((*(int32_t *)(a2 + 52) & 0x1000) == 0) {
        // 0x1802071bd
        int32_t v1; // bp-112, 0x1802070b0
        __asm_rep_movsb_memcpy((char *)&v1, (char *)(a3 + 544), 16);
        int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 132))); // 0x1802071eb
        int128_t v3 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(a3 + 128)))); // 0x180207207
        int32_t v4 = __asm_movss(v3); // bp-56, 0x18020720d
        __asm_movss(__asm_movss_31((int32_t)v2));
        int32_t v5; // 0x1802070b0
        int128_t v6 = __asm_movss_31(v5); // 0x180207238
        int64_t v7 = __asm_movss(__asm_addss(v6, *(int32_t *)((int64_t)&v4 + 4))); // 0x180207243
        int64_t v8 = __asm_movss(__asm_addss(__asm_movss_31(v1), v4)); // 0x180207258
        int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x180207264
        int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x180207270
        int32_t v11; // 0x1802070b0
        __asm_comiss(__asm_movss_31(v11), (int128_t)(int32_t)v10);
        int64_t v12 = __asm_movss(__asm_movss_31(v11)); // 0x180207297
        int32_t v13; // 0x1802070b0
        __asm_comiss(__asm_movss_31(v13), (int128_t)(int32_t)v9);
        int64_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v13)))); // 0x1802072ca
        __asm_movss(__asm_movss_31((int32_t)v12));
        v1 = v14;
        __asm_rep_movsb_memcpy((char *)a1, (char *)&v1, 16);
        // 0x180207305
        return result;
    }
    int32_t * v15 = (int32_t *)(a3 + 308); // 0x18020710e
    int128_t v16 = __asm_movss_31(*v15); // 0x18020710e
    int64_t v17 = a2 + 60; // 0x180207113
    __asm_comiss(v16, *(int128_t *)v17);
    int64_t v18; // 0x1802070b0
    if (a3 > 0xfffffffffffffecf) {
        // 0x18020712b
        v18 = __asm_movss(__asm_movss_31(*(int32_t *)v17));
    } else {
        // 0x180207119
        v18 = __asm_movss(__asm_movss_31(*v15));
    }
    int64_t v19 = a2 + 56; // 0x1802070e8
    int32_t * v20 = (int32_t *)(a3 + 304); // 0x1802070ff
    __asm_comiss(__asm_movss_31(*v20), *(int128_t *)v19);
    int64_t v21; // 0x1802070b0
    if (a3 > 0xfffffffffffffecf) {
        // 0x18020715e
        v21 = __asm_movss(__asm_movss_31(*(int32_t *)v19));
    } else {
        // 0x18020714e
        v21 = __asm_movss(__asm_movss_31(*v20));
    }
    int64_t v22 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x180207171
    __asm_movss(__asm_movss_31((int32_t)v18));
    *a1 = *(int64_t *)v19;
    *(int64_t *)(result + 8) = 0x100000000 * v22 / 0x100000000;
    // 0x180207305
    return result;
}

// Address range: 0x180207320 - 0x18020733c
int64_t function_180207320(int64_t a1, int64_t a2) {
    // 0x180207320
    return a2 & 0xffffffff;
}

// Address range: 0x180207350 - 0x1802073b4
int64_t function_180207350(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)*(int32_t *)(a2 + 8); // 0x180207375
    int64_t v2 = (int64_t)*(int32_t *)(a1 + 8); // 0x18020737c
    return v2 > v1 ? 1 : v2 < v1 ? 0xffffffff : 0;
}

// Address range: 0x1802073c0 - 0x180207548
int64_t function_1802073c0(int64_t a1, int32_t a2, unsigned char result, int32_t a4, int64_t a5) {
    int64_t v1 = 16 * (int64_t)a4; // 0x1802073ed
    int64_t * v2 = (int64_t *)(a1 + 40); // 0x1802073f6
    int64_t v3 = *v2; // 0x1802073f6
    int64_t v4 = function_180197dc0(v3, v3 + v1, a2); // 0x18020740b
    bool v5 = true; // 0x18020742f
    bool v6; // 0x1802073c0
    int32_t v7; // 0x1802073c0
    if (v4 == *v2 + v1) {
        goto lab_0x180207471;
    } else {
        // 0x180207431
        v5 = true;
        if (*(int32_t *)v4 != a2) {
            goto lab_0x180207471;
        } else {
            // 0x18020745c
            v5 = false;
            v6 = false;
            v7 = 1;
            if (*(int32_t *)(v4 + 8) == 0) {
                goto lab_0x180207471;
            } else {
                goto lab_0x180207479;
            }
        }
    }
  lab_0x180207471:
    // 0x180207471
    v6 = v5;
    v7 = 0;
    goto lab_0x180207479;
  lab_0x180207479:
    // 0x180207479
    if (v7 == (int32_t)result) {
        // 0x180207543
        return result;
    }
    // 0x18020748c
    int64_t v8; // 0x1802073c0
    int32_t v9 = v8;
    int32_t v10; // 0x1802073c0
    if (result == 0 || !v6) {
        // 0x1802074dd
        v10 = v9;
        if (!v6) {
            // 0x1802074e6
            *(int32_t *)(v4 + 8) = result == 0 ? 0 : (int32_t)a5;
            int64_t v11; // 0x1802073c0
            v10 = *(int32_t *)&v11;
        }
    } else {
        int32_t v12 = a2; // bp-24, 0x1802074af
        function_1801cf0f0(a1 + 32, (int64_t)&v12);
        v10 = v9;
    }
    uint32_t result2 = v10 + (result == 0 ? -1 : 1); // 0x180207538
    *(int32_t *)a1 = result2;
    // 0x180207543
    return result2;
}

// Address range: 0x180207550 - 0x180207596
int64_t function_180207550(int64_t a1, char a2, int32_t a3) {
    // 0x180207550
    if (a2 == 0) {
        // 0x180207591
        return 0;
    }
    int64_t result = a1; // 0x180207584
    int64_t v1; // 0x180207550
    if ((int32_t)v1 != a3) {
        // 0x180207586
        result = function_180194280(a1 + 32);
    }
    // 0x180207591
    return result;
}

// Address range: 0x1802075a0 - 0x1802075e5
int64_t function_1802075a0(int64_t a1, int64_t a2) {
    int64_t result = 0x100000000 * a2 / 0x100000000 * (int64_t)*(int32_t *)(a1 + 8); // 0x1802075c5
    __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(result + a1))));
    return result;
}

// Address range: 0x1802075f0 - 0x1802076ec
int64_t function_1802075f0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1802075f4
    uint32_t v2 = *(int32_t *)(v1 + 0x4b78); // 0x18020761b
    if ((int64_t)*(int32_t *)(v1 + 0x4b68) <= (int64_t)v2) {
        // 0x1802076e7
        return v1 & -256;
    }
    int64_t v3 = 0x100000000000000 * *(int64_t *)(v1 + 0x4078) / 0x100000000000000; // 0x180207629
    uint32_t v4 = *(int32_t *)(v3 + 20) & 0x10000000; // 0x180207631
    if (v4 != 0) {
        // 0x1802076e7
        return (int64_t)v4 & -256;
    }
    int64_t v5 = *(int64_t *)(v1 + 0x4b70) + 56 * (int64_t)v2; // 0x180207666
    if (*(int32_t *)(v3 + 368) != *(int32_t *)(v5 + 24)) {
        // 0x1802076e7
        return v3 & -256;
    }
    int64_t v6 = *(int64_t *)(v5 + 8); // 0x180207697
    if (v6 == 0 || (*(int32_t *)(v6 + 20) & 0x10000000) == 0) {
        // 0x1802076e7
        return 0;
    }
    // 0x1802076b3
    if ((function_1801992f0(v6, v3, 1) & 255) != 0) {
        // 0x1802076e7
        return 1;
    }
    // 0x1802076e7
    return 0;
}

// Address range: 0x180207700 - 0x180209482
int64_t function_180207700(uint64_t a1) {
    // 0x180207700
    int32_t * v1; // bp-1064, 0x180207700
    *(int64_t *)&v1 = (int64_t)g1201;
    *(char *)(a1 + 115) = 0;
    int64_t v2; // bp-1112, 0x180207700
    int64_t v3 = &v2; // 0x180207707
    int64_t v4; // 0x180207700
    int64_t v5; // 0x180207700
    int64_t v6; // 0x180207700
    int16_t v7; // 0x180207700
    int64_t v8; // 0x180207700
    int32_t v9; // 0x180207700
    int32_t v10; // 0x180207700
    int32_t v11; // 0x180207700
    int32_t v12; // 0x180207700
    int64_t v13; // 0x180207700
    int64_t v14; // 0x180207700
    int16_t v15; // 0x180207700
    int16_t v16; // 0x180207700
    int32_t v17; // 0x180207700
    int32_t v18; // 0x180207700
    int32_t v19; // 0x180207700
    int32_t v20; // 0x180207700
    int64_t v21; // 0x180207700
    int32_t v22; // 0x180207700
    int32_t v23; // 0x180207700
    int32_t * v24; // 0x180207700
    int32_t * v25; // 0x180207700
    int64_t v26; // 0x18020780c
    uint32_t v27; // 0x1802077df
    int32_t * v28; // 0x180207700
    if (*(int32_t *)&v6 == 0) {
        // 0x180207700
        v4 = v3 + 1024;
    } else {
        int64_t * v29 = (int64_t *)(a1 + 8); // 0x18020780c
        int32_t * v30 = (int32_t *)(a1 + 40); // 0x180207838
        int64_t v31 = v3 + 1024;
        v28 = (int32_t *)(a1 + 32);
        v24 = (int32_t *)(a1 + 24);
        v25 = (int32_t *)(a1 + 28);
        v21 = 0;
        v22 = 0;
        v19 = 0;
        v15 = 0;
        v11 = 0;
        v13 = 0;
        while (true) {
          lab_0x1802077eb:
            // 0x1802077eb
            v14 = v13;
            v12 = v11;
            v16 = v15;
            v20 = v19;
            v23 = v22;
            v26 = *v29 + 44 * v21;
            if ((int64_t)*(int32_t *)(v26 + 8) < (int64_t)*v30) {
                goto lab_0x180207850;
            } else {
                // 0x180207840
                if (*(char *)(v26 + 40) == 0) {
                    int64_t v32; // 0x180207700
                    if (v23 == v12) {
                        // 0x1802078c7
                        int64_t v33; // 0x18020780c
                        v32 = v33;
                    } else {
                        // 0x1802078d5
                        int64_t v34; // bp-136, 0x180207700
                        __asm_rep_movsb_memcpy((char *)&v34, (char *)v26, 44);
                        __asm_rep_movsb_memcpy((char *)*v29, (char *)&v34, 44);
                        v32 = *v29;
                    }
                    // 0x180207963
                    *(int16_t *)(v32 + 38) = v16;
                    int32_t v35 = *(int32_t *)(v32 + 4); // 0x1802079b9
                    int32_t v36 = (v35 & 64) == 0 ? (char)v35 > -1 ? 1 : 2 : 0;
                    int32_t v37 = v20; // 0x180207a2b
                    if (v12 >= 1) {
                        int64_t v38 = *v29; // 0x180207a55
                        int32_t v39 = *(int32_t *)(44 * (0x100000000 * v14 - 0x100000000) / 0x100000000 + 4 + v38); // 0x180207a79
                        int32_t v40 = (v39 & 64) == 0 ? (char)v39 > -1 ? 1 : 2 : 0;
                        v37 = (v36 != 0 | v40 == 0) == (v36 == 2 | v40 != 2) ? v20 : 1;
                    }
                    int32_t * v41 = (int32_t *)(v31 + (int64_t)(12 * v36)); // 0x180207b24
                    *v41 = *v41 + 1;
                    int32_t v42 = v12 + 1; // 0x180207b44
                    v9 = v42;
                    v7 = v42;
                    v8 = v42;
                    v17 = v37;
                    goto lab_0x1802077cd;
                } else {
                    goto lab_0x180207850;
                }
            }
        }
      lab_0x180207b4f:
        if (v27 != v10) {
            // 0x180207b5f
            function_18021c620(a1, v10);
        }
        // 0x180207b81
        v4 = v31;
        if ((v18 & 255) != 0 && v27 >= 2) {
            // 0x180207bbc
            function_180282ff0(*v29, (int64_t)v27, 44, 0x18020a1b0);
            v4 = v31;
            v5 = 44;
        }
    }
    int64_t v43 = v5;
    int64_t v44 = v4;
    int32_t * v45 = (int32_t *)v44; // 0x180207be8
    int32_t * v46 = (int32_t *)(v3 + 1036);
    int64_t v47; // 0x180207700
    if (*v45 < 1) {
        goto lab_0x180207c2e;
    } else {
        // 0x180207bf2
        if (*(int32_t *)(v3 + 1048) + *v46 < 1) {
            goto lab_0x180207c2e;
        } else {
            int32_t v48 = *(int32_t *)((int64_t)v1 + 0x3954); // 0x180207c1b
            v47 = __asm_movss(__asm_movss_31(v48));
            goto lab_0x180207c3a;
        }
    }
  lab_0x180207ee1:;
    // 0x180207ee1
    int32_t * v49; // bp-672, 0x180207700
    int64_t v50; // 0x180207ea8
    if ((*(int32_t *)(v50 + 4) & 0x200000) == 0) {
        // 0x180207ef2
        *(int64_t *)&v49 = v50;
    }
    goto lab_0x180207eff;
  lab_0x180207eff:;
    int32_t v51 = *(int32_t *)v50; // 0x180207f0f
    int32_t v52; // 0x180207700
    int32_t v53 = v52; // 0x180207f1d
    if (v52 == 0) {
        int32_t v54 = *(int32_t *)((int64_t)v1 + 0x4d6c); // 0x180207f2b
        v53 = v54 != v51 ? v52 : v51;
    }
    int32_t v55 = v53;
    function_1801ebf20(a1, v50);
    int32_t * v56 = (int32_t *)(v50 + 28);
    __asm_comiss(__asm_movss_31(*v56), g30);
    int128_t v57 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v56))); // 0x180207fe2
    int64_t v58 = __asm_movss(v57); // 0x180207feb
    int32_t * v59 = (int32_t *)(v50 + 24); // 0x180207feb
    *v59 = (int32_t)v58;
    int32_t v60 = *(int32_t *)(v50 + 4); // 0x180207ff5
    int32_t v61 = (v60 & 64) == 0 ? (char)v60 > -1 ? 1 : 2 : 0;
    int32_t v62; // 0x180207700
    int64_t v63; // 0x180207700
    if (v62 != v61) {
        // 0x18020809a
        v63 = __asm_movss(__asm_xorps(v57, v57));
    } else {
        int32_t v64 = *(int32_t *)((int64_t)v1 + 0x3954); // 0x180208087
        v63 = __asm_movss(__asm_movss_31(v64));
    }
    int128_t v65 = __asm_addss(__asm_movss_31(*v59), (int32_t)v63); // 0x1802080b0
    int64_t v66; // 0x180207700
    int32_t * v67 = (int32_t *)(v66 + (int64_t)(12 * v61)); // 0x1802080c1
    *v67 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v67), v65)));
    int32_t * v68 = (int32_t *)(v3 + 1064 + (int64_t)(4 * v61)); // 0x1802080fd
    int32_t v69 = *v68; // 0x1802080fd
    *v68 = v69 + 1;
    uint64_t v70 = 12 * (int64_t)v69; // 0x18020812d
    uint64_t v71 = v70 + *(int64_t *)((int64_t)v1 + 0x4f40); // 0x180208139
    int32_t v72; // 0x180207700
    *(int32_t *)v71 = v72;
    int32_t v73 = __asm_movss(__asm_movss_31(*v59)); // 0x180208175
    *(int32_t *)(v71 + 8) = v73;
    *(int32_t *)(v71 + 4) = (int32_t)__asm_movss(__asm_movss_31(v73));
    int32_t v74 = __asm_movss(__asm_movss_31(*v59)); // 0x18020819e
    __asm_comiss(__asm_movss_31(v74), g40);
    int64_t v75; // 0x180207700
    if (v71 < v70) {
        // 0x1802081cd
        v75 = __asm_movss(__asm_movss_31((int32_t)g40));
    } else {
        // 0x1802081b9
        v75 = __asm_movss(__asm_movss_31(v74));
    }
    // 0x1802081de
    int32_t v76; // 0x180207700
    int32_t v77 = v51 != *(int32_t *)(a1 + 24) ? v76 : 1;
    int128_t v78 = __asm_movss_31((int32_t)v75); // 0x1802081de
    int128_t v79 = __asm_movss_31((int32_t)__asm_movss(v78)); // 0x1802081f0
    *(int32_t *)(v50 + 20) = (int32_t)__asm_movss(v79);
    int32_t v80 = v72 + 1; // 0x180207e6d
    int64_t v81 = v80;
    if (v81 >= (int64_t)*(int32_t *)&v6) {
        // break -> 0x180207e73
        goto lab_0x180207e73;
    }
    int32_t * v82 = v49; // 0x180207700
    int64_t v83 = v81; // 0x180207700
    v72 = v80;
    v76 = v77;
    v62 = v61;
    int32_t v84 = v55; // 0x180207700
    goto lab_0x180207e87;
  lab_0x180207850:;
    int32_t * v87 = (int32_t *)v26; // 0x180207820
    int32_t v88 = *v87; // 0x180207860
    int32_t v89 = v88; // 0x180207865
    if (*v28 == v88) {
        // 0x180207867
        *v28 = 0;
        v89 = *v87;
    }
    int32_t v90 = v89; // 0x18020788b
    if (*v24 == v89) {
        // 0x18020788d
        *v24 = 0;
        v90 = *v87;
    }
    // 0x18020789c
    v9 = v12;
    v7 = v16;
    v8 = v14;
    v17 = v20;
    if (*v25 == v90) {
        // 0x1802078b3
        *v25 = 0;
        v9 = v12;
        v7 = v16;
        v8 = v14;
        v17 = v20;
    }
    goto lab_0x1802077cd;
  lab_0x1802077cd:
    // 0x1802077cd
    v18 = v17;
    v10 = v9;
    int32_t v91 = v23 + 1; // 0x1802077d1
    int64_t v92 = v91;
    v27 = *(int32_t *)&v6;
    v21 = v92;
    v22 = v91;
    v19 = v18;
    v15 = v7;
    v11 = v10;
    v13 = v8;
    if (v92 >= (int64_t)v27) {
        // break -> 0x180207b4f
        goto lab_0x180207b4f;
    }
    goto lab_0x1802077eb;
  lab_0x180207c2e:;
    // 0x180207c2e
    int128_t v93; // 0x180207700
    v47 = __asm_movss(__asm_xorps(v93, v93));
    goto lab_0x180207c3a;
  lab_0x180207c3a:;
    int128_t v94 = __asm_movss_31((int32_t)v47); // 0x180207c43
    int64_t v95 = __asm_movss(v94); // 0x180207c4c
    int64_t v96 = v3 + 1032; // 0x180207c4c
    int32_t * v97 = (int32_t *)v96; // 0x180207c4c
    *v97 = (int32_t)v95;
    int64_t v98; // 0x180207700
    if (*v46 < 1) {
        goto lab_0x180207c93;
    } else {
        // 0x180207c68
        if (*(int32_t *)(v3 + 1048) < 1) {
            goto lab_0x180207c93;
        } else {
            int32_t v99 = *(int32_t *)((int64_t)v1 + 0x3954); // 0x180207c80
            v98 = __asm_movss(__asm_movss_31(v99));
            goto lab_0x180207c9f;
        }
    }
  lab_0x180207c93:
    // 0x180207c93
    v98 = __asm_movss(__asm_xorps(v94, v94));
    goto lab_0x180207c9f;
  lab_0x180207c9f:;
    int128_t v100 = __asm_movss_31((int32_t)v98); // 0x180207ca8
    int64_t v101 = __asm_movss(v100); // 0x180207cb1
    int32_t * v102 = (int32_t *)(v3 + 1044); // 0x180207cb1
    *v102 = (int32_t)v101;
    int32_t * v103 = (int32_t *)(a1 + 28); // 0x180207cca
    int32_t v104 = *v103; // 0x180207cca
    int32_t v105 = 0; // 0x180207cce
    if (v104 != 0) {
        int32_t * v106 = (int32_t *)(a1 + 24); // 0x180207ce3
        *v106 = v104;
        *v103 = 0;
        v105 = *v106;
    }
    int32_t * v107 = (int32_t *)(a1 + 108); // 0x180207d0c
    int32_t v108 = v105; // 0x180207d10
    if (*v107 != 0) {
        int32_t v109 = v105; // 0x180207d24
        if ((function_1801ec390(a1) & 255) != 0) {
            int32_t v110 = *(int32_t *)(a1 + 24); // 0x180207d36
            int32_t v111 = *v107; // 0x180207d39
            v109 = v111 != v110 ? v105 : v111;
        }
        // 0x180207d4d
        *v107 = 0;
        v108 = v109;
    }
    int32_t * v112 = (int32_t *)(a1 + 16); // 0x180207d64
    int32_t v113 = v108; // 0x180207d8a
    if ((*v112 & 4) != 0) {
        int64_t v114 = function_180209eb0(a1); // 0x180207d94
        v113 = v108;
        if (v114 != 0) {
            int32_t v115 = *(int32_t *)v114; // 0x180207dbc
            *(int32_t *)(a1 + 24) = v115;
            v113 = v115;
        }
    }
    int32_t v116 = *(int32_t *)&v6;
    function_1801d0190((int64_t)v1 + 0x4f38, v116);
    v49 = NULL;
    int64_t v117; // 0x180207700
    int32_t v118; // 0x180207700
    int32_t v119; // 0x180207700
    int128_t v120; // 0x180207700
    if (v116 == 0) {
        // 0x180207dd0
        v117 = v3 + 1028;
        v118 = v113;
        v119 = 0;
        v120 = v100;
    } else {
        // 0x180207e87
        v66 = v3 + 1028;
        v82 = NULL;
        v83 = 0;
        v72 = 0;
        v76 = 0;
        v62 = -1;
        v84 = v113;
        while (true) {
          lab_0x180207e87:
            // 0x180207e87
            v52 = v84;
            int32_t * v85 = v82; // 0x180207ec1
            v50 = *(int64_t *)(a1 + 8) + 44 * v83;
            if (v85 == NULL) {
                goto lab_0x180207ee1;
            } else {
                int32_t v86 = *(int32_t *)((int64_t)v85 + 12); // 0x180207edc
                if ((int64_t)v86 < (int64_t)*(int32_t *)(v50 + 12)) {
                    goto lab_0x180207ee1;
                } else {
                    goto lab_0x180207eff;
                }
            }
        }
      lab_0x180207e73:
        // 0x180207e73
        v117 = v66;
        v118 = v55;
        v119 = v77 & 255;
        v120 = v79;
    }
    int128_t v121 = v120;
    int64_t v122 = __asm_movss(__asm_xorps(v121, v121)); // 0x180208213
    int32_t * v123 = (int32_t *)(a1 + 72); // 0x180208213
    *v123 = (int32_t)v122;
    int64_t v124 = 0; // 0x180207700
    int64_t v125 = 12 * v124; // 0x180208238
    int128_t v126 = __asm_movss_31(*(int32_t *)(v125 + v117)); // 0x180208245
    int128_t v127 = __asm_addss_34(__asm_movss_31(*v123), __asm_addss(v126, *(int32_t *)(v125 + v96))); // 0x180208264
    *v123 = (int32_t)__asm_movss(__asm_movaps(v127));
    int64_t v128 = v124 + 1;
    v124 = v128;
    while (v128 != 3) {
        // 0x180208233
        v125 = 12 * v124;
        v126 = __asm_movss_31(*(int32_t *)(v125 + v117));
        v127 = __asm_addss_34(__asm_movss_31(*v123), __asm_addss(v126, *(int32_t *)(v125 + v96)));
        *v123 = (int32_t)__asm_movss(__asm_movaps(v127));
        v128 = v124 + 1;
        v124 = v128;
    }
    int64_t v129 = a1 + 44; // 0x180208282
    int32_t * v130 = (int32_t *)(a1 + 52); // 0x18020829e
    int128_t v131 = __asm_movss_31(*v130); // 0x18020829e
    int32_t * v132 = (int32_t *)v129; // 0x1802082a3
    int128_t v133 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(v131, *v132))); // 0x1802082b0
    __asm_comiss(__asm_movss_31(*v123), v133);
    bool v134 = a1 > 0xffffffffffffffd3 | v129 == 0; // 0x1802082c9
    int32_t v135 = v118; // 0x1802082c9
    if (!((v134 | *(int32_t *)&v6 < 2))) {
        int32_t v136 = *v112; // 0x1802082e4
        v135 = v118;
        if ((v136 & 256) != 0 && (v136 & 16) == 0) {
            int64_t v137 = function_180209940(a1); // 0x18020830a
            v135 = v118;
            if (v137 != 0) {
                int32_t v138 = *(int32_t *)v137; // 0x18020832a
                v135 = v138;
                if ((*(int32_t *)(v137 + 4) & 0x200000) == 0) {
                    // 0x180208344
                    *(int32_t *)(a1 + 24) = v138;
                    v135 = v138;
                }
            }
        }
    }
    int32_t * v139 = (int32_t *)v117; // 0x180208365
    int32_t v140 = __asm_movss(__asm_addss(__asm_movss_31(*v139), *v97)); // 0x180208377
    int64_t v141 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v3 + 1040)), *v102)); // 0x1802083a4
    int32_t * v142 = (int32_t *)(v3 + 1052); // 0x1802083bf
    int128_t v143 = __asm_addss(__asm_movss_31(*v142), *(int32_t *)(v3 + 1056)); // 0x1802083c8
    int32_t v144 = __asm_movss(v143); // 0x1802083d1
    int64_t v145 = __asm_movss(__asm_subss(__asm_movss_31(*v130), *v132)); // 0x180208407
    __asm_comiss(__asm_movss_31((int32_t)v145), __asm_addss(__asm_movss_31(v140), v144));
    int32_t v146 = __asm_movss(__asm_subss(__asm_movss_31(*v130), *v132));
    int64_t v147; // 0x180207700
    if (v134) {
        // 0x180208523
        v147 = __asm_movss(__asm_subss_36(__asm_addss(__asm_movss_31(v140), v144), __asm_movss_31(v146)));
    } else {
        int128_t v148 = __asm_subss(__asm_subss(__asm_movss_31(v146), v140), v144); // 0x1802084a9
        int128_t v149 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v141), v148)); // 0x1802084bf
        int32_t v150 = __asm_movss(v149); // 0x1802084c2
        __asm_comiss(__asm_movss_31(v150), g30);
        int128_t v151 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v150))); // 0x1802084fd
        v147 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v151)));
    }
    int32_t v152 = v147;
    int128_t v153 = __asm_movss_31(v152); // 0x180208581
    __asm_comiss(v153, g40);
    int128_t v154 = v153; // 0x180208591
    if (a1 <= 0xffffffffffffffd3) {
        // 0x180208597
        v154 = v153;
        if (!v134 != (char)*v112 > -1) {
            int32_t v155; // 0x180207700
            int32_t v156; // 0x180207700
            if (v134) {
                // 0x180208601
                v156 = *(int32_t *)(v3 + 1048) + *v45;
                v155 = 0;
            } else {
                // 0x180208618
                v156 = *v46;
                v155 = *(int32_t *)(v3 + 1048) + *v45;
            }
            int64_t v157 = v155;
            int64_t v158 = *(int64_t *)((int64_t)v1 + 0x4f40); // 0x18020866b
            __asm_movss_31(v152);
            function_1801e67f0(12 * v157 + v158, v156);
            int64_t v159 = v155 + v156; // 0x1802086b2
            v154 = v153;
            if (v157 < v159) {
                int32_t v160 = g40;
                int32_t v161 = v155; // 0x18020869c
                uint64_t v162 = 12 * v157; // 0x1802086e6
                uint64_t v163 = *(int64_t *)((int64_t)v1 + 0x4f40) + v162; // 0x1802086f2
                int32_t v164 = *(int32_t *)v163; // 0x180208706
                int128_t v165 = __asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(v163 + 4))); // 0x18020876e
                int32_t v166 = __asm_movss(v165); // 0x180208772
                int128_t v167 = v166; // 0x180208772
                int128_t v168 = __asm_xorps(v165, v165); // 0x180208778
                __asm_comiss(v168, v167);
                int128_t v169 = v168; // 0x180208780
                int64_t v170; // 0x180207700
                int64_t v171; // 0x180207700
                int64_t v172; // 0x180208715
                int128_t v173; // 0x1802087b8
                int32_t v174; // 0x1802087d3
                int32_t v175; // 0x1802087e1
                int32_t * v176; // 0x180208856
                int128_t v177; // 0x18020885b
                int32_t * v178; // 0x18020886d
                if (v163 < v162 || v163 == 0) {
                    // 0x180208787
                    __asm_comiss(__asm_movss_31(v160), v167);
                    if (v163 < v162) {
                        // 0x1802087a9
                        v171 = __asm_movss(__asm_movss_31(v166));
                    } else {
                        // 0x180208796
                        v171 = __asm_movss(__asm_movss_31(v160));
                    }
                    // 0x1802087b8
                    v172 = 44 * (int64_t)v164 + *(int64_t *)(a1 + 8);
                    v173 = __asm_movss_31((int32_t)v171);
                    v174 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v173)));
                    v175 = *(int32_t *)(v172 + 4);
                    v176 = (int32_t *)(v172 + 20);
                    v177 = __asm_subss(__asm_movss_31(*v176), v174);
                    v170 = (v175 & 64) == 0 ? (char)v175 > -1 ? 12 : 24 : 0;
                    v178 = (int32_t *)(v170 + v117);
                    *v178 = (int32_t)__asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v178), v177)));
                    v169 = __asm_movss_31(v174);
                    *v176 = (int32_t)__asm_movss(v169);
                }
                // 0x180208698
                v161++;
                int64_t v179 = v161; // 0x1802086b8
                v154 = v169;
                while (v179 < v159) {
                    v162 = 12 * v179;
                    v163 = *(int64_t *)((int64_t)v1 + 0x4f40) + v162;
                    v164 = *(int32_t *)v163;
                    v165 = __asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(v163 + 4)));
                    v166 = __asm_movss(v165);
                    v167 = v166;
                    v168 = __asm_xorps(v165, v165);
                    __asm_comiss(v168, v167);
                    v169 = v168;
                    if (v163 < v162 || v163 == 0) {
                        // 0x180208787
                        __asm_comiss(__asm_movss_31(v160), v167);
                        if (v163 < v162) {
                            // 0x1802087a9
                            v171 = __asm_movss(__asm_movss_31(v166));
                        } else {
                            // 0x180208796
                            v171 = __asm_movss(__asm_movss_31(v160));
                        }
                        // 0x1802087b8
                        v172 = 44 * (int64_t)v164 + *(int64_t *)(a1 + 8);
                        v173 = __asm_movss_31((int32_t)v171);
                        v174 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v173)));
                        v175 = *(int32_t *)(v172 + 4);
                        v176 = (int32_t *)(v172 + 20);
                        v177 = __asm_subss(__asm_movss_31(*v176), v174);
                        v170 = (v175 & 64) == 0 ? (char)v175 > -1 ? 12 : 24 : 0;
                        v178 = (int32_t *)(v170 + v117);
                        *v178 = (int32_t)__asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v178), v177)));
                        v169 = __asm_movss_31(v174);
                        *v176 = (int32_t)__asm_movss(v169);
                    }
                    // 0x180208698
                    v161++;
                    v179 = v161;
                    v154 = v169;
                }
            }
        }
    }
    int128_t v180 = v154;
    int128_t v181 = __asm_xorps(v180, v180); // 0x1802088b5
    int64_t v182 = __asm_movss(v181); // 0x1802088b8
    int64_t v183 = __asm_movss(__asm_xorps(v181, v181)); // 0x1802088c9
    int32_t * v184 = (int32_t *)(a1 + 68); // 0x1802088c9
    *v184 = (int32_t)v183;
    int64_t v185 = 0; // 0x180207700
    int32_t v186 = 0;
    int32_t v187 = v182;
    int64_t v188 = 12 * v185 + v44; // 0x1802088f6
    int32_t v189 = v187; // 0x18020890b
    int64_t v190; // 0x180207700
    int64_t v191; // 0x180207700
    int128_t v192; // 0x18020893a
    int128_t v193; // 0x180208958
    int32_t v194; // 0x18020895d
    int128_t v195; // 0x180208966
    int128_t v196; // 0x180208993
    int32_t v197; // 0x1802089ae
    int128_t v198; // 0x1802089ea
    int128_t v199; // 0x1802089fc
    if (v185 == 2) {
        // 0x180208911
        v192 = __asm_subss(__asm_movss_31(*v130), *v132);
        v193 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(v192)), *(int32_t *)(v188 + 4));
        v194 = __asm_movss(v193);
        v195 = __asm_xorps(v193, v193);
        __asm_comiss(v195, (int128_t)v194);
        if (a1 > 0xffffffffffffffd3) {
            // 0x180208981
            v191 = __asm_movss(__asm_movss_31(v194));
        } else {
            // 0x180208973
            v191 = __asm_movss(__asm_xorps(v195, v195));
        }
        // 0x180208993
        v196 = __asm_movss_31((int32_t)v191);
        v197 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v196)));
        __asm_comiss(__asm_movss_31(v187), (int128_t)v197);
        if (v134) {
            // 0x1802089db
            v190 = __asm_movss(__asm_movss_31(v187));
        } else {
            // 0x1802089c7
            v190 = __asm_movss(__asm_movss_31(v197));
        }
        // 0x1802089ea
        v198 = __asm_movss_31((int32_t)v190);
        v199 = __asm_movss_31((int32_t)__asm_movss(v198));
        v189 = __asm_movss(v199);
    }
    int32_t * v200 = (int32_t *)v188; // 0x1802088fe
    int32_t v201 = 0; // 0x180208a2d
    int32_t v202 = v189; // 0x180208a2d
    int32_t v203 = v189; // 0x180208a2d
    int32_t v204 = 0; // 0x180208a2d
    int32_t v205 = 0; // 0x180208a2d
    int64_t v206; // 0x180207700
    int64_t v207; // 0x180207700
    int64_t v208; // 0x180208a60
    int64_t v209; // 0x180208a60
    int128_t v210; // 0x180208a84
    int32_t v211; // 0x180208ab5
    int32_t v212; // 0x180208adc
    int128_t v213; // 0x180208ae1
    int128_t v214; // 0x180208af4
    int32_t v215; // 0x180207700
    int32_t v216; // 0x180208a19
    uint32_t v217; // 0x180208a27
    int64_t v218; // 0x180208a2d
    if (*v200 != 0) {
        v208 = *(int64_t *)(a1 + 8);
        v209 = 44 * (int64_t)(v201 + v186) + v208;
        v210 = __asm_movss_31(v202);
        *(int32_t *)(v209 + 16) = (int32_t)__asm_movss(v210);
        *(int32_t *)(v209 + 32) = -1;
        if (0 < (int64_t)(*v200 - 1)) {
            // 0x180208ab0
            v211 = *(int32_t *)((int64_t)v1 + 0x3954);
            v207 = __asm_movss(__asm_movss_31(v211));
        } else {
            // 0x180208ac8
            v207 = __asm_movss(__asm_xorps(v210, v210));
        }
        // 0x180208ad4
        v212 = *(int32_t *)(v209 + 20);
        v213 = __asm_addss(__asm_movss_31(v212), (int32_t)v207);
        v214 = __asm_movaps(__asm_addss_34(__asm_movss_31(v202), v213));
        v215 = __asm_movss(v214);
        v216 = v201 + 1;
        v217 = *v200;
        v218 = v216;
        v206 = v218;
        v201 = v216;
        v202 = v215;
        v203 = v215;
        v204 = v216;
        v205 = v217;
        while (v218 < (int64_t)v217) {
            // 0x180208a33
            v208 = *(int64_t *)(a1 + 8);
            v209 = 44 * (int64_t)(v201 + v186) + v208;
            v210 = __asm_movss_31(v202);
            *(int32_t *)(v209 + 16) = (int32_t)__asm_movss(v210);
            *(int32_t *)(v209 + 32) = -1;
            if (v206 < (int64_t)(*v200 - 1)) {
                // 0x180208ab0
                v211 = *(int32_t *)((int64_t)v1 + 0x3954);
                v207 = __asm_movss(__asm_movss_31(v211));
            } else {
                // 0x180208ac8
                v207 = __asm_movss(__asm_xorps(v210, v210));
            }
            // 0x180208ad4
            v212 = *(int32_t *)(v209 + 20);
            v213 = __asm_addss(__asm_movss_31(v212), (int32_t)v207);
            v214 = __asm_movaps(__asm_addss_34(__asm_movss_31(v202), v213));
            v215 = __asm_movss(v214);
            v216 = v201 + 1;
            v217 = *v200;
            v218 = v216;
            v206 = v218;
            v201 = v216;
            v202 = v215;
            v203 = v215;
            v204 = v216;
            v205 = v217;
        }
    }
    int128_t v219 = __asm_movss_31(*(int32_t *)(v188 + 4)); // 0x180208b12
    int32_t * v220 = (int32_t *)(v188 + 8); // 0x180208b17
    int32_t v221 = __asm_movss(__asm_addss(v219, *v220)); // 0x180208b1c
    int128_t v222 = __asm_movss_31(v221); // 0x180208b25
    __asm_comiss(v222, g30);
    int64_t v223; // 0x180207700
    if (v204 < v205) {
        // 0x180208b4b
        v223 = __asm_movss(__asm_xorps(v222, v222));
    } else {
        // 0x180208b37
        v223 = __asm_movss(__asm_movss_31(v221));
    }
    int64_t v224 = __asm_movss(__asm_movss_31((int32_t)v223)); // 0x180208b60
    int64_t v225 = __asm_movss(__asm_movss_31((int32_t)v224)); // 0x180208b72
    int128_t v226 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v184))); // 0x180208b91
    *v184 = (int32_t)__asm_movss(__asm_addss(v226, (int32_t)v225));
    int128_t v227 = __asm_addss(__asm_movss_31(v203), *v220); // 0x180208bbe
    int64_t v228 = __asm_movss(v227); // 0x180208bc3
    int64_t v229 = v185 + 1;
    v185 = v229;
    int32_t v230 = *v200 + v186; // 0x1802088e7
    while (v229 != 3) {
        // 0x1802088ed
        v186 = v230;
        v187 = v228;
        v188 = 12 * v185 + v44;
        v189 = v187;
        if (v185 == 2) {
            // 0x180208911
            v192 = __asm_subss(__asm_movss_31(*v130), *v132);
            v193 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(v192)), *(int32_t *)(v188 + 4));
            v194 = __asm_movss(v193);
            v195 = __asm_xorps(v193, v193);
            __asm_comiss(v195, (int128_t)v194);
            if (a1 > 0xffffffffffffffd3) {
                // 0x180208981
                v191 = __asm_movss(__asm_movss_31(v194));
            } else {
                // 0x180208973
                v191 = __asm_movss(__asm_xorps(v195, v195));
            }
            // 0x180208993
            v196 = __asm_movss_31((int32_t)v191);
            v197 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v196)));
            __asm_comiss(__asm_movss_31(v187), (int128_t)v197);
            if (v134) {
                // 0x1802089db
                v190 = __asm_movss(__asm_movss_31(v187));
            } else {
                // 0x1802089c7
                v190 = __asm_movss(__asm_movss_31(v197));
            }
            // 0x1802089ea
            v198 = __asm_movss_31((int32_t)v190);
            v199 = __asm_movss_31((int32_t)__asm_movss(v198));
            v189 = __asm_movss(v199);
        }
        // 0x180208a0b
        v200 = (int32_t *)v188;
        v201 = 0;
        v202 = v189;
        v203 = v189;
        v204 = 0;
        v205 = 0;
        if (*v200 != 0) {
            v208 = *(int64_t *)(a1 + 8);
            v209 = 44 * (int64_t)(v201 + v186) + v208;
            v210 = __asm_movss_31(v202);
            *(int32_t *)(v209 + 16) = (int32_t)__asm_movss(v210);
            *(int32_t *)(v209 + 32) = -1;
            if (0 < (int64_t)(*v200 - 1)) {
                // 0x180208ab0
                v211 = *(int32_t *)((int64_t)v1 + 0x3954);
                v207 = __asm_movss(__asm_movss_31(v211));
            } else {
                // 0x180208ac8
                v207 = __asm_movss(__asm_xorps(v210, v210));
            }
            // 0x180208ad4
            v212 = *(int32_t *)(v209 + 20);
            v213 = __asm_addss(__asm_movss_31(v212), (int32_t)v207);
            v214 = __asm_movaps(__asm_addss_34(__asm_movss_31(v202), v213));
            v215 = __asm_movss(v214);
            v216 = v201 + 1;
            v217 = *v200;
            v218 = v216;
            v206 = v218;
            v201 = v216;
            v202 = v215;
            v203 = v215;
            v204 = v216;
            v205 = v217;
            while (v218 < (int64_t)v217) {
                // 0x180208a33
                v208 = *(int64_t *)(a1 + 8);
                v209 = 44 * (int64_t)(v201 + v186) + v208;
                v210 = __asm_movss_31(v202);
                *(int32_t *)(v209 + 16) = (int32_t)__asm_movss(v210);
                *(int32_t *)(v209 + 32) = -1;
                if (v206 < (int64_t)(*v200 - 1)) {
                    // 0x180208ab0
                    v211 = *(int32_t *)((int64_t)v1 + 0x3954);
                    v207 = __asm_movss(__asm_movss_31(v211));
                } else {
                    // 0x180208ac8
                    v207 = __asm_movss(__asm_xorps(v210, v210));
                }
                // 0x180208ad4
                v212 = *(int32_t *)(v209 + 20);
                v213 = __asm_addss(__asm_movss_31(v212), (int32_t)v207);
                v214 = __asm_movaps(__asm_addss_34(__asm_movss_31(v202), v213));
                v215 = __asm_movss(v214);
                v216 = v201 + 1;
                v217 = *v200;
                v218 = v216;
                v206 = v218;
                v201 = v216;
                v202 = v215;
                v203 = v215;
                v204 = v216;
                v205 = v217;
            }
        }
        // 0x180208b02
        v219 = __asm_movss_31(*(int32_t *)(v188 + 4));
        v220 = (int32_t *)(v188 + 8);
        v221 = __asm_movss(__asm_addss(v219, *v220));
        v222 = __asm_movss_31(v221);
        __asm_comiss(v222, g30);
        if (v204 < v205) {
            // 0x180208b4b
            v223 = __asm_movss(__asm_xorps(v222, v222));
        } else {
            // 0x180208b37
            v223 = __asm_movss(__asm_movss_31(v221));
        }
        // 0x180208b57
        v224 = __asm_movss(__asm_movss_31((int32_t)v223));
        v225 = __asm_movss(__asm_movss_31((int32_t)v224));
        v226 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v184)));
        *v184 = (int32_t)__asm_movss(__asm_addss(v226, (int32_t)v225));
        v227 = __asm_addss(__asm_movss_31(v203), *v220);
        v228 = __asm_movss(v227);
        v229 = v185 + 1;
        v185 = v229;
        v230 = *v200 + v186;
    }
    // 0x180208bea
    function_1801cfb30(a1 + 144, 0);
    int32_t * v231 = (int32_t *)(a1 + 24);
    int32_t v232; // 0x180207700
    int32_t v233; // 0x180207700
    int32_t v234; // 0x180207700
    if (v119 != 0) {
        int32_t v235 = *v231;
        v232 = v235;
        v233 = v235;
        v234 = v135;
        if (v235 != 0) {
            goto lab_0x180208c73;
        } else {
            goto lab_0x180208c36;
        }
    } else {
        // 0x180208c28
        *v231 = 0;
        v232 = 0;
        goto lab_0x180208c36;
    }
  lab_0x180208c73:
    // 0x180208c73
    *(int32_t *)(a1 + 32) = v233;
    *(char *)(a1 + 116) = 0;
    bool v236; // 0x180207700
    int64_t v237; // bp-88, 0x180207700
    int128_t v238; // 0x180207700
    bool v239; // 0x180207700
    if (v234 == 0) {
        // 0x180208cbb
        v236 = true;
        v239 = false;
        v238 = v227;
        if ((*v112 & 256) != 0) {
            int64_t v240 = function_18018ec30((int64_t *)v129, v130, v43 & -256 | 1); // 0x180208cf1
            v236 = (llvm_ctpop_i8((char)v240) & 1) == 0;
            v239 = false;
            v238 = v227;
            if ((v240 & 255) != 0) {
                int64_t v241 = (int64_t)v1;
                int64_t v242 = function_18019f780(*(int64_t *)(v241 + 0x4078), 0); // 0x180208d0f
                v236 = (llvm_ctpop_i8((char)v242) & 1) == 0;
                v239 = false;
                v238 = v227;
                if ((v242 & 255) != 0) {
                    char * v243 = (char *)(v241 + 0x2b5d);
                    int64_t v244; // 0x180207700
                    if (*v243 == 0) {
                        // 0x180208d47
                        v244 = __asm_movss(__asm_movss_31(*(int32_t *)(v241 + 292)));
                    } else {
                        // 0x180208d2f
                        v244 = __asm_movss(__asm_movss_31(*(int32_t *)(v241 + 288)));
                    }
                    int128_t v245 = __asm_movss_31((int32_t)v244); // 0x180208d5d
                    int64_t v246 = __asm_movss(v245); // 0x180208d66
                    int32_t * v247 = (int32_t *)(a1 + 20); // 0x180208dad
                    int64_t v248 = *v243 == 0 ? 660 : 661; // 0x180208db0
                    int128_t v249 = v245; // 0x180208dc1
                    if ((function_1801a4da0(v248, *v247) & 255) != 0) {
                        int32_t v250 = v246; // 0x180208d66
                        int128_t v251 = __asm_movss_31(v250); // 0x180208dc7
                        __asm_ucomiss(v251, (int32_t)g30);
                        function_18020a480(a1, &v237);
                        int128_t v252 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v250), v251)); // 0x180208dfd
                        int128_t v253 = __asm_divss_38(v252, *(int32_t *)&g43); // 0x180208e00
                        int64_t v254 = __asm_movss(v253); // 0x180208e08
                        *(int32_t *)(a1 + 84) = (int32_t)__asm_movss(__asm_xorps(v253, v253));
                        int32_t * v255 = (int32_t *)(a1 + 80); // 0x180208e29
                        v249 = __asm_subss(__asm_movss_31(*v255), (int32_t)v254);
                        __asm_movaps(v249);
                        function_180209540(a1);
                        *v255 = (int32_t)__asm_movss(v249);
                    }
                    // 0x180208e54
                    function_1801a4b40(v248, *v247, 0);
                    v236 = true;
                    v239 = false;
                    v238 = v249;
                }
            }
        }
    } else {
        char v256 = llvm_ctpop_i8((char)v234); // 0x180208c95
        function_180209620(a1, v234, &v237);
        v236 = (v256 & 1) == 0;
        v239 = true;
        v238 = v227;
    }
    int32_t * v257 = (int32_t *)(a1 + 76); // 0x180208e77
    __asm_movss_31(*v257);
    function_180209540(a1);
    *v257 = (int32_t)__asm_movss(v238);
    int32_t * v258 = (int32_t *)(a1 + 80); // 0x180208e9e
    __asm_movss_31(*v258);
    function_180209540(a1);
    *v258 = (int32_t)__asm_movss(v238);
    int128_t v259 = __asm_movss_31(*v257); // 0x180208ecd
    __asm_ucomiss(v259, *v258);
    int64_t v260; // 0x180207700
    if (v236 || v239) {
        int128_t v261 = __asm_movss_31(0x428c0000); // 0x180208ee3
        int32_t v262 = *(int32_t *)((int64_t)v1 + 0x3d90); // 0x180208eeb
        int64_t v263 = __asm_movss(__asm_mulss(v261, v262)); // 0x180208ef3
        int32_t * v264 = (int32_t *)(a1 + 88); // 0x180208f04
        int32_t v265 = __asm_movss(__asm_movss_31(*v264)); // 0x180208f09
        __asm_comiss(__asm_movss_31(v265), (int128_t)(int32_t)v263);
        int64_t v266 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v265)))); // 0x180208f54
        *v264 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v266));
        int128_t v267 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v258), *v257))); // 0x180208f96
        int128_t v268 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v267)))); // 0x180208fb1
        int64_t v269 = __asm_movss(__asm_divss_38(v268, *(int32_t *)&g37)); // 0x180208fc2
        int32_t v270 = __asm_movss(__asm_movss_31(*v264)); // 0x180208fd8
        __asm_comiss(__asm_movss_31(v270), (int128_t)(int32_t)v269);
        int64_t v271 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v270)))); // 0x180209023
        *v264 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v271));
        int32_t v272 = *(int32_t *)(a1 + 40) + 1; // 0x18020904d
        int64_t v273 = (int64_t)v1;
        uint32_t v274 = *(int32_t *)(v273 + 0x3fc0); // 0x180209054
        if (v272 < v274) {
            goto lab_0x1802090a1;
        } else {
            int128_t v275 = __asm_mulss(__asm_movss_31(0x41200000), *(int32_t *)(v273 + 0x3d90)); // 0x180209069
            __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 84)), v275);
            if (v272 > v274) {
                goto lab_0x1802090a1;
            } else {
                // 0x1802090bc
                __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v273 + 24)), *v264));
                int32_t v276 = __asm_movss(__asm_movss_31(*v258)); // 0x1802090e9
                int32_t v277 = __asm_movss(__asm_movss_31(*v257)); // 0x1802090fc
                __asm_comiss(__asm_movss_31(v276), (int128_t)v277);
                __asm_comiss(__asm_movss_31(v277), (int128_t)v276);
                v260 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v277))));
                goto lab_0x180209222;
            }
        }
    } else {
        // 0x18020923a
        *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_xorps(v259, v259));
        goto lab_0x18020924a;
    }
  lab_0x180208c36:
    // 0x180208c36
    v233 = v232;
    v234 = v135;
    if (*v103 == 0 && v49 != NULL) {
        int32_t v278 = *v49; // 0x180208c5f
        *v231 = v278;
        v233 = v278;
        v234 = v278;
    }
    goto lab_0x180208c73;
  lab_0x1802090a1:
    // 0x1802090a1
    v260 = __asm_movss(__asm_movss_31(*v258));
    goto lab_0x180209222;
  lab_0x18020924a:;
    int128_t v279 = __asm_addss(__asm_movss_31(*v132), *v139); // 0x180209260
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(__asm_addss(v279, *v97));
    int128_t v280 = __asm_subss(__asm_movss_31(*v130), *v142); // 0x18020929e
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(__asm_subss(v280, *v102));
    int64_t v281 = *(int64_t *)((int64_t)v1 + 0x4078); // 0x1802092cb
    *(int64_t *)(v281 + 280) = *(int64_t *)v129;
    int64_t v282 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 132))); // 0x180209305
    int128_t v283 = __asm_movss_31(*(int32_t *)(a1 + 56)); // 0x180209332
    int64_t v284 = __asm_movss(__asm_subss(v283, *(int32_t *)(a1 + 48))); // 0x18020933c
    int64_t v285 = __asm_movss(__asm_movss_31((int32_t)v284)); // 0x18020934e
    int128_t v286 = __asm_movss_31(*v184); // 0x18020935f
    int32_t v287 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v286))); // bp-400, 0x180209376
    __asm_movss(__asm_movss_31((int32_t)v285));
    __asm_movss_31((int32_t)v282);
    function_18019ed40((int64_t *)&v287);
    int32_t v288 = __asm_movss(__asm_addss(__asm_movss_31(*v132), *v123)); // 0x1802093e2
    int32_t * v289 = (int32_t *)(v281 + 312); // 0x1802093f3
    int32_t v290 = __asm_movss(__asm_movss_31(*v289)); // 0x1802093fb
    __asm_comiss(__asm_movss_31(v290), (int128_t)v288);
    int64_t v291; // 0x180207700
    if ((a1 ^ -4) < 44) {
        // 0x18020942b
        v291 = __asm_movss(__asm_movss_31(v288));
    } else {
        // 0x180209417
        v291 = __asm_movss(__asm_movss_31(v290));
    }
    int64_t v292 = __asm_movss(__asm_movss_31((int32_t)v291)); // 0x180209446
    *v289 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v292));
    return function_18026ad50((int64_t)g731);
  lab_0x180209222:
    // 0x180209222
    *v257 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v260));
    goto lab_0x18020924a;
}

// Address range: 0x180209490 - 0x180209502
int64_t function_180209490(int64_t a1, int64_t a2, int32_t a3) {
    // 0x180209490
    int64_t result; // 0x180209490
    if ((*(int32_t *)(a1 + 16) & 0x100000) == 0) {
        int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1802094df
        result = function_180198cc0(v1, a2, 0);
    } else {
        int64_t v2 = function_180194e30((char *)a2, 0, 0); // 0x1802094be
        function_18019ead0((int32_t)v2);
        result = v2 & 0xffffffff;
    }
    // 0x1802094fd
    return result;
}

// Address range: 0x180209510 - 0x180209538
int64_t function_180209510(void) {
    int64_t result = (int64_t)g1201;
    __asm_mulss(__asm_movss_31(*(int32_t *)(result + 0x3d90)), 0x41a00000);
    return result;
}

// Address range: 0x180209540 - 0x18020960c
int64_t function_180209540(uint64_t result) {
    // 0x180209540
    int128_t v1; // 0x180209540
    int32_t v2 = __asm_movss(v1); // 0x180209540
    int64_t v3 = result + 44; // 0x180209554
    int128_t v4 = __asm_subss(__asm_movss_31(*(int32_t *)(result + 52)), *(int32_t *)v3); // 0x18020956c
    int128_t v5 = __asm_movss_31((int32_t)__asm_movss(v4)); // 0x180209576
    int128_t v6 = __asm_movss_31(*(int32_t *)(result + 68)); // 0x180209581
    int32_t v7 = __asm_movss(__asm_movaps(__asm_subss_36(v6, v5))); // 0x18020958d
    __asm_comiss(__asm_movss_31(v7), (int128_t)v2);
    int64_t v8; // 0x180209540
    if (result > 0xffffffffffffffd3 || v3 == 0) {
        // 0x1802095ac
        v8 = __asm_movss(__asm_movss_31(v7));
    } else {
        // 0x18020959e
        v8 = __asm_movss(__asm_movss_31(v2));
    }
    int128_t v9 = __asm_movss_31((int32_t)v8); // 0x1802095b7
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x1802095c9
    int128_t v11 = __asm_movss_31(v10); // 0x1802095cf
    __asm_comiss(v11, g30);
    int64_t v12; // 0x180209540
    if (result > 0xffffffffffffffd3) {
        // 0x1802095ec
        v12 = __asm_movss(__asm_xorps(v11, v11));
    } else {
        // 0x1802095de
        v12 = __asm_movss(__asm_movss_31(v10));
    }
    // 0x1802095f5
    __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v12)));
    return result;
}

// Address range: 0x180209620 - 0x18020993a
int64_t function_180209620(int64_t result3, int32_t a2, int64_t * a3) {
    int64_t result = function_1801ebdb0(result3, a2); // 0x180209644
    if (result == 0) {
        // 0x180209932
        return result;
    }
    uint32_t result2 = *(int32_t *)(result + 4) & 192; // 0x180209663
    if (result2 != 0) {
        // 0x180209932
        return result2;
    }
    int128_t v1 = __asm_movss_31(*(int32_t *)((int64_t)g1201 + 0x3d90)); // 0x180209682
    int32_t v2 = *(int32_t *)&g40; // 0x18020968a
    int128_t v3 = __asm_mulss(v1, v2); // 0x18020968a
    int32_t v4 = __asm_movss(v3); // 0x180209692
    uint64_t v5 = (result - *(int64_t *)(result3 + 8)) / 44;
    function_18020a480(result3, a3);
    __asm_movss(v3);
    int64_t v6; // 0x180209620
    if (0x100000000 * v5 / 0x100000000 > (int64_t)(*(int32_t *)a3 - 1)) {
        // 0x180209723
        v6 = __asm_movss(__asm_xorps(__asm_movss_31(v4), g48));
    } else {
        // 0x180209738
        v6 = __asm_movss(__asm_xorps(v3, v3));
    }
    int64_t v7 = (int64_t)a3;
    int32_t * v8 = (int32_t *)(result + 16); // 0x180209757
    int128_t v9 = __asm_movss_31(*v8); // 0x180209757
    int32_t * v10 = (int32_t *)(v7 + 4); // 0x18020975c
    int64_t v11 = __asm_movss(__asm_addss(__asm_subss(v9, *v10), (int32_t)v6)); // 0x180209768
    uint32_t v12 = (int32_t)v5 + 1; // 0x180209772
    int64_t v13; // 0x180209620
    uint32_t v14 = (int32_t)v13 - *(int32_t *)(v7 + 24); // 0x180209793
    int64_t v15; // 0x180209620
    if (v12 < v14) {
        // 0x18020979b
        v15 = __asm_movss(__asm_movss_31(v4));
    } else {
        // 0x1802097a9
        v15 = __asm_movss(__asm_movss_31(v2));
    }
    int32_t v16 = v11; // 0x180209768
    int128_t v17 = __asm_subss(__asm_movss_31(*v8), *v10); // 0x1802097d2
    int32_t v18 = *(int32_t *)(result + 20); // 0x1802097dd
    int128_t v19 = __asm_addss(__asm_addss(v17, v18), (int32_t)v15); // 0x1802097e2
    int32_t v20 = __asm_movss(v19); // 0x1802097e8
    int64_t v21 = __asm_movss(__asm_xorps(v19, v19)); // 0x1802097f9
    int32_t * v22 = (int32_t *)(result3 + 84); // 0x1802097f9
    *v22 = (int32_t)v21;
    int32_t * v23 = (int32_t *)(result3 + 80); // 0x180209806
    __asm_comiss(__asm_movss_31(*v23), (int128_t)v16);
    if (v12 == v14) {
        // 0x180209812
        __asm_comiss(__asm_subss(__asm_movss_31(v20), v16), 0);
    }
    int32_t v24 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(result3 + 76)), v20)); // 0x180209838
    __asm_comiss(__asm_movss_31(v24), g30);
    int64_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v24)))); // 0x18020986a
    *v22 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v25));
    *v23 = (int32_t)__asm_movss(__asm_movss_31(v16));
    // 0x180209932
    return result3;
}

// Address range: 0x180209940 - 0x180209ea3
int64_t function_180209940(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18020994e
    int128_t v2 = __asm_movss_31(*(int32_t *)(v1 + 0x3940)); // 0x180209970
    int32_t v3 = *(int32_t *)&g41;
    int128_t v4 = __asm_mulss(v2, v3); // 0x180209978
    int32_t * v5 = (int32_t *)(v1 + 0x3d90); // 0x180209985
    int64_t v6 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v5), v4))); // 0x180209994
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v5), v3)))); // 0x1802099c4
    int32_t v8 = v7; // 0x1802099c4
    __asm_movss(__asm_movss_31((int32_t)v6));
    int32_t v9 = __asm_movss(__asm_mulss(__asm_movss_31(v8), v3)); // 0x1802099e7
    int64_t * v10 = (int64_t *)(*(int64_t *)(v1 + 0x4078) + 280); // 0x1802099f2
    int64_t v11; // bp-40, 0x180209940
    __asm_rep_movsb_memcpy((char *)&v11, (char *)(v1 + 0x39f0), 16);
    int32_t v12; // 0x180209940
    int128_t v13 = __asm_mulss(__asm_movss_31(v12), *(int32_t *)&g38); // 0x180209a3a
    __asm_movss(v13);
    function_180188880(0, (int64_t)&v11);
    int128_t v14 = __asm_xorps(v13, v13); // 0x180209a5b
    int32_t v15 = __asm_movss(v14); // bp-120, 0x180209a5e
    int128_t v16 = __asm_xorps(v14, v14); // 0x180209a67
    __asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x180209a73
    __asm_movss(v17);
    __asm_movss(__asm_xorps(v17, v17));
    function_180188880(21, (int64_t)&v15);
    int32_t * v18 = (int32_t *)(v1 + 116); // 0x180209ab6
    int64_t v19 = __asm_movss(__asm_movss_31(*v18)); // 0x180209abb
    int32_t * v20 = (int32_t *)(v1 + 120); // 0x180209ac9
    int64_t v21 = __asm_movss(__asm_movss_31(*v20)); // 0x180209ace
    *v18 = (int32_t)__asm_movss(__asm_movss_31(0x3e800000));
    *v20 = (int32_t)__asm_movss(__asm_movss_31(0x3e4ccccd));
    int32_t * v22 = (int32_t *)(a1 + 52); // 0x180209b03
    int64_t v23 = __asm_movss(__asm_subss(__asm_movss_31(*v22), v9)); // 0x180209b0e
    int32_t v24 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 44))); // 0x180209b21
    __asm_comiss(__asm_movss_31(v24), (int128_t)(int32_t)v23);
    int128_t v25 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v24))); // 0x180209b4e
    int32_t v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v25))); // 0x180209b66
    int32_t * v27 = (int32_t *)(a1 + 48); // 0x180209b74
    int64_t v28 = __asm_movss(__asm_movss_31(*v27)); // 0x180209b79
    int32_t v29 = __asm_movss(__asm_movss_31(v26)); // bp-152, 0x180209b88
    int64_t v30 = __asm_movss(__asm_movss_31((int32_t)v28)); // 0x180209b9a
    *v10 = *(int64_t *)&v29;
    int64_t v31 = 0x100000000 * v7 / 0x100000000; // 0x180209bd0
    int64_t v32 = function_1801ef870((int64_t)"##<", 0, v31, 1040, 0x100000000 * v30 / 0x100000000); // 0x180209bde
    int64_t v33 = __asm_movss(__asm_movss_31(*v27)); // 0x180209bff
    int128_t v34 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v26), v8))); // 0x180209c17
    int32_t v35 = __asm_movss(v34); // bp-144, 0x180209c1d
    int64_t v36 = __asm_movss(__asm_movss_31((int32_t)v33)); // 0x180209c2c
    *v10 = *(int64_t *)&v35;
    int32_t v37 = (function_1801ef870((int64_t)"##>", 1, v31, 1040, 0x100000000 * v36 / 0x100000000) & 255) == 0 ? (int32_t)((v32 & 255) != 0) : 1;
    function_180188970(2);
    *v20 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v21));
    *v18 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v19));
    int64_t result = 0; // 0x180209cc5
    int64_t v38; // 0x180209940
    int32_t v39; // 0x180209940
    uint32_t v40; // 0x180209940
    int32_t v41; // 0x180209940
    int32_t v42; // 0x180209940
    int64_t v43; // 0x180209940
    int64_t v44; // 0x180209940
    if (v37 != 0) {
        int64_t v45 = function_1801ebdb0(a1, *(int32_t *)(a1 + 24)); // 0x180209cde
        result = 0;
        if (v45 != 0) {
            // 0x180209cfa
            v43 = *(int64_t *)(a1 + 8);
            int32_t v46 = (v45 - v43) / 44; // 0x180209d36
            int64_t v47; // 0x180209940
            v44 = (int64_t)*(int32_t *)&v47;
            v41 = v37 + v46;
            v39 = v46;
            while (true) {
              lab_0x180209d79:
                // 0x180209d79
                v40 = v39;
                v42 = v41;
                if (v42 < 0) {
                    // 0x180209daa
                    v38 = v40;
                    goto lab_0x180209db2;
                } else {
                    int64_t v48 = v42;
                    v38 = v48;
                    if (v48 < v44) {
                        goto lab_0x180209db2;
                    } else {
                        // 0x180209daa
                        v38 = v40;
                        goto lab_0x180209db2;
                    }
                }
            }
        }
    }
  lab_0x180209e51:;
    int128_t v49 = __asm_addss(__asm_movss_31(v9), *(int32_t *)&g40); // 0x180209e6b
    *v22 = (int32_t)__asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v22), v49)));
    return result;
  lab_0x180209db2:;
    int64_t v50 = 44 * v38 + v43; // 0x180209dc3
    int64_t v51 = v50; // 0x180209deb
    int32_t v52 = v40; // 0x180209deb
    int32_t v53 = v42; // 0x180209deb
    if ((*(int32_t *)(v50 + 4) & 0x200000) != 0) {
        int32_t v54 = v42 + v37; // 0x180209df5
        v51 = v54 > -1 == (int64_t)v54 < v44 ? 0 : v50;
        v52 = v40 + v37;
        v53 = v54;
    }
    // 0x180209e4c
    v41 = v53;
    v39 = v52;
    result = v51;
    if (v51 != 0) {
        // break -> 0x180209e51
        goto lab_0x180209e51;
    }
    goto lab_0x180209d79;
}

// Address range: 0x180209eb0 - 0x18020a1a9
int64_t function_180209eb0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x180209ebe
    int128_t v2 = __asm_movss_31(*(int32_t *)(v1 + 0x3d90)); // 0x180209ee5
    int32_t * v3 = (int32_t *)(v1 + 0x3940); // 0x180209eed
    int64_t v4 = __asm_movss(__asm_addss(v2, *v3)); // 0x180209ef5
    int64_t * v5 = (int64_t *)(*(int64_t *)(v1 + 0x4078) + 280); // 0x180209f00
    int64_t v6 = *v5; // 0x180209f00
    int64_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 48))); // 0x180209f1c
    int32_t * v8 = (int32_t *)(a1 + 44); // 0x180209f2f
    int128_t v9 = __asm_subss(__asm_movss_31(*v8), *v3); // 0x180209f34
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // bp-144, 0x180209f48
    __asm_movss(__asm_movss_31((int32_t)v7));
    *v5 = *(int64_t *)&v10;
    *v8 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v8), (int32_t)v4));
    int64_t v11; // bp-40, 0x180209eb0
    __asm_rep_movsb_memcpy((char *)&v11, (char *)(v1 + 0x39f0), 16);
    int32_t v12; // 0x180209eb0
    int128_t v13 = __asm_mulss(__asm_movss_31(v12), *(int32_t *)&g38); // 0x180209fcf
    __asm_movss(v13);
    function_180188880(0, (int64_t)&v11);
    int128_t v14 = __asm_xorps(v13, v13); // 0x180209ff0
    int32_t v15 = __asm_movss(v14); // bp-120, 0x180209ff3
    int128_t v16 = __asm_xorps(v14, v14); // 0x180209ff9
    __asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x18020a002
    __asm_movss(v17);
    int128_t v18 = __asm_xorps(v17, v17); // 0x18020a00b
    __asm_movss(v18);
    function_180188880(21, (int64_t)&v15);
    int64_t v19; // 0x180209eb0
    int64_t v20 = function_1801d48a0((int64_t)"##v", 0, 80, v19); // 0x18020a046
    function_180188970(2);
    int32_t * v21 = NULL; // bp-128, 0x18020a059
    if ((v20 & 255) == 0) {
        // 0x18020a186
        *v5 = v6;
        return (int64_t)v21;
    }
    // 0x18020a083
    int64_t v22; // 0x180209eb0
    uint32_t v23 = *(int32_t *)&v22; // 0x18020a08b
    if (v23 != 0) {
        // 0x18020a097
        int32_t v24; // bp-136, 0x180209eb0
        int64_t v25 = &v24;
        int32_t v26 = 0; // 0x18020a07d
        int128_t v27 = v18;
        int64_t v28 = *(int64_t *)(a1 + 8); // 0x18020a0b8
        int128_t v29 = v27; // 0x18020a0e0
        int64_t v30; // 0x18020a0f1
        int128_t v31; // 0x18020a0fe
        int128_t v32; // 0x18020a107
        int32_t v33; // 0x18020a13a
        int32_t v34; // 0x18020a13c
        if ((*(int32_t *)(v28 + 4) & 0x200000) == 0) {
            // 0x18020a0e4
            v30 = function_1801ebf20(a1, v28);
            v31 = __asm_xorps(v27, v27);
            v24 = __asm_movss(v31);
            v32 = __asm_xorps(v31, v31);
            __asm_movss(v32);
            v33 = *(int32_t *)v28;
            v34 = *(int32_t *)(a1 + 24);
            v29 = v32;
            if ((function_1801e0ec0((int64_t *)v30, (int32_t)(v34 == v33), 0, v25) & 255) != 0) {
                // 0x18020a171
                *(int64_t *)&v21 = v28;
                v29 = v32;
            }
        }
        // 0x18020a079
        v26++;
        int64_t v35 = v26;
        while (v35 < (int64_t)v23) {
            // 0x18020a097
            v27 = v29;
            v28 = *(int64_t *)(a1 + 8) + 44 * v35;
            v29 = v27;
            if ((*(int32_t *)(v28 + 4) & 0x200000) == 0) {
                // 0x18020a0e4
                v30 = function_1801ebf20(a1, v28);
                v31 = __asm_xorps(v27, v27);
                v24 = __asm_movss(v31);
                v32 = __asm_xorps(v31, v31);
                __asm_movss(v32);
                v33 = *(int32_t *)v28;
                v34 = *(int32_t *)(a1 + 24);
                v29 = v32;
                if ((function_1801e0ec0((int64_t *)v30, (int32_t)(v34 == v33), 0, v25) & 255) != 0) {
                    // 0x18020a171
                    *(int64_t *)&v21 = v28;
                    v29 = v32;
                }
            }
            // 0x18020a079
            v26++;
            v35 = v26;
        }
    }
    // 0x18020a180
    function_1801d54f0();
    // 0x18020a186
    *v5 = v6;
    return (int64_t)v21;
}

// Address range: 0x18020a1b0 - 0x18020a2a8
int64_t function_18020a1b0(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x18020a1d7
    int32_t v2 = (v1 & 64) == 0 ? (char)v1 > -1 ? 1 : 2 : 0;
    int32_t v3 = *(int32_t *)(a2 + 4); // 0x18020a228
    int32_t v4 = (v3 & 64) == 0 ? (char)v3 > -1 ? 1 : 2 : 0;
    int64_t result; // 0x18020a1b0
    if (v2 == v4) {
        int16_t v5 = *(int16_t *)(a1 + 38); // 0x18020a294
        int16_t v6 = *(int16_t *)(a2 + 38); // 0x18020a29d
        result = (int64_t)v5 - (int64_t)v6 & 0xffffffff;
    } else {
        // 0x18020a281
        result = v2 - v4;
    }
    // 0x18020a2a3
    return result;
}

// Address range: 0x18020a2b0 - 0x18020a2e9
int64_t function_18020a2b0(int64_t a1, int64_t a2) {
    int16_t v1 = *(int16_t *)(a2 + 36); // 0x18020a2de
    return (int64_t)*(int16_t *)(a1 + 36) - (int64_t)v1 & 0xffffffff;
}

// Address range: 0x18020a2f0 - 0x18020a372
int64_t function_18020a2f0(int64_t a1) {
    int64_t result = a1; // 0x18020a30e
    if (a1 == 0) {
        int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4f08); // 0x18020a34d
        result = 160 * (int64_t)*(int32_t *)8 + v1;
    }
    // 0x18020a369
    return result;
}

// Address range: 0x18020a380 - 0x18020a472
int64_t function_18020a380(int64_t * a1, uint64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = (int64_t)g1201; // 0x18020a38e
    uint64_t v2 = *(int64_t *)(v1 + 0x4f08); // 0x18020a3af
    if (v2 > a2 || 160 * (int64_t)*(int32_t *)(v1 + 0x4f00) + v2 <= a2) {
        // 0x18020a3e3
        *a1 = a2;
        *(int32_t *)(result + 8) = -1;
        // 0x18020a46d
        return result;
    }
    // 0x18020a3fe
    *a1 = 0;
    *(int32_t *)(result + 8) = (int32_t)((a2 - v2) / 160);
    // 0x18020a46d
    return result;
}

// Address range: 0x18020a480 - 0x18020a4fa
int64_t function_18020a480(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int128_t v2 = __asm_subss(__asm_movss_31(*(int32_t *)(a1 + 52)), *(int32_t *)(a1 + 44)); // 0x18020a4ab
    int128_t v3 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(v2)), *(int32_t *)(v1 + 4)); // 0x18020a4c7
    __asm_subss(__asm_subss(v3, *(int32_t *)(v1 + 28)), *(int32_t *)(v1 + 20));
    return 12;
}

// Address range: 0x18020a500 - 0x18020a617
int64_t function_18020a500(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a3;
    int64_t v2; // 0x18020a500
    int32_t v3 = (int32_t)v2 & a3; // 0x18020a51e
    int32_t v4 = v3 == a3; // bp-40, 0x18020a53d
    int64_t v5; // 0x18020a500
    int64_t v6; // 0x18020a500
    if (v3 == 0 || v3 == a3) {
        int64_t v7 = function_1801d1c80((char *)a1, (int64_t)&v4, v1, v6); // 0x18020a5c4
        v5 = v7;
    } else {
        int32_t * v8 = (int32_t *)((int64_t)g1201 + 0x4a0c); // 0x18020a590
        *v8 = *v8 | 0x1000;
        int64_t v9 = function_1801d1c80((char *)a1, (int64_t)&v4, v1, v6); // 0x18020a5af
        v5 = v9;
    }
    int64_t result = v5 & 255;
    if (result == 0) {
        // 0x18020a60d
        return result;
    }
    // 0x18020a5d6
    int64_t v10; // 0x18020a500
    if ((v4 & 255) == 0) {
        // 0x18020a5f5
        *(int32_t *)a2 = *(int32_t *)&v10 & -1 - a3;
    } else {
        // 0x18020a5df
        *(int32_t *)a2 = *(int32_t *)&v10 | a3;
    }
    // 0x18020a60d
    return result;
}

// Address range: 0x18020a620 - 0x18020a749
int64_t function_18020a620(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & a2; // 0x18020a640
    int32_t v2 = v1 == a3; // bp-40, 0x18020a661
    int64_t v3; // 0x18020a620
    int64_t v4; // 0x18020a620
    int64_t v5; // 0x18020a620
    if (v1 == 0 || v1 == a3) {
        int64_t v6 = &v2; // 0x18020a6e2
        int64_t v7 = function_1801d1c80((char *)a1, v6, a3, v5); // 0x18020a6ec
        v3 = v6;
        v4 = v7;
    } else {
        int32_t * v8 = (int32_t *)((int64_t)g1201 + 0x4a0c); // 0x18020a6b8
        *v8 = *v8 | 0x1000;
        int64_t v9 = &v2; // 0x18020a6cd
        int64_t v10 = function_1801d1c80((char *)a1, v9, a3, v5); // 0x18020a6d7
        v3 = v9;
        v4 = v10;
    }
    int64_t result = v4 & 255;
    if (result == 0) {
        // 0x18020a73f
        return result;
    }
    // 0x18020a6fe
    if ((v2 & 255) == 0) {
        // 0x18020a721
        *(int64_t *)a2 = v3 & -1 - a3;
    } else {
        // 0x18020a707
        *(int64_t *)a2 = v3 | a3;
    }
    // 0x18020a73f
    return result;
}

// Address range: 0x18020a750 - 0x18020b0d0
int64_t function_18020a750(int64_t a1, int32_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1;
    int128_t v3; // 0x18020a750
    int64_t v4 = __asm_movss(v3); // 0x18020a755
    int32_t * v5; // bp-152, 0x18020a750
    *(int64_t *)&v5 = (int64_t)g1201;
    int32_t v6 = a1; // 0x18020a820
    int32_t v7 = v6 - 8; // 0x18020a820
    bool v8 = (llvm_ctpop_i8((char)v7) & 1) == 0; // 0x18020a828
    bool v9; // 0x18020a750
    int32_t v10; // 0x18020a750
    bool v11; // 0x18020a750
    if (v7 == 0) {
        goto lab_0x18020a83b;
    } else {
        int32_t v12 = v6 - 9; // 0x18020a82a
        char v13 = llvm_ctpop_i8((char)v12); // 0x18020a82a
        v8 = (v13 & 1) == 0;
        v9 = (v13 & 1) == 0;
        v11 = true;
        v10 = 0;
        if (v12 == 0) {
            goto lab_0x18020a83b;
        } else {
            goto lab_0x18020a840;
        }
    }
  lab_0x18020a83b:
    // 0x18020a83b
    v9 = v8;
    v11 = false;
    v10 = 1;
    goto lab_0x18020a840;
  lab_0x18020a840:;
    // 0x18020a840
    int64_t v14; // 0x18020a750
    uint32_t v15 = (int32_t)v14; // 0x18020a750
    int32_t v16 = v4; // 0x18020a755
    uint32_t v17; // 0x18020a750
    int64_t v18 = v17; // 0x18020a7aa
    int64_t v19 = 0x100000000 * v14 / 0x100000000; // 0x18020a7b8
    int128_t v20 = __asm_movss_31(v16); // 0x18020a849
    int32_t v21 = *(int32_t *)&g30; // 0x18020a852
    __asm_ucomiss(v20, v21);
    int128_t v22 = v20; // 0x18020a859
    int32_t v23 = v16; // 0x18020a859
    if (v19 < v18 && !v9 && !v11) {
        int32_t v24 = v17 - v15; // 0x18020a874
        int128_t v25 = __asm_cvtsi2ss(v24); // 0x18020a878
        __asm_comiss(__asm_movss_31(0x7f7fffff), v25);
        v22 = v25;
        v23 = v16;
        if (v17 >= v15 && v24 != 0) {
            int128_t v26 = __asm_cvtsi2ss(v24); // 0x18020a89b
            int128_t v27 = __asm_mulss(v26, *(int32_t *)((int64_t)v5 + 0x5fdc)); // 0x18020a8a4
            int64_t v28 = __asm_movss(v27); // 0x18020a8ac
            v22 = v27;
            v23 = v28;
        }
    }
    int32_t v29 = v1;
    int128_t v30 = v22;
    int64_t v31 = __asm_movss(__asm_xorps(v30, v30)); // 0x18020a8b8
    int32_t v32; // 0x18020a750
    int32_t v33; // 0x18020a750
    int32_t v34; // 0x18020a750
    int32_t v35; // 0x18020a750
    if (*(int32_t *)((int64_t)v5 + 0x4110) != 1) {
        goto lab_0x18020a994;
    } else {
        // 0x18020a8d0
        if ((function_18018ece0(0) & 255) == 0) {
            goto lab_0x18020a994;
        } else {
            int128_t v36 = __asm_movss_31(*(int32_t *)((int64_t)v5 + 112)); // 0x18020a8e7
            __asm_movaps(__asm_mulss(v36, *(int32_t *)&g38));
            if ((function_1801a4480(0) & 255) == 0) {
                goto lab_0x18020a994;
            } else {
                int32_t v37 = *(int32_t *)((4 * (int64_t)((v35 & 0x100000) != 0) | 256) + (int64_t)v5); // 0x18020a93d
                int32_t v38 = __asm_movss(__asm_movss_31(v37)); // 0x18020a941
                int64_t v39 = (int64_t)v5;
                int64_t v40 = v39; // 0x18020a955
                int32_t v41 = v38; // 0x18020a955
                if (*(char *)(v39 + 302) != 0) {
                    int128_t v42 = __asm_mulss(__asm_movss_31(v38), *(int32_t *)&g32); // 0x18020a95d
                    v40 = (int64_t)v5;
                    v41 = __asm_movss(v42);
                }
                // 0x18020a96b
                v32 = v29;
                v34 = v41;
                v33 = v23;
                if (*(char *)(v40 + 301) != 0) {
                    int128_t v43 = __asm_mulss(__asm_movss_31(v41), 0x41200000); // 0x18020a981
                    v32 = v29;
                    v34 = __asm_movss(v43);
                    v33 = v23;
                }
                goto lab_0x18020ab27;
            }
        }
    }
  lab_0x18020a994:;
    int64_t v44 = (int64_t)v5;
    int32_t v45 = *(int32_t *)(v44 + 0x4110); // 0x18020a999
    v32 = v29;
    v34 = v31;
    v33 = v23;
    int64_t v46; // 0x18020a750
    if (v45 != 2 != v45 != 3) {
        int64_t v47 = v44; // 0x18020a9bb
        int32_t v48 = v29; // 0x18020a9bb
        int64_t v49 = v1; // 0x18020a9bb
        int32_t v50 = 0; // 0x18020a9bb
        if (v10 != 0) {
            // 0x18020a9bd
            v2 = 3;
            v47 = (int64_t)v5;
            v48 = 3;
            v49 = 3;
            v50 = function_1801e5e60(v46, 3);
        }
        int32_t v51 = *(int32_t *)(v47 + 0x4bf0); // 0x18020a9ed
        int64_t v52 = function_18018e690(v51 != 3 ? 0x1000 : 641, v49); // 0x18020aa0c
        int32_t v53 = *(int32_t *)((int64_t)v5 + 0x4bf0); // 0x18020aa1a
        int64_t v54 = function_18018e690(v53 != 3 ? 0x2000 : 642, v49); // 0x18020aa39
        int64_t v55; // 0x18020a750
        if ((v52 & 255) == 0) {
            int64_t v56; // 0x18020a750
            if ((v54 & 255) == 0) {
                // 0x18020aa74
                v56 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            } else {
                // 0x18020aa64
                v56 = __asm_movss(__asm_movss_31(0x41200000));
            }
            // 0x18020aa82
            v55 = __asm_movss(__asm_movss_31((int32_t)v56));
        } else {
            // 0x18020aa4b
            v55 = __asm_movss(__asm_movss_31(*(int32_t *)&g35));
        }
        int128_t v57 = __asm_movss_31((int32_t)v55); // 0x18020aa8e
        int64_t v58 = __asm_movss(v57); // 0x18020aa94
        function_1801a4610((int32_t)((v35 & 0x100000) != 0));
        int128_t v59 = __asm_mulss(v57, (int32_t)v58); // 0x18020aaa6
        int64_t v60 = __asm_movss(v59); // 0x18020aaaf
        function_180202320(v50);
        __asm_comiss(__asm_movss_31(v23), (int128_t)(int32_t)__asm_movss(v59));
        int128_t v61 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v23))); // 0x18020ab03
        int128_t v62 = __asm_movss_31((int32_t)__asm_movss(v61)); // 0x18020ab15
        v32 = v48;
        v34 = v60;
        v33 = __asm_movss(v62);
    }
    goto lab_0x18020ab27;
  lab_0x18020ab27:;
    int128_t v63 = __asm_mulss(__asm_movss_31(v34), v33); // 0x18020ab2d
    int32_t v64 = __asm_movss(v63); // 0x18020ab36
    int32_t v65 = v64; // 0x18020ab41
    int128_t v66 = v63; // 0x18020ab41
    if ((v35 & 0x100000) != 0) {
        int128_t v67 = __asm_xorps(__asm_movss_31(v64), g48); // 0x18020ab49
        v65 = __asm_movss(v67);
        v66 = v67;
    }
    int128_t v68 = v65;
    int128_t v69 = v68; // 0x18020ab5d
    int128_t v70 = v66; // 0x18020ab5d
    if ((v35 & 32) != 0) {
        int32_t v71 = v17 - v15; // 0x18020ab6d
        int128_t v72 = __asm_cvtsi2ss(v71); // 0x18020ab71
        __asm_comiss(__asm_movss_31(0x7f7fffff), v72);
        v69 = v68;
        v70 = v72;
        if (v17 >= v15 && v71 != 0) {
            // 0x18020aba1
            __asm_comiss(__asm_cvtsi2ss(v71), g242);
            int128_t v73 = __asm_movaps(__asm_divss(__asm_movss_31(v65), __asm_cvtsi2ss(v71))); // 0x18020abc1
            v69 = __asm_movss(v73);
            v70 = v73;
        }
    }
    bool v74 = v19 >= v18 | (v35 & 256) == 0;
    int32_t v75 = v21; // 0x18020abe1
    int128_t v76 = v70; // 0x18020abe1
    int32_t v77; // 0x18020a750
    int128_t v78; // 0x18020abff
    int64_t v79; // 0x18020abfd
    int128_t v80; // 0x18020a750
    if (v19 < v18 == v74) {
        // 0x18020abec
        v79 = v32;
        v77 = v21;
        v78 = v70;
        if (v79 < v18) {
            goto lab_0x18020ac0e;
        } else {
            // 0x18020abff
            v78 = __asm_movss_31((int32_t)v69);
            __asm_comiss(v78, g30);
            v77 = g30;
            v80 = v78;
            if (v32 > v17) {
                goto lab_0x18020ac52;
            } else {
                goto lab_0x18020ac0e;
            }
        }
    } else {
        goto lab_0x18020ac37;
    }
  lab_0x18020ac37:
    // 0x18020ac37
    v80 = v76;
    int128_t v81; // 0x18020a750
    if (*(char *)((int64_t)v5 + 0x40f0) == 0) {
        int32_t v82 = v69; // 0x18020ac70
        __asm_ucomiss(__asm_movss_31(v82), v75);
        int32_t v83 = *(int32_t *)((int64_t)v5 + 0x5fd8); // 0x18020ac86
        int128_t v84 = __asm_addss(__asm_movss_31(v83), v82); // 0x18020ac8e
        int64_t v85 = __asm_movss(v84); // 0x18020ac99
        *(int32_t *)((int64_t)v5 + 0x5fd8) = (int32_t)v85;
        *(char *)((int64_t)v5 + 0x5fd5) = 1;
        v81 = v84;
        goto lab_0x18020acad;
    } else {
        goto lab_0x18020ac52;
    }
  lab_0x18020ac0e:;
    int128_t v86 = v78;
    v75 = v77;
    v76 = v86;
    if ((v14 & 0xffffffff) < v79) {
        goto lab_0x18020ac37;
    } else {
        int128_t v87 = __asm_xorps(v86, v86); // 0x18020ac21
        __asm_comiss(v87, v69);
        v75 = v77;
        v76 = v87;
        v80 = v87;
        if (v32 > v15) {
            goto lab_0x18020ac52;
        } else {
            goto lab_0x18020ac37;
        }
    }
  lab_0x18020ac52:;
    int128_t v88 = v80;
    int128_t v89 = __asm_xorps(v88, v88); // 0x18020ac57
    int64_t v90 = __asm_movss(v89); // 0x18020ac5a
    *(int32_t *)((int64_t)v5 + 0x5fd8) = (int32_t)v90;
    *(char *)((int64_t)v5 + 0x5fd5) = 0;
    v81 = v89;
    goto lab_0x18020acad;
  lab_0x18020acad:
    // 0x18020acad
    if (*(char *)((int64_t)v5 + 0x5fd5) == 0) {
        // 0x18020b0c8
        return 0;
    }
    int128_t v91 = v81;
    int32_t v92 = *(int32_t *)&v2; // 0x18020accc
    int128_t v93 = __asm_xorps(v91, v91); // 0x18020acd2
    int64_t v94 = __asm_movss(v93); // 0x18020acd5
    int128_t v95 = __asm_xorps(v93, v93); // 0x18020acde
    int64_t v96 = __asm_movss(v95); // 0x18020ace1
    int128_t v97 = __asm_xorps(v95, v95); // 0x18020ace7
    __asm_movss(v97);
    int32_t v98; // 0x18020a750
    int32_t v99; // 0x18020a750
    int64_t v100; // 0x18020a750
    int128_t v101; // 0x18020a750
    if ((v35 & 32) == 0) {
        int32_t v102 = *(int32_t *)((int64_t)v5 + 0x5fd8); // 0x18020ae34
        v99 = __asm_cvttss2si_39(v102) + v92;
        v100 = v94;
        v98 = v96;
        v101 = v97;
    } else {
        int32_t v103 = 1; // 0x18020ad07
        if (v10 != 0) {
            // 0x18020ad09
            v103 = function_1801e5e60(v46, 3);
        }
        int128_t v104 = __asm_movaps(__asm_cvtsi2ss(v103)); // 0x18020ad46
        int128_t v105 = __asm_movss_31(*(int32_t *)&g35); // 0x18020ad49
        function_180272490(v105, v104);
        int128_t v106 = __asm_movss_31((int32_t)__asm_movss(v105)); // 0x18020ad5f
        int32_t v107 = __asm_movss(v106); // 0x18020ad68
        __asm_movss(__asm_xorps(v106, v106));
        int128_t v108 = __asm_movss_31(v107); // 0x18020ad77
        int64_t v109 = __asm_movss(v108); // 0x18020ad7d
        function_18020e9a0(v6, v92, v15, v17, (int64_t)((v35 & 32) != 0), 0x100000000 * v109 / 0x100000000, (int64_t)&g1381);
        int32_t v110 = __asm_movss(v108); // 0x18020adac
        int128_t v111 = __asm_movss_31(v110); // 0x18020adba
        int128_t v112 = __asm_addss(v111, *(int32_t *)((int64_t)v5 + 0x5fd8)); // 0x18020adc3
        int64_t v113 = __asm_movss(v112); // 0x18020adcb
        __asm_movss(__asm_xorps(v112, v112));
        __asm_movss(__asm_movss_31(v107));
        __asm_movss_31((int32_t)v113);
        int64_t v114 = function_180211a80(v6); // 0x18020ae12
        int128_t v115 = __asm_movss_31(v110); // 0x18020ae1b
        v99 = v114;
        v100 = __asm_movss(v115);
        v98 = v107;
        v101 = v115;
    }
    int128_t v116 = v101;
    int32_t v117 = v99; // 0x18020ae4f
    if (v10 != 0) {
        // 0x18020ae51
        v117 = v99;
        if ((v35 & 64) == 0) {
            // 0x18020ae5f
            v117 = function_18020e2f0(v46, v6, v99);
        }
    }
    int32_t v118 = v117;
    *(char *)((int64_t)v5 + 0x5fd5) = 0;
    int128_t v119; // 0x18020a750
    if ((v35 & 32) == 0) {
        int128_t v120 = __asm_cvtsi2ss(v118 - *(int32_t *)&v2); // 0x18020af1f
        int32_t v121 = *(int32_t *)((int64_t)v5 + 0x5fd8); // 0x18020af28
        int128_t v122 = __asm_movaps(__asm_subss_36(__asm_movss_31(v121), v120)); // 0x18020af34
        int64_t v123 = __asm_movss(v122); // 0x18020af3c
        *(int32_t *)((int64_t)v5 + 0x5fd8) = (int32_t)v123;
        v119 = v122;
    } else {
        // 0x18020ae91
        __asm_movss(__asm_xorps(v116, v116));
        int128_t v124 = __asm_movss_31(v98); // 0x18020ae9a
        int64_t v125 = __asm_movss(v124); // 0x18020aea0
        function_18020e9a0(v6, v118, v15, v17, (int64_t)((v35 & 32) != 0), 0x100000000 * v125 / 0x100000000, (int64_t)&g1381);
        int64_t v126 = __asm_movss(v124); // 0x18020aecf
        int128_t v127 = __asm_subss(__asm_movss_31((int32_t)v126), (int32_t)v100); // 0x18020aee1
        int32_t v128 = *(int32_t *)((int64_t)v5 + 0x5fd8); // 0x18020aeef
        int128_t v129 = __asm_movaps(__asm_subss_36(__asm_movss_31(v128), v127)); // 0x18020aefb
        int64_t v130 = __asm_movss(v129); // 0x18020af03
        *(int32_t *)((int64_t)v5 + 0x5fd8) = (int32_t)v130;
        v119 = v129;
    }
    int32_t v131 = v118 != 0 ? v118 : 0;
    uint32_t v132 = *(int32_t *)&v2; // 0x18020af5f
    int32_t v133 = v131; // 0x18020af61
    int64_t v134; // 0x18020a750
    int32_t v135; // 0x18020a750
    if (v19 >= v18 || v132 == v131) {
        goto lab_0x18020b0a4;
    } else {
        int64_t v136 = v131;
        if (v74) {
            if ((v14 & 0xffffffff) > v136) {
                // 0x18020b059
                v134 = v19;
                v135 = v15;
                goto lab_0x18020b064;
            } else {
                // 0x18020b036
                v134 = v136;
                v135 = v131;
                if (v136 > (int64_t)v132) {
                    int128_t v137 = v119;
                    __asm_comiss(__asm_xorps(v137, v137), v69);
                    v134 = v136;
                    v135 = v131;
                    if (v10 != 0 || v131 < v132) {
                        goto lab_0x18020b064;
                    } else {
                        // 0x18020b059
                        v134 = v19;
                        v135 = v15;
                        goto lab_0x18020b064;
                    }
                } else {
                    goto lab_0x18020b064;
                }
            }
        } else {
            int64_t v138 = v136; // 0x18020af8c
            int32_t v139 = v131; // 0x18020af8c
            if ((v14 & 0xffffffff) > v136) {
                // 0x18020af8e
                v139 = v17 - v15 + (int32_t)(v10 == 0) + v131;
                v138 = v139;
            }
            // 0x18020afd4
            v133 = v139;
            if (v138 > v18) {
                // 0x18020afe1
                v133 = v15 - v17 + (int32_t)(v10 == 0) + v139;
            }
            goto lab_0x18020b0a4;
        }
    }
  lab_0x18020b0a4:;
    // 0x18020b0a4
    int64_t result; // 0x18020a750
    if (v132 != v133) {
        // 0x18020b0b8
        *a2 = v133;
        result = v1 & -256 | 1;
    } else {
        // 0x18020b0b4
        result = v1 & -256;
    }
    // 0x18020b0c8
    return result;
  lab_0x18020b064:
    // 0x18020b064
    if (v134 > v18) {
        goto lab_0x18020b0a4;
    } else {
        // 0x18020b071
        v133 = v135;
        if (v134 < (int64_t)v132) {
            // 0x18020b081
            __asm_comiss(__asm_movss_31((int32_t)v69), g30);
            v133 = v135;
            if (v10 != 0 || v135 <= v132) {
                goto lab_0x18020b0a4;
            } else {
                goto lab_0x18020b0a4;
            }
        } else {
            goto lab_0x18020b0a4;
        }
    }
}

// Address range: 0x18020b0d0 - 0x18020ba5f
int64_t function_18020b0d0(int64_t a1, int32_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1;
    int128_t v3; // 0x18020b0d0
    int64_t v4 = __asm_movss(v3); // 0x18020b0d5
    int32_t * v5; // bp-152, 0x18020b0d0
    *(int64_t *)&v5 = (int64_t)g1201;
    int32_t v6 = a1; // 0x18020b1a0
    int32_t v7 = v6 - 8; // 0x18020b1a0
    bool v8 = (llvm_ctpop_i8((char)v7) & 1) == 0; // 0x18020b1a8
    bool v9; // 0x18020b0d0
    int32_t v10; // 0x18020b0d0
    bool v11; // 0x18020b0d0
    if (v7 == 0) {
        goto lab_0x18020b1bb;
    } else {
        int32_t v12 = v6 - 9; // 0x18020b1aa
        char v13 = llvm_ctpop_i8((char)v12); // 0x18020b1aa
        v8 = (v13 & 1) == 0;
        v9 = (v13 & 1) == 0;
        v11 = true;
        v10 = 0;
        if (v12 == 0) {
            goto lab_0x18020b1bb;
        } else {
            goto lab_0x18020b1c0;
        }
    }
  lab_0x18020b1bb:
    // 0x18020b1bb
    v9 = v8;
    v11 = false;
    v10 = 1;
    goto lab_0x18020b1c0;
  lab_0x18020b1c0:;
    // 0x18020b1c0
    int64_t v14; // 0x18020b0d0
    uint32_t v15 = (int32_t)v14; // 0x18020b0d0
    int32_t v16 = v4; // 0x18020b0d5
    int128_t v17 = __asm_movss_31(v16); // 0x18020b1c9
    int32_t v18 = *(int32_t *)&g30; // 0x18020b1d2
    __asm_ucomiss(v17, v18);
    int128_t v19 = v17; // 0x18020b1d9
    int32_t v20 = v16; // 0x18020b1d9
    uint32_t v21; // 0x18020b0d0
    if (v21 > v15 && !v9 && !v11) {
        uint32_t v22 = v21 - v15; // 0x18020b1f4
        int64_t v23 = v22; // 0x18020b1f8
        int128_t v24 = __asm_cvtsi2ss_37(v23); // 0x18020b1fa
        __asm_comiss(__asm_movss_31(0x7f7fffff), v24);
        v19 = v24;
        v20 = v16;
        if (v21 >= v15 && v22 != 0) {
            int128_t v25 = __asm_cvtsi2ss_37(v23); // 0x18020b220
            int128_t v26 = __asm_mulss(v25, *(int32_t *)((int64_t)v5 + 0x5fdc)); // 0x18020b22a
            int64_t v27 = __asm_movss(v26); // 0x18020b232
            v19 = v26;
            v20 = v27;
        }
    }
    int32_t v28 = v1;
    int128_t v29 = v19;
    int64_t v30 = __asm_movss(__asm_xorps(v29, v29)); // 0x18020b23e
    int32_t v31; // 0x18020b0d0
    int32_t v32; // 0x18020b0d0
    int32_t v33; // 0x18020b0d0
    int32_t v34; // 0x18020b0d0
    if (*(int32_t *)((int64_t)v5 + 0x4110) != 1) {
        goto lab_0x18020b31a;
    } else {
        // 0x18020b256
        if ((function_18018ece0(0) & 255) == 0) {
            goto lab_0x18020b31a;
        } else {
            int128_t v35 = __asm_movss_31(*(int32_t *)((int64_t)v5 + 112)); // 0x18020b26d
            __asm_movaps(__asm_mulss(v35, *(int32_t *)&g38));
            if ((function_1801a4480(0) & 255) == 0) {
                goto lab_0x18020b31a;
            } else {
                int32_t v36 = *(int32_t *)((4 * (int64_t)((v34 & 0x100000) != 0) | 256) + (int64_t)v5); // 0x18020b2c3
                int32_t v37 = __asm_movss(__asm_movss_31(v36)); // 0x18020b2c7
                int64_t v38 = (int64_t)v5;
                if (*(char *)(v38 + 302) != 0) {
                    int128_t v39 = __asm_movss_31(v37); // 0x18020b2dd
                    int32_t v40 = *(int32_t *)&g32; // 0x18020b2e3
                    int128_t v41 = __asm_mulss(v39, v40); // 0x18020b2e3
                    int32_t v42 = __asm_movss(v41); // 0x18020b2eb
                }
                // 0x18020b2f1
                v31 = v28;
                v33 = v37;
                v32 = v20;
                if (*(char *)(v38 + 301) != 0) {
                    int128_t v43 = __asm_mulss(__asm_movss_31(v37), 0x41200000); // 0x18020b307
                    v31 = v28;
                    v33 = __asm_movss(v43);
                    v32 = v20;
                }
                goto lab_0x18020b4ad;
            }
        }
    }
  lab_0x18020b31a:;
    int64_t v44 = (int64_t)v5;
    int32_t v45 = *(int32_t *)(v44 + 0x4110); // 0x18020b31f
    v31 = v28;
    v33 = v30;
    v32 = v20;
    int64_t v46; // 0x18020b0d0
    if (v45 != 2 != v45 != 3) {
        int64_t v47 = v44; // 0x18020b341
        int32_t v48 = v28; // 0x18020b341
        int64_t v49 = v1; // 0x18020b341
        int32_t v50 = 0; // 0x18020b341
        if (v10 != 0) {
            // 0x18020b343
            v2 = 3;
            v47 = (int64_t)v5;
            v48 = 3;
            v49 = 3;
            v50 = function_1801e5e60(v46, 3);
        }
        int32_t v51 = *(int32_t *)(v47 + 0x4bf0); // 0x18020b373
        int64_t v52 = function_18018e690(v51 != 3 ? 0x1000 : 641, v49); // 0x18020b392
        int32_t v53 = *(int32_t *)((int64_t)v5 + 0x4bf0); // 0x18020b3a0
        int64_t v54 = function_18018e690(v53 != 3 ? 0x2000 : 642, v49); // 0x18020b3bf
        int64_t v55; // 0x18020b0d0
        if ((v52 & 255) == 0) {
            int64_t v56; // 0x18020b0d0
            if ((v54 & 255) == 0) {
                // 0x18020b3fa
                v56 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            } else {
                // 0x18020b3ea
                v56 = __asm_movss(__asm_movss_31(0x41200000));
            }
            // 0x18020b408
            v55 = __asm_movss(__asm_movss_31((int32_t)v56));
        } else {
            // 0x18020b3d1
            v55 = __asm_movss(__asm_movss_31(*(int32_t *)&g35));
        }
        int128_t v57 = __asm_movss_31((int32_t)v55); // 0x18020b414
        int64_t v58 = __asm_movss(v57); // 0x18020b41a
        function_1801a4610((int32_t)((v34 & 0x100000) != 0));
        int128_t v59 = __asm_mulss(v57, (int32_t)v58); // 0x18020b42c
        int64_t v60 = __asm_movss(v59); // 0x18020b435
        function_180202320(v50);
        __asm_comiss(__asm_movss_31(v20), (int128_t)(int32_t)__asm_movss(v59));
        int128_t v61 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v20))); // 0x18020b489
        int128_t v62 = __asm_movss_31((int32_t)__asm_movss(v61)); // 0x18020b49b
        v31 = v48;
        v33 = v60;
        v32 = __asm_movss(v62);
    }
    goto lab_0x18020b4ad;
  lab_0x18020b4ad:;
    int128_t v63 = __asm_mulss(__asm_movss_31(v33), v32); // 0x18020b4b3
    int32_t v64 = __asm_movss(v63); // 0x18020b4bc
    int32_t v65 = v64; // 0x18020b4c7
    int128_t v66 = v63; // 0x18020b4c7
    if ((v34 & 0x100000) != 0) {
        int128_t v67 = __asm_xorps(__asm_movss_31(v64), g48); // 0x18020b4cf
        v65 = __asm_movss(v67);
        v66 = v67;
    }
    int128_t v68 = v65;
    int128_t v69 = v68; // 0x18020b4e3
    int128_t v70 = v66; // 0x18020b4e3
    if ((v34 & 32) != 0) {
        uint32_t v71 = v21 - v15; // 0x18020b4f3
        int64_t v72 = v71; // 0x18020b4f7
        int128_t v73 = __asm_cvtsi2ss_37(v72); // 0x18020b4f9
        __asm_comiss(__asm_movss_31(0x7f7fffff), v73);
        v69 = v68;
        v70 = v73;
        if (v21 >= v15 && v71 != 0) {
            // 0x18020b52d
            __asm_comiss(__asm_cvtsi2ss_37(v72), g242);
            int128_t v74 = __asm_movaps(__asm_divss(__asm_movss_31(v65), __asm_cvtsi2ss_37(v72))); // 0x18020b550
            v69 = __asm_movss(v74);
            v70 = v74;
        }
    }
    bool v75 = v21 <= v15 | (v34 & 256) == 0;
    int32_t v76 = v18; // 0x18020b570
    int128_t v77 = v70; // 0x18020b570
    int32_t v78; // 0x18020b0d0
    int128_t v79; // 0x18020b58e
    int128_t v80; // 0x18020b0d0
    if (v21 > v15 == v75) {
        // 0x18020b57b
        v78 = v18;
        v79 = v70;
        if (v31 < v21) {
            goto lab_0x18020b59d;
        } else {
            // 0x18020b58e
            v79 = __asm_movss_31((int32_t)v69);
            __asm_comiss(v79, g30);
            v78 = g30;
            v80 = v79;
            if (v31 > v21) {
                goto lab_0x18020b5e1;
            } else {
                goto lab_0x18020b59d;
            }
        }
    } else {
        goto lab_0x18020b5c6;
    }
  lab_0x18020b5c6:
    // 0x18020b5c6
    v80 = v77;
    int128_t v81; // 0x18020b0d0
    if (*(char *)((int64_t)v5 + 0x40f0) == 0) {
        int32_t v82 = v69; // 0x18020b5ff
        __asm_ucomiss(__asm_movss_31(v82), v76);
        int32_t v83 = *(int32_t *)((int64_t)v5 + 0x5fd8); // 0x18020b615
        int128_t v84 = __asm_addss(__asm_movss_31(v83), v82); // 0x18020b61d
        int64_t v85 = __asm_movss(v84); // 0x18020b628
        *(int32_t *)((int64_t)v5 + 0x5fd8) = (int32_t)v85;
        *(char *)((int64_t)v5 + 0x5fd5) = 1;
        v81 = v84;
        goto lab_0x18020b63c;
    } else {
        goto lab_0x18020b5e1;
    }
  lab_0x18020b59d:;
    int128_t v86 = v79;
    v76 = v78;
    v77 = v86;
    if (v31 <= v15) {
        int128_t v87 = __asm_xorps(v86, v86); // 0x18020b5b0
        __asm_comiss(v87, v69);
        v76 = v78;
        v77 = v87;
    }
    goto lab_0x18020b5c6;
  lab_0x18020b5e1:;
    int128_t v88 = v80;
    int128_t v89 = __asm_xorps(v88, v88); // 0x18020b5e6
    int64_t v90 = __asm_movss(v89); // 0x18020b5e9
    *(int32_t *)((int64_t)v5 + 0x5fd8) = (int32_t)v90;
    *(char *)((int64_t)v5 + 0x5fd5) = 0;
    v81 = v89;
    goto lab_0x18020b63c;
  lab_0x18020b63c:
    // 0x18020b63c
    if (*(char *)((int64_t)v5 + 0x5fd5) == 0) {
        // 0x18020ba57
        return 0;
    }
    int128_t v91 = v81;
    int32_t v92 = *(int32_t *)&v2; // 0x18020b65b
    int128_t v93 = __asm_xorps(v91, v91); // 0x18020b661
    int64_t v94 = __asm_movss(v93); // 0x18020b664
    int128_t v95 = __asm_xorps(v93, v93); // 0x18020b66d
    int64_t v96 = __asm_movss(v95); // 0x18020b670
    int128_t v97 = __asm_xorps(v95, v95); // 0x18020b676
    __asm_movss(v97);
    int32_t v98; // 0x18020b0d0
    int32_t v99; // 0x18020b0d0
    int64_t v100; // 0x18020b0d0
    int128_t v101; // 0x18020b0d0
    if ((v34 & 32) == 0) {
        int32_t v102 = *(int32_t *)((int64_t)v5 + 0x5fd8); // 0x18020b7c3
        v99 = __asm_cvttss2si_39(v102) + v92;
        v100 = v94;
        v98 = v96;
        v101 = v97;
    } else {
        int32_t v103 = 1; // 0x18020b696
        if (v10 != 0) {
            // 0x18020b698
            v103 = function_1801e5e60(v46, 3);
        }
        int128_t v104 = __asm_movaps(__asm_cvtsi2ss(v103)); // 0x18020b6d5
        int128_t v105 = __asm_movss_31(*(int32_t *)&g35); // 0x18020b6d8
        function_180272490(v105, v104);
        int128_t v106 = __asm_movss_31((int32_t)__asm_movss(v105)); // 0x18020b6ee
        int32_t v107 = __asm_movss(v106); // 0x18020b6f7
        __asm_movss(__asm_xorps(v106, v106));
        int128_t v108 = __asm_movss_31(v107); // 0x18020b706
        int64_t v109 = __asm_movss(v108); // 0x18020b70c
        function_18020f0e0(v6, v92, v15, v21, (int64_t)((v34 & 32) != 0), 0x100000000 * v109 / 0x100000000, (int64_t)&g1381);
        int32_t v110 = __asm_movss(v108); // 0x18020b73b
        int128_t v111 = __asm_movss_31(v110); // 0x18020b749
        int128_t v112 = __asm_addss(v111, *(int32_t *)((int64_t)v5 + 0x5fd8)); // 0x18020b752
        int64_t v113 = __asm_movss(v112); // 0x18020b75a
        __asm_movss(__asm_xorps(v112, v112));
        __asm_movss(__asm_movss_31(v107));
        __asm_movss_31((int32_t)v113);
        int64_t v114 = function_180212140(v6); // 0x18020b7a1
        int128_t v115 = __asm_movss_31(v110); // 0x18020b7aa
        v99 = v114;
        v100 = __asm_movss(v115);
        v98 = v107;
        v101 = v115;
    }
    int128_t v116 = v101;
    int32_t v117 = v99; // 0x18020b7de
    if (v10 != 0) {
        // 0x18020b7e0
        v117 = v99;
        if ((v34 & 64) == 0) {
            // 0x18020b7ee
            v117 = function_18020e400(v46, v6, v99);
        }
    }
    int32_t v118 = v117;
    *(char *)((int64_t)v5 + 0x5fd5) = 0;
    int128_t v119; // 0x18020b0d0
    if ((v34 & 32) == 0) {
        int128_t v120 = __asm_cvtsi2ss(v118 - *(int32_t *)&v2); // 0x18020b8ae
        int32_t v121 = *(int32_t *)((int64_t)v5 + 0x5fd8); // 0x18020b8b7
        int128_t v122 = __asm_movaps(__asm_subss_36(__asm_movss_31(v121), v120)); // 0x18020b8c3
        int64_t v123 = __asm_movss(v122); // 0x18020b8cb
        *(int32_t *)((int64_t)v5 + 0x5fd8) = (int32_t)v123;
        v119 = v122;
    } else {
        // 0x18020b820
        __asm_movss(__asm_xorps(v116, v116));
        int128_t v124 = __asm_movss_31(v98); // 0x18020b829
        int64_t v125 = __asm_movss(v124); // 0x18020b82f
        function_18020f0e0(v6, v118, v15, v21, (int64_t)((v34 & 32) != 0), 0x100000000 * v125 / 0x100000000, (int64_t)&g1381);
        int64_t v126 = __asm_movss(v124); // 0x18020b85e
        int128_t v127 = __asm_subss(__asm_movss_31((int32_t)v126), (int32_t)v100); // 0x18020b870
        int32_t v128 = *(int32_t *)((int64_t)v5 + 0x5fd8); // 0x18020b87e
        int128_t v129 = __asm_movaps(__asm_subss_36(__asm_movss_31(v128), v127)); // 0x18020b88a
        int64_t v130 = __asm_movss(v129); // 0x18020b892
        *(int32_t *)((int64_t)v5 + 0x5fd8) = (int32_t)v130;
        v119 = v129;
    }
    int32_t v131 = v118 != 0 ? v118 : 0;
    uint32_t v132 = *(int32_t *)&v2; // 0x18020b8ee
    int32_t v133 = v131; // 0x18020b8f0
    int32_t v134; // 0x18020b0d0
    if (v21 <= v15 || v132 == v131) {
        goto lab_0x18020ba33;
    } else {
        if (v75) {
            if (v131 < v15) {
                // 0x18020b9e8
                v134 = v15;
                goto lab_0x18020b9f3;
            } else {
                // 0x18020b9c5
                v134 = v131;
                if (v131 > v132) {
                    int128_t v135 = v119;
                    __asm_comiss(__asm_xorps(v135, v135), v69);
                    v134 = v118;
                    if (v10 != 0) {
                        goto lab_0x18020b9f3;
                    } else {
                        // 0x18020b9e8
                        v134 = v15;
                        goto lab_0x18020b9f3;
                    }
                } else {
                    goto lab_0x18020b9f3;
                }
            }
        } else {
            int32_t v136 = v131; // 0x18020b91b
            if (v131 < v15) {
                // 0x18020b91d
                v136 = v21 - v15 + (int32_t)(v10 == 0) + v131;
            }
            // 0x18020b963
            v133 = v136;
            if (v136 > v21) {
                // 0x18020b970
                v133 = v15 - v21 + (int32_t)(v10 == 0) + v136;
            }
            goto lab_0x18020ba33;
        }
    }
  lab_0x18020ba33:;
    // 0x18020ba33
    int64_t result; // 0x18020b0d0
    if (v132 != v133) {
        // 0x18020ba47
        *a2 = v133;
        result = v1 & -256 | 1;
    } else {
        // 0x18020ba43
        result = v1 & -256;
    }
    // 0x18020ba57
    return result;
  lab_0x18020b9f3:
    // 0x18020b9f3
    if (v134 > v21) {
        goto lab_0x18020ba33;
    } else {
        // 0x18020ba00
        v133 = v134;
        if (v134 >= v132) {
            goto lab_0x18020ba33;
        } else {
            // 0x18020ba10
            __asm_comiss(__asm_movss_31((int32_t)v69), g30);
            v133 = v134;
            if (v10 != 0 || v134 <= v132) {
                goto lab_0x18020ba33;
            } else {
                goto lab_0x18020ba33;
            }
        }
    }
}

// Address range: 0x18020ba60 - 0x18020c439
int64_t function_18020ba60(int32_t a1, int64_t a2) {
    int64_t v1 = a2;
    int128_t v2; // 0x18020ba60
    int32_t v3 = __asm_movss(v2); // 0x18020ba60
    int128_t v4; // 0x18020ba60
    int64_t v5 = __asm_movss(v4); // 0x18020ba66
    int32_t * v6; // bp-152, 0x18020ba60
    *(int64_t *)&v6 = (int64_t)g1201;
    int128_t v7; // 0x18020ba60
    int32_t v8 = v7; // 0x18020babb
    __asm_comiss(__asm_movss_31(v8), (int128_t)v3);
    int32_t v9 = a1 - 8; // 0x18020bb34
    bool v10 = (llvm_ctpop_i8((char)v9) & 1) == 0; // 0x18020bb3c
    bool v11; // 0x18020ba60
    int32_t v12; // 0x18020ba60
    bool v13; // 0x18020ba60
    if (v9 == 0) {
        goto lab_0x18020bb4f;
    } else {
        int32_t v14 = a1 - 9; // 0x18020bb3e
        char v15 = llvm_ctpop_i8((char)v14); // 0x18020bb3e
        v10 = (v15 & 1) == 0;
        v11 = (v15 & 1) == 0;
        v13 = true;
        v12 = 0;
        if (v14 == 0) {
            goto lab_0x18020bb4f;
        } else {
            goto lab_0x18020bb54;
        }
    }
  lab_0x18020bb4f:
    // 0x18020bb4f
    v11 = v10;
    v13 = false;
    v12 = 1;
    goto lab_0x18020bb54;
  lab_0x18020bb54:;
    int32_t v16 = v5; // 0x18020ba66
    int128_t v17 = __asm_movss_31(v16); // 0x18020bb5d
    int32_t v18 = *(int32_t *)&g30; // 0x18020bb66
    __asm_ucomiss(v17, v18);
    int128_t v19 = v17; // 0x18020bb6d
    int32_t v20 = v16; // 0x18020bb6d
    int32_t v21; // 0x18020ba60
    if ((v21 & 0x100000) != 0 && !v11 && !v13) {
        // 0x18020bb7a
        __asm_comiss(__asm_movss_31(0x7f7fffff), __asm_subss(__asm_movss_31(v8), v3));
        int128_t v22 = __asm_subss(__asm_movss_31(v8), v3); // 0x18020bba2
        int128_t v23 = __asm_mulss(v22, *(int32_t *)((int64_t)v6 + 0x5fdc)); // 0x18020bbb0
        int64_t v24 = __asm_movss(v23); // 0x18020bbb8
        v19 = v23;
        v20 = v24;
    }
    int32_t v25 = a2;
    int128_t v26 = v19;
    int64_t v27 = __asm_movss(__asm_xorps(v26, v26)); // 0x18020bbc4
    int32_t v28; // 0x18020ba60
    int32_t v29; // 0x18020ba60
    int32_t v30; // 0x18020ba60
    if (*(int32_t *)((int64_t)v6 + 0x4110) != 1) {
        goto lab_0x18020bca0;
    } else {
        // 0x18020bbdc
        if ((function_18018ece0(0) & 255) == 0) {
            goto lab_0x18020bca0;
        } else {
            int128_t v31 = __asm_movss_31(*(int32_t *)((int64_t)v6 + 112)); // 0x18020bbf3
            __asm_movaps(__asm_mulss(v31, *(int32_t *)&g38));
            if ((function_1801a4480(0) & 255) == 0) {
                goto lab_0x18020bca0;
            } else {
                int32_t v32 = *(int32_t *)((4 * (int64_t)((v21 & 0x100000) != 0) | 256) + (int64_t)v6); // 0x18020bc49
                int32_t v33 = __asm_movss(__asm_movss_31(v32)); // 0x18020bc4d
                int64_t v34 = (int64_t)v6;
                int64_t v35 = v34; // 0x18020bc61
                int32_t v36 = v33; // 0x18020bc61
                if (*(char *)(v34 + 302) != 0) {
                    int128_t v37 = __asm_mulss(__asm_movss_31(v33), *(int32_t *)&g32); // 0x18020bc69
                    v35 = (int64_t)v6;
                    v36 = __asm_movss(v37);
                }
                // 0x18020bc77
                v28 = v25;
                v30 = v36;
                v29 = v20;
                if (*(char *)(v35 + 301) != 0) {
                    int128_t v38 = __asm_mulss(__asm_movss_31(v36), 0x41200000); // 0x18020bc8d
                    v28 = v25;
                    v30 = __asm_movss(v38);
                    v29 = v20;
                }
                goto lab_0x18020be33;
            }
        }
    }
  lab_0x18020bca0:;
    int64_t v39 = (int64_t)v6;
    int32_t v40 = *(int32_t *)(v39 + 0x4110); // 0x18020bca5
    v28 = v25;
    v30 = v27;
    v29 = v20;
    int64_t v41; // 0x18020ba60
    if (v40 != 2 != v40 != 3) {
        int64_t v42 = v39; // 0x18020bcc7
        int32_t v43 = v25; // 0x18020bcc7
        int64_t v44 = a2; // 0x18020bcc7
        int32_t v45 = 0; // 0x18020bcc7
        if (v12 != 0) {
            // 0x18020bcc9
            v1 = 3;
            v42 = (int64_t)v6;
            v43 = 3;
            v44 = 3;
            v45 = function_1801e5e60(v41, 3);
        }
        int32_t v46 = *(int32_t *)(v42 + 0x4bf0); // 0x18020bcf9
        int64_t v47 = function_18018e690(v46 != 3 ? 0x1000 : 641, v44); // 0x18020bd18
        int32_t v48 = *(int32_t *)((int64_t)v6 + 0x4bf0); // 0x18020bd26
        int64_t v49 = function_18018e690(v48 != 3 ? 0x2000 : 642, v44); // 0x18020bd45
        int64_t v50; // 0x18020ba60
        if ((v47 & 255) == 0) {
            int64_t v51; // 0x18020ba60
            if ((v49 & 255) == 0) {
                // 0x18020bd80
                v51 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            } else {
                // 0x18020bd70
                v51 = __asm_movss(__asm_movss_31(0x41200000));
            }
            // 0x18020bd8e
            v50 = __asm_movss(__asm_movss_31((int32_t)v51));
        } else {
            // 0x18020bd57
            v50 = __asm_movss(__asm_movss_31(*(int32_t *)&g35));
        }
        int128_t v52 = __asm_movss_31((int32_t)v50); // 0x18020bd9a
        int64_t v53 = __asm_movss(v52); // 0x18020bda0
        function_1801a4610((int32_t)((v21 & 0x100000) != 0));
        int128_t v54 = __asm_mulss(v52, (int32_t)v53); // 0x18020bdb2
        int64_t v55 = __asm_movss(v54); // 0x18020bdbb
        function_180202320(v45);
        __asm_comiss(__asm_movss_31(v20), (int128_t)(int32_t)__asm_movss(v54));
        int128_t v56 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v20))); // 0x18020be0f
        int128_t v57 = __asm_movss_31((int32_t)__asm_movss(v56)); // 0x18020be21
        v28 = v43;
        v30 = v55;
        v29 = __asm_movss(v57);
    }
    goto lab_0x18020be33;
  lab_0x18020be33:;
    int128_t v58 = __asm_mulss(__asm_movss_31(v30), v29); // 0x18020be39
    int32_t v59 = __asm_movss(v58); // 0x18020be42
    int32_t v60 = v59; // 0x18020be4d
    int128_t v61 = v58; // 0x18020be4d
    if ((v21 & 0x100000) != 0) {
        int128_t v62 = __asm_xorps(__asm_movss_31(v59), g48); // 0x18020be55
        v60 = __asm_movss(v62);
        v61 = v62;
    }
    int32_t v63 = v60; // 0x18020be69
    int128_t v64 = v61; // 0x18020be69
    if ((v21 & 32) != 0) {
        // 0x18020be6b
        __asm_comiss(__asm_movss_31(0x7f7fffff), __asm_subss(__asm_movss_31(v8), v3));
        __asm_comiss(__asm_subss(__asm_movss_31(v8), v3), g242);
        int128_t v65 = __asm_subss(__asm_movss_31(v8), v3); // 0x18020beae
        int128_t v66 = __asm_movaps(__asm_divss(__asm_movss_31(v60), v65)); // 0x18020bec1
        v63 = __asm_movss(v66);
        v64 = v66;
    }
    int32_t v67 = v18; // 0x18020bee1
    int128_t v68 = v64; // 0x18020bee1
    if ((v21 & 0x100000) != 0 && (v21 & 0x100100) != 0x100100) {
        // 0x18020bf11
        __asm_comiss(__asm_movss_31(v28), 0);
        __asm_comiss(__asm_movss_31(v63), g30);
        int128_t v69 = __asm_movss_31(v3); // 0x18020bf19
        __asm_comiss(v69, *(int128_t *)&v1);
        int128_t v70 = __asm_xorps(v69, v69); // 0x18020bf27
        __asm_comiss(v70, (int128_t)v63);
        v67 = g30;
        v68 = v70;
    }
    // 0x18020bf3d
    if (*(char *)((int64_t)v6 + 0x40f0) == 0) {
        // 0x18020bf76
        __asm_ucomiss(__asm_movss_31(v63), v67);
        int128_t v71 = __asm_movss_31(*(int32_t *)((int64_t)v6 + 0x5fd8)); // 0x18020bf8c
        int64_t v72 = __asm_movss(__asm_addss(v71, v63)); // 0x18020bf9f
        *(int32_t *)((int64_t)v6 + 0x5fd8) = (int32_t)v72;
        *(char *)((int64_t)v6 + 0x5fd5) = 1;
    } else {
        int128_t v73 = v68;
        int64_t v74 = __asm_movss(__asm_xorps(v73, v73)); // 0x18020bf60
        *(int32_t *)((int64_t)v6 + 0x5fd8) = (int32_t)v74;
        *(char *)((int64_t)v6 + 0x5fd5) = 0;
    }
    // 0x18020bfb3
    if (*(char *)((int64_t)v6 + 0x5fd5) == 0) {
        // 0x18020c431
        return 0;
    }
    int128_t v75 = __asm_movss_31(*(int32_t *)&v1); // 0x18020bfd2
    int32_t v76 = __asm_movss(v75); // 0x18020bfd6
    int128_t v77 = __asm_xorps(v75, v75); // 0x18020bfdc
    int64_t v78 = __asm_movss(v77); // 0x18020bfdf
    int128_t v79 = __asm_xorps(v77, v77); // 0x18020bfe8
    int64_t v80 = __asm_movss(v79); // 0x18020bfeb
    __asm_movss(__asm_xorps(v79, v79));
    int32_t v81; // 0x18020ba60
    int64_t v82; // 0x18020ba60
    int64_t v83; // 0x18020ba60
    int128_t v84; // 0x18020ba60
    if ((v21 & 32) == 0) {
        int128_t v85 = __asm_movss_31(v76); // 0x18020c146
        int128_t v86 = __asm_addss(v85, *(int32_t *)((int64_t)v6 + 0x5fd8)); // 0x18020c14c
        v82 = __asm_movss(v86);
        v83 = v78;
        v81 = v80;
        v84 = v86;
    } else {
        int32_t v87 = 1; // 0x18020c011
        if (v12 != 0) {
            // 0x18020c013
            v87 = function_1801e5e60(v41, 3);
        }
        int128_t v88 = __asm_movaps(__asm_cvtsi2ss(v87)); // 0x18020c050
        int128_t v89 = __asm_movss_31(*(int32_t *)&g35); // 0x18020c053
        function_180272490(v89, v88);
        int128_t v90 = __asm_movss_31((int32_t)__asm_movss(v89)); // 0x18020c069
        int32_t v91 = __asm_movss(v90); // 0x18020c072
        __asm_movss(__asm_xorps(v90, v90));
        int128_t v92 = __asm_movss_31(v91); // 0x18020c081
        __asm_movss(v92);
        __asm_movss_31(v8);
        __asm_movss_31(v3);
        __asm_movss_31(v76);
        function_18020f860(a1);
        int32_t v93 = __asm_movss(v92); // 0x18020c0ba
        int128_t v94 = __asm_movss_31(v93); // 0x18020c0c8
        int128_t v95 = __asm_addss(v94, *(int32_t *)((int64_t)v6 + 0x5fd8)); // 0x18020c0d1
        int64_t v96 = __asm_movss(v95); // 0x18020c0d9
        __asm_movss(__asm_xorps(v95, v95));
        int128_t v97 = __asm_movss_31(v91); // 0x18020c0eb
        __asm_movss(v97);
        __asm_movss_31(v8);
        __asm_movss_31(v3);
        __asm_movss_31((int32_t)v96);
        function_180212830(a1);
        int64_t v98 = __asm_movss(v97); // 0x18020c127
        int128_t v99 = __asm_movss_31(v93); // 0x18020c12d
        v82 = v98;
        v83 = __asm_movss(v99);
        v81 = v91;
        v84 = v99;
    }
    int128_t v100 = v84;
    int32_t v101 = v82;
    int128_t v102 = v101;
    int128_t v103 = v102; // 0x18020c161
    if (v12 != 0) {
        // 0x18020c163
        v103 = v102;
        if ((v21 & 64) == 0) {
            // 0x18020c171
            __asm_movss_31(v101);
            function_18020e510(v41, a1);
            v103 = __asm_movss(v100);
        }
    }
    // 0x18020c191
    *(char *)((int64_t)v6 + 0x5fd5) = 0;
    int32_t v104; // 0x18020ba60
    if ((v21 & 32) == 0) {
        int32_t v105 = v103;
        int128_t v106 = __asm_subss(__asm_movss_31(v105), *(int32_t *)&v1); // 0x18020c238
        int32_t v107 = *(int32_t *)((int64_t)v6 + 0x5fd8); // 0x18020c241
        int64_t v108 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v107), v106))); // 0x18020c255
        *(int32_t *)((int64_t)v6 + 0x5fd8) = (int32_t)v108;
        v104 = v105;
    } else {
        // 0x18020c1aa
        __asm_movss(__asm_xorps(v100, v100));
        int128_t v109 = __asm_movss_31(v81); // 0x18020c1b3
        __asm_movss(v109);
        __asm_movss_31(v8);
        __asm_movss_31(v3);
        int32_t v110 = v103;
        __asm_movss_31(v110);
        function_18020f860(a1);
        int64_t v111 = __asm_movss(v109); // 0x18020c1ec
        int128_t v112 = __asm_subss(__asm_movss_31((int32_t)v111), (int32_t)v83); // 0x18020c1fe
        int32_t v113 = *(int32_t *)((int64_t)v6 + 0x5fd8); // 0x18020c20c
        int64_t v114 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v113), v112))); // 0x18020c220
        *(int32_t *)((int64_t)v6 + 0x5fd8) = (int32_t)v114;
        v104 = v110;
    }
    // 0x18020c290
    __asm_ucomiss(__asm_movss_31(v104), v67);
    int32_t v115 = *(int32_t *)&v1; // 0x18020c27f
    __asm_ucomiss(__asm_movss_31(v115), v104);
    int32_t v116 = v115; // 0x18020c297
    int32_t v117 = v104; // 0x18020c297
    if ((v21 & 0x100000) != 0) {
        // 0x18020c29d
        __asm_comiss(__asm_movss_31(v3), v103);
        if ((v21 & 0x100100) != 0x100100) {
            int128_t v118 = __asm_movss_31(v104); // 0x18020c38d
            int128_t v119 = *(int128_t *)&v1; // 0x18020c393
            __asm_comiss(v118, v119);
            __asm_comiss(__asm_movss_31(v104), 0);
            int32_t v120 = v119;
            __asm_comiss(__asm_movss_31(v120), v103);
            v116 = v120;
            v117 = v104;
        } else {
            int128_t v121 = __asm_subss(__asm_movss_31(v8), v3); // 0x18020c2e4
            int128_t v122 = __asm_addss_34(v121, __asm_cvtsi2ss((int32_t)(v12 == 0))); // 0x18020c2f6
            int32_t v123 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v104), v122))); // 0x18020c307
            __asm_comiss(__asm_movss_31(v123), 0);
            v116 = v115;
            v117 = v123;
            if (v12 != 0) {
                int128_t v124 = __asm_addss_34(__asm_subss(__asm_movss_31(v8), v3), __asm_cvtsi2ss(0)); // 0x18020c359
                int128_t v125 = __asm_movaps(__asm_subss_36(__asm_movss_31(v123), v124)); // 0x18020c367
                v116 = v115;
                v117 = __asm_movss(v125);
            }
        }
    }
    // 0x18020c41d
    __asm_ucomiss(__asm_movss_31(v116), v117);
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31(v117));
    // 0x18020c431
    return a2 & -256 | 1;
}

// Address range: 0x18020c440 - 0x18020ce4c
int64_t function_18020c440(uint32_t a1, int64_t a2) {
    int64_t v1 = a2;
    int128_t v2; // 0x18020c440
    int64_t v3 = __asm_movsd_17(v2); // 0x18020c440
    int128_t v4; // 0x18020c440
    int64_t v5 = __asm_movss(v4); // 0x18020c446
    int32_t * v6; // bp-152, 0x18020c440
    *(int64_t *)&v6 = (int64_t)g1201;
    int128_t v7; // 0x18020c440
    int64_t v8 = v7; // 0x18020c49b
    __asm_comisd(__asm_movsd(v8), (int128_t)v3);
    int32_t v9 = a1 - 8; // 0x18020c515
    bool v10 = (llvm_ctpop_i8((char)v9) & 1) == 0; // 0x18020c51d
    bool v11; // 0x18020c440
    int32_t v12; // 0x18020c440
    bool v13; // 0x18020c440
    if (v9 == 0) {
        goto lab_0x18020c530;
    } else {
        int32_t v14 = a1 - 9; // 0x18020c51f
        char v15 = llvm_ctpop_i8((char)v14); // 0x18020c51f
        v10 = (v15 & 1) == 0;
        v11 = (v15 & 1) == 0;
        v13 = true;
        v12 = 0;
        if (v14 == 0) {
            goto lab_0x18020c530;
        } else {
            goto lab_0x18020c535;
        }
    }
  lab_0x18020c530:
    // 0x18020c530
    v11 = v10;
    v13 = false;
    v12 = 1;
    goto lab_0x18020c535;
  lab_0x18020c535:;
    int32_t v16 = v5; // 0x18020c446
    int128_t v17 = __asm_movss_31(v16); // 0x18020c53e
    int32_t v18 = *(int32_t *)&g30; // 0x18020c547
    __asm_ucomiss(v17, v18);
    int128_t v19 = v17; // 0x18020c54e
    int32_t v20 = v16; // 0x18020c54e
    int32_t v21; // 0x18020c440
    if ((v21 & 0x100000) != 0 && !v11 && !v13) {
        // 0x18020c55b
        __asm_comisd(__asm_movsd(0x47efffffe0000000), __asm_subsd(__asm_movsd(v8), v3));
        int128_t v22 = __asm_subsd(__asm_movsd(v8), v3); // 0x18020c584
        int32_t v23 = *(int32_t *)((int64_t)v6 + 0x5fdc); // 0x18020c592
        int128_t v24 = __asm_cvtsd2ss(__asm_mulsd_22(v22, __asm_cvtss2sd(v23))); // 0x18020c59e
        int64_t v25 = __asm_movss(v24); // 0x18020c5a2
        v19 = v24;
        v20 = v25;
    }
    int128_t v26 = v19;
    int64_t v27 = __asm_movss(__asm_xorps(v26, v26)); // 0x18020c5ae
    int64_t v28; // 0x18020c440
    int32_t v29; // 0x18020c440
    int32_t v30; // 0x18020c440
    if (*(int32_t *)((int64_t)v6 + 0x4110) != 1) {
        goto lab_0x18020c68a;
    } else {
        // 0x18020c5c6
        if ((function_18018ece0(0) & 255) == 0) {
            goto lab_0x18020c68a;
        } else {
            int128_t v31 = __asm_movss_31(*(int32_t *)((int64_t)v6 + 112)); // 0x18020c5dd
            __asm_movaps(__asm_mulss(v31, *(int32_t *)&g38));
            if ((function_1801a4480(0) & 255) == 0) {
                goto lab_0x18020c68a;
            } else {
                int32_t v32 = *(int32_t *)((4 * (int64_t)((v21 & 0x100000) != 0) | 256) + (int64_t)v6); // 0x18020c633
                int32_t v33 = __asm_movss(__asm_movss_31(v32)); // 0x18020c637
                int64_t v34 = (int64_t)v6;
                int64_t v35 = v34; // 0x18020c64b
                int32_t v36 = v33; // 0x18020c64b
                if (*(char *)(v34 + 302) != 0) {
                    int128_t v37 = __asm_mulss(__asm_movss_31(v33), *(int32_t *)&g32); // 0x18020c653
                    v35 = (int64_t)v6;
                    v36 = __asm_movss(v37);
                }
                // 0x18020c661
                v28 = a2;
                v30 = v36;
                v29 = v20;
                if (*(char *)(v35 + 301) != 0) {
                    int128_t v38 = __asm_mulss(__asm_movss_31(v36), 0x41200000); // 0x18020c677
                    v28 = a2;
                    v30 = __asm_movss(v38);
                    v29 = v20;
                }
                goto lab_0x18020c826;
            }
        }
    }
  lab_0x18020c68a:;
    int64_t v39 = (int64_t)v6;
    int32_t v40 = *(int32_t *)(v39 + 0x4110); // 0x18020c68f
    v28 = a2;
    v30 = v27;
    v29 = v20;
    int64_t v41; // 0x18020c440
    if (v40 != 2 != v40 != 3) {
        int64_t v42 = v39; // 0x18020c6b1
        int64_t v43 = a2; // 0x18020c6b1
        int32_t v44 = 0; // 0x18020c6b1
        if (v12 != 0) {
            // 0x18020c6b3
            v1 = 3;
            v42 = (int64_t)v6;
            v43 = 3;
            v44 = function_1801e5e60(v41, 3);
        }
        int32_t v45 = *(int32_t *)(v42 + 0x4bf0); // 0x18020c6ec
        int64_t v46 = function_18018e690(v45 != 3 ? 0x1000 : 641, v43); // 0x18020c70b
        int32_t v47 = *(int32_t *)((int64_t)v6 + 0x4bf0); // 0x18020c719
        int64_t v48 = function_18018e690(v47 != 3 ? 0x2000 : 642, v43); // 0x18020c738
        int64_t v49; // 0x18020c440
        if ((v46 & 255) == 0) {
            int64_t v50; // 0x18020c440
            if ((v48 & 255) == 0) {
                // 0x18020c773
                v50 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            } else {
                // 0x18020c763
                v50 = __asm_movss(__asm_movss_31(0x41200000));
            }
            // 0x18020c781
            v49 = __asm_movss(__asm_movss_31((int32_t)v50));
        } else {
            // 0x18020c74a
            v49 = __asm_movss(__asm_movss_31(*(int32_t *)&g35));
        }
        int128_t v51 = __asm_movss_31((int32_t)v49); // 0x18020c78d
        int64_t v52 = __asm_movss(v51); // 0x18020c793
        function_1801a4610((int32_t)((v21 & 0x100000) != 0));
        int128_t v53 = __asm_mulss(v51, (int32_t)v52); // 0x18020c7a5
        int64_t v54 = __asm_movss(v53); // 0x18020c7ae
        function_180202320(v44);
        __asm_comiss(__asm_movss_31(v20), (int128_t)(int32_t)__asm_movss(v53));
        int128_t v55 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v20))); // 0x18020c802
        int128_t v56 = __asm_movss_31((int32_t)__asm_movss(v55)); // 0x18020c814
        v28 = v43;
        v30 = v54;
        v29 = __asm_movss(v56);
    }
    goto lab_0x18020c826;
  lab_0x18020c826:;
    int128_t v57 = __asm_mulss(__asm_movss_31(v30), v29); // 0x18020c82c
    int32_t v58 = __asm_movss(v57); // 0x18020c835
    int32_t v59 = v58; // 0x18020c840
    int128_t v60 = v57; // 0x18020c840
    if ((v21 & 0x100000) != 0) {
        int128_t v61 = __asm_xorps(__asm_movss_31(v58), g48); // 0x18020c848
        v59 = __asm_movss(v61);
        v60 = v61;
    }
    int32_t v62 = v59; // 0x18020c85c
    int128_t v63 = v60; // 0x18020c85c
    if ((v21 & 32) != 0) {
        // 0x18020c85e
        __asm_comisd(__asm_movsd(0x47efffffe0000000), __asm_subsd(__asm_movsd(v8), v3));
        __asm_comisd(__asm_subsd(__asm_movsd(v8), v3), g425);
        int128_t v64 = __asm_cvtsd2ss(__asm_subsd(__asm_movsd(v8), v3)); // 0x18020c8ac
        int128_t v65 = __asm_movaps(__asm_divss(__asm_movss_31(v59), v64)); // 0x18020c8ba
        v62 = __asm_movss(v65);
        v63 = v65;
    }
    int32_t v66 = v18; // 0x18020c8da
    int128_t v67 = v63; // 0x18020c8da
    if ((v21 & 0x100000) != 0 && (v21 & 0x100100) != 0x100100) {
        // 0x18020c90b
        __asm_comisd(__asm_movsd(v28), 0);
        __asm_comiss(__asm_movss_31(v62), g30);
        int128_t v68 = __asm_movsd(v3); // 0x18020c913
        __asm_comisd(v68, *(int128_t *)&v1);
        int128_t v69 = __asm_xorps(v68, v68); // 0x18020c922
        __asm_comiss(v69, (int128_t)v62);
        v66 = g30;
        v67 = v69;
    }
    if (*(char *)((int64_t)v6 + 0x40f0) == 0) {
        // 0x18020c971
        __asm_ucomiss(__asm_movss_31(v62), v66);
        int128_t v70 = __asm_movss_31(*(int32_t *)((int64_t)v6 + 0x5fd8)); // 0x18020c987
        int64_t v71 = __asm_movss(__asm_addss(v70, v62)); // 0x18020c99a
        *(int32_t *)((int64_t)v6 + 0x5fd8) = (int32_t)v71;
        *(char *)((int64_t)v6 + 0x5fd5) = 1;
    } else {
        int128_t v72 = v67;
        int64_t v73 = __asm_movss(__asm_xorps(v72, v72)); // 0x18020c95b
        *(int32_t *)((int64_t)v6 + 0x5fd8) = (int32_t)v73;
        *(char *)((int64_t)v6 + 0x5fd5) = 0;
    }
    // 0x18020c9ae
    if (*(char *)((int64_t)v6 + 0x5fd5) == 0) {
        // 0x18020ce44
        return 0;
    }
    int128_t v74 = __asm_movsd(v1); // 0x18020c9cd
    int64_t v75 = __asm_movsd_17(v74); // 0x18020c9d1
    int128_t v76 = __asm_xorps(v74, v74); // 0x18020c9d7
    int64_t v77 = __asm_movsd_17(v76); // 0x18020c9da
    int128_t v78 = __asm_xorps(v76, v76); // 0x18020c9e3
    int64_t v79 = __asm_movss(v78); // 0x18020c9e6
    __asm_movss(__asm_xorps(v78, v78));
    int32_t v80; // 0x18020c440
    int64_t v81; // 0x18020c440
    int64_t v82; // 0x18020c440
    int128_t v83; // 0x18020c440
    if ((v21 & 32) == 0) {
        int128_t v84 = __asm_cvtss2sd(*(int32_t *)((int64_t)v6 + 0x5fd8)); // 0x18020cb41
        int128_t v85 = __asm_movaps(__asm_addsd_23(__asm_movsd(v75), v84)); // 0x18020cb53
        v81 = __asm_movsd_17(v85);
        v82 = v77;
        v80 = v79;
        v83 = v85;
    } else {
        int32_t v86 = 1; // 0x18020ca0c
        if (v12 != 0) {
            // 0x18020ca0e
            v1 = 3;
            v86 = function_1801e5e60(v41, 3);
        }
        int128_t v87 = __asm_movaps(__asm_cvtsi2ss(v86)); // 0x18020ca4b
        int128_t v88 = __asm_movss_31(*(int32_t *)&g35); // 0x18020ca4e
        function_180272490(v88, v87);
        int128_t v89 = __asm_movss_31((int32_t)__asm_movss(v88)); // 0x18020ca64
        int32_t v90 = __asm_movss(v89); // 0x18020ca6d
        __asm_movss(__asm_xorps(v89, v89));
        int128_t v91 = __asm_movss_31(v90); // 0x18020ca7c
        __asm_movss(v91);
        __asm_movsd(v8);
        __asm_movsd(v3);
        __asm_movsd(v75);
        function_18020ffd0(a1);
        int32_t v92 = __asm_movss(v91); // 0x18020cab5
        int128_t v93 = __asm_movss_31(v92); // 0x18020cac3
        int128_t v94 = __asm_addss(v93, *(int32_t *)((int64_t)v6 + 0x5fd8)); // 0x18020cacc
        int64_t v95 = __asm_movss(v94); // 0x18020cad4
        __asm_movss(__asm_xorps(v94, v94));
        int128_t v96 = __asm_movss_31(v90); // 0x18020cae6
        __asm_movss(v96);
        __asm_movsd(v8);
        __asm_movsd(v3);
        __asm_movss_31((int32_t)v95);
        function_180212ee0(a1);
        int64_t v97 = __asm_movsd_17(v96); // 0x18020cb22
        int128_t v98 = __asm_cvtss2sd(v92); // 0x18020cb28
        v81 = v97;
        v82 = __asm_movsd_17(v98);
        v80 = v90;
        v83 = v98;
    }
    int128_t v99 = v83;
    int128_t v100 = v81;
    int128_t v101 = v100; // 0x18020cb63
    if (v12 != 0) {
        // 0x18020cb65
        v101 = v100;
        if ((v21 & 64) == 0) {
            // 0x18020cb73
            __asm_movsd(v81);
            v1 = a1;
            function_18020e630(v41, a1);
            v101 = __asm_movsd_17(v99);
        }
    }
    // 0x18020cb93
    *(char *)((int64_t)v6 + 0x5fd5) = 0;
    int64_t v102; // 0x18020c440
    if ((v21 & 32) == 0) {
        int64_t v103 = v101;
        int128_t v104 = __asm_cvtsd2ss(__asm_subsd(__asm_movsd(v103), v1)); // 0x18020cc42
        int32_t v105 = *(int32_t *)((int64_t)v6 + 0x5fd8); // 0x18020cc4b
        int64_t v106 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v105), v104))); // 0x18020cc5f
        *(int32_t *)((int64_t)v6 + 0x5fd8) = (int32_t)v106;
        v102 = v103;
    } else {
        // 0x18020cbac
        __asm_movss(__asm_xorps(v99, v99));
        int128_t v107 = __asm_movss_31(v80); // 0x18020cbb5
        __asm_movss(v107);
        __asm_movsd(v8);
        __asm_movsd(v3);
        int64_t v108 = v101;
        __asm_movsd(v108);
        function_18020ffd0(a1);
        int128_t v109 = __asm_cvtss2sd((int32_t)__asm_movss(v107)); // 0x18020cbf7
        int128_t v110 = __asm_cvtsd2ss(__asm_subsd(v109, v82)); // 0x18020cc09
        int32_t v111 = *(int32_t *)((int64_t)v6 + 0x5fd8); // 0x18020cc12
        int64_t v112 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v111), v110))); // 0x18020cc26
        *(int32_t *)((int64_t)v6 + 0x5fd8) = (int32_t)v112;
        v102 = v108;
    }
    // 0x18020cc9c
    __asm_ucomisd(__asm_movsd(v102), (int64_t)g86);
    __asm_ucomisd(__asm_movsd(v1), v102);
    int64_t v113 = v1; // 0x18020cca3
    int64_t v114 = v102; // 0x18020cca3
    if ((v21 & 0x100000) != 0) {
        // 0x18020cca9
        __asm_comisd(__asm_movsd(v3), v101);
        if ((v21 & 0x100100) != 0x100100) {
            int128_t v115 = __asm_movsd(v102); // 0x18020cd9c
            int128_t v116 = *(int128_t *)&v1; // 0x18020cda2
            __asm_comisd(v115, v116);
            __asm_comisd(__asm_movsd(v102), 0);
            int64_t v117 = v116;
            __asm_comisd(__asm_movsd(v117), v101);
            v113 = v117;
            v114 = v102;
        } else {
            int128_t v118 = __asm_subsd(__asm_movsd(v8), v3); // 0x18020ccf1
            int128_t v119 = __asm_addsd_23(v118, __asm_cvtsi2sd_68((int32_t)(v12 == 0))); // 0x18020cd03
            int64_t v120 = __asm_movsd_17(__asm_movaps(__asm_addsd_23(__asm_movsd(v102), v119))); // 0x18020cd14
            __asm_comisd(__asm_movsd(v120), 0);
            v113 = v1;
            v114 = v120;
            if (v12 != 0) {
                int128_t v121 = __asm_addsd_23(__asm_subsd(__asm_movsd(v8), v3), __asm_cvtsi2sd_68(0)); // 0x18020cd67
                v113 = v1;
                v114 = __asm_movsd_17(__asm_movaps(__asm_subsd_21(__asm_movsd(v120), v121)));
            }
        }
    }
    // 0x18020ce30
    __asm_ucomisd(__asm_movsd(v113), v114);
    *(int64_t *)a2 = __asm_movsd_17(__asm_movsd(v114));
    // 0x18020ce44
    return a2 & -256 | 1;
}

// Address range: 0x18020ce50 - 0x18020d840
int64_t function_18020ce50(uint32_t a1, int64_t a2) {
    // 0x18020ce50
    int128_t v1; // 0x18020ce50
    int64_t v2 = __asm_movss(v1); // 0x18020ce55
    int32_t * v3; // bp-152, 0x18020ce50
    *(int64_t *)&v3 = (int64_t)g1201;
    int32_t v4 = a1 - 8; // 0x18020cf22
    bool v5 = (llvm_ctpop_i8((char)v4) & 1) == 0; // 0x18020cf2a
    bool v6; // 0x18020ce50
    int32_t v7; // 0x18020ce50
    bool v8; // 0x18020ce50
    if (v4 == 0) {
        goto lab_0x18020cf3d;
    } else {
        int32_t v9 = a1 - 9; // 0x18020cf2c
        char v10 = llvm_ctpop_i8((char)v9); // 0x18020cf2c
        v5 = (v10 & 1) == 0;
        v6 = (v10 & 1) == 0;
        v8 = true;
        v7 = 0;
        if (v9 == 0) {
            goto lab_0x18020cf3d;
        } else {
            goto lab_0x18020cf42;
        }
    }
  lab_0x18020cf3d:
    // 0x18020cf3d
    v6 = v5;
    v8 = false;
    v7 = 1;
    goto lab_0x18020cf42;
  lab_0x18020cf42:;
    int32_t v11 = v2; // 0x18020ce55
    int128_t v12 = __asm_movss_31(v11); // 0x18020cf4b
    int32_t v13 = *(int32_t *)&g30; // 0x18020cf54
    __asm_ucomiss(v12, v13);
    int128_t v14 = v12; // 0x18020cf5b
    int32_t v15 = v11; // 0x18020cf5b
    int64_t v16; // 0x18020ce50
    int64_t v17; // 0x18020ce50
    if (v17 > v16 && !v6 && !v8) {
        int64_t v18 = v17 - v16; // 0x18020cf78
        int128_t v19 = __asm_cvtsi2ss_37(v18); // 0x18020cf7e
        __asm_comiss(__asm_movss_31(0x7f7fffff), v19);
        v14 = v19;
        v15 = v11;
        if (v17 >= v16 && v18 != 0) {
            int128_t v20 = __asm_cvtsi2ss_37(v18); // 0x18020cfa6
            int128_t v21 = __asm_mulss(v20, *(int32_t *)((int64_t)v3 + 0x5fdc)); // 0x18020cfb0
            int64_t v22 = __asm_movss(v21); // 0x18020cfb8
            v14 = v21;
            v15 = v22;
        }
    }
    int128_t v23 = v14;
    int64_t v24 = __asm_movss(__asm_xorps(v23, v23)); // 0x18020cfc4
    int64_t v25; // 0x18020ce50
    int32_t v26; // 0x18020ce50
    int32_t v27; // 0x18020ce50
    int32_t v28; // 0x18020ce50
    if (*(int32_t *)((int64_t)v3 + 0x4110) != 1) {
        goto lab_0x18020d0a0;
    } else {
        // 0x18020cfdc
        if ((function_18018ece0(0) & 255) == 0) {
            goto lab_0x18020d0a0;
        } else {
            int128_t v29 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 112)); // 0x18020cff3
            __asm_movaps(__asm_mulss(v29, *(int32_t *)&g38));
            if ((function_1801a4480(0) & 255) == 0) {
                goto lab_0x18020d0a0;
            } else {
                int32_t v30 = *(int32_t *)((4 * (int64_t)((v28 & 0x100000) != 0) | 256) + (int64_t)v3); // 0x18020d049
                int32_t v31 = __asm_movss(__asm_movss_31(v30)); // 0x18020d04d
                int64_t v32 = (int64_t)v3;
                int64_t v33 = v32; // 0x18020d061
                int32_t v34 = v31; // 0x18020d061
                if (*(char *)(v32 + 302) != 0) {
                    int128_t v35 = __asm_mulss(__asm_movss_31(v31), *(int32_t *)&g32); // 0x18020d069
                    v33 = (int64_t)v3;
                    v34 = __asm_movss(v35);
                }
                // 0x18020d077
                v27 = v34;
                v26 = v15;
                v25 = a2;
                if (*(char *)(v33 + 301) != 0) {
                    int128_t v36 = __asm_mulss(__asm_movss_31(v34), 0x41200000); // 0x18020d08d
                    v27 = __asm_movss(v36);
                    v26 = v15;
                    v25 = a2;
                }
                goto lab_0x18020d23c;
            }
        }
    }
  lab_0x18020d0a0:;
    int64_t v37 = (int64_t)v3;
    int32_t v38 = *(int32_t *)(v37 + 0x4110); // 0x18020d0a5
    v27 = v24;
    v26 = v15;
    v25 = a2;
    int64_t v39; // 0x18020ce50
    if (v38 != 2 != v38 != 3) {
        int64_t v40 = v37; // 0x18020d0c7
        int64_t v41 = a2; // 0x18020d0c7
        int32_t v42 = 0; // 0x18020d0c7
        if (v7 != 0) {
            // 0x18020d0c9
            v40 = (int64_t)v3;
            v41 = 3;
            v42 = function_1801e5e60(v39, 3);
        }
        int32_t v43 = *(int32_t *)(v40 + 0x4bf0); // 0x18020d102
        int64_t v44 = function_18018e690(v43 != 3 ? 0x1000 : 641, v41); // 0x18020d121
        int32_t v45 = *(int32_t *)((int64_t)v3 + 0x4bf0); // 0x18020d12f
        int64_t v46 = function_18018e690(v45 != 3 ? 0x2000 : 642, v41); // 0x18020d14e
        int64_t v47; // 0x18020ce50
        if ((v44 & 255) == 0) {
            int64_t v48; // 0x18020ce50
            if ((v46 & 255) == 0) {
                // 0x18020d189
                v48 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            } else {
                // 0x18020d179
                v48 = __asm_movss(__asm_movss_31(0x41200000));
            }
            // 0x18020d197
            v47 = __asm_movss(__asm_movss_31((int32_t)v48));
        } else {
            // 0x18020d160
            v47 = __asm_movss(__asm_movss_31(*(int32_t *)&g35));
        }
        int128_t v49 = __asm_movss_31((int32_t)v47); // 0x18020d1a3
        int64_t v50 = __asm_movss(v49); // 0x18020d1a9
        function_1801a4610((int32_t)((v28 & 0x100000) != 0));
        int128_t v51 = __asm_mulss(v49, (int32_t)v50); // 0x18020d1bb
        int64_t v52 = __asm_movss(v51); // 0x18020d1c4
        function_180202320(v42);
        __asm_comiss(__asm_movss_31(v15), (int128_t)(int32_t)__asm_movss(v51));
        int128_t v53 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v15))); // 0x18020d218
        int128_t v54 = __asm_movss_31((int32_t)__asm_movss(v53)); // 0x18020d22a
        v27 = v52;
        v26 = __asm_movss(v54);
        v25 = v41;
    }
    goto lab_0x18020d23c;
  lab_0x18020d23c:;
    int128_t v55 = __asm_mulss(__asm_movss_31(v27), v26); // 0x18020d242
    int32_t v56 = __asm_movss(v55); // 0x18020d24b
    int32_t v57 = v56; // 0x18020d256
    int128_t v58 = v55; // 0x18020d256
    if ((v28 & 0x100000) != 0) {
        int128_t v59 = __asm_xorps(__asm_movss_31(v56), g48); // 0x18020d25e
        v57 = __asm_movss(v59);
        v58 = v59;
    }
    int128_t v60 = v57;
    int128_t v61 = v60; // 0x18020d272
    int128_t v62 = v58; // 0x18020d272
    if ((v28 & 32) != 0) {
        int64_t v63 = v17 - v16; // 0x18020d284
        int128_t v64 = __asm_cvtsi2ss_37(v63); // 0x18020d28a
        __asm_comiss(__asm_movss_31(0x7f7fffff), v64);
        v61 = v60;
        v62 = v64;
        if (v17 >= v16 && v63 != 0) {
            // 0x18020d2c0
            __asm_comiss(__asm_cvtsi2ss_37(v63), g242);
            int128_t v65 = __asm_movaps(__asm_divss(__asm_movss_31(v57), __asm_cvtsi2ss_37(v63))); // 0x18020d2e5
            v61 = __asm_movss(v65);
            v62 = v65;
        }
    }
    bool v66 = v17 <= v16 | (v28 & 256) == 0;
    int32_t v67 = v13; // 0x18020d305
    int128_t v68 = v62; // 0x18020d305
    int32_t v69; // 0x18020ce50
    int128_t v70; // 0x18020d325
    int128_t v71; // 0x18020ce50
    if (v17 > v16 == v66) {
        // 0x18020d310
        v69 = v13;
        v70 = v62;
        if (v25 < v17) {
            goto lab_0x18020d334;
        } else {
            // 0x18020d325
            v70 = __asm_movss_31((int32_t)v61);
            __asm_comiss(v70, g30);
            v69 = g30;
            v71 = v70;
            if (v25 > v17) {
                goto lab_0x18020d37a;
            } else {
                goto lab_0x18020d334;
            }
        }
    } else {
        goto lab_0x18020d35f;
    }
  lab_0x18020d35f:
    // 0x18020d35f
    v71 = v68;
    int128_t v72; // 0x18020ce50
    if (*(char *)((int64_t)v3 + 0x40f0) == 0) {
        int32_t v73 = v61; // 0x18020d398
        __asm_ucomiss(__asm_movss_31(v73), v67);
        int32_t v74 = *(int32_t *)((int64_t)v3 + 0x5fd8); // 0x18020d3ae
        int128_t v75 = __asm_addss(__asm_movss_31(v74), v73); // 0x18020d3b6
        int64_t v76 = __asm_movss(v75); // 0x18020d3c1
        *(int32_t *)((int64_t)v3 + 0x5fd8) = (int32_t)v76;
        *(char *)((int64_t)v3 + 0x5fd5) = 1;
        v72 = v75;
        goto lab_0x18020d3d5;
    } else {
        goto lab_0x18020d37a;
    }
  lab_0x18020d334:;
    int128_t v77 = v70;
    v67 = v69;
    v68 = v77;
    if (v25 > v16) {
        goto lab_0x18020d35f;
    } else {
        int128_t v78 = __asm_xorps(v77, v77); // 0x18020d349
        __asm_comiss(v78, v61);
        v67 = v69;
        v68 = v78;
        v71 = v78;
        if (v25 > v16) {
            goto lab_0x18020d37a;
        } else {
            goto lab_0x18020d35f;
        }
    }
  lab_0x18020d37a:;
    int128_t v79 = v71;
    int128_t v80 = __asm_xorps(v79, v79); // 0x18020d37f
    int64_t v81 = __asm_movss(v80); // 0x18020d382
    *(int32_t *)((int64_t)v3 + 0x5fd8) = (int32_t)v81;
    *(char *)((int64_t)v3 + 0x5fd5) = 0;
    v72 = v80;
    goto lab_0x18020d3d5;
  lab_0x18020d3d5:
    // 0x18020d3d5
    if (*(char *)((int64_t)v3 + 0x5fd5) == 0) {
        // 0x18020d838
        return 0;
    }
    int128_t v82 = v72;
    int128_t v83 = __asm_xorps(v82, v82); // 0x18020d3fc
    int64_t v84 = __asm_movsd_17(v83); // 0x18020d3ff
    int128_t v85 = __asm_xorps(v83, v83); // 0x18020d408
    int64_t v86 = __asm_movss(v85); // 0x18020d40b
    int128_t v87 = __asm_xorps(v85, v85); // 0x18020d411
    __asm_movss(v87);
    int32_t v88; // 0x18020ce50
    int64_t v89; // 0x18020ce50
    int64_t v90; // 0x18020ce50
    int128_t v91; // 0x18020ce50
    if ((v28 & 32) == 0) {
        int32_t v92 = *(int32_t *)((int64_t)v3 + 0x5fd8); // 0x18020d560
        v89 = __asm_cvttss2si_45(v92) + v25;
        v90 = v84;
        v88 = v86;
        v91 = v87;
    } else {
        int32_t v93 = 1; // 0x18020d431
        if (v7 != 0) {
            // 0x18020d433
            v93 = function_1801e5e60(v39, 3);
        }
        int128_t v94 = __asm_movaps(__asm_cvtsi2ss(v93)); // 0x18020d470
        int128_t v95 = __asm_movss_31(*(int32_t *)&g35); // 0x18020d473
        function_180272490(v95, v94);
        int128_t v96 = __asm_movss_31((int32_t)__asm_movss(v95)); // 0x18020d489
        int32_t v97 = __asm_movss(v96); // 0x18020d492
        __asm_movss(__asm_xorps(v96, v96));
        int128_t v98 = __asm_movss_31(v97); // 0x18020d4a1
        int64_t v99 = __asm_movss(v98); // 0x18020d4a7
        function_180210790(a1, v25, v16, v17, (int64_t)((v28 & 32) != 0), 0x100000000 * v99 / 0x100000000, (int64_t)&g1381);
        int32_t v100 = __asm_movss(v98); // 0x18020d4d7
        int128_t v101 = __asm_movss_31(v100); // 0x18020d4e5
        int128_t v102 = __asm_addss(v101, *(int32_t *)((int64_t)v3 + 0x5fd8)); // 0x18020d4ee
        int64_t v103 = __asm_movss(v102); // 0x18020d4f6
        __asm_movss(__asm_xorps(v102, v102));
        __asm_movss(__asm_movss_31(v97));
        __asm_movss_31((int32_t)v103);
        int64_t v104 = function_1802135b0(a1); // 0x18020d53d
        int128_t v105 = __asm_cvtss2sd(v100); // 0x18020d547
        v89 = v104;
        v90 = __asm_movsd_17(v105);
        v88 = v97;
        v91 = v105;
    }
    int128_t v106 = v91;
    int64_t v107 = v89; // 0x18020d580
    int64_t v108 = v25; // 0x18020d580
    if (v7 != 0) {
        // 0x18020d582
        v107 = v89;
        v108 = v25;
        if ((v28 & 64) == 0) {
            // 0x18020d590
            v107 = function_18020e750(v39, a1, v89);
            v108 = a1;
        }
    }
    int64_t v109 = v107;
    *(char *)((int64_t)v3 + 0x5fd5) = 0;
    int64_t v110; // 0x18020ce50
    int128_t v111; // 0x18020ce50
    if ((v28 & 32) == 0) {
        int128_t v112 = __asm_cvtsi2ss_37(v109 - v108); // 0x18020d65e
        int32_t v113 = *(int32_t *)((int64_t)v3 + 0x5fd8); // 0x18020d668
        int128_t v114 = __asm_movaps(__asm_subss_36(__asm_movss_31(v113), v112)); // 0x18020d674
        int64_t v115 = __asm_movss(v114); // 0x18020d67c
        *(int32_t *)((int64_t)v3 + 0x5fd8) = (int32_t)v115;
        v111 = v114;
        v110 = v108;
    } else {
        // 0x18020d5c7
        __asm_movss(__asm_xorps(v106, v106));
        int128_t v116 = __asm_movss_31(v88); // 0x18020d5d0
        int64_t v117 = __asm_movss(v116); // 0x18020d5d6
        function_180210790(a1, v109, v16, v17, (int64_t)((v28 & 32) != 0), 0x100000000 * v117 / 0x100000000, (int64_t)&g1381);
        int128_t v118 = __asm_cvtss2sd((int32_t)__asm_movss(v116)); // 0x18020d60f
        int128_t v119 = __asm_cvtsd2ss(__asm_subsd(v118, v90)); // 0x18020d621
        int32_t v120 = *(int32_t *)((int64_t)v3 + 0x5fd8); // 0x18020d62a
        int128_t v121 = __asm_movaps(__asm_subss_36(__asm_movss_31(v120), v119)); // 0x18020d636
        int64_t v122 = __asm_movss(v121); // 0x18020d63e
        *(int32_t *)((int64_t)v3 + 0x5fd8) = (int32_t)v122;
        v111 = v121;
        v110 = v109;
    }
    int64_t v123 = v109 != 0 ? v109 : 0;
    int64_t v124 = v123; // 0x18020d6a5
    int64_t v125; // 0x18020ce50
    if (v17 <= v16 || v110 == v123) {
        goto lab_0x18020d810;
    } else {
        if (v66) {
            if (v123 < v16) {
                goto lab_0x18020d7ca;
            } else {
                // 0x18020d798
                v125 = v123;
                if (v123 > v110) {
                    int128_t v126 = v111;
                    __asm_comiss(__asm_xorps(v126, v126), v61);
                    v125 = v123;
                    if (v7 != 0 || v123 < v110) {
                        goto lab_0x18020d7ca;
                    } else {
                        goto lab_0x18020d7ca;
                    }
                } else {
                    goto lab_0x18020d7ca;
                }
            }
        } else {
            int64_t v127 = v123; // 0x18020d6d2
            if (v123 < v16) {
                // 0x18020d6d4
                v127 = v17 - v16 + (int64_t)(v7 == 0) + v123;
            }
            // 0x18020d723
            v124 = v127;
            if (v127 > v17) {
                // 0x18020d732
                v124 = v16 - v17 + (int64_t)(v7 == 0) + v127;
            }
            goto lab_0x18020d810;
        }
    }
  lab_0x18020d810:;
    // 0x18020d810
    int64_t result; // 0x18020ce50
    if (v110 != v124) {
        // 0x18020d826
        *(int64_t *)a2 = v124;
        result = a2 & -256 | 1;
    } else {
        // 0x18020d822
        result = a2 & -256;
    }
    // 0x18020d838
    return result;
  lab_0x18020d7ca:
    // 0x18020d7ca
    if (v125 > v17) {
        goto lab_0x18020d810;
    } else {
        // 0x18020d7d9
        v124 = v125;
        if (v125 < v110) {
            // 0x18020d7eb
            __asm_comiss(__asm_movss_31((int32_t)v61), g30);
            v124 = v125;
            if (v7 != 0 || v125 < v110) {
                goto lab_0x18020d810;
            } else {
                goto lab_0x18020d810;
            }
        } else {
            goto lab_0x18020d810;
        }
    }
}

// Address range: 0x18020d840 - 0x18020e2e4
int64_t function_18020d840(uint32_t a1, int64_t a2) {
    // 0x18020d840
    int128_t v1; // 0x18020d840
    int64_t v2 = __asm_movss(v1); // 0x18020d845
    int32_t * v3; // bp-152, 0x18020d840
    *(int64_t *)&v3 = (int64_t)g1201;
    int32_t v4 = a1 - 8; // 0x18020d912
    bool v5 = (llvm_ctpop_i8((char)v4) & 1) == 0; // 0x18020d91a
    bool v6; // 0x18020d840
    int32_t v7; // 0x18020d840
    bool v8; // 0x18020d840
    if (v4 == 0) {
        goto lab_0x18020d92d;
    } else {
        int32_t v9 = a1 - 9; // 0x18020d91c
        char v10 = llvm_ctpop_i8((char)v9); // 0x18020d91c
        v5 = (v10 & 1) == 0;
        v6 = (v10 & 1) == 0;
        v8 = true;
        v7 = 0;
        if (v9 == 0) {
            goto lab_0x18020d92d;
        } else {
            goto lab_0x18020d932;
        }
    }
  lab_0x18020d92d:
    // 0x18020d92d
    v6 = v5;
    v8 = false;
    v7 = 1;
    goto lab_0x18020d932;
  lab_0x18020d932:;
    int32_t v11 = v2; // 0x18020d845
    int128_t v12 = __asm_movss_31(v11); // 0x18020d93b
    int32_t v13 = *(int32_t *)&g30; // 0x18020d944
    __asm_ucomiss(v12, v13);
    int128_t v14 = v12; // 0x18020d94b
    int32_t v15 = v11; // 0x18020d94b
    uint64_t v16; // 0x18020d840
    uint64_t v17; // 0x18020d840
    if (v17 > v16 && !v6 && !v8) {
        int64_t v18 = v17 - v16; // 0x18020d974
        int128_t v19; // 0x18020d840
        int64_t v20; // 0x18020d840
        if (v18 < 0) {
            int64_t v21 = v18 / 2 | v18 & 1; // 0x18020d990
            int128_t v22 = __asm_cvtsi2ss_37(v21); // 0x18020d993
            v20 = v21;
            v19 = __asm_movaps(__asm_addss_34(v22, v22));
        } else {
            int128_t v23 = __asm_cvtsi2ss_37(v18); // 0x18020d97f
            v20 = v18;
            v19 = v23;
        }
        // 0x18020d99f
        __asm_comiss(__asm_movss_31(0x7f7fffff), v19);
        v14 = v19;
        v15 = v11;
        if (v20 != 0) {
            int128_t v24; // 0x18020d840
            if (v18 < 0) {
                int128_t v25 = __asm_cvtsi2ss_37(v18 / 2 | v18 & 1); // 0x18020d9db
                v24 = __asm_movaps(__asm_addss_34(v25, v25));
            } else {
                // 0x18020d9c7
                v24 = __asm_cvtsi2ss_37(v18);
            }
            int32_t v26 = *(int32_t *)((int64_t)v3 + 0x5fdc); // 0x18020d9ec
            int128_t v27 = __asm_mulss(v24, v26); // 0x18020d9ec
            int64_t v28 = __asm_movss(v27); // 0x18020d9f4
            v14 = v27;
            v15 = v28;
        }
    }
    int128_t v29 = v14;
    int64_t v30 = __asm_movss(__asm_xorps(v29, v29)); // 0x18020da00
    int64_t v31; // 0x18020d840
    int32_t v32; // 0x18020d840
    int32_t v33; // 0x18020d840
    int32_t v34; // 0x18020d840
    if (*(int32_t *)((int64_t)v3 + 0x4110) != 1) {
        goto lab_0x18020dadc;
    } else {
        // 0x18020da18
        if ((function_18018ece0(0) & 255) == 0) {
            goto lab_0x18020dadc;
        } else {
            int128_t v35 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 112)); // 0x18020da2f
            __asm_movaps(__asm_mulss(v35, *(int32_t *)&g38));
            if ((function_1801a4480(0) & 255) == 0) {
                goto lab_0x18020dadc;
            } else {
                int32_t v36 = *(int32_t *)((4 * (int64_t)((v34 & 0x100000) != 0) | 256) + (int64_t)v3); // 0x18020da85
                int32_t v37 = __asm_movss(__asm_movss_31(v36)); // 0x18020da89
                int64_t v38 = (int64_t)v3;
                if (*(char *)(v38 + 302) != 0) {
                    int128_t v39 = __asm_movss_31(v37); // 0x18020da9f
                    int32_t v40 = *(int32_t *)&g32; // 0x18020daa5
                    int128_t v41 = __asm_mulss(v39, v40); // 0x18020daa5
                    int32_t v42 = __asm_movss(v41); // 0x18020daad
                }
                // 0x18020dab3
                v33 = v37;
                v32 = v15;
                v31 = a2;
                if (*(char *)(v38 + 301) != 0) {
                    // 0x18020dac3
                    v33 = __asm_movss(__asm_mulss(__asm_movss_31(v37), 0x41200000));
                    v32 = v15;
                    v31 = a2;
                }
                goto lab_0x18020dc78;
            }
        }
    }
  lab_0x18020dadc:;
    int64_t v43 = (int64_t)v3;
    int32_t v44 = *(int32_t *)(v43 + 0x4110); // 0x18020dae1
    v33 = v30;
    v32 = v15;
    v31 = a2;
    int64_t v45; // 0x18020d840
    if (v44 != 2 != v44 != 3) {
        int64_t v46 = v43; // 0x18020db03
        int64_t v47 = a2; // 0x18020db03
        int32_t v48 = 0; // 0x18020db03
        if (v7 != 0) {
            // 0x18020db05
            v46 = (int64_t)v3;
            v47 = 3;
            v48 = function_1801e5e60(v45, 3);
        }
        int32_t v49 = *(int32_t *)(v46 + 0x4bf0); // 0x18020db3e
        int64_t v50 = function_18018e690(v49 != 3 ? 0x1000 : 641, v47); // 0x18020db5d
        int32_t v51 = *(int32_t *)((int64_t)v3 + 0x4bf0); // 0x18020db6b
        int64_t v52 = function_18018e690(v51 != 3 ? 0x2000 : 642, v47); // 0x18020db8a
        int64_t v53; // 0x18020d840
        if ((v50 & 255) == 0) {
            int64_t v54; // 0x18020d840
            if ((v52 & 255) == 0) {
                // 0x18020dbc5
                v54 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            } else {
                // 0x18020dbb5
                v54 = __asm_movss(__asm_movss_31(0x41200000));
            }
            // 0x18020dbd3
            v53 = __asm_movss(__asm_movss_31((int32_t)v54));
        } else {
            // 0x18020db9c
            v53 = __asm_movss(__asm_movss_31(*(int32_t *)&g35));
        }
        int128_t v55 = __asm_movss_31((int32_t)v53); // 0x18020dbdf
        int64_t v56 = __asm_movss(v55); // 0x18020dbe5
        function_1801a4610((int32_t)((v34 & 0x100000) != 0));
        int128_t v57 = __asm_mulss(v55, (int32_t)v56); // 0x18020dbf7
        int64_t v58 = __asm_movss(v57); // 0x18020dc00
        function_180202320(v48);
        __asm_comiss(__asm_movss_31(v15), (int128_t)(int32_t)__asm_movss(v57));
        int128_t v59 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v15))); // 0x18020dc54
        int128_t v60 = __asm_movss_31((int32_t)__asm_movss(v59)); // 0x18020dc66
        v33 = v58;
        v32 = __asm_movss(v60);
        v31 = v47;
    }
    goto lab_0x18020dc78;
  lab_0x18020dc78:;
    int128_t v61 = __asm_mulss(__asm_movss_31(v33), v32); // 0x18020dc7e
    int32_t v62 = __asm_movss(v61); // 0x18020dc87
    int32_t v63 = v62; // 0x18020dc92
    int128_t v64 = v61; // 0x18020dc92
    if ((v34 & 0x100000) != 0) {
        int128_t v65 = __asm_xorps(__asm_movss_31(v62), g48); // 0x18020dc9a
        v63 = __asm_movss(v65);
        v64 = v65;
    }
    int128_t v66 = v63;
    int128_t v67 = v66; // 0x18020dcae
    int128_t v68 = v64; // 0x18020dcae
    int128_t v69; // 0x18020d840
    if ((v34 & 32) == 0) {
        goto lab_0x18020dd92;
    } else {
        int64_t v70 = v17 - v16; // 0x18020dcc4
        int128_t v71; // 0x18020d840
        int64_t v72; // 0x18020d840
        if (v70 < 0) {
            int64_t v73 = v70 / 2 | v70 & 1; // 0x18020dce0
            int128_t v74 = __asm_cvtsi2ss_37(v73); // 0x18020dce3
            v72 = v73;
            v71 = __asm_movaps(__asm_addss_34(v74, v74));
        } else {
            int128_t v75 = __asm_cvtsi2ss_37(v70); // 0x18020dccf
            v72 = v70;
            v71 = v75;
        }
        // 0x18020dcef
        __asm_comiss(__asm_movss_31(0x7f7fffff), v71);
        v67 = v66;
        v68 = v71;
        if (v72 == 0) {
            goto lab_0x18020dd92;
        } else {
            if (v70 < 0) {
                int64_t v76 = v70 / 2 | v70 & 1;
                int128_t v77 = __asm_cvtsi2ss_37(v76); // 0x18020dd2f
                __asm_comiss(__asm_movaps(__asm_addss_34(v77, v77)), g242);
                int128_t v78 = __asm_cvtsi2ss_37(v76); // 0x18020dd73
                v69 = __asm_movaps(__asm_addss_34(v78, v78));
                goto lab_0x18020dd7f;
            } else {
                int128_t v79 = __asm_cvtsi2ss_37(v70); // 0x18020dd1b
                __asm_comiss(v79, g242);
                v67 = v66;
                v68 = v79;
                if (v70 == 0) {
                    goto lab_0x18020dd92;
                } else {
                    // 0x18020dd5f
                    v69 = __asm_cvtsi2ss_37(v70);
                    goto lab_0x18020dd7f;
                }
            }
        }
    }
  lab_0x18020dd92:;
    bool v80 = v17 <= v16 | (v34 & 256) == 0;
    int32_t v81 = v13; // 0x18020dda9
    int128_t v82 = v68; // 0x18020dda9
    int32_t v83; // 0x18020d840
    int128_t v84; // 0x18020ddc9
    int128_t v85; // 0x18020d840
    if (v17 > v16 == v80) {
        // 0x18020ddb4
        v83 = v13;
        v84 = v68;
        if (v31 < v17) {
            goto lab_0x18020ddd8;
        } else {
            // 0x18020ddc9
            v84 = __asm_movss_31((int32_t)v67);
            __asm_comiss(v84, g30);
            v83 = g30;
            v85 = v84;
            if (v31 > v17) {
                goto lab_0x18020de1e;
            } else {
                goto lab_0x18020ddd8;
            }
        }
    } else {
        goto lab_0x18020de03;
    }
  lab_0x18020de03:
    // 0x18020de03
    v85 = v82;
    int128_t v86; // 0x18020d840
    if (*(char *)((int64_t)v3 + 0x40f0) == 0) {
        int32_t v87 = v67; // 0x18020de3c
        __asm_ucomiss(__asm_movss_31(v87), v81);
        int32_t v88 = *(int32_t *)((int64_t)v3 + 0x5fd8); // 0x18020de52
        int128_t v89 = __asm_addss(__asm_movss_31(v88), v87); // 0x18020de5a
        int64_t v90 = __asm_movss(v89); // 0x18020de65
        *(int32_t *)((int64_t)v3 + 0x5fd8) = (int32_t)v90;
        *(char *)((int64_t)v3 + 0x5fd5) = 1;
        v86 = v89;
        goto lab_0x18020de79;
    } else {
        goto lab_0x18020de1e;
    }
  lab_0x18020ddd8:;
    int128_t v91 = v84;
    v81 = v83;
    v82 = v91;
    if (v31 <= v16) {
        int128_t v92 = __asm_xorps(v91, v91); // 0x18020dded
        __asm_comiss(v92, v67);
        v81 = v83;
        v82 = v92;
    }
    goto lab_0x18020de03;
  lab_0x18020de1e:;
    int128_t v93 = v85;
    int128_t v94 = __asm_xorps(v93, v93); // 0x18020de23
    int64_t v95 = __asm_movss(v94); // 0x18020de26
    *(int32_t *)((int64_t)v3 + 0x5fd8) = (int32_t)v95;
    *(char *)((int64_t)v3 + 0x5fd5) = 0;
    v86 = v94;
    goto lab_0x18020de79;
  lab_0x18020de79:
    // 0x18020de79
    if (*(char *)((int64_t)v3 + 0x5fd5) == 0) {
        // 0x18020e2dc
        return 0;
    }
    int128_t v96 = v86;
    int128_t v97 = __asm_xorps(v96, v96); // 0x18020dea0
    int64_t v98 = __asm_movsd_17(v97); // 0x18020dea3
    int128_t v99 = __asm_xorps(v97, v97); // 0x18020deac
    int64_t v100 = __asm_movss(v99); // 0x18020deaf
    int128_t v101 = __asm_xorps(v99, v99); // 0x18020deb5
    __asm_movss(v101);
    int32_t v102; // 0x18020d840
    int64_t v103; // 0x18020d840
    int64_t v104; // 0x18020d840
    int128_t v105; // 0x18020d840
    if ((v34 & 32) == 0) {
        int32_t v106 = *(int32_t *)((int64_t)v3 + 0x5fd8); // 0x18020e004
        v103 = __asm_cvttss2si_45(v106) + v31;
        v104 = v98;
        v102 = v100;
        v105 = v101;
    } else {
        int32_t v107 = 1; // 0x18020ded5
        if (v7 != 0) {
            // 0x18020ded7
            v107 = function_1801e5e60(v45, 3);
        }
        int128_t v108 = __asm_movaps(__asm_cvtsi2ss(v107)); // 0x18020df14
        int128_t v109 = __asm_movss_31(*(int32_t *)&g35); // 0x18020df17
        function_180272490(v109, v108);
        int128_t v110 = __asm_movss_31((int32_t)__asm_movss(v109)); // 0x18020df2d
        int32_t v111 = __asm_movss(v110); // 0x18020df36
        __asm_movss(__asm_xorps(v110, v110));
        int128_t v112 = __asm_movss_31(v111); // 0x18020df45
        int64_t v113 = __asm_movss(v112); // 0x18020df4b
        function_180210f60(a1, v31, v16, v17, (int64_t)((v34 & 32) != 0), 0x100000000 * v113 / 0x100000000, (int64_t)&g1381);
        int32_t v114 = __asm_movss(v112); // 0x18020df7b
        int128_t v115 = __asm_movss_31(v114); // 0x18020df89
        int128_t v116 = __asm_addss(v115, *(int32_t *)((int64_t)v3 + 0x5fd8)); // 0x18020df92
        int64_t v117 = __asm_movss(v116); // 0x18020df9a
        __asm_movss(__asm_xorps(v116, v116));
        __asm_movss(__asm_movss_31(v111));
        __asm_movss_31((int32_t)v117);
        int64_t v118 = function_180213cb0(a1); // 0x18020dfe1
        int128_t v119 = __asm_cvtss2sd(v114); // 0x18020dfeb
        v103 = v118;
        v104 = __asm_movsd_17(v119);
        v102 = v111;
        v105 = v119;
    }
    int128_t v120 = v105;
    int64_t v121 = v103; // 0x18020e024
    int64_t v122 = v31; // 0x18020e024
    if (v7 != 0) {
        // 0x18020e026
        v121 = v103;
        v122 = v31;
        if ((v34 & 64) == 0) {
            // 0x18020e034
            v121 = function_18020e860(v45, a1, v103);
            v122 = a1;
        }
    }
    int64_t v123 = v121;
    *(char *)((int64_t)v3 + 0x5fd5) = 0;
    int64_t v124; // 0x18020d840
    int128_t v125; // 0x18020d840
    if ((v34 & 32) == 0) {
        int128_t v126 = __asm_cvtsi2ss_37(v123 - v122); // 0x18020e102
        int32_t v127 = *(int32_t *)((int64_t)v3 + 0x5fd8); // 0x18020e10c
        int128_t v128 = __asm_movaps(__asm_subss_36(__asm_movss_31(v127), v126)); // 0x18020e118
        int64_t v129 = __asm_movss(v128); // 0x18020e120
        *(int32_t *)((int64_t)v3 + 0x5fd8) = (int32_t)v129;
        v125 = v128;
        v124 = v122;
    } else {
        // 0x18020e06b
        __asm_movss(__asm_xorps(v120, v120));
        int128_t v130 = __asm_movss_31(v102); // 0x18020e074
        int64_t v131 = __asm_movss(v130); // 0x18020e07a
        function_180210f60(a1, v123, v16, v17, (int64_t)((v34 & 32) != 0), 0x100000000 * v131 / 0x100000000, (int64_t)&g1381);
        int128_t v132 = __asm_cvtss2sd((int32_t)__asm_movss(v130)); // 0x18020e0b3
        int128_t v133 = __asm_cvtsd2ss(__asm_subsd(v132, v104)); // 0x18020e0c5
        int32_t v134 = *(int32_t *)((int64_t)v3 + 0x5fd8); // 0x18020e0ce
        int128_t v135 = __asm_movaps(__asm_subss_36(__asm_movss_31(v134), v133)); // 0x18020e0da
        int64_t v136 = __asm_movss(v135); // 0x18020e0e2
        *(int32_t *)((int64_t)v3 + 0x5fd8) = (int32_t)v136;
        v125 = v135;
        v124 = v123;
    }
    int64_t v137 = v123 != 0 ? v123 : 0;
    int64_t v138 = v137; // 0x18020e149
    int64_t v139; // 0x18020d840
    if (v17 <= v16 || v124 == v137) {
        goto lab_0x18020e2b4;
    } else {
        if (v80) {
            if (v137 < v16) {
                goto lab_0x18020e26e;
            } else {
                // 0x18020e23c
                v139 = v137;
                if (v137 > v124) {
                    int128_t v140 = v125;
                    __asm_comiss(__asm_xorps(v140, v140), v67);
                    v139 = v123;
                    if (v7 != 0) {
                        goto lab_0x18020e26e;
                    } else {
                        goto lab_0x18020e26e;
                    }
                } else {
                    goto lab_0x18020e26e;
                }
            }
        } else {
            int64_t v141 = v137; // 0x18020e176
            if (v137 < v16) {
                // 0x18020e178
                v141 = v17 - v16 + (int64_t)(v7 == 0) + v137;
            }
            // 0x18020e1c7
            v138 = v141;
            if (v141 > v17) {
                // 0x18020e1d6
                v138 = v16 - v17 + (int64_t)(v7 == 0) + v141;
            }
            goto lab_0x18020e2b4;
        }
    }
  lab_0x18020dd7f:;
    int128_t v142 = __asm_movaps(__asm_divss(__asm_movss_31(v63), v69)); // 0x18020dd89
    v67 = __asm_movss(v142);
    v68 = v142;
    goto lab_0x18020dd92;
  lab_0x18020e2b4:;
    // 0x18020e2b4
    int64_t result; // 0x18020d840
    if (v124 != v138) {
        // 0x18020e2ca
        *(int64_t *)a2 = v138;
        result = a2 & -256 | 1;
    } else {
        // 0x18020e2c6
        result = a2 & -256;
    }
    // 0x18020e2dc
    return result;
  lab_0x18020e26e:
    // 0x18020e26e
    if (v139 > v17) {
        goto lab_0x18020e2b4;
    } else {
        // 0x18020e27d
        v138 = v139;
        if (v139 >= v124) {
            goto lab_0x18020e2b4;
        } else {
            // 0x18020e28f
            __asm_comiss(__asm_movss_31((int32_t)v67), g30);
            v138 = v139;
            if (v7 != 0 || v139 <= v124) {
                goto lab_0x18020e2b4;
            } else {
                goto lab_0x18020e2b4;
            }
        }
    }
}

// Address range: 0x18020e2f0 - 0x18020e3f5
int64_t function_18020e2f0(int64_t a1, int32_t a2, uint32_t a3) {
    int64_t v1 = function_1801e5a00(a1); // 0x18020e31f
    if (*(char *)v1 != 37 || *(char *)(v1 + 1) == 37) {
        // 0x18020e3dd
        return function_18026ad50((int64_t)g731);
    }
    // 0x18020e360
    int64_t v2; // bp-120, 0x18020e2f0
    function_1801e5c70(v1, &v2, 32);
    int64_t v3; // bp-88, 0x18020e2f0
    function_180195a30(&v3, 64, (char *)&v2, (int64_t)a3);
    int64_t v4 = &v3;
    int64_t v5 = v4; // 0x18020e3b0
    int64_t v6 = v4; // 0x18020e3b0
    if (*(char *)&v3 == 32) {
        v5++;
        v6 = v5;
        while (*(char *)v5 == 32) {
            // 0x18020e3b2
            v5++;
            v6 = v5;
        }
    }
    // 0x18020e3c1
    function_180283404(v6);
    int128_t v7; // 0x18020e2f0
    __asm_cvttsd2si(v7);
    // 0x18020e3dd
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18020e400 - 0x18020e506
int64_t function_18020e400(int64_t a1, int32_t a2, uint32_t a3) {
    int64_t v1 = function_1801e5a00(a1); // 0x18020e42f
    if (*(char *)v1 != 37 || *(char *)(v1 + 1) == 37) {
        // 0x18020e4ee
        return function_18026ad50((int64_t)g731);
    }
    // 0x18020e470
    int64_t v2; // bp-120, 0x18020e400
    function_1801e5c70(v1, &v2, 32);
    int64_t v3; // bp-88, 0x18020e400
    function_180195a30(&v3, 64, (char *)&v2, (int64_t)a3);
    int64_t v4 = &v3;
    int64_t v5 = v4; // 0x18020e4c0
    int64_t v6 = v4; // 0x18020e4c0
    if (*(char *)&v3 == 32) {
        v5++;
        v6 = v5;
        while (*(char *)v5 == 32) {
            // 0x18020e4c2
            v5++;
            v6 = v5;
        }
    }
    // 0x18020e4d1
    function_180283404(v6);
    int128_t v7; // 0x18020e400
    __asm_cvttsd2si_47(v7);
    // 0x18020e4ee
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18020e510 - 0x18020e628
int64_t function_18020e510(int64_t a1, int32_t a2) {
    // 0x18020e510
    int128_t v1; // 0x18020e510
    int32_t v2 = __asm_movss(v1); // 0x18020e510
    int64_t v3 = function_1801e5a00(a1); // 0x18020e540
    if (*(char *)v3 != 37 || *(char *)(v3 + 1) == 37) {
        // 0x18020e578
        __asm_movss_31(v2);
        // 0x18020e610
        return function_18026ad50((int64_t)g731);
    }
    // 0x18020e586
    int64_t v4; // bp-120, 0x18020e510
    function_1801e5c70(v3, &v4, 32);
    int128_t v5 = __asm_cvtss2sd(v2); // 0x18020e5a5
    int64_t v6 = __asm_movq_20(__asm_movaps(v5)); // 0x18020e5b1
    int64_t v7; // bp-88, 0x18020e510
    function_180195a30(&v7, 64, (char *)&v4, v6);
    int64_t v8 = &v7;
    int64_t v9 = v8; // 0x18020e5df
    int64_t v10 = v8; // 0x18020e5df
    if (*(char *)&v7 == 32) {
        v9++;
        v10 = v9;
        while (*(char *)v9 == 32) {
            // 0x18020e5e1
            v9++;
            v10 = v9;
        }
    }
    // 0x18020e5f0
    function_180283404(v10);
    __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(v5)));
    // 0x18020e610
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18020e630 - 0x18020e741
int64_t function_18020e630(int64_t a1, int32_t a2) {
    // 0x18020e630
    int128_t v1; // 0x18020e630
    int64_t v2 = __asm_movsd_17(v1); // 0x18020e630
    int64_t v3 = function_1801e5a00(a1); // 0x18020e660
    if (*(char *)v3 != 37 || *(char *)(v3 + 1) == 37) {
        // 0x18020e698
        __asm_movsd(v2);
        // 0x18020e729
        return function_18026ad50((int64_t)g731);
    }
    // 0x18020e6a6
    int64_t v4; // bp-120, 0x18020e630
    function_1801e5c70(v3, &v4, 32);
    int64_t v5 = __asm_movq_20(__asm_movsd(v2)); // 0x18020e6ce
    int64_t v6; // bp-88, 0x18020e630
    function_180195a30(&v6, 64, (char *)&v4, v5);
    int64_t v7 = &v6;
    int64_t v8 = v7; // 0x18020e6fc
    int64_t v9 = v7; // 0x18020e6fc
    if (*(char *)&v6 == 32) {
        v8++;
        v9 = v8;
        while (*(char *)v8 == 32) {
            // 0x18020e6fe
            v8++;
            v9 = v8;
        }
    }
    // 0x18020e70d
    function_180283404(v9);
    int128_t v10; // 0x18020e630
    __asm_movsd(__asm_movsd_17(v10));
    // 0x18020e729
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18020e750 - 0x18020e85c
int64_t function_18020e750(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = function_1801e5a00(a1); // 0x18020e77f
    if (*(char *)v1 != 37 || *(char *)(v1 + 1) == 37) {
        // 0x18020e844
        return function_18026ad50((int64_t)g731);
    }
    // 0x18020e7c4
    int64_t v2; // bp-120, 0x18020e750
    function_1801e5c70(v1, &v2, 32);
    int64_t v3; // bp-88, 0x18020e750
    function_180195a30(&v3, 64, (char *)&v2, a3);
    int64_t v4 = &v3;
    int64_t v5 = v4; // 0x18020e814
    int64_t v6 = v4; // 0x18020e814
    if (*(char *)&v3 == 32) {
        v5++;
        v6 = v5;
        while (*(char *)v5 == 32) {
            // 0x18020e816
            v5++;
            v6 = v5;
        }
    }
    // 0x18020e825
    function_180283404(v6);
    int128_t v7; // 0x18020e750
    __asm_cvttsd2si_47(v7);
    // 0x18020e844
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18020e860 - 0x18020e99d
int64_t function_18020e860(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = function_1801e5a00(a1); // 0x18020e88f
    if (*(char *)v1 != 37 || *(char *)(v1 + 1) == 37) {
        // 0x18020e985
        return function_18026ad50((int64_t)g731);
    }
    // 0x18020e8d4
    int64_t v2; // bp-120, 0x18020e860
    function_1801e5c70(v1, &v2, 32);
    int64_t v3; // bp-88, 0x18020e860
    function_180195a30(&v3, 64, (char *)&v2, a3);
    int64_t v4 = &v3;
    int64_t v5 = v4; // 0x18020e924
    int64_t v6 = v4; // 0x18020e924
    if (*(char *)&v3 == 32) {
        v5++;
        v6 = v5;
        while (*(char *)v5 == 32) {
            // 0x18020e926
            v5++;
            v6 = v5;
        }
    }
    // 0x18020e935
    function_180283404(v6);
    int128_t v7; // 0x18020e860
    __asm_comisd(v7, g426);
    int128_t v8 = __asm_subsd(v7, (int64_t)g426); // 0x18020e94b
    __asm_comisd(v8, g426);
    __asm_cvttsd2si_47(v8);
    // 0x18020e985
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18020e9a0 - 0x18020f0d8
int64_t function_18020e9a0(int32_t a1, int32_t a2, uint32_t a3, int32_t result, int64_t a5, int64_t a6, int64_t a7) {
    // 0x18020e9a0
    if (result == a3) {
        // 0x18020e9c9
        int128_t v1; // 0x18020e9a0
        __asm_xorps(v1, v1);
        // 0x18020f0d0
        return result;
    }
    int64_t v2 = (uint32_t)result; // 0x18020e9d1
    int32_t v3; // 0x18020e9a0
    if ((int64_t)a3 < v2) {
        int64_t v4 = a2; // 0x18020e9ef
        v3 = a3;
        if (v4 >= (int64_t)a3) {
            // 0x18020e9fe
            v3 = v4 > v2 ? result : a2;
        }
    } else {
        int64_t v5 = a2; // 0x18020ea4e
        v3 = result;
        if (v5 >= v2) {
            // 0x18020ea5d
            v3 = v5 > (int64_t)a3 ? a3 : a2;
        }
    }
    // 0x18020ea9d
    if ((a5 & 255) == 0) {
        int128_t v6 = __asm_cvtsi2ss(v3 - a3); // 0x18020f0b2
        int32_t result2 = result - a3; // 0x18020f0c4
        __asm_divss(v6, __asm_cvtsi2ss(result2));
        // 0x18020f0d0
        return result2;
    }
    int32_t v7 = (int64_t)result >= (int64_t)a3 ? a3 : result;
    int128_t v8 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_cvtsi2ss(v7))); // 0x18020eb1c
    int128_t v9 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v8)))); // 0x18020eb34
    int128_t v10 = __asm_movss_31((int32_t)__asm_movss(v9)); // 0x18020eb46
    int32_t v11 = a6; // 0x18020eb4f
    int128_t v12 = __asm_movss_31(v11); // 0x18020eb4f
    __asm_comiss(v12, v10);
    int128_t v13 = __asm_cvtsi2ss(v7);
    int64_t v14; // 0x18020e9a0
    if ((int64_t)result >= (int64_t)a3) {
        // 0x18020eba3
        v14 = __asm_movss(v13);
    } else {
        // 0x18020eb5d
        __asm_comiss(__asm_xorps(v12, v12), v13);
        int128_t v15 = __asm_xorps(__asm_movss_31(v11), g48); // 0x18020eb77
        v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15)));
    }
    int32_t v16 = (int64_t)result >= (int64_t)a3 ? result : a3;
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v14)); // 0x18020ebb8
    int128_t v18 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_cvtsi2ss(v16))); // 0x18020ebd0
    int128_t v19 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v18)))); // 0x18020ebeb
    int128_t v20 = __asm_movss_31((int32_t)__asm_movss(v19)); // 0x18020ebfd
    int128_t v21 = __asm_movss_31(v11); // 0x18020ec06
    __asm_comiss(v21, v20);
    int128_t v22 = __asm_cvtsi2ss(v16);
    int64_t v23; // 0x18020e9a0
    if ((int64_t)result >= (int64_t)a3) {
        // 0x18020ec5a
        v23 = __asm_movss(v22);
    } else {
        // 0x18020ec14
        __asm_comiss(__asm_xorps(v21, v21), v22);
        int128_t v24 = __asm_xorps(__asm_movss_31(v11), g48); // 0x18020ec2e
        v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24)));
    }
    // 0x18020eced
    __asm_movss(__asm_movss_31((int32_t)v23));
    int128_t v25 = __asm_cvtsi2ss(v7); // 0x18020ec75
    int32_t v26 = *(int32_t *)&g30;
    __asm_ucomiss(v25, v26);
    __asm_ucomiss(__asm_cvtsi2ss(v16), v26);
    int128_t v27 = __asm_cvtsi2ss(v3); // 0x18020eced
    __asm_comiss(__asm_movss_31((int32_t)v17), v27);
    int32_t v28 = __asm_movss(__asm_xorps(v27, v27)); // 0x18020ed01
    int64_t v29; // 0x18020e9a0
    if ((int64_t)result >= (int64_t)a3) {
        // 0x18020f08d
        v29 = __asm_movss(__asm_movss_31(v28));
    } else {
        // 0x18020f077
        v29 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)&g40), v28));
    }
    // 0x18020f099
    __asm_movss_31((int32_t)v29);
    // 0x18020f0d0
    return (int64_t)result < (int64_t)a3;
}

// Address range: 0x18020f0e0 - 0x18020f860
int64_t function_18020f0e0(int32_t a1, uint32_t a2, uint32_t a3, uint32_t result, int64_t a5, int64_t a6, int64_t a7) {
    // 0x18020f0e0
    if (result == a3) {
        // 0x18020f109
        int128_t v1; // 0x18020f0e0
        __asm_xorps(v1, v1);
        // 0x18020f858
        return result;
    }
    int32_t v2; // 0x18020f0e0
    if (result <= a3) {
        // 0x18020f180
        v2 = result;
        if (a2 >= result) {
            // 0x18020f19d
            v2 = a2 > a3 ? a3 : a2;
        }
    } else {
        // 0x18020f121
        v2 = a3;
        if (a2 >= a3) {
            // 0x18020f13e
            v2 = a2 > result ? result : a2;
        }
    }
    uint32_t v3 = v2;
    if ((a5 & 255) == 0) {
        int128_t v4 = __asm_cvtsi2ss(v3 - a3); // 0x18020f83a
        int32_t result2 = result - a3; // 0x18020f84c
        __asm_divss(v4, __asm_cvtsi2ss(result2));
        // 0x18020f858
        return result2;
    }
    int64_t v5 = result >= a3 ? a3 : result; // 0x18020f24d
    int128_t v6 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_cvtsi2ss_37(v5))); // 0x18020f25f
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v6)))); // 0x18020f277
    int128_t v8 = __asm_movss_31((int32_t)__asm_movss(v7)); // 0x18020f289
    int32_t v9 = a6; // 0x18020f292
    int128_t v10 = __asm_movss_31(v9); // 0x18020f292
    __asm_comiss(v10, v8);
    int128_t v11 = __asm_cvtsi2ss_37(v5);
    int64_t v12; // 0x18020f0e0
    if (result >= a3) {
        // 0x18020f2e9
        v12 = __asm_movss(v11);
    } else {
        // 0x18020f2a0
        __asm_comiss(__asm_xorps(v10, v10), v11);
        int128_t v13 = __asm_xorps(__asm_movss_31(v9), g48); // 0x18020f2bd
        v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13)));
    }
    int64_t v14 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x18020f301
    int64_t v15 = result >= a3 ? result : a3; // 0x18020f307
    int128_t v16 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_cvtsi2ss_37(v15))); // 0x18020f31c
    int128_t v17 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v16)))); // 0x18020f337
    int128_t v18 = __asm_movss_31((int32_t)__asm_movss(v17)); // 0x18020f349
    int128_t v19 = __asm_movss_31(v9); // 0x18020f352
    __asm_comiss(v19, v18);
    int128_t v20 = __asm_cvtsi2ss_37(v15);
    int64_t v21; // 0x18020f0e0
    if (result >= a3) {
        // 0x18020f3a9
        v21 = __asm_movss(v20);
    } else {
        // 0x18020f360
        __asm_comiss(__asm_xorps(v19, v19), v20);
        int128_t v22 = __asm_xorps(__asm_movss_31(v9), g48); // 0x18020f37d
        v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v22)));
    }
    // 0x18020f44b
    __asm_movss(__asm_movss_31((int32_t)v21));
    int128_t v23 = __asm_cvtsi2ss_37(v5); // 0x18020f3ce
    int32_t v24 = *(int32_t *)&g30;
    __asm_ucomiss(v23, v24);
    __asm_ucomiss(__asm_cvtsi2ss_37(v15), v24);
    int128_t v25 = __asm_cvtsi2ss_37((int64_t)v3); // 0x18020f44f
    __asm_comiss(__asm_movss_31((int32_t)v14), v25);
    int32_t v26 = __asm_movss(__asm_xorps(v25, v25)); // 0x18020f462
    int64_t v27; // 0x18020f0e0
    if (result >= a3) {
        // 0x18020f815
        v27 = __asm_movss(__asm_movss_31(v26));
    } else {
        // 0x18020f7ff
        v27 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)&g40), v26));
    }
    // 0x18020f821
    __asm_movss_31((int32_t)v27);
    // 0x18020f858
    return result < a3;
}

// Address range: 0x18020f860 - 0x18020ffc6
int64_t function_18020f860(int32_t a1) {
    // 0x18020f860
    int128_t v1; // 0x18020f860
    int32_t v2 = __asm_movss(v1); // 0x18020f860
    int128_t v3; // 0x18020f860
    int32_t v4 = __asm_movss(v3); // 0x18020f866
    int128_t v5; // 0x18020f860
    int64_t v6 = __asm_movss(v5); // 0x18020f86c
    uint64_t v7; // 0x18020f860
    int64_t v8 = v7 - 264; // 0x18020f876
    char v9 = llvm_ctpop_i8((char)v8); // 0x18020f876
    int128_t v10 = __asm_movss_31(v4); // 0x18020f87d
    __asm_ucomiss(v10, v2);
    int64_t result; // 0x18020f860
    if (v8 == 0 && (v9 & 1) != 0) {
        // 0x18020f892
        __asm_xorps(v10, v10);
        // 0x18020ffbe
        return result;
    }
    int128_t v11 = v4; // 0x18020f866
    int32_t v12 = v6; // 0x18020f86c
    int128_t v13 = v12; // 0x18020f86c
    __asm_comiss(__asm_movss_31(v2), v11);
    int64_t v14; // 0x18020f860
    if (v7 < 264 || v8 == 0) {
        // 0x18020f98d
        __asm_comiss(__asm_movss_31(v2), v13);
        __asm_comiss(__asm_movss_31(v12), v11);
        int128_t v15 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12))); // 0x18020f981
        v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v15)))));
    } else {
        // 0x18020f910
        __asm_comiss(__asm_movss_31(v4), v13);
        int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4))); // 0x18020f910
        v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16)));
    }
    int32_t v17 = __asm_movss(__asm_movss_31((int32_t)v14)); // 0x18020f9ab
    int32_t v18; // 0x18020f860
    if ((v18 & 255) == 0) {
        // 0x18020ff99
        __asm_divss(__asm_subss(__asm_movss_31(v17), v4), __asm_subss(__asm_movss_31(v2), v4));
        result = 0;
    } else {
        // 0x18020fbf8
        __asm_comiss(__asm_movss_31(v4), (int128_t)v2);
        int64_t v19 = __asm_movss(__asm_movss_31(v4)); // 0x18020fa01
        int32_t v20 = __asm_movss(__asm_movss_31(v2)); // 0x18020fa10
        int32_t v21 = __asm_movss(__asm_movss_31((int32_t)v19)); // 0x18020fa1f
        int128_t v22 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(v20))); // 0x18020fa37
        int128_t v23 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v22)))); // 0x18020fa4f
        int128_t v24 = __asm_movss_31((int32_t)__asm_movss(v23)); // 0x18020fa61
        int32_t v25; // 0x18020f860
        __asm_comiss(__asm_movss_31(v25), v24);
        __asm_comiss(__asm_xorps(v24, v24), (int128_t)v20);
        int128_t v26 = __asm_movss_31(v25);
        int64_t v27 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v26, g48)))); // 0x18020fab2
        int64_t v28 = __asm_movss(__asm_movss_31((int32_t)v27)); // 0x18020facf
        int128_t v29 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(v21))); // 0x18020fae7
        int128_t v30 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v29)))); // 0x18020fb02
        int128_t v31 = __asm_movss_31((int32_t)__asm_movss(v30)); // 0x18020fb14
        __asm_comiss(__asm_movss_31(v25), v31);
        __asm_comiss(__asm_xorps(v31, v31), (int128_t)v21);
        int64_t v32 = __asm_movss(__asm_xorps(__asm_movss_31(v25), g48)); // 0x18020fb48
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v32))));
        int128_t v33 = __asm_movss_31(v20); // 0x18020fb88
        int32_t v34 = *(int32_t *)&g30;
        __asm_ucomiss(v33, v34);
        __asm_ucomiss(__asm_movss_31(v21), v34);
        int128_t v35 = __asm_movss_31((int32_t)v28); // 0x18020fbf8
        __asm_comiss(v35, (int128_t)v17);
        int64_t v36 = __asm_movss(__asm_xorps(v35, v35)); // 0x18020fc08
        int128_t v37 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), (int32_t)v36); // 0x18020ff75
        __asm_movss_31((int32_t)__asm_movss(v37));
        result = 1;
    }
    // 0x18020ffbe
    return result;
}

// Address range: 0x18020ffd0 - 0x180210790
int64_t function_18020ffd0(int32_t a1) {
    // 0x18020ffd0
    int128_t v1; // 0x18020ffd0
    int64_t v2 = __asm_movsd_17(v1); // 0x18020ffd0
    int128_t v3; // 0x18020ffd0
    int64_t v4 = __asm_movsd_17(v3); // 0x18020ffd6
    int128_t v5; // 0x18020ffd0
    int64_t v6 = __asm_movsd_17(v5); // 0x18020ffdc
    uint64_t v7; // 0x18020ffd0
    int64_t v8 = v7 - 344; // 0x18020ffe6
    char v9 = llvm_ctpop_i8((char)v8); // 0x18020ffe6
    int128_t v10 = __asm_movsd(v4); // 0x18020ffed
    __asm_ucomisd(v10, v2);
    int64_t result; // 0x18020ffd0
    if (v8 == 0 && (v9 & 1) != 0) {
        // 0x180210003
        __asm_xorps(v10, v10);
        // 0x180210788
        return result;
    }
    int128_t v11 = v4; // 0x18020ffd6
    int128_t v12 = v6; // 0x18020ffdc
    __asm_comisd(__asm_movsd(v2), v11);
    int64_t v13; // 0x18020ffd0
    if (v7 < 344 || v8 == 0) {
        // 0x180210113
        __asm_comisd(__asm_movsd(v2), v12);
        __asm_comisd(__asm_movsd(v6), v11);
        v13 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(v6))))))));
    } else {
        // 0x180210088
        __asm_comisd(__asm_movsd(v4), v12);
        v13 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(v4))))));
    }
    int64_t v14 = __asm_movsd_17(__asm_movsd(v13)); // 0x18021013d
    int32_t v15; // 0x18020ffd0
    if ((v15 & 255) == 0) {
        // 0x18021075f
        __asm_cvtsd2ss(__asm_divsd(__asm_subsd(__asm_movsd(v14), v4), __asm_subsd(__asm_movsd(v2), v4)));
        result = 0;
    } else {
        // 0x18021038d
        __asm_comisd(__asm_movsd(v4), (int128_t)v2);
        int64_t v16 = __asm_movsd_17(__asm_movsd(v4)); // 0x180210194
        int64_t v17 = __asm_movsd_17(__asm_movsd(v2)); // 0x1802101a6
        int64_t v18 = __asm_movsd_17(__asm_movsd(v16)); // 0x1802101b8
        int64_t v19 = __asm_movsd_17(__asm_movsd(v17)); // 0x1802101ca
        int128_t v20 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v19)))); // 0x1802101ea
        int32_t v21; // 0x18020ffd0
        __asm_comisd(__asm_cvtss2sd(v21), v20);
        __asm_comisd(__asm_xorps(v20, v20), (int128_t)v17);
        int128_t v22 = __asm_movss_31(v21);
        int64_t v23 = __asm_movsd_17(__asm_cvtss2sd((int32_t)__asm_movss(__asm_xorps(v22, g48)))); // 0x18021023d
        int64_t v24 = __asm_movsd_17(__asm_movsd(v23)); // 0x180210263
        int64_t v25 = __asm_movsd_17(__asm_movsd(v18)); // 0x180210272
        int128_t v26 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v25)))); // 0x180210292
        __asm_comisd(__asm_cvtss2sd(v21), v26);
        __asm_comisd(__asm_xorps(v26, v26), (int128_t)v18);
        int64_t v27 = __asm_movss(__asm_xorps(__asm_movss_31(v21), g48)); // 0x1802102c8
        __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_cvtss2sd((int32_t)v27))));
        int64_t v28 = g86;
        __asm_ucomisd(__asm_movsd(v17), v28);
        __asm_ucomisd(__asm_movsd(v18), v28);
        int128_t v29 = __asm_movsd(v24); // 0x18021038d
        __asm_comisd(v29, (int128_t)v14);
        int64_t v30 = __asm_movss(__asm_xorps(v29, v29)); // 0x18021039e
        int128_t v31 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), (int32_t)v30); // 0x18021073b
        __asm_movss_31((int32_t)__asm_movss(v31));
        result = 1;
    }
    // 0x180210788
    return result;
}


