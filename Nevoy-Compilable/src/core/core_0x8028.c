// Core group: core_0x8028
// Address range: 0x180280090 - 0x180280159
int64_t function_180280090(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180280090
    int64_t v1; // 0x180280090
    if (a1 == 0 || a2 == 0 || (int16_t)a2 == 0) {
        // 0x1802800b6
        *(int32_t *)function_180279918(a1, a2, a3, v1) = 22;
        function_180271814(a1, a2, a3, v1);
        // 0x1802800c8
        return 0;
    }
    if ((int16_t)a1 == 0) {
        // 0x1802800ef
        *(int32_t *)function_180279918(a1, a2, a3, v1) = 22;
        // 0x1802800c8
        return 0;
    }
    // 0x1802800fc
    struct _RTL_CRITICAL_SECTION * lpCriticalSection; // 0x180280090
    function_18028ea84((int64_t *)&lpCriticalSection);
    if (lpCriticalSection == NULL) {
        int64_t v2 = function_180279918((int64_t)&lpCriticalSection, a2, a3, (int64_t)lpCriticalSection); // 0x180280110
        *(int32_t *)v2 = 24;
        // 0x1802800c8
        return 0;
    }
    int64_t result = function_180292124(a1); // 0x18028012b
    if (result == 0) {
        // 0x18028013d
        function_18028eadc((int64_t)lpCriticalSection);
    }
    // 0x180280147
    LeaveCriticalSection(lpCriticalSection);
    // 0x1802800c8
    return result;
}

// Address range: 0x18028015c - 0x180280167
int64_t function_18028015c(int64_t a1, int64_t a2) {
    // 0x18028015c
    return function_180280090(a1, a2, 64);
}

// Address range: 0x180280168 - 0x18028016d
int64_t function_180280168(int64_t a1, int64_t a2) {
    // 0x180280168
    int64_t v1; // 0x180280168
    return function_180280090(a1, a2, v1);
}

// Address range: 0x180280170 - 0x1802801fd
int64_t function_180280170(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    if (a1 == 0) {
        // 0x18028018f
        *(char *)(v1 + 48) = 1;
        *(int32_t *)(v1 + 44) = 22;
        int64_t v2; // 0x180280170
        function_18027175c(a1, 0, 0, 0, v2 & a1, a2);
        // 0x1802801b2
        return 0xffffffff;
    }
    struct _RTL_CRITICAL_SECTION * lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)a1; // 0x1802801c2
    EnterCriticalSection(lpCriticalSection);
    int64_t v3 = function_18028026c(a1, v1, a3, a4); // 0x1802801ce
    int64_t v4 = v3; // 0x1802801e1
    if (v3 >= 0x80000000) {
        // 0x1802801e3
        *(char *)(v1 + 48) = 1;
        *(int32_t *)(v1 + 44) = 22;
        v4 = 0xffffffff;
    }
    // 0x1802801f1
    LeaveCriticalSection(lpCriticalSection);
    // 0x1802801b2
    return v4 & 0xffffffff;
}

// Address range: 0x180280200 - 0x18028026b
int64_t function_180280200(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t result; // 0x180280200
    if (a1 != 0) {
        struct _RTL_CRITICAL_SECTION * lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)a1; // 0x18028024a
        EnterCriticalSection(lpCriticalSection);
        int64_t v2 = function_18028026c(a1, v1, a3, a4); // 0x180280256
        LeaveCriticalSection(lpCriticalSection);
        result = v2;
    } else {
        // 0x18028021b
        *(char *)(v1 + 48) = 1;
        *(int32_t *)(v1 + 44) = 22;
        int64_t v3; // 0x180280200
        function_18027175c(a1, 0, 0, 0, v3 & a1, a2);
        result = -1;
    }
    // 0x18028023f
    return result;
}

// Address range: 0x18028026c - 0x1802803bc
int64_t function_18028026c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18028026c
    if (a1 == 0) {
        // 0x180280287
        *(char *)(a2 + 48) = 1;
        *(int32_t *)(a2 + 44) = 22;
        int64_t v1; // 0x18028026c
        function_18027175c(a1, 0, 0, 0, v1 & a1, (int64_t *)a2);
        // 0x1802803ac
        return -1;
    }
    int64_t v2 = function_18028c3e0(a1); // 0x1802802b0
    int32_t * v3 = (int32_t *)(a1 + 16); // 0x1802802b5
    if (*v3 < 0) {
        // 0x1802802be
        *v3 = 0;
    }
    int64_t v4 = 0x100000000 * v2;
    int64_t v5 = v4 / 0x100000000; // 0x1802802b9
    int64_t v6 = v5 & 0xffffffff; // 0x1802802c7
    int64_t v7 = function_180290ae8(v6, 0, 1, a2); // 0x1802802cd
    if (v7 < 0) {
        // 0x1802803ac
        return -1;
    }
    int32_t * v8 = (int32_t *)(a1 + 20); // 0x1802802da
    int32_t v9 = *v8; // 0x1802802da
    if ((v9 & 192) == 0) {
        // 0x1802803ac
        return v7 - (int64_t)*v3;
    }
    int64_t v10 = *(int64_t *)(a1 + 8); // 0x1802802fb
    int64_t v11 = v6 - v10; // 0x1802802fb
    int64_t v12 = v4 / 0x4000000000; // 0x180280308
    int64_t v13 = *(int64_t *)(8 * v12 + (int64_t)&g1307); // 0x180280310
    int64_t v14 = v13 + 72 * (v5 & 63);
    unsigned char v15 = *(char *)(v14 + 57); // 0x180280314
    int64_t result; // 0x18028026c
    if ((v9 & 3) == 0) {
        // 0x180280369
        result = v11;
        if ((v9 & 4) == 0) {
            // 0x180280374
            *(char *)(a2 + 48) = 1;
            *(int32_t *)(a2 + 44) = 22;
            // 0x1802803ac
            return -1;
        }
    } else {
        if (v15 == 1) {
            // 0x180280327
            if ((*(char *)(v14 + 61) & 2) != 0) {
                // 0x1802803ac
                return function_180280518(a1, v7, a2);
            }
        }
        // 0x180280342
        result = v11;
        if (*(char *)(v14 + 56) < 0) {
            int64_t v16 = function_1802806a0(v10, v12, (int64_t)v15 | (int64_t)&g1307 & -256); // 0x180280357
            result = v16 + v11;
        }
    }
    // 0x18028035f
    if (v7 == 0) {
        // 0x1802803ac
        return result;
    }
    // 0x180280384
    int64_t result2; // 0x18028026c
    if ((*v8 & 1) == 0) {
        // 0x18028039f
        result2 = (result >> (int64_t)(v15 == 1)) + v7;
    } else {
        // 0x18028038c
        result2 = function_1802803bc(a1, v7, result, a2);
    }
    // 0x1802803ac
    return result2;
}

// Address range: 0x1802803bc - 0x180280517
int64_t function_1802803bc(int64_t a1, int64_t result, uint64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * function_18028c3e0(a1);
    int64_t v2 = v1 / 0x100000000; // 0x1802803e5
    int64_t v3 = v2 & 63; // 0x1802803f4
    int64_t * v4 = (int64_t *)(8 * v1 / 0x4000000000 + (int64_t)&g1307); // 0x18028040a
    int64_t v5 = 72 * v3; // 0x18028040e
    int64_t v6 = v5 + *v4;
    unsigned char v7 = *(char *)(v6 + 57); // 0x18028040e
    int32_t v8 = *(int32_t *)(a1 + 16); // 0x18028041e
    if (v8 == 0) {
        // 0x180280502
        return result;
    }
    int64_t * v9 = (int64_t *)(a1 + 8); // 0x18028042f
    int64_t v10 = (int64_t)v8 - *v9 + v3; // 0x180280433
    int64_t result2; // 0x1802803bc
    uint128_t v11; // 0x1802804ec
    if (*(char *)(v6 + 56) >= 0) {
        // 0x1802804ea
        v11 = v7 == 1 ? 2 : 1;
        result2 = result - (int64_t)((int128_t)v10 / v11) + (int64_t)((int128_t)a3 / v11);
        // 0x180280502
        return result2;
    }
    int64_t v12 = v2 & 0xffffffff; // 0x18028044c
    int64_t v13; // 0x1802803bc
    int64_t v14; // 0x1802803bc
    if (function_180290ae8(v12, 0, 2, a4) != result) {
        int64_t result3 = function_180290ae8(v12, (int32_t)result, 0, a4); // 0x18028048a
        if (result3 == -1) {
            // 0x180280502
            return result3;
        }
        if (v10 > 512) {
            // 0x1802804ba
            v13 = (int64_t)*(int32_t *)(a1 + 32);
            goto lab_0x1802804be;
        } else {
            // 0x1802804a4
            v13 = 512;
            if ((*(int32_t *)(a1 + 20) & 320) == 64) {
                goto lab_0x1802804be;
            } else {
                // 0x1802804ba
                v13 = (int64_t)*(int32_t *)(a1 + 32);
                goto lab_0x1802804be;
            }
        }
    } else {
        int64_t v15 = *v9; // 0x18028045d
        int64_t v16 = function_1802806a0(v15, v15 + v10, (int64_t)v7) + v10; // 0x18028046d
        v14 = v16;
        if ((*(int32_t *)(a1 + 20) & 32) == 0) {
            // 0x1802804ea
            v11 = v7 == 1 ? 2 : 1;
            result2 = result - (int64_t)((int128_t)v16 / v11) + (int64_t)((int128_t)a3 / v11);
            // 0x180280502
            return result2;
        }
        goto lab_0x1802804d6;
    }
  lab_0x1802804d6:;
    int64_t v17 = v14 + (v7 < 3 ? 2 : 1); // 0x1802804e4
    // 0x1802804ea
    v11 = v7 == 1 ? 2 : 1;
    result2 = result - (int64_t)((int128_t)v17 / v11) + (int64_t)((int128_t)a3 / v11);
    // 0x180280502
    return result2;
  lab_0x1802804be:
    // 0x1802804be
    v14 = v13;
    if ((*(char *)(v5 + 56 + *v4) & 4) == 0) {
        // 0x1802804ea
        v11 = v7 == 1 ? 2 : 1;
        result2 = result - (int64_t)((int128_t)v13 / v11) + (int64_t)((int128_t)a3 / v11);
        // 0x180280502
        return result2;
    }
    goto lab_0x1802804d6;
}

// Address range: 0x180280518 - 0x18028069e
int64_t function_180280518(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180280518
    int64_t v1; // bp-56, 0x180280518
    int64_t v2 = (int64_t)&v1 - __chkstk(a1, a2, a3); // 0x180280532
    int64_t * v3 = (int64_t *)(v2 + 0x1040); // 0x18028053f
    *v3 = v2 ^ (int64_t)g731;
    int64_t v4 = function_18028c3e0(a1); // 0x180280550
    if (*(int32_t *)(a1 + 16) == 0) {
        // 0x180280673
        return function_18026ad50(*v3 ^ v2);
    }
    int64_t v5 = 0x100000000 * v4;
    int64_t v6 = v5 / 0x100000000; // 0x180280557
    int64_t * v7 = (int64_t *)(8 * v5 / 0x4000000000 + 0x180329600); // 0x180280597
    int64_t v8 = v6 & 0xffffffff; // 0x18028059f
    int64_t v9 = 72 * (v6 & 63); // 0x1802805a2
    int64_t v10 = v9 + 48;
    int64_t v11 = function_180290ae8(v8, (int32_t)*(int64_t *)(*v7 + v10), 0, a3); // 0x1802805a7
    int64_t v12 = *v7; // 0x1802805b6
    if (v11 != *(int64_t *)(v12 + v10)) {
        // 0x180280673
        return function_18026ad50(*v3 ^ v2);
    }
    int32_t * lpNumberOfBytesRead = (int32_t *)(v2 + 48); // 0x1802805c9
    *lpNumberOfBytesRead = 0;
    int64_t hFile = *(int64_t *)(v9 + 40 + v12); // 0x1802805d2
    int64_t lpBuffer = v2 + 64; // 0x1802805d7
    *(int64_t *)(v2 + 32) = 0;
    bool v13 = ReadFile((int64_t *)hFile, (int64_t *)lpBuffer, 0x1000, lpNumberOfBytesRead, (struct _OVERLAPPED *)&g1381); // 0x1802805e7
    if (!v13 || function_180290ae8(v8, (int32_t)a2, 0, a3) < 0) {
        // 0x180280673
        return function_18026ad50(*v3 ^ v2);
    }
    int64_t v14 = a1 - *(int64_t *)(a1 + 8); // 0x18028056d
    int64_t v15 = v14 - (v14 >> 63); // 0x180280579
    int64_t v16 = v15 / 2; // 0x180280580
    int64_t v17 = (int64_t)*lpNumberOfBytesRead; // 0x180280607
    if (v16 > v17) {
        // 0x180280673
        return function_18026ad50(*v3 ^ v2);
    }
    if (v15 < 2) {
        // 0x180280673
        return function_18026ad50(*v3 ^ v2);
    }
    uint64_t v18 = lpBuffer + v17; // 0x180280615
    int64_t v19 = 0; // 0x180280656
    uint64_t v20 = lpBuffer;
    while (v20 < v18) {
        unsigned char v21 = *(char *)v20; // 0x18028062e
        int64_t v22; // 0x180280518
        if (v21 != 13) {
            // 0x180280647
            v22 = v20 + (int64_t)*(char *)((int64_t)v21 + 0x18031d5d0);
        } else {
            // 0x180280633
            v22 = v20;
            if (v20 < v18 - 1) {
                int64_t v23 = v20 + 1; // 0x18028063c
                v22 = *(char *)v23 != 10 ? v20 : v23;
            }
        }
        // 0x180280656
        v19++;
        if (v19 == v16) {
            // break -> 0x180280673
            return 0;
        }
        v20 = v22 + 1;
    }
    // 0x180280673
    return function_18026ad50(*v3 ^ v2);
}

// Address range: 0x1802806a0 - 0x1802806f5
int64_t function_1802806a0(int64_t a1, int64_t a2, int64_t a3) {
    if ((unsigned char)((char)a3 - 1) < 2) {
        // 0x1802806ac
        if (a1 == a2) {
            // 0x1802806cd
            return 0;
        }
        int64_t v1 = a1; // 0x1802806b2
        int64_t v2 = *(int16_t *)v1 == 10; // 0x1802806bd
        v1 += 2;
        int64_t v3 = v2; // 0x1802806cb
        while (v1 != a2) {
            // 0x1802806b4
            v2 = v3 + (int64_t)(*(int16_t *)v1 == 10);
            v1 += 2;
            v3 = v2;
        }
        // 0x1802806cd
        return 2 * v2;
    }
    int64_t result = 0; // 0x1802806d8
    if (a1 == a2) {
        // 0x1802806cd
        return 0;
    }
    int64_t v4 = a1; // 0x1802806d8
    result += (int64_t)(*(char *)v4 == 10);
    v4++;
    while (v4 != a2) {
        // 0x1802806da
        result += (int64_t)(*(char *)v4 == 10);
        v4++;
    }
    // 0x1802806cd
    return result;
}

// Address range: 0x1802806f8 - 0x180280792
int64_t function_1802806f8(void) {
    int64_t v1 = 0; // bp-72, 0x18028070a
    if (g1298 == 0) {
        // 0x180280728
        int128_t v2; // 0x1802806f8
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x180280738
    int64_t v3; // 0x1802806f8
    int64_t v4; // 0x1802806f8
    int64_t v5; // 0x1802806f8
    return function_180280200(v5, &v1, v4, v3);
}

// Address range: 0x180280794 - 0x180280799
int64_t function_180280794(int64_t a1, int64_t a2) {
    // 0x180280794
    int64_t v1; // 0x180280794
    int64_t v2; // 0x180280794
    return function_18028026c(a1, a2, v2, v1);
}

// Address range: 0x18028079c - 0x180280834
int64_t function_18028079c(int64_t a1) {
    int64_t v1 = 0; // bp-72, 0x1802807ae
    if (g1298 == 0) {
        // 0x1802807cc
        int128_t v2; // 0x18028079c
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x1802807dc
    int64_t v3; // 0x18028079c
    int64_t v4; // 0x18028079c
    return function_180280170(a1, &v1, v4, v3) & 0xffffffff;
}

// Address range: 0x180280834 - 0x1802808da
int64_t function_180280834(int64_t a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    if (a1 != 0 == (a3 != NULL)) {
        // 0x18028088d
        int64_t v3; // bp-808, 0x180280834
        int64_t v4 = function_180280984(a1, v2, &v3); // 0x180280892
        function_18027a510(v4 & 0xffffffff, &v3, v1);
        int64_t v5 = *(int64_t *)(v2 + 24); // 0x1802808a6
        if (v5 == 0) {
            // 0x1802808b9
            return function_18026ad50((int64_t)g731);
        }
        // 0x1802808af
        if (*(int64_t *)(v2 + 16) == 0) {
            // 0x1802808b6
            *(char *)v5 = 0;
        }
    } else {
        // 0x180280863
        int64_t v6; // 0x180280834
        *(int32_t *)function_180279918(a1, v2, v1, v6) = 22;
        function_180271814(a1, v2, v1, v6);
        int64_t v7 = *(int64_t *)(v2 + 24); // 0x180280873
        if (v7 == 0) {
            // 0x1802808b9
            return function_18026ad50((int64_t)g731);
        }
        // 0x18028087c
        if (*(int64_t *)(v2 + 16) == 0) {
            // 0x180280883
            *(char *)v7 = 0;
        }
    }
    // 0x1802808b9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802808dc - 0x180280982
int64_t function_1802808dc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1802808dc
    if (a1 != 0 == (a3 != 0)) {
        // 0x180280935
        int64_t v1; // bp-808, 0x1802808dc
        int64_t v2 = function_180280984(a1, a2, &v1); // 0x18028093a
        function_18027a678(v2 & 0xffffffff, &v1, a3);
        int64_t v3 = *(int64_t *)(a2 + 24); // 0x18028094e
        if (v3 == 0) {
            // 0x180280961
            return function_18026ad50((int64_t)g731);
        }
        // 0x180280957
        if (*(int64_t *)(a2 + 16) == 0) {
            // 0x18028095e
            *(char *)v3 = 0;
        }
    } else {
        // 0x18028090b
        int64_t v4; // 0x1802808dc
        *(int32_t *)function_180279918(a1, a2, a3, v4) = 22;
        function_180271814(a1, a2, a3, v4);
        int64_t v5 = *(int64_t *)(a2 + 24); // 0x18028091b
        if (v5 == 0) {
            // 0x180280961
            return function_18026ad50((int64_t)g731);
        }
        // 0x180280924
        if (*(int64_t *)(a2 + 16) == 0) {
            // 0x18028092b
            *(char *)v5 = 0;
        }
    }
    // 0x180280961
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180280984 - 0x180281148
int64_t function_180280984(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2; // 0x180280984
    int64_t v3; // 0x180280984
    int64_t v4; // 0x180280984
    int64_t v5; // 0x180280984
    int64_t v6; // 0x180280984
    int64_t v7; // 0x180280984
    int64_t v8; // 0x180280984
    int64_t v9; // 0x180280984
    char v10; // bp+16, 0x180280984
    int64_t v11; // bp-80, 0x180280984
    int64_t v12; // 0x180280a66
    int64_t v13; // 0x180280ad8
    int64_t * v14; // 0x180280af4
    int64_t * v15; // 0x180280af8
    int64_t * v16; // 0x1802809cf
    int64_t v17; // 0x180280afe
    int64_t * v18; // 0x1802809de
    if (a2 == 0) {
        goto lab_0x1802809b5;
    } else {
        // 0x1802809af
        if (*(int64_t *)(a2 + 24) != 0) {
            // 0x1802809cf
            v16 = (int64_t *)(a2 + 16);
            int64_t v19 = *v16; // 0x1802809cf
            uint64_t v20 = v19 + 1; // 0x1802809d7
            *v16 = v20;
            v18 = (int64_t *)(a2 + 8);
            uint64_t v21 = *v18; // 0x1802809de
            int64_t v22 = 0; // 0x1802809e2
            if (v20 != v21 && v21 != 0 != v20 > v21) {
                // 0x1802809f9
                *v16 = v19 + 2;
                v22 = (int64_t)*(char *)v20;
            }
            // 0x180280a02
            v11 = a2;
            v10 = v22;
            int64_t v23 = function_18027d01c(v22, 8, a1); // 0x180280a5a
            int64_t v24 = v22; // 0x180280a61
            if ((int32_t)v23 != 0) {
                uint64_t v25 = *v16 + 1; // 0x180280a21
                *v16 = v25;
                uint64_t v26 = *v18; // 0x180280a28
                int64_t v27 = 0; // 0x180280a2c
                int64_t v28; // 0x180280a3c
                if (v26 != 0 != v25 > v26) {
                    // 0x180280a39
                    v28 = *(int64_t *)24;
                    v27 = 0;
                    if (v28 != *(int64_t *)16) {
                        // 0x180280a46
                        *(int64_t *)24 = v28 + 1;
                        v27 = (int64_t)*(char *)v28;
                    }
                }
                // 0x180280a4f
                v10 = v27;
                int64_t v29 = function_18027d01c(v27, 8, a1); // 0x180280a5a
                v24 = v27;
                while ((int32_t)v29 != 0) {
                    // 0x180280a1d
                    v25 = *v16 + 1;
                    *v16 = v25;
                    v26 = *v18;
                    v27 = 0;
                    if (v26 != 0 != v25 > v26) {
                        // 0x180280a39
                        v28 = *(int64_t *)24;
                        v27 = 0;
                        if (v28 != *(int64_t *)16) {
                            // 0x180280a46
                            *(int64_t *)24 = v28 + 1;
                            v27 = (int64_t)*(char *)v28;
                        }
                    }
                    // 0x180280a4f
                    v10 = v27;
                    v29 = function_18027d01c(v27, 8, a1);
                    v24 = v27;
                }
            }
            int64_t v30 = v10; // 0x180280a63
            v12 = v1 + 776;
            *(char *)v12 = (char)(v10 == 45);
            char v31 = v10; // 0x180280a7b
            v4 = v24;
            v7 = v30;
            if ((v10 - 43 & -3) == 0) {
                uint64_t v32 = *v16 + 1; // 0x180280a81
                *v16 = v32;
                uint64_t v33 = *v18; // 0x180280a88
                int64_t v34 = v24; // 0x180280a8c
                int64_t v35 = 0; // 0x180280a8c
                if (v33 != 0 != v32 > v33) {
                    int64_t * v36 = (int64_t *)(v30 + 16); // 0x180280a9c
                    int64_t v37 = *v36; // 0x180280a9c
                    v34 = v30;
                    v35 = 0;
                    if (v37 != *(int64_t *)(v30 + 8)) {
                        // 0x180280aa6
                        *v36 = v37 + 1;
                        v34 = v30;
                        v35 = (int64_t)*(char *)v37;
                    }
                }
                // 0x180280aaf
                v7 = v35;
                v31 = v7;
                v10 = v31;
                v4 = v34;
            }
            // 0x180280ab2
            if ((v31 - 73 & -33) == 0) {
                // 0x180281130
                return function_180281148((int64_t *)&v10, a2, v19);
            }
            // 0x180280abd
            if ((v7 + 178 & 223) == 0) {
                // 0x180281130
                return function_1802812f8((int64_t *)&v10, a2, v19);
            }
            // 0x180280ac8
            v6 = v4;
            v9 = v7;
            v3 = 0;
            if (v31 != 48) {
                goto lab_0x180280b86;
            } else {
                // 0x180280ad4
                v13 = *v16 + 1;
                *v16 = v13;
                uint64_t v38 = *v18; // 0x180280ae0
                if (v38 != 0 == v13 > v38) {
                    goto lab_0x180280aec;
                } else {
                    // 0x180280af1
                    v14 = (int64_t *)(v7 + 16);
                    int64_t v39 = *v14; // 0x180280af4
                    v15 = (int64_t *)(v7 + 8);
                    if (v39 == *v15) {
                        goto lab_0x180280aec;
                    } else {
                        unsigned char v40 = *(char *)v39; // 0x180280afe
                        v17 = v4 & -256 | (int64_t)v40;
                        *v14 = v39 + 1;
                        switch (v40) {
                            case 120: {
                                goto lab_0x180280b4a;
                            }
                            case 88: {
                                goto lab_0x180280b4a;
                            }
                            default: {
                                // 0x180280b11
                                v2 = *v16;
                                v5 = v17;
                                v8 = v7 & -256 | (int64_t)v10;
                                goto lab_0x180280b14;
                            }
                        }
                    }
                }
            }
        } else {
            goto lab_0x1802809b5;
        }
    }
  lab_0x180280d77:;
    // 0x180280d77
    int64_t v41; // 0x180280984
    int64_t * v42 = (int64_t *)(v41 + 16); // 0x180280d7a
    int64_t v43 = *v42; // 0x180280d7a
    int64_t v44; // 0x180280984
    int64_t v45; // 0x180280984
    if (v43 == *(int64_t *)(v41 + 8)) {
        // 0x180280d73
        v44 = 0;
        v45 = v41 & -256;
        goto lab_0x180280d8d;
    } else {
        int64_t v46 = v41 & -256;
        *v42 = v43 + 1;
        v44 = v46;
        v45 = v46 | (int64_t)*(char *)v43;
        goto lab_0x180280d8d;
    }
  lab_0x180280d8d:
    // 0x180280d8d
    v10 = v45;
    int64_t v47 = v45 & 255; // 0x180280d90
    int64_t v48 = v47 | v44; // 0x180280d95
    int64_t v49 = v45; // 0x180280d95
    int64_t v50; // 0x180280984
    int64_t v51 = v50; // 0x180280d95
    int64_t v52; // 0x180280984
    int64_t v53 = v47 | v52 & -256; // 0x180280d95
    int64_t v54 = 1; // 0x180280d95
    goto lab_0x180280d15;
  lab_0x180280c44:;
    // 0x180280c44
    int64_t v66; // 0x180280984
    int64_t v67 = v66; // 0x180280c47
    int64_t v68; // 0x180280984
    int64_t v69 = v68 & -256; // 0x180280c47
    goto lab_0x180280c5f;
  lab_0x180280c5f:
    // 0x180280c5f
    v10 = v69;
    int64_t v70 = v67; // 0x180280c62
    int64_t v71 = v69; // 0x180280c62
    int64_t v72; // 0x180280984
    int64_t v73 = v72; // 0x180280c62
    int64_t v74 = 1; // 0x180280c62
    goto lab_0x180280be8;
  lab_0x1802809b5:;
    // 0x1802809b5
    int64_t v86; // 0x180280984
    *(int32_t *)function_180279918(a1, a2, v1, v86) = 22;
    function_180271814(a1, a2, v1, v86);
    // 0x180281130
    return 7;
  lab_0x180280b86:;
    int64_t v87 = v3;
    int64_t v88 = v9;
    int64_t v89 = v6;
    int64_t v90 = v89; // 0x180280b96
    int64_t v91 = v88; // 0x180280b96
    int64_t v92 = 0; // 0x180280b96
    if ((char)v88 == 48) {
        uint64_t v93 = *v16 + 1; // 0x180280b9f
        *v16 = v93;
        uint64_t v94 = *v18; // 0x180280ba6
        int64_t v95 = v88; // 0x180280baa
        int64_t v96 = v88; // 0x180280baa
        int64_t v97 = v89; // 0x180280baa
        if (v94 != 0 != v93 > v94) {
            int64_t v98 = v95;
            int64_t * v99 = (int64_t *)(v98 + 16); // 0x180280bb5
            int64_t v100 = *v99; // 0x180280bb5
            v96 = v98;
            v97 = v98;
            while (v100 != *(int64_t *)(v98 + 8)) {
                unsigned char v101 = *(char *)v100; // 0x180280bbf
                int64_t v102 = v98 & -256 | (int64_t)v101; // 0x180280bbf
                *v99 = v100 + 1;
                v10 = v101;
                v90 = v98;
                v91 = v102;
                v92 = 1;
                if (v101 != 48) {
                    goto lab_0x180280bd8;
                }
                uint64_t v103 = *v16 + 1; // 0x180280b9f
                *v16 = v103;
                uint64_t v104 = *v18; // 0x180280ba6
                v95 = v102;
                v96 = v102;
                v97 = v98;
                if (v104 != 0 == v103 > v104) {
                    // break -> 0x180280bd2
                    return 0;
                }
                v98 = v95;
                v99 = (int64_t *)(v98 + 16);
                v100 = *v99;
                v96 = v98;
                v97 = v98;
            }
        }
        // 0x180280bd2
        v10 = 0;
        v90 = v97;
        v91 = v96 & -256;
        v92 = 1;
    }
  lab_0x180280bd8:;
    int64_t v105 = v1 + 8; // 0x180280b89
    int64_t v81 = v87 == 0 ? 9 : 15; // 0x180280be4
    v70 = v90;
    v71 = v91;
    v73 = v105;
    v74 = v92;
    int64_t v75; // 0x180280984
    int64_t v77; // 0x180280984
    int64_t v76; // 0x180280984
    char v78; // 0x180280984
    while (true) {
      lab_0x180280be8:
        // 0x180280be8
        v75 = v74;
        v76 = v73;
        v68 = v71;
        v77 = v70;
        v78 = v68;
        int32_t v79; // 0x180280984
        if (v78 < 58) {
            // 0x180280bef
            v79 = 0x1000000 * (int32_t)v68 / 0x1000000 - 48;
        } else {
            if (v78 < 123) {
                // 0x180280bfe
                v79 = 0x1000000 * (int32_t)v68 / 0x1000000 - 87;
            } else {
                // 0x180280c06
                v79 = -1;
                if (v78 < 91) {
                    // 0x180280c0d
                    v79 = 0x1000000 * (int32_t)v68 / 0x1000000 - 55;
                }
            }
        }
        uint32_t v80 = v79;
        if (v80 > (int32_t)v81) {
            // break -> 0x180280c64
            return 0;
        }
        // 0x180280c1d
        v72 = v12;
        if (v76 != v12) {
            // 0x180280c25
            *(char *)v76 = (char)v80;
            v72 = v76 + 1;
        }
        uint64_t v82 = *v16 + 1; // 0x180280c31
        *v16 = v82;
        uint64_t v83 = *v18; // 0x180280c38
        v66 = v77;
        if (v83 != 0 == v82 > v83) {
            goto lab_0x180280c44;
        } else {
            int64_t * v84 = (int64_t *)(v68 + 16); // 0x180280c4c
            int64_t v85 = *v84; // 0x180280c4c
            v66 = v68;
            if (v85 == *(int64_t *)(v68 + 8)) {
                goto lab_0x180280c44;
            } else {
                // 0x180280c56
                *v84 = v85 + 1;
                v67 = v68;
                v69 = v68 & -256 | (int64_t)*(char *)v85;
                goto lab_0x180280c5f;
            }
        }
    }
    int64_t v59 = v68; // 0x180280c73
    int64_t v60 = v76; // 0x180280c73
    int64_t v61 = v81; // 0x180280c73
    int64_t v62 = v75; // 0x180280c73
    int64_t v106; // 0x180280984
    int64_t v107; // 0x180280984
    if (*(char *)*(int64_t *)*(int64_t *)(v77 + 248) != v78) {
        goto lab_0x180280d9a;
    } else {
        uint64_t v108 = *v16 + 1; // 0x180280c7d
        *v16 = v108;
        uint64_t v109 = *v18; // 0x180280c84
        if (v109 != 0 == v108 > v109) {
            // 0x180280c90
            v106 = 0;
            v107 = v68 & -256;
            goto lab_0x180280cab;
        } else {
            int64_t * v110 = (int64_t *)(v68 + 16); // 0x180280c98
            int64_t v111 = *v110; // 0x180280c98
            if (v111 == *(int64_t *)(v68 + 8)) {
                // 0x180280c90
                v106 = 0;
                v107 = v68 & -256;
                goto lab_0x180280cab;
            } else {
                int64_t v112 = v68 & -256;
                *v110 = v111 + 1;
                v106 = v112;
                v107 = v112 | (int64_t)*(char *)v111;
                goto lab_0x180280cab;
            }
        }
    }
  lab_0x180280d9a:;
    int64_t v113 = v61;
    int64_t v114 = v59;
    if ((char)v62 == 0) {
        int64_t v115 = function_1802820ac(&v11, v114, v113); // 0x180280da6
        if (v87 != 0 != (char)v115 != 0) {
            // 0x180281130
            return 7;
        }
        // 0x180281130
        return 2;
    }
    int64_t v116 = v60;
    int64_t v117 = *v16 - 1; // 0x180280dc5
    *v16 = v117;
    uint64_t v118 = *v18; // 0x180280dcc
    int64_t v119 = v117; // 0x180280dd0
    int64_t v120 = v114; // 0x180280dd0
    if (v118 != 0 != v117 > v118) {
        int64_t v121 = v114 + 1; // 0x180280dd8
        int64_t v122 = v121 & 255 | v114 & -256; // 0x180280dd8
        v119 = v117;
        v120 = v122;
        if ((char)v121 >= 2) {
            int64_t * v123 = (int64_t *)(v122 + 16); // 0x180280de2
            int64_t v124 = *v123; // 0x180280de2
            v119 = v117;
            v120 = v122;
            if (v124 != v122) {
                // 0x180280deb
                *v123 = v124 - 1;
                v119 = *v16;
                v120 = v122;
            }
        }
    }
    int64_t v125 = v120;
    uint64_t v126 = v119 + 1; // 0x180280e00
    *v16 = v126;
    uint64_t v127 = *v18; // 0x180280e07
    int64_t v128 = 0; // 0x180280e0b
    int64_t v129 = v125; // 0x180280e0b
    int64_t v130 = 0; // 0x180280e0b
    int64_t v131; // 0x180280984
    int64_t v132; // 0x180280984
    int64_t v133; // 0x180280984
    int64_t v134; // 0x180280984
    int64_t v135; // 0x180280e2b
    int64_t * v136; // 0x180280e21
    int64_t * v137; // 0x180280e25
    if (v127 != 0 == v126 > v127) {
        goto lab_0x180281070;
    } else {
        // 0x180280e1e
        v136 = (int64_t *)(v125 + 16);
        int64_t v138 = *v136; // 0x180280e21
        v137 = (int64_t *)(v125 + 8);
        if (v138 == *v137) {
            goto lab_0x180281070;
        } else {
            unsigned char v139 = *(char *)v138; // 0x180280e2b
            v135 = v139;
            *v136 = v138 + 1;
            v10 = v139;
            v131 = v87;
            switch (v139) {
                case 69: {
                    // 0x180280e53
                    v131 = v87 ^ 1;
                    goto lab_0x180280e58;
                }
                case 80: {
                    goto lab_0x180280e58;
                }
                case 101: {
                    // 0x180280e53
                    v131 = v87 ^ 1;
                    goto lab_0x180280e58;
                }
                default: {
                    // 0x180280e46
                    v131 = v87;
                    v132 = v135;
                    v134 = v125;
                    v133 = 0;
                    if (v139 != 112) {
                        goto lab_0x180281073;
                    } else {
                        goto lab_0x180280e58;
                    }
                }
            }
        }
    }
  lab_0x180280aec:
    // 0x180280aec
    v2 = v13;
    v5 = v4 & -256;
    v8 = v7;
    goto lab_0x180280b14;
  lab_0x180281070:
    // 0x180281070
    v10 = v128;
    v132 = v128;
    v134 = v129;
    v133 = v130;
    goto lab_0x180281073;
  lab_0x180280b14:;
    uint64_t v140 = v2 - 1; // 0x180280b18
    *v16 = v140;
    uint64_t v141 = *v18; // 0x180280b1f
    v6 = v5;
    v9 = v8;
    v3 = 0;
    if (v141 != 0 != v140 > v141) {
        int64_t v142 = v5 + 1; // 0x180280b2b
        v6 = v142 & 255 | v5 & -256;
        v9 = v8;
        v3 = 0;
        if ((char)v142 >= 2) {
            int64_t * v143 = (int64_t *)(v8 + 16); // 0x180280b35
            int64_t v144 = *v143; // 0x180280b35
            v6 = v8;
            v9 = v8;
            v3 = 0;
            if (v144 != v8) {
                // 0x180280b3e
                *v143 = v144 - 1;
                v6 = v8;
                v9 = v8 & -256 | (int64_t)v10;
                v3 = 0;
            }
        }
    }
    goto lab_0x180280b86;
  lab_0x180281073:;
    uint64_t v145 = *v16 - 1; // 0x180281077
    *v16 = v145;
    uint64_t v146 = *v18; // 0x18028107e
    if (v146 != 0 != v145 > v146) {
        if ((char)v132 >= 1) {
            int64_t * v147 = (int64_t *)(v134 + 16); // 0x180281094
            int64_t v148 = *v147; // 0x180281094
            if (v148 != v134) {
                // 0x18028109d
                *v147 = v148 - 1;
            }
        }
    }
    // 0x1802810a4
    if (v116 == v105) {
        // 0x180281130
        return 2;
    }
    int64_t v149 = v116 - 1; // 0x1802810a9
    int64_t v150 = v116; // 0x1802810b0
    while (*(char *)v149 == 0) {
        int64_t v151 = v149; // 0x1802810b8
        v150 = v149;
        if (v149 == v105) {
            // break -> 0x1802810ba
            return 0;
        }
        v149 = v151 - 1;
        v150 = v151;
    }
    // 0x1802810ba
    if (v150 != v105) {
        // 0x1802810c6
        return v133 > 0x1450 ? 9 : 8;
    }
    // 0x180281130
    return 2;
  lab_0x180280cab:;
    char v152 = v107; // 0x180280cab
    v10 = v152;
    int64_t v153 = v107 & 255 | v106; // 0x180280cb3
    if (v76 == v105 == v152 == 48) {
        int64_t v154; // 0x180280984
        int64_t v155 = v154;
        int64_t v156 = *v16; // 0x180280cbd
        uint64_t v157 = v156 + 1; // 0x180280cc4
        *v16 = v157;
        uint64_t v158 = *v18; // 0x180280ccb
        while (v158 != 0 != v157 > v158) {
            int64_t * v159 = (int64_t *)(v155 + 16); // 0x180280cda
            int64_t v160 = *v159; // 0x180280cda
            int64_t v161 = *(int64_t *)(v155 + 8); // 0x180280cde
            if (v160 == v161) {
                // break -> 0x180280cf9
                return 0;
            }
            unsigned char v162 = *(char *)v160; // 0x180280ce4
            int64_t v163 = v162; // 0x180280ce4
            *v159 = v160 + 1;
            int64_t v164 = v155 & -256 | v163; // 0x180280ced
            v10 = v162;
            v154 = v164;
            v153 = v163;
            if (v162 != 48) {
                goto lab_0x180280d02;
            }
            v155 = v154;
            v156 = *v16;
            v157 = v156 + 1;
            *v16 = v157;
            v158 = *v18;
        }
        // 0x180280cf9
        v10 = 0;
        v153 = 0;
    }
  lab_0x180280d02:;
    uint32_t v64 = v87 == 0 ? 9 : 15;
    v48 = v153;
    v49 = v107;
    v51 = v76;
    v53 = v153 & 255;
    v54 = v75;
    while (true) {
      lab_0x180280d15:;
        int64_t v55 = v54;
        v52 = v53;
        int64_t v56 = v51;
        v41 = v49;
        int32_t v57; // 0x180280984
        if ((char)v48 < 48 || (char)v52 > 57) {
            char v58 = v41;
            if (v58 < 123) {
                // 0x180280d2f
                v57 = 0x1000000 * (int32_t)v41 / 0x1000000 - 87;
            } else {
                // 0x180280d37
                v59 = v41;
                v60 = v56;
                v61 = v52;
                v62 = v55;
                if (v58 >= 91) {
                    // break -> 0x180280d9a
                    return 0;
                }
                // 0x180280d3e
                v57 = 0x1000000 * (int32_t)v41 / 0x1000000 - 55;
            }
        } else {
            // 0x180280d20
            v57 = 0x1000000 * (int32_t)v41 / 0x1000000 - 48;
        }
        uint32_t v63 = v57;
        v59 = v41;
        v60 = v56;
        v61 = v52;
        v62 = v55;
        if (v63 > v64) {
            // break -> 0x180280d9a
            return 0;
        }
        // 0x180280d4e
        v50 = v12;
        if (v56 != v12) {
            // 0x180280d56
            *(char *)v56 = (char)v63;
            v50 = v56 + 1;
        }
        uint64_t v65 = *v16 + 1; // 0x180280d5f
        *v16 = v65;
        if (*v18 == 0) {
            goto lab_0x180280d77;
        } else {
            // 0x180280d6d
            if (v65 > *v18) {
                // 0x180280d73
                v44 = 0;
                v45 = v41 & -256;
                goto lab_0x180280d8d;
            } else {
                goto lab_0x180280d77;
            }
        }
    }
    goto lab_0x180280d9a;
  lab_0x180280b4a:;
    uint64_t v165 = *v16 + 1; // 0x180280b51
    *v16 = v165;
    uint64_t v166 = *v18; // 0x180280b58
    int64_t v167 = v17; // 0x180280b5c
    int64_t v168; // 0x180280984
    int64_t v169; // 0x180280984
    if (v166 != 0 == v165 > v166) {
        goto lab_0x180280b64;
    } else {
        int64_t v170 = *v14; // 0x180280b6c
        v167 = v7;
        if (v170 == *v15) {
            goto lab_0x180280b64;
        } else {
            // 0x180280b76
            *v14 = v170 + 1;
            v168 = v7;
            v169 = v7 & -256 | (int64_t)*(char *)v170;
            goto lab_0x180280b7f;
        }
    }
  lab_0x180280e58:
    // 0x180280e58
    v132 = v135;
    v134 = v125;
    v133 = 0;
    char v171; // 0x180280984
    char v172; // 0x180280984
    char v173; // 0x180280984
    int64_t v174; // 0x180280984
    int64_t v175; // 0x180280984
    int64_t v176; // 0x180280984
    int64_t v177; // 0x180280984
    int64_t v178; // 0x180280984
    int64_t v179; // 0x180280984
    int64_t v180; // 0x180280984
    if ((char)v131 == 0) {
        goto lab_0x180281073;
    } else {
        uint64_t v181 = *v16 + 1; // 0x180280e67
        *v16 = v181;
        uint64_t v182 = *v18; // 0x180280e6e
        if (v182 != 0 == v181 > v182) {
            // 0x180280e7a
            v174 = v113 & -256;
            v176 = 0;
            goto lab_0x180280f2c;
        } else {
            int64_t v183 = *v136; // 0x180280e88
            if (v183 == *v137) {
                // 0x180280e7a
                v174 = v113 & -256;
                v176 = 0;
                goto lab_0x180280f2c;
            } else {
                char v184 = *(char *)v183; // 0x180280e92
                int64_t v185 = v184; // 0x180280e92
                *v136 = v183 + 1;
                v10 = v184;
                char v186 = v184; // 0x180280ea6
                int64_t v187 = v185; // 0x180280ea6
                if (v184 != 43 != v184 != 45) {
                    uint64_t v188 = *v16 + 1; // 0x180280eb0
                    *v16 = v188;
                    uint64_t v189 = *v18; // 0x180280eb7
                    int64_t v190 = 0; // 0x180280ebb
                    if (v189 != 0 != v188 > v189) {
                        int64_t v191 = *v136; // 0x180280ecb
                        v190 = 0;
                        if (v191 != *v137) {
                            // 0x180280ed5
                            *v136 = v191 + 1;
                            v190 = (int64_t)*(char *)v191;
                        }
                    }
                    // 0x180280ede
                    v187 = v190;
                    v186 = v187;
                    v10 = v186;
                }
                int64_t v192 = v113 & -256; // 0x180280ee3
                v173 = v186;
                v178 = v187;
                v180 = v125;
                v179 = 0;
                v175 = v192;
                v177 = v185;
                if (v186 != 48) {
                    goto lab_0x180280f37;
                } else {
                    int64_t v193 = v192 | 1; // 0x180280eea
                    uint64_t v194 = *v16 + 1; // 0x180280ef1
                    *v16 = v194;
                    uint64_t v195 = *v18; // 0x180280ef8
                    v174 = v193;
                    v176 = v185;
                    while (v195 != 0 != v194 > v195) {
                        int64_t v196 = *v136; // 0x180280f0a
                        v174 = v193;
                        v176 = v185;
                        if (v196 == *v137) {
                            // break -> 0x180280f2c
                            return 0;
                        }
                        char v197 = *(char *)v196; // 0x180280f14
                        *v136 = v196 + 1;
                        v10 = v197;
                        if (v197 != 48) {
                            // 0x180280f35
                            v173 = v197;
                            v171 = v197;
                            v172 = 48;
                            v178 = v197;
                            v180 = v125;
                            v179 = 0;
                            v175 = v193;
                            v177 = v185;
                            goto lab_0x180280f37;
                        }
                        v194 = *v16 + 1;
                        *v16 = v194;
                        v195 = *v18;
                        v174 = v193;
                        v176 = v185;
                    }
                    goto lab_0x180280f2c;
                }
            }
        }
    }
  lab_0x180280b64:
    // 0x180280b64
    v168 = v167;
    v169 = v7 & -256;
    goto lab_0x180280b7f;
  lab_0x180280b7f:
    // 0x180280b7f
    v10 = v169;
    v6 = v168;
    v9 = v169;
    v3 = 1;
    goto lab_0x180280b86;
  lab_0x180280f2c:;
    int64_t v198 = 0; // 0x180280f2f
    int64_t v199 = v125; // 0x180280f2f
    int64_t v200 = 0; // 0x180280f2f
    int64_t v201 = v174; // 0x180280f2f
    int64_t v202 = v176; // 0x180280f2f
    goto lab_0x180280f32;
  lab_0x180280f32:;
    char v203 = v198;
    v10 = v203;
    v173 = v203;
    v171 = v203;
    v172 = 48;
    v178 = v198;
    v180 = v199;
    v179 = v200;
    v175 = v201;
    v177 = v202;
    goto lab_0x180280f37;
  lab_0x180280f37:;
    int64_t v204 = v177;
    int64_t v205 = v175;
    int64_t v206 = v179;
    int64_t v207 = v178;
    char v208 = v173;
    int64_t v209; // 0x180280984
    int64_t v210; // 0x180280984
    int32_t v211; // 0x180280984
    int64_t v212; // 0x180280984
    if (v171 < v172 || v208 > 57) {
        if (v208 < 123) {
            // 0x180280f4d
            v211 = 0x1000000 * (int32_t)v207 / 0x1000000 - 87;
            goto lab_0x180280f62;
        } else {
            // 0x180280f55
            v212 = v180;
            v210 = v206;
            v209 = v205;
            if (v208 < 91) {
                // 0x180280f5c
                v211 = 0x1000000 * (int32_t)v207 / 0x1000000 - 55;
                goto lab_0x180280f62;
            } else {
                goto lab_0x180280fb0;
            }
        }
    } else {
        // 0x180280f3e
        v211 = 0x1000000 * (int32_t)v207 / 0x1000000 - 48;
        goto lab_0x180280f62;
    }
  lab_0x180280f62:;
    int64_t v213 = v211;
    v212 = v213;
    v210 = v206;
    v209 = v205;
    if (v211 >= 10) {
        goto lab_0x180280fb0;
    } else {
        int64_t v214 = v205 & -256 | 1; // 0x180280f6a
        int64_t v215 = 10 * v206 + v213 & 0xffffffff; // 0x180280f6d
        v212 = v213;
        v210 = 0x1451;
        v209 = v214;
        if (v215 > 0x1450) {
            goto lab_0x180280fb0;
        } else {
            uint64_t v216 = *v16 + 1; // 0x180280f79
            *v16 = v216;
            uint64_t v217 = *v18; // 0x180280f80
            int64_t v218 = 0; // 0x180280f84
            if (v217 != 0 != v216 > v217) {
                int64_t * v219 = (int64_t *)(v213 + 16); // 0x180280f94
                int64_t v220 = *v219; // 0x180280f94
                v218 = 0;
                if (v220 != *(int64_t *)(v213 + 8)) {
                    // 0x180280f9e
                    *v219 = v220 + 1;
                    v218 = (int64_t)*(char *)v220;
                }
            }
            // 0x180280fa7
            v198 = v218;
            v199 = v213;
            v200 = v215;
            v201 = v214;
            v202 = v204;
            goto lab_0x180280f32;
        }
    }
  lab_0x180280fb0:;
    int64_t v221 = v210;
    int64_t v222 = v212;
    int64_t * v223 = (int64_t *)(v222 + 16);
    int64_t * v224 = (int64_t *)(v222 + 8);
    int64_t v225 = v207;
    char v226 = v225;
    int32_t v227; // 0x180280984
    if (v226 < 58) {
        // 0x180280fb7
        v227 = 0x1000000 * (int32_t)v225 / 0x1000000 - 48;
    } else {
        if (v226 < 123) {
            // 0x180280fc6
            v227 = 0x1000000 * (int32_t)v225 / 0x1000000 - 87;
        } else {
            if (v226 >= 91) {
                // break -> 0x180281017
                return 0;
            }
            // 0x180280fd5
            v227 = 0x1000000 * (int32_t)v225 / 0x1000000 - 55;
        }
    }
    while (v227 < 10) {
        uint64_t v228 = *v16 + 1; // 0x180280fe4
        *v16 = v228;
        uint64_t v229 = *v18; // 0x180280feb
        int64_t v230 = 0; // 0x180280fef
        if (v229 != 0 != v228 > v229) {
            int64_t v231 = *v223; // 0x180280fff
            v230 = 0;
            if (v231 != *v224) {
                // 0x180281009
                *v223 = v231 + 1;
                v230 = (int64_t)*(char *)v231;
            }
        }
        // 0x180281012
        v10 = v230;
        v225 = v230;
        v226 = v225;
        if (v226 < 58) {
            // 0x180280fb7
            v227 = 0x1000000 * (int32_t)v225 / 0x1000000 - 48;
        } else {
            if (v226 < 123) {
                // 0x180280fc6
                v227 = 0x1000000 * (int32_t)v225 / 0x1000000 - 87;
            } else {
                if (v226 >= 91) {
                    // break -> 0x180281017
                    return 0;
                }
                // 0x180280fd5
                v227 = 0x1000000 * (int32_t)v225 / 0x1000000 - 55;
            }
        }
    }
    int64_t v232 = (char)v204 != 45 ? v221 : -v221 & 0xffffffff;
    v132 = v225;
    v134 = v222;
    v133 = v232;
    if ((char)v209 != 0) {
        goto lab_0x180281073;
    } else {
        // 0x180281024
        if ((char)function_1802820ac(&v11, v222, v209) == 0) {
            // 0x180281130
            return 7;
        }
        uint64_t v233 = *v16 + 1; // 0x18028103c
        *v16 = v233;
        uint64_t v234 = *v18; // 0x180281043
        v128 = 0;
        v129 = v222;
        v130 = v232;
        if (v234 != 0 != v233 > v234) {
            int64_t v235 = *v223; // 0x180281057
            v128 = 0;
            v129 = v222;
            v130 = v232;
            if (v235 != *v224) {
                // 0x180281061
                *v223 = v235 + 1;
                v128 = (int64_t)*(char *)v235;
                v129 = v222;
                v130 = v232;
            }
        }
        goto lab_0x180281070;
    }
}

// Address range: 0x180281148 - 0x1802812f6
int64_t function_180281148(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = a2; // bp-40, 0x180281158
    int64_t * v3 = (int64_t *)(a2 + 16);
    int64_t * v4 = (int64_t *)(a2 + 8);
    char v5 = *(char *)&v1; // 0x180281171
    int64_t v6 = 0; // 0x180281171
    int64_t v7; // 0x180281148
    int64_t v8; // 0x180281148
    while (true) {
        // 0x180281174
        v8 = v6;
        char v9 = v5; // 0x180281174
        if (v9 != *(char *)(v8 + 0x1802f3a28)) {
            // 0x180281181
            if (*(char *)(v8 + 0x1802f3a2c) != v9) {
                // break -> 0x18028121f
                return 0;
            }
        }
        int64_t v10 = *v3; // 0x18028118f
        uint64_t v11 = v10 + 1; // 0x180281193
        *v3 = v11;
        uint64_t v12 = *v4; // 0x18028119a
        int64_t v13; // 0x180281148
        if (v11 == v12 || v12 != 0 == v11 > v12) {
            int64_t v14 = v1 & -256; // 0x1802811a6
            v1 = v14;
            v13 = v14;
        } else {
            // 0x1802811b8
            v1 = v1 & -256 | (int64_t)*(char *)v11;
            *v3 = v10 + 2;
            v13 = v1;
        }
        // 0x1802811c1
        v5 = v13;
        *(char *)a1 = v5;
        v6 = v8 + 1;
        if (v8 == 2) {
            int64_t v15 = *v3 - 1; // 0x1802811d1
            *v3 = v15;
            uint64_t v16 = *v4; // 0x1802811d8
            v7 = v15;
            if (v16 != 0 == v15 > v16) {
                goto lab_0x1802811fe;
            } else {
                int64_t v17 = v1 + 1; // 0x1802811e4
                v1 = v17 & 255 | v1 & -256;
                if ((char)v17 < 2) {
                    // 0x1802811e4
                    v7 = *v3;
                    goto lab_0x1802811fe;
                } else {
                    // 0x1802811eb
                    v1 = a2;
                    int64_t v18 = *v3; // 0x1802811ee
                    v7 = a2;
                    if (v18 == a2) {
                        goto lab_0x1802811fe;
                    } else {
                        int64_t v19 = v18 - 1; // 0x1802811f7
                        *v3 = v19;
                        v7 = v19;
                        goto lab_0x1802811fe;
                    }
                }
            }
        }
    }
    // 0x18028121f
    function_1802820ac(&v2, a2, v8);
    int64_t result = 7; // 0x18028122e
  lab_0x1802812d7:
    // 0x1802812d7
    return result;
  lab_0x1802811fe:;
    uint64_t v20 = v7 + 1; // 0x180281207
    *v3 = v20;
    uint64_t v21 = *v4; // 0x18028120e
    int64_t v22; // 0x180281148
    if (v20 == v21 || v21 != 0 == v20 > v21) {
        int64_t v23 = v1 & -256; // 0x18028121a
        v1 = v23;
        v22 = v23;
        goto lab_0x180281249;
    } else {
        // 0x180281240
        v1 = v1 & -256 | (int64_t)*(char *)v20;
        *v3 = v7 + 2;
        v22 = v1;
        goto lab_0x180281249;
    }
  lab_0x180281249:
    // 0x180281249
    *(char *)a1 = (char)v22;
    int64_t v24 = v22; // 0x18028124c
    int64_t v25 = 0; // 0x18028124c
    goto lab_0x18028124f;
  lab_0x18028124f:;
    int64_t v26 = v25;
    char v27 = v24; // 0x18028124f
    if (*(char *)(v26 + 0x1802f3a30) == v27) {
        goto lab_0x180281263;
    } else {
        // 0x180281259
        if (*(char *)(v26 + 0x1802f3a38) != v27) {
            // 0x1802812dd
            result = 4 * function_1802820ac(&v2, a2, v26) & 1020 ^ 7;
            goto lab_0x1802812d7;
        } else {
            goto lab_0x180281263;
        }
    }
  lab_0x180281263:;
    int64_t v28 = *v3; // 0x180281263
    uint64_t v29 = v28 + 1; // 0x180281267
    *v3 = v29;
    uint64_t v30 = *v4; // 0x18028126e
    int64_t v31; // 0x180281148
    if (v29 == v30 || v30 != 0 == v29 > v30) {
        int64_t v32 = v1 & -256; // 0x18028127a
        v1 = v32;
        v31 = v32;
        goto lab_0x180281295;
    } else {
        // 0x18028128c
        v1 = v1 & -256 | (int64_t)*(char *)v29;
        *v3 = v28 + 2;
        v31 = v1;
        goto lab_0x180281295;
    }
  lab_0x180281295:
    // 0x180281295
    *(char *)a1 = (char)v31;
    v24 = v31;
    v25 = v26 + 1;
    if (v26 != 4) {
        goto lab_0x18028124f;
    } else {
        int64_t v33 = *v3; // 0x1802812a1
        int64_t v34 = v33 - 1; // 0x1802812a5
        *v3 = v34;
        uint64_t v35 = *v4; // 0x1802812ac
        result = 3;
        if (v35 != 0 == v34 > v35) {
            goto lab_0x1802812d7;
        } else {
            // 0x1802812b8
            result = 3;
            if ((char)v1 < 1) {
                goto lab_0x1802812d7;
            } else {
                // 0x1802812bf
                v1 = v34;
                result = 3;
                if (v34 == a2) {
                    goto lab_0x1802812d7;
                } else {
                    // 0x1802812cb
                    *v3 = v33 - 2;
                    result = 3;
                    goto lab_0x1802812d7;
                }
            }
        }
    }
}

// Address range: 0x1802812f8 - 0x18028155a
int64_t function_1802812f8(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = v1;
    int64_t v3 = a2; // bp-40, 0x18028130c
    int64_t * v4 = (int64_t *)(a2 + 16);
    int64_t * v5 = (int64_t *)(a2 + 8);
    char v6 = *(char *)&v2; // 0x180281320
    int64_t v7 = 0; // 0x180281320
    int64_t v8 = a3; // 0x180281320
    int64_t v9; // 0x1802812f8
    int64_t v10; // 0x1802812f8
    int64_t v11; // 0x1802812f8
    while (true) {
      lab_0x180281327:
        // 0x180281327
        v9 = v8;
        v11 = v7;
        char v12 = v6; // 0x180281327
        if (v12 != *(char *)(v11 + 0x1802f3a40)) {
            // 0x180281333
            if (*(char *)(v11 + 0x1802f3a44) != v12) {
                // break -> 0x1802813df
                return 0;
            }
        }
        uint64_t v13 = *v4 + 1; // 0x180281345
        *v4 = v13;
        if (*v5 == 0) {
            goto lab_0x18028135d;
        } else {
            // 0x180281353
            v10 = v9;
            if (v13 > *v5) {
                goto lab_0x180281359;
            } else {
                goto lab_0x18028135d;
            }
        }
    }
    // 0x1802813df
    function_1802820ac(&v3, v11, v9);
    int64_t result = 7; // 0x1802813ee
  lab_0x18028154f:
    // 0x18028154f
    return result;
  lab_0x18028135d:;
    int64_t * v14 = (int64_t *)(v11 + 16); // 0x180281360
    int64_t v15 = *v14; // 0x180281360
    v10 = v11;
    int64_t v16; // 0x1802812f8
    int64_t v17; // 0x1802812f8
    if (v15 == *(int64_t *)(v11 + 8)) {
        goto lab_0x180281359;
    } else {
        // 0x18028136a
        v2 = v2 & -256 | (int64_t)*(char *)v15;
        *v14 = v15 + 1;
        v16 = v2;
        v17 = v11;
        goto lab_0x180281373;
    }
  lab_0x180281359:;
    int64_t v18 = v2 & -256; // 0x180281359
    v2 = v18;
    v16 = v18;
    v17 = v10;
    goto lab_0x180281373;
  lab_0x180281373:
    // 0x180281373
    v8 = v17;
    v7 = v11 + 1;
    v6 = v16;
    *(char *)a1 = v6;
    int64_t v19; // 0x1802812f8
    int64_t v20; // 0x1802812f8
    if (v11 == 2) {
        int64_t v21 = *v4 - 1; // 0x180281382
        *v4 = v21;
        if (*v5 == 0) {
            goto lab_0x180281396;
        } else {
            uint64_t v22 = *v5;
            v19 = v21;
            v20 = v22;
            if (v21 > v22) {
                goto lab_0x1802813b0_2;
            } else {
                goto lab_0x180281396;
            }
        }
    }
    goto lab_0x180281327;
  lab_0x180281396:;
    int64_t v23 = v2 + 1; // 0x180281396
    v2 = v23 & 255 | v2 & -256;
    if ((char)v23 < 2) {
        goto lab_0x1802813b0;
    } else {
        // 0x18028139d
        v2 = v7;
        int64_t * v24 = (int64_t *)(v11 + 17);
        int64_t v25 = *v24; // 0x1802813a0
        if (v25 == v7) {
            goto lab_0x1802813b0;
        } else {
            // 0x1802813a9
            *v24 = v25 - 1;
            goto lab_0x1802813b0;
        }
    }
  lab_0x1802813b0:
    // 0x1802813b0
    v19 = *v4;
    v20 = *v5;
    goto lab_0x1802813b0_2;
  lab_0x1802813b0_2:;
    uint64_t v26 = v19 + 1; // 0x1802813b9
    *v4 = v26;
    int64_t v27; // 0x1802812f8
    if (v20 == 0) {
        goto lab_0x1802813cd;
    } else {
        // 0x1802813c7
        if (v26 > *v5) {
            // 0x1802813da
            *(char *)a1 = 0;
            v27 = v7;
            goto lab_0x180281403;
        } else {
            goto lab_0x1802813cd;
        }
    }
  lab_0x1802813cd:;
    int64_t * v28 = (int64_t *)(v11 + 17); // 0x1802813d0
    int64_t v29 = *v28; // 0x1802813d0
    int64_t * v30 = (int64_t *)(v11 + 9); // 0x1802813d4
    if (v29 != *v30) {
        unsigned char v31 = *(char *)v29; // 0x1802813f3
        v2 = v2 & -256 | (int64_t)v31;
        *v28 = v29 + 1;
        *(char *)a1 = v31;
        v27 = v7;
        if (v31 == 40) {
            uint64_t v32 = *v4 + 1; // 0x180281420
            *v4 = v32;
            if (*v5 == 0) {
                goto lab_0x180281438;
            } else {
                // 0x18028142e
                if (v32 > *v5) {
                    goto lab_0x180281434;
                } else {
                    goto lab_0x180281438;
                }
            }
        } else {
            goto lab_0x180281403;
        }
    } else {
        // 0x1802813da
        *(char *)a1 = 0;
        v27 = v7;
        goto lab_0x180281403;
    }
  lab_0x180281403:;
    int64_t v33 = function_1802820ac(&v3, v27, v8); // 0x180281408
    result = (char)v33 == 0 ? 7 : 4;
    goto lab_0x18028154f;
  lab_0x180281438:;
    int64_t v34 = *v28; // 0x18028143b
    int64_t v35; // 0x1802812f8
    if (v34 == *v30) {
        goto lab_0x180281434;
    } else {
        // 0x180281445
        v2 = v2 & -256 | (int64_t)*(char *)v34;
        *v28 = v34 + 1;
        v35 = v2;
        goto lab_0x18028144e;
    }
  lab_0x180281434:;
    int64_t v36 = v2 & -256; // 0x180281434
    v2 = v36;
    v35 = v36;
    goto lab_0x18028144e;
  lab_0x18028144e:
    // 0x18028144e
    *(char *)a1 = (char)v35;
    v2 = v1;
    char v37; // 0x1802812f8
    if ((char)function_1802815d8(v1, a2, v8) == 0) {
        int64_t v38 = function_18028155c(v1, a2, v8); // 0x1802814a3
        unsigned char v39 = *(char *)&v2; // 0x1802814a8
        v2 = v1 & -256 | (int64_t)v39;
        if ((char)v38 == 0) {
            // 0x180281545
            v37 = v39;
            result = 4;
            if (v39 != 41) {
                goto lab_0x1802814eb;
            } else {
                goto lab_0x18028154f;
            }
        } else {
            uint64_t v40 = *v4 - 1; // 0x1802814b6
            *v4 = v40;
            if (*v5 == 0) {
                goto lab_0x1802814ca;
            } else {
                // 0x1802814c4
                result = 6;
                if (v40 > *v5) {
                    goto lab_0x18028154f;
                } else {
                    goto lab_0x1802814ca;
                }
            }
        }
    } else {
        // 0x18028145f
        v2 = v2 & -256 | (int64_t)*(char *)&v2;
        uint64_t v41 = *v4 - 1; // 0x180281465
        *v4 = v41;
        if (*v5 == 0) {
            goto lab_0x180281479;
        } else {
            // 0x180281473
            result = 5;
            if (v41 > *v5) {
                goto lab_0x18028154f;
            } else {
                goto lab_0x180281479;
            }
        }
    }
  lab_0x180281479:
    // 0x180281479
    result = 5;
    if ((char)v2 < 1) {
        goto lab_0x18028154f;
    } else {
        // 0x180281480
        v2 = a2;
        int64_t v42 = *v4; // 0x180281483
        result = 5;
        if (v42 == a2) {
            goto lab_0x18028154f;
        } else {
            // 0x18028148c
            *v4 = v42 - 1;
            result = 5;
            goto lab_0x18028154f;
        }
    }
  lab_0x1802814eb:;
    char v43 = v37;
    v27 = a2;
    int64_t v44; // 0x1802812f8
    if (v43 == 0) {
        goto lab_0x180281403;
    } else {
        // 0x1802814f3
        v27 = a2;
        if (v43 != 95 == v43 > 57 == (v43 & -33) > 90) {
            goto lab_0x180281403;
        } else {
            int64_t v45 = *v4; // 0x180281511
            uint64_t v46 = v45 + 1; // 0x180281515
            *v4 = v46;
            uint64_t v47 = *v5;
            if (v46 == v47 | *v5 != 0 == v46 > v47) {
                int64_t v48 = v2 & -256; // 0x180281529
                v2 = v48;
                v44 = v48;
                goto lab_0x180281543;
            } else {
                // 0x18028153a
                v2 = v2 & -256 | (int64_t)*(char *)v46;
                *v4 = v45 + 2;
                v44 = v2;
                goto lab_0x180281543;
            }
        }
    }
  lab_0x1802814ca:
    // 0x1802814ca
    result = 6;
    if ((char)v2 < 1) {
        goto lab_0x18028154f;
    } else {
        // 0x1802814d1
        v2 = a2;
        int64_t v49 = *v4; // 0x1802814d4
        result = 6;
        if (v49 == a2) {
            goto lab_0x18028154f;
        } else {
            // 0x1802814dd
            *v4 = v49 - 1;
            result = 6;
            goto lab_0x18028154f;
        }
    }
  lab_0x180281543:;
    char v50 = v44;
    *(char *)a1 = v50;
    v37 = v50;
    result = 4;
    if (v50 != 41) {
        goto lab_0x1802814eb;
    } else {
        goto lab_0x18028154f;
    }
}

// Address range: 0x18028155c - 0x1802815d5
int64_t function_18028155c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1;
    int64_t * v2 = (int64_t *)(a2 + 16);
    int64_t v3 = 0;
    char v4 = a1; // 0x180281574
    if (v4 != *(char *)(v3 + 0x1802f3a58)) {
        // 0x180281581
        if (*(char *)(v3 + 0x1802f3a5c) != v4) {
            // break -> 0x1802815cc
            return 0;
        }
    }
    int64_t v5 = *v2; // 0x18028158b
    int64_t v6 = v5 + 1; // 0x18028158f
    *v2 = v6;
    uint64_t v7 = *(int64_t *)(a2 + 8); // 0x180281596
    int64_t v8; // 0x18028155c
    int64_t v9; // 0x18028155c
    int64_t v10; // 0x1802815a2
    int64_t v11; // 0x1802815b6
    if (v6 == v7 || v7 != 0 == v6 > v7) {
        // 0x1802815a2
        v10 = v1 & -256;
        v1 = v10;
        v8 = v10;
        v9 = v6;
    } else {
        // 0x1802815b4
        v1 = v1 & -256 | (int64_t)*(char *)v6;
        v11 = v5 + 2;
        *v2 = v11;
        v8 = v1;
        v9 = v11;
    }
    // 0x1802815bd
    *(char *)a1 = (char)v8;
    while (v3 != 3) {
        // 0x1802815bd
        v3++;
        v4 = *(char *)&v1;
        if (v4 != *(char *)(v3 + 0x1802f3a58)) {
            // 0x180281581
            if (*(char *)(v3 + 0x1802f3a5c) != v4) {
                // break -> 0x1802815cc
                return 0;
            }
        }
        // 0x18028158b
        v5 = *v2;
        v6 = v5 + 1;
        *v2 = v6;
        v7 = *(int64_t *)(a2 + 8);
        if (v6 == v7 || v7 != 0 == v6 > v7) {
            // 0x1802815a2
            v10 = v1 & -256;
            v1 = v10;
            v8 = v10;
            v9 = v6;
        } else {
            // 0x1802815b4
            v1 = v1 & -256 | (int64_t)*(char *)v6;
            v11 = v5 + 2;
            *v2 = v11;
            v8 = v1;
            v9 = v11;
        }
        // 0x1802815bd
        *(char *)a1 = (char)v8;
    }
    // 0x1802815cc
    return v9 & -256 | 1;
}

// Address range: 0x1802815d8 - 0x180281651
int64_t function_1802815d8(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1;
    int64_t * v2 = (int64_t *)(a2 + 16);
    int64_t v3 = 0;
    char v4 = a1; // 0x1802815f0
    if (v4 != *(char *)(v3 + 0x1802f3a48)) {
        // 0x1802815fd
        if (*(char *)(v3 + 0x1802f3a50) != v4) {
            // break -> 0x180281648
            return 0;
        }
    }
    int64_t v5 = *v2; // 0x180281607
    int64_t v6 = v5 + 1; // 0x18028160b
    *v2 = v6;
    uint64_t v7 = *(int64_t *)(a2 + 8); // 0x180281612
    int64_t v8; // 0x1802815d8
    int64_t v9; // 0x1802815d8
    int64_t v10; // 0x18028161e
    int64_t v11; // 0x180281632
    if (v6 == v7 || v7 != 0 == v6 > v7) {
        // 0x18028161e
        v10 = v1 & -256;
        v1 = v10;
        v8 = v10;
        v9 = v6;
    } else {
        // 0x180281630
        v1 = v1 & -256 | (int64_t)*(char *)v6;
        v11 = v5 + 2;
        *v2 = v11;
        v8 = v1;
        v9 = v11;
    }
    // 0x180281639
    *(char *)a1 = (char)v8;
    while (v3 != 4) {
        // 0x180281639
        v3++;
        v4 = *(char *)&v1;
        if (v4 != *(char *)(v3 + 0x1802f3a48)) {
            // 0x1802815fd
            if (*(char *)(v3 + 0x1802f3a50) != v4) {
                // break -> 0x180281648
                return 0;
            }
        }
        // 0x180281607
        v5 = *v2;
        v6 = v5 + 1;
        *v2 = v6;
        v7 = *(int64_t *)(a2 + 8);
        if (v6 == v7 || v7 != 0 == v6 > v7) {
            // 0x18028161e
            v10 = v1 & -256;
            v1 = v10;
            v8 = v10;
            v9 = v6;
        } else {
            // 0x180281630
            v1 = v1 & -256 | (int64_t)*(char *)v6;
            v11 = v5 + 2;
            *v2 = v11;
            v8 = v1;
            v9 = v11;
        }
        // 0x180281639
        *(char *)a1 = (char)v8;
    }
    // 0x180281648
    return v9 & -256 | 1;
}

// Address range: 0x180281654 - 0x180281a88
int64_t function_180281654(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t * v3 = (int64_t *)(v1 + 24);
    int32_t v4; // 0x180281654
    int64_t v5; // 0x180281654
    int64_t v6; // 0x180281654
    int64_t v7; // 0x180281654
    int64_t v8; // 0x180281654
    int64_t * v9; // 0x180281701
    int64_t v10; // 0x18028167c
    int32_t v11; // 0x1802816a2
    int64_t * v12; // 0x1802816f4
    int64_t v13; // 0x1802816f4
    if (a2 == NULL) {
        goto lab_0x180281690;
    } else {
        // 0x18028168b
        if (*v3 != 0) {
            // 0x1802816a2
            v11 = a3;
            if (v11 == 0 || v11 < 37) {
                // 0x1802816f1
                v12 = (int64_t *)(v1 + 16);
                v13 = *v12;
                uint64_t v14 = v13 + 1; // 0x1802816f8
                *v12 = v14;
                v9 = (int64_t *)(v1 + 8);
                uint64_t v15 = *v9; // 0x180281701
                int64_t v16 = 0; // 0x180281705
                if (v14 != v15 && v15 != 0 != v14 > v15) {
                    // 0x18028171c
                    *v12 = v13 + 2;
                    v16 = (int64_t)*(char *)v14;
                }
                // 0x180281726
                if (*(char *)(v2 + 40) == 0) {
                    // 0x18028172c
                    function_1802766e0(v2);
                }
                int64_t v17 = v2 + 24; // 0x180281766
                int64_t v18 = function_18027d01c(v16, 8, v17); // 0x180281773
                v5 = v16;
                if ((int32_t)v18 != 0) {
                    uint64_t v19 = *v12 + 1; // 0x180281737
                    *v12 = v19;
                    uint64_t v20 = *v9; // 0x18028173e
                    int64_t v21 = 0; // 0x180281742
                    int64_t v22; // 0x180281752
                    if (v20 != 0 != v19 > v20) {
                        // 0x18028174f
                        v22 = *(int64_t *)24;
                        v21 = 0;
                        if (v22 != *(int64_t *)16) {
                            // 0x18028175c
                            *(int64_t *)24 = v22 + 1;
                            v21 = (int64_t)*(char *)v22;
                        }
                    }
                    int64_t v23 = function_18027d01c(v21, 8, v17); // 0x180281773
                    v5 = v21;
                    while ((int32_t)v23 != 0) {
                        // 0x180281733
                        v19 = *v12 + 1;
                        *v12 = v19;
                        v20 = *v9;
                        v21 = 0;
                        if (v20 != 0 != v19 > v20) {
                            // 0x18028174f
                            v22 = *(int64_t *)24;
                            v21 = 0;
                            if (v22 != *(int64_t *)16) {
                                // 0x18028175c
                                *(int64_t *)24 = v22 + 1;
                                v21 = (int64_t)*(char *)v22;
                            }
                        }
                        // 0x180281766
                        v23 = function_18027d01c(v21, 8, v17);
                        v5 = v21;
                    }
                }
                // 0x18028177f
                v6 = v5;
                if ((v5 + 213 & 253) == 0) {
                    uint64_t v24 = *v12 + 1; // 0x180281798
                    *v12 = v24;
                    uint64_t v25 = *v9; // 0x18028179f
                    v6 = 0;
                    if (v25 != 0 != v24 > v25) {
                        int64_t v26 = *(int64_t *)24; // 0x1802817b3
                        v6 = 0;
                        if (v26 != *(int64_t *)16) {
                            // 0x1802817bd
                            *(int64_t *)24 = v26 + 1;
                            v6 = (int64_t)*(char *)v26;
                        }
                    }
                }
                // 0x1802817c7
                v10 = a3 & 0xffffffff;
                v8 = v10;
                v7 = v6;
                if ((a3 & 0xffffffef) != 0) {
                    goto lab_0x1802818de;
                } else {
                    char v27 = v6;
                    if (v27 < 58) {
                        // 0x1802817e0
                        v4 = 0x1000000 * (int32_t)v6 / 0x1000000 - 48;
                        goto lab_0x18028180d;
                    } else {
                        if (v27 > 122) {
                            if (v27 > 90) {
                                goto lab_0x1802818d2;
                            } else {
                                // 0x180281806
                                v4 = 0x1000000 * (int32_t)v6 / 0x1000000 - 55;
                                goto lab_0x18028180d;
                            }
                        } else {
                            // 0x1802817f1
                            v4 = 0x1000000 * (int32_t)v6 / 0x1000000 - 87;
                            goto lab_0x18028180d;
                        }
                    }
                }
            } else {
                // 0x1802816af
                *(char *)(v2 + 48) = 1;
                *(int32_t *)(v2 + 44) = 22;
                function_18027175c(0, 0, 0, 0, 0, a1);
                goto lab_0x1802816d3;
            }
        } else {
            goto lab_0x180281690;
        }
    }
  lab_0x180281690:
    // 0x180281690
    *(int32_t *)function_180279918(v2, v1, a3, a4) = 22;
    function_180271814(v2, v1, a3, a4);
    goto lab_0x1802816d3;
  lab_0x1802816d3:;
    int64_t v28 = *v3; // 0x1802816d3
    if (v28 == 0) {
        // 0x180281a6b
        return 0;
    }
    // 0x1802816df
    if (*(int64_t *)(v1 + 16) == 0) {
        // 0x1802816e9
        *(char *)v28 = 0;
    }
    // 0x180281a6b
    return 0;
  lab_0x1802818de:;
    int64_t v29 = a4 & 255; // 0x180281673
    uint64_t v30 = 0x100000000 * v8 / 0x100000000; // 0x1802818de
    uint64_t v31 = 0xffffffffffffffff / v30; // 0x1802818e7
    uint64_t v32 = 0;
    int64_t v33 = (char)v5 != 45 ? v29 : v29 | 2;
    int64_t v34 = 0xffffffffffffffff % v30;
    char v35 = v7;
    int32_t v36; // 0x180281654
    if (v35 < 58) {
        // 0x1802818f5
        v36 = 0x1000000 * (int32_t)v7 / 0x1000000 - 48;
    } else {
        if (v35 > 122) {
            if (v35 > 90) {
                // break -> 0x18028198d
                return 0;
            }
            // 0x180281917
            v36 = 0x1000000 * (int32_t)v7 / 0x1000000 - 55;
        } else {
            // 0x180281906
            v36 = 0x1000000 * (int32_t)v7 / 0x1000000 - 87;
        }
    }
    while (v36 < (int32_t)v8) {
        uint64_t v37 = v32 * v30; // 0x18028192c
        int64_t v38 = v37 + (int64_t)v36; // 0x180281933
        uint64_t v39 = *v12 + 1; // 0x180281956
        *v12 = v39;
        uint64_t v40 = *v9; // 0x18028195d
        int64_t v41 = 0; // 0x180281961
        if (v40 != 0 != v39 > v40) {
            int64_t * v42 = (int64_t *)(v38 + 16); // 0x180281974
            int64_t v43 = *v42; // 0x180281974
            v41 = 0;
            if (v43 != *(int64_t *)(v38 + 8)) {
                // 0x18028197e
                *v42 = v43 + 1;
                v41 = (int64_t)*(char *)v43;
            }
        }
        int64_t v44 = v33 & 0xfffffff7 | 4 * (int64_t)(v32 > v31 | v38 < v37) | 8; // 0x180281654
        v32 = v38;
        int64_t v45 = v41;
        v33 = v44;
        v34 = v38;
        v35 = v45;
        if (v35 < 58) {
            // 0x1802818f5
            v36 = 0x1000000 * (int32_t)v45 / 0x1000000 - 48;
        } else {
            if (v35 > 122) {
                if (v35 > 90) {
                    // break -> 0x18028198d
                    return 0;
                }
                // 0x180281917
                v36 = 0x1000000 * (int32_t)v45 / 0x1000000 - 55;
            } else {
                // 0x180281906
                v36 = 0x1000000 * (int32_t)v45 / 0x1000000 - 87;
            }
        }
    }
    uint64_t v46 = *v12 - 1; // 0x180281991
    *v12 = v46;
    uint64_t v47 = *v9; // 0x180281998
    if (v35 > 0 == (v46 <= v47 || v47 == 0)) {
        int64_t * v48 = (int64_t *)(v34 + 16); // 0x1802819af
        int64_t v49 = *v48; // 0x1802819af
        if (v49 != v34) {
            // 0x1802819b8
            *v48 = v49 - 1;
        }
    }
    if ((v33 & 8) == 0) {
        // 0x1802819c5
        if (v13 != *v12) {
            // 0x1802819cb
            *(char *)*v3 = 0;
        }
        int64_t v50 = *v3; // 0x1802819d2
        if (v50 == 0) {
            // 0x180281a6b
            return 0;
        }
        // 0x1802819db
        if (*v12 == 0) {
            // 0x1802819e1
            *(char *)v50 = 0;
        }
        // 0x180281a6b
        return 0;
    }
    // 0x1802819eb
    int64_t result2; // 0x180281654
    if ((char)function_18027d12c(v33 & 0xffffffff, v32) == 0) {
        // 0x180281a4e
        result2 = (v33 & 2) == 0 ? v32 : -v32;
    } else {
        // 0x1802819fb
        *(char *)(v2 + 48) = 1;
        *(int32_t *)(v2 + 44) = 34;
        result2 = -1;
        if ((v33 & 1) != 0) {
            int64_t v51 = *v3; // 0x180281a12
            int64_t result; // 0x180281654
            if ((v33 & 2) == 0) {
                // 0x180281a35
                if (v51 == 0) {
                    // 0x180281a6b
                    return 0x7fffffffffffffff;
                }
                // 0x180281a3a
                result = 0x7fffffffffffffff;
                if (*v12 == 0) {
                    // 0x180281a40
                    *(char *)v51 = 0;
                    result = 0x7fffffffffffffff;
                }
            } else {
                // 0x180281a1c
                if (v51 == 0) {
                    // 0x180281a6b
                    return -0x8000000000000000;
                }
                // 0x180281a21
                result = -0x8000000000000000;
                if (*v12 == 0) {
                    // 0x180281a27
                    *(char *)v51 = 0;
                    result = -0x8000000000000000;
                }
            }
            // 0x180281a6b
            return result;
        }
    }
    int64_t v52 = *v3; // 0x180281a57
    if (v52 == 0) {
        // 0x180281a6b
        return result2;
    }
    // 0x180281a60
    if (*v12 == 0) {
        // 0x180281a66
        *(char *)v52 = 0;
    }
    // 0x180281a6b
    return result2;
  lab_0x18028180d:;
    // 0x18028180d
    char v53; // 0x180281654
    int64_t v54; // 0x180281654
    int64_t v55; // 0x180281654
    int64_t v56; // 0x18028184a
    uint64_t v57; // 0x18028184e
    if (v4 != 0) {
        goto lab_0x1802818d2;
    } else {
        int64_t v58 = *v12; // 0x180281815
        int64_t v59 = *v9; // 0x180281819
        int64_t v60 = v58 + 1; // 0x18028181d
        *v12 = v60;
        v54 = v59;
        v55 = v60;
        v53 = 0;
        if (v59 != 0 == v60 > v59) {
            goto lab_0x18028185e;
        } else {
            int64_t * v61 = (int64_t *)(v58 + 17); // 0x180281831
            int64_t v62 = *v61; // 0x180281831
            v54 = v59;
            v55 = v60;
            v53 = 0;
            if (v62 != *(int64_t *)(v58 + 9)) {
                char v63 = *(char *)v62; // 0x180281840
                *v61 = v62 + 1;
                v56 = *v12;
                v57 = *v9;
                v54 = v57;
                v55 = v56;
                v53 = v63;
                switch (v63) {
                    case 120: {
                        goto lab_0x18028189b;
                    }
                    case 88: {
                        goto lab_0x18028189b;
                    }
                    default: {
                        goto lab_0x18028185e;
                    }
                }
            } else {
                goto lab_0x18028185e;
            }
        }
    }
  lab_0x1802818d2:
    // 0x1802818d2
    v8 = v11 != 0 ? v10 : 10;
    v7 = v6;
    goto lab_0x1802818de;
  lab_0x18028185e:;
    uint64_t v64 = v54;
    int64_t v65 = v11 != 0 ? v10 : 8; // 0x180281865
    int64_t v66 = v55 - 1; // 0x180281868
    *v12 = v66;
    v8 = v65;
    v7 = v6;
    int64_t v67; // 0x180281654
    int64_t v68; // 0x180281654
    int64_t v69; // 0x180281654
    int64_t v70; // 0x180281654
    if ((v64 == 0 || v66 <= v64) == v53 > 0) {
        int64_t v71 = *(int64_t *)(v55 + 15); // 0x180281889
        v8 = v65;
        v7 = v6;
        if (v71 == v66) {
            goto lab_0x1802818de;
        } else {
            // 0x180281892
            v67 = v66;
            v69 = v65;
            v68 = v6;
            v70 = v71 - 1;
            goto lab_0x180281895;
        }
    } else {
        goto lab_0x1802818de;
    }
  lab_0x18028189b:;
    int64_t v72 = v11 != 0 ? v10 : 16; // 0x1802818a2
    int64_t v73 = v56 + 1; // 0x1802818a5
    *v12 = v73;
    v8 = v72;
    v7 = 0;
    if (v57 != 0 == v73 > v57) {
        goto lab_0x1802818de;
    } else {
        int64_t v74 = *(int64_t *)(v56 + 17); // 0x1802818c0
        v8 = v72;
        v7 = 0;
        if (v74 == *(int64_t *)(v56 + 9)) {
            goto lab_0x1802818de;
        } else {
            // 0x1802818ca
            v67 = v73;
            v69 = v72;
            v68 = (int64_t)*(char *)v74;
            v70 = v74 + 1;
            goto lab_0x180281895;
        }
    }
  lab_0x180281895:
    // 0x180281895
    *(int64_t *)(v67 + 16) = v70;
    v8 = v69;
    v7 = v68;
    goto lab_0x1802818de;
}

// Address range: 0x180281a88 - 0x180281b86
int64_t function_180281a88(int64_t a1, int64_t * a2) {
    int64_t v1 = 0; // bp-72, 0x180281aac
    int128_t v2; // 0x180281a88
    if (a1 == 0) {
        // 0x180281aca
        if (g1298 != 0) {
            goto lab_0x180281ae3;
        } else {
            // 0x180281ada
            __asm_movdqu(v2, __asm_movups_16(g755));
            goto lab_0x180281ae3;
        }
    } else {
        // 0x180281ada
        int64_t v3; // 0x180281a88
        __asm_movdqu(v2, __asm_movups_16(*(int128_t *)&v3));
        goto lab_0x180281ae3;
    }
  lab_0x180281ae3:;
    int64_t v4 = (int64_t)a2;
    int64_t v5 = v4; // bp-104, 0x180281aea
    int64_t * v6 = (int64_t *)(v4 + 24); // 0x180281b02
    *v6 = 0;
    *a2 = 0;
    int64_t v7; // 0x180281a88
    int64_t v8; // 0x180281a88
    int64_t result = function_180281654(&v1, &v5, v8, v7); // 0x180281b11
    int64_t v9 = *v6; // 0x180281b54
    if (v9 == 0) {
        // 0x180281b66
        return result;
    }
    // 0x180281b5d
    if (*(int64_t *)(v4 + 16) == 0) {
        // 0x180281b63
        *(char *)v9 = 0;
    }
    // 0x180281b66
    return result;
}

// Address range: 0x180281b88 - 0x180281c29
int64_t function_180281b88(int64_t a1) {
    int32_t v1 = 0; // bp+16, 0x180281b94
    int64_t v2 = a1 + 8; // bp-40, 0x180281b9d
    int64_t v3 = function_180280834(*(int64_t *)(a1 + 120), &v2, &v1); // 0x180281bcb
    if ((int32_t)v3 == 1) {
        // 0x180281c1e
        return v3 & -256;
    }
    // 0x180281bdb
    if (*(char *)(a1 + 58) != 0) {
        // 0x180281c1e
        return v3 & -256 | 1;
    }
    int64_t * v4 = (int64_t *)(a1 + 128); // 0x180281be4
    int64_t v5 = *v4; // 0x180281be4
    *v4 = v5 + 8;
    int64_t v6 = *(int64_t *)v5; // 0x180281bf6
    int64_t v7; // 0x180281b88
    int64_t v8; // 0x180281b88
    if (v6 != 0) {
        // 0x180281c10
        *(int32_t *)v6 = v1;
        v8 = 1;
        v7 = v1;
    } else {
        int64_t v9 = &v1; // 0x180281ba1
        int64_t v10; // 0x180281b88
        *(int32_t *)function_180279918(v5, v6, v9, v10) = 22;
        v8 = 0;
        v7 = function_180271814(v5, v6, v9, v10);
    }
    // 0x180281c1e
    return v7 & -256 | v8;
}

// Address range: 0x180281c2c - 0x180281cd3
int64_t function_180281c2c(int64_t a1) {
    int64_t v1 = a1 + 8; // bp-40, 0x180281c41
    int64_t v2; // bp+16, 0x180281c2c
    int64_t v3 = &v2; // 0x180281c45
    int128_t v4; // 0x180281c2c
    v2 = __asm_movsd_17(__asm_xorps(v4, v4));
    int64_t v5 = function_1802808dc(*(int64_t *)(a1 + 120), (int64_t)&v1, v3); // 0x180281c73
    if ((int32_t)v5 == 1) {
        // 0x180281cc8
        return v5 & -256;
    }
    // 0x180281c83
    if (*(char *)(a1 + 58) != 0) {
        // 0x180281cc8
        return v5 & -256 | 1;
    }
    int64_t * v6 = (int64_t *)(a1 + 128); // 0x180281c8c
    int64_t v7 = *v6; // 0x180281c8c
    *v6 = v7 + 8;
    int64_t v8 = *(int64_t *)v7; // 0x180281c9e
    int64_t v9; // 0x180281c2c
    int64_t v10; // 0x180281c2c
    if (v8 != 0) {
        // 0x180281cb8
        *(int64_t *)v8 = v2;
        v10 = 1;
        v9 = v2;
    } else {
        // 0x180281ca6
        int64_t v11; // 0x180281c2c
        *(int32_t *)function_180279918(v7, v8, v3, v11) = 22;
        v10 = 0;
        v9 = function_180271814(v7, v8, v3, v11);
    }
    // 0x180281cc8
    return v9 & -256 | v10;
}

// Address range: 0x180281cd4 - 0x180281e75
int64_t function_180281cd4(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    char * v2 = (char *)(a1 + 58); // 0x180281cf3
    int64_t v3 = 0; // 0x180281cf6
    int64_t v4 = -1; // 0x180281cf6
    int64_t v5; // 0x180281cd4
    int64_t v6; // 0x180281cd4
    int64_t v7; // 0x180281cd4
    int64_t v8; // 0x180281cd4
    if (*v2 != 0) {
        goto lab_0x180281dad;
    } else {
        int64_t * v9 = (int64_t *)(a1 + 128);
        int64_t v10 = *v9; // 0x180281cfc
        int64_t v11 = v10 + 8; // 0x180281d03
        v1 = v11;
        *v9 = v11;
        int64_t v12 = *(int64_t *)v10; // 0x180281d0e
        if (v12 == 0) {
            // 0x180281d16
            int64_t v13; // 0x180281cd4
            *(int32_t *)function_180279918(v1, a2, a1, v13) = 22;
            // 0x180281d28
            return function_180271814(v1, a2, a1, v13) & -256;
        }
        // 0x180281d41
        v5 = v10;
        v3 = v12;
        v4 = -1;
        if ((*(char *)&v1 & 1) == 0) {
            goto lab_0x180281dad;
        } else {
            int64_t v14 = v1 + 8; // 0x180281d47
            *v9 = v14;
            int64_t v15 = v1; // 0x180281d52
            uint32_t v16 = *(int32_t *)v15; // 0x180281d52
            v5 = v14;
            v3 = v12;
            v4 = v16;
            if (v16 != 0) {
                goto lab_0x180281dad;
            } else {
                // 0x180281d5a
                v8 = a2;
                if ((v15 & 4) == 0) {
                    goto lab_0x180281d74;
                } else {
                    int64_t * v17 = (int64_t *)(a1 + 24); // 0x180281d60
                    int64_t v18 = *v17; // 0x180281d60
                    v7 = a2;
                    v6 = v12;
                    if (v18 != *(int64_t *)(a1 + 16)) {
                        // 0x180281d6a
                        *v17 = v18 + 1;
                        v7 = a2;
                        v6 = v12;
                    }
                    goto lab_0x180281d71;
                }
            }
        }
    }
  lab_0x180281dad:;
    int64_t v19 = *(int64_t *)(a1 + 64); // 0x180281d85
    int64_t * v20 = (int64_t *)(a1 + 24);
    int64_t * v21 = (int64_t *)(a1 + 16);
    int64_t v22 = *v20; // 0x180281dad
    bool v23 = v19 == 0; // 0x180281db5
    int64_t v24 = 0; // 0x180281db5
    int64_t v25 = v3; // 0x180281db5
    int64_t v26 = v5; // 0x180281db5
    int64_t v27 = v22; // 0x180281db5
    int64_t v28 = 0xffffffff; // 0x180281db5
    int64_t v29; // 0x180281cd4
    int64_t v30; // 0x180281cd4
    int64_t v31; // 0x180281cd4
    int64_t v32; // 0x180281cd4
    if (v22 == *v21) {
      lab_0x180281e29_5:;
        int64_t v33 = v26; // 0x180281e2d
        if (v27 != *(int64_t *)(a1 + 8)) {
            // 0x180281e2f
            v33 = v26;
            if (v28 == 0xffffffff != (v27 == *v21)) {
                int64_t v34 = v27 - 1; // 0x180281e3b
                *v20 = v34;
                v33 = v34;
            }
        }
        // 0x180281e43
        if (v24 == 0) {
            // 0x180281d28
            return v33 & -256;
        }
        // 0x180281e4c
        v29 = v25;
        v32 = v33;
        if ((int32_t)a2 == 0 && !v23) {
            // 0x180281e55
            if ((*(char *)&v1 & 4) != 0) {
                // 0x180281d28
                return v33 & -256 | 1;
            }
            // 0x180281d28
            return v33 & -256;
        }
    } else {
        int64_t v35 = v4;
        int64_t v36 = 0;
        int64_t v37 = v35 + (int64_t)!(((int32_t)a2 == 0 | v35 == -1));
        unsigned char v38 = *(char *)v22; // 0x180281db7
        v1 = a2 & 0xffffffff;
        int64_t v39 = v22 + 1; // 0x180281dbd
        *v20 = v39;
        int64_t v40 = v5; // 0x180281dc6
        int64_t v41 = a2; // 0x180281dc6
        bool v42; // 0x180281cd4
        int64_t v43; // 0x180281db7
        uint32_t v44; // 0x180281dc8
        int64_t v45; // 0x180281ded
        int64_t v46; // 0x180281ded
        int64_t v47; // 0x180281dd8
        int64_t v48; // 0x180281dd2
        uint32_t v49; // 0x180281cd4
        if ((int32_t)a2 != 0) {
            // 0x180281dc8
            v42 = v19 == 0;
            v43 = v38;
            v44 = (int32_t)v1 - 1;
            v1 = v44;
            if (v44 == 0) {
                // 0x180281ded
                v45 = v43 + 0xfffffff7;
                v46 = v45 & 0xffffffff;
                v23 = v42;
                v24 = v36;
                v25 = v3;
                v26 = v46;
                v27 = v39;
                v28 = v43;
                if ((int32_t)v45 < 5) {
                    goto lab_0x180281e29_5;
                }
                // 0x180281df6
                v40 = v46;
                v41 = a2;
                v23 = v42;
                v24 = v36;
                v25 = v3;
                v26 = v46;
                v27 = v39;
                v28 = 32;
                if (v38 == 32) {
                    goto lab_0x180281e29_5;
                }
            } else {
                // 0x180281dcd
                v23 = v42;
                v24 = v36;
                v25 = v3;
                v26 = v5;
                v27 = v39;
                v28 = v43;
                if (v44 != 7) {
                    goto lab_0x180281e29_5;
                }
                // 0x180281dfa
                v47 = v43 & 7;
                v1 = v47;
                v48 = v43 / 8;
                v49 = 1 << (int32_t)v47;
                v40 = v48;
                v41 = v49;
                v23 = v42;
                v24 = v36;
                v25 = v3;
                v26 = v48;
                v27 = v39;
                v28 = v43;
                if ((*(char *)(a1 + 84 + v48) & (char)v49) == 0) {
                    goto lab_0x180281e29_5;
                }
            }
        }
        int64_t v50 = v41;
        int64_t v51 = v40;
        int64_t v52 = v37; // 0x180281e01
        int64_t v53 = v3; // 0x180281e01
        if (*v2 == 0) {
            if (v37 == 0) {
                // 0x180281e16
                v7 = v50;
                v6 = v3;
                v30 = v39;
                v8 = v50;
                v31 = v39;
                if (v35 == -1) {
                    goto lab_0x180281d74;
                } else {
                    goto lab_0x180281d71;
                }
            }
            // 0x180281e08
            *(char *)v3 = v38;
            v52 = v37 - 1;
            v53 = v3 + 1;
        }
        int64_t v54 = v53;
        int64_t v55 = v36 + 1; // 0x180281e11
        v29 = v54;
        v32 = v51;
        while (v19 != 0 != (v55 == v19)) {
            int64_t v56 = *v20; // 0x180281dad
            bool v57 = v55 == v19; // 0x180281db5
            v23 = v55 == v19;
            v24 = v55;
            v25 = v54;
            v26 = v51;
            v27 = v56;
            v28 = 0xffffffff;
            if (v56 == *v21) {
                goto lab_0x180281e29_5;
            }
            v36 = v55;
            int64_t v58 = v54;
            v37 = v52;
            int64_t v59 = v50;
            int64_t v60 = v51;
            v38 = *(char *)v56;
            v1 = a2 & 0xffffffff;
            v39 = v56 + 1;
            *v20 = v39;
            v40 = v60;
            v41 = v59;
            if ((int32_t)a2 != 0) {
                // 0x180281dc8
                v42 = v57;
                v43 = v38;
                v44 = (int32_t)v1 - 1;
                v1 = v44;
                if (v44 == 0) {
                    // 0x180281ded
                    v45 = v43 + 0xfffffff7;
                    v46 = v45 & 0xffffffff;
                    v23 = v42;
                    v24 = v36;
                    v25 = v58;
                    v26 = v46;
                    v27 = v39;
                    v28 = v43;
                    if ((int32_t)v45 < 5) {
                        goto lab_0x180281e29_5;
                    }
                    // 0x180281df6
                    v40 = v46;
                    v41 = v59;
                    v23 = v42;
                    v24 = v36;
                    v25 = v58;
                    v26 = v46;
                    v27 = v39;
                    v28 = 32;
                    if (v38 == 32) {
                        goto lab_0x180281e29_5;
                    }
                } else {
                    // 0x180281dcd
                    v23 = v42;
                    v24 = v36;
                    v25 = v58;
                    v26 = v60;
                    v27 = v39;
                    v28 = v43;
                    if (v44 != 7) {
                        goto lab_0x180281e29_5;
                    }
                    // 0x180281dfa
                    v47 = v43 & 7;
                    v1 = v47;
                    v48 = v43 / 8;
                    v49 = 1 << (int32_t)v47;
                    v40 = v48;
                    v41 = v49;
                    v23 = v42;
                    v24 = v36;
                    v25 = v58;
                    v26 = v48;
                    v27 = v39;
                    v28 = v43;
                    if ((*(char *)(a1 + 84 + v48) & (char)v49) == 0) {
                        goto lab_0x180281e29_5;
                    }
                }
            }
            // 0x180281dfc
            v50 = v41;
            v51 = v40;
            v52 = v37;
            v53 = v58;
            if (*v2 == 0) {
                if (v37 == 0) {
                    // 0x180281e16
                    v7 = v50;
                    v6 = v3;
                    v30 = v39;
                    v8 = v50;
                    v31 = v39;
                    if (v35 == -1) {
                        goto lab_0x180281d74;
                    } else {
                        goto lab_0x180281d71;
                    }
                }
                // 0x180281e08
                *(char *)v58 = v38;
                v52 = v37 - 1;
                v53 = v58 + 1;
            }
            // 0x180281e11
            v54 = v53;
            v55 = v36 + 1;
            v29 = v54;
            v32 = v51;
        }
    }
    // 0x180281e5f
    if (!(((int32_t)a2 == 0 | *v2 != 0))) {
        // 0x180281e6a
        *(char *)v29 = 0;
    }
    // 0x180281d28
    return v32 & -256 | 1;
  lab_0x180281d74:;
    int64_t v61 = function_180279918(v1, v8, a1, v31); // 0x180281d74
    *(int32_t *)v61 = 12;
    // 0x180281d28
    return v61 & -256;
  lab_0x180281d71:
    // 0x180281d71
    *(char *)v6 = 0;
    v8 = v7;
    v31 = v30;
    goto lab_0x180281d74;
}

// Address range: 0x180281e78 - 0x180282055
int64_t function_180281e78(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    char * v2 = (char *)(a1 + 58); // 0x180281e9a
    int64_t v3 = 0; // 0x180281e9e
    int64_t v4 = -1; // 0x180281e9e
    int64_t v5; // 0x180281e78
    int64_t v6; // 0x180281e78
    int64_t v7; // 0x180281e78
    int64_t v8; // 0x180281e78
    if (*v2 != 0) {
        goto lab_0x180281f5f;
    } else {
        int64_t * v9 = (int64_t *)(a1 + 128);
        int64_t v10 = *v9; // 0x180281ea4
        int64_t v11 = v10 + 8; // 0x180281eab
        v1 = v11;
        *v9 = v11;
        int64_t v12 = *(int64_t *)v10; // 0x180281eb6
        if (v12 == 0) {
            // 0x180281ebe
            int64_t v13; // 0x180281e78
            int64_t v14; // 0x180281e78
            *(int32_t *)function_180279918(v1, a2, v14, v13) = 22;
            // 0x180281ed0
            return function_180271814(v1, a2, v14, v13) & -256;
        }
        // 0x180281ee7
        v5 = v10;
        v3 = v12;
        v4 = -1;
        if ((*(char *)&v1 & 1) == 0) {
            goto lab_0x180281f5f;
        } else {
            int64_t v15 = v1 + 8; // 0x180281eec
            *v9 = v15;
            int64_t v16 = v1; // 0x180281ef7
            uint32_t v17 = *(int32_t *)v16; // 0x180281ef7
            v5 = v15;
            v3 = v12;
            v4 = v17;
            if (v17 != 0) {
                goto lab_0x180281f5f;
            } else {
                // 0x180281efe
                v7 = a2;
                if ((v16 & 4) == 0) {
                    goto lab_0x180281f18;
                } else {
                    int64_t * v18 = (int64_t *)(a1 + 24); // 0x180281f03
                    int64_t v19 = *v18; // 0x180281f03
                    v6 = a2;
                    v8 = v12;
                    if (v19 != *(int64_t *)(a1 + 16)) {
                        // 0x180281f0d
                        *v18 = v19 + 1;
                        v6 = a2;
                        v8 = v12;
                    }
                    goto lab_0x180281f14;
                }
            }
        }
    }
  lab_0x180281f5f:;
    int64_t v20 = v4;
    int64_t v21 = *(int64_t *)(a1 + 64); // 0x180281f29
    int64_t * v22 = (int64_t *)(a1 + 24);
    int64_t * v23 = (int64_t *)(a1 + 16);
    int64_t v24 = a2; // 0x180281e78
    int64_t v25 = v5;
    int64_t v26 = 0;
    bool v27 = v21 == 0;
    int64_t v28 = *v22; // 0x180281f5f
    int64_t v29 = v25; // 0x180281f67
    int64_t v30 = v28; // 0x180281f67
    int64_t v31 = 0xffffffff; // 0x180281f67
    int64_t v32; // 0x180281e78
    int64_t v33; // 0x180281e78
    int64_t v34; // 0x180281e78
    int64_t v35; // 0x180281e78
    int64_t v36; // 0x180281e78
    int64_t v37; // 0x180281e78
    while (v28 != *v23) {
        int64_t v38 = v24;
        unsigned char v39 = *(char *)v28; // 0x180281f6d
        int64_t v40 = v39; // 0x180281f6d
        v1 = a2 & 0xffffffff;
        int64_t v41 = v28 + 1; // 0x180281f74
        *v22 = v41;
        int64_t v42 = v25; // 0x180281f7e
        int64_t v43 = v38; // 0x180281f7e
        if ((int32_t)a2 != 0) {
            uint32_t v44 = (int32_t)v1 - 1; // 0x180281f80
            v1 = v44;
            if (v44 == 0) {
                int64_t v45 = v40 + 0xfffffff7; // 0x180281fa4
                int64_t v46 = v45 & 0xffffffff; // 0x180281fa4
                v29 = v46;
                v30 = v41;
                v31 = v40;
                if ((int32_t)v45 < 5) {
                    // break -> 0x180282004
                    return 0;
                }
                // 0x180281fad
                v42 = v46;
                v43 = v38;
                v29 = v46;
                v30 = v41;
                v31 = 32;
                if (v39 == 32) {
                    // break -> 0x180282004
                    return 0;
                }
            } else {
                // 0x180281f85
                v29 = v25;
                v30 = v41;
                v31 = v40;
                if (v44 != 7) {
                    // break -> 0x180282004
                    return 0;
                }
                int64_t v47 = v40 & 7; // 0x180281f90
                v1 = v47;
                int64_t v48 = v40 / 8; // 0x180281f8a
                uint32_t v49 = 1 << (int32_t)v47;
                v42 = v48;
                v43 = v49;
                v29 = v48;
                v30 = v41;
                v31 = v40;
                if ((*(char *)(a1 + 84 + v48) & (char)v49) == 0) {
                    // break -> 0x180282004
                    return 0;
                }
            }
        }
        int64_t v50 = v43;
        int64_t v51 = v42; // 0x180281fb7
        int64_t v52 = v50; // 0x180281fb7
        if (*v2 == 0) {
            if (v20 == (int64_t)((int32_t)a2 != 0 && v20 != -1)) {
                // 0x180281ff1
                v6 = v50;
                v8 = v3;
                v32 = v41;
                v34 = v40;
                v7 = v50;
                v33 = v41;
                v35 = v40;
                if (v20 == -1) {
                    goto lab_0x180281f18;
                } else {
                    goto lab_0x180281f14;
                }
            }
            // 0x180281fbe
            v51 = function_180282da8(a1);
            v52 = v3;
            v37 = v51;
            if ((char)v51 == 0) {
                goto lab_0x18028201e;
            }
        }
        int64_t v53 = v26 + 1; // 0x180281fe9
        v24 = v52;
        v36 = v51;
        if (v21 != 0 == v53 == v21) {
            goto lab_0x18028203a;
        }
        v25 = v51;
        v26 = v53;
        v27 = v53 == v21;
        v28 = *v22;
        v29 = v25;
        v30 = v28;
        v31 = 0xffffffff;
    }
    // 0x180282004
    v37 = v29;
    if (v30 != *(int64_t *)(a1 + 8)) {
        // 0x18028200a
        v37 = v29;
        if (v31 == 0xffffffff != (v30 == *v23)) {
            int64_t v54 = v30 - 1; // 0x180282016
            *v22 = v54;
            v37 = v54;
        }
    }
  lab_0x18028201e:
    // 0x18028201e
    if (v26 == 0) {
        // 0x180281ed0
        return v37 & -256;
    }
    // 0x180282027
    v36 = v37;
    int64_t v55; // 0x180281e78
    if ((int32_t)a2 != 0 || v27) {
      lab_0x18028203a:
        // 0x18028203a
        v55 = v36;
        if (!(((int32_t)a2 == 0 | *v2 != 0))) {
            // 0x180282045
            *(int16_t *)v3 = 0;
            v55 = v36;
        }
    } else {
        // 0x180282031
        v55 = v37;
        if ((*(char *)&v1 & 4) == 0) {
            // 0x180281ed0
            return v37 & -256;
        }
    }
    // 0x180281ed0
    return v55 & -256 | 1;
  lab_0x180281f18:;
    int64_t v56 = function_180279918(v1, v7, v33, v35); // 0x180281f18
    *(int32_t *)v56 = 12;
    // 0x180281ed0
    return v56 & -256;
  lab_0x180281f14:
    // 0x180281f14
    *(int16_t *)v8 = 0;
    v7 = v6;
    v33 = v32;
    v35 = v34;
    goto lab_0x180281f18;
}

// Address range: 0x180282058 - 0x1802820ab
int64_t function_180282058(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x18028206d
    int64_t v2 = *v1; // 0x18028206d
    int64_t result = 0xffffffff; // 0x180282075
    while (v2 != *(int64_t *)(a1 + 8)) {
        int64_t v3 = (int64_t)*(char *)v2; // 0x180282077
        *v1 = v2 + 1;
        int64_t v4 = function_18027d01c(v3, 8, a2); // 0x18028208b
        result = v3;
        if ((int32_t)v4 == 0) {
            // break -> 0x180282099
            return 0;
        }
        v2 = *v1;
        result = 0xffffffff;
    }
    // 0x180282099
    return result;
}

// Address range: 0x1802820ac - 0x18028210e
int64_t function_1802820ac(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x1802820ac
    int64_t * v3 = (int64_t *)(v1 + 16); // 0x1802820b8
    int64_t v4 = *v3; // 0x1802820b8
    uint64_t v5 = v4 - 1; // 0x1802820bc
    *v3 = v5;
    uint64_t v6 = *v2; // 0x1802820c3
    int64_t v7 = v6; // 0x1802820c7
    if (!((v5 == v1 | *(char *)*v2 < 1 | v6 != 0 == v5 > v6))) {
        // 0x1802820e4
        *v3 = v4 - 2;
        v7 = *v2;
    }
    // 0x1802820eb
    *(char *)v7 = 0;
    int64_t v8 = *v3; // 0x1802820f4
    int64_t v9 = v8; // 0x1802820ff
    int64_t v10 = 1; // 0x1802820ff
    if (*(int64_t *)v8 != v8) {
        // 0x180282101
        v9 = *(int64_t *)(v1 + 24);
        *(char *)v9 = 0;
        v10 = 0;
    }
    // 0x18028210b
    return v9 & -256 | v10;
}

// Address range: 0x180282110 - 0x1802822d7
int64_t function_180282110(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 16; // 0x180282124
    if (*(int32_t *)v1 != 0) {
        // 0x180282156
        int64_t v2; // 0x180282110
        return v2 & -256;
    }
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180282129
    int64_t v4 = *v3; // 0x180282129
    int32_t * v5 = (int32_t *)(a1 + 20); // 0x18028212d
    *v5 = 0;
    int64_t v6 = a1 + 24; // 0x180282130
    int16_t * v7 = (int16_t *)v6; // 0x180282130
    *v7 = 0;
    char * v8 = (char *)(a1 + 26); // 0x180282134
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + 32); // 0x180282138
    *v9 = 0;
    int32_t * v10 = (int32_t *)(a1 + 40); // 0x18028213c
    *v10 = 0;
    char * v11 = (char *)(a1 + 44); // 0x18028213f
    *v11 = 0;
    int32_t * v12 = (int32_t *)(a1 + 48); // 0x180282143
    *v12 = 0;
    char v13 = *(char *)v4; // 0x180282146
    if (v13 == 0) {
        // 0x18028214d
        *v5 = 1;
        // 0x180282156
        return v4 & -256;
    }
    int64_t v14 = function_180279680(v13); // 0x180282166
    int64_t v15 = *v3; // 0x18028216b
    int64_t v16; // 0x180282110
    if ((int32_t)v14 != 0) {
        // 0x180282173
        *v5 = 2;
        int64_t v17 = function_180279680(*(char *)v15); // 0x18028217d
        v16 = v17;
        if ((int32_t)v17 != 0) {
            int64_t v18 = *v3 + 1; // 0x180282189
            *v3 = v18;
            int64_t v19 = function_180279680(*(char *)v18); // 0x180282194
            v16 = v19;
            while ((int32_t)v19 != 0) {
                // 0x180282189
                v18 = *v3 + 1;
                *v3 = v18;
                v19 = function_180279680(*(char *)v18);
                v16 = v19;
            }
        }
        // 0x180282156
        return v16 & -256 | 1;
    }
    char * v20 = (char *)v15; // 0x1802821a4
    if (*v20 != 37) {
        goto lab_0x180282262;
    } else {
        int64_t v21 = v15 + 1; // 0x1802821ac
        char * v22 = (char *)v21; // 0x1802821b0
        if (*v22 == 37) {
            goto lab_0x180282262;
        } else {
            // 0x1802821b8
            *v5 = 4;
            *v3 = v21;
            if (*v22 == 42) {
                // 0x1802821cd
                *v8 = 1;
                *v3 = v15 + 2;
            }
            int64_t v23 = function_180282a60(a1); // 0x1802821db
            if ((char)v23 == 0) {
                // 0x180282156
                return v23 & -256;
            }
            // 0x1802821e8
            function_180282b00(a1);
            int64_t v24 = *v3; // 0x1802821f0
            char v25 = *(char *)v24; // 0x1802821f4
            if (v25 != 119) {
                if ((v25 - 67 & -17) != 0) {
                    goto lab_0x18028220e;
                } else {
                    // 0x18028220a
                    *v11 = 1;
                    goto lab_0x18028220e;
                }
            } else {
                // 0x1802821fa
                *v3 = v24 + 1;
                // 0x18028220a
                *v11 = 1;
                goto lab_0x18028220e;
            }
        }
    }
  lab_0x180282262:
    // 0x180282262
    *v5 = 3;
    char * v26 = (char *)v6; // 0x180282270
    *v26 = *v20;
    *v3 = (*v20 == 37 ? 2 : 1) + v15;
    int64_t v27 = (int64_t)__pctype_func(); // 0x180282285
    v16 = v27;
    int64_t v28 = 1; // 0x180282292
    if (*(int16_t *)(2 * (int64_t)*v26 + v27) < 0) {
        int64_t v29 = *v3; // 0x180282298
        char v30 = *(char *)v29; // 0x18028229c
        if (v30 != 0) {
            int64_t v31 = v29 + 1; // 0x1802822c8
            *(char *)(a1 + 25) = v30;
            *v3 = v31;
            v16 = v31;
            v28 = 1;
        } else {
            // 0x1802822a2
            *(int64_t *)v1 = 42;
            *v7 = 0;
            *v8 = 0;
            *v9 = 0;
            *v10 = 0;
            *v11 = 0;
            *v12 = 0;
            v16 = v29;
            v28 = 0;
        }
    }
    // 0x180282156
    return v16 & -256 | v28;
  lab_0x18028220e:;
    int64_t v32 = function_180282894(a1); // 0x180282211
    if ((char)v32 == 0) {
        // 0x180282156
        return v32 & -256;
    }
    int32_t v33 = *v12; // 0x18028221e
    int32_t v34 = *v10; // 0x180282226
    char v35 = *(char *)((int64_t)v34 + (int64_t)&g534 + 12 * (int64_t)v33); // 0x180282235
    if (v35 != 0) {
        // 0x180282156
        return (int64_t)&g534 & -256 | 1;
    }
    // 0x18028223f
    *(int64_t *)v1 = 22;
    *v7 = 0;
    *v8 = 0;
    *v9 = 0;
    *v10 = 0;
    *v11 = 0;
    *v12 = 0;
    // 0x180282156
    return (int64_t)&g534 & -256;
}

// Address range: 0x1802822d8 - 0x18028238b
int64_t function_1802822d8(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 48); // 0x1802822d8
    int64_t result; // 0x1802822d8
    int32_t v2; // 0x1802822d8
    if (v1 > 5) {
        switch (v1) {
            case 6: {
                goto lab_0x1802822f8;
            }
            case 7: {
                int32_t v3 = *(int32_t *)(a1 + 40); // 0x180282349
                result = 8;
                switch (v3) {
                    case 0: {
                        return 4;
                    }
                    case 3: {
                        return result;
                    }
                    default: {
                        // 0x18028231f
                        return v3 != 8 ? 0 : 8;
                    }
                }
            }
            default: {
                int32_t v4 = v1 - 8; // 0x18028232d
                v2 = v4;
                if (v4 == 0) {
                    // 0x18028233a
                    return *(char *)(a1 + 44) == 0 ? 1 : 2;
                }
                goto lab_0x180282332;
            }
        }
    } else {
        switch (v1) {
            case 5: {
                goto lab_0x1802822f8;
            }
            case 0: {
                return *(char *)(a1 + 44) == 0 ? 1 : 2;
            }
            case 1: {
                return *(char *)(a1 + 44) == 0 ? 1 : 2;
            }
            case 2: {
                goto lab_0x1802822f8;
            }
            default: {
                int32_t v5 = v1 - 3; // 0x1802822f3
                v2 = v5;
                if (v5 != 0) {
                    goto lab_0x180282332;
                } else {
                    goto lab_0x1802822f8;
                }
            }
        }
    }
  lab_0x1802822f8:;
    int32_t v6 = *(int32_t *)(a1 + 40); // 0x1802822f8
    int32_t v7; // 0x1802822d8
    if (v6 > 5) {
        // 0x180282377
        if ((v6 & -2) == 6) {
            // 0x18028231f
            return 8;
        }
        // 0x180282381
        v7 = v6 - 9;
        goto lab_0x180282313;
    } else {
        // 0x180282300
        result = 8;
        switch (v6) {
            case 5: {
                return result;
            }
            case 0: {
                return 4;
            }
            case 1: {
                // 0x18028231f
                return 1;
            }
            case 2: {
                // 0x18028231f
                return 2;
            }
            default: {
                // 0x180282310
                v7 = v6 - 3;
                goto lab_0x180282313;
            }
        }
    }
  lab_0x180282332:
    // 0x180282332
    if (v2 != 1) {
        // 0x18028231f
        return 0;
    }
    goto lab_0x1802822f8;
  lab_0x180282313:
    // 0x180282313
    if (v7 == 0) {
        // 0x18028231f
        return 4;
    }
    // 0x180282315
    result = v7 != 1 ? 0 : 8;
    // 0x18028231f
    return result;
}

// Address range: 0x18028238c - 0x18028247d
int64_t function_18028238c(int64_t a1) {
    int64_t v1 = a1;
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x18028239b
    uint64_t v3 = *v2; // 0x18028239b
    int64_t v4; // 0x18028238c
    int64_t v5; // 0x18028238c
    int64_t v6; // 0x18028238c
    if (v3 != 0) {
        int64_t * v7 = (int64_t *)(a1 + 16);
        if (v3 <= *v7) {
            // 0x1802823c5
            int64_t result; // 0x18028238c
            int64_t v8; // 0x18028238c
            if (*(int64_t *)(a1 + 40) != 0) {
                int64_t v9 = a1 + 32;
                int64_t v10 = function_180282110(v9, v6); // 0x1802823f5
                int64_t v11 = v9; // 0x1802823fc
                while ((char)v10 != 0) {
                    int64_t v12 = function_180282750(a1); // 0x1802823e8
                    v11 = a1;
                    if ((char)v12 == 0) {
                        // break -> 0x1802823fe
                        return 0;
                    }
                    v10 = function_180282110(v9, v6);
                    v11 = v9;
                }
                // 0x1802823fe
                v1 = v11;
                int64_t v13 = a1 + 136; // 0x1802823fe
                int64_t v14 = (int64_t)*(int32_t *)v13; // 0x180282406
                char v15 = v11;
                char v16 = v15; // 0x18028240c
                int64_t v17 = v14; // 0x18028240c
                int64_t v18; // 0x18028238c
                if (*(int64_t *)v13 == 0) {
                    // 0x18028240e
                    v16 = v15;
                    v17 = v14;
                    if (*(int32_t *)(a1 + 52) != 1) {
                        int64_t v19 = *v2; // 0x180282414
                        v1 = v19;
                        int64_t v20 = v19; // 0x18028241f
                        int64_t v21 = 0xffffffff; // 0x18028241f
                        int64_t v22 = 0xffffffff; // 0x18028241f
                        if (v19 != *v7) {
                            int64_t v23 = v19 + 1; // 0x18028242a
                            v1 = v23;
                            *v2 = v23;
                            v20 = v1;
                            v21 = v14;
                            v22 = (int64_t)*(char *)v19;
                        }
                        char v24 = v20;
                        v16 = v24;
                        v17 = v21;
                        v18 = v22;
                        if (v20 != *(int64_t *)(a1 + 8)) {
                            // 0x18028243b
                            v16 = v24;
                            v17 = v21;
                            v18 = 0xffffffff;
                            if (v22 == 0xffffffff != (v20 == *v7)) {
                                // 0x180282445
                                *v2 = v20 - 1;
                                v16 = *(char *)&v1;
                                v17 = v21;
                                v18 = v22;
                            }
                        }
                    }
                }
                // 0x18028244d
                if ((v16 & 1) == 0) {
                    // 0x18028246d
                    return v17 & 0xffffffff;
                }
                int32_t v25 = *(int32_t *)(a1 + 48); // 0x180282452
                if (v25 == 0) {
                    // 0x18028246d
                    return v17 & 0xffffffff;
                }
                // 0x180282459
                *(int32_t *)function_180279918(v1, v18, v5, v4) = v25;
                result = v17 & 0xffffffff;
                v8 = v18;
            } else {
                // 0x1802823cc
                *(int32_t *)function_180279918(a1, v6, v5, v4) = 22;
                result = 0xffffffff;
            }
            // 0x180282462
            function_180271814(v1, v8, v5, v4);
            // 0x18028246d
            return result;
        }
    }
    // 0x1802823ad
    *(int32_t *)function_180279918(a1, v6, v5, v4) = 22;
    function_180271814(v1, v6, v5, v4);
    // 0x18028246d
    return 0xffffffff;
}

// Address range: 0x180282480 - 0x18028259e
int64_t function_180282480(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 80); // 0x18028248a
    int64_t v2; // 0x180282480
    int64_t v3; // 0x180282480
    int64_t v4; // 0x180282480
    int64_t v5; // 0x180282480
    int64_t v6; // 0x180282480
    int32_t v7; // 0x180282480
    if (v1 > 5) {
        // 0x180282520
        v4 = 16;
        v7 = 0;
        switch (v1) {
            case 6: {
                goto lab_0x18028258e;
            }
            case 7: {
                // 0x180282593
                return function_1802825a0(a1);
            }
            case 8: {
                int64_t v8 = function_1802822d8(a1 + 32); // 0x180282558
                v5 = 8;
                v6 = 8;
                v3 = 0;
                v2 = v8 - 1;
                switch (v8) {
                    case 1: {
                        goto lab_0x180282509;
                    }
                    case 2: {
                        goto lab_0x1802824fa;
                    }
                    default: {
                        return v2 & -256 | v3;
                    }
                }
            }
            case 9: {
                int64_t result = 1; // 0x18028253e
                if (*(char *)(a1 + 58) == 0) {
                    // 0x180282545
                    result = function_180282e40(a1, *(int64_t *)(a1 + 24) - *(int64_t *)(a1 + 8));
                }
                // 0x180282593
                return result;
            }
            default: {
                goto lab_0x180282534;
            }
        }
    } else {
        // 0x180282499
        v4 = 0;
        v7 = 1;
        switch (v1) {
            case 5: {
                // 0x180282519
                v4 = 10;
                v7 = 0;
                goto lab_0x18028258e;
            }
            case 0: {
                int64_t v9 = function_1802822d8(a1 + 32) - 1; // 0x1802824e9
                v6 = 0;
                if (v9 == 0) {
                    goto lab_0x180282509;
                } else {
                    // 0x1802824ef
                    v5 = 0;
                    if (v9 != 1) {
                        // 0x180282593
                        return v9 & -256;
                    }
                    goto lab_0x1802824fa;
                }
            }
            case 1: {
                // 0x180282593
                int64_t v10; // 0x180282480
                return function_180282808(a1, 1, v10);
            }
            case 2: {
                goto lab_0x18028258e;
            }
            default: {
                int32_t v11 = v1 - 3; // 0x1802824ab
                v4 = 10;
                v7 = 1;
                if (v11 != 0) {
                    // 0x1802824b0
                    v4 = 8;
                    v7 = 0;
                    if (v11 != 1) {
                      lab_0x180282534:;
                        // 0x180282593
                        int64_t v12; // 0x180282480
                        return v12 & -256;
                    }
                }
                goto lab_0x18028258e;
            }
        }
    }
  lab_0x18028258e:;
    // 0x180282593
    int64_t v13; // 0x180282480
    return function_180282610(a1, v4, v7, v13);
  lab_0x180282509:;
    int64_t v14 = function_180281cd4(a1, v6); // 0x18028250c
    goto lab_0x180282511;
  lab_0x1802824fa:
    // 0x1802824fa
    v14 = function_180281e78(a1, v5);
    goto lab_0x180282511;
  lab_0x180282511:
    // 0x180282511
    v3 = v14 & 255;
    v2 = v14;
    // 0x180282593
    return v2 & -256 | v3;
}

// Address range: 0x1802825a0 - 0x18028260e
int64_t function_1802825a0(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x1802825b1
    int64_t v2 = function_180282058(v1, *(int64_t *)(a1 + 120)); // 0x1802825b5
    int64_t * v3 = (int64_t *)(a1 + 24); // 0x1802825bc
    int64_t v4 = *v3; // 0x1802825bc
    if (v4 != *(int64_t *)v1) {
        // 0x1802825c6
        if ((int32_t)v2 == -1 != (v4 == *(int64_t *)(a1 + 16))) {
            // 0x1802825d1
            *v3 = v4 - 1;
        }
    }
    int64_t v5 = function_1802822d8(a1 + 32); // 0x1802825dc
    int64_t result; // 0x1802825a0
    switch (v5) {
        case 4: {
            // 0x1802825fb
            result = function_180281b88(a1);
            // break -> 0x180282603
            return 0;
        }
        case 8: {
            // 0x1802825f1
            result = function_180281c2c(a1);
            // break -> 0x180282603
            return 0;
        }
        default: {
            // 0x1802825ed
            result = v5 & -256;
            // break -> 0x180282603
            return 0;
        }
    }
    // 0x180282603
    return result;
}

// Address range: 0x180282610 - 0x1802826c6
int64_t function_180282610(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a1 + 8; // 0x180282626
    int64_t * v2 = (int64_t *)(a1 + 120); // 0x18028262a
    int64_t v3 = function_180282058(v1, *v2); // 0x180282637
    int64_t * v4 = (int64_t *)(a1 + 24); // 0x18028263e
    int64_t v5 = *v4; // 0x18028263e
    if (v5 != *(int64_t *)v1) {
        // 0x180282647
        if ((int32_t)v3 == -1 != (v5 == *(int64_t *)(a1 + 16))) {
            // 0x180282652
            *v4 = v5 - 1;
        }
    }
    int64_t v6 = v1; // bp-40, 0x180282671
    int64_t v7 = function_180281a88(*v2, &v6); // 0x18028268c
    int64_t result; // 0x180282610
    if (*(char *)(a1 + 58) == 0) {
        // 0x1802826a6
        result = function_180282e40(a1, v7);
    } else {
        // 0x1802826a2
        result = v7 & -256 | 1;
    }
    // 0x1802826b1
    return result;
}

// Address range: 0x1802826c8 - 0x18028274d
int64_t function_1802826c8(int64_t a1, unsigned char a2) {
    int64_t v1 = (int64_t)__pctype_func(); // 0x1802826d8
    if (*(int16_t *)(2 * (int64_t)a2 + v1) >= 0) {
        // 0x180282742
        return v1 & -256 | 1;
    }
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x1802826e4
    int64_t v3 = *v2; // 0x1802826e4
    int64_t v4 = *(int64_t *)(a1 + 16); // 0x1802826e8
    int64_t v5 = v3; // 0x1802826ef
    int32_t v6 = -1; // 0x1802826ef
    if (v3 != v4) {
        unsigned char v7 = *(char *)v3; // 0x1802826f6
        v5 = v3 + 1;
        *v2 = v5;
        v6 = v7;
        if (v7 == *(char *)(a1 + 57)) {
            // 0x180282742
            return 1;
        }
    }
    int64_t * v8 = (int64_t *)(a1 + 8); // 0x180282709
    if (v5 == *v8) {
        // 0x180282742
        return v5 & -256;
    }
    int64_t v9 = v4; // 0x180282712
    if (v5 == v4 == v6 == -1) {
        goto lab_0x18028272e;
    } else {
        // 0x180282720
        v9 = v5 - 1;
        *v2 = v9;
        if (v9 == *v8) {
            // 0x180282742
            return v9 & -256;
        }
        // 0x180282729
        if (v9 != v4) {
            goto lab_0x180282734;
        } else {
            goto lab_0x18028272e;
        }
    }
  lab_0x18028272e:
    // 0x18028272e
    if (a2 == -1) {
        // 0x180282742
        return v9 & -256;
    }
    goto lab_0x180282734;
  lab_0x180282734:;
    int64_t v10 = v9 - 1; // 0x180282734
    *v2 = v10;
    // 0x180282742
    return v10 & -256;
}

// Address range: 0x180282750 - 0x180282805
int64_t function_180282750(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 52); // 0x18028275d
    if (v1 == 2) {
        int64_t v2 = a1 + 8; // 0x1802827d1
        int64_t v3 = function_180282058(v2, *(int64_t *)(a1 + 120)); // 0x1802827d5
        int64_t * v4 = (int64_t *)(a1 + 24); // 0x1802827dc
        int64_t v5 = *v4; // 0x1802827dc
        int64_t v6 = v5; // 0x1802827e4
        if (v5 != *(int64_t *)v2) {
            // 0x1802827e6
            v6 = v5;
            if ((int32_t)v3 == -1 != (v5 == *(int64_t *)(a1 + 16))) {
                int64_t v7 = v5 - 1; // 0x1802827f1
                *v4 = v7;
                v6 = v7;
            }
        }
        // 0x1802827fa
        return v6 & -256 | 1;
    }
    int32_t v8 = v1 - 3; // 0x180282765
    int64_t v9; // 0x180282750
    if (v8 != 0) {
        if (v8 != 1) {
            // 0x1802827fa
            return v9 & -256;
        }
        int64_t result = function_180282480(a1); // 0x180282772
        if ((char)result == 0 || *(int32_t *)(a1 + 80) == 9) {
            // 0x1802827fa
            return result;
        }
        // 0x180282785
        if (*(char *)(a1 + 58) == 0) {
            int64_t * v10 = (int64_t *)(a1 + 136); // 0x18028278a
            *v10 = *v10 + 1;
        }
        // 0x1802827fa
        return result;
    }
    int64_t * v11 = (int64_t *)(a1 + 24); // 0x180282795
    int64_t v12 = *v11; // 0x180282795
    if (v12 == *(int64_t *)(a1 + 16)) {
        // 0x1802827fa
        return v9 & -256;
    }
    char v13 = *(char *)v12; // 0x18028279f
    int64_t v14 = v12 + 1; // 0x1802827a2
    *v11 = v14;
    if (v13 == *(char *)(a1 + 56)) {
        // 0x1802827fa
        return function_1802826c8(a1, v13);
    }
    // 0x1802827b1
    v12 = 0;
    if (v14 != *(int64_t *)(a1 + 8)) {
        // 0x1802827b7
        *v11 = v12;
    }
    // 0x1802827fa
    return v12 & -256;
}

// Address range: 0x180282808 - 0x180282891
int64_t function_180282808(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a2 == 1) {
        int64_t v1 = a1 + 8; // 0x180282825
        int64_t v2 = function_180282058(v1, *(int64_t *)(a1 + 120)); // 0x180282829
        int64_t * v3 = (int64_t *)(a1 + 24); // 0x180282830
        int64_t v4 = *v3; // 0x180282830
        if (v4 != *(int64_t *)v1) {
            // 0x18028283a
            if ((int32_t)v2 == -1 != (v4 == *(int64_t *)(a1 + 16))) {
                // 0x180282845
                *v3 = v4 - 1;
            }
        }
    }
    int64_t v5 = a2 & 0xffffffff; // 0x180282817
    int64_t v6 = function_1802822d8(a1 + 32); // 0x180282850
    int64_t result; // 0x180282808
    switch (v6) {
        case 1: {
            // 0x180282874
            result = function_180281cd4(a1, v5);
            // break -> 0x180282881
            return 0;
        }
        case 2: {
            // 0x180282865
            result = function_180281e78(a1, v5);
            // break -> 0x180282881
            return 0;
        }
        default: {
            // 0x180282861
            result = v6 - 1 & -256;
            // break -> 0x180282881
            return 0;
        }
    }
    // 0x180282881
    return result;
}

// Address range: 0x180282894 - 0x180282a5d
int64_t function_180282894(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180282894
    int64_t v2 = *v1; // 0x180282894
    unsigned char v3 = *(char *)v2; // 0x1802828a1
    int64_t v4; // 0x180282a52
    if (v3 < 101) {
        if (v3 == 100) {
            // 0x18028298a
            *(int32_t *)(a1 + 48) = 3;
            // 0x180282a52
            v4 = v2 + 1;
            *v1 = v4;
            // 0x180282a5a
            return v4 & -256 | 1;
        }
        if (v3 < 74) {
            switch (v3) {
                case 73: {
                    goto lab_0x1802829ce;
                }
                case 65: {
                    goto lab_0x1802828dc;
                }
                case 67: {
                    goto lab_0x18028290d;
                }
                case 69: {
                    goto lab_0x1802828dc;
                }
                default: {
                    int32_t v5 = (int32_t)v3 - 70; // 0x1802828ce
                    if (v5 != 0 == (v5 != 1)) {
                        goto lab_0x1802829f1;
                    } else {
                        goto lab_0x1802828dc;
                    }
                }
            }
        } else {
            switch (v3) {
                case 83: {
                    goto lab_0x180282a19;
                }
                case 88: {
                    goto lab_0x180282a4b;
                }
                case 91: {
                    int32_t v6 = *(int32_t *)(a1 + 40); // 0x180282951
                    if (v6 == 2) {
                        // 0x180282959
                        *(char *)(a1 + 44) = 0;
                        // 0x180282973
                        *(int32_t *)(a1 + 48) = 8;
                        *v1 = v2 + 1;
                        return function_180282c10(a1);
                    }
                    if (v6 != 7 && (v6 - 3 & -6) == 0) {
                        // 0x18028296f
                        *(char *)(a1 + 44) = 1;
                    }
                    // 0x180282973
                    *(int32_t *)(a1 + 48) = 8;
                    *v1 = v2 + 1;
                    return function_180282c10(a1);
                }
                case 97: {
                    goto lab_0x1802828dc;
                }
                default: {
                    if (v3 != 99) {
                        goto lab_0x1802829f1;
                    } else {
                        goto lab_0x18028290d;
                    }
                }
            }
        }
    } else {
        if (v3 < 112) {
            if (v3 == 111) {
                // 0x1802829d4
                *(int32_t *)(a1 + 48) = 4;
                // 0x180282a52
                v4 = v2 + 1;
                *v1 = v4;
                // 0x180282a5a
                return v4 & -256 | 1;
            }
            if (v3 < 104) {
                goto lab_0x1802828dc;
            } else {
                int32_t v7 = (int32_t)v3 - 105; // 0x1802829b8
                if (v7 == 0) {
                    goto lab_0x1802829ce;
                } else {
                    if (v7 == 5) {
                        // 0x1802829c2
                        *(int32_t *)(a1 + 48) = 9;
                        // 0x180282a52
                        v4 = v2 + 1;
                        *v1 = v4;
                        // 0x180282a5a
                        return v4 & -256 | 1;
                    }
                    goto lab_0x1802829f1;
                }
            }
        } else {
            switch (v3) {
                case 112: {
                    // 0x180282a44
                    *(int32_t *)(a1 + 40) = 10;
                    goto lab_0x180282a4b;
                }
                case 115: {
                    goto lab_0x180282a19;
                }
                case 117: {
                    // 0x180282a10
                    *(int32_t *)(a1 + 48) = 5;
                    // 0x180282a52
                    v4 = v2 + 1;
                    *v1 = v4;
                    // 0x180282a5a
                    return v4 & -256 | 1;
                }
                case 120: {
                    goto lab_0x180282a4b;
                }
                default: {
                    goto lab_0x1802829f1;
                }
            }
        }
    }
  lab_0x1802829ce:
    // 0x1802829ce
    *(int32_t *)(a1 + 48) = 2;
    // 0x180282a52
    v4 = v2 + 1;
    *v1 = v4;
    // 0x180282a5a
    return v4 & -256 | 1;
  lab_0x1802828dc:
    // 0x1802828dc
    *(int32_t *)(a1 + 48) = 7;
    // 0x180282a52
    v4 = v2 + 1;
    *v1 = v4;
    // 0x180282a5a
    return v4 & -256 | 1;
  lab_0x18028290d:;
    int64_t * v8 = (int64_t *)(a1 + 32); // 0x18028290f
    if (*v8 == 0) {
        // 0x180282915
        *v8 = 1;
    }
    int32_t v9 = *(int32_t *)(a1 + 40); // 0x18028291d
    if (v9 != 2) {
        if (v9 != 7 && (v9 - 3 & -6) == 0) {
            // 0x18028293d
            *(char *)(a1 + 44) = 1;
        }
        // 0x180282941
        *(int32_t *)(a1 + 48) = 0;
        *v1 = v2 + 1;
        // 0x180282a5a
        return 1;
    }
    // 0x180282926
    *(char *)(a1 + 44) = 0;
    // 0x180282941
    *(int32_t *)(a1 + 48) = 0;
    *v1 = v2 + 1;
    // 0x180282a5a
    return 1;
  lab_0x180282a19:;
    int32_t v10 = *(int32_t *)(a1 + 40); // 0x180282a19
    if (v10 != 2) {
        if (v10 != 7 && (v10 - 3 & -6) == 0) {
            // 0x180282a37
            *(char *)(a1 + 44) = 1;
        }
    } else {
        // 0x180282a21
        *(char *)(a1 + 44) = 0;
    }
    // 0x180282a3b
    *(int32_t *)(a1 + 48) = 1;
    // 0x180282a52
    v4 = v2 + 1;
    *v1 = v4;
    // 0x180282a5a
    return v4 & -256 | 1;
  lab_0x180282a4b:
    // 0x180282a4b
    *(int32_t *)(a1 + 48) = 6;
    // 0x180282a52
    v4 = v2 + 1;
    *v1 = v4;
    // 0x180282a5a
    return v4 & -256 | 1;
  lab_0x1802829f1:
    // 0x1802829f1
    *(int64_t *)(a1 + 16) = 22;
    *(int16_t *)(a1 + 24) = 0;
    *(char *)(a1 + 26) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 40) = 0;
    *(char *)(a1 + 44) = 0;
    *(int32_t *)(a1 + 48) = 0;
    return 0;
}

// Address range: 0x180282a60 - 0x180282aff
int64_t function_180282a60(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180282a69
    int64_t v2 = *v1; // 0x180282a69
    char v3 = *(char *)v2;
    int64_t v4; // 0x180282a60
    if (v3 < 58) {
        // 0x180282a75
        v4 = (int64_t)v3 + 0xffffffd0;
    } else {
        if (v3 < 123) {
            // 0x180282a85
            v4 = (int64_t)v3 + 0xffffffa9;
        } else {
            // 0x180282a8d
            if (v3 >= 91) {
                // 0x180282ad0
                int64_t v5; // 0x180282a60
                return v5 & -256 & -256 | 1;
            }
            // 0x180282a95
            v4 = (int64_t)v3 + 0xffffffc9;
        }
    }
    // 0x180282a9b
    if ((int32_t)v4 >= 10) {
        // 0x180282ad0
        return v4 & 0xffffffff & -256 | 1;
    }
    int64_t v6 = 0; // 0x180282aa0
    int64_t v7 = function_18027e020(v2, &v6); // 0x180282ab1
    if (v7 != 0) {
        // 0x180282abb
        if (v6 != *v1) {
            // 0x180282ac6
            *(int64_t *)(a1 + 32) = v7;
            *v1 = v6;
            // 0x180282ad0
            return v7 & -256 | 1;
        }
    }
    // 0x180282ad6
    *(int32_t *)(a1 + 20) = 0;
    *(int16_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 40) = 0;
    *(int32_t *)(a1 + 48) = 0;
    *(char *)(a1 + 26) = 0;
    *(char *)(a1 + 44) = 0;
    *(int32_t *)(a1 + 16) = 22;
    // 0x180282ad0
    return v7 & -256;
}

// Address range: 0x180282b00 - 0x180282c0d
int64_t function_180282b00(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180282b00
    int64_t v2 = *v1; // 0x180282b00
    unsigned char v3 = *(char *)v2; // 0x180282b04
    int64_t v4; // 0x180282b00
    int64_t v5 = v4 & -256; // 0x180282b04
    int64_t result; // 0x180282b00
    int64_t result3; // 0x180282b00
    switch (v3) {
        case 73: {
            unsigned char v6 = *(char *)(v2 + 1); // 0x180282bb6
            if (v6 == 51) {
                // 0x180282bbd
                if (*(char *)(v2 + 2) == 50) {
                    // 0x180282bc3
                    *(int32_t *)(a1 + 40) = 9;
                    // 0x180282c08
                    result = v2 + 3;
                    *v1 = result;
                    // 0x180282c0c
                    return result;
                }
            }
            int64_t result2 = v5 | (int64_t)v6; // 0x180282bb6
            if (v6 == 54) {
                // 0x180282bd4
                if (*(char *)(v2 + 2) != 52) {
                    // 0x180282c0c
                    return result2;
                }
                // 0x180282bda
                *(int32_t *)(a1 + 40) = 10;
                // 0x180282c08
                result = v2 + 3;
                *v1 = result;
                // 0x180282c0c
                return result;
            }
            int64_t v7 = result2 + 168; // 0x180282be7
            if ((char)v7 >= 33 || (1 << (v7 & 63) & 0x120821001) == 0) {
                // 0x180282c0c
                return v7 & 255 | v5;
            }
            // 0x180282bfd
            *(int32_t *)(a1 + 40) = 10;
            // break -> 0x180282c04
            return 0;
        }
        case 76: {
            // 0x180282bad
            *(int32_t *)(a1 + 40) = 8;
            // break -> 0x180282c04
            return 0;
        }
        case 84: {
            // 0x180282ba4
            *(int32_t *)(a1 + 40) = 11;
            // break -> 0x180282c04
            return 0;
        }
        case 104: {
            int64_t v8 = v2 + 1; // 0x180282b82
            char v9 = *(char *)v8; // 0x180282b86
            *v1 = v9 != 104 ? v8 : v2 + 2;
            // 0x180282ba0
            result3 = v9 != 104 ? 2 : 1;
            *(int32_t *)(a1 + 40) = (int32_t)result3;
            return result3;
        }
        case 106: {
            // 0x180282b76
            *(int32_t *)(a1 + 40) = 5;
            // break -> 0x180282c04
            return 0;
        }
        case 108: {
            int64_t v10 = v2 + 1; // 0x180282b56
            char v11 = *(char *)v10; // 0x180282b5a
            *v1 = v11 != 108 ? v10 : v2 + 2;
            // 0x180282ba0
            result3 = (int64_t)(v11 != 108) + 4 & 0xffffffff;
            *(int32_t *)(a1 + 40) = (int32_t)result3;
            return result3;
        }
        case 116: {
            // 0x180282b4a
            *(int32_t *)(a1 + 40) = 7;
            // break -> 0x180282c04
            return 0;
        }
        default: {
            // 0x180282b36
            if (v3 != 122) {
                // 0x180282c0c
                return v5 | (int64_t)v3;
            }
            // 0x180282b3e
            *(int32_t *)(a1 + 40) = 6;
            // break -> 0x180282c04
            return 0;
        }
    }
    // 0x180282c08
    result = v2 + 1;
    *v1 = result;
    // 0x180282c0c
    return result;
}

// Address range: 0x180282c10 - 0x180282da6
int64_t function_180282c10(int64_t a1) {
    int64_t v1 = a1 + 52;
    if (v1 == 0) {
        // 0x180282c31
        *(int64_t *)(a1 + 16) = 12;
        *(int16_t *)(a1 + 24) = 0;
        *(char *)(a1 + 26) = 0;
        *(int64_t *)(a1 + 32) = 0;
        *(int32_t *)(a1 + 40) = 0;
        *(char *)(a1 + 44) = 0;
        *(int32_t *)(a1 + 48) = 0;
        // 0x180282d91
        int64_t v2; // 0x180282c10
        return (int64_t)&v2 & -256;
    }
    // 0x180282c56
    int128_t v3; // 0x180282c10
    int128_t v4 = __asm_xorps(v3, v3); // 0x180282c56
    __asm_movups(*(int128_t *)v1, v4);
    __asm_movups(*(int128_t *)(a1 + 68), v4);
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x180282c62
    int64_t v6 = *v5; // 0x180282c62
    char v7 = *(char *)v6; // 0x180282c69
    int64_t v8 = v6; // 0x180282c73
    char v9 = v7; // 0x180282c73
    if (v7 == 94) {
        // 0x180282c75
        v8 = v6 + 1;
        *v5 = v8;
        v9 = *(char *)v8;
    }
    int64_t v10 = v8; // 0x180282c84
    if (v9 == 93) {
        // 0x180282c86
        v10 = v8 + 1;
        *v5 = v10;
        char * v11 = (char *)(a1 + 63); // 0x180282c8e
        *v11 = *v11 | 32;
    }
    char v12 = *(char *)v10; // 0x180282c93
    char v13 = v12; // 0x180282c9d
    int64_t v14 = 0; // 0x180282c9d
    int64_t v15 = v10; // 0x180282c9d
    unsigned char v16; // 0x180282c10
    int64_t v17; // 0x180282c10
    int64_t v18; // 0x180282c10
    if (v12 == 93) {
        goto lab_0x180282d74;
    } else {
        while (true) {
          lab_0x180282ca9:;
            int64_t v19 = v15;
            v16 = v13;
            v17 = v19;
            if (v16 == 0) {
                // break -> 0x180282d4e
                return 0;
            }
            // 0x180282cb2
            v18 = v14;
            if (v16 != 45) {
                goto lab_0x180282d11;
            } else {
                int64_t v20 = v19 - 1; // 0x180282cb8
                if (v19 == v10 || v20 == v18) {
                    goto lab_0x180282d11;
                } else {
                    int64_t v21 = v19 + 1; // 0x180282cc6
                    unsigned char v22 = *(char *)v21; // 0x180282cc6
                    if (v22 == 93) {
                        goto lab_0x180282d11;
                    } else {
                        unsigned char v23 = *(char *)v20; // 0x180282ccc
                        unsigned char v24 = v23 > v22 ? v22 : v23;
                        char v25 = (v23 > v22 ? v23 : v22) + 1; // 0x180282ce6
                        v14 = v21;
                        if (v25 != v24) {
                            int64_t v26 = v24; // 0x180282c10
                            char * v27 = (char *)(v26 / 8 + v1); // 0x180282cf9
                            *v27 = *v27 | (char)(1 << ((int32_t)v26 & 7));
                            int64_t v28 = v26 + 1; // 0x180282d07
                            v26 = v28 & 255;
                            v14 = v21;
                            while (v25 != (char)v28) {
                                // 0x180282cea
                                v27 = (char *)(v26 / 8 + v1);
                                *v27 = *v27 | (char)(1 << ((int32_t)v26 & 7));
                                v28 = v26 + 1;
                                v26 = v28 & 255;
                                v14 = v21;
                            }
                        }
                        goto lab_0x180282d2e;
                    }
                }
            }
        }
        goto lab_0x180282d4e;
    }
  lab_0x180282d11:;
    char * v29 = (char *)(v1 + (int64_t)(v16 / 8)); // 0x180282d20
    *v29 = *v29 | (char)(1 << (int32_t)(v16 & 7));
    v14 = v18;
    goto lab_0x180282d2e;
  lab_0x180282d2e:
    // 0x180282d2e
    v15 = *v5 + 1;
    *v5 = v15;
    v13 = *(char *)v15;
    if (v13 == 93) {
        // 0x180282d49
        v17 = v15;
        if (v13 != 0) {
            goto lab_0x180282d74;
        } else {
            goto lab_0x180282d4e;
        }
    }
    goto lab_0x180282ca9;
  lab_0x180282d74:
    // 0x180282d74
    if (v7 != 94) {
        // 0x180282d8b
        *v5 = *v5 + 1;
        // 0x180282d91
        return v15 & -256 | 1;
    }
    int64_t v30 = v1;
    char * v31 = (char *)v30; // 0x180282d80
    *v31 = -1 - *v31;
    int64_t v32 = v30 + 1; // 0x180282d89
    while (v30 != a1 + 83) {
        // 0x180282d80
        v30 = v32;
        v31 = (char *)v30;
        *v31 = -1 - *v31;
        v32 = v30 + 1;
    }
    // 0x180282d8b
    *v5 = *v5 + 1;
    // 0x180282d91
    return v15 & -256 | 1;
  lab_0x180282d4e:
    // 0x180282d4e
    *(int64_t *)(a1 + 16) = 22;
    *(int16_t *)(a1 + 24) = 0;
    *(char *)(a1 + 26) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int32_t *)(a1 + 40) = 0;
    *(char *)(a1 + 44) = 0;
    *(int32_t *)(a1 + 48) = 0;
    // 0x180282d91
    return v17 & -256;
}

// Address range: 0x180282da8 - 0x180282e3e
int64_t function_180282da8(int64_t a1) {
    // 0x180282da8
    uint16_t v1; // 0x180282da8
    int64_t v2 = v1; // 0x180282db8
    int16_t v3 = 256 * v1 / 256; // bp+48, 0x180282dc0
    if (*(int16_t *)((2 * v2 & 510) + (int64_t)__pctype_func()) < 0) {
        int64_t * v4 = (int64_t *)(a1 + 24); // 0x180282ddb
        int64_t v5 = *v4; // 0x180282ddb
        if (v5 != *(int64_t *)(a1 + 16)) {
            // 0x180282de9
            *v4 = v5 + 1;
        }
    }
    int64_t v6 = *(int64_t *)(a1 + 120); // 0x180282df6
    int64_t v7 = 63; // 0x180282e09
    int32_t v8 = *(int32_t *)(*(int64_t *)v6 + 8); // 0x180282e11
    function_18028bea0(&v7, (char *)&v3, v8, v6, 63);
    *(int16_t *)v6 = (int16_t)(0x100000000000000 * v2 / 0x100000000000000);
    int64_t v9; // 0x180282da8
    *(int64_t *)v9 = v6 + 2;
    int64_t v10; // 0x180282da8
    int64_t * v11 = (int64_t *)v10; // 0x180282e33
    *v11 = *v11 - 1;
    return v10 & -256 | 1;
}

// Address range: 0x180282e40 - 0x180282eba
int64_t function_180282e40(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 128); // 0x180282e4a
    int64_t v2 = *v1; // 0x180282e4a
    *v1 = v2 + 8;
    int64_t v3 = *(int64_t *)v2; // 0x180282e5f
    if (v3 == 0) {
        // 0x180282e67
        int64_t v4; // 0x180282e40
        *(int32_t *)function_180279918(a1, a2, v2, v4) = 22;
        // 0x180282eaf
        return function_180271814(a1, a2, v2, v4) & -256;
    }
    int64_t v5 = function_1802822d8(a1 + 32); // 0x180282e7f
    switch (v5) {
        case 1: {
            // 0x180282eaa
            *(char *)v3 = (char)a2;
            // 0x180282eaf
            return 1;
        }
        case 2: {
            // 0x180282ea5
            *(int16_t *)v3 = (int16_t)a2;
            // 0x180282eaf
            return 1;
        }
    }
    int64_t v6 = v5 - 4; // 0x180282e90
    if (v6 == 0) {
        // 0x180282ea1
        *(int32_t *)v3 = (int32_t)a2;
        // 0x180282eaf
        return 1;
    }
    // 0x180282e96
    if (v6 != 4) {
        // 0x180282eaf
        return v6 & -256;
    }
    // 0x180282e9c
    *(int64_t *)v3 = a2;
    // 0x180282eaf
    return v6 & -256 | 1;
}

// Address range: 0x180282ebc - 0x180282fe0
int64_t function_180282ebc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180282ebc
    if (a2 == 0 || a4 == 0) {
        // 0x180282ef2
        *(int32_t *)function_180279918(a1, a2, a3, a4) = 22;
        function_180271814(a1, a2, a3, a4);
        // 0x180282fbc
        return function_18026ad50((int64_t)g731);
    }
    // 0x180282f0f
    function_18027e220(a2, a3);
    int64_t v1; // bp-224, 0x180282ebc
    function_1802718b0(&v1, a5);
    int128_t v2 = __asm_movups_16((int128_t)a2); // 0x180282f69
    int128_t v3 = __asm_movsd(a2); // 0x180282f73
    int128_t v4; // 0x180282ebc
    __asm_movups(v4, v2);
    int64_t v5 = a1; // bp-184, 0x180282f7d
    int128_t v6 = __asm_xorps(v2, v2); // 0x180282f81
    __asm_movsd_17(v3);
    int128_t v7; // 0x180282ebc
    __asm_movups(v7, v6);
    int128_t v8; // 0x180282ebc
    __asm_movups(v8, v6);
    function_18028238c((int64_t)&v5);
    char v9; // 0x180282ebc
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)(v1 + 936); // 0x180282fb5
        *v10 = *v10 & -3;
    }
    // 0x180282fbc
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180282fe0 - 0x180282fe5
int64_t * function_180282fe0(int32_t Size) {
    // 0x180282fe0
    return _malloc_base(Size);
}

// Address range: 0x180282ff0 - 0x180283388
int64_t function_180282ff0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x180282ff0
    if (a1 == 0 == (a2 != 0) || a3 == 0 || a4 == 0) {
        // 0x180283027
        *(int32_t *)function_180279918(a1, a2, a3, a4) = 22;
        function_180271814(a1, a2, a3, a4);
        // 0x180283368
        return function_18026ad50((int64_t)g731);
    }
    // 0x180283046
    function_1802921c0(a4);
    int64_t v1; // bp-1080, 0x180282ff0
    function_18029db80((int64_t)&v1, 0, 496, a4);
    int64_t v2; // bp-584, 0x180282ff0
    function_18029db80((int64_t)&v2, 0, 496, a4);
    if (a2 < 2) {
        // 0x180283368
        return function_18026ad50((int64_t)g731);
    }
    // 0x18028307f
    int64_t v3; // bp-1128, 0x180282ff0
    int64_t v4 = &v3; // 0x180282ff8
    int64_t v5 = v4 + 48;
    int64_t v6 = v4 + 544;
    int64_t v7 = 0; // 0x1802830ab
    int64_t v8 = a1; // 0x1802830ab
    int64_t v9 = (a2 - 1) * a3 + a1; // 0x1802830ab
    int64_t v10; // 0x180282ff0
    uint64_t v11; // 0x180282ff0
    int64_t v12; // 0x180282ff0
    int64_t v13; // 0x180282ff0
    while (true) {
      lab_0x1802830b0_2:;
        uint64_t v14 = v8;
        int64_t v15 = v7;
        int64_t v16 = v9; // 0x180282ff0
        int64_t v17; // 0x180282ff0
        int64_t v18; // 0x1802830b8
        while (true) {
            // 0x1802830b0
            v10 = v16;
            v17 = v15;
            v18 = (v10 - v14) / a3;
            uint64_t v19 = v18 + 1; // 0x1802830bb
            if (v19 < 9) {
                // break -> 0x1802830c9
                return 0;
            }
            int64_t v20 = v19 / 2 * a3; // 0x18028315a
            int64_t v21 = v20 + v14; // 0x18028315e
            int32_t v22 = v18;
            int64_t v23 = v21; // 0x18028316a
            int32_t v24 = v22; // 0x18028316a
            if (v22 >= 1 && v20 != 0) {
                char * v25 = (char *)v23; // 0x180283180
                unsigned char v26 = *v25; // 0x180283180
                char * v27 = (char *)(v23 - v20); // 0x18028318a
                *v27 = v26;
                *v25 = *v27;
                int64_t v28 = a3 - 1; // 0x180283195
                v23++;
                int64_t v29 = v28; // 0x180283199
                while (v28 != 0) {
                    // 0x180283180
                    v25 = (char *)v23;
                    v26 = *v25;
                    v27 = (char *)(v23 - v20);
                    *v27 = v26;
                    *v25 = *v27;
                    v28 = v29 - 1;
                    v23++;
                    v29 = v28;
                }
                // 0x18028319b
                v24 = v26;
            }
            int32_t v30 = v24; // 0x1802831a6
            if (v10 != v14 && v24 >= 1) {
                int64_t v31 = v10; // 0x1802831b9
                int64_t v32 = a3; // 0x1802831b9
                char * v33 = (char *)v31; // 0x1802831c0
                unsigned char v34 = *v33; // 0x1802831c0
                char * v35 = (char *)(v14 - v10 + v31); // 0x1802831c3
                *v35 = v34;
                *v33 = *v35;
                v32--;
                v31++;
                while (v32 != 0) {
                    // 0x1802831c0
                    v33 = (char *)v31;
                    v34 = *v33;
                    v35 = (char *)(v14 - v10 + v31);
                    *v35 = v34;
                    *v33 = *v35;
                    v32--;
                    v31++;
                }
                // 0x1802831d8
                v30 = v34;
            }
            // 0x1802831d8
            if (v21 != v10 && v30 >= 1) {
                int64_t v36 = v10; // 0x1802831f6
                int64_t v37 = a3; // 0x1802831f6
                char * v38 = (char *)v36; // 0x180283200
                char * v39 = (char *)(v21 - v10 + v36); // 0x180283203
                *v39 = *v38;
                *v38 = *v39;
                v37--;
                v36++;
                while (v37 != 0) {
                    // 0x180283200
                    v38 = (char *)v36;
                    v39 = (char *)(v21 - v10 + v36);
                    *v39 = *v38;
                    *v38 = *v39;
                    v37--;
                    v36++;
                }
            }
            int64_t v40 = v14; // 0x18028321e
            int64_t v41 = v10; // 0x18028321e
            int64_t v42 = v21; // 0x18028321e
            uint64_t v43; // 0x180282ff0
            int64_t v44; // 0x180282ff0
            int32_t v45; // 0x180282ff0
            while (true) {
                // 0x180283220
                v43 = v42;
                int64_t v46 = v40;
                v45 = v42;
                int64_t v47 = v46; // 0x180283223
                int64_t v48; // 0x180282ff0
                if (v43 > v46) {
                    int64_t v49 = v46; // 0x180283225
                    v49 += a3;
                    v47 = v49;
                    while (v49 < v43) {
                        // 0x18028322d
                        v48 = v49;
                        if (v45 >= 1) {
                            goto lab_0x180283255;
                        }
                        v49 += a3;
                        v47 = v49;
                    }
                }
                int64_t v50 = v47; // 0x180283240
                v50 += a3;
                v48 = v50;
                while (v45 < 1 == v50 <= v10) {
                    // 0x180283240
                    v50 += a3;
                    v48 = v50;
                }
              lab_0x180283255:
                // 0x180283255
                v11 = v48;
                v44 = v41;
                int64_t v51 = v44 - a3; // 0x180283258
                while (v45 >= 0 == (v45 != 0) == v51 > v43) {
                    // 0x180283255
                    v44 = v51;
                    v51 = v44 - a3;
                }
                if (v11 > v51) {
                    // break -> 0x1802832aa
                    return 0;
                }
                if (v11 != v51) {
                    int64_t v52 = v51; // 0x18028327d
                    int64_t v53 = a3; // 0x18028327d
                    char * v54 = (char *)v52; // 0x180283280
                    char * v55 = (char *)(v11 - v51 + v52); // 0x180283283
                    *v55 = *v54;
                    *v54 = *v55;
                    v53--;
                    v52++;
                    while (v53 != 0) {
                        // 0x180283280
                        v54 = (char *)v52;
                        v55 = (char *)(v11 - v51 + v52);
                        *v55 = *v54;
                        *v54 = *v55;
                        v53--;
                        v52++;
                    }
                }
                // 0x180283298
                v42 = v43 != v51 ? v43 : v11;
                v40 = v11;
                v41 = v51;
            }
            int64_t v56 = v44; // 0x1802832ad
            int64_t v57 = v44; // 0x1802832ad
            int64_t v58; // 0x180282ff0
            if (v43 < v44) {
                int64_t v59 = v56 - a3; // 0x1802832b0
                v57 = v59;
                while (v59 > v43) {
                    // 0x1802832b8
                    v56 = v59;
                    v58 = v59;
                    if (v45 != 0) {
                        goto lab_0x1802832dc;
                    }
                    v59 = v56 - a3;
                    v57 = v59;
                }
            }
            int64_t v60 = v57; // 0x1802832c7
            v60 -= a3;
            v58 = v60;
            while (v45 == 0 == v60 > v14) {
                // 0x1802832c7
                v60 -= a3;
                v58 = v60;
            }
          lab_0x1802832dc:;
            uint64_t v61 = v58;
            if (v61 - v14 >= v10 - v11) {
                // 0x1802832f2
                v13 = v17;
                if (v61 <= v14) {
                    goto lab_0x18028330c;
                } else {
                    int64_t v62 = 8 * v17; // 0x1802832f7
                    *(int64_t *)(v62 + v5) = v14;
                    *(int64_t *)(v62 + v6) = v61;
                    v13 = v17 + 1;
                    goto lab_0x18028330c;
                }
            }
            int64_t v63 = v17; // 0x180283320
            if (v10 > v11) {
                int64_t v64 = 8 * v17; // 0x180283322
                *(int64_t *)(v64 + v5) = v11;
                *(int64_t *)(v64 + v6) = v10;
                v63 = v17 + 1;
            }
            // 0x180283337
            v15 = v63;
            v16 = v61;
            v12 = v15;
            if (v61 <= v14) {
                goto lab_0x180283133;
            }
        }
        // 0x1802830c9
        v12 = v17;
        if (v10 > v14) {
            int64_t v65 = v14 + a3; // 0x1802830ce
            uint64_t v66 = v10;
            int64_t v67 = v18;
            int64_t v68 = v14; // 0x1802830db
            int64_t v69; // 0x1802830ee
            int64_t v70; // 0x1802830f2
            if (v65 <= v66) {
                // 0x1802830e0
                v69 = v14;
                v70 = v65;
                v69 = (int32_t)v67 < 1 ? v69 : v70;
                v70 += a3;
                v68 = v69;
                while (v70 <= v66) {
                    // 0x1802830e0
                    v69 = (int32_t)v67 < 1 ? v69 : v70;
                    v70 += a3;
                    v68 = v69;
                }
            }
            int64_t v71 = v68;
            int64_t v72 = v67; // 0x180283106
            int64_t v73; // 0x180282ff0
            char * v74; // 0x180283110
            unsigned char v75; // 0x180283110
            char * v76; // 0x180283113
            int64_t v77; // 0x180283120
            if (v71 != v66) {
                // 0x180283108
                v73 = v66;
                v77 = a3;
                v74 = (char *)v73;
                v75 = *v74;
                v76 = (char *)(v71 - v66 + v73);
                *v76 = v75;
                *v74 = *v76;
                v77--;
                v73++;
                while (v77 != 0) {
                    // 0x180283110
                    v74 = (char *)v73;
                    v75 = *v74;
                    v76 = (char *)(v71 - v66 + v73);
                    *v76 = v75;
                    *v74 = *v76;
                    v77--;
                    v73++;
                }
                // 0x180283126
                v72 = v75;
            }
            int64_t v78 = v66 - a3; // 0x180283126
            v12 = v17;
            while (v78 > v14) {
                // 0x1802830d2
                v66 = v78;
                v67 = v72;
                v68 = v14;
                if (v65 <= v66) {
                    // 0x1802830e0
                    v69 = v14;
                    v70 = v65;
                    v69 = (int32_t)v67 < 1 ? v69 : v70;
                    v70 += a3;
                    v68 = v69;
                    while (v70 <= v66) {
                        // 0x1802830e0
                        v69 = (int32_t)v67 < 1 ? v69 : v70;
                        v70 += a3;
                        v68 = v69;
                    }
                }
                // 0x1802830fd
                v71 = v68;
                v72 = v67;
                if (v71 != v66) {
                    // 0x180283108
                    v73 = v66;
                    v77 = a3;
                    v74 = (char *)v73;
                    v75 = *v74;
                    v76 = (char *)(v71 - v66 + v73);
                    *v76 = v75;
                    *v74 = *v76;
                    v77--;
                    v73++;
                    while (v77 != 0) {
                        // 0x180283110
                        v74 = (char *)v73;
                        v75 = *v74;
                        v76 = (char *)(v71 - v66 + v73);
                        *v76 = v75;
                        *v74 = *v76;
                        v77--;
                        v73++;
                    }
                    // 0x180283126
                    v72 = v75;
                }
                // 0x180283126
                v78 = v66 - a3;
                v12 = v17;
            }
        }
        goto lab_0x180283133;
    }
    // 0x180283368
    return function_18026ad50((int64_t)g731);
  lab_0x180283133:;
    int64_t v79 = v12 - 1; // 0x180283133
    if (v79 < 0) {
        return function_18026ad50((int64_t)g731);
    }
    int64_t v80 = 8 * v79; // 0x180283142
    v7 = v79;
    v8 = *(int64_t *)(v80 + v5);
    v9 = *(int64_t *)(v80 + v6);
    goto lab_0x1802830b0_2;
  lab_0x1802830b0:
    // 0x1802830b0
    goto lab_0x1802830b0_2;
  lab_0x18028330c:
    // 0x18028330c
    v12 = v13;
    v7 = v13;
    v8 = v11;
    v9 = v10;
    if (v10 <= v11) {
        goto lab_0x180283133;
    } else {
        goto lab_0x1802830b0;
    }
}

// Address range: 0x180283390 - 0x180283404
int64_t function_180283390(int64_t a1) {
    // 0x180283390
    int64_t v1; // 0x180283390
    int128_t v2; // 0x180283390
    if (a1 == 0) {
        // 0x18028339e
        int64_t v3; // 0x180283390
        int64_t v4; // 0x180283390
        *(int32_t *)function_180279918(a1, v1, v4, v3) = 22;
        int64_t result = function_180271814(a1, v1, v4, v3); // 0x1802833a9
        __asm_xorps(v2, v2);
        // 0x1802833fe
        return result;
    }
    // 0x1802833b3
    int64_t v5; // bp-40, 0x180283390
    function_1802718b0(&v5, v1);
    int64_t v6 = a1; // bp-56, 0x1802833cb
    int64_t v7 = __asm_movsd_17(__asm_xorps(v2, v2)); // 0x1802833d5
    int64_t v8; // bp-32, 0x180283390
    int64_t v9 = function_180279bec(&v8, &v6, &v7); // 0x1802833e0
    __asm_movsd(v7);
    int64_t result2 = v9; // 0x1802833f0
    char v10; // 0x180283390
    if (v10 != 0) {
        // 0x1802833f2
        result2 = v5;
        int32_t * v11 = (int32_t *)(result2 + 936); // 0x1802833f7
        *v11 = *v11 & -3;
    }
    // 0x1802833fe
    return result2;
}

// Address range: 0x180283404 - 0x18028340b
int64_t function_180283404(int64_t a1) {
    // 0x180283404
    return function_180283390(a1);
}

// Address range: 0x180283940 - 0x180284146
int64_t function_180283940(int128_t a1) {
    int128_t v1 = a1; // 0x18028394b
    if ((g1300 & 3) == 3) {
        v1 = function_180292390();
    }
    int128_t v2 = v1;
    uint64_t v3 = __asm_movsd_17(v2); // 0x18028396f
    int128_t v4 = __asm_movaps(v2); // 0x180283983
    int64_t v5 = v3 / 0x10000000000000; // 0x180283986
    int128_t v6; // 0x180283940
    uint64_t v7 = __asm_movsd_17(v6); // 0x18028398d
    uint64_t v8 = __asm_movq_20(v6); // 0x1802839a8
    uint64_t v9 = v7 / 0x10000000000000; // 0x1802839ad
    int128_t v10; // 0x180283940
    uint64_t v11 = __asm_movaps_19(v10); // 0x1802839b4
    int64_t v12 = __asm_movsd_17(v2); // 0x1802839ba
    int128_t v13 = __asm_movaps(v6); // 0x1802839c3
    int64_t v14; // 0x180283940
    int64_t v15; // 0x180283940
    if ((int32_t)v5 >= 2047) {
        goto lab_0x1802839ee;
    } else {
        // 0x1802839ce
        v15 = v12;
        v14 = 0;
        if (((int32_t)v9 & 2047) >= 1086) {
            goto lab_0x1802839ee;
        } else {
            goto lab_0x180283cac;
        }
    }
  lab_0x1802839ee:;
    uint64_t v16 = 2 * v8; // 0x1802839ee
    int64_t v17 = __asm_movq_20(v4);
    int64_t v18; // 0x180283940
    int64_t result7; // 0x180283940
    if (v16 < 0xffe0000000000000) {
        int64_t v19 = 2 * v17; // 0x180283aca
        int64_t v20 = v19 - 1; // 0x180283ace
        int64_t result; // 0x180283940
        if (v20 >= 0xffdfffffffffffff) {
            int128_t v21 = __asm_mulsd_22(v4, v4); // 0x180283adb
            int128_t v22 = v21; // 0x180283ae2
            int64_t result2 = v20; // 0x180283ae2
            int64_t v23 = 0; // 0x180283ae2
            if (v17 <= 0xffffffffffffffff) {
                uint64_t v24 = v8 / 0x10000000000000; // 0x180283ae7
                int64_t v25 = (v24 & 2047) + 0xfffffc01; // 0x180283af2
                v22 = v21;
                result2 = v25 & 0xffffffff;
                v23 = 0;
                if ((int32_t)v25 < 53) {
                    int64_t v26 = 1 << (51 - v24 & 63);
                    int64_t v27 = v26 - 1; // 0x180283b12
                    v22 = v21;
                    result2 = v27;
                    v23 = 0;
                    if ((v26 & v8) != 0 && (v27 & v8) == 0) {
                        // 0x180283b20
                        v22 = __asm_xorps(v21, g252);
                        result2 = v27;
                        v23 = 1;
                    }
                }
            }
            // 0x180283b2a
            int128_t v28; // 0x180283940
            if (v19 != 0) {
                // 0x180283b41
                v28 = v22;
                if (v8 <= 0xffffffffffffffff) {
                    // 0x180283b46
                    v28 = __asm_movsd(__asm_movsd_17(__asm_divsd(__asm_movsd(0x3ff0000000000000), v22)));
                }
            } else {
                // 0x180283b2f
                v28 = v22;
                if (v8 <= 0xffffffffffffffff) {
                    // 0x180283b34
                    result = function_180292b50(v23);
                    // 0x18028412d
                    __asm_movaps((int128_t)v11);
                    return result;
                }
            }
            // 0x180283b64
            __asm_movaps(v28);
            // 0x18028412d
            __asm_movaps((int128_t)v11);
            return result2;
        }
        int64_t v29 = v5; // 0x180283b79
        int64_t v30 = v17; // 0x180283b79
        int64_t v31 = 0; // 0x180283b79
        if (v17 <= 0xffffffffffffffff) {
            uint64_t v32 = v8 / 0x10000000000000; // 0x180283b7e
            uint32_t v33 = (int32_t)v32 & 2047; // 0x180283b87
            int64_t result3; // 0x180283c0b
            if (v33 < 1023) {
                // 0x180283c0b
                result3 = function_180292bb0();
                // 0x18028412d
                __asm_movaps((int128_t)v11);
                return result3;
            }
            int64_t v34 = 0; // 0x180283b95
            if (v33 < 1076) {
                int64_t v35 = 1 << (51 - v32 & 63);
                if ((v35 - 1 & v8) != 0) {
                    // 0x180283c0b
                    result3 = function_180292bb0();
                    // 0x18028412d
                    __asm_movaps((int128_t)v11);
                    return result3;
                }
                // 0x180283bb2
                v34 = (v35 & v8) == 0 ? 0 : 0x80000;
            }
            // 0x180283bbd
            v31 = v34;
            v29 = v5 & 2047;
            v30 = v17 & 0x7fffffffffffffff;
        }
        int64_t v36 = v9 & 2047; // 0x180283bd6
        int64_t v37 = v36 + 0xfffffc42; // 0x180283bdd
        if ((int32_t)v37 < 128) {
            // 0x180283c79
            v15 = v30;
            v14 = v31;
            if (v29 == 0) {
                int128_t v38 = __asm_mulsd(__asm_movsd(__asm_movsd_17(v4)), 0x4330000000000000); // 0x180283c99
                v15 = (__asm_movq_20(v38) & 0x7fffffffffffffff) - 0x340000000000000;
                v14 = v31;
            }
            goto lab_0x180283cac;
        } else {
            int64_t v39 = v37 & 0xffffffff; // 0x180283bdd
            result7 = v39;
            if (v30 != 0x3ff0000000000000) {
                if ((int32_t)v36 >= 958) {
                    if (v30 >= 0x3ff0000000000001 != (int32_t)v9 < 2048) {
                        // 0x180283c6f
                        result = function_180292c40(0);
                    } else {
                        // 0x180283c65
                        result = function_180292bf0(0);
                    }
                } else {
                    if (v30 > 0x3ff0000000000000) {
                        // 0x180283c23
                        __asm_movaps(__asm_addsd(v13, 0x3ff0000000000000));
                        result = v39;
                    } else {
                        // 0x180283c35
                        __asm_movaps(__asm_subsd_21(__asm_movsd(0x3ff0000000000000), v13));
                        result = v39;
                    }
                }
                // 0x18028412d
                __asm_movaps((int128_t)v11);
                return result;
            }
            goto lab_0x180283bfe;
        }
    } else {
        // 0x180283a09
        v18 = v17;
        if (v16 != 0) {
            if (v17 != 0x3ff0000000000000) {
                int64_t result4 = 2 * v17; // 0x180283a65
                if (v16 > 0xffe0000000000000 || result4 > 0xffe0000000000000) {
                    // 0x180283ab8
                    __asm_movaps(__asm_addsd_23(v4, v13));
                    // 0x18028412d
                    __asm_movaps((int128_t)v11);
                    return result4;
                }
                // 0x180283a7c
                result7 = 0x7fe0000000000000;
                if (result4 != 0x7fe0000000000000) {
                    if (((int32_t)(v8 / 0x8000000000000000) ^ 1) != (int32_t)(result4 < 0x7fe0000000000000)) {
                        // 0x180283aaa
                        __asm_movaps(__asm_mulsd_22(v13, v13));
                    } else {
                        // 0x180283aa2
                        __asm_xorps(v2, v2);
                    }
                    // 0x18028412d
                    __asm_movaps((int128_t)v11);
                    return result4;
                }
                goto lab_0x180283bfe;
            } else {
                // 0x180283a5e
                v18 = __asm_movq_20(v13);
                goto lab_0x180283a13;
            }
        } else {
            goto lab_0x180283a13;
        }
    }
  lab_0x180283cac:;
    // 0x180283cac
    int128_t v40; // 0x180283940
    int64_t v41 = __asm_movaps_19(v40); // 0x180283cac
    int128_t v42; // 0x180283940
    int64_t v43 = __asm_movaps_19(v42); // 0x180283cbb
    int128_t v44; // 0x180283940
    int64_t v45 = __asm_movaps_19(v44); // 0x180283ccd
    int128_t v46; // 0x180283940
    int64_t v47 = __asm_movaps_19(v46); // 0x180283ce0
    int64_t v48 = v15 - 0x3fe6955500000000; // 0x180283ce6
    int128_t v49; // 0x180283940
    int64_t v50 = __asm_movaps_19(v49); // 0x180283ce9
    int128_t v51; // 0x180283940
    int64_t v52 = __asm_movaps_19(v51); // 0x180283cf2
    __asm_xorps(v51, v51);
    int128_t v53; // 0x180283940
    int64_t v54 = __asm_movaps_19(v53); // 0x180283cff
    int128_t v55 = __asm_movsd(0x3ff0000000000000); // 0x180283d05
    int64_t v56 = v15 - (v48 & -0x10000000000000); // 0x180283d0e
    int128_t v57; // 0x180283940
    int64_t v58 = __asm_movaps_19(v57); // 0x180283d14
    int128_t v59 = __asm_movq(v56); // 0x180283d34
    int64_t v60 = v48 / 0x10000000000 & 4064; // 0x180283d39
    int128_t v61 = __asm_cvtsi2sd_68((int32_t)(v48 / 0x10000000000000)); // 0x180283d3d
    int128_t v62 = __asm_movsd(*(int64_t *)(v60 + 0x1802f9258)); // 0x180283d49
    int128_t v63 = __asm_movq(v56 + 0x80000000 & -0x100000000); // 0x180283d52
    int128_t v64 = __asm_movaps(v63); // 0x180283d57
    int128_t v65 = __asm_subsd_21(v59, v63); // 0x180283d5a
    int128_t v66 = __asm_mulsd_22(v64, v62); // 0x180283d5f
    int128_t v67 = __asm_mulsd(__asm_movaps(v61), 0x3fe62e42fefa3800); // 0x180283d67
    int128_t v68 = __asm_mulsd(v61, 0x3d2ef35793c76730); // 0x180283d6f
    int128_t v69 = __asm_mulsd_22(v65, v62); // 0x180283d78
    int128_t v70 = __asm_subsd_21(v66, v55); // 0x180283d7d
    int128_t v71 = __asm_addsd(v67, *(int64_t *)(v60 + 0x1802f9268)); // 0x180283d82
    int128_t v72 = __asm_addsd(v68, *(int64_t *)(v60 + 0x1802f9270)); // 0x180283d8b
    int128_t v73 = __asm_movaps(v69); // 0x180283d95
    int128_t v74 = __asm_mulsd(__asm_movaps(v70), -0x4020000000000000); // 0x180283d9c
    int128_t v75 = __asm_addsd_23(v73, v70); // 0x180283da4
    int128_t v76 = __asm_addsd_23(__asm_movaps(v71), v75); // 0x180283dac
    int128_t v77 = __asm_mulsd_22(__asm_movaps(v74), v70); // 0x180283db4
    int128_t v78 = __asm_mulsd(__asm_movaps(v75), -0x4020000000000000); // 0x180283dbb
    int128_t v79 = __asm_mulsd(__asm_movaps(v75), 0x3ff0002b8b263fc3); // 0x180283dc7
    int128_t v80 = __asm_subsd_21(v71, v76); // 0x180283dd0
    int128_t v81 = __asm_movaps(v75); // 0x180283dd5
    int128_t v82 = __asm_movaps(v77); // 0x180283dd8
    int128_t v83 = __asm_mulsd(v81, -0x401aaaaaaad65b86); // 0x180283ddc
    int128_t v84 = __asm_addsd_23(v82, v76); // 0x180283de4
    int128_t v85 = __asm_movaps(v78); // 0x180283de9
    int128_t v86 = __asm_addsd_23(v74, v78); // 0x180283dec
    int128_t v87 = __asm_addsd(v79, -0x400db6a464b7ba17); // 0x180283df0
    int128_t v88 = __asm_mulsd_22(v85, v75); // 0x180283df9
    int128_t v89 = __asm_addsd_23(v80, v75); // 0x180283dfd
    int128_t v90 = __asm_addsd(v83, 0x3fe999999959554e); // 0x180283e01
    int128_t v91 = __asm_mulsd_22(v86, v69); // 0x180283e09
    int128_t v92 = __asm_subsd_21(v76, v84); // 0x180283e0e
    int128_t v93 = __asm_mulsd_22(v87, v88); // 0x180283e13
    int128_t v94 = __asm_addsd_23(v72, v89); // 0x180283e18
    int128_t v95 = __asm_addsd_23(v92, v77); // 0x180283e1d
    int128_t v96 = __asm_addsd_23(v93, v90); // 0x180283e22
    int128_t v97 = __asm_mulsd(__asm_movaps(v75), 0x3fe0000000000006); // 0x180283e2a
    int128_t v98 = __asm_addsd_23(v94, v91); // 0x180283e32
    int128_t v99 = __asm_mulsd_22(v96, v88); // 0x180283e37
    int128_t v100 = __asm_addsd(v97, -0x401aaaaaaaaaaaa0); // 0x180283e3c
    int128_t v101 = __asm_mulsd_22(v88, v75); // 0x180283e44
    int128_t v102 = __asm_addsd_23(__asm_mulsd_22(__asm_addsd_23(v99, v100), v101), __asm_addsd_23(v98, v95)); // 0x180283e57
    int128_t v103 = __asm_addsd_23(__asm_movaps(v102), v84); // 0x180283e60
    __asm_movaps((int128_t)v52);
    int128_t v104 = __asm_subsd_21(v84, v103); // 0x180283e6b
    __asm_movaps((int128_t)v50);
    __asm_movaps((int128_t)v45);
    __asm_movaps((int128_t)v43);
    int64_t v105 = __asm_movsd_17(v103); // 0x180283e8e
    int128_t v106 = __asm_addsd_23(v104, v102); // 0x180283e9f
    __asm_movaps((int128_t)v47);
    int128_t v107 = __asm_movq(v8 & -0x8000000); // 0x180283eb0
    int128_t v108 = __asm_movq(v105 & -0x8000000); // 0x180283eb5
    int128_t v109 = __asm_subsd_21(v103, v108); // 0x180283eba
    int128_t v110 = __asm_mulsd_22(__asm_movaps(v108), v107); // 0x180283ec1
    int128_t v111 = __asm_addsd_23(v106, v109); // 0x180283ec5
    int64_t v112 = __asm_movsd_17(v110) / 0x10000000000000 & 2047; // 0x180283edf
    int128_t v113 = __asm_mulsd_22(v111, v13); // 0x180283ee6
    int128_t v114 = __asm_subsd_21(v13, v107); // 0x180283eeb
    int64_t v115 = v112 + 0xfffffc37; // 0x180283ef0
    int128_t v116 = __asm_addsd_23(v113, __asm_mulsd_22(v114, v108)); // 0x180283efc
    int32_t v117 = v115; // 0x180283f01
    int64_t v118 = v112; // 0x180283f04
    int64_t result6; // 0x180283940
    int128_t v119; // 0x180283940
    if (v117 < 63) {
        goto lab_0x180283f60;
    } else {
        if (v117 > -1) {
            // 0x180283f24
            v118 = 0;
            if ((int32_t)v112 < 1033) {
                goto lab_0x180283f60;
            } else {
                int32_t v120 = v14;
                if (__asm_movsd_17(v110) > -1) {
                    int64_t v121 = function_180292bf0(v120); // 0x180283f50
                    v119 = __asm_movaps(v107);
                    result6 = v121;
                } else {
                    int128_t v122 = function_180292c40(v120); // 0x180283f43
                    v119 = __asm_movaps(v122);
                    result6 = v122;
                }
                goto lab_0x180284116;
            }
        } else {
            int64_t v123 = v115 & 0xffffffff; // 0x180283ef0
            int128_t v124 = __asm_addsd_23(v110, v55); // 0x180283f0a
            v119 = v124;
            result6 = v123;
            if ((int32_t)v14 != 0) {
                // 0x180283f18
                v119 = __asm_xorps(v124, g252);
                result6 = v123;
            }
            goto lab_0x180284116;
        }
    }
  lab_0x180283a13:;
    int64_t result5 = 2 * v18 ^ 0x10000000000000; // 0x180283a2a
    if (result5 < 0xfff0000000000001) {
        // 0x180283a3f
        __asm_movaps(__asm_movsd(0x3ff0000000000000));
    } else {
        // 0x180283a32
        __asm_movaps(__asm_addsd_23(v4, v13));
    }
    // 0x18028412d
    __asm_movaps((int128_t)v11);
    return result5;
  lab_0x180283f60:;
    int128_t v125 = __asm_addsd(__asm_mulsd(__asm_movaps(v110), 0x40771547652b82fe), 0x4238000000008000); // 0x180283f6e
    uint64_t v126 = __asm_movsd_17(v125); // 0x180283f76
    __asm_xorps(v125, v125);
    uint64_t v127 = v126 / 0x10000; // 0x180283f8a
    int64_t v128 = 2 * v127 & 510; // 0x180283f94
    int128_t v129 = __asm_cvtsi2sd_68((int32_t)v127); // 0x180283f9b
    int64_t v130 = 8 * v128; // 0x180283f9f
    int64_t v131 = 0x100000000000 * (v127 + v14) + *(int64_t *)(v130 + 0x1802f8218); // 0x180283f9f
    int128_t v132 = __asm_movaps(v129); // 0x180283fa7
    int128_t v133 = __asm_mulsd(v129, 0x3d2c610ca86c3899); // 0x180283faa
    int128_t v134 = __asm_addsd_23(__asm_addsd_23(__asm_mulsd(v132, -0x4099d1bd01040000), v110), v133); // 0x180283fbe
    int128_t v135 = __asm_movsd(*(int64_t *)(v130 + 0x1802f8210)); // 0x180283fc2
    int128_t v136 = __asm_addsd_23(v134, v116); // 0x180283fcb
    int128_t v137 = __asm_addsd_23(v135, v136); // 0x180283fd0
    int128_t v138 = __asm_mulsd(__asm_movaps(v136), 0x3fc555555555543c); // 0x180283fd7
    int128_t v139 = __asm_mulsd_22(__asm_movaps(v136), v136); // 0x180283fe2
    int128_t v140 = __asm_mulsd(v136, 0x3f81111167a4b553); // 0x180283fe6
    int128_t v141 = __asm_addsd(v138, 0x3fdffffffffffdbd); // 0x180283fee
    int128_t v142 = __asm_addsd(v140, 0x3fa55555cf16e1ed); // 0x180283ff6
    int128_t v143 = __asm_mulsd_22(v141, v139); // 0x180283ffe
    int128_t v144 = __asm_addsd_23(__asm_addsd_23(v143, v137), __asm_mulsd_22(v142, __asm_mulsd_22(v139, v139))); // 0x18028400e
    if (v118 != 0) {
        int128_t v145 = __asm_movq(v131); // 0x180284109
        v119 = __asm_addsd_23(__asm_mulsd_22(v144, v145), v145);
        result6 = v128;
    } else {
        if ((v126 & 0x800000000000) != 0) {
            uint64_t v146 = v131 + 0x3fe0000000000000; // 0x18028405c
            int128_t v147 = __asm_movq(v146); // 0x18028405f
            int128_t v148 = __asm_movaps(v147); // 0x180284064
            int128_t v149 = __asm_mulsd_22(__asm_movaps(v147), v144); // 0x18028406a
            int128_t v150 = __asm_movsd(0x10000000000000); // 0x18028406e
            int128_t v151 = __asm_addsd_23(v148, v149); // 0x180284076
            __asm_comisd(v55, __asm_andps(__asm_movaps(v151), g477));
            int128_t v152 = v151; // 0x180284089
            if (v146 >= 0x3fe0000000000000) {
                int128_t v153 = __asm_xorps(v89, v89); // 0x18028408b
                __asm_comisd(v153, v151);
                int128_t v154 = __asm_movsd(-0x4010000000000000); // 0x180284094
                int128_t v155 = __asm_subsd_21(v147, v151); // 0x18028409d
                int128_t v156 = __asm_addsd_23(__asm_movaps(v154), v151); // 0x1802840a5
                int128_t v157 = __asm_movaps(v154); // 0x1802840a9
                int128_t v158 = __asm_addsd_23(v155, v149); // 0x1802840ad
                int128_t v159 = __asm_addsd_23(__asm_movaps(v158), __asm_addsd_23(__asm_subsd_21(v157, v156), v151)); // 0x1802840bc
                v152 = __asm_subsd_21(__asm_addsd_23(v159, v156), v154);
                __asm_ucomisd_67(v152, v153);
                __asm_movsd_17(__asm_mulsd_22(__asm_movsd(__asm_movsd_17(v150)), v150));
            }
            int128_t v160 = __asm_movaps(__asm_mulsd_22(v152, v150)); // 0x1802840fc
            int64_t v161 = function_180292b20(v160); // 0x1802840ff
            v119 = __asm_movaps(v160);
            result6 = v161;
        } else {
            int128_t v162 = __asm_movq(v131 - 0x3f10000000000000); // 0x18028402d
            int128_t v163 = __asm_mulsd(__asm_addsd_23(__asm_mulsd_22(__asm_movaps(v162), v144), v162), 0x7f00000000000000); // 0x18028403d
            int64_t v164 = function_180292ae0(v163); // 0x180284045
            v119 = __asm_movaps(v163);
            result6 = v164;
        }
    }
    goto lab_0x180284116;
  lab_0x180283bfe:
    // 0x180283bfe
    __asm_movsd(0x3ff0000000000000);
    // 0x18028412d
    __asm_movaps((int128_t)v11);
    return result7;
  lab_0x180284116:
    // 0x180284116
    __asm_movaps((int128_t)v58);
    __asm_movaps(v119);
    __asm_movaps((int128_t)v54);
    __asm_movaps((int128_t)v41);
    // 0x18028412d
    __asm_movaps((int128_t)v11);
    return result6;
}

// Address range: 0x180284150 - 0x180284309
int64_t function_180284150(void) {
    // 0x180284150
    int128_t v1; // 0x180284150
    int32_t v2 = __asm_movd_48(v1); // 0x180284150
    uint32_t v3 = v2 & 0x7fffffff; // 0x180284154
    if (v3 >= 0x7f800000) {
        int32_t v4 = __asm_movd_48(v1); // 0x1802842ed
        switch (v4) {
            case 0x7f800000: {
                // 0x180284308
                return 0x7f800000;
            }
            case -0x800000: {
                // 0x1802842da
                __asm_movaps(g538);
                return _log_special();
            }
        }
        uint32_t result = v4 | 0x400000;
        __asm_movd(result);
        // 0x180284308
        return result;
    }
    // 0x180284163
    int128_t v5; // 0x180284150
    __asm_comiss(v1, __asm_xorps(v5, v5));
    if (v3 < 0x7f800001) {
        if (v3 == 0x7f800000) {
            // 0x1802842c7
            __asm_movaps(g537);
            return _log_special();
        }
        // 0x1802842da
        __asm_movaps(g538);
        return _log_special();
    }
    bool v6; // 0x180284150
    int64_t result2; // 0x180284150
    int128_t v7; // 0x180284150
    int128_t v8 = __asm_movd(v3 / 0x800000 - 127); // 0x180284185
    v6 = v3 < 0x3f800000;
    result2 = v2 & 0x7fffff;
    v7 = __asm_cvtdq2ps(v8);
    int128_t v9 = __asm_subps(__asm_movaps(v1), g535); // 0x18028418f
    __asm_comiss(__asm_andps(v9, g539), g544);
    if (v6) {
        int128_t v10 = __asm_movaps(g536); // 0x180284240
        int128_t v11 = __asm_subss(v1, (int32_t)g535); // 0x180284247
        int128_t v12 = __asm_divss(__asm_movaps(v11), __asm_addss_34(v10, v11)); // 0x180284256
        int128_t v13 = __asm_mulss_35(__asm_movaps(v11), v12); // 0x18028425d
        int128_t v14 = __asm_addss_34(v12, v12); // 0x180284261
        int128_t v15 = __asm_movaps(v14); // 0x180284265
        int128_t v16 = __asm_mulss_35(v15, v15); // 0x180284268
        int128_t v17 = __asm_mulss_35(__asm_movaps(v14), v16); // 0x18028426f
        int128_t v18 = __asm_mulss(v16, *(int32_t *)&g540); // 0x180284273
        __asm_addss_34(v11, __asm_subss_36(__asm_mulss_35(__asm_addss(v18, 0x3daaaaab), v17), v13));
        return result2;
    }
    uint32_t v19 = (int32_t)result2; // 0x1802841aa
    int128_t v20 = __asm_movd(v19 | 0x3f000000); // 0x1802841b2
    uint32_t result3 = v19 / 0x10000 + (int32_t)((int16_t)result2 < 0); // 0x1802841b9
    int128_t v21 = __asm_subss_36(__asm_movd(0x10000 * result3 | 0x3f000000), v20); // 0x1802841d2
    int64_t v22 = 4 * result3; // 0x1802841d6
    int128_t v23 = __asm_mulss(v21, *(int32_t *)(v22 + (int64_t)&g594)); // 0x1802841d6
    int128_t v24 = __asm_movaps(v23); // 0x1802841dc
    int128_t v25 = __asm_movaps(v23); // 0x1802841df
    int128_t v26 = __asm_mulss(v24, *(int32_t *)&g543); // 0x1802841e2
    int128_t v27 = __asm_mulss_35(v25, v23); // 0x1802841ea
    int128_t v28 = __asm_addss(v26, 0x3f000000); // 0x1802841ee
    int128_t v29 = __asm_movaps(g542); // 0x1802841f6
    int128_t v30 = __asm_mulss_35(v28, v27); // 0x18028420b
    int128_t v31 = __asm_mulss_35(v29, v7); // 0x18028420f
    int128_t v32 = __asm_addss_34(v23, v30); // 0x180284213
    int128_t v33 = __asm_movaps(g541); // 0x180284217
    int128_t v34 = __asm_subss_36(v31, v32); // 0x18028421e
    int128_t v35 = __asm_mulss_35(v33, v7); // 0x180284222
    int128_t v36 = __asm_addss(v34, *(int32_t *)(v22 + (int64_t)&g593)); // 0x180284226
    int32_t v37 = *(int32_t *)(v22 + (int64_t)&g592); // 0x18028422c
    __asm_addss_34(__asm_addss(v35, v37), v36);
    return result3;
}

// Address range: 0x180284310 - 0x1802844dc
int64_t function_180284310(int128_t a1) {
    // 0x180284310
    if (g1300 == 0) {
        function_180284150();
    }
    int32_t v1 = __asm_vmovd(a1); // 0x18028431d
    uint32_t v2 = v1 & 0x7fffffff; // 0x180284321
    if (v2 >= 0x7f800000) {
        int32_t v3 = __asm_vmovd(a1); // 0x1802844b4
        switch (v3) {
            case 0x7f800000: {
                // 0x1802844db
                return 0x7f800000;
            }
            case -0x800000: {
                // 0x1802844a0
                __asm_vmovaps(g538);
                return _log_special();
            }
        }
        // 0x1802844c6
        __asm_vmovd_49(v3 | 0x400000);
        return _log_special();
    }
    // 0x180284330
    int128_t v4; // 0x180284310
    __asm_vcomiss(a1, __asm_vxorps(v4, v4));
    if (v2 < 0x7f800001) {
        if (v2 == 0x7f800000) {
            // 0x18028448c
            __asm_vmovaps(g537);
            return _log_special();
        }
        // 0x1802844a0
        __asm_vmovaps(g538);
        return _log_special();
    }
    int32_t v5; // 0x180284310
    bool v6; // 0x180284310
    int64_t result; // 0x180284310
    int128_t v7; // 0x180284310
    int128_t v8 = __asm_vcvtdq2ps(__asm_vmovd_49(v2 / 0x800000 - 127)); // 0x180284358
    v5 = *(int32_t *)&g535;
    v6 = v2 < 0x3f800000;
    result = v1 & 0x7fffff;
    v7 = v8;
    // 0x18028435c
    __asm_vcomiss(__asm_vandps(__asm_vsubss_74(a1, v5), g539), g544);
    if (v6) {
        int128_t v9 = __asm_vmovaps(g536); // 0x180284400
        int128_t v10 = __asm_vsubss_74(a1, v5); // 0x180284408
        int128_t v11 = __asm_vdivss(v10, __asm_vaddss_57(v9, v10)); // 0x180284414
        int128_t v12 = __asm_vmulss_56(v10, v11); // 0x180284418
        int128_t v13 = __asm_vaddss_57(v11, v11); // 0x18028441c
        int128_t v14 = __asm_vmulss_56(v13, v13); // 0x180284420
        int128_t v15 = __asm_vmulss_56(v13, v14); // 0x180284424
        int128_t v16 = __asm_vfmadd213ss(v14, __asm_vmovaps(g540), 0x3daaaaab); // 0x180284430
        __asm_vaddss_57(v10, __asm_vfmsub213ss_75(v16, v15, v12));
        return result;
    }
    uint32_t v17 = (int32_t)result; // 0x18028437a
    int128_t v18 = __asm_vmovd_49(v17 | 0x3f000000); // 0x180284382
    uint32_t result2 = v17 / 0x10000 + (int32_t)((int16_t)result < 0); // 0x180284389
    int128_t v19 = __asm_vsubss(__asm_vmovd_49(0x10000 * result2 | 0x3f000000), v18); // 0x1802843a2
    int64_t v20 = 4 * result2; // 0x1802843a6
    int128_t v21 = __asm_vmulss(v19, *(int32_t *)(v20 + (int64_t)&g594)); // 0x1802843a6
    int128_t v22 = __asm_vfmadd213ss(__asm_vmovaps(g543), v21, 0x3f000000); // 0x1802843b4
    int128_t v23 = __asm_vmulss_56(v21, v21); // 0x1802843bd
    int128_t v24 = __asm_vmovaps(g542); // 0x1802843c1
    int128_t v25 = __asm_vfmsub213ss_75(v24, v7, __asm_vfmadd231ss(v21, v22, v23)); // 0x1802843dc
    int128_t v26 = __asm_vmovaps(g541); // 0x1802843e1
    int32_t v27 = *(int32_t *)(v20 + (int64_t)&g592); // 0x1802843e9
    int128_t v28 = __asm_vfmadd213ss(v26, v7, v27); // 0x1802843e9
    int32_t v29 = *(int32_t *)(v20 + (int64_t)&g593); // 0x1802843ef
    __asm_vaddss_57(v28, __asm_vaddss(v25, v29));
    return result2;
}

// Address range: 0x180284570 - 0x180284bb4
int64_t function_180284570(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 312); // 0x1802845a1
    int64_t v2 = *v1; // 0x1802845a1
    int64_t v3 = a1; // bp-88, 0x1802845ac
    int128_t v4; // 0x180284570
    int128_t v5; // 0x180284570
    __asm_movups(v5, __asm_xorps(v4, v4));
    if (v2 == 0) {
        int64_t * v6 = (int64_t *)(a1 + 256); // 0x180284b37
        int64_t v7 = *v6; // 0x180284b37
        if (v7 != 0) {
            int32_t * v8 = (int32_t *)v7; // 0x180284b43
            *v8 = *v8 - 1;
        }
        // 0x180284b46
        *v6 = 0;
        *(int64_t *)a1 = (int64_t)&g545;
        *(int64_t *)(a1 + 272) = (int64_t)&g546;
        *(int64_t *)(a1 + 280) = (int64_t)&g547;
        *(int64_t *)(a1 + 264) = 0;
        *(int32_t *)(a1 + 8) = 1;
        // 0x180284b83
        return function_18026ad50((int64_t)g731);
    }
    int64_t v9 = a1 + 12; // 0x1802845d7
    int32_t * CodePage = (int32_t *)v9; // 0x1802845e3
    int64_t v10; // 0x180284570
    int64_t v11; // 0x180284570
    int64_t v12; // 0x180284570
    int64_t v13; // 0x180284570
    int64_t v14; // 0x180284570
    int64_t v15; // 0x180284570
    int32_t * v16; // 0x180284570
    if (*CodePage != 0) {
        goto lab_0x180284607;
    } else {
        int64_t v17 = function_180292ddc(&v3, 0, v2, 0x1004, v9); // 0x1802845fa
        v13 = 0x1004;
        v16 = NULL;
        v15 = 0;
        v14 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        if ((int32_t)v17 != 0) {
            goto lab_0x180284b07;
        } else {
            goto lab_0x180284607;
        }
    }
  lab_0x180284607:;
    int64_t * v18 = _calloc_base(1, 4); // 0x18028460f
    function_18028acc0(0, 4);
    int64_t * v19 = _calloc_base(384, 2); // 0x18028462c
    int64_t v20 = (int64_t)v19; // 0x18028462c
    function_18028acc0(0, 2);
    int64_t * v21 = _calloc_base(384, 1); // 0x180284640
    int64_t v22 = (int64_t)v21; // 0x180284640
    function_18028acc0(0, 1);
    int64_t * v23 = _calloc_base(384, 1); // 0x180284654
    int64_t v24 = (int64_t)v23; // 0x180284654
    function_18028acc0(0, 1);
    int64_t * v25 = _calloc_base(257, 1); // 0x18028466b
    int64_t v26 = (int64_t)v25; // 0x18028466b
    function_18028acc0(0, 1);
    int64_t v27 = 0; // 0x18028467f
    int64_t v28 = v26; // 0x18028467f
    v16 = (int32_t *)v18;
    v15 = 1;
    v14 = v24;
    v10 = v26;
    v11 = v22;
    v12 = v20;
    if (v23 != NULL && v21 != NULL && v18 != NULL && v19 != NULL && v25 != NULL) {
        *(char *)v28 = (char)v27;
        int64_t v29 = v27 + 1; // 0x1802846b3
        v27 = v29 & 0xffffffff;
        v28++;
        while ((int32_t)v29 < 256) {
            // 0x1802846ae
            *(char *)v28 = (char)v27;
            v29 = v27 + 1;
            v27 = v29 & 0xffffffff;
            v28++;
        }
        // 0x1802846bc
        int128_t lpCPInfo; // bp-72, 0x180284570
        int64_t v30 = &lpCPInfo; // 0x1802846c0
        bool v31 = GetCPInfo(*CodePage, (struct _cpinfo *)&lpCPInfo); // 0x1802846c5
        v16 = (int32_t *)v18;
        v15 = v30;
        v14 = v24;
        v10 = v26;
        v11 = v22;
        v12 = v20;
        if (v31) {
            uint32_t v32 = (int32_t)lpCPInfo; // 0x1802846d3
            v16 = (int32_t *)v18;
            v15 = v30;
            v14 = v24;
            v10 = v26;
            v11 = v22;
            v12 = v20;
            if (v32 < 6) {
                uint32_t v33 = v32 & 0xffff; // 0x1802846de
                char v34; // bp-66, 0x180284570
                if (v33 > 1) {
                    // 0x1802846eb
                    if (*CodePage != 0xfde9) {
                        // 0x18028470a
                        if (v34 != 0) {
                            int64_t v35 = &v34; // 0x180284737
                            char * v36 = (char *)(v35 + 1); // 0x180284715
                            unsigned char v37 = *v36; // 0x180284715
                            while (v37 != 0) {
                                unsigned char v38 = *(char *)v35; // 0x18028471a
                                if (v38 <= v37) {
                                    int64_t v39 = v38;
                                    int64_t v40 = v39 + 1 & 0xffffffff; // 0x180284728
                                    *(char *)(0x100000000 * v39 / 0x100000000 + v26) = 32;
                                    while (v40 <= (int64_t)*v36) {
                                        // 0x180284725
                                        v39 = v40;
                                        v40 = v39 + 1 & 0xffffffff;
                                        *(char *)(0x100000000 * v39 / 0x100000000 + v26) = 32;
                                    }
                                }
                                // 0x180284737
                                v35 += 2;
                                if (*(char *)v35 == 0) {
                                    // break -> 0x18028473f
                                    return 0;
                                }
                                v36 = (char *)(v35 + 1);
                                v37 = *v36;
                            }
                        }
                    } else {
                        // 0x1802846f4
                        int64_t v41; // bp-224, 0x180284570
                        function_18029db80(v26 + 128, (int64_t)&v41, 128, v13);
                    }
                }
                int32_t v42 = *CodePage; // 0x18028473f
                int64_t v43 = *v1; // 0x180284749
                char * v44 = (char *)(v26 + 1); // 0x180284774
                int64_t v45 = __acrt_LCMapStringA(NULL, v43, 256, v44, 255, (int16_t *)(v22 + 129), 255, (int64_t)v42, 0); // 0x180284774
                v16 = (int32_t *)v18;
                v15 = v43;
                v14 = v24;
                v10 = v26;
                v11 = v22;
                v12 = v20;
                if ((int32_t)v45 != 0) {
                    int32_t v46 = *CodePage; // 0x180284781
                    int64_t v47 = *v1; // 0x18028478b
                    int64_t v48 = __acrt_LCMapStringA(NULL, v47, 512, v44, 255, (int16_t *)(v24 + 129), 255, (int64_t)v46, 0); // 0x1802847b8
                    v16 = (int32_t *)v18;
                    v15 = v47;
                    v14 = v24;
                    v10 = v26;
                    v11 = v22;
                    v12 = v20;
                    if ((int32_t)v48 != 0) {
                        int64_t v49 = v20 + 256; // 0x1802847c8
                        int64_t v50 = function_180292fa4(0, 1, v26, 256, v49, (int64_t)*CodePage, 0); // 0x1802847e9
                        v16 = (int32_t *)v18;
                        v15 = 1;
                        v14 = v24;
                        v10 = v26;
                        v11 = v22;
                        v12 = v20;
                        if ((int32_t)v50 != 0) {
                            int64_t v51 = v20 + 254; // 0x1802847fb
                            *(int16_t *)v51 = 0;
                            *(char *)(v22 + 127) = 0;
                            *(char *)(v24 + 127) = 0;
                            int64_t v52 = v22 + 128; // 0x18028480a
                            *(char *)v52 = 0;
                            int64_t v53 = v24 + 128; // 0x180284811
                            *(char *)v53 = 0;
                            if (v33 > 1) {
                                // 0x180284820
                                if (*CodePage != 0xfde9) {
                                    // 0x180284878
                                    if (v34 != 0) {
                                        int64_t v54 = &v34; // 0x1802848ba
                                        char * v55 = (char *)(v54 + 1); // 0x180284883
                                        unsigned char v56 = *v55; // 0x180284883
                                        while (v56 != 0) {
                                            unsigned char v57 = *(char *)v54; // 0x180284888
                                            if (v57 <= v56) {
                                                int64_t v58 = v57; // 0x1802848b0
                                                int64_t v59 = 0x100000000 * v58;
                                                *(int16_t *)(v59 / 0x80000000 + v49) = -0x8000;
                                                char v60 = v58; // 0x1802848a1
                                                int64_t v61 = v59 / 0x100000000 + 128; // 0x1802848a1
                                                *(char *)(v61 + v22) = v60;
                                                *(char *)(v61 + v24) = v60;
                                                v58 = v58 + 1 & 0xffffffff;
                                                while (v58 <= (int64_t)*v55) {
                                                    // 0x180284893
                                                    v59 = 0x100000000 * v58;
                                                    *(int16_t *)(v59 / 0x80000000 + v49) = -0x8000;
                                                    v60 = v58;
                                                    v61 = v59 / 0x100000000 + 128;
                                                    *(char *)(v61 + v22) = v60;
                                                    *(char *)(v61 + v24) = v60;
                                                    v58 = v58 + 1 & 0xffffffff;
                                                }
                                            }
                                            // 0x1802848ba
                                            v54 += 2;
                                            if (*(char *)v54 == 0) {
                                                // break -> 0x1802848c2
                                                return 0;
                                            }
                                            v55 = (char *)(v54 + 1);
                                            v56 = *v55;
                                        }
                                    }
                                } else {
                                    int64_t v62 = 128; // 0x180284842
                                    int64_t v63 = v24 + 256; // 0x180284842
                                    int64_t v64 = v20 + 512; // 0x180284842
                                    *(int16_t *)v64 = (int32_t)v62 < 245 ? -0x8000 : 0;
                                    char v65 = v62; // 0x180284863
                                    *(char *)(v22 - v24 + v63) = v65;
                                    *(char *)v63 = v65;
                                    int64_t v66 = v62 + 1; // 0x180284869
                                    v62 = v66 & 0xffffffff;
                                    v63++;
                                    v64 += 2;
                                    while ((int32_t)v66 < 256) {
                                        // 0x180284848
                                        *(int16_t *)v64 = (int32_t)v62 < 245 ? -0x8000 : 0;
                                        v65 = v62;
                                        *(char *)(v22 - v24 + v63) = v65;
                                        *(char *)v63 = v65;
                                        v66 = v62 + 1;
                                        v62 = v66 & 0xffffffff;
                                        v63++;
                                        v64 += 2;
                                    }
                                }
                            }
                            int128_t v67 = __asm_movups_16(*(int128_t *)(v20 + 512)); // 0x1802848ce
                            int128_t v68 = __asm_movups_16(*(int128_t *)(v20 + 528)); // 0x1802848d1
                            int64_t v69 = v20 + 128; // 0x1802848d5
                            __asm_movups(*(int128_t *)v19, v67);
                            __asm_movups(*(int128_t *)(v20 + 16), v68);
                            int128_t v70 = __asm_movups_16(*(int128_t *)(v20 + 544)); // 0x1802848e2
                            int128_t v71 = __asm_movups_16(*(int128_t *)(v20 + 560)); // 0x1802848e6
                            __asm_movups(*(int128_t *)(v20 + 32), v70);
                            __asm_movups(*(int128_t *)(v20 + 48), v71);
                            int128_t v72 = __asm_movups_16(*(int128_t *)(v20 + 576)); // 0x1802848f4
                            int128_t v73 = __asm_movups_16(*(int128_t *)(v20 + 592)); // 0x1802848f8
                            __asm_movups(*(int128_t *)(v20 + 64), v72);
                            __asm_movups(*(int128_t *)(v20 + 80), v73);
                            int128_t v74 = __asm_movups_16(*(int128_t *)(v20 + 624)); // 0x180284906
                            __asm_movups(*(int128_t *)(v20 + 96), __asm_movups_16(*(int128_t *)(v20 + 608)));
                            int128_t v75 = __asm_movups_16(*(int128_t *)(v20 + 640)); // 0x180284916
                            __asm_movups(*(int128_t *)(v20 + 112), v74);
                            int128_t v76 = __asm_movups_16(*(int128_t *)(v20 + 656)); // 0x180284921
                            __asm_movups(*(int128_t *)v69, v75);
                            int128_t v77 = __asm_movups_16(*(int128_t *)(v20 + 672)); // 0x180284928
                            __asm_movups(*(int128_t *)(v20 + 144), v76);
                            int128_t v78 = __asm_movups_16(*(int128_t *)(v20 + 688)); // 0x180284930
                            __asm_movups(*(int128_t *)(v20 + 160), v77);
                            int128_t v79 = __asm_movups_16(*(int128_t *)(v20 + 704)); // 0x180284938
                            __asm_movups(*(int128_t *)(v20 + 176), v78);
                            int128_t v80 = __asm_movups_16(*(int128_t *)(v20 + 720)); // 0x180284940
                            __asm_movups(*(int128_t *)(v20 + 192), v79);
                            int128_t v81 = __asm_movups_16(*(int128_t *)(v20 + 736)); // 0x180284948
                            __asm_movups(*(int128_t *)(v20 + 208), v80);
                            __asm_movups(*(int128_t *)(v20 + 224), v81);
                            *(int64_t *)(v20 + 240) = *(int64_t *)(v20 + 752);
                            *(int32_t *)(v20 + 248) = *(int32_t *)(v20 + 760);
                            *(int16_t *)(v20 + 252) = *(int16_t *)(v20 + 764);
                            int128_t v82 = __asm_movups_16(*(int128_t *)(v22 + 256)); // 0x18028496d
                            int128_t v83 = __asm_movups_16(*(int128_t *)(v22 + 272)); // 0x180284975
                            __asm_movups(*(int128_t *)v21, v82);
                            int128_t v84 = __asm_movups_16(*(int128_t *)(v22 + 288)); // 0x180284981
                            __asm_movups(*(int128_t *)(v22 + 16), v83);
                            int128_t v85 = __asm_movups_16(*(int128_t *)(v22 + 304)); // 0x18028498e
                            __asm_movups(*(int128_t *)(v22 + 32), v84);
                            int128_t v86 = __asm_movups_16(*(int128_t *)(v22 + 320)); // 0x18028499b
                            __asm_movups(*(int128_t *)(v22 + 48), v85);
                            int128_t v87 = __asm_movups_16(*(int128_t *)(v22 + 336)); // 0x1802849a8
                            __asm_movups(*(int128_t *)(v22 + 64), v86);
                            int128_t v88 = __asm_movups_16(*(int128_t *)(v22 + 352)); // 0x1802849b5
                            __asm_movups(*(int128_t *)(v22 + 80), v87);
                            int128_t v89 = __asm_movsd(*(int64_t *)(v22 + 368)); // 0x1802849c2
                            __asm_movups(*(int128_t *)(v22 + 96), v88);
                            *(int64_t *)(v22 + 112) = __asm_movsd_17(v89);
                            *(int32_t *)(v22 + 120) = *(int32_t *)(v22 + 376);
                            *(int16_t *)(v22 + 124) = *(int16_t *)(v22 + 380);
                            *(char *)(v22 + 126) = *(char *)(v22 + 382);
                            int128_t v90 = __asm_movups_16(*(int128_t *)(v24 + 256)); // 0x1802849f2
                            int128_t v91 = __asm_movups_16(*(int128_t *)(v24 + 272)); // 0x1802849ff
                            __asm_movups(*(int128_t *)v23, v90);
                            int128_t v92 = __asm_movups_16(*(int128_t *)(v24 + 288)); // 0x180284a0a
                            __asm_movups(*(int128_t *)(v24 + 16), v91);
                            int128_t v93 = __asm_movups_16(*(int128_t *)(v24 + 304)); // 0x180284a15
                            __asm_movups(*(int128_t *)(v24 + 32), v92);
                            int128_t v94 = __asm_movups_16(*(int128_t *)(v24 + 320)); // 0x180284a20
                            __asm_movups(*(int128_t *)(v24 + 48), v93);
                            int128_t v95 = __asm_movups_16(*(int128_t *)(v24 + 336)); // 0x180284a2b
                            __asm_movups(*(int128_t *)(v24 + 64), v94);
                            int128_t v96 = __asm_movups_16(*(int128_t *)(v24 + 352)); // 0x180284a36
                            __asm_movups(*(int128_t *)(v24 + 80), v95);
                            int128_t v97 = __asm_movsd(*(int64_t *)(v24 + 368)); // 0x180284a41
                            __asm_movups(*(int128_t *)(v24 + 96), v96);
                            *(int64_t *)(v24 + 112) = __asm_movsd_17(v97);
                            *(int32_t *)(v24 + 120) = *(int32_t *)(v24 + 376);
                            *(int16_t *)(v24 + 124) = *(int16_t *)(v24 + 380);
                            *(char *)(v24 + 126) = *(char *)(v24 + 382);
                            int64_t * v98 = (int64_t *)(a1 + 256); // 0x180284a69
                            int64_t v99 = *v98; // 0x180284a69
                            if (v99 != 0) {
                                int32_t * v100 = (int32_t *)v99; // 0x180284a78
                                int32_t v101 = *v100; // 0x180284a78
                                *v100 = v101 - 1;
                                if (v101 == 1) {
                                    // 0x180284a80
                                    function_18028acc0(*(int64_t *)(a1 + 264) - 254, v69);
                                    function_18028acc0(*(int64_t *)(a1 + 272) - 128, v69);
                                    function_18028acc0(*(int64_t *)(a1 + 280) - 128, v69);
                                    function_18028acc0(*v98, v69);
                                }
                            }
                            // 0x180284abf
                            *(int32_t *)v18 = 1;
                            *v98 = (int64_t)v18;
                            *(int64_t *)a1 = v49;
                            *(int64_t *)(a1 + 264) = v51;
                            *(int64_t *)(a1 + 272) = v52;
                            *(int64_t *)(a1 + 280) = v53;
                            *(int32_t *)(a1 + 8) = v33;
                            // 0x180284b2b
                            function_18028acc0(v26, v69);
                            // 0x180284b83
                            return function_18026ad50((int64_t)g731);
                        }
                    }
                }
            }
        }
    }
    goto lab_0x180284b07;
  lab_0x180284b07:
    // 0x180284b07
    function_18028acc0((int64_t)v16, v15);
    function_18028acc0(v12, v15);
    function_18028acc0(v11, v15);
    function_18028acc0(v14, v15);
    // 0x180284b2b
    function_18028acc0(v10, v15);
    // 0x180284b83
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180284bb4 - 0x180284bfc
int64_t function_180284bb4(void) {
    int64_t v1 = 0; // 0x180284bba
    while (InitializeCriticalSectionEx((struct _RTL_CRITICAL_SECTION *)(40 * v1 + (int64_t)&g1286), 4000, 0)) {
        // 0x180284bdc
        g1288++;
        int64_t v2 = v1 + 1; // 0x180284be2
        v1 = v2 & 0xffffffff;
        if ((int32_t)v2 >= 15) {
            // 0x180284bf6
            return -255;
        }
    }
    // 0x180284bf6
    return __acrt_uninitialize_locks2(0) & -256;
}

// Address range: 0x180284c6c - 0x180284c87
int64_t function_180284c6c(void) {
    // 0x180284c6c
    int64_t v1; // 0x180284c6c
    function_18028e488(v1);
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1287);
    return &g1381;
}

// Address range: 0x180284c88 - 0x180284c96
void function_180284c88(struct _RTL_CRITICAL_SECTION * lpCriticalSection) {
    // 0x180284c88
    LeaveCriticalSection(lpCriticalSection);
}

// Address range: 0x180284c98 - 0x180284cd5
int64_t function_180284c98(void) {
    // 0x180284c98
    int64_t v1; // 0x180284c98
    __acrt_lock((int32_t)v1);
    int64_t v2; // 0x180284c98
    int64_t result = function_180284cd8(v2, v1, v2); // 0x180284cb8
    int64_t v3; // 0x180284c98
    __acrt_lock2((int32_t)v3, v1);
    return result;
}

// Address range: 0x180284cd8 - 0x180284f78
int64_t function_180284cd8(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)*(int64_t *)(a1 + 8); // 0x180284cfa
    int64_t v2; // 0x180284cd8
    int32_t v3 = v2;
    int64_t v4; // 0x180284cd8
    int64_t v5; // 0x180284cd8
    int16_t * v6; // 0x180284cd8
    int64_t v7; // 0x180284cd8
    int64_t v8; // 0x180284cd8
    int64_t v13 = 0;
    if (v1 != 0) {
        int32_t v9 = 0; // 0x180284d18
        v7 = &v9;
        int64_t v10 = function_18029344c((int64_t *)&v9, 0, 0, v1, 0x7fffffff); // 0x180284d30
        switch ((int32_t)v10) {
            case 22: {
                goto lab_0x180284f4b;
            }
            case 34: {
                goto lab_0x180284f4b;
            }
            default: {
                int64_t * v11 = _calloc_base(v9, 2); // 0x180284d50
                v7 = 0;
                v4 = 0;
                v8 = 2;
                if (v11 != NULL) {
                    int64_t v12 = (int64_t)v11; // 0x180284d50
                    switch ((int32_t)v13) {
                        case 0: {
                            int16_t * v14 = _wsetlocale(v3, (int16_t *)v11); // 0x180284db5
                            v7 = v12;
                            function_18028acc0(v12, v12);
                            v5 = v12;
                            v6 = v14;
                            goto lab_0x180284dc5;
                        }
                        case 22: {
                            goto lab_0x180284f4b;
                        }
                        case 34: {
                            goto lab_0x180284f4b;
                        }
                        default: {
                            // 0x180284daa
                            v7 = v12;
                            v4 = v12;
                            v8 = v12;
                            goto lab_0x180284d5f;
                        }
                    }
                } else {
                    goto lab_0x180284d5f;
                }
            }
        }
    } else {
        int64_t v15 = v2 & 0xffffffff; // 0x180284d00
        v7 = v15;
        v5 = v15;
        v6 = _wsetlocale(v3, NULL);
        goto lab_0x180284dc5;
    }
  lab_0x180284f4b:
    // 0x180284f4b
    v7 = 0;
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
  lab_0x180284f61:
    // 0x180284f61
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
  lab_0x180284dc5:
    // 0x180284dc5
    if (v6 == NULL) {
        // 0x180284d66
        return 0;
    }
    int64_t v16 = (int64_t)v6;
    int64_t v17 = __vcrt_getptd2(v5); // 0x180284dca
    int64_t v18 = *(int64_t *)(v17 + 144); // bp-56, 0x180284de1
    int32_t v19 = 0; // bp+16, 0x180284df0
    v7 = &v19;
    int64_t v20 = function_180293948((int64_t *)&v19, 0, 0, v16, 0, &v18); // 0x180284e08
    int64_t result = 0; // 0x180284cd8
    switch ((int32_t)v20) {
        case 0: {
            int64_t v21 = (int64_t)v19 + 4; // 0x180284e2c
            v7 = v21;
            int64_t * v22 = _malloc_base((int32_t)v21); // 0x180284e30
            if (v22 == NULL) {
                // 0x180284d66
                return 0;
            }
            int64_t v23 = (int64_t)v22; // 0x180284e30
            int64_t v24 = v23 + 4; // 0x180284e45
            v7 = 0;
            int64_t v25 = function_180293948(NULL, (int32_t)v24, v19, v16, -1, &v18); // 0x180284e60
            switch ((int32_t)v25) {
                case 0: {
                    // 0x180284e83
                    v7 = 0;
                    int64_t v26 = v18 + 48;
                    int64_t v27 = *(int64_t *)v26; // 0x180284e91
                    if (v27 != 0) {
                        int32_t * v28 = (int32_t *)v27; // 0x180284e9e
                        int32_t v29 = *v28; // 0x180284e9e
                        *v28 = v29 - 1;
                        if (v29 == 1) {
                            int64_t v30 = 32 * (int64_t)*(int32_t *)&v7;
                            int64_t * v31 = (int64_t *)(v30 + v26);
                            function_18028acc0(*v31, v27);
                            v7 = v30;
                            *v31 = 0;
                        }
                    }
                    // 0x180284ecb
                    if ((g769 & *(int32_t *)(v17 + 936)) == 0) {
                        int64_t v32 = 32 * (int64_t)*(int32_t *)&v7; // 0x180284ee0
                        v7 = v32;
                        int64_t v33 = *(int64_t *)(v32 + v26); // 0x180284ee4
                        if (v33 != 0) {
                            int32_t * v34 = (int32_t *)v33; // 0x180284ef1
                            int32_t v35 = *v34; // 0x180284ef1
                            *v34 = v35 - 1;
                            if (v35 == 1) {
                                int64_t * v36 = (int64_t *)(32 * (int64_t)*(int32_t *)&v7 + v26);
                                function_18028acc0(*v36, v33);
                                *v36 = 0;
                            }
                        }
                    }
                    // 0x180284f1e
                    *(int32_t *)v22 = *(int32_t *)(v18 + 16);
                    *(int64_t *)(32 * (int64_t)*(int32_t *)&v7 + v26) = v23;
                    *(int64_t *)(v18 + 32 + 32 * (int64_t)*(int32_t *)&v7) = v24;
                    result = v24;
                    // 0x180284d66
                    return result;
                }
                case 22: {
                    goto lab_0x180284f61;
                }
                case 34: {
                    goto lab_0x180284f61;
                }
                default: {
                    // 0x180284e7b
                    v7 = v23;
                    v4 = v23;
                    v8 = v24;
                    goto lab_0x180284d5f;
                }
            }
        }
        case 22: {
            goto lab_0x180284f61;
        }
        case 34: {
            goto lab_0x180284f61;
        }
        default: {
            return result;
        }
    }
  lab_0x180284d5f:
    // 0x180284d5f
    function_18028acc0(v4, v8);
    // 0x180284d66
    return 0;
}

// Address range: 0x180285000 - 0x180285090
int64_t function_180285000(int64_t a1) {
    // 0x180285000
    if (a1 == 0) {
        // 0x180285050
        return 0;
    }
    int64_t v1 = -1;
    int64_t v2 = v1 + 1; // 0x180285020
    while (*(int16_t *)(2 * v2 + a1) != 0) {
        // 0x180285020
        v1 = v2;
        v2 = v1 + 1;
    }
    int64_t v3 = v1 + 2; // 0x18028502a
    int64_t * v4 = _malloc_base(2 * (int32_t)v3); // 0x180285031
    if (v4 == NULL) {
        // 0x180285050
        return 0;
    }
    int64_t result = (int64_t)v4; // 0x180285031
    if ((int32_t)function_180293a00(result, v3, a1) == 0) {
        // 0x180285050
        return result;
    }
    // 0x180285075
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
}

// Address range: 0x1802850e0 - 0x1802850e5
int64_t function_1802850e0(void) {
    // 0x1802850e0
    int64_t v1; // 0x1802850e0
    int64_t v2; // 0x1802850e0
    return function_180293a90(v2, v1);
}

// Address range: 0x1802850f0 - 0x180285105
int64_t function_1802850f0(int64_t a1, int64_t a2) {
    // 0x1802850f0
    if ((char)a1 == 0) {
        // 0x180285104
        return 0;
    }
    int64_t v1 = 0; // 0x1802850f4
    int64_t result = a2; // 0x1802850f9
    while (v1 != a2) {
        // 0x1802850fb
        v1++;
        result = v1;
        if (*(char *)(v1 + a1) == 0) {
            // break -> 0x180285104
            return 0;
        }
        result = a2;
    }
    // 0x180285104
    return result;
}

// Address range: 0x180285164 - 0x18028525a
int64_t function_180285164(int64_t a1, int32_t a2, int32_t a3) {
    // 0x180285164
    int64_t v1; // 0x180285164
    _3f__3f__24___crt_time_is_leap_year_40_H_40__40_YA_NH_40_Z((int32_t)v1);
    int32_t v2 = a2 - a3 + 371; // 0x1802851c5
    int32_t v3 = a3 - (int32_t)(char)&g1381; // 0x1802851dc
    int32_t v4 = (v2 + (int32_t)(-0x6db6db6d * (int64_t)v2 / 0x100000000)) / 4; // 0x1802851df
    int32_t v5 = -7 * ((v4 >> 31) + v4) + v2; // 0x1802851ec
    int32_t v6 = v5 + (int32_t)((int64_t)(char)&g1381 + 365); // 0x1802851f5
    int32_t v7 = (v6 + (int32_t)(-0x6db6db6d * (int64_t)v6 / 0x100000000)) / 4; // 0x1802851fb
    int32_t v8 = -7 * ((v7 >> 31) + v7) + v6; // 0x180285208
    if (v3 > 363 == v8 == 2 || v3 > 362 == v8 == 3 || v3 >= 362 && v8 == 4) {
        // 0x18028524a
        return 0xffffffff;
    }
    int32_t v9 = a2 + 6; // 0x180285173
    int32_t v10 = (v9 + (int32_t)(-0x6db6db6d * (int64_t)v9 / 0x100000000)) / 4; // 0x18028518d
    int32_t v11 = 1 - a2 + a3 + 7 * ((v10 >> 31) + v10); // 0x1802851a5
    int32_t v12 = (v11 + (int32_t)(-0x6db6db6d * (int64_t)v11 / 0x100000000)) / 4; // 0x1802851b0
    uint32_t v13 = (v12 >> 31) + v12; // 0x1802851b8
    int64_t v14 = v13 + 1; // 0x18028523f
    int64_t result = v14; // 0x180285242
    if ((v5 || 1) != 3) {
        // 0x180285244
        result = v5 != 4 ? (int64_t)v13 : v14;
    }
    // 0x18028524a
    return result;
}

// Address range: 0x18028525c - 0x180286138
int64_t function_18028525c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x100000000000000 * a7 / 0x100000000000000;
    int64_t v2 = a2 & 0xffff; // 0x180285281
    uint32_t v3 = (int32_t)v2;
    int64_t v4; // 0x18028525c
    bool v5; // 0x18028525c
    int64_t v6; // 0x18028525c
    int64_t v7; // 0x18028525c
    int64_t v8; // 0x18028525c
    int64_t v9; // 0x18028525c
    int64_t v10; // 0x18028525c
    int32_t v11; // 0x18028525c
    int64_t v12; // 0x18028525c
    int64_t v13; // 0x18028525c
    int64_t v14; // 0x18028525c
    int64_t v15; // 0x18028525c
    int64_t v16; // 0x18028525c
    int64_t v17; // 0x18028525c
    int64_t v18; // 0x18028525c
    int64_t v19; // 0x18028525c
    int64_t v20; // 0x18028525c
    int32_t v21; // 0x18028525c
    int32_t v22; // 0x18028575d
    bool v23; // 0x18028525c
    if (v3 < 91) {
        if (v3 == 90) {
            int64_t v24 = function_18028c8e8(); // 0x1802860da
            int64_t v25 = *(int64_t *)((*(int32_t *)(a3 + 32) == 0 ? 0 : 8) + v24); // 0x1802860ec
            int64_t * v26 = (int64_t *)a5; // 0x1802860f4
            if (*v26 == 0) {
                // 0x18028611a
                return v24 & -256 | 1;
            }
            int16_t v27 = *(int16_t *)v25; // 0x1802860f9
            if (v27 == 0) {
                // 0x18028611a
                return v24 & -256 | 1;
            }
            int64_t v28 = v25; // 0x180286106
            *(int16_t *)a4 = v27;
            *(int64_t *)a4 = a4 + 2;
            int64_t v29 = *v26 - 1; // 0x180286112
            *v26 = v29;
            while (v29 != 0) {
                // 0x1802860f9
                v28 += 2;
                int16_t v30 = *(int16_t *)v28; // 0x1802860f9
                if (v30 == 0) {
                    // break -> 0x180286118
                    return 0;
                }
                *(int16_t *)a4 = v30;
                *(int64_t *)a4 = a4 + 2;
                v29 = *v26 - 1;
                *v26 = v29;
            }
            // 0x18028611a
            return a4 & -256 | 1;
        }
        int16_t v31 = a2;
        if (v3 < 78) {
            switch (v31) {
                case 77: {
                    uint32_t v32 = *(int32_t *)(a3 + 4); // 0x180285e26
                    v5 = v32 < 59;
                    v23 = v32 == 59;
                    v11 = v32;
                    v16 = v2;
                    goto lab_0x1802853da;
                }
                case 37: {
                    int64_t * v33 = (int64_t *)a5; // 0x180285df5
                    if (*v33 == 0) {
                        // 0x18028611a
                        return v7 & -256 | 1;
                    }
                    int64_t v34 = (int64_t)&g557; // 0x180285e0f
                    *(int16_t *)a4 = 37;
                    *(int64_t *)a4 = a4 + 2;
                    int64_t v35 = *v33 - 1; // 0x180285e1b
                    *v33 = v35;
                    while (v35 != 0) {
                        // 0x180285dfe
                        v34 += 2;
                        int16_t v36 = *(int16_t *)v34; // 0x180285dfe
                        if (v36 == 0) {
                            // break -> 0x180286118
                            return 0;
                        }
                        *(int16_t *)a4 = v36;
                        *(int64_t *)a4 = a4 + 2;
                        v35 = *v33 - 1;
                        *v33 = v35;
                    }
                    // 0x18028611a
                    return a4 & -256 | 1;
                }
                case 65: {
                    uint32_t v37 = *(int32_t *)(a3 + 24); // 0x180285d97
                    v6 = v2;
                    v9 = a1;
                    v14 = 0;
                    if (v37 < 7) {
                        int64_t v38 = *(int64_t *)(a6 + 408 + 8 * (int64_t)v37); // 0x180285dab
                        int64_t * v39 = (int64_t *)a5; // 0x180285db7
                        if (*v39 == 0) {
                            // 0x18028611a
                            return a6 & -256 | 1;
                        }
                        int16_t v40 = *(int16_t *)v38; // 0x180285dc0
                        if (v40 == 0) {
                            // 0x18028611a
                            return a6 & -256 | 1;
                        }
                        int64_t v41 = v38; // 0x180285dd1
                        *(int16_t *)a4 = v40;
                        *(int64_t *)a4 = a4 + 2;
                        int64_t v42 = *v39 - 1; // 0x180285ddd
                        *v39 = v42;
                        while (v42 != 0) {
                            // 0x180285dc0
                            v41 += 2;
                            int16_t v43 = *(int16_t *)v41; // 0x180285dc0
                            if (v43 == 0) {
                                // break -> 0x180286118
                                return 0;
                            }
                            *(int16_t *)a4 = v43;
                            *(int64_t *)a4 = a4 + 2;
                            v42 = *v39 - 1;
                            *v39 = v42;
                        }
                        // 0x18028611a
                        return a4 & -256 | 1;
                    }
                    goto lab_0x180285688;
                }
                case 66: {
                    uint32_t v44 = *(int32_t *)(a3 + 16); // 0x180285d46
                    v6 = v2;
                    v9 = a1;
                    v14 = 0;
                    if (v44 < 12) {
                        int64_t v45 = *(int64_t *)(a6 + 560 + 8 * (int64_t)v44); // 0x180285d5a
                        int64_t * v46 = (int64_t *)a5; // 0x180285d66
                        if (*v46 == 0) {
                            // 0x18028611a
                            return a6 & -256 | 1;
                        }
                        int16_t v47 = *(int16_t *)v45; // 0x180285d6f
                        if (v47 == 0) {
                            // 0x18028611a
                            return a6 & -256 | 1;
                        }
                        int64_t v48 = v45; // 0x180285d80
                        *(int16_t *)a4 = v47;
                        *(int64_t *)a4 = a4 + 2;
                        int64_t v49 = *v46 - 1; // 0x180285d8c
                        *v46 = v49;
                        while (v49 != 0) {
                            // 0x180285d6f
                            v48 += 2;
                            int16_t v50 = *(int16_t *)v48; // 0x180285d6f
                            if (v50 == 0) {
                                // break -> 0x180286118
                                return 0;
                            }
                            *(int16_t *)a4 = v50;
                            *(int64_t *)a4 = a4 + 2;
                            v49 = *v46 - 1;
                            *v46 = v49;
                        }
                        // 0x18028611a
                        return a4 & -256 | 1;
                    }
                    goto lab_0x180285688;
                }
                case 67: {
                    uint32_t v51 = *(int32_t *)(a3 + 20) + 1900; // 0x180285d0a
                    v6 = v2;
                    v9 = v51;
                    v14 = 0;
                    if (v51 < 0x2710) {
                        int32_t v52 = (int32_t)(0x51eb851f * (int64_t)v51 / 0x100000000) / 32; // 0x180285d37
                        v21 = (v52 >> 31) + v52;
                        goto lab_0x180285861;
                    } else {
                        goto lab_0x180285688;
                    }
                }
                case 68: {
                    int64_t v53 = 0x1000000000000 * a5 / 0x1000000000000;
                    v17 = 109;
                    if ((char)function_18028525c(a1, 109, a3, a4, v53, a6, v1) == 0) {
                        goto lab_0x180285434;
                    } else {
                        int64_t * v54 = (int64_t *)a5; // 0x180285c7d
                        if (*v54 != 0) {
                            int64_t v55 = (int64_t)&g552; // 0x18028525c
                            int16_t v56 = *(int16_t *)v55; // 0x180285c82
                            while (v56 != 0) {
                                // 0x180285c8a
                                *(int16_t *)a4 = v56;
                                *(int64_t *)a4 = a4 + 2;
                                int64_t v57 = *v54 - 1; // 0x180285c98
                                *v54 = v57;
                                v55 += 2;
                                if (v57 == 0) {
                                    // break -> 0x180285c9e
                                    return 0;
                                }
                                v56 = *(int16_t *)v55;
                            }
                        }
                        // 0x180285c9e
                        v17 = 100;
                        if ((char)function_18028525c(a1, 100, a3, a4, v53, a6, v1) == 0) {
                            goto lab_0x180285434;
                        } else {
                            int64_t v58 = v1 & 255; // 0x180285c4a
                            v4 = v53;
                            v19 = v58;
                            v18 = 121;
                            if (*v54 != 0) {
                                int64_t v59 = (int64_t)&g552; // 0x18028525c
                                int16_t v60 = *(int16_t *)v59; // 0x180285cd1
                                v4 = v53;
                                v19 = v58;
                                v18 = 121;
                                while (v60 != 0) {
                                    // 0x180285cdb
                                    *(int16_t *)a4 = v60;
                                    *(int64_t *)a4 = a4 + 2;
                                    int64_t v61 = *v54 - 1; // 0x180285ce9
                                    *v54 = v61;
                                    v4 = v53;
                                    v19 = v58;
                                    v18 = 121;
                                    v59 += 2;
                                    if (v61 == 0) {
                                        // break -> 0x18028556d
                                        return 0;
                                    }
                                    v60 = *(int16_t *)v59;
                                    v4 = v53;
                                    v19 = v58;
                                    v18 = 121;
                                }
                            }
                            goto lab_0x18028556d;
                        }
                    }
                }
                case 70: {
                    int64_t v62 = 0x1000000000000 * a5 / 0x1000000000000;
                    v17 = 89;
                    if ((char)function_18028525c(a1, 89, a3, a4, v62, a6, v1) == 0) {
                        goto lab_0x180285434;
                    } else {
                        int64_t * v63 = (int64_t *)a5; // 0x180285bc5
                        if (*v63 != 0) {
                            int64_t v64 = (int64_t)&g478; // 0x18028525c
                            int16_t v65 = *(int16_t *)v64; // 0x180285bca
                            while (v65 != 0) {
                                // 0x180285bd2
                                *(int16_t *)a4 = v65;
                                *(int64_t *)a4 = a4 + 2;
                                int64_t v66 = *v63 - 1; // 0x180285be0
                                *v63 = v66;
                                v64 += 2;
                                if (v66 == 0) {
                                    // break -> 0x180285be6
                                    return 0;
                                }
                                v65 = *(int16_t *)v64;
                            }
                        }
                        // 0x180285be6
                        v17 = 109;
                        if ((char)function_18028525c(a1, 109, a3, a4, v62, a6, v1) == 0) {
                            goto lab_0x180285434;
                        } else {
                            int64_t v67 = v1 & 255; // 0x180285b92
                            v4 = v62;
                            v19 = v67;
                            v18 = 100;
                            if (*v63 != 0) {
                                int64_t v68 = (int64_t)&g478; // 0x18028525c
                                int16_t v69 = *(int16_t *)v68; // 0x180285c19
                                v4 = v62;
                                v19 = v67;
                                v18 = 100;
                                while (v69 != 0) {
                                    // 0x180285c23
                                    *(int16_t *)a4 = v69;
                                    *(int64_t *)a4 = a4 + 2;
                                    int64_t v70 = *v63 - 1; // 0x180285c31
                                    *v63 = v70;
                                    v4 = v62;
                                    v19 = v67;
                                    v18 = 100;
                                    v68 += 2;
                                    if (v70 == 0) {
                                        // break -> 0x18028556d
                                        return 0;
                                    }
                                    v69 = *(int16_t *)v68;
                                    v4 = v62;
                                    v19 = v67;
                                    v18 = 100;
                                }
                            }
                            goto lab_0x18028556d;
                        }
                    }
                }
                default: {
                    if (v3 == 71) {
                        uint32_t v71 = *(int32_t *)(a3 + 20); // 0x180285b3e
                        v6 = v2;
                        v9 = a1;
                        v14 = 0;
                        if (v71 < 0x1fa4) {
                            int64_t v72 = v71; // 0x180285b3e
                            int32_t v73 = *(int32_t *)(a3 + 24); // 0x180285b5b
                            int32_t v74 = function_180285164(v72, v73, *(int32_t *)(a3 + 28)); // 0x180285b63
                            int64_t v75; // 0x18028525c
                            if (v74 != 0) {
                                // 0x180285b6c
                                v75 = v72;
                                if (v74 < 0) {
                                    // 0x180285b6e
                                    v75 = v71 + 1;
                                }
                            } else {
                                // 0x180285b67
                                v75 = v71 - 1;
                            }
                            // 0x180285b71
                            v20 = 0x30000000000000;
                            v10 = v75 + 1900 & 0xffffffff;
                            v15 = 4;
                            goto lab_0x18028531b;
                        } else {
                            goto lab_0x180285688;
                        }
                    } else {
                        uint32_t v76 = v3 - 72; // 0x180285af5
                        if (v76 == 0) {
                            uint32_t v77 = *(int32_t *)(a3 + 8); // 0x180285b33
                            v5 = v77 < 23;
                            v23 = v77 == 23;
                            v11 = v77;
                            v16 = 0;
                            goto lab_0x1802853da;
                        } else {
                            if (v76 != 1) {
                                // 0x18028611a
                                return v8 & -256;
                            }
                            uint32_t v78 = *(int32_t *)(a3 + 8); // 0x180285b03
                            v6 = v2;
                            v9 = v78;
                            v14 = v76;
                            if (v78 < 24) {
                                int32_t v79 = (int32_t)(0x2aaaaaab * (int64_t)v78 / 0x100000000) / 2; // 0x180285b16
                                int32_t v80 = -12 * ((v79 >> 31) + v79) + v78; // 0x180285b25
                                v12 = v80 == 0 ? 12 : v80;
                                goto lab_0x1802853e0;
                            } else {
                                goto lab_0x180285688;
                            }
                        }
                    }
                }
            }
        } else {
            // 0x180285e31
            v5 = false;
            v23 = false;
            v11 = v3;
            v16 = 0;
            switch (v31) {
                case 82: {
                    int64_t v81 = 0x1000000000000 * a5 / 0x1000000000000;
                    v17 = 72;
                    if ((char)function_18028525c(a1, 72, a3, a4, v81, a6, v1) == 0) {
                        goto lab_0x180285434;
                    } else {
                        int64_t * v82 = (int64_t *)a5; // 0x180286094
                        v4 = v81;
                        v19 = v1;
                        v18 = 77;
                        if (*v82 != 0) {
                            int64_t v83 = (int64_t)&g554; // 0x18028525c
                            int16_t v84 = *(int16_t *)v83; // 0x18028609a
                            v4 = v81;
                            v19 = v1;
                            v18 = 77;
                            while (v84 != 0) {
                                // 0x1802860a3
                                *(int16_t *)a4 = v84;
                                *(int64_t *)a4 = a4 + 2;
                                int64_t v85 = *v82 - 1; // 0x1802860b1
                                *v82 = v85;
                                v4 = v81;
                                v19 = v1;
                                v18 = 77;
                                v83 += 2;
                                if (v85 == 0) {
                                    // break -> 0x18028556d
                                    return 0;
                                }
                                v84 = *(int16_t *)v83;
                                v4 = v81;
                                v19 = v1;
                                v18 = 77;
                            }
                        }
                        goto lab_0x18028556d;
                    }
                }
                case 83: {
                    goto lab_0x1802853da;
                }
                case 84: {
                    int64_t v86 = 0x1000000000000 * a5 / 0x1000000000000;
                    v17 = 72;
                    if ((char)function_18028525c(a1, 72, a3, a4, v86, a6, v1) == 0) {
                        goto lab_0x180285434;
                    } else {
                        int64_t * v87 = (int64_t *)a5; // 0x180285fd0
                        if (*v87 != 0) {
                            // 0x180285fd6
                            while (true) {
                                // continue -> 0x180285fd6
                            }
                        }
                        // 0x180285ff3
                        v17 = 77;
                        if ((char)function_18028525c(a1, 77, a3, a4, v86, a6, v1) == 0) {
                            goto lab_0x180285434;
                        } else {
                            int64_t v88 = v1 & 255; // 0x180285ffa
                            v4 = v86;
                            v19 = v88;
                            v18 = 83;
                            if (*v87 != 0) {
                                int64_t v89 = (int64_t)&g554; // 0x18028525c
                                int16_t v90 = *(int16_t *)v89; // 0x180286029
                                v4 = v86;
                                v19 = v88;
                                v18 = 83;
                                while (v90 != 0) {
                                    // 0x180286032
                                    *(int16_t *)a4 = v90;
                                    *(int64_t *)a4 = a4 + 2;
                                    int64_t v91 = *v87 - 1; // 0x180286040
                                    *v87 = v91;
                                    v4 = v86;
                                    v19 = v88;
                                    v18 = 83;
                                    v89 += 2;
                                    if (v91 == 0) {
                                        // break -> 0x18028556d
                                        return 0;
                                    }
                                    v90 = *(int16_t *)v89;
                                    v4 = v86;
                                    v19 = v88;
                                    v18 = 83;
                                }
                            }
                            goto lab_0x18028556d;
                        }
                    }
                }
                case 85: {
                    goto lab_0x180285f27;
                }
                case 86: {
                    int32_t v92 = *(int32_t *)(a3 + 24); // 0x180285eb6
                    uint32_t v93 = *(int32_t *)(a3 + 20); // 0x180285ebd
                    int32_t * v94 = (int32_t *)(a3 + 28); // 0x180285ec4
                    int64_t v95 = function_180285164((int64_t)v93, v92, *v94); // 0x180285ec8
                    int32_t v96 = v95; // 0x180285ecd
                    int64_t v97; // 0x18028525c
                    if (v96 != 0) {
                        // 0x180285eff
                        v97 = v96 >= 0 ? v95 & 0xffffffff : 1;
                    } else {
                        // 0x180285ed1
                        _3f__3f__24___crt_time_is_leap_year_40_H_40__40_YA_NH_40_Z((int32_t)&g1381);
                        int32_t v98 = *v94; // 0x180285eda
                        int64_t v99 = function_180285164((int64_t)(v93 - 1), v92 + 7 - v98, (int32_t)(char)&g1381 + 365); // 0x180285ef5
                        v97 = v99 & 0xffffffff;
                    }
                    // 0x180285f0b
                    v20 = (char)v1 == 0 ? 0x30000000000000 : 0;
                    v10 = v97 & 0xffffffff;
                    v15 = 2;
                    goto lab_0x18028531b;
                }
                case 87: {
                    goto lab_0x180285f27;
                }
                default: {
                    uint32_t v100 = v3 - 88; // 0x180285e63
                    v13 = 2;
                    if (v100 == 0) {
                        goto lab_0x1802855e0;
                    } else {
                        if (v100 != 1) {
                            // 0x180285698
                        }
                        uint32_t v101 = *(int32_t *)(a3 + 20) + 1900; // 0x180285e74
                        int64_t v102 = v101; // 0x180285e74
                        v6 = v2;
                        v9 = v102;
                        v14 = v100;
                        if (v101 < 0x2710) {
                            // 0x180285e86
                            v20 = (char)v1 == 0 ? 0x30000000000000 : 0;
                            v10 = v102;
                            v15 = 4;
                            goto lab_0x18028531b;
                        } else {
                            goto lab_0x180285688;
                        }
                    }
                }
            }
        }
    } else {
        if (v3 < 111) {
            switch ((int16_t)a2) {
                case 110: {
                    int64_t * v103 = (int64_t *)a5; // 0x1802856ac
                    if (*v103 == 0) {
                        // 0x18028611a
                        return v7 & -256 | 1;
                    }
                    int64_t v104 = (int64_t)&g553; // 0x1802856c6
                    *(int16_t *)a4 = 10;
                    *(int64_t *)a4 = a4 + 2;
                    int64_t v105 = *v103 - 1; // 0x1802856d2
                    *v103 = v105;
                    while (v105 != 0) {
                        // 0x1802856b5
                        v104 += 2;
                        int16_t v106 = *(int16_t *)v104; // 0x1802856b5
                        if (v106 == 0) {
                            // break -> 0x180286118
                            return 0;
                        }
                        *(int16_t *)a4 = v106;
                        *(int64_t *)a4 = a4 + 2;
                        v105 = *v103 - 1;
                        *v103 = v105;
                    }
                    // 0x18028611a
                    return a4 & -256 | 1;
                }
                case 97: {
                    uint32_t v107 = *(int32_t *)(a3 + 24); // 0x18028563b
                    v6 = v2;
                    v9 = a1;
                    v14 = 0;
                    if (v107 < 7) {
                        int64_t v108 = *(int64_t *)(a6 + 352 + 8 * (int64_t)v107); // 0x18028564b
                        int64_t * v109 = (int64_t *)a5; // 0x180285657
                        if (*v109 == 0) {
                            // 0x18028611a
                            return a6 & -256 | 1;
                        }
                        int16_t v110 = *(int16_t *)v108; // 0x180285660
                        if (v110 == 0) {
                            // 0x18028611a
                            return a6 & -256 | 1;
                        }
                        int64_t v111 = v108; // 0x180285671
                        *(int16_t *)a4 = v110;
                        *(int64_t *)a4 = a4 + 2;
                        int64_t v112 = *v109 - 1; // 0x18028567d
                        *v109 = v112;
                        while (v112 != 0) {
                            // 0x180285660
                            v111 += 2;
                            int16_t v113 = *(int16_t *)v111; // 0x180285660
                            if (v113 == 0) {
                                // break -> 0x180286118
                                return 0;
                            }
                            *(int16_t *)a4 = v113;
                            *(int64_t *)a4 = a4 + 2;
                            v112 = *v109 - 1;
                            *v109 = v112;
                        }
                        // 0x18028611a
                        return a4 & -256 | 1;
                    }
                    goto lab_0x180285688;
                }
                case 98: {
                    goto lab_0x1802855ea;
                }
                case 99: {
                    char v114 = v1;
                    if (a6 == (int64_t)&g565 == v114 == 0) {
                        int64_t v115 = 0x1000000000000 * a5 / 0x1000000000000;
                        int64_t v116 = function_18028525c(a1, 97, a3, a4, v115, (int64_t)&g565, 0); // 0x18028542b
                        v17 = 97;
                        if ((char)v116 != 0) {
                            int64_t * v117 = (int64_t *)a5; // 0x18028544e
                            if (*v117 != 0) {
                                int64_t v118 = (int64_t)&g551; // 0x18028525c
                                int16_t v119 = *(int16_t *)v118; // 0x180285453
                                while (v119 != 0) {
                                    // 0x18028545b
                                    *(int16_t *)a4 = v119;
                                    *(int64_t *)a4 = a4 + 2;
                                    int64_t v120 = *v117 - 1; // 0x180285469
                                    *v117 = v120;
                                    v118 += 2;
                                    if (v120 == 0) {
                                        // break -> 0x18028546f
                                        return 0;
                                    }
                                    v119 = *(int16_t *)v118;
                                }
                            }
                            int64_t v121 = function_18028525c(a1, 98, a3, a4, v115, (int64_t)&g565, 0); // 0x18028548b
                            v17 = 98;
                            if ((char)v121 == 0) {
                                goto lab_0x180285434;
                            } else {
                                // 0x180285494
                                if (*v117 != 0) {
                                    int64_t v122 = (int64_t)&g551; // 0x18028525c
                                    int16_t v123 = *(int16_t *)v122; // 0x18028549c
                                    while (v123 != 0) {
                                        // 0x1802854a4
                                        *(int16_t *)a4 = v123;
                                        *(int64_t *)a4 = a4 + 2;
                                        int64_t v124 = *v117 - 1; // 0x1802854b2
                                        *v117 = v124;
                                        v122 += 2;
                                        if (v124 == 0) {
                                            // break -> 0x1802854b8
                                            return 0;
                                        }
                                        v123 = *(int16_t *)v122;
                                    }
                                }
                                int64_t v125 = function_18028525c(a1, 101, a3, a4, v115, (int64_t)&g565, 0); // 0x1802854d4
                                v17 = 101;
                                if ((char)v125 == 0) {
                                    goto lab_0x180285434;
                                } else {
                                    // 0x1802854e1
                                    if (*v117 != 0) {
                                        int64_t v126 = (int64_t)&g551; // 0x18028525c
                                        int16_t v127 = *(int16_t *)v126; // 0x1802854e9
                                        while (v127 != 0) {
                                            // 0x1802854f1
                                            *(int16_t *)a4 = v127;
                                            *(int64_t *)a4 = a4 + 2;
                                            int64_t v128 = *v117 - 1; // 0x1802854ff
                                            *v117 = v128;
                                            v126 += 2;
                                            if (v128 == 0) {
                                                // break -> 0x180285505
                                                return 0;
                                            }
                                            v127 = *(int16_t *)v126;
                                        }
                                    }
                                    int64_t v129 = function_18028525c(a1, 84, a3, a4, v115, (int64_t)&g565, 0); // 0x180285521
                                    v17 = 84;
                                    if ((char)v129 == 0) {
                                        goto lab_0x180285434;
                                    } else {
                                        // 0x18028552e
                                        v4 = v115;
                                        v19 = 0;
                                        v18 = 89;
                                        if (*v117 != 0) {
                                            int64_t v130 = (int64_t)&g551; // 0x18028525c
                                            int16_t v131 = *(int16_t *)v130; // 0x180285533
                                            v4 = v115;
                                            v19 = 0;
                                            v18 = 89;
                                            while (v131 != 0) {
                                                // 0x18028553d
                                                *(int16_t *)a4 = v131;
                                                *(int64_t *)a4 = a4 + 2;
                                                int64_t v132 = *v117 - 1; // 0x18028554b
                                                *v117 = v132;
                                                v130 += 2;
                                                v4 = v115;
                                                v19 = 0;
                                                v18 = 89;
                                                if (v132 == 0) {
                                                    // break -> 0x18028556d
                                                    return 0;
                                                }
                                                v131 = *(int16_t *)v130;
                                                v4 = v115;
                                                v19 = 0;
                                                v18 = 89;
                                            }
                                        }
                                        goto lab_0x18028556d;
                                    }
                                }
                            }
                        } else {
                            goto lab_0x180285434;
                        }
                    } else {
                        // 0x18028557f
                        v17 = v1 & 255;
                        if ((char)function_180286288(a1, v114, a3, a4, 0x1000000000000 * a5 / 0x1000000000000, a6) == 0) {
                            goto lab_0x180285434;
                        } else {
                            int64_t * v133 = (int64_t *)a5; // 0x1802855a8
                            v13 = 2;
                            if (*v133 != 0) {
                                int64_t v134 = (int64_t)&g551; // 0x18028525c
                                int16_t v135 = *(int16_t *)v134; // 0x1802855ad
                                v13 = 2;
                                while (v135 != 0) {
                                    // 0x1802855b7
                                    *(int16_t *)a4 = v135;
                                    *(int64_t *)a4 = a4 + 2;
                                    int64_t v136 = *v133 - 1; // 0x1802855c5
                                    *v133 = v136;
                                    v134 += 2;
                                    v13 = 2;
                                    if (v136 == 0) {
                                        // break -> 0x1802855e0
                                        return 0;
                                    }
                                    v135 = *(int16_t *)v134;
                                    v13 = 2;
                                }
                            }
                            goto lab_0x1802855e0;
                        }
                    }
                }
                case 100: {
                    int32_t v137 = *(int32_t *)(a3 + 12); // 0x1802853d1
                    v5 = v137 < 31;
                    v23 = v137 == 31;
                    v11 = v137;
                    v16 = 0;
                    goto lab_0x1802853da;
                }
                case 101: {
                    uint32_t v138 = *(int32_t *)(a3 + 12); // 0x1802853ad
                    int64_t v139 = v138; // 0x1802853ad
                    v6 = v2;
                    v9 = v139;
                    v14 = 0;
                    if (v138 < 32) {
                        // 0x1802853bc
                        v20 = 0x20000000000000 * a7 & 0xe0000000000000 ^ 0x20000000000000;
                        v10 = v139;
                        v15 = 2;
                        goto lab_0x18028531b;
                    } else {
                        goto lab_0x180285688;
                    }
                }
                case 103: {
                    uint32_t v140 = *(int32_t *)(a3 + 20); // 0x180285351
                    v6 = v2;
                    v9 = a1;
                    v14 = 0;
                    if (v140 < 0x1fa4) {
                        int64_t v141 = v140; // 0x180285351
                        int32_t v142 = *(int32_t *)(a3 + 24); // 0x18028536e
                        int32_t v143 = function_180285164(v141, v142, *(int32_t *)(a3 + 28)); // 0x180285376
                        int64_t v144; // 0x18028525c
                        if (v143 != 0) {
                            // 0x18028537f
                            v144 = v141;
                            if (v143 < 0) {
                                // 0x180285381
                                v144 = v140 + 1;
                            }
                        } else {
                            // 0x18028537a
                            v144 = v140 - 1;
                        }
                        int64_t v145 = v144 + 1900; // 0x180285384
                        int32_t v146 = (int32_t)(0x51eb851f * 0x100000000 * v145 / 0x100000000 / 0x100000000) / 32; // 0x180285399
                        v20 = 0x30000000000000;
                        v10 = -100 * ((v146 >> 31) + v146) + (int32_t)v145;
                        v15 = 2;
                        goto lab_0x18028531b;
                    } else {
                        goto lab_0x180285688;
                    }
                }
                case 104: {
                    goto lab_0x1802855ea;
                }
                default: {
                    uint32_t v147 = v3 - 106; // 0x1802852df
                    if (v147 == 0) {
                        uint32_t v148 = *(int32_t *)(a3 + 28); // 0x180285325
                        v6 = v2;
                        v9 = v148;
                        v14 = 0;
                        if (v148 < 366) {
                            // 0x180285334
                            v20 = (char)v1 == 0 ? 0x30000000000000 : 0;
                            v10 = v148 + 1;
                            v15 = 3;
                            goto lab_0x18028531b;
                        } else {
                            goto lab_0x180285688;
                        }
                    } else {
                        if (v147 != 3) {
                            // 0x18028611a
                            return v8 & -256;
                        }
                        uint32_t v149 = *(int32_t *)(a3 + 16); // 0x1802852ed
                        v6 = v2;
                        v9 = v149;
                        v14 = v147;
                        if (v149 < 12) {
                            // 0x1802852f9
                            v20 = (char)v1 == 0 ? 0x30000000000000 : 0;
                            v10 = v149 + 1;
                            v15 = 2;
                            goto lab_0x18028531b;
                        } else {
                            goto lab_0x180285688;
                        }
                    }
                }
            }
        } else {
            if (v3 == 112) {
                uint32_t v150 = *(int32_t *)(a3 + 8); // 0x180285a44
                v6 = v2;
                v9 = a1;
                v14 = 0;
                if (v150 < 24) {
                    int64_t v151 = *(int64_t *)((v150 > 11 ? 664 : 656) + a6);
                    int64_t * v152 = (int64_t *)a5; // 0x180285a6e
                    if (*v152 == 0) {
                        // 0x18028611a
                        return a6 & -256 | 1;
                    }
                    int16_t v153 = *(int16_t *)v151; // 0x180285a77
                    if (v153 == 0) {
                        // 0x18028611a
                        return a6 & -256 | 1;
                    }
                    int64_t v154 = v151; // 0x180285a88
                    *(int16_t *)a4 = v153;
                    *(int64_t *)a4 = a4 + 2;
                    int64_t v155 = *v152 - 1; // 0x180285a94
                    *v152 = v155;
                    while (v155 != 0) {
                        // 0x180285a77
                        v154 += 2;
                        int16_t v156 = *(int16_t *)v154; // 0x180285a77
                        if (v156 == 0) {
                            // break -> 0x180286118
                            return 0;
                        }
                        *(int16_t *)a4 = v156;
                        *(int64_t *)a4 = a4 + 2;
                        v155 = *v152 - 1;
                        *v152 = v155;
                    }
                    // 0x18028611a
                    return a4 & -256 | 1;
                }
                goto lab_0x180285688;
            } else {
                switch ((int16_t)a2) {
                    case 114: {
                        int64_t v157 = 0x1000000000000 * a5 / 0x1000000000000;
                        v4 = v157;
                        v19 = v1;
                        v18 = 88;
                        if (a6 != (int64_t)&g565) {
                            goto lab_0x18028556d;
                        } else {
                            // 0x180285920
                            v17 = 73;
                            if ((char)function_18028525c(a1, 73, a3, a4, v157, a6, v1) == 0) {
                                goto lab_0x180285434;
                            } else {
                                int64_t * v158 = (int64_t *)a5; // 0x180285947
                                if (*v158 != 0) {
                                    int64_t v159 = (int64_t)&g554; // 0x18028525c
                                    int16_t v160 = *(int16_t *)v159; // 0x18028594d
                                    while (v160 != 0) {
                                        // 0x180285955
                                        *(int16_t *)a4 = v160;
                                        *(int64_t *)a4 = a4 + 2;
                                        int64_t v161 = *v158 - 1; // 0x180285963
                                        *v158 = v161;
                                        v159 += 2;
                                        if (v161 == 0) {
                                            // break -> 0x18028596a
                                            return 0;
                                        }
                                        v160 = *(int16_t *)v159;
                                    }
                                }
                                // 0x18028596a
                                v17 = 77;
                                if ((char)function_18028525c(a1, 77, a3, a4, v157, a6, v1) == 0) {
                                    goto lab_0x180285434;
                                } else {
                                    // 0x180285996
                                    if (*v158 != 0) {
                                        int64_t v162 = (int64_t)&g554; // 0x18028525c
                                        int16_t v163 = *(int16_t *)v162; // 0x18028599c
                                        while (v163 != 0) {
                                            // 0x1802859a5
                                            *(int16_t *)a4 = v163;
                                            *(int64_t *)a4 = a4 + 2;
                                            int64_t v164 = *v158 - 1; // 0x1802859b3
                                            *v158 = v164;
                                            v162 += 2;
                                            if (v164 == 0) {
                                                // break -> 0x1802859ba
                                                return 0;
                                            }
                                            v163 = *(int16_t *)v162;
                                        }
                                    }
                                    // 0x1802859ba
                                    v17 = 83;
                                    if ((char)function_18028525c(a1, 83, a3, a4, v157, a6, v1) == 0) {
                                        goto lab_0x180285434;
                                    } else {
                                        // 0x1802859e8
                                        v4 = v157;
                                        v19 = v1;
                                        v18 = 112;
                                        if (*v158 != 0) {
                                            int64_t v165 = (int64_t)&g551; // 0x18028525c
                                            int16_t v166 = *(int16_t *)v165; // 0x1802859f5
                                            v4 = v157;
                                            v19 = v1;
                                            v18 = 112;
                                            while (v166 != 0) {
                                                // 0x1802859ff
                                                *(int16_t *)a4 = v166;
                                                *(int64_t *)a4 = a4 + 2;
                                                int64_t v167 = *v158 - 1; // 0x180285a0d
                                                *v158 = v167;
                                                v4 = v157;
                                                v19 = v1;
                                                v18 = 112;
                                                v165 += 2;
                                                if (v167 == 0) {
                                                    // break -> 0x18028556d
                                                    return 0;
                                                }
                                                v166 = *(int16_t *)v165;
                                                v4 = v157;
                                                v19 = v1;
                                                v18 = 112;
                                            }
                                        }
                                        goto lab_0x18028556d;
                                    }
                                }
                            }
                        }
                    }
                    case 116: {
                        int64_t * v168 = (int64_t *)a5; // 0x1802858cc
                        if (*v168 == 0) {
                            // 0x18028611a
                            return v7 & -256 | 1;
                        }
                        int64_t v169 = (int64_t)&g555; // 0x1802858e6
                        *(int16_t *)a4 = 9;
                        *(int64_t *)a4 = a4 + 2;
                        int64_t v170 = *v168 - 1; // 0x1802858f2
                        *v168 = v170;
                        while (v170 != 0) {
                            // 0x1802858d5
                            v169 += 2;
                            int16_t v171 = *(int16_t *)v169; // 0x1802858d5
                            if (v171 == 0) {
                                // break -> 0x180286118
                                return 0;
                            }
                            *(int16_t *)a4 = v171;
                            *(int64_t *)a4 = a4 + 2;
                            v170 = *v168 - 1;
                            *v168 = v170;
                        }
                        // 0x18028611a
                        return a4 & -256 | 1;
                    }
                    default: {
                        if ((v3 || 2) == 119) {
                            uint32_t v172 = *(int32_t *)(a3 + 24); // 0x180285887
                            int64_t v173 = v172; // 0x180285887
                            v6 = v2;
                            v9 = v173;
                            v14 = 0;
                            if (v172 < 7) {
                                // 0x180285893
                                v20 = (char)v1 == 0 ? 0x30000000000000 : 0;
                                v10 = v3 == 117 == v172 == 0 ? v2 + 0xffffff92 & 0xffffffff : v173;
                                v15 = 1;
                                goto lab_0x18028531b;
                            } else {
                                goto lab_0x180285688;
                            }
                        } else {
                            if (v3 == 120) {
                                // 0x18028586c
                                v13 = v1 & 255;
                                goto lab_0x1802855e0;
                            } else {
                                uint32_t v174 = v3 - 121; // 0x180285713
                                if (v174 == 0) {
                                    uint32_t v175 = *(int32_t *)(a3 + 20) + 1900; // 0x180285827
                                    v6 = v2;
                                    v9 = v175;
                                    v14 = 0;
                                    if (v175 < 0x2710) {
                                        int32_t v176 = (int32_t)(0x51eb851f * (int64_t)v175 / 0x100000000) / 32; // 0x18028584d
                                        v21 = -100 * ((v176 >> 31) + v176) + v175;
                                        goto lab_0x180285861;
                                    } else {
                                        goto lab_0x180285688;
                                    }
                                } else {
                                    if (v174 != 1) {
                                        // 0x18028611a
                                        return v8 & -256;
                                    }
                                    int64_t v177 = v174; // 0x180285713
                                    int32_t v178 = 0; // bp+16, 0x180285730
                                    int64_t v179 = _get_daylight3(&v178, v177, v2); // 0x180285733
                                    v6 = v2;
                                    v9 = &v178;
                                    v14 = v177;
                                    if ((int32_t)v179 != 0) {
                                        goto lab_0x180285688;
                                    } else {
                                        // 0x180285740
                                        if (*(int32_t *)(a3 + 32) == 0) {
                                            // 0x180285767
                                            v22 = v178;
                                            goto lab_0x18028576b;
                                        } else {
                                            int32_t v180 = 0; // bp-56, 0x180285749
                                            int64_t v181 = _get_daylight2(&v180); // 0x18028574c
                                            v6 = v2;
                                            v9 = &v180;
                                            v14 = v177;
                                            if ((int32_t)v181 != 0) {
                                                goto lab_0x180285688;
                                            } else {
                                                // 0x180285759
                                                v22 = v180 + v178;
                                                v178 = v22;
                                                goto lab_0x18028576b;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x1802853da:;
    int64_t v182 = v11;
    v12 = v182;
    v6 = v2;
    v9 = v182;
    v14 = v16;
    if (v5 || v23) {
        goto lab_0x1802853e0;
    } else {
        goto lab_0x180285688;
    }
  lab_0x180285f27:;
    uint32_t v183 = *(int32_t *)(a3 + 24); // 0x180285f27
    int64_t v184 = v183; // 0x180285f27
    v6 = v2;
    v9 = v184;
    v14 = 0;
    if (v183 < 7) {
        int64_t v185 = v184; // 0x180285f39
        if (v3 == 87) {
            // 0x180285f3b
            v185 = 6;
            if (v183 != 0) {
                // 0x180285f44
                v185 = v183 - 1;
            }
        }
        uint32_t v186 = *(int32_t *)(a3 + 28); // 0x180285f46
        int64_t v187 = v186; // 0x180285f46
        v6 = v187;
        v9 = v185;
        v14 = 0;
        if (v186 < 366) {
            int64_t v188 = 0; // 0x180285f5a
            if (v185 <= v187) {
                int32_t v189 = (v186 + (int32_t)(-0x6db6db6d * (int64_t)v186 / 0x100000000)) / 4; // 0x180285f67
                int32_t v190 = (v189 >> 31) + v189; // 0x180285f6f
                v188 = v190 + (int32_t)(v185 <= (int64_t)(-7 * v190 + v186));
            }
            // 0x180285f80
            v20 = (char)v1 == 0 ? 0x30000000000000 : 0;
            v10 = v188;
            v15 = 2;
            goto lab_0x18028531b;
        } else {
            goto lab_0x180285688;
        }
    } else {
        goto lab_0x180285688;
    }
  lab_0x1802855ea:;
    uint32_t v191 = *(int32_t *)(a3 + 16); // 0x1802855ea
    v6 = v2;
    v9 = a1;
    v14 = 0;
    if (v191 < 12) {
        int64_t v192 = *(int64_t *)(a6 + 464 + 8 * (int64_t)v191); // 0x1802855fe
        int64_t * v193 = (int64_t *)a5; // 0x18028560a
        if (*v193 == 0) {
            // 0x18028611a
            return a6 & -256 | 1;
        }
        int16_t v194 = *(int16_t *)v192; // 0x180285613
        if (v194 == 0) {
            // 0x18028611a
            return a6 & -256 | 1;
        }
        int64_t v195 = v192; // 0x180285624
        *(int16_t *)a4 = v194;
        *(int64_t *)a4 = a4 + 2;
        int64_t v196 = *v193 - 1; // 0x180285630
        *v193 = v196;
        while (v196 != 0) {
            // 0x180285613
            v195 += 2;
            int16_t v197 = *(int16_t *)v195; // 0x180285613
            if (v197 == 0) {
                // break -> 0x180286118
                return 0;
            }
            *(int16_t *)a4 = v197;
            *(int64_t *)a4 = a4 + 2;
            v196 = *v193 - 1;
            *v193 = v196;
        }
        // 0x18028611a
        return a4 & -256 | 1;
    }
    goto lab_0x180285688;
  lab_0x180285688:
    // 0x180285688
    *(int32_t *)function_180279918(v9, v14, v6, a4) = 22;
    // 0x18028611a
    return function_180271814(v9, v14, v6, a4) & -256;
  lab_0x180285434:;
    int64_t v198 = function_180279918(a1, v17, a3, a4); // 0x180285434
    *(int32_t *)v198 = 22;
    // 0x18028611a
    return v198 & -256;
  lab_0x1802855e0:;
    int64_t v199 = function_180286288(a1, (char)v13, a3, a4, 0x1000000000000 * a5 / 0x1000000000000, a6); // 0x1802855e3
    int64_t v200 = v13; // 0x1802855e8
    int64_t v201 = v199; // 0x1802855e8
    goto lab_0x180285572;
  lab_0x1802853e0:
    // 0x1802853e0
    v20 = (char)v1 == 0 ? 0x30000000000000 : 0;
    v10 = v12;
    v15 = 2;
    goto lab_0x18028531b;
  lab_0x18028531b:
    // 0x18028531b
    v7 = function_180286138(v10, v15, a4, a5, v20 / 0x1000000000000);
    // 0x18028611a
    return v7 & -256 | 1;
  lab_0x180285861:
    // 0x180285861
    v20 = (char)v1 == 0 ? 0x30000000000000 : 0;
    v10 = v21;
    v15 = 2;
    goto lab_0x18028531b;
  lab_0x180285572:
    // 0x180285572
    v17 = v200;
    v7 = v201;
    if ((char)v201 != 0) {
        // 0x18028611a
        return v7 & -256 | 1;
    }
    goto lab_0x180285434;
  lab_0x18028556d:;
    int64_t v202 = function_18028525c(a1, v18, a3, a4, v4, a6, 0x100000000000000 * v19 / 0x100000000000000); // 0x18028556d
    v200 = v18;
    v201 = v202;
    goto lab_0x180285572;
  lab_0x18028576b:;
    int32_t v203 = v22;
    int64_t * v204 = (int64_t *)a5; // 0x1802857d9
    if (*v204 != 0) {
        int64_t v205 = v203 < 1 ? (int64_t)&g556 : (int64_t)&g478; // 0x1802857d5
        int64_t v206 = v205; // 0x18028525c
        int16_t v207 = *(int16_t *)v206; // 0x1802857de
        while (v207 != 0) {
            // 0x1802857e8
            *(int16_t *)a5 = v207;
            *(int64_t *)a4 = a5 + 2;
            int64_t v208 = *v204 - 1; // 0x1802857f6
            *v204 = v208;
            v206 += 2;
            if (v208 == 0) {
                // break -> 0x1802857fc
                return 0;
            }
            v207 = *(int16_t *)v206;
        }
    }
    int32_t v209 = v203 < 0 ? -v203 : v203; // 0x180285780
    int32_t v210 = (v209 + (int32_t)(-0x77777777 * (int64_t)v209 / 0x100000000)) / 32; // 0x18028578a
    int32_t v211 = (v210 >> 31) + v210; // 0x180285794
    int32_t v212 = (v211 + (int32_t)(-0x77777777 * (int64_t)v211 / 0x100000000)) / 32; // 0x1802857ab
    uint32_t v213 = (v212 >> 31) + v212; // 0x1802857c0
    function_180286138((int64_t)v213, 2, a4, a5, 48);
    v20 = 0x30000000000000;
    v10 = -60 * v213 + v211;
    v15 = 2;
    goto lab_0x18028531b;
}

// Address range: 0x180286138 - 0x180286285
int64_t function_180286138(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a1 & 0xffffffff; // 0x180286159
    if ((int16_t)a5 != 0) {
        int64_t v2 = 0x100000000 * a2 / 0x100000000; // 0x180286156
        if (v2 >= a4) {
            // 0x1802861e7
            *(int64_t *)a4 = 0;
            // 0x1802861ea
            int64_t v3; // 0x180286138
            return &v3;
        }
        int64_t v4 = 0; // 0x18028620e
        if ((int32_t)v2 != 0) {
            int64_t v5 = v2 + 0xffffffff; // 0x180286206
            int64_t v6 = 0x100000000 * v5 / 0x80000000; // 0x180286213
            int64_t v7 = v5;
            int64_t v8 = 0; // 0x18028621f
            int64_t v9 = a5 & 0xffff; // 0x18028621f
            int32_t v10; // 0x180286138
            if (v1 != 0) {
                // 0x180286221
                v10 = (int32_t)(0x66666667 * 0x100000000 * v1 / 0x100000000 / 0x100000000) / 4;
                v8 = (v10 >> 31) + v10;
                v9 = v1 + 48 + -10 * v8;
            }
            // 0x18028624f
            *(int16_t *)(v6 + a3) = (int16_t)v9;
            int64_t v11 = 1; // 0x180286253
            int64_t v12 = v11 & 0xffffffff; // 0x180286271
            v6 -= 2;
            int64_t v13 = (v7 & 0xffffffff) + 0xffffffff; // 0x180286271
            while ((int32_t)v7 != 0) {
                // 0x180286217
                v7 = v13;
                int64_t v14 = v8;
                v8 = 0;
                v9 = a5 & 0xffff;
                if (v14 != 0) {
                    // 0x180286221
                    v10 = (int32_t)(0x66666667 * 0x100000000 * v14 / 0x100000000 / 0x100000000) / 4;
                    v8 = (v10 >> 31) + v10;
                    v9 = v14 + 48 + -10 * v8;
                }
                // 0x18028624f
                *(int16_t *)(v6 + a3) = (int16_t)v9;
                v11 = v12 + 1;
                v12 = v11 & 0xffffffff;
                v6 -= 2;
                v13 = (v7 & 0xffffffff) + 0xffffffff;
            }
            // 0x180286273
            v4 = 0x100000000 * v11;
        }
        int64_t result = v4 / 0x80000000; // 0x180286276
        *(int64_t *)a3 = result + a3;
        *(int64_t *)a4 = a4 - v4 / 0x100000000;
        // 0x1802861ea
        return result;
    }
    if (a4 < 2) {
        int64_t result2 = 2 * a4; // 0x1802861de
        *(int64_t *)a3 = a3 - result2;
        // 0x1802861e7
        *(int64_t *)a4 = 0;
        // 0x1802861ea
        return result2;
    }
    int64_t result3 = a4 - 1; // 0x1802861a9
    int64_t v15 = a3;
    int32_t v16 = (int32_t)(0x66666667 * 0x100000000 * v1 / 0x100000000 / 0x100000000) / 4; // 0x18028617e
    int32_t v17 = (v16 >> 31) + v16; // 0x180286186
    *(int16_t *)v15 = (int16_t)(v1 - 2 * (int64_t)((4 * v17 & 0x7ffc) + v17)) + 48;
    int64_t v18 = v15 + 2; // 0x1802861a0
    *(int64_t *)a4 = result3;
    int64_t v19 = v17; // 0x1802861b1
    while (result3 >= 2 && v17 >= 1) {
        // 0x180286174
        v15 = v18;
        v16 = (int32_t)(0x66666667 * 0x100000000 * v19 / 0x100000000 / 0x100000000) / 4;
        v17 = (v16 >> 31) + v16;
        *(int16_t *)v15 = (int16_t)(v19 - 2 * (int64_t)((4 * v17 & 0x7ffc) + v17)) + 48;
        v18 = v15 + 2;
        *(int64_t *)a4 = result3;
        v19 = v17;
    }
    // 0x1802861b9
    *(int64_t *)a3 = v18;
    int64_t v20 = v15; // 0x1802861da
    if (v15 <= a3) {
        // 0x1802861ea
        return result3;
    }
    uint16_t result4; // 0x1802861c1
    for (int64_t i = a3; i < v20; i += 2) {
        int16_t * v21 = (int16_t *)i; // 0x1802861c1
        result4 = *v21;
        int16_t * v22 = (int16_t *)v20; // 0x1802861c4
        *v22 = result4;
        v20 -= 2;
        *v21 = *v22;
    }
    // 0x1802861ea
    return result4;
}

// Address range: 0x180286288 - 0x18028678c
int64_t function_180286288(int64_t a1, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180286288
    int64_t v1; // 0x180286288
    switch (a2) {
        case 0: {
            // 0x1802862ec
            v1 = a6 + 672;
            // break -> 0x1802862f3
            return 0;
        }
        case 1: {
            // 0x1802862e3
            v1 = a6 + 680;
            // break -> 0x1802862f3
            return 0;
        }
        default: {
            // 0x1802862da
            v1 = a6 + 688;
            // break -> 0x1802862f3
            return 0;
        }
    }
    // 0x1802862f3
    int64_t v2; // bp-168, 0x180286288
    int64_t v3 = &v2; // 0x180286294
    int64_t v4 = *(int64_t *)v1;
    int64_t v5 = v3; // 0x180286300
    int64_t v6; // 0x180286288
    int64_t v7; // 0x180286288
    int64_t v8; // 0x180286288
    int64_t v9; // 0x180286288
    int16_t v10; // bp-88, 0x180286288
    int32_t v11; // 0x18028638e
    int64_t * v12; // 0x180286306
    if (*(int32_t *)(a6 + 344) == 1) {
        goto lab_0x1802864b6;
    } else {
        // 0x180286306
        v12 = (int64_t *)(a6 + 696);
        int64_t v13 = *v12; // 0x180286306
        v10 = *(int16_t *)(a3 + 20) + 1900;
        int64_t v14; // 0x180286288
        if (a2 != 2) {
            // 0x180286375
            v14 = function_18028deac(v13, 0, &v10, v4, 0, 0, 0);
        } else {
            // 0x180286364
            v14 = function_18028e008(v13, 0, &v10, v4, 0, 0);
        }
        // 0x180286389
        v11 = v14;
        v5 = v3;
        if (v11 == 0) {
            goto lab_0x1802864b6;
        } else {
            int64_t v15 = 0x100000000 * v14 / 0x80000000; // 0x180286399
            uint64_t v16 = v15 - (v15 | (int64_t)(v15 < 0xfffffffffffffff0)) & v15 + 16; // 0x1802863a6
            v5 = v3;
            if (v16 == 0) {
                goto lab_0x1802864b6;
            } else {
                if (v16 < 1025) {
                    int64_t v17 = v3 - __chkstk(v16, 0, (int64_t)&v10); // 0x1802863d4
                    int64_t v18 = v17 + 64; // 0x1802863da
                    v5 = -64;
                    if (v18 == 0) {
                        goto lab_0x1802864b6;
                    } else {
                        // 0x1802863e8
                        *(int32_t *)v18 = 0xcccc;
                        v6 = v18;
                        v8 = v17;
                        goto lab_0x180286406;
                    }
                } else {
                    int64_t * v19 = _malloc_base((int32_t)v16); // 0x1802863f0
                    int64_t v20 = (int64_t)v19; // 0x1802863f0
                    v7 = v20;
                    v9 = v3;
                    if (v19 == NULL) {
                        goto lab_0x18028640a;
                    } else {
                        // 0x180286400
                        *(int32_t *)v19 = 0xdddd;
                        v6 = v20;
                        v8 = v3;
                        goto lab_0x180286406;
                    }
                }
            }
        }
    }
  lab_0x18028652d:;
    // 0x18028652d
    uint16_t v21; // 0x1802864e3
    char v22; // 0x180286288
    int64_t v23; // 0x180286288
    int64_t v24; // 0x180286288
    int64_t v25; // 0x180286288
    int64_t v26; // 0x1802864d4
    if ((int32_t)function_180293ba0(v23, L"am/pm", v21) != 0) {
        int64_t v27 = (int32_t)function_180293ba0(v23, L"a/p", v21) != 0 ? v26 : v23 + 6;
        v24 = 112;
        v22 = 0;
        v25 = v27;
    } else {
        // 0x180286540
        v24 = 112;
        v22 = 0;
        v25 = v23 + 10;
    }
    goto lab_0x18028673c;
  lab_0x18028671e:;
    // 0x18028671e
    int16_t * v51; // 0x180286288
    *v51 = v21;
    int64_t * v52; // 0x180286288
    int64_t v53; // 0x180286288
    *v52 = v53;
    int64_t * v35; // 0x1802864c0
    *v35 = *v35 - 1;
    int64_t v30 = v23 + 2; // 0x180286732
    goto lab_0x180286767;
  lab_0x180286590:;
    // 0x180286590
    int64_t v42; // 0x180286288
    v24 = v42;
    v22 = 1;
    v25 = v26;
    goto lab_0x18028673c;
  lab_0x18028673c:;
    int64_t v28 = v24;
    *(char *)(v5 + 48) = v22;
    *(int64_t *)(v5 + 40) = a6;
    *(int64_t *)(v5 + 32) = a5;
    int64_t v29 = function_18028525c(a1, v28, a3, a4, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x180286754
    v30 = v25;
    if ((char)v29 == 0) {
        // 0x18028677a
        *(int32_t *)function_180279918(a1, v28, a3, a4) = 22;
        goto lab_0x18028648c_2;
    }
    goto lab_0x180286767;
  lab_0x180286767:;
    int16_t v31 = *(int16_t *)v30; // 0x18028676b
    int16_t v32 = v31; // 0x18028676f
    int64_t v33 = v30; // 0x18028676f
    if (v31 == 0) {
        // break -> 0x18028648c
        goto lab_0x18028648c_2;
    }
    goto lab_0x1802864c0;
  lab_0x1802864b6:;
    int16_t v71 = *(int16_t *)v4; // 0x1802864b6
    if (v71 == 0) {
        // 0x18028648c
        int32_t (*v72)(int32_t); // 0x1802862a1
        return function_18026ad50((int64_t)v72);
    }
    // 0x1802864c0
    v35 = (int64_t *)a5;
    v52 = (int64_t *)a4;
    v51 = (int16_t *)a3;
    v53 = a3 + 2;
    v32 = v71;
    v33 = v4;
    while (true) {
      lab_0x1802864c0:
        // 0x1802864c0
        v23 = v33;
        v21 = v32;
        int64_t v34 = *v35; // 0x1802864c0
        if (v34 == 0) {
            // break -> 0x18028648c
            return 0;
        }
        int64_t v36 = 0;
        v26 = v23 + 2;
        int64_t v37 = v36 + 1; // 0x1802864d8
        int64_t v38 = 1; // 0x1802864db
        int64_t v39 = v38; // 0x1802864e1
        int64_t v40 = v26; // 0x1802864e1
        while (*(int16_t *)v26 == v21) {
            // 0x1802864d4
            v36 = v37 & 0xffffffff;
            v26 = v40 + 2;
            v37 = v36 + 1;
            v38 = v39 + 1;
            v39 = v38;
            v40 = v26;
        }
        if (v21 < 101) {
            switch (v21) {
                case 100: {
                    int32_t v41 = v37; // 0x18028660c
                    v42 = 100;
                    v24 = 100;
                    v22 = 0;
                    v25 = v26;
                    switch (v41) {
                        case 1: {
                            goto lab_0x180286590;
                        }
                        case 2: {
                            goto lab_0x18028673c;
                        }
                        default: {
                            int32_t v43 = v41 - 3; // 0x18028661e
                            v24 = 97;
                            v22 = 0;
                            v25 = v26;
                            if (v43 == 0) {
                                goto lab_0x18028673c;
                            } else {
                                if (v43 != 1) {
                                    goto lab_0x18028671e;
                                } else {
                                    // 0x18028662c
                                    v24 = v36 + 62 & 0xffffffff;
                                    v22 = 0;
                                    v25 = v26;
                                    goto lab_0x18028673c;
                                }
                            }
                        }
                    }
                }
                case 39: {
                    if ((v37 & 1) != 0) {
                        int64_t v44 = 2 * v38 + v23; // 0x1802865ca
                        int16_t v45 = *(int16_t *)v44; // 0x1802865ce
                        int64_t v46 = v34; // 0x1802865d4
                        int16_t v47 = v45; // 0x1802865d4
                        int64_t v48 = v44; // 0x1802865d4
                        if (v45 == 0) {
                            // break -> 0x18028648c
                            return 0;
                        }
                        int64_t v49 = v48;
                        v30 = v49;
                        while (v46 != 0) {
                            int16_t v50 = v47;
                            v48 = v49 + 2;
                            v30 = v48;
                            if (v50 == 39) {
                                // break -> 0x180286767
                                return 0;
                            }
                            // 0x1802865f0
                            *v51 = v50;
                            *v52 = v53;
                            v46 = *v35 - 1;
                            *v35 = v46;
                            v47 = *(int16_t *)v48;
                            v30 = v48;
                            if (v47 == 0) {
                                // break -> 0x180286767
                                return 0;
                            }
                            v49 = v48;
                            v30 = v49;
                        }
                    } else {
                        // 0x1802865be
                        v30 = 0x100000000 * v37 / 0x80000000 + v23;
                    }
                    goto lab_0x180286767;
                }
                case 65: {
                    goto lab_0x18028652d;
                }
                case 72: {
                    // 0x18028657d
                    v42 = 72;
                    v24 = 72;
                    v22 = 0;
                    v25 = v26;
                    switch ((int32_t)v37) {
                        case 1: {
                            goto lab_0x180286590;
                        }
                        case 2: {
                            goto lab_0x18028673c;
                        }
                        default: {
                            goto lab_0x18028671e;
                        }
                    }
                }
                case 77: {
                    int32_t v54 = v37; // 0x180286546
                    v24 = 109;
                    v22 = 0;
                    v25 = v26;
                    switch (v54) {
                        case 1: {
                            // 0x180286570
                            v24 = 109;
                            v22 = 1;
                            v25 = v26;
                            goto lab_0x18028673c;
                        }
                        case 2: {
                            goto lab_0x18028673c;
                        }
                        default: {
                            int32_t v55 = v54 - 3; // 0x180286550
                            v24 = 98;
                            v22 = 0;
                            v25 = v26;
                            if (v55 == 0) {
                                goto lab_0x18028673c;
                            } else {
                                if (v55 != 1) {
                                    goto lab_0x18028671e;
                                } else {
                                    // 0x18028655e
                                    v24 = v36 + 63 & 0xffffffff;
                                    v22 = 0;
                                    v25 = v26;
                                    goto lab_0x18028673c;
                                }
                            }
                        }
                    }
                }
                default: {
                    if (v21 != 97) {
                        goto lab_0x18028671e;
                    } else {
                        goto lab_0x18028652d;
                    }
                }
            }
        } else {
            switch (v21) {
                case 104: {
                    // 0x180286714
                    v24 = 73;
                    v22 = 0;
                    v25 = v26;
                    switch ((int32_t)v37) {
                        case 1: {
                            // 0x180286734
                            v24 = 73;
                            v22 = 1;
                            v25 = v26;
                            goto lab_0x18028673c;
                        }
                        case 2: {
                            goto lab_0x18028673c;
                        }
                        default: {
                            goto lab_0x18028671e;
                        }
                    }
                }
                case 109: {
                    // 0x1802866fe
                    v24 = 77;
                    v22 = 0;
                    v25 = v26;
                    switch ((int32_t)v37) {
                        case 1: {
                            // 0x18028670a
                            v24 = 77;
                            v22 = 1;
                            v25 = v26;
                            goto lab_0x18028673c;
                        }
                        case 2: {
                            goto lab_0x18028673c;
                        }
                        default: {
                            goto lab_0x18028671e;
                        }
                    }
                }
                case 115: {
                    // 0x1802866e8
                    v24 = 83;
                    v22 = 0;
                    v25 = v26;
                    switch ((int32_t)v37) {
                        case 1: {
                            // 0x1802866f4
                            v24 = 83;
                            v22 = 1;
                            v25 = v26;
                            goto lab_0x18028673c;
                        }
                        case 2: {
                            goto lab_0x18028673c;
                        }
                        default: {
                            goto lab_0x18028671e;
                        }
                    }
                }
                default: {
                    int32_t v56 = (int32_t)v21 - 116; // 0x18028665c
                    if (v56 == 0) {
                        int32_t v57 = *(int32_t *)(a3 + 8); // 0x18028668a
                        if ((int32_t)v37 != 1) {
                            int64_t v58 = v34; // 0x1802866e4
                            int16_t v59; // 0x180286288
                            int16_t v60 = v59; // 0x1802866e4
                            int64_t v61; // 0x180286288
                            int64_t v62 = v61; // 0x1802866e4
                            v30 = v26;
                            if (v59 != 0) {
                                int64_t v63 = v58; // 0x1802866c2
                                v30 = v26;
                                while (v63 != 0) {
                                    int64_t v64 = v62;
                                    int16_t v65 = v60;
                                    int64_t v66 = v64 + 2; // 0x1802866cf
                                    *v51 = v65;
                                    *v52 = v53;
                                    int64_t v67 = *v35; // 0x1802866db
                                    int64_t v68 = v67 - 1; // 0x1802866db
                                    *v35 = v68;
                                    int16_t v69 = *(int16_t *)v66; // 0x1802866de
                                    v58 = v68;
                                    v60 = v69;
                                    v62 = v66;
                                    v30 = v26;
                                    if (v69 == 0) {
                                        // break -> 0x180286767
                                        return 0;
                                    }
                                    v63 = v58;
                                    v30 = v26;
                                }
                            }
                        } else {
                            // 0x1802866ab
                            *v51 = *(int16_t *)*(int64_t *)((v57 > 11 ? 664 : 656) + a6);
                            *v52 = v53;
                            *v35 = *v35 - 1;
                            v30 = v26;
                        }
                        goto lab_0x180286767;
                    } else {
                        if (v56 != 5) {
                            goto lab_0x18028671e;
                        } else {
                            int32_t v70 = v37; // 0x18028666a
                            v24 = 121;
                            v22 = 0;
                            v25 = v26;
                            if (v70 == 2) {
                                goto lab_0x18028673c;
                            } else {
                                if (v70 != 4) {
                                    goto lab_0x18028671e;
                                } else {
                                    // 0x180286678
                                    v24 = v36 + 86 & 0xffffffff;
                                    v22 = 0;
                                    v25 = v26;
                                    goto lab_0x18028673c;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    // 0x18028648c
    return function_18026ad50((int64_t)g731);
  lab_0x18028640a:;
    int64_t v73 = v9;
    int64_t v74 = v7;
    v5 = v73;
    if (v74 != 0) {
        int64_t v75 = *v12; // 0x180286413
        int64_t v76; // 0x180286288
        if (a2 != 2) {
            // 0x180286439
            *(int64_t *)(v73 + 48) = 0;
            *(int32_t *)(v73 + 40) = v11;
            *(int64_t *)(v73 + 32) = v74;
            int64_t v77 = function_18028deac(v75, 0, &v10, v4, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x180286447
            v76 = v77;
        } else {
            // 0x180286429
            *(int32_t *)(v73 + 40) = v11;
            *(int64_t *)(v73 + 32) = v74;
            int64_t v78 = function_18028e008(v75, 0, &v10, v4, (int64_t)&g1381, (int64_t)&g1381); // 0x180286432
            v76 = v78;
        }
        int64_t v79 = v76 + 0xffffffff;
        int32_t v80 = v79; // 0x180286475
        if (v80 >= 0 == (v80 != 0)) {
            // 0x180286458
            if (*(int64_t *)a5 != 0) {
                // 0x18028645d
                abort();
                // UNREACHABLE
            }
        }
        int64_t v81 = v74 - 16; // 0x180286479
        if (*(int32_t *)v81 == 0xdddd) {
            // 0x180286485
            function_18028acc0(v81, v79 & 0xffffffff);
        }
      lab_0x18028648c_2:
        // 0x18028648c
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x1802864b6;
  lab_0x180286406:
    // 0x180286406
    v7 = v6 + 16;
    v9 = v8;
    goto lab_0x18028640a;
}

// Address range: 0x18028678c - 0x180286915
int64_t function_18028678c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18028678c
    int64_t v1; // 0x18028678c
    int64_t v2; // 0x18028678c
    int64_t v3; // 0x18028678c
    int64_t v4; // 0x18028678c
    int64_t v5; // 0x18028678c
    int64_t v6; // 0x18028678c
    int64_t v7; // 0x18028678c
    int64_t v8; // 0x18028678c
    int64_t v9; // 0x18028678c
    int64_t v10; // 0x18028678c
    int64_t v11; // 0x18028678c
    int64_t v12; // 0x18028678c
    int64_t v13; // 0x18028678c
    int64_t v14; // 0x18028678c
    int64_t v15; // 0x18028678c
    int64_t v16; // 0x18028678c
    int64_t v17; // 0x18028678c
    int64_t v18; // bp-80, 0x18028678c
    int64_t result; // 0x18028678c
    int16_t * v19; // 0x1802867d5
    int64_t v20; // 0x18028678c
    int64_t v21; // 0x18028678c
    if (a1 == 0 || a2 == 0) {
        goto lab_0x1802867b9;
    } else {
        // 0x1802867d5
        v19 = (int16_t *)a1;
        *v19 = 0;
        if (a3 == 0) {
            goto lab_0x1802867b9;
        } else {
            // 0x1802867de
            function_1802718b0(&v18, a6);
            int64_t v22 = a5; // 0x1802867f2
            int64_t v23; // bp-72, 0x18028678c
            if (a5 == 0) {
                // 0x1802867f4
                v22 = *(int64_t *)(v23 + 288);
            }
            int64_t v24 = a1; // bp-88, 0x180286805
            int64_t v25 = a2; // 0x180286809
            v20 = &v24;
            int64_t v26 = &v25;
            v21 = &v23;
            v7 = a2;
            v12 = a1;
            v10 = a3;
            v1 = a3;
            v4 = a4;
            while (true) {
              lab_0x18028680d:;
                int64_t v27 = v4;
                int64_t v28 = v1;
                int64_t v29 = v10;
                int64_t v30 = v12;
                uint16_t v31 = *(int16_t *)v29; // 0x18028680d
                v9 = v7;
                v14 = v30;
                v17 = 0;
                v3 = v28;
                v6 = v27;
                switch (v31) {
                    case 0: {
                        goto lab_0x1802868a7_2;
                    }
                    case 37: {
                        // 0x18028683b
                        if (a4 == 0) {
                            goto lab_0x1802868bf;
                        }
                        int64_t v32 = v29 + 2; // 0x180286840
                        int16_t v33 = *(int16_t *)v32; // 0x180286847
                        int64_t v34 = 0; // 0x18028684e
                        int16_t v35 = v33; // 0x18028684e
                        int64_t v36 = v32; // 0x18028684e
                        if (v33 == 35) {
                            // 0x180286850
                            v36 = v29 + 4;
                            v35 = *(int16_t *)v36;
                            v34 = 1;
                        }
                        int64_t v37 = v36;
                        int16_t v38 = v35;
                        int16_t v39 = v38; // 0x18028685d
                        int64_t v40 = v37; // 0x18028685d
                        if (v38 != 69 != v38 != 79) {
                            // 0x180286865
                            v40 = v37 + 2;
                            v39 = *(int16_t *)v40;
                        }
                        // 0x18028686c
                        v15 = v39;
                        int64_t v41 = v25; // 0x180286890
                        if ((char)function_18028525c(v21, v15, a4, v20, v26, v22, v34) == 0) {
                            // 0x1802868b6
                            if (v41 == 0) {
                                goto lab_0x180286908;
                            } else {
                                // 0x1802868bb
                                *v19 = 0;
                                goto lab_0x1802868bf;
                            }
                        }
                        // 0x180286896
                        v8 = v41;
                        v13 = v24;
                        v16 = v15;
                        v11 = v40;
                        v2 = a4;
                        v5 = v20;
                        goto lab_0x18028689a;
                    }
                    default: {
                        // 0x18028681f
                        *(int16_t *)v30 = v31;
                        int64_t v42 = v24 + 2; // 0x18028682a
                        int64_t v43 = v25 - 1; // 0x18028682e
                        v24 = v42;
                        v25 = v43;
                        v8 = v43;
                        v13 = v42;
                        v16 = v31;
                        v11 = v29;
                        v2 = v28;
                        v5 = v27;
                        goto lab_0x18028689a;
                    }
                }
            }
          lab_0x1802868a7_2:
            // 0x1802868a7
            if (v9 == 0) {
                goto lab_0x180286908;
            } else {
                // 0x1802868ac
                *(int16_t *)v14 = 0;
                result = a2 - v25;
                goto lab_0x1802868d2;
            }
        }
    }
  lab_0x1802868bf:
    // 0x1802868bf
    *(int32_t *)function_180279918(v21, v15, a4, v20) = 22;
    function_180271814(v21, v15, a4, v20);
    result = 0;
    goto lab_0x1802868d2;
  lab_0x18028689a:
    // 0x18028689a
    v7 = v8;
    v12 = v13;
    v10 = v11 + 2;
    v1 = v2;
    v4 = v5;
    v9 = v8;
    v14 = v13;
    v17 = v16;
    v3 = v2;
    v6 = v5;
    if (v8 == 0) {
        // break -> 0x1802868a7
        goto lab_0x1802868a7_2;
    }
    goto lab_0x18028680d;
  lab_0x1802867b9:
    // 0x1802867b9
    *(int32_t *)function_180279918(a1, a2, a3, a4) = 22;
    function_180271814(a1, a2, a3, a4);
    // 0x1802868e6
    return 0;
  lab_0x180286908:
    // 0x180286908
    *v19 = 0;
    *(int32_t *)function_180279918(v14, v17, v3, v6) = 34;
    result = 0;
    goto lab_0x1802868d2;
  lab_0x1802868d2:;
    // 0x1802868d2
    char v44; // 0x18028678c
    if (v44 != 0) {
        int32_t * v45 = (int32_t *)(v18 + 936); // 0x1802868dc
        *v45 = *v45 & -3;
    }
    // 0x1802868e6
    return result;
}

// Address range: 0x180286920 - 0x180286953
int64_t function_180286920(int64_t a1) {
    int64_t result = 0; // 0x180286937
    if (function_180286970(a1) != 0) {
        // 0x180286939
        int64_t v1; // 0x180286920
        int64_t v2; // 0x180286920
        int64_t v3; // 0x180286920
        result = (int32_t)function_18029d4a0(a1, v3, v2, v1) != 0;
    }
    // 0x180286948
    return result;
}

// Address range: 0x180286960 - 0x180286968
int64_t function_180286960(int64_t a1) {
    // 0x180286960
    g1289 = a1;
    int64_t result; // 0x180286960
    return result;
}

// Address range: 0x180286970 - 0x1802869a7
int64_t function_180286970(int64_t a1) {
    // 0x180286970
    __acrt_lock(0);
    int64_t v1 = (int64_t)g731; // 0x18028697e
    uint64_t v2 = v1 & 63; // 0x180286987
    int64_t v3 = g1289 ^ v1; // 0x180286991
    int64_t result = v3; // 0x180286994
    if (v2 != 0) {
        result = v3 << 64 - v2 | v3 >> v2;
    }
    int64_t v4; // 0x180286970
    __acrt_lock2(0, v4);
    return result;
}

// Address range: 0x180286a10 - 0x180286a1c
int32_t (*function_180286a10(int32_t (*NewHandler)(int32_t)))(int32_t) {
    // 0x180286a10
    return _set_new_handler(NewHandler);
}

// Address range: 0x180286a1c - 0x180286a2f
int64_t function_180286a1c(int32_t a1) {
    // 0x180286a1c
    if (a1 == -0x1f928c9d) {
        // 0x180286a28
        int64_t v1; // 0x180286a1c
        return function_180286a30(0xe06d7363, v1);
    }
    // 0x180286a25
    return 0;
}

// Address range: 0x180286a30 - 0x180286b9b
int64_t function_180286a30(int64_t a1, int64_t a2) {
    int64_t v1 = function_180288084(); // 0x180286a49
    if (v1 == 0) {
        // 0x180286a7a
        return 0;
    }
    int64_t v2 = *(int64_t *)v1; // 0x180286a59
    int64_t v3 = v2 + 176;
    int64_t v4 = v2;
    int32_t * v5 = (int32_t *)v4;
    while (*v5 != (int32_t)a1) {
        // 0x180286a6f
        if (v4 == v3) {
            // 0x180286a7a
            return 0;
        }
        v4 += 16;
        v5 = (int32_t *)v4;
    }
    // 0x180286a8f
    if (v4 == 0) {
        // 0x180286a7a
        return 0;
    }
    int64_t * v6 = (int64_t *)(v4 + 8); // 0x180286a94
    int64_t v7 = *v6; // 0x180286a94
    if (v7 == 0) {
        // 0x180286a7a
        return 0;
    }
    if (v7 == 5) {
        // 0x180286aa3
        *v6 = 0;
        // 0x180286a7a
        return v7 + 0xfffffffc & 0xffffffff;
    }
    // 0x180286aad
    if (v7 == 1) {
        // 0x180286a7a
        return 0xffffffff;
    }
    int64_t * v8 = (int64_t *)(v1 + 8); // 0x180286ab8
    int64_t v9 = *v8; // 0x180286ab8
    *v8 = a2;
    uint32_t v10 = *(int32_t *)(v4 + 4); // 0x180286ac0
    if (v10 != 8) {
        // 0x180286b83
        *v6 = 0;
        function_18029d4a0((int64_t)v10, a2, v7, 0);
        // 0x180286b92
        *v8 = v9;
        // 0x180286a7a
        return 0xffffffff;
    }
    int64_t v11 = v2 + 48;
    *(int64_t *)(v11 + 8) = 0;
    while (v11 != v3) {
        // 0x180286ad7
        v11 += 16;
        *(int64_t *)(v11 + 8) = 0;
    }
    int32_t v12 = *v5; // 0x180286ae4
    int32_t * v13 = (int32_t *)(v1 + 16); // 0x180286aea
    uint32_t v14 = *v13; // 0x180286aea
    int64_t v15 = 130; // 0x180286a30
    int64_t v16; // 0x180286a30
    switch (v12) {
        case -0x3fffff73: {
            goto lab_0x180286b6e;
        }
        case -0x3fffff72: {
            // 0x180286b62
            v15 = 131;
            goto lab_0x180286b6e;
        }
        case -0x3fffff71: {
            // 0x180286b5b
            v15 = 134;
            goto lab_0x180286b6e;
        }
        case -0x3fffff70: {
            // 0x180286b54
            v15 = 129;
            goto lab_0x180286b6e;
        }
        case -0x3fffff6f: {
            // 0x180286b4d
            v15 = 132;
            goto lab_0x180286b6e;
        }
        case -0x3fffff6e: {
            // 0x180286b46
            v15 = 138;
            goto lab_0x180286b6e;
        }
        case -0x3fffff6d: {
            // 0x180286b3f
            v15 = 133;
            goto lab_0x180286b6e;
        }
        case -0x3ffffd4c: {
            // 0x180286b6e
            v15 = 142;
            goto lab_0x180286b6e;
        }
        default: {
            // 0x180286b27
            v15 = 141;
            v16 = v14;
            if (v12 != -0x3ffffd4b) {
                goto lab_0x180286b71;
            } else {
                goto lab_0x180286b6e;
            }
        }
    }
  lab_0x180286b6e:
    // 0x180286b6e
    *v13 = (int32_t)v15;
    v16 = v15;
    goto lab_0x180286b71;
  lab_0x180286b71:
    // 0x180286b71
    function_18029d4a0(8, v16, v7, 0);
    *v13 = v14;
    // 0x180286b92
    *v8 = v9;
    // 0x180286a7a
    return 0xffffffff;
}

// Address range: 0x180286b9c - 0x180286d59
int64_t function_180286b9c(int64_t a1, int32_t a2, int32_t a3, int64_t * a4, int64_t * a5) {
    int64_t v1 = a3;
    *a5 = 0;
    *a4 = 1;
    int64_t v2 = 0; // 0x180286bd8
    if (a2 != 0) {
        int64_t v3 = a2;
        *(int64_t *)v3 = v1;
        v2 = v3 + 8;
    }
    int64_t v4 = (int64_t)a4;
    int64_t v5; // 0x180286b9c
    int64_t v6 = &v5; // 0x180286be1
    int64_t v7 = v1; // 0x180286be1
    int64_t v8 = 0; // 0x180286be1
    int64_t v9 = a1; // 0x180286be1
    int64_t v10; // 0x180286b9c
    int64_t v11; // 0x180286b9c
    int64_t v12; // 0x180286b9c
    int64_t v13; // 0x180286b9c
    int64_t v14; // 0x180286b9c
    int64_t v15; // 0x180286b9c
    while (true) {
        int64_t v16 = v9;
        int64_t v17 = v8;
        int64_t v18 = v7;
        char * v19 = (char *)v16; // 0x180286be4
        int64_t v20; // 0x180286b9c
        int64_t v21; // 0x180286b9c
        int64_t v22; // 0x180286b9c
        int64_t v23; // 0x180286b9c
        char v24; // 0x180286b9c
        if (*v19 != 34) {
            // 0x180286bf8
            *a5 = *a5 + 1;
            int64_t v25 = 0; // 0x180286bfe
            if (v18 != 0) {
                // 0x180286c00
                *(char *)v18 = *v19;
                v25 = v18 + 1;
            }
            int64_t v26 = v25;
            char v27 = *v19; // 0x180286c07
            int64_t v28 = v16 + 1; // 0x180286c0a
            int64_t v29 = function_180295360((int64_t)v27 & 0xffffffff); // 0x180286c0f
            int64_t v30 = v29; // 0x180286c16
            int64_t v31 = v26; // 0x180286c16
            int64_t v32 = v28; // 0x180286c16
            if ((int32_t)v29 != 0) {
                // 0x180286c18
                *a5 = *a5 + 1;
                int64_t v33 = v29; // 0x180286c1e
                int64_t v34 = 0; // 0x180286c1e
                if (v26 != 0) {
                    // 0x180286c20
                    *(char *)v26 = *(char *)v28;
                    v33 = v29 & -256;
                    v34 = v26 + 1;
                }
                // 0x180286c27
                v30 = v33;
                v31 = v34;
                v32 = v16 + 2;
            }
            // 0x180286c2a
            v14 = v32;
            v12 = v31;
            v10 = v30;
            v20 = v10;
            v22 = v12;
            v21 = v17;
            v24 = v27;
            v23 = v14;
            if (v27 == 0) {
                // break -> 0x180286c4b
                return 0;
            }
        } else {
            // 0x180286be9
            v20 = v6;
            v22 = v18;
            v21 = (char)v17 == 0;
            v24 = 34;
            v23 = v16 + 1;
        }
        // 0x180286c2f
        v9 = v23;
        v8 = v21;
        v7 = v22;
        int64_t v35 = v20;
        if ((char)v8 == 0) {
            char v36 = v24;
            if (v36 != 32 != v36 != 9) {
                // 0x180286c40
                v11 = v35;
                v13 = 0;
                v15 = v9;
                if (v7 == 0) {
                    goto lab_0x180286c4e;
                } else {
                    // 0x180286c45
                    *(char *)(v7 - 1) = 0;
                    v11 = v35;
                    v13 = v7;
                    v15 = v9;
                    goto lab_0x180286c4e;
                }
            }
        }
        // 0x180286be4
        v6 = v35;
    }
    // 0x180286c4b
    v11 = v10;
    v13 = v12;
    v15 = v14 - 1;
    goto lab_0x180286c4e;
  lab_0x180286ccc:;
    // 0x180286ccc
    int64_t v77; // 0x180286b9c
    int64_t v87 = v77;
    int64_t v76; // 0x180286b9c
    int64_t v88 = v76;
    int32_t v75; // 0x180286b9c
    int32_t v89 = v75;
    int64_t v61; // 0x180286b9c
    int64_t v90 = v61; // 0x180286cce
    int64_t v74; // 0x180286b9c
    int64_t v91 = v74; // 0x180286cce
    int64_t v92 = v74; // 0x180286cce
    int64_t v93 = v61; // 0x180286cce
    if ((int32_t)v74 != 0) {
        int64_t v94 = v90;
        int64_t v95 = 0; // 0x180286cc1
        if (v94 != 0) {
            // 0x180286cc3
            *(char *)v94 = 92;
            v95 = v94 + 1;
        }
        int64_t v96 = v91 + 0xffffffff; // 0x180286cbc
        int64_t v97 = v96 & 0xffffffff; // 0x180286cbc
        *a5 = *a5 + 1;
        v92 = v97;
        v93 = v95;
        while ((int32_t)v96 != 0) {
            // 0x180286cbc
            v94 = v95;
            v95 = 0;
            if (v94 != 0) {
                // 0x180286cc3
                *(char *)v94 = 92;
                v95 = v94 + 1;
            }
            // 0x180286cc9
            v96 = v97 + 0xffffffff;
            v97 = v96 & 0xffffffff;
            *a5 = *a5 + 1;
            v92 = v97;
            v93 = v95;
        }
    }
    int64_t v83 = v93;
    int64_t v86 = v92;
    char * v85 = (char *)v87;
    char v98 = *v85; // 0x180286cd0
    if (v98 == 0) {
        // break -> 0x180286d1a
        goto lab_0x180286d1a_2;
    }
    if ((char)v88 != 0) {
        goto lab_0x180286ce3;
    } else {
        switch (v98) {
            case 32: {
                goto lab_0x180286d1a_2;
            }
            case 9: {
                goto lab_0x180286d1a_2;
            }
            default: {
                goto lab_0x180286ce3;
            }
        }
    }
  lab_0x180286ce3:;
    int64_t v99 = v83; // 0x180286ce5
    int64_t v100 = v87; // 0x180286ce5
    if (v89 != 0) {
        char v101 = v98; // 0x180286cea
        int64_t v102 = 0; // 0x180286cea
        if (v83 != 0) {
            // 0x180286cec
            *(char *)v83 = v98;
            v101 = *v85;
            v102 = v83 + 1;
        }
        int64_t v103 = v102;
        int64_t v104 = v103; // 0x180286cfb
        int64_t v105 = v87; // 0x180286cfb
        if ((int32_t)function_180295360((int64_t)v101) != 0) {
            // 0x180286cfd
            *a5 = *a5 + 1;
            int64_t v106 = v87 + 1; // 0x180286d00
            v104 = 0;
            v105 = v106;
            if (v103 != 0) {
                // 0x180286d08
                *(char *)v103 = *(char *)v106;
                v104 = v103 + 1;
                v105 = v106;
            }
        }
        // 0x180286d0f
        *a5 = *a5 + 1;
        v99 = v104;
        v100 = v105;
    }
    int64_t v57 = v99; // 0x180286d15
    int64_t v58 = v88; // 0x180286d15
    int64_t v59 = v100 + 1; // 0x180286d15
    goto lab_0x180286c82;
  lab_0x180286cb8:;
    // 0x180286cb8
    int64_t v72; // 0x180286b9c
    v74 = v72 / 2;
    int32_t v78; // 0x180286b9c
    v75 = v78;
    int64_t v79; // 0x180286b9c
    v76 = v79;
    int64_t v80; // 0x180286b9c
    v77 = v80;
    goto lab_0x180286ccc;
  lab_0x180286caf:
    // 0x180286caf
    v78 = 0;
    int64_t v60; // 0x180286b9c
    v79 = (char)v60 == 0;
    int64_t v73; // 0x180286b9c
    v80 = v73;
    goto lab_0x180286cb8;
  lab_0x180286c4e:;
    unsigned char v37 = *(char *)v15; // 0x180286c51
    int64_t v38 = v11 & -256 | (int64_t)v37; // 0x180286c51
    int64_t v39 = v2; // 0x180286c55
    int64_t result = v38; // 0x180286c55
    if (v37 != 0) {
        int64_t v40 = v38; // 0x180286c51
        int64_t v41 = v2;
        int64_t v42 = v15; // 0x180286b9c
        int64_t v43 = 0; // 0x180286b9c
        int64_t v44 = v13; // 0x180286b9c
        while (true) {
            int64_t v45 = v44;
            int64_t v46 = v41;
            char v47 = v40; // 0x180286c5b
            int64_t v48 = v42; // 0x180286c5d
            int64_t v49 = v40; // 0x180286c5d
            int64_t v50 = v40; // 0x180286c5d
            int64_t v51 = v42; // 0x180286c5d
            char v52 = v47; // 0x180286c5d
            if (v47 != 32 != v47 != 9) {
                int64_t v53 = v48 + 1; // 0x180286c63
                unsigned char v54 = *(char *)v53; // 0x180286c66
                int64_t v55 = v49 & -256 | (int64_t)v54; // 0x180286c66
                v48 = v53;
                v49 = v55;
                v50 = v55;
                v51 = v53;
                v52 = v54;
                while (v54 != 32 != v54 != 9) {
                    // 0x180286c63
                    v53 = v48 + 1;
                    v54 = *(char *)v53;
                    v55 = v49 & -256 | (int64_t)v54;
                    v48 = v53;
                    v49 = v55;
                    v50 = v55;
                    v51 = v53;
                    v52 = v54;
                }
            }
            // 0x180286c6a
            v39 = v46;
            result = v50;
            if (v52 == 0) {
                // break -> 0x180286d2d
                return 0;
            }
            int64_t v56 = 0; // 0x180286c75
            if (v46 != 0) {
                // 0x180286c77
                *(int64_t *)v46 = v45;
                v56 = v46 + 8;
            }
            // 0x180286c7e
            v41 = v56;
            *a4 = v4 + 1;
            v57 = v45;
            v58 = v43;
            v59 = v51;
            while (true) {
              lab_0x180286c82:
                // 0x180286c82
                v60 = v58;
                v61 = v57;
                char v62 = *(char *)v59; // 0x180286c90
                int64_t v63 = v59; // 0x180286c95
                int64_t v64 = v59; // 0x180286c95
                int64_t v65 = 0; // 0x180286c95
                char v66 = v62; // 0x180286c95
                if (v62 == 92) {
                    int64_t v67 = v63 + 1; // 0x180286c8b
                    int64_t v68 = 1; // 0x180286c8e
                    char v69 = *(char *)v67; // 0x180286c90
                    int64_t v70 = v68; // 0x180286c95
                    v63 = v67;
                    v64 = v67;
                    v65 = v68;
                    v66 = v69;
                    while (v69 == 92) {
                        // 0x180286c8b
                        v67 = v63 + 1;
                        v68 = v70 + 1 & 0xffffffff;
                        v69 = *(char *)v67;
                        v70 = v68;
                        v63 = v67;
                        v64 = v67;
                        v65 = v68;
                        v66 = v69;
                    }
                }
                char v71 = v66;
                v72 = v65;
                v73 = v64;
                v74 = v72;
                v75 = 1;
                v76 = v60;
                v77 = v73;
                if (v71 != 34) {
                    goto lab_0x180286ccc;
                } else {
                    // 0x180286c9c
                    v78 = 1;
                    v79 = v60;
                    v80 = v73;
                    if ((v72 & 1) != 0) {
                        goto lab_0x180286cb8;
                    } else {
                        if ((char)v60 == 0) {
                            goto lab_0x180286caf;
                        } else {
                            int64_t v81 = v73 + 1; // 0x180286ca5
                            v78 = 1;
                            v79 = v60;
                            v80 = v81;
                            if (*(char *)v81 != v71) {
                                goto lab_0x180286caf;
                            } else {
                                goto lab_0x180286cb8;
                            }
                        }
                    }
                }
            }
          lab_0x180286d1a_2:;
            int64_t v82 = 0; // 0x180286d1d
            if (v83 != 0) {
                // 0x180286d1f
                *(char *)v83 = 0;
                v82 = v83 + 1;
            }
            // 0x180286d25
            *a5 = *a5 + 1;
            unsigned char v84 = *v85; // 0x180286c51
            v40 = v86 & -256 | (int64_t)v84;
            v42 = v87;
            v43 = v88;
            v44 = v82;
            v39 = v41;
            result = v40;
            if (v84 == 0) {
                // break -> 0x180286d2d
                return 0;
            }
        }
    }
    // 0x180286d2d
    if (v39 != 0) {
        // 0x180286d32
        *(int64_t *)v39 = 0;
    }
    // 0x180286d36
    *a4 = v4 + 1;
    return result;
}

// Address range: 0x180286d5c - 0x180286db9
int64_t function_180286d5c(uint64_t a1, uint64_t a2, uint64_t a3) {
    // 0x180286d5c
    if (a1 >= 0x1fffffffffffffff || 0xffffffffffffffff / a3 <= a2) {
        // 0x180286db3
        return 0;
    }
    int64_t v1 = 8 * a1; // 0x180286d82
    uint64_t v2 = a3 * a2; // 0x180286d86
    int64_t result = 0; // 0x180286d93
    if (v2 < -1 - v1) {
        int64_t * v3 = _calloc_base((int32_t)(v2 + v1), 1); // 0x180286d9d
        function_18028acc0(0, 1);
        result = (int64_t)v3;
    }
    // 0x180286db3
    return result;
}

// Address range: 0x180286dbc - 0x180286f39
int64_t function_180286dbc(int64_t a1) {
    int32_t v1 = a1; // 0x180286dd4
    if (v1 == 0) {
        // 0x180286f26
        return 0;
    }
    if (v1 >= 3) {
        // 0x180286de4
        int64_t v2; // 0x180286dbc
        int64_t v3; // 0x180286dbc
        int64_t v4; // 0x180286dbc
        *(int32_t *)function_180279918(a1, v4, v3, v2) = 22;
        function_180271814(a1, v4, v3, v2);
        // 0x180286f26
        return 22;
    }
    // 0x180286dfa
    __acrt_initialize_multibyte();
    function_18029467c(0, (int64_t)&g1290, 260);
    g1345 = &g1290;
    int64_t v5; // 0x180286dbc
    if (g1349 == NULL) {
        // 0x180286e2e
        v5 = &g1290;
        goto lab_0x180286e31;
    } else {
        // 0x180286e29
        v5 = (int64_t)g1349;
        if (*g1349 != 0) {
            goto lab_0x180286e31;
        } else {
            // 0x180286e2e
            v5 = &g1290;
            goto lab_0x180286e31;
        }
    }
  lab_0x180286e31:;
    int32_t v6 = 0; // bp+24, 0x180286e35
    int64_t v7 = 0; // bp+32, 0x180286e45
    function_180286b9c(v5, 0, 0, (int64_t *)&v6, &v7);
    int64_t v8 = v6; // 0x180286e53
    int64_t v9 = function_180286d5c(v8, v7, 1); // 0x180286e64
    int64_t v10; // 0x180286dbc
    int64_t v11; // 0x180286dbc
    int64_t v12; // 0x180286dbc
    if (v9 != 0) {
        // 0x180286e82
        function_180286b9c(v5, (int32_t)v9, (int32_t)(v9 + 8 * v8), (int64_t *)&v6, &v7);
        if (v1 != 1) {
            int64_t v13 = 0; // bp+16, 0x180286ebc
            int64_t v14 = function_180294674(v9, &v13); // 0x180286ec3
            int64_t v15 = v13;
            if ((int32_t)v14 != 0) {
                int64_t v16 = &v13; // 0x180286eb8
                function_18028acc0(v15, v16);
                v13 = 0;
                function_18028acc0(v9, v16);
                // 0x180286f26
                return v14 & 0xffffffff & 0xffffffff;
            }
            int32_t v17 = 0; // 0x180286ef4
            if (*(int64_t *)v15 != 0) {
                int64_t v18 = v15 + 8; // 0x180286ef6
                int64_t v19 = 1; // 0x180286efa
                int64_t v20 = v18; // 0x180286f00
                int64_t v21 = v19; // 0x180286f00
                while (*(int64_t *)v18 != 0) {
                    // 0x180286ef6
                    v18 = v20 + 8;
                    v19 = v21 + 1;
                    v20 = v18;
                    v21 = v19;
                }
                // 0x180286f02
                v17 = v19;
            }
            // 0x180286f02
            *(int32_t *)&g1346 = v17;
            v13 = 0;
            g1347 = v15;
            function_18028acc0(0, v15);
            v13 = 0;
            v10 = v9;
            v12 = v15;
            v11 = 0;
        } else {
            // 0x180286ea4
            g1347 = v9;
            *(int32_t *)&g1346 = v6 - 1;
            v10 = 0;
            v12 = v9;
            v11 = 0;
        }
    } else {
        int64_t v22 = function_180279918(v8, v7, 1, (int64_t)&v6); // 0x180286e71
        int64_t v23 = v9 + 12; // 0x180286e76
        *(int32_t *)v22 = (int32_t)v23;
        v10 = 0;
        v12 = v7;
        v11 = v23 & 0xffffffff;
    }
    // 0x180286f21
    function_18028acc0(v10, v12);
    // 0x180286f26
    return v11 & 0xffffffff;
}

// Address range: 0x180286f3c - 0x180286faf
int64_t function_180286f3c(int64_t a1) {
    // 0x180286f3c
    if (g1291 != 0) {
        // 0x180286fa4
        return 0;
    }
    // 0x180286f55
    __acrt_initialize_multibyte();
    int64_t v1; // 0x180286f3c
    int64_t v2 = function_18029539c(a1, v1); // 0x180286f5a
    if (v2 == 0) {
        // 0x180286f67
        function_18028acc0(0, v1);
        // 0x180286fa4
        return 0xffffffff;
    }
    int64_t v3 = function_180287020(v2, v1); // 0x180286f76
    int64_t result = 0xffffffff; // 0x180286f7e
    if (v3 != 0) {
        // 0x180286f85
        g1294 = v3;
        g1291 = v3;
        result = 0;
    }
    // 0x180286f93
    function_18028acc0(0, v1);
    function_18028acc0(v2, v1);
    // 0x180286fa4
    return result;
}

// Address range: 0x180286fb0 - 0x18028701e
int64_t function_180286fb0(int64_t a1) {
    // 0x180286fb0
    if (g1292 != 0) {
        // 0x180287013
        return 0;
    }
    int64_t v1 = function_1802954ac(); // 0x180286fc9
    int64_t result; // 0x180286fb0
    int64_t v2; // 0x180286fb0
    if (v1 != 0) {
        // 0x180287002
        g1293 = v1;
        g1292 = v1;
        function_18028acc0(0, v2);
        function_18028acc0(v1, v2);
        result = 0;
    } else {
        // 0x180286fd6
        function_18028acc0(0, v2);
        result = 0xffffffff;
    }
    // 0x180287013
    return result;
}

// Address range: 0x180287020 - 0x180287254
int64_t function_180287020(int64_t a1, int64_t a2) {
    int64_t * v1 = _calloc_base(1, 8); // 0x180287076
    int64_t v2 = 8; // 0x180287081
    if (v1 == NULL) {
      lab_0x180287083:
        // 0x180287083
        function_18028acc0(0, v2);
        // 0x1802870ef
        return 0;
    }
    int64_t result = (int64_t)v1; // 0x180287076
    char v3 = *(char *)a1; // 0x1802870df
    int64_t v4 = 8; // 0x1802870e3
    if (v3 != 0) {
        int64_t v5 = -1;
        int64_t v6 = v5 + 1; // 0x180287097
        while (*(char *)(v6 + a1) != 0) {
            // 0x180287097
            v5 = v6;
            v6 = v5 + 1;
        }
        int64_t v7 = v5 + 2; // 0x1802870a0
        int64_t v8 = 8; // 0x1802870a5
        int64_t v9 = result; // 0x1802870a5
        int64_t v10; // 0x1802870af
        int64_t * v11; // 0x1802870af
        if (v3 != 61) {
            // 0x1802870a7
            v11 = _calloc_base((int32_t)v7, 1);
            if (v11 == NULL) {
                // 0x18028710a
                _3f__3f__24_free_environment_40_D_40__40_YAXQEAPEAD_40_Z((char **)&g1381);
                function_18028acc0(0, 1);
                v2 = 1;
                goto lab_0x180287083;
            }
            // 0x1802870bc
            v10 = (int64_t)v11;
            if ((int32_t)function_180287a40(v10, v7, a1) != 0) {
                // 0x18028711e
                function_180271834(0, 0, 0, 0, 0);
                __asm_int3(0, 0);
                __asm_int3(0, 0);
                __asm_int3(0, 0);
                abort();
                // UNREACHABLE
            }
            // 0x1802870d0
            *(int64_t *)result = v10;
            function_18028acc0(0, v7);
            v8 = v7;
            v9 = result + 8;
        }
        int64_t v12 = v8;
        int64_t v13 = v7 + a1; // 0x1802870dc
        char v14 = *(char *)v13; // 0x1802870df
        v4 = v12;
        while (v14 != 0) {
            int64_t v15 = v13;
            int64_t v16 = v9;
            v5 = -1;
            v6 = v5 + 1;
            while (*(char *)(v6 + v15) != 0) {
                // 0x180287097
                v5 = v6;
                v6 = v5 + 1;
            }
            // 0x1802870a0
            v7 = v5 + 2;
            v8 = v12;
            v9 = v16;
            if (v14 != 61) {
                // 0x1802870a7
                v11 = _calloc_base((int32_t)v7, 1);
                if (v11 == NULL) {
                    // 0x18028710a
                    _3f__3f__24_free_environment_40_D_40__40_YAXQEAPEAD_40_Z((char **)&g1381);
                    function_18028acc0(0, 1);
                    v2 = 1;
                    goto lab_0x180287083;
                }
                // 0x1802870bc
                v10 = (int64_t)v11;
                if ((int32_t)function_180287a40(v10, v7, v15) != 0) {
                    // 0x18028711e
                    function_180271834(0, 0, 0, 0, 0);
                    __asm_int3(0, 0);
                    __asm_int3(0, 0);
                    __asm_int3(0, 0);
                    abort();
                    // UNREACHABLE
                }
                // 0x1802870d0
                *(int64_t *)v16 = v10;
                function_18028acc0(0, v7);
                v8 = v7;
                v9 = v16 + 8;
            }
            // 0x1802870dc
            v12 = v8;
            v13 = v7 + v15;
            v14 = *(char *)v13;
            v4 = v12;
        }
    }
    // 0x1802870e5
    function_18028acc0(0, v4);
    // 0x1802870ef
    return result;
}

// Address range: 0x180287298 - 0x180287352
int64_t function_180287298(void) {
    // 0x180287298
    if (g1291 == 0) {
        // 0x1802872bd
        return 0xffffffff;
    }
    int64_t result = *(int64_t *)g1291; // 0x180287339
    if (result == 0) {
        // 0x1802872bd
        return result;
    }
    int64_t v1 = g1291; // 0x18028733f
    int32_t v2 = function_18028d848(0, 0); // 0x1802872f2
    int64_t result2 = 0xffffffff; // 0x1802872f4
    int64_t v3; // 0x180287298
    int64_t v4; // 0x180287298
    while (v2 != 0) {
        int64_t * v5 = _calloc_base(v2, 2); // 0x1802872fb
        v3 = 0;
        v4 = 2;
        if (v5 == NULL) {
            goto lab_0x180287348_2;
        }
        int64_t v6 = (int64_t)v5;
        v3 = v6;
        v4 = 0;
        if ((int32_t)function_18028d848(0, 0) == 0) {
            goto lab_0x180287348_2;
        }
        // 0x180287327
        function_18029599c(v6, 0);
        function_18028acc0(0, 0);
        v1 += 8;
        int64_t v7 = *(int64_t *)v1; // 0x180287339
        result2 = v7;
        if (v7 == 0) {
            // break -> 0x1802872bd
            return 0;
        }
        v2 = function_18028d848(0, 0);
        result2 = 0xffffffff;
    }
    // 0x1802872bd
    return result2;
  lab_0x180287348_2:
    // 0x180287348
    function_18028acc0(v3, v4);
    result2 = 0xffffffff;
    return result2;
}

// Address range: 0x1802873c8 - 0x18028740b
int64_t function_1802873c8(void) {
    // 0x1802873c8
    (void)0;
    (void)0;
    (void)0;
    (void)0;
    return &g1381;
}

// Address range: 0x18028740c - 0x180287411
int64_t function_18028740c(void) {
    // 0x18028740c
    int64_t v1; // 0x18028740c
    return function_180286f3c(v1);
}

// Address range: 0x180287414 - 0x18028744f
int64_t function_180287414(int64_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t * a6, int64_t * a7) {
    // 0x180287414
    int64_t v1; // 0x180287414
    __acrt_lock((int32_t)v1);
    int64_t v2 = function_18028748c((int64_t)a3); // 0x180287434
    int64_t v3; // 0x180287414
    __acrt_lock2((int32_t)v3, (int64_t)a2);
    return v2 & 0xffffffff;
}

// Address range: 0x180287450 - 0x18028748b
int64_t function_180287450(int64_t * a1, int32_t * a2, int64_t * a3, int32_t * a4, int64_t * a5, int64_t a6) {
    // 0x180287450
    int64_t v1; // 0x180287450
    __acrt_lock((int32_t)v1);
    int64_t v2 = function_18028763c((int64_t)a3); // 0x180287470
    int64_t v3; // 0x180287450
    __acrt_lock2((int32_t)v3, (int64_t)a2);
    return v2 & 0xffffffff;
}

// Address range: 0x18028748c - 0x18028763a
int64_t function_18028748c(int64_t a1) {
    // 0x18028748c
    if (a1 == 0) {
        // 0x180287621
        return 0xffffffff;
    }
    int64_t v1 = (int64_t)g731; // 0x1802874b8
    int64_t v2 = v1 & -0x100000000; // 0x1802874c5
    uint64_t v3 = v1 & 63; // 0x1802874c8
    int64_t v4 = v2; // 0x1802874ce
    if (v3 != 0) {
        v4 = v2 << 64 - v3 | v2 >> v3;
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x1802874d1
    int64_t v6 = *v5 ^ v1; // 0x1802874d1
    int64_t v7 = *(int64_t *)(a1 + 16) ^ v1; // 0x1802874d8
    int64_t v8 = v6; // 0x1802874dc
    int64_t v9 = v7; // 0x1802874dc
    if (v3 != 0) {
        uint64_t v10 = 64 - v3;
        v8 = v6 >> v3 | v6 << v10;
        v9 = v7 >> v3 | v7 << v10;
    }
    int64_t v11 = v9; // 0x1802874e5
    int64_t v12 = v4; // 0x1802874e5
    int64_t v13 = v8; // 0x1802874e5
    int64_t v14 = v1; // 0x1802874e5
    int64_t v15; // 0x18028748c
    int64_t v16; // 0x18028748c
    int64_t v17; // 0x1802874eb
    uint64_t v18; // 0x1802874f3
    if (v8 != v9) {
        goto lab_0x180287592;
    } else {
        // 0x1802874eb
        v17 = v9 - v4;
        v18 = v17 / 8;
        int64_t v19 = (v18 < 512 ? v18 : 512) + v18; // 0x180287504
        int64_t v20 = v19 == 0 ? 32 : v19; // 0x180287507
        if (v20 < v18) {
            goto lab_0x18028752e;
        } else {
            int64_t v21 = function_1802959b0(v4, v20, 8); // 0x18028751a
            function_18028acc0(0, v20);
            v16 = v20;
            v15 = v21;
            if (v21 != 0) {
                goto lab_0x180287556;
            } else {
                goto lab_0x18028752e;
            }
        }
    }
  lab_0x180287592:;
    int64_t v22 = v12;
    int64_t v23 = v11;
    uint64_t v24 = *(int64_t *)*v5; // 0x1802875ab
    uint64_t v25 = -v14 & 63; // 0x1802875ae
    int64_t v26 = v24; // 0x1802875ae
    if (v25 != 0) {
        v26 = v24 >> v25 | v24 << 64 - v25;
    }
    *(int64_t *)v13 = v26 ^ v14;
    int64_t v27 = (int64_t)g731; // 0x1802875ba
    uint32_t v28 = 64 - ((int32_t)v27 & 63); // 0x1802875c6
    uint32_t v29 = v28 & 63;
    int64_t v30 = v22; // 0x1802875cb
    if (v29 != 0) {
        uint64_t v31 = (int64_t)v29; // 0x1802875cb
        v30 = v22 << 64 - v31 | v22 >> v31;
    }
    int64_t v32 = v13 + 8; // 0x180287598
    *(int64_t *)(int64_t)v28 = v30 ^ v27;
    int64_t v33 = (int64_t)g731; // 0x1802875da
    int32_t v34 = 64 - ((int32_t)v33 & 63); // 0x1802875e6
    uint32_t v35 = v34 & 63;
    int64_t v36 = v32; // 0x1802875eb
    if (v35 != 0) {
        uint64_t v37 = (int64_t)v35; // 0x1802875eb
        v36 = v32 << 64 - v37 | v32 >> v37;
    }
    *(int64_t *)(int64_t)(v34 + 8) = v36 ^ v33;
    int64_t v38 = (int64_t)g731; // 0x1802875f8
    int32_t v39 = 64 - ((int32_t)v38 & 63); // 0x180287604
    uint32_t v40 = v39 & 63;
    int64_t v41 = v23; // 0x18028760d
    if (v40 != 0) {
        uint64_t v42 = (int64_t)v40; // 0x18028760d
        v41 = v23 << 64 - v42 | v23 >> v42;
    }
    *(int64_t *)(int64_t)(v39 + 16) = v41 ^ v38;
    // 0x180287621
    return 0;
  lab_0x18028752e:;
    int64_t v43 = v18 + 4; // 0x18028752e
    int64_t v44 = function_1802959b0(v4, v43, 8); // 0x18028753e
    function_18028acc0(0, v43);
    v16 = v43;
    v15 = v44;
    if (v44 == 0) {
        // 0x180287621
        return 0xffffffff;
    }
    goto lab_0x180287556;
  lab_0x180287556:;
    int64_t v45 = (int64_t)g731; // 0x180287556
    int64_t v46 = v15 + (v17 & -8); // 0x18028755d
    int64_t v47 = v15 + 8 * v16; // 0x180287561
    uint64_t v48 = 7 - v46 + v47; // 0x18028756e
    v11 = v47;
    v12 = v15;
    v13 = v46;
    v14 = v45;
    if (v47 >= v46 && v48 >= 8) {
        // 0x180287582
        __asm_rep_stosq_memset((char *)v46, v45, v48 / 8);
        v11 = v47;
        v12 = v15;
        v13 = v46;
        v14 = (int64_t)g731;
    }
    goto lab_0x180287592;
}

// Address range: 0x18028763c - 0x180287751
int64_t function_18028763c(int64_t a1) {
    // 0x18028763c
    if (a1 == 0) {
        // 0x180287738
        return 0xffffffff;
    }
    int64_t v1 = (int64_t)g731; // 0x18028766a
    int64_t v2 = v1 & -0x100000000; // 0x180287677
    uint64_t v3 = v1 & 63; // 0x18028767a
    int64_t v4; // 0x18028763c
    int64_t v5; // 0x18028763c
    if (v3 == 0) {
        // .thread
        v5 = v2;
        v4 = *(int64_t *)(a1 + 8) ^ v1;
    } else {
        uint64_t v6 = 64 - v3;
        uint64_t v7 = *(int64_t *)(a1 + 8) ^ v1; // 0x180287683
        v5 = v2 << v6 | v2 >> v3;
        v4 = v7 >> v3 | v7 << v6;
    }
    int64_t v8 = a1; // 0x180287692
    int64_t v9 = v4; // 0x180287692
    int64_t v10 = v4; // 0x180287692
    int64_t v11 = v5; // 0x180287692
    int64_t v12 = v1; // 0x180287692
    if (v5 >= 0xffffffffffffffff) {
        // 0x180287738
        return 0;
    }
    int64_t v13 = v5; // 0x180287692
    int64_t v14; // 0x18028763c
    int64_t v15; // 0x18028763c
    int64_t v16; // 0x18028763c
    int64_t v17; // 0x18028763c
    while (true) {
        int64_t v18 = v13;
        v14 = v12;
        v16 = v11;
        int64_t v19 = v10;
        v17 = v8;
        v15 = v8;
        int64_t v20 = v9 - 8; // 0x1802876a7
        if (v20 < v16) {
            // break (via goto) -> 0x180287704
            goto lab_0x180287704;
        }
        int64_t * v21 = (int64_t *)v20;
        int64_t v22 = v20; // 0x1802876b6
        while (*v21 == v1) {
            // 0x1802876a7
            v20 = v22 - 8;
            if (v20 < v16) {
                // break (via goto) -> 0x180287704
                goto lab_0x180287704;
            }
            // 0x1802876b0
            v21 = (int64_t *)v20;
            v22 = v20;
        }
        // 0x1802876b8
        *v21 = v1;
        int64_t v23; // 0x18028763c
        function_18029d4a0(v15, v17, v14, v23);
        v12 = (int64_t)g731;
        v8 = v12 & 63;
        int64_t v24 = v12 & -64; // 0x1802876df
        int64_t v25 = *(int64_t *)(v8 + 8) ^ v12; // 0x1802876e2
        int64_t v26 = v24; // 0x1802876e6
        int64_t v27 = v25; // 0x1802876e6
        if (v8 != 0) {
            uint64_t v28 = 64 - v8;
            v26 = v24 << v28 | v24 >> v8;
            v27 = v25 << v28 | v25 >> v8;
        }
        int64_t v29 = v27;
        int64_t v30 = v26;
        v9 = v30 == v18 == v29 == v19 ? v20 : v29;
        v10 = v30 == v18 == v29 == v19 ? v19 : v29;
        v11 = v30 == v18 == v29 == v19 ? v16 : v30;
        v13 = v30 == v18 == v29 == v19 ? v18 : v30;
        v23 = v30;
    }
  lab_0x180287704:;
    int64_t v31 = v15; // 0x180287708
    int64_t v32 = v14; // 0x180287708
    if (v16 != -1) {
        // 0x18028770a
        function_18028acc0(v16, v17);
        v31 = v16;
        v32 = (int64_t)g731;
    }
    // 0x180287719
    *(int64_t *)v31 = v32;
    *(int64_t *)(v31 + 8) = v32;
    *(int64_t *)(v31 + 16) = v32;
    // 0x180287738
    return 0;
}

// Address range: 0x180287754 - 0x180287763
int64_t function_180287754(int64_t a1) {
    // 0x180287754
    return function_1802877d0(&g1295, a1);
}

// Address range: 0x180287764 - 0x1802877a7
int64_t function_180287764(int64_t * a1) {
    int64_t v1 = (int64_t)a1; // 0x180287767
    int64_t v2 = &v1; // bp-24, 0x18028777b
    int32_t v3 = 2; // bp+24, 0x180287784
    int32_t v4 = 2; // bp+32, 0x180287788
    int64_t v5; // bp+16, 0x180287764
    return function_180287450(&v5, &v4, &v2, &v3, &v1, -2);
}

// Address range: 0x1802877a8 - 0x1802877cf
int64_t function_1802877a8(int64_t * a1) {
    // 0x1802877a8
    if (a1 == NULL) {
        // 0x1802877ad
        return 0xffffffff;
    }
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x1802877b1
    if (*v2 == v1) {
        int64_t v3 = (int64_t)g731; // 0x1802877ba
        *a1 = v3;
        *(int64_t *)(v1 + 8) = v3;
        *v2 = v3;
    }
    // 0x1802877ad
    return 0;
}

// Address range: 0x1802877d0 - 0x180287818
int64_t function_1802877d0(int64_t * a1, int64_t a2) {
    int64_t v1 = a2; // bp+16, 0x1802877d0
    int64_t v2 = (int64_t)a1; // 0x1802877d5
    int64_t v3 = &v2; // bp-32, 0x1802877e6
    int64_t v4 = 2; // bp+32, 0x180287807
    int64_t v5 = 2; // bp-40, 0x18028780a
    int64_t v6; // bp+24, 0x1802877d0
    int64_t result = function_180287414(&v6, &v5, &v3, &v4, 2, &v2, &v1); // 0x18028780d
    return result;
}

// Address range: 0x180287850 - 0x180287853
int64_t function_180287850(void) {
    // 0x180287850
    int64_t v1; // 0x180287850
    return v1 & -256 | 1;
}

// Address range: 0x180287854 - 0x180287864
int64_t function_180287854(void) {
    // 0x180287854
    return function_1802873c8() & -256 | 1;
}

// Address range: 0x180287864 - 0x1802878a1
int64_t function_180287864(void) {
    int64_t v1 = (int64_t)g731; // 0x18028786a
    function_1802716b8(v1);
    function_180286960(v1);
    __acrt_initialize_signal_handlers(v1);
    function_180295bb0(v1);
    return function_18027f748(v1) & -256 | 1;
}

// Address range: 0x1802878a4 - 0x1802878ab
int64_t function_1802878a4(int64_t a1) {
    // 0x1802878a4
    return function_18026db14(0);
}

// Address range: 0x1802878ac - 0x1802878ec
int64_t function_1802878ac(void) {
    uint32_t v1 = *g1343; // 0x1802878bc
    *g1343 = v1 - 1;
    int64_t v2 = v1; // 0x1802878bc
    if (v1 != 1) {
        // 0x1802878e4
        return v2 & -256 | 1;
    }
    int64_t v3 = v2; // 0x1802878d6
    if (g1343 != (int32_t *)&g770) {
        // 0x1802878d8
        int64_t v4; // 0x1802878ac
        v3 = function_18028acc0((int64_t)g1343, v4);
        g1343 = (int32_t *)&g770;
    }
    // 0x1802878e4
    return v3 & -256 | 1;
}

// Address range: 0x1802878ec - 0x180287947
int64_t function_1802878ec(void) {
    // 0x1802878ec
    int64_t v1; // 0x1802878ec
    function_18028acc0(g1305, v1);
    g1305 = 0;
    function_18028acc0(g1306, v1);
    g1306 = 0;
    function_18028acc0(g1347, v1);
    g1347 = 0;
    int64_t v2 = function_18028acc0(g1348, v1); // 0x180287933
    g1348 = 0;
    return v2 & -256 | 1;
}

// Address range: 0x180287948 - 0x18028795b
int64_t function_180287948(void) {
    // 0x180287948
    return function_180295ac8(&g558, &g559);
}

// Address range: 0x180287970 - 0x180287980
int64_t function_180287970(void) {
    // 0x180287970
    return function_180287fd4() & -256 | 1;
}

// Address range: 0x180287980 - 0x1802879b5
int64_t function_180287980(int64_t a1) {
    if ((char)a1 == 0) {
        // 0x18028799e
        return function_180295b48(&g558, &g559);
    }
    // 0x180287988
    int64_t v1; // 0x180287980
    if (g1275 != 0) {
        // 0x180287992
        v1 = function_180277d90(a1);
    }
    // 0x180287997
    return v1 & -256 | 1;
}

// Address range: 0x1802879b8 - 0x1802879c8
int64_t function_1802879b8(int32_t a1) {
    // 0x1802879b8
    return __acrt_uninitialize_ptd((int64_t)a1) & -256 | 1;
}

// Address range: 0x1802879c8 - 0x1802879fe
int64_t function_1802879c8(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    if (a1 == a2) {
        // 0x1802879fd
        int64_t result; // 0x1802879c8
        return result;
    }
    int64_t v3 = v2; // 0x1802879cb
    int64_t result2 = 0; // 0x1802879e3
    int64_t v4; // 0x1802879c8
    int64_t v5; // 0x1802879c8
    if (*(int64_t *)v3 != 0) {
        // 0x1802879e5
        result2 = function_18029d4a0(v2, v1, v5, v4);
    }
    // 0x1802879ea
    v3 += 8;
    while (v3 != v1) {
        // 0x1802879dd
        result2 = 0;
        if (*(int64_t *)v3 != 0) {
            // 0x1802879e5
            result2 = function_18029d4a0(v2, v1, v5, v4);
        }
        // 0x1802879ea
        v3 += 8;
    }
    // 0x1802879fd
    return result2;
}

// Address range: 0x180287a00 - 0x180287a3c
int64_t function_180287a00(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    if (a1 == a2) {
        // 0x180287a31
        return 0;
    }
    int64_t v3 = v2; // 0x180287a13
    int64_t v4; // 0x180287a00
    int64_t v5; // 0x180287a00
    if (*(int64_t *)v3 != 0) {
        // 0x180287a1d
        if ((int32_t)function_18029d4a0(v2, v1, v5, v4) != 0) {
            // break -> 0x180287a31
            return 0;
        }
    }
    // 0x180287a26
    v3 += 8;
    int64_t result = 0; // 0x180287a2d
    while (v3 != v1) {
        // 0x180287a15
        if (*(int64_t *)v3 != 0) {
            int64_t v6 = function_18029d4a0(v2, v1, v5, v4); // 0x180287a1d
            result = v6;
            if ((int32_t)v6 != 0) {
                // break -> 0x180287a31
                return 0;
            }
        }
        // 0x180287a26
        v3 += 8;
        result = 0;
    }
    // 0x180287a31
    return result;
}

// Address range: 0x180287a40 - 0x180287abe
int64_t function_180287a40(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0 || a2 == 0) {
        // 0x180287a59
        *(int32_t *)function_180279918(a1, a2, a3, a1) = 22;
        function_180271814(a1, a2, a3, a1);
        return 22;
    }
    if (a3 == 0) {
        // 0x180287a56
        *(char *)a1 = (char)a3;
        // 0x180287a59
        *(int32_t *)function_180279918(a1, a2, a3, a1) = 22;
        function_180271814(a1, a2, a3, a1);
        return 22;
    }
    int64_t v1 = a3 - a1; // 0x180287a73
    int64_t v2 = a1; // 0x180287a76
    int64_t v3 = a2; // 0x180287a76
    char v4 = *(char *)(v2 + v1); // 0x180287a80
    *(char *)v2 = v4;
    while (v4 != 0) {
        // 0x180287a8f
        v2++;
        v3--;
        if (v3 == 0) {
            // 0x180287a9a
            *(char *)a1 = (char)v3;
            *(int32_t *)function_180279918(v2, v3, v1, a1) = 34;
            function_180271814(v2, v3, v1, a1);
            return 34;
        }
        v4 = *(char *)(v2 + v1);
        *(char *)v2 = v4;
    }
    // 0x180287ab7
    return 0;
}

// Address range: 0x180287ac0 - 0x180287b70
int64_t function_180287ac0(int64_t a1) {
    int64_t v1 = 0; // bp-72, 0x180287ad2
    if (g1298 == 0) {
        // 0x180287af0
        int128_t v2; // 0x180287ac0
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    int64_t v3 = a1; // bp-88, 0x180287b09
    int64_t v4; // 0x180287ac0
    return function_18027d440(&v1, &v3, 10, v4 & -256 | 1, a1, 0) & 0xffffffff;
}

// Address range: 0x180287b70 - 0x180287ba4
int64_t function_180287b70(int64_t a1, int16_t * a2, int64_t a3) {
    if (a3 == 0) {
        // 0x180287b75
        return 0;
    }
    int64_t v1 = a3 - 1; // 0x180287b78
    if (v1 == 0) {
        // 0x180287b9b
        return (int64_t)*(int16_t *)a1 - (int64_t)*a2 & 0xffffffff;
    }
    int64_t v2 = a1; // 0x180287b8d
    int64_t v3 = (int64_t)a2; // 0x180287b91
    int64_t v4 = v1; // 0x180287b95
    int16_t v5 = *(int16_t *)v2; // 0x180287b80
    while (v5 != 0) {
        // 0x180287b88
        if (*(int16_t *)v3 != v5) {
            // break -> 0x180287b9b
            return 0;
        }
        // 0x180287b8d
        v2 += 2;
        v3 += 2;
        v4--;
        if (v4 == 0) {
            // break -> 0x180287b9b
            return 0;
        }
        v5 = *(int16_t *)v2;
    }
    uint16_t v6 = *(int16_t *)v3; // 0x180287b9e
    return (int64_t)*(int16_t *)v2 - (int64_t)v6 & 0xffffffff;
}

// Address range: 0x180287ba4 - 0x180287be3
int64_t function_180287ba4(void) {
    // 0x180287ba4
    int64_t v1; // 0x180287ba4
    __acrt_lock((int32_t)v1);
    int64_t v2; // 0x180287ba4
    int32_t * v3 = (int32_t *)*(int64_t *)(v2 + 136); // 0x180287bce
    *v3 = *v3 + 1;
    int64_t v4; // 0x180287ba4
    return __acrt_lock2(*(int32_t *)&v4, v1);
}

// Address range: 0x180287be4 - 0x180287c21
int64_t function_180287be4(void) {
    // 0x180287be4
    int64_t v1; // 0x180287be4
    __acrt_lock((int32_t)v1);
    int64_t v2; // 0x180287be4
    function_180287f6c(v2, 0);
    int64_t v3; // 0x180287be4
    return __acrt_lock2((int32_t)v3, 0);
}

// Address range: 0x180287c24 - 0x180287c69
int64_t function_180287c24(void) {
    // 0x180287c24
    int64_t v1; // 0x180287c24
    __acrt_lock((int32_t)v1);
    int64_t v2; // 0x180287c24
    int64_t v3 = *(int64_t *)*(int64_t *)*(int64_t *)(v2 + 8); // 0x180287c4b
    function_180287f6c(v2, (int32_t)v3);
    int64_t v4; // 0x180287c24
    return __acrt_lock2((int32_t)v4, v3);
}

// Address range: 0x180287c6c - 0x180287ccb
int64_t function_180287c6c(void) {
    // 0x180287c6c
    int64_t v1; // 0x180287c6c
    __acrt_lock((int32_t)v1);
    int64_t v2; // 0x180287c6c
    int64_t v3 = *(int64_t *)(v2 + 136); // 0x180287c8f
    int64_t v4; // 0x180287c6c
    if (v3 == 0) {
        // 0x180287cb9
        return __acrt_lock2(*(int32_t *)&v4, v1);
    }
    int32_t * v5 = (int32_t *)v3; // 0x180287c9e
    int32_t v6 = *v5; // 0x180287c9e
    *v5 = v6 - 1;
    if (v3 != (int64_t)&g770 && v6 == 1) {
        // 0x180287cb3
        function_18028acc0(v3, v1);
    }
    // 0x180287cb9
    return __acrt_lock2(*(int32_t *)&v4, v1);
}

// Address range: 0x180287eb4 - 0x180287f69
int64_t function_180287eb4(void) {
    int32_t errorCode = GetLastError(); // 0x180287ec3
    if (!FlsSetValue(g752, (int64_t *)-1)) {
        // 0x180287ee0
        SetLastError(errorCode);
        // 0x180287f59
        return (int32_t)&g1381 ^ (int32_t)&g1381;
    }
    int64_t * lpFlsData = _calloc_base(1, 968); // 0x180287ef6
    if (lpFlsData == NULL) {
        // 0x180287f09
        FlsSetValue(g752, NULL);
        function_18028acc0(0, 0);
        // 0x180287ee0
        SetLastError(errorCode);
        // 0x180287f59
        return (int32_t)&g1381 ^ (int32_t)&g1381;
    }
    int64_t v1 = (int64_t)lpFlsData; // 0x180287ef6
    int64_t result; // 0x180287eb4
    if (FlsSetValue(g752, lpFlsData)) {
        // 0x180287f3c
        _3f_construct_ptd_array_40__40_YAXQEAU__acrt_ptd_40__40__40_Z((int64_t *)&g1381);
        function_18028acc0(0, v1);
        result = v1;
    } else {
        // 0x180287f25
        FlsSetValue(g752, NULL);
        function_18028acc0(v1, 0);
        result = 0;
    }
    // 0x180287f4e
    SetLastError(errorCode);
    // 0x180287f59
    return result;
}

// Address range: 0x180287f6c - 0x180287fd3
int64_t function_180287f6c(int64_t a1, int32_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 144); // 0x180287f7c
    int64_t v2 = *v1; // 0x180287f7c
    int64_t v3; // 0x180287f6c
    if (v2 != 0) {
        int64_t v4 = __acrt_release_locale_ref(v2); // 0x180287f88
        int64_t v5 = *v1; // 0x180287f8d
        v3 = v4;
        if (v5 != g1299) {
            // 0x180287f9d
            v3 = (int64_t)&g754;
            if (v5 != (int64_t)&g754) {
                // 0x180287fa9
                v3 = (int64_t)&g754;
                if (*(int32_t *)(v5 + 16) == 0) {
                    // 0x180287faf
                    v3 = __acrt_free_locale(v5);
                }
            }
        }
    }
    int64_t v6 = a2;
    *v1 = v6;
    int64_t result = v3; // 0x180287fbe
    if (a2 != 0) {
        // 0x180287fc0
        result = __acrt_add_locale_ref(v6);
    }
    // 0x180287fc8
    return result;
}

// Address range: 0x180287fd4 - 0x180288022
int64_t function_180287fd4(void) {
    // 0x180287fd4
    int64_t result; // 0x180287fd4
    if (g752 == -1) {
        // 0x18028801c
        return result;
    }
    int64_t * v1 = FlsGetValue(g752); // 0x180287ff2
    result = 0;
    if (v1 != NULL) {
        // 0x180288005
        FlsSetValue(g752, NULL);
        _3f_destroy_ptd_array_40__40_YAXQEAU__acrt_ptd_40__40__40_Z((int64_t *)&g1381);
        result = function_18028acc0((int64_t)v1, 0);
    }
    // 0x18028801c
    return result;
}

// Address range: 0x180288084 - 0x180288114
int64_t function_180288084(void) {
    // 0x180288084
    if (g1297 != 0) {
        // 0x1802880a3
        if (g752 == -1) {
            // 0x180288106
            return function_180287eb4();
        }
        int64_t result = function_18028de98(g752); // 0x1802880b2
        if (result == -1) {
            // 0x180288106
            return 0;
        }
        // 0x1802880be
        if (result != 0) {
            // 0x180288106
            return result;
        }
        // 0x180288106
        return function_180287eb4();
    }
    int32_t errorCode = GetLastError(); // 0x1802880cd
    if (g752 != -1) {
        int64_t * v1 = FlsGetValue(g752); // 0x1802880e5
        if (v1 == (int64_t *)-1) {
            // 0x1802880fe
            SetLastError(errorCode);
            // 0x180288106
            return 0;
        }
        // 0x1802880f1
        if (v1 != NULL) {
            // 0x1802880fe
            SetLastError(errorCode);
            // 0x180288106
            return (int64_t)v1;
        }
    }
    int64_t result2 = function_180287eb4();
    SetLastError(errorCode);
    // 0x180288106
    return result2;
}

// Address range: 0x180288114 - 0x18028816f
int64_t function_180288114(int32_t * a1, int64_t a2) {
    // 0x180288114
    if (g752 != -1) {
        int64_t * v1 = FlsGetValue(g752); // 0x18028813c
        if (v1 == (int64_t *)-1) {
            // 0x180288161
            return 0;
        }
        // 0x180288148
        if (v1 != NULL) {
            // 0x180288161
            return (int64_t)v1 + 968 * a2;
        }
    }
    int64_t v2 = function_180287eb4(); // 0x18028814d
    if (v2 == 0) {
        // 0x180288161
        return 0;
    }
    // 0x180288161
    return v2 + 968 * a2;
}

// Address range: 0x180288170 - 0x1802881b4
int64_t function_180288170(void) {
    // 0x180288170
    g1297 = function_18028e660();
    int32_t v1 = FlsAlloc((void (*)(int64_t *))0x180287d9c); // 0x180288186
    g752 = v1;
    if (v1 == -1) {
        // 0x1802881af
        return (int64_t)v1 & -256;
    }
    int64_t v2 = function_180288084(); // 0x18028819a
    if (v2 != 0) {
        // 0x1802881af
        return v2 & -256 | 1;
    }
    // 0x1802881af
    return __acrt_uninitialize_ptd(0) & -256;
}

// Address range: 0x1802881e0 - 0x1802881e3
int64_t function_1802881e0(void) {
    // 0x1802881e0
    return 0;
}

// Address range: 0x1802881e4 - 0x18028831e
int64_t function_1802881e4(int64_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = (int64_t)a3;
    int64_t v2; // 0x1802881e4
    __acrt_lock((int32_t)v2);
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x180288201
    function_18028878c(v1, *(int64_t *)(*(int64_t *)*v3 + 144));
    int64_t * v4 = (int64_t *)(v1 + 32); // 0x18028821a
    int64_t v5 = *(int64_t *)*v4; // 0x180288225
    uint32_t v6 = *(int32_t *)*(int64_t *)(v1 + 24); // 0x180288228
    int64_t v7 = function_180288fc8(v5, v6, v5); // 0x18028822d
    *(int64_t *)*(int64_t *)(v1 + 16) = v7;
    int64_t v8; // 0x1802881e4
    if (v7 == 0) {
        // 0x1802882f5
        __acrt_release_locale_ref(v5);
        __acrt_free_locale(v5);
        // 0x18028830c
        return __acrt_lock2(*(int32_t *)&v8, (int64_t)v6);
    }
    int64_t v9 = *(int64_t *)*v4; // 0x180288246
    int64_t v10 = v5; // 0x18028824c
    if (v9 != 0) {
        int64_t v11 = (int64_t)&g757 - v9; // 0x180288255
        int64_t v12 = v9; // 0x180288255
        int16_t v13 = *(int16_t *)(v12 + v11); // 0x18028825b
        while (*(int16_t *)v12 == v13) {
            // 0x180288264
            v12 += 2;
            v10 = v11;
            if (v13 == 0) {
                goto lab_0x18028827b;
            }
            v13 = *(int16_t *)(v12 + v11);
        }
        // 0x180288270
        g1298 = 1;
        v10 = v11;
    }
  lab_0x18028827b:
    // 0x18028827b
    function_180295f94(*(int64_t *)*v3 + 144, v10);
    __acrt_release_locale_ref(v10);
    int64_t v14 = *(int64_t *)*v3; // 0x1802882a3
    if ((*(char *)(v14 + 936) & 2) != 0) {
        // 0x18028830c
        return __acrt_lock2(*(int32_t *)&v8, v14);
    }
    int64_t v15 = v14; // 0x1802882b6
    if ((*(char *)&g769 & 1) == 0) {
        int64_t v16 = *(int64_t *)(v14 + 144); // 0x1802882b8
        function_180295f94((int64_t)&g1299, v16);
        *(int64_t *)0x18031d1e8 = *(int64_t *)(g1299 + 248);
        *(int64_t *)0x18031d210 = *(int64_t *)g1299;
        *(int32_t *)&g758 = *(int32_t *)(g1299 + 8);
        v15 = v16;
    }
    // 0x18028830c
    return __acrt_lock2(*(int32_t *)&v8, v15);
}

// Address range: 0x180288320 - 0x18028838e
int64_t function_180288320(int64_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a2;
    __acrt_lock((int32_t)v1);
    if ((int64_t)&g1299 == (int64_t)&g1300) {
        // 0x180288377
        int64_t v2; // 0x180288320
        return __acrt_lock2((int32_t)v2, v1);
    }
    int64_t v3 = &g1299;
    int64_t * v4 = (int64_t *)v3; // 0x18028835e
    int64_t v5 = v1; // 0x180288361
    if (*v4 != (int64_t)&g754) {
        // 0x180288363
        *v4 = function_180295f94(v3, (int64_t)&g754);
        v5 = (int64_t)&g754;
    }
    int64_t v6 = v5;
    int64_t v7 = v3 + 8; // 0x180288371
    while (v7 != (int64_t)&g1300) {
        // 0x18028835e
        v3 = v7;
        v4 = (int64_t *)v3;
        v5 = v6;
        if (*v4 != (int64_t)&g754) {
            // 0x180288363
            *v4 = function_180295f94(v3, (int64_t)&g754);
            v5 = (int64_t)&g754;
        }
        // 0x180288371
        v6 = v5;
        v7 = v3 + 8;
    }
    // 0x180288377
    int64_t v8; // 0x180288320
    return __acrt_lock2(*(int32_t *)&v8, v6);
}

// Address range: 0x180288390 - 0x1802883b9
int64_t function_180288390(void) {
    // 0x180288390
    int64_t v1; // 0x180288390
    function_1802883bc(v1);
    int64_t result; // 0x180288390
    int32_t * v2 = (int32_t *)(result + 936); // 0x1802883ac
    *v2 = *v2 & -17;
    return result;
}

// Address range: 0x1802883bc - 0x18028844a
int64_t function_1802883bc(int64_t a1) {
    int64_t * v1 = _calloc_base(1, 344); // 0x1802883d3
    *(int64_t *)1 = (int64_t)v1;
    int64_t result = function_18028acc0(0, 1); // 0x1802883eb
    if (v1 != NULL) {
        int64_t v2 = 0; // bp-56, 0x1802883f5
        int64_t v3 = *(int64_t *)(a1 + 8); // 0x1802883ff
        int64_t v4 = *(int64_t *)(a1 + 16); // 0x180288412
        int64_t v5 = *(int64_t *)(a1 + 24); // 0x18028841b
        int64_t v6 = *(int64_t *)(a1 + 32); // 0x180288424
        int64_t v7 = 4; // bp+16, 0x180288432
        int64_t v8 = 4; // bp+24, 0x180288436
        int64_t v9; // 0x1802883bc
        result = function_1802881e4(&v9, &v8, &v2, &v7, 0, v3, v4, v5, v6);
    }
    // 0x18028843f
    return result;
}

// Address range: 0x18028844c - 0x180288548
int64_t function_18028844c(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16) + 600; // 0x18028846e
    if ((int32_t)function_180297060(v3, 85, v1, a3) != 0) {
        // 0x1802884ad
        function_180271834(0, 0, 0, 0, 0);
        __asm_int3(0, 0);
        __asm_int3(0, 0);
        return 0;
    }
    int64_t result = function_180297060(v3, *(int64_t *)(v2 + 8), v1, a3); // 0x180288490
    if ((int32_t)result == 0) {
        // 0x180288499
        *(char *)(v2 + 24) = 1;
        return result;
    }
    // 0x1802884ad
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return 0;
}

// Address range: 0x180288548 - 0x180288554
int64_t function_180288548(void) {
    uint32_t result = g1298; // 0x18028854d
    g1298 = 1;
    return result;
}

// Address range: 0x180288554 - 0x180288582
int64_t function_180288554(void) {
    int64_t v1 = 4; // bp+16, 0x180288568
    int64_t v2 = 4; // bp+24, 0x180288570
    int64_t v3; // 0x180288554
    return function_180288320(&v3, &v2, &v3, &v1, 4, 4);
}

// Address range: 0x180288584 - 0x180288628
int64_t function_180288584(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    if ((int32_t)function_180293a00(a1, a2, v1) == 0) {
        // 0x1802885ac
        return v1 + 256;
    }
    // 0x180288611
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
}

// Address range: 0x180288628 - 0x18028878c
int64_t function_180288628(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // 0x180288628
    function_18029db80(v1, 0, 458, v2);
    int64_t v3; // 0x180288628
    int16_t v4 = v3;
    if (v4 == 0) {
        // 0x18028875e
        return 0;
    }
    if (v4 == 46) {
        int64_t v5 = a2 + 2; // 0x180288669
        if (*(int16_t *)v5 != 0) {
            // 0x180288673
            if ((int32_t)function_180297060(v1 + 256, 16, v5, 15) != 0) {
                // 0x180288777
                function_180271834(0, 0, 0, 0, 0);
                return __asm_int3(0, 0);
            }
            // 0x180288690
            *(int16_t *)(v1 + 286) = 0;
            // 0x18028875e
            return 0;
        }
    }
    int64_t v6 = function_1802971b0(a2, L"_.,"); // 0x18028874d
    if (v6 == 0) {
        // 0x18028875e
        return 0xffffffff;
    }
    int64_t v7 = v6; // 0x18028874d
    int64_t v8 = 0; // 0x180288628
    int64_t v9 = a2; // 0x18028873d
    int64_t v10; // 0x180288628
    int64_t v11; // 0x180288628
    int64_t v12; // 0x1802886a2
    int16_t v13; // 0x1802886a6
    while (true) {
      lab_0x1802886a2:;
        int64_t v14 = v9;
        v11 = v8;
        uint64_t v15 = v7;
        v12 = v14 + 2 * v15;
        v13 = *(int16_t *)v12;
        int32_t v16 = v11; // 0x1802886aa
        if (v16 != 0) {
            int64_t v17; // 0x180288628
            int64_t v18; // 0x180288628
            if (v16 != 1) {
                // 0x1802886f9
                if (v15 < 16 != (v16 == 2)) {
                    // break -> 0x18028875e
                    return 0;
                }
                // 0x180288704
                v17 = v1 + 256;
                v18 = 16;
                if (v13 != 0 == (v13 != 44)) {
                    // break -> 0x18028875e
                    return 0;
                }
            } else {
                // 0x1802886e1
                if (v15 >= 64 || v13 == 95) {
                    // break -> 0x18028875e
                    return 0;
                }
                // 0x1802886ed
                v17 = v1 + 128;
                v18 = v11 + 63 & 0xffffffff;
            }
            // 0x18028871b
            if ((int32_t)function_180297060(v17, v18, v14, v15) != 0) {
                // 0x180288777
                function_180271834(0, 0, 0, 0, 0);
                return __asm_int3(0, 0);
            }
            goto lab_0x18028872a;
        } else {
            // 0x1802886ae
            if (v15 >= 64) {
                // break -> 0x18028875e
                return 0;
            }
            int64_t v19 = function_180297060(v1, v11 + 64 & 0xffffffff, v14, v15); // 0x1802886c4
            if ((int32_t)v19 != 0) {
                // 0x180288777
                function_180271834(0, 0, 0, 0, 0);
                return __asm_int3(0, 0);
            }
            if (v13 != 46) {
                goto lab_0x18028872a;
            } else {
                // 0x1802886d7
                v10 = v19 + 1;
                goto lab_0x18028873d;
            }
        }
    }
    // 0x18028875e
    return 0xffffffff;
  lab_0x18028872a:
    // 0x18028872a
    v10 = v11;
    switch (v13) {
        case 44: {
            return 0;
        }
        case 0: {
            return 0;
        }
        default: {
            goto lab_0x18028873d;
        }
    }
  lab_0x18028873d:
    // 0x18028873d
    v9 = v12 + 2;
    v7 = function_1802971b0(v9, L"_.,");
    v8 = (v10 & 0xffffffff) + 1;
    if (v7 == 0) {
        return 0xffffffff;
    }
    goto lab_0x1802886a2;
}

// Address range: 0x18028878c - 0x18028884a
int64_t function_18028878c(int64_t a1, int64_t a2) {
    int64_t v1 = 2; // 0x180288793
    if (a1 == a2 || a1 == 0 || a2 == 0) {
        // 0x180288845
        int64_t result; // 0x18028878c
        return result;
    }
    int64_t v2 = a1;
    int64_t v3 = a2;
    __asm_movups(*(int128_t *)v2, __asm_movups_16(*(int128_t *)v3));
    int128_t v4 = __asm_movups_16(*(int128_t *)(v3 + 16)); // 0x1802887be
    __asm_movups(*(int128_t *)(v2 + 16), v4);
    int128_t v5 = __asm_movups_16(*(int128_t *)(v3 + 32)); // 0x1802887c7
    __asm_movups(*(int128_t *)(v2 + 32), v5);
    int128_t v6 = __asm_movups_16(*(int128_t *)(v3 + 48)); // 0x1802887d0
    __asm_movups(*(int128_t *)(v2 + 48), v6);
    int128_t v7 = __asm_movups_16(*(int128_t *)(v3 + 64)); // 0x1802887d9
    __asm_movups(*(int128_t *)(v2 + 64), v7);
    int128_t v8 = __asm_movups_16(*(int128_t *)(v3 + 80)); // 0x1802887e2
    __asm_movups(*(int128_t *)(v2 + 80), v8);
    int128_t v9 = __asm_movups_16(*(int128_t *)(v3 + 96)); // 0x1802887eb
    __asm_movups(*(int128_t *)(v2 + 96), v9);
    int64_t v10 = v2 + 128; // 0x1802887f4
    int128_t v11 = __asm_movups_16(*(int128_t *)(v3 + 112)); // 0x1802887f7
    int64_t v12 = v3 + 128; // 0x1802887fb
    __asm_movups(*(int128_t *)(v2 + 112), v11);
    v1--;
    while (v1 != 0) {
        // 0x1802887b7
        v2 = v10;
        v3 = v12;
        __asm_movups(*(int128_t *)v2, __asm_movups_16(*(int128_t *)v3));
        v4 = __asm_movups_16(*(int128_t *)(v3 + 16));
        __asm_movups(*(int128_t *)(v2 + 16), v4);
        v5 = __asm_movups_16(*(int128_t *)(v3 + 32));
        __asm_movups(*(int128_t *)(v2 + 32), v5);
        v6 = __asm_movups_16(*(int128_t *)(v3 + 48));
        __asm_movups(*(int128_t *)(v2 + 48), v6);
        v7 = __asm_movups_16(*(int128_t *)(v3 + 64));
        __asm_movups(*(int128_t *)(v2 + 64), v7);
        v8 = __asm_movups_16(*(int128_t *)(v3 + 80));
        __asm_movups(*(int128_t *)(v2 + 80), v8);
        v9 = __asm_movups_16(*(int128_t *)(v3 + 96));
        __asm_movups(*(int128_t *)(v2 + 96), v9);
        v10 = v2 + 128;
        v11 = __asm_movups_16(*(int128_t *)(v3 + 112));
        v12 = v3 + 128;
        __asm_movups(*(int128_t *)(v2 + 112), v11);
        v1--;
    }
    // 0x180288809
    __asm_movups(*(int128_t *)v10, __asm_movups_16(*(int128_t *)v12));
    int128_t v13 = __asm_movups_16(*(int128_t *)(v3 + 144)); // 0x180288810
    __asm_movups(*(int128_t *)(v2 + 144), v13);
    int128_t v14 = __asm_movups_16(*(int128_t *)(v3 + 160)); // 0x180288819
    __asm_movups(*(int128_t *)(v2 + 160), v14);
    int128_t v15 = __asm_movups_16(*(int128_t *)(v3 + 176)); // 0x180288822
    __asm_movups(*(int128_t *)(v2 + 176), v15);
    int128_t v16 = __asm_movups_16(*(int128_t *)(v3 + 192)); // 0x18028882b
    __asm_movups(*(int128_t *)(v2 + 192), v16);
    *(int64_t *)(v2 + 208) = *(int64_t *)(v3 + 208);
    *(int32_t *)(a1 + 16) = 0;
    // 0x180288845
    return __acrt_add_locale_ref(a1);
}

// Address range: 0x18028884c - 0x180288d38
int64_t function_18028884c(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4, int64_t a5, int64_t * a6) {
    // 0x18028884c
    if (a1 == 0) {
        // 0x1802888b1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = (int64_t)a2;
    if ((int16_t)a1 != 67) {
        goto lab_0x180288906;
    } else {
        // 0x1802888da
        if (*(int16_t *)(a1 + 2) != 0) {
            goto lab_0x180288906;
        } else {
            // 0x1802888e1
            if ((int32_t)function_180293a00(v1, a3, (int64_t)&g564) == 0) {
                // 0x1802888fe
                *(int32_t *)a6 = 0;
                // 0x1802888b1
                return function_18026ad50((int64_t)g731);
            }
            // 0x180288ca3
            function_180271834(0, 0, 0, 0, 0);
            __asm_int3(0, 0);
            goto lab_0x180288cb8;
        }
    }
  lab_0x180288c7c_2:;
    // 0x180288c7c
    int32_t * v2; // 0x18028884c
    *(int32_t *)a6 = *v2;
    int64_t v3; // 0x18028884c
    int64_t v4; // 0x18028894d
    if ((int32_t)function_180293a00(v1, a3, v4) != 0) {
        // 0x180288ca3
        function_180271834(0, 0, 0, 0, 0);
        __asm_int3(0, 0);
        goto lab_0x180288cb8;
    } else {
        // 0x180288b88
        if ((char)v3 != 0) {
            // 0x1802888b1
            return function_18026ad50((int64_t)g731);
        }
        goto lab_0x180288b8d;
    }
  lab_0x180288906:;
    int64_t v5 = (int64_t)a4;
    int64_t v6 = __vcrt_getptd2(a1); // 0x180288906
    int64_t v7 = v5; // bp-616, 0x180288911
    int64_t v8 = v6 + 184; // 0x180288931
    v2 = (int32_t *)v8;
    int32_t * v9 = v2; // bp-632, 0x180288935
    int64_t v10 = v6 + 188; // 0x18028893a
    int64_t v11 = v6 + 752; // 0x180288946
    v4 = v6 + 450;
    int64_t v12; // 0x18028884c
    int64_t v13; // 0x18028884c
    int64_t v14; // 0x18028884c
    int64_t v15; // bp-264, 0x18028884c
    int64_t v16; // bp-552, 0x18028884c
    uint64_t v17; // 0x18028896b
    if ((int32_t)function_180297060(v5, a5, v11, 85) != 0) {
        // 0x180288ca3
        function_180271834(0, 0, 0, 0, 0);
        __asm_int3(0, 0);
        goto lab_0x180288cb8;
    } else {
        v14 = -1;
        v17 = v14 + 1;
        while (*(int16_t *)(2 * v17 + a1) != 0) {
            // 0x18028896b
            v14 = v17;
            v17 = v14 + 1;
        }
        if (v17 < 131) {
            int64_t v18 = v4; // 0x180288984
            int16_t v19 = *(int16_t *)(a1 - 450 - v6 + v18); // 0x18028898a
            while (*(int16_t *)v18 == v19) {
                // 0x180288993
                v18 += 2;
                v3 = 0;
                if (v19 == 0) {
                    goto lab_0x180288c7c_2;
                }
                v19 = *(int16_t *)(a1 - 450 - v6 + v18);
            }
            int64_t v20 = v10; // 0x1802889a9
            int16_t v21 = *(int16_t *)(a1 - 188 - v6 + v20); // 0x1802889af
            while (*(int16_t *)v20 == v21) {
                // 0x1802889b8
                v20 += 2;
                v3 = 0;
                if (v21 == 0) {
                    goto lab_0x180288c7c_2;
                }
                v21 = *(int16_t *)(a1 - 188 - v6 + v20);
            }
        }
        // 0x1802889c8
        function_18029db80((int64_t)&v16, 0, 458, 0);
        int64_t v22 = function_18028e474(); // 0x1802889d9
        if ((int32_t)function_180288628(&v16, a1) != 0) {
            goto lab_0x180288a6c;
        } else {
            int64_t v23; // 0x18028884c
            if ((char)v22 != 0) {
                // 0x180288a0d
                v23 = function_180297a20(&v16, v8, &v16, 0);
            } else {
                // 0x180288a06
                v23 = function_180298480(&v16, v8, &v16, 0);
            }
            // 0x180288a12
            if ((int32_t)v23 == 0) {
                goto lab_0x180288a6c;
            } else {
                // 0x180288a16
                function_180288584(v4, 131, &v16, 0);
                int64_t v24 = &v15; // 0x180288a27
                int64_t v25 = -1;
                int64_t v26 = v25 + 1; // 0x180288a30
                while (*(int16_t *)(2 * v26 + v24) != 0) {
                    // 0x180288a30
                    v25 = v26;
                    v26 = v25 + 1;
                }
                int64_t v27 = function_180297060(v5, a5, v24, v25 + 2); // 0x180288a52
                v12 = v5;
                v13 = 1;
                if ((int32_t)v27 != 0) {
                    goto lab_0x180288cb8;
                } else {
                    goto lab_0x180288c40;
                }
            }
        }
    }
  lab_0x180288cb8:
    // 0x180288cb8
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
  lab_0x180288a6c:;
    // 0x180288a6c
    int64_t v28; // 0x18028884c
    int64_t v29; // 0x18028884c
    int16_t v30; // 0x18028884c
    int64_t v31; // 0x180288ae8
    int16_t v32; // 0x18028884c
    if ((int32_t)function_18028e138(a1) == 0) {
        // 0x180288ad4
        if ((char)function_1802895c8(&v16, a1) == 0) {
            goto lab_0x180288b8d;
        } else {
            // 0x180288ae8
            v31 = &v15;
            if ((int32_t)function_18028e138(v31) == 0) {
                goto lab_0x180288b8d;
            } else {
                int32_t v33; // 0x18028884c
                if ((int16_t)v33 == 0) {
                    // 0x180288bbd
                    v9 = NULL;
                    if ((int32_t)function_18028df74(v31, 0x20001004, (int64_t *)&v9, 2) == 0) {
                        // 0x180288bea
                        v28 = 0xfde9;
                        goto lab_0x180288bef;
                    } else {
                        int64_t v34 = (int64_t)v9; // 0x180288be2
                        v28 = v34 & 0xffffffff;
                        if ((int32_t)v34 != 0) {
                            goto lab_0x180288bef;
                        } else {
                            // 0x180288bea
                            v28 = 0xfde9;
                            goto lab_0x180288bef;
                        }
                    }
                } else {
                    int32_t v35 = v33 & 0xffff;
                    if ((v35 < 91 ? v35 + 32 : v35) != 117) {
                        goto lab_0x180288b6a;
                    } else {
                        // 0x180288b26
                        int32_t v36; // 0x18028884c
                        int32_t v37 = v36 & 0xffff;
                        if ((v37 < 91 ? v37 + 32 : v37) != 116) {
                            goto lab_0x180288b6a;
                        } else {
                            // 0x180288b3e
                            int32_t v38; // 0x18028884c
                            int32_t v39 = v38 & 0xffff;
                            if (v32 == 0 == v30 == 56 == (v39 < 91 ? v39 + 32 : v39) == 102) {
                                // 0x180288bea
                                v28 = 0xfde9;
                                goto lab_0x180288bef;
                            } else {
                                goto lab_0x180288b6a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        // 0x180288a7b
        v9 = NULL;
        if ((int32_t)function_18028df74(a1, 0x20001004, (int64_t *)&v9, 2) == 0) {
            // 0x180288aa2
            v29 = 0xfde9;
            goto lab_0x180288aa7;
        } else {
            int64_t v40 = (int64_t)v9; // 0x180288a9a
            v29 = v40 & 0xffffffff;
            if ((int32_t)v40 != 0) {
                goto lab_0x180288aa7;
            } else {
                // 0x180288aa2
                v29 = 0xfde9;
                goto lab_0x180288aa7;
            }
        }
    }
  lab_0x180288b8d:
    // 0x180288b8d
    if ((int32_t)function_180297060(v11, 85, v7, a5) == 0) {
        // 0x1802888b1
        return function_18026ad50((int64_t)g731);
    }
    // 0x180288ca3
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    goto lab_0x180288cb8;
  lab_0x180288c40:
    // 0x180288c40
    if (v17 >= 131 || (int16_t)v12 == 0) {
        // 0x180288c69
        *(int16_t *)v10 = 0;
        v3 = v13;
        goto lab_0x180288c7c_2;
    } else {
        // 0x180288c50
        v3 = v13;
        if ((int32_t)function_180297060(v10, 131, a1, v14 + 2) != 0) {
            goto lab_0x180288cb8;
        } else {
            goto lab_0x180288c7c_2;
        }
    }
  lab_0x180288aa7:;
    int64_t v41 = v14 + 2;
    *v2 = (int32_t)v29 & 0xffff;
    int64_t v42 = function_180297060(v4, 131, a1, v41); // 0x180288abb
    int64_t v43 = v41; // 0x180288ac2
    int64_t v44 = a1; // 0x180288ac2
    if ((int32_t)v42 != 0) {
        goto lab_0x180288cb8;
    } else {
        goto lab_0x180288c31;
    }
  lab_0x180288c31:
    // 0x180288c31
    function_18028844c(&v7, (int64_t *)v44, v43);
    v12 = v4;
    v13 = 0;
    goto lab_0x180288c40;
  lab_0x180288b6a:;
    int16_t v45; // 0x18028884c
    if (v45 == 0 == v30 == 45 == v32 == 56) {
        // 0x180288bea
        v28 = 0xfde9;
        goto lab_0x180288bef;
    } else {
        goto lab_0x180288b8d;
    }
  lab_0x180288bef:
    // 0x180288bef
    *v2 = (int32_t)v28 & 0xffff;
    if ((int32_t)function_180297060(v4, 131, a1, v14 + 2) != 0) {
        goto lab_0x180288cb8;
    } else {
        int64_t v46 = -1;
        int64_t v47 = v46 + 1; // 0x180288c17
        while (*(int16_t *)(2 * v47 + v31) != 0) {
            // 0x180288c17
            v46 = v47;
            v47 = v46 + 1;
        }
        // 0x180288c31
        v43 = v46 + 2;
        v44 = v31;
        goto lab_0x180288c31;
    }
}

// Address range: 0x180288ddc - 0x180288fc8
int64_t function_180288ddc(int64_t a1) {
    int64_t * v1 = _malloc_base(1702); // 0x180288e05
    int64_t v2 = (int64_t)v1; // 0x180288e05
    int64_t result = v2; // 0x180288e13
    if (v1 == NULL) {
      lab_0x180288e15:
        // 0x180288e15
        return result;
    }
    int64_t v3 = v2 + 4; // 0x180288e32
    *(int32_t *)v1 = 1;
    *(int16_t *)v3 = 0;
    int64_t v4 = &g561; // 0x180288e72
    int64_t v5 = 1; // 0x180288e72
    int64_t v6 = a1 + 72; // 0x180288e72
    int64_t * v7; // 0x180288f5d
    int64_t * v8; // 0x180288f02
    while ((int32_t)function_180296e90(v3, 849, (int64_t)&g563) == 0) {
        int64_t v9 = v6;
        int64_t v10 = v5;
        v6 = v9 + 32;
        int64_t v11 = *(int64_t *)v9; // 0x180288e97
        int64_t v12 = v11;
        int16_t v13 = *(int16_t *)(*(int64_t *)v6 - v11 + v12); // 0x180288ea4
        int64_t v14 = 0; // 0x180288eab
        while (*(int16_t *)v12 == v13) {
            int64_t v15 = v12 + 2; // 0x180288eb3
            v14 = v10;
            if (v13 == 0) {
                // break -> 0x180288eb5
                return 0;
            }
            v12 = v15;
            v13 = *(int16_t *)(*(int64_t *)v6 - v11 + v12);
            v14 = 0;
        }
        // 0x180288eb5
        v5 = v14;
        v4 += 24;
        if (v4 >= (int64_t)&g562) {
            if ((int32_t)v5 != 0) {
                // 0x180288f55
                function_18028acc0(v2, 849);
                v7 = (int64_t *)(a1 + 56);
                int64_t v16 = *v7; // 0x180288f5d
                if (v16 == 0) {
                    goto lab_0x180288f7c;
                } else {
                    int32_t * v17 = (int32_t *)v16; // 0x180288f6b
                    int32_t v18 = *v17; // 0x180288f6b
                    *v17 = v18 - 1;
                    if (v18 != 1) {
                        goto lab_0x180288f7c;
                    } else {
                        // 0x180288f73
                        function_18028acc0(*v7, 849);
                        goto lab_0x180288f7c;
                    }
                }
            } else {
                // 0x180288f02
                v8 = (int64_t *)(a1 + 56);
                int64_t v19 = *v8; // 0x180288f02
                if (v19 == 0) {
                    goto lab_0x180288f21;
                } else {
                    int32_t * v20 = (int32_t *)v19; // 0x180288f10
                    int32_t v21 = *v20; // 0x180288f10
                    *v20 = v21 - 1;
                    if (v21 != 1) {
                        goto lab_0x180288f21;
                    } else {
                        // 0x180288f18
                        function_18028acc0(*v8, 849);
                        goto lab_0x180288f21;
                    }
                }
            }
        }
    }
    // 0x180288fb1
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
  lab_0x180288f7c:;
    int64_t * v22 = (int64_t *)(a1 + 48); // 0x180288f7c
    int64_t v23 = *v22; // 0x180288f7c
    if (v23 == 0) {
        goto lab_0x180288f98;
    } else {
        int32_t * v24 = (int32_t *)v23; // 0x180288f87
        int32_t v25 = *v24; // 0x180288f87
        *v24 = v25 - 1;
        if (v25 != 1) {
            goto lab_0x180288f98;
        } else {
            // 0x180288f8f
            function_18028acc0(*v22, 849);
            goto lab_0x180288f98;
        }
    }
  lab_0x180288f21:;
    int64_t * v26 = (int64_t *)(a1 + 48); // 0x180288f21
    int64_t v27 = *v26; // 0x180288f21
    if (v27 == 0) {
        goto lab_0x180288f3d;
    } else {
        int32_t * v28 = (int32_t *)v27; // 0x180288f2c
        int32_t v29 = *v28; // 0x180288f2c
        *v28 = v29 - 1;
        if (v29 != 1) {
            goto lab_0x180288f3d;
        } else {
            // 0x180288f34
            function_18028acc0(*v26, v27);
            goto lab_0x180288f3d;
        }
    }
  lab_0x180288f98:
    // 0x180288f98
    *v22 = 0;
    *(int64_t *)(a1 + 32) = 0;
    *v7 = 0;
    *(int64_t *)(a1 + 40) = 0;
    result = *(int64_t *)(a1 + 104);
    return result;
  lab_0x180288f3d:
    // 0x180288f3d
    *v26 = 0;
    *(int64_t *)(a1 + 32) = 0;
    *v8 = v2;
    *(int64_t *)(a1 + 40) = v3;
    result = v3;
    goto lab_0x180288e15;
}

// Address range: 0x180288fc8 - 0x180289260
int64_t function_180288fc8(int64_t a1, int32_t a2, int64_t a3) {
    // 0x180288fc8
    if (a2 != 0) {
        if (a3 != 0) {
            // 0x180289003
            function_180289260(a1, (int64_t)a2, a3);
        }
        // 0x180289170
        return function_18026ad50((int64_t)g731);
    }
    if (a3 == 0) {
        // 0x18028916b
        function_180288ddc(a1);
        // 0x180289170
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1; // 0x180288fc8
    int64_t v2; // bp-520, 0x180288fc8
    if ((int16_t)a3 == 76) {
        // 0x18028903a
        if (*(int16_t *)(a3 + 2) == 67) {
            // 0x180289046
            if (*(int16_t *)(a3 + 4) == 95) {
                int64_t v3 = &v2;
                int64_t v4 = a3; // 0x180289150
                int64_t v5 = 0;
                int64_t v6 = function_180297210(v4, L"=;"); // 0x18028905c
                while (v6 != 0) {
                    int64_t v7 = v6 - v4; // 0x180289070
                    if (v7 < 2) {
                        // break -> 0x180289170
                        return 0;
                    }
                    // 0x18028907c
                    if (*(int16_t *)v6 == 59) {
                        // break -> 0x180289170
                        return 0;
                    }
                    int64_t v8 = v5;
                    int64_t v9 = v7 / 2; // 0x180289073
                    int64_t v10 = &g561;
                    int64_t * v11 = (int64_t *)v10; // 0x180289093
                    int64_t v12; // 0x180288fc8
                    int64_t v13; // 0x1802890ac
                    if ((int32_t)function_180287b70(*v11, (int16_t *)v4, v9) == 0) {
                        // 0x1802890a5
                        v13 = 0;
                        v12 = v13;
                        while (*(int16_t *)(2 * v13 + *v11) != 0) {
                            // 0x1802890ac
                            v13 = v12 + 1;
                            v12 = v13;
                        }
                        // 0x1802890b6
                        if (v9 == v13) {
                            // break -> 0x1802890ce
                            return 0;
                        }
                    }
                    int64_t v14 = 2; // 0x1802890bb
                    int64_t v15 = v10 + 24; // 0x1802890c5
                    int64_t v16 = v14; // 0x1802890cc
                    while (v15 <= (int64_t)&g562) {
                        // 0x180289093
                        v10 = v15;
                        int64_t v17 = v14;
                        v11 = (int64_t *)v10;
                        if ((int32_t)function_180287b70(*v11, (int16_t *)v4, v9) == 0) {
                            // 0x1802890a5
                            v13 = 0;
                            v12 = v13;
                            while (*(int16_t *)(2 * v13 + *v11) != 0) {
                                // 0x1802890ac
                                v13 = v12 + 1;
                                v12 = v13;
                            }
                            // 0x1802890b6
                            v16 = v17;
                            if (v9 == v13) {
                                // break -> 0x1802890ce
                                return 0;
                            }
                        }
                        // 0x1802890bb
                        v14 = v17 + 1 & 0xffffffff;
                        v15 = v10 + 24;
                        v16 = v14;
                    }
                    int64_t v18 = v16;
                    int64_t v19 = v6 + 2; // 0x1802890ce
                    int64_t v20 = function_1802971b0(v19, (int16_t *)&g563); // 0x1802890dc
                    if (v20 == 0) {
                        // 0x1802890e9
                        if (*(int16_t *)v19 != 59) {
                            // break -> 0x180289170
                            return 0;
                        }
                    }
                    int64_t v21; // 0x180288fc8
                    int64_t v22; // 0x180288fc8
                    if ((int32_t)v18 > 5) {
                        // 0x1802890f4
                        v21 = 2 * v20;
                        v22 = v8;
                    } else {
                        // 0x1802890fa
                        if ((int32_t)function_180297060(v3, 131, v19, v20) != 0) {
                            goto lab_0x180289248;
                        }
                        int64_t v23 = 2 * v20;
                        if (v23 >= 262) {
                            // 0x180289242
                            function_18026b63c();
                            __asm_int3(v3, 131);
                            goto lab_0x180289248;
                        }
                        // 0x180289127
                        int64_t v24; // bp-584, 0x180288fc8
                        *(int16_t *)((int64_t)&v24 + 64 + v23) = 0;
                        v21 = v23;
                        v22 = v8;
                        if (function_180289260(a1, v18 & 0xffffffff, v3) != 0) {
                            // 0x180289142
                            v21 = v23;
                            v22 = v8 + 1 & 0xffffffff;
                        }
                    }
                    // 0x180289144
                    v5 = v22;
                    int64_t v25 = v21 + v19; // 0x180289144
                    v1 = v5;
                    if (*(int16_t *)v25 == 0) {
                        goto lab_0x180289160_2;
                    }
                    // 0x180289150
                    v4 = v25 + 2;
                    v1 = v5;
                    if (*(int16_t *)v4 == 0) {
                        goto lab_0x180289160_2;
                    }
                    v6 = function_180297210(v4, L"=;");
                }
                // 0x180289170
                return function_18026ad50((int64_t)g731);
            }
        }
    }
    int64_t v26 = 0; // bp-536, 0x1802891a4
    int64_t v27; // bp-248, 0x180288fc8
    if (function_18028884c(a3, &v2, 131, &v27, 85, &v26) == 0) {
        // 0x180289170
        return function_18026ad50((int64_t)g731);
    }
    int64_t v28 = &v2;
    int64_t v29 = a1 + 40;
    int64_t v30 = 0;
    int64_t v31 = 1;
    int64_t v32 = 0;
    int64_t v33 = v31; // 0x1802891e0
    int64_t v34 = v30; // 0x1802891e0
    int64_t v35; // 0x180288fc8
    int16_t v36; // 0x1802891f0
    if (v32 != 0) {
        // 0x1802891e2
        v35 = v28;
        v36 = *(int16_t *)(*(int64_t *)v29 - v28 + v35);
        while (*(int16_t *)v35 == v36) {
            // 0x1802891fa
            if (v36 == 0) {
                goto lab_0x180289220;
            }
            v35 += 2;
            v36 = *(int16_t *)(*(int64_t *)v29 - v28 + v35);
        }
        // 0x180289207
        v33 = 0;
        v34 = v30;
        if (function_180289260(a1, v32, v28) != 0) {
            // 0x180289220
            v33 = v31;
            v34 = v30 + 1 & 0xffffffff;
        }
    }
    int64_t v37 = v34;
    int64_t v38 = v33;
    int64_t v39 = v32 + 1; // 0x180289222
    int64_t v40 = v29 + 32; // 0x18028922b
    while ((int32_t)v39 < 6) {
        // 0x1802891de
        v29 = v40;
        v30 = v37;
        v31 = v38;
        v32 = v39 & 0xffffffff;
        v33 = v31;
        v34 = v30;
        if (v32 != 0) {
            // 0x1802891e2
            v35 = v28;
            v36 = *(int16_t *)(*(int64_t *)v29 - v28 + v35);
            while (*(int16_t *)v35 == v36) {
                // 0x1802891fa
                if (v36 == 0) {
                    goto lab_0x180289220;
                }
                v35 += 2;
                v36 = *(int16_t *)(*(int64_t *)v29 - v28 + v35);
            }
            // 0x180289207
            v33 = 0;
            v34 = v30;
            if (function_180289260(a1, v32, v28) != 0) {
                // 0x180289220
                v33 = v31;
                v34 = v30 + 1 & 0xffffffff;
            }
        }
        // 0x180289222
        v37 = v34;
        v38 = v33;
        v39 = v32 + 1;
        v40 = v29 + 32;
    }
    // 0x18028922d
    v1 = v37;
    if ((int32_t)v38 != 0) {
        // 0x18028916b
        function_180288ddc(a1);
        // 0x180289170
        return function_18026ad50((int64_t)g731);
    }
  lab_0x180289160_2:
    // 0x180289160
    if ((int32_t)v1 == 0) {
        // 0x180289170
        return function_18026ad50((int64_t)g731);
    }
    // 0x18028916b
    function_180288ddc(a1);
    // 0x180289170
    return function_18026ad50((int64_t)g731);
  lab_0x180289248:
    // 0x180289248
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
  lab_0x180289220: return 0;

}

// Address range: 0x180289260 - 0x1802895c8
int64_t function_180289260(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = 0; // bp-808, 0x180289296
    int64_t v2 = __vcrt_getptd2(a1); // 0x1802892a1
    int64_t v3; // bp-504, 0x180289260
    int16_t v4; // bp-776, 0x180289260
    int64_t v5 = function_18028884c(a3, (int64_t *)&v4, 131, &v3, 85, (int64_t *)&v1); // 0x1802892d2
    if (v5 == 0) {
        // 0x180289503
        return function_18026ad50((int64_t)g731);
    }
    int64_t v6 = 0x100000000 * a2;
    int64_t v7 = v2 + 712; // 0x1802892b8
    int64_t v8 = &v4; // 0x1802892e3
    int64_t v9 = v6 / 0x8000000; // 0x1802892e8
    int64_t v10 = v9 + a1;
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x1802892ef
    int64_t v12 = *v11 - v8; // 0x1802892f7
    int64_t v13 = v8; // 0x1802892f7
    int16_t v14 = *(int16_t *)(v13 + v12); // 0x1802892fd
    while (*(int16_t *)v13 == v14) {
        // 0x180289307
        v13 += 2;
        if (v14 == 0) {
            // 0x180289503
            return function_18026ad50((int64_t)g731);
        }
        v14 = *(int16_t *)(v13 + v12);
    }
    int64_t v15 = -1;
    int64_t v16 = v15 + 1; // 0x180289321
    while (*(int16_t *)(2 * v16 + v8) != 0) {
        // 0x180289321
        v15 = v16;
        v16 = v15 + 1;
    }
    int64_t * v17 = _malloc_base(2 * (int32_t)v16 + 6); // 0x180289333
    if (v17 == NULL) {
        // 0x180289503
        return function_18026ad50((int64_t)g731);
    }
    int64_t v18 = (int64_t)v17; // 0x180289333
    int64_t v19 = *v11; // 0x180289344
    int64_t * v20 = (int64_t *)(a1 + 296 + v6 / 0x20000000); // 0x180289357
    int32_t * v21 = (int32_t *)(a1 + 12); // 0x180289364
    int64_t v22 = v18 + 4; // 0x18028936b
    if ((int32_t)function_180293a00(v22, v15 + 2, v8) != 0) {
        // 0x1802895b1
        function_180271834(0, 0, 0, 0, 0);
        __asm_int3(0, 0);
        __asm_int3(0, 0);
        return __asm_int3(0, 0);
    }
    // 0x18028937e
    *v11 = v22;
    int16_t v23; // 0x180289260
    *v20 = v23 == 0 == v4 == 67 ? 0 : v22;
    int32_t v24 = a2; // 0x1802893ab
    int64_t v25; // 0x180289260
    int64_t v26; // 0x180289260
    int64_t v27; // 0x180289260
    int64_t v28; // 0x180289260
    int64_t v29; // 0x180289260
    int32_t * v30; // 0x180289260
    int64_t v31; // 0x1802893d3
    int64_t v32; // 0x1802893d3
    if (v24 != 2) {
        if (v24 != 1) {
            // 0x18028949f
            v27 = v8;
            v29 = v12;
            if (v24 == 5) {
                // 0x1802894a5
                *(int32_t *)(a1 + 24) = v1;
                v27 = v8;
                v29 = v12;
            }
        } else {
            // 0x180289496
            *(int32_t *)(a1 + 20) = v1;
            v27 = v8;
            v29 = v12;
        }
        goto lab_0x1802894ac;
    } else {
        // 0x1802893b5
        *v21 = v1;
        v30 = (int32_t *)v7;
        v26 = 0;
        v28 = v12;
        if (v1 == *v30) {
            goto lab_0x180289487;
        } else {
            v25 = 0;
            int64_t * v33 = (int64_t *)v7; // 0x1802893cf
            int64_t v34 = *v33; // 0x1802893cf
            v31 = v25 + 1;
            v32 = v31 & 0xffffffff;
            *v33 = *(int64_t *)(v2 + 744);
            int64_t v35 = 1; // 0x1802893da
            while (v35 < 5) {
                int64_t v36 = 8 * v35 + v7; // 0x1802893c6
                int64_t v37 = v34; // 0x1802893cd
                if (*v21 == *(int32_t *)v36) {
                    // 0x1802893e8
                    v26 = 0;
                    v28 = v12;
                    if (v32 == 0) {
                        goto lab_0x180289487;
                    } else {
                        int64_t * v38 = (int64_t *)(0x100000000 * v31 / 0x20000000 + v7); // 0x1802893f0
                        *(int64_t *)v7 = *v38;
                        *v38 = v34;
                        goto lab_0x1802893fb;
                    }
                }
                v25 = v32;
                v33 = (int64_t *)v36;
                v34 = *v33;
                v31 = v25 + 1;
                v32 = v31 & 0xffffffff;
                *v33 = v37;
                v35++;
            }
            goto lab_0x1802893fb;
        }
    }
  lab_0x1802894ac:;
    int64_t v39 = function_18029d4a0(a1, (int64_t)&g560, v27, v29); // 0x1802894be
    if ((int32_t)v39 != 0) {
        // 0x1802894c7
        *v11 = v19;
        function_18028acc0(*v20, (int64_t)&g560);
        function_18028acc0(v18, (int64_t)&g560);
        // 0x180289503
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v40 = (int64_t *)(v10 + 56);
    if (v19 != (int64_t)&g757) {
        int32_t * v41 = (int32_t *)*v40; // 0x18028954a
        int32_t v42 = *v41; // 0x18028954a
        *v41 = v42 - 1;
        if (v42 == 1) {
            // 0x180289553
            function_18028acc0(*v40, v9);
            function_18028acc0(*(int64_t *)(v10 + 48), v9);
            function_18028acc0(*v20, v9);
            *v11 = 0;
            *v20 = 0;
        }
    }
    // 0x18028958f
    *(int32_t *)v17 = 1;
    *v40 = v18;
    // 0x180289503
    return function_18026ad50((int64_t)g731);
  lab_0x180289487:
    // 0x180289487
    *(int32_t *)(a1 + 28) = *(int32_t *)(v2 + 716);
    v27 = v26;
    v29 = v28;
    goto lab_0x1802894ac;
  lab_0x1802893fb:
    // 0x1802893fb
    v26 = v32;
    v28 = v12;
    if ((int32_t)v31 == 5) {
        int32_t v43 = *v21; // 0x180289405
        int64_t v44 = v25 + 123 & 0xffffffff; // 0x180289408
        int64_t v45; // bp-328, 0x180289260
        int64_t v46 = &v45; // 0x18028942c
        int64_t v47 = function_180292fa4(0, v25 + 0xfffffffd & 0xffffffff, (int64_t)&g559, v44, v46, (int64_t)v43, 1); // 0x180289431
        int64_t v48 = v46; // 0x18028943a
        int32_t v49 = 0; // 0x18028943a
        int64_t v50 = &g559; // 0x18028943a
        if ((int32_t)v47 != 0) {
            int64_t v51 = 1; // 0x180289448
            int16_t * v52 = (int16_t *)v48; // 0x18028944a
            *v52 = *v52 & 511;
            v48 += 2;
            int64_t v53 = v51 & 0xffffffff; // 0x180289454
            while ((int32_t)v51 < 127) {
                // 0x180289443
                v51 = v53 + 1;
                v52 = (int16_t *)v48;
                *v52 = *v52 & 511;
                v48 += 2;
                v53 = v51 & 0xffffffff;
            }
            // 0x180289456
            v49 = (int32_t)function_18029df20(v46, (int64_t)g753, 254) == 0;
            v50 = 254;
        }
        // 0x180289476
        *(int32_t *)(v2 + 716) = v49;
        *v30 = *v21;
        v26 = v50;
        v28 = v44;
    }
    goto lab_0x180289487;
}

// Address range: 0x1802895c8 - 0x1802897c3
int64_t function_1802895c8(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = (int64_t)g731; // 0x1802895e4
    int64_t v3; // 0x1802895c8
    function_18029db80(v1, 0, 458, v3);
    int64_t v4 = 0; // 0x18028960f
    int64_t v5; // bp-160, 0x1802895c8
    int64_t v6 = &v5; // 0x18028960f
    int64_t v7 = a2; // 0x18028960f
    while (true) {
        int32_t v8 = 0; // 0x180289613
        while (true) {
          lab_0x180289616:;
            uint64_t v9 = v4;
            if (v9 >= 4) {
                return function_18026ad50(v2);
            }
            int64_t v10 = v7;
            int64_t v11; // 0x1802895c8
            int16_t * v12; // 0x1802895c8
            int64_t v13; // 0x1802895c8
            if (v8 == 2) {
                int64_t v14 = 0; // 0x18028963b
                int64_t v15 = 2 * v14 + v10;
                int16_t * v16 = (int16_t *)v15;
                int64_t v17 = v14; // 0x180289643
                v12 = v16;
                v11 = v15;
                v13 = v14;
                while (*v16 != 0) {
                    // 0x18028963b
                    v14 = v17 + 1;
                    v15 = 2 * v14 + v10;
                    v16 = (int16_t *)v15;
                    v17 = v14;
                    v12 = v16;
                    v11 = v15;
                    v13 = v14;
                }
            } else {
                int64_t v18 = function_1802971b0(v10, L"-_."); // 0x180289630
                int64_t v19 = 2 * v18 + v10; // 0x18028964d
                v12 = (int16_t *)v19;
                v11 = v19;
                v13 = v18;
            }
            // 0x180289645
            *(int64_t *)(v6 - 8) = v10;
            v4 = v9 + 1;
            *(int64_t *)v6 = v13;
            v7 = v11 + 2;
            *(int32_t *)(v6 + 8) = v8;
            v6 += 24;
            v8 = 2;
            switch (*v12) {
                case 95: {
                    goto lab_0x180289613;
                }
                case 45: {
                    goto lab_0x180289613;
                }
                case 46: {
                    goto lab_0x180289616;
                }
                default: {
                    int64_t v20; // bp-144, 0x1802895c8
                    int64_t v21; // bp-168, 0x1802895c8
                    switch (v9) {
                        case 0: {
                            // 0x18028978c
                            function_18028980c(v1, &v21);
                            // 0x18028979c
                            return function_18026ad50(v2);
                        }
                        case 1: {
                            // 0x180289744
                            if ((char)function_18028980c(v1, &v21) == 0 || (char)function_18028998c(v1, &v20) != 0 || (char)function_180289898(v1, &v20) != 0) {
                                // 0x18028979c
                                return function_18026ad50(v2);
                            }
                            // 0x180289778
                            function_1802897c4(v1, &v20);
                            // 0x18028979c
                            return function_18026ad50(v2);
                        }
                    }
                    int64_t v22 = v9 - 2; // 0x18028968c
                    int64_t v23; // bp-120, 0x1802895c8
                    if (v22 != 0) {
                        if (v22 != 1 || (char)function_18028980c(v1, &v21) == 0 || (char)function_18028998c(v1, &v20) == 0 || (char)function_180289898(v1, &v23) == 0) {
                            // 0x18028979c
                            return function_18026ad50(v2);
                        }
                        // 0x180289778
                        int64_t v24; // bp-96, 0x1802895c8
                        function_1802897c4(v1, &v24);
                        // 0x18028979c
                        return function_18026ad50(v2);
                    }
                    // 0x1802896ea
                    if ((char)function_18028980c(v1, &v21) == 0) {
                        // 0x18028979c
                        return function_18026ad50(v2);
                    }
                    // 0x1802896fe
                    if ((char)function_18028998c(v1, &v20) != 0) {
                        // 0x18028970e
                        if ((char)function_180289898(v1, &v23) != 0 || (char)function_1802897c4(v1, &v23) != 0) {
                            // 0x18028979c
                            return function_18026ad50(v2);
                        }
                    }
                    // 0x18028972e
                    if ((char)function_180289898(v1, &v20) == 0) {
                        // 0x18028979c
                        return function_18026ad50(v2);
                    }
                    // 0x180289778
                    function_1802897c4(v1, &v23);
                    // 0x18028979c
                    return function_18026ad50(v2);
                }
            }
        }
      lab_0x180289613:;
    }
}

// Address range: 0x1802897c4 - 0x18028980c
int64_t function_1802897c4(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (*(int32_t *)(v1 + 16) != 2) {
        // 0x1802897d0
        int64_t v2; // 0x1802897c4
        return v2 & -256;
    }
    int64_t v3 = function_180297060(a1 + 256, 16, v1, *(int64_t *)(v1 + 8)); // 0x1802897e8
    if ((int32_t)v3 == 0) {
        // 0x1802897d0
        return v3 & -256 | 1;
    }
    // 0x1802897f5
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
}

// Address range: 0x18028980c - 0x180289898
int64_t function_18028980c(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (*(int32_t *)(v1 + 16) != 0) {
        // 0x180289874
        int64_t v2; // 0x18028980c
        return v2 & -256;
    }
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x180289822
    int64_t v4 = *v3; // 0x180289822
    int64_t v5 = v4 - 2; // 0x180289826
    if (v4 != 3 && v5 != 0) {
        // 0x180289874
        return v5 & -256;
    }
    int64_t v6 = function_180289a1c(v4, v4); // 0x180289833
    if ((char)v6 == 0) {
        // 0x180289874
        return v6 & -256;
    }
    int64_t v7 = function_180297060(a1, 64, 64, *v3); // 0x18028984b
    if ((int32_t)v7 == 0) {
        int64_t v8 = function_180297060(a1 + 288, v7 + 85 & 0xffffffff, 64, *v3); // 0x180289865
        if ((int32_t)v8 == 0) {
            // 0x180289874
            return v8 & -256 | 1;
        }
    }
    // 0x18028987f
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
}

// Address range: 0x180289898 - 0x18028998c
int64_t function_180289898(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // 0x180289898
    if (*(int32_t *)(v1 + 16) != 0) {
        // 0x180289962
        return v2 & -256;
    }
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x1802898bf
    int64_t v4 = *v3; // 0x1802898bf
    int64_t v5 = v4; // 0x1802898c3
    int64_t v6; // 0x180289898
    if (v4 == 2) {
        int64_t v7 = function_180289a1c(2, 2); // 0x1802898c8
        if ((char)v7 != 0) {
          lab_0x180289908:;
            int64_t v8 = function_180297060(a1 + 128, 64, 2, *v3); // 0x18028991b
            if ((int32_t)v8 != 0) {
                // 0x180289975
                function_180271834(0, 0, 0, 0, 0);
                __asm_int3(0, 0);
                return __asm_int3(0, 0);
            }
            int64_t v9 = v8 + 85 & 0xffffffff; // 0x180289924
            int64_t v10 = a1 + 288; // 0x180289927
            int64_t v11 = function_180296f20(v10, v9, (int64_t *)&g478, v8 + 1 & 0xffffffff); // 0x18028993e
            if ((int32_t)v11 != 0) {
                // 0x180289975
                function_180271834(0, 0, 0, 0, 0);
                __asm_int3(0, 0);
                return __asm_int3(0, 0);
            }
            int64_t v12 = function_180296f20(v10, v9, (int64_t *)v9, *v3); // 0x180289953
            if ((int32_t)v12 == 0) {
                // 0x180289962
                return v12 & -256 | 1;
            }
            // 0x180289975
            function_180271834(0, 0, 0, 0, 0);
            __asm_int3(0, 0);
            return __asm_int3(0, 0);
        }
        // 0x1802898c5
        v5 = *v3;
        v6 = v7;
    }
    // 0x1802898d1
    if (v5 != 3) {
        // 0x180289962
        return v6 & -256;
    }
    int64_t v13 = 0; // 0x1802898d6
    uint16_t v14 = *(int16_t *)(2 * v13 + 2); // 0x1802898e1
    int64_t v15 = (int64_t)__pctype_func();
    v2 = v15;
    while (v14 < 256) {
        uint16_t v16 = *(int16_t *)(2 * (int64_t)v14 + v15); // 0x1802898f5
        if ((v16 & 4) == 0) {
            // 0x180289960
            v2 = v16;
            return v2 & -256;
        }
        // 0x1802898ff
        v13++;
        if (v13 >= 3) {
            goto lab_0x180289908;
        }
        v14 = *(int16_t *)(2 * v13 + 2);
        v15 = (int64_t)__pctype_func();
        v2 = v15;
    }
  lab_0x180289960_2:
    // 0x180289962
    return v2 & -256;
}

// Address range: 0x18028998c - 0x180289a1c
int64_t function_18028998c(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // 0x18028998c
    if (*(int32_t *)(v1 + 16) != 0) {
        // 0x1802899fa
        return v2 & -256;
    }
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x1802899a7
    if (*v3 != 4) {
        // 0x1802899fa
        return v2 & -256;
    }
    int64_t v4 = function_180289a1c(4, 4); // 0x1802899b0
    if ((char)v4 == 0) {
        // 0x1802899fa
        return v4 & -256;
    }
    int64_t v5 = a1 + 288; // 0x1802899c6
    int64_t v6 = function_180296f20(v5, 85, (int64_t *)&g478, 1); // 0x1802899d1
    if ((int32_t)v6 != 0) {
        // 0x180289a05
        function_180271834(0, 0, 0, 0, 0);
        __asm_int3(0, 0);
        return __asm_int3(0, 0);
    }
    int64_t v7 = v6 + 85 & 0xffffffff; // 0x1802899de
    int64_t v8 = function_180296f20(v5, v7, (int64_t *)v7, *v3); // 0x1802899eb
    if ((int32_t)v8 == 0) {
        // 0x1802899fa
        return v8 & -256 | 1;
    }
    // 0x180289a05
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
}

// Address range: 0x180289a1c - 0x180289a85
int64_t function_180289a1c(int64_t a1, uint64_t a2) {
    // 0x180289a1c
    if (a2 == 0) {
        // 0x180289a6b
        int64_t v1; // 0x180289a1c
        return v1 & -256 | 1;
    }
    int64_t v2 = 0; // 0x180289a3c
    uint16_t v3 = *(int16_t *)(2 * v2 + a1); // 0x180289a3e
    int16_t * v4 = __pctype_func(); // 0x180289a43
    while (v3 < 256) {
        // 0x180289a55
        if ((*(int16_t *)(2 * (int64_t)v3 + (int64_t)v4) & 259) == 0) {
            // break -> 0x180289a6b
            return 0;
        }
        // 0x180289a61
        v2++;
        if (v2 >= a2) {
            // 0x180289a6b
            return 1;
        }
        v3 = *(int16_t *)(2 * v2 + a1);
        v4 = __pctype_func();
    }
    // 0x180289a6b
    return 0;
}

// Address range: 0x180289a88 - 0x180289db9
int64_t function_180289a88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5, int64_t a6, uint32_t a7, int32_t a8, int32_t a9) {
    int64_t v1 = a1; // 0x180289ac7
    if (a5 >= 1) {
        // 0x180289ac9
        function_1802850f0(a4, (int64_t)a5);
        v1 = a4;
    }
    int32_t v2 = a8; // 0x180289ae4
    if (a8 == 0) {
        // 0x180289ae6
        v2 = *(int32_t *)(v1 + 12);
    }
    int64_t v3 = v2;
    int64_t v4 = function_18028d848(v3, a9 == 0 ? 1 : 9); // 0x180289b0e
    if ((int32_t)v4 == 0) {
        // 0x180289d93
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = 0x100000000 * v4;
    int64_t v6 = v5 / 0x80000000; // 0x180289b23
    uint64_t v7 = v6 - (v6 | (int64_t)(v6 < 0xfffffffffffffff0)) & v6 + 16; // 0x180289b30
    if (v7 == 0) {
        // 0x180289d93
        return function_18026ad50((int64_t)g731);
    }
    // 0x180289b39
    int64_t v8; // bp-136, 0x180289a88
    int64_t v9 = &v8; // 0x180289a92
    int64_t v10; // 0x180289a88
    int64_t v11; // 0x180289a88
    int64_t v12; // 0x180289a88
    int64_t v13; // 0x180289a88
    if (v7 < 1025) {
        int64_t v14 = v7 + 15 & -16; // 0x180289b57
        __chkstk(v14, 0, 0xffffffffffffff0);
        int64_t v15 = v9 - v14; // 0x180289b63
        int64_t v16 = v15 + 80; // 0x180289b66
        if (v16 == 0) {
            // 0x180289d93
            return function_18026ad50((int64_t)g731);
        }
        // 0x180289b74
        *(int32_t *)v16 = 0xcccc;
        v10 = v16;
        v12 = v15;
        goto lab_0x180289b94;
    } else {
        int64_t * v17 = _malloc_base((int32_t)v7); // 0x180289b7f
        int64_t v18 = (int64_t)v17; // 0x180289b7f
        v11 = v18;
        v13 = v9;
        if (v17 == NULL) {
            goto lab_0x180289b98;
        } else {
            // 0x180289b8e
            *(int32_t *)v17 = 0xdddd;
            v10 = v18;
            v12 = v9;
            goto lab_0x180289b94;
        }
    }
  lab_0x180289b94:
    // 0x180289b94
    v11 = v10 + 16;
    v13 = v12;
    goto lab_0x180289b98;
  lab_0x180289b98:
    // 0x180289b98
    if (v11 == 0) {
        // 0x180289d93
        return function_18026ad50((int64_t)g731);
    }
    int64_t v19 = v5 / 0x100000000; // 0x180289b15
    int32_t * v20 = (int32_t *)(v13 + 40); // 0x180289ba1
    *v20 = (int32_t)v19;
    int64_t * v21 = (int64_t *)(v13 + 32); // 0x180289bac
    *v21 = v11;
    int64_t v22; // 0x180289a88
    int64_t v23; // 0x180289a88
    int64_t v24; // 0x180289a88
    int64_t v25; // 0x180289a88
    int64_t v26; // 0x180289abc
    int64_t v27; // 0x180289bcd
    int64_t v28; // 0x180289bf3
    if ((int32_t)function_18028d848(v3, 1) == 0) {
        goto lab_0x180289d80;
    } else {
        // 0x180289bc8
        v26 = a3 & 0xffffffff;
        int64_t * v29 = (int64_t *)(v13 + 64); // 0x180289bc8
        *v29 = 0;
        v27 = v19 & 0xffffffff;
        int64_t * v30 = (int64_t *)(v13 + 56); // 0x180289bd0
        *v30 = 0;
        int64_t * v31 = (int64_t *)(v13 + 48); // 0x180289bd8
        *v31 = 0;
        *v20 = 0;
        *v21 = 0;
        int64_t v32 = function_18028e228(a2, v26, v11, v27, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x180289bec
        if ((int32_t)v32 == 0) {
            goto lab_0x180289d80;
        } else {
            int64_t v33 = 0x100000000 * v32;
            v28 = v33 / 0x100000000;
            if ((a3 & 1024) == 0) {
                int64_t v34 = v33 / 0x80000000; // 0x180289c5d
                uint64_t v35 = v34 - (v34 | (int64_t)(v34 < 0xfffffffffffffff0)) & v34 + 16; // 0x180289c6a
                if (v35 == 0) {
                    goto lab_0x180289d80;
                } else {
                    if (v35 > 1024) {
                        int64_t * v36 = _malloc_base((int32_t)v35); // 0x180289cad
                        int64_t v37 = (int64_t)v36; // 0x180289cad
                        v25 = v13;
                        v23 = v37;
                        if (v36 == NULL) {
                            goto lab_0x180289cc6;
                        } else {
                            // 0x180289cbc
                            *(int32_t *)v36 = 0xdddd;
                            v24 = v13;
                            v22 = v37;
                            goto lab_0x180289cc2;
                        }
                    } else {
                        int64_t v38 = v13 - __chkstk(v35, 0, 1024); // 0x180289c94
                        int64_t v39 = v38 + 80; // 0x180289c97
                        if (v39 == 0) {
                            goto lab_0x180289d80;
                        } else {
                            // 0x180289ca5
                            *(int32_t *)v39 = 0xcccc;
                            v24 = v38;
                            v22 = v39;
                            goto lab_0x180289cc2;
                        }
                    }
                }
            } else {
                if (a7 != 0 && v28 <= (int64_t)a7) {
                    // 0x180289c1c
                    *v29 = 0;
                    *v30 = 0;
                    *v31 = 0;
                    *v20 = a7;
                    *v21 = a6;
                    function_18028e228(a2, v26, v11, v27, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                }
                goto lab_0x180289d80;
            }
        }
    }
  lab_0x180289d80:;
    int64_t v40 = v11 - 16; // 0x180289d80
    if (*(int32_t *)v40 == 0xdddd) {
        // 0x180289d8c
        function_18028acc0(v40, 0);
    }
    // 0x180289d93
    return function_18026ad50((int64_t)g731);
  lab_0x180289cc6:
    // 0x180289cc6
    if (v23 == 0) {
        goto lab_0x180289d80;
    } else {
        // 0x180289ccf
        *(int64_t *)(v25 + 64) = 0;
        int64_t * v41 = (int64_t *)(v25 + 56); // 0x180289cd7
        *v41 = 0;
        int64_t * v42 = (int64_t *)(v25 + 48); // 0x180289cdf
        *v42 = 0;
        int32_t v43 = v28; // 0x180289ce7
        int32_t * v44 = (int32_t *)(v25 + 40); // 0x180289ce7
        *v44 = v43;
        int64_t * v45 = (int64_t *)(v25 + 32); // 0x180289cee
        *v45 = v23;
        int64_t v46 = function_18028e228(a2, v26, v11, v27, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x180289cf3
        if ((int32_t)v46 == 0) {
            goto lab_0x180289d61;
        } else {
            // 0x180289cfe
            *v41 = 0;
            *v42 = 0;
            if (a7 != 0) {
                // 0x180289d2e
                *v44 = a7;
                *v45 = a6;
                int64_t v47 = function_18028d8d8(v3, 0, v23, v43, (int64_t)&g1381, (int64_t)&g1381); // 0x180289d3b
                if ((int32_t)v47 == 0) {
                    goto lab_0x180289d61;
                } else {
                    goto lab_0x180289d46;
                }
            } else {
                // 0x180289d18
                *v44 = 0;
                *v45 = 0;
                int64_t v48 = function_18028d8d8(v3, 0, v23, v43, (int64_t)&g1381, (int64_t)&g1381); // 0x180289d21
                if ((int32_t)v48 != 0) {
                    goto lab_0x180289d46;
                } else {
                    goto lab_0x180289d61;
                }
            }
        }
    }
  lab_0x180289cc2:
    // 0x180289cc2
    v25 = v24;
    v23 = v22 + 16;
    goto lab_0x180289cc6;
  lab_0x180289d61:;
    int64_t v49 = v23 - 16; // 0x180289d61
    if (*(int32_t *)v49 == 0xdddd) {
        // 0x180289d6d
        function_18028acc0(v49, 0);
    }
    goto lab_0x180289d80;
  lab_0x180289d46:;
    int64_t v50 = v23 - 16; // 0x180289d46
    if (*(int32_t *)v50 == 0xdddd) {
        // 0x180289d52
        function_18028acc0(v50, 0);
    }
    goto lab_0x180289d80;
}

// Address range: 0x180289e88 - 0x180289ebd
int64_t function_180289e88(int64_t a1, int64_t result, int64_t a3) {
    // 0x180289e88
    if (*(int64_t *)(8 * a3 + (int64_t)&g1299) == result) {
        // 0x180289eb7
        return result;
    }
    uint32_t v1 = *(int32_t *)(a1 + 936); // 0x180289ea1
    int64_t result2 = v1; // 0x180289ead
    if ((g769 & v1) == 0) {
        // 0x180289eaf
        result2 = function_180295f24();
        *(int64_t *)result = result2;
    }
    // 0x180289eb7
    return result2;
}

// Address range: 0x180289ef4 - 0x180289f29
int64_t function_180289ef4(int64_t a1, int64_t result, int64_t a3) {
    // 0x180289ef4
    if (*(int64_t *)(8 * a3 + (int64_t)&g1343) == result) {
        // 0x180289f23
        return result;
    }
    uint32_t v1 = *(int32_t *)(a1 + 936); // 0x180289f0d
    int64_t result2 = v1; // 0x180289f19
    if ((g769 & v1) == 0) {
        // 0x180289f1b
        result2 = function_180295008();
        *(int64_t *)result = result2;
    }
    // 0x180289f23
    return result2;
}

// Address range: 0x180289f30 - 0x18028a031
int64_t function_180289f30(uint32_t a1, int64_t * a2) {
    // 0x180289f30
    if (a1 == 0) {
        // 0x18028a01b
        return 0;
    }
    int64_t v1 = a1 & 31; // 0x180289f49
    int64_t v2 = a1; // 0x180289f4f
    int64_t v3 = function_18028a970(); // 0x180289f61
    *a2 = v3;
    int64_t v4; // 0x180289f30
    int64_t v5; // 0x180289f30
    if ((v2 & 8) == 0) {
        goto lab_0x180289f81;
    } else {
        if ((char)v3 >= 0) {
            goto lab_0x180289f81;
        } else {
            // 0x180289f77
            v4 = v1 & 23;
            v5 = 1;
            goto lab_0x180289fc4;
        }
    }
  lab_0x180289f81:
    if ((v2 & 4) == 0) {
        goto lab_0x180289f98;
    } else {
        if ((v3 & 512) == 0) {
            goto lab_0x180289f98;
        } else {
            // 0x180289f8e
            v4 = v1 & 27;
            v5 = 4;
            goto lab_0x180289fc4;
        }
    }
  lab_0x180289f98:
    if ((v2 & 1) == 0) {
        goto lab_0x180289faf;
    } else {
        if ((v3 & 1024) == 0) {
            goto lab_0x180289faf;
        } else {
            // 0x180289fa5
            v4 = v1 & 30;
            v5 = 8;
            goto lab_0x180289fc4;
        }
    }
  lab_0x180289faf:
    // 0x180289faf
    v4 = v1;
    v5 = 0;
    if ((v2 & 2) != 0) {
        // 0x180289fb5
        v4 = v1;
        v5 = 0;
        if ((v3 & 2048) != 0) {
            // 0x180289fbc
            v4 = v1 & 29;
            v5 = v2 & 16;
        }
    }
    goto lab_0x180289fc4;
  lab_0x180289fc4:;
    int64_t v6 = v4; // 0x180289fc8
    int64_t v7 = v5; // 0x180289fc8
    if ((v2 & 16) != 0) {
        // 0x180289fca
        v6 = v4;
        v7 = v5;
        if ((v3 & 0x1000) != 0) {
            // 0x180289fd1
            v6 = v4 & 0xffffffef;
            v7 = v5 | 32;
        }
    }
    // 0x180289fd8
    if ((int32_t)v6 != 0) {
        // 0x180289fdc
        function_18028a8f0(0x1f80, 0xffc0);
    }
    if (v7 == 0) {
        // 0x18028a01b
        return v6 & 0xffffffff;
    }
    if ((v7 & -1 - v3) == 0) {
        // 0x18028a01b
        return v6 & 0xffffffff;
    }
    if ((int32_t)v6 != 0) {
        // 0x18028a00c
        function_18028a990(v7);
    } else {
        // 0x180289fff
        function_18028a980(v7 | v3);
    }
    // 0x18028a01b
    return v6 & 0xffffffff;
}

// Address range: 0x18028a040 - 0x18028a173
int64_t function_18028a040(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x18028a040
    int128_t v1; // 0x18028a040
    int64_t v2 = __asm_movaps_19(v1); // 0x18028a052
    int64_t v3 = 0; // bp-240, 0x18028a06a
    int64_t v4 = a3; // bp-248, 0x18028a076
    int64_t v5 = function_180289f30(a5, &v3); // 0x18028a086
    int64_t v6; // 0x18028a040
    int128_t v7 = __asm_movsd(v6); // 0x18028a08b
    int64_t v8; // bp+56, 0x18028a040
    if ((int32_t)v5 != 0) {
        // 0x18028a094
        int128_t v9; // 0x18028a040
        int128_t v10 = __asm_xorps(v9, v9); // 0x18028a098
        int128_t v11; // 0x18028a040
        __asm_movups(v11, v10);
        int128_t v12; // 0x18028a040
        __asm_movups(v12, v10);
        int128_t v13; // 0x18028a040
        __asm_movups(v13, v10);
        int128_t v14; // 0x18028a040
        __asm_movups(v14, v10);
        int128_t v15; // 0x18028a040
        __asm_movups(v15, v10);
        int128_t v16; // 0x18028a040
        __asm_movups(v16, v10);
        int128_t v17; // 0x18028a040
        __asm_movups(v17, v10);
        int32_t v18; // 0x18028a040
        if (v18 == 2) {
            // 0x18028a0ba
            __asm_movsd_17(v7);
        }
        // 0x18028a0c6
        int128_t v19; // bp-184, 0x18028a040
        function_180291670(&v19, &v3, a5, a2 & 0xffffffff, &v8, &v4);
    }
    int64_t v20 = a4 & 0xffffffff; // 0x18028a083
    int64_t result; // 0x18028a159
    if ((int32_t)a4 == 0 | (char)function_180295b90() == 0) {
        // 0x18028a145
        function_1802919e0(v20);
        __asm_movsd(v4);
        // 0x18028a152
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v2);
        return result;
    }
    int128_t v21 = __asm_movsd(v8); // 0x18028a0fc
    int128_t v22 = __asm_movsd(v4); // 0x18028a106
    __asm_movsd_17(v21);
    int64_t v23 = __asm_movsd_17(v22); // 0x18028a114
    __asm_movsd_17(v7);
    int64_t v24 = 0x100000000 * a4 / 0x100000000; // bp-232, 0x18028a124
    if ((int32_t)function_180295bc0((int64_t)&v24) == 0) {
        // 0x18028a136
        function_1802919e0(v20);
    }
    // 0x18028a13d
    __asm_movsd(v23);
    // 0x18028a152
    result = function_18026ad50((int64_t)g731);
    __asm_movaps((int128_t)v2);
    return result;
}

// Address range: 0x18028a180 - 0x18028a2c0
int64_t function_18028a180(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x18028a180
    int128_t v1; // 0x18028a180
    int64_t v2 = __asm_movaps_19(v1); // 0x18028a192
    int64_t v3 = 0; // bp-240, 0x18028a1aa
    int64_t v4 = 0x100000000 * a3 / 0x100000000; // bp-248, 0x18028a1b6
    int64_t v5 = function_180289f30(a5, &v3); // 0x18028a1c6
    int32_t v6; // 0x18028a180
    int128_t v7 = __asm_movss_31(v6); // 0x18028a1cb
    int32_t v8; // bp+56, 0x18028a180
    if ((int32_t)v5 != 0) {
        // 0x18028a1d4
        int128_t v9; // 0x18028a180
        int128_t v10 = __asm_xorps(v9, v9); // 0x18028a1d8
        int128_t v11; // 0x18028a180
        __asm_movups(v11, v10);
        int128_t v12; // 0x18028a180
        __asm_movups(v12, v10);
        int128_t v13; // 0x18028a180
        __asm_movups(v13, v10);
        int128_t v14; // 0x18028a180
        __asm_movups(v14, v10);
        int128_t v15; // 0x18028a180
        __asm_movups(v15, v10);
        int128_t v16; // 0x18028a180
        __asm_movups(v16, v10);
        int128_t v17; // 0x18028a180
        __asm_movups(v17, v10);
        int32_t v18; // 0x18028a180
        if (v18 == 2) {
            // 0x18028a1fa
            __asm_movss(v7);
        }
        // 0x18028a206
        int128_t v19; // bp-184, 0x18028a180
        function_1802919b0(&v19, &v3, a5, a2 & 0xffffffff, (int64_t *)&v8, (int32_t *)&v4);
    }
    int64_t v20 = a4 & 0xffffffff; // 0x18028a1c3
    int64_t result; // 0x18028a2a6
    if ((int32_t)a4 == 0 | (char)function_180295b90() == 0) {
        // 0x18028a292
        function_1802919e0(v20);
        __asm_movss_31((int32_t)v4);
        // 0x18028a29f
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v2);
        return result;
    }
    int128_t v21 = __asm_cvtps2pd(__asm_movss_31(v8)); // 0x18028a246
    int64_t v22 = 0x100000000 * a4 / 0x100000000; // bp-232, 0x18028a24b
    int128_t v23 = __asm_cvtps2pd(v7); // 0x18028a258
    __asm_movsd_17(v21);
    int128_t v24 = __asm_cvtps2pd(__asm_movss_31((int32_t)v4)); // 0x18028a267
    __asm_movsd_17(v23);
    int64_t v25 = __asm_movsd_17(v24); // 0x18028a270
    if ((int32_t)function_180295bc0((int64_t)&v22) == 0) {
        // 0x18028a27f
        function_1802919e0(v20);
    }
    // 0x18028a286
    __asm_cvtpd2ps(__asm_movsd(v25));
    // 0x18028a29f
    result = function_18026ad50((int64_t)g731);
    __asm_movaps((int128_t)v2);
    return result;
}

// Address range: 0x18028a2c0 - 0x18028a2d3
int128_t function_18028a2c0(int64_t a1) {
    // 0x18028a2c0
    return __asm_movq(a1 | 0x8000000000000);
}

// Address range: 0x18028a2e0 - 0x18028a2e9
int128_t function_18028a2e0(int64_t a1) {
    // 0x18028a2e0
    return __asm_movd((int32_t)a1 | 0x400000);
}

// Address range: 0x18028a2f0 - 0x18028a3a2
int64_t function_18028a2f0(int64_t a1) {
    struct cpuid_t v1; // 0x18028a307
    // 0x18028a2f0
    g1301 = 0;
    v1 = __asm_cpuid_83(1);
    if ((v1.e2 & 0x18001000) != 0x18001000) {
        // 0x18028a395
        g1300 = 0;
        return 0;
    }
    // 0x18028a326
    int64_t v2; // 0x18028a2f0
    if ((__asm_xgetbv(0, (int64_t)v1.e3) & 6) != 6) {
        int64_t v3 = g1301; // 0x18028a351
        v2 = v3;
        if ((v3 & 1) == 0) {
            // 0x18028a395
            g1300 = v3;
            return 0;
        }
    } else {
        // 0x18028a358
        g1301 = 1;
        v2 = 1;
    }
    // 0x18028a360
    if (__asm_cpuid_84(0).e0 < 7 || (__asm_cpuid_85(7).e1 & 32) == 0) {
        // 0x18028a395
        g1300 = v2;
        return 0;
    }
    // 0x18028a379
    g1301 = 3;
    g1300 = 3;
    return 0;
}

// Address range: 0x18028a3b0 - 0x18028a3b7
int128_t function_18028a3b0(void) {
    // 0x18028a3b0
    int128_t v1; // 0x18028a3b0
    return __asm_roundsd(v1, v1, 9);
}

// Address range: 0x18028a3c0 - 0x18028a3c7
int128_t function_18028a3c0(void) {
    // 0x18028a3c0
    int128_t v1; // 0x18028a3c0
    return __asm_roundss(v1, v1, 9);
}

// Address range: 0x18028a3d0 - 0x18028a3d7
int128_t function_18028a3d0(void) {
    // 0x18028a3d0
    int128_t v1; // 0x18028a3d0
    return __asm_roundsd(v1, v1, 10);
}

// Address range: 0x18028a3e0 - 0x18028a3e7
int128_t function_18028a3e0(void) {
    // 0x18028a3e0
    int128_t v1; // 0x18028a3e0
    return __asm_roundss(v1, v1, 10);
}

// Address range: 0x18028a3f0 - 0x18028a53c
int128_t function_18028a3f0(int128_t a1) {
    uint64_t v1 = __asm_movq_20(a1); // 0x18028a3f7
    int128_t v2 = *(int128_t *)(134 - (v1 / 0x10000000000000 - 1023) / 8 + (int64_t)&g568 + 8); // 0x18028a430
    int128_t v3 = __asm_movdqu_18(v2); // 0x18028a430
    __asm_movq_20(v3);
    __asm_movq_20(__asm_psrldq(v3, 8));
    int64_t v4 = 0x3ff0000000000000; // 0x18028a47b
    int128_t v5 = __asm_movq(0); // 0x18028a498
    int128_t v6; // 0x18028a529
    // 0x18028a510
    v6 = __asm_movq(v4);
    __asm_movq_20(v5);
    return __asm_mulsd(v6, 0x3ff921fb54442d18);
}

// Address range: 0x18028a540 - 0x18028a72c
int64_t function_18028a540(int128_t a1) {
    uint64_t v1 = __asm_vmovq(a1); // 0x18028a54b
    int64_t v2 = 134 - (v1 / 0x10000000000000 - 1023) / 8; // 0x18028a56c
    int64_t v3 = *(int64_t *)(v2 + (int64_t)&g568); // 0x18028a56f
    int128_t v4 = __asm_vmovdqu_52(*(int128_t *)(v2 + (int64_t)&g568 + 8)); // 0x18028a584
    __asm_vmovq(v4);
    __asm_vmovq(__asm_vpsrldq(v4, 8));
    int64_t v5 = 0; // 0x18028a5cf
    int64_t v6 = (v1 & 0xfffffffffffff | 0x10000000000000) * v3; // 0x18028a58a
    int128_t v7 = __asm_vmovq_30(v5); // 0x18028a699
    uint64_t v8 = v6 == 0 ? 0 : -((llvm_ctlz_i64(v6, true) ^ 63)) & 63; // 0x18028a6a9
    int128_t v9 = __asm_vmovq_30(v5 | (v6 << v8) / 0x1000); // 0x18028a6c1
    int128_t v10 = __asm_vandpd(v7, g566); // 0x18028a6c6
    int128_t v11 = __asm_vsubsd_25(v7, v10); // 0x18028a6ce
    int128_t v12 = __asm_vmulsd(v7, 0x3ff921fb54442d18); // 0x18028a6d2
    int128_t v13 = __asm_vmulsd(v10, 0x3ff921fb50000000); // 0x18028a6da
    int128_t v14 = __asm_vfmadd231sd_28(__asm_vsubsd_25(v13, v12), v11, 0x3ff921fb50000000); // 0x18028a6e6
    int128_t v15 = __asm_vfmadd231sd_28(__asm_vfmadd231sd_28(v14, v10, 0x3e5110b460000000), v11, 0x3e5110b460000000); // 0x18028a6f8
    int128_t v16 = __asm_vaddsd(v15, __asm_vfmadd231sd_28(__asm_vmulsd(v9, 0x3ff921fb54442d18), v7, 0x3c91a62633145c06)); // 0x18028a712
    __asm_vaddsd(__asm_vsubsd_25(v12, __asm_vaddsd(v12, v16)), v16);
    return 0;
}

// Address range: 0x18028a7b0 - 0x18028a83c
int64_t function_18028a7b0(void) {
    // 0x18028a7b0
    int128_t v1; // 0x18028a7b0
    int128_t v2 = __asm_movaps(v1); // 0x18028a7b4
    int32_t v3 = __asm_movd_48(v2); // 0x18028a7c0
    uint32_t result = v3 & 0x7f800000; // 0x18028a7c6
    if (result != 0x7f800000) {
        // 0x18028a837
        return result;
    }
    if ((v3 & 0x7fffff) != 0) {
        // 0x18028a82f
        __asm_movd(v3 | 0x400000);
        // 0x18028a837
        return result;
    }
    // 0x18028a7da
    __asm_movss(__asm_xorps(v1, v1));
    __asm_movss(v2);
    int64_t result2 = function_18028a180((int64_t)"cosf", 18, -0x400000, 1, 8); // 0x18028a81f
    __asm_movss_31(-0x400000);
    return result2;
}

// Address range: 0x18028a840 - 0x18028a8cc
int64_t function_18028a840(void) {
    // 0x18028a840
    int128_t v1; // 0x18028a840
    int128_t v2 = __asm_movaps(v1); // 0x18028a844
    int32_t v3 = __asm_movd_48(v2); // 0x18028a850
    uint32_t result = v3 & 0x7f800000; // 0x18028a856
    if (result != 0x7f800000) {
        // 0x18028a8c7
        return result;
    }
    if ((v3 & 0x7fffff) != 0) {
        // 0x18028a8bf
        __asm_movd(v3 | 0x400000);
        // 0x18028a8c7
        return result;
    }
    // 0x18028a86a
    __asm_movss(__asm_xorps(v1, v1));
    __asm_movss(v2);
    int64_t result2 = function_18028a180((int64_t)"sinf", 30, -0x400000, 1, 8); // 0x18028a8af
    __asm_movss_31(-0x400000);
    return result2;
}

// Address range: 0x18028a8d0 - 0x18028a8ed
int64_t function_18028a8d0(int64_t a1, int64_t a2) {
    // 0x18028a8d0
    int32_t v1; // 0x18028a8d0
    __asm_stmxcsr(v1);
    __asm_ldmxcsr(v1 & -64);
    return (uint32_t)(v1 & 63);
}

// Address range: 0x18028a8f0 - 0x18028a968
int64_t function_18028a8f0(int64_t a1, int64_t a2) {
    // 0x18028a8f0
    uint32_t v1; // 0x18028a8f0
    __asm_stmxcsr(v1);
    int64_t result = v1; // 0x18028a8f9
    int32_t v2 = v1 & (((int32_t)a2 | -0x7f81) ^ 0x7f80) | (int32_t)(a2 & a1); // 0x18028a911
    if (g759 == 0 || (v2 & 64) == 0) {
        // 0x18028a954
        __asm_ldmxcsr(v2 & -65);
        return result;
    }
    // 0x18028a923
    __asm_ldmxcsr(v2);
    return result;
}

// Address range: 0x18028a970 - 0x18028a97a
int64_t function_18028a970(void) {
    // 0x18028a970
    uint32_t result; // 0x18028a970
    __asm_stmxcsr(result);
    return result;
}

// Address range: 0x18028a980 - 0x18028a98a
int64_t function_18028a980(int64_t a1) {
    // 0x18028a980
    __asm_ldmxcsr((int32_t)a1);
    int64_t result; // 0x18028a980
    return result;
}

// Address range: 0x18028a990 - 0x18028a9ad
int64_t function_18028a990(int64_t a1) {
    // 0x18028a990
    int64_t result; // 0x18028a990
    if ((a1 & 63) != 0) {
        // 0x18028a995
        int32_t v1; // 0x18028a990
        __asm_stmxcsr(v1);
        uint32_t v2 = v1 | (int32_t)a1 & 63; // 0x18028a9a1
        __asm_ldmxcsr(v2);
        result = v2;
    }
    // 0x18028a9ac
    return result;
}

// Address range: 0x18028a9b0 - 0x18028a9bd
int64_t function_18028a9b0(int32_t a1, int64_t a2) {
    // 0x18028a9b0
    int32_t v1; // 0x18028a9b0
    __asm_stmxcsr(v1);
    return (uint32_t)(v1 & 63);
}

// Address range: 0x18028a9c0 - 0x18028ab0a
int64_t function_18028a9c0(void) {
    // 0x18028a9c0
    int128_t v1; // 0x18028a9c0
    int64_t v2 = __asm_movaps_19(v1); // 0x18028a9c7
    int128_t v3; // 0x18028a9c0
    int128_t v4 = __asm_movaps(v3); // 0x18028a9cc
    int64_t v5; // 0x18028a9c0
    int64_t result; // 0x18028a9c0
    if ((int32_t)v5 < 10) {
        // 0x18028a9d9
        return result;
    }
    // 0x18028aafd
    __asm_movaps(v4);
    __asm_movaps((int128_t)v2);
    return result;
}

// Address range: 0x18028ab30 - 0x18028acbc
int64_t function_18028ab30(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = __asm_movq_20(__asm_movq(a1)); // 0x18028ab56
    int64_t v2 = 134 - (v1 / 0x10000000000000 - 1023) / 8; // 0x18028ab77
    int64_t v3 = *(int64_t *)(v2 + (int64_t)&g569); // 0x18028ab7a
    int128_t v4 = __asm_movdqu_18(*(int128_t *)(v2 + (int64_t)&g569 + 8)); // 0x18028ab92
    __asm_movq_20(v4);
    __asm_movq_20(__asm_psrldq(v4, 8));
    int64_t v5 = 0x3ff0000000000000; // 0x18028abdd
    // 0x18028ac00
    *(int32_t *)a3 = 0;
    int64_t result; // 0x18028ab30
    // 0x18028ac4d
    result = 0;
    // 0x18028ac4f
    result = 0;
    // 0x18028ac80
    *(int64_t *)a2 = __asm_movsd_17(__asm_mulsd(__asm_movq(v5), 0x3ff921fb54442d18));
    return result;
}

// Address range: 0x18028acc0 - 0x18028acfc
int64_t function_18028acc0(int64_t lpMem, int64_t a2) {
    // 0x18028acc0
    if (lpMem == 0) {
        // 0x18028acfb
        int64_t result; // 0x18028acc0
        return result;
    }
    bool v1 = HeapFree((int64_t *)g1350, 0, (int64_t *)lpMem); // 0x18028acd6
    int64_t result2 = v1; // 0x18028acde
    if (!v1) {
        int64_t errorCode = GetLastError(); // 0x18028ace6
        int64_t v2 = function_1802797d8(errorCode); // 0x18028ace8
        int64_t v3; // 0x18028acc0
        result2 = function_180279918(errorCode, 0, lpMem, v3);
        *(int32_t *)result2 = (int32_t)v2;
    }
    // 0x18028acfb
    return result2;
}

// Address range: 0x18028ad10 - 0x18028ad18
int64_t function_18028ad10(void) {
    // 0x18028ad10
    return g1350;
}

// Address range: 0x18028ad80 - 0x18028b113
int64_t function_18028ad80(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    char * v1 = (char *)a2; // 0x18028ada8
    *v1 = 0;
    int64_t v2 = (int32_t)a6 >= 0 ? a6 & 0xffffffff : 0; // 0x18028adb1
    int64_t v3 = 0x100000000 * v2; // 0x18028adba
    if ((v3 + 0xb00000000) / 0x100000000 >= a3) {
        // 0x18028adc5
        *(char *)(a10 + 48) = 1;
        *(int32_t *)(a10 + 44) = 34;
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)a10);
        // 0x18028b0f5
        return 34;
    }
    int64_t v4 = 0x100000000 * a9 / 0x100000000;
    if ((a1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        // 0x18028ae10
        int64_t v5; // 0x18028ad80
        int64_t v6; // 0x18028ad80
        int64_t v7; // 0x18028ad80
        int64_t result = function_18028b114(a1, a2, a3, a4, a5, v3 / 0x100000000, 0, 0x100000000 * a8 / 0x100000000, v4, a10, v5, v6, v7); // 0x18028ae4f
        if ((int32_t)result != 0) {
            // 0x18028ae58
            *v1 = 0;
            // 0x18028b0f5
            return result;
        }
        int64_t v8 = function_18026d8fc(v1, 101); // 0x18028ae68
        if (v8 != 0) {
            // 0x18028ae76
            *(char *)v8 = (32 * (char)a7 ^ 32) + 80;
            *(char *)(v8 + 3) = 0;
        }
        // 0x18028b0f5
        return 0;
    }
    int64_t v9 = a2 + 1; // 0x18028aea3
    int64_t v10 = a7 & 255 ^ 1; // 0x18028aeaf
    *v1 = 48;
    int64_t v11 = a2 + 2; // 0x18028aef6
    char * v12; // 0x18028ad80
    char * v13; // 0x18028ad80
    int64_t v14; // 0x18028ad80
    int64_t v15; // 0x18028ad80
    int64_t v16; // 0x18028ad80
    int64_t v17; // 0x18028ad80
    int64_t v18; // 0x18028ad80
    if (v2 != 0) {
        // 0x18028af04
        if (*(char *)(a10 + 40) == 0) {
            // 0x18028af12
            function_1802766e0(a10);
        }
        int64_t v19 = *(int64_t *)(*(int64_t *)(a10 + 24) + 248); // 0x18028af2f
        char * v20 = (char *)v9; // 0x18028af3b
        *v20 = *(char *)*(int64_t *)v19;
        v12 = v20;
        v13 = v20;
        v15 = v19;
        v17 = a2;
        v18 = v11;
        v16 = v2;
        v14 = 0xfffffffffffff;
        if ((v19 & 0xfffffffffffff) == 0) {
            goto lab_0x18028afd2;
        } else {
            goto lab_0x18028af56;
        }
    } else {
        char * v21 = (char *)v9; // 0x18028af3b
        *v21 = 0;
        v12 = v21;
        goto lab_0x18028af56;
    }
  lab_0x18028afd2:;
    char * v22 = v13; // 0x18028afd4
    int64_t v23 = v15; // 0x18028afd4
    int64_t v24 = v18; // 0x18028afd4
    if ((int32_t)v16 >= 1) {
        int64_t v25 = v16 & 0xffffffff; // 0x18028afd6
        function_18029db80(v18, v17 & -256 | 48, v25, v14);
        v22 = v13;
        v23 = v18;
        v24 = v25 + v18;
    }
    goto lab_0x18028aff8;
  lab_0x18028af56:;
    int64_t v39 = 32 * v10 | 7; // 0x18028aed3
    int64_t v40 = 48; // 0x18028ad80
    uint64_t v41 = 0xf000000000000;
    int64_t v42 = v2;
    int64_t v43 = v11;
    int64_t v44 = v40 & 0xffff; // 0x18028af56
    while ((int32_t)v42 >= 1) {
        int64_t v45 = ((v41 & v44) >> (v40 & 63)) + 48; // 0x18028af69
        int64_t v46 = (int16_t)v45 < 58 ? 0 : v39;
        *(char *)v43 = (char)(v46 + v45);
        int64_t v47 = v42 + 0xffffffff & 0xffffffff; // 0x18028af78
        int64_t v48 = v43 + 1; // 0x18028af7a
        int16_t v49 = (int16_t)v40 - 4; // 0x18028af81
        int64_t v50 = v40 & -0x10000 | (int64_t)v49; // 0x18028af81
        v40 = v50;
        v13 = v12;
        v15 = v44;
        v17 = v50;
        v18 = v48;
        v16 = v47;
        v14 = 0xfffffffffffff;
        if (v49 < 0) {
            goto lab_0x18028afd2;
        }
        v41 /= 16;
        v42 = v47;
        v43 = v48;
        v44 = v40 & 0xffff;
    }
    int64_t v51 = function_18028b778(a1, v41, v44, (int32_t)v4); // 0x18028af9b
    v22 = v12;
    v23 = a1;
    v24 = v43;
    if ((char)v51 == 0) {
        goto lab_0x18028aff8;
    } else {
        int64_t v52 = v43 - 1;
        char * v53 = (char *)v52; // 0x18028afab
        unsigned char v54 = *v53; // 0x18028afab
        int64_t v55 = v54; // 0x18028afab
        int64_t v56 = v41 & 0xfffffffffffff00; // 0x18028afab
        int64_t v57 = v56 | v55; // 0x18028afab
        int64_t v58 = v43; // 0x18028afb2
        int64_t v59 = v52; // 0x18028afb2
        char * v60 = v53; // 0x18028afb2
        char v61 = v54; // 0x18028afb2
        int64_t v62 = v55; // 0x18028afb2
        int64_t v63 = v56; // 0x18028afb2
        int64_t v64 = v57; // 0x18028afb2
        if ((v54 - 70 & -33) == 0) {
            *v53 = 48;
            int64_t v65 = v52 - 1;
            char * v66 = (char *)v65;
            unsigned char v67 = *v66; // 0x18028afab
            int64_t v68 = v67; // 0x18028afab
            int64_t v69 = v57 & -256; // 0x18028afab
            int64_t v70 = v69 | v68; // 0x18028afab
            v58 = v52;
            v59 = v65;
            v60 = v66;
            v61 = v67;
            v62 = v68;
            v63 = v69;
            v64 = v70;
            while ((v67 - 70 & -33) == 0) {
                int64_t v71 = v65;
                *v66 = 48;
                v65 = v71 - 1;
                v66 = (char *)v65;
                v67 = *v66;
                v68 = v67;
                v69 = v70 & -256;
                v70 = v69 | v68;
                v58 = v71;
                v59 = v65;
                v60 = v66;
                v61 = v67;
                v62 = v68;
                v63 = v69;
                v64 = v70;
            }
        }
        int64_t v72 = v4 & 0xffffffff; // 0x18028af89
        if (v59 == v9) {
            char * v73 = (char *)(v58 - 2); // 0x18028afcf
            *v73 = *v73 + 1;
            v13 = v12;
            v15 = v9;
            v17 = v64;
            v18 = v43;
            v16 = v42;
            v14 = v72;
        } else {
            int64_t v74 = v64; // 0x18028afc4
            if (v61 == 57) {
                // 0x18028afc6
                v74 = v62 + v39 & 255 | v63;
            }
            // 0x18028afc9
            *v60 = (char)v74 + 1;
            v13 = v12;
            v15 = v59;
            v17 = v74 & -256;
            v18 = v43;
            v16 = v42;
            v14 = v72;
        }
        goto lab_0x18028afd2;
    }
  lab_0x18028aff8:;
    int64_t v26 = *v22 == 0 ? v9 : v24; // 0x18028affc
    *(char *)v26 = 32 * (char)v10 + 80;
    int64_t v27 = v26 + 2; // 0x18028b00b
    int64_t v28 = v23 / 0x10000000000000 & 2047; // 0x18028b016
    int64_t v29 = v28 - 1022; // 0x18028b01d
    int64_t v30 = v29 >= 0 ? v29 : 1022 - v28;
    *(char *)(v26 + 1) = v29 < 0 ? 45 : 43;
    char * v31 = (char *)v27;
    *v31 = 48;
    char * v32; // 0x18028ad80
    int64_t v33; // 0x18028ad80
    int64_t v34; // 0x18028ad80
    if (v30 < 1000) {
        // 0x18028b07f
        v32 = v31;
        v33 = v27;
        v34 = v27;
        if (v30 < 100) {
            goto lab_0x18028b0b8;
        } else {
            goto lab_0x18028b085;
        }
    } else {
        int64_t v35 = v26 + 3; // 0x18028b055
        *v31 = 48;
        v32 = (char *)v35;
        v33 = v35;
        goto lab_0x18028b085;
    }
  lab_0x18028b0b8:;
    int64_t v36 = v34; // 0x18028b0bc
    int64_t v37 = v34; // 0x18028b0bc
    if (v30 < 10) {
        goto lab_0x18028b0e9;
    } else {
        goto lab_0x18028b0be;
    }
  lab_0x18028b085:
    // 0x18028b085
    *v32 = 48;
    int64_t v38 = v33 + 1; // 0x18028b0a9
    v34 = v38;
    v36 = v38;
    if (v38 != v27) {
        goto lab_0x18028b0be;
    } else {
        goto lab_0x18028b0b8;
    }
  lab_0x18028b0e9:
    // 0x18028b0e9
    *(char *)v37 = (char)v30 + 48;
    *(char *)(v37 + 1) = 0;
    // 0x18028b0f5
    return 0;
  lab_0x18028b0be:
    // 0x18028b0be
    *(char *)v36 = 48;
    v37 = v36 + 1;
    goto lab_0x18028b0e9;
}

// Address range: 0x18028b114 - 0x18028b218
int64_t function_18028b114(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    // 0x18028b114
    int128_t v1; // 0x18028b114
    int128_t v2 = __asm_xorps(v1, v1); // 0x18028b145
    int128_t v3; // bp-24, 0x18028b114
    int64_t v4 = &v3; // 0x18028b156
    int64_t v5 = a6 + 1 & 0xffffffff; // 0x18028b15a
    __asm_movups(0, v2);
    int64_t v6 = function_18029891c(a1, v5, 1, v4, (int64_t)&g1381, (int64_t)&g1381); // 0x18028b162
    int32_t v7 = a6; // 0x18028b19c
    int64_t v8 = a3 == -1 ? -1 : (int64_t)(v7 >= 0 == (v7 != 0)) + a3 + (int64_t)((int32_t)v3 == 45); // 0x18028b1ab
    int64_t v9 = function_18029880c((int64_t)(v7 >= 0 == (v7 != 0)) + a2 + (int64_t)((int32_t)v3 == 45), v8, v5, (int64_t *)&v3, 0x100000000 * v6 / 0x100000000, 0x100000000 * a9 / 0x100000000, a10); // 0x18028b1ba
    int64_t result; // 0x18028b114
    if ((int32_t)v9 == 0) {
        int64_t v10 = function_18028b218(a2, a3, a6 & 0xffffffff, v4 & -256 | a7 & 255, 0x100000000 * a8 / 0x100000000, (int64_t *)&v3, 0, a10); // 0x18028b1f8
        result = v10;
    } else {
        // 0x18028b1c3
        *(char *)a2 = 0;
        result = v9;
    }
    // 0x18028b1fd
    return result;
}

// Address range: 0x18028b218 - 0x18028b3fc
int64_t function_18028b218(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t * a6, char a7, int64_t a8) {
    int64_t v1 = 0x100000000 * a3;
    int32_t v2 = a3; // 0x18028b23a
    if ((v2 >= 0 == (v2 != 0) ? (v1 + 0x900000000) / 0x100000000 : 9) >= a2) {
        // 0x18028b253
        *(char *)(a8 + 48) = 1;
        *(int32_t *)(a8 + 44) = 34;
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)a8);
        // 0x18028b281
        return 34;
    }
    if (a7 != 0) {
        int64_t v3 = (int64_t)(*(int32_t *)a6 == 45) + a1; // 0x18028b2b7
        if (v2 >= 1) {
            int64_t v4 = -1;
            int64_t v5 = v4 + 1; // 0x18028b2c3
            while (*(char *)(v5 + v3) != 0) {
                // 0x18028b2c3
                v4 = v5;
                v5 = v4 + 1;
            }
            // 0x18028b2cd
            function_18029d4e0(v3 + 1, v3, v4 + 2, a4);
        }
    }
    int64_t v6 = a1; // 0x18028b2df
    if (*(int32_t *)a6 == 45) {
        // 0x18028b2e1
        *(char *)a1 = 45;
        v6 = a1 + 1;
    }
    int64_t v7 = v1 / 0x100000000; // 0x18028b237
    int64_t v8 = v6; // 0x18028b2ea
    if ((int32_t)v7 >= 1) {
        // 0x18028b2ec
        v8 = v6 + 1;
        char * v9 = (char *)v8; // 0x18028b2ec
        *(char *)v6 = *v9;
        if (*(char *)(a8 + 40) == 0) {
            // 0x18028b303
            function_1802766e0(a8);
        }
        int64_t v10 = *(int64_t *)(*(int64_t *)(a8 + 24) + 248); // 0x18028b30f
        *v9 = *(char *)*(int64_t *)v10;
    }
    int64_t v11 = v7 + (int64_t)(a7 ^ 1) + v8; // 0x18028b333
    int64_t v12 = a2 == -1 ? -1 : a2 + a1 - v11; // 0x18028b344
    if ((int32_t)function_180287a40(v11, v12, (int64_t)"e+000") != 0) {
        // 0x18028b3e3
        function_180271834(0, 0, 0, 0, 0);
        __asm_int3(0, 0);
        __asm_int3(0, 0);
        __asm_int3(0, 0);
        return __asm_int3(0, 0);
    }
    if ((char)a4 != 0) {
        // 0x18028b35e
        *(char *)v11 = 69;
    }
    int64_t v13 = (int64_t)a6;
    int64_t v14 = v11 + 2; // 0x18028b355
    if (*(char *)*(int64_t *)(v13 + 8) != 48) {
        int32_t v15 = *(int32_t *)(v13 + 4); // 0x18028b36a
        int32_t v16 = v15 - 1; // 0x18028b36e
        int32_t v17 = v16; // 0x18028b372
        if (v16 < 0) {
            // 0x18028b374
            *(char *)(v11 + 1) = 45;
            v17 = 1 - v15;
        }
        int32_t v18 = v17; // 0x18028b37f
        if (v17 >= 100) {
            int32_t v19 = (int32_t)(0x51eb851f * (int64_t)v17 / 0x100000000) / 32; // 0x18028b389
            int32_t v20 = (v19 >> 31) + v19; // 0x18028b391
            char * v21 = (char *)v14; // 0x18028b393
            *v21 = *v21 + (char)v20;
            v18 = -100 * v20 + v17;
        }
        int32_t v22 = v18; // 0x18028b3a0
        if (v18 >= 10) {
            int32_t v23 = (int32_t)(0x66666667 * (int64_t)v18 / 0x100000000) / 4; // 0x18028b3aa
            int32_t v24 = (v23 >> 31) + v23; // 0x18028b3b2
            char * v25 = (char *)(v11 + 3); // 0x18028b3b4
            *v25 = *v25 + (char)v24;
            v22 = -10 * v24 + v18;
        }
        char * v26 = (char *)(v11 + 4); // 0x18028b3bd
        *v26 = *v26 + (char)v22;
    }
    // 0x18028b3c1
    if ((int32_t)a5 != 2) {
        // 0x18028b281
        return 0;
    }
    // 0x18028b3c8
    if (*(char *)v14 == 48) {
        // 0x18028b3cd
        function_18029d4e0(v14, v11 + 3, 3, a4);
    }
    // 0x18028b281
    return 0;
}

// Address range: 0x18028b3fc - 0x18028b4d1
int64_t function_18028b3fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x18028b3fc
    int128_t v1; // 0x18028b3fc
    __asm_movups(0, __asm_xorps(v1, v1));
    int128_t v2; // bp-24, 0x18028b3fc
    int64_t v3 = function_18029891c(a1, a6 & 0xffffffff, 0, (int64_t)&v2, (int64_t)&g1381, (int64_t)&g1381); // 0x18028b441
    int64_t v4 = (int32_t)v2 == 45; // 0x18028b468
    int64_t v5 = a3 == -1 ? -1 : a3 - v4; // 0x18028b488
    int32_t v6; // 0x18028b3fc
    int64_t v7 = function_18029880c(v4 + a2, v5, (int64_t)(v6 + (int32_t)a6), (int64_t *)&v2, 0x100000000 * v3 / 0x100000000, 0x100000000 * a7 / 0x100000000, a8); // 0x18028b491
    int64_t result; // 0x18028b3fc
    if ((int32_t)v7 == 0) {
        // 0x18028b49f
        result = function_18028b4d4(a2);
    } else {
        // 0x18028b49a
        *(char *)a2 = 0;
        result = v7;
    }
    // 0x18028b4bc
    return result;
}

// Address range: 0x18028b4d4 - 0x18028b621
int64_t function_18028b4d4(int64_t a1) {
    // 0x18028b4d4
    int64_t v1; // 0x18028b4d4
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x18028b4f4
    int32_t v3 = *v2; // 0x18028b4f4
    int32_t v4 = v1;
    int32_t v5 = v4; // 0x18028b4fe
    int64_t v6; // 0x18028b4d4
    int64_t v7; // 0x18028b4d4
    char v8; // 0x18028b4d4
    if (v8 != 0) {
        // 0x18028b500
        v5 = v4;
        if (v3 - 1 == (int32_t)v7) {
            // 0x18028b508
            *(int16_t *)(a1 - 1 + (int64_t)(v4 == 45) + (int64_t)v3) = 48;
            v5 = *(int32_t *)&v6;
        }
    }
    int64_t v9 = a1; // 0x18028b51f
    if (v5 == 45) {
        // 0x18028b521
        *(char *)a1 = 45;
        v9 = a1 + 1;
    }
    int64_t v10 = v9;
    int32_t v11 = *(int32_t *)(v6 + 4); // 0x18028b527
    int64_t v12 = v11; // 0x18028b531
    if (v11 >= 0 == (v11 != 0)) {
        goto lab_0x18028b576;
    } else {
        if (v11 != 0) {
            goto lab_0x18028b552;
        } else {
            // 0x18028b535
            if (*(char *)*(int64_t *)(v6 + 8) == 48 == (v8 != 0)) {
                // 0x18028b56b
                *(char *)v10 = 48;
                v12 = 1;
                goto lab_0x18028b576;
            } else {
                goto lab_0x18028b552;
            }
        }
    }
  lab_0x18028b576:;
    int64_t v13 = v12 + v10;
    if ((int32_t)v7 < 1) {
        // 0x18028b606
        return 0;
    }
    int64_t v14 = -1;
    int64_t v15 = v14 + 1; // 0x18028b585
    while (*(char *)(v15 + v13) != 0) {
        // 0x18028b585
        v14 = v15;
        v15 = v14 + 1;
    }
    int64_t v16 = v13 + 1; // 0x18028b57e
    function_18029d4e0(v16, v13, v14 + 2, v6);
    int64_t v17; // 0x18028b4d4
    if (*(char *)(v17 + 40) == 0) {
        // 0x18028b5a9
        function_1802766e0(v17);
    }
    int64_t v18 = *(int64_t *)(*(int64_t *)(v17 + 24) + 248); // 0x18028b5b5
    *(char *)v13 = *(char *)*(int64_t *)v18;
    int32_t v19 = *v2; // 0x18028b5c3
    if (v19 >= 0) {
        // 0x18028b606
        return 0;
    }
    uint64_t v20 = (int64_t)-v19; // 0x18028b5ca
    int64_t v21 = -1;
    int64_t v22 = v21 + 1; // 0x18028b5dc
    while (*(char *)(v22 + v16) != 0) {
        // 0x18028b5dc
        v21 = v22;
        v22 = v21 + 1;
    }
    int64_t v23 = 0x100000000 * (v8 != 0 | (v7 & 0xffffffff) > v20 ? v20 : v7) / 0x100000000; // 0x18028b5d9
    function_18029d4e0(v23 + v16, v16, v21 + 2, v6);
    function_18029db80(v16, 48, v23, v6);
    // 0x18028b606
    return 0;
  lab_0x18028b552:;
    int64_t v24 = -1;
    int64_t v25 = v24 + 1; // 0x18028b552
    while (*(char *)(v25 + v10) != 0) {
        // 0x18028b552
        v24 = v25;
        v25 = v24 + 1;
    }
    // 0x18028b55c
    function_18029d4e0(v10 + 1, v10, v24 + 2, v6);
    // 0x18028b56b
    *(char *)v10 = 48;
    v12 = 1;
    goto lab_0x18028b576;
}

// Address range: 0x18028b624 - 0x18028b776
int64_t function_18028b624(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = a6 & 0xffffffff; // 0x18028b64e
    int128_t v2; // 0x18028b624
    int128_t v3 = __asm_xorps(v2, v2); // 0x18028b655
    int128_t v4; // bp-24, 0x18028b624
    int64_t v5 = &v4; // 0x18028b663
    __asm_movups(0, v3);
    int64_t v6 = function_18029891c(a1, v1, 0, v5, (int64_t)&g1381, (int64_t)&g1381); // 0x18028b66c
    int64_t v7 = (int32_t)v4 == 45; // 0x18028b693
    int64_t v8 = a3 == -1 ? -1 : a3 - v7; // 0x18028b6bb
    int64_t result = function_18029880c(v7 + a2, v8, v1, (int64_t *)&v4, 0x100000000 * v6 / 0x100000000, 0x100000000 * a9 / 0x100000000, a10); // 0x18028b6c7
    if ((int32_t)result != 0) {
        // 0x18028b6d0
        *(char *)a2 = 0;
        // 0x18028b75b
        return result;
    }
    int64_t v9 = 0x100000000 * a6 / 0x100000000;
    int32_t v10; // 0x18028b624
    int32_t v11 = v10 - 1; // 0x18028b6a3
    int64_t result2; // 0x18028b624
    if (v11 > -5 == v11 < (int32_t)v9) {
        // 0x18028b6fd
        result2 = function_18028b4d4(a2);
    } else {
        int64_t v12 = function_18028b218(a2, a3, v9 & 0xffffffff, v5 & -256 | a7 & 255, 0x100000000 * a8 / 0x100000000, (int64_t *)&v4, 1, a10); // 0x18028b756
        result2 = v12;
    }
    // 0x18028b75b
    return result2;
}

// Address range: 0x18028b778 - 0x18028b88e
int64_t function_18028b778(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = 0x1000000000000 * a3 / 0x1000000000000; // 0x18028b7a5
    uint64_t v2 = v1 & 63; // 0x18028b7b5
    int64_t v3 = (a1 & 0xfffffffffffff & a2) >> v2;
    if (a4 == 0) {
        // 0x18028b86f
        int64_t v4; // 0x18028b778
        return (int64_t)&v4 & -256 | (int64_t)((int16_t)v3 >= 8);
    }
    uint64_t v5 = v1 & 0xffffffff; // 0x18028b7af
    int64_t v6 = function_180291150(v5, a2); // 0x18028b7cc
    int32_t v7 = v6; // 0x18028b7d1
    int64_t v8; // 0x18028b778
    if (v7 != 0) {
        if (v7 != 512) {
            // 0x18028b85a
            v8 = v6;
            if (v7 != 256) {
                // 0x18028b86f
                return v6 & -256;
            }
        } else {
            // 0x18028b84e
            v8 = v6;
            if ((int16_t)v3 != 0) {
                // 0x18028b86f
                return 1 | v6 & -256;
            }
        }
    } else {
        int64_t v9 = (v5 & a2) >> v2;
        uint16_t v10 = (int16_t)v9; // 0x18028b7e7
        if (v10 >= 9) {
            // 0x18028b86f
            return 1 | v9 & -256;
        }
        // 0x18028b7f4
        v8 = v9;
        if (v10 == 8) {
            int64_t v11 = (v2 == 0 ? 0 : -1 << v2 ^ 0xffffffff) & v5; // 0x18028b808
            if (v11 != 0) {
                // 0x18028b86f
                return 1 | v11 & -256;
            }
            int64_t v12 = 0x7ff0000000000000; // 0x18028b814
            int64_t v13 = 0; // 0x18028b814
            if ((int32_t)v1 != 48) {
                // 0x18028b816
                v12 = 0xffffffffffff;
                v13 = (v5 / 16 & a2) >> v2 & 1;
            }
            // 0x18028b86f
            return v13 | v12 & -256;
        }
    }
    // 0x18028b86f
    return v8 & -256;
}

// Address range: 0x18028b890 - 0x18028bb78
int64_t function_18028b890(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int32_t a9, int64_t a10) {
    // 0x18028b890
    if (a2 == 0) {
        int64_t v1 = a2 + 22; // 0x18028b8b5
        *(char *)(a10 + 48) = 1;
        *(int32_t *)(a10 + 44) = (int32_t)v1;
        // 0x18028b8c4
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)a10);
        // 0x18028bb4f
        return v1 & 0xffffffff;
    }
    if (a3 == 0 || a4 == 0 || a5 == 0) {
        // 0x18028b8e5
        *(char *)(a10 + 48) = 1;
        *(int32_t *)(a10 + 44) = 22;
        // 0x18028b8c4
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)a10);
        // 0x18028bb4f
        return 22;
    }
    int64_t v2 = (int64_t)a1;
    int64_t v3 = 0x100000000 * a7;
    int32_t v4 = a6; // 0x18028b919
    int64_t v5 = v4 == 65 | v4 < 72;
    int64_t v6 = a8 & -224; // 0x18028ba28
    int64_t v7 = a8 / 16 & 1 | 2; // 0x18028ba32
    int32_t v8 = -v6 & 224 | a8 & 0xffffff00; // 0x18028ba37
    int32_t v9 = v8 - (v8 | (int32_t)((char)v6 != 0)) & a9; // 0x18028ba39
    int64_t result; // 0x18028b890
    switch (v4) {
        case 65: {
        }
        case 97: {
            // 0x18028bb17
            result = function_18028ad80(v2, a2, a3, a4, a5, v3 / 0x100000000, v5, v7, (int64_t)v9, a10);
            // break -> 0x18028bb4f
            return 0;
        }
        case 69: {
        }
        case 101: {
            // 0x18028badd
            int64_t v10; // 0x18028b890
            int64_t v11 = function_18028b114(v2, a2, a3, a4, a5, v3 / 0x100000000, v5, v7, (int64_t)v9, a10, v10, (int64_t)&g1381, (int64_t)&g1381); // 0x18028bb10
            result = v11;
            // break -> 0x18028bb4f
            return 0;
        }
        case 70: {
        }
        case 102: {
            // 0x18028baac
            result = function_18028b3fc(v2, a2, a3, a4, a5, v3 / 0x100000000, 0x100000000000000 * (int64_t)v9 / 0x100000000000000, 0x100000000 * a10 / 0x100000000);
            // break -> 0x18028bb4f
            return 0;
        }
        default: {
            // 0x18028ba6f
            result = function_18028b624(v2, a2, a3, a4, a5, v3 / 0x100000000, v5, v7, (int64_t)v9, a10);
            // break -> 0x18028bb4f
            return 0;
        }
    }
    // 0x18028bb4f
    return result;
}

// Address range: 0x18028bb78 - 0x18028bd28
int64_t function_18028bb78(int16_t * a1, int64_t * a2, uint64_t a3, int16_t a4, int64_t a5) {
    int16_t v1 = a4; // bp+32, 0x18028bb82
    if (a2 == NULL && a3 != 0) {
        // 0x18028bba5
        if (a1 != NULL) {
            // 0x18028bbae
            *(int32_t *)a1 = 0;
        }
        // 0x18028bc66
        return 0;
    }
    if (a1 != NULL) {
        // 0x18028bbba
        *(int32_t *)a1 = -1;
    }
    int64_t result2 = 22; // 0x18028bbcc
    if (a3 < 0x80000000) {
        int64_t v2 = a4; // 0x18028bbdb
        if (*(char *)(a5 + 40) == 0) {
            // 0x18028bbdd
            function_1802766e0(a5);
            v2 = v1;
        }
        int64_t v3 = (int64_t)a2;
        int64_t v4 = *(int64_t *)(a5 + 24); // 0x18028bbeb
        uint32_t v5 = *(int32_t *)(v4 + 12); // 0x18028bbef
        int32_t v6; // bp+16, 0x18028bb78
        if (v5 == 0xfde9) {
            // 0x18028bbfa
            v6 = 0;
            int32_t v7 = function_180299b9c(v3, v2 & 0xffff, (int64_t *)&v6, a5, 0);
            if (a1 != NULL) {
                // 0x18028bc18
                *(int32_t *)a1 = v7;
            }
            // 0x18028bc1a
            if (v7 < 5) {
                // 0x18028bc66
                return 0;
            }
            int64_t result = 0; // 0x18028bc26
            if (*(char *)(a5 + 48) != 0) {
                // 0x18028bc28
                result = (int64_t)*(int32_t *)(a5 + 44);
            }
            // 0x18028bc66
            return result;
        }
        // 0x18028bc2f
        if (*(int64_t *)(v4 + 312) != 0) {
            // 0x18028bc93
            v6 = 0;
            int64_t v8 = function_18028d8d8((int64_t)v5, 0, (int64_t)&v1, 1, v3, 0x100000000 * a3 / 0x100000000); // 0x18028bcbc
            int32_t v9 = v8; // 0x18028bcc1
            if (v9 != 0) {
                // 0x18028bcc5
                if (v6 != 0) {
                    // 0x18028bc5a
                    *(int32_t *)(a5 + 44) = 42;
                    *(char *)(a5 + 48) = 1;
                    // 0x18028bc66
                    return 42;
                }
                // 0x18028bccb
                if (a1 != NULL) {
                    // 0x18028bcd0
                    *(int32_t *)a1 = v9;
                }
                // 0x18028bc66
                return 0;
            }
            // 0x18028bcd6
            if (GetLastError() != 122) {
                // 0x18028bc5a
                *(int32_t *)(a5 + 44) = 42;
                *(char *)(a5 + 48) = 1;
                // 0x18028bc66
                return 42;
            }
            // 0x18028bce5
            result2 = 34;
            if (a2 != NULL && a3 != 0) {
                // 0x18028bcef
                function_18029db80(v3, 0, a3, 1);
                result2 = 34;
            }
            goto lab_0x18028bd01;
        } else {
            if ((int16_t)v2 >= 256) {
                if (a2 != NULL && a3 != 0) {
                    // 0x18028bc4d
                    function_18029db80(v3, 0, a3, v2);
                }
                // 0x18028bc5a
                *(int32_t *)(a5 + 44) = 42;
                *(char *)(a5 + 48) = 1;
                // 0x18028bc66
                return 42;
            }
            if (a2 == NULL) {
                goto lab_0x18028bc86;
            } else {
                // 0x18028bc7e
                result2 = 34;
                if (a3 == 0) {
                    goto lab_0x18028bd01;
                } else {
                    // 0x18028bc83
                    *(char *)a2 = (char)v2;
                    goto lab_0x18028bc86;
                }
            }
        }
    } else {
        goto lab_0x18028bd01;
    }
  lab_0x18028bd01:
    // 0x18028bd01
    *(int32_t *)(a5 + 44) = (int32_t)result2;
    *(char *)(a5 + 48) = 1;
    function_18027175c(0, 0, 0, 0, 0, (int64_t *)(a5 & 0xffffffff));
    // 0x18028bc66
    return result2;
  lab_0x18028bc86:
    // 0x18028bc86
    if (a1 != NULL) {
        // 0x18028bc8b
        *(int32_t *)a1 = 1;
    }
    // 0x18028bc66
    return 0;
}

// Address range: 0x18028bd28 - 0x18028bea0
int64_t function_18028bd28(int64_t a1, int64_t a2, uint64_t a3, int64_t * a4) {
    // 0x18028bd28
    if (a2 == 0 || a3 == 0) {
        // 0x18028be7c
        g1302 = 0;
        // 0x18028be85
        return 0;
    }
    int64_t v1; // 0x18028bd28
    if ((char)v1 == 0) {
        // 0x18028bd67
        if (a1 != 0) {
            // 0x18028bd70
            *(int16_t *)a1 = 0;
        }
        // 0x18028be85
        return 0;
    }
    int64_t v2 = (int64_t)a4;
    if (*(char *)(v2 + 40) == 0) {
        // 0x18028bd7f
        function_1802766e0(v2);
    }
    int64_t * v3 = (int64_t *)(v2 + 24); // 0x18028bd87
    int64_t v4 = *v3; // 0x18028bd87
    uint32_t v5 = *(int32_t *)(v4 + 12); // 0x18028bd8b
    if (v5 == 0xfde9) {
        int64_t v6 = function_18028c1e0(a1); // 0x18028bdad
        // 0x18028be85
        return (int32_t)v6 < 0 ? 0xffffffff : v6 & 0xffffffff;
    }
    // 0x18028bdbf
    if (*(int64_t *)(v4 + 312) == 0) {
        // 0x18028bdc8
        if (a1 != 0) {
            // 0x18028bdd1
            *(int16_t *)a1 = (int16_t)v4 & 255;
        }
        // 0x18028be85
        return 1;
    }
    int64_t v7 = v5; // 0x18028bd8b
    if (*(int16_t *)(*(int64_t *)v4 + (2 * v4 & 510)) >= 0) {
        // 0x18028be4a
        if ((int32_t)function_18028d848(v7, 9) != 0) {
            // 0x18028be85
            return 1;
        }
        // 0x18028be3a
        *(char *)(v2 + 48) = 1;
        *(int32_t *)(v2 + 44) = 42;
        // 0x18028be85
        return 0xffffffff;
    }
    int32_t * v8 = (int32_t *)(v4 + 8);
    uint32_t v9 = *v8; // 0x18028bde9
    int32_t * v10 = v8; // 0x18028bdf1
    if (v9 >= 2 && (int64_t)v9 <= a3) {
        int64_t v11 = function_18028d848(v7, 9); // 0x18028be15
        v10 = (int32_t *)(*v3 + 8);
        if ((int32_t)v11 != 0) {
            // 0x18028be85
            return (int64_t)*v10;
        }
    }
    int32_t result = *v10; // 0x18028be22
    if ((int64_t)result > a3) {
        // 0x18028be3a
        *(char *)(v2 + 48) = 1;
        *(int32_t *)(v2 + 44) = 42;
        // 0x18028be85
        return 0xffffffff;
    }
    // 0x18028be2b
    if (*(char *)(a2 + 1) != 0) {
        // 0x18028be85
        return result;
    }
    // 0x18028be3a
    *(char *)(v2 + 48) = 1;
    *(int32_t *)(v2 + 44) = 42;
    // 0x18028be85
    return 0xffffffff;
}

// Address range: 0x18028bea0 - 0x18028bf43
int64_t function_18028bea0(int64_t * a1, char * a2, uint32_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0; // bp-72, 0x18028beb2
    int128_t v2; // 0x18028bea0
    int64_t v3; // 0x18028beef
    if (a4 != 0) {
        // 0x18028bee2
        int64_t v4; // 0x18028bea0
        __asm_movdqu(v2, __asm_movups_16(*(int128_t *)&v4));
        // 0x18028beeb
        v3 = function_18028bd28((int64_t)a1, (int64_t)a2, (int64_t)a3, &v1);
        return v3 & 0xffffffff;
    }
    // 0x18028bed2
    if (g1298 != 0) {
        // 0x18028beeb
        v3 = function_18028bd28((int64_t)a1, (int64_t)a2, (int64_t)a3, &v1);
        return v3 & 0xffffffff;
    }
    // 0x18028bee2
    __asm_movdqu(v2, __asm_movups_16(g755));
    // 0x18028beeb
    v3 = function_18028bd28((int64_t)a1, (int64_t)a2, (int64_t)a3, &v1);
    return v3 & 0xffffffff;
}

// Address range: 0x18028bf44 - 0x18028bf7c
int64_t function_18028bf44(int64_t a1) {
    // 0x18028bf44
    int64_t v1; // 0x18028bf44
    unsigned char v2 = (char)v1;
    if (v2 >= 0) {
        // 0x18028bf4c
        return v2 != 0;
    }
    // 0x18028bf50
    if ((v1 & 224) == 192) {
        // 0x18028bf58
        return 2;
    }
    // 0x18028bf5e
    if ((v1 & 240) != 224) {
        // 0x18028bf6c
        return (v1 & 248) == 240 ? 4 : 0xffffffff;
    }
    // 0x18028bf58
    return 3;
}

// Address range: 0x18028bf7c - 0x18028c139
int64_t function_18028bf7c(int32_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = a2 != 0 ? a3 : 1; // 0x18028bfc8
    if (v1 == 0) {
        // 0x18028c11d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = a4 != 0 ? a4 : (int64_t)&g1303; // 0x18028bfbc
    int64_t v3 = a2 != 0 ? a2 : (int64_t)&g56; // 0x18028bfcc
    int64_t v4 = a2 == 0 ? 0 : (int64_t)a1; // 0x18028bfd6
    int64_t v5 = v2 + 6; // 0x18028bfea
    int16_t * v6 = (int16_t *)v5; // 0x18028bfea
    int64_t v7; // 0x18028bf7c
    int64_t v8; // 0x18028bf7c
    int64_t v9; // 0x18028bf7c
    int64_t v10; // 0x18028bf7c
    if (*v6 != 0) {
        unsigned char v11 = *(char *)(v2 + 4); // 0x18028c040
        unsigned char v12 = *(char *)v5; // 0x18028c046
        v10 = (int64_t)*(int32_t *)v2;
        v9 = v3;
        v7 = v11;
        v8 = v12;
        if (v11 > 4 || v12 == 0 || v12 >= v11) {
            // 0x18028c112
            function_180299c48(v2, a5);
            // 0x18028c11d
            return function_18026ad50((int64_t)g731);
        }
    } else {
        int64_t v13 = 0x100000000 * function_18028bf44(v3) / 0x100000000; // 0x18028bff9
        unsigned char v14 = *(char *)v3; // 0x18028bffc
        uint32_t v15 = (int32_t)v13; // 0x18028c002
        if (v15 < 2) {
            if (v4 != 0) {
                // 0x18028c035
                *(int32_t *)v4 = (int32_t)v14;
            }
            // 0x18028c11d
            return function_18026ad50((int64_t)g731);
        }
        if (v15 >= 5) {
            // 0x18028c112
            function_180299c48(v2, a5);
            // 0x18028c11d
            return function_18026ad50((int64_t)g731);
        }
        // 0x18028c015
        v10 = (int64_t)(1 << (7 - v15 & 31)) + 255 & (int64_t)v14;
        v9 = v3 + 1;
        v7 = v13;
        v8 = v13 & 255;
    }
    uint64_t v16 = v8;
    uint64_t v17 = v16 >= v1 ? v1 : v16; // 0x18028c073
    int64_t v18 = v9; // 0x18028c0a0
    int64_t v19 = v10; // 0x18028c0a0
    int64_t v20 = v10; // 0x18028c0a0
    if (v9 - a2 < v17) {
        char v21 = *(char *)v18; // 0x18028c079
        while ((v21 & -64) == -128) {
            // 0x18028c08b
            v18++;
            v19 = 64 * v19 & 0xffffffc0 | (int64_t)(v21 & 63);
            v20 = v19;
            if (v18 - a2 >= v17) {
                goto lab_0x18028c0a2;
            }
            v21 = *(char *)v18;
        }
        // 0x18028c112
        function_180299c48(v2, a5);
        // 0x18028c11d
        return function_18026ad50((int64_t)g731);
    }
  lab_0x18028c0a2:
    // 0x18028c0a2
    if (v16 > v17) {
        // 0x18028c0a7
        *(int16_t *)(v2 + 4) = (int16_t)v7 & 255;
        *v6 = (int16_t)(v16 - v17) & 255;
        *(int32_t *)v2 = (int32_t)v20;
        // 0x18028c11d
        return function_18026ad50((int64_t)g731);
    }
    if ((v20 & 0xfffff800) == 0xd800) {
        // 0x18028c112
        function_180299c48(v2, a5);
        // 0x18028c11d
        return function_18026ad50((int64_t)g731);
    }
    uint32_t v22 = (int32_t)v20; // 0x18028c0ce
    if (v22 >= 0x110000) {
        // 0x18028c112
        function_180299c48(v2, a5);
        // 0x18028c11d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18028c0d6
    int64_t v23; // bp-120, 0x18028bf7c
    uint32_t v24 = *(int32_t *)((int64_t)&v23 + 24 + (4 * v7 & 1020)); // 0x18028c0f2
    if (v24 > v22) {
        // 0x18028c112
        function_180299c48(v2, a5);
        // 0x18028c11d
        return function_18026ad50((int64_t)g731);
    }
    if (v4 != 0) {
        // 0x18028c0fd
        *(int32_t *)v4 = v22;
    }
    // 0x18028c100
    function_180299c40(v22 == 0 ? 0 : v16, v2);
    // 0x18028c11d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18028c13c - 0x18028c1df
int64_t function_18028c13c(int64_t * a1, uint16_t a2, int16_t * a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = a5;
    int64_t v3 = a3 != NULL ? (int64_t)a3 : (int64_t)&g1304; // 0x18028c154
    int32_t * v4 = (int32_t *)v3; // 0x18028c15f
    int16_t v5 = a2 & -1024;
    int64_t v6; // 0x18028c13c
    if (*v4 != 0) {
        if (v5 != -0x2400) {
            // 0x18028c1d9
            return function_180299c48(v3, a4);
        }
        // 0x18028c1b0
        v2 = 0;
        int32_t v7 = *v4; // 0x18028c1c7
        int64_t v8 = function_180299b9c(v1, (int64_t)(v7 + (int32_t)(a2 & 0x23ff)), &v2, a4, v6); // 0x18028c1c9
        // 0x18028c1d9
        return function_180299c40(v8, v3);
    }
    if (v5 == -0x2400) {
        // 0x18028c1d9
        return function_180299c48(v3, a4);
    }
    if (v5 != -0x2800) {
        // 0x18028c198
        return function_180299b9c(v1, (int64_t)a2, (int64_t *)v3, a4, v6);
    }
    // 0x18028c182
    *v4 = (1024 * (int32_t)a2 & 0x9ffc00) + 0x10000;
    // 0x18028c1d9
    return 0;
}

// Address range: 0x18028c1e0 - 0x18028c227
int64_t function_18028c1e0(int64_t a1) {
    int32_t v1 = 0; // bp-24, 0x18028c1ee
    int64_t v2; // 0x18028c1e0
    int64_t v3; // 0x18028c1e0
    int64_t v4; // 0x18028c1e0
    int64_t v5; // 0x18028c1e0
    uint64_t result = function_18028bf7c(&v1, v4, v3, v2, v5); // 0x18028c1fd
    if (result >= 5) {
        // 0x18028c221
        return result;
    }
    if (a1 != 0) {
        uint32_t v6 = v1; // 0x18028c208
        *(int16_t *)a1 = (int16_t)(v6 < 0x10000 ? v6 : 0xfffd);
    }
    // 0x18028c221
    return result;
}

// Address range: 0x18028c228 - 0x18028c3dd
int64_t function_18028c228(int32_t * a1, int64_t * a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2; // 0x18028c259
    int64_t v4 = 0; // 0x18028c259
    int64_t result; // 0x18028c228
    if (a1 == NULL) {
        while (true) {
          lab_0x18028c355:;
            int64_t v5 = v3;
            int64_t v6 = 1; // 0x18028c358
            if (*(char *)v5 != 0) {
                // 0x18028c362
                v6 = 2;
                if (*(char *)(v5 + 1) != 0) {
                    // 0x18028c370
                    v6 = *(char *)(v5 + 2) == 0 ? 3 : 4;
                }
            }
            int64_t v7 = function_18028bf7c(NULL, v5, v6, v1, a5); // 0x18028c38c
            result = v4;
            switch (v7) {
                case -1: {
                    goto lab_0x18028c3b1;
                }
                case 0: {
                    return result;
                }
                default: {
                    // 0x18028c39c
                    v3 = v7 + v5;
                    v4 = v4 + 1 + (int64_t)(v7 == 4);
                    goto lab_0x18028c355;
                }
            }
        }
      lab_0x18028c3b1:
        // 0x18028c3b1
        *(char *)(a5 + 48) = 1;
        *(int32_t *)(a5 + 44) = 42;
        // 0x18028c3c0
        return -1;
    }
    int64_t v8 = (int64_t)a1;
    int64_t v9 = v8; // 0x18028c265
    int64_t v10 = a3; // 0x18028c265
    int64_t v11 = v2; // 0x18028c265
    int64_t v12 = v8; // 0x18028c265
    int64_t v13 = v2; // 0x18028c265
    if (a3 == 0) {
        goto lab_0x18028c31e_2;
      lab_0x18028c31e_2:
        // 0x18028c31e
        *a2 = v13;
        result = (v12 - v8) / 2;
        // 0x18028c3c0
        return result;
    }
    int64_t v14; // 0x18028c228
    while (true) {
      lab_0x18028c273:
        // 0x18028c273
        v14 = v11;
        int64_t v15 = v10;
        int64_t v16 = v9;
        int64_t v17 = 1; // 0x18028c276
        if (*(char *)v14 != 0) {
            // 0x18028c280
            v17 = 2;
            if (*(char *)(v14 + 1) != 0) {
                // 0x18028c28e
                v17 = *(char *)(v14 + 2) == 0 ? 3 : 4;
            }
        }
        int32_t v18 = 0; // 0x18028c2a0
        int64_t v19 = function_18028bf7c(&v18, v14, v17, v1, a5); // 0x18028c2b2
        switch (v19) {
            case -1: {
                goto lab_0x18028c338;
            }
            case 0: {
                // 0x18028c32f
                *(int16_t *)v16 = 0;
                v12 = v16;
                v13 = 0;
                goto lab_0x18028c31e_2;
            }
            default: {
                uint32_t v20 = v18; // 0x18028c2c5
                int64_t v21 = v20; // 0x18028c2c5
                int64_t v22 = v21; // 0x18028c2cf
                int64_t v23 = v16; // 0x18028c2cf
                int64_t v24 = v15; // 0x18028c2cf
                if (v20 >= 0x10000) {
                    // 0x18028c2d1
                    v12 = v16;
                    v13 = v14;
                    if (v15 < 2) {
                        goto lab_0x18028c31e_2;
                    }
                    uint64_t v25 = v21 + 0xffff0000; // 0x18028c2d7
                    v18 = v25;
                    *(int16_t *)v16 = (int16_t)(v25 / 1024) | -0x2800;
                    v22 = v20 & 1023 | 0xdc00;
                    v23 = v16 + 2;
                    v24 = v15 - 1;
                }
                // 0x18028c30a
                *(int16_t *)v23 = (int16_t)v22;
                v11 = v19 + v14;
                v9 = v23 + 2;
                v10 = v24 - 1;
                v12 = v9;
                v13 = v11;
                if (v10 == 0) {
                    goto lab_0x18028c31e_2;
                }
                goto lab_0x18028c273;
            }
        }
    }
  lab_0x18028c338:
    // 0x18028c338
    *a2 = v14;
    *(char *)(a5 + 48) = 1;
    *(int32_t *)(a5 + 44) = 42;
    // 0x18028c3c0
    return -1;
}

// Address range: 0x18028c3e0 - 0x18028c407
int64_t function_18028c3e0(int64_t a1) {
    // 0x18028c3e0
    int64_t result; // 0x18028c3e0
    if (a1 != 0) {
        // 0x18028c3fe
        result = (int64_t)*(int32_t *)(a1 + 24);
    } else {
        // 0x18028c3e9
        int64_t v1; // 0x18028c3e0
        int64_t v2; // 0x18028c3e0
        int64_t v3; // 0x18028c3e0
        *(int32_t *)function_180279918(a1, v3, v2, v1) = 22;
        function_180271814(a1, v3, v2, v1);
        result = 0xffffffff;
    }
    // 0x18028c402
    return result;
}

// Address range: 0x18028c420 - 0x18028c469
int64_t function_18028c420(int64_t a1) {
    // 0x18028c420
    if ((int64_t)__acrt_iob_func(2) == a1) {
        // 0x18028c463
        return a1 & -256 | 1;
    }
    int64_t v1 = (int64_t)__acrt_iob_func(1); // 0x18028c43d
    int64_t result; // 0x18028c420
    if (v1 != a1) {
        // 0x18028c45d
        result = v1 & -256;
    } else {
        int64_t v2 = function_180299c5c(function_18028c3e0(a1) & 0xffffffff); // 0x18028c451
        result = v2 & -256 | (int64_t)((int32_t)v2 != 0);
    }
    // 0x18028c463
    return result;
}

// Address range: 0x18028c46c - 0x18028c533
int64_t function_18028c46c(int64_t a1) {
    int64_t v1 = function_18028c420(a1); // 0x18028c479
    if ((char)v1 == 0) {
        // 0x18028c528
        return v1 & -256;
    }
    int64_t * v2 = __acrt_iob_func(1); // 0x18028c48b
    int64_t v3 = &g1305; // 0x18028c493
    if ((int64_t)v2 != a1) {
        int64_t v4 = (int64_t)__acrt_iob_func(2); // 0x18028c4a3
        v3 = &g1306;
        if (v4 != a1) {
            // 0x18028c528
            return v4 & -256;
        }
    }
    // 0x18028c4b4
    g1276++;
    int32_t * v5 = (int32_t *)(a1 + 20); // 0x18028c4ba
    uint32_t v6 = *v5; // 0x18028c4ba
    int64_t v7 = v6; // 0x18028c4ba
    if ((v6 & 1216) != 0) {
        // 0x18028c528
        return v7 & -256;
    }
    // 0x18028c4c5
    *v5 = v6 | 642;
    int64_t * v8 = (int64_t *)v3; // 0x18028c4cd
    int64_t v9 = *v8; // 0x18028c4cd
    int64_t v10 = v9; // 0x18028c4d1
    int64_t v11 = v7; // 0x18028c4d1
    if (v9 == 0) {
        // 0x18028c4d3
        *v8 = (int64_t)_malloc_base(0x1000);
        int64_t v12; // 0x18028c46c
        v11 = function_18028acc0(0, v12);
        v10 = *v8;
    }
    // 0x18028c4e7
    int64_t v13; // 0x18028c46c
    if (v10 != 0) {
        // 0x18028c50c
        *(int64_t *)(a1 + 8) = v10;
        int64_t v14 = *v8; // 0x18028c510
        *(int64_t *)a1 = v14;
        *(int32_t *)(a1 + 16) = 0x1000;
        *(int32_t *)(a1 + 32) = 0x1000;
        v13 = v14;
    } else {
        int64_t v15 = a1 + 28; // 0x18028c4ef
        *(int32_t *)(a1 + 16) = 2;
        *(int64_t *)(a1 + 8) = v15;
        *(int64_t *)a1 = v15;
        *(int32_t *)(a1 + 32) = 2;
        v13 = v11;
    }
    // 0x18028c528
    return v13 & -256 | 1;
}

// Address range: 0x18028c534 - 0x18028c571
int64_t function_18028c534(int64_t a1, int64_t a2, int64_t a3) {
    if ((char)a1 == 0) {
        // 0x18028c570
        int64_t result; // 0x18028c534
        return result;
    }
    int32_t * v1 = (int32_t *)(a2 + 20); // 0x18028c53d
    uint32_t v2 = *v1; // 0x18028c53d
    int64_t result2 = v2 / 512; // 0x18028c549
    if ((v2 & 512) != 0) {
        // 0x18028c54b
        result2 = function_180277c30(a2, a3);
        *v1 = *v1 & -641;
        *(int32_t *)(a2 + 32) = 0;
        *(int64_t *)(a2 + 8) = 0;
        *(int64_t *)a2 = 0;
    }
    // 0x18028c570
    return result2;
}

// Address range: 0x18028c574 - 0x18028c671
int64_t function_18028c574(void) {
    // 0x18028c574
    int64_t lpStartupInfo; // bp-120, 0x18028c574
    int64_t v1; // 0x18028c574
    function_18029db80((int64_t)&lpStartupInfo, 0, 104, v1);
    GetStartupInfoW((struct _STARTUPINFOW *)&lpStartupInfo);
    int16_t v2; // 0x18028c574
    if (v2 == 0) {
        // 0x18028c653
        return &g1381;
    }
    // 0x18028c5b9
    int32_t * v3; // 0x18028c574
    int64_t result = (int64_t)v3; // 0x18028c5b9
    if (v3 == NULL) {
        // 0x18028c653
        return result;
    }
    uint32_t v4 = *v3;
    int64_t v5 = v4 < 0x2000 == (0x1fff - v4 & v4) < 0 ? 0x2000 : (int64_t)v4; // 0x18028c5d8
    int64_t result2 = function_180299db4(v5); // 0x18028c5dd
    int32_t v6 = v5; // 0x18028c5e2
    int32_t v7 = g1308; // 0x18028c5e2
    int32_t v8 = v6 - v7; // 0x18028c5e2
    uint32_t v9 = v8 < 0 == ((v8 ^ v6) & (v7 ^ v6)) < 0 == (v8 != 0) ? v7 : v6; // 0x18028c5e8
    if (v9 == 0) {
        // 0x18028c653
        return result2;
    }
    int64_t v10 = result + 4; // 0x18028c5ca
    int64_t v11 = v10 + (int64_t)v4; // 0x18028c5f3
    int64_t v12 = 0; // 0x18028c5f3
    int64_t v13 = v10; // 0x18028c5f3
    int64_t v14 = v9; // 0x18028c5f3
    int64_t v15 = result2; // 0x18028c5f3
    int64_t v16; // 0x18028c574
    int64_t v17; // 0x18028c574
    int64_t v18; // 0x18028c574
    int64_t v19; // 0x18028c574
    char * v20; // 0x18028c602
    while (true) {
      lab_0x18028c5f6:;
        int64_t v21 = v15;
        v19 = v13;
        v18 = v12;
        int64_t * v22 = (int64_t *)v11; // 0x18028c5f6
        uint64_t hFile = *v22; // 0x18028c5f6
        v17 = v21;
        if (hFile > 0xfffffffffffffffd) {
            goto lab_0x18028c643;
        } else {
            // 0x18028c602
            v20 = (char *)v19;
            char v23 = *v20; // 0x18028c602
            v17 = v21;
            if ((v23 & 1) == 0) {
                goto lab_0x18028c643;
            } else {
                // 0x18028c607
                v16 = hFile;
                if ((v23 & 8) != 0) {
                    goto lab_0x18028c619;
                } else {
                    // 0x18028c60c
                    v17 = 0;
                    if (GetFileType((int64_t *)hFile) == 0) {
                        goto lab_0x18028c643;
                    } else {
                        // 0x18028c60c
                        v16 = *v22;
                        goto lab_0x18028c619;
                    }
                }
            }
        }
    }
  lab_0x18028c653:;
    // 0x18028c653
    int64_t result3; // 0x18028c574
    return result3;
  lab_0x18028c643:
    // 0x18028c643
    v15 = v17;
    v14--;
    v11 += 8;
    v12 = v18 + 1;
    v13 = v19 + 1;
    result3 = v15;
    if (v14 == 0) {
        // break -> 0x18028c653
        goto lab_0x18028c653;
    }
    goto lab_0x18028c5f6;
  lab_0x18028c619:;
    int64_t v24 = *(int64_t *)(8 * v18 / 64 + (int64_t)&g1307); // 0x18028c62d
    int64_t v25 = v24 + 72 * (v18 & 63);
    *(int64_t *)(v25 + 40) = v16;
    unsigned char v26 = *v20; // 0x18028c63d
    *(char *)(v25 + 56) = v26;
    v17 = v16 & -256 | (int64_t)v26;
    goto lab_0x18028c643;
}

// Address range: 0x18028c674 - 0x18028c77c
int64_t function_18028c674(void) {
    int64_t v1 = 0; // 0x18028c68f
    int64_t v2 = 0; // 0x18028c68f
    int64_t v3; // 0x18028c674
    int64_t result; // 0x18028c674
    int64_t v4; // 0x18028c674
    int64_t * v5; // 0x18028c6ae
    char * v6; // 0x18028c674
    while (true) {
      lab_0x18028c692:
        // 0x18028c692
        v3 = v2;
        v4 = v1;
        int64_t v7 = *(int64_t *)(8 * 0x100000000 * v4 / 0x4000000000 + (int64_t)&g1307); // 0x18028c6aa
        int64_t v8 = 72 * (v4 & 63) + v7;
        v5 = (int64_t *)(v8 + 40);
        int64_t v9 = *v5; // 0x18028c6ae
        int64_t v10 = v9 + 2; // 0x18028c6b3
        v6 = (char *)(v8 + 56);
        if (v9 == -1 || v10 == 0) {
            // 0x18028c6c7
            *v6 = -127;
            int64_t * hFile = GetStdHandle(v4 == 0 ? -10 : v4 == 1 ? -11 : -12); // 0x18028c6ed
            int64_t v11 = (int64_t)hFile; // 0x18028c6ed
            switch (v11) {
                case -1: {
                    goto lab_0x18028c72d;
                }
                case 0: {
                    goto lab_0x18028c72d;
                }
                default: {
                    int32_t v12 = GetFileType(hFile); // 0x18028c703
                    if (v12 == 0) {
                        goto lab_0x18028c72d;
                    } else {
                        uint32_t v13 = v12 & 255;
                        int64_t v14 = v13; // 0x18028c70d
                        *v5 = v11;
                        if (v13 != 2) {
                            // 0x18028c721
                            result = v14;
                            if (v13 == 3) {
                                // 0x18028c726
                                *v6 = *v6 | 8;
                                result = v14;
                            }
                        } else {
                            // 0x18028c71a
                            *v6 = *v6 | 64;
                            result = v14;
                        }
                        goto lab_0x18028c752;
                    }
                }
            }
        } else {
            // 0x18028c6bd
            *v6 = *v6 | -128;
            result = v10;
            goto lab_0x18028c752;
        }
    }
  lab_0x18028c761:
    // 0x18028c761
    return result;
  lab_0x18028c72d:
    // 0x18028c72d
    *v6 = *v6 | 64;
    *v5 = -2;
    result = 0;
    if (g1275 != 0) {
        int64_t v15 = *(int64_t *)(g1275 + v3); // 0x18028c747
        *(int32_t *)(v15 + 24) = -2;
        result = v15;
    }
    goto lab_0x18028c752;
  lab_0x18028c752:;
    int64_t v16 = v4 + 1; // 0x18028c752
    v1 = v16 & 0xffffffff;
    v2 = v3 + 8;
    if ((int32_t)v16 == 3) {
        // break -> 0x18028c761
        goto lab_0x18028c761;
    }
    goto lab_0x18028c692;
}

// Address range: 0x18028c77c - 0x18028c7b7
int64_t function_18028c77c(void) {
    // 0x18028c77c
    __acrt_lock(7);
    int64_t v1 = 0; // 0x18028c797
    if ((int32_t)function_180299db4(0) == 0) {
        // 0x18028c799
        function_18028c574();
        function_18028c674();
        v1 = 1;
    }
    // 0x18028c7a5
    int64_t v2; // 0x18028c77c
    return __acrt_lock2(7, v2) & -256 | v1;
}

// Address range: 0x18028c7b8 - 0x18028c7f8
int64_t function_18028c7b8(void) {
    int64_t v1 = 0; // 0x18028c7c2
    int64_t * v2 = (int64_t *)(v1 + (int64_t)&g1307); // 0x18028c7cb
    int64_t v3 = *v2; // 0x18028c7cb
    int64_t v4; // 0x18028c7b8
    int64_t v5 = v4; // 0x18028c7d2
    if (v3 != 0) {
        // 0x18028c7d4
        v5 = function_180299d64(v3);
        *v2 = 0;
    }
    int64_t v6 = v5;
    v1 += 8;
    while (v1 < 1024) {
        // 0x18028c7c4
        v2 = (int64_t *)(v1 + (int64_t)&g1307);
        v3 = *v2;
        v5 = v6;
        if (v3 != 0) {
            // 0x18028c7d4
            v5 = function_180299d64(v3);
            *v2 = 0;
        }
        // 0x18028c7de
        v6 = v5;
        v1 += 8;
    }
    // 0x18028c7eb
    return v6 & -256 | 1;
}

// Address range: 0x18028c878 - 0x18028c8c7
int64_t function_18028c878(void) {
    // 0x18028c878
    *(int32_t *)&g1309 = 0x7080;
    *(int32_t *)&g1310 = 1;
    *(int32_t *)&g1311 = -3600;
    g1312 = &g761[0];
    g1313 = &g762;
    return (int32_t)&g762 ^ (int32_t)&g762;
}

// Address range: 0x18028c8c8 - 0x18028c8d0
int64_t function_18028c8c8(void) {
    // 0x18028c8c8
    return &g1310;
}

// Address range: 0x18028c8d0 - 0x18028c8d8
int64_t function_18028c8d0(void) {
    // 0x18028c8d0
    return &g1311;
}

// Address range: 0x18028c8d8 - 0x18028c8e0
int64_t function_18028c8d8(void) {
    // 0x18028c8d8
    return &g1309;
}

// Address range: 0x18028c8e0 - 0x18028c8e8
int64_t function_18028c8e0(void) {
    // 0x18028c8e0
    return (int64_t)g1312;
}

// Address range: 0x18028c8e8 - 0x18028c8f0
int64_t function_18028c8e8(void) {
    // 0x18028c8e8
    return g1313;
}

// Address range: 0x18028c980 - 0x18028cb18
int64_t function_18028c980(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    int64_t v2 = a1; // 0x18028c993
    int64_t v3; // 0x18028c980
    int64_t v4; // 0x18028c980
    if (a1 != 0) {
        int128_t v5 = __asm_movdqa_11(g458); // 0x18028c9ad
        int128_t v6 = *(int128_t *)&v1; // 0x18028c9b5
        __asm_movups(v6, v5);
        v2 = v6;
        __asm_movups(*(int128_t *)(v2 + 16), v5);
        __asm_movd_60(*(int32_t *)(v2 + 32), v5);
        if (a2 != 0) {
            int64_t v7 = a2; // bp+24, 0x18028c9c9
            int64_t v8 = v2; // 0x18028c9d4
            if (a2 > -0xa8c1) {
                // 0x18028c9e4
                v1 = 0x79358efdf;
                v8 = 0x79358efdf;
                if (a2 <= 0x79358efdf) {
                    char v9 = 0; // 0x18028c9f8
                    int64_t v10 = function_18028cb18(&v7, (int64_t *)&v9); // 0x18028ca02
                    *(int32_t *)(a1 + 20) = (int32_t)v10;
                    *(int32_t *)(a1 + 28) = 0;
                    int64_t v11 = v9 != 0 ? (int64_t)&g599 : (int64_t)&g598; // 0x18028ca56
                    int64_t v12 = v11 | 4; // 0x18028ca5a
                    v1 = v12;
                    int64_t v13 = 1; // 0x18028ca69
                    if (*(int32_t *)v12 < 0) {
                        int64_t v14 = 2; // 0x18028ca60
                        int64_t v15 = v12 + 4; // 0x18028ca63
                        v1 = v15;
                        int64_t v16 = v15; // 0x18028ca69
                        int64_t v17 = v14; // 0x18028ca69
                        v13 = v14;
                        while (*(int32_t *)v15 < 0) {
                            // 0x18028ca60
                            v14 = v17 + 1 & 0xffffffff;
                            v15 = v16 + 4;
                            v1 = v15;
                            v16 = v15;
                            v17 = v14;
                            v13 = v14;
                        }
                    }
                    // 0x18028ca6b
                    *(int32_t *)(a1 + 16) = (int32_t)v13 - 1;
                    int32_t v18 = *(int32_t *)(v11 - 4 + 0x100000000 * v13 / 0x40000000); // 0x18028ca78
                    *(int32_t *)(a1 + 12) = -v18;
                    *(int32_t *)(a1 + 32) = 0;
                    *(int32_t *)(a1 + 24) = 4;
                    *(int32_t *)(a1 + 8) = 0;
                    *(int32_t *)(a1 + 4) = 0;
                    *(int32_t *)a1 = (int32_t)v7;
                    // 0x18028cb0d
                    return 0;
                }
            }
            // 0x18028c9d6
            *(int32_t *)function_180279918(v8, a2, v4, v3) = 22;
            // 0x18028cb0d
            return 22;
        }
    }
    // 0x18028c995
    *(int32_t *)function_180279918(v2, a2, v4, v3) = 22;
    function_180271814(v1, a2, v4, v3);
    // 0x18028cb0d
    return 22;
}

// Address range: 0x18028cb18 - 0x18028cc08
int64_t function_18028cb18(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // 0x18028cb18
    int32_t v3 = v2; // 0x18028cb27
    *a1 = v1;
    if (a1 >= NULL) {
        // 0x18028cbe1
        _3f__3f__24___crt_time_is_leap_year_40_H_40__40_YA_NH_40_Z(v3);
        if (((char)&g1381 & (char)&g1381) == 0) {
            // 0x18028cbf0
            return 70;
        }
        // 0x18028cbec
        *(char *)a2 = 1;
        // 0x18028cbf0
        return 70;
    }
    // 0x18028cbbc
    *a1 = v1 + 0x1e13380;
    _3f__3f__24___crt_time_is_leap_year_40_H_40__40_YA_NH_40_Z(v3);
    if (((char)&g1381 & (char)&g1381) == 0) {
        // 0x18028cbf0
        return 69;
    }
    // 0x18028cbd5
    *a1 = v1 + 0x1e28500;
    // 0x18028cbec
    *(char *)a2 = 1;
    // 0x18028cbf0
    return 69;
}

// Address range: 0x18028cc54 - 0x18028cc59
int64_t function_18028cc54(int64_t a1, int64_t * a2) {
    // 0x18028cc54
    return function_18028c980(a1, (int64_t)a2);
}

// Address range: 0x18028cc5c - 0x18028cf58
int64_t function_18028cc5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = 0; // bp+16, 0x18028cc81
    if (_get_daylight(&v1) != 0) {
        // 0x18028cf41
        function_180271834(0, 0, 0, 0, 0);
        __asm_int3(0, 0);
        __asm_int3(0, 0);
        return __asm_int3(0, 0);
    }
    // 0x18028cc91
    if (v1 == 0) {
        // 0x18028cedb
        return 0;
    }
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x18028cc9e
    uint32_t v3 = *v2; // 0x18028cc9e
    if (v3 == g763 != (g766 == v3)) {
        int64_t v4 = v3; // 0x18028cc9e
        int64_t v5; // 0x18028cc5c
        int16_t v6; // 0x18028cc5c
        int64_t v7; // 0x18028cc5c
        int64_t v8; // 0x18028cc5c
        int64_t v9; // 0x18028cc5c
        int64_t v10; // 0x18028cc5c
        int64_t v11; // 0x18028cc5c
        int64_t v12; // 0x18028cc5c
        int64_t v13; // 0x18028cc5c
        int64_t v14; // 0x18028cc5c
        if (g1315 == 0) {
            int16_t v15 = v3 < 107 == (106 - v3 & v3) < 0 ? 3 : 4; // 0x18028ce68
            function_18028cf58(0, 1, v4, v15, v3 < 107 == (106 - v3 & v3) < 0 ? 2 : 1, 0, 0, 2, 0, 0, 0);
            v9 = 0;
            v10 = 0;
            v11 = 0;
            v12 = 2;
            v13 = 0;
            v14 = 0;
            v7 = v3 < 107 == (106 - v3 & v3) < 0 ? 1 : 5;
            v8 = 1;
            v5 = (int64_t)*v2;
            v6 = (int16_t)(v3 < 107 == (106 - v3 & v3) < 0) | 10;
        } else {
            // 0x18028ccc5
            int64_t v16; // 0x18028cc5c
            if (g1330 != 0) {
                uint16_t v17 = *(int16_t *)&g1337; // 0x18028cd35
                uint16_t v18 = *(int16_t *)&g1336; // 0x18028cd3f
                uint16_t v19 = *(int16_t *)&g1335; // 0x18028cd47
                uint16_t v20 = *(int16_t *)&g1334; // 0x18028cd4f
                _3f__3f__24___crt_time_is_leap_year_40_H_40__40_YA_NH_40_Z((int32_t)&g1381);
                int32_t v21 = *(int32_t *)(4 * (int64_t)g1331 + (((char)&g1381 & (char)&g1381) == 0 ? 0x1802fb91c : 0x1802fb954));
                g763 = v3;
                g764 = v21 + (int32_t)*(int16_t *)&g1333;
                g765 = 1000 * (60 * (60 * (int32_t)v20 + (int32_t)v19) + (int32_t)v18) + (int32_t)v17;
                v16 = v4;
            } else {
                uint16_t v22 = *(int16_t *)&g1336; // 0x18028ccce
                uint16_t v23 = *(int16_t *)&g1335; // 0x18028ccd8
                uint16_t v24 = *(int16_t *)&g1337; // 0x18028ccdf
                uint16_t v25 = *(int16_t *)&g1334; // 0x18028cce6
                uint16_t v26 = *(int16_t *)&g1332; // 0x18028ccee
                uint16_t v27 = *(int16_t *)&g1333; // 0x18028ccf6
                function_18028cf58(0, 1, v4, g1331, (int64_t)v27, (int64_t)v26, 0, (int64_t)v25, (int64_t)v23, (int64_t)v22, (int64_t)v24);
                v16 = (int64_t)*v2;
            }
            int64_t v28 = (int64_t)*(int16_t *)&g1323;
            int64_t v29 = 0; // 0x18028cde3
            int64_t v30 = 0; // 0x18028cde3
            int64_t v31 = 0; // 0x18028cde3
            int64_t v32 = v28; // 0x18028cde3
            if (g1320 == 0) {
                // 0x18028cde5
                v29 = (int64_t)*(int16_t *)&g1322;
                v30 = v28;
                v31 = 1;
                v32 = 0;
            }
            // 0x18028ce09
            v9 = (int64_t)*(int16_t *)&g1327;
            v10 = (int64_t)*(int16_t *)&g1326;
            v11 = (int64_t)*(int16_t *)&g1325;
            v12 = (int64_t)*(int16_t *)&g1324;
            v13 = v32;
            v14 = v29;
            v7 = v30;
            v8 = v31;
            v5 = v16;
            v6 = g1321;
        }
        // 0x18028cea5
        function_18028cf58(1, v8, v5, v6, v7, v14, v13, v12, v11, v10, v9);
    }
    uint32_t v33 = *(int32_t *)(a1 + 28); // 0x18028cebe
    if (g764 < g767) {
        // 0x18028cec6
        if (v33 < g764 || g767 < v33) {
            // 0x18028cedb
            return 0;
        }
        // 0x18028cecf
        if (v33 > g764 == g767 > v33) {
            // 0x18028cedb
            return 1;
        }
    } else {
        // 0x18028cef9
        if (g767 > v33 || v33 > g764) {
            // 0x18028cedb
            return 1;
        }
        // 0x18028cf02
        if (g767 < v33 == v33 < g764) {
            // 0x18028cedb
            return 0;
        }
    }
    int32_t v34 = 1000 * (60 * (60 * *(int32_t *)(a1 + 8) + *(int32_t *)(a1 + 4)) + g767); // 0x18028cf18
    bool result; // 0x18028cc5c
    if (v33 != g764) {
        int32_t v35 = v34 - g768; // 0x18028cf31
        result = v35 < 0 != ((v35 ^ v34) & (g768 ^ v34)) < 0;
    } else {
        int32_t v36 = v34 - g765; // 0x18028cf23
        result = v36 < 0 == ((v36 ^ v34) & (g765 ^ v34)) < 0;
    }
    // 0x18028cedb
    return result;
}

// Address range: 0x18028cf58 - 0x18028d753
int64_t function_18028cf58(int32_t a1, int64_t a2, int64_t a3, int16_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int64_t v1 = a4;
    int64_t v2 = 0; // 0x18028cf6a
    int64_t v3; // 0x18028cf58
    _3f__3f__24___crt_time_is_leap_year_40_H_40__40_YA_NH_40_Z((int32_t)v3);
    int64_t v4; // 0x18028cf58
    if ((int32_t)a2 != 1) {
        int32_t v5 = *(int32_t *)(4 * v1 + ((char)&g1381 == 0 ? 0x1802fb91c : 0x1802fb954));
        int32_t v6; // 0x18028cf58
        v4 = v5 + v6;
    } else {
        int64_t v7 = 4 * v1;
        int32_t v8 = *(int32_t *)(v7 + ((char)&g1381 == 0 ? 0x1802fb91c : 0x1802fb954)) + 1; // 0x18028cfab
        int64_t v9 = (a3 & 0xffffffff) + 0xffffffff; // 0x18028cfae
        int32_t v10 = 0x51eb851f * 0x100000000 * v9 / 0x100000000 / 0x100000000; // 0x18028cfc6
        int32_t v11 = (int32_t)(0x51eb851f * (0x100000000 * a3 + 0x12b00000000) / 0x100000000 / 0x100000000) / 128; // 0x18028cfcc
        int32_t v12 = v9; // 0x18028cfec
        int32_t v13 = 365 * (int32_t)a3 - 0x63db + v11 + ((v12 >> 31 & 3) + v12) / 4 + (v11 >> 31) - v10 / 32 + (v10 >> 31) + v8; // 0x18028d009
        int32_t v14 = (v13 + (int32_t)(-0x6db6db6d * (int64_t)v13 / 0x100000000)) / 4; // 0x18028d012
        int32_t v15 = -7 * ((v14 >> 31) + v14) + v13; // 0x18028d024
        int32_t v16; // 0x18028cf58
        int32_t v17; // 0x18028cf58
        int32_t v18 = 7 * v17 + v16 + v8 - v15; // 0x18028d02d
        int32_t v19 = v15 - v16; // 0x18028d031
        uint32_t v20 = v19 < 0 == ((v19 ^ v15) & (v15 ^ v16)) < 0 == (v19 != 0) ? v18 : v18 - 7; // 0x18028d039
        int64_t v21 = v20; // 0x18028d039
        v4 = v21;
        if (v17 == 5) {
            // 0x18028d05d
            v4 = v21;
            if (v20 > *(int32_t *)(v7 + ((char)&g1381 == 0 ? 0x1802fb920 : 0x1802fb958))) {
                // 0x18028d061
                v4 = v20 - 7;
            }
        }
    }
    // 0x18028d086
    int32_t v22; // 0x18028cf58
    int32_t v23; // 0x18028cf58
    int32_t result = 60 * v23 + v22; // 0x18028d08e
    int32_t v24; // 0x18028cf58
    int32_t v25; // 0x18028cf58
    int32_t v26 = 1000 * (60 * result + v25) + v24; // 0x18028d0a5
    if (a1 == 0) {
        // 0x18028d0b1
        g764 = v4;
        g765 = v26;
        g763 = a3;
        // 0x18028d0c4
        return result;
    }
    // 0x18028d0d7
    g768 = v26;
    g767 = v4;
    if ((int32_t)_get_daylight2((int32_t *)&v2) == 0) {
        int32_t result2 = 1000 * (int32_t)v2 + g768; // 0x18028d100
        g768 = result2;
        int32_t result3; // 0x18028cf58
        int32_t v27; // 0x18028cf58
        if (result2 >= 0) {
            // 0x18028d117
            if (result2 < 0x5265c00) {
                // 0x18028d12f
                g766 = a3;
                // 0x18028d0c4
                return result2;
            }
            // 0x18028d11e
            result3 = result2 - 0x5265c00;
            v27 = g767 + 1;
        } else {
            // 0x18028d10a
            result3 = result2 + 0x5265c00;
            v27 = g767 - 1;
        }
        // 0x18028d129
        g767 = v27;
        g768 = result3;
        // 0x18028d12f
        g766 = a3;
        // 0x18028d0c4
        return result3;
    }
    // 0x18028d137
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    int64_t v28; // bp-144, 0x18028cf58
    if ((int32_t)function_180297060(0, 64, 0, 0) == 0) {
        // 0x18028d182
        int64_t v29; // bp-112, 0x18028cf58
        function_1802718b0(&v29, 0);
        char v30; // 0x18028cf58
        int64_t v31; // 0x18028cf58
        if (*(int32_t *)(v31 + 12) == 0xfde9) {
            // 0x18028d19b
            if (v30 != 0) {
                int32_t * v32 = (int32_t *)(v29 + 936); // 0x18028d1a7
                *v32 = *v32 & -3;
            }
            // 0x18028d1e7
            v28 = 0;
            return function_18028d8d8(0xfde9, 0, 0, 0, 0, 63);
        }
        int64_t v33 = function_18028dccc(0xfde9); // 0x18028d1b0
        int64_t v34; // 0x18028cf58
        if ((int32_t)v33 != 0) {
            // 0x18028d1d2
            v34 = 0;
            if (v30 != 0) {
                int32_t * v35 = (int32_t *)(v29 + 936); // 0x18028d1de
                *v35 = *v35 & -3;
                v34 = 0;
            }
        } else {
            // 0x18028d1b9
            v34 = 1;
            if (v30 != (char)v33) {
                int32_t * v36 = (int32_t *)(v29 + 936); // 0x18028d1c4
                *v36 = *v36 & -3;
                v34 = 1;
            }
        }
        // 0x18028d1e7
        v28 = 0;
        return function_18028d8d8(v34, 0, 0, 0, 0, 63);
    }
    // 0x18028d21d
    v28 = 0;
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    int64_t v37 = function_18028c8e0(); // 0x18028d249
    int64_t v38 = function_18028c8e8(); // 0x18028d251
    int32_t v39 = 0; // bp-160, 0x18028d25d
    int32_t v40 = 0; // bp-152, 0x18028d264
    if ((int32_t)_get_daylight3(&v39, 0, 0) == 0) {
        // 0x18028d275
        if (_get_daylight(&v40) == 0) {
            int64_t v41 = g1314; // 0x18028d286
            int64_t v42 = 0; // 0x18028d290
            int64_t v43 = 0; // 0x18028d290
            if (v41 != 0) {
                uint16_t v44 = *(int16_t *)(v42 + v41); // 0x18028d29b
                uint32_t v45 = (int32_t)*(int16_t *)v42 - (int32_t)v44; // 0x18028d2a0
                while (v45 == 0) {
                    int64_t v46 = v42 + 2; // 0x18028d2a5
                    v42 = v46;
                    int64_t result4 = v46; // 0x18028d2ac
                    if (v44 == 0) {
                        // 0x18028d2df
                        return result4;
                    }
                    v44 = *(int16_t *)(v42 + v41);
                    v45 = (int32_t)*(int16_t *)v42 - (int32_t)v44;
                }
                // 0x18028d2b2
                v43 = v45;
            }
            int64_t * v47 = _malloc_base(2); // 0x18028d2cb
            if (v47 == NULL) {
                // 0x18028d2df
                return function_18028acc0(0, v43);
            }
            int64_t v48 = (int64_t)v47; // 0x18028d2cb
            function_18028acc0(g1314, v43);
            g1314 = v48;
            if ((int32_t)function_180293a00(v48, 1, 0) == 0) {
                // 0x18028d322
                function_18029db80(*(int64_t *)v38, 0, 128, 0);
                int64_t * v49 = (int64_t *)(v38 + 8); // 0x18028d334
                function_18029db80(*v49, 0, 128, 0);
                function_18029db80(*(int64_t *)v37, 0, 64, 0);
                function_18029db80(*(int64_t *)(v37 + 8), 0, 64, 0);
                v28 = 0;
                int64_t v50 = 3600 * function_18027e0d4(0, &v28); // 0x18028d3ad
                v39 = v50;
                int64_t v51 = 0; // 0x18028d3b3
                int16_t * v52 = (int16_t *)v51;
                int16_t v53 = *v52; // 0x18028d3b6
                int64_t v54 = v51 + 2;
                v51 = v54;
                while (v53 == 43 || v53 < 58) {
                    // 0x18028d3b6
                    v52 = (int16_t *)v51;
                    v53 = *v52;
                    v54 = v51 + 2;
                    v51 = v54;
                }
                int16_t * v55 = v52; // 0x18028d3d3
                int64_t v56 = v50 & 0xfffffff0; // 0x18028d3d3
                if (v53 == 58) {
                    int64_t v57 = function_18027e0d4(v54, &v28); // 0x18028d3e6
                    uint16_t v58 = *(int16_t *)v54; // 0x18028d3f1
                    int64_t v59 = v58; // 0x18028d3f1
                    int32_t v60 = 60 * (int32_t)v57 + v39; // 0x18028d3f4
                    v39 = v60;
                    int64_t v61 = v59; // 0x18028d3fd
                    int64_t v62 = v54; // 0x18028d3fd
                    int64_t v63 = v59; // 0x18028d3fd
                    int64_t v64 = v54; // 0x18028d3fd
                    if (v58 >= 48) {
                        v63 = v61;
                        v64 = v62;
                        while (v61 < 58) {
                            int64_t v65 = v62 + 2; // 0x18028d40b
                            uint16_t v66 = *(int16_t *)v65; // 0x18028d40f
                            int64_t v67 = v66; // 0x18028d40f
                            v61 = v67;
                            v62 = v65;
                            v63 = v67;
                            v64 = v65;
                            if (v66 < 48) {
                                // break -> 0x18028d41b
                                return 0;
                            }
                            v63 = v61;
                            v64 = v62;
                        }
                    }
                    // 0x18028d41b
                    if ((int16_t)v63 != 58) {
                        // 0x18028d41b
                        v55 = (int16_t *)v64;
                        v56 = v60;
                    } else {
                        int64_t v68 = v64 + 2; // 0x18028d421
                        int32_t v69 = v39 + (int32_t)function_18027e0d4(v68, &v28); // 0x18028d43a
                        v39 = v69;
                        int64_t v70 = v68; // 0x18028d43f
                        int16_t * v71 = (int16_t *)v70;
                        uint16_t v72 = *v71; // 0x18028d44b
                        v70 += 2;
                        while (v72 < 58 == v72 >= 48) {
                            // 0x18028d44b
                            v71 = (int16_t *)v70;
                            v72 = *v71;
                            v70 += 2;
                        }
                        // 0x18028d454
                        v55 = v71;
                        v56 = v69;
                    }
                }
                int32_t v73 = -(int32_t)v56; // 0x18028d45c
                v39 = v73;
                int16_t v74 = *v55; // 0x18028d45f
                v40 = v74 != 0;
                int64_t v75 = &v28; // 0x18028d46c
                if (v74 != 0) {
                    // 0x18028d46e
                    v75 = *v49;
                }
                // 0x18028d487
                *(int32_t *)function_18028c8d8() = v73;
                *(int32_t *)function_18028c8c8() = v40;
                // 0x18028d2df
                return function_18028acc0(0, v75);
            }
        }
    }
    // 0x18028d49d
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    int64_t v76 = function_18028c8e0(); // 0x18028d4c3
    int64_t v77 = function_18028c8e8(); // 0x18028d4cb
    int32_t v78 = 0; // bp-272, 0x18028d4d6
    int32_t v79 = 0; // bp-264, 0x18028d4dc
    int32_t v80 = 0; // bp-256, 0x18028d4df
    if ((int32_t)_get_daylight3(&v78, 0, 0) == 0) {
        // 0x18028d4ef
        if (_get_daylight(&v79) == 0) {
            // 0x18028d500
            if ((int32_t)_get_daylight2(&v80) == 0) {
                // 0x18028d511
                function_18028acc0(g1314, 0);
                g1314 = 0;
                if (GetTimeZoneInformation((struct _TIME_ZONE_INFORMATION *)&g1318) != -1) {
                    // 0x18028d53a
                    g1315 = 1;
                    int32_t v81 = g1321 == 0 ? 0 : 60 * g1328;
                    v78 = v81 + 60 * *(int32_t *)&g1318;
                    int32_t v82 = 0; // 0x18028d56d
                    int32_t v83 = 0; // 0x18028d56d
                    if (g1331 != 0) {
                        // 0x18028d56f
                        v82 = 0;
                        v83 = 0;
                        if (g1338 != 0) {
                            // 0x18028d579
                            v82 = 1;
                            v83 = 60 * (g1338 - g1328);
                        }
                    }
                    // 0x18028d583
                    v80 = v83;
                    v79 = v82;
                    int64_t * v84 = (int64_t *)v77; // 0x18028d590
                    function_18029db80(*v84, 0, 128, 0);
                    int64_t * v85 = (int64_t *)(v77 + 8); // 0x18028d59b
                    function_18029db80(*v85, 0, 128, 0);
                    int64_t * v86 = (int64_t *)v76; // 0x18028d5a9
                    function_18029db80(*v86, 0, 64, 0);
                    int64_t * v87 = (int64_t *)(v76 + 8); // 0x18028d5bb
                    function_18029db80(*v87, 0, 64, 0);
                    int64_t v88 = ___lc_codepage_func(); // 0x18028d5db
                    function_18028d754(&g1319, *v84, *v86, v88);
                    function_18028d754(&g1329, *v85, *v87, v88);
                }
                // 0x18028d5fc
                *(int32_t *)function_18028c8d8() = v78;
                *(int32_t *)function_18028c8c8() = v79;
                int64_t result5 = function_18028c8d0(); // 0x18028d613
                *(int32_t *)result5 = v80;
                return result5;
            }
        }
    }
    // 0x18028d627
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    g766 = -1;
    g1315 = 0;
    g763 = -1;
    int64_t v89 = 0; // bp-904, 0x18028d68e
    int64_t v90; // bp-888, 0x18028cf58
    int32_t v91 = function_18029a370(&v89, &v90, 256, L"TZ", 0); // 0x18028d698
    if (v91 == 34 != v91 != 0) {
        // 0x18028d6b5
        function_18028acc0(0, (int64_t)&v90);
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v92 = _malloc_base(2 * (int32_t)v89); // 0x18028d6ea
    int64_t v93 = 0; // 0x18028d6f5
    if (v92 != NULL) {
        // 0x18028d700
        v93 = (int64_t)v92;
        int64_t v94 = 0; // bp-896, 0x18028d70f
        if ((int32_t)function_18029a370(&v94, v92, v89, L"TZ", 0) == 0) {
            // 0x18028d727
            function_18028acc0(0, v93);
            // 0x18028d6b5
            function_18028acc0(v92 == &v90 ? 0 : v93, v93);
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x18028d6f9
    function_18028acc0(v93, v93);
    // 0x18028d6b5
    function_18028acc0(0, v93);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18028d754 - 0x18028d816
int64_t function_18028d754(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    if ((int32_t)function_180297060(a2, 64, v1, 32) == 0) {
        // 0x18028d78a
        return function_18028d8d8(a4 & 0xffffffff, 0, v1, -1, a3, 64);
    }
    // 0x18028d7c1
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    uint32_t result = g1316; // 0x18028d7d8
    if (result != 0) {
        // 0x18028d811
        return result;
    }
    // 0x18028d7e3
    __acrt_lock((int32_t)&g1317);
    if (g1316 == 0) {
        // 0x18028d7f7
        g1316++;
    }
    // 0x18028d803
    return __acrt_lock2(6, 0);
}

// Address range: 0x18028d848 - 0x18028d8d8
int64_t function_18028d848(int64_t a1, int64_t dwFlags) {
    uint32_t CodePage = (int32_t)a1; // 0x18028d84d
    int64_t cbMultiByte; // 0x18028d848
    int64_t lpMultiByteStr; // 0x18028d848
    int32_t result; // 0x18028d899
    if (CodePage >= 0xdead) {
        if (CodePage < 0xdeb4) {
            // 0x18028d899
            result = MultiByteToWideChar(CodePage, (int32_t)0, (char *)lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381);
            return result;
        }
        int32_t v1 = CodePage - 0xfde8; // 0x18028d8c7
        if (v1 == 0) {
            // 0x18028d899
            result = MultiByteToWideChar(CodePage, (int32_t)0, (char *)lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381);
            return result;
        }
        // 0x18028d8ce
        if (v1 != 1) {
            // 0x18028d899
            result = MultiByteToWideChar(CodePage, (int32_t)dwFlags, (char *)lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381);
            return result;
        }
      lab_0x18028d8d3:;
        int64_t dwFlags2 = dwFlags & 8;
        result = MultiByteToWideChar(CodePage, (int32_t)dwFlags2, (char *)lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381);
        return result;
    }
    if (CodePage == 0xdeac) {
        // 0x18028d899
        result = MultiByteToWideChar(CodePage, (int32_t)0, (char *)lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381);
        return result;
    }
    bool v2; // 0x18028d848
    if (CodePage < 0xc434) {
        switch (CodePage) {
            case 0xc433: {
                goto lab_0x18028d897;
            }
            case 42: {
                goto lab_0x18028d897;
            }
            case 0xc42c: {
                goto lab_0x18028d897;
            }
            case 0xc42d: {
                goto lab_0x18028d897;
            }
            default: {
                int32_t v3 = CodePage - 0xc42e; // 0x18028d871
                if (v3 == 0) {
                    // 0x18028d899
                    result = MultiByteToWideChar(CodePage, (int32_t)0, (char *)lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381);
                    return result;
                }
                // 0x18028d876
                v2 = v3 == 3;
                goto lab_0x18028d895;
            }
        }
    } else {
        switch (CodePage) {
            case 0xc435: {
                goto lab_0x18028d897;
            }
            case 0xd698: {
                goto lab_0x18028d8d3;
            }
            default: {
                int32_t v4 = CodePage - 0xdeaa; // 0x18028d88b
                if (v4 == 0) {
                    // 0x18028d899
                    result = MultiByteToWideChar(CodePage, (int32_t)0, (char *)lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381);
                    return result;
                }
                // 0x18028d892
                v2 = v4 == 1;
                goto lab_0x18028d895;
            }
        }
    }
  lab_0x18028d895:
    // 0x18028d895
    if (!v2) {
        // 0x18028d899
        result = MultiByteToWideChar(CodePage, (int32_t)dwFlags, (char *)lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381);
        return result;
    }
  lab_0x18028d897:
    // 0x18028d899
    result = MultiByteToWideChar(CodePage, (int32_t)0, (char *)lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381);
    return result;
}

// Address range: 0x18028d8d8 - 0x18028d9b6
int64_t function_18028d8d8(int64_t a1, int32_t a2, int64_t lpWideCharStr, int32_t cchWideChar, int64_t a5, int64_t a6) {
    uint32_t CodePage = (int32_t)a1;
    bool v1; // 0x18028d8d8
    int32_t v2; // 0x18028d8d8
    int32_t dwFlags; // 0x18028d8d8
    if (CodePage < 0xdead) {
        // 0x18028d8fc
        dwFlags = 0;
        if (CodePage == 0xdeac) {
            goto lab_0x18028d978;
        } else {
            if (CodePage < 0xc434) {
                // 0x18028d907
                dwFlags = 0;
                switch (CodePage) {
                    case 0xc433: {
                        goto lab_0x18028d978;
                    }
                    case 42: {
                        goto lab_0x18028d978;
                    }
                    case 0xc42c: {
                        goto lab_0x18028d978;
                    }
                    case 0xc42d: {
                        goto lab_0x18028d978;
                    }
                    default: {
                        int32_t v3 = CodePage - 0xc42e; // 0x18028d91c
                        dwFlags = 0;
                        if (v3 == 0) {
                            goto lab_0x18028d978;
                        } else {
                            // 0x18028d921
                            v1 = v3 == 3;
                            goto lab_0x18028d96e;
                        }
                    }
                }
            } else {
                // 0x18028d926
                dwFlags = 0;
                switch (CodePage) {
                    case 0xc435: {
                        goto lab_0x18028d978;
                    }
                    case 0xd698: {
                        goto lab_0x18028d978;
                    }
                    default: {
                        // 0x18028d936
                        v2 = CodePage - 0xdeaa;
                        goto lab_0x18028d969;
                    }
                }
            }
        }
    } else {
        // 0x18028d93d
        dwFlags = 0;
        if (CodePage < 0xdeb4) {
            goto lab_0x18028d978;
        } else {
            // 0x18028d964
            v2 = CodePage - 0xfde8;
            goto lab_0x18028d969;
        }
    }
  lab_0x18028d978:
    // 0x18028d978
    if ((CodePage || 1) == 0xfde9 && a6 != 0) {
        // 0x18028d997
        *(int32_t *)a6 = 0;
    }
    // 0x18028d999
    int64_t lpMultiByteStr; // 0x18028d8d8
    int32_t result = WideCharToMultiByte(CodePage, dwFlags, (int16_t *)lpWideCharStr, cchWideChar, (char *)lpMultiByteStr, (int32_t)&g1381, (char *)&g1381, (bool *)&g1381); // 0x18028d9af
    return result;
  lab_0x18028d969:
    // 0x18028d969
    dwFlags = 0;
    if (v2 == 0) {
        goto lab_0x18028d978;
    } else {
        // 0x18028d96b
        v1 = v2 == 1;
        goto lab_0x18028d96e;
    }
  lab_0x18028d96e:
    // 0x18028d96e
    dwFlags = v1 ? 0 : a2 & -129;
    goto lab_0x18028d978;
}

// Address range: 0x18028d9b8 - 0x18028d9c9
int64_t function_18028d9b8(void) {
    // 0x18028d9b8
    int64_t v1; // 0x18028d9b8
    int64_t v2; // 0x18028d9b8
    return function_18029d4a0(v2, 0, 0, v1);
}

// Address range: 0x18028d9cc - 0x18028da26
int64_t function_18028d9cc(int64_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6, int64_t * a7) {
    // 0x18028d9cc
    int64_t v1; // 0x18028d9cc
    __acrt_lock((int32_t)v1);
    g1339 = (int64_t)a3;
    bool v2 = EnumSystemLocalesW((bool (*)(int16_t *))0x18028d9b8, 1); // 0x18028da02
    g1339 = 0;
    int64_t v3; // 0x18028d9cc
    __acrt_lock2((int32_t)v3, 1);
    return v2 ? 0xffffffff : 0;
}

// Address range: 0x18028da28 - 0x18028da41
int64_t function_18028da28(void) {
    // 0x18028da28
    if (g1365 == -1) {
        // 0x18028da35
        return 0;
    }
    int64_t result = g1365; // 0x18028da3b
    if (g1365 == 0) {
        _3f_try_get_CompareStringEx_40__40_YAP6AHPEB_WK0H0HPEAU_nlsversioninfo_40__40_PEAX_J_40_ZXZ();
        result = 0;
    }
    // 0x18028da35
    return result;
}

// Address range: 0x18028da60 - 0x18028dc70
int64_t function_18028da60(int64_t a1, char * lpProcName, int64_t * a3, int64_t * a4, int64_t a5) {
    int64_t lpflOldProtect = 0x100000000 * a5 / 0x100000000;
    int64_t func = 0; // 0x18028da8f
    if (a3 != a4) {
        int64_t v1 = (int64_t)a3; // 0x18028da95
        int64_t * hLibModule; // 0x18028da60
        int64_t hModule; // 0x18028da60
        int64_t * v2; // 0x18028da60
        while (true) {
            int64_t v3 = 8 * (int64_t)*(int32_t *)v1; // 0x18028da9e
            v2 = (int64_t *)(v3 + 0x180329af0);
            int64_t v4 = *v2; // 0x18028da9e
            if (v4 == 0) {
                int64_t v5 = *(int64_t *)(v3 + 0x1802f5ef0); // 0x18028daba
                int16_t * lpLibFileName = (int16_t *)v5; // 0x18028dacd
                int64_t * v6 = LoadLibraryExW(lpLibFileName, NULL, 2048); // 0x18028dacd
                hLibModule = v6;
                if (v6 != NULL) {
                    // break -> 0x18028dbdf
                    return 0;
                }
                int32_t errorCode = GetLastError(); // 0x18028dadf
                if (errorCode == 87) {
                    int64_t v7 = errorCode - 80; // 0x18028daea
                    if ((int32_t)function_180287b70(v5, L"api-ms-", v7) != 0) {
                        // 0x18028db03
                        if ((int32_t)function_180287b70(v5, L"ext-ms-", v7) != 0) {
                            int64_t * v8 = LoadLibraryExW(lpLibFileName, NULL, 0); // 0x18028db21
                            hLibModule = v8;
                            if (v8 != NULL) {
                                // break -> 0x18028dbdf
                                return 0;
                            }
                        }
                    }
                }
                // 0x18028db33
                *v2 = -1;
            } else {
                // 0x18028daac
                hModule = v4;
                if (v4 != -1) {
                    goto lab_0x18028dbf8;
                }
            }
            // 0x18028db43
            v1 += 4;
            func = 0;
            if (v1 == (int64_t)a4) {
                goto lab_0x18028db52;
            }
        }
        int64_t v9 = (int64_t)hLibModule;
        *v2 = v9;
        hModule = v9;
        if (*v2 != 0) {
            // 0x18028dbef
            FreeLibrary(hLibModule);
            hModule = v9;
        }
      lab_0x18028dbf8:
        // 0x18028dbf8
        func = (int64_t)GetProcAddress((int64_t *)hModule, lpProcName);
    }
  lab_0x18028db52:;
    int64_t result = func;
    __acrt_lock(14);
    lpflOldProtect = 0;
    bool v10 = VirtualProtect(&g1364, 256, 4, (int32_t *)&lpflOldProtect); // 0x18028db7d
    int64_t v11 = 4; // 0x18028db85
    if (v10) {
        int64_t v12 = result == 0 ? -1 : result; // 0x18028db98
        *(int64_t *)((8 * a1 & 0x7fffffff8) + (int64_t)&g1364) = v12;
        bool v13 = VirtualProtect(&g1364, 256, 2, (int32_t *)&lpflOldProtect); // 0x18028dbae
        v11 = 2;
        if (v13) {
            // 0x18028dbb8
            __acrt_lock2(14, 256);
            return result;
        }
    }
    // 0x18028dc0c
    function_18027f79c((int64_t)&g1364, 256);
    __asm_int3((int64_t)&g1364, 256);
    __asm_int3((int64_t)&g1364, 256);
    __asm_int3((int64_t)&g1364, 256);
    if (g1378 == -1) {
        // 0x18028dc65
        return 0xc0000225;
    }
    // 0x18028dc2a
    int64_t v14; // 0x18028da60
    if (g1378 != 0) {
        // 0x18028dc51
        v14 = &lpflOldProtect;
        return function_18029d4a0(-6, (int64_t)&g1364, v11, v14);
    }
    int64_t v15 = function_18028da60(g1378 + 26 & 0xffffffff, "AppPolicyGetProcessTerminationMethod", &g585, &g586, result); // 0x18028dc47
    if (v15 == 0) {
        // 0x18028dc65
        return 0xc0000225;
    }
    // 0x18028dc51
    v14 = &g586;
    int64_t v16 = &g585;
    return function_18029d4a0(-6, (int64_t)&g1364, v16, v14);
}

// Address range: 0x18028dc70 - 0x18028dccc
int64_t function_18028dc70(int32_t * a1) {
    // 0x18028dc70
    if (g1379 == -1) {
        // 0x18028dcc1
        return 0xc0000225;
    }
    if (g1379 != 0) {
        // 0x18028dcad
        int64_t v1; // 0x18028dc70
        int64_t v2; // 0x18028dc70
        return function_18029d4a0(-6, (int64_t)a1, v1, v2);
    }
    // 0x18028dc8b
    int64_t v3; // 0x18028dc70
    int64_t v4 = function_18028da60(g1379 + 27 & 0xffffffff, "AppPolicyGetThreadInitializationType", &g587, &g588, v3); // 0x18028dca3
    if (v4 == 0) {
        // 0x18028dcc1
        return 0xc0000225;
    }
    int64_t v5 = &g588;
    int64_t v6 = &g587;
    return function_18029d4a0(-6, (int64_t)a1, v6, v5);
}

// Address range: 0x18028dccc - 0x18028dd16
int64_t function_18028dccc(int64_t a1) {
    // 0x18028dccc
    if (g1364 == -1) {
        // 0x18028dd0c
        return 1;
    }
    int64_t v1 = a1; // 0x18028dce0
    int64_t v2; // 0x18028dccc
    int64_t v3; // 0x18028dccc
    int64_t v4; // 0x18028dccc
    if (g1364 == 0) {
        int64_t v5 = function_18028da60(0, "AreFileApisANSI", &g570, &g571, (int64_t)&g1381); // 0x18028dcf9
        v1 = 0;
        v4 = (int64_t)"AreFileApisANSI";
        v2 = &g570;
        v3 = &g571;
        if (v5 == 0) {
            // 0x18028dd0c
            return 1;
        }
    }
    // 0x18028dd03
    return function_18029d4a0(v1, v4, v2, v3);
}

// Address range: 0x18028dd18 - 0x18028ddd9
int64_t function_18028dd18(int64_t a1, int64_t dwCmpFlags, int64_t lpString1, int64_t cchCount1, int64_t lpString2, int64_t cchCount2, int64_t a7, int64_t a8, int64_t a9) {
    // 0x18028dd18
    int64_t result; // 0x18028dd18
    if (function_18028da28() == 0) {
        int64_t Locale = function_18028e31c(a1, 0); // 0x18028dd97
        result = CompareStringW((int32_t)Locale, (int32_t)dwCmpFlags, (int16_t *)lpString1, (int32_t)cchCount1, (int16_t *)lpString2, (int32_t)cchCount2);
    } else {
        // 0x18028dd41
        result = function_18029d4a0(a1, dwCmpFlags & 0xffffffff, lpString1, cchCount1 & 0xffffffff);
    }
    // 0x18028ddc4
    return result;
}

// Address range: 0x18028dddc - 0x18028de80
int64_t function_18028dddc(int64_t a1, int64_t a2, uint32_t a3, uint32_t a4) {
    int64_t v1 = a1; // 0x18028dde6
    if (g1366 != -1) {
        // 0x18028de05
        if (g1366 != 0) {
            // 0x18028de70
            return function_18029d4a0(a1, a2 & 0xffffffff, (int64_t)a3, (int64_t)a4);
        }
        // 0x18028de0a
        int64_t v2; // 0x18028dddc
        int64_t v3 = function_18028da60(g1366 + 2 & 0xffffffff, "EnumSystemLocalesEx", &g572, (int64_t *)"EnumSystemLocalesEx", v2); // 0x18028de22
        if (v3 != 0) {
            // 0x18028de70
            return function_18029d4a0(v1, a2 & 0xffffffff, (int64_t)a3, (int64_t)a4);
        }
    }
    int64_t v4 = &v1; // bp-24, 0x18028de45
    int64_t v5 = 4; // bp-36, 0x18028de5e
    int64_t v6 = 4; // bp-32, 0x18028de67
    int64_t v7; // bp-40, 0x18028dddc
    int64_t result = function_18028d9cc(&v7, &v6, &v4, &v5, 4, 4, &v1); // 0x18028de6b
    // 0x18028de70
    return result;
}

// Address range: 0x18028de80 - 0x18028de87
int32_t function_18028de80(void (*lpCallback)(int64_t *)) {
    // 0x18028de80
    return FlsAlloc(lpCallback);
}

// Address range: 0x18028de88 - 0x18028de8f
bool function_18028de88(int32_t dwFlsIndex) {
    // 0x18028de88
    return FlsFree(dwFlsIndex);
}

// Address range: 0x18028de90 - 0x18028de97
int64_t * function_18028de90(int32_t dwFlsIndex) {
    // 0x18028de90
    return FlsGetValue(dwFlsIndex);
}

// Address range: 0x18028de98 - 0x18028dea2
int64_t function_18028de98(int32_t a1) {
    // 0x18028de98
    return g1367;
}

// Address range: 0x18028dea4 - 0x18028deab
bool function_18028dea4(int32_t dwFlsIndex, int64_t * lpFlsData) {
    // 0x18028dea4
    return FlsSetValue(dwFlsIndex, lpFlsData);
}

// Address range: 0x18028deac - 0x18028df71
int64_t function_18028deac(int64_t a1, uint32_t dwFlags, int16_t * lpDate, int64_t lpFormat, int64_t lpDateStr, int64_t cchDate, int64_t a7) {
    // 0x18028deac
    int64_t Locale; // 0x18028df35
    int32_t result; // 0x18028df56
    if (g1368 == -1) {
        // 0x18028df30
        Locale = function_18028e31c(a1, 0);
        result = GetDateFormatW((int32_t)Locale, dwFlags, (struct _SYSTEMTIME *)lpDate, (int16_t *)lpFormat, (int16_t *)lpDateStr, (int32_t)cchDate);
        // 0x18028df5c
        return result;
    }
    if (g1368 == 0) {
        // 0x18028dedd
        int64_t v1; // 0x18028deac
        int64_t v2 = function_18028da60(g1368 + 5 & 0xffffffff, "GetDateFormatEx", &g574, (int64_t *)"GetDateFormatEx", v1); // 0x18028def5
        if (v2 == 0) {
            // 0x18028df30
            Locale = function_18028e31c(a1, 0);
            result = GetDateFormatW((int32_t)Locale, dwFlags, (struct _SYSTEMTIME *)lpDate, (int16_t *)lpFormat, (int16_t *)lpDateStr, (int32_t)cchDate);
            // 0x18028df5c
            return result;
        }
    }
    // 0x18028df5c
    return function_18029d4a0(a1, (int64_t)dwFlags, (int64_t)lpDate, lpFormat);
}

// Address range: 0x18028df74 - 0x18028e008
int64_t function_18028df74(int64_t a1, int64_t LCType, int64_t * lpLCData, int64_t cchData) {
    // 0x18028df74
    int64_t Locale; // 0x18028dfde
    int32_t result; // 0x18028dfed
    if (g1369 == -1) {
        // 0x18028dfd9
        Locale = function_18028e31c(a1, 0);
        result = GetLocaleInfoW((int32_t)Locale, (int32_t)LCType, (int16_t *)lpLCData, (int32_t)cchData);
        // 0x18028dff3
        return result;
    }
    if (g1369 == 0) {
        // 0x18028dfa5
        int64_t v1; // 0x18028df74
        int64_t v2 = function_18028da60(g1369 + 10 & 0xffffffff, "GetLocaleInfoEx", &g575, (int64_t *)"GetLocaleInfoEx", v1); // 0x18028dfbd
        if (v2 == 0) {
            // 0x18028dfd9
            Locale = function_18028e31c(a1, 0);
            result = GetLocaleInfoW((int32_t)Locale, (int32_t)LCType, (int16_t *)lpLCData, (int32_t)cchData);
            // 0x18028dff3
            return result;
        }
    }
    // 0x18028dff3
    return function_18029d4a0(a1, LCType & 0xffffffff, (int64_t)lpLCData, cchData & 0xffffffff);
}

// Address range: 0x18028e008 - 0x18028e0c0
int64_t function_18028e008(int64_t a1, uint32_t dwFlags, int16_t * lpTime, int64_t lpFormat, int64_t lpTimeStr, int64_t cchTime) {
    // 0x18028e008
    int64_t Locale; // 0x18028e084
    int32_t result; // 0x18028e0a5
    if (g1370 == -1) {
        // 0x18028e07f
        Locale = function_18028e31c(a1, 0);
        result = GetTimeFormatW((int32_t)Locale, dwFlags, (struct _SYSTEMTIME *)lpTime, (int16_t *)lpFormat, (int16_t *)lpTimeStr, (int32_t)cchTime);
        // 0x18028e0ab
        return result;
    }
    if (g1370 == 0) {
        // 0x18028e039
        int64_t v1; // 0x18028e008
        int64_t v2 = function_18028da60(g1370 + 13 & 0xffffffff, "GetTimeFormatEx", &g576, (int64_t *)"GetTimeFormatEx", v1); // 0x18028e051
        if (v2 == 0) {
            // 0x18028e07f
            Locale = function_18028e31c(a1, 0);
            result = GetTimeFormatW((int32_t)Locale, dwFlags, (struct _SYSTEMTIME *)lpTime, (int16_t *)lpFormat, (int16_t *)lpTimeStr, (int32_t)cchTime);
            // 0x18028e0ab
            return result;
        }
    }
    // 0x18028e0ab
    return function_18029d4a0(a1, (int64_t)dwFlags, (int64_t)lpTime, lpFormat);
}

// Address range: 0x18028e0c0 - 0x18028e130
int64_t function_18028e0c0(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = a2 & 0xffffffff; // 0x18028e0d1
    uint32_t v3; // 0x18028e10f
    if (g1371 == -1) {
        // 0x18028e10f
        v3 = GetUserDefaultLCID();
        // 0x18028e125
        return function_18028e1a0((int64_t)v3, v1, v2, 0);
    }
    int64_t v4; // 0x18028e0c0
    int64_t v5; // 0x18028e0c0
    if (g1371 == 0) {
        // 0x18028e0e1
        int64_t v6; // 0x18028e0c0
        int64_t v7 = function_18028da60(g1371 + 14 & 0xffffffff, "GetUserDefaultLocaleName", &g577, (int64_t *)"GetUserDefaultLocaleName", v6); // 0x18028e0f9
        v4 = &g577;
        v5 = (int64_t)"GetUserDefaultLocaleName";
        if (v7 == 0) {
            // 0x18028e10f
            v3 = GetUserDefaultLCID();
            // 0x18028e125
            return function_18028e1a0((int64_t)v3, v1, v2, 0);
        }
    }
    // 0x18028e125
    return function_18029d4a0(v1, v2, v4, v5);
}

// Address range: 0x18028e130 - 0x18028e137
bool function_18028e130(struct _RTL_CRITICAL_SECTION * lpCriticalSection, int32_t dwSpinCount, int32_t Flags) {
    // 0x18028e130
    return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}

// Address range: 0x18028e138 - 0x18028e19f
int64_t function_18028e138(int64_t a1) {
    // 0x18028e138
    if (g1372 == -1) {
        // 0x18028e182
        return IsValidLocale((int32_t)function_18028e31c(a1, 0), 1);
    }
    if (g1372 != 0) {
        // 0x18028e175
        int64_t v1; // 0x18028e138
        int64_t v2; // 0x18028e138
        int64_t v3; // 0x18028e138
        return function_18029d4a0(a1, v3, v1, v2);
    }
    // 0x18028e153
    int64_t v4; // 0x18028e138
    int64_t v5 = function_18028da60(g1372 + 17 & 0xffffffff, "IsValidLocaleName", &g578, (int64_t *)"IsValidLocaleName", v4); // 0x18028e16b
    if (v5 == 0) {
        // 0x18028e182
        return IsValidLocale((int32_t)function_18028e31c(a1, 0), 1);
    }
    // 0x18028e175
    return function_18029d4a0(a1, (int64_t)"IsValidLocaleName", (int64_t)&g578, (int64_t)"IsValidLocaleName");
}

// Address range: 0x18028e1a0 - 0x18028e227
int64_t function_18028e1a0(int64_t a1, int64_t a2, int64_t a3, uint32_t a4) {
    int64_t v1 = a3 & 0xffffffff; // 0x18028e1be
    int64_t v2 = a1 & 0xffffffff; // 0x18028e1c4
    if (g1374 == -1) {
        // 0x18028e212
        return function_18029a378(v2, a2, v1, (int64_t)a4);
    }
    if (g1374 == 0) {
        // 0x18028e1d1
        int64_t v3; // 0x18028e1a0
        int64_t v4 = function_18028da60(g1374 + 19 & 0xffffffff, "LCIDToLocaleName", &g580, (int64_t *)"LCIDToLocaleName", v3); // 0x18028e1e9
        if (v4 == 0) {
            // 0x18028e212
            return function_18029a378(v2, a2, v1, (int64_t)"LCIDToLocaleName");
        }
    }
    // 0x18028e212
    return function_18029d4a0(v2, a2, v1, (int64_t)a4);
}

// Address range: 0x18028e228 - 0x18028e31a
int64_t function_18028e228(int64_t a1, int64_t dwMapFlags, int64_t lpSrcStr, int64_t cchSrc, int64_t lpDestStr, int64_t cchDest, int64_t a7, int64_t a8, int64_t a9) {
    // 0x18028e228
    int64_t Locale; // 0x18028e2d8
    int32_t result; // 0x18028e2ff
    if (g1373 == -1) {
        // 0x18028e2d3
        Locale = function_18028e31c(a1, 0);
        result = LCMapStringW((int32_t)Locale, (int32_t)dwMapFlags, (int16_t *)lpSrcStr, (int32_t)cchSrc, (int16_t *)lpDestStr, (int32_t)cchDest);
        // 0x18028e305
        return result;
    }
    if (g1373 == 0) {
        // 0x18028e259
        int64_t v1; // 0x18028e228
        int64_t v2 = function_18028da60(g1373 + 18 & 0xffffffff, "LCMapStringEx", &g579, (int64_t *)"LCMapStringEx", v1); // 0x18028e272
        if (v2 == 0) {
            // 0x18028e2d3
            Locale = function_18028e31c(a1, 0);
            result = LCMapStringW((int32_t)Locale, (int32_t)dwMapFlags, (int16_t *)lpSrcStr, (int32_t)cchSrc, (int16_t *)lpDestStr, (int32_t)cchDest);
            // 0x18028e305
            return result;
        }
    }
    // 0x18028e305
    return function_18029d4a0(a1, dwMapFlags & 0xffffffff, lpSrcStr, cchSrc & 0xffffffff);
}

// Address range: 0x18028e31c - 0x18028e37e
int64_t function_18028e31c(int64_t a1, uint32_t a2) {
    // 0x18028e31c
    if (g1375 == -1) {
        // 0x18028e373
        return function_18029a460(a1);
    }
    int64_t v1; // 0x18028e31c
    int64_t v2; // 0x18028e31c
    if (g1375 == 0) {
        // 0x18028e33d
        int64_t v3; // 0x18028e31c
        int64_t v4 = function_18028da60(g1375 + 20 & 0xffffffff, "LocaleNameToLCID", &g581, (int64_t *)"LocaleNameToLCID", v3); // 0x18028e355
        v1 = &g581;
        v2 = (int64_t)"LocaleNameToLCID";
        if (v4 == 0) {
            // 0x18028e373
            return function_18029a460(a1);
        }
    }
    // 0x18028e373
    return function_18029d4a0(a1, (int64_t)a2, v1, v2);
}

// Address range: 0x18028e380 - 0x18028e3d0
int64_t function_18028e380(int64_t a1) {
    // 0x18028e380
    if (g1376 == -1) {
        // 0x18028e3c8
        return 0;
    }
    if (g1376 != 0) {
        // 0x18028e3bc
        int64_t v1; // 0x18028e380
        int64_t v2; // 0x18028e380
        int64_t v3; // 0x18028e380
        return function_18029d4a0(a1 & 0xffffffff, v3, v1, v2);
    }
    // 0x18028e39a
    int64_t v4; // 0x18028e380
    int64_t v5 = function_18028da60((int64_t)(g1376 + 24), "RoInitialize", &g582, (int64_t *)"RoInitialize", v4); // 0x18028e3b2
    if (v5 == 0) {
        // 0x18028e3c8
        return 0;
    }
    int64_t v6 = &g582;
    return function_18029d4a0(a1 & 0xffffffff, (int64_t)"RoInitialize", v6, (int64_t)"RoInitialize");
}

// Address range: 0x18028e3d0 - 0x18028e412
int64_t function_18028e3d0(void) {
    // 0x18028e3d0
    if (g1377 == -1) {
        // 0x18028e40d
        return -1;
    }
    int64_t v1; // 0x18028e3d0
    int64_t v2; // 0x18028e3d0
    int64_t v3; // 0x18028e3d0
    int64_t v4; // 0x18028e3d0
    if (g1377 == 0) {
        int64_t v5 = g1377 + 25 & 0xffffffff; // 0x18028e3fb
        int64_t v6 = function_18028da60(v5, "RoUninitialize", &g583, &g584, (int64_t)&g1381); // 0x18028e3fe
        v3 = v5;
        v4 = (int64_t)"RoUninitialize";
        v1 = &g583;
        v2 = &g584;
        if (v6 == 0) {
            // 0x18028e40d
            return 0;
        }
    }
    // 0x18028e40d
    return function_18029d4a0(v3, v4, v1, v2);
}

// Address range: 0x18028e414 - 0x18028e474
int64_t function_18028e414(int64_t a1, int64_t a2) {
    int64_t v1 = a1; // 0x18028e42e
    int64_t v2 = a2; // 0x18028e42e
    if (g1380 != -1) {
        if (g1380 != 0) {
            // 0x18028e457
            int64_t v3; // 0x18028e414
            int64_t v4; // 0x18028e414
            return function_18029d4a0(a1, a2 & 0xffffffff, v3, v4);
        }
        // 0x18028e435
        v1 = g1380 + 31 & 0xffffffff;
        int64_t v5; // 0x18028e414
        int64_t v6 = function_18028da60(v1, "SystemFunction036", &g589, (int64_t *)"SystemFunction036", v5); // 0x18028e44d
        v2 = (int64_t)"SystemFunction036";
        if (v6 != 0) {
            // 0x18028e457
            return function_18029d4a0(a1, a2 & 0xffffffff, (int64_t)&g589, (int64_t)"SystemFunction036");
        }
    }
    // 0x18028e46b
    function_18027f79c(v1, v2);
    __asm_int3(v1, v2);
    __asm_int3(v1, v2);
    __asm_int3(v1, v2);
    return __asm_int3(v1, v2);
}

// Address range: 0x18028e474 - 0x18028e488
int64_t function_18028e474(void) {
    int64_t v1 = function_18028da28(); // 0x18028e478
    return v1 & -256 | (int64_t)(v1 != 0);
}

// Address range: 0x18028e488 - 0x18028e62f
int64_t function_18028e488(int64_t a1) {
    // 0x18028e488
    if (g1364 == 0) {
        // 0x18028e498
        function_18028da60(0, "AreFileApisANSI", &g570, &g571, (int64_t)&g1381);
    }
    // 0x18028e4b4
    function_18028da28();
    if (g1366 == 0) {
        // 0x18028e4c5
        function_18028da60(g1366 + 2 & 0xffffffff, "EnumSystemLocalesEx", &g572, (int64_t *)"EnumSystemLocalesEx", (int64_t)&g1381);
    }
    // 0x18028e4e2
    if (g1368 == 0) {
        // 0x18028e4ee
        function_18028da60(g1368 + 5 & 0xffffffff, "GetDateFormatEx", &g574, (int64_t *)"GetDateFormatEx", (int64_t)&g1381);
    }
    // 0x18028e50b
    if (g1369 == 0) {
        // 0x18028e517
        function_18028da60(g1369 + 10 & 0xffffffff, "GetLocaleInfoEx", &g575, (int64_t *)"GetLocaleInfoEx", (int64_t)&g1381);
    }
    // 0x18028e534
    if (g1370 == 0) {
        // 0x18028e540
        function_18028da60(g1370 + 13 & 0xffffffff, "GetTimeFormatEx", &g576, (int64_t *)"GetTimeFormatEx", (int64_t)&g1381);
    }
    // 0x18028e55d
    if (g1371 == 0) {
        // 0x18028e569
        function_18028da60(g1371 + 14 & 0xffffffff, "GetUserDefaultLocaleName", &g577, (int64_t *)"GetUserDefaultLocaleName", (int64_t)&g1381);
    }
    // 0x18028e586
    if (g1372 == 0) {
        // 0x18028e592
        function_18028da60(g1372 + 17 & 0xffffffff, "IsValidLocaleName", &g578, (int64_t *)"IsValidLocaleName", (int64_t)&g1381);
    }
    // 0x18028e5af
    if (g1373 == 0) {
        // 0x18028e5bb
        function_18028da60(g1373 + 18 & 0xffffffff, "LCMapStringEx", &g579, (int64_t *)"LCMapStringEx", (int64_t)&g1381);
    }
    // 0x18028e5d8
    if (g1374 == 0) {
        // 0x18028e5e4
        function_18028da60(g1374 + 19 & 0xffffffff, "LCIDToLocaleName", &g580, (int64_t *)"LCIDToLocaleName", (int64_t)&g1381);
    }
    int64_t result = g1375; // 0x18028e60b
    if (g1375 == 0) {
        // 0x18028e60d
        result = function_18028da60(g1375 + 20 & 0xffffffff, "LocaleNameToLCID", &g581, (int64_t *)"LocaleNameToLCID", (int64_t)&g1381);
    }
    // 0x18028e62a
    return result;
}

// Address range: 0x18028e630 - 0x18028e660
int64_t function_18028e630(void) {
    int32_t lpflOldProtect = 0; // 0x18028e634
    bool v1 = VirtualProtect(&g1364, 256, 2, &lpflOldProtect); // 0x18028e650
    return (v1 ? -256 : 0) | (int64_t)v1;
}

// Address range: 0x18028e660 - 0x18028e6a2
int64_t function_18028e660(void) {
    int64_t v1 = 0; // 0x18028e66f
    if (g1367 != -1) {
        int64_t v2 = g1367; // 0x18028e664
        if (g1367 != 0) {
            // 0x18028e69a
            return v2 & -256 | 1;
        }
        // 0x18028e67a
        v1 = function_18028da60(v2 + 3 & 0xffffffff, "FlsGetValue2", &g573, (int64_t *)"FlsGetValue2", (int64_t)&g1381);
    }
    int64_t v3 = v1;
    // 0x18028e69a
    return v3 & -256 | (int64_t)(v3 != 0);
}

// Address range: 0x18028e6e8 - 0x18028e79a
int64_t function_18028e6e8(void) {
    // 0x18028e6e8
    __acrt_lock(8);
    int64_t v1 = 3; // 0x18028e711
    int64_t v2; // 0x18028e6e8
    if (g1274 == 3) {
        // 0x18028e781
        __acrt_lock2(8, v2);
        return 0;
    }
    int32_t v3 = 0;
    int64_t v4 = 0x100000000 * v1 / 0x20000000; // 0x18028e71d
    int64_t v5 = *(int64_t *)(g1275 + v4); // 0x18028e71d
    int32_t v6 = g1274; // 0x18028e724
    int32_t v7 = v3; // 0x18028e724
    int64_t v8; // 0x18028e6e8
    int64_t v9; // 0x18028e73e
    if (v5 != 0) {
        // 0x18028e728
        v8 = v5;
        v7 = v3;
        if ((*(int32_t *)(v5 + 20) & 0x2000) != 0) {
            // 0x18028e733
            v9 = function_180277978(v5);
            v8 = *(int64_t *)(g1275 + v4);
            v7 = v3 + (int32_t)((int32_t)v9 != -1);
        }
        // 0x18028e74c
        DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)(v8 + 48));
        function_18028acc0(*(int64_t *)(g1275 + v4), v2);
        *(int64_t *)(g1275 + v4) = 0;
        v6 = g1274;
    }
    int32_t v10 = v7;
    int64_t v11 = v1 + 1; // 0x18028e77d
    v1 = v11 & 0xffffffff;
    int32_t result = v10; // 0x18028e711
    while (v6 != (int32_t)v11) {
        // 0x18028e713
        v3 = v10;
        v4 = 0x100000000 * v1 / 0x20000000;
        v5 = *(int64_t *)(g1275 + v4);
        int32_t v12 = v3; // 0x18028e724
        if (v5 != 0) {
            // 0x18028e728
            v8 = v5;
            v7 = v3;
            if ((*(int32_t *)(v5 + 20) & 0x2000) != 0) {
                // 0x18028e733
                v9 = function_180277978(v5);
                v8 = *(int64_t *)(g1275 + v4);
                v7 = v3 + (int32_t)((int32_t)v9 != -1);
            }
            // 0x18028e74c
            DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)(v8 + 48));
            function_18028acc0(*(int64_t *)(g1275 + v4), v2);
            *(int64_t *)(g1275 + v4) = 0;
            v6 = g1274;
            v12 = v7;
        }
        // 0x18028e77d
        v10 = v12;
        v11 = v1 + 1;
        v1 = v11 & 0xffffffff;
        result = v10;
    }
    // 0x18028e781
    __acrt_lock2(8, v2);
    return result;
}

// Address range: 0x18028e79c - 0x18028e7de
int64_t function_18028e79c(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 20); // 0x18028e7a2
    uint32_t v2 = *v1; // 0x18028e7a2
    if ((v2 & 0x2000) == 0) {
        // 0x18028e7d8
        return v2 / 0x2000;
    }
    int32_t result = v2 / 64; // 0x18028e7b9
    if ((v2 & 64) != 0) {
        int64_t * v3 = (int64_t *)(a1 + 8); // 0x18028e7bb
        int64_t v4; // 0x18028e79c
        function_18028acc0(*v3, v4);
        *v1 = *v1 & -321;
        *v3 = 0;
        *(int64_t *)a1 = 0;
        *(int32_t *)(a1 + 16) = 0;
        result = 0;
    }
    // 0x18028e7d8
    return result;
}

// Address range: 0x18028e7e0 - 0x18028e857
int64_t function_18028e7e0(int64_t * a1, int64_t * a2, int64_t * a3, int32_t * a4, int64_t a5, int32_t * a6, int64_t a7) {
    // 0x18028e7e0
    int64_t v1; // 0x18028e7e0
    function_180299e5c((int32_t)v1);
    int64_t v2; // 0x18028e7e0
    int64_t v3 = 0x100000000 * v2;
    int64_t v4 = *(int64_t *)((int64_t)a3 + 8); // 0x18028e806
    int64_t v5 = *(int64_t *)(8 * v3 / 0x4000000000 + (int64_t)&g1307); // 0x18028e820
    int32_t v6; // 0x18028e7e0
    int64_t result; // 0x18028e7e0
    if ((*(char *)(72 * (v2 & 63) + 56 + v5) & 1) == 0) {
        // 0x18028e835
        *(char *)(v4 + 48) = 1;
        *(int32_t *)(v4 + 44) = 9;
        int64_t v7; // 0x18028e7e0
        v6 = *(int32_t *)&v7;
        result = 0xffffffff;
    } else {
        // 0x18028e82c
        int64_t v8; // 0x18028e7e0
        v6 = v8;
        result = function_18028e9b4(v3 / 0x100000000, v4) & 0xffffffff;
    }
    // 0x18028e843
    function_180299f44(v6);
    return result;
}

// Address range: 0x18028e858 - 0x18028e919
int64_t function_18028e858(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x18028e858
    int64_t v3 = v2; // 0x18028e858
    uint32_t v4 = (int32_t)v2; // 0x18028e866
    if (v4 == -2) {
        // 0x18028e86c
        *(char *)(a2 + 56) = 1;
        *(int32_t *)(a2 + 52) = 0;
        *(char *)(a2 + 48) = 1;
        *(int32_t *)(a2 + 44) = 9;
        // 0x18028e914
        return 0xffffffff;
    }
    if ((int32_t)a1 >= 0) {
        // 0x18028e888
        if (g1308 > v4) {
            int64_t v5 = *(int64_t *)(8 * v1 / 0x4000000000 + (int64_t)&g1307); // 0x18028e8a9
            if ((*(char *)(72 * (v2 & 63) + 56 + v5) & 1) != 0) {
                int64_t v6 = v2; // bp+32, 0x18028e8be
                int64_t v7 = v2; // bp-40, 0x18028e8c8
                int32_t * v8 = (int32_t *)&v3; // bp-32, 0x18028e8d7
                int64_t v9; // bp+24, 0x18028e858
                int64_t result = function_18028e7e0(&v9, &v7, (int64_t *)&v8, (int32_t *)&v6, v2, (int32_t *)&v3, a2); // 0x18028e8e1
                // 0x18028e914
                return result;
            }
        }
    }
    // 0x18028e8e8
    *(char *)(a2 + 56) = 1;
    *(int32_t *)(a2 + 52) = 0;
    *(char *)(a2 + 48) = 1;
    *(int32_t *)(a2 + 44) = 9;
    function_18027175c(0, 0, 0, 0, 0, (int64_t *)a2);
    // 0x18028e914
    return 0xffffffff;
}

// Address range: 0x18028e91c - 0x18028e9b4
int64_t function_18028e91c(int64_t a1) {
    int64_t v1 = 0; // bp-72, 0x18028e92e
    if (g1298 == 0) {
        // 0x18028e94c
        int128_t v2; // 0x18028e91c
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x18028e95c
    return function_18028e9b4(a1, (int64_t)&v1) & 0xffffffff;
}

// Address range: 0x18028e9b4 - 0x18028ea81
int64_t function_18028e9b4(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x18028e9c3
    int64_t v3 = v2 & 0xffffffff; // 0x18028e9c9
    int64_t errorCode = 0; // 0x18028e9d4
    int32_t v4; // 0x18028e9e6
    if (function_18029a168(v3) != -1) {
        // 0x18028e9da
        v4 = v2;
        if (v4 != 1) {
            goto lab_0x18028e9f4;
        } else {
            // 0x18028e9eb
            if ((*(char *)(g1307 + 200) & (char)v2) != 0) {
                goto lab_0x18028ea01;
            } else {
                goto lab_0x18028e9f4;
            }
        }
    } else {
        goto lab_0x18028ea34;
    }
  lab_0x18028ea34:
    // 0x18028ea34
    function_18029a0ac(v3, a2);
    int64_t v5 = *(int64_t *)(8 * v1 / 0x4000000000 + (int64_t)&g1307); // 0x18028ea53
    *(char *)(72 * (v2 & 63) + 56 + v5) = 0;
    int64_t result = 0; // 0x18028ea5e
    if (errorCode != 0) {
        // 0x18028ea60
        function_1802798d0(errorCode, a2);
        result = 0xffffffff;
    }
    // 0x18028ea71
    return result;
  lab_0x18028e9f4:
    if (v4 != 2) {
        goto lab_0x18028ea18;
    } else {
        // 0x18028e9f8
        if ((*(char *)(g1307 + 128) & 1) == 0) {
            goto lab_0x18028ea18;
        } else {
            goto lab_0x18028ea01;
        }
    }
  lab_0x18028ea18:;
    int64_t hObject = function_18029a168(v3); // 0x18028ea1a
    errorCode = 0;
    if (!CloseHandle((int64_t *)hObject)) {
        // 0x18028ea2c
        errorCode = GetLastError();
    }
    goto lab_0x18028ea34;
  lab_0x18028ea01:;
    int64_t v6 = function_18029a168(2); // 0x18028ea01
    errorCode = 0;
    if (function_18029a168(1) == v6) {
        goto lab_0x18028ea34;
    } else {
        goto lab_0x18028ea18;
    }
}

// Address range: 0x18028ea84 - 0x18028eada
int64_t function_18028ea84(int64_t * a1) {
    // 0x18028ea84
    *a1 = 0;
    __acrt_lock(8);
    int64_t v1; // 0x18028ea84
    int64_t v2 = *(int64_t *)function_18028eaf8(&v1); // 0x18028eaa6
    *a1 = v2;
    if (v2 != 0) {
        // 0x18028eab1
        *(int32_t *)(v2 + 16) = 0;
        *(int64_t *)(v2 + 40) = 0;
        *(int64_t *)v2 = 0;
        *(int64_t *)(v2 + 8) = 0;
        *(int32_t *)(v2 + 24) = -1;
    }
    // 0x18028eac7
    int64_t v3; // 0x18028ea84
    __acrt_lock2(8, v3);
    return (int64_t)a1;
}

// Address range: 0x18028eadc - 0x18028eaf8
int64_t function_18028eadc(int64_t a1) {
    // 0x18028eadc
    *(int32_t *)(a1 + 24) = -1;
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int32_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 28) = 0;
    *(int64_t *)(a1 + 40) = 0;
    int32_t * v1 = (int32_t *)(a1 + 20); // 0x18028eaf4
    *v1 = 0;
    return (int64_t)*v1;
}

// Address range: 0x18028eaf8 - 0x18028ebe1
int64_t function_18028eaf8(int64_t * a1) {
    // 0x18028eaf8
    if (8 * (int64_t)&g1273 == 0) {
        // 0x18028eb78
        *a1 = 0;
        return (int64_t)a1;
    }
    int64_t v1 = g1275 + 24; // 0x18028eb6b
    int64_t * v2 = (int64_t *)v1;
    int64_t v3 = *v2; // 0x18028eb2b
    while (v3 != 0) {
        int64_t v4 = v3 + 20; // 0x18028eb33
        int32_t * v5 = (int32_t *)v4; // 0x18028eb33
        if ((*v5 & 0x2000) == 0) {
            struct _RTL_CRITICAL_SECTION * lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)v3; // 0x18028eb41
            EnterCriticalSection(lpCriticalSection);
            __asm_prefetchw(*(char *)v4);
            int32_t v6 = *v5;
            *v5 = v6 | 0x2000;
            int64_t v7 = v3; // 0x18028eb61
            if ((v6 & 0x2000) == 0) {
                // 0x18028eb78
                *a1 = v7;
                return (int64_t)a1;
            }
            // 0x18028eb63
            LeaveCriticalSection(lpCriticalSection);
        }
        // 0x18028eb6b
        v1 += 8;
        if (v1 == g1275 + 8 * (int64_t)&g1273 + 24) {
            // 0x18028eb78
            *a1 = 0;
            return (int64_t)a1;
        }
        v2 = (int64_t *)v1;
        v3 = *v2;
    }
    // 0x18028eb95
    *v2 = (int64_t)_calloc_base(1, 88);
    function_18028acc0(0, 88);
    int64_t v8 = *v2; // 0x18028ebac
    int64_t lpCriticalSection2 = 0; // 0x18028ebb2
    if (v8 != 0) {
        // 0x18028ebb4
        *(int32_t *)(v8 + 24) = -1;
        InitializeCriticalSectionEx((struct _RTL_CRITICAL_SECTION *)(*v2 + 48), 4000, 0);
        lpCriticalSection2 = *v2;
        int32_t * v9 = (int32_t *)(lpCriticalSection2 + 20); // 0x18028ebcf
        *v9 = *v9 | 0x2000;
        EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
    }
    // 0x18028eb78
    *a1 = lpCriticalSection2;
    return (int64_t)a1;
}

// Address range: 0x18028ebe4 - 0x18028ec6f
int64_t function_18028ebe4(int64_t * a1, int32_t * a2, int64_t * a3, int32_t * a4, int32_t * a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = v1;
    int64_t v3; // 0x18028ebe4
    function_180299e5c((int32_t)v3);
    int64_t v4; // 0x18028ebe4
    int64_t v5 = 0x100000000 * v4;
    int64_t v6 = v5 / 0x100000000; // 0x18028ec04
    int32_t v7 = (int32_t)v4 & 63; // 0x18028ec18
    int64_t v8 = *(int64_t *)(8 * v5 / 0x4000000000 + (int64_t)&g1307); // 0x18028ec1f
    v2 = v1;
    int64_t hFile = v6; // 0x18028ec28
    if ((*(char *)(v8 + (int64_t)(72 * v7 + 56)) & 1) != 0) {
        // 0x18028ec2a
        hFile = function_18029a168(v6);
        if (FlushFileBuffers((int64_t *)hFile)) {
            // 0x18028ec5b
            function_180299f44((int32_t)v1);
            return 0;
        }
        int32_t errorCode = GetLastError(); // 0x18028ec3e
        *(int32_t *)function_1802798f4(hFile) = errorCode;
    }
    int64_t v9 = function_180279918(hFile, (int64_t)(9 * v7), (int64_t)&g1307, v2); // 0x18028ec4d
    *(int32_t *)v9 = 9;
    // 0x18028ec5b
    function_180299f44(*(int32_t *)&v2);
    return 0xffffffff;
}

// Address range: 0x18028ec70 - 0x18028ed01
int64_t function_18028ec70(int64_t a1) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x18028ec70
    int64_t v3 = v2; // 0x18028ec70
    uint32_t v4 = (int32_t)v2; // 0x18028ec7b
    int64_t v5; // 0x18028ec70
    if (v4 == -2) {
        // 0x18028ec80
        int64_t v6; // 0x18028ec70
        *(int32_t *)function_180279918(a1, v2, v6, v5) = 9;
        // 0x18028ecfc
        return 0xffffffff;
    }
    int64_t v7 = a1; // 0x18028ec8f
    int64_t v8; // 0x18028ec70
    if ((int32_t)a1 >= 0) {
        // 0x18028ec91
        v7 = a1;
        if (g1308 > v4) {
            int64_t v9 = v2 & 63; // 0x18028eca3
            int64_t v10 = *(int64_t *)(8 * v1 / 0x4000000000 + (int64_t)&g1307); // 0x18028ecb1
            v8 = &g1307;
            v7 = 9 * v9;
            if ((*(char *)(72 * v9 + 56 + v10) & 1) != 0) {
                int64_t v11 = v2; // bp+24, 0x18028ecc1
                int64_t v12 = v2; // bp+32, 0x18028ecc5
                int32_t * v13 = (int32_t *)&v3; // bp-24, 0x18028ecd3
                int64_t v14; // bp+16, 0x18028ec70
                int64_t result = function_18028ebe4(&v14, (int32_t *)&v12, (int64_t *)&v13, (int32_t *)&v11, (int32_t *)&v3); // 0x18028ece2
                // 0x18028ecfc
                return result;
            }
        }
    }
    // 0x18028ece9
    *(int32_t *)function_180279918(v7, v2, v8, v5) = 9;
    function_180271814(v7, v2, v8, v5);
    // 0x18028ecfc
    return 0xffffffff;
}

// Address range: 0x18028ed04 - 0x18028f197
int64_t function_18028ed04(int64_t * a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(8 * 0x100000000 * a2 / 0x4000000000 + 0x180329600); // 0x18028ed68
    int64_t v2 = 72 * (a2 & 63); // 0x18028ed70
    uint32_t v3 = GetConsoleOutputCP(); // 0x18028ed83
    if (*(char *)(a5 + 40) == 0) {
        // 0x18028ed98
        function_1802766e0(a5);
    }
    int64_t v4 = (int64_t)a1;
    uint64_t v5 = (a4 & 0xffffffff) + a3; // 0x18028ed7c
    int64_t * v6 = (int64_t *)(a5 + 24); // 0x18028eda4
    *a1 = 0;
    int32_t * v7 = (int32_t *)(v4 + 8); // 0x18028edb3
    *v7 = 0;
    if (v5 <= a3) {
        // 0x18028f16d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8 = v2 + 62;
    int64_t v9; // bp-88, 0x18028ed04
    int64_t v10 = &v9;
    char v11; // bp-80, 0x18028ed04
    int64_t v12 = &v11;
    int32_t v13; // bp-196, 0x18028ed04
    int64_t v14 = &v13;
    int64_t * v15 = (int64_t *)a5;
    int64_t lpBuffer; // bp-72, 0x18028ed04
    int64_t v16 = &lpBuffer;
    int64_t * hFile = (int64_t *)*(int64_t *)(v2 + 40 + *v1);
    int32_t * v17 = (int32_t *)(v4 + 4);
    int64_t v18 = v2 + 61;
    int32_t v19 = 0; // 0x18028ed04
    int64_t v20 = a3; // 0x18028f00c
    int64_t v21; // 0x18028ed04
    int64_t v22; // 0x18028ed04
    int64_t v23; // 0x18028ed04
    uint64_t v24; // 0x18028ed04
    int64_t v25; // 0x18028ed04
    int64_t v26; // 0x18028ed04
    int64_t v27; // 0x18028ed04
    int64_t v28; // 0x18028ed04
    int64_t v29; // 0x18028ed04
    char lpBuffer2; // bp-200, 0x18028ed04
    int64_t v30; // 0x18028ed04
    int64_t v31; // 0x18028ed04
    unsigned char v32; // 0x18028efae
    int64_t v33; // 0x18028ef1e
    int64_t v34; // 0x18028ee45
    while (true) {
      lab_0x18028edcd:
        // 0x18028edcd
        v28 = v20;
        char * v35 = (char *)v28;
        lpBuffer2 = *v35;
        v13 = 0;
        v31 = *v1;
        if (*(int32_t *)(*v6 + 12) != 0xfde9) {
            char * v36 = (char *)(v18 + v31); // 0x18028ef83
            char v37 = *v36; // 0x18028ef83
            if ((v37 & 4) == 0) {
                // 0x18028efae
                v32 = *v35;
                v26 = 1;
                v30 = v28;
                if (*(int16_t *)(*(int64_t *)*v6 + 2 * (int64_t)v32) < 0) {
                    int64_t v38 = v28 + 1; // 0x18028efc0
                    if (v38 >= v5) {
                        // break -> 0x18028f14a
                        return 0;
                    }
                    // 0x18028efce
                    v29 = v38;
                    v23 = 1;
                    if ((int32_t)function_18028bd28(v14, v28, 2, v15) == -1) {
                      lab_0x18028f16d:
                        // 0x18028f16d
                        return function_18026ad50((int64_t)g731);
                    }
                    goto lab_0x18028f00c;
                } else {
                    goto lab_0x18028eff7;
                }
            } else {
                // 0x18028ef8d
                v11 = *(char *)(v31 + v8);
                *v36 = v37 & -5;
                v26 = 2;
                v30 = v12;
                goto lab_0x18028eff7;
            }
        } else {
            int64_t v39 = v31 + v8;
            int64_t v40 = 0;
            int64_t v41 = 0;
            int64_t v42 = v39;
            int64_t v43; // 0x18028ed04
            int64_t v44; // 0x18028ed04
            while (*(char *)v42 != 0) {
                int64_t v45 = v41 + 1 & 0xffffffff; // 0x18028ee08
                int64_t v46 = v40 + 1; // 0x18028ee0a
                int64_t v47 = v42 + 1; // 0x18028ee14
                v43 = 5;
                v44 = v45;
                if (v46 >= 5) {
                    goto lab_0x18028ee1f;
                }
                v40 = v46;
                v41 = v45;
                v42 = v47;
            }
            // 0x18028ee16
            v43 = v40;
            v44 = v41;
            int32_t v48; // bp-168, 0x18028ed04
            if (v40 == 0) {
                unsigned char v49 = *v35; // 0x18028ef0a
                char v50 = *(char *)((int64_t)v49 + 0x18031d5d0); // 0x18028ef0d
                uint64_t v51 = (int64_t)v50; // 0x18028ef0d
                v33 = v5 - v28;
                if (v33 <= v51) {
                    if (v33 < 1) {
                        // 0x18028f144
                        *v17 = *v17 + (int32_t)v33;
                        return function_18026ad50((int64_t)g731);
                    } else {
                        // 0x18028f123
                        *(char *)v39 = v49;
                        v22 = 1;
                        v27 = 0;
                        if (v33 == 1) {
                            // 0x18028f144
                            *v17 = *v17 + (int32_t)v33;
                            return function_18026ad50((int64_t)g731);
                        } else {
                            goto lab_0x18028f123_2;
                        }
                    }
                }
                // 0x18028ef2d
                v48 = 0;
                int64_t v52 = v28; // bp-120, 0x18028ef31
                int64_t v53 = v50 == 3 ? 2 : 1; // 0x18028ef3d
                int64_t v54 = function_18028c228(&v13, &v52, v53, (int64_t *)&v48, a5); // 0x18028ef56
                if (v54 == -1) {
                    // 0x18028f16d
                    return function_18026ad50((int64_t)g731);
                }
                // 0x18028ef65
                v29 = v28 + v51;
                v23 = v53;
            } else {
              lab_0x18028ee1f:
                // 0x18028ee1f
                v24 = v43;
                char v55 = *(char *)((int64_t)*(char *)v39 + 0x18031d5d0); // 0x18028ee2d
                int64_t v56 = (int64_t)v55 + 1; // 0x18028ee36
                int64_t v57 = v56 - v44; // 0x18028ee3c
                v48 = v57;
                v34 = v5 - v28;
                int64_t v58 = 0x100000000 * v57;
                int64_t v59 = v58 / 0x100000000; // 0x18028ee48
                int64_t v60 = 0; // 0x18028ee4e
                int64_t v61 = v39; // 0x18028ee4e
                if (v59 > v34) {
                    if (v34 < 1) {
                        // 0x18028f111
                        *v17 = *v17 + (int32_t)v34;
                        return function_18026ad50((int64_t)g731);
                    } else {
                        // 0x18028f0e6
                        *(char *)(v39 + v24) = *v35;
                        v21 = 1;
                        v25 = v24;
                        if (v34 == 1) {
                            // 0x18028f111
                            *v17 = *v17 + (int32_t)v34;
                            return function_18026ad50((int64_t)g731);
                        } else {
                            goto lab_0x18028f0f0;
                        }
                    }
                }
                char v62 = *(char *)v61; // 0x18028ee6e
                int64_t v63; // bp-87, 0x18028ed04
                *(char *)((int64_t)&v63 - 1 + v60) = v62;
                v60++;
                v61++;
                while (v60 < v24) {
                    // 0x18028ee6e
                    v62 = *(char *)v61;
                    *(char *)((int64_t)&v63 - 1 + v60) = v62;
                    v60++;
                    v61++;
                }
                if (v58 >= 0x100000000) {
                    // 0x18028ee84
                    function_18029d4e0(v24 + v10, v28, v59, v59);
                }
                for (int64_t i = 0; i < v24; i++) {
                    // 0x18028eea4
                    *(char *)(i + v8 + *v1) = 0;
                }
                int64_t v64 = 0; // bp-136, 0x18028eebd
                int64_t v65 = v10; // bp-128, 0x18028eec5
                int64_t v66 = (int32_t)v56 == 4 ? 2 : 1; // 0x18028eed2
                if (function_18028c228(&v13, &v65, v66, &v64, a5) == -1) {
                    // 0x18028f16d
                    return function_18026ad50((int64_t)g731);
                }
                // 0x18028eefa
                v29 = v28 + (int64_t)(v48 - 1);
                v23 = v66;
            }
            goto lab_0x18028f00c;
        }
    }
    // 0x18028f14a
    *(char *)(v31 + v8) = v32;
    char * v67 = (char *)(v18 + *v1); // 0x18028f157
    *v67 = *v67 | 4;
    *v17 = v19 + 1;
    // 0x18028f16d
    return function_18026ad50((int64_t)g731);
  lab_0x18028f00c:;
    uint32_t nNumberOfBytesToWrite = (int32_t)function_18028d8d8((int64_t)v3, 0, v14, (int32_t)v23, v16, 5); // 0x18028f03e
    if (nNumberOfBytesToWrite == 0) {
        // 0x18028f16d
        return function_18026ad50((int64_t)g731);
    }
    int32_t lpNumberOfBytesWritten = 0; // bp-192, 0x18028f046
    if (!WriteFile(hFile, &lpBuffer, nNumberOfBytesToWrite, &lpNumberOfBytesWritten, NULL)) {
        // 0x18028f165
        *(int32_t *)a1 = GetLastError();
        return function_18026ad50((int64_t)g731);
    }
    // 0x18028f06e
    v20 = v29 + 1;
    int32_t v68 = *v7 - (int32_t)a3 + (int32_t)v20; // 0x18028f074
    *v17 = v68;
    if (lpNumberOfBytesWritten < nNumberOfBytesToWrite) {
        // 0x18028f16d
        return function_18026ad50((int64_t)g731);
    }
    int32_t v69 = v68; // 0x18028f087
    if (lpBuffer2 == 10) {
        // 0x18028f089
        lpBuffer2 = 13;
        if (!WriteFile(hFile, (int64_t *)&lpBuffer2, 1, &lpNumberOfBytesWritten, NULL)) {
            // 0x18028f165
            *(int32_t *)a1 = GetLastError();
            return function_18026ad50((int64_t)g731);
        }
        // 0x18028f0b4
        if (lpNumberOfBytesWritten == 0) {
            // 0x18028f16d
            return function_18026ad50((int64_t)g731);
        }
        // 0x18028f0be
        *v7 = *v7 + 1;
        int32_t v70 = *v17 + 1; // 0x18028f0c1
        *v17 = v70;
        v69 = v70;
    }
    // 0x18028f0c7
    v19 = v69;
    if (v20 >= v5) {
        // 0x18028f16d
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x18028edcd;
  lab_0x18028eff7:
    // 0x18028eff7
    v29 = v28;
    v23 = 1;
    if ((int32_t)function_18028bd28(v14, v30, v26, v15) == -1) {
        // 0x18028f16d
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x18028f00c;
  lab_0x18028f123_2:;
    int64_t v71 = v27 + 1; // 0x18028f139
    *(char *)(*v1 + v8 + v71) = *(char *)(v71 + v28);
    int64_t v72 = (v22 & 0xffffffff) + 1; // 0x18028f137
    v22 = v72;
    v27 = v71;
    if (0x100000000 * v72 / 0x100000000 < v33) {
        goto lab_0x18028f123_2;
    } else {
        // 0x18028f144
        *v17 = *v17 + (int32_t)v33;
        goto lab_0x18028f16d;
    }
  lab_0x18028f0f0:;
    int64_t v73 = v25 + 1; // 0x18028f106
    char v74 = *(char *)(v28 - v24 + v73); // 0x18028f0fc
    *(char *)(*v1 + v8 + v73) = v74;
    int64_t v75 = (v21 & 0xffffffff) + 1; // 0x18028f104
    v21 = v75;
    v25 = v73;
    if (0x100000000 * v75 / 0x100000000 < v34) {
        goto lab_0x18028f0f0;
    } else {
        // 0x18028f111
        *v17 = *v17 + (int32_t)v34;
        goto lab_0x18028f16d;
    }
}

// Address range: 0x18028f198 - 0x18028f29f
int64_t function_18028f198(int64_t * a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // bp-24, 0x18028f198
    int64_t v3 = (int64_t)&v2 - __chkstk(v1, a2, a3); // 0x18028f1b0
    int64_t * v4 = (int64_t *)(v3 + 0x1440); // 0x18028f1bd
    *v4 = v3 ^ (int64_t)g731;
    uint64_t v5 = (a4 & 0xffffffff) + a3; // 0x18028f1e0
    int64_t v6 = *(int64_t *)(8 * 0x100000000 * a2 / 0x4000000000 + (int64_t)&g1307); // 0x18028f1e6
    int64_t hFile = *(int64_t *)(72 * (a2 & 63) + 40 + v6); // 0x18028f1ee
    *a1 = 0;
    int32_t * v7 = (int32_t *)(v1 + 8); // 0x18028f1f8
    *v7 = 0;
    if (v5 <= a3) {
        // 0x18028f274
        return function_18026ad50(*v4 ^ v3);
    }
    int64_t lpBuffer = v3 + 64; // 0x18028f200
    int32_t * lpNumberOfBytesWritten = (int32_t *)(v3 + 48); // 0x18028f22e
    int32_t * v8 = (int32_t *)(v1 + 4);
    int64_t v9 = a3;
    int64_t v10 = lpBuffer;
    int64_t v11 = v10; // 0x18028f208
    int64_t v12 = v9; // 0x18028f208
    int64_t v13; // 0x18028f198
    char v14; // 0x18028f20a
    int64_t v15; // 0x18028f20c
    int64_t v16; // 0x18028f21e
    while (v9 < v5) {
        // 0x18028f20a
        v14 = *(char *)v9;
        v13 = v10;
        if (v14 == 10) {
            // 0x18028f213
            *v7 = *v7 + 1;
            *(char *)v10 = 13;
            v13 = v10 + 1;
        }
        // 0x18028f21c
        v15 = v9 + 1;
        *(char *)v13 = v14;
        v16 = v13 + 1;
        v11 = v16;
        v12 = v15;
        if (v16 >= v3 + 0x143f) {
            // break -> 0x18028f22e
            return 0;
        }
        v9 = v15;
        v10 = v16;
        v11 = v10;
        v12 = v9;
    }
    // 0x18028f22e
    *lpNumberOfBytesWritten = 0;
    *(int64_t *)(v3 + 32) = 0;
    uint32_t nNumberOfBytesToWrite = (int32_t)(v11 - lpBuffer); // 0x18028f24a
    while (WriteFile((int64_t *)hFile, (int64_t *)lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, (struct _OVERLAPPED *)&g1381)) {
        uint32_t v17 = *lpNumberOfBytesWritten; // 0x18028f25a
        *v8 = *v8 + v17;
        if (v12 < v5 != v17 >= nNumberOfBytesToWrite) {
            // 0x18028f274
            return function_18026ad50(*v4 ^ v3);
        }
        v9 = v12;
        v10 = lpBuffer;
        v11 = v10;
        v12 = v9;
        while (v9 < v5) {
            // 0x18028f20a
            v14 = *(char *)v9;
            v13 = v10;
            if (v14 == 10) {
                // 0x18028f213
                *v7 = *v7 + 1;
                *(char *)v10 = 13;
                v13 = v10 + 1;
            }
            // 0x18028f21c
            v15 = v9 + 1;
            *(char *)v13 = v14;
            v16 = v13 + 1;
            v11 = v16;
            v12 = v15;
            if (v16 >= v3 + 0x143f) {
                // break -> 0x18028f22e
                return 0;
            }
            v9 = v15;
            v10 = v16;
            v11 = v10;
            v12 = v9;
        }
        // 0x18028f22e
        *lpNumberOfBytesWritten = 0;
        *(int64_t *)(v3 + 32) = 0;
        nNumberOfBytesToWrite = (int32_t)(v11 - lpBuffer);
    }
    // 0x18028f26c
    *(int32_t *)a1 = GetLastError();
    // 0x18028f274
    return function_18026ad50(*v4 ^ v3);
}

// Address range: 0x18028f2a0 - 0x18028f3bb
int64_t function_18028f2a0(int64_t * a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // bp-24, 0x18028f2a0
    int64_t v3 = (int64_t)&v2 - __chkstk(v1, a2, a3); // 0x18028f2b8
    int64_t * v4 = (int64_t *)(v3 + 0x1440); // 0x18028f2c5
    *v4 = v3 ^ (int64_t)g731;
    uint64_t v5 = (a4 & 0xffffffff) + a3; // 0x18028f2e8
    int64_t v6 = *(int64_t *)(8 * 0x100000000 * a2 / 0x4000000000 + (int64_t)&g1307); // 0x18028f2ee
    int64_t hFile = *(int64_t *)(72 * (a2 & 63) + 40 + v6); // 0x18028f2f6
    *a1 = 0;
    int32_t * v7 = (int32_t *)(v1 + 8); // 0x18028f300
    *v7 = 0;
    if (v5 <= a3) {
        // 0x18028f390
        return function_18026ad50(*v4 ^ v3);
    }
    int64_t lpBuffer = v3 + 64; // 0x18028f30c
    int32_t * lpNumberOfBytesWritten = (int32_t *)(v3 + 48); // 0x18028f344
    int32_t * v8 = (int32_t *)(v1 + 4);
    int64_t v9 = a3;
    int64_t v10 = lpBuffer;
    int64_t v11 = v10; // 0x18028f314
    int64_t v12 = v9; // 0x18028f314
    int64_t v13; // 0x18028f2a0
    int16_t v14; // 0x18028f316
    int64_t v15; // 0x18028f319
    int64_t v16; // 0x18028f333
    while (v9 < v5) {
        // 0x18028f316
        v14 = *(int16_t *)v9;
        v13 = v10;
        if (v14 == 10) {
            // 0x18028f323
            *v7 = *v7 + 2;
            *(int16_t *)v10 = 13;
            v13 = v10 + 2;
        }
        // 0x18028f330
        v15 = v9 + 2;
        *(int16_t *)v13 = v14;
        v16 = v13 + 2;
        v11 = v16;
        v12 = v15;
        if (v16 >= v3 + 0x143e) {
            // break -> 0x18028f344
            return 0;
        }
        v9 = v15;
        v10 = v16;
        v11 = v10;
        v12 = v9;
    }
    // 0x18028f344
    *lpNumberOfBytesWritten = 0;
    *(int64_t *)(v3 + 32) = 0;
    uint32_t nNumberOfBytesToWrite = (int32_t)(v11 - lpBuffer) & -2; // 0x18028f369
    while (WriteFile((int64_t *)hFile, (int64_t *)lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, (struct _OVERLAPPED *)&g1381)) {
        uint32_t v17 = *lpNumberOfBytesWritten; // 0x18028f376
        *v8 = *v8 + v17;
        if (v12 < v5 != v17 >= nNumberOfBytesToWrite) {
            // 0x18028f390
            return function_18026ad50(*v4 ^ v3);
        }
        v9 = v12;
        v10 = lpBuffer;
        v11 = v10;
        v12 = v9;
        while (v9 < v5) {
            // 0x18028f316
            v14 = *(int16_t *)v9;
            v13 = v10;
            if (v14 == 10) {
                // 0x18028f323
                *v7 = *v7 + 2;
                *(int16_t *)v10 = 13;
                v13 = v10 + 2;
            }
            // 0x18028f330
            v15 = v9 + 2;
            *(int16_t *)v13 = v14;
            v16 = v13 + 2;
            v11 = v16;
            v12 = v15;
            if (v16 >= v3 + 0x143e) {
                // break -> 0x18028f344
                return 0;
            }
            v9 = v15;
            v10 = v16;
            v11 = v10;
            v12 = v9;
        }
        // 0x18028f344
        *lpNumberOfBytesWritten = 0;
        *(int64_t *)(v3 + 32) = 0;
        nNumberOfBytesToWrite = (int32_t)(v11 - lpBuffer) & -2;
    }
    // 0x18028f388
    *(int32_t *)a1 = GetLastError();
    // 0x18028f390
    return function_18026ad50(*v4 ^ v3);
}

// Address range: 0x18028f3bc - 0x18028f530
int64_t function_18028f3bc(int64_t * a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // bp-40, 0x18028f3bc
    int64_t v3 = (int64_t)&v2 - __chkstk(v1, a2, a3); // 0x18028f3d8
    int64_t * v4 = (int64_t *)(v3 + 0x1460); // 0x18028f3e5
    *v4 = v3 ^ (int64_t)g731;
    uint64_t v5 = (a4 & 0xffffffff) + a3; // 0x18028f408
    int64_t v6 = *(int64_t *)(8 * 0x100000000 * a2 / 0x4000000000 + (int64_t)&g1307); // 0x18028f411
    int64_t hFile = *(int64_t *)(72 * (a2 & 63) + 40 + v6); // 0x18028f419
    *a1 = 0;
    *(int32_t *)(v1 + 8) = 0;
    if (v5 <= a3) {
        // 0x18028f501
        return function_18026ad50(*v4 ^ v3);
    }
    int64_t v7 = v3 + 80; // 0x18028f42f
    int64_t v8 = v3 + 1792; // 0x18028f486
    int64_t * v9 = (int64_t *)(v3 + 32); // 0x18028f493
    int32_t * lpNumberOfBytesWritten = (int32_t *)(v3 + 64);
    int64_t v10 = v7;
    int64_t v11 = a3;
    int64_t v12 = v11; // 0x18028f437
    int64_t v13 = v10; // 0x18028f437
    int64_t v14; // 0x18028f3bc
    int16_t v15; // 0x18028f439
    int64_t v16; // 0x18028f43c
    int64_t v17; // 0x18028f454
    while (v11 < v5) {
        // 0x18028f439
        v15 = *(int16_t *)v11;
        v14 = v10;
        if (v15 == 10) {
            // 0x18028f446
            *(int16_t *)v10 = 13;
            v14 = v10 + 2;
        }
        // 0x18028f450
        v16 = v11 + 2;
        *(int16_t *)v14 = v15;
        v17 = v14 + 2;
        v12 = v16;
        v13 = v17;
        if (v17 >= v3 + 1784) {
            // break -> 0x18028f465
            return 0;
        }
        v10 = v17;
        v11 = v16;
        v12 = v11;
        v13 = v10;
    }
    // 0x18028f465
    *(int64_t *)(v3 + 56) = 0;
    *(int64_t *)(v3 + 48) = 0;
    *(int32_t *)(v3 + 40) = 3413;
    *v9 = v8;
    int64_t v18 = function_18028d8d8(0xfde9, 0, v7, (int32_t)((v13 - v7) / 2), (int64_t)&g1381, (int64_t)&g1381); // 0x18028f49d
    uint32_t v19 = (int32_t)v18; // 0x18028f4a4
    int64_t v20 = 0; // 0x18028f4a6
    while (v19 != 0) {
        // 0x18028f42f
        *lpNumberOfBytesWritten = 0;
        *v9 = 0;
        int32_t v21 = v20; // 0x18028f4ce
        bool v22 = WriteFile((int64_t *)hFile, (int64_t *)(v20 + v8), v19 - v21, lpNumberOfBytesWritten, (struct _OVERLAPPED *)&g1381); // 0x18028f4d4
        if (!v22) {
            // break (via goto) -> 0x18028f4f9
            goto lab_0x18028f4f9;
        }
        uint32_t v23 = *lpNumberOfBytesWritten + v21; // 0x18028f4de
        v20 = v23;
        while (v23 < v19) {
            // 0x18028f4ae
            *lpNumberOfBytesWritten = 0;
            *v9 = 0;
            v21 = v20;
            v22 = WriteFile((int64_t *)hFile, (int64_t *)(v20 + v8), v19 - v21, lpNumberOfBytesWritten, (struct _OVERLAPPED *)&g1381);
            if (!v22) {
                // break (via goto) -> 0x18028f4f9
                goto lab_0x18028f4f9;
            }
            // 0x18028f4de
            v23 = *lpNumberOfBytesWritten + v21;
            v20 = v23;
        }
        // 0x18028f4e6
        *(int32_t *)(v1 + 4) = (int32_t)v12 - (int32_t)a3;
        if (v12 >= v5) {
            // 0x18028f501
            return function_18026ad50(*v4 ^ v3);
        }
        v10 = v7;
        v11 = v12;
        v12 = v11;
        v13 = v10;
        while (v11 < v5) {
            // 0x18028f439
            v15 = *(int16_t *)v11;
            v14 = v10;
            if (v15 == 10) {
                // 0x18028f446
                *(int16_t *)v10 = 13;
                v14 = v10 + 2;
            }
            // 0x18028f450
            v16 = v11 + 2;
            *(int16_t *)v14 = v15;
            v17 = v14 + 2;
            v12 = v16;
            v13 = v17;
            if (v17 >= v3 + 1784) {
                // break -> 0x18028f465
                return 0;
            }
            v10 = v17;
            v11 = v16;
            v12 = v11;
            v13 = v10;
        }
        // 0x18028f465
        *(int64_t *)(v3 + 56) = 0;
        *(int64_t *)(v3 + 48) = 0;
        *(int32_t *)(v3 + 40) = 3413;
        *v9 = v8;
        v18 = function_18028d8d8(0xfde9, 0, v7, (int32_t)((v13 - v7) / 2), (int64_t)&g1381, (int64_t)&g1381);
        v19 = (int32_t)v18;
        v20 = 0;
    }
  lab_0x18028f4f9:
    // 0x18028f4f9
    *(int32_t *)a1 = GetLastError();
    // 0x18028f501
    return function_18026ad50(*v4 ^ v3);
}

// Address range: 0x18028f530 - 0x18028f5c8
int64_t function_18028f530(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = 0; // bp-72, 0x18028f542
    if (g1298 == 0) {
        // 0x18028f560
        int128_t v2; // 0x18028f530
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    int64_t v3 = function_18028f5c8(a1, a2, (int64_t)a3, (int64_t)&v1); // 0x18028f574
    return v3 & 0xffffffff;
}

// Address range: 0x18028f5c8 - 0x18028f6e5
int64_t function_18028f5c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x18028f5e9
    uint32_t v3 = (int32_t)v2; // 0x18028f5ec
    if (v3 == -2) {
        // 0x18028f5f1
        *(char *)(a4 + 56) = 1;
        *(int32_t *)(a4 + 52) = 0;
        *(char *)(a4 + 48) = 1;
        *(int32_t *)(a4 + 44) = 9;
        // 0x18028f60b
        return 0xffffffff;
    }
    if ((int32_t)a1 >= 0) {
        // 0x18028f622
        if (g1308 > v3) {
            int64_t * v4 = (int64_t *)(8 * v1 / 0x4000000000 + (int64_t)&g1307); // 0x18028f682
            int64_t v5 = 72 * (v2 & 63) + 56;
            if ((*(char *)(*v4 + v5) & 1) != 0) {
                // 0x18028f68e
                function_180299e5c(v3);
                int64_t result; // 0x18028f5c8
                if ((*(char *)(*v4 + v5) & 1) != 0) {
                    // 0x18028f6c1
                    result = function_18028f6e8(v2 & 0xffffffff, a2, a3 & 0xffffffff, a4) & 0xffffffff;
                } else {
                    // 0x18028f6ac
                    *(char *)(a4 + 48) = 1;
                    *(int32_t *)(a4 + 44) = 9;
                    *(char *)(a4 + 56) = 1;
                    *(int32_t *)(a4 + 52) = 0;
                    result = 0xffffffff;
                }
                // 0x18028f6d6
                function_180299f44(v3);
                // 0x18028f60b
                return result;
            }
        }
    }
    // 0x18028f637
    *(char *)(a4 + 56) = 1;
    *(int32_t *)(a4 + 52) = 0;
    *(char *)(a4 + 48) = 1;
    *(int32_t *)(a4 + 44) = 9;
    function_18027175c(0, 0, 0, 0, 0, (int64_t *)a4);
    // 0x18028f60b
    return 0xffffffff;
}

// Address range: 0x18028f6e8 - 0x18028fa17
int64_t function_18028f6e8(int64_t a1, uint64_t lpBuffer, int64_t a3, int64_t a4) {
    int32_t nNumberOfBytesToWrite = a3; // 0x18028f70a
    if (nNumberOfBytesToWrite == 0) {
        // 0x18028fa06
        return 0;
    }
    int64_t v1; // 0x18028f6fe
    int64_t v2; // 0x18028f798
    int64_t * v3; // 0x18028f767
    int64_t v4; // 0x18028f76b
    char v5; // 0x18028f76b
    int64_t v6; // 0x18028f6e8
    if (lpBuffer != 0) {
        int64_t v7 = 0x100000000 * a1;
        int64_t v8 = v7 / 0x100000000; // 0x18028f701
        v3 = (int64_t *)(8 * v7 / 0x4000000000 + (int64_t)&g1307);
        int64_t v9 = *v3; // 0x18028f767
        v4 = 72 * (v8 & 63);
        v5 = *(char *)(v9 + v4 + 57);
        if ((a3 & 1) == 0 || v5 > 2) {
            // 0x18028f782
            v6 = v4 + 56;
            if ((*(char *)(v9 + v6) & 32) != 0) {
                // 0x18028f78a
                function_180290b8c((int32_t)v8, 0, 2, a4);
            }
            // 0x18028f798
            v1 = a3 & 0xffffffff;
            v2 = v8 & 0xffffffff;
            if ((int32_t)function_180299c5c(v2) == 0) {
                goto lab_0x18028f8d0;
            } else {
                // 0x18028f7b5
                if (*(char *)(*v3 + v6) < 0) {
                    // 0x18028f7c4
                } else {
                    goto lab_0x18028f8d0;
                }
            }
        } else {
            goto lab_0x18028f718;
        }
    } else {
        goto lab_0x18028f718;
    }
  lab_0x18028f974:;
    // 0x18028f974
    char v10; // 0x18028f6e8
    char v11 = v10; // 0x18028f974
    int64_t errorCode; // bp-112, 0x18028f6e8
    int128_t v12 = __asm_movsd(errorCode); // 0x18028f974
    int64_t v13 = 0; // 0x18028f974
    goto lab_0x18028f985;
  lab_0x18028f718:
    // 0x18028f718
    *(char *)(a4 + 56) = 1;
    *(int32_t *)(a4 + 52) = 0;
    *(char *)(a4 + 48) = 1;
    *(int32_t *)(a4 + 44) = 22;
    function_18027175c(0, 0, 0, 0, 0, (int64_t *)a4);
    // 0x18028fa06
    return 0xffffffff;
  lab_0x18028f8d0:;
    int64_t v18 = *v3; // 0x18028f8dd
    v10 = v18;
    char v17; // 0x18028f6e8
    int64_t v19; // 0x18028f6e8
    int32_t lpNumberOfBytesWritten; // bp-108, 0x18028f6e8
    if (*(char *)(v18 + v6) < 0) {
        int32_t v20 = 0x100000000000000 * (int64_t)(int32_t)v5 / 0x100000000000000; // 0x18028f8f0
        if (v20 == 0) {
            // 0x18028f92a
            v19 = function_18028f198(&errorCode, v2, lpBuffer, v1);
            goto lab_0x18028f8bd;
        } else {
            int32_t v21 = v20 - 1; // 0x18028f8f4
            if (v21 == 0) {
                // 0x18028f916
                v19 = function_18028f3bc(&errorCode, v2, lpBuffer, v1);
                goto lab_0x18028f8bd;
            } else {
                // 0x18028f8f9
                v17 = v10;
                if (v21 != 1) {
                    goto lab_0x18028f9c4;
                } else {
                    // 0x18028f902
                    v19 = function_18028f2a0(&errorCode, v2, lpBuffer, v1);
                    goto lab_0x18028f8bd;
                }
            }
        }
    } else {
        int64_t hFile = *(int64_t *)(v4 + 40 + v18); // 0x18028f941
        errorCode = 0;
        if (!WriteFile((int64_t *)hFile, (int64_t *)lpBuffer, nNumberOfBytesToWrite, &lpNumberOfBytesWritten, NULL)) {
            // 0x18028f968
            errorCode = GetLastError();
        }
        goto lab_0x18028f974;
    }
    int32_t lpMode = 0; // bp-80, 0x18028f7f6
    int64_t v22; // 0x18028f6e8
    int64_t hConsoleHandle = *(int64_t *)(v4 + 40 + v22); // 0x18028f801
    bool v23 = GetConsoleMode((int64_t *)hConsoleHandle, &lpMode); // 0x18028f806
    if (!v23) {
        goto lab_0x18028f8d0;
    } else {
        char v24 = lpBuffer;
        uint32_t v25; // 0x18028f770
        int32_t v26 = 0x100000000000000 * (int64_t)v25 / 0x100000000000000; // 0x18028f818
        if (v26 == 0) {
            int64_t v27 = function_18028ed04(&errorCode, v2, lpBuffer, v1, a4); // 0x18028f8b8
            v19 = v27;
            goto lab_0x18028f8bd;
        } else {
            int32_t v28 = v26 - 1; // 0x18028f820
            v17 = v24;
            if (v28 != 0 == (v28 != 1)) {
                goto lab_0x18028f9c4;
            } else {
                uint64_t v29 = v1 + lpBuffer; // 0x18028f82e
                errorCode = 0;
                if (v29 > lpBuffer) {
                    uint32_t v30 = lpNumberOfBytesWritten; // 0x18028f842
                    int64_t v31 = 0; // 0x18028f842
                    int64_t v32 = v30; // 0x18028f842
                    int64_t v33 = lpBuffer; // 0x18028f842
                    int64_t v34 = v33;
                    int64_t v35 = v31;
                    uint16_t v36 = *(int16_t *)v34; // 0x18028f846
                    int64_t v37 = function_18029a508((int64_t)v36); // 0x18028f851
                    int16_t v38 = 256 * v36;
                    while (v38 / 256 == (int16_t)v37) {
                        int64_t v39 = v32;
                        int64_t v40 = v39 + 2; // 0x18028f85f
                        int64_t v41 = v40 & 0xffffffff; // 0x18028f85f
                        lpNumberOfBytesWritten = v40;
                        int64_t v42 = v35; // 0x18028f86b
                        int64_t v43 = v41; // 0x18028f86b
                        if (v38 == 2560) {
                            // 0x18028f86d
                            if ((int16_t)function_18029a508(13) != 13) {
                                // break -> 0x18028f898
                                return 0;
                            }
                            int64_t v44 = v41 + 1; // 0x18028f881
                            lpNumberOfBytesWritten = v44;
                            v42 = v35 + 1 & 0xffffffff;
                            v43 = v44 & 0xffffffff;
                        }
                        int64_t v45 = v43;
                        int64_t v46 = v42;
                        int64_t v47 = v34 + 2; // 0x18028f88a
                        v31 = v46;
                        v32 = v45;
                        v33 = v47;
                        if (v47 >= v29) {
                            goto lab_0x18028f974;
                        }
                        v34 = v33;
                        v35 = v31;
                        v36 = *(int16_t *)v34;
                        v37 = function_18029a508((int64_t)v36);
                        v38 = 256 * v36;
                    }
                    // 0x18028f898
                    errorCode = GetLastError();
                }
                goto lab_0x18028f974;
            }
        }
    }
  lab_0x18028f8bd:;
    int128_t v48 = __asm_movsd(*(int64_t *)v19); // 0x18028f8bd
    v11 = v10;
    v12 = v48;
    v13 = (int64_t)*(int32_t *)(v19 + 8);
    goto lab_0x18028f985;
  lab_0x18028f985:;
    int64_t v14 = __asm_movsd_17(v12); // 0x18028f979
    int32_t v15 = v14; // 0x18028f979
    if (v15 <= -1) {
        // 0x18028fa06
        int32_t v16; // 0x18028f6e8
        return v16 - (int32_t)v13;
    }
    // 0x18028f991
    v17 = v11;
    if (v15 != 0) {
        if (v15 != 5) {
            // 0x18028f9b4
            function_1802798d0(v14 & 0xffffffff, a4);
        } else {
            // 0x18028f99d
            *(char *)(a4 + 48) = 1;
            *(int32_t *)(a4 + 44) = 9;
            *(char *)(a4 + 56) = 1;
            *(int32_t *)(a4 + 52) = v15;
        }
        // 0x18028fa06
        return 0xffffffff;
    }
    goto lab_0x18028f9c4;
  lab_0x18028f9c4:;
    int64_t result = 0; // 0x18028f9de
    if (v17 == 26 != (*(char *)(*v3 + v6) & 64) != 0) {
        // 0x18028f9e5
        *(int32_t *)(a4 + 52) = 0;
        *(char *)(a4 + 48) = 1;
        *(int32_t *)(a4 + 44) = 28;
        *(char *)(a4 + 56) = 1;
        result = 0xffffffff;
    }
    // 0x18028fa06
    return result;
}

// Address range: 0x18028fa18 - 0x18028fb82
int64_t function_18028fa18(int64_t a1) {
    int64_t v1 = a1;
    if (a1 == 0) {
        // 0x18028fa35
        int64_t v2; // 0x18028fa18
        int64_t v3; // 0x18028fa18
        int64_t v4; // 0x18028fa18
        *(int32_t *)function_180279918(a1, v4, v3, v2) = 22;
        function_180271814(v1, v4, v3, v2);
        // 0x18028fa48
        return 0xffffffff;
    }
    int32_t * v5 = (int32_t *)(a1 + 20);
    int32_t v6 = *v5; // 0x18028fa60
    if ((v6 & 0x2000) == 0 || (v6 & 0x1000) != 0) {
        // 0x18028fa48
        return 0xffffffff;
    }
    if ((v6 & 2) != 0) {
        // 0x18028fa80
        *v5 = v6 | 16;
        // 0x18028fa48
        return 0xffffffff;
    }
    // 0x18028fa87
    *v5 = v6 | 1;
    int64_t v7 = v1; // 0x18028fa8c
    if ((*(int32_t *)(v7 + 20) & 1216) == 0) {
        // 0x18028fa97
        function_180290b94(v7);
    }
    int64_t v8 = *(int64_t *)(a1 + 8); // 0x18028fa9c
    int32_t * v9 = (int32_t *)(a1 + 32); // 0x18028faa3
    int64_t * v10 = (int64_t *)a1; // 0x18028faa6
    *v10 = v8;
    int64_t v11 = function_1802902fc(function_18028c3e0(a1) & 0xffffffff, v8, (int64_t)*v9); // 0x18028fab6
    int32_t v12 = v11; // 0x18028fabb
    int32_t * v13 = (int32_t *)(a1 + 16); // 0x18028fabb
    *v13 = v12;
    int64_t v14 = v11 + 1; // 0x18028fabe
    v1 = v14 & 0xffffffff;
    if ((int32_t)v14 < 2) {
        // 0x18028fac6
        *v5 = *v5 | (v12 == 0 ? 8 : 16);
        *v13 = 0;
        // 0x18028fa48
        return 0xffffffff;
    }
    // 0x18028fadd
    if ((*v5 & 6) == 0) {
        // 0x18028fae8
        v1 = a1;
        int64_t v15 = function_18028c3e0(a1); // 0x18028faeb
        int64_t v16 = &g760; // 0x18028faf2
        if ((int32_t)v15 != -1) {
            // 0x18028faf4
            v1 = a1;
            int64_t v17 = function_18028c3e0(a1); // 0x18028faf7
            v16 = &g760;
            if ((int32_t)v17 != -2) {
                int64_t v18 = function_18028c3e0(a1); // 0x18028fb04
                int64_t v19 = function_18028c3e0(a1); // 0x18028fb1a
                int64_t v20 = *(int64_t *)(8 * 0x100000000 * v18 / 0x4000000000 + (int64_t)&g1307); // 0x18028fb26
                int64_t v21 = 72 * (v19 & 63); // 0x18028fb2a
                v1 = v21;
                v16 = v21 + v20;
            }
        }
        // 0x18028fb3a
        if ((*(char *)(v16 + 56) & -126) == -126) {
            // 0x18028fb43
            *v5 = *v5 | 32;
        }
    }
    // 0x18028fb48
    if (*v9 == 512) {
        int32_t v22 = *v5; // 0x18028fb51
        if ((v22 & 64) != 0) {
            if ((v22 & 256) == 0) {
                // 0x18028fb67
                *v9 = 0x1000;
            }
        }
    }
    // 0x18028fb6e
    *v13 = *v13 - 1;
    *v10 = v1 + 1;
    // 0x18028fa48
    return (int64_t)*(char *)&v1;
}

// Address range: 0x18028fb84 - 0x18028fc7b
int64_t function_18028fb84(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000000000 * a1 / 0x100000000000000; // 0x18028fb93
    int64_t v2 = function_18028c3e0(a2); // 0x18028fba4
    int32_t * v3 = (int32_t *)(a2 + 20); // 0x18028fba9
    int64_t v4 = 0x100000000 * v2;
    int64_t v5 = v4 / 0x100000000; // 0x18028fbad
    if ((*v3 & 192) == 0) {
        int64_t v6 = function_18028f5c8(v5 & 0xffffffff, (int64_t)&v1, 1, a3); // 0x18028fc5b
        // 0x18028fc66
        return v6 & -256 | (int64_t)((int32_t)v6 == 1);
    }
    int64_t v7 = a2 + 8; // 0x18028fbbd
    int64_t * v8 = (int64_t *)v7; // 0x18028fbbd
    int64_t v9 = *v8; // 0x18028fbbd
    int64_t v10; // 0x18028fb84
    int32_t v11 = (int32_t)v10 - *(int32_t *)v7; // 0x18028fbc1
    *(int64_t *)a2 = v9 + 1;
    *(int32_t *)(a2 + 16) = *(int32_t *)(a2 + 32) - 1;
    int64_t v12; // 0x18028fb84
    int32_t v13; // 0x18028fb84
    if (v11 < 1) {
        int64_t v14 = v5 + 2; // 0x18028fbf5
        int64_t v15 = v14 & 0xffffffff; // 0x18028fbfc
        int64_t v16 = &g760; // 0x18028fbfc
        if ((int32_t)v14 >= 2) {
            // 0x18028fbfe
            v15 = *(int64_t *)(8 * v4 / 0x4000000000 + (int64_t)&g1307);
            v16 = v15 + 72 * (v5 & 63);
        }
        // 0x18028fc27
        v12 = v15;
        v13 = 0;
        if ((*(char *)(v16 + 56) & 32) != 0) {
            int64_t v17 = function_180290a4c(v5 & 0xffffffff, 0, 2); // 0x18028fc36
            v12 = v17;
            v13 = 0;
            if (v17 == -1) {
                // 0x18028fc41
                *v3 = *v3 | 16;
                // 0x18028fc66
                return v17 & -256 | 1;
            }
        }
    } else {
        int64_t v18 = function_18028f5c8(v5 & 0xffffffff, v9, (int64_t)v11, a3); // 0x18028fbe0
        v12 = v18;
        v13 = v18;
    }
    // 0x18028fbe7
    *(char *)*v8 = (char)v1;
    // 0x18028fc66
    return v12 & -256 & -256 | (int64_t)(v13 == v11);
}

// Address range: 0x18028fc7c - 0x18028fd04
int64_t function_18028fc7c(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 20); // 0x18028fc82
    if ((v1 & 8) != 0) {
        // 0x18028fcfe
        int64_t v2; // 0x18028fc7c
        return v2 & -256 | 1;
    }
    if ((v1 & 192) != 0) {
        // 0x18028fc9a
        if (*(int64_t *)(a1 + 8) == a1) {
            // 0x18028fcfe
            return a1 & -256;
        }
    }
    int64_t v3 = function_18029a168((int64_t)*(int32_t *)(a1 + 24)); // 0x18028fca7
    if (v3 == -1) {
        // 0x18028fcfe
        return -256;
    }
    int64_t lpNewFilePointer = 0; // bp+16, 0x18028fcb5
    int64_t * hFile = (int64_t *)v3; // 0x18028fccb
    if (!SetFilePointerEx(hFile, (struct {int64_t e0;}){.e0 = 0}, (struct _LARGE_INTEGER *)&lpNewFilePointer, 1)) {
        // 0x18028fcfe
        return 0;
    }
    int64_t lpFileSize = 0; // 0x18028fcd5
    if (!GetFileSizeEx(hFile, (struct _LARGE_INTEGER *)&lpFileSize)) {
        // 0x18028fcfe
        return 0;
    }
    int64_t v4 = lpFileSize; // 0x18028fced
    // 0x18028fcfe
    return v4 & -256 | (int64_t)(lpNewFilePointer == v4);
}

// Address range: 0x18028fd04 - 0x18028fdcf
int64_t function_18028fd04(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18028fd04
    function_18028c3e0(a2);
    int32_t * v1 = (int32_t *)(a2 + 20); // 0x18028fd23
    int32_t v2 = *v1; // 0x18028fd23
    if ((v2 & 6) != 0) {
        if ((v2 & 0x1000) == 0) {
            int32_t * v3; // 0x18028fd04
            int32_t v4; // 0x18028fd04
            if ((v2 & 1) == 0) {
                // 0x18028fd54
                v3 = (int32_t *)(a2 + 16);
                v4 = v2;
            } else {
                int64_t v5 = function_18028fc7c(a2); // 0x18028fd5f
                int32_t * v6 = (int32_t *)(a2 + 16);
                *v6 = 0;
                if ((char)v5 == 0) {
                    // 0x18028fd36
                    *v1 = *v1 | 16;
                    // 0x18028fdbf
                    return 0xffffffff;
                }
                // 0x18028fd6c
                *(int64_t *)a2 = *(int64_t *)(a2 + 8);
                int32_t v7 = *v1 & -2; // 0x18028fd73
                *v1 = v7;
                v3 = v6;
                v4 = v7;
            }
            // 0x18028fd78
            *v1 = v4 & -11 | 2;
            *v3 = 0;
            if ((*v1 & 1216) == 0) {
                // 0x18028fd91
                if ((char)function_18028c420(a2) == 0) {
                    // 0x18028fd9d
                    function_180290b94(a2);
                }
            }
            int64_t result = a1 & 255; // 0x18028fdab
            if ((char)function_18028fb84(a2 & -256 || result, a2, a3) != 0) {
                // 0x18028fdbf
                return result;
            }
            // 0x18028fd36
            *v1 = *v1 | 16;
            // 0x18028fdbf
            return 0xffffffff;
        }
        // 0x18028fd4b
        *(int32_t *)(a3 + 44) = 34;
    } else {
        // 0x18028fd2b
        *(int32_t *)(a3 + 44) = 9;
    }
    // 0x18028fd32
    *(char *)(a3 + 48) = 1;
    // 0x18028fd36
    *v1 = *v1 | 16;
    // 0x18028fdbf
    return 0xffffffff;
}

// Address range: 0x18028fdd0 - 0x18028ffcb
int64_t function_18028fdd0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x18028fde4
    int64_t * v3 = (int64_t *)(8 * v1 / 0x4000000000 + (int64_t)&g1307); // 0x18028fe0b
    int64_t v4 = *v3; // 0x18028fe0b
    int64_t v5 = 72 * (v2 & 63); // 0x18028fe0f
    int64_t hFile = *(int64_t *)(v4 + v5 + 40); // 0x18028fe0f
    if (a3 == 0) {
        goto lab_0x18028fe26;
    } else {
        if ((int16_t)a2 != 10) {
            goto lab_0x18028fe26;
        } else {
            char * v6 = (char *)(v5 + 56 + v4); // 0x18028fe1f
            *v6 = *v6 | 4;
            goto lab_0x18028fe2b;
        }
    }
  lab_0x18028fe26:;
    char * v7 = (char *)(v5 + 56 + v4); // 0x18028fe26
    *v7 = *v7 & -5;
    goto lab_0x18028fe2b;
  lab_0x18028fe2b:;
    uint64_t v8 = 2 * a3 + a2; // 0x18028fe2b
    if (v8 <= a2) {
        // 0x18028ffaa
        return 0;
    }
    int64_t v9 = a2;
    int64_t v10 = a2;
    int16_t v11 = *(int16_t *)v10; // 0x18028fe48
    int64_t v12; // 0x18028fdd0
    while (v11 != 26) {
        int64_t v13 = v10 + 2; // 0x18028fe55
        int16_t v14 = v11; // 0x18028fe5d
        int64_t v15 = v13; // 0x18028fe5d
        if (v11 == 13) {
            if (v13 >= v8) {
                int16_t lpBuffer = 0; // 0x18028fe9b
                int32_t lpNumberOfBytesRead = 0; // bp+24, 0x18028fea3
                bool v16 = ReadFile((int64_t *)hFile, (int64_t *)&lpBuffer, 2, &lpNumberOfBytesRead, NULL); // 0x18028feb7
                if (!v16 || lpNumberOfBytesRead == 0) {
                    // 0x18028ff6e
                    *(int16_t *)v9 = 13;
                    goto lab_0x18028ffa7;
                } else {
                    // 0x18028fed2
                    if ((*(char *)(v5 + 56 + *v3) & 72) == 0) {
                        if (v9 == a2 == lpBuffer == 10) {
                            // 0x18028fef3
                            *(int16_t *)v9 = 10;
                            goto lab_0x18028ffa7;
                        } else {
                            // 0x18028ff54
                            function_180290af0(v2 & 0xffffffff, -2, 1, (int64_t)&g1307);
                            if (lpBuffer == 10) {
                                goto lab_0x18028ffaa;
                            } else {
                                // 0x18028ff6e
                                *(int16_t *)v9 = 13;
                                goto lab_0x18028ffa7;
                            }
                        }
                    } else {
                        if (lpBuffer != 10) {
                            // 0x18028fefb
                            *(int16_t *)v9 = 13;
                            v12 = 0;
                            goto lab_0x18028ff16;
                        } else {
                            // 0x18028fef3
                            *(int16_t *)v9 = 10;
                            goto lab_0x18028ffa7;
                        }
                    }
                }
            }
            int16_t v17 = *(int16_t *)v13; // 0x18028fe64
            v14 = v17 != 10 ? v11 : 10;
            v15 = v17 != 10 ? v13 : v10 + 4;
        }
        // 0x18028fe76
        *(int16_t *)v9 = v14;
        int64_t v18 = v9 + 2; // 0x18028fe85
        int64_t v19 = v18; // 0x18028fe8c
        if (v15 >= v8) {
            // 0x18028ffaa
            return v19 - a2 & 0xfffffffe;
        }
        v9 = v18;
        v10 = v15;
        v11 = *(int16_t *)v10;
    }
    char * v20 = (char *)(v5 + 56 + *v3); // 0x18028ff91
    char v21 = *v20; // 0x18028ff91
    if ((v21 & 64) == 0) {
        // 0x18028ff9a
        *v20 = v21 | 2;
        // 0x18028ffaa
        return v9 - a2 & 0xfffffffe;
    }
    // 0x18028ffa4
    *(int16_t *)v9 = 26;
  lab_0x18028ffa7:
    // 0x18028ffaa
    return v9 + 2 - a2 & 0xfffffffe;
  lab_0x18028ff16:;
    // 0x18028ff16
    int64_t v22; // bp-104, 0x18028fdd0
    char v23 = *(char *)((int64_t)&v22 + 120 + v12); // 0x18028ff1e
    *(char *)(v5 + 58 + v12 + *v3) = v23;
    int64_t v24 = v12 + 1; // 0x18028ff26
    v12 = v24;
    if (v24 == 2) {
        // 0x18028ff2e
        *(char *)(v5 + 60 + *v3) = 10;
        goto lab_0x18028ffa7;
    } else {
        goto lab_0x18028ff16;
    }
  lab_0x18028ffaa: return 0;

}

// Address range: 0x18028ffcc - 0x1802902fb
int64_t function_18028ffcc(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x18028ffe0
    int64_t * v3 = (int64_t *)(8 * v1 / 0x4000000000 + 0x180329600); // 0x18028fffe
    int64_t v4 = *v3; // 0x18028fffe
    int64_t v5 = 72 * (v2 & 63);
    if (a3 == 0) {
        goto lab_0x180290020;
    } else {
        if ((char)a2 != 10) {
            goto lab_0x180290020;
        } else {
            char * v6 = (char *)(v5 + 56 + v4); // 0x180290019
            *v6 = *v6 | 4;
            goto lab_0x180290025;
        }
    }
  lab_0x180290138:;
    // 0x180290138
    int64_t v7; // 0x18028ffcc
    int32_t result = (int32_t)v7 - (int32_t)a2; // 0x180290138
    if (result == 0) {
        // 0x1802902e3
        return 0;
    }
    int64_t v8 = *v3; // 0x180290143
    if (*(char *)(v5 + 57 + v8) == 0) {
        // 0x1802902e3
        return result;
    }
    int64_t v9 = (int64_t)result + a2; // 0x180290160
    int64_t v10 = v9 - 1; // 0x180290163
    char v11 = *(char *)v10; // 0x180290167
    int64_t v12 = v9; // 0x18029016a
    int64_t v13; // 0x180290025
    if (v11 < 0) {
        int64_t v14 = v11; // 0x18029018a
        char v15 = *(char *)(v14 + 0x18031d5d0); // 0x18029018d
        char v16 = v15; // 0x180290196
        int64_t v17 = v10; // 0x180290196
        int32_t v18 = -1; // 0x180290196
        int64_t v19 = 1; // 0x180290196
        char v20 = v11; // 0x180290196
        int64_t v21 = v14; // 0x180290196
        int32_t v22 = 1; // 0x180290196
        if (v10 >= a2 && v15 == 0) {
            int64_t v23 = v10 - 1; // 0x180290184
            int64_t v24 = 2; // 0x180290187
            int64_t v25 = v24 & 0xffffffff;
            unsigned char v26 = *(char *)v23; // 0x18029018a
            int64_t v27 = v26; // 0x18029018a
            char v28 = *(char *)(v27 + 0x18031d5d0); // 0x18029018d
            int32_t v29 = v24;
            int64_t v30 = v23; // 0x180290196
            while (v23 >= a2 && v29 <= 4 && v28 == 0) {
                // 0x180290184
                v23 = v30 - 1;
                v24 = v25 + 1;
                v25 = v24 & 0xffffffff;
                v26 = *(char *)v23;
                v27 = v26;
                v28 = *(char *)(v27 + 0x18031d5d0);
                v29 = v24;
                v30 = v23;
            }
            // 0x18029018a
            v16 = v28;
            v17 = v23;
            v18 = -((0x100000000 * v24)) / 0x100000000;
            v19 = v25;
            v20 = v26;
            v21 = v27;
            v22 = v29;
        }
        // 0x180290198
        if (v16 == 0) {
            // 0x1802901a8
            *(int32_t *)function_180279918(v9, v21, v19, v13) = 42;
            // 0x1802902e3
            return 0xffffffff;
        }
        // 0x1802901bb
        if ((int32_t)v16 + 1 != v22) {
            // 0x1802901cd
            if ((*(char *)(v5 + 56 + v8) & 72) == 0) {
                // 0x180290258
                function_180290af0(v2 & 0xffffffff, v18, 1, v8);
                v12 = v17;
            } else {
                int64_t v31 = v17 + 1; // 0x1802901f1
                *(char *)(v5 + 58 + v8) = v20;
                int64_t v32 = v31; // 0x180290204
                if (v22 >= 2) {
                    int64_t v33 = v17 + 2; // 0x18029020e
                    *(char *)(v5 + 59 + *v3) = *(char *)v31;
                    v32 = v33;
                    if (v22 == 3) {
                        // 0x18029022e
                        *(char *)(v5 + 60 + *v3) = *(char *)v33;
                        v32 = v17 + 3;
                    }
                }
                // 0x180290250
                v12 = v32 - v19;
            }
        } else {
            // 0x1802901c2
            v12 = v19 + v17;
        }
    }
    int64_t v34 = function_18028d848(0xfde9, 0); // 0x180290287
    int32_t v35 = v34; // 0x18029028f
    int64_t result2; // 0x18028ffcc
    if (v35 != 0) {
        char * v36 = (char *)(v5 + 61 + *v3); // 0x1802902cc
        *v36 = *v36 & -3 | (v35 == (int32_t)(v12 - a2) ? 0 : 2);
        result2 = 2 * v34 & 0xfffffffe;
    } else {
        // 0x180290293
        function_1802798a8((int64_t)GetLastError());
        result2 = 0xffffffff;
    }
    // 0x1802902e3
    return result2;
  lab_0x18029006a:;
    // 0x18029006a
    int64_t v37; // 0x18028ffcc
    int64_t v38 = v37 + 1; // 0x18029006a
    int64_t v39; // 0x18028ffcc
    int64_t v40 = v39; // 0x180290070
    int64_t v41 = v38; // 0x180290070
    v7 = v38;
    if (v39 >= v13) {
        goto lab_0x180290138;
    }
    goto lab_0x18029003e;
  lab_0x180290020:;
    char * v54 = (char *)(v5 + 56 + v4); // 0x180290020
    *v54 = *v54 & -5;
    goto lab_0x180290025;
  lab_0x180290025:
    // 0x180290025
    v13 = a3 + a2;
    v40 = a2;
    v41 = a2;
    v7 = a2;
    if (v13 <= a2) {
        goto lab_0x180290138;
    } else {
        while (true) {
          lab_0x18029003e:
            // 0x18029003e
            v37 = v41;
            int64_t v42 = v40;
            char v43 = *(char *)v42; // 0x18029003e
            if (v43 == 26) {
                // break -> 0x180290115
                return 0;
            }
            int64_t v44 = v42 + 1; // 0x180290049
            if (v43 != 13) {
                // 0x180290065
                *(char *)v37 = v43;
                v39 = v44;
                goto lab_0x18029006a;
            } else {
                if (v44 >= v13) {
                    // 0x180290077
                    int32_t lpNumberOfBytesRead; // bp+16, 0x18028ffcc
                    int64_t v45 = &lpNumberOfBytesRead; // 0x180290079
                    char lpBuffer = 0; // 0x180290081
                    lpNumberOfBytesRead = 0;
                    int64_t hFile; // 0x18029000a
                    bool v46 = ReadFile((int64_t *)hFile, (int64_t *)&lpBuffer, 1, &lpNumberOfBytesRead, NULL); // 0x180290096
                    int32_t v47 = lpNumberOfBytesRead; // 0x1802900a0
                    if (!v46 || v47 == 0) {
                        // 0x180290109
                        *(char *)v37 = 13;
                        goto lab_0x180290135;
                    } else {
                        int64_t v48 = *v3; // 0x1802900ae
                        char v49 = *(char *)(v5 + 56 + v48); // 0x1802900b6
                        char v50 = lpBuffer;
                        if ((v49 & 72) == 0) {
                            if (v37 == a2 == v50 == 10) {
                                // 0x1802900c6
                                *(char *)v37 = 10;
                                goto lab_0x180290135;
                            } else {
                                // 0x1802900e8
                                int64_t v51; // bp-1, 0x18028ffcc
                                function_180290af0(v2 & 0xffffffff, (int32_t)(int64_t)&v51, 1, v45);
                                char v52 = lpBuffer; // 0x1802900f6
                                v7 = v37;
                                if (v52 == 10) {
                                    goto lab_0x180290138;
                                } else {
                                    // 0x180290104
                                    *(char *)v37 = 13;
                                    goto lab_0x180290135;
                                }
                            }
                        } else {
                            if (v50 != 10) {
                                // 0x1802900cb
                                *(char *)v37 = 13;
                                int64_t v53 = *v3; // 0x1802900ce
                                *(char *)(v5 + 58 + v53) = v50;
                                goto lab_0x180290135;
                            } else {
                                // 0x1802900c6
                                *(char *)v37 = 10;
                                goto lab_0x180290135;
                            }
                        }
                    }
                }
                // 0x180290057
                if (*(char *)v44 != 10) {
                    // 0x180290065
                    *(char *)v37 = v43;
                    v39 = v44;
                    goto lab_0x18029006a;
                } else {
                    // 0x18029005c
                    *(char *)v37 = 10;
                    v39 = v42 + 2;
                    goto lab_0x18029006a;
                }
            }
        }
        char * v55 = (char *)(v5 + 56 + *v3);
        char v56 = *v55; // 0x180290121
        if ((v56 & 64) != 0) {
            // 0x180290133
            *(char *)v37 = 26;
            goto lab_0x180290135;
        } else {
            // 0x18029012a
            *v55 = v56 | 2;
            v7 = v37;
            goto lab_0x180290138;
        }
    }
  lab_0x180290135:
    // 0x180290135
    v7 = v37 + 1;
    goto lab_0x180290138;
}


