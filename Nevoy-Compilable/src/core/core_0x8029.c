// Core group: core_0x8029
// Address range: 0x1802902fc - 0x18029041a
int64_t function_1802902fc(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x18029031e
    uint32_t v3 = (int32_t)v2; // 0x180290321
    int64_t v4; // 0x1802902fc
    if (v3 == -2) {
        // 0x180290326
        *(int32_t *)function_1802798f4(a1) = 0;
        *(int32_t *)function_180279918(a1, a2, a3, v4) = 9;
        // 0x18029033c
        return 0xffffffff;
    }
    int64_t v5 = a1; // 0x180290358
    if ((int32_t)a1 >= 0) {
        // 0x18029035a
        v5 = a1;
        if (g1308 > v3) {
            int64_t * v6 = (int64_t *)(8 * v1 / 0x4000000000 + (int64_t)&g1307); // 0x1802903a1
            int64_t v7 = 72 * (v2 & 63) + 56;
            v5 = &g1307;
            if ((*(char *)(*v6 + v7) & 1) != 0) {
                if ((int32_t)a3 <= 0xffffffff) {
                    // 0x1802903b6
                    *(int32_t *)function_1802798f4((int64_t)&g1307) = 0;
                    *(int32_t *)function_180279918((int64_t)&g1307, a2, a3, v4) = 22;
                    // 0x180290382
                    function_180271814((int64_t)&g1307, a2, a3, v4);
                    // 0x18029033c
                    return 0xffffffff;
                }
                int64_t v8 = v2 & 0xffffffff; // 0x1802903cb
                function_180299e5c(v3);
                int64_t result; // 0x1802902fc
                if ((*(char *)(*v6 + v7) & 1) != 0) {
                    // 0x1802903fd
                    result = function_18029041c(v8, a2, a3 & 0xffffffff) & 0xffffffff;
                } else {
                    // 0x1802903e8
                    *(int32_t *)function_180279918(v8, a2, a3, v4) = 9;
                    *(int32_t *)function_1802798f4(v8) = 0;
                    result = 0xffffffff;
                }
                // 0x18029040c
                function_180299f44(v3);
                // 0x18029033c
                return result;
            }
        }
    }
    // 0x18029036f
    *(int32_t *)function_1802798f4(v5) = 0;
    *(int32_t *)function_180279918(v5, a2, a3, v4) = 9;
    // 0x180290382
    function_180271814(v5, a2, a3, v4);
    // 0x18029033c
    return 0xffffffff;
}

// Address range: 0x18029041c - 0x18029087b
int64_t function_18029041c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x180290435
    uint32_t v2 = (int32_t)v1; // 0x18029043e
    if (v2 == -2) {
        // 0x180290444
        *(int32_t *)function_1802798f4(a1) = 0;
        *(int32_t *)function_180279918(a1, a2, a3, a2) = 9;
        // 0x180290863
        return 0xffffffff;
    }
    int64_t v3 = a2; // 0x180290461
    int64_t v4 = a3; // 0x180290461
    char v5; // 0x18029041c
    int64_t v6; // 0x18029041c
    int64_t v7; // 0x18029041c
    int64_t v8; // 0x18029041c
    int64_t v9; // 0x18029041c
    int64_t v10; // 0x18029041c
    int64_t v11; // 0x18029041c
    int64_t v12; // 0x18029041c
    int64_t v13; // 0x18029049d
    int64_t v14; // 0x18029041c
    int32_t v15; // 0x1802904a8
    int64_t v16; // 0x18029043b
    int64_t hFile; // 0x1802904e2
    char v17; // 0x1802904ea
    uint32_t v18; // 0x180290505
    int64_t v19; // 0x18029048c
    int64_t * v20; // 0x180290499
    if ((int32_t)a1 < 0) {
        goto lab_0x180290849;
    } else {
        // 0x180290467
        v3 = a2;
        v4 = a3;
        if (g1308 <= v2) {
            goto lab_0x180290849;
        } else {
            // 0x180290474
            v19 = v1 / 64;
            v20 = (int64_t *)(8 * v19 + (int64_t)&g1307);
            int64_t v21 = *v20; // 0x180290499
            v13 = 72 * (v1 & 63);
            v14 = v13 + 56;
            char v22 = *(char *)(v21 + v14); // 0x18029049d
            v3 = 1;
            v4 = v19;
            if ((v22 & 1) == 0) {
                goto lab_0x180290849;
            } else {
                // 0x1802904a8
                v15 = a3;
                if (v15 > -1) {
                    // 0x1802904c8
                    if (v15 == 0 || (v22 & 2) != 0) {
                        // 0x180290863
                        return 0;
                    }
                    if (a2 == 0) {
                        goto lab_0x1802904b1;
                    } else {
                        // 0x1802904e2
                        v16 = a3 & 0xffffffff;
                        int64_t v23 = v21 + v13;
                        hFile = *(int64_t *)(v23 + 40);
                        v17 = *(char *)(v23 + 57);
                        v18 = (int32_t)v17 - 1;
                        if (v18 == 0) {
                            if ((a3 & 1) == 0) {
                                int64_t v24 = a3 / 2 & 0x7fffffff; // 0x180290546
                                int64_t v25 = (int32_t)v24 < 4 ? 4 : v24;
                                int64_t * v26 = _malloc_base((int32_t)v25); // 0x18029054f
                                int64_t v27 = (int64_t)v26; // 0x18029054f
                                function_18028acc0(0, 1);
                                function_18028acc0(0, 1);
                                if (v26 != NULL) {
                                    // 0x180290588
                                    *(int64_t *)(v13 + 48 + *v20) = function_180290af0(v1 & 0xffffffff, 0, 1, a2);
                                    int64_t v28 = *v20;
                                    v5 = *(char *)(v28 + v14);
                                    v6 = v28;
                                    v9 = v27;
                                    v8 = v25;
                                    v7 = v27;
                                    goto lab_0x1802905b8;
                                } else {
                                    // 0x18029056d
                                    *(int32_t *)function_180279918(0, 1, v19, a2) = 12;
                                    *(int32_t *)function_1802798f4(0) = 8;
                                    v12 = 1;
                                    v10 = v27;
                                    v11 = 0xffffffff;
                                    goto lab_0x1802906ce;
                                }
                            } else {
                                goto lab_0x180290516;
                            }
                        } else {
                            // 0x180290509
                            v5 = v22;
                            v6 = v21;
                            v9 = 0;
                            v8 = v16;
                            v7 = a2;
                            if (v18 != 1) {
                                goto lab_0x1802905b8;
                            } else {
                                // 0x18029050d
                                v5 = v22;
                                v6 = v21;
                                v9 = 0;
                                v8 = v16;
                                v7 = a2;
                                if ((a3 & 1) == 0) {
                                    goto lab_0x1802905b8;
                                } else {
                                    goto lab_0x180290516;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x1802904b1;
                }
            }
        }
    }
  lab_0x180290849:
    // 0x180290849
    *(int32_t *)function_1802798f4(a1) = 0;
    *(int32_t *)function_180279918(a1, v3, v4, a2) = 9;
    int64_t v29 = v3; // 0x180290855
    int64_t v30 = v4; // 0x180290855
    goto lab_0x18029085b;
  lab_0x18029085b:
    // 0x18029085b
    function_180271814(a1, v29, v30, a2);
    // 0x180290863
    return 0xffffffff;
  lab_0x1802904b1:
    // 0x1802904b1
    *(int32_t *)function_1802798f4(a1) = 0;
    *(int32_t *)function_180279918(a1, 1, v19, a2) = 22;
    v29 = 1;
    v30 = v19;
    goto lab_0x18029085b;
  lab_0x180290516:;
    int64_t v31 = v18; // 0x180290505
    *(int32_t *)function_1802798f4(v31) = 0;
    *(int32_t *)function_180279918(v31, 1, v19, a2) = 22;
    function_180271814(v31, 1, v19, a2);
    v12 = 1;
    v10 = 0;
    v11 = 0xffffffff;
    goto lab_0x1802906ce;
  lab_0x1802905b8:;
    int64_t nNumberOfBytesToRead = v8; // 0x1802905cf
    int64_t v36 = 0; // 0x1802905cf
    int64_t lpBuffer = v7; // 0x1802905cf
    if ((v5 & 72) != 0) {
        int64_t v55 = v13 + 58;
        char v56 = *(char *)(v6 + v55); // 0x1802905d1
        nNumberOfBytesToRead = v8;
        v36 = 0;
        lpBuffer = v7;
        if (v8 != 0 && v56 != 10) {
            // 0x1802905df
            *(char *)v7 = v56;
            int64_t v57 = v8 + 0xffffffff; // 0x1802905e2
            int64_t v58 = v57 & 0xffffffff; // 0x1802905e2
            int64_t v59 = v7 + 1; // 0x1802905e8
            *(char *)(*v20 + v55) = 10;
            nNumberOfBytesToRead = v58;
            v36 = 1;
            lpBuffer = v59;
            if (v17 != 0) {
                int64_t v60 = v13 + 59;
                char v61 = *(char *)(*v20 + v60); // 0x1802905fb
                nNumberOfBytesToRead = v58;
                v36 = 1;
                lpBuffer = v59;
                if ((int32_t)v57 != 0 && v61 != 10) {
                    // 0x180290609
                    *(char *)v59 = v61;
                    int64_t v62 = v7 + 2; // 0x180290614
                    int64_t v63 = v8 + 0x1fffffffe; // 0x180290617
                    int64_t v64 = v63 & 0xffffffff; // 0x180290617
                    *(char *)(*v20 + v60) = 10;
                    nNumberOfBytesToRead = v64;
                    v36 = 2;
                    lpBuffer = v62;
                    if (v17 == 1) {
                        int64_t v65 = v13 + 60;
                        char v66 = *(char *)(*v20 + v65); // 0x180290627
                        nNumberOfBytesToRead = v64;
                        v36 = 2;
                        lpBuffer = v62;
                        if ((int32_t)v63 != 0 && v66 != 10) {
                            // 0x180290635
                            *(char *)v62 = v66;
                            *(char *)(*v20 + v65) = 10;
                            nNumberOfBytesToRead = v8 + 0xfffffffd & 0xffffffff;
                            v36 = 3;
                            lpBuffer = v7 + 3;
                        }
                    }
                }
            }
        }
    }
    int64_t v41 = v1 & 0xffffffff; // 0x18029064a
    int32_t lpMode = 0; // bp-104, 0x18029064d
    char v34 = 0; // 0x180290658
    int32_t errorCode2; // 0x18029041c
    int32_t lpNumberOfBytesRead; // bp+32, 0x18029041c
    char v33; // 0x18029041c
    int64_t v35; // 0x18029041c
    if ((int32_t)function_180299c5c(v41) == 0) {
        goto lab_0x1802906ee;
    } else {
        // 0x18029065e
        v34 = 0;
        if (*(char *)(*v20 + v14) < 0) {
            int64_t * hConsoleHandle = (int64_t *)hFile; // 0x18029067f
            bool v67 = GetConsoleMode(hConsoleHandle, &lpMode); // 0x18029067f
            v34 = 0;
            if (!v67) {
                goto lab_0x1802906ee;
            } else {
                // 0x180290689
                v34 = 1;
                if (v17 != 2) {
                    goto lab_0x1802906ee;
                } else {
                    // 0x180290693
                    lpNumberOfBytesRead = 0;
                    bool v68 = ReadConsoleW(hConsoleHandle, (int64_t *)lpBuffer, (int32_t)nNumberOfBytesToRead / 2, &lpNumberOfBytesRead, NULL); // 0x1802906b4
                    if (v68) {
                        // 0x1802906dd
                        v33 = 1;
                        v35 = 2 * (int64_t)lpNumberOfBytesRead + v36 & 0xffffffff;
                        goto lab_0x180290730;
                    } else {
                        // 0x1802906be
                        errorCode2 = GetLastError();
                        goto lab_0x1802906c4;
                    }
                }
            }
        } else {
            goto lab_0x1802906ee;
        }
    }
  lab_0x1802906ce:
    // 0x1802906ce
    function_18028acc0(v10, v12);
    // 0x180290863
    return v11 & 0xffffffff;
  lab_0x1802906ee:
    // 0x1802906ee
    lpNumberOfBytesRead = 0;
    bool v32 = ReadFile((int64_t *)hFile, (int64_t *)lpBuffer, (int32_t)nNumberOfBytesToRead, &lpNumberOfBytesRead, NULL); // 0x18029070d
    if (!v32) {
        goto lab_0x18029080f;
    } else {
        // 0x18029071b
        if (lpNumberOfBytesRead > v15) {
            goto lab_0x18029080f;
        } else {
            // 0x180290729
            v33 = v34;
            v35 = lpNumberOfBytesRead + (int32_t)v36;
            goto lab_0x180290730;
        }
    }
  lab_0x18029080f:;
    int32_t errorCode = GetLastError(); // 0x18029080f
    if (errorCode != 5) {
        // 0x180290835
        errorCode2 = errorCode;
        v12 = lpBuffer;
        v10 = v9;
        v11 = 0;
        if (errorCode != 109) {
            goto lab_0x1802906c4;
        } else {
            goto lab_0x1802906ce;
        }
    } else {
        int64_t v37 = function_180279918(hFile, lpBuffer, nNumberOfBytesToRead & 0xffffffff, (int64_t)&lpNumberOfBytesRead); // 0x18029081a
        *(int32_t *)v37 = 9;
        *(int32_t *)function_1802798f4(hFile) = 5;
        v12 = lpBuffer;
        v10 = v9;
        v11 = 0xffffffff;
        goto lab_0x1802906ce;
    }
  lab_0x1802906c4:
    // 0x1802906c4
    function_1802798a8((int64_t)errorCode2);
    v12 = lpBuffer;
    v10 = v9;
    v11 = 0xffffffff;
    goto lab_0x1802906ce;
  lab_0x180290730:
    // 0x180290730
    v12 = v19;
    v10 = v9;
    v11 = v35;
    int64_t v38; // 0x18029041c
    int64_t v39; // 0x180290805
    if (*(char *)(*v20 + v14) < 0) {
        int64_t v40 = 0x100000000 * v35 / 0x100000000; // 0x18029074f
        if (v17 == 2) {
            // 0x180290779
            if (v33 == 0) {
                // 0x1802907fd
                v39 = function_18028fdd0(v41, v7, v40 / 2);
                v38 = v7;
                goto lab_0x180290772;
            } else {
                uint64_t v42 = (v40 & -2) + v7; // 0x18029078e
                int64_t v43 = v7; // 0x180290795
                if (v7 < v42) {
                    int64_t v44 = v7;
                    int64_t v45 = v7;
                    int16_t v46 = *(int16_t *)v45; // 0x18029079c
                    while (v46 != 26) {
                        int16_t v47 = v46; // 0x1802907a9
                        int64_t v48 = 2; // 0x1802907a9
                        if (v46 == 13) {
                            uint64_t v49 = v45 + 2; // 0x1802907ab
                            v47 = v46;
                            v48 = 2;
                            if (v49 < v42) {
                                int16_t v50 = *(int16_t *)v49; // 0x1802907b4
                                v47 = v50 != 10 ? v46 : 10;
                                v48 = v50 != 10 ? 2 : 4;
                            }
                        }
                        int64_t v51 = v48 + v45; // 0x1802907cb
                        *(int16_t *)v44 = v47;
                        int64_t v52 = v44 + 2; // 0x1802907d1
                        v43 = v52;
                        if (v51 >= v42) {
                            goto lab_0x1802907f0;
                        }
                        v44 = v52;
                        v45 = v51;
                        v46 = *(int16_t *)v45;
                    }
                    char * v53 = (char *)(*v20 + v14); // 0x1802907ea
                    *v53 = *v53 | 2;
                    v43 = v44;
                }
              lab_0x1802907f0:
                // 0x1802907f0
                v12 = v19;
                v10 = v9;
                v11 = v43 - v7 & 0xfffffffe;
                goto lab_0x1802906ce;
            }
        } else {
            int64_t v54 = function_18028ffcc(v41, lpBuffer, v40, a2, v16 / 2); // 0x18029076d
            v38 = lpBuffer;
            v39 = v54;
            goto lab_0x180290772;
        }
    } else {
        goto lab_0x1802906ce;
    }
  lab_0x180290772:
    // 0x180290772
    v12 = v38;
    v10 = v9;
    v11 = v39 & 0xffffffff;
    goto lab_0x1802906ce;
}

// Address range: 0x18029087c - 0x18029099a
int64_t function_18029087c(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 0x100000000 * a1;
    int64_t v3 = v2 / 0x100000000; // 0x18029089d
    uint32_t v4 = (int32_t)v3; // 0x1802908a0
    if (v4 == -2) {
        // 0x1802908a5
        *(char *)(v1 + 56) = 1;
        *(int32_t *)(v1 + 52) = 0;
        *(char *)(v1 + 48) = 1;
        *(int32_t *)(v1 + 44) = 9;
        // 0x1802908c0
        return -1;
    }
    if ((int32_t)a1 >= 0) {
        // 0x1802908d7
        if (g1308 > v4) {
            int64_t * v5 = (int64_t *)(8 * v2 / 0x4000000000 + (int64_t)&g1307); // 0x180290937
            int64_t v6 = 72 * (v3 & 63) + 56;
            if ((*(char *)(*v5 + v6) & 1) != 0) {
                // 0x180290943
                function_180299e5c(v4);
                int64_t result; // 0x18029087c
                if ((*(char *)(*v5 + v6) & 1) != 0) {
                    // 0x180290976
                    result = function_18029099c(v3 & 0xffffffff, a2, a3 & 0xffffffff, v1);
                } else {
                    // 0x180290961
                    *(char *)(v1 + 48) = 1;
                    *(int32_t *)(v1 + 44) = 9;
                    *(char *)(v1 + 56) = 1;
                    *(int32_t *)(v1 + 52) = 0;
                    result = -1;
                }
                // 0x18029098b
                function_180299f44(v4);
                // 0x1802908c0
                return result;
            }
        }
    }
    // 0x1802908ec
    *(char *)(v1 + 56) = 1;
    *(int32_t *)(v1 + 52) = 0;
    *(char *)(v1 + 48) = 1;
    *(int32_t *)(v1 + 44) = 9;
    function_18027175c(0, 0, 0, 0, 0, a4);
    // 0x1802908c0
    return -1;
}

// Address range: 0x18029099c - 0x180290a4b
int64_t function_18029099c(int64_t a1, int64_t a2, int64_t dwMoveMethod, int64_t a4) {
    struct _LARGE_INTEGER liDistanceToMove; // 0x1802909ee
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x1802909b0
    int64_t hFile = function_18029a168(v2 & 0xffffffff); // 0x1802909be
    if (hFile == -1) {
        // 0x1802909c9
        *(char *)(a4 + 48) = 1;
        *(int32_t *)(a4 + 44) = 9;
        // 0x180290a36
        return -1;
    }
    int64_t lpNewFilePointer = 0; // bp-24, 0x1802909da
    liDistanceToMove.e0 = a2;
    bool v3 = SetFilePointerEx((int64_t *)hFile, liDistanceToMove, (struct _LARGE_INTEGER *)&lpNewFilePointer, (int32_t)dwMoveMethod); // 0x1802909ee
    if (!v3) {
        // 0x1802909f8
        function_1802798d0((int64_t)GetLastError(), a4);
        // 0x180290a36
        return -1;
    }
    int64_t result = -1; // 0x180290a13
    if (result != -1) {
        int64_t v4 = *(int64_t *)(8 * v1 / 0x4000000000 + (int64_t)&g1307); // 0x180290a2d
        char * v5 = (char *)(72 * (v2 & 63) + 56 + v4); // 0x180290a31
        *v5 = *v5 & -3;
    }
    // 0x180290a36
    return result;
}

// Address range: 0x180290a4c - 0x180290ae6
int64_t function_180290a4c(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = 0; // bp-72, 0x180290a5e
    if (g1298 == 0) {
        // 0x180290a7c
        int128_t v2; // 0x180290a4c
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x180290a8c
    return function_18029087c(a1, (int64_t)a2, a3, &v1);
}

// Address range: 0x180290ae8 - 0x180290aed
int64_t function_180290ae8(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    // 0x180290ae8
    return function_18029087c(a1, (int64_t)a2, a3, (int64_t *)a4);
}

// Address range: 0x180290af0 - 0x180290b8a
int64_t function_180290af0(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0; // bp-72, 0x180290b02
    if (g1298 == 0) {
        // 0x180290b20
        int128_t v2; // 0x180290af0
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x180290b30
    return function_18029099c(a1, (int64_t)a2, a3, (int64_t)&v1);
}

// Address range: 0x180290b8c - 0x180290b91
int64_t function_180290b8c(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180290b8c
    return function_18029099c((int64_t)a1, a2, a3, a4);
}

// Address range: 0x180290b94 - 0x180290bff
int64_t function_180290b94(int64_t a1) {
    // 0x180290b94
    g1276 = &g1277;
    int64_t * v1 = _calloc_base(0x1000, 1); // 0x180290bb3
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180290bba
    *v2 = (int64_t)v1;
    function_18028acc0(0, 1);
    int32_t * v3 = (int32_t *)(a1 + 20);
    int32_t v4 = *v3;
    int32_t v5; // 0x180290b94
    if (*v2 == 0) {
        // 0x180290bd1
        *v3 = v4 | 1024;
        *v2 = a1 + 28;
        v5 = 2;
    } else {
        // 0x180290bca
        *v3 = v4 | 64;
        v5 = 0x1000;
    }
    // 0x180290be6
    *(int32_t *)(a1 + 32) = v5;
    int64_t result = *v2; // 0x180290be9
    *(int32_t *)(a1 + 16) = 0;
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x180290c00 - 0x180290fdb
int64_t function_180290c00(void) {
    // 0x180290c00
    int128_t v1; // 0x180290c00
    int128_t v2; // 0x180290c00
    __asm_vmovaps_55(v2, v1);
    int128_t v3; // 0x180290c00
    int128_t v4 = __asm_vxorpd(v3, v3); // 0x180290c26
    int128_t v5; // 0x180290c00
    int128_t v6; // 0x180290c00
    __asm_vmovaps_55(v6, v5);
    int128_t v7; // 0x180290c00
    int128_t v8 = __asm_vcvtss2sd(v7, v7); // 0x180290c3a
    int64_t v9 = __asm_vmovq(__asm_vmovsd_27(v4, v8)); // 0x180290c42
    int128_t v10; // 0x180290c00
    int128_t v11 = __asm_vcvtss2sd(v10, v10); // 0x180290c47
    int64_t v12 = __asm_vmovq(__asm_vmovsd_27(v4, v11)); // 0x180290c4f
    uint64_t v13 = v9 & 0x7fffffffffffffff; // 0x180290c75
    int64_t result9; // 0x180290c00
    uint64_t v14; // 0x180290c78
    int64_t result; // 0x180290c6b
    int64_t result4; // 0x180290ce4
    int128_t v15; // 0x180290c00
    if (v13 < 0x7ff0000000000001) {
        // 0x180290c80
        v14 = v12 & 0x7fffffffffffffff;
        if (v14 > 0x7ff0000000000000) {
            // 0x180290c85
            v15 = __asm_vmovaps(v10);
            goto lab_0x180290c89;
        } else {
            // 0x180290c9f
            result = v9 / 0x10000000000000 & 2047;
            if (v14 != 0) {
                // 0x180290cdb
                result4 = result;
                if (v13 != 0) {
                    goto lab_0x180290cfb;
                } else {
                    // 0x180290ce0
                    result4 = function_18028a990(v9 + 32 & 0xffffffff);
                    result9 = result4;
                    if (v12 >= 0) {
                        goto lab_0x180290cfb;
                    } else {
                        goto lab_0x180290cee;
                    }
                }
            } else {
                if (v9 >= 0) {
                    // 0x180290cd2
                    __asm_vcvtsd2ss(v11, v11);
                    // 0x180290fb6
                    __asm_vmovaps(v2);
                    __asm_vmovaps(v6);
                    return result;
                }
                goto lab_0x180290ca9;
            }
        }
    } else {
        goto lab_0x180290c89;
    }
  lab_0x180290c89:;
    int32_t v16 = __asm_vmovd(__asm_vmovss_61(__asm_vxorps(v10, v10), v15)); // 0x180290c91
    int64_t result2 = function_18029a550(v16);
    __asm_vmovaps(v2);
    __asm_vmovaps(v6);
    return result2;
  lab_0x180290cfb:;
    int32_t v17 = (v12 / 0x10000000000000 & 2047) - result; // 0x180290cfe
    if (v17 < 27) {
        // 0x180290d1c
        if (v9 >= 0 && v17 <= -14) {
            if (v17 <= 0xffffff69) {
                int64_t result3 = function_18028a990(48); // 0x180290d3b
                if (v12 >= 0) {
                    // 0x180290d52
                    __asm_vxorps(v10, v10);
                } else {
                    // 0x180290d45
                    __asm_vmovss(-0x80000000);
                }
                // 0x180290fb6
                __asm_vmovaps(v2);
                __asm_vmovaps(v6);
                return result3;
            }
            if (v17 > -127) {
                int128_t v18 = __asm_vdivsd(v11, v8); // 0x180290e20
                __asm_vcvtsd2ss(v18, v18);
                // 0x180290fb6
                __asm_vmovaps(v2);
                __asm_vmovaps(v6);
                return result4;
            }
            uint64_t v19 = __asm_vmovq(__asm_vdivsd(__asm_vmulsd_26(__asm_vmovq_30(0x4630000000000000), v11), v8)); // 0x180290d7b
            int64_t v20 = v19 / 0x10000000000000 & 2047; // 0x180290d96
            int64_t v21; // 0x180290c00
            int64_t v22; // 0x180290c00
            if ((int32_t)v20 < 101) {
                int64_t v23 = 101 - v20; // 0x180290dda
                if ((int32_t)v23 < 55) {
                    uint64_t v24 = __asm_shrx(v19 & 0xfffffffffffff | 0x10000000000000, 100 - v20); // 0x180290def
                    int64_t v25 = v24 & 1; // 0x180290df7
                    v21 = v25;
                    v22 = v24 / 2 + v25;
                } else {
                    // 0x180290de1
                    v21 = v23 & 0xffffffff;
                    v22 = 0;
                }
            } else {
                // 0x180290d9f
                v21 = -0x7ff0000000000001;
                v22 = (v19 & 0x7ff0000000000000) - 0x640000000000000 | v19 & 0xfffffffffffff;
            }
            int128_t v26 = __asm_vmovq_30(v22 | v19 & -0x8000000000000000); // 0x180290e03
            int64_t result5 = v21; // 0x180290e0b
            if ((v22 & 0x7ff0000000000000) == 0) {
                // 0x180290e0d
                result5 = function_18028a990(48);
            }
            // 0x180290e17
            __asm_vcvtsd2ss(v26, v26);
            // 0x180290fb6
            __asm_vmovaps(v2);
            __asm_vmovaps(v6);
            return result5;
        }
        if (v9 < 0 != v17 < -26) {
            if (v13 == 0x7ff0000000000000 == v14 == 0x7ff0000000000000) {
                int64_t result6 = function_18028a990(32); // 0x180290e4a
                if (v9 >= 0) {
                    if (v12 >= 0) {
                        // 0x180290e85
                        __asm_vmovss(0x3f490fdb);
                    } else {
                        // 0x180290e78
                        __asm_vmovss(-0x40b6f025);
                    }
                } else {
                    if (v12 >= 0) {
                        // 0x180290e66
                        __asm_vmovss(0x4016cbe4);
                    } else {
                        // 0x180290e59
                        __asm_vmovss(-0x3fe9341c);
                    }
                }
                // 0x180290fb6
                __asm_vmovaps(v2);
                __asm_vmovaps(v6);
                return result6;
            }
            // 0x180290e92
            int128_t v27; // 0x180290c00
            int128_t v28; // 0x180290c00
            __asm_vmovaps_55(v28, v27);
            int128_t v29 = __asm_vmovsd((int64_t)g252); // 0x180290e98
            int128_t v30 = v8; // 0x180290ea3
            if (v9 < 0) {
                // 0x180290ea5
                v30 = __asm_vxorpd(v8, v29);
            }
            int128_t v31 = v11; // 0x180290eac
            if (v12 < 0) {
                // 0x180290eae
                v31 = __asm_vxorpd(v11, v29);
            }
            // 0x180290eb2
            __asm_vcomisd(v31, v30);
            int128_t v32 = __asm_vblendvpd(v30, v31, __asm_vpcmpeqq(__asm_vmovd_49(0), __asm_vmovd_49(0))); // 0x180290eca
            int128_t v33 = __asm_vpcmpeqq(__asm_vmovd_49(0), __asm_vmovd_49(0)); // 0x180290ed8
            int128_t v34 = __asm_vdivsd(v32, __asm_vblendvpd(v31, v30, v33)); // 0x180290ee3
            __asm_vcomisd(v34, g531);
            __asm_vcomisd(__asm_vmovsd(0x3f1a36e2eb1c432d), v34);
            int128_t v35 = __asm_vmovsd(0x3fc2492482bd6be1); // 0x180290f5b
            int128_t v36 = __asm_vmulsd_26(v34, v34); // 0x180290f63
            int128_t v37 = __asm_vfnmadd213sd(__asm_vfnmadd213sd(v35, v36, 0x3fc99999999643a3), v36, 0x3fd5555555555538); // 0x180290f70
            int128_t v38 = __asm_vfnmadd231sd_62(v34, __asm_vmulsd_26(v36, v34), v37); // 0x180290f7d
            __asm_vmovaps(v28);
            int128_t v39 = v38; // 0x180290f9b
            if (v9 < 0) {
                // 0x180290f9d
                v39 = __asm_vsubsd_25(__asm_vmovsd(0x400921fb54442d18), v38);
            }
            int128_t v40 = v39; // 0x180290fac
            if (v12 < 0) {
                // 0x180290fae
                v40 = __asm_vxorpd(v39, v29);
            }
            int128_t v41 = v40;
            __asm_vcvtsd2ss(v41, v41);
            // 0x180290fb6
            __asm_vmovaps(v2);
            __asm_vmovaps(v6);
            return result4;
        }
        goto lab_0x180290ca9;
    } else {
        int64_t result7 = function_18028a990(32); // 0x180290d05
        result9 = result7;
        if (v12 >= 0) {
            // 0x180290d0f
            __asm_vmovss(0x3fc90fdb);
            // 0x180290fb6
            __asm_vmovaps(v2);
            __asm_vmovaps(v6);
            return result7;
        }
        goto lab_0x180290cee;
    }
  lab_0x180290ca9:;
    int64_t result8 = function_18028a990(32); // 0x180290cae
    if (v12 >= 0) {
        // 0x180290cc5
        __asm_vmovss(*(int32_t *)&g248);
    } else {
        // 0x180290cb8
        __asm_vmovss(-0x3fb6f025);
    }
    // 0x180290fb6
    __asm_vmovaps(v2);
    __asm_vmovaps(v6);
    return result8;
  lab_0x180290cee:
    // 0x180290cee
    __asm_vmovss(-0x4036f025);
    // 0x180290fb6
    __asm_vmovaps(v2);
    __asm_vmovaps(v6);
    return result9;
}

// Address range: 0x180290fdc - 0x1802910e4
int64_t function_180290fdc(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x180291006
    int64_t v2; // bp-64, 0x180290fdc
    function_1802718b0(&v2, (int64_t)a3);
    char v3; // 0x180290fdc
    if ((int32_t)v1 >= 256) {
        uint64_t v4 = v1 / 256;
        int64_t v5; // 0x180290fdc
        int16_t v6 = *(int16_t *)(*(int64_t *)v5 + (2 * v4 & 510)); // 0x180291043
        int64_t v7 = v6 < 0 ? 2 : 1;
        int64_t v8 = 0x100000000000000 * (v6 < 0 ? v4 : a1) / 0x100000000000000;
        int32_t v9 = 0; // bp-32, 0x18029106a
        int32_t v10 = *(int32_t *)(v5 + 12); // 0x180291079
        int64_t v11; // bp-56, 0x180290fdc
        int64_t v12 = function_180292fa4((int32_t)(int64_t)&v11, 1, (int64_t)&v8, v7, (int64_t)&v9, (int64_t)v10, 1); // 0x18029108c
        if ((int32_t)v12 == 0) {
            if (v3 != 0) {
                int32_t * v13 = (int32_t *)(v2 + 936); // 0x18029109e
                *v13 = *v13 & -3;
            }
            // 0x1802910bf
            return function_18026ad50((int64_t)g731);
        }
    }
    if (v3 != 0) {
        int32_t * v14 = (int32_t *)(v2 + 936); // 0x1802910b8
        *v14 = *v14 & -3;
    }
    // 0x1802910bf
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802910e4 - 0x180291150
int64_t function_1802910e4(int64_t a1, int64_t a2) {
    uint16_t v1 = (int16_t)a1; // 0x1802910f6
    if (v1 == -1) {
        // 0x180291145
        return 0;
    }
    if (v1 < 256) {
        // 0x180291145
        return (int64_t)*(int16_t *)((2 * a1 & 0x1fffe) + (int64_t)g751) & a2;
    }
    int64_t lpSrcStr = 0x1000000000000 * a1 / 0x1000000000000; // bp+24, 0x180291119
    int16_t lpCharType = 0; // 0x180291123
    if (!GetStringTypeW(1, (int16_t *)&lpSrcStr, 1, &lpCharType)) {
        // 0x180291145
        return 0;
    }
    // 0x180291145
    return (int64_t)lpCharType & a2;
}

// Address range: 0x180291150 - 0x180291164
int64_t function_180291150(int64_t a1, int64_t a2) {
    // 0x180291150
    return function_18029a570(function_18029a580() & 0xffffffff);
}

// Address range: 0x180291170 - 0x1802912ea
int64_t function_180291170(int64_t a1, int64_t a2) {
    // 0x180291170
    int128_t v1; // 0x180291170
    int64_t v2 = __asm_movaps_19(v1); // 0x18029117d
    int64_t v3 = a2 & 0xffffffff; // 0x180291198
    int128_t v4; // 0x180291170
    __asm_movsd_17(v4);
    int64_t v5; // bp-184, 0x180291170
    int64_t v6 = &v5; // 0x1802911a3
    int128_t v7; // 0x180291170
    v5 = __asm_movsd_17(v7);
    int128_t v8 = __asm_movaps(v4); // 0x1802911ae
    int64_t v9 = a1 & 0xffffffff; // 0x1802911b1
    int64_t v10; // 0x180291170
    int64_t v11 = function_1802912f0(a1, v6, v10); // 0x1802911b3
    int64_t v12 = a1; // 0x1802911ba
    int64_t v13 = v6; // 0x1802911ba
    int64_t v14; // 0x180291170
    int64_t v15; // 0x180291170
    int64_t v16; // 0x180291170
    if ((int32_t)v11 == 0) {
        // 0x1802911bc
        int128_t v17; // 0x180291170
        int128_t v18 = __asm_xorps(v17, v17); // 0x1802911bc
        int64_t v19; // bp+40, 0x180291170
        v13 = &v19;
        int128_t v20; // bp-168, 0x180291170
        v12 = &v20;
        __asm_movups(0, v18);
        int128_t v21; // 0x180291170
        __asm_movups(v21, v18);
        int128_t v22; // 0x180291170
        __asm_movups(v22, v18);
        int128_t v23; // 0x180291170
        __asm_movups(v23, v18);
        int128_t v24; // 0x180291170
        __asm_movups(v24, v18);
        int128_t v25; // 0x180291170
        __asm_movups(v25, v18);
        int128_t v26; // 0x180291170
        __asm_movups(v26, v18);
        function_1802916a0(v12, v13, v9, v3, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
        v16 = v19;
        v14 = v9;
        v15 = v3;
    }
    int64_t v27 = 5; // 0x180291229
    if ((a1 & 32) == 0) {
        // 0x180291232
        v27 = 1;
        if ((a1 & 8) == 0) {
            // 0x18029123e
            v27 = 2;
            if ((a1 & 4) == 0) {
                // 0x18029124a
                v27 = 3;
                if ((a1 & 1) == 0) {
                    // 0x180291256
                    v27 = 2 * v9 & 4;
                }
            }
        }
    }
    int32_t v28 = v27;
    int64_t result; // 0x1802912d2
    if ((char)function_180295b90() == 0) {
        if (v28 == 1) {
            // 0x1802912a9
            *(int32_t *)function_180279918(v12, v13, v14, v15) = 33;
        } else {
            int32_t v29 = v28 - 2; // 0x180291292
            if (v29 != 0 != v29 != 1) {
                // 0x18029129c
                *(int32_t *)function_180279918(v12, v13, v14, v15) = 34;
            }
        }
    } else {
        if (v28 != 0) {
            int128_t v30 = __asm_movsd(v5); // 0x18029126b
            __asm_xorps(v7, v7);
            __asm_movaps(v8);
            __asm_movsd_17(v30);
            function_180291a20(v27, v3);
            // 0x1802912c7
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v2);
            return result;
        }
    }
    // 0x1802912b4
    function_18028a8f0(v16, 0xffc0);
    __asm_movsd(v5);
    // 0x1802912c7
    result = function_18026ad50((int64_t)g731);
    __asm_movaps((int128_t)v2);
    return result;
}

// Address range: 0x1802912f0 - 0x180291662
int64_t function_1802912f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1802912f0
    int64_t v1; // 0x1802912f0
    int64_t v2; // 0x1802912f0
    if ((a1 & 8) == 0) {
        goto lab_0x180291333;
    } else {
        if ((char)a3 >= 0) {
            goto lab_0x180291333;
        } else {
            // 0x180291328
            v1 = 1;
            v2 = a1 & 23;
            goto lab_0x180291620;
        }
    }
  lab_0x180291333:
    if ((a1 & 4) == 0) {
        goto lab_0x18029134d;
    } else {
        if ((a3 & 512) == 0) {
            goto lab_0x18029134d;
        } else {
            // 0x180291340
            v1 = 4;
            v2 = a1 & 27;
            goto lab_0x180291620;
        }
    }
  lab_0x18029134d:
    if ((a1 & 1) == 0) {
        goto lab_0x180291456;
    } else {
        if ((a3 & 1024) == 0) {
            goto lab_0x180291456;
        } else {
            int32_t v3 = (int32_t)a3 & 0x6000; // 0x18029136a
            int128_t v4; // 0x1802912f0
            switch (v3) {
                case 0: {
                    // 0x18029141a
                    __asm_comisd(__asm_movsd(a2), __asm_xorps(v4, v4));
                    goto lab_0x18029143b;
                }
                case 0x2000: {
                    // 0x1802913f9
                    __asm_comisd(__asm_movsd(a2), __asm_xorps(v4, v4));
                    goto lab_0x18029143b;
                }
                case 0x4000: {
                    // 0x1802913bd
                    __asm_comisd(__asm_movsd(a2), __asm_xorps(v4, v4));
                    *(int64_t *)a2 = __asm_movsd_17(__asm_xorps(__asm_movsd(0x7fefffffffffffff), g252));
                    v1 = 8;
                    v2 = a1 & 30;
                    goto lab_0x180291620;
                }
                default: {
                    if (v3 != 0x6000) {
                        // 0x18029144e
                        v1 = 8;
                        v2 = a1 & 30;
                        goto lab_0x180291620;
                    } else {
                        // 0x180291391
                        __asm_comisd(__asm_movsd(a2), __asm_xorps(v4, v4));
                        *(int64_t *)a2 = __asm_movsd_17(__asm_xorps(__asm_movsd(0x7fefffffffffffff), g252));
                        v1 = 8;
                        v2 = a1 & 30;
                        goto lab_0x180291620;
                    }
                }
            }
        }
    }
  lab_0x180291456:;
    int64_t v5 = a1 & 31; // 0x18029131a
    v1 = 0;
    v2 = v5;
    if ((a1 & 2) != 0) {
        // 0x180291460
        v1 = 0;
        v2 = v5;
        if ((a3 & 2048) != 0) {
            int128_t v6 = __asm_movsd(a2); // 0x18029146b
            int128_t v7; // 0x1802912f0
            int64_t v8 = __asm_movaps_19(v7); // 0x18029147d
            int128_t v9 = __asm_xorps(v7, v7); // 0x180291485
            __asm_ucomisd_67(v6, v9);
            if ((a1 & 16) == 0 || (a1 & 16) != 0) {
                // 0x1802915ff
                int128_t v10; // 0x1802912f0
                int64_t v11 = __asm_movaps_19(v10); // 0x1802914a2
                int128_t v12 = function_18027eba0(); // 0x1802914ae
                __asm_movsd_17(v12);
                *(int64_t *)a2 = __asm_movsd_17(__asm_movaps(__asm_mulsd_22(v12, v9)));
                __asm_movaps((int128_t)v11);
            }
            // 0x180291608
            __asm_movaps((int128_t)v8);
            v1 = 16;
            v2 = a1 & 29;
        }
    }
    goto lab_0x180291620;
  lab_0x180291620:;
    // 0x180291620
    int64_t v13; // 0x1802912f0
    int64_t v14; // 0x1802912f0
    if ((a1 & 16) == 0) {
        goto lab_0x180291643;
    } else {
        if ((a3 & 0x1000) == 0) {
            goto lab_0x180291643;
        } else {
            // 0x180291643
            v14 = v2 & 15;
            v13 = v1 | 32;
            goto lab_0x18029164d;
        }
    }
  lab_0x180291643:
    // 0x180291643
    v14 = v2;
    v13 = v1;
    if (v1 == 0) {
        // 0x180291652
        return (int32_t)v2 == 0;
    }
    goto lab_0x18029164d;
  lab_0x18029164d:
    // 0x18029164d
    function_18028a990(v13);
    // 0x180291652
    return (int32_t)v14 == 0;
  lab_0x18029143b:
    // 0x18029143b
    *(int64_t *)a2 = __asm_movsd_17(__asm_xorps(__asm_movsd(0x7ff0000000000000), g252));
    // 0x18029144e
    v1 = 8;
    v2 = a1 & 30;
    goto lab_0x180291620;
}

// Address range: 0x180291670 - 0x18029169a
int64_t function_180291670(int128_t * a1, int64_t * a2, int32_t a3, int64_t a4, int64_t * a5, int64_t * a6) {
    // 0x180291670
    int64_t v1; // 0x180291670
    int64_t v2; // 0x180291670
    return function_1802916a0((int64_t)a1, (int64_t)a2, (int64_t)a3, a4, v1, v2, 0);
}

// Address range: 0x1802916a0 - 0x1802919aa
int64_t function_1802916a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t lpArguments = a1; // 0x1802916af
    *(int32_t *)(a1 + 4) = 0;
    *(int32_t *)(lpArguments + 8) = 0;
    *(int32_t *)(lpArguments + 12) = 0;
    int32_t v1 = -0x3ffffff3; // 0x1802916de
    if ((a3 & 16) != 0) {
        int32_t * v2 = (int32_t *)(lpArguments + 4); // 0x1802916e9
        *v2 = *v2 | 1;
        v1 = -0x3fffff71;
    }
    int32_t v3 = v1; // 0x1802916f1
    if ((a3 & 2) != 0) {
        int32_t * v4 = (int32_t *)(lpArguments + 4); // 0x1802916fc
        *v4 = *v4 | 2;
        v3 = -0x3fffff6d;
    }
    int32_t v5 = v3; // 0x180291704
    if ((a3 & 1) != 0) {
        int32_t * v6 = (int32_t *)(lpArguments + 4); // 0x18029170f
        *v6 = *v6 | 4;
        v5 = -0x3fffff6f;
    }
    int32_t v7 = v5; // 0x180291717
    if ((a3 & 4) != 0) {
        int32_t * v8 = (int32_t *)(lpArguments + 4); // 0x180291722
        *v8 = *v8 | 8;
        v7 = -0x3fffff72;
    }
    int32_t dwExceptionCode = v7; // 0x18029172a
    if ((a3 & 8) != 0) {
        int32_t * v9 = (int32_t *)(lpArguments + 4); // 0x180291735
        *v9 = *v9 | 16;
        dwExceptionCode = -0x3fffff70;
    }
    int32_t * v10 = (int32_t *)(lpArguments + 8); // 0x180291749
    *v10 = ((int32_t)(lpArguments / 8) & 16 | *v10 & -17) ^ 16;
    int32_t * v11 = (int32_t *)(lpArguments + 8); // 0x180291762
    *v11 = ((int32_t)(lpArguments / 64) & 8 | *v11 & -9) ^ 8;
    int32_t * v12 = (int32_t *)(lpArguments + 8); // 0x18029177b
    *v12 = ((int32_t)(lpArguments / 256) & 4 | *v12 & -5) ^ 4;
    int32_t * v13 = (int32_t *)(lpArguments + 8); // 0x180291793
    *v13 = ((int32_t)(lpArguments / 1024) & 2 | *v13 & -3) ^ 2;
    int32_t * v14 = (int32_t *)(lpArguments + 8); // 0x1802917a8
    int32_t v15 = *v14; // 0x1802917a8
    int64_t v16; // 0x1802916a0
    int32_t v17 = (*(int32_t *)&v16 / 0x1000 ^ 1 ^ v15) & 1; // 0x1802917ab
    *v14 = v17 ^ v15;
    int64_t v18 = function_18028a9b0(v17, lpArguments); // 0x1802917b1
    v16 = v18;
    v16 = v18;
    if ((v18 & 1) != 0) {
        int32_t * v19 = (int32_t *)(lpArguments + 12); // 0x1802917c1
        *v19 = *v19 | 16;
    }
    int64_t v20 = v16;
    v16 = v20;
    if ((v20 & 4) != 0) {
        int32_t * v21 = (int32_t *)(lpArguments + 12); // 0x1802917ce
        *v21 = *v21 | 8;
    }
    int64_t v22 = v16;
    v16 = v22;
    if ((v22 & 8) != 0) {
        int32_t * v23 = (int32_t *)(lpArguments + 12); // 0x1802917db
        *v23 = *v23 | 4;
    }
    int64_t v24 = v16;
    v16 = v24;
    if ((v24 & 16) != 0) {
        int32_t * v25 = (int32_t *)(lpArguments + 12); // 0x1802917e8
        *v25 = *v25 | 2;
    }
    int32_t v26 = v16; // 0x1802917ef
    if ((v16 & 32) != 0) {
        int32_t * v27 = (int32_t *)(lpArguments + 12); // 0x1802917f5
        *v27 = *v27 | 1;
        v26 = *(int32_t *)&v16;
    }
    int32_t v28 = v26 & 0x6000; // 0x1802917fb
    int64_t v29; // 0x1802916a0
    switch (v28) {
        case 0: {
            // 0x180291843
            *(int32_t *)lpArguments = *(int32_t *)&v29 & -4;
            // break -> 0x18029184a
            return 0;
        }
        case 0x2000: {
            // 0x180291833
            *(int32_t *)lpArguments = *(int32_t *)&v29 & -3;
            *(int32_t *)lpArguments = *(int32_t *)&v29 | 1;
            // break -> 0x18029184a
            return 0;
        }
        case 0x4000: {
            // 0x180291823
            *(int32_t *)lpArguments = *(int32_t *)&v29 & -2;
            *(int32_t *)lpArguments = *(int32_t *)&v29 | 2;
            // break -> 0x18029184a
            return 0;
        }
        default: {
            if (v28 != 0x6000) {
                // branch -> 0x18029184a
            } else {
                // 0x18029181a
                *(int32_t *)lpArguments = *(int32_t *)&v29 | 3;
            }
            // break -> 0x18029184a
            return 0;
        }
    }
    int32_t * v30 = (int32_t *)&v29;
    int32_t v31 = *v30;
    *(int32_t *)lpArguments = v31 & -0x1ffe1 | 32 * (int32_t)a4 & 0x1ffe0;
    int32_t * v32 = (int32_t *)(lpArguments + 32); // 0x180291863
    *v32 = *v32 | 1;
    int32_t * v33 = (int32_t *)(lpArguments + 32);
    int32_t v34 = *v33 & -31;
    if ((int32_t)a7 == 0) {
        // 0x18029189d
        *v33 = v34 | 2;
        int64_t v35 = *(int64_t *)a5; // 0x1802918b1
        v29 = v35;
        *(int64_t *)(lpArguments + 16) = v35;
        int32_t * v36 = (int32_t *)(lpArguments + 96); // 0x1802918c0
        *v36 = *v36 | 1;
        int32_t * v37 = (int32_t *)(lpArguments + 96); // 0x1802918c8
        *v37 = *v37 & -31 | 2;
        int64_t v38 = *(int64_t *)a6; // 0x1802918d8
        v16 = v38;
        *(int64_t *)(lpArguments + 80) = v38;
    } else {
        // 0x18029186d
        *v33 = v34;
        *(int32_t *)(lpArguments + 16) = *(int32_t *)a5;
        int32_t * v39 = (int32_t *)(lpArguments + 96); // 0x180291886
        *v39 = *v39 | 1;
        int32_t * v40 = (int32_t *)(lpArguments + 96); // 0x18029188e
        *v40 = *v40 & -31;
        uint32_t v41 = *(int32_t *)a6; // 0x180291896
        v29 = v41;
        *(int32_t *)(lpArguments + 80) = v41;
    }
    // 0x1802918df
    function_18028a8d0(v29, v16);
    v16 = 0;
    RaiseException(dwExceptionCode, 0, 1, (int32_t *)&lpArguments);
    v29 = lpArguments;
    char v42 = *(char *)(lpArguments + 8); // 0x1802918fa
    char v43 = v42; // 0x1802918fe
    int64_t v44 = lpArguments; // 0x1802918fe
    if ((v42 & 16) != 0) {
        // 0x180291900
        *(int64_t *)a2 = 0;
        v44 = v29;
        v43 = *(char *)(v44 + 8);
    }
    char v45 = v43; // 0x18029190b
    int64_t v46 = v44; // 0x18029190b
    if ((v43 & 8) != 0) {
        // 0x18029190d
        *(int64_t *)a2 = v16 & -513;
        v46 = v29;
        v45 = *(char *)(v46 + 8);
    }
    char v47 = v45; // 0x180291918
    int64_t v48 = v46; // 0x180291918
    if ((v45 & 4) != 0) {
        // 0x18029191a
        *(int64_t *)a2 = v16 & -1025;
        v48 = v29;
        v47 = *(char *)(v48 + 8);
    }
    char v49 = v47; // 0x180291925
    int64_t v50 = v48; // 0x180291925
    if ((v47 & 2) != 0) {
        // 0x180291927
        *(int64_t *)a2 = v16 & -2049;
        v50 = v29;
        v49 = *(char *)(v50 + 8);
    }
    int32_t v51 = v50; // 0x180291932
    if ((v49 & 1) != 0) {
        // 0x180291934
        *(int64_t *)a2 = v16 & -0x1001;
        v51 = *v30;
    }
    int32_t v52 = v51 & 3; // 0x18029193d
    switch (v52) {
        case 0: {
            // 0x18029197a
            *(int64_t *)a2 = v16 & -0x6001;
            // break -> 0x180291981
            return 0;
        }
        case 1: {
            int64_t * v53 = (int64_t *)a2; // 0x18029196a
            *v53 = v16 & -0x4001;
            *v53 = v16 | 0x2000;
            // break -> 0x180291981
            return 0;
        }
        default: {
            // 0x180291947
            if (v52 == 2) {
                int64_t * v54 = (int64_t *)a2; // 0x18029195a
                *v54 = v16 & -0x2001;
                *v54 = v16 | 0x4000;
            } else {
                // 0x180291951
                *(int64_t *)a2 = v16 | 0x6000;
            }
            // break -> 0x180291981
            return 0;
        }
    }
    int64_t v55 = v29 + 80;
    int64_t result; // 0x1802916a0
    if ((int32_t)a7 == 0) {
        int64_t v56 = *(int64_t *)v55; // 0x18029198e
        *(int64_t *)a6 = v56;
        result = v56;
    } else {
        uint32_t v57 = *(int32_t *)v55; // 0x180291987
        *(int32_t *)a6 = v57;
        result = v57;
    }
    // 0x180291995
    return result;
}

// Address range: 0x1802919b0 - 0x1802919da
int64_t function_1802919b0(int128_t * a1, int64_t * a2, int32_t a3, int64_t a4, int64_t * a5, int32_t * a6) {
    // 0x1802919b0
    int64_t v1; // 0x1802919b0
    int64_t v2; // 0x1802919b0
    return function_1802916a0((int64_t)a1, (int64_t)a2, (int64_t)a3, a4, v1, v2, 1);
}

// Address range: 0x1802919e0 - 0x180291a13
int64_t function_1802919e0(int64_t a1) {
    int32_t v1 = a1; // 0x1802919e4
    int64_t v2; // 0x1802919e0
    int64_t v3; // 0x1802919e0
    int64_t v4; // 0x1802919e0
    if (v1 == 1) {
        int64_t result = function_180279918(0, v4, v3, v2); // 0x180291a03
        *(int32_t *)result = 33;
        // 0x180291a0e
        return result;
    }
    uint32_t v5 = v1 - 2; // 0x1802919e9
    if (v5 != 0 == (v5 != 1)) {
        // 0x180291a0e
        int64_t result2; // 0x1802919e0
        return result2;
    }
    int64_t result3 = function_180279918((int64_t)v5, v4, v3, v2); // 0x1802919f3
    *(int32_t *)result3 = 34;
    return result3;
}

// Address range: 0x180291a20 - 0x180291b79
int64_t function_180291a20(int64_t a1, int64_t a2) {
    // 0x180291a20
    int128_t v1; // 0x180291a20
    __asm_movsd_17(v1);
    int128_t v2; // 0x180291a20
    __asm_movsd_17(v2);
    int64_t v3 = 0; // bp-56, 0x180291a3e
    int128_t v4; // 0x180291a20
    int128_t v5; // 0x180291a20
    __asm_movdqu(v5, __asm_xorps(v4, v4));
    int64_t v6 = (int64_t)&g590; // 0x180291a5d
    int64_t v7 = 0;
    while (*(int32_t *)v6 != (int32_t)a2) {
        // 0x180291a64
        v6 += 16;
        if (v6 >= (int64_t)"exp") {
            goto lab_0x180291a74;
        }
        v7 = v7 + 1 & 0xffffffff;
    }
    int64_t v8 = *(int64_t *)(0x100000000 * v7 / 0x10000000 + (int64_t)&g590 + 8); // 0x180291abd
    int32_t v9; // 0x180291a20
    int64_t v10; // 0x180291a20
    if (v8 == 0) {
      lab_0x180291a74:;
        int64_t result2 = function_18028a8f0(v10, 0xffc0); // 0x180291a81
        int32_t v11 = a1; // 0x180291a86
        if (v11 == 1) {
            int64_t result = function_180279918(v10, 0xffc0, (int64_t)"exp", 0); // 0x180291b5f
            *(int32_t *)result = 33;
            // 0x180291b6a
            __asm_movsd((int64_t)v9);
            return result;
        }
        int32_t v12 = v11 - 2; // 0x180291a8f
        if (v12 != 0 == (v12 != 1)) {
            // 0x180291b6a
            __asm_movsd((int64_t)v9);
            return result2;
        }
        int64_t result3 = function_180279918(v10, 0xffc0, (int64_t)"exp", 0); // 0x180291a9d
        __asm_movsd((int64_t)v9);
        *(int32_t *)result3 = 34;
        return result3;
    }
    // 0x180291acc
    __asm_movss(v2);
    __asm_movss(v1);
    v3 = 0x100000000 * a1 / 0x100000000;
    function_18028a8f0(v10, 0xffc0);
    int64_t v13 = &v3; // 0x180291b14
    int64_t result4 = function_180295bc0(v13); // 0x180291b19
    if ((int32_t)result4 != 0) {
        // 0x180291b53
        __asm_movsd((int64_t)v9);
        return result4;
    }
    int32_t v14 = a1; // 0x180291b22
    if (v14 == 1) {
        int64_t result5 = function_180279918(v13, 0xffc0, (int64_t)"exp", 0); // 0x180291b48
        *(int32_t *)result5 = 33;
        // 0x180291b53
        __asm_movsd((int64_t)v9);
        return result5;
    }
    int32_t v15 = v14 - 2; // 0x180291b27
    if (v15 != 0 == (v15 != 1)) {
        // 0x180291b53
        __asm_movsd((int64_t)v9);
        return result4;
    }
    int64_t result6 = function_180279918(v13, 0xffc0, (int64_t)"exp", 0); // 0x180291b31
    *(int32_t *)result6 = 34;
    __asm_movsd((int64_t)v9);
    return result6;
}

// Address range: 0x180291b80 - 0x180291d7c
int64_t function_180291b80(void) {
    // 0x180291b80
    int128_t v1; // 0x180291b80
    int32_t v2 = __asm_vmovd(v1); // 0x180291b84
    uint32_t v3 = v2 & 0x7fffffff; // 0x180291b92
    int128_t v4 = __asm_vmovaps(v1); // 0x180291b96
    int128_t v5; // 0x180291b80
    int128_t v6 = __asm_vxorps(v5, v5); // 0x180291b9a
    if (v3 >= 0x7f800001) {
        // 0x180291ba5
        return function_18029a550(v2);
    }
    uint32_t v7 = v2 / 0x800000 & 255;
    if (v7 < 101) {
        int64_t result = function_18028a990(32); // 0x180291bb8
        __asm_vmovss(0x3fc90fdb);
        return result;
    }
    int64_t result2 = v3; // 0x180291b92
    if (v7 >= 127) {
        int32_t v8 = v7 - 127; // 0x180291bca
        char v9 = llvm_ctpop_i8((char)v8); // 0x180291bca
        __asm_vucomiss_53(v4, *(int32_t *)&g40);
        if (v8 != 0 || (v9 & 1) == 0) {
            // 0x180291c07
            __asm_vucomiss_53(v4, -0x40800000);
            int32_t v10; // 0x180291b80
            __asm_vmovss_54(v10, v6);
            int32_t v11; // 0x180291b80
            __asm_vmovss_54(v11, v4);
            return function_18028a180((int64_t)"acosf", 13, 0xffc00000, 1, 8);
        }
        // 0x180291bdb
        __asm_vxorps(v1, v1);
        return result2;
    }
    // 0x180291c4b
    int128_t v12; // 0x180291b80
    int128_t v13; // 0x180291b80
    __asm_vmovaps_55(v13, v12);
    int128_t v14; // 0x180291b80
    if (v2 >= 0) {
        // 0x180291c5f
        v14 = __asm_vmovaps(v4);
    } else {
        // 0x180291c55
        v14 = __asm_vxorps(v4, g48);
    }
    int128_t v15 = v14;
    int128_t v16; // 0x180291b80
    int128_t v17; // 0x180291b80
    int128_t v18; // 0x180291b80
    if (v7 < 126) {
        int128_t v19 = __asm_vmulss_56(v15, v15); // 0x180291c8a
        v16 = v15;
        v17 = v6;
        v18 = v19;
    } else {
        int128_t v20 = __asm_vsubss(__asm_vmovss(*(int32_t *)&g40), v15); // 0x180291c70
        int128_t v21 = __asm_vmulss(v20, *(int32_t *)&g38); // 0x180291c74
        int128_t v22 = __asm_vsqrtss(__asm_vmovaps(v21), v21); // 0x180291c80
        v16 = __asm_vmovaps(v22);
        v17 = v22;
        v18 = v21;
    }
    int128_t v23 = v18;
    int128_t v24 = __asm_vmovss(0x3b81ce6b); // 0x180291c8e
    int128_t v25 = __asm_vfmsub213ss(__asm_vfnmadd213ss(v24, v23, -0x43a4c01f), v23, 0x3d678bdd); // 0x180291c9f
    int128_t v26 = __asm_vmulss_56(__asm_vfmadd213ss(v25, v23, 0x3e3c94dc), v23); // 0x180291cb1
    int128_t v27 = __asm_vdivss(v26, __asm_vfnmadd213ss(__asm_vmovss(0x3f561f0d), v23, 0x3f8d6fa5)); // 0x180291cc6
    if (v7 < 126) {
        int128_t v28 = __asm_vmovsd(0x3c91a62633145c07); // 0x180291d45
        int128_t v29 = __asm_vmulss_56(v27, v4); // 0x180291d4d
        __asm_vmovaps(v13);
        int128_t v30 = __asm_vsubsd_25(v28, __asm_vcvtss2sd(v29, v29)); // 0x180291d5b
        int128_t v31 = __asm_vsubsd_25(__asm_vmovsd(0x3ff921fb54442d18), __asm_vsubsd_25(__asm_vcvtss2sd(v4, v4), v30)); // 0x180291d6f
        __asm_vcvtsd2ss(v31, v31);
        return result2;
    }
    int128_t v32 = v17;
    int128_t v33 = v16;
    if (v2 >= 0) {
        uint32_t result3 = __asm_vmovd(v32) & -0x10000; // 0x180291d0b
        int128_t v34 = __asm_vmovd_49(result3); // 0x180291d10
        int128_t v35 = __asm_vaddss_57(v34, v32); // 0x180291d14
        int128_t v36 = __asm_vdivss(__asm_vfnmadd231ss(__asm_vmovaps(v23), v34, v34), v35); // 0x180291d21
        int128_t v37 = __asm_vfmadd231ss(__asm_vaddss_57(v36, v36), v27, __asm_vaddss_57(v33, v33)); // 0x180291d2d
        __asm_vmovaps(v13);
        __asm_vaddss_57(v37, __asm_vaddss_57(v34, v34));
        return result3;
    }
    int128_t v38 = __asm_vmulss_56(v33, v27); // 0x180291cd0
    __asm_vmovaps(v13);
    int128_t v39 = __asm_vsubsd(__asm_vcvtss2sd(v38, v38), 0x3c91a62633145c07); // 0x180291cde
    int128_t v40 = __asm_vcvtss2sd(v32, v32); // 0x180291ce6
    int128_t v41 = __asm_vmovsd(0x400921fb54442d18); // 0x180291cea
    int128_t v42 = __asm_vaddsd(v39, v40); // 0x180291cf2
    int128_t v43 = __asm_vsubsd_25(v41, __asm_vaddsd(v42, v42)); // 0x180291cfa
    __asm_vcvtsd2ss(v43, v43);
    return result2;
}

// Address range: 0x180291d7c - 0x180291d95
int64_t function_180291d7c(void) {
    int64_t v1 = *(int64_t *)(__readgsqword(48) + 96); // 0x180291d85
    return (int64_t)(*(int32_t *)(v1 + 188) / 256 & 0xffff01);
}

// Address range: 0x180291d98 - 0x180291db0
int64_t function_180291d98(void) {
    int64_t v1 = *(int64_t *)(__readgsqword(48) + 96); // 0x180291da1
    return (int64_t)(*(int32_t *)(*(int64_t *)(v1 + 32) + 8) >> 31);
}

// Address range: 0x180291db0 - 0x180291def
int64_t function_180291db0(void) {
    uint32_t result = g1340; // 0x180291db4
    if (result != 0) {
        // 0x180291dea
        return result;
    }
    // 0x180291dbf
    int32_t v1; // 0x180291db0
    int32_t v2 = result & v1; // 0x180291dbf
    int32_t v3 = v2; // 0x180291dbf
    v3 = v2;
    if ((char)function_180291d98() == 0) {
        // 0x180291dcc
        function_18028dc70(&v3);
    }
    int64_t result2 = v3 == 1 ? 2 : 1; // 0x180291de0
    g1340 = result2;
    // 0x180291dea
    return result2;
}

// Address range: 0x180291df0 - 0x180291e1f
int64_t function_180291df0(void) {
    // 0x180291df0
    function_180291d98();
    return 1;
}

// Address range: 0x180291e20 - 0x180292122
int64_t function_180291e20(int64_t * a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t result = (int64_t)a1;
    int64_t v2 = result;
    *a1 = 0;
    int64_t v3 = result + 8; // 0x180291e44
    *(int32_t *)v3 = 0;
    int32_t * v4 = (int32_t *)(result + 4); // 0x180291e53
    *v4 = g1353;
    int64_t v5 = a2; // 0x180291e59
    int16_t * v6 = (int16_t *)&v1; // 0x180291e59
    int64_t v7; // 0x180291e20
    int16_t v8; // 0x180291e20
    while (true) {
      lab_0x180291e63:
        // 0x180291e63
        v7 = v5;
        v8 = *v6;
        switch (v8) {
            case 32: {
                // 0x180291e5b
                v5 = v7 + 2;
                v6 = (int16_t *)v5;
                goto lab_0x180291e63;
            }
            case 97: {
                // 0x180291e90
                *(int32_t *)v2 = 265;
                // 0x180291e96
                *(int32_t *)(v2 + 4) = 2;
                goto lab_0x180291e9d;
            }
            case 114: {
                // 0x180291e87
                *(int32_t *)(v2 + 4) = 1;
                goto lab_0x180291e9d;
            }
            default: {
                goto lab_0x180291e75;
            }
        }
    }
  lab_0x180291e75:;
    int64_t v9; // 0x180291e20
    int64_t v10; // 0x180291e20
    if (v8 != 119) {
        // 0x180291e75
        v9 = v1;
        v10 = v7;
        goto lab_0x1802920f4_2;
    } else {
        // 0x180291e7f
        *(int32_t *)v2 = 769;
        // 0x180291e96
        *(int32_t *)(v2 + 4) = 2;
        goto lab_0x180291e9d;
    }
  lab_0x1802920f4_2:;
    // 0x1802920f4
    int64_t v11; // 0x180291e20
    *(int32_t *)function_180279918(v2, v9, v10, v11) = 22;
    function_180271814(v2, v1, v10, v11);
    // 0x180292104
    return result;
  lab_0x180291fef:;
    // 0x180291fef
    int32_t v12; // 0x180291e20
    *(int32_t *)a1 = v12;
    int64_t v13; // 0x180291e20
    int64_t v14 = v13 & -256 | 1; // 0x180291fef
    v1 = v14;
    int64_t v15 = v14; // 0x180291fef
    int64_t v16; // 0x180291e20
    int64_t v17 = v16; // 0x180291fef
    int64_t v18; // 0x180291e20
    int64_t v19 = v18; // 0x180291fef
    int64_t v20; // 0x180291e20
    int64_t v21 = v20; // 0x180291fef
    int64_t v22; // 0x180291e20
    int64_t v23 = v22; // 0x180291fef
    goto lab_0x180291ff1;
  lab_0x180291fe4:;
    int64_t v75 = v13 & -256; // 0x180291fe4
    v1 = v75;
    v15 = v75;
    v17 = v16;
    v19 = v18;
    v21 = v20;
    int64_t v39; // 0x180291e20
    v23 = v39;
    goto lab_0x180291ff1;
  lab_0x180291f65:;
    // 0x180291f65
    int32_t v38; // 0x180291e20
    *(int32_t *)a1 = v38;
    int64_t v76 = v13 & -256 | 1; // 0x180291f68
    v1 = v76;
    v15 = v76;
    v17 = v16;
    v19 = v18;
    v21 = 1;
    v23 = v22;
    goto lab_0x180291ff1;
  lab_0x180291ff1:;
    int64_t v24 = (char)v15 == 0 ? 0 : 2; // 0x180291ff8
    v2 = v24;
    int64_t v25; // 0x180291e20
    int64_t v26 = v24 + v25; // 0x180291ffb
    int64_t v27 = v15; // 0x180292000
    int64_t v28 = v17; // 0x180292000
    int64_t v29 = v26; // 0x180292000
    int64_t v30 = v19; // 0x180292000
    int64_t v31 = v21; // 0x180292000
    int64_t v32 = v23; // 0x180292000
    int64_t v33 = v15; // 0x180292000
    int64_t v34 = v26; // 0x180292000
    int64_t v35 = v19; // 0x180292000
    int64_t v36 = v23; // 0x180292000
    if ((char)v15 == 0) {
        // break -> 0x180292006
        goto lab_0x180292006;
    }
    goto lab_0x180291eb4;
  lab_0x180291fc5:;
    // 0x180291fc5
    int32_t v50; // 0x180291e20
    *v4 = v50;
    int64_t v53 = v1 & -256 | 1; // 0x180291fc8
    v1 = v53;
    v15 = v53;
    v17 = v16;
    v19 = v18 & -256 | 1;
    v21 = v20;
    v23 = v22;
    goto lab_0x180291ff1;
  lab_0x180291e9d:;
    int64_t v54 = v1 & -256 | 1; // 0x180291ea1
    v1 = v54;
    v27 = v54;
    v28 = 0;
    v29 = v7 + 2;
    int64_t v55; // 0x180291e20
    v30 = v55 & -256;
    v31 = 0;
    v32 = 0;
    while (true) {
      lab_0x180291eb4:
        // 0x180291eb4
        v22 = v32;
        v18 = v30;
        v25 = v29;
        v13 = v27;
        uint16_t v37 = *(int16_t *)v25; // 0x180291eb4
        v33 = v13;
        v34 = v25;
        v35 = v18;
        v36 = v22;
        if (v37 == 0) {
            // break -> 0x180292006
            return 0;
        }
        // 0x180291ebe
        v20 = v31;
        v16 = v28;
        v2 = v37;
        if (v37 < 84) {
            if (v37 == 83) {
                // 0x180291f59
                v38 = 115;
                v39 = v22;
                if ((char)v20 != 0) {
                    goto lab_0x180291fe4;
                } else {
                    goto lab_0x180291f65;
                }
            } else {
                int32_t v40 = v37; // 0x180291ed1
                uint32_t v41 = v40 - 32; // 0x180291ed1
                v2 = v41;
                v15 = v13;
                v17 = v16;
                v19 = v18;
                v21 = v20;
                v23 = v22;
                if (v41 == 0) {
                    goto lab_0x180291ff1;
                } else {
                    uint32_t v42 = v40 - 43; // 0x180291eda
                    v2 = v42;
                    if (v42 == 0) {
                        // 0x180291f27
                        v39 = v22;
                        if ((char)v16 != 0) {
                            goto lab_0x180291fe4;
                        } else {
                            // 0x180291f3d
                            v1 = v13 & -256 | 1;
                            *(int32_t *)a1 = 2;
                            *v4 = *v4 & -8 | 4;
                            v15 = v1;
                            v17 = 1;
                            v19 = v18;
                            v21 = v20;
                            v23 = v22;
                            goto lab_0x180291ff1;
                        }
                    } else {
                        uint32_t v43 = v40 - 44; // 0x180291edf
                        v2 = v43;
                        v39 = 1;
                        if (v43 == 0) {
                            goto lab_0x180291fe4;
                        } else {
                            uint32_t v44 = v40 - 68; // 0x180291ee4
                            v2 = v44;
                            v12 = 64;
                            if (v44 == 0) {
                                goto lab_0x180291fef;
                            } else {
                                uint32_t v45 = v40 - 78; // 0x180291ee9
                                v2 = v45;
                                v12 = 128;
                                if (v45 == 0) {
                                    goto lab_0x180291fef;
                                } else {
                                    // 0x180291eed
                                    v9 = v13;
                                    v10 = v25;
                                    v11 = v18;
                                    if (v45 != 4) {
                                        goto lab_0x1802920f4_2;
                                    }
                                    // 0x180291ef6
                                    v39 = v22;
                                    if ((char)v20 != 0) {
                                        goto lab_0x180291fe4;
                                    } else {
                                        // 0x180291eff
                                        v38 = v45 | 16;
                                        goto lab_0x180291f65;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            int32_t v46 = v37; // 0x180291f70
            uint32_t v47 = v46 - 84; // 0x180291f70
            v2 = v47;
            v12 = 0x1000;
            if (v47 == 0) {
                goto lab_0x180291fef;
            } else {
                uint32_t v48 = v46 - 98; // 0x180291f75
                v2 = v48;
                v12 = 0x8000;
                if (v48 == 0) {
                    goto lab_0x180291fef;
                } else {
                    uint32_t v49 = v46 - 99; // 0x180291f7a
                    v2 = v49;
                    if (v49 == 0) {
                        // 0x180291fbb
                        v39 = v22;
                        if ((char)v18 != 0) {
                            goto lab_0x180291fe4;
                        } else {
                            // 0x180291fc0
                            v50 = *v4 | 2048;
                            goto lab_0x180291fc5;
                        }
                    } else {
                        uint32_t v51 = v46 - 110; // 0x180291f7f
                        v2 = v51;
                        if (v51 == 0) {
                            // 0x180291faf
                            if ((char)v18 != 0) {
                                goto lab_0x180291fe4;
                            } else {
                                // 0x180291fb4
                                v50 = *v4 & -2049;
                                goto lab_0x180291fc5;
                            }
                        } else {
                            uint32_t v52 = v46 - 116; // 0x180291f84
                            v2 = v52;
                            v12 = 0x4000;
                            if (v52 == 0) {
                                goto lab_0x180291fef;
                            } else {
                                // 0x180291f89
                                v9 = v13;
                                v10 = v25;
                                v11 = v18;
                                if (v52 != 4) {
                                    goto lab_0x1802920f4_2;
                                }
                                // 0x180291f92
                                v39 = v22;
                                if ((v37 + 908 & 512) == 0) {
                                    goto lab_0x180291fe4;
                                } else {
                                    // 0x180291f9a
                                    v12 = v52 | 1024;
                                    goto lab_0x180291fef;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x180292006:;
    int64_t v56 = v34;
    int64_t v57 = (char)v36 == 0 ? v56 : v56 + 2;
    int16_t v58 = *(int16_t *)v57; // 0x180292017
    int64_t v59 = v57 + 2; // 0x18029201b
    while (v58 == 32) {
        // 0x180292017
        v57 = v59;
        v58 = *(int16_t *)v57;
        v59 = v57 + 2;
    }
    int64_t v60 = v33; // 0x180292020
    int64_t v61 = v56; // 0x180292020
    int16_t v62 = v58; // 0x180292020
    int64_t v63; // 0x180291e20
    int64_t v64; // 0x180291e20
    int64_t v65; // 0x180291e20
    int64_t v66; // 0x18029206e
    if ((char)v36 != 0) {
        // 0x180292034
        v1 = (int64_t)L"ccs";
        v2 = v57;
        v9 = (int64_t)L"ccs";
        v10 = 3;
        v11 = v35;
        if ((int32_t)function_180287b70(v57, L"ccs", 3) != 0) {
            goto lab_0x1802920f4_2;
        } else {
            int64_t v67 = v57 + 6;
            int16_t v68 = *(int16_t *)v67; // 0x18029205b
            int64_t v69 = v67 + 2; // 0x180292062
            while (v68 == 32) {
                // 0x18029205b
                v67 = v69;
                v68 = *(int16_t *)v67;
                v69 = v67 + 2;
            }
            // 0x180292064
            v9 = (int64_t)L"ccs";
            v10 = 3;
            v11 = v35;
            if (v68 != 61) {
                goto lab_0x1802920f4_2;
            } else {
                v66 = v67 + 2;
                int64_t v70 = v66; // 0x180292076
                while (*(int16_t *)v66 == 32) {
                    // 0x18029206e
                    v66 = v70 + 2;
                    v70 = v66;
                }
                // 0x180292078
                v1 = (int64_t)L"UTF-8";
                if ((int32_t)function_18029a8e0(v66, L"UTF-8", 5, v35) != 0) {
                    // 0x180292097
                    v1 = (int64_t)L"UTF-16LEUNICODE";
                    int64_t v71 = function_18029a8e0(v66, L"UTF-16LEUNICODE", 8, v35); // 0x1802920a7
                    if ((int32_t)v71 != 0) {
                        // 0x1802920b9
                        v1 = (int64_t)L"UNICODE";
                        v2 = v66;
                        int64_t v72 = function_18029a8e0(v66, L"UNICODE", 7, v35); // 0x1802920c9
                        v9 = (int64_t)L"UNICODE";
                        v10 = 7;
                        v11 = v35;
                        if ((int32_t)v72 != 0) {
                            goto lab_0x1802920f4_2;
                        } else {
                            // 0x1802920d2
                            *(int32_t *)a1 = *(int32_t *)&v2 | 0x10000;
                            v63 = (int64_t)L"UNICODE";
                            v65 = v72 + 14 & 0xffffffff;
                            v64 = 7;
                            goto lab_0x1802920d9;
                        }
                    } else {
                        // 0x1802920b0
                        *(int32_t *)a1 = *(int32_t *)&v2 | 0x20000;
                        v63 = (int64_t)L"UTF-16LEUNICODE";
                        v65 = v71 + 16 & 0xffffffff;
                        v64 = 8;
                        goto lab_0x1802920d9;
                    }
                } else {
                    // 0x180292091
                    *(int32_t *)a1 = *(int32_t *)&v2 | 0x40000;
                    v63 = (int64_t)L"UTF-8";
                    v65 = 10;
                    v64 = 5;
                    goto lab_0x1802920d9;
                }
            }
        }
    } else {
        goto lab_0x180292025;
    }
  lab_0x180292025:
    // 0x180292025
    v9 = v60;
    v10 = v61;
    v11 = v35;
    if (v62 == 0) {
        // 0x18029202b
        *(char *)v3 = 1;
        // 0x180292104
        return result;
    }
    goto lab_0x1802920f4_2;
  lab_0x1802920d9:;
    int64_t v73 = v65 + v66; // 0x1802920dd
    v2 = v73;
    int16_t v74 = *(int16_t *)v73; // 0x1802920e3
    v60 = v63;
    v61 = v64;
    v62 = v74;
    v73 += 2;
    while (v74 == 32) {
        // 0x1802920e3
        v2 = v73;
        v74 = *(int16_t *)v73;
        v60 = v63;
        v61 = v64;
        v62 = v74;
        v73 += 2;
    }
    goto lab_0x180292025;
}

// Address range: 0x180292124 - 0x1802921be
int64_t function_180292124(int64_t a1) {
    // 0x180292124
    int64_t v1; // bp-24, 0x180292124
    int64_t v2; // 0x180292124
    int64_t v3 = function_180291e20(&v1, v2); // 0x180292145
    int64_t v4 = __asm_movsd_17(__asm_movsd(*(int64_t *)v3)); // 0x180292150
    if (*(char *)(v3 + 8) == 0) {
        // 0x1802921a6
        return 0;
    }
    int32_t v5 = 0; // bp+24, 0x180292168
    int64_t v6; // 0x180292124
    int64_t v7 = function_18029b51c((int64_t *)&v5, a1, v4 & 0xffffffff, v6 & 0xffffffff, 384); // 0x180292177
    if ((int32_t)v7 == 0) {
        // 0x180292180
        g1276++;
        int64_t v8; // 0x180292124
        int32_t * v9 = (int32_t *)(v8 + 20); // 0x18029218a
        int32_t v10; // 0x180292124
        *v9 = *v9 | v10;
        *(int32_t *)(v8 + 16) = 0;
        *(int64_t *)(v8 + 40) = 0;
        *(int64_t *)(v8 + 8) = 0;
        *(int64_t *)v8 = 0;
        *(int32_t *)(v8 + 24) = v5;
    }
    // 0x1802921a6
    return 0;
}

// Address range: 0x1802921c0 - 0x1802921d5
int64_t function_1802921c0(int64_t a1) {
    // 0x1802921c0
    int64_t v1; // 0x1802921c0
    int64_t v2; // 0x1802921c0
    int64_t v3; // 0x1802921c0
    return function_18026b7dc((int128_t)a1, v3, v2, v1);
}

// Address range: 0x180292220 - 0x1802922b9
int64_t function_180292220(void) {
    // 0x180292220
    int128_t v1; // 0x180292220
    int64_t v2 = __asm_movaps_19(v1); // 0x180292224
    int128_t v3; // 0x180292220
    int128_t v4 = __asm_movaps(v3); // 0x180292229
    int128_t v5; // 0x180292220
    int128_t v6 = __asm_movaps(v5); // 0x18029222f
    int64_t v7; // 0x180292220
    uint32_t v8 = (int32_t)v7 - 1; // 0x180292232
    int64_t v9; // 0x180292220
    if (v8 == 0) {
        // 0x180292267
        __asm_movsd_17(__asm_xorps(v5, v5));
        __asm_movsd_17(v6);
        v9 = 2;
    } else {
        if (v8 != 1) {
            // 0x1802922ac
            __asm_movaps(v4);
            __asm_movaps((int128_t)v2);
            int64_t result; // 0x180292220
            return result;
        }
        // 0x18029223e
        int128_t v10; // 0x180292220
        __asm_movsd_17(__asm_xorps(v10, v10));
        __asm_movsd_17(v5);
        v9 = v8;
    }
    int64_t v11 = __asm_movsd_17(v4); // 0x18029229c
    int64_t v12; // 0x180292220
    int64_t v13; // 0x180292220
    int64_t result2 = function_18028a040(v13, v12 & 0xffffffff, v11, v9, (int32_t)&g1381); // 0x1802922a7
    // 0x1802922ac
    __asm_movaps(v4);
    __asm_movaps((int128_t)v2);
    return result2;
}

// Address range: 0x1802922e0 - 0x180292382
int64_t function_1802922e0(void) {
    // 0x1802922e0
    int128_t v1; // 0x1802922e0
    int64_t v2 = __asm_movaps_19(v1); // 0x1802922e4
    int128_t v3; // 0x1802922e0
    int128_t v4 = __asm_movaps(v3); // 0x1802922e9
    int128_t v5; // 0x1802922e0
    int128_t v6 = __asm_movaps(v5); // 0x1802922ef
    int64_t v7; // 0x1802922e0
    uint32_t v8 = (int32_t)v7 - 1; // 0x1802922f2
    int64_t v9; // 0x1802922e0
    if (v8 == 0) {
        // 0x180292327
        __asm_movss(__asm_xorps(v5, v5));
        __asm_movss(v6);
        v9 = 2;
    } else {
        if (v8 != 1) {
            // 0x180292375
            __asm_movaps(v4);
            __asm_movaps((int128_t)v2);
            int64_t result; // 0x1802922e0
            return result;
        }
        // 0x1802922fe
        __asm_movss(__asm_xorps(v3, v3));
        __asm_movss(v6);
        v9 = v8;
    }
    int64_t v10 = __asm_movss(v4); // 0x180292365
    int64_t v11; // 0x1802922e0
    int64_t v12; // 0x1802922e0
    int64_t result2 = function_18028a180(v12, v11 & 0xffffffff, 0x100000000 * v10 / 0x100000000, v9, (int32_t)&g1381); // 0x180292370
    // 0x180292375
    __asm_movaps(v4);
    __asm_movaps((int128_t)v2);
    return result2;
}

// Address range: 0x180292390 - 0x180292ae0
int128_t function_180292390(void) {
    // 0x180292390
    int128_t v1; // 0x180292390
    uint64_t v2; // 0x180292390
    __asm_vmovsd_77(v2, v1);
    int64_t v3 = (uint64_t)(v2 / 0x10000000000000); // 0x1802923b6
    int128_t v4; // 0x180292390
    __asm_vmovsd_77(v2, v4);
    uint32_t v5 = (int32_t)v3;
    int128_t v6; // 0x180292390
    int128_t v7; // 0x180292390
    __asm_vmovaps_55(v6, v7);
    int64_t v8; // 0x180292390
    __asm_vmovsd_77(v8, v1);
    int128_t v9 = __asm_vmovaps(v4); // 0x1802923ef
    int64_t v10; // 0x180292390
    if (v5 >= 2047) {
        goto lab_0x18029241b;
    } else {
        // 0x1802923fa
        v10 = 0;
        if ((v5 & 2047) >= 1086) {
            goto lab_0x18029241b;
        } else {
            goto lab_0x1802926eb;
        }
    }
  lab_0x18029241b:;
    uint64_t v11 = __asm_vmovq(v9); // 0x18029241b
    uint64_t v12 = 2 * v11; // 0x18029242a
    int64_t v13 = __asm_vmovq(v1);
    int64_t v14; // 0x180292390
    int64_t v15; // 0x180292390
    int64_t v16; // 0x180292390
    int128_t v17; // 0x180292390
    if (v12 < 0xffe0000000000000) {
        int64_t v18 = 2 * v13; // 0x1802924ff
        if (v18 >= 0xffe0000000000000) {
            int128_t v19 = __asm_vmulsd_26(v1, v1); // 0x180292510
            int128_t v20 = v19; // 0x180292517
            int64_t v21 = 0; // 0x180292517
            if (v13 <= 0xffffffffffffffff) {
                int64_t v22 = v11 / 0x10000000000000 & 2047; // 0x180292520
                v20 = v19;
                v21 = 0;
                if ((int32_t)v22 < 1076) {
                    int64_t v23 = __asm_shlx(1, 1075 - v22 & 0xffffffff); // 0x18029253d
                    v20 = v19;
                    v21 = 0;
                    if ((v23 & v11) != 0 && (v23 - 1 & v11) == 0) {
                        // 0x180292550
                        v20 = __asm_vxorpd(v19, g252);
                        v21 = 1;
                    }
                }
            }
            // 0x18029255b
            if (v18 != 0) {
                // 0x18029257a
                v17 = v20;
                if (v11 <= 0xffffffffffffffff) {
                    // 0x180292583
                    __asm_vmovsd_77(v2, __asm_vdivsd(__asm_vmovsd(0x3ff0000000000000), v20));
                    v17 = __asm_vmovsd(v2);
                }
            } else {
                // 0x180292560
                v17 = v20;
                if (v11 <= 0xffffffffffffffff) {
                    // 0x180292569
                    function_180292b50(v21);
                    v17 = __asm_vmovaps(v1);
                }
            }
            // 0x180292ac1
            __asm_vmovaps(v6);
            return __asm_vmovaps(v17);
        }
        // 0x1802925a6
        v16 = v13;
        v15 = 0;
        v14 = v3;
        if (v13 > -1) {
            goto lab_0x180292619;
        } else {
            uint32_t v24 = (int32_t)(v11 / 0x10000000000000 & 2047); // 0x1802925c3
            if (v24 < 1023) {
                goto lab_0x180292660;
            } else {
                // 0x1802925d0
                if (v24 < 1076) {
                    // 0x1802925e1
                    int64_t v25; // 0x1802925bc
                    if ((__asm_shlx(1, 1075 - v25 & 0xffffffff) - 1 & v11) != 0) {
                        goto lab_0x180292660;
                    } else {
                        // 0x1802925f7
                        goto lab_0x180292602;
                    }
                } else {
                    goto lab_0x180292602;
                }
            }
        }
    } else {
        if (v12 != 0) {
            if (v13 != 0x3ff0000000000000) {
                uint64_t v26 = 2 * v13; // 0x1802924ae
                if (v12 > 0xffe0000000000000 || v26 > 0xffe0000000000000) {
                    goto lab_0x1802924a4;
                } else {
                    if (v26 != 0x7fe0000000000000) {
                        if (((int32_t)(v11 / 0x8000000000000000) ^ 1) != (int32_t)(v26 < 0x7fe0000000000000)) {
                            // 0x1802924f0
                            v17 = __asm_vmulsd_26(v9, v9);
                        } else {
                            // 0x1802924e7
                            v17 = __asm_vxorpd(v4, v4);
                        }
                        // 0x180292ac1
                        __asm_vmovaps(v6);
                        return __asm_vmovaps(v17);
                    }
                    goto lab_0x180292464;
                }
            } else {
                // 0x180292480
                if ((2 * __asm_vmovq(v9) ^ 0x10000000000000) < 0xfff0000000000001) {
                    goto lab_0x180292464;
                } else {
                    goto lab_0x1802924a4;
                }
            }
        } else {
            if ((2 * v13 ^ 0x10000000000000) < 0xfff0000000000001) {
                goto lab_0x180292464;
            } else {
                goto lab_0x1802924a4;
            }
        }
    }
  lab_0x1802926eb:;
    // 0x1802926eb
    int128_t v27; // 0x180292390
    int128_t v28; // 0x180292390
    __asm_vmovaps_55(v27, v28);
    int128_t v29; // 0x180292390
    int128_t v30; // 0x180292390
    __asm_vmovaps_55(v29, v30);
    int128_t v31 = __asm_vmovsd(0x3fe62e42fefa3800); // 0x18029270e
    int128_t v32; // 0x180292390
    int128_t v33; // 0x180292390
    __asm_vmovaps_55(v32, v33);
    int128_t v34; // 0x180292390
    int128_t v35; // 0x180292390
    __asm_vmovaps_55(v34, v35);
    int64_t v36; // 0x180292390
    int64_t v37 = v36 - 0x3fe6955500000000; // 0x18029272c
    int128_t v38; // 0x180292390
    int128_t v39; // 0x180292390
    __asm_vmovaps_55(v38, v39);
    int128_t v40; // 0x180292390
    int128_t v41; // 0x180292390
    __asm_vmovaps_55(v40, v41);
    int128_t v42; // 0x180292390
    int128_t v43; // 0x180292390
    __asm_vmovaps_55(v43, v42);
    int128_t v44 = __asm_vmovsd(-0x4010000000000000); // 0x18029274a
    int64_t v45 = v37 / 0x10000000000 & 4064; // 0x180292766
    int128_t v46 = __asm_vmovq_30(v36 - (v37 & -0x10000000000000)); // 0x18029276a
    int128_t v47 = __asm_vcvtsi2sd_78(__asm_vxorps(v41, v41), (int32_t)(v37 / 0x10000000000000)); // 0x180292774
    int128_t v48 = __asm_vmovsd(*(int64_t *)(v45 + 0x1802f9258)); // 0x180292778
    int128_t v49 = __asm_vfmadd213sd(v31, v47, *(int64_t *)(v45 + 0x1802f9268)); // 0x180292781
    int128_t v50 = __asm_vfmadd213sd_51(v48, v46, v44); // 0x18029278b
    int128_t v51 = __asm_vmulsd(v50, -0x4020000000000000); // 0x180292790
    int128_t v52 = __asm_vmovsd(0x3fe0000000000006); // 0x180292798
    int128_t v53 = __asm_vmulsd_26(v51, v50); // 0x1802927a0
    int128_t v54 = __asm_vaddsd(v49, v50); // 0x1802927a5
    int128_t v55 = __asm_vaddsd(v53, v54); // 0x1802927aa
    int128_t v56 = __asm_vmulsd_26(v53, v50); // 0x1802927af
    int128_t v57 = __asm_vmovaps(v50); // 0x1802927b4
    int128_t v58 = __asm_vmovaps(v50); // 0x1802927b9
    int128_t v59 = __asm_vfmadd213sd(__asm_vmovaps(v50), v52, -0x401aaaaaaaaaaaa0); // 0x1802927c3
    int128_t v60 = __asm_vfmadd213sd(v57, __asm_vmovsd(-0x401aaaaaaad65b86), 0x3fe999999959554e); // 0x1802927d4
    int128_t v61 = __asm_vfmadd213sd(v58, __asm_vmovsd(0x3ff0002b8b263fc3), -0x400db6a464b7ba17); // 0x1802927e5
    int128_t v62 = __asm_vxorpd(v53, g252); // 0x1802927ee
    int128_t v63 = __asm_vfmadd231sd(v60, v53, v61); // 0x1802927f6
    int128_t v64 = __asm_vfmadd213sd_51(v51, v50, v62); // 0x1802927fb
    int128_t v65 = __asm_vfmadd231sd(v59, v53, v63); // 0x180292800
    int128_t v66 = __asm_vfmadd213sd(__asm_vmovsd(0x3d2ef35793c76730), v47, *(int64_t *)(v45 + 0x1802f9270)); // 0x18029280d
    __asm_vmovaps(v40);
    int128_t v67 = __asm_vaddsd(__asm_vsubsd_25(v49, v54), v50); // 0x180292822
    __asm_vmovaps(v38);
    int128_t v68 = __asm_vsubsd_25(v54, v55); // 0x18029282d
    __asm_vmovaps(v32);
    int128_t v69 = __asm_vaddsd(v66, v67); // 0x180292838
    int128_t v70 = __asm_vfmadd231sd(__asm_vaddsd(__asm_vaddsd(v64, v69), __asm_vaddsd(v68, v53)), v56, v65); // 0x180292848
    int128_t v71 = __asm_vaddsd(v70, v55); // 0x18029284d
    int128_t v72 = __asm_vmulsd_26(v71, v9); // 0x180292852
    int128_t v73 = __asm_vxorpd(v72, g252); // 0x180292857
    __asm_vmovsd_77(v2, v72);
    int64_t v74 = v3 & 2047; // 0x180292874
    int128_t v75 = __asm_vfmadd213sd_51(__asm_vmovaps(v9), v71, v73); // 0x180292880
    int128_t v76 = __asm_vsubsd_25(v55, v71); // 0x180292885
    __asm_vmovaps(v34);
    int128_t v77 = __asm_vfmadd231sd(v75, v9, __asm_vaddsd(v76, v70)); // 0x18029289a
    uint32_t v78 = (int32_t)v74;
    int32_t v79 = v78 - 969; // 0x18029289f
    int64_t v80 = v74; // 0x1802928a2
    int128_t v81; // 0x180292390
    if (v79 < 63) {
        goto lab_0x180292905;
    } else {
        if (v79 > -1) {
            // 0x1802928c7
            v80 = 0;
            if (v78 < 1033) {
                goto lab_0x180292905;
            } else {
                // 0x1802928d0
                __asm_vmovsd_77(v2, v72);
                if (v2 > -1) {
                    // 0x1802928f4
                    int32_t v82; // 0x180292390
                    function_180292bf0(v82);
                    v81 = __asm_vmovaps(v76);
                } else {
                    // 0x1802928e6
                    v81 = __asm_vmovaps(function_180292c40((int32_t)v10));
                }
                goto lab_0x180292aa9;
            }
        } else {
            int128_t v83 = __asm_vaddsd_50(v72, 0x3ff0000000000000); // 0x1802928a9
            v81 = v83;
            if ((int32_t)v10 != 0) {
                // 0x1802928ba
                v81 = __asm_vxorpd(v83, g252);
            }
            goto lab_0x180292aa9;
        }
    }
  lab_0x180292619:;
    uint32_t v84 = v5 & 2047;
    if (v84 < 1086) {
        // 0x1802926b7
        v36 = v16;
        v10 = v15;
        if (v14 == 0) {
            // 0x1802926bc
            __asm_vmovsd_77(v2, v1);
            int128_t v85 = __asm_vmulsd(__asm_vmovsd(v2), 0x4330000000000000); // 0x1802926ce
            v36 = (__asm_vmovq(v85) & 0x7fffffffffffffff) - 0x340000000000000;
            v10 = v15;
        }
        goto lab_0x1802926eb;
    } else {
        if (v16 != 0x3ff0000000000000) {
            if (v84 >= 958) {
                if (v16 >= 0x3ff0000000000001 != v5 < 2048) {
                    // 0x1802926a9
                    v17 = __asm_vmovaps(function_180292c40(0));
                } else {
                    // 0x18029269b
                    function_180292bf0(0);
                    v17 = __asm_vmovaps(v1);
                }
            } else {
                if (v16 > 0x3ff0000000000000) {
                    // 0x180292653
                    v17 = __asm_vaddsd_50(v9, 0x3ff0000000000000);
                } else {
                    // 0x18029266e
                    v17 = __asm_vsubsd_25(__asm_vmovsd(0x3ff0000000000000), v9);
                }
            }
            // 0x180292ac1
            __asm_vmovaps(v6);
            return __asm_vmovaps(v17);
        }
        goto lab_0x180292464;
    }
  lab_0x180292905:;
    int128_t v86 = __asm_vmovsd(0x40771547652b82fe); // 0x180292905
    __asm_vmovsd_77(v2, __asm_vfmadd213sd(__asm_vmovaps(v72), v86, 0x4238000000008000));
    uint64_t v87 = v2 / 0x10000; // 0x18029292b
    int128_t v88 = __asm_vcvtsi2sd_78(__asm_vxorps(v86, v86), (int32_t)v87); // 0x180292933
    int128_t v89 = __asm_vmovaps(v72); // 0x180292937
    int128_t v90 = __asm_vfmadd231sd_28(__asm_vfmadd231sd_28(v89, v88, -0x4099d1bd01040000), v88, 0x3d2c610ca86c3899); // 0x180292944
    int128_t v91 = __asm_vmovsd(0x3f81111167a4b553); // 0x18029294d
    int128_t v92 = __asm_vaddsd(v90, v77); // 0x180292955
    int128_t v93 = __asm_vmovsd(0x3fc555555555543c); // 0x180292959
    int128_t v94 = __asm_vmulsd_26(v92, v92); // 0x180292961
    int64_t v95 = 16 * v87 & 4080; // 0x180292968
    int128_t v96 = __asm_vfmadd213sd(__asm_vmovaps(v92), v93, 0x3fdffffffffffdbd); // 0x180292979
    int128_t v97 = __asm_vaddsd_50(v92, *(int64_t *)(v95 + 0x1802f8210)); // 0x180292982
    int64_t v98 = *(int64_t *)(v95 + 0x1802f8218) + 0x100000000000 * (v10 + v87); // 0x18029298b
    int128_t v99 = __asm_vfmadd213sd(__asm_vmovaps(v92), v91, 0x3fa55555cf16e1ed); // 0x180292997
    int128_t v100 = __asm_vfmadd231sd(__asm_vfmadd231sd(v97, v94, v96), __asm_vmulsd_26(v94, v94), v99); // 0x1802929a9
    if (v80 != 0) {
        int128_t v101 = __asm_vmovq_30(v98); // 0x180292a9b
        v81 = __asm_vfmadd231sd(__asm_vmovaps(v101), v101, v100);
    } else {
        if ((v2 & 0x800000000000) != 0) {
            int128_t v102 = __asm_vmovsd(0x3ff0000000000000); // 0x1802929ed
            int128_t v103 = __asm_vmovsd(0x10000000000000); // 0x1802929f5
            uint64_t v104 = v98 + 0x3fe0000000000000; // 0x180292a07
            int128_t v105 = __asm_vmovq_30(v104); // 0x180292a0a
            int128_t v106 = __asm_vmulsd_26(v105, v100); // 0x180292a0f
            int128_t v107 = __asm_vaddsd(v105, v106); // 0x180292a13
            __asm_vcomisd(v102, __asm_vandpd(v107, g477));
            int128_t v108 = v107; // 0x180292a23
            if (v104 >= 0x3fe0000000000000) {
                int128_t v109 = __asm_vxorpd(v65, v65); // 0x180292a25
                int128_t v110 = __asm_vblendvpd(v102, v44, __asm_vcmpltsd(v107, v109)); // 0x180292a2e
                int128_t v111 = __asm_vsubsd_25(v105, v107); // 0x180292a34
                int128_t v112 = __asm_vaddsd(v110, v107); // 0x180292a38
                int128_t v113 = __asm_vaddsd(__asm_vaddsd(v111, v106), __asm_vaddsd(__asm_vsubsd_25(v110, v112), v107)); // 0x180292a48
                v108 = __asm_vsubsd_25(__asm_vaddsd(v113, v112), v110);
                __asm_vucomisd_79(v108, v109);
                __asm_vmovsd_77(v2, v110);
                __asm_vmovsd_77(v2, v103);
                __asm_vmovsd_77(v2, __asm_vmulsd_26(__asm_vmovsd(v2), v103));
            }
            int128_t v114 = __asm_vmulsd_26(v108, v103); // 0x180292a8c
            function_180292b20(v114);
            v81 = __asm_vmovaps(v114);
        } else {
            int128_t v115 = __asm_vmovq_30(v98 - 0x3f10000000000000); // 0x1802929c9
            int128_t v116 = __asm_vmulsd(__asm_vfmadd231sd(__asm_vmovaps(v115), v100, v115), 0x7f00000000000000); // 0x1802929d7
            function_180292ae0(v116);
            v81 = __asm_vmovaps(v116);
        }
    }
    goto lab_0x180292aa9;
  lab_0x180292660:
    // 0x180292660
    function_180292bb0();
    int128_t v117 = __asm_vmovaps(v1);
    __asm_vmovaps(v6);
    return __asm_vmovaps(v117);
  lab_0x180292464:
    // 0x180292ac1
    v117 = __asm_vmovsd(0x3ff0000000000000);
    __asm_vmovaps(v6);
    return __asm_vmovaps(v117);
  lab_0x1802924a4:
    // 0x180292ac1
    v117 = __asm_vaddsd(v1, v9);
    __asm_vmovaps(v6);
    return __asm_vmovaps(v117);
  lab_0x180292aa9:
    // 0x180292aa9
    __asm_vmovaps(v29);
    __asm_vmovaps(v27);
    __asm_vmovaps(v43);
    // 0x180292ac1
    __asm_vmovaps(v6);
    return __asm_vmovaps(v81);
  lab_0x180292602:
    // 0x180292602
    v16 = v13 & 0x7fffffffffffffff;
    v15 = 0;
    v14 = v3 & 2047;
    goto lab_0x180292619;
}

// Address range: 0x180292ae0 - 0x180292b1d
int64_t function_180292ae0(int128_t a1) {
    int128_t v1 = __asm_movaps(a1); // 0x180292ae4
    int128_t v2; // 0x180292ae0
    int64_t v3 = __asm_movaps_19(v2); // 0x180292ae7
    int128_t v4 = __asm_andps(v1, g477); // 0x180292aec
    int128_t v5 = __asm_movaps(a1); // 0x180292af3
    __asm_comisd(v4, g591);
    uint64_t v6; // 0x180292ae0
    int64_t v7; // 0x180292ae0
    int64_t result = v7 & -256 | (int64_t)(v6 >= 56); // 0x180292b03
    if (v6 >= 56) {
        // 0x180292b05
        int64_t v8; // 0x180292ae0
        int64_t v9; // 0x180292ae0
        int64_t v10; // 0x180292ae0
        int64_t v11; // 0x180292ae0
        result = function_180279918(v11, v10, v9, v8);
        __asm_movaps(v5);
        *(int32_t *)result = 34;
    }
    // 0x180292b13
    __asm_movaps((int128_t)v3);
    return result;
}

// Address range: 0x180292b20 - 0x180292b4f
int64_t function_180292b20(int128_t a1) {
    // 0x180292b20
    int64_t v1; // 0x180292b20
    int64_t v2 = v1 - 56; // 0x180292b20
    char v3 = llvm_ctpop_i8((char)v2); // 0x180292b20
    int128_t v4; // 0x180292b20
    int128_t v5 = __asm_xorps(v4, v4); // 0x180292b24
    int128_t v6; // 0x180292b20
    int64_t v7 = __asm_movaps_19(v6); // 0x180292b27
    __asm_ucomisd_67(a1, v5);
    int128_t v8 = __asm_movaps(a1); // 0x180292b30
    int64_t result; // 0x180292b20
    if (v2 == 0 && (v3 & 1) != 0) {
        // 0x180292b37
        int64_t v9; // 0x180292b20
        int64_t v10; // 0x180292b20
        int64_t v11; // 0x180292b20
        int64_t v12; // 0x180292b20
        int64_t v13 = function_180279918(v12, v11, v10, v9); // 0x180292b37
        __asm_movaps(v8);
        *(int32_t *)v13 = 34;
        result = v13;
    }
    // 0x180292b45
    __asm_movaps((int128_t)v7);
    return result;
}

// Address range: 0x180292b50 - 0x180292ba1
int64_t function_180292b50(int64_t a1) {
    // 0x180292b50
    int128_t v1; // 0x180292b50
    int64_t v2 = __asm_movaps_19(v1); // 0x180292b54
    int128_t v3 = __asm_movsd(0x3ff0000000000000); // 0x180292b59
    int128_t v4; // 0x180292b50
    if ((int32_t)a1 == 0) {
        // 0x180292b6f
        v4 = __asm_movaps(v3);
    } else {
        // 0x180292b65
        v4 = __asm_movsd(-0x4010000000000000);
    }
    // 0x180292b72
    int128_t v5; // 0x180292b50
    int128_t v6 = __asm_mulsd_22(__asm_divsd(v3, __asm_xorps(v5, v5)), __asm_movsd(__asm_movsd_17(v4))); // 0x180292b85
    int64_t v7; // 0x180292b50
    int64_t v8; // 0x180292b50
    int64_t v9; // 0x180292b50
    int64_t result = function_180279918(a1, v9, v8, v7); // 0x180292b89
    __asm_movaps(v6);
    __asm_movaps((int128_t)v2);
    *(int32_t *)result = 34;
    return result;
}

// Address range: 0x180292bb0 - 0x180292be7
int64_t function_180292bb0(void) {
    // 0x180292bb0
    int64_t v1; // 0x180292bb0
    char v2 = llvm_ctpop_i8((char)v1 - 56); // 0x180292bb0
    int128_t v3; // 0x180292bb0
    int64_t v4 = __asm_movaps_19(v3); // 0x180292bb4
    int128_t v5; // 0x180292bb0
    int128_t v6 = __asm_movaps(v5); // 0x180292bb9
    __asm_ucomisd_67(v5, v5);
    int128_t v7 = __asm_subsd_21(v6, v5); // 0x180292bc0
    int128_t v8 = __asm_divsd(v7, v7); // 0x180292bc7
    int64_t v9; // 0x180292bb0
    int64_t result = v9 & -256 | (int64_t)((v2 & 1) == 0); // 0x180292bcd
    if ((v2 & 1) != 0) {
        // 0x180292bcf
        int64_t v10; // 0x180292bb0
        int64_t v11; // 0x180292bb0
        int64_t v12; // 0x180292bb0
        int64_t v13; // 0x180292bb0
        result = function_180279918(v13, v12, v11, v10);
        *(int32_t *)result = 33;
    }
    // 0x180292bda
    __asm_movaps(v8);
    __asm_movaps((int128_t)v4);
    return result;
}

// Address range: 0x180292bf0 - 0x180292c3a
int64_t function_180292bf0(int32_t a1) {
    int128_t v1 = __asm_movsd(0x7000000000000000); // 0x180292bf4
    int128_t v2; // 0x180292bf0
    int64_t v3 = __asm_movaps_19(v2); // 0x180292bfc
    int128_t v4; // 0x180292bf0
    if (a1 == 0) {
        // 0x180292c0f
        v4 = __asm_movaps(v1);
    } else {
        // 0x180292c05
        v4 = __asm_movsd(-0x1000000000000000);
    }
    int128_t v5 = __asm_mulsd_22(__asm_movsd(__asm_movsd_17(v4)), v1); // 0x180292c1e
    int64_t v6; // 0x180292bf0
    int64_t v7; // 0x180292bf0
    int64_t v8; // 0x180292bf0
    int64_t result = function_180279918((int64_t)a1, v8, v7, v6); // 0x180292c22
    __asm_movaps(v5);
    __asm_movaps((int128_t)v3);
    *(int32_t *)result = 34;
    return result;
}

// Address range: 0x180292c40 - 0x180292c51
int128_t function_180292c40(int32_t a1) {
    // 0x180292c40
    if (a1 == 0) {
        // 0x180292c4d
        int128_t v1; // 0x180292c40
        return __asm_xorps(v1, v1);
    }
    // 0x180292c44
    return __asm_movsd(-0x8000000000000000);
}

// Address range: 0x180292c60 - 0x180292ddb
int64_t function_180292c60(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int32_t a5) {
    // 0x180292c60
    int64_t v1; // bp-64, 0x180292c60
    function_1802718b0(&v1, a1);
    int64_t v2 = function_18028df74(a2, a3 & 0xffffffff, NULL, 0); // 0x180292cb5
    int64_t v3; // 0x180292c60
    int64_t v4; // 0x180292c60
    if ((int32_t)v2 != 0) {
        int64_t v5 = 0x100000000 * v2 / 0x80000000; // 0x180292ccb
        uint64_t v6 = v5 + 16; // 0x180292cce
        if (v5 > 0xffffffffffffffef || v6 == 0) {
            goto lab_0x180292da2;
        } else {
            // 0x180292ce1
            if (v6 < 1025) {
                // 0x180292cea
                int64_t v7; // bp-136, 0x180292c60
                int64_t v8 = (int64_t)&v7 - __chkstk(v6, v6, 0) + 64; // 0x180292d09
                if (v8 == 0) {
                    goto lab_0x180292da2;
                } else {
                    // 0x180292d13
                    *(int32_t *)v8 = 0xcccc;
                    v3 = v8;
                    goto lab_0x180292d31;
                }
            } else {
                int64_t * v9 = _malloc_base((int32_t)v6); // 0x180292d1e
                int64_t v10 = (int64_t)v9; // 0x180292d1e
                v4 = v10;
                if (v9 == NULL) {
                    goto lab_0x180292d35;
                } else {
                    // 0x180292d2b
                    *(int32_t *)v9 = 0xdddd;
                    v3 = v10;
                    goto lab_0x180292d31;
                }
            }
        }
    } else {
        goto lab_0x180292da2;
    }
  lab_0x180292da2:;
    char v11; // 0x180292c60
    if (v11 != 0) {
        int32_t * v12 = (int32_t *)(v1 + 936); // 0x180292dac
        *v12 = *v12 & -3;
    }
    // 0x180292db3
    return function_18026ad50((int64_t)g731);
  lab_0x180292d35:
    // 0x180292d35
    if (v4 != 0) {
        // 0x180292d3a
        int64_t v13; // 0x180292c60
        int64_t v14; // 0x180292c96
        int64_t v15 = function_18028df74(a2, v14, (int64_t *)v13, v2 & 0xffffffff); // 0x180292d45
        int64_t v16 = v14; // 0x180292d4c
        if ((int32_t)v15 != 0) {
            // 0x180292d4e
            int64_t v17; // 0x180292c60
            int64_t v18 = v17;
            *(int64_t *)(v18 + 56) = 0;
            *(int64_t *)(v18 + 48) = 0;
            int64_t v19 = a5 == 0 ? 0 : (int64_t)a4; // 0x180292d69
            *(int32_t *)(v18 + 40) = a5;
            *(int64_t *)(v18 + 32) = v19;
            uint32_t v20; // 0x180292cb1
            function_18028d8d8((int64_t)v20, 0, v13, -1, (int64_t)&g1381, (int64_t)&g1381);
            v16 = 0;
        }
        int64_t v21 = v13 - 16; // 0x180292d91
        int32_t v22 = *(int32_t *)v21; // 0x180292d95
        if (v22 == 0xdddd) {
            int64_t v23 = v16;
            function_18028acc0(v21, v23);
        }
    }
    goto lab_0x180292da2;
  lab_0x180292d31:
    // 0x180292d31
    v4 = v3 + 16;
    goto lab_0x180292d35;
}

// Address range: 0x180292ddc - 0x180292fa4
int64_t function_180292ddc(int64_t * a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 & 0xffffffff; // 0x180292e0a
    int64_t * v2 = (int64_t *)a5; // 0x180292e13
    *v2 = 0;
    int64_t v3; // 0x180292ddc
    int64_t v4; // 0x180292ddc
    int64_t v5; // 0x180292ddc
    if (a2 != 1) {
        if (a2 != 2) {
            if (a2 != 0) {
                // 0x180292f6d
                return function_18026ad50((int64_t)g731);
            }
            int32_t v6 = 0; // bp-216, 0x180292f45
            int64_t v7 = function_18028df74(a3, a4 & 0xdfffffff | 0x20000000, (int64_t *)&v6, 2); // 0x180292f56
            if ((int32_t)v7 != 0) {
                // 0x180292f5f
                *(char *)a5 = (char)v6;
            }
            // 0x180292f6d
            return function_18026ad50((int64_t)g731);
        }
        int64_t v8 = function_18028df74(a3, v1, NULL, 0); // 0x180292f0d
        if ((int32_t)v8 == 0) {
            // 0x180292f6d
            return function_18026ad50((int64_t)g731);
        }
        int64_t v9 = 0x100000000 * v8 / 0x100000000; // 0x180292f12
        int64_t * v10 = _calloc_base((int32_t)v9, 2); // 0x180292f1e
        int64_t v11 = (int64_t)v10; // 0x180292f1e
        if (v10 == NULL) {
            // 0x180292eed
            function_18028acc0(v11, 2);
            // 0x180292f6d
            return function_18026ad50((int64_t)g731);
        }
        int64_t v12 = function_18028df74(a3, v1, v10, v9 & 0xffffffff); // 0x180292f36
        v4 = v1;
        v3 = v11;
        v5 = v12;
    } else {
        int64_t v13 = (int64_t)a1;
        int64_t v14; // bp-200, 0x180292ddc
        int64_t v15 = function_180292c60(v13, a3, v1, &v14, 128); // 0x180292e32
        if ((int32_t)v15 != 0) {
            int64_t v16 = 0x100000000 * v15;
            int64_t v17 = v16 / 0x100000000; // 0x180292e37
            *v2 = (int64_t)_calloc_base((int32_t)v17, 1);
            function_18028acc0(0, 1);
            int64_t v18 = *v2; // 0x180292e53
            if (v18 == 0) {
                // 0x180292f6d
                return function_18026ad50((int64_t)g731);
            }
            int64_t v19 = function_18029b550(v18, v17, &v14, (v16 - 0x100000000) / 0x100000000); // 0x180292e6d
            if ((int32_t)v19 == 0) {
                // 0x180292f6d
                return function_18026ad50((int64_t)g731);
            }
            // 0x180292f8f
            function_180271834(0, 0, 0, 0, 0);
            return __asm_int3(0, 0);
        }
        // 0x180292e81
        if (GetLastError() != 122) {
            // 0x180292f6d
            return function_18026ad50((int64_t)g731);
        }
        int32_t v20 = function_180292c60(v13, a3, v1, NULL, 0);
        if (v20 == 0) {
            // 0x180292f6d
            return function_18026ad50((int64_t)g731);
        }
        int64_t * v21 = _calloc_base(v20, 1); // 0x180292eb8
        int64_t v22 = (int64_t)v21; // 0x180292eb8
        if (v21 == NULL) {
            // 0x180292eed
            function_18028acc0(v22, 1);
            // 0x180292f6d
            return function_18026ad50((int64_t)g731);
        }
        int64_t v23 = function_180292c60(v13, a3, v1, v21, v20); // 0x180292ed6
        v4 = a3;
        v3 = v22;
        v5 = v23;
    }
    int64_t v24 = v3; // 0x180292edd
    if ((int32_t)v5 != 0) {
        // 0x180292edf
        *v2 = v3;
        v24 = 0;
    }
    // 0x180292eed
    function_18028acc0(v24, v4);
    // 0x180292f6d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180292fa4 - 0x180293133
int64_t function_180292fa4(int32_t a1, int64_t dwInfoType, int64_t a3, int64_t a4, int64_t lpCharType, int64_t a6, int64_t a7) {
    // 0x180292fa4
    int64_t v1; // bp-80, 0x180292fa4
    function_1802718b0(&v1, (int64_t)a1);
    int64_t v2 = a6 & 0xffffffff; // 0x180292fee
    if ((int32_t)a6 == 0) {
        // 0x180292ff0
        int64_t v3; // 0x180292fa4
        v2 = (int64_t)*(int32_t *)(v3 + 12);
    }
    int64_t v4 = (int32_t)a7 == 0 ? 1 : 9; // 0x180293015
    int64_t v5 = function_18028d848(v2, v4); // 0x180293017
    int64_t v6; // 0x180292fa4
    int64_t v7; // 0x180292fa4
    int64_t v8; // 0x18029302d
    if ((int32_t)v5 != 0) {
        // 0x18029302a
        v8 = 0x100000000 * v5 / 0x80000000;
        uint64_t v9 = v8 + 16; // 0x180293030
        if (v8 > 0xffffffffffffffef || v9 == 0) {
            goto lab_0x1802930fa;
        } else {
            // 0x180293043
            if (v9 < 1025) {
                // 0x18029304c
                int64_t v10; // bp-136, 0x180292fa4
                int64_t v11 = (int64_t)&v10 - __chkstk(v9, v4, a3) + 48; // 0x18029306b
                if (v11 == 0) {
                    goto lab_0x1802930fa;
                } else {
                    // 0x180293075
                    *(int32_t *)v11 = 0xcccc;
                    v6 = v11;
                    goto lab_0x180293090;
                }
            } else {
                int64_t * v12 = _malloc_base((int32_t)v9); // 0x18029307d
                int64_t v13 = (int64_t)v12; // 0x18029307d
                v7 = v13;
                if (v12 == NULL) {
                    goto lab_0x180293094;
                } else {
                    // 0x18029308a
                    *(int32_t *)v12 = 0xdddd;
                    v6 = v13;
                    goto lab_0x180293090;
                }
            }
        }
    } else {
        goto lab_0x1802930fa;
    }
  lab_0x1802930fa:;
    char v14; // 0x180292fa4
    if (v14 != 0) {
        int32_t * v15 = (int32_t *)(v1 + 936); // 0x180293104
        *v15 = *v15 & -3;
    }
    // 0x18029310b
    return function_18026ad50((int64_t)g731);
  lab_0x180293094:
    // 0x180293094
    if (v7 != 0) {
        // 0x180293099
        int64_t v16; // 0x180292fa4
        int64_t v17 = v16;
        int64_t lpSrcStr; // 0x180292fa4
        function_18029db80(lpSrcStr, 0, v8, a4 & 0xffffffff);
        int32_t v18; // 0x18029301f
        *(int32_t *)(v17 + 40) = v18;
        *(int64_t *)(v17 + 32) = lpSrcStr;
        int64_t v19; // 0x180292fa4
        int32_t cchSrc = function_18028d848(v19, 1); // 0x1802930c2
        int64_t v20 = 1; // 0x1802930c4
        if (cchSrc != 0) {
            // 0x1802930c6
            GetStringTypeW((int32_t)dwInfoType, (int16_t *)lpSrcStr, cchSrc, (int16_t *)lpCharType);
            v20 = lpSrcStr;
        }
        int64_t v21 = lpSrcStr - 16; // 0x1802930e9
        int32_t v22 = *(int32_t *)v21; // 0x1802930ed
        if (v22 == 0xdddd) {
            int64_t v23 = v20;
            function_18028acc0(v21, v23);
        }
    }
    goto lab_0x1802930fa;
  lab_0x180293090:
    // 0x180293090
    v7 = v6 + 16;
    goto lab_0x180293094;
}

// Address range: 0x180293134 - 0x180293253
int64_t function_180293134(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, int64_t * a6) {
    int64_t v1 = (int64_t)a6;
    if (a2 != 0) {
        if (a3 != 0) {
            // 0x18029319f
            *(int16_t *)a2 = 0;
            goto lab_0x1802931a2;
        } else {
            goto lab_0x18029316e;
        }
    } else {
        if (a3 == 0) {
            goto lab_0x1802931a2;
        } else {
            goto lab_0x18029316e;
        }
    }
  lab_0x18029316e:
    // 0x18029316e
    *(char *)(v1 + 48) = 1;
    *(int32_t *)(v1 + 44) = 22;
    // 0x180293184
    function_18027175c(0, 0, 0, 0, 0, a6);
    // 0x18029323a
    return 22;
  lab_0x1802931a2:
    if (a1 != 0) {
        // 0x1802931a7
        *(int64_t *)a1 = 0;
    }
    uint64_t v2 = a5 > a3 ? a3 : a5; // 0x1802931b7
    int64_t v3 = 22; // 0x1802931c2
    int64_t v4; // 0x180293134
    int64_t v5; // 0x180293134
    int64_t v6; // 0x180293134
    int64_t v7; // 0x180293134
    if (v2 < 0x80000000) {
        // 0x1802931cb
        int64_t v8; // 0x180293134
        int64_t v9; // 0x180293134
        int64_t v10; // 0x180293134
        int64_t v11 = function_180293254(a2, a4, v2, v1, v8, v9, v10); // 0x1802931d4
        if (v11 == -1) {
            if (a2 != 0) {
                // 0x1802931e4
                *(int16_t *)a2 = 0;
            }
            int64_t v12 = 0; // 0x1802931ea
            if (*(char *)(v1 + 48) != 0) {
                // 0x1802931ec
                v12 = (int64_t)*(int32_t *)(v1 + 44);
            }
            // 0x18029323a
            return v12 & 0xffffffff;
        }
        int64_t v13 = v11 + 1; // 0x1802931f3
        v7 = v13;
        v5 = 0;
        if (a2 == 0) {
            goto lab_0x18029322f;
        } else {
            // 0x1802931fb
            v6 = v13;
            v4 = 0;
            if (v13 > a3) {
                // 0x180293200
                v6 = a3;
                v4 = 80;
                if (a5 == -1) {
                    goto lab_0x18029322a;
                } else {
                    // 0x180293208
                    *(int16_t *)a2 = 0;
                    v3 = 34;
                    goto lab_0x180293210;
                }
            } else {
                goto lab_0x18029322a;
            }
        }
    } else {
        goto lab_0x180293210;
    }
  lab_0x180293210:
    // 0x180293210
    *(int32_t *)(v1 + 44) = (int32_t)v3;
    *(char *)(v1 + 48) = 1;
    // 0x180293184
    function_18027175c(0, 0, 0, 0, 0, a6);
    // 0x18029323a
    return v3 & 0xffffffff;
  lab_0x18029322f:
    // 0x18029322f
    if (a1 != 0) {
        // 0x180293234
        *(int64_t *)a1 = v7;
    }
    // 0x18029323a
    return v5 & 0xffffffff;
  lab_0x18029322a:
    // 0x18029322a
    *(int16_t *)(a2 - 2 + 2 * v6) = 0;
    v7 = v6;
    v5 = v4;
    goto lab_0x18029322f;
}

// Address range: 0x180293254 - 0x18029344c
int64_t function_180293254(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2; // bp+16, 0x180293257
    if (a1 != 0) {
        // 0x180293287
        if (a3 == 0) {
            // 0x180293439
            return 0;
        }
        // 0x180293293
        *(int16_t *)a1 = 0;
    }
    if (a2 == 0) {
        // 0x18029329c
        *(char *)(a4 + 48) = 1;
        *(int32_t *)(a4 + 44) = 22;
        function_18027175c(0, a2, 0, 0, 0, (int64_t *)a4);
        // 0x180293439
        return -1;
    }
    // 0x1802932c9
    v1 = a2;
    if (*(char *)(a4 + 40) == 0) {
        // 0x1802932cf
        function_1802766e0(a4);
    }
    int64_t * v2 = (int64_t *)(a4 + 24); // 0x1802932dc
    int64_t v3 = *v2; // 0x1802932dc
    uint32_t v4 = *(int32_t *)(v3 + 12); // 0x1802932e0
    if (v4 == 0xfde9) {
        int64_t v5 = 0; // 0x1802932eb
        // 0x180293439
        return function_18028c228((int32_t *)a1, &v1, a3, &v5, a4);
    }
    int64_t v6 = v4; // 0x1802932e0
    int64_t v7 = *(int64_t *)(v3 + 312); // 0x18029330f
    if (a1 == 0) {
        // 0x1802933ee
        if (v7 != 0) {
            int64_t v8 = 0x100000000 * function_18028d848(v6, 9);
            if (v8 != 0) {
                // 0x180293439
                return v8 / 0x100000000 - 1;
            }
            // 0x180293426
            *(char *)(a4 + 48) = 1;
            *(int32_t *)(a4 + 44) = 42;
            // 0x180293439
            return -1;
        }
        int64_t result = 0; // 0x1802933f7
        int64_t v9 = result; // 0x1802933fe
        while (*(char *)(result + v1) != 0) {
            // 0x1802933f7
            result = v9 + 1;
            v9 = result;
        }
        // 0x180293439
        return result;
    }
    if (v7 == 0) {
        int64_t v10 = a1; // 0x180293327
        if (a3 == 0) {
            // 0x180293439
            return 0;
        }
        int64_t result2 = 0; // 0x180293327
        char * v11 = (char *)(result2 + v1); // 0x180293329
        *(int16_t *)v10 = (int16_t)*v11;
        while (*v11 != 0) {
            // 0x180293336
            result2++;
            v10 += 2;
            if (result2 >= a3) {
                // break -> 0x180293439
                return 0;
            }
            v11 = (char *)(result2 + v1);
            *(int16_t *)v10 = (int16_t)*v11;
        }
        // 0x180293439
        return result2;
    }
    int64_t v12 = 0x100000000 * function_18028d848(v6, 9);
    if (v12 != 0) {
        // 0x180293439
        return v12 / 0x100000000 - 1;
    }
    // 0x180293370
    if (GetLastError() == 122) {
        if ((int32_t)a3 != 0) {
            int64_t v13 = a3; // 0x18029339b
            int64_t v14 = v1;
            unsigned char v15 = *(char *)v14; // 0x18029339e
            while (v15 != 0) {
                int64_t v16 = v14; // 0x1802933b3
                if (*(int16_t *)(*(int64_t *)*v2 + 2 * (int64_t)v15) < 0) {
                    // 0x1802933b5
                    v16 = v14 + 1;
                    if (*(char *)v16 == 0) {
                        goto lab_0x18029337b;
                    }
                }
                // 0x1802933bd
                v13 = (v13 & 0xffffffff) + 0xffffffff;
                if ((int32_t)v13 == 0) {
                    // break -> 0x1802933c5
                    return 0;
                }
                v14 = v16 + 1;
                v15 = *(char *)v14;
            }
        }
        int64_t v17 = 0x100000000 * function_18028d848((int64_t)*(int32_t *)(*v2 + 12), 1);
        if (v17 != 0) {
            // 0x180293439
            return v17 / 0x100000000;
        }
    }
  lab_0x18029337b:
    // 0x18029337b
    *(char *)(a4 + 48) = 1;
    *(int32_t *)(a4 + 44) = 42;
    *(int16_t *)a1 = 0;
    // 0x180293439
    return -1;
}

// Address range: 0x18029344c - 0x1802934f4
int64_t function_18029344c(int64_t * a1, int32_t a2, int32_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0; // bp-72, 0x18029345e
    if (g1298 == 0) {
        // 0x18029347c
        int128_t v2; // 0x18029344c
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x18029348c
    int64_t v3; // 0x18029344c
    int64_t v4 = function_180293134((int64_t)a1, (int64_t)a2, (int64_t)a3, a4, v3, &v1); // 0x18029349e
    return v4 & 0xffffffff;
}

// Address range: 0x1802934f4 - 0x180293607
int64_t function_1802934f4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, int64_t * a6) {
    int64_t v1 = (int64_t)a6;
    if (a2 == 0) {
        if (a3 == 0) {
            goto lab_0x180293529;
        } else {
            goto lab_0x180293557;
        }
    } else {
        if (a3 == 0) {
            goto lab_0x180293557;
        } else {
            // 0x180293527
            *(char *)a2 = 0;
            goto lab_0x180293529;
        }
    }
  lab_0x180293529:
    if (a1 != 0) {
        // 0x18029352e
        *(int64_t *)a1 = 0;
    }
    uint64_t v2 = a5 > a3 ? a3 : a5; // 0x18029353e
    int64_t v3 = 22; // 0x180293549
    int64_t v4; // 0x1802934f4
    int64_t v5; // 0x1802934f4
    int64_t v6; // 0x1802934f4
    int64_t v7; // 0x1802934f4
    if (v2 < 0x80000000) {
        // 0x180293585
        int64_t v8; // 0x1802934f4
        int64_t v9; // 0x1802934f4
        int64_t v10; // 0x1802934f4
        int64_t v11 = function_180293608(a2, a4, v2, v1, v8, v9, v10); // 0x18029358e
        if (v11 == -1) {
            if (a2 != 0) {
                // 0x18029359e
                *(char *)a2 = 0;
            }
            int64_t v12 = 0; // 0x1802935a3
            if (*(char *)(v1 + 48) != 0) {
                // 0x1802935a5
                v12 = (int64_t)*(int32_t *)(v1 + 44);
            }
            // 0x1802935ee
            return v12 & 0xffffffff;
        }
        int64_t v13 = v11 + 1; // 0x1802935ac
        v7 = v13;
        v5 = 0;
        if (a2 == 0) {
            goto lab_0x1802935e3;
        } else {
            // 0x1802935b4
            v6 = v13;
            v4 = 0;
            if (v13 > a3) {
                // 0x1802935b9
                v6 = a3;
                v4 = 80;
                if (a5 == -1) {
                    goto lab_0x1802935df;
                } else {
                    // 0x1802935c1
                    *(char *)a2 = 0;
                    v3 = 34;
                    goto lab_0x1802935c8;
                }
            } else {
                goto lab_0x1802935df;
            }
        }
    } else {
        goto lab_0x1802935c8;
    }
  lab_0x180293557:
    // 0x180293557
    *(char *)(v1 + 48) = 1;
    *(int32_t *)(v1 + 44) = 22;
    // 0x18029356d
    function_18027175c(0, 0, 0, 0, 0, a6);
    // 0x1802935ee
    return 22;
  lab_0x1802935c8:
    // 0x1802935c8
    *(int32_t *)(v1 + 44) = (int32_t)v3;
    *(char *)(v1 + 48) = 1;
    // 0x18029356d
    function_18027175c(0, 0, 0, 0, 0, a6);
    // 0x1802935ee
    return v3 & 0xffffffff;
  lab_0x1802935e3:
    // 0x1802935e3
    if (a1 != 0) {
        // 0x1802935e8
        *(int64_t *)a1 = v7;
    }
    // 0x1802935ee
    return v5 & 0xffffffff;
  lab_0x1802935df:
    // 0x1802935df
    *(char *)(a2 - 1 + v6) = 0;
    v7 = v6;
    v5 = v4;
    goto lab_0x1802935e3;
}

// Address range: 0x180293608 - 0x180293947
int64_t function_180293608(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2; // bp-112, 0x18029362d
    if (a1 != 0 && a3 == 0) {
        // 0x18029392a
        return function_18026ad50((int64_t)g731);
    }
    if (a2 == 0) {
        // 0x180293657
        *(char *)(a4 + 48) = 1;
        *(int32_t *)(a4 + 44) = 22;
        function_18027175c(0, a2, 0, 0, 0, (int64_t *)a4);
        // 0x18029392a
        return function_18026ad50((int64_t)g731);
    }
    // 0x180293684
    v1 = a2;
    if (*(char *)(a4 + 40) == 0) {
        // 0x18029368a
        function_1802766e0(a4);
    }
    int64_t * v2 = (int64_t *)(a4 + 24); // 0x180293696
    int64_t v3 = *v2; // 0x180293696
    uint32_t v4 = *(int32_t *)(v3 + 12); // 0x18029369a
    if (v4 == 0xfde9) {
        int64_t v5 = 0; // bp-104, 0x1802936ab
        function_18029b67c(a1, &v1, a3, &v5, a4);
        // 0x18029392a
        return function_18026ad50((int64_t)g731);
    }
    int64_t v6 = v1;
    int64_t v7 = v4; // 0x18029369a
    int64_t v8 = *(int64_t *)(v3 + 312); // 0x1802936c8
    if (a1 == 0) {
        if (v8 != 0) {
            // 0x1802938de
            if ((function_18028d8d8(v7, 0, v6, -1, 0, 0) & 0xffffffff) != 0) {
                // 0x18029392a
                return function_18026ad50((int64_t)g731);
            }
            // 0x18029391c
            *(int32_t *)(a4 + 44) = 42;
            *(char *)(a4 + 48) = 1;
            // 0x18029392a
            return function_18026ad50((int64_t)g731);
        }
        int16_t v9 = v6; // 0x1802938af
        int64_t v10 = v6; // 0x1802938b8
        if (v9 == 0) {
            // 0x18029392a
            return function_18026ad50((int64_t)g731);
        }
        int16_t v11 = v9; // 0x1802938b8
        while (v11 <= 255) {
            // 0x1802938ca
            v10 += 2;
            v11 = *(int16_t *)v10;
            if (v11 == 0) {
                // 0x18029392a
                return function_18026ad50((int64_t)g731);
            }
        }
        // 0x180293719
        *(char *)(a4 + 48) = 1;
        *(int32_t *)(a4 + 44) = 42;
        // 0x18029392a
        return function_18026ad50((int64_t)g731);
    }
    if (v8 == 0) {
        int64_t v12 = v6; // 0x1802936e0
        if (a3 == 0) {
            // 0x18029392a
            return function_18026ad50((int64_t)g731);
        }
        int64_t v13 = 0; // 0x1802936e0
        int16_t * v14 = (int16_t *)v12; // 0x1802936ec
        while (*v14 <= 255) {
            // 0x1802936f2
            *(char *)(v13 + a1) = *(char *)v12;
            v12 += 2;
            v1 = v12;
            if (*v14 == 0) {
                // 0x18029392a
                return function_18026ad50((int64_t)g731);
            }
            // 0x18029370c
            v13++;
            if (v13 >= a3) {
                // 0x18029392a
                return function_18026ad50((int64_t)g731);
            }
            v14 = (int16_t *)v12;
        }
        // 0x180293719
        *(char *)(a4 + 48) = 1;
        *(int32_t *)(a4 + 44) = 42;
        // 0x18029392a
        return function_18026ad50((int64_t)g731);
    }
    // 0x180293729
    if (*(int32_t *)(v3 + 8) == 1) {
        int64_t v15 = a3; // 0x180293732
        int64_t v16 = 0; // 0x180293732
        if (a3 != 0) {
            int64_t v17 = v6;
            while (*(int16_t *)v17 != 0) {
                // 0x180293740
                v15--;
                v16 = a3;
                if (v15 == 0) {
                    goto lab_0x180293758;
                }
                v17 += 2;
            }
            // 0x18029374c
            v16 = (v17 - v6) / 2 + 1;
        }
      lab_0x180293758:;
        int64_t v18 = v16;
        if ((int32_t)function_18028d8d8(v7, 0, v6, (int32_t)v18, a1, 0x100000000 * v18 / 0x100000000) != 0) {
            // 0x18029392a
            return function_18026ad50((int64_t)g731);
        }
        // 0x180293719
        *(char *)(a4 + 48) = 1;
        *(int32_t *)(a4 + 44) = 42;
        // 0x18029392a
        return function_18026ad50((int64_t)g731);
    }
    int64_t v19 = function_18028d8d8(v7, 0, v6, -1, a1, 0x100000000 * a3 / 0x100000000); // 0x1802937c4
    if ((int32_t)v19 != 0) {
        // 0x18029392a
        return function_18026ad50((int64_t)g731);
    }
    int32_t errorCode = GetLastError(); // 0x1802937e3
    if (errorCode != 122) {
        // 0x18029391c
        *(int32_t *)(a4 + 44) = 42;
        *(char *)(a4 + 48) = 1;
        // 0x18029392a
        return function_18026ad50((int64_t)g731);
    }
    if (a3 == 0) {
        // 0x18029392a
        return function_18026ad50((int64_t)g731);
    }
    uint32_t v20 = errorCode - 117;
    int64_t v21; // bp-96, 0x180293608
    int64_t v22 = &v21; // 0x180293835
    int64_t v23 = 0x100000000 * v19 / 0x100000000; // 0x1802937ff
    int64_t v24 = *v2; // 0x180293803
    int32_t v25 = *(int32_t *)(v24 + 8); // 0x18029381e
    int32_t v26 = v25 - v20; // 0x180293821
    uint32_t v27 = *(int32_t *)(v24 + 12); // 0x180293824
    int32_t v28 = v26 < 0 == ((v26 ^ v25) & (v25 ^ v20)) < 0 == (v26 != 0) ? v20 : v25; // 0x180293827
    int64_t v29 = function_18028d8d8((int64_t)v27, 0, v1, 1, v22, (int64_t)v28); // 0x18029383a
    while ((int32_t)v29 >= 1) {
        int64_t v30 = 0x100000000 * v29;
        uint64_t v31 = v30 / 0x100000000; // 0x180293859
        if (v31 > (int64_t)v20) {
            // break -> 0x18029391c
            return 0;
        }
        // 0x180293865
        if (v31 + v23 > a3) {
            // 0x18029392a
            return function_18026ad50((int64_t)g731);
        }
        int64_t v32 = 0; // 0x180293874
        int64_t v33 = v23; // 0x180293874
        if (v30 >= 0x100000000) {
            int64_t v34; // bp-64, 0x180293608
            char v35 = *(char *)((int64_t)&v34 - 32 + v32); // 0x180293876
            *(char *)(v33 + a1) = v35;
            while (v35 != 0) {
                int64_t v36 = v32 + 1; // 0x180293882
                v32 = v36;
                v33++;
                if (v36 >= v31) {
                    // break -> 0x18029388d
                    return 0;
                }
                v35 = *(char *)((int64_t)&v34 - 32 + v32);
                *(char *)(v33 + a1) = v35;
            }
            // 0x18029392a
            return function_18026ad50((int64_t)g731);
        }
        int64_t v37 = v1 + 2; // 0x180293891
        v1 = v37;
        if (v23 >= a3) {
            // 0x18029392a
            return function_18026ad50((int64_t)g731);
        }
        v24 = *v2;
        v25 = *(int32_t *)(v24 + 8);
        v26 = v25 - v20;
        v27 = *(int32_t *)(v24 + 12);
        v28 = v26 < 0 == ((v26 ^ v25) & (v25 ^ v20)) < 0 == (v26 != 0) ? v20 : v25;
        v29 = function_18028d8d8((int64_t)v27, 0, v37, 1, v22, (int64_t)v28);
    }
    // 0x18029391c
    *(int32_t *)(a4 + 44) = 42;
    *(char *)(a4 + 48) = 1;
    // 0x18029392a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180293948 - 0x1802939fe
int64_t function_180293948(int64_t * a1, uint32_t a2, uint32_t a3, int64_t a4, int64_t a5, int64_t * a6) {
    int64_t v1 = 0; // bp-72, 0x18029395a
    int64_t v2; // 0x180293948
    int128_t v3; // 0x180293948
    int128_t * v4; // 0x180293948
    int64_t v5; // 0x1802939a8
    if (v4 != NULL) {
        // 0x18029398d
        __asm_movdqu(v3, __asm_movups_16(*v4));
        // 0x180293996
        v5 = function_1802934f4((int64_t)a1, (int64_t)a2, (int64_t)a3, a4, v2, &v1);
        return v5 & 0xffffffff;
    }
    // 0x18029397d
    if (g1298 != 0) {
        // 0x180293996
        v5 = function_1802934f4((int64_t)a1, (int64_t)a2, (int64_t)a3, a4, v2, &v1);
        return v5 & 0xffffffff;
    }
    // 0x18029398d
    __asm_movdqu(v3, __asm_movups_16(g755));
    // 0x180293996
    v5 = function_1802934f4((int64_t)a1, (int64_t)a2, (int64_t)a3, a4, v2, &v1);
    return v5 & 0xffffffff;
}

// Address range: 0x180293a00 - 0x180293a83
int64_t function_180293a00(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0 || a2 == 0) {
        // 0x180293a1b
        *(int32_t *)function_180279918(a1, a2, a3, a1) = 22;
        function_180271814(a1, a2, a3, a1);
        return 22;
    }
    if (a3 == 0) {
        // 0x180293a16
        *(int16_t *)a1 = 0;
        // 0x180293a1b
        *(int32_t *)function_180279918(a1, a2, a3, a1) = 22;
        function_180271814(a1, a2, a3, a1);
        return 22;
    }
    int64_t v1 = a3 - a1; // 0x180293a35
    int64_t v2 = a1; // 0x180293a38
    int64_t v3 = a2; // 0x180293a38
    int16_t v4 = *(int16_t *)(v2 + v1); // 0x180293a40
    *(int16_t *)v2 = v4;
    while (v4 != 0) {
        // 0x180293a51
        v2 += 2;
        v3--;
        if (v3 == 0) {
            // 0x180293a5c
            *(int16_t *)a1 = 0;
            *(int32_t *)function_180279918(v2, v3, v1, a1) = 34;
            function_180271814(v2, v3, v1, a1);
            return 34;
        }
        v4 = *(int16_t *)(v2 + v1);
        *(int16_t *)v2 = v4;
    }
    // 0x180293a7c
    return 0;
}

// Address range: 0x180293a90 - 0x180293b0a
int64_t function_180293a90(int64_t lpMem, int64_t dwBytes) {
    if (lpMem == 0) {
        // 0x180293ace
        return (int64_t)_malloc_base((int32_t)dwBytes);
    }
    if (dwBytes == 0) {
        // 0x180293ab4
        function_18028acc0(lpMem, dwBytes);
        // 0x180293ace
        return 0;
    }
    int64_t v1 = lpMem; // 0x180293abf
    int64_t v2 = dwBytes; // 0x180293abf
    int64_t v3; // 0x180293a90
    int64_t v4; // 0x180293a90
    if (dwBytes >= 0xffffffffffffffe1) {
      lab_0x180293ac1_2:
        // 0x180293ac1
        *(int32_t *)function_180279918(v1, v2, v3, v4) = 12;
        // 0x180293ace
        return 0;
    }
    int64_t * v5 = HeapReAlloc((int64_t *)g1350, 0, (int64_t *)lpMem, (int32_t)dwBytes); // 0x180293afd
    // 0x180293aee
    while (v5 == NULL) {
        // 0x180293ad9
        v1 = g1350;
        v2 = 0;
        v3 = lpMem;
        v4 = dwBytes;
        if ((int32_t)function_180298700() == 0) {
            goto lab_0x180293ac1_2;
        }
        int64_t v6 = function_180286920(dwBytes); // 0x180293ae5
        v1 = dwBytes;
        v2 = 0;
        v3 = lpMem;
        v4 = dwBytes;
        if ((int32_t)v6 == 0) {
            goto lab_0x180293ac1_2;
        }
        v5 = HeapReAlloc((int64_t *)g1350, 0, (int64_t *)lpMem, (int32_t)dwBytes);
    }
    // 0x180293ace
    return (int64_t)v5;
}

// Address range: 0x180293b10 - 0x180293b38
int64_t function_180293b10(int64_t a1, int64_t a2) {
    // 0x180293b10
    if (a1 != 0 != a2 != 0) {
        // 0x180293b1e
        int64_t v1; // 0x180293b10
        int64_t v2; // 0x180293b10
        *(int32_t *)function_180279918(a1, a2, v2, v1) = 22;
        function_180271814(a1, a2, v2, v1);
    }
    // 0x180293b2e
    return 0x7fffffff;
}

// Address range: 0x180293b40 - 0x180293b97
int64_t function_180293b40(int64_t a1) {
    int64_t v1 = a1; // 0x180293b47
    uint16_t v2 = *(int16_t *)v1; // 0x180293b50
    int64_t v3 = v2; // 0x180293b50
    int64_t v4; // 0x180293b40
    uint16_t v5 = *(int16_t *)v4; // 0x180293b58
    int64_t v6 = v5; // 0x180293b58
    int64_t v7 = v3; // 0x180293b63
    int64_t v8 = v6; // 0x180293b63
    if (v2 != v5) {
        // 0x180293b65
        v7 = (int32_t)v2 < 91 ? v3 + 32 : v3;
        v8 = (int32_t)v5 < 91 ? v6 + 32 : v6;
    }
    int32_t v9 = v7; // 0x180293b89
    uint32_t result = v9 - (int32_t)v8; // 0x180293b8c
    v4 += 2;
    v1 += 2;
    while (v9 != 0 == result == 0) {
        // 0x180293b50
        v2 = *(int16_t *)v1;
        v3 = v2;
        v5 = *(int16_t *)v4;
        v6 = v5;
        v7 = v3;
        v8 = v6;
        if (v2 != v5) {
            // 0x180293b65
            v7 = (int32_t)v2 < 91 ? v3 + 32 : v3;
            v8 = (int32_t)v5 < 91 ? v6 + 32 : v6;
        }
        // 0x180293b89
        v9 = v7;
        result = v9 - (int32_t)v8;
        v4 += 2;
        v1 += 2;
    }
    // 0x180293b96
    return result;
}

// Address range: 0x180293ba0 - 0x180293d92
int64_t function_180293ba0(int64_t a1, int16_t * a2, int16_t a3) {
    int64_t v1 = (int64_t)a2;
    if (g1298 == 0) {
        if (a2 != NULL == (a1 != 0)) {
            function_180293b40(a1);
        }
        // 0x180293bb7
        return function_180293b10(a1, v1);
    }
    if (a1 == 0 || a2 == NULL) {
        // 0x180293be2
        int64_t v2; // 0x180293ba0
        *(int32_t *)function_180279918(a1, v1, 0, v2) = 22;
        function_180271814(a1, v1, 0, v2);
        return 0x7fffffff;
    }
    int64_t v3 = __vcrt_getptd2(a1); // 0x180293c2f
    int128_t v4 = (int128_t)*(int64_t *)(v3 + 144); // bp-48, 0x180293c48
    int64_t v5 = *(int64_t *)(v3 + 136); // bp-40, 0x180293c54
    __acrt_update_locale_info(v3, (int64_t)&v4);
    __acrt_update_locale_info2(v3, (int64_t)&v5);
    int32_t * v6 = (int32_t *)(v3 + 936);
    int32_t v7 = *v6; // 0x180293c72
    char v8 = 0; // 0x180293c7a
    if ((v7 & 2) == 0) {
        // 0x180293c7c
        *v6 = v7 | 2;
        v8 = 1;
    }
    int64_t v9 = v4; // 0x180293c8a
    int64_t v10 = a1; // 0x180293c97
    int64_t v11 = v1; // 0x180293c97
    int64_t result; // 0x180293ba0
    if (*(int64_t *)(v9 + 312) != 0) {
        uint16_t v12 = *(int16_t *)v10; // 0x180293cd0
        int64_t v13 = v12; // 0x180293cd0
        uint16_t v14 = *(int16_t *)v11; // 0x180293cd8
        int64_t v15 = v14; // 0x180293cd8
        int32_t v16; // 0x180293ba0
        int64_t v17; // 0x180293ba0
        int64_t v18; // 0x180293ba0
        int64_t v19; // 0x180293ba0
        int64_t v20; // 0x180293ba0
        int64_t v21; // 0x180293ba0
        int64_t v22; // 0x180293ba0
        int64_t v23; // 0x180293ba0
        int64_t v24; // 0x180293ba0
        int64_t v25; // 0x180293ce9
        int64_t v26; // 0x180293d16
        int32_t v27; // 0x180293ba0
        int64_t v28; // 0x180293d23
        if (v12 == v14) {
            // 0x180293cd0
            v16 = v12;
            v24 = v9;
            v19 = v13;
            v20 = v15;
        } else {
            if (v12 >= 256) {
                // 0x180293d04
                v17 = function_18029b7d0(v13);
                v21 = v4;
            } else {
                // 0x180293ce9
                v25 = v13 & 255;
                v17 = v25;
                v21 = v9;
                if ((*(char *)(2 * v25 + (int64_t)&g548 + 2) & 1) != 0) {
                    // 0x180293cf4
                    v17 = (int64_t)*(char *)(*(int64_t *)(v9 + 272) + v25);
                    v21 = v9;
                }
            }
            // 0x180293d16
            v22 = v21;
            v26 = v17 & 0xffff;
            v27 = v26;
            v16 = v27;
            v24 = v22;
            v19 = v26;
            v20 = v15;
            if (v27 != (int32_t)v14) {
                if (v14 >= 256) {
                    // 0x180293d3f
                    v18 = function_18029b7d0(v15);
                    v23 = v4;
                } else {
                    // 0x180293d23
                    v28 = v15 & 255;
                    v18 = v28;
                    v23 = v22;
                    if ((*(char *)(2 * v28 + (int64_t)&g548 + 2) & 1) != 0) {
                        // 0x180293d2f
                        v18 = (int64_t)*(char *)(*(int64_t *)(v22 + 272) + v28);
                        v23 = v22;
                    }
                }
                // 0x180293d51
                v16 = v27;
                v24 = v23;
                v19 = v26;
                v20 = v18 & 0xffff;
            }
        }
        uint32_t v29 = v16 - (int32_t)v20; // 0x180293d56
        v10 += 2;
        v11 += 2;
        while (v19 != 0 == v29 == 0) {
            int64_t v30 = v24;
            v12 = *(int16_t *)v10;
            v13 = v12;
            v14 = *(int16_t *)v11;
            v15 = v14;
            if (v12 == v14) {
                // 0x180293cd0
                v16 = v12;
                v24 = v30;
                v19 = v13;
                v20 = v15;
            } else {
                if (v12 >= 256) {
                    // 0x180293d04
                    v17 = function_18029b7d0(v13);
                    v21 = v4;
                } else {
                    // 0x180293ce9
                    v25 = v13 & 255;
                    v17 = v25;
                    v21 = v30;
                    if ((*(char *)(2 * v25 + (int64_t)&g548 + 2) & 1) != 0) {
                        // 0x180293cf4
                        v17 = (int64_t)*(char *)(*(int64_t *)(v30 + 272) + v25);
                        v21 = v30;
                    }
                }
                // 0x180293d16
                v22 = v21;
                v26 = v17 & 0xffff;
                v27 = v26;
                v16 = v27;
                v24 = v22;
                v19 = v26;
                v20 = v15;
                if (v27 != (int32_t)v14) {
                    if (v14 >= 256) {
                        // 0x180293d3f
                        v18 = function_18029b7d0(v15);
                        v23 = v4;
                    } else {
                        // 0x180293d23
                        v28 = v15 & 255;
                        v18 = v28;
                        v23 = v22;
                        if ((*(char *)(2 * v28 + (int64_t)&g548 + 2) & 1) != 0) {
                            // 0x180293d2f
                            v18 = (int64_t)*(char *)(*(int64_t *)(v22 + 272) + v28);
                            v23 = v22;
                        }
                    }
                    // 0x180293d51
                    v16 = v27;
                    v24 = v23;
                    v19 = v26;
                    v20 = v18 & 0xffff;
                }
            }
            // 0x180293d54
            v29 = v16 - (int32_t)v20;
            v10 += 2;
            v11 += 2;
        }
        // 0x180293d76
        result = v29;
    } else {
        // 0x180293c99
        result = function_180293b40(a1) & 0xffffffff;
    }
    // 0x180293d76
    if (v8 != 0) {
        // 0x180293d7d
        *v6 = *v6 & -3;
    }
    // 0x180293d89
    return result;
}

// Address range: 0x180293d94 - 0x180293da6
int64_t function_180293d94(uint64_t a1, uint64_t a2) {
    if (a1 >= a2) {
        // 0x180293d9d
        return (bool)(a1 > a2);
    }
    // 0x180293d99
    return 0xffffffff;
}

// Address range: 0x180293da8 - 0x180293f54
int64_t function_180293da8(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (a1 == NULL) {
        char * v2 = (char *)(v1 + 40); // 0x180293dd2
        int64_t * v3 = (int64_t *)(v1 + 16);
        if (*v2 != 0) {
            // 0x180293dd8
            function_18028acc0(*v3, v1);
            *v2 = 0;
        }
        // 0x180293de5
        *v3 = 0;
        *(int64_t *)(v1 + 24) = 0;
        // 0x180293ded
        *(int64_t *)(v1 + 32) = 0;
        // 0x180293f39
        return 0;
    }
    int64_t v4; // 0x180293da8
    if ((int16_t)v4 == 0) {
        int64_t * v5 = (int64_t *)(v1 + 24); // 0x180293dfc
        int64_t * v6; // 0x180293da8
        if (*v5 != 0) {
            // 0x180293dfc
            v6 = (int64_t *)(v1 + 16);
        } else {
            char * v7 = (char *)(v1 + 40); // 0x180293e02
            int64_t * v8 = (int64_t *)(v1 + 16);
            if (*v7 != 0) {
                // 0x180293e08
                function_18028acc0(*v8, v1);
                *v7 = 0;
            }
            int64_t * v9 = _malloc_base(1); // 0x180293e1a
            *v8 = (int64_t)v9;
            int64_t result = (v1 ^ 15) + v1 + (int64_t)(v9 != NULL) & 12; // 0x180293e2d
            *v7 = (char)(v9 != NULL);
            *v5 = (int64_t)(v9 != NULL);
            v6 = v8;
            if (v9 == NULL && result != 0) {
                // 0x180293f39
                return result;
            }
        }
        // 0x180293e52
        *(char *)*v6 = 0;
        // 0x180293ded
        *(int64_t *)(v1 + 32) = 0;
        // 0x180293f39
        return 0;
    }
    int64_t v10 = (int64_t)a1;
    int64_t v11; // 0x180293da8
    int64_t v12 = v11 & 0xffffffff; // 0x180293dc4
    int64_t v13 = function_18028d8d8(v12, 0, v10, -1, 0, 0); // 0x180293e7a
    if ((int32_t)v13 != 0) {
        int64_t v14 = 0x100000000 * v13 / 0x100000000; // 0x180293e7f
        int64_t * v15 = (int64_t *)(v1 + 24); // 0x180293e9f
        uint64_t v16 = *v15; // 0x180293e9f
        int64_t * v17; // 0x180293da8
        int64_t v18; // 0x180293da8
        if (v14 > v16) {
            char * v19 = (char *)(v1 + 40); // 0x180293ea8
            int64_t * v20 = (int64_t *)(v1 + 16);
            if (*v19 != 0) {
                // 0x180293eae
                function_18028acc0(*v20, v16);
                *v19 = 0;
            }
            int64_t * v21 = _malloc_base((int32_t)v14); // 0x180293ebe
            *v20 = (int64_t)v21;
            int64_t v22 = v21 == NULL ? 0 : v14; // 0x180293ed3
            int64_t result2 = (v10 ^ 15) + v10 + (int64_t)(v21 != NULL) & 12; // 0x180293edf
            *v19 = (char)(v21 != NULL);
            *v15 = v22;
            v17 = v20;
            v18 = v22;
            if (v21 == NULL && result2 != 0) {
                // 0x180293f39
                return result2;
            }
        } else {
            // 0x180293e9f
            v17 = (int64_t *)(v1 + 16);
            v18 = v16;
        }
        int64_t v23 = *v17; // 0x180293efe
        int64_t v24 = 0x100000000 * function_18028d8d8(v12, 0, v10, -1, v23, 0x100000000 * v18 / 0x100000000);
        if (v24 != 0) {
            // 0x180293f30
            *(int64_t *)(v1 + 32) = v24 / 0x100000000 - 1;
            // 0x180293f39
            return 0;
        }
    }
    int64_t errorCode = GetLastError(); // 0x180293e8c
    function_1802798a8(errorCode);
    // 0x180293f39
    return (int64_t)*(int32_t *)function_180279918(errorCode, 0, v10, 0xffffffff);
}

// Address range: 0x180293f54 - 0x180294190
int64_t function_180293f54(int64_t a1, int64_t a2) {
    // 0x180293f54
    if (a2 == 0) {
        // 0x180293f79
        int64_t v1; // 0x180293f54
        int64_t v2; // 0x180293f54
        int64_t v3 = function_180279918(a1, a2, v2, v1); // 0x180293f79
        int64_t v4 = a2 + 22; // 0x180293f7e
        *(int32_t *)v3 = (int32_t)v4;
        function_180271814(a1, a2, v2, v1);
        // 0x180294160
        return v4 & 0xffffffff;
    }
    // 0x180293f90
    int128_t v5; // 0x180293f54
    int128_t v6 = __asm_xorps(v5, v5); // 0x180293f90
    int64_t * v7 = (int64_t *)a2; // 0x180293f93
    *v7 = 0;
    int64_t * v8; // bp-88, 0x180293f54
    __asm_movdqu((int128_t)(int64_t)v8, v6);
    int64_t v9; // 0x180293f54
    int64_t v10; // 0x180293f54
    int64_t v11; // 0x180293f54
    int64_t v12; // 0x180293f54
    int64_t v13; // 0x180293f54
    int64_t result; // 0x180293f54
    int64_t v14; // bp+16, 0x180293f54
    int64_t v15; // 0x180293fd0
    int64_t v16; // 0x180293f54
    int64_t v17; // 0x180293f54
    int64_t v18; // 0x18029410a
    if (a1 != 0) {
        int64_t v19 = a1; // 0x180294014
        int64_t v20 = a1; // 0x180294018
        int64_t v21; // 0x180293fb5
        int64_t v22; // 0x180294005
        while (true) {
            // 0x180293fa4
            v14 = 0x3f2a;
            v21 = function_18029b970(v20, &v14);
            int64_t v23 = *(int64_t *)v19; // 0x180293fba
            if (v21 != 0) {
                // 0x180293ffe
                v22 = function_180294314(v23, v21, (int128_t *)&v8);
                if ((int32_t)v22 != 0) {
                    // break -> 0x1802940b2
                    return 0;
                }
            } else {
                int64_t v24 = function_180294190(v23, 0, 0, (int128_t *)&v8); // 0x180293fcb
                if ((int32_t)v24 != 0) {
                    // 0x180293fd6
                    v15 = v24 & 0xffffffff;
                    v16 = (int64_t)v8;
                    v9 = v16;
                    v12 = 0;
                    result = v15;
                    if (v17 == v16) {
                        goto lab_0x1802940a3;
                    } else {
                        goto lab_0x180293fe7;
                    }
                }
            }
            // 0x180294014
            v19 += 8;
            v20 = *(int64_t *)v19;
            if (v20 == 0) {
                goto lab_0x180294020;
            }
        }
        int64_t v25 = v22 & 0xffffffff; // 0x18029400a
        int64_t v26 = (int64_t)v8;
        v12 = v21;
        result = v25;
        if (v17 != v26) {
            function_18028acc0(*(int64_t *)v26, v21);
            int64_t v27 = v26 + 8; // 0x1802940c7
            v12 = v21;
            result = v25;
            v11 = v26;
            int64_t v28 = v27; // 0x1802940cf
            while (v27 != v17) {
                // 0x1802940bf
                function_18028acc0(*(int64_t *)v28, v21);
                v27 = v28 + 8;
                v12 = v21;
                result = v25;
                v11 = v26;
                v28 = v27;
            }
        }
    } else {
      lab_0x180294020:;
        int64_t v29 = (int64_t)v8;
        int64_t v30 = 0; // 0x180294046
        if (v17 != v29) {
            int64_t v31 = 0; // 0x18029404e
            int64_t v32 = v31; // 0x180294055
            while (*(char *)(v31 + *(int64_t *)v29) != 0) {
                // 0x18029404e
                v31 = v32 + 1;
                v32 = v31;
            }
            int64_t v33 = v29 + 8; // 0x18029405a
            int64_t v34 = 1 + v31; // 0x18029405e
            int64_t v35 = v33; // 0x180294064
            int64_t v36 = v34; // 0x180294064
            v30 = v34;
            while (v33 != v17) {
                // 0x180294048
                v31 = 0;
                v32 = v31;
                while (*(char *)(v31 + *(int64_t *)v35) != 0) {
                    // 0x18029404e
                    v31 = v32 + 1;
                    v32 = v31;
                }
                // 0x180294057
                v33 = v35 + 8;
                v34 = v36 + 1 + v31;
                v35 = v33;
                v36 = v34;
                v30 = v34;
            }
        }
        int64_t v37 = (v17 - v29) / 8 + 1; // 0x180294040
        int64_t v38 = function_180286d5c(v37, v30, 1); // 0x180294073
        if (v38 != 0) {
            if (v17 == v29) {
                // 0x180294132
                *v7 = v38;
                function_18028acc0(0, v30);
                v13 = v30;
              lab_0x180294156:
                // 0x180294156
                function_18028acc0(v29, v13);
                // 0x180294160
                return 0;
            }
            int64_t v39 = v38 + 8 * v37; // 0x1802940d3
            v14 = v38 - v29;
            int64_t v40 = v39; // 0x1802940e9
            int64_t v41 = v29; // 0x1802940e9
            int64_t v42 = *(int64_t *)v41; // 0x1802940ed
            int64_t v43 = -1;
            int64_t v44 = v43 + 1; // 0x1802940f4
            while (*(char *)(v44 + v42) != 0) {
                // 0x1802940f4
                v43 = v44;
                v44 = v43 + 1;
            }
            int64_t v45 = v43 + 2; // 0x180294101
            v18 = v39 - v40 + v30;
            while ((int32_t)function_18029b550(v40, v18, (int64_t *)v42, v45) == 0) {
                // 0x18029411a
                *(int64_t *)(v14 + v41) = v40;
                v41 += 8;
                v40 += v45;
                if (v41 == v17) {
                    // 0x180294145
                    *v7 = v38;
                    function_18028acc0(0, v18);
                    v10 = v29;
                    goto lab_0x180294145_2;
                }
                v42 = *(int64_t *)v41;
                v43 = -1;
                v44 = v43 + 1;
                while (*(char *)(v44 + v42) != 0) {
                    // 0x1802940f4
                    v43 = v44;
                    v44 = v43 + 1;
                }
                // 0x1802940fe
                v45 = v43 + 2;
                v18 = 0x100000000 * v39 / 0x100000000 - v40 + v30;
            }
            // 0x180294178
            function_180271834(0, 0, 0, 0, 0);
            __asm_int3(0, 0);
            __asm_int3(0, 0);
            return __asm_int3(0, 0);
        }
        // 0x180294080
        function_18028acc0(0, v30);
        v12 = v30;
        result = 0xffffffff;
        if (v17 != v29) {
            function_18028acc0(*(int64_t *)v29, v30);
            int64_t v46 = v29 + 8; // 0x180294097
            int64_t v47 = v46; // 0x18029409e
            v12 = v30;
            result = 0xffffffff;
            v11 = v29;
            while (v46 != v17) {
                // 0x18029408f
                function_18028acc0(*(int64_t *)v47, v30);
                v46 = v47 + 8;
                v47 = v46;
                v12 = v30;
                result = 0xffffffff;
                v11 = v29;
            }
        }
    }
    goto lab_0x1802940a3;
  lab_0x1802940a3:
    // 0x1802940a3
    function_18028acc0(v11, v12);
    // 0x180294160
    return result;
  lab_0x180293fe7:
    // 0x180293fe7
    function_18028acc0(*(int64_t *)v9, 0);
    int64_t v48 = v9 + 8; // 0x180293fef
    v9 = v48;
    v12 = 0;
    result = v15;
    v11 = v16;
    if (v48 != v17) {
        goto lab_0x180293fe7;
    } else {
        goto lab_0x1802940a3;
    }
  lab_0x180294145_2:
    // 0x180294145
    function_18028acc0(*(int64_t *)v10, v18);
    int64_t v49 = v10 + 8; // 0x18029414d
    v10 = v49;
    v13 = v18;
    if (v49 != v17) {
        goto lab_0x180294145_2;
    } else {
        goto lab_0x180294156;
    }
}

// Address range: 0x180294190 - 0x180294314
int64_t function_180294190(int64_t a1, int32_t a2, int32_t a3, int128_t * a4) {
    int64_t v1 = -1;
    int64_t v2 = v1 + 1; // 0x1802941be
    while (*(char *)(v2 + a1) != 0) {
        // 0x1802941be
        v1 = v2;
        v2 = v1 + 1;
    }
    int64_t v3 = a3;
    uint64_t v4 = v1 + 2; // 0x1802941cf
    if (v4 > -1 - v3) {
        // 0x1802941dd
        return 12;
    }
    int64_t v5 = v3 + 1 + v4; // 0x1802941fe
    int64_t v6 = (int64_t)_calloc_base((int32_t)v5, 1); // 0x180294204
    if (a3 != 0) {
        // 0x180294211
        if ((int32_t)function_18029b550(v6, v5, (int64_t *)(int64_t)a2, v3) != 0) {
            // 0x1802942ff
            function_180271834(0, 0, 0, 0, 0);
            return __asm_int3(0, 0);
        }
    }
    int64_t v7 = v5 - v3; // 0x18029422a
    int64_t v8 = function_18029b550(v6 + v3, v7, (int64_t *)a1, v4); // 0x18029423a
    int32_t v9 = v8; // 0x18029423f
    if (v9 != 0) {
        // 0x1802942ff
        function_180271834(0, 0, 0, 0, 0);
        return __asm_int3(0, 0);
    }
    int64_t v10 = (int64_t)a4;
    int64_t * v11 = (int64_t *)(v10 + 16); // 0x180294247
    int64_t v12 = *v11; // 0x180294247
    int64_t v13 = v8 + 8; // 0x18029424b
    int64_t v14 = v13 & 0xffffffff; // 0x18029424b
    int64_t * v15 = (int64_t *)(v10 + 8); // 0x18029424f
    int64_t v16 = *v15; // 0x18029424f
    int64_t v17 = v16; // 0x180294253
    int64_t v18 = v7; // 0x180294253
    int64_t v19; // 0x180294190
    if (v16 != v12) {
        goto lab_0x1802942e6;
    } else {
        if (v4 != 0) {
            int64_t v20 = v12 - v4; // 0x180294289
            int64_t v21 = v20 / 8; // 0x180294296
            v19 = v7;
            if (v21 < 0x7fffffffffffffff) {
                // 0x18029429f
                v18 = 2 * v21;
                int64_t v22 = function_1802959b0(v4, v18, v14); // 0x1802942ac
                if (v22 != 0) {
                    // 0x1802942cc
                    *(int64_t *)a4 = v22;
                    *v15 = v22 + (v20 & -8);
                    *v11 = v22 + 16 * v21;
                    function_18028acc0(0, v18);
                    v17 = *v15;
                    goto lab_0x1802942e6;
                } else {
                    // 0x1802942b6
                    function_18028acc0(0, v18);
                    v19 = v18;
                    goto lab_0x1802942bd;
                }
            } else {
                goto lab_0x1802942bd;
            }
        } else {
            // 0x18029425e
            *(int64_t *)a4 = (int64_t)_calloc_base(v9 + 4, (int32_t)v13);
            function_18028acc0(0, v14);
            v19 = v14;
            goto lab_0x1802942bd;
        }
    }
  lab_0x1802942e6:
    // 0x1802942e6
    *(int64_t *)v17 = v6;
    *v15 = *v15 + v14;
    int64_t v23 = v18; // 0x1802942ed
    int64_t v24 = 0; // 0x1802942ed
    goto lab_0x1802942f1;
  lab_0x1802942f1:
    // 0x1802942f1
    function_18028acc0(0, v23);
    // 0x1802941dd
    return v24 & 0xffffffff;
  lab_0x1802942bd:
    // 0x1802942bd
    function_18028acc0(v6, v19);
    v23 = v19;
    v24 = 12;
    goto lab_0x1802942f1;
}

// Address range: 0x180294314 - 0x180294672
int64_t function_180294314(int64_t a1, int64_t a2, int128_t * a3) {
    int64_t v1 = a2; // 0x180294352
    if (a2 != a1) {
        unsigned char v2 = *(char *)a2 - 47; // 0x180294356
        if (v2 < 46) {
            // 0x18029435c
            if ((1 << (int64_t)(v2 & 63) & 0x200000000801) != 0) {
                // break -> 0x180294376
                return 0;
            }
        }
        int64_t v3 = function_18029bd28(a1, a2, (int64_t)a3); // 0x180294369
        v1 = v3;
        while (v3 != a1) {
            int64_t v4 = v3;
            v2 = *(char *)v4 - 47;
            if (v2 < 46) {
                // 0x18029435c
                v1 = v4;
                if ((1 << (int64_t)(v2 & 63) & 0x200000000801) != 0) {
                    // break -> 0x180294376
                    return 0;
                }
            }
            // 0x180294366
            v3 = function_18029bd28(a1, v4, (int64_t)a3);
            v1 = v3;
        }
    }
    int64_t v5 = v1;
    if (!((v5 == a1 + 1 | *(char *)v5 != 58))) {
        // 0x180294388
        function_180294190(a1, 0, 0, a3);
        // 0x180294651
        return function_18026ad50((int64_t)g731);
    }
    // 0x18029439d
    int64_t lpFindFileData; // bp-664, 0x180294314
    int64_t v6; // 0x180294314
    function_18029db80((int64_t)&lpFindFileData, 0, 592, v6);
    int64_t v7 = 0; // bp-824, 0x1802943df
    int64_t v8; // bp-776, 0x180294314
    function_1802718b0(&v8, 0);
    char v9; // 0x180294314
    int64_t v10; // 0x180294314
    if (*(int32_t *)(v10 + 12) != 0xfde9) {
        // 0x18029442d
        if ((int32_t)function_18028dccc(0xfde9) != 0) {
            if (v9 != 0) {
                int32_t * v11 = (int32_t *)(v8 + 936); // 0x18029445b
                *v11 = *v11 & -3;
            }
        } else {
            if (v9 != 0) {
                int32_t * v12 = (int32_t *)(v8 + 936); // 0x180294441
                *v12 = *v12 & -3;
            }
        }
    } else {
        if (v9 != 0) {
            int32_t * v13 = (int32_t *)(v8 + 936); // 0x180294421
            *v13 = *v13 & -3;
        }
    }
    // 0x180294465
    function_180277220(a1, &v7);
    if (FindFirstFileExW(NULL, 0, &lpFindFileData, 0, NULL, 0) == (int64_t *)-1) {
        // 0x1802944a4
        function_180294190(a1, 0, 0, a3);
        // 0x180294651
        return function_18026ad50((int64_t)g731);
    }
    int64_t v14 = 0; // bp-712, 0x1802944dd
    int64_t v15; // bp-744, 0x180294314
    function_1802718b0(&v15, 0);
    int64_t v16; // bp-620, 0x180294314
    char v17; // 0x180294314
    int64_t v18; // 0x180294314
    if (*(int32_t *)(v18 + 12) == 0xfde9) {
        if (v17 != 0) {
            int32_t * v19 = (int32_t *)(v15 + 936); // 0x180294516
            *v19 = *v19 & -3;
        }
        // 0x180294558
        function_180293da8(&v16, &v14);
        abort();
        // UNREACHABLE
    }
    // 0x180294522
    if ((int32_t)function_18028dccc(0xfde9) != 0) {
        if (v17 != 0) {
            int32_t * v20 = (int32_t *)(v15 + 936); // 0x18029454e
            *v20 = *v20 & -3;
        }
    } else {
        if (v17 != 0) {
            int32_t * v21 = (int32_t *)(v15 + 936); // 0x180294535
            *v21 = *v21 & -3;
        }
    }
    // 0x180294558
    function_180293da8(&v16, &v14);
    abort();
    // UNREACHABLE
}

// Address range: 0x180294674 - 0x180294679
int64_t function_180294674(int64_t a1, int64_t * a2) {
    // 0x180294674
    return function_180293f54(a1, (int64_t)a2);
}

// Address range: 0x18029467c - 0x18029479d
int64_t function_18029467c(int32_t hModule, int64_t a2, int64_t a3) {
    // 0x18029467c
    int64_t lpFilename; // bp-552, 0x18029467c
    int32_t v1 = GetModuleFileNameW((int64_t *)(int64_t)hModule, (int16_t *)&lpFilename, 261); // 0x1802946b7
    if (v1 == 0) {
        // 0x1802946c1
        function_1802798a8((int64_t)GetLastError());
        // 0x180294779
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = a2; // bp-608, 0x1802946e3
    int64_t v3; // bp-640, 0x18029467c
    function_1802718b0(&v3, 0);
    char v4; // 0x18029467c
    int64_t v5; // 0x18029467c
    if (*(int32_t *)(v5 + 12) == 0xfde9) {
        if (v4 != 0) {
            int32_t * v6 = (int32_t *)(v3 + 936); // 0x180294720
            *v6 = *v6 & -3;
        }
        // 0x180294762
        function_1802773c0((int64_t)&lpFilename, &v2);
        // 0x180294779
        return function_18026ad50((int64_t)g731);
    }
    int64_t v7 = function_18028dccc((int64_t)&v3); // 0x180294729
    if ((int32_t)v7 != 0) {
        if (v4 != 0) {
            int32_t * v8 = (int32_t *)(v3 + 936); // 0x180294758
            *v8 = *v8 & -3;
        }
    } else {
        if (v4 != (char)v7) {
            int32_t * v9 = (int32_t *)(v3 + 936); // 0x18029473d
            *v9 = *v9 & -3;
        }
    }
    // 0x180294762
    function_1802773c0((int64_t)&lpFilename, &v2);
    // 0x180294779
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802947a0 - 0x18029496e
int64_t function_1802947a0(int64_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6, int64_t * a7, int64_t * a8) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = v1;
    int64_t v3 = (int64_t)a3;
    int64_t v4 = (int64_t)a2;
    __acrt_lock((int32_t)v4);
    int64_t v5 = (int64_t)g1341; // 0x1802947d3
    int64_t v6 = v4; // 0x1802947e2
    int64_t v7 = v3; // 0x1802947e2
    if (g1341 == NULL) {
        goto lab_0x180294853;
    } else {
        int64_t v8 = *(int64_t *)(v3 + 136) + 24; // 0x1802947ca
        if (v8 == 0) {
            // 0x180294846
            function_18029db80(v5, 0, 257, v1);
            v6 = 0;
            v7 = 257;
            goto lab_0x180294853;
        } else {
            // 0x1802947e9
            v2 = 2;
            int64_t v9 = 2; // 0x1802947f2
            __asm_movups(*(int128_t *)v5, __asm_movups_16(*(int128_t *)v8));
            __asm_movups(*(int128_t *)(v5 + 16), __asm_movups_16(*(int128_t *)(v8 + 16)));
            __asm_movups(*(int128_t *)(v5 + 32), __asm_movups_16(*(int128_t *)(v8 + 32)));
            __asm_movups(*(int128_t *)(v5 + 48), __asm_movups_16(*(int128_t *)(v8 + 48)));
            __asm_movups(*(int128_t *)(v5 + 64), __asm_movups_16(*(int128_t *)(v8 + 64)));
            __asm_movups(*(int128_t *)(v5 + 80), __asm_movups_16(*(int128_t *)(v8 + 80)));
            __asm_movups(*(int128_t *)(v5 + 96), __asm_movups_16(*(int128_t *)(v8 + 96)));
            int64_t v10 = v5 + 128; // 0x18029482c
            __asm_movups(*(int128_t *)(v5 + 112), __asm_movups_16(*(int128_t *)(v8 + 112)));
            int64_t v11 = v8 + 128; // 0x180294837
            v9--;
            int64_t v12 = v11; // 0x18029483e
            int64_t v13 = v10; // 0x18029483e
            while (v9 != 0) {
                // 0x1802947f6
                __asm_movups(*(int128_t *)v13, __asm_movups_16(*(int128_t *)v12));
                int128_t v14 = __asm_movups_16(*(int128_t *)(v12 + 16)); // 0x1802947fc
                __asm_movups(*(int128_t *)(v13 + 16), v14);
                int128_t v15 = __asm_movups_16(*(int128_t *)(v12 + 32)); // 0x180294804
                __asm_movups(*(int128_t *)(v13 + 32), v15);
                int128_t v16 = __asm_movups_16(*(int128_t *)(v12 + 48)); // 0x18029480c
                __asm_movups(*(int128_t *)(v13 + 48), v16);
                int128_t v17 = __asm_movups_16(*(int128_t *)(v12 + 64)); // 0x180294814
                __asm_movups(*(int128_t *)(v13 + 64), v17);
                int128_t v18 = __asm_movups_16(*(int128_t *)(v12 + 80)); // 0x18029481c
                __asm_movups(*(int128_t *)(v13 + 80), v18);
                int128_t v19 = __asm_movups_16(*(int128_t *)(v12 + 96)); // 0x180294824
                __asm_movups(*(int128_t *)(v13 + 96), v19);
                v10 = v13 + 128;
                int128_t v20 = __asm_movups_16(*(int128_t *)(v12 + 112)); // 0x18029482f
                __asm_movups(*(int128_t *)(v13 + 112), v20);
                v11 = v12 + 128;
                v9--;
                v12 = v11;
                v13 = v10;
            }
            // 0x180294840
            v2 = 0;
            *(char *)v10 = *(char *)v11;
            goto lab_0x18029486d;
        }
    }
  lab_0x180294853:
    // 0x180294853
    *(int32_t *)function_180279918(v5, v6, v7, v1) = 22;
    function_180271814(v5, v6, v7, v2);
    goto lab_0x18029486d;
  lab_0x18029486d:;
    int64_t v21 = (int64_t)g1342; // 0x180294885
    int64_t v22; // 0x1802947a0
    int64_t v23; // 0x1802947a0
    int64_t v24; // 0x1802947a0
    int64_t v25; // 0x1802948ef
    if (g1342 == NULL) {
        // 0x18029486d
        v24 = 128;
        v25 = v2;
        v22 = 2;
        goto lab_0x1802948f4;
    } else {
        int64_t v26 = *(int64_t *)138 + 281; // 0x18029487a
        int64_t v27 = v26; // 0x180294899
        int64_t v28 = v21; // 0x180294899
        if (v26 == 0) {
            // 0x1802948e7
            v25 = v2;
            function_18029db80(v21, 0, 256, v25);
            v24 = 0;
            v22 = 256;
            goto lab_0x1802948f4;
        } else {
            __asm_movups(*(int128_t *)v28, __asm_movups_16(*(int128_t *)v27));
            int128_t v29 = __asm_movups_16(*(int128_t *)(v27 + 16)); // 0x1802948a1
            __asm_movups(*(int128_t *)(v28 + 16), v29);
            int128_t v30 = __asm_movups_16(*(int128_t *)(v27 + 32)); // 0x1802948a9
            __asm_movups(*(int128_t *)(v28 + 32), v30);
            int128_t v31 = __asm_movups_16(*(int128_t *)(v27 + 48)); // 0x1802948b1
            __asm_movups(*(int128_t *)(v28 + 48), v31);
            int128_t v32 = __asm_movups_16(*(int128_t *)(v27 + 64)); // 0x1802948b9
            __asm_movups(*(int128_t *)(v28 + 64), v32);
            int128_t v33 = __asm_movups_16(*(int128_t *)(v27 + 80)); // 0x1802948c1
            __asm_movups(*(int128_t *)(v28 + 80), v33);
            int128_t v34 = __asm_movups_16(*(int128_t *)(v27 + 96)); // 0x1802948c9
            __asm_movups(*(int128_t *)(v28 + 96), v34);
            int128_t v35 = __asm_movups_16(*(int128_t *)(v27 + 112)); // 0x1802948d4
            __asm_movups(*(int128_t *)(v28 + 112), v35);
            int64_t v36 = 1; // 0x1802948df
            v27 += 128;
            v28 += 128;
            int64_t v37 = v36; // 0x1802948e3
            v23 = 0;
            while (v36 != 0) {
                // 0x18029489b
                __asm_movups(*(int128_t *)v28, __asm_movups_16(*(int128_t *)v27));
                v29 = __asm_movups_16(*(int128_t *)(v27 + 16));
                __asm_movups(*(int128_t *)(v28 + 16), v29);
                v30 = __asm_movups_16(*(int128_t *)(v27 + 32));
                __asm_movups(*(int128_t *)(v28 + 32), v30);
                v31 = __asm_movups_16(*(int128_t *)(v27 + 48));
                __asm_movups(*(int128_t *)(v28 + 48), v31);
                v32 = __asm_movups_16(*(int128_t *)(v27 + 64));
                __asm_movups(*(int128_t *)(v28 + 64), v32);
                v33 = __asm_movups_16(*(int128_t *)(v27 + 80));
                __asm_movups(*(int128_t *)(v28 + 80), v33);
                v34 = __asm_movups_16(*(int128_t *)(v27 + 96));
                __asm_movups(*(int128_t *)(v28 + 96), v34);
                v35 = __asm_movups_16(*(int128_t *)(v27 + 112));
                __asm_movups(*(int128_t *)(v28 + 112), v35);
                v36 = v37 - 1;
                v27 += 128;
                v28 += 128;
                v37 = v36;
                v23 = 0;
            }
            goto lab_0x180294904;
        }
    }
  lab_0x1802948f4:
    // 0x1802948f4
    *(int32_t *)function_180279918(v21, v24, v22, v25) = 22;
    function_180271814(v21, v24, v22, v2);
    v23 = v22;
    goto lab_0x180294904;
  lab_0x180294904:;
    int64_t * v38 = (int64_t *)(v3 + 8); // 0x180294904
    int64_t v39 = *(int64_t *)*(int64_t *)*v38; // 0x18029490b
    int32_t * v40 = (int32_t *)v39; // 0x180294911
    int32_t v41 = *v40; // 0x180294911
    *v40 = v41 - 1;
    if (v41 == 1) {
        int64_t v42 = *(int64_t *)*(int64_t *)*v38; // 0x180294928
        if (v42 != (int64_t)&g770) {
            // 0x18029492d
            function_18028acc0(v42, v39);
        }
    }
    int64_t * v43 = (int64_t *)(v23 + 136); // 0x180294942
    *(int64_t *)*(int64_t *)*v38 = *v43;
    int32_t * v44 = (int32_t *)*v43; // 0x180294959
    *v44 = *v44 + 1;
    return __acrt_lock2(*(int32_t *)&v2, v23);
}

// Address range: 0x1802949f0 - 0x180294a88
int64_t function_1802949f0(int64_t a1, int64_t a2) {
    // 0x1802949f0
    int64_t v1; // 0x1802949f0
    function_18029db80(a1 + 24, 0, 257, v1);
    *(int64_t *)(a1 + 4) = 0;
    *(int64_t *)(a1 + 544) = 0;
    __asm_rep_stosd_memset((char *)(a1 + 12), 0, 6);
    int64_t v2 = a1 + (int64_t)&g770 + 48 - (int64_t)&g771; // 0x180294a3e
    int64_t v3 = 0;
    int64_t v4 = v3 + 1; // 0x180294a42
    char v5 = *(char *)(v3 + (int64_t)&g770 + 24); // 0x180294a45
    *(char *)(v2 + v3) = v5;
    while (v4 != 257) {
        // 0x180294a3e
        v3 = v4;
        v4 = v3 + 1;
        v5 = *(char *)(v3 + (int64_t)&g770 + 24);
        *(char *)(v2 + v3) = v5;
    }
    int64_t v6 = a1 + (int64_t)&g770 + 562 - (int64_t)&g772; // 0x180294a60
    int64_t result = &g772; // 0x180294a5d
    int64_t v7 = 0;
    int64_t v8 = v7 + 1; // 0x180294a64
    unsigned char v9 = *(char *)(v7 + (int64_t)&g770 + 281); // 0x180294a67
    result = result & -256 | (int64_t)v9;
    *(char *)(v6 + v7) = v9;
    while (v8 != 256) {
        // 0x180294a60
        v7 = v8;
        v8 = v7 + 1;
        v9 = *(char *)(v7 + (int64_t)&g770 + 281);
        result = result & -256 | (int64_t)v9;
        *(char *)(v6 + v7) = v9;
    }
    // 0x180294a7d
    return result;
}

// Address range: 0x180294a88 - 0x180294c7d
int64_t function_180294a88(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 4); // 0x180294ab8
    int32_t CodePage = *v1; // 0x180294ab8
    int128_t v2; // 0x180294a88
    int128_t v3; // 0x180294a88
    __asm_movups(v3, __asm_xorps(v2, v2));
    if (CodePage != 0xfde9) {
        // 0x180294ad3
        int128_t lpCPInfo; // bp-1848, 0x180294a88
        if (GetCPInfo(CodePage, (struct _cpinfo *)&lpCPInfo)) {
            // 0x180294ae6
            int64_t v4; // bp-1816, 0x180294a88
            int64_t v5 = &v4; // 0x180294ae8
            int64_t v6 = 0; // 0x180294aed
            int64_t v7 = v5; // 0x180294aed
            *(char *)v7 = (char)v6;
            int64_t v8 = v6 + 1; // 0x180294af4
            v6 = v8 & 0xffffffff;
            v7++;
            while ((int32_t)v8 < 256) {
                // 0x180294af2
                *(char *)v7 = (char)v6;
                v8 = v6 + 1;
                v6 = v8 & 0xffffffff;
                v7++;
            }
            // 0x180294afd
            v4 = 32;
            char v9; // bp-1842, 0x180294a88
            if (v9 != 0) {
                int64_t v10 = &v9; // 0x180294b27
                unsigned char v11 = *(char *)(v10 + 1); // 0x180294b0d
                int64_t v12; // bp-1928, 0x180294a88
                int64_t v13; // 0x180294a88
                int64_t v14; // 0x180294b20
                uint32_t v15; // 0x180294b22
                if (v9 <= v11) {
                    // 0x180294b1b
                    v13 = v9;
                    *(char *)((int64_t)&v12 + 112 + v13) = 32;
                    v14 = v13 + 1;
                    v15 = (int32_t)v14;
                    v13 = v14 & 0xffffffff;
                    while (v15 <= (int32_t)v11 && v15 < 256) {
                        // 0x180294b1b
                        *(char *)((int64_t)&v12 + 112 + v13) = 32;
                        v14 = v13 + 1;
                        v15 = (int32_t)v14;
                        v13 = v14 & 0xffffffff;
                    }
                }
                // 0x180294b27
                v10 += 2;
                char v16 = *(char *)v10; // 0x180294b2b
                while (v16 != 0) {
                    unsigned char v17 = v16;
                    v11 = *(char *)(v10 + 1);
                    if (v17 <= v11) {
                        // 0x180294b1b
                        v13 = v17;
                        *(char *)((int64_t)&v12 + 112 + v13) = 32;
                        v14 = v13 + 1;
                        v15 = (int32_t)v14;
                        v13 = v14 & 0xffffffff;
                        while (v15 <= (int32_t)v11 && v15 < 256) {
                            // 0x180294b1b
                            *(char *)((int64_t)&v12 + 112 + v13) = 32;
                            v14 = v13 + 1;
                            v15 = (int32_t)v14;
                            v13 = v14 & 0xffffffff;
                        }
                    }
                    // 0x180294b27
                    v10 += 2;
                    v16 = *(char *)v10;
                }
            }
            // 0x180294b31
            int64_t v18; // bp-1048, 0x180294a88
            int64_t v19 = &v18; // 0x180294b53
            function_180292fa4(0, 1, v5, 256, v19, (int64_t)*v1, 0);
            int32_t v20 = *v1; // 0x180294b67
            int64_t * v21 = (int64_t *)(a1 + 544); // 0x180294b6d
            int64_t v22 = *v21; // 0x180294b6d
            int64_t v23; // bp-1560, 0x180294a88
            __acrt_LCMapStringA(NULL, v22, 256, (char *)&v4, 256, (int16_t *)&v23, 256, (int64_t)v20, 0);
            int32_t v24 = *v1; // 0x180294b9a
            int64_t v25 = *v21; // 0x180294ba3
            int64_t v26; // bp-1304, 0x180294a88
            __acrt_LCMapStringA(NULL, v25, 512, (char *)&v4, 256, (int16_t *)&v26, 256, (int64_t)v24, 0);
            int64_t v27 = v19; // 0x180294be1
            int64_t v28 = 256; // 0x180294be1
            int64_t v29 = a1 + 25;
            char v30 = *(char *)v27; // 0x180294be5
            char v31; // 0x180294a88
            char * v32; // 0x180294bea
            char v33; // 0x180294bed
            char * v34; // 0x180294bf9
            char v35; // 0x180294bfc
            if ((v30 & 1) == 0) {
                // 0x180294bf4
                v31 = 0;
                if ((v30 & 2) != 0) {
                    // 0x180294bf9
                    v34 = (char *)v29;
                    *v34 = *v34 | 32;
                    v35 = *(char *)(v29 - 25 - a1 + (int64_t)&v26);
                    v31 = v35;
                }
            } else {
                // 0x180294bea
                v32 = (char *)v29;
                *v32 = *v32 | 16;
                v33 = *(char *)(v29 - 25 - a1 + (int64_t)&v23);
                v31 = v33;
            }
            // 0x180294c05
            *(char *)(v29 + 256) = v31;
            v28--;
            int64_t v36 = v29 + 1; // 0x180294c16
            v27 += 2;
            while (v28 != 0) {
                // 0x180294be5
                v29 = v36;
                v30 = *(char *)v27;
                if ((v30 & 1) == 0) {
                    // 0x180294bf4
                    v31 = 0;
                    if ((v30 & 2) != 0) {
                        // 0x180294bf9
                        v34 = (char *)v29;
                        *v34 = *v34 | 32;
                        v35 = *(char *)(v29 - 25 - a1 + (int64_t)&v26);
                        v31 = v35;
                    }
                } else {
                    // 0x180294bea
                    v32 = (char *)v29;
                    *v32 = *v32 | 16;
                    v33 = *(char *)(v29 - 25 - a1 + (int64_t)&v23);
                    v31 = v33;
                }
                // 0x180294c05
                *(char *)(v29 + 256) = v31;
                v28--;
                v36 = v29 + 1;
                v27 += 2;
            }
            // 0x180294c59
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v37 = 0;
    int64_t v38 = a1 + 25;
    int32_t v39 = v37;
    int64_t v40; // 0x180294a88
    char * v41; // 0x180294c32
    char * v42; // 0x180294c40
    if (v39 < 91) {
        // 0x180294c32
        v41 = (char *)v38;
        *v41 = *v41 | 16;
        v40 = v37 + 32 & 0xffffffff;
    } else {
        // 0x180294c3a
        v40 = 0;
        if (v39 < 123) {
            // 0x180294c40
            v42 = (char *)v38;
            *v42 = *v42 | 32;
            v40 = v37 + 0xffffffe0 & 0xffffffff;
        }
    }
    // 0x180294c4a
    *(char *)(v38 + 256) = (char)v40;
    int64_t v43 = v37 + 1; // 0x180294c50
    int64_t v44 = v38 + 1; // 0x180294c57
    while ((int32_t)v43 < 256) {
        // 0x180294c25
        v37 = v43 & 0xffffffff;
        v38 = v44;
        v39 = v37;
        if (v39 < 91) {
            // 0x180294c32
            v41 = (char *)v38;
            *v41 = *v41 | 16;
            v40 = v37 + 32 & 0xffffffff;
        } else {
            // 0x180294c3a
            v40 = 0;
            if (v39 < 123) {
                // 0x180294c40
                v42 = (char *)v38;
                *v42 = *v42 | 32;
                v40 = v37 + 0xffffffe0 & 0xffffffff;
            }
        }
        // 0x180294c4a
        *(char *)(v38 + 256) = (char)v40;
        v43 = v37 + 1;
        v44 = v38 + 1;
    }
    // 0x180294c59
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180294c80 - 0x180294eef
int64_t function_180294c80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // bp+32, 0x180294c8b
    int64_t v2 = a3; // bp+24, 0x180294c8f
    function_180294ef0(a3, a4);
    _3f_getSystemCP_40__40_YAHH_40_Z((int32_t)&g1381);
    int64_t * v3 = (int64_t *)(a3 + 136);
    if (*(int32_t *)(*v3 + 4) == (int32_t)&g1381) {
        // 0x180294ed7
        return 0;
    }
    int64_t * v4 = _malloc_base(552); // 0x180294cde
    if (v4 == NULL) {
        // 0x180294ceb
        function_18028acc0(0, a4);
        // 0x180294ed7
        return 0xffffffff;
    }
    int64_t v5 = (int64_t)v4; // 0x180294cde
    int64_t v6; // bp-584, 0x180294c80
    int64_t v7 = &v6; // 0x180294d01
    int64_t v8 = *v3; // 0x180294d15
    int64_t v9 = v7; // 0x180294d15
    int64_t v10; // 0x180294c80
    int64_t v11; // 0x180294c80
    for (int64_t i = 4; i > 0; i--) {
        // 0x180294d19
        v11 = v9;
        v10 = v8;
        int128_t v12 = __asm_movups_16(*(int128_t *)v10); // 0x180294d19
        int128_t v13 = __asm_movups_16(*(int128_t *)(v10 + 16)); // 0x180294d1c
        __asm_movups(*(int128_t *)v11, v12);
        int128_t v14 = __asm_movups_16(*(int128_t *)(v10 + 32)); // 0x180294d23
        __asm_movups(*(int128_t *)(v11 + 16), v13);
        int128_t v15 = __asm_movups_16(*(int128_t *)(v10 + 48)); // 0x180294d2b
        __asm_movups(*(int128_t *)(v11 + 32), v14);
        int128_t v16 = __asm_movups_16(*(int128_t *)(v10 + 64)); // 0x180294d33
        __asm_movups(*(int128_t *)(v11 + 48), v15);
        int128_t v17 = __asm_movups_16(*(int128_t *)(v10 + 80)); // 0x180294d3b
        __asm_movups(*(int128_t *)(v11 + 64), v16);
        int128_t v18 = __asm_movups_16(*(int128_t *)(v10 + 96)); // 0x180294d43
        __asm_movups(*(int128_t *)(v11 + 80), v17);
        int128_t v19 = __asm_movups_16(*(int128_t *)(v10 + 112)); // 0x180294d4b
        v8 = v10 + 128;
        __asm_movups(*(int128_t *)(v11 + 96), v18);
        v9 = v11 + 128;
        __asm_movups(*(int128_t *)(v11 + 112), v19);
    }
    int128_t v20 = __asm_movups_16(*(int128_t *)v8); // 0x180294d63
    int128_t v21 = __asm_movups_16(*(int128_t *)(v10 + 144)); // 0x180294d66
    __asm_movups(*(int128_t *)v9, v20);
    __asm_movups(*(int128_t *)(v11 + 144), v21);
    *(int64_t *)(v11 + 160) = *(int64_t *)(v10 + 160);
    int64_t v22 = v7; // 0x180294d7c
    int64_t v23 = v5; // 0x180294d7c
    int64_t v24; // 0x180294c80
    int64_t v25; // 0x180294c80
    for (int64_t i = 4; i > 0; i--) {
        // 0x180294d81
        v25 = v23;
        v24 = v22;
        int128_t v26 = __asm_movups_16(*(int128_t *)v24); // 0x180294d81
        int128_t v27 = __asm_movups_16(*(int128_t *)(v24 + 16)); // 0x180294d84
        __asm_movups(*(int128_t *)v25, v26);
        int128_t v28 = __asm_movups_16(*(int128_t *)(v24 + 32)); // 0x180294d8b
        __asm_movups(*(int128_t *)(v25 + 16), v27);
        int128_t v29 = __asm_movups_16(*(int128_t *)(v24 + 48)); // 0x180294d93
        __asm_movups(*(int128_t *)(v25 + 32), v28);
        int128_t v30 = __asm_movups_16(*(int128_t *)(v24 + 64)); // 0x180294d9b
        __asm_movups(*(int128_t *)(v25 + 48), v29);
        int128_t v31 = __asm_movups_16(*(int128_t *)(v24 + 80)); // 0x180294da3
        __asm_movups(*(int128_t *)(v25 + 64), v30);
        int128_t v32 = __asm_movups_16(*(int128_t *)(v24 + 96)); // 0x180294dab
        __asm_movups(*(int128_t *)(v25 + 80), v31);
        int128_t v33 = __asm_movups_16(*(int128_t *)(v24 + 112)); // 0x180294db3
        v22 = v24 + 128;
        __asm_movups(*(int128_t *)(v25 + 96), v32);
        v23 = v25 + 128;
        __asm_movups(*(int128_t *)(v25 + 112), v33);
    }
    int128_t v34 = __asm_movups_16(*(int128_t *)v22); // 0x180294dcb
    int128_t v35 = __asm_movups_16(*(int128_t *)(v24 + 144)); // 0x180294dce
    __asm_movups(*(int128_t *)v23, v34);
    __asm_movups(*(int128_t *)(v25 + 144), v35);
    *(int64_t *)(v25 + 160) = *(int64_t *)(v24 + 160);
    *(int32_t *)v4 = 0;
    int64_t v36 = function_180295024((int64_t)(int32_t)&g1381, v5); // 0x180294de8
    if ((int32_t)v36 == -1) {
        // 0x180294df6
        *(int32_t *)function_180279918((int64_t)(int32_t)&g1381, v5, 0, 128) = 22;
        function_18028acc0(v5, v5);
        // 0x180294ed7
        return 0xffffffff;
    }
    if ((char)a2 == 0) {
        // 0x180294e15
        function_180288548();
    }
    int32_t * v37 = (int32_t *)*(int64_t *)(v2 + 136); // 0x180294e2a
    int32_t v38 = *v37; // 0x180294e2a
    *v37 = v38 - 1;
    if (v38 == 1) {
        int64_t v39 = *(int64_t *)(v2 + 136); // 0x180294e39
        if (v39 != (int64_t)&g770) {
            // 0x180294e4c
            function_18028acc0(v39, v5);
        }
    }
    // 0x180294e51
    *(int32_t *)v4 = 1;
    *(int64_t *)(v2 + 136) = v5;
    int64_t v40 = v5; // 0x180294e78
    if ((g769 & *(int32_t *)(v2 + 936)) == 0) {
        int64_t v41 = &v2; // bp-600, 0x180294e81
        int64_t v42; // bp-608, 0x180294c80
        int64_t v43 = &v42; // 0x180294ea1
        int64_t v44 = 5; // bp-612, 0x180294eab
        v42 = 5;
        int64_t v45; // bp-616, 0x180294c80
        function_1802947a0(&v45, &v42, &v41, &v44, 5, 5, &v2, &v1);
        v40 = v43;
        if ((char)a2 != 0) {
            // 0x180294ebd
            *(int64_t *)&g756 = (int64_t)&v44;
            v40 = v43;
        }
    }
    // 0x180294ece
    function_18028acc0(0, v40);
    // 0x180294ed7
    return v36 & 0xffffffff;
}

// Address range: 0x180294ef0 - 0x180294fa8
int64_t function_180294ef0(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t v2; // 0x180294ef0
    int64_t result; // 0x180294ef0
    int64_t v3; // 0x180294ef0
    if ((*(int32_t *)(a1 + 936) & g769) == 0) {
        goto lab_0x180294f26;
    } else {
        // 0x180294f13
        if (*(int64_t *)(a1 + 144) == 0) {
            goto lab_0x180294f26;
        } else {
            // 0x180294f1d
            v2 = a2;
            v3 = a1;
            result = *(int64_t *)(a1 + 136);
            goto lab_0x180294f8a;
        }
    }
  lab_0x180294f26:
    // 0x180294f26
    __acrt_lock(5);
    int64_t * v4 = (int64_t *)(a1 + 136); // 0x180294f31
    int64_t v5 = *v4; // 0x180294f31
    int64_t v6 = a2; // 0x180294f40
    int64_t v7 = a2; // 0x180294f40
    if (v5 != a2) {
        int64_t v8 = a2; // 0x180294f45
        if (v5 != 0) {
            int32_t * v9 = (int32_t *)v5; // 0x180294f4a
            int32_t v10 = *v9; // 0x180294f4a
            *v9 = v10 - 1;
            v8 = v1;
            if (v5 != (int64_t)&g770 && v10 == 1) {
                // 0x180294f64
                function_18028acc0(v5, v1);
                v8 = v1;
            }
        }
        // 0x180294f69
        *v4 = v8;
        *(int32_t *)v8 = *(int32_t *)&v1 + 1;
        v6 = v1;
        v7 = v8;
    }
    // 0x180294f80
    __acrt_lock2(5, v6);
    v2 = v6;
    v3 = 5;
    result = v7;
    goto lab_0x180294f8a;
  lab_0x180294f8a:
    // 0x180294f8a
    if (result == 0) {
        // 0x180294fa2
        return function_18027f79c(v3, v2);
    }
    // 0x180294f8f
    return result;
}

// Address range: 0x180295008 - 0x180295024
int64_t function_180295008(void) {
    // 0x180295008
    int64_t v1; // 0x180295008
    int64_t v2 = __vcrt_getptd2(v1); // 0x18029500c
    return function_180294ef0(v2, (int64_t)&g1343);
}

// Address range: 0x180295024 - 0x1802952ec
int64_t function_180295024(int64_t a1, int64_t a2) {
    // 0x180295024
    int128_t v1; // 0x180295024
    int128_t v2; // 0x180295024
    __asm_movups(v2, __asm_xorps(v1, v1));
    _3f_getSystemCP_40__40_YAHH_40_Z(0);
    int64_t v3 = (int64_t)&g774; // 0x180295065
    int64_t v4 = a2; // 0x180295065
    if (((int32_t)&g1381 & (int32_t)&g1381) == 0) {
      lab_0x1802952bc:
        // 0x1802952bc
        function_1802949f0(a2, v4);
        // 0x1802952c6
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = 0;
    int64_t v6; // 0x180295024
    int32_t v7; // 0x180295024
    int64_t v8; // 0x180295024
    int64_t v9; // 0x180295024
    int64_t v10; // 0x180295024
    int64_t v11; // 0x180295024
    int32_t * v12; // 0x180295107
    int64_t * v13; // 0x18029510a
    while (*(int32_t *)v3 != (int32_t)&g1381) {
        int64_t v14 = v5 + 1; // 0x180295083
        v3 += 48;
        if ((int32_t)v14 >= 5) {
            if ((int32_t)&g1381 == 0xfde8) {
                return function_18026ad50((int64_t)g731);
            } else {
                // 0x18029509c
                if (!IsValidCodePage((int32_t)&g1381 & 0xffff)) {
                    return function_18026ad50((int64_t)g731);
                } else {
                    if ((int32_t)&g1381 != 0xfde9) {
                        // 0x1802950dc
                        int128_t lpCPInfo; // bp-72, 0x180295024
                        if (!GetCPInfo((int32_t)&g1381, (struct _cpinfo *)&lpCPInfo)) {
                            // 0x1802951b5
                            v4 = &lpCPInfo;
                            if (g1344 != 0) {
                                goto lab_0x1802952bc;
                            } else {
                                return function_18026ad50((int64_t)g731);
                            }
                        } else {
                            // 0x1802950f1
                            v11 = a2 + 24;
                            function_18029db80(v11, 0, 257, v10);
                            v12 = (int32_t *)(a2 + 4);
                            *v12 = (int32_t)&g1381;
                            v13 = (int64_t *)(a2 + 544);
                            *v13 = 0;
                            v7 = 0;
                            if ((int32_t)lpCPInfo != 2) {
                                goto lab_0x1802951ad;
                            } else {
                                char v15; // 0x180295024
                                if (v15 == 0) {
                                    // 0x18029514e
                                    v6 = a2 + 26;
                                    v9 = 254;
                                    goto lab_0x180295157;
                                } else {
                                    // 0x180295122
                                    char v16; // bp-66, 0x180295024
                                    v8 = &v16;
                                    goto lab_0x180295122_2;
                                }
                            }
                        }
                    } else {
                        // 0x1802950b6
                        *(int64_t *)(a2 + 4) = 0xfde9;
                        *(int64_t *)(a2 + 544) = 0;
                        *(int32_t *)(a2 + 24) = 0;
                        *(int16_t *)(a2 + 28) = 0;
                        // 0x1802950c8
                        __asm_rep_stosd_memset((char *)(a2 + 12), 0, 6);
                        goto lab_0x1802952b2;
                    }
                }
            }
        }
        v5 = v14 & 0xffffffff;
    }
    int64_t v17 = a2 + 24;
    function_18029db80(v17, 0, 257, v10);
    int64_t v18 = 48 * v5; // 0x1802951f3
    int64_t v19 = (int64_t)&g773;
    int64_t v20 = v18 + (int64_t)&g775;
    char v21 = *(char *)v20; // 0x1802951fd
    unsigned char v22; // 0x180295207
    int64_t v23; // 0x180295024
    int64_t v24; // 0x180295024
    int64_t v25; // 0x180295024
    int64_t v26; // 0x180295024
    char * v27; // 0x180295024
    char * v28; // 0x180295202
    unsigned char v29; // 0x180295202
    int64_t v30; // 0x180295238
    char v31; // 0x18029523c
    int64_t v32; // 0x180295207
    int64_t v33; // 0x180295224
    char * v34; // 0x180295227
    if (v21 != 0) {
        // 0x180295202
        v27 = (char *)v19;
        v31 = v21;
        v26 = v20;
        v28 = (char *)(v26 + 1);
        v29 = *v28;
        while (v29 != 0) {
            // 0x180295207
            v22 = v31;
            if (v22 <= v29) {
                // 0x180295214
                v32 = v22;
                v25 = v32;
                v24 = v32 + 1;
                while ((int32_t)v24 < 257) {
                    // 0x180295221
                    v33 = v25 + 1;
                    v34 = (char *)(v24 + v17);
                    *v34 = *v34 | *v27;
                    v25 = v33 & 0xffffffff;
                    v23 = v24 + 1 & 0xffffffff;
                    if ((int32_t)v33 > (int32_t)*v28) {
                        // break -> 0x180295238
                        return 0;
                    }
                    v24 = v23;
                }
            }
            // 0x180295238
            v30 = v26 + 2;
            v31 = *(char *)v30;
            if (v31 == 0) {
                // break -> 0x180295240
                return 0;
            }
            v26 = v30;
            v28 = (char *)(v26 + 1);
            v29 = *v28;
        }
    }
    int64_t v35 = v19 + 1; // 0x180295244
    int64_t v36 = v20 + 8; // 0x18029524a
    while ((int32_t)v35 != (int32_t)&g773 + 4) {
        // 0x1802951fa
        v19 = v35;
        v20 = v36;
        v21 = *(char *)v20;
        if (v21 != 0) {
            // 0x180295202
            v27 = (char *)v19;
            v31 = v21;
            v26 = v20;
            v28 = (char *)(v26 + 1);
            v29 = *v28;
            while (v29 != 0) {
                // 0x180295207
                v22 = v31;
                if (v22 <= v29) {
                    // 0x180295214
                    v32 = v22;
                    v25 = v32;
                    v24 = v32 + 1;
                    while ((int32_t)v24 < 257) {
                        // 0x180295221
                        v33 = v25 + 1;
                        v34 = (char *)(v24 + v17);
                        *v34 = *v34 | *v27;
                        v25 = v33 & 0xffffffff;
                        v23 = v24 + 1 & 0xffffffff;
                        if ((int32_t)v33 > (int32_t)*v28) {
                            // break -> 0x180295238
                            return 0;
                        }
                        v24 = v23;
                    }
                }
                // 0x180295238
                v30 = v26 + 2;
                v31 = *(char *)v30;
                if (v31 == 0) {
                    // break -> 0x180295240
                    return 0;
                }
                v26 = v30;
                v28 = (char *)(v26 + 1);
                v29 = *v28;
            }
        }
        // 0x180295240
        v35 = v19 + 1;
        v36 = v20 + 8;
    }
    // 0x18029524c
    *(int32_t *)(a2 + 4) = (int32_t)&g1381;
    *(int32_t *)(a2 + 8) = 1;
    *(int64_t *)(a2 + 544) = (int32_t)&g1381 == 932 | (int32_t)&g1381 == 936 | (int32_t)&g1381 == 949 ? (int32_t)&g1381 == 932 | (int32_t)&g1381 == 936 ? (int32_t)&g1381 == 932 ? (int64_t)L"ja-JP" : (int64_t)L"zh-CN" : (int64_t)L"ko-KR" : (int32_t)&g1381 != 950 ? 0 : (int64_t)L"zh-TW";
    int64_t v37 = (int64_t)&g774 - 8 - a2 + v18; // 0x1802952a1
    int64_t v38 = 6; // 0x18029529d
    int64_t v39 = a2 + 12;
    *(int16_t *)v39 = *(int16_t *)(v37 + v39);
    v38--;
    int64_t v40 = v39 + 2; // 0x1802952b0
    while (v38 != 0) {
        // 0x1802952a1
        v39 = v40;
        *(int16_t *)v39 = *(int16_t *)(v37 + v39);
        v38--;
        v40 = v39 + 2;
    }
  lab_0x1802952b2:
    // 0x1802952b2
    function_180294a88(a2);
    // 0x1802952c6
    return function_18026ad50((int64_t)g731);
  lab_0x1802951ad:
    // 0x1802951ad
    *(int32_t *)(a2 + 8) = v7;
    // 0x1802950c8
    __asm_rep_stosd_memset((char *)(a2 + 12), 0, 6);
    goto lab_0x1802952b2;
  lab_0x180295157:;
    char * v41 = (char *)v6; // 0x180295157
    *v41 = *v41 | 8;
    int64_t v42 = v9 - 1; // 0x18029515d
    v6++;
    v9 = v42;
    int64_t v43; // 0x180295024
    if (v42 != 0) {
        goto lab_0x180295157;
    } else {
        // 0x180295162
        v43 = (int64_t)L"zh-CN";
        switch (*v12) {
            case 932: {
                // 0x18029519b
                v43 = (int64_t)L"ja-JP";
                goto lab_0x1802951a2;
            }
            case 936: {
                goto lab_0x1802951a2;
            }
            case 949: {
                // 0x180295189
                v43 = (int64_t)L"ko-KR";
                goto lab_0x1802951a2;
            }
            case 950: {
                // 0x180295180
                v43 = (int64_t)L"zh-TW";
                goto lab_0x1802951a2;
            }
            default: {
                // 0x1802951a2
                v43 = 0;
                goto lab_0x1802951a2;
            }
        }
    }
  lab_0x180295122_2:;
    unsigned char v44 = *(char *)(v8 + 1); // 0x180295122
    int64_t v45; // 0x180295024
    int64_t v46; // 0x180295024
    if (v44 == 0) {
        // 0x18029514e
        v6 = a2 + 26;
        v9 = 254;
        goto lab_0x180295157;
    } else {
        unsigned char v47 = *(char *)v8; // 0x18029512b
        if (v47 > v44) {
            goto lab_0x180295146;
        } else {
            int64_t v48 = v47; // 0x18029512b
            v46 = (int64_t)v44 + 1 - v48 & 0xffffffff;
            v45 = v48 + 1;
            goto lab_0x18029513a;
        }
    }
  lab_0x1802951a2:
    // 0x1802951a2
    *v13 = v43;
    v7 = 1;
    goto lab_0x1802951ad;
  lab_0x180295146:;
    int64_t v49 = v8 + 2; // 0x180295146
    v8 = v49;
    if (*(char *)v49 != 0) {
        goto lab_0x180295122_2;
    } else {
        // 0x18029514e
        v6 = a2 + 26;
        v9 = 254;
        goto lab_0x180295157;
    }
  lab_0x18029513a:;
    char * v50 = (char *)(v45 + v11); // 0x18029513a
    *v50 = *v50 | 4;
    int64_t v51 = v46 - 1; // 0x180295141
    v46 = v51;
    v45 = v45 + 1 & 0xffffffff;
    if (v51 != 0) {
        goto lab_0x18029513a;
    } else {
        goto lab_0x180295146;
    }
}

// Address range: 0x1802952ec - 0x18029535f
int64_t function_1802952ec(int32_t a1, int64_t a2, int32_t a3, int64_t a4) {
    // 0x1802952ec
    int64_t v1; // bp-40, 0x1802952ec
    function_1802718b0(&v1, (int64_t)a1);
    int64_t v2 = a2 & 255; // 0x180295315
    int64_t result; // 0x1802952ec
    int32_t v3; // 0x1802952ec
    if ((*(char *)(v2 + 25 + (int64_t)v3) & (char)a4) != 0) {
        // 0x180295337
        result = 1;
        goto lab_0x18029533c;
    } else {
        // 0x18029531f
        result = 0;
        if (a3 == 0) {
            goto lab_0x18029533c;
        } else {
            // 0x180295323
            result = 0;
            int64_t v4; // 0x1802952ec
            if (((int32_t)*(int16_t *)(*(int64_t *)v4 + 2 * v2) & a3) != 0) {
                // 0x180295337
                result = 1;
                goto lab_0x18029533c;
            } else {
                goto lab_0x18029533c;
            }
        }
    }
  lab_0x18029533c:;
    // 0x18029533c
    char v5; // 0x1802952ec
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(v1 + 936); // 0x180295348
        *v6 = *v6 & -3;
    }
    // 0x18029534f
    return result;
}

// Address range: 0x180295360 - 0x180295372
int64_t function_180295360(int64_t a1) {
    // 0x180295360
    return function_1802952ec(0, a1 & 0xffffffff, 0, 4);
}

// Address range: 0x18029539c - 0x1802954aa
int64_t function_18029539c(int64_t a1, int64_t a2) {
    int16_t * lpszEnvironmentBlock = GetEnvironmentStringsW(); // 0x1802953b5
    if (lpszEnvironmentBlock == NULL) {
        // 0x18029548f
        return 0;
    }
    int64_t v1 = (int64_t)lpszEnvironmentBlock; // 0x1802953b5
    int64_t v2 = v1; // 0x1802953d2
    if (*lpszEnvironmentBlock != 0) {
        int64_t v3 = -1; // 0x1802953d4
        v3++;
        int64_t v4 = 2 * v3 + v1; // 0x1802953db
        while (*(int16_t *)v4 != 0) {
            // 0x1802953d8
            v3++;
            v4 = 2 * v3 + v1;
        }
        int64_t v5 = v4 + 2; // 0x1802953e7
        v2 = v5;
        while (*(int16_t *)v5 != 0) {
            // 0x1802953d4
            v3 = -1;
            v3++;
            v4 = 2 * v3 + v5;
            while (*(int16_t *)v4 != 0) {
                // 0x1802953d8
                v3++;
                v4 = 2 * v3 + v5;
            }
            // 0x1802953e2
            v5 = v4 + 2;
            v2 = v5;
        }
    }
    int32_t v6 = (2 - v1 + v2) / 2; // 0x180295408
    int64_t v7 = function_18028d8d8(0, 0, v1, v6, 0, 0); // 0x180295418
    int32_t v8 = v7; // 0x180295423
    if (v8 == 0) {
        // 0x180295427
        FreeEnvironmentStringsW(lpszEnvironmentBlock);
        // 0x18029548f
        return 0;
    }
    int64_t * v9 = _malloc_base(v8); // 0x180295432
    if (v9 == NULL) {
        // 0x18029543f
        function_18028acc0(0, 0);
        // 0x180295427
        FreeEnvironmentStringsW(lpszEnvironmentBlock);
        // 0x18029548f
        return 0;
    }
    int64_t v10 = (int64_t)v9; // 0x180295432
    int64_t result; // 0x18029539c
    if ((int32_t)function_18028d8d8(0, 0, v1, v6, v10, 0x100000000 * v7 / 0x100000000) != 0) {
        // 0x180295479
        function_18028acc0(0, 0);
        result = v10;
    } else {
        // 0x18029546f
        function_18028acc0(v10, 0);
        result = 0;
    }
    // 0x180295483
    FreeEnvironmentStringsW(lpszEnvironmentBlock);
    // 0x18029548f
    return result;
}

// Address range: 0x1802954ac - 0x180295548
int64_t function_1802954ac(void) {
    int16_t * lpszEnvironmentBlock = GetEnvironmentStringsW(); // 0x1802954c0
    int64_t result = (int64_t)lpszEnvironmentBlock; // 0x1802954c0
    if (lpszEnvironmentBlock == NULL) {
        // 0x180295533
        return result;
    }
    int64_t v1 = result; // 0x1802954d6
    if (*lpszEnvironmentBlock != 0) {
        int64_t v2 = -1; // 0x1802954d8
        v2++;
        int64_t v3 = 2 * v2 + result; // 0x1802954df
        while (*(int16_t *)v3 != 0) {
            // 0x1802954dc
            v2++;
            v3 = 2 * v2 + result;
        }
        int64_t v4 = v3 + 2; // 0x1802954e9
        v1 = v4;
        while (*(int16_t *)v4 != 0) {
            // 0x1802954d8
            v2 = -1;
            v2++;
            v3 = 2 * v2 + v4;
            while (*(int16_t *)v3 != 0) {
                // 0x1802954dc
                v2++;
                v3 = 2 * v2 + v4;
            }
            // 0x1802954e5
            v4 = v3 + 2;
            v1 = v4;
        }
    }
    int64_t v5 = 2 - result + v1 & -2;
    int64_t * v6 = _malloc_base((int32_t)v5); // 0x180295502
    int64_t result2 = 0; // 0x18029550d
    int64_t v7; // 0x1802954ac
    if (v6 != NULL) {
        // 0x18029550f
        result2 = (int64_t)v6;
        int64_t v8; // 0x1802954ac
        function_18029d4e0(result2, result, v5, v8);
        v7 = result;
    }
    // 0x180295520
    function_18028acc0(0, v7);
    FreeEnvironmentStringsW(lpszEnvironmentBlock);
    // 0x180295533
    return result2;
}

// Address range: 0x180295548 - 0x1802958ac
int64_t function_180295548(int64_t a1, int64_t a2) {
    // 0x180295548
    int64_t v1; // 0x180295548
    int64_t v2; // 0x180295548
    if (a1 == 0) {
        // 0x180295570
        *(int32_t *)function_180279918(a1, a2, v2, v1) = 22;
        // 0x18029587a
        return -1;
    }
    int64_t v3 = function_18029d3c8(a1, 61); // 0x180295588
    if (v3 == 0 || v3 == a1) {
        // 0x180295863
        *(int32_t *)function_180279918(a1, 61, v2, v1) = 22;
        function_18028acc0(a1, 61);
        // 0x18029587a
        return -1;
    }
    int64_t v4 = g1292; // 0x1802955a2
    int16_t v5 = *(int16_t *)(v3 + 2); // 0x1802955b0
    int64_t v6 = v4; // 0x1802955b5
    if (v4 == g1293) {
        // 0x1802955b7
        v6 = function_1802958ac(v4);
        g1292 = v6;
    }
    int64_t v7 = 61; // 0x1802955d1
    int64_t v8 = v6; // 0x1802955d1
    int64_t v9; // 0x180295548
    int64_t result; // 0x180295548
    if (v6 != 0) {
        goto lab_0x1802956a4;
    } else {
        // 0x1802955d7
        if ((int32_t)a2 == 0 || g1291 == 0) {
            // 0x180295633
            v9 = 61;
            result = 0;
            if (v5 == 0) {
                goto lab_0x180295600;
            } else {
                if (g1291 != 0) {
                    goto lab_0x180295670;
                } else {
                    int64_t v10 = g1291 + 8; // 0x180295642
                    int64_t v11 = v10 & 0xffffffff; // 0x180295642
                    g1291 = (int64_t)_calloc_base(1, (int32_t)v10);
                    function_18028acc0(0, v11);
                    v9 = v11;
                    result = 0xffffffff;
                    if (g1291 == 0) {
                        goto lab_0x180295600;
                    } else {
                        // 0x180295664
                        v7 = v11;
                        v8 = g1292;
                        if (g1292 != 0) {
                            goto lab_0x1802956a4;
                        } else {
                            goto lab_0x180295670;
                        }
                    }
                }
            }
        } else {
            // 0x1802955e7
            _3f__3f__24_common_get_or_create_environment_nolock_40_D_40__40_YAPEAPEADXZ();
            int64_t v12 = g1292; // 0x18029560f
            int64_t v13 = v12; // 0x18029561d
            if (v12 == g1293) {
                // 0x18029561f
                v13 = function_1802958ac(v12);
                g1292 = v13;
            }
            // 0x18029569b
            v9 = 61;
            result = 0xffffffff;
            v7 = 61;
            v8 = v13;
            if (v13 == 0) {
                goto lab_0x180295600;
            } else {
                goto lab_0x1802956a4;
            }
        }
    }
  lab_0x1802956da:;
    // 0x1802956da
    int64_t v14; // 0x180295548
    int64_t v15 = v14 + 8; // 0x1802956da
    int64_t * v16 = (int64_t *)v15;
    int64_t v17 = *v16;
    int64_t v18 = v17; // 0x1802956e4
    int64_t * v19 = v16; // 0x1802956e4
    int64_t v20 = v15; // 0x1802956e4
    int64_t v21; // 0x180295548
    int64_t v22 = v21; // 0x1802956e4
    int64_t v23 = v15; // 0x1802956e4
    if (v17 == 0) {
        // break -> 0x1802956e6
        goto lab_0x1802956e6;
    }
    goto lab_0x1802956b2;
  lab_0x1802956a4:;
    int64_t v24 = v3 - a1; // 0x1802956a7
    int64_t * v27 = (int64_t *)v8;
    int64_t v28 = *v27;
    v22 = v7;
    v23 = v8;
    int64_t v25; // 0x180295548
    int64_t v26; // 0x180295548
    if (v28 != 0) {
        // 0x1802956b2
        v18 = v28;
        v19 = v27;
        v20 = v8;
        while (true) {
          lab_0x1802956b2:
            // 0x1802956b2
            v14 = v20;
            v21 = v18;
            if ((int32_t)function_18029bde0(a1, v21, v24 / 2) != 0) {
                goto lab_0x1802956da;
            } else {
                // 0x1802956c4
                switch (*(int16_t *)(*v19 + (v24 & -2))) {
                    case 61: {
                        // 0x180295712
                        v25 = v21;
                        v26 = (v14 - v8) / 8;
                        goto lab_0x1802956f0;
                    }
                    case 0: {
                        // 0x180295712
                        v25 = v21;
                        v26 = (v14 - v8) / 8;
                        goto lab_0x1802956f0;
                    }
                    default: {
                        goto lab_0x1802956da;
                    }
                }
            }
        }
    }
  lab_0x1802956e6:
    // 0x1802956e6
    v25 = v22;
    v26 = (v23 - v8) / -8;
    goto lab_0x1802956f0;
  lab_0x1802956f0:;
    // 0x1802956f0
    int64_t v29; // 0x180295548
    int64_t v30; // 0x180295548
    if (v26 < 0) {
        goto lab_0x180295756;
    } else {
        // 0x1802956f5
        if (*v27 == 0) {
            goto lab_0x180295756;
        } else {
            int64_t v31 = 8 * v26;
            int64_t * v32 = (int64_t *)(v31 + v8);
            function_18028acc0(*v32, v25);
            if (v5 == 0) {
                int64_t v33 = v26; // 0x18029572b
                if (*v32 != 0) {
                    int64_t v34 = v26; // 0x180295724
                    *v32 = *(int64_t *)(v8 + 8 + v31);
                    v34++;
                    int64_t v35 = 8 * v34; // 0x180295727
                    int64_t * v36 = (int64_t *)(v35 + v8); // 0x180295727
                    v33 = v34;
                    while (*v36 != 0) {
                        // 0x18029571b
                        *v36 = *(int64_t *)(v8 + 8 + v35);
                        v34++;
                        v35 = 8 * v34;
                        v36 = (int64_t *)(v35 + v8);
                        v33 = v34;
                    }
                }
                int64_t v37 = function_1802959b0(v8, v33, 8); // 0x180295739
                function_18028acc0(0, v33);
                v30 = v33;
                v29 = a1;
                if (v37 != 0) {
                    // 0x18029574d
                    g1292 = v37;
                    v30 = v33;
                    v29 = a1;
                }
            } else {
                // 0x180295709
                *v32 = a1;
                v30 = v25;
                v29 = 0;
            }
            goto lab_0x1802957ba;
        }
    }
  lab_0x180295756:
    // 0x180295756
    v9 = v25;
    result = 0;
    if (v5 != 0) {
        uint64_t v38 = -v26; // 0x180295763
        int64_t v39 = 2 - v26; // 0x180295766
        v9 = v39;
        result = 0xffffffff;
        if (v39 < v38 || v39 >= 0x1fffffffffffffff) {
            goto lab_0x180295600;
        } else {
            int64_t v40 = function_1802959b0(v8, v39, 8); // 0x18029578f
            function_18028acc0(0, v39);
            v9 = v39;
            result = 0xffffffff;
            if (v40 == 0) {
                goto lab_0x180295600;
            } else {
                int64_t v41 = v40 + 8 * v38;
                *(int64_t *)v41 = a1;
                *(int64_t *)(v41 + 8) = 0;
                g1292 = v40;
                v30 = v39;
                v29 = 0;
                goto lab_0x1802957ba;
            }
        }
    } else {
        goto lab_0x180295600;
    }
  lab_0x180295600:
    // 0x180295600
    function_18028acc0(a1, v9);
    // 0x18029587a
    return result;
  lab_0x180295670:
    // 0x180295670
    g1292 = (int64_t)_calloc_base(1, 8);
    function_18028acc0(0, 8);
    v9 = 8;
    result = 0xffffffff;
    v7 = 8;
    v8 = g1292;
    if (g1292 == 0) {
        goto lab_0x180295600;
    } else {
        goto lab_0x1802956a4;
    }
  lab_0x1802957ba:
    // 0x1802957ba
    if ((int32_t)a2 == 0) {
        // 0x180295857
        function_18028acc0(v29, v30);
        // 0x18029587a
        return 0;
    }
    int64_t v42 = -1;
    int64_t v43 = v42 + 1; // 0x1802957c9
    while (*(int16_t *)(2 * v43 + a1) != 0) {
        // 0x1802957c9
        v42 = v43;
        v43 = v42 + 1;
    }
    int64_t v44 = v42 + 3; // 0x1802957d8
    int64_t * lpName = _calloc_base((int32_t)v44, 2); // 0x1802957de
    int64_t v45; // 0x180295548
    int64_t result2; // 0x180295548
    if (lpName != NULL) {
        int64_t v46 = (int64_t)lpName; // 0x1802957de
        if ((int32_t)function_180293a00(v46, v44, a1) != 0) {
            // 0x180295897
            function_180271834(0, 0, 0, 0, 0);
            return __asm_int3(0, 0);
        }
        // 0x18029580a
        *(int16_t *)((v24 & -2) + v46) = 0;
        int64_t lpValue = v5 == 0 ? 0 : (v24 + 2 & -2) + v46; // 0x180295821
        if (SetEnvironmentVariableW((int16_t *)lpName, (int16_t *)lpValue)) {
            // 0x18029584f
            function_18028acc0(v46, lpValue);
            // 0x180295857
            function_18028acc0(v29, lpValue);
            // 0x18029587a
            return 0;
        }
        // 0x18029582e
        *(int32_t *)function_180279918(v46, lpValue, a1, v1) = 42;
        function_18028acc0(v46, lpValue);
        v45 = lpValue;
        result2 = 0xffffffff;
    } else {
        // 0x1802957eb
        function_18028acc0(0, 2);
        v45 = 2;
        result2 = 0;
    }
    // 0x180295843
    function_18028acc0(v29, v45);
    // 0x18029587a
    return result2;
}

// Address range: 0x1802958ac - 0x18029599c
int64_t function_1802958ac(int64_t a1) {
    int64_t result = 0; // 0x1802958cd
    if (a1 == 0) {
      lab_0x1802958d1:
        // 0x1802958d1
        return result;
    }
    int64_t * v1 = _calloc_base(1, 8); // 0x18029590b
    int64_t v2 = 1; // 0x180295916
    int64_t v3 = 8; // 0x180295916
    if (v1 != NULL) {
        // 0x180295920
        result = (int64_t)v1;
        int64_t v4 = a1; // 0x180295923
        int64_t v5 = -1;
        int64_t v6 = v5 + 1; // 0x18029592a
        while (*(int16_t *)(2 * v6 + 1) != 0) {
            // 0x18029592a
            v5 = v6;
            v6 = v5 + 1;
        }
        int64_t * v7 = _calloc_base((int32_t)v6 + 1, 2); // 0x18029593c
        int64_t * v8 = (int64_t *)(result - a1 + v4); // 0x180295943
        *v8 = (int64_t)v7;
        function_18028acc0(0, 2);
        int64_t v9 = *v8; // 0x18029594c
        v2 = 0;
        v3 = 2;
        while (v9 != 0) {
            int64_t v10 = v5 + 2; // 0x180295958
            if ((int32_t)function_180293a00(v9, v10, *(int64_t *)v4) != 0) {
                // 0x180295980
                function_180271834(0, 0, 0, 0, 0);
                __asm_int3(0, 0);
                v2 = 0;
                v3 = 0;
                goto lab_0x180295995;
            }
            // 0x180295965
            v4 += 8;
            int64_t v11 = *(int64_t *)v4; // 0x180295969
            if (v11 == 0) {
                // 0x180295971
                function_18028acc0(0, v10);
                return result;
            }
            v5 = -1;
            v6 = v5 + 1;
            while (*(int16_t *)(2 * v6 + v11) != 0) {
                // 0x18029592a
                v5 = v6;
                v6 = v5 + 1;
            }
            // 0x180295933
            v7 = _calloc_base((int32_t)v6 + 1, 2);
            v8 = (int64_t *)(result - a1 + v4);
            *v8 = (int64_t)v7;
            function_18028acc0(0, 2);
            v9 = *v8;
            v2 = 0;
            v3 = 2;
        }
    }
    goto lab_0x180295995;
  lab_0x180295995:
    // 0x180295995
    function_18027f79c(v2, v3);
    __asm_int3(v2, v3);
    return __asm_int3(v2, v3);
}

// Address range: 0x18029599c - 0x1802959a1
int64_t function_18029599c(int64_t a1, int32_t a2) {
    // 0x18029599c
    return function_180295548(a1, (int64_t)a2);
}

// Address range: 0x1802959b0 - 0x180295a45
int64_t function_1802959b0(int64_t a1, uint64_t a2, uint64_t a3) {
    // 0x1802959b0
    int64_t v1; // 0x1802959b0
    if (a2 != 0) {
        if (0xffffffffffffffe0 / a2 < a3) {
            // 0x1802959e0
            *(int32_t *)function_180279918(a1, 0xffffffffffffffe0 % a2, a3, v1) = 12;
            // 0x180295a30
            return 0;
        }
    }
    int64_t v2 = 0; // 0x1802959f2
    if (a1 != 0) {
        // 0x1802959f4
        v2 = _msize_base();
    }
    uint64_t v3 = v2;
    uint64_t v4 = a3 * a2; // 0x180295a00
    int64_t result = function_180293a90(a1, v4); // 0x180295a0a
    if (result != 0 && v4 > v3) {
        // 0x180295a1c
        function_18029db80(result + v3, 0, v4 - v3, v1);
    }
    // 0x180295a30
    return result;
}

// Address range: 0x180295a50 - 0x180295a55
int64_t function_180295a50(void) {
    // 0x180295a50
    int64_t v1; // 0x180295a50
    int64_t v2; // 0x180295a50
    int64_t v3; // 0x180295a50
    return function_1802959b0(v3, v2, v1);
}

// Address range: 0x180295a60 - 0x180295a68
int64_t function_180295a60(void) {
    // 0x180295a60
    return g1350;
}

// Address range: 0x180295aa0 - 0x180295aab
int64_t function_180295aa0(void) {
    // 0x180295aa0
    g1350 = 0;
    int64_t v1; // 0x180295aa0
    return v1 & -256 | 1;
}

// Address range: 0x180295ac0 - 0x180295ac8
int64_t function_180295ac0(void) {
    // 0x180295ac0
    return g1350;
}

// Address range: 0x180295ac8 - 0x180295b46
int64_t function_180295ac8(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    if (a1 == a2) {
        // 0x180295b36
        int64_t v3; // 0x180295ac8
        return v3 & -256 | 1;
    }
    int64_t v4 = 0; // 0x180295aeb
    int64_t v5; // 0x180295ac8
    int64_t v6; // 0x180295ac8
    if (*(int64_t *)v2 != 0) {
        // 0x180295aed
        v4 = function_18029d4a0(v2, v1, v6, v5);
        if ((char)v4 == 0) {
            // break -> 0x180295aff
            return 0;
        }
    }
    int64_t v7 = v2 + 16; // 0x180295af6
    int64_t v8 = v7; // 0x180295afd
    while (v7 != v1) {
        int64_t v9 = v7;
        v4 = 0;
        if (*(int64_t *)v9 != 0) {
            // 0x180295aed
            v4 = function_18029d4a0(v2, v1, v6, v5);
            v8 = v9;
            if ((char)v4 == 0) {
                // break -> 0x180295aff
                return 0;
            }
        }
        // 0x180295af6
        v7 = v9 + 16;
        v8 = v7;
    }
    // 0x180295aff
    if (v8 == v1) {
        // 0x180295b36
        return v4 & -256 | 1;
    }
    int64_t v10 = v4; // 0x180295b07
    if (v8 != v2) {
        int64_t v11 = v8 - 8;
        int64_t v12 = v11 - 8; // 0x180295b0d
        if (*(int64_t *)v12 != 0) {
            // 0x180295b14
            if (*(int64_t *)v11 != 0) {
                // 0x180295b1c
                function_18029d4a0(0, v1, v6, v5);
            }
        }
        int64_t v13 = v11 - 16; // 0x180295b2e
        v10 = v12;
        while (v12 != v2) {
            // 0x180295b0d
            v11 = v13;
            v12 = v11 - 8;
            if (*(int64_t *)v12 != 0) {
                // 0x180295b14
                if (*(int64_t *)v11 != 0) {
                    // 0x180295b1c
                    function_18029d4a0(0, v1, v6, v5);
                }
            }
            // 0x180295b23
            v13 = v11 - 16;
            v10 = v12;
        }
    }
    // 0x180295b36
    return v10 & -256;
}

// Address range: 0x180295b48 - 0x180295b83
int64_t function_180295b48(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (a1 == a2) {
        // 0x180295b76
        int64_t v2; // 0x180295b48
        return v2 & -256 | 1;
    }
    int64_t v3 = v1; // 0x180295b5b
    int64_t v4 = 0; // 0x180295b64
    int64_t v5; // 0x180295b48
    int64_t v6; // 0x180295b48
    if (*(int64_t *)(v3 - 8) != 0) {
        // 0x180295b66
        v4 = function_18029d4a0(0, v1, v6, v5);
    }
    // 0x180295b6d
    v3 -= 16;
    while (v3 != (int64_t)a1) {
        // 0x180295b5d
        v4 = 0;
        if (*(int64_t *)(v3 - 8) != 0) {
            // 0x180295b66
            v4 = function_18029d4a0(0, v1, v6, v5);
        }
        // 0x180295b6d
        v3 -= 16;
    }
    // 0x180295b76
    return v4 & -256 | 1;
}

// Address range: 0x180295b90 - 0x180295bb0
int64_t function_180295b90(void) {
    int64_t v1 = (int64_t)g731; // 0x180295b90
    int64_t v2 = g1351 ^ v1; // 0x180295ba0
    uint64_t v3 = v1 & 63; // 0x180295ba3
    int64_t v4 = v2; // 0x180295ba6
    if (v3 != 0) {
        v4 = v2 << 64 - v3 | v2 >> v3;
    }
    return v1 & -256 | (int64_t)(v4 != 0);
}

// Address range: 0x180295bb0 - 0x180295bb8
int64_t function_180295bb0(int64_t a1) {
    // 0x180295bb0
    g1351 = a1;
    int64_t result; // 0x180295bb0
    return result;
}

// Address range: 0x180295bc0 - 0x180295bef
int64_t function_180295bc0(int64_t a1) {
    int64_t v1 = (int64_t)g731; // 0x180295bc0
    uint64_t v2 = v1 & 63; // 0x180295bd3
    int64_t v3 = g1351 ^ v1; // 0x180295bd6
    int64_t v4 = v3; // 0x180295bd9
    if (v2 != 0) {
        v4 = v3 << 64 - v2 | v3 >> v2;
    }
    if (v4 != 0) {
        // 0x180295be4
        int64_t v5; // 0x180295bc0
        return function_18029d4a0(a1, v4, a1, v5);
    }
    // 0x180295be1
    return 0;
}

// Address range: 0x180295e1c - 0x180295e53
int64_t function_180295e1c(int64_t a1) {
    // 0x180295e1c
    int64_t result; // 0x180295e1c
    if (a1 == 0) {
        // 0x180295e52
        return result;
    }
    // 0x180295e21
    if (a1 == (int64_t)&g565) {
        // 0x180295e52
        return (int64_t)&g565;
    }
    uint32_t v1 = *(int32_t *)(a1 + 348); // 0x180295e35
    result = v1;
    if (v1 == 0) {
        // 0x180295e40
        __acrt_locale_free_time(a1);
        int64_t v2; // 0x180295e1c
        result = function_18028acc0(a1, v2);
    }
    // 0x180295e52
    return result;
}

// Address range: 0x180295f24 - 0x180295f94
int64_t function_180295f24(void) {
    // 0x180295f24
    int64_t v1; // 0x180295f24
    int64_t v2 = __vcrt_getptd2(v1); // 0x180295f2e
    int64_t v3 = v2 + 144; // 0x180295f33
    if ((g769 & *(int32_t *)(v2 + 936)) != 0) {
        int64_t result = *(int64_t *)v3; // 0x180295f4a
        if (result != 0) {
            // 0x180295f7e
            return result;
        }
    }
    // 0x180295f52
    __acrt_lock(4);
    int64_t result2 = function_180295f94(v3, g1299); // 0x180295f67
    __acrt_lock2(4, g1299);
    if (result2 != 0) {
        // 0x180295f7e
        return result2;
    }
    // 0x180295f8c
    function_18027f79c(4, g1299);
    __asm_int3(4, g1299);
    return __asm_int3(4, g1299);
}

// Address range: 0x180295f94 - 0x180295ff9
int64_t function_180295f94(int64_t a1, int64_t result) {
    // 0x180295f94
    if (a1 == 0 || result == 0) {
        // 0x180295fee
        return 0;
    }
    // 0x180295fab
    if (a1 == result) {
        // 0x180295fee
        return result;
    }
    // 0x180295fc8
    *(int64_t *)a1 = result;
    __acrt_add_locale_ref(result);
    __acrt_release_locale_ref(a1);
    if (a1 != (int64_t)&g754 && *(int32_t *)(a1 + 16) == 0) {
        // 0x180295fe2
        __acrt_free_locale(a1);
    }
    // 0x180295fee
    return result;
}

// Address range: 0x180296108 - 0x180296623
int64_t function_180296108(int64_t a1) {
    int64_t v1 = a1; // bp-56, 0x18029612a
    int64_t * v2 = (int64_t *)(a1 + 320); // 0x180296135
    int64_t v3; // 0x180296108
    int64_t v4; // 0x180296108
    int64_t v5; // 0x180296108
    int64_t v6; // 0x180296108
    if (*v2 != 0) {
        goto lab_0x18029615d;
    } else {
        // 0x18029613e
        if (*(int64_t *)(a1 + 328) != 0) {
            goto lab_0x18029615d;
        } else {
            // 0x180296147
            v5 = a1 + 248;
            v6 = (int64_t)&g741;
            v3 = 0;
            v4 = 0;
            goto lab_0x1802965b7;
        }
    }
  lab_0x1802964e1:;
    // 0x1802964e1
    int64_t v7; // 0x180296108
    char v8 = *(char *)v7; // 0x1802964e1
    char v9 = v8; // 0x1802964e5
    int64_t v10 = v7; // 0x1802964e5
    int64_t v11 = v7; // 0x1802964e5
    int64_t v12; // 0x1802961c2
    int64_t v13 = v12; // 0x1802964e5
    if (v8 == 0) {
        // break -> 0x18029656f
        goto lab_0x18029656f;
    }
    goto lab_0x1802964ce;
  lab_0x18029615d:;
    int64_t * v20 = _calloc_base(1, 152); // 0x18029616b
    function_18028acc0(0, 152);
    if (v20 == NULL) {
        // 0x180296605
        return 1;
    }
    int64_t v21 = (int64_t)v20; // 0x18029616b
    int64_t * v22 = _calloc_base(1, 4); // 0x180296191
    function_18028acc0(0, 4);
    if (v22 == NULL) {
        // 0x1802961a8
        function_18028acc0(v21, 4);
        // 0x180296605
        return 1;
    }
    int64_t v23 = (int64_t)v22; // 0x180296191
    if (*v2 == 0) {
        // 0x18029650a
        __asm_movups(*(int128_t *)v20, __asm_movups_16(*(int128_t *)&g741));
        int128_t v24 = __asm_movups_16(*(int128_t *)((int64_t)&g741 + 16)); // 0x18029651c
        __asm_movups(*(int128_t *)(v21 + 16), v24);
        int128_t v25 = __asm_movups_16(*(int128_t *)((int64_t)&g741 + 32)); // 0x180296524
        __asm_movups(*(int128_t *)(v21 + 32), v25);
        int128_t v26 = __asm_movups_16(*(int128_t *)((int64_t)&g741 + 48)); // 0x18029652c
        __asm_movups(*(int128_t *)(v21 + 48), v26);
        int128_t v27 = __asm_movups_16(*(int128_t *)((int64_t)&g741 + 64)); // 0x180296534
        __asm_movups(*(int128_t *)(v21 + 64), v27);
        __asm_movups(*(int128_t *)(v21 + 80), __asm_movups_16(g744));
        int128_t v28 = __asm_movups_16(*(int128_t *)((int64_t)&g741 + 96)); // 0x180296544
        __asm_movups(*(int128_t *)(v21 + 96), v28);
        int128_t v29 = __asm_movups_16(*(int128_t *)((int64_t)&g741 + 112)); // 0x18029654c
        __asm_movups(*(int128_t *)(v21 + 112), v29);
        int128_t v30 = __asm_movups_16(*(int128_t *)((int64_t)&g741 + 128)); // 0x180296555
        __asm_movups(*(int128_t *)(v21 + 128), v30);
        int64_t v31 = *(int64_t *)((int64_t)&g741 + 144); // 0x18029655d
        *(int64_t *)(v21 + 144) = v31;
        v11 = 128;
        v13 = 0;
    } else {
        int64_t * v32 = _calloc_base(1, 4); // 0x1802961c2
        function_18028acc0(0, 4);
        if (v32 == NULL) {
            // 0x1802961d6
            function_18028acc0(v21, 4);
            // 0x1802961a8
            function_18028acc0(v23, 4);
            // 0x180296605
            return 1;
        }
        // 0x1802961e3
        v12 = (int64_t)v32;
        int64_t v33 = *v2; // 0x1802961e3
        int64_t v34 = function_180292ddc(&v1, 1, v33, 21, v21 + 24); // 0x180296203
        int64_t v35 = function_180292ddc(&v1, 1, v33, 20, v21 + 32); // 0x180296223
        int64_t v36 = function_180292ddc(&v1, 1, v33, 22, v21 + 40); // 0x180296243
        int64_t v37 = function_180292ddc(&v1, 1, v33, 23, v21 + 48); // 0x180296263
        int64_t v38 = v21 + 56; // 0x18029626e
        int64_t v39 = function_180292ddc(&v1, 1, v33, 24, v38); // 0x180296284
        int64_t v40 = function_180292ddc(&v1, 1, v33, 80, v21 + 64); // 0x1802962a5
        int64_t v41 = function_180292ddc(&v1, 1, v33, 81, v21 + 72); // 0x1802962c6
        int64_t v42 = function_180292ddc(&v1, 0, v33, 26, v21 + 80); // 0x1802962e5
        int64_t v43 = function_180292ddc(&v1, 0, v33, 25, v21 + 81); // 0x180296304
        int64_t v44 = function_180292ddc(&v1, 0, v33, 84, v21 + 82); // 0x180296323
        int64_t v45 = function_180292ddc(&v1, 0, v33, 85, v21 + 83); // 0x180296342
        int64_t v46 = function_180292ddc(&v1, 0, v33, 86, v21 + 84); // 0x180296361
        int64_t v47 = function_180292ddc(&v1, 0, v33, 87, v21 + 85); // 0x180296380
        int64_t v48 = function_180292ddc(&v1, 0, v33, 82, v21 + 86); // 0x18029639f
        int64_t v49 = function_180292ddc(&v1, 0, v33, 83, v21 + 87); // 0x1802963be
        int64_t v50 = function_180292ddc(&v1, 2, v33, 21, v21 + 104); // 0x1802963df
        int64_t v51 = function_180292ddc(&v1, 2, v33, 20, v21 + 112); // 0x180296400
        int64_t v52 = function_180292ddc(&v1, 2, v33, 22, v21 + 120); // 0x180296421
        int64_t v53 = function_180292ddc(&v1, 2, v33, 23, v21 + 128); // 0x180296445
        int64_t v54 = function_180292ddc(&v1, 2, v33, 80, v21 + 136); // 0x180296469
        int64_t v55 = function_180292ddc(&v1, 2, v33, 81, v21 + 144); // 0x18029648d
        if ((int32_t)(v35 | v34 | v36 | v37 | v39 | v40 | v41 | v42 | v43 | v44 | v45 | v46 | v47 | v48 | v49 | v50 | v51 | v52 | v53 || v54 || v55) != 0) {
            // 0x180296496
            __acrt_locale_free_monetary(v21);
            function_18028acc0(v21, 2);
            function_18028acc0(v23, 2);
            function_18028acc0(v12, 2);
            // 0x180296605
            return 1;
        }
        int64_t v56 = *(int64_t *)v38; // 0x1802964c0
        char v57 = *(char *)v56; // 0x1802964c4
        v9 = v57;
        v10 = v56;
        v11 = v56;
        v13 = v12;
        if (v57 != 0) {
            while (true) {
              lab_0x1802964ce:;
                int64_t v14 = v10;
                char v15 = v9;
                unsigned char v16 = v15 - 48; // 0x1802964d1
                if (v16 < 10) {
                    // 0x1802964d6
                    *(char *)v14 = v16;
                    // 0x1802964d8
                    v7 = v14 + 1;
                    goto lab_0x1802964e1;
                } else {
                    int64_t v17 = v14; // 0x1802964ee
                    if (v15 != 59) {
                        // 0x1802964d8
                        v7 = v14 + 1;
                        goto lab_0x1802964e1;
                    } else {
                        int64_t v18 = v17 + 1; // 0x1802964f3
                        char v19 = *(char *)v18; // 0x1802964f3
                        *(char *)v17 = v19;
                        v7 = v14;
                        v17 = v18;
                        while (v19 != 0) {
                            // 0x1802964f3
                            v18 = v17 + 1;
                            v19 = *(char *)v18;
                            *(char *)v17 = v19;
                            v7 = v14;
                            v17 = v18;
                        }
                        goto lab_0x1802964e1;
                    }
                }
            }
        }
    }
  lab_0x18029656f:;
    int64_t v58 = a1 + 248; // 0x18029656f
    int64_t * v59 = (int64_t *)v58; // 0x180296576
    *v20 = *(int64_t *)*v59;
    *(int64_t *)(v21 + 8) = *(int64_t *)(*v59 + 8);
    *(int64_t *)(v21 + 16) = *(int64_t *)(*v59 + 16);
    *(int64_t *)(v21 + 88) = *(int64_t *)(*v59 + 88);
    *(int64_t *)(v21 + 96) = *(int64_t *)(*v59 + 96);
    *(int32_t *)v22 = 1;
    int64_t v60 = v11; // 0x1802965b2
    v5 = v58;
    v6 = v21;
    v3 = v23;
    v4 = 0;
    if (v13 != 0) {
        // 0x1802965b4
        *(int32_t *)v13 = 1;
        v60 = v11;
        v5 = v58;
        v6 = v21;
        v3 = v23;
        v4 = v13;
    }
    goto lab_0x1802965b7;
  lab_0x1802965b7:;
    int64_t * v61 = (int64_t *)(a1 + 240); // 0x1802965b7
    int64_t v62 = *v61; // 0x1802965b7
    if (v62 != 0) {
        int32_t * v63 = (int32_t *)v62; // 0x1802965c3
        *v63 = *v63 - 1;
    }
    int64_t * v64 = (int64_t *)(a1 + 224); // 0x1802965c6
    int64_t v65 = *v64; // 0x1802965c6
    if (v65 != 0) {
        int32_t * v66 = (int32_t *)v65; // 0x1802965d5
        int32_t v67 = *v66; // 0x1802965d5
        *v66 = v67 - 1;
        if (v67 == 1) {
            // 0x1802965de
            function_18028acc0(*(int64_t *)v5, v60);
            function_18028acc0(*v64, v60);
        }
    }
    // 0x1802965f2
    *v61 = v4;
    *v64 = v3;
    *(int64_t *)v5 = v6;
    // 0x180296605
    return 0;
}

// Address range: 0x180296690 - 0x180296977
int64_t function_180296690(int64_t a1) {
    int64_t v1 = a1; // bp-56, 0x1802966ae
    int64_t * v2 = (int64_t *)(a1 + 328); // 0x1802966b9
    int64_t v3; // 0x180296690
    int64_t v4; // 0x180296690
    int64_t v5; // 0x180296690
    int64_t v6; // 0x180296690
    if (*v2 != 0) {
        goto lab_0x1802966e1;
    } else {
        // 0x1802966c2
        if (*(int64_t *)(a1 + 320) != 0) {
            goto lab_0x1802966e1;
        } else {
            // 0x1802966cb
            v6 = (int64_t)&g741;
            v3 = 0;
            v4 = a1 + 248;
            v5 = 0;
            goto lab_0x180296909;
        }
    }
  lab_0x1802966e1:;
    int64_t * v7 = _calloc_base(1, 152); // 0x1802966ef
    if (v7 == NULL) {
        // 0x180296959
        return 1;
    }
    int64_t v8 = (int64_t)v7; // 0x1802966ef
    int64_t v9 = a1 + 248; // 0x180296709
    int64_t v10 = *(int64_t *)v9; // 0x180296710
    __asm_movups(*(int128_t *)v7, __asm_movups_16(*(int128_t *)v10));
    int128_t v11 = __asm_movups_16(*(int128_t *)(v10 + 16)); // 0x18029671f
    int64_t v12 = v8 + 16; // 0x180296723
    __asm_movups(*(int128_t *)v12, v11);
    __asm_movups(*(int128_t *)(v8 + 32), __asm_movups_16(*(int128_t *)(v10 + 32)));
    __asm_movups(*(int128_t *)(v8 + 48), __asm_movups_16(*(int128_t *)(v10 + 48)));
    __asm_movups(*(int128_t *)(v8 + 64), __asm_movups_16(*(int128_t *)(v10 + 64)));
    __asm_movups(*(int128_t *)(v8 + 80), __asm_movups_16(*(int128_t *)(v10 + 80)));
    int128_t v13 = __asm_movups_16(*(int128_t *)(v10 + 96)); // 0x180296747
    int64_t v14 = v8 + 96; // 0x18029674b
    __asm_movups(*(int128_t *)v14, v13);
    __asm_movups(*(int128_t *)(v8 + 112), __asm_movups_16(*(int128_t *)(v10 + 112)));
    __asm_movups(*(int128_t *)(v8 + 128), __asm_movups_16(*(int128_t *)(v10 + 128)));
    *(int64_t *)(v8 + 144) = *(int64_t *)(v10 + 144);
    int64_t * v15 = _malloc_base(4); // 0x18029676a
    function_18028acc0(0, 128);
    int64_t v16 = 128; // 0x18029677c
    int64_t v17 = 1; // 0x18029677c
    int64_t v18 = v8; // 0x18029677c
    int64_t v19; // 0x180296690
    if (v15 != NULL) {
        int64_t v20 = (int64_t)v15; // 0x18029676a
        *(int32_t *)v15 = 0;
        if (*v2 == 0) {
            // 0x1802968cd
            *v7 = (int64_t)g741;
            *(int64_t *)(v8 + 8) = (int64_t)g742;
            *(int64_t *)v12 = g743;
            *(int64_t *)(v8 + 88) = (int64_t)g745;
            *(int64_t *)v14 = g746;
            *(int32_t *)v15 = 1;
            v19 = 128;
            v6 = v8;
            v3 = 0;
            v4 = v9;
            v5 = v20;
            goto lab_0x180296909;
        } else {
            int64_t * v21 = _malloc_base(4); // 0x18029679e
            function_18028acc0(0, 128);
            if (v21 != NULL) {
                int64_t v22 = (int64_t)v21; // 0x18029679e
                *(int32_t *)v21 = 0;
                int64_t v23 = *v2; // 0x1802967c8
                int64_t v24 = function_180292ddc(&v1, 1, v23, 14, v8); // 0x1802967e0
                int64_t v25 = function_180292ddc(&v1, 1, v23, 15, v8 + 8); // 0x180296801
                int64_t v26 = function_180292ddc(&v1, 1, v23, 16, v12); // 0x180296822
                int64_t v27 = function_180292ddc(&v1, 2, v23, 14, v8 + 88); // 0x180296844
                int64_t v28 = function_180292ddc(&v1, 2, v23, 15, v14); // 0x180296866
                if ((int32_t)(v25 | v24 | v26 || v27 || v28) == 0) {
                    int64_t v29 = *(int64_t *)v12; // 0x180296893
                    char * v30 = (char *)v29; // 0x1802968a6
                    char v31 = *v30; // 0x1802968a6
                    char v32 = v31; // 0x1802968aa
                    char * v33 = v30; // 0x1802968aa
                    int64_t v34 = v29; // 0x1802968aa
                    int64_t v35 = v29; // 0x1802968aa
                    if (v31 != 0) {
                        while (true) {
                            int64_t v36 = v34;
                            char * v37 = v33;
                            char v38 = v32;
                            unsigned char v39 = v38 - 48;
                            while (v39 >= 10) {
                                int64_t v40 = v36; // 0x1802968b7
                                if (v38 != 59) {
                                    goto lab_0x1802968a3;
                                }
                                int64_t v41 = v40;
                                v40 = v41 + 1;
                                char v42 = *(char *)v40; // 0x1802968bc
                                *(char *)v41 = v42;
                                while (v42 != 0) {
                                    // 0x1802968bc
                                    v41 = v40;
                                    v40 = v41 + 1;
                                    v42 = *(char *)v40;
                                    *(char *)v41 = v42;
                                }
                                char v43 = *v37; // 0x1802968a6
                                v35 = v36;
                                if (v43 == 0) {
                                    // break (via goto) -> 0x1802968ac
                                    goto lab_0x1802968ac;
                                }
                                v38 = v43;
                                v39 = v38 - 48;
                            }
                            // 0x1802968a1
                            *v37 = v39;
                          lab_0x1802968a3:;
                            int64_t v44 = v36 + 1; // 0x1802968a3
                            char * v45 = (char *)v44; // 0x1802968a6
                            char v46 = *v45; // 0x1802968a6
                            v32 = v46;
                            v33 = v45;
                            v34 = v44;
                            v35 = v44;
                            if (v46 == 0) {
                                // break -> 0x1802968ac
                                return 0;
                            }
                        }
                    }
                  lab_0x1802968ac:
                    // 0x1802968ac
                    *(int32_t *)v15 = 1;
                    *(int32_t *)v21 = 1;
                    v19 = v35;
                    v6 = v8;
                    v3 = v22;
                    v4 = v9;
                    v5 = v20;
                    goto lab_0x180296909;
                } else {
                    // 0x18029686f
                    __acrt_locale_free_numeric(v8);
                    function_18028acc0(v8, 2);
                    function_18028acc0(v22, 2);
                    v16 = 2;
                    v17 = 0xffffffff;
                    v18 = v20;
                    goto lab_0x180296781;
                }
            } else {
                // 0x1802967b2
                function_18028acc0(v8, 128);
                v16 = 128;
                v17 = 1;
                v18 = v20;
                goto lab_0x180296781;
            }
        }
    } else {
        goto lab_0x180296781;
    }
  lab_0x180296781:
    // 0x180296781
    function_18028acc0(v18, v16);
    // 0x180296959
    return v17 & 0xffffffff;
  lab_0x180296909:;
    int64_t * v47 = (int64_t *)(a1 + 232); // 0x180296909
    int64_t v48 = *v47; // 0x180296909
    if (v48 != 0) {
        int32_t * v49 = (int32_t *)v48; // 0x180296915
        *v49 = *v49 - 1;
    }
    int64_t * v50 = (int64_t *)(a1 + 224); // 0x180296918
    int64_t v51 = *v50; // 0x180296918
    if (v51 != 0) {
        int32_t * v52 = (int32_t *)v51; // 0x180296927
        int32_t v53 = *v52; // 0x180296927
        *v52 = v53 - 1;
        if (v53 == 1) {
            // 0x180296930
            function_18028acc0(*v50, v19);
            function_18028acc0(*(int64_t *)v4, v19);
        }
    }
    // 0x180296945
    *v47 = v3;
    *v50 = v5;
    *(int64_t *)v4 = v6;
    // 0x180296959
    return 0;
}

// Address range: 0x180296978 - 0x1802969aa
int64_t function_180296978(int64_t a1, int64_t a2) {
    int64_t v1 = 8 * a2; // 0x180296982
    int64_t result; // 0x180296978
    if (v1 == 0) {
        // 0x18029699f
        return result;
    }
    int64_t v2 = a1 + 8; // 0x180296996
    result = function_18028acc0(*(int64_t *)a1, a2);
    while (v2 != v1 + a1) {
        int64_t v3 = v2;
        v2 = v3 + 8;
        result = function_18028acc0(*(int64_t *)v3, a2);
    }
    // 0x18029699f
    return result;
}

// Address range: 0x1802969ac - 0x180296cea
int64_t function_1802969ac(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 336); // 0x1802969cb
    int64_t v2 = a2; // bp-56, 0x1802969d7
    int64_t v3 = 0; // 0x1802969f3
    int64_t v4 = 7; // 0x1802969f3
    int64_t v5 = 49; // 0x1802969f3
    int64_t v6 = v5 + 0xffffffd0; // 0x1802969f7
    int32_t v7 = v6; // 0x180296a02
    int32_t v8 = 0x24924925 * (v6 & 0xffffffff) / 0x100000000; // 0x180296a07
    int64_t v9 = 8 * (int64_t)(-7 * ((v7 - v8) / 2 + v8) / 4 + v7) + a1; // 0x180296a1d
    int64_t v10 = function_180292ddc(&v2, 1, v1, v5, v9); // 0x180296a2a
    int64_t v11 = v5 + 0xfffffff9 & 0xffffffff; // 0x180296a31
    int64_t v12 = function_180292ddc(&v2, 1, v1, v11, v9 + 56); // 0x180296a4a
    int64_t v13 = function_180292ddc(&v2, 2, v1, v5, v9 + 352); // 0x180296a6c
    int64_t v14 = function_180292ddc(&v2, 2, v1, v11, v9 + 408); // 0x180296a8f
    v3 = (v10 | v3 | v12 | v13 | v14) & 0xffffffff;
    v4--;
    v5 = v5 + 1 & 0xffffffff;
    while (v4 != 0) {
        // 0x1802969f7
        v6 = v5 + 0xffffffd0;
        v7 = v6;
        v8 = 0x24924925 * (v6 & 0xffffffff) / 0x100000000;
        v9 = 8 * (int64_t)(-7 * ((v7 - v8) / 2 + v8) / 4 + v7) + a1;
        v10 = function_180292ddc(&v2, 1, v1, v5, v9);
        v11 = v5 + 0xfffffff9 & 0xffffffff;
        v12 = function_180292ddc(&v2, 1, v1, v11, v9 + 56);
        v13 = function_180292ddc(&v2, 2, v1, v5, v9 + 352);
        v14 = function_180292ddc(&v2, 2, v1, v11, v9 + 408);
        v3 = (v10 | v3 | v12 | v13 | v14) & 0xffffffff;
        v4--;
        v5 = v5 + 1 & 0xffffffff;
    }
    int64_t v15 = v3; // 0x180296aab
    int64_t v16 = a1 + 208; // 0x180296aab
    int64_t v17 = 12; // 0x180296aab
    int64_t v18 = 56; // 0x180296aab
    int64_t v19 = v18 & 0xffffffff;
    int64_t v20 = v18 + 12 & 0xffffffff; // 0x180296aba
    int64_t v21 = function_180292ddc(&v2, 1, v1, v20, v16 - 96); // 0x180296acc
    int64_t v22 = function_180292ddc(&v2, 1, v1, v19, v16); // 0x180296ae7
    int64_t v23 = function_180292ddc(&v2, 2, v1, v20, v16 + 256); // 0x180296b0c
    int64_t v24 = function_180292ddc(&v2, 2, v1, v19, v16 + 352); // 0x180296b2b
    v15 = (v21 | v15 | v22 | v23 | v24) & 0xffffffff;
    v17--;
    v16 += 8;
    v18 = v19 + 1;
    while (v17 != 0) {
        // 0x180296ab3
        v19 = v18 & 0xffffffff;
        v20 = v18 + 12 & 0xffffffff;
        v21 = function_180292ddc(&v2, 1, v1, v20, v16 - 96);
        v22 = function_180292ddc(&v2, 1, v1, v19, v16);
        v23 = function_180292ddc(&v2, 2, v1, v20, v16 + 256);
        v24 = function_180292ddc(&v2, 2, v1, v19, v16 + 352);
        v15 = (v21 | v15 | v22 | v23 | v24) & 0xffffffff;
        v17--;
        v16 += 8;
        v18 = v19 + 1;
    }
    int64_t v25 = function_180292ddc(&v2, 1, v1, 40, a1 + 304); // 0x180296b60
    int64_t v26 = function_180292ddc(&v2, 1, v1, 41, a1 + 312); // 0x180296b88
    int64_t v27 = function_180292ddc(&v2, 2, v1, 40, a1 + 656); // 0x180296bab
    int64_t v28 = function_180292ddc(&v2, 2, v1, 41, a1 + 664); // 0x180296bcb
    int64_t v29 = function_180292ddc(&v2, 1, v1, 31, a1 + 320); // 0x180296bf0
    int64_t v30 = function_180292ddc(&v2, 1, v1, 32, a1 + 328); // 0x180296c14
    int64_t v31 = function_180292ddc(&v2, 1, v1, 0x1003, a1 + 336); // 0x180296c3a
    int64_t v32 = function_180292ddc(&v2, 0, v1, 0x1009, a1 + 344); // 0x180296c5b
    int64_t v33 = function_180292ddc(&v2, 2, v1, 31, a1 + 672); // 0x180296c80
    int64_t v34 = function_180292ddc(&v2, 2, v1, 32, a1 + 680); // 0x180296ca1
    int64_t v35 = function_180292ddc(&v2, 2, v1, 0x1003, a1 + 688); // 0x180296cc2
    int64_t v36 = v25 | v15 | v26 | v27 | v28 | v29 | v30 | v31 | v32 | v33 | v34 | v35;
    return v36 & 0xffffff00 | (int64_t)((int32_t)v36 == 0);
}

// Address range: 0x180296df4 - 0x180296e90
int64_t function_180296df4(int64_t a1) {
    int64_t v1 = (int64_t)&g565; // 0x180296e0f
    int64_t v2; // 0x180296df4
    int64_t v3; // 0x180296df4
    if (*(int64_t *)(a1 + 336) != 0) {
        int64_t * v4 = _calloc_base(1, 704); // 0x180296e24
        v3 = 704;
        v2 = 0;
        if (v4 == NULL) {
            goto lab_0x180296e4b;
        } else {
            // 0x180296e31
            v1 = (int64_t)v4;
            if ((char)function_1802969ac(v1, a1) != 0) {
                // 0x180296e5a
                *(int32_t *)(v1 + 348) = 1;
                function_18028acc0(0, a1);
                goto lab_0x180296e6b;
            } else {
                // 0x180296e40
                __acrt_locale_free_time(v1);
                v3 = a1;
                v2 = v1;
                goto lab_0x180296e4b;
            }
        }
    } else {
        goto lab_0x180296e6b;
    }
  lab_0x180296e6b:;
    int64_t * v5 = (int64_t *)(a1 + 288); // 0x180296e6b
    __acrt_locale_release_lc_time_reference(*v5);
    *v5 = v1;
    // 0x180296e80
    return 0;
  lab_0x180296e4b:
    // 0x180296e4b
    function_18028acc0(v2, v3);
    // 0x180296e80
    return 1;
}

// Address range: 0x180296e90 - 0x180296f1e
int64_t function_180296e90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1; // 0x180296e9a
    int64_t v2 = a2; // 0x180296e9a
    if (a1 != 0 && a2 != 0) {
        // 0x180296ea1
        if (a3 != 0) {
            int64_t v3 = a2;
            int64_t v4 = a1;
            while (*(int16_t *)v4 != 0) {
                int64_t v5 = v4 + 2; // 0x180296ecb
                int64_t v6 = v3 - 1; // 0x180296ecf
                if (v6 == 0) {
                    // 0x180296ed5
                    *(int16_t *)a1 = 0;
                    v1 = v5;
                    v2 = v6;
                    goto lab_0x180296eab;
                }
                v3 = v6;
                v4 = v5;
            }
            int64_t v7 = a3 - v4; // 0x180296edd
            int64_t v8 = v4; // 0x180296edd
            int64_t v9 = v3; // 0x180296edd
            int16_t v10 = *(int16_t *)(v8 + v7); // 0x180296ee0
            *(int16_t *)v8 = v10;
            while (v10 != 0) {
                int64_t v11 = v8 + 2; // 0x180296ee8
                int64_t v12 = v9 - 1; // 0x180296ef1
                v8 = v11;
                v9 = v12;
                if (v12 == 0) {
                    // 0x180296ef7
                    *(int16_t *)a1 = 0;
                    *(int32_t *)function_180279918(v11, v12, v7, a1) = 34;
                    function_180271814(v11, v12, v7, a1);
                    return 34;
                }
                v10 = *(int16_t *)(v8 + v7);
                *(int16_t *)v8 = v10;
            }
            // 0x180296f17
            return 0;
        }
        // 0x180296ea6
        *(int16_t *)a1 = 0;
        v1 = a1;
        v2 = a2;
    }
    goto lab_0x180296eab;
  lab_0x180296eab:
    // 0x180296eab
    *(int32_t *)function_180279918(v1, v2, a3, a1) = 22;
    function_180271814(v1, v2, a3, a1);
    return 22;
}

// Address range: 0x180296f20 - 0x180297054
int64_t function_180296f20(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2; // 0x180296f20
    int64_t v3; // 0x180296f20
    int64_t v4; // 0x180296f20
    if (a4 != 0) {
        // 0x180296f50
        v3 = a1;
        v4 = a2;
        v2 = a4;
        if (a1 == 0 || a2 == 0) {
            goto lab_0x180296f6b;
        } else {
            if (a3 != NULL) {
                goto lab_0x180296f90;
            } else {
                // 0x180296f64
                *(int16_t *)a1 = 0;
                v3 = a1;
                v4 = a2;
                v2 = 0;
                goto lab_0x180296f6b;
            }
        }
    } else {
        if (a1 != 0) {
            // 0x180296f55
            v3 = a1;
            v4 = 0;
            v2 = a4;
            if (a2 == 0) {
                goto lab_0x180296f6b;
            } else {
                goto lab_0x180296f90;
            }
        } else {
            // 0x180296f3d
            v3 = a1;
            v4 = a2;
            v2 = a4;
            if (a2 == 0) {
                // 0x180296f42
                return a4 & 0xffffffff;
            }
            goto lab_0x180296f6b;
        }
    }
  lab_0x180297004_2:;
    // 0x180297004
    int64_t v5; // 0x180296feb
    int64_t v6 = v5; // 0x180297007
    int64_t v7; // 0x180296ff8
    int64_t v8 = v7; // 0x180297007
    int64_t v9; // 0x180296fe4
    int64_t v10 = v9; // 0x180297007
    int16_t * v11; // 0x180296f20
    int64_t v12; // 0x180296f20
    int64_t v13; // 0x180296f20
    int64_t v14; // 0x180296f20
    int64_t v15; // 0x180296f20
    if (v12 != 0) {
        goto lab_0x18029700d;
    } else {
        // 0x180297004
        v11 = (int16_t *)v5;
        v13 = v9;
        v15 = v7;
        v14 = v5;
        goto lab_0x180297009;
    }
  lab_0x180296f6b:
    // 0x180296f6b
    *(int32_t *)function_180279918(v3, v4, v1, v2) = 22;
    function_180271814(v3, v4, v1, v2);
    return 22;
  lab_0x180296f90:;
    int64_t v16 = a2;
    int64_t v17 = a1;
    int16_t * v18 = (int16_t *)v17;
    while (*v18 != 0) {
        int64_t v19 = v17 + 2; // 0x180296f96
        int64_t v20 = v16 - 1; // 0x180296f9a
        if (v20 == 0) {
            // 0x180296fa0
            *(int16_t *)a1 = 0;
            v3 = v19;
            v4 = v20;
            v2 = 0;
            goto lab_0x180296f6b;
        }
        v16 = v20;
        v17 = v19;
        v18 = (int16_t *)v17;
    }
    if (a4 != -1) {
        int64_t v21 = v17; // 0x180296fdc
        int64_t v22 = v16; // 0x180296fdc
        int64_t v23 = v1; // 0x180296fdc
        int64_t v24 = a4; // 0x180296fdc
        v11 = v18;
        v13 = v1;
        v15 = v16;
        v14 = v17;
        if (a4 != 0) {
            int16_t v25 = *(int16_t *)v23; // 0x180296fe0
            *(int16_t *)v21 = v25;
            while (v25 != 0) {
                // 0x180296ff8
                v9 = v23 + 2;
                v5 = v21 + 2;
                v7 = v22 - 1;
                v12 = v24;
                if (v7 == 0) {
                    goto lab_0x180297004_2;
                }
                int64_t v26 = v24 - 1; // 0x180296ffe
                v21 = v5;
                v22 = v7;
                v23 = v9;
                v24 = v26;
                v12 = v26;
                if (v26 == 0) {
                    goto lab_0x180297004_2;
                }
                v25 = *(int16_t *)v23;
                *(int16_t *)v21 = v25;
            }
            // 0x180296f42
            return 0;
        }
        goto lab_0x180297009;
    } else {
        int64_t v27 = v1 - v17; // 0x180296fb2
        int64_t v28 = v17; // 0x180296fb5
        int64_t v29 = v16; // 0x180296fb5
        int16_t v30 = *(int16_t *)(v28 + v27); // 0x180296fc0
        *(int16_t *)v28 = v30;
        v28 += 2;
        v6 = v28;
        v8 = v29;
        v10 = v27;
        while (v30 != 0) {
            // 0x180296fd1
            v29--;
            v6 = v28;
            v8 = v29;
            v10 = v27;
            if (v29 == 0) {
                // break -> 0x18029700d
                return 0;
            }
            v30 = *(int16_t *)(v28 + v27);
            *(int16_t *)v28 = v30;
            v28 += 2;
            v6 = v28;
            v8 = v29;
            v10 = v27;
        }
        goto lab_0x18029700d;
    }
  lab_0x180297009:
    // 0x180297009
    *v11 = 0;
    v6 = v14;
    v8 = v15;
    v10 = v13;
    goto lab_0x18029700d;
  lab_0x18029700d:
    // 0x18029700d
    if (v8 != 0) {
        // 0x180296f42
        return 0;
    }
    if (a4 == -1) {
        // 0x18029701c
        *(int16_t *)(a1 - 2 + 2 * a2) = 0;
        return v8 + 80 & 0xffffffff;
    }
    // 0x180297030
    *(int16_t *)a1 = 0;
    *(int32_t *)function_180279918(v6, v8, v10, 0) = 34;
    function_180271814(v6, v8, v10, 0);
    return 34;
}

// Address range: 0x180297060 - 0x1802971a4
int64_t function_180297060(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1; // 0x180297060
    int64_t v2; // 0x180297060
    int64_t v3; // 0x180297060
    int64_t v4; // 0x180297060
    int64_t v5; // 0x180297060
    int64_t v6; // 0x18029711b
    int64_t v7; // 0x180297124
    if (a4 == 0) {
        if (a1 != 0) {
            // 0x18029709b
            if (a2 != 0) {
                // 0x1802970a8
                *(int16_t *)a1 = 0;
                return 0;
            }
            // 0x1802970c3
            *(int32_t *)function_180279918(a1, a2, a3, a4) = 22;
            function_180271814(a1, a2, a3, a4);
            return 22;
        }
        // 0x180297080
        if (a2 != 0) {
            // 0x1802970c3
            *(int32_t *)function_180279918(a1, a2, a3, a4) = 22;
            function_180271814(a1, a2, a3, a4);
            return 22;
        }
        // 0x180297085
        return 0;
      lab_0x180297130_2:
        // 0x180297130
        v4 = v6;
        v5 = v7;
        v3 = v2;
        if (v1 != (int64_t)(v7 != 0)) {
            goto lab_0x180297144;
        } else {
            // 0x180297140
            *(int16_t *)v6 = 0;
            v4 = v6;
            v5 = v7;
            v3 = v2;
            goto lab_0x180297144;
        }
      lab_0x180297144:
        // 0x180297144
        if (v5 != 0) {
            return 0;
        }
        if (a4 == -1) {
            // 0x18029714f
            *(int16_t *)(a1 - 2 + 2 * a2) = 0;
            return v5 + 80 & 0xffffffff;
        }
        // 0x180297168
        *(int16_t *)a1 = 0;
        *(int32_t *)function_180279918(v4, v5, 0, v3) = 34;
        function_180271814(v4, v5, 0, v3);
        return 34;
    }
    // 0x180297096
    if (a1 == 0 || a2 == 0) {
        // 0x1802970c3
        *(int32_t *)function_180279918(a1, a2, a3, a4) = 22;
        function_180271814(a1, a2, a3, a4);
        return 22;
    }
    if (a3 == 0) {
        // 0x1802970bf
        *(int16_t *)a1 = 0;
        int64_t v8 = 0;
        *(int32_t *)function_180279918(a1, a2, v8, a4) = 22;
        function_180271814(a1, a2, v8, a4);
        return 22;
    }
    int64_t v9 = a3 - a1; // 0x1802970e3
    int64_t v10 = a1; // 0x1802970ef
    int64_t v11 = a2; // 0x1802970ef
    int64_t v12 = a1; // 0x1802970ef
    v7 = a2;
    if (a4 != -1) {
        v1 = a4;
        int16_t v13 = *(int16_t *)(v12 + v9); // 0x180297110
        *(int16_t *)v12 = v13;
        while (v13 != 0) {
            // 0x180297124
            v6 = v12 + 2;
            v7--;
            v2 = v1;
            if (v7 == 0) {
                goto lab_0x180297130_2;
            }
            int64_t v14 = v1 - 1; // 0x18029712a
            v12 = v6;
            v2 = v14;
            if (v14 == 0) {
                goto lab_0x180297130_2;
            }
            v1 = v14;
            v13 = *(int16_t *)(v12 + v9);
            *(int16_t *)v12 = v13;
        }
    } else {
        int16_t v15 = *(int16_t *)(v10 + v9); // 0x1802970f1
        *(int16_t *)v10 = v15;
        while (v15 != 0) {
            int64_t v16 = v10 + 2; // 0x1802970f9
            v11--;
            v10 = v16;
            v4 = v16;
            v5 = v11;
            v3 = a4;
            if (v11 == 0) {
                goto lab_0x180297144;
            }
            v15 = *(int16_t *)(v10 + v9);
            *(int16_t *)v10 = v15;
        }
    }
    // 0x180297085
    return 0;
}

// Address range: 0x1802971b0 - 0x180297206
int64_t function_1802971b0(int64_t a1, int16_t * a2) {
    // 0x1802971b0
    int64_t v1; // 0x1802971b0
    int16_t v2 = v1;
    int16_t v3 = v2; // 0x1802971ce
    if (v2 == 0) {
        // 0x1802971ed
        return 0;
    }
    int64_t v4 = a1; // 0x1802971ce
    int64_t v5 = v4; // 0x1802971de
    while (function_18029d3c8((int64_t)a2, (int64_t)v3) == 0) {
        // 0x1802971e0
        v4 += 2;
        v3 = *(int16_t *)v4;
        v5 = v4;
        if (v3 == 0) {
            // break -> 0x1802971ed
            return 0;
        }
        v5 = v4;
    }
    // 0x1802971ed
    return (v5 - a1) / 2;
}

// Address range: 0x180297210 - 0x180297268
int64_t function_180297210(int64_t a1, int16_t * a2) {
    // 0x180297210
    int64_t v1; // 0x180297210
    int16_t v2 = v1;
    int16_t v3 = v2; // 0x180297226
    if (v2 == 0) {
        // 0x18029724d
        return 0;
    }
    int64_t v4 = a1; // 0x180297226
    int64_t result = v4; // 0x18029723e
    while (function_18029d3c8((int64_t)a2, (int64_t)v3) == 0) {
        // 0x180297240
        v4 += 2;
        v3 = *(int16_t *)v4;
        result = 0;
        if (v3 == 0) {
            // break -> 0x18029724d
            return 0;
        }
        result = v4;
    }
    // 0x18029724d
    return result;
}

// Address range: 0x180297268 - 0x180297310
int64_t function_180297268(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x180297287
    *v1 = *v1 | 260;
    int64_t v2; // bp-200, 0x180297268
    if ((int32_t)function_18028e0c0(&v2, 85) < 2) {
        // 0x1802972d7
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = &v2; // 0x1802972a9
    int64_t v4 = -1;
    int64_t v5 = v4 + 1; // 0x1802972b0
    while (*(int16_t *)(2 * v5 + v3) != 0) {
        // 0x1802972b0
        v4 = v5;
        v5 = v4 + 1;
    }
    // 0x1802972ba
    if ((int32_t)function_180297060(a1 + 600, 85, v3, v4 + 2) == 0) {
        // 0x1802972d7
        return function_18026ad50((int64_t)g731);
    }
    // 0x1802972f8
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
}

// Address range: 0x180297310 - 0x1802973df
int64_t function_180297310(int64_t a1) {
    int64_t v1 = -1; // 0x180297326
    v1++;
    while (*(int16_t *)(2 * v1 + a1) != 0) {
        // 0x180297329
        v1++;
    }
    // 0x180297332
    *(int32_t *)(a1 + 24) = (int32_t)(v1 == 3);
    int64_t v2 = -1; // 0x18029733e
    v2++;
    while (*(int16_t *)(2 * v2 + *(int64_t *)(a1 + 8)) != 0) {
        // 0x180297342
        v2++;
    }
    // 0x18029734c
    *(int32_t *)(a1 + 28) = (int32_t)(v2 == 3);
    int32_t v3 = 2; // 0x18029735c
    if (v1 != 3) {
        // 0x180297365
        v3 = 0;
        if (a1 != 0) {
            // 0x180297376
            v3 = 0;
            if ((*(int16_t *)a1 & -33) < 91) {
                int64_t v4 = a1 + 2; // 0x18029737a
                int64_t v5 = 1; // 0x180297393
                int64_t v6 = v5 & 0xffffffff; // 0x180297385
                int64_t v7 = v4; // 0x180297385
                while ((*(int16_t *)v4 & -33) < 91) {
                    // 0x180297393
                    v4 = v7 + 2;
                    v5 = v6 + 1;
                    v6 = v5 & 0xffffffff;
                    v7 = v4;
                }
                // 0x180297376
                v3 = v5;
            }
        }
    }
    // 0x18029739b
    *(int32_t *)(a1 + 20) = v3;
    int64_t v8 = function_18028dddc(0x180297478, 3, 0, 0); // 0x1802973af
    int32_t * v9 = (int32_t *)(a1 + 16); // 0x1802973b4
    int32_t v10 = *v9; // 0x1802973b4
    if ((v10 & 768) == 768 != (v10 & 7) != 0) {
        // 0x1802973d1
        *v9 = 0;
    }
    // 0x1802973d4
    return v8 & -256 | (int64_t)((v10 & 256) != 0);
}

// Address range: 0x1802973e0 - 0x180297478
int64_t function_1802973e0(int64_t a1) {
    int64_t v1 = -1; // 0x1802973f3
    v1++;
    while (*(int16_t *)(2 * v1 + a1) != 0) {
        // 0x1802973f6
        v1++;
    }
    // 0x180297400
    *(int32_t *)(a1 + 24) = (int32_t)(v1 == 3);
    int32_t v2 = 2; // 0x18029740c
    if (v1 != 3) {
        // 0x180297415
        v2 = 0;
        if (a1 != 0) {
            // 0x180297426
            v2 = 0;
            if ((*(int16_t *)a1 & -33) < 91) {
                int64_t v3 = a1 + 2; // 0x18029742a
                int64_t v4 = 1; // 0x180297443
                int64_t v5 = v4 & 0xffffffff; // 0x180297435
                int64_t v6 = v3; // 0x180297435
                while ((*(int16_t *)v3 & -33) < 91) {
                    // 0x180297443
                    v3 = v6 + 2;
                    v4 = v5 + 1;
                    v5 = v4 & 0xffffffff;
                    v6 = v3;
                }
                // 0x180297426
                v2 = v4;
            }
        }
    }
    // 0x18029744b
    *(int32_t *)(a1 + 20) = v2;
    int64_t result = function_18028dddc(0x18029776c, 3, 0, 0); // 0x18029745f
    int64_t v7 = a1 + 16; // 0x180297464
    if ((*(char *)v7 & 4) == 0) {
        // 0x18029746a
        *(int32_t *)v7 = 0;
    }
    // 0x18029746d
    return result;
}

// Address range: 0x180297478 - 0x180297858
int64_t function_180297478(int64_t a1, int64_t a2) {
    int64_t v1 = __vcrt_getptd2(a1); // 0x1802974a5
    int64_t v2 = *(int32_t *)(v1 + 180) == 0 ? 0x1002 : 7; // 0x1802974cc
    int64_t v3; // bp-152, 0x180297478
    if ((int32_t)function_18028df74(a1, v2, &v3, 64) == 0) {
        // 0x1802974de
        *(int32_t *)(v1 + 168) = 0;
        // 0x18029770a
        return function_18026ad50((int64_t)g731);
    }
    int64_t v4 = v1 + 152; // 0x1802974b5
    int16_t v5 = &v3; // 0x1802974f5
    int64_t v6 = function_180293ba0(*(int64_t *)(v1 + 160), (int16_t *)&v3, v5); // 0x1802974f5
    int32_t * v7; // 0x180297478
    int64_t v8; // 0x180297478
    int64_t v9; // 0x180297478
    int32_t * v10; // 0x180297478
    if ((int32_t)v6 != 0) {
        // 0x1802974ec
        v7 = (int32_t *)(v1 + 168);
        goto lab_0x1802975d2;
    } else {
        int64_t v11 = *(int32_t *)(v1 + 176) == 0 ? 0x1001 : 3; // 0x18029751f
        if ((int32_t)function_18028df74(a1, v11, &v3, 64) == 0) {
            // 0x1802974de
            *(int32_t *)(v1 + 168) = 0;
            // 0x18029770a
            return function_18026ad50((int64_t)g731);
        }
        int64_t * v12 = (int64_t *)v4; // 0x18029752e
        int64_t v13 = function_180293ba0(*v12, (int16_t *)&v3, v5); // 0x180297536
        v9 = v1 + 168;
        v10 = (int32_t *)v9;
        int32_t v14 = *v10; // 0x18029753b
        if ((int32_t)v13 != 0) {
            // 0x18029755b
            v7 = v10;
            if ((v14 & 2) != 0) {
                goto lab_0x1802975d2;
            } else {
                int32_t v15 = *(int32_t *)(v1 + 172); // 0x180297560
                if (v15 == 0) {
                    goto lab_0x18029758f;
                } else {
                    int64_t v16 = function_18029a8e0(*v12, (int16_t *)&v3, (int64_t)v15, 64); // 0x180297572
                    if ((int32_t)v16 != 0) {
                        goto lab_0x18029758f;
                    } else {
                        // 0x18029757b
                        *v10 = *v10 | 2;
                        int64_t v17 = -1; // 0x18029757f
                        v17++;
                        v8 = v17;
                        while (*(int16_t *)(2 * v17 + a1) != 0) {
                            // 0x180297582
                            v17++;
                            v8 = v17;
                        }
                        goto lab_0x1802975b3;
                    }
                }
            }
        } else {
            // 0x180297542
            *v10 = v14 | 772;
            int64_t v18 = -1; // 0x18029754b
            v18++;
            v8 = v18;
            while (*(int16_t *)(2 * v18 + a1) != 0) {
                // 0x18029754e
                v18++;
                v8 = v18;
            }
            goto lab_0x1802975b3;
        }
    }
  lab_0x1802975d2:;
    int32_t * v19 = v7;
    if ((*v19 & 768) == 768) {
        // 0x18029770a
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v20 = (int32_t *)(v1 + 176); // 0x1802975e4
    if ((int32_t)function_18028df74(a1, *v20 == 0 ? 0x1001 : 3, &v3, 64) == 0) {
        // 0x1802974de
        *(int32_t *)(v1 + 168) = 0;
        // 0x18029770a
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v21 = (int64_t *)v4; // 0x180297612
    if ((int32_t)function_180293ba0(*v21, (int16_t *)&v3, v5) != 0) {
        // 0x18029770a
        return function_18026ad50((int64_t)g731);
    }
    int32_t v22 = *v19; // 0x180297627
    *v19 = v22 | 512;
    int64_t v23; // 0x180297478
    int64_t v24; // 0x180297478
    if (*v20 == 0) {
        int32_t v25 = *(int32_t *)(v1 + 172); // 0x18029765f
        if (v25 == 0) {
            goto lab_0x180297734;
        } else {
            int64_t v26 = 0; // 0x18029766f
            int64_t v27 = v26; // 0x180297677
            while (*(int16_t *)(2 * v26 + *v21) != 0) {
                // 0x18029766f
                v26 = v27 + 1;
                v27 = v26;
            }
            if (v25 != (int32_t)v26) {
                goto lab_0x180297734;
            } else {
                // 0x180297682
                if ((int32_t)function_180297918(a1) == 0) {
                    int64_t v28 = *v21; // 0x18029768e
                    int32_t v29 = 0; // 0x180297697
                    if (v28 != 0) {
                        // 0x180297699
                        v29 = 0;
                        if ((*(int16_t *)v28 & -33) < 91) {
                            int64_t v30 = v28 + 2; // 0x18029769c
                            int64_t v31 = 1; // 0x1802976b3
                            int64_t v32 = v31 & 0xffffffff; // 0x1802976a7
                            int64_t v33 = v30; // 0x1802976a7
                            while ((*(int16_t *)v30 & -33) < 91) {
                                // 0x1802976b3
                                v30 = v33 + 2;
                                v31 = v32 + 1;
                                v32 = v31 & 0xffffffff;
                                v33 = v30;
                            }
                            // 0x1802976b8
                            v29 = v31;
                        }
                    }
                    int64_t v34 = 0; // 0x1802976be
                    int64_t v35 = v34; // 0x1802976c6
                    while (*(int16_t *)(2 * v34 + v28) != 0) {
                        // 0x1802976be
                        v34 = v35 + 1;
                        v35 = v34;
                    }
                    if (v29 == (int32_t)v34) {
                        // 0x18029770a
                        return function_18026ad50((int64_t)g731);
                    }
                }
                // 0x1802976cd
                *v19 = *v19 | 256;
                int64_t v36 = v1 + 752; // 0x1802976d2
                if (*(int16_t *)v36 != 0) {
                    // 0x18029770a
                    return function_18026ad50((int64_t)g731);
                }
                int64_t v37 = -1; // 0x1802976dd
                v37++;
                v23 = v36;
                v24 = v37;
                while (*(int16_t *)(2 * v37 + a1) != 0) {
                    // 0x1802976df
                    v37++;
                    v23 = v36;
                    v24 = v37;
                }
                goto lab_0x1802976ea;
            }
        }
    } else {
        int64_t v38 = v1 + 752; // 0x18029763b
        *v19 = v22 | 768;
        if (*(int16_t *)v38 != 0) {
            // 0x18029770a
            return function_18026ad50((int64_t)g731);
        }
        int64_t v39 = -1; // 0x180297649
        v39++;
        v23 = v38;
        v24 = v39;
        while (*(int16_t *)(2 * v39 + a1) != 0) {
            // 0x18029764f
            v39++;
            v23 = v38;
            v24 = v39;
        }
        goto lab_0x1802976ea;
    }
  lab_0x1802975b3:
    // 0x1802975b3
    v7 = v10;
    if ((int32_t)function_180297060(v1 + 752, 85, a1, v8 + 1) != 0) {
        goto lab_0x180297755;
    } else {
        goto lab_0x1802975d2;
    }
  lab_0x180297734:;
    int64_t v40 = v1 + 752; // 0x180297738
    *v19 = v22 | 768;
    if (*(int16_t *)v40 != 0) {
        // 0x18029770a
        return function_18026ad50((int64_t)g731);
    }
    int64_t v41 = 0; // 0x180297748
    v23 = v40;
    v24 = v41;
    int64_t v42 = v41; // 0x180297751
    while (*(int16_t *)(2 * v41 + a1) != 0) {
        // 0x180297748
        v41 = v42 + 1;
        v23 = v40;
        v24 = v41;
        v42 = v41;
    }
    goto lab_0x1802976ea;
  lab_0x1802976ea:
    // 0x1802976ea
    if ((int32_t)function_180297060(v23, 85, a1, v24 + 1) == 0) {
        // 0x18029770a
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x180297755;
  lab_0x18029758f:
    // 0x18029758f
    v7 = v10;
    if ((*(char *)v9 & 1) != 0) {
        goto lab_0x1802975d2;
    } else {
        // 0x180297595
        v7 = v10;
        if ((int32_t)function_180297918(a1) == 0) {
            goto lab_0x1802975d2;
        } else {
            // 0x1802975a1
            *v10 = *v10 | 1;
            int64_t v49 = -1; // 0x1802975a5
            v49++;
            v8 = v49;
            while (*(int16_t *)(2 * v49 + a1) != 0) {
                // 0x1802975a8
                v49++;
                v8 = v49;
            }
            goto lab_0x1802975b3;
        }
    }
  lab_0x180297755:
    // 0x180297755
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    int64_t v43 = __vcrt_getptd2(0); // 0x180297793
    int64_t v44 = *(int32_t *)(v43 + 176) == 0 ? 0x1001 : 3; // 0x1802977ba
    int64_t v45; // bp-464, 0x180297478
    if ((int32_t)function_18028df74(0, v44, &v45, 120) == 0) {
        // 0x1802977cb
        *(int32_t *)(v43 + 168) = 0;
        // 0x18029781c
        return function_18026ad50((int64_t)g731);
    }
    int64_t v46 = *(int64_t *)(v43 + 152); // 0x1802977d3
    int64_t v47 = function_180293ba0(v46, (int16_t *)&v45, (int16_t)(int64_t)&v45); // 0x1802977db
    if ((int32_t)v47 != 0) {
        // 0x18029781c
        return function_18026ad50((int64_t)g731);
    }
    // 0x1802977f2
    if ((int32_t)function_180297060(v43 + 752, 85, 0, 1) == 0) {
        int32_t * v48 = (int32_t *)(v43 + 168); // 0x18029780d
        *v48 = *v48 | 4;
        // 0x18029781c
        return function_18026ad50((int64_t)g731);
    }
    // 0x180297841
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
}

// Address range: 0x180297858 - 0x180297917
int64_t function_180297858(int64_t a1, int64_t a2) {
    int32_t result2 = 0; // 0x18029786c
    int64_t v1 = 0x20001004; // 0x180297876
    if (a1 != 0 && (int16_t)a1 != 0) {
        // 0x18029787d
        v1 = 0x20001004;
        if ((int32_t)function_18029c130(a1, L"ACP") != 0) {
            // 0x18029788d
            int64_t v2; // 0x180297858
            int16_t v3 = v2; // 0x180297897
            if ((int32_t)function_180293ba0(a1, L"utf8", v3) == 0 || (int32_t)function_180293ba0(a1, L"utf-8", v3) == 0) {
                // 0x1802978db
                return 0xfde9;
            }
            // 0x1802978b3
            v1 = 0x2000000b;
            if ((int32_t)function_18029c130(a1, L"OCP") != 0) {
                // 0x1802978db
                return function_180287ac0(a1);
            }
        }
    }
    int64_t result = function_18028df74(a2 + 600, v1, (int64_t *)&result2, 2); // 0x18029790c
    if ((int32_t)result == 0) {
        // 0x1802978db
        return result;
    }
    // 0x1802978cd
    if (result2 > 2) {
        // 0x1802978db
        return result2;
    }
    // 0x1802978db
    return 0xfde9;
}

// Address range: 0x180297918 - 0x180297982
int64_t function_180297918(int64_t a1) {
    // 0x180297918
    int64_t v1; // bp-40, 0x180297918
    if ((int32_t)function_18028df74(a1, 89, &v1, 9) != 0) {
        // 0x18029794e
        function_180287b70((int64_t)&v1, (int16_t *)a1, 9);
    }
    // 0x18029796a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180297984 - 0x180297a1d
int64_t function_180297984(int16_t (**a1)[8], int64_t a2, int64_t a3) {
    // 0x180297984
    if ((int32_t)a2 < 0) {
        // 0x1802979f9
        return 0;
    }
    int64_t v1 = 1; // 0x1802979d3
    int64_t v2 = 0;
    int64_t v3 = a2 & 0xffffffff;
    int64_t result = 1; // 0x1802979b8
    while ((int32_t)v1 != 0) {
        int64_t v4 = v3;
        int64_t v5 = v2;
        int32_t v6 = v4 + v5; // 0x1802979c0
        int64_t v7 = (v6 - (v6 >> 31)) / 2; // 0x1802979c5
        int64_t v8 = 16 * v7 + (int64_t)a1;
        v1 = function_180293ba0(a3, (int16_t *)*(int64_t *)v8, (int16_t)a3);
        int32_t v9 = v1;
        int64_t v10; // 0x180297984
        int64_t v11; // 0x180297984
        if (v9 != 0) {
            if (v9 >= 0) {
                // 0x1802979f0
                v11 = v7 + 1 & 0xffffffff;
                v10 = v4;
            } else {
                // 0x1802979eb
                v11 = v5;
                v10 = v7 + 0xffffffff & 0xffffffff;
            }
        } else {
            // 0x1802979dc
            *(int64_t *)a3 = v8 + 8;
            v11 = v5;
            v10 = v4;
        }
        // 0x1802979f3
        v3 = v10;
        v2 = v11;
        if (v2 > v3) {
            // 0x1802979f7
            result = v9 == 0;
            return result;
        }
        result = 1;
    }
  lab_0x1802979f9:
    // 0x1802979f9
    return result;
}

// Address range: 0x180297a20 - 0x180297d84
int64_t function_180297a20(int64_t * a1, int64_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = __vcrt_getptd2(v1); // 0x180297a45
    int64_t v3 = v1 + 128; // 0x180297a4d
    int64_t v4 = v2 + 152; // 0x180297a57
    int32_t * v5 = (int32_t *)(v2 + 168); // 0x180297a5e
    *v5 = 0;
    int64_t v6 = v2 + 752; // 0x180297a65
    int64_t * v7 = (int64_t *)v4; // 0x180297a6c
    *v7 = v1;
    int64_t v8 = v2 + 160; // 0x180297a6f
    *(int16_t *)v6 = 0;
    int64_t * v9 = (int64_t *)v8; // 0x180297a7b
    *v9 = v3;
    if (*(int16_t *)v3 != 0) {
        // 0x180297a84
        function_180297984(&g596, 22, v8);
    }
    int16_t v10 = v4;
    int16_t v11; // 0x180297a20
    int16_t v12; // 0x180297a20
    if (*(int16_t *)*v7 == 0) {
        // 0x180297af3
        function_180297268(v4);
        v11 = v10;
        goto lab_0x180297af8;
    } else {
        // 0x180297aa3
        if (*(int16_t *)*v9 == 0) {
            // 0x180297ab3
            function_1802973e0(v4);
        } else {
            // 0x180297aac
            function_180297310(v4);
        }
        // 0x180297ab8
        v12 = v10;
        if (*v5 != 0) {
            goto lab_0x180297b05;
        } else {
            int64_t v13 = function_180297984((int16_t (**)[8])&g595, 64, v4); // 0x180297ad0
            v11 = (int16_t)&g595;
            if ((int32_t)v13 != 0) {
                // 0x180297ad9
                if (*(int16_t *)*v9 == 0) {
                    // 0x180297aec
                    function_1802973e0(v4);
                    v11 = v10;
                } else {
                    // 0x180297ae5
                    function_180297310(v4);
                    v11 = v10;
                }
            }
            goto lab_0x180297af8;
        }
    }
  lab_0x180297af8:
    // 0x180297af8
    v12 = v11;
    if (*v5 == 0) {
        // 0x180297c67
        return 0;
    }
    goto lab_0x180297b05;
  lab_0x180297b05:;
    int64_t v14 = v1 + 256;
    int64_t v15; // 0x180297a20
    if (a1 == NULL || v12 != 0) {
        goto lab_0x180297b22;
    } else {
        // 0x180297b10
        if (*(int16_t *)v14 != 0) {
            goto lab_0x180297b22;
        } else {
            // 0x180297b1a
            v15 = GetACP();
            goto lab_0x180297b3a;
        }
    }
  lab_0x180297b22:
    // 0x180297b22
    v15 = function_180297858(a1 == NULL ? 0 : v14, v4);
    goto lab_0x180297b3a;
  lab_0x180297b3a:;
    int32_t v16 = v15; // 0x180297b3c
    switch (v16) {
        case 0xfde8: {
        }
        case 0: {
            // 0x180297c67
            return 0;
        }
    }
    // 0x180297b4f
    if (!IsValidCodePage(v16 & 0xffff)) {
        // 0x180297c67
        return 0;
    }
    if (a2 != 0) {
        // 0x180297b65
        *(int32_t *)a2 = v16;
    }
    // 0x180297b68
    if (a3 == NULL) {
        // 0x180297c67
        return 1;
    }
    int64_t v17 = (int64_t)a3;
    int64_t v18 = v17 + 288; // 0x180297b71
    *(int16_t *)v18 = 0;
    int64_t v19 = -1;
    int64_t v20 = v19 + 1; // 0x180297b80
    while (*(int16_t *)(2 * v20 + v6) != 0) {
        // 0x180297b80
        v19 = v20;
        v20 = v19 + 1;
    }
    int64_t v21 = function_180297060(v18, 85, v6, v19 + 2); // 0x180297b98
    int64_t v22; // 0x180297ba5
    int64_t * v23; // 0x180297bd8
    if ((int32_t)v21 != 0) {
        goto lab_0x180297c84;
    } else {
        // 0x180297ba5
        v22 = v21 + 64 & 0xffffffff;
        if ((int32_t)function_18028df74(v18, 0x1001, a3, v22) == 0) {
            // 0x180297c67
            return 0;
        }
        int64_t v24 = v17 + 128; // 0x180297bc3
        v23 = (int64_t *)v24;
        if ((int32_t)function_18028df74(v18, 0x1002, v23, v22) == 0) {
            // 0x180297c67
            return 0;
        }
        // 0x180297be5
        if (function_18029d3c8(v24, v21 + 95 & 0xffffffff) != 0) {
            goto lab_0x180297c05;
        } else {
            // 0x180297bf5
            if (function_18029d3c8(v24, v21 + 46 & 0xffffffff) == 0) {
                goto lab_0x180297c1c;
            } else {
                goto lab_0x180297c05;
            }
        }
    }
  lab_0x180297c84:
    // 0x180297c84
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    int64_t v25 = __vcrt_getptd2(0); // 0x180297cc8
    int64_t v26 = *(int64_t *)(__vcrt_getptd2(0) + 928); // 0x180297cd8
    int64_t v27 = function_180298238(0); // 0x180297cdf
    int32_t Locale = v27; // 0x180297cf7
    int32_t LCType = *(int32_t *)(v25 + 180) == 0 ? 0x1002 : 7; // 0x180297d03
    int64_t lpLCData; // bp-352, 0x180297a20
    if (GetLocaleInfoW(Locale, LCType, (int16_t *)&lpLCData, 120) == 0) {
        // 0x180297d15
        *(int32_t *)v26 = 0;
        // 0x180297d5b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v28 = *(int64_t *)(v25 + 160); // 0x180297d1c
    int64_t v29 = function_180293ba0(v28, (int16_t *)&lpLCData, (int16_t)(int64_t)&lpLCData); // 0x180297d28
    if ((int32_t)v29 != 0) {
        // 0x180297d5b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v30 = (int64_t)&g597; // 0x180297a20
    int64_t v31 = 0; // 0x180297a20
    while (*(int16_t *)v30 != (int16_t)v27) {
        int64_t v32 = v31 + 1; // 0x180297d3d
        v30 += 2;
        v31 = v32 & 0xffffffff;
        if ((int32_t)v32 >= 10) {
            int32_t * v33 = (int32_t *)v26; // 0x180297d48
            *v33 = *v33 | 4;
            *(int32_t *)(v26 + 8) = Locale;
            *(int32_t *)(v26 + 4) = Locale;
            goto lab_0x180297d5b;
        }
    }
  lab_0x180297d5b:
    // 0x180297d5b
    return function_18026ad50((int64_t)g731);
  lab_0x180297c05:
    // 0x180297c05
    if ((int32_t)function_18028df74(v18, 7, v23, v22) == 0) {
        // 0x180297c67
        return 0;
    }
    goto lab_0x180297c1c;
  lab_0x180297c1c:
    if (v16 != 0xfde9) {
        // 0x180297c4f
        function_18029c108(v15 & 0xffffffff);
        // 0x180297c67
        return 1;
    }
    // 0x180297c2b
    if ((int32_t)function_180297060(v17 + 256, 16, (int64_t)L"utf8", 5) == 0) {
        // 0x180297c67
        return 1;
    }
    goto lab_0x180297c84;
}

// Address range: 0x180297e54 - 0x180297eea
int64_t function_180297e54(int64_t * a1) {
    int64_t v1 = __vcrt_getptd2((int64_t)a1); // 0x180297e61
    int64_t v2 = *(int64_t *)(v1 + 152); // 0x180297e6f
    int64_t v3 = -1; // 0x180297e6f
    v3++;
    while (*(int16_t *)(2 * v3 + v2) != 0) {
        // 0x180297e76
        v3++;
    }
    int64_t v4 = 2; // 0x180297e86
    *(int32_t *)(v1 + 176) = (int32_t)(v3 == 3);
    int64_t v5; // 0x180297e54
    if (v3 == 3) {
        // 0x180297e80
        v5 = v4;
    } else {
        int64_t v6 = 0; // 0x180297ea9
        if ((*(int16_t *)v2 & -33) < 91) {
            int64_t v7 = 0;
            int64_t v8 = v2; // 0x180297e9e
            v8 += v4;
            v7 = v7 + 1 & 0xffffffff;
            v6 = v7;
            while ((*(int16_t *)v8 & -33) < 91) {
                // 0x180297eb7
                v8 += v4;
                v7 = v7 + 1 & 0xffffffff;
                v6 = v7;
            }
        }
        // 0x180297ebc
        v4 = v6;
        v5 = v6;
    }
    // 0x180297ebf
    *(int32_t *)(v1 + 172) = (int32_t)v5;
    bool result = EnumSystemLocalesW((bool (*)(int16_t *))0x180298130, 1); // 0x180297ed2
    if ((*(char *)&v4 & 4) == 0) {
        // 0x180297edd
        *(int32_t *)a1 = 0;
    }
    // 0x180297edf
    return result;
}

// Address range: 0x180297eec - 0x18029812f
int64_t function_180297eec(int64_t a1, int64_t a2) {
    int64_t v1 = __vcrt_getptd2(a1); // 0x180297f16
    int64_t v2 = *(int64_t *)(__vcrt_getptd2(a1) + 928); // 0x180297f2a
    int64_t v3 = function_180298238(a1); // 0x180297f31
    int32_t Locale = v3; // 0x180297f46
    int32_t LCType = *(int32_t *)(v1 + 180) == 0 ? 0x1002 : 7; // 0x180297f52
    int64_t lpLCData; // bp-280, 0x180297eec
    if (GetLocaleInfoW(Locale, LCType, (int16_t *)&lpLCData, 120) == 0) {
        // 0x1802980ff
        *(int32_t *)v2 = 0;
        // 0x180298107
        return function_18026ad50((int64_t)g731);
    }
    int64_t v4 = v1 + 152; // 0x180297f1b
    int64_t v5 = &lpLCData; // 0x180297f39
    int16_t v6 = v5; // 0x180297f72
    int64_t v7 = function_180293ba0(*(int64_t *)(v1 + 160), (int16_t *)&lpLCData, v6); // 0x180297f72
    int32_t * v8; // 0x180297eec
    int32_t v9; // 0x180297eec
    int32_t * v10; // 0x180297eec
    if ((int32_t)v7 != 0) {
        // 0x180297f69
        v8 = (int32_t *)v2;
        goto lab_0x180298034;
    } else {
        int32_t v11 = *(int32_t *)(v1 + 176); // 0x180297f83
        int32_t v12 = v5; // 0x180297f93
        int32_t v13 = GetLocaleInfoW(Locale, (v12 - ((int32_t)(v11 != 0) | v12) & -4094) + 0x1001, (int16_t *)&lpLCData, 120); // 0x180297fa1
        if (v13 == 0) {
            // 0x1802980ff
            *(int32_t *)v2 = 0;
            // 0x180298107
            return function_18026ad50((int64_t)g731);
        }
        int64_t * v14 = (int64_t *)v4; // 0x180297faf
        int64_t v15 = function_180293ba0(*v14, (int16_t *)&lpLCData, v6); // 0x180297fb7
        v10 = (int32_t *)v2;
        int32_t v16 = *v10; // 0x180297fbc
        if ((int32_t)v15 != 0) {
            // 0x180297fcf
            v8 = v10;
            if ((v16 & 2) != 0) {
                goto lab_0x180298034;
            } else {
                int32_t * v17 = (int32_t *)(v1 + 172); // 0x180297fd4
                int32_t v18 = *v17; // 0x180297fd4
                if (v18 == 0) {
                    goto lab_0x18029800f;
                } else {
                    int64_t v19 = function_18029a8e0(*v14, (int16_t *)&lpLCData, (int64_t)v18, 120); // 0x180297fe6
                    if ((int32_t)v19 != 0) {
                        goto lab_0x18029800f;
                    } else {
                        // 0x180297fef
                        *v10 = *v10 | 2;
                        *(int32_t *)(v2 + 8) = Locale;
                        int64_t v20 = 0; // 0x180297ffb
                        int64_t v21 = v20; // 0x180298003
                        while (*(int16_t *)(2 * v20 + *v14) != 0) {
                            // 0x180297ffb
                            v20 = v21 + 1;
                            v21 = v20;
                        }
                        // 0x180298005
                        v8 = v10;
                        if (*v17 == (int32_t)v20) {
                            // 0x18029800a
                            *(int32_t *)(v2 + 4) = Locale;
                            v8 = v10;
                        }
                        goto lab_0x180298034;
                    }
                }
            }
        } else {
            // 0x180297fc2
            *(int32_t *)(v2 + 4) = Locale;
            v9 = v16 | 772;
            goto lab_0x180298031;
        }
    }
  lab_0x180298034:;
    int32_t * v22 = v8;
    if ((*v22 & 768) == 768) {
        // 0x180298107
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v23 = (int32_t *)(v1 + 176); // 0x180298045
    int32_t v24 = *v23; // 0x180298045
    int32_t v25 = v5; // 0x180298057
    int32_t v26 = GetLocaleInfoW(Locale, (v25 - ((int32_t)(v24 != 0) | v25) & -4094) + 0x1001, (int16_t *)&lpLCData, 120); // 0x180298065
    if (v26 == 0) {
        // 0x1802980ff
        *(int32_t *)v2 = 0;
        // 0x180298107
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v27 = (int64_t *)v4; // 0x180298073
    int32_t v28; // 0x180297eec
    int32_t v29; // 0x180297eec
    if ((int32_t)function_180293ba0(*v27, (int16_t *)&lpLCData, v6) != 0) {
        // 0x1802980b9
        if (*v23 != 0 || *(int32_t *)(v1 + 172) == 0) {
            // 0x180298107
            return function_18026ad50((int64_t)g731);
        }
        int64_t v30 = function_180293ba0(*v27, (int16_t *)&lpLCData, v6); // 0x1802980cd
        v29 = 0;
        if ((int32_t)v30 != 0) {
            // 0x180298107
            return function_18026ad50((int64_t)g731);
        }
        goto lab_0x1802980d8;
    } else {
        int32_t v31 = *v22; // 0x180298084
        *v22 = v31 | 512;
        if (*v23 == 0) {
            int32_t v32 = *(int32_t *)(v1 + 172); // 0x18029809a
            if (v32 == 0) {
                // 0x180298092
                v28 = v31 | 768;
                goto lab_0x1802980ea;
            } else {
                int64_t v33 = 0; // 0x1802980a3
                int64_t v34 = v33; // 0x1802980ab
                while (*(int16_t *)(2 * v33 + *v27) != 0) {
                    // 0x1802980a3
                    v33 = v34 + 1;
                    v34 = v33;
                }
                // 0x1802980ad
                v29 = 1;
                if (v32 != (int32_t)v33) {
                    // 0x180298092
                    v28 = v31 | 768;
                    goto lab_0x1802980ea;
                } else {
                    goto lab_0x1802980d8;
                }
            }
        } else {
            // 0x180298092
            v28 = v31 | 768;
            goto lab_0x1802980ea;
        }
    }
  lab_0x180298031:
    // 0x180298031
    *v10 = v9;
    *(int32_t *)(v2 + 8) = Locale;
    v8 = v10;
    goto lab_0x180298034;
  lab_0x1802980d8:
    // 0x1802980d8
    if ((int32_t)function_18029833c(v3 & 0xffffffff, v29) == 0) {
        // 0x180298107
        return function_18026ad50((int64_t)g731);
    }
    // 0x1802980e6
    v28 = *v22 | 256;
    goto lab_0x1802980ea;
  lab_0x18029800f:
    // 0x18029800f
    v8 = v10;
    if ((*(char *)v2 & 1) == 0) {
        int64_t v36 = (int64_t)&g597; // 0x180297eec
        int64_t v37 = 0; // 0x180297eec
        v8 = v10;
        while (*(int16_t *)v36 != (int16_t)v3) {
            int64_t v38 = v37 + 1; // 0x180298023
            v36 += 2;
            v37 = v38 & 0xffffffff;
            if ((int32_t)v38 >= 10) {
                // 0x18029802e
                v9 = *v10 | 1;
                goto lab_0x180298031;
            }
            v8 = v10;
        }
    }
    goto lab_0x180298034;
  lab_0x1802980ea:
    // 0x1802980ea
    *v22 = v28;
    int32_t * v35 = (int32_t *)(v2 + 4); // 0x1802980ea
    if (*v35 == 0) {
        // 0x1802980f0
        *v35 = Locale;
    }
    // 0x180298107
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180298130 - 0x180298238
int64_t function_180298130(int64_t a1, int64_t a2) {
    int64_t v1 = __vcrt_getptd2(a1); // 0x180298157
    int64_t v2 = *(int64_t *)(__vcrt_getptd2(a1) + 928); // 0x180298167
    int64_t v3 = function_180298238(a1); // 0x18029816e
    int32_t * v4 = (int32_t *)(v1 + 176); // 0x180298173
    int32_t Locale = v3; // 0x180298186
    int64_t lpLCData; // bp-264, 0x180298130
    int32_t v5 = GetLocaleInfoW(Locale, *v4 == 0 ? 0x1001 : 3, (int16_t *)&lpLCData, 120); // 0x180298198
    if (v5 == 0) {
        int32_t * v6 = (int32_t *)v2; // 0x1802981a2
        *v6 = *v6 & v5;
        // 0x180298213
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v7 = (int64_t *)(v1 + 152); // 0x1802981ab
    int16_t v8 = &lpLCData; // 0x1802981b7
    int64_t v9 = function_180293ba0(*v7, (int16_t *)&lpLCData, v8); // 0x1802981b7
    int32_t v10 = *v4; // 0x1802981bc
    int32_t v11; // 0x180298130
    if ((int32_t)v9 != 0) {
        if (v10 != 0 || *(int32_t *)(v1 + 172) == v10) {
            // 0x180298213
            return function_18026ad50((int64_t)g731);
        }
        int64_t v12 = function_180293ba0(*v7, (int16_t *)&lpLCData, v8); // 0x1802981e7
        v11 = 0;
        if ((int32_t)v12 != 0) {
            // 0x180298213
            return function_18026ad50((int64_t)g731);
        }
        goto lab_0x1802981f2;
    } else {
        if (v10 != 0) {
            goto lab_0x180298200;
        } else {
            // 0x1802981ca
            v11 = v10 + 1;
            goto lab_0x1802981f2;
        }
    }
  lab_0x1802981f2:
    // 0x1802981f2
    if ((int32_t)function_18029833c(v3 & 0xffffffff, v11) == 0) {
        // 0x180298213
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x180298200;
  lab_0x180298200:;
    int32_t * v13 = (int32_t *)v2; // 0x180298200
    *v13 = *v13 | 4;
    *(int32_t *)(v2 + 4) = Locale;
    *(int32_t *)(v2 + 8) = Locale;
    // 0x180298213
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180298238 - 0x180298287
int64_t function_180298238(int64_t a1) {
    // 0x180298238
    int64_t v1; // 0x180298238
    int16_t v2 = v1;
    int16_t v3 = v2; // 0x180298281
    int64_t v4 = a1; // 0x180298281
    if (v2 == 0) {
        // 0x180298283
        return 0;
    }
    int64_t v5 = 0; // 0x180298281
    int64_t v6; // 0x180298238
    while (true) {
      lab_0x180298247:;
        uint16_t v7 = v3;
        int64_t v8 = v7;
        if (v7 < 103) {
            // 0x180298265
            v6 = 0xffd9 + v8 & 0xffff;
            goto lab_0x180298268;
        } else {
            // 0x180298257
            v6 = v8;
            if (v7 < 71) {
                // 0x180298265
                v6 = 0xfff9 + v8 & 0xffff;
                goto lab_0x180298268;
            } else {
                goto lab_0x180298268;
            }
        }
    }
  lab_0x180298283:;
    // 0x180298283
    int64_t result; // 0x180298238
    return result;
  lab_0x180298268:
    // 0x180298268
    v4 += 2;
    v5 = 16 * v5 + 0xffffffd0 + v6 & 0xffffffff;
    v3 = *(int16_t *)v4;
    result = v5;
    if (v3 == 0) {
        // break -> 0x180298283
        goto lab_0x180298283;
    }
    goto lab_0x180298247;
}

// Address range: 0x180298288 - 0x18029833a
int64_t function_180298288(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int32_t lpLCData = 0; // 0x18029829c
    int64_t result; // 0x180298288
    if (a1 != 0 && (int16_t)a1 != 0) {
        // 0x1802982ad
        if ((int32_t)function_18029c130(a1, L"ACP") != 0) {
            // 0x1802982bd
            if ((int32_t)function_18029c130(a1, L"OCP") != 0) {
                // 0x18029832a
                return function_180287ac0(a1);
            }
            int32_t v2 = GetLocaleInfoW(*(int32_t *)(v1 + 8), 0x2000000b, (int16_t *)&lpLCData, 2); // 0x1802982e1
            result = 0;
            if (v2 != 0) {
                // 0x1802982eb
                result = lpLCData;
            }
            // 0x18029832a
            return result;
        }
    }
    // 0x1802982fb
    if (GetLocaleInfoW(*(int32_t *)(v1 + 8), 0x20001004, (int16_t *)&lpLCData, 2) == 0) {
        // 0x18029832a
        return 0;
    }
    // 0x18029831c
    result = lpLCData;
    if (lpLCData == 0) {
        // 0x180298324
        result = GetACP();
    }
    // 0x18029832a
    return result;
}

// Address range: 0x18029833c - 0x1802983f6
int64_t function_18029833c(int64_t a1, int32_t a2) {
    int32_t lpLCData = 0; // 0x180298354
    int64_t v1 = __vcrt_getptd2(a1); // 0x180298359
    int32_t v2 = a1; // 0x18029835e
    if (GetLocaleInfoW(v2 & 1023 || 1024, 0x20000001, (int16_t *)&lpLCData, 2) == 0) {
        // 0x1802983e1
        return 0;
    }
    // 0x180298385
    if (a2 == 0 || lpLCData == v2) {
        // 0x1802983e1
        return 1;
    }
    int64_t v3 = *(int64_t *)(v1 + 152); // 0x18029838f
    int32_t v4 = 0; // 0x1802983a8
    int64_t v5 = v3; // 0x1802983a8
    if ((*(int16_t *)v3 & -33) < 91) {
        v5 += 2;
        int64_t v6 = 1; // 0x1802983b7
        int64_t v7 = v6 & 0xffffffff; // 0x1802983a8
        while ((*(int16_t *)v5 & -33) < 91) {
            // 0x1802983b4
            v5 += 2;
            v6 = v7 + 1;
            v7 = v6 & 0xffffffff;
        }
        // 0x1802983a1
        v4 = v6;
    }
    int64_t v8 = -1; // 0x1802983c4
    v8++;
    while (*(int16_t *)(2 * v8 + v3) != 0) {
        // 0x1802983c4
        v8++;
    }
    // 0x1802983e1
    return v4 != (int32_t)v8;
}

// Address range: 0x1802983f8 - 0x18029847d
int64_t function_1802983f8(int16_t (**a1)[8], uint32_t a2, int64_t a3) {
    int64_t v1; // 0x1802983f8
    if ((int32_t)a2 < 0) {
        // 0x180298456
        return v1 & -256;
    }
    int64_t v2 = a2; // 0x180298447
    int64_t v3 = 0; // 0x18029844d
    int32_t v4 = v3 + v2; // 0x180298424
    int64_t v5 = (v4 - (v4 >> 31)) / 2; // 0x180298429
    int64_t v6 = 16 * v5 + (int64_t)a1;
    int64_t v7 = function_180293ba0(a3, (int16_t *)*(int64_t *)v6, (int16_t)a3); // 0x180298437
    int32_t v8 = v7; // 0x18029843c
    while (v8 != 0) {
        // 0x180298440
        v2 = (v8 >= 0 ? v2 : v5 + 0xffffffff) & 0xffffffff;
        v3 = (v8 >= 0 ? v5 + 1 : v3) & 0xffffffff;
        v1 = v7;
        if (v3 > v2) {
            // 0x180298456
            return v1 & -256;
        }
        v4 = v3 + v2;
        v5 = (v4 - (v4 >> 31)) / 2;
        v6 = 16 * v5 + (int64_t)a1;
        v7 = function_180293ba0(a3, (int16_t *)*(int64_t *)v6, (int16_t)a3);
        v8 = v7;
    }
    int64_t v9 = v6 + 8; // 0x180298473
    *(int64_t *)a3 = v9;
    // 0x180298456
    return v9 & -256 | 1;
}

// Address range: 0x180298480 - 0x180298700
int64_t function_180298480(int64_t * a1, int64_t a2, int64_t * lpLCData, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = __vcrt_getptd2(v1); // 0x1802984a9
    int64_t v3 = 0; // bp-88, 0x1802984b3
    int64_t v4 = __vcrt_getptd2(v1); // 0x1802984ba
    int64_t v5 = &v3; // 0x1802984bf
    int64_t v6 = v2 + 160; // 0x1802984c6
    *(int64_t *)(v4 + 928) = v5;
    int64_t v7 = v1 + 128; // 0x1802984d4
    int64_t v8 = v2 + 152; // 0x1802984db
    int64_t * v9 = (int64_t *)v8; // 0x1802984db
    *v9 = v1;
    int64_t * v10 = (int64_t *)v6; // 0x1802984e2
    *v10 = v7;
    int64_t v11 = v5; // 0x1802984e8
    if (v7 != 0) {
        // 0x1802984ea
        v11 = v5;
        if (*(int16_t *)v7 != 0) {
            // 0x1802984f0
            function_1802983f8(&g596, 22, v6);
            v11 = (int64_t)&g596;
        }
    }
    // 0x180298508
    v3 = 0;
    int64_t v12 = *v9; // 0x18029850c
    if (v12 == 0) {
        goto lab_0x180298592;
    } else {
        // 0x180298518
        if (*(int16_t *)v12 == 0) {
            goto lab_0x180298592;
        } else {
            int64_t v13 = *v10; // 0x18029851e
            if (v13 == 0) {
                // 0x180298537
                function_180297e54(&v3);
                goto lab_0x180298540;
            } else {
                // 0x180298526
                if (*(int16_t *)v13 == 0) {
                    // 0x180298537
                    function_180297e54(&v3);
                    goto lab_0x180298540;
                } else {
                    // 0x18029852c
                    GetLcidFromLangCountry(&v3);
                    goto lab_0x180298540;
                }
            }
        }
    }
  lab_0x180298592:;
    int64_t v14 = *v10; // 0x180298592
    int32_t v15; // 0x180298480
    if (v14 == 0) {
        goto lab_0x1802985eb;
    } else {
        // 0x18029859a
        if (*(int16_t *)v14 == 0) {
            goto lab_0x1802985eb;
        } else {
            int64_t v16 = __vcrt_getptd2(v11); // 0x1802985a0
            int64_t v17 = 0; // 0x1802985b3
            int64_t v18 = v17; // 0x1802985bb
            while (*(int16_t *)(2 * v17 + *(int64_t *)(v16 + 160)) != 0) {
                // 0x1802985b3
                v17 = v18 + 1;
                v18 = v17;
            }
            // 0x1802985bd
            *(int32_t *)(v16 + 180) = (int32_t)(v17 == 3);
            EnumSystemLocalesW((bool (*)(int16_t *))0x180297c9c, 1);
            v15 = 0;
            if ((v3 & 4) == 0) {
                // 0x1802985e5
                v3 = 0;
                v15 = 0;
            }
            goto lab_0x1802985fe;
        }
    }
  lab_0x1802985eb:
    // 0x1802985eb
    v3 = 260;
    int32_t v19 = GetUserDefaultLCID(); // 0x1802985f2
    v15 = v19;
    int32_t v20 = v19; // 0x1802985fb
    goto lab_0x1802985fe;
  lab_0x1802985fe:;
    int32_t Locale2 = v15; // 0x180298602
    int32_t Locale = v20; // 0x180298602
    if ((int32_t)v3 == 0) {
        // 0x1802986e5
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x180298608;
  lab_0x180298608:;
    int64_t v21 = function_180298288(a1 == NULL ? 0 : v1 + 256, &v3); // 0x18029861c
    int32_t v22 = v21; // 0x180298623
    if (v22 == 0 || !IsValidCodePage(v22 & 0xffff) || !IsValidLocale(Locale, 1)) {
        // 0x1802986e5
        return function_18026ad50((int64_t)g731);
    }
    // 0x180298652
    if (a2 != 0) {
        // 0x180298657
        *(int32_t *)a2 = v22;
    }
    int64_t v23 = Locale; // 0x18029865a
    function_18028e1a0(v23, v2 + 752, 85, 0);
    if (lpLCData == NULL) {
        // 0x1802986e5
        return function_18026ad50((int64_t)g731);
    }
    int64_t v24 = (int64_t)lpLCData;
    function_18028e1a0(v23, v24 + 288, 85, 0);
    if (GetLocaleInfoW(Locale, 0x1001, (int16_t *)lpLCData, 64) == 0) {
        // 0x1802986e5
        return function_18026ad50((int64_t)g731);
    }
    // 0x1802986aa
    if (GetLocaleInfoW(Locale2, 0x1002, (int16_t *)(v24 + 128), 64) != 0) {
        // 0x1802986c6
        function_18029c108(v21 & 0xffffffff);
    }
    // 0x1802986e5
    return function_18026ad50((int64_t)g731);
  lab_0x180298540:
    // 0x180298540
    Locale2 = 0;
    if ((int32_t)v3 != 0) {
        goto lab_0x180298608;
    } else {
        int64_t v25 = function_1802983f8((int16_t (**)[8])&g595, 64, v8); // 0x180298561
        v15 = 0;
        if ((char)v25 == 0) {
            goto lab_0x1802985fe;
        } else {
            int64_t v26 = *v10; // 0x18029856e
            if (v26 == 0) {
                // 0x180298587
                function_180297e54(&v3);
                v15 = 0;
                goto lab_0x1802985fe;
            } else {
                // 0x180298576
                if (*(int16_t *)v26 == 0) {
                    // 0x180298587
                    function_180297e54(&v3);
                    v15 = 0;
                    goto lab_0x1802985fe;
                } else {
                    // 0x18029857c
                    GetLcidFromLangCountry(&v3);
                    v15 = 0;
                    goto lab_0x1802985fe;
                }
            }
        }
    }
}

// Address range: 0x180298700 - 0x180298708
int64_t function_180298700(void) {
    // 0x180298700
    return (uint32_t)g1352;
}

// Address range: 0x18029873c - 0x18029880c
int64_t function_18029873c(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    char v1 = a2;
    if ((int32_t)a5 == 0) {
        // 0x1802987f7
        int64_t v2; // 0x18029873c
        return v2 & -256 | (int64_t)(v1 < 53 == (52 - v1 & v1) < 0);
    }
    int64_t v3 = function_180291150(a1, a2); // 0x18029876e
    int32_t v4 = v3; // 0x180298773
    if (v4 == 0) {
        int64_t v5 = v3 + 1; // 0x18029877a
        int64_t v6 = v5 & 0xffffffff; // 0x18029877a
        if (v1 > 53) {
            // 0x1802987f7
            return v6 & 255 | v3 & -256;
        }
        // 0x18029877f
        if (v1 != 53) {
            // 0x1802987f7
            return v3 & -256;
        }
        int64_t v7 = a2 + 1; // 0x180298781
        if (a4 == 0) {
            // 0x1802987f7
            return v6 & 255 | v7 & -256;
        }
        int64_t v8 = v7;
        char v9 = *(char *)v8; // 0x180298790
        int64_t v10 = v8 + v6; // 0x180298795
        while (v9 == 48) {
            // 0x180298790
            v8 = v10;
            v9 = *(char *)v8;
            v10 = v8 + v6;
        }
        // 0x180298797
        if (v9 != 0) {
            // 0x1802987f7
            return v6 & 255 | v8 & -256;
        }
        // 0x18029879b
        if (a2 == a1) {
            // 0x1802987f7
            return v8 & -256;
        }
        // 0x1802987f7
        return v8 & -256 | (int64_t)(*(char *)(a2 - 1) & (char)v5);
    }
    int64_t v11; // 0x18029873c
    if (v4 != 512) {
        // 0x1802987cf
        if (v4 != 256) {
            // 0x1802987f7
            return v3 & -256;
        }
        int64_t v12 = v3; // 0x1802987dd
        int64_t v13 = a2; // 0x1802987dd
        int64_t v14 = v3; // 0x1802987dd
        if (a4 != 0) {
            while (true) {
              lab_0x1802987e4:;
                int64_t v15 = v12 & -256; // 0x1802987e4
                v11 = v15;
                v14 = v15;
                int64_t v16; // 0x18029873c
                switch (*(char *)v16) {
                    case 48: {
                        // 0x1802987e1
                        v12 = v15;
                        v13++;
                        goto lab_0x1802987e4;
                    }
                    case 0: {
                        return v11 & -256;
                    }
                    default: {
                        goto lab_0x1802987ee;
                    }
                }
            }
        }
      lab_0x1802987ee:
        // 0x1802987ee
        v11 = v14;
        if (a3 == 45) {
            // 0x1802987f7
            return 1 | v14 & -256;
        }
    } else {
        int64_t v17 = v3; // 0x1802987b5
        int64_t v18 = a2; // 0x1802987b5
        int64_t v19 = v3; // 0x1802987b5
        if (a4 != 0) {
            while (true) {
              lab_0x1802987bc:;
                int64_t v20 = v17 & -256; // 0x1802987bc
                v19 = v20;
                v11 = v20;
                int64_t v21; // 0x18029873c
                switch (*(char *)v21) {
                    case 48: {
                        // 0x1802987b9
                        v17 = v20;
                        v18++;
                        goto lab_0x1802987bc;
                    }
                    case 0: {
                        return v11 & -256;
                    }
                    default: {
                        goto lab_0x1802987c6;
                    }
                }
            }
        }
      lab_0x1802987c6:
        // 0x1802987c6
        v11 = v19;
        if (a3 != 45) {
            // 0x1802987f7
            return 1 | v19 & -256;
        }
    }
    // 0x1802987f7
    return v11 & -256;
}

// Address range: 0x18029880c - 0x18029891c
int64_t function_18029880c(int64_t a1, uint64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a1;
    int64_t result = 22; // 0x180298829
    if (a1 != 0 && a2 != 0) {
        char * v2 = (char *)a1;
        *v2 = 0;
        int32_t v3 = a3;
        result = 34;
        if ((v3 >= 0 == (v3 != 0) ? (0x100000000 * a3 + 0x100000000) / 0x100000000 : 1) < a2) {
            // 0x18029887e
            result = 22;
            if (a4 != NULL) {
                int64_t v4 = (int64_t)a4;
                int64_t v5 = *(int64_t *)(v4 + 8); // 0x180298883
                v1 = v5;
                *v2 = 48;
                int64_t v6 = a1 + 1;
                int64_t v7 = v5; // 0x1802988ab
                int64_t v8 = v6; // 0x1802988ab
                bool v9 = v3 < 0; // 0x1802988ab
                if (v3 >= 0 == (v3 != 0)) {
                    char v10 = *(char *)v5; // 0x180298893
                    int64_t v11 = v5 + (int64_t)(v10 != 0);
                    *(char *)v6 = v10 == 0 ? 48 : v10;
                    int64_t v12 = a3 + 0xffffffff; // 0x1802988a5
                    int64_t v13 = v6 + 1;
                    int32_t v14 = v12; // 0x1802988a8
                    int64_t v15 = v13; // 0x1802988ab
                    int64_t v16 = v12 & 0xffffffff; // 0x1802988ab
                    int64_t v17 = v11; // 0x1802988ab
                    v7 = v11;
                    v8 = v13;
                    v9 = v14 < 0;
                    while (v14 >= 0 == (v14 != 0)) {
                        // 0x180298893
                        v10 = *(char *)v17;
                        v11 = v17 + (int64_t)(v10 != 0);
                        *(char *)v15 = v10 == 0 ? 48 : v10;
                        v12 = v16 + 0xffffffff;
                        v13 = v15 + 1;
                        v14 = v12;
                        v15 = v13;
                        v16 = v12 & 0xffffffff;
                        v17 = v11;
                        v7 = v11;
                        v8 = v13;
                        v9 = v14 < 0;
                    }
                }
                // 0x1802988ad
                *(char *)v8 = 0;
                int64_t v18 = v4; // 0x1802988b0
                if (!v9) {
                    int64_t v19 = 0x100000000 * a5 / 0x100000000;
                    int64_t v20 = v19 & 0xffffffff; // 0x1802988b6
                    int32_t v21 = v19;
                    v18 = v20;
                    if ((char)function_18029873c(v1, v7, v21, v21, 0x100000000 * a6 / 0x100000000) != 0) {
                        int64_t v22 = v8 - 1; // 0x1802988d0
                        char * v23 = (char *)v22; // 0x1802988d3
                        char v24 = *v23; // 0x1802988d3
                        char * v25 = v23; // 0x1802988d7
                        char v26 = v24; // 0x1802988d7
                        if (v24 == 57) {
                            *v23 = 48;
                            int64_t v27 = v22 - 1; // 0x1802988d0
                            char * v28 = (char *)v27;
                            char v29 = *v28; // 0x1802988d3
                            int64_t v30 = v27; // 0x1802988d7
                            v25 = v28;
                            v26 = v29;
                            while (v29 == 57) {
                                // 0x1802988cd
                                *v28 = 48;
                                v27 = v30 - 1;
                                v28 = (char *)v27;
                                v29 = *v28;
                                v30 = v27;
                                v25 = v28;
                                v26 = v29;
                            }
                        }
                        // 0x1802988d9
                        *v25 = v26 + 1;
                        v18 = v20;
                    }
                }
                int64_t v31 = -1; // 0x1802988e0
                if (*(char *)&v1 == 49) {
                    int32_t * v32 = (int32_t *)(v4 + 4); // 0x1802988e2
                    *v32 = *v32 + 1;
                    // 0x180298907
                    return 0;
                }
                int64_t v33 = v31 + 2; // 0x1802988ee
                v31++;
                while (*(char *)(v33 + a1) != 0) {
                    // 0x1802988eb
                    v33 = v31 + 2;
                    v31++;
                }
                // 0x1802988f6
                function_18029d4e0(a1, v6, v33, v18);
                // 0x180298907
                return 0;
            }
        }
    }
    // 0x180298830
    *(int32_t *)(a7 + 44) = (int32_t)result;
    *(char *)(a7 + 48) = 1;
    function_18027175c(0, 0, 0, 0, 0, (int64_t *)a7);
    // 0x180298907
    return result;
}

// Address range: 0x18029891c - 0x180299b9c
int64_t function_18029891c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18029891c
    int128_t v1; // 0x18029891c
    int64_t v2 = __asm_movaps_19(v1); // 0x180298937
    int128_t v3 = __asm_movq(a1); // 0x180298953
    int64_t v4 = 0x100000000 * a3 / 0x100000000; // bp-2012, 0x180298968
    int32_t v5; // bp-1984, 0x18029891c
    function_18029c1e0((int64_t *)&v5);
    char v6 = 0; // 0x180298983
    if ((v5 & 31) != 31) {
        // 0x18029898c
        function_18029c270((int64_t *)&v5);
        v6 = 1;
    }
    // 0x18029899b
    *(int64_t *)(a4 + 8) = a5;
    int64_t v7 = __asm_movq_20(v3); // 0x1802989a5
    int32_t v8 = 0; // bp-2008, 0x1802989b5
    *(int32_t *)a4 = v7 < 0 ? 45 : 32;
    function_18029c170(&v8, 0, 0);
    int64_t v9 = v7 / 0x10000000000000 & 2047; // 0x1802989e3
    int64_t v10; // 0x18029891c
    if (v9 != 0) {
        if (v9 != 2047) {
            goto lab_0x180298abe;
        } else {
            int64_t v11 = v7 & 0xfffffffffffff; // 0x180298a16
            if (v11 != 0) {
                if (v7 < 0 == v11 == 0x8000000000000) {
                    // 0x180298a5e
                    *(int32_t *)(a4 + 4) = 1;
                    v10 = (int64_t)"1#IND";
                    goto lab_0x180298a6a;
                } else {
                    // 0x180298a4a
                    *(int32_t *)(a4 + 4) = 1;
                    int32_t v12 = (int32_t)(v7 / 0x8000000000000) & 1 ^ 3; // 0x180298a4f
                    v10 = (int64_t)"1#QNAN";
                    if (v12 == 2) {
                        goto lab_0x180298a6a;
                    } else {
                        int32_t v13 = v12 - 3; // 0x180298a59
                        v10 = (int64_t)"1#SNAN";
                        if (v13 == 0) {
                            goto lab_0x180298a6a;
                        } else {
                            // 0x180298a5e
                            v10 = (int64_t)"1#IND";
                            if (v13 != 1) {
                                goto lab_0x180298abe;
                            } else {
                                goto lab_0x180298a6a;
                            }
                        }
                    }
                }
            } else {
                // 0x180298a4a
                *(int32_t *)(a4 + 4) = 1;
                if ((int32_t)function_180287a40(a5, a6, (int64_t)"1#INF") != 0) {
                    // 0x180299b85
                    function_180271834(0, 0, 0, 0, 0);
                    __asm_int3(0, 0);
                    return __asm_int3(0, 0);
                }
                goto lab_0x180299b48;
            }
        }
    } else {
        if ((v7 & 0xfffffffffffff) == 0) {
            // 0x1802989fb
            *(int32_t *)(a4 + 4) = 0;
            v10 = (int64_t)"0";
            goto lab_0x180298a6a;
        } else {
            // 0x1802989ed
            if ((v8 & 0x1000000) == 0) {
                goto lab_0x180298abe;
            } else {
                // 0x1802989fb
                *(int32_t *)(a4 + 4) = 0;
                v10 = (int64_t)"0";
                goto lab_0x180298a6a;
            }
        }
    }
  lab_0x180299911_2:;
    // 0x180299911
    int64_t v14; // 0x18029891c
    int32_t v15 = v14; // bp-1944, 0x180299911
    int64_t v16 = v14; // 0x180299911
    goto lab_0x180299915;
  lab_0x1802995a4:;
    // 0x1802995a4
    int64_t v170; // 0x18029891c
    v15 = v170;
    int64_t v169; // 0x18029891c
    int64_t v111 = v169; // 0x1802995a8
    int64_t v112 = v170; // 0x1802995a8
    goto lab_0x180299872;
  lab_0x180299872:;
    // 0x180299872
    int64_t v99; // 0x18029891c
    int32_t v93; // 0x18029891c
    int32_t v380 = v93 - (int32_t)v99; // 0x18029987d
    v93 = v380;
    int64_t v94 = v380; // 0x18029988a
    int64_t v95 = v111; // 0x18029988a
    int64_t v96 = v112; // 0x18029988a
    if (v380 == 0) {
        // break -> 0x180299894
        goto lab_0x180299894;
    }
    goto lab_0x180299513;
  lab_0x1802995eb:;
    // 0x1802995eb
    int64_t v180; // 0x18029891c
    int64_t v381 = v180;
    int64_t v179; // 0x18029891c
    int64_t v382 = v179;
    int64_t v166 = v381; // 0x1802995ee
    int64_t v89; // 0x18029891c
    if (v382 == 0) {
        goto lab_0x180299863;
    } else {
        uint32_t v383 = v15; // 0x1802995f4
        if (v383 >= 115) {
            // 0x18029986a
            v15 = 0;
            v14 = 0;
            goto lab_0x180299911_2;
        }
        // 0x1802995fa
        *(int32_t *)(4 * (int64_t)v383 + v89) = (int32_t)v382;
        v169 = v381;
        v170 = v15 + 1;
        goto lab_0x1802995a4;
    }
  lab_0x180299863:
    // 0x180299863
    v111 = v166;
    v112 = v15;
    goto lab_0x180299872;
  lab_0x1802994e9_2:;
    // 0x1802994e9
    int64_t v284; // 0x18029891c
    int32_t v18 = v284; // bp-1480, 0x1802994e9
    int64_t v17 = v284; // 0x1802994f0
    int64_t v78; // 0x18029891c
    int64_t v19 = v78; // 0x1802994f0
    goto lab_0x18029991c;
  lab_0x1802990c4:;
    // 0x1802990c4
    int64_t v292; // 0x18029891c
    v18 = v292;
    int64_t v291; // 0x18029891c
    int64_t v229 = v291; // 0x1802990cb
    int64_t v230 = v292; // 0x1802990cb
    goto lab_0x180299427;
  lab_0x180299427:;
    // 0x180299427
    int64_t v217; // 0x18029891c
    int32_t v216; // 0x18029891c
    int32_t v384 = v216 - (int32_t)v217; // 0x180299432
    int32_t v210 = v384; // 0x18029943f
    int64_t v211 = v384; // 0x18029943f
    int64_t v212 = v229; // 0x18029943f
    int64_t v213 = v230; // 0x18029943f
    int32_t v205; // 0x18029891c
    int32_t v202 = v205; // 0x18029943f
    int64_t v203 = v230; // 0x18029943f
    if (v384 == 0) {
        // break -> 0x180299450
        goto lab_0x180299450;
    }
    goto lab_0x180299033;
  lab_0x180299163:;
    // 0x180299163
    int64_t v302; // 0x18029891c
    int64_t v385 = v302;
    int64_t v301; // 0x18029891c
    int64_t v386 = v301;
    int64_t v288 = v385; // 0x180299166
    int64_t v207; // 0x18029891c
    if (v386 == 0) {
        goto lab_0x180299415;
    } else {
        uint32_t v387 = v18; // 0x18029916c
        if (v387 >= 115) {
            // 0x18029941f
            v18 = 0;
            v284 = 0;
            goto lab_0x1802994e9_2;
        }
        // 0x180299175
        *(int32_t *)(4 * (int64_t)v387 + v207) = (int32_t)v386;
        v291 = v385;
        v292 = v18 + 1;
        goto lab_0x1802990c4;
    }
  lab_0x180299415:
    // 0x180299415
    v229 = v288;
    v230 = v18;
    goto lab_0x180299427;
  lab_0x180298abe:;
    // 0x180298abe
    int64_t v388; // bp-1832, 0x18029891c
    int64_t v22 = &v388; // 0x180298929
    int32_t v49 = 0; // bp-2028, 0x180298abe
    int32_t v76; // bp-2000, 0x18029891c
    function_18029c170(&v76, 0, 0);
    function_18029c170(&v49, 0x8001f, 0x8001f);
    int128_t v389 = __asm_movq(v7 & 0x7fffffffffffffff); // 0x180298afc
    uint64_t v390 = __asm_movq_20(v389); // 0x180298b03
    v49 = (int32_t)a2 + 1;
    int64_t v391 = v390 / 0x10000000000000 & 2047; // 0x180298b21
    int64_t v392 = v391 == 0 ? 0 : 0x10000000000000; // 0x180298b37
    int64_t v393 = (v391 == 0 ? 2 : 1) + v391; // 0x180298b56
    uint32_t v361 = (int32_t)v393; // 0x180298b59
    float64_t v394 = log10((float64_t)(int64_t)v389); // 0x180298b5e
    function_18029c2d0();
    int32_t v77 = __asm_cvttsd2si((int128_t)(int32_t)(float32_t)v394); // 0x180298b68
    int128_t v91 = v390; // bp-1940, 0x180298b6c
    int64_t v368 = (v392 | v390 & 0xfffff00000000) == 0 ? 1 : 2; // 0x180298b91
    int32_t v359 = v368;
    v15 = v359;
    int64_t v331; // 0x18029891c
    int64_t v324; // 0x18029891c
    int64_t v367; // 0x18029891c
    int64_t v335; // 0x18029891c
    int64_t v364; // 0x18029891c
    int64_t v371; // 0x18029891c
    int64_t v366; // 0x18029891c
    int64_t v337; // 0x18029891c
    int64_t v373; // 0x18029891c
    int128_t v84; // bp-1012, 0x18029891c
    int32_t v333; // 0x18029891c
    int32_t v357; // 0x180298c7b
    int64_t v349; // 0x180298c07
    int64_t v353; // 0x180298c07
    uint32_t v351; // 0x180298cad
    uint32_t v355; // 0x180298cb5
    int64_t v375; // 0x180298e5a
    int64_t v365; // 0x180298e5f
    int64_t v327; // 0x180298bf8
    int64_t v329; // 0x180298c6a
    int32_t v328; // 0x180298c6d
    if (v361 < 1076) {
        if (v393 != 54) {
            // 0x180298e37
            v84 = 0;
            if ((v392 || v390 & 0xfffff00000000) != 0) {
                // 0x180298e5a
                v375 = v22 - 108;
                v365 = v22 + 820;
                int64_t v395 = 0;
                while (*(int32_t *)(4 * v395 + v365) == *(int32_t *)(4 * v395 + v375)) {
                    int64_t v396 = v395 + 1; // 0x180298e6d
                    int64_t v397 = v396 & 0xffffffff; // 0x180298e73
                    if ((int32_t)v396 == 2) {
                        int64_t v398 = v368 + 0xffffffff; // 0x180298eca
                        v371 = v398;
                        v373 = v368;
                        v364 = 2047;
                        if ((int32_t)v398 == -1) {
                            goto lab_0x180298f15;
                        } else {
                            goto lab_0x180298ed3;
                        }
                    }
                    v395 = v397;
                }
            }
        }
        int64_t v399 = v22 - 108; // 0x180298f61
        int32_t v400 = *(int32_t *)(((v392 | v390 & 0xfffff00000000) == 0 ? 0 : 4) + v399); // 0x180298f61
        int64_t v401 = v368 + (int64_t)(v400 < 0); // 0x180298f7e
        int64_t v402 = v401 + 0xffffffff; // 0x1802990d0
        int64_t v403 = 2047; // 0x1802990d7
        int64_t v404 = v402; // 0x1802990d7
        int64_t v405 = v368; // 0x1802990d7
        if ((int32_t)v402 != -1) {
            int64_t v406 = v404 & 0xffffffff;
            uint32_t v407 = (int32_t)v405; // 0x1802990e4
            int64_t v408 = 0; // 0x1802990e6
            if ((int32_t)v404 < v407) {
                // 0x1802990e8
                v408 = (int64_t)*(int32_t *)(4 * v406 + v399);
            }
            int64_t v409 = v404 + 0xffffffff; // 0x1802990e0
            int64_t v410 = v409 & 0xffffffff; // 0x1802990e0
            uint32_t v411 = (int32_t)v409; // 0x1802990f2
            int32_t v412 = 0; // 0x1802990f5
            if (v411 < v407) {
                // 0x1802990f7
                v412 = *(int32_t *)(4 * v410 + v399);
            }
            // 0x180299100
            *(int32_t *)(4 * v406 + v399) = v412 >> 31 | 2 * (int32_t)v408;
            v403 = v408;
            while (v411 != -1) {
                // 0x18029911a
                v406 = v410 & 0xffffffff;
                v407 = (int32_t)(int64_t)v15;
                v408 = 0;
                if ((int32_t)v410 < v407) {
                    // 0x1802990e8
                    v408 = (int64_t)*(int32_t *)(4 * v406 + v399);
                }
                // 0x1802990f2
                v409 = v410 + 0xffffffff;
                v410 = v409 & 0xffffffff;
                v411 = (int32_t)v409;
                v412 = 0;
                if (v411 < v407) {
                    // 0x1802990f7
                    v412 = *(int32_t *)(4 * v410 + v399);
                }
                // 0x180299100
                *(int32_t *)(4 * v406 + v399) = v412 >> 31 | 2 * (int32_t)v408;
                v403 = v408;
            }
        }
        // 0x180298f8e
        v15 = v401;
        uint64_t v413 = 1077 - v393; // 0x180298f97
        int64_t v414 = v413 / 32 & 0x7ffffff; // 0x180298fa5
        int64_t v415 = 4 * v414; // 0x180298fa8
        function_18029db80((int64_t)&v84, 0, v415, v403);
        *(int32_t *)(v22 + 820 + v415) = 1 << ((int32_t)v413 & 31);
        v366 = v414;
        v367 = v401;
        goto lab_0x180298fd0;
    } else {
        // 0x180298ba4
        v84 = 0;
        v331 = v22 - 108;
        if ((v392 || v390 & 0xfffff00000000) != 0) {
            int64_t v416; // 0x18029891c
            int64_t v417 = 4 * v416; // 0x180298bc7
            // 0x180298bc7
            int64_t v418; // 0x180298bcc
            while (*(int32_t *)(v418 + v417) == *(int32_t *)(v417 + v331)) {
                // 0x180298bda
                int64_t v419; // 0x18029891c
                int64_t v420 = v419 + 1; // 0x180298bda
                v416 = v420 & 0xffffffff;
                if ((int32_t)v420 == 2) {
                    uint64_t v421 = v393 + 0xfffffbce; // 0x180298be7
                    v327 = v421 / 32 & 0x7ffffff;
                    int64_t v422 = v327 + v368;
                    if ((int32_t)v422 < 116) {
                        int64_t v423 = v421 & 31; // 0x180298bf4
                        int32_t v424 = *(int32_t *)((4 * v368 + 0x3fffffffc & 0x3fffffffc) + v331); // 0x180298c15
                        v329 = v422 + (int64_t)(llvm_ctlz_i32(v424, false) < (int32_t)v423);
                        v328 = v329;
                        if (v328 < 116) {
                            int64_t v425 = v329 + 0xffffffff; // 0x180298c77
                            v333 = v327;
                            v357 = v333 - 1;
                            if (v357 == (int32_t)v425) {
                                goto lab_0x180298cd3;
                            } else {
                                uint64_t v426 = 32 - v423; // 0x180298bfc
                                v349 = -1 << v426 & 0xffffffff;
                                v353 = v349 ^ 0xffffffff;
                                v351 = (int32_t)v426 & 31;
                                v355 = (int32_t)v421 & 31;
                                v337 = v368;
                                v335 = v425;
                                goto lab_0x180298c85_2;
                            }
                        } else {
                            goto lab_0x180298c31;
                        }
                    } else {
                        goto lab_0x180298c31;
                    }
                }
                v419 = v416;
                v417 = 4 * v419;
                int32_t v427 = *(int32_t *)(v417 + v331); // 0x180298bc7
                int32_t v428 = *(int32_t *)(v418 + v417); // 0x180298bcc
            }
        }
        uint64_t v429 = v393 + 0xfffffbcd; // 0x180298d1a
        int64_t v430 = v429 / 32 & 0x7ffffff; // 0x180298d2b
        int64_t v431 = v430 + v368;
        if ((int32_t)v431 < 116) {
            int64_t v432 = v429 & 31; // 0x180298d27
            int32_t v433 = *(int32_t *)((4 * v368 + 0x3fffffffc & 0x3fffffffc) + v331); // 0x180298d48
            int64_t v434 = v431 + (int64_t)(llvm_ctlz_i32(v433, false) < (int32_t)v432); // 0x180298d9d
            int32_t v435 = v434; // 0x180298da0
            if (v435 < 116) {
                int64_t v436 = v434 + 0xffffffff; // 0x180298daa
                int32_t v437 = v430;
                int32_t v438 = v437 - 1; // 0x180298dae
                if (v438 != (int32_t)v436) {
                    uint64_t v439 = 32 - v432; // 0x180298d2f
                    int64_t v440 = -1 << v439 & 0xffffffff; // 0x180298d3a
                    uint32_t v441 = (int32_t)v439 & 31; // 0x180298de0
                    uint32_t v442 = (int32_t)v429 & 31; // 0x180298de8
                    int64_t v443 = v436 & 0xffffffff;
                    int64_t v444 = v443 - v430; // 0x180298dbb
                    uint32_t v445 = (int32_t)v368; // 0x180298dc1
                    int64_t v446 = 0; // 0x180298dc3
                    if ((int32_t)v444 < v445) {
                        // 0x180298dc5
                        v446 = (int64_t)*(int32_t *)((4 * v444 & 0x3fffffffc) + v331);
                    }
                    int64_t v447 = v444 + 0xffffffff; // 0x180298dbe
                    int64_t v448 = 0; // 0x180298dd1
                    if ((int32_t)v447 < v445) {
                        // 0x180298dd3
                        v448 = (int64_t)*(int32_t *)((4 * v447 & 0x3fffffffc) + v331);
                    }
                    int64_t v449 = v448 & v440;
                    int64_t v450 = v441 == 0 ? v449 : (int64_t)((int32_t)v449 >> v441);
                    int64_t v451 = v446 & (v440 ^ 0xffffffff);
                    int64_t v452 = v442 == 0 ? v451 : (int64_t)((int32_t)v451 << v442);
                    *(int32_t *)(4 * v443 + v331) = (int32_t)(v450 | v452);
                    int64_t v453 = v443 + 0xffffffff; // 0x180298df3
                    while (v438 != (int32_t)v453) {
                        // 0x180298dfb
                        v443 = v453 & 0xffffffff;
                        v444 = v443 - v430;
                        v445 = (int32_t)(int64_t)v15;
                        v446 = 0;
                        if ((int32_t)v444 < v445) {
                            // 0x180298dc5
                            v446 = (int64_t)*(int32_t *)((4 * v444 & 0x3fffffffc) + v331);
                        }
                        // 0x180298dcf
                        v447 = v444 + 0xffffffff;
                        v448 = 0;
                        if ((int32_t)v447 < v445) {
                            // 0x180298dd3
                            v448 = (int64_t)*(int32_t *)((4 * v447 & 0x3fffffffc) + v331);
                        }
                        // 0x180298ddb
                        v449 = v448 & v440;
                        v450 = v441 == 0 ? v449 : (int64_t)((int32_t)v449 >> v441);
                        v451 = v446 & (v440 ^ 0xffffffff);
                        v452 = v442 == 0 ? v451 : (int64_t)((int32_t)v451 << v442);
                        *(int32_t *)(4 * v443 + v331) = (int32_t)(v450 | v452);
                        v453 = v443 + 0xffffffff;
                    }
                }
                int64_t v454 = 0; // 0x180298e0b
                if (v430 != 0) {
                    *(int32_t *)(4 * v454 + v331) = 0;
                    int64_t v455 = v454 + 1; // 0x180298e12
                    v454 = v455 & 0xffffffff;
                    while ((int32_t)v455 != v437) {
                        // 0x180298e0d
                        *(int32_t *)(4 * v454 + v331) = 0;
                        v455 = v454 + 1;
                        v454 = v455 & 0xffffffff;
                    }
                }
                // 0x180298e1a
                v15 = v435;
                v324 = v434;
                goto lab_0x180298cf5;
            } else {
                goto lab_0x180298d64;
            }
        } else {
            goto lab_0x180298d64;
        }
    }
  lab_0x180298a6a:
    // 0x180298a6a
    if ((int32_t)function_180287a40(a5, a6, v10) != 0) {
        // 0x180299b85
        function_180271834(0, 0, 0, 0, 0);
        __asm_int3(0, 0);
        return __asm_int3(0, 0);
    }
    goto lab_0x180299b48;
  lab_0x180298fd0:;
    int64_t v369 = v366 + 1; // 0x180298fd0
    int64_t v81 = 4 * v369 & 0x3fffffffc; // 0x180298fe0
    int64_t v79 = v367; // 0x180298fe0
    int64_t v82 = v369; // 0x180298fe0
    goto lab_0x180298fe6;
  lab_0x180298d64:
    // 0x180298d64
    v15 = 0;
    memcpy_s((int64_t *)&v91, 460, (int64_t *)&v84, 0);
    v324 = v15;
    goto lab_0x180298cf5;
  lab_0x180299b48:
    if (v6 != 0) {
        // 0x180299b4f
        function_18029c200((int64_t *)&v5);
    }
    int64_t result = function_18026ad50((int64_t)g731); // 0x180299b66
    __asm_movaps((int128_t)v2);
    return result;
  lab_0x180298fe6:;
    int32_t v35 = v77 > 0x80000000 ? v77 : 0; // 0x180298b80
    v78 = v79;
    int64_t v80 = v81;
    v18 = v82;
    int64_t v83; // bp-1476, 0x18029891c
    memcpy_s(&v83, 460, (int64_t *)&v84, (int32_t)v80);
    int64_t v34 = v35; // 0x180298ffc
    int64_t v85; // bp-548, 0x18029891c
    if (v35 < 0) {
        uint64_t v86 = 0xcccccccd * (int64_t)-v35;
        if (v86 >= 0x800000000) {
            int64_t v87 = v86 / 0x800000000;
            int64_t v88 = &v84; // 0x180299545
            v89 = v22 - 108;
            int64_t v90 = &v91;
            int64_t v92 = v22 + 1284;
            v93 = v87;
            v94 = v87;
            v95 = v80;
            v96 = v78;
            while (true) {
              lab_0x180299513:;
                int64_t v97 = v96;
                uint64_t v98 = v94;
                v99 = v98 < 38 ? v98 : 38;
                int64_t v100 = 4 * v99 + 0x3fffffffc & 0x3fffffffc; // 0x180299523
                int64_t v101 = (int64_t)*(char *)(v100 + 0x1802f3692); // 0x180299523
                int64_t v102 = (int64_t)*(char *)(v100 + 0x1802f3693); // 0x18029952c
                int64_t v103 = 4 * v101; // 0x180299537
                int64_t v104 = v102 + v101; // 0x18029953f
                function_18029db80(v88, 0, v103, v95);
                uint16_t v105 = *(int16_t *)(v100 + 0x1802f3690); // 0x180299562
                function_18029d4e0(v103 + v88, 4 * (int64_t)v105 + (int64_t)&g533, 4 * v102, v95);
                uint32_t v106 = (int32_t)v104; // 0x18029958e
                if (v106 > 1) {
                    uint32_t v107 = (int32_t)v97; // 0x180299619
                    if (v107 > 1) {
                        int32_t v108 = v106 < v107 ? v104 : v97;
                        int64_t v109 = v106 < v107 ? v97 : v104;
                        int64_t v110 = v109 & 0xffffffff; // 0x1802996f3
                        if (v108 == 0) {
                            // 0x180299822
                            v15 = 0;
                            v111 = v110;
                            v112 = 0;
                            goto lab_0x180299872;
                        } else {
                            int64_t v113 = v106 >= v107 ? &v91 : &v84; // 0x1802996c9
                            int64_t v114 = v106 >= v107 ? &v84 : &v91; // 0x1802996e8
                            int32_t v115 = v109;
                            int64_t v116 = 0x100000000 * v114 / 0x100000000;
                            int64_t v117 = 0;
                            int64_t v118 = 0;
                            int64_t v119 = v114;
                            int32_t v120 = 0;
                            int64_t v121 = 4 * v118; // 0x18029970c
                            uint32_t v122 = *(int32_t *)(v121 + v113); // 0x18029970c
                            int32_t * v123; // 0x18029891c
                            int32_t * v124; // 0x18029891c
                            int32_t v125; // 0x18029891c
                            int32_t v126; // 0x18029891c
                            int32_t v127; // 0x18029891c
                            int32_t v128; // 0x18029891c
                            int64_t v129; // 0x18029891c
                            int64_t v130; // 0x18029891c
                            int64_t v131; // 0x18029891c
                            int64_t v132; // 0x18029891c
                            int64_t v133; // 0x18029891c
                            int64_t v134; // 0x18029891c
                            int64_t v135; // 0x18029891c
                            int64_t v136; // 0x18029891c
                            int64_t v137; // 0x18029891c
                            int64_t v138; // 0x18029891c
                            int32_t v139; // 0x18029891c
                            int32_t v140; // 0x18029891c
                            int32_t v141; // 0x18029891c
                            int32_t v142; // 0x18029891c
                            int32_t v143; // 0x18029891c
                            int32_t v144; // 0x18029891c
                            int32_t v145; // 0x18029891c
                            int32_t v146; // 0x18029891c
                            int32_t v147; // 0x18029891c
                            int64_t v148; // 0x18029970c
                            int64_t v149; // 0x180299747
                            int32_t v150; // 0x180299749
                            int32_t * v151; // 0x18029971d
                            int64_t v152; // 0x180299725
                            int64_t v153; // 0x18029976d
                            int64_t v154; // 0x18029976d
                            uint32_t v155; // 0x180299770
                            uint64_t v156; // 0x180299784
                            int64_t v157; // 0x180299795
                            int64_t v158; // 0x18029979c
                            int32_t v159; // 0x180299749
                            int32_t v160; // 0x1802997b1
                            int64_t v161; // 0x1802997dc
                            uint64_t v162; // 0x1802997e2
                            if (v122 != 0) {
                                // 0x180299735
                                v146 = v120;
                                v136 = v118;
                                v131 = v117;
                                if (v115 != 0) {
                                    // 0x180299744
                                    v148 = v122;
                                    v149 = -v118 & 0xffffffff;
                                    v150 = v118;
                                    v125 = v150;
                                    v133 = v117;
                                    v134 = v118;
                                    v137 = v119;
                                    v139 = v120;
                                    v146 = v120;
                                    v136 = v118;
                                    v131 = v117;
                                    if (v150 != 115) {
                                        v128 = v125;
                                        v124 = (int32_t *)((4 * v134 & 0x3fffffffc) + v92);
                                        if (v128 != (int32_t)v133) {
                                            // 0x18029974f
                                            v126 = *v124;
                                            v140 = v139;
                                        } else {
                                            // 0x180299757
                                            *v124 = 0;
                                            v126 = 0;
                                            v140 = v128 + 1;
                                        }
                                        // 0x180299769
                                        v141 = v140;
                                        v153 = v134 + 1;
                                        v154 = v153 & 0xffffffff;
                                        v155 = *(int32_t *)((4 * (v134 + v149) & 0x3fffffffc) + v137);
                                        v156 = (int64_t)v155 * v148 + (int64_t)v126;
                                        *v124 = (int32_t)v156;
                                        v157 = v141;
                                        v158 = v156 / 0x100000000;
                                        while ((int32_t)(v153 - v118) != v115) {
                                            // 0x1802997a5
                                            v159 = v153;
                                            v125 = v159;
                                            v133 = v157;
                                            v129 = v158;
                                            v134 = v154;
                                            v137 = v116;
                                            v139 = v141;
                                            if (v159 == 115) {
                                                // break -> 0x1802997ac
                                                return 0;
                                            }
                                            v128 = v125;
                                            v124 = (int32_t *)((4 * v134 & 0x3fffffffc) + v92);
                                            if (v128 != (int32_t)v133) {
                                                // 0x18029974f
                                                v126 = *v124;
                                                v140 = v139;
                                            } else {
                                                // 0x180299757
                                                *v124 = 0;
                                                v126 = 0;
                                                v140 = v128 + 1;
                                            }
                                            // 0x180299769
                                            v141 = v140;
                                            v153 = v134 + 1;
                                            v154 = v153 & 0xffffffff;
                                            v155 = *(int32_t *)((4 * (v134 + v149) & 0x3fffffffc) + v137);
                                            v156 = (int64_t)v155 * v148 + v129 + (int64_t)v126;
                                            *v124 = (int32_t)v156;
                                            v157 = v141;
                                            v158 = v156 / 0x100000000;
                                        }
                                        // 0x1802997ac
                                        v142 = v141;
                                        v135 = v154;
                                        v130 = v158;
                                        v146 = v141;
                                        v136 = v154;
                                        v131 = v157;
                                        if (v156 >= 0x100000000) {
                                            v160 = v135;
                                            v14 = 0;
                                            if (v160 == 115) {
                                                goto lab_0x180299911_2;
                                            }
                                            // 0x1802997bb
                                            v143 = v142;
                                            v123 = (int32_t *)(4 * v135 + v92);
                                            if (v143 != v160) {
                                                // 0x1802997bb
                                                v127 = *v123;
                                                v144 = v143;
                                            } else {
                                                // 0x1802997c3
                                                *v123 = 0;
                                                v127 = 0;
                                                v144 = v160 + 1;
                                            }
                                            // 0x1802997d5
                                            v145 = v144;
                                            v161 = v135 + 1 & 0xffffffff;
                                            v162 = v130 + (int64_t)v127;
                                            *v123 = (int32_t)v162;
                                            v135 = v161;
                                            v130 = v162 / 0x100000000;
                                            while (v162 >= 0x100000000) {
                                                // 0x1802997b1
                                                v160 = v135;
                                                v14 = 0;
                                                if (v160 == 115) {
                                                    goto lab_0x180299911_2;
                                                }
                                                // 0x1802997bb
                                                v143 = v145;
                                                v123 = (int32_t *)(4 * v135 + v92);
                                                if (v143 != v160) {
                                                    // 0x1802997bb
                                                    v127 = *v123;
                                                    v144 = v143;
                                                } else {
                                                    // 0x1802997c3
                                                    *v123 = 0;
                                                    v127 = 0;
                                                    v144 = v160 + 1;
                                                }
                                                // 0x1802997d5
                                                v145 = v144;
                                                v161 = v135 + 1 & 0xffffffff;
                                                v162 = v130 + (int64_t)v127;
                                                *v123 = (int32_t)v162;
                                                v135 = v161;
                                                v130 = v162 / 0x100000000;
                                            }
                                            // 0x180299802
                                            v146 = v145;
                                            v136 = v161;
                                            v131 = v145;
                                        }
                                    }
                                }
                                // 0x180299802
                                v147 = v146;
                                v138 = v116;
                                v132 = v131;
                                v14 = 0;
                                if ((int32_t)v136 == 115) {
                                    goto lab_0x180299911_2;
                                }
                            } else {
                                // 0x180299714
                                v147 = v120;
                                v138 = v119;
                                v132 = v117;
                                if ((int32_t)v118 == (int32_t)v117) {
                                    // 0x18029971d
                                    v151 = (int32_t *)(v121 + v92);
                                    *v151 = *v151 & v122;
                                    v152 = v118 + 1;
                                    v147 = v152;
                                    v138 = v119;
                                    v132 = v152 & 0xffffffff;
                                }
                            }
                            int64_t v163 = v132;
                            int64_t v164 = v118 + 1; // 0x180299816
                            while ((int32_t)v164 != v108) {
                                // 0x18029970c
                                v117 = v163;
                                v118 = v164 & 0xffffffff;
                                v119 = v138;
                                v120 = v147;
                                v121 = 4 * v118;
                                v122 = *(int32_t *)(v121 + v113);
                                if (v122 != 0) {
                                    // 0x180299735
                                    v146 = v120;
                                    v136 = v118;
                                    v131 = v117;
                                    if (v115 != 0) {
                                        // 0x180299744
                                        v148 = v122;
                                        v149 = -v118 & 0xffffffff;
                                        v150 = v118;
                                        v125 = v150;
                                        v133 = v117;
                                        v134 = v118;
                                        v137 = v119;
                                        v139 = v120;
                                        v146 = v120;
                                        v136 = v118;
                                        v131 = v117;
                                        if (v150 != 115) {
                                            v128 = v125;
                                            v124 = (int32_t *)((4 * v134 & 0x3fffffffc) + v92);
                                            if (v128 != (int32_t)v133) {
                                                // 0x18029974f
                                                v126 = *v124;
                                                v140 = v139;
                                            } else {
                                                // 0x180299757
                                                *v124 = 0;
                                                v126 = 0;
                                                v140 = v128 + 1;
                                            }
                                            // 0x180299769
                                            v141 = v140;
                                            v153 = v134 + 1;
                                            v154 = v153 & 0xffffffff;
                                            v155 = *(int32_t *)((4 * (v134 + v149) & 0x3fffffffc) + v137);
                                            v156 = (int64_t)v155 * v148 + (int64_t)v126;
                                            *v124 = (int32_t)v156;
                                            v157 = v141;
                                            v158 = v156 / 0x100000000;
                                            while ((int32_t)(v153 - v118) != v115) {
                                                // 0x1802997a5
                                                v159 = v153;
                                                v125 = v159;
                                                v133 = v157;
                                                v129 = v158;
                                                v134 = v154;
                                                v137 = v116;
                                                v139 = v141;
                                                if (v159 == 115) {
                                                    // break -> 0x1802997ac
                                                    return 0;
                                                }
                                                v128 = v125;
                                                v124 = (int32_t *)((4 * v134 & 0x3fffffffc) + v92);
                                                if (v128 != (int32_t)v133) {
                                                    // 0x18029974f
                                                    v126 = *v124;
                                                    v140 = v139;
                                                } else {
                                                    // 0x180299757
                                                    *v124 = 0;
                                                    v126 = 0;
                                                    v140 = v128 + 1;
                                                }
                                                // 0x180299769
                                                v141 = v140;
                                                v153 = v134 + 1;
                                                v154 = v153 & 0xffffffff;
                                                v155 = *(int32_t *)((4 * (v134 + v149) & 0x3fffffffc) + v137);
                                                v156 = (int64_t)v155 * v148 + v129 + (int64_t)v126;
                                                *v124 = (int32_t)v156;
                                                v157 = v141;
                                                v158 = v156 / 0x100000000;
                                            }
                                            // 0x1802997ac
                                            v142 = v141;
                                            v135 = v154;
                                            v130 = v158;
                                            v146 = v141;
                                            v136 = v154;
                                            v131 = v157;
                                            if (v156 >= 0x100000000) {
                                                v160 = v135;
                                                v14 = 0;
                                                if (v160 == 115) {
                                                    goto lab_0x180299911_2;
                                                }
                                                // 0x1802997bb
                                                v143 = v142;
                                                v123 = (int32_t *)(4 * v135 + v92);
                                                if (v143 != v160) {
                                                    // 0x1802997bb
                                                    v127 = *v123;
                                                    v144 = v143;
                                                } else {
                                                    // 0x1802997c3
                                                    *v123 = 0;
                                                    v127 = 0;
                                                    v144 = v160 + 1;
                                                }
                                                // 0x1802997d5
                                                v145 = v144;
                                                v161 = v135 + 1 & 0xffffffff;
                                                v162 = v130 + (int64_t)v127;
                                                *v123 = (int32_t)v162;
                                                v135 = v161;
                                                v130 = v162 / 0x100000000;
                                                while (v162 >= 0x100000000) {
                                                    // 0x1802997b1
                                                    v160 = v135;
                                                    v14 = 0;
                                                    if (v160 == 115) {
                                                        goto lab_0x180299911_2;
                                                    }
                                                    // 0x1802997bb
                                                    v143 = v145;
                                                    v123 = (int32_t *)(4 * v135 + v92);
                                                    if (v143 != v160) {
                                                        // 0x1802997bb
                                                        v127 = *v123;
                                                        v144 = v143;
                                                    } else {
                                                        // 0x1802997c3
                                                        *v123 = 0;
                                                        v127 = 0;
                                                        v144 = v160 + 1;
                                                    }
                                                    // 0x1802997d5
                                                    v145 = v144;
                                                    v161 = v135 + 1 & 0xffffffff;
                                                    v162 = v130 + (int64_t)v127;
                                                    *v123 = (int32_t)v162;
                                                    v135 = v161;
                                                    v130 = v162 / 0x100000000;
                                                }
                                                // 0x180299802
                                                v146 = v145;
                                                v136 = v161;
                                                v131 = v145;
                                            }
                                        }
                                    }
                                    // 0x180299802
                                    v147 = v146;
                                    v138 = v116;
                                    v132 = v131;
                                    v14 = 0;
                                    if ((int32_t)v136 == 115) {
                                        goto lab_0x180299911_2;
                                    }
                                } else {
                                    // 0x180299714
                                    v147 = v120;
                                    v138 = v119;
                                    v132 = v117;
                                    if ((int32_t)v118 == (int32_t)v117) {
                                        // 0x18029971d
                                        v151 = (int32_t *)(v121 + v92);
                                        *v151 = *v151 & v122;
                                        v152 = v118 + 1;
                                        v147 = v152;
                                        v138 = v119;
                                        v132 = v152 & 0xffffffff;
                                    }
                                }
                                // 0x180299816
                                v163 = v132;
                                v164 = v118 + 1;
                            }
                            uint64_t v165 = 4 * v163 & 0x3fffffffc; // 0x180299825
                            v15 = v163;
                            v111 = v110;
                            v112 = v163;
                            if (v165 == 0) {
                                goto lab_0x180299872;
                            } else {
                                if (v165 > 460) {
                                    // 0x180299849
                                    function_18029db80(v90, 0, 460, v110);
                                    *(int32_t *)function_180279918(v90, 0, 460, v110) = 34;
                                    function_180271814(v90, 0, 460, v110);
                                    v166 = v110;
                                } else {
                                    // 0x18029983b
                                    function_18029d4e0(v90, (int64_t)&v85, v165, v110);
                                    v166 = v110;
                                }
                                goto lab_0x180299863;
                            }
                        }
                    } else {
                        // 0x180299622
                        v15 = v106;
                        int64_t v167 = 0; // 0x180299636
                        if (v104 != 0) {
                            if (v104 > 115) {
                                // 0x18029964f
                                function_18029db80(v90, 0, 460, v104);
                                *(int32_t *)function_180279918(v90, 0, 460, v104) = 34;
                                function_180271814(v90, 0, 460, v104);
                            } else {
                                // 0x180299641
                                function_18029d4e0(v90, v88, 4 * v104, v104);
                            }
                            // 0x180299669
                            v167 = v15;
                        }
                        int64_t v168 = v167;
                        v169 = v104;
                        v170 = 0;
                        v111 = v104;
                        v112 = v168;
                        int128_t v171; // 0x180299622
                        switch ((int32_t)v171) {
                            case 0: {
                                goto lab_0x1802995a4;
                            }
                            case 1: {
                                goto lab_0x180299872;
                            }
                            default: {
                                int32_t v172 = v168; // 0x18029967e
                                int64_t v173 = 0; // 0x180299681
                                v111 = v104;
                                v112 = v168;
                                if (v172 == 0) {
                                    goto lab_0x180299872;
                                } else {
                                    int32_t * v174 = (int32_t *)(4 * v173 + v89); // 0x180299690
                                    uint64_t v175 = ((int64_t)v91 & 0xffffffff) * (int64_t)*v174; // 0x18029969c
                                    *v174 = (int32_t)v175;
                                    int64_t v176 = v175 / 0x100000000; // 0x1802996a7
                                    int64_t v177 = v173 + 1; // 0x1802996ab
                                    int64_t v178 = v177 & 0xffffffff; // 0x1802996ab
                                    v179 = v176;
                                    v180 = v178;
                                    v173 = v178;
                                    while ((int32_t)v177 != v172) {
                                        // 0x180299690
                                        v174 = (int32_t *)(4 * v173 + v89);
                                        v175 = ((int64_t)v91 & 0xffffffff) * (int64_t)*v174 + v176;
                                        *v174 = (int32_t)v175;
                                        v176 = v175 / 0x100000000;
                                        v177 = v173 + 1;
                                        v178 = v177 & 0xffffffff;
                                        v179 = v176;
                                        v180 = v178;
                                        v173 = v178;
                                    }
                                    goto lab_0x1802995eb;
                                }
                            }
                        }
                    }
                } else {
                    int32_t v181 = v84; // 0x18029959d
                    v169 = v104;
                    v170 = 0;
                    if (v181 != 0) {
                        int32_t v182 = v97; // 0x1802995b6
                        int64_t v183 = 0; // 0x1802995b0
                        v111 = v104;
                        v112 = v97;
                        if (v182 == 0 || v181 == 1) {
                            goto lab_0x180299872;
                        } else {
                            int32_t * v184 = (int32_t *)(4 * v183 + v89); // 0x1802995c8
                            uint64_t v185 = ((int64_t)v84 & 0xffffffff) * (int64_t)*v184; // 0x1802995d4
                            *v184 = (int32_t)v185;
                            int64_t v186 = v185 / 0x100000000; // 0x1802995df
                            int64_t v187 = v183 + 1; // 0x1802995e3
                            int64_t v188 = v187 & 0xffffffff; // 0x1802995e3
                            v183 = v188;
                            v179 = v186;
                            v180 = v188;
                            while ((int32_t)v187 != v182) {
                                // 0x1802995c8
                                v184 = (int32_t *)(4 * v183 + v89);
                                v185 = ((int64_t)v84 & 0xffffffff) * (int64_t)*v184 + v186;
                                *v184 = (int32_t)v185;
                                v186 = v185 / 0x100000000;
                                v187 = v183 + 1;
                                v188 = v187 & 0xffffffff;
                                v183 = v188;
                                v179 = v186;
                                v180 = v188;
                            }
                            goto lab_0x1802995eb;
                        }
                    } else {
                        goto lab_0x1802995a4;
                    }
                }
            }
        }
      lab_0x180299894:;
        uint32_t v189 = -v35; // 0x1802998a3
        v16 = v78;
        if (v189 == 0) {
            goto lab_0x180299915;
        } else {
            uint32_t v190 = *(int32_t *)((4 * (int64_t)v189 + 0x3fffffffc & 0x3fffffffc) + 0x1802f3728); // 0x1802998aa
            v14 = 0;
            v16 = v78;
            switch (v190) {
                case 0: {
                    goto lab_0x180299911_2;
                }
                case 1: {
                    goto lab_0x180299915;
                }
                default: {
                    int32_t v191 = v78; // 0x1802998bb
                    v16 = v78;
                    if (v191 == 0) {
                        goto lab_0x180299915;
                    } else {
                        int64_t v192 = v22 - 108; // 0x1802998c9
                        int64_t v193 = 0; // 0x18029891c
                        int32_t * v194 = (int32_t *)(4 * v193 + v192); // 0x1802998c9
                        uint64_t v195 = (int64_t)*v194 * (int64_t)v190; // 0x1802998d5
                        *v194 = (int32_t)v195;
                        int64_t v196 = v195 / 0x100000000; // 0x1802998e0
                        int64_t v197 = v193 + 1; // 0x1802998e4
                        v193 = v197 & 0xffffffff;
                        while ((int32_t)v197 != v191) {
                            // 0x1802998c9
                            v194 = (int32_t *)(4 * v193 + v192);
                            v195 = (int64_t)*v194 * (int64_t)v190 + v196;
                            *v194 = (int32_t)v195;
                            v196 = v195 / 0x100000000;
                            v197 = v193 + 1;
                            v193 = v197 & 0xffffffff;
                        }
                        int32_t v198 = v196; // 0x1802998ec
                        uint32_t v199 = v15;
                        if (v198 == 0) {
                            // 0x180299908
                            v16 = v199;
                            goto lab_0x180299915;
                        } else {
                            // 0x1802998f1
                            v14 = 0;
                            if (v199 < 115) {
                                // 0x1802998f7
                                *(int32_t *)(4 * (int64_t)v199 + v192) = v198;
                                v14 = v15 + 1;
                            }
                            goto lab_0x180299911_2;
                        }
                    }
                }
            }
        }
    } else {
        int64_t v200 = v18; // 0x180299014
        uint64_t v201 = 0xcccccccd * v34;
        v202 = 0;
        v203 = v200;
        if (v201 >= 0x800000000) {
            int64_t v204 = v201 / 0x800000000;
            v205 = v204;
            int64_t v206 = &v84; // 0x180299065
            v207 = v22 + 356;
            int64_t v208 = &v83;
            int64_t v209 = v22 + 1284;
            v210 = v205;
            v211 = v204;
            v212 = v80;
            v213 = v200;
            while (true) {
              lab_0x180299033:;
                int64_t v214 = v213;
                uint64_t v215 = v211;
                v216 = v210;
                v217 = v215 < 38 ? v215 : 38;
                int64_t v218 = 4 * v217 + 0x3fffffffc & 0x3fffffffc; // 0x180299043
                int64_t v219 = (int64_t)*(char *)(v218 + 0x1802f3692); // 0x180299043
                int64_t v220 = (int64_t)*(char *)(v218 + 0x1802f3693); // 0x18029904c
                int64_t v221 = 4 * v219; // 0x180299057
                int64_t v222 = v220 + v219; // 0x18029905f
                function_18029db80(v206, 0, v221, v212);
                uint16_t v223 = *(int16_t *)(v218 + 0x1802f3690); // 0x180299082
                function_18029d4e0(v221 + v206, 4 * (int64_t)v223 + (int64_t)&g533, 4 * v220, v212);
                uint32_t v224 = (int32_t)v222; // 0x1802990ae
                if (v224 > 1) {
                    uint32_t v225 = (int32_t)v214; // 0x1802991a3
                    if (v225 > 1) {
                        int32_t v226 = v224 < v225 ? v222 : v214;
                        int64_t v227 = v224 < v225 ? v214 : v222;
                        int64_t v228 = v227 & 0xffffffff; // 0x18029929a
                        if (v226 == 0) {
                            // 0x1802993c9
                            v18 = 0;
                            v229 = v228;
                            v230 = 0;
                            goto lab_0x180299427;
                        } else {
                            int64_t v231 = v224 >= v225 ? v208 : v206; // 0x18029926d
                            int64_t v232 = v224 >= v225 ? v206 : v208; // 0x18029928f
                            int32_t v233 = v227;
                            int64_t v234 = 0x100000000 * v232 / 0x100000000;
                            int64_t v235 = 0x100000000 * v231 / 0x100000000;
                            int64_t v236 = 0;
                            int64_t v237 = 0;
                            int64_t v238 = v232;
                            int64_t v239 = v231;
                            int32_t v240 = 0;
                            int64_t v241 = 4 * v237; // 0x1802992b3
                            uint32_t v242 = *(int32_t *)(v241 + v239); // 0x1802992b3
                            int32_t * v243; // 0x18029891c
                            int32_t * v244; // 0x18029891c
                            int32_t v245; // 0x18029891c
                            int32_t v246; // 0x18029891c
                            int32_t v247; // 0x18029891c
                            int32_t v248; // 0x18029891c
                            int64_t v249; // 0x18029891c
                            int64_t v250; // 0x18029891c
                            int64_t v251; // 0x18029891c
                            int64_t v252; // 0x18029891c
                            int64_t v253; // 0x18029891c
                            int64_t v254; // 0x18029891c
                            int64_t v255; // 0x18029891c
                            int64_t v256; // 0x18029891c
                            int64_t v257; // 0x18029891c
                            int64_t v258; // 0x18029891c
                            int64_t v259; // 0x18029891c
                            int32_t v260; // 0x18029891c
                            int32_t v261; // 0x18029891c
                            int32_t v262; // 0x18029891c
                            int32_t v263; // 0x18029891c
                            int32_t v264; // 0x18029891c
                            int32_t v265; // 0x18029891c
                            int32_t v266; // 0x18029891c
                            int32_t v267; // 0x18029891c
                            int32_t v268; // 0x18029891c
                            int64_t v269; // 0x1802992b3
                            int64_t v270; // 0x1802992ee
                            int32_t v271; // 0x1802992f0
                            int32_t * v272; // 0x1802992c4
                            int64_t v273; // 0x1802992cc
                            int64_t v274; // 0x180299314
                            int64_t v275; // 0x180299314
                            uint32_t v276; // 0x180299317
                            uint64_t v277; // 0x18029932b
                            int64_t v278; // 0x18029933c
                            int64_t v279; // 0x180299343
                            int32_t v280; // 0x1802992f0
                            int32_t v281; // 0x180299358
                            int64_t v282; // 0x180299383
                            uint64_t v283; // 0x180299389
                            if (v242 != 0) {
                                // 0x1802992dc
                                v267 = v240;
                                v254 = v237;
                                v251 = v236;
                                if (v233 != 0) {
                                    // 0x1802992eb
                                    v269 = v242;
                                    v270 = -v237 & 0xffffffff;
                                    v271 = v237;
                                    v245 = v271;
                                    v253 = v236;
                                    v255 = v237;
                                    v258 = v238;
                                    v260 = v240;
                                    v267 = v240;
                                    v254 = v237;
                                    v251 = v236;
                                    if (v271 != 115) {
                                        v248 = v245;
                                        v244 = (int32_t *)((4 * v255 & 0x3fffffffc) + v209);
                                        if (v248 != (int32_t)v253) {
                                            // 0x1802992f6
                                            v246 = *v244;
                                            v261 = v260;
                                        } else {
                                            // 0x1802992fe
                                            *v244 = 0;
                                            v246 = 0;
                                            v261 = v248 + 1;
                                        }
                                        // 0x180299310
                                        v262 = v261;
                                        v274 = v255 + 1;
                                        v275 = v274 & 0xffffffff;
                                        v276 = *(int32_t *)((4 * (v255 + v270) & 0x3fffffffc) + v258);
                                        v277 = (int64_t)v246 + (int64_t)v276 * v269;
                                        *v244 = (int32_t)v277;
                                        v278 = v262;
                                        v279 = v277 / 0x100000000;
                                        while ((int32_t)(v274 - v237) != v233) {
                                            // 0x18029934c
                                            v280 = v274;
                                            v245 = v280;
                                            v253 = v278;
                                            v249 = v279;
                                            v255 = v275;
                                            v258 = v234;
                                            v260 = v262;
                                            if (v280 == 115) {
                                                // break -> 0x180299353
                                                return 0;
                                            }
                                            v248 = v245;
                                            v244 = (int32_t *)((4 * v255 & 0x3fffffffc) + v209);
                                            if (v248 != (int32_t)v253) {
                                                // 0x1802992f6
                                                v246 = *v244;
                                                v261 = v260;
                                            } else {
                                                // 0x1802992fe
                                                *v244 = 0;
                                                v246 = 0;
                                                v261 = v248 + 1;
                                            }
                                            // 0x180299310
                                            v262 = v261;
                                            v274 = v255 + 1;
                                            v275 = v274 & 0xffffffff;
                                            v276 = *(int32_t *)((4 * (v255 + v270) & 0x3fffffffc) + v258);
                                            v277 = v249 + (int64_t)v246 + (int64_t)v276 * v269;
                                            *v244 = (int32_t)v277;
                                            v278 = v262;
                                            v279 = v277 / 0x100000000;
                                        }
                                        // 0x180299353
                                        v263 = v262;
                                        v256 = v275;
                                        v250 = v279;
                                        v267 = v262;
                                        v254 = v275;
                                        v251 = v278;
                                        if (v277 >= 0x100000000) {
                                            v281 = v256;
                                            v284 = 0;
                                            if (v281 == 115) {
                                                goto lab_0x1802994e9_2;
                                            }
                                            // 0x180299362
                                            v264 = v263;
                                            v243 = (int32_t *)(4 * v256 + v209);
                                            if (v264 != v281) {
                                                // 0x180299362
                                                v247 = *v243;
                                                v265 = v264;
                                            } else {
                                                // 0x18029936a
                                                *v243 = 0;
                                                v247 = 0;
                                                v265 = v281 + 1;
                                            }
                                            // 0x18029937c
                                            v266 = v265;
                                            v282 = v256 + 1 & 0xffffffff;
                                            v283 = v250 + (int64_t)v247;
                                            *v243 = (int32_t)v283;
                                            v256 = v282;
                                            v250 = v283 / 0x100000000;
                                            while (v283 >= 0x100000000) {
                                                // 0x180299358
                                                v281 = v256;
                                                v284 = 0;
                                                if (v281 == 115) {
                                                    goto lab_0x1802994e9_2;
                                                }
                                                // 0x180299362
                                                v264 = v266;
                                                v243 = (int32_t *)(4 * v256 + v209);
                                                if (v264 != v281) {
                                                    // 0x180299362
                                                    v247 = *v243;
                                                    v265 = v264;
                                                } else {
                                                    // 0x18029936a
                                                    *v243 = 0;
                                                    v247 = 0;
                                                    v265 = v281 + 1;
                                                }
                                                // 0x18029937c
                                                v266 = v265;
                                                v282 = v256 + 1 & 0xffffffff;
                                                v283 = v250 + (int64_t)v247;
                                                *v243 = (int32_t)v283;
                                                v256 = v282;
                                                v250 = v283 / 0x100000000;
                                            }
                                            // 0x1802993a9
                                            v267 = v266;
                                            v254 = v282;
                                            v251 = v266;
                                        }
                                    }
                                }
                                // 0x1802993a9
                                v268 = v267;
                                v257 = v235;
                                v259 = v234;
                                v252 = v251;
                                v284 = 0;
                                if ((int32_t)v254 == 115) {
                                    goto lab_0x1802994e9_2;
                                }
                            } else {
                                // 0x1802992bb
                                v268 = v240;
                                v257 = v239;
                                v259 = v238;
                                v252 = v236;
                                if ((int32_t)v237 == (int32_t)v236) {
                                    // 0x1802992c4
                                    v272 = (int32_t *)(v241 + v209);
                                    *v272 = *v272 & v242;
                                    v273 = v237 + 1;
                                    v268 = v273;
                                    v257 = v239;
                                    v259 = v238;
                                    v252 = v273 & 0xffffffff;
                                }
                            }
                            int64_t v285 = v252;
                            int64_t v286 = v237 + 1; // 0x1802993bd
                            while ((int32_t)v286 != v226) {
                                // 0x1802992b3
                                v236 = v285;
                                v237 = v286 & 0xffffffff;
                                v238 = v259;
                                v239 = v257;
                                v240 = v268;
                                v241 = 4 * v237;
                                v242 = *(int32_t *)(v241 + v239);
                                if (v242 != 0) {
                                    // 0x1802992dc
                                    v267 = v240;
                                    v254 = v237;
                                    v251 = v236;
                                    if (v233 != 0) {
                                        // 0x1802992eb
                                        v269 = v242;
                                        v270 = -v237 & 0xffffffff;
                                        v271 = v237;
                                        v245 = v271;
                                        v253 = v236;
                                        v255 = v237;
                                        v258 = v238;
                                        v260 = v240;
                                        v267 = v240;
                                        v254 = v237;
                                        v251 = v236;
                                        if (v271 != 115) {
                                            v248 = v245;
                                            v244 = (int32_t *)((4 * v255 & 0x3fffffffc) + v209);
                                            if (v248 != (int32_t)v253) {
                                                // 0x1802992f6
                                                v246 = *v244;
                                                v261 = v260;
                                            } else {
                                                // 0x1802992fe
                                                *v244 = 0;
                                                v246 = 0;
                                                v261 = v248 + 1;
                                            }
                                            // 0x180299310
                                            v262 = v261;
                                            v274 = v255 + 1;
                                            v275 = v274 & 0xffffffff;
                                            v276 = *(int32_t *)((4 * (v255 + v270) & 0x3fffffffc) + v258);
                                            v277 = (int64_t)v246 + (int64_t)v276 * v269;
                                            *v244 = (int32_t)v277;
                                            v278 = v262;
                                            v279 = v277 / 0x100000000;
                                            while ((int32_t)(v274 - v237) != v233) {
                                                // 0x18029934c
                                                v280 = v274;
                                                v245 = v280;
                                                v253 = v278;
                                                v249 = v279;
                                                v255 = v275;
                                                v258 = v234;
                                                v260 = v262;
                                                if (v280 == 115) {
                                                    // break -> 0x180299353
                                                    return 0;
                                                }
                                                v248 = v245;
                                                v244 = (int32_t *)((4 * v255 & 0x3fffffffc) + v209);
                                                if (v248 != (int32_t)v253) {
                                                    // 0x1802992f6
                                                    v246 = *v244;
                                                    v261 = v260;
                                                } else {
                                                    // 0x1802992fe
                                                    *v244 = 0;
                                                    v246 = 0;
                                                    v261 = v248 + 1;
                                                }
                                                // 0x180299310
                                                v262 = v261;
                                                v274 = v255 + 1;
                                                v275 = v274 & 0xffffffff;
                                                v276 = *(int32_t *)((4 * (v255 + v270) & 0x3fffffffc) + v258);
                                                v277 = v249 + (int64_t)v246 + (int64_t)v276 * v269;
                                                *v244 = (int32_t)v277;
                                                v278 = v262;
                                                v279 = v277 / 0x100000000;
                                            }
                                            // 0x180299353
                                            v263 = v262;
                                            v256 = v275;
                                            v250 = v279;
                                            v267 = v262;
                                            v254 = v275;
                                            v251 = v278;
                                            if (v277 >= 0x100000000) {
                                                v281 = v256;
                                                v284 = 0;
                                                if (v281 == 115) {
                                                    goto lab_0x1802994e9_2;
                                                }
                                                // 0x180299362
                                                v264 = v263;
                                                v243 = (int32_t *)(4 * v256 + v209);
                                                if (v264 != v281) {
                                                    // 0x180299362
                                                    v247 = *v243;
                                                    v265 = v264;
                                                } else {
                                                    // 0x18029936a
                                                    *v243 = 0;
                                                    v247 = 0;
                                                    v265 = v281 + 1;
                                                }
                                                // 0x18029937c
                                                v266 = v265;
                                                v282 = v256 + 1 & 0xffffffff;
                                                v283 = v250 + (int64_t)v247;
                                                *v243 = (int32_t)v283;
                                                v256 = v282;
                                                v250 = v283 / 0x100000000;
                                                while (v283 >= 0x100000000) {
                                                    // 0x180299358
                                                    v281 = v256;
                                                    v284 = 0;
                                                    if (v281 == 115) {
                                                        goto lab_0x1802994e9_2;
                                                    }
                                                    // 0x180299362
                                                    v264 = v266;
                                                    v243 = (int32_t *)(4 * v256 + v209);
                                                    if (v264 != v281) {
                                                        // 0x180299362
                                                        v247 = *v243;
                                                        v265 = v264;
                                                    } else {
                                                        // 0x18029936a
                                                        *v243 = 0;
                                                        v247 = 0;
                                                        v265 = v281 + 1;
                                                    }
                                                    // 0x18029937c
                                                    v266 = v265;
                                                    v282 = v256 + 1 & 0xffffffff;
                                                    v283 = v250 + (int64_t)v247;
                                                    *v243 = (int32_t)v283;
                                                    v256 = v282;
                                                    v250 = v283 / 0x100000000;
                                                }
                                                // 0x1802993a9
                                                v267 = v266;
                                                v254 = v282;
                                                v251 = v266;
                                            }
                                        }
                                    }
                                    // 0x1802993a9
                                    v268 = v267;
                                    v257 = v235;
                                    v259 = v234;
                                    v252 = v251;
                                    v284 = 0;
                                    if ((int32_t)v254 == 115) {
                                        goto lab_0x1802994e9_2;
                                    }
                                } else {
                                    // 0x1802992bb
                                    v268 = v240;
                                    v257 = v239;
                                    v259 = v238;
                                    v252 = v236;
                                    if ((int32_t)v237 == (int32_t)v236) {
                                        // 0x1802992c4
                                        v272 = (int32_t *)(v241 + v209);
                                        *v272 = *v272 & v242;
                                        v273 = v237 + 1;
                                        v268 = v273;
                                        v257 = v239;
                                        v259 = v238;
                                        v252 = v273 & 0xffffffff;
                                    }
                                }
                                // 0x1802993bd
                                v285 = v252;
                                v286 = v237 + 1;
                            }
                            uint64_t v287 = 4 * v285 & 0x3fffffffc; // 0x1802993cc
                            v18 = v285;
                            v229 = v228;
                            v230 = v285;
                            if (v287 == 0) {
                                goto lab_0x180299427;
                            } else {
                                if (v287 < 461) {
                                    // 0x1802993ed
                                    function_18029d4e0(v208, (int64_t)&v85, v287, v228);
                                    v288 = v228;
                                } else {
                                    // 0x1802993fb
                                    function_18029db80(v208, 0, 460, v228);
                                    *(int32_t *)function_180279918(v208, 0, 460, v228) = 34;
                                    function_180271814(v208, 0, 460, v228);
                                    v288 = v228;
                                }
                                goto lab_0x180299415;
                            }
                        }
                    } else {
                        // 0x1802991ac
                        v18 = v224;
                        int64_t v289 = 0; // 0x1802991c6
                        if (v222 != 0) {
                            if (v222 < 116) {
                                // 0x1802991d9
                                function_18029d4e0(v208, v206, 4 * v222, v222);
                            } else {
                                // 0x1802991e7
                                function_18029db80(v208, 0, 460, v222);
                                *(int32_t *)function_180279918(v208, 0, 460, v222) = 34;
                                function_180271814(v208, 0, 460, v222);
                            }
                            // 0x180299201
                            v289 = v18;
                        }
                        int64_t v290 = v289;
                        v291 = v222;
                        v292 = 0;
                        v229 = v222;
                        v230 = v290;
                        int64_t v293; // 0x1802991ac
                        switch ((int32_t)v293) {
                            case 0: {
                                goto lab_0x1802990c4;
                            }
                            case 1: {
                                goto lab_0x180299427;
                            }
                            default: {
                                int32_t v294 = v290; // 0x180299219
                                int64_t v295 = 0; // 0x18029921c
                                v229 = v222;
                                v230 = v290;
                                if (v294 == 0) {
                                    goto lab_0x180299427;
                                } else {
                                    int32_t * v296 = (int32_t *)(4 * v295 + v207); // 0x18029922b
                                    uint64_t v297 = (v83 & 0xffffffff) * (int64_t)*v296; // 0x18029923a
                                    *v296 = (int32_t)v297;
                                    int64_t v298 = v297 / 0x100000000; // 0x180299248
                                    int64_t v299 = v295 + 1; // 0x18029924c
                                    int64_t v300 = v299 & 0xffffffff; // 0x18029924c
                                    v301 = v298;
                                    v302 = v300;
                                    v295 = v300;
                                    while ((int32_t)v299 != v294) {
                                        // 0x18029922b
                                        v296 = (int32_t *)(4 * v295 + v207);
                                        v297 = (v83 & 0xffffffff) * (int64_t)*v296 + v298;
                                        *v296 = (int32_t)v297;
                                        v298 = v297 / 0x100000000;
                                        v299 = v295 + 1;
                                        v300 = v299 & 0xffffffff;
                                        v301 = v298;
                                        v302 = v300;
                                        v295 = v300;
                                    }
                                    goto lab_0x180299163;
                                }
                            }
                        }
                    }
                } else {
                    int128_t v303 = v84; // 0x1802990b7
                    int32_t v304 = v303; // 0x1802990bd
                    v291 = v222;
                    v292 = 0;
                    if (v304 != 0) {
                        int64_t v305 = (int64_t)v303 & 0xffffffff; // 0x1802990b7
                        int32_t v306 = v214; // 0x180299128
                        int64_t v307 = 0; // 0x180299122
                        v229 = v222;
                        v230 = v214;
                        if (v306 == 0 || v304 == 1) {
                            goto lab_0x180299427;
                        } else {
                            int32_t * v308 = (int32_t *)(4 * v307 + v207); // 0x18029913a
                            uint64_t v309 = v305 * (int64_t)*v308; // 0x180299149
                            *v308 = (int32_t)v309;
                            int64_t v310 = v309 / 0x100000000; // 0x180299157
                            int64_t v311 = v307 + 1; // 0x18029915b
                            int64_t v312 = v311 & 0xffffffff; // 0x18029915b
                            v307 = v312;
                            v301 = v310;
                            v302 = v312;
                            while ((int32_t)v311 != v306) {
                                // 0x18029913a
                                v308 = (int32_t *)(4 * v307 + v207);
                                v309 = v305 * (int64_t)*v308 + v310;
                                *v308 = (int32_t)v309;
                                v310 = v309 / 0x100000000;
                                v311 = v307 + 1;
                                v312 = v311 & 0xffffffff;
                                v307 = v312;
                                v301 = v310;
                                v302 = v312;
                            }
                            goto lab_0x180299163;
                        }
                    } else {
                        goto lab_0x1802990c4;
                    }
                }
            }
        }
      lab_0x180299450:;
        uint32_t v313 = -10 * v202 + v35; // 0x18029945f
        v17 = v203;
        v19 = v78;
        if (v313 == 0) {
            goto lab_0x18029991c;
        } else {
            uint32_t v314 = *(int32_t *)((4 * (int64_t)v313 + 0x3fffffffc & 0x3fffffffc) + 0x1802f3728); // 0x18029946a
            v284 = 0;
            v17 = v203;
            v19 = v78;
            switch (v314) {
                case 0: {
                    goto lab_0x1802994e9_2;
                }
                case 1: {
                    goto lab_0x18029991c;
                }
                default: {
                    int32_t v315 = v203; // 0x18029947f
                    v17 = v203;
                    v19 = v78;
                    if (v315 == 0) {
                        goto lab_0x18029991c;
                    } else {
                        int64_t v316 = v22 + 356; // 0x180299491
                        int64_t v317 = 0; // 0x18029891c
                        int32_t * v318 = (int32_t *)(4 * v317 + v316); // 0x180299491
                        uint64_t v319 = (int64_t)*v318 * (int64_t)v314; // 0x1802994a0
                        *v318 = (int32_t)v319;
                        int64_t v320 = v319 / 0x100000000; // 0x1802994ae
                        int64_t v321 = v317 + 1; // 0x1802994b2
                        v317 = v321 & 0xffffffff;
                        while ((int32_t)v321 != v315) {
                            // 0x180299491
                            v318 = (int32_t *)(4 * v317 + v316);
                            v319 = (int64_t)*v318 * (int64_t)v314 + v320;
                            *v318 = (int32_t)v319;
                            v320 = v319 / 0x100000000;
                            v321 = v317 + 1;
                            v317 = v321 & 0xffffffff;
                        }
                        int32_t v322 = v320; // 0x1802994ba
                        v16 = v78;
                        if (v322 == 0) {
                            goto lab_0x180299915;
                        } else {
                            uint32_t v323 = v18; // 0x1802994c3
                            v284 = 0;
                            if (v323 < 115) {
                                // 0x1802994cc
                                *(int32_t *)(4 * (int64_t)v323 + v316) = v322;
                                v284 = v18 + 1;
                            }
                            goto lab_0x1802994e9_2;
                        }
                    }
                }
            }
        }
    }
  lab_0x180298cf5:
    // 0x180298cf5
    v84 = 2;
    v81 = 4;
    v79 = v324;
    v82 = 1;
    goto lab_0x180298fe6;
  lab_0x180299915:
    // 0x180299915
    v17 = v18;
    v19 = v16;
    goto lab_0x18029991c;
  lab_0x18029991c:;
    int32_t v20 = v19; // 0x180299923
    if (v20 != 0) {
        int64_t v21 = v22 - 108; // 0x18029992e
        int64_t v23 = 0; // 0x18029891c
        int32_t * v24 = (int32_t *)(4 * v23 + v21); // 0x18029992e
        uint64_t v25 = 10 * (int64_t)*v24; // 0x18029993a
        *v24 = (int32_t)v25;
        int64_t v26 = v23 + 1; // 0x180299943
        int64_t v27 = v25 / 0x100000000; // 0x180299946
        v23 = v26 & 0xffffffff;
        while ((int32_t)v26 != v20) {
            // 0x18029992e
            v24 = (int32_t *)(4 * v23 + v21);
            v25 = 10 * (int64_t)*v24 + v27;
            *v24 = (int32_t)v25;
            v26 = v23 + 1;
            v27 = v25 / 0x100000000;
            v23 = v26 & 0xffffffff;
        }
        int32_t v28 = v27; // 0x18029994f
        if (v28 != 0) {
            uint32_t v29 = v15; // 0x180299954
            if (v29 >= 115) {
                // 0x180299968
                v15 = 0;
            } else {
                // 0x18029995a
                *(int32_t *)(4 * (int64_t)v29 + v21) = v28;
                v15++;
            }
        }
    }
    int64_t v30 = function_18027cb90(&v15, &v18); // 0x180299977
    int32_t v31 = v30; // 0x180299984
    int64_t v32; // 0x18029891c
    int64_t v33; // 0x18029891c
    if (v31 != 10) {
        if (v31 != 0) {
            // 0x1802999fc
            *(char *)a5 = (char)v30 + 48;
            v33 = a5 + 1;
            v32 = v34;
        } else {
            // 0x1802999f7
            v33 = a5;
            v32 = v35 - 1;
        }
    } else {
        int64_t v36 = v35 + 1; // 0x180299989
        *(char *)a5 = 49;
        int64_t v37 = a5 + 1; // 0x18029998f
        int32_t v38 = v17; // 0x180299993
        v33 = v37;
        v32 = v36;
        if (v38 != 0) {
            int64_t v39 = v22 + 356; // 0x18029999e
            int64_t v40 = 0; // 0x18029891c
            int32_t * v41 = (int32_t *)(4 * v40 + v39); // 0x18029999e
            uint64_t v42 = 10 * (int64_t)*v41; // 0x1802999ad
            *v41 = (int32_t)v42;
            int64_t v43 = v40 + 1; // 0x1802999b9
            int64_t v44 = v42 / 0x100000000; // 0x1802999bc
            v40 = v43 & 0xffffffff;
            while ((int32_t)v43 != v38) {
                // 0x18029999e
                v41 = (int32_t *)(4 * v40 + v39);
                v42 = 10 * (int64_t)*v41 + v44;
                *v41 = (int32_t)v42;
                v43 = v40 + 1;
                v44 = v42 / 0x100000000;
                v40 = v43 & 0xffffffff;
            }
            int32_t v45 = v44; // 0x1802999c5
            v33 = v37;
            v32 = v36;
            if (v45 != 0) {
                uint32_t v46 = v18; // 0x1802999ca
                if (v46 >= 115) {
                    // 0x1802999ea
                    v18 = 0;
                    v33 = v37;
                    v32 = v36;
                } else {
                    // 0x1802999d3
                    *(int32_t *)(4 * (int64_t)v46 + v39) = v45;
                    v18++;
                    v33 = v37;
                    v32 = v36;
                }
            }
        }
    }
    int32_t v47 = v32; // 0x180299a09
    *(int32_t *)(a4 + 4) = v47;
    int64_t v48 = v49; // 0x180299a0d
    int64_t v50 = v48; // 0x180299a14
    if (v47 > -1 == v49 > -1) {
        // 0x180299a1d
        v50 = v48;
        if ((int32_t)v4 == 0) {
            // 0x180299a24
            v50 = v32 + v48 & 0xffffffff;
        }
    }
    uint64_t v51 = v50;
    uint64_t v52 = a6 - 1; // 0x180299a30
    int64_t v53 = (v52 < v51 ? v52 : v51) + a5; // 0x180299a3a
    int64_t v54 = v33; // 0x180299a43
    if (v33 != v53) {
        int64_t v55 = &v15; // 0x180299973
        int64_t v56 = v19 & -256 | 48; // 0x180299981
        int64_t v57 = v22 - 108;
        int64_t v58 = v33;
        int64_t v59 = 0; // 0x180299a56
        v54 = v58;
        while (v15 != 0) {
            int32_t * v60 = (int32_t *)(4 * v59 + v57); // 0x180299a62
            uint64_t v61 = 0x3b9aca00 * (int64_t)*v60; // 0x180299a71
            *v60 = (int32_t)v61;
            int64_t v62 = v61 / 0x100000000; // 0x180299a7c
            int64_t v63 = v59 + 1; // 0x180299a80
            v59 = v63 & 0xffffffff;
            while (v15 != (int32_t)v63) {
                // 0x180299a62
                v60 = (int32_t *)(4 * v59 + v57);
                v61 = 0x3b9aca00 * (int64_t)*v60 + v62;
                *v60 = (int32_t)v61;
                v62 = v61 / 0x100000000;
                v63 = v59 + 1;
                v59 = v63 & 0xffffffff;
            }
            int32_t v64 = v62; // 0x180299a88
            if (v64 != 0) {
                uint32_t v65 = v15; // 0x180299a8d
                if (v65 >= 115) {
                    // 0x180299aa1
                    v15 = 0;
                } else {
                    // 0x180299a93
                    *(int32_t *)(4 * (int64_t)v65 + v57) = v64;
                    v15++;
                }
            }
            int64_t v66 = function_18027cb90(&v15, &v18); // 0x180299ab0
            int64_t v67 = v53 - v58; // 0x180299abb
            int64_t v68 = 8;
            int64_t v69 = v66;
            int64_t v70 = 0xcccccccd * (v69 & 0xffffffff) / 0x800000000; // 0x180299ac9
            int64_t v71 = (v69 - 2 * ((4 * v70 & 252 | v55 & 0xffffff00) + v70) & 255 | v69 & 0xffffff00) + v56; // 0x180299adc
            if ((int32_t)v67 > (int32_t)v68) {
                // 0x180299af2
                *(char *)(v68 + v58) = (char)v71;
            }
            int64_t v72 = v68 + 0xffffffff; // 0x180299afb
            int64_t v73 = v71 & 0xffffffff; // 0x180299b01
            while ((int32_t)v72 != -1) {
                // 0x180299ac4
                v68 = v72 & 0xffffffff;
                v69 = v70;
                v70 = 0xcccccccd * (v69 & 0xffffffff) / 0x800000000;
                v71 = (v69 - 2 * ((4 * v70 & 252 | v73 & 0xffffff00) + v70) & 255 | v69 & 0xffffff00) + v56;
                if ((int32_t)v67 > (int32_t)v68) {
                    // 0x180299af2
                    *(char *)(v68 + v58) = (char)v71;
                }
                // 0x180299af8
                v72 = v68 + 0xffffffff;
                v73 = v71 & 0xffffffff;
            }
            int64_t v74 = v67 - 9; // 0x180299b09
            int64_t v75 = (v74 < 0 == (8 - v67 & v67) < 0 == (v74 != 0) ? 9 : v67) + v58; // 0x180299b10
            v54 = v75;
            if (v75 == v53) {
                // break -> 0x180299b20
                return 0;
            }
            v58 = v75;
            v59 = 0;
            v54 = v58;
        }
    }
    // 0x180299b20
    *(char *)v54 = 0;
    v4 = 0;
    function_18029c170((int32_t *)&v4, v76, 0x8001f);
    goto lab_0x180299b48;
  lab_0x180298c31:
    // 0x180298c31
    v15 = 0;
    memcpy_s((int64_t *)&v91, 460, (int64_t *)&v84, 0);
    uint32_t v325 = v15; // 0x180298c52
    v324 = v325;
    goto lab_0x180298cf5;
  lab_0x180298cd3:;
    int64_t v326 = 0; // 0x180298cd8
    if (v327 == 0) {
        goto lab_0x180298ce7;
    } else {
        goto lab_0x180298cda;
    }
  lab_0x180298ce7:
    // 0x180298ce7
    v15 = v328;
    v324 = v329;
    goto lab_0x180298cf5;
  lab_0x180298cda:;
    int64_t v330 = v326;
    *(int32_t *)(4 * v330 + v331) = 0;
    int64_t v332 = v330 + 1; // 0x180298cdf
    v326 = v332 & 0xffffffff;
    if ((int32_t)v332 != v333) {
        goto lab_0x180298cda;
    } else {
        goto lab_0x180298ce7;
    }
  lab_0x180298c85_2:;
    int64_t v334 = v335;
    int64_t v336 = v337;
    int64_t v338 = v334 & 0xffffffff;
    int64_t v339 = v338 - v327; // 0x180298c88
    uint32_t v340 = (int32_t)v336; // 0x180298c8e
    int64_t v341 = 0; // 0x180298c90
    if ((int32_t)v339 >= v340) {
        goto lab_0x180298c9c;
    } else {
        uint32_t v342 = *(int32_t *)((4 * v339 & 0x3fffffffc) + v331); // 0x180298c92
        v341 = v342;
        goto lab_0x180298c9c;
    }
  lab_0x180298c9c:;
    int64_t v343 = v339 + 0xffffffff; // 0x180298c8b
    int64_t v344 = v341;
    int64_t v345 = 0; // 0x180298c9e
    if ((int32_t)v343 >= v340) {
        goto lab_0x180298ca8;
    } else {
        uint32_t v346 = *(int32_t *)((4 * v343 & 0x3fffffffc) + v331); // 0x180298ca0
        v345 = v346;
        goto lab_0x180298ca8;
    }
  lab_0x180298ca8:;
    int64_t v347 = v345;
    int64_t v348 = v347 & v349;
    int64_t v350 = v351 == 0 ? v348 : (int64_t)((int32_t)v348 >> v351);
    int64_t v352 = v344 & v353;
    int64_t v354 = v355 == 0 ? v352 : (int64_t)((int32_t)v352 << v355);
    *(int32_t *)(4 * v338 + v331) = (int32_t)(v350 | v354);
    int64_t v356 = v338 + 0xffffffff; // 0x180298cc0
    if (v357 == (int32_t)v356) {
        goto lab_0x180298cd3;
    } else {
        uint32_t v358 = v15; // 0x180298cc8
        v337 = v358;
        v335 = v356;
        goto lab_0x180298c85_2;
    }
  lab_0x180298f15:
    // 0x180298f15
    v15 = v359;
    uint32_t v360 = 1078 - v361; // 0x180298f25
    uint32_t v362 = v360 / 32; // 0x180298f2d
    int64_t v363 = 4 * v362; // 0x180298f30
    function_18029db80((int64_t)&v84, 0, v363, v364);
    *(int32_t *)(v365 + v363) = 1 << (v360 & 31);
    v366 = v362;
    v367 = v368;
    goto lab_0x180298fd0;
  lab_0x180298ed3:;
    int64_t v370 = v371 & 0xffffffff;
    uint32_t v372 = (int32_t)v373; // 0x180298eda
    int64_t v374 = 0; // 0x180298edc
    if ((int32_t)v371 >= v372) {
        goto lab_0x180298ee8;
    } else {
        // 0x180298ede
        v374 = (int64_t)*(int32_t *)(4 * v370 + v375);
        goto lab_0x180298ee8;
    }
  lab_0x180298ee8:;
    int64_t v376 = v371 + 0xffffffff; // 0x180298ed6
    int64_t v377 = v376 & 0xffffffff; // 0x180298ed6
    uint32_t v378 = (int32_t)v376; // 0x180298ee8
    int32_t v379 = 0; // 0x180298eeb
    if (v378 >= v372) {
        goto lab_0x180298ef6;
    } else {
        // 0x180298eed
        v379 = *(int32_t *)(4 * v377 + v375);
        goto lab_0x180298ef6;
    }
  lab_0x180298ef6:
    // 0x180298ef6
    *(int32_t *)(4 * v370 + v375) = v379 / 0x40000000 | 4 * (int32_t)v374;
    v364 = v374;
    if (v378 == -1) {
        goto lab_0x180298f15;
    } else {
        // 0x180298f10
        v371 = v377;
        v373 = v15;
        goto lab_0x180298ed3;
    }
}

// Address range: 0x180299b9c - 0x180299c3e
int64_t function_180299b9c(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5) {
    if (a1 == 0) {
        // 0x180299ba6
        *a3 = 0;
        // 0x180299ba9
        return 1;
    }
    uint32_t v1 = (int32_t)a2; // 0x180299baf
    if (v1 == 0) {
        // 0x180299bb3
        *(char *)a1 = 0;
        // 0x180299ba6
        *a3 = 0;
        // 0x180299ba9
        return 1;
    }
    if ((a2 & 0xffffff80) == 0) {
        // 0x180299bbf
        *(char *)a1 = (char)a2;
        // 0x180299ba9
        return 1;
    }
    int64_t v2 = (int64_t)a3;
    int64_t v3 = a2 & 0xfffff800;
    int64_t v4 = 192; // 0x180299bc9
    int64_t v5 = 1; // 0x180299bc9
    if (v3 != 0) {
        if ((a2 & 0xffff0000) != 0) {
            // 0x180299bf4
            v4 = 240;
            v5 = 3;
            if ((a2 & 0xffe00000) == 0 != v1 < 0x110000) {
                // 0x180299c33
                return function_180299c48(v2, a4);
            }
        } else {
            // 0x180299bdd
            v4 = 224;
            v5 = 2;
            if (v3 == 0xd800) {
                // 0x180299c33
                return function_180299c48(v2, a4);
            }
        }
    }
    int64_t v6 = v5; // 0x180299c0c
    uint64_t v7 = a2 / 64; // 0x180299c11
    *(char *)(v6 + a1) = (char)a2 & 63 | -128;
    v6--;
    int64_t v8 = v7 & 0x3ffffff; // 0x180299c20
    while (v6 != 0) {
        // 0x180299c0f
        v7 = v8 / 64;
        *(char *)(v6 + a1) = (char)v8 & 63 | -128;
        v6--;
        v8 = v7 & 0x3ffffff;
    }
    // 0x180299c22
    *(char *)a1 = (char)(v7 | v4);
    return function_180299c40(v5 + 1, v2);
}

// Address range: 0x180299c40 - 0x180299c48
int64_t function_180299c40(int64_t result, int64_t a2) {
    // 0x180299c40
    *(int64_t *)a2 = 0;
    return result;
}

// Address range: 0x180299c48 - 0x180299c5c
int64_t function_180299c48(int64_t a1, int64_t a2) {
    // 0x180299c48
    *(int64_t *)a1 = 0;
    *(char *)(a2 + 48) = 1;
    *(int32_t *)(a2 + 44) = 42;
    return -1;
}

// Address range: 0x180299c5c - 0x180299cbb
int64_t function_180299c5c(int64_t a1) {
    uint32_t v1 = (int32_t)a1; // 0x180299c60
    int64_t v2; // 0x180299c5c
    int64_t v3; // 0x180299c5c
    int64_t v4; // 0x180299c5c
    if (v1 == -2) {
        // 0x180299c65
        *(int32_t *)function_180279918(a1, v4, v3, v2) = 9;
        // 0x180299cb6
        return 0;
    }
    if (v1 >= 0) {
        // 0x180299c76
        if (g1308 > v1) {
            int64_t v5 = 0x100000000 * a1 / 0x100000000; // 0x180299c7e
            int64_t v6 = *(int64_t *)(8 * v5 / 64 + (int64_t)&g1307); // 0x180299c96
            // 0x180299cb6
            return (int64_t)(*(char *)(72 * (v5 & 63) + 56 + v6) & 64);
        }
    }
    // 0x180299ca4
    *(int32_t *)function_180279918(a1, v4, v3, v2) = 9;
    function_180271814(a1, v4, v3, v2);
    // 0x180299cb6
    return 0;
}

// Address range: 0x180299cbc - 0x180299d61
int64_t function_180299cbc(void) {
    int64_t * v1 = _calloc_base(64, 72); // 0x180299cd8
    if (v1 == NULL) {
        // 0x180299d42
        function_18028acc0(0, 72);
        return 0;
    }
    int64_t result = (int64_t)v1; // 0x180299cd8
    int64_t v2 = result + 48; // 0x180299cf3
    InitializeCriticalSectionEx((struct _RTL_CRITICAL_SECTION *)(v2 - 48), 4000, 0);
    *(int64_t *)(v2 - 8) = -1;
    char * v3 = (char *)(v2 + 13); // 0x180299d11
    *v3 = *v3 & -8;
    *(int64_t *)v2 = 0;
    *(int32_t *)(v2 + 8) = 0xa0a0000;
    *(char *)(v2 + 12) = 10;
    int64_t v4 = v2 + 14; // 0x180299d21
    *(char *)v4 = 0;
    int64_t v5 = 1; // 0x180299d28
    int64_t v6 = v5 & 0xffffffff; // 0x180299d30
    v4++;
    while ((int32_t)v5 < 5) {
        // 0x180299d25
        *(char *)v4 = 0;
        v5 = v6 + 1;
        v6 = v5 & 0xffffffff;
        v4++;
    }
    while (v2 != result + 0x11e8) {
        // 0x180299d32
        v2 += 72;
        InitializeCriticalSectionEx((struct _RTL_CRITICAL_SECTION *)(v2 - 48), 4000, 0);
        *(int64_t *)(v2 - 8) = -1;
        v3 = (char *)(v2 + 13);
        *v3 = *v3 & -8;
        *(int64_t *)v2 = 0;
        *(int32_t *)(v2 + 8) = 0xa0a0000;
        *(char *)(v2 + 12) = 10;
        v4 = v2 + 14;
        *(char *)v4 = 0;
        v5 = 1;
        v6 = v5 & 0xffffffff;
        v4++;
        while ((int32_t)v5 < 5) {
            // 0x180299d25
            *(char *)v4 = 0;
            v5 = v6 + 1;
            v6 = v5 & 0xffffffff;
            v4++;
        }
    }
    // 0x180299d42
    function_18028acc0(0, 4000);
    return result;
}

// Address range: 0x180299d64 - 0x180299db4
int64_t function_180299d64(int64_t a1) {
    // 0x180299d64
    if (a1 == 0) {
        // 0x180299db3
        int64_t result; // 0x180299d64
        return result;
    }
    int64_t lpCriticalSection = a1;
    DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    while (lpCriticalSection != a1 + 0x11b8) {
        // 0x180299d8a
        lpCriticalSection += 72;
        DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    }
    // 0x180299db3
    int64_t v1; // 0x180299d64
    return function_18028acc0(a1, v1);
}

// Address range: 0x180299db4 - 0x180299e5c
int64_t function_180299db4(int64_t a1) {
    // 0x180299db4
    int64_t v1; // 0x180299db4
    if ((uint32_t)(int32_t)a1 >= 0x2000) {
        // 0x180299dd3
        int64_t v2; // 0x180299db4
        int64_t v3; // 0x180299db4
        *(int32_t *)function_180279918(a1, v1, v3, v2) = 9;
        function_180271814(a1, v1, v3, v2);
        // 0x180299de6
        return 9;
    }
    int64_t v4 = a1 & 0xffffffff; // 0x180299dc9
    __acrt_lock(7);
    int64_t v5 = g1308; // 0x180299e09
    int64_t v6 = v5; // 0x180299e16
    int64_t v7 = 0; // 0x180299e16
    if (v4 < v5) {
        // 0x180299e4e
        __acrt_lock2(7, v1);
        // 0x180299de6
        return 0;
    }
    int64_t v8; // 0x180299e27
    while (true) {
        int64_t * v9 = (int64_t *)(8 * v7 + (int64_t)&g1307); // 0x180299e1f
        int64_t v10 = v6; // 0x180299e23
        if (*v9 == 0) {
            // 0x180299e27
            v8 = function_180299cbc();
            *v9 = v8;
            if (v8 == 0) {
                // break -> 0x180299e35
                return 0;
            }
            int32_t v11 = g1308 + 64; // 0x180299e40
            g1308 = v11;
            v10 = v11;
        }
        // 0x180299e49
        v6 = v10;
        v7++;
        if (v4 < v6) {
            // 0x180299e4e
            __acrt_lock2(7, v1);
            // 0x180299de6
            return 0;
        }
    }
    // 0x180299e4e
    __acrt_lock2(7, v1);
    // 0x180299de6
    return v8 + 12 & 0xffffffff;
}

// Address range: 0x180299e5c - 0x180299e83
int64_t function_180299e5c(int32_t a1) {
    int64_t v1 = *(int64_t *)(8 * (int64_t)(a1 / 64) + (int64_t)&g1307); // 0x180299e74
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(v1 + (int64_t)(72 * (a1 & 63))));
    return &g1381;
}

// Address range: 0x180299e84 - 0x180299f43
int64_t function_180299e84(uint32_t a1, int64_t hHandle) {
    uint64_t v1 = (int64_t)(int32_t)a1;
    if (a1 >= 0) {
        // 0x180299ea7
        if (g1308 > a1) {
            int64_t * v2 = (int64_t *)(8 * v1 / 64 + (int64_t)&g1307); // 0x180299ec7
            int64_t v3 = 72 * (v1 & 63) + 40;
            if (*(int64_t *)(*v2 + v3) == -1) {
                int32_t v4 = function_18029c94c(); // 0x180299ed8
                if (v4 != 1) {
                    // 0x180299f05
                    *(int64_t *)(*v2 + v3) = hHandle;
                    // 0x180299f28
                    return 0;
                }
                int32_t nStdHandle = -10; // 0x180299edf
                if (a1 != 0) {
                    int32_t v5 = a1 - v4; // 0x180299ee1
                    nStdHandle = -11;
                    if (v5 != 0) {
                        // 0x180299ee5
                        nStdHandle = -12;
                        if (v5 != v4) {
                            // 0x180299f05
                            *(int64_t *)(*v2 + v3) = hHandle;
                            // 0x180299f28
                            return 0;
                        }
                    }
                }
                // 0x180299efc
                SetStdHandle(nStdHandle, (int64_t *)hHandle);
                // 0x180299f05
                *(int64_t *)(*v2 + v3) = hHandle;
                // 0x180299f28
                return 0;
            }
        }
    }
    // 0x180299f12
    int64_t v6; // 0x180299e84
    int64_t v7; // 0x180299e84
    *(int32_t *)function_180279918(v1, hHandle, v7, v6) = 9;
    *(int32_t *)function_1802798f4(v1) = 0;
    // 0x180299f28
    return 0xffffffff;
}

// Address range: 0x180299f44 - 0x180299f6b
int64_t function_180299f44(int32_t a1) {
    int64_t v1 = *(int64_t *)(8 * (int64_t)(a1 / 64) + (int64_t)&g1307); // 0x180299f5c
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)(v1 + (int64_t)(72 * (a1 & 63))));
    return &g1381;
}

// Address range: 0x180299f6c - 0x18029a0aa
int64_t function_180299f6c(void) {
    // 0x180299f6c
    __acrt_lock(7);
    int64_t v1 = 0;
    int64_t * v2 = (int64_t *)(0x100000000 * v1 / 0x20000000 + (int64_t)&g1307);
    int64_t v3 = *v2; // 0x180299faf
    int64_t v4; // 0x180299f6c
    int64_t v5; // 0x180299f6c
    while (v3 != 0) {
        int64_t v6 = v3;
        char * v7 = (char *)(v6 + 56); // 0x18029a006
        struct _RTL_CRITICAL_SECTION * lpCriticalSection; // 0x18029a011
        int64_t v8; // 0x18029a052
        int64_t * v9; // 0x18029a065
        if ((*v7 & 1) == 0) {
            // 0x18029a00e
            lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)v6;
            EnterCriticalSection(lpCriticalSection);
            if ((*v7 & 1) == 0) {
                // 0x18029a031
                v8 = 64 * v1 & 0xffffffc0;
                v9 = (int64_t *)(8 * 0x4000000000 * v1 / 0x4000000000 + (int64_t)&g1307);
                *(char *)(*v9 + 56) = 1;
                *(int64_t *)(*v9 + 40) = -1;
                v5 = v8;
                v4 = v8;
                goto lab_0x18029a083;
            }
            // 0x18029a01d
            LeaveCriticalSection(lpCriticalSection);
        }
        int64_t v10 = v6 + 72; // 0x18029a004
        while (v6 != v3 + 0x11b8) {
            // 0x18029a006
            v6 = v10;
            v7 = (char *)(v6 + 56);
            if ((*v7 & 1) == 0) {
                // 0x18029a00e
                lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)v6;
                EnterCriticalSection(lpCriticalSection);
                if ((*v7 & 1) == 0) {
                    // 0x18029a031
                    v8 = 64 * v1 & 0xffffffc0;
                    v9 = (int64_t *)(8 * 0x4000000000 * v1 / 0x4000000000 + (int64_t)&g1307);
                    *(char *)(*v9 + 56) = 1;
                    *(int64_t *)(*v9 + 40) = -1;
                    v5 = v8;
                    v4 = v8;
                    goto lab_0x18029a083;
                }
                // 0x18029a01d
                LeaveCriticalSection(lpCriticalSection);
            }
            // 0x18029a026
            v10 = v6 + 72;
        }
        int64_t v11 = v1 + 1; // 0x18029a07c
        if ((int32_t)v11 > 127) {
            // 0x18029a083
            __acrt_lock2(7, v5);
            return 0xffffffff;
        }
        v1 = v11 & 0xffffffff;
        v2 = (int64_t *)(0x100000000 * v1 / 0x20000000 + (int64_t)&g1307);
        v3 = *v2;
    }
    int64_t v12 = function_180299cbc(); // 0x180299fb8
    *v2 = v12;
    v4 = -1;
    if (v12 != 0) {
        // 0x180299fca
        g1308 += 64;
        int64_t v13 = 64 * v1; // 0x180299fd1
        function_180299e5c((int32_t)v13);
        int64_t v14 = *(int64_t *)(0x4000000000 * v1 / 0x800000000 + (int64_t)&g1307); // 0x180299fe2
        *(char *)(v14 + 56) = 1;
        v4 = v13 & 0xffffffc0;
    }
  lab_0x18029a083:
    // 0x18029a083
    __acrt_lock2(7, v5);
    return v4 & 0xffffffff;
}

// Address range: 0x18029a0ac - 0x18029a166
int64_t function_18029a0ac(int64_t a1, int64_t a2) {
    // 0x18029a0ac
    if ((uint32_t)(int32_t)a1 >= 0) {
        int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x18029a0c1
        uint32_t v2 = (int32_t)v1; // 0x18029a0c8
        if (g1308 > v2) {
            int64_t * v3 = (int64_t *)(8 * v1 / 64 + (int64_t)&g1307); // 0x18029a0e8
            int64_t v4 = *v3; // 0x18029a0e8
            int64_t v5 = 72 * (v1 & 63); // 0x18029a0ec
            if ((*(char *)(v5 + 56 + v4) & 1) != 0) {
                int64_t v6 = v5 + 40;
                if (*(int64_t *)(v4 + v6) != -1) {
                    int32_t v7 = function_18029c94c(); // 0x18029a100
                    if (v7 != 1) {
                        // 0x18029a12c
                        *(int64_t *)(*v3 + v6) = -1;
                        // 0x18029a150
                        return 0;
                    }
                    int32_t nStdHandle = -10; // 0x18029a107
                    if (v2 != 0) {
                        int32_t v8 = v2 - v7; // 0x18029a109
                        nStdHandle = -11;
                        if (v8 != 0) {
                            // 0x18029a10d
                            nStdHandle = -12;
                            if (v8 != v7) {
                                // 0x18029a12c
                                *(int64_t *)(*v3 + v6) = -1;
                                // 0x18029a150
                                return 0;
                            }
                        }
                    }
                    // 0x18029a124
                    SetStdHandle(nStdHandle, NULL);
                    // 0x18029a12c
                    *(int64_t *)(*v3 + v6) = -1;
                    // 0x18029a150
                    return 0;
                }
            }
        }
    }
    // 0x18029a13a
    int64_t v9; // 0x18029a0ac
    int64_t v10; // 0x18029a0ac
    *(int32_t *)function_180279918(a1, a2, v10, v9) = 9;
    *(int32_t *)function_1802798f4(a1) = 0;
    // 0x18029a150
    return 0xffffffff;
}

// Address range: 0x18029a168 - 0x18029a1dd
int64_t function_18029a168(int64_t a1) {
    uint32_t v1 = (int32_t)a1; // 0x18029a16c
    int64_t v2; // 0x18029a168
    if (v1 == -2) {
        // 0x18029a171
        *(int32_t *)function_1802798f4(a1) = 0;
        int64_t v3; // 0x18029a168
        int64_t v4; // 0x18029a168
        *(int32_t *)function_180279918(a1, v4, v3, v2) = 9;
        // 0x18029a1d8
        return -1;
    }
    int64_t v5 = a1; // 0x18029a188
    int64_t v6; // 0x18029a168
    int64_t v7; // 0x18029a168
    if (v1 >= 0) {
        // 0x18029a18a
        v5 = a1;
        if (g1308 > v1) {
            int64_t v8 = 0x100000000 * a1 / 0x100000000; // 0x18029a192
            int64_t v9 = v8 & 63; // 0x18029a19f
            int64_t v10 = *(int64_t *)(8 * v8 / 64 + (int64_t)&g1307); // 0x18029a1aa
            int64_t v11 = v10 + 72 * v9;
            v5 = v9;
            v7 = 9 * v9;
            v6 = &g1307;
            if ((*(char *)(v11 + 56) & 1) != 0) {
                // 0x18029a1d8
                return *(int64_t *)(v11 + 40);
            }
        }
    }
    // 0x18029a1bc
    *(int32_t *)function_1802798f4(v5) = 0;
    *(int32_t *)function_180279918(v5, v7, v6, v2) = 9;
    function_180271814(v5, v7, v6, v2);
    // 0x18029a1d8
    return -1;
}

// Address range: 0x18029a1e0 - 0x18029a278
int64_t function_18029a1e0(int64_t a1) {
    // 0x18029a1e0
    _3f__3f__24_common_get_or_create_environment_nolock_40_D_40__40_YAPEAPEADXZ();
    if (a1 == 0) {
        // 0x18029a256
        return 0;
    }
    int64_t v1 = -1; // 0x18029a209
    v1++;
    int64_t v2 = 2 * v1; // 0x18029a212
    while (*(int16_t *)(v2 + a1) != 0) {
        // 0x18029a20f
        v1++;
        v2 = 2 * v1;
    }
    int64_t v3 = *(int64_t *)&g1381;
    if (v3 == 0) {
        // 0x18029a256
        return 0;
    }
    int64_t v4 = &g1381; // 0x18029a252
    int64_t v5 = 0; // 0x18029a221
    int64_t v6 = v5; // 0x18029a228
    while (*(int16_t *)(2 * v5 + v3) != 0) {
        // 0x18029a221
        v5 = v6 + 1;
        v6 = v5;
    }
    int64_t result; // 0x18029a1e0
    if (v5 > v1) {
        // 0x18029a22f
        if (*(int16_t *)(v3 + v2) == 61) {
            // 0x18029a236
            if ((int32_t)function_18029bde0(v3, a1, v1) == 0) {
                // 0x18029a26b
                result = v2 + 2 + *(int64_t *)&g1381;
                return result;
            }
        }
    }
    // 0x18029a248
    v4 += 8;
    int64_t * v7 = (int64_t *)v4;
    int64_t v8 = *v7;
    result = 0;
    while (v8 != 0) {
        int64_t * v9 = v7;
        int64_t v10 = v8;
        v5 = 0;
        v6 = v5;
        while (*(int16_t *)(2 * v5 + v10) != 0) {
            // 0x18029a221
            v5 = v6 + 1;
            v6 = v5;
        }
        if (v5 > v1) {
            // 0x18029a22f
            if (*(int16_t *)(v10 + v2) == 61) {
                // 0x18029a236
                if ((int32_t)function_18029bde0(v10, a1, v1) == 0) {
                    // 0x18029a26b
                    result = v2 + 2 + *v9;
                    return result;
                }
            }
        }
        // 0x18029a248
        v4 += 8;
        v7 = (int64_t *)v4;
        v8 = *v7;
        result = 0;
    }
  lab_0x18029a256:
    // 0x18029a256
    return result;
}

// Address range: 0x18029a278 - 0x18029a370
int64_t function_18029a278(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x18029a278
    __acrt_lock(11);
    int64_t * v1; // 0x18029a2c2
    if (a1 != 0) {
        // 0x18029a2c2
        v1 = (int64_t *)a1;
        *v1 = 0;
        if (a2 == 0) {
            if (a3 != 0) {
                goto lab_0x18029a2af;
            } else {
                goto lab_0x18029a2ee;
            }
        } else {
            if (a3 != 0) {
                // 0x18029a2eb
                *(int16_t *)a2 = 0;
                goto lab_0x18029a2ee;
            } else {
                goto lab_0x18029a2af;
            }
        }
    } else {
        goto lab_0x18029a2af;
    }
  lab_0x18029a2af:
    // 0x18029a2af
    *(int32_t *)function_180279918(11, a2, a3, a4) = 22;
    function_180271814(11, a2, a3, a4);
    // 0x18029a332
    __acrt_lock2(11, a2);
    return 22;
  lab_0x18029a2ee:;
    int64_t v2 = function_18029a1e0(a4); // 0x18029a2f1
    if (v2 == 0) {
        // 0x18029a332
        __acrt_lock2(11, a2);
        return 0;
    }
    int64_t v3 = -1;
    int64_t v4 = v3 + 1; // 0x18029a302
    while (*(int16_t *)(2 * v4 + v2) != 0) {
        // 0x18029a302
        v3 = v4;
        v4 = v3 + 1;
    }
    uint64_t v5 = v3 + 2; // 0x18029a30c
    *v1 = v5;
    if (a3 == 0) {
        // 0x18029a332
        __acrt_lock2(11, a2);
        return 0;
    }
    // 0x18029a317
    if (v5 > a3) {
        // 0x18029a332
        __acrt_lock2(11, a2);
        return 34;
    }
    // 0x18029a323
    if ((int32_t)function_180293a00(a2, a3, v2) == 0) {
        // 0x18029a332
        __acrt_lock2(11, a3);
        return 0;
    }
    // 0x18029a359
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
}

// Address range: 0x18029a370 - 0x18029a375
int64_t function_18029a370(int64_t * a1, int64_t * a2, int64_t a3, int16_t * a4, int64_t a5) {
    // 0x18029a370
    return function_18029a278((int64_t)a1, (int64_t)a2, a3, (int64_t)a4);
}

// Address range: 0x18029a378 - 0x18029a460
int64_t function_18029a378(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if ((a1 & 0xfffff3ff) == 0) {
        // 0x18029a39d
        if ((int32_t)a1 != 3072) {
            // 0x18029a3f5
            return 0;
        }
    }
    int64_t v1 = 0x100000000 * a3 / 0x100000000; // 0x18029a38c
    int32_t v2 = v1;
    if (a2 != 0) {
        // 0x18029a3ae
        if (v2 < 0) {
            // 0x18029a3f5
            return 0;
        }
    } else {
        // 0x18029a3aa
        if (v2 < 0 || v2 >= 0 == (v2 != 0)) {
            // 0x18029a3f5
            return 0;
        }
    }
    int64_t v3 = 0; // 0x18029a3ea
    int64_t v4 = 227; // 0x18029a3df
    int32_t v5 = v4 + v3; // 0x18029a3c6
    int32_t v6 = v5 - (v5 >> 31); // 0x18029a3c7
    int32_t v7 = v6 / 2; // 0x18029a3cc
    int64_t v8 = v7; // 0x18029a3cc
    int32_t v9 = *(int32_t *)(16 * (int64_t)v7 + (int64_t)&g600); // 0x18029a3d5
    int32_t v10 = (int32_t)a1 - v9; // 0x18029a3d5
    while (v10 != 0) {
        // 0x18029a3da
        v4 = (v10 >= 0 ? v4 : v8 + 0xffffffff) & 0xffffffff;
        v3 = (v10 >= 0 ? v8 + 1 : v3) & 0xffffffff;
        if (v3 > v4) {
            // 0x18029a3f5
            return 0;
        }
        v5 = v4 + v3;
        v6 = v5 - (v5 >> 31);
        v7 = v6 / 2;
        v8 = v7;
        v9 = *(int32_t *)(16 * (int64_t)v7 + (int64_t)&g600);
        v10 = (int32_t)a1 - v9;
    }
    // 0x18029a40a
    if (v6 < 0) {
        // 0x18029a3f5
        return 0;
    }
    int64_t v11 = *(int64_t *)(0x100000000 * v8 / 0x10000000 + (int64_t)&g600 + 8); // 0x18029a418
    uint64_t v12 = function_18027e500(v11, 85); // 0x18029a420
    if (v2 >= 1) {
        // 0x18029a42c
        if (v12 >= v1) {
            // 0x18029a3f5
            return 0;
        }
        // 0x18029a430
        if ((int32_t)function_180293a00(a2, v1, v11) != 0) {
            // 0x18029a447
            function_180271834(0, 0, 0, 0, 0);
            __asm_int3(0, 0);
            __asm_int3(0, 0);
            __asm_int3(0, 0);
            return __asm_int3(0, 0);
        }
    }
    // 0x18029a3f5
    return v12 + 1 & 0xffffffff;
}

// Address range: 0x18029a460 - 0x18029a507
int64_t function_18029a460(int64_t a1) {
    int64_t v1 = 0; // 0x18029a47e
    if (a1 == 0) {
        // 0x18029a4cd
        return 0;
    }
    int64_t v2 = 227; // 0x18029a47e
    int32_t v3 = v2 + v1; // 0x18029a497
    int64_t v4 = (v3 - (v3 >> 31)) / 2; // 0x18029a49f
    int64_t v5 = 16 * v4; // 0x18029a4a8
    int32_t v6 = function_18029a870(a1, *(int64_t *)(v5 + 0x1802fd3e0), 85); // 0x18029a4b5
    while (v6 != 0) {
        // 0x18029a4b9
        v2 = (v6 >= 0 ? v2 : v4 + 0xffffffff) & 0xffffffff;
        v1 = (v6 >= 0 ? v4 + 1 : v1) & 0xffffffff;
        if (v1 > v2) {
            // 0x18029a4cd
            return 0;
        }
        v3 = v2 + v1;
        v4 = (v3 - (v3 >> 31)) / 2;
        v5 = 16 * v4;
        v6 = function_18029a870(a1, *(int64_t *)(v5 + 0x1802fd3e0), 85);
    }
    int32_t v7 = *(int32_t *)(v5 + 0x1802fd3e8); // 0x18029a4e6
    int64_t result = 0; // 0x18029a4f0
    if (v7 >= 0 && v7 < 228) {
        // 0x18029a4fa
        result = (int64_t)*(int32_t *)(16 * (int64_t)v7 + 0x1802fb990);
    }
    // 0x18029a4cd
    return result;
}

// Address range: 0x18029a508 - 0x18029a548
int64_t function_18029a508(int64_t a1) {
    int64_t v1 = 0x1000000000000 * a1 / 0x1000000000000; // 0x18029a508
    if ((int32_t)function_18029c954() == 0) {
        // 0x18029a543
        return 0xffff;
    }
    int32_t v2 = 0; // bp+16, 0x18029a51a
    int64_t v3 = function_18029c9c4((int16_t *)&v1, 1, &v2); // 0x18029a52e
    int64_t result = 0xffff; // 0x18029a535
    if ((int32_t)v3 != 0) {
        // 0x18029a537
        result = v1 & 0xffff;
    }
    // 0x18029a543
    return result;
}

// Address range: 0x18029a550 - 0x18029a559
int128_t function_18029a550(int32_t a1) {
    // 0x18029a550
    return __asm_vmovd_49(a1 | 0x400000);
}

// Address range: 0x18029a55c - 0x18029a563
bool function_18029a55c(int32_t dwInfoType, int16_t * lpSrcStr, int32_t cchSrc, int16_t * lpCharType) {
    // 0x18029a55c
    return GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

// Address range: 0x18029a570 - 0x18029a579
int64_t function_18029a570(int64_t a1) {
    // 0x18029a570
    return a1 & 768;
}

// Address range: 0x18029a580 - 0x18029a658
int64_t function_18029a580(void) {
    // 0x18029a580
    uint32_t v1; // 0x18029a580
    __asm_stmxcsr(v1);
    int32_t v2 = v1 & 0x8040;
    int32_t v3 = 3072; // 0x18029a5a8
    if (v2 != 0x8000) {
        int16_t v4 = v2; // 0x18029a5b2
        v3 = 2048;
        if (v4 != 64) {
            // 0x18029a5c0
            v3 = v4 == -0x7fc0 ? 1024 : 0;
        }
    }
    int32_t v5 = v1 & 0x6000; // 0x18029a5ce
    int32_t v6 = 512; // 0x18029a580
    switch (v5) {
        case 0: {
            // 0x18029a600
            v6 = 0;
        }
        case 0x4000: {
          lab_0x18029a602:;
            uint32_t v7 = ((((v1 / 4 & 1024 | v1 & 2048) / 4 | v1 & 1024) / 4 | v1 & 512) / 8 | v1 & 384) / 8; // 0x18029a63a
            int32_t v8 = v3 | v7 | v6; // 0x18029a640
            return 0x400000 * (v8 & 768 | 4 * v7) | v8;
        }
        case 0x2000: {
            // 0x18029a5f9
            v6 = 256;
            // branch (via goto) -> 0x18029a602
            goto lab_0x18029a602;
        }
        default: {
            // 0x18029a5e3
            v6 = v5 != 0x6000 ? 0 : 768;
            // branch (via goto) -> 0x18029a602
            goto lab_0x18029a602;
        }
    }
}

// Address range: 0x18029a660 - 0x18029a6b5
int64_t function_18029a660(void) {
    // 0x18029a660
    uint32_t v1; // 0x18029a660
    __asm_stmxcsr(v1);
    int32_t v2 = 2 * (8 * v1 & 16 | v1 & 4) | 16 * v1 & 16 | ((v1 / 4 & 8 | v1 & 16) / 4 | v1 & 8) / 2; // 0x18029a6a8
    return 0x1000000 * v2 | v2;
}

// Address range: 0x18029a6c0 - 0x18029a7f0
int64_t function_18029a6c0(uint32_t a1) {
    int32_t v1 = 0; // 0x18029a6c0
    switch (a1 & 3072) {
        case 1024: {
            // 0x18029a719
            v1 = 0x8040;
            // break -> 0x18029a71f
            return 0;
        }
        case 2048: {
            // 0x18029a711
            v1 = 64;
            // break -> 0x18029a71f
            return 0;
        }
        case 3072: {
            // 0x18029a709
            v1 = 0x8000;
            // break -> 0x18029a71f
            return 0;
        }
    }
    int32_t v2 = a1 / 0x400000 & 768; // 0x18029a6d5
    int32_t v3 = 0x4000; // 0x18029a6c0
    switch (v2) {
        case 0: {
            // 0x18029a75b
            v3 = 0;
            goto lab_0x18029a75f;
        }
        case 256: {
            // 0x18029a753
            v3 = 0x2000;
            goto lab_0x18029a75f;
        }
        case 512: {
            goto lab_0x18029a75f;
        }
        default: {
            // 0x18029a73c
            v3 = 0x6000;
            if (v2 != 768) {
                // 0x18029a75b
                v3 = 0;
                goto lab_0x18029a75f;
            } else {
                goto lab_0x18029a75f;
            }
        }
    }
  lab_0x18029a75f:;
    uint32_t v4 = a1 / 0x1000000; // 0x18029a6d2
    int64_t v5 = v4 & 63 | v2; // 0x18029a6e3
    int32_t v6 = (v5 & 1) == 0 ? 0 : 0x1000;
    int32_t v7 = (v5 & 16) == 0 ? 0 : 128;
    int32_t v8; // 0x18029a6c0
    __asm_stmxcsr(v8);
    uint32_t result = 256 * v4 & 1024 | 1024 * v4 & 2048 | 64 * v4 & 512 | 8 * v4 & 256 | v6 | v7 | v8 & -0xffc1 | v1 | v3; // 0x18029a7e3
    __asm_ldmxcsr(result);
    return result;
}

// Address range: 0x18029a7f0 - 0x18029a863
int64_t function_18029a7f0(uint32_t a1) {
    // 0x18029a7f0
    int32_t v1; // 0x18029a7f0
    __asm_stmxcsr(v1);
    uint32_t result = a1 / 0x80000 & 32 | a1 / 0x200000 & 16 | a1 / 0x800000 & 8 | a1 / 0x2000000 & 4 | a1 / 0x10000000 & 2 | (int32_t)(bool)((a1 & 0x10000000) != 0) | v1 & -64; // 0x18029a857
    __asm_ldmxcsr(result);
    return result;
}

// Address range: 0x18029a870 - 0x18029a8d7
int64_t function_18029a870(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // 0x18029a87c
    int64_t v2 = a1; // 0x18029a87c
    if (a3 == 0) {
        // 0x18029a87e
        return 0;
    }
    int64_t v3 = a2; // 0x18029a87c
    uint16_t v4 = *(int16_t *)v2; // 0x18029a890
    int64_t v5 = v4; // 0x18029a890
    uint16_t v6 = *(int16_t *)v3; // 0x18029a898
    int64_t v7 = v6; // 0x18029a898
    int64_t v8 = v5; // 0x18029a8a3
    int64_t v9 = v7; // 0x18029a8a3
    if (v4 != v6) {
        // 0x18029a8a5
        v8 = (int32_t)v4 < 91 ? v5 + 32 : v5;
        v9 = (int32_t)v6 < 91 ? v7 + 32 : v7;
    }
    int32_t v10 = v8; // 0x18029a8c5
    uint32_t result = v10 - (int32_t)v9; // 0x18029a8c7
    while (v10 != 0 && result == 0) {
        // 0x18029a8d0
        v1--;
        v2 += 2;
        v3 += 2;
        if (v1 == 0) {
            // break -> 0x18029a87e
            return 0;
        }
        v4 = *(int16_t *)v2;
        v5 = v4;
        v6 = *(int16_t *)v3;
        v7 = v6;
        v8 = v5;
        v9 = v7;
        if (v4 != v6) {
            // 0x18029a8a5
            v8 = (int32_t)v4 < 91 ? v5 + 32 : v5;
            v9 = (int32_t)v6 < 91 ? v7 + 32 : v7;
        }
        // 0x18029a8c5
        v10 = v8;
        result = v10 - (int32_t)v9;
    }
    // 0x18029a87e
    return result;
}

// Address range: 0x18029a8e0 - 0x18029aaeb
int64_t function_18029a8e0(int64_t a1, int16_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    if (g1298 == 0) {
        if (a2 != NULL == (a1 != 0)) {
            function_18029a870(a1, v1, a3);
        }
        // 0x18029a8f7
        return function_180293b10(a1, v1);
    }
    if (a1 == 0 || a2 == NULL) {
        // 0x18029a927
        *(int32_t *)function_180279918(a1, v1, a3, 0) = 22;
        function_180271814(a1, v1, a3, 0);
        return 0x7fffffff;
    }
    // 0x18029a94a
    if (a3 == 0) {
        // 0x18029a94f
        return 0;
    }
    int64_t v2 = __vcrt_getptd2(a1); // 0x18029a98b
    int128_t v3 = (int128_t)*(int64_t *)(v2 + 144); // bp-48, 0x18029a9a4
    int64_t v4 = *(int64_t *)(v2 + 136); // bp-40, 0x18029a9b0
    __acrt_update_locale_info(v2, (int64_t)&v3);
    __acrt_update_locale_info2(v2, (int64_t)&v4);
    int32_t * v5 = (int32_t *)(v2 + 936);
    int32_t v6 = *v5; // 0x18029a9ce
    char v7 = 0; // 0x18029a9d6
    if ((v6 & 2) == 0) {
        // 0x18029a9d8
        *v5 = v6 | 2;
        v7 = 1;
    }
    int64_t v8 = v3; // 0x18029a9e6
    int64_t v9 = a1; // 0x18029a9f3
    int64_t v10 = a3; // 0x18029a9f3
    int64_t v11 = v1; // 0x18029a9f3
    int64_t result; // 0x18029a8e0
    if (*(int64_t *)(v8 + 312) != 0) {
        uint16_t v12 = *(int16_t *)v9; // 0x18029aa30
        int64_t v13 = v12; // 0x18029aa30
        int64_t v14; // 0x18029a8e0
        int64_t v15; // 0x18029a8e0
        int64_t v16; // 0x18029aa3d
        if (v12 >= 256) {
            // 0x18029aa58
            v14 = function_18029b7d0(v13);
            v15 = v3;
        } else {
            // 0x18029aa3d
            v16 = v13 & 255;
            v14 = v16;
            v15 = v8;
            if ((*(char *)(2 * v16 + (int64_t)&g548 + 2) & 1) != 0) {
                // 0x18029aa48
                v14 = (int64_t)*(char *)(*(int64_t *)(v8 + 272) + v16);
                v15 = v8;
            }
        }
        uint16_t v17 = *(int16_t *)v11; // 0x18029aa67
        int64_t v18 = v17; // 0x18029aa67
        int64_t v19; // 0x18029a8e0
        int64_t v20; // 0x18029a8e0
        int64_t v21; // 0x18029a8e0
        int64_t v22; // 0x18029aa7a
        if (v17 >= 256) {
            // 0x18029aa95
            v19 = function_18029b7d0(v18);
            v21 = v3;
        } else {
            // 0x18029aa7a
            v20 = v15;
            v22 = v18 & 255;
            v19 = v22;
            v21 = v20;
            if ((*(char *)(2 * v22 + (int64_t)&g548 + 2) & 1) != 0) {
                // 0x18029aa85
                v19 = (int64_t)*(char *)(*(int64_t *)(v20 + 272) + v22);
                v21 = v20;
            }
        }
        int64_t v23 = v14 & 0xffff; // 0x18029aa6f
        uint32_t v24 = (int32_t)v23 - ((int32_t)v19 & 0xffff); // 0x18029aaa7
        while (v23 != 0 && v24 == 0) {
            // 0x18029aaaf
            v10--;
            int64_t v25 = v21; // 0x18029aab3
            v9 += 2;
            v11 += 2;
            if (v10 == 0) {
                // break -> 0x18029aac8
                return 0;
            }
            v12 = *(int16_t *)v9;
            v13 = v12;
            if (v12 >= 256) {
                // 0x18029aa58
                v14 = function_18029b7d0(v13);
                v15 = v3;
            } else {
                int64_t v26 = v25;
                v16 = v13 & 255;
                v14 = v16;
                v15 = v26;
                if ((*(char *)(2 * v16 + (int64_t)&g548 + 2) & 1) != 0) {
                    // 0x18029aa48
                    v14 = (int64_t)*(char *)(*(int64_t *)(v26 + 272) + v16);
                    v15 = v26;
                }
            }
            // 0x18029aa67
            v17 = *(int16_t *)v11;
            v18 = v17;
            if (v17 >= 256) {
                // 0x18029aa95
                v19 = function_18029b7d0(v18);
                v21 = v3;
            } else {
                // 0x18029aa7a
                v20 = v15;
                v22 = v18 & 255;
                v19 = v22;
                v21 = v20;
                if ((*(char *)(2 * v22 + (int64_t)&g548 + 2) & 1) != 0) {
                    // 0x18029aa85
                    v19 = (int64_t)*(char *)(*(int64_t *)(v20 + 272) + v22);
                    v21 = v20;
                }
            }
            // 0x18029aaa4
            v23 = v14 & 0xffff;
            v24 = (int32_t)v23 - ((int32_t)v19 & 0xffff);
        }
        // 0x18029aac8
        result = v24;
    } else {
        // 0x18029a9f5
        result = function_18029a870(a1, v1, a3) & 0xffffffff;
    }
    // 0x18029aac8
    if (v7 != 0) {
        // 0x18029aacf
        *v5 = *v5 & -3;
    }
    // 0x18029a94f
    return result;
}

// Address range: 0x18029aaec - 0x18029abaf
int64_t function_18029aaec(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5, int32_t a6) {
    int64_t v1 = a4;
    int32_t * v2; // 0x18029ab21
    if (a5 != 0) {
        // 0x18029ab21
        v2 = (int32_t *)a5;
        *v2 = -1;
        if (a1 == 0) {
            goto lab_0x18029ab03;
        } else {
            if (a6 == 0) {
                goto lab_0x18029ab3d;
            } else {
                if ((v1 & 0xfffffe7f) != 0) {
                    goto lab_0x18029ab03;
                } else {
                    goto lab_0x18029ab3d;
                }
            }
        }
    } else {
        goto lab_0x18029ab03;
    }
  lab_0x18029ab03:
    // 0x18029ab03
    *(int32_t *)function_180279918(a1, a2, a3, v1) = 22;
    function_180271814(a1, a2, a3, v1);
    // 0x18029ab16
    return 22;
  lab_0x18029ab3d:;
    int32_t v3 = 0; // bp-24, 0x18029ab3d
    int64_t v4 = function_18029b108(&v3, a5, a1, a2 & 0xffffffff, 0x100000000 * a3 / 0x100000000, v1, (int64_t)a6); // 0x18029ab63
    int32_t v5 = v4;
    if (v3 != 0) {
        if (v5 != 0) {
            int32_t v6 = *v2; // 0x18029ab79
            int64_t v7 = *(int64_t *)(8 * (int64_t)(v6 / 64) + (int64_t)&g1307); // 0x18029ab91
            char * v8 = (char *)(v7 + 56 + (int64_t)(72 * (v6 & 63))); // 0x18029ab95
            *v8 = *v8 & -2;
        }
        // 0x18029ab9a
        function_180299f44(*v2);
    }
    // 0x18029aba1
    if (v5 != 0) {
        // 0x18029aba5
        *v2 = -1;
    }
    // 0x18029ab16
    return v4 & 0xffffffff;
}

// Address range: 0x18029abb0 - 0x18029ae30
int64_t function_18029abb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = 0x100000000 * a1;
    int64_t v4 = v3 / 0x100000000; // 0x18029abc8
    char * v5 = (char *)a4; // 0x18029abd0
    *v5 = 0;
    int64_t v6 = *(int64_t *)(8 * v3 / 0x4000000000 + (int64_t)&g1307); // 0x18029abf2
    if (*(char *)(72 * (v4 & 63) + 56 + v6) > -1) {
        // 0x18029ae02
        return 0;
    }
    int64_t v7 = a3 & 0xffffffff; // 0x18029abe8
    int64_t v8 = v7; // 0x18029ac09
    int32_t v9; // 0x18029abb0
    if ((a3 & 0x74000) == 0) {
        // 0x18029ac0b
        v9 = 0;
        if ((int32_t)function_18029ca84((int64_t *)&v9) != 0) {
            // 0x18029ae1b
            function_180271834(0, 0, 0, 0, 0);
            return __asm_int3(0, 0);
        }
        uint32_t v10 = v9 & 0x74000; // 0x18029ac24
        if (v10 != 0) {
            // 0x18029ac66
            v8 = v7 | (int64_t)v10;
        } else {
            // 0x18029ac28
            v8 = a3 & 0xffffbfff | 0x4000;
        }
    }
    // 0x18029ac2c
    int64_t v11; // 0x18029abb0
    if ((v8 & 0x74000) == 0x4000) {
        // 0x18029ac7c
        *v5 = 0;
        v11 = v8 & 0x70000;
        goto lab_0x18029ac7f;
    } else {
        // 0x18029ac3d
        v2 = 0xffffbfff;
        int64_t v12 = v8 & 0x70000;
        switch (v12) {
            case 0x10000: {
                if ((v8 & 769) != 769) {
                    goto lab_0x18029ac8b;
                } else {
                    // 0x18029ac77
                    *v5 = 2;
                    goto lab_0x18029ac8b;
                }
            }
            case 0x20000: {
                // 0x18029ac77
                *v5 = 2;
                goto lab_0x18029ac8b;
            }
            default: {
                // 0x18029ac56
                v11 = v12;
                if (v12 == 0x40000) {
                    // 0x18029ac60
                    *v5 = 1;
                    v11 = v12;
                }
                goto lab_0x18029ac7f;
            }
        }
    }
  lab_0x18029ac7f:
    // 0x18029ac7f
    if (v11 == 0) {
        // 0x18029ae02
        return 0;
    }
    goto lab_0x18029ac8b;
  lab_0x18029ac8b:
    // 0x18029ac8b
    if ((*(char *)&v2 & 64) != 0) {
        // 0x18029ae02
        return 0;
    }
    int32_t * v13 = (int32_t *)(a2 + 4); // 0x18029ac95
    uint32_t v14 = *v13; // 0x18029ac95
    int64_t v15; // 0x18029abb0
    switch (v14 & -0x40000000) {
        case 0x40000000: {
            goto lab_0x18029acbb;
        }
        case -0x80000000: {
            // 0x18029ac95
            v15 = v4 & 0xffffffff;
            goto lab_0x18029ad39;
        }
        default: {
            // 0x18029acb3
            if (v14 <= 0xbfffffff) {
                // 0x18029ae02
                return 0;
            }
            goto lab_0x18029acbb;
        }
    }
  lab_0x18029acbb:;
    int32_t v16 = *(int32_t *)(a2 + 8); // 0x18029acbb
    switch (v16) {
        case 1: {
            goto lab_0x18029acdb;
        }
        case 2: {
            goto lab_0x18029acdb;
        }
        case 3: {
            goto lab_0x18029acff;
        }
        default: {
            int32_t v17 = v16 - 4; // 0x18029accd
            if (v17 == 0) {
                goto lab_0x18029acff;
            } else {
                // 0x18029acd2
                if (v17 != 1) {
                    // 0x18029ae02
                    return 0;
                }
                goto lab_0x18029acdb;
            }
        }
    }
  lab_0x18029acdb:
    // 0x18029acdb
    v9 = 0;
    int32_t v18 = (int32_t)*(char *)&v1 - 1; // 0x18029ace3
    int64_t v19 = 3; // 0x18029ace6
    int32_t v20 = 0xbfbbef; // 0x18029ace6
    if (v18 != 0) {
        // 0x18029acec
        v19 = 2;
        v20 = 0xfeff;
        if (v18 != 1) {
            // 0x18029ae02
            return 0;
        }
    }
    // 0x18029add4
    v9 = v20;
    int64_t v21 = v4 & 0xffffffff; // 0x18029ade9
    int64_t v22 = 0; // 0x18029add4
    int64_t v23 = v19 - v22; // 0x18029ade3
    int64_t v24 = 0x100000000 * v22 / 0x100000000 + (int64_t)&v9; // 0x18029ade6
    int64_t v25 = function_18028f530(v21, v24, (int32_t)v23); // 0x18029adec
    while ((int32_t)v25 != -1) {
        int64_t v26 = v25 + v22 & 0xffffffff; // 0x18029adfa
        v22 = v26;
        if (v19 <= v26) {
            // 0x18029ae02
            v2 = v24;
            goto lab_0x18029ae02_2;
        }
        v23 = v19 - v22;
        v24 = 0x100000000 * v22 / 0x100000000 + (int64_t)&v9;
        v25 = function_18028f530(v21, v24, (int32_t)v23);
    }
    // 0x18029ad24
    v2 = v24;
    int64_t v27 = v24; // 0x18029abb0
    int64_t v28 = v21; // 0x18029abb0
    int64_t v29 = v23 & 0xffffffff; // 0x18029abb0
    goto lab_0x18029ad24;
  lab_0x18029acff:
    // 0x18029acff
    v2 = 0;
    int64_t v36 = v4 & 0xffffffff;
    if (function_180290af0(v36, 0, 2, v1) == 0) {
        goto lab_0x18029acdb;
    } else {
        // 0x18029ad11
        v2 = 0;
        int64_t v37 = function_180290af0(v36, 0, 0, v1); // 0x18029ad19
        v27 = 0;
        v28 = v36;
        v29 = 0;
        if (v37 != -1) {
            // 0x18029ad30
            v15 = v36;
            if (*v13 > -1) {
                // 0x18029ae02
                return 0;
            }
            goto lab_0x18029ad39;
        } else {
            goto lab_0x18029ad24;
        }
    }
  lab_0x18029ad39:
    // 0x18029ad39
    v9 = 0;
    int64_t v35 = &v9; // 0x18029ad43
    v2 = v35;
    int32_t v38 = function_18029041c(v15, v35, 3); // 0x18029ad50
    v27 = v35;
    v28 = v15;
    v29 = 3;
    int32_t v32; // 0x18029abb0
    switch (v38) {
        case -1: {
            goto lab_0x18029ad24;
        }
        case 2: {
            // 0x18029ad39
            v32 = v9;
            goto lab_0x18029ad72;
        }
        default: {
            if (v38 != 3) {
                goto lab_0x18029adb2;
            } else {
                // 0x18029ad5e
                v32 = v9;
                if (v9 == 0xbfbbef) {
                    // 0x18029ad69
                    *v5 = 1;
                    int64_t v39 = 0; // 0x18029ad6d
                    int64_t result = v39;
                    return result;
                }
                goto lab_0x18029ad72;
            }
        }
    }
  lab_0x18029ad24:
    // 0x18029ae02
    return (int64_t)*(int32_t *)function_180279918(v28, v27, v29, v1);
  lab_0x18029adb2:
    // 0x18029adb2
    v2 = 0;
    int64_t v30 = function_180290af0(v15, 0, 0, v1); // 0x18029adba
    v27 = 0;
    v28 = v15;
    v29 = 0;
    if (v30 != -1) {
        // 0x18029ae02
        return 0;
    }
    goto lab_0x18029ad24;
  lab_0x18029ad72:;
    uint32_t v31 = v32 & 0xffff;
    if (v31 != 0xfffe) {
        if (v31 != 0xfeff) {
            goto lab_0x18029adb2;
        } else {
            // 0x18029ad95
            v2 = 2;
            int64_t v33 = function_180290af0(v15, 2, 0, v1); // 0x18029ad9e
            v27 = 2;
            v28 = v15;
            v29 = 0;
            if (v33 != -1) {
                // 0x18029adad
                *v5 = 2;
              lab_0x18029ae02_2:
                // 0x18029ae02
                return 0;
            }
            goto lab_0x18029ad24;
        }
    } else {
        int64_t v34 = v31; // 0x18029ad72
        *(int32_t *)function_180279918(v34, v35, 3, v1) = 22;
        v27 = v2;
        v28 = v34;
        v29 = 3;
        goto lab_0x18029ad24;
    }
}

// Address range: 0x18029ae30 - 0x18029b044
int64_t function_18029ae30(int64_t * a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    int64_t result = (int64_t)a1;
    int64_t v3 = 0x100000000 * a5 / 0x100000000;
    int64_t v4; // 0x18029ae30
    int128_t v5; // 0x18029ae30
    __asm_movups(*(int128_t *)&v4, __asm_xorps(v5, v5));
    int64_t v6 = result + 16; // 0x18029ae4f
    *(int64_t *)v6 = 0;
    int32_t v7 = a2; // 0x18029ae56
    uint32_t v8 = v7 & 3; // 0x18029ae65
    v4 = v8;
    int32_t v9 = -0x80000000; // 0x18029ae68
    if (v8 == 0) {
        goto lab_0x18029aeb0;
    } else {
        int64_t v10 = v8 - 1; // 0x18029ae6a
        v4 = v10;
        v9 = -0x40000000;
        switch (v8) {
            case 1: {
                // 0x18029ae8f
                v9 = !(((a2 & 0x70000) == 0 | (a2 & 8) == 0)) ? -0x40000000 : 0x40000000;
                goto lab_0x18029aeb0;
            }
            case 2: {
                goto lab_0x18029aeb0;
            }
            default: {
                // 0x18029ae74
                *(int32_t *)function_180279918(v10, 0x80000000, v2, v1) = 22;
                function_180271814(v4, 0x80000000, v2, v1);
                v9 = -1;
                goto lab_0x18029aeb0;
            }
        }
    }
  lab_0x18029aeb0:;
    int32_t * v11 = (int32_t *)(result + 4); // 0x18029aeb0
    *v11 = v9;
    v4 = 1792;
    uint32_t v12 = v7 & 1792; // 0x18029aeba
    int32_t v13 = 1; // 0x18029ae30
    int32_t * v14; // 0x18029af75
    int32_t * v15; // 0x18029af79
    int32_t * v16; // 0x18029af7c
    switch (v12 / 256) {
        case 0: {
        }
        case 4: {
            // 0x18029af1c
            v13 = 3;
        }
        case 5: {
          lab_0x18029af21:
            // 0x18029af21
            *(int32_t *)(result + 8) = v13;
            int32_t v17 = 2; // 0x18029ae30
            switch ((a3 - 16) / 16 || 0x10000000 * a3) {
                case 0: {
                    // 0x18029af73
                    v17 = 0;
                }
                case 2: {
                  lab_0x18029af75:
                    // 0x18029af75
                    v14 = (int32_t *)(result + 20);
                    *v14 = 0;
                    v15 = (int32_t *)(result + 12);
                    *v15 = v17;
                    v16 = (int32_t *)v6;
                    *v16 = 128;
                    if ((char)a2 < 0) {
                        // 0x18029af88
                        *(char *)a1 = *(char *)&v4 | 16;
                    }
                    // break -> 0x18029af8b
                    return 0;
                }
                case 1: {
                    // 0x18029af6c
                    v17 = 1;
                    // branch (via goto) -> 0x18029af75
                    goto lab_0x18029af75;
                }
                case 3: {
                    // 0x18029af75
                    v17 = 3;
                    // branch (via goto) -> 0x18029af75
                    goto lab_0x18029af75;
                }
                case 7: {
                    // 0x18029af4f
                    v17 = *v11 == -0x80000000;
                    // branch (via goto) -> 0x18029af75
                    goto lab_0x18029af75;
                }
                default: {
                    // 0x18029af3d
                    *(int32_t *)function_180279918(v4, 0x80000000, v2, v1) = 22;
                    function_180271814(v4, 0x80000000, v2, v1);
                    v17 = -1;
                    // branch (via goto) -> 0x18029af75
                    goto lab_0x18029af75;
                }
            }
            // break -> 0x18029af8b
            return 0;
        }
        case 1: {
            // 0x18029af15
            v13 = 4;
            // branch (via goto) -> 0x18029af21
            goto lab_0x18029af21;
        }
        case 2: {
        }
        case 6: {
            // 0x18029af0e
            v13 = 5;
            // branch (via goto) -> 0x18029af21
            goto lab_0x18029af21;
        }
        case 3: {
            // 0x18029af07
            v13 = 2;
            // branch (via goto) -> 0x18029af21
            goto lab_0x18029af21;
        }
        default: {
            // 0x18029aee8
            v13 = 1;
            if (v12 != 1792) {
                // 0x18029aeec
                *(int32_t *)function_180279918(1792, 0x80000000, v2, v1) = 22;
                function_180271814(v4, 0x80000000, v2, v1);
                v13 = -1;
            }
            // branch (via goto) -> 0x18029af21
            goto lab_0x18029af21;
        }
    }
    if ((int16_t)a2 <= -1) {
        goto lab_0x18029afb8;
    } else {
        if ((a2 & 0x74000) != 0) {
            // 0x18029afb5
            *(char *)a1 = *(char *)&v4 | -128;
            goto lab_0x18029afb8;
        } else {
            // 0x18029af9c
            v3 = 0;
            int64_t v18 = &v3; // 0x18029afa1
            v4 = v18;
            if ((int32_t)function_18029ca84(&v3) != 0) {
                // 0x18029b02d
                function_180271834(0, 0, 0, 0, 0);
                __asm_int3(0, 0);
                return __asm_int3(0, 0);
            }
            // 0x18029afaf
            if ((int32_t)v3 == 0x8000) {
                goto lab_0x18029afb8;
            } else {
                // 0x18029afb5
                *(char *)a1 = (char)v18 | -128;
                goto lab_0x18029afb8;
            }
        }
    }
  lab_0x18029afb8:
    // 0x18029afb8
    v4 = 256;
    if ((a2 & 256) != 0) {
        // 0x18029afc1
        if ((char)((g1355 ^ 128) & a4) >= 0) {
            // 0x18029afd0
            *v16 = 1;
        }
    }
    if ((a2 & 64) != 0) {
        // 0x18029afdd
        *v14 = *v14 | 0x4000000;
        *v11 = *v11 | 0x10000;
        *v15 = *v15 | 4;
    }
    if ((a2 & 0x1000) != 0) {
        // 0x18029aff1
        *v16 = *v16 | (int32_t)v4;
    }
    if ((a2 & 0x2000) != 0) {
        // 0x18029affa
        *v14 = *v14 | 0x2000000;
    }
    if ((a2 & 32) != 0) {
        // 0x18029b005
        *v14 = *v14 | 0x8000000;
        // 0x18029b017
        return result;
    }
    if ((a2 & 16) != 0) {
        // 0x18029b012
        *v14 = *v14 | 0x10000000;
    }
    // 0x18029b017
    return result;
}

// Address range: 0x18029b044 - 0x18029b105
int64_t function_18029b044(int32_t a1) {
    int64_t v1 = a1; // 0x18029b053
    int64_t v2 = *(int64_t *)(8 * v1 / 64 + (int64_t)&g1307); // 0x18029b06a
    char v3 = *(char *)(v2 + (int64_t)(72 * (a1 & 63) + 56)); // 0x18029b072
    if (v3 < 0 != ((v3 & 72) == 0)) {
        // 0x18029b0f5
        return 0;
    }
    int64_t v4 = v1 & 0xffffffff; // 0x18029b089
    int64_t v5; // 0x18029b044
    int64_t v6 = function_180290af0(v4, -1, 2, v5); // 0x18029b08b
    int64_t v7; // 0x18029b044
    int64_t v8; // 0x18029b044
    if (v6 != -1) {
        int16_t v9 = 0; // 0x18029b0b5
        if ((int32_t)function_18029041c(v4, (int64_t)&v9, 1) != 0) {
            goto lab_0x18029b0e1;
        } else {
            // 0x18029b0ca
            if (v9 != 26) {
                goto lab_0x18029b0e1;
            } else {
                int64_t v10 = function_18029cb98(v4, v6); // 0x18029b0d7
                v8 = v6;
                v7 = 1;
                if ((int32_t)v10 == -1) {
                    return (int64_t)*(int32_t *)function_180279918(v4, v8, v7, v5);
                } else {
                    goto lab_0x18029b0e1;
                }
            }
        }
    } else {
        int32_t v11 = *(int32_t *)function_1802798f4(v4); // 0x18029b09e
        v8 = -1;
        v7 = 2;
        if (v11 == 131) {
            // 0x18029b0f5
            return 0;
        }
        return (int64_t)*(int32_t *)function_180279918(v4, v8, v7, v5);
    }
  lab_0x18029b0e1:
    // 0x18029b0e1
    v8 = 0;
    v7 = 0;
    if (function_180290af0(v4, 0, 0, v5) != -1) {
        // 0x18029b0f5
        return 0;
    }
    return (int64_t)*(int32_t *)function_180279918(v4, v8, v7, v5);
    // 0x18029b0f5
    return (int64_t)*(int32_t *)function_180279918(v4, v8, v7, v5);
}

// Address range: 0x18029b108 - 0x18029b51b
int64_t function_18029b108(int32_t * a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4 & 0xffffffff; // 0x18029b12f
    int64_t v2 = a6 & 0xffffffff; // 0x18029b135
    int64_t v3 = a5 & 0xffffffff; // 0x18029b13c
    int64_t v4 = v1; // 0x18029b143
    int64_t v5; // bp-72, 0x18029b108
    int64_t v6 = &v5; // 0x18029b146
    int64_t v7; // 0x18029b108
    int64_t v8; // 0x18029b108
    int64_t v9; // 0x18029b108
    int64_t v10; // 0x18029b108
    int64_t v11; // 0x18029b108
    int64_t v12 = function_18029ae30(&v5, v1, (int32_t)a5, (int32_t)a6, v7, v8, v9, v10, v11); // 0x18029b14a
    int128_t v13 = __asm_movups_16(*(int128_t *)v12); // 0x18029b14f
    uint64_t v14 = *(int64_t *)(v12 + 8); // 0x18029b152
    int128_t v15 = __asm_movsd(*(int64_t *)(v12 + 16)); // 0x18029b156
    int64_t v16 = __asm_movsd_17(v15); // 0x18029b15f
    int64_t v17 = __asm_movsd_17(v15); // 0x18029b164
    int128_t v18; // 0x18029b108
    __asm_movups(v18, v13);
    int128_t v19; // 0x18029b108
    __asm_movups(v19, v13);
    int32_t v20; // 0x18029b108
    int64_t * hFile; // 0x18029b108
    int64_t v21; // 0x18029b108
    int64_t v22; // 0x18029b108
    int32_t v23; // 0x18029b108
    int64_t v24; // 0x18029b108
    int128_t v25; // bp-104, 0x18029b108
    int64_t lpSecurityAttributes; // bp-160, 0x18029b108
    int64_t v26; // 0x18029b15b
    int32_t dwShareMode; // 0x18029b169
    int64_t v27; // 0x18029b1c0
    int32_t dwFlagsAndAttributes; // 0x18029b1db
    int16_t * lpFileName; // 0x18029b21e
    int32_t dwDesiredAccess2; // 0x18029b108
    int32_t dwCreationDisposition; // 0x18029b108
    if (v14 <= 0xfffffffeffffffff) {
        int32_t v28 = function_180299f6c(); // 0x18029b198
        int32_t * v29 = (int32_t *)a2; // 0x18029b198
        *v29 = v28;
        if (v28 != -1) {
            // 0x18029b1b8
            v26 = v14 / 0x100000000;
            int32_t v30 = v17; // 0x18029b164
            dwShareMode = v26;
            int128_t v31 = v25; // 0x18029b1b8
            int128_t v32 = __asm_movups_16(v31); // 0x18029b1b8
            v27 = &lpSecurityAttributes;
            *a1 = 1;
            uint64_t v33 = __asm_movq_20(v32); // 0x18029b1d2
            dwFlagsAndAttributes = v30 >> 31 | v30;
            int128_t v34 = __asm_psrldq(v32, 8); // 0x18029b1e1
            int64_t v35 = v33 / 0x100000000; // 0x18029b1f1
            v4 = v35;
            lpSecurityAttributes = 24;
            __asm_movd_60(dwCreationDisposition, v34);
            int32_t v36; // 0x18029b108
            __asm_movd_60(v36, v34);
            lpFileName = (int16_t *)a3;
            int32_t dwDesiredAccess = v35;
            int64_t * v37 = CreateFileW(lpFileName, dwDesiredAccess, dwShareMode, (struct _SECURITY_ATTRIBUTES *)&lpSecurityAttributes, (int32_t)&g1381, (int32_t)&g1381, (int64_t *)&g1381); // 0x18029b21e
            v20 = dwDesiredAccess;
            hFile = v37;
            if (v37 != (int64_t *)-1) {
                goto lab_0x18029b2c1;
            } else {
                uint32_t v38 = __asm_movd_48(__asm_psrldq(__asm_movups_16(v31), 4)); // 0x18029b23f
                dwDesiredAccess2 = dwDesiredAccess;
                if ((a4 & 1) == 0 || v38 <= 0xbfffffff) {
                    goto lab_0x18029b28b;
                } else {
                    int64_t v39 = (int64_t)v19 / 0x100000000; // 0x18029b26f
                    v4 = v39;
                    dwDesiredAccess2 = v39;
                    int64_t * v40 = CreateFileW(lpFileName, dwDesiredAccess2, dwShareMode, (struct _SECURITY_ATTRIBUTES *)&lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, NULL); // 0x18029b27c
                    v20 = dwDesiredAccess2;
                    v23 = v38 & 0x7fffffff;
                    hFile = v40;
                    if (v40 != (int64_t *)-1) {
                        goto lab_0x18029b2c1;
                    } else {
                        goto lab_0x18029b28b;
                    }
                }
            }
        } else {
            // 0x18029b19f
            *(int32_t *)function_1802798f4(v6) = 0;
            *v29 = -1;
            *(int32_t *)function_180279918(v6, v4, v3, v2) = 24;
            v24 = v6;
            v21 = v3;
            v22 = v2;
            return (int64_t)*(int32_t *)function_180279918(v24, v4, v21, v22);
        }
    } else {
        // 0x18029b17b
        *(int32_t *)function_1802798f4(v6) = 0;
        *(int32_t *)a2 = -1;
        v24 = v6;
        v21 = v3;
        v22 = v2;
        return (int64_t)*(int32_t *)function_180279918(v24, v4, v21, v22);
    }
  lab_0x18029b187:
    // 0x18029b4fa
    return (int64_t)*(int32_t *)function_180279918(v24, v4, v21, v22);
  lab_0x18029b2c1:;
    int64_t v41 = (int64_t)hFile;
    int32_t v42 = GetFileType(hFile); // 0x18029b2c4
    uint32_t v43; // 0x18029b108
    int64_t v44; // 0x18029b108
    int64_t v45; // 0x18029b108
    char v46; // 0x18029b108
    char v47; // 0x18029b359
    if (v42 != 0) {
        int64_t v48 = v19; // 0x18029b31f
        int64_t v49; // 0x18029b108
        if (v42 != 2) {
            // 0x18029b32e
            v49 = v48 & 255;
            if (v42 == 3) {
                // 0x18029b333
                v49 = v48 & 247 | 8;
            }
        } else {
            // 0x18029b328
            v49 = v48 & 191 | 64;
        }
        // 0x18029b337
        function_180299e84(v20, v41);
        v46 = v49;
        v47 = v46 | 1;
        int64_t v50 = *(int64_t *)(8 * (int64_t)(v20 / 64) + (int64_t)&g1307); // 0x18029b361
        *(char *)(v50 + (int64_t)(72 * (v20 & 63) + 56)) = v47;
        int32_t v51 = *(int32_t *)&v4; // 0x18029b36e
        int64_t v52 = *(int64_t *)(8 * (int64_t)(v51 / 64) + (int64_t)&g1307); // 0x18029b37f
        *(char *)(v52 + 57 + (int64_t)(72 * (v51 & 63))) = 0;
        v43 = *(int32_t *)&v4;
        if ((a4 & 2) == 0) {
            goto lab_0x18029b3ab;
        } else {
            int64_t v53 = function_18029b044(v43); // 0x18029b390
            if ((int32_t)v53 == 0) {
                goto lab_0x18029b3ab;
            } else {
                // 0x18029b39c
                v44 = v53;
                v45 = v43;
                goto lab_0x18029b39e;
            }
        }
    } else {
        uint32_t errorCode = GetLastError(); // 0x18029b2ce
        function_1802798a8((int64_t)errorCode);
        int32_t v54 = v20 & 63; // 0x18029b2ea
        v4 = 9 * v54;
        int64_t v55 = *(int64_t *)(8 * (int64_t)(v20 / 64) + (int64_t)&g1307); // 0x18029b2f5
        char * v56 = (char *)(v55 + (int64_t)(72 * v54 + 56)); // 0x18029b2f9
        *v56 = *v56 & -2;
        CloseHandle(hFile);
        v24 = v41;
        v21 = v26;
        v22 = v27;
        if (errorCode == 0) {
            // 0x18029b30f
            *(int32_t *)function_180279918(v41, v4, v26, v27) = 13;
            v24 = v41;
            v21 = v26;
            v22 = v27;
        }
        return (int64_t)*(int32_t *)function_180279918(v24, v4, v21, v22);
    }
  lab_0x18029b28b:;
    int64_t v57 = *(int64_t *)(8 * (int64_t)(dwDesiredAccess2 / 64) + (int64_t)&g1307); // 0x18029b2a3
    char * v58 = (char *)(v57 + 56 + (int64_t)(72 * (dwDesiredAccess2 & 63))); // 0x18029b2a7
    *v58 = *v58 & -2;
    int64_t errorCode2 = GetLastError(); // 0x18029b2b2
    function_1802798a8(errorCode2);
    v24 = errorCode2;
    v21 = v26;
    v22 = v27;
    return (int64_t)*(int32_t *)function_180279918(v24, v4, v21, v22);
  lab_0x18029b3ab:;
    int128_t v59 = __asm_movups_16((int128_t)v47); // 0x18029b3ab
    int128_t v60 = __asm_movsd(v16); // 0x18029b3b6
    v25 = __asm_movaps_19(v59);
    char v61 = 0; // bp-200, 0x18029b3c6
    __asm_movsd_17(v60);
    int64_t v62 = function_18029abb0((int64_t)v43, (int64_t)&v25, v1, (int64_t)&v61); // 0x18029b3d0
    int64_t v63 = v43; // 0x18029b3d8
    if ((int32_t)v62 == 0) {
        int64_t v64 = *(int64_t *)(8 * v63 / 64 + (int64_t)&g1307); // 0x18029b3f6
        *(char *)(72 * (v63 & 63) + 57 + v64) = v61;
        int32_t v65 = *(int32_t *)&v4; // 0x18029b3fe
        int64_t v66 = *(int64_t *)(8 * (int64_t)(v65 / 64) + (int64_t)&g1307); // 0x18029b40f
        char * v67 = (char *)(v66 + 61 + (int64_t)(72 * (v65 & 63))); // 0x18029b419
        *v67 = *v67 & -2 | (char)(a4 / 0x10000) & 1;
        if ((a4 & 8) != 0 && (v46 & 72) == 0) {
            int32_t v68 = *(int32_t *)&v4; // 0x18029b42f
            int64_t v69 = *(int64_t *)(8 * (int64_t)(v68 / 64) + (int64_t)&g1307); // 0x18029b440
            char * v70 = (char *)(v69 + 56 + (int64_t)(72 * (v68 & 63))); // 0x18029b444
            *v70 = *v70 | 32;
        }
        // 0x18029b449
        if ((a4 & 1) == 0 || v23 <= 0xbfffffff) {
            // 0x18029b4fa
            return 0;
        }
        // 0x18029b464
        CloseHandle(hFile);
        int64_t * v71 = CreateFileW(lpFileName, (int32_t)(v46 >> 7), dwShareMode, (struct _SECURITY_ATTRIBUTES *)&lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, NULL); // 0x18029b49c
        int64_t v72 = (int64_t)v71; // 0x18029b49c
        v4 = v72;
        int32_t v73 = v72;
        if (v71 != (int64_t *)-1) {
            int64_t v74 = *(int64_t *)(8 * (int64_t)(v73 / 64) + (int64_t)&g1307); // 0x18029b4eb
            *(int64_t *)(72 * (v72 & 63) + 40 + v74) = v72;
            // 0x18029b4fa
            return 0;
        }
        // 0x18029b4ab
        function_1802798a8((int64_t)GetLastError());
        int64_t v75 = *(int64_t *)(8 * (int64_t)(v73 / 64) + (int64_t)&g1307); // 0x18029b4c9
        char * v76 = (char *)(72 * (v72 & 63) + 56 + v75); // 0x18029b4cd
        *v76 = *v76 & -2;
        int64_t v77 = (int64_t)*(int32_t *)&v4; // 0x18029b4d2
        function_18029a0ac(v77, v4);
        v24 = v77;
        v21 = v26;
        v22 = v27;
        goto lab_0x18029b187;
    } else {
        // 0x18029b3e0
        v44 = v62;
        v45 = v63 & 0xffffffff;
        goto lab_0x18029b39e;
    }
  lab_0x18029b39e:
    // 0x18029b39e
    function_18028e91c(v45);
    // 0x18029b4fa
    return v44 & 0xffffffff;
}

// Address range: 0x18029b51c - 0x18029b54e
int64_t function_18029b51c(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x18029b51c
    return function_18029aaec(a2, a3 & 0xffffffff, a4 & 0xffffffff, a5, (int64_t)a1, 1);
}

// Address range: 0x18029b550 - 0x18029b67a
int64_t function_18029b550(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2; // 0x18029b550
    int64_t v3; // 0x18029b550
    int64_t v4; // 0x18029b550
    int64_t v5; // 0x18029b550
    int64_t v6; // 0x18029b550
    int64_t v7; // 0x18029b550
    int64_t v8; // 0x18029b60a
    int64_t v9; // 0x18029b616
    if (a4 == 0) {
        if (a1 != 0) {
            if (a2 != 0) {
                // 0x18029b591
                *(char *)a1 = (char)a4;
                return 0;
            }
            // 0x18029b5a9
            *(int32_t *)function_180279918(a1, a2, v1, a4) = 22;
            function_180271814(a1, a2, v1, a4);
            return 22;
        }
        if (a2 != 0) {
            // 0x18029b5a9
            *(int32_t *)function_180279918(a1, a2, v1, a4) = 22;
            function_180271814(a1, a2, v1, a4);
            return 22;
        }
        // 0x18029b575
        return 0;
      lab_0x18029b622_2:;
        int64_t v10 = v2 + (int64_t)(v9 != 0); // 0x18029b629
        v6 = v8;
        v7 = v9;
        v4 = v3;
        v5 = v2;
        if (v10 != 0) {
            goto lab_0x18029b634;
        } else {
            // 0x18029b632
            *(char *)v8 = (char)v10;
            v6 = v8;
            v7 = v9;
            v4 = v3;
            v5 = v2;
            goto lab_0x18029b634;
        }
      lab_0x18029b634:
        // 0x18029b634
        if (v7 != 0) {
            return 0;
        }
        if (a4 == -1) {
            // 0x18029b643
            *(char *)(a1 - 1 + a2) = (char)v7;
            return v7 + 80 & 0xffffffff;
        }
        // 0x18029b656
        *(char *)a1 = 0;
        *(int32_t *)function_180279918(v6, v7, v4, v5) = 34;
        function_180271814(v6, v7, v4, v5);
        return 34;
    }
    if (a1 == 0 || a2 == 0) {
        // 0x18029b5a9
        *(int32_t *)function_180279918(a1, a2, v1, a4) = 22;
        function_180271814(a1, a2, v1, a4);
        return 22;
    }
    if (a3 == NULL) {
        // 0x18029b5a6
        *(char *)a1 = (char)v1;
        // 0x18029b5a9
        *(int32_t *)function_180279918(a1, a2, v1, a4) = 22;
        function_180271814(a1, a2, v1, a4);
        return 22;
    }
    int64_t v11 = v1 - a1; // 0x18029b5c9
    int64_t v12 = a1; // 0x18029b5d3
    int64_t v13 = a2; // 0x18029b5d3
    int64_t v14 = a1; // 0x18029b5d3
    v9 = a2;
    if (a4 != -1) {
        v2 = a4;
        char v15 = *(char *)(v14 + v11); // 0x18029b600
        *(char *)v14 = v15;
        while (v15 != 0) {
            // 0x18029b616
            v8 = v14 + 1;
            v9--;
            v3 = v2;
            if (v9 == 0) {
                goto lab_0x18029b622_2;
            }
            int64_t v16 = v2 - 1; // 0x18029b61c
            v14 = v8;
            v3 = v16;
            if (v16 == 0) {
                goto lab_0x18029b622_2;
            }
            v2 = v16;
            v15 = *(char *)(v14 + v11);
            *(char *)v14 = v15;
        }
    } else {
        char v17 = *(char *)(v12 + v11); // 0x18029b5e0
        *(char *)v12 = v17;
        while (v17 != 0) {
            int64_t v18 = v12 + 1; // 0x18029b5e7
            v13--;
            v12 = v18;
            v6 = v18;
            v7 = v13;
            v4 = a4;
            v5 = a4;
            if (v13 == 0) {
                goto lab_0x18029b634;
            }
            v17 = *(char *)(v12 + v11);
            *(char *)v12 = v17;
        }
    }
    // 0x18029b575
    return 0;
}

// Address range: 0x18029b67c - 0x18029b7cf
int64_t function_18029b67c(int64_t a1, int64_t * a2, uint64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // bp-72, 0x18029b67c
    if (a1 == 0) {
        // 0x18029b756
        int64_t v3; // 0x18029b67c
        int64_t v4 = function_18028c13c(&v2, (int16_t)v3, (int16_t *)a4, a5, a5); // 0x18029b766
        if (v4 == -1) {
            // 0x18029b7aa
            return function_18026ad50((int64_t)g731);
        }
        int64_t v5 = v1; // 0x18029b782
        int64_t v6; // bp-120, 0x18029b67c
        if (v4 != 0) {
            // 0x18029b77b
            if (*(char *)((int64_t)&v6 + 47 + v4) == 0) {
                // break -> 0x18029b7aa
                return 0;
            }
        }
        // 0x18029b782
        v5 += 2;
        int16_t v7 = *(int16_t *)v5; // 0x18029b794
        int64_t v8 = function_18028c13c(&v2, v7, (int16_t *)a4, a5, (int64_t)&g1381); // 0x18029b797
        while (v8 != -1) {
            int64_t v9 = v8;
            if (v9 != 0) {
                // 0x18029b77b
                if (*(char *)((int64_t)&v6 + 47 + v9) == 0) {
                    // break -> 0x18029b7aa
                    return 0;
                }
            }
            // 0x18029b782
            v5 += 2;
            v7 = *(int16_t *)v5;
            v8 = function_18028c13c(&v2, v7, (int16_t *)a4, a5, (int64_t)&g1381);
        }
        // 0x18029b7aa
        return function_18026ad50((int64_t)g731);
    }
    int16_t v10 = *(int16_t *)a2; // 0x18029b6cf
    int64_t v11 = &v2; // 0x18029b6d2
    int64_t v12 = a3 >= 4 ? a1 : v11; // 0x18029b6e1
    int64_t v13 = function_18028c13c((int64_t *)v12, v10, (int16_t *)a4, a5, (int64_t)&g1381); // 0x18029b6e8
    if (v13 == -1) {
        // 0x18029b74d
        *a2 = v1;
        // 0x18029b7aa
        return function_18026ad50((int64_t)g731);
    }
    if (v12 != a1) {
        // 0x18029b6fb
        if (a3 < v13) {
            // break -> 0x18029b742
            return 0;
        }
        // 0x18029b700
        function_18029d4e0(a1, v12, v13, a5);
    }
    int64_t v14; // 0x18029b67c
    int64_t v15; // 0x18029b67c
    int64_t v16; // 0x18029b67c
    int64_t v17; // 0x18029b67c
    int64_t v18; // 0x18029b71d
    if (v13 == 0) {
        // 0x18029b726
        v14 = a1;
        v15 = v1;
        v16 = v1 + 2;
    } else {
        // 0x18029b713
        v17 = a1 + v13;
        if (*(char *)(v17 - 1) == 0) {
            // break -> 0x18029b742
            return 0;
        }
        // 0x18029b71d
        v18 = v1 + 2;
        v14 = v17;
        v15 = v18;
        v16 = v18;
    }
    int64_t v19 = v16;
    int64_t v20 = v15;
    int64_t v21 = v14;
    int64_t v22 = a3 - v13; // 0x18029b72f
    int16_t v23 = *(int16_t *)v19; // 0x18029b6cf
    int64_t v24 = v22 >= 4 ? v21 : v11; // 0x18029b6e1
    int64_t v25 = function_18028c13c((int64_t *)v24, v23, (int16_t *)a4, a5, (int64_t)&g1381); // 0x18029b6e8
    // 0x18029b74d
    *a2 = v20;
    while (v25 != -1) {
        int64_t v26 = v21;
        int64_t v27 = v20;
        int64_t v28 = v19;
        uint64_t v29 = v22;
        int64_t v30 = v24;
        uint64_t v31 = v25;
        if (v30 != v26) {
            // 0x18029b6fb
            if (v29 < v31) {
                // break -> 0x18029b742
                return 0;
            }
            // 0x18029b700
            function_18029d4e0(v26, v30, v31, a5);
        }
        if (v31 == 0) {
            // 0x18029b726
            v14 = v26;
            v15 = v27;
            v16 = v28 + 2;
        } else {
            // 0x18029b713
            v17 = v26 + v31;
            if (*(char *)(v17 - 1) == 0) {
                // break -> 0x18029b742
                return 0;
            }
            // 0x18029b71d
            v18 = v28 + 2;
            v14 = v17;
            v15 = v18;
            v16 = v18;
        }
        // 0x18029b72a
        v19 = v16;
        v20 = v15;
        v21 = v14;
        v22 = v29 - v31;
        v23 = *(int16_t *)v19;
        v24 = v22 >= 4 ? v21 : v11;
        v25 = function_18028c13c((int64_t *)v24, v23, (int16_t *)a4, a5, (int64_t)&g1381);
        // 0x18029b74d
        *a2 = v20;
    }
    // 0x18029b7aa
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18029b7d0 - 0x18029b8ca
int64_t function_18029b7d0(int64_t a1) {
    int64_t v1 = 0x1000000000000 * a1 / 0x1000000000000; // 0x18029b7d5
    int64_t v2 = v1; // 0x18029b7d5
    if ((int16_t)a1 == -1) {
        // 0x18029b8bf
        return 0xffff;
    }
    // 0x18029b7f0
    int64_t v3; // bp-40, 0x18029b7d0
    int64_t v4; // 0x18029b7d0
    function_1802718b0(&v3, v4);
    int64_t v5 = v1 & 0xffff;
    uint16_t v6 = (int16_t)v1;
    int64_t v7; // 0x18029b7d0
    int64_t result; // 0x18029b7d0
    int64_t v8; // 0x18029b7d0
    if (*(int32_t *)(v8 + 12) != 0xfde9) {
        if (v6 >= 256) {
            int64_t v9 = *(int64_t *)(v8 + 312); // 0x18029b869
            v7 = v9;
            result = v5;
            if (v9 == 0) {
                goto lab_0x18029b8ac;
            } else {
                goto lab_0x18029b872;
            }
        } else {
            char v10 = *(char *)((2 * v5 & 510) + (int64_t)&g548 + 2); // 0x18029b84c
            if ((v10 & 1) == 0) {
                // 0x18029b864
                result = v1 & 255;
                goto lab_0x18029b8ac;
            } else {
                goto lab_0x18029b857;
            }
        }
    } else {
        if (v6 >= 128) {
            // 0x18029b80f
            v7 = *(int64_t *)(v8 + 312);
            goto lab_0x18029b872;
        } else {
            char v11 = *(char *)((2 * v5 & 510) + (int64_t)&g548 + 2); // 0x18029b826
            if ((v11 & 1) == 0) {
                // 0x18029b833
                result = v1 & 255;
                goto lab_0x18029b8ac;
            } else {
                goto lab_0x18029b857;
            }
        }
    }
  lab_0x18029b8ac:;
    // 0x18029b8ac
    char v12; // 0x18029b7d0
    if (v12 != 0) {
        int32_t * v13 = (int32_t *)(v3 + 936); // 0x18029b8b5
        *v13 = *v13 & -3;
    }
    // 0x18029b8bf
    return result;
  lab_0x18029b872:;
    int16_t v14 = 0; // bp+24, 0x18029b872
    int64_t v15 = function_18029cdc0(v7, 256, (int16_t *)&v2, 1, &v14, 1); // 0x18029b89b
    result = v2 & 0xffff;
    if ((int32_t)v15 != 0) {
        // 0x18029b8a8
        result = v14;
    }
    goto lab_0x18029b8ac;
  lab_0x18029b857:
    // 0x18029b857
    result = (int64_t)*(char *)(*(int64_t *)(v8 + 272) + (v1 & 255));
    goto lab_0x18029b8ac;
}

// Address range: 0x18029b8d0 - 0x18029b96a
int64_t function_18029b8d0(int64_t a1) {
    // 0x18029b8d0
    int64_t v1; // 0x18029b8d0
    char v2 = v1;
    int128_t v3; // 0x18029b8d0
    int128_t v4 = __asm_xorps(v3, v3); // 0x18029b8e6
    __asm_movups(0, v4);
    int128_t v5; // 0x18029b8d0
    __asm_movups(v5, v4);
    int128_t v6; // bp-56, 0x18029b8d0
    if (v2 != 0) {
        int32_t v7 = v6; // 0x18029b907
        v7 |= 1 << (int32_t)(v2 & 31);
        v6 = v7;
        int64_t v8; // 0x18029b8d0
        int64_t v9 = v8 + 1; // 0x18029b90a
        char v10 = *(char *)v9; // 0x18029b90a
        v8 = v9;
        while (v10 != 0) {
            // 0x18029b900
            v7 |= 1 << (int32_t)(v10 & 31);
            v6 = v7;
            v9 = v8 + 1;
            v10 = *(char *)v9;
            v8 = v9;
        }
    }
    int64_t v11 = (int64_t)g731; // 0x18029b8d4
    int64_t v12; // 0x18029b8d0
    if ((char)v12 == 0) {
        // 0x18029b941
        return function_18026ad50(v11);
    }
    int64_t v13 = v12 & 255; // 0x18029b8d0
    int64_t v14 = a1; // 0x18029b935
    char v15 = *(char *)(v13 / 8 + (int64_t)&v6); // 0x18029b92a
    while ((1 << ((char)v13 & 7) & v15) == 0) {
        // 0x18029b935
        v14++;
        unsigned char v16 = *(char *)v14; // 0x18029b935
        v13 = v16;
        if (v16 == 0) {
            // 0x18029b941
            return function_18026ad50(v11);
        }
        v15 = *(char *)(v13 / 8 + (int64_t)&v6);
    }
    // 0x18029b955
    return function_18026ad50(v11);
}

// Address range: 0x18029b970 - 0x18029bc6a
int64_t function_18029b970(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1 & 15; // 0x18029b985
    int64_t v3 = v1 - v2; // 0x18029b98c
    int128_t v4; // 0x18029b970
    __asm_xorps(v4, v4);
    uint64_t v5 = v2 - 1; // 0x18029b99a
    int128_t v6 = __asm_movdqu_18(*(int128_t *)v3); // 0x18029b99e
    if (v5 < 15) {
        // 0x18029b9a8
        return (int64_t)*(int32_t *)(4 * v5 + 0x18029bc6c) + 0x180000000;
    }
    // 0x18029ba1b
    int128_t v7; // 0x18029b970
    int32_t v8 = __asm_pmovmskb(__asm_pcmpeqb(__asm_xorps(v7, v7), v6)); // 0x18029ba28
    if (v8 == 0) {
        // 0x18029bb68
        if (*(char *)(v3 + 1) != 0) {
            // 0x18029bb72
            return function_18029b8d0(a1);
        }
    } else {
        uint32_t v9 = llvm_cttz_i32(v8, true); // 0x18029ba34
        if (v9 <= 15) {
            // 0x18029ba61
            return 15 - v9;
        }
    }
    char v10 = a1;
    if (v10 == 0) {
        // 0x18029bb9d
        return 0;
    }
    int64_t v11 = a1; // 0x18029bc1f
    int128_t v12 = __asm_movd((int32_t)v10); // 0x18029bc24
    int128_t v13 = __asm_punpcklbw(v12, v12); // 0x18029bc28
    int128_t v14 = __asm_pcmpeqb(__asm_pshufd(__asm_punpcklbw(v13, v13), 0), v6); // 0x18029bc35
    int64_t result = v11; // 0x18029bc3f
    while (__asm_pmovmskb(v14) == 0) {
        // 0x18029bc41
        v11++;
        char v15 = *(char *)v11; // 0x18029bc41
        result = 0;
        if (v15 == 0) {
            // break -> 0x18029bb9d
            return 0;
        }
        v12 = __asm_movd((int32_t)v15);
        v13 = __asm_punpcklbw(v12, v12);
        v14 = __asm_pcmpeqb(__asm_pshufd(__asm_punpcklbw(v13, v13), 0), v6);
        result = v11;
    }
    // 0x18029bb9d
    return result;
}

// Address range: 0x18029bc6d - 0x18029bc77
int64_t function_18029bc6d(void) {
    // 0x18029bc6d
    int64_t result; // 0x18029bc6d
    *(int32_t *)result = 0;
    return result;
}

// Address range: 0x18029bcfb - 0x18029bd11
int64_t function_18029bcfb(int64_t a1) {
    // 0x18029bcfb
    int64_t v1; // 0x18029bcfb
    *(int32_t *)v1 = 0;
    int64_t v2; // 0x18029bcfb
    int64_t v3 = v2;
    *(int32_t *)v3 = *(int32_t *)&v2 - (int32_t)v3;
    return unknown_17029e6cc(257 * a1 & 0xff00 | a1 & -0xff01);
}

// Address range: 0x18029bd28 - 0x18029bdc4
int64_t function_18029bd28(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x18029bd28
    if (a1 == 0 || a2 == 0) {
        // 0x18029bd45
        int64_t v1; // 0x18029bd28
        *(int32_t *)function_180279918(a1, a2, 0, v1) = 22;
        function_180271814(a1, a2, 0, v1);
        // 0x18029bdb9
        return 0;
    }
    // 0x18029bd5e
    if (a1 >= a2) {
        // 0x18029bdb9
        return 0;
    }
    // 0x18029bd63
    int64_t v2; // bp-40, 0x18029bd28
    function_1802718b0(&v2, 0);
    int64_t v3 = a2 - 1; // 0x18029bd75
    int64_t result = v3; // 0x18029bd7d
    int64_t v4; // 0x18029bd28
    if (*(int32_t *)(v4 + 8) != 0) {
        int64_t v5 = v3 - 1; // 0x18029bd7f
        while (v5 >= a1) {
            // 0x18029bd87
            if ((*(char *)(v4 + 25 + (int64_t)*(char *)v5) & 4) == 0) {
                // break -> 0x18029bd91
                return 0;
            }
            v5--;
        }
        // 0x18029bd91
        result = -1 - (a2 - v5 & 1) + a2;
    }
    // 0x18029bda3
    char v6; // 0x18029bd28
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(v2 + 936); // 0x18029bdaf
        *v7 = *v7 & -3;
    }
    // 0x18029bdb9
    return result;
}

// Address range: 0x18029bdc4 - 0x18029bdd8
int64_t function_18029bdc4(void) {
    // 0x18029bdc4
    return __acrt_initialize_multibyte() & 255 ^ 1;
}

// Address range: 0x18029bde0 - 0x18029bf7a
int64_t function_18029bde0(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x18029bde0
    int64_t v1; // 0x18029bde0
    if (g1298 != 0) {
        // 0x18029be3e
        if (a3 == 0) {
            // 0x18029bf65
            return 0;
        }
        if (a1 == 0 || a2 == 0) {
            // 0x18029be4f
            *(int32_t *)function_180279918(a1, a2, a3, v1) = 22;
            function_180271814(a1, a2, a3, v1);
            // 0x18029bf65
            return 0x7fffffff;
        }
        if (a3 < 0x80000000) {
            int64_t v2 = __vcrt_getptd2(a1); // 0x18029be92
            int64_t v3 = *(int64_t *)(v2 + 144); // bp-32, 0x18029beab
            int64_t v4 = *(int64_t *)(v2 + 136); // bp-24, 0x18029beb7
            __acrt_update_locale_info(v2, (int64_t)&v3);
            __acrt_update_locale_info2(v2, (int64_t)&v4);
            int32_t * v5 = (int32_t *)(v2 + 936); // 0x18029bed5
            int32_t v6 = *v5; // 0x18029bed5
            char v7 = 0; // 0x18029bedd
            if ((v6 & 2) == 0) {
                // 0x18029bedf
                *v5 = v6 | 2;
                v7 = 1;
            }
            int64_t v8 = *(int64_t *)(v3 + 304); // 0x18029bef2
            if (v8 == 0) {
                int64_t v9 = function_18029a870(a1, a2, a3); // 0x18029bf07
                if (v7 != 0) {
                    // 0x18029bf13
                    *v5 = *v5 & -3;
                }
                // 0x18029bf65
                return v9 & 0xffffffff & 0xffffffff;
            }
            int64_t v10 = a3 & 0xffffffff; // 0x18029bf27
            int64_t v11 = function_18029ce48(v8, 0x1001, a1, v10, a2, 0x100000000 * a3 / 0x100000000); // 0x18029bf37
            int64_t v12; // 0x18029bde0
            if ((int32_t)v11 != 0) {
                // 0x18029bf4d
                v12 = v11 + 0xfffffffe & 0xffffffff;
            } else {
                // 0x18029bf40
                *(int32_t *)function_180279918(v8, 0x1001, a1, v10) = 22;
                v12 = 0x7fffffff;
            }
            // 0x18029bf50
            if (v7 != 0) {
                // 0x18029bf57
                *v5 = *v5 & -3;
            }
            // 0x18029bf65
            return v12 & 0xffffffff;
        }
    } else {
        if (a1 == 0 || a2 == 0) {
            // 0x18029be0b
            *(int32_t *)function_180279918(a1, a2, a3, v1) = 22;
            function_180271814(a1, a2, a3, v1);
            // 0x18029bf65
            return 0x7fffffff;
        }
        if (a3 < 0x80000000) {
            // 0x18029bf65
            return function_18029a870(a1, a2, a3);
        }
    }
    // 0x18029be78
    *(int32_t *)function_180279918(a1, a2, a3, v1) = 22;
    function_180271814(a1, a2, a3, v1);
    // 0x18029bf65
    return 0x7fffffff;
}

// Address range: 0x18029bfc0 - 0x18029bfc5
int64_t function_18029bfc0(void) {
    // 0x18029bfc0
    return _msize_base();
}

// Address range: 0x18029bfc8 - 0x18029c09b
int64_t function_18029bfc8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1; // 0x18029bff7
    int64_t v2 = 0; // 0x18029bff7
    int64_t v3 = a2; // 0x18029bff7
    if ((char)a5 != 0) {
        // 0x18029bff9
        *(int16_t *)a2 = 45;
        v1 = -a1 & 0xffffffff;
        v2 = 1;
        v3 = a2 + 2;
    }
    uint64_t v4 = a4 & 0xffffffff; // 0x18029bfe3
    uint64_t v5 = v2; // 0x18029c008
    int64_t v6 = v3;
    int64_t v7 = v6 + 2; // 0x18029c00d
    uint64_t v8 = v1 & 0xffffffff; // 0x18029c016
    int64_t v9 = v8 / v4; // 0x18029c016
    uint64_t v10 = v8 % v4; // 0x18029c016
    int64_t v11 = (int32_t)v10 < 10 ? 48 : 87; // 0x18029c026
    v5++;
    *(int16_t *)v6 = (int16_t)(v11 + v10);
    while (v4 <= v8 == v5 < a3) {
        // 0x18029c00b
        v6 = v7;
        v7 = v6 + 2;
        v8 = v9 & 0xffffffff;
        v9 = v8 / v4;
        v10 = v8 % v4;
        v11 = (int32_t)v10 < 10 ? 48 : 87;
        v5++;
        *(int16_t *)v6 = (int16_t)(v11 + v10);
    }
    if (v5 >= a3) {
        // 0x18029c046
        *(int16_t *)a2 = 0;
        *(int32_t *)function_180279918(v9, v10, v3, v6) = 34;
        function_180271814(v9, v10, v3, v6);
        // 0x18029c082
        return 34;
    }
    // 0x18029c05f
    *(int16_t *)v7 = 0;
    int64_t v12 = v6; // 0x18029c05f
    for (int64_t i = v3; i < v12; i += 2) {
        int16_t * v13 = (int16_t *)i; // 0x18029c063
        int16_t * v14 = (int16_t *)v12; // 0x18029c067
        *v14 = *v13;
        v12 -= 2;
        *v13 = *v14;
    }
    // 0x18029c082
    return 0;
}

// Address range: 0x18029c09c - 0x18029c105
int64_t function_18029c09c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1; // 0x18029c0aa
    int64_t v2; // 0x18029c09c
    int64_t v3; // 0x18029c09c
    int64_t result; // 0x18029c09c
    if (a2 == 0 || a3 == 0) {
        goto lab_0x18029c0ac;
    } else {
        // 0x18029c0ca
        v1 = a5 & 255;
        *(int16_t *)a2 = 0;
        if (v1 >= a3 || v1 + 1 == a3) {
            int64_t v4 = function_180279918(v1, a2, a3, a4); // 0x18029c0db
            v2 = v1;
            v3 = v4;
            result = 34;
            goto lab_0x18029c0b6;
        } else {
            // 0x18029c0e7
            if ((int32_t)a4 < 37) {
                // 0x18029c0f4
                int64_t v5; // 0x18029c09c
                return function_18029bfc8(a1 & 0xffffffff, a2, a3, a4, v5);
            }
            goto lab_0x18029c0ac;
        }
    }
  lab_0x18029c0ac:;
    int64_t v6 = function_180279918(v1, a2, a3, a4); // 0x18029c0ac
    v2 = v1;
    v3 = v6;
    result = 22;
    goto lab_0x18029c0b6;
  lab_0x18029c0b6:
    // 0x18029c0b6
    *(int32_t *)v3 = (int32_t)result;
    function_180271814(v2, a2, a3, a4);
    return result;
}

// Address range: 0x18029c108 - 0x18029c128
int64_t function_18029c108(int64_t a1) {
    // 0x18029c108
    int64_t v1; // 0x18029c108
    int64_t v2; // 0x18029c108
    int64_t v3; // 0x18029c108
    return function_18029c09c(a1, v3, v2, v1, (int64_t)(bool)((int32_t)a1 < 0 == (int32_t)v1 == 10));
}

// Address range: 0x18029c130 - 0x18029c166
int64_t function_18029c130(int64_t a1, int16_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1; // 0x18029c144
    uint32_t v3; // 0x18029c130
    if ((int16_t)v1 == 0) {
        // 0x18029c157
        v3 = 0;
        return (int64_t)(-v3 / 0x80000000 - v3 / 0x80000000);
    }
    v2 += 2;
    uint16_t v4 = *(int16_t *)v2; // 0x18029c146
    int32_t v5 = (int32_t)*(int16_t *)(a1 - v1 + v2) - (int32_t)v4; // 0x18029c153
    int32_t v6 = v5; // 0x18029c155
    while (v5 == 0) {
        // 0x18029c141
        v6 = 0;
        if (v4 == 0) {
            // break -> 0x18029c157
            return 0;
        }
        v2 += 2;
        v4 = *(int16_t *)v2;
        v5 = (int32_t)*(int16_t *)(a1 - v1 + v2) - (int32_t)v4;
        v6 = v5;
    }
    // 0x18029c157
    v3 = v6;
    return (int64_t)(-v3 / 0x80000000 - v3 / 0x80000000);
}

// Address range: 0x18029c170 - 0x18029c1df
int64_t function_18029c170(int32_t * a1, uint32_t a2, int32_t a3) {
    uint32_t v1 = a3 & -0x80001; // 0x18029c176
    if ((a2 & -0x30f0320 & a3) == 0) {
        int64_t v2 = function_18029cf80(a2, v1);
        if (a1 == NULL) {
            // 0x18029c1d2
            return 0;
        }
        // 0x18029c1c3
        *a1 = (int32_t)v2;
        return 0;
    }
    int64_t v3 = (int64_t)a1; // 0x18029c190
    int64_t v4 = a2; // 0x18029c190
    if (a1 != NULL) {
        // 0x18029c192
        *a1 = (int32_t)function_18029cf80(0, 0);
        v3 = 0;
        v4 = 0;
    }
    int64_t v5 = v1; // 0x18029c176
    int64_t v6 = a2; // 0x18029c180
    *(int32_t *)function_180279918(v3, v4, v5, v6) = 22;
    function_180271814(v3, v4, v5, v6);
    return 22;
}

// Address range: 0x18029c1e0 - 0x18029c200
int64_t function_18029c1e0(int64_t * a1) {
    // 0x18029c1e0
    *(int32_t *)a1 = (int32_t)function_18029a580();
    *(int32_t *)((int64_t)a1 + 4) = (int32_t)function_18029a660();
    return 0;
}

// Address range: 0x18029c200 - 0x18029c261
int64_t function_18029c200(int64_t * a1) {
    // 0x18029c200
    int64_t v1; // 0x18029c200
    int32_t v2 = v1;
    function_18029a6c0(v2);
    int32_t * v3 = (int32_t *)((int64_t)a1 + 4); // 0x18029c214
    function_18029a7f0(*v3);
    int32_t v4 = 0; // 0x18029c223
    if ((int32_t)function_18029c1e0((int64_t *)&v4) != 0 || v4 != v2) {
        // 0x18029c251
        return 1;
    }
    // 0x18029c239
    int32_t v5; // 0x18029c200
    return *v3 != v5;
}

// Address range: 0x18029c270 - 0x18029c2c1
int64_t function_18029c270(int64_t * a1) {
    int32_t v1 = 0; // bp+16, 0x18029c280
    if ((int32_t)function_18029c1e0((int64_t *)&v1) != 0) {
        // 0x18029c2b6
        return 1;
    }
    int32_t v2 = v1;
    v1 = v2 | 31;
    *a1 = (int64_t)v2;
    if ((int32_t)function_18029c200((int64_t *)&v1) != 0) {
        // 0x18029c2b6
        return 1;
    }
    // 0x18029c2a9
    function_18029cf10();
    return 0;
}

// Address range: 0x18029c2d0 - 0x18029c39a
int64_t function_18029c2d0(void) {
    // 0x18029c2d0
    int128_t v1; // 0x18029c2d0
    if (g734 > 1) {
        v1 = function_18028a3d0();
    }
    // 0x18029c2f0
    int128_t v2; // 0x18029c2d0
    int64_t v3 = __asm_movq_20(__asm_movsd_24(__asm_xorps(v2, v2), v1)); // 0x18029c304
    uint64_t result = v3 & 0x7fffffffffffffff; // 0x18029c30c
    if (result >= 0x4330000000000000) {
        // 0x18029c326
        if (result >= 0x7ff0000000000001) {
            // 0x18029c335
            return function_18028a2c0(v3);
        }
        // 0x18029c399
        return result;
    }
    if (result >= 0x3ff0000000000000) {
        int64_t result2 = -1 << (51 - v3 / 0x10000000000000 & 63) & v3; // 0x18029c37f
        int128_t v4 = __asm_movq(result2); // 0x18029c382
        if (v3 > -1 && result2 != v3) {
            // 0x18029c391
            __asm_addsd(v4, 0x3ff0000000000000);
        }
        // 0x18029c399
        return result2;
    }
    // 0x18029c346
    if (result == 0) {
        // 0x18029c399
        return 0;
    }
    if (v3 > -1) {
        // 0x18029c360
        __asm_movsd(0x3ff0000000000000);
        return result;
    }
    // 0x18029c350
    __asm_movq(-0x8000000000000000);
    return -0x8000000000000000;
}

// Address range: 0x18029c94c - 0x18029c953
int64_t function_18029c94c(void) {
    // 0x18029c94c
    return (uint32_t)g1354;
}

// Address range: 0x18029c954 - 0x18029c9a6
int64_t function_18029c954(void) {
    int64_t v1 = g776; // 0x18029c967
    if (g776 == -2) {
        // 0x18029c969
        v1 = (int64_t)CreateFileW(L"CONOUT$", 0x40000000, 3, NULL, 3, 0, NULL);
        g776 = v1;
    }
    // 0x18029c997
    return v1 != -1;
}

// Address range: 0x18029c9a8 - 0x18029c9c4
int64_t function_18029c9a8(void) {
    uint64_t hObject = g776; // 0x18029c9ac
    int64_t handleClosed; // 0x18029c9a8
    if (hObject < 0xfffffffffffffffe) {
        // 0x18029c9b9
        handleClosed = CloseHandle((int64_t *)hObject);
    }
    // 0x18029c9bf
    return handleClosed;
}

// Address range: 0x18029c9c4 - 0x18029ca82
int64_t function_18029c9c4(int16_t * lpBuffer, int64_t a2, int32_t * lpNumberOfCharsWritten) {
    int32_t nNumberOfCharsToWrite = a2; // 0x18029c9e5
    bool v1 = WriteConsoleW((int64_t *)g776, (int64_t *)lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, NULL); // 0x18029c9f5
    if (v1 || GetLastError() != 6) {
        // 0x18029ca6b
        return v1 ? 0xffffffff : 0;
    }
    uint64_t hObject = g776; // 0x18029ca0c
    if (hObject < 0xfffffffffffffffe) {
        // 0x18029ca19
        CloseHandle((int64_t *)hObject);
    }
    int64_t * hConsoleOutput = CreateFileW(L"CONOUT$", 0x40000000, 3, NULL, 3, 0, NULL); // 0x18029ca44
    g776 = (int64_t)hConsoleOutput;
    // 0x18029ca6b
    return WriteConsoleW(hConsoleOutput, (int64_t *)lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, NULL) ? 0xffffffff : 0;
}

// Address range: 0x18029ca84 - 0x18029cab4
int64_t function_18029ca84(int64_t * a1) {
    // 0x18029ca84
    int64_t result; // 0x18029ca84
    if (a1 != NULL) {
        // 0x18029caa4
        *(int32_t *)a1 = g1356;
        result = 0;
    } else {
        int64_t v1 = (int64_t)a1;
        int64_t v2; // 0x18029ca84
        int64_t v3; // 0x18029ca84
        int64_t v4; // 0x18029ca84
        *(int32_t *)function_180279918(v1, v4, v3, v2) = 22;
        function_180271814(v1, v4, v3, v2);
        result = 22;
    }
    // 0x18029caaf
    return result;
}

// Address range: 0x18029cab4 - 0x18029cb98
int64_t function_18029cab4(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(8 * 0x100000000 * a1 / 0x4000000000 + (int64_t)&g1307); // 0x18029cae0
    int64_t v2 = *v1; // 0x18029cae0
    int64_t v3 = 72 * (a1 & 63); // 0x18029cae8
    char * v4 = (char *)(v3 + 56 + v2); // 0x18029cae8
    char v5 = *v4; // 0x18029cae8
    int64_t v6 = v3 + 57;
    char v7 = *(char *)(v2 + v6); // 0x18029caee
    int32_t v8 = a2; // 0x18029cafb
    switch (v8) {
        case 0x4000: {
            // 0x18029cb52
            *v4 = v5 | -128;
            *(char *)(*v1 + v6) = 0;
            // break -> 0x18029cb64
            return 0;
        }
        case 0x8000: {
            // 0x18029cb48
            *v4 = v5 & 127;
            // break -> 0x18029cb64
            return 0;
        }
        default: {
            if ((v8 - 0x10000 & -0x10001) == 0) {
                // 0x18029cb34
                *v4 = v5 | -128;
                *(char *)(*v1 + v6) = 2;
            } else {
                if (v8 == 0x40000) {
                    // 0x18029cb20
                    *v4 = v5 | -128;
                    *(char *)(*v1 + v6) = 1;
                }
            }
            // break -> 0x18029cb64
            return 0;
        }
    }
    // 0x18029cb64
    if (v5 > -1) {
        // 0x18029cb88
        return 0x8000;
    }
    int64_t result = 0x4000; // 0x18029cb72
    if (v7 != 0) {
        // 0x18029cb7b
        result = v7 == 1 ? 0x40000 : 0x10000;
    }
    // 0x18029cb88
    return result;
}

// Address range: 0x18029cb98 - 0x18029cc30
int64_t function_18029cb98(int64_t a1, int64_t a2) {
    int64_t v1 = 0; // bp-72, 0x18029cbaa
    if (g1298 == 0) {
        // 0x18029cbc8
        int128_t v2; // 0x18029cb98
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x18029cbd8
    return function_18029cc30(a1, a2, &v1) & 0xffffffff;
}

// Address range: 0x18029cc30 - 0x18029cdbe
int64_t function_18029cc30(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = a1 & 0xffffffff; // 0x18029cc55
    int64_t v3; // 0x18029cc30
    int64_t v4 = function_180290af0(a1, 0, 1, v3); // 0x18029cc5c
    int64_t v5 = function_180290af0(v2, 0, 2, v3); // 0x18029cc6d
    int64_t v6; // 0x18029cc30
    int64_t v7; // 0x18029cc30
    int64_t v8; // 0x18029cc30
    int64_t v9; // 0x18029cc30
    int64_t v10; // 0x18029cc9f
    if (v4 == -1 || v5 == -1) {
        // 0x18029cd7d
        if (*(char *)(v1 + 48) == 0) {
            // 0x18029cd8f
            function_180290af0(v2, (int32_t)v4, 0, v7);
            return 22;
        }
        goto lab_0x18029cd85;
    } else {
        int64_t v11 = a2 - v5; // 0x18029cc75
        if (v11 < 1) {
            // 0x18029cd2b
            if (v11 == 0) {
                // 0x18029cd8f
                function_180290af0(v2, (int32_t)v4, 0, v7);
                return 0;
            }
            // 0x18029cd2d
            if (function_180290af0(v2, (int32_t)a2, 0, v3) != -1) {
                int64_t hFile = function_18029a168(v2); // 0x18029cd4c
                int64_t v12 = 0; // 0x18029cd5c
                if (!SetEndOfFile((int64_t *)hFile)) {
                    int32_t errorCode = GetLastError(); // 0x18029cd5e
                    *(char *)(v1 + 56) = 1;
                    *(int32_t *)(v1 + 52) = errorCode;
                    *(char *)(v1 + 48) = 1;
                    *(int32_t *)(v1 + 44) = 13;
                    v12 = 13;
                }
                // 0x18029cd8f
                function_180290af0(v2, (int32_t)v4, 0, v7);
                return v12 & 0xffffffff;
            }
            // 0x18029cd41
            if (*(char *)(v1 + 48) == 0) {
                // 0x18029cd8f
                function_180290af0(v2, (int32_t)v4, 0, v7);
                return 0;
            }
            goto lab_0x18029cd85;
        } else {
            int64_t * v13 = _calloc_base(0x1000, 1); // 0x18029cc9f
            v10 = (int64_t)v13;
            if (v13 != NULL) {
                int64_t v14 = function_18029cab4(v2, 0x8000) & 0xffffffff; // 0x18029ccc5
                int64_t v15 = v11;
                int64_t v16 = v15 < 0x1000 == (4095 - v15 & v15) < 0 ? 0x1000 : v15 & 0xffffffff; // 0x18029ccdc
                int64_t v17 = function_18028f6e8(v2, v10, v16, v1); // 0x18029cce0
                while ((int32_t)v17 != -1) {
                    int64_t v18 = v15 - 0x100000000 * v17 / 0x100000000; // 0x18029ccec
                    if (v18 >= 0 != v18 != 0) {
                        // 0x18029ccf4
                        function_18029cab4(v2, v14);
                        v9 = v14;
                        v8 = 0;
                        v6 = v1;
                        goto lab_0x18029cd21;
                    }
                    v15 = v18;
                    v16 = v15 < 0x1000 == (4095 - v15 & v15) < 0 ? 0x1000 : v15 & 0xffffffff;
                    v17 = function_18028f6e8(v2, v10, v16, v1);
                }
                // 0x18029cd01
                if (*(char *)(v1 + 56) != 0) {
                    // 0x18029cd07
                    if (*(int32_t *)(v1 + 52) == 5) {
                        // 0x18029cd0d
                        *(char *)(v1 + 48) = 1;
                        *(int32_t *)(v1 + 44) = 13;
                    }
                }
                // 0x18029cd18
                v9 = v10;
                v8 = 0;
                v6 = v1;
                if (*(char *)(v1 + 48) != 0) {
                    // 0x18029cd1e
                    v9 = v10;
                    v8 = (int64_t)*(int32_t *)(v1 + 44);
                    v6 = v1;
                }
            } else {
                int64_t v19 = v10 + 12; // 0x18029ccac
                *(char *)(v1 + 48) = 1;
                *(int32_t *)(v1 + 44) = (int32_t)v19;
                v9 = 1;
                v8 = v19 & 0xffffffff;
            }
            goto lab_0x18029cd21;
        }
    }
  lab_0x18029cd85:
    // 0x18029cd8f
    function_180290af0(v2, (int32_t)v4, 0, v7);
    return (int64_t)*(int32_t *)(v1 + 44) & 0xffffffff;
  lab_0x18029cd21:
    // 0x18029cd21
    function_18028acc0(v10, v9);
    // 0x18029cd8f
    function_180290af0(v2, (int32_t)v4, 0, v6);
    return v8 & 0xffffffff;
}

// Address range: 0x18029cdc0 - 0x18029ce47
int64_t function_18029cdc0(int64_t a1, int64_t a2, int16_t * a3, int64_t a4, int16_t * a5, int32_t a6) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = 0x100000000 * a4 / 0x100000000; // 0x18029cdd4
    int64_t v3 = v2; // 0x18029cde2
    if ((int32_t)a4 >= 1) {
        int64_t v4 = function_18027e500(v1, v2); // 0x18029cdea
        v3 = v4 + (int64_t)(v4 < v2) & 0xffffffff;
    }
    // 0x18029cdf8
    return function_18028e228(a1, a2 & 0xffffffff, v1, v3 & 0xffffffff, (int64_t)a5, (int64_t)a6, 0, 0, 0);
}

// Address range: 0x18029ce48 - 0x18029cf05
int64_t function_18029ce48(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // 0x18029ce61
    int64_t v2 = v1; // 0x18029ce6f
    if ((int32_t)a4 >= 1) {
        // 0x18029ce71
        v2 = function_18027e500(a3, v1);
    }
    int64_t v3 = 0x100000000 * a6 / 0x100000000; // 0x18029ce7f
    int32_t v4 = v3;
    int32_t v5 = v4; // 0x18029ce91
    int64_t v6 = v3; // 0x18029ce91
    if (v4 >= 1) {
        // 0x18029ce93
        v6 = function_18027e500(a5, v3);
        v5 = v6;
    }
    // 0x18029ce9e
    int64_t result; // 0x18029ce48
    if ((int32_t)v2 == 0 || v5 == 0) {
        int32_t v7 = v2 - v6; // 0x18029ceda
        result = (int64_t)(v7 == 0 ? 2 : (v7 >> 31 & -2) + 3);
    } else {
        // 0x18029cea6
        result = function_18028dd18(a1, a2 & 0xffffffff, a3, v2 & 0xffffffff, a5, 0x100000000 * v6 / 0x100000000, 0, 0, 0);
    }
    // 0x18029ceea
    return result;
}

// Address range: 0x18029cf10 - 0x18029cf74
int64_t function_18029cf10(void) {
    // 0x18029cf10
    int64_t v1; // 0x18029cf10
    int64_t v2; // 0x18029cf10
    uint64_t v3 = function_18028a8d0(v2, v1); // 0x18029cf14
    if ((v3 & 63) == 0) {
        // 0x18029cf6f
        return 0;
    }
    int64_t result = 2 * v3 & 8 | 16 * v3 & 16 | v3 / 2 & 4 | v3 / 8 & 2 | v3 / 32 & 1;
    if ((v3 & 2) == 0) {
        // 0x18029cf6f
        return result;
    }
    // 0x18029cf64
    return result | 0x80000;
}

// Address range: 0x18029cf80 - 0x18029d221
int64_t function_18029cf80(int32_t a1, int32_t a2) {
    uint64_t v1 = function_18028a970(); // 0x18029cfa4
    int64_t v2 = v1 / 8 & 16; // 0x18029cfb3
    int64_t v3 = (v1 & 512) == 0 ? v2 : v2 | 8; // 0x18029cfc2
    int64_t v4 = (v1 & 1024) == 0 ? v3 : v3 | 4; // 0x18029cfd0
    int64_t v5 = ((v1 & 2048) == 0 ? v4 : v4 | 2) & 0xffffffff | (int64_t)((v1 & 0x1000) != 0); // 0x18029cfe9
    int64_t v6 = (v1 & 256) == 0 ? v5 : v5 | 0x80000; // 0x18029cff6
    int32_t v7 = v1; // 0x18029cff9
    int32_t v8 = v7 & 0x6000; // 0x18029cff9
    int64_t v9 = v6; // 0x18029cf80
    int64_t v10; // 0x18029cf80
    switch (v8) {
        case 0x2000: {
            // 0x18029d023
            v9 = v6 | 256;
        }
        case 0: {
          lab_0x18029d027:;
            int32_t v11 = v7 & 0x8040; // 0x18029d027
            if (v11 == 64) {
                // 0x18029d051
                v10 = v9 & 0xfdffffff | 0x2000000;
            } else {
                int32_t v12 = v11 - 0x8000; // 0x18029d034
                if (v12 == 0) {
                    // 0x18029d049
                    v10 = v9 & 0xfcffffff | 0x3000000;
                } else {
                    // 0x18029d03d
                    v10 = v9;
                    if (v12 == 64) {
                        // 0x18029d043
                        v10 = v9 & 0xfeffffff | 0x1000000;
                    }
                }
            }
            // break -> 0x18029d055
            return 0;
        }
        case 0x4000: {
            // 0x18029d01d
            v9 = v6 | 512;
            // branch (via goto) -> 0x18029d027
            goto lab_0x18029d027;
        }
        default: {
            // 0x18029d00e
            v9 = v8 != 0x6000 ? v6 : v6 | 768;
            // branch (via goto) -> 0x18029d027
            goto lab_0x18029d027;
        }
    }
    int32_t v13 = a2 & 0x308031f;
    int64_t v14 = v10 & (int64_t)(-1 - v13) | (int64_t)(v13 & a1); // 0x18029d060
    int32_t v15 = v14; // 0x18029d063
    if (v15 == (int32_t)v10) {
        // 0x18029d214
        return v10 & 0xffffffff;
    }
    int64_t v16 = 64 * v14 & 512 | 8 * v14 & 128 | 256 * v14 & 1024 | 1024 * v14 & 2048 | 0x1000 * v14 & 0x1000;
    int64_t v17 = (v14 & 0x80000) == 0 ? v16 : v16 | 256; // 0x18029d0b4
    int64_t v18 = v17 & 0xffffffff; // 0x18029d0b4
    int32_t v19 = v15 & 768; // 0x18029d0ba
    int64_t v20 = v18; // 0x18029cf80
    int64_t v21; // 0x18029cf80
    switch (v19) {
        case 256: {
            // 0x18029d0e8
            v20 = v17 & 0xffffdfff | 0x2000;
        }
        case 0: {
          lab_0x18029d0f0:;
            int64_t v22 = v14 & 0x3000000; // 0x18029d0f0
            if (v22 == 0x1000000) {
                // 0x18029d11d
                v21 = v20 & 0xffff7fbf | 0x8040;
            } else {
                int32_t v23 = v22; // 0x18029d100
                if (v23 == 0x2000000) {
                    // 0x18029d118
                    v21 = v20 & 0xffffffbf | 64;
                } else {
                    // 0x18029d109
                    v21 = v20;
                    if (v23 == 0x3000000) {
                        // 0x18029d112
                        v21 = v20 & 0xffff7fff | 0x8000;
                    }
                }
            }
            // break -> 0x18029d127
            return 0;
        }
        case 512: {
            // 0x18029d0e2
            v20 = v17 & 0xffffbfff | 0x4000;
            // branch (via goto) -> 0x18029d0f0
            goto lab_0x18029d0f0;
        }
        default: {
            // 0x18029d0cf
            v20 = v18;
            if (v19 == 768) {
                // 0x18029d0da
                v20 = v17 & 0xffff9fff | 0x6000;
            }
            // branch (via goto) -> 0x18029d0f0
            goto lab_0x18029d0f0;
        }
    }
    // 0x18029d127
    int64_t v24; // 0x18029cf80
    if (g777 == 0 || (v21 & 64) == 0) {
        int64_t v25 = v21 & 0xffffffbf; // 0x18029d155
        function_18028a980(v25);
        v24 = v25;
    } else {
        // 0x18029d135
        function_18028a980(v21 & 0xffffffff);
        v24 = v21;
    }
    int64_t v26 = v24 / 8 & 16; // 0x18029d164
    int64_t v27 = (v24 & 512) == 0 ? v26 : v26 | 8; // 0x18029d170
    int64_t v28 = (v24 & 1024) == 0 ? v27 : v27 | 4; // 0x18029d17c
    int64_t v29 = (v24 & 2048) == 0 ? v28 : v28 | 2; // 0x18029d188
    int64_t v30 = v29 & 0xffffffff | (int64_t)((v24 & 0x1000) != 0); // 0x18029d194
    int64_t v31 = (v24 & 256) == 0 ? v30 : v30 | 0x80000; // 0x18029d1a1
    int32_t v32 = v24; // 0x18029d1a4
    int32_t v33 = v32 & 0x6000; // 0x18029d1a6
    int64_t v34 = v31; // 0x18029cf80
    int32_t v35; // 0x18029d1d4
    switch (v33) {
        case 0x2000: {
            // 0x18029d1d0
            v34 = v31 | 256;
        }
        case 0: {
          lab_0x18029d1d4:
            // 0x18029d1d4
            v35 = v32 & 0x8040;
            if (v35 == 64) {
                // 0x18029d214
                return (v34 & 0xfdffffff | 0x2000000) & 0xffffffff;
            }
            // break -> 0x18029d1df
            return 0;
        }
        case 0x4000: {
            // 0x18029d1ca
            v34 = v31 | 512;
            // branch (via goto) -> 0x18029d1d4
            goto lab_0x18029d1d4;
        }
        default: {
            // 0x18029d1bb
            v34 = v33 != 0x6000 ? v31 : v31 | 768;
            // branch (via goto) -> 0x18029d1d4
            goto lab_0x18029d1d4;
        }
    }
    int32_t v36 = v35 - 0x8000; // 0x18029d1df
    if (v36 == 0) {
        // 0x18029d1fd
        return v34 & 0xfcffffff | 0x3000000;
    }
    // 0x18029d1e7
    if (v36 != 64) {
        // 0x18029d214
        return v34 & 0xffffffff;
    }
    // 0x18029d1ec
    return v34 & 0xfeffffff | 0x1000000;
}

// Address range: 0x18029d230 - 0x18029d246
int64_t function_18029d230(void) {
    // 0x18029d230
    if (g1356 == 0) {
        // 0x18029d239
        g1356 = 0x4000;
    }
    // 0x18029d243
    return 0;
}

// Address range: 0x18029d2a0 - 0x18029d2ea
int64_t function_18029d2a0(int64_t * a1) {
    int64_t result = function_18029d2f0(0x180000000); // 0x18029d2b7
    if ((int32_t)result == 0) {
        // 0x18029d2df
        return result;
    }
    int64_t v1 = _FindPESection(0x180000000, (int64_t)a1 - 0x180000000); // 0x18029d2c9
    int64_t result2 = 0; // 0x18029d2d1
    if (v1 != 0) {
        // 0x18029d2d3
        result2 = (int64_t)(*(int32_t *)(v1 + 36) >> 31 ^ 1);
    }
    // 0x18029d2df
    return result2;
}

// Address range: 0x18029d2f0 - 0x18029d31b
int64_t function_18029d2f0(int64_t a1) {
    if ((int16_t)a1 != 0x5a4d) {
        // 0x18029d318
        return 0;
    }
    int64_t v1 = (int64_t)*(int32_t *)(a1 + 60) + a1; // 0x18029d2fe
    if (*(int32_t *)v1 != 0x4550) {
        // 0x18029d318
        return 0;
    }
    // 0x18029d309
    return *(int16_t *)(v1 + 24) == 523;
}

// Address range: 0x18029d31c - 0x18029d39b
int64_t function_18029d31c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a4 + 56) + 4; // 0x18029d34b
    function_18026ac54(a2, a4, v1);
    int64_t result = 1; // 0x18029d36d
    if ((((*(int32_t *)(a1 + 4) & 102) == 0 ? 1 : 2) & *(int32_t *)v1) != 0) {
        // 0x18029d36f
        result = function_18026ce04(a1, a2, a3, a4);
    }
    // 0x18029d380
    return result;
}

// Address range: 0x18029d39c - 0x18029d3c6
int64_t function_18029d39c(int64_t TargetFrame, int64_t TargetIp, int64_t a3, int64_t a4) {
    // 0x18029d39c
    RtlUnwind((int64_t *)TargetFrame, (int64_t *)TargetIp, NULL, NULL);
    return &g1381;
}

// Address range: 0x18029d3c8 - 0x18029d444
int64_t function_18029d3c8(int64_t a1, int64_t a2) {
    int128_t v1 = __asm_pshuflw(__asm_movd((int32_t)a2 & 0xffff), 0); // 0x18029d3d7
    int128_t v2 = __asm_pshufd(v1, 0); // 0x18029d3dc
    int16_t v3 = a2;
    int128_t v4 = v1; // 0x18029d3dc
    int64_t v5 = a1; // 0x18029d3dc
    int64_t v6; // 0x18029d3c8
    int32_t v7; // 0x18029d404
    while (true) {
        // 0x18029d3e1
        v6 = v5;
        int128_t v8 = v4;
        int64_t v9; // 0x18029d3c8
        if ((v6 & 4095) < 4081) {
            int128_t v10 = __asm_movdqu_18(*(int128_t *)v6); // 0x18029d3f1
            int128_t v11 = __asm_orps(__asm_pcmpeqw(__asm_xorps(v8, v8), v10), __asm_pcmpeqw(v10, v2)); // 0x18029d401
            v7 = __asm_pmovmskb(v11);
            v4 = v11;
            v9 = 16;
            if (v7 != 0) {
                // break -> 0x18029d429
                return 0;
            }
        } else {
            int16_t v12 = *(int16_t *)v6; // 0x18029d413
            int64_t result = v6; // 0x18029d417
            if (v12 == v3) {
                // 0x18029d43d
                return result;
            }
            // 0x18029d419
            v4 = v8;
            v9 = 2;
            if (v12 == 0) {
                // 0x18029d43d
                return 0;
            }
        }
        // 0x18029d424
        v5 = v9 + v6;
    }
    int64_t v13 = v6 + (int64_t)llvm_cttz_i32(v7, true); // 0x18029d42c
    return *(int16_t *)v13 == v3 ? v13 : 0;
}

// Address range: 0x18029d460 - 0x18029d462
int64_t function_18029d460(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18029d460
    int64_t result; // 0x18029d460
    return result;
}

// Address range: 0x18029d480 - 0x18029d486
int64_t function_18029d480(void) {
    // 0x18029d480
    int64_t v1; // 0x18029d480
    int64_t v2; // 0x18029d480
    int64_t v3; // 0x18029d480
    int64_t v4; // 0x18029d480
    return function_18029d460(v4, v3, v2, v1);
}

// Address range: 0x18029d4a0 - 0x18029d4a6
int64_t function_18029d4a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18029d4a0
    return function_18029d460(a1, a2, a3, a4);
}

// Address range: 0x18029d4d0 - 0x18029d4e0
int64_t function_18029d4d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18029d4d0
    __asm_rep_movsb_memcpy((char *)a1, (char *)a2, a3);
    int64_t result; // 0x18029d4d0
    return result;
}

// Address range: 0x18029d4e0 - 0x18029db4d
int64_t function_18029d4e0(int64_t result, uint64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = result;
    if (a3 < 16) {
        // 0x18029d4f4
        return result;
    }
    if (a3 < 33) {
        int128_t v3 = __asm_movdqu_18(*(int128_t *)&v1); // 0x18029d606
        int64_t v4 = a3 - 16;
        int128_t v5 = __asm_movdqu_18(*(int128_t *)(v1 + v4)); // 0x18029d60a
        __asm_movdqu(*(int128_t *)&v2, v3);
        __asm_movdqu(*(int128_t *)(v2 + v4), v5);
        return result;
    }
    // 0x18029d61d
    if ((a2 < result ? a3 + a2 : result) > result) {
        int128_t v6 = __asm_movups_16(*(int128_t *)&v1); // 0x18029da70
        int64_t v7 = v1; // 0x18029da73
        v1 = v7 - v2;
        int64_t v8 = a3 - 16;
        int64_t v9 = v2 + v8; // 0x18029da79
        int128_t v10 = __asm_movups_16(*(int128_t *)(v7 + v8)); // 0x18029da79
        v2 = v9;
        int128_t v11 = v10; // 0x18029da89
        int64_t v12 = v8; // 0x18029da89
        if ((v9 & 15) != 0) {
            int64_t v13 = v9 & -16; // 0x18029da8e
            v2 = v13;
            int128_t v14 = __asm_movups_16(v10); // 0x18029da92
            v11 = __asm_movups_16(*(int128_t *)(v1 + v13));
            __asm_movups(*(int128_t *)v9, v14);
            v12 = v13 - result;
        }
        int128_t v15 = v11; // 0x18029daaa
        int64_t v16 = v12; // 0x18029daaa
        if (v12 >= 128) {
            // 0x18029daac
            *(int128_t *)v2 = (int128_t)__asm_movaps_19(v11);
            int64_t v17 = v12 / 128; // 0x18029daaf
            int128_t v18 = __asm_movups_16(*(int128_t *)(v2 - 16 + v1)); // 0x18029dac7
            int128_t v19 = __asm_movups_16(*(int128_t *)(v2 - 32 + v1)); // 0x18029dacc
            int64_t v20 = v2; // 0x18029dad1
            int64_t v21 = v20 - 128; // 0x18029dad1
            v2 = v21;
            *(int128_t *)(v20 - 16) = (int128_t)__asm_movaps_19(v18);
            *(int128_t *)(v20 - 32) = (int128_t)__asm_movaps_19(v19);
            int64_t v22 = v20 - 48; // 0x18029dae0
            int128_t v23 = __asm_movups_16(*(int128_t *)(v1 + v22)); // 0x18029dae0
            int64_t v24 = v20 - 64; // 0x18029dae5
            int128_t v25 = __asm_movups_16(*(int128_t *)(v1 + v24)); // 0x18029dae5
            v17--;
            *(int128_t *)v22 = (int128_t)__asm_movaps_19(v23);
            *(int128_t *)v24 = (int128_t)__asm_movaps_19(v25);
            int64_t v26 = v20 - 80; // 0x18029daf5
            int128_t v27 = __asm_movups_16(*(int128_t *)(v1 + v26)); // 0x18029daf5
            int64_t v28 = v20 - 96; // 0x18029dafa
            int128_t v29 = __asm_movups_16(*(int128_t *)(v1 + v28)); // 0x18029dafa
            *(int128_t *)v26 = (int128_t)__asm_movaps_19(v27);
            *(int128_t *)v28 = (int128_t)__asm_movaps_19(v29);
            int128_t v30 = __asm_movups_16(*(int128_t *)(v20 - 112 + v1)); // 0x18029db07
            int128_t v31 = __asm_movups_16(*(int128_t *)(v1 + v21)); // 0x18029db0c
            *(int128_t *)(v2 + 16) = (int128_t)__asm_movaps_19(v30);
            while (v17 != 0) {
                // 0x18029dac0
                *(int128_t *)v2 = (int128_t)__asm_movaps_19(v31);
                v18 = __asm_movups_16(*(int128_t *)(v2 - 16 + v1));
                v19 = __asm_movups_16(*(int128_t *)(v2 - 32 + v1));
                v20 = v2;
                v21 = v20 - 128;
                v2 = v21;
                *(int128_t *)(v20 - 16) = (int128_t)__asm_movaps_19(v18);
                *(int128_t *)(v20 - 32) = (int128_t)__asm_movaps_19(v19);
                v22 = v20 - 48;
                v23 = __asm_movups_16(*(int128_t *)(v1 + v22));
                v24 = v20 - 64;
                v25 = __asm_movups_16(*(int128_t *)(v1 + v24));
                v17--;
                *(int128_t *)v22 = (int128_t)__asm_movaps_19(v23);
                *(int128_t *)v24 = (int128_t)__asm_movaps_19(v25);
                v26 = v20 - 80;
                v27 = __asm_movups_16(*(int128_t *)(v1 + v26));
                v28 = v20 - 96;
                v29 = __asm_movups_16(*(int128_t *)(v1 + v28));
                *(int128_t *)v26 = (int128_t)__asm_movaps_19(v27);
                *(int128_t *)v28 = (int128_t)__asm_movaps_19(v29);
                v30 = __asm_movups_16(*(int128_t *)(v20 - 112 + v1));
                v31 = __asm_movups_16(*(int128_t *)(v1 + v21));
                *(int128_t *)(v2 + 16) = (int128_t)__asm_movaps_19(v30);
            }
            // 0x18029db12
            v15 = __asm_movaps(v31);
            v16 = v12 & 127;
        }
        int128_t v32 = v15; // 0x18029db24
        if (v16 >= 16) {
            __asm_movups(*(int128_t *)v2, v15);
            int64_t v33 = v2 - 16; // 0x18029db33
            v2 = v33;
            int128_t v34 = __asm_movups_16(*(int128_t *)(v1 + v33)); // 0x18029db37
            int64_t v35 = v16 / 16 - 1; // 0x18029db3b
            int128_t v36 = v34; // 0x18029db3e
            int64_t v37 = v35; // 0x18029db3e
            v32 = v34;
            while (v35 != 0) {
                // 0x18029db30
                __asm_movups(*(int128_t *)v2, v36);
                v33 = v2 - 16;
                v2 = v33;
                v34 = __asm_movups_16(*(int128_t *)(v1 + v33));
                v35 = v37 - 1;
                v36 = v34;
                v37 = v35;
                v32 = v34;
            }
        }
        // 0x18029db40
        if ((v16 & 15) != 0) {
            // 0x18029db46
            __asm_movups(*(int128_t *)&v2, v6);
        }
        // 0x18029db49
        __asm_movups(*(int128_t *)v2, v32);
        return result;
    }
    // 0x18029d631
    if (g734 < 3) {
        int64_t result2 = result; // 0x18029d927
        if (a3 >= 2049) {
            // 0x18029d929
            result2 = result;
            if ((*(char *)&g1265 & 2) != 0) {
                result2 = function_18029d4d0(result, a2, a3);
            }
        }
        // 0x18029d936
        __asm_movdqu_18(*(int128_t *)&v1);
        __asm_movdqu_18(*(int128_t *)(a3 - 16 + v1));
        if (a3 < 129) {
            // 0x18029d4f4
            return result2;
        }
        int64_t v38 = v2 | -16; // 0x18029d955
        v2 -= v38;
        int64_t v39 = v1 - v38; // 0x18029d95c
        v1 = v39;
        int64_t v40 = v38 + a3; // 0x18029d95f
        int64_t v41 = v39; // 0x18029d969
        if (v40 < 129) {
            // 0x18029d4f4
            return result2;
        }
        for (int64_t i = v40; i >= 255; i -= 128) {
            int128_t v42 = __asm_movdqu_18(*(int128_t *)v41); // 0x18029d970
            int128_t v43 = __asm_movdqu_18(*(int128_t *)(v1 + 16)); // 0x18029d974
            int128_t v44 = __asm_movdqu_18(*(int128_t *)(v1 + 32)); // 0x18029d979
            int128_t v45 = __asm_movdqu_18(*(int128_t *)(v1 + 48)); // 0x18029d97e
            __asm_movdqa(*(int128_t *)v2, v42);
            __asm_movdqa(*(int128_t *)(v2 + 16), v43);
            __asm_movdqa(*(int128_t *)(v2 + 32), v44);
            __asm_movdqa(*(int128_t *)(v2 + 48), v45);
            int128_t v46 = __asm_movdqu_18(*(int128_t *)(v1 + 64)); // 0x18029d996
            int128_t v47 = __asm_movdqu_18(*(int128_t *)(v1 + 80)); // 0x18029d99b
            int128_t v48 = __asm_movdqu_18(*(int128_t *)(v1 + 96)); // 0x18029d9a0
            int128_t v49 = __asm_movdqu_18(*(int128_t *)(v1 + 112)); // 0x18029d9a5
            __asm_movdqa(*(int128_t *)(v2 + 64), v46);
            __asm_movdqa(*(int128_t *)(v2 + 80), v47);
            __asm_movdqa(*(int128_t *)(v2 + 96), v48);
            __asm_movdqa(*(int128_t *)(v2 + 112), v49);
            v2 += 128;
            v41 = v1 + 128;
            v1 = v41;
        }
        // 0x18029d4f4
        return result2;
    }
    int64_t result3 = result; // 0x18029d645
    if (a3 < 0x180001) {
        // 0x18029d650
        result3 = result;
        if ((*(char *)&g1265 & 2) != 0) {
            result3 = function_18029d4d0(result, a2, a3);
        }
    }
    // 0x18029d65d
    __asm_vmovdqu(*(int256_t *)&v1);
    __asm_vmovdqu(*(int256_t *)(a3 - 32 + v1));
    if (a3 < 257) {
        // 0x18029d4f4
        return result3;
    }
    int64_t v50 = v2 | -32; // 0x18029d67c
    v2 -= v50;
    int64_t v51 = v1 - v50; // 0x18029d683
    v1 = v51;
    int64_t v52 = v50 + a3; // 0x18029d686
    if (v52 < 257) {
        // 0x18029d4f4
        return result3;
    }
    int64_t v53 = v52; // 0x18029d69d
    int64_t v54 = v52; // 0x18029d69d
    if (v52 < 0x180001) {
        int256_t v55 = __asm_vmovdqu(*(int256_t *)v51); // 0x18029d6b0
        int256_t v56 = __asm_vmovdqu(*(int256_t *)(v1 + 32)); // 0x18029d6b4
        int256_t v57 = __asm_vmovdqu(*(int256_t *)(v1 + 64)); // 0x18029d6b9
        int256_t v58 = __asm_vmovdqu(*(int256_t *)(v1 + 96)); // 0x18029d6be
        __asm_vmovdqa(*(int256_t *)v2, v55);
        __asm_vmovdqa(*(int256_t *)(v2 + 32), v56);
        __asm_vmovdqa(*(int256_t *)(v2 + 64), v57);
        __asm_vmovdqa(*(int256_t *)(v2 + 96), v58);
        int256_t v59 = __asm_vmovdqu(*(int256_t *)(v1 + 128)); // 0x18029d6d6
        int256_t v60 = __asm_vmovdqu(*(int256_t *)(v1 + 160)); // 0x18029d6de
        int256_t v61 = __asm_vmovdqu(*(int256_t *)(v1 + 192)); // 0x18029d6e6
        int256_t v62 = __asm_vmovdqu(*(int256_t *)(v1 + 224)); // 0x18029d6ee
        __asm_vmovdqa(*(int256_t *)(v2 + 128), v59);
        __asm_vmovdqa(*(int256_t *)(v2 + 160), v60);
        __asm_vmovdqa(*(int256_t *)(v2 + 192), v61);
        __asm_vmovdqa(*(int256_t *)(v2 + 224), v62);
        v2 += 256;
        int64_t v63 = v1 + 256; // 0x18029d71d
        v1 = v63;
        v53 -= 256;
        while (v53 >= 256) {
            // 0x18029d6b0
            v55 = __asm_vmovdqu(*(int256_t *)v63);
            v56 = __asm_vmovdqu(*(int256_t *)(v1 + 32));
            v57 = __asm_vmovdqu(*(int256_t *)(v1 + 64));
            v58 = __asm_vmovdqu(*(int256_t *)(v1 + 96));
            __asm_vmovdqa(*(int256_t *)v2, v55);
            __asm_vmovdqa(*(int256_t *)(v2 + 32), v56);
            __asm_vmovdqa(*(int256_t *)(v2 + 64), v57);
            __asm_vmovdqa(*(int256_t *)(v2 + 96), v58);
            v59 = __asm_vmovdqu(*(int256_t *)(v1 + 128));
            v60 = __asm_vmovdqu(*(int256_t *)(v1 + 160));
            v61 = __asm_vmovdqu(*(int256_t *)(v1 + 192));
            v62 = __asm_vmovdqu(*(int256_t *)(v1 + 224));
            __asm_vmovdqa(*(int256_t *)(v2 + 128), v59);
            __asm_vmovdqa(*(int256_t *)(v2 + 160), v60);
            __asm_vmovdqa(*(int256_t *)(v2 + 192), v61);
            __asm_vmovdqa(*(int256_t *)(v2 + 224), v62);
            v2 += 256;
            v63 = v1 + 256;
            v1 = v63;
            v53 -= 256;
        }
    } else {
        int256_t v64 = __asm_vmovdqu(*(int256_t *)v51); // 0x18029d7e0
        int256_t v65 = __asm_vmovdqu(*(int256_t *)(v1 + 32)); // 0x18029d7e4
        int256_t v66 = __asm_vmovdqu(*(int256_t *)(v1 + 64)); // 0x18029d7e9
        int256_t v67 = __asm_vmovdqu(*(int256_t *)(v1 + 96)); // 0x18029d7ee
        __asm_vmovntdq(*(int256_t *)v2, v64);
        __asm_vmovntdq(*(int256_t *)(v2 + 32), v65);
        __asm_vmovntdq(*(int256_t *)(v2 + 64), v66);
        __asm_vmovntdq(*(int256_t *)(v2 + 96), v67);
        int256_t v68 = __asm_vmovdqu(*(int256_t *)(v1 + 128)); // 0x18029d806
        int256_t v69 = __asm_vmovdqu(*(int256_t *)(v1 + 160)); // 0x18029d80e
        int256_t v70 = __asm_vmovdqu(*(int256_t *)(v1 + 192)); // 0x18029d816
        int256_t v71 = __asm_vmovdqu(*(int256_t *)(v1 + 224)); // 0x18029d81e
        __asm_vmovntdq(*(int256_t *)(v2 + 128), v68);
        __asm_vmovntdq(*(int256_t *)(v2 + 160), v69);
        __asm_vmovntdq(*(int256_t *)(v2 + 192), v70);
        __asm_vmovntdq(*(int256_t *)(v2 + 224), v71);
        v2 += 256;
        int64_t v72 = v1 + 256; // 0x18029d84d
        v1 = v72;
        v54 -= 256;
        while (v54 >= 256) {
            // 0x18029d7e0
            v64 = __asm_vmovdqu(*(int256_t *)v72);
            v65 = __asm_vmovdqu(*(int256_t *)(v1 + 32));
            v66 = __asm_vmovdqu(*(int256_t *)(v1 + 64));
            v67 = __asm_vmovdqu(*(int256_t *)(v1 + 96));
            __asm_vmovntdq(*(int256_t *)v2, v64);
            __asm_vmovntdq(*(int256_t *)(v2 + 32), v65);
            __asm_vmovntdq(*(int256_t *)(v2 + 64), v66);
            __asm_vmovntdq(*(int256_t *)(v2 + 96), v67);
            v68 = __asm_vmovdqu(*(int256_t *)(v1 + 128));
            v69 = __asm_vmovdqu(*(int256_t *)(v1 + 160));
            v70 = __asm_vmovdqu(*(int256_t *)(v1 + 192));
            v71 = __asm_vmovdqu(*(int256_t *)(v1 + 224));
            __asm_vmovntdq(*(int256_t *)(v2 + 128), v68);
            __asm_vmovntdq(*(int256_t *)(v2 + 160), v69);
            __asm_vmovntdq(*(int256_t *)(v2 + 192), v70);
            __asm_vmovntdq(*(int256_t *)(v2 + 224), v71);
            v2 += 256;
            v72 = v1 + 256;
            v1 = v72;
            v54 -= 256;
        }
    }
    // 0x18029d4f4
    return result3;
}

// Address range: 0x18029db70 - 0x18029db80
int64_t function_18029db70(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x18029db70
    __asm_rep_stosb_memset((char *)a1, (char)a2, a3);
    return result;
}

// Address range: 0x18029db80 - 0x18029decb
int64_t function_18029db80(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = result;
    int64_t v2 = a2 & 255; // 0x18029db8d
    int128_t v3 = __asm_movq(0x101010101010101 * v2); // 0x18029db9e
    if (a3 < 16) {
        // 0x18029dbad
        return result;
    }
    int128_t v4 = __asm_punpcklqdq(v3, v3); // 0x18029dc30
    if (a3 < 33) {
        // 0x18029dc3a
        __asm_movdqu(*(int128_t *)&v1, v4);
        __asm_movdqu(*(int128_t *)(a3 - 16 + v1), v4);
        return result;
    }
    // 0x18029dc46
    if (g734 < 3) {
        int64_t result2 = result; // 0x18029de37
        if (g736 < a3) {
            // 0x18029de39
            result2 = result;
            if ((*(char *)&g1265 & 2) != 0) {
                result2 = function_18029db70(v1, v2, a3, result);
            }
        }
        int64_t v5 = v1 | -16; // 0x18029de4d
        int64_t v6 = v1 - v5; // 0x18029de51
        v1 = v6;
        int64_t v7 = v5 + a3; // 0x18029de57
        int64_t v8 = v6; // 0x18029de61
        if (v7 < 129) {
            // 0x18029dbad
            return result2;
        }
        for (int64_t i = v7; i >= 255; i -= 128) {
            // 0x18029de70
            __asm_movdqa(*(int128_t *)v8, v4);
            __asm_movdqa(*(int128_t *)(v1 + 16), v4);
            __asm_movdqa(*(int128_t *)(v1 + 32), v4);
            __asm_movdqa(*(int128_t *)(v1 + 48), v4);
            __asm_movdqa(*(int128_t *)(v1 + 64), v4);
            __asm_movdqa(*(int128_t *)(v1 + 80), v4);
            __asm_movdqa(*(int128_t *)(v1 + 96), v4);
            __asm_movdqa(*(int128_t *)(v1 + 112), v4);
            v8 = v1 + 128;
            v1 = v8;
        }
        // 0x18029dbad
        return result2;
    }
    int64_t result3 = result; // 0x18029dc5a
    if (g737 >= a3 && g736 < a3) {
        // 0x18029dc65
        result3 = result;
        if ((*(char *)&g1265 & 2) != 0) {
            result3 = function_18029db70(v1, v2, a3, result);
        }
    }
    // 0x18029dc72
    int256_t v9; // 0x18029db80
    int256_t v10 = __asm_vinsertf128(v9, v4, 1); // 0x18029dc72
    int64_t v11 = v1 | -32; // 0x18029dc7f
    int64_t v12 = v1 - v11; // 0x18029dc83
    v1 = v12;
    int64_t v13 = v11 + a3; // 0x18029dc89
    if (v13 < 257) {
        // 0x18029dbad
        return result3;
    }
    int64_t v14 = v13; // 0x18029dc9c
    int64_t v15 = v13; // 0x18029dc9c
    if (v13 > g737) {
        __asm_vmovntdq(*(int256_t *)v12, v10);
        __asm_vmovntdq(*(int256_t *)(v1 + 32), v10);
        __asm_vmovntdq(*(int256_t *)(v1 + 64), v10);
        __asm_vmovntdq(*(int256_t *)(v1 + 96), v10);
        __asm_vmovntdq(*(int256_t *)(v1 + 128), v10);
        __asm_vmovntdq(*(int256_t *)(v1 + 160), v10);
        __asm_vmovntdq(*(int256_t *)(v1 + 192), v10);
        __asm_vmovntdq(*(int256_t *)(v1 + 224), v10);
        int64_t v16 = v1 + 256; // 0x18029dda3
        v1 = v16;
        v15 -= 256;
        while (v15 >= 256) {
            // 0x18029dd70
            __asm_vmovntdq(*(int256_t *)v16, v10);
            __asm_vmovntdq(*(int256_t *)(v1 + 32), v10);
            __asm_vmovntdq(*(int256_t *)(v1 + 64), v10);
            __asm_vmovntdq(*(int256_t *)(v1 + 96), v10);
            __asm_vmovntdq(*(int256_t *)(v1 + 128), v10);
            __asm_vmovntdq(*(int256_t *)(v1 + 160), v10);
            __asm_vmovntdq(*(int256_t *)(v1 + 192), v10);
            __asm_vmovntdq(*(int256_t *)(v1 + 224), v10);
            v16 = v1 + 256;
            v1 = v16;
            v15 -= 256;
        }
        // 0x18029dbad
        return result3;
    }
    __asm_vmovdqa(*(int256_t *)v12, v10);
    __asm_vmovdqa(*(int256_t *)(v1 + 32), v10);
    __asm_vmovdqa(*(int256_t *)(v1 + 64), v10);
    __asm_vmovdqa(*(int256_t *)(v1 + 96), v10);
    __asm_vmovdqa(*(int256_t *)(v1 + 128), v10);
    __asm_vmovdqa(*(int256_t *)(v1 + 160), v10);
    __asm_vmovdqa(*(int256_t *)(v1 + 192), v10);
    __asm_vmovdqa(*(int256_t *)(v1 + 224), v10);
    int64_t v17 = v1 + 256; // 0x18029dce3
    v1 = v17;
    v14 -= 256;
    while (v14 >= 256) {
        // 0x18029dcb0
        __asm_vmovdqa(*(int256_t *)v17, v10);
        __asm_vmovdqa(*(int256_t *)(v1 + 32), v10);
        __asm_vmovdqa(*(int256_t *)(v1 + 64), v10);
        __asm_vmovdqa(*(int256_t *)(v1 + 96), v10);
        __asm_vmovdqa(*(int256_t *)(v1 + 128), v10);
        __asm_vmovdqa(*(int256_t *)(v1 + 160), v10);
        __asm_vmovdqa(*(int256_t *)(v1 + 192), v10);
        __asm_vmovdqa(*(int256_t *)(v1 + 224), v10);
        v17 = v1 + 256;
        v1 = v17;
        v14 -= 256;
    }
    // 0x18029dbad
    return result3;
}

// Address range: 0x18029decb - 0x18029df08
int64_t function_18029decb(int64_t a1) {
    // 0x18029decb
    int64_t v1; // 0x18029decb
    int64_t v2 = v1 + a1;
    int128_t v3; // 0x18029decb
    __asm_movdqu(*(int128_t *)(v2 - 128), v3);
    __asm_movdqu(*(int128_t *)(v2 - 112), v3);
    __asm_movdqu(*(int128_t *)(v2 - 96), v3);
    __asm_movdqu(*(int128_t *)(v2 - 80), v3);
    __asm_movdqu(*(int128_t *)(v2 - 64), v3);
    __asm_movdqu(*(int128_t *)(v2 - 48), v3);
    __asm_movdqu(*(int128_t *)(v2 - 32), v3);
    int64_t v4; // 0x18029decb
    __asm_movdqu(*(int128_t *)(a1 - 16 + v4), v3);
    int64_t v5; // 0x18029decb
    int128_t result = *(int128_t *)&v5; // 0x18029df03
    __asm_movdqu(result, v3);
    return result;
}

// Address range: 0x18029df20 - 0x18029dfe7
int64_t function_18029df20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x18029df20
    int64_t v2 = a1; // 0x18029df27
    int64_t v3 = a3; // 0x18029df27
    bool v4; // 0x18029df20
    int64_t v5; // 0x18029df20
    int64_t v6; // 0x18029df20
    int64_t v7; // 0x18029df20
    int64_t v8; // 0x18029df20
    int64_t v9; // 0x18029df20
    if (a3 < 8) {
        goto lab_0x18029df4b;
    } else {
        int64_t v10 = a1; // 0x18029df2c
        int64_t v11 = a3; // 0x18029df2c
        v5 = a3;
        v9 = a1;
        if ((a1 & 7) == 0) {
            goto lab_0x18029df6a;
        } else {
            unsigned char v12 = *(char *)v10; // 0x18029df30
            int64_t v13; // 0x18029df20
            int64_t v14 = v13 & -256 | (int64_t)v12; // 0x18029df30
            unsigned char v15 = *(char *)(v10 + v1); // 0x18029df32
            while (v12 == v15) {
                int64_t v16 = v10 + 1; // 0x18029df37
                int64_t v17 = v11 - 1; // 0x18029df3a
                v10 = v16;
                v11 = v17;
                if ((v16 & 7) == 0) {
                    // 0x18029df42
                    v7 = v14;
                    v2 = v16;
                    v3 = v17;
                    v5 = v17;
                    v9 = v16;
                    v6 = v14;
                    if (v17 >= 8) {
                        goto lab_0x18029df6a;
                    } else {
                        goto lab_0x18029df4b;
                    }
                }
                v12 = *(char *)v10;
                v14 = v14 & -256 | (int64_t)v12;
                v15 = *(char *)(v10 + v1);
            }
            // 0x18029df63
            v4 = v12 < v15;
            v8 = v14;
            goto lab_0x18029df63;
        }
    }
  lab_0x18029dfcc_2:;
    // 0x18029dfcc
    int64_t v18; // 0x18029df20
    int64_t v19 = v1 + 8 + v18; // 0x18029dfcc
    int64_t v20; // 0x18029df20
    int64_t v21 = v20; // 0x18029dfcc
    goto lab_0x18029dfd4;
  lab_0x18029df4b:;
    int64_t v29 = v2; // 0x18029df4e
    if (v3 == 0) {
        // 0x18029df5f
        return 0;
    }
    int64_t v30 = v3; // 0x18029df4e
    unsigned char v31 = *(char *)v29; // 0x18029df50
    int64_t v32 = v7 & -256 | (int64_t)v31; // 0x18029df50
    unsigned char v33 = *(char *)(v29 + v1); // 0x18029df52
    while (v31 == v33) {
        int64_t v34 = v30 - 1; // 0x18029df5a
        v29++;
        v30 = v34;
        if (v34 == 0) {
            // 0x18029df5f
            return 0;
        }
        v31 = *(char *)v29;
        v32 = v32 & -256 | (int64_t)v31;
        v33 = *(char *)(v29 + v1);
    }
    // 0x18029df63
    v4 = v31 < v33;
    v8 = v32;
    goto lab_0x18029df63;
  lab_0x18029df63:;
    uint32_t v35 = (int32_t)v8; // 0x18029df63
    int32_t v36 = v4; // 0x18029df63
    uint32_t v37 = v35 + v36; // 0x18029df63
    int32_t v38 = v4; // 0x18029df63
    bool v39 = v4 ? v38 - v36 > v35 | v37 != -1 : v37 > v35; // 0x18029df63
    return (int32_t)!v39 + v38;
  lab_0x18029df6a:;
    int64_t v40 = v9; // 0x18029df6e
    int64_t v41 = v5 / 32; // 0x18029df6e
    int64_t v42 = v6; // 0x18029df6e
    int64_t v43 = v9; // 0x18029df6e
    int64_t v44 = v5; // 0x18029df6e
    if (v5 < 32) {
        goto lab_0x18029dfa7;
    } else {
        int64_t v45 = *(int64_t *)v40; // 0x18029df70
        int64_t v46 = v40 + v1;
        v19 = v46;
        v21 = v45;
        while (v45 == *(int64_t *)v46) {
            int64_t v47 = v40 + 8;
            int64_t v48 = *(int64_t *)v47; // 0x18029df79
            int64_t v49 = v47 + v1;
            v19 = v49;
            v21 = v48;
            if (v48 != *(int64_t *)v49) {
                // break -> 0x18029dfd4
                return 0;
            }
            int64_t v50 = v40 + 16; // 0x18029df84
            int64_t v51 = *(int64_t *)v50; // 0x18029df84
            v18 = v47;
            v20 = v51;
            if (v51 != *(int64_t *)(v50 + v1)) {
                goto lab_0x18029dfcc_2;
            }
            int64_t v52 = v40 + 24; // 0x18029df8f
            int64_t v53 = *(int64_t *)v52; // 0x18029df8f
            v18 = v50;
            v20 = v53;
            if (v53 != *(int64_t *)(v52 + v1)) {
                goto lab_0x18029dfcc_2;
            }
            int64_t v54 = v40 + 32; // 0x18029df9a
            int64_t v55 = v41 - 1; // 0x18029df9e
            v40 = v54;
            v41 = v55;
            if (v55 == 0) {
                // 0x18029dfa3
                v42 = v53;
                v43 = v54;
                v44 = v5 & 31;
                goto lab_0x18029dfa7;
            }
            v45 = *(int64_t *)v40;
            v46 = v40 + v1;
            v19 = v46;
            v21 = v45;
        }
        goto lab_0x18029dfd4;
    }
  lab_0x18029dfa7:
    // 0x18029dfa7
    v7 = v42;
    v2 = v43;
    v3 = v44;
    int64_t v56 = v43; // 0x18029dfae
    int64_t v57 = v44 / 8; // 0x18029dfae
    if (v44 < 8) {
        goto lab_0x18029df4b;
    } else {
        int64_t v58 = *(int64_t *)v56; // 0x18029dfb0
        int64_t v59 = v56 + v1;
        v19 = v59;
        v21 = v58;
        while (v58 == *(int64_t *)v59) {
            int64_t v60 = v56 + 8; // 0x18029dfb9
            int64_t v61 = v57 - 1; // 0x18029dfbd
            v56 = v60;
            v57 = v61;
            if (v61 == 0) {
                // 0x18029dfc2
                v7 = v58;
                v2 = v60;
                v3 = v44 & 7;
                goto lab_0x18029df4b;
            }
            v58 = *(int64_t *)v56;
            v59 = v56 + v1;
            v19 = v59;
            v21 = v58;
        }
        goto lab_0x18029dfd4;
    }
  lab_0x18029dfd4:;
    uint64_t v22 = llvm_bswap_i64(v21); // 0x18029dfd8
    uint64_t v23 = llvm_bswap_i64(*(int64_t *)v19); // 0x18029dfdb
    uint32_t v24 = (int32_t)v22; // 0x18029dfe1
    int32_t v25 = v22 < v23; // 0x18029dfe1
    uint32_t v26 = v25 + v24; // 0x18029dfe1
    int32_t v27 = v22 < v23; // 0x18029dfe1
    bool v28 = v22 < v23 ? v27 - v25 > v24 | v26 != -1 : v26 > v24; // 0x18029dfe1
    return (int32_t)!v28 + v27;
}

// Address range: 0x18029e000 - 0x18029e090
int64_t function_18029e000(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x1010101 * (a2 & 255); // 0x18029e003
    int128_t v2 = __asm_pshufd(__asm_movd((int32_t)v1), 0); // 0x18029e00d
    int64_t result = 0; // 0x18029e018
    int64_t v3 = a1; // 0x18029e018
    int64_t v4 = a3; // 0x18029e018
    int64_t v5; // 0x18029e000
    int64_t v6; // 0x18029e000
    int64_t v7; // 0x18029e000
    int64_t v8; // 0x18029e000
    if (a3 < 32) {
        goto lab_0x18029e079_2;
    } else {
        // 0x18029e01a
        v7 = a1;
        v5 = a3;
        if ((a1 & 15) != 0) {
            int64_t v9 = a1 | -16; // 0x18029e021
            int64_t v10 = v9 + a3; // 0x18029e025
            int64_t v11 = a1 - v9; // 0x18029e028
            int64_t v12 = v9; // 0x18029e02b
            v6 = v12;
            v8 = v11;
            while (*(char *)(v12 + v11) != (char)v1) {
                int64_t v13 = v12 + 1; // 0x18029e035
                v12 = v13;
                if (v13 == 0) {
                    // 0x18029e03a
                    v7 = v11;
                    v5 = v10;
                    result = v13;
                    v3 = v11;
                    v4 = v10;
                    if (v10 < 32) {
                        goto lab_0x18029e079_2;
                    } else {
                        goto lab_0x18029e040;
                    }
                }
                v6 = v12;
                v8 = v11;
            }
          lab_0x18029e08c_2:
            // 0x18029e08c
            return v8 + v6;
        }
        goto lab_0x18029e040;
    }
  lab_0x18029e079_2:
    // 0x18029e079
    if (v4 == 0) {
        // 0x18029e08b
        return result;
    }
    int64_t v14 = v3; // 0x18029e000
    int64_t v15 = v4; // 0x18029e000
    while (*(char *)v14 != (char)v1) {
        int64_t v16 = v15 - 1; // 0x18029e085
        v14++;
        v15 = v16;
        if (v16 == 0) {
            // 0x18029e08b
            return result;
        }
    }
    // 0x18029e08c
    return v14 + result;
  lab_0x18029e040:;
    int64_t v17 = v5; // 0x18029e000
    int64_t v18 = v7;
    int32_t v19 = __asm_pmovmskb(__asm_pcmpeqb(__asm_movdqa_11(*(int128_t *)v18), v2)); // 0x18029e048
    while (v19 == 0) {
        int64_t v20 = v18 + 16; // 0x18029e053
        int32_t v21 = __asm_pmovmskb(__asm_pcmpeqb(__asm_movdqa_11(*(int128_t *)v20), v2)); // 0x18029e060
        if (v21 != 0) {
            // 0x18029e08c
            v6 = llvm_cttz_i64((int64_t)v21, true);
            v8 = v20;
            return v8 + v6;
        }
        int64_t v22 = v18 + 32; // 0x18029e06b
        int64_t v23 = v17 - 32; // 0x18029e06f
        v17 = v23;
        if (v23 < 32) {
            // 0x18029e079
            result = v21;
            v3 = v22;
            v4 = v23;
            goto lab_0x18029e079_2;
        }
        v18 = v22;
        v19 = __asm_pmovmskb(__asm_pcmpeqb(__asm_movdqa_11(*(int128_t *)v18), v2));
    }
    // 0x18029e08c
    return v18 + llvm_cttz_i64((int64_t)v19, true);
}

// Address range: 0x18029e0a0 - 0x18029e148
int64_t function_18029e0a0(int64_t a1) {
    int64_t v1 = a1; // 0x18029e0ac
    if ((a1 & 7) != 0) {
        int64_t v2 = a1;
        int64_t v3 = v2 + 1; // 0x18029e0b2
        while (*(char *)v2 != 0) {
            // 0x18029e0b9
            v1 = v3;
            if ((v3 & 7) == 0) {
                goto lab_0x18029e0bd;
            }
            v2 = v3;
            v3 = v2 + 1;
        }
        // 0x18029e118
        return v3 + -1 - a1;
    }
  lab_0x18029e0bd:;
    int64_t v4 = v1; // 0x18029e0c7
    int64_t v5; // 0x18029e0a0
    while (true) {
        // 0x18029e0d1
        v5 = v4;
        uint64_t v6 = *(int64_t *)v5; // 0x18029e0d1
        int64_t v7 = v5 + 8; // 0x18029e0d7
        if (((v6 ^ -0x7efefefefefeff00 ^ v6 + 0x7efefefefefefeff) & -0x7efefefefefeff00) != 0) {
            if ((char)v6 == 0) {
                // break -> 0x18029e142
                return 0;
            }
            if ((v6 & 0xff00) == 0) {
                // 0x18029e13c
                return 1 - a1 + v5;
            }
            if ((v6 & 0xff0000) == 0) {
                // 0x18029e136
                return 2 - a1 + v5;
            }
            if ((v6 & 0xff000000) == 0) {
                // 0x18029e130
                return 3 - a1 + v5;
            }
            if ((v6 & 0xff00000000) == 0) {
                // 0x18029e12a
                return 4 - a1 + v5;
            }
            if ((v6 & 0xff0000000000) == 0) {
                // 0x18029e124
                return 5 - a1 + v5;
            }
            if ((v6 & 0xff000000000000) == 0) {
                // 0x18029e11e
                return 6 - a1 + v5;
            }
            int64_t v8 = v7; // 0x18029e116
            if (v6 < 0x100000000000000) {
                // 0x18029e118
                return v8 + -1 - a1;
            }
        }
        // 0x18029e0d1
        v4 = v7;
    }
    // 0x18029e142
    return v5 - a1;
}

// Address range: 0x18029e160 - 0x18029e1c7
int64_t function_18029e160(int64_t a1, int64_t a2) {
    int64_t v1 = a2 - a1; // 0x18029e160
    int64_t v2 = a1; // 0x18029e166
    int64_t v3 = a1; // 0x18029e166
    if ((a1 & 7) == 0) {
      lab_0x18029e17c:;
        int64_t v4 = v3;
        v2 = v4;
        while (((int32_t)v4 + (int32_t)v1 & 4095) < 4089) {
            int64_t v5 = *(int64_t *)v4; // 0x18029e1a0
            v2 = v4;
            if (v5 != *(int64_t *)(v4 + v1)) {
                // break -> 0x18029e168
                return 0;
            }
            // 0x18029e1a9
            if (((v5 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v5 - 0x101010101010101) != 0) {
                // 0x18029e1bc
                return 0;
            }
            v4 += 8;
            v2 = v4;
        }
    }
    int64_t v6 = v2; // 0x18029e170
    unsigned char v7 = *(char *)v6; // 0x18029e168
    unsigned char v8 = *(char *)(v6 + v1); // 0x18029e16b
    while (v7 == v8) {
        if (v7 == 0) {
            // 0x18029e1bc
            return 0;
        }
        // 0x18029e177
        v6++;
        v3 = v6;
        if ((v6 & 7) == 0) {
            goto lab_0x18029e17c;
        }
        v7 = *(char *)v6;
        v8 = *(char *)(v6 + v1);
    }
    // 0x18029e1bf
    return v7 < v8 ? -1 : 1;
}

// Address range: 0x18029e1e0 - 0x18029e342
int64_t function_18029e1e0(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x18029e20c
        return result;
    }
    int64_t v1 = result - a2; // 0x18029e1e8
    int64_t v2 = a2; // 0x18029e1ee
    int64_t v3 = a3; // 0x18029e1ee
    int64_t v4 = a2; // 0x18029e1ee
    int64_t v5 = a3; // 0x18029e1ee
    int64_t v6; // 0x18029e1e0
    int64_t v7; // 0x18029e1e0
    int64_t v8; // 0x18029e1e0
    int64_t v9; // 0x18029e1e0
    uint64_t v10; // 0x18029e218
    int64_t v11; // 0x18029e21b
    if ((a2 & 7) == 0) {
      lab_0x18029e218:
        // 0x18029e218
        v8 = v4;
        v6 = v5;
        while (true) {
          lab_0x18029e218_3:
            // 0x18029e218
            v7 = v6;
            v9 = v8;
            v10 = *(int64_t *)v9;
            v11 = v7 - 8;
            if (v7 < 8 || v11 == 0) {
                if (v7 == 0) {
                    // break -> 0x18029e20c
                    return 0;
                }
                goto lab_0x18029e251;
            } else {
                if (((v10 ^ -0x7efefefefefeff00 ^ v10 + 0x7efefefefefefeff) & -0x7efefefefefeff00) == 0) {
                    // 0x18029e210
                    *(int64_t *)(v9 + v1) = v10;
                    // 0x18029e218
                    v8 = v9 + 8;
                    v6 = v11;
                    goto lab_0x18029e218_3;
                } else {
                    goto lab_0x18029e251;
                }
            }
        }
        // 0x18029e20c
        return result;
    }
    char v12 = *(char *)v2; // 0x18029e1f0
    int64_t v13 = v2 + v1;
    *(char *)v13 = v12;
    int64_t v14 = v13; // 0x18029e1f7
    int64_t v15 = v2; // 0x18029e1f7
    int64_t v16 = v3; // 0x18029e1f7
    while (v12 != 0) {
        // 0x18029e1fd
        v3--;
        if (v3 == 0) {
            // 0x18029e20c
            return result;
        }
        // 0x18029e205
        v2++;
        v4 = v2;
        v5 = v3;
        if ((v2 & 7) == 0) {
            goto lab_0x18029e218;
        }
        v12 = *(char *)v2;
        v13 = v2 + v1;
        *(char *)v13 = v12;
        v14 = v13;
        v15 = v2;
        v16 = v3;
    }
  lab_0x18029e2e0_8:;
    int64_t v17 = v16; // 0x18029e2ea
    int64_t v18 = v14; // 0x18029e2ea
    if (v16 >= 16) {
        int64_t v19 = v14; // 0x18029e2ef
        int64_t v20 = v16; // 0x18029e2ef
        if ((v14 & 7) != 0) {
            int64_t v21 = v14 + 1; // 0x18029e2f1
            *(char *)v21 = 0;
            int64_t v22 = v21; // 0x18029e2ef
            while ((v21 & 7) != 0) {
                // 0x18029e2f1
                v21 = v22 + 1;
                *(char *)v21 = 0;
                v22 = v21;
            }
            // 0x18029e2ec
            v19 = v21;
            v20 = v16 + -1 - ((v15 + result ^ 7) + a2 & 7);
        }
        int64_t v23 = v20 - 32; // 0x18029e2fb
        int64_t v24 = v19; // 0x18029e2ff
        int64_t v25 = v23; // 0x18029e2ff
        if (v20 >= 32) {
            uint64_t v26 = v23;
            *(int64_t *)v19 = 0;
            *(int64_t *)(v19 + 8) = 0;
            *(int64_t *)(v19 + 16) = 0;
            *(int64_t *)(v19 + 24) = 0;
            int64_t v27 = v19 + 32; // 0x18029e310
            int64_t v28 = v26 - 32; // 0x18029e314
            int64_t v29 = v27; // 0x18029e318
            v24 = v27;
            v25 = v28;
            while (v26 >= 32) {
                // 0x18029e301
                v26 = v28;
                *(int64_t *)v29 = 0;
                *(int64_t *)(v29 + 8) = 0;
                *(int64_t *)(v29 + 16) = 0;
                *(int64_t *)(v29 + 24) = 0;
                v27 = v29 + 32;
                v28 = v26 - 32;
                v29 = v27;
                v24 = v27;
                v25 = v28;
            }
        }
        int64_t v30 = v25 + 32; // 0x18029e31a
        int64_t v31 = v24; // 0x18029e322
        int64_t v32 = v30; // 0x18029e322
        if (v30 >= 8) {
            int64_t v33 = v30 - 8; // 0x18029e31e
            *(int64_t *)v24 = 0;
            int64_t v34 = v24 + 8; // 0x18029e327
            int64_t v35 = v33; // 0x18029e322
            int64_t v36 = v34; // 0x18029e322
            while (v33 >= 8) {
                // 0x18029e324
                v33 = v35 - 8;
                *(int64_t *)v36 = 0;
                v34 = v36 + 8;
                v35 = v33;
                v36 = v34;
            }
            // 0x18029e31e
            v31 = v34;
            v32 = v25 & 7;
        }
        // 0x18029e331
        v17 = v32;
        v18 = v31;
        if (v32 == 0) {
            // 0x18029e20c
            return result;
        }
    }
    int64_t v37 = v18; // 0x18029e1e0
    int64_t v38 = v17 - 1; // 0x18029e331
    *(char *)v37 = 0;
    int64_t v39 = v38; // 0x18029e335
    v37++;
    while (v38 != 0) {
        // 0x18029e337
        v38 = v39 - 1;
        *(char *)v37 = 0;
        v39 = v38;
        v37++;
    }
    // 0x18029e20c
    return result;
  lab_0x18029e251:;
    char v40 = v10; // 0x18029e251
    int64_t v41 = v9 + v1;
    *(char *)v41 = v40;
    v14 = v41;
    v15 = v9;
    v16 = v7;
    if (v40 == 0) {
        goto lab_0x18029e2e0_8;
    }
    int64_t v42 = v7 - 1; // 0x18029e25f
    if (v42 == 0) {
        return result;
    }
    int64_t v43 = v9 + 1; // 0x18029e25c
    int64_t v44 = v43 + v1;
    *(char *)v44 = (char)(v10 / 256);
    v14 = v44;
    v15 = v43;
    v16 = v42;
    if ((v10 & 0xff00) == 0) {
        goto lab_0x18029e2e0_8;
    }
    int64_t v45 = v7 - 2; // 0x18029e26e
    if (v45 == 0) {
        return result;
    }
    int64_t v46 = v9 + 2; // 0x18029e26b
    char v47 = v10 / 0x10000; // 0x18029e277
    int64_t v48 = v46 + v1;
    *(char *)v48 = v47;
    v14 = v48;
    v15 = v46;
    v16 = v45;
    if (v47 == 0) {
        goto lab_0x18029e2e0_8;
    }
    int64_t v49 = v7 - 3; // 0x18029e281
    if (v49 == 0) {
        return result;
    }
    int64_t v50 = v9 + 3; // 0x18029e27e
    int64_t v51 = v50 + v1;
    *(char *)v51 = (char)(v10 / 0x1000000);
    v14 = v51;
    v15 = v50;
    v16 = v49;
    if ((v10 & 0xff000000) == 0) {
        goto lab_0x18029e2e0_8;
    }
    int64_t v52 = v7 - 4; // 0x18029e290
    if (v52 == 0) {
        return result;
    }
    int64_t v53 = v9 + 4; // 0x18029e28d
    char v54 = v10 / 0x100000000; // 0x18029e299
    int64_t v55 = v53 + v1;
    *(char *)v55 = v54;
    v14 = v55;
    v15 = v53;
    v16 = v52;
    if (v54 == 0) {
        goto lab_0x18029e2e0_8;
    }
    int64_t v56 = v7 - 5; // 0x18029e2a3
    if (v56 == 0) {
        return result;
    }
    int64_t v57 = v9 + 5; // 0x18029e2a0
    int64_t v58 = v57 + v1;
    *(char *)v58 = (char)(v10 / 0x10000000000);
    v14 = v58;
    v15 = v57;
    v16 = v56;
    if ((v10 & 0xff0000000000) == 0) {
        goto lab_0x18029e2e0_8;
    }
    int64_t v59 = v7 - 6; // 0x18029e2b2
    if (v59 == 0) {
        return result;
    }
    int64_t v60 = v9 + 6; // 0x18029e2af
    char v61 = v10 / 0x1000000000000; // 0x18029e2ba
    int64_t v62 = v60 + v1;
    *(char *)v62 = v61;
    v14 = v62;
    v15 = v60;
    v16 = v59;
    if (v61 == 0) {
        goto lab_0x18029e2e0_8;
    }
    int64_t v63 = v7 - 7; // 0x18029e2c4
    if (v63 == 0) {
        return result;
    }
    int64_t v64 = v9 + 7; // 0x18029e2c1
    int64_t v65 = v64 + v1;
    *(char *)v65 = (char)(v10 / 0x100000000000000);
    v14 = v65;
    v15 = v64;
    v16 = v63;
    if (v10 < 0x100000000000000) {
        goto lab_0x18029e2e0_8;
    }
    if (v11 == 0) {
        return result;
    }
    // 0x18029e218
    v8 = v9 + 8;
    v6 = v11;
    goto lab_0x18029e218_3;
}

// Address range: 0x18029e360 - 0x18029e3dd
int64_t function_18029e360(int64_t a1, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x18029e3d2
        return 0;
    }
    int64_t v1 = a2 - a1; // 0x18029e360
    int64_t v2 = a1; // 0x18029e36e
    int64_t v3 = a3; // 0x18029e36e
    int64_t v4 = a1; // 0x18029e36e
    int64_t v5 = a3; // 0x18029e36e
    if ((a1 & 7) == 0) {
      lab_0x18029e38d:;
        int64_t v6 = v5;
        int64_t v7 = v4;
        int64_t v8 = v7 + v1; // 0x18029e3a1
        v2 = v7;
        v3 = v6;
        while ((v8 & 4095) < 4089) {
            int64_t v9 = *(int64_t *)v7; // 0x18029e3b0
            v2 = v7;
            v3 = v6;
            if (v9 != *(int64_t *)v8) {
                // break -> 0x18029e370
                return 0;
            }
            int64_t v10 = v6 - 8; // 0x18029e3bd
            if (v6 < 8 || v10 == 0) {
                // 0x18029e3d2
                return 0;
            }
            // 0x18029e3c3
            if (((v9 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v9 - 0x101010101010101) != 0) {
                // 0x18029e3d2
                return 0;
            }
            v6 = v10;
            v7 += 8;
            v8 = v7 + v1;
            v2 = v7;
            v3 = v6;
        }
    }
    int64_t v11 = v2; // 0x18029e378
    int64_t v12 = v3; // 0x18029e37b
    unsigned char v13 = *(char *)v11; // 0x18029e370
    unsigned char v14 = *(char *)(v11 + v1); // 0x18029e373
    while (v13 == v14) {
        // 0x18029e378
        v12--;
        if (v12 == 0 || v13 == 0) {
            // 0x18029e3d2
            return 0;
        }
        // 0x18029e384
        v11++;
        v4 = v11;
        v5 = v12;
        if ((v11 & 7) == 0) {
            goto lab_0x18029e38d;
        }
        v13 = *(char *)v11;
        v14 = *(char *)(v11 + v1);
    }
    // 0x18029e3d5
    return v13 < v14 ? -1 : 1;
}

// Address range: 0x18029e3e0 - 0x18029e3f8
int64_t function_18029e3e0(void) {
    // 0x18029e3e0
    int64_t v1; // 0x18029e3e0
    return function_18002c510((int64_t *)(v1 + 56));
}

// Address range: 0x18029e3f8 - 0x18029e410
int64_t function_18029e3f8(void) {
    // 0x18029e3f8
    int64_t v1; // 0x18029e3f8
    return function_18002c510((int64_t *)(v1 + 88));
}

// Address range: 0x18029e410 - 0x18029e42b
int64_t function_18029e410(void) {
    // 0x18029e410
    int64_t v1; // 0x18029e410
    return function_18002c510((int64_t *)(v1 + 1744));
}

// Address range: 0x18029e42b - 0x18029e446
int64_t function_18029e42b(void) {
    // 0x18029e42b
    int64_t v1; // 0x18029e42b
    return function_18002c510((int64_t *)(v1 + 1712));
}

// Address range: 0x18029e446 - 0x18029e461
int64_t function_18029e446(void) {
    // 0x18029e446
    int64_t v1; // 0x18029e446
    return function_18002c510((int64_t *)(v1 + 1808));
}

// Address range: 0x18029e461 - 0x18029e47c
int64_t function_18029e461(void) {
    // 0x18029e461
    int64_t v1; // 0x18029e461
    return function_18002c510((int64_t *)(v1 + 1776));
}

// Address range: 0x18029e47c - 0x18029e497
int64_t function_18029e47c(void) {
    // 0x18029e47c
    int64_t v1; // 0x18029e47c
    return function_18002c510((int64_t *)(v1 + 1840));
}

// Address range: 0x18029e497 - 0x18029e4b2
int64_t function_18029e497(void) {
    // 0x18029e497
    int64_t v1; // 0x18029e497
    return function_18002c510((int64_t *)(v1 + 1648));
}

// Address range: 0x18029e4b2 - 0x18029e4cd
int64_t function_18029e4b2(void) {
    // 0x18029e4b2
    int64_t v1; // 0x18029e4b2
    return function_18002c510((int64_t *)(v1 + 1872));
}

// Address range: 0x18029e4cd - 0x18029e4e8
int64_t function_18029e4cd(void) {
    // 0x18029e4cd
    int64_t v1; // 0x18029e4cd
    return function_18002c510((int64_t *)(v1 + 1680));
}

// Address range: 0x18029e4e8 - 0x18029e503
int64_t function_18029e4e8(void) {
    // 0x18029e4e8
    int64_t v1; // 0x18029e4e8
    return function_18002c510((int64_t *)(v1 + 1224));
}

// Address range: 0x18029e503 - 0x18029e51e
int64_t function_18029e503(void) {
    // 0x18029e503
    int64_t v1; // 0x18029e503
    return function_18002c510((int64_t *)(v1 + 1288));
}

// Address range: 0x18029e51e - 0x18029e539
int64_t function_18029e51e(void) {
    // 0x18029e51e
    int64_t v1; // 0x18029e51e
    return function_18002c510((int64_t *)(v1 + 1256));
}

// Address range: 0x18029e539 - 0x18029e554
int64_t function_18029e539(void) {
    // 0x18029e539
    int64_t v1; // 0x18029e539
    return function_18002c510((int64_t *)(v1 + 1192));
}

// Address range: 0x18029e554 - 0x18029e56f
int64_t function_18029e554(void) {
    // 0x18029e554
    int64_t v1; // 0x18029e554
    return function_18000f150(v1 + 464);
}

// Address range: 0x18029e56f - 0x18029e58a
int64_t function_18029e56f(void) {
    // 0x18029e56f
    int64_t v1; // 0x18029e56f
    return function_18002c510((int64_t *)(v1 + 2000));
}

// Address range: 0x18029e58a - 0x18029e5a5
int64_t function_18029e58a(void) {
    // 0x18029e58a
    int64_t v1; // 0x18029e58a
    return function_18002c510((int64_t *)(v1 + 1968));
}

// Address range: 0x18029e5a5 - 0x18029e5c0
int64_t function_18029e5a5(void) {
    // 0x18029e5a5
    int64_t v1; // 0x18029e5a5
    return function_18002c510((int64_t *)(v1 + 1936));
}

// Address range: 0x18029e5c0 - 0x18029e5db
int64_t function_18029e5c0(void) {
    // 0x18029e5c0
    int64_t v1; // 0x18029e5c0
    return function_18002c510((int64_t *)(v1 + 2096));
}

// Address range: 0x18029e5db - 0x18029e5f6
int64_t function_18029e5db(void) {
    // 0x18029e5db
    int64_t v1; // 0x18029e5db
    return function_18002c510((int64_t *)(v1 + 2064));
}

// Address range: 0x18029e5f6 - 0x18029e611
int64_t function_18029e5f6(void) {
    // 0x18029e5f6
    int64_t v1; // 0x18029e5f6
    return function_18002c510((int64_t *)(v1 + 2032));
}

// Address range: 0x18029e611 - 0x18029e62c
int64_t function_18029e611(void) {
    // 0x18029e611
    int64_t v1; // 0x18029e611
    return function_18002c630(v1 + 752);
}

// Address range: 0x18029e62c - 0x18029e647
int64_t function_18029e62c(void) {
    // 0x18029e62c
    int64_t v1; // 0x18029e62c
    return function_18002c510((int64_t *)(v1 + 1264));
}

// Address range: 0x18029e647 - 0x18029e662
int64_t function_18029e647(void) {
    // 0x18029e647
    int64_t v1; // 0x18029e647
    return function_18002c510((int64_t *)(v1 + 272));
}

// Address range: 0x18029e662 - 0x18029e67d
int64_t function_18029e662(void) {
    // 0x18029e662
    int64_t v1; // 0x18029e662
    return function_18002c630(v1 + 728);
}

// Address range: 0x18029e67d - 0x18029e698
int64_t function_18029e67d(void) {
    // 0x18029e67d
    return function_18026ab10(&g841);
}

// Address range: 0x18029e698 - 0x18029e6b3
int64_t function_18029e698(void) {
    // 0x18029e698
    int64_t v1; // 0x18029e698
    return function_18002c510((int64_t *)(v1 + 1544));
}

// Address range: 0x18029e6b3 - 0x18029e6ce
int64_t function_18029e6b3(void) {
    // 0x18029e6b3
    int64_t v1; // 0x18029e6b3
    return function_18002c510((int64_t *)(v1 + 1512));
}

// Address range: 0x18029e6ce - 0x18029e6e9
int64_t function_18029e6ce(void) {
    // 0x18029e6ce
    int64_t v1; // 0x18029e6ce
    return function_18002c510((int64_t *)(v1 + 1576));
}

// Address range: 0x18029e6e9 - 0x18029e704
int64_t function_18029e6e9(void) {
    // 0x18029e6e9
    return function_18026ab10(&g845);
}

// Address range: 0x18029e704 - 0x18029e71f
int64_t function_18029e704(void) {
    // 0x18029e704
    int64_t v1; // 0x18029e704
    return function_180012d90(v1 + 736);
}

// Address range: 0x18029e71f - 0x18029e73a
int64_t function_18029e71f(void) {
    // 0x18029e71f
    int64_t v1; // 0x18029e71f
    return function_18002c510((int64_t *)(v1 + 1584));
}

// Address range: 0x18029e73a - 0x18029e763
int64_t function_18029e73a(void) {
    // 0x18029e73a
    int64_t v1; // 0x18029e73a
    int32_t * v2 = (int32_t *)(v1 + 80); // 0x18029e743
    int32_t v3 = *v2; // 0x18029e743
    int64_t result = 0; // 0x18029e74b
    if ((v3 & 1) != 0) {
        // 0x18029e74d
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 1648));
    }
    // 0x18029e75d
    return result;
}

// Address range: 0x18029e763 - 0x18029e77e
int64_t function_18029e763(void) {
    // 0x18029e763
    int64_t v1; // 0x18029e763
    return function_18002c510((int64_t *)(v1 + 1552));
}

// Address range: 0x18029e77e - 0x18029e799
int64_t function_18029e77e(void) {
    // 0x18029e77e
    int64_t v1; // 0x18029e77e
    return function_18002c510((int64_t *)(v1 + 1464));
}

// Address range: 0x18029e799 - 0x18029e7b4
int64_t function_18029e799(void) {
    // 0x18029e799
    int64_t v1; // 0x18029e799
    return function_180012b80(v1 + 1456);
}

// Address range: 0x18029e7b4 - 0x18029e7cf
int64_t function_18029e7b4(void) {
    // 0x18029e7b4
    return function_18026ab10(&g849);
}

// Address range: 0x18029e7cf - 0x18029e7ea
int64_t function_18029e7cf(void) {
    // 0x18029e7cf
    int64_t v1; // 0x18029e7cf
    return function_180014f70(v1 + 792);
}

// Address range: 0x18029e7ea - 0x18029e805
int64_t function_18029e7ea(void) {
    // 0x18029e7ea
    int64_t v1; // 0x18029e7ea
    return function_18002c510((int64_t *)(v1 + 1568));
}

// Address range: 0x18029e805 - 0x18029e82e
int64_t function_18029e805(void) {
    // 0x18029e805
    int64_t v1; // 0x18029e805
    int32_t * v2 = (int32_t *)(v1 + 88); // 0x18029e80e
    int32_t v3 = *v2; // 0x18029e80e
    int64_t result = 0; // 0x18029e816
    if ((v3 & 1) != 0) {
        // 0x18029e818
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 1632));
    }
    // 0x18029e828
    return result;
}

// Address range: 0x18029e82e - 0x18029e849
int64_t function_18029e82e(void) {
    // 0x18029e82e
    int64_t v1; // 0x18029e82e
    return function_18002c510((int64_t *)(v1 + 1536));
}

// Address range: 0x18029e849 - 0x18029e864
int64_t function_18029e849(void) {
    // 0x18029e849
    int64_t v1; // 0x18029e849
    return function_18002c510((int64_t *)(v1 + 1464));
}

// Address range: 0x18029e864 - 0x18029e87f
int64_t function_18029e864(void) {
    // 0x18029e864
    int64_t v1; // 0x18029e864
    return function_180014d90(v1 + 1456);
}

// Address range: 0x18029e87f - 0x18029e89a
int64_t function_18029e87f(void) {
    // 0x18029e87f
    int64_t v1; // 0x18029e87f
    return function_18002c630(v1 + 720);
}

// Address range: 0x18029e89a - 0x18029e8b5
int64_t function_18029e89a(void) {
    // 0x18029e89a
    int64_t v1; // 0x18029e89a
    return function_18002c510((int64_t *)(v1 + 1376));
}

// Address range: 0x18029e8b5 - 0x18029e8d0
int64_t function_18029e8b5(void) {
    // 0x18029e8b5
    int64_t v1; // 0x18029e8b5
    return function_18002c510((int64_t *)(v1 + 1344));
}

// Address range: 0x18029e8d0 - 0x18029e8eb
int64_t function_18029e8d0(void) {
    // 0x18029e8d0
    int64_t v1; // 0x18029e8d0
    return function_18002c510((int64_t *)(v1 + 1408));
}

// Address range: 0x18029e8eb - 0x18029e906
int64_t function_18029e8eb(void) {
    // 0x18029e8eb
    int64_t v1; // 0x18029e8eb
    return function_18002c510((int64_t *)(v1 + 1312));
}

// Address range: 0x18029e906 - 0x18029e921
int64_t function_18029e906(void) {
    // 0x18029e906
    int64_t v1; // 0x18029e906
    return function_18002c630(v1 + 624);
}

// Address range: 0x18029e921 - 0x18029e93c
int64_t function_18029e921(void) {
    // 0x18029e921
    return function_18026ab10(&g853);
}

// Address range: 0x18029e93c - 0x18029e957
int64_t function_18029e93c(void) {
    // 0x18029e93c
    int64_t v1; // 0x18029e93c
    return function_18002c510((int64_t *)(v1 + 1608));
}

// Address range: 0x18029e957 - 0x18029e972
int64_t function_18029e957(void) {
    // 0x18029e957
    int64_t v1; // 0x18029e957
    return function_18002c510((int64_t *)(v1 + 1576));
}

// Address range: 0x18029e972 - 0x18029e98d
int64_t function_18029e972(void) {
    // 0x18029e972
    int64_t v1; // 0x18029e972
    return function_18002c510((int64_t *)(v1 + 1640));
}

// Address range: 0x18029e98d - 0x18029e9a8
int64_t function_18029e98d(void) {
    // 0x18029e98d
    return function_18026ab10(&g857);
}

// Address range: 0x18029e9a8 - 0x18029e9c3
int64_t function_18029e9a8(void) {
    // 0x18029e9a8
    int64_t v1; // 0x18029e9a8
    return function_18001b430(v1 + 664);
}

// Address range: 0x18029e9c3 - 0x18029e9de
int64_t function_18029e9c3(void) {
    // 0x18029e9c3
    int64_t v1; // 0x18029e9c3
    return function_18002c510((int64_t *)(v1 + 1440));
}

// Address range: 0x18029e9de - 0x18029ea07
int64_t function_18029e9de(void) {
    // 0x18029e9de
    int64_t v1; // 0x18029e9de
    int32_t * v2 = (int32_t *)(v1 + 80); // 0x18029e9e7
    int32_t v3 = *v2; // 0x18029e9e7
    int64_t result = 0; // 0x18029e9ef
    if ((v3 & 1) != 0) {
        // 0x18029e9f1
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 1504));
    }
    // 0x18029ea01
    return result;
}

// Address range: 0x18029ea07 - 0x18029ea22
int64_t function_18029ea07(void) {
    // 0x18029ea07
    int64_t v1; // 0x18029ea07
    return function_18002c510((int64_t *)(v1 + 1408));
}

// Address range: 0x18029ea22 - 0x18029ea3d
int64_t function_18029ea22(void) {
    // 0x18029ea22
    int64_t v1; // 0x18029ea22
    return function_18002c510((int64_t *)(v1 + 1320));
}

// Address range: 0x18029ea3d - 0x18029ea58
int64_t function_18029ea3d(void) {
    // 0x18029ea3d
    int64_t v1; // 0x18029ea3d
    return function_18001b220(v1 + 1312);
}

// Address range: 0x18029ea60 - 0x18029ea78
int64_t function_18029ea60(void) {
    // 0x18029ea60
    int64_t v1; // 0x18029ea60
    return function_18002c320(*(int64_t *)(v1 + 112));
}

// Address range: 0x18029ea80 - 0x18029ea9b
int64_t function_18029ea80(void) {
    // 0x18029ea80
    int64_t v1; // 0x18029ea80
    return function_18002c320(*(int64_t *)(v1 + 144));
}

// Address range: 0x18029eaa0 - 0x18029eac9
int64_t function_18029eaa0(void) {
    // 0x18029eaa0
    int64_t v1; // 0x18029eaa0
    int32_t * v2 = (int32_t *)(v1 + 52); // 0x18029eaa9
    int32_t v3 = *v2; // 0x18029eaa9
    int64_t result = 0; // 0x18029eab1
    if ((v3 & 1) != 0) {
        // 0x18029eab3
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)*(int64_t *)(v1 + 256));
    }
    // 0x18029eac3
    return result;
}

// Address range: 0x18029ead0 - 0x18029eaeb
int64_t function_18029ead0(void) {
    // 0x18029ead0
    int64_t v1; // 0x18029ead0
    return function_18002c680((int64_t *)(v1 + 280));
}

// Address range: 0x18029eaf0 - 0x18029eb0b
int64_t function_18029eaf0(void) {
    // 0x18029eaf0
    int64_t v1; // 0x18029eaf0
    return function_18001c150((int64_t *)(v1 + 280));
}

// Address range: 0x18029eb10 - 0x18029eb2b
int64_t function_18029eb10(void) {
    // 0x18029eb10
    int64_t v1; // 0x18029eb10
    return function_18001bf10((int64_t *)(v1 + 280));
}

// Address range: 0x18029eb30 - 0x18029eb4b
int64_t function_18029eb30(void) {
    // 0x18029eb30
    int64_t v1; // 0x18029eb30
    return function_18001bfd0((int64_t *)(v1 + 280));
}

// Address range: 0x18029eb50 - 0x18029eb6b
int64_t function_18029eb50(void) {
    // 0x18029eb50
    int64_t v1; // 0x18029eb50
    return function_18001c090((int64_t *)(v1 + 280));
}

// Address range: 0x18029eb70 - 0x18029eb8b
int64_t function_18029eb70(void) {
    // 0x18029eb70
    int64_t v1; // 0x18029eb70
    return function_18002c710((int64_t *)(v1 + 280));
}

// Address range: 0x18029eb90 - 0x18029eba8
int64_t function_18029eb90(void) {
    // 0x18029eb90
    int64_t v1; // 0x18029eb90
    return function_18001b220(v1 + 64);
}

// Address range: 0x18029ebb0 - 0x18029ebc8
int64_t function_18029ebb0(void) {
    // 0x18029ebb0
    int64_t v1; // 0x18029ebb0
    return function_180014d90(v1 + 64);
}

// Address range: 0x18029ebd0 - 0x18029ebe8
int64_t function_18029ebd0(void) {
    // 0x18029ebd0
    int64_t v1; // 0x18029ebd0
    return function_180012b80(v1 + 64);
}

// Address range: 0x18029ebf0 - 0x18029ec08
int64_t function_18029ebf0(void) {
    // 0x18029ebf0
    int64_t v1; // 0x18029ebf0
    return function_18001b220(v1 + 48);
}

// Address range: 0x18029ec10 - 0x18029ec28
int64_t function_18029ec10(void) {
    // 0x18029ec10
    int64_t v1; // 0x18029ec10
    return function_180014d90(v1 + 48);
}

// Address range: 0x18029ec30 - 0x18029ec48
int64_t function_18029ec30(void) {
    // 0x18029ec30
    int64_t v1; // 0x18029ec30
    return function_180012b80(v1 + 48);
}

// Address range: 0x18029ec50 - 0x18029ec68
int64_t function_18029ec50(void) {
    // 0x18029ec50
    int64_t v1; // 0x18029ec50
    return function_18002c410((int64_t *)(v1 + 48));
}

// Address range: 0x18029ec70 - 0x18029ec88
int64_t function_18029ec70(void) {
    // 0x18029ec70
    int64_t v1; // 0x18029ec70
    return function_18002c2d0(v1 + 48);
}

// Address range: 0x18029ec90 - 0x18029eca8
int64_t function_18029ec90(void) {
    // 0x18029ec90
    int64_t v1; // 0x18029ec90
    return function_18002c350((int64_t *)(v1 + 48));
}

// Address range: 0x18029ecb0 - 0x18029ecc8
int64_t function_18029ecb0(void) {
    // 0x18029ecb0
    int64_t v1; // 0x18029ecb0
    return function_18002c280(v1 + 48);
}

// Address range: 0x18029ecd0 - 0x18029ece8
int64_t function_18029ecd0(void) {
    // 0x18029ecd0
    int64_t v1; // 0x18029ecd0
    return function_18001c1e0((int64_t *)(v1 + 80));
}

// Address range: 0x18029ecf0 - 0x18029ed08
int64_t function_18029ecf0(void) {
    // 0x18029ecf0
    int64_t v1; // 0x18029ecf0
    return function_18001c260((int64_t *)(v1 + 80));
}

// Address range: 0x18029ed10 - 0x18029ed28
int64_t function_18029ed10(void) {
    // 0x18029ed10
    int64_t v1; // 0x18029ed10
    return function_18001c2e0((int64_t *)(v1 + 80));
}

// Address range: 0x18029ed30 - 0x18029ed48
int64_t function_18029ed30(void) {
    // 0x18029ed30
    int64_t v1; // 0x18029ed30
    return function_18002c4a0((int64_t *)(v1 + 80));
}

// Address range: 0x18029ed50 - 0x18029ed6f
int64_t function_18029ed50(void) {
    // 0x18029ed50
    int64_t v1; // 0x18029ed50
    return function_18002c550(*(int64_t *)(v1 + 176) + 8);
}

// Address range: 0x18029ed70 - 0x18029ed8f
int64_t function_18029ed70(void) {
    // 0x18029ed70
    int64_t v1; // 0x18029ed70
    return function_18002c330(*(int64_t *)(v1 + 176) + 24);
}

// Address range: 0x18029ed90 - 0x18029edab
int64_t function_18029ed90(void) {
    // 0x18029ed90
    int64_t v1; // 0x18029ed90
    return function_18002c320(*(int64_t *)(v1 + 160));
}

// Address range: 0x18029edb0 - 0x18029edc8
int64_t function_18029edb0(void) {
    // 0x18029edb0
    int64_t v1; // 0x18029edb0
    return function_18002c320(*(int64_t *)(v1 + 96));
}

// Address range: 0x18029edd0 - 0x18029ede8
int64_t function_18029edd0(void) {
    // 0x18029edd0
    int64_t v1; // 0x18029edd0
    return function_18002c320(*(int64_t *)(v1 + 80));
}

// Address range: 0x18029edf0 - 0x18029ee0b
int64_t function_18029edf0(void) {
    // 0x18029edf0
    int64_t v1; // 0x18029edf0
    return function_18002c320(*(int64_t *)(v1 + 672));
}

// Address range: 0x18029ee10 - 0x18029ee2b
int64_t function_18029ee10(void) {
    // 0x18029ee10
    int64_t v1; // 0x18029ee10
    return function_18002c320(*(int64_t *)(v1 + 336));
}

// Address range: 0x18029ee30 - 0x18029ee59
int64_t function_18029ee30(void) {
    // 0x18029ee30
    int64_t v1; // 0x18029ee30
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029ee39
    int32_t v3 = *v2; // 0x18029ee39
    int64_t result = 0; // 0x18029ee41
    if ((v3 & 1) != 0) {
        // 0x18029ee43
        *v2 = v3 & -2;
        result = function_18002c820(*(int64_t *)(v1 + 368));
    }
    // 0x18029ee53
    return result;
}

// Address range: 0x18029ee60 - 0x18029ee89
int64_t function_18029ee60(void) {
    // 0x18029ee60
    int64_t v1; // 0x18029ee60
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029ee69
    int32_t v3 = *v2; // 0x18029ee69
    int64_t result = 0; // 0x18029ee71
    if ((v3 & 2) != 0) {
        // 0x18029ee73
        *v2 = v3 & -3;
        result = function_18002c820(*(int64_t *)(v1 + 368));
    }
    // 0x18029ee83
    return result;
}

// Address range: 0x18029ee90 - 0x18029eeb9
int64_t function_18029ee90(void) {
    // 0x18029ee90
    int64_t v1; // 0x18029ee90
    int32_t * v2 = (int32_t *)(v1 + 52); // 0x18029ee99
    int32_t v3 = *v2; // 0x18029ee99
    int64_t result = 0; // 0x18029eea1
    if ((v3 & 1) != 0) {
        // 0x18029eea3
        *v2 = v3 & -2;
        result = function_18002c530(*(int64_t *)(v1 + 256));
    }
    // 0x18029eeb3
    return result;
}

// Address range: 0x18029eec0 - 0x18029eed8
int64_t function_18029eec0(void) {
    // 0x18029eec0
    int64_t v1; // 0x18029eec0
    return function_18002c510((int64_t *)(v1 + 40));
}

// Address range: 0x18029eee0 - 0x18029eef8
int64_t function_18029eee0(void) {
    // 0x18029eee0
    int64_t v1; // 0x18029eee0
    return function_18002c7d0(v1 + 48);
}

// Address range: 0x18029ef00 - 0x18029ef1b
int64_t function_18029ef00(void) {
    // 0x18029ef00
    int64_t v1; // 0x18029ef00
    return function_18002c820(v1 + 128);
}

// Address range: 0x18029ef20 - 0x18029ef38
int64_t function_18029ef20(void) {
    // 0x18029ef20
    int64_t v1; // 0x18029ef20
    return function_18002c820(v1 + 96);
}

// Address range: 0x18029ef40 - 0x18029ef5b
int64_t function_18029ef40(void) {
    // 0x18029ef40
    int64_t v1; // 0x18029ef40
    return function_18002c820(v1 + 192);
}

// Address range: 0x18029ef60 - 0x18029ef7b
int64_t function_18029ef60(void) {
    // 0x18029ef60
    int64_t v1; // 0x18029ef60
    return function_18002c820(v1 + 160);
}

// Address range: 0x18029ef80 - 0x18029ef98
int64_t function_18029ef80(void) {
    // 0x18029ef80
    int64_t v1; // 0x18029ef80
    return function_18002c570(v1 + 48);
}

// Address range: 0x18029efa0 - 0x18029efbb
int64_t function_18029efa0(void) {
    // 0x18029efa0
    int64_t v1; // 0x18029efa0
    return function_18002c510((int64_t *)(v1 + 160));
}

// Address range: 0x18029efc0 - 0x18029efdb
int64_t function_18029efc0(void) {
    // 0x18029efc0
    int64_t v1; // 0x18029efc0
    return function_18002c650(v1 + 160);
}

// Address range: 0x18029efe0 - 0x18029effb
int64_t function_18029efe0(void) {
    // 0x18029efe0
    int64_t v1; // 0x18029efe0
    return function_18002c510((int64_t *)(v1 + 128));
}

// Address range: 0x18029effb - 0x18029f016
int64_t function_18029effb(void) {
    // 0x18029effb
    int64_t v1; // 0x18029effb
    return function_18002c510((int64_t *)(v1 + 400));
}

// Address range: 0x18029f016 - 0x18029f031
int64_t function_18029f016(void) {
    // 0x18029f016
    int64_t v1; // 0x18029f016
    return function_18002c510((int64_t *)(v1 + 432));
}

// Address range: 0x18029f031 - 0x18029f04c
int64_t function_18029f031(void) {
    // 0x18029f031
    int64_t v1; // 0x18029f031
    return function_18002c510((int64_t *)(v1 + 464));
}

// Address range: 0x18029f04c - 0x18029f067
int64_t function_18029f04c(void) {
    // 0x18029f04c
    int64_t v1; // 0x18029f04c
    return function_18002c510((int64_t *)(v1 + 496));
}

// Address range: 0x18029f070 - 0x18029f08b
int64_t function_18029f070(void) {
    // 0x18029f070
    int64_t v1; // 0x18029f070
    return function_180050280((int64_t *)(v1 + 168));
}

// Address range: 0x18029f090 - 0x18029f0b9
int64_t function_18029f090(void) {
    // 0x18029f090
    int64_t v1; // 0x18029f090
    int32_t * v2 = (int32_t *)(v1 + 48); // 0x18029f099
    int32_t v3 = *v2; // 0x18029f099
    int64_t result = 0; // 0x18029f0a1
    if ((v3 & 1) != 0) {
        // 0x18029f0a3
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 336));
    }
    // 0x18029f0b3
    return result;
}

// Address range: 0x18029f0c0 - 0x18029f0e9
int64_t function_18029f0c0(void) {
    // 0x18029f0c0
    int64_t v1; // 0x18029f0c0
    int32_t * v2 = (int32_t *)(v1 + 48); // 0x18029f0c9
    int32_t v3 = *v2; // 0x18029f0c9
    int64_t result = 0; // 0x18029f0d1
    if ((v3 & 2) != 0) {
        // 0x18029f0d3
        *v2 = v3 & -3;
        result = function_18002c510((int64_t *)(v1 + 304));
    }
    // 0x18029f0e3
    return result;
}

// Address range: 0x18029f0f0 - 0x18029f10b
int64_t function_18029f0f0(void) {
    // 0x18029f0f0
    int64_t v1; // 0x18029f0f0
    return function_18002c510((int64_t *)(v1 + 720));
}

// Address range: 0x18029f110 - 0x18029f12b
int64_t function_18029f110(void) {
    // 0x18029f110
    int64_t v1; // 0x18029f110
    return function_180050280((int64_t *)(v1 + 608));
}

// Address range: 0x18029f130 - 0x18029f14b
int64_t function_18029f130(void) {
    // 0x18029f130
    int64_t v1; // 0x18029f130
    return function_18004fc10(v1 + 320);
}

// Address range: 0x18029f150 - 0x18029f16b
int64_t function_18029f150(void) {
    // 0x18029f150
    int64_t v1; // 0x18029f150
    return function_1800502f0((int64_t *)(v1 + 328));
}

// Address range: 0x18029f170 - 0x18029f202
int64_t function_18029f170(void) {
    // 0x18029f170
    int64_t v1; // 0x18029f170
    int64_t v2 = *(int64_t *)(v1 + 368); // 0x18029f17d
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x18029f192
    int64_t * v4 = (int64_t *)(v1 + 128); // 0x18029f198
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 104); // 0x18029f1a9
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 43); // 0x18029f1ac
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 108); // 0x18029f1b6
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 64) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x180040251;
}

// Address range: 0x18029f210 - 0x18029f22b
int64_t function_18029f210(void) {
    // 0x18029f210
    int64_t v1; // 0x18029f210
    return function_18002c510((int64_t *)(v1 + 288));
}

// Address range: 0x18029f230 - 0x18029f24b
int64_t function_18029f230(void) {
    // 0x18029f230
    int64_t v1; // 0x18029f230
    return function_18002c510((int64_t *)(v1 + 464));
}

// Address range: 0x18029f250 - 0x18029f26b
int64_t function_18029f250(void) {
    // 0x18029f250
    int64_t v1; // 0x18029f250
    return function_180050280((int64_t *)(v1 + 368));
}

// Address range: 0x18029f270 - 0x18029f28b
int64_t function_18029f270(void) {
    // 0x18029f270
    int64_t v1; // 0x18029f270
    return function_18002c510((int64_t *)(v1 + 480));
}

// Address range: 0x18029f290 - 0x18029f2ab
int64_t function_18029f290(void) {
    // 0x18029f290
    int64_t v1; // 0x18029f290
    return function_180050280((int64_t *)(v1 + 384));
}

// Address range: 0x18029f2b0 - 0x18029f2cb
int64_t function_18029f2b0(void) {
    // 0x18029f2b0
    int64_t v1; // 0x18029f2b0
    return function_18002c510((int64_t *)(v1 + 496));
}

// Address range: 0x18029f2d0 - 0x18029f2eb
int64_t function_18029f2d0(void) {
    // 0x18029f2d0
    int64_t v1; // 0x18029f2d0
    return function_180050280((int64_t *)(v1 + 400));
}

// Address range: 0x18029f2f0 - 0x18029f308
int64_t function_18029f2f0(void) {
    // 0x18029f2f0
    int64_t v1; // 0x18029f2f0
    return function_180266a98((int64_t *)(v1 + 56), v1);
}

// Address range: 0x18029f310 - 0x18029f328
int64_t function_18029f310(void) {
    // 0x18029f310
    int64_t v1; // 0x18029f310
    return function_18002c5b0(v1 + 72);
}

// Address range: 0x18029f330 - 0x18029f359
int64_t function_18029f330(void) {
    // 0x18029f330
    int64_t v1; // 0x18029f330
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029f339
    int32_t v3 = *v2; // 0x18029f339
    int64_t result = 0; // 0x18029f341
    if ((v3 & 1) != 0) {
        // 0x18029f343
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)*(int64_t *)(v1 + 240));
    }
    // 0x18029f353
    return result;
}

// Address range: 0x18029f360 - 0x18029f38d
int64_t function_18029f360(void) {
    // 0x18029f360
    int64_t v1; // 0x18029f360
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029f369
    int32_t v3 = *v2; // 0x18029f369
    int64_t result = 0; // 0x18029f371
    if ((v3 & 1) != 0) {
        // 0x18029f373
        *v2 = v3 & -2;
        result = function_18004fd50((int64_t *)(*(int64_t *)(v1 + 80) + 168));
    }
    // 0x18029f387
    return result;
}

// Address range: 0x18029f390 - 0x18029f3ac
int64_t function_18029f390(void) {
    // 0x18029f390
    int64_t v1; // 0x18029f390
    return function_18004fe60(*(int64_t *)(v1 + 80) + 16);
}

// Address range: 0x18029f3b0 - 0x18029f3da
int64_t function_18029f3b0(void) {
    // 0x18029f3b0
    int64_t v1; // 0x18029f3b0
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029f3b9
    int32_t v3 = *v2; // 0x18029f3b9
    int64_t result = 0; // 0x18029f3c1
    if ((v3 & 1) != 0) {
        // 0x18029f3c3
        *v2 = v3 & -2;
        result = function_18004fd50((int64_t *)(*(int64_t *)(v1 + 80) + 16));
    }
    // 0x18029f3d4
    return result;
}

// Address range: 0x18029f3e0 - 0x18029f3ff
int64_t function_18029f3e0(void) {
    // 0x18029f3e0
    int64_t v1; // 0x18029f3e0
    return function_180052920(*(int64_t *)(v1 + 240) + 80);
}

// Address range: 0x18029f400 - 0x18029f418
int64_t function_18029f400(void) {
    // 0x18029f400
    int64_t v1; // 0x18029f400
    return function_18002c820(v1 + 88);
}

// Address range: 0x18029f420 - 0x18029f43b
int64_t function_18029f420(void) {
    // 0x18029f420
    int64_t v1; // 0x18029f420
    return function_18002c820(v1 + 184);
}

// Address range: 0x18029f440 - 0x18029f45b
int64_t function_18029f440(void) {
    // 0x18029f440
    int64_t v1; // 0x18029f440
    return function_18002c820(v1 + 152);
}

// Address range: 0x18029f460 - 0x18029f478
int64_t function_18029f460(void) {
    // 0x18029f460
    int64_t v1; // 0x18029f460
    return function_18002c510((int64_t *)(v1 + 120));
}

// Address range: 0x18029f480 - 0x18029f498
int64_t function_18029f480(void) {
    // 0x18029f480
    int64_t v1; // 0x18029f480
    return function_180266a98((int64_t *)*(int64_t *)(v1 + 112), v1);
}

// Address range: 0x18029f4a0 - 0x18029f4bc
int64_t function_18029f4a0(void) {
    // 0x18029f4a0
    int64_t v1; // 0x18029f4a0
    return function_18004fcb0(*(int64_t *)(v1 + 112) + 8);
}

// Address range: 0x18029f4c0 - 0x18029f4dc
int64_t function_18029f4c0(void) {
    // 0x18029f4c0
    int64_t v1; // 0x18029f4c0
    return function_18004fcb0(*(int64_t *)(v1 + 112) + 24);
}

// Address range: 0x18029f4e0 - 0x18029f4fc
int64_t function_18029f4e0(void) {
    // 0x18029f4e0
    int64_t v1; // 0x18029f4e0
    return function_18004fcb0(*(int64_t *)(v1 + 112) + 40);
}

// Address range: 0x18029f500 - 0x18029f51c
int64_t function_18029f500(void) {
    // 0x18029f500
    int64_t v1; // 0x18029f500
    return function_18004fcb0(*(int64_t *)(v1 + 112) + 56);
}

// Address range: 0x18029f520 - 0x18029f53c
int64_t function_18029f520(void) {
    // 0x18029f520
    int64_t v1; // 0x18029f520
    return function_18004fcb0(*(int64_t *)(v1 + 112) + 72);
}

// Address range: 0x18029f540 - 0x18029f55c
int64_t function_18029f540(void) {
    // 0x18029f540
    int64_t v1; // 0x18029f540
    return function_18004fcb0(*(int64_t *)(v1 + 112) + 88);
}

// Address range: 0x18029f560 - 0x18029f578
int64_t function_18029f560(void) {
    // 0x18029f560
    int64_t v1; // 0x18029f560
    return function_18002c510((int64_t *)(v1 + 80));
}

// Address range: 0x18029f580 - 0x18029f598
int64_t function_18029f580(void) {
    // 0x18029f580
    int64_t v1; // 0x18029f580
    return function_18002c7f0(*(int64_t *)(v1 + 112));
}

// Address range: 0x18029f5a0 - 0x18029f5bc
int64_t function_18029f5a0(void) {
    // 0x18029f5a0
    int64_t v1; // 0x18029f5a0
    return function_18002c820(*(int64_t *)(v1 + 112) + 40);
}

// Address range: 0x18029f5c0 - 0x18029f5dc
int64_t function_18029f5c0(void) {
    // 0x18029f5c0
    int64_t v1; // 0x18029f5c0
    return function_18002c820(*(int64_t *)(v1 + 112) + 72);
}

// Address range: 0x18029f5e0 - 0x18029f5fb
int64_t function_18029f5e0(void) {
    // 0x18029f5e0
    int64_t v1; // 0x18029f5e0
    return function_18002c7f0(*(int64_t *)(v1 + 288));
}

// Address range: 0x18029f600 - 0x18029f61f
int64_t function_18029f600(void) {
    // 0x18029f600
    int64_t v1; // 0x18029f600
    return function_18002c820(*(int64_t *)(v1 + 288) + 40);
}

// Address range: 0x18029f620 - 0x18029f63f
int64_t function_18029f620(void) {
    // 0x18029f620
    int64_t v1; // 0x18029f620
    return function_18002c820(*(int64_t *)(v1 + 288) + 72);
}

// Address range: 0x18029f640 - 0x18029f65b
int64_t function_18029f640(void) {
    // 0x18029f640
    int64_t v1; // 0x18029f640
    return function_18002c820(v1 + 208);
}

// Address range: 0x18029f660 - 0x18029f67b
int64_t function_18029f660(void) {
    // 0x18029f660
    int64_t v1; // 0x18029f660
    return function_180050170(*(int64_t *)(v1 + 128));
}

// Address range: 0x18029f680 - 0x18029f69b
int64_t function_18029f680(void) {
    // 0x18029f680
    int64_t v1; // 0x18029f680
    return function_180050280((int64_t *)(v1 + 312));
}

// Address range: 0x18029f6a0 - 0x18029f6bb
int64_t function_18029f6a0(void) {
    // 0x18029f6a0
    int64_t v1; // 0x18029f6a0
    return function_180050280((int64_t *)(v1 + 304));
}

// Address range: 0x18029f6c0 - 0x18029f6dd
int64_t function_18029f6c0(void) {
    // 0x18029f6c0
    int64_t v1; // 0x18029f6c0
    return function_18026a798(*(int64_t *)(v1 + 40), 16);
}

// Address range: 0x18029f6e0 - 0x18029f6fd
int64_t function_18029f6e0(void) {
    // 0x18029f6e0
    int64_t v1; // 0x18029f6e0
    return function_18026a798(*(int64_t *)(v1 + 40), 48);
}

// Address range: 0x18029f700 - 0x18029f729
int64_t function_18029f700(void) {
    // 0x18029f700
    int64_t v1; // 0x18029f700
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029f709
    int32_t v3 = *v2; // 0x18029f709
    int64_t result = 0; // 0x18029f711
    if ((v3 & 1) != 0) {
        // 0x18029f713
        *v2 = v3 & -2;
        result = function_180050010((int64_t *)(v1 + 136));
    }
    // 0x18029f723
    return result;
}

// Address range: 0x18029f730 - 0x18029f748
int64_t function_18029f730(void) {
    // 0x18029f730
    int64_t v1; // 0x18029f730
    return function_1800501e0(*(int64_t *)(v1 + 40));
}

// Address range: 0x18029f750 - 0x18029f768
int64_t function_18029f750(void) {
    // 0x18029f750
    int64_t v1; // 0x18029f750
    return function_18004fc50((int64_t *)(v1 + 48));
}

// Address range: 0x18029f770 - 0x18029f78b
int64_t function_18029f770(void) {
    // 0x18029f770
    int64_t v1; // 0x18029f770
    return function_18002c510((int64_t *)*(int64_t *)(v1 + 160));
}

// Address range: 0x18029f790 - 0x18029f7a8
int64_t function_18029f790(void) {
    // 0x18029f790
    int64_t v1; // 0x18029f790
    return function_18002c510((int64_t *)(v1 + 88));
}

// Address range: 0x18029f7b0 - 0x18029f7ca
int64_t function_18029f7b0(void) {
    // 0x18029f7b0
    return 0x180055a86;
}

// Address range: 0x18029f7d0 - 0x18029f7f9
int64_t function_18029f7d0(void) {
    // 0x18029f7d0
    int64_t v1; // 0x18029f7d0
    int32_t * v2 = (int32_t *)(v1 + 40); // 0x18029f7d9
    int32_t v3 = *v2; // 0x18029f7d9
    int64_t result = 0; // 0x18029f7e1
    if ((v3 & 1) != 0) {
        // 0x18029f7e3
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)*(int64_t *)(v1 + 432));
    }
    // 0x18029f7f3
    return result;
}

// Address range: 0x18029f800 - 0x18029f81b
int64_t function_18029f800(void) {
    // 0x18029f800
    int64_t v1; // 0x18029f800
    return function_18002c510((int64_t *)(v1 + 352));
}

// Address range: 0x18029f820 - 0x18029f83b
int64_t function_18029f820(void) {
    // 0x18029f820
    int64_t v1; // 0x18029f820
    return function_18002c510((int64_t *)(v1 + 320));
}

// Address range: 0x18029f840 - 0x18029f858
int64_t function_18029f840(void) {
    // 0x18029f840
    int64_t v1; // 0x18029f840
    return function_18002c510((int64_t *)(v1 + 64));
}

// Address range: 0x18029f860 - 0x18029f878
int64_t function_18029f860(void) {
    // 0x18029f860
    int64_t v1; // 0x18029f860
    return function_1800502f0((int64_t *)(v1 + 112));
}

// Address range: 0x18029f880 - 0x18029f906
int64_t function_18029f880(void) {
    // 0x18029f880
    int64_t v1; // 0x18029f880
    int64_t v2 = *(int64_t *)(v1 + 144); // 0x18029f88d
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x18029f8a2
    int64_t * v4 = (int64_t *)(v1 + 80); // 0x18029f8a8
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 56); // 0x18029f8b3
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 33); // 0x18029f8b6
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 60); // 0x18029f8c0
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 40) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x180059c78;
}

// Address range: 0x18029f910 - 0x18029f92b
int64_t function_18029f910(void) {
    // 0x18029f910
    return function_18026ab10(&g862);
}

// Address range: 0x18029f930 - 0x18029f948
int64_t function_18029f930(void) {
    // 0x18029f930
    int64_t v1; // 0x18029f930
    return function_180050280((int64_t *)(v1 + 64));
}

// Address range: 0x18029f950 - 0x18029f979
int64_t function_18029f950(void) {
    // 0x18029f950
    int64_t v1; // 0x18029f950
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029f959
    int32_t v3 = *v2; // 0x18029f959
    int64_t result = 0; // 0x18029f961
    if ((v3 & 1) != 0) {
        // 0x18029f963
        *v2 = v3 & -2;
        result = function_18002c820(*(int64_t *)(v1 + 224));
    }
    // 0x18029f973
    return result;
}

// Address range: 0x18029f980 - 0x18029f9a6
int64_t function_18029f980(void) {
    // 0x18029f980
    int64_t v1; // 0x18029f980
    int32_t * v2 = (int32_t *)(v1 + 36); // 0x18029f989
    int32_t v3 = *v2; // 0x18029f989
    int64_t result = 0; // 0x18029f991
    if ((v3 & 1) != 0) {
        // 0x18029f993
        *v2 = v3 & -2;
        result = function_18002c820(*(int64_t *)(v1 + 96));
    }
    // 0x18029f9a0
    return result;
}

// Address range: 0x18029f9b0 - 0x18029f9c8
int64_t function_18029f9b0(void) {
    // 0x18029f9b0
    int64_t v1; // 0x18029f9b0
    return function_180050280((int64_t *)(v1 + 80));
}

// Address range: 0x18029f9d0 - 0x18029f9e8
int64_t function_18029f9d0(void) {
    // 0x18029f9d0
    int64_t v1; // 0x18029f9d0
    return function_18002c570(v1 + 40);
}

// Address range: 0x18029f9f0 - 0x18029fa0b
int64_t function_18029f9f0(void) {
    // 0x18029f9f0
    int64_t v1; // 0x18029f9f0
    return function_18002c510((int64_t *)(v1 + 208));
}

// Address range: 0x18029fa10 - 0x18029fa28
int64_t function_18029fa10(void) {
    // 0x18029fa10
    int64_t v1; // 0x18029fa10
    return function_18002c5b0(*(int64_t *)(v1 + 88));
}

// Address range: 0x18029fa28 - 0x18029fa43
int64_t function_18029fa28(void) {
    // 0x18029fa28
    int64_t v1; // 0x18029fa28
    return function_18002c510((int64_t *)(v1 + 160));
}

// Address range: 0x18029fa43 - 0x18029fa5e
int64_t function_18029fa43(void) {
    // 0x18029fa43
    int64_t v1; // 0x18029fa43
    return function_18002c510((int64_t *)(v1 + 128));
}

// Address range: 0x18029fa60 - 0x18029fa7b
int64_t function_18029fa60(void) {
    // 0x18029fa60
    int64_t v1; // 0x18029fa60
    return function_18005e520((int64_t *)(v1 + 264));
}

// Address range: 0x18029fa80 - 0x18029fa9b
int64_t function_18029fa80(void) {
    // 0x18029fa80
    int64_t v1; // 0x18029fa80
    return function_18002c510((int64_t *)(v1 + 160));
}

// Address range: 0x18029faa0 - 0x18029fab8
int64_t function_18029faa0(void) {
    // 0x18029faa0
    int64_t v1; // 0x18029faa0
    return function_180060f20(v1 + 48);
}

// Address range: 0x18029fab8 - 0x18029fad3
int64_t function_18029fab8(void) {
    // 0x18029fab8
    int64_t v1; // 0x18029fab8
    return function_18002c510((int64_t *)(v1 + 336));
}

// Address range: 0x18029fad3 - 0x18029faee
int64_t function_18029fad3(void) {
    // 0x18029fad3
    int64_t v1; // 0x18029fad3
    return function_18002c510((int64_t *)(v1 + 368));
}

// Address range: 0x18029faee - 0x18029fb09
int64_t function_18029faee(void) {
    // 0x18029faee
    int64_t v1; // 0x18029faee
    return function_18002c510((int64_t *)(v1 + 304));
}

// Address range: 0x18029fb09 - 0x18029fb24
int64_t function_18029fb09(void) {
    // 0x18029fb09
    int64_t v1; // 0x18029fb09
    return function_180060ea0((int64_t *)(v1 + 232));
}

// Address range: 0x18029fb24 - 0x18029fb3c
int64_t function_18029fb24(void) {
    // 0x18029fb24
    int64_t v1; // 0x18029fb24
    return function_18002c570(v1 + 64);
}

// Address range: 0x18029fb3c - 0x18029fb57
int64_t function_18029fb3c(void) {
    // 0x18029fb3c
    int64_t v1; // 0x18029fb3c
    return function_180060ea0((int64_t *)(v1 + 184));
}

// Address range: 0x18029fb57 - 0x18029fb6f
int64_t function_18029fb57(void) {
    // 0x18029fb57
    int64_t v1; // 0x18029fb57
    return function_18002c570(v1 + 96);
}

// Address range: 0x18029fb6f - 0x18029fb8a
int64_t function_18029fb6f(void) {
    // 0x18029fb6f
    int64_t v1; // 0x18029fb6f
    return function_180060f20(v1 + 256);
}

// Address range: 0x18029fb8a - 0x18029fba5
int64_t function_18029fb8a(void) {
    // 0x18029fb8a
    int64_t v1; // 0x18029fb8a
    return function_180060f50(v1 + 224);
}

// Address range: 0x18029fbb0 - 0x18029fbcb
int64_t function_18029fbb0(void) {
    // 0x18029fbb0
    int64_t v1; // 0x18029fbb0
    return function_18002c510((int64_t *)(v1 + 384));
}

// Address range: 0x18029fbd0 - 0x18029fbeb
int64_t function_18029fbd0(void) {
    // 0x18029fbd0
    int64_t v1; // 0x18029fbd0
    return function_18002c510((int64_t *)(v1 + 176));
}

// Address range: 0x18029fbf0 - 0x18029fc0b
int64_t function_18029fbf0(void) {
    // 0x18029fbf0
    int64_t v1; // 0x18029fbf0
    return function_18002c510((int64_t *)(v1 + 256));
}

// Address range: 0x18029fc0b - 0x18029fc26
int64_t function_18029fc0b(void) {
    // 0x18029fc0b
    int64_t v1; // 0x18029fc0b
    return function_18002c510((int64_t *)(v1 + 288));
}

// Address range: 0x18029fc30 - 0x18029fc4b
int64_t function_18029fc30(void) {
    // 0x18029fc30
    int64_t v1; // 0x18029fc30
    return function_18002c510((int64_t *)(v1 + 144));
}

// Address range: 0x18029fc50 - 0x18029fc6b
int64_t function_18029fc50(void) {
    // 0x18029fc50
    int64_t v1; // 0x18029fc50
    return function_18002c510((int64_t *)(v1 + 176));
}

// Address range: 0x18029fc6b - 0x18029fc86
int64_t function_18029fc6b(void) {
    // 0x18029fc6b
    int64_t v1; // 0x18029fc6b
    return function_18002c510((int64_t *)(v1 + 464));
}

// Address range: 0x18029fc86 - 0x18029fca1
int64_t function_18029fc86(void) {
    // 0x18029fc86
    int64_t v1; // 0x18029fc86
    return function_18002c510((int64_t *)(v1 + 528));
}

// Address range: 0x18029fca1 - 0x18029fcbc
int64_t function_18029fca1(void) {
    // 0x18029fca1
    int64_t v1; // 0x18029fca1
    return function_18002c510((int64_t *)(v1 + 560));
}

// Address range: 0x18029fcbc - 0x18029fce5
int64_t function_18029fcbc(void) {
    // 0x18029fcbc
    int64_t v1; // 0x18029fcbc
    int32_t * v2 = (int32_t *)(v1 + 52); // 0x18029fcc5
    int32_t v3 = *v2; // 0x18029fcc5
    int64_t result = 0; // 0x18029fccd
    if ((v3 & 1) != 0) {
        // 0x18029fccf
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 496));
    }
    // 0x18029fcdf
    return result;
}

// Address range: 0x18029fce5 - 0x18029fd00
int64_t function_18029fce5(void) {
    // 0x18029fce5
    int64_t v1; // 0x18029fce5
    return function_18002c510((int64_t *)(v1 + 592));
}

// Address range: 0x18029fd00 - 0x18029fd18
int64_t function_18029fd00(void) {
    // 0x18029fd00
    int64_t v1; // 0x18029fd00
    return function_18002c2d0(*(int64_t *)(v1 + 112));
}

// Address range: 0x18029fd20 - 0x18029fd3b
int64_t function_18029fd20(void) {
    // 0x18029fd20
    int64_t v1; // 0x18029fd20
    return function_1800690d0(v1 + 128);
}

// Address range: 0x18029fd40 - 0x18029fd5b
int64_t function_18029fd40(void) {
    // 0x18029fd40
    int64_t v1; // 0x18029fd40
    return function_180050280((int64_t *)(v1 + 280));
}

// Address range: 0x18029fd60 - 0x18029fd7b
int64_t function_18029fd60(void) {
    // 0x18029fd60
    int64_t v1; // 0x18029fd60
    return function_180050170(v1 + 128);
}

// Address range: 0x18029fd80 - 0x18029fe06
int64_t function_18029fd80(void) {
    // 0x18029fd80
    int64_t v1; // 0x18029fd80
    int64_t v2 = *(int64_t *)(v1 + 320); // 0x18029fd8d
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x18029fda2
    int64_t * v4 = (int64_t *)(v1 + 104); // 0x18029fda8
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 84); // 0x18029fdb3
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 38); // 0x18029fdb6
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 88); // 0x18029fdc0
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 56) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x180064958;
}

// Address range: 0x18029fe10 - 0x18029fe2b
int64_t function_18029fe10(void) {
    // 0x18029fe10
    int64_t v1; // 0x18029fe10
    return function_180068ff0((int64_t *)(v1 + 280));
}

// Address range: 0x18029fe30 - 0x18029fe48
int64_t function_18029fe30(void) {
    // 0x18029fe30
    int64_t v1; // 0x18029fe30
    return function_180068de0((int64_t *)(v1 + 72));
}

// Address range: 0x18029fe50 - 0x18029fe68
int64_t function_18029fe50(void) {
    // 0x18029fe50
    int64_t v1; // 0x18029fe50
    return function_180068de0((int64_t *)(v1 + 80));
}

// Address range: 0x18029fe70 - 0x18029fe8b
int64_t function_18029fe70(void) {
    // 0x18029fe70
    int64_t v1; // 0x18029fe70
    return function_18002c410((int64_t *)(v1 + 256));
}

// Address range: 0x18029fe90 - 0x18029feab
int64_t function_18029fe90(void) {
    // 0x18029fe90
    int64_t v1; // 0x18029fe90
    return function_18002c510((int64_t *)(v1 + 192));
}

// Address range: 0x18029feb0 - 0x18029fee2
int64_t function_18029feb0(void) {
    // 0x18029feb0
    int64_t v1; // 0x18029feb0
    function_18002a920((int64_t *)*(int64_t *)(v1 + 280), v1 + 192);
    int32_t * v2 = (int32_t *)(v1 + 36); // 0x18029fed0
    *v2 = *v2 | 1;
    return function_18029fee9();
}

// Address range: 0x18029fee2 - 0x18029fee9
int64_t function_18029fee2(void) {
    // 0x18029fee2
    return 0x180066e3a;
}

// Address range: 0x18029fee9 - 0x18029feef
int64_t function_18029fee9(void) {
    // 0x18029fee9
    int64_t result; // 0x18029fee9
    return result;
}

// Address range: 0x18029fef0 - 0x18029ff22
int64_t function_18029fef0(void) {
    // 0x18029fef0
    int64_t v1; // 0x18029fef0
    function_18002a920((int64_t *)*(int64_t *)(v1 + 312), v1 + 208);
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029ff10
    *v2 = *v2 | 1;
    return function_18029ff29();
}

// Address range: 0x18029ff22 - 0x18029ff29
int64_t function_18029ff22(void) {
    // 0x18029ff22
    return 0x180067152;
}

// Address range: 0x18029ff29 - 0x18029ff2f
int64_t function_18029ff29(void) {
    // 0x18029ff29
    int64_t result; // 0x18029ff29
    return result;
}

// Address range: 0x18029ff30 - 0x18029ff62
int64_t function_18029ff30(void) {
    // 0x18029ff30
    int64_t v1; // 0x18029ff30
    function_18002a920((int64_t *)*(int64_t *)(v1 + 328), v1 + 208);
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029ff50
    *v2 = *v2 | 1;
    return function_18029ff69();
}

// Address range: 0x18029ff62 - 0x18029ff69
int64_t function_18029ff62(void) {
    // 0x18029ff62
    return 0x180067362;
}

// Address range: 0x18029ff69 - 0x18029ff6f
int64_t function_18029ff69(void) {
    // 0x18029ff69
    int64_t result; // 0x18029ff69
    return result;
}

// Address range: 0x18029ff70 - 0x18029ffa2
int64_t function_18029ff70(void) {
    // 0x18029ff70
    int64_t v1; // 0x18029ff70
    function_18002a920((int64_t *)*(int64_t *)(v1 + 312), v1 + 208);
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029ff90
    *v2 = *v2 | 1;
    return function_18029ffa9();
}

// Address range: 0x18029ffa2 - 0x18029ffa9
int64_t function_18029ffa2(void) {
    // 0x18029ffa2
    return 0x180067562;
}

// Address range: 0x18029ffa9 - 0x18029ffaf
int64_t function_18029ffa9(void) {
    // 0x18029ffa9
    int64_t result; // 0x18029ffa9
    return result;
}

// Address range: 0x18029ffb0 - 0x18029ffe2
int64_t function_18029ffb0(void) {
    // 0x18029ffb0
    int64_t v1; // 0x18029ffb0
    function_18002a920((int64_t *)*(int64_t *)(v1 + 344), v1 + 208);
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x18029ffd0
    *v2 = *v2 | 1;
    return function_18029ffe9();
}

// Address range: 0x18029ffe2 - 0x18029ffe9
int64_t function_18029ffe2(void) {
    // 0x18029ffe2
    return 0x18006776a;
}

// Address range: 0x18029ffe9 - 0x18029ffef
int64_t function_18029ffe9(void) {
    // 0x18029ffe9
    int64_t result; // 0x18029ffe9
    return result;
}

// Address range: 0x18029fff0 - 0x1802a000f
int64_t function_18029fff0(void) {
    // 0x18029fff0
    int64_t v1; // 0x18029fff0
    return function_180068fb0(*(int64_t *)(v1 + 176) + 8);
}


