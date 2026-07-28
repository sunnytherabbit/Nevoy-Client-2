#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x1800ee3c0
uint64_t func_0x1800ee3c0(int64_t param_1,uint8_t (*param_2)[16],int64_t param_3,int64_t param_4, int64_t param_5,int param_6,ushort *param_7)
{
  byte bFlag_1;
  ushort uVal_2;
  uint uVal_3;
  bool bFlag_4;
  short sz_5;
  int iVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  short sz_11;
  uint uVal_12;
  int64_t lVal_13;
  int64_t lVal_14;
  char *fnPtr_15;
  int iVal_16;
  
  if ((*(int *)(param_1 + 0x4824) < 0x10) &&
     (func_0x1800ee8e0(param_1), *(int *)(param_1 + 0x4824) < 0x10)) {
    func_0x1800ee8e0(param_1);
  }
  uVal_10 = *(uint *)(param_1 + 0x4820);
  uVal_7 = (uint64_t)*(byte *)(param_3 + (uint64_t)(uVal_10 >> 0x17));
  if (uVal_7 == 0xff) {
    lVal_14 = 0;
    do {
      lVal_13 = lVal_14;
      lVal_14 = lVal_13 + 1;
    } while (*(uint *)(param_3 + 0x62c + lVal_13 * 4) <= uVal_10 >> 0x10);
    iVal_6 = *(int *)(param_1 + 0x4824);
    if (lVal_14 != 8) {
      fnPtr_15 = "bad huffman code";
      if ((iVal_6 < (int)(lVal_13 + 10)) ||
         (uVal_8 = (uVal_10 >> (0x17U - (char)lVal_14 & 0x1f) & *(uint *)(&UNK_1806b3bf4 + lVal_14 * 4))
                  + *(int *)(param_3 + 0x670 + lVal_14 * 4), 0xff < uVal_8)) goto LAB_1800ee58a;
      *(int *)(param_1 + 0x4824) = (iVal_6 - (int)lVal_14) + -9;
      *(uint *)(param_1 + 0x4820) = uVal_10 << ((byte)(lVal_13 + 10) & 0x1f);
      uVal_7 = (uint64_t)uVal_8;
      goto LAB_1800ee443;
    }
LAB_1800ee57a:
    *(int *)(param_1 + 0x4824) = iVal_6 + -0x10;
  }
  else {
    bFlag_1 = *(byte *)(param_3 + 0x500 + uVal_7);
    if ((int)(uint)bFlag_1 <= *(int *)(param_1 + 0x4824)) {
      *(uint *)(param_1 + 0x4820) = uVal_10 << (bFlag_1 & 0x1f);
      *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bFlag_1;
LAB_1800ee443:
      bFlag_1 = *(byte *)(uVal_7 + param_3 + 0x400);
      fnPtr_15 = "bad huffman code";
      if (bFlag_1 < 0x10) {
        param_2[7] = ZEXT816(0);
        param_2[6] = ZEXT816(0);
        param_2[5] = ZEXT816(0);
        param_2[4] = ZEXT816(0);
        param_2[3] = ZEXT816(0);
        param_2[2] = ZEXT816(0);
        param_2[1] = ZEXT816(0);
        *param_2 = ZEXT816(0);
        uVal_10 = 0;
        if (bFlag_1 != 0) {
          iVal_6 = *(int *)(param_1 + 0x4824);
          if (iVal_6 < (int)(uint)bFlag_1) {
            func_0x1800ee8e0(param_1);
            iVal_6 = *(int *)(param_1 + 0x4824);
          }
          uVal_10 = 0;
          if ((int)(uint)bFlag_1 <= iVal_6) {
            uVal_10 = *(uint *)(param_1 + 0x4820);
            uVal_9 = uVal_10 << (bFlag_1 & 0x1f) | uVal_10 >> 0x20 - (bFlag_1 & 0x1f);
            uVal_8 = *(uint *)(&DAT_1806b3bd0 + (uint64_t)bFlag_1 * 4);
            *(uint *)(param_1 + 0x4820) = ~uVal_8 & uVal_9;
            *(uint *)(param_1 + 0x4824) = iVal_6 - (uint)bFlag_1;
            iVal_6 = 0;
            if (-1 < (int)uVal_10) {
              iVal_6 = *(int *)(&DAT_1806b3c20 + (uint64_t)bFlag_1 * 4);
            }
            uVal_10 = iVal_6 + (uVal_9 & uVal_8);
          }
        }
        uVal_8 = *(uint *)(param_1 + 0x46b8 + (int64_t)param_6 * 0x60);
        uVal_9 = uVal_8 ^ uVal_10;
        if (-1 < (int)uVal_9) {
          uVal_9 = 0x80000000 - uVal_10;
          bFlag_4 = (int)(uVal_10 ^ 0x7fffffff) < (int)uVal_8;
          if ((int)(uVal_8 & uVal_10) < 0) {
            bFlag_4 = (int)uVal_8 < (int)uVal_9;
          }
          if (bFlag_4) {
            fnPtr_15 = "bad delta";
            goto LAB_1800ee58a;
          }
        }
        uVal_7 = (uint64_t)uVal_9;
        uVal_8 = uVal_8 + uVal_10;
        *(uint *)((int64_t)param_6 * 0x60 + param_1 + 0x46b8) = uVal_8;
        uVal_2 = *param_7;
        if (uVal_2 == 0) {
LAB_1800ee65f:
          *(ushort *)*param_2 = uVal_2 * (short)uVal_8;
          iVal_16 = 1;
          do {
            if (*(int *)(param_1 + 0x4824) < 0x10) {
              func_0x1800ee8e0(param_1,uVal_7);
            }
            uVal_10 = *(uint *)(param_1 + 0x4820);
            uVal_7 = (uint64_t)(uVal_10 >> 0x17);
            uVal_2 = *(ushort *)(param_5 + uVal_7 * 2);
            if (uVal_2 == 0) {
              if (*(int *)(param_1 + 0x4824) < 0x10) {
                func_0x1800ee8e0(param_1);
                uVal_10 = *(uint *)(param_1 + 0x4820);
                uVal_7 = (uint64_t)(uVal_10 >> 0x17);
              }
              uVal_7 = (uint64_t)*(byte *)(param_4 + uVal_7);
              if (uVal_7 == 0xff) {
                lVal_14 = 0;
                do {
                  lVal_13 = lVal_14;
                  lVal_14 = lVal_13 + 1;
                } while (*(uint *)(param_4 + 0x62c + lVal_13 * 4) <= uVal_10 >> 0x10);
                iVal_6 = *(int *)(param_1 + 0x4824);
                if (lVal_14 == 8) goto LAB_1800ee57a;
                if ((iVal_6 < (int)(lVal_13 + 10)) ||
                   (uVal_8 = (uVal_10 >> (0x17U - (char)lVal_14 & 0x1f) &
                            *(uint *)(&UNK_1806b3bf4 + lVal_14 * 4)) +
                            *(int *)(param_4 + 0x670 + lVal_14 * 4), 0xff < uVal_8))
                goto LAB_1800ee583;
                uVal_9 = (iVal_6 - (int)lVal_14) - 9;
                *(int *)(param_1 + 0x4824) = (iVal_6 - (int)lVal_14) + -9;
                *(uint *)(param_1 + 0x4820) = uVal_10 << ((byte)(lVal_13 + 10) & 0x1f);
                bFlag_1 = *(byte *)(param_4 + 0x400 + (uint64_t)uVal_8);
              }
              else {
                bFlag_1 = *(byte *)(param_4 + 0x500 + uVal_7);
                uVal_9 = *(int *)(param_1 + 0x4824) - (uint)bFlag_1;
                if (*(int *)(param_1 + 0x4824) < (int)(uint)bFlag_1) goto LAB_1800ee583;
                *(uint *)(param_1 + 0x4820) = uVal_10 << (bFlag_1 & 0x1f);
                *(uint *)(param_1 + 0x4824) = uVal_9;
                bFlag_1 = *(byte *)(param_4 + 0x400 + uVal_7);
              }
              if ((bFlag_1 & 0xf) == 0) {
                uVal_7 = (uint64_t)uVal_9;
                if (bFlag_1 != 0xf0) {
                  return 1;
                }
                iVal_16 = iVal_16 + 0x10;
              }
              else {
                uVal_10 = bFlag_1 & 0xf;
                lVal_14 = (int64_t)iVal_16 + (uint64_t)(bFlag_1 >> 4);
                bFlag_1 = (&DAT_1806b3b70)[lVal_14];
                if ((int)uVal_9 < (int)uVal_10) {
                  func_0x1800ee8e0(param_1);
                  uVal_9 = *(uint *)(param_1 + 0x4824);
                }
                sz_5 = 0;
                sz_11 = 0;
                uVal_7 = (uint64_t)(uVal_9 - uVal_10);
                if ((int)uVal_10 <= (int)uVal_9) {
                  uVal_8 = *(uint *)(param_1 + 0x4820);
                  uVal_12 = uVal_8 << (sbyte)uVal_10 | uVal_8 >> 0x20 - (sbyte)uVal_10;
                  uVal_3 = *(uint *)(&DAT_1806b3bd0 + (uVal_10 << 2));
                  *(uint *)(param_1 + 0x4820) = ~uVal_3 & uVal_12;
                  *(uint *)(param_1 + 0x4824) = uVal_9 - uVal_10;
                  if (-1 < (int)uVal_8) {
                    sz_5 = (short)*(uint32_t *)(&DAT_1806b3c20 + (uVal_10 << 2));
                  }
                  sz_11 = ((ushort)uVal_12 & (ushort)uVal_3) + sz_5;
                }
                iVal_16 = (int)lVal_14 + 1;
                *(short *)(*param_2 + (uint)bFlag_1 * 2) =
                     sz_11 * *(short *)((int64_t)param_7 + (uint64_t)((uint)bFlag_1 * 2));
              }
            }
            else {
              uVal_8 = uVal_2 & 0xf;
              if (*(int *)(param_1 + 0x4824) < (int)uVal_8) goto LAB_1800ee583;
              uVal_7 = (uint64_t)(uVal_2 >> 4 & 0xf);
              lVal_14 = (int64_t)iVal_16;
              *(uint *)(param_1 + 0x4820) = uVal_10 << (sbyte)uVal_8;
              *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVal_8;
              iVal_16 = (int)(lVal_14 + uVal_7) + 1;
              *(short *)(*param_2 + (uint)(byte)(&DAT_1806b3b70)[lVal_14 + uVal_7] * 2) =
                   (short)(char)(uVal_2 >> 8) *
                   *(short *)((int64_t)param_7 +
                             (uint64_t)((uint)(byte)(&DAT_1806b3b70)[lVal_14 + uVal_7] * 2));
            }
            if (0x3f < iVal_16) {
              return 1;
            }
          } while( true );
        }
        if ((int)uVal_8 < 0) {
          uVal_10 = 0x8000 / uVal_2;
          uVal_7 = (uint64_t)(ushort)(0x8000 % (uint)uVal_2);
          if (SBORROW4(uVal_8,-uVal_10) == (int)(uVal_8 + uVal_10) < 0) goto LAB_1800ee65f;
        }
        else {
          uVal_7 = (uint64_t)(ushort)(0x7fff % (uint)uVal_2);
          if (uVal_8 <= 0x7fff / uVal_2) goto LAB_1800ee65f;
        }
        fnPtr_15 = "can\'t merge dc and ac";
      }
      goto LAB_1800ee58a;
    }
  }
LAB_1800ee583:
  fnPtr_15 = "bad huffman code";
LAB_1800ee58a:
  *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3010
            ) = fnPtr_15;
  return 0;
}

// func_0x1800ee8e0
/* WARNING: Removing unreachable block (ram,0x0001800ee922) */
/* WARNING: Removing unreachable block (ram,0x0001800ee922) */
void func_0x1800ee8e0(int64_t *param_1)
{
  byte bFlag_1;
  byte *pU8_2;
  char ch_3;
  uint uVal_4;
  int iVal_5;
  byte *pU8_6;
  char *fnPtr_7;
  int iVal_8;
  char *fnPtr_9;
  int64_t lVal_10;
  
  if (*(int *)((int64_t)param_1 + 0x482c) != 0) {
    iVal_5 = *(int *)((int64_t)param_1 + 0x4824);
    iVal_8 = 0x11;
    if (0x11 < iVal_5) {
      iVal_8 = iVal_5;
    }
    *(uint *)((int64_t)param_1 + 0x4824) = iVal_5 + ((iVal_8 - iVal_5) + 7U & 0xfffffff8) + 8;
    return;
  }
  while( true ) {
    lVal_10 = *param_1;
    pU8_2 = *(byte **)(lVal_10 + 0xc0);
    if (pU8_2 < *(byte **)(lVal_10 + 200)) {
      *(byte **)(lVal_10 + 0xc0) = pU8_2 + 1;
      bFlag_1 = *pU8_2;
    }
    else {
      if (*(int *)(lVal_10 + 0x30) == 0) goto LAB_1800ee930;
      pU8_2 = (byte *)(lVal_10 + 0x38);
      iVal_5 = (**(func_ptr_t *)(lVal_10 + 0x10))
                        (*(uint64_t *)(lVal_10 + 0x28),pU8_2,*(uint32_t *)(lVal_10 + 0x34));
      *(int *)(lVal_10 + 0xb8) =
           *(int *)(lVal_10 + 0xb8) + (*(int *)(lVal_10 + 0xc0) - *(int *)(lVal_10 + 0xd0));
      if (iVal_5 == 0) {
        *(uint32_t *)(lVal_10 + 0x30) = 0;
        pU8_6 = (byte *)(lVal_10 + 0x39);
        *(uint8_t *)(lVal_10 + 0x38) = 0;
      }
      else {
        pU8_6 = pU8_2 + iVal_5;
      }
      *(byte **)(lVal_10 + 200) = pU8_6;
      *(int64_t *)(lVal_10 + 0xc0) = lVal_10 + 0x39;
      bFlag_1 = *pU8_2;
    }
    uVal_4 = (uint)bFlag_1;
    if (bFlag_1 == 0xff) break;
LAB_1800ee932:
    while( true ) {
      iVal_5 = *(int *)((int64_t)param_1 + 0x4824);
      *(uint *)(param_1 + 0x904) =
           *(uint *)(param_1 + 0x904) | uVal_4 << (0x18U - (char)iVal_5 & 0x1f);
      *(int *)((int64_t)param_1 + 0x4824) = iVal_5 + 8;
      if (0x10 < iVal_5) {
        return;
      }
      if (*(int *)((int64_t)param_1 + 0x482c) == 0) break;
LAB_1800ee930:
      uVal_4 = 0;
    }
  }
  lVal_10 = *param_1;
  fnPtr_7 = *(char **)(lVal_10 + 0xc0);
  if (*(char **)(lVal_10 + 200) <= fnPtr_7) {
    if (*(int *)(lVal_10 + 0x30) != 0) goto LAB_1800eea30;
    ch_3 = '\0';
    goto LAB_1800eea93;
  }
  do {
    *(char **)(lVal_10 + 0xc0) = fnPtr_7 + 1;
    ch_3 = *fnPtr_7;
LAB_1800eea93:
    while( true ) {
      if (ch_3 != -1) {
        if (ch_3 != '\0') {
          *(char *)(param_1 + 0x905) = ch_3;
          *(uint32_t *)((int64_t)param_1 + 0x482c) = 1;
          return;
        }
        uVal_4 = 0xff;
        goto LAB_1800ee932;
      }
      lVal_10 = *param_1;
      fnPtr_7 = *(char **)(lVal_10 + 0xc0);
      if (fnPtr_7 < *(char **)(lVal_10 + 200)) break;
      ch_3 = '\0';
      if (*(int *)(lVal_10 + 0x30) != 0) {
LAB_1800eea30:
        fnPtr_7 = (char *)(lVal_10 + 0x38);
        iVal_5 = (**(func_ptr_t *)(lVal_10 + 0x10))
                          (*(uint64_t *)(lVal_10 + 0x28),fnPtr_7,*(uint32_t *)(lVal_10 + 0x34));
        *(int *)(lVal_10 + 0xb8) =
             *(int *)(lVal_10 + 0xb8) + (*(int *)(lVal_10 + 0xc0) - *(int *)(lVal_10 + 0xd0));
        if (iVal_5 == 0) {
          *(uint32_t *)(lVal_10 + 0x30) = 0;
          fnPtr_9 = (char *)(lVal_10 + 0x39);
          *(uint8_t *)(lVal_10 + 0x38) = 0;
          ch_3 = '\0';
        }
        else {
          fnPtr_9 = fnPtr_7 + iVal_5;
          ch_3 = *fnPtr_7;
        }
        *(char **)(lVal_10 + 200) = fnPtr_9;
        *(int64_t *)(lVal_10 + 0xc0) = lVal_10 + 0x39;
      }
    }
  } while( true );
}

// func_0x1800eeaf0
uint64_t func_0x1800eeaf0(int64_t param_1,uint8_t (*param_2)[16],int64_t param_3,int param_4)
{
  int iVal_1;
  uint uVal_2;
  bool bFlag_3;
  uint uVal_4;
  uint uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  byte bFlag_8;
  char *fnPtr_9;
  uint uVal_10;
  int64_t lVal_11;
  int iVal_12;
  
  if (*(int *)(param_1 + 0x4838) == 0) {
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      func_0x1800ee8e0(param_1);
    }
    if (*(int *)(param_1 + 0x483c) != 0) {
      iVal_12 = *(int *)(param_1 + 0x4824);
      if (iVal_12 < 1) {
        func_0x1800ee8e0(param_1);
        iVal_12 = *(int *)(param_1 + 0x4824);
        if (iVal_12 < 1) {
          return 1;
        }
      }
      iVal_1 = *(int *)(param_1 + 0x4820);
      *(int *)(param_1 + 0x4820) = iVal_1 * 2;
      *(int *)(param_1 + 0x4824) = iVal_12 + -1;
      if (-1 < iVal_1) {
        return 1;
      }
      *(short *)*param_2 = *(short *)*param_2 + (short)(1 << (*(byte *)(param_1 + 0x4840) & 0x1f));
      return 1;
    }
    param_2[7] = ZEXT816(0);
    param_2[6] = ZEXT816(0);
    param_2[5] = ZEXT816(0);
    param_2[4] = ZEXT816(0);
    param_2[3] = ZEXT816(0);
    param_2[2] = ZEXT816(0);
    param_2[1] = ZEXT816(0);
    *param_2 = ZEXT816(0);
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      func_0x1800ee8e0(param_1);
    }
    uVal_5 = *(uint *)(param_1 + 0x4820);
    uVal_7 = (uint64_t)*(byte *)(param_3 + (uint64_t)(uVal_5 >> 0x17));
    if (uVal_7 == 0xff) {
      lVal_6 = 0;
      do {
        lVal_11 = lVal_6;
        lVal_6 = lVal_11 + 1;
      } while (*(uint *)(param_3 + 0x62c + lVal_11 * 4) <= uVal_5 >> 0x10);
      iVal_12 = *(int *)(param_1 + 0x4824);
      if (lVal_6 == 8) {
        *(int *)(param_1 + 0x4824) = iVal_12 + -0x10;
      }
      else if (((int)(lVal_11 + 10) <= iVal_12) &&
              (uVal_10 = (uVal_5 >> (0x17U - (char)lVal_6 & 0x1f) &
                        *(uint *)(&UNK_1806b3bf4 + lVal_6 * 4)) +
                        *(int *)(param_3 + 0x670 + lVal_6 * 4), uVal_10 < 0x100)) {
        iVal_12 = (iVal_12 - (int)lVal_6) + -9;
        *(int *)(param_1 + 0x4824) = iVal_12;
        *(uint *)(param_1 + 0x4820) = uVal_5 << ((byte)(lVal_11 + 10) & 0x1f);
        uVal_5 = (uint)*(byte *)((uint64_t)uVal_10 + param_3 + 0x400);
        if (uVal_5 < 0x10) goto LAB_1800eec67;
      }
    }
    else {
      bFlag_8 = *(byte *)(param_3 + 0x500 + uVal_7);
      iVal_12 = *(int *)(param_1 + 0x4824) - (uint)bFlag_8;
      if ((int)(uint)bFlag_8 <= *(int *)(param_1 + 0x4824)) {
        *(uint *)(param_1 + 0x4820) = uVal_5 << (bFlag_8 & 0x1f);
        *(int *)(param_1 + 0x4824) = iVal_12;
        bFlag_8 = *(byte *)(uVal_7 + param_3 + 0x400);
        uVal_5 = (uint)bFlag_8;
        if (bFlag_8 < 0x10) {
LAB_1800eec67:
          uVal_10 = 0;
          if (uVal_5 != 0) {
            if (iVal_12 < (int)uVal_5) {
              func_0x1800ee8e0(param_1);
              iVal_12 = *(int *)(param_1 + 0x4824);
            }
            uVal_10 = 0;
            if ((int)uVal_5 <= iVal_12) {
              uVal_10 = *(uint *)(param_1 + 0x4820);
              bFlag_8 = (byte)uVal_5 & 0x1f;
              uVal_4 = uVal_10 << bFlag_8 | uVal_10 >> 0x20 - bFlag_8;
              uVal_2 = *(uint *)(&DAT_1806b3bd0 + (uVal_5 << 2));
              *(uint *)(param_1 + 0x4820) = ~uVal_2 & uVal_4;
              *(uint *)(param_1 + 0x4824) = iVal_12 - uVal_5;
              iVal_12 = 0;
              if (-1 < (int)uVal_10) {
                iVal_12 = *(int *)(&DAT_1806b3c20 + (uVal_5 << 2));
              }
              uVal_10 = iVal_12 + (uVal_4 & uVal_2);
            }
          }
          uVal_5 = *(uint *)(param_1 + 0x46b8 + (int64_t)param_4 * 0x60);
          if (-1 < (int)(uVal_5 ^ uVal_10)) {
            bFlag_3 = (int)(uVal_10 ^ 0x7fffffff) < (int)uVal_5;
            if ((int)(uVal_5 & uVal_10) < 0) {
              bFlag_3 = (int)uVal_5 < (int)(-0x80000000 - uVal_10);
            }
            if (bFlag_3) {
              lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
              ;
              fnPtr_9 = "bad delta";
              goto LAB_1800eeb1d;
            }
          }
          uVal_5 = uVal_5 + uVal_10;
          *(uint *)((int64_t)param_4 * 0x60 + param_1 + 0x46b8) = uVal_5;
          bFlag_8 = (byte)*(int *)(param_1 + 0x4840);
          if ((int)(1 << (bFlag_8 & 0x1f) ^ uVal_5) < 0) {
            if (*(int *)(param_1 + 0x4840) == 0x1f) {
              if ((int)uVal_5 < 1) {
LAB_1800eee58:
                *(short *)*param_2 = (short)(uVal_5 << (bFlag_8 & 0x1f));
                return 1;
              }
            }
            else {
              uVal_10 = 0x8000 >> (bFlag_8 & 0x1f);
              if (SBORROW4(uVal_5,-uVal_10) == (int)(uVal_5 + uVal_10) < 0) goto LAB_1800eee58;
            }
          }
          else if ((int)uVal_5 <= (int)(0x7fffU >> (bFlag_8 & 0x1f))) goto LAB_1800eee58;
        }
      }
    }
  }
  lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_9 = "can\'t merge dc and ac";
LAB_1800eeb1d:
  *(char **)(lVal_6 + 0x3010) = fnPtr_9;
  return 0;
}

// func_0x1800eee70
uint64_t func_0x1800eee70(int64_t param_1,int *param_2,int *param_3,int *param_4)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  char *fnPtr_5;
  char *fnPtr_6;
  char *fnPtr_7;
  char ch_8;
  char *fnPtr_9;
  uint8_t auStack_68 [47];
  char local_39;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  fnPtr_5 = *(char **)(param_1 + 0xd0);
  fnPtr_6 = *(char **)(param_1 + 0xd8);
  *(char **)(param_1 + 0xc0) = fnPtr_5;
  *(char **)(param_1 + 200) = fnPtr_6;
  if (fnPtr_5 < fnPtr_6) {
    fnPtr_9 = fnPtr_5 + 1;
    *(char **)(param_1 + 0xc0) = fnPtr_9;
    ch_8 = *fnPtr_5;
joined_r0x0001800eef2d:
    if (fnPtr_9 < fnPtr_6) goto LAB_1800eeecf;
LAB_1800eef5d:
    if (*(int *)(param_1 + 0x30) != 0) {
      fnPtr_9 = (char *)(param_1 + 0x38);
      iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),fnPtr_9,*(uint32_t *)(param_1 + 0x34));
      fnPtr_5 = *(char **)(param_1 + 0xd0);
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - (int)fnPtr_5)
      ;
      if (iVal_2 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        fnPtr_6 = (char *)(param_1 + 0x39);
        *(uint8_t *)(param_1 + 0x38) = 0;
      }
      else {
        fnPtr_6 = fnPtr_9 + iVal_2;
      }
      *(char **)(param_1 + 200) = fnPtr_6;
      fnPtr_7 = (char *)(param_1 + 0x39);
      *(char **)(param_1 + 0xc0) = fnPtr_7;
      goto joined_r0x0001800eefbe;
    }
LAB_1800ef009:
    *(char **)(param_1 + 0xc0) = fnPtr_5;
    *(uint64_t *)(param_1 + 200) = *(uint64_t *)(param_1 + 0xd8);
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      ch_8 = '\0';
      fnPtr_9 = fnPtr_5;
      goto joined_r0x0001800eef2d;
    }
    fnPtr_9 = (char *)(param_1 + 0x38);
    iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),fnPtr_9,*(uint32_t *)(param_1 + 0x34));
    fnPtr_5 = *(char **)(param_1 + 0xd0);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - (int)fnPtr_5);
    if (iVal_2 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      fnPtr_6 = (char *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
      ch_8 = '\0';
    }
    else {
      fnPtr_6 = fnPtr_9 + iVal_2;
      ch_8 = *fnPtr_9;
    }
    *(char **)(param_1 + 200) = fnPtr_6;
    fnPtr_9 = (char *)(param_1 + 0x39);
    *(char **)(param_1 + 0xc0) = fnPtr_9;
    if (fnPtr_6 <= fnPtr_9) goto LAB_1800eef5d;
LAB_1800eeecf:
    fnPtr_7 = fnPtr_9 + 1;
    *(char **)(param_1 + 0xc0) = fnPtr_7;
joined_r0x0001800eefbe:
    if ((ch_8 != 'P') || ((byte)(*fnPtr_9 - 0x37U) < 0xfe)) goto LAB_1800ef009;
    if (param_4 != (int *)0x0) {
      *param_4 = (uint)(*fnPtr_9 == '6') * 2 + 1;
      fnPtr_7 = *(char **)(param_1 + 0xc0);
      fnPtr_6 = *(char **)(param_1 + 200);
    }
    if (fnPtr_7 < fnPtr_6) {
      *(char **)(param_1 + 0xc0) = fnPtr_7 + 1;
      local_39 = *fnPtr_7;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      local_39 = '\0';
    }
    else {
      fnPtr_6 = (char *)(param_1 + 0x38);
      iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),fnPtr_6,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_2 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        fnPtr_5 = (char *)(param_1 + 0x39);
        *(uint8_t *)(param_1 + 0x38) = 0;
        local_39 = '\0';
      }
      else {
        fnPtr_5 = fnPtr_6 + iVal_2;
        local_39 = *fnPtr_6;
      }
      *(char **)(param_1 + 200) = fnPtr_5;
      *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
    }
    func_0x1800ef270(param_1,&local_39);
    iVal_2 = func_0x1800ef470(param_1,&local_39);
    if (param_2 != (int *)0x0) {
      *param_2 = iVal_2;
    }
    if (iVal_2 == 0) {
LAB_1800ef112:
      lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_6 = "invalid width";
    }
    else {
      func_0x1800ef270(param_1,&local_39);
      iVal_2 = func_0x1800ef470(param_1,&local_39);
      if (param_3 != (int *)0x0) {
        *param_3 = iVal_2;
      }
      if (iVal_2 == 0) goto LAB_1800ef112;
      func_0x1800ef270(param_1,&local_39);
      iVal_2 = func_0x1800ef470(param_1,&local_39);
      if (iVal_2 < 0x10000) {
        uVal_4 = (uint64_t)((uint)(0xff < iVal_2) * 8 + 8);
        goto LAB_1800ef135;
      }
      lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_6 = "max value > 65535";
    }
    *(char **)(lVal_3 + 0x3010) = fnPtr_6;
  }
  uVal_4 = 0;
LAB_1800ef135:
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return uVal_4;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_1)();
  return uVal_4;
}

// func_0x1800ef180
uint64_t func_0x1800ef180(uint param_1,uint param_2,uint param_3,uint param_4)
{
  uint64_t uVal_1;
  
  if ((int)(param_2 | param_1) < 0) {
    return 0;
  }
  if ((param_2 == 0) || (uVal_1 = 0, (int)param_1 <= (int)(0x7fffffff / (uint64_t)param_2))) {
    param_2 = param_2 * param_1;
    if ((int)(param_3 | param_2) < 0) {
      return 0;
    }
    if ((param_3 == 0) || (uVal_1 = 0, (int)param_2 <= (int)(0x7fffffff / (uint64_t)param_3))) {
      uVal_1 = 0;
      if ((-1 < (int)(param_4 | param_2 * param_3)) &&
         ((param_4 == 0 ||
          (uVal_1 = 0, (int)(param_2 * param_3) <= (int)(0x7fffffff / (uint64_t)param_4))))) {
        uVal_1 = 1;
      }
    }
  }
  return uVal_1;
}

// func_0x1800ef200
uint64_t func_0x1800ef200(uint param_1,uint64_t param_2,uint param_3,uint param_4)
{
  uint64_t uVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  
  uVal_2 = (uint)param_2;
  if ((((-1 < (int)(uVal_2 | param_1)) &&
       ((((uVal_3 = param_2 & 0xffffffff, uVal_2 == 0 ||
          (param_2 = 0x7fffffff % uVal_3, (int)param_1 <= (int)(0x7fffffff / uVal_3))) &&
         (uVal_2 = uVal_2 * param_1, -1 < (int)(param_3 | uVal_2))) &&
        ((param_3 == 0 ||
         (param_2 = 0x7fffffff % (uint64_t)param_3,
         (int)uVal_2 <= (int)(0x7fffffff / (uint64_t)param_3))))))) &&
      (uVal_2 = uVal_2 * param_3, -1 < (int)(param_4 | uVal_2))) &&
     ((param_4 == 0 ||
      (param_2 = 0x7fffffff % (uint64_t)param_4,
      (int)uVal_2 <= (int)(0x7fffffff / (uint64_t)param_4))))) {
    uVal_1 = _malloc_base((int64_t)(int)(uVal_2 * param_4),param_2);
    return uVal_1;
  }
  return 0;
}

// func_0x1800ef270
void func_0x1800ef270(int64_t param_1,byte *param_2)
{
  byte *pU8_1;
  byte *pU8_2;
  byte bFlag_3;
  int iVal_4;
  byte *pU8_5;
  
  pU8_1 = (byte *)(param_1 + 0x38);
  pU8_2 = (byte *)(param_1 + 0x39);
LAB_1800ef2a0:
  if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800ef2b8:
    if (*(uint64_t *)(param_1 + 0xc0) < *(uint64_t *)(param_1 + 200)) {
LAB_1800ef2c8:
      if ((*param_2 - 9 < 5) || (*param_2 == 0x20)) {
        pU8_5 = *(byte **)(param_1 + 0xc0);
        if (pU8_5 < *(byte **)(param_1 + 200)) {
          *(byte **)(param_1 + 0xc0) = pU8_5 + 1;
          *param_2 = *pU8_5;
        }
        else if (*(int *)(param_1 + 0x30) == 0) {
          *param_2 = 0;
        }
        else {
          iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                            (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34))
          ;
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVal_4 == 0) {
            *(uint32_t *)(param_1 + 0x30) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            bFlag_3 = 0;
            pU8_5 = pU8_2;
          }
          else {
            bFlag_3 = *pU8_1;
            pU8_5 = pU8_1 + iVal_4;
          }
          *(byte **)(param_1 + 200) = pU8_5;
          *(byte **)(param_1 + 0xc0) = pU8_2;
          *param_2 = bFlag_3;
        }
        goto LAB_1800ef2a0;
      }
    }
  }
  else {
    iVal_4 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
    if (iVal_4 == 0) goto LAB_1800ef2c8;
    if (*(int *)(param_1 + 0x30) != 0) goto LAB_1800ef2b8;
  }
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    iVal_4 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
    if (iVal_4 == 0) goto LAB_1800ef360;
    if (*(int *)(param_1 + 0x30) == 0) {
      return;
    }
  }
  if (*(uint64_t *)(param_1 + 200) <= *(uint64_t *)(param_1 + 0xc0)) {
    return;
  }
LAB_1800ef360:
  if (*param_2 != 0x23) {
    return;
  }
LAB_1800ef380:
  if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800ef39c:
    if (*(uint64_t *)(param_1 + 200) <= *(uint64_t *)(param_1 + 0xc0)) goto LAB_1800ef2a0;
  }
  else {
    iVal_4 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
    if (iVal_4 != 0) {
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_1800ef39c;
      goto LAB_1800ef2a0;
    }
  }
  if ((*param_2 == 10) || (*param_2 == 0xd)) goto LAB_1800ef2a0;
  pU8_5 = *(byte **)(param_1 + 0xc0);
  if (pU8_5 < *(byte **)(param_1 + 200)) {
    *(byte **)(param_1 + 0xc0) = pU8_5 + 1;
    *param_2 = *pU8_5;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    *param_2 = 0;
  }
  else {
    iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_4 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      bFlag_3 = 0;
      pU8_5 = pU8_2;
    }
    else {
      bFlag_3 = *pU8_1;
      pU8_5 = pU8_1 + iVal_4;
    }
    *(byte **)(param_1 + 200) = pU8_5;
    *(byte **)(param_1 + 0xc0) = pU8_2;
    *param_2 = bFlag_3;
  }
  goto LAB_1800ef380;
}

// func_0x1800ef470
int func_0x1800ef470(int64_t param_1,byte *param_2)
{
  byte *pU8_1;
  byte bFlag_2;
  byte bFlag_3;
  int iVal_4;
  byte *pU8_5;
  int iVal_6;
  
  pU8_1 = (byte *)(param_1 + 0x38);
  iVal_6 = 0;
  do {
    if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800ef4ac:
      if (*(uint64_t *)(param_1 + 200) <= *(uint64_t *)(param_1 + 0xc0)) {
        return iVal_6;
      }
    }
    else {
      iVal_4 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
      if (iVal_4 != 0) {
        if (*(int *)(param_1 + 0x30) == 0) {
          return iVal_6;
        }
        goto LAB_1800ef4ac;
      }
    }
    bFlag_2 = *param_2;
    if ((byte)(bFlag_2 - 0x3a) < 0xf6) {
      return iVal_6;
    }
    pU8_5 = *(byte **)(param_1 + 0xc0);
    if (pU8_5 < *(byte **)(param_1 + 200)) {
      *(byte **)(param_1 + 0xc0) = pU8_5 + 1;
      bFlag_3 = *pU8_5;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      bFlag_3 = 0;
    }
    else {
      iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_4 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        bFlag_3 = 0;
        pU8_5 = (byte *)(param_1 + 0x39);
      }
      else {
        bFlag_3 = *pU8_1;
        pU8_5 = pU8_1 + iVal_4;
      }
      *(byte **)(param_1 + 200) = pU8_5;
      *(byte **)(param_1 + 0xc0) = (byte *)(param_1 + 0x39);
    }
    iVal_6 = (uint)bFlag_2 + iVal_6 * 10 + -0x30;
    *param_2 = bFlag_3;
    if ((0xccccccc < iVal_6) || ('7' < (char)bFlag_3 && iVal_6 == 0xccccccc)) {
      *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x3010) = "integer parse overflow";
      return 0;
    }
  } while( true );
}

// func_0x1800ef5b0
int64_t func_0x1800ef5b0(int64_t param_1,int64_t param_2)
{
  char *fnPtr_1;
  char *fnPtr_2;
  char *fnPtr_3;
  int iVal_4;
  char *fnPtr_5;
  char *fnPtr_6;
  char ch_7;
  int64_t lVal_8;
  bool bFlag_9;
  
  fnPtr_6 = *(char **)(param_1 + 0xc0);
  fnPtr_5 = *(char **)(param_1 + 200);
  if (fnPtr_6 < fnPtr_5) {
    *(char **)(param_1 + 0xc0) = fnPtr_6 + 1;
    ch_7 = *fnPtr_6;
    fnPtr_6 = fnPtr_6 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    ch_7 = '\0';
  }
  else {
    fnPtr_6 = (char *)(param_1 + 0x38);
    iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),fnPtr_6,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_4 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      fnPtr_5 = (char *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
      ch_7 = '\0';
    }
    else {
      fnPtr_5 = fnPtr_6 + iVal_4;
      ch_7 = *fnPtr_6;
    }
    *(char **)(param_1 + 200) = fnPtr_5;
    fnPtr_6 = (char *)(param_1 + 0x39);
    *(char **)(param_1 + 0xc0) = fnPtr_6;
  }
  fnPtr_1 = (char *)(param_1 + 0x38);
  fnPtr_2 = (char *)(param_1 + 0x39);
  lVal_8 = 0;
LAB_1800ef674:
  if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800ef69e:
    bFlag_9 = fnPtr_6 < fnPtr_5;
  }
  else {
    iVal_4 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
    if (iVal_4 != 0) {
      if (*(int *)(param_1 + 0x30) != 0) {
        fnPtr_6 = *(char **)(param_1 + 0xc0);
        fnPtr_5 = *(char **)(param_1 + 200);
        goto LAB_1800ef69e;
      }
      goto LAB_1800ef811;
    }
    bFlag_9 = true;
  }
  if ((ch_7 == '\n') || (!bFlag_9)) goto LAB_1800ef811;
  *(char *)(param_2 + lVal_8) = ch_7;
  if (lVal_8 != 0x3fe) {
    fnPtr_3 = *(char **)(param_1 + 0xc0);
    fnPtr_5 = *(char **)(param_1 + 200);
    if (fnPtr_3 < fnPtr_5) {
      fnPtr_6 = fnPtr_3 + 1;
      *(char **)(param_1 + 0xc0) = fnPtr_6;
      ch_7 = *fnPtr_3;
      lVal_8 = lVal_8 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      ch_7 = '\0';
      lVal_8 = lVal_8 + 1;
      fnPtr_6 = fnPtr_3;
    }
    else {
      iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),fnPtr_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_4 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        ch_7 = '\0';
        fnPtr_5 = fnPtr_2;
      }
      else {
        ch_7 = *fnPtr_1;
        fnPtr_5 = fnPtr_1 + iVal_4;
      }
      *(char **)(param_1 + 200) = fnPtr_5;
      *(char **)(param_1 + 0xc0) = fnPtr_2;
      lVal_8 = lVal_8 + 1;
      fnPtr_6 = fnPtr_2;
    }
    goto LAB_1800ef674;
  }
  do {
    if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800ef76a:
      fnPtr_5 = *(char **)(param_1 + 0xc0);
      if (*(char **)(param_1 + 200) <= fnPtr_5) break;
LAB_1800ef77e:
      *(char **)(param_1 + 0xc0) = fnPtr_5 + 1;
      ch_7 = *fnPtr_5;
    }
    else {
      iVal_4 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
      if (iVal_4 != 0) {
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_1800ef76a;
        break;
      }
      fnPtr_5 = *(char **)(param_1 + 0xc0);
      if (fnPtr_5 < *(char **)(param_1 + 200)) goto LAB_1800ef77e;
      if (*(int *)(param_1 + 0x30) == 0) {
        ch_7 = '\0';
      }
      else {
        iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),fnPtr_1,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_4 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          *(uint8_t *)(param_1 + 0x38) = 0;
          ch_7 = '\0';
          fnPtr_5 = fnPtr_2;
        }
        else {
          ch_7 = *fnPtr_1;
          fnPtr_5 = fnPtr_1 + iVal_4;
        }
        *(char **)(param_1 + 200) = fnPtr_5;
        *(char **)(param_1 + 0xc0) = fnPtr_2;
      }
    }
  } while (ch_7 != '\n');
  lVal_8 = 0x3ff;
LAB_1800ef811:
  *(uint8_t *)(param_2 + lVal_8) = 0;
  return param_2;
}

// func_0x1800ef830
void func_0x1800ef830(uint64_t *param_1,byte *param_2,int param_3)
{
  float fVal_1;
  double dVal_2;
  
  if (param_2[3] == 0) {
    switch(param_3) {
    case 2:
      *(uint32_t *)((int64_t)param_1 + 4) = 0x3f800000;
    case 1:
      *(uint32_t *)param_1 = 0;
      break;
    case 4:
      *(uint32_t *)((int64_t)param_1 + 0xc) = 0x3f800000;
    case 3:
      *(uint32_t *)(param_1 + 1) = 0;
      *param_1 = 0;
    }
  }
  else {
    dVal_2 = (double)func_0x18068bd40(DAT_1806b2878,param_2[3] - 0x88);
    fVal_1 = (float)dVal_2;
    if (param_3 < 3) {
      *(float *)param_1 =
           (fVal_1 * (float)((uint)param_2[2] + (uint)param_2[1] + (uint)*param_2)) / DAT_1806ae650;
    }
    else {
      *(float *)param_1 = (float)(uint)*param_2 * fVal_1;
      *(float *)((int64_t)param_1 + 4) = (float)(uint)param_2[1] * fVal_1;
      *(float *)(param_1 + 1) = (float)(uint)param_2[2] * fVal_1;
    }
    if (param_3 == 4) {
      *(uint32_t *)((int64_t)param_1 + 0xc) = 0x3f800000;
    }
    else if (param_3 == 2) {
      *(uint32_t *)((int64_t)param_1 + 4) = 0x3f800000;
    }
  }
  return;
}

// func_0x1800ef930
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1800ef930(int64_t param_1,int64_t param_2,uint param_3)
{
  int iVal_1;
  func_ptr_t fnPtr_2;
  byte bFlag_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  char *fnPtr_6;
  ushort uVal_7;
  uint uVal_8;
  uint64_t uVal_9;
  int iVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  int iVal_13;
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  uint8_t auStack_e8 [32];
  uint8_t local_c8 [4];
  int aiStack_c4 [3];
  uint8_t local_b8 [8];
  int iStack_b0;
  int iStack_ac;
  uint8_t local_a8 [8];
  int iStack_a0;
  int iStack_9c;
  uint8_t local_98 [8];
  int iStack_90;
  int iStack_8c;
  uint32_t local_88;
  int aiStack_78 [18];
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  _local_98 = (uint8_t  [16])0x0;
  _local_a8 = (uint8_t  [16])0x0;
  _local_b8 = (uint8_t  [16])0x0;
  _local_c8 = (uint8_t  [16])0x0;
  local_88 = 0;
  func_0x1806ab010(0,0);
  if ((int)param_3 < 1) {
    if (aiStack_c4[1] < 5) goto LAB_1800efa2f;
    fnPtr_6 = "bad sizes";
  }
  else {
    if (param_3 < 4) {
      uVal_12 = 0;
LAB_1800ef9f9:
      uVal_5 = 0;
      do {
        *(int *)(local_c8 + (uint64_t)*(byte *)(uVal_12 + param_2 + uVal_5) * 4) =
             *(int *)(local_c8 + (uint64_t)*(byte *)(uVal_12 + param_2 + uVal_5) * 4) + 1;
        uVal_5 = uVal_5 + 1;
      } while ((param_3 & 3) != uVal_5);
    }
    else {
      uVal_12 = 0;
      do {
        *(int *)(local_c8 + (uint64_t)*(byte *)(param_2 + uVal_12) * 4) =
             *(int *)(local_c8 + (uint64_t)*(byte *)(param_2 + uVal_12) * 4) + 1;
        *(int *)(local_c8 + (uint64_t)*(byte *)(param_2 + 1 + uVal_12) * 4) =
             *(int *)(local_c8 + (uint64_t)*(byte *)(param_2 + 1 + uVal_12) * 4) + 1;
        *(int *)(local_c8 + (uint64_t)*(byte *)(param_2 + 2 + uVal_12) * 4) =
             *(int *)(local_c8 + (uint64_t)*(byte *)(param_2 + 2 + uVal_12) * 4) + 1;
        *(int *)(local_c8 + (uint64_t)*(byte *)(param_2 + 3 + uVal_12) * 4) =
             *(int *)(local_c8 + (uint64_t)*(byte *)(param_2 + 3 + uVal_12) * 4) + 1;
        uVal_12 = uVal_12 + 4;
      } while ((param_3 & 0x7ffffffc) != uVal_12);
      if ((uint64_t)(param_3 & 3) != 0) goto LAB_1800ef9f9;
    }
    fnPtr_6 = "bad sizes";
    if ((aiStack_c4[0] < 3) && (aiStack_c4[1] < 5)) {
LAB_1800efa2f:
      auArr_14._0_4_ = -(uint)(_DAT_1806b2c60 < iStack_ac);
      auArr_14._4_4_ = -(uint)(_UNK_1806b2c64 < (int)local_a8._0_4_);
      auArr_14._8_4_ = -(uint)(_UNK_1806b2c68 < (int)local_a8._4_4_);
      auArr_14._12_4_ = -(uint)(_UNK_1806b2c6c < iStack_a0);
      auArr_16._0_4_ = -(uint)(_DAT_1806b2c70 < aiStack_c4[2]);
      auArr_16._4_4_ = -(uint)(_UNK_1806b2c74 < (int)local_b8._0_4_);
      auArr_16._8_4_ = -(uint)(_UNK_1806b2c78 < (int)local_b8._4_4_);
      auArr_16._12_4_ = -(uint)(_UNK_1806b2c7c < iStack_b0);
      auArr_15._0_4_ = -(uint)(_DAT_1806b2c80 < iStack_9c);
      auArr_15._4_4_ = -(uint)(_UNK_1806b2c84 < (int)local_98._0_4_);
      auArr_15._8_4_ = -(uint)(_UNK_1806b2c88 < (int)local_98._4_4_);
      auArr_15._12_4_ = -(uint)(_UNK_1806b2c8c < iStack_90);
      auArr_16 = packssdw(auArr_15 | auArr_16,auArr_14);
      fnPtr_6 = "bad sizes";
      if (((ushort)((ushort)(SUB161(auArr_16 >> 7,0) & 1) |
                    (ushort)(SUB161(auArr_16 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auArr_16 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auArr_16 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auArr_16 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auArr_16 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auArr_16 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auArr_16 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auArr_16 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auArr_16 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auArr_16 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auArr_16 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auArr_16 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auArr_16 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auArr_16 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auArr_16[15] >> 7) << 0xf) == 0) && (iStack_8c < 0x8001)) {
        iVal_10 = 0;
        bFlag_3 = 0xf;
        fnPtr_6 = "bad codelengths";
        lVal_11 = 0;
        iVal_13 = 0;
        do {
          aiStack_78[lVal_11 + 1] = iVal_10;
          *(short *)(param_1 + 0x402 + lVal_11 * 2) = (short)iVal_10;
          *(short *)(param_1 + 0x466 + lVal_11 * 2) = (short)iVal_13;
          iVal_1 = aiStack_c4[lVal_11];
          iVal_10 = iVal_10 + iVal_1;
          if ((iVal_1 != 0) && (1 << ((char)lVal_11 + 1U & 0x1f) < iVal_10)) goto LAB_1800efaf4;
          *(int *)(param_1 + 0x424 + lVal_11 * 4) = iVal_10 << (bFlag_3 & 0x1f);
          iVal_10 = iVal_10 * 2;
          iVal_13 = iVal_13 + iVal_1;
          bFlag_3 = bFlag_3 - 1;
          lVal_11 = lVal_11 + 1;
        } while (lVal_11 != 0xf);
        *(uint32_t *)(param_1 + 0x460) = 0x10000;
        uVal_4 = 1;
        if (0 < (int)param_3) {
          uVal_12 = 0;
          do {
            bFlag_3 = *(byte *)(param_2 + uVal_12);
            uVal_5 = (uint64_t)bFlag_3;
            if (bFlag_3 != 0) {
              iVal_10 = aiStack_78[uVal_5];
              lVal_11 = (int64_t)(int)(iVal_10 - (uint)*(ushort *)(param_1 + 0x400 + uVal_5 * 2)) +
                       (uint64_t)*(ushort *)(param_1 + 0x464 + uVal_5 * 2);
              *(byte *)(param_1 + 0x484 + lVal_11) = bFlag_3;
              *(ushort *)(param_1 + 0x5a4 + lVal_11 * 2) = (ushort)uVal_12;
              if (bFlag_3 < 10) {
                uVal_7 = (ushort)iVal_10 << 8 | (ushort)iVal_10 >> 8;
                uVal_8 = (uVal_7 & 0xf0f0) >> 4 | (uVal_7 & 0xf0f) << 4;
                uVal_8 = (uVal_8 >> 2 & 0x3333) + (uVal_8 & 0x3333) * 4;
                uVal_9 = (uint64_t)
                        ((uVal_8 >> 1 & 0x5555) + (uVal_8 & 0x5555) * 2 >> (0x10 - bFlag_3 & 0x1f));
                do {
                  *(ushort *)(param_1 + uVal_9 * 2) = (ushort)uVal_12 | (ushort)bFlag_3 << 9;
                  uVal_9 = uVal_9 + (1L << (bFlag_3 & 0x3f));
                } while (uVal_9 < 0x200);
              }
              aiStack_78[uVal_5] = iVal_10 + 1;
            }
            uVal_12 = uVal_12 + 1;
          } while (uVal_12 != param_3);
        }
        goto LAB_1800efb10;
      }
    }
  }
LAB_1800efaf4:
  *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3010
            ) = fnPtr_6;
  uVal_4 = 0;
LAB_1800efb10:
  if (DAT_18083cf40 != (local_30 ^ (uint64_t)auStack_e8)) {
    func_0x180673080(local_30 ^ (uint64_t)auStack_e8);
    fnPtr_2 = (func_ptr_t )swi(3);
    uVal_4 = (*fnPtr_2)();
    return uVal_4;
  }
  return uVal_4;
}

// func_0x1800f0c40
int64_t func_0x1800f0c40(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x31bad30ec0cf34d) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x7dc63fe1fee1a54) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800f0ce4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x7dc63fe1fee1a54);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800f0d0a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x7dc63fe1fee1a54);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x183279adU) + -0x21;
  }
LAB_1800f0ce4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800f0d0a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800f0d80
void func_0x1800f0d80(int64_t param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  
  uVal_4 = *(uint64_t *)(param_1 + 0x10);
  uVal_5 = uVal_4 + (uVal_4 == 0);
  if (uVal_4 < 8 || uVal_5 - uVal_4 < param_2) {
    do {
      if (0x3ffffffffffffff - uVal_5 < uVal_5) {
        func_0x1800f0f60();
        goto LAB_1800f0f58;
      }
      uVal_5 = uVal_5 * 2;
    } while (uVal_5 < 8 || uVal_5 - uVal_4 < param_2);
  }
  if (uVal_5 >> 0x3d != 0) {
LAB_1800f0f58:
    func_0x18007ba90();
LAB_1800f0f5d:
    do {
      invalidInstructionException();
    } while( true );
  }
  uVal_4 = *(uint64_t *)(param_1 + 0x18);
  if (uVal_5 < 0x200) {
    uVal_6 = func_0x180672de0(uVal_5 * 8);
  }
  else {
    if (0x1ffffffffffffffb < uVal_5) goto LAB_1800f0f58;
    lVal_2 = func_0x180672de0(uVal_5 * 8 + 0x27);
    uVal_6 = lVal_2 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_6 - 8) = lVal_2;
  }
  uVal_1 = uVal_5;
  do {
    uVal_8 = uVal_1;
    uVal_1 = uVal_8 * 2;
  } while (uVal_8 <= uVal_5 >> 1);
  lVal_2 = uVal_6 + uVal_4 * 8;
  lVal_3 = uVal_4 * 8;
  uVal_8 = uVal_8 - *(int64_t *)(param_1 + 0x10);
  lVal_7 = *(int64_t *)(param_1 + 0x10) - uVal_4;
  func_0x1806aa960(lVal_2,*(int64_t *)(param_1 + 8) + lVal_3,lVal_7 * 8);
  lVal_2 = lVal_2 + lVal_7 * 8;
  lVal_7 = uVal_4 - uVal_8;
  if (uVal_4 < uVal_8 || lVal_7 == 0) {
    func_0x1806aa960(lVal_2,*(uint64_t *)(param_1 + 8),lVal_3);
    func_0x1806ab010(lVal_2 + lVal_3,0,(uVal_8 - uVal_4) * 8);
    uVal_4 = uVal_6;
  }
  else {
    lVal_3 = uVal_8 * 8;
    func_0x1806aa960(lVal_2,*(uint64_t *)(param_1 + 8),lVal_3);
    func_0x1806aa960(uVal_6,*(int64_t *)(param_1 + 8) + lVal_3,lVal_7 * 8);
    uVal_4 = uVal_6 + lVal_7 * 8;
  }
  func_0x1806ab010(uVal_4,0,lVal_3);
  lVal_2 = *(int64_t *)(param_1 + 8);
  if (lVal_2 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 0x10) * 8;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) goto LAB_1800f0f5d;
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
  }
  *(uint64_t *)(param_1 + 8) = uVal_6;
  *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + uVal_8;
  return;
}

// func_0x1800f0f60
void func_0x1800f0f60(void)
{
  func_ptr_t fnPtr_1;
  
  func_0x1806744c0("deque<T> too long");
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800f0fa0
void func_0x1800f0fa0(int64_t **param_1,uint64_t param_2)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint8_t (*pArr16_16)[16];
  int64_t *pLong_17;
  int64_t lVal_18;
  uint8_t (*pArr16_19)[16];
  int64_t *pLong_20;
  
  pLong_3 = *param_1;
  pArr16_19 = (uint8_t (*)[16])param_1[1];
  uVal_14 = (int64_t)pArr16_19 - (int64_t)pLong_3 >> 5;
  if (param_2 < uVal_14) {
    for (pArr16_16 = (uint8_t (*)[16])(pLong_3 + param_2 * 4); pArr16_16 != pArr16_19;
        pArr16_16 = pArr16_16 + 2) {
      uVal_14 = *(uint64_t *)((int64_t)pArr16_16[1] + 8);
      if (0xf < uVal_14) {
        lVal_13 = *(int64_t *)*pArr16_16;
        uVal_12 = uVal_14 + 1;
        lVal_18 = lVal_13;
        if (0xfff < uVal_12) {
          lVal_18 = *(int64_t *)(lVal_13 + -8);
          if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_18)) {
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_12 = uVal_14 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_18,uVal_12);
      }
      *(int64_t *)pArr16_16[1] = 0;
      *(int64_t *)((int64_t)pArr16_16[1] + 8) = 0xf;
      (*pArr16_16)[0] = 0;
    }
    param_1[1] = (int64_t *)(uint8_t (*)[16])(pLong_3 + param_2 * 4);
  }
  else if (uVal_14 < param_2) {
    if ((uint64_t)((int64_t)param_1[2] - (int64_t)pLong_3 >> 5) < param_2) {
      if (param_2 >> 0x3b == 0) {
        pLong_3 = *param_1;
        uVal_12 = (int64_t)param_1[2] - (int64_t)pLong_3 >> 5;
        uVal_14 = (uVal_12 >> 1) + uVal_12;
        if (uVal_14 <= param_2) {
          uVal_14 = param_2;
        }
        if (0x7ffffffffffffff - (uVal_12 >> 1) < uVal_12) {
          uVal_14 = 0x7ffffffffffffff;
        }
        if (uVal_14 >> 0x3b == 0) {
          pLong_20 = param_1[1];
          if (uVal_14 == 0) {
            pLong_17 = (int64_t *)0x0;
LAB_1800f126a:
            lVal_18 = (int64_t)pLong_20 - (int64_t)pLong_3;
            lVal_13 = lVal_18 >> 5;
            uVal_12 = param_2 - lVal_13;
            if (uVal_12 != 0) {
              pArr16_19 = (uint8_t (*)[16])(lVal_18 + (int64_t)pLong_17);
              if ((uVal_12 & 7) != 0) {
                uVal_15 = 0;
                do {
                  *pArr16_19 = ZEXT816(0);
                  *(uint64_t *)pArr16_19[1] = 0;
                  *(uint64_t *)(pArr16_19[1] + 8) = 0xf;
                  pArr16_19 = pArr16_19 + 2;
                  uVal_15 = uVal_15 + 1;
                } while ((uVal_12 & 7) != uVal_15);
                uVal_12 = uVal_12 - uVal_15;
              }
              if (lVal_13 - param_2 < 0xfffffffffffffff9) {
                do {
                  *pArr16_19 = ZEXT816(0);
                  *(uint64_t *)pArr16_19[1] = 0;
                  *(uint64_t *)(pArr16_19[1] + 8) = 0xf;
                  pArr16_19[2] = ZEXT816(0);
                  *(uint64_t *)pArr16_19[3] = 0;
                  *(uint64_t *)(pArr16_19[3] + 8) = 0xf;
                  pArr16_19[4] = ZEXT816(0);
                  *(uint64_t *)pArr16_19[5] = 0;
                  *(uint64_t *)(pArr16_19[5] + 8) = 0xf;
                  pArr16_19[6] = ZEXT816(0);
                  *(uint64_t *)pArr16_19[7] = 0;
                  *(uint64_t *)(pArr16_19[7] + 8) = 0xf;
                  pArr16_19[8] = ZEXT816(0);
                  *(uint64_t *)pArr16_19[9] = 0;
                  *(uint64_t *)(pArr16_19[9] + 8) = 0xf;
                  pArr16_19[10] = ZEXT816(0);
                  *(uint64_t *)pArr16_19[0xb] = 0;
                  *(uint64_t *)(pArr16_19[0xb] + 8) = 0xf;
                  pArr16_19[0xc] = ZEXT816(0);
                  *(uint64_t *)pArr16_19[0xd] = 0;
                  *(uint64_t *)(pArr16_19[0xd] + 8) = 0xf;
                  pArr16_19[0xe] = ZEXT816(0);
                  *(uint64_t *)pArr16_19[0xf] = 0;
                  *(uint64_t *)(pArr16_19[0xf] + 8) = 0xf;
                  pArr16_19 = pArr16_19 + 0x10;
                  uVal_12 = uVal_12 - 8;
                } while (uVal_12 != 0);
              }
            }
            pLong_20 = *param_1;
            pLong_3 = param_1[1];
            if (pLong_20 != pLong_3) {
              lVal_13 = 0;
              do {
                *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_13 + 0x10) = ZEXT816(0);
                *(uint8_t (*)[16])((int64_t)pLong_17 + lVal_13) = ZEXT816(0);
                pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_13);
                uVal_5 = *pU64_1;
                uVal_6 = pU64_1[1];
                uVal_7 = pU64_1[2];
                uVal_8 = pU64_1[3];
                pU64_1 = (uint32_t *)((int64_t)pLong_20 + lVal_13 + 0x10);
                uVal_9 = pU64_1[1];
                uVal_10 = pU64_1[2];
                uVal_11 = pU64_1[3];
                pU64_2 = (uint32_t *)((int64_t)pLong_17 + lVal_13 + 0x10);
                *pU64_2 = *pU64_1;
                pU64_2[1] = uVal_9;
                pU64_2[2] = uVal_10;
                pU64_2[3] = uVal_11;
                pU64_1 = (uint32_t *)((int64_t)pLong_17 + lVal_13);
                *pU64_1 = uVal_5;
                pU64_1[1] = uVal_6;
                pU64_1[2] = uVal_7;
                pU64_1[3] = uVal_8;
                *(uint64_t *)((int64_t)pLong_20 + lVal_13 + 0x10) = 0;
                *(uint64_t *)((int64_t)pLong_20 + lVal_13 + 0x18) = 0xf;
                *(uint8_t *)((int64_t)pLong_20 + lVal_13) = 0;
                lVal_18 = lVal_13 + 0x20;
                lVal_13 = lVal_13 + 0x20;
              } while ((int64_t *)((int64_t)pLong_20 + lVal_18) != pLong_3);
              pLong_20 = *param_1;
            }
            if (pLong_20 != (int64_t *)0x0) {
              pLong_3 = param_1[1];
              if (pLong_20 == pLong_3) {
                uVal_12 = (int64_t)param_1[2] - (int64_t)pLong_20;
              }
              else {
                do {
                  uVal_12 = pLong_20[3];
                  if (0xf < uVal_12) {
                    lVal_13 = *pLong_20;
                    uVal_15 = uVal_12 + 1;
                    lVal_18 = lVal_13;
                    if (0xfff < uVal_15) {
                      lVal_18 = *(int64_t *)(lVal_13 + -8);
                      if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_18)) goto LAB_1800f14a7;
                      uVal_15 = uVal_12 + 0x28;
                    }
                    thunk_FUN_180695dd0(lVal_18,uVal_15);
                  }
                  pLong_20[2] = 0;
                  pLong_20[3] = 0xf;
                  *(uint8_t *)pLong_20 = 0;
                  pLong_20 = pLong_20 + 4;
                } while (pLong_20 != pLong_3);
                pLong_20 = *param_1;
                uVal_12 = (int64_t)param_1[2] - (int64_t)pLong_20;
              }
              if (0xfff < uVal_12) {
                if ((uint8_t *)0x1f <
                    (uint8_t *)((int64_t)pLong_20 + (-8 - (int64_t)(int64_t *)pLong_20[-1]))) {
LAB_1800f14a7:
                  do {
                    invalidInstructionException();
                  } while( true );
                }
                uVal_12 = uVal_12 + 0x27;
                pLong_20 = (int64_t *)pLong_20[-1];
              }
              thunk_FUN_180695dd0(pLong_20,uVal_12);
            }
            *param_1 = pLong_17;
            param_1[1] = pLong_17 + param_2 * 4;
            param_1[2] = pLong_17 + uVal_14 * 4;
            return;
          }
          if (uVal_14 < 0x80) {
            pLong_17 = (int64_t *)func_0x180672de0(uVal_14 * 0x20);
            goto LAB_1800f126a;
          }
          if (uVal_14 != 0x7ffffffffffffff) {
            lVal_13 = func_0x180672de0(uVal_14 * 0x20 + 0x27);
            pLong_17 = (int64_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            pLong_17[-1] = lVal_13;
            goto LAB_1800f126a;
          }
        }
        func_0x18007ba90();
      }
      func_0x18007c0d0();
      fnPtr_4 = (func_ptr_t )swi(3);
      (*fnPtr_4)();
      return;
    }
    uVal_12 = param_2 - uVal_14;
    if (uVal_12 != 0) {
      if ((uVal_12 & 7) != 0) {
        uVal_15 = 0;
        do {
          *pArr16_19 = ZEXT816(0);
          *(int64_t *)pArr16_19[1] = 0;
          *(int64_t *)((int64_t)pArr16_19[1] + 8) = 0xf;
          pArr16_19 = pArr16_19 + 2;
          uVal_15 = uVal_15 + 1;
        } while ((uVal_12 & 7) != uVal_15);
        uVal_12 = uVal_12 - uVal_15;
      }
      if (uVal_14 - param_2 < 0xfffffffffffffff9) {
        do {
          *pArr16_19 = ZEXT816(0);
          *(int64_t *)pArr16_19[1] = 0;
          *(int64_t *)((int64_t)pArr16_19[1] + 8) = 0xf;
          pArr16_19[2] = ZEXT816(0);
          *(int64_t *)pArr16_19[3] = 0;
          *(int64_t *)((int64_t)pArr16_19[3] + 8) = 0xf;
          pArr16_19[4] = ZEXT816(0);
          *(int64_t *)pArr16_19[5] = 0;
          *(int64_t *)((int64_t)pArr16_19[5] + 8) = 0xf;
          pArr16_19[6] = ZEXT816(0);
          *(int64_t *)pArr16_19[7] = 0;
          *(int64_t *)((int64_t)pArr16_19[7] + 8) = 0xf;
          pArr16_19[8] = ZEXT816(0);
          *(int64_t *)pArr16_19[9] = 0;
          *(int64_t *)((int64_t)pArr16_19[9] + 8) = 0xf;
          pArr16_19[10] = ZEXT816(0);
          *(int64_t *)pArr16_19[0xb] = 0;
          *(int64_t *)((int64_t)pArr16_19[0xb] + 8) = 0xf;
          pArr16_19[0xc] = ZEXT816(0);
          *(int64_t *)pArr16_19[0xd] = 0;
          *(int64_t *)((int64_t)pArr16_19[0xd] + 8) = 0xf;
          pArr16_19[0xe] = ZEXT816(0);
          *(int64_t *)pArr16_19[0xf] = 0;
          *(int64_t *)((int64_t)pArr16_19[0xf] + 8) = 0xf;
          pArr16_19 = pArr16_19 + 0x10;
          uVal_12 = uVal_12 - 8;
        } while (uVal_12 != 0);
      }
    }
    param_1[1] = (int64_t *)pArr16_19;
  }
  return;
}

// func_0x1800f1540
void func_0x1800f1540(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  ch_1 = *(char *)((int64_t)param_3 + 0x19);
  do {
    if (ch_1 != '\0') {
      return;
    }
    func_0x1800f1540(param_1,param_2,param_3[2]);
    pLong_2 = (int64_t *)*param_3;
    uVal_3 = param_3[8];
    if (0xf < uVal_3) {
      lVal_4 = param_3[5];
      uVal_5 = uVal_3 + 1;
      lVal_6 = lVal_4;
      if (0xfff < uVal_5) {
        lVal_6 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_6)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_5 = uVal_3 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_5);
    }
    param_3[7] = 0;
    param_3[8] = 0xf;
    *(uint8_t *)(param_3 + 5) = 0;
    thunk_FUN_180695dd0(param_3,0x48);
    ch_1 = *(char *)((int64_t)pLong_2 + 0x19);
    param_3 = pLong_2;
  } while( true );
}

// func_0x1800f15f0
void func_0x1800f15f0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x22] = 1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  return;
}

// func_0x1800f16f0
uint64_t func_0x1800f16f0(uint64_t param_1,uint64_t param_2)
{
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x18);
  }
  return param_1;
}

// func_0x1800f17a0
void func_0x1800f17a0(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  if (-1 < (int64_t)param_2) {
    uVal_1 = *param_1;
    uVal_4 = param_1[1];
    uVal_2 = param_1[2] - uVal_1;
    uVal_6 = (uVal_2 >> 1) + uVal_2;
    if (uVal_6 <= param_2) {
      uVal_6 = param_2;
    }
    if ((uVal_2 >> 1 ^ 0x7fffffffffffffff) < uVal_2) {
      uVal_6 = 0x7fffffffffffffff;
    }
    if (uVal_6 == 0) {
      uVal_2 = 0;
    }
    else if (uVal_6 < 0x1000) {
      uVal_2 = func_0x180672de0(uVal_6);
    }
    else {
      if (0xffffffffffffffd8 < uVal_6) goto LAB_1800f18af;
      lVal_3 = func_0x180672de0(uVal_6 + 0x27);
      uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_2 - 8) = lVal_3;
    }
    lVal_3 = uVal_4 - uVal_1;
    func_0x1806ab010(uVal_2 + lVal_3,0,param_2 - lVal_3);
    func_0x1806aa960(uVal_2,*param_1,param_1[1] - *param_1);
    uVal_1 = *param_1;
    if (uVal_1 != 0) {
      uVal_5 = param_1[2] - uVal_1;
      uVal_4 = uVal_1;
      if (0xfff < uVal_5) {
        uVal_4 = *(uint64_t *)(uVal_1 - 8);
        if (0x1f < (uVal_1 - 8) - uVal_4) goto LAB_1800f18b4;
        uVal_5 = uVal_5 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_4,uVal_5);
    }
    *param_1 = uVal_2;
    param_1[1] = param_2 + uVal_2;
    param_1[2] = uVal_6 + uVal_2;
    return;
  }
  func_0x18007c0d0();
LAB_1800f18af:
  func_0x18007ba90();
LAB_1800f18b4:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1800f1a50
void func_0x1800f1a50(uint64_t param_1,uint64_t param_2,int64_t *param_3)
{
  char ch_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  ch_1 = *(char *)((int64_t)param_3 + 0x19);
  do {
    if (ch_1 != '\0') {
      return;
    }
    func_0x1800f1a50(param_1,param_2,param_3[2]);
    pLong_2 = (int64_t *)*param_3;
    uVal_3 = param_3[7];
    if (0xf < uVal_3) {
      lVal_4 = param_3[4];
      uVal_5 = uVal_3 + 1;
      lVal_6 = lVal_4;
      if (0xfff < uVal_5) {
        lVal_6 = *(int64_t *)(lVal_4 + -8);
        if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_6)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_5 = uVal_3 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_5);
    }
    param_3[6] = 0;
    param_3[7] = 0xf;
    *(uint8_t *)(param_3 + 4) = 0;
    thunk_FUN_180695dd0(param_3,0x48);
    ch_1 = *(char *)((int64_t)pLong_2 + 0x19);
    param_3 = pLong_2;
  } while( true );
}

// func_0x1800f1b00
void func_0x1800f1b00(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  if (param_2 >> 0x3e == 0) {
    uVal_1 = *param_1;
    uVal_2 = (int64_t)(param_1[2] - uVal_1) >> 2;
    uVal_6 = (uVal_2 >> 1) + uVal_2;
    if (uVal_6 <= param_2) {
      uVal_6 = param_2;
    }
    if (0x3fffffffffffffff - (uVal_2 >> 1) < uVal_2) {
      uVal_6 = 0x3fffffffffffffff;
    }
    if (uVal_6 >> 0x3e == 0) {
      uVal_2 = param_1[1];
      if (uVal_6 == 0) {
        uVal_5 = 0;
      }
      else if (uVal_6 < 0x400) {
        uVal_5 = func_0x180672de0(uVal_6 * 4);
      }
      else {
        if (0x3ffffffffffffff6 < uVal_6) goto LAB_1800f1c36;
        lVal_3 = func_0x180672de0(uVal_6 * 4 + 0x27);
        uVal_5 = lVal_3 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_5 - 8) = lVal_3;
      }
      lVal_3 = uVal_2 - uVal_1;
      func_0x1806ab010(uVal_5 + lVal_3,0,(param_2 - (lVal_3 >> 2)) * 4);
      func_0x1806aa960(uVal_5,*param_1,param_1[1] - *param_1);
      uVal_1 = *param_1;
      if (uVal_1 != 0) {
        uVal_4 = param_1[2] - uVal_1;
        uVal_2 = uVal_1;
        if (0xfff < uVal_4) {
          uVal_2 = *(uint64_t *)(uVal_1 - 8);
          if (0x1f < (uVal_1 - 8) - uVal_2) goto LAB_1800f1c40;
          uVal_4 = uVal_4 + 0x27;
        }
        thunk_FUN_180695dd0(uVal_2,uVal_4);
      }
      *param_1 = uVal_5;
      param_1[1] = uVal_5 + param_2 * 4;
      param_1[2] = uVal_5 + uVal_6 * 4;
      return;
    }
LAB_1800f1c36:
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_1800f1c40:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1800f1d60
void func_0x1800f1d60(void)
{
  func_ptr_t fnPtr_1;
  
  func_0x1806744f0("invalid string_view position");
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800f1d80
void func_0x1800f1d80(int64_t *param_1,uint64_t param_2,uint param_3)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  uint uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  char *fnPtr_7;
  char *fnPtr_8;
  uint8_t auStack_68 [32];
  uint32_t local_48 [2];
  uint8_t **local_40;
  uint8_t local_38 [40];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  lVal_4 = func_0x1800a6830(param_1 + 2,param_2,param_3 | 1);
  lVal_5 = (int64_t)*(int *)(*param_1 + 4);
  if (lVal_4 == 0) {
    uVal_3 = *(uint *)((int64_t)param_1 + lVal_5 + 0x10) & 0x15 |
            (uint)(*(int64_t *)((int64_t)param_1 + lVal_5 + 0x48) == 0) << 2 | 2;
    *(uint *)((int64_t)param_1 + lVal_5 + 0x10) = uVal_3;
    uVal_2 = *(uint *)((int64_t)param_1 + lVal_5 + 0x14);
    uVal_6 = (uint64_t)uVal_2;
    uVal_3 = uVal_3 & uVal_2;
    if (uVal_3 == 0) goto LAB_1800f1e0e;
  }
  else {
    uVal_2 = (uint)(*(int64_t *)((int64_t)param_1 + lVal_5 + 0x48) == 0) << 2;
    *(uint *)((int64_t)param_1 + lVal_5 + 0x10) = uVal_2;
    if ((*(uint *)((int64_t)param_1 + lVal_5 + 0x14) & uVal_2) != 0) {
      fnPtr_7 = "ios_base::badbit set";
      goto LAB_1800f1e6b;
    }
LAB_1800f1e0e:
    if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_68)) {
      return;
    }
    uVal_6 = local_10;
    uVal_3 = func_0x180673080();
  }
  fnPtr_8 = "ios_base::failbit set";
  if ((uVal_6 & 2) == 0) {
    fnPtr_8 = "ios_base::eofbit set";
  }
  fnPtr_7 = "ios_base::badbit set";
  if ((uVal_3 & 4) == 0) {
    fnPtr_7 = fnPtr_8;
  }
LAB_1800f1e6b:
  local_40 = &PTR_vftable_1806b0968;
  local_48[0] = 1;
  func_0x180096770(local_38,fnPtr_7,local_48);
  func_0x18067a120(local_38,&DAT_180768ca8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800f1e90
int64_t * func_0x1800f1e90(int64_t *param_1,uint64_t *param_2,uint param_3)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int *pInt_3;
  int iVal_4;
  uint uVal_5;
  uint uVal_6;
  uint64_t *pU64_7;
  int64_t lVal_8;
  char *fnPtr_9;
  char *fnPtr_10;
  byte bFlag_11;
  uint8_t **local_90 [5];
  uint32_t local_68 [2];
  uint8_t **local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  byte local_39;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  pLong_1 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
  local_58 = param_1;
  local_48 = param_1;
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 8))();
  }
  local_50 = func_0x1800acb80(local_48,1);
  uVal_5 = 2;
  if (local_50 == '\0') goto LAB_1800f20e6;
  param_2[2] = 0;
  pU64_7 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    pU64_7 = (uint64_t *)*param_2;
  }
  *(uint8_t *)pU64_7 = 0;
  pLong_1 = *(int64_t **)((int64_t)local_48 + (int64_t)*(int *)(*local_48 + 4) + 0x48);
  if ((*(byte **)pLong_1[7] == (byte *)0x0) || (*(int *)pLong_1[10] < 1)) {
    local_39 = 0;
    uVal_5 = (**(func_ptr_t *)(*pLong_1 + 0x30))();
  }
  else {
    uVal_5 = (uint)**(byte **)pLong_1[7];
  }
  bFlag_11 = 0;
LAB_1800f1f79:
  do {
    if (uVal_5 == 0xffffffff) {
      uVal_6 = 1;
LAB_1800f20c8:
      while( true ) {
        uVal_5 = uVal_6 | 2;
        if ((bFlag_11 & 1) != 0) {
          uVal_5 = uVal_6;
        }
LAB_1800f20e6:
        lVal_8 = (int64_t)*(int *)(*local_48 + 4);
        uVal_5 = uVal_5 | *(uint *)((int64_t)local_48 + lVal_8 + 0x10) & 0x17 |
                (uint)(*(int64_t *)((int64_t)local_48 + lVal_8 + 0x48) == 0) << 2;
        *(uint *)((int64_t)local_48 + lVal_8 + 0x10) = uVal_5;
        uVal_5 = uVal_5 & *(uint *)((int64_t)local_48 + lVal_8 + 0x14);
        if (uVal_5 == 0) break;
        fnPtr_9 = "ios_base::failbit set";
        if ((uVal_5 & 2) == 0) {
          fnPtr_9 = "ios_base::eofbit set";
        }
        fnPtr_10 = "ios_base::badbit set";
        if ((uVal_5 & 4) == 0) {
          fnPtr_10 = fnPtr_9;
        }
        local_68[0] = 1;
        local_60 = &PTR_vftable_1806b0968;
        func_0x1800968f0(local_90,local_68,fnPtr_10);
        local_90[0] = std::ios_base::failure::vftable;
        func_0x18067a120(local_90,&DAT_180768ca8);
        uVal_6 = 0;
        bFlag_11 = local_39;
      }
      pLong_1 = *(int64_t **)((int64_t)local_58 + (int64_t)*(int *)(*local_58 + 4) + 0x48);
      if (pLong_1 != (int64_t *)0x0) {
        (**(func_ptr_t *)(*pLong_1 + 0x10))();
      }
      return local_48;
    }
    if (uVal_5 == (param_3 & 0xff)) {
      pLong_1 = *(int64_t **)((int64_t)local_48 + (int64_t)*(int *)(*local_48 + 4) + 0x48);
      if (*(int64_t *)pLong_1[7] != 0) {
        iVal_4 = *(int *)pLong_1[10];
        if (0 < iVal_4) {
          *(int *)pLong_1[10] = iVal_4 + -1;
          *(int64_t *)pLong_1[7] = *(int64_t *)pLong_1[7] + 1;
          uVal_5 = 0;
          goto LAB_1800f20e6;
        }
      }
      local_39 = 1;
      (**(func_ptr_t *)(*pLong_1 + 0x38))();
      uVal_5 = 0;
      goto LAB_1800f20e6;
    }
    uVal_2 = param_2[2];
    if (0x7ffffffffffffffe < uVal_2) {
      uVal_6 = 2;
      goto LAB_1800f20c8;
    }
    if (uVal_2 < (uint64_t)param_2[3]) {
      param_2[2] = uVal_2 + 1;
      pU64_7 = param_2;
      if (0xf < (uint64_t)param_2[3]) {
        pU64_7 = (uint64_t *)*param_2;
      }
      *(char *)((int64_t)pU64_7 + uVal_2) = (char)uVal_5;
      *(uint8_t *)((int64_t)pU64_7 + uVal_2 + 1) = 0;
    }
    else {
      local_39 = bFlag_11;
      func_0x18008c590(param_2,1);
    }
    pLong_1 = *(int64_t **)((int64_t)local_48 + (int64_t)*(int *)(*local_48 + 4) + 0x48);
    if (*(int64_t *)pLong_1[7] == 0) break;
    pInt_3 = (int *)pLong_1[10];
    iVal_4 = *pInt_3;
    if (iVal_4 < 2) {
      if (iVal_4 != 1) break;
      *pInt_3 = 0;
      *(int64_t *)pLong_1[7] = *(int64_t *)pLong_1[7] + 1;
      goto LAB_1800f2044;
    }
    *pInt_3 = iVal_4 + -1;
    lVal_8 = *(int64_t *)pLong_1[7];
    *(int64_t *)pLong_1[7] = lVal_8 + 1;
    uVal_5 = (uint)*(byte *)(lVal_8 + 1);
    bFlag_11 = 1;
  } while( true );
  local_39 = 1;
  iVal_4 = (**(func_ptr_t *)(*pLong_1 + 0x38))(pLong_1);
  uVal_5 = 0xffffffff;
  bFlag_11 = 1;
  if (iVal_4 != -1) {
LAB_1800f2044:
    if ((*(byte **)pLong_1[7] == (byte *)0x0) || (*(int *)pLong_1[10] < 1)) {
      local_39 = 1;
      bFlag_11 = 1;
      uVal_5 = (**(func_ptr_t *)(*pLong_1 + 0x30))(pLong_1);
    }
    else {
      uVal_5 = (uint)**(byte **)pLong_1[7];
      bFlag_11 = 1;
    }
  }
  goto LAB_1800f1f79;
}

// Catch_All@1800f21b0
uint64_t Catch_All_1800f21b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x70) + 4) +
                (int64_t)*(int64_t **)(param_2 + 0x70),4,1);
  return 0x1800f21a3;
}

// Unwind@1800f2200
void Unwind_1800f2200(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x60);
  return;
}

// Unwind@1800f2230
void Unwind_1800f2230(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x60);
  return;
}

// Unwind@1800f2260
void Unwind_1800f2260(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800f2280
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f2280(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2c9c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xb5181c509f9d9cf;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x9f9d9cf;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xc5;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1800f22c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f22c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af244;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af240;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af248;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af24c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x35;
    param_1[1][1] = param_1[1][1] ^ 0x15;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800f22e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f22e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cd4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cd0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cd8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cdc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x810979618f4359cd;
    param_1[1][8] = param_1[1][8] ^ 0xcd;
    param_1[1][9] = param_1[1][9] ^ 0x59;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1800f2310
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f2310(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = _UNK_1806b2cec;
  uVal_9 = _UNK_1806b2ce8;
  uVal_8 = _UNK_1806b2ce4;
  uVal_7 = _DAT_1806b2ce0;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ce4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ce0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ce8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cec;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = 0;
  }
  return;
}

// func_0x1800f2340
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f2340(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d0c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xd1;
    param_1[1][1] = param_1[1][1] ^ 0x5f;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800f2360
uint8_t (*func_0x1800f2360(uint8_t (*param_1)[16],int64_t *param_2,uint64_t param_3,uint8_t *param_4, uint64_t param_5))[16]
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  uint64_t *pU64_6;
  uint8_t (*pArr16_7)[16];
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t *pU64_11;
  uint64_t *pU64_12;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint64_t *local_88;
  uint64_t *local_80;
  uint8_t local_78 [16];
  uint8_t local_68 [24];
  uint64_t *local_50;
  int64_t *local_48;
  uint8_t (*local_40)[16];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = param_2;
  local_40 = (uint8_t (*)[16])func_0x180672de0(0x1a8);
  *(uint64_t *)((int64_t)local_40 + 8) = 0x100000001;
  *(uint8_t ***)local_40 = &PTR_FUN_1806b4160;
  pU64_11 = (uint64_t *)((int64_t)local_40 + 0x10);
  func_0x180650c40(pU64_11,param_3,*param_4,param_5);
  pU64_6 = (uint64_t *)local_40;
  local_68._8_8_ = local_40;
  local_68._0_8_ = pU64_11;
  local_50 = (uint64_t *)func_0x180672de0(0x128);
  local_50[1] = 0x100000001;
  *local_50 = &PTR_FUN_1806b41d0;
  pU64_12 = local_50 + 2;
  local_80 = pU64_6;
  local_68._0_16_ = ZEXT816(0);
  local_a8 = *(uint32_t *)local_48;
  uStack_a4 = *(uint32_t *)((int64_t)local_48 + 4);
  uStack_a0 = *(uint32_t *)(local_48 + 1);
  uStack_9c = *(uint32_t *)((int64_t)local_48 + 0xc);
  local_98 = *(uint32_t *)(local_48 + 2);
  uStack_94 = *(uint32_t *)((int64_t)local_48 + 0x14);
  uStack_90 = *(uint32_t *)(local_48 + 3);
  uStack_8c = *(uint32_t *)((int64_t)local_48 + 0x1c);
  local_48[2] = 0;
  local_48[3] = 0xf;
  *(uint8_t *)local_48 = 0;
  local_88 = pU64_11;
  func_0x1800f2690(pU64_12,&local_a8,&local_88);
  pU64_6 = local_50;
  *(uint64_t **)*param_1 = pU64_12;
  *(uint64_t **)(*param_1 + 8) = local_50;
  local_40 = param_1;
  uVal_8 = func_0x180654480();
  LOCK();
  *(int *)(pU64_6 + 1) = *(int *)(pU64_6 + 1) + 1;
  UNLOCK();
  local_78 = *local_40;
  func_0x180653f60(uVal_8,local_78);
  pArr16_7 = local_40;
  pLong_5 = (int64_t *)local_68._8_8_;
  if ((int64_t *)local_68._8_8_ != (int64_t *)0x0) {
    LOCK();
    pLong_1 = (int64_t *)(local_68._8_8_ + 8);
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (***(func_ptr_t **)local_68._8_8_)(local_68._8_8_);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_5 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
      }
    }
  }
  uVal_3 = local_48[3];
  if (0xf < uVal_3) {
    lVal_4 = *local_48;
    uVal_9 = uVal_3 + 1;
    lVal_10 = lVal_4;
    if (0xfff < uVal_9) {
      lVal_10 = *(int64_t *)(lVal_4 + -8);
      if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_10)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_3 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_10,uVal_9);
  }
  return pArr16_7;
}

// Unwind@1800f2500
void Unwind_1800f2500(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x88));
  return;
}

// Unwind@1800f2530
void Unwind_1800f2530(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x60);
  return;
}

// Unwind@1800f2560
void Unwind_1800f2560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x80));
  return;
}

// Unwind@1800f2590
void Unwind_1800f2590(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0x1a8);
  return;
}

// Unwind@1800f25d0
void Unwind_1800f25d0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x78),0x128);
  return;
}

// func_0x1800f2610
void func_0x1800f2610(int64_t param_1)
{
  uint64_t *pU64_1;
  
  func_0x1806503e0(param_1 + 0x78);
  *(uint8_t ***)(param_1 + 0x10) = &PTR_FUN_1806b4180;
  pU64_1 = *(uint64_t **)(param_1 + 0x20);
  if (pU64_1 != (uint64_t *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f2645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
    return;
  }
  return;
}

// func_0x1800f2680
void func_0x1800f2680(int64_t param_1)
{
                    /* WARNING: Could not recover jumptable at 0x0001800f268d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (***(func_ptr_t **)(param_1 + 0x10))(param_1 + 0x10,0);
  return;
}

// func_0x1800f2690
uint64_t func_0x1800f2690(uint64_t param_1,int64_t *param_2,uint8_t (*param_3)[16])
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint64_t local_58;
  uint64_t uStack_50;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint8_t local_38 [8];
  int64_t *local_30;
  uint8_t (*local_28)[16];
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_48 = *(uint32_t *)*param_3;
  uStack_44 = *(uint32_t *)(*param_3 + 4);
  uStack_40 = *(uint32_t *)(*param_3 + 8);
  uStack_3c = *(uint32_t *)(*param_3 + 0xc);
  *param_3 = ZEXT816(0);
  local_88 = *(uint *)param_2;
  uStack_84 = *(uint32_t *)((int64_t)param_2 + 4);
  uStack_80 = *(uint32_t *)(param_2 + 1);
  uStack_7c = *(uint32_t *)((int64_t)param_2 + 0xc);
  local_78 = *(uint32_t *)(param_2 + 2);
  uStack_74 = *(uint32_t *)((int64_t)param_2 + 0x14);
  uStack_70 = *(uint32_t *)(param_2 + 3);
  uStack_6c = *(uint32_t *)((int64_t)param_2 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(uint8_t *)param_2 = 0;
  local_58 = 0;
  uStack_50 = 0xf;
  local_68 = local_88 & 0xffffff00;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  local_30 = param_2;
  local_28 = param_3;
  func_0x1800f2810(local_88,&local_88,&local_48,local_38);
  pLong_5 = (int64_t *)CONCAT44(uStack_3c,uStack_40);
  if (pLong_5 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_5 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_5)(pLong_5);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_5 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
      }
    }
  }
  pLong_5 = local_30;
  uVal_3 = local_30[3];
  if (0xf < uVal_3) {
    lVal_4 = *local_30;
    uVal_6 = uVal_3 + 1;
    lVal_7 = lVal_4;
    if (0xfff < uVal_6) {
      lVal_7 = *(int64_t *)(lVal_4 + -8);
      if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_3 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
  }
  pLong_5[2] = 0;
  pLong_5[3] = 0xf;
  *(uint8_t *)pLong_5 = 0;
  pLong_5 = *(int64_t **)(*local_28 + 8);
  if (pLong_5 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_5 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_5)(pLong_5);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_5 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
      }
    }
  }
  return param_1;
}

// Unwind@1800f27d0
void Unwind_1800f27d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  func_0x18001deb0(param_2 + 0x60);
  func_0x180001e70(*(uint64_t *)(param_2 + 0x78));
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x80));
  return;
}

// func_0x1800f2810
uint64_t * func_0x1800f2810(uint64_t *param_1,int64_t *param_2,uint64_t *param_3,uint64_t *param_4)
{
  int *pInt_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint8_t (*pArr16_11)[16];
  uint64_t uVal_12;
  int64_t lVal_13;
  
  *param_1 = &PTR_LAB_1806b41f0;
  *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  uVal_2 = *(uint32_t *)param_2;
  uVal_3 = *(uint32_t *)((int64_t)param_2 + 4);
  uVal_4 = *(uint32_t *)(param_2 + 1);
  uVal_5 = *(uint32_t *)((int64_t)param_2 + 0xc);
  uVal_6 = *(uint32_t *)((int64_t)param_2 + 0x14);
  uVal_7 = *(uint32_t *)(param_2 + 3);
  uVal_8 = *(uint32_t *)((int64_t)param_2 + 0x1c);
  *(uint32_t *)(param_1 + 3) = *(uint32_t *)(param_2 + 2);
  *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_6;
  *(uint32_t *)(param_1 + 4) = uVal_7;
  *(uint32_t *)((int64_t)param_1 + 0x24) = uVal_8;
  *(uint32_t *)(param_1 + 1) = uVal_2;
  *(uint32_t *)((int64_t)param_1 + 0xc) = uVal_3;
  *(uint32_t *)(param_1 + 2) = uVal_4;
  *(uint32_t *)((int64_t)param_1 + 0x14) = uVal_5;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(uint8_t *)param_2 = 0;
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  param_1[7] = 0;
  lVal_13 = (int64_t)param_4 - (int64_t)param_3;
  if (lVal_13 != 0) {
    uVal_9 = (int64_t)param_4 - (int64_t)param_3 >> 4;
    if (uVal_9 >> 0x3c != 0) {
      func_0x18007c0d0();
      goto LAB_1800f29e5;
    }
    if (uVal_9 < 0x100) {
      pArr16_11 = (uint8_t (*)[16])func_0x180672de0(lVal_13);
    }
    else {
      lVal_10 = func_0x180672de0(lVal_13 + 0x27);
      pArr16_11 = (uint8_t (*)[16])(lVal_10 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pArr16_11[-1] + 8) = lVal_10;
    }
    param_1[5] = pArr16_11;
    param_1[6] = pArr16_11;
    param_1[7] = lVal_13 + (int64_t)pArr16_11;
    do {
      *pArr16_11 = ZEXT816(0);
      if (param_3[1] != 0) {
        LOCK();
        pInt_1 = (int *)(param_3[1] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      *(uint64_t *)*pArr16_11 = *param_3;
      *(uint64_t *)(*pArr16_11 + 8) = param_3[1];
      pArr16_11 = pArr16_11 + 1;
      param_3 = param_3 + 2;
    } while (param_3 != param_4);
    param_1[6] = pArr16_11;
  }
  param_1[8] = 0x600000002;
  param_1[0x10] = 0;
  *(uint8_t (*)[16])(param_1 + 0x12) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x14) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x16) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x18) = ZEXT816(0);
  param_1[0x1a] = 0xffffffff;
  *(uint32_t *)(param_1 + 0x11) = 2;
  *(uint8_t *)(param_1 + 0x1b) = 0;
  *(uint8_t (*)[16])(param_1 + 0x1c) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1e) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x20) = ZEXT816(0);
  param_1[0x22] = 0;
  uVal_9 = param_2[3];
  if (0xf < uVal_9) {
    lVal_13 = *param_2;
    uVal_12 = uVal_9 + 1;
    lVal_10 = lVal_13;
    if (0xfff < uVal_12) {
      lVal_10 = *(int64_t *)(lVal_13 + -8);
      if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_10)) {
LAB_1800f29e5:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_12 = uVal_9 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_10,uVal_12);
  }
  return param_1;
}

// Unwind@1800f29f0
void Unwind_1800f29f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x1800f2a60
void func_0x1800f2a60(uint64_t *param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  
  *param_1 = &PTR_LAB_1806b41f0;
  lVal_8 = param_1[0x20];
  if (lVal_8 != 0) {
    lVal_5 = param_1[0x21];
    if (lVal_8 != lVal_5) {
      lVal_8 = lVal_8 + 0x80;
      do {
        if (lVal_8 != *(int64_t *)(lVal_8 + -0x20)) {
          thunk_FUN_180695dd0();
        }
        lVal_7 = lVal_8 + 0x100;
        lVal_8 = lVal_8 + 0x180;
      } while (lVal_7 != lVal_5);
      lVal_8 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x20);
    }
    uVal_6 = param_1[0x22] - lVal_8;
    lVal_5 = lVal_8;
    if (0xfff < uVal_6) {
      lVal_5 = *(int64_t *)(lVal_8 + -8);
      if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_5)) goto LAB_1800f2c4e;
      uVal_6 = uVal_6 | 0x27;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_6);
    *(uint8_t (*)[16])(param_1 + 0x20) = ZEXT816(0);
    param_1[0x22] = 0;
  }
  pLong_3 = (int64_t *)param_1[0x10];
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,pLong_3 != param_1 + 9);
    param_1[0x10] = 0;
  }
  lVal_8 = param_1[5];
  if (lVal_8 != 0) {
    lVal_5 = param_1[6];
    if (lVal_8 == lVal_5) {
      uVal_6 = param_1[7] - lVal_8;
    }
    else {
      do {
        pLong_3 = *(int64_t **)(lVal_8 + 8);
        if (pLong_3 != (int64_t *)0x0) {
          LOCK();
          pLong_1 = pLong_3 + 1;
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (**(func_ptr_t *)*pLong_3)(pLong_3);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_3 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
            }
          }
        }
        lVal_8 = lVal_8 + 0x10;
      } while (lVal_8 != lVal_5);
      lVal_8 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 5);
      uVal_6 = param_1[7] - lVal_8;
    }
    if (0xfff < uVal_6) {
      if (0x1f < (uint64_t)((lVal_8 + -8) - *(int64_t *)(lVal_8 + -8))) goto LAB_1800f2c4e;
      uVal_6 = uVal_6 + 0x27;
      lVal_8 = *(int64_t *)(lVal_8 + -8);
    }
    thunk_FUN_180695dd0(lVal_8,uVal_6);
    *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
    param_1[7] = 0;
  }
  uVal_6 = param_1[4];
  if (0xf < uVal_6) {
    lVal_8 = param_1[1];
    uVal_4 = uVal_6 + 1;
    lVal_5 = lVal_8;
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(lVal_8 + -8);
      if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_5)) {
LAB_1800f2c4e:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_6 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(uint8_t *)(param_1 + 1) = 0;
  return;
}

// func_0x1800f2c80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f2c80(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x91219b1ff7f5f1d5;
    param_1[1][8] = param_1[1][8] ^ 0xd5;
    param_1[1][9] = param_1[1][9] ^ 0xf1;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1800f2cb0
void func_0x1800f2cb0(int64_t *param_1,uint64_t param_2,uint param_3,uint32_t param_4,int param_5)
{
  int64_t *pLong_1;
  uint uVal_2;
  func_ptr_t fnPtr_3;
  uint8_t *pU64_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  char *fnPtr_7;
  uint uVal_8;
  char *fnPtr_9;
  uint8_t **local_88 [5];
  uint32_t local_60 [2];
  uint8_t **local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_5 == 0) {
    pU64_4 = (uint8_t *)*param_1;
  }
  else {
    pU64_4 = &DAT_1806b3a50;
    *param_1 = (int64_t)&DAT_1806b3a50;
    *(uint8_t (*)[16])(param_1 + 0x16) = ZEXT816(0);
    *(uint32_t *)(param_1 + 0x18) = 0;
    *(uint8_t (*)[16])(param_1 + 0x19) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0x1b) = ZEXT816(0);
    param_1[0x1d] = 0;
    param_1[0x15] = (int64_t)&PTR_LAB_1806b0958;
    *(uint8_t (*)[16])(param_1 + 0x1e) = ZEXT816(0);
    *(uint8_t *)(param_1 + 0x20) = 0;
  }
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(pU64_4 + 4)) = &PTR_LAB_1806b3a48;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  pLong_1 = param_1 + 1;
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4)) = &PTR_LAB_1806b09a0;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x10;
  local_48 = param_1;
  func_0x1800964f0((int64_t)*(int *)(*param_1 + 4) + (int64_t)param_1,pLong_1,0);
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4)) = &PTR_LAB_1806b3a48;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  param_1[1] = (int64_t)&PTR_LAB_1806b0210;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  param_1[0xc] = 0;
  lVal_5 = func_0x180672de0(0x10);
  uVal_6 = func_0x180673ba0(1);
  *(uint64_t *)(lVal_5 + 8) = uVal_6;
  local_48[0xd] = lVal_5;
  local_48[1] = (int64_t)&PTR_LAB_1806b0190;
  *(uint8_t *)((int64_t)local_48 + 0x84) = 0;
  *(uint8_t *)((int64_t)local_48 + 0x79) = 0;
  local_48[4] = (int64_t)(uint8_t (*)[16])(local_48 + 2);
  local_48[5] = (int64_t)(local_48 + 3);
  local_48[8] = (int64_t)(local_48 + 6);
  local_48[9] = (int64_t)(local_48 + 7);
  local_48[0xb] = (int64_t)(local_48 + 10);
  local_48[0xc] = (int64_t)local_48 + 0x54;
  local_48[10] = 0;
  *(uint8_t (*)[16])(local_48 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(local_48 + 6) = ZEXT816(0);
  local_48[0x11] = 0;
  *(uint64_t *)((int64_t)local_48 + 0x7c) = DAT_18083eb3c;
  local_48[0xe] = 0;
  local_50 = pLong_1;
  lVal_5 = func_0x1800a6830(pLong_1,param_2,param_3 | 2,param_4);
  if (lVal_5 == 0) {
    lVal_5 = (int64_t)*(int *)(*local_48 + 4);
    uVal_8 = *(uint *)((int64_t)local_48 + lVal_5 + 0x10) & 0x15 |
            (uint)(*(int64_t *)((int64_t)local_48 + lVal_5 + 0x48) == 0) << 2 | 2;
    *(uint *)((int64_t)local_48 + lVal_5 + 0x10) = uVal_8;
    uVal_2 = *(uint *)((int64_t)local_48 + lVal_5 + 0x14);
    uVal_8 = uVal_8 & uVal_2;
    if (uVal_8 != 0) {
      fnPtr_7 = "ios_base::failbit set";
      if ((uVal_2 & 2) == 0) {
        fnPtr_7 = "ios_base::eofbit set";
      }
      fnPtr_9 = "ios_base::badbit set";
      if ((uVal_8 & 4) == 0) {
        fnPtr_9 = fnPtr_7;
      }
      local_60[0] = 1;
      local_58 = &PTR_vftable_1806b0968;
      func_0x1800968f0(local_88,local_60,fnPtr_9);
      local_88[0] = std::ios_base::failure::vftable;
      func_0x18067a120(local_88,&DAT_180768ca8);
      fnPtr_3 = (func_ptr_t )swi(3);
      (*fnPtr_3)();
      return;
    }
  }
  return;
}

// Unwind@1800f2f50
void Unwind_1800f2f50(uint64_t param_1,int64_t param_2)
{
  func_0x18008b1c0(*(uint64_t *)(param_2 + 0x58));
  return;
}

// Unwind@1800f2f80
void Unwind_1800f2f80(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  if (*(int *)(param_2 + 0xd0) != 0) {
    lVal_1 = *(int64_t *)(param_2 + 0x60);
    *(uint8_t ***)(lVal_1 + 0xa8) = &PTR_LAB_1806b0288;
    func_0x180673810(lVal_1 + 0xa8);
  }
  return;
}

// Unwind@1800f2fd0
void Unwind_1800f2fd0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800f2ff0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f2ff0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d24;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d20;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d28;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d2c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xcb0b4fdb6b4b3b87;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1800f3020
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f3020(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d3c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf53e9eb1b253f8d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x1b253f8d;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xeb;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xe9;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1800f3060
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f3060(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d44;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d40;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d48;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d4c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x398751e3;
    param_1[1][4] = param_1[1][4] ^ 0xe1;
    param_1[1][5] = param_1[1][5] ^ 0xb9;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1800f3090
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f3090(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aec74;
    uVal_2 = param_1[2] ^ _UNK_1806aec78;
    uVal_3 = param_1[3] ^ _UNK_1806aec7c;
    *param_1 = *param_1 ^ _DAT_1806aec70;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806b2d50,0);
  }
  return;
}

// func_0x1800f30e0
int64_t ** func_0x1800f30e0(int64_t **param_1,int64_t **param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVal_1;
  bool bFlag_2;
  int iVal_3;
  int iVal_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  void *pVoid_9;
  int64_t lVal_10;
  int64_t **ptr2_Long_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint32_t uVal_15;
  int64_t *pLong_16;
  int64_t *pLong_17;
  int64_t *local_80;
  uint32_t local_78;
  uint8_t local_70 [8];
  int64_t local_68;
  int64_t local_60;
  int64_t **local_58;
  int64_t **local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  func_0x1800f33a0(local_70,param_1,*param_1,param_3,param_4);
  pLong_5 = *param_1;
  pLong_17 = (int64_t *)pLong_5[1];
  uVal_15 = 0;
  local_60 = local_68;
  local_58 = param_1;
  local_50 = param_2;
  if (*(char *)((int64_t)pLong_17 + 0x19) == '\0') {
    if (*(uint64_t *)(local_68 + 0x40) < 0x10) {
      pVoid_9 = (void *)(local_68 + 0x28);
    }
    else {
      pVoid_9 = *(void **)(local_68 + 0x28);
    }
    iVal_4 = *(int *)(local_68 + 0x20);
    uVal_12 = *(uint64_t *)(local_68 + 0x38);
    pLong_8 = pLong_17;
    pLong_16 = pLong_5;
    do {
      pLong_17 = pLong_8;
      pLong_6 = pLong_17;
      pLong_5 = pLong_17;
      if (*(int *)(pLong_17 + 4) == iVal_4) {
        if ((uint64_t)pLong_17[8] < 0x10) {
          pLong_8 = pLong_17 + 5;
        }
        else {
          pLong_8 = (int64_t *)pLong_17[5];
        }
        uVal_7 = pLong_17[7];
        uVal_13 = uVal_7;
        if (uVal_12 < uVal_7) {
          uVal_13 = uVal_12;
        }
        iVal_3 = memcmp(pLong_8,pVoid_9,uVal_13);
        bFlag_2 = uVal_7 < uVal_12;
        if (iVal_3 != 0) {
          bFlag_2 = iVal_3 < 0;
        }
        uVal_15 = 1;
        if (bFlag_2) {
LAB_1800f31f0:
          uVal_15 = 0;
          pLong_6 = pLong_17 + 2;
          pLong_5 = pLong_16;
        }
      }
      else {
        uVal_15 = 1;
        if (*(int *)(pLong_17 + 4) < iVal_4) goto LAB_1800f31f0;
      }
      pLong_8 = (int64_t *)*pLong_6;
      pLong_16 = pLong_5;
    } while (*(char *)((int64_t)(int64_t *)*pLong_6 + 0x19) == '\0');
  }
  lVal_14 = local_60;
  if (*(char *)((int64_t)pLong_5 + 0x19) == '\0') {
    if (*(int *)(local_60 + 0x20) == *(int *)(pLong_5 + 4)) {
      if ((uint64_t)pLong_5[8] < 0x10) {
        pLong_8 = pLong_5 + 5;
        uVal_12 = pLong_5[7];
        uVal_7 = *(uint64_t *)(local_60 + 0x38);
        if (0xf < *(uint64_t *)(local_60 + 0x40)) goto LAB_1800f328d;
LAB_1800f31d1:
        pVoid_9 = (void *)(local_60 + 0x28);
      }
      else {
        pLong_8 = (int64_t *)pLong_5[5];
        uVal_12 = pLong_5[7];
        uVal_7 = *(uint64_t *)(local_60 + 0x38);
        if (*(uint64_t *)(local_60 + 0x40) < 0x10) goto LAB_1800f31d1;
LAB_1800f328d:
        pVoid_9 = *(void **)(local_60 + 0x28);
      }
      uVal_13 = uVal_7;
      if (uVal_12 < uVal_7) {
        uVal_13 = uVal_12;
      }
      iVal_4 = memcmp(pVoid_9,pLong_8,uVal_13);
      bFlag_2 = uVal_7 < uVal_12;
      if (iVal_4 != 0) {
        bFlag_2 = iVal_4 < 0;
      }
      if (bFlag_2) goto LAB_1800f314d;
    }
    else if (*(int *)(local_60 + 0x20) < *(int *)(pLong_5 + 4)) goto LAB_1800f314d;
    ptr2_Long_11 = local_50;
    *local_50 = pLong_5;
    *(uint8_t *)(local_50 + 1) = 0;
    uVal_12 = *(uint64_t *)(lVal_14 + 0x40);
    if (uVal_12 < 0x10) {
      *(uint64_t *)(lVal_14 + 0x38) = 0;
      *(uint64_t *)(lVal_14 + 0x40) = 0xf;
      *(uint8_t *)(lVal_14 + 0x28) = 0;
    }
    else {
      lVal_1 = *(int64_t *)(lVal_14 + 0x28);
      uVal_7 = uVal_12 + 1;
      lVal_10 = lVal_1;
      if (0xfff < uVal_7) {
        lVal_10 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_10)) goto LAB_1800f335e;
        uVal_7 = uVal_12 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_7);
      *(uint64_t *)(lVal_14 + 0x38) = 0;
      *(uint64_t *)(lVal_14 + 0x40) = 0xf;
      *(uint8_t *)(lVal_14 + 0x28) = 0;
      lVal_14 = local_68;
      if (local_68 == 0) {
        return ptr2_Long_11;
      }
    }
    thunk_FUN_180695dd0(lVal_14,0x48);
  }
  else {
LAB_1800f314d:
    if (local_58[1] == (int64_t *)0x38e38e38e38e38e) {
      func_0x1800a17e0();
LAB_1800f335e:
      do {
        invalidInstructionException();
      } while( true );
    }
    local_80 = pLong_17;
    local_78 = uVal_15;
    pLong_5 = (int64_t *)func_0x1800a1550(local_58,&local_80);
    *local_50 = pLong_5;
    *(uint8_t *)(local_50 + 1) = 1;
    ptr2_Long_11 = local_50;
  }
  return ptr2_Long_11;
}

// Unwind@1800f3360
void Unwind_1800f3360(uint64_t param_1,int64_t param_2)
{
  func_0x1800f3560(param_2 + 0x38);
  return;
}

// func_0x1800f33a0
void func_0x1800f33a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,ushort *param_4, uint64_t *param_5)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t *pU64_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  
  *param_1 = param_2;
  param_1[1] = 0;
  pU64_6 = (uint64_t *)func_0x180672de0(0x48);
  param_1[1] = pU64_6;
  *(uint *)(pU64_6 + 4) = (uint)*param_4;
  *(uint8_t (*)[16])(pU64_6 + 5) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 7) = ZEXT816(0);
  uVal_1 = param_5[2];
  if (0xf < (uint64_t)param_5[3]) {
    param_5 = (uint64_t *)*param_5;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      pU64_6[7] = uVal_1;
      pU64_6[8] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)param_5 + 4);
      uVal_4 = *(uint32_t *)(param_5 + 1);
      uVal_5 = *(uint32_t *)((int64_t)param_5 + 0xc);
      *(uint32_t *)(pU64_6 + 5) = *(uint32_t *)param_5;
      *(uint32_t *)((int64_t)pU64_6 + 0x2c) = uVal_3;
      *(uint32_t *)(pU64_6 + 6) = uVal_4;
      *(uint32_t *)((int64_t)pU64_6 + 0x34) = uVal_5;
    }
    else {
      uVal_7 = uVal_1 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_7) {
        uVal_9 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        uVal_7 = func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_9 + 0x28);
        uVal_7 = lVal_8 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_7 - 8) = lVal_8;
      }
      pU64_6[5] = uVal_7;
      pU64_6[7] = uVal_1;
      pU64_6[8] = uVal_9;
      func_0x1806aa960(uVal_7,param_5,uVal_1 + 1);
      pU64_6 = (uint64_t *)param_1[1];
    }
    *pU64_6 = param_3;
    *(uint64_t *)(param_1[1] + 8) = param_3;
    *(uint64_t *)(param_1[1] + 0x10) = param_3;
    *(uint8_t *)(param_1[1] + 0x18) = 0;
    *(uint8_t *)(param_1[1] + 0x19) = 0;
    return;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@1800f34e0
void Unwind_1800f34e0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x48);
  }
  return;
}

// Unwind@1800f3520
void Unwind_1800f3520(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x48);
  }
  return;
}

// func_0x1800f3560
void func_0x1800f3560(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  if (lVal_1 != 0) {
    uVal_2 = *(uint64_t *)(lVal_1 + 0x40);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x28);
      uVal_4 = uVal_2 + 1;
      if (0xfff < uVal_4) {
        if (0x1f < (uint64_t)((lVal_3 + -8) - *(int64_t *)(lVal_3 + -8))) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_4 = uVal_2 + 0x28;
        lVal_3 = *(int64_t *)(lVal_3 + -8);
      }
      thunk_FUN_180695dd0(lVal_3,uVal_4);
    }
    *(uint64_t *)(lVal_1 + 0x38) = 0;
    *(uint64_t *)(lVal_1 + 0x40) = 0xf;
    *(uint8_t *)(lVal_1 + 0x28) = 0;
    if (*(int64_t *)(param_1 + 8) != 0) {
      thunk_FUN_180695dd0(*(int64_t *)(param_1 + 8),0x48);
      return;
    }
  }
  return;
}

// func_0x1800f35f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f35f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = _UNK_1806b2d6c;
  uVal_9 = _UNK_1806b2d68;
  uVal_8 = _UNK_1806b2d64;
  uVal_7 = _DAT_1806b2d60;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d6c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x75;
    param_1[2][1] = param_1[2][1] ^ 0x55;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x1800f3620
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f3620(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  
  uVal_10 = _UNK_1806b2cac;
  uVal_9 = _UNK_1806b2ca8;
  uVal_8 = _UNK_1806b2ca4;
  uVal_7 = _DAT_1806b2ca0;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x73;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1800f3650
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f3650(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x93a3c787;
    param_1[1][4] = param_1[1][4] ^ 0xa5;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1800f3680
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f3680(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2da4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2da0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2da8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dac;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x19cfe32d;
    param_1[1][4] = param_1[1][4] ^ 0xbb;
    param_1[1][5] = param_1[1][5] ^ 0xef;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1800f36b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f36b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af254;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af250;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af258;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af25c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x851d8be7;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1800f36d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f36d0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2db4;
    uVal_2 = param_1[2] ^ _UNK_1806b2db8;
    uVal_3 = param_1[3] ^ _UNK_1806b2dbc;
    *param_1 = *param_1 ^ _DAT_1806b2db0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b2710,0);
  }
  return;
}

// func_0x1800f3710
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f3710(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2de4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2de0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2de8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dec;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x9b4dbd9f;
    param_1[1][4] = param_1[1][4] ^ 0xcd;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1800f3740
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800f3740(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e34;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e30;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e38;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e3c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xd3;
    param_1[1][1] = param_1[1][1] ^ 0x1f;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800f3760
void func_0x1800f3760(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint param_4)
{
  int *pInt_1;
  uint64_t *pU64_2;
  int iVal_3;
  int64_t lVal_4;
  uint64_t *pU64_5;
  uint64_t uVal_6;
  uint uVal_7;
  uint64_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint64_t local_88;
  uint64_t *local_80;
  uint64_t *local_78;
  uint local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  uint local_50;
  uint8_t local_44;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_a8 = ZEXT816(0);
  local_98 = ZEXT816(0);
  local_88 = 0;
  local_b8 = param_2;
  local_b0 = param_3;
  local_80 = (uint64_t *)func_0x180672de0(0x30);
  local_68 = param_1 + 1;
  *(uint32_t *)(local_80 + 1) = 0x14;
  *(uint8_t (*)[16])((int64_t)local_80 + 0xc) = ZEXT816(0);
  *(uint32_t *)((int64_t)local_80 + 0x1c) = 0;
  *local_80 = &PTR_LAB_1806b4210;
  *(uint8_t (*)[16])(local_80 + 4) = ZEXT816(0);
  local_44 = 0;
  uVal_7 = param_4 & 0x3f;
  if (uVal_7 < 2) {
    local_58 = 0x43baefb;
  }
  else {
    if ((uVal_7 & uVal_7 - 1) == 0) {
      iVal_3 = 0;
      for (; (uVal_7 & 1) == 0; uVal_7 = uVal_7 >> 1 | 0x80000000) {
        iVal_3 = iVal_3 + 1;
      }
      if (iVal_3 - 1U < 5) {
        local_58 = *(uint64_t *)(&DAT_1806b4520 + (uint64_t)(iVal_3 - 1U) * 8);
        *(uint32_t *)((int64_t)local_80 + 0xc) = 8;
        goto LAB_1800f3832;
      }
    }
    local_58 = 0;
  }
LAB_1800f3832:
  local_78 = local_80;
  local_70 = param_4;
  local_60 = local_68;
  local_50 = param_4;
  func_0x1800f4270(&local_b8);
  lVal_4 = func_0x1800f4030(&local_b8);
  if (lVal_4 != 0) {
    LOCK();
    *(int *)(lVal_4 + 0x2c) = *(int *)(lVal_4 + 0x2c) + 1;
    UNLOCK();
  }
  if (*param_1 != 0) {
    LOCK();
    pInt_1 = (int *)(*param_1 + 0x2c);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    pU64_5 = (uint64_t *)*param_1;
    if (pU64_5 != (uint64_t *)0x0 && *pInt_1 == 0) {
      do {
        pU64_2 = (uint64_t *)pU64_5[2];
        pU64_5[2] = 0;
        (**(func_ptr_t *)*pU64_5)(pU64_5,1);
        pU64_5 = pU64_2;
      } while (pU64_2 != (uint64_t *)0x0);
    }
  }
  *param_1 = lVal_4;
  if (local_a8._8_8_ != 0) {
    uVal_6 = local_98._8_8_ - local_a8._8_8_;
    lVal_4 = local_a8._8_8_;
    if (0xfff < uVal_6) {
      lVal_4 = *(int64_t *)(local_a8._8_8_ + -8);
      if (0x1f < (uint64_t)((local_a8._8_8_ + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_6);
  }
  return;
}

// Unwind@1800f38f0
void Unwind_1800f38f0(uint64_t param_1,int64_t param_2)
{
  func_0x1800f4210(param_2 + 0x20);
  return;
}

// Unwind@1800f3920
void Unwind_1800f3920(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x38);
  return;
}

// func_0x1800f3950
int64_t * func_0x1800f3950(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t *pLong_5;
  uint8_t local_4c [4];
  int64_t *local_48;
  int64_t *local_40;
  uint8_t local_34 [4];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  func_0x180673560(local_34,0);
  pLong_4 = DAT_18083efb8;
  local_48 = DAT_18083efb8;
  if (DAT_18083efa0 == 0) {
    func_0x180673560(local_4c,0);
    if (DAT_18083efa0 == 0) {
      DAT_18083efa0 = (int64_t)DAT_180841fc0 + 1;
      DAT_180841fc0 = (int)DAT_18083efa0;
    }
    func_0x1806735b0(local_4c);
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_18083efa0 < *(uint64_t *)(lVal_3 + 0x18)) goto LAB_1800f39de;
  }
  else {
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_18083efa0 < *(uint64_t *)(lVal_3 + 0x18)) {
LAB_1800f39de:
      pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + DAT_18083efa0 * 8);
      if (pLong_5 != (int64_t *)0x0) goto LAB_1800f3a48;
    }
  }
  uVal_2 = DAT_18083efa0;
  if ((((*(char *)(lVal_3 + 0x24) != '\x01') ||
       (lVal_3 = func_0x180673c90(), *(uint64_t *)(lVal_3 + 0x18) <= uVal_2)) ||
      (pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + uVal_2 * 8), pLong_5 == (int64_t *)0x0))
     && (pLong_5 = pLong_4, pLong_4 == (int64_t *)0x0)) {
    lVal_3 = func_0x1800f3ae0(&local_48,param_1);
    if (lVal_3 == -1) {
      func_0x18008c8d0();
      fnPtr_1 = (func_ptr_t )swi(3);
      pLong_4 = (int64_t *)(*fnPtr_1)();
      return pLong_4;
    }
    local_40 = local_48;
    func_0x180673910();
    (**(func_ptr_t *)(*local_40 + 8))();
    DAT_18083efb8 = local_48;
    pLong_5 = local_48;
  }
LAB_1800f3a48:
  func_0x1806735b0(local_34);
  return pLong_5;
}

// Unwind@1800f3a70
void Unwind_1800f3a70(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    (**(func_ptr_t *)**(uint64_t **)(param_2 + 0x38))(*(uint64_t **)(param_2 + 0x38),1);
  }
  return;
}

// Unwind@1800f3ab0
void Unwind_1800f3ab0(uint64_t param_1,int64_t param_2)
{
  func_0x1806735b0(param_2 + 0x44);
  return;
}

// func_0x1800f3ae0
uint64_t func_0x1800f3ae0(int64_t *param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  char *_Str;
  uint64_t uVal_5;
  uint8_t *pU64_6;
  uint8_t local_d8 [104];
  uint64_t *local_70;
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t local_50;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if ((param_1 != (int64_t *)0x0) && (*param_1 == 0)) {
    local_70 = (uint64_t *)func_0x180672de0(0x20);
    lVal_4 = *(int64_t *)(param_2 + 8);
    if (lVal_4 == 0) {
      local_68 = ZEXT816(0);
      local_58 = 0;
      local_50 = 0xf;
      pU64_6 = local_68;
    }
    else {
      _Str = (char *)(lVal_4 + 0x30);
      if (*(char **)(lVal_4 + 0x28) != (char *)0x0) {
        _Str = *(char **)(lVal_4 + 0x28);
      }
      local_68 = ZEXT816(0);
      sz_2 = strlen(_Str);
      if ((int64_t)sz_2 < 0) {
        func_0x18007ba70();
        goto LAB_1800f3c8e;
      }
      uVal_5 = 0xf;
      pU64_6 = local_68;
      if (0xf < sz_2) {
        uVal_3 = sz_2 | 0xf;
        uVal_5 = 0x16;
        if (0x16 < uVal_3) {
          uVal_5 = uVal_3;
        }
        if (uVal_3 < 0xfff) {
          pU64_6 = (uint8_t *)func_0x180672de0(uVal_5 + 1);
        }
        else {
          lVal_4 = func_0x180672de0(uVal_5 + 0x28);
          pU64_6 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_6 + -8) = lVal_4;
        }
        local_68._0_8_ = pU64_6;
      }
      local_58 = sz_2;
      local_50 = uVal_5;
      func_0x1806aa960(pU64_6,_Str,sz_2);
      pU64_6[sz_2] = 0;
      pU64_6 = local_68;
      if (0xf < local_50) {
        pU64_6 = (uint8_t *)local_68._0_8_;
      }
    }
    func_0x18008c920(local_d8,pU64_6);
    pU64_1 = local_70;
    *(uint32_t *)(local_70 + 1) = 0;
    *local_70 = std::collate<char>::vftable;
    _Getcoll((_Collvec *)(local_70 + 2));
    *param_1 = (int64_t)pU64_1;
    func_0x18008ca70(local_d8);
    if (0xf < local_50) {
      uVal_5 = local_50 + 1;
      lVal_4 = local_68._0_8_;
      if (0xfff < uVal_5) {
        lVal_4 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_4)) {
LAB_1800f3c8e:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_5 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_5);
    }
  }
  return 1;
}

// Unwind@1800f3c90
void Unwind_1800f3c90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1800f3cd0
void Unwind_1800f3cd0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0x20);
  return;
}

// func_0x1800f3d10
int func_0x1800f3d10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, uint64_t param_5)
{
  int iVal_1;
  
  iVal_1 = func_0x180675920(param_2,param_3,param_4,param_5,param_1 + 0x10);
  return (int)(char)((0 < iVal_1) - (iVal_1 < 0));
}

// func_0x1800f3d50
uint8_t (*func_0x1800f3d50(int64_t param_1,uint8_t (*param_2)[16],int64_t param_3,int64_t param_4))[16]
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint8_t (*pArr16_3)[16];
  uint64_t uVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  uint64_t in_stack_ffffffffffffffa8;
  uint8_t (*pArr16_7)[16];
  uint64_t uVal_8;
  
  uVal_8 = 0xfffffffffffffffe;
  *param_2 = ZEXT816(0);
  *(uint64_t *)param_2[1] = 0;
  *(uint64_t *)(param_2[1] + 8) = 0xf;
  uVal_6 = param_4 - param_3;
  pArr16_5 = param_2;
  pArr16_7 = param_2;
  do {
    uVal_1 = *(uint64_t *)pArr16_5[1];
    uVal_4 = uVal_6 - uVal_1;
    if (uVal_6 < uVal_1 || uVal_4 == 0) goto LAB_1800f3e4e;
    uVal_2 = *(uint64_t *)(pArr16_5[1] + 8);
    if (uVal_2 - uVal_1 < uVal_4) {
      func_0x180089e90(pArr16_5,uVal_4,uVal_4,uVal_4,in_stack_ffffffffffffffa8 & 0xffffffffffffff00,pArr16_7
                    ,uVal_8);
      uVal_6 = *(uint64_t *)(pArr16_7[1] + 8);
      pArr16_5 = pArr16_7;
    }
    else {
      *(uint64_t *)pArr16_5[1] = uVal_6;
      if (0xf < uVal_2) {
        pArr16_5 = *(uint8_t (**)[16])*pArr16_5;
      }
      func_0x1806ab010(*pArr16_5 + uVal_1,0);
      (*pArr16_5)[uVal_6] = 0;
      uVal_6 = *(uint64_t *)(pArr16_7[1] + 8);
      pArr16_5 = pArr16_7;
    }
    pArr16_3 = pArr16_5;
    if (0xf < uVal_6) {
      pArr16_3 = *(uint8_t (**)[16])*pArr16_5;
    }
    in_stack_ffffffffffffffa8 = param_1 + 0x10U;
    pArr16_7 = pArr16_5;
    uVal_6 = func_0x180676160(pArr16_3,*pArr16_3 + *(int64_t *)pArr16_5[1],param_3,param_4,param_1 + 0x10U
                         );
  } while (uVal_6 != 0xffffffffffffffff);
  uVal_6 = 0;
LAB_1800f3e4e:
  uVal_1 = *(uint64_t *)(pArr16_5[1] + 8);
  *(uint64_t *)pArr16_5[1] = uVal_6;
  if (0xf < uVal_1) {
    pArr16_5 = *(uint8_t (**)[16])*pArr16_5;
  }
  (*pArr16_5)[uVal_6] = 0;
  return param_2;
}

// Unwind@1800f3e80
void Unwind_1800f3e80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1800f3ec0
uint func_0x1800f3ec0(uint64_t param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  uint64_t ***ptr3_U64_2;
  uint uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t ***local_30 [2];
  uint64_t local_20;
  uint64_t local_18;
  
  func_0x1800f3d50(param_1,local_30,param_2);
  ptr3_U64_2 = local_30;
  if (0xf < local_18) {
    ptr3_U64_2 = local_30[0];
  }
  if (local_20 == 0) {
    uVal_3 = 0x84222325;
  }
  else {
    uVal_1 = (uint64_t)((uint)local_20 & 3);
    if (local_20 < 4) {
      uVal_3 = 0x84222325;
      uVal_5 = 0;
    }
    else {
      uVal_3 = 0x84222325;
      uVal_5 = 0;
      do {
        uVal_3 = ((uint)*(byte *)((int64_t)ptr3_U64_2 + uVal_5 + 3) ^
                ((uint)*(byte *)((int64_t)ptr3_U64_2 + uVal_5 + 2) ^
                ((uint)*(byte *)((int64_t)ptr3_U64_2 + uVal_5 + 1) ^
                (*(byte *)((int64_t)ptr3_U64_2 + uVal_5) ^ uVal_3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
        uVal_5 = uVal_5 + 4;
      } while ((local_20 & 0xfffffffffffffffc) != uVal_5);
      if (uVal_1 == 0) goto LAB_1800f3fa7;
    }
    uVal_4 = 0;
    do {
      uVal_3 = (*(byte *)((int64_t)ptr3_U64_2 + uVal_4 + uVal_5) ^ uVal_3) * 0x1b3;
      uVal_4 = uVal_4 + 1;
    } while (uVal_1 != uVal_4);
  }
LAB_1800f3fa7:
  if (0xf < local_18) {
    uVal_1 = local_18 + 1;
    ptr3_U64_2 = local_30[0];
    if (0xfff < uVal_1) {
      ptr3_U64_2 = (uint64_t ***)local_30[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_30[0] + (-8 - (int64_t)ptr3_U64_2))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_1 = local_18 + 0x28;
    }
    thunk_FUN_180695dd0(ptr3_U64_2,uVal_1);
  }
  return uVal_3;
}

// func_0x1800f3ff0
uint64_t * func_0x1800f3ff0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = std::collate<char>::vftable;
  thunk_FUN_180695dd0(param_1[3]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x20);
  }
  return param_1;
}

// func_0x1800f4030
int64_t func_0x1800f4030(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  
  uVal_6 = 0xfffffffffffffffe;
  pU64_2 = (uint64_t *)func_0x180672de0(0x28);
  *(uint32_t *)(pU64_2 + 1) = 0xd;
  *(uint64_t *)((int64_t)pU64_2 + 0xc) = 0;
  *(uint32_t *)((int64_t)pU64_2 + 0x14) = 0;
  *pU64_2 = &PTR_FUN_1806b4238;
  *(uint32_t *)(pU64_2 + 4) = 0;
  lVal_4 = *(int64_t *)(param_1 + 0x40);
  pU64_2[3] = lVal_4;
  lVal_1 = *(int64_t *)(lVal_4 + 0x10);
  if (lVal_1 != 0) {
    pU64_2[2] = lVal_1;
    *(uint64_t **)(lVal_1 + 0x18) = pU64_2;
    lVal_4 = *(int64_t *)(param_1 + 0x40);
  }
  *(uint64_t **)(lVal_4 + 0x10) = pU64_2;
  *(uint64_t **)(param_1 + 0x40) = pU64_2;
  func_0x1800f4480();
  uVal_5 = 0xe;
  if (*(int *)(pU64_2 + 1) - 8U < 4) {
    uVal_5 = (&DAT_1806b456c)[*(int *)(pU64_2 + 1) - 8U];
  }
  pU64_3 = (uint64_t *)func_0x180672de0(0x28);
  *(uint32_t *)(pU64_3 + 1) = uVal_5;
  *(uint64_t *)((int64_t)pU64_3 + 0xc) = 0;
  *(uint32_t *)((int64_t)pU64_3 + 0x14) = 0;
  *pU64_3 = &PTR_FUN_1806b4238;
  pU64_3[4] = pU64_2;
  lVal_4 = *(int64_t *)(param_1 + 0x40);
  pU64_3[3] = lVal_4;
  lVal_1 = *(int64_t *)(lVal_4 + 0x10);
  if (lVal_1 != 0) {
    pU64_3[2] = lVal_1;
    *(uint64_t **)(lVal_1 + 0x18) = pU64_3;
    lVal_4 = *(int64_t *)(param_1 + 0x40);
  }
  *(uint64_t **)(lVal_4 + 0x10) = pU64_3;
  *(uint64_t **)(param_1 + 0x40) = pU64_3;
  pU64_2 = (uint64_t *)func_0x180672de0(0x20);
  *pU64_2 = &PTR_FUN_1806b4218;
  *(uint32_t *)(pU64_2 + 1) = 0x15;
  *(uint64_t *)((int64_t)pU64_2 + 0xc) = 0;
  *(uint32_t *)((int64_t)pU64_2 + 0x14) = 0;
  pU64_2[3] = pU64_3;
  lVal_4 = pU64_3[2];
  if (lVal_4 != 0) {
    pU64_2[2] = lVal_4;
    *(uint64_t **)(lVal_4 + 0x18) = pU64_2;
    pU64_3 = *(uint64_t **)(param_1 + 0x40);
  }
  pU64_3[2] = pU64_2;
  *(uint64_t **)(param_1 + 0x40) = pU64_2;
  lVal_4 = *(int64_t *)(param_1 + 0x38);
  *(uint32_t *)(lVal_4 + 0x20) = *(uint32_t *)(param_1 + 0x68);
  *(int *)(lVal_4 + 0x28) = *(int *)(param_1 + 0x10) + 1;
  func_0x1800f47e0(param_1,lVal_4,0,0,1,param_1,uVal_6);
  return lVal_4;
}

// Unwind@1800f41b0
void Unwind_1800f41b0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  
  pU64_2 = *(uint64_t **)(*(int64_t *)(param_2 + 0x28) + 0x38);
  while (pU64_2 != (uint64_t *)0x0) {
    pU64_1 = (uint64_t *)pU64_2[2];
    pU64_2[2] = 0;
    (**(func_ptr_t *)*pU64_2)(pU64_2,1);
    pU64_2 = pU64_1;
  }
  *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x38) = 0;
  return;
}

// func_0x1800f4210
void func_0x1800f4210(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  lVal_1 = *(int64_t *)(param_1 + 0x18);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x28) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0x18) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x28) = 0;
  }
  return;
}

// func_0x1800f4270
void func_0x1800f4270(byte **param_1)
{
  byte *pU8_1;
  byte bFlag_2;
  uint uVal_3;
  int64_t lVal_4;
  byte *pU8_5;
  byte bFlag_6;
  
  pU8_5 = *param_1;
  pU8_1 = param_1[1];
  if (pU8_5 == pU8_1) {
    *(uint32_t *)(param_1 + 0xe) = 0xffffffff;
    *(uint8_t *)((int64_t)param_1 + 0x75) = 0;
    return;
  }
  bFlag_6 = *pU8_5;
  *(byte *)((int64_t)param_1 + 0x75) = bFlag_6;
  lVal_4 = func_0x1806aa7c0(&DAT_1806b4220,(int)(char)bFlag_6,0x17);
  if (lVal_4 == 0) goto LAB_1800f4358;
  *(uint *)(param_1 + 0xe) = (uint)bFlag_6;
  switch(bFlag_6) {
  case 0x24:
    uVal_3 = (uint)param_1[0xc];
    if (((uint64_t)param_1[0xc] & 0x1000000) == 0) {
      return;
    }
    if (pU8_5 + 1 == pU8_1) {
      return;
    }
    bFlag_6 = pU8_5[1];
    if (bFlag_6 == 0x5c) {
      bFlag_2 = func_0x1800f4440(param_1);
      bFlag_6 = pU8_5[(uint64_t)bFlag_2 + 1];
      uVal_3 = (uint)param_1[0xc];
    }
    else {
      bFlag_2 = 0;
    }
    if (((*(int *)((int64_t)param_1 + 0x14) == 0 && bFlag_6 == 10) & (byte)((uVal_3 & 4) >> 2)) != 0)
    {
      return;
    }
    bFlag_6 = bFlag_2 & bFlag_6 == 0x29 & *(int *)((int64_t)param_1 + 0x14) != 0;
    break;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x2a:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    goto switchD_1800f42c9_caseD_25;
  case 0x28:
  case 0x29:
    bFlag_6 = *(byte *)(param_1 + 0xc) & 8;
    goto joined_r0x0001800f42eb;
  case 0x2b:
  case 0x3f:
    bFlag_6 = *(byte *)(param_1 + 0xc) & 1;
joined_r0x0001800f42eb:
    if (bFlag_6 != 0) {
      return;
    }
    goto LAB_1800f4358;
  case 0x5c:
    if (*(char *)((int64_t)param_1 + 0x74) != '\0') {
      return;
    }
    pU8_5 = pU8_5 + 1;
    if (pU8_5 == pU8_1) {
      return;
    }
    if ((((uint64_t)param_1[0xc] & 8) != 0) || (uVal_3 = (uint)*pU8_5, (*pU8_5 & 0xfe) != 0x28)) {
      if (((uint64_t)param_1[0xc] & 0x10) != 0) {
        return;
      }
      bFlag_6 = *pU8_5;
      uVal_3 = (uint)bFlag_6;
      if ((bFlag_6 != 0x7d) && (bFlag_6 != 0x7b)) {
        return;
      }
    }
    *(char *)((int64_t)param_1 + 0x75) = (char)uVal_3;
    *(uint *)(param_1 + 0xe) = uVal_3;
    return;
  case 0x7b:
  case 0x7d:
    bFlag_6 = *(byte *)(param_1 + 0xc) & 0x10;
    break;
  case 0x7c:
    bFlag_6 = *(byte *)(param_1 + 0xc) & 2;
    break;
  default:
    if (((bFlag_6 == 10) && ((*(byte *)(param_1 + 0xc) & 4) != 0)) &&
       (*(int *)((int64_t)param_1 + 0x14) == 0)) {
      *(uint32_t *)(param_1 + 0xe) = 0x7c;
    }
    goto switchD_1800f42c9_caseD_25;
  }
  if (bFlag_6 == 0) {
LAB_1800f4358:
    *(uint32_t *)(param_1 + 0xe) = 0;
  }
switchD_1800f42c9_caseD_25:
  return;
}

// func_0x1800f43e0
uint64_t func_0x1800f43e0(uint64_t param_1,uint64_t param_2)
{
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x20);
  }
  return param_1;
}

// func_0x1800f4440
bool func_0x1800f4440(int64_t param_1,int64_t param_2)
{
  byte *pU8_1;
  bool bFlag_2;
  
  if ((*(char *)(param_1 + 0x74) == '\0') &&
     (pU8_1 = (byte *)(param_2 + 1), pU8_1 != *(byte **)(param_1 + 8))) {
    if (((*(uint64_t *)(param_1 + 0x60) & 8) != 0) || (bFlag_2 = true, (*pU8_1 & 0xfe) != 0x28)) {
      if ((*(uint64_t *)(param_1 + 0x60) & 0x10) != 0) {
        return false;
      }
      bFlag_2 = (*pU8_1 + 0x85 & 0xfd) == 0;
    }
    return bFlag_2;
  }
  return false;
}

// func_0x1800f4480
void func_0x1800f4480(byte **param_1)
{
  byte *pU8_1;
  byte *pU8_2;
  int64_t lVal_3;
  int64_t lVal_4;
  char ch_5;
  uint64_t *pU64_6;
  uint64_t *pU64_7;
  byte *pU8_8;
  uint64_t *pU64_9;
  int64_t lVal_10;
  uint32_t uVal_11;
  
  pU8_2 = param_1[8];
  ch_5 = func_0x1800f4a10();
  if (ch_5 == '\0') {
    if (*(int *)(param_1 + 0xe) != 0x7c) {
      return;
    }
    pU64_6 = (uint64_t *)func_0x180672de0(0x20);
    *pU64_6 = &PTR_FUN_1806b4218;
    *(uint32_t *)(pU64_6 + 1) = 8;
    *(uint64_t *)((int64_t)pU64_6 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_6 + 0x14) = 0;
    pU8_8 = param_1[8];
    pU64_6[3] = pU8_8;
    lVal_3 = *(int64_t *)(pU8_8 + 0x10);
    if (lVal_3 != 0) {
      pU64_6[2] = lVal_3;
      *(uint64_t **)(lVal_3 + 0x18) = pU64_6;
      pU8_8 = param_1[8];
    }
    *(uint64_t **)(pU8_8 + 0x10) = pU64_6;
    param_1[8] = (byte *)pU64_6;
    uVal_11 = 0xe;
    if (*(int *)(pU64_6 + 1) - 8U < 4) {
      uVal_11 = (&DAT_1806b456c)[*(int *)(pU64_6 + 1) - 8U];
    }
    pU64_7 = (uint64_t *)func_0x180672de0(0x28);
    *(uint32_t *)(pU64_7 + 1) = uVal_11;
    *(uint64_t *)((int64_t)pU64_7 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_7 + 0x14) = 0;
    *pU64_7 = &PTR_FUN_1806b4238;
    pU64_7[4] = pU64_6;
    pU64_7[3] = pU64_6;
    lVal_3 = pU64_6[2];
    if (lVal_3 != 0) {
      pU64_7[2] = lVal_3;
      *(uint64_t **)(lVal_3 + 0x18) = pU64_7;
      pU64_6 = (uint64_t *)param_1[8];
    }
    pU64_6[2] = pU64_7;
    param_1[8] = (byte *)pU64_7;
  }
  if (*(int *)(param_1 + 0xe) == 0x7c) {
    pU64_6 = (uint64_t *)func_0x180672de0(0x20);
    *(uint32_t *)(pU64_6 + 1) = 0x11;
    *(uint64_t *)((int64_t)pU64_6 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_6 + 0x14) = 0;
    *pU64_6 = &PTR_FUN_1806b4218;
    pU8_8 = param_1[8];
    pU64_6[3] = pU8_8;
    lVal_3 = *(int64_t *)(pU8_8 + 0x10);
    if (lVal_3 != 0) {
      pU64_6[2] = lVal_3;
      *(uint64_t **)(lVal_3 + 0x18) = pU64_6;
      pU8_8 = param_1[8];
    }
    *(uint64_t **)(pU8_8 + 0x10) = pU64_6;
    param_1[8] = (byte *)pU64_6;
    pU64_7 = (uint64_t *)func_0x180672de0(0x30);
    pU64_7[1] = 0x10;
    *pU64_7 = &PTR_LAB_1806b43d8;
    pU64_7[4] = pU64_6;
    pU64_7[5] = 0;
    lVal_3 = *(int64_t *)(pU8_2 + 0x10);
    *(uint64_t **)(*(int64_t *)(lVal_3 + 0x18) + 0x10) = pU64_7;
    pU64_7[3] = *(uint64_t *)(lVal_3 + 0x18);
    *(uint64_t **)(lVal_3 + 0x18) = pU64_7;
    pU64_7[2] = lVal_3;
    do {
      pU8_8 = *param_1;
      if (pU8_8 != param_1[1]) {
        if ((((*pU8_8 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
            (pU8_1 = pU8_8 + 1, pU8_1 != param_1[1])) &&
           (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
            ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b))))))))
        {
          pU8_8 = pU8_1;
        }
        *param_1 = pU8_8 + 1;
      }
      func_0x1800f4270(param_1);
      ch_5 = func_0x1800f4a10(param_1);
      if (ch_5 == '\0') {
        pU64_7 = (uint64_t *)func_0x180672de0(0x20);
        *pU64_7 = &PTR_FUN_1806b4218;
        *(uint32_t *)(pU64_7 + 1) = 8;
        *(uint64_t *)((int64_t)pU64_7 + 0xc) = 0;
        *(uint32_t *)((int64_t)pU64_7 + 0x14) = 0;
        pU8_8 = param_1[8];
        pU64_7[3] = pU8_8;
        lVal_3 = *(int64_t *)(pU8_8 + 0x10);
        if (lVal_3 != 0) {
          pU64_7[2] = lVal_3;
          *(uint64_t **)(lVal_3 + 0x18) = pU64_7;
          pU8_8 = param_1[8];
        }
        *(uint64_t **)(pU8_8 + 0x10) = pU64_7;
        param_1[8] = (byte *)pU64_7;
        uVal_11 = 0xe;
        if (*(int *)(pU64_7 + 1) - 8U < 4) {
          uVal_11 = (&DAT_1806b456c)[*(int *)(pU64_7 + 1) - 8U];
        }
        pU64_9 = (uint64_t *)func_0x180672de0(0x28);
        *(uint32_t *)(pU64_9 + 1) = uVal_11;
        *(uint64_t *)((int64_t)pU64_9 + 0xc) = 0;
        *(uint32_t *)((int64_t)pU64_9 + 0x14) = 0;
        *pU64_9 = &PTR_FUN_1806b4238;
        pU64_9[4] = pU64_7;
        pU64_9[3] = pU64_7;
        lVal_3 = pU64_7[2];
        if (lVal_3 != 0) {
          pU64_9[2] = lVal_3;
          *(uint64_t **)(lVal_3 + 0x18) = pU64_9;
          pU64_7 = (uint64_t *)param_1[8];
        }
        pU64_7[2] = pU64_9;
        param_1[8] = (byte *)pU64_9;
      }
      else {
        pU64_9 = (uint64_t *)param_1[8];
      }
      lVal_3 = *(int64_t *)(pU8_2 + 0x10);
      lVal_4 = pU64_6[2];
      param_1[8] = (byte *)pU64_6;
      pU64_6[2] = 0;
      pU64_9[2] = pU64_6;
      do {
        lVal_10 = lVal_3;
        lVal_3 = *(int64_t *)(lVal_10 + 0x28);
      } while (lVal_3 != 0);
      pU64_7 = (uint64_t *)func_0x180672de0(0x30);
      *(uint32_t *)(pU64_7 + 1) = 0x10;
      *(uint8_t (*)[16])((int64_t)pU64_7 + 0xc) = ZEXT816(0);
      *(uint32_t *)((int64_t)pU64_7 + 0x1c) = 0;
      *pU64_7 = &PTR_LAB_1806b43d8;
      pU64_7[4] = pU64_6;
      pU64_7[5] = 0;
      *(uint64_t **)(lVal_10 + 0x28) = pU64_7;
      pU64_7[2] = lVal_4;
      *(uint64_t **)(lVal_4 + 0x18) = pU64_7;
    } while (*(int *)(param_1 + 0xe) == 0x7c);
  }
  return;
}

// func_0x1800f47e0
void func_0x1800f47e0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,byte param_5)
{
  int64_t lVal_1;
  byte bFlag_2;
  
  if (param_2 != 0 && param_2 != param_3) {
    do {
      switch(*(uint32_t *)(param_2 + 8)) {
      case 7:
        if (param_4 == 0) {
LAB_1800f48ec:
          param_4 = 0;
        }
        else if ((((*(int64_t *)(param_2 + 0x20) != 0) &&
                  ((((*(int64_t *)(param_2 + 0x28) != 0 || (*(int64_t *)(param_2 + 0x30) != 0)) ||
                    (*(int64_t *)(param_2 + 0x38) != 0)) ||
                   ((*(short *)(param_2 + 0x40) != 0 ||
                    (*(int64_t *)(*(int64_t *)(param_2 + 0x20) + 0x18) != 0)))))) ||
                 (*(int64_t *)(param_2 + 0x48) != 0)) ||
                (((*(byte *)(param_1 + 0x69) & 8) != 0 &&
                 ((*(int64_t *)(param_2 + 0x38) != 0 || ((*(byte *)(param_2 + 0xc) & 1) != 0))))))
        {
          *(uint32_t *)(param_4 + 0x34) = 0;
          goto LAB_1800f492c;
        }
        break;
      case 10:
        if (param_4 != 0) {
          *(uint32_t *)(param_4 + 0x34) = 0;
          *(byte *)(param_4 + 0xd) = *(byte *)(param_4 + 0xd) & 0xef;
        }
      case 0xb:
        func_0x1800f47e0(param_1,*(uint64_t *)(param_2 + 0x20),0,0,1);
        break;
      case 0xf:
        if ((param_5 == 0) && (param_4 != 0)) {
LAB_1800f492c:
          *(byte *)(param_4 + 0xd) = *(byte *)(param_4 + 0xd) & 0xef;
        }
        break;
      case 0x10:
        if (param_4 != 0) {
          *(uint32_t *)(param_4 + 0x34) = 0;
          *(byte *)(param_4 + 0xd) = *(byte *)(param_4 + 0xd) & 0xef;
        }
        for (lVal_1 = *(int64_t *)(param_2 + 0x28); lVal_1 != 0; lVal_1 = *(int64_t *)(lVal_1 + 0x28))
        {
          func_0x1800f47e0(param_1,*(uint64_t *)(lVal_1 + 0x10),*(uint64_t *)(lVal_1 + 0x20),param_4,
                        param_5);
        }
        break;
      case 0x12:
        if (param_4 == 0) {
          *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) | 0x10;
          param_4 = param_2;
        }
        else {
          *(uint32_t *)(param_4 + 0x34) = 0;
          *(byte *)(param_4 + 0xd) = *(byte *)(param_4 + 0xd) & 0xef;
          *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) | 0x10;
          bFlag_2 = *(uint *)(param_4 + 0x24) < 2 & param_5;
          if (bFlag_2 == 0) {
            *(uint32_t *)(param_2 + 0x34) = 0;
          }
          func_0x1800f47e0(param_1,*(uint64_t *)(param_2 + 0x10),
                        *(uint64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10),param_2,bFlag_2);
          param_2 = *(int64_t *)(param_2 + 0x28);
        }
        break;
      case 0x13:
        if (param_4 == *(int64_t *)(param_2 + 0x20)) {
          if (*(int *)(param_4 + 0x34) != -1) goto LAB_1800f48ec;
          *(uint32_t *)(param_4 + 0x34) = 1;
          param_4 = 0;
        }
      }
      param_2 = *(int64_t *)(param_2 + 0x10);
    } while ((param_2 != param_3) && (param_2 != 0));
  }
  return;
}

// func_0x1800f49e0
uint64_t func_0x1800f49e0(uint64_t param_1,uint64_t param_2)
{
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x28);
  }
  return param_1;
}

// func_0x1800f4a10
uint64_t func_0x1800f4a10(byte **param_1)
{
  byte *pU8_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  byte bFlag_4;
  char ch_5;
  uint64_t uVal_6;
  uint64_t *pU64_7;
  byte *pU8_8;
  uint64_t uVal_9;
  byte *pU8_10;
  
  uVal_9 = 0;
LAB_1800f4a58:
  bFlag_4 = (byte)uVal_9;
  switch(*(uint32_t *)(param_1 + 0xe)) {
  default:
    break;
  case 0x24:
    pU64_7 = (uint64_t *)func_0x180672de0(0x20);
    *pU64_7 = &PTR_FUN_1806b4218;
    *(uint32_t *)(pU64_7 + 1) = 3;
LAB_1800f4d12:
    *(uint64_t *)((int64_t)pU64_7 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_7 + 0x14) = 0;
    pU8_8 = param_1[8];
    pU64_7[3] = pU8_8;
    lVal_2 = *(int64_t *)(pU8_8 + 0x10);
    if (lVal_2 != 0) {
      pU64_7[2] = lVal_2;
      *(uint64_t **)(lVal_2 + 0x18) = pU64_7;
      pU8_8 = param_1[8];
    }
    *(uint64_t **)(pU8_8 + 0x10) = pU64_7;
    param_1[8] = (byte *)pU64_7;
    pU8_8 = *param_1;
    pU8_10 = param_1[1];
    if (pU8_8 != pU8_10) {
LAB_1800f4d52:
      if ((((*pU8_8 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_1 = pU8_8 + 1, pU8_1 != pU8_10)) &&
         (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
          ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
        pU8_8 = pU8_1;
      }
      *param_1 = pU8_8 + 1;
    }
    goto LAB_1800f4d98;
  case 0x28:
    pU8_8 = *param_1;
    if (pU8_8 != param_1[1]) {
      if ((((*pU8_8 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_10 = pU8_8 + 1, pU8_10 != param_1[1])) &&
         (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_10 & 0xfe) == 0x28)) ||
          ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_10 == 0x7d || (*pU8_10 == 0x7b))))))))
      {
        pU8_8 = pU8_10;
      }
      *param_1 = pU8_8 + 1;
    }
    func_0x1800f4270(param_1);
    ch_5 = func_0x1800f5250(param_1);
    if (*(int *)(param_1 + 0xe) != 0x29) goto LAB_1800f4f6d;
    pU8_8 = *param_1;
    if (pU8_8 != param_1[1]) {
      if ((((*pU8_8 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_10 = pU8_8 + 1, pU8_10 != param_1[1])) &&
         (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_10 & 0xfe) == 0x28)) ||
          ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_10 == 0x7d || (*pU8_10 == 0x7b))))))))
      {
        pU8_8 = pU8_10;
      }
      *param_1 = pU8_8 + 1;
    }
    uVal_6 = func_0x1800f4270(param_1);
    uVal_9 = CONCAT71((int7)((uint64_t)uVal_6 >> 8),1);
    if (ch_5 != '\0') goto LAB_1800f4a4e;
    goto LAB_1800f4a58;
  case 0x29:
    if (*(int *)((int64_t)param_1 + 0x14) != 0) goto switchD_1800f4a6f_caseD_ffffffff;
    if ((*(byte *)((int64_t)param_1 + 99) & 8) == 0) goto LAB_1800f4f6d;
    break;
  case 0x2a:
    if ((byte)(~bFlag_4 & (*(byte *)((int64_t)param_1 + 99) & 2) >> 1) == 0)
    goto switchD_1800f4a6f_caseD_2b;
    break;
  case 0x2b:
  case 0x3f:
  case 0x7b:
switchD_1800f4a6f_caseD_2b:
    func_0x180674790(10);
LAB_1800f4f63:
    func_0x180674790(4);
LAB_1800f4f6d:
    func_0x180674790(5);
LAB_1800f4f77:
    func_0x180674790(6);
    fnPtr_3 = (func_ptr_t )swi(3);
    uVal_9 = (*fnPtr_3)();
    return uVal_9;
  case 0x2e:
    pU64_7 = (uint64_t *)func_0x180672de0(0x20);
    *pU64_7 = &PTR_FUN_1806b4218;
    *(uint32_t *)(pU64_7 + 1) = 5;
    *(uint64_t *)((int64_t)pU64_7 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_7 + 0x14) = 0;
    pU8_8 = param_1[8];
    pU64_7[3] = pU8_8;
    lVal_2 = *(int64_t *)(pU8_8 + 0x10);
    if (lVal_2 != 0) {
      pU64_7[2] = lVal_2;
      *(uint64_t **)(lVal_2 + 0x18) = pU64_7;
      pU8_8 = param_1[8];
    }
    *(uint64_t **)(pU8_8 + 0x10) = pU64_7;
    param_1[8] = (byte *)pU64_7;
    pU8_8 = *param_1;
    pU8_10 = param_1[1];
    if (pU8_8 != pU8_10) goto LAB_1800f4e6c;
    goto LAB_1800f4a46;
  case 0x5b:
    *(uint8_t *)((int64_t)param_1 + 0x74) = 1;
    if (*param_1 != param_1[1]) {
      *param_1 = *param_1 + 1;
    }
    func_0x1800f4270(param_1);
    func_0x1800f5160(param_1);
    *(uint8_t *)((int64_t)param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0xe) != 0x5d) goto LAB_1800f4f63;
    pU8_8 = *param_1;
    pU8_10 = param_1[1];
    if (pU8_8 == pU8_10) goto LAB_1800f4a46;
    if (*pU8_8 == 0x5c) goto LAB_1800f4e7f;
    goto LAB_1800f4a40;
  case 0x5c:
    pU8_8 = *param_1;
    if (pU8_8 != param_1[1]) {
      if ((((*pU8_8 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_10 = pU8_8 + 1, pU8_10 != param_1[1])) &&
         (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_10 & 0xfe) == 0x28)) ||
          ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_10 == 0x7d || (*pU8_10 == 0x7b))))))))
      {
        pU8_8 = pU8_10;
      }
      *param_1 = pU8_8 + 1;
    }
    func_0x1800f4270(param_1);
    if ((*(char *)((int64_t)param_1 + 0x75) == 'b' & (byte)param_1[0xc] >> 6) == 1) {
      pU64_7 = (uint64_t *)func_0x180672de0(0x20);
      *pU64_7 = &PTR_FUN_1806b4218;
      *(uint32_t *)(pU64_7 + 1) = 4;
      goto LAB_1800f4d12;
    }
    if ((*(char *)((int64_t)param_1 + 0x75) == 'B' & (byte)((uint64_t)param_1[0xc] >> 6) & 3) != 1
       ) {
      func_0x1800f4f90(param_1);
      goto LAB_1800f4a4e;
    }
    pU64_7 = (uint64_t *)func_0x180672de0(0x20);
    *pU64_7 = &PTR_FUN_1806b4218;
    *(uint32_t *)(pU64_7 + 1) = 4;
    *(uint64_t *)((int64_t)pU64_7 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_7 + 0x14) = 0;
    pU8_8 = param_1[8];
    pU64_7[3] = pU8_8;
    lVal_2 = *(int64_t *)(pU8_8 + 0x10);
    if (lVal_2 != 0) {
      pU64_7[2] = lVal_2;
      *(uint64_t **)(lVal_2 + 0x18) = pU64_7;
      pU8_8 = param_1[8];
    }
    *(uint64_t **)(pU8_8 + 0x10) = pU64_7;
    param_1[8] = (byte *)pU64_7;
    *(byte *)((int64_t)pU64_7 + 0xc) = *(byte *)((int64_t)pU64_7 + 0xc) ^ 1;
    pU8_8 = *param_1;
    pU8_10 = param_1[1];
    if (pU8_8 != pU8_10) goto LAB_1800f4d52;
LAB_1800f4d98:
    uVal_6 = func_0x1800f4270(param_1);
    uVal_9 = CONCAT71((int7)((uint64_t)uVal_6 >> 8),1);
    goto LAB_1800f4a58;
  case 0x5d:
    if ((*(byte *)((int64_t)param_1 + 99) & 0x10) == 0) goto LAB_1800f4f63;
    break;
  case 0x5e:
    if ((*(byte *)((int64_t)param_1 + 99) & bFlag_4) != 0) break;
    pU64_7 = (uint64_t *)func_0x180672de0(0x20);
    *pU64_7 = &PTR_FUN_1806b4218;
    *(uint32_t *)(pU64_7 + 1) = 2;
    *(uint64_t *)((int64_t)pU64_7 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_7 + 0x14) = 0;
    pU8_8 = param_1[8];
    pU64_7[3] = pU8_8;
    lVal_2 = *(int64_t *)(pU8_8 + 0x10);
    if (lVal_2 != 0) {
      pU64_7[2] = lVal_2;
      *(uint64_t **)(lVal_2 + 0x18) = pU64_7;
      pU8_8 = param_1[8];
    }
    *(uint64_t **)(pU8_8 + 0x10) = pU64_7;
    param_1[8] = (byte *)pU64_7;
    pU8_8 = *param_1;
    if (pU8_8 != param_1[1]) {
      if ((((*pU8_8 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_10 = pU8_8 + 1, pU8_10 != param_1[1])) &&
         (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_10 & 0xfe) == 0x28)) ||
          ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_10 == 0x7d || (*pU8_10 == 0x7b))))))))
      {
        pU8_8 = pU8_10;
      }
      *param_1 = pU8_8 + 1;
    }
    uVal_6 = func_0x1800f4270(param_1);
    uVal_9 = CONCAT71((int7)((uint64_t)uVal_6 >> 8),1);
    if (((*(byte *)((int64_t)param_1 + 99) & 2) == 0) ||
       ((bFlag_4 | *(int *)(param_1 + 0xe) != 0x2a) != 0)) goto LAB_1800f4a58;
    break;
  case 0x7d:
    if ((*(byte *)((int64_t)param_1 + 99) & 8) == 0) goto LAB_1800f4f77;
    break;
  case 0xffffffff:
  case 0x7c:
switchD_1800f4a6f_caseD_ffffffff:
    return uVal_9 & 0xffffff01;
  }
  func_0x1800f5660(param_1 + 7,*(uint8_t *)((int64_t)param_1 + 0x75));
  pU8_8 = *param_1;
  pU8_10 = param_1[1];
  if (pU8_8 != pU8_10) {
LAB_1800f4e6c:
    if ((*pU8_8 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) {
LAB_1800f4e7f:
      pU8_1 = pU8_8 + 1;
      if ((pU8_1 != pU8_10) &&
         (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
          ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
        pU8_8 = pU8_1;
      }
    }
LAB_1800f4a40:
    *param_1 = pU8_8 + 1;
  }
LAB_1800f4a46:
  func_0x1800f4270(param_1);
LAB_1800f4a4e:
  uVal_6 = func_0x1800f5760(param_1);
  uVal_9 = CONCAT71((int7)((uint64_t)uVal_6 >> 8),1);
  goto LAB_1800f4a58;
}

// func_0x1800f4f90
void func_0x1800f4f90(byte **param_1)
{
  byte *pU8_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  byte bFlag_4;
  char ch_5;
  byte *pU8_6;
  byte *pU8_7;
  uint64_t *pU64_8;
  uint uVal_9;
  
  pU8_7 = param_1[0xc];
  if (((uint64_t)pU8_7 & 0x80080) == 0) {
LAB_1800f5054:
    ch_5 = func_0x1800f59f0(param_1,0);
    if (ch_5 != '\0') {
      func_0x1800f5660(param_1 + 7,*(uint8_t *)((int64_t)param_1 + 0x76));
      return;
    }
    if (((*(byte *)((int64_t)param_1 + 0x62) & 1) != 0) &&
       (ch_5 = func_0x1800f5da0(param_1,1), ch_5 != '\0')) {
      return;
    }
  }
  else {
    bFlag_4 = *(char *)((int64_t)param_1 + 0x75) - 0x30;
    if (9 < bFlag_4) {
      *(uint32_t *)((int64_t)param_1 + 0x6c) = 0xffffffff;
      goto LAB_1800f5054;
    }
    *(uint *)((int64_t)param_1 + 0x6c) = (uint)bFlag_4;
    pU8_6 = *param_1;
    if (pU8_6 != param_1[1]) {
      if ((((*pU8_6 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_1 = pU8_6 + 1, pU8_1 != param_1[1])) &&
         (((((uint64_t)pU8_7 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
          ((((uint64_t)pU8_7 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
        pU8_6 = pU8_1;
      }
      *param_1 = pU8_6 + 1;
    }
    func_0x1800f4270(param_1);
    pU8_7 = param_1[0xc];
    uVal_9 = *(uint *)((int64_t)param_1 + 0x6c);
    if ((uVal_9 == 0 & (byte)((uint64_t)pU8_7 >> 0x13)) == 1) {
      if (9 < (byte)(*(char *)((int64_t)param_1 + 0x75) - 0x30U)) {
        func_0x1800f5660(param_1 + 7,0);
        return;
      }
    }
    else {
      if (-1 < (char)pU8_7) {
        return;
      }
      if (((uint64_t)pU8_7 & 0x100) == 0) {
        func_0x1800f5f90(param_1,10,uVal_9,0x7fffffff,3);
        uVal_9 = *(uint *)((int64_t)param_1 + 0x6c);
      }
      if (uVal_9 != 0) {
        pU8_7 = (byte *)(int64_t)(int)uVal_9;
        if (((pU8_7 <= (byte *)(uint64_t)*(uint *)(param_1 + 2)) && (pU8_7 < param_1[6])) &&
           ((*(uint *)(param_1[3] + ((uint64_t)pU8_7 >> 5) * 4) >> (uVal_9 & 0x1f) & 1) != 0)) {
          pU64_8 = (uint64_t *)func_0x180672de0(0x28);
          *(uint32_t *)(pU64_8 + 1) = 0xf;
          *(uint64_t *)((int64_t)pU64_8 + 0xc) = 0;
          *(uint32_t *)((int64_t)pU64_8 + 0x14) = 0;
          *pU64_8 = &PTR_FUN_1806b4238;
          *(uint *)(pU64_8 + 4) = uVal_9;
          pU8_7 = param_1[8];
          pU64_8[3] = pU8_7;
          lVal_2 = *(int64_t *)(pU8_7 + 0x10);
          if (lVal_2 != 0) {
            pU64_8[2] = lVal_2;
            *(uint64_t **)(lVal_2 + 0x18) = pU64_8;
            pU8_7 = param_1[8];
          }
          *(uint64_t **)(pU8_7 + 0x10) = pU64_8;
          param_1[8] = (byte *)pU64_8;
          return;
        }
        goto LAB_1800f514f;
      }
    }
  }
  func_0x180674790(2);
LAB_1800f514f:
  func_0x180674790(3);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x1800f5160
void func_0x1800f5160(byte **param_1)
{
  byte *pU8_1;
  int64_t lVal_2;
  uint64_t *pU64_3;
  byte *pU8_4;
  
  pU64_3 = (uint64_t *)func_0x180672de0(0x50);
  *(uint32_t *)(pU64_3 + 1) = 7;
  *(uint64_t *)((int64_t)pU64_3 + 0xc) = 0;
  *(uint32_t *)((int64_t)pU64_3 + 0x14) = 0;
  *pU64_3 = &PTR_LAB_1806b43c0;
  pU64_3[9] = 0;
  *(uint8_t (*)[16])(pU64_3 + 4) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_3 + 6) = ZEXT816(0);
  *(uint16_t *)(pU64_3 + 8) = 0;
  pU8_4 = param_1[8];
  pU64_3[3] = pU8_4;
  lVal_2 = *(int64_t *)(pU8_4 + 0x10);
  if (lVal_2 != 0) {
    pU64_3[2] = lVal_2;
    *(uint64_t **)(lVal_2 + 0x18) = pU64_3;
    pU8_4 = param_1[8];
  }
  *(uint64_t **)(pU8_4 + 0x10) = pU64_3;
  param_1[8] = (byte *)pU64_3;
  if (*(int *)(param_1 + 0xe) != 0x5e) goto LAB_1800f5237;
  *(byte *)((int64_t)pU64_3 + 0xc) = *(byte *)((int64_t)pU64_3 + 0xc) ^ 1;
  pU8_4 = *param_1;
  if (pU8_4 != param_1[1]) {
    if (((*pU8_4 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
       (pU8_1 = pU8_4 + 1, pU8_1 != param_1[1])) {
      if ((((uint64_t)param_1[0xc] & 8) == 0) && ((*pU8_1 & 0xfe) == 0x28)) {
LAB_1800f5226:
        pU8_4 = pU8_1;
      }
      else if (((uint64_t)param_1[0xc] & 0x10) == 0) {
        if ((*pU8_1 == 0x7d) || (*pU8_1 == 0x7b)) goto LAB_1800f5226;
      }
    }
    *param_1 = pU8_4 + 1;
  }
  func_0x1800f4270(param_1);
LAB_1800f5237:
  func_0x1800f63e0(param_1);
  return;
}

// func_0x1800f5250
uint64_t func_0x1800f5250(byte **param_1)
{
  byte *pU8_1;
  int iVal_2;
  int64_t lVal_3;
  func_ptr_t fnPtr_4;
  byte *pU8_5;
  byte *pU8_6;
  uint64_t *pU64_7;
  uint64_t *pU64_8;
  uint64_t uVal_9;
  uint32_t uVal_10;
  uint64_t *local_48;
  
  iVal_2 = *(int *)((int64_t)param_1 + 0x14);
  *(int *)((int64_t)param_1 + 0x14) = iVal_2 + 1;
  if (0x3e6 < iVal_2) {
    func_0x180674790(0xc);
LAB_1800f55ce:
    func_0x180674790(5);
    fnPtr_4 = (func_ptr_t )swi(3);
    uVal_9 = (*fnPtr_4)();
    return uVal_9;
  }
  pU8_6 = param_1[0xc];
  if (*(int *)(param_1 + 0xe) == 0x29 && ((uint64_t)pU8_6 & 0x4000000) == 0) goto LAB_1800f55ce;
  if ((*(int *)(param_1 + 0xe) == 0x3f & (byte)pU8_6 >> 5) == 1) {
    pU8_5 = *param_1;
    if (pU8_5 != param_1[1]) {
      if ((((*pU8_5 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_1 = pU8_5 + 1, pU8_1 != param_1[1])) &&
         (((((uint64_t)pU8_6 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
          ((((uint64_t)pU8_6 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
        pU8_5 = pU8_1;
      }
      *param_1 = pU8_5 + 1;
    }
    func_0x1800f4270(param_1);
    iVal_2 = *(int *)(param_1 + 0xe);
    pU8_6 = *param_1;
    if (pU8_6 != param_1[1]) {
      if (((*pU8_6 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
         (pU8_5 = pU8_6 + 1, pU8_5 != param_1[1])) {
        if ((((uint64_t)param_1[0xc] & 8) == 0) && ((*pU8_5 & 0xfe) == 0x28)) {
LAB_1800f535b:
          pU8_6 = pU8_5;
        }
        else if (((uint64_t)param_1[0xc] & 0x10) == 0) {
          if ((*pU8_5 == 0x7d) || (*pU8_5 == 0x7b)) goto LAB_1800f535b;
        }
      }
      *param_1 = pU8_6 + 1;
    }
    func_0x1800f4270(param_1);
    if (iVal_2 == 0x21) {
      local_48 = (uint64_t *)func_0x180672de0(0x28);
      *(uint32_t *)(local_48 + 1) = 0xb;
      *(uint8_t (*)[16])((int64_t)local_48 + 0xc) = ZEXT816(0);
      *(uint32_t *)((int64_t)local_48 + 0x1c) = 0;
      *local_48 = &PTR_FUN_1806b43c8;
      local_48[4] = 0;
      pU64_7 = (uint64_t *)func_0x180672de0(0x20);
    }
    else {
      if (iVal_2 != 0x3d) {
        if (iVal_2 != 0x3a) {
          func_0x180674790(10);
          goto LAB_1800f538d;
        }
        goto LAB_1800f53a0;
      }
      local_48 = (uint64_t *)func_0x180672de0(0x28);
      *(uint32_t *)(local_48 + 1) = 10;
      *(uint8_t (*)[16])((int64_t)local_48 + 0xc) = ZEXT816(0);
      *(uint32_t *)((int64_t)local_48 + 0x1c) = 0;
      *local_48 = &PTR_FUN_1806b43c8;
      local_48[4] = 0;
      pU64_7 = (uint64_t *)func_0x180672de0(0x20);
    }
    *pU64_7 = &PTR_FUN_1806b4218;
    *(uint32_t *)(pU64_7 + 1) = 1;
    *(uint8_t (*)[16])((int64_t)pU64_7 + 0xc) = ZEXT816(0);
    *(uint32_t *)((int64_t)pU64_7 + 0x1c) = 0;
    pU8_6 = param_1[8];
    local_48[3] = pU8_6;
    if (*(int64_t *)(pU8_6 + 0x10) != 0) {
      local_48[2] = *(int64_t *)(pU8_6 + 0x10);
      *(uint64_t **)(*(int64_t *)(pU8_6 + 0x10) + 0x18) = local_48;
      pU8_6 = param_1[8];
    }
    *(uint64_t **)(pU8_6 + 0x10) = local_48;
    local_48[4] = pU64_7;
    pU64_7[3] = local_48;
    param_1[8] = (byte *)pU64_7;
    func_0x1800f4480(param_1);
    uVal_10 = 0xe;
    if (*(int *)(local_48 + 1) - 8U < 4) {
      uVal_10 = (&DAT_1806b456c)[*(int *)(local_48 + 1) - 8U];
    }
    pU64_7 = (uint64_t *)func_0x180672de0(0x28);
    *(uint32_t *)(pU64_7 + 1) = uVal_10;
    *(uint64_t *)((int64_t)pU64_7 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_7 + 0x14) = 0;
    *pU64_7 = &PTR_FUN_1806b4238;
    pU64_7[4] = local_48;
    pU8_6 = param_1[8];
    pU64_7[3] = pU8_6;
    lVal_3 = *(int64_t *)(pU8_6 + 0x10);
    if (lVal_3 != 0) {
      pU64_7[2] = lVal_3;
      *(uint64_t **)(lVal_3 + 0x18) = pU64_7;
      pU8_6 = param_1[8];
    }
    *(uint64_t **)(pU8_6 + 0x10) = pU64_7;
    param_1[8] = (byte *)local_48;
    uVal_9 = 0;
  }
  else {
LAB_1800f538d:
    if ((*(byte *)((int64_t)param_1 + 0x69) & 2) == 0) {
      func_0x1800f7880(param_1);
    }
    else {
LAB_1800f53a0:
      pU64_7 = (uint64_t *)func_0x180672de0(0x20);
      *pU64_7 = &PTR_FUN_1806b4218;
      *(uint32_t *)(pU64_7 + 1) = 8;
      *(uint64_t *)((int64_t)pU64_7 + 0xc) = 0;
      *(uint32_t *)((int64_t)pU64_7 + 0x14) = 0;
      pU8_6 = param_1[8];
      pU64_7[3] = pU8_6;
      lVal_3 = *(int64_t *)(pU8_6 + 0x10);
      if (lVal_3 != 0) {
        pU64_7[2] = lVal_3;
        *(uint64_t **)(lVal_3 + 0x18) = pU64_7;
        pU8_6 = param_1[8];
      }
      *(uint64_t **)(pU8_6 + 0x10) = pU64_7;
      param_1[8] = (byte *)pU64_7;
      func_0x1800f4480(param_1);
      uVal_10 = 0xe;
      if (*(int *)(pU64_7 + 1) - 8U < 4) {
        uVal_10 = (&DAT_1806b456c)[*(int *)(pU64_7 + 1) - 8U];
      }
      pU64_8 = (uint64_t *)func_0x180672de0(0x28);
      *(uint32_t *)(pU64_8 + 1) = uVal_10;
      *(uint64_t *)((int64_t)pU64_8 + 0xc) = 0;
      *(uint32_t *)((int64_t)pU64_8 + 0x14) = 0;
      *pU64_8 = &PTR_FUN_1806b4238;
      pU64_8[4] = pU64_7;
      pU8_6 = param_1[8];
      pU64_8[3] = pU8_6;
      lVal_3 = *(int64_t *)(pU8_6 + 0x10);
      if (lVal_3 != 0) {
        pU64_8[2] = lVal_3;
        *(uint64_t **)(lVal_3 + 0x18) = pU64_8;
        pU8_6 = param_1[8];
      }
      *(uint64_t **)(pU8_6 + 0x10) = pU64_8;
      param_1[8] = (byte *)pU64_8;
    }
    uVal_9 = 1;
  }
  *(int *)((int64_t)param_1 + 0x14) = *(int *)((int64_t)param_1 + 0x14) + -1;
  return uVal_9;
}

// Unwind@1800f55e0
void Unwind_1800f55e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800f79b0(*(uint64_t *)(param_2 + 0x20),1);
  return;
}

// Unwind@1800f5620
void Unwind_1800f5620(uint64_t param_1,int64_t param_2)
{
  func_0x1800f79b0(*(uint64_t *)(param_2 + 0x20),1);
  return;
}

// func_0x1800f5660
void func_0x1800f5660(int64_t param_1,uint32_t param_2)
{
  byte bFlag_1;
  uint uVal_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  uint64_t *pU64_5;
  int64_t lVal_6;
  uint uVal_7;
  uint64_t *pU64_8;
  uint uVal_9;
  
  pU64_8 = *(uint64_t **)(param_1 + 8);
  if (*(int *)(pU64_8 + 1) == 6) {
    bFlag_1 = *(byte *)(param_1 + 0x11);
  }
  else {
    pU64_5 = (uint64_t *)func_0x180672de0(0x30);
    *(uint32_t *)(pU64_5 + 1) = 6;
    *(uint64_t *)((int64_t)pU64_5 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_5 + 0x14) = 0;
    *pU64_5 = &PTR_LAB_1806b43d0;
    *(uint8_t (*)[16])(pU64_5 + 4) = ZEXT816(0);
    pU64_5[3] = pU64_8;
    lVal_6 = pU64_8[2];
    if (lVal_6 != 0) {
      pU64_5[2] = lVal_6;
      *(uint64_t **)(lVal_6 + 0x18) = pU64_5;
      pU64_8 = *(uint64_t **)(param_1 + 8);
    }
    pU64_8[2] = pU64_5;
    *(uint64_t **)(param_1 + 8) = pU64_5;
    bFlag_1 = *(byte *)(param_1 + 0x11);
    pU64_8 = pU64_5;
  }
  if ((bFlag_1 & 1) != 0) {
    pLong_3 = *(int64_t **)(*(int64_t *)(param_1 + 0x18) + 8);
    param_2 = (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,param_2);
    pU64_8 = *(uint64_t **)(param_1 + 8);
  }
  uVal_2 = *(uint *)(pU64_8 + 4);
  uVal_7 = *(uint *)((int64_t)pU64_8 + 0x24);
  if (uVal_7 < uVal_2) {
    lVal_6 = pU64_8[5];
  }
  else {
    uVal_7 = 0x10;
    if (0x10 < uVal_2 >> 1) {
      uVal_7 = uVal_2 >> 1;
    }
    uVal_9 = 0xffffffff;
    if (!CARRY4(uVal_7,uVal_2)) {
      uVal_9 = uVal_7 + uVal_2;
    }
    if ((uVal_9 == uVal_2) || (lVal_6 = _realloc_base(pU64_8[5],uVal_9), lVal_6 == 0)) {
      func_0x180674790(9);
      fnPtr_4 = (func_ptr_t )swi(3);
      (*fnPtr_4)();
      return;
    }
    pU64_8[5] = lVal_6;
    *(uint *)(pU64_8 + 4) = uVal_9;
    uVal_7 = *(uint *)((int64_t)pU64_8 + 0x24);
  }
  *(uint *)((int64_t)pU64_8 + 0x24) = uVal_7 + 1;
  *(char *)(lVal_6 + (uint64_t)uVal_7) = (char)param_2;
  return;
}

// func_0x1800f5760
void func_0x1800f5760(byte **param_1)
{
  byte *pU8_1;
  int iVal_2;
  byte *pU8_3;
  byte *pU8_4;
  int iVal_5;
  uint64_t unaff_RBP;
  int iVal_6;
  bool bFlag_7;
  
  iVal_2 = *(int *)(param_1 + 0xe);
  iVal_6 = 0;
  if (iVal_2 < 0x3f) {
    if (iVal_2 != 0x2a) {
      if (iVal_2 != 0x2b) {
        return;
      }
      iVal_6 = 1;
    }
LAB_1800f58da:
    iVal_5 = -1;
LAB_1800f58df:
    pU8_3 = *param_1;
    pU8_4 = param_1[1];
    if (pU8_3 == pU8_4) goto LAB_1800f594d;
  }
  else {
    if (iVal_2 != 0x3f) {
      if (iVal_2 != 0x7b) {
        return;
      }
      pU8_3 = *param_1;
      if (pU8_3 != param_1[1]) {
        if ((((*pU8_3 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
            (pU8_4 = pU8_3 + 1, pU8_4 != param_1[1])) &&
           (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_4 & 0xfe) == 0x28)) ||
            ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_4 == 0x7d || (*pU8_4 == 0x7b))))))))
        {
          pU8_3 = pU8_4;
        }
        *param_1 = pU8_3 + 1;
      }
      func_0x1800f4270(param_1);
      iVal_2 = func_0x1800f5f90(param_1,10,0,0x7fffffff,7);
      if (iVal_2 == 0x7fffffff) {
LAB_1800f58d0:
        func_0x180674790(7);
        goto LAB_1800f58da;
      }
      iVal_6 = *(int *)((int64_t)param_1 + 0x6c);
      iVal_2 = *(int *)(param_1 + 0xe);
      iVal_5 = iVal_6;
      if (iVal_2 == 0x2c) {
        pU8_3 = *param_1;
        if (pU8_3 != param_1[1]) {
          if ((((*pU8_3 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
              (pU8_4 = pU8_3 + 1, pU8_4 != param_1[1])) &&
             (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_4 & 0xfe) == 0x28)) ||
              ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_4 == 0x7d || (*pU8_4 == 0x7b))))))
             )) {
            pU8_3 = pU8_4;
          }
          *param_1 = pU8_3 + 1;
        }
        func_0x1800f4270(param_1);
        if (*(int *)(param_1 + 0xe) == 0x7d) goto LAB_1800f58da;
        iVal_2 = func_0x1800f5f90(param_1,10,0,0x7fffffff,7);
        if (iVal_2 == 0x7fffffff) goto LAB_1800f58d0;
        iVal_5 = *(int *)((int64_t)param_1 + 0x6c);
        iVal_2 = *(int *)(param_1 + 0xe);
      }
      if (iVal_2 != 0x7d) goto LAB_1800f58d0;
      if (iVal_5 == -1) goto LAB_1800f58da;
      if (iVal_5 < iVal_6) goto LAB_1800f58d0;
      goto LAB_1800f58df;
    }
    iVal_5 = 1;
    pU8_3 = *param_1;
    pU8_4 = param_1[1];
    if (pU8_3 == pU8_4) goto LAB_1800f594d;
  }
  if ((((*pU8_3 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
      (pU8_1 = pU8_3 + 1, pU8_1 != pU8_4)) &&
     (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
      ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
    pU8_3 = pU8_1;
  }
  *param_1 = pU8_3 + 1;
LAB_1800f594d:
  func_0x1800f4270(param_1);
  pU8_3 = param_1[0xc];
  bFlag_7 = ((uint64_t)pU8_3 & 0x200) == 0;
  iVal_2 = *(int *)(param_1 + 0xe);
  if (iVal_2 == 0x3f && !bFlag_7) {
    pU8_4 = *param_1;
    if (pU8_4 != param_1[1]) {
      if ((((*pU8_4 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_1 = pU8_4 + 1, pU8_1 != param_1[1])) &&
         (((((uint64_t)pU8_3 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
          ((((uint64_t)pU8_3 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
        pU8_4 = pU8_1;
      }
      *param_1 = pU8_4 + 1;
    }
    func_0x1800f4270(param_1);
  }
  func_0x1800f7e00(param_1 + 7,iVal_6,iVal_5,
                CONCAT71((int7)((uint64_t)unaff_RBP >> 8),iVal_2 != 0x3f || bFlag_7) & 0xffffffff);
  return;
}

// func_0x1800f59f0
uint64_t func_0x1800f59f0(byte **param_1,uint64_t param_2)
{
  byte *pU8_1;
  func_ptr_t fnPtr_2;
  char ch_3;
  byte *pU8_4;
  undefined7 uVal_6;
  uint64_t uVal_5;
  byte bFlag_7;
  uint32_t uVal_8;
  byte *pU8_9;
  
  if (*(int *)(param_1 + 0xe) == -1) goto LAB_1800f5d8e;
  pU8_4 = param_1[0xc];
  if ((((short)pU8_4 < 0) &&
      (bFlag_7 = (byte)(*(char *)((int64_t)param_1 + 0x75) + 0x9aU) >> 1 |
               *(char *)((int64_t)param_1 + 0x75) << 7, bFlag_7 < 9)) &&
     ((0x1d1U >> (bFlag_7 & 0x1f) & 1) != 0)) {
    uVal_8 = *(uint32_t *)(&DAT_1806b4548 + (uint64_t)bFlag_7 * 4);
LAB_1800f5af8:
    *(uint32_t *)((int64_t)param_1 + 0x6c) = uVal_8;
    pU8_9 = *param_1;
    if (pU8_9 != param_1[1]) {
      if ((((*pU8_9 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_1 = pU8_9 + 1, pU8_1 != param_1[1])) &&
         (((((uint64_t)pU8_4 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
          ((((uint64_t)pU8_4 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
        pU8_9 = pU8_1;
      }
LAB_1800f5d6c:
      *param_1 = pU8_9 + 1;
    }
LAB_1800f5d72:
    uVal_5 = func_0x1800f4270(param_1);
  }
  else {
    ch_3 = *(char *)((int64_t)param_1 + 0x75);
    if (((uint64_t)pU8_4 & 0x4000) != 0) {
      if (ch_3 == 'a') {
        uVal_8 = 7;
      }
      else {
        if (ch_3 != 'b') goto LAB_1800f5a5b;
        uVal_8 = 8;
      }
      goto LAB_1800f5af8;
    }
LAB_1800f5a5b:
    if (ch_3 != 'x') {
      if (ch_3 == 'u') {
        if (((uint64_t)pU8_4 & 0x400) != 0) {
          pU8_9 = *param_1;
          if (pU8_9 != param_1[1]) {
            if ((((*pU8_9 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
                (pU8_1 = pU8_9 + 1, pU8_1 != param_1[1])) &&
               (((((uint64_t)pU8_4 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
                ((((uint64_t)pU8_4 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
              pU8_9 = pU8_1;
            }
            *param_1 = pU8_9 + 1;
          }
          func_0x1800f4270(param_1);
          uVal_5 = 4;
          goto LAB_1800f5d0b;
        }
LAB_1800f5be2:
        if (((uint64_t)pU8_4 & 0x1000) != 0) {
          param_2 = param_2 & 0xffffffff;
          uVal_5 = func_0x1800f5f90(param_1,8,0,3,2);
          if ((int)uVal_5 != 3) {
            if (*(int *)((int64_t)param_1 + 0x6c) == 0) goto LAB_1800f5d8e;
            goto LAB_1800f5d7a;
          }
        }
        ch_3 = func_0x1800f60e0(param_1,param_2);
        if (ch_3 == '\0') {
          return 0;
        }
        *(uint8_t *)((int64_t)param_1 + 0x76) = *(uint8_t *)((int64_t)param_1 + 0x75);
        pU8_4 = *param_1;
        if (pU8_4 != param_1[1]) {
          if ((((*pU8_4 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
              (pU8_9 = pU8_4 + 1, pU8_9 != param_1[1])) &&
             (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_9 & 0xfe) == 0x28)) ||
              ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_9 == 0x7d || (*pU8_9 == 0x7b))))))
             )) {
            pU8_4 = pU8_9;
          }
          *param_1 = pU8_4 + 1;
        }
        uVal_5 = func_0x1800f4270(param_1);
        uVal_6 = (undefined7)((uint64_t)uVal_5 >> 8);
        goto LAB_1800f5c7f;
      }
      if ((ch_3 != 'c') || (((uint64_t)pU8_4 & 0x20000) == 0)) goto LAB_1800f5be2;
      pU8_9 = *param_1;
      if (pU8_9 != param_1[1]) {
        if ((((*pU8_9 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
            (pU8_1 = pU8_9 + 1, pU8_1 != param_1[1])) &&
           (((((uint64_t)pU8_4 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
            ((((uint64_t)pU8_4 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
          pU8_9 = pU8_1;
        }
        *param_1 = pU8_9 + 1;
      }
      func_0x1800f4270(param_1);
      bFlag_7 = *(byte *)((int64_t)param_1 + 0x75);
      if (bFlag_7 < 0x61) {
        if ((byte)(bFlag_7 + 0xa5) < 0xe6) goto LAB_1800f5d8e;
      }
      else if (0x7a < bFlag_7) goto LAB_1800f5d8e;
      *(uint *)((int64_t)param_1 + 0x6c) = bFlag_7 & 0x1f;
      pU8_9 = *param_1;
      if (pU8_9 != param_1[1]) {
        if ((((*pU8_9 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
            (pU8_4 = pU8_9 + 1, pU8_4 != param_1[1])) &&
           (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_4 & 0xfe) == 0x28)) ||
            ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_4 == 0x7d || (*pU8_4 == 0x7b))))))))
        {
          pU8_9 = pU8_4;
        }
        goto LAB_1800f5d6c;
      }
      goto LAB_1800f5d72;
    }
    if (((uint64_t)pU8_4 & 0x800) == 0) goto LAB_1800f5be2;
    pU8_9 = *param_1;
    if (pU8_9 != param_1[1]) {
      if ((((*pU8_9 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_1 = pU8_9 + 1, pU8_1 != param_1[1])) &&
         (((((uint64_t)pU8_4 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
          ((((uint64_t)pU8_4 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
        pU8_9 = pU8_1;
      }
      *param_1 = pU8_9 + 1;
    }
    func_0x1800f4270(param_1);
    uVal_5 = 2;
LAB_1800f5d0b:
    uVal_5 = func_0x1800f5f90(param_1,0x10,0,uVal_5,2);
    if ((int)uVal_5 != 0) goto LAB_1800f5d8e;
  }
LAB_1800f5d7a:
  *(char *)((int64_t)param_1 + 0x76) = (char)*(uint *)((int64_t)param_1 + 0x6c);
  uVal_6 = (undefined7)((uint64_t)uVal_5 >> 8);
  if (0xff < *(uint *)((int64_t)param_1 + 0x6c)) {
LAB_1800f5d8e:
    func_0x180674790(2);
    fnPtr_2 = (func_ptr_t )swi(3);
    uVal_5 = (*fnPtr_2)();
    return uVal_5;
  }
LAB_1800f5c7f:
  return CONCAT71(uVal_6,1);
}

// func_0x1800f5da0
uint64_t func_0x1800f5da0(byte **param_1,char param_2)
{
  uint uVal_1;
  byte *pU8_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  char ch_5;
  char ch_6;
  ushort uVal_7;
  char *fnPtr_8;
  uint64_t *pU64_9;
  byte *pU8_10;
  byte bFlag_11;
  uint64_t uVal_12;
  ushort uVal_13;
  uint8_t **ptr2_U64_14;
  
  pU8_10 = *param_1;
  if (pU8_10 != param_1[1]) {
    pU8_2 = param_1[0xb];
    uVal_1 = *(uint *)(param_1 + 0xd);
    fnPtr_8 = "alnum";
    ptr2_U64_14 = &PTR_s_alpha_1806b4258;
    uVal_12 = 0;
    do {
      if ((0x2810UL >> (uVal_12 & 0x3f) & 1) != 0) {
        ch_6 = *fnPtr_8;
        pLong_3 = *(int64_t **)(pU8_2 + 8);
        ch_5 = (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,*pU8_10);
        pLong_3 = *(int64_t **)(pU8_2 + 8);
        ch_6 = (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,ch_6);
        if (ch_5 == ch_6) {
          uVal_7 = *(ushort *)((int64_t)ptr2_U64_14 + -4);
          goto LAB_1800f5e36;
        }
      }
      uVal_12 = uVal_12 + 1;
      fnPtr_8 = *ptr2_U64_14;
      ptr2_U64_14 = ptr2_U64_14 + 3;
    } while (uVal_12 != 0xf);
    uVal_7 = 0;
LAB_1800f5e36:
    uVal_13 = uVal_7 | 3;
    if ((uVal_7 & 3) == 0) {
      uVal_13 = uVal_7;
    }
    if ((uVal_1 & 0x100) == 0) {
      uVal_13 = uVal_7;
    }
    if (uVal_13 != 0) {
      bFlag_11 = *(char *)((int64_t)param_1 + 0x75) + 0xbc;
      if (param_2 == '\0') {
        bFlag_11 = bFlag_11 < 0x14 & (byte)(0x88001 >> (bFlag_11 & 0x1f));
        pU64_9 = (uint64_t *)param_1[8];
      }
      else {
        pU64_9 = (uint64_t *)func_0x180672de0(0x50);
        *(uint32_t *)(pU64_9 + 1) = 7;
        *(uint64_t *)((int64_t)pU64_9 + 0xc) = 0;
        *(uint32_t *)((int64_t)pU64_9 + 0x14) = 0;
        *pU64_9 = &PTR_LAB_1806b43c0;
        pU64_9[9] = 0;
        *(uint8_t (*)[16])(pU64_9 + 4) = ZEXT816(0);
        *(uint8_t (*)[16])(pU64_9 + 6) = ZEXT816(0);
        *(uint16_t *)(pU64_9 + 8) = 0;
        pU8_10 = param_1[8];
        pU64_9[3] = pU8_10;
        lVal_4 = *(int64_t *)(pU8_10 + 0x10);
        if (lVal_4 != 0) {
          pU64_9[2] = lVal_4;
          *(uint64_t **)(lVal_4 + 0x18) = pU64_9;
          pU8_10 = param_1[8];
        }
        *(uint64_t **)(pU8_10 + 0x10) = pU64_9;
        param_1[8] = (byte *)pU64_9;
        if ((bFlag_11 >= 0x14 | (byte)(0x77ffe >> (bFlag_11 & 0x1f)) & 1) == 0) {
          *(byte *)((int64_t)pU64_9 + 0xc) = *(byte *)((int64_t)pU64_9 + 0xc) ^ 1;
        }
        bFlag_11 = 0;
      }
      func_0x1800f6250(param_1 + 7,pU64_9,uVal_13,bFlag_11);
      pU8_10 = *param_1;
      if (pU8_10 != param_1[1]) {
        if ((((*pU8_10 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
            (pU8_2 = pU8_10 + 1, pU8_2 != param_1[1])) &&
           (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_2 & 0xfe) == 0x28)) ||
            ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_2 == 0x7d || (*pU8_2 == 0x7b))))))))
        {
          pU8_10 = pU8_2;
        }
        *param_1 = pU8_10 + 1;
      }
      func_0x1800f4270(param_1);
      return 1;
    }
  }
  return 0;
}

// func_0x1800f5f90
uint64_t func_0x1800f5f90(byte **param_1,int param_2,uint32_t param_3,uint param_4, uint32_t param_5)
{
  byte *pU8_1;
  byte bFlag_2;
  func_ptr_t fnPtr_3;
  byte *pU8_4;
  uint64_t uVal_5;
  int iVal_6;
  uint uVal_7;
  
  *(uint32_t *)((int64_t)param_1 + 0x6c) = param_3;
  if (param_4 != 0) {
    do {
      bFlag_2 = *(byte *)((int64_t)param_1 + 0x75);
      iVal_6 = (int)(char)bFlag_2;
      if ((param_2 == 8 || 9 < (byte)(bFlag_2 - 0x30)) && ((param_2 != 8 || ((bFlag_2 & 0xf8) != 0x30)))
         ) {
        if (param_2 != 0x10) {
LAB_1800f60c7:
          return (uint64_t)param_4;
        }
        if ((byte)(bFlag_2 + 0x9f) < 6) {
          uVal_7 = iVal_6 - 0x57;
        }
        else if (((byte)(bFlag_2 + 0xb9) < 0xfa) || (uVal_7 = iVal_6 - 0x37, uVal_7 == 0xffffffff))
        goto LAB_1800f60c7;
      }
      else {
        uVal_7 = iVal_6 - 0x30;
      }
      uVal_5 = CONCAT44((int)(uVal_7 ^ 0x7fffffff) >> 0x1f,uVal_7) ^ 0x7fffffff;
      if ((int)((int64_t)uVal_5 / (int64_t)param_2) < *(int *)((int64_t)param_1 + 0x6c)) {
        func_0x180674790(param_5,(int64_t)uVal_5 % (int64_t)param_2 & 0xffffffff);
        fnPtr_3 = (func_ptr_t )swi(3);
        uVal_5 = (*fnPtr_3)();
        return uVal_5;
      }
      *(uint *)((int64_t)param_1 + 0x6c) = *(int *)((int64_t)param_1 + 0x6c) * param_2 + uVal_7;
      pU8_4 = *param_1;
      if (pU8_4 != param_1[1]) {
        if ((((*pU8_4 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
            (pU8_1 = pU8_4 + 1, pU8_1 != param_1[1])) &&
           (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
            ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b))))))))
        {
          pU8_4 = pU8_1;
        }
        *param_1 = pU8_4 + 1;
      }
      param_4 = param_4 - 1;
      func_0x1800f4270(param_1);
    } while (param_4 != 0);
  }
  return 0;
}

// func_0x1800f60e0
uint64_t func_0x1800f60e0(int64_t param_1,uint64_t param_2)
{
  undefined7 uVal_2;
  uint64_t uVal_1;
  byte bFlag_3;
  
  param_2 = param_2 & 0xffffffff;
  uVal_1 = *(uint64_t *)(param_1 + 0x60);
  uVal_2 = (undefined7)(param_2 >> 8);
  if ((uVal_1 & 0x200000) == 0) {
    switch(*(char *)(param_1 + 0x75)) {
    case '\"':
    case '/':
      return (uint64_t)((uint)(uVal_1 >> 0x17) & 1);
    default:
      uVal_1 = 0;
      break;
    case '$':
    case '*':
    case '.':
    case '[':
    case ']':
    case '^':
      return (param_2 ^ 1) & 0xffffffffffffff01;
    case '(':
    case ')':
    case '+':
    case '?':
    case '{':
    case '|':
    case '}':
      return CONCAT71(uVal_2,((byte)param_2 ^ 1) & (byte)((uint)uVal_1 >> 0x16)) & 0xffffffffffffff01;
    case '\\':
      return CONCAT71(uVal_2,1);
    }
  }
  else {
    bFlag_3 = *(char *)(param_1 + 0x75) + 0xbc;
    uVal_1 = CONCAT71(uVal_2,1);
    if (bFlag_3 < 0x34) {
      return 0x77ffe7ff77ffeU >> (bFlag_3 & 0x3f) & 0xffffffffffffff01;
    }
  }
  return uVal_1;
}

// func_0x1800f6180
void func_0x1800f6180(uint64_t *param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  *param_1 = &PTR_LAB_1806b43c0;
  lVal_2 = param_1[4];
  while (lVal_2 != 0) {
    lVal_1 = *(int64_t *)(lVal_2 + 0x18);
    thunk_FUN_180695dd0(*(uint64_t *)(lVal_2 + 0x10));
    thunk_FUN_180695dd0(lVal_2,0x20);
    lVal_2 = lVal_1;
  }
  if (param_1[5] != 0) {
    thunk_FUN_180695dd0(param_1[5],0x20);
  }
  lVal_2 = param_1[6];
  if (lVal_2 != 0) {
    thunk_FUN_180695dd0(*(uint64_t *)(lVal_2 + 8));
    thunk_FUN_180695dd0(lVal_2,0x10);
  }
  lVal_2 = param_1[7];
  if (lVal_2 != 0) {
    thunk_FUN_180695dd0(*(uint64_t *)(lVal_2 + 8));
    thunk_FUN_180695dd0(lVal_2,0x10);
  }
  lVal_2 = param_1[9];
  while (lVal_2 != 0) {
    lVal_1 = *(int64_t *)(lVal_2 + 0x18);
    thunk_FUN_180695dd0(*(uint64_t *)(lVal_2 + 0x10));
    thunk_FUN_180695dd0(lVal_2,0x20);
    lVal_2 = lVal_1;
  }
  return;
}

// func_0x1800f6250
void func_0x1800f6250(int64_t param_1,int64_t param_2,ushort param_3,char param_4)
{
  uint8_t (*pArr16_1)[16];
  uint64_t uVal_2;
  
  if (param_3 == 0xffff) {
    if (param_4 == '\0') {
      uVal_2 = 0;
      do {
        if ((uVal_2 == 0x5f) ||
           ((*(ushort *)
              (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8) + 0x18) + uVal_2 * 2) &
            0x107) != 0)) {
          pArr16_1 = *(uint8_t (**)[16])(param_2 + 0x28);
          if (pArr16_1 == (uint8_t (*)[16])0x0) {
            pArr16_1 = (uint8_t (*)[16])func_0x180672de0(0x20);
            *pArr16_1 = ZEXT816(0);
            pArr16_1[1] = ZEXT816(0);
            *(uint8_t (**)[16])(param_2 + 0x28) = pArr16_1;
          }
          (*pArr16_1)[uVal_2 >> 3 & 0x1fffffff] =
               (*pArr16_1)[uVal_2 >> 3 & 0x1fffffff] | '\x01' << ((byte)uVal_2 & 7);
        }
        uVal_2 = uVal_2 + 1;
      } while (uVal_2 != 0x100);
    }
    else {
      uVal_2 = 0;
      do {
        if ((uVal_2 != 0x5f) &&
           ((*(ushort *)
              (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8) + 0x18) + uVal_2 * 2) &
            0x107) == 0)) {
          pArr16_1 = *(uint8_t (**)[16])(param_2 + 0x28);
          if (pArr16_1 == (uint8_t (*)[16])0x0) {
            pArr16_1 = (uint8_t (*)[16])func_0x180672de0(0x20);
            *pArr16_1 = ZEXT816(0);
            pArr16_1[1] = ZEXT816(0);
            *(uint8_t (**)[16])(param_2 + 0x28) = pArr16_1;
          }
          (*pArr16_1)[uVal_2 >> 3 & 0x1fffffff] =
               (*pArr16_1)[uVal_2 >> 3 & 0x1fffffff] | '\x01' << ((byte)uVal_2 & 7);
        }
        uVal_2 = uVal_2 + 1;
      } while (uVal_2 != 0x100);
    }
  }
  else {
    uVal_2 = 0;
    do {
      if ((bool)param_4 !=
          ((*(ushort *)
             (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8) + 0x18) + uVal_2 * 2) &
           param_3) != 0)) {
        pArr16_1 = *(uint8_t (**)[16])(param_2 + 0x28);
        if (pArr16_1 == (uint8_t (*)[16])0x0) {
          pArr16_1 = (uint8_t (*)[16])func_0x180672de0(0x20);
          *pArr16_1 = ZEXT816(0);
          pArr16_1[1] = ZEXT816(0);
          *(uint8_t (**)[16])(param_2 + 0x28) = pArr16_1;
        }
        (*pArr16_1)[uVal_2 >> 3 & 0x1fffffff] =
             (*pArr16_1)[uVal_2 >> 3 & 0x1fffffff] | '\x01' << ((byte)uVal_2 & 7);
      }
      uVal_2 = uVal_2 + 1;
    } while (uVal_2 != 0x100);
  }
  return;
}

// func_0x1800f63e0
void func_0x1800f63e0(byte **param_1)
{
  byte *pU8_1;
  byte bFlag_2;
  func_ptr_t fnPtr_3;
  byte bFlag_4;
  int iVal_5;
  uint uVal_6;
  int iVal_7;
  uint uVal_8;
  uint8_t (*pArr16_9)[16];
  byte *pU8_10;
  uint64_t uVal_11;
  
  iVal_5 = func_0x1800f67e0(param_1,1);
  if (iVal_5 == 0) {
    return;
  }
  if (iVal_5 == 1) {
    uVal_11 = (uint64_t)*(byte *)((int64_t)param_1 + 0x76);
    if ((*(byte *)((int64_t)param_1 + 0x62) & 8 | *(byte *)((int64_t)param_1 + 0x76)) == 0) {
LAB_1800f67c9:
      func_0x180674790(2);
      goto LAB_1800f67d3;
    }
    if (*(int *)(param_1 + 0xe) != 0x2d) {
      if ((*(byte *)((int64_t)param_1 + 0x49) & 1) != 0) {
        uVal_6 = (**(func_ptr_t *)(**(int64_t **)(param_1[10] + 8) + 0x20))
                          (*(int64_t **)(param_1[10] + 8),uVal_11);
        uVal_11 = (uint64_t)uVal_6;
      }
      pU8_10 = param_1[8];
      pArr16_9 = *(uint8_t (**)[16])(pU8_10 + 0x28);
      if (pArr16_9 == (uint8_t (*)[16])0x0) {
        pArr16_9 = (uint8_t (*)[16])func_0x180672de0(0x20);
        *pArr16_9 = ZEXT816(0);
        pArr16_9[1] = ZEXT816(0);
        *(uint8_t (**)[16])(pU8_10 + 0x28) = pArr16_9;
      }
      (*pArr16_9)[(uVal_11 & 0xff) >> 3] =
           (*pArr16_9)[(uVal_11 & 0xff) >> 3] | '\x01' << ((byte)uVal_11 & 7);
      goto LAB_1800f656d;
    }
  }
  else {
    if (*(int *)(param_1 + 0xe) != 0x2d) goto LAB_1800f656d;
    uVal_11 = (uint64_t)*(byte *)((int64_t)param_1 + 0x76);
  }
  pU8_10 = *param_1;
  if (pU8_10 != param_1[1]) {
    if ((((*pU8_10 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
        (pU8_1 = pU8_10 + 1, pU8_1 != param_1[1])) &&
       (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
        ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
      pU8_10 = pU8_1;
    }
    *param_1 = pU8_10 + 1;
  }
  bFlag_4 = *(byte *)((int64_t)param_1 + 0x75);
  func_0x1800f4270(param_1);
  iVal_7 = func_0x1800f67e0(param_1,0);
  if (iVal_7 == 0) {
LAB_1800f66e4:
    if (iVal_5 == 2) {
      bFlag_2 = *(byte *)((int64_t)param_1 + 0x49);
    }
    else {
      if ((*(byte *)((int64_t)param_1 + 0x49) & 1) != 0) {
        uVal_6 = (**(func_ptr_t *)(**(int64_t **)(param_1[10] + 8) + 0x20))
                          (*(int64_t **)(param_1[10] + 8),uVal_11);
        uVal_11 = (uint64_t)uVal_6;
      }
      pU8_10 = param_1[8];
      pArr16_9 = *(uint8_t (**)[16])(pU8_10 + 0x28);
      if (pArr16_9 == (uint8_t (*)[16])0x0) {
        pArr16_9 = (uint8_t (*)[16])func_0x180672de0(0x20);
        *pArr16_9 = ZEXT816(0);
        pArr16_9[1] = ZEXT816(0);
        *(uint8_t (**)[16])(pU8_10 + 0x28) = pArr16_9;
      }
      (*pArr16_9)[(uVal_11 & 0xff) >> 3] =
           (*pArr16_9)[(uVal_11 & 0xff) >> 3] | '\x01' << ((byte)uVal_11 & 7);
      bFlag_2 = *(byte *)((int64_t)param_1 + 0x49);
    }
    if ((bFlag_2 & 1) == 0) {
      pU8_10 = param_1[8];
      pArr16_9 = *(uint8_t (**)[16])(pU8_10 + 0x28);
    }
    else {
      bFlag_4 = (**(func_ptr_t *)(**(int64_t **)(param_1[10] + 8) + 0x20))
                        (*(int64_t **)(param_1[10] + 8),bFlag_4);
      pU8_10 = param_1[8];
      pArr16_9 = *(uint8_t (**)[16])(pU8_10 + 0x28);
    }
    if (pArr16_9 == (uint8_t (*)[16])0x0) {
      pArr16_9 = (uint8_t (*)[16])func_0x180672de0(0x20);
      *pArr16_9 = ZEXT816(0);
      pArr16_9[1] = ZEXT816(0);
      *(uint8_t (**)[16])(pU8_10 + 0x28) = pArr16_9;
    }
    (*pArr16_9)[bFlag_4 >> 3] = (*pArr16_9)[bFlag_4 >> 3] | '\x01' << (bFlag_4 & 7);
    return;
  }
  if ((iVal_5 != 2) && (iVal_7 != 2)) {
    bFlag_4 = *(byte *)((int64_t)param_1 + 0x76);
    uVal_6 = (uint)bFlag_4;
    if ((*(byte *)((int64_t)param_1 + 0x69) & 1) != 0) {
      uVal_6 = (**(func_ptr_t *)(**(int64_t **)(param_1[0xb] + 8) + 0x20))
                        (*(int64_t **)(param_1[0xb] + 8),uVal_11);
      uVal_11 = (uint64_t)uVal_6;
      uVal_6 = (**(func_ptr_t *)(**(int64_t **)(param_1[0xb] + 8) + 0x20))
                        (*(int64_t **)(param_1[0xb] + 8),bFlag_4);
    }
    func_0x1800f6a10(param_1 + 7,uVal_11,uVal_6);
LAB_1800f656d:
    do {
      do {
        while (iVal_5 = func_0x1800f67e0(param_1,0), iVal_5 == 1) {
          uVal_11 = (uint64_t)*(byte *)((int64_t)param_1 + 0x76);
          if ((*(byte *)((int64_t)param_1 + 0x62) & 8 | *(byte *)((int64_t)param_1 + 0x76)) == 0)
          goto LAB_1800f67c9;
          if (*(int *)(param_1 + 0xe) == 0x2d) goto LAB_1800f65bc;
          if ((*(byte *)((int64_t)param_1 + 0x49) & 1) != 0) {
            uVal_6 = (**(func_ptr_t *)(**(int64_t **)(param_1[10] + 8) + 0x20))
                              (*(int64_t **)(param_1[10] + 8),uVal_11);
            uVal_11 = (uint64_t)uVal_6;
          }
          pU8_10 = param_1[8];
          pArr16_9 = *(uint8_t (**)[16])(pU8_10 + 0x28);
          if (pArr16_9 == (uint8_t (*)[16])0x0) {
            pArr16_9 = (uint8_t (*)[16])func_0x180672de0(0x20);
            *pArr16_9 = ZEXT816(0);
            pArr16_9[1] = ZEXT816(0);
            *(uint8_t (**)[16])(pU8_10 + 0x28) = pArr16_9;
          }
          (*pArr16_9)[(uVal_11 & 0xff) >> 3] =
               (*pArr16_9)[(uVal_11 & 0xff) >> 3] | '\x01' << ((byte)uVal_11 & 7);
        }
        if (iVal_5 == 0) {
          return;
        }
      } while (*(int *)(param_1 + 0xe) != 0x2d);
      uVal_11 = (uint64_t)*(byte *)((int64_t)param_1 + 0x76);
LAB_1800f65bc:
      pU8_10 = *param_1;
      if (pU8_10 != param_1[1]) {
        if ((((*pU8_10 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
            (pU8_1 = pU8_10 + 1, pU8_1 != param_1[1])) &&
           (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
            ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b))))))))
        {
          pU8_10 = pU8_1;
        }
        *param_1 = pU8_10 + 1;
      }
      bFlag_4 = *(byte *)((int64_t)param_1 + 0x75);
      func_0x1800f4270(param_1);
      iVal_7 = func_0x1800f67e0(param_1,0);
      if (iVal_7 == 0) goto LAB_1800f66e4;
      if ((iVal_5 == 2) || (iVal_7 == 2)) break;
      uVal_6 = (uint)*(byte *)((int64_t)param_1 + 0x76);
      if ((*(byte *)((int64_t)param_1 + 0x69) & 1) != 0) {
        uVal_8 = (**(func_ptr_t *)(**(int64_t **)(param_1[0xb] + 8) + 0x20))
                          (*(int64_t **)(param_1[0xb] + 8),uVal_11);
        uVal_11 = (uint64_t)uVal_8;
        uVal_6 = (**(func_ptr_t *)(**(int64_t **)(param_1[0xb] + 8) + 0x20))
                          (*(int64_t **)(param_1[0xb] + 8),uVal_6);
      }
      func_0x1800f6a10(param_1 + 7,uVal_11,uVal_6);
    } while( true );
  }
LAB_1800f67d3:
  func_0x180674790(8);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x1800f67e0
uint64_t func_0x1800f67e0(byte **param_1,char param_2)
{
  byte *pU8_1;
  uint8_t uVal_2;
  int iVal_3;
  byte *pU8_4;
  uint64_t uVal_5;
  byte *pU8_6;
  uint64_t uVal_7;
  
  iVal_3 = *(int *)(param_1 + 0xe);
  if (iVal_3 < 0x5c) {
    if (iVal_3 == -1) {
      return 0;
    }
    if (iVal_3 == 0x5b) {
      pU8_4 = *param_1;
      if (pU8_4 != param_1[1]) {
        if ((((*pU8_4 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
            (pU8_6 = pU8_4 + 1, pU8_6 != param_1[1])) &&
           (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_6 & 0xfe) == 0x28)) ||
            ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_6 == 0x7d || (*pU8_6 == 0x7b))))))))
        {
          pU8_4 = pU8_6;
        }
        *param_1 = pU8_4 + 1;
      }
      uVal_2 = *(uint8_t *)((int64_t)param_1 + 0x75);
      func_0x1800f4270();
      uVal_7 = (uint64_t)*(uint *)(param_1 + 0xe);
      if ((uVal_7 < 0x3e) && ((0x2400400000000000U >> (uVal_7 & 0x3f) & 1) != 0)) {
        pU8_4 = *param_1;
        if (pU8_4 != param_1[1]) {
          if ((((*pU8_4 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
              (pU8_6 = pU8_4 + 1, pU8_6 != param_1[1])) &&
             (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_6 & 0xfe) == 0x28)) ||
              ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_6 == 0x7d || (*pU8_6 == 0x7b))))))
             )) {
            pU8_4 = pU8_6;
          }
          *param_1 = pU8_4 + 1;
        }
        func_0x1800f4270(param_1);
        uVal_5 = func_0x1800f72a0(param_1,uVal_7);
        return uVal_5;
      }
      *(uint8_t *)((int64_t)param_1 + 0x76) = uVal_2;
      return 1;
    }
  }
  else if (iVal_3 == 0x5d) {
    if (param_2 == '\0') {
      return 0;
    }
    if (((uint64_t)param_1[0xc] & 0x20000000) == 0) {
      return 0;
    }
  }
  else if ((iVal_3 == 0x5c) && (pU8_4 = param_1[0xc], ((uint64_t)pU8_4 & 0x100000) != 0)) {
    pU8_6 = *param_1;
    if (pU8_6 != param_1[1]) {
      if ((((*pU8_6 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_1 = pU8_6 + 1, pU8_1 != param_1[1])) &&
         (((((uint64_t)pU8_4 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
          ((((uint64_t)pU8_4 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
        pU8_6 = pU8_1;
      }
      *param_1 = pU8_6 + 1;
    }
    func_0x1800f4270();
    uVal_5 = func_0x1800f7140(param_1);
    return uVal_5;
  }
  *(uint8_t *)((int64_t)param_1 + 0x76) = *(uint8_t *)((int64_t)param_1 + 0x75);
  pU8_4 = *param_1;
  if (pU8_4 != param_1[1]) {
    if ((((*pU8_4 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
        (pU8_6 = pU8_4 + 1, pU8_6 != param_1[1])) &&
       (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_6 & 0xfe) == 0x28)) ||
        ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_6 == 0x7d || (*pU8_6 == 0x7b)))))))) {
      pU8_4 = pU8_6;
    }
    *param_1 = pU8_4 + 1;
  }
  func_0x1800f4270();
  return 1;
}

// func_0x1800f6a10
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
void func_0x1800f6a10(int64_t param_1,byte param_2,uint8_t param_3)
{
  byte *pU8_1;
  func_ptr_t fnPtr_2;
  bool bFlag_3;
  byte bFlag_4;
  int iVal_5;
  uint64_t uVal_6;
  uint8_t (*pArr16_7)[16];
  int64_t lVal_8;
  int64_t lVal_9;
  uint uVal_10;
  uint64_t *******ptr7_U64_11;
  uint64_t *******ptr7_U64_12;
  uint uVal_13;
  uint uVal_14;
  uint *pU64_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  uint64_t *******local_f0 [2];
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t *******local_d0 [2];
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t *******local_b0 [2];
  uint64_t local_a0;
  uint64_t local_98;
  int64_t local_90;
  uint8_t local_88 [16];
  uint64_t local_78;
  uint64_t local_70;
  byte local_62;
  byte local_61;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVal_9 = *(int64_t *)(param_1 + 8);
  if ((*(byte *)(param_1 + 0x11) & 8) == 0) {
    if (param_2 <= (byte)param_3) {
      uVal_6 = (uint64_t)param_2;
      if (*(int64_t *)(lVal_9 + 0x28) == 0) {
        pArr16_7 = (uint8_t (*)[16])func_0x180672de0(0x20);
        *pArr16_7 = ZEXT816(0);
        pArr16_7[1] = ZEXT816(0);
        *(uint8_t (**)[16])(lVal_9 + 0x28) = pArr16_7;
      }
      if (((uint)(byte)param_3 + (uint)param_2 & 1) == 0) {
        pU8_1 = (byte *)(*(int64_t *)(lVal_9 + 0x28) + (uint64_t)(param_2 >> 3));
        *pU8_1 = *pU8_1 | '\x01' << (param_2 & 7);
        uVal_6 = (uint64_t)(param_2 + 1);
      }
      if (param_3 == param_2) {
        return;
      }
      do {
        pU8_1 = (byte *)(*(int64_t *)(lVal_9 + 0x28) + (uVal_6 >> 3));
        *pU8_1 = *pU8_1 | (byte)(1 << ((byte)uVal_6 & 7));
        uVal_13 = (int)uVal_6 + 1;
        pU8_1 = (byte *)(*(int64_t *)(lVal_9 + 0x28) + (uint64_t)(uVal_13 >> 3));
        *pU8_1 = *pU8_1 | (byte)(1 << ((byte)uVal_13 & 7));
        uVal_13 = (int)uVal_6 + 2;
        uVal_6 = (uint64_t)uVal_13;
      } while ((byte)param_3 + 1 != uVal_13);
      return;
    }
  }
  else {
    local_78 = 1;
    local_70 = 0xf;
    local_88._1_15_ = SUB1615(ZEXT816(0),1);
    local_88[0] = param_2;
    local_61 = param_2;
    (**(func_ptr_t *)(***(int64_t ***)(param_1 + 0x18) + 0x20))
              (**(int64_t ***)(param_1 + 0x18),local_d0,local_88,local_88 + 1);
    if (0xf < local_70) {
      uVal_6 = local_70 + 1;
      lVal_8 = local_88._0_8_;
      if (0xfff < uVal_6) {
        lVal_8 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_8)) goto LAB_1800f6f95;
        uVal_6 = local_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_6);
    }
    local_78 = 1;
    local_70 = 0xf;
    local_88._1_15_ = SUB1615(ZEXT816(0),1);
    local_88[0] = param_3;
    local_90 = lVal_9;
    local_62 = param_3;
    (**(func_ptr_t *)(***(int64_t ***)(param_1 + 0x18) + 0x20))
              (**(int64_t ***)(param_1 + 0x18),local_b0,local_88,local_88 + 1);
    if (0xf < local_70) {
      uVal_6 = local_70 + 1;
      lVal_9 = local_88._0_8_;
      if (0xfff < uVal_6) {
        lVal_9 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_9)) goto LAB_1800f6f95;
        uVal_6 = local_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_6);
    }
    uVal_18 = local_a0;
    uVal_6 = local_c0;
    ptr7_U64_12 = local_b0;
    if (0xf < local_98) {
      ptr7_U64_12 = local_b0[0];
    }
    ptr7_U64_11 = local_d0;
    if (0xf < local_b8) {
      ptr7_U64_11 = local_d0[0];
    }
    uVal_17 = local_c0;
    if (local_a0 < local_c0) {
      uVal_17 = local_a0;
    }
    iVal_5 = memcmp(ptr7_U64_11,ptr7_U64_12,uVal_17);
    bFlag_3 = uVal_18 < uVal_6;
    if (iVal_5 != 0) {
      bFlag_3 = 0 < iVal_5;
    }
    if (bFlag_3) goto LAB_1800f6fac;
    uVal_13 = 0;
    do {
      local_78 = 1;
      local_70 = 0xf;
      local_88._1_15_ = SUB1615(ZEXT816(0),1);
      local_88[0] = (byte)uVal_13;
      (**(func_ptr_t *)(***(int64_t ***)(param_1 + 0x18) + 0x20))
                (**(int64_t ***)(param_1 + 0x18),local_f0,local_88,local_88 + 1);
      if (0xf < local_70) {
        uVal_6 = local_70 + 1;
        lVal_9 = local_88._0_8_;
        if (0xfff < uVal_6) {
          lVal_9 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_9)) goto LAB_1800f6f95;
          uVal_6 = local_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_9,uVal_6);
      }
      uVal_17 = local_c0;
      uVal_18 = local_d8;
      uVal_6 = local_e0;
      ptr7_U64_12 = local_f0;
      if (0xf < local_d8) {
        ptr7_U64_12 = local_f0[0];
      }
      ptr7_U64_11 = local_d0;
      if (0xf < local_b8) {
        ptr7_U64_11 = local_d0[0];
      }
      uVal_16 = local_c0;
      if (local_e0 < local_c0) {
        uVal_16 = local_e0;
      }
      iVal_5 = memcmp(ptr7_U64_11,ptr7_U64_12,uVal_16);
      uVal_16 = local_a0;
      bFlag_3 = uVal_17 <= uVal_6;
      if (iVal_5 != 0) {
        bFlag_3 = iVal_5 < 1;
      }
      if (bFlag_3) {
        ptr7_U64_11 = local_b0;
        if (0xf < local_98) {
          ptr7_U64_11 = local_b0[0];
        }
        uVal_17 = uVal_6;
        if (local_a0 < uVal_6) {
          uVal_17 = local_a0;
        }
        iVal_5 = memcmp(ptr7_U64_12,ptr7_U64_11,uVal_17);
        bFlag_3 = uVal_6 <= uVal_16;
        if (iVal_5 != 0) {
          bFlag_3 = iVal_5 < 1;
        }
        if (bFlag_3) {
          pArr16_7 = *(uint8_t (**)[16])(local_90 + 0x28);
          if (pArr16_7 == (uint8_t (*)[16])0x0) {
            pArr16_7 = (uint8_t (*)[16])func_0x180672de0(0x20);
            pArr16_7[1] = ZEXT816(0);
            *pArr16_7 = ZEXT816(0);
            *(uint8_t (**)[16])(local_90 + 0x28) = pArr16_7;
          }
          (*pArr16_7)[uVal_13 >> 3] = (*pArr16_7)[uVal_13 >> 3] | (byte)(1 << ((byte)uVal_13 & 7));
          uVal_18 = local_d8;
        }
      }
      if (0xf < uVal_18) {
        uVal_6 = uVal_18 + 1;
        ptr7_U64_12 = local_f0[0];
        if (0xfff < uVal_6) {
          ptr7_U64_12 = (uint64_t *******)local_f0[0][-1];
          if (0x1f < (uint64_t)((int64_t)local_f0[0] + (-8 - (int64_t)ptr7_U64_12)))
          goto LAB_1800f6f95;
          uVal_6 = uVal_18 + 0x28;
        }
        thunk_FUN_180695dd0(ptr7_U64_12,uVal_6);
      }
      bFlag_4 = local_62;
      lVal_9 = local_90;
      uVal_13 = uVal_13 + 1;
    } while (uVal_13 != 0x100);
    if (0xf < local_98) {
      uVal_6 = local_98 + 1;
      ptr7_U64_12 = local_b0[0];
      if (0xfff < uVal_6) {
        ptr7_U64_12 = (uint64_t *******)local_b0[0][-1];
        if (0x1f < (uint64_t)((int64_t)local_b0[0] + (-8 - (int64_t)ptr7_U64_12)))
        goto LAB_1800f6f95;
        uVal_6 = local_98 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_12,uVal_6);
    }
    if (0xf < local_b8) {
      uVal_6 = local_b8 + 1;
      ptr7_U64_12 = local_d0[0];
      if (0xfff < uVal_6) {
        ptr7_U64_12 = (uint64_t *******)local_d0[0][-1];
        if (0x1f < (uint64_t)((int64_t)local_d0[0] + (-8 - (int64_t)ptr7_U64_12))) {
LAB_1800f6f95:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_6 = local_b8 + 0x28;
      }
      thunk_FUN_180695dd0(ptr7_U64_12,uVal_6);
    }
    pArr16_7 = *(uint8_t (**)[16])(lVal_9 + 0x38);
    if (pArr16_7 == (uint8_t (*)[16])0x0) {
      pArr16_7 = (uint8_t (*)[16])func_0x180672de0(0x10);
      *pArr16_7 = ZEXT816(0);
      *(uint8_t (**)[16])(lVal_9 + 0x38) = pArr16_7;
      pU64_15 = (uint *)(*pArr16_7 + 4);
      uVal_13 = 0x10;
LAB_1800f6efd:
      lVal_8 = _realloc_base(*(uint64_t *)(*pArr16_7 + 8),uVal_13);
      if (lVal_8 != 0) {
        *(int64_t *)(*pArr16_7 + 8) = lVal_8;
        *(uint *)*pArr16_7 = uVal_13;
        uVal_13 = *pU64_15;
LAB_1800f6f1b:
        *pU64_15 = uVal_13 + 1;
        *(byte *)(lVal_8 + (uint64_t)uVal_13) = local_61;
        pU64_15 = *(uint **)(lVal_9 + 0x38);
        uVal_13 = *pU64_15;
        uVal_10 = pU64_15[1];
        if (uVal_10 < uVal_13) {
          lVal_9 = *(int64_t *)(pU64_15 + 2);
LAB_1800f6f72:
          pU64_15[1] = uVal_10 + 1;
          *(byte *)(lVal_9 + (uint64_t)uVal_10) = bFlag_4;
          return;
        }
        uVal_10 = 0x10;
        if (0x10 < uVal_13 >> 1) {
          uVal_10 = uVal_13 >> 1;
        }
        uVal_14 = 0xffffffff;
        if (!CARRY4(uVal_10,uVal_13)) {
          uVal_14 = uVal_10 + uVal_13;
        }
        if ((uVal_14 != uVal_13) &&
           (lVal_9 = _realloc_base(*(uint64_t *)(pU64_15 + 2),uVal_14), lVal_9 != 0)) {
          *(int64_t *)(pU64_15 + 2) = lVal_9;
          *pU64_15 = uVal_14;
          uVal_10 = pU64_15[1];
          goto LAB_1800f6f72;
        }
      }
    }
    else {
      uVal_10 = *(uint *)*pArr16_7;
      uVal_13 = *(uint *)(*pArr16_7 + 4);
      pU64_15 = (uint *)(*pArr16_7 + 4);
      if (uVal_13 < uVal_10) {
        lVal_8 = *(int64_t *)(*pArr16_7 + 8);
        goto LAB_1800f6f1b;
      }
      uVal_14 = 0x10;
      if (0x10 < uVal_10 >> 1) {
        uVal_14 = uVal_10 >> 1;
      }
      uVal_13 = 0xffffffff;
      if (!CARRY4(uVal_14,uVal_10)) {
        uVal_13 = uVal_14 + uVal_10;
      }
      if (uVal_13 != uVal_10) goto LAB_1800f6efd;
    }
    func_0x180674790(9);
  }
  func_0x180674790(8);
LAB_1800f6fac:
  func_0x180674790(8);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@1800f6fc0
void Unwind_1800f6fc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1800f7000
void Unwind_1800f7000(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1800f7040
void Unwind_1800f7040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@1800f7080
void Unwind_1800f7080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x48);
  return;
}

// Unwind@1800f70c0
void Unwind_1800f70c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1800f7100
void Unwind_1800f7100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// func_0x1800f7140
uint64_t func_0x1800f7140(byte **param_1)
{
  byte *pU8_1;
  byte *pU8_2;
  func_ptr_t fnPtr_3;
  uint8_t uVal_4;
  char ch_5;
  uint64_t uVal_6;
  byte bFlag_7;
  byte *pU8_8;
  uint64_t uVal_9;
  
  pU8_2 = param_1[0xc];
  uVal_9 = (uint64_t)pU8_2 >> 0xd & 0x7ffff;
  if ((*(char *)((int64_t)param_1 + 0x75) == 'b' & (byte)uVal_9) == 1) {
    pU8_8 = *param_1;
    if (pU8_8 != param_1[1]) {
      if ((((*pU8_8 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_1 = pU8_8 + 1, pU8_1 != param_1[1])) &&
         (((((uint64_t)pU8_2 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
          ((((uint64_t)pU8_2 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
        pU8_8 = pU8_1;
      }
      *param_1 = pU8_8 + 1;
    }
    func_0x1800f4270(param_1);
    uVal_4 = 8;
LAB_1800f7249:
    *(uint8_t *)((int64_t)param_1 + 0x76) = uVal_4;
    return 1;
  }
  if (((uint64_t)pU8_2 & 0x80080) != 0) {
    bFlag_7 = *(char *)((int64_t)param_1 + 0x75) - 0x30;
    if (bFlag_7 < 10) {
      *(uint *)((int64_t)param_1 + 0x6c) = (uint)bFlag_7;
      pU8_8 = *param_1;
      if (pU8_8 != param_1[1]) {
        if ((((*pU8_8 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
            (pU8_1 = pU8_8 + 1, pU8_1 != param_1[1])) &&
           (((((uint64_t)pU8_2 & 8) == 0 && ((*pU8_1 & 0xfe) == 0x28)) ||
            ((((uint64_t)pU8_2 & 0x10) == 0 && ((*pU8_1 == 0x7d || (*pU8_1 == 0x7b)))))))) {
          pU8_8 = pU8_1;
        }
        *param_1 = pU8_8 + 1;
      }
      func_0x1800f4270(param_1);
      if ((((*(byte *)((int64_t)param_1 + 0x62) & 8) != 0) &&
          (*(int *)((int64_t)param_1 + 0x6c) == 0)) &&
         (9 < (byte)(*(char *)((int64_t)param_1 + 0x75) - 0x30U))) {
        uVal_4 = 0;
        goto LAB_1800f7249;
      }
      goto LAB_1800f7294;
    }
    *(uint32_t *)((int64_t)param_1 + 0x6c) = 0xffffffff;
  }
  ch_5 = func_0x1800f59f0(param_1,CONCAT71((int7)(uVal_9 >> 8),1));
  if (ch_5 != '\0') {
    return 1;
  }
  if (((*(byte *)((int64_t)param_1 + 0x62) & 1) != 0) &&
     (ch_5 = func_0x1800f5da0(param_1,0), ch_5 != '\0')) {
    return 2;
  }
LAB_1800f7294:
  func_0x180674790(2);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_6 = (*fnPtr_3)();
  return uVal_6;
}

// func_0x1800f72a0
uint64_t func_0x1800f72a0(byte **param_1,int param_2)
{
  byte *pU8_1;
  int64_t *pLong_2;
  ushort uVal_3;
  uint8_t auArr_4 [16];
  uint8_t *pU64_5;
  char ch_6;
  char ch_7;
  uint8_t uVal_8;
  ushort uVal_9;
  byte *pU8_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint uVal_13;
  int64_t lVal_14;
  byte *pU8_15;
  uint64_t uVal_16;
  uint8_t *pU64_17;
  char *fnPtr_18;
  byte *pU8_19;
  uint64_t uVal_20;
  uint8_t *pU64_21;
  uint8_t local_78 [16];
  uint64_t local_68;
  uint64_t local_60;
  uint local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  pU8_1 = *param_1;
  while( true ) {
    pU8_19 = *param_1;
    uVal_13 = *(int *)(param_1 + 0xe) + 1;
    if ((uVal_13 < 0x3f) && ((0x4800800000000001U >> ((uint64_t)uVal_13 & 0x3f) & 1) != 0)) break;
    if (pU8_19 != param_1[1]) {
      if ((((*pU8_19 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_10 = pU8_19 + 1, pU8_10 != param_1[1])) &&
         (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_10 & 0xfe) == 0x28)) ||
          ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_10 == 0x7d || (*pU8_10 == 0x7b))))))))
      {
        pU8_19 = pU8_10;
      }
      *param_1 = pU8_19 + 1;
    }
    func_0x1800f4270(param_1);
  }
  if (*(int *)(param_1 + 0xe) == param_2) {
    if (pU8_19 != param_1[1]) {
      pU8_10 = pU8_19;
      if ((((*pU8_19 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_15 = pU8_19 + 1, pU8_15 != param_1[1])) &&
         (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_15 & 0xfe) == 0x28)) ||
          ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_15 == 0x7d || (*pU8_15 == 0x7b))))))))
      {
        pU8_10 = pU8_15;
      }
      *param_1 = pU8_10 + 1;
    }
    func_0x1800f4270(param_1);
    if (*(int *)(param_1 + 0xe) != 0x5d) goto LAB_1800f76e4;
    pU8_10 = *param_1;
    if (pU8_10 != param_1[1]) {
      if ((((*pU8_10 == 0x5c) && (*(char *)((int64_t)param_1 + 0x74) == '\0')) &&
          (pU8_15 = pU8_10 + 1, pU8_15 != param_1[1])) &&
         (((((uint64_t)param_1[0xc] & 8) == 0 && ((*pU8_15 & 0xfe) == 0x28)) ||
          ((((uint64_t)param_1[0xc] & 0x10) == 0 && ((*pU8_15 == 0x7d || (*pU8_15 == 0x7b))))))))
      {
        pU8_10 = pU8_15;
      }
      *param_1 = pU8_10 + 1;
    }
    func_0x1800f4270(param_1);
    if (param_2 == 0x3a) {
      if (pU8_19 == pU8_1) {
        uVal_9 = 0;
        uVal_13 = *(uint *)(param_1 + 0xd);
      }
      else {
        pU8_10 = param_1[0xb];
        fnPtr_18 = "alnum";
        lVal_14 = 0;
        local_4c = *(uint *)(param_1 + 0xd);
        do {
          pU8_15 = pU8_1;
          if ((int64_t)pU8_19 - (int64_t)pU8_1 == (uint64_t)(uint)(&DAT_1806b4250)[lVal_14 * 6])
          {
            while( true ) {
              ch_7 = *fnPtr_18;
              pLong_2 = *(int64_t **)(pU8_10 + 8);
              ch_6 = (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,*pU8_15);
              pLong_2 = *(int64_t **)(pU8_10 + 8);
              ch_7 = (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,ch_7);
              if (ch_6 != ch_7) break;
              pU8_15 = pU8_15 + 1;
              fnPtr_18 = fnPtr_18 + 1;
              if (pU8_15 == pU8_19) {
                uVal_9 = (&DAT_1806b4254)[lVal_14 * 0xc];
                uVal_13 = local_4c;
                goto LAB_1800f7563;
              }
            }
          }
          lVal_14 = lVal_14 + 1;
          fnPtr_18 = (&PTR_s_alnum_1806b4240)[lVal_14 * 3];
        } while (lVal_14 != 0xf);
        uVal_9 = 0;
        uVal_13 = local_4c;
      }
LAB_1800f7563:
      uVal_3 = uVal_9 | 3;
      if ((uVal_9 & 3) == 0) {
        uVal_3 = uVal_9;
      }
      if ((uVal_13 & 0x100) == 0) {
        uVal_3 = uVal_9;
      }
      if (uVal_3 != 0) {
        func_0x1800f6250(param_1 + 7,param_1[8],uVal_3,0);
        return 2;
      }
      goto LAB_1800f76ec;
    }
    if ((pU8_1 == pU8_19) || (pU8_1 + 1 != pU8_19)) goto LAB_1800f76f6;
    local_78 = ZEXT816(0);
    uVal_20 = (int64_t)pU8_19 - (int64_t)pU8_1;
    if ((int64_t)uVal_20 < 0) goto LAB_1800f7715;
    if (uVal_20 < 0x10) {
      pU64_21 = local_78;
      uVal_16 = 0xf;
    }
    else {
      uVal_11 = uVal_20 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
        local_78._0_8_ = pU64_21;
      }
      else {
        lVal_14 = func_0x180672de0(uVal_16 + 0x28);
        pU64_21 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_14;
        local_78._0_8_ = pU64_21;
      }
    }
    local_68 = uVal_20;
    local_60 = uVal_16;
    func_0x1806aa960(pU64_21,pU8_1,uVal_20);
    pU64_21[uVal_20] = 0;
    if (local_68 == 0) goto LAB_1800f770d;
    if (local_68 >> 0x20 != 0) goto LAB_1800f771b;
    if (local_60 < 0x10) {
      pU64_21 = local_78;
    }
    else {
      pU64_21 = (uint8_t *)local_78._0_8_;
    }
    if (param_2 == 0x2e && local_68 == 1) {
      *(uint8_t *)((int64_t)param_1 + 0x76) = *pU64_21;
      uVal_12 = 1;
      auArr_4 = local_78;
joined_r0x0001800f761b:
      if (0xf < local_60) {
        local_78._0_8_ = auArr_4._0_8_;
        uVal_20 = local_60 + 1;
        if (0xfff < uVal_20) {
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - *(int64_t *)(local_78._0_8_ + -8)))
          goto LAB_1800f772e;
          uVal_20 = local_60 + 0x28;
          local_78._0_8_ = *(int64_t *)(local_78._0_8_ + -8);
        }
        lVal_14 = local_78._0_8_;
        local_78 = auArr_4;
        thunk_FUN_180695dd0(lVal_14,uVal_20);
      }
      return uVal_12;
    }
    pU64_17 = pU64_21 + local_68;
    pU64_5 = pU64_21;
    if ((*(byte *)((int64_t)param_1 + 0x69) & 1) != 0) {
      for (; pU64_5 != pU64_17; pU64_5 = pU64_5 + 1) {
        uVal_8 = (**(func_ptr_t *)(**(int64_t **)(param_1[0xb] + 8) + 0x20))
                          (*(int64_t **)(param_1[0xb] + 8),*pU64_5);
        *pU64_5 = uVal_8;
      }
    }
    if (param_2 != 0x3d) {
      func_0x1800f7770(param_1 + 7,pU64_21,pU64_17,param_1[8] + 0x20);
      uVal_12 = 2;
      auArr_4 = local_78;
      goto joined_r0x0001800f761b;
    }
  }
  else {
LAB_1800f76e4:
    func_0x180674790(param_2 == 0x3a);
LAB_1800f76ec:
    func_0x180674790(1);
LAB_1800f76f6:
    local_78 = ZEXT816(0);
    local_68 = 0;
    local_60 = 0xf;
LAB_1800f770d:
    func_0x180674790(0);
LAB_1800f7715:
    func_0x18007ba70();
LAB_1800f771b:
    func_0x180674790(9);
  }
  func_0x180674790(0);
LAB_1800f772e:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800f7730
void Unwind_1800f7730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1800f7770
void func_0x1800f7770(uint64_t param_1,uint8_t *param_2,uint8_t *param_3,uint **param_4)
{
  uint8_t uVal_1;
  func_ptr_t fnPtr_2;
  uint *pU64_3;
  int64_t lVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint *pU64_8;
  
  uVal_5 = (int)param_3 - (int)param_2;
  pU64_8 = *param_4;
  if (pU64_8 == (uint *)0x0) {
LAB_1800f77c9:
    pU64_8 = (uint *)0x0;
  }
  else {
    uVal_6 = *pU64_8;
    if (uVal_5 < uVal_6) {
      do {
        pU64_3 = pU64_8;
        pU64_8 = *(uint **)(pU64_3 + 6);
        if (pU64_8 == (uint *)0x0) {
          param_4 = (uint **)(pU64_3 + 6);
          goto LAB_1800f77c9;
        }
        uVal_6 = *pU64_8;
      } while (uVal_5 < uVal_6);
      param_4 = (uint **)(pU64_3 + 6);
    }
    if (uVal_6 == uVal_5) goto joined_r0x0001800f77ec;
  }
  pU64_3 = (uint *)func_0x180672de0(0x20);
  *pU64_3 = uVal_5;
  *(uint8_t (*)[16])(pU64_3 + 2) = ZEXT816(0);
  *param_4 = pU64_3;
  *(uint **)(pU64_3 + 6) = pU64_8;
  pU64_8 = *param_4;
joined_r0x0001800f77ec:
  if (param_2 != param_3) {
    do {
      uVal_1 = *param_2;
      uVal_5 = pU64_8[2];
      uVal_6 = pU64_8[3];
      if (uVal_6 < uVal_5) {
        lVal_4 = *(int64_t *)(pU64_8 + 4);
      }
      else {
        uVal_6 = uVal_5 >> 1;
        if (uVal_6 < 0x11) {
          uVal_6 = 0x10;
        }
        uVal_7 = uVal_6 + uVal_5;
        if (CARRY4(uVal_6,uVal_5)) {
          uVal_7 = 0xffffffff;
        }
        if ((uVal_7 == uVal_5) ||
           (lVal_4 = _realloc_base(*(uint64_t *)(pU64_8 + 4),uVal_7), lVal_4 == 0)) {
          func_0x180674790(9);
          fnPtr_2 = (func_ptr_t )swi(3);
          (*fnPtr_2)();
          return;
        }
        *(int64_t *)(pU64_8 + 4) = lVal_4;
        pU64_8[2] = uVal_7;
        uVal_6 = pU64_8[3];
      }
      param_2 = param_2 + 1;
      pU64_8[3] = uVal_6 + 1;
      *(uint8_t *)(lVal_4 + (uint64_t)uVal_6) = uVal_1;
    } while (param_2 != param_3);
  }
  return;
}

// func_0x1800f7880
void func_0x1800f7880(int64_t param_1)
{
  uint *pU64_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  uint64_t *pU64_4;
  int64_t lVal_5;
  uint64_t *pU64_6;
  uint uVal_7;
  uint32_t uVal_8;
  
  uVal_7 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVal_7;
  if (uVal_7 < 1000) {
    pU64_4 = (uint64_t *)func_0x180672de0(0x28);
    *(uint32_t *)(pU64_4 + 1) = 0xd;
    *(uint64_t *)((int64_t)pU64_4 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_4 + 0x14) = 0;
    *pU64_4 = &PTR_FUN_1806b4238;
    *(uint *)(pU64_4 + 4) = uVal_7;
    lVal_5 = *(int64_t *)(param_1 + 0x40);
    pU64_4[3] = lVal_5;
    lVal_2 = *(int64_t *)(lVal_5 + 0x10);
    if (lVal_2 != 0) {
      pU64_4[2] = lVal_2;
      *(uint64_t **)(lVal_2 + 0x18) = pU64_4;
      lVal_5 = *(int64_t *)(param_1 + 0x40);
    }
    *(uint64_t **)(lVal_5 + 0x10) = pU64_4;
    *(uint64_t **)(param_1 + 0x40) = pU64_4;
    func_0x1800f4480(param_1);
    uVal_8 = 0xe;
    if (*(int *)(pU64_4 + 1) - 8U < 4) {
      uVal_8 = (&DAT_1806b456c)[*(int *)(pU64_4 + 1) - 8U];
    }
    pU64_6 = (uint64_t *)func_0x180672de0(0x28);
    *(uint32_t *)(pU64_6 + 1) = uVal_8;
    *(uint64_t *)((int64_t)pU64_6 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_6 + 0x14) = 0;
    *pU64_6 = &PTR_FUN_1806b4238;
    pU64_6[4] = pU64_4;
    lVal_5 = *(int64_t *)(param_1 + 0x40);
    pU64_6[3] = lVal_5;
    lVal_2 = *(int64_t *)(lVal_5 + 0x10);
    if (lVal_2 != 0) {
      pU64_6[2] = lVal_2;
      *(uint64_t **)(lVal_2 + 0x18) = pU64_6;
      lVal_5 = *(int64_t *)(param_1 + 0x40);
    }
    *(uint64_t **)(lVal_5 + 0x10) = pU64_6;
    *(uint64_t **)(param_1 + 0x40) = pU64_6;
    func_0x1800f7a10(param_1 + 0x18,*(int *)(param_1 + 0x10) + 1,0);
    pU64_1 = (uint *)(*(int64_t *)(param_1 + 0x18) + (uint64_t)(*(uint *)(pU64_4 + 4) >> 5) * 4);
    *pU64_1 = *pU64_1 | 1 << ((byte)*(uint *)(pU64_4 + 4) & 0x1f);
    return;
  }
  func_0x180674790(0xc);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x1800f79b0
uint64_t * func_0x1800f79b0(uint64_t *param_1,uint param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  
  *param_1 = &PTR_FUN_1806b43c8;
  pU64_2 = (uint64_t *)param_1[4];
  while (pU64_2 != (uint64_t *)0x0) {
    pU64_1 = (uint64_t *)pU64_2[2];
    pU64_2[2] = 0;
    (**(func_ptr_t *)*pU64_2)(pU64_2,1);
    pU64_2 = pU64_1;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x28);
  }
  return param_1;
}

// func_0x1800f7a10
void func_0x1800f7a10(int64_t *param_1,uint64_t param_2,char param_3)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint64_t uVal_4;
  uint uVal_5;
  uint uVal_7;
  int64_t lVal_8;
  uint *pU64_9;
  uint8_t auStack_88 [40];
  int64_t local_60;
  uint64_t local_58;
  int64_t local_50;
  uint64_t local_48;
  int64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t uVal_6;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  uVal_4 = param_1[3];
  lVal_8 = param_2 - uVal_4;
  if (param_2 < uVal_4 || lVal_8 == 0) {
    if (param_2 < uVal_4) {
      local_50 = ((int64_t)uVal_4 >> 0x3f & 0xe000000000000000U) + *param_1 + (uVal_4 >> 5) * 4;
      local_48 = (uint64_t)((uint)uVal_4 & 0x1f);
      local_60 = ((int64_t)param_2 >> 0x3f & 0xe000000000000000U) + *param_1 + (param_2 >> 5) * 4;
      local_58 = (uint64_t)((uint)param_2 & 0x1f);
      func_0x1800f7c00(param_1,&local_40,&local_60,&local_50);
    }
  }
  else {
    local_40 = ((int64_t)uVal_4 >> 0x3f & 0xe000000000000000U) + (uVal_4 >> 5) * 4 + *param_1;
    local_38 = (uint64_t)((uint)uVal_4 & 0x1f);
    uVal_4 = func_0x18009e3e0(param_1,&local_40,lVal_8);
    uVal_5 = (uint)uVal_4 & 0x1f;
    uVal_6 = (uint64_t)uVal_5;
    lVal_1 = (lVal_8 >> 0x3f & ((uint64_t)((uint64_t)-lVal_8 <= uVal_6) << 0x3d) + 0xe000000000000000)
            + (uVal_6 + lVal_8 >> 5) * 4;
    uVal_7 = (uint)(uVal_6 + lVal_8) & 0x1f;
    if ((uVal_6 != uVal_7) || (lVal_1 != 0)) {
      pU64_9 = (uint *)((uVal_4 >> 5) * 4 + *param_1 +
                       ((int64_t)uVal_4 >> 0x3f & 0xe000000000000000U));
      uVal_5 = -1 << (sbyte)uVal_5;
      if (lVal_1 == 0) {
        uVal_7 = 0xffffffff >> (-(char)uVal_7 & 0x1fU);
        uVal_3 = uVal_7 & uVal_5;
        uVal_5 = ~uVal_7 | ~uVal_5;
      }
      else {
        uVal_3 = 0;
        if (param_3 != '\0') {
          uVal_3 = uVal_5;
        }
        *pU64_9 = uVal_3 | ~uVal_5 & *pU64_9;
        func_0x1806ab010(pU64_9 + 1,-param_3,lVal_1 + -4);
        if ((uint64_t)uVal_7 == 0) goto LAB_1800f7bcd;
        uVal_3 = 0xffffffff >> (-(char)uVal_7 & 0x1fU);
        pU64_9 = (uint *)((int64_t)pU64_9 + lVal_1);
        uVal_5 = ~uVal_3;
      }
      uVal_7 = 0;
      if (param_3 != '\0') {
        uVal_7 = uVal_3;
      }
      *pU64_9 = uVal_7 | uVal_5 & *pU64_9;
    }
  }
LAB_1800f7bcd:
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_88)) {
    return;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_88);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1800f7c00
int64_t * func_0x1800f7c00(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)
{
  int64_t lVal_1;
  uint *pU64_2;
  int64_t lVal_3;
  func_ptr_t fnPtr_4;
  int64_t *pLong_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  int64_t local_80;
  uint64_t local_78;
  int64_t local_70;
  uint64_t local_68;
  int64_t local_60;
  uint64_t local_58;
  int64_t local_50;
  int64_t local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVal_3 = *param_1;
  uVal_7 = param_1[3];
  if (uVal_7 == 0) {
    uVal_10 = 0;
    local_58 = 0;
    local_60 = lVal_3;
    lVal_9 = lVal_3;
LAB_1800f7ca1:
    lVal_8 = lVal_3;
    if ((int)uVal_10 == (int)local_58) goto LAB_1800f7d54;
  }
  else {
    uVal_10 = (*param_3 - lVal_3) * 8 + param_3[1];
    lVal_9 = ((int64_t)uVal_10 >> 0x3f & 0xe000000000000000U) + lVal_3 + (uVal_10 >> 5) * 4;
    uVal_10 = (uint64_t)((uint)uVal_10 & 0x1f);
    uVal_6 = (*param_4 - lVal_3) * 8 + param_4[1];
    local_60 = ((int64_t)uVal_6 >> 0x3f & 0xe000000000000000U) + lVal_3 + (uVal_6 >> 5) * 4;
    local_58 = (uint64_t)((uint)uVal_6 & 0x1f);
    if (lVal_9 == local_60) goto LAB_1800f7ca1;
  }
  local_70 = ((int64_t)uVal_7 >> 0x3f & 0xe000000000000000U) + lVal_3 + (uVal_7 >> 5) * 4;
  local_68 = (uint64_t)((uint)uVal_7 & 0x1f);
  local_80 = lVal_9;
  local_78 = uVal_10;
  func_0x1800a2ce0(&local_50,&local_60,&local_70,&local_80);
  lVal_8 = *param_1;
  uVal_7 = (local_50 - lVal_8) * 8 + local_48;
  if ((int64_t)uVal_7 < 0) {
    func_0x18009e5d0();
    fnPtr_4 = (func_ptr_t )swi(3);
    pLong_5 = (int64_t *)(*fnPtr_4)();
    return pLong_5;
  }
  uVal_6 = uVal_7 + 0x1f >> 5;
  if ((uVal_6 < (uint64_t)(param_1[1] - lVal_8 >> 2)) &&
     (lVal_1 = lVal_8 + uVal_6 * 4, lVal_1 != param_1[1])) {
    param_1[1] = lVal_1;
  }
  param_1[3] = uVal_7;
  if ((uVal_7 & 0x1f) != 0) {
    pU64_2 = (uint *)(lVal_8 + -4 + uVal_6 * 4);
    *pU64_2 = *pU64_2 & ~(-1 << (sbyte)(uVal_7 & 0x1f));
    lVal_8 = *param_1;
  }
LAB_1800f7d54:
  uVal_10 = uVal_10 + (lVal_9 - lVal_3) * 8;
  *param_2 = ((int64_t)uVal_10 >> 0x3f & 0xe000000000000000U) + lVal_8 + (uVal_10 >> 5) * 4;
  param_2[1] = (uint64_t)((uint)uVal_10 & 0x1f);
  return param_2;
}

// Unwind@1800f7da0
void Unwind_1800f7da0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800f7e00
void func_0x1800f7e00(int64_t *param_1,uint param_2,uint param_3,byte param_4)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  uint64_t *pU64_7;
  uint64_t *pU64_8;
  uint64_t *pU64_9;
  uint uVal_10;
  int64_t lVal_11;
  int64_t lVal_12;
  
  lVal_12 = param_1[1];
  iVal_4 = *(int *)(lVal_12 + 8);
  if (iVal_4 == 6) {
    if (*(int *)(lVal_12 + 0x24) != 1) {
      pU64_5 = (uint64_t *)func_0x180672de0(0x30);
      *(uint32_t *)(pU64_5 + 1) = 6;
      *(uint64_t *)((int64_t)pU64_5 + 0xc) = 0;
      *(uint32_t *)((int64_t)pU64_5 + 0x14) = 0;
      *pU64_5 = &PTR_LAB_1806b43d0;
      *(uint8_t (*)[16])(pU64_5 + 4) = ZEXT816(0);
      pU64_5[3] = lVal_12;
      lVal_1 = *(int64_t *)(lVal_12 + 0x10);
      lVal_11 = lVal_12;
      if (lVal_1 != 0) {
        pU64_5[2] = lVal_1;
        *(uint64_t **)(lVal_1 + 0x18) = pU64_5;
        lVal_11 = param_1[1];
      }
      *(uint64_t **)(lVal_11 + 0x10) = pU64_5;
      param_1[1] = (int64_t)pU64_5;
      uVal_10 = *(int *)(lVal_12 + 0x24) - 1;
      *(uint *)(lVal_12 + 0x24) = uVal_10;
      func_0x1800f5660(param_1,*(uint8_t *)(*(int64_t *)(lVal_12 + 0x28) + (uint64_t)uVal_10));
      lVal_12 = param_1[1];
      iVal_4 = *(int *)(lVal_12 + 8);
      goto LAB_1800f7eb3;
    }
  }
  else {
LAB_1800f7eb3:
    if ((iVal_4 == 0xe) || (iVal_4 == 9)) {
      lVal_1 = *(int64_t *)(lVal_12 + 0x20);
      iVal_4 = *(int *)(*param_1 + 0x24);
      goto joined_r0x0001800f811f;
    }
  }
  if ((param_3 ^ 1 | param_2) == 0) {
    pU64_5 = (uint64_t *)func_0x180672de0(0x20);
    *(uint32_t *)(pU64_5 + 1) = 0x11;
    *(uint8_t (*)[16])((int64_t)pU64_5 + 0xc) = ZEXT816(0);
    *(uint32_t *)((int64_t)pU64_5 + 0x1c) = 0;
    *pU64_5 = &PTR_FUN_1806b4218;
    pU64_6 = (uint64_t *)func_0x180672de0(0x30);
    *(uint32_t *)(pU64_6 + 1) = 0x10;
    *(uint8_t (*)[16])((int64_t)pU64_6 + 0xc) = ZEXT816(0);
    *(uint32_t *)((int64_t)pU64_6 + 0x1c) = 0;
    *pU64_6 = &PTR_LAB_1806b43d8;
    pU64_6[4] = pU64_5;
    pU64_6[5] = 0;
    pU64_7 = (uint64_t *)func_0x180672de0(0x30);
    *(uint32_t *)(pU64_7 + 1) = 0x10;
    *(uint8_t (*)[16])((int64_t)pU64_7 + 0xc) = ZEXT816(0);
    *(uint32_t *)((int64_t)pU64_7 + 0x1c) = 0;
    *pU64_7 = &PTR_LAB_1806b43d8;
    pU64_7[4] = pU64_5;
    pU64_7[5] = 0;
    pU64_8 = (uint64_t *)func_0x180672de0(0x20);
    *pU64_8 = &PTR_FUN_1806b4218;
    *(uint32_t *)(pU64_8 + 1) = 8;
    *(uint8_t (*)[16])((int64_t)pU64_8 + 0xc) = ZEXT816(0);
    *(uint32_t *)((int64_t)pU64_8 + 0x1c) = 0;
    pU64_9 = (uint64_t *)func_0x180672de0(0x28);
    pU64_9[1] = 9;
    *pU64_9 = &PTR_FUN_1806b4238;
    pU64_9[4] = pU64_8;
    pU64_7[2] = pU64_8;
    pU64_8[3] = pU64_7;
    pU64_8[2] = pU64_9;
    pU64_9[3] = pU64_8;
    pU64_9[2] = pU64_5;
    pU64_6[5] = pU64_7;
    pU64_5[3] = lVal_12;
    lVal_1 = *(int64_t *)(lVal_12 + 0x10);
    lVal_11 = lVal_12;
    if (lVal_1 != 0) {
      pU64_5[2] = lVal_1;
      *(uint64_t **)(lVal_1 + 0x18) = pU64_5;
      lVal_11 = param_1[1];
    }
    *(uint64_t **)(lVal_11 + 0x10) = pU64_5;
    param_1[1] = (int64_t)pU64_5;
    *(uint64_t **)(*(int64_t *)(lVal_12 + 0x18) + 0x10) = pU64_6;
    pU64_6[3] = *(uint64_t *)(lVal_12 + 0x18);
    *(uint64_t **)(lVal_12 + 0x18) = pU64_6;
    pU64_6[2] = lVal_12;
    if (param_4 != 0) {
      return;
    }
    lVal_1 = pU64_7[2];
    *(uint64_t *)(lVal_12 + 0x18) = *(uint64_t *)(lVal_1 + 0x18);
    *(uint64_t **)(lVal_1 + 0x18) = pU64_6;
    uVal_2 = pU64_6[2];
    pU64_6[2] = pU64_7[2];
    pU64_7[2] = uVal_2;
    return;
  }
  iVal_4 = *(int *)(*param_1 + 0x24);
  lVal_1 = lVal_12;
joined_r0x0001800f811f:
  if (iVal_4 != -1) {
    pU64_5 = (uint64_t *)func_0x180672de0(0x28);
    *(uint32_t *)(pU64_5 + 1) = 0x13;
    *(uint64_t *)((int64_t)pU64_5 + 0xc) = 0;
    *(uint32_t *)((int64_t)pU64_5 + 0x14) = 0;
    *pU64_5 = &PTR_FUN_1806b4238;
    pU64_5[4] = 0;
    pU64_5[3] = lVal_12;
    lVal_11 = *(int64_t *)(lVal_12 + 0x10);
    if (lVal_11 != 0) {
      pU64_5[2] = lVal_11;
      *(uint64_t **)(lVal_11 + 0x18) = pU64_5;
      lVal_12 = param_1[1];
    }
    *(uint64_t **)(lVal_12 + 0x10) = pU64_5;
    param_1[1] = (int64_t)pU64_5;
    pU64_6 = (uint64_t *)func_0x180672de0(0x38);
    iVal_4 = *(int *)(*param_1 + 0x24);
    *(int *)(*param_1 + 0x24) = iVal_4 + 1;
    *(uint32_t *)(pU64_6 + 1) = 0x12;
    *(uint *)((int64_t)pU64_6 + 0xc) = (uint)param_4 * 2;
    *(uint8_t (*)[16])(pU64_6 + 2) = ZEXT816(0);
    *pU64_6 = &PTR_LAB_1806b43e0;
    *(uint *)(pU64_6 + 4) = param_2;
    *(uint *)((int64_t)pU64_6 + 0x24) = param_3;
    pU64_6[5] = pU64_5;
    *(int *)(pU64_6 + 6) = iVal_4;
    *(uint32_t *)((int64_t)pU64_6 + 0x34) = 0xffffffff;
    pU64_5[4] = pU64_6;
    *(uint64_t **)(*(int64_t *)(lVal_1 + 0x18) + 0x10) = pU64_6;
    pU64_6[3] = *(uint64_t *)(lVal_1 + 0x18);
    *(uint64_t **)(lVal_1 + 0x18) = pU64_6;
    pU64_6[2] = lVal_1;
    return;
  }
  func_0x180674790(9);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x1800f81c0
uint64_t * func_0x1800f81c0(uint64_t *param_1,uint64_t *param_2,uint8_t *param_3,uint8_t *param_4, uint64_t param_5,uint64_t *param_6,uint param_7)
{
  uint8_t uVal_1;
  uint8_t *pU64_2;
  char ch_3;
  uint uVal_4;
  uint64_t *pU64_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  uint8_t *pU64_9;
  uint8_t *pU64_10;
  uint64_t local_c8;
  uint8_t local_c0;
  uint8_t local_b8 [16];
  int64_t local_a8;
  uint8_t uStack_a0;
  undefined7 uStack_9f;
  uint8_t *local_98;
  uint8_t uStack_90;
  uint8_t local_88 [16];
  uint8_t local_78;
  uint8_t local_70 [16];
  uint8_t local_60;
  uint64_t *local_58;
  uint64_t *local_50;
  uint64_t local_48;
  uint32_t uVal_11;
  
  local_48 = 0xfffffffffffffffe;
  local_c8 = 0;
  local_c0 = 0;
  local_88 = ZEXT816(0);
  local_78 = 0;
  local_70 = ZEXT816(0);
  local_60 = 0;
  local_b8 = ZEXT816(0);
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  local_98 = SUB168(ZEXT816(0),7);
  uStack_90 = 0;
  uVal_4 = 0;
  uVal_8 = param_7;
  local_58 = param_1;
  while( true ) {
    pU64_10 = param_3;
    ch_3 = func_0x1800f8480(param_3,param_4,&local_c8,param_5,uVal_4 | uVal_8,param_3);
    pU64_2 = local_98;
    uVal_11 = (uint32_t)((uint64_t)pU64_10 >> 0x20);
    if (ch_3 == '\0') break;
    if ((param_7 & 0x800) == 0) {
      for (pU64_9 = (uint8_t *)CONCAT71(uStack_9f,uStack_a0); pU64_9 != pU64_2;
          pU64_9 = pU64_9 + 1) {
        while( true ) {
          uVal_11 = (uint32_t)((uint64_t)pU64_10 >> 0x20);
          uVal_1 = *pU64_9;
          uVal_7 = param_2[2];
          if ((uint64_t)param_2[3] <= uVal_7) break;
          param_2[2] = uVal_7 + 1;
          pU64_5 = param_2;
          if (0xf < (uint64_t)param_2[3]) {
            pU64_5 = (uint64_t *)*param_2;
          }
          *(uint8_t *)((int64_t)pU64_5 + uVal_7) = uVal_1;
          *(uint8_t *)((int64_t)pU64_5 + uVal_7 + 1) = 0;
          pU64_9 = pU64_9 + 1;
          if (pU64_9 == pU64_2) goto LAB_1800f82d6;
        }
        func_0x18008c590(param_2,1);
        uVal_11 = (uint32_t)((uint64_t)pU64_10 >> 0x20);
      }
    }
LAB_1800f82d6:
    pU64_5 = param_6;
    if (0xf < (uint64_t)param_6[3]) {
      pU64_5 = (uint64_t *)*param_6;
    }
    if ((uVal_8 & 0x400) == 0) {
      func_0x1800fc2a0(&local_50,&local_c8,param_2,pU64_5,param_6[2] + (int64_t)pU64_5,
                    CONCAT44(uVal_11,uVal_8));
    }
    else {
      func_0x1800fbf00(&local_50,&local_c8,param_2,pU64_5,param_6[2] + (int64_t)pU64_5,
                    CONCAT44(uVal_11,uVal_8));
    }
    pU64_5 = (uint64_t *)(local_b8._0_8_ + 8);
    if (local_b8._8_8_ == local_b8._0_8_) {
      pU64_5 = (uint64_t *)(local_70 + 8);
    }
    param_3 = (uint8_t *)*pU64_5;
    param_2 = local_50;
    if (((param_7 & 0x1000) != 0) || (param_3 == param_4)) break;
    pU64_5 = (uint64_t *)local_b8._0_8_;
    if (local_b8._8_8_ == local_b8._0_8_) {
      pU64_5 = (uint64_t *)local_70;
    }
    if ((uint8_t *)*pU64_5 != param_3) {
      uVal_8 = uVal_8 | 0x100;
    }
    uVal_4 = (uint)((uint8_t *)*pU64_5 == param_3) << 0xd;
  }
  if ((param_7 & 0x800) == 0) {
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      while( true ) {
        uVal_1 = *param_3;
        uVal_7 = param_2[2];
        if (uVal_7 < (uint64_t)param_2[3]) break;
        func_0x18008c590(param_2,1);
        param_3 = param_3 + 1;
        if (param_3 == param_4) goto LAB_1800f83e6;
      }
      param_2[2] = uVal_7 + 1;
      pU64_5 = param_2;
      if (0xf < (uint64_t)param_2[3]) {
        pU64_5 = (uint64_t *)*param_2;
      }
      *(uint8_t *)((int64_t)pU64_5 + uVal_7) = uVal_1;
      *(uint8_t *)((int64_t)pU64_5 + uVal_7 + 1) = 0;
    }
  }
LAB_1800f83e6:
  pU64_5 = local_58;
  *local_58 = param_2;
  if (local_b8._0_8_ != 0) {
    uVal_7 = local_a8 - local_b8._0_8_;
    lVal_6 = local_b8._0_8_;
    if (0xfff < uVal_7) {
      lVal_6 = *(int64_t *)(local_b8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_6)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_6,uVal_7);
  }
  return pU64_5;
}

// Unwind@1800f8440
void Unwind_1800f8440(uint64_t param_1,int64_t param_2)
{
  func_0x1800f8710(param_2 + 0x30);
  return;
}

// func_0x1800f8480
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
uint64_t func_0x1800f8480(int64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t *param_4, uint param_5,uint64_t param_6)
{
  byte bFlag_1;
  uint32_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t local_1138 [4096];
  uint8_t local_138 [8];
  int64_t local_130;
  uint64_t local_88;
  uint64_t local_78;
  int64_t local_68;
  uint local_54;
  byte local_46;
  uint8_t local_44;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_3 != (uint64_t *)0x0) {
    *(uint8_t *)(param_3 + 1) = 1;
    if (param_3[3] != param_3[2]) {
      param_3[3] = param_3[2];
    }
  }
  uVal_5 = *param_4;
  if (uVal_5 == 0) {
    uVal_4 = 0;
    goto LAB_1800f86b5;
  }
  lVal_3 = (uint64_t)(param_1 != param_2 & (byte)(param_5 >> 0xe) & 1) + param_1;
  func_0x1800f8770(local_138,lVal_3,param_2,param_4 + 1,uVal_5,*(uint32_t *)(uVal_5 + 0x28),
                *(uint32_t *)(uVal_5 + 0x20),param_5,local_1138);
  local_130 = local_68;
  local_44 = 0;
  local_88 = 0;
  local_46 = 0;
  bFlag_1 = func_0x1800f99c0(local_138,local_78);
  if (((bFlag_1 | local_46) & 1) == 0) {
    uVal_4 = 0;
    if (((param_5 & 0x40) == 0) && (lVal_3 != param_2)) {
      local_54 = local_54 & 0xffffdeff | 0x100;
      do {
        uVal_5 = uVal_5 & 0xffffffff00000000;
        lVal_3 = func_0x1800f8ca0(local_138,lVal_3 + 1,param_2,0,uVal_5);
        if (lVal_3 == param_2) {
          local_44 = 0;
          local_88 = 0;
          local_46 = 0;
          local_130 = param_2;
          local_68 = param_2;
          uVal_2 = func_0x1800f99c0(local_138,local_78);
          uVal_4 = (uint64_t)CONCAT31((int3)((uint)uVal_2 >> 8),(byte)uVal_2 | local_46);
          goto joined_r0x0001800f86a3;
        }
        local_44 = 0;
        local_88 = 0;
        local_46 = 0;
        local_130 = lVal_3;
        local_68 = lVal_3;
        bFlag_1 = func_0x1800f99c0(local_138,local_78);
      } while (((bFlag_1 | local_46) & 1) == 0);
      goto LAB_1800f8570;
    }
  }
  else {
LAB_1800f8570:
    uVal_4 = CONCAT71((int7)((uint64_t)local_138 >> 8),1);
joined_r0x0001800f86a3:
    if ((param_3 != (uint64_t *)0x0) && ((uVal_4 & 1) != 0)) {
      func_0x1800f90c0(local_138,param_3);
      *param_3 = param_6;
      param_3[5] = param_1;
      *(bool *)(param_3 + 7) = param_1 != param_3[6];
      uVal_4 = CONCAT71((int7)(uVal_4 >> 8),1);
    }
  }
  func_0x1800f9270(local_138);
LAB_1800f86b5:
  return uVal_4 & 0xffffff01;
}

// Unwind@1800f86d0
void Unwind_1800f86d0(uint64_t param_1,int64_t param_2)
{
  func_0x1800f9270(param_2 + 0x1050);
  return;
}

// func_0x1800f8710
void func_0x1800f8710(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  lVal_1 = *(int64_t *)(param_1 + 0x10);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x20) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x20) = 0;
  }
  return;
}

// func_0x1800f8770
void func_0x1800f8770(int64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4, int64_t param_5,uint32_t param_6,uint param_7,uint param_8,int64_t param_9)
{
  int64_t *pLong_1;
  char ch_2;
  char ch_3;
  ushort uVal_4;
  uint uVal_5;
  char *fnPtr_6;
  uint64_t uVal_7;
  ushort uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t unaff_R14;
  int64_t local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xb) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xd) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xf) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x11) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x13) = ZEXT816(0);
  param_1[0x15] = 0;
  param_1[0x19] = param_4;
  param_1[0x1a] = param_2;
  param_1[0x1b] = param_3;
  *(uint *)(param_1 + 0x1c) = param_7;
  *(uint *)((int64_t)param_1 + 0xe4) = param_8;
  *(uint32_t *)(param_1 + 0x1d) = param_6;
  *(uint32_t *)((int64_t)param_1 + 0xec) = 0;
  *(uint32_t *)((int64_t)param_1 + 0xef) = 0;
  *(byte *)((int64_t)param_1 + 0xf3) =
       (param_8 & 0x10) == 0 & (byte)((*(uint *)(param_5 + 0xc) & 8) >> 3);
  uVal_5 = *(uint *)(param_5 + 0xc);
  local_50 = param_1;
  if ((uVal_5 & 0x100) != 0) {
    fnPtr_6 = "alnum";
    uVal_9 = 0;
    do {
      if ((0x2810UL >> (uVal_9 & 0x3f) & 1) != 0) {
        unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),*fnPtr_6);
        ch_2 = (**(func_ptr_t *)(**(int64_t **)(param_4 + 8) + 0x20))(*(int64_t **)(param_4 + 8),0x57)
        ;
        ch_3 = (**(func_ptr_t *)(**(int64_t **)(param_4 + 8) + 0x20))
                          (*(int64_t **)(param_4 + 8),unaff_R14 & 0xffffffff);
        if (ch_2 == ch_3) {
          uVal_4 = (&DAT_1806b4254)[uVal_9 * 0xc];
          goto LAB_1800f88dc;
        }
      }
      uVal_9 = uVal_9 + 1;
      fnPtr_6 = (&PTR_s_alnum_1806b4240)[uVal_9 * 3];
    } while (uVal_9 != 0xf);
    uVal_4 = 0;
LAB_1800f88dc:
    uVal_8 = uVal_4 | 3;
    if ((uVal_4 & 3) == 0) {
      uVal_8 = uVal_4;
    }
    if ((param_7 & 0x100) == 0) {
      uVal_8 = uVal_4;
    }
    *(ushort *)((int64_t)param_1 + 0xec) = uVal_8;
    uVal_5 = *(uint *)(param_5 + 0xc);
  }
  if ((uVal_5 & 0x200) != 0) {
    lVal_10 = local_50[0x19];
    uVal_5 = *(uint *)(local_50 + 0x1c);
    fnPtr_6 = "alnum";
    uVal_9 = 0;
    do {
      if ((0x2810UL >> (uVal_9 & 0x3f) & 1) != 0) {
        param_4 = CONCAT71((int7)(param_4 >> 8),*fnPtr_6);
        pLong_1 = *(int64_t **)(lVal_10 + 8);
        ch_2 = (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,0x53);
        pLong_1 = *(int64_t **)(lVal_10 + 8);
        ch_3 = (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,param_4 & 0xffffffff);
        if (ch_2 == ch_3) {
          uVal_4 = (&DAT_1806b4254)[uVal_9 * 0xc];
          goto LAB_1800f8988;
        }
      }
      uVal_9 = uVal_9 + 1;
      fnPtr_6 = (&PTR_s_alnum_1806b4240)[uVal_9 * 3];
    } while (uVal_9 != 0xf);
    uVal_4 = 0;
LAB_1800f8988:
    uVal_8 = uVal_4 | 3;
    if ((uVal_4 & 3) == 0) {
      uVal_8 = uVal_4;
    }
    if ((uVal_5 & 0x100) == 0) {
      uVal_8 = uVal_4;
    }
    *(ushort *)((int64_t)local_50 + 0xee) = uVal_8;
    uVal_5 = *(uint *)(param_5 + 0xc);
  }
  if ((uVal_5 & 0x400) != 0) {
    lVal_10 = local_50[0x19];
    uVal_5 = *(uint *)(local_50 + 0x1c);
    fnPtr_6 = "alnum";
    uVal_9 = 0;
    do {
      if ((0x2810UL >> (uVal_9 & 0x3f) & 1) != 0) {
        param_4 = CONCAT71((int7)(param_4 >> 8),*fnPtr_6);
        pLong_1 = *(int64_t **)(lVal_10 + 8);
        ch_2 = (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,0x44);
        pLong_1 = *(int64_t **)(lVal_10 + 8);
        ch_3 = (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,param_4 & 0xffffffff);
        if (ch_2 == ch_3) {
          uVal_4 = (&DAT_1806b4254)[uVal_9 * 0xc];
          goto LAB_1800f8a38;
        }
      }
      uVal_9 = uVal_9 + 1;
      fnPtr_6 = (&PTR_s_alnum_1806b4240)[uVal_9 * 3];
    } while (uVal_9 != 0xf);
    uVal_4 = 0;
LAB_1800f8a38:
    uVal_8 = uVal_4 | 3;
    if ((uVal_4 & 3) == 0) {
      uVal_8 = uVal_4;
    }
    if ((uVal_5 & 0x100) == 0) {
      uVal_8 = uVal_4;
    }
    *(ushort *)(local_50 + 0x1e) = uVal_8;
  }
  param_3 = param_3 - param_2;
  uVal_7 = param_3 / 3 + 0x4c4b4;
  uVal_9 = 0x7ffffffffffffff;
  if (uVal_7 < 0x7ffffffffffffff) {
    uVal_9 = uVal_7;
  }
  lVal_10 = 0x7fffffffffffffff;
  if (param_3 < 0x7ffffffffffb6d) {
    lVal_10 = param_3 * 0x100 + 300000;
  }
  local_50[0x17] = uVal_9;
  *local_50 = lVal_10;
  local_50[0x18] = *(int64_t *)(*(int64_t *)(param_5 + 0x10) + 0x10);
  local_60 = param_9;
  local_58 = 0x1000;
  func_0x1800f9560(param_1 + 0xf,&local_60,&local_58,*(uint32_t *)(param_5 + 0x24));
  if (1 < *(uint *)(local_50 + 0x1d)) {
    func_0x1800f9690(local_50 + 2,&local_60,&local_58,*(uint *)(local_50 + 0x1d) - 1);
    if (*(char *)((int64_t)local_50 + 0xf3) == '\x01') {
      func_0x1800f9690(local_50 + 9,&local_60,&local_58,*(int *)(local_50 + 0x1d) + -1);
    }
    func_0x1800f98b0(local_50 + 5,&local_60,&local_58,
                  (uint64_t)(*(int *)(local_50 + 0x1d) - 1) + 0x3f >> 6);
    if (*(char *)((int64_t)local_50 + 0xf3) == '\x01') {
      func_0x1800f98b0(local_50 + 0xc,&local_60,&local_58,
                    (uint64_t)(*(int *)(local_50 + 0x1d) - 1) + 0x3f >> 6);
    }
  }
  uVal_7 = (uint64_t)((uint)local_60 & 7);
  uVal_9 = 8 - uVal_7;
  if (uVal_7 == 0) {
    uVal_9 = 0;
  }
  if ((local_60 != 0 && uVal_9 <= local_58) && 0x1f < local_58 - uVal_9) {
    local_60 = local_60 + uVal_9;
    local_50[0x12] = local_60;
    local_50[0x13] = local_60;
    local_50[0x14] = (local_58 - uVal_9 & 0xffffffffffffffe0) + local_60;
  }
  if ((*(uint *)(local_50 + 0x1c) & 0x3e) != 0) {
    *(uint *)(local_50 + 0x1c) = *(uint *)(local_50 + 0x1c) & 0xffffefff;
  }
  return;
}

// Unwind@1800f8c40
void Unwind_1800f8c40(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x58);
  func_0x1800f97a0(*(uint64_t *)(param_2 + 0x30));
  func_0x1800f97e0(*(uint64_t *)(param_2 + 0x38));
  func_0x1800f9820(lVal_1 + 0x40);
  func_0x1800f9820(lVal_1 + 8);
  return;
}

// func_0x1800f8ca0
byte * func_0x1800f8ca0(int64_t param_1,byte *param_2,byte *param_3,int64_t param_4,uint param_5)
{
  byte bFlag_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  char ch_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int iVal_8;
  char ch_9;
  byte *pU8_10;
  int64_t lVal_11;
  byte *pU8_12;
  uint64_t uVal_13;
  
  if (param_4 == 0) {
    param_4 = *(int64_t *)(param_1 + 0xc0);
  }
  if (param_4 == 0 || param_2 == param_3) {
    return param_2;
  }
  do {
    switch(*(uint32_t *)(param_4 + 8)) {
    case 1:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x14:
      break;
    case 2:
      if ((*(byte *)(param_1 + 0xe1) & 0x10) == 0) {
        return param_3;
      }
      if (param_2[-1] == 10) {
        return param_2;
      }
      if (param_2[-1] == 0xd) {
        return param_2;
      }
      pU8_12 = (byte *)func_0x1800fbea0(param_2,param_3,&DAT_1806b44f0,&DAT_1806b44f2);
      return pU8_12 + (pU8_12 != param_3);
    case 3:
      if ((*(byte *)(param_1 + 0xe1) & 0x10) == 0) {
        return param_3;
      }
      if ((int64_t)param_3 - (int64_t)param_2 < 0x10) {
        pU8_12 = param_2 + ((int64_t)param_3 - (int64_t)param_2);
        while( true ) {
          if (*param_2 == 10) {
            return param_2;
          }
          if (*param_2 == 0xd) break;
          param_2 = param_2 + 1;
          if (param_2 == param_3) {
            return pU8_12;
          }
        }
        return param_2;
      }
      pU8_12 = (byte *)func_0x1806769d0(param_2,param_3,&DAT_1806b44f0,&DAT_1806b44f2);
      return pU8_12;
    case 4:
      ch_9 = (&DAT_1806b43f0)[param_2[-1]];
      do {
        bFlag_1 = *param_2;
        if (((ch_9 != (&DAT_1806b43f0)[bFlag_1] ^ (byte)*(uint32_t *)(param_4 + 0xc)) & 1) != 0) {
          return param_2;
        }
        param_2 = param_2 + 1;
        ch_9 = (&DAT_1806b43f0)[bFlag_1];
      } while (param_2 != param_3);
      return param_3;
    case 5:
      if (0x31 < param_5) {
        return param_2;
      }
      lVal_11 = func_0x1800f8ca0(param_1,param_2 + 1,param_3,*(uint64_t *)(param_4 + 0x10),param_5 + 1
                            );
      return (byte *)(lVal_11 + -1);
    case 6:
      uVal_13 = (uint64_t)*(uint *)(param_4 + 0x24);
      pU8_12 = param_3;
      if (param_3 != *(byte **)(param_1 + 0xd8) && 1 < uVal_13) {
        uVal_7 = (uint64_t)(*(uint *)(param_4 + 0x24) - 1);
        uVal_6 = (int64_t)*(byte **)(param_1 + 0xd8) - (int64_t)param_3;
        if ((int64_t)uVal_7 <= (int64_t)uVal_6) {
          uVal_6 = uVal_7;
        }
        pU8_12 = param_3 + uVal_6;
      }
      lVal_11 = *(int64_t *)(param_4 + 0x28);
      pU8_10 = pU8_12;
      if ((*(byte *)(param_1 + 0xe1) & 1) == 0) {
        if ((int64_t)uVal_13 <= (int64_t)pU8_12 - (int64_t)param_2) {
          pU8_10 = (byte *)thunk_FUN_180676d20(param_2,pU8_12,lVal_11,uVal_13);
        }
      }
      else if (((int64_t)uVal_13 <= (int64_t)pU8_12 - (int64_t)param_2) &&
              (pU8_10 = param_2, uVal_13 != 0)) {
        lVal_2 = *(int64_t *)(param_1 + 200);
        while( true ) {
          uVal_6 = 0;
          while (ch_9 = *(char *)(lVal_11 + uVal_6), pLong_3 = *(int64_t **)(lVal_2 + 8),
                ch_4 = (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,param_2[uVal_6]), ch_4 == ch_9) {
            uVal_6 = uVal_6 + 1;
            pU8_10 = param_2;
            if (uVal_13 == uVal_6) goto LAB_1800f9080;
          }
          pU8_10 = pU8_12;
          if (param_2 == pU8_12 + -uVal_13) break;
          param_2 = param_2 + 1;
        }
      }
LAB_1800f9080:
      if (pU8_12 == pU8_10) {
        return param_3;
      }
      return pU8_10;
    case 7:
      do {
        pU8_12 = (byte *)func_0x1800fb2e0(param_1,param_4,param_2);
        if (param_2 != pU8_12) {
          return param_2;
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
      return param_2;
    case 10:
      if (0x31 < param_5) {
        return param_2;
      }
      iVal_8 = param_5 + 1;
      pU8_12 = (byte *)func_0x1800f8ca0(param_1,param_2,param_3,*(uint64_t *)(param_4 + 0x20),iVal_8)
      ;
      do {
        pU8_10 = (byte *)func_0x1800f8ca0(param_1,pU8_12,param_3,*(uint64_t *)(param_4 + 0x10),
                                        iVal_8);
        if (pU8_10 == pU8_12) {
          return pU8_12;
        }
        pU8_12 = (byte *)func_0x1800f8ca0(param_1,pU8_10,param_3,*(uint64_t *)(param_4 + 0x20),
                                        iVal_8);
      } while (pU8_10 != pU8_12);
      return pU8_12;
    default:
      return param_2;
    case 0x10:
      if (*(int64_t *)(param_4 + 0x28) != 0) {
        if (0x31 < param_5) {
          return param_2;
        }
        do {
          lVal_11 = (int64_t)param_3 - (int64_t)param_2;
          if (0x1ff < lVal_11) {
            lVal_11 = 0x200;
          }
          pU8_10 = param_2 + lVal_11;
          pU8_12 = pU8_10;
          lVal_11 = param_4;
          if (param_3 != param_2) {
            do {
              pU8_12 = (byte *)func_0x1800f8ca0(param_1,param_2,pU8_12,*(uint64_t *)(lVal_11 + 0x10)
                                              ,param_5 + 1);
              lVal_11 = *(int64_t *)(lVal_11 + 0x28);
              if (lVal_11 == 0) break;
            } while (param_2 != pU8_12);
          }
          if (pU8_12 != pU8_10) {
            return pU8_12;
          }
          param_2 = pU8_12;
          if (pU8_12 == param_3) {
            return pU8_12;
          }
        } while( true );
      }
      break;
    case 0x12:
      if (*(int *)(param_4 + 0x20) < 1) {
        if (0x31 < param_5) {
          return param_2;
        }
        while( true ) {
          lVal_11 = (int64_t)param_3 - (int64_t)param_2;
          if (0x1ff < lVal_11) {
            lVal_11 = 0x200;
          }
          pU8_12 = param_2 + lVal_11;
          uVal_5 = func_0x1800f8ca0(param_1,param_2,pU8_12,*(uint64_t *)(param_4 + 0x10),param_5 + 1)
          ;
          param_2 = (byte *)func_0x1800f8ca0(param_1,param_2,uVal_5,
                                          *(uint64_t *)(*(int64_t *)(param_4 + 0x28) + 0x10),
                                          param_5 + 1);
          if (param_2 != pU8_12) break;
          if (param_2 == param_3) {
            return param_2;
          }
        }
        return param_2;
      }
    }
    param_4 = *(int64_t *)(param_4 + 0x10);
    if (param_4 == 0) {
      return param_2;
    }
  } while( true );
}

// func_0x1800f90c0
void func_0x1800f90c0(int64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  bool bFlag_9;
  uint8_t local_29;
  
  uVal_3 = (uint64_t)*(uint *)(param_1 + 0xe8);
  pLong_1 = (int64_t *)(param_2 + 0x10);
  lVal_4 = *(int64_t *)(param_2 + 0x10);
  lVal_5 = *(int64_t *)(param_2 + 0x18);
  lVal_7 = lVal_5 - lVal_4 >> 3;
  bFlag_9 = (uint64_t)(lVal_7 * -0x5555555555555555) <= uVal_3;
  lVal_7 = uVal_3 + lVal_7 * 0x5555555555555555;
  if (bFlag_9) {
    if (bFlag_9 && lVal_7 != 0) {
      if ((uint64_t)((*(int64_t *)(param_2 + 0x20) - lVal_4 >> 3) * -0x5555555555555555) < uVal_3) {
        func_0x1800f93f0(pLong_1,uVal_3,&local_29);
      }
      else {
        lVal_7 = lVal_7 * 0x18;
        func_0x1806ab010(lVal_5,0,lVal_7);
        *(int64_t *)(param_2 + 0x18) = lVal_5 + lVal_7;
      }
    }
  }
  else {
    *(uint64_t *)(param_2 + 0x18) = lVal_4 + uVal_3 * 0x18;
  }
  lVal_4 = 8;
  if (*(char *)(param_1 + 0xf3) != '\0') {
    lVal_4 = 0x40;
  }
  pU64_2 = (uint64_t *)*pLong_1;
  *(uint8_t *)(pU64_2 + 2) = 1;
  *pU64_2 = *(uint64_t *)(param_1 + 0xd0);
  pU64_2[1] = *(uint64_t *)(param_1 + lVal_4);
  if (1 < *(uint *)(param_1 + 0xe8)) {
    lVal_5 = 0;
    lVal_7 = 0;
    uVal_3 = 0;
    do {
      if ((*(uint64_t *)(*(int64_t *)(param_1 + 0x20 + lVal_4) + (uVal_3 >> 6) * 8) >>
           (uVal_3 & 0x3f) & 1) == 0) {
        *(uint8_t *)(*pLong_1 + 0x28 + lVal_7) = 0;
        uVal_8 = *(uint64_t *)(param_1 + 0xd8);
        *(uint64_t *)(*pLong_1 + 0x18 + lVal_7) = uVal_8;
      }
      else {
        *(uint8_t *)(*pLong_1 + 0x28 + lVal_7) = 1;
        *(uint64_t *)(*pLong_1 + 0x18 + lVal_7) =
             *(uint64_t *)(*(int64_t *)(param_1 + 8 + lVal_4) + lVal_5);
        uVal_8 = *(uint64_t *)(*(int64_t *)(param_1 + 8 + lVal_4) + 8 + lVal_5);
      }
      *(uint64_t *)(*pLong_1 + 0x20 + lVal_7) = uVal_8;
      lVal_7 = lVal_7 + 0x18;
      lVal_5 = lVal_5 + 0x10;
      uVal_6 = uVal_3 + 2;
      uVal_3 = uVal_3 + 1;
    } while (uVal_6 < *(uint *)(param_1 + 0xe8));
  }
  *(uint64_t *)(param_2 + 0x30) = **(uint64_t **)(param_2 + 0x10);
  lVal_4 = (*(uint64_t **)(param_2 + 0x10))[1];
  *(int64_t *)(param_2 + 0x40) = lVal_4;
  lVal_5 = *(int64_t *)(param_1 + 0xd8);
  *(int64_t *)(param_2 + 0x48) = lVal_5;
  *(bool *)(param_2 + 0x50) = lVal_4 != lVal_5;
  uVal_8 = *(uint64_t *)(param_1 + 0xd8);
  *(uint64_t *)(param_2 + 0x58) = uVal_8;
  *(uint64_t *)(param_2 + 0x60) = uVal_8;
  return;
}

// func_0x1800f9270
void func_0x1800f9270(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    lVal_1 = *(int64_t *)(param_1 + 0x90);
    uVal_3 = *(int64_t *)(param_1 + 0xa0) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800f93ec;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    lVal_1 = *(int64_t *)(param_1 + 0x78);
    uVal_3 = *(int64_t *)(param_1 + 0x80) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800f93ec;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    lVal_1 = *(int64_t *)(param_1 + 0x60);
    uVal_3 = *(int64_t *)(param_1 + 0x68) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800f93ec;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    lVal_1 = *(int64_t *)(param_1 + 0x48);
    uVal_3 = *(int64_t *)(param_1 + 0x50) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800f93ec;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVal_1 = *(int64_t *)(param_1 + 0x28);
    uVal_3 = *(int64_t *)(param_1 + 0x30) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800f93ec;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
  }
  if (*(char *)(param_1 + 0x20) != '\x01') {
    return;
  }
  lVal_1 = *(int64_t *)(param_1 + 0x10);
  uVal_3 = *(int64_t *)(param_1 + 0x18) - lVal_1;
  lVal_2 = lVal_1;
  if (0xfff < uVal_3) {
    lVal_2 = *(int64_t *)(lVal_1 + -8);
    if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) {
LAB_1800f93ec:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_3 = uVal_3 + 0x27;
  }
  thunk_FUN_180695dd0(lVal_2,uVal_3);
  return;
}

// func_0x1800f93f0
void func_0x1800f93f0(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVal_1 = *param_1;
    uVal_5 = ((int64_t)(param_1[2] - uVal_1) >> 3) * -0x5555555555555555;
    uVal_3 = 0xaaaaaaaaaaaaaaa - (uVal_5 >> 1);
    uVal_7 = (uVal_5 >> 1) + uVal_5;
    if (uVal_7 <= param_2) {
      uVal_7 = param_2;
    }
    if (uVal_3 <= uVal_5 && uVal_5 - uVal_3 != 0) {
      uVal_7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVal_7 < 0xaaaaaaaaaaaaaab) {
      uVal_3 = param_1[1];
      if (uVal_7 == 0) {
        uVal_5 = 0;
      }
      else if (uVal_7 < 0xab) {
        uVal_5 = func_0x180672de0(uVal_7 * 0x18);
      }
      else {
        if (uVal_7 == 0xaaaaaaaaaaaaaaa) goto LAB_1800f954e;
        lVal_2 = func_0x180672de0(uVal_7 * 0x18 + 0x27);
        uVal_5 = lVal_2 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_5 - 8) = lVal_2;
      }
      lVal_6 = uVal_3 - uVal_1;
      lVal_2 = (lVal_6 >> 3) * 0x5555555555555555 + param_2;
      if (lVal_2 != 0) {
        func_0x1806ab010(lVal_6 + uVal_5,0,lVal_2 * 0x18);
      }
      func_0x1806aa960(uVal_5,*param_1,param_1[1] - *param_1);
      uVal_1 = *param_1;
      if (uVal_1 != 0) {
        uVal_4 = param_1[2] - uVal_1;
        uVal_3 = uVal_1;
        if (0xfff < uVal_4) {
          uVal_3 = *(uint64_t *)(uVal_1 - 8);
          if (0x1f < (uVal_1 - 8) - uVal_3) goto LAB_1800f9558;
          uVal_4 = uVal_4 + 0x27;
        }
        thunk_FUN_180695dd0(uVal_3,uVal_4);
      }
      *param_1 = uVal_5;
      param_1[1] = uVal_5 + param_2 * 0x18;
      param_1[2] = uVal_5 + uVal_7 * 0x18;
      return;
    }
LAB_1800f954e:
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_1800f9558:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1800f9560
void func_0x1800f9560(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  
  if (param_4 != 0) {
    uVal_2 = param_4 * 0x18;
    uVal_5 = (uint64_t)((uint)*param_2 & 7);
    uVal_4 = 8 - uVal_5;
    if (uVal_5 == 0) {
      uVal_4 = 0;
    }
    if (uVal_2 <= *param_3 - uVal_4 && uVal_4 <= *param_3) {
      *param_2 = *param_2 + uVal_4;
      *param_3 = *param_3 - uVal_4;
      uVal_4 = *param_2;
      if (uVal_4 != 0) {
        func_0x1806ab010(uVal_4,0,((uVal_2 - 0x18) / 0x18) * 0x18 + 0x18);
        *(uint8_t *)(param_1 + 2) = 0;
        *param_1 = uVal_4;
        param_1[1] = uVal_4 + uVal_2;
        *param_2 = *param_2 + uVal_2;
        *param_3 = *param_3 + param_4 * -0x18;
        return;
      }
    }
    if (0xaaaaaaaaaaaaaaa < param_4) {
      func_0x180674790(0xc);
LAB_1800f9687:
      func_0x18007ba90();
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
    if (param_4 < 0xab) {
      uVal_4 = func_0x180672de0(uVal_2);
    }
    else {
      if (param_4 == 0xaaaaaaaaaaaaaaa) goto LAB_1800f9687;
      lVal_3 = func_0x180672de0(uVal_2 + 0x27);
      uVal_4 = lVal_3 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_4 - 8) = lVal_3;
    }
    func_0x1806ab010(uVal_4,0,uVal_2);
    param_1[1] = uVal_2 + uVal_4;
    *(uint8_t *)(param_1 + 2) = 1;
    *param_1 = uVal_4;
  }
  return;
}

// func_0x1800f9690
void func_0x1800f9690(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  
  if (param_4 != 0) {
    uVal_4 = param_4 * 0x10;
    uVal_5 = (uint64_t)((uint)*param_2 & 7);
    uVal_3 = 8 - uVal_5;
    if (uVal_5 == 0) {
      uVal_3 = 0;
    }
    if (uVal_4 <= *param_3 - uVal_3 && uVal_3 <= *param_3) {
      *param_2 = *param_2 + uVal_3;
      *param_3 = *param_3 - uVal_3;
      uVal_3 = *param_2;
      if (uVal_3 != 0) {
        func_0x1806ab010(uVal_3,0,uVal_4);
        *(uint8_t *)(param_1 + 2) = 0;
        *param_1 = uVal_3;
        param_1[1] = uVal_3 + uVal_4;
        *param_2 = *param_2 + uVal_4;
        *param_3 = *param_3 + param_4 * -0x10;
        return;
      }
    }
    if (param_4 >> 0x3c != 0) {
      func_0x180674790(0xc);
LAB_1800f978b:
      func_0x18007ba90();
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
    if (param_4 < 0x100) {
      uVal_3 = func_0x180672de0(uVal_4);
    }
    else {
      if (0xffffffffffffffd < param_4) goto LAB_1800f978b;
      lVal_2 = func_0x180672de0(uVal_4 + 0x27);
      uVal_3 = lVal_2 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_3 - 8) = lVal_2;
    }
    func_0x1806ab010(uVal_3,0,uVal_4);
    param_1[1] = uVal_4 + uVal_3;
    *(uint8_t *)(param_1 + 2) = 1;
    *param_1 = uVal_3;
  }
  return;
}

// func_0x1800f97a0
void func_0x1800f97a0(LPVOID *param_1)
{
  LPVOID lpMem;
  BOOL BVar1;
  DWORD DVar2;
  uint32_t uVal_3;
  uint32_t *pU64_4;
  
  if (*(char *)(param_1 + 3) != '\x01') {
    return;
  }
  lpMem = *param_1;
  if ((uint64_t)((int64_t)param_1[2] - (int64_t)lpMem) < 0x1000) {
    if ((lpMem != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_180842c78,0,lpMem), BVar1 == 0)) {
      DVar2 = GetLastError();
      uVal_3 = func_0x18068244c(DVar2);
      pU64_4 = (uint32_t *)func_0x1806823dc();
      *pU64_4 = uVal_3;
    }
    return;
  }
  if (0x1f < (uint64_t)((int64_t)lpMem + (-8 - *(int64_t *)((int64_t)lpMem + -8)))) {
    do {
      invalidInstructionException();
    } while( true );
  }
  thunk_FUN_180695dd0(*(int64_t *)((int64_t)lpMem + -8),
                      ((int64_t)param_1[2] - (int64_t)lpMem) + 0x27);
  return;
}

// func_0x1800f97e0
void func_0x1800f97e0(LPVOID *param_1)
{
  LPVOID lpMem;
  BOOL BVar1;
  DWORD DVar2;
  uint32_t uVal_3;
  uint32_t *pU64_4;
  
  if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  lpMem = *param_1;
  if ((uint64_t)((int64_t)param_1[1] - (int64_t)lpMem) < 0x1000) {
    if ((lpMem != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_180842c78,0,lpMem), BVar1 == 0)) {
      DVar2 = GetLastError();
      uVal_3 = func_0x18068244c(DVar2);
      pU64_4 = (uint32_t *)func_0x1806823dc();
      *pU64_4 = uVal_3;
    }
    return;
  }
  if (0x1f < (uint64_t)((int64_t)lpMem + (-8 - *(int64_t *)((int64_t)lpMem + -8)))) {
    do {
      invalidInstructionException();
    } while( true );
  }
  thunk_FUN_180695dd0(*(int64_t *)((int64_t)lpMem + -8),
                      ((int64_t)param_1[1] - (int64_t)lpMem) + 0x27);
  return;
}

// func_0x1800f9820
void func_0x1800f9820(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVal_1 = *(int64_t *)(param_1 + 0x20);
    uVal_3 = *(int64_t *)(param_1 + 0x28) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800f98a1;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
  }
  if (*(char *)(param_1 + 0x18) != '\x01') {
    return;
  }
  lVal_1 = *(int64_t *)(param_1 + 8);
  uVal_3 = *(int64_t *)(param_1 + 0x10) - lVal_1;
  lVal_2 = lVal_1;
  if (0xfff < uVal_3) {
    lVal_2 = *(int64_t *)(lVal_1 + -8);
    if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) {
LAB_1800f98a1:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_3 = uVal_3 + 0x27;
  }
  thunk_FUN_180695dd0(lVal_2,uVal_3);
  return;
}

// func_0x1800f98b0
void func_0x1800f98b0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  
  if (param_4 != 0) {
    uVal_1 = param_4 * 8;
    uVal_5 = (uint64_t)((uint)*param_2 & 7);
    uVal_4 = 8 - uVal_5;
    if (uVal_5 == 0) {
      uVal_4 = 0;
    }
    if (uVal_1 <= *param_3 - uVal_4 && uVal_4 <= *param_3) {
      *param_2 = *param_2 + uVal_4;
      *param_3 = *param_3 - uVal_4;
      uVal_4 = *param_2;
      if (uVal_4 != 0) {
        func_0x1806ab010(uVal_4,0,uVal_1);
        *(uint8_t *)(param_1 + 2) = 0;
        *param_1 = uVal_4;
        param_1[1] = uVal_4 + param_4 * 8;
        *param_2 = *param_2 + uVal_1;
        *param_3 = *param_3 + param_4 * -8;
        return;
      }
    }
    if (param_4 >> 0x3d != 0) {
      func_0x180674790(0xc);
LAB_1800f99b6:
      func_0x18007ba90();
      fnPtr_2 = (func_ptr_t )swi(3);
      (*fnPtr_2)();
      return;
    }
    if (param_4 < 0x200) {
      uVal_4 = func_0x180672de0(uVal_1);
    }
    else {
      if (0x1ffffffffffffffb < param_4) goto LAB_1800f99b6;
      lVal_3 = func_0x180672de0(uVal_1 + 0x27);
      uVal_4 = lVal_3 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_4 - 8) = lVal_3;
    }
    func_0x1806ab010(uVal_4,0,uVal_1);
    param_1[1] = uVal_4 + param_4 * 8;
    *(uint8_t *)(param_1 + 2) = 1;
    *param_1 = uVal_4;
  }
  return;
}

// func_0x1800f99c0
uint64_t func_0x1800f99c0(int64_t *param_1,int64_t param_2)
{
  char *fnPtr_1;
  char *fnPtr_2;
  uint64_t *pU64_3;
  uint uVal_4;
  char *fnPtr_5;
  char *fnPtr_6;
  char *fnPtr_7;
  byte *pU8_8;
  func_ptr_t fnPtr_9;
  int iVal_10;
  int iVal_11;
  int iVal_12;
  int iVal_13;
  int iVal_14;
  int iVal_15;
  char ch_16;
  char ch_17;
  uint uVal_18;
  int iVal_19;
  uint64_t in_RAX;
  int64_t lVal_20;
  int64_t lVal_21;
  uint32_t *pU64_22;
  int *pInt_23;
  uint64_t *pU64_24;
  uint64_t uVal_25;
  int *pInt_26;
  int64_t lVal_27;
  char *fnPtr_28;
  uint64_t unaff_RBP;
  undefined7 uVal_29;
  uint64_t uVal_31;
  uint64_t uVal_32;
  int64_t lVal_33;
  int64_t lVal_34;
  int64_t lVal_35;
  int *pInt_36;
  int64_t *pLong_37;
  uint64_t uVal_38;
  uint uVal_39;
  int64_t lVal_40;
  byte bFlag_41;
  undefined7 uVal_30;
  
  uVal_25 = CONCAT71((int7)((uint64_t)in_RAX >> 8),1);
  if (param_2 == 0) goto LAB_1800fb2ad;
  uVal_25 = 0;
LAB_1800f9a09:
  if (*param_1 < 1) {
LAB_1800fb2c4:
    func_0x180674790(0xb);
LAB_1800fb2ce:
    func_0x180674790(0xc);
    fnPtr_9 = (func_ptr_t )swi(3);
    uVal_25 = (*fnPtr_9)();
    return uVal_25;
  }
  *param_1 = *param_1 + -1;
  if (0x14 < *(int *)(param_2 + 8) - 1U) {
LAB_1800fb2a3:
    uVal_25 = 0;
    goto LAB_1800fb2ad;
  }
  lVal_33 = *(int64_t *)(param_2 + 0x10);
  uVal_29 = (undefined7)(unaff_RBP >> 8);
  uVal_30 = (undefined7)(uVal_25 >> 8);
  switch(*(int *)(param_2 + 8)) {
  case 2:
    uVal_18 = *(uint *)((int64_t)param_1 + 0xe4);
    uVal_25 = (uint64_t)uVal_18;
    if (((uVal_18 & 0x100) != 0) || (param_1[1] != param_1[0x1a])) {
      unaff_RBP = CONCAT71((uint7)(uint3)(uVal_18 >> 8),1);
      if ((*(byte *)((int64_t)param_1 + 0xe1) & 0x10) == 0) goto LAB_1800faa96;
      ch_16 = *(char *)(param_1[1] + -1);
LAB_1800f9eb6:
      uVal_25 = CONCAT71((int7)(unaff_RBP >> 8),ch_16 != '\r' && ch_16 != '\n');
    }
    break;
  case 3:
    if ((char *)param_1[1] == (char *)param_1[0x1b]) {
      uVal_25 = (uint64_t)(*(byte *)((int64_t)param_1 + 0xe4) >> 1);
      break;
    }
    unaff_RBP = CONCAT71(uVal_29,1);
    if ((*(byte *)((int64_t)param_1 + 0xe1) & 0x10) != 0) {
      ch_16 = *(char *)param_1[1];
      goto LAB_1800f9eb6;
    }
    goto LAB_1800faa96;
  case 4:
    uVal_18 = *(uint *)((int64_t)param_1 + 0xe4);
    pU8_8 = (byte *)param_1[1];
    if (((uVal_18 & 0x100) == 0) && (pU8_8 == (byte *)param_1[0x1a])) {
      if ((byte)((byte)((uVal_18 & 4) >> 2) | pU8_8 == (byte *)param_1[0x1b]) == 0) {
        bFlag_41 = *pU8_8;
LAB_1800fa84d:
        bFlag_41 = (&DAT_1806b43f0)[bFlag_41];
      }
      else {
LAB_1800fa85a:
        bFlag_41 = 0;
      }
    }
    else {
      if (pU8_8 == (byte *)param_1[0x1b]) {
        if ((uVal_18 & 8) != 0) goto LAB_1800fa85a;
        bFlag_41 = pU8_8[-1];
        goto LAB_1800fa84d;
      }
      bFlag_41 = (&DAT_1806b43f0)[pU8_8[-1]] != (&DAT_1806b43f0)[*pU8_8];
    }
    uVal_25 = CONCAT71(uVal_29,(*(byte *)(param_2 + 0xc) & 1) == 0 ^ bFlag_41);
    break;
  case 5:
    fnPtr_28 = (char *)param_1[1];
    unaff_RBP = CONCAT71(uVal_29,1);
    if (fnPtr_28 != (char *)param_1[0x1b]) {
      ch_16 = *fnPtr_28;
      if ((*(byte *)(param_1 + 0x1c) & 0x3e) == 0) {
        if (ch_16 != '\r' && ch_16 != '\n') goto LAB_1800fa78f;
      }
      else if (ch_16 != '\0') {
LAB_1800fa78f:
        if ((uVal_25 & 1) == 0) {
          param_1[1] = (int64_t)(fnPtr_28 + 1);
          uVal_25 = 0;
          break;
        }
      }
    }
    goto LAB_1800faa96;
  case 6:
    lVal_40 = *(int64_t *)(param_2 + 0x28);
    uVal_32 = (uint64_t)*(uint *)(param_2 + 0x24);
    fnPtr_28 = (char *)param_1[1];
    fnPtr_5 = (char *)param_1[0x1b];
    if ((*(byte *)((int64_t)param_1 + 0xe1) & 1) == 0) {
      uVal_38 = 0;
      do {
        fnPtr_6 = fnPtr_28 + uVal_38;
        if ((fnPtr_6 == fnPtr_5) || (uVal_32 == uVal_38)) {
          if (uVal_32 == uVal_38) {
            fnPtr_28 = fnPtr_6;
          }
          uVal_31 = uVal_38;
          if (fnPtr_28 == (char *)param_1[1]) goto LAB_1800fa555;
          goto LAB_1800fa57e;
        }
        uVal_31 = uVal_38 + 1;
        fnPtr_7 = (char *)(lVal_40 + uVal_38);
        uVal_38 = uVal_31;
      } while (*fnPtr_6 == *fnPtr_7);
      if (fnPtr_28 == (char *)param_1[1]) goto LAB_1800fa555;
LAB_1800fa57e:
      param_1[1] = (int64_t)fnPtr_28;
    }
    else {
      lVal_21 = param_1[0x19];
      uVal_38 = 0;
      do {
        fnPtr_6 = fnPtr_28 + uVal_38;
        if ((fnPtr_6 == fnPtr_5) || (uVal_32 == uVal_38)) {
          if (uVal_32 == uVal_38) {
            fnPtr_28 = fnPtr_6;
          }
          break;
        }
        ch_16 = *(char *)(lVal_40 + uVal_38);
        uVal_38 = uVal_38 + 1;
        ch_17 = (**(func_ptr_t *)(**(int64_t **)(lVal_21 + 8) + 0x20))
                           (*(int64_t **)(lVal_21 + 8),*fnPtr_6);
      } while (ch_17 == ch_16);
      uVal_31 = uVal_38;
      if (fnPtr_28 != (char *)param_1[1]) goto LAB_1800fa57e;
LAB_1800fa555:
      uVal_25 = CONCAT71(uVal_30,1);
      uVal_38 = uVal_31;
    }
    uVal_32 = uVal_38 + 0x3f;
    if (-1 < (int64_t)uVal_38) {
      uVal_32 = uVal_38;
    }
    if (*param_1 < (int64_t)uVal_32 >> 6) goto LAB_1800fb2c4;
    *param_1 = *param_1 - ((int64_t)uVal_32 >> 6);
    break;
  case 7:
    unaff_RBP = CONCAT71(uVal_29,1);
    if ((param_1[1] != param_1[0x1b]) &&
       (lVal_40 = func_0x1800fb2e0(param_1,param_2), lVal_40 != param_1[1])) {
      param_1[1] = lVal_40;
      break;
    }
    goto LAB_1800faa96;
  case 10:
    uVal_32 = param_1[0x16];
    lVal_33 = param_1[0x12];
    pU64_24 = (uint64_t *)param_1[0x13];
    if (uVal_32 < (uint64_t)((int64_t)pU64_24 - lVal_33 >> 5)) {
      lVal_40 = uVal_32 * 0x20;
      *(uint32_t *)(lVal_33 + lVal_40) = 1;
      goto LAB_1800f9bc8;
    }
    if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
    lVal_33 = param_1[1];
    if (pU64_24 == (uint64_t *)param_1[0x14]) {
      func_0x1800fbc70(param_1 + 0x12);
      pU64_24 = (uint64_t *)param_1[0x13];
    }
    *pU64_24 = 1;
LAB_1800fa16a:
    pU64_24[1] = param_2;
    pU64_24[2] = lVal_33;
    pU64_24[3] = 0;
    param_1[0x13] = param_1[0x13] + 0x20;
    goto LAB_1800fa184;
  case 0xb:
    uVal_32 = param_1[0x16];
    lVal_33 = param_1[0x12];
    pU64_24 = (uint64_t *)param_1[0x13];
    if ((uint64_t)((int64_t)pU64_24 - lVal_33 >> 5) <= uVal_32) {
      if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
      lVal_33 = param_1[1];
      if (pU64_24 == (uint64_t *)param_1[0x14]) {
        func_0x1800fbc70(param_1 + 0x12);
        pU64_24 = (uint64_t *)param_1[0x13];
      }
      *pU64_24 = 2;
      goto LAB_1800fa16a;
    }
    lVal_40 = uVal_32 * 0x20;
    *(uint32_t *)(lVal_33 + lVal_40) = 2;
LAB_1800f9bc8:
    *(int64_t *)(lVal_33 + 8 + lVal_40) = param_2;
    *(int64_t *)(lVal_33 + 0x10 + lVal_40) = param_1[1];
LAB_1800fa184:
    param_1[0x16] = param_1[0x16] + 1;
    lVal_33 = *(int64_t *)(param_2 + 0x20);
    break;
  case 0xc:
    lVal_40 = param_1[0x12];
    lVal_33 = param_1[0x16];
    param_1[0x16] = lVal_33 + -1;
    lVal_21 = (lVal_33 + -1) * 0x20;
    iVal_19 = *(int *)(lVal_40 + lVal_21);
    if (iVal_19 - 1U < 2) {
      unaff_RBP = CONCAT71(uVal_29,1);
      if (iVal_19 == 1) {
        param_1[1] = *(int64_t *)(lVal_40 + 0x10 + lVal_21);
        lVal_33 = *(int64_t *)(*(int64_t *)(lVal_40 + 8 + lVal_21) + 0x10);
        break;
      }
    }
    else {
      lVal_21 = lVal_33 * 0x20 + -0x10;
      lVal_27 = lVal_33 * -0x20 + 0x20;
      lVal_35 = lVal_33 + -2;
      uVal_39 = 0;
      uVal_18 = 0xffffffff;
      lVal_20 = 0;
      lVal_33 = lVal_33 * -0x20 + 0x60;
      do {
        lVal_34 = lVal_33;
        if (iVal_19 == 0xd) {
          uVal_4 = *(uint *)(lVal_40 + -0xc + lVal_21);
          if (uVal_4 <= uVal_18) {
            uVal_18 = uVal_4;
          }
          if (uVal_39 <= uVal_4) {
            uVal_39 = uVal_4;
          }
          if (lVal_20 == 0) {
            lVal_20 = lVal_35 + 1;
          }
        }
        param_1[0x16] = lVal_35;
        iVal_19 = *(int *)(lVal_40 + -0x30 + lVal_21);
        lVal_21 = lVal_21 + -0x20;
        lVal_27 = lVal_27 + 0x20;
        lVal_35 = lVal_35 + -1;
        lVal_33 = lVal_34 + 0x20;
      } while (1 < iVal_19 - 1U);
      if (iVal_19 == 1) {
        param_1[1] = *(int64_t *)(lVal_40 + lVal_21);
        lVal_33 = *(int64_t *)(*(int64_t *)(lVal_40 + -8 + lVal_21) + 0x10);
        if (lVal_20 != 0) {
          pInt_26 = (int *)(lVal_40 - lVal_27);
          lVal_20 = lVal_20 * 0x20;
          pInt_36 = (int *)(lVal_40 + lVal_20 + 0x20);
          pInt_23 = pInt_26;
          if (-(lVal_20 + 0x20) == lVal_27) {
LAB_1800fa2d1:
            if ((pInt_23 != pInt_36) && (pInt_26 = pInt_23 + 8, pInt_26 != pInt_36)) {
              do {
                if (0xfffffffd < *pInt_26 - 0xeU) {
                  iVal_19 = *pInt_26;
                  iVal_10 = pInt_26[1];
                  iVal_11 = pInt_26[2];
                  iVal_12 = pInt_26[3];
                  iVal_13 = pInt_26[5];
                  iVal_14 = pInt_26[6];
                  iVal_15 = pInt_26[7];
                  pInt_23[4] = pInt_26[4];
                  pInt_23[5] = iVal_13;
                  pInt_23[6] = iVal_14;
                  pInt_23[7] = iVal_15;
                  *pInt_23 = iVal_19;
                  pInt_23[1] = iVal_10;
                  pInt_23[2] = iVal_11;
                  pInt_23[3] = iVal_12;
                  pInt_23 = pInt_23 + 8;
                }
                pInt_26 = pInt_26 + 8;
              } while (pInt_26 != pInt_36);
              lVal_40 = param_1[0x12];
            }
          }
          else {
            lVal_34 = lVal_34 + lVal_20;
            do {
              pInt_23 = pInt_26;
              if (*pInt_26 - 0xeU < 0xfffffffe) goto LAB_1800fa2d1;
              pInt_26 = pInt_26 + 8;
              lVal_34 = lVal_34 + -0x20;
              pInt_23 = pInt_36;
            } while (lVal_34 != 0);
          }
          param_1[0x16] = (int64_t)pInt_23 - lVal_40 >> 5;
        }
        break;
      }
      unaff_RBP = CONCAT71(uVal_30,1);
      if ((uVal_18 <= uVal_39) && (uVal_18 < uVal_39 + 1)) {
        pU64_3 = (uint64_t *)(param_1[5] + (uint64_t)(uVal_18 >> 6) * 8);
        *pU64_3 = *pU64_3 & ~(-1L << ((byte)uVal_18 & 0x3f));
        uVal_32 = (uint64_t)(uVal_39 + 1) + 0x3f >> 6;
        uVal_25 = (uint64_t)(uVal_18 >> 6) + 1;
        if (uVal_25 < uVal_32) {
          iVal_19 = (int)uVal_25;
          func_0x1806ab010((uint64_t)(uint)(iVal_19 * 8) + param_1[5],0,((int)uVal_32 - iVal_19) * 8);
        }
      }
    }
    goto LAB_1800faa96;
  case 0xd:
    uVal_18 = *(int *)(param_2 + 0x20) - 1;
    pLong_37 = (int64_t *)((uint64_t)uVal_18 * 0x10 + param_1[2]);
    uVal_32 = param_1[0x16];
    lVal_40 = param_1[0x12];
    pU64_24 = (uint64_t *)param_1[0x13];
    if (uVal_32 < (uint64_t)((int64_t)pU64_24 - lVal_40 >> 5)) {
      lVal_21 = uVal_32 * 0x20;
      *(uint32_t *)(lVal_40 + lVal_21) = 0xc;
      *(int64_t *)(lVal_40 + 8 + lVal_21) = param_2;
      *(int64_t *)(lVal_40 + 0x10 + lVal_21) = param_1[1];
    }
    else {
      if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
      lVal_40 = param_1[1];
      if (pU64_24 == (uint64_t *)param_1[0x14]) {
        func_0x1800fbc70(param_1 + 0x12);
        pU64_24 = (uint64_t *)param_1[0x13];
      }
      *pU64_24 = 0xc;
      pU64_24[1] = param_2;
      pU64_24[2] = lVal_40;
      pU64_24[3] = 0;
      param_1[0x13] = param_1[0x13] + 0x20;
    }
    lVal_40 = param_1[0x12];
    lVal_21 = param_1[0x16];
    param_1[0x16] = lVal_21 + 1;
    lVal_21 = lVal_21 * 0x20;
    *(int64_t *)(lVal_40 + 0x10 + lVal_21) = *pLong_37;
    *(uint *)(lVal_40 + 4 + lVal_21) = uVal_18;
    *pLong_37 = param_1[1];
    break;
  case 0xe:
    lVal_40 = *(int64_t *)(param_2 + 0x20);
    if (*(int *)(lVal_40 + 0x20) != 0) {
      uVal_18 = *(int *)(lVal_40 + 0x20) - 1;
      lVal_20 = (uint64_t)uVal_18 * 0x10 + param_1[2];
      lVal_21 = param_1[0x12];
      iVal_19 = ((*(uint64_t *)(param_1[5] + (uint64_t)(uVal_18 >> 6) * 8) >>
                 ((uint64_t)uVal_18 & 0x3f) & 1) != 0) + 0xd;
      uVal_32 = param_1[0x16];
      pInt_23 = (int *)param_1[0x13];
      if (uVal_32 < (uint64_t)((int64_t)pInt_23 - lVal_21 >> 5)) {
        lVal_27 = uVal_32 * 0x20;
        *(int *)(lVal_21 + lVal_27) = iVal_19;
        *(int64_t *)(lVal_21 + 8 + lVal_27) = lVal_40;
        *(int64_t *)(lVal_21 + 0x10 + lVal_27) = param_1[1];
      }
      else {
        if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
        lVal_21 = param_1[1];
        if (pInt_23 == (int *)param_1[0x14]) {
          func_0x1800fbc70(param_1 + 0x12);
          pInt_23 = (int *)param_1[0x13];
        }
        *pInt_23 = iVal_19;
        pInt_23[1] = 0;
        *(int64_t *)(pInt_23 + 2) = lVal_40;
        *(int64_t *)(pInt_23 + 4) = lVal_21;
        *(uint64_t *)(pInt_23 + 6) = 0;
        param_1[0x13] = param_1[0x13] + 0x20;
      }
      lVal_40 = param_1[0x12];
      lVal_21 = param_1[0x16];
      param_1[0x16] = lVal_21 + 1;
      lVal_21 = lVal_21 * 0x20;
      *(uint64_t *)(lVal_40 + 0x10 + lVal_21) = *(uint64_t *)(lVal_20 + 8);
      *(uint *)(lVal_40 + 4 + lVal_21) = uVal_18;
      *(int64_t *)(lVal_20 + 8) = param_1[1];
      pU64_3 = (uint64_t *)(param_1[5] + (uint64_t)(uVal_18 >> 6) * 8);
      *pU64_3 = *pU64_3 | 1L << ((byte)uVal_18 & 0x3f);
    }
    break;
  case 0xf:
    uVal_18 = *(int *)(param_2 + 0x20) - 1;
    if ((*(uint64_t *)(param_1[5] + (uint64_t)(uVal_18 >> 6) * 8) >> ((uint64_t)uVal_18 & 0x3f) & 1
        ) == 0) {
      uVal_25 = uVal_25 & 0xff;
      if ((*(byte *)(param_1 + 0x1c) & 0x12) != 0) {
        uVal_25 = 1;
      }
    }
    else {
      fnPtr_28 = (char *)param_1[1];
      lVal_40 = (uint64_t)uVal_18 * 0x10;
      fnPtr_5 = *(char **)(param_1[2] + lVal_40);
      fnPtr_6 = *(char **)(param_1[2] + 8 + lVal_40);
      if (fnPtr_5 == fnPtr_6) {
        lVal_40 = 0;
LAB_1800fa83b:
        param_1[1] = (int64_t)fnPtr_28;
      }
      else {
        fnPtr_7 = (char *)param_1[0x1b];
        if ((*(byte *)((int64_t)param_1 + 0xe1) & 1) == 0) {
          lVal_40 = 0;
          do {
            fnPtr_1 = fnPtr_5 + lVal_40;
            fnPtr_2 = fnPtr_28 + lVal_40;
            if ((fnPtr_2 == fnPtr_7) || (fnPtr_1 == fnPtr_6)) {
              if (fnPtr_1 == fnPtr_6) {
                fnPtr_28 = fnPtr_2;
              }
              if (fnPtr_28 == (char *)param_1[1]) goto LAB_1800fad96;
              goto LAB_1800fa83b;
            }
            lVal_40 = lVal_40 + 1;
          } while (*fnPtr_2 == *fnPtr_1);
          fnPtr_5 = (char *)param_1[1];
        }
        else {
          lVal_21 = param_1[0x19];
          lVal_40 = 0;
          do {
            fnPtr_1 = fnPtr_5 + lVal_40;
            fnPtr_2 = fnPtr_28 + lVal_40;
            if ((fnPtr_2 == fnPtr_7) || (fnPtr_1 == fnPtr_6)) {
              if (fnPtr_1 == fnPtr_6) {
                fnPtr_28 = fnPtr_2;
              }
              if (fnPtr_28 != (char *)param_1[1]) goto LAB_1800fa83b;
              goto LAB_1800fad96;
            }
            lVal_40 = lVal_40 + 1;
            ch_16 = *fnPtr_1;
            pLong_37 = *(int64_t **)(lVal_21 + 8);
            ch_17 = (**(func_ptr_t *)(*pLong_37 + 0x20))(pLong_37,*fnPtr_2);
            pLong_37 = *(int64_t **)(lVal_21 + 8);
            ch_16 = (**(func_ptr_t *)(*pLong_37 + 0x20))(pLong_37,ch_16);
          } while (ch_17 == ch_16);
          fnPtr_5 = (char *)param_1[1];
        }
        if (fnPtr_28 != fnPtr_5) goto LAB_1800fa83b;
LAB_1800fad96:
        uVal_25 = CONCAT71(uVal_30,1);
      }
      lVal_21 = lVal_40 + 0x3f;
      if (-1 < lVal_40) {
        lVal_21 = lVal_40;
      }
      if (*param_1 < lVal_21 >> 6) goto LAB_1800fb2c4;
      *param_1 = *param_1 - (lVal_21 >> 6);
    }
    break;
  case 0x10:
    lVal_40 = *(int64_t *)(param_2 + 0x28);
    if (lVal_40 != 0) {
      uVal_32 = param_1[0x16];
      lVal_21 = param_1[0x12];
      pU64_24 = (uint64_t *)param_1[0x13];
      if (uVal_32 < (uint64_t)((int64_t)pU64_24 - lVal_21 >> 5)) {
        lVal_20 = uVal_32 * 0x20;
        *(uint32_t *)(lVal_21 + lVal_20) = 3;
        *(int64_t *)(lVal_21 + 8 + lVal_20) = lVal_40;
        *(int64_t *)(lVal_21 + 0x10 + lVal_20) = param_1[1];
        param_1[0x16] = param_1[0x16] + 1;
      }
      else {
        if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
        lVal_21 = param_1[1];
        if (pU64_24 == (uint64_t *)param_1[0x14]) {
          func_0x1800fbc70(param_1 + 0x12);
          pU64_24 = (uint64_t *)param_1[0x13];
        }
        *pU64_24 = 3;
        pU64_24[1] = lVal_40;
        pU64_24[2] = lVal_21;
        pU64_24[3] = 0;
        param_1[0x13] = param_1[0x13] + 0x20;
        param_1[0x16] = param_1[0x16] + 1;
      }
    }
    break;
  case 0x12:
    if ((*(int *)(param_1[0xf] + 0xc + (uint64_t)*(uint *)(param_2 + 0x30) * 0x18) == 0) &&
       ((lVal_40 = param_1[0xf] + (uint64_t)*(uint *)(param_2 + 0x30) * 0x18,
        (*(byte *)(param_1 + 0x1c) & 0x3e) != 0 ||
        (ch_16 = func_0x1800fbda0(param_1,lVal_33,lVal_40), ch_16 == '\0')))) {
      *(int *)(lVal_40 + 0xc) = (int)((uint64_t)(param_1[3] - param_1[2]) >> 4);
    }
    uVal_18 = *(uint *)(param_2 + 0xc);
    pLong_37 = (int64_t *)((uint64_t)*(uint *)(param_2 + 0x30) * 0x18 + param_1[0xf]);
    if (*(int *)(param_2 + 0x34) == 1) {
      uVal_32 = param_1[0x16];
      lVal_40 = param_1[0x12];
      pU64_24 = (uint64_t *)param_1[0x13];
      if (uVal_32 < (uint64_t)((int64_t)pU64_24 - lVal_40 >> 5)) {
        lVal_21 = uVal_32 * 0x20;
        *(uint32_t *)(lVal_40 + lVal_21) = 4;
        *(int64_t *)(lVal_40 + 8 + lVal_21) = param_2;
        *(int64_t *)(lVal_40 + 0x10 + lVal_21) = param_1[1];
      }
      else {
        if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
        lVal_40 = param_1[1];
        if (pU64_24 == (uint64_t *)param_1[0x14]) {
          func_0x1800fbc70(param_1 + 0x12);
          pU64_24 = (uint64_t *)param_1[0x13];
        }
        *pU64_24 = 4;
        pU64_24[1] = param_2;
        pU64_24[2] = lVal_40;
        pU64_24[3] = 0;
        param_1[0x13] = param_1[0x13] + 0x20;
      }
      lVal_40 = param_1[0x16];
      param_1[0x16] = lVal_40 + 1;
      *pLong_37 = lVal_40;
      if ((*(int *)(param_2 + 0x20) < 1) &&
         ((((uVal_18 & 2) == 0 || (*(char *)((int64_t)param_1 + 0xf3) != '\0')) ||
          (*(int *)(param_2 + 0x24) == 0)))) {
        *(uint32_t *)(pLong_37 + 1) = 0;
        lVal_33 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10);
        if (*(int *)(param_2 + 0x24) != 0) {
          uVal_32 = param_1[0x16];
          lVal_40 = param_1[0x12];
          pU64_24 = (uint64_t *)param_1[0x13];
          if (uVal_32 < (uint64_t)((int64_t)pU64_24 - lVal_40 >> 5)) {
            lVal_21 = uVal_32 * 0x20;
            *(uint32_t *)(lVal_40 + lVal_21) = 5;
            *(int64_t *)(lVal_40 + 8 + lVal_21) = param_2;
            *(int64_t *)(lVal_40 + 0x10 + lVal_21) = param_1[1];
            param_1[0x16] = param_1[0x16] + 1;
          }
          else {
            if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
            lVal_40 = param_1[1];
            if (pU64_24 == (uint64_t *)param_1[0x14]) {
              func_0x1800fbc70(param_1 + 0x12);
              pU64_24 = (uint64_t *)param_1[0x13];
            }
            *pU64_24 = 5;
            pU64_24[1] = param_2;
            pU64_24[2] = lVal_40;
            pU64_24[3] = 0;
            param_1[0x13] = param_1[0x13] + 0x20;
            param_1[0x16] = param_1[0x16] + 1;
          }
        }
      }
      else {
        *(uint32_t *)(pLong_37 + 1) = 1;
        if (*(int *)(param_2 + 0x20) == 0) {
          *(uint32_t *)(param_1[0x12] + lVal_40 * 0x20) = 6;
        }
      }
    }
    else if (*(int *)(param_2 + 0x20) < 1) {
      if (((uVal_18 & 2) == 0) || (*(char *)((int64_t)param_1 + 0xf3) != '\0')) {
        lVal_33 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10);
        if (*(int *)(param_2 + 0x24) != 0) {
          uVal_32 = param_1[0x16];
          lVal_40 = param_1[0x12];
          pU64_24 = (uint64_t *)param_1[0x13];
          if (uVal_32 < (uint64_t)((int64_t)pU64_24 - lVal_40 >> 5)) {
            lVal_21 = uVal_32 * 0x20;
            *(uint32_t *)(lVal_40 + lVal_21) = 9;
            *(int64_t *)(lVal_40 + 8 + lVal_21) = param_2;
            *(int64_t *)(lVal_40 + 0x10 + lVal_21) = param_1[1];
          }
          else {
            if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
            lVal_40 = param_1[1];
            if (pU64_24 == (uint64_t *)param_1[0x14]) {
              func_0x1800fbc70(param_1 + 0x12);
              pU64_24 = (uint64_t *)param_1[0x13];
            }
            *pU64_24 = 9;
            pU64_24[1] = param_2;
            pU64_24[2] = lVal_40;
            pU64_24[3] = 0;
            param_1[0x13] = param_1[0x13] + 0x20;
          }
          lVal_40 = param_1[0x12];
          lVal_21 = param_1[0x16];
          param_1[0x16] = lVal_21 + 1;
          *(uint32_t *)(lVal_40 + 4 + lVal_21 * 0x20) = *(uint32_t *)(pLong_37 + 1);
          *(int64_t *)(lVal_40 + 0x18 + lVal_21 * 0x20) = *pLong_37;
          *(uint32_t *)(pLong_37 + 1) = 0;
          *pLong_37 = lVal_21;
        }
      }
      else {
        if (*(int *)(param_2 + 0x24) != 0) goto LAB_1800fa327;
        lVal_33 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10);
      }
    }
    else {
LAB_1800fa327:
      iVal_19 = 0xb - (uint)(*(int *)(param_2 + 0x20) == 0);
      uVal_32 = param_1[0x16];
      lVal_40 = param_1[0x12];
      pInt_23 = (int *)param_1[0x13];
      if (uVal_32 < (uint64_t)((int64_t)pInt_23 - lVal_40 >> 5)) {
        lVal_21 = uVal_32 * 0x20;
        *(int *)(lVal_40 + lVal_21) = iVal_19;
        *(int64_t *)(lVal_40 + 8 + lVal_21) = param_2;
        *(int64_t *)(lVal_40 + 0x10 + lVal_21) = param_1[1];
      }
      else {
        if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
        lVal_40 = param_1[1];
        if (pInt_23 == (int *)param_1[0x14]) {
          func_0x1800fbc70(param_1 + 0x12);
          pInt_23 = (int *)param_1[0x13];
        }
        *pInt_23 = iVal_19;
        pInt_23[1] = 0;
        *(int64_t *)(pInt_23 + 2) = param_2;
        *(int64_t *)(pInt_23 + 4) = lVal_40;
        *(uint64_t *)(pInt_23 + 6) = 0;
        param_1[0x13] = param_1[0x13] + 0x20;
      }
      lVal_40 = param_1[0x12];
      lVal_21 = param_1[0x16];
      param_1[0x16] = lVal_21 + 1;
      *(uint32_t *)(lVal_40 + 4 + lVal_21 * 0x20) = *(uint32_t *)(pLong_37 + 1);
      *(int64_t *)(lVal_40 + 0x18 + lVal_21 * 0x20) = *pLong_37;
      *(uint32_t *)(pLong_37 + 1) = 1;
      *pLong_37 = lVal_21;
    }
    break;
  case 0x13:
    lVal_40 = *(int64_t *)(param_2 + 0x20);
    uVal_18 = *(uint *)(lVal_40 + 0xc);
    pLong_37 = (int64_t *)((uint64_t)*(uint *)(lVal_40 + 0x30) * 0x18 + param_1[0xf]);
    if ((uVal_18 & 0x1000 | *(uint *)(lVal_40 + 0x34)) == 0) {
      lVal_21 = param_1[1];
      lVal_20 = param_1[0x12];
      lVal_27 = *(int64_t *)(lVal_20 + 0x10 + *pLong_37 * 0x20);
      iVal_19 = *(int *)(pLong_37 + 1);
      if (iVal_19 < *(int *)(lVal_40 + 0x20)) {
        pU64_24 = (uint64_t *)param_1[0x13];
        uVal_32 = param_1[0x16];
        if (uVal_32 < (uint64_t)((int64_t)pU64_24 - lVal_20 >> 5)) {
          lVal_33 = uVal_32 * 0x20;
          *(uint32_t *)(lVal_20 + lVal_33) = 0xb;
          *(int64_t *)(lVal_20 + 8 + lVal_33) = lVal_40;
          *(int64_t *)(lVal_20 + 0x10 + lVal_33) = param_1[1];
        }
        else {
          if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
          if (pU64_24 == (uint64_t *)param_1[0x14]) {
            func_0x1800fbc70(param_1 + 0x12);
            pU64_24 = (uint64_t *)param_1[0x13];
          }
          *pU64_24 = 0xb;
          pU64_24[1] = lVal_40;
          pU64_24[2] = lVal_21;
          pU64_24[3] = 0;
          param_1[0x13] = param_1[0x13] + 0x20;
        }
        lVal_33 = param_1[0x12];
        lVal_20 = param_1[0x16];
        param_1[0x16] = lVal_20 + 1;
        *(uint32_t *)(lVal_33 + 4 + lVal_20 * 0x20) = *(uint32_t *)(pLong_37 + 1);
        *(int64_t *)(lVal_33 + 0x18 + lVal_20 * 0x20) = *pLong_37;
        *pLong_37 = lVal_20;
        if ((lVal_27 == lVal_21) && (*(int *)(lVal_40 + 0x24) < 0)) {
          iVal_19 = *(int *)(lVal_40 + 0x20);
        }
        else {
          iVal_19 = *(int *)(pLong_37 + 1) + 1;
        }
LAB_1800faa60:
        *(int *)(pLong_37 + 1) = iVal_19;
LAB_1800faa65:
        func_0x1800fb4d0(param_1,*(uint32_t *)((int64_t)pLong_37 + 0xc));
        lVal_33 = *(int64_t *)(lVal_40 + 0x10);
      }
      else if (lVal_27 == lVal_21) {
        if (iVal_19 != *(int *)(lVal_40 + 0x20)) {
          uVal_25 = uVal_25 & 0xff;
          if ((*(byte *)(param_1 + 0x1c) & 0x3e) == 0) {
            uVal_25 = 1;
          }
          if (iVal_19 != 1) {
            uVal_25 = 1;
          }
        }
      }
      else if (((uVal_18 & 2) == 0) || (*(char *)((int64_t)param_1 + 0xf3) != '\0')) {
        if (iVal_19 != *(int *)(lVal_40 + 0x24)) {
          lVal_21 = func_0x1800fb400(param_1,9,lVal_40);
          lVal_40 = param_1[0x12];
          *(uint32_t *)(lVal_40 + 4 + lVal_21 * 0x20) = *(uint32_t *)(pLong_37 + 1);
          *(int64_t *)(lVal_40 + 0x18 + lVal_21 * 0x20) = *pLong_37;
          *pLong_37 = lVal_21;
        }
      }
      else if (iVal_19 != *(int *)(lVal_40 + 0x24)) {
        lVal_21 = func_0x1800fb400(param_1,10,lVal_40);
        lVal_33 = param_1[0x12];
        *(uint32_t *)(lVal_33 + 4 + lVal_21 * 0x20) = *(uint32_t *)(pLong_37 + 1);
        *(int64_t *)(lVal_33 + 0x18 + lVal_21 * 0x20) = *pLong_37;
        *pLong_37 = lVal_21;
        if (*(int *)(pLong_37 + 1) != 0x7fffffff) {
          iVal_19 = *(int *)(pLong_37 + 1) + 1;
          goto LAB_1800faa60;
        }
        goto LAB_1800faa65;
      }
    }
    else if (*(int *)(pLong_37 + 1) == 1) {
      lVal_21 = param_1[0x12];
      lVal_20 = *pLong_37 * 0x20;
      lVal_27 = param_1[1] - *(int64_t *)(lVal_21 + 0x10 + lVal_20);
      pLong_37[2] = lVal_27;
      if (lVal_27 == 0) {
        if (((*(byte *)(param_1 + 0x1c) & 0x3e) == 0) &&
           (uVal_25 = uVal_25 & 0xff, *(int *)(lVal_40 + 0x20) == 0)) {
          uVal_25 = 1;
        }
      }
      else {
        iVal_19 = (uint)((*(int *)(lVal_21 + lVal_20) - 6U & 0xfffffffb) == 0) * 4 + 4;
        uVal_32 = param_1[0x16];
        lVal_21 = param_1[0x12];
        pInt_23 = (int *)param_1[0x13];
        if (uVal_32 < (uint64_t)((int64_t)pInt_23 - lVal_21 >> 5)) {
          lVal_20 = uVal_32 * 0x20;
          *(int *)(lVal_21 + lVal_20) = iVal_19;
          *(int64_t *)(lVal_21 + 8 + lVal_20) = lVal_40;
          *(int64_t *)(lVal_21 + 0x10 + lVal_20) = param_1[1];
        }
        else {
          if ((uint64_t)param_1[0x17] <= uVal_32) goto LAB_1800fb2ce;
          lVal_21 = param_1[1];
          if (pInt_23 == (int *)param_1[0x14]) {
            func_0x1800fbc70(param_1 + 0x12);
            pInt_23 = (int *)param_1[0x13];
          }
          *pInt_23 = iVal_19;
          pInt_23[1] = 0;
          *(int64_t *)(pInt_23 + 2) = lVal_40;
          *(int64_t *)(pInt_23 + 4) = lVal_21;
          *(uint64_t *)(pInt_23 + 6) = 0;
          param_1[0x13] = param_1[0x13] + 0x20;
        }
        lVal_21 = param_1[0x16];
        param_1[0x16] = lVal_21 + 1;
        *(int64_t *)(param_1[0x12] + 0x18 + lVal_21 * 0x20) = *pLong_37;
        *pLong_37 = lVal_21;
        iVal_19 = *(int *)(pLong_37 + 1);
        if (iVal_19 < *(int *)(lVal_40 + 0x20)) goto LAB_1800fa759;
LAB_1800fb05c:
        if (((uVal_18 & 2) == 0) || (*(char *)((int64_t)param_1 + 0xf3) != '\0')) {
          if (iVal_19 == *(int *)(lVal_40 + 0x24)) {
LAB_1800fb101:
            param_1[0x16] = param_1[0x16] + -1;
          }
          else {
            lVal_21 = param_1[0x12];
            lVal_20 = *pLong_37 * 0x20;
            *(int64_t *)(lVal_21 + 0x10 + lVal_20) = param_1[1];
            *(uint32_t *)(lVal_21 + lVal_20) = 5;
            *(int64_t *)(lVal_21 + 8 + lVal_20) = lVal_40;
          }
        }
        else {
          pU64_22 = (uint32_t *)(param_1[0x12] + *pLong_37 * 0x20);
          if (*(int *)(param_1[0x12] + *pLong_37 * 0x20) == 4) {
            *pU64_22 = 8;
            lVal_21 = *(int64_t *)(pU64_22 + 6);
            lVal_20 = param_1[1];
            lVal_27 = param_1[0x12];
            *(int64_t *)(lVal_27 + 0x10 + lVal_21 * 0x20) = lVal_20;
            *(int64_t *)(lVal_27 + 0x10 + lVal_21 * 0x20) = lVal_20 - pLong_37[2];
          }
          lVal_21 = param_1[1];
          *(int64_t *)(pU64_22 + 4) = lVal_21;
          iVal_19 = *(int *)(pLong_37 + 1);
          if (iVal_19 == *(int *)(lVal_40 + 0x24)) {
            lVal_21 = lVal_21 - pLong_37[2];
            *(int64_t *)(pU64_22 + 4) = lVal_21;
            if (lVal_21 == *(int64_t *)(param_1[0x12] + 0x10 + *(int64_t *)(pU64_22 + 6) * 0x20))
            goto LAB_1800fb101;
            *pU64_22 = 7;
          }
          else {
            lVal_33 = *(int64_t *)(lVal_40 + 0x10);
            if (iVal_19 != 0x7fffffff) {
              *(int *)(pLong_37 + 1) = iVal_19 + 1;
            }
          }
        }
      }
    }
    else {
      param_1[0x16] = *pLong_37 + 1;
      iVal_19 = *(int *)(pLong_37 + 1);
      if (*(int *)(lVal_40 + 0x20) <= iVal_19) goto LAB_1800fb05c;
LAB_1800fa759:
      lVal_33 = *(int64_t *)(lVal_40 + 0x10);
      *(int *)(pLong_37 + 1) = iVal_19 + 1;
    }
    break;
  case 0x15:
    uVal_32 = (uint64_t)*(ushort *)((int64_t)param_1 + 0xe4);
    if (((*(ushort *)((int64_t)param_1 + 0xe4) & 0x2020) != 0) &&
       (uVal_32 = param_1[0x1a], uVal_32 == param_1[1])) {
      unaff_RBP = CONCAT71(uVal_29,1);
      goto LAB_1800faa96;
    }
    if (*(char *)((int64_t)param_1 + 0xf4) == '\x01') {
      uVal_32 = param_1[1];
      unaff_RBP = CONCAT71(uVal_29,1);
      if (uVal_32 != param_1[0x1b]) goto LAB_1800faa96;
    }
    if (*(char *)((int64_t)param_1 + 0xf3) != '\x01') {
      uVal_25 = CONCAT71((int7)(uVal_32 >> 8),1);
      goto LAB_1800fb2ad;
    }
    lVal_33 = param_1[1];
    unaff_RBP = uVal_25;
    if (*(char *)((int64_t)param_1 + 0xf2) == '\x01') {
      if (param_1[8] == lVal_33) {
        if (*(int *)(param_1 + 0x1d) - 1U != 0) {
          lVal_40 = 8;
          uVal_25 = 0;
          do {
            uVal_31 = 1L << ((byte)uVal_25 & 0x3f);
            uVal_32 = *(uint64_t *)(param_1[5] + (uVal_25 >> 6) * 8);
            uVal_38 = *(uint64_t *)(param_1[0xc] + (uVal_25 >> 6) * 8);
            if (((uVal_32 >> (uVal_25 & 0x3f) & 1) == 0) || ((uVal_38 & uVal_31) == 0)) {
              if (((uVal_31 & uVal_32) != 0) != ((uVal_38 & uVal_31) != 0)) {
                if ((uVal_31 & uVal_32) != 0) goto LAB_1800f9e06;
                break;
              }
            }
            else {
              lVal_21 = *(int64_t *)(param_1[9] + -8 + lVal_40);
              lVal_20 = *(int64_t *)(param_1[2] + -8 + lVal_40);
              if (lVal_21 != lVal_20) {
                if (lVal_20 - param_1[0x1a] < lVal_21 - param_1[0x1a]) goto LAB_1800f9e06;
                break;
              }
              lVal_20 = *(int64_t *)(param_1[9] + lVal_40);
              lVal_27 = *(int64_t *)(param_1[2] + lVal_40);
              if (lVal_20 != lVal_27) {
                if (lVal_20 - lVal_21 < lVal_27 - lVal_21) goto LAB_1800f9e06;
                break;
              }
            }
            uVal_25 = uVal_25 + 1;
            lVal_40 = lVal_40 + 0x10;
          } while (*(int *)(param_1 + 0x1d) - 1U != uVal_25);
        }
      }
      else if (param_1[8] - param_1[0x1a] < lVal_33 - param_1[0x1a]) goto LAB_1800f9e06;
    }
    else {
LAB_1800f9e06:
      param_1[8] = lVal_33;
      func_0x1806aa960(param_1[9],param_1[2],param_1[3] - param_1[2]);
      func_0x1806aa960(param_1[0xc],param_1[5],param_1[6] - param_1[5]);
      *(uint8_t *)((int64_t)param_1 + 0xf2) = 1;
    }
    goto LAB_1800faa96;
  }
  unaff_RBP = uVal_25;
  if (((uVal_25 & 1) == 0) && (uVal_25 = 0, param_2 = lVal_33, lVal_33 != 0)) goto LAB_1800f9a09;
LAB_1800faa96:
  lVal_33 = param_1[0x16];
  uVal_25 = unaff_RBP & 0xffffffff;
  if (lVal_33 == 0) goto LAB_1800fb2a7;
  do {
    lVal_33 = lVal_33 + -1;
    param_1[0x16] = lVal_33;
    iVal_19 = *(int *)(param_1[0x12] + lVal_33 * 0x20);
    if (0xe < iVal_19 - 1U) goto LAB_1800fb2a3;
    pU64_22 = (uint32_t *)(param_1[0x12] + lVal_33 * 0x20);
    switch(iVal_19) {
    case 2:
      param_1[1] = *(int64_t *)(pU64_22 + 4);
      param_2 = *(int64_t *)(*(int64_t *)(pU64_22 + 2) + 0x10);
      lVal_33 = param_1[0x16];
      goto joined_r0x0001800fab99;
    case 3:
      lVal_33 = *(int64_t *)(pU64_22 + 2);
      param_2 = *(int64_t *)(lVal_33 + 0x10);
      param_1[1] = *(int64_t *)(pU64_22 + 4);
      lVal_33 = *(int64_t *)(lVal_33 + 0x28);
      if (lVal_33 == 0) goto LAB_1800fad6e;
      *(int64_t *)(pU64_22 + 2) = lVal_33;
      goto LAB_1800faccf;
    case 5:
      uVal_25 = (uint64_t)*(uint *)(*(int64_t *)(pU64_22 + 2) + 0x30);
      param_2 = *(int64_t *)(*(int64_t *)(pU64_22 + 2) + 0x10);
      param_1[1] = *(int64_t *)(pU64_22 + 4);
      iVal_19 = *(int *)(param_1[0xf] + 8 + uVal_25 * 0x18);
      if (iVal_19 != 0x7fffffff) {
        *(int *)(param_1[0xf] + uVal_25 * 0x18 + 8) = iVal_19 + 1;
      }
      goto LAB_1800fad6e;
    case 6:
      param_2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(pU64_22 + 2) + 0x28) + 0x10);
      param_1[1] = *(int64_t *)(pU64_22 + 4);
      lVal_33 = param_1[0x16];
      goto joined_r0x0001800fab99;
    case 7:
      lVal_40 = *(int64_t *)(pU64_22 + 6) + 1;
      if (lVal_40 != lVal_33) {
        uVal_18 = *(uint *)(*(int64_t *)(pU64_22 + 2) + 0x30);
        lVal_33 = param_1[0xf];
        lVal_21 = *(int64_t *)(pU64_22 + 6) * 0x20 + 0x24;
        do {
          pLong_37 = (int64_t *)
                    ((uint64_t)*(uint *)(param_1[0x12] + lVal_21) * 0x10 + param_1[2] +
                    (uint64_t)(*(int *)(param_1[0x12] + -4 + lVal_21) != 0xc) * 8);
          *pLong_37 = *pLong_37 - *(int64_t *)((uint64_t)uVal_18 * 0x18 + lVal_33 + 0x10);
          lVal_40 = lVal_40 + 1;
          lVal_21 = lVal_21 + 0x20;
        } while (lVal_40 != param_1[0x16]);
      }
    case 8:
      lVal_33 = *(int64_t *)(pU64_22 + 2);
      lVal_40 = *(int64_t *)(pU64_22 + 4);
      param_2 = *(int64_t *)(*(int64_t *)(lVal_33 + 0x28) + 0x10);
      param_1[1] = lVal_40;
      lVal_40 = lVal_40 - *(int64_t *)
                         (param_1[0xf] + 0x10 + (uint64_t)*(uint *)(lVal_33 + 0x30) * 0x18);
      *(int64_t *)(pU64_22 + 4) = lVal_40;
      if (*(int64_t *)(param_1[0x12] + 0x10 + *(int64_t *)(pU64_22 + 6) * 0x20) == lVal_40)
      goto LAB_1800fad6e;
      *pU64_22 = 7;
LAB_1800faccf:
      param_1[0x16] = param_1[0x16] + 1;
      lVal_33 = param_1[0x16];
      goto joined_r0x0001800fab99;
    case 9:
      uVal_25 = (uint64_t)*(uint *)(*(int64_t *)(pU64_22 + 2) + 0x30);
      lVal_33 = param_1[0xf] + uVal_25 * 0x18;
      param_2 = *(int64_t *)(*(int64_t *)(pU64_22 + 2) + 0x10);
      param_1[1] = *(int64_t *)(pU64_22 + 4);
      iVal_19 = *(int *)(param_1[0xf] + 8 + uVal_25 * 0x18);
      if (iVal_19 != 0x7fffffff) {
        *(int *)(lVal_33 + 8) = iVal_19 + 1;
      }
      *pU64_22 = 0xb;
      param_1[0x16] = param_1[0x16] + 1;
      func_0x1800fb4d0(param_1,*(uint32_t *)(lVal_33 + 0xc));
LAB_1800fad6e:
      lVal_33 = param_1[0x16];
joined_r0x0001800fab99:
      uVal_25 = 0;
      if (lVal_33 != 0) goto LAB_1800faae8;
      goto LAB_1800f9a00;
    case 10:
      param_2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(pU64_22 + 2) + 0x28) + 0x10);
      param_1[1] = *(int64_t *)(pU64_22 + 4);
      uVal_25 = 0;
      goto LAB_1800facf0;
    case 0xb:
      param_2 = 0;
LAB_1800facf0:
      uVal_18 = *(uint *)(*(int64_t *)(pU64_22 + 2) + 0x30);
      lVal_33 = param_1[0xf];
      *(uint32_t *)(lVal_33 + 8 + (uint64_t)uVal_18 * 0x18) = pU64_22[1];
      *(uint64_t *)(lVal_33 + (uint64_t)uVal_18 * 0x18) = *(uint64_t *)(pU64_22 + 6);
      lVal_33 = param_1[0x16];
      goto joined_r0x0001800fad1a;
    case 0xc:
      *(uint64_t *)(param_1[2] + (uint64_t)(uint)pU64_22[1] * 0x10) =
           *(uint64_t *)(pU64_22 + 4);
      break;
    case 0xd:
      bFlag_41 = (byte)pU64_22[1] & 0x3f;
      pU64_3 = (uint64_t *)(param_1[5] + (uint64_t)((uint)pU64_22[1] >> 6) * 8);
      *pU64_3 = *pU64_3 & (-2L << bFlag_41 | 0xfffffffffffffffeU >> 0x40 - bFlag_41);
    case 0xe:
      *(uint64_t *)(param_1[2] + 8 + (uint64_t)(uint)pU64_22[1] * 0x10) =
           *(uint64_t *)(pU64_22 + 4);
      break;
    case 0xf:
      pU64_3 = (uint64_t *)(param_1[5] + (uint64_t)((uint)pU64_22[1] >> 6) * 8);
      *pU64_3 = *pU64_3 | 1L << ((byte)pU64_22[1] & 0x3f);
    }
    param_2 = 0;
    lVal_33 = param_1[0x16];
joined_r0x0001800fad1a:
    if (lVal_33 == 0) break;
LAB_1800faae8:
  } while (param_2 == 0);
LAB_1800f9a00:
  if (param_2 == 0) goto LAB_1800fb2a7;
  goto LAB_1800f9a09;
LAB_1800fb2a7:
  uVal_25 = uVal_25 ^ 1;
LAB_1800fb2ad:
  return uVal_25 & 0xffffffffffffff01;
}

// func_0x1800fb2e0
byte * func_0x1800fb2e0(int64_t param_1,int64_t param_2,byte *param_3)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  char ch_3;
  uint uVal_4;
  byte *pU8_5;
  uint64_t uVal_6;
  
  uVal_6 = (uint64_t)*param_3;
  if ((*(byte *)(param_1 + 0xe1) & 1) != 0) {
    pLong_1 = *(int64_t **)(*(int64_t *)(param_1 + 200) + 8);
    uVal_4 = (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,uVal_6);
    uVal_6 = (uint64_t)uVal_4;
  }
  if ((*(int64_t *)(param_2 + 0x20) == 0) ||
     (pU8_5 = (byte *)func_0x1800fb600(uVal_6,param_3,*(uint64_t *)(param_1 + 0xd8),
                                     *(int64_t *)(param_2 + 0x20),*(uint64_t *)(param_1 + 200),
                                     *(uint32_t *)(param_1 + 0xe0)), pU8_5 == param_3)) {
    pU8_5 = param_3 + 1;
    lVal_2 = *(int64_t *)(param_2 + 0x38);
    if (lVal_2 != 0) {
      if ((*(byte *)(param_1 + 0xe1) & 8) == 0) {
        if (*(uint *)(lVal_2 + 4) != 0) {
          uVal_4 = 0;
          do {
            if ((*(byte *)(*(int64_t *)(lVal_2 + 8) + (uint64_t)uVal_4) <= (byte)uVal_6) &&
               ((byte)uVal_6 <= *(byte *)(*(int64_t *)(lVal_2 + 8) + (uint64_t)(uVal_4 + 1))))
            goto LAB_1800fb34a;
            uVal_4 = uVal_4 + 2;
          } while (uVal_4 < *(uint *)(lVal_2 + 4));
        }
      }
      else {
        ch_3 = func_0x1800fb810(uVal_6,lVal_2,*(uint64_t *)(param_1 + 200));
        uVal_4 = 1;
        if (ch_3 != '\0') goto LAB_1800fb3e5;
      }
    }
    if (*(int64_t *)(param_2 + 0x28) == 0) {
      uVal_4 = 0;
    }
    else {
      uVal_4 = (uint)((*(byte *)(*(int64_t *)(param_2 + 0x28) + ((uVal_6 & 0xff) >> 3)) >>
                      ((uint)(uVal_6 & 0xff) & 7) & 1) != 0);
    }
  }
  else {
LAB_1800fb34a:
    uVal_4 = 1;
  }
LAB_1800fb3e5:
  if (uVal_4 == (*(uint *)(param_2 + 0xc) & 1)) {
    pU8_5 = param_3;
  }
  return pU8_5;
}

// func_0x1800fb400
void func_0x1800fb400(int64_t param_1,uint32_t param_2,uint64_t param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  uint32_t *pU64_5;
  int64_t lVal_6;
  
  uVal_1 = *(uint64_t *)(param_1 + 0xb0);
  lVal_2 = *(int64_t *)(param_1 + 0x90);
  pU64_5 = *(uint32_t **)(param_1 + 0x98);
  if (uVal_1 < (uint64_t)((int64_t)pU64_5 - lVal_2 >> 5)) {
    lVal_6 = uVal_1 * 0x20;
    *(uint32_t *)(lVal_2 + lVal_6) = param_2;
    *(uint64_t *)(lVal_2 + 8 + lVal_6) = param_3;
    *(uint64_t *)(lVal_2 + 0x10 + lVal_6) = *(uint64_t *)(param_1 + 8);
  }
  else {
    if (*(uint64_t *)(param_1 + 0xb8) <= uVal_1) {
      func_0x180674790(0xc);
      fnPtr_4 = (func_ptr_t )swi(3);
      (*fnPtr_4)();
      return;
    }
    uVal_3 = *(uint64_t *)(param_1 + 8);
    if (pU64_5 == *(uint32_t **)(param_1 + 0xa0)) {
      func_0x1800fbc70(param_1 + 0x90);
      pU64_5 = *(uint32_t **)(param_1 + 0x98);
    }
    *pU64_5 = param_2;
    pU64_5[1] = 0;
    *(uint64_t *)(pU64_5 + 2) = param_3;
    *(uint64_t *)(pU64_5 + 4) = uVal_3;
    *(uint64_t *)(pU64_5 + 6) = 0;
    *(int64_t *)(param_1 + 0x98) = *(int64_t *)(param_1 + 0x98) + 0x20;
  }
  *(int64_t *)(param_1 + 0xb0) = *(int64_t *)(param_1 + 0xb0) + 1;
  return;
}

// func_0x1800fb4d0
void func_0x1800fb4d0(int64_t param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  uint64_t *pU64_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  
  uVal_7 = *(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 4;
  if ((param_2 & 0xffffffff) < uVal_7) {
    param_2 = param_2 & 0xffffffff;
    do {
      uVal_1 = *(uint64_t *)(*(int64_t *)(param_1 + 0x28) + (param_2 >> 6) * 8);
      if ((uVal_1 >> (param_2 & 0x3f) & 1) != 0) {
        *(uint64_t *)(*(int64_t *)(param_1 + 0x28) + (param_2 >> 6) * 8) =
             uVal_1 & ~(1L << ((byte)param_2 & 0x3f));
        uVal_1 = *(uint64_t *)(param_1 + 0xb0);
        lVal_2 = *(int64_t *)(param_1 + 0x90);
        pU64_5 = *(uint64_t **)(param_1 + 0x98);
        if (uVal_1 < (uint64_t)((int64_t)pU64_5 - lVal_2 >> 5)) {
          lVal_6 = uVal_1 * 0x20;
          *(uint32_t *)(lVal_2 + lVal_6) = 0xf;
          *(uint64_t *)(lVal_2 + 8 + lVal_6) = 0;
          *(uint64_t *)(lVal_2 + 0x10 + lVal_6) = *(uint64_t *)(param_1 + 8);
        }
        else {
          if (*(uint64_t *)(param_1 + 0xb8) <= uVal_1) {
            func_0x180674790(0xc);
            fnPtr_4 = (func_ptr_t )swi(3);
            (*fnPtr_4)();
            return;
          }
          uVal_3 = *(uint64_t *)(param_1 + 8);
          if (pU64_5 == *(uint64_t **)(param_1 + 0xa0)) {
            func_0x1800fbc70(param_1 + 0x90);
            pU64_5 = *(uint64_t **)(param_1 + 0x98);
          }
          *pU64_5 = 0xf;
          pU64_5[1] = 0;
          pU64_5[2] = uVal_3;
          pU64_5[3] = 0;
          *(int64_t *)(param_1 + 0x98) = *(int64_t *)(param_1 + 0x98) + 0x20;
        }
        lVal_2 = *(int64_t *)(param_1 + 0xb0);
        *(int64_t *)(param_1 + 0xb0) = lVal_2 + 1;
        *(int *)(*(int64_t *)(param_1 + 0x90) + 4 + lVal_2 * 0x20) = (int)param_2;
      }
      param_2 = (uint64_t)((int)param_2 + 1);
    } while (param_2 < uVal_7);
  }
  return;
}

// func_0x1800fb600
int64_t func_0x1800fb600(uint8_t param_1,int64_t param_2,int64_t param_3,uint *param_4, int64_t param_5,uint param_6)
{
  uint8_t *pU64_1;
  uint uVal_2;
  uint64_t uVal_3;
  uint8_t uVal_4;
  int iVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint8_t *pU64_8;
  uint uVal_9;
  uint64_t _Size;
  void *_Buf2;
  bool bFlag_10;
  uint8_t local_78 [16];
  uint64_t local_68;
  uint64_t local_60;
  int64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = 0xf;
  if (param_4 != (uint *)0x0) {
    local_68 = 1;
    local_78._1_15_ = SUB1615(ZEXT816(0),1);
    local_78[0] = param_1;
    uVal_2 = *param_4;
    local_50 = param_2;
    if (param_2 + 1 != param_3 && 1 < (uint64_t)uVal_2) {
      param_2 = param_2 + 2;
      uVal_7 = 2;
      do {
        uVal_4 = *(uint8_t *)(param_2 + -1);
        if ((param_6 & 0x100) != 0) {
          uVal_4 = (**(func_ptr_t *)(**(int64_t **)(param_5 + 8) + 0x20))
                            (*(int64_t **)(param_5 + 8),uVal_4);
        }
        uVal_3 = local_68;
        if (local_68 < local_60) {
          pU64_8 = local_78;
          if (0xf < local_60) {
            pU64_8 = (uint8_t *)local_78._0_8_;
          }
          pU64_1 = pU64_8 + local_68;
          local_68 = local_68 + 1;
          *pU64_1 = uVal_4;
          pU64_8[uVal_3 + 1] = 0;
        }
        else {
          func_0x18008c590(local_78,1);
        }
        if (uVal_2 <= uVal_7) break;
        uVal_7 = uVal_7 + 1;
        bFlag_10 = param_2 != param_3;
        param_2 = param_2 + 1;
      } while (bFlag_10);
    }
    uVal_3 = local_60;
    uVal_7 = local_68;
    if (local_60 < 0x10) {
      pU64_8 = local_78;
    }
    else {
      pU64_8 = (uint8_t *)local_78._0_8_;
    }
    do {
      uVal_2 = *param_4;
      _Size = (uint64_t)uVal_2;
      if ((_Size <= uVal_7) && (uVal_9 = param_4[3], uVal_2 <= uVal_9)) {
        _Buf2 = *(void **)(param_4 + 4);
        do {
          iVal_5 = memcmp(pU64_8,_Buf2,_Size);
          if (iVal_5 == 0) {
            param_2 = local_50 + _Size;
            if (uVal_3 < 0x10) {
              return param_2;
            }
            goto LAB_1800fb76c;
          }
          _Buf2 = (void *)((int64_t)_Buf2 + _Size);
          uVal_9 = uVal_9 - uVal_2;
        } while (uVal_2 <= uVal_9);
      }
      param_4 = *(uint **)(param_4 + 6);
    } while (param_4 != (uint *)0x0);
    param_2 = local_50;
    if (0xf < uVal_3) {
LAB_1800fb76c:
      uVal_7 = uVal_3 + 1;
      lVal_6 = local_78._0_8_;
      if (0xfff < uVal_7) {
        lVal_6 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_6)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_7 = uVal_3 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_7);
    }
  }
  return param_2;
}

// Unwind@1800fb7d0
void Unwind_1800fb7d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x1800fb810
bool func_0x1800fb810(uint8_t param_1,int64_t param_2,int64_t **param_3)
{
  uint8_t uVal_1;
  uint64_t uVal_2;
  int iVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t *******ptr7_U64_6;
  int64_t lVal_7;
  uint64_t *******_Buf1;
  uint64_t *******ptr7_U64_8;
  uint uVal_9;
  uint64_t uVal_10;
  bool bFlag_11;
  uint64_t uVal_12;
  uint64_t *******local_f0 [2];
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t *******local_d0 [2];
  uint64_t local_c0;
  uint64_t local_b8;
  int64_t local_b0;
  uint64_t *******local_a8 [2];
  uint64_t local_98;
  uint64_t local_90;
  uint8_t local_88 [16];
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_78 = 1;
  local_70 = 0xf;
  local_88._1_15_ = SUB1615(ZEXT816(0),1);
  local_88[0] = param_1;
  (**(func_ptr_t *)(**param_3 + 0x20))(*param_3,local_a8,local_88,local_88 + 1);
  if (0xf < local_70) {
    uVal_4 = local_70 + 1;
    lVal_7 = local_88._0_8_;
    if (0xfff < uVal_4) {
      lVal_7 = *(int64_t *)(local_88._0_8_ + -8);
      if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_7)) goto LAB_1800fbb54;
      uVal_4 = local_70 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_4);
  }
  uVal_4 = 0;
  lVal_7 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    bFlag_11 = false;
  }
  else {
    do {
      local_b0 = lVal_7;
      uVal_1 = *(uint8_t *)(*(int64_t *)(param_2 + 8) + (uint64_t)((int)uVal_4 + 1));
      local_78 = 1;
      local_70 = 0xf;
      local_88._1_15_ = SUB1615(ZEXT816(0),1);
      local_88[0] = *(uint8_t *)(*(int64_t *)(param_2 + 8) + uVal_4);
      (**(func_ptr_t *)(**param_3 + 0x20))(*param_3,local_d0,local_88,local_88 + 1);
      if (0xf < local_70) {
        uVal_5 = local_70 + 1;
        lVal_7 = local_88._0_8_;
        if (0xfff < uVal_5) {
          lVal_7 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_7)) goto LAB_1800fbb54;
          uVal_5 = local_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_5);
      }
      uVal_2 = local_98;
      uVal_5 = local_b8;
      uVal_12 = local_c0;
      ptr7_U64_8 = local_a8;
      if (0xf < local_90) {
        ptr7_U64_8 = local_a8[0];
      }
      ptr7_U64_6 = local_d0;
      if (0xf < local_b8) {
        ptr7_U64_6 = local_d0[0];
      }
      uVal_10 = local_c0;
      if (local_98 < local_c0) {
        uVal_10 = local_98;
      }
      iVal_3 = memcmp(ptr7_U64_6,ptr7_U64_8,uVal_10);
      bFlag_11 = uVal_12 <= uVal_2;
      if (iVal_3 != 0) {
        bFlag_11 = iVal_3 < 1;
      }
      if (bFlag_11) {
        local_78 = 1;
        local_70 = 0xf;
        local_88._1_15_ = SUB1615(ZEXT816(0),1);
        local_88[0] = uVal_1;
        (**(func_ptr_t *)(**param_3 + 0x20))(*param_3,local_f0,local_88,local_88 + 1);
        if (0xf < local_70) {
          uVal_5 = local_70 + 1;
          lVal_7 = local_88._0_8_;
          if (0xfff < uVal_5) {
            lVal_7 = *(int64_t *)(local_88._0_8_ + -8);
            if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_7)) goto LAB_1800fbb54;
            uVal_5 = local_70 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_5);
        }
        uVal_2 = local_98;
        uVal_12 = local_d8;
        uVal_5 = local_e0;
        ptr7_U64_8 = local_f0[0];
        ptr7_U64_6 = local_f0;
        if (0xf < local_d8) {
          ptr7_U64_6 = local_f0[0];
        }
        _Buf1 = local_a8;
        if (0xf < local_90) {
          _Buf1 = local_a8[0];
        }
        uVal_10 = local_98;
        if (local_e0 < local_98) {
          uVal_10 = local_e0;
        }
        iVal_3 = memcmp(_Buf1,ptr7_U64_6,uVal_10);
        param_2 = local_b0;
        bFlag_11 = uVal_2 <= uVal_5;
        if (iVal_3 != 0) {
          bFlag_11 = iVal_3 < 1;
        }
        uVal_5 = local_b8;
        if (0xf < uVal_12) {
          uVal_5 = uVal_12 + 1;
          ptr7_U64_6 = ptr7_U64_8;
          if (0xfff < uVal_5) {
            ptr7_U64_6 = (uint64_t *******)ptr7_U64_8[-1];
            if (0x1f < (uint64_t)((int64_t)ptr7_U64_8 + (-8 - (int64_t)ptr7_U64_6)))
            goto LAB_1800fbb54;
            uVal_5 = uVal_12 + 0x28;
          }
          thunk_FUN_180695dd0(ptr7_U64_6,uVal_5);
          uVal_5 = local_b8;
        }
      }
      else {
        bFlag_11 = false;
      }
      if (0xf < uVal_5) {
        uVal_12 = uVal_5 + 1;
        ptr7_U64_8 = local_d0[0];
        if (0xfff < uVal_12) {
          ptr7_U64_8 = (uint64_t *******)local_d0[0][-1];
          if (0x1f < (uint64_t)((int64_t)local_d0[0] + (-8 - (int64_t)ptr7_U64_8)))
          goto LAB_1800fbb54;
          uVal_12 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(ptr7_U64_8,uVal_12);
      }
    } while ((bFlag_11 == false) &&
            (uVal_9 = (int)uVal_4 + 2, uVal_4 = (uint64_t)uVal_9, lVal_7 = local_b0,
            uVal_9 < *(uint *)(param_2 + 4)));
  }
  if (0xf < local_90) {
    uVal_4 = local_90 + 1;
    ptr7_U64_8 = local_a8[0];
    if (0xfff < uVal_4) {
      ptr7_U64_8 = (uint64_t *******)local_a8[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_a8[0] + (-8 - (int64_t)ptr7_U64_8))) {
LAB_1800fbb54:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = local_90 + 0x28;
    }
    thunk_FUN_180695dd0(ptr7_U64_8,uVal_4);
  }
  return bFlag_11;
}

// Unwind@1800fbb60
void Unwind_1800fbb60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1800fbba0
void Unwind_1800fbba0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1800fbbe0
void Unwind_1800fbbe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  func_0x180001e70(param_2 + 0x48);
  return;
}

// Unwind@1800fbc30
void Unwind_1800fbc30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// func_0x1800fbc70
void func_0x1800fbc70(uint64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_1 = *param_1;
  uVal_6 = param_1[2] - uVal_1;
  uVal_5 = (int64_t)uVal_6 >> 5;
  lVal_2 = (uVal_5 >> 1) + (uint64_t)(uVal_5 >> 1 == 0);
  uVal_3 = lVal_2 + uVal_5;
  if (0x7ffffffffffffffU - lVal_2 < uVal_5) {
    uVal_3 = 0x7ffffffffffffff;
  }
  if (uVal_5 < uVal_3) {
    if (uVal_3 >> 0x3b == 0) {
      uVal_5 = param_1[1];
      lVal_2 = uVal_3 * 0x20;
      if (uVal_3 < 0x80) {
        uVal_3 = func_0x180672de0(lVal_2);
      }
      else {
        if (uVal_3 == 0x7ffffffffffffff) goto LAB_1800fbd81;
        lVal_4 = func_0x180672de0(lVal_2 + 0x27);
        uVal_3 = lVal_4 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_3 - 8) = lVal_4;
      }
      func_0x1806aa960(uVal_3,uVal_1,uVal_5 - uVal_1);
      *param_1 = uVal_3;
      param_1[1] = (uVal_5 - uVal_1) + uVal_3;
      param_1[2] = lVal_2 + uVal_3;
      if (*(char *)(param_1 + 3) != '\x01') {
        *(uint8_t *)(param_1 + 3) = 1;
        return;
      }
      uVal_3 = uVal_1;
      if (uVal_6 < 0x1000) {
LAB_1800fbd57:
        thunk_FUN_180695dd0(uVal_3,uVal_6);
        return;
      }
      uVal_3 = *(uint64_t *)(uVal_1 - 8);
      if ((uVal_1 - 8) - uVal_3 < 0x20) {
        uVal_6 = uVal_6 + 0x27;
        goto LAB_1800fbd57;
      }
      goto LAB_1800fbd90;
    }
LAB_1800fbd81:
    func_0x18007ba90();
  }
  func_0x180674790(0xc);
LAB_1800fbd90:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1800fbda0
uint64_t func_0x1800fbda0(int64_t param_1,int64_t param_2,int64_t param_3)
{
  char ch_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  if (param_2 == 0) {
LAB_1800fbe80:
    uVal_3 = 0;
switchD_1800fbe04_caseD_c:
    return uVal_3;
  }
LAB_1800fbded:
  uVal_3 = 0;
  switch(*(uint32_t *)(param_2 + 8)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xe:
  case 0xf:
  case 0x14:
    goto switchD_1800fbe04_caseD_1;
  case 10:
  case 0xb:
    ch_1 = func_0x1800fbda0(param_1,*(uint64_t *)(param_2 + 0x20),param_3);
    if (ch_1 == '\0') goto switchD_1800fbe04_caseD_1;
    goto LAB_1800fbe92;
  default:
    goto switchD_1800fbe04_caseD_c;
  case 0xd:
    iVal_2 = *(int *)(param_2 + 0x20) + -1;
    goto LAB_1800fbe8f;
  case 0x10:
    break;
  case 0x12:
    lVal_4 = (uint64_t)*(uint *)(param_2 + 0x30) * 0x18 + *(int64_t *)(param_1 + 0x78);
    ch_1 = func_0x1800fbda0(param_1,*(uint64_t *)(param_2 + 0x10),lVal_4);
    if (ch_1 == '\0') {
      *(int *)(lVal_4 + 0xc) =
           (int)((uint64_t)(*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10)) >> 4);
      param_2 = *(int64_t *)(param_2 + 0x28);
      goto joined_r0x0001800fbe7a;
    }
    iVal_2 = *(int *)(lVal_4 + 0xc);
LAB_1800fbe8f:
    *(int *)(param_3 + 0xc) = iVal_2;
LAB_1800fbe92:
    uVal_3 = 1;
    goto switchD_1800fbe04_caseD_c;
  }
  lVal_4 = param_2;
  do {
    ch_1 = func_0x1800fbda0(param_1,*(uint64_t *)(lVal_4 + 0x10),param_3);
    if (ch_1 != '\0') goto LAB_1800fbe92;
    lVal_4 = *(int64_t *)(lVal_4 + 0x28);
  } while (lVal_4 != 0);
  param_2 = *(int64_t *)(param_2 + 0x20);
joined_r0x0001800fbe7a:
  if (param_2 == 0) goto LAB_1800fbe80;
switchD_1800fbe04_caseD_1:
  param_2 = *(int64_t *)(param_2 + 0x10);
  if (param_2 == 0) goto LAB_1800fbe80;
  goto LAB_1800fbded;
}

// func_0x1800fbea0
char * func_0x1800fbea0(char *param_1,char *param_2,char *param_3,char *param_4)
{
  char *fnPtr_1;
  char *fnPtr_2;
  
  if ((int64_t)param_4 - (int64_t)param_3 == 1) {
    fnPtr_1 = (char *)thunk_FUN_180676460(param_1,param_2,*param_3);
    return fnPtr_1;
  }
  if ((int64_t)param_2 - (int64_t)param_1 < 0x10) {
    fnPtr_1 = param_1;
    if ((param_1 != param_2) &&
       (fnPtr_1 = param_1 + ((int64_t)param_2 - (int64_t)param_1), param_3 != param_4)) {
      do {
        fnPtr_2 = param_3;
        do {
          if (*param_1 == *fnPtr_2) {
            return param_1;
          }
          fnPtr_2 = fnPtr_2 + 1;
        } while (fnPtr_2 != param_4);
        param_1 = param_1 + 1;
      } while (param_1 != param_2);
    }
    return fnPtr_1;
  }
  if (((byte)DAT_18083d264 & 4) != 0) {
    fnPtr_1 = (char *)func_0x180677020(param_1,(int64_t)param_2 - (int64_t)param_1,param_3,
                                   (int64_t)param_4 - (int64_t)param_3);
    return fnPtr_1;
  }
  if (param_1 != param_2) {
    do {
      if (param_3 != param_4) {
        fnPtr_1 = param_3;
        do {
          if (*param_1 == *fnPtr_1) {
            return param_1;
          }
          fnPtr_1 = fnPtr_1 + 1;
        } while (fnPtr_1 != param_4);
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}

// func_0x1800fbf00
void func_0x1800fbf00(uint64_t *param_1,int64_t param_2,int64_t **param_3,char *param_4, char *param_5)
{
  char ch_1;
  uint8_t uVal_2;
  uint64_t *pU64_3;
  uint8_t *pU64_4;
  int64_t *pLong_5;
  func_ptr_t fnPtr_6;
  byte bFlag_7;
  int64_t **ptr2_Long_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  int64_t *pLong_11;
  uint64_t uVal_12;
  int64_t *pLong_13;
  int64_t *pLong_14;
  uint8_t *pU64_15;
  char *fnPtr_16;
  int64_t *pLong_17;
  
  if (param_4 != param_5) {
    do {
      ch_1 = *param_4;
      fnPtr_16 = param_4 + 1;
      if (ch_1 == '\\') {
        if (fnPtr_16 != param_5) {
          ch_1 = param_4[1];
          bFlag_7 = ch_1 - 0x30;
          fnPtr_16 = param_4 + 2;
          if (bFlag_7 < 10) {
            uVal_10 = (uint64_t)bFlag_7;
            lVal_9 = *(int64_t *)(param_2 + 0x10);
            uVal_12 = (*(int64_t *)(param_2 + 0x18) - lVal_9 >> 3) * -0x5555555555555555;
            if (uVal_10 <= uVal_12 && uVal_12 - uVal_10 != 0) {
              pU64_4 = *(uint8_t **)(lVal_9 + 8 + uVal_10 * 0x18);
              for (pU64_15 = *(uint8_t **)(lVal_9 + uVal_10 * 0x18); pU64_15 != pU64_4;
                  pU64_15 = pU64_15 + 1) {
                while( true ) {
                  uVal_2 = *pU64_15;
                  pLong_11 = param_3[2];
                  if (param_3[3] <= pLong_11) break;
                  param_3[2] = (int64_t *)((int64_t)pLong_11 + 1);
                  ptr2_Long_8 = param_3;
                  if (&DAT_0000000f < param_3[3]) {
                    ptr2_Long_8 = (int64_t **)*param_3;
                  }
                  *(uint8_t *)((int64_t)ptr2_Long_8 + (int64_t)pLong_11) = uVal_2;
                  *(uint8_t *)((int64_t)ptr2_Long_8 + 1 + (int64_t)pLong_11) = 0;
                  pU64_15 = pU64_15 + 1;
                  if (pU64_15 == pU64_4) goto LAB_1800fbf52;
                }
                func_0x18008c590(param_3,1);
              }
            }
          }
          else {
            pLong_11 = param_3[2];
            if (pLong_11 < param_3[3]) {
              param_3[2] = (int64_t *)((int64_t)pLong_11 + 1);
              ptr2_Long_8 = param_3;
              if (&DAT_0000000f < param_3[3]) {
                ptr2_Long_8 = (int64_t **)*param_3;
              }
              *(char *)((int64_t)ptr2_Long_8 + (int64_t)pLong_11) = ch_1;
              *(uint8_t *)((int64_t)ptr2_Long_8 + 1 + (int64_t)pLong_11) = 0;
            }
            else {
              func_0x18008c590(param_3,1);
            }
          }
        }
      }
      else if (ch_1 == '&') {
        pU64_3 = *(uint64_t **)(param_2 + 0x10);
        if (*(uint64_t **)(param_2 + 0x18) != pU64_3) {
          pU64_4 = (uint8_t *)pU64_3[1];
          for (pU64_15 = (uint8_t *)*pU64_3; pU64_15 != pU64_4; pU64_15 = pU64_15 + 1) {
            while( true ) {
              uVal_2 = *pU64_15;
              pLong_11 = param_3[2];
              pLong_5 = param_3[3];
              if (pLong_5 <= pLong_11) break;
              param_3[2] = (int64_t *)((int64_t)pLong_11 + 1);
              ptr2_Long_8 = param_3;
              if (&DAT_0000000f < pLong_5) {
                ptr2_Long_8 = (int64_t **)*param_3;
              }
              *(uint8_t *)((int64_t)ptr2_Long_8 + (int64_t)pLong_11) = uVal_2;
              *(uint8_t *)((int64_t)ptr2_Long_8 + 1 + (int64_t)pLong_11) = 0;
              pU64_15 = pU64_15 + 1;
              if (pU64_15 == pU64_4) goto LAB_1800fbf52;
            }
            if (pLong_11 == (int64_t *)0x7fffffffffffffff) {
              func_0x18007ba70();
LAB_1800fc290:
              do {
                invalidInstructionException();
              } while( true );
            }
            pLong_13 = (int64_t *)0x7fffffffffffffff;
            if (SCARRY8((int64_t)pLong_11,1) == (int64_t)(int64_t *)((int64_t)pLong_11 + 1) < 0) {
              pLong_13 = (int64_t *)0x7fffffffffffffff;
              if ((int64_t *)((uint64_t)pLong_5 >> 1 ^ 0x7fffffffffffffff) < pLong_5)
              goto LAB_1800fc020;
              pLong_17 = (int64_t *)((uint64_t)((int64_t)pLong_11 + 1) | 0xf);
              pLong_13 = (int64_t *)(((uint64_t)pLong_5 >> 1) + (int64_t)pLong_5);
              if (pLong_13 < pLong_17) {
                pLong_13 = pLong_17;
              }
              if (pLong_13 == (int64_t *)0xffffffffffffffff) {
                pLong_13 = (int64_t *)0xffffffffffffffff;
                pLong_17 = (int64_t *)0x0;
              }
              else {
                if ((uint8_t *)0xfff < (uint8_t *)((int64_t)pLong_13 + 1)) {
                  if ((uint8_t *)0xffffffffffffffd8 < (uint8_t *)((int64_t)pLong_13 + 1)) {
                    func_0x18007ba90();
                    fnPtr_6 = (func_ptr_t )swi(3);
                    (*fnPtr_6)();
                    return;
                  }
                  goto LAB_1800fc020;
                }
                pLong_17 = (int64_t *)func_0x180672de0();
              }
            }
            else {
LAB_1800fc020:
              lVal_9 = func_0x180672de0(pLong_13 + 5);
              pLong_17 = (int64_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
              pLong_17[-1] = lVal_9;
            }
            param_3[2] = (int64_t *)((int64_t)pLong_11 + 1);
            param_3[3] = pLong_13;
            if (pLong_5 < (int64_t *)0x10) {
              func_0x1806aa960(pLong_17,param_3,pLong_11);
              *(uint8_t *)((int64_t)pLong_17 + (int64_t)pLong_11) = uVal_2;
              *(uint8_t *)((int64_t)pLong_17 + 1 + (int64_t)pLong_11) = 0;
            }
            else {
              pLong_13 = *param_3;
              func_0x1806aa960(pLong_17,pLong_13,pLong_11);
              *(uint8_t *)((int64_t)pLong_17 + (int64_t)pLong_11) = uVal_2;
              *(uint8_t *)((int64_t)pLong_17 + 1 + (int64_t)pLong_11) = 0;
              pLong_11 = (int64_t *)((int64_t)pLong_5 + 1);
              pLong_14 = pLong_13;
              if ((int64_t *)0xfff < pLong_11) {
                pLong_14 = (int64_t *)pLong_13[-1];
                if (0x1f < (uint64_t)((int64_t)pLong_13 + (-8 - (int64_t)pLong_14)))
                goto LAB_1800fc290;
                pLong_11 = pLong_5 + 5;
              }
              thunk_FUN_180695dd0(pLong_14,pLong_11);
            }
            *param_3 = pLong_17;
          }
        }
      }
      else {
        pLong_11 = param_3[2];
        if (pLong_11 < param_3[3]) {
          param_3[2] = (int64_t *)((int64_t)pLong_11 + 1);
          ptr2_Long_8 = param_3;
          if (&DAT_0000000f < param_3[3]) {
            ptr2_Long_8 = (int64_t **)*param_3;
          }
          *(char *)((int64_t)ptr2_Long_8 + (int64_t)pLong_11) = ch_1;
          *(uint8_t *)((int64_t)ptr2_Long_8 + 1 + (int64_t)pLong_11) = 0;
        }
        else {
          func_0x18008c590(param_3,1);
        }
      }
LAB_1800fbf52:
      param_4 = fnPtr_16;
    } while (fnPtr_16 != param_5);
  }
  *param_1 = param_3;
  return;
}

// func_0x1800fc2a0
uint64_t * func_0x1800fc2a0(uint64_t *param_1,int64_t param_2,uint64_t *param_3,byte *param_4,byte *param_5)
{
  uint8_t uVal_1;
  byte bFlag_2;
  uint8_t *pU64_3;
  int64_t lVal_4;
  bool bFlag_5;
  byte bFlag_6;
  uint uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t *pU64_10;
  uint8_t *pU64_11;
  byte *pU8_12;
  
  if (param_4 != param_5) {
    do {
      bFlag_6 = *param_4;
      pU8_12 = param_4 + 1;
      if (bFlag_6 == 0x24) {
        if (pU8_12 == param_5) {
          uVal_8 = param_3[2];
          if ((uint64_t)param_3[3] <= uVal_8) goto LAB_1800fc4c5;
          param_3[2] = uVal_8 + 1;
          pU64_10 = param_3;
          if (0xf < (uint64_t)param_3[3]) {
            pU64_10 = (uint64_t *)*param_3;
          }
          *(uint16_t *)((int64_t)pU64_10 + uVal_8) = 0x24;
        }
        else {
          bFlag_6 = *pU8_12;
          if (bFlag_6 < 0x27) {
            if (bFlag_6 == 0x24) {
              uVal_8 = param_3[2];
              if (uVal_8 < (uint64_t)param_3[3]) {
                param_3[2] = uVal_8 + 1;
                pU64_10 = param_3;
                if (0xf < (uint64_t)param_3[3]) {
                  pU64_10 = (uint64_t *)*param_3;
                }
                *(uint16_t *)((int64_t)pU64_10 + uVal_8) = 0x24;
              }
              else {
                func_0x18008c590(param_3,1);
              }
            }
            else if (bFlag_6 == 0x26) {
              pU64_10 = *(uint64_t **)(param_2 + 0x10);
              if (*(uint64_t **)(param_2 + 0x18) != pU64_10) {
                pU64_3 = (uint8_t *)pU64_10[1];
                for (pU64_11 = (uint8_t *)*pU64_10; pU64_11 != pU64_3; pU64_11 = pU64_11 + 1) {
                  while( true ) {
                    uVal_1 = *pU64_11;
                    uVal_8 = param_3[2];
                    if ((uint64_t)param_3[3] <= uVal_8) break;
                    param_3[2] = uVal_8 + 1;
                    pU64_10 = param_3;
                    if (0xf < (uint64_t)param_3[3]) {
                      pU64_10 = (uint64_t *)*param_3;
                    }
                    *(uint8_t *)((int64_t)pU64_10 + uVal_8) = uVal_1;
                    *(uint8_t *)((int64_t)pU64_10 + uVal_8 + 1) = 0;
                    pU64_11 = pU64_11 + 1;
                    if (pU64_11 == pU64_3) goto LAB_1800fc63a;
                  }
                  func_0x18008c590(param_3,1);
                }
              }
            }
            else {
LAB_1800fc4cf:
              bFlag_6 = bFlag_6 - 0x30;
              if (bFlag_6 < 10) {
                pU8_12 = param_4 + 2;
                uVal_7 = (uint)bFlag_6;
                if ((pU8_12 == param_5) || (bFlag_2 = *pU8_12, 9 < (byte)(bFlag_2 - 0x30))) {
                  bFlag_5 = false;
                  if (bFlag_6 != 0) goto LAB_1800fc64c;
                }
                else {
                  pU8_12 = param_4 + 3;
                  uVal_7 = ((uint)bFlag_2 + ((uint)bFlag_6 + (uint)bFlag_6 * 4) * 2) - 0x30;
                  bFlag_5 = true;
                  if (uVal_7 != 0) {
LAB_1800fc64c:
                    uVal_8 = (uint64_t)uVal_7;
                    lVal_4 = *(int64_t *)(param_2 + 0x10);
                    uVal_9 = (*(int64_t *)(param_2 + 0x18) - lVal_4 >> 3) * -0x5555555555555555;
                    if (uVal_8 <= uVal_9 && uVal_9 - uVal_8 != 0) {
                      pU64_3 = *(uint8_t **)(lVal_4 + 8 + uVal_8 * 0x18);
                      for (pU64_11 = *(uint8_t **)(lVal_4 + uVal_8 * 0x18); pU64_11 != pU64_3;
                          pU64_11 = pU64_11 + 1) {
                        while( true ) {
                          uVal_1 = *pU64_11;
                          uVal_8 = param_3[2];
                          if ((uint64_t)param_3[3] <= uVal_8) break;
                          param_3[2] = uVal_8 + 1;
                          pU64_10 = param_3;
                          if (0xf < (uint64_t)param_3[3]) {
                            pU64_10 = (uint64_t *)*param_3;
                          }
                          *(uint8_t *)((int64_t)pU64_10 + uVal_8) = uVal_1;
                          *(uint8_t *)((int64_t)pU64_10 + uVal_8 + 1) = 0;
                          pU64_11 = pU64_11 + 1;
                          if (pU64_11 == pU64_3) goto LAB_1800fc2e9;
                        }
                        func_0x18008c590(param_3,1);
                      }
                    }
                    goto LAB_1800fc2e9;
                  }
                }
                uVal_8 = param_3[2];
                if (uVal_8 < (uint64_t)param_3[3]) {
                  param_3[2] = uVal_8 + 1;
                  pU64_10 = param_3;
                  if (0xf < (uint64_t)param_3[3]) {
                    pU64_10 = (uint64_t *)*param_3;
                  }
                  *(uint16_t *)((int64_t)pU64_10 + uVal_8) = 0x24;
                  uVal_8 = param_3[2];
                  uVal_9 = param_3[3];
                  if (uVal_9 <= uVal_8) goto LAB_1800fc551;
LAB_1800fc765:
                  param_3[2] = uVal_8 + 1;
                  pU64_10 = param_3;
                  if (0xf < uVal_9) {
                    pU64_10 = (uint64_t *)*param_3;
                  }
                  *(uint16_t *)((int64_t)pU64_10 + uVal_8) = 0x30;
                }
                else {
                  func_0x18008c590(param_3,1);
                  uVal_8 = param_3[2];
                  uVal_9 = param_3[3];
                  if (uVal_8 < uVal_9) goto LAB_1800fc765;
LAB_1800fc551:
                  func_0x18008c590(param_3,1);
                }
                if (bFlag_5) {
                  uVal_8 = param_3[2];
                  if ((uint64_t)param_3[3] <= uVal_8) goto LAB_1800fc4c5;
                  param_3[2] = uVal_8 + 1;
                  pU64_10 = param_3;
                  if (0xf < (uint64_t)param_3[3]) {
                    pU64_10 = (uint64_t *)*param_3;
                  }
                  *(uint16_t *)((int64_t)pU64_10 + uVal_8) = 0x30;
                }
                goto LAB_1800fc2e9;
              }
              uVal_8 = param_3[2];
              if (uVal_8 < (uint64_t)param_3[3]) {
                param_3[2] = uVal_8 + 1;
                pU64_10 = param_3;
                if (0xf < (uint64_t)param_3[3]) {
                  pU64_10 = (uint64_t *)*param_3;
                }
                *(uint16_t *)((int64_t)pU64_10 + uVal_8) = 0x24;
              }
              else {
                func_0x18008c590(param_3,1);
              }
              bFlag_6 = param_4[1];
              uVal_8 = param_3[2];
              if (uVal_8 < (uint64_t)param_3[3]) {
                param_3[2] = uVal_8 + 1;
                pU64_10 = param_3;
                if (0xf < (uint64_t)param_3[3]) {
                  pU64_10 = (uint64_t *)*param_3;
                }
                *(byte *)((int64_t)pU64_10 + uVal_8) = bFlag_6;
                *(uint8_t *)((int64_t)pU64_10 + uVal_8 + 1) = 0;
              }
              else {
                func_0x18008c590(param_3,1);
              }
            }
          }
          else if (bFlag_6 == 0x27) {
            pU64_3 = *(uint8_t **)(param_2 + 0x48);
            for (pU64_11 = *(uint8_t **)(param_2 + 0x40); pU64_11 != pU64_3; pU64_11 = pU64_11 + 1
                ) {
              uVal_1 = *pU64_11;
              uVal_8 = param_3[2];
              if (uVal_8 < (uint64_t)param_3[3]) {
                param_3[2] = uVal_8 + 1;
                pU64_10 = param_3;
                if (0xf < (uint64_t)param_3[3]) {
                  pU64_10 = (uint64_t *)*param_3;
                }
                *(uint8_t *)((int64_t)pU64_10 + uVal_8) = uVal_1;
                *(uint8_t *)((int64_t)pU64_10 + uVal_8 + 1) = 0;
              }
              else {
                func_0x18008c590(param_3,1);
              }
            }
          }
          else {
            if (bFlag_6 != 0x60) goto LAB_1800fc4cf;
            pU64_3 = *(uint8_t **)(param_2 + 0x30);
            for (pU64_11 = *(uint8_t **)(param_2 + 0x28); pU64_11 != pU64_3; pU64_11 = pU64_11 + 1
                ) {
              while( true ) {
                uVal_1 = *pU64_11;
                uVal_8 = param_3[2];
                if ((uint64_t)param_3[3] <= uVal_8) break;
                param_3[2] = uVal_8 + 1;
                pU64_10 = param_3;
                if (0xf < (uint64_t)param_3[3]) {
                  pU64_10 = (uint64_t *)*param_3;
                }
                *(uint8_t *)((int64_t)pU64_10 + uVal_8) = uVal_1;
                *(uint8_t *)((int64_t)pU64_10 + uVal_8 + 1) = 0;
                pU64_11 = pU64_11 + 1;
                if (pU64_11 == pU64_3) goto LAB_1800fc63a;
              }
              func_0x18008c590(param_3,1);
            }
          }
LAB_1800fc63a:
          pU8_12 = param_4 + 2;
        }
      }
      else {
        uVal_8 = param_3[2];
        if (uVal_8 < (uint64_t)param_3[3]) {
          param_3[2] = uVal_8 + 1;
          pU64_10 = param_3;
          if (0xf < (uint64_t)param_3[3]) {
            pU64_10 = (uint64_t *)*param_3;
          }
          *(byte *)((int64_t)pU64_10 + uVal_8) = bFlag_6;
          *(uint8_t *)((int64_t)pU64_10 + uVal_8 + 1) = 0;
          goto LAB_1800fc2e9;
        }
LAB_1800fc4c5:
        func_0x18008c590(param_3,1);
      }
LAB_1800fc2e9:
      param_4 = pU8_12;
    } while (pU8_12 != param_5);
  }
  *param_1 = param_3;
  return param_1;
}

// func_0x1800fc7e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800fc7e0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2e44;
    uVal_2 = param_1[2] ^ _UNK_1806b2e48;
    uVal_3 = param_1[3] ^ _UNK_1806b2e4c;
    *param_1 = *param_1 ^ _DAT_1806b2e40;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b2e50,0);
  }
  return;
}

// func_0x1800fc820
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800fc820(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e6c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xd6b2541;
    param_1[1][4] = param_1[1][4] ^ 0x11;
    param_1[1][5] = param_1[1][5] ^ 0x41;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1800fc850
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800fc850(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae524;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae520;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae528;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae52c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x297d914f;
    param_1[1][4] = param_1[1][4] ^ 0x17;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1800fc900
int64_t * func_0x1800fc900(int64_t *param_1,int64_t *param_2,uint64_t *param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  func_ptr_t fnPtr_6;
  bool bFlag_7;
  uint8_t uVal_8;
  int iVal_9;
  int64_t lVal_10;
  int64_t lVal_11;
  int64_t *pLong_12;
  void *pVoid_13;
  uint64_t *pU64_14;
  uint64_t uVal_15;
  uint uVal_16;
  int64_t local_60;
  uint local_58;
  uint8_t local_50 [8];
  uint64_t local_48;
  
  lVal_2 = *param_1;
  lVal_10 = *(int64_t *)(lVal_2 + 8);
  uVal_16 = 0;
  lVal_11 = lVal_2;
  if (*(char *)(lVal_10 + 0x19) == '\0') {
    pU64_14 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_14 = (uint64_t *)*param_3;
    }
    uVal_4 = param_3[2];
    lVal_3 = lVal_10;
    do {
      lVal_10 = lVal_3;
      if (*(uint64_t *)(lVal_10 + 0x38) < 0x10) {
        pVoid_13 = (void *)(lVal_10 + 0x20);
      }
      else {
        pVoid_13 = *(void **)(lVal_10 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_10 + 0x30);
      uVal_15 = uVal_5;
      if (uVal_4 < uVal_5) {
        uVal_15 = uVal_4;
      }
      iVal_9 = memcmp(pVoid_13,pU64_14,uVal_15);
      bFlag_7 = uVal_5 < uVal_4;
      if (iVal_9 != 0) {
        bFlag_7 = iVal_9 < 0;
      }
      if (bFlag_7 == false) {
        lVal_11 = lVal_10;
      }
      lVal_3 = *(int64_t *)(lVal_10 + (uint64_t)bFlag_7 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    uVal_16 = (uint)(bFlag_7 ^ 1);
    ch_1 = *(char *)(lVal_11 + 0x19);
  }
  else {
    ch_1 = *(char *)(lVal_2 + 0x19);
  }
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_11 + 0x38) < 0x10) {
      pVoid_13 = (void *)(lVal_11 + 0x20);
    }
    else {
      pVoid_13 = *(void **)(lVal_11 + 0x20);
    }
    uVal_4 = *(uint64_t *)(lVal_11 + 0x30);
    uVal_5 = param_3[2];
    pU64_14 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_14 = (uint64_t *)*param_3;
    }
    uVal_15 = uVal_5;
    if (uVal_4 < uVal_5) {
      uVal_15 = uVal_4;
    }
    iVal_9 = memcmp(pU64_14,pVoid_13,uVal_15);
    bFlag_7 = uVal_4 <= uVal_5;
    if (iVal_9 != 0) {
      bFlag_7 = -1 < iVal_9;
    }
    if (bFlag_7) {
      uVal_8 = 0;
      goto LAB_1800fca7c;
    }
  }
  if (param_1[1] == 0x38e38e38e38e38e) {
    func_0x1800a17e0();
    fnPtr_6 = (func_ptr_t )swi(3);
    pLong_12 = (int64_t *)(*fnPtr_6)();
    return pLong_12;
  }
  func_0x1800fcaa0(local_50,param_1,lVal_2,param_3,param_4);
  local_60 = lVal_10;
  local_58 = uVal_16;
  lVal_11 = func_0x1800a1550(param_1,&local_60,local_48);
  uVal_8 = 1;
LAB_1800fca7c:
  *param_2 = lVal_11;
  *(uint8_t *)(param_2 + 1) = uVal_8;
  return param_2;
}

// func_0x1800fcaa0
void func_0x1800fcaa0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4, uint64_t *param_5)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t *pU64_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t *pU64_9;
  uint64_t uVal_10;
  
  *param_1 = param_2;
  param_1[1] = 0;
  pU64_6 = (uint64_t *)func_0x180672de0(0x48);
  param_1[1] = pU64_6;
  *(uint8_t (*)[16])(pU64_6 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 4) = ZEXT816(0);
  uVal_1 = param_4[2];
  if (0xf < (uint64_t)param_4[3]) {
    param_4 = (uint64_t *)*param_4;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      pU64_6[6] = uVal_1;
      pU64_6[7] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)param_4 + 4);
      uVal_4 = *(uint32_t *)(param_4 + 1);
      uVal_5 = *(uint32_t *)((int64_t)param_4 + 0xc);
      *(uint32_t *)(pU64_6 + 4) = *(uint32_t *)param_4;
      *(uint32_t *)((int64_t)pU64_6 + 0x24) = uVal_3;
      *(uint32_t *)(pU64_6 + 5) = uVal_4;
      *(uint32_t *)((int64_t)pU64_6 + 0x2c) = uVal_5;
      pU64_9 = pU64_6;
    }
    else {
      uVal_7 = uVal_1 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_7) {
        uVal_10 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        uVal_7 = func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_10 + 0x28);
        uVal_7 = lVal_8 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_7 - 8) = lVal_8;
      }
      pU64_6[4] = uVal_7;
      pU64_6[6] = uVal_1;
      pU64_6[7] = uVal_10;
      func_0x1806aa960(uVal_7,param_4,uVal_1 + 1);
      pU64_9 = (uint64_t *)param_1[1];
    }
    pU64_6[8] = *param_5;
    *pU64_9 = param_3;
    *(uint64_t *)(param_1[1] + 8) = param_3;
    *(uint64_t *)(param_1[1] + 0x10) = param_3;
    *(uint8_t *)(param_1[1] + 0x18) = 0;
    *(uint8_t *)(param_1[1] + 0x19) = 0;
    return;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@1800fcbe0
void Unwind_1800fcbe0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x48);
  }
  return;
}

// Unwind@1800fcc20
void Unwind_1800fcc20(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x48);
  }
  return;
}

// func_0x1800fcc60
int64_t func_0x1800fcc60(int64_t *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  int64_t lVal_5;
  bool bFlag_6;
  void *pVoid_7;
  uint64_t *_Buf2;
  uint64_t uVal_8;
  int64_t lVal_9;
  
  lVal_5 = *param_1;
  lVal_9 = *(int64_t *)(lVal_5 + 8);
  if (*(char *)(lVal_9 + 0x19) == '\0') {
    _Buf2 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      _Buf2 = (uint64_t *)*param_2;
    }
    uVal_1 = param_2[2];
    do {
      if (*(uint64_t *)(lVal_9 + 0x38) < 0x10) {
        pVoid_7 = (void *)(lVal_9 + 0x20);
      }
      else {
        pVoid_7 = *(void **)(lVal_9 + 0x20);
      }
      uVal_2 = *(uint64_t *)(lVal_9 + 0x30);
      uVal_8 = uVal_2;
      if (uVal_1 < uVal_2) {
        uVal_8 = uVal_1;
      }
      iVal_4 = memcmp(pVoid_7,_Buf2,uVal_8);
      bFlag_6 = uVal_2 < uVal_1;
      if (iVal_4 != 0) {
        bFlag_6 = iVal_4 < 0;
      }
      if (bFlag_6 == false) {
        lVal_5 = lVal_9;
      }
      lVal_9 = *(int64_t *)(lVal_9 + (uint64_t)bFlag_6 * 0x10);
    } while (*(char *)(lVal_9 + 0x19) == '\0');
  }
  if (*(char *)(lVal_5 + 0x19) == '\0') {
    if (*(uint64_t *)(lVal_5 + 0x38) < 0x10) {
      pVoid_7 = (void *)(lVal_5 + 0x20);
      uVal_1 = *(uint64_t *)(lVal_5 + 0x30);
      uVal_2 = param_2[2];
      uVal_8 = param_2[3];
    }
    else {
      pVoid_7 = *(void **)(lVal_5 + 0x20);
      uVal_1 = *(uint64_t *)(lVal_5 + 0x30);
      uVal_2 = param_2[2];
      uVal_8 = param_2[3];
    }
    if (0xf < uVal_8) {
      param_2 = (uint64_t *)*param_2;
    }
    uVal_8 = uVal_2;
    if (uVal_1 < uVal_2) {
      uVal_8 = uVal_1;
    }
    iVal_4 = memcmp(param_2,pVoid_7,uVal_8);
    bFlag_6 = uVal_1 <= uVal_2;
    if (iVal_4 != 0) {
      bFlag_6 = -1 < iVal_4;
    }
    if (bFlag_6) {
      return lVal_5 + 0x40;
    }
  }
  func_0x1806744f0("invalid map<K, T> key");
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_5 = (*fnPtr_3)();
  return lVal_5;
}

// Unwind@1800fcf70
void Unwind_1800fcf70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3078) = 0;
  return;
}

// func_0x1800fcfb0
uint64_t func_0x1800fcfb0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x2d8);
}

// func_0x1800fd010
int64_t func_0x1800fd010(int64_t param_1)
{
  return param_1 + 0x2e8;
}

// func_0x1800fd070
uint16_t func_0x1800fd070(int64_t param_1)
{
  return *(uint16_t *)(param_1 + 0x2f0);
}

// func_0x1800fd0d0
uint64_t func_0x1800fd0d0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x2f4);
}

// func_0x1800fd130
int64_t func_0x1800fd130(int64_t param_1)
{
  return param_1 + 0x19f70;
}

// func_0x1800fd190
int64_t func_0x1800fd190(int64_t param_1)
{
  return param_1 + 0x19f80;
}

// func_0x1800fd1f0
int64_t func_0x1800fd1f0(int64_t param_1)
{
  return param_1 + 0x19fd5;
}

// func_0x1800fd250
uint64_t func_0x1800fd250(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0xc97690);
}

// func_0x1800fd2b0
int64_t func_0x1800fd2b0(int64_t param_1)
{
  return param_1 + 0x6b8;
}

// func_0x1800fd310
int64_t func_0x1800fd310(int64_t param_1)
{
  return param_1 + 0x718;
}

// func_0x1800fd370
int64_t func_0x1800fd370(int64_t param_1)
{
  return param_1 + 0x760;
}

// func_0x1800fd3d0
int64_t func_0x1800fd3d0(int64_t param_1)
{
  return param_1 + 0x790;
}

// func_0x1800fd430
int64_t func_0x1800fd430(int64_t param_1)
{
  return param_1 + 0x8c8;
}

// func_0x1800fd490
int64_t func_0x1800fd490(int64_t param_1)
{
  return param_1 + 0x8d0;
}

// func_0x1800fd4f0
int64_t func_0x1800fd4f0(int64_t param_1)
{
  return param_1 + 0x9317a4;
}

// func_0x1800fd550
int64_t func_0x1800fd550(int64_t param_1)
{
  return param_1 + 0x9517c8;
}

// func_0x1800fd5b0
int64_t func_0x1800fd5b0(int64_t param_1)
{
  return param_1 + 0x9517cc;
}

// func_0x1800fd610
int64_t func_0x1800fd610(void)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083efc8) {
    func_0x180672ec0(&DAT_18083efc8);
    if (DAT_18083efc8 == -1) {
      lVal_1 = func_0x1800fd6e0(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083efc0 = 0;
      }
      else {
        DAT_18083efc0 = lVal_1 + *(int *)(lVal_1 + 3) + 7;
      }
      _Init_thread_footer(&DAT_18083efc8);
      return DAT_18083efc0;
    }
  }
  return DAT_18083efc0;
}

// Unwind@1800fd6b0
void Unwind_1800fd6b0(void)
{
  func_0x180672f60(&DAT_18083efc8);
  return;
}

// func_0x1800fd6e0
int64_t func_0x1800fd6e0(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x6d753b42e37aeab) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x63af45d979f1e0e9) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800fd784;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x63af45d979f1e0e9);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800fd7aa;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x63af45d979f1e0e9);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x1a5ea531U) + -0x17;
  }
LAB_1800fd784:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800fd7aa:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800fd7c0
func_ptr_t * func_0x1800fd7c0(func_ptr_t *param_1,int *param_2)
{
  func_ptr_t fnPtr_1;
  uint32_t uVal_2;
  func_ptr_t fnPtr_3;
  uint8_t uVal_4;
  
  *param_1 = func_0x1800fe430;
  param_1[1] = (func_ptr_t )0x0;
  param_1[3] = (func_ptr_t )0x0;
  *(uint64_t *)((int64_t)param_1 + 0x1e) = 0;
  *(uint32_t *)(param_1 + 5) = 1;
  if (*(int64_t *)(param_2 + 8) != 0) {
    fnPtr_1 = *(func_ptr_t *)(param_2 + 10);
    param_1[2] = fnPtr_1;
    if (fnPtr_1 != (func_ptr_t )0x0) {
      fnPtr_3 = (func_ptr_t )_malloc_base(fnPtr_1);
      func_0x1806aa960(fnPtr_3,*(uint64_t *)(param_2 + 8),fnPtr_1);
      param_1[1] = fnPtr_3;
    }
  }
  uVal_2 = 0;
  if (*param_2 - 1U < 5) {
    uVal_2 = *(uint32_t *)(&DAT_1806b4f60 + (uint64_t)(*param_2 - 1U) * 4);
  }
  uVal_4 = 2;
  if (*(char *)(param_2 + 4) != '\x02') {
    uVal_4 = *(char *)(param_2 + 4) == '\x01';
  }
  param_1[3] = *(func_ptr_t *)(param_2 + 1);
  *(uint32_t *)(param_1 + 4) = uVal_2;
  *(uint8_t *)((int64_t)param_1 + 0x24) = uVal_4;
  *(uint8_t *)((int64_t)param_1 + 0x25) = 0;
  *(uint32_t *)(param_1 + 5) = 1;
  return param_1;
}

// func_0x1800fd880
func_ptr_t * func_0x1800fd880(func_ptr_t *param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  func_ptr_t fnPtr_2;
  
  if (param_1[1] != *(func_ptr_t *)(param_2 + 8)) {
    if (param_1[1] != (func_ptr_t )0x0) {
      param_1[1] = (func_ptr_t )0x0;
      (**param_1)();
    }
    fnPtr_1 = *(func_ptr_t *)(param_2 + 0x10);
    param_1[2] = fnPtr_1;
    if (fnPtr_1 != (func_ptr_t )0x0) {
      fnPtr_2 = (func_ptr_t )_malloc_base(fnPtr_1);
      func_0x1806aa960(fnPtr_2,*(uint64_t *)(param_2 + 8),fnPtr_1);
      param_1[1] = fnPtr_2;
    }
  }
  return param_1;
}

// Unwind@1800fd8f0
void Unwind_1800fd8f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800fd910
int64_t func_0x1800fd910(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x49496371bd4ab4f) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x7f7dbc9b0bc4622e) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800fd9b4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x7f7dbc9b0bc4622e);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800fd9da;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x7f7dbc9b0bc4622e);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x74b9deb5U) + -0x17;
  }
LAB_1800fd9b4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800fd9da:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800fd9f0
void func_0x1800fd9f0(uint8_t (*param_1)[16],uint64_t param_2,uint64_t param_3, uint64_t param_4)
{
  func_ptr_t *ptr2_Char_1;
  uint64_t uVal_2;
  func_ptr_t *ptr2_Char_3;
  uint64_t uVal_4;
  
  uVal_4 = 0xfffffffffffffffe;
  ptr2_Char_3 = *(func_ptr_t **)*param_1;
  if (ptr2_Char_3 != (func_ptr_t *)0x0) {
    ptr2_Char_1 = *(func_ptr_t **)(*param_1 + 8);
    if (ptr2_Char_3 == ptr2_Char_1) {
      uVal_2 = *(int64_t *)param_1[1] - (int64_t)ptr2_Char_3;
    }
    else {
      do {
        if (ptr2_Char_3[1] != (func_ptr_t )0x0) {
          (**ptr2_Char_3)();
        }
        ptr2_Char_3 = ptr2_Char_3 + 6;
      } while (ptr2_Char_3 != ptr2_Char_1);
      ptr2_Char_3 = *(func_ptr_t **)*param_1;
      uVal_2 = *(int64_t *)param_1[1] - (int64_t)ptr2_Char_3;
    }
    if (0xfff < uVal_2) {
      if (0x1f < (uint64_t)((int64_t)ptr2_Char_3 + (-8 - (int64_t)ptr2_Char_3[-1]))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = uVal_2 + 0x27;
      ptr2_Char_3 = (func_ptr_t *)ptr2_Char_3[-1];
    }
    thunk_FUN_180695dd0(ptr2_Char_3,uVal_2,param_3,param_4,uVal_4);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// Unwind@1800fdaa0
void Unwind_1800fdaa0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800fdac0
uint8_t (*func_0x1800fdac0(uint8_t (*param_1)[16],int64_t param_2))[16]
{
  func_ptr_t *ptr2_Char_1;
  func_ptr_t fnPtr_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083efd8) {
    func_0x180672ec0(&DAT_18083efd8);
    if (DAT_18083efd8 == -1) {
      lVal_4 = func_0x1800fd910(&DAT_180840f80);
      if (lVal_4 == 0) {
        DAT_18083efd0 = 0;
      }
      else {
        DAT_18083efd0 = lVal_4 + *(int *)(lVal_4 + 3) + 7;
      }
      _Init_thread_footer(&DAT_18083efd8);
    }
  }
  *(int64_t *)*param_1 = DAT_18083efd0;
  ptr2_Char_1 = *(func_ptr_t **)param_1[1];
  if (ptr2_Char_1 == *(func_ptr_t **)(param_1[1] + 8)) {
    func_0x180102d60(*param_1 + 8,ptr2_Char_1,param_2);
  }
  else {
    *ptr2_Char_1 = func_0x1800fe430;
    ptr2_Char_1[1] = (func_ptr_t )0x0;
    if (*(int64_t *)(param_2 + 8) != 0) {
      fnPtr_2 = *(func_ptr_t *)(param_2 + 0x10);
      ptr2_Char_1[2] = fnPtr_2;
      if (fnPtr_2 != (func_ptr_t )0x0) {
        fnPtr_3 = (func_ptr_t )_malloc_base(fnPtr_2);
        func_0x1806aa960(fnPtr_3,*(uint64_t *)(param_2 + 8),fnPtr_2);
        ptr2_Char_1[1] = fnPtr_3;
      }
    }
    *(uint64_t *)((int64_t)ptr2_Char_1 + 0x1e) = 0;
    ptr2_Char_1[3] = (func_ptr_t )0x0;
    *(uint32_t *)(ptr2_Char_1 + 5) = 1;
    *(uint32_t *)(ptr2_Char_1 + 3) = *(uint32_t *)(param_2 + 0x18);
    *(uint32_t *)((int64_t)ptr2_Char_1 + 0x1c) = *(uint32_t *)(param_2 + 0x1c);
    *(uint32_t *)(ptr2_Char_1 + 4) = *(uint32_t *)(param_2 + 0x20);
    *(uint8_t *)((int64_t)ptr2_Char_1 + 0x24) = *(uint8_t *)(param_2 + 0x24);
    *(uint8_t *)((int64_t)ptr2_Char_1 + 0x25) = *(uint8_t *)(param_2 + 0x25);
    *(uint32_t *)(ptr2_Char_1 + 5) = *(uint32_t *)(param_2 + 0x28);
    *(int64_t *)param_1[1] = *(int64_t *)param_1[1] + 0x30;
  }
  return param_1;
}

// Unwind@1800fdc30
void Unwind_1800fdc30(void)
{
  func_0x180672f60(&DAT_18083efd8);
  return;
}

// Unwind@1800fdc60
void Unwind_1800fdc60(uint64_t param_1,int64_t param_2)
{
  func_0x1800fd9f0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1800fdc90
uint64_t func_0x1800fdc90(uint64_t param_1,uint64_t param_2)
{
  uint64_t uVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083efe8) {
    func_0x180672ec0(&DAT_18083efe8);
    if (DAT_18083efe8 == -1) {
      uVal_1 = func_0x1800fddb0(&DAT_180840f80);
      DAT_18083efe0 = (func_ptr_t )func_0x180073070(uVal_1,1);
      _Init_thread_footer(&DAT_18083efe8);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083eff8) {
    func_0x180672ec0(&DAT_18083eff8);
    if (DAT_18083eff8 == -1) {
      DAT_18083eff0 = DAT_18083efe0;
      _Init_thread_footer(&DAT_18083eff8);
    }
  }
  (*DAT_18083eff0)(param_1,param_2);
  return param_2;
}

// Unwind@1800fdd80
void Unwind_1800fdd80(void)
{
  func_0x180672f60(&DAT_18083efe8);
  return;
}

// func_0x1800fddb0
int64_t func_0x1800fddb0(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xf023277a526cc7c) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x657fc317d83eba47) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800fde54;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x657fc317d83eba47);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800fde7a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x657fc317d83eba47);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffbd417950U) + -0x1b;
  }
LAB_1800fde54:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800fde7a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800fde90
uint64_t * func_0x1800fde90(uint64_t *param_1,uint64_t param_2)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint64_t uVal_3;
  uint64_t local_38;
  uint uStack_30;
  uint32_t uStack_2c;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f008) {
    func_0x180672ec0(&DAT_18083f008);
    if (DAT_18083f008 == -1) {
      DAT_18083f000 = (func_ptr_t )func_0x1800fe020(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f008);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f018) {
    func_0x180672ec0(&DAT_18083f018);
    if (DAT_18083f018 == -1) {
      DAT_18083f010 = (func_ptr_t )func_0x1800fe100(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f018);
    }
  }
  local_38 = 0;
  uStack_30 = uStack_30 & 0xffffff00;
  (*DAT_18083f000)(&local_38,param_2);
  uVal_3 = *param_1;
  uVal_1 = *(uint32_t *)(param_1 + 1);
  uVal_2 = *(uint32_t *)((int64_t)param_1 + 0xc);
  *(uint32_t *)param_1 = (uint32_t)local_38;
  *(uint32_t *)((int64_t)param_1 + 4) = local_38._4_4_;
  *(uint *)(param_1 + 1) = uStack_30;
  *(uint32_t *)((int64_t)param_1 + 0xc) = uStack_2c;
  local_38 = uVal_3;
  uStack_30 = uVal_1;
  uStack_2c = uVal_2;
  (*DAT_18083f010)(&local_38);
  return param_1;
}

// Unwind@1800fdfc0
void Unwind_1800fdfc0(void)
{
  func_0x180672f60(&DAT_18083f008);
  return;
}

// Unwind@1800fdff0
void Unwind_1800fdff0(void)
{
  func_0x180672f60(&DAT_18083f018);
  return;
}

// func_0x1800fe020
int64_t func_0x1800fe020(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xd5e9f4b903e98d7) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x78fef858f34e2df0) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800fe0c4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x78fef858f34e2df0);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800fe0ea;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x78fef858f34e2df0);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff8bb0d5a8U) + -0xb;
  }
LAB_1800fe0c4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800fe0ea:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800fe100
int64_t func_0x1800fe100(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x14f84fba21c80d0) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x3c0b535534bf7f6c) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800fe1a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x3c0b535534bf7f6c);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800fe1ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x3c0b535534bf7f6c);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x8b42c39U) + -0xc;
  }
LAB_1800fe1a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800fe1ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800fe1e0
uint64_t func_0x1800fe1e0(uint64_t param_1)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f028) {
    func_0x180672ec0(&DAT_18083f028);
    if (DAT_18083f028 == -1) {
      DAT_18083f020 = (func_ptr_t )func_0x1800fe2f0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f028);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f038) {
    func_0x180672ec0(&DAT_18083f038);
    if (DAT_18083f038 == -1) {
      DAT_18083f030 = DAT_18083f020;
      _Init_thread_footer(&DAT_18083f038);
    }
  }
  (*DAT_18083f030)(param_1);
  return param_1;
}

// Unwind@1800fe2c0
void Unwind_1800fe2c0(void)
{
  func_0x180672f60(&DAT_18083f028);
  return;
}

// func_0x1800fe2f0
int64_t func_0x1800fe2f0(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x529f953d436b334) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x4bfc51255f6f45bb) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800fe394;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x4bfc51255f6f45bb);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800fe3ba;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x4bfc51255f6f45bb);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x1493149eU) + -0x24;
  }
LAB_1800fe394:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800fe3ba:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800fe3d0
func_ptr_t * func_0x1800fe3d0(func_ptr_t *param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  func_ptr_t fnPtr_2;
  
  *param_1 = func_0x1800fe430;
  param_1[1] = (func_ptr_t )0x0;
  if (*(int64_t *)(param_2 + 8) != 0) {
    fnPtr_1 = *(func_ptr_t *)(param_2 + 0x10);
    param_1[2] = fnPtr_1;
    if (fnPtr_1 != (func_ptr_t )0x0) {
      fnPtr_2 = (func_ptr_t )_malloc_base(fnPtr_1);
      func_0x1806aa960(fnPtr_2,*(uint64_t *)(param_2 + 8),fnPtr_1);
      param_1[1] = fnPtr_2;
    }
  }
  return param_1;
}

// func_0x1800fe430
void func_0x1800fe430(LPVOID param_1)
{
  uint32_t *pU64_1;
  BOOL BVar2;
  DWORD DVar3;
  uint32_t uVal_4;
  
  if (param_1 != (LPVOID)0x0) {
    if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_180842c78,0,param_1), BVar2 == 0)) {
      DVar3 = GetLastError();
      uVal_4 = func_0x18068244c(DVar3);
      pU64_1 = (uint32_t *)func_0x1806823dc();
      *pU64_1 = uVal_4;
    }
    return;
  }
  return;
}

// func_0x1800fe440
uint32_t * func_0x1800fe440(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(uint8_t *)(param_1 + 4) = *(uint8_t *)(param_2 + 4);
  if (*(int64_t *)(param_1 + 8) != *(int64_t *)(param_2 + 8)) {
    if (*(int64_t *)(param_1 + 8) != 0) {
      *(uint64_t *)(param_1 + 8) = 0;
      (**(func_ptr_t *)(param_1 + 6))();
    }
    lVal_1 = *(int64_t *)(param_2 + 10);
    *(int64_t *)(param_1 + 10) = lVal_1;
    if (lVal_1 != 0) {
      uVal_2 = _malloc_base(lVal_1);
      func_0x1806aa960(uVal_2,*(uint64_t *)(param_2 + 8),lVal_1);
      *(uint64_t *)(param_1 + 8) = uVal_2;
    }
  }
  return param_1;
}

// Unwind@1800fe4d0
void Unwind_1800fe4d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800fe4f0
uint64_t func_0x1800fe4f0(uint64_t param_1,uint64_t param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f048) {
    func_0x180672ec0(&DAT_18083f048);
    if (DAT_18083f048 == -1) {
      DAT_18083f040 = (func_ptr_t )func_0x1800fe600(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f048);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f058) {
    func_0x180672ec0(&DAT_18083f058);
    if (DAT_18083f058 == -1) {
      DAT_18083f050 = DAT_18083f040;
      _Init_thread_footer(&DAT_18083f058);
    }
  }
  (*DAT_18083f050)(param_1,param_2);
  return param_2;
}

// Unwind@1800fe5d0
void Unwind_1800fe5d0(void)
{
  func_0x180672f60(&DAT_18083f048);
  return;
}

// func_0x1800fe600
int64_t func_0x1800fe600(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x8ccecae0dcb5a84) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x6669cefcb20851fe) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800fe6a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x6669cefcb20851fe);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800fe6ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x6669cefcb20851fe);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffd4619f01U) + -0x11;
  }
LAB_1800fe6a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800fe6ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800fe6e0
void func_0x1800fe6e0(uint64_t param_1,uint64_t param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f068) {
    func_0x180672ec0(&DAT_18083f068);
    if (DAT_18083f068 == -1) {
      DAT_18083f060 = (func_ptr_t )func_0x1800fe7f0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f068);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f078) {
    func_0x180672ec0(&DAT_18083f078);
    if (DAT_18083f078 == -1) {
      DAT_18083f070 = DAT_18083f060;
      _Init_thread_footer(&DAT_18083f078);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001800fe750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f070)(param_1,param_2);
  return;
}

// Unwind@1800fe7c0
void Unwind_1800fe7c0(void)
{
  func_0x180672f60(&DAT_18083f068);
  return;
}

// func_0x1800fe7f0
int64_t func_0x1800fe7f0(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xb592ed63287cdef) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x31e07df0d4edb77b) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800fe894;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x31e07df0d4edb77b);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800fe8ba;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x31e07df0d4edb77b);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffe50dca8aU) + -0x15;
  }
LAB_1800fe894:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800fe8ba:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800fe8d0
void func_0x1800fe8d0(uint64_t param_1)
{
  int iVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_48 [40];
  int64_t local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  lVal_3 = DAT_18083f080;
  if (DAT_18083f080 == 0) {
    lVal_5 = (DAT_180840fb0 & 0xd3c0c90b7825ade) * 0x10;
    lVal_4 = *(int64_t *)(DAT_180840f98 + 8 + lVal_5);
    lVal_3 = -0x20;
    if (lVal_4 != DAT_180840f88) {
      if (*(int64_t *)(lVal_4 + 0x10) != -0x5cb869c6bc5e968b) {
        lVal_5 = *(int64_t *)(DAT_180840f98 + lVal_5);
        lVal_6 = lVal_4;
        do {
          if (lVal_6 == lVal_5) goto LAB_1800fe9a9;
          lVal_6 = *(int64_t *)(lVal_6 + 8);
        } while (*(int64_t *)(lVal_6 + 0x10) != -0x5cb869c6bc5e968b);
        do {
          if (lVal_4 == lVal_5) {
            func_0x1806744f0("invalid unordered_map<K, T> key");
            goto LAB_1800fe9de;
          }
          lVal_4 = *(int64_t *)(lVal_4 + 8);
        } while (*(int64_t *)(lVal_4 + 0x10) != -0x5cb869c6bc5e968b);
      }
      iVal_1 = *(int *)(lVal_4 + 0x18);
      func_0x18063eef0(&local_20);
      local_20 = ((int64_t)iVal_1 ^ 0xffffffffe0e6ff4cU) + local_20;
      lVal_4 = local_20 + -0x20;
      lVal_3 = -0x20;
      if (lVal_4 != 0) {
        lVal_3 = lVal_4 + *(int *)(local_20 + -0x1d) + -0x19;
      }
    }
  }
LAB_1800fe9a9:
  DAT_18083f080 = lVal_3;
  (**(func_ptr_t *)(*(int64_t *)(DAT_18083f080 + 0x20) + 8))(DAT_18083f080 + 0x20,param_1);
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return;
  }
LAB_1800fe9de:
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1800fe9f0
void func_0x1800fe9f0(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  func_0x1800feb00();
  lVal_3 = *(int64_t *)(param_1 + 0x238);
  if (lVal_3 != 0) {
    uVal_6 = *(int64_t *)(param_1 + 0x248) - lVal_3;
    lVal_5 = lVal_3;
    if (0xfff < uVal_6) {
      lVal_5 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_6);
    *(uint8_t (*)[16])(param_1 + 0x238) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x248) = 0;
  }
  pLong_4 = *(int64_t **)(param_1 + 0x1b8);
  if (pLong_4 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_4 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_4)(pLong_4);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  pLong_4 = *(int64_t **)(param_1 + 0x1a0);
  if (pLong_4 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_4 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_4)(pLong_4);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
  func_0x1800fec70(param_1 + 0x58);
  pLong_4 = *(int64_t **)(param_1 + 0x50);
  if (pLong_4 != (int64_t *)0x0) {
    LOCK();
    pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
    *pInt_2 = *pInt_2 + -1;
    UNLOCK();
    if (*pInt_2 == 0) {
      (**(func_ptr_t *)(*pLong_4 + 8))();
    }
  }
  pLong_4 = *(int64_t **)(param_1 + 0x10);
  if (pLong_4 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_4 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_4)(pLong_4);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800feaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
        return;
      }
    }
  }
  return;
}

// func_0x1800feb00
void func_0x1800feb00(int64_t param_1)
{
  int *pInt_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  
  if (*(int64_t *)(param_1 + 0x198) != 0) {
    pInt_1 = (int *)(*(int64_t *)(param_1 + 0x1a0) + 8);
    *pInt_1 = *pInt_1 + -1;
    pLong_3 = *(int64_t **)(param_1 + 0x1a0);
    *(uint8_t (*)[16])(param_1 + 0x198) = ZEXT816(0);
    if (pLong_3 != (int64_t *)0x0) {
      LOCK();
      pLong_2 = pLong_3 + 1;
      *(int *)pLong_2 = *(int *)pLong_2 + -1;
      UNLOCK();
      if (*(int *)pLong_2 == 0) {
        (**(func_ptr_t *)*pLong_3)(pLong_3);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_3 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
        }
      }
    }
  }
  if (*(int64_t *)(param_1 + 0x1b0) != 0) {
    pInt_1 = (int *)(*(int64_t *)(param_1 + 0x1b8) + 8);
    *pInt_1 = *pInt_1 + -1;
    pLong_3 = *(int64_t **)(param_1 + 0x1b8);
    *(uint8_t (*)[16])(param_1 + 0x1b0) = ZEXT816(0);
    if (pLong_3 != (int64_t *)0x0) {
      LOCK();
      pLong_2 = pLong_3 + 1;
      *(int *)pLong_2 = *(int *)pLong_2 + -1;
      UNLOCK();
      if (*(int *)pLong_2 == 0) {
        (**(func_ptr_t *)*pLong_3)(pLong_3);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_3 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
        }
      }
    }
  }
  if (*(int64_t *)(param_1 + 8) != 0) {
    pInt_1 = (int *)(*(int64_t *)(param_1 + 0x10) + 8);
    *pInt_1 = *pInt_1 + -1;
    pLong_3 = *(int64_t **)(param_1 + 0x10);
    *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
    if (pLong_3 != (int64_t *)0x0) {
      LOCK();
      pLong_2 = pLong_3 + 1;
      *(int *)pLong_2 = *(int *)pLong_2 + -1;
      UNLOCK();
      if (*(int *)pLong_2 == 0) {
        (**(func_ptr_t *)*pLong_3)(pLong_3);
        LOCK();
        pInt_1 = (int *)((int64_t)pLong_3 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
        }
      }
    }
  }
  *(uint8_t *)(param_1 + 0x1c4) = 0;
  *(uint8_t *)(param_1 + 0x41) = 0;
  *(uint8_t *)(param_1 + 0x58) = 0;
  if (*(int64_t *)(param_1 + 0x60) != *(int64_t *)(param_1 + 0x68)) {
    *(int64_t *)(param_1 + 0x68) = *(int64_t *)(param_1 + 0x60);
  }
  if (*(int64_t *)(param_1 + 0xc0) != *(int64_t *)(param_1 + 200)) {
    *(int64_t *)(param_1 + 200) = *(int64_t *)(param_1 + 0xc0);
  }
  if (*(int64_t *)(param_1 + 0xf0) != *(int64_t *)(param_1 + 0xf8)) {
    *(int64_t *)(param_1 + 0xf8) = *(int64_t *)(param_1 + 0xf0);
  }
  *(uint64_t *)(param_1 + 0x186) = 0;
  *(uint64_t *)(param_1 + 0x180) = 0;
  *(uint8_t (*)[16])(param_1 + 0x1c8) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1d6) = ZEXT816(0);
  *(uint8_t *)(param_1 + 0x1ea) = 1;
  *(uint8_t (*)[16])(param_1 + 0x1ec) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1fa) = ZEXT816(0);
  *(uint8_t *)(param_1 + 0x20e) = 1;
  return;
}

// func_0x1800fec70
void func_0x1800fec70(uint8_t *param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  *param_1 = 0;
  if (*(int64_t *)(param_1 + 8) != *(int64_t *)(param_1 + 0x10)) {
    *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 8);
  }
  if (*(int64_t *)(param_1 + 0x68) != *(int64_t *)(param_1 + 0x70)) {
    *(int64_t *)(param_1 + 0x70) = *(int64_t *)(param_1 + 0x68);
  }
  if (*(int64_t *)(param_1 + 0x98) != *(int64_t *)(param_1 + 0xa0)) {
    *(int64_t *)(param_1 + 0xa0) = *(int64_t *)(param_1 + 0x98);
  }
  *(uint64_t *)(param_1 + 0x12e) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  lVal_1 = *(int64_t *)(param_1 + 0x110);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x120) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0x110) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x120) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 0xf8);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x108) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0xf8) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x108) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 0xe0);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0xf0) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0xe0) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0xf0) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 200);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0xd8) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 200) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0xd8) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 0xb0);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0xc0) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0xb0) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0xc0) = 0;
  }
  lVal_1 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x98);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0xa8) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0x98) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0xa8) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 0x80);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x90) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0x80) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x90) = 0;
  }
  lVal_1 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x68);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x78) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0x68) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x78) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 0x50);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x60) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0x50) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x60) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 0x38);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x48) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0x38) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x48) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 0x20);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x30) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) goto LAB_1800ff08d;
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 0x20) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x30) = 0;
  }
  lVal_1 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 8);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x18) - lVal_1;
    lVal_2 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_2 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_2)) {
LAB_1800ff08d:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_3 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_3);
    *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}

// func_0x1800ff090
void func_0x1800ff090(uint8_t *param_1)
{
  *param_1 = 0;
  if (*(int64_t *)(param_1 + 8) != *(int64_t *)(param_1 + 0x10)) {
    *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 8);
  }
  if (*(int64_t *)(param_1 + 0x68) != *(int64_t *)(param_1 + 0x70)) {
    *(int64_t *)(param_1 + 0x70) = *(int64_t *)(param_1 + 0x68);
  }
  if (*(int64_t *)(param_1 + 0x98) != *(int64_t *)(param_1 + 0xa0)) {
    *(int64_t *)(param_1 + 0xa0) = *(int64_t *)(param_1 + 0x98);
  }
  *(uint64_t *)(param_1 + 0x12e) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  return;
}

// func_0x1800ff0e0
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int64_t func_0x1800ff0e0(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  int64_t lVal_4;
  uint16_t unaff_retaddr;
  uint8_t in_stack_00000002 [16];
  uint8_t auStack_38 [46];
  uint16_t uStack_a;
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_4 = *(int64_t *)(param_1 + 0x60);
  if (lVal_4 == *(int64_t *)(param_1 + 0x68)) {
    uStack_a = 0xffff;
    if ((((*(ushort *)(param_1 + 0x1e8) | *(ushort *)(param_1 + 0x1c8)) == 0) &&
        (auArr_2._2_8_ = local_8, auArr_2._0_2_ = 0xffff, auArr_2._12_4_ = in_stack_00000002._0_4_,
        auArr_2._10_2_ = unaff_retaddr,
        (in_stack_00000002 ^ *(uint8_t (*)[16])(param_1 + 0x1d6) |
        auArr_2 ^ *(uint8_t (*)[16])(param_1 + 0x1ca)) == (uint8_t  [16])0x0)) ||
       (((*(ushort *)(param_1 + 0x20c) | *(ushort *)(param_1 + 0x1ec)) == 0 &&
        (auArr_3._2_8_ = local_8, auArr_3._0_2_ = 0xffff, auArr_3._12_4_ = in_stack_00000002._0_4_,
        auArr_3._10_2_ = unaff_retaddr,
        (in_stack_00000002 ^ *(uint8_t (*)[16])(param_1 + 0x1fa) |
        auArr_3 ^ *(uint8_t (*)[16])(param_1 + 0x1ee)) == (uint8_t  [16])0x0)))) {
      lVal_4 = 0;
      goto LAB_1800ff0ff;
    }
    lVal_4 = 0;
    if ((*(char *)(param_1 + 0x1c4) != '\x01') || (*(int *)(param_1 + 0x1c0) == 0))
    goto LAB_1800ff0ff;
  }
  lVal_4 = CONCAT71((int7)((uint64_t)lVal_4 >> 8),1);
LAB_1800ff0ff:
  if (DAT_18083cf40 != (local_8 ^ (uint64_t)auStack_38)) {
    func_0x180673080(local_8 ^ (uint64_t)auStack_38);
    fnPtr_1 = (func_ptr_t )swi(3);
    lVal_4 = (*fnPtr_1)();
    return lVal_4;
  }
  return lVal_4;
}

// func_0x1800ff1e0
void func_0x1800ff1e0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t *pLong_1;
  int *pInt_2;
  byte bFlag_3;
  int64_t *pLong_4;
  func_ptr_t fnPtr_5;
  int64_t lVal_6;
  uint32_t local_220;
  int64_t *local_218 [2];
  uint8_t *local_208;
  uint8_t local_200 [328];
  uint8_t local_b8 [72];
  uint8_t local_70;
  int64_t local_68 [3];
  int64_t *local_50;
  uint8_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083f090) && (func_0x180672ec0(&DAT_18083f090), DAT_18083f090 == -1)) {
    lVal_6 = func_0x1800ff460(&DAT_180840f80);
    if (lVal_6 == 0) {
      DAT_18083f088 = (func_ptr_t )0x0;
    }
    else {
      DAT_18083f088 = (func_ptr_t )(lVal_6 + *(int *)(lVal_6 + 1) + 5);
    }
    _Init_thread_footer(&DAT_18083f090);
  }
  fnPtr_5 = DAT_18083f088;
  local_70 = 0;
  local_40 = 0;
  func_0x1806ab010(local_200,0,0x148);
  local_208 = local_b8;
  local_218[0] = local_68;
  local_218[1] = (int64_t *)0x0;
  local_220 = 0;
  (*fnPtr_5)(param_1,param_2,param_3,local_200,0);
  lVal_6 = 0x140;
  do {
    bFlag_3 = local_200[lVal_6 + -8];
    if (bFlag_3 < 2) {
      if (bFlag_3 != 0) {
        pLong_4 = *(int64_t **)((int64_t)local_218 + lVal_6 + 8);
        if (pLong_4 != (int64_t *)0x0) {
          LOCK();
          pLong_1 = pLong_4 + 1;
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (**(func_ptr_t *)*pLong_4)(pLong_4);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
        pLong_4 = *(int64_t **)((int64_t)&local_220 + lVal_6);
joined_r0x0001800ff30d:
        if (pLong_4 != (int64_t *)0x0) {
          LOCK();
          pLong_1 = pLong_4 + 1;
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (**(func_ptr_t *)*pLong_4)(pLong_4);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
      }
    }
    else if (bFlag_3 == 2) {
      pLong_4 = *(int64_t **)((int64_t)local_218 + lVal_6);
      goto joined_r0x0001800ff30d;
    }
    lVal_6 = lVal_6 + -0x28;
    if (lVal_6 == 0) {
      switch(local_40) {
      case 1:
      case 2:
      case 3:
        if (local_50 != (int64_t *)0x0) {
          LOCK();
          pLong_4 = local_50 + 1;
          *(int *)pLong_4 = *(int *)pLong_4 + -1;
          UNLOCK();
          if (*(int *)pLong_4 == 0) {
            (**(func_ptr_t *)*local_50)(local_50);
            LOCK();
            pInt_2 = (int *)((int64_t)local_50 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*local_50 + 8))(local_50);
            }
          }
        }
      }
      return;
    }
  } while( true );
}

// Unwind@1800ff3e0
void Unwind_1800ff3e0(void)
{
  func_0x180672f60(&DAT_18083f090);
  return;
}

// Unwind@1800ff420
void Unwind_1800ff420(uint64_t param_1,int64_t param_2)
{
  func_0x1800ff540(param_2 + 0x48);
  func_0x1800ff5f0(param_2 + 0x1e0);
  return;
}

// func_0x1800ff460
int64_t func_0x1800ff460(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xdff76af0322a6ae) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x64dbb5d88835163d) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800ff504;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x64dbb5d88835163d);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800ff52a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x64dbb5d88835163d);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffeceea3e4U) + -0x16;
  }
LAB_1800ff504:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800ff52a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800ff540
void func_0x1800ff540(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  byte bFlag_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  
  lVal_5 = 0x140;
  do {
    bFlag_3 = *(byte *)(param_1 + -8 + lVal_5);
    if (bFlag_3 < 2) {
      if (bFlag_3 != 0) {
        pLong_4 = *(int64_t **)(param_1 + -0x10 + lVal_5);
        if (pLong_4 != (int64_t *)0x0) {
          LOCK();
          pLong_1 = pLong_4 + 1;
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (**(func_ptr_t *)*pLong_4)(pLong_4);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
        pLong_4 = *(int64_t **)(param_1 + -0x20 + lVal_5);
joined_r0x0001800ff5bd:
        if (pLong_4 != (int64_t *)0x0) {
          LOCK();
          pLong_1 = pLong_4 + 1;
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (**(func_ptr_t *)*pLong_4)(pLong_4);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_4 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
      }
    }
    else if (bFlag_3 == 2) {
      pLong_4 = *(int64_t **)(param_1 + -0x18 + lVal_5);
      goto joined_r0x0001800ff5bd;
    }
    lVal_5 = lVal_5 + -0x28;
    if (lVal_5 == 0) {
      return;
    }
  } while( true );
}

// func_0x1800ff5f0
void func_0x1800ff5f0(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  
  switch(*(uint8_t *)(param_1 + 0x28)) {
  case 1:
  case 2:
  case 3:
    pLong_3 = *(int64_t **)(param_1 + 0x18);
    if (pLong_3 != (int64_t *)0x0) {
      LOCK();
      pLong_1 = pLong_3 + 1;
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (**(func_ptr_t *)*pLong_3)(pLong_3);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_3 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800ff637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
          return;
        }
      }
    }
  }
  return;
}

// func_0x1800ff650
/* WARNING: Removing unreachable block (ram,0x0001800ff701) */
/* WARNING: Removing unreachable block (ram,0x0001800ff701) */
void func_0x1800ff650(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)
{
  int *pInt_1;
  int64_t *pLong_2;
  byte bFlag_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  uint8_t local_348 [328];
  uint8_t local_200 [48];
  int64_t *aplStack_1d0 [3];
  byte local_1b8 [8];
  uint8_t local_1b0 [32];
  uint8_t local_190;
  uint8_t local_168;
  uint8_t local_140;
  uint8_t local_118;
  uint8_t local_f0;
  uint8_t local_c8;
  uint8_t local_a0;
  uint8_t local_78;
  int64_t local_70;
  uint64_t local_68;
  uint8_t local_60 [16];
  int64_t *local_50;
  byte local_48;
  char local_40;
  uint8_t *local_38;
  uint64_t local_30;
  
  local_38 = local_1b0;
  local_30 = 0xfffffffffffffffe;
  local_190 = 0;
  local_168 = 0;
  local_140 = 0;
  local_118 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = *param_4;
  if (param_4[2] == 0) {
    local_60._8_8_ = 0;
    local_60._0_8_ = param_4[1];
  }
  else {
    LOCK();
    pInt_1 = (int *)(param_4[2] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    local_60 = *(uint8_t (*)[16])(param_4 + 1);
  }
  local_48 = 2;
  func_0x180104110(3,&local_38,&local_68);
  local_70 = local_70 + 1;
  if (local_48 < 2) {
    if (local_48 == 0) goto LAB_1800ff7d3;
    if (local_50 != (int64_t *)0x0) {
      LOCK();
      pLong_4 = local_50 + 1;
      *(int *)pLong_4 = *(int *)pLong_4 + -1;
      UNLOCK();
      if (*(int *)pLong_4 == 0) {
        (**(func_ptr_t *)*local_50)(local_50);
        LOCK();
        pInt_1 = (int *)((int64_t)local_50 + 0xc);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        if (*pInt_1 == 0) {
          (**(func_ptr_t *)(*local_50 + 8))(local_50);
        }
      }
    }
    pLong_4 = (int64_t *)local_60._0_8_;
  }
  else {
    if (local_48 != 2) goto LAB_1800ff7d3;
    pLong_4 = (int64_t *)local_60._8_8_;
  }
  if (pLong_4 != (int64_t *)0x0) {
    LOCK();
    pLong_2 = pLong_4 + 1;
    *(int *)pLong_2 = *(int *)pLong_2 + -1;
    UNLOCK();
    if (*(int *)pLong_2 == 0) {
      (**(func_ptr_t *)*pLong_4)(pLong_4);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_4 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
      }
    }
  }
LAB_1800ff7d3:
  local_1b8[0] = 0;
  local_40 = '\0';
  func_0x1800ffcc0(local_348,local_1b0);
  func_0x1800ff960(param_1,param_2,param_3,local_348,0,0,&local_68,0,local_200);
  func_0x180103220((int64_t)local_40 + 1,&local_38,&local_68);
  lVal_5 = 0x140;
  do {
    bFlag_3 = local_1b8[lVal_5];
    if (bFlag_3 < 2) {
      if (bFlag_3 != 0) {
        pLong_4 = *(int64_t **)((int64_t)aplStack_1d0 + lVal_5 + 0x10);
        if (pLong_4 != (int64_t *)0x0) {
          LOCK();
          pLong_2 = pLong_4 + 1;
          *(int *)pLong_2 = *(int *)pLong_2 + -1;
          UNLOCK();
          if (*(int *)pLong_2 == 0) {
            (**(func_ptr_t *)*pLong_4)(pLong_4);
            LOCK();
            pInt_1 = (int *)((int64_t)pLong_4 + 0xc);
            *pInt_1 = *pInt_1 + -1;
            UNLOCK();
            if (*pInt_1 == 0) {
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
        pLong_4 = *(int64_t **)((int64_t)aplStack_1d0 + lVal_5);
joined_r0x0001800ff8d0:
        if (pLong_4 != (int64_t *)0x0) {
          LOCK();
          pLong_2 = pLong_4 + 1;
          *(int *)pLong_2 = *(int *)pLong_2 + -1;
          UNLOCK();
          if (*(int *)pLong_2 == 0) {
            (**(func_ptr_t *)*pLong_4)(pLong_4);
            LOCK();
            pInt_1 = (int *)((int64_t)pLong_4 + 0xc);
            *pInt_1 = *pInt_1 + -1;
            UNLOCK();
            if (*pInt_1 == 0) {
              (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
            }
          }
        }
      }
    }
    else if (bFlag_3 == 2) {
      pLong_4 = *(int64_t **)((int64_t)aplStack_1d0 + lVal_5 + 8);
      goto joined_r0x0001800ff8d0;
    }
    lVal_5 = lVal_5 + -0x28;
    if (lVal_5 == 0) {
      return;
    }
  } while( true );
}

// Unwind@1800ff910
void Unwind_1800ff910(uint64_t param_1,int64_t param_2)
{
  func_0x180103220((int64_t)*(char *)(param_2 + 0x358) + 1,param_2 + 0x360,param_2 + 0x330);
  func_0x1800ff540(param_2 + 0x1e8);
  return;
}

// func_0x1800ff960
void func_0x1800ff960(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4, uint32_t param_5,uint32_t param_6,uint64_t param_7,uint64_t param_8, uint32_t *param_9)
{
  int64_t *pLong_1;
  int *pInt_2;
  char ch_3;
  byte bFlag_4;
  int64_t *pLong_5;
  func_ptr_t fnPtr_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint8_t local_200 [328];
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint8_t local_a8;
  uint8_t local_a0 [40];
  uint8_t local_78;
  uint8_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint8_t *local_58;
  int64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = param_3;
  local_60 = param_2;
  local_50 = param_4;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083f0a0) && (func_0x180672ec0(&DAT_18083f0a0), DAT_18083f0a0 == -1)) {
    lVal_7 = func_0x1800ff460(&DAT_180840f80);
    if (lVal_7 == 0) {
      DAT_18083f098 = (func_ptr_t )0x0;
    }
    else {
      DAT_18083f098 = (func_ptr_t )(lVal_7 + *(int *)(lVal_7 + 1) + 5);
    }
    _Init_thread_footer(&DAT_18083f0a0);
  }
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083f0b0) && (func_0x180672ec0(&DAT_18083f0b0), DAT_18083f0b0 == -1)) {
    DAT_18083f0a8 = DAT_18083f098;
    _Init_thread_footer(&DAT_18083f0b0);
  }
  fnPtr_6 = DAT_18083f0a8;
  local_70 = 0;
  ch_3 = *(char *)(param_9 + 0x12);
  if (ch_3 == '\x01') {
    local_a8 = *(uint8_t *)(param_9 + 4);
    local_b8 = *param_9;
    uStack_b4 = param_9[1];
    uStack_b0 = param_9[2];
    uStack_ac = param_9[3];
    local_58 = local_a0;
    local_78 = 0xff;
    func_0x180103270((int64_t)*(char *)(param_9 + 0x10) + 1,&local_58,param_9 + 6);
  }
  local_70 = ch_3 == '\x01';
  func_0x1800ffcc0(local_200,local_50);
  (*fnPtr_6)(param_1,local_60,local_68,local_200,param_5,param_6,param_7,param_8,&local_b8);
  lVal_7 = local_50;
  lVal_8 = 0x140;
  do {
    bFlag_4 = *(byte *)(lVal_7 + -8 + lVal_8);
    if (bFlag_4 < 2) {
      if (bFlag_4 != 0) {
        pLong_5 = *(int64_t **)(lVal_7 + -0x10 + lVal_8);
        if (pLong_5 != (int64_t *)0x0) {
          LOCK();
          pLong_1 = pLong_5 + 1;
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (**(func_ptr_t *)*pLong_5)(pLong_5);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_5 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
            }
          }
        }
        pLong_5 = *(int64_t **)(lVal_7 + -0x20 + lVal_8);
joined_r0x0001800ffb2d:
        if (pLong_5 != (int64_t *)0x0) {
          LOCK();
          pLong_1 = pLong_5 + 1;
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (**(func_ptr_t *)*pLong_5)(pLong_5);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_5 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
            }
          }
        }
      }
    }
    else if (bFlag_4 == 2) {
      pLong_5 = *(int64_t **)(lVal_7 + -0x18 + lVal_8);
      goto joined_r0x0001800ffb2d;
    }
    lVal_8 = lVal_8 + -0x28;
    if (lVal_8 == 0) {
      if (*(char *)(param_9 + 0x12) == '\x01') {
        func_0x180103220((int64_t)*(char *)(param_9 + 0x10) + 1,&local_58,param_9 + 6);
      }
      return;
    }
  } while( true );
}

// Unwind@1800ffc10
void Unwind_1800ffc10(void)
{
  func_0x180672f60(&DAT_18083f0a0);
  return;
}

// Unwind@1800ffc50
void Unwind_1800ffc50(uint64_t param_1,int64_t param_2)
{
  func_0x1800ff540(*(uint64_t *)(param_2 + 0x1f8));
  if (*(char *)(*(int64_t *)(param_2 + 0x290) + 0x48) == '\x01') {
    func_0x180103220((int64_t)*(char *)(*(int64_t *)(param_2 + 0x290) + 0x40) + 1,param_2 + 0x1f0,
                  *(int64_t *)(param_2 + 0x290) + 0x18);
  }
  return;
}

// func_0x1800ffcc0
void func_0x1800ffcc0(uint8_t (*param_1)[16],uint64_t *param_2)
{
  int *pInt_1;
  byte bFlag_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  
  param_1[2][0] = 0xff;
  bFlag_2 = *(byte *)(param_2 + 4);
  if (bFlag_2 < 2) {
    if (bFlag_2 != 0) {
      *param_1 = ZEXT816(0);
      if (param_2[1] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[1] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      *(uint64_t *)*param_1 = *param_2;
      *(uint64_t *)(*param_1 + 8) = param_2[1];
      param_1[1] = ZEXT816(0);
      if (param_2[3] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[3] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      pU64_3 = param_2 + 3;
      *(uint64_t *)param_1[1] = param_2[2];
      lVal_4 = 0x18;
LAB_1800ffd5f:
      *(uint64_t *)(*param_1 + lVal_4) = *pU64_3;
    }
    param_1[2][0] = bFlag_2;
  }
  else if (bFlag_2 == 2) {
    *(uint64_t *)*param_1 = *param_2;
    *(uint8_t (*)[16])(*param_1 + 8) = ZEXT816(0);
    if (param_2[2] != 0) {
      LOCK();
      pInt_1 = (int *)(param_2[2] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    pU64_3 = param_2 + 2;
    *(uint64_t *)(*param_1 + 8) = param_2[1];
    lVal_4 = 0x10;
    goto LAB_1800ffd5f;
  }
  param_1[4][8] = 0xff;
  bFlag_2 = *(byte *)(param_2 + 9);
  if (bFlag_2 < 2) {
    if (bFlag_2 != 0) {
      *(uint8_t (*)[16])(param_1[2] + 8) = ZEXT816(0);
      if (param_2[6] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[6] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      *(uint64_t *)(param_1[2] + 8) = param_2[5];
      *(uint64_t *)param_1[3] = param_2[6];
      *(uint8_t (*)[16])(param_1[3] + 8) = ZEXT816(0);
      if (param_2[8] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[8] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      pU64_3 = param_2 + 8;
      *(uint64_t *)(param_1[3] + 8) = param_2[7];
      lVal_4 = 0x18;
LAB_1800ffe11:
      *(uint64_t *)(*(uint8_t (*)[16])(param_1[2] + 8) + lVal_4) = *pU64_3;
    }
    param_1[4][8] = bFlag_2;
  }
  else if (bFlag_2 != 0xff) {
    *(uint64_t *)(param_1[2] + 8) = param_2[5];
    param_1[3] = ZEXT816(0);
    if (param_2[7] != 0) {
      LOCK();
      pInt_1 = (int *)(param_2[7] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    pU64_3 = param_2 + 7;
    *(uint64_t *)param_1[3] = param_2[6];
    lVal_4 = 0x10;
    goto LAB_1800ffe11;
  }
  param_1[7][0] = 0xff;
  bFlag_2 = *(byte *)(param_2 + 0xe);
  if (bFlag_2 < 2) {
    if (bFlag_2 != 0) {
      param_1[5] = ZEXT816(0);
      if (param_2[0xb] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0xb] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      *(uint64_t *)param_1[5] = param_2[10];
      *(uint64_t *)(param_1[5] + 8) = param_2[0xb];
      param_1[6] = ZEXT816(0);
      if (param_2[0xd] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0xd] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      pU64_3 = param_2 + 0xd;
      *(uint64_t *)param_1[6] = param_2[0xc];
      lVal_4 = 0x18;
LAB_1800ffec4:
      *(uint64_t *)(param_1[5] + lVal_4) = *pU64_3;
    }
    param_1[7][0] = bFlag_2;
  }
  else if (bFlag_2 != 0xff) {
    *(uint64_t *)param_1[5] = param_2[10];
    *(uint8_t (*)[16])(param_1[5] + 8) = ZEXT816(0);
    if (param_2[0xc] != 0) {
      LOCK();
      pInt_1 = (int *)(param_2[0xc] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    pU64_3 = param_2 + 0xc;
    *(uint64_t *)(param_1[5] + 8) = param_2[0xb];
    lVal_4 = 0x10;
    goto LAB_1800ffec4;
  }
  param_1[9][8] = 0xff;
  bFlag_2 = *(byte *)(param_2 + 0x13);
  if (bFlag_2 < 2) {
    if (bFlag_2 != 0) {
      *(uint8_t (*)[16])(param_1[7] + 8) = ZEXT816(0);
      if (param_2[0x10] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x10] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      *(uint64_t *)(param_1[7] + 8) = param_2[0xf];
      *(uint64_t *)param_1[8] = param_2[0x10];
      *(uint8_t (*)[16])(param_1[8] + 8) = ZEXT816(0);
      if (param_2[0x12] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x12] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      pU64_3 = param_2 + 0x12;
      *(uint64_t *)(param_1[8] + 8) = param_2[0x11];
      lVal_4 = 0x18;
LAB_1800fffa4:
      *(uint64_t *)(*(uint8_t (*)[16])(param_1[7] + 8) + lVal_4) = *pU64_3;
    }
    param_1[9][8] = bFlag_2;
  }
  else if (bFlag_2 != 0xff) {
    *(uint64_t *)(param_1[7] + 8) = param_2[0xf];
    param_1[8] = ZEXT816(0);
    if (param_2[0x11] != 0) {
      LOCK();
      pInt_1 = (int *)(param_2[0x11] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    pU64_3 = param_2 + 0x11;
    *(uint64_t *)param_1[8] = param_2[0x10];
    lVal_4 = 0x10;
    goto LAB_1800fffa4;
  }
  param_1[0xc][0] = 0xff;
  bFlag_2 = *(byte *)(param_2 + 0x18);
  if (bFlag_2 < 2) {
    if (bFlag_2 != 0) {
      param_1[10] = ZEXT816(0);
      if (param_2[0x15] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x15] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      *(uint64_t *)param_1[10] = param_2[0x14];
      *(uint64_t *)(param_1[10] + 8) = param_2[0x15];
      param_1[0xb] = ZEXT816(0);
      if (param_2[0x17] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x17] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      pU64_3 = param_2 + 0x17;
      *(uint64_t *)param_1[0xb] = param_2[0x16];
      lVal_4 = 0x18;
LAB_180100096:
      *(uint64_t *)(param_1[10] + lVal_4) = *pU64_3;
    }
    param_1[0xc][0] = bFlag_2;
  }
  else if (bFlag_2 != 0xff) {
    *(uint64_t *)param_1[10] = param_2[0x14];
    *(uint8_t (*)[16])(param_1[10] + 8) = ZEXT816(0);
    if (param_2[0x16] != 0) {
      LOCK();
      pInt_1 = (int *)(param_2[0x16] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    pU64_3 = param_2 + 0x16;
    *(uint64_t *)(param_1[10] + 8) = param_2[0x15];
    lVal_4 = 0x10;
    goto LAB_180100096;
  }
  param_1[0xe][8] = 0xff;
  bFlag_2 = *(byte *)(param_2 + 0x1d);
  if (bFlag_2 < 2) {
    if (bFlag_2 != 0) {
      *(uint8_t (*)[16])(param_1[0xc] + 8) = ZEXT816(0);
      if (param_2[0x1a] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x1a] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      *(uint64_t *)(param_1[0xc] + 8) = param_2[0x19];
      *(uint64_t *)param_1[0xd] = param_2[0x1a];
      *(uint8_t (*)[16])(param_1[0xd] + 8) = ZEXT816(0);
      if (param_2[0x1c] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x1c] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      pU64_3 = param_2 + 0x1c;
      *(uint64_t *)(param_1[0xd] + 8) = param_2[0x1b];
      lVal_4 = 0x18;
LAB_180100188:
      *(uint64_t *)(*(uint8_t (*)[16])(param_1[0xc] + 8) + lVal_4) = *pU64_3;
    }
    param_1[0xe][8] = bFlag_2;
  }
  else if (bFlag_2 != 0xff) {
    *(uint64_t *)(param_1[0xc] + 8) = param_2[0x19];
    param_1[0xd] = ZEXT816(0);
    if (param_2[0x1b] != 0) {
      LOCK();
      pInt_1 = (int *)(param_2[0x1b] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    pU64_3 = param_2 + 0x1b;
    *(uint64_t *)param_1[0xd] = param_2[0x1a];
    lVal_4 = 0x10;
    goto LAB_180100188;
  }
  param_1[0x11][0] = 0xff;
  bFlag_2 = *(byte *)(param_2 + 0x22);
  if (bFlag_2 < 2) {
    if (bFlag_2 != 0) {
      param_1[0xf] = ZEXT816(0);
      if (param_2[0x1f] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x1f] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      *(uint64_t *)param_1[0xf] = param_2[0x1e];
      *(uint64_t *)(param_1[0xf] + 8) = param_2[0x1f];
      param_1[0x10] = ZEXT816(0);
      if (param_2[0x21] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x21] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      pU64_3 = param_2 + 0x21;
      *(uint64_t *)param_1[0x10] = param_2[0x20];
      lVal_4 = 0x18;
LAB_18010027a:
      *(uint64_t *)(param_1[0xf] + lVal_4) = *pU64_3;
    }
    param_1[0x11][0] = bFlag_2;
  }
  else if (bFlag_2 != 0xff) {
    *(uint64_t *)param_1[0xf] = param_2[0x1e];
    *(uint8_t (*)[16])(param_1[0xf] + 8) = ZEXT816(0);
    if (param_2[0x20] != 0) {
      LOCK();
      pInt_1 = (int *)(param_2[0x20] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    pU64_3 = param_2 + 0x20;
    *(uint64_t *)(param_1[0xf] + 8) = param_2[0x1f];
    lVal_4 = 0x10;
    goto LAB_18010027a;
  }
  param_1[0x13][8] = 0xff;
  bFlag_2 = *(byte *)(param_2 + 0x27);
  if (bFlag_2 < 2) {
    if (bFlag_2 != 0) {
      *(uint8_t (*)[16])(param_1[0x11] + 8) = ZEXT816(0);
      if (param_2[0x24] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x24] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      *(uint64_t *)(param_1[0x11] + 8) = param_2[0x23];
      *(uint64_t *)param_1[0x12] = param_2[0x24];
      *(uint8_t (*)[16])(param_1[0x12] + 8) = ZEXT816(0);
      if (param_2[0x26] != 0) {
        LOCK();
        pInt_1 = (int *)(param_2[0x26] + 8);
        *pInt_1 = *pInt_1 + 1;
        UNLOCK();
      }
      pU64_3 = param_2 + 0x26;
      *(uint64_t *)(param_1[0x12] + 8) = param_2[0x25];
      lVal_4 = 0x18;
      goto LAB_18010036c;
    }
  }
  else {
    if (bFlag_2 == 0xff) goto LAB_18010037a;
    *(uint64_t *)(param_1[0x11] + 8) = param_2[0x23];
    param_1[0x12] = ZEXT816(0);
    if (param_2[0x25] != 0) {
      LOCK();
      pInt_1 = (int *)(param_2[0x25] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    pU64_3 = param_2 + 0x25;
    *(uint64_t *)param_1[0x12] = param_2[0x24];
    lVal_4 = 0x10;
LAB_18010036c:
    *(uint64_t *)(*(uint8_t (*)[16])(param_1[0x11] + 8) + lVal_4) = *pU64_3;
  }
  param_1[0x13][8] = bFlag_2;
LAB_18010037a:
  *(uint64_t *)param_1[0x14] = param_2[0x28];
  return;
}

// func_0x180100390
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180100390(int64_t param_1)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  uint8_t in_XMM1 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t in_XMM2 [16];
  uint8_t in_XMM3 [16];
  uint8_t auArr_5 [16];
  float in_xmmTmp2_Dd;
  uint32_t param_5;
  
  pU64_1 = (uint64_t *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x50);
  uVal_2 = *pU64_1;
  auArr_3._8_4_ = (int)uVal_2;
  auArr_3._0_8_ = *pU64_1;
  auArr_3._12_4_ = (int)((uint64_t)uVal_2 >> 0x20);
  auArr_5 = divps(_DAT_1806b2880,auArr_3);
  auArr_3 = insertps(in_XMM1,in_XMM2,0x10);
  auArr_3 = insertps(auArr_3,in_XMM3,0x20);
  auArr_3 = insertps(auArr_3,param_5,0x30);
  auArr_4._0_4_ = auArr_3._0_4_ * auArr_5._0_4_;
  auArr_4._4_4_ = auArr_3._4_4_ * auArr_5._4_4_;
  auArr_4._8_4_ = auArr_3._8_4_ * auArr_5._8_4_;
  auArr_4._12_4_ = auArr_3._12_4_ * auArr_5._12_4_;
  auArr_3 = maxps(ZEXT816(0),auArr_4);
  auArr_5._4_4_ = -(uint)(SUB164(_DAT_1806b2880,4) < auArr_4._4_4_);
  auArr_5._0_4_ = -(uint)(SUB164(_DAT_1806b2880,0) < auArr_4._0_4_);
  auArr_5._8_4_ = -(uint)(SUB164(_DAT_1806b2880,8) < auArr_4._12_4_);
  auArr_5._12_4_ = -(uint)(SUB164(_DAT_1806b2880,0xc) < in_xmmTmp2_Dd);
  auArr_3 = blendvps(auArr_3,_DAT_1806b2880,auArr_5);
  *(uint8_t (*)[16])(param_1 + 0x58) = auArr_3;
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(uint8_t *)(param_1 + 0x68) = 1;
  }
  return 0x291792be1f4f783f;
}

// func_0x180100440
void func_0x180100440(int64_t param_1)
{
  *(uint8_t *)(param_1 + 0x68) = 0;
  return;
}

// func_0x180100450
void func_0x180100450(uint8_t *param_1)
{
  *param_1 = 0;
  if (*(int64_t *)(param_1 + 8) != *(int64_t *)(param_1 + 0x10)) {
    *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 8);
  }
  if (*(int64_t *)(param_1 + 0x20) != *(int64_t *)(param_1 + 0x28)) {
    *(int64_t *)(param_1 + 0x28) = *(int64_t *)(param_1 + 0x20);
  }
  if (*(int64_t *)(param_1 + 0x38) != *(int64_t *)(param_1 + 0x40)) {
    *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x38);
  }
  if (*(int64_t *)(param_1 + 0x50) != *(int64_t *)(param_1 + 0x58)) {
    *(int64_t *)(param_1 + 0x58) = *(int64_t *)(param_1 + 0x50);
  }
  if (*(int64_t *)(param_1 + 0x68) != *(int64_t *)(param_1 + 0x70)) {
    *(int64_t *)(param_1 + 0x70) = *(int64_t *)(param_1 + 0x68);
  }
  if (*(int64_t *)(param_1 + 0x80) != *(int64_t *)(param_1 + 0x88)) {
    *(int64_t *)(param_1 + 0x88) = *(int64_t *)(param_1 + 0x80);
  }
  if (*(int64_t *)(param_1 + 0x98) != *(int64_t *)(param_1 + 0xa0)) {
    *(int64_t *)(param_1 + 0xa0) = *(int64_t *)(param_1 + 0x98);
  }
  if (*(int64_t *)(param_1 + 0xb0) != *(int64_t *)(param_1 + 0xb8)) {
    *(int64_t *)(param_1 + 0xb8) = *(int64_t *)(param_1 + 0xb0);
  }
  if (*(int64_t *)(param_1 + 200) != *(int64_t *)(param_1 + 0xd0)) {
    *(int64_t *)(param_1 + 0xd0) = *(int64_t *)(param_1 + 200);
  }
  if (*(int64_t *)(param_1 + 0xe0) != *(int64_t *)(param_1 + 0xe8)) {
    *(int64_t *)(param_1 + 0xe8) = *(int64_t *)(param_1 + 0xe0);
  }
  if (*(int64_t *)(param_1 + 0xf8) != *(int64_t *)(param_1 + 0x100)) {
    *(int64_t *)(param_1 + 0x100) = *(int64_t *)(param_1 + 0xf8);
  }
  if (*(int64_t *)(param_1 + 0x110) != *(int64_t *)(param_1 + 0x118)) {
    *(int64_t *)(param_1 + 0x118) = *(int64_t *)(param_1 + 0x110);
  }
  *(uint64_t *)(param_1 + 0x12e) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  return;
}

// func_0x180100560
void func_0x180100560(int64_t param_1,ushort param_2)
{
  *(uint8_t *)(param_1 + 0x128 + (uint64_t)param_2) = 1;
  return;
}

// func_0x180100570
void func_0x180100570(int64_t param_1,int param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  uVal_2 = (uint64_t)param_2;
  local_28 = uVal_2;
  if ((uint64_t)
      ((*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 8) >> 2) * -0x5555555555555555) <
      uVal_2) {
    if (-1 < param_2) {
      func_0x180103390(param_1 + 8,&local_28);
      goto LAB_1801005c8;
    }
LAB_18010064d:
    func_0x18007c0d0();
  }
  else {
LAB_1801005c8:
    if (uVal_2 <= (uint64_t)(*(int64_t *)(param_1 + 0x78) - *(int64_t *)(param_1 + 0x68) >> 2)) {
LAB_1801005f0:
      local_28 = uVal_2;
      if ((uint64_t)(*(int64_t *)(param_1 + 0xa8) - *(int64_t *)(param_1 + 0x98) >> 3) < uVal_2) {
        if (param_2 < 0) goto LAB_180100657;
        func_0x18007fe80(param_1 + 0x98,&local_28);
      }
      if (DAT_18083cf40 == (local_20 ^ (uint64_t)auStack_48)) {
        return;
      }
      func_0x180673080(local_20 ^ (uint64_t)auStack_48);
      goto LAB_18010064d;
    }
    local_28 = uVal_2;
    if (-1 < param_2) {
      func_0x1801034e0(param_1 + 0x68,&local_28);
      goto LAB_1801005f0;
    }
  }
  func_0x18007c0d0();
LAB_180100657:
  func_0x18007c0d0();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180100660
void func_0x180100660(int64_t param_1,int param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  uVal_2 = (uint64_t)param_2;
  local_28 = uVal_2;
  if ((uint64_t)
      ((*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 8) >> 2) * -0x5555555555555555) <
      uVal_2) {
    if (-1 < param_2) {
      func_0x180103390(param_1 + 8,&local_28);
      goto LAB_1801006b8;
    }
  }
  else {
LAB_1801006b8:
    if ((uint64_t)(*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x20) >> 4) < uVal_2) {
      local_28 = uVal_2;
      if (param_2 < 0) goto LAB_1801008bc;
      func_0x1801035d0(param_1 + 0x20,&local_28);
    }
    if ((uint64_t)(*(int64_t *)(param_1 + 0x48) - *(int64_t *)(param_1 + 0x38) >> 2) < uVal_2) {
      if (-1 < param_2) {
        local_28 = uVal_2;
        func_0x1801034e0(param_1 + 0x38,&local_28);
        goto LAB_180100710;
      }
LAB_18010089b:
      local_28 = uVal_2;
      func_0x18007c0d0();
LAB_1801008a0:
      func_0x18007c0d0();
LAB_1801008a5:
      func_0x180673080(local_20 ^ (uint64_t)auStack_48);
    }
    else {
LAB_180100710:
      if ((uint64_t)(*(int64_t *)(param_1 + 0x78) - *(int64_t *)(param_1 + 0x68) >> 2) < uVal_2) {
        if (param_2 < 0) goto LAB_18010089b;
        local_28 = uVal_2;
        func_0x1801034e0(param_1 + 0x68,&local_28);
      }
      if ((uint64_t)(*(int64_t *)(param_1 + 0x90) - *(int64_t *)(param_1 + 0x80) >> 1) < uVal_2) {
        local_28 = uVal_2;
        if (param_2 < 0) goto LAB_1801008a0;
        func_0x1801036c0(param_1 + 0x80,&local_28);
      }
      if ((uint64_t)(*(int64_t *)(param_1 + 0xf0) - *(int64_t *)(param_1 + 0xe0) >> 1) < uVal_2) {
        local_28 = uVal_2;
        if (param_2 < 0) goto LAB_1801008a0;
        func_0x1801036c0(param_1 + 0xe0,&local_28);
LAB_1801007ae:
        if ((uint64_t)(*(int64_t *)(param_1 + 0xa8) - *(int64_t *)(param_1 + 0x98) >> 3) < uVal_2)
        {
          local_28 = uVal_2;
          func_0x18007fe80(param_1 + 0x98,&local_28);
        }
        if ((uint64_t)(*(int64_t *)(param_1 + 0xc0) - *(int64_t *)(param_1 + 0xb0) >> 3) < uVal_2)
        {
          local_28 = uVal_2;
          func_0x18007fe80(param_1 + 0xb0,&local_28);
        }
        local_28 = uVal_2;
        if ((uint64_t)(*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 200) >> 3) < uVal_2)
        {
          func_0x18007fe80(param_1 + 200,&local_28);
        }
LAB_18010087f:
        if (DAT_18083cf40 == (local_20 ^ (uint64_t)auStack_48)) {
          return;
        }
        goto LAB_1801008a5;
      }
      if (-1 < param_2) goto LAB_1801007ae;
      local_28 = uVal_2;
      if (((uVal_2 <= (uint64_t)(*(int64_t *)(param_1 + 0xa8) - *(int64_t *)(param_1 + 0x98) >> 3)
           ) && (uVal_2 <= (uint64_t)
                          (*(int64_t *)(param_1 + 0xc0) - *(int64_t *)(param_1 + 0xb0) >> 3))) &&
         (uVal_2 <= (uint64_t)(*(int64_t *)(param_1 + 0xd8) - *(int64_t *)(param_1 + 200) >> 3)))
      goto LAB_18010087f;
    }
    func_0x18007c0d0();
  }
  func_0x18007c0d0();
LAB_1801008bc:
  func_0x18007c0d0();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801008d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint8_t (*func_0x1801008d0(uint8_t (*param_1)[16],int64_t param_2))[16]
{
  int64_t *pLong_1;
  int *pInt_2;
  uint16_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  int64_t *pLong_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint64_t *pU64_11;
  
  param_1[2] = ZEXT816(0);
  param_1[4] = ZEXT816(0);
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  *(uint32_t *)param_1[2] = 1;
  *(uint32_t *)(param_1[2] + 8) = 1;
  uVal_10 = _UNK_1806b288c;
  uVal_9 = _UNK_1806b2888;
  uVal_8 = _UNK_1806b2884;
  uVal_7 = _DAT_1806b2880;
  *(uint32_t *)param_1[3] = _DAT_1806b2880;
  *(uint32_t *)(param_1[3] + 4) = uVal_8;
  *(uint32_t *)(param_1[3] + 8) = uVal_9;
  *(uint32_t *)(param_1[3] + 0xc) = uVal_10;
  param_1[4][4] = 0;
  *(uint32_t *)(param_1[4] + 8) = 8;
  pU64_11 = (uint64_t *)func_0x180672de0(0x30);
  pU64_11[1] = 0x100000001;
  *pU64_11 = &PTR_LAB_1806b4f40;
  func_0x1800fdac0(pU64_11 + 2,param_2);
  *(uint64_t **)*param_1 = pU64_11 + 2;
  pLong_6 = *(int64_t **)(*param_1 + 8);
  *(uint64_t **)(*param_1 + 8) = pU64_11;
  if (pLong_6 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_6 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_6)(pLong_6);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_6 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_6 + 8))(pLong_6);
      }
    }
  }
  uVal_4 = *(uint32_t *)(param_2 + 0x20);
  uVal_3 = *(uint16_t *)(param_2 + 0x24);
  uVal_5 = *(uint32_t *)(param_2 + 0x28);
  *(uint64_t *)param_1[1] = *(uint64_t *)(param_2 + 0x18);
  *(uint32_t *)(param_1[1] + 8) = uVal_4;
  *(uint16_t *)(param_1[1] + 0xc) = uVal_3;
  *(uint32_t *)param_1[2] = uVal_5;
  *(uint32_t *)(param_1[2] + 4) = 1;
  *(uint64_t *)(param_1[2] + 8) = 1;
  *(uint32_t *)param_1[3] = uVal_7;
  *(uint32_t *)(param_1[3] + 4) = uVal_8;
  *(uint32_t *)(param_1[3] + 8) = uVal_9;
  *(uint32_t *)(param_1[3] + 0xc) = uVal_10;
  *(uint32_t *)param_1[4] = 0;
  param_1[4][4] = 0;
  *(uint32_t *)(param_1[4] + 8) = 8;
  param_1[4][0xc] = 0;
  param_1[5][0] = 1;
  return param_1;
}

// Unwind@1801009f0
void Unwind_1801009f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@180100a20
void Unwind_180100a20(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x30),0x30);
  return;
}

// func_0x180100a60
uint64_t func_0x180100a60(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t uVal_3;
  uint8_t local_98 [8];
  int64_t *local_90;
  uint8_t local_40 [16];
  uint8_t local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  func_0x1801008d0(local_98,param_3);
  local_30 = 0;
  uVal_3 = func_0x180100b20(param_1,param_2,local_98,local_40);
  if (local_90 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_90 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_90)(local_90);
      LOCK();
      pInt_2 = (int *)((int64_t)local_90 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_90 + 8))(local_90);
      }
    }
  }
  return uVal_3;
}

// Unwind@180100af0
void Unwind_180100af0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// func_0x180100b20
void func_0x180100b20(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t *param_4)
{
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f0c0) {
    func_0x180672ec0(&DAT_18083f0c0);
    if (DAT_18083f0c0 == -1) {
      DAT_18083f0b8 = (func_ptr_t )func_0x180100c60(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f0c0);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f0d0) {
    func_0x180672ec0(&DAT_18083f0d0);
    if (DAT_18083f0d0 == -1) {
      DAT_18083f0c8 = DAT_18083f0b8;
      _Init_thread_footer(&DAT_18083f0d0);
    }
  }
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_38 = *(uint64_t *)(param_4 + 4);
  (*DAT_18083f0c8)(param_1,param_2,param_3,&local_48);
  return;
}

// Unwind@180100c30
void Unwind_180100c30(void)
{
  func_0x180672f60(&DAT_18083f0c0);
  return;
}

// func_0x180100c60
int64_t func_0x180100c60(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x48832121c6d0b24) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x64ebb824381a63ce) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180100d04;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x64ebb824381a63ce);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180100d2a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x64ebb824381a63ce);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x5cf1dbe9U) + -0x20;
  }
LAB_180100d04:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180100d2a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180100d40
void func_0x180100d40(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t local_30;
  uint64_t local_28;
  
  if (*(int64_t *)(param_1 + 0x240) != 0) {
    local_30 = 0x18afbcde9219e62c;
    func_0x1800fe6e0(*(uint64_t *)(param_1 + 0x240),param_2);
  }
  local_30 = 0x187bd44d5a4f797e;
  lVal_3 = param_1 + 0x1a8;
  ch_1 = func_0x180100f50(lVal_3,param_2);
  if (ch_1 != '\0') {
    uVal_2 = func_0x180101070(lVal_3,param_2);
    func_0x1801272e0(uVal_2);
    func_0x1801045f0(lVal_3,&local_30,param_2);
    func_0x1801047c0(lVal_3,local_30,local_28);
    local_30 = 0x28c12de6e7d693b9;
    lVal_3 = func_0x1800b7550(param_1 + 0x230,param_2);
    if (lVal_3 != *(int64_t *)(param_1 + 0x230)) {
      func_0x180104910(param_1 + 0x230,lVal_3);
    }
  }
  return;
}
