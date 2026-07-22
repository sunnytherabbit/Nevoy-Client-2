// Core group: core_0x8021
// Address range: 0x180210790 - 0x180210f58
int64_t function_180210790(int32_t a1, uint64_t a2, int64_t a3, int64_t result, int64_t a5, int64_t a6, int64_t a7) {
    // 0x180210790
    if (result == a3) {
        // 0x1802107bc
        int128_t v1; // 0x180210790
        __asm_xorps(v1, v1);
        // 0x180210f50
        return result;
    }
    int64_t v2; // 0x180210790
    if (result > a3) {
        // 0x1802107d6
        v2 = a3;
        if (a2 >= a3) {
            // 0x1802107f7
            v2 = a2 > result ? result : a2;
        }
    } else {
        // 0x18021084e
        v2 = result;
        if (a2 >= result) {
            // 0x18021086f
            v2 = a2 > a3 ? a3 : a2;
        }
    }
    // 0x1802108c4
    if ((a5 & 255) == 0) {
        int128_t v3 = __asm_cvtsi2sd(v2 - a3); // 0x180210f28
        int64_t result2 = result - a3; // 0x180210f3d
        __asm_cvtsd2ss(__asm_divsd(v3, __asm_cvtsi2sd(result2)));
        // 0x180210f50
        return result2;
    }
    int64_t v4 = result >= a3 ? a3 : result;
    int64_t v5 = __asm_movsd_17(__asm_cvtsi2sd(v4)); // 0x180210951
    int128_t v6 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v5)))); // 0x180210971
    int32_t v7 = a6; // 0x18021097a
    int128_t v8 = __asm_cvtss2sd(v7); // 0x18021097a
    __asm_comisd(v8, v6);
    int64_t v9; // 0x180210790
    if (result >= a3) {
        // 0x1802109d3
        v9 = __asm_movsd_17(__asm_cvtsi2sd(v4));
    } else {
        // 0x180210989
        __asm_comiss(__asm_xorps(v8, v8), __asm_cvtsi2ss_37(v4));
        int128_t v10 = __asm_xorps(__asm_movss_31(v7), g48); // 0x1802109a4
        v9 = __asm_movsd_17(__asm_cvtss2sd((int32_t)__asm_movss(v10)));
    }
    int64_t v11 = result >= a3 ? result : a3;
    int64_t v12 = __asm_movsd_17(__asm_movsd(v9)); // 0x1802109ef
    int64_t v13 = __asm_movsd_17(__asm_cvtsi2sd(v11)); // 0x1802109ff
    int128_t v14 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v13)))); // 0x180210a1f
    int128_t v15 = __asm_cvtss2sd(v7); // 0x180210a28
    __asm_comisd(v15, v14);
    int64_t v16; // 0x180210790
    if (result >= a3) {
        // 0x180210a81
        v16 = __asm_movsd_17(__asm_cvtsi2sd(v11));
    } else {
        // 0x180210a37
        __asm_comiss(__asm_xorps(v15, v15), __asm_cvtsi2ss_37(v11));
        int128_t v17 = __asm_xorps(__asm_movss_31(v7), g48); // 0x180210a52
        v16 = __asm_movsd_17(__asm_cvtss2sd((int32_t)__asm_movss(v17)));
    }
    // 0x180210b27
    __asm_movsd_17(__asm_movsd(v16));
    int128_t v18 = __asm_cvtsi2ss_37(v4); // 0x180210aa3
    int32_t v19 = *(int32_t *)&g30;
    __asm_ucomiss(v18, v19);
    __asm_ucomiss(__asm_cvtsi2ss_37(v11), v19);
    int128_t v20 = __asm_cvtsi2sd(v2); // 0x180210b27
    __asm_comisd(__asm_movsd(v12), v20);
    int32_t v21 = __asm_movss(__asm_xorps(v20, v20)); // 0x180210b3d
    int64_t v22; // 0x180210790
    if (result >= a3) {
        // 0x180210eff
        v22 = __asm_movss(__asm_movss_31(v21));
    } else {
        // 0x180210ee9
        v22 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)&g40), v21));
    }
    // 0x180210f0b
    __asm_movss_31((int32_t)v22);
    // 0x180210f50
    return result < a3;
}

// Address range: 0x180210f60 - 0x180211a73
int64_t function_180210f60(int32_t a1, uint64_t a2, uint64_t a3, uint64_t result, int64_t a5, int64_t a6, int64_t a7) {
    // 0x180210f60
    if (result == a3) {
        // 0x180210f8c
        int128_t v1; // 0x180210f60
        __asm_xorps(v1, v1);
        // 0x180211a6b
        return result;
    }
    int64_t v2; // 0x180210f60
    if (result <= a3) {
        // 0x18021101e
        v2 = result;
        if (a2 >= result) {
            // 0x18021103f
            v2 = a2 > a3 ? a3 : a2;
        }
    } else {
        // 0x180210fa6
        v2 = a3;
        if (a2 >= a3) {
            // 0x180210fc7
            v2 = a2 > result ? result : a2;
        }
    }
    int64_t v3 = v2;
    if ((a5 & 255) == 0) {
        int128_t v4 = __asm_cvtsi2sd(v3 - a3); // 0x180211a43
        int64_t result2 = result - a3; // 0x180211a58
        __asm_cvtsd2ss(__asm_divsd(v4, __asm_cvtsi2sd(result2)));
        // 0x180211a6b
        return result2;
    }
    int64_t v5 = result >= a3 ? a3 : result;
    int128_t v6; // 0x180210f60
    int64_t v7; // 0x180210f60
    if (v5 < 0) {
        int64_t v8 = v5 / 2 | v5 & 1; // 0x180211135
        int128_t v9 = __asm_cvtsi2sd(v8); // 0x180211138
        v7 = v8;
        v6 = __asm_movaps(__asm_addsd_23(v9, v9));
    } else {
        int128_t v10 = __asm_cvtsi2sd(v5); // 0x180211124
        v7 = v5;
        v6 = v10;
    }
    int64_t v11 = __asm_movsd_17(v6); // 0x180211144
    int128_t v12 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v11)))); // 0x180211164
    int32_t v13 = a6; // 0x18021116d
    int128_t v14 = __asm_cvtss2sd(v13); // 0x18021116d
    __asm_comisd(v14, v12);
    int64_t v15; // 0x180210f60
    if (v7 == 0) {
        int128_t v16; // 0x180210f60
        if (v5 < 0) {
            int128_t v17 = __asm_cvtsi2sd(v5 / 2 | v5 & 1); // 0x18021120a
            v16 = __asm_movaps(__asm_addsd_23(v17, v17));
        } else {
            // 0x1802111f6
            v16 = __asm_cvtsi2sd(v5);
        }
        // 0x180211216
        v15 = __asm_movsd_17(v16);
    } else {
        int128_t v18; // 0x180210f60
        int128_t v19; // 0x180210f60
        int64_t v20; // 0x180210f60
        if (v5 < 0) {
            int64_t v21 = v5 / 2 | v5 & 1; // 0x18021119a
            int128_t v22 = __asm_cvtsi2ss_37(v21); // 0x18021119d
            int128_t v23 = __asm_addss_34(v22, v22); // 0x1802111a2
            int128_t v24 = __asm_movaps(v23); // 0x1802111a6
            v20 = v21;
            v19 = v23;
            v18 = v24;
        } else {
            int128_t v25 = __asm_cvtsi2ss_37(v5); // 0x180211189
            v20 = v5;
            v19 = v14;
            v18 = v25;
        }
        int128_t v26 = v19;
        __asm_comiss(__asm_xorps(v26, v26), v18);
        int128_t v27 = __asm_movss_31(v13);
        int64_t v28; // 0x180210f60
        if (v20 == 0) {
            // 0x1802111c9
            v28 = __asm_movss(v27);
        } else {
            // 0x1802111b1
            v28 = __asm_movss(__asm_xorps(v27, g48));
        }
        // 0x1802111d8
        v15 = __asm_movsd_17(__asm_cvtss2sd((int32_t)v28));
    }
    int64_t v29 = result >= a3 ? result : a3;
    int64_t v30 = __asm_movsd_17(__asm_movsd(v15)); // 0x180211228
    int128_t v31; // 0x180210f60
    int64_t v32; // 0x180210f60
    if (v29 < 0) {
        int64_t v33 = v29 / 2 | v29 & 1; // 0x18021124c
        int128_t v34 = __asm_cvtsi2sd(v33); // 0x18021124f
        v32 = v33;
        v31 = __asm_movaps(__asm_addsd_23(v34, v34));
    } else {
        int128_t v35 = __asm_cvtsi2sd(v29); // 0x18021123b
        v32 = v29;
        v31 = v35;
    }
    int64_t v36 = __asm_movsd_17(v31); // 0x18021125b
    int128_t v37 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v36)))); // 0x18021127b
    int128_t v38 = __asm_cvtss2sd(v13); // 0x180211284
    __asm_comisd(v38, v37);
    int64_t v39; // 0x180210f60
    int128_t v40; // 0x180210f60
    if (v32 == 0) {
        int128_t v41; // 0x180210f60
        int128_t v42; // 0x180210f60
        if (v29 < 0) {
            int128_t v43 = __asm_cvtsi2sd(v29 / 2 | v29 & 1); // 0x180211321
            int128_t v44 = __asm_addsd_23(v43, v43); // 0x180211326
            int128_t v45 = __asm_movaps(v44); // 0x18021132a
            v42 = v44;
            v41 = v45;
        } else {
            // 0x18021130d
            v42 = v38;
            v41 = __asm_cvtsi2sd(v29);
        }
        // 0x18021132d
        v40 = v42;
        v39 = __asm_movsd_17(v41);
    } else {
        int128_t v46; // 0x180210f60
        int128_t v47; // 0x180210f60
        int64_t v48; // 0x180210f60
        if (v29 < 0) {
            int64_t v49 = v29 / 2 | v29 & 1; // 0x1802112b1
            int128_t v50 = __asm_cvtsi2ss_37(v49); // 0x1802112b4
            int128_t v51 = __asm_addss_34(v50, v50); // 0x1802112b9
            int128_t v52 = __asm_movaps(v51); // 0x1802112bd
            v48 = v49;
            v47 = v51;
            v46 = v52;
        } else {
            int128_t v53 = __asm_cvtsi2ss_37(v29); // 0x1802112a0
            v48 = v29;
            v47 = v38;
            v46 = v53;
        }
        int128_t v54 = v47;
        int128_t v55 = __asm_xorps(v54, v54); // 0x1802112c0
        __asm_comiss(v55, v46);
        int128_t v56 = __asm_movss_31(v13);
        int64_t v57; // 0x180210f60
        if (v48 == 0) {
            // 0x1802112e0
            v57 = __asm_movss(v56);
        } else {
            // 0x1802112c8
            v57 = __asm_movss(__asm_xorps(v56, g48));
        }
        // 0x1802112ef
        v40 = v55;
        v39 = __asm_movsd_17(__asm_cvtss2sd((int32_t)v57));
    }
    // 0x180211336
    __asm_movsd_17(__asm_movsd(v39));
    char v58; // 0x180210f60
    int128_t v59; // 0x180210f60
    int128_t v60; // 0x180210f60
    int64_t v61; // 0x180210f60
    if (v5 < 0) {
        int64_t v62 = v5 / 2 | v5 & 1; // 0x180211363
        char v63 = llvm_ctpop_i8((char)v62); // 0x180211363
        int128_t v64 = __asm_cvtsi2ss_37(v62); // 0x180211366
        int128_t v65 = __asm_addss_34(v64, v64); // 0x18021136b
        int128_t v66 = __asm_movaps(v65); // 0x18021136f
        v58 = v63;
        v61 = v62;
        v60 = v65;
        v59 = v66;
    } else {
        char v67 = llvm_ctpop_i8((char)v5); // 0x18021134d
        int128_t v68 = __asm_cvtsi2ss_37(v5); // 0x180211352
        v58 = v67;
        v61 = v5;
        v60 = v40;
        v59 = v68;
    }
    int32_t v69 = *(int32_t *)&g30; // 0x180211372
    __asm_ucomiss(v59, v69);
    int128_t v70 = v60; // 0x180211379
    int64_t v71; // 0x180210f60
    if ((v58 & 1) == 0 || v61 != 0) {
        goto lab_0x1802113d1;
    } else {
        int128_t v72; // 0x180210f60
        int128_t v73; // 0x180210f60
        int64_t v74; // 0x180210f60
        if (v29 < 0) {
            int64_t v75 = v29 / 2 | v29 & 1; // 0x18021139b
            int128_t v76 = __asm_cvtsi2ss_37(v75); // 0x18021139e
            int128_t v77 = __asm_addss_34(v76, v76); // 0x1802113a3
            int128_t v78 = __asm_movaps(v77); // 0x1802113a7
            v74 = v75;
            v73 = v77;
            v72 = v78;
        } else {
            int128_t v79 = __asm_cvtsi2ss_37(v29); // 0x18021138a
            v74 = v29;
            v73 = v60;
            v72 = v79;
        }
        int128_t v80 = v73;
        v70 = __asm_xorps(v80, v80);
        __asm_comiss(v70, v72);
        if (v74 == 0) {
            goto lab_0x1802113d1;
        } else {
            // 0x1802113b2
            v71 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_xorps(__asm_movss_31(v13), g48)));
            goto lab_0x180211458;
        }
    }
  lab_0x1802113d1:;
    char v81; // 0x180210f60
    int128_t v82; // 0x180210f60
    int128_t v83; // 0x180210f60
    int64_t v84; // 0x180210f60
    if (v29 < 0) {
        int64_t v85 = v29 / 2 | v29 & 1; // 0x1802113ef
        char v86 = llvm_ctpop_i8((char)v85); // 0x1802113ef
        int128_t v87 = __asm_cvtsi2ss_37(v85); // 0x1802113f2
        int128_t v88 = __asm_addss_34(v87, v87); // 0x1802113f7
        int128_t v89 = __asm_movaps(v88); // 0x1802113fb
        v81 = v86;
        v84 = v85;
        v83 = v88;
        v82 = v89;
    } else {
        char v90 = llvm_ctpop_i8((char)v29); // 0x1802113d9
        int128_t v91 = __asm_cvtsi2ss_37(v29); // 0x1802113de
        v81 = v90;
        v84 = v29;
        v83 = v70;
        v82 = v91;
    }
    // 0x1802113fe
    __asm_ucomiss(v82, v69);
    v71 = v30;
    if ((v81 & 1) != 0 && v84 == 0) {
        int128_t v92; // 0x180210f60
        int128_t v93; // 0x180210f60
        int64_t v94; // 0x180210f60
        if (v5 < 0) {
            int64_t v95 = v5 / 2 | v5 & 1; // 0x180211427
            int128_t v96 = __asm_cvtsi2ss_37(v95); // 0x18021142a
            int128_t v97 = __asm_addss_34(v96, v96); // 0x18021142f
            int128_t v98 = __asm_movaps(v97); // 0x180211433
            v94 = v95;
            v93 = v97;
            v92 = v98;
        } else {
            int128_t v99 = __asm_cvtsi2ss_37(v5); // 0x180211416
            v94 = v5;
            v93 = v83;
            v92 = v99;
        }
        int128_t v100 = v93;
        __asm_comiss(__asm_xorps(v100, v100), v92);
        v71 = v30;
        if (v94 != 0) {
            // 0x18021143e
            __asm_movsd_17(__asm_cvtss2sd_41(__asm_xorps(__asm_movss_31(v13), g48)));
            v71 = v30;
        }
    }
    goto lab_0x180211458;
  lab_0x180211458:;
    // 0x180211458
    int128_t v101; // 0x180210f60
    if (v3 < 0) {
        int128_t v102 = __asm_cvtsi2sd(v3 / 2 | v3 & 1); // 0x180211476
        v101 = __asm_movaps(__asm_addsd_23(v102, v102));
    } else {
        // 0x180211462
        v101 = __asm_cvtsi2sd(v3);
    }
    int128_t v103 = v101;
    __asm_comisd(__asm_movsd(v71), v103);
    int32_t v104 = __asm_movss(__asm_xorps(v103, v103)); // 0x180211491
    int64_t v105; // 0x180210f60
    if (result >= a3) {
        // 0x180211a1a
        v105 = __asm_movss(__asm_movss_31(v104));
    } else {
        // 0x180211a04
        v105 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)&g40), v104));
    }
    // 0x180211a26
    __asm_movss_31((int32_t)v105);
    // 0x180211a6b
    return result < a3;
}

// Address range: 0x180211a80 - 0x18021213a
int64_t function_180211a80(int32_t a1) {
    // 0x180211a80
    int64_t v1; // 0x180211a80
    uint32_t v2 = (int32_t)v1; // 0x180211a80
    int64_t v3; // 0x180211a80
    uint32_t v4 = (int32_t)v3; // 0x180211a85
    int128_t v5; // 0x180211a80
    int32_t v6 = __asm_movss(v5); // 0x180211a8a
    int128_t v7; // 0x180211a80
    __asm_comiss(__asm_xorps(v7, v7), (int128_t)v6);
    uint64_t v8; // 0x180211a80
    if (v8 < 232 != v2 != v4) {
        // 0x180212132
        return v3 & 0xffffffff;
    }
    // 0x180211ac4
    __asm_comiss(__asm_movss_31(v6), g40);
    if (v2 <= v4) {
        // 0x180212132
        return v1 & 0xffffffff;
    }
    int32_t result; // 0x180211a80
    int32_t v9; // 0x180211a80
    if ((v9 & 255) == 0) {
        if ((a1 || 1) == 9) {
            // 0x180212044
            result = __asm_cvttss2si(__asm_addss_34(__asm_cvtsi2ss(v4), __asm_mulss(__asm_cvtsi2ss(v2 - v4), v6)));
        } else {
            // 0x18021208b
            __asm_comisd(__asm_movsd(0x3ff0000000000000), __asm_cvtss2sd(v6));
            result = 0;
        }
        // 0x180212132
        return result;
    }
    int128_t v10 = __asm_cvtss2sd_41(__asm_cvtsi2ss(v4)); // 0x180211b03
    int128_t v11 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v10)))); // 0x180211b16
    int128_t v12 = __asm_movss_31((int32_t)__asm_movss(v11)); // 0x180211b22
    int32_t v13; // 0x180211a80
    int128_t v14 = __asm_movss_31(v13); // 0x180211b28
    __asm_comiss(v14, v12);
    __asm_comiss(__asm_xorps(v14, v14), __asm_cvtsi2ss(v4));
    int128_t v15 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(__asm_movss_31(v13), g48))); // 0x180211b6e
    int32_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15))); // 0x180211b91
    int128_t v17 = __asm_cvtss2sd_41(__asm_cvtsi2ss(v2)); // 0x180211ba0
    int128_t v18 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v17)))); // 0x180211bb3
    int128_t v19 = __asm_movss_31((int32_t)__asm_movss(v18)); // 0x180211bbf
    int128_t v20 = __asm_movss_31(v13); // 0x180211bc5
    __asm_comiss(v20, v19);
    int128_t v21 = __asm_cvtsi2ss(v2);
    int128_t v22 = __asm_xorps(v20, v20); // 0x180211bdc
    __asm_comiss(v22, v21);
    int128_t v23 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(__asm_movss_31(v13), g48))); // 0x180211c0b
    int32_t v24 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v23))); // 0x180211c2e
    int64_t v25 = 0x100000000 * v1 / 0x100000000; // 0x180211c42
    int32_t v26 = v16; // 0x180211c60
    int32_t v27 = v24; // 0x180211c60
    if (v25 < (v3 & 0xffffffff)) {
        int64_t v28 = __asm_movss(__asm_movss_31(v16)); // 0x180211c68
        int64_t v29 = __asm_movss(__asm_movss_31(v24)); // 0x180211c74
        int128_t v30 = __asm_movss_31((int32_t)v28); // 0x180211c7a
        v26 = v29;
        v27 = __asm_movss(v30);
    }
    int32_t v31 = g40;
    __asm_ucomiss(__asm_cvtsi2ss(v2), *(int32_t *)&g30);
    int64_t v32; // 0x180211a80
    if (v25 >= (v3 & 0xffffffff)) {
        // 0x180211ce3
        v32 = __asm_movss(__asm_movss_31(v6));
    } else {
        // 0x180211cca
        v32 = __asm_movss(__asm_subss(__asm_movss_31(v31), v6));
    }
    int32_t v33 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x180211cf8
    int64_t v34 = 0x100000000 * v3 / 0x100000000; // 0x180211d05
    int64_t v35 = v34 * v25; // 0x180211d05
    int128_t v36 = __asm_cvtsi2ss((int32_t)v35); // 0x180211d0d
    int128_t v37 = __asm_xorps(v22, v22); // 0x180211d11
    __asm_comiss(v37, v36);
    if (v25 >= (v3 & 0xffffffff) || v35 > 0x7fffffff) {
        int128_t v38 = __asm_cvtsi2ss(v4); // 0x180211f1e
        int128_t v39 = __asm_xorps(v37, v37); // 0x180211f27
        __asm_comiss(v39, v38);
        __asm_comiss(__asm_xorps(v39, v39), __asm_cvtsi2ss(v2));
        int64_t v40 = __asm_movss(__asm_divss_38(__asm_movss_31(v27), v26)); // 0x180211fc9
        int128_t v41 = __asm_movss_31(v33); // 0x180211fd2
        int128_t v42 = __asm_movss_31((int32_t)v40); // 0x180211fd8
        function_180272490(v42, v41);
        int128_t v43 = __asm_movss_31((int32_t)__asm_movss(v42)); // 0x180211fef
        result = __asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v26), v43)));
    } else {
        int128_t v44 = __asm_movaps(__asm_subss_36(__asm_cvtsi2ss(v2), __asm_cvtsi2ss(v4))); // 0x180211d63
        int64_t v45 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v44)))); // 0x180211d73
        int64_t v46 = __asm_movss(__asm_movss_31((int32_t)v45)); // 0x180211d7f
        int128_t v47 = __asm_xorps(__asm_cvtsi2ss(v34 < (v1 & 0xffffffff) ? v4 : v2), g48); // 0x180211d8d
        int32_t v48 = __asm_movss(__asm_divss(v47, __asm_movss_31((int32_t)v46))); // 0x180211d9e
        int32_t v49; // 0x180211a80
        int64_t v50 = __asm_movss(__asm_subss(__asm_movss_31(v48), v49)); // 0x180211db3
        int32_t v51 = __asm_movss(__asm_addss(__asm_movss_31(v48), v49)); // 0x180211dc8
        __asm_comiss(__asm_movss_31(v33), (int128_t)(int32_t)v50);
        __asm_comiss(__asm_movss_31(v48), (int128_t)v33);
        int128_t v52 = __asm_divss(__asm_subss(__asm_movss_31(v33), v51), __asm_subss(__asm_movss_31(v31), v51)); // 0x180211eb0
        int64_t v53 = __asm_movss(__asm_movaps(v52)); // 0x180211eb7
        int64_t v54 = __asm_movss(__asm_divss_38(__asm_movss_31(v27), v13)); // 0x180211ecf
        int128_t v55 = __asm_movss_31((int32_t)v53); // 0x180211ed8
        int128_t v56 = __asm_movss_31((int32_t)v54); // 0x180211ee1
        function_180272490(v56, v55);
        result = __asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v13), __asm_movss_31((int32_t)__asm_movss(v56)))));
    }
    // 0x180212132
    return result;
}

// Address range: 0x180212140 - 0x18021282f
int64_t function_180212140(int32_t a1) {
    // 0x180212140
    int64_t v1; // 0x180212140
    uint32_t v2 = (int32_t)v1; // 0x180212140
    int64_t v3; // 0x180212140
    uint32_t v4 = (int32_t)v3; // 0x180212145
    int128_t v5; // 0x180212140
    int32_t v6 = __asm_movss(v5); // 0x18021214a
    int128_t v7; // 0x180212140
    __asm_comiss(__asm_xorps(v7, v7), (int128_t)v6);
    int64_t v8; // 0x180212140
    uint64_t v9; // 0x180212140
    if (v9 < 232 != v2 != v4) {
        // 0x180212827
        return v8 & 0xffffffff;
    }
    // 0x180212184
    __asm_comiss(__asm_movss_31(v6), g40);
    if (v2 <= v4) {
        // 0x180212827
        return v8 & 0xffffffff;
    }
    int32_t v10; // 0x180212140
    if ((v10 & 255) == 0) {
        if ((a1 || 1) == 9) {
            int128_t v11 = __asm_cvtsi2ss_37(v3 & 0xffffffff); // 0x180212739
            v8 = __asm_cvttss2si_40(__asm_addss_34(v11, __asm_mulss(__asm_cvtsi2ss_37(v1 - v3 & 0xffffffff), v6)));
        } else {
            // 0x180212780
            __asm_comisd(__asm_movsd(0x3ff0000000000000), __asm_cvtss2sd(v6));
            v8 = 0;
        }
        // 0x180212827
        return v8 & 0xffffffff;
    }
    int64_t v12 = v3 & 0xffffffff; // 0x1802121ba
    int128_t v13 = __asm_cvtss2sd_41(__asm_cvtsi2ss_37(v12)); // 0x1802121c6
    int128_t v14 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v13)))); // 0x1802121d9
    int128_t v15 = __asm_movss_31((int32_t)__asm_movss(v14)); // 0x1802121e5
    int32_t v16; // 0x180212140
    int128_t v17 = __asm_movss_31(v16); // 0x1802121eb
    __asm_comiss(v17, v15);
    __asm_comiss(__asm_xorps(v17, v17), __asm_cvtsi2ss_37(v12));
    int128_t v18 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(__asm_movss_31(v16), g48))); // 0x180212234
    int32_t v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v18))); // 0x18021225a
    int64_t v20 = v1 & 0xffffffff; // 0x180212260
    int128_t v21 = __asm_cvtss2sd_41(__asm_cvtsi2ss_37(v20)); // 0x18021226c
    int128_t v22 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v21)))); // 0x18021227f
    int128_t v23 = __asm_movss_31((int32_t)__asm_movss(v22)); // 0x18021228b
    int128_t v24 = __asm_movss_31(v16); // 0x180212291
    __asm_comiss(v24, v23);
    int128_t v25 = __asm_cvtsi2ss_37(v20);
    int128_t v26 = __asm_xorps(v24, v24); // 0x1802122ab
    __asm_comiss(v26, v25);
    int128_t v27 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(__asm_movss_31(v16), g48))); // 0x1802122da
    int32_t v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v27))); // 0x180212300
    int32_t v29 = v19; // 0x180212332
    int32_t v30 = v28; // 0x180212332
    if (v2 < v4) {
        int64_t v31 = __asm_movss(__asm_movss_31(v19)); // 0x18021233a
        int64_t v32 = __asm_movss(__asm_movss_31(v28)); // 0x180212346
        int128_t v33 = __asm_movss_31((int32_t)v31); // 0x18021234c
        v29 = v32;
        v30 = __asm_movss(v33);
    }
    int32_t v34 = g40;
    __asm_ucomiss(__asm_cvtsi2ss_37(v20), *(int32_t *)&g30);
    int64_t v35; // 0x180212140
    if (v2 >= v4) {
        // 0x1802123bb
        v35 = __asm_movss(__asm_movss_31(v6));
    } else {
        // 0x1802123a2
        v35 = __asm_movss(__asm_subss(__asm_movss_31(v34), v6));
    }
    int32_t v36 = __asm_movss(__asm_movss_31((int32_t)v35)); // 0x1802123d0
    int64_t v37 = 0x100000000 * v3 / 0x100000000 * 0x100000000 * v1 / 0x100000000; // 0x1802123dd
    int128_t v38 = __asm_cvtsi2ss_37(v37 & 0xffffffff); // 0x1802123e7
    int128_t v39 = __asm_xorps(v26, v26); // 0x1802123ec
    __asm_comiss(v39, v38);
    int128_t v40 = __asm_cvtsi2ss_37(v12);
    if (v2 >= v4 || v37 > 0x7fffffff) {
        int128_t v41 = __asm_xorps(v39, v39); // 0x180212610
        __asm_comiss(v41, v40);
        __asm_comiss(__asm_xorps(v41, v41), __asm_cvtsi2ss_37(v20));
        int64_t v42 = __asm_movss(__asm_divss_38(__asm_movss_31(v30), v29)); // 0x1802126b6
        int128_t v43 = __asm_movss_31(v36); // 0x1802126bf
        int128_t v44 = __asm_movss_31((int32_t)v42); // 0x1802126c5
        function_180272490(v44, v43);
        int128_t v45 = __asm_movss_31((int32_t)__asm_movss(v44)); // 0x1802126dc
        v8 = __asm_cvttss2si_40(__asm_movaps(__asm_mulss_35(__asm_movss_31(v29), v45)));
    } else {
        int128_t v46 = __asm_movaps(__asm_subss_36(__asm_cvtsi2ss_37(v20), v40)); // 0x180212444
        int64_t v47 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v46)))); // 0x180212454
        int64_t v48 = __asm_movss(__asm_movss_31((int32_t)v47)); // 0x180212460
        int128_t v49 = __asm_divss(__asm_xorps(__asm_cvtsi2ss_37(v12), g48), __asm_movss_31((int32_t)v48)); // 0x18021247e
        int32_t v50 = __asm_movss(v49); // 0x180212482
        int32_t v51; // 0x180212140
        int64_t v52 = __asm_movss(__asm_subss(__asm_movss_31(v50), v51)); // 0x180212497
        int32_t v53 = __asm_movss(__asm_addss(__asm_movss_31(v50), v51)); // 0x1802124ac
        __asm_comiss(__asm_movss_31(v36), (int128_t)(int32_t)v52);
        __asm_comiss(__asm_movss_31(v50), (int128_t)v36);
        int128_t v54 = __asm_divss(__asm_subss(__asm_movss_31(v36), v53), __asm_subss(__asm_movss_31(v34), v53)); // 0x180212595
        int64_t v55 = __asm_movss(__asm_movaps(v54)); // 0x18021259c
        int64_t v56 = __asm_movss(__asm_divss_38(__asm_movss_31(v30), v16)); // 0x1802125b4
        int128_t v57 = __asm_movss_31((int32_t)v55); // 0x1802125bd
        int128_t v58 = __asm_movss_31((int32_t)v56); // 0x1802125c6
        function_180272490(v58, v57);
        v8 = __asm_cvttss2si_40(__asm_movaps(__asm_mulss_35(__asm_movss_31(v16), __asm_movss_31((int32_t)__asm_movss(v58)))));
    }
    // 0x180212827
    return v8 & 0xffffffff;
}

// Address range: 0x180212830 - 0x180212ee0
int64_t function_180212830(int32_t a1) {
    // 0x180212830
    int128_t v1; // 0x180212830
    int64_t v2 = __asm_movss(v1); // 0x180212830
    int128_t v3; // 0x180212830
    int32_t v4 = __asm_movss(v3); // 0x180212836
    int128_t v5; // 0x180212830
    int32_t v6 = __asm_movss(v5); // 0x18021283c
    int128_t v7; // 0x180212830
    __asm_comiss(__asm_xorps(v7, v7), (int128_t)v6);
    int64_t result; // 0x180212830
    uint64_t v8; // 0x180212830
    if (v8 >= 232) {
        // 0x18021286f
        __asm_movss_31(v4);
        // 0x180212ed8
        return result;
    }
    int32_t v9 = v2; // 0x180212830
    int64_t v10 = v8 - 232; // 0x180212846
    char v11 = llvm_ctpop_i8((char)v10); // 0x180212846
    __asm_ucomiss(__asm_movss_31(v4), v9);
    if (v10 == 0 && (v11 & 1) != 0) {
        // 0x18021286f
        __asm_movss_31(v4);
        // 0x180212ed8
        return result;
    }
    int128_t v12 = __asm_movss_31(v6); // 0x18021287d
    __asm_comiss(v12, g40);
    int64_t v13 = __asm_movss(__asm_xorps(v12, v12)); // 0x1802128a0
    int64_t result2; // 0x180212830
    int64_t v14; // 0x180212830
    int32_t v15; // 0x180212830
    if ((v15 & 255) == 0) {
        if ((a1 || 1) != 9) {
            // 0x180212e2d
            __asm_comisd(__asm_movsd(0x3ff0000000000000), __asm_cvtss2sd(v6));
            v14 = v13;
            result2 = 0;
        } else {
            int128_t v16 = __asm_mulss(__asm_subss(__asm_movss_31(v9), v4), v6); // 0x180212df7
            int128_t v17 = __asm_movaps(__asm_addss_34(__asm_movss_31(v4), v16)); // 0x180212e0d
            v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17)));
            result2 = 1;
        }
    } else {
        int128_t v18 = v9; // 0x180212830
        int128_t v19 = v4; // 0x180212836
        int128_t v20 = __asm_cvtss2sd(v4); // 0x1802128b6
        int128_t v21 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v20)))); // 0x1802128ce
        int128_t v22 = __asm_movss_31((int32_t)__asm_movss(v21)); // 0x1802128da
        int32_t v23; // 0x180212830
        __asm_comiss(__asm_movss_31(v23), v22);
        __asm_comiss(__asm_xorps(v22, v22), v19);
        int128_t v24 = __asm_movss_31(v23);
        int64_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v24, g48)))); // 0x180212928
        int64_t v26 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x180212945
        int128_t v27 = __asm_cvtss2sd(v9); // 0x18021294b
        int128_t v28 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v27)))); // 0x180212963
        int128_t v29 = __asm_movss_31((int32_t)__asm_movss(v28)); // 0x18021296f
        int128_t v30 = __asm_movss_31(v23); // 0x180212975
        __asm_comiss(v30, v29);
        __asm_comiss(__asm_xorps(v29, v29), v18);
        int64_t v31 = __asm_movss(__asm_xorps(__asm_movss_31(v23), g48)); // 0x1802129a0
        int64_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v31)))); // 0x1802129da
        __asm_comiss(__asm_movss_31(v4), v18);
        int64_t v33 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x180212a17
        __asm_movss(__asm_movss_31((int32_t)v32));
        __asm_movss(__asm_movss_31((int32_t)v33));
        __asm_ucomiss(__asm_movss_31(v9), *(int32_t *)&g30);
        int128_t v34 = __asm_subss(__asm_movss_31((int32_t)g40), v6); // 0x180212a7d
        int32_t v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v34))); // 0x180212aa3
        __asm_comiss(__asm_xorps(v30, v30), __asm_mulss(__asm_movss_31(v4), v9));
        __asm_comiss(__asm_movss_31(v9), v19);
        int64_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4)))); // 0x180212b00
        int128_t v37 = __asm_subss(__asm_movss_31(v9), v4); // 0x180212b0f
        int128_t v38 = function_180271c10(__asm_cvtss2sd_41(v37)); // 0x180212b1c
        int64_t v39 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(v38)))); // 0x180212b31
        int128_t v40 = __asm_xorps(__asm_movss_31((int32_t)v36), g48); // 0x180212b3d
        int32_t v41 = __asm_movss(__asm_divss(v40, __asm_movss_31((int32_t)v39))); // 0x180212b4e
        int32_t v42; // 0x180212830
        int64_t v43 = __asm_movss(__asm_subss(__asm_movss_31(v41), v42)); // 0x180212b63
        int64_t v44 = __asm_movss(__asm_addss(__asm_movss_31(v41), v42)); // 0x180212b78
        __asm_comiss(__asm_movss_31(v35), (int128_t)(int32_t)v43);
        int128_t v45 = __asm_movss_31((int32_t)v44); // 0x180212b8b
        __asm_comiss(v45, (int128_t)v35);
        v14 = __asm_movss(__asm_xorps(v45, v45));
        result2 = v38;
    }
    // 0x180212ed2
    __asm_movss_31((int32_t)v14);
    // 0x180212ed8
    return result2;
}

// Address range: 0x180212ee0 - 0x1802135af
int64_t function_180212ee0(int32_t a1) {
    // 0x180212ee0
    int128_t v1; // 0x180212ee0
    int64_t v2 = __asm_movsd_17(v1); // 0x180212ee0
    int128_t v3; // 0x180212ee0
    int64_t v4 = __asm_movsd_17(v3); // 0x180212ee6
    int128_t v5; // 0x180212ee0
    int32_t v6 = __asm_movss(v5); // 0x180212eec
    int128_t v7; // 0x180212ee0
    __asm_comiss(__asm_xorps(v7, v7), (int128_t)v6);
    int64_t result; // 0x180212ee0
    uint64_t v8; // 0x180212ee0
    if (v8 >= 264) {
        // 0x180212f20
        __asm_movsd(v4);
        // 0x1802135a7
        return result;
    }
    int64_t v9 = v8 - 264; // 0x180212ef6
    char v10 = llvm_ctpop_i8((char)v9); // 0x180212ef6
    __asm_ucomisd(__asm_movsd(v4), v2);
    if (v9 == 0 && (v10 & 1) != 0) {
        // 0x180212f20
        __asm_movsd(v4);
        // 0x1802135a7
        return result;
    }
    int128_t v11 = __asm_movss_31(v6); // 0x180212f2e
    __asm_comiss(v11, g40);
    int64_t v12 = __asm_movsd_17(__asm_xorps(v11, v11)); // 0x180212f51
    int64_t result2; // 0x180212ee0
    int64_t v13; // 0x180212ee0
    int32_t v14; // 0x180212ee0
    if ((v14 & 255) == 0) {
        if ((a1 || 1) != 9) {
            // 0x18021350b
            __asm_comisd(__asm_movsd(0x3ff0000000000000), __asm_cvtss2sd(v6));
            v13 = v12;
            result2 = 0;
        } else {
            int128_t v15 = __asm_mulsd_22(__asm_subsd(__asm_movsd(v2), v4), __asm_cvtss2sd(v6)); // 0x1802134da
            int128_t v16 = __asm_movaps(__asm_addsd_23(__asm_movsd(v4), v15)); // 0x1802134eb
            v13 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(v16)));
            result2 = 1;
        }
    } else {
        int128_t v17 = v2; // 0x180212ee0
        int128_t v18 = v4; // 0x180212ee6
        int128_t v19 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v4)))); // 0x180212f7e
        int32_t v20; // 0x180212ee0
        __asm_comisd(__asm_cvtss2sd(v20), v19);
        __asm_comisd(__asm_xorps(v19, v19), v18);
        int128_t v21 = __asm_movss_31(v20);
        int64_t v22 = __asm_movsd_17(__asm_cvtss2sd((int32_t)__asm_movss(__asm_xorps(v21, g48)))); // 0x180212fd1
        int64_t v23 = __asm_movsd_17(__asm_movsd(v22)); // 0x180212fee
        int128_t v24 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v2)))); // 0x18021300b
        int128_t v25 = __asm_cvtss2sd(v20); // 0x180213014
        __asm_comisd(v25, v24);
        __asm_comisd(__asm_xorps(v24, v24), v17);
        int64_t v26 = __asm_movss(__asm_xorps(__asm_movss_31(v20), g48)); // 0x180213041
        int64_t v27 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_cvtss2sd((int32_t)v26)))); // 0x18021307b
        __asm_comisd(__asm_movsd(v4), v17);
        int64_t v28 = __asm_movsd_17(__asm_movsd(v23)); // 0x1802130b9
        __asm_movsd_17(__asm_movsd(v27));
        __asm_movsd_17(__asm_movsd(v28));
        __asm_ucomisd(__asm_movsd(v2), (int64_t)g86);
        int128_t v29 = __asm_subss(__asm_movss_31((int32_t)g40), v6); // 0x18021312b
        int32_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v29))); // 0x180213151
        __asm_comisd(__asm_xorps(v25, v25), __asm_mulsd(__asm_movsd(v4), v2));
        __asm_comisd(__asm_movsd(v2), v18);
        int64_t v31 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(v4)))); // 0x1802131b0
        int128_t v32 = __asm_movaps(__asm_subss_36(__asm_cvtsd2ss_43(v2), __asm_cvtsd2ss_43(v4))); // 0x1802131cf
        int128_t v33 = function_180271c10(__asm_cvtss2sd_41(v32)); // 0x1802131d6
        int64_t v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(v33)))); // 0x1802131eb
        int128_t v35 = __asm_xorps(__asm_cvtsd2ss(__asm_movsd(v31)), g48); // 0x1802131fe
        int32_t v36 = __asm_movss(__asm_divss(v35, __asm_movss_31((int32_t)v34))); // 0x18021320f
        int32_t v37; // 0x180212ee0
        int64_t v38 = __asm_movss(__asm_subss(__asm_movss_31(v36), v37)); // 0x180213224
        int64_t v39 = __asm_movss(__asm_addss(__asm_movss_31(v36), v37)); // 0x180213239
        __asm_comiss(__asm_movss_31(v30), (int128_t)(int32_t)v38);
        int128_t v40 = __asm_movss_31((int32_t)v39); // 0x18021324c
        __asm_comiss(v40, (int128_t)v30);
        v13 = __asm_movsd_17(__asm_xorps(v40, v40));
        result2 = v33;
    }
    // 0x1802135a1
    __asm_movsd(v13);
    // 0x1802135a7
    return result2;
}

// Address range: 0x1802135b0 - 0x180213caf
int64_t function_1802135b0(int32_t a1) {
    // 0x1802135b0
    int128_t v1; // 0x1802135b0
    int32_t v2 = __asm_movss(v1); // 0x1802135ba
    int128_t v3; // 0x1802135b0
    __asm_comiss(__asm_xorps(v3, v3), (int128_t)v2);
    int64_t result; // 0x1802135b0
    int64_t v4; // 0x1802135b0
    int64_t v5; // 0x1802135b0
    uint64_t v6; // 0x1802135b0
    if (v6 < 264 != v4 != v5) {
        // 0x180213ca7
        return result;
    }
    // 0x1802135f7
    __asm_comiss(__asm_movss_31(v2), g40);
    if (v4 <= v5) {
        // 0x180213ca7
        return result;
    }
    int32_t v7; // 0x1802135b0
    if ((v7 & 255) == 0) {
        if ((a1 || 1) == 9) {
            // 0x180213bae
            result = __asm_cvttss2si_40(__asm_addss_34(__asm_cvtsi2ss_37(v5), __asm_mulss(__asm_cvtsi2ss_37(v4 - v5), v2)));
        } else {
            // 0x180213bff
            __asm_comisd(__asm_movsd(0x3ff0000000000000), __asm_cvtss2sd(v2));
            result = 0;
        }
        // 0x180213ca7
        return result;
    }
    int128_t v8 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_cvtsi2sd(v5)))); // 0x180213647
    int32_t v9; // 0x1802135b0
    int128_t v10 = __asm_cvtss2sd(v9); // 0x180213650
    __asm_comisd(v10, v8);
    __asm_comiss(__asm_xorps(v10, v10), __asm_cvtsi2ss_37(v5));
    int128_t v11 = __asm_movss_31(v9);
    int64_t v12 = __asm_movsd_17(__asm_cvtss2sd((int32_t)__asm_movss(__asm_xorps(v11, g48)))); // 0x18021369e
    int64_t v13 = __asm_movsd_17(__asm_movsd(v12)); // 0x1802136bc
    int128_t v14 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_cvtsi2sd(v4)))); // 0x1802136da
    int128_t v15 = __asm_cvtss2sd(v9); // 0x1802136e3
    __asm_comisd(v15, v14);
    int128_t v16 = __asm_cvtsi2ss_37(v4); // 0x1802136f2
    int128_t v17 = __asm_xorps(v15, v15); // 0x1802136fc
    __asm_comiss(v17, v16);
    int64_t v18 = __asm_movss(__asm_xorps(__asm_movss_31(v9), g48)); // 0x180213714
    int64_t v19 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_cvtss2sd((int32_t)v18)))); // 0x18021374f
    int64_t v20 = v13; // 0x180213783
    int64_t v21 = v19; // 0x180213783
    if (v4 < v5) {
        int64_t v22 = __asm_movsd_17(__asm_movsd(v13)); // 0x18021378b
        v20 = __asm_movsd_17(__asm_movsd(v19));
        v21 = __asm_movsd_17(__asm_movsd(v22));
    }
    int32_t v23 = g40;
    __asm_ucomiss(__asm_cvtsi2ss_37(v4), *(int32_t *)&g30);
    int64_t v24; // 0x1802135b0
    if (v4 >= v5) {
        // 0x180213812
        v24 = __asm_movss(__asm_movss_31(v2));
    } else {
        // 0x1802137f9
        v24 = __asm_movss(__asm_subss(__asm_movss_31(v23), v2));
    }
    int32_t v25 = __asm_movss(__asm_movss_31((int32_t)v24)); // 0x180213827
    int128_t v26 = (int128_t)v5 * (int128_t)v4; // 0x180213835
    int128_t v27 = __asm_cvtsi2ss_37((int64_t)v26); // 0x18021383e
    int128_t v28 = __asm_xorps(v17, v17); // 0x180213843
    __asm_comiss(v28, v27);
    if (v4 >= v5 || v26 > 0x7fffffffffffffff) {
        int128_t v29 = __asm_cvtsi2ss_37(v5); // 0x180213a77
        int128_t v30 = __asm_xorps(v28, v28); // 0x180213a81
        __asm_comiss(v30, v29);
        __asm_comiss(__asm_xorps(v30, v30), __asm_cvtsi2ss_37(v4));
        int64_t v31 = __asm_movsd_17(__asm_divsd_42(__asm_movsd(v21), v20)); // 0x180213b2e
        __asm_movaps(__asm_cvtss2sd(v25));
        int128_t v32 = __asm_movsd(v31); // 0x180213b40
        function_180283940(v32);
        result = __asm_cvttsd2si_47(__asm_movaps(__asm_mulsd_22(__asm_movsd(v20), __asm_movsd(__asm_movsd_17(v32)))));
    } else {
        int128_t v33 = __asm_movaps(__asm_subss_36(__asm_cvtsi2ss_37(v4), __asm_cvtsi2ss_37(v5))); // 0x1802138a2
        int64_t v34 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v33)))); // 0x1802138b2
        int64_t v35 = __asm_movss(__asm_movss_31((int32_t)v34)); // 0x1802138be
        int128_t v36 = __asm_xorps(__asm_cvtsi2ss_37(v4 > v5 ? v5 : v4), g48); // 0x1802138d1
        int32_t v37 = __asm_movss(__asm_divss(v36, __asm_movss_31((int32_t)v35))); // 0x1802138e2
        int32_t v38; // 0x1802135b0
        int64_t v39 = __asm_movss(__asm_subss(__asm_movss_31(v37), v38)); // 0x1802138f7
        int32_t v40 = __asm_movss(__asm_addss(__asm_movss_31(v37), v38)); // 0x18021390c
        __asm_comiss(__asm_movss_31(v25), (int128_t)(int32_t)v39);
        __asm_comiss(__asm_movss_31(v37), (int128_t)v25);
        int128_t v41 = __asm_subss(__asm_movss_31(v23), v40); // 0x1802139ed
        int128_t v42 = __asm_movaps(__asm_divss(__asm_subss(__asm_movss_31(v25), v40), v41)); // 0x180213a03
        int64_t v43 = __asm_movsd_17(__asm_cvtss2sd_41(v42)); // 0x180213a0a
        int64_t v44 = __asm_movsd_17(__asm_movaps(__asm_divsd(__asm_movsd(v21), __asm_cvtss2sd(v9)))); // 0x180213a29
        __asm_movsd(v43);
        int128_t v45 = __asm_movsd(v44); // 0x180213a3b
        function_180283940(v45);
        result = __asm_cvttsd2si_47(__asm_mulsd_22(__asm_cvtss2sd(v9), __asm_movsd(__asm_movsd_17(v45))));
    }
    // 0x180213ca7
    return result;
}

// Address range: 0x180213cb0 - 0x1802146d0
int64_t function_180213cb0(int32_t a1) {
    // 0x180213cb0
    int128_t v1; // 0x180213cb0
    int32_t v2 = __asm_movss(v1); // 0x180213cba
    int128_t v3; // 0x180213cb0
    __asm_comiss(__asm_xorps(v3, v3), (int128_t)v2);
    int64_t result; // 0x180213cb0
    uint64_t v4; // 0x180213cb0
    uint64_t v5; // 0x180213cb0
    uint64_t v6; // 0x180213cb0
    if (v6 < 264 != v4 != v5) {
        // 0x1802146c8
        return result;
    }
    // 0x180213cf7
    __asm_comiss(__asm_movss_31(v2), g40);
    if (v4 <= v5) {
        // 0x1802146c8
        return result;
    }
    int32_t v7; // 0x180213cb0
    if ((v7 & 255) == 0) {
        if ((a1 || 1) != 9) {
            // 0x180214620
            __asm_comisd(__asm_movsd(0x3ff0000000000000), __asm_cvtss2sd(v2));
            // 0x1802146c8
            return 0;
        }
        int128_t v8; // 0x180213cb0
        if (v5 < 0) {
            int128_t v9 = __asm_cvtsi2ss_37(v5 / 2 | v5 & 1); // 0x18021457e
            v8 = __asm_movaps(__asm_addss_34(v9, v9));
        } else {
            // 0x18021456a
            v8 = __asm_cvtsi2ss_37(v5);
        }
        int64_t v10 = v4 - v5; // 0x18021459a
        int128_t v11; // 0x180213cb0
        if (v10 < 0) {
            int128_t v12 = __asm_cvtsi2ss_37(v10 / 2 | v10 & 1); // 0x1802145b9
            v11 = __asm_movaps(__asm_addss_34(v12, v12));
        } else {
            // 0x1802145a5
            v11 = __asm_cvtsi2ss_37(v10);
        }
        int128_t v13 = __asm_addss_34(v8, __asm_mulss(v11, v2)); // 0x1802145ce
        __asm_comiss(v13, g47);
        int128_t v14 = __asm_subss(v13, (int32_t)g47); // 0x1802145dd
        __asm_comiss(v14, g47);
        // 0x1802146c8
        return __asm_cvttss2si_40(v14);
    }
    int128_t v15; // 0x180213cb0
    int64_t v16; // 0x180213cb0
    if (v5 < 0) {
        int64_t v17 = v5 / 2 | v5 & 1; // 0x180213d4d
        int128_t v18 = __asm_cvtsi2sd(v17); // 0x180213d50
        v16 = v17;
        v15 = __asm_movaps(__asm_addsd_23(v18, v18));
    } else {
        // 0x180213d3c
        v15 = __asm_cvtsi2sd(v5);
    }
    int128_t v19 = __asm_movsd(__asm_movsd_17(function_180271c10(v15))); // 0x180213d6a
    int32_t v20; // 0x180213cb0
    int128_t v21 = __asm_cvtss2sd(v20); // 0x180213d73
    __asm_comisd(v21, v19);
    int64_t v22; // 0x180213cb0
    if (v16 == 0) {
        int128_t v23; // 0x180213cb0
        if (v5 < 0) {
            int128_t v24 = __asm_cvtsi2sd(v5 / 2 | v5 & 1); // 0x180213e0d
            v23 = __asm_movaps(__asm_addsd_23(v24, v24));
        } else {
            // 0x180213df9
            v23 = __asm_cvtsi2sd(v5);
        }
        // 0x180213e19
        v22 = __asm_movsd_17(v23);
    } else {
        int128_t v25; // 0x180213cb0
        int128_t v26; // 0x180213cb0
        int64_t v27; // 0x180213cb0
        if (v5 < 0) {
            int64_t v28 = v5 / 2 | v5 & 1; // 0x180213da0
            int128_t v29 = __asm_cvtsi2ss_37(v28); // 0x180213da3
            int128_t v30 = __asm_addss_34(v29, v29); // 0x180213da8
            int128_t v31 = __asm_movaps(v30); // 0x180213dac
            v27 = v28;
            v26 = v30;
            v25 = v31;
        } else {
            // 0x180213d8f
            v26 = v21;
            v25 = __asm_cvtsi2ss_37(v5);
        }
        int128_t v32 = v26;
        __asm_comiss(__asm_xorps(v32, v32), v25);
        int128_t v33 = __asm_movss_31(v20);
        int64_t v34; // 0x180213cb0
        if (v27 == 0) {
            // 0x180213dcf
            v34 = __asm_movss(v33);
        } else {
            // 0x180213db7
            v34 = __asm_movss(__asm_xorps(v33, g48));
        }
        // 0x180213dde
        v22 = __asm_movsd_17(__asm_cvtss2sd((int32_t)v34));
    }
    int64_t v35 = __asm_movsd_17(__asm_movsd(v22)); // 0x180213e25
    int128_t v36; // 0x180213cb0
    if (v4 < 0) {
        int128_t v37 = __asm_cvtsi2sd(v4 / 2 | v4 & 1); // 0x180213e4c
        v36 = __asm_movaps(__asm_addsd_23(v37, v37));
    } else {
        // 0x180213e38
        v36 = __asm_cvtsi2sd(v4);
    }
    int128_t v38 = __asm_movsd(__asm_movsd_17(function_180271c10(v36))); // 0x180213e66
    int128_t v39 = __asm_cvtss2sd(v20); // 0x180213e6f
    __asm_comisd(v39, v38);
    int128_t v40; // 0x180213cb0
    int128_t v41; // 0x180213cb0
    if (v4 < 0) {
        int128_t v42 = __asm_cvtsi2ss_37(v4 / 2 | v4 & 1); // 0x180213e9f
        int128_t v43 = __asm_addss_34(v42, v42); // 0x180213ea4
        int128_t v44 = __asm_movaps(v43); // 0x180213ea8
        v41 = v43;
        v40 = v44;
    } else {
        // 0x180213e8b
        v41 = v39;
        v40 = __asm_cvtsi2ss_37(v4);
    }
    int128_t v45 = v41;
    int128_t v46 = __asm_xorps(v45, v45); // 0x180213eab
    __asm_comiss(v46, v40);
    int128_t v47 = __asm_movss_31(v20);
    int64_t v48 = __asm_movsd_17(__asm_cvtss2sd((int32_t)__asm_movss(__asm_xorps(v47, g48)))); // 0x180213ee0
    int64_t v49 = __asm_movsd_17(__asm_movsd(v48)); // 0x180213f21
    int64_t v50 = v35; // 0x180213f55
    int64_t v51 = v49; // 0x180213f55
    if (v4 < v5) {
        int64_t v52 = __asm_movsd_17(__asm_movsd(v35)); // 0x180213f5d
        v50 = __asm_movsd_17(__asm_movsd(v49));
        v51 = __asm_movsd_17(__asm_movsd(v52));
    }
    // 0x180213f81
    int128_t v53; // 0x180213cb0
    int128_t v54; // 0x180213cb0
    if (v4 < 0) {
        int128_t v55 = __asm_cvtsi2ss_37(v4 / 2 | v4 & 1); // 0x180213fa2
        int128_t v56 = __asm_addss_34(v55, v55); // 0x180213fa7
        int128_t v57 = __asm_movaps(v56); // 0x180213fab
        v54 = v56;
        v53 = v57;
    } else {
        // 0x180213f8e
        v54 = v46;
        v53 = __asm_cvtsi2ss_37(v4);
    }
    int32_t v58 = g40;
    __asm_ucomiss(v53, *(int32_t *)&g30);
    int64_t v59; // 0x180213cb0
    if (v4 >= v5) {
        // 0x18021402a
        v59 = __asm_movss(__asm_movss_31(v2));
    } else {
        // 0x180214011
        v59 = __asm_movss(__asm_subss(__asm_movss_31(v58), v2));
    }
    int64_t v60 = __asm_movss(__asm_movss_31((int32_t)v59)); // 0x18021403f
    int64_t v61 = v5 * v4; // 0x18021404d
    int128_t v62; // 0x180213cb0
    int128_t v63; // 0x180213cb0
    int64_t v64; // 0x180213cb0
    if (v61 < 0) {
        int64_t v65 = v61 / 2 | v61 & 1; // 0x18021406c
        int128_t v66 = __asm_cvtsi2ss_37(v65); // 0x18021406f
        int128_t v67 = __asm_addss_34(v66, v66); // 0x180214074
        int128_t v68 = __asm_movaps(v67); // 0x180214078
        v64 = v65;
        v63 = v67;
        v62 = v68;
    } else {
        int128_t v69 = __asm_cvtsi2ss_37(v61); // 0x18021405b
        v64 = v61;
        v63 = v54;
        v62 = v69;
    }
    int32_t v70 = v60; // 0x18021403f
    int128_t v71 = v63;
    int128_t v72 = __asm_xorps(v71, v71); // 0x18021407b
    __asm_comiss(v72, v62);
    if (v64 != 0) {
        int128_t v73; // 0x180213cb0
        if (v5 < 0) {
            int128_t v74 = __asm_cvtsi2ss_37(v5 / 2 | v5 & 1); // 0x1802140e3
            v73 = __asm_movaps(__asm_addss_34(v74, v74));
        } else {
            // 0x1802140cf
            v73 = __asm_cvtsi2ss_37(v5);
        }
        // 0x1802140ef
        int128_t v75; // 0x180213cb0
        if (v4 < 0) {
            int128_t v76 = __asm_cvtsi2ss_37(v4 / 2 | v4 & 1); // 0x180214110
            v75 = __asm_movaps(__asm_addss_34(v76, v76));
        } else {
            // 0x1802140fc
            v75 = __asm_cvtsi2ss_37(v4);
        }
        int128_t v77 = __asm_movaps(__asm_subss_36(v75, v73)); // 0x180214120
        int64_t v78 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v77)))); // 0x180214130
        int64_t v79 = __asm_movss(__asm_movss_31((int32_t)v78)); // 0x18021413c
        int128_t v80; // 0x180213cb0
        if (v5 < 0) {
            int128_t v81 = __asm_cvtsi2ss_37(v5 / 2 | v5 & 1); // 0x180214163
            v80 = __asm_movaps(__asm_addss_34(v81, v81));
        } else {
            // 0x18021414f
            v80 = __asm_cvtsi2ss_37(v5);
        }
        int128_t v82 = __asm_xorps(v80, g48); // 0x18021416f
        int32_t v83 = __asm_movss(__asm_divss(v82, __asm_movss_31((int32_t)v79))); // 0x180214180
        int32_t v84; // 0x180213cb0
        int64_t v85 = __asm_movss(__asm_subss(__asm_movss_31(v83), v84)); // 0x180214195
        int64_t v86 = __asm_movss(__asm_addss(__asm_movss_31(v83), v84)); // 0x1802141aa
        __asm_comiss(__asm_movss_31(v70), (int128_t)(int32_t)v85);
        __asm_comiss(__asm_movss_31((int32_t)v86), (int128_t)v70);
        // 0x1802146c8
        return 0;
    }
    int128_t v87; // 0x180213cb0
    int128_t v88; // 0x180213cb0
    int64_t v89; // 0x180213cb0
    if (v5 < 0) {
        int64_t v90 = v5 / 2 | v5 & 1; // 0x180214395
        int128_t v91 = __asm_cvtsi2ss_37(v90); // 0x180214398
        int128_t v92 = __asm_addss_34(v91, v91); // 0x18021439d
        int128_t v93 = __asm_movaps(v92); // 0x1802143a1
        v89 = v90;
        v88 = v92;
        v87 = v93;
    } else {
        // 0x180214384
        v88 = v72;
        v87 = __asm_cvtsi2ss_37(v5);
    }
    int128_t v94 = v88;
    int128_t v95 = __asm_xorps(v94, v94); // 0x1802143a4
    __asm_comiss(v95, v87);
    if (v89 == 0) {
        int128_t v96; // 0x180213cb0
        int128_t v97; // 0x180213cb0
        if (v4 < 0) {
            int128_t v98 = __asm_cvtsi2ss_37(v4 / 2 | v4 & 1); // 0x1802143cd
            int128_t v99 = __asm_addss_34(v98, v98); // 0x1802143d2
            int128_t v100 = __asm_movaps(v99); // 0x1802143d6
            v97 = v99;
            v96 = v100;
        } else {
            // 0x1802143b9
            v97 = v95;
            v96 = __asm_cvtsi2ss_37(v4);
        }
        int128_t v101 = v97;
        __asm_comiss(__asm_xorps(v101, v101), v96);
    }
    int128_t v102 = __asm_xorps(__asm_movsd(v51), g252); // 0x1802143eb
    int64_t v103 = __asm_movsd_17(__asm_movaps(__asm_divsd(__asm_xorps(__asm_movsd(v50), g252), v102))); // 0x180214406
    __asm_movaps(__asm_cvtss2sd_41(__asm_subss(__asm_movss_31(v58), v70)));
    int128_t v104 = __asm_movsd(v103); // 0x180214424
    function_180283940(v104);
    int64_t v105 = __asm_movsd_17(v104); // 0x180214432
    int128_t v106 = __asm_xorps(__asm_movsd(v51), g252); // 0x180214441
    int128_t v107 = __asm_xorps(__asm_mulsd_22(v106, __asm_movsd(v105)), g252); // 0x180214455
    __asm_comisd(v107, g426);
    int128_t v108 = __asm_subsd(v107, (int64_t)g426); // 0x180214468
    __asm_comisd(v108, g426);
    // 0x1802146c8
    return __asm_cvttsd2si_47(v108);
}

// Address range: 0x1802146d0 - 0x1802158e4
int64_t function_1802146d0(int64_t a1, uint32_t a2, int64_t a3, int32_t * a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = 0x100000000 * a5 / 0x100000000;
    int64_t v2 = 0x100000000 * a6 / 0x100000000;
    int64_t v3 = 0x100000000 * a3 / 0x100000000; // 0x1802146d5
    int64_t v4 = (int64_t)g1201; // 0x1802146ec
    int32_t v5 = v3; // 0x180214761
    int32_t v6 = v2;
    int32_t v7 = v1;
    int128_t v8 = __asm_cvtsi2ss(v1 < (v2 & 0xffffffff) ? v6 - v7 : v7 - v6); // 0x1802147ce
    int32_t v9 = __asm_movss(v8); // 0x1802147d7
    int32_t v10 = *(int32_t *)&g41; // 0x1802147dd
    __asm_movss(__asm_movss_31(v10));
    int64_t v11 = a1 + 8; // 0x1802147f6
    int64_t v12 = 4 * (int64_t)((a8 & 0x100000) != 0); // 0x18021481f
    int32_t * v13 = (int32_t *)(v12 + a1); // 0x18021481f
    int64_t v14 = __asm_movss(__asm_movss_31(*v13)); // 0x180214824
    int32_t * v15 = (int32_t *)(v12 + v11); // 0x18021483a
    int64_t v16 = __asm_movss(__asm_movss_31(*v15)); // 0x18021483f
    int128_t v17 = __asm_subss_36(__asm_movss_31((int32_t)v16), __asm_movss_31((int32_t)v14)); // 0x18021485a
    int32_t v18 = __asm_movss(__asm_subss(__asm_movaps(v17), 0x40800000)); // 0x180214869
    int32_t * v19 = (int32_t *)(v4 + 0x397c); // 0x180214877
    int64_t v20 = __asm_movss(__asm_movss_31(*v19)); // 0x180214889
    if ((v5 & -2) != 8) {
        // 0x18021488f
        __asm_comiss(__asm_movss_31(v9), g30);
        int64_t v21 = __asm_movss(__asm_movss_31(*v19)); // 0x1802148af
        int128_t v22 = __asm_addss(__asm_movss_31(v9), *(int32_t *)&g40); // 0x1802148be
        int32_t v23 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v18), v22))); // 0x1802148d3
        __asm_comiss(__asm_movss_31(v23), (int128_t)(int32_t)v21);
        int128_t v24 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v23))); // 0x180214915
        v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24)));
    }
    int32_t v25 = v20;
    __asm_comiss(__asm_movss_31(v18), (int128_t)v25);
    int64_t v26; // 0x1802146d0
    if ((v5 & -2) != 8) {
        // 0x180214954
        v26 = __asm_movss(__asm_movss_31(v18));
    } else {
        // 0x180214943
        v26 = __asm_movss(__asm_movss_31(v25));
    }
    int64_t v27 = a2;
    int128_t v28 = __asm_movss_31((int32_t)v26); // 0x180214963
    int32_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v28))); // 0x18021497e
    int32_t v30 = __asm_movss(__asm_subss(__asm_movss_31(v18), v29)); // 0x180214990
    int128_t v31 = __asm_addss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v13))), v10); // 0x1802149cd
    int128_t v32 = __asm_movss_31(v29); // 0x1802149d5
    int32_t v33 = *(int32_t *)&g38;
    int64_t v34 = __asm_movss(__asm_addss_34(v31, __asm_mulss(v32, v33))); // 0x1802149e7
    int128_t v35 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v15))), v10); // 0x180214a28
    int128_t v36 = __asm_subss_36(v35, __asm_mulss(__asm_movss_31(v29), v33)); // 0x180214a3e
    int64_t v37 = __asm_movss(v36); // 0x180214a42
    int128_t v38 = __asm_xorps(v36, v36); // 0x180214a4b
    int64_t v39 = __asm_movss(v38); // 0x180214a4e
    int128_t v40 = __asm_xorps(v38, v38); // 0x180214a54
    int64_t v41 = v39; // 0x180214a64
    int64_t v42 = __asm_movss(v40); // 0x180214a64
    int128_t v43 = v40; // 0x180214a64
    int64_t v44 = v27; // 0x180214a64
    if ((a8 & 32) != 0) {
        // 0x180214a6a
        v44 = v27;
        int32_t v45 = 1; // 0x180214a71
        if ((v5 & -2) == 8) {
            // 0x180214a73
            v44 = 3;
            v45 = function_1801e5e60(a7, 3);
        }
        int128_t v46 = __asm_movaps(__asm_cvtsi2ss(v45)); // 0x180214ab0
        int128_t v47 = __asm_movss_31(*(int32_t *)&g35); // 0x180214ab3
        function_180272490(v47, v46);
        v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v47)));
        __asm_comiss(__asm_movss_31(v30), g40);
        int64_t v48 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v30)))); // 0x180214b18
        int128_t v49 = __asm_mulss(__asm_movss_31(*(int32_t *)(v4 + 0x3984)), v33); // 0x180214b31
        v43 = __asm_divss(v49, __asm_movss_31((int32_t)v48));
        v42 = __asm_movss(v43);
    }
    int32_t v50 = v34; // 0x1802149e7
    int32_t v51 = v37; // 0x180214a42
    int32_t v52 = v42;
    int32_t v53 = v41;
    int64_t v54 = a2; // 0x180214b56
    int64_t v55 = v54; // 0x180214b56
    uint32_t v56 = *(int32_t *)(v4 + 0x40e4); // 0x180214b5d
    int64_t result = 0; // 0x180214b63
    bool v57 = v56 < a2; // 0x180214b63
    bool v58 = false; // 0x180214b63
    bool v59; // 0x1802146d0
    int64_t v60; // 0x1802146d0
    int64_t v61; // 0x1802146d0
    int64_t v62; // 0x1802146d0
    int32_t v63; // 0x1802146d0
    int32_t v64; // 0x1802146d0
    int64_t v65; // 0x1802146d0
    char * v66; // 0x180214e9a
    int32_t v67; // 0x180214b71
    int32_t v68; // 0x180214be6
    int32_t v69; // 0x180214efe
    int32_t v70; // 0x180214f0a
    int32_t v71; // 0x1802146d0
    int64_t v72; // 0x180214f7c
    int128_t v73; // 0x180214d0c
    int32_t v74; // 0x180214fa0
    bool v75; // 0x1802146d0
    if (v56 != a2) {
        goto lab_0x1802155a8;
    } else {
        int128_t v76 = v43;
        int128_t v77 = __asm_xorps(v76, v76); // 0x180214b6e
        int64_t v78 = __asm_movss(v77); // 0x180214b71
        int32_t v79 = *(int32_t *)(v4 + 0x4110); // 0x180214b7c
        if (v79 != 1) {
            // 0x180214e75
            result = 0;
            v57 = false;
            v58 = true;
            if (v79 != 2 == (v79 != 3)) {
                goto lab_0x1802155a8;
            } else {
                // 0x180214e95
                v66 = (char *)(v4 + 0x40f0);
                int128_t v80 = v77; // 0x180214ea3
                if (*v66 != 0) {
                    // 0x180214ea5
                    v80 = __asm_xorps(v77, v77);
                    *(int32_t *)(v4 + 0x5fd0) = (int32_t)__asm_movss(v80);
                    *(char *)(v4 + 0x5fd4) = 0;
                }
                // 0x180214ec1
                function_1801a4610((int32_t)((a8 & 0x100000) != 0));
                int64_t v81; // 0x1802146d0
                if ((a8 & 0x100000) != 0) {
                    // 0x180214edc
                    v81 = __asm_movss(__asm_xorps(v80, g48));
                } else {
                    // 0x180214ec8
                    v81 = __asm_movss(v80);
                }
                // 0x180214ef5
                v69 = __asm_movss(__asm_movss_31((int32_t)v81));
                int128_t v82 = __asm_movss_31(v69); // 0x180214f04
                v70 = *(int32_t *)&g30;
                __asm_ucomiss(v82, v70);
                int32_t * v83 = (int32_t *)(v4 + 0x4bf0); // 0x180214f1e
                v71 = (int32_t)function_18018e690(*v83 != 3 ? 0x1000 : 641, v44) & 255;
                v72 = function_18018e690(*v83 != 3 ? 0x2000 : 642, v44);
                v59 = true;
                v74 = 0;
                v62 = v44;
                if ((v5 & -2) != 8) {
                    goto lab_0x180215002;
                } else {
                    // 0x180214fb4
                    v74 = function_1801e5e60(a7, 3);
                    v59 = v74 == 0;
                    v62 = 3;
                    if (v74 < 1) {
                        goto lab_0x180215002;
                    } else {
                        int128_t v84 = __asm_divss_38(__asm_movss_31(v69), *(int32_t *)&g45); // 0x180214fd2
                        int32_t v85 = __asm_movss(v84); // 0x180214fda
                        v61 = 3;
                        v64 = v85;
                        if (v71 != 0) {
                            int128_t v86 = __asm_divss_38(__asm_movss_31(v85), 0x41200000); // 0x180214fef
                            v61 = 3;
                            v64 = __asm_movss(v86);
                        }
                        goto lab_0x180215093;
                    }
                }
            }
        } else {
            // 0x180214b89
            v55 = v4;
            if (*(char *)(v4 + 280) != 0) {
                // 0x180214bae
                v67 = v78;
                int64_t v87 = v4 + 272; // 0x180214bb3
                v55 = v87;
                int64_t v88 = __asm_movss(__asm_movss_31(*(int32_t *)(v87 + v12))); // 0x180214be6
                if (*(char *)(v4 + 0x40f0) == 0) {
                    // 0x180214e50
                    __asm_comiss(__asm_movss_31(v30), g30);
                    v63 = v67;
                    goto lab_0x180214e50_2;
                } else {
                    // 0x180214c03
                    __asm_movss(__asm_movss_31(v52));
                    int128_t v89 = __asm_movss_31(v53); // 0x180214c0f
                    int64_t v90 = __asm_movss(v89); // 0x180214c15
                    int32_t v91 = *(int32_t *)&v60; // 0x180214c3c
                    v55 = v3 & 0xffffffff;
                    function_18020e9a0(v5, v91, v7, v6, (int64_t)((a8 & 32) != 0), 0x100000000 * v90 / 0x100000000, (int64_t)&g1381);
                    int32_t v92 = __asm_movss(v89); // 0x180214c4a
                    int32_t v93 = *(int32_t *)&g40;
                    int32_t v94 = v92; // 0x180214c58
                    if ((a8 & 0x100000) != 0) {
                        // 0x180214c5a
                        v94 = __asm_movss(__asm_subss(__asm_movss_31(v93), v92));
                    }
                    // 0x180214c74
                    v68 = v88;
                    int128_t v95 = __asm_mulss(__asm_subss(__asm_movss_31(v51), v50), v94); // 0x180214c86
                    int128_t v96 = __asm_movaps(__asm_addss_34(__asm_movss_31(v50), v95)); // 0x180214c9c
                    int32_t v97 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v96))); // 0x180214cb1
                    int128_t v98 = __asm_subss_36(__asm_movss_31(v97), __asm_mulss(__asm_movss_31(v29), v33)); // 0x180214cd1
                    int128_t v99 = __asm_subss(__asm_movaps(v98), v93); // 0x180214cd8
                    __asm_comiss(__asm_movss_31(v68), v99);
                    v73 = v99;
                    if ((a8 & 0x100000) == 0) {
                        goto lab_0x180214d62;
                    } else {
                        int128_t v100 = __asm_addss_34(__asm_movss_31(v97), __asm_mulss(__asm_movss_31(v29), v33)); // 0x180214d05
                        v73 = __asm_addss(__asm_movaps(v100), v93);
                        __asm_comiss(v73, (int128_t)v68);
                        if ((v5 & -2) != 8) {
                            goto lab_0x180214d62;
                        } else {
                            // 0x180214d45
                            v75 = false;
                            v65 = __asm_movss(__asm_subss(__asm_movss_31(v68), v97));
                            goto lab_0x180214d6e;
                        }
                    }
                }
            } else {
                // 0x180214ba3
                function_18019e9f0(v4, v44);
                result = 0;
                v57 = false;
                v58 = true;
                goto lab_0x1802155a8;
            }
        }
    }
  lab_0x1802155a8:;
    int32_t v101 = *(int32_t *)&g40; // 0x1802155a8
    __asm_comiss(__asm_movss_31(v101), (int128_t)v18);
    if (!v57 && !v58) {
        int32_t * v102 = (int32_t *)v55; // bp-72, 0x1802155c2
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v102, 16);
        // 0x1802158d5
        return result;
    }
    // 0x180215609
    __asm_movss(__asm_movss_31(v52));
    int128_t v103 = __asm_movss_31(v53); // 0x180215615
    int64_t v104 = __asm_movss(v103); // 0x18021561b
    int32_t v105 = *(int32_t *)&v60; // 0x180215642
    function_18020e9a0(v5, v105, v7, v6, (int64_t)((a8 & 32) != 0), 0x100000000 * v104 / 0x100000000, (int64_t)&g1381);
    int32_t v106 = __asm_movss(v103); // 0x180215650
    int32_t v107 = v106; // 0x18021565e
    if ((a8 & 0x100000) != 0) {
        // 0x180215660
        v107 = __asm_movss(__asm_subss(__asm_movss_31(v101), v106));
    }
    int128_t v108 = __asm_mulss(__asm_subss(__asm_movss_31(v51), v50), v107); // 0x18021568c
    int128_t v109 = __asm_movaps(__asm_addss_34(__asm_movss_31(v50), v108)); // 0x1802156a2
    int32_t v110 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v109))); // 0x1802156b7
    if ((a8 & 0x100000) != 0) {
        int64_t v111 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)v11), v10)); // 0x1802157e8
        int128_t v112 = __asm_movss_31(*(int32_t *)&v55); // 0x1802157f9
        int64_t v113 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v112, v10)))); // 0x18021582f
        int64_t v114; // bp-40, 0x1802146d0
        *(int32_t *)&v114 = (int32_t)v113;
        int64_t v115 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v110), __asm_mulss(__asm_movss_31(v29), v33)))); // 0x180215859
        *(int32_t *)((int64_t)&v114 | 4) = (int32_t)v115;
        int64_t v116 = __asm_movss(__asm_movss_31((int32_t)v111)); // 0x18021587f
        int64_t v117; // bp-32, 0x1802146d0
        *(int32_t *)&v117 = (int32_t)v116;
        int64_t v118 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v110), __asm_mulss(__asm_movss_31(v29), v33)))); // 0x1802158a9
        *(int32_t *)((int64_t)&v117 | 4) = (int32_t)v118;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v114, 16);
    } else {
        int64_t v119 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 12)), v10)); // 0x1802156e0
        int64_t v120 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a1 + 4)), v10)); // 0x1802156fe
        int128_t v121 = __asm_subss_36(__asm_movss_31(v110), __asm_mulss(__asm_movss_31(v29), v33)); // 0x18021572e
        int64_t v122; // bp-56, 0x1802146d0
        *(int32_t *)&v122 = (int32_t)__asm_movss(__asm_movaps(v121));
        int64_t v123 = __asm_movss(__asm_movss_31((int32_t)v120)); // 0x180215752
        *(int32_t *)((int64_t)&v122 | 4) = (int32_t)v123;
        int128_t v124 = __asm_addss_34(__asm_movss_31(v110), __asm_mulss(__asm_movss_31(v29), v33)); // 0x18021577e
        int64_t v125; // bp-48, 0x1802146d0
        *(int32_t *)&v125 = (int32_t)__asm_movss(__asm_movaps(v124));
        int64_t v126 = __asm_movss(__asm_movss_31((int32_t)v119)); // 0x1802157a2
        *(int32_t *)((int64_t)&v125 | 4) = (int32_t)v126;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v122, 16);
    }
    // 0x1802158d5
    return result;
  lab_0x180215002:;
    int128_t v127 = v69; // 0x180214efe
    char v128 = llvm_ctpop_i8((char)v74); // 0x180214fc2
    __asm_comiss(__asm_movss_31(v9), g251);
    int32_t v129 = *(int32_t *)&g45; // 0x180215011
    __asm_comiss(__asm_movss_31(v129), (int128_t)v9);
    int128_t v130 = __asm_movss_31(v9); // 0x180215020
    __asm_ucomiss(v130, v70);
    int64_t v131; // 0x1802146d0
    if (!v59 || (v128 & 1) == 0) {
        // 0x18021503a
        __asm_comiss(__asm_xorps(v130, v130), v127);
        if (v59) {
            // 0x180215057
            v131 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            goto lab_0x180215068;
        } else {
            goto lab_0x180215044;
        }
    } else {
        if (v71 == 0) {
            int128_t v132 = __asm_divss_38(__asm_movss_31(v69), v129); // 0x180215085
            v61 = v62;
            v64 = __asm_movss(v132);
            goto lab_0x180215093;
        } else {
            // 0x180215044
            __asm_comiss(__asm_xorps(v130, v130), v127);
            goto lab_0x180215044;
        }
    }
  lab_0x180214e50_2:;
    int32_t v133 = v63; // 0x180214e55
    if ((a8 & 0x100000) != 0) {
        int128_t v134 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v63); // 0x180214e5f
        v133 = __asm_movss(v134);
    }
    // 0x1802154ee
    result = 0;
    v57 = false;
    v58 = true;
    if ((a8 & 0x200000) == 0 == (*(int32_t *)(v4 + 0x4a44) & 2048) == 0) {
        // 0x1802154fb
        __asm_movss(__asm_movss_31(v52));
        __asm_movss(__asm_movss_31(v53));
        __asm_movss_31(v133);
        int32_t v135 = function_180211a80(v5); // 0x18021553e
        if ((v5 & -2) == 8) {
            // 0x18021554e
            if ((a8 & 64) == 0) {
                int32_t v136 = function_18020e2f0(a7, v5, v135); // 0x180215578
            }
        }
        int64_t v137 = v135; // 0x180215587
        v55 = v137;
        uint32_t v138 = *(int32_t *)&v60; // 0x18021558e
        result = 0;
        v57 = v138 < v135;
        v58 = true;
        if (v138 != v135) {
            // 0x180215592
            v55 = v137;
            *a4 = v135;
            result = 1;
            v57 = v138 < v135;
            v58 = false;
        }
    }
    goto lab_0x1802155a8;
  lab_0x180214d62:;
    int128_t v139 = v73;
    v75 = true;
    v65 = __asm_movss(__asm_xorps(v139, v139));
    goto lab_0x180214d6e;
  lab_0x180215044:
    // 0x180215044
    v131 = __asm_movss(__asm_movss_31(-0x40800000));
    goto lab_0x180215068;
  lab_0x180215093:;
    int32_t v148 = v64; // 0x18021509a
    if ((v72 & 255) != 0) {
        int128_t v149 = __asm_mulss(__asm_movss_31(v64), 0x41200000); // 0x1802150a2
        v148 = __asm_movss(v149);
    }
    int32_t * v150 = (int32_t *)(v4 + 0x5fd0); // 0x1802150b5
    *v150 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v150), v148));
    char * v151 = (char *)(v4 + 0x5fd4); // 0x1802150d5
    *v151 = 1;
    int64_t v152 = __asm_movss(__asm_movss_31(*v150)); // 0x1802150e9
    v55 = v54;
    if (*(int32_t *)(v4 + 0x4bc4) != a2) {
        goto lab_0x18021511e;
    } else {
        // 0x180215103
        if (*v66 != 0) {
            goto lab_0x18021511e;
        } else {
            // 0x180215113
            function_18019e9f0(v54, v61);
            result = 0;
            v57 = false;
            v58 = true;
            goto lab_0x1802155a8;
        }
    }
  lab_0x180214d6e:;
    int64_t v140 = __asm_movss(__asm_movss_31((int32_t)v65)); // 0x180214d7c
    int32_t * v141 = (int32_t *)(v4 + 0x5fcc);
    *v141 = (int32_t)v140;
    __asm_comiss(__asm_movss_31(v30), g30);
    v63 = v67;
    if (!v75) {
        int128_t v142 = __asm_divss_38(__asm_subss(__asm_subss(__asm_movss_31(v68), *v141), v50), v30); // 0x180214db9
        int64_t v143 = __asm_movss(v142); // 0x180214dc2
        int128_t v144 = __asm_xorps(v142, v142); // 0x180214dcb
        __asm_comiss(v144, (int128_t)(int32_t)v143);
        int128_t v145 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v144, v144))); // 0x180214e2f
        int128_t v146 = __asm_movss_31((int32_t)__asm_movss(v145)); // 0x180214e41
        v63 = __asm_movss(v146);
    }
    goto lab_0x180214e50_2;
  lab_0x180215068:;
    int128_t v147 = __asm_divss_38(__asm_movss_31((int32_t)v131), v9); // 0x180215071
    v61 = v62;
    v64 = __asm_movss(v147);
    goto lab_0x180215093;
  lab_0x18021511e:
    // 0x18021511e
    result = 0;
    v57 = false;
    v58 = true;
    if (*v151 != 0) {
        // 0x180215132
        __asm_movss(__asm_movss_31(v52));
        int128_t v153 = __asm_movss_31(v53); // 0x18021513e
        int64_t v154 = __asm_movss(v153); // 0x180215144
        int32_t v155 = *(int32_t *)&v60; // 0x18021516b
        v55 = v3 & 0xffffffff;
        function_18020e9a0(v5, v155, v7, v6, (int64_t)((a8 & 32) != 0), 0x100000000 * v154 / 0x100000000, (int64_t)&g1381);
        __asm_comiss(__asm_movss_31((int32_t)__asm_movss(v153)), g40);
        int128_t v156 = __asm_movss_31((int32_t)v152); // 0x18021518e
        __asm_comiss(v156, g30);
        *v150 = (int32_t)__asm_movss(__asm_xorps(v156, v156));
        *v151 = 0;
        result = 0;
        v57 = false;
        v58 = true;
    }
    goto lab_0x1802155a8;
}

// Address range: 0x1802158f0 - 0x180216b07
int64_t function_1802158f0(int64_t a1, uint32_t a2, int64_t a3, int32_t * a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = 0x100000000 * a5 / 0x100000000;
    int64_t v2 = 0x100000000 * a6 / 0x100000000;
    int64_t v3 = 0x100000000 * a3 / 0x100000000; // 0x1802158f5
    int64_t v4 = (int64_t)g1201; // 0x18021590c
    int32_t v5 = v3; // 0x180215981
    uint32_t v6 = (int32_t)v2; // 0x1802159aa
    uint32_t v7 = (int32_t)v1; // 0x1802159b1
    int128_t v8 = __asm_cvtsi2ss_37((v7 >= v6 ? v1 - v2 : v2 - v1) & 0xffffffff); // 0x1802159f5
    int32_t v9 = __asm_movss(v8); // 0x1802159fa
    int32_t v10 = *(int32_t *)&g41; // 0x180215a00
    __asm_movss(__asm_movss_31(v10));
    int64_t v11 = a1 + 8; // 0x180215a19
    int64_t v12 = 4 * (int64_t)((a8 & 0x100000) != 0); // 0x180215a42
    int32_t * v13 = (int32_t *)(v12 + a1); // 0x180215a42
    int64_t v14 = __asm_movss(__asm_movss_31(*v13)); // 0x180215a47
    int32_t * v15 = (int32_t *)(v12 + v11); // 0x180215a5d
    int64_t v16 = __asm_movss(__asm_movss_31(*v15)); // 0x180215a62
    int128_t v17 = __asm_subss_36(__asm_movss_31((int32_t)v16), __asm_movss_31((int32_t)v14)); // 0x180215a7d
    int32_t v18 = __asm_movss(__asm_subss(__asm_movaps(v17), 0x40800000)); // 0x180215a8c
    int32_t * v19 = (int32_t *)(v4 + 0x397c); // 0x180215a9a
    int64_t v20 = __asm_movss(__asm_movss_31(*v19)); // 0x180215aac
    if ((v5 & -2) != 8) {
        // 0x180215ab2
        __asm_comiss(__asm_movss_31(v9), g30);
        int64_t v21 = __asm_movss(__asm_movss_31(*v19)); // 0x180215ad2
        int128_t v22 = __asm_addss(__asm_movss_31(v9), *(int32_t *)&g40); // 0x180215ae1
        int32_t v23 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v18), v22))); // 0x180215af6
        __asm_comiss(__asm_movss_31(v23), (int128_t)(int32_t)v21);
        int128_t v24 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v23))); // 0x180215b38
        v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24)));
    }
    int32_t v25 = v20;
    __asm_comiss(__asm_movss_31(v18), (int128_t)v25);
    int64_t v26; // 0x1802158f0
    if ((v5 & -2) != 8) {
        // 0x180215b77
        v26 = __asm_movss(__asm_movss_31(v18));
    } else {
        // 0x180215b66
        v26 = __asm_movss(__asm_movss_31(v25));
    }
    int64_t v27 = a2;
    int128_t v28 = __asm_movss_31((int32_t)v26); // 0x180215b86
    int32_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v28))); // 0x180215ba1
    int32_t v30 = __asm_movss(__asm_subss(__asm_movss_31(v18), v29)); // 0x180215bb3
    int128_t v31 = __asm_addss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v13))), v10); // 0x180215bf0
    int128_t v32 = __asm_movss_31(v29); // 0x180215bf8
    int32_t v33 = *(int32_t *)&g38;
    int64_t v34 = __asm_movss(__asm_addss_34(v31, __asm_mulss(v32, v33))); // 0x180215c0a
    int128_t v35 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v15))), v10); // 0x180215c4b
    int128_t v36 = __asm_subss_36(v35, __asm_mulss(__asm_movss_31(v29), v33)); // 0x180215c61
    int64_t v37 = __asm_movss(v36); // 0x180215c65
    int128_t v38 = __asm_xorps(v36, v36); // 0x180215c6e
    int64_t v39 = __asm_movss(v38); // 0x180215c71
    int128_t v40 = __asm_xorps(v38, v38); // 0x180215c77
    int64_t v41 = v39; // 0x180215c87
    int64_t v42 = __asm_movss(v40); // 0x180215c87
    int128_t v43 = v40; // 0x180215c87
    int64_t v44 = v27; // 0x180215c87
    if ((a8 & 32) != 0) {
        // 0x180215c8d
        v44 = v27;
        int32_t v45 = 1; // 0x180215c94
        if ((v5 & -2) == 8) {
            // 0x180215c96
            v44 = 3;
            v45 = function_1801e5e60(a7, 3);
        }
        int128_t v46 = __asm_movaps(__asm_cvtsi2ss(v45)); // 0x180215cd3
        int128_t v47 = __asm_movss_31(*(int32_t *)&g35); // 0x180215cd6
        function_180272490(v47, v46);
        v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v47)));
        __asm_comiss(__asm_movss_31(v30), g40);
        int64_t v48 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v30)))); // 0x180215d3b
        int128_t v49 = __asm_mulss(__asm_movss_31(*(int32_t *)(v4 + 0x3984)), v33); // 0x180215d54
        v43 = __asm_divss(v49, __asm_movss_31((int32_t)v48));
        v42 = __asm_movss(v43);
    }
    int32_t v50 = v34; // 0x180215c0a
    int32_t v51 = v37; // 0x180215c65
    int32_t v52 = v42;
    int32_t v53 = v41;
    int64_t v54 = a2; // 0x180215d79
    int64_t v55 = v54; // 0x180215d79
    uint32_t v56 = *(int32_t *)(v4 + 0x40e4); // 0x180215d80
    int64_t result = 0; // 0x180215d86
    bool v57 = v56 < a2; // 0x180215d86
    bool v58 = false; // 0x180215d86
    bool v59; // 0x1802158f0
    int64_t v60; // 0x1802158f0
    int64_t v61; // 0x1802158f0
    int64_t v62; // 0x1802158f0
    int32_t v63; // 0x1802158f0
    int32_t v64; // 0x1802158f0
    int64_t v65; // 0x1802158f0
    char * v66; // 0x1802160bd
    int32_t v67; // 0x180215d94
    int32_t v68; // 0x180215e09
    int32_t v69; // 0x180216121
    int32_t v70; // 0x18021612d
    int32_t v71; // 0x1802158f0
    int64_t v72; // 0x18021619f
    int128_t v73; // 0x180215f2f
    int32_t v74; // 0x1802161c3
    bool v75; // 0x1802158f0
    if (v56 != a2) {
        goto lab_0x1802167cb;
    } else {
        int128_t v76 = v43;
        int128_t v77 = __asm_xorps(v76, v76); // 0x180215d91
        int64_t v78 = __asm_movss(v77); // 0x180215d94
        int32_t v79 = *(int32_t *)(v4 + 0x4110); // 0x180215d9f
        if (v79 != 1) {
            // 0x180216098
            result = 0;
            v57 = false;
            v58 = true;
            if (v79 != 2 == (v79 != 3)) {
                goto lab_0x1802167cb;
            } else {
                // 0x1802160b8
                v66 = (char *)(v4 + 0x40f0);
                int128_t v80 = v77; // 0x1802160c6
                if (*v66 != 0) {
                    // 0x1802160c8
                    v80 = __asm_xorps(v77, v77);
                    *(int32_t *)(v4 + 0x5fd0) = (int32_t)__asm_movss(v80);
                    *(char *)(v4 + 0x5fd4) = 0;
                }
                // 0x1802160e4
                function_1801a4610((int32_t)((a8 & 0x100000) != 0));
                int64_t v81; // 0x1802158f0
                if ((a8 & 0x100000) != 0) {
                    // 0x1802160ff
                    v81 = __asm_movss(__asm_xorps(v80, g48));
                } else {
                    // 0x1802160eb
                    v81 = __asm_movss(v80);
                }
                // 0x180216118
                v69 = __asm_movss(__asm_movss_31((int32_t)v81));
                int128_t v82 = __asm_movss_31(v69); // 0x180216127
                v70 = *(int32_t *)&g30;
                __asm_ucomiss(v82, v70);
                int32_t * v83 = (int32_t *)(v4 + 0x4bf0); // 0x180216141
                v71 = (int32_t)function_18018e690(*v83 != 3 ? 0x1000 : 641, v44) & 255;
                v72 = function_18018e690(*v83 != 3 ? 0x2000 : 642, v44);
                v59 = true;
                v74 = 0;
                v62 = v44;
                if ((v5 & -2) != 8) {
                    goto lab_0x180216225;
                } else {
                    // 0x1802161d7
                    v74 = function_1801e5e60(a7, 3);
                    v59 = v74 == 0;
                    v62 = 3;
                    if (v74 < 1) {
                        goto lab_0x180216225;
                    } else {
                        int128_t v84 = __asm_divss_38(__asm_movss_31(v69), *(int32_t *)&g45); // 0x1802161f5
                        int32_t v85 = __asm_movss(v84); // 0x1802161fd
                        v61 = 3;
                        v64 = v85;
                        if (v71 != 0) {
                            int128_t v86 = __asm_divss_38(__asm_movss_31(v85), 0x41200000); // 0x180216212
                            v61 = 3;
                            v64 = __asm_movss(v86);
                        }
                        goto lab_0x1802162b6;
                    }
                }
            }
        } else {
            // 0x180215dac
            v55 = v4;
            if (*(char *)(v4 + 280) != 0) {
                // 0x180215dd1
                v67 = v78;
                int64_t v87 = v4 + 272; // 0x180215dd6
                v55 = v87;
                int64_t v88 = __asm_movss(__asm_movss_31(*(int32_t *)(v87 + v12))); // 0x180215e09
                if (*(char *)(v4 + 0x40f0) == 0) {
                    // 0x180216073
                    __asm_comiss(__asm_movss_31(v30), g30);
                    v63 = v67;
                    goto lab_0x180216073_2;
                } else {
                    // 0x180215e26
                    __asm_movss(__asm_movss_31(v52));
                    int128_t v89 = __asm_movss_31(v53); // 0x180215e32
                    int64_t v90 = __asm_movss(v89); // 0x180215e38
                    int32_t v91 = *(int32_t *)&v60; // 0x180215e5f
                    v55 = v3 & 0xffffffff;
                    function_18020f0e0(v5, v91, v7, v6, (int64_t)((a8 & 32) != 0), 0x100000000 * v90 / 0x100000000, (int64_t)&g1381);
                    int32_t v92 = __asm_movss(v89); // 0x180215e6d
                    int32_t v93 = *(int32_t *)&g40;
                    int32_t v94 = v92; // 0x180215e7b
                    if ((a8 & 0x100000) != 0) {
                        // 0x180215e7d
                        v94 = __asm_movss(__asm_subss(__asm_movss_31(v93), v92));
                    }
                    // 0x180215e97
                    v68 = v88;
                    int128_t v95 = __asm_mulss(__asm_subss(__asm_movss_31(v51), v50), v94); // 0x180215ea9
                    int128_t v96 = __asm_movaps(__asm_addss_34(__asm_movss_31(v50), v95)); // 0x180215ebf
                    int32_t v97 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v96))); // 0x180215ed4
                    int128_t v98 = __asm_subss_36(__asm_movss_31(v97), __asm_mulss(__asm_movss_31(v29), v33)); // 0x180215ef4
                    int128_t v99 = __asm_subss(__asm_movaps(v98), v93); // 0x180215efb
                    __asm_comiss(__asm_movss_31(v68), v99);
                    v73 = v99;
                    if ((a8 & 0x100000) == 0) {
                        goto lab_0x180215f85;
                    } else {
                        int128_t v100 = __asm_addss_34(__asm_movss_31(v97), __asm_mulss(__asm_movss_31(v29), v33)); // 0x180215f28
                        v73 = __asm_addss(__asm_movaps(v100), v93);
                        __asm_comiss(v73, (int128_t)v68);
                        if ((v5 & -2) != 8) {
                            goto lab_0x180215f85;
                        } else {
                            // 0x180215f68
                            v75 = false;
                            v65 = __asm_movss(__asm_subss(__asm_movss_31(v68), v97));
                            goto lab_0x180215f91;
                        }
                    }
                }
            } else {
                // 0x180215dc6
                function_18019e9f0(v4, v44);
                result = 0;
                v57 = false;
                v58 = true;
                goto lab_0x1802167cb;
            }
        }
    }
  lab_0x1802167cb:;
    int32_t v101 = *(int32_t *)&g40; // 0x1802167cb
    __asm_comiss(__asm_movss_31(v101), (int128_t)v18);
    if (!v57 && !v58) {
        int32_t * v102 = (int32_t *)v55; // bp-72, 0x1802167e5
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v102, 16);
        // 0x180216af8
        return result;
    }
    // 0x18021682c
    __asm_movss(__asm_movss_31(v52));
    int128_t v103 = __asm_movss_31(v53); // 0x180216838
    int64_t v104 = __asm_movss(v103); // 0x18021683e
    int32_t v105 = *(int32_t *)&v60; // 0x180216865
    function_18020f0e0(v5, v105, v7, v6, (int64_t)((a8 & 32) != 0), 0x100000000 * v104 / 0x100000000, (int64_t)&g1381);
    int32_t v106 = __asm_movss(v103); // 0x180216873
    int32_t v107 = v106; // 0x180216881
    if ((a8 & 0x100000) != 0) {
        // 0x180216883
        v107 = __asm_movss(__asm_subss(__asm_movss_31(v101), v106));
    }
    int128_t v108 = __asm_mulss(__asm_subss(__asm_movss_31(v51), v50), v107); // 0x1802168af
    int128_t v109 = __asm_movaps(__asm_addss_34(__asm_movss_31(v50), v108)); // 0x1802168c5
    int32_t v110 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v109))); // 0x1802168da
    if ((a8 & 0x100000) != 0) {
        int64_t v111 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)v11), v10)); // 0x180216a0b
        int128_t v112 = __asm_movss_31(*(int32_t *)&v55); // 0x180216a1c
        int64_t v113 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v112, v10)))); // 0x180216a52
        int64_t v114; // bp-40, 0x1802158f0
        *(int32_t *)&v114 = (int32_t)v113;
        int64_t v115 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v110), __asm_mulss(__asm_movss_31(v29), v33)))); // 0x180216a7c
        *(int32_t *)((int64_t)&v114 | 4) = (int32_t)v115;
        int64_t v116 = __asm_movss(__asm_movss_31((int32_t)v111)); // 0x180216aa2
        int64_t v117; // bp-32, 0x1802158f0
        *(int32_t *)&v117 = (int32_t)v116;
        int64_t v118 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v110), __asm_mulss(__asm_movss_31(v29), v33)))); // 0x180216acc
        *(int32_t *)((int64_t)&v117 | 4) = (int32_t)v118;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v114, 16);
    } else {
        int64_t v119 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 12)), v10)); // 0x180216903
        int64_t v120 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a1 + 4)), v10)); // 0x180216921
        int128_t v121 = __asm_subss_36(__asm_movss_31(v110), __asm_mulss(__asm_movss_31(v29), v33)); // 0x180216951
        int64_t v122; // bp-56, 0x1802158f0
        *(int32_t *)&v122 = (int32_t)__asm_movss(__asm_movaps(v121));
        int64_t v123 = __asm_movss(__asm_movss_31((int32_t)v120)); // 0x180216975
        *(int32_t *)((int64_t)&v122 | 4) = (int32_t)v123;
        int128_t v124 = __asm_addss_34(__asm_movss_31(v110), __asm_mulss(__asm_movss_31(v29), v33)); // 0x1802169a1
        int64_t v125; // bp-48, 0x1802158f0
        *(int32_t *)&v125 = (int32_t)__asm_movss(__asm_movaps(v124));
        int64_t v126 = __asm_movss(__asm_movss_31((int32_t)v119)); // 0x1802169c5
        *(int32_t *)((int64_t)&v125 | 4) = (int32_t)v126;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v122, 16);
    }
    // 0x180216af8
    return result;
  lab_0x180216225:;
    int128_t v127 = v69; // 0x180216121
    char v128 = llvm_ctpop_i8((char)v74); // 0x1802161e5
    __asm_comiss(__asm_movss_31(v9), g251);
    int32_t v129 = *(int32_t *)&g45; // 0x180216234
    __asm_comiss(__asm_movss_31(v129), (int128_t)v9);
    int128_t v130 = __asm_movss_31(v9); // 0x180216243
    __asm_ucomiss(v130, v70);
    int64_t v131; // 0x1802158f0
    if (!v59 || (v128 & 1) == 0) {
        // 0x18021625d
        __asm_comiss(__asm_xorps(v130, v130), v127);
        if (v59) {
            // 0x18021627a
            v131 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            goto lab_0x18021628b;
        } else {
            goto lab_0x180216267;
        }
    } else {
        if (v71 == 0) {
            int128_t v132 = __asm_divss_38(__asm_movss_31(v69), v129); // 0x1802162a8
            v61 = v62;
            v64 = __asm_movss(v132);
            goto lab_0x1802162b6;
        } else {
            // 0x180216267
            __asm_comiss(__asm_xorps(v130, v130), v127);
            goto lab_0x180216267;
        }
    }
  lab_0x180216073_2:;
    int32_t v133 = v63; // 0x180216078
    if ((a8 & 0x100000) != 0) {
        int128_t v134 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v63); // 0x180216082
        v133 = __asm_movss(v134);
    }
    // 0x180216711
    result = 0;
    v57 = false;
    v58 = true;
    if ((a8 & 0x200000) == 0 == (*(int32_t *)(v4 + 0x4a44) & 2048) == 0) {
        // 0x18021671e
        __asm_movss(__asm_movss_31(v52));
        __asm_movss(__asm_movss_31(v53));
        __asm_movss_31(v133);
        int32_t v135 = function_180212140(v5); // 0x180216761
        if ((v5 & -2) == 8) {
            // 0x180216771
            if ((a8 & 64) == 0) {
                int32_t v136 = function_18020e400(a7, v5, v135); // 0x18021679b
            }
        }
        int64_t v137 = v135; // 0x1802167aa
        v55 = v137;
        uint32_t v138 = *(int32_t *)&v60; // 0x1802167b1
        result = 0;
        v57 = v138 < v135;
        v58 = true;
        if (v138 != v135) {
            // 0x1802167b5
            v55 = v137;
            *a4 = v135;
            result = 1;
            v57 = v138 < v135;
            v58 = false;
        }
    }
    goto lab_0x1802167cb;
  lab_0x180215f85:;
    int128_t v139 = v73;
    v75 = true;
    v65 = __asm_movss(__asm_xorps(v139, v139));
    goto lab_0x180215f91;
  lab_0x180216267:
    // 0x180216267
    v131 = __asm_movss(__asm_movss_31(-0x40800000));
    goto lab_0x18021628b;
  lab_0x1802162b6:;
    int32_t v148 = v64; // 0x1802162bd
    if ((v72 & 255) != 0) {
        int128_t v149 = __asm_mulss(__asm_movss_31(v64), 0x41200000); // 0x1802162c5
        v148 = __asm_movss(v149);
    }
    int32_t * v150 = (int32_t *)(v4 + 0x5fd0); // 0x1802162d8
    *v150 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v150), v148));
    char * v151 = (char *)(v4 + 0x5fd4); // 0x1802162f8
    *v151 = 1;
    int64_t v152 = __asm_movss(__asm_movss_31(*v150)); // 0x18021630c
    v55 = v54;
    if (*(int32_t *)(v4 + 0x4bc4) != a2) {
        goto lab_0x180216341;
    } else {
        // 0x180216326
        if (*v66 != 0) {
            goto lab_0x180216341;
        } else {
            // 0x180216336
            function_18019e9f0(v54, v61);
            result = 0;
            v57 = false;
            v58 = true;
            goto lab_0x1802167cb;
        }
    }
  lab_0x180215f91:;
    int64_t v140 = __asm_movss(__asm_movss_31((int32_t)v65)); // 0x180215f9f
    int32_t * v141 = (int32_t *)(v4 + 0x5fcc);
    *v141 = (int32_t)v140;
    __asm_comiss(__asm_movss_31(v30), g30);
    v63 = v67;
    if (!v75) {
        int128_t v142 = __asm_divss_38(__asm_subss(__asm_subss(__asm_movss_31(v68), *v141), v50), v30); // 0x180215fdc
        int64_t v143 = __asm_movss(v142); // 0x180215fe5
        int128_t v144 = __asm_xorps(v142, v142); // 0x180215fee
        __asm_comiss(v144, (int128_t)(int32_t)v143);
        int128_t v145 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v144, v144))); // 0x180216052
        int128_t v146 = __asm_movss_31((int32_t)__asm_movss(v145)); // 0x180216064
        v63 = __asm_movss(v146);
    }
    goto lab_0x180216073_2;
  lab_0x18021628b:;
    int128_t v147 = __asm_divss_38(__asm_movss_31((int32_t)v131), v9); // 0x180216294
    v61 = v62;
    v64 = __asm_movss(v147);
    goto lab_0x1802162b6;
  lab_0x180216341:
    // 0x180216341
    result = 0;
    v57 = false;
    v58 = true;
    if (*v151 != 0) {
        // 0x180216355
        __asm_movss(__asm_movss_31(v52));
        int128_t v153 = __asm_movss_31(v53); // 0x180216361
        int64_t v154 = __asm_movss(v153); // 0x180216367
        int32_t v155 = *(int32_t *)&v60; // 0x18021638e
        v55 = v3 & 0xffffffff;
        function_18020f0e0(v5, v155, v7, v6, (int64_t)((a8 & 32) != 0), 0x100000000 * v154 / 0x100000000, (int64_t)&g1381);
        __asm_comiss(__asm_movss_31((int32_t)__asm_movss(v153)), g40);
        int128_t v156 = __asm_movss_31((int32_t)v152); // 0x1802163b1
        __asm_comiss(v156, g30);
        *v150 = (int32_t)__asm_movss(__asm_xorps(v156, v156));
        *v151 = 0;
        result = 0;
        v57 = false;
        v58 = true;
    }
    goto lab_0x1802167cb;
}

// Address range: 0x180216b10 - 0x180217d52
int64_t function_180216b10(int64_t a1, uint32_t a2, uint32_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    bool v1 = a3 < 8; // 0x180216ba9
    bool v2; // 0x180216b10
    int32_t v3; // 0x180216b10
    bool v4; // 0x180216b10
    if (a3 == 8) {
        goto lab_0x180216bbc;
    } else {
        // 0x180216bab
        v1 = a3 < 9;
        v2 = a3 < 9;
        v4 = false;
        v3 = 0;
        if (a3 == 9) {
            goto lab_0x180216bbc;
        } else {
            goto lab_0x180216bc1;
        }
    }
  lab_0x180216bbc:
    // 0x180216bbc
    v2 = v1;
    v4 = true;
    v3 = 1;
    goto lab_0x180216bc1;
  lab_0x180216bc1:;
    int32_t v5 = a6; // 0x180216bca
    __asm_comiss(__asm_movss_31(v5), (int128_t)a5);
    int64_t v6; // 0x180216b10
    if (v2 || v4) {
        // 0x180216bfa
        v6 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)a5), v5));
    } else {
        // 0x180216bdd
        v6 = __asm_movss(__asm_subss(__asm_movss_31(v5), (int32_t)a5));
    }
    int64_t v7 = (int64_t)g1201; // 0x180216b2c
    int32_t v8 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x180216c1e
    int32_t v9 = *(int32_t *)&g41; // 0x180216c24
    __asm_movss(__asm_movss_31(v9));
    int64_t v10 = a1 + 8; // 0x180216c3d
    int64_t v11 = 4 * (int64_t)((a8 & 0x100000) != 0); // 0x180216c66
    int32_t * v12 = (int32_t *)(v11 + a1); // 0x180216c66
    int64_t v13 = __asm_movss(__asm_movss_31(*v12)); // 0x180216c6b
    int32_t * v14 = (int32_t *)(v11 + v10); // 0x180216c81
    int64_t v15 = __asm_movss(__asm_movss_31(*v14)); // 0x180216c86
    int128_t v16 = __asm_subss_36(__asm_movss_31((int32_t)v15), __asm_movss_31((int32_t)v13)); // 0x180216ca1
    int32_t v17 = __asm_movss(__asm_subss(__asm_movaps(v16), 0x40800000)); // 0x180216cb0
    int32_t * v18 = (int32_t *)(v7 + 0x397c); // 0x180216cbe
    int64_t v19 = __asm_movss(__asm_movss_31(*v18)); // 0x180216cd0
    if (v3 == 0) {
        // 0x180216cd6
        __asm_comiss(__asm_movss_31(v8), g30);
        int64_t v20 = __asm_movss(__asm_movss_31(*v18)); // 0x180216cf6
        int128_t v21 = __asm_addss(__asm_movss_31(v8), *(int32_t *)&g40); // 0x180216d05
        int32_t v22 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v17), v21))); // 0x180216d1a
        __asm_comiss(__asm_movss_31(v22), (int128_t)(int32_t)v20);
        int128_t v23 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v22))); // 0x180216d5c
        v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v23)));
    }
    int32_t v24 = v19;
    __asm_comiss(__asm_movss_31(v17), (int128_t)v24);
    int64_t v25; // 0x180216b10
    if (v3 == 0) {
        // 0x180216d9b
        v25 = __asm_movss(__asm_movss_31(v17));
    } else {
        // 0x180216d8a
        v25 = __asm_movss(__asm_movss_31(v24));
    }
    int64_t v26 = a2;
    int128_t v27 = __asm_movss_31((int32_t)v25); // 0x180216daa
    int32_t v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v27))); // 0x180216dc5
    int32_t v29 = __asm_movss(__asm_subss(__asm_movss_31(v17), v28)); // 0x180216dd7
    int128_t v30 = __asm_addss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v12))), v9); // 0x180216e14
    int128_t v31 = __asm_movss_31(v28); // 0x180216e1c
    int32_t v32 = *(int32_t *)&g38;
    int64_t v33 = __asm_movss(__asm_addss_34(v30, __asm_mulss(v31, v32))); // 0x180216e2e
    int128_t v34 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v14))), v9); // 0x180216e6f
    int128_t v35 = __asm_subss_36(v34, __asm_mulss(__asm_movss_31(v28), v32)); // 0x180216e85
    int64_t v36 = __asm_movss(v35); // 0x180216e89
    int128_t v37 = __asm_xorps(v35, v35); // 0x180216e92
    int64_t v38 = __asm_movss(v37); // 0x180216e95
    int128_t v39 = __asm_xorps(v37, v37); // 0x180216e9b
    int64_t v40 = v38; // 0x180216eab
    int64_t v41 = __asm_movss(v39); // 0x180216eab
    int128_t v42 = v39; // 0x180216eab
    int64_t v43 = v26; // 0x180216eab
    if ((a8 & 32) != 0) {
        int64_t v44 = v26; // 0x180216eb8
        int32_t v45 = 1; // 0x180216eb8
        if (v3 != 0) {
            // 0x180216eba
            v44 = 3;
            v45 = function_1801e5e60(a7, 3);
        }
        int128_t v46 = __asm_movaps(__asm_cvtsi2ss(v45)); // 0x180216ef7
        int128_t v47 = __asm_movss_31(*(int32_t *)&g35); // 0x180216efa
        function_180272490(v47, v46);
        int64_t v48 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v47))); // 0x180216f19
        __asm_comiss(__asm_movss_31(v29), g40);
        int64_t v49 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v29)))); // 0x180216f5f
        int128_t v50 = __asm_mulss(__asm_movss_31(*(int32_t *)(v7 + 0x3984)), v32); // 0x180216f78
        int128_t v51 = __asm_divss(v50, __asm_movss_31((int32_t)v49)); // 0x180216f89
        v40 = v48;
        v41 = __asm_movss(v51);
        v42 = v51;
        v43 = v44;
    }
    int32_t v52 = v33; // 0x180216e2e
    int32_t v53 = v36; // 0x180216e89
    int32_t v54 = v41;
    int32_t v55 = v40;
    int64_t v56 = a2; // 0x180216f9d
    int64_t v57 = v56; // 0x180216f9d
    uint32_t v58 = *(int32_t *)(v7 + 0x40e4); // 0x180216fa4
    int64_t result = 0; // 0x180216faa
    bool v59 = v58 < a2; // 0x180216faa
    bool v60 = false; // 0x180216faa
    bool v61; // 0x180216b10
    int64_t v62; // 0x180216b10
    int64_t v63; // 0x180216b10
    int64_t v64; // 0x180216b10
    int32_t v65; // 0x180216b10
    int32_t v66; // 0x180216b10
    int64_t v67; // 0x180216b10
    char * v68; // 0x1802172e5
    int32_t v69; // 0x180216fb8
    int32_t v70; // 0x18021702d
    int32_t v71; // 0x180217349
    int32_t v72; // 0x180217355
    int32_t v73; // 0x180216b10
    int64_t v74; // 0x1802173c7
    int128_t v75; // 0x180217157
    int32_t v76; // 0x1802173eb
    bool v77; // 0x180216b10
    if (v58 != a2) {
        goto lab_0x180217a12;
    } else {
        int128_t v78 = v42;
        int128_t v79 = __asm_xorps(v78, v78); // 0x180216fb5
        int64_t v80 = __asm_movss(v79); // 0x180216fb8
        int32_t v81 = *(int32_t *)(v7 + 0x4110); // 0x180216fc3
        if (v81 != 1) {
            // 0x1802172c0
            result = 0;
            v59 = false;
            v60 = true;
            if (v81 != 2 == (v81 != 3)) {
                goto lab_0x180217a12;
            } else {
                // 0x1802172e0
                v68 = (char *)(v7 + 0x40f0);
                int128_t v82 = v79; // 0x1802172ee
                if (*v68 != 0) {
                    // 0x1802172f0
                    v82 = __asm_xorps(v79, v79);
                    *(int32_t *)(v7 + 0x5fd0) = (int32_t)__asm_movss(v82);
                    *(char *)(v7 + 0x5fd4) = 0;
                }
                // 0x18021730c
                function_1801a4610((int32_t)((a8 & 0x100000) != 0));
                int64_t v83; // 0x180216b10
                if ((a8 & 0x100000) != 0) {
                    // 0x180217327
                    v83 = __asm_movss(__asm_xorps(v82, g48));
                } else {
                    // 0x180217313
                    v83 = __asm_movss(v82);
                }
                // 0x180217340
                v71 = __asm_movss(__asm_movss_31((int32_t)v83));
                int128_t v84 = __asm_movss_31(v71); // 0x18021734f
                v72 = *(int32_t *)&g30;
                __asm_ucomiss(v84, v72);
                int32_t * v85 = (int32_t *)(v7 + 0x4bf0); // 0x180217369
                v73 = (int32_t)function_18018e690(*v85 != 3 ? 0x1000 : 641, v43) & 255;
                v74 = function_18018e690(*v85 != 3 ? 0x2000 : 642, v43);
                v61 = true;
                v76 = 0;
                v64 = v43;
                if (v3 == 0) {
                    goto lab_0x18021744d;
                } else {
                    // 0x1802173ff
                    v76 = function_1801e5e60(a7, 3);
                    v61 = v76 == 0;
                    v64 = 3;
                    if (v76 < 1) {
                        goto lab_0x18021744d;
                    } else {
                        int128_t v86 = __asm_divss_38(__asm_movss_31(v71), *(int32_t *)&g45); // 0x18021741d
                        int32_t v87 = __asm_movss(v86); // 0x180217425
                        v63 = 3;
                        v66 = v87;
                        if (v73 != 0) {
                            int128_t v88 = __asm_divss_38(__asm_movss_31(v87), 0x41200000); // 0x18021743a
                            v63 = 3;
                            v66 = __asm_movss(v88);
                        }
                        goto lab_0x1802174de;
                    }
                }
            }
        } else {
            // 0x180216fd0
            v57 = v7;
            if (*(char *)(v7 + 280) != 0) {
                // 0x180216ff5
                v69 = v80;
                int64_t v89 = v7 + 272; // 0x180216ffa
                v57 = v89;
                int64_t v90 = __asm_movss(__asm_movss_31(*(int32_t *)(v89 + v11))); // 0x18021702d
                if (*(char *)(v7 + 0x40f0) == 0) {
                    // 0x18021729b
                    __asm_comiss(__asm_movss_31(v29), g30);
                    v65 = v69;
                    goto lab_0x18021729b_2;
                } else {
                    // 0x18021704a
                    __asm_movss(__asm_movss_31(v54));
                    int128_t v91 = __asm_movss_31(v55); // 0x180217056
                    __asm_movss(v91);
                    __asm_movss_31(v5);
                    __asm_movss_31((int32_t)a5);
                    __asm_movss_31(*(int32_t *)&v62);
                    v57 = a3;
                    function_18020f860(a3);
                    int32_t v92 = __asm_movss(v91); // 0x180217095
                    int32_t v93 = *(int32_t *)&g40;
                    int32_t v94 = v92; // 0x1802170a3
                    if ((a8 & 0x100000) != 0) {
                        // 0x1802170a5
                        v94 = __asm_movss(__asm_subss(__asm_movss_31(v93), v92));
                    }
                    // 0x1802170bf
                    v70 = v90;
                    int128_t v95 = __asm_mulss(__asm_subss(__asm_movss_31(v53), v52), v94); // 0x1802170d1
                    int128_t v96 = __asm_movaps(__asm_addss_34(__asm_movss_31(v52), v95)); // 0x1802170e7
                    int32_t v97 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v96))); // 0x1802170fc
                    int128_t v98 = __asm_subss_36(__asm_movss_31(v97), __asm_mulss(__asm_movss_31(v28), v32)); // 0x18021711c
                    int128_t v99 = __asm_subss(__asm_movaps(v98), v93); // 0x180217123
                    __asm_comiss(__asm_movss_31(v70), v99);
                    v75 = v99;
                    if ((a8 & 0x100000) == 0) {
                        goto lab_0x1802171ad;
                    } else {
                        int128_t v100 = __asm_addss_34(__asm_movss_31(v97), __asm_mulss(__asm_movss_31(v28), v32)); // 0x180217150
                        v75 = __asm_addss(__asm_movaps(v100), v93);
                        __asm_comiss(v75, (int128_t)v70);
                        if (v3 == 0) {
                            goto lab_0x1802171ad;
                        } else {
                            // 0x180217190
                            v77 = false;
                            v67 = __asm_movss(__asm_subss(__asm_movss_31(v70), v97));
                            goto lab_0x1802171b9;
                        }
                    }
                }
            } else {
                // 0x180216fea
                function_18019e9f0(v7, v43);
                result = 0;
                v59 = false;
                v60 = true;
                goto lab_0x180217a12;
            }
        }
    }
  lab_0x180217a12:;
    int32_t v101 = *(int32_t *)&g40; // 0x180217a12
    __asm_comiss(__asm_movss_31(v101), (int128_t)v17);
    if (!v59 && !v60) {
        int32_t * v102 = (int32_t *)v57; // bp-72, 0x180217a2c
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v102, 16);
        // 0x180217d43
        return result;
    }
    // 0x180217a73
    __asm_movss(__asm_movss_31(v54));
    int128_t v103 = __asm_movss_31(v55); // 0x180217a7f
    __asm_movss(v103);
    __asm_movss_31(v5);
    __asm_movss_31((int32_t)a5);
    __asm_movss_31(*(int32_t *)&v62);
    function_18020f860(a3);
    int32_t v104 = __asm_movss(v103); // 0x180217abe
    int32_t v105 = v104; // 0x180217acc
    if ((a8 & 0x100000) != 0) {
        // 0x180217ace
        v105 = __asm_movss(__asm_subss(__asm_movss_31(v101), v104));
    }
    int128_t v106 = __asm_mulss(__asm_subss(__asm_movss_31(v53), v52), v105); // 0x180217afa
    int128_t v107 = __asm_movaps(__asm_addss_34(__asm_movss_31(v52), v106)); // 0x180217b10
    int32_t v108 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v107))); // 0x180217b25
    if ((a8 & 0x100000) != 0) {
        int64_t v109 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)v10), v9)); // 0x180217c56
        int128_t v110 = __asm_movss_31(*(int32_t *)&v57); // 0x180217c67
        int64_t v111 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v110, v9)))); // 0x180217c9d
        int64_t v112; // bp-40, 0x180216b10
        *(int32_t *)&v112 = (int32_t)v111;
        int64_t v113 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v108), __asm_mulss(__asm_movss_31(v28), v32)))); // 0x180217cc7
        *(int32_t *)((int64_t)&v112 | 4) = (int32_t)v113;
        int64_t v114 = __asm_movss(__asm_movss_31((int32_t)v109)); // 0x180217ced
        int64_t v115; // bp-32, 0x180216b10
        *(int32_t *)&v115 = (int32_t)v114;
        int64_t v116 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v108), __asm_mulss(__asm_movss_31(v28), v32)))); // 0x180217d17
        *(int32_t *)((int64_t)&v115 | 4) = (int32_t)v116;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v112, 16);
    } else {
        int64_t v117 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 12)), v9)); // 0x180217b4e
        int64_t v118 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a1 + 4)), v9)); // 0x180217b6c
        int128_t v119 = __asm_subss_36(__asm_movss_31(v108), __asm_mulss(__asm_movss_31(v28), v32)); // 0x180217b9c
        int64_t v120; // bp-56, 0x180216b10
        *(int32_t *)&v120 = (int32_t)__asm_movss(__asm_movaps(v119));
        int64_t v121 = __asm_movss(__asm_movss_31((int32_t)v118)); // 0x180217bc0
        *(int32_t *)((int64_t)&v120 | 4) = (int32_t)v121;
        int128_t v122 = __asm_addss_34(__asm_movss_31(v108), __asm_mulss(__asm_movss_31(v28), v32)); // 0x180217bec
        int64_t v123; // bp-48, 0x180216b10
        *(int32_t *)&v123 = (int32_t)__asm_movss(__asm_movaps(v122));
        int64_t v124 = __asm_movss(__asm_movss_31((int32_t)v117)); // 0x180217c10
        *(int32_t *)((int64_t)&v123 | 4) = (int32_t)v124;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v120, 16);
    }
    // 0x180217d43
    return result;
  lab_0x18021744d:;
    int128_t v125 = v71; // 0x180217349
    char v126 = llvm_ctpop_i8((char)v76); // 0x18021740d
    __asm_comiss(__asm_movss_31(v8), g251);
    int32_t v127 = *(int32_t *)&g45; // 0x18021745c
    __asm_comiss(__asm_movss_31(v127), (int128_t)v8);
    int128_t v128 = __asm_movss_31(v8); // 0x18021746b
    __asm_ucomiss(v128, v72);
    int64_t v129; // 0x180216b10
    if (!v61 || (v126 & 1) == 0) {
        // 0x180217485
        __asm_comiss(__asm_xorps(v128, v128), v125);
        if (v61) {
            // 0x1802174a2
            v129 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            goto lab_0x1802174b3;
        } else {
            goto lab_0x18021748f;
        }
    } else {
        if (v73 == 0) {
            int128_t v130 = __asm_divss_38(__asm_movss_31(v71), v127); // 0x1802174d0
            v63 = v64;
            v66 = __asm_movss(v130);
            goto lab_0x1802174de;
        } else {
            // 0x18021748f
            __asm_comiss(__asm_xorps(v128, v128), v125);
            goto lab_0x18021748f;
        }
    }
  lab_0x18021729b_2:;
    int32_t v131 = v65; // 0x1802172a0
    if ((a8 & 0x100000) != 0) {
        int128_t v132 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v65); // 0x1802172aa
        v131 = __asm_movss(v132);
    }
    // 0x180217948
    result = 0;
    v59 = false;
    v60 = true;
    if ((a8 & 0x200000) == 0 == (*(int32_t *)(v7 + 0x4a44) & 2048) == 0) {
        // 0x180217955
        __asm_movss(__asm_movss_31(v54));
        int128_t v133 = __asm_movss_31(v55); // 0x180217961
        __asm_movss(v133);
        __asm_movss_31(v5);
        __asm_movss_31((int32_t)a5);
        __asm_movss_31(v131);
        v57 = a3;
        function_180212830(a3);
        int32_t v134 = __asm_movss(v133); // 0x18021799a
        bool v135 = true; // 0x1802179aa
        if (v3 != 0) {
            // 0x1802179ac
            v135 = false;
            if ((a8 & 64) == 0) {
                // 0x1802179ba
                __asm_movss_31(v134);
                v57 = a7;
                function_18020e510(a7, a3);
                int32_t v136 = __asm_movss(v133); // 0x1802179d7
                v135 = true;
            }
        }
        // 0x1802179f8
        __asm_ucomiss(__asm_movss_31(*(int32_t *)&v62), v134);
        *(int32_t *)a4 = (int32_t)__asm_movss(__asm_movss_31(v134));
        result = 1;
        v59 = false;
        v60 = v135;
    }
    goto lab_0x180217a12;
  lab_0x1802171ad:;
    int128_t v137 = v75;
    v77 = true;
    v67 = __asm_movss(__asm_xorps(v137, v137));
    goto lab_0x1802171b9;
  lab_0x18021748f:
    // 0x18021748f
    v129 = __asm_movss(__asm_movss_31(-0x40800000));
    goto lab_0x1802174b3;
  lab_0x1802174de:;
    int32_t v146 = v66; // 0x1802174e5
    if ((v74 & 255) != 0) {
        int128_t v147 = __asm_mulss(__asm_movss_31(v66), 0x41200000); // 0x1802174ed
        v146 = __asm_movss(v147);
    }
    int32_t * v148 = (int32_t *)(v7 + 0x5fd0); // 0x180217500
    *v148 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v148), v146));
    char * v149 = (char *)(v7 + 0x5fd4); // 0x180217520
    *v149 = 1;
    int64_t v150 = __asm_movss(__asm_movss_31(*v148)); // 0x180217534
    v57 = v56;
    if (*(int32_t *)(v7 + 0x4bc4) != a2) {
        goto lab_0x180217569;
    } else {
        // 0x18021754e
        if (*v68 != 0) {
            goto lab_0x180217569;
        } else {
            // 0x18021755e
            function_18019e9f0(v56, v63);
            result = 0;
            v59 = false;
            v60 = true;
            goto lab_0x180217a12;
        }
    }
  lab_0x1802171b9:;
    int64_t v138 = __asm_movss(__asm_movss_31((int32_t)v67)); // 0x1802171c7
    int32_t * v139 = (int32_t *)(v7 + 0x5fcc);
    *v139 = (int32_t)v138;
    __asm_comiss(__asm_movss_31(v29), g30);
    v65 = v69;
    if (!v77) {
        int128_t v140 = __asm_divss_38(__asm_subss(__asm_subss(__asm_movss_31(v70), *v139), v52), v29); // 0x180217204
        int64_t v141 = __asm_movss(v140); // 0x18021720d
        int128_t v142 = __asm_xorps(v140, v140); // 0x180217216
        __asm_comiss(v142, (int128_t)(int32_t)v141);
        int128_t v143 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v142, v142))); // 0x18021727a
        int128_t v144 = __asm_movss_31((int32_t)__asm_movss(v143)); // 0x18021728c
        v65 = __asm_movss(v144);
    }
    goto lab_0x18021729b_2;
  lab_0x1802174b3:;
    int128_t v145 = __asm_divss_38(__asm_movss_31((int32_t)v129), v8); // 0x1802174bc
    v63 = v64;
    v66 = __asm_movss(v145);
    goto lab_0x1802174de;
  lab_0x180217569:
    // 0x180217569
    result = 0;
    v59 = false;
    v60 = true;
    if (*v149 != 0) {
        // 0x18021757d
        __asm_movss(__asm_movss_31(v54));
        int128_t v151 = __asm_movss_31(v55); // 0x180217589
        __asm_movss(v151);
        __asm_movss_31(v5);
        __asm_movss_31((int32_t)a5);
        __asm_movss_31(*(int32_t *)&v62);
        v57 = a3;
        function_18020f860(a3);
        __asm_comiss(__asm_movss_31((int32_t)__asm_movss(v151)), g40);
        int128_t v152 = __asm_movss_31((int32_t)v150); // 0x1802175dd
        __asm_comiss(v152, g30);
        *v148 = (int32_t)__asm_movss(__asm_xorps(v152, v152));
        *v149 = 0;
        result = 0;
        v59 = false;
        v60 = true;
    }
    goto lab_0x180217a12;
}

// Address range: 0x180217d60 - 0x180218fa4
int64_t function_180217d60(int64_t a1, uint32_t a2, uint32_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    bool v1 = a3 < 8; // 0x180217df9
    bool v2; // 0x180217d60
    int32_t v3; // 0x180217d60
    bool v4; // 0x180217d60
    if (a3 == 8) {
        goto lab_0x180217e0c;
    } else {
        // 0x180217dfb
        v1 = a3 < 9;
        v2 = a3 < 9;
        v4 = false;
        v3 = 0;
        if (a3 == 9) {
            goto lab_0x180217e0c;
        } else {
            goto lab_0x180217e11;
        }
    }
  lab_0x180217e0c:
    // 0x180217e0c
    v2 = v1;
    v4 = true;
    v3 = 1;
    goto lab_0x180217e11;
  lab_0x180217e11:
    // 0x180217e11
    __asm_comisd(__asm_movsd(a6), (int128_t)a5);
    int64_t v5; // 0x180217d60
    if (v2 || v4) {
        // 0x180217e4b
        v5 = __asm_movsd_17(__asm_subsd(__asm_movsd(a5), a6));
    } else {
        // 0x180217e2e
        v5 = __asm_movsd_17(__asm_subsd(__asm_movsd(a6), a5));
    }
    int64_t v6 = (int64_t)g1201; // 0x180217d7c
    int32_t v7 = __asm_movss(__asm_cvtsd2ss_43(v5)); // 0x180217e6f
    int32_t v8 = *(int32_t *)&g41; // 0x180217e75
    __asm_movss(__asm_movss_31(v8));
    int64_t v9 = a1 + 8; // 0x180217e8e
    int64_t v10 = 4 * (int64_t)((a8 & 0x100000) != 0); // 0x180217eb7
    int32_t * v11 = (int32_t *)(v10 + a1); // 0x180217eb7
    int64_t v12 = __asm_movss(__asm_movss_31(*v11)); // 0x180217ebc
    int32_t * v13 = (int32_t *)(v10 + v9); // 0x180217ed2
    int64_t v14 = __asm_movss(__asm_movss_31(*v13)); // 0x180217ed7
    int128_t v15 = __asm_subss_36(__asm_movss_31((int32_t)v14), __asm_movss_31((int32_t)v12)); // 0x180217ef2
    int32_t v16 = __asm_movss(__asm_subss(__asm_movaps(v15), 0x40800000)); // 0x180217f01
    int32_t * v17 = (int32_t *)(v6 + 0x397c); // 0x180217f0f
    int64_t v18 = __asm_movss(__asm_movss_31(*v17)); // 0x180217f21
    if (v3 == 0) {
        // 0x180217f27
        __asm_comiss(__asm_movss_31(v7), g30);
        int64_t v19 = __asm_movss(__asm_movss_31(*v17)); // 0x180217f47
        int128_t v20 = __asm_addss(__asm_movss_31(v7), *(int32_t *)&g40); // 0x180217f56
        int32_t v21 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v16), v20))); // 0x180217f6b
        __asm_comiss(__asm_movss_31(v21), (int128_t)(int32_t)v19);
        int128_t v22 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v21))); // 0x180217fad
        v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v22)));
    }
    int32_t v23 = v18;
    __asm_comiss(__asm_movss_31(v16), (int128_t)v23);
    int64_t v24; // 0x180217d60
    if (v3 == 0) {
        // 0x180217fec
        v24 = __asm_movss(__asm_movss_31(v16));
    } else {
        // 0x180217fdb
        v24 = __asm_movss(__asm_movss_31(v23));
    }
    int64_t v25 = a2;
    int128_t v26 = __asm_movss_31((int32_t)v24); // 0x180217ffb
    int32_t v27 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v26))); // 0x180218016
    int32_t v28 = __asm_movss(__asm_subss(__asm_movss_31(v16), v27)); // 0x180218028
    int128_t v29 = __asm_addss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v11))), v8); // 0x180218065
    int128_t v30 = __asm_movss_31(v27); // 0x18021806d
    int32_t v31 = *(int32_t *)&g38;
    int64_t v32 = __asm_movss(__asm_addss_34(v29, __asm_mulss(v30, v31))); // 0x18021807f
    int128_t v33 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v13))), v8); // 0x1802180c0
    int128_t v34 = __asm_subss_36(v33, __asm_mulss(__asm_movss_31(v27), v31)); // 0x1802180d6
    int64_t v35 = __asm_movss(v34); // 0x1802180da
    int128_t v36 = __asm_xorps(v34, v34); // 0x1802180e3
    int64_t v37 = __asm_movss(v36); // 0x1802180e6
    int128_t v38 = __asm_xorps(v36, v36); // 0x1802180ec
    int64_t v39 = v37; // 0x1802180fc
    int64_t v40 = __asm_movss(v38); // 0x1802180fc
    int128_t v41 = v38; // 0x1802180fc
    int64_t v42 = v25; // 0x1802180fc
    if ((a8 & 32) != 0) {
        int64_t v43 = v25; // 0x180218109
        int32_t v44 = 1; // 0x180218109
        if (v3 != 0) {
            // 0x18021810b
            v43 = 3;
            v44 = function_1801e5e60(a7, 3);
        }
        int128_t v45 = __asm_movaps(__asm_cvtsi2ss(v44)); // 0x180218148
        int128_t v46 = __asm_movss_31(*(int32_t *)&g35); // 0x18021814b
        function_180272490(v46, v45);
        int64_t v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v46))); // 0x18021816a
        __asm_comiss(__asm_movss_31(v28), g40);
        int64_t v48 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v28)))); // 0x1802181b0
        int128_t v49 = __asm_mulss(__asm_movss_31(*(int32_t *)(v6 + 0x3984)), v31); // 0x1802181c9
        int128_t v50 = __asm_divss(v49, __asm_movss_31((int32_t)v48)); // 0x1802181da
        v39 = v47;
        v40 = __asm_movss(v50);
        v41 = v50;
        v42 = v43;
    }
    int32_t v51 = v32; // 0x18021807f
    int32_t v52 = v35; // 0x1802180da
    int32_t v53 = v40;
    int32_t v54 = v39;
    int64_t v55 = a2; // 0x1802181ee
    int64_t v56 = v55; // 0x1802181ee
    uint32_t v57 = *(int32_t *)(v6 + 0x40e4); // 0x1802181f5
    int64_t result = 0; // 0x1802181fb
    bool v58 = v57 < a2; // 0x1802181fb
    bool v59 = false; // 0x1802181fb
    bool v60; // 0x180217d60
    int64_t v61; // 0x180217d60
    int64_t v62; // 0x180217d60
    int32_t v63; // 0x180217d60
    int32_t v64; // 0x180217d60
    int64_t v65; // 0x180217d60
    char * v66; // 0x180218536
    int32_t v67; // 0x180218209
    int32_t v68; // 0x18021827e
    int32_t v69; // 0x18021859a
    int32_t v70; // 0x1802185a6
    int32_t v71; // 0x180217d60
    int64_t v72; // 0x180218618
    int128_t v73; // 0x1802183a8
    int32_t v74; // 0x18021863c
    bool v75; // 0x180217d60
    if (v57 != a2) {
        goto lab_0x180218c64;
    } else {
        int128_t v76 = v41;
        int128_t v77 = __asm_xorps(v76, v76); // 0x180218206
        int64_t v78 = __asm_movss(v77); // 0x180218209
        int32_t v79 = *(int32_t *)(v6 + 0x4110); // 0x180218214
        if (v79 != 1) {
            // 0x180218511
            result = 0;
            v58 = false;
            v59 = true;
            if (v79 != 2 == (v79 != 3)) {
                goto lab_0x180218c64;
            } else {
                // 0x180218531
                v66 = (char *)(v6 + 0x40f0);
                int128_t v80 = v77; // 0x18021853f
                if (*v66 != 0) {
                    // 0x180218541
                    v80 = __asm_xorps(v77, v77);
                    *(int32_t *)(v6 + 0x5fd0) = (int32_t)__asm_movss(v80);
                    *(char *)(v6 + 0x5fd4) = 0;
                }
                // 0x18021855d
                function_1801a4610((int32_t)((a8 & 0x100000) != 0));
                int64_t v81; // 0x180217d60
                if ((a8 & 0x100000) != 0) {
                    // 0x180218578
                    v81 = __asm_movss(__asm_xorps(v80, g48));
                } else {
                    // 0x180218564
                    v81 = __asm_movss(v80);
                }
                // 0x180218591
                v69 = __asm_movss(__asm_movss_31((int32_t)v81));
                int128_t v82 = __asm_movss_31(v69); // 0x1802185a0
                v70 = *(int32_t *)&g30;
                __asm_ucomiss(v82, v70);
                int32_t * v83 = (int32_t *)(v6 + 0x4bf0); // 0x1802185ba
                v71 = (int32_t)function_18018e690(*v83 != 3 ? 0x1000 : 641, v42) & 255;
                v72 = function_18018e690(*v83 != 3 ? 0x2000 : 642, v42);
                v60 = true;
                v74 = 0;
                v62 = v42;
                if (v3 == 0) {
                    goto lab_0x18021869e;
                } else {
                    // 0x180218650
                    v74 = function_1801e5e60(a7, 3);
                    v60 = v74 == 0;
                    v62 = 3;
                    if (v74 < 1) {
                        goto lab_0x18021869e;
                    } else {
                        int128_t v84 = __asm_divss_38(__asm_movss_31(v69), *(int32_t *)&g45); // 0x18021866e
                        int32_t v85 = __asm_movss(v84); // 0x180218676
                        v61 = 3;
                        v64 = v85;
                        if (v71 != 0) {
                            int128_t v86 = __asm_divss_38(__asm_movss_31(v85), 0x41200000); // 0x18021868b
                            v61 = 3;
                            v64 = __asm_movss(v86);
                        }
                        goto lab_0x18021872f;
                    }
                }
            }
        } else {
            // 0x180218221
            v56 = v6;
            if (*(char *)(v6 + 280) != 0) {
                // 0x180218246
                v67 = v78;
                int64_t v87 = v6 + 272; // 0x18021824b
                v56 = v87;
                int64_t v88 = __asm_movss(__asm_movss_31(*(int32_t *)(v87 + v10))); // 0x18021827e
                if (*(char *)(v6 + 0x40f0) == 0) {
                    // 0x1802184ec
                    __asm_comiss(__asm_movss_31(v28), g30);
                    v63 = v67;
                    goto lab_0x1802184ec_2;
                } else {
                    // 0x18021829b
                    __asm_movss(__asm_movss_31(v53));
                    int128_t v89 = __asm_movss_31(v54); // 0x1802182a7
                    __asm_movss(v89);
                    __asm_movsd(a6);
                    __asm_movsd(a5);
                    __asm_movsd(a4);
                    v56 = a3;
                    function_18020ffd0(a3);
                    int32_t v90 = __asm_movss(v89); // 0x1802182e6
                    int32_t v91 = *(int32_t *)&g40;
                    int32_t v92 = v90; // 0x1802182f4
                    if ((a8 & 0x100000) != 0) {
                        // 0x1802182f6
                        v92 = __asm_movss(__asm_subss(__asm_movss_31(v91), v90));
                    }
                    // 0x180218310
                    v68 = v88;
                    int128_t v93 = __asm_mulss(__asm_subss(__asm_movss_31(v52), v51), v92); // 0x180218322
                    int128_t v94 = __asm_movaps(__asm_addss_34(__asm_movss_31(v51), v93)); // 0x180218338
                    int32_t v95 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v94))); // 0x18021834d
                    int128_t v96 = __asm_subss_36(__asm_movss_31(v95), __asm_mulss(__asm_movss_31(v27), v31)); // 0x18021836d
                    int128_t v97 = __asm_subss(__asm_movaps(v96), v91); // 0x180218374
                    __asm_comiss(__asm_movss_31(v68), v97);
                    v73 = v97;
                    if ((a8 & 0x100000) == 0) {
                        goto lab_0x1802183fe;
                    } else {
                        int128_t v98 = __asm_addss_34(__asm_movss_31(v95), __asm_mulss(__asm_movss_31(v27), v31)); // 0x1802183a1
                        v73 = __asm_addss(__asm_movaps(v98), v91);
                        __asm_comiss(v73, (int128_t)v68);
                        if (v3 == 0) {
                            goto lab_0x1802183fe;
                        } else {
                            // 0x1802183e1
                            v75 = false;
                            v65 = __asm_movss(__asm_subss(__asm_movss_31(v68), v95));
                            goto lab_0x18021840a;
                        }
                    }
                }
            } else {
                // 0x18021823b
                function_18019e9f0(v6, v42);
                result = 0;
                v58 = false;
                v59 = true;
                goto lab_0x180218c64;
            }
        }
    }
  lab_0x180218c64:;
    int32_t v99 = *(int32_t *)&g40; // 0x180218c64
    __asm_comiss(__asm_movss_31(v99), (int128_t)v16);
    if (!v58 && !v59) {
        int32_t * v100 = (int32_t *)v56; // bp-80, 0x180218c7e
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v100, 16);
        // 0x180218f95
        return result;
    }
    // 0x180218cc5
    __asm_movss(__asm_movss_31(v53));
    int128_t v101 = __asm_movss_31(v54); // 0x180218cd1
    __asm_movss(v101);
    __asm_movsd(a6);
    __asm_movsd(a5);
    __asm_movsd(a4);
    function_18020ffd0(a3);
    int32_t v102 = __asm_movss(v101); // 0x180218d10
    int32_t v103 = v102; // 0x180218d1e
    if ((a8 & 0x100000) != 0) {
        // 0x180218d20
        v103 = __asm_movss(__asm_subss(__asm_movss_31(v99), v102));
    }
    int128_t v104 = __asm_mulss(__asm_subss(__asm_movss_31(v52), v51), v103); // 0x180218d4c
    int128_t v105 = __asm_movaps(__asm_addss_34(__asm_movss_31(v51), v104)); // 0x180218d62
    int32_t v106 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v105))); // 0x180218d77
    if ((a8 & 0x100000) != 0) {
        int64_t v107 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)v9), v8)); // 0x180218ea8
        int128_t v108 = __asm_movss_31(*(int32_t *)&v56); // 0x180218eb9
        int64_t v109 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v108, v8)))); // 0x180218eef
        int64_t v110; // bp-48, 0x180217d60
        *(int32_t *)&v110 = (int32_t)v109;
        int64_t v111 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v106), __asm_mulss(__asm_movss_31(v27), v31)))); // 0x180218f19
        *(int32_t *)((int64_t)&v110 | 4) = (int32_t)v111;
        int64_t v112 = __asm_movss(__asm_movss_31((int32_t)v107)); // 0x180218f3f
        int64_t v113; // bp-40, 0x180217d60
        *(int32_t *)&v113 = (int32_t)v112;
        int64_t v114 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v106), __asm_mulss(__asm_movss_31(v27), v31)))); // 0x180218f69
        *(int32_t *)((int64_t)&v113 | 4) = (int32_t)v114;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v110, 16);
    } else {
        int64_t v115 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 12)), v8)); // 0x180218da0
        int64_t v116 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a1 + 4)), v8)); // 0x180218dbe
        int128_t v117 = __asm_subss_36(__asm_movss_31(v106), __asm_mulss(__asm_movss_31(v27), v31)); // 0x180218dee
        int64_t v118; // bp-64, 0x180217d60
        *(int32_t *)&v118 = (int32_t)__asm_movss(__asm_movaps(v117));
        int64_t v119 = __asm_movss(__asm_movss_31((int32_t)v116)); // 0x180218e12
        *(int32_t *)((int64_t)&v118 | 4) = (int32_t)v119;
        int128_t v120 = __asm_addss_34(__asm_movss_31(v106), __asm_mulss(__asm_movss_31(v27), v31)); // 0x180218e3e
        int64_t v121; // bp-56, 0x180217d60
        *(int32_t *)&v121 = (int32_t)__asm_movss(__asm_movaps(v120));
        int64_t v122 = __asm_movss(__asm_movss_31((int32_t)v115)); // 0x180218e62
        *(int32_t *)((int64_t)&v121 | 4) = (int32_t)v122;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v118, 16);
    }
    // 0x180218f95
    return result;
  lab_0x18021869e:;
    int128_t v123 = v69; // 0x18021859a
    char v124 = llvm_ctpop_i8((char)v74); // 0x18021865e
    __asm_comiss(__asm_movss_31(v7), g251);
    int32_t v125 = *(int32_t *)&g45; // 0x1802186ad
    __asm_comiss(__asm_movss_31(v125), (int128_t)v7);
    int128_t v126 = __asm_movss_31(v7); // 0x1802186bc
    __asm_ucomiss(v126, v70);
    int64_t v127; // 0x180217d60
    if (!v60 || (v124 & 1) == 0) {
        // 0x1802186d6
        __asm_comiss(__asm_xorps(v126, v126), v123);
        if (v60) {
            // 0x1802186f3
            v127 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            goto lab_0x180218704;
        } else {
            goto lab_0x1802186e0;
        }
    } else {
        if (v71 == 0) {
            int128_t v128 = __asm_divss_38(__asm_movss_31(v69), v125); // 0x180218721
            v61 = v62;
            v64 = __asm_movss(v128);
            goto lab_0x18021872f;
        } else {
            // 0x1802186e0
            __asm_comiss(__asm_xorps(v126, v126), v123);
            goto lab_0x1802186e0;
        }
    }
  lab_0x1802184ec_2:;
    int32_t v129 = v63; // 0x1802184f1
    if ((a8 & 0x100000) != 0) {
        int128_t v130 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v63); // 0x1802184fb
        v129 = __asm_movss(v130);
    }
    // 0x180218b99
    result = 0;
    v58 = false;
    v59 = true;
    if ((a8 & 0x200000) == 0 == (*(int32_t *)(v6 + 0x4a44) & 2048) == 0) {
        // 0x180218ba6
        __asm_movss(__asm_movss_31(v53));
        int128_t v131 = __asm_movss_31(v54); // 0x180218bb2
        __asm_movss(v131);
        __asm_movsd(a6);
        __asm_movsd(a5);
        __asm_movss_31(v129);
        v56 = a3;
        function_180212ee0(a3);
        int64_t v132 = __asm_movsd_17(v131); // 0x180218beb
        bool v133 = true; // 0x180218bfb
        if (v3 != 0) {
            // 0x180218bfd
            v133 = false;
            if ((a8 & 64) == 0) {
                // 0x180218c0b
                __asm_movsd(v132);
                v56 = a7;
                function_18020e630(a7, a3);
                int64_t v134 = __asm_movsd_17(v131); // 0x180218c28
                v133 = true;
            }
        }
        // 0x180218c4a
        __asm_ucomisd(__asm_movsd(a4), v132);
        *(int64_t *)a4 = __asm_movsd_17(__asm_movsd(v132));
        result = 1;
        v58 = false;
        v59 = v133;
    }
    goto lab_0x180218c64;
  lab_0x1802183fe:;
    int128_t v135 = v73;
    v75 = true;
    v65 = __asm_movss(__asm_xorps(v135, v135));
    goto lab_0x18021840a;
  lab_0x1802186e0:
    // 0x1802186e0
    v127 = __asm_movss(__asm_movss_31(-0x40800000));
    goto lab_0x180218704;
  lab_0x18021872f:;
    int32_t v144 = v64; // 0x180218736
    if ((v72 & 255) != 0) {
        int128_t v145 = __asm_mulss(__asm_movss_31(v64), 0x41200000); // 0x18021873e
        v144 = __asm_movss(v145);
    }
    int32_t * v146 = (int32_t *)(v6 + 0x5fd0); // 0x180218751
    *v146 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v146), v144));
    char * v147 = (char *)(v6 + 0x5fd4); // 0x180218771
    *v147 = 1;
    int64_t v148 = __asm_movss(__asm_movss_31(*v146)); // 0x180218785
    v56 = v55;
    if (*(int32_t *)(v6 + 0x4bc4) != a2) {
        goto lab_0x1802187ba;
    } else {
        // 0x18021879f
        if (*v66 != 0) {
            goto lab_0x1802187ba;
        } else {
            // 0x1802187af
            function_18019e9f0(v55, v61);
            result = 0;
            v58 = false;
            v59 = true;
            goto lab_0x180218c64;
        }
    }
  lab_0x18021840a:;
    int64_t v136 = __asm_movss(__asm_movss_31((int32_t)v65)); // 0x180218418
    int32_t * v137 = (int32_t *)(v6 + 0x5fcc);
    *v137 = (int32_t)v136;
    __asm_comiss(__asm_movss_31(v28), g30);
    v63 = v67;
    if (!v75) {
        int128_t v138 = __asm_divss_38(__asm_subss(__asm_subss(__asm_movss_31(v68), *v137), v51), v28); // 0x180218455
        int64_t v139 = __asm_movss(v138); // 0x18021845e
        int128_t v140 = __asm_xorps(v138, v138); // 0x180218467
        __asm_comiss(v140, (int128_t)(int32_t)v139);
        int128_t v141 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v140, v140))); // 0x1802184cb
        int128_t v142 = __asm_movss_31((int32_t)__asm_movss(v141)); // 0x1802184dd
        v63 = __asm_movss(v142);
    }
    goto lab_0x1802184ec_2;
  lab_0x180218704:;
    int128_t v143 = __asm_divss_38(__asm_movss_31((int32_t)v127), v7); // 0x18021870d
    v61 = v62;
    v64 = __asm_movss(v143);
    goto lab_0x18021872f;
  lab_0x1802187ba:
    // 0x1802187ba
    result = 0;
    v58 = false;
    v59 = true;
    if (*v147 != 0) {
        // 0x1802187ce
        __asm_movss(__asm_movss_31(v53));
        int128_t v149 = __asm_movss_31(v54); // 0x1802187da
        __asm_movss(v149);
        __asm_movsd(a6);
        __asm_movsd(a5);
        __asm_movsd(a4);
        v56 = a3;
        function_18020ffd0(a3);
        __asm_comiss(__asm_movss_31((int32_t)__asm_movss(v149)), g40);
        int128_t v150 = __asm_movss_31((int32_t)v148); // 0x18021882e
        __asm_comiss(v150, g30);
        *v146 = (int32_t)__asm_movss(__asm_xorps(v150, v150));
        *v147 = 0;
        result = 0;
        v58 = false;
        v59 = true;
    }
    goto lab_0x180218c64;
}

// Address range: 0x180218fb0 - 0x18021a1dd
int64_t function_180218fb0(int64_t a1, uint32_t a2, uint32_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = (int64_t)g1201; // 0x180218fcc
    int32_t v2 = __asm_movss(__asm_cvtsi2ss_37(a5 < a6 ? a6 - a5 : a5 - a6)); // 0x1802190c4
    int32_t v3 = *(int32_t *)&g41; // 0x1802190ca
    __asm_movss(__asm_movss_31(v3));
    int64_t v4 = a1 + 8; // 0x1802190e3
    int64_t v5 = 4 * (int64_t)((a8 & 0x100000) != 0); // 0x18021910c
    int32_t * v6 = (int32_t *)(v5 + a1); // 0x18021910c
    int64_t v7 = __asm_movss(__asm_movss_31(*v6)); // 0x180219111
    int32_t * v8 = (int32_t *)(v5 + v4); // 0x180219127
    int64_t v9 = __asm_movss(__asm_movss_31(*v8)); // 0x18021912c
    int128_t v10 = __asm_subss_36(__asm_movss_31((int32_t)v9), __asm_movss_31((int32_t)v7)); // 0x180219147
    int32_t v11 = __asm_movss(__asm_subss(__asm_movaps(v10), 0x40800000)); // 0x180219156
    int32_t * v12 = (int32_t *)(v1 + 0x397c); // 0x180219164
    int64_t v13 = __asm_movss(__asm_movss_31(*v12)); // 0x180219176
    if ((a3 || 1) != 9) {
        // 0x18021917c
        __asm_comiss(__asm_movss_31(v2), g30);
        int64_t v14 = __asm_movss(__asm_movss_31(*v12)); // 0x18021919c
        int128_t v15 = __asm_addss(__asm_movss_31(v2), *(int32_t *)&g40); // 0x1802191ab
        int32_t v16 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v11), v15))); // 0x1802191c0
        __asm_comiss(__asm_movss_31(v16), (int128_t)(int32_t)v14);
        int128_t v17 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v16))); // 0x180219202
        v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17)));
    }
    int32_t v18 = v13;
    __asm_comiss(__asm_movss_31(v11), (int128_t)v18);
    int64_t v19; // 0x180218fb0
    if ((a3 || 1) != 9) {
        // 0x180219241
        v19 = __asm_movss(__asm_movss_31(v11));
    } else {
        // 0x180219230
        v19 = __asm_movss(__asm_movss_31(v18));
    }
    int64_t v20 = a2;
    int128_t v21 = __asm_movss_31((int32_t)v19); // 0x180219250
    int32_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21))); // 0x18021926b
    int32_t v23 = __asm_movss(__asm_subss(__asm_movss_31(v11), v22)); // 0x18021927d
    int128_t v24 = __asm_addss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v6))), v3); // 0x1802192ba
    int128_t v25 = __asm_movss_31(v22); // 0x1802192c2
    int32_t v26 = *(int32_t *)&g38;
    int64_t v27 = __asm_movss(__asm_addss_34(v24, __asm_mulss(v25, v26))); // 0x1802192d4
    int128_t v28 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v8))), v3); // 0x180219315
    int128_t v29 = __asm_subss_36(v28, __asm_mulss(__asm_movss_31(v22), v26)); // 0x18021932b
    int64_t v30 = __asm_movss(v29); // 0x18021932f
    int128_t v31 = __asm_xorps(v29, v29); // 0x180219338
    int64_t v32 = __asm_movss(v31); // 0x18021933b
    int128_t v33 = __asm_xorps(v31, v31); // 0x180219341
    int64_t v34 = v32; // 0x180219351
    int64_t v35 = __asm_movss(v33); // 0x180219351
    int128_t v36 = v33; // 0x180219351
    int64_t v37 = v20; // 0x180219351
    if ((a8 & 32) != 0) {
        // 0x180219357
        v37 = v20;
        int32_t v38 = 1; // 0x18021935e
        if ((a3 || 1) == 9) {
            // 0x180219360
            v37 = 3;
            v38 = function_1801e5e60(a7, 3);
        }
        int128_t v39 = __asm_movaps(__asm_cvtsi2ss(v38)); // 0x18021939d
        int128_t v40 = __asm_movss_31(*(int32_t *)&g35); // 0x1802193a0
        function_180272490(v40, v39);
        v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v40)));
        __asm_comiss(__asm_movss_31(v23), g40);
        int64_t v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v23)))); // 0x180219405
        int128_t v42 = __asm_mulss(__asm_movss_31(*(int32_t *)(v1 + 0x3984)), v26); // 0x18021941e
        v36 = __asm_divss(v42, __asm_movss_31((int32_t)v41));
        v35 = __asm_movss(v36);
    }
    int32_t v43 = v27; // 0x1802192d4
    int32_t v44 = v30; // 0x18021932f
    int32_t v45 = v35;
    int32_t v46 = v34;
    int64_t v47 = a2; // 0x180219443
    int64_t v48 = v47; // 0x180219443
    uint32_t v49 = *(int32_t *)(v1 + 0x40e4); // 0x18021944a
    int64_t result = 0; // 0x180219450
    bool v50 = v49 < a2; // 0x180219450
    bool v51 = false; // 0x180219450
    bool v52; // 0x180218fb0
    int64_t v53; // 0x180218fb0
    int64_t v54; // 0x180218fb0
    int32_t v55; // 0x180218fb0
    int32_t v56; // 0x180218fb0
    int64_t v57; // 0x180218fb0
    char * v58; // 0x180219788
    int32_t v59; // 0x18021945e
    int32_t v60; // 0x1802194d3
    int32_t v61; // 0x1802197ec
    int32_t v62; // 0x1802197f8
    int32_t v63; // 0x180218fb0
    int64_t v64; // 0x18021986a
    int128_t v65; // 0x1802195fa
    int32_t v66; // 0x18021988e
    bool v67; // 0x180218fb0
    if (v49 != a2) {
        goto lab_0x180219ea0;
    } else {
        int128_t v68 = v36;
        int128_t v69 = __asm_xorps(v68, v68); // 0x18021945b
        int64_t v70 = __asm_movss(v69); // 0x18021945e
        int32_t v71 = *(int32_t *)(v1 + 0x4110); // 0x180219469
        if (v71 != 1) {
            // 0x180219763
            result = 0;
            v50 = false;
            v51 = true;
            if (v71 != 2 == (v71 != 3)) {
                goto lab_0x180219ea0;
            } else {
                // 0x180219783
                v58 = (char *)(v1 + 0x40f0);
                int128_t v72 = v69; // 0x180219791
                if (*v58 != 0) {
                    // 0x180219793
                    v72 = __asm_xorps(v69, v69);
                    *(int32_t *)(v1 + 0x5fd0) = (int32_t)__asm_movss(v72);
                    *(char *)(v1 + 0x5fd4) = 0;
                }
                // 0x1802197af
                function_1801a4610((int32_t)((a8 & 0x100000) != 0));
                int64_t v73; // 0x180218fb0
                if ((a8 & 0x100000) != 0) {
                    // 0x1802197ca
                    v73 = __asm_movss(__asm_xorps(v72, g48));
                } else {
                    // 0x1802197b6
                    v73 = __asm_movss(v72);
                }
                // 0x1802197e3
                v61 = __asm_movss(__asm_movss_31((int32_t)v73));
                int128_t v74 = __asm_movss_31(v61); // 0x1802197f2
                v62 = *(int32_t *)&g30;
                __asm_ucomiss(v74, v62);
                int32_t * v75 = (int32_t *)(v1 + 0x4bf0); // 0x18021980c
                v63 = (int32_t)function_18018e690(*v75 != 3 ? 0x1000 : 641, v37) & 255;
                v64 = function_18018e690(*v75 != 3 ? 0x2000 : 642, v37);
                v52 = true;
                v66 = 0;
                v54 = v37;
                if ((a3 || 1) != 9) {
                    goto lab_0x1802198f0;
                } else {
                    // 0x1802198a2
                    v66 = function_1801e5e60(a7, 3);
                    v52 = v66 == 0;
                    v54 = 3;
                    if (v66 < 1) {
                        goto lab_0x1802198f0;
                    } else {
                        int128_t v76 = __asm_divss_38(__asm_movss_31(v61), *(int32_t *)&g45); // 0x1802198c0
                        int32_t v77 = __asm_movss(v76); // 0x1802198c8
                        v53 = 3;
                        v56 = v77;
                        if (v63 != 0) {
                            int128_t v78 = __asm_divss_38(__asm_movss_31(v77), 0x41200000); // 0x1802198dd
                            v53 = 3;
                            v56 = __asm_movss(v78);
                        }
                        goto lab_0x180219981;
                    }
                }
            }
        } else {
            // 0x180219476
            v48 = v1;
            if (*(char *)(v1 + 280) != 0) {
                // 0x18021949b
                v59 = v70;
                int64_t v79 = v1 + 272; // 0x1802194a0
                v48 = v79;
                int64_t v80 = __asm_movss(__asm_movss_31(*(int32_t *)(v79 + v5))); // 0x1802194d3
                if (*(char *)(v1 + 0x40f0) == 0) {
                    // 0x18021973e
                    __asm_comiss(__asm_movss_31(v23), g30);
                    v55 = v59;
                    goto lab_0x18021973e_2;
                } else {
                    // 0x1802194f0
                    __asm_movss(__asm_movss_31(v45));
                    int128_t v81 = __asm_movss_31(v46); // 0x1802194fc
                    int64_t v82 = __asm_movss(v81); // 0x180219502
                    v48 = a3;
                    function_180210790(a3, a6, a5, a6, (int64_t)((a8 & 32) != 0), 0x100000000 * v82 / 0x100000000, (int64_t)&g1381);
                    int32_t v83 = __asm_movss(v81); // 0x180219538
                    int32_t v84 = *(int32_t *)&g40;
                    int32_t v85 = v83; // 0x180219546
                    if ((a8 & 0x100000) != 0) {
                        // 0x180219548
                        v85 = __asm_movss(__asm_subss(__asm_movss_31(v84), v83));
                    }
                    // 0x180219562
                    v60 = v80;
                    int128_t v86 = __asm_mulss(__asm_subss(__asm_movss_31(v44), v43), v85); // 0x180219574
                    int128_t v87 = __asm_movaps(__asm_addss_34(__asm_movss_31(v43), v86)); // 0x18021958a
                    int32_t v88 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v87))); // 0x18021959f
                    int128_t v89 = __asm_subss_36(__asm_movss_31(v88), __asm_mulss(__asm_movss_31(v22), v26)); // 0x1802195bf
                    int128_t v90 = __asm_subss(__asm_movaps(v89), v84); // 0x1802195c6
                    __asm_comiss(__asm_movss_31(v60), v90);
                    v65 = v90;
                    if ((a8 & 0x100000) == 0) {
                        goto lab_0x180219650;
                    } else {
                        int128_t v91 = __asm_addss_34(__asm_movss_31(v88), __asm_mulss(__asm_movss_31(v22), v26)); // 0x1802195f3
                        v65 = __asm_addss(__asm_movaps(v91), v84);
                        __asm_comiss(v65, (int128_t)v60);
                        if ((a3 || 1) != 9) {
                            goto lab_0x180219650;
                        } else {
                            // 0x180219633
                            v67 = false;
                            v57 = __asm_movss(__asm_subss(__asm_movss_31(v60), v88));
                            goto lab_0x18021965c;
                        }
                    }
                }
            } else {
                // 0x180219490
                function_18019e9f0(v1, v37);
                result = 0;
                v50 = false;
                v51 = true;
                goto lab_0x180219ea0;
            }
        }
    }
  lab_0x180219ea0:;
    int32_t v92 = *(int32_t *)&g40; // 0x180219ea0
    __asm_comiss(__asm_movss_31(v92), (int128_t)v11);
    if (!v50 && !v51) {
        int32_t * v93 = (int32_t *)v48; // bp-80, 0x180219eba
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v93, 16);
        // 0x18021a1ce
        return result;
    }
    // 0x180219f01
    __asm_movss(__asm_movss_31(v45));
    int128_t v94 = __asm_movss_31(v46); // 0x180219f0d
    int64_t v95 = __asm_movss(v94); // 0x180219f13
    function_180210790(a3, a6, a5, a6, (int64_t)((a8 & 32) != 0), 0x100000000 * v95 / 0x100000000, (int64_t)&g1381);
    int32_t v96 = __asm_movss(v94); // 0x180219f49
    int32_t v97 = v96; // 0x180219f57
    if ((a8 & 0x100000) != 0) {
        // 0x180219f59
        v97 = __asm_movss(__asm_subss(__asm_movss_31(v92), v96));
    }
    int128_t v98 = __asm_mulss(__asm_subss(__asm_movss_31(v44), v43), v97); // 0x180219f85
    int128_t v99 = __asm_movaps(__asm_addss_34(__asm_movss_31(v43), v98)); // 0x180219f9b
    int32_t v100 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v99))); // 0x180219fb0
    if ((a8 & 0x100000) != 0) {
        int64_t v101 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)v4), v3)); // 0x18021a0e1
        int128_t v102 = __asm_movss_31(*(int32_t *)&v48); // 0x18021a0f2
        int64_t v103 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v102, v3)))); // 0x18021a128
        int64_t v104; // bp-48, 0x180218fb0
        *(int32_t *)&v104 = (int32_t)v103;
        int64_t v105 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v100), __asm_mulss(__asm_movss_31(v22), v26)))); // 0x18021a152
        *(int32_t *)((int64_t)&v104 | 4) = (int32_t)v105;
        int64_t v106 = __asm_movss(__asm_movss_31((int32_t)v101)); // 0x18021a178
        int64_t v107; // bp-40, 0x180218fb0
        *(int32_t *)&v107 = (int32_t)v106;
        int64_t v108 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v100), __asm_mulss(__asm_movss_31(v22), v26)))); // 0x18021a1a2
        *(int32_t *)((int64_t)&v107 | 4) = (int32_t)v108;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v104, 16);
    } else {
        int64_t v109 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 12)), v3)); // 0x180219fd9
        int64_t v110 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a1 + 4)), v3)); // 0x180219ff7
        int128_t v111 = __asm_subss_36(__asm_movss_31(v100), __asm_mulss(__asm_movss_31(v22), v26)); // 0x18021a027
        int64_t v112; // bp-64, 0x180218fb0
        *(int32_t *)&v112 = (int32_t)__asm_movss(__asm_movaps(v111));
        int64_t v113 = __asm_movss(__asm_movss_31((int32_t)v110)); // 0x18021a04b
        *(int32_t *)((int64_t)&v112 | 4) = (int32_t)v113;
        int128_t v114 = __asm_addss_34(__asm_movss_31(v100), __asm_mulss(__asm_movss_31(v22), v26)); // 0x18021a077
        int64_t v115; // bp-56, 0x180218fb0
        *(int32_t *)&v115 = (int32_t)__asm_movss(__asm_movaps(v114));
        int64_t v116 = __asm_movss(__asm_movss_31((int32_t)v109)); // 0x18021a09b
        *(int32_t *)((int64_t)&v115 | 4) = (int32_t)v116;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v112, 16);
    }
    // 0x18021a1ce
    return result;
  lab_0x1802198f0:;
    int128_t v117 = v61; // 0x1802197ec
    char v118 = llvm_ctpop_i8((char)v66); // 0x1802198b0
    __asm_comiss(__asm_movss_31(v2), g251);
    int32_t v119 = *(int32_t *)&g45; // 0x1802198ff
    __asm_comiss(__asm_movss_31(v119), (int128_t)v2);
    int128_t v120 = __asm_movss_31(v2); // 0x18021990e
    __asm_ucomiss(v120, v62);
    int64_t v121; // 0x180218fb0
    if (!v52 || (v118 & 1) == 0) {
        // 0x180219928
        __asm_comiss(__asm_xorps(v120, v120), v117);
        if (v52) {
            // 0x180219945
            v121 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            goto lab_0x180219956;
        } else {
            goto lab_0x180219932;
        }
    } else {
        if (v63 == 0) {
            int128_t v122 = __asm_divss_38(__asm_movss_31(v61), v119); // 0x180219973
            v53 = v54;
            v56 = __asm_movss(v122);
            goto lab_0x180219981;
        } else {
            // 0x180219932
            __asm_comiss(__asm_xorps(v120, v120), v117);
            goto lab_0x180219932;
        }
    }
  lab_0x18021973e_2:;
    int32_t v123 = v55; // 0x180219743
    if ((a8 & 0x100000) != 0) {
        int128_t v124 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v55); // 0x18021974d
        v123 = __asm_movss(v124);
    }
    // 0x180219de0
    result = 0;
    v50 = false;
    v51 = true;
    if ((a8 & 0x200000) == 0 == (*(int32_t *)(v1 + 0x4a44) & 2048) == 0) {
        // 0x180219ded
        __asm_movss(__asm_movss_31(v45));
        __asm_movss(__asm_movss_31(v46));
        __asm_movss_31(v123);
        int64_t v125 = function_1802135b0(a3); // 0x180219e2b
        if ((a3 || 1) == 9) {
            // 0x180219e41
            if ((a8 & 64) == 0) {
                int64_t v126 = function_18020e750(a7, a3, v125); // 0x180219e6b
            }
        }
        // 0x180219e73
        v48 = v125;
        result = 0;
        v50 = v125 > a6;
        v51 = true;
        if (v125 != a6) {
            // 0x180219e88
            v48 = v125;
            *(int64_t *)a4 = v125;
            result = 1;
            v50 = v125 > a6;
            v51 = false;
        }
    }
    goto lab_0x180219ea0;
  lab_0x180219650:;
    int128_t v127 = v65;
    v67 = true;
    v57 = __asm_movss(__asm_xorps(v127, v127));
    goto lab_0x18021965c;
  lab_0x180219932:
    // 0x180219932
    v121 = __asm_movss(__asm_movss_31(-0x40800000));
    goto lab_0x180219956;
  lab_0x180219981:;
    int32_t v136 = v56; // 0x180219988
    if ((v64 & 255) != 0) {
        int128_t v137 = __asm_mulss(__asm_movss_31(v56), 0x41200000); // 0x180219990
        v136 = __asm_movss(v137);
    }
    int32_t * v138 = (int32_t *)(v1 + 0x5fd0); // 0x1802199a3
    *v138 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v138), v136));
    char * v139 = (char *)(v1 + 0x5fd4); // 0x1802199c3
    *v139 = 1;
    int64_t v140 = __asm_movss(__asm_movss_31(*v138)); // 0x1802199d7
    v48 = v47;
    if (*(int32_t *)(v1 + 0x4bc4) != a2) {
        goto lab_0x180219a0c;
    } else {
        // 0x1802199f1
        if (*v58 != 0) {
            goto lab_0x180219a0c;
        } else {
            // 0x180219a01
            function_18019e9f0(v47, v53);
            result = 0;
            v50 = false;
            v51 = true;
            goto lab_0x180219ea0;
        }
    }
  lab_0x18021965c:;
    int64_t v128 = __asm_movss(__asm_movss_31((int32_t)v57)); // 0x18021966a
    int32_t * v129 = (int32_t *)(v1 + 0x5fcc);
    *v129 = (int32_t)v128;
    __asm_comiss(__asm_movss_31(v23), g30);
    v55 = v59;
    if (!v67) {
        int128_t v130 = __asm_divss_38(__asm_subss(__asm_subss(__asm_movss_31(v60), *v129), v43), v23); // 0x1802196a7
        int64_t v131 = __asm_movss(v130); // 0x1802196b0
        int128_t v132 = __asm_xorps(v130, v130); // 0x1802196b9
        __asm_comiss(v132, (int128_t)(int32_t)v131);
        int128_t v133 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v132, v132))); // 0x18021971d
        int128_t v134 = __asm_movss_31((int32_t)__asm_movss(v133)); // 0x18021972f
        v55 = __asm_movss(v134);
    }
    goto lab_0x18021973e_2;
  lab_0x180219956:;
    int128_t v135 = __asm_divss_38(__asm_movss_31((int32_t)v121), v2); // 0x18021995f
    v53 = v54;
    v56 = __asm_movss(v135);
    goto lab_0x180219981;
  lab_0x180219a0c:
    // 0x180219a0c
    result = 0;
    v50 = false;
    v51 = true;
    if (*v139 != 0) {
        // 0x180219a20
        __asm_movss(__asm_movss_31(v45));
        int128_t v141 = __asm_movss_31(v46); // 0x180219a2c
        int64_t v142 = __asm_movss(v141); // 0x180219a32
        v48 = a3;
        function_180210790(a3, a6, a5, a6, (int64_t)((a8 & 32) != 0), 0x100000000 * v142 / 0x100000000, (int64_t)&g1381);
        __asm_comiss(__asm_movss_31((int32_t)__asm_movss(v141)), g40);
        int128_t v143 = __asm_movss_31((int32_t)v140); // 0x180219a7d
        __asm_comiss(v143, g30);
        *v138 = (int32_t)__asm_movss(__asm_xorps(v143, v143));
        *v139 = 0;
        result = 0;
        v50 = false;
        v51 = true;
    }
    goto lab_0x180219ea0;
}

// Address range: 0x18021a1e0 - 0x18021b430
int64_t function_18021a1e0(int64_t a1, uint32_t a2, uint32_t a3, int64_t a4, uint64_t a5, uint64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = a5 >= a6 ? a5 - a6 : a6 - a5;
    int128_t v2; // 0x18021a1e0
    if (v1 < 0) {
        int128_t v3 = __asm_cvtsi2ss_37(v1 / 2 | v1 & 1); // 0x18021a30b
        v2 = __asm_movaps(__asm_addss_34(v3, v3));
    } else {
        // 0x18021a2f7
        v2 = __asm_cvtsi2ss_37(v1);
    }
    int64_t v4 = (int64_t)g1201; // 0x18021a1fc
    int32_t v5 = __asm_movss(v2); // 0x18021a317
    int32_t v6 = *(int32_t *)&g41; // 0x18021a31d
    __asm_movss(__asm_movss_31(v6));
    int64_t v7 = a1 + 8; // 0x18021a336
    int64_t v8 = 4 * (int64_t)((a8 & 0x100000) != 0); // 0x18021a35f
    int32_t * v9 = (int32_t *)(v8 + a1); // 0x18021a35f
    int64_t v10 = __asm_movss(__asm_movss_31(*v9)); // 0x18021a364
    int32_t * v11 = (int32_t *)(v8 + v7); // 0x18021a37a
    int64_t v12 = __asm_movss(__asm_movss_31(*v11)); // 0x18021a37f
    int128_t v13 = __asm_subss_36(__asm_movss_31((int32_t)v12), __asm_movss_31((int32_t)v10)); // 0x18021a39a
    int32_t v14 = __asm_movss(__asm_subss(__asm_movaps(v13), 0x40800000)); // 0x18021a3a9
    int32_t * v15 = (int32_t *)(v4 + 0x397c); // 0x18021a3b7
    int64_t v16 = __asm_movss(__asm_movss_31(*v15)); // 0x18021a3c9
    if ((a3 || 1) != 9) {
        // 0x18021a3cf
        __asm_comiss(__asm_movss_31(v5), g30);
        int64_t v17 = __asm_movss(__asm_movss_31(*v15)); // 0x18021a3ef
        int128_t v18 = __asm_addss(__asm_movss_31(v5), *(int32_t *)&g40); // 0x18021a3fe
        int32_t v19 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v14), v18))); // 0x18021a413
        __asm_comiss(__asm_movss_31(v19), (int128_t)(int32_t)v17);
        int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v19))); // 0x18021a455
        v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20)));
    }
    int32_t v21 = v16;
    __asm_comiss(__asm_movss_31(v14), (int128_t)v21);
    int64_t v22; // 0x18021a1e0
    if ((a3 || 1) != 9) {
        // 0x18021a494
        v22 = __asm_movss(__asm_movss_31(v14));
    } else {
        // 0x18021a483
        v22 = __asm_movss(__asm_movss_31(v21));
    }
    int64_t v23 = a2;
    int128_t v24 = __asm_movss_31((int32_t)v22); // 0x18021a4a3
    int32_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24))); // 0x18021a4be
    int32_t v26 = __asm_movss(__asm_subss(__asm_movss_31(v14), v25)); // 0x18021a4d0
    int128_t v27 = __asm_addss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v9))), v6); // 0x18021a50d
    int128_t v28 = __asm_movss_31(v25); // 0x18021a515
    int32_t v29 = *(int32_t *)&g38;
    int64_t v30 = __asm_movss(__asm_addss_34(v27, __asm_mulss(v28, v29))); // 0x18021a527
    int128_t v31 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v11))), v6); // 0x18021a568
    int128_t v32 = __asm_subss_36(v31, __asm_mulss(__asm_movss_31(v25), v29)); // 0x18021a57e
    int64_t v33 = __asm_movss(v32); // 0x18021a582
    int128_t v34 = __asm_xorps(v32, v32); // 0x18021a58b
    int64_t v35 = __asm_movss(v34); // 0x18021a58e
    int128_t v36 = __asm_xorps(v34, v34); // 0x18021a594
    int64_t v37 = v35; // 0x18021a5a4
    int64_t v38 = __asm_movss(v36); // 0x18021a5a4
    int128_t v39 = v36; // 0x18021a5a4
    int64_t v40 = v23; // 0x18021a5a4
    if ((a8 & 32) != 0) {
        // 0x18021a5aa
        v40 = v23;
        int32_t v41 = 1; // 0x18021a5b1
        if ((a3 || 1) == 9) {
            // 0x18021a5b3
            v40 = 3;
            v41 = function_1801e5e60(a7, 3);
        }
        int128_t v42 = __asm_movaps(__asm_cvtsi2ss(v41)); // 0x18021a5f0
        int128_t v43 = __asm_movss_31(*(int32_t *)&g35); // 0x18021a5f3
        function_180272490(v43, v42);
        v37 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v43)));
        __asm_comiss(__asm_movss_31(v26), g40);
        int64_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v26)))); // 0x18021a658
        int128_t v45 = __asm_mulss(__asm_movss_31(*(int32_t *)(v4 + 0x3984)), v29); // 0x18021a671
        v39 = __asm_divss(v45, __asm_movss_31((int32_t)v44));
        v38 = __asm_movss(v39);
    }
    int32_t v46 = v30; // 0x18021a527
    int32_t v47 = v33; // 0x18021a582
    int32_t v48 = v38;
    int32_t v49 = v37;
    int64_t v50 = a2; // 0x18021a696
    int64_t v51 = v50; // 0x18021a696
    uint32_t v52 = *(int32_t *)(v4 + 0x40e4); // 0x18021a69d
    int64_t result = 0; // 0x18021a6a3
    bool v53 = v52 < a2; // 0x18021a6a3
    bool v54 = false; // 0x18021a6a3
    bool v55; // 0x18021a1e0
    int64_t v56; // 0x18021a1e0
    int64_t v57; // 0x18021a1e0
    int32_t v58; // 0x18021a1e0
    int32_t v59; // 0x18021a1e0
    int64_t v60; // 0x18021a1e0
    char * v61; // 0x18021a9db
    int32_t v62; // 0x18021a6b1
    int32_t v63; // 0x18021a726
    int32_t v64; // 0x18021aa3f
    int32_t v65; // 0x18021aa4b
    int32_t v66; // 0x18021a1e0
    int64_t v67; // 0x18021aabd
    int128_t v68; // 0x18021a84d
    int32_t v69; // 0x18021aae1
    bool v70; // 0x18021a1e0
    if (v52 != a2) {
        goto lab_0x18021b0f3;
    } else {
        int128_t v71 = v39;
        int128_t v72 = __asm_xorps(v71, v71); // 0x18021a6ae
        int64_t v73 = __asm_movss(v72); // 0x18021a6b1
        int32_t v74 = *(int32_t *)(v4 + 0x4110); // 0x18021a6bc
        if (v74 != 1) {
            // 0x18021a9b6
            result = 0;
            v53 = false;
            v54 = true;
            if (v74 != 2 == (v74 != 3)) {
                goto lab_0x18021b0f3;
            } else {
                // 0x18021a9d6
                v61 = (char *)(v4 + 0x40f0);
                int128_t v75 = v72; // 0x18021a9e4
                if (*v61 != 0) {
                    // 0x18021a9e6
                    v75 = __asm_xorps(v72, v72);
                    *(int32_t *)(v4 + 0x5fd0) = (int32_t)__asm_movss(v75);
                    *(char *)(v4 + 0x5fd4) = 0;
                }
                // 0x18021aa02
                function_1801a4610((int32_t)((a8 & 0x100000) != 0));
                int64_t v76; // 0x18021a1e0
                if ((a8 & 0x100000) != 0) {
                    // 0x18021aa1d
                    v76 = __asm_movss(__asm_xorps(v75, g48));
                } else {
                    // 0x18021aa09
                    v76 = __asm_movss(v75);
                }
                // 0x18021aa36
                v64 = __asm_movss(__asm_movss_31((int32_t)v76));
                int128_t v77 = __asm_movss_31(v64); // 0x18021aa45
                v65 = *(int32_t *)&g30;
                __asm_ucomiss(v77, v65);
                int32_t * v78 = (int32_t *)(v4 + 0x4bf0); // 0x18021aa5f
                v66 = (int32_t)function_18018e690(*v78 != 3 ? 0x1000 : 641, v40) & 255;
                v67 = function_18018e690(*v78 != 3 ? 0x2000 : 642, v40);
                v55 = true;
                v69 = 0;
                v57 = v40;
                if ((a3 || 1) != 9) {
                    goto lab_0x18021ab43;
                } else {
                    // 0x18021aaf5
                    v69 = function_1801e5e60(a7, 3);
                    v55 = v69 == 0;
                    v57 = 3;
                    if (v69 < 1) {
                        goto lab_0x18021ab43;
                    } else {
                        int128_t v79 = __asm_divss_38(__asm_movss_31(v64), *(int32_t *)&g45); // 0x18021ab13
                        int32_t v80 = __asm_movss(v79); // 0x18021ab1b
                        v56 = 3;
                        v59 = v80;
                        if (v66 != 0) {
                            int128_t v81 = __asm_divss_38(__asm_movss_31(v80), 0x41200000); // 0x18021ab30
                            v56 = 3;
                            v59 = __asm_movss(v81);
                        }
                        goto lab_0x18021abd4;
                    }
                }
            }
        } else {
            // 0x18021a6c9
            v51 = v4;
            if (*(char *)(v4 + 280) != 0) {
                // 0x18021a6ee
                v62 = v73;
                int64_t v82 = v4 + 272; // 0x18021a6f3
                v51 = v82;
                int64_t v83 = __asm_movss(__asm_movss_31(*(int32_t *)(v82 + v8))); // 0x18021a726
                if (*(char *)(v4 + 0x40f0) == 0) {
                    // 0x18021a991
                    __asm_comiss(__asm_movss_31(v26), g30);
                    v58 = v62;
                    goto lab_0x18021a991_2;
                } else {
                    // 0x18021a743
                    __asm_movss(__asm_movss_31(v48));
                    int128_t v84 = __asm_movss_31(v49); // 0x18021a74f
                    int64_t v85 = __asm_movss(v84); // 0x18021a755
                    v51 = a3;
                    function_180210f60(a3, a6, a5, a6, (int64_t)((a8 & 32) != 0), 0x100000000 * v85 / 0x100000000, (int64_t)&g1381);
                    int32_t v86 = __asm_movss(v84); // 0x18021a78b
                    int32_t v87 = *(int32_t *)&g40;
                    int32_t v88 = v86; // 0x18021a799
                    if ((a8 & 0x100000) != 0) {
                        // 0x18021a79b
                        v88 = __asm_movss(__asm_subss(__asm_movss_31(v87), v86));
                    }
                    // 0x18021a7b5
                    v63 = v83;
                    int128_t v89 = __asm_mulss(__asm_subss(__asm_movss_31(v47), v46), v88); // 0x18021a7c7
                    int128_t v90 = __asm_movaps(__asm_addss_34(__asm_movss_31(v46), v89)); // 0x18021a7dd
                    int32_t v91 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v90))); // 0x18021a7f2
                    int128_t v92 = __asm_subss_36(__asm_movss_31(v91), __asm_mulss(__asm_movss_31(v25), v29)); // 0x18021a812
                    int128_t v93 = __asm_subss(__asm_movaps(v92), v87); // 0x18021a819
                    __asm_comiss(__asm_movss_31(v63), v93);
                    v68 = v93;
                    if ((a8 & 0x100000) == 0) {
                        goto lab_0x18021a8a3;
                    } else {
                        int128_t v94 = __asm_addss_34(__asm_movss_31(v91), __asm_mulss(__asm_movss_31(v25), v29)); // 0x18021a846
                        v68 = __asm_addss(__asm_movaps(v94), v87);
                        __asm_comiss(v68, (int128_t)v63);
                        if ((a3 || 1) != 9) {
                            goto lab_0x18021a8a3;
                        } else {
                            // 0x18021a886
                            v70 = false;
                            v60 = __asm_movss(__asm_subss(__asm_movss_31(v63), v91));
                            goto lab_0x18021a8af;
                        }
                    }
                }
            } else {
                // 0x18021a6e3
                function_18019e9f0(v4, v40);
                result = 0;
                v53 = false;
                v54 = true;
                goto lab_0x18021b0f3;
            }
        }
    }
  lab_0x18021b0f3:;
    int32_t v95 = *(int32_t *)&g40; // 0x18021b0f3
    __asm_comiss(__asm_movss_31(v95), (int128_t)v14);
    if (!v53 && !v54) {
        int32_t * v96 = (int32_t *)v51; // bp-80, 0x18021b10d
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v96, 16);
        // 0x18021b421
        return result;
    }
    // 0x18021b154
    __asm_movss(__asm_movss_31(v48));
    int128_t v97 = __asm_movss_31(v49); // 0x18021b160
    int64_t v98 = __asm_movss(v97); // 0x18021b166
    function_180210f60(a3, a6, a5, a6, (int64_t)((a8 & 32) != 0), 0x100000000 * v98 / 0x100000000, (int64_t)&g1381);
    int32_t v99 = __asm_movss(v97); // 0x18021b19c
    int32_t v100 = v99; // 0x18021b1aa
    if ((a8 & 0x100000) != 0) {
        // 0x18021b1ac
        v100 = __asm_movss(__asm_subss(__asm_movss_31(v95), v99));
    }
    int128_t v101 = __asm_mulss(__asm_subss(__asm_movss_31(v47), v46), v100); // 0x18021b1d8
    int128_t v102 = __asm_movaps(__asm_addss_34(__asm_movss_31(v46), v101)); // 0x18021b1ee
    int32_t v103 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v102))); // 0x18021b203
    if ((a8 & 0x100000) != 0) {
        int64_t v104 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)v7), v6)); // 0x18021b334
        int128_t v105 = __asm_movss_31(*(int32_t *)&v51); // 0x18021b345
        int64_t v106 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v105, v6)))); // 0x18021b37b
        int64_t v107; // bp-48, 0x18021a1e0
        *(int32_t *)&v107 = (int32_t)v106;
        int64_t v108 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v103), __asm_mulss(__asm_movss_31(v25), v29)))); // 0x18021b3a5
        *(int32_t *)((int64_t)&v107 | 4) = (int32_t)v108;
        int64_t v109 = __asm_movss(__asm_movss_31((int32_t)v104)); // 0x18021b3cb
        int64_t v110; // bp-40, 0x18021a1e0
        *(int32_t *)&v110 = (int32_t)v109;
        int64_t v111 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v103), __asm_mulss(__asm_movss_31(v25), v29)))); // 0x18021b3f5
        *(int32_t *)((int64_t)&v110 | 4) = (int32_t)v111;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v107, 16);
    } else {
        int64_t v112 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 12)), v6)); // 0x18021b22c
        int64_t v113 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a1 + 4)), v6)); // 0x18021b24a
        int128_t v114 = __asm_subss_36(__asm_movss_31(v103), __asm_mulss(__asm_movss_31(v25), v29)); // 0x18021b27a
        int64_t v115; // bp-64, 0x18021a1e0
        *(int32_t *)&v115 = (int32_t)__asm_movss(__asm_movaps(v114));
        int64_t v116 = __asm_movss(__asm_movss_31((int32_t)v113)); // 0x18021b29e
        *(int32_t *)((int64_t)&v115 | 4) = (int32_t)v116;
        int128_t v117 = __asm_addss_34(__asm_movss_31(v103), __asm_mulss(__asm_movss_31(v25), v29)); // 0x18021b2ca
        int64_t v118; // bp-56, 0x18021a1e0
        *(int32_t *)&v118 = (int32_t)__asm_movss(__asm_movaps(v117));
        int64_t v119 = __asm_movss(__asm_movss_31((int32_t)v112)); // 0x18021b2ee
        *(int32_t *)((int64_t)&v118 | 4) = (int32_t)v119;
        __asm_rep_movsb_memcpy((char *)a9, (char *)&v115, 16);
    }
    // 0x18021b421
    return result;
  lab_0x18021ab43:;
    int128_t v120 = v64; // 0x18021aa3f
    char v121 = llvm_ctpop_i8((char)v69); // 0x18021ab03
    __asm_comiss(__asm_movss_31(v5), g251);
    int32_t v122 = *(int32_t *)&g45; // 0x18021ab52
    __asm_comiss(__asm_movss_31(v122), (int128_t)v5);
    int128_t v123 = __asm_movss_31(v5); // 0x18021ab61
    __asm_ucomiss(v123, v65);
    int64_t v124; // 0x18021a1e0
    if (!v55 || (v121 & 1) == 0) {
        // 0x18021ab7b
        __asm_comiss(__asm_xorps(v123, v123), v120);
        if (v55) {
            // 0x18021ab98
            v124 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            goto lab_0x18021aba9;
        } else {
            goto lab_0x18021ab85;
        }
    } else {
        if (v66 == 0) {
            int128_t v125 = __asm_divss_38(__asm_movss_31(v64), v122); // 0x18021abc6
            v56 = v57;
            v59 = __asm_movss(v125);
            goto lab_0x18021abd4;
        } else {
            // 0x18021ab85
            __asm_comiss(__asm_xorps(v123, v123), v120);
            goto lab_0x18021ab85;
        }
    }
  lab_0x18021a991_2:;
    int32_t v126 = v58; // 0x18021a996
    if ((a8 & 0x100000) != 0) {
        int128_t v127 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v58); // 0x18021a9a0
        v126 = __asm_movss(v127);
    }
    // 0x18021b033
    result = 0;
    v53 = false;
    v54 = true;
    if ((a8 & 0x200000) == 0 == (*(int32_t *)(v4 + 0x4a44) & 2048) == 0) {
        // 0x18021b040
        __asm_movss(__asm_movss_31(v48));
        __asm_movss(__asm_movss_31(v49));
        __asm_movss_31(v126);
        int64_t v128 = function_180213cb0(a3); // 0x18021b07e
        if ((a3 || 1) == 9) {
            // 0x18021b094
            if ((a8 & 64) == 0) {
                int64_t v129 = function_18020e860(a7, a3, v128); // 0x18021b0be
            }
        }
        // 0x18021b0c6
        v51 = v128;
        result = 0;
        v53 = v128 > a6;
        v54 = true;
        if (v128 != a6) {
            // 0x18021b0db
            v51 = v128;
            *(int64_t *)a4 = v128;
            result = 1;
            v53 = v128 > a6;
            v54 = false;
        }
    }
    goto lab_0x18021b0f3;
  lab_0x18021a8a3:;
    int128_t v130 = v68;
    v70 = true;
    v60 = __asm_movss(__asm_xorps(v130, v130));
    goto lab_0x18021a8af;
  lab_0x18021ab85:
    // 0x18021ab85
    v124 = __asm_movss(__asm_movss_31(-0x40800000));
    goto lab_0x18021aba9;
  lab_0x18021abd4:;
    int32_t v139 = v59; // 0x18021abdb
    if ((v67 & 255) != 0) {
        int128_t v140 = __asm_mulss(__asm_movss_31(v59), 0x41200000); // 0x18021abe3
        v139 = __asm_movss(v140);
    }
    int32_t * v141 = (int32_t *)(v4 + 0x5fd0); // 0x18021abf6
    *v141 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v141), v139));
    char * v142 = (char *)(v4 + 0x5fd4); // 0x18021ac16
    *v142 = 1;
    int64_t v143 = __asm_movss(__asm_movss_31(*v141)); // 0x18021ac2a
    v51 = v50;
    if (*(int32_t *)(v4 + 0x4bc4) != a2) {
        goto lab_0x18021ac5f;
    } else {
        // 0x18021ac44
        if (*v61 != 0) {
            goto lab_0x18021ac5f;
        } else {
            // 0x18021ac54
            function_18019e9f0(v50, v56);
            result = 0;
            v53 = false;
            v54 = true;
            goto lab_0x18021b0f3;
        }
    }
  lab_0x18021a8af:;
    int64_t v131 = __asm_movss(__asm_movss_31((int32_t)v60)); // 0x18021a8bd
    int32_t * v132 = (int32_t *)(v4 + 0x5fcc);
    *v132 = (int32_t)v131;
    __asm_comiss(__asm_movss_31(v26), g30);
    v58 = v62;
    if (!v70) {
        int128_t v133 = __asm_divss_38(__asm_subss(__asm_subss(__asm_movss_31(v63), *v132), v46), v26); // 0x18021a8fa
        int64_t v134 = __asm_movss(v133); // 0x18021a903
        int128_t v135 = __asm_xorps(v133, v133); // 0x18021a90c
        __asm_comiss(v135, (int128_t)(int32_t)v134);
        int128_t v136 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v135, v135))); // 0x18021a970
        int128_t v137 = __asm_movss_31((int32_t)__asm_movss(v136)); // 0x18021a982
        v58 = __asm_movss(v137);
    }
    goto lab_0x18021a991_2;
  lab_0x18021aba9:;
    int128_t v138 = __asm_divss_38(__asm_movss_31((int32_t)v124), v5); // 0x18021abb2
    v56 = v57;
    v59 = __asm_movss(v138);
    goto lab_0x18021abd4;
  lab_0x18021ac5f:
    // 0x18021ac5f
    result = 0;
    v53 = false;
    v54 = true;
    if (*v142 != 0) {
        // 0x18021ac73
        __asm_movss(__asm_movss_31(v48));
        int128_t v144 = __asm_movss_31(v49); // 0x18021ac7f
        int64_t v145 = __asm_movss(v144); // 0x18021ac85
        v51 = a3;
        function_180210f60(a3, a6, a5, a6, (int64_t)((a8 & 32) != 0), 0x100000000 * v145 / 0x100000000, (int64_t)&g1381);
        __asm_comiss(__asm_movss_31((int32_t)__asm_movss(v144)), g40);
        int128_t v146 = __asm_movss_31((int32_t)v143); // 0x18021acd0
        __asm_comiss(v146, g30);
        *v141 = (int32_t)__asm_movss(__asm_xorps(v146, v146));
        *v142 = 0;
        result = 0;
        v53 = false;
        v54 = true;
    }
    goto lab_0x18021b0f3;
}

// Address range: 0x18021b430 - 0x18021b4fa
int64_t function_18021b430(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    *(int32_t *)(result + 4) = 0;
    *(int32_t *)a1 = 0;
    *(int64_t *)(result + 8) = 0;
    int128_t v1; // 0x18021b430
    int128_t v2 = __asm_xorps(v1, v1); // 0x18021b484
    *(int32_t *)(result + 56) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18021b490
    *(int32_t *)(result + 60) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x18021b4ab
    *(int32_t *)(result + 64) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    function_18021b8f0(result, a2);
    int64_t v5; // 0x18021b430
    function_18029db80(result + 40, 0, 56, v5);
    return result;
}

// Address range: 0x18021b500 - 0x18021b526
int64_t function_18021b500(int64_t result, int64_t a2) {
    // 0x18021b500
    int64_t v1; // 0x18021b500
    function_18029db80(result, 0, 12, v1);
    return result;
}

// Address range: 0x18021b530 - 0x18021b5a7
int64_t function_18021b530(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x18021b530
    function_18029db80(result, 0, 44, v1);
    *(int32_t *)(result + 12) = -1;
    *(int32_t *)(result + 8) = -1;
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    *(int32_t *)(result + 32) = -1;
    *(int16_t *)(result + 38) = -1;
    *(int16_t *)(result + 36) = -1;
    return result;
}

// Address range: 0x18021b5b0 - 0x18021b77e
int64_t function_18021b5b0(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 32); // 0x18021b5c4
    int32_t v2 = *v1; // 0x18021b5c4
    int64_t v3; // 0x18021b5b0
    int64_t * v4; // 0x18021b5b0
    int32_t v5; // 0x18021b5b0
    int64_t v6; // 0x18021b5b0
    if (v2 != (int32_t)v6) {
        int64_t v7 = 40 * (int64_t)v2;
        int64_t * v8 = (int64_t *)(a1 + 8);
        v4 = v8;
        v3 = v7;
        v5 = *(int32_t *)(*v8 + v7);
    } else {
        // 0x18021b5db
        function_18021c340(a1, v6 + 1 & 0xffffffff);
        v4 = (int64_t *)(a1 + 8);
        v3 = 40 * (int64_t)v2;
        v5 = *v1 + 1;
    }
    // 0x18021b650
    *v1 = v5;
    int64_t v9 = *v4 + v3; // 0x18021b66b
    if (v9 != 0) {
        // 0x18021b6a7
        *(int64_t *)v9 = 0;
        *(int32_t *)(v9 + 8) = 0;
        *(int32_t *)(v9 + 16) = 0;
        *(int32_t *)(v9 + 12) = 0;
        *(char *)(v9 + 21) = -1;
        *(char *)(v9 + 20) = -1;
        *(int64_t *)(v9 + 32) = -1;
        *(int64_t *)(v9 + 24) = -1;
    }
    int32_t * v10 = (int32_t *)(a1 + 36); // 0x18021b737
    *v10 = *v10 + 1;
    return *v4 + v3;
}

// Address range: 0x18021b780 - 0x18021b8f0
int64_t function_18021b780(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 32); // 0x18021b794
    int32_t v2 = *v1; // 0x18021b794
    int64_t v3; // 0x18021b780
    int64_t * v4; // 0x18021b780
    int64_t v5; // 0x18021b780
    int32_t v6; // 0x18021b780
    int64_t v7; // 0x18021b780
    if (v2 != (int32_t)v7) {
        int64_t v8 = 160 * (int64_t)v2;
        int64_t * v9 = (int64_t *)(a1 + 8);
        v4 = v9;
        v3 = v8;
        v6 = *(int32_t *)(*v9 + v8);
    } else {
        int64_t v10 = v7 + 1 & 0xffffffff; // 0x18021b7c4
        function_18021c580(a1, v10);
        v4 = (int64_t *)(a1 + 8);
        v3 = 160 * (int64_t)v2;
        v6 = *v1 + 1;
        v5 = v10;
    }
    // 0x18021b823
    *v1 = v6;
    int64_t v11 = *v4 + v3; // 0x18021b841
    if (v11 != 0) {
        // 0x18021b87d
        function_1801e6680(v11, v5);
    }
    int32_t * v12 = (int32_t *)(a1 + 36); // 0x18021b8ac
    *v12 = *v12 + 1;
    return *v4 + v3;
}

// Address range: 0x18021b8f0 - 0x18021b940
int64_t function_18021b8f0(int64_t result, int64_t a2) {
    // 0x18021b8f0
    function_18021c4e0(result, 0);
    *(int64_t *)(result + 24) = -1;
    *(int64_t *)(result + 16) = -1;
    *(char *)(result + 33) = 0;
    *(char *)(result + 32) = 0;
    return result;
}

// Address range: 0x18021b940 - 0x18021ba23
int64_t function_18021b940(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 12); // 0x18021b94e
    uint32_t v2 = *v1; // 0x18021b94e
    int32_t * v3 = (int32_t *)(a1 + 84); // 0x18021b95a
    int32_t v4 = *v3; // 0x18021b95a
    *v3 = (int64_t)v4 < (int64_t)v2 ? v4 : v2;
    uint32_t v5 = *v1; // 0x18021b993
    int32_t * v6 = (int32_t *)(a1 + 88); // 0x18021b99f
    int32_t v7 = *v6; // 0x18021b99f
    *v6 = (int64_t)v7 < (int64_t)v5 ? v7 : v5;
    uint32_t v8 = *v1; // 0x18021b9db
    int32_t * v9 = (int32_t *)(a1 + 92); // 0x18021b9e7
    int32_t v10 = *v9; // 0x18021b9e7
    uint32_t result = (int64_t)v10 < (int64_t)v8 ? v10 : v8;
    *v9 = result;
    return result;
}

// Address range: 0x18021ba30 - 0x18021bb82
int64_t function_18021ba30(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = a1 + 192; // 0x18021ba49
    int128_t v2 = __asm_movss_31(*(int32_t *)(a1 + 12)); // 0x18021ba61
    int64_t v3 = __asm_movss(__asm_addss(v2, *(int32_t *)(a1 + 196))); // 0x18021ba6b
    int128_t v4 = __asm_addss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int32_t *)v1); // 0x18021ba83
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v4))); // 0x18021ba93
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)v3)); // 0x18021ba9f
    int32_t v7 = v6; // 0x18021ba9f
    int32_t v8; // bp-40, 0x18021ba30
    function_1801cc240(a1, (int64_t *)&v8, v1, a1 + 200, 0x100000000 * v6 / 0x100000000);
    int32_t v9; // 0x18021ba30
    int64_t v10 = __asm_movss(__asm_addss(__asm_movss_31(v7), v9)); // 0x18021bae6
    int64_t v11 = __asm_movss(__asm_addss(__asm_movss_31(v5), v8)); // 0x18021baf8
    int64_t v12 = __asm_movss(__asm_movss_31(v7)); // 0x18021bb04
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v5)))); // 0x18021bb2e
    *(int32_t *)a2 = (int32_t)v13;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v12));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v11));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v10));
    return result;
}

// Address range: 0x18021bb90 - 0x18021bbf8
int64_t function_18021bb90(int64_t a1, int32_t a2) {
    // 0x18021bb90
    int64_t result; // 0x18021bb90
    int64_t v1; // 0x18021bb90
    int64_t v2; // 0x18021bb90
    if ((a2 & 0xffff) < (int32_t)v2) {
        int64_t v3 = *(int64_t *)(a1 + 8) + (int64_t)(4 * a2 & 0x3fffc); // 0x18021bbc6
        int128_t v4 = __asm_movss_31(*(int32_t *)v3); // 0x18021bbd4
        result = v3;
        v1 = __asm_movss(v4);
    } else {
        int128_t v5 = __asm_movss_31(*(int32_t *)(a1 + 16)); // 0x18021bbe4
        result = a1;
        v1 = __asm_movss(v5);
    }
    // 0x18021bbee
    __asm_movss_31((int32_t)v1);
    return result;
}

// Address range: 0x18021bc00 - 0x18021bc87
int64_t function_18021bc00(int64_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)function_180193fd0(a1 + 16, a2, -1); // 0x18021bc2f
    int32_t v2 = *v1; // 0x18021bc39
    int64_t result; // 0x18021bc00
    if (v2 == -1) {
        // 0x18021bc69
        *v1 = *(int32_t *)(a1 + 32);
        result = function_18021b5b0(a1);
    } else {
        // 0x18021bc3e
        result = *(int64_t *)(a1 + 8) + 40 * (int64_t)v2;
    }
    // 0x18021bc82
    return result;
}

// Address range: 0x18021bc90 - 0x18021bd1a
int64_t function_18021bc90(int64_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)function_180193fd0(a1 + 16, a2, -1); // 0x18021bcbf
    int32_t v2 = *v1; // 0x18021bcc9
    int64_t result; // 0x18021bc90
    if (v2 == -1) {
        // 0x18021bcfc
        *v1 = *(int32_t *)(a1 + 32);
        result = function_18021b780(a1);
    } else {
        // 0x18021bcce
        result = *(int64_t *)(a1 + 8) + 160 * (int64_t)v2;
    }
    // 0x18021bd15
    return result;
}

// Address range: 0x18021bd20 - 0x18021bd52
int64_t function_18021bd20(int64_t * a1) {
    // 0x18021bd20
    int128_t v1; // 0x18021bd20
    int64_t v2 = __asm_movss(v1); // 0x18021bd20
    int64_t v3; // bp-24, 0x18021bd20
    int64_t v4 = function_1801cd1d0((int64_t)a1, &v3); // 0x18021bd39
    __asm_movss_31((int32_t)v2);
    return function_18019ed40((int64_t *)v4);
}

// Address range: 0x18021bd60 - 0x18021be11
int64_t function_18021bd60(int64_t a1, int32_t * a2, int64_t * a3, int32_t a4) {
    int64_t v1 = a1 + 52; // 0x18021bd7d
    int64_t * v2 = (int64_t *)(a1 + 72); // 0x18021bd8a
    *(int16_t *)*v2 = *(int16_t *)v1;
    *v2 = *v2 + 2;
    int64_t * v3 = (int64_t *)(a1 + 64); // 0x18021bdb8
    *(int64_t *)*v3 = (int64_t)a2;
    *(int64_t *)(*v3 + 8) = (int64_t)a3;
    *(int32_t *)(*v3 + 16) = a4;
    *v3 = *v3 + 20;
    int32_t * v4 = (int32_t *)v1; // 0x18021bdff
    uint32_t result = *v4 + 1; // 0x18021be02
    *v4 = result;
    return result;
}

// Address range: 0x18021be20 - 0x18021bec4
int64_t function_18021be20(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18021be33
    int64_t v2 = *v1; // 0x18021be33
    uint64_t v3 = (a2 - v2) / 44;
    int64_t v4 = 44 * v3; // 0x18021be65
    int64_t v5 = v4 + v2;
    int64_t v6; // 0x18021be20
    int64_t v7; // 0x18021be20
    function_18029d4e0(v5, v5 + 44, 44 * (0x100000000 * v7 / 0x100000000 + -1 - v3), v6);
    *(int32_t *)a1 = (int32_t)v7 - 1;
    return v4 + *v1;
}

// Address range: 0x18021bed0 - 0x18021bfa4
int64_t function_18021bed0(int64_t a1, int32_t * a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x18021bee8
    int64_t v2; // 0x18021bed0
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x18021bed0
    int64_t v5; // 0x18021bf78
    if (v1 != v3) {
        // 0x18021bf67
        v5 = *(int64_t *)(a1 + 8);
        function_18029d4e0(v5 + 24 * 0x100000000 * v2 / 0x100000000, (int64_t)a2, 24, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v6 = 8; // 0x18021bf05
    if (v1 != 0) {
        // 0x18021bf07
        v6 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v7 = v6;
    int64_t result2 = result;
    uint32_t v8 = (int64_t)v7 > result2 ? v7 : result;
    function_18021c120(a1, (int64_t)v8);
    // 0x18021bf67
    v5 = *(int64_t *)(a1 + 8);
    function_18029d4e0(v5 + 24 * 0x100000000 * v2 / 0x100000000, (int64_t)a2, 24, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x18021bfb0 - 0x18021c084
int64_t function_18021bfb0(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x18021bfc8
    int64_t v2; // 0x18021bfb0
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x18021bfb0
    if (v1 != v3) {
        // 0x18021c047
        function_18029d4e0(*(int64_t *)(a1 + 8) + 44 * 0x100000000 * v2 / 0x100000000, a2, 44, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v5 = 8; // 0x18021bfe5
    if (v1 != 0) {
        // 0x18021bfe7
        v5 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v6 = v5;
    int64_t result2 = result;
    uint32_t v7 = (int64_t)v6 > result2 ? v6 : result;
    function_18021c250(a1, (int64_t)v7);
    // 0x18021c047
    function_18029d4e0(*(int64_t *)(a1 + 8) + 44 * 0x100000000 * v2 / 0x100000000, a2, 44, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x18021c090 - 0x18021c11f
int64_t function_18021c090(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18021c090
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x18021c0a2
    int64_t result = (int64_t)*v2; // 0x18021c0a2
    if (v1 <= result) {
        // 0x18021c11a
        return result;
    }
    int64_t v3 = function_180190140(96 * v1); // 0x18021c0b9
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x18021c0c8
    int64_t v5 = *v4; // 0x18021c0c8
    if (v5 != 0) {
        // 0x18021c0cf
        int64_t v6; // 0x18021c090
        int64_t v7; // 0x18021c090
        function_18029d4e0(v3, v5, 96 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x18021c100
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x18021c11a
    return result2;
}

// Address range: 0x18021c120 - 0x18021c1af
int64_t function_18021c120(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18021c120
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x18021c132
    int64_t result = (int64_t)*v2; // 0x18021c132
    if (v1 <= result) {
        // 0x18021c1aa
        return result;
    }
    int64_t v3 = function_180190140(24 * v1); // 0x18021c149
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x18021c158
    int64_t v5 = *v4; // 0x18021c158
    if (v5 != 0) {
        // 0x18021c15f
        int64_t v6; // 0x18021c120
        int64_t v7; // 0x18021c120
        function_18029d4e0(v3, v5, 24 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x18021c190
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x18021c1aa
    return result2;
}

// Address range: 0x18021c1b0 - 0x18021c245
int64_t function_18021c1b0(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18021c1b0
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x18021c1c2
    int64_t result = (int64_t)*v2; // 0x18021c1c2
    if (v1 <= result) {
        // 0x18021c240
        return result;
    }
    int64_t v3 = function_180190140(160 * v1); // 0x18021c1dc
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x18021c1eb
    int64_t v5 = *v4; // 0x18021c1eb
    if (v5 != 0) {
        // 0x18021c1f2
        int64_t v6; // 0x18021c1b0
        int64_t v7; // 0x18021c1b0
        function_18029d4e0(v3, v5, 160 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x18021c226
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x18021c240
    return result2;
}

// Address range: 0x18021c250 - 0x18021c2df
int64_t function_18021c250(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18021c250
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x18021c262
    int64_t result = (int64_t)*v2; // 0x18021c262
    if (v1 <= result) {
        // 0x18021c2da
        return result;
    }
    int64_t v3 = function_180190140(44 * v1); // 0x18021c279
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x18021c288
    int64_t v5 = *v4; // 0x18021c288
    if (v5 != 0) {
        // 0x18021c28f
        int64_t v6; // 0x18021c250
        int64_t v7; // 0x18021c250
        function_18029d4e0(v3, v5, 44 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x18021c2c0
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x18021c2da
    return result2;
}

// Address range: 0x18021c2e0 - 0x18021c33f
int64_t function_18021c2e0(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18021c2e0
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x18021c2f2
    int64_t result = (int64_t)*v2; // 0x18021c2f2
    if (v1 <= result) {
        // 0x18021c33a
        return result;
    }
    int64_t * v3 = (int64_t *)(result2 + 8); // 0x18021c302
    int64_t v4 = *v3; // 0x18021c302
    if (v4 != 0) {
        // 0x18021c309
        function_1801901c0(v4);
    }
    // 0x18021c318
    *v3 = function_180190140(v1);
    *v2 = (int32_t)v1;
    // 0x18021c33a
    return result2;
}

// Address range: 0x18021c340 - 0x18021c3d6
int64_t function_18021c340(int64_t result, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18021c340
    uint32_t v2 = *(int32_t *)(result + 4); // 0x18021c352
    if (v1 <= (int64_t)v2) {
        // 0x18021c3c6
        *(int32_t *)result = (int32_t)v1;
        return result;
    }
    int64_t v3 = 8; // 0x18021c364
    if (v2 != 0) {
        // 0x18021c366
        v3 = (int64_t)((v2 - v2 / 0x80000000) / 2 + v2);
    }
    int64_t v4 = v3;
    function_1801cf8f0(result, ((v1 & 0xffffffff) < v4 ? v4 : v1) & 0xffffffff);
    // 0x18021c3c6
    *(int32_t *)result = (int32_t)v1;
    return result;
}

// Address range: 0x18021c3e0 - 0x18021c4d1
int64_t function_18021c3e0(int64_t result, uint32_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x18021c3f7
    int64_t v2 = a2; // 0x18021c3fe
    if (v2 > (int64_t)v1) {
        int32_t v3 = 8; // 0x18021c409
        if (v1 != 0) {
            // 0x18021c40b
            v3 = (v1 - v1 / 0x80000000) / 2 + v1;
        }
        int32_t v4 = v3;
        uint32_t v5 = (int64_t)v4 > (int64_t)a2 ? v4 : a2;
        function_18021c090(result, (int64_t)v5);
    }
    int64_t v6; // 0x18021c3e0
    if ((v6 & 0xffffffff) >= v2) {
        // 0x18021c4c1
        *(int32_t *)result = a2;
        return result;
    }
    uint64_t v7 = (int64_t)a2; // 0x18021c48f
    int64_t v8 = 0x100000000 * v6 / 0x100000000; // 0x18021c497
    if (v8 >= v7) {
        // 0x18021c4c1
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v9 = v6; // 0x18021c489
    int64_t v10; // 0x18021c3e0
    function_18029d4e0(*(int64_t *)(result + 8) + 96 * v8, a3, 96, v10);
    v9++;
    int64_t v11 = v9; // 0x18021c497
    while (v11 < v7) {
        // 0x18021c499
        function_18029d4e0(*(int64_t *)(result + 8) + 96 * v11, a3, 96, v10);
        v9++;
        v11 = v9;
    }
    // 0x18021c4c1
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x18021c4e0 - 0x18021c576
int64_t function_18021c4e0(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x18021c4f2
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x18021c566
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x18021c504
    if (v1 != 0) {
        // 0x18021c506
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_18021c120(result, (int64_t)v4);
    // 0x18021c566
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x18021c580 - 0x18021c616
int64_t function_18021c580(int64_t result, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18021c580
    uint32_t v2 = *(int32_t *)(result + 4); // 0x18021c592
    if (v1 <= (int64_t)v2) {
        // 0x18021c606
        *(int32_t *)result = (int32_t)v1;
        return result;
    }
    int64_t v3 = 8; // 0x18021c5a4
    if (v2 != 0) {
        // 0x18021c5a6
        v3 = (int64_t)((v2 - v2 / 0x80000000) / 2 + v2);
    }
    int64_t v4 = v3;
    function_18021c1b0(result, ((v1 & 0xffffffff) < v4 ? v4 : v1) & 0xffffffff);
    // 0x18021c606
    *(int32_t *)result = (int32_t)v1;
    return result;
}

// Address range: 0x18021c620 - 0x18021c6b6
int64_t function_18021c620(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x18021c632
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x18021c6a6
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x18021c644
    if (v1 != 0) {
        // 0x18021c646
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_18021c250(result, (int64_t)v4);
    // 0x18021c6a6
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x18021c6c0 - 0x18021decf
int64_t function_18021c6c0(int64_t a1) {
    int64_t v1 = a1; // 0x18021c6d7
    if (a1 == 0) {
        // 0x18021c6e8
        v1 = function_18017bdd0();
    }
    int32_t v2 = *(int32_t *)&g40;
    int32_t v3 = __asm_movss(__asm_movss_31(v2)); // bp-1256, 0x18021c71a
    __asm_movss(__asm_movss_31(v2));
    __asm_movss(__asm_movss_31(v2));
    __asm_movss(__asm_movss_31(v2));
    __asm_rep_movsb_memcpy((char *)(v1 + 240), (char *)&v3, 16);
    int32_t v4 = *(int32_t *)&g38;
    int32_t v5 = __asm_movss(__asm_movss_31(v4)); // bp-1240, 0x18021c780
    __asm_movss(__asm_movss_31(v4));
    __asm_movss(__asm_movss_31(v4));
    __asm_movss(__asm_movss_31(v2));
    __asm_rep_movsb_memcpy((char *)(v1 + 256), (char *)&v5, 16);
    int32_t v6 = *(int32_t *)&g34;
    int32_t v7 = __asm_movss(__asm_movss_31(v6)); // bp-1224, 0x18021c7e6
    __asm_movss(__asm_movss_31(v6));
    __asm_movss(__asm_movss_31(v6));
    int128_t v8 = __asm_movss_31(0x3f70a3d7); // 0x18021c808
    __asm_movss(v8);
    __asm_rep_movsb_memcpy((char *)(v1 + 272), (char *)&v7, 16);
    int128_t v9 = __asm_xorps(v8, v8); // 0x18021c844
    int32_t v10 = __asm_movss(v9); // bp-1208, 0x18021c847
    int128_t v11 = __asm_xorps(v9, v9); // 0x18021c850
    __asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x18021c85c
    __asm_movss(v12);
    __asm_movss(__asm_xorps(v12, v12));
    __asm_rep_movsb_memcpy((char *)(v1 + 288), (char *)&v10, 16);
    int32_t v13 = __asm_movss(__asm_movss_31(0x3da3d70a)); // bp-1192, 0x18021c8ad
    __asm_movss(__asm_movss_31(0x3da3d70a));
    __asm_movss(__asm_movss_31(0x3da3d70a));
    __asm_movss(__asm_movss_31(0x3f70a3d7));
    __asm_rep_movsb_memcpy((char *)(v1 + 304), (char *)&v13, 16);
    int32_t v14 = __asm_movss(__asm_movss_31(0x3edc28f6)); // bp-1176, 0x18021c922
    __asm_movss(__asm_movss_31(0x3edc28f6));
    __asm_movss(__asm_movss_31(v4));
    int128_t v15 = __asm_movss_31(v4); // 0x18021c94d
    __asm_movss(v15);
    char * v16 = (char *)(v1 + 320); // 0x18021c98d
    __asm_rep_movsb_memcpy(v16, (char *)&v14, 16);
    int128_t v17 = __asm_xorps(v15, v15); // 0x18021c98f
    int32_t v18 = __asm_movss(v17); // bp-1160, 0x18021c992
    int128_t v19 = __asm_xorps(v17, v17); // 0x18021c99b
    __asm_movss(v19);
    int128_t v20 = __asm_xorps(v19, v19); // 0x18021c9a7
    __asm_movss(v20);
    __asm_movss(__asm_xorps(v20, v20));
    __asm_rep_movsb_memcpy((char *)(v1 + 336), (char *)&v18, 16);
    int32_t v21 = __asm_movss(__asm_movss_31(0x3e23d70a)); // bp-1144, 0x18021c9f8
    __asm_movss(__asm_movss_31(0x3e947ae1));
    __asm_movss(__asm_movss_31(0x3ef5c28f));
    __asm_movss(__asm_movss_31(0x3f0a3d71));
    __asm_rep_movsb_memcpy((char *)(v1 + 352), (char *)&v21, 16);
    int32_t v22 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-1128, 0x18021ca6d
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 368), (char *)&v22, 16);
    int32_t v23 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-1112, 0x18021cae2
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f2b851f));
    __asm_rep_movsb_memcpy((char *)(v1 + 384), (char *)&v23, 16);
    int32_t v24 = __asm_movss(__asm_movss_31(0x3d23d70a)); // bp-1096, 0x18021cb57
    __asm_movss(__asm_movss_31(0x3d23d70a));
    __asm_movss(__asm_movss_31(0x3d23d70a));
    int32_t v25 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v25));
    int64_t v26 = v1 + 400; // 0x18021cbb1
    __asm_rep_movsb_memcpy((char *)v26, (char *)&v24, 16);
    int32_t v27 = __asm_movss(__asm_movss_31(0x3e23d70a)); // bp-1288, 0x18021cbcc
    __asm_movss(__asm_movss_31(0x3e947ae1));
    __asm_movss(__asm_movss_31(0x3ef5c28f));
    int128_t v28 = __asm_movss_31(v25); // 0x18021cbee
    __asm_movss(v28);
    int64_t v29 = v1 + 416; // 0x18021cc17
    __asm_rep_movsb_memcpy((char *)v29, (char *)&v27, 16);
    int128_t v30 = __asm_xorps(v28, v28); // 0x18021cc2a
    int32_t v31 = __asm_movss(v30); // bp-1080, 0x18021cc2d
    int128_t v32 = __asm_xorps(v30, v30); // 0x18021cc36
    __asm_movss(v32);
    __asm_movss(__asm_xorps(v32, v32));
    __asm_movss(__asm_movss_31(0x3f028f5c));
    __asm_rep_movsb_memcpy((char *)(v1 + 432), (char *)&v31, 16);
    int32_t v33 = __asm_movss(__asm_movss_31(0x3e0f5c29)); // bp-1064, 0x18021cc98
    __asm_movss(__asm_movss_31(0x3e0f5c29));
    __asm_movss(__asm_movss_31(0x3e0f5c29));
    __asm_movss(__asm_movss_31(v25));
    __asm_rep_movsb_memcpy((char *)(v1 + 448), (char *)&v33, 16);
    int32_t v34 = __asm_movss(__asm_movss_31(0x3ca3d70a)); // bp-1048, 0x18021cd0d
    __asm_movss(__asm_movss_31(0x3ca3d70a));
    __asm_movss(__asm_movss_31(0x3ca3d70a));
    __asm_movss(__asm_movss_31(0x3f07ae14));
    __asm_rep_movsb_memcpy((char *)(v1 + 464), (char *)&v34, 16);
    int32_t v35 = __asm_movss(__asm_movss_31(0x3e9eb852)); // bp-1032, 0x18021cd82
    __asm_movss(__asm_movss_31(0x3e9eb852));
    __asm_movss(__asm_movss_31(0x3e9eb852));
    __asm_movss(__asm_movss_31(v25));
    __asm_rep_movsb_memcpy((char *)(v1 + 480), (char *)&v35, 16);
    int32_t v36 = __asm_movss(__asm_movss_31(0x3ed1eb85)); // bp-1016, 0x18021cdf7
    __asm_movss(__asm_movss_31(0x3ed1eb85));
    __asm_movss(__asm_movss_31(0x3ed1eb85));
    __asm_movss(__asm_movss_31(v25));
    __asm_rep_movsb_memcpy((char *)(v1 + 496), (char *)&v36, 16);
    int32_t v37 = __asm_movss(__asm_movss_31(0x3f028f5c)); // bp-1000, 0x18021ce6c
    __asm_movss(__asm_movss_31(0x3f028f5c));
    __asm_movss(__asm_movss_31(0x3f028f5c));
    __asm_movss(__asm_movss_31(v25));
    __asm_rep_movsb_memcpy((char *)(v1 + 512), (char *)&v37, 16);
    int32_t v38 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-984, 0x18021cee1
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    int32_t v39 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v39));
    __asm_rep_movsb_memcpy((char *)(v1 + 528), (char *)&v38, 16);
    int32_t v40 = __asm_movss(__asm_movss_31(0x3e75c28f)); // bp-968, 0x18021cf56
    __asm_movss(__asm_movss_31(0x3f051eb8));
    __asm_movss(__asm_movss_31(0x3f6147ae));
    __asm_movss(__asm_movss_31(v39));
    __asm_rep_movsb_memcpy((char *)(v1 + 544), (char *)&v40, 16);
    int32_t v41 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-952, 0x18021cfcb
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(v39));
    __asm_rep_movsb_memcpy((char *)(v1 + 560), (char *)&v41, 16);
    int32_t v42 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-936, 0x18021d040
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 576), (char *)&v42, 16);
    int32_t v43 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-920, 0x18021d0b5
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(v39));
    __asm_rep_movsb_memcpy((char *)(v1 + 592), (char *)&v43, 16);
    int32_t v44 = __asm_movss(__asm_movss_31(*(int32_t *)&g34)); // bp-904, 0x18021d12a
    __asm_movss(__asm_movss_31(0x3f07ae14));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(v39));
    __asm_rep_movsb_memcpy((char *)(v1 + 608), (char *)&v44, 16);
    int32_t v45 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-888, 0x18021d19f
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3e9eb852));
    int64_t v46 = v1 + 624; // 0x18021d1f9
    __asm_rep_movsb_memcpy((char *)v46, (char *)&v45, 16);
    int32_t v47 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-872, 0x18021d214
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    char * v48 = (char *)(v1 + 640); // 0x18021d27f
    __asm_rep_movsb_memcpy(v48, (char *)&v47, 16);
    int32_t v49 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-856, 0x18021d289
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    int32_t v50 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v50));
    int64_t v51 = v1 + 656; // 0x18021d2e3
    char * v52 = (char *)v51; // 0x18021d2f4
    __asm_rep_movsb_memcpy(v52, (char *)&v49, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 672), v16, 16);
    int32_t v53 = *(int32_t *)&g35;
    int32_t v54 = __asm_movss(__asm_movss_31(v53)); // bp-840, 0x18021d339
    __asm_movss(__asm_movss_31(0x3ecccccd));
    int32_t v55 = *(int32_t *)&g39;
    __asm_movss(__asm_movss_31(v55));
    __asm_movss(__asm_movss_31(0x3f47ae14));
    __asm_rep_movsb_memcpy((char *)(v1 + 688), (char *)&v54, 16);
    int32_t v56 = __asm_movss(__asm_movss_31(v53)); // bp-824, 0x18021d3ae
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_movss(__asm_movss_31(v55));
    __asm_movss(__asm_movss_31(v50));
    __asm_rep_movsb_memcpy((char *)(v1 + 704), (char *)&v56, 16);
    int32_t v57 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-808, 0x18021d423
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 720), (char *)&v57, 16);
    int32_t v58 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-792, 0x18021d498
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f2b851f));
    __asm_rep_movsb_memcpy((char *)(v1 + 736), (char *)&v58, 16);
    int32_t v59 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-776, 0x18021d50d
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f733333));
    __asm_rep_movsb_memcpy((char *)(v1 + 752), (char *)&v59, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 768), v48, 16);
    __asm_movss_31(0x3f4ccccd);
    int64_t v60; // bp-96, 0x18021c6c0
    int64_t v61 = function_180230260(&v60, v46, v29); // 0x18021d5f3
    int64_t v62 = v1 + 784; // 0x18021d606
    __asm_rep_movsb_memcpy((char *)v62, (char *)v61, 16);
    __asm_movss_31(0x3f19999a);
    int64_t v63; // bp-80, 0x18021c6c0
    int64_t v64 = function_180230260(&v63, v51, v29); // 0x18021d652
    int64_t v65 = v1 + 800; // 0x18021d665
    __asm_rep_movsb_memcpy((char *)v65, (char *)v64, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 816), v52, 16);
    __asm_movss_31(0x3f4ccccd);
    int64_t v66; // bp-64, 0x18021c6c0
    int64_t v67 = function_180230260(&v66, v62, v26); // 0x18021d6ec
    __asm_rep_movsb_memcpy((char *)(v1 + 832), (char *)v67, 16);
    __asm_movss_31(0x3ecccccd);
    int64_t v68; // bp-48, 0x18021c6c0
    int64_t v69 = function_180230260(&v68, v65, v26); // 0x18021d74b
    __asm_rep_movsb_memcpy((char *)(v1 + 848), (char *)v69, 16);
    int32_t v70 = *(int32_t *)&g38;
    int32_t v71 = __asm_movss(__asm_movss_31(v70)); // bp-760, 0x18021d774
    __asm_movss(__asm_movss_31(v70));
    __asm_movss(__asm_movss_31(v70));
    int32_t v72 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v72));
    __asm_rep_movsb_memcpy((char *)(v1 + 864), (char *)&v71, 16);
    int32_t v73 = __asm_movss(__asm_movss_31(0x3f1c28f6)); // bp-744, 0x18021d7e9
    __asm_movss(__asm_movss_31(0x3f1c28f6));
    __asm_movss(__asm_movss_31(0x3f1c28f6));
    __asm_movss(__asm_movss_31(v72));
    __asm_rep_movsb_memcpy((char *)(v1 + 880), (char *)&v73, 16);
    int32_t v74 = __asm_movss(__asm_movss_31(v72)); // bp-728, 0x18021d85e
    __asm_movss(__asm_movss_31(0x3edc28f6));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_movss(__asm_movss_31(v72));
    __asm_rep_movsb_memcpy((char *)(v1 + 896), (char *)&v74, 16);
    int32_t v75 = __asm_movss(__asm_movss_31(0x3f666666)); // bp-712, 0x18021d8d3
    int128_t v76 = __asm_movss_31(0x3f333333); // 0x18021d8dc
    __asm_movss(v76);
    __asm_movss(__asm_xorps(v76, v76));
    __asm_movss(__asm_movss_31(v72));
    __asm_rep_movsb_memcpy((char *)(v1 + 912), (char *)&v75, 16);
    int32_t v77 = __asm_movss(__asm_movss_31(v72)); // bp-696, 0x18021d943
    int128_t v78 = __asm_movss_31(0x3f19999a); // 0x18021d94c
    __asm_movss(v78);
    __asm_movss(__asm_xorps(v78, v78));
    __asm_movss(__asm_movss_31(v72));
    __asm_rep_movsb_memcpy((char *)(v1 + 928), (char *)&v77, 16);
    int32_t v79 = __asm_movss(__asm_movss_31(0x3e428f5c)); // bp-680, 0x18021d9b3
    __asm_movss(__asm_movss_31(0x3e428f5c));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_movss(__asm_movss_31(v72));
    __asm_rep_movsb_memcpy((char *)(v1 + 944), (char *)&v79, 16);
    int32_t v80 = __asm_movss(__asm_movss_31(0x3e9eb852)); // bp-1272, 0x18021da28
    __asm_movss(__asm_movss_31(0x3e9eb852));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_movss(__asm_movss_31(v72));
    __asm_rep_movsb_memcpy((char *)(v1 + 960), (char *)&v80, 16);
    int32_t v81 = __asm_movss(__asm_movss_31(0x3e6b851f)); // bp-664, 0x18021da8e
    __asm_movss(__asm_movss_31(0x3e6b851f));
    __asm_movss(__asm_movss_31(0x3e800000));
    int128_t v82 = __asm_movss_31(v72); // 0x18021dab9
    __asm_movss(v82);
    __asm_rep_movsb_memcpy((char *)(v1 + 976), (char *)&v81, 16);
    int128_t v83 = __asm_xorps(v82, v82); // 0x18021dafb
    int32_t v84 = __asm_movss(v83); // bp-648, 0x18021dafe
    int128_t v85 = __asm_xorps(v83, v83); // 0x18021db07
    __asm_movss(v85);
    int128_t v86 = __asm_xorps(v85, v85); // 0x18021db13
    __asm_movss(v86);
    __asm_movss(__asm_xorps(v86, v86));
    __asm_rep_movsb_memcpy((char *)(v1 + 992), (char *)&v84, 16);
    int32_t v87 = *(int32_t *)&g40;
    int32_t v88 = __asm_movss(__asm_movss_31(v87)); // bp-632, 0x18021db64
    __asm_movss(__asm_movss_31(v87));
    __asm_movss(__asm_movss_31(v87));
    __asm_movss(__asm_movss_31(*(int32_t *)&g34));
    __asm_rep_movsb_memcpy((char *)(v1 + 1008), (char *)&v88, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 1024), v52, 16);
    int32_t v89 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-616, 0x18021dc14
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1040), (char *)&v89, 16);
    int32_t v90 = __asm_movss(__asm_movss_31(v87)); // bp-600, 0x18021dc89
    int128_t v91 = __asm_movss_31(v87); // 0x18021dc92
    __asm_movss(v91);
    __asm_movss(__asm_xorps(v91, v91));
    __asm_movss(__asm_movss_31(0x3f666666));
    __asm_rep_movsb_memcpy((char *)(v1 + 1056), (char *)&v90, 16);
    int32_t v92 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-584, 0x18021dcf9
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(v87));
    __asm_rep_movsb_memcpy((char *)(v1 + 1072), (char *)&v92, 16);
    int32_t v93 = __asm_movss(__asm_movss_31(v87)); // bp-568, 0x18021dd6e
    __asm_movss(__asm_movss_31(v87));
    __asm_movss(__asm_movss_31(v87));
    __asm_movss(__asm_movss_31(0x3f333333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1088), (char *)&v93, 16);
    int32_t v94 = __asm_movss(__asm_movss_31(0x3f4ccccd)); // bp-552, 0x18021dde3
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 1104), (char *)&v94, 16);
    int32_t v95 = __asm_movss(__asm_movss_31(0x3f4ccccd)); // bp-536, 0x18021de58
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1120), (char *)&v95, 16);
    return 880;
}

// Address range: 0x18021dee0 - 0x18021f6e5
int64_t function_18021dee0(int64_t a1) {
    int64_t v1 = a1; // 0x18021def7
    if (a1 == 0) {
        // 0x18021df08
        v1 = function_18017bdd0();
    }
    // 0x18021df12
    int128_t v2; // 0x18021dee0
    int128_t v3 = __asm_xorps(v2, v2); // 0x18021df32
    int32_t v4 = __asm_movss(v3); // bp-1256, 0x18021df35
    int128_t v5 = __asm_xorps(v3, v3); // 0x18021df3b
    __asm_movss(v5);
    __asm_movss(__asm_xorps(v5, v5));
    int32_t v6 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v6));
    __asm_rep_movsb_memcpy((char *)(v1 + 240), (char *)&v4, 16);
    int32_t v7 = __asm_movss(__asm_movss_31(0x3f19999a)); // bp-1240, 0x18021df91
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_movss(__asm_movss_31(v6));
    __asm_rep_movsb_memcpy((char *)(v1 + 256), (char *)&v7, 16);
    int32_t v8 = __asm_movss(__asm_movss_31(0x3f70a3d7)); // bp-1224, 0x18021dff7
    __asm_movss(__asm_movss_31(0x3f70a3d7));
    __asm_movss(__asm_movss_31(0x3f70a3d7));
    int128_t v9 = __asm_movss_31(v6); // 0x18021e019
    __asm_movss(v9);
    __asm_rep_movsb_memcpy((char *)(v1 + 272), (char *)&v8, 16);
    int128_t v10 = __asm_xorps(v9, v9); // 0x18021e055
    int32_t v11 = __asm_movss(v10); // bp-1208, 0x18021e058
    int128_t v12 = __asm_xorps(v10, v10); // 0x18021e061
    __asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x18021e06d
    __asm_movss(v13);
    __asm_movss(__asm_xorps(v13, v13));
    __asm_rep_movsb_memcpy((char *)(v1 + 288), (char *)&v11, 16);
    int32_t v14 = __asm_movss(__asm_movss_31(v6)); // bp-1192, 0x18021e0be
    __asm_movss(__asm_movss_31(v6));
    __asm_movss(__asm_movss_31(v6));
    int128_t v15 = __asm_movss_31(0x3f7ae148); // 0x18021e0e9
    __asm_movss(v15);
    __asm_rep_movsb_memcpy((char *)(v1 + 304), (char *)&v14, 16);
    int128_t v16 = __asm_xorps(v15, v15); // 0x18021e12b
    int32_t v17 = __asm_movss(v16); // bp-1176, 0x18021e12e
    int128_t v18 = __asm_xorps(v16, v16); // 0x18021e137
    __asm_movss(v18);
    __asm_movss(__asm_xorps(v18, v18));
    int128_t v19 = __asm_movss_31(*(int32_t *)&g37); // 0x18021e14f
    __asm_movss(v19);
    __asm_rep_movsb_memcpy((char *)(v1 + 320), (char *)&v17, 16);
    int128_t v20 = __asm_xorps(v19, v19); // 0x18021e191
    int32_t v21 = __asm_movss(v20); // bp-1160, 0x18021e194
    int128_t v22 = __asm_xorps(v20, v20); // 0x18021e19d
    __asm_movss(v22);
    int128_t v23 = __asm_xorps(v22, v22); // 0x18021e1a9
    __asm_movss(v23);
    __asm_movss(__asm_xorps(v23, v23));
    __asm_rep_movsb_memcpy((char *)(v1 + 336), (char *)&v21, 16);
    int32_t v24 = __asm_movss(__asm_movss_31(v6)); // bp-1144, 0x18021e1fa
    __asm_movss(__asm_movss_31(v6));
    __asm_movss(__asm_movss_31(v6));
    __asm_movss(__asm_movss_31(v6));
    __asm_rep_movsb_memcpy((char *)(v1 + 352), (char *)&v24, 16);
    int32_t v25 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-1128, 0x18021e26f
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 368), (char *)&v25, 16);
    int32_t v26 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-1112, 0x18021e2e4
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f2b851f));
    __asm_rep_movsb_memcpy((char *)(v1 + 384), (char *)&v26, 16);
    int32_t v27 = __asm_movss(__asm_movss_31(0x3f75c28f)); // bp-1096, 0x18021e359
    __asm_movss(__asm_movss_31(0x3f75c28f));
    __asm_movss(__asm_movss_31(0x3f75c28f));
    int32_t v28 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v28));
    int64_t v29 = v1 + 400; // 0x18021e3b3
    __asm_rep_movsb_memcpy((char *)v29, (char *)&v27, 16);
    int32_t v30 = __asm_movss(__asm_movss_31(0x3f51eb85)); // bp-1288, 0x18021e3ce
    __asm_movss(__asm_movss_31(0x3f51eb85));
    __asm_movss(__asm_movss_31(0x3f51eb85));
    __asm_movss(__asm_movss_31(v28));
    int64_t v31 = v1 + 416; // 0x18021e419
    __asm_rep_movsb_memcpy((char *)v31, (char *)&v30, 16);
    int32_t v32 = __asm_movss(__asm_movss_31(v28)); // bp-1080, 0x18021e434
    __asm_movss(__asm_movss_31(v28));
    __asm_movss(__asm_movss_31(v28));
    __asm_movss(__asm_movss_31(0x3f028f5c));
    __asm_rep_movsb_memcpy((char *)(v1 + 432), (char *)&v32, 16);
    int32_t v33 = __asm_movss(__asm_movss_31(0x3f5c28f6)); // bp-1064, 0x18021e4a9
    __asm_movss(__asm_movss_31(0x3f5c28f6));
    __asm_movss(__asm_movss_31(0x3f5c28f6));
    __asm_movss(__asm_movss_31(v28));
    __asm_rep_movsb_memcpy((char *)(v1 + 448), (char *)&v33, 16);
    int32_t v34 = __asm_movss(__asm_movss_31(0x3f7ae148)); // bp-1048, 0x18021e51e
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f07ae14));
    __asm_rep_movsb_memcpy((char *)(v1 + 464), (char *)&v34, 16);
    int32_t v35 = __asm_movss(__asm_movss_31(0x3f30a3d7)); // bp-1032, 0x18021e593
    __asm_movss(__asm_movss_31(0x3f30a3d7));
    __asm_movss(__asm_movss_31(0x3f30a3d7));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 480), (char *)&v35, 16);
    int32_t v36 = __asm_movss(__asm_movss_31(0x3efae148)); // bp-1016, 0x18021e608
    __asm_movss(__asm_movss_31(0x3efae148));
    __asm_movss(__asm_movss_31(0x3efae148));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 496), (char *)&v36, 16);
    int32_t v37 = __asm_movss(__asm_movss_31(0x3efae148)); // bp-1000, 0x18021e67d
    __asm_movss(__asm_movss_31(0x3efae148));
    __asm_movss(__asm_movss_31(0x3efae148));
    __asm_movss(__asm_movss_31(v28));
    __asm_rep_movsb_memcpy((char *)(v1 + 512), (char *)&v37, 16);
    int32_t v38 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-984, 0x18021e6f2
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    int32_t v39 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v39));
    __asm_rep_movsb_memcpy((char *)(v1 + 528), (char *)&v38, 16);
    int32_t v40 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-968, 0x18021e767
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f47ae14));
    __asm_rep_movsb_memcpy((char *)(v1 + 544), (char *)&v40, 16);
    int32_t v41 = __asm_movss(__asm_movss_31(0x3eeb851f)); // bp-952, 0x18021e7dc
    __asm_movss(__asm_movss_31(0x3f0a3d71));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_rep_movsb_memcpy((char *)(v1 + 560), (char *)&v41, 16);
    int32_t v42 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-936, 0x18021e851
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 576), (char *)&v42, 16);
    int32_t v43 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-920, 0x18021e8c6
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(v39));
    __asm_rep_movsb_memcpy((char *)(v1 + 592), (char *)&v43, 16);
    int32_t v44 = __asm_movss(__asm_movss_31(*(int32_t *)&g34)); // bp-904, 0x18021e93b
    __asm_movss(__asm_movss_31(0x3f07ae14));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(v39));
    __asm_rep_movsb_memcpy((char *)(v1 + 608), (char *)&v44, 16);
    int32_t v45 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-888, 0x18021e9b0
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3e9eb852));
    int64_t v46 = v1 + 624; // 0x18021ea0a
    __asm_rep_movsb_memcpy((char *)v46, (char *)&v45, 16);
    int32_t v47 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-872, 0x18021ea25
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    char * v48 = (char *)(v1 + 640); // 0x18021ea90
    __asm_rep_movsb_memcpy(v48, (char *)&v47, 16);
    int32_t v49 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-856, 0x18021ea9a
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    int32_t v50 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v50));
    int64_t v51 = v1 + 656; // 0x18021eaf4
    char * v52 = (char *)v51; // 0x18021eb05
    __asm_rep_movsb_memcpy(v52, (char *)&v49, 16);
    int32_t v53 = __asm_movss(__asm_movss_31(0x3ec7ae14)); // bp-840, 0x18021eb0f
    __asm_movss(__asm_movss_31(0x3ec7ae14));
    __asm_movss(__asm_movss_31(0x3ec7ae14));
    __asm_movss(__asm_movss_31(0x3f1eb852));
    __asm_rep_movsb_memcpy((char *)(v1 + 672), (char *)&v53, 16);
    int32_t v54 = __asm_movss(__asm_movss_31(0x3e0f5c29)); // bp-824, 0x18021eb84
    __asm_movss(__asm_movss_31(0x3ee147ae));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3f47ae14));
    __asm_rep_movsb_memcpy((char *)(v1 + 688), (char *)&v54, 16);
    int32_t v55 = __asm_movss(__asm_movss_31(0x3e0f5c29)); // bp-808, 0x18021ebf9
    __asm_movss(__asm_movss_31(0x3ee147ae));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(v50));
    __asm_rep_movsb_memcpy((char *)(v1 + 704), (char *)&v55, 16);
    int32_t v56 = __asm_movss(__asm_movss_31(0x3eb33333)); // bp-792, 0x18021ec6e
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_movss(__asm_movss_31(0x3e2e147b));
    __asm_rep_movsb_memcpy((char *)(v1 + 720), (char *)&v56, 16);
    int32_t v57 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-776, 0x18021ece3
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f2b851f));
    __asm_rep_movsb_memcpy((char *)(v1 + 736), (char *)&v57, 16);
    int32_t v58 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-760, 0x18021ed58
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f733333));
    __asm_rep_movsb_memcpy((char *)(v1 + 752), (char *)&v58, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 768), v48, 16);
    __asm_movss_31(0x3f666666);
    int64_t v59; // bp-96, 0x18021dee0
    int64_t v60 = function_180230260(&v59, v46, v31); // 0x18021ee3e
    int64_t v61 = v1 + 784; // 0x18021ee51
    __asm_rep_movsb_memcpy((char *)v61, (char *)v60, 16);
    __asm_movss_31(0x3f19999a);
    int64_t v62; // bp-80, 0x18021dee0
    int64_t v63 = function_180230260(&v62, v51, v31); // 0x18021ee9d
    int64_t v64 = v1 + 800; // 0x18021eeb0
    __asm_rep_movsb_memcpy((char *)v64, (char *)v63, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 816), v52, 16);
    __asm_movss_31(0x3f4ccccd);
    int64_t v65; // bp-64, 0x18021dee0
    int64_t v66 = function_180230260(&v65, v61, v29); // 0x18021ef37
    __asm_rep_movsb_memcpy((char *)(v1 + 832), (char *)v66, 16);
    __asm_movss_31(0x3ecccccd);
    int64_t v67; // bp-48, 0x18021dee0
    int64_t v68 = function_180230260(&v67, v64, v29); // 0x18021ef96
    __asm_rep_movsb_memcpy((char *)(v1 + 848), (char *)v68, 16);
    int32_t v69 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-744, 0x18021efbf
    __asm_movss(__asm_movss_31(0x3f170a3d));
    int32_t v70 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v70));
    __asm_movss(__asm_movss_31(v70));
    __asm_rep_movsb_memcpy((char *)(v1 + 864), (char *)&v69, 16);
    int32_t v71 = __asm_movss(__asm_movss_31(0x3ec7ae14)); // bp-728, 0x18021f034
    __asm_movss(__asm_movss_31(0x3ec7ae14));
    __asm_movss(__asm_movss_31(0x3ec7ae14));
    __asm_movss(__asm_movss_31(v70));
    __asm_rep_movsb_memcpy((char *)(v1 + 880), (char *)&v71, 16);
    int32_t v72 = __asm_movss(__asm_movss_31(v70)); // bp-712, 0x18021f0a9
    __asm_movss(__asm_movss_31(0x3edc28f6));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_movss(__asm_movss_31(v70));
    __asm_rep_movsb_memcpy((char *)(v1 + 896), (char *)&v72, 16);
    int32_t v73 = __asm_movss(__asm_movss_31(0x3f666666)); // bp-696, 0x18021f11e
    int128_t v74 = __asm_movss_31(0x3f333333); // 0x18021f127
    __asm_movss(v74);
    __asm_movss(__asm_xorps(v74, v74));
    __asm_movss(__asm_movss_31(v70));
    __asm_rep_movsb_memcpy((char *)(v1 + 912), (char *)&v73, 16);
    int32_t v75 = __asm_movss(__asm_movss_31(v70)); // bp-680, 0x18021f18e
    int128_t v76 = __asm_movss_31(0x3ee66666); // 0x18021f197
    __asm_movss(v76);
    __asm_movss(__asm_xorps(v76, v76));
    __asm_movss(__asm_movss_31(v70));
    __asm_rep_movsb_memcpy((char *)(v1 + 928), (char *)&v75, 16);
    int32_t v77 = __asm_movss(__asm_movss_31(0x3f47ae14)); // bp-1272, 0x18021f1fe
    __asm_movss(__asm_movss_31(0x3f5eb852));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(v70));
    __asm_rep_movsb_memcpy((char *)(v1 + 944), (char *)&v77, 16);
    int32_t v78 = __asm_movss(__asm_movss_31(0x3f11eb85)); // bp-664, 0x18021f264
    __asm_movss(__asm_movss_31(0x3f11eb85));
    __asm_movss(__asm_movss_31(0x3f23d70a));
    __asm_movss(__asm_movss_31(v70));
    __asm_rep_movsb_memcpy((char *)(v1 + 960), (char *)&v78, 16);
    int32_t v79 = __asm_movss(__asm_movss_31(0x3f2e147b)); // bp-648, 0x18021f2d9
    __asm_movss(__asm_movss_31(0x3f2e147b));
    __asm_movss(__asm_movss_31(0x3f3d70a4));
    int128_t v80 = __asm_movss_31(*(int32_t *)&g40); // 0x18021f304
    __asm_movss(v80);
    __asm_rep_movsb_memcpy((char *)(v1 + 976), (char *)&v79, 16);
    int128_t v81 = __asm_xorps(v80, v80); // 0x18021f346
    int32_t v82 = __asm_movss(v81); // bp-632, 0x18021f349
    int128_t v83 = __asm_xorps(v81, v81); // 0x18021f352
    __asm_movss(v83);
    int128_t v84 = __asm_xorps(v83, v83); // 0x18021f35e
    __asm_movss(v84);
    __asm_movss(__asm_xorps(v84, v84));
    __asm_rep_movsb_memcpy((char *)(v1 + 992), (char *)&v82, 16);
    int32_t v85 = *(int32_t *)&g37;
    int32_t v86 = __asm_movss(__asm_movss_31(v85)); // bp-616, 0x18021f3af
    __asm_movss(__asm_movss_31(v85));
    __asm_movss(__asm_movss_31(v85));
    __asm_movss(__asm_movss_31(0x3db851ec));
    __asm_rep_movsb_memcpy((char *)(v1 + 1008), (char *)&v86, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 1024), v52, 16);
    int32_t v87 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-600, 0x18021f45f
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1040), (char *)&v87, 16);
    int32_t v88 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-584, 0x18021f4d4
    __asm_movss(__asm_movss_31(0x3f170a3d));
    __asm_movss(__asm_movss_31(0x3f7ae148));
    __asm_movss(__asm_movss_31(0x3f733333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1056), (char *)&v88, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 1072), v48, 16);
    int32_t v89 = __asm_movss(__asm_movss_31(0x3f333333)); // bp-568, 0x18021f584
    __asm_movss(__asm_movss_31(0x3f333333));
    __asm_movss(__asm_movss_31(0x3f333333));
    __asm_movss(__asm_movss_31(0x3f333333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1088), (char *)&v89, 16);
    int32_t v90 = __asm_movss(__asm_movss_31(0x3e4ccccd)); // bp-552, 0x18021f5f9
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 1104), (char *)&v90, 16);
    int32_t v91 = __asm_movss(__asm_movss_31(0x3e4ccccd)); // bp-536, 0x18021f66e
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1120), (char *)&v91, 16);
    return 880;
}

// Address range: 0x18021f6f0 - 0x180220eb6
int64_t function_18021f6f0(int64_t a1) {
    int64_t v1 = a1; // 0x18021f707
    if (a1 == 0) {
        // 0x18021f718
        v1 = function_18017bdd0();
    }
    int32_t v2 = __asm_movss(__asm_movss_31(0x3f666666)); // bp-1240, 0x18021f74a
    __asm_movss(__asm_movss_31(0x3f666666));
    __asm_movss(__asm_movss_31(0x3f666666));
    int32_t v3 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v3));
    __asm_rep_movsb_memcpy((char *)(v1 + 240), (char *)&v2, 16);
    int32_t v4 = __asm_movss(__asm_movss_31(0x3f19999a)); // bp-1224, 0x18021f7b0
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_movss(__asm_movss_31(0x3f19999a));
    int128_t v5 = __asm_movss_31(v3); // 0x18021f7d2
    __asm_movss(v5);
    __asm_rep_movsb_memcpy((char *)(v1 + 256), (char *)&v4, 16);
    int128_t v6 = __asm_xorps(v5, v5); // 0x18021f80e
    int32_t v7 = __asm_movss(v6); // bp-1208, 0x18021f811
    int128_t v8 = __asm_xorps(v6, v6); // 0x18021f817
    __asm_movss(v8);
    __asm_movss(__asm_xorps(v8, v8));
    int128_t v9 = __asm_movss_31(0x3f59999a); // 0x18021f829
    __asm_movss(v9);
    __asm_rep_movsb_memcpy((char *)(v1 + 272), (char *)&v7, 16);
    int128_t v10 = __asm_xorps(v9, v9); // 0x18021f865
    int32_t v11 = __asm_movss(v10); // bp-1192, 0x18021f868
    int128_t v12 = __asm_xorps(v10, v10); // 0x18021f871
    __asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x18021f87d
    __asm_movss(v13);
    __asm_movss(__asm_xorps(v13, v13));
    __asm_rep_movsb_memcpy((char *)(v1 + 288), (char *)&v11, 16);
    int32_t v14 = __asm_movss(__asm_movss_31(0x3de147ae)); // bp-1176, 0x18021f8ce
    __asm_movss(__asm_movss_31(0x3de147ae));
    __asm_movss(__asm_movss_31(0x3e0f5c29));
    __asm_movss(__asm_movss_31(0x3f6b851f));
    __asm_rep_movsb_memcpy((char *)(v1 + 304), (char *)&v14, 16);
    int32_t v15 = *(int32_t *)&g38;
    int32_t v16 = __asm_movss(__asm_movss_31(v15)); // bp-1160, 0x18021f943
    __asm_movss(__asm_movss_31(v15));
    __asm_movss(__asm_movss_31(v15));
    int128_t v17 = __asm_movss_31(v15); // 0x18021f96e
    __asm_movss(v17);
    __asm_rep_movsb_memcpy((char *)(v1 + 320), (char *)&v16, 16);
    int128_t v18 = __asm_xorps(v17, v17); // 0x18021f9b0
    int32_t v19 = __asm_movss(v18); // bp-1144, 0x18021f9b3
    int128_t v20 = __asm_xorps(v18, v18); // 0x18021f9bc
    __asm_movss(v20);
    int128_t v21 = __asm_xorps(v20, v20); // 0x18021f9c8
    __asm_movss(v21);
    __asm_movss(__asm_xorps(v21, v21));
    __asm_rep_movsb_memcpy((char *)(v1 + 336), (char *)&v19, 16);
    int32_t v22 = __asm_movss(__asm_movss_31(0x3edc28f6)); // bp-1128, 0x18021fa19
    __asm_movss(__asm_movss_31(0x3edc28f6));
    __asm_movss(__asm_movss_31(0x3edc28f6));
    __asm_movss(__asm_movss_31(0x3ec7ae14));
    __asm_rep_movsb_memcpy((char *)(v1 + 352), (char *)&v22, 16);
    int32_t v23 = __asm_movss(__asm_movss_31(0x3ef0a3d7)); // bp-1112, 0x18021fa8e
    __asm_movss(__asm_movss_31(0x3ef0a3d7));
    __asm_movss(__asm_movss_31(0x3f30a3d7));
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 368), (char *)&v23, 16);
    int32_t v24 = __asm_movss(__asm_movss_31(0x3ed70a3d)); // bp-1096, 0x18021fb03
    __asm_movss(__asm_movss_31(0x3ed1eb85));
    __asm_movss(__asm_movss_31(0x3f23d70a));
    __asm_movss(__asm_movss_31(0x3f30a3d7));
    __asm_rep_movsb_memcpy((char *)(v1 + 384), (char *)&v24, 16);
    int32_t v25 = __asm_movss(__asm_movss_31(0x3e8a3d71)); // bp-1080, 0x18021fb78
    __asm_movss(__asm_movss_31(0x3e8a3d71));
    __asm_movss(__asm_movss_31(0x3f0a3d71));
    __asm_movss(__asm_movss_31(0x3f547ae1));
    int64_t v26 = v1 + 400; // 0x18021fbd2
    __asm_rep_movsb_memcpy((char *)v26, (char *)&v25, 16);
    int32_t v27 = __asm_movss(__asm_movss_31(0x3ea3d70a)); // bp-1272, 0x18021fbed
    __asm_movss(__asm_movss_31(0x3ea3d70a));
    __asm_movss(__asm_movss_31(0x3f2147ae));
    __asm_movss(__asm_movss_31(0x3f5eb852));
    int64_t v28 = v1 + 416; // 0x18021fc38
    __asm_rep_movsb_memcpy((char *)v28, (char *)&v27, 16);
    int32_t v29 = __asm_movss(__asm_movss_31(0x3ecccccd)); // bp-1064, 0x18021fc53
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 432), (char *)&v29, 16);
    int32_t v30 = __asm_movss(__asm_movss_31(0x3ecccccd)); // bp-1048, 0x18021fcc8
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_movss(__asm_movss_31(0x3f0ccccd));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 448), (char *)&v30, 16);
    int32_t v31 = __asm_movss(__asm_movss_31(0x3e4ccccd)); // bp-1032, 0x18021fd3d
    __asm_movss(__asm_movss_31(0x3e800000));
    int32_t v32 = *(int32_t *)&g37;
    __asm_movss(__asm_movss_31(v32));
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_rep_movsb_memcpy((char *)(v1 + 464), (char *)&v31, 16);
    int32_t v33 = __asm_movss(__asm_movss_31(0x3ecccccd)); // bp-1016, 0x18021fdb2
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(v32));
    __asm_rep_movsb_memcpy((char *)(v1 + 480), (char *)&v33, 16);
    int32_t v34 = __asm_movss(__asm_movss_31(0x3ecccccd)); // bp-1000, 0x18021fe27
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 496), (char *)&v34, 16);
    int32_t v35 = __asm_movss(__asm_movss_31(0x3ed1eb85)); // bp-984, 0x18021fe9c
    __asm_movss(__asm_movss_31(0x3ec7ae14));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_rep_movsb_memcpy((char *)(v1 + 512), (char *)&v35, 16);
    int32_t v36 = __asm_movss(__asm_movss_31(0x3f666666)); // bp-968, 0x18021ff11
    __asm_movss(__asm_movss_31(0x3f666666));
    __asm_movss(__asm_movss_31(0x3f666666));
    __asm_movss(__asm_movss_31(*(int32_t *)&g38));
    __asm_rep_movsb_memcpy((char *)(v1 + 528), (char *)&v36, 16);
    int32_t v37 = *(int32_t *)&g40;
    int32_t v38 = __asm_movss(__asm_movss_31(v37)); // bp-952, 0x18021ff86
    __asm_movss(__asm_movss_31(v37));
    __asm_movss(__asm_movss_31(v37));
    __asm_movss(__asm_movss_31(v32));
    __asm_rep_movsb_memcpy((char *)(v1 + 544), (char *)&v38, 16);
    int32_t v39 = __asm_movss(__asm_movss_31(0x3ed1eb85)); // bp-936, 0x18021fffb
    __asm_movss(__asm_movss_31(0x3ec7ae14));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_rep_movsb_memcpy((char *)(v1 + 560), (char *)&v39, 16);
    int32_t v40 = __asm_movss(__asm_movss_31(0x3eb33333)); // bp-920, 0x180220070
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_movss(__asm_movss_31(0x3f1c28f6));
    __asm_movss(__asm_movss_31(0x3f1eb852));
    __asm_rep_movsb_memcpy((char *)(v1 + 576), (char *)&v40, 16);
    int32_t v41 = __asm_movss(__asm_movss_31(0x3ecccccd)); // bp-904, 0x1802200e5
    __asm_movss(__asm_movss_31(0x3ef5c28f));
    __asm_movss(__asm_movss_31(0x3f35c28f));
    __asm_movss(__asm_movss_31(0x3f4a3d71));
    __asm_rep_movsb_memcpy((char *)(v1 + 592), (char *)&v41, 16);
    int32_t v42 = __asm_movss(__asm_movss_31(0x3eeb851f)); // bp-888, 0x18022015a
    __asm_movss(__asm_movss_31(0x3f0a3d71));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(v37));
    __asm_rep_movsb_memcpy((char *)(v1 + 608), (char *)&v42, 16);
    int32_t v43 = __asm_movss(__asm_movss_31(0x3ecccccd)); // bp-872, 0x1802201cf
    __asm_movss(__asm_movss_31(0x3ecccccd));
    __asm_movss(__asm_movss_31(0x3f666666));
    __asm_movss(__asm_movss_31(0x3ee66666));
    int64_t v44 = v1 + 624; // 0x180220229
    __asm_rep_movsb_memcpy((char *)v44, (char *)&v43, 16);
    int32_t v45 = __asm_movss(__asm_movss_31(0x3ee66666)); // bp-856, 0x180220244
    __asm_movss(__asm_movss_31(0x3ee66666));
    __asm_movss(__asm_movss_31(0x3f666666));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    char * v46 = (char *)(v1 + 640); // 0x1802202af
    __asm_rep_movsb_memcpy(v46, (char *)&v45, 16);
    int32_t v47 = __asm_movss(__asm_movss_31(0x3f07ae14)); // bp-840, 0x1802202b9
    __asm_movss(__asm_movss_31(0x3f07ae14));
    __asm_movss(__asm_movss_31(0x3f5eb852));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    int64_t v48 = v1 + 656; // 0x180220313
    char * v49 = (char *)v48; // 0x180220324
    __asm_rep_movsb_memcpy(v49, (char *)&v47, 16);
    int32_t v50 = *(int32_t *)&g38;
    int32_t v51 = __asm_movss(__asm_movss_31(v50)); // bp-824, 0x18022032e
    __asm_movss(__asm_movss_31(v50));
    __asm_movss(__asm_movss_31(v50));
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_rep_movsb_memcpy((char *)(v1 + 672), (char *)&v51, 16);
    int32_t v52 = __asm_movss(__asm_movss_31(0x3f19999a)); // bp-808, 0x1802203a3
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_movss(__asm_movss_31(0x3f333333));
    int32_t v53 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v53));
    __asm_rep_movsb_memcpy((char *)(v1 + 688), (char *)&v52, 16);
    int32_t v54 = __asm_movss(__asm_movss_31(0x3f333333)); // bp-792, 0x180220418
    __asm_movss(__asm_movss_31(0x3f333333));
    __asm_movss(__asm_movss_31(0x3f666666));
    __asm_movss(__asm_movss_31(v53));
    __asm_rep_movsb_memcpy((char *)(v1 + 704), (char *)&v54, 16);
    int32_t v55 = __asm_movss(__asm_movss_31(v53)); // bp-776, 0x18022048d
    __asm_movss(__asm_movss_31(v53));
    __asm_movss(__asm_movss_31(v53));
    __asm_movss(__asm_movss_31(*(int32_t *)&g35));
    __asm_rep_movsb_memcpy((char *)(v1 + 720), (char *)&v55, 16);
    int32_t v56 = __asm_movss(__asm_movss_31(0x3f47ae14)); // bp-760, 0x180220502
    __asm_movss(__asm_movss_31(0x3f51eb85));
    __asm_movss(__asm_movss_31(v53));
    __asm_movss(__asm_movss_31(0x3f19999a));
    __asm_rep_movsb_memcpy((char *)(v1 + 736), (char *)&v56, 16);
    int32_t v57 = __asm_movss(__asm_movss_31(0x3f47ae14)); // bp-744, 0x180220577
    __asm_movss(__asm_movss_31(0x3f51eb85));
    __asm_movss(__asm_movss_31(v53));
    __asm_movss(__asm_movss_31(0x3f666666));
    __asm_rep_movsb_memcpy((char *)(v1 + 752), (char *)&v57, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 768), v46, 16);
    __asm_movss_31(0x3f4ccccd);
    int64_t v58; // bp-96, 0x18021f6f0
    int64_t v59 = function_180230260(&v58, v44, v28); // 0x18022065d
    int64_t v60 = v1 + 784; // 0x180220670
    __asm_rep_movsb_memcpy((char *)v60, (char *)v59, 16);
    __asm_movss_31(0x3f19999a);
    int64_t v61; // bp-80, 0x18021f6f0
    int64_t v62 = function_180230260(&v61, v48, v28); // 0x1802206bc
    int64_t v63 = v1 + 800; // 0x1802206cf
    __asm_rep_movsb_memcpy((char *)v63, (char *)v62, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 816), v49, 16);
    __asm_movss_31(0x3f4ccccd);
    int64_t v64; // bp-64, 0x18021f6f0
    int64_t v65 = function_180230260(&v64, v60, v26); // 0x180220756
    __asm_rep_movsb_memcpy((char *)(v1 + 832), (char *)v65, 16);
    __asm_movss_31(0x3ecccccd);
    int64_t v66; // bp-48, 0x18021f6f0
    int64_t v67 = function_180230260(&v66, v63, v26); // 0x1802207b5
    __asm_rep_movsb_memcpy((char *)(v1 + 848), (char *)v67, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 864), v49, 16);
    int32_t v68 = __asm_movss(__asm_movss_31(v53)); // bp-728, 0x180220819
    __asm_movss(__asm_movss_31(v53));
    int32_t v69 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v69));
    __asm_movss(__asm_movss_31(v69));
    __asm_rep_movsb_memcpy((char *)(v1 + 880), (char *)&v68, 16);
    int32_t v70 = __asm_movss(__asm_movss_31(0x3f666666)); // bp-712, 0x18022088e
    int128_t v71 = __asm_movss_31(0x3f333333); // 0x180220897
    __asm_movss(v71);
    __asm_movss(__asm_xorps(v71, v71));
    __asm_movss(__asm_movss_31(v69));
    __asm_rep_movsb_memcpy((char *)(v1 + 896), (char *)&v70, 16);
    int32_t v72 = __asm_movss(__asm_movss_31(0x3f666666)); // bp-696, 0x1802208fe
    int128_t v73 = __asm_movss_31(0x3f333333); // 0x180220907
    __asm_movss(v73);
    __asm_movss(__asm_xorps(v73, v73));
    __asm_movss(__asm_movss_31(v69));
    __asm_rep_movsb_memcpy((char *)(v1 + 912), (char *)&v72, 16);
    int32_t v74 = __asm_movss(__asm_movss_31(v69)); // bp-680, 0x18022096e
    int128_t v75 = __asm_movss_31(0x3f19999a); // 0x180220977
    __asm_movss(v75);
    __asm_movss(__asm_xorps(v75, v75));
    __asm_movss(__asm_movss_31(v69));
    __asm_rep_movsb_memcpy((char *)(v1 + 928), (char *)&v74, 16);
    int32_t v76 = __asm_movss(__asm_movss_31(0x3e8a3d71)); // bp-1256, 0x1802209de
    __asm_movss(__asm_movss_31(0x3e8a3d71));
    __asm_movss(__asm_movss_31(0x3ec28f5c));
    __asm_movss(__asm_movss_31(v69));
    __asm_rep_movsb_memcpy((char *)(v1 + 944), (char *)&v76, 16);
    int32_t v77 = __asm_movss(__asm_movss_31(0x3e9eb852)); // bp-664, 0x180220a44
    __asm_movss(__asm_movss_31(0x3e9eb852));
    __asm_movss(__asm_movss_31(0x3ee66666));
    __asm_movss(__asm_movss_31(v69));
    __asm_rep_movsb_memcpy((char *)(v1 + 960), (char *)&v77, 16);
    int32_t v78 = __asm_movss(__asm_movss_31(0x3e851eb8)); // bp-648, 0x180220ab9
    __asm_movss(__asm_movss_31(0x3e851eb8));
    __asm_movss(__asm_movss_31(0x3e8f5c29));
    int128_t v79 = __asm_movss_31(v69); // 0x180220ae4
    __asm_movss(v79);
    __asm_rep_movsb_memcpy((char *)(v1 + 976), (char *)&v78, 16);
    int128_t v80 = __asm_xorps(v79, v79); // 0x180220b26
    int32_t v81 = __asm_movss(v80); // bp-632, 0x180220b29
    int128_t v82 = __asm_xorps(v80, v80); // 0x180220b32
    __asm_movss(v82);
    int128_t v83 = __asm_xorps(v82, v82); // 0x180220b3e
    __asm_movss(v83);
    __asm_movss(__asm_xorps(v83, v83));
    __asm_rep_movsb_memcpy((char *)(v1 + 992), (char *)&v81, 16);
    int32_t v84 = *(int32_t *)&g40;
    int32_t v85 = __asm_movss(__asm_movss_31(v84)); // bp-616, 0x180220b8f
    __asm_movss(__asm_movss_31(v84));
    __asm_movss(__asm_movss_31(v84));
    int128_t v86 = __asm_movss_31(0x3d8f5c29); // 0x180220bba
    __asm_movss(v86);
    __asm_rep_movsb_memcpy((char *)(v1 + 1008), (char *)&v85, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 1024), v49, 16);
    int128_t v87 = __asm_xorps(v86, v86); // 0x180220c37
    int32_t v88 = __asm_movss(v87); // bp-600, 0x180220c3a
    __asm_movss(__asm_xorps(v87, v87));
    __asm_movss(__asm_movss_31(v84));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1040), (char *)&v88, 16);
    int32_t v89 = __asm_movss(__asm_movss_31(v84)); // bp-584, 0x180220caa
    int128_t v90 = __asm_movss_31(v84); // 0x180220cb3
    __asm_movss(v90);
    __asm_movss(__asm_xorps(v90, v90));
    __asm_movss(__asm_movss_31(0x3f666666));
    __asm_rep_movsb_memcpy((char *)(v1 + 1056), (char *)&v89, 16);
    __asm_rep_movsb_memcpy((char *)(v1 + 1072), v46, 16);
    int32_t v91 = __asm_movss(__asm_movss_31(v84)); // bp-568, 0x180220d55
    __asm_movss(__asm_movss_31(v84));
    __asm_movss(__asm_movss_31(v84));
    __asm_movss(__asm_movss_31(0x3f333333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1088), (char *)&v91, 16);
    int32_t v92 = __asm_movss(__asm_movss_31(0x3f4ccccd)); // bp-552, 0x180220dca
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_rep_movsb_memcpy((char *)(v1 + 1104), (char *)&v92, 16);
    int32_t v93 = __asm_movss(__asm_movss_31(0x3e4ccccd)); // bp-536, 0x180220e3f
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    __asm_movss(__asm_movss_31(0x3eb33333));
    __asm_rep_movsb_memcpy((char *)(v1 + 1120), (char *)&v93, 16);
    return 880;
}


