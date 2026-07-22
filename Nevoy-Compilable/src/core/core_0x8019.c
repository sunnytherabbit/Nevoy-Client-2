// Core group: core_0x8019
// Address range: 0x1801900b0 - 0x1801900e4
int64_t function_1801900b0(int64_t a1, int64_t a2, int64_t result) {
    // 0x1801900b0
    g715 = a1;
    g716 = a2;
    g1202 = result;
    return result;
}

// Address range: 0x1801900f0 - 0x18019012d
int64_t function_1801900f0(int64_t a1, int64_t a2, int64_t result) {
    // 0x1801900f0
    *(int64_t *)a1 = g715;
    *(int64_t *)a2 = g716;
    *(int64_t *)result = g1202;
    return result;
}

// Address range: 0x180190140 - 0x1801901b1
int64_t function_180190140(int64_t a1) {
    int64_t result = g715; // 0x180190149
    if (g1201 != NULL) {
        int64_t v1 = (int64_t)g1201; // 0x18019017e
        function_1801a8b50(v1 + 0x6220, *(int32_t *)(v1 + 0x3fc0), result, a1, v1, result);
    }
    // 0x1801901a7
    return result;
}

// Address range: 0x1801901c0 - 0x180190232
int64_t function_1801901c0(int64_t a1) {
    if (a1 == 0) {
        // 0x180190210
        return g716;
    }
    // 0x1801901d1
    if (g1201 != NULL) {
        int64_t v1 = (int64_t)g1201; // 0x1801901e5
        int32_t v2 = *(int32_t *)(v1 + 0x3fc0); // 0x180190201
        function_1801a8b50(v1 + 0x6220, v2, a1, -1, v1, (int64_t)&g1381);
    }
    // 0x180190210
    return g716;
}

// Address range: 0x180190240 - 0x180190cac
int64_t function_180190240(int64_t result) {
    int64_t v1 = result + 8; // 0x180190254
    int128_t v2; // 0x180190240
    int128_t v3 = __asm_xorps(v2, v2); // 0x180190262
    *(int32_t *)v1 = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x18019026e
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(v4);
    int64_t v5 = result + 24; // 0x18019027e
    int128_t v6 = __asm_xorps(v4, v4); // 0x18019028c
    *(int32_t *)v5 = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x180190298
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(v7);
    int64_t v8 = result + 32; // 0x1801902a8
    int128_t v9 = __asm_xorps(v7, v7); // 0x1801902b6
    *(int32_t *)v8 = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x1801902c2
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v10);
    int64_t v11 = result + 60; // 0x1801902d2
    int128_t v12 = __asm_xorps(v10, v10); // 0x1801902e0
    *(int32_t *)v11 = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x1801902ec
    *(int32_t *)(result + 64) = (int32_t)__asm_movss(v13);
    int64_t v14 = result + 76; // 0x1801902fc
    int128_t v15 = __asm_xorps(v13, v13); // 0x18019030a
    *(int32_t *)v14 = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x180190316
    *(int32_t *)(result + 80) = (int32_t)__asm_movss(v16);
    int64_t v17 = result + 84; // 0x180190326
    int128_t v18 = __asm_xorps(v16, v16); // 0x180190334
    *(int32_t *)v17 = (int32_t)__asm_movss(v18);
    int128_t v19 = __asm_xorps(v18, v18); // 0x180190340
    *(int32_t *)(result + 88) = (int32_t)__asm_movss(v19);
    int64_t v20 = result + 92; // 0x180190350
    int128_t v21 = __asm_xorps(v19, v19); // 0x18019035e
    *(int32_t *)v20 = (int32_t)__asm_movss(v21);
    int128_t v22 = __asm_xorps(v21, v21); // 0x18019036a
    *(int32_t *)(result + 96) = (int32_t)__asm_movss(v22);
    int64_t v23 = result + 100; // 0x18019037a
    int128_t v24 = __asm_xorps(v22, v22); // 0x180190388
    *(int32_t *)v23 = (int32_t)__asm_movss(v24);
    int128_t v25 = __asm_xorps(v24, v24); // 0x180190394
    *(int32_t *)(result + 104) = (int32_t)__asm_movss(v25);
    int64_t v26 = result + 160; // 0x1801903a4
    int128_t v27 = __asm_xorps(v25, v25); // 0x1801903b4
    *(int32_t *)v26 = (int32_t)__asm_movss(v27);
    int128_t v28 = __asm_xorps(v27, v27); // 0x1801903c0
    *(int32_t *)(result + 164) = (int32_t)__asm_movss(v28);
    int64_t v29 = result + 172; // 0x1801903d0
    int128_t v30 = __asm_xorps(v28, v28); // 0x1801903e0
    *(int32_t *)v29 = (int32_t)__asm_movss(v30);
    int128_t v31 = __asm_xorps(v30, v30); // 0x1801903ec
    *(int32_t *)(result + 176) = (int32_t)__asm_movss(v31);
    int64_t v32 = result + 180; // 0x1801903fc
    int128_t v33 = __asm_xorps(v31, v31); // 0x180190412
    *(int32_t *)v32 = (int32_t)__asm_movss(v33);
    int128_t v34 = __asm_xorps(v33, v33); // 0x180190421
    *(int32_t *)(result + 184) = (int32_t)__asm_movss(v34);
    int64_t v35 = result + 192; // 0x180190431
    int128_t v36 = __asm_xorps(v34, v34); // 0x180190447
    *(int32_t *)v35 = (int32_t)__asm_movss(v36);
    int128_t v37 = __asm_xorps(v36, v36); // 0x180190456
    *(int32_t *)(result + 196) = (int32_t)__asm_movss(v37);
    int64_t v38 = result + 200; // 0x180190466
    int128_t v39 = __asm_xorps(v37, v37); // 0x18019047c
    *(int32_t *)v38 = (int32_t)__asm_movss(v39);
    int128_t v40 = __asm_xorps(v39, v39); // 0x18019048b
    *(int32_t *)(result + 204) = (int32_t)__asm_movss(v40);
    int64_t v41 = result + 208; // 0x18019049b
    int128_t v42 = __asm_xorps(v40, v40); // 0x1801904b1
    *(int32_t *)v41 = (int32_t)__asm_movss(v42);
    int128_t v43 = __asm_xorps(v42, v42); // 0x1801904c0
    *(int32_t *)(result + 212) = (int32_t)__asm_movss(v43);
    int64_t v44 = result + 216; // 0x1801904d0
    int128_t v45 = __asm_xorps(v43, v43); // 0x1801904e6
    *(int32_t *)v44 = (int32_t)__asm_movss(v45);
    *(int32_t *)(result + 220) = (int32_t)__asm_movss(__asm_xorps(v45, v45));
    int32_t v46 = *(int32_t *)&g40;
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31(v46));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31(0x3f19999a));
    int32_t v47 = __asm_movss(__asm_movss_31(0x41000000)); // bp-272, 0x18019059a
    int128_t v48 = __asm_movss_31(0x41000000); // 0x1801905a3
    __asm_movss(v48);
    *(int64_t *)v1 = *(int64_t *)&v47;
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(__asm_xorps(v48, v48));
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(__asm_movss_31(v46));
    int32_t v49 = __asm_movss(__asm_movss_31(0x42000000)); // bp-264, 0x180190608
    int128_t v50 = __asm_movss_31(0x42000000); // 0x180190611
    __asm_movss(v50);
    *(int64_t *)v5 = *(int64_t *)&v49;
    int32_t v51 = __asm_movss(__asm_xorps(v50, v50)); // bp-256, 0x18019064c
    int128_t v52 = __asm_movss_31(*(int32_t *)&g38); // 0x180190655
    __asm_movss(v52);
    *(int64_t *)v8 = *(int64_t *)&v51;
    *(int32_t *)(result + 40) = 0;
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(__asm_xorps(v52, v52));
    int128_t v53 = __asm_movss_31(v46); // 0x1801906b4
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(v53);
    *(int32_t *)(result + 52) = (int32_t)__asm_movss(__asm_xorps(v53, v53));
    *(int32_t *)(result + 56) = (int32_t)__asm_movss(__asm_movss_31(v46));
    int32_t v54 = __asm_movss(__asm_movss_31(0x40800000)); // bp-248, 0x1801906ee
    int128_t v55 = __asm_movss_31(*(int32_t *)&g43); // 0x1801906f7
    __asm_movss(v55);
    *(int64_t *)v11 = *(int64_t *)&v54;
    int128_t v56 = __asm_xorps(v55, v55); // 0x180190737
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(v56);
    *(int32_t *)(result + 72) = (int32_t)__asm_movss(__asm_xorps(v56, v56));
    int32_t v57 = __asm_movss(__asm_movss_31(0x41000000)); // bp-240, 0x180190757
    __asm_movss(__asm_movss_31(0x40800000));
    *(int64_t *)v14 = *(int64_t *)&v57;
    int32_t v58 = __asm_movss(__asm_movss_31(0x40800000)); // bp-232, 0x1801907a0
    __asm_movss(__asm_movss_31(0x40800000));
    *(int64_t *)v17 = *(int64_t *)&v58;
    int32_t v59 = __asm_movss(__asm_movss_31(0x40800000)); // bp-224, 0x1801907e9
    int32_t v60 = *(int32_t *)&g41;
    int128_t v61 = __asm_movss_31(v60); // 0x1801907f2
    __asm_movss(v61);
    *(int64_t *)v20 = *(int64_t *)&v59;
    int128_t v62 = __asm_xorps(v61, v61); // 0x18019082a
    int32_t v63 = __asm_movss(v62); // bp-216, 0x18019082d
    __asm_movss(__asm_xorps(v62, v62));
    *(int64_t *)v23 = *(int64_t *)&v63;
    *(int32_t *)(result + 108) = (int32_t)__asm_movss(__asm_movss_31(0x41a80000));
    *(int32_t *)(result + 112) = (int32_t)__asm_movss(__asm_movss_31(0x40c00000));
    *(int32_t *)(result + 116) = (int32_t)__asm_movss(__asm_movss_31(0x41600000));
    *(int32_t *)(result + 120) = (int32_t)__asm_movss(__asm_movss_31(0x41100000));
    int128_t v64 = __asm_movss_31(0x41400000); // 0x1801908c5
    *(int32_t *)(result + 124) = (int32_t)__asm_movss(v64);
    *(int32_t *)(result + 128) = (int32_t)__asm_movss(__asm_xorps(v64, v64));
    *(int32_t *)(result + 132) = (int32_t)__asm_movss(__asm_movss_31(0x40800000));
    int128_t v65 = __asm_movss_31(0x40800000); // 0x180190905
    *(int32_t *)(result + 136) = (int32_t)__asm_movss(v65);
    int128_t v66 = __asm_xorps(v65, v65); // 0x18019091d
    *(int32_t *)(result + 140) = (int32_t)__asm_movss(v66);
    *(int32_t *)(result + 144) = (int32_t)__asm_movss(__asm_xorps(v66, v66));
    int64_t v67 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x18019094b
    *(int32_t *)(result + 148) = (int32_t)v67;
    *(int32_t *)(result + 152) = (int32_t)__asm_movss(__asm_movss_31(v60));
    *(int32_t *)(result + 156) = (int32_t)__asm_movss(__asm_movss_31(0x3f1c61aa));
    int32_t v68 = *(int32_t *)&g38;
    int128_t v69 = __asm_movss_31(v68); // 0x180190983
    int32_t v70 = __asm_movss(v69); // bp-208, 0x18019098b
    __asm_movss(__asm_xorps(v69, v69));
    *(int64_t *)v26 = *(int64_t *)&v70;
    *(int32_t *)(result + 168) = 1;
    int32_t v71 = __asm_movss(__asm_movss_31(v68)); // bp-200, 0x1801909e4
    int128_t v72 = __asm_movss_31(v68); // 0x1801909ed
    __asm_movss(v72);
    *(int64_t *)v29 = *(int64_t *)&v71;
    int128_t v73 = __asm_xorps(v72, v72); // 0x180190a28
    int32_t v74 = __asm_movss(v73); // bp-192, 0x180190a2b
    __asm_movss(__asm_xorps(v73, v73));
    *(int64_t *)v32 = *(int64_t *)&v74;
    int32_t v75 = *(int32_t *)&g43;
    int128_t v76 = __asm_movss_31(v75); // 0x180190a72
    *(int32_t *)(result + 188) = (int32_t)__asm_movss(v76);
    int32_t v77 = __asm_movss(__asm_xorps(v76, v76)); // bp-184, 0x180190a85
    __asm_movss(__asm_movss_31(v68));
    *(int64_t *)v35 = *(int64_t *)&v77;
    int32_t v78 = __asm_movss(__asm_movss_31(0x41a00000)); // bp-176, 0x180190ad1
    __asm_movss(__asm_movss_31(v75));
    *(int64_t *)v38 = *(int64_t *)&v78;
    int32_t v79 = __asm_movss(__asm_movss_31(0x41980000)); // bp-168, 0x180190b1d
    __asm_movss(__asm_movss_31(0x41980000));
    *(int64_t *)v41 = *(int64_t *)&v79;
    int32_t v80 = __asm_movss(__asm_movss_31(v75)); // bp-160, 0x180190b69
    __asm_movss(__asm_movss_31(v75));
    *(int64_t *)v44 = *(int64_t *)&v80;
    int64_t v81 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x180190bbd
    *(int32_t *)(result + 224) = (int32_t)v81;
    *(char *)(result + 228) = 1;
    *(char *)(result + 229) = 1;
    *(char *)(result + 230) = 1;
    *(int32_t *)(result + 232) = (int32_t)__asm_movss(__asm_movss_31(0x3fa00000));
    int64_t v82 = __asm_movss(__asm_movss_31(*(int32_t *)&g37)); // 0x180190c1a
    *(int32_t *)(result + 236) = (int32_t)v82;
    int32_t v83 = *(int32_t *)&g36;
    *(int32_t *)(result + 1136) = (int32_t)__asm_movss(__asm_movss_31(v83));
    *(int32_t *)(result + 1140) = (int32_t)__asm_movss(__asm_movss_31(v83));
    *(int32_t *)(result + 1144) = (int32_t)__asm_movss(__asm_movss_31(0x3ecccccd));
    *(int32_t *)(result + 1148) = 0xa400;
    *(int32_t *)(result + 1152) = 0x30400;
    function_18021c6c0(result);
    return result;
}

// Address range: 0x180190cc0 - 0x1801918ee
int64_t function_180190cc0(int64_t result) {
    // 0x180190cc0
    int128_t v1; // 0x180190cc0
    int32_t v2 = __asm_movss(v1); // 0x180190cc0
    int64_t v3 = result + 8; // 0x180190cda
    int64_t v4 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 12)), v2)); // 0x180190cfc
    int32_t v5 = *(int32_t *)v3; // 0x180190d0a
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v5), v2)))); // 0x180190d23
    int32_t v7 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v4))); // 0x180190d3b
    int64_t v8 = __asm_movss(__asm_cvtsi2ss(v7)); // 0x180190d48
    int64_t v9 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v6))); // 0x180190d5b
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x180190d67
    __asm_movss(__asm_movss_31((int32_t)v8));
    *(int64_t *)v3 = 0x100000000 * v10 / 0x100000000;
    int32_t * v11 = (int32_t *)(result + 16); // 0x180190d9b
    int64_t v12 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v11), v2)))); // 0x180190db1
    *v11 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v12));
    int64_t v13 = result + 24; // 0x180190dd2
    int64_t v14 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 28)), v2)); // 0x180190df4
    int128_t v15 = __asm_movss_31(*(int32_t *)v13); // 0x180190e02
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v15, v2)))); // 0x180190e1b
    int32_t v17 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v14))); // 0x180190e33
    int64_t v18 = __asm_movss(__asm_cvtsi2ss(v17)); // 0x180190e40
    int64_t v19 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v16))); // 0x180190e53
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)v19)); // 0x180190e5f
    __asm_movss(__asm_movss_31((int32_t)v18));
    *(int64_t *)v13 = 0x100000000 * v20 / 0x100000000;
    int32_t * v21 = (int32_t *)(result + 44); // 0x180190e93
    int64_t v22 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v21), v2)))); // 0x180190ea9
    *v21 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v22));
    int32_t * v23 = (int32_t *)(result + 52); // 0x180190eca
    int64_t v24 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v23), v2)))); // 0x180190ee0
    *v23 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v24));
    int64_t v25 = result + 60; // 0x180190f01
    int64_t v26 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 64)), v2)); // 0x180190f23
    int128_t v27 = __asm_movss_31(*(int32_t *)v25); // 0x180190f31
    int64_t v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v27, v2)))); // 0x180190f4a
    int32_t v29 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v26))); // 0x180190f62
    int64_t v30 = __asm_movss(__asm_cvtsi2ss(v29)); // 0x180190f6f
    int64_t v31 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v28))); // 0x180190f82
    int64_t v32 = __asm_movss(__asm_movss_31((int32_t)v31)); // 0x180190f8e
    __asm_movss(__asm_movss_31((int32_t)v30));
    *(int64_t *)v25 = 0x100000000 * v32 / 0x100000000;
    int32_t * v33 = (int32_t *)(result + 68); // 0x180190fc2
    int64_t v34 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v33), v2)))); // 0x180190fd8
    *v33 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v34));
    int64_t v35 = result + 76; // 0x180190ff9
    int64_t v36 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 80)), v2)); // 0x18019101b
    int128_t v37 = __asm_movss_31(*(int32_t *)v35); // 0x18019102c
    int64_t v38 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v37, v2)))); // 0x18019104b
    int32_t v39 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v36))); // 0x180191066
    int64_t v40 = __asm_movss(__asm_cvtsi2ss(v39)); // 0x180191073
    int64_t v41 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v38))); // 0x180191089
    int64_t v42 = __asm_movss(__asm_movss_31((int32_t)v41)); // 0x18019109b
    __asm_movss(__asm_movss_31((int32_t)v40));
    *(int64_t *)v35 = 0x100000000 * v42 / 0x100000000;
    int64_t v43 = result + 84; // 0x1801910d2
    int64_t v44 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 88)), v2)); // 0x1801910f4
    int128_t v45 = __asm_movss_31(*(int32_t *)v43); // 0x180191105
    int64_t v46 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v45, v2)))); // 0x180191124
    int32_t v47 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v44))); // 0x18019113f
    int64_t v48 = __asm_movss(__asm_cvtsi2ss(v47)); // 0x18019114c
    int64_t v49 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v46))); // 0x180191162
    int64_t v50 = __asm_movss(__asm_movss_31((int32_t)v49)); // 0x180191174
    __asm_movss(__asm_movss_31((int32_t)v48));
    *(int64_t *)v43 = 0x100000000 * v50 / 0x100000000;
    int64_t v51 = result + 92; // 0x1801911ab
    int64_t v52 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 96)), v2)); // 0x1801911cd
    int128_t v53 = __asm_movss_31(*(int32_t *)v51); // 0x1801911de
    int64_t v54 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v53, v2)))); // 0x1801911fd
    int32_t v55 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v52))); // 0x180191218
    int64_t v56 = __asm_movss(__asm_cvtsi2ss(v55)); // 0x180191225
    int64_t v57 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v54))); // 0x18019123b
    int64_t v58 = __asm_movss(__asm_movss_31((int32_t)v57)); // 0x18019124d
    __asm_movss(__asm_movss_31((int32_t)v56));
    *(int64_t *)v51 = 0x100000000 * v58 / 0x100000000;
    int64_t v59 = result + 100; // 0x180191284
    char v60 = llvm_ctpop_i8((char)v59); // 0x180191284
    int64_t v61 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 104)), v2)); // 0x1801912a6
    int128_t v62 = __asm_movss_31(*(int32_t *)v59); // 0x1801912b7
    int64_t v63 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v62, v2)))); // 0x1801912d6
    int32_t v64 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v61))); // 0x1801912f1
    int64_t v65 = __asm_movss(__asm_cvtsi2ss(v64)); // 0x1801912fe
    int64_t v66 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v63))); // 0x180191314
    int64_t v67 = __asm_movss(__asm_movss_31((int32_t)v66)); // 0x180191326
    __asm_movss(__asm_movss_31((int32_t)v65));
    *(int64_t *)v59 = 0x100000000 * v67 / 0x100000000;
    int32_t * v68 = (int32_t *)(result + 108); // 0x18019135d
    int64_t v69 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v68), v2)))); // 0x180191373
    *v68 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v69));
    int32_t * v70 = (int32_t *)(result + 112); // 0x18019139a
    int64_t v71 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v70), v2)))); // 0x1801913b0
    *v70 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v71));
    int32_t * v72 = (int32_t *)(result + 116); // 0x1801913d7
    int64_t v73 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v72), v2)))); // 0x1801913ed
    *v72 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v73));
    int32_t * v74 = (int32_t *)(result + 120); // 0x180191414
    int64_t v75 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v74), v2)))); // 0x18019142a
    *v74 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v75));
    int32_t * v76 = (int32_t *)(result + 124); // 0x180191451
    int64_t v77 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v76), v2)))); // 0x180191467
    *v76 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v77));
    int32_t * v78 = (int32_t *)(result + 128); // 0x18019148e
    int64_t v79 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v78), v2)))); // 0x1801914a7
    *v78 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v79));
    int32_t * v80 = (int32_t *)(result + 132); // 0x1801914d1
    int64_t v81 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v80), v2)))); // 0x1801914ea
    *v80 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v81));
    int32_t * v82 = (int32_t *)(result + 136); // 0x180191514
    int64_t v83 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v82), v2)))); // 0x18019152d
    *v82 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v83));
    int32_t * v84 = (int32_t *)(result + 144); // 0x180191557
    __asm_ucomiss(__asm_movss_31(*v84), 0x7f7fffff);
    int64_t v85; // 0x180190cc0
    if (v59 == 0 == ((v60 & 1) != 0)) {
        // 0x1801915a4
        v85 = __asm_movss(__asm_movss_31(0x7f7fffff));
    } else {
        int128_t v86 = __asm_mulss(__asm_movss_31(*v84), v2); // 0x18019157a
        v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v86)))));
    }
    // 0x1801915b1
    *v84 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v85));
    int32_t * v87 = (int32_t *)(result + 152); // 0x1801915ce
    int64_t v88 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v87), v2)))); // 0x1801915e7
    *v87 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v88));
    int64_t v89 = result + 200; // 0x180191611
    int64_t v90 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 204)), v2)); // 0x180191635
    int128_t v91 = __asm_movss_31(*(int32_t *)v89); // 0x180191646
    int64_t v92 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v91, v2)))); // 0x180191665
    int32_t v93 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v90))); // 0x180191680
    int64_t v94 = __asm_movss(__asm_cvtsi2ss(v93)); // 0x18019168d
    int64_t v95 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v92))); // 0x1801916a3
    int64_t v96 = __asm_movss(__asm_movss_31((int32_t)v95)); // 0x1801916b5
    __asm_movss(__asm_movss_31((int32_t)v94));
    *(int64_t *)v89 = 0x100000000 * v96 / 0x100000000;
    int64_t v97 = result + 208; // 0x1801916ef
    int64_t v98 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 212)), v2)); // 0x180191713
    int128_t v99 = __asm_movss_31(*(int32_t *)v97); // 0x180191724
    int64_t v100 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v99, v2)))); // 0x180191743
    int32_t v101 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v98))); // 0x18019175e
    int64_t v102 = __asm_movss(__asm_cvtsi2ss(v101)); // 0x18019176b
    int64_t v103 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v100))); // 0x180191781
    int64_t v104 = __asm_movss(__asm_movss_31((int32_t)v103)); // 0x180191793
    __asm_movss(__asm_movss_31((int32_t)v102));
    *(int64_t *)v97 = 0x100000000 * v104 / 0x100000000;
    int64_t v105 = result + 216; // 0x1801917cd
    int64_t v106 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(result + 220)), v2)); // 0x1801917f1
    int128_t v107 = __asm_movss_31(*(int32_t *)v105); // 0x180191802
    int64_t v108 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v107, v2)))); // 0x180191821
    int32_t v109 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v106))); // 0x18019183c
    int64_t v110 = __asm_movss(__asm_cvtsi2ss(v109)); // 0x180191849
    int64_t v111 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v108))); // 0x18019185f
    int64_t v112 = __asm_movss(__asm_movss_31((int32_t)v111)); // 0x180191871
    __asm_movss(__asm_movss_31((int32_t)v110));
    *(int64_t *)v105 = 0x100000000 * v112 / 0x100000000;
    int32_t * v113 = (int32_t *)(result + 224); // 0x1801918ab
    int64_t v114 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v113), v2)))); // 0x1801918c4
    *v113 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v114));
    return result;
}

// Address range: 0x180191900 - 0x180191966
int64_t function_180191900(int64_t a1, int32_t a2, char a3) {
    unsigned char result = *(char *)(a1 + 0x2b99); // 0x180191917
    if (result == 0) {
        // 0x180191961
        return result;
    }
    int64_t v1; // 0x180191900
    if (a3 == 0) {
        // 0x18019193d
        int128_t v2; // 0x180191900
        v1 = __asm_movss(__asm_xorps(v2, v2));
    } else {
        // 0x18019192d
        v1 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
    }
    // 0x180191946
    __asm_movss_31((int32_t)v1);
    // 0x180191961
    return function_180191970(a1, a2, a3);
}

// Address range: 0x180191970 - 0x180191cb1
int64_t function_180191970(int64_t a1, int32_t a2, unsigned char a3) {
    // 0x180191970
    int128_t v1; // 0x180191970
    int64_t v2 = __asm_movss(v1); // 0x180191970
    if (a2 == 0) {
        // 0x180191ca9
        int64_t result; // 0x180191970
        return result;
    }
    unsigned char result2 = *(char *)(a1 + 0x2b99); // 0x18019199d
    if (result2 == 0) {
        // 0x180191ca9
        return result2;
    }
    int64_t v3 = *(int64_t *)(a1 + 256); // 0x1801919b5
    int32_t v4 = a2; // 0x1801919cc
    int32_t v5; // 0x180191970
    if (*(char *)(v3 + 89) == 0) {
        goto lab_0x180191a6f;
    } else {
        // 0x1801919d2
        v5 = 0x1000;
        if (a2 != 0x8000) {
            // 0x1801919ef
            v5 = 0x8000;
            if (a2 != 0x1000) {
                // 0x180191a09
                v5 = 527;
                if (a2 != 530) {
                    // 0x180191a23
                    v5 = 531;
                    if (a2 != 534) {
                        // 0x180191a3d
                        v5 = 530;
                        if (a2 != 527) {
                            // 0x180191a57
                            v4 = a2 != 531 ? a2 : 534;
                            goto lab_0x180191a6f;
                        } else {
                            goto lab_0x180191a6f_2;
                        }
                    } else {
                        goto lab_0x180191a6f_2;
                    }
                } else {
                    goto lab_0x180191a6f_2;
                }
            } else {
                goto lab_0x180191a6f_2;
            }
        } else {
            goto lab_0x180191a6f_2;
        }
    }
  lab_0x180191a6f:
    // 0x180191a6f
    *(char *)(a1 + 0x2b9a) = 0;
    int32_t v6 = v4; // 0x180191abd
    if (v4 <= 654) {
        // 0x180191af3
        *(char *)(a1 + 0x2b9b) = 0;
        v6 = v4;
    }
    goto lab_0x180191b02;
  lab_0x180191b02:;
    int64_t v7 = function_1801bf5c0(v3, 4, v6); // 0x180191b14
    int64_t v8 = function_1801a4160(v3, v6); // 0x180191b2a
    unsigned char result3 = *(char *)(v7 == 0 ? v8 : v7 + 16);
    int64_t v9; // 0x180191970
    if (v7 == 0) {
        // 0x180191b7a
        v9 = __asm_movss(__asm_movss_31(*(int32_t *)(v8 + 12)));
    } else {
        // 0x180191b68
        v9 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 20)));
    }
    int32_t v10 = v2; // 0x180191970
    int64_t v11 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x180191b90
    int32_t v12 = (int32_t)result3 - (int32_t)a3; // 0x180191ba3
    if (v12 == 0) {
        char v13 = llvm_ctpop_i8((char)v12); // 0x180191ba3
        __asm_ucomiss(__asm_movss_31((int32_t)v11), v10);
        if ((v13 & 1) != 0) {
            // 0x180191ca9
            return result3;
        }
    }
    // 0x180191bbe
    int64_t v14; // bp-48, 0x180191970
    int64_t v15; // 0x180191970
    function_18029db80((int64_t)&v14, 0, 28, v15);
    v14 = 4;
    int32_t * v16 = (int32_t *)(v3 + 0x4014); // 0x180191c48
    *v16 = *v16 + 1;
    __asm_movss(__asm_movss_31(v10));
    // 0x180191ca9
    return function_1801cf010(v3 + 0x3ff0, &v14);
  lab_0x180191a6f_2:
    // 0x180191a6f
    *(char *)(a1 + 0x2b9a) = 0;
    v6 = v5;
    goto lab_0x180191b02;
}

// Address range: 0x180191cc0 - 0x180191fba
int64_t function_180191cc0(int64_t a1) {
    // 0x180191cc0
    int128_t v1; // 0x180191cc0
    int64_t v2 = __asm_movss(v1); // 0x180191cc0
    int128_t v3; // 0x180191cc0
    int64_t v4 = __asm_movss(v3); // 0x180191cc6
    int64_t v5 = *(int64_t *)(a1 + 256); // 0x180191ce0
    unsigned char result = *(char *)(a1 + 0x2b99); // 0x180191cf4
    if (result == 0) {
        // 0x180191fb2
        return result;
    }
    int32_t v6 = v2; // 0x180191cc0
    int32_t v7 = v4; // 0x180191cc6
    __asm_comiss(__asm_movss_31(v6), g398);
    __asm_comiss(__asm_movss_31(v6), g30);
    int64_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v6))))); // 0x180191d71
    __asm_comiss(__asm_movss_31(v7), g398);
    __asm_comiss(__asm_movss_31(v7), g30);
    int64_t v9 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v7))); // 0x180191de9
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v9)))); // 0x180191e12
    int64_t v11 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x180191e1e
    int64_t v12 = function_1801bf5c0(v5, 1, -1); // 0x180191e34
    int64_t * v13; // 0x180191cc0
    if (v12 == 0) {
        // 0x180191e9a
        v13 = (int64_t *)(v5 + 272);
    } else {
        int64_t v14 = __asm_movss(__asm_movss_31(*(int32_t *)(v12 + 16))); // 0x180191e50
        int128_t v15 = __asm_movss_31(*(int32_t *)(v12 + 12)); // 0x180191e5b
        int32_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15))); // bp-96, 0x180191e6c
        __asm_movss(__asm_movss_31((int32_t)v14));
        v13 = (int64_t *)&v16;
    }
    int32_t v17 = v10; // 0x180191e12
    int32_t v18 = v11; // 0x180191e1e
    char v19 = llvm_ctpop_i8((char)v12); // 0x180191e3e
    int64_t v20 = *v13; // 0x180191ed0
    __asm_ucomiss(__asm_movss_31((int32_t)v20), v17);
    int64_t result2; // 0x180191cc0
    if (v12 != 0 || (v19 & 1) == 0) {
        // 0x180191efb
        int64_t v21; // bp-72, 0x180191cc0
        int64_t v22; // 0x180191cc0
        function_18029db80((int64_t)&v21, 0, 28, v22);
        v21 = 1;
        int32_t * v23 = (int32_t *)(v5 + 0x4014); // 0x180191f3b
        *v23 = *v23 + 1;
        __asm_movss(__asm_movss_31(v17));
        __asm_movss(__asm_movss_31(v18));
        result2 = function_1801cf010(v5 + 0x3ff0, &v21);
    } else {
        // 0x180191ee7
        int32_t v24; // 0x180191cc0
        __asm_ucomiss(__asm_movss_31(v24), v18);
        result2 = v20;
    }
    // 0x180191fb2
    return result2;
}

// Address range: 0x180191fc0 - 0x180192224
int64_t function_180191fc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 256); // 0x180191fda
    unsigned char result = *(char *)(a1 + 0x2b99); // 0x180191fee
    if (result == 0) {
        // 0x18019221f
        return result;
    }
    int64_t v2 = 0x100000000000000 * a3;
    int64_t v3 = 0x100000000 * a2 / 0x100000000; // 0x180191fc5
    char * v4 = (char *)(a1 + 81); // 0x180192006
    int64_t v5 = v3; // 0x18019200c
    if (*v4 != 0) {
        // 0x18019200e
        v5 = v3;
        if ((int32_t)v3 == 0) {
            char * v6 = (char *)(a1 + 0x2b56); // 0x180192020
            v5 = v3;
            if (*v6 != 0) {
                // 0x18019202b
                v5 = 1;
                if (v2 == 0) {
                    // 0x180192042
                    *v6 = 0;
                    v5 = 1;
                }
            }
        }
    }
    int32_t v7 = v5; // 0x180192051
    int64_t v8 = function_1801bf5c0(v1, 3, v7); // 0x180192063
    int64_t v9; // 0x180191fc0
    if (v8 == 0) {
        // 0x180192084
        v9 = v1 + 280 + 0x100000000 * v5 / 0x100000000;
    } else {
        // 0x180192075
        v9 = v8 + 16;
    }
    unsigned char result2 = *(char *)v9;
    if (result2 == (char)a3) {
        // 0x18019221f
        return result2;
    }
    // 0x1801920bc
    int64_t v10; // 0x180191fc0
    if (*v4 != 0) {
        if (v2 != 0 && v7 == 0) {
            int64_t v11 = function_1801bf5c0(v1, 4, 0x8000); // 0x1801920fe
            if (*(char *)(v11 == 0 ? v1 + 303 : v11 + 16) != 0) {
                // 0x180192138
                if ((*(int32_t *)(v1 + 0x6184) & 64) != 0) {
                    // 0x18019214a
                    function_18018fdd0("[io] Super+Left Click aliased into Right Click\n", 4, 0x8000, v10);
                }
                // 0x18019215d
                *(char *)(a1 + 0x2b56) = 1;
                // 0x18019221f
                return function_180191fc0(a1, 1, 0x8001);
            }
        }
    }
    // 0x180192187
    int64_t v12; // bp-48, 0x180191fc0
    function_18029db80((int64_t)&v12, 0, 28, v10);
    v12 = 3;
    int32_t * v13 = (int32_t *)(v1 + 0x4014); // 0x1801921be
    *v13 = *v13 + 1;
    // 0x18019221f
    return function_1801cf010(v1 + 0x3ff0, &v12);
}

// Address range: 0x180192230 - 0x180192331
int64_t function_180192230(int64_t a1, int64_t a2) {
    // 0x180192230
    int128_t v1; // 0x180192230
    int64_t v2 = __asm_movss(v1); // 0x180192230
    int128_t v3; // 0x180192230
    int64_t v4 = __asm_movss(v3); // 0x180192236
    int64_t v5 = *(int64_t *)(a1 + 256); // 0x18019224a
    int64_t result = 0; // 0x180192264
    if (*(char *)(a1 + 0x2b99) != 0) {
        int32_t v6 = v4; // 0x180192236
        __asm_ucomiss(__asm_movss_31(v6), *(int32_t *)&g30);
        int64_t v7; // bp-48, 0x180192230
        int64_t v8; // 0x180192230
        function_18029db80((int64_t)&v7, 0, 28, v8);
        v7 = 2;
        int32_t * v9 = (int32_t *)(v5 + 0x4014); // 0x1801922c7
        *v9 = *v9 + 1;
        __asm_movss(__asm_movss_31(v6));
        __asm_movss(__asm_movss_31((int32_t)v2));
        result = function_1801cf010(v5 + 0x3ff0, &v7);
    }
    // 0x18019232c
    return result;
}

// Address range: 0x180192340 - 0x180192370
int64_t function_180192340(int64_t a1, int32_t a2) {
    int64_t result = *(int64_t *)(a1 + 256); // 0x180192352
    *(int32_t *)(result + 0x4010) = a2;
    return result;
}

// Address range: 0x180192380 - 0x1801924af
int64_t function_180192380(int64_t a1, unsigned char result2) {
    int64_t v1 = *(int64_t *)(a1 + 256); // 0x180192395
    int64_t v2 = function_1801bf5c0(v1, 6, -1); // 0x1801923b1
    int32_t result; // 0x180192380
    if (v2 == 0) {
        // 0x1801923d2
        result = *(char *)(v1 + 0x2ba0) == 0;
    } else {
        // 0x1801923c3
        result = (int32_t)*(char *)(v2 + 12);
    }
    // 0x1801923fc
    if ((char)result == result2) {
        // 0x1801924aa
        return result;
    }
    // 0x180192416
    if (*(char *)(a1 + 119) != 0) {
        // 0x180192426
        if (result2 == 0) {
            // 0x1801924aa
            return result2;
        }
    }
    // 0x180192434
    int64_t v3; // bp-40, 0x180192380
    int64_t v4; // 0x180192380
    function_18029db80((int64_t)&v3, 0, 28, v4);
    v3 = 6;
    int32_t * v5 = (int32_t *)(v1 + 0x4014); // 0x180192463
    *v5 = *v5 + 1;
    // 0x1801924aa
    return function_1801cf010(v1 + 0x3ff0, &v3);
}

// Address range: 0x1801924c0 - 0x180192576
int64_t function_1801924c0(int64_t a1, int64_t a2) {
    int64_t result = *(int64_t *)(a1 + 256); // 0x1801924d2
    if ((int32_t)a2 == 0) {
        // 0x180192571
        return result;
    }
    unsigned char v1 = *(char *)(a1 + 0x2b99); // 0x1801924ea
    int64_t result2 = v1; // 0x1801924f3
    if (v1 != 0) {
        // 0x1801924f7
        int64_t v2; // bp-48, 0x1801924c0
        int64_t v3; // 0x1801924c0
        function_18029db80((int64_t)&v2, 0, 28, v3);
        v2 = 5;
        int32_t * v4 = (int32_t *)(result + 0x4014); // 0x18019252e
        *v4 = *v4 + 1;
        result2 = function_1801cf010(result + 0x3ff0, &v2);
    }
    // 0x180192571
    return result2;
}

// Address range: 0x180192580 - 0x18019266c
int64_t function_180192580(int64_t result2, int64_t a2) {
    if ((a2 & 0xffff) == 0) {
        // 0x180192597
        if (*(int16_t *)(result2 + 0x2b9c) == 0) {
            // 0x180192667
            return 0;
        }
    }
    unsigned char result = *(char *)(result2 + 0x2b99); // 0x1801925ac
    if (result == 0) {
        // 0x180192667
        return result;
    }
    int64_t v1 = a2 & 0xfc00;
    if (v1 == 0xd800) {
        int16_t * v2 = (int16_t *)(result2 + 0x2b9c); // 0x1801925d2
        if (*v2 != 0) {
            // 0x1801925dd
            function_1801924c0(result2, 0xfffd);
        }
        // 0x1801925ed
        *v2 = (int16_t)a2;
        // 0x180192667
        return result2;
    }
    int16_t * v3 = (int16_t *)(result2 + 0x2b9c); // 0x18019260f
    if (*v3 == 0) {
        // 0x180192667
        return function_1801924c0(result2, 0x1000000000000 * a2 / 0x1000000000000 & 0xffff);
    }
    // 0x18019261a
    if (v1 != 0xdc00) {
        // 0x18019262b
        function_1801924c0(result2, 0xfffd);
    }
    // 0x180192647
    *v3 = 0;
    // 0x180192667
    return function_1801924c0(result2, 0xfffd);
}

// Address range: 0x180192680 - 0x1801926ee
int64_t function_180192680(int64_t a1, int64_t a2) {
    unsigned char result = *(char *)(a1 + 0x2b99); // 0x180192693
    if (result == 0) {
        // 0x1801926e9
        return result;
    }
    // 0x1801926a0
    if (*(char *)a2 == 0) {
        // 0x1801926e9
        return 0;
    }
    int64_t v1 = a2; // 0x1801926cd
    int32_t v2 = 0; // bp-24, 0x1801926ac
    v1 += 0x100000000 * function_180196110((int64_t *)&v2, v1, 0) / 0x100000000;
    function_1801924c0(a1, (int64_t)v2);
    while (*(char *)v1 != 0) {
        // 0x1801926ac
        v2 = 0;
        v1 += 0x100000000 * function_180196110((int64_t *)&v2, v1, 0) / 0x100000000;
        function_1801924c0(a1, (int64_t)v2);
    }
    // 0x1801926e9
    return 0;
}

// Address range: 0x180192700 - 0x1801927ab
int64_t function_180192700(int64_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    if (a2 == 0) {
        // 0x1801927a6
        int64_t result; // 0x180192700
        return result;
    }
    uint32_t v1 = a5 == -1 ? a3 : a5;
    int64_t result2 = v1 <= 511; // 0x180192778
    if (v1 <= 511) {
        int64_t v2 = a1 + 0x2bb0; // 0x18019278a
        *(int32_t *)(4 * (int64_t)v1 + v2) = a2;
        result2 = a2;
        *(int32_t *)(4 * result2 + v2) = v1;
    }
    // 0x1801927a6
    return result2;
}

// Address range: 0x1801927c0 - 0x1801927da
int64_t function_1801927c0(int64_t result, int64_t a2) {
    // 0x1801927c0
    *(char *)(result + 0x2b99) = (char)a2;
    return result;
}

// Address range: 0x1801927e0 - 0x18019284d
int64_t function_1801927e0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 256); // 0x1801927ee
    int64_t result = v1 + 0x3ff0; // 0x1801927ff
    int64_t * v2 = (int64_t *)(v1 + 0x3ff8); // 0x18019280f
    if (*v2 != 0) {
        // 0x180192816
        *(int32_t *)(v1 + 0x3ff4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v2);
        *v2 = 0;
    }
    // 0x180192848
    return result;
}

// Address range: 0x180192860 - 0x18019299e
int64_t function_180192860(int64_t a1, int64_t a2) {
    // 0x180192860
    int64_t v1; // 0x180192860
    function_18029db80(a1 + 0x3618, 0, 666, v1);
    int64_t v2 = 0;
    int64_t v3; // 0x180192860
    if ((int32_t)v2 > 661) {
        // 0x1801928c5
        v3 = 16 * v2 + a1;
        *(char *)(v3 + 300) = 0;
        *(int32_t *)(v3 + 304) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
        *(int32_t *)(v3 + 308) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    }
    int64_t v4 = v2 + 1;
    while (v4 != 666) {
        // 0x1801928a7
        v2 = v4;
        if ((int32_t)v2 > 661) {
            // 0x1801928c5
            v3 = 16 * v2 + a1;
            *(char *)(v3 + 300) = 0;
            *(int32_t *)(v3 + 304) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
            *(int32_t *)(v3 + 308) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
        }
        // 0x18019288f
        v4 = v2 + 1;
    }
    // 0x18019293d
    *(char *)(a1 + 295) = 0;
    *(char *)(a1 + 294) = 0;
    *(char *)(a1 + 293) = 0;
    *(char *)(a1 + 292) = 0;
    *(int32_t *)(a1 + 296) = 0;
    return function_1801cfcd0(a1 + 0x2ba0, 0);
}

// Address range: 0x1801929b0 - 0x180192ade
int64_t function_1801929b0(int64_t result) {
    for (int64_t i = 655; i < 662; i++) {
        int64_t v1 = result + 300 + 16 * i; // 0x1801929e6
        *(char *)v1 = 0;
        *(int32_t *)(v1 + 4) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
        *(int32_t *)(v1 + 8) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    }
    int32_t v2 = *(int32_t *)&g398;
    int32_t v3 = __asm_movss(__asm_movss_31(v2)); // bp-24, 0x180192a29
    __asm_movss(__asm_movss_31(v2));
    *(int64_t *)(result + 264) = *(int64_t *)&v3;
    int128_t v4; // 0x180192aa6
    for (int64_t i = 0; i < 5; i++) {
        // 0x180192a72
        *(char *)(result + 272 + i) = 0;
        int64_t v5 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x180192a94
        int64_t v6 = 4 * i + result;
        *(int32_t *)(v6 + 0x2b6c) = (int32_t)v5;
        v4 = __asm_movss_31(-0x40800000);
        *(int32_t *)(v6 + 0x2b58) = (int32_t)__asm_movss(v4);
    }
    int128_t v7 = __asm_xorps(v4, v4); // 0x180192abe
    *(int32_t *)(result + 284) = (int32_t)__asm_movss(v7);
    *(int32_t *)(result + 280) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    return result;
}

// Address range: 0x180192af0 - 0x180192b1b
int64_t function_180192af0(int64_t a1, int64_t a2) {
    // 0x180192af0
    return function_1801cfcd0(a1 + 0x2ba0, 0);
}

// Address range: 0x180192b30 - 0x18019316e
int64_t function_180192b30(int64_t result, int64_t a2) {
    int64_t v1 = result + 8; // 0x180192b44
    int128_t v2; // 0x180192b30
    int128_t v3 = __asm_xorps(v2, v2); // 0x180192b52
    *(int32_t *)v1 = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180192b5e
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(v4);
    int64_t v5 = result + 72; // 0x180192b6e
    int128_t v6 = __asm_xorps(v4, v4); // 0x180192b7c
    *(int32_t *)v5 = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x180192b88
    *(int32_t *)(result + 76) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x180192ba8
    *(int32_t *)(result + 248) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x180192bb4
    *(int32_t *)(result + 252) = (int32_t)__asm_movss(v9);
    int64_t v10 = result + 264; // 0x180192bc4
    int128_t v11 = __asm_xorps(v9, v9); // 0x180192bd4
    *(int32_t *)v10 = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x180192be0
    *(int32_t *)(result + 268) = (int32_t)__asm_movss(v12);
    int64_t v13 = result + 0x2ad0; // 0x180192bf0
    int128_t v14 = __asm_xorps(v12, v12); // 0x180192c00
    *(int32_t *)v13 = (int32_t)__asm_movss(v14);
    *(int32_t *)(result + 0x2ad4) = (int32_t)__asm_movss(__asm_xorps(v14, v14));
    *(int32_t *)(result + 0x2ba4) = 0;
    *(int32_t *)(result + 0x2ba0) = 0;
    *(int64_t *)(result + 0x2ba8) = 0;
    int64_t v15; // 0x180192b30
    function_18029db80(result, 0, 0x38f8, v15);
    *(int32_t *)result = 0;
    *(int32_t *)(result + 4) = 0;
    int32_t v16 = __asm_movss(__asm_movss_31(-0x40800000)); // bp-88, 0x180192cf1
    __asm_movss(__asm_movss_31(-0x40800000));
    *(int64_t *)v1 = *(int64_t *)&v16;
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(__asm_movss_31(0x3c888889));
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(__asm_movss_31(0x40a00000));
    *(int64_t *)(result + 24) = (int64_t)"imgui.ini";
    *(int64_t *)(result + 32) = (int64_t)"imgui_log.txt";
    for (int64_t i = 0; i < 666; i++) {
        // 0x180192d97
        *(int32_t *)(result + 0x2bb0 + 4 * i) = -1;
    }
    // 0x180192db1
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 48) = 0;
    int32_t v17 = *(int32_t *)&g40;
    *(int32_t *)(result + 56) = (int32_t)__asm_movss(__asm_movss_31(v17));
    *(int64_t *)(result + 64) = 0;
    *(char *)(result + 60) = 0;
    int32_t v18 = __asm_movss(__asm_movss_31(v17)); // bp-80, 0x180192e0a
    __asm_movss(__asm_movss_31(v17));
    *(int64_t *)v5 = *(int64_t *)&v18;
    int64_t v19 = __asm_movss(__asm_movss_31(*(int32_t *)&g37)); // 0x180192e52
    *(int32_t *)(result + 96) = (int32_t)v19;
    *(int32_t *)(result + 100) = (int32_t)__asm_movss(__asm_movss_31(0x40c00000));
    *(int32_t *)(result + 104) = (int32_t)__asm_movss(__asm_movss_31(0x40c00000));
    *(int32_t *)(result + 108) = (int32_t)__asm_movss(__asm_movss_31(0x3e8ccccd));
    *(int32_t *)(result + 112) = (int32_t)__asm_movss(__asm_movss_31(0x3d4ccccd));
    *(char *)(result + 80) = 0;
    *(char *)(result + 81) = 0;
    *(char *)(result + 82) = 0;
    *(char *)(result + 83) = 1;
    *(char *)(result + 84) = 1;
    *(char *)(result + 85) = 0;
    *(char *)(result + 86) = 0;
    *(char *)(result + 87) = 1;
    *(char *)(result + 88) = 0;
    *(int32_t *)(result + 92) = (int32_t)__asm_movss(__asm_movss_31(0x42700000));
    *(char *)(result + 117) = 0;
    *(char *)(result + 118) = 0;
    *(int64_t *)(result + 136) = 0;
    *(int64_t *)(result + 128) = 0;
    *(int64_t *)(result + 160) = 0;
    *(int64_t *)(result + 152) = 0;
    *(int64_t *)(result + 144) = 0;
    *(int64_t *)(result + 200) = 0;
    *(int16_t *)(result + 216) = 46;
    int32_t v20 = *(int32_t *)&g398;
    int32_t v21 = __asm_movss(__asm_movss_31(v20)); // bp-72, 0x180192fd2
    __asm_movss(__asm_movss_31(v20));
    *(int64_t *)v10 = *(int64_t *)&v21;
    int32_t v22 = __asm_movss(__asm_movss_31(v20)); // bp-64, 0x18019301e
    __asm_movss(__asm_movss_31(v20));
    *(int64_t *)v13 = *(int64_t *)&v22;
    *(int32_t *)(result + 288) = 0;
    int64_t v23 = 0;
    int64_t v24 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801930a4
    int64_t v25 = 4 * v23 + result;
    *(int32_t *)(v25 + 0x2b6c) = (int32_t)v24;
    *(int32_t *)(v25 + 0x2b58) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    v23++;
    int64_t v26 = 0; // 0x18019308d
    while (v23 != 5) {
        // 0x18019308f
        v24 = __asm_movss(__asm_movss_31(-0x40800000));
        v25 = 4 * v23 + result;
        *(int32_t *)(v25 + 0x2b6c) = (int32_t)v24;
        *(int32_t *)(v25 + 0x2b58) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
        v23++;
        v26 = 0;
    }
    int64_t v27 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x180193104
    int64_t v28 = 16 * v26 + result;
    *(int32_t *)(v28 + 308) = (int32_t)v27;
    *(int32_t *)(v28 + 304) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    int64_t v29 = v26 + 1;
    v26 = v29;
    while (v29 != 666) {
        // 0x1801930eb
        v27 = __asm_movss(__asm_movss_31(-0x40800000));
        v28 = 16 * v26 + result;
        *(int32_t *)(v28 + 308) = (int32_t)v27;
        *(int32_t *)(v28 + 304) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
        v29 = v26 + 1;
        v26 = v29;
    }
    // 0x180193131
    *(char *)(result + 0x2b99) = 1;
    *(char *)(result + 0x2b9a) = -1;
    *(char *)(result + 0x2b9b) = 1;
    return result;
}

// Address range: 0x180193180 - 0x180193218
int64_t function_180193180(int64_t result, int64_t a2) {
    // 0x180193180
    *(int32_t *)(result + 260) = 0;
    *(int32_t *)(result + 256) = 0;
    *(int64_t *)(result + 264) = 0;
    *(char *)result = 0;
    *(int32_t *)(result + 272) = 0;
    if (a2 != 0) {
        // 0x1801931eb
        function_180195310(result, a2, 256);
        function_180193420(result, a2);
    }
    // 0x18019320e
    return result;
}

// Address range: 0x180193220 - 0x1801932a0
int64_t function_180193220(int64_t a1, int64_t a2) {
    // 0x180193220
    int128_t v1; // 0x180193220
    int32_t v2 = __asm_movss(v1); // 0x180193220
    int64_t v3; // 0x180193220
    int64_t v4 = v3 - 72; // 0x180193230
    char v5 = llvm_ctpop_i8((char)v4); // 0x180193230
    __asm_ucomiss(__asm_movss_31(v2), *(int32_t *)&g30);
    if (v4 == 0 != (v5 & 1) != 0) {
        // 0x180193245
        function_180189050(__asm_movss_31(v2));
    }
    int64_t result = function_1801d8b50((char *)a2, (int64_t *)a1, 256, 0, 0, 0) & 255;
    if (result != 0) {
        // 0x18019328b
        function_180193420(a1, a1);
    }
    // 0x180193296
    return result;
}

// Address range: 0x1801932b0 - 0x180193413
int64_t function_1801932b0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 256); // 0x1801932c8
    int64_t result; // 0x1801932b0
    if (v1 == 0) {
        // 0x1801932d1
        result = a1 & -256 | 1;
      lab_0x18019340e:
        // 0x18019340e
        return result;
    }
    int64_t v2 = a2 != 0 ? a3 : (int64_t)&g331;
    int64_t v3 = a2 != 0 ? a2 : (int64_t)&g331;
    int64_t v4 = *(int64_t *)(a1 + 264);
    int64_t v5 = *(int64_t *)(v4 + 8); // 0x180193376
    int64_t v6 = *(int64_t *)v4; // 0x18019337a
    int64_t v7; // 0x1801933e7
    int64_t v8; // 0x1801933bc
    if (v6 != v5) {
        // 0x180193381
        if (*(char *)v6 != 45) {
            // 0x1801933cc
            v7 = function_180195550(v3, v2, v6, v5, v4);
            if (v7 != 0) {
                // 0x1801933f1
                result = v7 & -256 | 1;
                return result;
            }
        } else {
            // 0x18019339b
            v8 = function_180195550(v3, v2, v6 + 1, v5, v4);
            if (v8 != 0) {
                // 0x1801933c6
                result = v8 & -256;
                return result;
            }
        }
    }
    int64_t v9 = v4 + 16; // 0x180193349
    while (v9 != v4 + 16 * (int64_t)v1) {
        int64_t v10 = v9;
        v5 = *(int64_t *)(v10 + 8);
        v6 = *(int64_t *)v10;
        if (v6 != v5) {
            // 0x180193381
            if (*(char *)v6 != 45) {
                // 0x1801933cc
                v7 = function_180195550(v3, v2, v6, v5, v10);
                if (v7 != 0) {
                    // 0x1801933f1
                    result = v7 & -256 | 1;
                    return result;
                }
            } else {
                // 0x18019339b
                v8 = function_180195550(v3, v2, v6 + 1, v5, v10);
                if (v8 != 0) {
                    // 0x1801933c6
                    result = v8 & -256;
                    return result;
                }
            }
        }
        // 0x180193344
        v9 = v10 + 16;
    }
    // 0x1801933fa
    return a1 & -256 | (int64_t)(*(int32_t *)(a1 + 272) == 0);
}

// Address range: 0x180193420 - 0x1801936bb
int64_t function_180193420(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 256; // 0x180193434
    function_1801cfff0(v1, 0);
    function_18029e0a0(a1);
    int64_t v2 = a1; // bp-32, 0x180193476
    function_1801936d0(&v2, 44, v1);
    int32_t * v3 = (int32_t *)(a1 + 272); // 0x1801934b3
    *v3 = 0;
    int64_t v4 = *(int64_t *)(a1 + 264);
    int32_t v5 = *(int32_t *)v1; // 0x1801934ed
    int64_t result = 16 * (int64_t)v5 + v4; // 0x1801934f9
    if (v5 == 0) {
        // 0x1801936b3
        return result;
    }
    int64_t v6 = v4; // 0x18019352c
    int64_t v7; // 0x180193420
    int64_t v8; // 0x180193420
    int64_t v9; // 0x180193420
    int64_t v10; // 0x180193420
    int64_t v11; // 0x180193420
    int64_t v12; // 0x180193420
    int64_t v13; // 0x1801935a8
    int64_t v14; // 0x180193420
    int64_t * v15; // 0x180193546
    int64_t * v16; // 0x18019354a
    while (true) {
        // 0x18019353c
        v15 = (int64_t *)(v6 + 8);
        int64_t v17 = *v15; // 0x180193546
        v16 = (int64_t *)v6;
        int64_t v18 = *v16; // 0x18019354a
        v7 = v17;
        v8 = v18;
        int64_t v19 = v17; // 0x18019354d
        int64_t v20 = v18; // 0x18019354d
        if (v18 < v17) {
            while (true) {
              lab_0x18019354f:
                // 0x18019354f
                v13 = v8;
                v19 = v7;
                v20 = v13;
                switch (*(char *)v13) {
                    case 32: {
                        goto lab_0x1801935a3;
                    }
                    case 9: {
                        goto lab_0x1801935a3;
                    }
                    default: {
                        goto lab_0x1801935b8_2;
                    }
                }
            }
        }
      lab_0x1801935b8_2:
        // 0x1801935b8
        v9 = v20;
        v10 = v19;
        v11 = v20;
        v12 = v19;
        if (v19 > v20) {
            while (true) {
              lab_0x1801935cb:
                // 0x1801935cb
                v14 = v10 - 1;
                v11 = v9;
                v12 = v10;
                switch (*(char *)v14) {
                    case 32: {
                        goto lab_0x180193620;
                    }
                    case 9: {
                        goto lab_0x180193620;
                    }
                    default: {
                        goto lab_0x180193637_2;
                    }
                }
            }
        }
      lab_0x180193637_2:;
        int64_t v21 = v11; // 0x180193645
        if (v21 != v12) {
            // 0x180193676
            if (*(char *)v21 != 45) {
                // 0x180193690
                *v3 = *v3 + 1;
            }
        }
        // 0x180193511
        v6 += 16;
        if (v6 == result) {
            // break -> 0x1801936b3
            return 0;
        }
    }
    // 0x1801936b3
    return result;
  lab_0x180193620:
    // 0x180193620
    *v15 = v14;
    int64_t v22 = *v16; // 0x1801935c2
    v9 = v22;
    v10 = v14;
    v11 = v22;
    v12 = v14;
    if (v14 <= v22) {
        // break -> 0x180193637
        goto lab_0x180193637_2;
    }
    goto lab_0x1801935cb;
  lab_0x1801935a3:;
    int64_t v23 = v13 + 1; // 0x1801935ab
    *v16 = v23;
    int64_t v24 = *v15; // 0x180193546
    v7 = v24;
    v8 = v23;
    if (v23 >= v24) {
        // break -> 0x1801935b8
        goto lab_0x1801935b8_2;
    }
    goto lab_0x18019354f;
}

// Address range: 0x1801936d0 - 0x1801937be
int64_t function_1801936d0(int64_t * a1, int64_t a2, int64_t result) {
    // 0x1801936d0
    function_1801cfff0(result, 0);
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18019370d
    uint64_t v2 = *v1; // 0x18019370d
    if (v2 <= result) {
        // 0x1801937b9
        return result;
    }
    // 0x180193718
    int64_t v3; // bp-40, 0x1801936d0
    int64_t v4 = &v3;
    int64_t v5 = v2; // 0x1801936d0
    int64_t v6; // 0x1801936d0
    int64_t v7; // 0x1801936d0
    int64_t v8; // 0x1801936d0
    if (0x1000000 * (int32_t)a2 / 0x1000000 != (int32_t)*(char *)result) {
        // 0x180193718
        v6 = result + 1;
        v7 = result;
    } else {
        // 0x180193729
        v3 = result;
        function_1801cf0f0(result, v4);
        v8 = result + 1;
        v6 = v8;
        v5 = *v1;
        v7 = v8;
    }
    int64_t v9 = v7;
    int64_t v10 = v6;
    while (v10 < v5) {
        int64_t v11 = v9;
        int64_t v12 = v10;
        char v13 = *(char *)v12; // 0x18019371d
        if (0x1000000 * (int32_t)a2 / 0x1000000 != (int32_t)v13) {
            // 0x180193718
            v6 = v12 + 1;
            v7 = v11;
        } else {
            // 0x180193729
            v3 = v11;
            function_1801cf0f0(result, v4);
            v8 = v12 + 1;
            v6 = v8;
            v5 = *v1;
            v7 = v8;
        }
        // 0x18019376a
        v9 = v7;
        v10 = v6;
    }
    int64_t result2 = v10; // 0x180193783
    if (v9 != v10) {
        int64_t v14 = v9; // bp-24, 0x18019378a
        result2 = function_1801cf0f0(result, (int64_t)&v14);
    }
    // 0x1801937b9
    return result2;
}

// Address range: 0x1801937d0 - 0x18019395c
int64_t function_1801937d0(int64_t a1, int64_t * a2, int32_t a3) {
    int64_t v1 = (int64_t)a2;
    int32_t v2; // 0x1801937d0
    if (a3 == 0) {
        // 0x18019380a
        v2 = function_18029e0a0(v1);
    } else {
        // 0x1801937ee
        v2 = a3 - (int32_t)v1;
    }
    // 0x18019381b
    int64_t v3; // 0x1801937d0
    int32_t v4 = v3;
    int32_t v5 = v4 == 0 ? 1 : v4;
    int32_t v6 = v2 + v5; // 0x180193858
    uint32_t v7 = *(int32_t *)(a1 + 4); // 0x180193874
    if (v6 >= v7) {
        uint32_t v8 = 2 * v7; // 0x180193884
        function_1801cf470(a1, (int64_t)v6 > (int64_t)v8 ? v6 : v8);
    }
    // 0x1801938c2
    function_1801cfb30(a1, v6);
    int32_t v9 = v5 - 1; // 0x1801938ee
    int64_t * v10 = (int64_t *)(a1 + 8); // 0x1801938f7
    int64_t v11; // 0x1801937d0
    function_18029d4e0(*v10 + (int64_t)v9, v1, (int64_t)v2, v11);
    int64_t result = *v10 + (int64_t)(v2 + v9); // 0x180193944
    *(char *)result = 0;
    return result;
}

// Address range: 0x180193970 - 0x1801939b4
int64_t function_180193970(int64_t a1, char * a2, int64_t a3, int32_t a4) {
    int64_t v1 = a3; // bp+24, 0x18019397a
    return function_1801939c0(a1, (int64_t)a2, (int64_t)&v1);
}

// Address range: 0x1801939c0 - 0x180193b0a
int64_t function_1801939c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_180195b30(0, 0, a2, a3); // 0x1801939f1
    int32_t v1 = result; // 0x1801939f6
    if (v1 >= 0 != v1 != 0) {
        // 0x180193b05
        return result;
    }
    // 0x180193a0f
    int64_t v2; // 0x1801939c0
    int32_t v3 = v2;
    int32_t v4 = v3 == 0 ? 1 : v3;
    int32_t v5 = v4 + v1; // 0x180193a3e
    uint32_t v6 = *(int32_t *)(a1 + 4); // 0x180193a57
    if (v5 >= v6) {
        uint32_t v7 = 2 * v6; // 0x180193a64
        function_1801cf470(a1, (int64_t)v5 > (int64_t)v7 ? v5 : v7);
    }
    // 0x180193a9f
    function_1801cfb30(a1, v5);
    int64_t v8 = *(int64_t *)(a1 + 8); // 0x180193ace
    // 0x180193b05
    return function_180195b30(v4 - 1 + (int32_t)v8, v1 + 1, a2, a3);
}

// Address range: 0x180193b10 - 0x180193b8e
int64_t function_180193b10(int64_t a1, int32_t a2, int32_t result) {
    // 0x180193b10
    int64_t v1; // 0x180193b10
    int64_t v2 = 0x100000000 * v1 / 0x10000000;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180193b33
    int64_t v4 = *v3; // 0x180193b33
    int64_t v5 = function_180197dc0(v4, v4 + v2, a2); // 0x180193b48
    if (v5 == *v3 + v2) {
        // 0x180193b89
        return result;
    }
    int32_t result2 = result; // 0x180193b79
    if (*(int32_t *)v5 == a2) {
        // 0x180193b81
        result2 = *(int32_t *)(v5 + 8);
    }
    // 0x180193b89
    return result2;
}

// Address range: 0x180193ba0 - 0x180193c5a
int64_t function_180193ba0(int64_t a1, int32_t a2, int32_t a3) {
    // 0x180193ba0
    int64_t v1; // 0x180193ba0
    int64_t v2 = 0x100000000 * v1 / 0x10000000;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180193bc3
    int64_t v4 = *v3; // 0x180193bc3
    int64_t result = function_180197dc0(v4, v4 + v2, a2); // 0x180193bd8
    if (result == *v3 + v2 || *(int32_t *)result != a2) {
        int32_t v5 = a2; // bp-32, 0x180193c19
        // 0x180193c55
        return function_1801ce8f0(a1, result, (int64_t)&v5);
    }
    // 0x180193c49
    *(int32_t *)(result + 8) = a3;
    // 0x180193c55
    return result;
}

// Address range: 0x180193c60 - 0x180193cc0
int64_t function_180193c60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180193c60
    return (int32_t)function_180193b10(a1, (int32_t)a2, (int32_t)(bool)((a3 & 255) != 0)) != 0;
}

// Address range: 0x180193cd0 - 0x180193d16
int64_t function_180193cd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180193cd0
    return function_180193ba0(a1, (int32_t)a2, (int32_t)(bool)((a3 & 255) != 0));
}

// Address range: 0x180193d20 - 0x180193da3
int64_t function_180193d20(int64_t a1, int64_t a2) {
    // 0x180193d20
    int128_t v1; // 0x180193d20
    int64_t v2 = __asm_movss(v1); // 0x180193d20
    int32_t v3 = a2; // 0x180193d26
    int64_t v4; // 0x180193d20
    int64_t v5 = 0x100000000 * v4 / 0x10000000;
    int64_t * v6 = (int64_t *)(a1 + 8); // 0x180193d44
    int64_t v7 = *v6; // 0x180193d44
    int64_t result = function_180197dc0(v7, v7 + v5, v3); // 0x180193d59
    if (result == *v6 + v5 || *(int32_t *)result != v3) {
        // 0x180193d8c
        __asm_movss_31((int32_t)v2);
        // 0x180193d9e
        return result;
    }
    // 0x180193d94
    __asm_movss_31(*(int32_t *)(result + 8));
    // 0x180193d9e
    return result;
}

// Address range: 0x180193db0 - 0x180193e73
int64_t function_180193db0(int64_t a1, int64_t a2) {
    // 0x180193db0
    int128_t v1; // 0x180193db0
    int32_t v2 = __asm_movss(v1); // 0x180193db0
    int32_t v3 = a2; // 0x180193db6
    int64_t v4; // 0x180193db0
    int64_t v5 = 0x100000000 * v4 / 0x10000000;
    int64_t * v6 = (int64_t *)(a1 + 8); // 0x180193dd4
    int64_t v7 = *v6; // 0x180193dd4
    int64_t result = function_180197dc0(v7, v7 + v5, v3); // 0x180193de9
    if (result != *v6 + v5) {
        // 0x180193e0f
        if (*(int32_t *)result == v3) {
            // 0x180193e5e
            *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31(v2));
            // 0x180193e6e
            return result;
        }
    }
    int64_t v8 = 0x100000000 * a2 / 0x100000000; // bp-32, 0x180193e2a
    __asm_movss(__asm_movss_31(v2));
    // 0x180193e6e
    return function_1801ce8f0(a1, result, (int64_t)&v8);
}

// Address range: 0x180193e80 - 0x180193ef8
int64_t function_180193e80(int64_t a1, int32_t a2) {
    // 0x180193e80
    int64_t v1; // 0x180193e80
    int64_t v2 = 0x100000000 * v1 / 0x10000000;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180193e9e
    int64_t v4 = *v3; // 0x180193e9e
    int64_t v5 = function_180197dc0(v4, v4 + v2, a2); // 0x180193eb3
    if (v5 == *v3 + v2) {
        // 0x180193ef3
        return 0;
    }
    int64_t result = 0; // 0x180193ee4
    if (*(int32_t *)v5 == a2) {
        // 0x180193eea
        result = *(int64_t *)(v5 + 8);
    }
    // 0x180193ef3
    return result;
}

// Address range: 0x180193f00 - 0x180193fbe
int64_t function_180193f00(int64_t a1, int32_t a2, int64_t a3) {
    // 0x180193f00
    int64_t v1; // 0x180193f00
    int64_t v2 = 0x100000000 * v1 / 0x10000000;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180193f23
    int64_t v4 = *v3; // 0x180193f23
    int64_t result = function_180197dc0(v4, v4 + v2, a2); // 0x180193f38
    if (result == *v3 + v2 || *(int32_t *)result != a2) {
        int32_t v5 = a2; // bp-32, 0x180193f79
        // 0x180193fb9
        return function_1801ce8f0(a1, result, (int64_t)&v5);
    }
    // 0x180193fab
    *(int64_t *)(result + 8) = a3;
    // 0x180193fb9
    return result;
}

// Address range: 0x180193fd0 - 0x180194089
int64_t function_180193fd0(int64_t a1, int32_t a2, int32_t a3) {
    // 0x180193fd0
    int64_t v1; // 0x180193fd0
    int64_t v2 = 0x100000000 * v1 / 0x10000000;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180193ff3
    int64_t v4 = *v3; // 0x180193ff3
    int64_t v5 = function_180197dc0(v4, v4 + v2, a2); // 0x180194008
    if (v5 != *v3 + v2) {
        int32_t * v6 = (int32_t *)v5; // 0x18019400d
        if (*v6 == a2) {
            // 0x18019407b
            return (int64_t)v6 + 8;
        }
    }
    int32_t v7 = a2; // bp-32, 0x180194049
    int64_t v8 = function_1801ce8f0(a1, v5, (int64_t)&v7); // 0x180194071
    // 0x18019407b
    return (int64_t)(int32_t *)v8 + 8;
}

// Address range: 0x180194090 - 0x1801940d5
int64_t function_180194090(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180194090
    return function_180193fd0(a1, (int32_t)a2, (int32_t)(bool)((a3 & 255) != 0));
}

// Address range: 0x1801940e0 - 0x18019419e
int64_t function_1801940e0(int64_t a1, int64_t a2) {
    // 0x1801940e0
    int128_t v1; // 0x1801940e0
    int64_t v2 = __asm_movss(v1); // 0x1801940e0
    int32_t v3 = a2; // 0x1801940e6
    int64_t v4; // 0x1801940e0
    int64_t v5 = 0x100000000 * v4 / 0x10000000;
    int64_t * v6 = (int64_t *)(a1 + 8); // 0x180194104
    int64_t v7 = *v6; // 0x180194104
    int64_t v8 = function_180197dc0(v7, v7 + v5, v3); // 0x180194119
    if (v8 != *v6 + v5) {
        int32_t * v9 = (int32_t *)v8; // 0x18019411e
        if (*v9 == v3) {
            // 0x180194190
            return (int64_t)v9 + 8;
        }
    }
    int64_t v10 = 0x100000000 * a2 / 0x100000000; // bp-32, 0x18019415a
    __asm_movss(__asm_movss_31((int32_t)v2));
    int64_t v11 = function_1801ce8f0(a1, v8, (int64_t)&v10); // 0x180194186
    // 0x180194190
    return (int64_t)(int32_t *)v11 + 8;
}

// Address range: 0x1801941b0 - 0x18019426b
int64_t function_1801941b0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a2; // 0x1801941b5
    int64_t v2; // 0x1801941b0
    int64_t v3 = 0x100000000 * v2 / 0x10000000;
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x1801941d3
    int64_t v5 = *v4; // 0x1801941d3
    int64_t v6 = function_180197dc0(v5, v5 + v3, v1); // 0x1801941e8
    if (v6 != *v4 + v3) {
        int32_t * v7 = (int32_t *)v6; // 0x1801941ed
        if (*v7 == v1) {
            // 0x18019425d
            return (int64_t)v7 + 8;
        }
    }
    int64_t v8 = 0x100000000 * a2 / 0x100000000; // bp-32, 0x180194229
    int64_t v9 = function_1801ce8f0(a1, v6, (int64_t)&v8); // 0x180194253
    // 0x18019425d
    return (int64_t)(int32_t *)v9 + 8;
}

// Address range: 0x180194280 - 0x1801942ce
int64_t function_180194280(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x18019429b
    int64_t result = v1; // 0x1801942aa
    int64_t v2; // 0x180194280
    if ((int32_t)v2 >= 2) {
        // 0x1801942ac
        result = function_180282ff0(v1, 0x100000000 * v2 / 0x100000000, 16, 0x1801bfe70);
    }
    // 0x1801942c9
    return result;
}

// Address range: 0x1801942e0 - 0x18019433d
int64_t function_1801942e0(int64_t a1, int64_t a2) {
    // 0x1801942e0
    int64_t v1; // 0x1801942e0
    if ((int32_t)v1 == 0) {
        // 0x180194338
        return v1 & 0xffffffff;
    }
    int64_t v2 = 0; // 0x1801942fb
    *(int32_t *)((16 * v2 | 8) + *(int64_t *)(a1 + 8)) = (int32_t)a2;
    v2 = (0x100000000 * v2 + 0x100000000) / 0x100000000;
    int64_t v3; // 0x1801942e0
    int64_t result = (int64_t)*(int32_t *)&v3; // 0x180194303
    while (v2 < result) {
        // 0x18019430a
        *(int32_t *)((16 * v2 | 8) + *(int64_t *)(a1 + 8)) = (int32_t)a2;
        v2 = (0x100000000 * v2 + 0x100000000) / 0x100000000;
        result = (int64_t)*(int32_t *)&v3;
    }
    // 0x180194338
    return result;
}

// Address range: 0x180194350 - 0x180194376
int64_t function_180194350(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x180194350
    function_18029db80(result, 0, 48, v1);
    return result;
}

// Address range: 0x180194380 - 0x180194399
int64_t function_180194380(int64_t * a1) {
    // 0x180194380
    return function_180194660((int64_t)a1);
}

// Address range: 0x1801943a0 - 0x180194650
int64_t function_1801943a0(int64_t * a1, int64_t a2) {
    // 0x1801943a0
    int128_t v1; // 0x1801943a0
    int64_t v2 = __asm_movss(v1); // 0x1801943a0
    if (a1 == NULL) {
        // 0x1801943c4
        *a1 = function_18017bd80();
    }
    int64_t result = (int64_t)a1;
    int32_t v3 = v2; // 0x1801943a0
    int64_t v4 = 0x100000000 * a2 / 0x100000000; // 0x1801943a6
    int64_t v5 = *(int64_t *)(result + 0x4078); // 0x1801943e9
    int64_t v6 = a2; // 0x180194405
    if ((*(int32_t *)(result + 0x6184) & 16) != 0) {
        int128_t v7 = __asm_cvtss2sd(v3); // 0x180194407
        int64_t v8 = *(int64_t *)(v5 + 8); // 0x180194415
        int128_t v9 = __asm_movaps(v7); // 0x180194419
        v6 = v4 & 0xffffffff;
        function_18018fdd0("Clipper: Begin(%d,%.2f) in '%s'\n", v6, __asm_movq_20(v9), v8);
    }
    int64_t v10 = *(int64_t *)(result + 0x4e90); // 0x180194440
    if (v10 != 0) {
        // 0x180194454
        if (*(char *)(v10 + 567) != 0) {
            // 0x180194464
            function_18025ed50(v10);
        }
    }
    int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)(v5 + 284))); // 0x180194484
    *(int32_t *)(result + 24) = (int32_t)v11;
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(__asm_movss_31(v3));
    *(int32_t *)(result + 16) = (int32_t)v4;
    *(int32_t *)(result + 8) = -1;
    *(int32_t *)(result + 12) = 0;
    int32_t * v12 = (int32_t *)(result + 0x4e78); // 0x1801944d4
    int32_t v13 = *v12 + 1; // 0x1801944da
    *v12 = v13;
    int64_t v14 = result + 0x4e80; // 0x1801944f4
    if ((int64_t)v13 > (int64_t)*(int32_t *)v14) {
        // 0x180194504
        int64_t v15; // bp-48, 0x1801943a0
        int64_t v16 = function_1801ca460(&v15, v6); // 0x18019451c
        function_1801d0090(v14, *v12, v16);
        int64_t v17; // bp-24, 0x1801943a0
        int64_t v18 = *(int64_t *)((int64_t)&v17 + 8); // 0x18019456f
        if (v18 != 0) {
            // 0x180194576
            function_1801901c0(v18);
        }
    }
    int64_t v19 = 40 * (int64_t)(*v12 - 1) + *(int64_t *)(result + 0x4e88); // 0x1801945ad
    *(int64_t *)v19 = result;
    *(int32_t *)(v19 + 16) = 0;
    *(int32_t *)(v19 + 12) = 0;
    function_1801d0190(v19 + 24, 0);
    int64_t v20 = __asm_movss(__asm_movss_31(*(int32_t *)(v5 + 364))); // 0x18019461b
    int32_t * v21 = (int32_t *)(v19 + 8); // 0x18019461b
    *v21 = (int32_t)v20;
    *(int64_t *)(result + 40) = v19;
    *(int64_t *)(result + 32) = __asm_movsd_17(__asm_cvtss2sd(*v21));
    return result;
}

// Address range: 0x180194660 - 0x18019479d
int64_t function_180194660(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 40); // 0x18019466e
    int64_t v2 = *v1; // 0x18019466e
    if (v2 == 0) {
        // 0x18019478c
        *(int32_t *)(result + 16) = -1;
        return result;
    }
    // 0x180194683
    if ((*(int32_t *)(result + 0x6184) & 16) != 0) {
        int64_t v3 = *(int64_t *)(*(int64_t *)(result + 0x4078) + 8); // 0x1801946ae
        int64_t v4; // 0x180194660
        int64_t v5; // 0x180194660
        function_18018fdd0("Clipper: End() in '%s'\n", v3, v5, v4);
    }
    int32_t * v6 = (int32_t *)(result + 16);
    int32_t v7 = *v6; // 0x1801946ca
    if (v7 >= 0 && v7 != 0x7fffffff) {
        // 0x1801946de
        if (*(int32_t *)(result + 8) >= 0) {
            // 0x1801946e9
            function_180194a00(result, v7);
        }
    }
    // 0x1801946fc
    *(int32_t *)(v2 + 12) = *(int32_t *)(v2 + 24);
    int32_t * v8 = (int32_t *)(result + 0x4e78); // 0x180194711
    int32_t v9 = *v8; // 0x180194711
    uint32_t v10 = v9 - 1; // 0x180194717
    *v8 = v10;
    if (v10 >= 1) {
        int64_t v11 = *(int64_t *)(result + 0x4e88) + 40 * (int64_t)(v9 - 2); // 0x18019475b
        *(int64_t *)(*(int64_t *)v11 + 40) = v11;
    }
    // 0x18019477f
    *v1 = 0;
    // 0x18019478c
    *v6 = -1;
    return result;
}

// Address range: 0x1801947b0 - 0x180194936
int64_t function_1801947b0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int128_t v2; // 0x1801947b0
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801947cb
    int64_t v4 = v1 + 20; // 0x1801947ce
    __asm_comiss(v3, *(int128_t *)v4);
    int64_t v5 = function_1801c04f0(v1); // 0x1801947f4
    int32_t v6 = 0x1000000 * (int32_t)v5 / 0x1000000; // 0x1801947f9
    int32_t v7 = v6; // 0x180194804
    if ((v5 & 255) != 0) {
        int32_t v8 = *(int32_t *)(v1 + 8); // 0x180194813
        v7 = v8 != *(int32_t *)(v1 + 12) ? v6 : 0;
    }
    int64_t v9 = *(int64_t *)(v1 + 0x4e90); // 0x180194822
    int64_t v10; // 0x1801947b0
    int64_t v11; // 0x1801947b0
    if (v9 != 0) {
        // 0x18019482c
        if (*(char *)(v9 + 578) == 0) {
            // 0x180194843
            if ((*(int32_t *)(v1 + 0x6184) & 16) != 0) {
                // 0x180194855
                int64_t v12; // 0x1801947b0
                function_18018fdd0("Clipper: Step(): inside frozen table row.\n", v12, v11, v10);
            }
        }
    }
    int32_t * v13; // 0x1801947b0
    int64_t v14; // 0x1801947b0
    uint64_t v15; // 0x1801947b0
    if (v15 <= 55) {
        // 0x180194868
        v13 = (int32_t *)(v1 + 0x6184);
    } else {
        int32_t * v16 = (int32_t *)v4; // 0x180194876
        __asm_comiss(__asm_movss_31(*v16), g30);
        int32_t * v17 = (int32_t *)(v1 + 0x6184);
        v13 = v17;
        if ((*v17 & 16) != 0) {
            int64_t v18 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(*v16))); // 0x1801948a3
            function_18018fdd0("Clipper: Step(): computed ItemsHeight: %.2f.\n", v18, v11, v10);
            v13 = v17;
            v14 = v18;
        }
    }
    uint32_t result = v7 & 255;
    int32_t v19 = *v13;
    if (result == 0) {
        if ((v19 & 16) != 0) {
            // 0x18019490e
            function_18018fdd0("Clipper: Step(): End.\n", v14, v11, v10);
        }
        // 0x180194921
        function_180194660(v1);
        // 0x18019492c
        return result;
    }
    if ((v19 & 16) != 0) {
        uint32_t v20 = *(int32_t *)(v1 + 12); // 0x1801948db
        uint32_t v21 = *(int32_t *)(v1 + 8); // 0x1801948e4
        function_18018fdd0("Clipper: Step(): display %d to %d.\n", (int64_t)v21, (int64_t)v20, v10);
    }
    // 0x18019492c
    return result;
}

// Address range: 0x180194940 - 0x1801949f2
int64_t function_180194940(int64_t * a1, int32_t a2, int64_t a3) {
    // 0x180194940
    if ((a3 & 0xffffffff) > (int64_t)a2) {
        int64_t v1 = *(int64_t *)((int64_t)a1 + 40); // 0x18019496b
        int32_t v2 = a2; // bp-88, 0x180194999
        int64_t v3; // bp-56, 0x180194940
        __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 12);
        function_1801cf1d0(v1 + 24, (int64_t)&v3);
    }
    // 0x1801949de
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180194a00 - 0x180194a5e
int64_t function_180194a00(int64_t a1, int32_t a2) {
    int128_t v1 = __asm_addsd(__asm_cvtss2sd(*(int32_t *)(a1 + 24)), *(int64_t *)(a1 + 32)); // 0x180194a1c
    int128_t v2 = __asm_cvtsi2sd_68(a2); // 0x180194a21
    int32_t * v3 = (int32_t *)(a1 + 20); // 0x180194a2c
    int64_t v4 = __asm_movss(__asm_cvtsd2ss(__asm_addsd_23(v1, __asm_mulsd_22(v2, __asm_cvtss2sd(*v3))))); // 0x180194a3d
    __asm_movss_31(*v3);
    return function_1801c0310(__asm_movss_31((int32_t)v4));
}

// Address range: 0x180194a70 - 0x180194b64
int64_t function_180194a70(int64_t result) {
    // 0x180194a70
    int64_t v1; // bp-32, 0x180194a70
    int64_t v2 = function_1801878f0(&v1); // 0x180194a81
    int64_t v3; // bp-24, 0x180194a70
    int64_t v4 = function_1801894f0(&v3); // 0x180194a90
    int64_t v5; // bp-16, 0x180194a70
    int64_t v6 = function_1801895c0(&v5); // 0x180194a9f
    int128_t v7 = __asm_movss_31(*(int32_t *)(v6 + 4)); // 0x180194ab3
    int64_t v8 = __asm_movss(__asm_addss(v7, *(int32_t *)(v4 + 4))); // 0x180194abd
    int128_t v9 = __asm_addss(__asm_movss_31(*(int32_t *)v6), *(int32_t *)v4); // 0x180194ad1
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // bp-56, 0x180194ae1
    __asm_movss(__asm_movss_31((int32_t)v8));
    int128_t v11 = __asm_movss_31(*(int32_t *)((int64_t)&v10 + 4)); // 0x180194b07
    int64_t v12 = __asm_movss(__asm_subss(v11, *(int32_t *)(v2 + 4))); // 0x180194b11
    int64_t v13 = __asm_movss(__asm_subss(__asm_movss_31(v10), *(int32_t *)v2)); // 0x180194b29
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31((int32_t)v13));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v12));
    return result;
}

// Address range: 0x180194b70 - 0x180194c03
int64_t function_180194b70(int64_t result) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180194b80
    int128_t v2 = __asm_movss_31(*(int32_t *)(v1 + 612)); // 0x180194bb4
    int64_t v3 = __asm_movss(__asm_subss(v2, *(int32_t *)(v1 + 44))); // 0x180194bbe
    int128_t v4 = __asm_movss_31(*(int32_t *)(v1 + 608)); // 0x180194bce
    int64_t v5 = __asm_movss(__asm_subss(v4, *(int32_t *)(v1 + 40))); // 0x180194bd6
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v3));
    return result;
}

// Address range: 0x180194c10 - 0x180194ca3
int64_t function_180194c10(int64_t result) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180194c20
    int128_t v2 = __asm_movss_31(*(int32_t *)(v1 + 620)); // 0x180194c54
    int64_t v3 = __asm_movss(__asm_subss(v2, *(int32_t *)(v1 + 44))); // 0x180194c5e
    int128_t v4 = __asm_movss_31(*(int32_t *)(v1 + 616)); // 0x180194c6e
    int64_t v5 = __asm_movss(__asm_subss(v4, *(int32_t *)(v1 + 40))); // 0x180194c76
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v3));
    return result;
}

// Address range: 0x180194cb0 - 0x180194d0b
int64_t function_180194cb0(void) {
    int64_t result = (int64_t)g1201; // 0x180194cb4
    int32_t v1 = *(int32_t *)(result + 0x4a40); // 0x180194cc5
    if (*(int32_t *)(result + 0x40d0) == v1) {
        // 0x180194cde
        *(char *)(result + 0x40e0) = 1;
    }
    // 0x180194cea
    if (*(int32_t *)(result + 0x40e4) == v1) {
        // 0x180194cfa
        *(char *)(result + 0x40f1) = 1;
    }
    // 0x180194d06
    return result;
}

// Address range: 0x180194d20 - 0x180194d7c
int64_t function_180194d20(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x180194d28
    return (-308 - v1 + function_1801a4160(v1, (int32_t)a1)) / 16;
}

// Address range: 0x180194d90 - 0x180194e28
// Used cryptographic patterns:
//  - CRC_32_IEEE_802_3_poly_0x04C11DB7 (32-bit, little endian)
int64_t function_180194d90(int64_t * a1, int64_t a2, int32_t a3) {
    int32_t v1 = -1 - a3;
    if (a2 == 0) {
        // 0x180194e1e
        return -1 - v1;
    }
    int64_t v2 = (int64_t)a1; // 0x180194d90
    int32_t v3 = v1; // 0x180194e01
    int64_t v4 = a2; // 0x180194dd1
    v4--;
    unsigned char v5 = *(char *)v2; // 0x180194df5
    int32_t v6 = *(int32_t *)((int64_t)(4 * (v3 & 255 ^ (int32_t)v5)) + (int64_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_1802c3b40); // 0x180194e01
    v3 = v6 ^ v3 / 256;
    v2++;
    while (v4 != 0) {
        // 0x180194de1
        v4--;
        v5 = *(char *)v2;
        v6 = *(int32_t *)((int64_t)(4 * (v3 & 255 ^ (int32_t)v5)) + (int64_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_1802c3b40);
        v3 = v6 ^ v3 / 256;
        v2++;
    }
    // 0x180194e1e
    return -1 - v3;
}

// Address range: 0x180194e30 - 0x180194fd1
// Used cryptographic patterns:
//  - CRC_32_IEEE_802_3_poly_0x04C11DB7 (32-bit, little endian)
int64_t function_180194e30(char * a1, int32_t a2, int32_t a3) {
    int32_t v1 = -1 - a3;
    int32_t v2 = a2; // 0x180194e71
    if (a2 != 0) {
        v2--;
        unsigned char v3 = *a1; // 0x180194e9f
        int64_t v4 = (int64_t)a1; // 0x180194ea6
        char * v5 = (char *)(v4 + 1); // 0x180194eae
        int32_t v6 = v1; // 0x180194ec4
        if (v2 >= 2 && v3 == 35) {
            // 0x180194ece
            v6 = v1;
            if (*v5 == 35) {
                // 0x180194ee5
                v6 = *(char *)(v4 + 2) != 35 ? v1 : v1;
            }
        }
        int32_t v7 = *(int32_t *)((int64_t)(4 * (v6 ^ (int32_t)v3) & 1020) + (int64_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_1802c3b40); // 0x180194f23
        int32_t v8 = v6 / 256 ^ v7; // 0x180194f23
        while (v2 != 0) {
            int32_t v9 = v8;
            v2--;
            v3 = *v5;
            v4 = (int64_t)v5;
            v5 = (char *)(v4 + 1);
            v6 = v9;
            if (v2 >= 2 && v3 == 35) {
                // 0x180194ece
                v6 = v9;
                if (*v5 == 35) {
                    // 0x180194ee5
                    v6 = *(char *)(v4 + 2) != 35 ? v9 : v1;
                }
            }
            // 0x180194f04
            v7 = *(int32_t *)((int64_t)(4 * (v6 ^ (int32_t)v3) & 1020) + (int64_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_1802c3b40);
            v8 = v6 / 256 ^ v7;
        }
        // 0x180194fc6
        return -1 - v8;
    }
    char v10 = *a1; // 0x180194f39
    if (v10 == 0) {
        // 0x180194fc6
        return -1 - v1;
    }
    int64_t v11 = (int64_t)a1;
    int64_t v12 = v11 + 1;
    int32_t v13 = v10;
    char v14 = *(char *)v12;
    int32_t v15 = v1; // 0x180194f64
    if ((v13 & 255) == 35 == v14 == 35) {
        // 0x180194f7d
        v15 = *(char *)(v11 + 2) != 35 ? v1 : v1;
    }
    int32_t v16 = *(int32_t *)((int64_t)(4 * (v15 ^ v13) & 1020) + (int64_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_1802c3b40); // 0x180194fba
    int32_t v17 = v15 / 256 ^ v16; // 0x180194fba
    while (v14 != 0) {
        int32_t v18 = v17;
        v11 = v12;
        v12 = v11 + 1;
        v13 = v14;
        v14 = *(char *)v12;
        v15 = v18;
        if ((v13 & 255) == 35 == v14 == 35) {
            char v19 = *(char *)(v11 + 2); // 0x180194f8b
            v15 = v19 != 35 ? v18 : v1;
        }
        // 0x180194f9c
        v16 = *(int32_t *)((int64_t)(4 * (v15 ^ v13) & 1020) + (int64_t)&CRC_32_IEEE_802_3_poly_0x04C11DB7_at_1802c3b40);
        v17 = v15 / 256 ^ v16;
    }
    // 0x180194fc6
    return -1 - v17;
}

// Address range: 0x180194fe0 - 0x1801950ed
int64_t function_180194fe0(int64_t a1, uint32_t a2) {
    uint32_t v1 = (int32_t)a1; // 0x180194fe4
    int128_t v2 = __asm_divss_38(__asm_cvtsi2ss_37((int64_t)(a2 / 0x1000000)), 0x437f0000); // 0x180194fff
    int32_t v3 = __asm_movss(v2); // 0x180195007
    int32_t v4 = v1 & 255; // 0x180195010
    int32_t v5 = __asm_cvttss2si(__asm_addss_34(__asm_cvtsi2ss(v4), __asm_mulss(__asm_cvtsi2ss((a2 & 255) - v4), v3))); // 0x180195039
    int32_t v6 = v1 / 256 & 255; // 0x180195050
    int128_t v7 = __asm_cvtsi2ss(v6); // 0x180195059
    int32_t v8 = __asm_cvttss2si(__asm_addss_34(v7, __asm_mulss(__asm_cvtsi2ss((a2 / 256 & 255) - v6), v3))); // 0x18019507c
    int32_t v9 = v1 / 0x10000 & 255; // 0x180195093
    int128_t v10 = __asm_addss_34(__asm_cvtsi2ss(v9), __asm_mulss(__asm_cvtsi2ss((a2 / 0x10000 & 255) - v9), v3)); // 0x1801950bb
    return v5 | 256 * v8 | 0x10000 * __asm_cvttss2si(v10) | -0x1000000;
}

// Address range: 0x180195100 - 0x1801951ea
int64_t function_180195100(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // 0x18019510a
    int64_t v2 = a1; // 0x18019510a
    char v3 = *(char *)v1; // 0x180195113
    int32_t v4 = v3; // 0x180195116
    char v5 = *(char *)v2; // 0x180195155
    int32_t v6 = v5; // 0x180195158
    uint32_t result = (v3 > 122 ? v4 : v4 & -33) - (v5 > 122 ? v6 : v6 & -33); // 0x1801951a9
    while (v5 != 0 && result == 0) {
        // 0x1801951c2
        v1++;
        v2++;
        v3 = *(char *)v1;
        v4 = v3;
        v5 = *(char *)v2;
        v6 = v5;
        result = (v3 > 122 ? v4 : v4 & -33) - (v5 > 122 ? v6 : v6 & -33);
    }
    // 0x1801951e1
    return result;
}

// Address range: 0x1801951f0 - 0x180195300
int64_t function_1801951f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1; // 0x180195211
    int64_t v2 = a2; // 0x180195211
    if (a3 == 0) {
        // 0x1801952f7
        return 0;
    }
    int64_t v3 = a3; // 0x180195211
    char v4 = *(char *)v2; // 0x18019521c
    int32_t v5 = v4; // 0x18019521f
    char v6 = *(char *)v1; // 0x18019525e
    int32_t v7 = v6; // 0x180195261
    uint32_t result = (v4 > 122 ? v5 : v5 & -33) - (v6 > 122 ? v7 : v7 & -33); // 0x1801952b2
    while (v6 != 0 && result == 0) {
        // 0x1801952cb
        v3--;
        v1++;
        v2++;
        if (v3 == 0) {
            // break -> 0x1801952f7
            return 0;
        }
        v4 = *(char *)v2;
        v5 = v4;
        v6 = *(char *)v1;
        v7 = v6;
        result = (v4 > 122 ? v5 : v5 & -33) - (v6 > 122 ? v7 : v7 & -33);
    }
    // 0x1801952f7
    return result;
}

// Address range: 0x180195310 - 0x180195369
int64_t function_180195310(int64_t a1, int64_t a2, uint64_t a3) {
    if (a3 == 0) {
        // 0x180195364
        int64_t result; // 0x180195310
        return result;
    }
    if (a3 >= 2) {
        // 0x180195335
        function_18029e1e0(a1, a2, a3 - 1);
    }
    int64_t result2 = a3 + a1; // 0x18019535a
    *(char *)(result2 - 1) = 0;
    // 0x180195364
    return result2;
}

// Address range: 0x180195370 - 0x1801953bc
int64_t function_180195370(int64_t a1) {
    int64_t v1 = function_18029e0a0(a1) + 1; // 0x18019538d
    int64_t v2; // 0x180195370
    return function_18029d4e0(function_180190140(v1), a1, v1, v2);
}

// Address range: 0x1801953d0 - 0x18019547b
int64_t function_1801953d0(int64_t a1, int64_t * a2, int64_t a3) {
    // 0x1801953d0
    int64_t v1; // 0x1801953d0
    if (a2 == NULL) {
        // 0x1801953fa
        v1 = function_18029e0a0(a1) + 1;
    } else {
        // 0x1801953eb
        v1 = (int64_t)a2;
    }
    uint64_t v2 = function_18029e0a0(a3) + 1; // 0x180195420
    int64_t v3; // 0x1801953d0
    if ((uint64_t)v1 >= v2) {
        // 0x180195462
        return function_18029d4e0(a1, a3, v2, v3);
    }
    // 0x180195434
    function_1801901c0(a1);
    int64_t v4 = function_180190140(v2); // 0x180195443
    if (a2 != NULL) {
        // 0x180195455
        *a2 = v2;
    }
    // 0x180195462
    return function_18029d4e0(v4, a3, v2, v3);
}

// Address range: 0x180195490 - 0x1801954d6
int64_t function_180195490(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180195490
    return function_18029e000(a1, (int64_t)(uint32_t)(0x1000000 * (int32_t)a3 / 0x1000000), a2 - a1);
}

// Address range: 0x1801954e0 - 0x18019553d
int64_t function_1801954e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_18029e000(a1, 10, a2 - a1); // 0x18019550b
    return v1 == 0 ? a2 : v1;
}

// Address range: 0x180195550 - 0x1801957a1
int64_t function_180195550(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // 0x180195571
    if (a4 == 0) {
        // 0x180195573
        v1 = function_18029e0a0(a3) + a3;
    }
    // 0x180195596
    int64_t v2; // 0x180195550
    char v3 = v2;
    int32_t v4 = v3; // 0x1801955a1
    int64_t v5 = a1; // 0x1801955e7
    int64_t result; // 0x180195550
    while (true) {
        int64_t v6 = v5;
        char v7; // 0x180195550
        if (a2 != 0) {
            // 0x1801955ff
            result = 0;
            if (v6 >= a2) {
                // break -> 0x18019579c
                return 0;
            }
            // 0x1801955ff
            v7 = *(char *)v6;
        } else {
            char v8 = *(char *)v6; // 0x1801955f8
            v7 = v8;
            result = 0;
            if (v8 == 0) {
                // break -> 0x18019579c
                return 0;
            }
        }
        int32_t v9 = v7; // 0x180195623
        int64_t v10 = v6; // 0x180195673
        if ((((v7 > 122 ? v9 : v9 & 223) ^ (v3 > 122 ? v4 : v4 & 223)) & 255) == 0) {
            int64_t v11 = a3 + 1;
            while (v1 > v11) {
                int64_t v12 = v10 + 1;
                char v13 = *(char *)v12; // 0x1801956ca
                int32_t v14 = v13; // 0x1801956cd
                char v15 = *(char *)v11; // 0x180195713
                int32_t v16 = v15; // 0x180195716
                int64_t v17 = v11; // 0x180195769
                v10 = v12;
                if ((((v15 > 122 ? v16 : v16 & 223) ^ (v13 > 122 ? v14 : v14 & 223)) & 255) != 0) {
                    // break -> 0x180195772
                    return 0;
                }
                v11 = v17 + 1;
            }
            // 0x180195772
            result = v6;
            if (v1 == v11) {
                // break -> 0x18019579c
                return 0;
            }
        }
        // 0x180195788
        v5 = v6 + 1;
    }
    // 0x18019579c
    return result;
}

// Address range: 0x1801957b0 - 0x1801958bb
int64_t function_1801957b0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = v1;
    char v3 = *(char *)v2; // 0x1801957d1
    int64_t v4 = v2 + 1; // 0x1801957d8
    while (v3 != 32 != v3 != 9) {
        // 0x1801957c3
        v2 = v4;
        v3 = *(char *)v2;
        v4 = v2 + 1;
    }
    int64_t v5 = v2; // 0x180195814
    int64_t v6 = v2; // 0x180195814
    if (v3 != 0) {
        v6++;
        v5 = v6;
        while (*(char *)v6 != 0) {
            // 0x18019580a
            v6++;
            v5 = v6;
        }
    }
    uint64_t v7 = v5;
    while (v7 > v2) {
        int64_t v8 = v7 - 1; // 0x18019583f
        char v9 = *(char *)v8; // 0x18019583f
        if (v9 != 32 == (v9 != 9)) {
            // break -> 0x18019586e
            return 0;
        }
        v7 = v8;
    }
    int64_t result = v7 - v2;
    if (v2 != v1) {
        // 0x18019587a
        int64_t v10; // 0x1801957b0
        function_18029d4e0(v1, v2, result, v10);
    }
    // 0x18019589d
    *(char *)(result + v1) = 0;
    return result;
}

// Address range: 0x1801958d0 - 0x180195918
int64_t function_1801958d0(int64_t a1) {
    int64_t result = a1;
    char v1 = *(char *)result; // 0x1801958e3
    int64_t v2 = result + 1; // 0x1801958ea
    while (v1 != 32 != v1 != 9) {
        // 0x1801958d5
        result = v2;
        v1 = *(char *)result;
        v2 = result + 1;
    }
    // 0x180195912
    return result;
}

// Address range: 0x180195920 - 0x180195963
int64_t function_180195920(int64_t a1) {
    int32_t result = 0; // 0x18019594f
    if (*(int16_t *)a1 == 0) {
        // 0x18019595b
        return 0;
    }
    int64_t v1 = a1; // 0x18019594f
    v1 += 2;
    result++;
    while (*(int16_t *)v1 != 0) {
        // 0x180195951
        v1 += 2;
        result++;
    }
    // 0x18019595b
    return result;
}

// Address range: 0x180195970 - 0x1801959b3
int64_t function_180195970(int64_t a1, uint64_t a2) {
    uint64_t result = a1;
    while (result > a2) {
        int64_t v1 = result - 2; // 0x180195994
        if (*(int16_t *)v1 == 10) {
            // break -> 0x1801959ad
            return 0;
        }
        result = v1;
    }
    // 0x1801959ad
    return result;
}

// Address range: 0x1801959c0 - 0x180195a1d
int64_t function_1801959c0(char a1) {
    // 0x1801959c0
    return (bool)((unsigned char)(a1 - 48) < 10 | (unsigned char)((a1 & -33) - 65) < 6);
}

// Address range: 0x180195a30 - 0x180195b20
int64_t function_180195a30(int64_t * a1, int64_t a2, char * a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = a4; // bp+32, 0x180195a3f
    int64_t v3 = *(int64_t *)function_1800367e0(); // 0x180195a71
    int64_t v4 = function_180276a8c(v3 | 1, v1, a2, (int64_t)a3, 0, (int64_t)&v2); // 0x180195a9d
    int32_t result2 = v4; // 0x180195aa2
    int32_t result = result2 >= 0 ? result2 : -1;
    if (a1 == NULL) {
        // 0x180195b1b
        return result;
    }
    if (result != -1) {
        // 0x180195af5
        if ((a2 & 0xffffffff) > (int64_t)result) {
            // 0x180195b09
            *(char *)((int64_t)result2 + v1) = 0;
            // 0x180195b1b
            return result2;
        }
    }
    int32_t result3 = (int32_t)a2 - 1;
    *(char *)((int64_t)result3 + v1) = 0;
    // 0x180195b1b
    return result3;
}

// Address range: 0x180195b30 - 0x180195bf3
int64_t function_180195b30(int32_t a1, uint32_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2 = *(int64_t *)function_1800367e0(); // 0x180195b4d
    int32_t result2 = function_180276a8c(v2 | 1, v1, (int64_t)a2, a3, 0, a4); // 0x180195b7e
    int32_t result = result2 >= 0 ? result2 : -1;
    if (a1 == 0) {
        // 0x180195bee
        return result;
    }
    if (result != -1) {
        // 0x180195bc8
        if ((int64_t)result < (int64_t)a2) {
            // 0x180195bdc
            *(char *)((int64_t)result2 + v1) = 0;
            // 0x180195bee
            return result2;
        }
    }
    int32_t result3 = a2 - 1;
    *(char *)((int64_t)result3 + v1) = 0;
    // 0x180195bee
    return result3;
}

// Address range: 0x180195c00 - 0x180195c49
int64_t function_180195c00(int64_t * a1, int32_t a2, char * a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // bp+32, 0x180195c0f
    int64_t result = function_180195c50((int64_t)a1, (int64_t)a2, (int64_t)a3, (int64_t)&v1, a4); // 0x180195c36
    return result;
}

// Address range: 0x180195c50 - 0x180195f96
int64_t function_180195c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-40, 0x180195c50
    *(int64_t *)&v2 = v1;
    if (*(char *)a3 == 37) {
        char v3 = *(char *)(a3 + 1); // 0x180195ca3
        if (v3 == 115) {
            // 0x180195cb0
            if (*(char *)(a3 + 2) == 0) {
                int64_t v4 = *(int64_t *)a4;
                int64_t v5 = v4 != 0 ? v4 : (int64_t)"(null)"; // 0x180195d45
                *(int64_t *)a1 = v5;
                int64_t result = a1; // 0x180195d53
                if (a2 != 0) {
                    // 0x180195d55
                    result = function_18029e0a0(v5) + v5;
                    *(int64_t *)a2 = result;
                }
                // 0x180195f91
                return result;
            }
        }
        if (v3 == 46) {
            // 0x180195db3
            if (*(char *)(a3 + 2) == 42) {
                // 0x180195dd1
                if (*(char *)(a3 + 3) == 115) {
                    // 0x180195def
                    if (*(char *)(a3 + 4) == 0) {
                        int32_t v6 = *(int32_t *)a4;
                        int64_t v7 = *(int64_t *)(a4 + 8);
                        int64_t v8 = v7 != 0 ? v7 : (int64_t)"(null)"; // 0x180195f06
                        *(int64_t *)a1 = v8;
                        int64_t result2 = (v6 < 6 | v7 != 0 ? (int64_t)v6 : 6) + v8; // 0x180195f18
                        *(int64_t *)a2 = result2;
                        // 0x180195f91
                        return result2;
                    }
                }
            }
        }
    }
    int64_t * v9 = (int64_t *)(v1 + 0x6370);
    int64_t v10 = function_180195b30((int32_t)*v9, *(int32_t *)(v1 + 0x6368), a3, a4); // 0x180195f53
    *(int64_t *)a1 = *v9;
    int64_t result3 = a1; // 0x180195f76
    if (a2 != 0) {
        int64_t v11 = *(int64_t *)((int64_t)v2 + 0x6370); // 0x180195f82
        result3 = v11 + 0x100000000 * v10 / 0x100000000;
        *(int64_t *)a2 = result3;
    }
    // 0x180195f91
    return result3;
}

// Address range: 0x180195fa0 - 0x180195fdd
int64_t function_180195fa0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = function_1801bfcb0(result, 5, (int32_t)a2); // 0x180195fbc
    *(char *)(0x100000000 * v1 / 0x100000000 + result) = 0;
    return result;
}

// Address range: 0x180195ff0 - 0x180196100
int64_t function_180195ff0(int64_t a1, int32_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = (int64_t)a2 + a1; // 0x18019601b
    uint64_t v2 = v1 - 1; // 0x18019602b
    if (v2 <= a1) {
        // 0x1801960e3
        *(char *)a1 = 0;
        return 0;
    }
    int64_t v3 = a3; // 0x180195ff0
    int64_t v4 = a1;
    int64_t v5 = v4; // 0x18019603f
    while (a4 != 0 != v3 >= a4) {
        uint16_t v6 = *(int16_t *)v3; // 0x180196056
        v5 = v4;
        if (v6 == 0) {
            // break -> 0x1801960e3
            return 0;
        }
        int64_t v7; // 0x180195ff0
        if (v6 >= 128) {
            // 0x1801960a8
            v7 = 0x100000000 * function_1801bfcb0(v4, (v4 ^ 0xffffffff) + v1 & 0xffffffff, (int32_t)v6) / 0x100000000;
        } else {
            // 0x18019608d
            *(char *)v4 = (char)v6;
            v7 = 1;
        }
        int64_t v8 = v7 + v4;
        v3 += 2;
        v5 = v8;
        if (v8 >= v2) {
            // break -> 0x1801960e3
            return 0;
        }
        v4 = v8;
        v5 = v4;
    }
    // 0x1801960e3
    *(char *)v5 = 0;
    return v5 - a1;
}

// Address range: 0x180196110 - 0x180196569
int64_t function_180196110(int64_t * a1, uint64_t a2, int32_t a3) {
    // 0x180196110
    uint64_t v1; // 0x180196110
    char v2 = *(char *)((v1 / 8 & 31) + (int64_t)&g390); // 0x180196137
    int32_t v3 = (int32_t)(v2 == 0) + (int32_t)v2; // 0x180196160
    uint64_t v4 = (int64_t)(a3 != 0 ? a3 : v3 + (int32_t)a2); // 0x18019618b
    char v5 = 0; // 0x180196198
    if (v4 > a2) {
        // 0x18019619a
        v5 = *(char *)a2;
    }
    // 0x1801961ba
    int32_t v6; // bp-104, 0x180196110
    int64_t v7 = &v6; // 0x18019611f
    char * v8 = (char *)(v7 + 4); // 0x1801961c8
    *v8 = v5;
    uint64_t v9 = a2 + 1; // 0x1801961d1
    char v10 = 0; // 0x1801961dc
    if (v9 < v4) {
        // 0x1801961de
        v10 = *(char *)v9;
    }
    char * v11 = (char *)(v7 + 5); // 0x18019620c
    *v11 = v10;
    uint64_t v12 = a2 + 2; // 0x180196215
    char v13 = 0; // 0x180196221
    if (v12 < v4) {
        // 0x180196223
        v13 = *(char *)v12;
    }
    char * v14 = (char *)(v7 + 6); // 0x180196251
    *v14 = v13;
    uint64_t v15 = a2 + 3; // 0x18019625a
    char v16 = 0; // 0x180196266
    if (v15 < v4) {
        // 0x180196268
        v16 = *(char *)v15;
    }
    char * v17 = (char *)(v7 + 7); // 0x180196296
    *v17 = v16;
    int64_t v18 = 4 * (int64_t)v2; // 0x1801962b4
    int32_t v19 = *(int32_t *)(v18 + (int64_t)&g391); // 0x1801962b4
    *(int32_t *)a1 = 0x40000 * (v19 & (int32_t)*v8);
    int64_t v20; // 0x180196110
    uint32_t v21 = *(int32_t *)&v20;
    *(int32_t *)a1 = 0x1000 * (int32_t)(*v11 & 63) | v21;
    *(int32_t *)a1 = 64 * (int32_t)(*v14 & 63) | v21;
    *(int32_t *)a1 = v21 | (int32_t)(*v17 & 63);
    int32_t v22 = *(int32_t *)(v18 + (int64_t)&g393); // 0x18019633c
    *(int32_t *)a1 = v21 >> (v22 & 31);
    v6 = 0;
    uint32_t v23 = *(int32_t *)(v18 + (int64_t)&g392); // 0x180196374
    int32_t v24 = v21 >= v23 ? 0 : 64;
    int32_t v25 = ((v21 & -2048) != 0xd800 ? 0 : 128) | (v21 < 0x10000 ? 0 : 256) | v24; // 0x1801963f2
    v6 = v25;
    int32_t v26 = v25 | (int32_t)(*v11 / 4 & 48); // 0x180196412
    v6 = v26;
    int32_t v27 = v26 | (int32_t)(*v14 / 16 & 12); // 0x180196432
    v6 = v27;
    int32_t v28 = (v27 | (int32_t)(*v17 / 64)) ^ 42; // 0x180196457
    v6 = v28;
    int32_t v29 = v28 >> (*(int32_t *)(v18 + (int64_t)&g394) & 31);
    v6 = v29;
    int32_t result = v3; // 0x18019647b
    if (v29 != 0) {
        char v30 = *v8; // 0x18019648a
        char v31 = *v11; // 0x1801964ae
        char v32 = *v14; // 0x1801964d2
        char v33 = *v17; // 0x1801964f6
        uint32_t v34 = (int32_t)(v31 != 0) + (int32_t)(v30 != 0) + (int32_t)(v32 != 0) + (int32_t)(v33 != 0); // 0x180196521
        result = (int64_t)v3 < (int64_t)v34 ? v3 : v34;
        *(int32_t *)a1 = 0xfffd;
    }
    // 0x180196560
    return result;
}

// Address range: 0x180196570 - 0x18019664e
int64_t function_180196570(int64_t a1, int32_t a2, int64_t a3, int32_t a4, int64_t * a5) {
    uint64_t v1 = a1 - 2 + 2 * (int64_t)a2; // 0x1801965a9
    int64_t v2 = a3; // 0x1801965b2
    int64_t v3 = a1; // 0x1801965b2
    if (v1 > a1) {
        int64_t v4 = a1; // 0x18019660c
        int64_t v5 = a3; // 0x1801965ef
        v2 = v5;
        v3 = v4;
        while (a4 != 0 != v5 >= (int64_t)a4) {
            // 0x1801965c8
            v2 = v5;
            v3 = v4;
            if (*(char *)v5 == 0) {
                // break -> 0x180196617
                return 0;
            }
            // 0x1801965d4
            int16_t v6; // bp-40, 0x180196570
            v5 += 0x100000000 * function_180196110((int64_t *)&v6, v5, a4) / 0x100000000;
            *(int16_t *)v4 = v6;
            v4 += 2;
            v2 = v5;
            v3 = v4;
            if (v4 >= v1) {
                // break -> 0x180196617
                return 0;
            }
            v2 = v5;
            v3 = v4;
        }
    }
    // 0x180196617
    *(int16_t *)v3 = 0;
    if (a5 != NULL) {
        // 0x180196629
        *a5 = v2;
    }
    // 0x180196636
    return (v3 - a1) / 2;
}

// Address range: 0x180196660 - 0x1801966d1
int64_t function_180196660(uint64_t a1, uint64_t a2) {
    // 0x180196660
    if (a2 != 0 == a1 >= a2) {
        // 0x1801966c8
        return 0;
    }
    int32_t result = 0; // 0x1801966c0
    int64_t v1 = a1; // 0x1801966b1
    while (*(char *)v1 != 0) {
        // 0x180196696
        int64_t v2; // bp-20, 0x180196660
        v1 += 0x100000000 * function_180196110(&v2, v1, (int32_t)a2) / 0x100000000;
        result++;
        if (a2 != 0 == v1 >= a2) {
            // break -> 0x1801966c8
            return 0;
        }
    }
    // 0x1801966c8
    return result;
}

// Address range: 0x1801966e0 - 0x18019670f
int64_t function_1801966e0(int64_t a1, int64_t a2) {
    int32_t v1 = 0; // bp-24, 0x1801966ee
    return function_180196110((int64_t *)&v1, a1, (int32_t)a2);
}

// Address range: 0x180196720 - 0x180196806
int64_t function_180196720(int16_t * a1, int64_t * a2) {
    uint32_t result = 0;
    int16_t * v1 = a1;
    if (a2 != NULL) {
        if ((int64_t *)v1 >= a2) {
            // break -> 0x1801967fd
            return 0;
        }
    }
    uint16_t v2 = *v1; // 0x180196753
    while (v2 != 0) {
        int32_t v3 = 1; // 0x180196786
        if (v2 >= 128) {
            // 0x1801967a7
            v3 = v2 >= 2048 ? 3 : 2;
        }
        // 0x1801967f8
        result += v3;
        v1 = (int16_t *)((int64_t)v1 + 2);
        if (a2 != NULL) {
            if ((int64_t *)v1 >= a2) {
                // break -> 0x1801967fd
                return 0;
            }
        }
        // 0x18019674e
        v2 = *v1;
    }
    // 0x1801967fd
    return result;
}

// Address range: 0x180196810 - 0x180196856
int64_t function_180196810(uint64_t a1, int64_t a2) {
    int64_t v1 = a2; // 0x180196815
    int64_t result = a1; // 0x180196824
    while (v1 > a1) {
        // 0x180196826
        v1--;
        result = v1;
        if ((*(char *)v1 & -64) != -128) {
            // break -> 0x180196855
            return 0;
        }
        result = a1;
    }
    // 0x180196855
    return result;
}

// Address range: 0x180196860 - 0x18019690b
int64_t function_180196860(uint64_t a1, int64_t a2) {
    int64_t v1 = a2; // 0x180196874
    if (a2 == 0) {
        // 0x180196876
        v1 = function_18029e0a0(a1) + a1;
    }
    int32_t result = 0; // 0x1801968a2
    if (v1 <= a1) {
        // 0x180196902
        return 0;
    }
    int64_t v2 = a1;
    int64_t v3 = function_18029e000(v2, 10, v1 - v2); // 0x1801968c1
    int64_t v4 = v3 == 0 ? v1 : v3 + 1;
    result++;
    while (v1 > v4) {
        // 0x1801968a4
        v2 = v4;
        v3 = function_18029e000(v2, 10, v1 - v2);
        v4 = v3 == 0 ? v1 : v3 + 1;
        result++;
    }
    // 0x180196902
    return result;
}

// Address range: 0x180196920 - 0x180196ac2
int64_t function_180196920(int64_t a1, char * lpMultiByteStr2) {
    char * lpMultiByteStr = (char *)a1; // 0x180196969
    int32_t cchWideChar = MultiByteToWideChar(0xfde9, 0, lpMultiByteStr, -1, NULL, 0); // 0x180196969
    int32_t cchWideChar2 = MultiByteToWideChar(0xfde9, 0, lpMultiByteStr2, -1, NULL, 0); // 0x180196999
    int32_t v1 = 0; // bp-600, 0x1801969ab
    uint32_t v2 = cchWideChar2 + cchWideChar; // 0x1801969c4
    if (v2 >= 261) {
        // 0x1801969cf
        function_1801cfcd0((int64_t)&v1, v2);
    }
    // 0x1801969e8
    int64_t lpWideCharStr; // bp-552, 0x180196920
    int64_t v3 = &lpWideCharStr; // 0x180196a06
    int64_t lpWideCharStr2 = 2 * (int64_t)cchWideChar + v3; // 0x180196a1a
    MultiByteToWideChar(0xfde9, 0, lpMultiByteStr, -1, (int16_t *)&lpWideCharStr, cchWideChar);
    MultiByteToWideChar(0xfde9, 0, lpMultiByteStr2, -1, (int16_t *)lpWideCharStr2, cchWideChar2);
    function_18028015c(v3, lpWideCharStr2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180196ad0 - 0x180196b03
int64_t function_180196ad0(int64_t a1) {
    // 0x180196ad0
    return (int32_t)function_180277978(a1) == 0;
}

// Address range: 0x180196b10 - 0x180196b9d
int64_t function_180196b10(int64_t a1, int64_t a2) {
    int32_t v1 = function_18028079c(a1); // 0x180196b33
    if (v1 == -1 || (int32_t)function_180278840(a1, 0, 2) != 0) {
        // 0x180196b93
        return -1;
    }
    int64_t v2 = function_18028079c(a1); // 0x180196b59
    if ((int32_t)v2 == -1) {
        // 0x180196b93
        return -1;
    }
    int64_t result = -1; // 0x180196b7c
    if ((int32_t)function_180278840(a1, v1, 0) == 0) {
        // 0x180196b7e
        result = 0x100000000 * v2 / 0x100000000;
    }
    // 0x180196b93
    return result;
}

// Address range: 0x180196bb0 - 0x180196be6
int64_t function_180196bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180196bb0
    return function_180278424(a1, a2, a3, a4);
}

// Address range: 0x180196bf0 - 0x180196c26
int64_t function_180196bf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180196bf0
    return function_180278c4c((int64_t *)a1, a2, a3, a4);
}

// Address range: 0x180196c30 - 0x180196d66
int64_t function_180196c30(int64_t a1, char * a2, int64_t * a3, uint32_t a4, int64_t a5) {
    if (a3 != NULL) {
        // 0x180196c50
        *a3 = 0;
    }
    int64_t v1 = function_180196920(a1, a2); // 0x180196c66
    if (v1 == 0) {
        // 0x180196d61
        return 0;
    }
    int64_t v2 = function_180196b10(v1, (int64_t)a2); // 0x180196c84
    if (v2 == -1) {
        // 0x180196c96
        function_180196ad0(v1);
        // 0x180196d61
        return 0;
    }
    int64_t v3 = a4; // 0x180196ca7
    int64_t result = function_180190140(v2 + v3); // 0x180196cba
    if (result == 0) {
        // 0x180196ccc
        function_180196ad0(v1);
        // 0x180196d61
        return 0;
    }
    // 0x180196cdd
    if (function_180196bb0(result, 1, v2, v1, result) != v2) {
        // 0x180196cfd
        function_180196ad0(v1);
        function_1801901c0(result);
        // 0x180196d61
        return 0;
    }
    if (a4 >= 1) {
        // 0x180196d1c
        function_18029db80(result + v2, 0, v3, v1);
    }
    // 0x180196d3c
    function_180196ad0(v1);
    if (a3 != NULL) {
        // 0x180196d4f
        *a3 = v2;
    }
    // 0x180196d61
    return result;
}

// Address range: 0x180196d70 - 0x180196e13
int64_t function_180196d70(int64_t * a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 4); // 0x180196d8d
    int128_t v2 = __asm_movss_31(*v1); // 0x180196d8d
    int64_t v3 = a3 + 4; // 0x180196d92
    __asm_comiss(v2, *(int128_t *)v3);
    int64_t v4; // 0x180196d70
    uint64_t v5; // 0x180196d70
    if (v5 < 24) {
        // 0x180196daa
        v4 = __asm_movss(__asm_movss_31(*(int32_t *)v3));
    } else {
        // 0x180196d98
        v4 = __asm_movss(__asm_movss_31(*v1));
    }
    // 0x180196dba
    int64_t v6; // 0x180196d70
    int32_t v7 = v6;
    int128_t v8 = __asm_movss_31(v7); // 0x180196dc4
    int64_t v9; // 0x180196d70
    int128_t v10 = *(int128_t *)&v9; // 0x180196dc8
    __asm_comiss(v8, v10);
    int64_t v11; // 0x180196d70
    if (v5 < 24) {
        // 0x180196ddd
        v11 = __asm_movss(__asm_movss_31((int32_t)v10));
    } else {
        // 0x180196dcd
        v11 = __asm_movss(__asm_movss_31(v7));
    }
    int64_t result = (int64_t)a1;
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x180196df5
    *(int32_t *)a1 = (int32_t)v12;
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x180196e04
    *(int32_t *)(result + 4) = (int32_t)v13;
    return result;
}

// Address range: 0x180196e20 - 0x180196f2b
int64_t function_180196e20(int64_t * a1, int64_t a2, int64_t a3, int32_t * a4) {
    int32_t * v1 = (int32_t *)(a3 + 4); // 0x180196e42
    int128_t v2 = __asm_movss_31(*v1); // 0x180196e42
    int64_t v3 = a2 + 4; // 0x180196e47
    __asm_comiss(v2, *(int128_t *)v3);
    int64_t v4; // 0x180196e20
    uint64_t v5; // 0x180196e20
    if (v5 < 25) {
        int32_t * v6 = (int32_t *)v3; // 0x180196e69
        __asm_comiss(__asm_movss_31(*v6), *(int128_t *)((int64_t)a4 + 4));
        v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v6))));
    } else {
        // 0x180196e4d
        v4 = __asm_movss(__asm_movss_31(*v1));
    }
    // 0x180196e9f
    int64_t v7; // 0x180196e20
    int32_t v8 = v7;
    int128_t v9 = __asm_movss_31(v8); // 0x180196ea9
    int64_t v10; // 0x180196e20
    int128_t v11 = *(int128_t *)&v10; // 0x180196ead
    __asm_comiss(v9, v11);
    int64_t v12; // 0x180196e20
    if (v5 < 25) {
        int32_t v13 = v11;
        int64_t v14; // 0x180196e20
        __asm_comiss(__asm_movss_31(v13), *(int128_t *)&v14);
        v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v13))));
    } else {
        // 0x180196eb2
        v12 = __asm_movss(__asm_movss_31(v8));
    }
    int64_t result = (int64_t)a1;
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x180196f0d
    *(int32_t *)a1 = (int32_t)v15;
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x180196f1c
    *(int32_t *)(result + 4) = (int32_t)v16;
    return result;
}

// Address range: 0x180196f40 - 0x180197034
int64_t function_180196f40(int64_t * a1, int64_t a2) {
    // 0x180196f40
    uint64_t v1; // 0x180196f40
    int64_t v2 = v1 - 56; // 0x180196f4a
    char v3 = llvm_ctpop_i8((char)v2); // 0x180196f4a
    int32_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 4))); // 0x180196f58
    __asm_comiss(__asm_movss_31(v4), g30);
    bool v5; // 0x180196f40
    int32_t v6; // 0x180196f40
    bool v7; // 0x180196f40
    if (v1 >= 56) {
        goto lab_0x180196f89;
    } else {
        // 0x180196f6b
        __asm_ucomiss(__asm_cvtsi2ss(__asm_cvttss2si_39(v4)), v4);
        if ((v3 & 1) == 0 || v2 != 0) {
            int32_t v8 = __asm_cvttss2si_39(v4) - 1; // 0x180196f81
            v5 = (llvm_ctpop_i8((char)v8) & 1) == 0;
            v7 = v8 == 0;
            v6 = v8;
            goto lab_0x180196f92;
        } else {
            goto lab_0x180196f89;
        }
    }
  lab_0x180196f89:
    // 0x180196f89
    v5 = (v3 & 1) == 0;
    v7 = v2 == 0;
    v6 = __asm_cvttss2si_39(v4);
    goto lab_0x180196f92;
  lab_0x180196f92:;
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v6)))); // 0x180196fa4
    int64_t v10; // 0x180196f40
    int32_t v11 = __asm_movss(__asm_movss_31((int32_t)v10)); // 0x180196fb3
    __asm_comiss(__asm_movss_31(v11), g30);
    int32_t v12; // 0x180196f40
    if (v1 >= 56) {
        // 0x180196fe9
        v12 = __asm_cvttss2si_39(v11);
        goto lab_0x180196ff3;
    } else {
        // 0x180196fc8
        __asm_ucomiss(__asm_cvtsi2ss(__asm_cvttss2si_39(v11)), v11);
        if (v5 || !v7) {
            // 0x180196fdb
            v12 = __asm_cvttss2si_39(v11) - 1;
            goto lab_0x180196ff3;
        } else {
            // 0x180196fe9
            v12 = __asm_cvttss2si_39(v11);
            goto lab_0x180196ff3;
        }
    }
  lab_0x180196ff3:;
    int64_t result = (int64_t)a1;
    int64_t v13 = __asm_movss(__asm_cvtsi2ss(v12)); // 0x180196ff9
    int64_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v13)))); // 0x180197016
    *(int32_t *)a1 = (int32_t)v14;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v9));
    return result;
}

// Address range: 0x180197040 - 0x1801971ff
int64_t function_180197040(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint32_t a7) {
    int64_t v1 = a2; // bp-24, 0x180197066
    int128_t v2; // 0x180197040
    int128_t v3 = __asm_xorps(v2, v2); // 0x180197073
    *(int32_t *)result = (int32_t)__asm_movss(v3);
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_xorps(v3, v3));
    int64_t v4 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x180197092
    int128_t v5 = __asm_cvtsi2ss(a7); // 0x180197098
    int64_t v6 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(*(int32_t *)&g40), v5))); // 0x1801970b0
    if (a7 == 0) {
        // 0x1801971ef
        return result;
    }
    int32_t v7 = 1; // 0x1801970c4
    int32_t v8 = v4; // 0x180197040
    int64_t v9 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v6), __asm_cvtsi2ss(v7)))); // 0x1801970ee
    int64_t v10; // bp-32, 0x180197040
    function_180230390(&v10, a2, a3, a4, a5, 0x100000000 * v9 / 0x100000000);
    int32_t v11; // bp-40, 0x180197040
    function_180197350((int64_t *)&v11, &v1, &v10, a6);
    int32_t v12; // 0x180197040
    int64_t v13 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a6 + 4)), v12)); // 0x180197153
    int128_t v14 = __asm_subss(__asm_movss_31(*(int32_t *)a6), v11); // 0x180197165
    int32_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14))); // 0x180197177
    int32_t v16 = __asm_movss(__asm_movss_31((int32_t)v13)); // 0x180197183
    int128_t v17 = __asm_addss_34(__asm_mulss(__asm_movss_31(v15), v15), __asm_mulss(__asm_movss_31(v16), v16)); // 0x1801971a1
    int32_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17))); // 0x1801971b1
    __asm_comiss(__asm_movss_31(v8), (int128_t)v18);
    if (v7 > a7) {
        // 0x1801971c4
        *(int64_t *)result = (int64_t)v11;
        v8 = __asm_movss(__asm_movss_31(v18));
    }
    // 0x1801971e0
    v1 = v10;
    v7++;
    while ((int64_t)v7 <= (int64_t)a7) {
        // 0x1801970db
        v9 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v6), __asm_cvtsi2ss(v7))));
        function_180230390(&v10, a2, a3, a4, a5, 0x100000000 * v9 / 0x100000000);
        function_180197350((int64_t *)&v11, &v1, &v10, a6);
        v13 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a6 + 4)), v12));
        v14 = __asm_subss(__asm_movss_31(*(int32_t *)a6), v11);
        v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14)));
        v16 = __asm_movss(__asm_movss_31((int32_t)v13));
        v17 = __asm_addss_34(__asm_mulss(__asm_movss_31(v15), v15), __asm_mulss(__asm_movss_31(v16), v16));
        v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17)));
        __asm_comiss(__asm_movss_31(v8), (int128_t)v18);
        if (v7 > a7) {
            // 0x1801971c4
            *(int64_t *)result = (int64_t)v11;
            v8 = __asm_movss(__asm_movss_31(v18));
        }
        // 0x1801971e0
        v1 = v10;
        v7++;
    }
    // 0x1801971ef
    return result;
}

// Address range: 0x180197210 - 0x180197342
int64_t function_180197210(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    int64_t v1 = a2; // bp-16, 0x180197236
    int128_t v2; // 0x180197210
    int128_t v3 = __asm_xorps(v2, v2); // 0x180197243
    *(int32_t *)result = (int32_t)__asm_movss(v3);
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_xorps(v3, v3));
    int32_t v4 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-24, 0x180197262
    __asm_movss(__asm_movss_31(a7));
    __asm_movss(__asm_movss_31(*(int32_t *)(a5 + 4)));
    __asm_movss(__asm_movss_31(*(int32_t *)a5));
    __asm_movss(__asm_movss_31(*(int32_t *)(a4 + 4)));
    int64_t v5; // 0x180197210
    __asm_movss(__asm_movss_31(*(int32_t *)&v5));
    __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4)));
    int64_t v6; // 0x180197210
    __asm_movss(__asm_movss_31(*(int32_t *)&v6));
    __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 4)));
    int64_t v7; // 0x180197210
    int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)&v7)); // 0x18019730d
    function_1801bf690(a6, result, &v1, &v4, 0x100000000 * v8 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
    return result;
}

// Address range: 0x180197350 - 0x180197591
int64_t function_180197350(int64_t * a1, int64_t * a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    int128_t v3 = __asm_movss_31(*(int32_t *)(a4 + 4)); // 0x18019737b
    int32_t * v4 = (int32_t *)(v2 + 4); // 0x180197380
    int64_t v5 = __asm_movss(__asm_subss(v3, *v4)); // 0x180197385
    int64_t v6; // 0x180197350
    int128_t v7 = __asm_movss_31((int32_t)v6); // 0x18019739b
    int32_t v8 = v2;
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v7, v8)))); // 0x1801973af
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x1801973bb
    int64_t v11 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v1 + 4)), *v4)); // 0x1801973db
    int128_t v12 = __asm_subss(__asm_movss_31((int32_t)v1), v8); // 0x1801973f5
    int32_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v12))); // 0x180197405
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x180197411
    int128_t v15 = __asm_mulss(__asm_movss_31((int32_t)v9), v13); // 0x18019741d
    int128_t v16 = __asm_addss_34(v15, __asm_mulss(__asm_movss_31((int32_t)v10), v14)); // 0x18019742f
    int64_t v17 = 0x100000000 * __asm_movss(v16) / 0x100000000; // 0x180197433
    __asm_comiss(__asm_xorps(v16, v16), (int128_t)v17);
    uint64_t v18; // 0x180197350
    if (v18 < 137) {
        int128_t v19 = __asm_addss_34(__asm_mulss(__asm_movss_31(v13), v13), __asm_mulss(__asm_movss_31(v14), v14)); // 0x18019747c
        int32_t v20 = __asm_movss(v19); // 0x180197480
        int32_t v21 = v17;
        __asm_comiss(__asm_movss_31(v21), (int128_t)v20);
        int64_t v22 = __asm_movss(__asm_mulss(__asm_movss_31(v14), v21)); // 0x1801974c0
        int64_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v13), v21)))); // 0x1801974dd
        int128_t v24 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v22))); // 0x1801974ef
        int64_t v25 = __asm_movss(__asm_divss_38(v24, v20)); // 0x1801974fb
        int64_t v26 = __asm_movss(__asm_divss_38(__asm_movss_31((int32_t)v23), v20)); // 0x18019750d
        int64_t v27 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x180197519
        int64_t v28 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x180197525
        int64_t v29 = __asm_movss(__asm_addss(__asm_movss_31(*v4), (int32_t)v28)); // 0x18019753e
        int64_t v30 = __asm_movss(__asm_addss(__asm_movss_31(v8), (int32_t)v27)); // 0x180197556
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v30));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v29));
    } else {
        // 0x180197441
        *a1 = v2;
    }
    // 0x180197589
    return result;
}

// Address range: 0x1801975a0 - 0x18019775e
int64_t function_1801975a0(int32_t * a1, int32_t * a2, int32_t * a3, int32_t * a4, int64_t a5) {
    // 0x1801975a0
    int64_t v1; // 0x1801975a0
    int32_t v2 = v1;
    int64_t v3; // 0x1801975a0
    int32_t v4 = v3;
    int128_t v5 = __asm_subss(__asm_movss_31(v2), v4); // 0x1801975c6
    int32_t * v6 = (int32_t *)((int64_t)a1 + 4); // 0x1801975d4
    int128_t v7 = __asm_movss_31(*v6); // 0x1801975d4
    int32_t * v8 = (int32_t *)((int64_t)a2 + 4); // 0x1801975d9
    int128_t v9 = __asm_mulss_35(v5, __asm_subss(v7, *v8)); // 0x1801975de
    int32_t * v10 = (int32_t *)((int64_t)a4 + 4); // 0x1801975ec
    int128_t v11 = __asm_subss(__asm_movss_31(*v10), *v8); // 0x1801975f1
    int64_t v12; // 0x1801975a0
    int32_t v13 = v12;
    int128_t v14 = __asm_mulss_35(v11, __asm_subss(__asm_movss_31(v13), v4)); // 0x180197608
    __asm_comiss(__asm_xorps(v14, v14), __asm_subss_36(v9, v14));
    int64_t v15; // 0x1801975a0
    int32_t v16 = v15;
    int128_t v17 = __asm_subss(__asm_movss_31(v2), v16); // 0x180197641
    int128_t v18 = __asm_movss_31(*v8); // 0x18019764f
    int32_t * v19 = (int32_t *)((int64_t)a3 + 4); // 0x180197654
    int128_t v20 = __asm_mulss_35(v17, __asm_subss(v18, *v19)); // 0x180197659
    int128_t v21 = __asm_mulss_35(__asm_subss(__asm_movss_31(*v10), *v19), __asm_subss(__asm_movss_31(v4), v16)); // 0x180197683
    __asm_comiss(__asm_xorps(v21, v21), __asm_subss_36(v20, v21));
    int128_t v22 = __asm_mulss_35(__asm_subss(__asm_movss_31(v2), v13), __asm_subss(__asm_movss_31(*v19), *v6)); // 0x1801976d3
    int128_t v23 = __asm_mulss_35(__asm_subss(__asm_movss_31(*v10), *v6), __asm_subss(__asm_movss_31(v16), v13)); // 0x1801976fd
    __asm_comiss(__asm_xorps(v23, v23), __asm_subss_36(v22, v23));
    return 1;
}

// Address range: 0x180197770 - 0x180197a8f
int64_t function_180197770(int64_t * a1, int32_t * a2, int32_t * a3, int32_t * a4, int32_t * a5) {
    int64_t v1 = (int64_t)a5;
    uint64_t v2; // 0x180197770
    int64_t v3 = v2 - 200; // 0x180197784
    int32_t v4; // bp-32, 0x180197770
    function_180197350((int64_t *)&v4, (int64_t *)a2, (int64_t *)a3, v1);
    int32_t v5; // bp-24, 0x180197770
    function_180197350((int64_t *)&v5, (int64_t *)a3, (int64_t *)a4, v1);
    int32_t v6; // bp-16, 0x180197770
    function_180197350((int64_t *)&v6, (int64_t *)a4, (int64_t *)a2, v1);
    int32_t * v7 = (int32_t *)(v1 + 4); // 0x180197803
    int32_t v8; // 0x180197770
    int64_t v9 = __asm_movss(__asm_subss(__asm_movss_31(*v7), v8)); // 0x180197811
    int128_t v10 = __asm_subss(__asm_movss_31(*a5), v4); // 0x180197823
    int32_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v10))); // 0x180197838
    int32_t v12 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x180197844
    int128_t v13 = __asm_mulss(__asm_movss_31(v11), v11); // 0x180197850
    int64_t v14 = __asm_movss(__asm_addss_34(v13, __asm_mulss(__asm_movss_31(v12), v12))); // 0x180197866
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v14)); // 0x180197872
    int32_t v16; // 0x180197770
    int64_t v17 = __asm_movss(__asm_subss(__asm_movss_31(*v7), v16)); // 0x18019788e
    int128_t v18 = __asm_subss(__asm_movss_31(*a5), v5); // 0x1801978a0
    int32_t v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v18))); // 0x1801978b5
    int32_t v20 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x1801978c1
    int128_t v21 = __asm_addss_34(__asm_mulss(__asm_movss_31(v19), v19), __asm_mulss(__asm_movss_31(v20), v20)); // 0x1801978df
    int32_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21))); // 0x1801978f5
    int32_t v23; // 0x180197770
    int64_t v24 = __asm_movss(__asm_subss(__asm_movss_31(*v7), v23)); // 0x180197911
    int128_t v25 = __asm_subss(__asm_movss_31(*a5), v6); // 0x180197926
    int32_t v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v25))); // 0x180197941
    int32_t v27 = __asm_movss(__asm_movss_31((int32_t)v24)); // 0x180197950
    int128_t v28 = __asm_addss_34(__asm_mulss(__asm_movss_31(v26), v26), __asm_mulss(__asm_movss_31(v27), v27)); // 0x18019796e
    int32_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v28))); // 0x180197984
    __asm_comiss(__asm_movss_31(v29), (int128_t)v22);
    bool v30 = v2 < 200 | v3 == 0; // 0x180197995
    int64_t v31; // 0x180197770
    if (v30) {
        // 0x1801979a5
        v31 = __asm_movss(__asm_movss_31(v29));
    } else {
        // 0x180197997
        v31 = __asm_movss(__asm_movss_31(v22));
    }
    int32_t v32 = v15; // 0x180197872
    int128_t v33 = __asm_movss_31((int32_t)v31); // 0x1801979b1
    int32_t v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v33))); // 0x1801979c9
    __asm_comiss(__asm_movss_31(v34), (int128_t)v32);
    int64_t v35; // 0x180197770
    if (v30) {
        // 0x1801979ea
        v35 = __asm_movss(__asm_movss_31(v34));
    } else {
        // 0x1801979dc
        v35 = __asm_movss(__asm_movss_31(v32));
    }
    char v36 = llvm_ctpop_i8((char)v3); // 0x180197784
    int128_t v37 = __asm_movss_31((int32_t)v35); // 0x1801979f6
    int32_t v38 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v37))); // 0x180197a0e
    __asm_ucomiss(__asm_movss_31(v38), v32);
    int32_t * v39 = &v4; // 0x180197a1f
    if (v3 != 0 || (v36 & 1) == 0) {
        // 0x180197a6c
        __asm_ucomiss(__asm_movss_31(v38), v22);
        v39 = &v6;
    }
    // 0x180197a87
    *a1 = (int64_t)*v39;
    return (int64_t)a1;
}

// Address range: 0x180197aa0 - 0x180197c42
int64_t function_180197aa0(int32_t * a1, int32_t * a2, int32_t * a3, int32_t * a4, int64_t * a5, int64_t * a6, int64_t * a7) {
    int128_t v1 = __asm_movss_31(*(int32_t *)((int64_t)a2 + 4)); // 0x180197ac2
    int32_t * v2 = (int32_t *)((int64_t)a1 + 4); // 0x180197ac7
    int64_t v3 = __asm_movss(__asm_subss(v1, *v2)); // 0x180197acc
    int64_t v4; // 0x180197aa0
    int32_t v5 = v4;
    int64_t v6; // 0x180197aa0
    int128_t v7 = __asm_subss(__asm_movss_31((int32_t)v6), v5); // 0x180197ae0
    int32_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v7))); // 0x180197af0
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)v3)); // 0x180197afc
    int64_t v10 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)((int64_t)a3 + 4)), *v2)); // 0x180197b16
    int64_t v11; // 0x180197aa0
    int128_t v12 = __asm_subss(__asm_movss_31((int32_t)v11), v5); // 0x180197b2a
    int32_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v12))); // 0x180197b3a
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)v10)); // 0x180197b46
    int64_t v15 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)((int64_t)a4 + 4)), *v2)); // 0x180197b60
    int64_t v16; // 0x180197aa0
    int128_t v17 = __asm_subss(__asm_movss_31((int32_t)v16), v5); // 0x180197b74
    int32_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17))); // 0x180197b84
    int32_t v19 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x180197b90
    int128_t v20 = __asm_subss_36(__asm_mulss(__asm_movss_31(v8), v14), __asm_mulss(__asm_movss_31(v13), v9)); // 0x180197bae
    int32_t v21 = __asm_movss(v20); // 0x180197bb2
    int128_t v22 = __asm_subss_36(__asm_mulss(__asm_movss_31(v18), v14), __asm_mulss(__asm_movss_31(v13), v19)); // 0x180197bcf
    *(int32_t *)a6 = (int32_t)__asm_movss(__asm_divss_38(v22, v21));
    int128_t v23 = __asm_subss_36(__asm_mulss(__asm_movss_31(v8), v19), __asm_mulss(__asm_movss_31(v18), v9)); // 0x180197bfc
    *(int32_t *)a7 = (int32_t)__asm_movss(__asm_divss_38(v23, v21));
    int128_t v24 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), *(int32_t *)a6); // 0x180197c21
    *(int32_t *)a5 = (int32_t)__asm_movss(__asm_subss(v24, *(int32_t *)a7));
    return (int64_t)a5;
}

// Address range: 0x180197c50 - 0x180197db2
int64_t function_180197c50(int64_t a1, int64_t a2, int32_t a3, int32_t result, int32_t a5) {
    // 0x180197c50
    if (a3 == result) {
        // 0x180197dad
        return result;
    }
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x180197c82
    int32_t v2 = *v1; // 0x180197c82
    if (v2 == 0) {
        // 0x180197ca2
        function_1801cec90(a1, v1);
        goto lab_0x180197cc3;
    } else {
        // 0x180197c88
        if (*(char *)((int64_t)(v2 - 1) + a2) != 10) {
            goto lab_0x180197cc3;
        } else {
            // 0x180197ca2
            function_1801cec90(a1, v1);
            goto lab_0x180197cc3;
        }
    }
  lab_0x180197cc3:;
    uint64_t v3 = (int64_t)result + a2; // 0x180197cd0
    int64_t v4 = (int64_t)a3 + a2; // 0x180197ce8
    int64_t v5 = function_18029e000(v4, 10, v3 - v4); // 0x180197d10
    if (v5 != 0) {
        uint64_t v6 = v5 + 1; // 0x180197d27
        int32_t v7; // bp-60, 0x180197c50
        if (v3 > v6) {
            // 0x180197d3b
            v7 = v6 - a2;
            function_1801cec90(a1, &v7);
        }
        int64_t v8 = function_18029e000(v6, 10, v3 - v6); // 0x180197d10
        while (v8 != 0) {
            // 0x180197d22
            v6 = v8 + 1;
            if (v3 > v6) {
                // 0x180197d3b
                v7 = v6 - a2;
                function_1801cec90(a1, &v7);
            }
            // 0x180197d69
            v8 = function_18029e000(v6, 10, v3 - v6);
        }
    }
    int32_t v9 = *v1; // 0x180197d70
    int32_t result2 = (int64_t)v9 < (int64_t)result ? result : v9;
    *v1 = result2;
    // 0x180197dad
    return result2;
}

// Address range: 0x180197dc0 - 0x180197e70
int64_t function_180197dc0(int64_t result, int64_t a2, uint32_t a3) {
    int64_t v1 = a2 - result; // 0x180197de7
    if (v1 < 16) {
        // 0x180197e66
        return result;
    }
    uint64_t v2 = v1 / 16;
    int64_t v3 = v2 / 2; // 0x180197e00
    int64_t v4 = 16 * v3 + result; // 0x180197e13
    int64_t v5 = result; // 0x180197e29
    int64_t v6 = v3; // 0x180197e29
    if (*(int32_t *)v4 < a3) {
        // 0x180197e2b
        v5 = v4 + 16;
        v6 = v2 + -1 - v3;
    }
    int64_t result2 = v5;
    while (v6 != 0) {
        // 0x180197dfc
        v2 = v6;
        v3 = v2 / 2;
        v4 = 16 * v3 + result2;
        v5 = result2;
        v6 = v3;
        if (*(int32_t *)v4 < a3) {
            // 0x180197e2b
            v5 = v4 + 16;
            v6 = v2 + -1 - v3;
        }
        // 0x180197e64
        result2 = v5;
    }
    // 0x180197e66
    return result2;
}

// Address range: 0x180197e80 - 0x180197f60
int64_t function_180197e80(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    *(int16_t *)a1 = *(int16_t *)(*(int64_t *)(a2 + 0x4078) + 264);
    *(int16_t *)(result + 2) = *(int16_t *)(a2 + 0x4b08);
    *(int16_t *)(result + 4) = *(int16_t *)(a2 + 0x4b18);
    *(int16_t *)(result + 6) = *(int16_t *)(a2 + 0x4b28);
    *(int16_t *)(result + 8) = *(int16_t *)(a2 + 0x4b38);
    *(int16_t *)(result + 10) = *(int16_t *)(a2 + 0x4b58);
    *(int16_t *)(result + 12) = *(int16_t *)(a2 + 0x4b48);
    *(int16_t *)(result + 14) = *(int16_t *)(a2 + 0x4b78);
    *(int16_t *)(result + 16) = *(int16_t *)(a2 + 0x5fe4);
    return result;
}

// Address range: 0x180197f70 - 0x180197f9c
int64_t function_180197f70(int64_t a1, int64_t a2) {
    // 0x180197f70
    return *(int64_t *)(a2 + 0x4078);
}

// Address range: 0x180197fb0 - 0x180198bd0
int64_t function_180197fb0(int64_t result, int64_t a2, int64_t a3) {
    // 0x180197fb0
    int128_t v1; // 0x180197fb0
    int128_t v2 = __asm_xorps(v1, v1); // 0x180197fdc
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x180197fe8
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180198006
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x180198012
    *(int32_t *)(result + 52) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x180198030
    *(int32_t *)(result + 56) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x18019803c
    *(int32_t *)(result + 60) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x18019805a
    *(int32_t *)(result + 64) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x180198066
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x180198084
    *(int32_t *)(result + 72) = (int32_t)__asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x180198090
    *(int32_t *)(result + 76) = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x1801980b4
    *(int32_t *)(result + 80) = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x1801980c3
    *(int32_t *)(result + 84) = (int32_t)__asm_movss(v13);
    int128_t v14 = __asm_xorps(v13, v13); // 0x1801980e7
    *(int32_t *)(result + 88) = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x1801980f6
    *(int32_t *)(result + 92) = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x18019811c
    *(int32_t *)(result + 152) = (int32_t)__asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x18019812b
    *(int32_t *)(result + 156) = (int32_t)__asm_movss(v17);
    int128_t v18 = __asm_xorps(v17, v17); // 0x180198151
    *(int32_t *)(result + 160) = (int32_t)__asm_movss(v18);
    int128_t v19 = __asm_xorps(v18, v18); // 0x180198160
    *(int32_t *)(result + 164) = (int32_t)__asm_movss(v19);
    int64_t v20 = result + 168; // 0x180198170
    int128_t v21 = __asm_xorps(v19, v19); // 0x180198186
    *(int32_t *)v20 = (int32_t)__asm_movss(v21);
    int128_t v22 = __asm_xorps(v21, v21); // 0x180198195
    *(int32_t *)(result + 172) = (int32_t)__asm_movss(v22);
    int64_t v23 = result + 176; // 0x1801981a5
    int128_t v24 = __asm_xorps(v22, v22); // 0x1801981bb
    *(int32_t *)v23 = (int32_t)__asm_movss(v24);
    int128_t v25 = __asm_xorps(v24, v24); // 0x1801981ca
    *(int32_t *)(result + 180) = (int32_t)__asm_movss(v25);
    int128_t v26 = __asm_xorps(v25, v25); // 0x1801981f0
    *(int32_t *)(result + 184) = (int32_t)__asm_movss(v26);
    int128_t v27 = __asm_xorps(v26, v26); // 0x1801981ff
    *(int32_t *)(result + 188) = (int32_t)__asm_movss(v27);
    int128_t v28 = __asm_xorps(v27, v27); // 0x180198225
    *(int32_t *)(result + 192) = (int32_t)__asm_movss(v28);
    int128_t v29 = __asm_xorps(v28, v28); // 0x180198234
    *(int32_t *)(result + 196) = (int32_t)__asm_movss(v29);
    int64_t v30 = result + 244; // 0x180198244
    int128_t v31 = __asm_xorps(v29, v29); // 0x18019825a
    *(int32_t *)v30 = (int32_t)__asm_movss(v31);
    int128_t v32 = __asm_xorps(v31, v31); // 0x180198269
    *(int32_t *)(result + 248) = (int32_t)__asm_movss(v32);
    int64_t v33 = result + 252; // 0x180198279
    int128_t v34 = __asm_xorps(v32, v32); // 0x18019828f
    *(int32_t *)v33 = (int32_t)__asm_movss(v34);
    int128_t v35 = __asm_xorps(v34, v34); // 0x18019829e
    *(int32_t *)(result + 256) = (int32_t)__asm_movss(v35);
    int64_t v36 = result + 264; // 0x1801982ae
    *(int32_t *)(result + 268) = 0;
    *(int32_t *)v36 = 0;
    *(int64_t *)(result + 272) = 0;
    function_1801cab00(result + 280, a2);
    int128_t v37 = __asm_xorps(v35, v35); // 0x180198322
    *(int32_t *)(result + 512) = (int32_t)__asm_movss(v37);
    int128_t v38 = __asm_xorps(v37, v37); // 0x180198331
    *(int32_t *)(result + 516) = (int32_t)__asm_movss(v38);
    int128_t v39 = __asm_xorps(v38, v38); // 0x180198355
    *(int32_t *)(result + 520) = (int32_t)__asm_movss(v39);
    int128_t v40 = __asm_xorps(v39, v39); // 0x180198364
    *(int32_t *)(result + 524) = (int32_t)__asm_movss(v40);
    int128_t v41 = __asm_xorps(v40, v40); // 0x18019839a
    *(int32_t *)(result + 528) = (int32_t)__asm_movss(v41);
    int128_t v42 = __asm_xorps(v41, v41); // 0x1801983a9
    *(int32_t *)(result + 532) = (int32_t)__asm_movss(v42);
    int128_t v43 = __asm_xorps(v42, v42); // 0x1801983cd
    *(int32_t *)(result + 536) = (int32_t)__asm_movss(v43);
    int128_t v44 = __asm_xorps(v43, v43); // 0x1801983dc
    *(int32_t *)(result + 540) = (int32_t)__asm_movss(v44);
    int128_t v45 = __asm_xorps(v44, v44); // 0x180198412
    *(int32_t *)(result + 544) = (int32_t)__asm_movss(v45);
    int128_t v46 = __asm_xorps(v45, v45); // 0x180198421
    *(int32_t *)(result + 548) = (int32_t)__asm_movss(v46);
    int128_t v47 = __asm_xorps(v46, v46); // 0x180198445
    *(int32_t *)(result + 552) = (int32_t)__asm_movss(v47);
    int128_t v48 = __asm_xorps(v47, v47); // 0x180198454
    *(int32_t *)(result + 556) = (int32_t)__asm_movss(v48);
    int128_t v49 = __asm_xorps(v48, v48); // 0x18019848a
    *(int32_t *)(result + 560) = (int32_t)__asm_movss(v49);
    int128_t v50 = __asm_xorps(v49, v49); // 0x180198499
    *(int32_t *)(result + 564) = (int32_t)__asm_movss(v50);
    int128_t v51 = __asm_xorps(v50, v50); // 0x1801984bd
    *(int32_t *)(result + 568) = (int32_t)__asm_movss(v51);
    int128_t v52 = __asm_xorps(v51, v51); // 0x1801984cc
    *(int32_t *)(result + 572) = (int32_t)__asm_movss(v52);
    int128_t v53 = __asm_xorps(v52, v52); // 0x180198502
    *(int32_t *)(result + 576) = (int32_t)__asm_movss(v53);
    int128_t v54 = __asm_xorps(v53, v53); // 0x180198511
    *(int32_t *)(result + 580) = (int32_t)__asm_movss(v54);
    int128_t v55 = __asm_xorps(v54, v54); // 0x180198535
    *(int32_t *)(result + 584) = (int32_t)__asm_movss(v55);
    int128_t v56 = __asm_xorps(v55, v55); // 0x180198544
    *(int32_t *)(result + 588) = (int32_t)__asm_movss(v56);
    int128_t v57 = __asm_xorps(v56, v56); // 0x18019857a
    *(int32_t *)(result + 592) = (int32_t)__asm_movss(v57);
    int128_t v58 = __asm_xorps(v57, v57); // 0x180198589
    *(int32_t *)(result + 596) = (int32_t)__asm_movss(v58);
    int128_t v59 = __asm_xorps(v58, v58); // 0x1801985ad
    *(int32_t *)(result + 600) = (int32_t)__asm_movss(v59);
    int128_t v60 = __asm_xorps(v59, v59); // 0x1801985bc
    *(int32_t *)(result + 604) = (int32_t)__asm_movss(v60);
    int128_t v61 = __asm_xorps(v60, v60); // 0x1801985f2
    *(int32_t *)(result + 608) = (int32_t)__asm_movss(v61);
    int128_t v62 = __asm_xorps(v61, v61); // 0x180198601
    *(int32_t *)(result + 612) = (int32_t)__asm_movss(v62);
    int128_t v63 = __asm_xorps(v62, v62); // 0x180198625
    *(int32_t *)(result + 616) = (int32_t)__asm_movss(v63);
    *(int32_t *)(result + 620) = (int32_t)__asm_movss(__asm_xorps(v63, v63));
    *(int16_t *)(result + 624) = 0;
    *(int16_t *)(result + 626) = 0;
    *(int16_t *)(result + 628) = 0;
    *(int16_t *)(result + 630) = 0;
    *(int32_t *)(result + 652) = 0;
    *(int32_t *)(result + 648) = 0;
    *(int64_t *)(result + 656) = 0;
    *(int32_t *)(result + 668) = 0;
    *(int32_t *)(result + 664) = 0;
    *(int64_t *)(result + 672) = 0;
    int64_t v64 = result + 696; // 0x180198724
    function_1801c78b0(v64, 0);
    int64_t v65; // 0x180197fb0
    function_18029db80(result, 0, 1032, v65);
    *(int64_t *)result = a2;
    int64_t v66 = function_180195370(a3); // 0x18019884a
    int64_t * v67 = (int64_t *)(result + 8); // 0x180198857
    *v67 = v66;
    *(int32_t *)(result + 136) = (int32_t)function_18029e0a0(a3) + 1;
    int64_t v68 = function_180194e30((char *)a3, 0, 0); // 0x180198885
    int32_t * v69 = (int32_t *)(result + 16); // 0x180198892
    *v69 = (int32_t)v68;
    function_1801cec90(v36, v69);
    int64_t v70 = function_180198cc0(result, (int64_t)"#MOVE", 0); // 0x1801988d9
    *(int32_t *)(result + 140) = (int32_t)v70;
    int32_t v71 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-128, 0x1801988f4
    __asm_movss(__asm_movss_31(0x7f7fffff));
    *(int64_t *)v20 = *(int64_t *)&v71;
    int32_t v72 = *(int32_t *)&g38;
    int32_t v73 = __asm_movss(__asm_movss_31(v72)); // bp-120, 0x180198940
    __asm_movss(__asm_movss_31(v72));
    *(int64_t *)v23 = *(int64_t *)&v73;
    *(char *)(result + 227) = -1;
    *(char *)(result + 226) = -1;
    *(int32_t *)(result + 232) = -1;
    int32_t * v74 = (int32_t *)(result + 240); // 0x1801989bc
    *v74 = *v74 & -0x1000000;
    int32_t v75 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-112, 0x180198a1f
    __asm_movss(__asm_movss_31(0x7f7fffff));
    int64_t v76 = *(int64_t *)&v75; // 0x180198a51
    *(int64_t *)v33 = v76;
    *(int64_t *)v30 = v76;
    *(int32_t *)(result + 632) = -1;
    *(int32_t *)(result + 636) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    int64_t v77 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x180198abb
    *(int32_t *)(result + 680) = (int32_t)v77;
    *(int32_t *)(result + 684) = -1;
    int64_t * v78 = (int64_t *)(result + 688); // 0x180198aeb
    *v78 = v64;
    *(int64_t *)(result + 752) = result + 0x3da0;
    *(int64_t *)(*v78 + 192) = *v67;
    int32_t v79 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-104, 0x180198b40
    __asm_movss(__asm_movss_31(0x7f7fffff));
    int64_t v80 = *(int64_t *)&v79; // 0x180198b72
    *(int64_t *)(result + 1008) = v80;
    *(int64_t *)(result + 1000) = v80;
    return result;
}

// Address range: 0x180198be0 - 0x180198cb7
int64_t function_180198be0(int64_t a1) {
    // 0x180198be0
    function_1801c7520(*(int64_t *)(a1 + 8));
    function_1801cdfb0(a1 + 664);
    function_1801cb120(a1 + 696);
    int64_t v1 = *(int64_t *)(a1 + 672); // 0x180198c33
    if (v1 != 0) {
        // 0x180198c3a
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 656); // 0x180198c5e
    if (v2 != 0) {
        // 0x180198c65
        function_1801901c0(v2);
    }
    // 0x180198c74
    function_1801cc040(a1 + 280);
    int64_t v3 = *(int64_t *)(a1 + 272); // 0x180198c9c
    int64_t result = a1 + 264; // 0x180198ca1
    if (v3 != 0) {
        // 0x180198ca3
        result = function_1801901c0(v3);
    }
    // 0x180198cb2
    return result;
}

// Address range: 0x180198cc0 - 0x180198d93
int64_t function_180198cc0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 272); // 0x180198cf3
    int32_t v2 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(a1 + 264) - 1) + v1); // 0x180198d05
    int32_t v3 = a3 == 0 ? 0 : a3 - (int32_t)a2;
    int64_t v4 = function_180194e30((char *)a2, v3, v2); // 0x180198d4a
    int32_t v5 = v4; // 0x180198d4f
    if (*(int32_t *)(a2 + 0x40cc) == v5) {
        // 0x180198d71
        function_1801aaaa0(v5, 12, a2, (int64_t)a3, 0x100000000 * v4 / 0x100000000);
    }
    // 0x180198d8a
    return v4 & 0xffffffff;
}

// Address range: 0x180198da0 - 0x180198e3c
int64_t function_180198da0(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // bp+16, 0x180198da0
    int64_t v2 = *(int64_t *)(a1 + 272); // 0x180198dce
    int32_t v3 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(a1 + 264) - 1) + v2); // 0x180198de0
    int64_t v4 = function_180194d90(&v1, 8, v3); // 0x180198df5
    int32_t v5 = v4; // 0x180198dfa
    if (*(int32_t *)((int64_t)&v1 + 0x40cc) == v5) {
        // 0x180198e1c
        function_1801aaaa0(v5, 13, v1, 0, 0x100000000 * v4 / 0x100000000);
    }
    // 0x180198e33
    return v4 & 0xffffffff;
}

// Address range: 0x180198e50 - 0x180198eee
int64_t function_180198e50(int64_t a1, int32_t a2) {
    int32_t v1 = a2; // bp+16, 0x180198e50
    int64_t v2 = *(int64_t *)(a1 + 272); // 0x180198e7d
    int32_t v3 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(a1 + 264) - 1) + v2); // 0x180198e8f
    int64_t v4 = function_180194d90((int64_t *)&v1, 4, v3); // 0x180198ea4
    int32_t v5 = v4; // 0x180198ea9
    if (*(int32_t *)((int64_t)&v1 + 0x40cc) == v5) {
        // 0x180198ecb
        function_1801aaaa0(v5, 4, (int64_t)v1, 0, 0x100000000 * v4 / 0x100000000);
    }
    // 0x180198ee5
    return v4 & 0xffffffff;
}

// Address range: 0x180198f00 - 0x180198f7b
int64_t function_180198f00(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 272); // 0x180198f2e
    int32_t v2 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(a1 + 264) - 1) + v1); // 0x180198f40
    int64_t v3; // bp-32, 0x180198f00
    function_1801cda20(&v3, a1, a2);
    return function_180194d90(&v3, 16, v2) & 0xffffffff;
}

// Address range: 0x180198f90 - 0x180198fc7
int64_t function_180198f90(int32_t a1) {
    // 0x180198f90
    return function_180193e80((int64_t)g1201 + 0x4058, a1);
}

// Address range: 0x180198fd0 - 0x180198ffa
int64_t function_180198fd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180198fd0
    return function_180198f90((int32_t)function_180194e30((char *)a1, 0, 0));
}

// Address range: 0x180199000 - 0x18019913e
int64_t function_180199000(int64_t a1, int32_t a2, int64_t a3) {
    // 0x180199000
    *(int64_t *)(a1 + 896) = a3;
    int64_t * v1 = (int64_t *)(a1 + 936); // 0x180199029
    *v1 = a1;
    int64_t * v2 = (int64_t *)(a1 + 928); // 0x18019903a
    *v2 = a1;
    int64_t * v3 = (int64_t *)(a1 + 920); // 0x18019904b
    *v3 = a1;
    int64_t * v4 = (int64_t *)(a1 + 912); // 0x18019905c
    *v4 = a1;
    if (a3 != 0 && (a2 & 0x1000000) != 0) {
        if ((a2 & 0x2000000) == 0) {
            // 0x180199085
            *v4 = *(int64_t *)(a3 + 912);
        }
    }
    if (a3 != 0 && (a2 & 0x4000000) != 0) {
        // 0x1801990b2
        *v3 = *(int64_t *)(a3 + 920);
    }
    if (a3 != 0) {
        if ((a2 & 0x5000000) != 0 && (a2 & 0x8000000) == 0) {
            // 0x1801990ec
            *v2 = *(int64_t *)(a3 + 928);
        }
    }
    int64_t v5 = *v1; // 0x180199109
    if ((*(int32_t *)(v5 + 24) & 256) == 0) {
        // 0x18019913d
        return 0;
    }
    int64_t v6 = v5; // 0x18019911a
    v6 += 896;
    *v1 = v6;
    while ((*(int32_t *)(v6 + 24) & 256) != 0) {
        // 0x18019911c
        v6 += 896;
        *v1 = v6;
    }
    // 0x18019913d
    return 0;
}

// Address range: 0x180199150 - 0x18019926a
int64_t function_180199150(int64_t result5) {
    // 0x180199150
    int32_t * v1; // bp-24, 0x180199150
    *(int64_t *)&v1 = (int64_t)g1201;
    char * v2 = (char *)(result5 + 208); // 0x180199169
    *v2 = 0;
    int64_t v3 = (int64_t)v1;
    uint32_t result = *(int32_t *)(v3 + 0x4a90) & 512; // 0x18019917a
    if (result == 0) {
        // 0x180199265
        return result;
    }
    int32_t v4 = *(int32_t *)(v3 + 0x4afc); // 0x18019918c
    if ((v4 & 1) == 0) {
        // 0x180199265
        return 0;
    }
    unsigned char result2 = *(char *)(result5 + 209); // 0x1801991a2
    if (result2 != 0) {
        // 0x180199265
        return result2;
    }
    unsigned char result3 = *(char *)(result5 + 210); // 0x1801991b7
    if (result3 != 0) {
        // 0x180199265
        return result3;
    }
    if ((v4 & 2) != 0) {
        int64_t v5 = *(int64_t *)(v3 + 0x4080); // 0x1801991dc
        if (v5 != 0) {
            int64_t result4 = *(int64_t *)(v5 + 912); // 0x1801991f6
            if (*(int64_t *)(result5 + 912) == result4) {
                // 0x180199265
                return result4;
            }
        }
    }
    if ((v4 & 4) == 0) {
        // 0x180199249
        *(int64_t *)(result5 + 688) = 0;
        *v2 = 1;
        // 0x180199265
        return result5;
    }
    int64_t v6 = *(int64_t *)(v3 + 0x4ba8); // 0x18019921d
    if (v6 == 0) {
        // 0x180199249
        *(int64_t *)(result5 + 688) = 0;
        *v2 = 1;
        // 0x180199265
        return result5;
    }
    int64_t result6 = *(int64_t *)(v6 + 912); // 0x180199237
    if (*(int64_t *)(result5 + 912) == result6) {
        // 0x180199265
        return result6;
    }
    // 0x180199249
    *(int64_t *)(result5 + 688) = 0;
    *v2 = 1;
    // 0x180199265
    return result5;
}

// Address range: 0x180199270 - 0x1801992e8
int64_t function_180199270(int64_t * a1, int64_t a2) {
    // 0x180199270
    int128_t v1; // 0x180199270
    int128_t v2 = __asm_xorps(v1, v1); // 0x18019927e
    int32_t v3 = __asm_movss(v2); // bp-32, 0x180199281
    int128_t v4 = __asm_xorps(v2, v2); // 0x180199287
    __asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x180199290
    int32_t v6 = __asm_movss(v5); // bp-40, 0x180199293
    __asm_movss(__asm_xorps(v5, v5));
    int64_t v7 = &v6; // 0x1801992a2
    function_1801c2c60(a2, (int64_t)&v3, v7);
    int64_t v8; // bp-24, 0x180199270
    function_1801c2f40(&v8, a2, v7);
    function_1801c2960(a1, a2, (int64_t)&v8);
    return (int64_t)a1;
}

// Address range: 0x1801992f0 - 0x180199369
int64_t function_1801992f0(int64_t a1, int64_t a2, char a3) {
    int64_t v1 = function_1801c4460(a1, a3); // 0x18019930d
    if (v1 == a2) {
        // 0x180199364
        return a2 & -256 | 1;
    }
    // 0x180199327
    if (a1 == 0) {
        // 0x180199364
        return a2 & -256;
    }
    int64_t v2 = 0x100000000000000 * v1 / 0x100000000000000;
    int64_t v3 = a1; // 0x180199354
    int64_t result; // 0x1801992f0
    while (v3 != a2) {
        if (v3 == v2) {
            // 0x18019934b
            result = v2 & -256;
            return result;
        }
        // 0x18019934f
        v3 += 896;
        if (v3 == 0) {
            // 0x180199364
            return 0;
        }
    }
    // 0x18019933b
    result = a2 & -256 | 1;
  lab_0x180199364:
    // 0x180199364
    return result;
}

// Address range: 0x180199370 - 0x1801993bf
int64_t function_180199370(int64_t a1, int64_t a2) {
    // 0x180199370
    if (*(int64_t *)(a1 + 912) == a2) {
        // 0x1801993be
        return a1 & -256 | 1;
    }
    // 0x180199391
    if (a1 == 0) {
        // 0x1801993be
        return 0;
    }
    int64_t v1 = a1; // 0x180199397
    while (v1 != a2) {
        // 0x1801993a9
        v1 += 904;
        if (v1 == 0) {
            // 0x1801993be
            return 0;
        }
    }
    // 0x1801993be
    return a2 & -256 | 1;
}

// Address range: 0x1801993d0 - 0x1801994f1
int64_t function_1801993d0(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 20); // 0x1801993ef
    int32_t v2 = *(int32_t *)(a2 + 20); // 0x18019941a
    int32_t v3 = (int32_t)((v1 & 0x2000000) != 0) - (int32_t)((v2 & 0x2000000) != 0); // 0x180199448
    if (v3 != 0) {
        // 0x1801994ec
        return v3 > 0;
    }
    int64_t v4 = (int64_t)g1201;
    int32_t v5 = *(int32_t *)(v4 + 0x4018); // 0x180199485
    v5--;
    int64_t result; // 0x1801993d0
    while (v5 >= 0) {
        int64_t v6 = *(int64_t *)(*(int64_t *)(v4 + 0x4020) + 8 * (int64_t)v5); // 0x1801994c0
        if (v6 == a1) {
            // 0x1801994d4
            result = a1 & -256 | 1;
            return result;
        }
        // 0x1801994d8
        if (v6 == a2) {
            // 0x1801994e4
            result = a2 & -256;
            return result;
        }
        v5--;
    }
    // 0x1801994ea
    result = v5 & -256;
  lab_0x1801994ec:
    // 0x1801994ec
    return result;
}

// Address range: 0x180199500 - 0x180199556
int64_t function_180199500(int64_t a1) {
    // 0x180199500
    if (*(char *)(a1 + 203) == 0 || *(int64_t *)(a1 + 912) != a1) {
        // 0x18019954d
        return 0;
    }
    // 0x18019952c
    if ((*(int32_t *)(a1 + 20) & 0x20000) == 0) {
        // 0x18019954d
        return 1;
    }
    // 0x18019954d
    return 0;
}

// Address range: 0x180199560 - 0x18019983d
int64_t function_180199560(int64_t a1, int64_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 240);
    int32_t v2 = *v1;
    if (a3 != 0) {
        uint32_t result = 0x1000000 * v2 / 0x1000000 & a3; // 0x180199594
        if (result == 0) {
            // 0x180199835
            return result;
        }
    }
    // 0x1801995a4
    *v1 = v2 & -15;
    int32_t v3 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-48, 0x1801995ee
    __asm_movss(__asm_movss_31(0x7f7fffff));
    *(int64_t *)(a1 + 244) = *(int64_t *)&v3;
    int64_t v4 = a1 + 40; // 0x180199631
    int64_t * v5 = (int64_t *)v4; // 0x180199631
    int64_t v6 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(a2 + 4)))); // 0x18019964e
    int64_t v7; // 0x180199560
    int32_t v8 = __asm_cvttss2si_39(*(int32_t *)&v7); // 0x18019965c
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v8)))); // 0x180199670
    __asm_movss(__asm_movss_31((int32_t)v6));
    *v5 = 0x100000000 * v9 / 0x100000000;
    char v10 = llvm_ctpop_i8((char)v4); // 0x18019969b
    int32_t v11; // 0x180199560
    int64_t v12 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 44)), v11)); // 0x1801996b7
    int128_t v13 = __asm_subss(__asm_movss_31(*(int32_t *)v4), (int32_t)*v5); // 0x1801996c6
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // 0x1801996db
    int32_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801996e7
    int128_t v16 = __asm_movss_31(v14); // 0x1801996ed
    int32_t v17 = *(int32_t *)&g30; // 0x1801996f3
    __asm_ucomiss(v16, v17);
    int64_t result2; // 0x180199560
    if (v4 != 0 || (v10 & 1) == 0) {
        // 0x180199714
        function_18019d280(a1);
        int32_t * v18 = (int32_t *)(a1 + 280); // 0x180199739
        *v18 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v18), v14));
        int32_t * v19 = (int32_t *)(a1 + 284); // 0x180199751
        *v19 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v19), v15));
        int32_t * v20 = (int32_t *)(a1 + 304); // 0x18019977e
        *v20 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v20), v14));
        int32_t * v21 = (int32_t *)(a1 + 308); // 0x180199796
        *v21 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v21), v15));
        int32_t * v22 = (int32_t *)(a1 + 312); // 0x1801997c3
        *v22 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v22), v14));
        int32_t * v23 = (int32_t *)(a1 + 316); // 0x1801997db
        *v23 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v23), v15));
        int64_t v24 = a1 + 296; // 0x1801997f8
        int32_t * v25 = (int32_t *)v24; // 0x180199808
        *v25 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v25), v14));
        int32_t * v26 = (int32_t *)(a1 + 300); // 0x180199820
        *v26 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v26), v15));
        result2 = v24;
    } else {
        // 0x1801996fe
        __asm_ucomiss(__asm_movss_31(v15), v17);
        result2 = v4;
    }
    // 0x180199835
    return result2;
}

// Address range: 0x180199850 - 0x180199a2d
int64_t function_180199850(int64_t a1, int64_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 240);
    int32_t v2 = *v1;
    if (a3 != 0) {
        uint32_t result = 0x10000 * v2 / 0x1000000 & a3; // 0x18019987b
        if (result == 0) {
            // 0x180199a28
            return result;
        }
    }
    // 0x180199888
    *v1 = v2 & -3585;
    int32_t * v3 = (int32_t *)(a1 + 20); // 0x1801998c9
    char * v4; // 0x180199850
    if ((*v3 & 0x1000000) == 0) {
        goto lab_0x180199923;
    } else {
        char * v5 = (char *)(a1 + 209);
        if (*v5 != 0) {
            goto lab_0x180199923;
        } else {
            // 0x1801998e5
            v4 = v5;
            if ((*(int32_t *)(a1 + 24) & 64) == 0) {
                goto lab_0x180199934;
            } else {
                goto lab_0x180199923;
            }
        }
    }
  lab_0x180199923:;
    // 0x180199923
    int128_t v6; // 0x180199850
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801998f9
    int64_t v8; // 0x180199850
    __asm_comiss(v7, *(int128_t *)&v8);
    *(char *)(a1 + 226) = 2;
    int128_t v9 = v7; // 0x180199932
    bool v10 = true; // 0x180199932
    bool v11 = true; // 0x180199932
    int128_t v12; // 0x180199850
    if ((*v3 & 0x1000000) == 0) {
        goto lab_0x180199953;
    } else {
        // 0x180199923
        v4 = (char *)(a1 + 209);
        v12 = v7;
        goto lab_0x180199934;
    }
  lab_0x180199953:;
    int128_t v13 = v9;
    int128_t v14 = __asm_xorps(v13, v13); // 0x180199958
    int128_t * v15 = (int128_t *)(a2 + 4);
    __asm_comiss(v14, *v15);
    *(char *)(a1 + 227) = 2;
    int128_t * v16 = v15; // 0x18019997d
    bool v17 = v10; // 0x18019997d
    bool v18 = v11; // 0x18019997d
    int128_t v19 = v14; // 0x18019997d
    goto lab_0x180199983;
  lab_0x180199983:;
    int128_t v20 = v19;
    int64_t v21 = a1 + 56; // 0x180199988
    int128_t v22 = __asm_xorps(v20, v20); // 0x180199996
    __asm_comiss(v22, *(int128_t *)&v8);
    char * v23 = (char *)(a1 + 228); // 0x1801999a3
    *v23 = 0;
    __asm_comiss(__asm_xorps(v22, v22), *v16);
    *v23 = 0;
    __asm_ucomiss(__asm_movss_31((int32_t)*(int64_t *)v21), *(int32_t *)v21);
    int64_t result2; // 0x180199850
    if (v17 || !v18) {
        // 0x180199a1d
        result2 = function_18019d280(a1);
    } else {
        // 0x180199a0a
        int32_t v24; // 0x180199850
        __asm_ucomiss(__asm_movss_31(v24), *(int32_t *)(a1 + 60));
        result2 = a1;
    }
    // 0x180199a28
    return result2;
  lab_0x180199934:;
    char v25 = *v4; // 0x180199939
    v9 = v12;
    v10 = (llvm_ctpop_i8(v25) & 1) == 0;
    v11 = false;
    if (v25 != 0) {
        goto lab_0x180199953;
    } else {
        // 0x180199944
        v9 = v12;
        v10 = false;
        v11 = false;
        if ((*(int32_t *)(a1 + 24) & 64) == 0) {
            // 0x180199944
            v16 = (int128_t *)(a2 + 4);
            v17 = true;
            v18 = true;
            v19 = v12;
            goto lab_0x180199983;
        } else {
            goto lab_0x180199953;
        }
    }
}

// Address range: 0x180199a40 - 0x180199abd
int64_t function_180199a40(int64_t result2, char a2, int32_t a3) {
    int32_t * v1 = (int32_t *)(result2 + 240);
    int32_t v2 = *v1;
    if (a3 != 0) {
        uint32_t result = 256 * v2 / 0x1000000 & a3; // 0x180199a66
        if (result == 0) {
            // 0x180199abc
            return result;
        }
    }
    // 0x180199a70
    *v1 = v2 & -0xe0001;
    *(char *)(result2 + 205) = a2;
    // 0x180199abc
    return result2;
}

// Address range: 0x180199ad0 - 0x180199ba9
int64_t function_180199ad0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180199ad0
    int64_t v1; // 0x180199ad0
    uint32_t v2 = __asm_cvttss2si_39((int32_t)v1); // 0x180199ae8
    __asm_cvttss2si_39(*(int32_t *)(a3 + 4));
    *(int32_t *)(a1 + 624) = (int32_t)(0x1000000000000 * (int64_t)v2 / 0x1000000000000);
    int128_t v3 = __asm_movss_31(*(int32_t *)(a2 + 4)); // 0x180199b32
    int64_t v4 = __asm_movss(__asm_subss(v3, *(int32_t *)(a1 + 44))); // 0x180199b3c
    int64_t v5; // 0x180199ad0
    int64_t v6 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)&v5), *(int32_t *)(a1 + 40))); // 0x180199b54
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x180199b60
    int64_t v8 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x180199b6c
    int16_t v9 = __asm_cvttss2si_39((int32_t)v7); // bp-68, 0x180199b78
    __asm_cvttss2si_39((int32_t)v8);
    uint32_t result = *(int32_t *)&v9; // 0x180199b97
    *(int32_t *)(a1 + 628) = result;
    return result;
}

// Address range: 0x180199bb0 - 0x180199bda
int64_t function_180199bb0(int64_t result) {
    // 0x180199bb0
    *(char *)(result + 207) = 1;
    *(char *)(result + 210) = 1;
    *(char *)(result + 236) = 1;
    return result;
}

// Address range: 0x180199be0 - 0x180199f2d
int64_t function_180199be0(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-88, 0x180199be0
    *(int64_t *)&v2 = v1;
    if ((a2 & 2) != 0) {
        // 0x180199c0b
        if (*(int64_t *)(v1 + 0x4ba8) != a1) {
            int64_t v3 = function_1801a1490(a1); // 0x180199c2d
            if (v3 != 0) {
                int64_t v4 = a1; // 0x180199c53
                if ((*(int32_t *)(v1 + 0x6184) & 2) != 0) {
                    int64_t v5 = *(int64_t *)(v3 + 8); // 0x180199c5a
                    char * v6 = "<NULL>"; // 0x180199c6c
                    if (a1 != 0) {
                        // 0x180199c6e
                        v6 = (char *)*(int64_t *)(a1 + 8);
                    }
                    // 0x180199c8d
                    int64_t v7; // 0x180199be0
                    function_18018fdd0("[focus] FocusWindow(\"%s\", UnlessBelowModal): prevented by \"%s\".\n", (int64_t)v6, v5, v7);
                    v4 = (int64_t)"[focus] FocusWindow(\"%s\", UnlessBelowModal): prevented by \"%s\".\n";
                }
                int64_t v8 = v4; // 0x180199cb3
                if (a1 != 0) {
                    // 0x180199cb5
                    v8 = v4;
                    if (*(int64_t *)(a1 + 912) == a1) {
                        // 0x180199cce
                        v8 = v4;
                        if ((*(int32_t *)(a1 + 20) & 0x2000) == 0) {
                            // 0x180199ce2
                            function_18019a5c0(a1, v3);
                            v8 = a1;
                        }
                    }
                }
                // 0x180199f28
                return function_1801a0e50(function_1801a1370(v8), 0);
            }
        }
    }
    int64_t v9 = a1; // 0x180199d16
    if (a1 != 0 && (a2 & 1) != 0) {
        // 0x180199d23
        v9 = function_1801b7040(a1);
    }
    int64_t v10 = a2;
    int64_t v11 = v10; // 0x180199d4c
    if (*(int64_t *)(v1 + 0x4ba8) != v9) {
        // 0x180199d52
        function_1801a3c30(v9);
        int32_t * v12 = g1201; // 0x180199be0
        int32_t v13 = 0; // 0x180199da3
        if (v9 != 0) {
            int32_t * v14 = g1201; // 0x180199d79
            if (*(char *)(v1 + 0x4c03) != 0) {
                // 0x180199d7b
                *(char *)(v1 + 0x4c01) = 1;
                v14 = v2;
            }
            // 0x180199d92
            v13 = *(int32_t *)(v9 + 960);
            v12 = v14;
        }
        // 0x180199db8
        *(int32_t *)((int64_t)v12 + 0x4bb0) = v13;
        *(int32_t *)((int64_t)v2 + 0x4bb8) = 0;
        int32_t v15 = 0; // 0x180199ddf
        if (v9 != 0) {
            // 0x180199de1
            v15 = *(int32_t *)(v9 + 1016);
        }
        // 0x180199dfd
        function_1801a3db0(v15, v10);
        *(char *)((int64_t)v2 + 0x4c00) = 0;
        *(int64_t *)((int64_t)v2 + 0x4bf8) = -1;
        function_1801a0e50(v9, 0);
        v11 = 0;
    }
    int64_t v16 = 0; // 0x180199e3b
    if (v9 != 0) {
        // 0x180199e71
        v16 = *(int64_t *)(v9 + 912);
    }
    int64_t v17 = (int64_t)v2; // 0x180199e9a
    int64_t result = v17; // 0x180199ea6
    if (*(int32_t *)(v17 + 0x40e4) != 0) {
        int64_t v18 = *(int64_t *)(v17 + 0x4108); // 0x180199ead
        result = v17;
        if (v18 != 0) {
            // 0x180199eb7
            result = v18;
            if (*(int64_t *)(v18 + 912) != v16) {
                unsigned char v19 = *(char *)(v17 + 0x40f2); // 0x180199ed6
                result = v19;
                if (v19 == 0) {
                    // 0x180199ee1
                    result = function_18019e9f0(v16, v11);
                }
            }
        }
    }
    // 0x180199ee7
    if (v9 == 0) {
        // 0x180199f28
        return result;
    }
    // 0x180199ef4
    function_18019a080(v16);
    uint32_t v20 = (*(int32_t *)(v9 + 20) | *(int32_t *)(v16 + 20)) & 0x2000; // 0x180199f14
    int64_t result2 = v20; // 0x180199f1b
    if (v20 == 0) {
        // 0x180199f1d
        result2 = function_18019a240(v16);
    }
    // 0x180199f28
    return result2;
}

// Address range: 0x180199f40 - 0x18019a06b
int64_t function_180199f40(int32_t a1, int32_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201; // 0x180199f58
    int32_t v2 = *(int32_t *)(v1 + 0x4028) - 1; // 0x180199f7b
    if (a1 != 0) {
        int64_t v3 = a1; // 0x180199f85
        int32_t v4 = -1; // 0x180199f94
        int64_t v5 = v3; // 0x180199f94
        if ((*(int32_t *)(v3 + 20) & 0x1000000) != 0) {
            int64_t v6 = 0x100000000 * *(int64_t *)(v3 + 896) / 0x100000000; // 0x180199f85
            int64_t v7 = v6; // 0x180199f94
            v4 = 0;
            v5 = v6;
            while ((*(int32_t *)(v6 + 20) & 0x1000000) != 0) {
                // 0x180199f96
                v6 = 0x100000000 * *(int64_t *)(v7 + 896) / 0x100000000;
                v7 = v6;
                v4 = 0;
                v5 = v6;
            }
        }
        // 0x180199fb1
        v2 = v4 + (int32_t)function_1801b71c0(v5);
    }
    int64_t v8 = 0x100000000 * a4 / 0x100000000; // 0x180199f40
    if (v2 < 0) {
        // 0x18019a066
        return function_180199be0(0, (int32_t)v8);
    }
    int64_t result; // 0x180199f40
    for (int64_t i = (int64_t)v2; i >= 0; i--) {
        int64_t v9 = *(int64_t *)(8 * i + *(int64_t *)(v1 + 0x4030)); // 0x18019a00a
        if (v9 != (int64_t)a2) {
            // 0x18019a01e
            if (*(char *)(v9 + 203) != 0) {
                // 0x18019a030
                if ((*(int32_t *)(v9 + 20) & 0x10200) != 0x10200) {
                    // 0x18019a044
                    result = function_180199be0(v9, (int32_t)v8);
                    return result;
                }
            }
        }
    }
    // 0x18019a05a
    result = function_180199be0(0, (int32_t)v8);
  lab_0x18019a066:
    // 0x18019a066
    return result;
}

// Address range: 0x18019a080 - 0x18019a22b
int64_t function_18019a080(int64_t result2) {
    int64_t v1 = (int64_t)g1201; // 0x18019a08c
    int32_t v2 = *(int32_t *)(v1 + 0x4028) - 1; // 0x18019a0c2
    int64_t * v3 = (int64_t *)(v1 + 0x4030); // 0x18019a0cb
    int64_t v4 = *v3; // 0x18019a0cb
    int64_t v5 = 8 * (int64_t)v2; // 0x18019a0cf
    int64_t result = v5 + v4;
    int64_t * v6 = (int64_t *)result;
    if (*v6 == result2) {
        // 0x18019a223
        return result;
    }
    int16_t * v7 = (int16_t *)(result2 + 224); // 0x18019a0a0
    int16_t v8 = *v7; // 0x18019a0a0
    int64_t v9 = v2; // 0x18019a111
    int64_t v10 = v8; // 0x18019a118
    int64_t * v11 = v6; // 0x18019a118
    if (v10 < v9) {
        int32_t v12 = v8; // 0x18019a131
        int64_t v13 = v4; // 0x18019a13a
        v12++;
        int64_t v14 = v12;
        int64_t v15 = 8 * v10; // 0x18019a171
        *(int64_t *)(v15 + v13) = *(int64_t *)(8 * v14 + v13);
        int16_t * v16 = (int16_t *)(*(int64_t *)(*v3 + v15) + 224); // 0x18019a1c5
        *v16 = *v16 - 1;
        int64_t v17 = *v3;
        while (v14 < v9) {
            int64_t v18 = v14;
            v13 = v17;
            v12++;
            v14 = v12;
            v15 = 8 * v18;
            *(int64_t *)(v15 + v13) = *(int64_t *)(8 * v14 + v13);
            v16 = (int16_t *)(*(int64_t *)(*v3 + v15) + 224);
            *v16 = *v16 - 1;
            v17 = *v3;
        }
        // 0x18019a111
        v11 = (int64_t *)(v17 + v5);
    }
    // 0x18019a1d8
    *v11 = result2;
    *v7 = (int16_t)v2;
    // 0x18019a223
    return result2;
}

// Address range: 0x18019a240 - 0x18019a421
int64_t function_18019a240(int64_t result) {
    int64_t v1 = (int64_t)g1201; // 0x18019a24c
    int32_t * v2 = (int32_t *)(v1 + 0x4018); // 0x18019a26d
    int32_t v3 = *v2; // 0x18019a26d
    int64_t * v4 = (int64_t *)(v1 + 0x4020); // 0x18019a278
    int64_t v5 = *v4; // 0x18019a278
    int64_t result2 = *(int64_t *)(8 * (int64_t)(v3 - 1) + v5); // 0x18019a28a
    if (result2 == result) {
        // 0x18019a419
        return result;
    }
    // 0x18019a2a1
    if (*(int64_t *)(result2 + 912) == result) {
        // 0x18019a419
        return result2;
    }
    int32_t result3 = v3 - 2; // 0x18019a2c7
    if (result3 < 0) {
        // 0x18019a419
        return result3;
    }
    int32_t v6 = result3;
    int64_t v7 = 8 * (int64_t)v6 + v5; // 0x18019a303
    while (*(int64_t *)v7 != result) {
        int32_t v8 = v6 - 1; // 0x18019a2d4
        if (v8 < 0) {
            // 0x18019a419
            return -1;
        }
        v6 = v8;
        v7 = 8 * (int64_t)v6 + v5;
    }
    // 0x18019a322
    int64_t v9; // 0x18019a240
    function_18029d4e0(v7, 8 * (int64_t)(v6 + 1) + v5, 8 * (int64_t)(v3 + -1 - v6), v9);
    int64_t result4 = 8 * (int64_t)(*v2 - 1) + *v4; // 0x18019a3f3
    *(int64_t *)result4 = result;
    // 0x18019a419
    return result4;
}

// Address range: 0x18019a430 - 0x18019a5b2
int64_t function_18019a430(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18019a43c
    int64_t * v2 = (int64_t *)(v1 + 0x4020); // 0x18019a45f
    int64_t result = *v2; // 0x18019a45f
    if (*(int64_t *)result == a1) {
        // 0x18019a5aa
        return result;
    }
    uint32_t v3 = *(int32_t *)(v1 + 0x4018); // 0x18019a49c
    int64_t result2 = v3;
    if (v3 == 0) {
        // 0x18019a5aa
        return 0;
    }
    int32_t v4 = 0; // 0x18019a4a6
    int64_t v5 = 0; // 0x18019a4ca
    while (*(int64_t *)(v5 + result) != a1) {
        // 0x18019a497
        v4++;
        int64_t v6 = v4; // 0x18019a4a6
        if (v6 >= result2) {
            // 0x18019a5aa
            return result2;
        }
        v5 = 8 * v6;
    }
    // 0x18019a4e9
    int64_t v7; // 0x18019a430
    function_18029d4e0(result + 8, result, v5, v7);
    int64_t result3 = *v2; // 0x18019a580
    *(int64_t *)result3 = a1;
    // 0x18019a5aa
    return result3;
}

// Address range: 0x18019a5c0 - 0x18019a740
int64_t function_18019a5c0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201;
    int64_t v2 = *(int64_t *)(a1 + 912); // 0x18019a5df
    int64_t v3 = function_18019a750(v2); // 0x18019a601
    int64_t v4 = function_18019a750(*(int64_t *)(a2 + 912)); // 0x18019a60f
    int64_t v5 = 0x100000000 * v3;
    int64_t result; // 0x18019a5c0
    int64_t v6; // 0x18019a5c0
    if (v5 / 0x100000000 < (v4 & 0xffffffff)) {
        int64_t * v7 = (int64_t *)(v1 + 0x4020);
        int64_t v8 = *v7; // 0x18019a64c
        function_18029d4e0(v8 + v5 / 0x20000000, v8 + (v5 + 0x100000000) / 0x20000000, 0x100000000 * (v4 + (v3 ^ 0xffffffff)) / 0x20000000, v6);
        int64_t v9 = *v7 + (0x100000000 * v4 - 0x100000000) / 0x20000000; // 0x18019a69a
        *(int64_t *)v9 = v2;
        result = v9;
    } else {
        int64_t v10 = 0x100000000 * v4;
        int64_t * v11 = (int64_t *)(v1 + 0x4020);
        int64_t v12 = *v11; // 0x18019a6d6
        int64_t v13 = v10 / 0x20000000; // 0x18019a6dd
        function_18029d4e0(v12 + (v10 + 0x100000000) / 0x20000000, v12 + v13, 0x100000000 * (v3 - v4) / 0x20000000, v6);
        int64_t v14 = *v11 + v13; // 0x18019a725
        *(int64_t *)v14 = v2;
        result = v14;
    }
    // 0x18019a73b
    return result;
}

// Address range: 0x18019a750 - 0x18019a80c
int64_t function_18019a750(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18019a759
    int64_t v2 = *(int64_t *)(v1 + 0x4020);
    uint64_t v3 = 8 * (int64_t)*(int32_t *)(v1 + 0x4018) + v2; // 0x18019a7a4
    if (v2 >= v3) {
        // 0x18019a7dc
        return 0;
    }
    int64_t v4 = v2; // 0x18019a7b7
    while (*(int64_t *)v4 != a1) {
        // 0x18019a7cc
        v4 += 8;
        if (v4 >= v3) {
            // break -> 0x18019a7dc
            return 0;
        }
    }
    // 0x18019a7dc
    return (v4 - v2) / 8 & 0xffffffff;
}

// Address range: 0x18019a820 - 0x18019a952
int64_t function_18019a820(int64_t result) {
    int64_t v1 = function_18019a750(result); // 0x18019a844
    if ((int32_t)v1 < 0) {
        // 0x18019a948
        return result;
    }
    int64_t * v2 = (int64_t *)((int64_t)g1201 + 0x4020); // 0x18019a87e
    int64_t v3 = 0x100000000 * v1 / 0x100000000;
    int64_t v4 = *(int64_t *)(*v2 + 8 * v3); // 0x18019a890
    int32_t * v5 = (int32_t *)(v4 + 20); // 0x18019a89d
    int64_t v6 = result; // 0x18019a8a7
    int32_t v7; // 0x18019a907
    if ((*v5 & 0x1000000) == 0) {
        // 0x18019a8ab
        if ((function_180199370(v4, result) & 255) == 0) {
            // break -> 0x18019a948
            return 0;
        }
        // 0x18019a8c6
        v6 = result;
        if ((function_1801c17a0(v4) & 255) != 0) {
            // 0x18019a8d7
            v7 = *(int32_t *)(result + 20);
            v6 = ((*v5 & 0x2000000) != 0) > ((v7 & 0x2000000) != 0) ? result : v4;
        }
    }
    int64_t v8 = v6;
    int64_t v9 = v3 - 1; // 0x18019a85e
    int64_t result2 = v8; // 0x18019a85e
    while (v3 >= 1) {
        int64_t v10 = v8;
        v3 = v9;
        v4 = *(int64_t *)(*v2 + 8 * v3);
        v5 = (int32_t *)(v4 + 20);
        v6 = v10;
        if ((*v5 & 0x1000000) == 0) {
            // 0x18019a8ab
            result2 = v10;
            if ((function_180199370(v4, result) & 255) == 0) {
                // break -> 0x18019a948
                return 0;
            }
            // 0x18019a8c6
            v6 = v10;
            if ((function_1801c17a0(v4) & 255) != 0) {
                // 0x18019a8d7
                v7 = *(int32_t *)(result + 20);
                int64_t v11 = ((*v5 & 0x2000000) != 0) > ((v7 & 0x2000000) != 0) ? v10 : v4;
                v6 = v11;
            }
        }
        // 0x18019a84f
        v8 = v6;
        v9 = v3 - 1;
        result2 = v8;
    }
    // 0x18019a948
    return result2;
}

// Address range: 0x18019a960 - 0x18019a99e
int64_t function_18019a960(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x18019a960
    *(int64_t *)&v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x4a90); // 0x18019a977
    *v3 = *v3 | 512;
    int64_t result = (int64_t)v2; // 0x18019a98b
    *(int32_t *)(result + 0x4afc) = (int32_t)a1;
    return result;
}

// Address range: 0x18019a9b0 - 0x18019abb0
int64_t function_18019a9b0(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-72, 0x18019a9b0
    *(int64_t *)&v2 = v1;
    *(int64_t *)(v1 + 0x3d88) = a1;
    int64_t v3 = (int64_t)v2;
    int64_t * v4 = (int64_t *)(v3 + 0x3d88);
    int128_t v5 = __asm_mulss(__asm_movss_31(*(int32_t *)(v3 + 64)), *(int32_t *)(*v4 + 20)); // 0x18019a9e8
    int32_t v6 = __asm_movss(__asm_mulss(v5, *(int32_t *)(*v4 + 100))); // 0x18019a9fd
    int32_t v7 = *(int32_t *)&g40; // 0x18019aa03
    __asm_comiss(__asm_movss_31(v7), (int128_t)v6);
    int64_t v8; // 0x18019a9b0
    uint64_t v9; // 0x18019a9b0
    if (v9 < 72) {
        // 0x18019aa22
        v8 = __asm_movss(__asm_movss_31(v6));
    } else {
        // 0x18019aa12
        v8 = __asm_movss(__asm_movss_31(v7));
    }
    int128_t v10 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v8))); // 0x18019aa3a
    *(int32_t *)(v3 + 0x3d94) = (int32_t)__asm_movss(v10);
    int64_t v11 = (int64_t)v2;
    int64_t v12 = *(int64_t *)(v11 + 0x4078); // 0x18019aa50
    int64_t v13; // 0x18019a9b0
    if (v12 == 0) {
        // 0x18019aae4
        v13 = __asm_movss(__asm_xorps(v10, v10));
    } else {
        int128_t v14 = __asm_movss_31(*(int32_t *)(*(int64_t *)v12 + 0x3d94)); // 0x18019aa85
        int32_t v15 = __asm_movss(__asm_mulss(v14, *(int32_t *)(v12 + 680))); // 0x18019aa95
        int64_t v16 = *(int64_t *)(v12 + 896); // 0x18019aaa0
        int32_t v17 = v15; // 0x18019aaa8
        if (v16 != 0) {
            int128_t v18 = __asm_mulss(__asm_movss_31(v15), *(int32_t *)(v16 + 680)); // 0x18019aabc
            v17 = __asm_movss(v18);
        }
        int128_t v19 = __asm_movss_31(v17); // 0x18019aaca
        v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v19)));
    }
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)v13)); // 0x18019aaf7
    *(int32_t *)(v11 + 0x3d90) = (int32_t)v20;
    int64_t v21 = (int64_t)v2;
    int128_t v22 = __asm_movss_31(*(int32_t *)(v21 + 0x3d90)); // 0x18019ab0e
    int32_t v23 = *(int32_t *)(*(int64_t *)(v21 + 0x3d88) + 20); // 0x18019ab16
    *(int32_t *)(v21 + 0x3d98) = (int32_t)__asm_movss(__asm_divss_38(v22, v23));
    int64_t v24 = (int64_t)v2; // 0x18019ab27
    int64_t v25 = *(int64_t *)(*(int64_t *)(v24 + 0x3d88) + 64); // 0x18019ab32
    *(int64_t *)(v24 + 0x3da0) = *(int64_t *)(v25 + 80);
    *(int64_t *)((int64_t)v2 + 0x3fb0) = v25 + 136;
    int64_t v26 = (int64_t)v2; // 0x18019ab65
    *(int64_t *)(v26 + 0x3da8) = *(int64_t *)(v26 + 0x3d88);
    int64_t v27 = (int64_t)v2; // 0x18019ab7b
    int64_t v28 = __asm_movss(__asm_movss_31(*(int32_t *)(v27 + 0x3d90))); // 0x18019ab8b
    *(int32_t *)(v27 + 0x3db0) = (int32_t)v28;
    int64_t result = (int64_t)v2; // 0x18019ab93
    int64_t v29 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 0x3d98))); // 0x18019aba3
    *(int32_t *)(result + 0x3db4) = (int32_t)v29;
    return result;
}

// Address range: 0x18019abc0 - 0x18019abe1
int64_t function_18019abc0(int64_t a1, int64_t a2) {
    // 0x18019abc0
    int64_t v1; // 0x18019abc0
    return function_1801c15a0(a1, 0, "##Background", v1);
}

// Address range: 0x18019abf0 - 0x18019ac14
int64_t function_18019abf0(int64_t a1) {
    // 0x18019abf0
    int64_t v1; // 0x18019abf0
    return function_1801c15a0(a1, 1, "##Foreground", v1);
}

// Address range: 0x18019ac20 - 0x18019afc5
int64_t function_18019ac20(void) {
    int64_t result = (int64_t)g1201; // 0x18019ac27
    char * v1; // bp-88, 0x18019ac20
    int64_t v2; // 0x18019ac20
    function_18029db80((int64_t)&v1, 0, 72, v2);
    v1 = "Window";
    function_180194e30("Window", 0, 0);
    function_18019d3b0((int64_t *)&v1);
    function_1802619f0();
    function_18019d830(&g389, 9);
    *(int64_t *)(result + 176) = 0x1801b1020;
    *(int64_t *)(result + 184) = 0x1801b11b0;
    *(int64_t *)(result + 192) = result;
    *(int64_t *)(result + 200) = 0x1801b13d0;
    *(int64_t *)(result + 216) = 0x1801b12b0;
    int64_t v3 = function_180190140(208); // 0x18019ad41
    int32_t * v4 = NULL; // 0x18019ad72
    if (v3 != 0) {
        // 0x18019ad74
        v4 = (int32_t *)function_1801ca950(v3);
    }
    int32_t * v5 = v4; // bp-160, 0x18019ad9d
    *v4 = 0x11111111;
    function_180129b70(result + 0x4b98, (int64_t *)&v5);
    char v6 = 0; // bp-212, 0x18019ade6
    function_1801cfbd0(result + 0x6368, 3073, &v6);
    int32_t v7 = 512; // 0x18019ae11
    int32_t v8; // 0x18019ac20
    while (true) {
      lab_0x18019ae25:
        // 0x18019ae25
        v8 = v7;
        if (v8 < 622 || v8 < 546 || v8 < 572) {
            goto lab_0x18019af35;
        } else {
            switch (v8) {
                case 626: {
                    goto lab_0x18019af35;
                }
                case 625: {
                    goto lab_0x18019af35;
                }
                case 624: {
                    goto lab_0x18019af35;
                }
                case 623: {
                    goto lab_0x18019af35;
                }
                case 622: {
                    goto lab_0x18019af35;
                }
                case 606: {
                    goto lab_0x18019af35;
                }
                case 605: {
                    goto lab_0x18019af35;
                }
                case 603: {
                    goto lab_0x18019af35;
                }
                case 602: {
                    goto lab_0x18019af35;
                }
                case 601: {
                    goto lab_0x18019af35;
                }
                case 600: {
                    goto lab_0x18019af35;
                }
                case 599: {
                    goto lab_0x18019af35;
                }
                case 598: {
                    goto lab_0x18019af35;
                }
                case 597: {
                    goto lab_0x18019af35;
                }
                case 596: {
                    goto lab_0x18019af35;
                }
                case 524: {
                    goto lab_0x18019af35;
                }
                case 512: {
                    goto lab_0x18019af35;
                }
                default: {
                    if (v8 != 628) {
                        goto lab_0x18019afb0;
                    } else {
                        goto lab_0x18019af35;
                    }
                }
            }
        }
    }
  lab_0x18019afb5:
    // 0x18019afb5
    *(char *)g1201 = 1;
    return result;
  lab_0x18019af35:;
    int32_t v9 = v8 - 512; // 0x18019af54
    int32_t * v10 = (int32_t *)(result + 0x4148 + 4 * (int64_t)(v9 / 32)); // 0x18019af99
    *v10 = *v10 | 1 << (v9 & 31);
    goto lab_0x18019afb0;
  lab_0x18019afb0:
    // 0x18019afb0
    v7 = v8 + 1;
    if (v7 == 666) {
        // break -> 0x18019afb5
        goto lab_0x18019afb5;
    }
    goto lab_0x18019ae25;
}

// Address range: 0x18019afd0 - 0x18019b7a3
int64_t function_18019afd0(void) {
    int64_t result2 = (int64_t)g1201; // 0x18019afd7
    int64_t * v1 = (int64_t *)(result2 + 56); // 0x18019afe8
    int64_t v2 = *v1; // 0x18019afe8
    if (v2 != 0) {
        // 0x18019afef
        if (*(char *)(result2 + 1) != 0) {
            // 0x18019affc
            *(char *)(v2 + 24) = 0;
            function_1801c75a0(*v1);
        }
    }
    // 0x18019b018
    *v1 = 0;
    int64_t * v3 = (int64_t *)(result2 + 0x3de0); // 0x18019b03a
    if (*v3 != 0) {
        // 0x18019b041
        *(int32_t *)(result2 + 0x3ddc) = 0;
        *(int32_t *)(result2 + 0x3dd8) = 0;
        function_1801901c0(*v3);
        *v3 = 0;
    }
    unsigned char result = *(char *)g1201; // 0x18019b078
    if (result == 0) {
        // 0x18019b79b
        return result;
    }
    // 0x18019b084
    if (*(char *)(result2 + 0x6098) != 0) {
        int64_t v4 = *(int64_t *)(result2 + 32); // 0x18019b099
        if (v4 != 0) {
            // 0x18019b0a0
            function_18018f7b0(v4);
        }
    }
    // 0x18019b0af
    function_18019d150(result2, 6);
    function_1801cdd80(result2 + 0x4018);
    int64_t * v5 = (int64_t *)(result2 + 0x4030); // 0x18019b0e6
    if (*v5 != 0) {
        // 0x18019b0ed
        *(int32_t *)(result2 + 0x402c) = 0;
        *(int32_t *)(result2 + 0x4028) = 0;
        function_1801901c0(*v5);
        *v5 = 0;
    }
    int64_t * v6 = (int64_t *)(result2 + 0x4040); // 0x18019b134
    if (*v6 != 0) {
        // 0x18019b13b
        *(int32_t *)(result2 + 0x403c) = 0;
        *(int32_t *)(result2 + 0x4038) = 0;
        function_1801901c0(*v6);
        *v6 = 0;
    }
    // 0x18019b16d
    *(int64_t *)(result2 + 0x4078) = 0;
    int64_t * v7 = (int64_t *)(result2 + 0x4050); // 0x18019b192
    if (*v7 != 0) {
        // 0x18019b199
        *(int32_t *)(result2 + 0x404c) = 0;
        *(int32_t *)(result2 + 0x4048) = 0;
        function_1801901c0(*v7);
        *v7 = 0;
    }
    // 0x18019b1cb
    function_1801cc890(result2 + 0x4058);
    *(int64_t *)(result2 + 0x4ba8) = 0;
    *(int64_t *)(result2 + 0x4088) = 0;
    *(int64_t *)(result2 + 0x4080) = 0;
    *(int64_t *)(result2 + 0x4120) = 0;
    *(int64_t *)(result2 + 0x4108) = 0;
    *(int64_t *)(result2 + 0x4098) = 0;
    function_1801cc6b0(result2 + 0x4898);
    int64_t * v8 = (int64_t *)(result2 + 0x4b10); // 0x18019b266
    if (*v8 != 0) {
        // 0x18019b26d
        *(int32_t *)(result2 + 0x4b0c) = 0;
        *(int32_t *)(result2 + 0x4b08) = 0;
        function_1801901c0(*v8);
        *v8 = 0;
    }
    int64_t * v9 = (int64_t *)(result2 + 0x4b20); // 0x18019b2b4
    if (*v9 != 0) {
        // 0x18019b2bb
        *(int32_t *)(result2 + 0x4b1c) = 0;
        *(int32_t *)(result2 + 0x4b18) = 0;
        function_1801901c0(*v9);
        *v9 = 0;
    }
    int64_t * v10 = (int64_t *)(result2 + 0x4b30); // 0x18019b302
    if (*v10 != 0) {
        // 0x18019b309
        *(int32_t *)(result2 + 0x4b2c) = 0;
        *(int32_t *)(result2 + 0x4b28) = 0;
        function_1801901c0(*v10);
        *v10 = 0;
    }
    int64_t * v11 = (int64_t *)(result2 + 0x4b70); // 0x18019b350
    if (*v11 != 0) {
        // 0x18019b357
        *(int32_t *)(result2 + 0x4b6c) = 0;
        *(int32_t *)(result2 + 0x4b68) = 0;
        function_1801901c0(*v11);
        *v11 = 0;
    }
    int64_t * v12 = (int64_t *)(result2 + 0x4b80); // 0x18019b39e
    if (*v12 != 0) {
        // 0x18019b3a5
        *(int32_t *)(result2 + 0x4b7c) = 0;
        *(int32_t *)(result2 + 0x4b78) = 0;
        function_1801901c0(*v12);
        *v12 = 0;
    }
    int64_t * v13 = (int64_t *)(result2 + 0x4b90); // 0x18019b3ec
    if (*v13 != 0) {
        // 0x18019b3f3
        *(int32_t *)(result2 + 0x4b8c) = 0;
        *(int32_t *)(result2 + 0x4b88) = 0;
        function_1801901c0(*v13);
        *v13 = 0;
    }
    // 0x18019b425
    function_1801cdcf0(result2 + 0x4b98);
    function_1801cc430(result2 + 0x4f00);
    int64_t * v14 = (int64_t *)(result2 + 0x4f30); // 0x18019b460
    if (*v14 != 0) {
        // 0x18019b467
        *(int32_t *)(result2 + 0x4f2c) = 0;
        *(int32_t *)(result2 + 0x4f28) = 0;
        function_1801901c0(*v14);
        *v14 = 0;
    }
    int64_t * v15 = (int64_t *)(result2 + 0x4f40); // 0x18019b4b4
    if (*v15 != 0) {
        // 0x18019b4bb
        *(int32_t *)(result2 + 0x4f3c) = 0;
        *(int32_t *)(result2 + 0x4f38) = 0;
        function_1801901c0(*v15);
        *v15 = 0;
    }
    // 0x18019b4f9
    function_1801cde10(result2 + 0x4e80);
    function_1801cc570(result2 + 0x4eb0);
    function_1801ce060(result2 + 0x4ea0);
    int64_t * v16 = (int64_t *)(result2 + 0x4ef0); // 0x18019b54d
    if (*v16 != 0) {
        // 0x18019b554
        *(int32_t *)(result2 + 0x4eec) = 0;
        *(int32_t *)(result2 + 0x4ee8) = 0;
        function_1801901c0(*v16);
        *v16 = 0;
    }
    // 0x18019b592
    function_1801cc340(result2 + 0x4fd0);
    function_1801cdee0(result2 + 0x4fc0);
    int64_t * v17 = (int64_t *)(result2 + 0x5ff8); // 0x18019b5d3
    if (*v17 != 0) {
        // 0x18019b5da
        *(int32_t *)(result2 + 0x5ff4) = 0;
        *(int32_t *)(result2 + 0x5ff0) = 0;
        function_1801901c0(*v17);
        *v17 = 0;
    }
    int64_t * v18 = (int64_t *)(result2 + 0x6008); // 0x18019b633
    if (*v18 != 0) {
        // 0x18019b63a
        *(int32_t *)(result2 + 0x6004) = 0;
        *(int32_t *)(result2 + 0x6000) = 0;
        function_1801901c0(*v18);
        *v18 = 0;
    }
    // 0x18019b678
    function_1801cc960(result2 + 0x5020);
    function_1801cc8f0(result2 + 0x5eb8);
    function_1801cc890(result2 + 0x60c0);
    int64_t * v19 = (int64_t *)(result2 + 0x60b8); // 0x18019b6cc
    if (*v19 != 0) {
        // 0x18019b6d3
        *(int32_t *)(result2 + 0x60b4) = 0;
        *(int32_t *)(result2 + 0x60b0) = 0;
        function_1801901c0(*v19);
        *v19 = 0;
    }
    int64_t * v20 = (int64_t *)(result2 + 0x6148); // 0x18019b716
    if (*v20 != 0) {
        int64_t * v21 = __acrt_iob_func(1); // 0x18019b725
        int64_t v22 = *v20; // 0x18019b72f
        if (v22 != (int64_t)v21) {
            // 0x18019b738
            function_180196ad0(v22);
        }
        // 0x18019b74a
        *v20 = 0;
    }
    // 0x18019b75a
    function_1801cc890(result2 + 0x6150);
    function_1801cc890(result2 + 0x6188);
    function_1801cdc80(result2 + 0x6198);
    *(char *)g1201 = 0;
    // 0x18019b79b
    return result2;
}

// Address range: 0x18019b7b0 - 0x18019bfbe
int64_t function_18019b7b0(char a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18019b7cd
    int32_t v2; // 0x18019b7b0
    if (a1 == 0) {
        // 0x18019b808
        v2 = 0;
        goto lab_0x18019b80d;
    } else {
        // 0x18019b7f3
        v2 = 1;
        if (*(int32_t *)(v1 + 0x6360) != 1) {
            // 0x18019b808
            v2 = 0;
            goto lab_0x18019b80d;
        } else {
            goto lab_0x18019b80d;
        }
    }
  lab_0x18019b80d:;
    int64_t v3 = v1 + 8; // 0x18019b7de
    int64_t v4; // bp-120, 0x18019b7b0
    int64_t v5; // 0x18019b7b0
    function_18029db80((int64_t)&v4, 0, 84, v5);
    int64_t v6 = v1 + 0x3ff0; // 0x18019b864
    int32_t * v7 = (int32_t *)v6; // 0x18019b864
    int32_t v8 = 0; // 0x18019b86e
    int64_t v9 = 0; // 0x18019b86e
    if (*v7 != 0) {
        int32_t * v10 = (int32_t *)v3; // 0x18019b7e2
        int64_t * v11 = (int64_t *)(v1 + 0x3ff8); // 0x18019b898
        int32_t * v12 = (int32_t *)(v1 + 296);
        int32_t * v13 = (int32_t *)(v1 + 292);
        int32_t * v14 = (int32_t *)(v1 + 288);
        int64_t v15; // bp-408, 0x18019b7b0
        int64_t v16 = (int64_t)&v15 + 288;
        int64_t v17 = v1 + 0x3620;
        int32_t v18 = 0;
        int32_t v19 = 0;
        int32_t v20 = 0;
        int32_t v21 = 0;
        int32_t v22 = 0;
        int64_t v23 = *v11; // 0x18019b898
        int32_t v24 = *(int32_t *)v23; // 0x18019b8b6
        int32_t * v25; // 0x18019b7b0
        int32_t v26; // 0x18019b7b0
        char v27; // 0x18019b7b0
        int64_t v28; // 0x18019b7b0
        int16_t v29; // bp-308, 0x18019b7b0
        int32_t v30; // 0x18019b7b0
        int32_t v31; // 0x18019b7b0
        int32_t v32; // 0x18019b7b0
        int32_t v33; // 0x18019b7b0
        int32_t v34; // 0x18019b7b0
        int32_t v35; // 0x18019b992
        int64_t v36; // 0x18019b8db
        int64_t v37; // 0x18019b8ee
        int64_t v38; // 0x18019b900
        int32_t v39; // 0x18019b7b0
        int64_t v40; // 0x18019baa5
        int64_t v41; // 0x18019bac9
        int32_t * v42; // 0x18019b7b0
        int64_t v43; // 0x18019bb3c
        char * v44; // 0x18019bb51
        uint64_t v45; // 0x18019b7b0
        int32_t v46; // 0x18019bb70
        char v47; // 0x18019bb89
        char v48; // 0x18019bb91
        uint32_t v49; // 0x18019bcff
        int64_t v50; // 0x18019bc2a
        int32_t v51; // 0x18019bc68
        if (v24 != 1) {
            if (v24 != 3) {
                if (v24 != 2) {
                    if (v24 != 4) {
                        if (v24 != 5) {
                            // 0x18019bd6c
                            v34 = v18;
                            v33 = v19;
                            v32 = v20;
                            v31 = v21;
                            v30 = v22;
                            if (v24 == 6) {
                                // 0x18019bd76
                                *(char *)(v1 + 0x2ba0) = (char)(*(char *)(v23 + 12) == 0);
                                v34 = v18;
                                v33 = v19;
                                v32 = v20;
                                v31 = v21;
                                v30 = v22;
                            }
                        } else {
                            // 0x18019bcab
                            v34 = v18;
                            v33 = v19;
                            v32 = v20;
                            v31 = v21;
                            v30 = v22;
                            if ((*v10 & 64) == 0) {
                                if (a1 != 0) {
                                    // 0x18019bcca
                                    if (v22 != 0 || v2 != 0 == ((v20 & 255) != 0)) {
                                        // break -> 0x18019bdad
                                        return 0;
                                    }
                                    // 0x18019bce3
                                    if (((v18 | v19) & 255) != 0) {
                                        // break -> 0x18019bdad
                                        return 0;
                                    }
                                }
                                // 0x18019bcfa
                                v49 = *(int32_t *)(v23 + 12);
                                v29 = (int16_t)(v49 < 0x10000 ? v49 : 0xfffd);
                                function_1801cebb0(v1 + 0x2ba8, &v29);
                                v34 = v18;
                                v33 = v19;
                                v32 = v20;
                                v31 = v2 == 0 ? v21 : 1;
                                v30 = v22;
                            }
                        }
                    } else {
                        // 0x18019bafc
                        v34 = v18;
                        v33 = v19;
                        v32 = v20;
                        v31 = v21;
                        v30 = v22;
                        if ((*v10 & 64) == 0) {
                            // 0x18019bb0f
                            v43 = function_1801a4160((int64_t)g1201, *(int32_t *)(v23 + 12));
                            v44 = (char *)v43;
                            v45 = (-308 - v1 + v43) / 16;
                            v46 = v45;
                            if (a1 == 0) {
                                // 0x18019bb0f
                                v27 = *(char *)(v23 + 16);
                            } else {
                                // 0x18019bb84
                                v47 = *v44;
                                v48 = *(char *)(v23 + 16);
                                v27 = v47;
                                if (v47 != v48) {
                                    // 0x18019bb99
                                    if ((*(int32_t *)(v16 + 4 * (int64_t)(v46 / 32)) & 1 << (v46 & 31)) != 0) {
                                        // break -> 0x18019bdad
                                        return 0;
                                    }
                                    // 0x18019bbf6
                                    v27 = v48;
                                    if ((v21 & 255 || v22) != 0) {
                                        // break -> 0x18019bdad
                                        return 0;
                                    }
                                }
                            }
                            // 0x18019bc0b
                            *v44 = v27;
                            v50 = __asm_movss(__asm_movss_31(*(int32_t *)(v23 + 20)));
                            *(int32_t *)(v43 + 12) = (int32_t)v50;
                            function_1801cd5d0(&v4, v46);
                            v28 = 0x100000000 * v45;
                            *(char *)(v28 / 0x100000000 + v17) = *v44;
                            v51 = *(int32_t *)(v1 + 0x2bb8 + v28 / 0x40000000);
                            v34 = v18;
                            v33 = v19;
                            v32 = 1;
                            v31 = v21;
                            v30 = v22;
                            if (v51 != -1) {
                                // 0x18019bc72
                                *(char *)(v17 + (int64_t)v51) = *v44;
                                v34 = v18;
                                v33 = v19;
                                v32 = 1;
                                v31 = v21;
                                v30 = v22;
                            }
                        }
                    }
                } else {
                    if (a1 != 0) {
                        // 0x18019ba74
                        if ((v18 & 255 || v22) != 0) {
                            // break -> 0x18019bdad
                            return 0;
                        }
                    }
                    // 0x18019ba89
                    v40 = __asm_movss(__asm_addss(__asm_movss_31(*v13), *(int32_t *)(v23 + 12)));
                    *v13 = (int32_t)v40;
                    v41 = __asm_movss(__asm_addss(__asm_movss_31(*v14), *(int32_t *)(v23 + 16)));
                    *v14 = (int32_t)v41;
                    *v12 = *(int32_t *)(v23 + 20);
                    v34 = v18;
                    v33 = 1;
                    v32 = v20;
                    v31 = v21;
                    v30 = v22;
                }
            } else {
                // 0x18019b98d
                v35 = *(int32_t *)(v23 + 12);
                if (a1 == 0) {
                    // 0x18019b98d
                    v26 = 1 << (v35 & 31);
                    v25 = (int32_t *)(v23 + 20);
                } else {
                    // 0x18019b9a5
                    v39 = 1 << (v35 & 31);
                    if ((v39 & v22 || v19 & 255) != 0) {
                        // break -> 0x18019bdad
                        return 0;
                    }
                    // 0x18019b9e7
                    v42 = (int32_t *)(v23 + 20);
                    v26 = v39;
                    v25 = v42;
                    if (!(((v18 & 255) == 0 | *v42 != 1))) {
                        // break -> 0x18019bdad
                        return 0;
                    }
                }
                // 0x18019ba00
                *(char *)(v1 + 280 + (int64_t)v35) = *(char *)(v23 + 16);
                *v12 = *v25;
                v34 = v18;
                v33 = v19;
                v32 = v20;
                v31 = v21;
                v30 = v26 | v22;
            }
        } else {
            // 0x18019b8bf
            v34 = v18;
            v33 = v19;
            v32 = v20;
            v31 = v21;
            v30 = v22;
            if (*(char *)(v1 + 229) == 0) {
                // 0x18019b8d1
                v36 = __asm_movss(__asm_movss_31(*(int32_t *)(v23 + 16)));
                v37 = __asm_movss(__asm_movss_31(*(int32_t *)(v23 + 12)));
                v38 = __asm_movss(__asm_movss_31((int32_t)v37));
                __asm_movss(__asm_movss_31((int32_t)v36));
                if (a1 != 0) {
                    // 0x18019b927
                    if (v22 != 0) {
                        // break -> 0x18019bdad
                        return 0;
                    }
                    // 0x18019b92e
                    if ((v19 & 255) != 0) {
                        // break -> 0x18019bdad
                        return 0;
                    }
                    // 0x18019b937
                    if (((v20 | v21) & 255) != 0) {
                        // break -> 0x18019bdad
                        return 0;
                    }
                }
                // 0x18019b94e
                *(int64_t *)(v1 + 272) = 0x100000000 * v38 / 0x100000000;
                *v12 = *(int32_t *)(v23 + 20);
                v34 = 1;
                v33 = v19;
                v32 = v20;
                v31 = v21;
                v30 = v22;
            }
        }
        int32_t v52 = 1; // 0x18019b859
        int64_t v53 = v52;
        int32_t v54 = v52; // 0x18019b86e
        int64_t v55 = v53; // 0x18019b86e
        while (v53 < (int64_t)*v7) {
            // 0x18019b874
            v18 = v34;
            v19 = v33;
            v20 = v32;
            v21 = v31;
            v22 = v30;
            int32_t v56 = v52;
            int64_t v57 = v53;
            v23 = *v11 + 28 * v57;
            v24 = *(int32_t *)v23;
            if (v24 != 1) {
                if (v24 != 3) {
                    if (v24 != 2) {
                        if (v24 != 4) {
                            if (v24 != 5) {
                                // 0x18019bd6c
                                v34 = v18;
                                v33 = v19;
                                v32 = v20;
                                v31 = v21;
                                v30 = v22;
                                if (v24 == 6) {
                                    // 0x18019bd76
                                    *(char *)(v1 + 0x2ba0) = (char)(*(char *)(v23 + 12) == 0);
                                    v34 = v18;
                                    v33 = v19;
                                    v32 = v20;
                                    v31 = v21;
                                    v30 = v22;
                                }
                            } else {
                                // 0x18019bcab
                                v34 = v18;
                                v33 = v19;
                                v32 = v20;
                                v31 = v21;
                                v30 = v22;
                                if ((*v10 & 64) == 0) {
                                    if (a1 != 0) {
                                        // 0x18019bcca
                                        v54 = v56;
                                        v55 = v57;
                                        if (v22 != 0 || v2 != 0 == ((v20 & 255) != 0)) {
                                            // break -> 0x18019bdad
                                            return 0;
                                        }
                                        // 0x18019bce3
                                        v54 = v56;
                                        v55 = v57;
                                        if (((v18 | v19) & 255) != 0) {
                                            // break -> 0x18019bdad
                                            return 0;
                                        }
                                    }
                                    // 0x18019bcfa
                                    v49 = *(int32_t *)(v23 + 12);
                                    v29 = (int16_t)(v49 < 0x10000 ? v49 : 0xfffd);
                                    function_1801cebb0(v1 + 0x2ba8, &v29);
                                    v34 = v18;
                                    v33 = v19;
                                    v32 = v20;
                                    v31 = v2 == 0 ? v21 : 1;
                                    v30 = v22;
                                }
                            }
                        } else {
                            // 0x18019bafc
                            v34 = v18;
                            v33 = v19;
                            v32 = v20;
                            v31 = v21;
                            v30 = v22;
                            if ((*v10 & 64) == 0) {
                                // 0x18019bb0f
                                v43 = function_1801a4160((int64_t)g1201, *(int32_t *)(v23 + 12));
                                v44 = (char *)v43;
                                v45 = (-308 - v1 + v43) / 16;
                                v46 = v45;
                                if (a1 == 0) {
                                    // 0x18019bb0f
                                    v27 = *(char *)(v23 + 16);
                                } else {
                                    // 0x18019bb84
                                    v47 = *v44;
                                    v48 = *(char *)(v23 + 16);
                                    v27 = v47;
                                    if (v47 != v48) {
                                        // 0x18019bb99
                                        v54 = v56;
                                        v55 = v57;
                                        if ((*(int32_t *)(v16 + 4 * (int64_t)(v46 / 32)) & 1 << (v46 & 31)) != 0) {
                                            // break -> 0x18019bdad
                                            return 0;
                                        }
                                        // 0x18019bbf6
                                        v27 = v48;
                                        v54 = v56;
                                        v55 = v57;
                                        if ((v21 & 255 || v22) != 0) {
                                            // break -> 0x18019bdad
                                            return 0;
                                        }
                                    }
                                }
                                // 0x18019bc0b
                                *v44 = v27;
                                v50 = __asm_movss(__asm_movss_31(*(int32_t *)(v23 + 20)));
                                *(int32_t *)(v43 + 12) = (int32_t)v50;
                                function_1801cd5d0(&v4, v46);
                                v28 = 0x100000000 * v45;
                                *(char *)(v28 / 0x100000000 + v17) = *v44;
                                v51 = *(int32_t *)(v1 + 0x2bb8 + v28 / 0x40000000);
                                v34 = v18;
                                v33 = v19;
                                v32 = 1;
                                v31 = v21;
                                v30 = v22;
                                if (v51 != -1) {
                                    // 0x18019bc72
                                    *(char *)(v17 + (int64_t)v51) = *v44;
                                    v34 = v18;
                                    v33 = v19;
                                    v32 = 1;
                                    v31 = v21;
                                    v30 = v22;
                                }
                            }
                        }
                    } else {
                        if (a1 != 0) {
                            // 0x18019ba74
                            v54 = v56;
                            v55 = v57;
                            if ((v18 & 255 || v22) != 0) {
                                // break -> 0x18019bdad
                                return 0;
                            }
                        }
                        // 0x18019ba89
                        v40 = __asm_movss(__asm_addss(__asm_movss_31(*v13), *(int32_t *)(v23 + 12)));
                        *v13 = (int32_t)v40;
                        v41 = __asm_movss(__asm_addss(__asm_movss_31(*v14), *(int32_t *)(v23 + 16)));
                        *v14 = (int32_t)v41;
                        *v12 = *(int32_t *)(v23 + 20);
                        v34 = v18;
                        v33 = 1;
                        v32 = v20;
                        v31 = v21;
                        v30 = v22;
                    }
                } else {
                    // 0x18019b98d
                    v35 = *(int32_t *)(v23 + 12);
                    if (a1 == 0) {
                        // 0x18019b98d
                        v26 = 1 << (v35 & 31);
                        v25 = (int32_t *)(v23 + 20);
                    } else {
                        // 0x18019b9a5
                        v39 = 1 << (v35 & 31);
                        v54 = v56;
                        v55 = v57;
                        if ((v39 & v22 || v19 & 255) != 0) {
                            // break -> 0x18019bdad
                            return 0;
                        }
                        // 0x18019b9e7
                        v42 = (int32_t *)(v23 + 20);
                        v26 = v39;
                        v25 = v42;
                        v54 = v56;
                        v55 = v57;
                        if (!(((v18 & 255) == 0 | *v42 != 1))) {
                            // break -> 0x18019bdad
                            return 0;
                        }
                    }
                    // 0x18019ba00
                    *(char *)(v1 + 280 + (int64_t)v35) = *(char *)(v23 + 16);
                    *v12 = *v25;
                    v34 = v18;
                    v33 = v19;
                    v32 = v20;
                    v31 = v21;
                    v30 = v26 | v22;
                }
            } else {
                // 0x18019b8bf
                v34 = v18;
                v33 = v19;
                v32 = v20;
                v31 = v21;
                v30 = v22;
                if (*(char *)(v1 + 229) == 0) {
                    // 0x18019b8d1
                    v36 = __asm_movss(__asm_movss_31(*(int32_t *)(v23 + 16)));
                    v37 = __asm_movss(__asm_movss_31(*(int32_t *)(v23 + 12)));
                    v38 = __asm_movss(__asm_movss_31((int32_t)v37));
                    __asm_movss(__asm_movss_31((int32_t)v36));
                    if (a1 != 0) {
                        // 0x18019b927
                        v54 = v56;
                        v55 = v57;
                        if (v22 != 0) {
                            // break -> 0x18019bdad
                            return 0;
                        }
                        // 0x18019b92e
                        v54 = v56;
                        v55 = v57;
                        if ((v19 & 255) != 0) {
                            // break -> 0x18019bdad
                            return 0;
                        }
                        // 0x18019b937
                        v54 = v56;
                        v55 = v57;
                        if (((v20 | v21) & 255) != 0) {
                            // break -> 0x18019bdad
                            return 0;
                        }
                    }
                    // 0x18019b94e
                    *(int64_t *)(v1 + 272) = 0x100000000 * v38 / 0x100000000;
                    *v12 = *(int32_t *)(v23 + 20);
                    v34 = 1;
                    v33 = v19;
                    v32 = v20;
                    v31 = v21;
                    v30 = v22;
                }
            }
            // 0x18019b855
            v52 = v56 + 1;
            v53 = v52;
            v54 = v52;
            v55 = v53;
        }
        int64_t v58 = v55 & 0xffffffff; // 0x18019bdc1
        if (v58 != 0) {
            int32_t v59 = 0; // 0x18019bdbb
            function_1801cf010(v1 + 0x4000, (int64_t *)*v11);
            v59++;
            int64_t v60 = v59;
            while (v58 > v60) {
                // 0x18019bdcb
                function_1801cf010(v1 + 0x4000, (int64_t *)(*v11 + 28 * v60));
                v59++;
                v60 = v59;
            }
        }
        // 0x18019be29
        v8 = 0;
        v9 = v55;
        if (v54 != 0) {
            // 0x18019be34
            v8 = v54;
            v9 = v55;
            if ((*(int32_t *)(v1 + 0x6184) & 64) != 0) {
                int64_t v61 = 0; // 0x18019be6d
                v8 = v54;
                v9 = v55;
                if (*v7 != 0) {
                    int64_t v62 = v61 < v58 ? (int64_t)"Processed" : (int64_t)"Remaining"; // 0x18019bee5
                    function_1801c4e10(v62, 0x100000000 * (*v11 + 28 * v61) / 0x100000000);
                    int32_t v63 = 1; // 0x18019be58
                    int64_t v64 = v63;
                    v61 = v64;
                    int32_t v65 = v63; // 0x18019be6d
                    v8 = v54;
                    v9 = v55;
                    while (v64 < (int64_t)*v7) {
                        // 0x18019be73
                        v62 = v61 < v58 ? (int64_t)"Processed" : (int64_t)"Remaining";
                        function_1801c4e10(v62, 0x100000000 * (*v11 + 28 * v61) / 0x100000000);
                        v63 = v65 + 1;
                        v64 = v63;
                        v61 = v64;
                        v65 = v63;
                        v8 = v54;
                        v9 = v55;
                    }
                }
            }
        }
    }
    // 0x18019bef8
    int64_t v66; // 0x18019b7b0
    if (*v7 != v8) {
        int64_t v67 = *(int64_t *)(v1 + 0x3ff8); // 0x18019bf4f
        function_1801ce260(v6, v67, v67 + 28 * v9);
        v66 = v67;
    } else {
        // 0x18019bf09
        function_1801cff50(v6, 0);
        v66 = 0;
    }
    // 0x18019bf73
    if (*(char *)(v1 + 0x2ba0) != 0) {
        // 0x18019bf83
        function_180192860(v3, v66);
        function_1801929b0(v3);
    }
    // 0x18019bfa6
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18019bfd0 - 0x18019c61e
int64_t function_18019bfd0(void) {
    int64_t v1 = (int64_t)g1201; // 0x18019bfd7
    int32_t v2 = __asm_movss(__asm_movss_31(0x40800000)); // bp-48, 0x18019bff9
    __asm_movss(__asm_movss_31(0x40800000));
    int32_t * v3 = (int32_t *)(v1 + 0x3968); // 0x18019c056
    int128_t v4 = __asm_movss_31(*v3); // 0x18019c056
    int64_t v5 = (int64_t)&v2 | 4; // 0x18019c05b
    __asm_comiss(v4, *(int128_t *)v5);
    int64_t v6; // 0x18019bfd0
    if (g1201 > (int32_t *)-0x3965) {
        // 0x18019c076
        v6 = __asm_movss(__asm_movss_31(*(int32_t *)v5));
    } else {
        // 0x18019c061
        v6 = __asm_movss(__asm_movss_31(*v3));
    }
    int32_t * v7 = (int32_t *)(v1 + 0x3964); // 0x18019c03e
    __asm_comiss(__asm_movss_31(*v7), *(int128_t *)&v2);
    int64_t v8; // 0x18019bfd0
    if (g1201 > (int32_t *)-0x3965) {
        // 0x18019c0b6
        v8 = __asm_movss(__asm_movss_31(v2));
    } else {
        // 0x18019c0a2
        v8 = __asm_movss(__asm_movss_31(*v7));
    }
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x18019c0ce
    __asm_movss(__asm_movss_31((int32_t)v6));
    *(int64_t *)(v1 + 0x406c) = 0x100000000 * v9 / 0x100000000;
    int64_t v10 = v1 + 0x4088; // 0x18019c104
    int64_t v11 = v1 + 0x4080; // 0x18019c10f
    function_18019c630(v1 + 272, 0, v11, v10, 0);
    int64_t * v12 = (int64_t *)v11; // 0x18019c14c
    int64_t v13 = *v12; // 0x18019c14c
    *(int64_t *)(v1 + 0x4090) = v13;
    int64_t v14 = function_1801a1370(v13); // 0x18019c15a
    int32_t v15 = 0; // 0x18019c170
    if (v14 != 0) {
        int64_t v16 = *v12; // 0x18019c177
        v15 = 0;
        if (v16 != 0) {
            int64_t v17 = *(int64_t *)(v16 + 912); // 0x18019c195
            v15 = (function_180199370(v17, v14) & 255) == 0;
        }
    }
    int64_t result = v1 + 8; // 0x18019bfe8
    int32_t * v18 = (int32_t *)result; // 0x18019bfec
    int32_t v19 = *(int32_t *)(v1 + 0x4b68); // 0x18019c1c5
    int64_t v20 = v1 + 0x2b08;
    int64_t v21 = 0;
    char v22 = 0; // 0x18019c2e2
    int32_t v23 = -1;
    int64_t v24; // 0x18019bfd0
    int32_t v25; // 0x18019bfd0
    int32_t v26; // 0x18019bfd0
    char v27; // 0x18019c2d8
    while (true) {
      lab_0x18019c22f:
        // 0x18019c22f
        v25 = v23;
        v24 = v21;
        int64_t v28 = v24 + v1;
        if (*(char *)(v28 + 0x2b30) != 0) {
            // 0x18019c249
            *(char *)(v28 + 0x2b53) = (char)(v19 <= 0 != (*v12 == 0));
            *(char *)(v28 + 0x2b58) = (char)(v14 == 0 != (*v12 == 0));
        }
        // 0x18019c2c9
        v27 = *(char *)(v28 + 280);
        if (v27 != 0) {
            goto lab_0x18019c312;
        } else {
            // 0x18019c2fc
            v26 = v25;
            if (*(char *)(v28 + 0x2b4e) == 0) {
                goto lab_0x18019c34a;
            } else {
                goto lab_0x18019c312;
            }
        }
    }
  lab_0x18019c34f:;
    int32_t v29 = 1; // 0x18019c354
    int32_t v30; // 0x18019bfd0
    int32_t v31; // 0x18019bfd0
    if (v23 == -1) {
        goto lab_0x18019c3a5;
    } else {
        int64_t v32 = (int64_t)v23 + v1;
        int32_t v33 = *(char *)(v32 + 0x2b53) != 0;
        v29 = v33;
        v31 = v33;
        v30 = 0;
        if (*(char *)(v32 + 0x2b58) != 0) {
            goto lab_0x18019c3a5;
        } else {
            goto lab_0x18019c3aa;
        }
    }
  lab_0x18019c312:
    // 0x18019c312
    v26 = v24;
    if (v25 != -1) {
        int128_t v34 = __asm_movsd(*(int64_t *)(8 * (int64_t)v25 + v20)); // 0x18019c32d
        __asm_comisd(v34, *(int128_t *)(8 * v24 + v20));
        v26 = v25;
    }
    goto lab_0x18019c34a;
  lab_0x18019c34a:
    // 0x18019c34a
    v22 |= v27;
    v23 = v26;
    v21 = v24 + 1;
    if (v21 == 5) {
        // break -> 0x18019c34f
        goto lab_0x18019c34f;
    }
    goto lab_0x18019c22f;
  lab_0x18019c3a5:
    // 0x18019c3a5
    v31 = v29;
    v30 = 1;
    goto lab_0x18019c3aa;
  lab_0x18019c3aa:;
    // 0x18019c3aa
    bool v35; // 0x18019bfd0
    if (*(char *)(v1 + 0x4dc4) == 0) {
        // 0x18019c3dc
        v35 = false;
        goto lab_0x18019c3e1;
    } else {
        // 0x18019c3c3
        v35 = true;
        if ((*(int32_t *)(v1 + 0x4dc8) & 16) == 0) {
            // 0x18019c3dc
            v35 = false;
            goto lab_0x18019c3e1;
        } else {
            goto lab_0x18019c3e1;
        }
    }
  lab_0x18019c3e1:
    // 0x18019c3e1
    if ((*v18 & 16 || v15) == 0 != (v31 != 0 || v35)) {
        // 0x18019c40a
        *(int64_t *)v10 = 0;
        *v12 = 0;
    }
    int32_t v36 = *(int32_t *)(v1 + 0x6358); // 0x18019c42f
    char v37; // 0x18019bfd0
    int32_t v38; // 0x18019c2e2
    if (v36 == -1) {
        // 0x18019c47d
        v38 = v22;
        if (v31 == 0) {
            // 0x18019c49e
            v37 = 0;
            if (v19 > 0) {
                // 0x18019c4b1
                v37 = 1;
                goto lab_0x18019c4b9;
            } else {
                goto lab_0x18019c4b9;
            }
        } else {
            // 0x18019c486
            if (*v12 != 0) {
                // 0x18019c4b1
                v37 = 1;
                goto lab_0x18019c4b9;
            } else {
                // 0x18019c495
                v37 = 0;
                if (v19 <= 0 == (v38 & 255) == 0) {
                    goto lab_0x18019c4b9;
                } else {
                    // 0x18019c4b1
                    v37 = 1;
                    goto lab_0x18019c4b9;
                }
            }
        }
    } else {
        char v39 = v36 != 0; // 0x18019c45d
        *(char *)(v1 + 0x2ad4) = v39;
        *(char *)(v1 + 226) = v39;
        goto lab_0x18019c515;
    }
  lab_0x18019c515:;
    char * v40 = (char *)(v1 + 227); // 0x18019c54a
    *v40 = (char)(v14 == 0 != (*(int32_t *)(v1 + 0x40e4) == 0));
    if (*(char *)(v1 + 231) != 0) {
        int32_t v41 = *v18; // 0x18019c565
        if ((v41 & 1) != 0) {
            if ((v41 & 8) == 0) {
                // 0x18019c57c
                *v40 = 1;
            }
        }
    }
    int32_t v42 = *(int32_t *)(v1 + 0x635c); // 0x18019c58d
    if (v42 != -1) {
        // 0x18019c596
        *v40 = (char)(v42 != 0);
    }
    // 0x18019c5c6
    *(char *)(v1 + 228) = (char)(*(int32_t *)(v1 + 0x6360) > 0);
    return result;
  lab_0x18019c4b9:
    // 0x18019c4b9
    *(char *)(v1 + 226) = v37;
    if (v30 == 0) {
        // 0x18019c4ea
        if (v14 != 0) {
            // 0x18019c505
            *(char *)(v1 + 0x2ad4) = 1;
            goto lab_0x18019c515;
        } else {
            // 0x18019c505
            *(char *)(v1 + 0x2ad4) = 0;
            goto lab_0x18019c515;
        }
    } else {
        // 0x18019c4d2
        if (*v12 != 0) {
            // 0x18019c505
            *(char *)(v1 + 0x2ad4) = 1;
            goto lab_0x18019c515;
        } else {
            // 0x18019c4e1
            if (v14 == 0 == (v38 & 255) == 0) {
                // 0x18019c505
                *(char *)(v1 + 0x2ad4) = 0;
                goto lab_0x18019c515;
            } else {
                // 0x18019c505
                *(char *)(v1 + 0x2ad4) = 1;
                goto lab_0x18019c515;
            }
        }
    }
}

// Address range: 0x18019c630 - 0x18019ca67
int64_t function_18019c630(int64_t a1, int32_t a2, int64_t a3, int64_t a4, char a5) {
    int64_t v1 = (int64_t)g1201;
    int64_t v2 = 0; // 0x18019c672
    if ((a2 & 255) == 0) {
        int64_t v3 = *(int64_t *)(v1 + 0x4098); // 0x18019c679
        v2 = 0;
        if (v3 != 0) {
            // 0x18019c683
            v2 = (*(int32_t *)(v3 + 20) & 512) != 0 ? 0 : v3;
        }
    }
    int64_t v4 = *(int64_t *)(v1 + 0x3964); // bp-120, 0x18019c6b8
    char v5 = *(char *)(v1 + 95); // 0x18019c6c5
    int64_t v6 = *(int64_t *)(v5 == 0 ? (int64_t)&v4 : v1 + 0x406c); // 0x18019c70a
    int32_t v7 = *(int32_t *)(v1 + 0x4018) - 1;
    int64_t v8 = v2; // 0x18019c737
    int64_t v9 = 0; // 0x18019c737
    int64_t v10; // 0x18019c630
    int64_t v11; // 0x18019c630
    int64_t v12; // 0x18019c630
    int64_t v13; // 0x18019c630
    int64_t v14; // 0x18019c630
    int64_t v15; // 0x18019c630
    int64_t v16; // 0x18019c630
    int32_t v17; // 0x18019c630
    int64_t v18; // 0x18019c775
    if (v7 >= 0) {
        // 0x18019c73d
        int64_t v19; // bp-56, 0x18019c630
        int64_t v20 = &v19;
        int64_t v21; // bp-24, 0x18019c630
        int64_t v22 = &v21;
        v10 = v7;
        v17 = v7;
        v12 = 0;
        v15 = v2;
        while (true) {
          lab_0x18019c73d:
            // 0x18019c73d
            v16 = v15;
            v13 = v12;
            v18 = *(int64_t *)(*(int64_t *)(v1 + 0x4020) + 8 * v10);
            v14 = v16;
            v11 = v13;
            if (*(char *)(v18 + 202) == 0) {
                goto lab_0x18019c728;
            } else {
                // 0x18019c78d
                v14 = v16;
                v11 = v13;
                if (*(char *)(v18 + 210) == 0) {
                    int32_t v23 = *(int32_t *)(v18 + 20); // 0x18019c7a4
                    v14 = v16;
                    v11 = v13;
                    if ((v23 & 512) == 0) {
                        // 0x18019c7b5
                        v19 = (v23 & 66) == 0 ? v6 : v4;
                        v14 = v16;
                        v11 = v13;
                        if ((function_1801ccd40((int64_t *)(v18 + 512), a1, v20) & 255) != 0) {
                            int16_t * v24 = (int16_t *)(v18 + 624); // 0x18019c84a
                            if (*v24 == 0) {
                                goto lab_0x18019c9af;
                            } else {
                                int128_t v25 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v18 + 630)); // 0x18019c865
                                int64_t v26 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(v18 + 44)), v25))); // 0x18019c87a
                                int128_t v27 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v18 + 628)); // 0x18019c88c
                                int128_t v28 = __asm_addss_34(__asm_movss_31(*(int32_t *)(v18 + 40)), v27); // 0x18019c89a
                                int64_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v28)))); // 0x18019c8ad
                                int64_t v30 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x18019c8b9
                                int64_t v31 = __asm_movss(__asm_cvtsi2ss((int32_t)*(int16_t *)(v18 + 626))); // 0x18019c8cf
                                int64_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss((int32_t)*v24)))); // 0x18019c8f1
                                int64_t v33 = __asm_movss(__asm_movss_31((int32_t)v31)); // 0x18019c900
                                int64_t v34 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v30), (int32_t)v33)); // 0x18019c918
                                int64_t v35 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v29), (int32_t)v32)); // 0x18019c92d
                                __asm_movss(__asm_movss_31((int32_t)v35));
                                __asm_movss(__asm_movss_31((int32_t)v34));
                                v21 = 0x100000000 * v29 / 0x100000000;
                                v14 = v16;
                                v11 = v13;
                                if ((function_1801cccc0(v22, a1) & 255) == 0) {
                                    goto lab_0x18019c9af;
                                } else {
                                    goto lab_0x18019c728;
                                }
                            }
                        } else {
                            goto lab_0x18019c728;
                        }
                    } else {
                        goto lab_0x18019c728;
                    }
                } else {
                    goto lab_0x18019c728;
                }
            }
        }
    }
  lab_0x18019ca34_3:
    // 0x18019ca34
    *(int64_t *)a3 = v8;
    int64_t result = a3; // 0x18019ca4d
    if (a4 != 0) {
        // 0x18019ca4f
        *(int64_t *)a4 = v9;
        result = a4;
    }
    // 0x18019ca5f
    return result;
  lab_0x18019c728:;
    int32_t v36 = v17 - 1;
    v10--;
    v17 = v36;
    v12 = v11;
    v15 = v14;
    v8 = v14;
    v9 = v11;
    if (v36 < 0) {
        // break -> 0x18019ca34
        goto lab_0x18019ca34_3;
    }
    goto lab_0x18019c73d;
  lab_0x18019c9af:
    // 0x18019c9af
    v8 = v18;
    v9 = v13;
    if ((a2 & 255) != 0) {
        // break -> 0x18019ca34
        goto lab_0x18019ca34_3;
    }
    int64_t v37 = v13; // 0x18019c9e1
    if (v13 != 0) {
        goto lab_0x18019ca1d;
    } else {
        int64_t v38 = *(int64_t *)(v1 + 0x4098); // 0x18019c9e8
        if (v38 == 0) {
            // 0x18019ca13
            v37 = v18;
            goto lab_0x18019ca1d;
        } else {
            // 0x18019c9f2
            v37 = v13;
            if (*(int64_t *)(v18 + 912) == *(int64_t *)(v38 + 912)) {
                goto lab_0x18019ca1d;
            } else {
                // 0x18019ca13
                v37 = v18;
                goto lab_0x18019ca1d;
            }
        }
    }
  lab_0x18019ca1d:;
    int64_t v39 = v16 != 0 ? v16 : v18;
    v14 = v39;
    v11 = v37;
    v8 = v39;
    v9 = v37;
    if (v39 != 0 && v37 != 0) {
        // break -> 0x18019ca34
        goto lab_0x18019ca34_3;
    }
    goto lab_0x18019c728;
}

// Address range: 0x18019ca70 - 0x18019cb9c
int64_t function_18019ca70(int64_t a1, int64_t a2) {
    int64_t result = (int64_t)g1201; // 0x18019ca79
    function_180199be0(a1, 0);
    function_18019e5d0(*(int32_t *)(a1 + 140), a1);
    *(char *)(result + 0x4c02) = 1;
    int64_t * v1 = (int64_t *)(a1 + 912); // 0x18019cab7
    int64_t v2 = *v1; // 0x18019cab7
    int128_t v3 = __asm_movss_31(*(int32_t *)(result + 0x2ae4)); // 0x18019caec
    int64_t v4 = __asm_movss(__asm_subss(v3, *(int32_t *)(v2 + 44))); // 0x18019caf6
    int128_t v5 = __asm_movss_31(*(int32_t *)(result + 0x2ae0)); // 0x18019cb06
    int64_t v6 = __asm_movss(__asm_subss(v5, *(int32_t *)(v2 + 40))); // 0x18019cb0e
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x18019cb1a
    __asm_movss(__asm_movss_31((int32_t)v4));
    *(int64_t *)(result + 0x40fc) = 0x100000000 * v7 / 0x100000000;
    *(char *)(result + 0x40f2) = 1;
    function_1801a4a10(result);
    if ((*(int32_t *)(a1 + 20) & 4) != 0) {
        // 0x18019cb97
        return 0;
    }
    // 0x18019cb62
    result = 0;
    if ((*(int32_t *)(*v1 + 20) & 4) == 0) {
        // 0x18019cb86
        *(int64_t *)(result + 0x4098) = a1;
    }
    // 0x18019cb97
    return result;
}

// Address range: 0x18019cbb0 - 0x18019cd48
int64_t function_18019cbb0(void) {
    int64_t result = (int64_t)g1201; // 0x18019cbb4
    int64_t * v1 = (int64_t *)(result + 0x4098); // 0x18019cbc5
    int64_t v2; // 0x18019cbb0
    if (*v1 == 0) {
        int64_t result2 = *(int64_t *)(result + 0x4108); // 0x18019cce9
        if (result2 == 0) {
            // 0x18019cd43
            return result;
        }
        int32_t v3 = *(int32_t *)(result + 0x40e4); // 0x18019cd04
        if (*(int32_t *)(result2 + 140) != v3) {
            // 0x18019cd43
            return result2;
        }
        // 0x18019cd12
        function_18019ead0(v3);
        unsigned char v4 = *(char *)(result + 280); // 0x18019cd31
        int64_t result3 = v4; // 0x18019cd3b
        if (v4 == 0) {
            // 0x18019cd3d
            result3 = function_18019e9f0(result, v2);
        }
        // 0x18019cd43
        return result3;
    }
    // 0x18019cbd3
    function_18019ead0(*(int32_t *)(result + 0x40e4));
    int64_t v5 = result; // 0x18019cc13
    if (*(char *)(result + 280) != 0) {
        // 0x18019cc19
        v5 = result + 272;
        if ((function_18018ece0((int32_t)v5) & 255) != 0) {
            int128_t v6 = __asm_movss_31(*(int32_t *)(result + 276)); // 0x18019cc61
            int64_t v7 = __asm_movss(__asm_subss(v6, *(int32_t *)(result + 0x4100))); // 0x18019cc6b
            int128_t v8 = __asm_subss(__asm_movss_31(*(int32_t *)v5), *(int32_t *)(result + 0x40fc)); // 0x18019cc7f
            int32_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v8))); // bp-32, 0x18019cc8f
            __asm_movss(__asm_movss_31((int32_t)v7));
            function_180199560(*(int64_t *)(*v1 + 912), (int64_t)&v9, 1);
            // 0x18019cd43
            return function_180199be0(*v1, 0);
        }
    }
    // 0x18019cccc
    *v1 = 0;
    // 0x18019cd43
    return function_18019e9f0(v5, v2);
}

// Address range: 0x18019cd50 - 0x18019cfe0
int64_t function_18019cd50(int32_t a1) {
    int64_t result = (int64_t)g1201; // 0x18019cd57
    if (*(int32_t *)(result + 0x40e4) != 0 || *(int32_t *)(result + 0x40d0) != 0) {
        // 0x18019cfd8
        return result;
    }
    int64_t v1 = *(int64_t *)(result + 0x4ba8); // 0x18019cd89
    if (v1 != 0) {
        unsigned char result2 = *(char *)(v1 + 209); // 0x18019cd9f
        if (result2 != 0) {
            // 0x18019cfd8
            return result2;
        }
    }
    // 0x18019cdaf
    int64_t v2; // 0x18019cd50
    int64_t v3; // 0x18019cd50
    int64_t v4; // 0x18019cd50
    int64_t v5; // 0x18019cde8
    int32_t * v6; // 0x18019cd50
    if (*(char *)(result + 0x2b30) == 0) {
        goto lab_0x18019cf2e;
    } else {
        int64_t * v7 = (int64_t *)(result + 0x4080); // 0x18019cdd2
        int64_t v8 = *v7; // 0x18019cdd2
        if (v8 == 0) {
            goto lab_0x18019cf12;
        } else {
            // 0x18019cdff
            v5 = *(int64_t *)(v8 + 912);
            if (v5 == 0) {
                goto lab_0x18019cf12;
            } else {
                // 0x18019ce11
                v6 = (int32_t *)(v5 + 20);
                v2 = v8;
                if ((*v6 & 0x4000000) == 0) {
                    goto lab_0x18019ce6c;
                } else {
                    // 0x18019ce22
                    v4 = 2048;
                    if ((function_1801a10c0(*(int32_t *)(v5 + 148), 2048) & 255) != 0) {
                        // 0x18019ce22
                        v2 = *v7;
                        v3 = 2048;
                        goto lab_0x18019ce6c;
                    } else {
                        goto lab_0x18019cf2e;
                    }
                }
            }
        }
    }
  lab_0x18019cf2e:
    // 0x18019cf2e
    if (*(char *)(result + 0x2b31) == 0) {
        // 0x18019cfd8
        return 0;
    }
    int64_t v9 = function_1801a1370(result); // 0x18019cf4c
    int64_t * v10 = (int64_t *)(result + 0x4080); // 0x18019cf5b
    int64_t v11 = *v10; // 0x18019cf5b
    int64_t v12 = v4; // 0x18019cf63
    int64_t v13 = v9; // 0x18019cf63
    if (v11 != 0) {
        // 0x18019cf65
        v12 = v4;
        v13 = v11;
        if (v9 != 0) {
            int64_t v14 = function_1801993d0(v11, v9); // 0x18019cf7e
            v12 = v9;
            v13 = v9;
            if ((v14 & 255) != 0) {
                // 0x18019cf6d
                v12 = v9;
                v13 = *v10;
            }
        }
    }
    // 0x18019cfd8
    return function_1801a0e50(v13, (int32_t)v12 & -256 | 1);
  lab_0x18019cf12:
    if (v1 != 0) {
        // 0x18019cf21
        function_180199be0(0, 2);
        v4 = 2;
    }
    goto lab_0x18019cf2e;
  lab_0x18019ce6c:
    // 0x18019ce6c
    function_18019ca70(v2, v3);
    int64_t v15 = v3; // 0x18019ce89
    if (*(char *)(result + 96) != 0) {
        // 0x18019ce8b
        v15 = v3;
        if ((*v6 & 1) == 0) {
            // 0x18019ce9a
            int64_t v16; // bp-32, 0x18019cd50
            int64_t v17 = function_1801cd640(v5, &v16); // 0x18019cea4
            int64_t v18 = result + 0x2ae0; // 0x18019cebc
            int64_t v19 = function_1801cccc0(v17, v18); // 0x18019cecc
            v15 = v18;
            if ((v19 & 255) == 0) {
                // 0x18019ced8
                *(int64_t *)(result + 0x4098) = 0;
                v15 = v18;
            }
        }
    }
    // 0x18019cee8
    v4 = v15;
    if (*(char *)(result + 0x40e1) != 0) {
        // 0x18019cef8
        *(int64_t *)(result + 0x4098) = 0;
        v4 = v15;
    }
    goto lab_0x18019cf2e;
}

// Address range: 0x18019cff0 - 0x18019d08f
int64_t function_18019cff0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 0x60e0; // 0x18019d00d
    function_1801cef30(v1, a2);
    int32_t * v2 = (int32_t *)(a1 + 0x60f0); // 0x18019d02c
    int32_t v3 = *v2 + 1; // 0x18019d032
    *v2 = v3;
    int64_t v4 = *(int64_t *)(a1 + 0x60e8); // 0x18019d06b
    *(int32_t *)(32 * (int64_t)(*(int32_t *)v1 - 1) + v4) = v3;
    return (int64_t)*v2;
}

// Address range: 0x18019d0a0 - 0x18019d144
int64_t function_18019d0a0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 0x60e8);
    int32_t v2 = *(int32_t *)(a1 + 0x60e0); // 0x18019d0e3
    int64_t result = 32 * (int64_t)v2 + v1; // 0x18019d0ef
    if (v2 == 0) {
        // 0x18019d13f
        return result;
    }
    // 0x18019d11b
    if (*(int32_t *)v1 == (int32_t)a2) {
        // 0x18019d131
        *(int32_t *)(v1 + 4) = 7;
    }
    int64_t v3 = v1 + 32; // 0x18019d108
    while (result != v3) {
        int64_t v4 = v3;
        if (*(int32_t *)v4 == (int32_t)a2) {
            // 0x18019d131
            *(int32_t *)(v4 + 4) = 7;
        }
        // 0x18019d13d
        v3 = v4 + 32;
    }
    // 0x18019d13f
    return result;
}

// Address range: 0x18019d150 - 0x18019d20b
int64_t function_18019d150(int64_t a1, int32_t a2) {
    // 0x18019d150
    return 32 * (int64_t)*(int32_t *)(a1 + 0x60e0) + *(int64_t *)(a1 + 0x60e8);
}

// Address range: 0x18019d220 - 0x18019d239
int64_t function_18019d220(int64_t result, int64_t a2) {
    // 0x18019d220
    *(int64_t *)(result + 32) = a2;
    return result;
}

// Address range: 0x18019d240 - 0x18019d279
int64_t function_18019d240(int64_t a1) {
    int64_t result = (int64_t)g1201;
    int128_t v1; // 0x18019d240
    int128_t v2 = __asm_xorps(v1, v1); // 0x18019d253
    int64_t v3 = result + 0x609c;
    __asm_comiss(v2, *(int128_t *)v3);
    uint64_t v4; // 0x18019d240
    if (v4 >= 24) {
        int32_t v5 = *(int32_t *)(result + 28); // 0x18019d267
        *(int32_t *)v3 = (int32_t)__asm_movss(__asm_movss_31(v5));
    }
    // 0x18019d274
    return result;
}

// Address range: 0x18019d280 - 0x18019d2cf
int64_t function_18019d280(int64_t a1) {
    uint32_t v1 = *(int32_t *)(a1 + 20) & 256; // 0x18019d29c
    int64_t result = v1; // 0x18019d2a3
    if (v1 == 0) {
        // 0x18019d2a5
        result = (int64_t)g1201;
        int128_t v2; // 0x18019d280
        int128_t v3 = __asm_xorps(v2, v2); // 0x18019d2a9
        int64_t v4 = result + 0x609c;
        __asm_comiss(v3, *(int128_t *)v4);
        int32_t v5 = *(int32_t *)(result + 28); // 0x18019d2bd
        *(int32_t *)v4 = (int32_t)__asm_movss(__asm_movss_31(v5));
    }
    // 0x18019d2ca
    return result;
}

// Address range: 0x18019d2e0 - 0x18019d3a6
int64_t function_18019d2e0(void) {
    int64_t v1 = (int64_t)g1201; // 0x18019d2e4
    function_1801cc890(v1 + 0x60a0);
    return 72 * (int64_t)*(int32_t *)(v1 + 0x60b0) + *(int64_t *)(v1 + 0x60b8);
}

// Address range: 0x18019d3b0 - 0x18019d3ea
int64_t function_18019d3b0(int64_t * a1) {
    // 0x18019d3b0
    return function_1801cf2b0((int64_t)g1201 + 0x60b0, (int64_t)a1);
}

// Address range: 0x18019d3f0 - 0x18019d441
int64_t function_18019d3f0(int64_t a1) {
    // 0x18019d3f0
    int64_t v1; // 0x18019d3f0
    int64_t v2; // 0x18019d3f0
    int64_t v3 = function_18019d450(a1, v2, v1); // 0x18019d40a
    int64_t result = 0; // 0x18019d41a
    if (v3 != 0) {
        // 0x18019d41c
        result = function_1801ce3f0((int64_t)g1201 + 0x60b0, v3);
    }
    // 0x18019d43c
    return result;
}

// Address range: 0x18019d450 - 0x18019d508
int64_t function_18019d450(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x18019d459
    int32_t v2 = function_180194e30((char *)a1, 0, 0); // 0x18019d474
    int64_t v3 = *(int64_t *)(v1 + 0x60b8);
    int64_t v4 = 0x100000000 * (72 * (int64_t)*(int32_t *)(v1 + 0x60b0) + v3) / 0x100000000; // 0x18019d4d4
    if (v3 == v4) {
        // 0x18019d503
        return 0;
    }
    int64_t v5 = v3; // 0x18019d4de
    int64_t result = v5; // 0x18019d4f6
    while (*(int32_t *)(v5 + 8) != v2) {
        // 0x18019d4ff
        v5 += 72;
        result = 0;
        if (v5 == v4) {
            // break -> 0x18019d503
            return 0;
        }
        result = v5;
    }
    // 0x18019d503
    return result;
}

// Address range: 0x18019d510 - 0x18019d64b
int64_t function_18019d510(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18019d51c
    int64_t v2 = a1; // 0x18019d536
    if (*(char *)(v1 + 128) == 0) {
        int64_t v3 = function_18026bf00(a1, "###"); // 0x18019d547
        v2 = v3 == 0 ? a1 : v3;
    }
    int64_t v4 = function_18029e0a0(v2); // 0x18019d56e
    int64_t v5 = v4 + 17; // 0x18019d57d
    int64_t result = function_1801cdbe0(v1 + 0x60c0, v5); // 0x18019d5a0
    if (result != 0) {
        // 0x18019d5d0
        function_1801caa90(result, v5);
    }
    int64_t v6 = function_180194e30((char *)v2, (int32_t)v4, 0); // 0x18019d607
    *(int32_t *)result = (int32_t)v6;
    int64_t v7; // 0x18019d510
    function_18029d4e0(result + 16, v2, 0x100000000 * v4 / 0x100000000 + 1, v7);
    return result;
}

// Address range: 0x18019d660 - 0x18019d719
int64_t function_18019d660(int32_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18019d668
    int64_t v2 = *(int64_t *)(v1 + 0x60c8); // 0x18019d692
    if (v2 == 0) {
        // 0x18019d714
        return 0;
    }
    int64_t v3 = 0x100000000 * v2 + 0x400000000;
    if (v3 == 0) {
        // 0x18019d714
        return 0;
    }
    int64_t v4 = v3 / 0x100000000;
    if (*(int32_t *)v4 == a1) {
        // 0x18019d6fc
        if (*(char *)(v4 + 15) == 0) {
            // break -> 0x18019d714
            return 0;
        }
    }
    int64_t v5 = function_1801cea50(v1 + 0x60c0, v4); // 0x18019d6dd
    int64_t result = 0; // 0x18019d6ed
    while (v5 != 0) {
        // 0x18019d6ef
        v4 = v5;
        if (*(int32_t *)v4 == a1) {
            // 0x18019d6fc
            result = v4;
            if (*(char *)(v4 + 15) == 0) {
                // break -> 0x18019d714
                return 0;
            }
        }
        // 0x18019d710
        v5 = function_1801cea50(v1 + 0x60c0, v4);
        result = 0;
    }
    // 0x18019d714
    return result;
}

// Address range: 0x18019d720 - 0x18019d786
int64_t function_18019d720(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 684); // 0x18019d73a
    int64_t result; // 0x18019d720
    if (v1 == -1) {
        // 0x18019d774
        result = function_18019d660(*(int32_t *)(a1 + 16));
    } else {
        int64_t v2 = *(int64_t *)((int64_t)g1201 + 0x60c8); // 0x18019d764
        result = v2 + (int64_t)v1;
    }
    // 0x18019d781
    return result;
}

// Address range: 0x18019d790 - 0x18019d825
int64_t function_18019d790(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_180198fd0(a1, a2, a3); // 0x18019d79e
    int64_t result; // 0x18019d790
    if (v1 == 0) {
        // 0x18019d7ea
        result = function_18019d660((int32_t)function_180194e30((char *)a1, 0, 0));
    } else {
        int32_t * v2 = (int32_t *)(v1 + 20); // 0x18019d7b5
        *v2 = *v2 | 256;
        function_1801c2430(v1, 0, a3);
        result = function_18019d720(v1);
    }
    // 0x18019d805
    if (result != 0) {
        // 0x18019d817
        *(char *)(result + 15) = 1;
    }
    // 0x18019d820
    return result;
}

// Address range: 0x18019d830 - 0x18019d89a
int64_t function_18019d830(int64_t * a1, int64_t a2) {
    uint64_t result = a2 & 0xffffffff;
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-16, 0x18019d830
    *(int64_t *)&v2 = v1;
    if (result == 0) {
        // 0x18019d895
        return result;
    }
    int64_t v3 = (int64_t)a1;
    int64_t v4 = *(int64_t *)(v3 + 8); // 0x18019d886
    *(int64_t *)(v1 + 0x60f8 + 8 * (int64_t)*(int32_t *)a1) = v4;
    if (result == 1) {
        // 0x18019d895
        return result;
    }
    int64_t v5 = 1; // 0x18019d861
    int64_t v6 = 16 * v5 + v3;
    int32_t v7 = *(int32_t *)v6; // 0x18019d878
    int64_t v8 = *(int64_t *)(v6 + 8); // 0x18019d886
    *(int64_t *)((int64_t)v2 + 0x60f8 + 8 * (int64_t)v7) = v8;
    v5 = (0x100000000 * v5 + 0x100000000) / 0x100000000;
    while (v5 < result) {
        // 0x18019d863
        v6 = 16 * v5 + v3;
        v7 = *(int32_t *)v6;
        v8 = *(int64_t *)(v6 + 8);
        *(int64_t *)((int64_t)v2 + 0x60f8 + 8 * (int64_t)v7) = v8;
        v5 = (0x100000000 * v5 + 0x100000000) / 0x100000000;
    }
    // 0x18019d895
    return result;
}

// Address range: 0x18019d8a0 - 0x18019d8df
int64_t function_18019d8a0(int64_t result) {
    // 0x18019d8a0
    int128_t v1; // 0x18019d8a0
    int128_t v2 = __asm_movss_31((int32_t)__asm_movss(v1)); // 0x18019d8b0
    *(int32_t *)(result + 168) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18019d8c3
    *(int32_t *)(result + 176) = (int32_t)__asm_movss(v3);
    *(int32_t *)(result + 184) = (int32_t)__asm_movss(__asm_xorps(v3, v3));
    return result;
}

// Address range: 0x18019d8f0 - 0x18019d92f
int64_t function_18019d8f0(int64_t result) {
    // 0x18019d8f0
    int128_t v1; // 0x18019d8f0
    int128_t v2 = __asm_movss_31((int32_t)__asm_movss(v1)); // 0x18019d900
    *(int32_t *)(result + 172) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18019d913
    *(int32_t *)(result + 180) = (int32_t)__asm_movss(v3);
    *(int32_t *)(result + 188) = (int32_t)__asm_movss(__asm_xorps(v3, v3));
    return result;
}

// Address range: 0x18019d940 - 0x18019d9b4
int64_t function_18019d940(int64_t result) {
    // 0x18019d940
    int128_t v1; // 0x18019d940
    int64_t v2 = __asm_movss(v1); // 0x18019d940
    int128_t v3; // 0x18019d940
    int128_t v4 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(v3)), *(int32_t *)(result + 112)); // 0x18019d95c
    int128_t v5 = __asm_subss(v4, *(int32_t *)(result + 128)); // 0x18019d966
    int32_t v6 = __asm_cvttss2si(__asm_addss(v5, *(int32_t *)(result + 152))); // 0x18019d97b
    *(int32_t *)(result + 168) = (int32_t)__asm_movss(__asm_cvtsi2ss(v6));
    int128_t v7 = __asm_movss_31((int32_t)v2); // 0x18019d995
    *(int32_t *)(result + 176) = (int32_t)__asm_movss(v7);
    *(int32_t *)(result + 184) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    return result;
}

// Address range: 0x18019d9c0 - 0x18019da34
int64_t function_18019d9c0(int64_t result) {
    // 0x18019d9c0
    int128_t v1; // 0x18019d9c0
    int64_t v2 = __asm_movss(v1); // 0x18019d9c0
    int128_t v3; // 0x18019d9c0
    int128_t v4 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(v3)), *(int32_t *)(result + 116)); // 0x18019d9dc
    int128_t v5 = __asm_subss(v4, *(int32_t *)(result + 132)); // 0x18019d9e6
    int32_t v6 = __asm_cvttss2si(__asm_addss(v5, *(int32_t *)(result + 156))); // 0x18019d9fb
    *(int32_t *)(result + 172) = (int32_t)__asm_movss(__asm_cvtsi2ss(v6));
    int128_t v7 = __asm_movss_31((int32_t)v2); // 0x18019da15
    *(int32_t *)(result + 180) = (int32_t)__asm_movss(v7);
    *(int32_t *)(result + 188) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    return result;
}

// Address range: 0x18019da40 - 0x18019da8d
int64_t function_18019da40(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18019da48
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x18019da59
    int64_t v3; // bp-24, 0x18019da40
    return function_18019dae0(&v3, v2, v1 + 0x4a5c, (int32_t)a1);
}

// Address range: 0x18019daa0 - 0x18019dad2
int64_t function_18019daa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18019daa0
    int64_t v1; // bp-24, 0x18019daa0
    return function_18019dae0(&v1, a1, a2, (int32_t)a3);
}

// Address range: 0x18019dae0 - 0x18019e5c0
int64_t function_18019dae0(int64_t * a1, uint64_t a2, int64_t a3, int32_t a4) {
    int32_t v1 = *(int32_t *)&g40;
    int32_t v2 = __asm_movss(__asm_movss_31(v1)); // bp-112, 0x18019db0f
    __asm_movss(__asm_movss_31(v1));
    int128_t v3 = __asm_movss_31(*(int32_t *)(a2 + 540)); // 0x18019db6f
    int64_t v4 = __asm_movss(__asm_addss(v3, *(int32_t *)((int64_t)&v2 + 4))); // 0x18019db79
    int128_t v5 = __asm_addss(__asm_movss_31(*(int32_t *)(a2 + 536)), v2); // 0x18019db96
    int32_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v5))); // bp-208, 0x18019dbac
    __asm_movss(__asm_movss_31((int32_t)v4));
    int32_t v7 = __asm_movss(__asm_movss_31(v1)); // bp-200, 0x18019dbdf
    __asm_movss(__asm_movss_31(v1));
    int64_t v8 = a2 + 528; // 0x18019dc21
    int128_t v9 = __asm_movss_31(*(int32_t *)(a2 + 532)); // 0x18019dc3f
    int64_t v10 = __asm_movss(__asm_subss(v9, *(int32_t *)((int64_t)&v7 + 4))); // 0x18019dc49
    int128_t v11 = __asm_subss(__asm_movss_31(*(int32_t *)v8), v7); // 0x18019dc63
    int32_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11))); // bp-176, 0x18019dc73
    __asm_movss(__asm_movss_31((int32_t)v10));
    int128_t v13 = __asm_movss_31((int32_t)*(int64_t *)&v12); // 0x18019dcc3
    int32_t v14 = __asm_movss(__asm_addss(v13, *(int32_t *)(a2 + 128))); // 0x18019dcd1
    int32_t v15 = (int32_t)*(int64_t *)&v6; // 0x18019dcd7
    __asm_comiss(__asm_movss_31(v15), (int128_t)v14);
    bool v16 = a2 > 0xfffffffffffffdef | v8 == 0; // 0x18019dce2
    int64_t v17; // 0x18019dae0
    if (v16) {
        // 0x18019dcf2
        v17 = __asm_movss(__asm_movss_31(v15));
    } else {
        // 0x18019dce4
        v17 = __asm_movss(__asm_movss_31(v14));
    }
    int64_t v18 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x18019dd04
    int64_t v19 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x18019dd10
    int128_t v20; // 0x18019dae0
    int128_t v21 = __asm_addss(__asm_movss_31((int32_t)v20), *(int32_t *)(a2 + 132)); // 0x18019dd24
    int32_t v22 = __asm_movss(v21); // 0x18019dd2c
    int128_t v23; // 0x18019dae0
    int32_t v24 = v23; // 0x18019dd32
    __asm_comiss(__asm_movss_31(v24), (int128_t)v22);
    int64_t v25; // 0x18019dae0
    if (v16) {
        // 0x18019dd4d
        v25 = __asm_movss(__asm_movss_31(v24));
    } else {
        // 0x18019dd3f
        v25 = __asm_movss(__asm_movss_31(v22));
    }
    int64_t v26 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x18019dd5f
    int64_t v27 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x18019dd6b
    int32_t v28 = a4; // 0x18019ddba
    if ((a4 & 42) == 0) {
        // 0x18019ddbc
        v28 = (*(char *)(a2 + 209) == 0 ? 2 : 32) | a4;
    }
    int64_t v29 = (int64_t)g1201;
    int64_t v30 = 0x100000000 * v19 / 0x100000000; // 0x18019dd10
    int32_t v31 = v27; // 0x18019dd6b
    int64_t v32; // 0x18019dae0
    int32_t v33 = *(int32_t *)&v32;
    __asm_comiss(__asm_movss_31(v33), (int128_t)v30);
    int128_t v34 = __asm_movss_31(v15); // 0x18019de12
    int64_t v35 = a3 + 8; // 0x18019de18
    __asm_comiss(v34, *(int128_t *)v35);
    int32_t * v36 = (int32_t *)(a3 + 4); // 0x18019de3b
    __asm_comiss(__asm_movss_31(*v36), (int128_t)v31);
    int128_t v37 = __asm_movss_31(v24); // 0x18019de4f
    int64_t v38 = a3 + 12; // 0x18019de55
    __asm_comiss(v37, *(int128_t *)v38);
    int32_t * v39 = (int32_t *)v35; // 0x18019de80
    int64_t v40 = __asm_movss(__asm_subss(__asm_movss_31(*v39), v33)); // 0x18019de89
    int64_t v41 = __asm_movss(__asm_subss(__asm_movss_31(v15), (int32_t)v30)); // 0x18019de9e
    int128_t v42 = __asm_movss_31((int32_t)v40); // 0x18019dea7
    int128_t v43 = __asm_movss_31(*(int32_t *)(v29 + 0x394c)); // 0x18019deb5
    int32_t v44 = *(int32_t *)&g41;
    __asm_comiss(__asm_movss_31((int32_t)v41), __asm_addss_34(v42, __asm_mulss(v43, v44)));
    int32_t * v45 = (int32_t *)v38; // 0x18019df21
    int64_t v46 = __asm_movss(__asm_subss(__asm_movss_31(*v45), *v36)); // 0x18019df2b
    int64_t v47 = __asm_movss(__asm_subss(__asm_movss_31(v24), v31)); // 0x18019df40
    int128_t v48 = __asm_movss_31((int32_t)v46); // 0x18019df49
    int128_t v49 = __asm_movss_31(*(int32_t *)(v29 + 0x3950)); // 0x18019df57
    __asm_comiss(__asm_movss_31((int32_t)v47), __asm_addss_34(v48, __asm_mulss(v49, v44)));
    if ((v28 & 16) != 0) {
        int128_t v50 = __asm_addss(__asm_movss_31(v33), *v39); // 0x18019e0c9
        int32_t v51 = *(int32_t *)&g38;
        int128_t v52 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(v50, v51))))); // 0x18019e0e7
        int128_t v53 = __asm_subss(v52, *(int32_t *)(a2 + 40)); // 0x18019e0f8
        __asm_movss_31(v51);
        __asm_movaps(v53);
        function_18019d940(a2);
    }
    if ((v28 & 32) != 0) {
        int128_t v54 = __asm_addss(__asm_movss_31(*v36), *v45); // 0x18019e25e
        int32_t v55 = *(int32_t *)&g38;
        int128_t v56 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(v54, v55))))); // 0x18019e27c
        int128_t v57 = __asm_subss(v56, *(int32_t *)(a2 + 44)); // 0x18019e28d
        __asm_movss_31(v55);
        __asm_movaps(v57);
        function_18019d9c0(a2);
    }
    int64_t result = (int64_t)a1;
    int32_t v58; // bp-160, 0x18019dae0
    function_1801b0180((int64_t *)&v58, a2);
    int32_t v59; // 0x18019dae0
    int64_t v60 = __asm_movss(__asm_subss(__asm_movss_31(v59), *(int32_t *)(a2 + 156))); // 0x18019e31c
    int64_t v61 = __asm_movss(__asm_subss(__asm_movss_31(v58), *(int32_t *)(a2 + 152))); // 0x18019e33a
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v61));
    int64_t v62 = __asm_movss(__asm_movss_31((int32_t)v60)); // 0x18019e369
    int32_t * v63 = (int32_t *)(result + 4); // 0x18019e369
    *v63 = (int32_t)v62;
    if ((v28 & 64) != 0) {
        // 0x18019e5b0
        return result;
    }
    // 0x18019e380
    if ((*(int32_t *)(a2 + 20) & 0x1000000) != 0) {
        int32_t v64 = (a4 & 20) == 0 ? a4 : a4 & -22 | 1;
        int32_t v65 = (v64 & 40) == 0 ? v64 : v64 & -43 | 2;
        int64_t v66 = __asm_movss(__asm_subss(__asm_movss_31(*v45), *v63)); // 0x18019e3f8
        int128_t v67 = __asm_movss_31(*v39); // 0x18019e411
        int64_t v68; // 0x18019dae0
        int32_t v69 = *(int32_t *)&v68;
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v67, v69))));
        __asm_movss(__asm_movss_31((int32_t)v66));
        int64_t v70 = __asm_movss(__asm_subss(__asm_movss_31(*v36), *v63)); // 0x18019e480
        int128_t v71 = __asm_subss(__asm_movss_31(*(int32_t *)&v32), v69); // 0x18019e49d
        int32_t v72 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v71))); // bp-128, 0x18019e4b3
        __asm_movss(__asm_movss_31((int32_t)v70));
        int64_t v73 = *(int64_t *)&v72; // bp-32, 0x18019e4e9
        int64_t v74 = *(int64_t *)(a2 + 896); // 0x18019e52c
        int64_t v75; // bp-16, 0x18019dae0
        int64_t v76 = function_18019dae0(&v75, v74, (int64_t)&v73, v65); // 0x18019e558
        int64_t v77 = __asm_movss(__asm_addss(__asm_movss_31(v69), *(int32_t *)v76)); // 0x18019e585
        *(int32_t *)a1 = (int32_t)v77;
        int64_t v78 = __asm_movss(__asm_addss(__asm_movss_31(*v63), *(int32_t *)(v76 + 4))); // 0x18019e5ab
        *v63 = (int32_t)v78;
    }
    // 0x18019e5b0
    return result;
}

// Address range: 0x18019e5d0 - 0x18019e8b1
int64_t function_18019e5d0(uint32_t a1, int64_t a2) {
    int64_t result = (int64_t)g1201; // 0x18019e5dd
    int32_t * v1 = (int32_t *)(result + 0x40e4); // 0x18019e5ee
    int32_t v2 = *v1; // 0x18019e5ee
    int32_t v3 = 0; // 0x18019e5f5
    if (v2 != 0) {
        int64_t * v4 = (int64_t *)(result + 0x4098); // 0x18019e600
        int64_t v5 = *v4; // 0x18019e600
        int32_t v6 = v2; // 0x18019e608
        if (v5 != 0) {
            // 0x18019e60a
            v6 = v2;
            if (v2 == *(int32_t *)(v5 + 140)) {
                // 0x18019e629
                if ((*(int32_t *)(result + 0x6184) & 1) != 0) {
                    // 0x18019e63b
                    int64_t v7; // 0x18019e5d0
                    int64_t v8; // 0x18019e5d0
                    function_18018fdd0("SetActiveID() cancel MovingWindow\n", a2, v8, v7);
                }
                // 0x18019e64e
                *v4 = 0;
                v6 = *v1;
            }
        }
        // 0x18019e65e
        v3 = v6;
        if (*(int32_t *)(result + 0x5028) == v6) {
            // 0x18019e676
            function_1801fe080(v6, a2);
            v3 = *v1;
        }
    }
    // 0x18019e687
    *(char *)(result + 0x40f0) = (char)(v3 != a1);
    if (v3 != a1) {
        // 0x18019e6ce
        if ((*(int32_t *)(result + 0x6184) & 1) != 0) {
            int64_t v9 = *(int64_t *)(result + 0x4108); // 0x18019e715
            int64_t v10 = &g338; // 0x18019e71d
            if (v9 != 0) {
                // 0x18019e71f
                v10 = *(int64_t *)(v9 + 8);
            }
            uint32_t v11 = *v1; // 0x18019e75b
            function_18018fdd0("SetActiveID() old:0x%08X (window \"%s\") -> new:0x%08X (window \"%s\")\n", (int64_t)v11, v10, (int64_t)a1);
        }
        // 0x18019e778
        int128_t v12; // 0x18019e5d0
        int128_t v13 = __asm_xorps(v12, v12); // 0x18019e77d
        *(int32_t *)(result + 0x40ec) = (int32_t)__asm_movss(v13);
        *(char *)(result + 0x40f3) = 0;
        *(char *)(result + 0x40f4) = 0;
        int32_t * v14 = (int32_t *)(result + 0x40f8); // 0x18019e7a5
        *v14 = *v14 | 255;
        if (a1 != 0) {
            // 0x18019e7c2
            *(int32_t *)(result + 0x4128) = a1;
            *(int32_t *)(result + 0x412c) = (int32_t)__asm_movss(__asm_xorps(v13, v13));
        }
    }
    // 0x18019e7e1
    *v1 = a1;
    *(char *)(result + 0x40f1) = 0;
    *(char *)(result + 0x40f2) = 0;
    *(int64_t *)(result + 0x4108) = a2;
    *(char *)(result + 0x40f5) = 0;
    *(char *)(result + 0x40f6) = 0;
    if (a1 == 0) {
        // 0x18019e891
        *(int32_t *)(result + 0x49f0) = 0;
        *(char *)(result + 0x49f4) = 0;
        return result;
    }
    // 0x18019e838
    *(int32_t *)(result + 0x40e8) = a1;
    if (*(int32_t *)(result + 0x4bbc) != a1) {
        // 0x18019e858
        if (*(int32_t *)(result + 0x4d6c) != a1) {
            // 0x18019e882
            *(int32_t *)(result + 0x4110) = 1;
            // 0x18019e891
            *(int32_t *)(result + 0x49f0) = 0;
            *(char *)(result + 0x49f4) = 0;
            return result;
        }
    }
    // 0x18019e882
    *(int32_t *)(result + 0x4110) = *(int32_t *)(result + 0x4bf0);
    // 0x18019e891
    *(int32_t *)(result + 0x49f0) = 0;
    *(char *)(result + 0x49f4) = 0;
    return result;
}

// Address range: 0x18019e8c0 - 0x18019e9e8
int64_t function_18019e8c0(int32_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18019e8cf
    if (*(int64_t *)(v1 + 0x4ba8) != a2) {
        // 0x18019e8ee
        function_1801a3c30(a2);
    }
    int32_t v2 = *(int32_t *)(a2 + 368); // 0x18019e8fe
    *(int32_t *)(v1 + 0x4bb0) = a1;
    *(int32_t *)(v1 + 0x4bb8) = v2;
    function_1801a3db0(*(int32_t *)(v1 + 0x49fc), a2);
    *(int32_t *)(a2 + 960 + 4 * (int64_t)v2) = a1;
    if (*(int32_t *)(v1 + 0x4a40) == a1) {
        // 0x18019e95c
        int64_t v3; // bp-40, 0x18019e8c0
        __asm_rep_movsb_memcpy(NULL, (char *)function_1801cda20(&v3, a2, v1 + 0x4a5c), 16);
    }
    int32_t v4 = *(int32_t *)(v1 + 0x4110); // 0x18019e99e
    if (v4 != 2 == (v4 != 3)) {
        // 0x18019e9c3
        *(char *)(v1 + 0x4c02) = 1;
    } else {
        // 0x18019e9b5
        *(char *)(v1 + 0x4c03) = 1;
    }
    // 0x18019e9cf
    function_1801a3b10(0);
    return function_1801a3b10(1);
}

// Address range: 0x18019e9f0 - 0x18019ea03
int64_t function_18019e9f0(int64_t a1, int64_t a2) {
    // 0x18019e9f0
    return function_18019e5d0(0, 0);
}

// Address range: 0x18019ea10 - 0x18019ea54
int64_t function_18019ea10(void) {
    int64_t v1 = (int64_t)g1201; // 0x18019ea14
    int64_t v2 = v1 + 0x40d0; // 0x18019ea25
    return (int64_t)*(int32_t *)(*(int32_t *)v2 == 0 ? v1 + 0x40d4 : v2);
}

// Address range: 0x18019ea60 - 0x18019eac6
int64_t function_18019ea60(int32_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x18019ea60
    *(int64_t *)&v2 = v1;
    *(int32_t *)(v1 + 0x40d0) = a1;
    int64_t result = (int64_t)v2; // 0x18019ea81
    *(char *)(result + 0x40e0) = 0;
    if (a1 == 0) {
        // 0x18019eac1
        return result;
    }
    int64_t v3 = (int64_t)v2; // 0x18019ea93
    int64_t result2 = v3; // 0x18019eaa1
    if (*(int32_t *)(v3 + 0x40d4) != a1) {
        // 0x18019eaa3
        int128_t v4; // 0x18019ea60
        int128_t v5 = __asm_xorps(v4, v4); // 0x18019eaa7
        *(int32_t *)(v3 + 0x40dc) = (int32_t)__asm_movss(v5);
        result2 = (int64_t)v2;
        *(int32_t *)(result2 + 0x40d8) = (int32_t)__asm_movss(__asm_xorps(v5, v5));
    }
    // 0x18019eac1
    return result2;
}

// Address range: 0x18019ead0 - 0x18019eb21
int64_t function_18019ead0(int32_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x18019ead0
    *(int64_t *)&v2 = v1;
    v2 = g1201;
    if (*(int32_t *)(v1 + 0x40e4) == a1) {
        // 0x18019eaf3
        *(int32_t *)(v1 + 0x40e8) = a1;
    }
    int64_t result = (int64_t)v2; // 0x18019eb01
    if (*(int32_t *)(result + 0x4114) == a1) {
        // 0x18019eb11
        *(char *)(result + 0x4118) = 1;
    }
    // 0x18019eb1c
    return result;
}

// Address range: 0x18019eb30 - 0x18019eba3
int64_t function_18019eb30(int32_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x18019eb30
    *(int64_t *)&v2 = v1;
    uint16_t result = *(int16_t *)(v1 + 0x5fe6); // 0x18019eb47
    if (result >= 1) {
        // 0x18019eb9e
        return result;
    }
    int32_t v3 = *(int32_t *)(v1 + 0x40e4); // 0x18019eb5c
    v2 = g1201;
    if (v3 != a1 != v3 != 0) {
        // 0x18019eb71
        *(char *)(v1 + 0x40f5) = 1;
        *(char *)((int64_t)v2 + 0x40f4) = 1;
    }
    int32_t * v4 = (int32_t *)((int64_t)v2 + 0x4a48); // 0x18019eb8b
    uint32_t result2 = *v4 | 4; // 0x18019eb91
    *v4 = result2;
    // 0x18019eb9e
    return result2;
}

// Address range: 0x18019ebb0 - 0x18019ec20
int64_t function_18019ebb0(int32_t a1) {
    int32_t v1 = a1; // 0x18019ebb0
    int64_t v2 = (int64_t)g1201; // 0x18019ebb8
    int64_t v3 = *(int64_t *)(v2 + 0x4078); // 0x18019ebc9
    if (*(int32_t *)(v2 + 0x40cc) == a1) {
        // 0x18019ebe6
        function_1801aaaa0(a1, 14, 0, 0, v3);
    }
    // 0x18019ebfb
    return function_1801cec90(v3 + 264, &v1);
}

// Address range: 0x18019ec30 - 0x18019ecca
int64_t function_18019ec30(char * a1, int32_t a2, int32_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = function_180194e30(a1, a2 == 0 ? 0 : a2 - (int32_t)v1, a3); // 0x18019ec82
    int32_t v3 = v2; // 0x18019ec87
    if (*(int32_t *)((int64_t)g1201 + 0x40cc) == v3) {
        // 0x18019eca8
        function_1801aaaa0(v3, 12, v1, (int64_t)a2, 0x100000000 * v2 / 0x100000000);
    }
    // 0x18019ecc1
    return v2 & 0xffffffff;
}

// Address range: 0x18019ecd0 - 0x18019ed34
int64_t function_18019ecd0(int32_t a1, int64_t a2) {
    int32_t v1 = a1; // 0x18019ecd4
    int64_t v2 = function_180194d90((int64_t *)&v1, 4, (int32_t)a2); // 0x18019eceb
    int32_t v3 = v2; // 0x18019ecf0
    if (*(int32_t *)((int64_t)g1201 + 0x40cc) == v3) {
        // 0x18019ed11
        function_1801aaaa0(v3, 4, (int64_t)v1, 0, 0x100000000 * v2 / 0x100000000);
    }
    // 0x18019ed2b
    return v2 & 0xffffffff;
}

// Address range: 0x18019ed40 - 0x18019f177
int64_t function_18019ed40(int64_t * a1) {
    // 0x18019ed40
    int128_t v1; // 0x18019ed40
    int64_t v2 = __asm_movss(v1); // 0x18019ed40
    int64_t v3 = (int64_t)g1201; // 0x18019ed52
    int64_t v4 = *(int64_t *)(v3 + 0x4078); // 0x18019ed69
    unsigned char result = *(char *)(v4 + 207); // 0x18019ed7a
    if (result != 0) {
        // 0x18019f16f
        return result;
    }
    int32_t v5 = v2; // 0x18019ed40
    __asm_comiss(__asm_movss_31(v5), g30);
    int32_t * v6 = (int32_t *)(v4 + 336); // 0x18019eda1
    int128_t v7 = __asm_subss(__asm_movss_31(*v6), v5); // 0x18019eda9
    int64_t v8 = __asm_movss(v7); // 0x18019edb2
    int128_t v9 = __asm_xorps(v7, v7); // 0x18019edb8
    __asm_comiss(v9, (int128_t)(int32_t)v8);
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v9, v9)))); // 0x18019eddf
    int64_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v10)))); // 0x18019ee08
    char * v12 = (char *)(v4 + 344); // 0x18019ee16
    int32_t * v13; // 0x18019ed40
    int32_t * v14; // 0x18019ed40
    int64_t v15; // 0x18019ed40
    if (*v12 == 0) {
        int32_t * v16 = (int32_t *)(v4 + 284);
        int128_t v17 = __asm_movss_31(*v16); // 0x18019ee3b
        v14 = (int32_t *)(v4 + 292);
        v13 = v16;
        v15 = __asm_movss(v17);
    } else {
        int32_t * v18 = (int32_t *)(v4 + 292);
        int128_t v19 = __asm_movss_31(*v18); // 0x18019ee26
        v14 = v18;
        v13 = (int32_t *)(v4 + 284);
        v15 = __asm_movss(v19);
    }
    int32_t v20 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x18019ee4f
    int128_t v21 = __asm_subss(__asm_movss_31(*v13), v20); // 0x18019ee62
    int128_t v22 = __asm_addss(v21, *(int32_t *)((int64_t)a1 + 4)); // 0x18019ee70
    int64_t v23 = __asm_movss(__asm_addss(v22, (int32_t)v11)); // 0x18019ee7e
    int32_t * v24 = (int32_t *)(v4 + 324); // 0x18019ee89
    int32_t v25 = __asm_movss(__asm_movss_31(*v24)); // 0x18019ee91
    __asm_comiss(__asm_movss_31(v25), (int128_t)(int32_t)v23);
    int128_t v26 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v25))); // 0x18019eebe
    int32_t v27 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v26))); // 0x18019eed6
    int32_t * v28 = (int32_t *)(v4 + 280); // 0x18019eeec
    int64_t v29; // 0x18019ed40
    int64_t v30 = __asm_movss(__asm_addss(__asm_movss_31(*v28), (int32_t)v29)); // 0x18019eefd
    int32_t * v31 = (int32_t *)(v4 + 288); // 0x18019eefd
    *v31 = (int32_t)v30;
    *v14 = (int32_t)__asm_movss(__asm_movss_31(v20));
    int128_t v32 = __asm_addss(__asm_movss_31(*(int32_t *)(v4 + 40)), *(int32_t *)(v4 + 348)); // 0x18019ef27
    int32_t v33 = __asm_cvttss2si(__asm_addss(v32, *(int32_t *)(v4 + 352))); // 0x18019ef3c
    *v28 = (int32_t)__asm_movss(__asm_cvtsi2ss(v33));
    int128_t v34 = __asm_addss(__asm_movss_31(v20), v27); // 0x18019ef57
    int32_t * v35 = (int32_t *)(v3 + 0x3950); // 0x18019ef68
    int32_t v36 = __asm_cvttss2si(__asm_addss(v34, *v35)); // 0x18019ef70
    *v13 = (int32_t)__asm_movss(__asm_cvtsi2ss(v36));
    int64_t v37 = __asm_movss(__asm_movss_31(*v31)); // 0x18019ef92
    int32_t * v38 = (int32_t *)(v4 + 304); // 0x18019ef9d
    int32_t v39 = __asm_movss(__asm_movss_31(*v38)); // 0x18019efa5
    __asm_comiss(__asm_movss_31(v39), (int128_t)(int32_t)v37);
    int64_t v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v39)))); // 0x18019efd8
    *v38 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v40));
    int64_t v41 = __asm_movss(__asm_subss(__asm_movss_31(*v13), *v35)); // 0x18019f014
    int32_t * v42 = (int32_t *)(v4 + 308); // 0x18019f022
    int32_t v43 = __asm_movss(__asm_movss_31(*v42)); // 0x18019f02a
    __asm_comiss(__asm_movss_31(v43), (int128_t)(int32_t)v41);
    int64_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v43)))); // 0x18019f06c
    *v42 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v44));
    int128_t v45 = __asm_movss_31(v27); // 0x18019f090
    *(int32_t *)(v4 + 332) = (int32_t)__asm_movss(v45);
    *v24 = (int32_t)__asm_movss(__asm_xorps(v45, v45));
    int32_t v46 = __asm_movss(__asm_movss_31(*v6)); // 0x18019f0be
    __asm_comiss(__asm_movss_31(v46), 0);
    int128_t v47 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v46))); // 0x18019f100
    int128_t v48 = __asm_movss_31((int32_t)__asm_movss(v47)); // 0x18019f112
    *(int32_t *)(v4 + 340) = (int32_t)__asm_movss(v48);
    int128_t v49 = __asm_xorps(v48, v48); // 0x18019f12d
    *v6 = (int32_t)__asm_movss(v49);
    *(char *)(v4 + 345) = 0;
    *v12 = 0;
    int64_t result2 = v4; // 0x18019f15c
    if (*(int32_t *)(v4 + 460) == 0) {
        // 0x18019f15e
        __asm_movss_31(-0x40800000);
        result2 = function_180189b40(__asm_xorps(v49, v49));
    }
    // 0x18019f16f
    return result2;
}

// Address range: 0x18019f180 - 0x18019f480
int64_t function_18019f180(int64_t * a1, int32_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = (int64_t)g1201; // 0x18019f199
    int64_t v3 = *(int64_t *)(v2 + 0x4078); // 0x18019f1aa
    *(int32_t *)(v2 + 0x4a40) = a2;
    __asm_rep_movsb_memcpy((char *)(v2 + 0x4a4c), (char *)a1, 16);
    int64_t v4 = a3 == 0 ? v1 : (int64_t)a3;
    __asm_rep_movsb_memcpy((char *)(v2 + 0x4a5c), (char *)v4, 16);
    int32_t * v5 = (int32_t *)(v2 + 0x4a0c); // 0x18019f22d
    int32_t * v6 = (int32_t *)(v2 + 0x4a44); // 0x18019f247
    *v6 = *v5 | a4 | *(int32_t *)(v2 + 0x4a00);
    int32_t * v7 = (int32_t *)(v2 + 0x4a48); // 0x18019f252
    *v7 = 0;
    int32_t * v8; // 0x18019f180
    if (a2 == 0) {
        // 0x18019f180
        v8 = (int32_t *)(v2 + 0x4a08);
        goto lab_0x18019f35b;
    } else {
        // 0x18019f267
        function_18019ead0(a2);
        if ((*v6 & 2) != 0) {
            goto lab_0x18019f33f;
        } else {
            int16_t * v9 = (int16_t *)(v3 + 374); // 0x18019f2a9
            *v9 = *v9 | (int16_t)(1 << (*(int32_t *)(v3 + 368) & 31));
            if (*(int32_t *)(v2 + 0x4bb0) == a2) {
                goto lab_0x18019f2e1;
            } else {
                // 0x18019f2d1
                if (*(char *)(v2 + 0x4c04) == 0) {
                    goto lab_0x18019f33f;
                } else {
                    goto lab_0x18019f2e1;
                }
            }
        }
    }
  lab_0x18019f35b:
    // 0x18019f35b
    *v8 = 0;
    *v5 = 0;
    int64_t v10 = function_1801cd490(v1, v3 + 592); // 0x18019f38c
    if ((v10 & 255) != 0) {
        goto lab_0x18019f3fd;
    } else {
        if (a2 == 0) {
            goto lab_0x18019f3e9;
        } else {
            // 0x18019f3a5
            if (*(int32_t *)(v2 + 0x40e4) == a2) {
                goto lab_0x18019f404;
            } else {
                // 0x18019f3b6
                if (*(int32_t *)(v2 + 0x4114) == a2) {
                    goto lab_0x18019f404;
                } else {
                    // 0x18019f3c7
                    if (*(int32_t *)(v2 + 0x4bb0) == a2) {
                        goto lab_0x18019f404;
                    } else {
                        // 0x18019f3d8
                        if (*(int32_t *)(v2 + 0x4bbc) == a2) {
                            goto lab_0x18019f404;
                        } else {
                            goto lab_0x18019f3e9;
                        }
                    }
                }
            }
        }
    }
  lab_0x18019f33f:;
    int32_t * v11 = (int32_t *)(v2 + 0x4a08);
    v8 = v11;
    if ((*v11 & 4) != 0) {
        // 0x18019f351
        function_1801b1430(a2);
        v8 = v11;
    }
    goto lab_0x18019f35b;
  lab_0x18019f3fd:
    if (a2 == 0) {
        goto lab_0x18019f41b;
    } else {
        goto lab_0x18019f404;
    }
  lab_0x18019f2e1:;
    int64_t v12 = *(int64_t *)(v2 + 0x4ba8); // 0x18019f2e6
    if (*(int64_t *)(v12 + 936) != *(int64_t *)(v3 + 936)) {
        goto lab_0x18019f33f;
    } else {
        // 0x18019f302
        if (v3 == v12) {
            // 0x18019f339
            int64_t v13; // 0x18019f180
            int64_t v14 = v13;
            function_1801b6130((int32_t)v14);
            goto lab_0x18019f33f;
        } else {
            uint32_t v15 = *(int32_t *)(v3 + 24) | *(int32_t *)(v12 + 24); // 0x18019f32c
            if ((v15 & 256) == 0) {
                goto lab_0x18019f33f;
            } else {
                // 0x18019f339
                function_1801b6130((int32_t)(int64_t)v15);
                goto lab_0x18019f33f;
            }
        }
    }
  lab_0x18019f41b:
    if ((v10 & 255) != 0) {
        // 0x18019f424
        *v7 = *v7 | 256;
    }
    int64_t result = 1; // 0x18019f45c
    if ((function_18018ec30(a1, (int32_t *)(v1 + 8), (int64_t)(a3 & -256 | 1)) & 255) != 0) {
        int32_t v16 = *v7; // 0x18019f463
        *v7 = v16 | 1;
        result = v16 & -256 | 1;
    }
    // 0x18019f479
    return result;
  lab_0x18019f404:
    // 0x18019f404
    if (*(int32_t *)(v2 + 0x4a04) == a2) {
        // 0x18019f415
        function_1801a9fe0((int32_t)v1);
    }
    goto lab_0x18019f41b;
  lab_0x18019f3e9:
    // 0x18019f3e9
    if (*(char *)(v2 + 0x40e2) == 0) {
        // 0x18019f479
        return 0;
    }
    goto lab_0x18019f3fd;
}

// Address range: 0x18019f490 - 0x18019f773
int64_t function_18019f490(int64_t a1, uint32_t a2, int32_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x18019f4a2
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x18019f4b3
    if (*(int64_t *)(v1 + 0x4080) != v2) {
        // 0x18019f76e
        return v1 & -256;
    }
    int64_t v3 = a1 + 8; // 0x18019f4de
    int64_t v4 = a3 & -256 | 1; // 0x18019f4e7
    int32_t * v5 = (int32_t *)v3; // 0x18019f4ed
    if ((function_18018ec30((int64_t *)a1, v5, v4) & 255) == 0) {
        // 0x18019f76e
        return 0;
    }
    int32_t v6 = *(int32_t *)(v1 + 0x40d0); // 0x18019f505
    if (v6 != 0 && v6 != a2) {
        // 0x18019f51f
        if (*(char *)(v1 + 0x40e0) == 0) {
            // 0x18019f76e
            return 0;
        }
    }
    int32_t * v7 = (int32_t *)(v1 + 0x40e4); // 0x18019f53b
    int32_t v8 = *v7; // 0x18019f53b
    if (v8 != 0 && v8 != a2) {
        // 0x18019f555
        if (*(char *)(v1 + 0x40f1) == 0) {
            // 0x18019f565
            if (*(char *)(v1 + 0x40f6) == 0) {
                // 0x18019f76e
                return 0;
            }
        }
    }
    int64_t v9 = v3; // 0x18019f58a
    if ((a3 & 0x2000) == 0) {
        // 0x18019f58c
        v9 = 0;
        if ((function_18019f780(v2, 0) & 255) == 0) {
            // 0x18019f59f
            *(char *)(v1 + 0x40e1) = 1;
            // 0x18019f76e
            return v1 & -256;
        }
    }
    int64_t v10 = v9; // 0x18019f5b7
    if (a2 != 0) {
        // 0x18019f5bd
        if (*(char *)(v1 + 0x4dc4) != 0) {
            // 0x18019f5cd
            if (*(int32_t *)(v1 + 0x4de4) == a2) {
                // 0x18019f5de
                if ((*(int32_t *)(v1 + 0x4dc8) & 2) == 0) {
                    // 0x18019f76e
                    return 0;
                }
            }
        }
        // 0x18019f5f7
        function_18019ea60(a2);
        if ((a3 & 0x4000) != 0) {
            // 0x18019f611
            *(char *)(v1 + 0x40e0) = 1;
            if (*(int32_t *)(v1 + 0x40d4) != a2) {
                // 0x18019f76e
                return v1 & -256;
            }
        }
        // 0x18019f635
        v10 = v9;
        if (*(int32_t *)(v1 + 0x4a40) == a2) {
            // 0x18019f646
            v10 = v9;
            if ((*(int32_t *)(v1 + 0x4a48) & 1024) != 0) {
                // 0x18019f65a
                v10 = v9;
                if ((function_18018ce40(0x11000) & 255) != 0) {
                    int64_t v11 = function_1801a4270(*(int32_t *)(v1 + 0x4a8c)); // 0x18019f676
                    int64_t v12; // 0x18019f490
                    function_18018ac20("%s", v11, v4, v12);
                    v10 = v11;
                }
            }
        }
    }
    // 0x18019f68b
    if ((a3 & 1024) != 0) {
        // 0x18019f69b
        if (!((a2 == 0 | *v7 != a2))) {
            // 0x18019f6b3
            function_18019e9f0((int64_t)a2, v10);
        }
        // 0x18019f6b9
        *(char *)(v1 + 0x40e1) = 1;
        // 0x18019f76e
        return v1 & -256;
    }
    if (a2 == 0) {
        // 0x18019f76e
        return *(char *)(v1 + 0x4c03) == 0;
    }
    int64_t v13 = v10; // 0x18019f6e5
    if (*(char *)(v1 + 0x61bd) != 0) {
        // 0x18019f6e7
        v13 = v10;
        if (*(int32_t *)(v1 + 0x40d4) == a2) {
            int64_t v14 = function_18018d7e0((int64_t)a2); // 0x18019f6f8
            int128_t v15 = __asm_movss_31(*(int32_t *)&g40); // 0x18019f710
            __asm_movss(v15);
            int64_t v16 = __asm_movss(__asm_xorps(v15, v15)); // 0x18019f729
            function_1802221c0(v14, (int32_t *)a1, v5, 0xff00ffff, 0x100000000 * v16 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            v13 = a1;
        }
    }
    // 0x18019f746
    if (*(int32_t *)(v1 + 0x61c0) == a2) {
        // 0x18019f757
        __asm_int3((int64_t)a2, v13);
    }
    // 0x18019f76e
    return *(char *)(v1 + 0x4c03) == 0;
}

// Address range: 0x18019f780 - 0x18019f862
int64_t function_18019f780(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18019f78d
    int64_t v2 = *(int64_t *)(v1 + 0x4ba8); // 0x18019f79e
    if (v2 == 0) {
        // 0x18019f85d
        return v1 & -256 | 1;
    }
    int64_t v3 = *(int64_t *)(v2 + 912); // 0x18019f7b8
    if (v3 == 0 || *(char *)(v3 + 203) == 0) {
        // 0x18019f85d
        return 1;
    }
    int64_t v4 = *(int64_t *)(a1 + 912); // 0x18019f7e5
    if (v3 == v4) {
        // 0x18019f85d
        return v3 & -256 | 1;
    }
    int32_t v5 = *(int32_t *)(v3 + 20); // 0x18019f7fd
    if ((v5 & 0x8000000) == 0) {
        // 0x18019f810
        if ((v5 & 0x4000000) == 0 || (a2 & 32) != 0) {
            // 0x18019f85d
            return 1;
        }
    }
    int64_t v6 = function_180199370(v4, v3) & 255; // 0x18019f850
    if (v6 == 0) {
        // 0x18019f85d
        return 0;
    }
    // 0x18019f85d
    return v6 & -256 | 1;
}

// Address range: 0x18019f870 - 0x18019f91f
int64_t function_18019f870(int64_t * a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18019f87d
    int64_t v2 = function_1801cd490((int64_t)a1, *(int64_t *)(v1 + 0x4078) + 592) & 255; // 0x18019f8b2
    if (v2 != 0) {
        // 0x18019f91a
        return v2 & 0xffffff00;
    }
    if (a2 != 0) {
        uint32_t v3 = *(int32_t *)(v1 + 0x40e4); // 0x18019f8c5
        if (v3 == a2) {
            // 0x18019f91a
            return (int64_t)v3 & 0xffffff00;
        }
        uint32_t v4 = *(int32_t *)(v1 + 0x4114); // 0x18019f8d6
        if (v4 == a2) {
            // 0x18019f91a
            return (int64_t)v4 & 0xffffff00;
        }
        uint32_t v5 = *(int32_t *)(v1 + 0x4bb0); // 0x18019f8e7
        if (v5 == a2) {
            // 0x18019f91a
            return (int64_t)v5 & 0xffffff00;
        }
        uint32_t v6 = *(int32_t *)(v1 + 0x4bbc); // 0x18019f8f8
        if (v6 == a2) {
            // 0x18019f91a
            return (int64_t)v6 & 0xffffff00;
        }
    }
    // 0x18019f904
    if (*(char *)(v1 + 0x40e2) == 0) {
        // 0x18019f91a
        return 1;
    }
    // 0x18019f91a
    return 0;
}

// Address range: 0x18019f930 - 0x18019f9b8
int64_t function_18019f930(int32_t a1, int32_t a2, int32_t a3, int64_t a4, int32_t a5) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-40, 0x18019f930
    *(int64_t *)&v2 = v1;
    *(int32_t *)(v1 + 0x4a40) = a1;
    *(int32_t *)((int64_t)v2 + 0x4a44) = a2;
    *(int32_t *)((int64_t)v2 + 0x4a48) = a3;
    int64_t result = (int64_t)v2; // 0x18019f97d
    char * v3 = (char *)(result + 0x4a5c); // 0x18019f992
    __asm_rep_movsb_memcpy(v3, (char *)a4, 16);
    __asm_rep_movsb_memcpy((char *)(result + 0x4a4c), v3, 16);
    return result;
}

// Address range: 0x18019f9c0 - 0x18019fb2b
int64_t function_18019f9c0(int64_t * a1, int64_t a2) {
    // 0x18019f9c0
    int128_t v1; // 0x18019f9c0
    int64_t v2 = __asm_movss(v1); // 0x18019f9c0
    int128_t v3; // 0x18019f9c0
    int64_t v4 = __asm_movss(v3); // 0x18019f9c6
    uint64_t v5; // 0x18019f9c0
    int64_t v6 = v5 - 104; // 0x18019f9d6
    int128_t v7; // 0x18019f9c0
    int128_t v8 = __asm_xorps(v7, v7); // 0x18019f9da
    int64_t v9 = __asm_movss(v8); // 0x18019f9dd
    int128_t v10 = __asm_xorps(v8, v8); // 0x18019f9e3
    int64_t v11 = __asm_movss(v10); // 0x18019f9e6
    int128_t v12 = __asm_xorps(v10, v10); // 0x18019f9ec
    int128_t v13 = a2; // 0x18019f9ef
    __asm_comiss(v12, v13);
    bool v14 = v5 < 104 | v6 == 0; // 0x18019f9f4
    int64_t v15; // 0x18019f9c0
    int128_t v16; // 0x18019f9c0
    if (v14) {
        // 0x18019f9f6
        __asm_comiss(__asm_xorps(v12, v12), v16);
        v15 = v9;
    } else {
        // 0x18019fa00
        int64_t v17; // bp-24, 0x18019f9c0
        v15 = *(int64_t *)function_1801895c0(&v17);
    }
    char v18 = llvm_ctpop_i8((char)v6); // 0x18019f9d6
    int32_t v19 = a2; // 0x18019fa12
    int128_t v20 = __asm_movss_31(v19); // 0x18019fa12
    int32_t v21 = *(int32_t *)&g30; // 0x18019fa18
    __asm_ucomiss(v20, v21);
    bool v22 = v6 != 0 | (v18 & 1) == 0;
    int64_t v23; // 0x18019f9c0
    if (v22) {
        // 0x18019fa34
        __asm_comiss(__asm_xorps(v20, v20), v13);
        v23 = a2;
        if (!v14) {
            int64_t v24 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v15), v19)); // 0x18019fa4a
            __asm_comiss(__asm_movss_31(0x40800000), (int128_t)(int32_t)v24);
            int128_t v25 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(0x40800000))); // 0x18019fa7b
            int128_t v26 = __asm_movss_31((int32_t)__asm_movss(v25)); // 0x18019fa87
            v23 = 0x100000000 * __asm_movss(v26) / 0x100000000;
        }
    } else {
        // 0x18019fa23
        v23 = 0x100000000 * __asm_movss(__asm_movss_31((int32_t)v4)) / 0x100000000;
    }
    int32_t v27 = v16; // 0x18019fa93
    int128_t v28 = __asm_movss_31(v27); // 0x18019fa93
    __asm_ucomiss(v28, v21);
    if (!v22) {
        // 0x18019faa4
        __asm_movss(__asm_movss_31((int32_t)v2));
        // 0x18019fb14
        *a1 = v23;
        return (int64_t)a1;
    }
    // 0x18019fab5
    __asm_comiss(__asm_xorps(v28, v28), v16);
    if (!v14) {
        int64_t v29 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v11), v27)); // 0x18019facb
        __asm_comiss(__asm_movss_31(0x40800000), (int128_t)(int32_t)v29);
        int64_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(0x40800000)))); // 0x18019fb02
        __asm_movss(__asm_movss_31((int32_t)v30));
    }
    // 0x18019fb14
    *a1 = v23;
    return (int64_t)a1;
}

// Address range: 0x18019fb40 - 0x18019fc31
int64_t function_18019fb40(int64_t result2) {
    // 0x18019fb40
    int128_t v1; // 0x18019fb40
    int32_t v2 = __asm_movss(v1); // 0x18019fb40
    uint64_t v3; // 0x18019fb40
    int64_t v4 = v3 - 40; // 0x18019fb4b
    int128_t v5; // 0x18019fb40
    int128_t v6 = __asm_xorps(v5, v5); // 0x18019fb4f
    __asm_comiss(v6, (int128_t)v2);
    if (v3 >= 40 && v4 != 0) {
        // 0x18019fb59
        __asm_xorps(v6, v6);
        // 0x18019fc2c
        int64_t result; // 0x18019fb40
        return result;
    }
    char v7 = llvm_ctpop_i8((char)v4); // 0x18019fb4b
    int64_t v8 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18019fb72
    __asm_ucomiss(__asm_movss_31(v2), *(int32_t *)&g30);
    int32_t v9; // 0x18019fb40
    if (v4 != 0 || (v7 & 1) == 0) {
        // 0x18019fba4
        __asm_comiss(__asm_movss_31(v2), g30);
        v9 = v2;
    } else {
        // 0x18019fb8f
        v9 = __asm_movss(__asm_movss_31(*(int32_t *)(v8 + 568)));
    }
    // 0x18019fbdd
    int64_t v10; // 0x18019fb40
    int128_t v11 = __asm_subss(__asm_movss_31(v9), (int32_t)v10); // 0x18019fbe8
    int32_t v12 = __asm_movss(v11); // 0x18019fbec
    __asm_comiss(__asm_movss_31(v12), g40);
    int64_t v13; // 0x18019fb40
    if (v3 < 40) {
        // 0x18019fc0c
        v13 = __asm_movss(__asm_movss_31((int32_t)g40));
    } else {
        // 0x18019fbff
        v13 = __asm_movss(__asm_movss_31(v12));
    }
    // 0x18019fc1a
    __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v13)));
    // 0x18019fc2c
    return result2;
}

// Address range: 0x18019fc40 - 0x18019fe29
int64_t function_18019fc40(int64_t a1) {
    // 0x18019fc40
    int128_t v1; // 0x18019fc40
    int64_t v2 = __asm_movss(v1); // 0x18019fc40
    int32_t v3 = a1; // 0x18019fc46
    int64_t v4 = (int64_t)g1201; // 0x18019fc51
    uint64_t v5 = *(int64_t *)(v4 + 0x4078); // 0x18019fc62
    int64_t v6 = v5 + 480; // 0x18019fc83
    int32_t * v7 = (int32_t *)(v5 + 472); // 0x18019fca1
    function_1801cec90(v6, v7);
    int32_t v8 = v3 - 1;
    int128_t v9 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*(int32_t *)(v4 + 0x3954)), __asm_cvtsi2ss(v8))); // 0x18019fcc1
    int128_t v10 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v2), v9)); // 0x18019fcd1
    int32_t v11 = __asm_movss(v10); // 0x18019fcd4
    int32_t v12 = __asm_movss(__asm_movss_31(v11));
    int128_t v13; // 0x18019fc40
    int32_t v14; // 0x18019fc40
    if (v8 < 1) {
        // 0x18019fc40
        v13 = g40;
        v14 = v12;
    } else {
        int32_t v15 = v8;
        int128_t v16 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v11), __asm_cvtsi2ss(v15))); // 0x18019fd1a
        int32_t v17 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_divss(v16, __asm_cvtsi2ss(v3))))); // 0x18019fd32
        int32_t v18 = __asm_movss(__asm_subss(__asm_movss_31(v12), v17)); // 0x18019fd54
        __asm_comiss(__asm_movss_31(v18), g40);
        int64_t v19; // 0x18019fc40
        if (v5 > 0xfffffffffffffe1f) {
            // 0x18019fd77
            v19 = __asm_movss(__asm_movss_31((int32_t)g40));
        } else {
            // 0x18019fd69
            v19 = __asm_movss(__asm_movss_31(v18));
        }
        int128_t v20 = __asm_movss_31((int32_t)v19); // 0x18019fd85
        int32_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20))); // bp-44, 0x18019fd97
        function_1801cec90(v6, &v21);
        int32_t v22 = __asm_movss(__asm_movss_31(v17));
        v15--;
        v13 = g40;
        v14 = v22;
        while (v15 >= 1) {
            // 0x18019fd0a
            v16 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v11), __asm_cvtsi2ss(v15)));
            v17 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_divss(v16, __asm_cvtsi2ss(v3)))));
            v18 = __asm_movss(__asm_subss(__asm_movss_31(v22), v17));
            __asm_comiss(__asm_movss_31(v18), g40);
            if (v5 > 0xfffffffffffffe1f) {
                // 0x18019fd77
                v19 = __asm_movss(__asm_movss_31((int32_t)g40));
            } else {
                // 0x18019fd69
                v19 = __asm_movss(__asm_movss_31(v18));
            }
            // 0x18019fd85
            v20 = __asm_movss_31((int32_t)v19);
            v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20)));
            function_1801cec90(v6, &v21);
            v22 = __asm_movss(__asm_movss_31(v17));
            v15--;
            v13 = g40;
            v14 = v22;
        }
    }
    // 0x18019fdbe
    __asm_comiss(__asm_movss_31(v14), v13);
    int64_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v14)))); // 0x18019fdef
    *v7 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v23));
    int32_t * v24 = (int32_t *)(v4 + 0x4a08); // 0x18019fe0d
    uint32_t result = *v24 & -2; // 0x18019fe13
    *v24 = result;
    return result;
}

// Address range: 0x18019fe30 - 0x18019fe4b
int64_t function_18019fe30(int32_t a1) {
    // 0x18019fe30
    return 12 * (int64_t)a1 + (int64_t)&g387;
}

// Address range: 0x18019fe60 - 0x18019feec
int64_t function_18019fe60(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18019fe64
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x5fe0))); // 0x18019fe82
    *(int32_t *)(v1 + 0x3900) = (int32_t)v2;
    int32_t * v3 = (int32_t *)(v1 + 0x4a00); // 0x18019fe8f
    *v3 = *v3 & -1025;
    function_1801cec90(v1 + 0x4b48, v3);
    int16_t * v4 = (int16_t *)(v1 + 0x5fe4); // 0x18019fed1
    uint16_t result = *v4 + 1; // 0x18019fed8
    *v4 = result;
    return result;
}

// Address range: 0x18019ff00 - 0x18019ffad
int64_t function_18019ff00(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-40, 0x18019ff00
    *(int64_t *)&v2 = v1;
    int16_t * v3 = (int16_t *)(v1 + 0x5fe4); // 0x18019ff13
    *v3 = *v3 - 1;
    int32_t * v4 = (int32_t *)((int64_t)v2 + 0x4b48); // 0x18019ff3c
    *v4 = *v4 - 1;
    int64_t v5 = (int64_t)v2; // 0x18019ff47
    int64_t v6 = *(int64_t *)(v5 + 0x4b50); // 0x18019ff66
    int32_t v7 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(v5 + 0x4b48) - 1) + v6); // 0x18019ff7c
    *(int32_t *)(v5 + 0x4a00) = v7;
    int64_t result = (int64_t)v2;
    int128_t v8 = __asm_movss_31(*(int32_t *)(result + 0x5fe0)); // 0x18019ff8c
    int64_t v9 = __asm_movss(__asm_mulss(v8, *(int32_t *)(result + 0x3904))); // 0x18019ffa0
    *(int32_t *)(result + 0x3900) = (int32_t)v9;
    return result;
}

// Address range: 0x18019ffc0 - 0x1801a0098
int64_t function_18019ffc0(int64_t a1, int32_t a2) {
    int64_t result = (int64_t)g1201; // 0x18019ffcc
    *(char *)(result + 0x40e2) = 1;
    *(char *)(result + 0x6140) = 1;
    *(int32_t *)(result + 0x6144) = (int32_t)a1;
    *(int64_t *)(result + 0x6168) = 0;
    *(int64_t *)(result + 0x6160) = 0;
    *(int32_t *)(result + 0x6178) = *(int32_t *)(*(int64_t *)(result + 0x4078) + 416);
    int32_t v1 = a2; // 0x1801a004b
    if (a2 < 0) {
        // 0x1801a0056
        v1 = *(int32_t *)(result + 0x6180);
    }
    // 0x1801a0064
    *(int32_t *)(result + 0x617c) = v1;
    *(int32_t *)(result + 0x6170) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    *(char *)(result + 0x6174) = 1;
    return result;
}


