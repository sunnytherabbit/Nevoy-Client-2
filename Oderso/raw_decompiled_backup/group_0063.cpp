#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@180658e90
void Unwind_180658e90(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x20);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658ec0
void Unwind_180658ec0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x20);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658ef0
void Unwind_180658ef0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x20);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658f20
void Unwind_180658f20(uint64_t param_1,int64_t param_2)
{
  func_0x180658f50(param_2 + 0x28);
  return;
}

// func_0x180658f50
void func_0x180658f50(int64_t *param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  lVal_1 = *param_1;
  if (lVal_1 == 0) {
    return;
  }
  uVal_2 = *(uint64_t *)(lVal_1 + 0x30);
  if (0xf < uVal_2) {
    lVal_3 = *(int64_t *)(lVal_1 + 0x18);
    uVal_4 = uVal_2 + 1;
    lVal_5 = lVal_3;
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_2 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_4);
  }
  thunk_FUN_180695dd0(lVal_1,0x38);
  return;
}

// func_0x180658fc0
void func_0x180658fc0(int64_t param_1,uint8_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  
  lVal_2 = param_1 + 0x18;
  uVal_1 = *(uint64_t *)(param_1 + 0x28);
  if (uVal_1 < *(uint64_t *)(param_1 + 0x30)) {
    *(uint64_t *)(param_1 + 0x28) = uVal_1 + 1;
    if (0xf < *(uint64_t *)(param_1 + 0x30)) {
      lVal_2 = *(int64_t *)(param_1 + 0x18);
    }
    *(uint8_t *)(lVal_2 + uVal_1) = param_2;
    *(uint8_t *)(lVal_2 + 1 + uVal_1) = 0;
    return;
  }
  func_0x18008c590(lVal_2,1);
  return;
}

// func_0x180659000
void func_0x180659000(int64_t **param_1,uint32_t *param_2,uint64_t param_3)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  uint32_t uVal_18;
  uint32_t uVal_19;
  int64_t lVal_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  int64_t lVal_23;
  int64_t *pLong_24;
  int64_t *pLong_25;
  uint64_t uVal_26;
  uint64_t uVal_27;
  int64_t lVal_28;
  int64_t *pLong_29;
  int64_t *pLong_30;
  uint64_t uVal_31;
  
  pLong_25 = *param_1;
  if ((uint64_t)(((int64_t)param_1[2] - (int64_t)pLong_25 >> 7) * -0x5555555555555555) < param_3)
  {
    func_0x180659660(param_1,param_3);
    pLong_25 = *param_1;
    lVal_20 = 0;
    do {
      func_0x180652800((int64_t)pLong_25 + lVal_20,(int64_t)param_2 + lVal_20);
      lVal_20 = lVal_20 + 0x180;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    pLong_29 = (int64_t *)((int64_t)pLong_25 + lVal_20);
  }
  else {
    pLong_30 = param_1[1];
    uVal_22 = ((int64_t)pLong_30 - (int64_t)pLong_25 >> 7) * -0x5555555555555555;
    if (uVal_22 < param_3) {
      if (pLong_25 != pLong_30) {
        do {
          uVal_5 = param_2[0x15];
          uVal_6 = param_2[0x16];
          uVal_7 = param_2[0x17];
          *(uint32_t *)(pLong_25 + 10) = param_2[0x14];
          *(uint32_t *)((int64_t)pLong_25 + 0x54) = uVal_5;
          *(uint32_t *)(pLong_25 + 0xb) = uVal_6;
          *(uint32_t *)((int64_t)pLong_25 + 0x5c) = uVal_7;
          uVal_5 = param_2[0x11];
          uVal_6 = param_2[0x12];
          uVal_7 = param_2[0x13];
          *(uint32_t *)(pLong_25 + 8) = param_2[0x10];
          *(uint32_t *)((int64_t)pLong_25 + 0x44) = uVal_5;
          *(uint32_t *)(pLong_25 + 9) = uVal_6;
          *(uint32_t *)((int64_t)pLong_25 + 0x4c) = uVal_7;
          uVal_5 = *param_2;
          uVal_6 = param_2[1];
          uVal_7 = param_2[2];
          uVal_8 = param_2[3];
          uVal_9 = param_2[4];
          uVal_10 = param_2[5];
          uVal_11 = param_2[6];
          uVal_12 = param_2[7];
          uVal_13 = param_2[8];
          uVal_14 = param_2[9];
          uVal_15 = param_2[10];
          uVal_16 = param_2[0xb];
          uVal_17 = param_2[0xd];
          uVal_18 = param_2[0xe];
          uVal_19 = param_2[0xf];
          *(uint32_t *)(pLong_25 + 6) = param_2[0xc];
          *(uint32_t *)((int64_t)pLong_25 + 0x34) = uVal_17;
          *(uint32_t *)(pLong_25 + 7) = uVal_18;
          *(uint32_t *)((int64_t)pLong_25 + 0x3c) = uVal_19;
          *(uint32_t *)(pLong_25 + 4) = uVal_13;
          *(uint32_t *)((int64_t)pLong_25 + 0x24) = uVal_14;
          *(uint32_t *)(pLong_25 + 5) = uVal_15;
          *(uint32_t *)((int64_t)pLong_25 + 0x2c) = uVal_16;
          *(uint32_t *)(pLong_25 + 2) = uVal_9;
          *(uint32_t *)((int64_t)pLong_25 + 0x14) = uVal_10;
          *(uint32_t *)(pLong_25 + 3) = uVal_11;
          *(uint32_t *)((int64_t)pLong_25 + 0x1c) = uVal_12;
          *(uint32_t *)pLong_25 = uVal_5;
          *(uint32_t *)((int64_t)pLong_25 + 4) = uVal_6;
          *(uint32_t *)(pLong_25 + 1) = uVal_7;
          *(uint32_t *)((int64_t)pLong_25 + 0xc) = uVal_8;
          pLong_25[0xd] = 0;
          if (*(int64_t *)(param_2 + 0x1a) != 0) {
            lVal_20 = *(int64_t *)(param_2 + 0x18);
            lVal_28 = *(int64_t *)(param_2 + 0x1a) + lVal_20;
            lVal_23 = 0;
            do {
              uVal_31 = lVal_28 - lVal_20;
              uVal_26 = pLong_25[0xe];
              if (uVal_26 < lVal_23 + uVal_31) {
                (*(func_ptr_t )pLong_25[0xf])(pLong_25 + 0xc);
                lVal_23 = pLong_25[0xd];
                uVal_26 = pLong_25[0xe];
              }
              uVal_21 = uVal_26 - lVal_23;
              if (uVal_31 <= uVal_26 - lVal_23) {
                uVal_21 = uVal_31;
              }
              if (uVal_21 != 0) {
                lVal_4 = pLong_25[0xc];
                lVal_1 = lVal_4 + lVal_23;
                if ((uVal_21 < 4) || ((uint64_t)(lVal_1 - lVal_20) < 0x20)) {
                  uVal_26 = 0;
LAB_1806591b8:
                  uVal_27 = uVal_26;
                  for (uVal_31 = uVal_21 & 3; uVal_31 != 0; uVal_31 = uVal_31 - 1) {
                    *(uint8_t *)(lVal_1 + uVal_27) = *(uint8_t *)(lVal_20 + uVal_27);
                    uVal_27 = uVal_27 + 1;
                  }
                  if (uVal_26 - uVal_21 < 0xfffffffffffffffd) {
                    lVal_23 = lVal_23 + lVal_4;
                    do {
                      *(uint8_t *)(lVal_23 + uVal_27) = *(uint8_t *)(lVal_20 + uVal_27);
                      *(uint8_t *)(lVal_23 + 1 + uVal_27) = *(uint8_t *)(lVal_20 + 1 + uVal_27);
                      *(uint8_t *)(lVal_23 + 2 + uVal_27) = *(uint8_t *)(lVal_20 + 2 + uVal_27);
                      *(uint8_t *)(lVal_23 + 3 + uVal_27) = *(uint8_t *)(lVal_20 + 3 + uVal_27);
                      uVal_27 = uVal_27 + 4;
                    } while (uVal_21 != uVal_27);
                  }
                }
                else if (uVal_21 < 0x20) {
                  uVal_31 = 0;
LAB_180659290:
                  uVal_26 = uVal_21 & 0xfffffffffffffffc;
                  do {
                    *(uint32_t *)(lVal_1 + uVal_31) = *(uint32_t *)(lVal_20 + uVal_31);
                    uVal_31 = uVal_31 + 4;
                  } while (uVal_26 != uVal_31);
                  if (uVal_21 != uVal_26) goto LAB_1806591b8;
                }
                else {
                  uVal_26 = uVal_21 & 0xffffffffffffffe0;
                  uVal_31 = 0;
                  do {
                    pU64_2 = (uint32_t *)(lVal_20 + uVal_31);
                    uVal_5 = pU64_2[1];
                    uVal_6 = pU64_2[2];
                    uVal_7 = pU64_2[3];
                    pU64_3 = (uint32_t *)(lVal_20 + 0x10 + uVal_31);
                    uVal_8 = *pU64_3;
                    uVal_9 = pU64_3[1];
                    uVal_10 = pU64_3[2];
                    uVal_11 = pU64_3[3];
                    pU64_3 = (uint32_t *)(lVal_4 + lVal_23 + uVal_31);
                    *pU64_3 = *pU64_2;
                    pU64_3[1] = uVal_5;
                    pU64_3[2] = uVal_6;
                    pU64_3[3] = uVal_7;
                    pU64_2 = (uint32_t *)(lVal_4 + lVal_23 + 0x10 + uVal_31);
                    *pU64_2 = uVal_8;
                    pU64_2[1] = uVal_9;
                    pU64_2[2] = uVal_10;
                    pU64_2[3] = uVal_11;
                    uVal_31 = uVal_31 + 0x20;
                  } while (uVal_26 != uVal_31);
                  if (uVal_21 != uVal_26) {
                    uVal_31 = uVal_26;
                    if ((uVal_21 & 0x1c) == 0) goto LAB_1806591b8;
                    goto LAB_180659290;
                  }
                }
                lVal_23 = pLong_25[0xd];
              }
              lVal_23 = lVal_23 + uVal_21;
              pLong_25[0xd] = lVal_23;
              lVal_20 = lVal_20 + uVal_21;
            } while (lVal_20 != lVal_28);
          }
          *pLong_25 = pLong_25[0xc];
          pLong_25[10] = pLong_25[0xc] + pLong_25[1];
          pLong_25 = pLong_25 + 0x30;
          param_2 = param_2 + 0x60;
          pLong_30 = param_1[1];
        } while (pLong_25 != pLong_30);
      }
      pLong_29 = pLong_30;
      if (param_3 != uVal_22) {
        lVal_23 = uVal_22 - param_3;
        lVal_20 = 0;
        do {
          func_0x180652800((int64_t)pLong_30 + lVal_20,(int64_t)param_2 + lVal_20);
          lVal_20 = lVal_20 + 0x180;
          lVal_23 = lVal_23 + 1;
        } while (lVal_23 != 0);
        pLong_29 = (int64_t *)((int64_t)pLong_30 + lVal_20);
      }
    }
    else {
      uVal_22 = param_3;
      pLong_29 = pLong_25;
      if (param_3 != 0) {
        do {
          uVal_5 = param_2[0x15];
          uVal_6 = param_2[0x16];
          uVal_7 = param_2[0x17];
          *(uint32_t *)(pLong_29 + 10) = param_2[0x14];
          *(uint32_t *)((int64_t)pLong_29 + 0x54) = uVal_5;
          *(uint32_t *)(pLong_29 + 0xb) = uVal_6;
          *(uint32_t *)((int64_t)pLong_29 + 0x5c) = uVal_7;
          uVal_5 = param_2[0x11];
          uVal_6 = param_2[0x12];
          uVal_7 = param_2[0x13];
          *(uint32_t *)(pLong_29 + 8) = param_2[0x10];
          *(uint32_t *)((int64_t)pLong_29 + 0x44) = uVal_5;
          *(uint32_t *)(pLong_29 + 9) = uVal_6;
          *(uint32_t *)((int64_t)pLong_29 + 0x4c) = uVal_7;
          uVal_5 = *param_2;
          uVal_6 = param_2[1];
          uVal_7 = param_2[2];
          uVal_8 = param_2[3];
          uVal_9 = param_2[4];
          uVal_10 = param_2[5];
          uVal_11 = param_2[6];
          uVal_12 = param_2[7];
          uVal_13 = param_2[8];
          uVal_14 = param_2[9];
          uVal_15 = param_2[10];
          uVal_16 = param_2[0xb];
          uVal_17 = param_2[0xd];
          uVal_18 = param_2[0xe];
          uVal_19 = param_2[0xf];
          *(uint32_t *)(pLong_29 + 6) = param_2[0xc];
          *(uint32_t *)((int64_t)pLong_29 + 0x34) = uVal_17;
          *(uint32_t *)(pLong_29 + 7) = uVal_18;
          *(uint32_t *)((int64_t)pLong_29 + 0x3c) = uVal_19;
          *(uint32_t *)(pLong_29 + 4) = uVal_13;
          *(uint32_t *)((int64_t)pLong_29 + 0x24) = uVal_14;
          *(uint32_t *)(pLong_29 + 5) = uVal_15;
          *(uint32_t *)((int64_t)pLong_29 + 0x2c) = uVal_16;
          *(uint32_t *)(pLong_29 + 2) = uVal_9;
          *(uint32_t *)((int64_t)pLong_29 + 0x14) = uVal_10;
          *(uint32_t *)(pLong_29 + 3) = uVal_11;
          *(uint32_t *)((int64_t)pLong_29 + 0x1c) = uVal_12;
          *(uint32_t *)pLong_29 = uVal_5;
          *(uint32_t *)((int64_t)pLong_29 + 4) = uVal_6;
          *(uint32_t *)(pLong_29 + 1) = uVal_7;
          *(uint32_t *)((int64_t)pLong_29 + 0xc) = uVal_8;
          pLong_29[0xd] = 0;
          if (*(int64_t *)(param_2 + 0x1a) != 0) {
            lVal_20 = *(int64_t *)(param_2 + 0x18);
            lVal_28 = *(int64_t *)(param_2 + 0x1a) + lVal_20;
            lVal_23 = 0;
            do {
              uVal_31 = lVal_28 - lVal_20;
              uVal_26 = pLong_29[0xe];
              if (uVal_26 < uVal_31 + lVal_23) {
                (*(func_ptr_t )pLong_29[0xf])(pLong_29 + 0xc);
                lVal_23 = pLong_29[0xd];
                uVal_26 = pLong_29[0xe];
              }
              uVal_21 = uVal_26 - lVal_23;
              if (uVal_31 <= uVal_26 - lVal_23) {
                uVal_21 = uVal_31;
              }
              if (uVal_21 != 0) {
                lVal_4 = pLong_29[0xc];
                lVal_1 = lVal_4 + lVal_23;
                if ((uVal_21 < 4) || ((uint64_t)(lVal_1 - lVal_20) < 0x20)) {
                  uVal_26 = 0;
LAB_1806593e8:
                  uVal_27 = uVal_26;
                  for (uVal_31 = uVal_21 & 3; uVal_31 != 0; uVal_31 = uVal_31 - 1) {
                    *(uint8_t *)(lVal_1 + uVal_27) = *(uint8_t *)(lVal_20 + uVal_27);
                    uVal_27 = uVal_27 + 1;
                  }
                  if (uVal_26 - uVal_21 < 0xfffffffffffffffd) {
                    lVal_23 = lVal_23 + lVal_4;
                    do {
                      *(uint8_t *)(lVal_23 + uVal_27) = *(uint8_t *)(lVal_20 + uVal_27);
                      *(uint8_t *)(lVal_23 + 1 + uVal_27) = *(uint8_t *)(lVal_20 + 1 + uVal_27);
                      *(uint8_t *)(lVal_23 + 2 + uVal_27) = *(uint8_t *)(lVal_20 + 2 + uVal_27);
                      *(uint8_t *)(lVal_23 + 3 + uVal_27) = *(uint8_t *)(lVal_20 + 3 + uVal_27);
                      uVal_27 = uVal_27 + 4;
                    } while (uVal_21 != uVal_27);
                  }
                }
                else if (uVal_21 < 0x20) {
                  uVal_31 = 0;
LAB_1806594c0:
                  uVal_26 = uVal_21 & 0xfffffffffffffffc;
                  do {
                    *(uint32_t *)(lVal_1 + uVal_31) = *(uint32_t *)(lVal_20 + uVal_31);
                    uVal_31 = uVal_31 + 4;
                  } while (uVal_26 != uVal_31);
                  if (uVal_21 != uVal_26) goto LAB_1806593e8;
                }
                else {
                  uVal_26 = uVal_21 & 0xffffffffffffffe0;
                  uVal_31 = 0;
                  do {
                    pU64_2 = (uint32_t *)(lVal_20 + uVal_31);
                    uVal_5 = pU64_2[1];
                    uVal_6 = pU64_2[2];
                    uVal_7 = pU64_2[3];
                    pU64_3 = (uint32_t *)(lVal_20 + 0x10 + uVal_31);
                    uVal_8 = *pU64_3;
                    uVal_9 = pU64_3[1];
                    uVal_10 = pU64_3[2];
                    uVal_11 = pU64_3[3];
                    pU64_3 = (uint32_t *)(lVal_4 + lVal_23 + uVal_31);
                    *pU64_3 = *pU64_2;
                    pU64_3[1] = uVal_5;
                    pU64_3[2] = uVal_6;
                    pU64_3[3] = uVal_7;
                    pU64_2 = (uint32_t *)(lVal_4 + lVal_23 + 0x10 + uVal_31);
                    *pU64_2 = uVal_8;
                    pU64_2[1] = uVal_9;
                    pU64_2[2] = uVal_10;
                    pU64_2[3] = uVal_11;
                    uVal_31 = uVal_31 + 0x20;
                  } while (uVal_26 != uVal_31);
                  if (uVal_21 != uVal_26) {
                    uVal_31 = uVal_26;
                    if ((uVal_21 & 0x1c) == 0) goto LAB_1806593e8;
                    goto LAB_1806594c0;
                  }
                }
                lVal_23 = pLong_29[0xd];
              }
              lVal_23 = lVal_23 + uVal_21;
              pLong_29[0xd] = lVal_23;
              lVal_20 = lVal_20 + uVal_21;
            } while (lVal_20 != lVal_28);
          }
          *pLong_29 = pLong_29[0xc];
          pLong_29[10] = pLong_29[0xc] + pLong_29[1];
          param_2 = param_2 + 0x60;
          uVal_22 = uVal_22 - 1;
          pLong_29 = pLong_29 + 0x30;
        } while (uVal_22 != 0);
        pLong_30 = param_1[1];
      }
      pLong_29 = pLong_25 + param_3 * 0x30;
      if (pLong_29 != pLong_30) {
        pLong_25 = pLong_25 + param_3 * 0x30 + 0x10;
        do {
          if (pLong_25 != (int64_t *)pLong_25[-4]) {
            thunk_FUN_180695dd0();
          }
          pLong_24 = pLong_25 + 0x20;
          pLong_25 = pLong_25 + 0x30;
        } while (pLong_24 != pLong_30);
      }
    }
  }
  param_1[1] = pLong_29;
  return;
}

// Unwind@1806595a0
void Unwind_1806595a0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_2 = *(int64_t *)(param_2 + 0x38);
  if (lVal_2 != 0) {
    lVal_1 = *(int64_t *)(param_2 + 0x30) + 0x80;
    do {
      if (lVal_1 != *(int64_t *)(lVal_1 + -0x20)) {
        thunk_FUN_180695dd0();
      }
      lVal_1 = lVal_1 + 0x180;
      lVal_2 = lVal_2 + -0x180;
    } while (lVal_2 != 0);
  }
  return;
}

// Unwind@180659600
void Unwind_180659600(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_2 = *(int64_t *)(param_2 + 0x38);
  if (lVal_2 != 0) {
    lVal_1 = *(int64_t *)(param_2 + 0x30) + 0x80;
    do {
      if (lVal_1 != *(int64_t *)(lVal_1 + -0x20)) {
        thunk_FUN_180695dd0();
      }
      lVal_1 = lVal_1 + 0x180;
      lVal_2 = lVal_2 + -0x180;
    } while (lVal_2 != 0);
  }
  return;
}

// func_0x180659660
void func_0x180659660(uint8_t (*param_1)[16],uint64_t param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  
  if (param_2 < 0xaaaaaaaaaaaaab) {
    lVal_1 = *(int64_t *)*param_1;
    uVal_2 = *(int64_t *)param_1[1] - lVal_1;
    uVal_6 = ((int64_t)uVal_2 >> 7) * -0x5555555555555555;
    uVal_7 = 0xaaaaaaaaaaaaaa - (uVal_6 >> 1);
    uVal_3 = (uVal_6 >> 1) + uVal_6;
    if (uVal_3 <= param_2) {
      uVal_3 = param_2;
    }
    if (uVal_7 <= uVal_6 && uVal_6 - uVal_7 != 0) {
      uVal_3 = 0xaaaaaaaaaaaaaa;
    }
    if (lVal_1 != 0) {
      lVal_5 = *(int64_t *)(*param_1 + 8);
      if (lVal_1 != lVal_5) {
        lVal_1 = lVal_1 + 0x80;
        do {
          if (lVal_1 != *(int64_t *)(lVal_1 + -0x20)) {
            thunk_FUN_180695dd0();
          }
          lVal_4 = lVal_1 + 0x100;
          lVal_1 = lVal_1 + 0x180;
        } while (lVal_4 != lVal_5);
        lVal_1 = *(int64_t *)*param_1;
        uVal_2 = *(int64_t *)param_1[1] - lVal_1;
      }
      lVal_5 = lVal_1;
      if (0xfff < uVal_2) {
        lVal_5 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (lVal_1 - lVal_5) - 8U) goto LAB_1806597b5;
        uVal_2 = uVal_2 | 0x27;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_2);
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    if (uVal_3 < 0xaaaaaaaaaaaaab) {
      if (uVal_3 == 0) {
        uVal_2 = 0;
      }
      else if (uVal_3 < 0xb) {
        uVal_2 = func_0x180672de0(uVal_3 * 0x180);
      }
      else {
        lVal_1 = func_0x180672de0(uVal_3 * 0x180 | 0x27);
        uVal_2 = lVal_1 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_2 - 8) = lVal_1;
      }
      *(uint64_t *)*param_1 = uVal_2;
      *(uint64_t *)(*param_1 + 8) = uVal_2;
      *(uint64_t *)param_1[1] = uVal_3 * 0x180 + uVal_2;
      return;
    }
  }
  else {
    func_0x18007c0d0();
  }
  func_0x18007ba90();
LAB_1806597b5:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1806597c0
void func_0x1806597c0(uint64_t *param_1)
{
  func_0x1806597f0(param_1,*param_1);
  thunk_FUN_180695dd0(*param_1,0x40);
  return;
}

// func_0x1806597f0
void func_0x1806597f0(uint64_t param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t *pU64_3;
  int64_t *pLong_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t *pU64_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  
  *(uint64_t *)param_2[1] = 0;
  pU64_7 = (uint64_t *)*param_2;
  do {
    if (pU64_7 == (uint64_t *)0x0) {
      return;
    }
    pU64_3 = (uint64_t *)*pU64_7;
    pLong_4 = (int64_t *)pU64_7[7];
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
    uVal_5 = pU64_7[5];
    if (0xf < uVal_5) {
      lVal_6 = pU64_7[2];
      uVal_8 = uVal_5 + 1;
      lVal_9 = lVal_6;
      if (0xfff < uVal_8) {
        lVal_9 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_9)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_8 = uVal_5 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_8);
    }
    pU64_7[4] = 0;
    pU64_7[5] = 0xf;
    *(uint8_t *)(pU64_7 + 2) = 0;
    thunk_FUN_180695dd0(pU64_7,0x40);
    pU64_7 = pU64_3;
  } while( true );
}

// Unwind@18065aea0
void Unwind_18065aea0(void)
{
  byte *pU8_1;
  
  pU8_1 = (byte *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x1c398);
  *pU8_1 = *pU8_1 & 0xfe;
  return;
}

// Unwind@18065afe0
void Unwind_18065afe0(void)
{
  byte *pU8_1;
  
  pU8_1 = (byte *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x1c398);
  *pU8_1 = *pU8_1 & 0xfe;
  return;
}

// func_0x18065b020
void func_0x18065b020(uint64_t param_1,int64_t *param_2,int64_t *param_3)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  int64_t lVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t *pU64_13;
  uint64_t uVal_14;
  uint64_t *pU64_15;
  uint64_t *pU64_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  uint64_t *pU64_19;
  uint64_t uVal_20;
  uint64_t *pU64_21;
  bool bFlag_22;
  
  pU64_21 = (uint64_t *)*param_2;
  if (*(char *)((int64_t)pU64_21 + 0x19) == '\0') {
    pU64_13 = (uint64_t *)*pU64_21;
    pU64_19 = pU64_13;
    if (*(char *)((int64_t)pU64_13 + 0x19) == '\0') {
      do {
        pU64_15 = pU64_19;
        pU64_19 = (uint64_t *)pU64_15[2];
      } while (*(char *)((int64_t)pU64_19 + 0x19) == '\0');
    }
    else {
      pU64_15 = (uint64_t *)pU64_21[1];
      pU64_19 = pU64_21;
      if (*(char *)((int64_t)pU64_15 + 0x19) == '\0') {
        do {
          pU64_16 = pU64_15;
          if (pU64_19 != (uint64_t *)*pU64_15) break;
          pU64_16 = (uint64_t *)pU64_15[1];
          pU64_19 = pU64_15;
          pU64_15 = pU64_16;
        } while (*(char *)((int64_t)pU64_16 + 0x19) == '\0');
        pU64_15 = pU64_16;
        if (*(char *)((int64_t)pU64_19 + 0x19) != '\0') {
          pU64_15 = pU64_19;
        }
      }
    }
  }
  else {
    pU64_13 = (uint64_t *)*pU64_21;
    pU64_15 = (uint64_t *)pU64_21[2];
  }
  if (pU64_13 == pU64_21) {
    return;
  }
  uVal_11 = param_3[1];
LAB_18065b06c:
  if ((uint64_t)pU64_13[7] < 0x10) {
    pU64_21 = pU64_13 + 4;
    lVal_3 = pU64_13[6];
  }
  else {
    pU64_21 = (uint64_t *)pU64_13[4];
    lVal_3 = pU64_13[6];
  }
  if (lVal_3 != 0) {
    pU64_19 = (uint64_t *)(lVal_3 + (int64_t)pU64_21);
    do {
      uVal_20 = (int64_t)pU64_19 - (int64_t)pU64_21;
      uVal_17 = param_3[2];
      if (uVal_17 < uVal_11 + uVal_20) {
        (*(func_ptr_t )param_3[3])(param_3);
        uVal_11 = param_3[1];
        uVal_17 = param_3[2];
      }
      uVal_14 = uVal_17 - uVal_11;
      if (uVal_20 <= uVal_17 - uVal_11) {
        uVal_14 = uVal_20;
      }
      if (uVal_14 != 0) {
        lVal_12 = *param_3;
        lVal_3 = lVal_12 + uVal_11;
        if ((uVal_14 < 4) || ((uint64_t)(lVal_3 - (int64_t)pU64_21) < 0x20)) {
          uVal_17 = 0;
LAB_18065b117:
          uVal_18 = uVal_17;
          for (uVal_20 = uVal_14 & 3; uVal_20 != 0; uVal_20 = uVal_20 - 1) {
            *(uint8_t *)(lVal_3 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18);
            uVal_18 = uVal_18 + 1;
          }
          if (uVal_17 - uVal_14 < 0xfffffffffffffffd) {
            lVal_12 = uVal_11 + lVal_12;
            do {
              *(uint8_t *)(lVal_12 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18);
              *(uint8_t *)(lVal_12 + 1 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18 + 1);
              *(uint8_t *)(lVal_12 + 2 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18 + 2);
              *(uint8_t *)(lVal_12 + 3 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18 + 3);
              uVal_18 = uVal_18 + 4;
            } while (uVal_14 != uVal_18);
          }
        }
        else if (uVal_14 < 0x20) {
          uVal_20 = 0;
LAB_18065b1f1:
          uVal_17 = uVal_14 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_3 + uVal_20) = *(uint32_t *)((int64_t)pU64_21 + uVal_20);
            uVal_20 = uVal_20 + 4;
          } while (uVal_17 != uVal_20);
          if (uVal_14 != uVal_17) goto LAB_18065b117;
        }
        else {
          uVal_17 = uVal_14 & 0xffffffffffffffe0;
          uVal_20 = 0;
          do {
            pU64_1 = (uint32_t *)((int64_t)pU64_21 + uVal_20);
            uVal_4 = pU64_1[1];
            uVal_5 = pU64_1[2];
            uVal_6 = pU64_1[3];
            pU64_2 = (uint32_t *)((int64_t)pU64_21 + uVal_20 + 0x10);
            uVal_7 = *pU64_2;
            uVal_8 = pU64_2[1];
            uVal_9 = pU64_2[2];
            uVal_10 = pU64_2[3];
            pU64_2 = (uint32_t *)(lVal_12 + uVal_11 + uVal_20);
            *pU64_2 = *pU64_1;
            pU64_2[1] = uVal_4;
            pU64_2[2] = uVal_5;
            pU64_2[3] = uVal_6;
            pU64_1 = (uint32_t *)(lVal_12 + uVal_11 + 0x10 + uVal_20);
            *pU64_1 = uVal_7;
            pU64_1[1] = uVal_8;
            pU64_1[2] = uVal_9;
            pU64_1[3] = uVal_10;
            uVal_20 = uVal_20 + 0x20;
          } while (uVal_17 != uVal_20);
          if (uVal_14 != uVal_17) {
            uVal_20 = uVal_17;
            if ((uVal_14 & 0x1c) == 0) goto LAB_18065b117;
            goto LAB_18065b1f1;
          }
        }
        uVal_11 = param_3[1];
      }
      uVal_11 = uVal_11 + uVal_14;
      param_3[1] = uVal_11;
      pU64_21 = (uint64_t *)((int64_t)pU64_21 + uVal_14);
    } while (pU64_21 != pU64_19);
  }
  pU64_21 = pU64_13 + 8;
  uVal_17 = param_3[2];
  if (uVal_11 + 1 <= uVal_17) goto LAB_18065b262;
  do {
    (*(func_ptr_t )param_3[3])(param_3);
    uVal_11 = param_3[1];
    uVal_17 = param_3[2];
LAB_18065b262:
    do {
      uVal_20 = (uint64_t)(uVal_17 != uVal_11);
      if (uVal_17 != uVal_11) {
        *(uint8_t *)(*param_3 + uVal_11) = 0x3a;
        uVal_11 = uVal_20 + param_3[1];
        param_3[1] = uVal_11;
        if (0xf < (uint64_t)pU64_13[0xb]) {
          pU64_21 = (uint64_t *)pU64_13[8];
        }
        if (pU64_13[10] == 0) goto LAB_18065b410;
        pU64_19 = (uint64_t *)(pU64_13[10] + (int64_t)pU64_21);
        goto LAB_18065b2b7;
      }
      uVal_11 = uVal_11 + uVal_20;
      param_3[1] = uVal_11;
      uVal_17 = param_3[2];
    } while (uVal_11 + 1 <= uVal_17);
  } while( true );
LAB_18065b2b7:
  do {
    uVal_20 = (int64_t)pU64_19 - (int64_t)pU64_21;
    uVal_17 = param_3[2];
    if (uVal_17 < uVal_11 + uVal_20) {
      (*(func_ptr_t )param_3[3])(param_3);
      uVal_11 = param_3[1];
      uVal_17 = param_3[2];
    }
    uVal_14 = uVal_17 - uVal_11;
    if (uVal_20 <= uVal_17 - uVal_11) {
      uVal_14 = uVal_20;
    }
    if (uVal_14 != 0) {
      lVal_12 = *param_3;
      lVal_3 = lVal_12 + uVal_11;
      if ((uVal_14 < 4) || ((uint64_t)(lVal_3 - (int64_t)pU64_21) < 0x20)) {
        uVal_17 = 0;
LAB_18065b307:
        uVal_18 = uVal_17;
        for (uVal_20 = uVal_14 & 3; uVal_20 != 0; uVal_20 = uVal_20 - 1) {
          *(uint8_t *)(lVal_3 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18);
          uVal_18 = uVal_18 + 1;
        }
        if (uVal_17 - uVal_14 < 0xfffffffffffffffd) {
          lVal_12 = uVal_11 + lVal_12;
          do {
            *(uint8_t *)(lVal_12 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18);
            *(uint8_t *)(lVal_12 + 1 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18 + 1);
            *(uint8_t *)(lVal_12 + 2 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18 + 2);
            *(uint8_t *)(lVal_12 + 3 + uVal_18) = *(uint8_t *)((int64_t)pU64_21 + uVal_18 + 3);
            uVal_18 = uVal_18 + 4;
          } while (uVal_14 != uVal_18);
        }
      }
      else if (uVal_14 < 0x20) {
        uVal_20 = 0;
LAB_18065b3e1:
        uVal_17 = uVal_14 & 0xfffffffffffffffc;
        do {
          *(uint32_t *)(lVal_3 + uVal_20) = *(uint32_t *)((int64_t)pU64_21 + uVal_20);
          uVal_20 = uVal_20 + 4;
        } while (uVal_17 != uVal_20);
        if (uVal_14 != uVal_17) goto LAB_18065b307;
      }
      else {
        uVal_17 = uVal_14 & 0xffffffffffffffe0;
        uVal_20 = 0;
        do {
          pU64_1 = (uint32_t *)((int64_t)pU64_21 + uVal_20);
          uVal_4 = pU64_1[1];
          uVal_5 = pU64_1[2];
          uVal_6 = pU64_1[3];
          pU64_2 = (uint32_t *)((int64_t)pU64_21 + uVal_20 + 0x10);
          uVal_7 = *pU64_2;
          uVal_8 = pU64_2[1];
          uVal_9 = pU64_2[2];
          uVal_10 = pU64_2[3];
          pU64_2 = (uint32_t *)(lVal_12 + uVal_11 + uVal_20);
          *pU64_2 = *pU64_1;
          pU64_2[1] = uVal_4;
          pU64_2[2] = uVal_5;
          pU64_2[3] = uVal_6;
          pU64_1 = (uint32_t *)(lVal_12 + uVal_11 + 0x10 + uVal_20);
          *pU64_1 = uVal_7;
          pU64_1[1] = uVal_8;
          pU64_1[2] = uVal_9;
          pU64_1[3] = uVal_10;
          uVal_20 = uVal_20 + 0x20;
        } while (uVal_17 != uVal_20);
        if (uVal_14 != uVal_17) {
          uVal_20 = uVal_17;
          if ((uVal_14 & 0x1c) == 0) goto LAB_18065b307;
          goto LAB_18065b3e1;
        }
      }
      uVal_11 = param_3[1];
    }
    uVal_11 = uVal_11 + uVal_14;
    param_3[1] = uVal_11;
    pU64_21 = (uint64_t *)((int64_t)pU64_21 + uVal_14);
  } while (pU64_21 != pU64_19);
LAB_18065b410:
  if (pU64_13 != pU64_15) {
    uVal_17 = param_3[2];
    if (uVal_11 + 1 <= uVal_17) goto LAB_18065b43b;
    do {
      (*(func_ptr_t )param_3[3])(param_3);
      uVal_11 = param_3[1];
      uVal_17 = param_3[2];
LAB_18065b43b:
      do {
        uVal_20 = (uint64_t)(uVal_17 != uVal_11);
        if (uVal_17 != uVal_11) {
          *(uint8_t *)(*param_3 + uVal_11) = 0x20;
          uVal_11 = uVal_20 + param_3[1];
          param_3[1] = uVal_11;
          goto LAB_18065b472;
        }
        uVal_11 = uVal_11 + uVal_20;
        param_3[1] = uVal_11;
        uVal_17 = param_3[2];
      } while (uVal_11 + 1 <= uVal_17);
    } while( true );
  }
LAB_18065b472:
  pU64_21 = (uint64_t *)pU64_13[2];
  pU64_19 = pU64_13;
  if (*(char *)((int64_t)(uint64_t *)pU64_13[2] + 0x19) == '\0') {
    do {
      pU64_13 = pU64_21;
      pU64_21 = (uint64_t *)*pU64_13;
    } while (*(char *)((int64_t)(uint64_t *)*pU64_13 + 0x19) == '\0');
  }
  else {
    do {
      pU64_13 = (uint64_t *)pU64_19[1];
      if (*(char *)((int64_t)pU64_13 + 0x19) != '\0') break;
      bFlag_22 = pU64_19 == (uint64_t *)pU64_13[2];
      pU64_19 = pU64_13;
    } while (bFlag_22);
  }
  if (pU64_13 == (uint64_t *)*param_2) {
    return;
  }
  goto LAB_18065b06c;
}

// func_0x18065b590
int64_t func_0x18065b590(int64_t param_1,uint64_t param_2)
{
  if (*(int64_t *)(param_1 + 0x20) != param_1 + 0x40) {
    thunk_FUN_180695dd0();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x158);
  }
  return param_1;
}

// func_0x18065b5d0
void func_0x18065b5d0(uint param_1,int64_t *param_2)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  func_ptr_t fnPtr_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  byte bFlag_13;
  uint uVal_14;
  int64_t lVal_15;
  uint uVal_16;
  int iVal_17;
  uint uVal_18;
  uint64_t uVal_19;
  uint8_t *pU64_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  uint8_t auStack_78 [40];
  uint16_t auStack_50 [10];
  uint8_t auStack_3b [3];
  uint8_t *puStack_38;
  uint64_t uStack_30;
  
  uStack_30 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  if (param_1 < 1000) {
    uVal_16 = (uint)(((uint64_t)param_1 & 0xffff) >> 2) / 0x19;
    iVal_17 = param_1 + uVal_16 * -100;
    lVal_15 = param_2[1];
    uVal_21 = lVal_15 + 1;
    if ((uint64_t)param_2[2] < uVal_21) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_15 = param_2[1];
      uVal_21 = lVal_15 + 1;
    }
    param_2[1] = uVal_21;
    *(byte *)(*param_2 + lVal_15) = (byte)uVal_16 | 0x30;
    bFlag_13 = (byte)((iVal_17 * 0xcd & 0xffffU) >> 0xb);
    lVal_15 = param_2[1];
    uVal_21 = lVal_15 + 1;
    if ((uint64_t)param_2[2] < uVal_21) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_15 = param_2[1];
      uVal_21 = lVal_15 + 1;
    }
    param_2[1] = uVal_21;
    *(byte *)(*param_2 + lVal_15) = bFlag_13 | 0x30;
    lVal_15 = param_2[1];
    uVal_21 = lVal_15 + 1;
    if ((uint64_t)param_2[2] < uVal_21) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_15 = param_2[1];
      uVal_21 = lVal_15 + 1;
    }
    param_2[1] = uVal_21;
    *(byte *)(*param_2 + lVal_15) = (char)iVal_17 + bFlag_13 * -10 | 0x30;
  }
  else {
    uVal_21 = (uint64_t)param_1;
    uVal_16 = 0x13;
    do {
      uVal_14 = uVal_16;
      uVal_18 = (uint)uVal_21;
      uVal_19 = uVal_21 / 100;
      uVal_23 = uVal_21 / 100;
      *(uint16_t *)((int64_t)auStack_50 + (uint64_t)uVal_14) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_18 + (int)uVal_23 * -100) * 2);
      uVal_21 = uVal_19;
      uVal_16 = uVal_14 - 2;
    } while (9999 < uVal_18);
    if (uVal_18 < 1000) {
      uVal_21 = (uint64_t)(uVal_14 - 1);
      *(byte *)((int64_t)auStack_50 + uVal_21) = (byte)uVal_19 | 0x30;
      pU64_20 = (uint8_t *)((int64_t)auStack_50 + uVal_21);
      puStack_38 = pU64_20;
    }
    else {
      uVal_21 = (uint64_t)(uVal_14 - 2);
      *(uint16_t *)((int64_t)auStack_50 + uVal_21) = *(uint16_t *)(&DAT_1806afb50 + uVal_23 * 2);
      pU64_20 = (uint8_t *)((int64_t)auStack_50 + uVal_21);
      puStack_38 = pU64_20;
    }
    puStack_38 = pU64_20;
    if (uVal_21 != 0x15) {
      lVal_15 = param_2[1];
      do {
        uVal_23 = (int64_t)auStack_3b - (int64_t)pU64_20;
        uVal_21 = param_2[2];
        if (uVal_21 < uVal_23 + lVal_15) {
          (*(func_ptr_t )param_2[3])(param_2);
          lVal_15 = param_2[1];
          uVal_21 = param_2[2];
        }
        uVal_19 = uVal_21 - lVal_15;
        if (uVal_23 <= uVal_21 - lVal_15) {
          uVal_19 = uVal_23;
        }
        if (uVal_19 != 0) {
          lVal_4 = *param_2;
          lVal_1 = lVal_4 + lVal_15;
          if ((uVal_19 < 4) || ((uint64_t)(lVal_1 - (int64_t)pU64_20) < 0x20)) {
            uVal_21 = 0;
LAB_18065b7c7:
            uVal_22 = uVal_21;
            for (uVal_23 = uVal_19 & 3; uVal_23 != 0; uVal_23 = uVal_23 - 1) {
              *(uint8_t *)(lVal_1 + uVal_22) = pU64_20[uVal_22];
              uVal_22 = uVal_22 + 1;
            }
            if (uVal_21 - uVal_19 < 0xfffffffffffffffd) {
              lVal_15 = lVal_15 + lVal_4;
              do {
                *(uint8_t *)(lVal_15 + uVal_22) = pU64_20[uVal_22];
                *(uint8_t *)(lVal_15 + 1 + uVal_22) = pU64_20[uVal_22 + 1];
                *(uint8_t *)(lVal_15 + 2 + uVal_22) = pU64_20[uVal_22 + 2];
                *(uint8_t *)(lVal_15 + 3 + uVal_22) = pU64_20[uVal_22 + 3];
                uVal_22 = uVal_22 + 4;
              } while (uVal_19 != uVal_22);
            }
          }
          else if (uVal_19 < 0x20) {
            uVal_23 = 0;
LAB_18065b8a0:
            uVal_21 = uVal_19 & 0xfffffffffffffffc;
            do {
              *(uint32_t *)(lVal_1 + uVal_23) = *(uint32_t *)(pU64_20 + uVal_23);
              uVal_23 = uVal_23 + 4;
            } while (uVal_21 != uVal_23);
            if (uVal_19 != uVal_21) goto LAB_18065b7c7;
          }
          else {
            uVal_21 = uVal_19 & 0xffffffffffffffe0;
            uVal_23 = 0;
            do {
              pU64_2 = (uint32_t *)(pU64_20 + uVal_23);
              uVal_6 = pU64_2[1];
              uVal_7 = pU64_2[2];
              uVal_8 = pU64_2[3];
              pU64_3 = (uint32_t *)(pU64_20 + uVal_23 + 0x10);
              uVal_9 = *pU64_3;
              uVal_10 = pU64_3[1];
              uVal_11 = pU64_3[2];
              uVal_12 = pU64_3[3];
              pU64_3 = (uint32_t *)(lVal_4 + lVal_15 + uVal_23);
              *pU64_3 = *pU64_2;
              pU64_3[1] = uVal_6;
              pU64_3[2] = uVal_7;
              pU64_3[3] = uVal_8;
              pU64_2 = (uint32_t *)(lVal_4 + lVal_15 + 0x10 + uVal_23);
              *pU64_2 = uVal_9;
              pU64_2[1] = uVal_10;
              pU64_2[2] = uVal_11;
              pU64_2[3] = uVal_12;
              uVal_23 = uVal_23 + 0x20;
            } while (uVal_21 != uVal_23);
            if (uVal_19 != uVal_21) {
              uVal_23 = uVal_21;
              if ((uVal_19 & 0x1c) == 0) goto LAB_18065b7c7;
              goto LAB_18065b8a0;
            }
          }
          lVal_15 = param_2[1];
        }
        lVal_15 = lVal_15 + uVal_19;
        param_2[1] = lVal_15;
        pU64_20 = pU64_20 + uVal_19;
      } while (pU64_20 != auStack_3b);
    }
  }
  if (DAT_18083cf40 == (uStack_30 ^ (uint64_t)auStack_78)) {
    return;
  }
  func_0x180673080(uStack_30 ^ (uint64_t)auStack_78);
  fnPtr_5 = (func_ptr_t )swi(3);
  (*fnPtr_5)();
  return;
}

// func_0x18065baa0
int64_t func_0x18065baa0(int64_t param_1,uint param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_1 + 0x30);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_1 + 0x18);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0xf;
  *(uint8_t *)(param_1 + 0x18) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x38);
  }
  return param_1;
}

// func_0x18065bb20
uint32_t * func_0x18065bb20(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_2 = func_0x180672de0(0x40);
  *(int64_t *)lVal_2 = lVal_2;
  *(int64_t *)(lVal_2 + 8) = lVal_2;
  *(int64_t *)(param_1 + 2) = lVal_2;
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 7;
  *(uint64_t *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  pLong_3 = (int64_t *)func_0x180672de0(0x80);
  lVal_1 = *(int64_t *)(param_1 + 6);
  uVal_5 = *(int64_t *)(param_1 + 10) - lVal_1;
  if (uVal_5 != 0) {
    lVal_4 = lVal_1;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
  }
  *(int64_t **)(param_1 + 6) = pLong_3;
  *(int64_t **)(param_1 + 8) = pLong_3 + 0x10;
  *(int64_t **)(param_1 + 10) = pLong_3 + 0x10;
  *pLong_3 = lVal_2;
  pLong_3[1] = lVal_2;
  pLong_3[2] = lVal_2;
  pLong_3[3] = lVal_2;
  pLong_3[4] = lVal_2;
  pLong_3[5] = lVal_2;
  pLong_3[6] = lVal_2;
  pLong_3[7] = lVal_2;
  pLong_3[8] = lVal_2;
  pLong_3[9] = lVal_2;
  pLong_3[10] = lVal_2;
  pLong_3[0xb] = lVal_2;
  pLong_3[0xc] = lVal_2;
  pLong_3[0xd] = lVal_2;
  pLong_3[0xe] = lVal_2;
  pLong_3[0xf] = lVal_2;
  return param_1;
}

// Unwind@18065bc40
void Unwind_18065bc40(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x1806597c0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x18065bcb0
void func_0x18065bcb0(uint64_t param_1,char **param_2,uint8_t (*param_3)[16])
{
  char *_Str;
  func_ptr_t fnPtr_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = *(uint32_t *)*param_3;
  uStack_64 = *(uint32_t *)(*param_3 + 4);
  uStack_60 = *(uint32_t *)(*param_3 + 8);
  uStack_5c = *(uint32_t *)(*param_3 + 0xc);
  *param_3 = ZEXT816(0);
  _Str = *param_2;
  local_58 = ZEXT816(0);
  sz_2 = strlen(_Str);
  if (-1 < (int64_t)sz_2) {
    if (sz_2 < 0x10) {
      pU64_5 = local_58;
      uVal_6 = 0xf;
    }
    else {
      uVal_3 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_6 + 0x28);
        pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -8) = lVal_4;
      }
      local_58._0_8_ = pU64_5;
    }
    local_48 = sz_2;
    local_40 = uVal_6;
    func_0x1806aa960(pU64_5,_Str,sz_2);
    pU64_5[sz_2] = 0;
    func_0x1800f2690(param_1,local_58,&local_68);
    return;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065bda0
void Unwind_18065bda0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x20);
  return;
}

// func_0x18065bdd0
/* WARNING: Removing unreachable block (ram,0x00018065c1dc) */
/* WARNING: Removing unreachable block (ram,0x00018065c1e5) */
/* WARNING: Removing unreachable block (ram,0x00018065c1eb) */
/* WARNING: Removing unreachable block (ram,0x00018065c1f9) */
/* WARNING: Removing unreachable block (ram,0x00018065c202) */
/* WARNING: Removing unreachable block (ram,0x00018065c20c) */
/* WARNING: Removing unreachable block (ram,0x00018065c21d) */
/* WARNING: Removing unreachable block (ram,0x00018065c22e) */
/* WARNING: Removing unreachable block (ram,0x00018065c238) */
/* WARNING: Removing unreachable block (ram,0x00018065c23d) */
/* WARNING: Removing unreachable block (ram,0x00018065c25a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x00018065c1dc) */
/* WARNING: Removing unreachable block (ram,0x00018065c1e5) */
/* WARNING: Removing unreachable block (ram,0x00018065c1eb) */
/* WARNING: Removing unreachable block (ram,0x00018065c1f9) */
/* WARNING: Removing unreachable block (ram,0x00018065c202) */
/* WARNING: Removing unreachable block (ram,0x00018065c20c) */
/* WARNING: Removing unreachable block (ram,0x00018065c21d) */
/* WARNING: Removing unreachable block (ram,0x00018065c22e) */
/* WARNING: Removing unreachable block (ram,0x00018065c238) */
/* WARNING: Removing unreachable block (ram,0x00018065c23d) */
/* WARNING: Removing unreachable block (ram,0x00018065c25a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18065bdd0(float *param_1,uint64_t *param_2,uint64_t *param_3)
{
  size_t _Size;
  uint64_t *pU64_1;
  size_t sz_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  int iVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t *pU64_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint64_t *pU64_16;
  uint64_t *pU64_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  uint64_t *pU64_21;
  float fVal_22;
  uint8_t auArr_23 [16];
  float fVal_24;
  
  uVal_14 = param_3[2];
  pU64_13 = param_3;
  if (0xf < (uint64_t)param_3[3]) {
    pU64_13 = (uint64_t *)*param_3;
  }
  if (uVal_14 == 0) {
    uVal_19 = 0xcbf29ce484222325;
  }
  else {
    uVal_11 = (uint64_t)((uint)uVal_14 & 3);
    if (uVal_14 < 4) {
      uVal_19 = 0xcbf29ce484222325;
      uVal_15 = 0;
    }
    else {
      uVal_19 = 0xcbf29ce484222325;
      uVal_15 = 0;
      do {
        uVal_19 = ((uint64_t)*(byte *)((int64_t)pU64_13 + uVal_15 + 3) ^
                 ((uint64_t)*(byte *)((int64_t)pU64_13 + uVal_15 + 2) ^
                 ((uint64_t)*(byte *)((int64_t)pU64_13 + uVal_15 + 1) ^
                 (*(byte *)((int64_t)pU64_13 + uVal_15) ^ uVal_19) * 0x100000001b3) * 0x100000001b3)
                 * 0x100000001b3) * 0x100000001b3;
        uVal_15 = uVal_15 + 4;
      } while ((uVal_14 & 0xfffffffffffffffc) != uVal_15);
      if (uVal_11 == 0) goto LAB_18065bec7;
    }
    uVal_18 = 0;
    do {
      uVal_19 = (*(byte *)((int64_t)pU64_13 + uVal_18 + uVal_15) ^ uVal_19) * 0x100000001b3;
      uVal_18 = uVal_18 + 1;
    } while (uVal_11 != uVal_18);
  }
LAB_18065bec7:
  pU64_17 = *(uint64_t **)(param_1 + 2);
  lVal_12 = (*(uint64_t *)(param_1 + 0xc) & uVal_19) * 0x10;
  pU64_16 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_12);
  if (pU64_16 != pU64_17) {
    pU64_21 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_12);
    pU64_17 = pU64_16;
    if (uVal_14 == 0) {
      for (; pU64_17[4] != 0; pU64_17 = (uint64_t *)pU64_17[1]) {
        if (pU64_17 == pU64_21) goto LAB_18065bf74;
      }
LAB_18065bf60:
      *param_2 = pU64_17;
      *(uint8_t *)(param_2 + 1) = 0;
      return param_2;
    }
    uVal_11 = pU64_16[4];
    while( true ) {
      if (uVal_14 == uVal_11) {
        if ((uint64_t)pU64_17[5] < 0x10) {
          pU64_16 = pU64_17 + 2;
        }
        else {
          pU64_16 = (uint64_t *)pU64_17[2];
        }
        iVal_10 = memcmp(pU64_13,pU64_16,uVal_14);
        if (iVal_10 == 0) goto LAB_18065bf60;
      }
      if (pU64_17 == pU64_21) break;
      pU64_17 = (uint64_t *)pU64_17[1];
      uVal_11 = pU64_17[4];
    }
  }
LAB_18065bf74:
  if (*(int64_t *)(param_1 + 4) == 0x3ffffffffffffff) {
    func_0x1806744c0("unordered_map/set too long");
    do {
      invalidInstructionException();
    } while( true );
  }
  pU64_13 = (uint64_t *)func_0x180672de0(0x40);
  uVal_3 = *(uint32_t *)param_3;
  uVal_4 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_5 = *(uint32_t *)(param_3 + 1);
  uVal_6 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_7 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_8 = *(uint32_t *)(param_3 + 3);
  uVal_9 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  *(uint32_t *)(pU64_13 + 4) = *(uint32_t *)(param_3 + 2);
  *(uint32_t *)((int64_t)pU64_13 + 0x24) = uVal_7;
  *(uint32_t *)(pU64_13 + 5) = uVal_8;
  *(uint32_t *)((int64_t)pU64_13 + 0x2c) = uVal_9;
  *(uint32_t *)(pU64_13 + 2) = uVal_3;
  *(uint32_t *)((int64_t)pU64_13 + 0x14) = uVal_4;
  *(uint32_t *)(pU64_13 + 3) = uVal_5;
  *(uint32_t *)((int64_t)pU64_13 + 0x1c) = uVal_6;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(uint8_t *)param_3 = 0;
  *(uint8_t (*)[16])(pU64_13 + 6) = ZEXT816(0);
  uVal_14 = *(int64_t *)(param_1 + 4) + 1;
  if ((int64_t)uVal_14 < 0) {
    fVal_22 = (float)((uint64_t)((uint)uVal_14 & 1) | uVal_14 >> 1);
    auArr_23 = ZEXT416((uint)(fVal_22 + fVal_22));
    fVal_22 = *param_1;
    uVal_14 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_14 < 0) goto LAB_18065bfeb;
LAB_18065c038:
    if (auArr_23._0_4_ / (float)uVal_14 <= fVal_22) goto LAB_18065c169;
  }
  else {
    auArr_23 = ZEXT416((uint)(float)uVal_14);
    fVal_22 = *param_1;
    uVal_14 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_14) goto LAB_18065c038;
LAB_18065bfeb:
    fVal_24 = (float)((uint64_t)((uint)uVal_14 & 1) | uVal_14 >> 1);
    if (auArr_23._0_4_ / (fVal_24 + fVal_24) <= fVal_22) goto LAB_18065c169;
  }
  auArr_23._0_4_ = auArr_23._0_4_ / fVal_22;
  auArr_23 = roundss(auArr_23,auArr_23,10);
  uVal_15 = (uint64_t)auArr_23._0_4_;
  uVal_15 = (int64_t)(auArr_23._0_4_ - _DAT_1806ae420) & (int64_t)uVal_15 >> 0x3f | uVal_15;
  uVal_11 = 8;
  if (8 < uVal_15) {
    uVal_11 = uVal_15;
  }
  uVal_15 = uVal_14;
  if (uVal_14 < uVal_11) {
    uVal_15 = uVal_14 * 8;
    if (uVal_15 < uVal_11 || uVal_15 - uVal_11 == 0) {
      uVal_15 = uVal_11;
    }
    if (0x1ff < uVal_14) {
      uVal_15 = uVal_11;
    }
  }
  func_0x180095f50(param_1,uVal_15);
  pU64_17 = *(uint64_t **)(param_1 + 2);
  lVal_12 = *(int64_t *)(param_1 + 6);
  lVal_20 = (*(uint64_t *)(param_1 + 0xc) & uVal_19) * 0x10;
  pU64_16 = *(uint64_t **)(lVal_12 + 8 + lVal_20);
  if (pU64_16 != pU64_17) {
    _Size = pU64_13[4];
    if ((uint64_t)pU64_13[5] < 0x10) {
      pU64_21 = pU64_13 + 2;
      pU64_1 = *(uint64_t **)(lVal_12 + lVal_20);
    }
    else {
      pU64_21 = (uint64_t *)pU64_13[2];
      pU64_1 = *(uint64_t **)(lVal_12 + lVal_20);
    }
    pU64_17 = pU64_16;
    if (_Size == 0) {
      for (; pU64_17[4] != 0; pU64_17 = (uint64_t *)pU64_17[1]) {
        if (pU64_17 == pU64_1) goto LAB_18065c169;
      }
LAB_18065c165:
      pU64_17 = (uint64_t *)*pU64_17;
    }
    else {
      sz_2 = pU64_16[4];
      while( true ) {
        if (_Size == sz_2) {
          if ((uint64_t)pU64_17[5] < 0x10) {
            pU64_16 = pU64_17 + 2;
          }
          else {
            pU64_16 = (uint64_t *)pU64_17[2];
          }
          iVal_10 = memcmp(pU64_21,pU64_16,_Size);
          if (iVal_10 == 0) goto LAB_18065c165;
        }
        if (pU64_17 == pU64_1) break;
        pU64_17 = (uint64_t *)pU64_17[1];
        sz_2 = pU64_17[4];
      }
    }
  }
LAB_18065c169:
  pU64_16 = (uint64_t *)pU64_17[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_13 = pU64_17;
  pU64_13[1] = pU64_16;
  *pU64_16 = pU64_13;
  pU64_17[1] = pU64_13;
  lVal_12 = *(int64_t *)(param_1 + 6);
  lVal_20 = (uVal_19 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_12 + lVal_20) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_12 + lVal_20) = pU64_13;
    *(uint64_t **)(lVal_12 + 8 + lVal_20) = pU64_13;
  }
  else if (*(uint64_t **)(lVal_12 + lVal_20) == pU64_17) {
    *(uint64_t **)(lVal_12 + lVal_20) = pU64_13;
  }
  else if (*(uint64_t **)(lVal_12 + 8 + lVal_20) == pU64_16) {
    *(uint64_t **)(lVal_12 + 8 + lVal_20) = pU64_13;
  }
  *param_2 = pU64_13;
  *(uint8_t *)(param_2 + 1) = 1;
  return param_2;
}

// Unwind@18065c290
void Unwind_18065c290(uint64_t param_1,int64_t param_2)
{
  func_0x18065c2d0(param_2 + 0x28);
  return;
}

// func_0x18065c2d0
void func_0x18065c2d0(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  
  lVal_3 = *(int64_t *)(param_1 + 8);
  if (lVal_3 != 0) {
    pLong_4 = *(int64_t **)(lVal_3 + 0x38);
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
    uVal_5 = *(uint64_t *)(lVal_3 + 0x28);
    if (0xf < uVal_5) {
      lVal_6 = *(int64_t *)(lVal_3 + 0x10);
      uVal_7 = uVal_5 + 1;
      lVal_8 = lVal_6;
      if (0xfff < uVal_7) {
        lVal_8 = *(int64_t *)(lVal_6 + -8);
        if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_8)) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_7 = uVal_5 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_7);
    }
    *(uint64_t *)(lVal_3 + 0x20) = 0;
    *(uint64_t *)(lVal_3 + 0x28) = 0xf;
    *(uint8_t *)(lVal_3 + 0x10) = 0;
    if (*(int64_t *)(param_1 + 8) != 0) {
      thunk_FUN_180695dd0(*(int64_t *)(param_1 + 8),0x40);
      return;
    }
  }
  return;
}

// func_0x18065c380
/* WARNING: Removing unreachable block (ram,0x00018065c745) */
/* WARNING: Removing unreachable block (ram,0x00018065c74e) */
/* WARNING: Removing unreachable block (ram,0x00018065c754) */
/* WARNING: Removing unreachable block (ram,0x00018065c762) */
/* WARNING: Removing unreachable block (ram,0x00018065c76b) */
/* WARNING: Removing unreachable block (ram,0x00018065c775) */
/* WARNING: Removing unreachable block (ram,0x00018065c786) */
/* WARNING: Removing unreachable block (ram,0x00018065c797) */
/* WARNING: Removing unreachable block (ram,0x00018065c7a1) */
/* WARNING: Removing unreachable block (ram,0x00018065c7a6) */
/* WARNING: Removing unreachable block (ram,0x00018065c7c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x00018065c745) */
/* WARNING: Removing unreachable block (ram,0x00018065c74e) */
/* WARNING: Removing unreachable block (ram,0x00018065c754) */
/* WARNING: Removing unreachable block (ram,0x00018065c762) */
/* WARNING: Removing unreachable block (ram,0x00018065c76b) */
/* WARNING: Removing unreachable block (ram,0x00018065c775) */
/* WARNING: Removing unreachable block (ram,0x00018065c786) */
/* WARNING: Removing unreachable block (ram,0x00018065c797) */
/* WARNING: Removing unreachable block (ram,0x00018065c7a1) */
/* WARNING: Removing unreachable block (ram,0x00018065c7a6) */
/* WARNING: Removing unreachable block (ram,0x00018065c7c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18065c380(float *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t *pU64_1;
  size_t _Size;
  size_t sz_2;
  int iVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t *pU64_8;
  uint64_t *pU64_9;
  uint64_t *pU64_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  float fVal_14;
  uint64_t extraout_XMM0_Qb;
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  float fVal_18;
  uint64_t *local_70;
  uint64_t *local_68;
  uint8_t local_60 [8];
  uint64_t *local_58;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVal_6 = param_3[2];
  pU64_9 = param_3;
  if (0xf < (uint64_t)param_3[3]) {
    pU64_9 = (uint64_t *)*param_3;
  }
  if (uVal_6 == 0) {
    uVal_12 = 0xcbf29ce484222325;
  }
  else {
    uVal_4 = (uint64_t)((uint)uVal_6 & 3);
    if (uVal_6 < 4) {
      uVal_12 = 0xcbf29ce484222325;
      uVal_7 = 0;
    }
    else {
      uVal_12 = 0xcbf29ce484222325;
      uVal_7 = 0;
      do {
        uVal_12 = ((uint64_t)*(byte *)((int64_t)pU64_9 + uVal_7 + 3) ^
                 ((uint64_t)*(byte *)((int64_t)pU64_9 + uVal_7 + 2) ^
                 ((uint64_t)*(byte *)((int64_t)pU64_9 + uVal_7 + 1) ^
                 (*(byte *)((int64_t)pU64_9 + uVal_7) ^ uVal_12) * 0x100000001b3) * 0x100000001b3) *
                 0x100000001b3) * 0x100000001b3;
        uVal_7 = uVal_7 + 4;
      } while ((uVal_6 & 0xfffffffffffffffc) != uVal_7);
      if (uVal_4 == 0) goto LAB_18065c467;
    }
    uVal_11 = 0;
    do {
      uVal_12 = (*(byte *)((int64_t)pU64_9 + uVal_11 + uVal_7) ^ uVal_12) * 0x100000001b3;
      uVal_11 = uVal_11 + 1;
    } while (uVal_4 != uVal_11);
  }
LAB_18065c467:
  pU64_10 = *(uint64_t **)(param_1 + 2);
  lVal_5 = (*(uint64_t *)(param_1 + 0xc) & uVal_12) * 0x10;
  pU64_8 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_5);
  local_68 = param_2;
  if (pU64_8 != pU64_10) {
    pU64_1 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_5);
    pU64_10 = pU64_8;
    if (uVal_6 == 0) {
      for (; pU64_10[4] != 0; pU64_10 = (uint64_t *)pU64_10[1]) {
        if (pU64_10 == pU64_1) goto LAB_18065c503;
      }
LAB_18065c4f0:
      *local_68 = pU64_10;
      *(uint8_t *)(local_68 + 1) = 0;
      return local_68;
    }
    uVal_4 = pU64_8[4];
    while( true ) {
      if (uVal_6 == uVal_4) {
        if ((uint64_t)pU64_10[5] < 0x10) {
          pU64_8 = pU64_10 + 2;
        }
        else {
          pU64_8 = (uint64_t *)pU64_10[2];
        }
        iVal_3 = memcmp(pU64_9,pU64_8,uVal_6);
        if (iVal_3 == 0) goto LAB_18065c4f0;
      }
      if (pU64_10 == pU64_1) break;
      pU64_10 = (uint64_t *)pU64_10[1];
      uVal_4 = pU64_10[4];
    }
  }
LAB_18065c503:
  if (*(int64_t *)(param_1 + 4) == 0x3ffffffffffffff) {
    func_0x1806744c0("unordered_map/set too long");
    do {
      invalidInstructionException();
    } while( true );
  }
  local_70 = param_3;
  auArr_17._0_8_ = func_0x18065c830(local_60,param_1 + 2,&DAT_1806b0a10,&local_70,&local_49);
  auArr_17._8_8_ = extraout_XMM0_Qb;
  uVal_6 = *(int64_t *)(param_1 + 4) + 1;
  auArr_15._4_12_ = auArr_17._4_12_;
  if ((int64_t)uVal_6 < 0) {
    fVal_14 = (float)((uint64_t)((uint)uVal_6 & 1) | uVal_6 >> 1);
    auArr_15._0_4_ = fVal_14 + fVal_14;
    fVal_14 = *param_1;
    uVal_6 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_6 < 0) goto LAB_18065c557;
LAB_18065c5a1:
    if (fVal_14 < auArr_15._0_4_ / (float)uVal_6) {
LAB_18065c5b6:
      auArr_16._4_12_ = auArr_15._4_12_;
      auArr_16._0_4_ = auArr_15._0_4_ / fVal_14;
      auArr_17 = roundss(auArr_16,auArr_16,10);
      uVal_7 = (uint64_t)auArr_17._0_4_;
      uVal_7 = (int64_t)(auArr_17._0_4_ - _DAT_1806ae420) & (int64_t)uVal_7 >> 0x3f | uVal_7;
      uVal_4 = 8;
      if (8 < uVal_7) {
        uVal_4 = uVal_7;
      }
      uVal_7 = uVal_6;
      if (uVal_6 < uVal_4) {
        uVal_7 = uVal_6 * 8;
        if (uVal_7 < uVal_4 || uVal_7 - uVal_4 == 0) {
          uVal_7 = uVal_4;
        }
        if (0x1ff < uVal_6) {
          uVal_7 = uVal_4;
        }
      }
      func_0x180095f50(param_1,uVal_7);
      pU64_10 = *(uint64_t **)(param_1 + 2);
      lVal_5 = *(int64_t *)(param_1 + 6);
      lVal_13 = (*(uint64_t *)(param_1 + 0xc) & uVal_12) * 0x10;
      pU64_9 = *(uint64_t **)(lVal_5 + 8 + lVal_13);
      if (pU64_9 != pU64_10) {
        _Size = local_58[4];
        if ((uint64_t)local_58[5] < 0x10) {
          pU64_8 = local_58 + 2;
          pU64_1 = *(uint64_t **)(lVal_5 + lVal_13);
        }
        else {
          pU64_8 = (uint64_t *)local_58[2];
          pU64_1 = *(uint64_t **)(lVal_5 + lVal_13);
        }
        pU64_10 = pU64_9;
        if (_Size == 0) {
          for (; pU64_10[4] != 0; pU64_10 = (uint64_t *)pU64_10[1]) {
            if (pU64_10 == pU64_1) goto LAB_18065c6d8;
          }
LAB_18065c6d5:
          pU64_10 = (uint64_t *)*pU64_10;
        }
        else {
          sz_2 = pU64_9[4];
          while( true ) {
            if (_Size == sz_2) {
              if ((uint64_t)pU64_10[5] < 0x10) {
                pU64_9 = pU64_10 + 2;
              }
              else {
                pU64_9 = (uint64_t *)pU64_10[2];
              }
              iVal_3 = memcmp(pU64_8,pU64_9,_Size);
              if (iVal_3 == 0) goto LAB_18065c6d5;
            }
            if (pU64_10 == pU64_1) break;
            pU64_10 = (uint64_t *)pU64_10[1];
            sz_2 = pU64_10[4];
          }
        }
      }
    }
  }
  else {
    auArr_15._0_4_ = (float)uVal_6;
    fVal_14 = *param_1;
    uVal_6 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_6) goto LAB_18065c5a1;
LAB_18065c557:
    fVal_18 = (float)((uint64_t)((uint)uVal_6 & 1) | uVal_6 >> 1);
    if (fVal_14 < auArr_15._0_4_ / (fVal_18 + fVal_18)) goto LAB_18065c5b6;
  }
LAB_18065c6d8:
  pU64_9 = (uint64_t *)pU64_10[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *local_58 = pU64_10;
  local_58[1] = pU64_9;
  *pU64_9 = local_58;
  pU64_10[1] = local_58;
  lVal_5 = *(int64_t *)(param_1 + 6);
  lVal_13 = (uVal_12 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_5 + lVal_13) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_5 + lVal_13) = local_58;
  }
  else {
    if (*(uint64_t **)(lVal_5 + lVal_13) == pU64_10) {
      *(uint64_t **)(lVal_5 + lVal_13) = local_58;
      goto LAB_18065c72d;
    }
    if (*(uint64_t **)(lVal_5 + 8 + lVal_13) != pU64_9) goto LAB_18065c72d;
  }
  *(uint64_t **)(lVal_5 + 8 + lVal_13) = local_58;
LAB_18065c72d:
  *local_68 = local_58;
  *(uint8_t *)(local_68 + 1) = 1;
  return local_68;
}

// Unwind@18065c7f0
void Unwind_18065c7f0(uint64_t param_1,int64_t param_2)
{
  func_0x18065c2d0(param_2 + 0x38);
  return;
}

// func_0x18065c830
uint64_t * func_0x18065c830(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t *pU64_9;
  uint64_t uVal_10;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVal_6 = func_0x180672de0(0x40);
  param_1[1] = lVal_6;
  pU64_9 = (uint64_t *)*param_4;
  *(uint8_t (*)[16])(lVal_6 + 0x20) = ZEXT816(0);
  *(uint8_t (*)[16])(lVal_6 + 0x10) = ZEXT816(0);
  uVal_1 = pU64_9[2];
  if (0xf < (uint64_t)pU64_9[3]) {
    pU64_9 = (uint64_t *)*pU64_9;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      *(uint64_t *)(lVal_6 + 0x20) = uVal_1;
      *(uint64_t *)(lVal_6 + 0x28) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_9 + 4);
      uVal_4 = *(uint32_t *)(pU64_9 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_9 + 0xc);
      *(uint32_t *)(lVal_6 + 0x10) = *(uint32_t *)pU64_9;
      *(uint32_t *)(lVal_6 + 0x14) = uVal_3;
      *(uint32_t *)(lVal_6 + 0x18) = uVal_4;
      *(uint32_t *)(lVal_6 + 0x1c) = uVal_5;
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
      *(uint64_t *)(lVal_6 + 0x10) = uVal_7;
      *(uint64_t *)(lVal_6 + 0x20) = uVal_1;
      *(uint64_t *)(lVal_6 + 0x28) = uVal_10;
      func_0x1806aa960(uVal_7,pU64_9,uVal_1 + 1);
    }
    *(uint8_t (*)[16])(lVal_6 + 0x30) = ZEXT816(0);
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_9 = (uint64_t *)(*fnPtr_2)();
  return pU64_9;
}

// Unwind@18065c940
void Unwind_18065c940(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x20) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x40);
  }
  return;
}

// func_0x18065c980
uint32_t * func_0x18065c980(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_3 = func_0x180672de0(0x20);
  *(int64_t *)lVal_3 = lVal_3;
  *(int64_t *)(lVal_3 + 8) = lVal_3;
  *(int64_t *)(param_1 + 2) = lVal_3;
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint64_t *)(param_1 + 10) = 0;
  pLong_4 = (int64_t *)func_0x180672de0(0x80);
  lVal_1 = *(int64_t *)(param_1 + 6);
  uVal_6 = *(int64_t *)(param_1 + 10) - lVal_1;
  if (uVal_6 != 0) {
    lVal_5 = lVal_1;
    if (0xfff < uVal_6) {
      lVal_5 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_5)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_6);
  }
  *(int64_t **)(param_1 + 6) = pLong_4;
  *(int64_t **)(param_1 + 8) = pLong_4 + 0x10;
  *(int64_t **)(param_1 + 10) = pLong_4 + 0x10;
  *pLong_4 = lVal_3;
  pLong_4[1] = lVal_3;
  pLong_4[2] = lVal_3;
  pLong_4[3] = lVal_3;
  pLong_4[4] = lVal_3;
  pLong_4[5] = lVal_3;
  pLong_4[6] = lVal_3;
  pLong_4[7] = lVal_3;
  pLong_4[8] = lVal_3;
  pLong_4[9] = lVal_3;
  pLong_4[10] = lVal_3;
  pLong_4[0xb] = lVal_3;
  pLong_4[0xc] = lVal_3;
  pLong_4[0xd] = lVal_3;
  pLong_4[0xe] = lVal_3;
  pLong_4[0xf] = lVal_3;
  uVal_2 = *(uint64_t *)(param_1 + 2);
  *(uint64_t *)(param_1 + 2) = *(uint64_t *)(param_2 + 2);
  *(uint64_t *)(param_2 + 2) = uVal_2;
  uVal_2 = *(uint64_t *)(param_1 + 4);
  *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_2 + 4);
  *(uint64_t *)(param_2 + 4) = uVal_2;
  uVal_2 = *(uint64_t *)(param_1 + 6);
  *(uint64_t *)(param_1 + 6) = *(uint64_t *)(param_2 + 6);
  *(uint64_t *)(param_2 + 6) = uVal_2;
  uVal_2 = *(uint64_t *)(param_1 + 8);
  *(uint64_t *)(param_1 + 8) = *(uint64_t *)(param_2 + 8);
  *(uint64_t *)(param_2 + 8) = uVal_2;
  uVal_2 = *(uint64_t *)(param_1 + 10);
  *(uint64_t *)(param_1 + 10) = *(uint64_t *)(param_2 + 10);
  *(uint64_t *)(param_2 + 10) = uVal_2;
  uVal_2 = *(uint64_t *)(param_2 + 0xc);
  *(uint64_t *)(param_2 + 0xc) = 7;
  *(uint64_t *)(param_1 + 0xc) = uVal_2;
  uVal_2 = *(uint64_t *)(param_2 + 0xe);
  *(uint64_t *)(param_2 + 0xe) = 8;
  *(uint64_t *)(param_1 + 0xe) = uVal_2;
  return param_1;
}

// Unwind@18065cb00
void Unwind_18065cb00(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x180651650(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x18065cb40
/* WARNING: Removing unreachable block (ram,0x00018065cd89) */
/* WARNING: Removing unreachable block (ram,0x00018065cd92) */
/* WARNING: Removing unreachable block (ram,0x00018065cd9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x00018065cd89) */
/* WARNING: Removing unreachable block (ram,0x00018065cd92) */
/* WARNING: Removing unreachable block (ram,0x00018065cd9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t * func_0x18065cb40(float *param_1,int64_t *param_2,byte *param_3)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  uint64_t *pU64_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t *pU64_7;
  int64_t *pLong_8;
  int64_t lVal_9;
  uint64_t *pU64_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  float fVal_13;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  float fVal_17;
  
  bFlag_1 = *param_3;
  uVal_11 = ((uint64_t)bFlag_1 ^ 0xcbf29ce484222325) * 0x100000001b3;
  lVal_9 = (*(uint64_t *)(param_1 + 0xc) & uVal_11) * 0x10;
  pU64_3 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_9);
  pU64_10 = *(uint64_t **)(param_1 + 2);
  if (pU64_3 != *(uint64_t **)(param_1 + 2)) {
    if (bFlag_1 != *(byte *)(pU64_3 + 2)) {
      do {
        pU64_10 = pU64_3;
        if (pU64_3 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_9)) goto LAB_18065cbcd;
        pU64_3 = (uint64_t *)pU64_3[1];
      } while (bFlag_1 != *(byte *)(pU64_3 + 2));
    }
    *param_2 = (int64_t)pU64_3;
    *(uint8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_18065cbcd:
  if (*(int64_t *)(param_1 + 4) == 0x7ffffffffffffff) {
    func_0x1806744c0("unordered_map/set too long");
    fnPtr_2 = (func_ptr_t )swi(3);
    pLong_8 = (int64_t *)(*fnPtr_2)();
    return pLong_8;
  }
  pU64_3 = (uint64_t *)func_0x180672de0(0x20);
  auArr_16._8_8_ = extraout_XMM0_Qb;
  auArr_16._0_8_ = extraout_XMM0_Qa;
  *(byte *)(pU64_3 + 2) = *param_3;
  pU64_3[3] = 0;
  uVal_4 = *(int64_t *)(param_1 + 4) + 1;
  auArr_14._4_12_ = auArr_16._4_12_;
  if ((int64_t)uVal_4 < 0) {
    fVal_13 = (float)((uint64_t)((uint)uVal_4 & 1) | uVal_4 >> 1);
    auArr_14._0_4_ = fVal_13 + fVal_13;
    fVal_13 = *param_1;
    uVal_4 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_4 < 0) goto LAB_18065cc24;
LAB_18065cc6e:
    if (fVal_13 < auArr_14._0_4_ / (float)uVal_4) {
LAB_18065cc83:
      auArr_15._4_12_ = auArr_14._4_12_;
      auArr_15._0_4_ = auArr_14._0_4_ / fVal_13;
      auArr_16 = roundss(auArr_15,auArr_15,10);
      uVal_5 = (uint64_t)auArr_16._0_4_;
      uVal_5 = (int64_t)(auArr_16._0_4_ - _DAT_1806ae420) & (int64_t)uVal_5 >> 0x3f | uVal_5;
      uVal_6 = 8;
      if (8 < uVal_5) {
        uVal_6 = uVal_5;
      }
      uVal_5 = uVal_4;
      if (uVal_4 < uVal_6) {
        uVal_5 = uVal_4 * 8;
        if (uVal_5 < uVal_6 || uVal_5 - uVal_6 == 0) {
          uVal_5 = uVal_6;
        }
        if (0x1ff < uVal_4) {
          uVal_5 = uVal_6;
        }
      }
      func_0x18065ce50(param_1,uVal_5);
      lVal_9 = (*(uint64_t *)(param_1 + 0xc) & uVal_11) * 0x10;
      pU64_7 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_9);
      pU64_10 = *(uint64_t **)(param_1 + 2);
      if (pU64_7 != *(uint64_t **)(param_1 + 2)) {
        if (*(char *)(pU64_3 + 2) != *(char *)(pU64_7 + 2)) {
          do {
            pU64_10 = pU64_7;
            if (pU64_7 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_9)) goto LAB_18065cd26;
            pU64_7 = (uint64_t *)pU64_7[1];
          } while (*(char *)(pU64_3 + 2) != *(char *)(pU64_7 + 2));
        }
        pU64_10 = (uint64_t *)*pU64_7;
      }
    }
  }
  else {
    auArr_14._0_4_ = (float)uVal_4;
    fVal_13 = *param_1;
    uVal_4 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_4) goto LAB_18065cc6e;
LAB_18065cc24:
    fVal_17 = (float)((uint64_t)((uint)uVal_4 & 1) | uVal_4 >> 1);
    if (fVal_13 < auArr_14._0_4_ / (fVal_17 + fVal_17)) goto LAB_18065cc83;
  }
LAB_18065cd26:
  pU64_7 = (uint64_t *)pU64_10[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_3 = pU64_10;
  pU64_3[1] = pU64_7;
  *pU64_7 = pU64_3;
  pU64_10[1] = pU64_3;
  lVal_9 = *(int64_t *)(param_1 + 6);
  lVal_12 = (uVal_11 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_9 + lVal_12) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_9 + lVal_12) = pU64_3;
  }
  else {
    if (*(uint64_t **)(lVal_9 + lVal_12) == pU64_10) {
      *(uint64_t **)(lVal_9 + lVal_12) = pU64_3;
      goto LAB_18065cd79;
    }
    if (*(uint64_t **)(lVal_9 + 8 + lVal_12) != pU64_7) goto LAB_18065cd79;
  }
  *(uint64_t **)(lVal_9 + 8 + lVal_12) = pU64_3;
LAB_18065cd79:
  *param_2 = (int64_t)pU64_3;
  *(uint8_t *)(param_2 + 1) = 1;
  return param_2;
}

// Unwind@18065cdd0
void Unwind_18065cdd0(uint64_t param_1,int64_t param_2)
{
  func_0x18065ce00(param_2 + 0x28);
  return;
}

// func_0x18065ce00
void func_0x18065ce00(int64_t param_1)
{
  uint64_t *pU64_1;
  int64_t lVal_2;
  
  lVal_2 = *(int64_t *)(param_1 + 8);
  if (lVal_2 == 0) {
    return;
  }
  pU64_1 = *(uint64_t **)(lVal_2 + 0x18);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
    lVal_2 = *(int64_t *)(param_1 + 8);
    if (lVal_2 == 0) {
      return;
    }
  }
  thunk_FUN_180695dd0(lVal_2,0x20);
  return;
}

// func_0x18065ce50
void func_0x18065ce50(int64_t param_1,uint64_t param_2)
{
  int64_t **ptr2_Long_1;
  int64_t **ptr2_Long_2;
  int64_t *pLong_3;
  int64_t **ptr2_Long_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  func_ptr_t fnPtr_7;
  int64_t **ptr2_Long_8;
  byte bFlag_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  int64_t **ptr2_Long_12;
  int64_t lVal_13;
  
  if (0x800000000000000 < param_2) {
    func_0x1806744c0("invalid hash bucket count");
    fnPtr_7 = (func_ptr_t )swi(3);
    (*fnPtr_7)();
    return;
  }
  uVal_10 = param_2 - 1 | 1;
  lVal_11 = 0x3f;
  if (uVal_10 != 0) {
    for (; uVal_10 >> lVal_11 == 0; lVal_11 = lVal_11 + -1) {
    }
  }
  bFlag_9 = -((byte)lVal_11 ^ 0x3f);
  lVal_11 = 1L << (bFlag_9 & 0x3f);
  ptr2_Long_1 = *(int64_t ***)(param_1 + 8);
  func_0x180095b10(param_1 + 0x18,2L << (bFlag_9 & 0x3f),ptr2_Long_1);
  *(int64_t *)(param_1 + 0x30) = lVal_11 + -1;
  *(int64_t *)(param_1 + 0x38) = lVal_11;
  ptr2_Long_8 = (int64_t **)**(uint64_t **)(param_1 + 8);
joined_r0x00018065ceba:
  do {
    if (ptr2_Long_8 == ptr2_Long_1) {
      return;
    }
    ptr2_Long_2 = (int64_t **)*ptr2_Long_8;
    bFlag_9 = *(byte *)(ptr2_Long_8 + 2);
    lVal_11 = *(int64_t *)(param_1 + 0x18);
    lVal_13 = (((uint64_t)bFlag_9 ^ 0xbf29ce484222325) * 0x100000001b3 &
             *(uint64_t *)(param_1 + 0x30)) * 0x10;
    if (*(int64_t ***)(lVal_11 + lVal_13) == ptr2_Long_1) {
      *(int64_t ***)(lVal_11 + lVal_13) = ptr2_Long_8;
    }
    else {
      ptr2_Long_12 = *(int64_t ***)(lVal_11 + 8 + lVal_13);
      if (bFlag_9 != *(byte *)(ptr2_Long_12 + 2)) {
        do {
          if (*(int64_t ***)(lVal_11 + lVal_13) == ptr2_Long_12) {
            pLong_3 = ptr2_Long_8[1];
            *pLong_3 = (int64_t)ptr2_Long_2;
            ptr2_Long_4 = (int64_t **)ptr2_Long_2[1];
            *ptr2_Long_4 = (int64_t *)ptr2_Long_12;
            pLong_5 = ptr2_Long_12[1];
            *pLong_5 = (int64_t)ptr2_Long_8;
            ptr2_Long_12[1] = (int64_t *)ptr2_Long_4;
            ptr2_Long_2[1] = pLong_3;
            ptr2_Long_8[1] = pLong_5;
            *(int64_t ***)(lVal_11 + lVal_13) = ptr2_Long_8;
            ptr2_Long_8 = ptr2_Long_2;
            goto joined_r0x00018065ceba;
          }
          ptr2_Long_12 = (int64_t **)ptr2_Long_12[1];
        } while (bFlag_9 != *(byte *)(ptr2_Long_12 + 2));
        pLong_3 = *ptr2_Long_12;
        pLong_5 = ptr2_Long_8[1];
        *pLong_5 = (int64_t)ptr2_Long_2;
        ptr2_Long_12 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_12 = pLong_3;
        pLong_6 = (int64_t *)pLong_3[1];
        *pLong_6 = (int64_t)ptr2_Long_8;
        pLong_3[1] = (int64_t)ptr2_Long_12;
        ptr2_Long_2[1] = pLong_5;
        ptr2_Long_8[1] = pLong_6;
        ptr2_Long_8 = ptr2_Long_2;
        goto joined_r0x00018065ceba;
      }
      ptr2_Long_12 = (int64_t **)*ptr2_Long_12;
      if (ptr2_Long_12 != ptr2_Long_8) {
        pLong_3 = ptr2_Long_8[1];
        *pLong_3 = (int64_t)ptr2_Long_2;
        ptr2_Long_4 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_4 = (int64_t *)ptr2_Long_12;
        pLong_5 = ptr2_Long_12[1];
        *pLong_5 = (int64_t)ptr2_Long_8;
        ptr2_Long_12[1] = (int64_t *)ptr2_Long_4;
        ptr2_Long_2[1] = pLong_3;
        ptr2_Long_8[1] = pLong_5;
      }
    }
    *(int64_t ***)(lVal_11 + 8 + lVal_13) = ptr2_Long_8;
    ptr2_Long_8 = ptr2_Long_2;
  } while( true );
}

// Unwind@18065d390
void Unwind_18065d390(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065d3b0
void Unwind_18065d3b0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// func_0x18065d3e0
int ** func_0x18065d3e0(int **param_1,int param_2,int *param_3,int64_t *param_4)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  uint uVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint uVal_17;
  int iVal_18;
  uint32_t *pU64_19;
  uint64_t uVal_20;
  
  *param_1 = param_3;
  param_1[1] = (int *)param_4;
  pU64_19 = &DAT_180761094;
  param_1[3] = &DAT_180761094;
  param_1[4] = (int *)0x40;
  iVal_18 = *param_3;
  uVal_14 = iVal_18 - param_2;
  *(uint *)(param_1 + 2) = uVal_14;
  if (uVal_14 != 0 && param_2 <= iVal_18) {
    if (param_3[2] == 2) {
      uVal_17 = uVal_14 >> 1;
      if (uVal_17 != 0) {
        pU64_19 = &DAT_180761094;
        lVal_12 = param_4[1];
        do {
          uVal_20 = (int64_t)(uint32_t *)((int64_t)&DAT_180761094 + (uint64_t)uVal_17) -
                   (int64_t)pU64_19;
          uVal_15 = param_4[2];
          if (uVal_15 < lVal_12 + uVal_20) {
            (*(func_ptr_t )param_4[3])(param_4);
            lVal_12 = param_4[1];
            uVal_15 = param_4[2];
          }
          uVal_13 = uVal_15 - lVal_12;
          if (uVal_20 <= uVal_15 - lVal_12) {
            uVal_13 = uVal_20;
          }
          if (uVal_13 != 0) {
            lVal_4 = *param_4;
            lVal_1 = lVal_4 + lVal_12;
            if ((uVal_13 < 4) || ((uint64_t)(lVal_1 - (int64_t)pU64_19) < 0x20)) {
              uVal_15 = 0;
LAB_18065d623:
              uVal_16 = uVal_15;
              for (uVal_20 = uVal_13 & 3; uVal_20 != 0; uVal_20 = uVal_20 - 1) {
                *(uint8_t *)(lVal_1 + uVal_16) = *(uint8_t *)((int64_t)pU64_19 + uVal_16);
                uVal_16 = uVal_16 + 1;
              }
              if (uVal_15 - uVal_13 < 0xfffffffffffffffd) {
                do {
                  *(uint32_t *)(lVal_12 + lVal_4 + uVal_16) =
                       *(uint32_t *)((int64_t)pU64_19 + uVal_16);
                  uVal_16 = uVal_16 + 4;
                } while (uVal_13 != uVal_16);
              }
            }
            else if (uVal_13 < 0x20) {
              uVal_20 = 0;
LAB_18065d6e1:
              uVal_15 = uVal_13 & 0xfffffffffffffffc;
              do {
                *(uint32_t *)(lVal_1 + uVal_20) = *(uint32_t *)((int64_t)pU64_19 + uVal_20);
                uVal_20 = uVal_20 + 4;
              } while (uVal_15 != uVal_20);
              if (uVal_13 != uVal_15) goto LAB_18065d623;
            }
            else {
              uVal_15 = uVal_13 & 0xffffffffffffffe0;
              uVal_20 = 0;
              do {
                pU64_2 = (uint32_t *)((int64_t)pU64_19 + uVal_20);
                uVal_5 = pU64_2[1];
                uVal_6 = pU64_2[2];
                uVal_7 = pU64_2[3];
                pU64_3 = (uint32_t *)((int64_t)pU64_19 + uVal_20 + 0x10);
                uVal_8 = *pU64_3;
                uVal_9 = pU64_3[1];
                uVal_10 = pU64_3[2];
                uVal_11 = pU64_3[3];
                pU64_3 = (uint32_t *)(lVal_4 + lVal_12 + uVal_20);
                *pU64_3 = *pU64_2;
                pU64_3[1] = uVal_5;
                pU64_3[2] = uVal_6;
                pU64_3[3] = uVal_7;
                pU64_2 = (uint32_t *)(lVal_4 + lVal_12 + 0x10 + uVal_20);
                *pU64_2 = uVal_8;
                pU64_2[1] = uVal_9;
                pU64_2[2] = uVal_10;
                pU64_2[3] = uVal_11;
                uVal_20 = uVal_20 + 0x20;
              } while (uVal_15 != uVal_20);
              if (uVal_13 != uVal_15) {
                uVal_20 = uVal_15;
                if ((uVal_13 & 0x1c) == 0) goto LAB_18065d623;
                goto LAB_18065d6e1;
              }
            }
            lVal_12 = param_4[1];
          }
          lVal_12 = lVal_12 + uVal_13;
          param_4[1] = lVal_12;
          pU64_19 = (uint32_t *)((int64_t)pU64_19 + uVal_13);
        } while (pU64_19 != (uint32_t *)((int64_t)&DAT_180761094 + (uint64_t)uVal_17));
      }
      iVal_18 = uVal_17 + (uVal_14 & 1);
    }
    else {
      if (param_3[2] != 0) {
        return param_1;
      }
      lVal_12 = param_4[1];
      do {
        uVal_20 = (int64_t)(uint32_t *)((int64_t)&DAT_180761094 + (uint64_t)uVal_14) -
                 (int64_t)pU64_19;
        uVal_15 = param_4[2];
        if (uVal_15 < uVal_20 + lVal_12) {
          (*(func_ptr_t )param_4[3])(param_4);
          lVal_12 = param_4[1];
          uVal_15 = param_4[2];
        }
        uVal_13 = uVal_15 - lVal_12;
        if (uVal_20 <= uVal_15 - lVal_12) {
          uVal_13 = uVal_20;
        }
        if (uVal_13 != 0) {
          lVal_4 = *param_4;
          lVal_1 = lVal_4 + lVal_12;
          if ((uVal_13 < 4) || ((uint64_t)(lVal_1 - (int64_t)pU64_19) < 0x20)) {
            uVal_15 = 0;
LAB_18065d4a3:
            uVal_16 = uVal_15;
            for (uVal_20 = uVal_13 & 3; uVal_20 != 0; uVal_20 = uVal_20 - 1) {
              *(uint8_t *)(lVal_1 + uVal_16) = *(uint8_t *)((int64_t)pU64_19 + uVal_16);
              uVal_16 = uVal_16 + 1;
            }
            if (uVal_15 - uVal_13 < 0xfffffffffffffffd) {
              do {
                *(uint32_t *)(lVal_12 + lVal_4 + uVal_16) =
                     *(uint32_t *)((int64_t)pU64_19 + uVal_16);
                uVal_16 = uVal_16 + 4;
              } while (uVal_13 != uVal_16);
            }
          }
          else if (uVal_13 < 0x20) {
            uVal_20 = 0;
LAB_18065d561:
            uVal_15 = uVal_13 & 0xfffffffffffffffc;
            do {
              *(uint32_t *)(lVal_1 + uVal_20) = *(uint32_t *)((int64_t)pU64_19 + uVal_20);
              uVal_20 = uVal_20 + 4;
            } while (uVal_15 != uVal_20);
            if (uVal_13 != uVal_15) goto LAB_18065d4a3;
          }
          else {
            uVal_15 = uVal_13 & 0xffffffffffffffe0;
            uVal_20 = 0;
            do {
              pU64_2 = (uint32_t *)((int64_t)pU64_19 + uVal_20);
              uVal_5 = pU64_2[1];
              uVal_6 = pU64_2[2];
              uVal_7 = pU64_2[3];
              pU64_3 = (uint32_t *)((int64_t)pU64_19 + uVal_20 + 0x10);
              uVal_8 = *pU64_3;
              uVal_9 = pU64_3[1];
              uVal_10 = pU64_3[2];
              uVal_11 = pU64_3[3];
              pU64_3 = (uint32_t *)(lVal_4 + lVal_12 + uVal_20);
              *pU64_3 = *pU64_2;
              pU64_3[1] = uVal_5;
              pU64_3[2] = uVal_6;
              pU64_3[3] = uVal_7;
              pU64_2 = (uint32_t *)(lVal_4 + lVal_12 + 0x10 + uVal_20);
              *pU64_2 = uVal_8;
              pU64_2[1] = uVal_9;
              pU64_2[2] = uVal_10;
              pU64_2[3] = uVal_11;
              uVal_20 = uVal_20 + 0x20;
            } while (uVal_15 != uVal_20);
            if (uVal_13 != uVal_15) {
              uVal_20 = uVal_15;
              if ((uVal_13 & 0x1c) == 0) goto LAB_18065d4a3;
              goto LAB_18065d561;
            }
          }
          lVal_12 = param_4[1];
        }
        lVal_12 = lVal_12 + uVal_13;
        param_4[1] = lVal_12;
        pU64_19 = (uint32_t *)((int64_t)pU64_19 + uVal_13);
      } while (pU64_19 != (uint32_t *)((int64_t)&DAT_180761094 + (uint64_t)uVal_14));
      iVal_18 = 0;
    }
    *(int *)(param_1 + 2) = iVal_18;
  }
  return param_1;
}

// func_0x18065d730
void func_0x18065d730(int64_t *param_1)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  int iVal_4;
  int64_t *pLong_5;
  int64_t lVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint uVal_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  int64_t lVal_17;
  int64_t lVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  
  iVal_4 = *(int *)(param_1 + 2);
  if ((int64_t)iVal_4 < 0) {
    if (*(char *)(*param_1 + 0xc) == '\x01') {
      lVal_17 = param_1[1];
      uVal_14 = *(int *)(lVal_17 + 8) + iVal_4;
      uVal_19 = 0;
      if (0 < (int)uVal_14) {
        uVal_19 = (uint64_t)uVal_14;
      }
      uVal_21 = *(uint64_t *)(lVal_17 + 0x10);
      if (uVal_21 < uVal_19) {
        (**(func_ptr_t *)(lVal_17 + 0x18))(lVal_17,uVal_19);
        uVal_21 = *(uint64_t *)(lVal_17 + 0x10);
      }
      if (uVal_19 < uVal_21) {
        uVal_21 = uVal_19;
      }
      *(uint64_t *)(lVal_17 + 8) = uVal_21;
    }
  }
  else if (iVal_4 != 0) {
    pLong_5 = (int64_t *)param_1[1];
    lVal_17 = param_1[3];
    lVal_18 = iVal_4 + lVal_17;
    lVal_16 = pLong_5[1];
    do {
      uVal_21 = lVal_18 - lVal_17;
      uVal_19 = pLong_5[2];
      if (uVal_19 < uVal_21 + lVal_16) {
        (*(func_ptr_t )pLong_5[3])(pLong_5);
        lVal_16 = pLong_5[1];
        uVal_19 = pLong_5[2];
      }
      uVal_15 = uVal_19 - lVal_16;
      if (uVal_21 <= uVal_19 - lVal_16) {
        uVal_15 = uVal_21;
      }
      if (uVal_15 != 0) {
        lVal_6 = *pLong_5;
        lVal_1 = lVal_6 + lVal_16;
        if ((uVal_15 < 4) || ((uint64_t)(lVal_1 - lVal_17) < 0x20)) {
          uVal_19 = 0;
LAB_18065d7d8:
          uVal_20 = uVal_19;
          for (uVal_21 = uVal_15 & 3; uVal_21 != 0; uVal_21 = uVal_21 - 1) {
            *(uint8_t *)(lVal_1 + uVal_20) = *(uint8_t *)(lVal_17 + uVal_20);
            uVal_20 = uVal_20 + 1;
          }
          if (uVal_19 - uVal_15 < 0xfffffffffffffffd) {
            lVal_16 = lVal_16 + lVal_6;
            do {
              *(uint8_t *)(lVal_16 + uVal_20) = *(uint8_t *)(lVal_17 + uVal_20);
              *(uint8_t *)(lVal_16 + 1 + uVal_20) = *(uint8_t *)(lVal_17 + 1 + uVal_20);
              *(uint8_t *)(lVal_16 + 2 + uVal_20) = *(uint8_t *)(lVal_17 + 2 + uVal_20);
              *(uint8_t *)(lVal_16 + 3 + uVal_20) = *(uint8_t *)(lVal_17 + 3 + uVal_20);
              uVal_20 = uVal_20 + 4;
            } while (uVal_15 != uVal_20);
          }
        }
        else if (uVal_15 < 0x20) {
          uVal_21 = 0;
LAB_18065d8b0:
          uVal_19 = uVal_15 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_21) = *(uint32_t *)(lVal_17 + uVal_21);
            uVal_21 = uVal_21 + 4;
          } while (uVal_19 != uVal_21);
          if (uVal_15 != uVal_19) goto LAB_18065d7d8;
        }
        else {
          uVal_19 = uVal_15 & 0xffffffffffffffe0;
          uVal_21 = 0;
          do {
            pU64_2 = (uint32_t *)(lVal_17 + uVal_21);
            uVal_7 = pU64_2[1];
            uVal_8 = pU64_2[2];
            uVal_9 = pU64_2[3];
            pU64_3 = (uint32_t *)(lVal_17 + 0x10 + uVal_21);
            uVal_10 = *pU64_3;
            uVal_11 = pU64_3[1];
            uVal_12 = pU64_3[2];
            uVal_13 = pU64_3[3];
            pU64_3 = (uint32_t *)(lVal_6 + lVal_16 + uVal_21);
            *pU64_3 = *pU64_2;
            pU64_3[1] = uVal_7;
            pU64_3[2] = uVal_8;
            pU64_3[3] = uVal_9;
            pU64_2 = (uint32_t *)(lVal_6 + lVal_16 + 0x10 + uVal_21);
            *pU64_2 = uVal_10;
            pU64_2[1] = uVal_11;
            pU64_2[2] = uVal_12;
            pU64_2[3] = uVal_13;
            uVal_21 = uVal_21 + 0x20;
          } while (uVal_19 != uVal_21);
          if (uVal_15 != uVal_19) {
            uVal_21 = uVal_19;
            if ((uVal_15 & 0x1c) == 0) goto LAB_18065d7d8;
            goto LAB_18065d8b0;
          }
        }
        lVal_16 = pLong_5[1];
      }
      lVal_16 = lVal_16 + uVal_15;
      pLong_5[1] = lVal_16;
      lVal_17 = lVal_17 + uVal_15;
    } while (lVal_17 != lVal_18);
  }
  return;
}

// Unwind@18065d930
void Unwind_18065d930(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065dd00
void Unwind_18065dd00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065dd20
void Unwind_18065dd20(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@18065e110
void Unwind_18065e110(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065e130
void Unwind_18065e130(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@18065e5d0
void Unwind_18065e5d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065e5f0
void Unwind_18065e5f0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@18065e9d0
void Unwind_18065e9d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065e9f0
void Unwind_18065e9f0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@18065ede0
void Unwind_18065ede0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065ee00
void Unwind_18065ee00(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@18065f1f0
void Unwind_18065f1f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065f210
void Unwind_18065f210(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@18065f600
void Unwind_18065f600(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065f620
void Unwind_18065f620(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@18065fa10
void Unwind_18065fa10(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18065fa30
void Unwind_18065fa30(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180660760
void Unwind_180660760(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180660780
void Unwind_180660780(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x28);
  return;
}

// Unwind@180660aa0
void Unwind_180660aa0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x30);
  return;
}

// Unwind@180660ad0
void Unwind_180660ad0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180660f50
void Unwind_180660f50(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180660f70
void Unwind_180660f70(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180661440
void Unwind_180661440(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180661470
void Unwind_180661470(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180661760
void Unwind_180661760(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x30);
  return;
}

// Unwind@180661790
void Unwind_180661790(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180661a80
void Unwind_180661a80(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x30);
  return;
}

// Unwind@180661ab0
void Unwind_180661ab0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180661da0
void Unwind_180661da0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x30);
  return;
}

// Unwind@180661dd0
void Unwind_180661dd0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806620d0
void Unwind_1806620d0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x30);
  return;
}

// Unwind@180662100
void Unwind_180662100(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806623f0
void Unwind_1806623f0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x30);
  return;
}

// Unwind@180662420
void Unwind_180662420(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180662710
void Unwind_180662710(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x30);
  return;
}

// Unwind@180662740
void Unwind_180662740(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806629d0
void Unwind_1806629d0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180662a00
void Unwind_180662a00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180662ca0
void Unwind_180662ca0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180662cd0
void Unwind_180662cd0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180662cf0
void func_0x180662cf0(uint64_t param_1,uint param_2,int64_t *param_3)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  int64_t lVal_4;
  bool bFlag_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint64_t uVal_14;
  uint uVal_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint8_t *pU64_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint uVal_21;
  uint8_t auStack_78 [40];
  uint16_t auStack_50 [10];
  uint8_t auStack_3b [3];
  uint8_t *puStack_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  lVal_17 = 0x3f;
  if ((param_1 | 1) != 0) {
    for (; (param_1 | 1) >> lVal_17 == 0; lVal_17 = lVal_17 + -1) {
    }
  }
  for (uVal_21 = (uint)(byte)(&DAT_1806b0ac0)[lVal_17] -
                (uint)(param_1 <
                      *(uint64_t *)(&DAT_1806b0b00 + (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_17] * 8)
                      ); uVal_21 < param_2; uVal_21 = uVal_21 + 1) {
    lVal_17 = param_3[1];
    uVal_19 = lVal_17 + 1;
    if ((uint64_t)param_3[2] < uVal_19) {
      (*(func_ptr_t )param_3[3])(param_3);
      lVal_17 = param_3[1];
      uVal_19 = lVal_17 + 1;
    }
    param_3[1] = uVal_19;
    *(uint8_t *)(*param_3 + lVal_17) = 0x30;
  }
  uVal_21 = 0x15;
  uVal_15 = 0x15;
  if (param_1 < 100) {
    if (param_1 < 10) goto LAB_180662e08;
  }
  else {
    uVal_16 = 0x15;
    uVal_19 = param_1;
    do {
      uVal_15 = (int)uVal_16 - 2;
      uVal_16 = (uint64_t)uVal_15;
      param_1 = uVal_19 / 100;
      *(uint16_t *)((int64_t)auStack_50 + uVal_16) =
           *(uint16_t *)(&DAT_1806afb50 + (uVal_19 % 100) * 2);
      bFlag_5 = 9999 < uVal_19;
      uVal_19 = param_1;
    } while (bFlag_5);
    uVal_21 = uVal_15;
    if (param_1 < 10) {
LAB_180662e08:
      uVal_19 = (uint64_t)(uVal_15 - 1);
      *(byte *)((int64_t)auStack_50 + uVal_19) = (byte)param_1 | 0x30;
      pU64_18 = (uint8_t *)((int64_t)auStack_50 + uVal_19);
      puStack_38 = pU64_18;
      goto joined_r0x000180662e22;
    }
  }
  uVal_19 = (uint64_t)(uVal_21 - 2);
  *(uint16_t *)((int64_t)auStack_50 + uVal_19) = *(uint16_t *)(&DAT_1806afb50 + param_1 * 2);
  pU64_18 = (uint8_t *)((int64_t)auStack_50 + uVal_19);
  puStack_38 = pU64_18;
joined_r0x000180662e22:
  puStack_38 = pU64_18;
  if (uVal_19 != 0x15) {
    lVal_17 = param_3[1];
    do {
      uVal_16 = (int64_t)auStack_3b - (int64_t)pU64_18;
      uVal_19 = param_3[2];
      if (uVal_19 < uVal_16 + lVal_17) {
        (*(func_ptr_t )param_3[3])(param_3);
        lVal_17 = param_3[1];
        uVal_19 = param_3[2];
      }
      uVal_14 = uVal_19 - lVal_17;
      if (uVal_16 <= uVal_19 - lVal_17) {
        uVal_14 = uVal_16;
      }
      if (uVal_14 != 0) {
        lVal_4 = *param_3;
        lVal_1 = lVal_4 + lVal_17;
        if ((uVal_14 < 4) || ((uint64_t)(lVal_1 - (int64_t)pU64_18) < 0x20)) {
          uVal_19 = 0;
LAB_180662ebf:
          uVal_20 = uVal_19;
          for (uVal_16 = uVal_14 & 3; uVal_16 != 0; uVal_16 = uVal_16 - 1) {
            *(uint8_t *)(lVal_1 + uVal_20) = pU64_18[uVal_20];
            uVal_20 = uVal_20 + 1;
          }
          if (uVal_19 - uVal_14 < 0xfffffffffffffffd) {
            lVal_17 = lVal_17 + lVal_4;
            do {
              *(uint8_t *)(lVal_17 + uVal_20) = pU64_18[uVal_20];
              *(uint8_t *)(lVal_17 + 1 + uVal_20) = pU64_18[uVal_20 + 1];
              *(uint8_t *)(lVal_17 + 2 + uVal_20) = pU64_18[uVal_20 + 2];
              *(uint8_t *)(lVal_17 + 3 + uVal_20) = pU64_18[uVal_20 + 3];
              uVal_20 = uVal_20 + 4;
            } while (uVal_14 != uVal_20);
          }
        }
        else if (uVal_14 < 0x20) {
          uVal_16 = 0;
LAB_180662f90:
          uVal_19 = uVal_14 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_16) = *(uint32_t *)(pU64_18 + uVal_16);
            uVal_16 = uVal_16 + 4;
          } while (uVal_19 != uVal_16);
          if (uVal_14 != uVal_19) goto LAB_180662ebf;
        }
        else {
          uVal_19 = uVal_14 & 0xffffffffffffffe0;
          uVal_16 = 0;
          do {
            pU64_2 = (uint32_t *)(pU64_18 + uVal_16);
            uVal_7 = pU64_2[1];
            uVal_8 = pU64_2[2];
            uVal_9 = pU64_2[3];
            pU64_3 = (uint32_t *)(pU64_18 + uVal_16 + 0x10);
            uVal_10 = *pU64_3;
            uVal_11 = pU64_3[1];
            uVal_12 = pU64_3[2];
            uVal_13 = pU64_3[3];
            pU64_3 = (uint32_t *)(lVal_4 + lVal_17 + uVal_16);
            *pU64_3 = *pU64_2;
            pU64_3[1] = uVal_7;
            pU64_3[2] = uVal_8;
            pU64_3[3] = uVal_9;
            pU64_2 = (uint32_t *)(lVal_4 + lVal_17 + 0x10 + uVal_16);
            *pU64_2 = uVal_10;
            pU64_2[1] = uVal_11;
            pU64_2[2] = uVal_12;
            pU64_2[3] = uVal_13;
            uVal_16 = uVal_16 + 0x20;
          } while (uVal_19 != uVal_16);
          if (uVal_14 != uVal_19) {
            uVal_16 = uVal_19;
            if ((uVal_14 & 0x1c) == 0) goto LAB_180662ebf;
            goto LAB_180662f90;
          }
        }
        lVal_17 = param_3[1];
      }
      lVal_17 = lVal_17 + uVal_14;
      param_3[1] = lVal_17;
      pU64_18 = pU64_18 + uVal_14;
    } while (pU64_18 != auStack_3b);
  }
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_78)) {
    return;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_78);
  fnPtr_6 = (func_ptr_t )swi(3);
  (*fnPtr_6)();
  return;
}

// Unwind@180663230
void Unwind_180663230(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180663260
void Unwind_180663260(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180663710
void Unwind_180663710(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180663730
void Unwind_180663730(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180663b00
void Unwind_180663b00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180663b20
void Unwind_180663b20(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180664190
void Unwind_180664190(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806641b0
void Unwind_1806641b0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180664590
void Unwind_180664590(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@1806645c0
void Unwind_1806645c0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180664a70
void Unwind_180664a70(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180664aa0
void Unwind_180664aa0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180664eb0
void Unwind_180664eb0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x30);
  return;
}

// Unwind@180664ee0
void Unwind_180664ee0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180664f00
uint64_t func_0x180664f00(int64_t param_1,int64_t param_2,int64_t param_3)
{
  uint32_t uVal_1;
  func_ptr_t fnPtr_2;
  DWORD DVar3;
  uint uVal_4;
  uint32_t *pU64_5;
  uint64_t uVal_6;
  LONG *pLong_7;
  _TIME_DYNAMIC_ZONE_INFORMATION local_1f8;
  uint8_t local_48 [32];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_2 + 0x18) - *(int64_t *)(param_1 + 0x18) < 100000000) {
    uVal_4 = *(uint *)(param_1 + 0x20);
  }
  else {
    DVar3 = GetDynamicTimeZoneInformation(&local_1f8);
    if (DVar3 == 0xffffffff) {
      pU64_5 = (uint32_t *)func_0x1806823dc();
      uVal_1 = *pU64_5;
      func_0x180001060(local_48,"Failed getting timezone info. ");
      func_0x180651c70(local_48,uVal_1);
      fnPtr_2 = (func_ptr_t )swi(3);
      uVal_6 = (*fnPtr_2)();
      return uVal_6;
    }
    pLong_7 = &local_1f8.DaylightBias;
    if (*(int *)(param_3 + 0x20) == 0) {
      pLong_7 = &local_1f8.StandardBias;
    }
    uVal_4 = -(local_1f8.Bias + *pLong_7);
    *(uint *)(param_1 + 0x20) = uVal_4;
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_2 + 0x18);
  }
  return (uint64_t)uVal_4;
}

// Unwind@180664fb0
void Unwind_180664fb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@180665440
void Unwind_180665440(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180665460
void Unwind_180665460(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180665d00
void Unwind_180665d00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180665d20
void Unwind_180665d20(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180665d40
void Unwind_180665d40(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x48);
  return;
}

// Unwind@180666360
void Unwind_180666360(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180666380
void Unwind_180666380(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806663a0
void Unwind_1806663a0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180666990
void Unwind_180666990(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806669b0
void Unwind_1806669b0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806669d0
void Unwind_1806669d0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180667080
void Unwind_180667080(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806670a0
void Unwind_1806670a0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806670c0
void Unwind_1806670c0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x40);
  return;
}

// Unwind@1806676b0
void Unwind_1806676b0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806676d0
void Unwind_1806676d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806676f0
void Unwind_1806676f0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180667be0
void Unwind_180667be0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180667c00
void Unwind_180667c00(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@1806680c0
void Unwind_1806680c0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806680e0
void Unwind_1806680e0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@1806685a0
void Unwind_1806685a0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1806685c0
void Unwind_1806685c0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180668a80
void Unwind_180668a80(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180668aa0
void Unwind_180668aa0(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x20);
  return;
}

// Unwind@180668db0
void Unwind_180668db0(void)
{
  byte *pU8_1;
  
  pU8_1 = (byte *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x1c398);
  *pU8_1 = *pU8_1 & 0xfe;
  return;
}

// Unwind@180668df0
void Unwind_180668df0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180669570
void Unwind_180669570(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180669590
void Unwind_180669590(uint64_t param_1,int64_t param_2)
{
  func_0x18065d730(param_2 + 0x28);
  return;
}

// func_0x18066e840
int64_t func_0x18066e840(uint32_t param_1,uint32_t *param_2)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  int64_t lVal_3;
  uint32_t *pU64_4;
  FILE *_File;
  size_t sz_5;
  uint8_t auStack_58 [33];
  ushort local_37;
  byte local_35;
  char local_34;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  lVal_3 = _calloc_base(1,0x78);
  if (lVal_3 == 0) {
    if (param_2 != (uint32_t *)0x0) {
      *param_2 = 0x6d;
    }
    func_0x1806818e8(param_1);
  }
  else {
    pU64_4 = (uint32_t *)_calloc_base(1,0x6160);
    if (pU64_4 == (uint32_t *)0x0) {
      if (param_2 != (uint32_t *)0x0) {
        *param_2 = 0x6d;
      }
      func_0x1806818e8(param_1);
    }
    else {
      func_0x18068649c(param_1,0x8000);
      _File = (FILE *)thunk_FUN_180682548(param_1,&DAT_18076024b);
      *(uint32_t **)(lVal_3 + 0x70) = pU64_4;
      pU64_4[1] = param_1;
      *(FILE **)(pU64_4 + 0xe) = _File;
      *pU64_4 = 8;
      *(uint64_t *)(lVal_3 + 0x68) = 0;
      sz_5 = fread(&local_37,1,6,_File);
      if (sz_5 == 6) {
        if ((ushort)(local_35 ^ 0x46 | local_37 ^ 0x4947) == 0) {
          iVal_2 = func_0x18066e9b0(lVal_3);
          if (iVal_2 != 0) {
            *(uint32_t *)(lVal_3 + 0x60) = 0;
            *(bool *)(pU64_4 + 0x1856) = local_34 == '9';
            goto LAB_18066e959;
          }
        }
        else if (param_2 != (uint32_t *)0x0) {
          *param_2 = 0x67;
        }
      }
      else if (param_2 != (uint32_t *)0x0) {
        *param_2 = 0x66;
      }
      func_0x18068a690(_File);
      thunk_FUN_180695dd0(pU64_4);
    }
    thunk_FUN_180695dd0(lVal_3);
  }
  lVal_3 = 0;
LAB_18066e959:
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return lVal_3;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_3 = (*fnPtr_1)();
  return lVal_3;
}

// func_0x18066e9b0
uint64_t func_0x18066e9b0(uint *param_1)
{
  byte *pU8_1;
  func_ptr_t fnPtr_2;
  byte bFlag_3;
  int iVal_4;
  int64_t lVal_5;
  size_t sz_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t auStack_58 [41];
  byte local_2f;
  byte local_2e;
  uint8_t local_2d;
  ushort local_2c;
  ushort local_2a;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  pU8_1 = *(byte **)(param_1 + 0x1c);
  if ((*pU8_1 & 8) == 0) {
    param_1[0x18] = 0x6f;
  }
  else {
    if (*(func_ptr_t *)(pU8_1 + 0x40) == (func_ptr_t )0x0) {
      sz_6 = fread(&local_2c,1,2,*(FILE **)(pU8_1 + 0x38));
      if (sz_6 == 2) goto LAB_18066ea2a;
    }
    else {
      iVal_4 = (**(func_ptr_t *)(pU8_1 + 0x40))(param_1,&local_2c,2);
      if (iVal_4 == 2) {
LAB_18066ea2a:
        *param_1 = (uint)local_2c;
        fnPtr_2 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x1c) + 0x40);
        if (fnPtr_2 == (func_ptr_t )0x0) {
          sz_6 = fread(&local_2a,1,2,*(FILE **)(*(int64_t *)(param_1 + 0x1c) + 0x38));
          if (sz_6 == 2) goto LAB_18066ea7e;
        }
        else {
          iVal_4 = (*fnPtr_2)(param_1,&local_2a,2);
          if (iVal_4 == 2) {
LAB_18066ea7e:
            param_1[1] = (uint)local_2a;
            fnPtr_2 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x1c) + 0x40);
            if (fnPtr_2 == (func_ptr_t )0x0) {
              sz_6 = fread(&local_2f,1,3,*(FILE **)(*(int64_t *)(param_1 + 0x1c) + 0x38));
              if (sz_6 != 3) goto LAB_18066eb03;
            }
            else {
              iVal_4 = (*fnPtr_2)(param_1,&local_2f,3);
              if (iVal_4 != 3) {
LAB_18066eb03:
                param_1[0x18] = 0x66;
                func_0x180671820(*(uint64_t *)(param_1 + 6));
                *(uint64_t *)(param_1 + 6) = 0;
                goto LAB_18066ec06;
              }
            }
            bFlag_3 = local_2f;
            param_1[2] = (local_2f >> 4 & 7) + 1;
            param_1[3] = (uint)local_2e;
            *(uint8_t *)(param_1 + 4) = local_2d;
            if ((char)local_2f < '\0') {
              lVal_5 = func_0x180671770(1 << (local_2f & 7) + 1,0);
              *(int64_t *)(param_1 + 6) = lVal_5;
              if (lVal_5 == 0) {
                param_1[0x18] = 0x6d;
                goto LAB_18066ec06;
              }
              *(byte *)(lVal_5 + 8) = bFlag_3 >> 3 & 1;
              if (0 < **(int **)(param_1 + 6)) {
                lVal_5 = 0;
                lVal_8 = 0;
                do {
                  fnPtr_2 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x1c) + 0x40);
                  if (fnPtr_2 == (func_ptr_t )0x0) {
                    sz_6 = fread(&local_2f,1,3,*(FILE **)(*(int64_t *)(param_1 + 0x1c) + 0x38));
                    if (sz_6 != 3) goto LAB_18066ebee;
                  }
                  else {
                    iVal_4 = (*fnPtr_2)(param_1,&local_2f,3);
                    if (iVal_4 != 3) {
LAB_18066ebee:
                      func_0x180671820(*(uint64_t *)(param_1 + 6));
                      *(uint64_t *)(param_1 + 6) = 0;
                      goto LAB_18066ebff;
                    }
                  }
                  *(byte *)(*(int64_t *)(*(int64_t *)(param_1 + 6) + 0x10) + lVal_5) = local_2f;
                  *(byte *)(*(int64_t *)(*(int64_t *)(param_1 + 6) + 0x10) + 1 + lVal_5) = local_2e
                  ;
                  *(uint8_t *)(*(int64_t *)(*(int64_t *)(param_1 + 6) + 0x10) + 2 + lVal_5) =
                       local_2d;
                  lVal_8 = lVal_8 + 1;
                  lVal_5 = lVal_5 + 3;
                } while (lVal_8 < **(int **)(param_1 + 6));
              }
            }
            else {
              *(uint64_t *)(param_1 + 6) = 0;
            }
            uVal_7 = 1;
            goto LAB_18066ec08;
          }
        }
      }
    }
LAB_18066ebff:
    param_1[0x18] = 0x66;
  }
LAB_18066ec06:
  uVal_7 = 0;
LAB_18066ec08:
  if (DAT_18083cf40 != (local_28 ^ (uint64_t)auStack_58)) {
    func_0x180673080(local_28 ^ (uint64_t)auStack_58);
    fnPtr_2 = (func_ptr_t )swi(3);
    uVal_7 = (*fnPtr_2)();
    return uVal_7;
  }
  return uVal_7;
}

// func_0x18066ec40
uint64_t func_0x18066ec40(int64_t param_1)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  byte *pU8_3;
  func_ptr_t fnPtr_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  byte bFlag_12;
  int iVal_13;
  size_t sz_14;
  int64_t lVal_15;
  uint *pU64_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  uint64_t uVal_19;
  uint8_t auStack_68 [44];
  uint16_t local_3c;
  uint8_t local_3a;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  pU8_3 = *(byte **)(param_1 + 0x70);
  if ((*pU8_3 & 8) == 0) {
    *(uint32_t *)(param_1 + 0x60) = 0x6f;
  }
  else {
    if (*(func_ptr_t *)(pU8_3 + 0x40) == (func_ptr_t )0x0) {
      sz_14 = fread(&local_3c,1,2,*(FILE **)(pU8_3 + 0x38));
      if (sz_14 == 2) goto LAB_18066ecbe;
    }
    else {
      iVal_13 = (**(func_ptr_t *)(pU8_3 + 0x40))(param_1,&local_3c,2);
      if (iVal_13 == 2) {
LAB_18066ecbe:
        *(uint *)(param_1 + 0x28) = (uint)local_3c;
        fnPtr_4 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
        if (fnPtr_4 == (func_ptr_t )0x0) {
          sz_14 = fread(&local_3c,1,2,*(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38));
          if (sz_14 == 2) goto LAB_18066ed13;
        }
        else {
          iVal_13 = (*fnPtr_4)(param_1,&local_3c,2);
          if (iVal_13 == 2) {
LAB_18066ed13:
            *(uint *)(param_1 + 0x2c) = (uint)local_3c;
            fnPtr_4 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
            if (fnPtr_4 == (func_ptr_t )0x0) {
              sz_14 = fread(&local_3c,1,2,*(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38));
              if (sz_14 == 2) goto LAB_18066ed64;
            }
            else {
              iVal_13 = (*fnPtr_4)(param_1,&local_3c,2);
              if (iVal_13 == 2) {
LAB_18066ed64:
                *(uint *)(param_1 + 0x30) = (uint)local_3c;
                fnPtr_4 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
                if (fnPtr_4 == (func_ptr_t )0x0) {
                  sz_14 = fread(&local_3c,1,2,*(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38));
                  if (sz_14 == 2) goto LAB_18066ed91;
                }
                else {
                  iVal_13 = (*fnPtr_4)(param_1,&local_3c,2);
                  if (iVal_13 == 2) {
LAB_18066ed91:
                    *(uint *)(param_1 + 0x34) = (uint)local_3c;
                    fnPtr_4 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
                    if (fnPtr_4 == (func_ptr_t )0x0) {
                      sz_14 = fread(&local_3c,1,1,*(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38))
                      ;
                    }
                    else {
                      iVal_13 = (*fnPtr_4)(param_1,&local_3c,1);
                      sz_14 = (size_t)iVal_13;
                    }
                    if (sz_14 != 1) {
                      *(uint32_t *)(param_1 + 0x60) = 0x66;
                      func_0x180671820(*(uint64_t *)(param_1 + 0x40));
LAB_18066ee9e:
                      *(uint64_t *)(param_1 + 0x40) = 0;
                      goto LAB_18066ede0;
                    }
                    bFlag_12 = (byte)local_3c;
                    *(byte *)(param_1 + 0x38) = (byte)local_3c >> 6 & 1;
                    if (*(int64_t *)(param_1 + 0x40) != 0) {
                      func_0x180671820();
                      *(uint64_t *)(param_1 + 0x40) = 0;
                    }
                    if ((char)(byte)local_3c < '\0') {
                      pU64_16 = (uint *)func_0x180671770(1 << (bFlag_12 & 7) + 1,0);
                      *(uint **)(param_1 + 0x40) = pU64_16;
                      if (pU64_16 != (uint *)0x0) {
                        if (*pU64_16 != 0) {
                          lVal_15 = 0;
                          uVal_19 = 0;
                          do {
                            fnPtr_4 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
                            if (fnPtr_4 == (func_ptr_t )0x0) {
                              sz_14 = fread(&local_3c,1,3,
                                             *(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38));
                            }
                            else {
                              iVal_13 = (*fnPtr_4)(param_1,&local_3c,3);
                              sz_14 = (size_t)iVal_13;
                            }
                            if (sz_14 != 3) {
                              func_0x180671820(*(uint64_t *)(param_1 + 0x40));
                              *(uint32_t *)(param_1 + 0x60) = 0x66;
                              goto LAB_18066ee9e;
                            }
                            *(byte *)(*(int64_t *)(*(int64_t *)(param_1 + 0x40) + 0x10) + lVal_15)
                                 = (byte)local_3c;
                            *(uint8_t *)
                             (*(int64_t *)(*(int64_t *)(param_1 + 0x40) + 0x10) + 1 + lVal_15) =
                                 local_3c._1_1_;
                            *(uint8_t *)
                             (*(int64_t *)(*(int64_t *)(param_1 + 0x40) + 0x10) + 2 + lVal_15) =
                                 local_3a;
                            uVal_19 = uVal_19 + 1;
                            pU64_16 = *(uint **)(param_1 + 0x40);
                            lVal_15 = lVal_15 + 3;
                          } while (uVal_19 < *pU64_16);
                        }
                        goto LAB_18066ee59;
                      }
                    }
                    else {
                      pU64_16 = (uint *)0x0;
LAB_18066ee59:
                      if (*(int64_t *)(param_1 + 0x48) == 0) {
                        lVal_15 = _malloc_base(0x38);
                        *(int64_t *)(param_1 + 0x48) = lVal_15;
                        if (lVal_15 != 0) goto LAB_18066ef85;
                      }
                      else {
                        lVal_15 = func_0x180671a30(*(int64_t *)(param_1 + 0x48),
                                               (int64_t)*(int *)(param_1 + 0x20) + 1,0x38);
                        if (lVal_15 != 0) {
                          *(int64_t *)(param_1 + 0x48) = lVal_15;
                          pU64_16 = *(uint **)(param_1 + 0x40);
LAB_18066ef85:
                          iVal_13 = *(int *)(param_1 + 0x20);
                          lVal_18 = (int64_t)iVal_13 * 0x38;
                          lVal_1 = lVal_15 + lVal_18;
                          uVal_5 = *(uint32_t *)(param_1 + 0x28);
                          uVal_6 = *(uint32_t *)(param_1 + 0x2c);
                          uVal_7 = *(uint32_t *)(param_1 + 0x30);
                          uVal_8 = *(uint32_t *)(param_1 + 0x34);
                          uVal_9 = *(uint32_t *)(param_1 + 0x3c);
                          uVal_10 = *(uint32_t *)(param_1 + 0x40);
                          uVal_11 = *(uint32_t *)(param_1 + 0x44);
                          pU64_2 = (uint32_t *)(lVal_15 + 0x10 + lVal_18);
                          *pU64_2 = *(uint32_t *)(param_1 + 0x38);
                          pU64_2[1] = uVal_9;
                          pU64_2[2] = uVal_10;
                          pU64_2[3] = uVal_11;
                          pU64_2 = (uint32_t *)(lVal_15 + lVal_18);
                          *pU64_2 = uVal_5;
                          pU64_2[1] = uVal_6;
                          pU64_2[2] = uVal_7;
                          pU64_2[3] = uVal_8;
                          if (pU64_16 != (uint *)0x0) {
                            lVal_15 = func_0x180671770(*pU64_16,*(uint64_t *)(pU64_16 + 4));
                            *(int64_t *)(lVal_1 + 0x18) = lVal_15;
                            if (lVal_15 == 0) goto LAB_18066eff7;
                            iVal_13 = *(int *)(param_1 + 0x20);
                          }
                          *(uint64_t *)(lVal_1 + 0x20) = 0;
                          *(uint32_t *)(lVal_1 + 0x28) = 0;
                          *(uint64_t *)(lVal_1 + 0x30) = 0;
                          *(int *)(param_1 + 0x20) = iVal_13 + 1;
                          *(int *)(pU8_3 + 0x34) =
                               *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
                          uVal_17 = func_0x18066f030(param_1);
                          goto LAB_18066ede2;
                        }
                      }
                    }
LAB_18066eff7:
                    *(uint32_t *)(param_1 + 0x60) = 0x6d;
                    goto LAB_18066ede0;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(uint32_t *)(param_1 + 0x60) = 0x66;
  }
LAB_18066ede0:
  uVal_17 = 0;
LAB_18066ede2:
  if (DAT_18083cf40 != (local_38 ^ (uint64_t)auStack_68)) {
    func_0x180673080(local_38 ^ (uint64_t)auStack_68);
    fnPtr_4 = (func_ptr_t )swi(3);
    uVal_17 = (*fnPtr_4)();
    return uVal_17;
  }
  return uVal_17;
}

// func_0x18066f030
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18066f030(int64_t param_1)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  int iVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t auStack_48 [47];
  byte local_19;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  lVal_2 = *(int64_t *)(param_1 + 0x70);
  if (*(func_ptr_t *)(lVal_2 + 0x40) == (func_ptr_t )0x0) {
    sz_9 = fread(&local_19,1,1,*(FILE **)(lVal_2 + 0x38));
    uVal_10 = 0;
    if (sz_9 == 0) goto LAB_18066f15d;
  }
  else {
    iVal_8 = (**(func_ptr_t *)(lVal_2 + 0x40))(param_1,&local_19,1);
    uVal_10 = 0;
    if (iVal_8 == 0) goto LAB_18066f15d;
  }
  uVal_10 = 0;
  if ((local_19 < 9) && (*(int *)(lVal_2 + 0x18) < 0x21)) {
    *(uint8_t *)(lVal_2 + 0x50) = 0;
    *(uint *)(lVal_2 + 8) = (uint)local_19;
    iVal_8 = 1 << (local_19 & 0x1f);
    uVal_10 = 1;
    *(int *)(lVal_2 + 0xc) = iVal_8;
    *(int *)(lVal_2 + 0x10) = iVal_8 + 1;
    *(int *)(lVal_2 + 0x14) = iVal_8 + 2;
    *(uint *)(lVal_2 + 0x18) = local_19 + 1;
    *(int *)(lVal_2 + 0x1c) = 2 << (local_19 & 0x1f);
    *(uint32_t *)(lVal_2 + 0x28) = 0;
    *(uint32_t *)(lVal_2 + 0x20) = 0x1002;
    *(uint64_t *)(lVal_2 + 0x2c) = 0;
    uVal_7 = _UNK_1806df6dc;
    uVal_6 = _UNK_1806df6d8;
    uVal_5 = _UNK_1806df6d4;
    uVal_4 = _DAT_1806df6d0;
    lVal_11 = 0;
    do {
      pU64_1 = (uint32_t *)(lVal_2 + 0x2150 + lVal_11 * 4);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      pU64_1 = (uint32_t *)(lVal_2 + 0x2160 + lVal_11 * 4);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      pU64_1 = (uint32_t *)(lVal_2 + 0x2170 + lVal_11 * 4);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      pU64_1 = (uint32_t *)(lVal_2 + 0x2180 + lVal_11 * 4);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      pU64_1 = (uint32_t *)(lVal_2 + 0x2190 + lVal_11 * 4);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      pU64_1 = (uint32_t *)(lVal_2 + 0x21a0 + lVal_11 * 4);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      pU64_1 = (uint32_t *)(lVal_2 + 0x21b0 + lVal_11 * 4);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      pU64_1 = (uint32_t *)(lVal_2 + 0x21c0 + lVal_11 * 4);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      lVal_11 = lVal_11 + 0x20;
    } while (lVal_11 != 0x1000);
  }
  else {
    *(uint32_t *)(param_1 + 0x60) = 0x66;
  }
LAB_18066f15d:
  if (DAT_18083cf40 != (local_18 ^ (uint64_t)auStack_48)) {
    func_0x180673080(local_18 ^ (uint64_t)auStack_48);
    fnPtr_3 = (func_ptr_t )swi(3);
    uVal_10 = (*fnPtr_3)();
    return uVal_10;
  }
  return uVal_10;
}

// func_0x18066f190
uint64_t func_0x18066f190(int64_t param_1,uint64_t param_2,int param_3)
{
  byte *pU8_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  uint uVal_5;
  size_t sz_6;
  uint64_t uVal_7;
  uint8_t auStack_48 [39];
  byte local_21;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  pU8_1 = *(byte **)(param_1 + 0x70);
  if ((*pU8_1 & 8) == 0) {
    *(uint32_t *)(param_1 + 0x60) = 0x6f;
    uVal_7 = 0;
  }
  else {
    if (param_3 == 0) {
      param_3 = *(int *)(param_1 + 0x30);
    }
    iVal_4 = *(int *)(pU8_1 + 0x34);
    *(int *)(pU8_1 + 0x34) = iVal_4 - param_3;
    if ((uint)(iVal_4 - param_3) < 0xffff0001) {
      iVal_4 = func_0x18066f320(param_1);
      uVal_7 = 0;
      if ((iVal_4 != 0) && (uVal_7 = 1, *(int *)(pU8_1 + 0x34) == 0)) {
        do {
          while( true ) {
            lVal_2 = *(int64_t *)(param_1 + 0x70);
            if (*(func_ptr_t *)(lVal_2 + 0x40) == (func_ptr_t )0x0) {
              sz_6 = fread(&local_21,1,1,*(FILE **)(lVal_2 + 0x38));
              if (sz_6 != 1) goto LAB_18066f2d0;
            }
            else {
              iVal_4 = (**(func_ptr_t *)(lVal_2 + 0x40))(param_1,&local_21,1);
              if (iVal_4 != 1) goto LAB_18066f2d0;
            }
            if (local_21 == 0) {
              *(uint8_t *)(lVal_2 + 0x50) = 0;
              *(uint32_t *)(lVal_2 + 0x34) = 0;
              uVal_7 = 1;
              goto LAB_18066f2eb;
            }
            *(byte *)(lVal_2 + 0x50) = local_21;
            fnPtr_3 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
            if (fnPtr_3 != (func_ptr_t )0x0) break;
            sz_6 = fread((void *)(lVal_2 + 0x51),1,(uint64_t)local_21,
                          *(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38));
            if (sz_6 != local_21) goto LAB_18066f2d0;
          }
          uVal_5 = (*fnPtr_3)(param_1,lVal_2 + 0x51);
        } while (uVal_5 == local_21);
LAB_18066f2d0:
        *(uint32_t *)(param_1 + 0x60) = 0x66;
        uVal_7 = 0;
      }
    }
    else {
      *(uint32_t *)(param_1 + 0x60) = 0x6c;
      uVal_7 = 0;
    }
  }
LAB_18066f2eb:
  if (DAT_18083cf40 != (local_20 ^ (uint64_t)auStack_48)) {
    func_0x180673080(local_20 ^ (uint64_t)auStack_48);
    fnPtr_3 = (func_ptr_t )swi(3);
    uVal_7 = (*fnPtr_3)();
    return uVal_7;
  }
  return uVal_7;
}

// func_0x18066f320
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x18066f320(int64_t param_1,uint64_t param_2,uint param_3)
{
  uint32_t *pU64_1;
  int iVal_2;
  int64_t lVal_3;
  func_ptr_t fnPtr_4;
  short sz_5;
  short sz_6;
  short sz_7;
  short sz_8;
  short sz_9;
  short sz_10;
  short sz_11;
  short sz_12;
  short sz_13;
  short sz_14;
  short sz_15;
  short sz_16;
  short sz_17;
  short sz_18;
  short sz_19;
  short sz_20;
  uint8_t auArr_21 [15];
  uint8_t auArr_22 [15];
  uint8_t auArr_23 [15];
  uint8_t auArr_24 [15];
  uint8_t auArr_25 [15];
  uint8_t auArr_26 [15];
  uint8_t auArr_27 [15];
  uint8_t auArr_28 [15];
  uint8_t auArr_29 [15];
  uint8_t auArr_30 [15];
  uint8_t auArr_31 [15];
  uint8_t auArr_32 [15];
  uint8_t auArr_33 [15];
  uint8_t auArr_34 [15];
  uint8_t auArr_35 [15];
  uint8_t auArr_36 [15];
  uint8_t auArr_37 [11];
  uint8_t auArr_38 [15];
  uint8_t auArr_39 [11];
  uint8_t auArr_40 [15];
  uint8_t auArr_41 [15];
  uint8_t auArr_42 [15];
  uint8_t auArr_43 [15];
  uint32_t uVal_44;
  uint32_t uVal_45;
  uint32_t uVal_46;
  uint32_t uVal_47;
  int iVal_48;
  uint64_t uVal_49;
  uint8_t *pU64_50;
  uint64_t uVal_51;
  int64_t lVal_52;
  uint8_t uVal_53;
  uint64_t uVal_54;
  int64_t lVal_55;
  uint8_t (*pArr16_56)[16];
  int iVal_57;
  int iVal_58;
  uint64_t uVal_59;
  uint32_t uVal_60;
  uint uVal_61;
  uint64_t uVal_62;
  uint8_t uVal_63;
  char *fnPtr_64;
  uint64_t uVal_65;
  int iVal_66;
  uint uVal_67;
  uint64_t uVal_68;
  uint8_t auArr_69 [11];
  uint8_t auArr_71 [16];
  uint8_t auArr_72 [16];
  uint8_t auArr_73 [11];
  uint8_t auArr_75 [16];
  uint8_t auArr_76 [16];
  uint8_t auArr_77 [16];
  uint8_t auStack_b8 [32];
  int64_t local_98;
  int local_8c;
  uint64_t local_88;
  uint64_t local_80;
  int local_74;
  uint64_t local_70;
  uint8_t auArr_70 [15];
  uint8_t auArr_74 [15];
  
  local_70 = DAT_18083cf40 ^ (uint64_t)auStack_b8;
  lVal_3 = *(int64_t *)(param_1 + 0x70);
  iVal_48 = *(int *)(lVal_3 + 0x28);
  uVal_62 = (uint64_t)iVal_48;
  uVal_51 = 0;
  local_98 = param_1;
  if (0xfff < (int64_t)uVal_62) goto LAB_18066fa2e;
  iVal_2 = *(int *)(lVal_3 + 0xc);
  local_8c = *(int *)(lVal_3 + 0x10);
  iVal_66 = *(int *)(lVal_3 + 0x20);
  uVal_68 = 0;
  if (iVal_48 == 0) {
    uVal_62 = 0;
  }
  else {
    uVal_68 = 0;
    if (0 < (int)param_3) {
      uVal_61 = param_3 - 1;
      if (iVal_48 - 1U < param_3 - 1) {
        uVal_61 = iVal_48 - 1U;
      }
      uVal_67 = uVal_61 + 1;
      uVal_68 = (uint64_t)uVal_67;
      if ((uVal_61 < 0xf) ||
         ((param_2 < uVal_62 + lVal_3 + 0x150 &&
          (((uVal_62 + 0x150) - uVal_68) + lVal_3 < param_2 + uVal_68)))) {
        uVal_49 = 0;
      }
      else {
        uVal_49 = (uint64_t)(uVal_67 & 0x7ffffff0);
        pArr16_56 = (uint8_t (*)[16])(uVal_62 + lVal_3 + 0x140);
        uVal_62 = uVal_62 - uVal_49;
        uVal_54 = 0;
        do {
          auArr_72 = *pArr16_56;
          auArr_21[13] = 0;
          auArr_21._0_13_ = auArr_72._0_13_;
          auArr_21[14] = auArr_72[7];
          auArr_22[12] = auArr_72[6];
          auArr_22._0_12_ = auArr_72._0_12_;
          auArr_22._13_2_ = auArr_21._13_2_;
          auArr_24[11] = 0;
          auArr_24._0_11_ = auArr_72._0_11_;
          auArr_24._12_3_ = auArr_22._12_3_;
          auArr_26[10] = auArr_72[5];
          auArr_26._0_10_ = auArr_72._0_10_;
          auArr_26._11_4_ = auArr_24._11_4_;
          auArr_28[9] = 0;
          auArr_28._0_9_ = auArr_72._0_9_;
          auArr_28._10_5_ = auArr_26._10_5_;
          auArr_30[8] = auArr_72[4];
          auArr_30._0_8_ = auArr_72._0_8_;
          auArr_30._9_6_ = auArr_28._9_6_;
          auArr_77[7] = 0;
          auArr_77._0_7_ = auArr_30._8_7_;
          auArr_36._7_8_ = 0;
          auArr_36._0_7_ = auArr_30._8_7_;
          auArr_40._1_8_ = SUB158(auArr_36 << 0x40,7);
          auArr_40[0] = auArr_72[3];
          auArr_40._9_6_ = 0;
          auArr_37._1_10_ = SUB1510(auArr_40 << 0x30,5);
          auArr_37[0] = auArr_72[2];
          auArr_41._11_4_ = 0;
          auArr_41._0_11_ = auArr_37;
          auArr_33[2] = auArr_72[1];
          auArr_33._0_2_ = auArr_72._0_2_;
          auArr_33._3_12_ = SUB1512(auArr_41 << 0x20,3);
          auArr_34._2_13_ = auArr_33._2_13_;
          auArr_34._0_2_ = auArr_72._0_2_ & 0xff;
          auArr_77._8_4_ = auArr_34._0_4_;
          auArr_77._12_4_ = auArr_37._0_4_;
          auArr_76 = pshuflw(auArr_77,auArr_77,0x1b);
          auArr_77 = pshufhw(auArr_76,auArr_76,0x1b);
          auArr_76[8] = auArr_72[8];
          auArr_76[9] = 0;
          auArr_76[10] = auArr_72[9];
          auArr_73._0_10_ = (unkuint10)auArr_72[12] << 0x40;
          auArr_73[10] = auArr_72[13];
          auArr_74[11] = 0;
          auArr_74._0_11_ = auArr_73;
          auArr_74[12] = auArr_72[14];
          auArr_74[13] = 0;
          auArr_74[14] = auArr_72[15];
          auArr_76[3] = 0;
          auArr_76._0_3_ = auArr_73._8_3_;
          auArr_76._4_3_ = auArr_74._12_3_;
          auArr_76[7] = 0;
          auArr_76[11] = 0;
          auArr_76._12_3_ = (int3)(CONCAT16(auArr_72[11],(uint6)auArr_72[10] << 0x20) >> 0x20);
          auArr_76[15] = 0;
          auArr_72 = pshuflw(auArr_76,auArr_76,0x1b);
          auArr_72 = pshufhw(auArr_72,auArr_72,0x1b);
          sz_5 = auArr_72._0_2_;
          sz_6 = auArr_72._2_2_;
          sz_7 = auArr_72._4_2_;
          sz_8 = auArr_72._6_2_;
          sz_9 = auArr_72._8_2_;
          sz_10 = auArr_72._10_2_;
          sz_11 = auArr_72._12_2_;
          sz_12 = auArr_72._14_2_;
          sz_13 = auArr_77._0_2_;
          sz_14 = auArr_77._2_2_;
          sz_15 = auArr_77._4_2_;
          sz_16 = auArr_77._6_2_;
          sz_17 = auArr_77._8_2_;
          sz_18 = auArr_77._10_2_;
          sz_19 = auArr_77._12_2_;
          sz_20 = auArr_77._14_2_;
          fnPtr_64 = (char *)(param_2 + uVal_54);
          *fnPtr_64 = (0 < sz_5) * (sz_5 < 0xff) * auArr_72[0] - (0xff < sz_5);
          fnPtr_64[1] = (0 < sz_6) * (sz_6 < 0xff) * auArr_72[2] - (0xff < sz_6);
          fnPtr_64[2] = (0 < sz_7) * (sz_7 < 0xff) * auArr_72[4] - (0xff < sz_7);
          fnPtr_64[3] = (0 < sz_8) * (sz_8 < 0xff) * auArr_72[6] - (0xff < sz_8);
          fnPtr_64[4] = (0 < sz_9) * (sz_9 < 0xff) * auArr_72[8] - (0xff < sz_9);
          fnPtr_64[5] = (0 < sz_10) * (sz_10 < 0xff) * auArr_72[10] - (0xff < sz_10);
          fnPtr_64[6] = (0 < sz_11) * (sz_11 < 0xff) * auArr_72[12] - (0xff < sz_11);
          fnPtr_64[7] = (0 < sz_12) * (sz_12 < 0xff) * auArr_72[14] - (0xff < sz_12);
          fnPtr_64[8] = (0 < sz_13) * (sz_13 < 0xff) * auArr_77[0] - (0xff < sz_13);
          fnPtr_64[9] = (0 < sz_14) * (sz_14 < 0xff) * auArr_77[2] - (0xff < sz_14);
          fnPtr_64[10] = (0 < sz_15) * (sz_15 < 0xff) * auArr_77[4] - (0xff < sz_15);
          fnPtr_64[0xb] = (0 < sz_16) * (sz_16 < 0xff) * auArr_77[6] - (0xff < sz_16);
          fnPtr_64[0xc] = (0 < sz_17) * (sz_17 < 0xff) * auArr_77[8] - (0xff < sz_17);
          fnPtr_64[0xd] = (0 < sz_18) * (sz_18 < 0xff) * auArr_77[10] - (0xff < sz_18);
          fnPtr_64[0xe] = (0 < sz_19) * (sz_19 < 0xff) * auArr_77[12] - (0xff < sz_19);
          fnPtr_64[0xf] = (0 < sz_20) * (sz_20 < 0xff) * auArr_77[14] - (0xff < sz_20);
          uVal_54 = uVal_54 + 0x10;
          pArr16_56 = pArr16_56 + -1;
        } while (uVal_49 != uVal_54);
        if ((uVal_67 & 0x7ffffff0) == uVal_67) goto LAB_18066f46a;
      }
      uVal_59 = uVal_68 & 3;
      uVal_54 = uVal_49;
      if ((uVal_67 & 3) != 0) {
        do {
          pU64_50 = (uint8_t *)(lVal_3 + 0x14f + uVal_62);
          uVal_62 = uVal_62 - 1;
          *(uint8_t *)(param_2 + uVal_54) = *pU64_50;
          uVal_54 = uVal_54 + 1;
          uVal_59 = uVal_59 - 1;
        } while (uVal_59 != 0);
      }
      if (uVal_49 - uVal_68 < 0xfffffffffffffffd) {
        pU64_50 = (uint8_t *)(uVal_62 + lVal_3 + 0x14f);
        lVal_52 = uVal_54 + param_2;
        lVal_55 = 0;
        do {
          *(uint8_t *)(lVal_52 + lVal_55) = *pU64_50;
          *(uint8_t *)(lVal_52 + 1 + lVal_55) = pU64_50[-1];
          *(uint8_t *)(lVal_52 + 2 + lVal_55) = pU64_50[-2];
          *(uint8_t *)(lVal_52 + 3 + lVal_55) = pU64_50[-3];
          pU64_50 = pU64_50 + -4;
          lVal_55 = lVal_55 + 4;
        } while (uVal_68 - uVal_54 != lVal_55);
        uVal_62 = uVal_62 - lVal_55;
      }
    }
  }
LAB_18066f46a:
  uVal_47 = _UNK_1806df6dc;
  uVal_46 = _UNK_1806df6d8;
  uVal_45 = _UNK_1806df6d4;
  uVal_44 = _DAT_1806df6d0;
  uVal_60 = (uint32_t)uVal_62;
  if ((int)uVal_68 < (int)param_3) {
    local_88 = (uint64_t)param_3;
LAB_18066f53c:
    uVal_61 = (uint)uVal_62;
    iVal_48 = func_0x18066fd30(local_98,&local_74);
    if (iVal_48 == 0) goto LAB_18066fa2c;
    if (local_74 == local_8c) {
      *(uint32_t *)(local_98 + 0x60) = 0x71;
      goto LAB_18066fa2c;
    }
    if (local_74 != iVal_2) {
      iVal_48 = (int)uVal_68;
      uVal_63 = (uint8_t)local_74;
      if (iVal_2 <= local_74) {
        iVal_57 = local_74;
        if (*(int *)(lVal_3 + 0x2150 + (int64_t)local_74 * 4) == 0x1002) {
          if (local_74 == *(int *)(lVal_3 + 0x14) + -2) {
            uVal_53 = (char)iVal_66;
            if (iVal_2 < iVal_66) {
              iVal_58 = 0x1002;
              iVal_57 = iVal_66;
              do {
                iVal_58 = iVal_58 + -2;
                if (iVal_58 == 0) goto LAB_18066f839;
                uVal_53 = 2;
                if (0xfff < iVal_57) break;
                iVal_57 = *(int *)(lVal_3 + 0x2150 + (int64_t)iVal_57 * 4);
                if (iVal_57 <= iVal_2) goto LAB_18066f839;
                if (0xfff < iVal_57) break;
                iVal_57 = *(int *)(lVal_3 + 0x2150 + (int64_t)iVal_57 * 4);
                uVal_53 = (uint8_t)iVal_57;
              } while (iVal_2 < iVal_57);
            }
          }
          else {
            uVal_53 = uVal_63;
            if (iVal_2 < local_74) {
              iVal_58 = 0x1002;
              do {
                iVal_58 = iVal_58 + -2;
                if (iVal_58 == 0) goto LAB_18066f839;
                uVal_53 = 2;
                if (0xfff < iVal_57) break;
                iVal_57 = *(int *)(lVal_3 + 0x2150 + (int64_t)iVal_57 * 4);
                if (iVal_57 <= iVal_2) goto LAB_18066f839;
                if (0xfff < iVal_57) break;
                iVal_57 = *(int *)(lVal_3 + 0x2150 + (int64_t)iVal_57 * 4);
                uVal_53 = (uint8_t)iVal_57;
              } while (iVal_2 < iVal_57);
            }
          }
          goto LAB_18066f83c;
        }
        goto LAB_18066f859;
      }
      uVal_68 = (uint64_t)(iVal_48 + 1);
      *(uint8_t *)(param_2 + (int64_t)iVal_48) = uVal_63;
      goto LAB_18066f622;
    }
    lVal_52 = 0;
    do {
      pU64_1 = (uint32_t *)(lVal_3 + 0x2150 + lVal_52 * 4);
      *pU64_1 = uVal_44;
      pU64_1[1] = uVal_45;
      pU64_1[2] = uVal_46;
      pU64_1[3] = uVal_47;
      pU64_1 = (uint32_t *)(lVal_3 + 0x2160 + lVal_52 * 4);
      *pU64_1 = uVal_44;
      pU64_1[1] = uVal_45;
      pU64_1[2] = uVal_46;
      pU64_1[3] = uVal_47;
      pU64_1 = (uint32_t *)(lVal_3 + 0x2170 + lVal_52 * 4);
      *pU64_1 = uVal_44;
      pU64_1[1] = uVal_45;
      pU64_1[2] = uVal_46;
      pU64_1[3] = uVal_47;
      pU64_1 = (uint32_t *)(lVal_3 + 0x2180 + lVal_52 * 4);
      *pU64_1 = uVal_44;
      pU64_1[1] = uVal_45;
      pU64_1[2] = uVal_46;
      pU64_1[3] = uVal_47;
      pU64_1 = (uint32_t *)(lVal_3 + 0x2190 + lVal_52 * 4);
      *pU64_1 = uVal_44;
      pU64_1[1] = uVal_45;
      pU64_1[2] = uVal_46;
      pU64_1[3] = uVal_47;
      pU64_1 = (uint32_t *)(lVal_3 + 0x21a0 + lVal_52 * 4);
      *pU64_1 = uVal_44;
      pU64_1[1] = uVal_45;
      pU64_1[2] = uVal_46;
      pU64_1[3] = uVal_47;
      pU64_1 = (uint32_t *)(lVal_3 + 0x21b0 + lVal_52 * 4);
      *pU64_1 = uVal_44;
      pU64_1[1] = uVal_45;
      pU64_1[2] = uVal_46;
      pU64_1[3] = uVal_47;
      pU64_1 = (uint32_t *)(lVal_3 + 0x21c0 + lVal_52 * 4);
      *pU64_1 = uVal_44;
      pU64_1[1] = uVal_45;
      pU64_1[2] = uVal_46;
      pU64_1[3] = uVal_47;
      lVal_52 = lVal_52 + 0x20;
    } while (lVal_52 != 0x1000);
    *(int *)(lVal_3 + 0x14) = *(int *)(lVal_3 + 0x10) + 1;
    iVal_48 = *(int *)(lVal_3 + 8) + 1;
    *(int *)(lVal_3 + 0x18) = iVal_48;
    *(int *)(lVal_3 + 0x1c) = 1 << ((byte)iVal_48 & 0x1f);
    *(uint32_t *)(lVal_3 + 0x20) = 0x1002;
    iVal_48 = 0x1002;
    goto LAB_18066f530;
  }
LAB_18066f494:
  *(int *)(lVal_3 + 0x20) = iVal_66;
  *(uint32_t *)(lVal_3 + 0x28) = uVal_60;
  uVal_51 = 1;
LAB_18066fa2e:
  if (DAT_18083cf40 != (local_70 ^ (uint64_t)auStack_b8)) {
    func_0x180673080(local_70 ^ (uint64_t)auStack_b8);
    fnPtr_4 = (func_ptr_t )swi(3);
    uVal_51 = (*fnPtr_4)();
    return uVal_51;
  }
  return uVal_51;
LAB_18066f839:
  uVal_53 = (char)iVal_57;
LAB_18066f83c:
  lVal_52 = (int64_t)(int)uVal_61;
  uVal_61 = uVal_61 + 1;
  *(uint8_t *)(lVal_3 + 0x150 + lVal_52) = uVal_53;
  *(uint8_t *)(lVal_3 + 0x114d + (int64_t)*(int *)(lVal_3 + 0x14)) = uVal_53;
  iVal_57 = iVal_66;
LAB_18066f859:
  if (0xffe < (int)uVal_61) {
LAB_18066fa20:
    *(uint32_t *)(local_98 + 0x60) = 0x70;
LAB_18066fa2c:
    uVal_51 = 0;
    goto LAB_18066fa2e;
  }
  lVal_55 = (int64_t)(int)uVal_61;
  lVal_52 = lVal_55 << 0x20;
  while( true ) {
    uVal_61 = uVal_61 + 1;
    uVal_62 = (uint64_t)uVal_61;
    if ((iVal_57 <= iVal_2) || (0xfff < iVal_57)) break;
    *(uint8_t *)(lVal_3 + 0x150 + lVal_55) = *(uint8_t *)(lVal_3 + 0x114f + (int64_t)iVal_57);
    lVal_55 = lVal_55 + 1;
    iVal_57 = *(int *)(lVal_3 + 0x2150 + (int64_t)iVal_57 * 4);
    lVal_52 = lVal_52 + 0x100000000;
    if ((int)lVal_55 == 0xfff) goto LAB_18066fa20;
  }
  if (0xfff < iVal_57) goto LAB_18066fa20;
  *(char *)(lVal_3 + 0x150 + (lVal_52 >> 0x20)) = (char)iVal_57;
  if ((uVal_61 != 0) && (iVal_48 < (int)param_3)) {
    uVal_68 = (uint64_t)iVal_48;
    uVal_62 = (uint64_t)(int)uVal_61;
    uVal_59 = ~uVal_68 + local_88;
    uVal_49 = uVal_62 - 1;
    uVal_54 = uVal_49;
    if (uVal_59 < uVal_49) {
      uVal_54 = uVal_59;
    }
    uVal_54 = uVal_54 + 1;
    if (0xf < uVal_54) {
      fnPtr_64 = (char *)(param_2 + uVal_68);
      uVal_65 = uVal_49;
      if (uVal_59 < uVal_49) {
        uVal_65 = uVal_59;
      }
      if (((char *)(lVal_3 + 0x150 + uVal_62) <= fnPtr_64) ||
         (local_80 = (uint64_t)param_3,
         param_2 + 1 + uVal_68 + uVal_65 <= (uVal_62 - uVal_65) + lVal_3 + 0x14f)) {
        uVal_65 = uVal_54 & 0xfffffffffffffff0;
        uVal_68 = uVal_68 + uVal_65;
        lVal_52 = lVal_3 + 0x140 + uVal_62;
        uVal_62 = uVal_62 - uVal_65;
        if (uVal_59 < uVal_49) {
          uVal_49 = uVal_59;
        }
        lVal_55 = 0;
        do {
          auArr_72 = *(uint8_t (*)[16])(lVal_52 + lVal_55);
          auArr_23[13] = 0;
          auArr_23._0_13_ = auArr_72._0_13_;
          auArr_23[14] = auArr_72[7];
          auArr_25[12] = auArr_72[6];
          auArr_25._0_12_ = auArr_72._0_12_;
          auArr_25._13_2_ = auArr_23._13_2_;
          auArr_27[11] = 0;
          auArr_27._0_11_ = auArr_72._0_11_;
          auArr_27._12_3_ = auArr_25._12_3_;
          auArr_29[10] = auArr_72[5];
          auArr_29._0_10_ = auArr_72._0_10_;
          auArr_29._11_4_ = auArr_27._11_4_;
          auArr_31[9] = 0;
          auArr_31._0_9_ = auArr_72._0_9_;
          auArr_31._10_5_ = auArr_29._10_5_;
          auArr_32[8] = auArr_72[4];
          auArr_32._0_8_ = auArr_72._0_8_;
          auArr_32._9_6_ = auArr_31._9_6_;
          auArr_75[7] = 0;
          auArr_75._0_7_ = auArr_32._8_7_;
          auArr_38._7_8_ = 0;
          auArr_38._0_7_ = auArr_32._8_7_;
          auArr_42._1_8_ = SUB158(auArr_38 << 0x40,7);
          auArr_42[0] = auArr_72[3];
          auArr_42._9_6_ = 0;
          auArr_39._1_10_ = SUB1510(auArr_42 << 0x30,5);
          auArr_39[0] = auArr_72[2];
          auArr_43._11_4_ = 0;
          auArr_43._0_11_ = auArr_39;
          auArr_35._3_12_ = SUB1512(auArr_43 << 0x20,3);
          auArr_35[2] = auArr_72[1];
          auArr_35[1] = 0;
          auArr_35[0] = auArr_72[0];
          auArr_75._8_4_ = auArr_35._0_4_;
          auArr_75._12_4_ = auArr_39._0_4_;
          auArr_76 = pshuflw(auArr_75,auArr_75,0x1b);
          auArr_76 = pshufhw(auArr_76,auArr_76,0x1b);
          auArr_71[8] = auArr_72[8];
          auArr_71[9] = 0;
          auArr_71[10] = auArr_72[9];
          auArr_69._0_10_ = (unkuint10)auArr_72[12] << 0x40;
          auArr_69[10] = auArr_72[13];
          auArr_70[11] = 0;
          auArr_70._0_11_ = auArr_69;
          auArr_70[12] = auArr_72[14];
          auArr_70[13] = 0;
          auArr_70[14] = auArr_72[15];
          auArr_71[3] = 0;
          auArr_71._0_3_ = auArr_69._8_3_;
          auArr_71._4_3_ = auArr_70._12_3_;
          auArr_71[7] = 0;
          auArr_71[11] = 0;
          auArr_71._12_3_ = (int3)(CONCAT16(auArr_72[11],(uint6)auArr_72[10] << 0x20) >> 0x20);
          auArr_71[15] = 0;
          auArr_72 = pshuflw(auArr_71,auArr_71,0x1b);
          auArr_72 = pshufhw(auArr_72,auArr_72,0x1b);
          sz_5 = auArr_72._0_2_;
          sz_6 = auArr_72._2_2_;
          sz_7 = auArr_72._4_2_;
          sz_8 = auArr_72._6_2_;
          sz_9 = auArr_72._8_2_;
          sz_10 = auArr_72._10_2_;
          sz_11 = auArr_72._12_2_;
          sz_12 = auArr_72._14_2_;
          sz_13 = auArr_76._0_2_;
          sz_14 = auArr_76._2_2_;
          sz_15 = auArr_76._4_2_;
          sz_16 = auArr_76._6_2_;
          sz_17 = auArr_76._8_2_;
          sz_18 = auArr_76._10_2_;
          sz_19 = auArr_76._12_2_;
          sz_20 = auArr_76._14_2_;
          *fnPtr_64 = (0 < sz_5) * (sz_5 < 0xff) * auArr_72[0] - (0xff < sz_5);
          fnPtr_64[1] = (0 < sz_6) * (sz_6 < 0xff) * auArr_72[2] - (0xff < sz_6);
          fnPtr_64[2] = (0 < sz_7) * (sz_7 < 0xff) * auArr_72[4] - (0xff < sz_7);
          fnPtr_64[3] = (0 < sz_8) * (sz_8 < 0xff) * auArr_72[6] - (0xff < sz_8);
          fnPtr_64[4] = (0 < sz_9) * (sz_9 < 0xff) * auArr_72[8] - (0xff < sz_9);
          fnPtr_64[5] = (0 < sz_10) * (sz_10 < 0xff) * auArr_72[10] - (0xff < sz_10);
          fnPtr_64[6] = (0 < sz_11) * (sz_11 < 0xff) * auArr_72[12] - (0xff < sz_11);
          fnPtr_64[7] = (0 < sz_12) * (sz_12 < 0xff) * auArr_72[14] - (0xff < sz_12);
          fnPtr_64[8] = (0 < sz_13) * (sz_13 < 0xff) * auArr_76[0] - (0xff < sz_13);
          fnPtr_64[9] = (0 < sz_14) * (sz_14 < 0xff) * auArr_76[2] - (0xff < sz_14);
          fnPtr_64[10] = (0 < sz_15) * (sz_15 < 0xff) * auArr_76[4] - (0xff < sz_15);
          fnPtr_64[0xb] = (0 < sz_16) * (sz_16 < 0xff) * auArr_76[6] - (0xff < sz_16);
          fnPtr_64[0xc] = (0 < sz_17) * (sz_17 < 0xff) * auArr_76[8] - (0xff < sz_17);
          fnPtr_64[0xd] = (0 < sz_18) * (sz_18 < 0xff) * auArr_76[10] - (0xff < sz_18);
          fnPtr_64[0xe] = (0 < sz_19) * (sz_19 < 0xff) * auArr_76[12] - (0xff < sz_19);
          fnPtr_64[0xf] = (0 < sz_20) * (sz_20 < 0xff) * auArr_76[14] - (0xff < sz_20);
          fnPtr_64 = fnPtr_64 + 0x10;
          lVal_55 = lVal_55 + -0x10;
        } while (-lVal_55 != (uVal_49 + 1 & 0xfffffffffffffff0));
        if (uVal_54 == uVal_65) goto LAB_18066f622;
      }
    }
    do {
      *(uint8_t *)(param_2 + uVal_68) = *(uint8_t *)(lVal_3 + 0x14f + uVal_62);
      uVal_68 = uVal_68 + 1;
      uVal_62 = uVal_62 - 1;
      if (uVal_62 == 0) break;
    } while ((int64_t)uVal_68 < (int64_t)local_88);
  }
LAB_18066f622:
  iVal_48 = local_74;
  if ((iVal_66 == 0x1002) ||
     (*(int *)(lVal_3 + 0x2148 + (int64_t)*(int *)(lVal_3 + 0x14) * 4) != 0x1002))
  goto LAB_18066f530;
  *(int *)(lVal_3 + 0x2148 + (int64_t)*(int *)(lVal_3 + 0x14) * 4) = iVal_66;
  if (local_74 == *(int *)(lVal_3 + 0x14) + -2) {
    if (iVal_2 < iVal_66) {
      iVal_57 = 0x1002;
      do {
        iVal_57 = iVal_57 + -2;
        if (iVal_57 == 0) goto LAB_18066f522;
        uVal_63 = 2;
        if (0xfff < iVal_66) break;
        iVal_66 = *(int *)(lVal_3 + 0x2150 + (int64_t)iVal_66 * 4);
        if (iVal_66 <= iVal_2) goto LAB_18066fa18;
        if (0xfff < iVal_66) break;
        iVal_66 = *(int *)(lVal_3 + 0x2150 + (int64_t)iVal_66 * 4);
        uVal_63 = (uint8_t)iVal_66;
      } while (iVal_2 < iVal_66);
    }
    else {
LAB_18066f522:
      uVal_63 = (uint8_t)iVal_66;
    }
  }
  else if (iVal_2 < local_74) {
    iVal_57 = 0x1002;
    iVal_66 = local_74;
    do {
      iVal_57 = iVal_57 + -2;
      if (iVal_57 == 0) goto LAB_18066fa18;
      uVal_63 = 2;
      if (0xfff < iVal_66) break;
      iVal_66 = *(int *)(lVal_3 + 0x2150 + (int64_t)iVal_66 * 4);
      if (iVal_66 <= iVal_2) goto LAB_18066fa18;
      if (0xfff < iVal_66) break;
      iVal_66 = *(int *)(lVal_3 + 0x2150 + (int64_t)iVal_66 * 4);
      uVal_63 = (uint8_t)iVal_66;
    } while (iVal_2 < iVal_66);
  }
LAB_18066f525:
  *(uint8_t *)(lVal_3 + 0x114d + (int64_t)*(int *)(lVal_3 + 0x14)) = uVal_63;
LAB_18066f530:
  iVal_66 = iVal_48;
  uVal_60 = (uint32_t)uVal_62;
  if ((int)param_3 <= (int)uVal_68) goto LAB_18066f494;
  goto LAB_18066f53c;
LAB_18066fa18:
  uVal_63 = (uint8_t)iVal_66;
  goto LAB_18066f525;
}

// func_0x18066fa80
uint64_t func_0x18066fa80(int64_t param_1,uint *param_2,int64_t *param_3)
{
  byte *pU8_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  uint uVal_5;
  size_t sz_6;
  uint64_t uVal_7;
  uint8_t auStack_48 [38];
  byte local_22;
  byte local_21;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  pU8_1 = *(byte **)(param_1 + 0x70);
  if ((*pU8_1 & 8) == 0) {
    *(uint32_t *)(param_1 + 0x60) = 0x6f;
  }
  else {
    if (*(func_ptr_t *)(pU8_1 + 0x40) == (func_ptr_t )0x0) {
      sz_6 = fread(&local_22,1,1,*(FILE **)(pU8_1 + 0x38));
      if (sz_6 == 1) goto LAB_18066fafe;
    }
    else {
      iVal_4 = (**(func_ptr_t *)(pU8_1 + 0x40))(param_1,&local_22,1);
      if (iVal_4 == 1) {
LAB_18066fafe:
        *param_2 = (uint)local_22;
        lVal_2 = *(int64_t *)(param_1 + 0x70);
        if (*(func_ptr_t *)(lVal_2 + 0x40) == (func_ptr_t )0x0) {
          sz_6 = fread(&local_21,1,1,*(FILE **)(lVal_2 + 0x38));
          if (sz_6 == 1) goto LAB_18066fb4e;
        }
        else {
          iVal_4 = (**(func_ptr_t *)(lVal_2 + 0x40))(param_1,&local_21,1);
          if (iVal_4 == 1) {
LAB_18066fb4e:
            if (local_21 == 0) {
              *param_3 = 0;
              uVal_7 = 1;
              goto LAB_18066fbcd;
            }
            *param_3 = lVal_2 + 0x50;
            *(byte *)(lVal_2 + 0x50) = local_21;
            fnPtr_3 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
            if (fnPtr_3 == (func_ptr_t )0x0) {
              sz_6 = fread((void *)(*param_3 + 1),1,(uint64_t)local_21,
                            *(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38));
              uVal_7 = 1;
              if (sz_6 == local_21) goto LAB_18066fbcd;
            }
            else {
              uVal_5 = (*fnPtr_3)(param_1,*param_3 + 1);
              uVal_7 = 1;
              if (uVal_5 == local_21) goto LAB_18066fbcd;
            }
          }
        }
      }
    }
    *(uint32_t *)(param_1 + 0x60) = 0x66;
  }
  uVal_7 = 0;
LAB_18066fbcd:
  if (DAT_18083cf40 != (local_20 ^ (uint64_t)auStack_48)) {
    func_0x180673080(local_20 ^ (uint64_t)auStack_48);
    fnPtr_3 = (func_ptr_t )swi(3);
    uVal_7 = (*fnPtr_3)();
    return uVal_7;
  }
  return uVal_7;
}

// func_0x18066fc00
uint64_t func_0x18066fc00(int64_t param_1,byte *param_2,uint *param_3)
{
  uint uVal_1;
  uint64_t uVal_2;
  
  uVal_2 = 0;
  if (param_1 == 4) {
    *param_3 = *param_2 >> 2 & 7;
    *(byte *)(param_3 + 1) = *param_2 >> 1 & 1;
    param_3[2] = (uint)*(ushort *)(param_2 + 1);
    uVal_1 = 0xffffffff;
    if ((*param_2 & 1) != 0) {
      uVal_1 = (uint)param_2[3];
    }
    param_3[3] = uVal_1;
    uVal_2 = 1;
  }
  return uVal_2;
}

// func_0x18066fc40
uint64_t func_0x18066fc40(int64_t param_1,uint32_t *param_2)
{
  int iVal_1;
  uint64_t uVal_2;
  byte *pU8_3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int64_t *)(param_1 + 0x70) == 0) {
    return 0;
  }
  if (*(int64_t *)(param_1 + 0x40) != 0) {
    func_0x180671820();
    *(uint64_t *)(param_1 + 0x40) = 0;
  }
  if (*(int64_t *)(param_1 + 0x18) != 0) {
    func_0x180671820();
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  if (*(int64_t *)(param_1 + 0x48) != 0) {
    func_0x180671950(param_1);
    *(uint64_t *)(param_1 + 0x48) = 0;
  }
  func_0x1806718f0(param_1 + 0x50,param_1 + 0x58);
  pU8_3 = *(byte **)(param_1 + 0x70);
  if ((*pU8_3 & 8) == 0) {
    if (param_2 != (uint32_t *)0x0) {
      *param_2 = 0x6f;
LAB_18066fce8:
      pU8_3 = *(byte **)(param_1 + 0x70);
    }
    thunk_FUN_180695dd0(pU8_3);
    thunk_FUN_180695dd0(param_1);
    uVal_2 = 0;
  }
  else {
    if (*(int64_t *)(pU8_3 + 0x38) != 0) {
      iVal_1 = func_0x18068a690(*(int64_t *)(pU8_3 + 0x38));
      if (iVal_1 != 0) {
        if (param_2 != (uint32_t *)0x0) {
          *param_2 = 0x6e;
        }
        goto LAB_18066fce8;
      }
      pU8_3 = *(byte **)(param_1 + 0x70);
    }
    thunk_FUN_180695dd0(pU8_3);
    thunk_FUN_180695dd0(param_1);
    uVal_2 = 1;
    if (param_2 != (uint32_t *)0x0) {
      *param_2 = 0;
      return uVal_2;
    }
  }
  return uVal_2;
}

// func_0x18066fd30
uint64_t func_0x18066fd30(int64_t param_1,uint *param_2)
{
  byte *_DstBuf;
  byte *_DstBuf_00;
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint uVal_4;
  size_t sz_5;
  uint64_t uVal_6;
  int iVal_7;
  byte bFlag_8;
  byte bFlag_9;
  
  lVal_1 = *(int64_t *)(param_1 + 0x70);
  iVal_3 = *(int *)(lVal_1 + 0x18);
  if (iVal_3 < 0xd) {
    iVal_7 = *(int *)(lVal_1 + 0x2c);
    if (iVal_7 < iVal_3) {
      _DstBuf = (byte *)(lVal_1 + 0x50);
      _DstBuf_00 = (byte *)(lVal_1 + 0x51);
      bFlag_8 = *(byte *)(lVal_1 + 0x50);
      do {
        if (bFlag_8 == 0) {
          fnPtr_2 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
          if (fnPtr_2 == (func_ptr_t )0x0) {
            sz_5 = fread(_DstBuf,1,1,*(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38));
            if (sz_5 == 1) goto LAB_18066fe01;
          }
          else {
            iVal_3 = (*fnPtr_2)(param_1,_DstBuf,1);
            if (iVal_3 == 1) {
LAB_18066fe01:
              if (*_DstBuf == 0) goto LAB_18066fd4b;
              fnPtr_2 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
              if (fnPtr_2 == (func_ptr_t )0x0) {
                sz_5 = fread(_DstBuf_00,1,(uint64_t)*_DstBuf,
                              *(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38));
                bFlag_8 = *_DstBuf;
                if (sz_5 == bFlag_8) goto LAB_18066fe52;
              }
              else {
                uVal_4 = (*fnPtr_2)(param_1,_DstBuf_00);
                bFlag_8 = *_DstBuf;
                if (uVal_4 == bFlag_8) {
LAB_18066fe52:
                  bFlag_9 = *(byte *)(lVal_1 + 0x51);
                  *(uint8_t *)(lVal_1 + 0x51) = 2;
                  iVal_3 = *(int *)(lVal_1 + 0x18);
                  iVal_7 = *(int *)(lVal_1 + 0x2c);
                  goto LAB_18066fd90;
                }
              }
            }
          }
          *(uint32_t *)(param_1 + 0x60) = 0x66;
          goto LAB_18066fd52;
        }
        bFlag_9 = *_DstBuf_00;
        *_DstBuf_00 = bFlag_9 + 1;
        bFlag_9 = _DstBuf[bFlag_9];
LAB_18066fd90:
        bFlag_8 = bFlag_8 - 1;
        *(byte *)(lVal_1 + 0x50) = bFlag_8;
        uVal_4 = (uint)bFlag_9 << ((byte)iVal_7 & 0x1f) | *(uint *)(lVal_1 + 0x30);
        *(uint *)(lVal_1 + 0x30) = uVal_4;
        iVal_7 = iVal_7 + 8;
        *(int *)(lVal_1 + 0x2c) = iVal_7;
      } while (iVal_7 < iVal_3);
    }
    else {
      uVal_4 = *(uint *)(lVal_1 + 0x30);
    }
    *param_2 = *(ushort *)(&DAT_1806df6e0 + (int64_t)iVal_3 * 2) & uVal_4;
    iVal_3 = *(int *)(lVal_1 + 0x14);
    iVal_7 = *(int *)(lVal_1 + 0x18);
    *(uint *)(lVal_1 + 0x30) = *(uint *)(lVal_1 + 0x30) >> ((byte)iVal_7 & 0x1f);
    *(int *)(lVal_1 + 0x2c) = *(int *)(lVal_1 + 0x2c) - iVal_7;
    uVal_6 = 1;
    if (iVal_3 < 0x1001) {
      *(int *)(lVal_1 + 0x14) = iVal_3 + 1;
      if (iVal_7 < 0xc && *(int *)(lVal_1 + 0x1c) <= iVal_3) {
        *(int *)(lVal_1 + 0x1c) = *(int *)(lVal_1 + 0x1c) * 2;
        *(int *)(lVal_1 + 0x18) = iVal_7 + 1;
      }
    }
  }
  else {
LAB_18066fd4b:
    *(uint32_t *)(param_1 + 0x60) = 0x70;
LAB_18066fd52:
    uVal_6 = 0;
  }
  return uVal_6;
}

// func_0x18066fef0
uint64_t func_0x18066fef0(int64_t param_1)
{
  int64_t *pLong_1;
  uint32_t *pU64_2;
  uint uVal_3;
  func_ptr_t fnPtr_4;
  int iVal_5;
  uint uVal_6;
  int iVal_7;
  uint uVal_8;
  byte *pU8_9;
  size_t sz_10;
  uint64_t uVal_11;
  uint32_t uVal_12;
  int64_t lVal_13;
  int64_t lVal_14;
  uint8_t auStack_88 [32];
  uint8_t *local_68;
  uint32_t local_5c;
  uint8_t *local_58;
  byte local_49;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint32_t *)(param_1 + 0x50) = 0;
  pU8_9 = *(byte **)(param_1 + 0x70);
  uVal_12 = 0x6f;
  if ((*pU8_9 & 8) == 0) {
LAB_18066ff2f:
    *(uint32_t *)(param_1 + 0x60) = uVal_12;
  }
  else {
    pLong_1 = (int64_t *)(param_1 + 0x58);
    pU64_2 = (uint32_t *)(param_1 + 0x50);
    do {
      if (*(func_ptr_t *)(pU8_9 + 0x40) == (func_ptr_t )0x0) {
        sz_10 = fread(&local_49,1,1,*(FILE **)(pU8_9 + 0x38));
        if (sz_10 != 1) goto LAB_1806702fc;
      }
      else {
        iVal_5 = (**(func_ptr_t *)(pU8_9 + 0x40))(param_1,&local_49,1);
        if (iVal_5 != 1) {
LAB_1806702fc:
          *(uint32_t *)(param_1 + 0x60) = 0x66;
          goto LAB_1806702d1;
        }
      }
      if (local_49 == 0x21) {
        iVal_5 = func_0x18066fa80(param_1,&local_5c,&local_58);
        uVal_11 = 0;
        if (iVal_5 == 0) goto LAB_1806702d4;
        if (local_58 != (uint8_t *)0x0) {
          local_68 = local_58 + 1;
          iVal_5 = func_0x180671850(pU64_2,pLong_1,local_5c,*local_58);
          if (iVal_5 != 0) {
            do {
              lVal_14 = *(int64_t *)(param_1 + 0x70);
              if (*(func_ptr_t *)(lVal_14 + 0x40) == (func_ptr_t )0x0) {
                sz_10 = fread(&local_49,1,1,*(FILE **)(lVal_14 + 0x38));
                if (sz_10 == 1) goto LAB_1806701e2;
LAB_1806702ca:
                *(uint32_t *)(param_1 + 0x60) = 0x66;
                goto LAB_1806702d1;
              }
              iVal_5 = (**(func_ptr_t *)(lVal_14 + 0x40))(param_1,&local_49,1);
              if (iVal_5 != 1) goto LAB_1806702ca;
LAB_1806701e2:
              if (local_49 == 0) goto LAB_180670270;
              *(byte *)(lVal_14 + 0x50) = local_49;
              fnPtr_4 = *(func_ptr_t *)(*(int64_t *)(param_1 + 0x70) + 0x40);
              if (fnPtr_4 == (func_ptr_t )0x0) {
                sz_10 = fread((void *)(lVal_14 + 0x51),1,(uint64_t)local_49,
                               *(FILE **)(*(int64_t *)(param_1 + 0x70) + 0x38));
                if (sz_10 != local_49) goto LAB_1806702ca;
              }
              else {
                uVal_8 = (*fnPtr_4)(param_1,lVal_14 + 0x51);
                if (uVal_8 != local_49) goto LAB_1806702ca;
              }
              local_68 = (uint8_t *)(lVal_14 + 0x51);
              uVal_11 = 0;
              iVal_5 = func_0x180671850(pU64_2,pLong_1,0,*(uint8_t *)(lVal_14 + 0x50));
              if (iVal_5 == 0) break;
            } while( true );
          }
          goto LAB_1806702d4;
        }
LAB_180670270:
        local_58 = (uint8_t *)0x0;
      }
      else {
        if (local_49 != 0x2c) {
          uVal_12 = 0x6b;
          if (local_49 != 0x3b) goto LAB_18066ff2f;
          uVal_11 = 1;
          if (*(int *)(param_1 + 0x20) != 0) goto LAB_1806702d4;
          *(uint32_t *)(param_1 + 0x60) = 0x69;
          goto LAB_1806702d1;
        }
        iVal_5 = func_0x18066ec40(param_1);
        if (iVal_5 == 0) goto LAB_1806702d1;
        lVal_14 = *(int64_t *)(param_1 + 0x48);
        lVal_13 = (int64_t)*(int *)(param_1 + 0x20) * 0x38;
        uVal_8 = *(uint *)(lVal_14 + -0x30 + lVal_13);
        uVal_3 = *(uint *)(lVal_14 + -0x2c + lVal_13);
        if (((int)(uVal_8 & uVal_3) < 0) &&
           (iVal_5 = (int)(0x7fffffff / (uint64_t)-uVal_3), uVal_6 = -iVal_5, uVal_11 = 0,
           uVal_8 != uVal_6 && SBORROW4(uVal_8,uVal_6) == (int)(uVal_8 + iVal_5) < 0)) goto LAB_1806702d4;
        lVal_14 = lVal_14 + lVal_13;
        lVal_13 = func_0x180671a30(0,(int64_t)(int)(uVal_8 * uVal_3),1);
        *(int64_t *)(lVal_14 + -0x18) = lVal_13;
        uVal_11 = 0;
        if (lVal_13 == 0) goto LAB_1806702d4;
        if (*(char *)(lVal_14 + -0x28) == '\x01') {
          if (0 < (int)uVal_3) {
            uVal_11 = 0;
            iVal_5 = 0;
            do {
              iVal_7 = func_0x18066f190(param_1,(int64_t)(*(int *)(lVal_14 + -0x30) * iVal_5) +
                                            *(int64_t *)(lVal_14 + -0x18));
              if (iVal_7 == 0) goto LAB_1806702d4;
              iVal_5 = iVal_5 + 8;
              iVal_7 = *(int *)(lVal_14 + -0x2c);
            } while (iVal_5 < iVal_7);
            if (4 < iVal_7) {
              iVal_5 = 4;
              do {
                iVal_7 = func_0x18066f190(param_1,(int64_t)(*(int *)(lVal_14 + -0x30) * iVal_5) +
                                              *(int64_t *)(lVal_14 + -0x18));
                if (iVal_7 == 0) goto LAB_1806702d4;
                iVal_5 = iVal_5 + 8;
                iVal_7 = *(int *)(lVal_14 + -0x2c);
              } while (iVal_5 < iVal_7);
            }
            if (2 < iVal_7) {
              iVal_5 = 2;
              do {
                iVal_7 = func_0x18066f190(param_1,(int64_t)(*(int *)(lVal_14 + -0x30) * iVal_5) +
                                              *(int64_t *)(lVal_14 + -0x18));
                if (iVal_7 == 0) goto LAB_1806702d4;
                iVal_5 = iVal_5 + 4;
                iVal_7 = *(int *)(lVal_14 + -0x2c);
              } while (iVal_5 < iVal_7);
            }
            if (1 < iVal_7) {
              iVal_5 = 1;
              do {
                iVal_7 = func_0x18066f190(param_1,(int64_t)(*(int *)(lVal_14 + -0x30) * iVal_5) +
                                              *(int64_t *)(lVal_14 + -0x18));
                if (iVal_7 == 0) goto LAB_1806702d4;
                iVal_5 = iVal_5 + 2;
              } while (iVal_5 < *(int *)(lVal_14 + -0x2c));
            }
          }
        }
        else {
          iVal_5 = func_0x18066f190(param_1,lVal_13,uVal_8 * uVal_3);
          uVal_11 = 0;
          if (iVal_5 == 0) goto LAB_1806702d4;
        }
        if (*pLong_1 != 0) {
          *(int64_t *)(lVal_14 + -8) = *pLong_1;
          *(uint32_t *)(lVal_14 + -0x10) = *pU64_2;
          *pLong_1 = 0;
          *pU64_2 = 0;
        }
      }
      pU8_9 = *(byte **)(param_1 + 0x70);
    } while ((*pU8_9 & 8) != 0);
    *(uint32_t *)(param_1 + 0x60) = 0x6f;
  }
LAB_1806702d1:
  uVal_11 = 0;
LAB_1806702d4:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_88)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_88);
    fnPtr_4 = (func_ptr_t )swi(3);
    uVal_11 = (*fnPtr_4)();
    return uVal_11;
  }
  return uVal_11;
}

// func_0x180670340
void func_0x180670340(void)
{
  int64_t *pLong_1;
  int64_t *lpAddress;
  
  lpAddress = DAT_1808423f8;
  DAT_1808423f8 = (int64_t *)0x0;
  if (lpAddress != (int64_t *)0x0) {
    do {
      pLong_1 = (int64_t *)*lpAddress;
      VirtualFree(lpAddress,0,0x8000);
      lpAddress = pLong_1;
    } while (pLong_1 != (int64_t *)0x0);
  }
  return;
}

// func_0x180670390
uint64_t * func_0x180670390(uint64_t *param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  SIZE_T SVar3;
  uint64_t *pU64_4;
  uint64_t *pU64_5;
  uint64_t *lpAddress;
  uint64_t uVal_6;
  PVOID pVoid_7;
  uint64_t uVal_8;
  uint uVal_9;
  uint64_t *pU64_10;
  uint8_t auStack_c8 [32];
  _SYSTEM_INFO local_a8;
  _MEMORY_BASIC_INFORMATION local_78;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_c8;
  GetSystemInfo(&local_a8);
  pU64_5 = param_1 + -0x8000000;
  if (param_1 + -0x8000000 <= local_a8.lpMinimumApplicationAddress) {
    pU64_5 = (uint64_t *)local_a8.lpMinimumApplicationAddress;
  }
  if (param_1 < (uint64_t *)0x40000001) {
    pU64_5 = (uint64_t *)local_a8.lpMinimumApplicationAddress;
  }
  if (param_1 + 0x8000000 < local_a8.lpMaximumApplicationAddress) {
    local_a8.lpMaximumApplicationAddress = param_1 + 0x8000000;
  }
  pU64_10 = (uint64_t *)((int64_t)local_a8.lpMaximumApplicationAddress - 0xfff);
  for (pU64_4 = DAT_1808423f8; pU64_4 != (uint64_t *)0x0; pU64_4 = (uint64_t *)*pU64_4) {
    if (((pU64_5 <= pU64_4) && (pU64_4 < pU64_10)) && (pU64_4[1] != 0)) goto LAB_180670429;
  }
  lpAddress = param_1;
  do {
    if (lpAddress < pU64_5) {
LAB_1806704ea:
      goto LAB_1806704ef;
    }
    pVoid_7 = (PVOID)(uint64_t)local_a8.dwAllocationGranularity;
    pU64_4 = lpAddress;
    if ((uint64_t)lpAddress >> 0x20 == 0) {
      pU64_4 = (uint64_t *)((uint64_t)lpAddress & 0xffffffff);
    }
    lpAddress = (uint64_t *)
                ((int64_t)lpAddress - ((uint64_t)pU64_4 % (uint64_t)pVoid_7 + (int64_t)pVoid_7));
    while( true ) {
      if ((lpAddress < pU64_5) || (SVar3 = VirtualQuery(lpAddress,&local_78,0x30), SVar3 == 0))
      goto LAB_1806704ea;
      if (local_78.State == 0x10000) break;
      lpAddress = (uint64_t *)((int64_t)local_78.AllocationBase - (int64_t)pVoid_7);
      if (local_78.AllocationBase < pVoid_7) goto LAB_1806704ea;
    }
    if (lpAddress == (uint64_t *)0x0) goto LAB_1806704ea;
    pU64_4 = (uint64_t *)VirtualAlloc(lpAddress,0x1000,0x3000,0x40);
  } while (pU64_4 == (uint64_t *)0x0);
  goto LAB_1806705c9;
LAB_1806704ef:
  do {
    if (pU64_10 < param_1) {
LAB_18067095a:
      pU64_5 = (uint64_t *)0x0;
      goto LAB_18067095c;
    }
    uVal_6 = (uint64_t)local_a8.dwAllocationGranularity;
    if ((uint64_t)param_1 >> 0x20 == 0) {
      param_1 = (uint64_t *)
                ((int64_t)param_1 + (uVal_6 - ((uint64_t)param_1 & 0xffffffff) % uVal_6));
      if (param_1 <= pU64_10) goto LAB_180670535;
      goto LAB_18067095a;
    }
    param_1 = (uint64_t *)((int64_t)param_1 + (uVal_6 - (uint64_t)param_1 % uVal_6));
    if (pU64_10 < param_1) goto LAB_18067095a;
LAB_180670535:
    uVal_9 = local_a8.dwAllocationGranularity - 1;
    while( true ) {
      SVar3 = VirtualQuery(param_1,&local_78,0x30);
      if (SVar3 == 0) goto LAB_18067095a;
      if (local_78.State == 0x10000) break;
      uVal_8 = (int64_t)local_78.BaseAddress + local_78.RegionSize + uVal_9;
      uVal_2 = uVal_8;
      if (uVal_8 >> 0x20 == 0) {
        uVal_2 = uVal_8 & 0xffffffff;
      }
      param_1 = (uint64_t *)(uVal_8 - uVal_2 % uVal_6);
      if (pU64_10 < param_1) goto LAB_18067095a;
    }
    if (param_1 == (uint64_t *)0x0) goto LAB_18067095a;
    pU64_4 = (uint64_t *)VirtualAlloc(param_1,0x1000,0x3000,0x40);
  } while (pU64_4 == (uint64_t *)0x0);
LAB_1806705c9:
  *(uint32_t *)(pU64_4 + 2) = 0;
  pU64_4[8] = 0;
  pU64_4[0x10] = pU64_4 + 8;
  pU64_4[0x18] = pU64_4 + 0x10;
  pU64_4[0x20] = pU64_4 + 0x18;
  pU64_4[0x28] = pU64_4 + 0x20;
  pU64_4[0x30] = pU64_4 + 0x28;
  pU64_4[0x38] = pU64_4 + 0x30;
  pU64_4[0x40] = pU64_4 + 0x38;
  pU64_4[0x48] = pU64_4 + 0x40;
  pU64_4[0x50] = pU64_4 + 0x48;
  pU64_4[0x58] = pU64_4 + 0x50;
  pU64_4[0x60] = pU64_4 + 0x58;
  pU64_4[0x68] = pU64_4 + 0x60;
  pU64_4[0x70] = pU64_4 + 0x68;
  pU64_4[0x78] = pU64_4 + 0x70;
  pU64_4[0x80] = pU64_4 + 0x78;
  pU64_4[0x88] = pU64_4 + 0x80;
  pU64_4[0x90] = pU64_4 + 0x88;
  pU64_4[0x98] = pU64_4 + 0x90;
  pU64_4[0xa0] = pU64_4 + 0x98;
  pU64_4[0xa8] = pU64_4 + 0xa0;
  pU64_4[0xb0] = pU64_4 + 0xa8;
  pU64_4[0xb8] = pU64_4 + 0xb0;
  pU64_4[0xc0] = pU64_4 + 0xb8;
  pU64_4[200] = pU64_4 + 0xc0;
  pU64_4[0xd0] = pU64_4 + 200;
  pU64_4[0xd8] = pU64_4 + 0xd0;
  pU64_4[0xe0] = pU64_4 + 0xd8;
  pU64_4[0xe8] = pU64_4 + 0xe0;
  pU64_4[0xf0] = pU64_4 + 0xe8;
  pU64_4[0xf8] = pU64_4 + 0xf0;
  pU64_4[0x100] = pU64_4 + 0xf8;
  pU64_4[0x108] = pU64_4 + 0x100;
  pU64_4[0x110] = pU64_4 + 0x108;
  pU64_4[0x118] = pU64_4 + 0x110;
  pU64_4[0x120] = pU64_4 + 0x118;
  pU64_4[0x128] = pU64_4 + 0x120;
  pU64_4[0x130] = pU64_4 + 0x128;
  pU64_4[0x138] = pU64_4 + 0x130;
  pU64_4[0x140] = pU64_4 + 0x138;
  pU64_4[0x148] = pU64_4 + 0x140;
  pU64_4[0x150] = pU64_4 + 0x148;
  pU64_4[0x158] = pU64_4 + 0x150;
  pU64_4[0x160] = pU64_4 + 0x158;
  pU64_4[0x168] = pU64_4 + 0x160;
  pU64_4[0x170] = pU64_4 + 0x168;
  pU64_4[0x178] = pU64_4 + 0x170;
  pU64_4[0x180] = pU64_4 + 0x178;
  pU64_4[0x188] = pU64_4 + 0x180;
  pU64_4[400] = pU64_4 + 0x188;
  pU64_4[0x198] = pU64_4 + 400;
  pU64_4[0x1a0] = pU64_4 + 0x198;
  pU64_4[0x1a8] = pU64_4 + 0x1a0;
  pU64_4[0x1b0] = pU64_4 + 0x1a8;
  pU64_4[0x1b8] = pU64_4 + 0x1b0;
  pU64_4[0x1c0] = pU64_4 + 0x1b8;
  pU64_4[0x1c8] = pU64_4 + 0x1c0;
  pU64_4[0x1d0] = pU64_4 + 0x1c8;
  pU64_4[0x1d8] = pU64_4 + 0x1d0;
  pU64_4[0x1e0] = pU64_4 + 0x1d8;
  pU64_4[0x1e8] = pU64_4 + 0x1e0;
  pU64_4[0x1f0] = pU64_4 + 0x1e8;
  pU64_4[0x1f8] = pU64_4 + 0x1f0;
  pU64_4[1] = pU64_4 + 0x1f8;
  *pU64_4 = DAT_1808423f8;
  DAT_1808423f8 = pU64_4;
LAB_180670429:
  pU64_5 = (uint64_t *)pU64_4[1];
  pU64_4[1] = *pU64_5;
  *(int *)(pU64_4 + 2) = *(int *)(pU64_4 + 2) + 1;
LAB_18067095c:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_c8)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_c8);
    fnPtr_1 = (func_ptr_t )swi(3);
    pU64_5 = (uint64_t *)(*fnPtr_1)();
    return pU64_5;
  }
  return pU64_5;
}

// func_0x1806709a0
void func_0x1806709a0(uint64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  uint64_t *lpAddress;
  
  lpAddress = &DAT_1808423f8;
  pU64_2 = (uint64_t *)0x0;
  do {
    pU64_1 = pU64_2;
    lpAddress = (uint64_t *)*lpAddress;
    if (lpAddress == (uint64_t *)0x0) {
      return;
    }
    pU64_2 = lpAddress;
  } while ((uint64_t *)((uint64_t)param_1 & 0xfffffffffffff000) != lpAddress);
  *param_1 = lpAddress[1];
  lpAddress[1] = param_1;
  pU64_2 = lpAddress + 2;
  *(int *)pU64_2 = *(int *)pU64_2 + -1;
  if (*(int *)pU64_2 != 0) {
    return;
  }
  pU64_2 = &DAT_1808423f8;
  if (pU64_1 != (uint64_t *)0x0) {
    pU64_2 = pU64_1;
  }
  *pU64_2 = *lpAddress;
                    /* WARNING: Could not recover jumptable at 0x000180670a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree(lpAddress,0,0x8000);
  return;
}

// func_0x180670a10
uint64_t func_0x180670a10(LPCVOID param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_58 [32];
  _MEMORY_BASIC_INFORMATION local_38;
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  VirtualQuery(param_1,&local_38,0x30);
  if (DAT_18083cf40 == (local_8 ^ (uint64_t)auStack_58)) {
    return (uint64_t)(local_38.State == 0x1000 && (local_38.Protect & 0xf0) != 0);
  }
  func_0x180673080(local_8 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x180670a80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180670a80(int64_t *param_1)
{
  char ch_1;
  uint uVal_2;
  int64_t lVal_3;
  func_ptr_t fnPtr_4;
  byte bFlag_5;
  uint uVal_6;
  int iVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  undefined6 *pU64_10;
  uint64_t uVal_12;
  uint uVal_13;
  undefined6 *pU64_14;
  uint8_t *pU64_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  undefined6 *pU64_18;
  byte bFlag_19;
  bool bFlag_20;
  bool bFlag_21;
  uint8_t auStack_d8 [32];
  undefined6 *local_b8;
  byte local_ad [11];
  byte local_a2;
  byte local_a1;
  byte local_a0;
  byte local_9e;
  int local_98;
  int local_90;
  uint local_8c;
  uint32_t local_88;
  uint32_t uStack_84;
  undefined6 *puStack_80;
  undefined6 local_78;
  uint16_t uStack_72;
  undefined6 uStack_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint64_t uStack_60;
  undefined6 local_58 [2];
  uint64_t local_48;
  int64_t lVal_11;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_d8;
  local_68 = _DAT_1806e28a0;
  uStack_64 = _UNK_1806e28a4;
  uStack_60 = (uint8_t *)CONCAT44(_UNK_1806e28ac,_UNK_1806e28a8);
  uStack_70 = 0;
  local_78 = 0x25ff;
  uStack_72 = 0;
  local_88 = _DAT_1806e28b0;
  uStack_84 = _UNK_1806e28b4;
  puStack_80 = (undefined6 *)CONCAT44(_UNK_1806e28bc,_UNK_1806e28b8);
  param_1[4] = 0;
  local_b8 = (undefined6 *)0x0;
  uVal_16 = 0;
  bFlag_19 = 0;
  do {
    pU64_18 = (undefined6 *)((uint64_t)bFlag_19 + *param_1);
    lVal_11 = param_1[2];
    uVal_6 = func_0x180671a80(pU64_18,local_ad);
    if ((local_8c & 0x1000) != 0) {
LAB_180670e6f:
      uVal_9 = 0;
      goto LAB_180670e71;
    }
    iVal_7 = (int)(uVal_16 & 0xff);
    if (bFlag_19 < 5) {
      if ((local_a0 & 199) == 5) {
        pU64_14 = pU64_18;
        pU64_10 = local_58;
        for (uVal_12 = (uint64_t)uVal_6; uVal_12 != 0; uVal_12 = uVal_12 - 1) {
          *(uint8_t *)pU64_10 = *(uint8_t *)pU64_14;
          pU64_14 = (undefined6 *)((int64_t)pU64_14 + 1);
          pU64_10 = (undefined6 *)((int64_t)pU64_10 + 1);
        }
        *(int *)((int64_t)local_58 +
                ((uint64_t)local_ad[0] - (uint64_t)(local_8c >> 2 & 0xf)) + -4) =
             ((int)pU64_18 - ((int)lVal_11 + iVal_7)) + local_90;
        bFlag_20 = (byte)(local_9e ^ 4 | ~local_a2) == 0;
        pU64_14 = local_58;
      }
      else if (local_a2 == 0xe8) {
        uStack_60 = (uint8_t *)((int64_t)local_98 + (uint64_t)local_ad[0] + (int64_t)pU64_18);
        uVal_6 = 0x10;
        pU64_14 = (undefined6 *)&local_68;
joined_r0x000180670d14:
        bFlag_20 = false;
      }
      else {
        pU64_14 = pU64_18;
        if ((local_a2 & 0xfd) == 0xe9) {
          lVal_11 = (int64_t)local_98;
          if (local_a2 == 0xeb) {
            lVal_11 = (int64_t)(char)local_98;
          }
          pU64_10 = (undefined6 *)((int64_t)pU64_18 + lVal_11 + (uint64_t)local_ad[0]);
          if ((undefined6 *)((int64_t)(undefined6 *)*param_1 + 5) <= pU64_10 ||
              pU64_10 < (undefined6 *)*param_1) {
            uStack_72 = SUB82(pU64_10,0);
            uStack_70 = (undefined6)((uint64_t)pU64_10 >> 0x10);
            bFlag_20 = local_b8 <= pU64_18;
            goto LAB_180670b27;
          }
          if (local_b8 <= pU64_10) {
            local_b8 = pU64_10;
          }
          bFlag_20 = false;
        }
        else {
          bFlag_20 = (local_a2 & 0xf0) != 0x70;
          bFlag_21 = (local_a2 & 0xfc) != 0xe0;
          if (-0x71 < (char)local_a1 && (bFlag_21 && bFlag_20)) {
            bFlag_20 = local_b8 <= pU64_18 && (local_a2 & 0xfe) == 0xc2;
          }
          else {
            lVal_11 = (int64_t)local_98;
            if (!bFlag_21 || !bFlag_20) {
              lVal_11 = (int64_t)(char)local_98;
            }
            pU64_10 = (undefined6 *)((int64_t)pU64_18 + lVal_11 + (uint64_t)local_ad[0]);
            if (pU64_10 < (undefined6 *)((int64_t)(undefined6 *)*param_1 + 5) &&
                (undefined6 *)*param_1 <= pU64_10) {
              if (local_b8 <= pU64_10) {
                local_b8 = pU64_10;
              }
              goto joined_r0x000180670d14;
            }
            if ((local_a2 & 0xfc) == 0xe0) goto LAB_180670e6f;
            bFlag_5 = local_a1;
            if (local_a2 != 0xf) {
              bFlag_5 = local_a2;
            }
            local_88 = CONCAT31(local_88._1_3_,bFlag_5) & 0xffffff0f ^ 0x71;
            uVal_6 = 0x10;
            bFlag_20 = false;
            puStack_80 = pU64_10;
            pU64_14 = (undefined6 *)&local_88;
          }
        }
      }
    }
    else {
      uStack_72 = SUB82(pU64_18,0);
      uStack_70 = (undefined6)((uint64_t)pU64_18 >> 0x10);
      bFlag_20 = true;
LAB_180670b27:
      uVal_6 = 0xe;
      pU64_14 = &local_78;
    }
    if (((pU64_18 < local_b8) && (uVal_6 != local_ad[0])) || (uVal_13 = iVal_7 + uVal_6, 0x32 < uVal_13))
    goto LAB_180670e6f;
    uVal_2 = *(uint *)((int64_t)param_1 + 0x24);
    uVal_12 = (uint64_t)uVal_2;
    if (7 < uVal_12) goto LAB_180670e6f;
    *(byte *)((int64_t)param_1 + uVal_12 + 0x28) = bFlag_19;
    *(char *)((int64_t)param_1 + uVal_12 + 0x30) = (char)uVal_16;
    *(uint *)((int64_t)param_1 + 0x24) = uVal_2 + 1;
    pU64_15 = (uint8_t *)(param_1[2] + (uVal_16 & 0xff));
    for (uVal_12 = (uint64_t)uVal_6; uVal_12 != 0; uVal_12 = uVal_12 - 1) {
      *pU64_15 = *(uint8_t *)pU64_14;
      pU64_14 = (undefined6 *)((int64_t)pU64_14 + 1);
      pU64_15 = pU64_15 + 1;
    }
    bFlag_19 = bFlag_19 + local_ad[0];
    uVal_16 = (uint64_t)uVal_13;
  } while (!bFlag_20);
  if (bFlag_19 < 5) {
    lVal_3 = *param_1;
    lVal_11 = lVal_3 + (uint64_t)bFlag_19;
    ch_1 = *(char *)(lVal_3 + (uint64_t)bFlag_19);
    if (((ch_1 == '\0') || (ch_1 == -0x34)) || (ch_1 == -0x70)) {
      if (bFlag_19 != 4) {
        uVal_16 = 1;
        do {
          if (*(char *)(lVal_11 + uVal_16) != ch_1) goto LAB_180670ea0;
          uVal_16 = uVal_16 + 1;
        } while ((byte)(5 - bFlag_19) != uVal_16);
      }
    }
    else {
LAB_180670ea0:
      if (bFlag_19 < 2) {
        uVal_9 = 0;
        if (((ch_1 != '\0') && (ch_1 != -0x34)) && (ch_1 != -0x70)) goto LAB_180670e71;
        if (bFlag_19 == 0) {
          lVal_17 = 1;
          do {
            if (*(char *)(lVal_11 + lVal_17) != ch_1) goto LAB_180670e71;
            lVal_17 = lVal_17 + 1;
          } while (lVal_17 != 2);
        }
      }
      iVal_7 = func_0x180670a10(lVal_3 + -5);
      uVal_8 = 0;
      uVal_9 = 0;
      if (iVal_7 == 0) goto LAB_180670e71;
      lVal_11 = *param_1;
      ch_1 = *(char *)(lVal_11 + -5);
      if (((((ch_1 != '\0') && (ch_1 != -0x34)) && (ch_1 != -0x70)) ||
          ((uVal_9 = uVal_8, *(char *)(lVal_11 + -4) != ch_1 || (*(char *)(lVal_11 + -3) != ch_1))))
         || ((*(char *)(lVal_11 + -2) != ch_1 || (*(char *)(lVal_11 + -1) != ch_1))))
      goto LAB_180670e71;
      *(uint32_t *)(param_1 + 4) = 1;
    }
  }
  lVal_11 = param_1[1];
  uStack_72 = (uint16_t)lVal_11;
  uStack_70 = (undefined6)((uint64_t)lVal_11 >> 0x10);
  lVal_3 = param_1[2];
  uVal_16 = (uint64_t)uVal_13;
  param_1[3] = lVal_3 + uVal_16;
  *(int64_t *)(lVal_3 + 6 + uVal_16) = lVal_11;
  *(uint64_t *)(lVal_3 + uVal_16) = CONCAT26(uStack_72,local_78);
  uVal_9 = 1;
LAB_180670e71:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_d8)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_d8);
    fnPtr_4 = (func_ptr_t )swi(3);
    uVal_9 = (*fnPtr_4)();
    return uVal_9;
  }
  return uVal_9;
}

// func_0x180670f60
uint64_t * func_0x180670f60(uint64_t *param_1,uint64_t param_2,int param_3)
{
  BOOL BVar1;
  bool bFlag_2;
  uint8_t local_48 [16];
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  *(uint32_t *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_1806e28c0;
  param_1[2] = param_2;
  param_1[3] = &DAT_18083d210;
  local_28 = func_0x180672de0(0xd8);
  local_38 = 2;
  local_30 = 0xf;
  local_48._2_14_ = SUB1614(ZEXT816(0),2);
  local_48._0_2_ = 0xa0d;
  func_0x1806539f0(local_28,0,local_48);
  param_1[5] = local_28;
  if (param_3 == 1) {
    BVar1 = GetConsoleMode((HANDLE)param_1[2],(LPDWORD)local_48);
    bFlag_2 = BVar1 != 0;
  }
  else {
    bFlag_2 = param_3 == 0;
  }
  *(bool *)(param_1 + 4) = bFlag_2;
  param_1[6] = 0xe000200030007;
  *(uint32_t *)(param_1 + 7) = 0x4f000c;
  *(uint16_t *)((int64_t)param_1 + 0x3c) = 0;
  return param_1;
}

// Unwind@180671030
void Unwind_180671030(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x40),0xd8);
  return;
}

// Unwind@180671260
void Unwind_180671260(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x28) != param_2 + 0x48) {
    thunk_FUN_180695dd0();
  }
  func_0x180676070(*(uint64_t *)(param_2 + 0x160));
  return;
}

// Unwind@180671450
void Unwind_180671450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  func_0x1806515a0(param_2 + 0x30);
  return;
}

// Unwind@180671490
void Unwind_180671490(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0xb8),0xd8);
  return;
}

// Unwind@1806714d0
void Unwind_1806714d0(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0xc0));
  return;
}

// Unwind@1806715b0
void Unwind_1806715b0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = (uint64_t *)**(int64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// func_0x1806715f0
uint64_t * func_0x1806715f0(uint64_t *param_1,uint32_t param_2)
{
  HANDLE pVoid_1;
  
  pVoid_1 = GetStdHandle(0xfffffff5);
  func_0x180670f60(param_1,pVoid_1,param_2);
  *param_1 = &PTR_LAB_1806e28c0;
  return param_1;
}

// func_0x180671680
void func_0x180671680(uint8_t *param_1)
{
  DWORD DVar1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  DWORD DVar4;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  iVal_3 = func_0x180675fe0(param_1 + 0x18);
  if (iVal_3 == 0) {
    if (*(int *)(param_1 + 100) == 0x7fffffff) goto LAB_180671716;
    *param_1 = 0;
    func_0x180676070(param_1 + 0x18);
    func_0x180675670(param_1 + 0x68);
    DVar1 = *(DWORD *)(param_1 + 0x10);
    if (DVar1 == 0) goto LAB_180671728;
    DVar4 = GetCurrentThreadId();
    if (DVar1 != DVar4) {
      local_38 = *(uint32_t *)(param_1 + 8);
      uStack_34 = *(uint32_t *)(param_1 + 0xc);
      uStack_30 = *(uint32_t *)(param_1 + 0x10);
      uStack_2c = *(uint32_t *)(param_1 + 0x14);
      iVal_3 = func_0x180676290(&local_38,0);
      if (iVal_3 == 0) {
        *(uint64_t *)(param_1 + 8) = 0;
        *(uint32_t *)(param_1 + 0x10) = 0;
        return;
      }
      goto LAB_18067173e;
    }
  }
  else {
    func_0x180674150(5);
LAB_180671716:
    *(uint32_t *)(param_1 + 100) = 0x7ffffffe;
    func_0x180674150(6);
LAB_180671728:
    func_0x180674150(1);
  }
  func_0x180674150(5);
LAB_18067173e:
  func_0x180674150(2);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@180671750
void Unwind_180671750(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180671770
uint * func_0x180671770(uint param_1,int64_t param_2)
{
  uint uVal_1;
  uint *pU64_2;
  int64_t lVal_3;
  uint uVal_4;
  
  uVal_4 = 1;
  do {
    uVal_1 = 1 << ((byte)uVal_4 & 0x1f);
    if (8 < uVal_4) break;
    uVal_4 = uVal_4 + 1;
  } while ((int)uVal_1 < (int)param_1);
  if ((param_1 == uVal_1) && (pU64_2 = (uint *)_malloc_base(0x18), pU64_2 != (uint *)0x0)) {
    lVal_3 = _calloc_base((uint64_t)param_1,3);
    *(int64_t *)(pU64_2 + 4) = lVal_3;
    if (lVal_3 != 0) {
      *pU64_2 = param_1;
      uVal_4 = 0;
      do {
        uVal_4 = uVal_4 + 1;
        if (8 < uVal_4) break;
      } while ((uint)(1 << ((byte)uVal_4 & 0x1f)) < param_1);
      pU64_2[1] = uVal_4;
      *(uint8_t *)(pU64_2 + 2) = 0;
      if (param_2 == 0) {
        return pU64_2;
      }
      func_0x1806aa960(lVal_3,param_2,(uint64_t)param_1 * 3);
      return pU64_2;
    }
    thunk_FUN_180695dd0(pU64_2);
  }
  return (uint *)0x0;
}

// func_0x180671820
void func_0x180671820(int64_t param_1)
{
  if (param_1 != 0) {
    thunk_FUN_180695dd0(*(uint64_t *)(param_1 + 0x10));
    thunk_FUN_180695dd0(param_1);
    return;
  }
  return;
}

// func_0x180671850
uint64_t func_0x180671850(int *param_1,int64_t *param_2,uint32_t param_3,int param_4,int64_t param_5)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  if (*param_2 == 0) {
    lVal_1 = _malloc_base(0x18);
    *param_2 = lVal_1;
    if (lVal_1 == 0) {
      return 0;
    }
  }
  else {
    lVal_1 = func_0x180671a30(*param_2,(int64_t)*param_1 + 1,0x18);
    if (lVal_1 == 0) {
      return 0;
    }
    *param_2 = lVal_1;
  }
  lVal_3 = (int64_t)*param_1;
  *param_1 = *param_1 + 1;
  *(uint32_t *)(lVal_1 + 0x10 + lVal_3 * 0x18) = param_3;
  *(int *)(lVal_1 + lVal_3 * 0x18) = param_4;
  lVal_2 = _malloc_base((int64_t)param_4);
  *(int64_t *)(lVal_1 + 8 + lVal_3 * 0x18) = lVal_2;
  if (lVal_2 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    func_0x1806aa960(lVal_2,param_5,param_4);
    return 1;
  }
  return 1;
}

// func_0x1806718f0
void func_0x1806718f0(int *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  
  uVal_1 = *param_2;
  if (uVal_1 != 0) {
    uVal_2 = uVal_1;
    if (0 < *param_1) {
      do {
        thunk_FUN_180695dd0(*(uint64_t *)(uVal_2 + 8));
        uVal_2 = uVal_2 + 0x18;
        uVal_1 = *param_2;
      } while (uVal_2 < uVal_1 + (int64_t)*param_1 * 0x18);
    }
    thunk_FUN_180695dd0(uVal_1);
    *param_2 = 0;
    *param_1 = 0;
  }
  return;
}

// func_0x180671950
void func_0x180671950(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  
  if ((param_1 != 0) && (uVal_2 = *(uint64_t *)(param_1 + 0x48), uVal_2 != 0)) {
    uVal_3 = uVal_2;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        lVal_1 = *(int64_t *)(uVal_3 + 0x18);
        if (lVal_1 != 0) {
          thunk_FUN_180695dd0(*(uint64_t *)(lVal_1 + 0x10));
          thunk_FUN_180695dd0(lVal_1);
          *(uint64_t *)(uVal_3 + 0x18) = 0;
        }
        if (*(int64_t *)(uVal_3 + 0x20) != 0) {
          thunk_FUN_180695dd0();
        }
        uVal_2 = *(uint64_t *)(uVal_3 + 0x30);
        if (uVal_2 != 0) {
          uVal_4 = uVal_2;
          if (0 < *(int *)(uVal_3 + 0x28)) {
            do {
              thunk_FUN_180695dd0(*(uint64_t *)(uVal_4 + 8));
              uVal_4 = uVal_4 + 0x18;
              uVal_2 = *(uint64_t *)(uVal_3 + 0x30);
            } while (uVal_4 < uVal_2 + (int64_t)*(int *)(uVal_3 + 0x28) * 0x18);
          }
          thunk_FUN_180695dd0(uVal_2);
          *(uint64_t *)(uVal_3 + 0x30) = 0;
          *(uint32_t *)(uVal_3 + 0x28) = 0;
        }
        uVal_3 = uVal_3 + 0x38;
        uVal_2 = *(uint64_t *)(param_1 + 0x48);
      } while (uVal_3 < (int64_t)*(int *)(param_1 + 0x20) * 0x38 + uVal_2);
    }
    thunk_FUN_180695dd0(uVal_2);
    *(uint64_t *)(param_1 + 0x48) = 0;
  }
  return;
}

// func_0x180671a30
uint64_t func_0x180671a30(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint32_t *pU64_3;
  uint64_t uVal_4;
  
  if ((param_2 != 0 && (param_3 | param_2) >> 0x20 != 0) &&
     (auArr_1._8_8_ = 0, auArr_1._0_8_ = param_2, auArr_2._8_8_ = 0, auArr_2._0_8_ = param_3,
     SUB168(auArr_1 * auArr_2,8) != 0)) {
    pU64_3 = (uint32_t *)func_0x1806823dc();
    *pU64_3 = 0xc;
    return 0;
  }
  uVal_4 = _realloc_base(param_1,param_3 * param_2);
  return uVal_4;
}

// func_0x180671a80
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
uint64_t func_0x180671a80(uint64_t *param_1,uint8_t (*param_2)[16])
{
  uint64_t *pU64_1;
  byte bFlag_2;
  byte bFlag_3;
  byte bFlag_4;
  uint8_t *pU64_5;
  byte *pU8_6;
  uint uVal_7;
  byte bFlag_8;
  uint uVal_9;
  uint uVal_10;
  byte *pU8_11;
  ushort uVal_12;
  byte bFlag_13;
  uint uVal_14;
  uint64_t *pU64_15;
  int64_t lVal_16;
  uint64_t *pU64_17;
  uint32_t *pU64_18;
  uint64_t uVal_19;
  byte bFlag_20;
  uint uVal_21;
  uint uVal_22;
  byte bFlag_23;
  char ch_24;
  
  param_2[1] = ZEXT816(0);
  *param_2 = ZEXT816(0);
  *(uint64_t *)(param_2[1] + 0xd) = 0;
  pU64_1 = (uint64_t *)((int64_t)param_1 + 1);
  uVal_21 = (uint)*(byte *)param_1;
  bFlag_4 = 0;
  pU64_15 = param_1;
  pU64_17 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_4 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_4 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_4 = 4;
    }
    goto LAB_180671ae2;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)param_1;
    bFlag_4 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_4 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_4 = 0x10;
  }
LAB_180671ae2:
  pU64_17 = (uint64_t *)((int64_t)param_1 + 2);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 1);
  pU64_15 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671b22;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 1);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671b22:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_1 = (uint64_t *)((int64_t)param_1 + 3);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 2);
  pU64_15 = pU64_17;
  pU64_17 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671b65;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 2);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671b65:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_17 = (uint64_t *)((int64_t)param_1 + 4);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 3);
  pU64_15 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671ba8;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 3);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671ba8:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_1 = (uint64_t *)((int64_t)param_1 + 5);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 4);
  pU64_15 = pU64_17;
  pU64_17 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671beb;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 4);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671beb:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_17 = (uint64_t *)((int64_t)param_1 + 6);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 5);
  pU64_15 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671c2e;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 5);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671c2e:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_1 = (uint64_t *)((int64_t)param_1 + 7);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 6);
  pU64_15 = pU64_17;
  pU64_17 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671c71;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 6);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671c71:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_17 = param_1 + 1;
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 7);
  pU64_15 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671cb4;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 7);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671cb4:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_1 = (uint64_t *)((int64_t)param_1 + 9);
  uVal_21 = (uint)*(byte *)(param_1 + 1);
  pU64_15 = pU64_17;
  pU64_17 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671cf7;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)(param_1 + 1);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671cf7:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_17 = (uint64_t *)((int64_t)param_1 + 10);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 9);
  pU64_15 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671d3a;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 9);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671d3a:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_1 = (uint64_t *)((int64_t)param_1 + 0xb);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 10);
  pU64_15 = pU64_17;
  pU64_17 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671d7d;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 10);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671d7d:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_17 = (uint64_t *)((int64_t)param_1 + 0xc);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 0xb);
  pU64_15 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671dc0;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 0xb);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671dc0:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_1 = (uint64_t *)((int64_t)param_1 + 0xd);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 0xc);
  pU64_15 = pU64_17;
  pU64_17 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671e03;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 0xc);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671e03:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_17 = (uint64_t *)((int64_t)param_1 + 0xe);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 0xd);
  pU64_15 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671e46;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 0xd);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671e46:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_1 = (uint64_t *)((int64_t)param_1 + 0xf);
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 0xe);
  pU64_15 = pU64_17;
  pU64_17 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671e89;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 0xe);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671e89:
  bFlag_4 = bFlag_4 | bFlag_2;
  pU64_17 = param_1 + 2;
  uVal_21 = (uint)*(byte *)((int64_t)param_1 + 0xf);
  pU64_15 = pU64_1;
  if (0xef < uVal_21) {
    if (uVal_21 == 0xf0) {
      (*param_2)[2] = 0xf0;
      bFlag_2 = 0x20;
    }
    else if (uVal_21 == 0xf2) {
      (*param_2)[1] = 0xf2;
      bFlag_2 = 2;
    }
    else {
      if (uVal_21 != 0xf3) goto LAB_18067222d;
      (*param_2)[1] = 0xf3;
      bFlag_2 = 4;
    }
    goto LAB_180671ec8;
  }
  switch(uVal_21) {
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 100:
  case 0x65:
    (*param_2)[3] = *(byte *)((int64_t)param_1 + 0xf);
    bFlag_2 = 0x40;
    break;
  default:
    goto LAB_18067222d;
  case 0x66:
    (*param_2)[4] = 0x66;
    bFlag_2 = 8;
    break;
  case 0x67:
    (*param_2)[5] = 0x67;
    bFlag_2 = 0x10;
  }
LAB_180671ec8:
  bFlag_4 = bFlag_4 | bFlag_2;
LAB_18067222d:
  uVal_9 = (uint)bFlag_4 << 0x17;
  uVal_22 = 1;
  if (1 < bFlag_4) {
    uVal_22 = (uint)bFlag_4;
  }
  *(uint *)(param_2[2] + 1) = uVal_9;
  bFlag_4 = (byte)uVal_21;
  if ((bFlag_4 & 0xf0) == 0x40) {
    uVal_9 = uVal_9 | 0x40000000;
    *(uint *)(param_2[2] + 1) = uVal_9;
    bFlag_2 = bFlag_4 >> 3 & 1;
    (*param_2)[7] = bFlag_2;
    if (bFlag_2 == 0) {
      ch_24 = false;
    }
    else {
      ch_24 = (*(byte *)pU64_17 & 0xf8) == 0xb8;
    }
    (*param_2)[8] = bFlag_4 >> 2 & 1;
    (*param_2)[9] = bFlag_4 >> 1 & 1;
    (*param_2)[10] = bFlag_4 & 1;
    pU64_15 = (uint64_t *)((int64_t)pU64_15 + 2);
    bFlag_4 = *(byte *)pU64_17;
    uVal_21 = (uint)bFlag_4;
    if ((bFlag_4 & 0xf0) != 0x40) {
      (*param_2)[0xb] = bFlag_4;
      pU64_17 = pU64_15;
      if (bFlag_4 == 0xf) goto LAB_180672279;
LAB_1806722e5:
      pU64_5 = &DAT_18083d290;
      if (((byte)uVal_21 & 0xfc) == 0xa0) {
        ch_24 = ch_24 + '\x01';
        if ((uVal_22 & 0x10) == 0) {
          uVal_22 = uVal_22 & 0xffffff67;
        }
        else {
          uVal_22 = uVal_22 | 8;
        }
      }
      bFlag_4 = 0;
      pU64_15 = pU64_17;
      goto LAB_18067230f;
    }
    bFlag_4 = 0;
LAB_180672347:
    uVal_9 = uVal_9 | 0x3000;
    *(uint *)(param_2[2] + 1) = uVal_9;
    uVal_12 = (ushort)(((byte)uVal_21 & 0xfd) == 0x24);
    uVal_10 = 0;
  }
  else {
    ch_24 = false;
    (*param_2)[0xb] = bFlag_4;
    if (bFlag_4 != 0xf) goto LAB_1806722e5;
LAB_180672279:
    bFlag_4 = *(byte *)pU64_17;
    pU64_15 = (uint64_t *)((int64_t)pU64_17 + 1);
    (*param_2)[0xc] = bFlag_4;
    pU64_5 = &DAT_18083d2da;
    uVal_21 = (uint)bFlag_4;
LAB_18067230f:
    bFlag_2 = pU64_5[(uint64_t)(uVal_21 & 3) + (uint64_t)(byte)pU64_5[uVal_21 >> 2]];
    uVal_12 = (ushort)bFlag_2;
    if (uVal_12 == 0xff) goto LAB_180672347;
    uVal_10 = 0;
    if ((char)bFlag_2 < '\0') {
      uVal_12 = *(ushort *)(pU64_5 + (bFlag_2 & 0x7f));
      uVal_10 = (uint)(uVal_12 >> 8);
    }
  }
  if ((bFlag_4 != 0) &&
     ((byte)(s_____AI____LB________ODS___DWC____18083d3cc
             [(uint64_t)(uVal_21 & 3) +
              (uint64_t)(byte)s_____AI____LB________ODS___DWC____18083d3cc[uVal_21 >> 2]] &
            (byte)uVal_22) != 0)) {
    uVal_9 = uVal_9 | 0x3000;
    *(uint *)(param_2[2] + 1) = uVal_9;
  }
  if ((uVal_12 & 1) == 0) {
    if ((uVal_22 & 0x20) != 0) {
      uVal_9 = uVal_9 | 0x9000;
      *(uint *)(param_2[2] + 1) = uVal_9;
    }
    if ((uVal_12 & 0x10) == 0) goto joined_r0x000180672afd;
LAB_180672a98:
    if ((uVal_12 & 0x40) == 0) {
      if (ch_24 != '\0') {
        uVal_9 = uVal_9 | 0x20;
        *(uint *)(param_2[2] + 1) = uVal_9;
        *(uint64_t *)(param_2[1] + 5) = *pU64_15;
        pU64_15 = pU64_15 + 1;
        goto joined_r0x000180672afd;
      }
      if ((uVal_22 & 8) == 0) {
        uVal_9 = uVal_9 | 0x10;
        *(uint *)(param_2[2] + 1) = uVal_9;
        *(uint32_t *)(param_2[1] + 5) = *(uint32_t *)pU64_15;
        pU64_15 = (uint64_t *)((int64_t)pU64_15 + 4);
        goto joined_r0x000180672afd;
      }
      goto LAB_180672b03;
    }
    if ((uVal_22 & 8) != 0) {
      uVal_9 = uVal_9 | 0x208;
      *(uint *)(param_2[2] + 1) = uVal_9;
      *(uint16_t *)(param_2[1] + 5) = *(uint16_t *)pU64_15;
      pU64_15 = (uint64_t *)((int64_t)pU64_15 + 2);
      goto LAB_180672b63;
    }
  }
  else {
    uVal_7 = uVal_9 | 1;
    *(uint *)(param_2[2] + 1) = uVal_7;
    bFlag_2 = *(byte *)pU64_15;
    (*param_2)[0xd] = bFlag_2;
    bFlag_23 = bFlag_2 >> 6;
    (*param_2)[0xe] = bFlag_23;
    bFlag_3 = bFlag_2 & 7;
    param_2[1][0] = bFlag_3;
    uVal_14 = bFlag_2 >> 3 & 7;
    bFlag_13 = (byte)uVal_14;
    (*param_2)[0xf] = bFlag_13;
    if ((uVal_10 != 0) && ((char)(uVal_10 << bFlag_13) < '\0')) {
      uVal_7 = uVal_9 | 0x3001;
      *(uint *)(param_2[2] + 1) = uVal_7;
    }
    if ((byte)(uVal_21 + 0x27) < 7 && bFlag_4 == 0) {
      uVal_19 = (uint64_t)(uVal_21 + 0x27 & 0xff);
      pU64_5 = (uint8_t *)(uVal_19 * 8 + 0x18083d394);
      if (bFlag_23 == 3) {
        uVal_19 = (uint64_t)uVal_14;
      }
      bFlag_20 = bFlag_3;
      if (bFlag_23 != 3) {
        bFlag_20 = bFlag_13;
        pU64_5 = &DAT_18083d38d;
      }
      if ((char)(pU64_5[uVal_19] << bFlag_20) < '\0') {
        uVal_7 = uVal_7 | 0x3000;
        *(uint *)(param_2[2] + 1) = uVal_7;
      }
    }
    bFlag_20 = (byte)uVal_21;
    if ((uVal_22 & 0x20) != 0) {
      if (bFlag_23 != 3) {
        pU8_6 = &DAT_18083d43e;
        if (bFlag_4 != 0) {
          pU8_6 = &DAT_18083d456;
        }
        pU8_11 = &DAT_18083d468;
        bFlag_8 = bFlag_20;
        if (bFlag_4 == 0) {
          pU8_11 = &DAT_18083d456;
          bFlag_8 = bFlag_20 & 0xfe;
        }
        do {
          if (*pU8_6 == bFlag_8) {
            if (-1 < (char)(pU8_6[1] << bFlag_13)) goto LAB_1806725be;
            break;
          }
          pU8_6 = pU8_6 + 2;
        } while (pU8_6 != pU8_11);
      }
      uVal_7 = uVal_7 | 0x9000;
      *(uint *)(param_2[2] + 1) = uVal_7;
    }
LAB_1806725be:
    if (bFlag_4 == 0) {
      if (bFlag_20 == 0x8e) {
        if (5 < bFlag_13 || bFlag_13 == 1) goto LAB_180672952;
      }
      else if (uVal_21 == 0x8c) {
        if (5 < bFlag_13) goto LAB_180672952;
      }
      else if (bFlag_23 == 3) {
        pU8_6 = &DAT_18083d468;
        pU8_11 = &DAT_18083d477;
        goto LAB_180672690;
      }
    }
    else {
      switch(uVal_21) {
      case 0x20:
      case 0x22:
        bFlag_23 = 3;
        if (bFlag_13 == 1 || 4 < bFlag_13) {
LAB_180672952:
          uVal_7 = uVal_7 | 0x11000;
          *(uint *)(param_2[2] + 1) = uVal_7;
        }
        break;
      case 0x21:
      case 0x23:
        bFlag_23 = 3;
        if ((bFlag_2 & 0x30) == 0x20) goto LAB_180672952;
        break;
      default:
        if (bFlag_23 == 3) {
          pU8_6 = &DAT_18083d477;
          pU8_11 = &DAT_18083d4a1;
LAB_180672690:
          do {
            if (*pU8_6 == bFlag_20) {
              if (((pU8_6[1] & (byte)uVal_22) != 0) && (-1 < (char)(pU8_6[2] << bFlag_13)))
              goto LAB_180672952;
              break;
            }
            pU8_6 = pU8_6 + 3;
          } while (pU8_6 != pU8_11);
        }
        else if (uVal_21 < 0xd6) {
          if (uVal_21 == 0x50) {
LAB_18067294c:
            uVal_9 = uVal_22 & 9;
            goto joined_r0x000180672b97;
          }
          if (uVal_21 == 0xc5) goto LAB_180672952;
        }
        else if (uVal_21 == 0xd6) {
          uVal_9 = uVal_22 & 6;
joined_r0x000180672b97:
          if (uVal_9 != 0) goto LAB_180672952;
        }
        else if ((uVal_21 == 0xf7) || (uVal_21 == 0xd7)) goto LAB_18067294c;
      }
    }
    if (bFlag_13 < 2) {
      if (bFlag_20 != 0xf7) {
        if (uVal_21 == 0xf6) {
          uVal_12 = (ushort)(byte)((byte)uVal_12 | 2);
        }
        goto LAB_180672977;
      }
      uVal_12 = (ushort)(byte)((byte)uVal_12 | 0x10);
      if (bFlag_23 == 2) goto LAB_1806729af;
LAB_18067297d:
      if (bFlag_23 == 1) {
        bFlag_4 = 1;
      }
      else if (bFlag_23 == 0) {
        if ((uVal_22 & 0x10) == 0) {
          bFlag_4 = (bFlag_3 == 5) << 2;
        }
        else {
          bFlag_4 = (bFlag_3 == 6) * '\x02';
        }
      }
      else {
        bFlag_4 = 0;
      }
    }
    else {
LAB_180672977:
      if (bFlag_23 != 2) goto LAB_18067297d;
LAB_1806729af:
      bFlag_4 = ((uVal_22 & 0x10) == 0) * '\x02' + 2;
    }
    lVal_16 = 2;
    if (bFlag_3 == 4 && bFlag_23 != 3) {
      bFlag_2 = *(byte *)((int64_t)pU64_15 + 1);
      uVal_7 = uVal_7 | 2;
      *(uint *)(param_2[2] + 1) = uVal_7;
      param_2[1][1] = bFlag_2;
      param_2[1][2] = bFlag_2 >> 6;
      param_2[1][3] = bFlag_2 >> 3 & 7;
      param_2[1][4] = bFlag_2 & 7;
      lVal_16 = 3;
      if (((bFlag_2 & 7) != 5) || ((bFlag_23 & 1) != 0)) goto LAB_180672a33;
      pU64_18 = (uint32_t *)((int64_t)pU64_15 + 2);
LAB_180672a5f:
      *(uint *)(param_2[2] + 1) = uVal_7 | 0x100;
      *(uint32_t *)(param_2[1] + 0xd) = *pU64_18;
      bFlag_4 = 4;
      uVal_9 = uVal_7 | 0x100;
    }
    else {
LAB_180672a33:
      pU64_18 = (uint32_t *)((int64_t)pU64_15 + lVal_16 + -1);
      if (bFlag_4 == 4) goto LAB_180672a5f;
      if (bFlag_4 == 2) {
        uVal_9 = uVal_7 | 0x80;
        *(uint *)(param_2[2] + 1) = uVal_9;
        *(uint16_t *)(param_2[1] + 0xd) = *(uint16_t *)pU64_18;
        bFlag_4 = 2;
      }
      else {
        uVal_9 = uVal_7;
        if (bFlag_4 == 1) {
          uVal_9 = uVal_7 | 0x40;
          *(uint *)(param_2[2] + 1) = uVal_9;
          param_2[1][0xd] = *(byte *)pU64_18;
          bFlag_4 = 1;
        }
      }
    }
    pU64_15 = (uint64_t *)((uint64_t)bFlag_4 + (int64_t)pU64_18);
    if ((uVal_12 & 0x10) != 0) goto LAB_180672a98;
joined_r0x000180672afd:
    if ((uVal_12 & 4) != 0) {
LAB_180672b03:
      uVal_9 = uVal_9 | 8;
      *(uint *)(param_2[2] + 1) = uVal_9;
      *(uint16_t *)(param_2[1] + 5) = *(uint16_t *)pU64_15;
      pU64_15 = (uint64_t *)((int64_t)pU64_15 + 2);
    }
    if ((uVal_12 & 2) != 0) {
      uVal_9 = uVal_9 | 4;
      *(uint *)(param_2[2] + 1) = uVal_9;
      bFlag_4 = *(byte *)pU64_15;
      pU64_15 = (uint64_t *)((int64_t)pU64_15 + 1);
      param_2[1][5] = bFlag_4;
    }
    if ((uVal_12 & 0x40) == 0) {
      if ((uVal_12 & 0x20) != 0) {
        uVal_9 = uVal_9 | 0x204;
        *(uint *)(param_2[2] + 1) = uVal_9;
        bFlag_4 = *(byte *)pU64_15;
        pU64_15 = (uint64_t *)((int64_t)pU64_15 + 1);
        param_2[1][5] = bFlag_4;
      }
      goto LAB_180672b63;
    }
  }
  uVal_9 = uVal_9 | 0x210;
  *(uint *)(param_2[2] + 1) = uVal_9;
  *(uint32_t *)(param_2[1] + 5) = *(uint32_t *)pU64_15;
  pU64_15 = (uint64_t *)((int64_t)pU64_15 + 4);
LAB_180672b63:
  uVal_19 = (int64_t)pU64_15 - (int64_t)param_1;
  (*param_2)[0] = (char)uVal_19;
  if ((uVal_19 & 0xf0) != 0) {
    *(uint *)(param_2[2] + 1) = uVal_9 | 0x5000;
    (*param_2)[0] = 0xf;
    uVal_19 = 0xf;
  }
  return uVal_19 & 0xff;
}

// func_0x180672de0
void func_0x180672de0(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int iVal_3;
  
  lVal_2 = _malloc_base();
  while( true ) {
    if (lVal_2 != 0) {
      return;
    }
    iVal_3 = func_0x180681550(param_1);
    if (iVal_3 == 0) break;
    lVal_2 = _malloc_base(param_1);
  }
  if (param_1 == -1) {
    func_0x180678f30();
    fnPtr_1 = (func_ptr_t )swi(3);
    (*fnPtr_1)();
    return;
  }
  func_0x180674470();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180672e30
void func_0x180672e30(void)
{
  func_0x180672de0();
  return;
}

// thunk_FUN_180695dd0
void thunk_FUN_180695dd0(LPVOID param_1)
{
  uint32_t *pU64_1;
  BOOL BVar2;
  DWORD DVar3;
  uint32_t uVal_4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_180842c78,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVal_4 = func_0x18068244c(DVar3);
    pU64_1 = (uint32_t *)func_0x1806823dc();
    *pU64_1 = uVal_4;
  }
  return;
}

// func_0x180672e60
uint64_t * func_0x180672e60(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x18);
  }
  return param_1;
}

// thunk_FUN_180672de0
void thunk_FUN_180672de0(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int iVal_3;
  
  lVal_2 = _malloc_base();
  while( true ) {
    if (lVal_2 != 0) {
      return;
    }
    iVal_3 = func_0x180681550(param_1);
    if (iVal_3 == 0) break;
    lVal_2 = _malloc_base(param_1);
  }
  if (param_1 == -1) {
    func_0x180678f30();
    fnPtr_1 = (func_ptr_t )swi(3);
    (*fnPtr_1)();
    return;
  }
  func_0x180674470();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180672ea0
void func_0x180672ea0(void)
{
  thunk_FUN_180672de0();
  return;
}

// func_0x180672ec0
void func_0x180672ec0(int *param_1)
{
  int iVal_1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180841d90);
  iVal_1 = *param_1;
  while( true ) {
    if (iVal_1 == 0) {
      *param_1 = -1;
                    /* WARNING: Could not recover jumptable at 0x000180672eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180841d90);
      return;
    }
    if (iVal_1 != -1) break;
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_180841d88,(PSRWLOCK)&DAT_180841d90,0xffffffff,0);
    iVal_1 = *param_1;
  }
  *(uint32_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1c39c) =
       DAT_18083cf18;
                    /* WARNING: Could not recover jumptable at 0x000180672f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180841d90);
  return;
}

// func_0x180672f60
void func_0x180672f60(uint32_t *param_1)
{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180841d90);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180841d90);
                    /* WARNING: Could not recover jumptable at 0x000180672f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_180841d88);
  return;
}

// _Init_thread_footer
/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */
/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */
void _Init_thread_footer(int *param_1)
{
  uint64_t uVal_1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180841d90);
  uVal_1 = (uint64_t)_tls_index;
  DAT_18083cf18 = DAT_18083cf18 + 1;
  *param_1 = DAT_18083cf18;
  *(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + uVal_1 * 8) + 0x1c39c) = DAT_18083cf18
  ;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180841d90);
                    /* WARNING: Could not recover jumptable at 0x000180673002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_180841d88);
  return;
}

// __chkstk
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */
/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */
void __chkstk(void)
{
  uint8_t *in_RAX;
  uint8_t *pU64_1;
  uint8_t *pU64_2;
  uint8_t local_res8 [32];
  
  pU64_1 = local_res8 + -(int64_t)in_RAX;
  if (local_res8 < in_RAX) {
    pU64_1 = (uint8_t *)0x0;
  }
  if (pU64_1 < StackLimit) {
    pU64_2 = (uint8_t *)StackLimit;
    do {
      pU64_2 = pU64_2 + -0x1000;
      *pU64_2 = 0;
    } while ((uint8_t *)((uint64_t)pU64_1 & 0xfffffffffffff000) != pU64_2);
  }
  return;
}

// func_0x180673080
void func_0x180673080(int64_t param_1)
{
  if ((param_1 == DAT_18083cf40) && ((short)((uint64_t)param_1 >> 0x30) == 0)) {
    return;
  }
  func_0x180678f70(param_1);
  return;
}

// tls_callback_0
void tls_callback_0(uint64_t param_1,int param_2)
{
  uint uVal_1;
  uint *pU64_2;
  uint **ptr2_U64_3;
  uint *pU64_4;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    ptr2_U64_3 = (uint **)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1c3a0
                       );
    pU64_4 = *ptr2_U64_3;
    if (pU64_4 != (uint *)0x0) {
      while( true ) {
        uVal_1 = *pU64_4;
        while (uVal_1 = uVal_1 - 1, -1 < (int)uVal_1) {
          if (*(int64_t *)(pU64_4 + (uint64_t)uVal_1 * 2 + 4) != 0) {
            (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
          }
        }
        pU64_2 = *(uint **)(pU64_4 + 2);
        if (pU64_2 == (uint *)0x0) break;
        thunk_FUN_180695dd0(pU64_4);
        *ptr2_U64_3 = pU64_2;
        pU64_4 = pU64_2;
      }
      *ptr2_U64_3 = (uint *)0x0;
    }
  }
  return;
}

// func_0x180673140
uint64_t func_0x180673140(uint64_t param_1)
{
  int64_t lVal_1;
  int iVal_2;
  int *pInt_3;
  
  lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pInt_3 = *(int **)(lVal_1 + 0x1c3a0);
  if (pInt_3 == (int *)0x0) {
    pInt_3 = (int *)(lVal_1 + 0x1c3b0);
  }
  else {
    iVal_2 = *pInt_3;
    if (iVal_2 != 0x1e) goto LAB_1806731b8;
    pInt_3 = (int *)_malloc_base(0x100);
    thunk_FUN_180695dd0(0);
    if (pInt_3 == (int *)0x0) {
      return 0xffffffff;
    }
    *(uint64_t *)(pInt_3 + 2) = *(uint64_t *)(lVal_1 + 0x1c3a0);
  }
  iVal_2 = 0;
  *(int **)(lVal_1 + 0x1c3a0) = pInt_3;
  *pInt_3 = 0;
LAB_1806731b8:
  *(uint64_t *)(pInt_3 + (int64_t)iVal_2 * 2 + 4) = param_1;
  *pInt_3 = *pInt_3 + 1;
  return 0;
}

// func_0x1806731d0
int func_0x1806731d0(int64_t param_1)
{
  int iVal_1;
  int64_t lVal_2;
  
  if (DAT_180841db8 == -1) {
    iVal_1 = func_0x180682078();
  }
  else {
    iVal_1 = _register_onexit_function(&DAT_180841db8,param_1);
  }
  lVal_2 = 0;
  if (iVal_1 == 0) {
    lVal_2 = param_1;
  }
  return (lVal_2 != 0) - 1;
}

// func_0x180673210
uint64_t func_0x180673210(int64_t param_1)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint7 uVal_3;
  int64_t lVal_4;
  
  uVal_1 = 0x5a4d;
  if (IMAGE_DOS_HEADER_180000000.e_magic == (char  [2])0x5a4d) {
    lVal_4 = (int64_t)(int)IMAGE_DOS_HEADER_180000000.e_lfanew;
    if ((*(int *)(lVal_4 + 0x180000000) == 0x4550) &&
       (uVal_1 = 0x20b,
       *(short *)((int64_t)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVal_4 + -4) == 0x20b)) {
      uVal_2 = (uint64_t)*(ushort *)((int64_t)IMAGE_DOS_HEADER_180000000.e_res_4_ + lVal_4 + -8) +
              0x18 + (int64_t)(int *)(lVal_4 + 0x180000000);
      uVal_1 = uVal_2 + (uint64_t)*(ushort *)(IMAGE_DOS_HEADER_180000000.e_magic + lVal_4 + 6) * 0x28;
      while( true ) {
        uVal_3 = (uint7)(uVal_2 >> 8);
        if (uVal_2 == uVal_1) {
          return (uint64_t)uVal_3 << 8;
        }
        if (((uint64_t)*(uint *)(uVal_2 + 0xc) <= param_1 - 0x180000000U) &&
           (param_1 - 0x180000000U < (uint64_t)(*(int *)(uVal_2 + 8) + *(uint *)(uVal_2 + 0xc))))
        break;
        uVal_2 = uVal_2 + 0x28;
      }
      if (*(int *)(uVal_2 + 0x24) < 0) {
        return uVal_2 & 0xffffffffffffff00;
      }
      return CONCAT71(uVal_3,1);
    }
  }
  return uVal_1 & 0xffffffffffffff00;
}

// func_0x1806732b0
uint64_t func_0x1806732b0(void)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int iVal_3;
  int64_t lVal_4;
  bool bFlag_5;
  
  iVal_3 = func_0x180679240();
  if (iVal_3 != 0) {
    lVal_1 = *(int64_t *)((int64_t)Self + 8);
    lVal_4 = 0;
    LOCK();
    bFlag_5 = DAT_180841da8 == 0;
    lVal_2 = lVal_1;
    if (!bFlag_5) {
      lVal_4 = DAT_180841da8;
      lVal_2 = DAT_180841da8;
    }
    DAT_180841da8 = lVal_2;
    UNLOCK();
    lVal_2 = DAT_180841da8;
    while (DAT_180841da8 = lVal_2, !bFlag_5) {
      if (lVal_1 == lVal_4) {
        return 1;
      }
      lVal_4 = 0;
      LOCK();
      bFlag_5 = lVal_2 == 0;
      DAT_180841da8 = lVal_1;
      if (!bFlag_5) {
        lVal_4 = lVal_2;
        DAT_180841da8 = lVal_2;
      }
      UNLOCK();
      lVal_2 = DAT_180841da8;
    }
  }
  return 0;
}

// func_0x180673300
uint64_t func_0x180673300(char param_1)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  
  uVal_2 = func_0x180679240();
  uVal_1 = DAT_180841da8;
  if (((int)uVal_2 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_180841da8 = 0;
    UNLOCK();
    uVal_2 = uVal_1;
  }
  return uVal_2;
}

// func_0x180673330
uint8_t func_0x180673330(int param_1)
{
  char ch_1;
  
  if (param_1 == 0) {
    DAT_180841db0 = 1;
  }
  func_0x180678f80();
  ch_1 = func_0x18067b560();
  if (ch_1 != '\0') {
    ch_1 = func_0x18067e248();
    if (ch_1 != '\0') {
      return 1;
    }
    func_0x18067b590(0);
  }
  return 0;
}

// func_0x180673370
uint8_t func_0x180673370(uint8_t param_1,char param_2)
{
  if ((DAT_180841db0 == '\0') || (param_2 == '\0')) {
    func_0x18067e25c();
    func_0x18067b590(param_1);
  }
  return 1;
}

// func_0x1806733a0
void func_0x1806733a0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4, uint32_t param_5,uint64_t param_6)
{
  int iVal_1;
  
  iVal_1 = func_0x180679240();
  if ((iVal_1 == 0) && (param_2 == 1)) {
    (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(param_1,0,param_3);
  }
  func_0x1806862c4(param_5,param_6);
  return;
}

// func_0x1806733f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint32_t func_0x1806733f0(void)
{
  int iVal_1;
  
  if (DAT_180841db1 == '\0') {
    iVal_1 = func_0x180679240();
    if (iVal_1 == 0) {
      DAT_180841db8._0_4_ = _DAT_1806df720;
      DAT_180841db8._4_4_ = _UNK_1806df724;
      uRam0000000180841dc0 = _UNK_1806df728;
      uRam0000000180841dc4 = _UNK_1806df72c;
      _DAT_180841dc8 = 0xffffffffffffffff;
      _DAT_180841dd0 = _DAT_1806df720;
      uRam0000000180841dd4 = _UNK_1806df724;
      uRam0000000180841dd8 = _UNK_1806df728;
      uRam0000000180841ddc = _UNK_1806df72c;
      _DAT_180841de0 = 0xffffffffffffffff;
    }
    else {
      iVal_1 = _initialize_onexit_table(&DAT_180841db8);
      if (iVal_1 != 0) {
        return 0;
      }
      iVal_1 = _initialize_onexit_table(&DAT_180841dd0);
      if (iVal_1 != 0) {
        return 0;
      }
    }
    DAT_180841db1 = '\x01';
  }
  return 1;
}

// func_0x180673470
uint32_t func_0x180673470(void)
{
  int iVal_1;
  uint32_t uVal_2;
  
  iVal_1 = func_0x180679240();
  if (iVal_1 != 0) {
    func_0x180678f80();
    return 1;
  }
  uVal_2 = func_0x180679230();
  iVal_1 = func_0x180681c24(uVal_2);
  if (iVal_1 != 0) {
    return 0;
  }
  thunk_FUN_1806844ac();
  return 1;
}

// func_0x1806734b0
void func_0x1806734b0(void)
{
  int iVal_1;
  
  iVal_1 = func_0x180679240();
  if (iVal_1 != 0) {
    func_0x180682034(&DAT_180841db8);
    return;
  }
  iVal_1 = func_0x18068164c();
  if (iVal_1 == 0) {
    func_0x180681660();
    return;
  }
  return;
}

// func_0x1806734f0
void func_0x1806734f0(void)
{
  func_0x18067e294(0);
  func_0x18067b5b0();
  return;
}

// func_0x180673510
uint8_t func_0x180673510(void)
{
  char ch_1;
  
  ch_1 = func_0x18067b5c0();
  if (ch_1 != '\0') {
    ch_1 = func_0x18067e2a4();
    if (ch_1 != '\0') {
      return 1;
    }
    func_0x18067b5e0();
  }
  return 0;
}

// func_0x180673540
uint8_t func_0x180673540(void)
{
  func_0x18067e2b8();
  func_0x18067b5e0();
  return 1;
}

// func_0x180673560
int * func_0x180673560(int *param_1,int param_2)
{
  *param_1 = param_2;
  if (param_2 == 0) {
    func_0x18068517c();
    return param_1;
  }
  if (param_2 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180841e00 + (int64_t)param_2 * 0x28));
  }
  return param_1;
}

// func_0x1806735b0
void func_0x1806735b0(int *param_1)
{
  int iVal_1;
  
  iVal_1 = *param_1;
  if (iVal_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00018068519f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180842800);
    return;
  }
  if (iVal_1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180841e00 + (int64_t)iVal_1 * 0x28));
    return;
  }
  return;
}

// func_0x1806735e0
uint64_t func_0x1806735e0(uint64_t param_1)
{
  uint8_t *pU64_1;
  
  LOCK();
  DAT_18083cf90 = DAT_18083cf90 + 1;
  UNLOCK();
  if (DAT_18083cf90 == 0) {
    pU64_1 = &DAT_180841e00;
    do {
      func_0x180679270(pU64_1);
      pU64_1 = pU64_1 + 0x28;
    } while (pU64_1 != &DAT_180841f40);
  }
  return param_1;
}

// API-MS-WIN-CORE-PROCESSTHREADS-L1-1-0.DLL::GetCurrentThreadId
DWORD __stdcall GetCurrentThreadId(void)
{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806736a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}

// func_0x1806736f0
void func_0x1806736f0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  uint8_t auStack_38 [32];
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  local_18 = param_2;
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
    lVal_1 = *(int64_t *)(param_2 + 0x38);
    if (lVal_1 != 0) {
      (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_1,lVal_1 != param_2);
      *(uint64_t *)(param_2 + 0x38) = 0;
    }
    func_0x180673080(local_10 ^ (uint64_t)auStack_38);
    return;
  }
  func_0x180674610();
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// _guard_check_icall
void _guard_check_icall(void)
{
  return;
}

// func_0x180673780
uint64_t * func_0x180673780(uint64_t *param_1)
{
  *param_1 = 0;
  *(uint8_t *)(param_1 + 1) = 0;
  return param_1;
}

// func_0x180673790
void func_0x180673790(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint8_t local_res8 [32];
  
  func_0x180673560(local_res8,2);
  uVal_2 = 1;
  *(uint64_t *)(param_1 + 8) = 1;
  do {
    lVal_1 = *(int64_t *)(uVal_2 * 8 + 0x180841f60);
    if ((lVal_1 == 0) || (lVal_1 == param_1)) break;
    uVal_2 = uVal_2 + 1;
    *(uint64_t *)(param_1 + 8) = uVal_2;
  } while (uVal_2 < 8);
  (&DAT_180841fb0)[uVal_2] = (&DAT_180841fb0)[uVal_2] + '\x01';
  *(int64_t *)(uVal_2 * 8 + 0x180841f60) = param_1;
  func_0x1806735b0(local_res8);
  return;
}

// func_0x180673810
void func_0x180673810(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  if ((lVal_1 == 0) ||
     ((&DAT_180841fb0)[lVal_1] = (&DAT_180841fb0)[lVal_1] + -1, (char)(&DAT_180841fb0)[lVal_1] < '\x01'
     )) {
    for (pU64_2 = *(uint64_t **)(param_1 + 0x38); pU64_2 != (uint64_t *)0x0;
        pU64_2 = (uint64_t *)*pU64_2) {
      (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(0,param_1,*(uint32_t *)(pU64_2 + 1));
    }
    pU64_2 = *(uint64_t **)(param_1 + 0x30);
    while (pU64_2 != (uint64_t *)0x0) {
      pU64_3 = (uint64_t *)*pU64_2;
      thunk_FUN_180695dd0(pU64_2,0x18);
      pU64_2 = pU64_3;
    }
    *(uint64_t *)(param_1 + 0x30) = 0;
    pU64_2 = *(uint64_t **)(param_1 + 0x38);
    while (pU64_2 != (uint64_t *)0x0) {
      pU64_3 = (uint64_t *)*pU64_2;
      thunk_FUN_180695dd0(pU64_2,0x18);
      pU64_2 = pU64_3;
    }
    *(uint64_t *)(param_1 + 0x38) = 0;
    lVal_1 = *(int64_t *)(param_1 + 0x40);
    if (lVal_1 != 0) {
      if ((*(int64_t *)(lVal_1 + 8) != 0) &&
         (lVal_4 = (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(), lVal_4 != 0)) {
        (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_4,1);
      }
      thunk_FUN_180695dd0(lVal_1,0x10);
    }
  }
  return;
}

// func_0x180673910
void func_0x180673910(uint64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t *pU64_2;
  
  pU64_2 = (uint64_t *)_malloc_base(0x10);
  if (pU64_2 != (uint64_t *)0x0) {
    *pU64_2 = DAT_180842008;
    pU64_2[1] = param_1;
    DAT_180842008 = pU64_2;
    return;
  }
  func_0x180674470();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180673950
void func_0x180673950(int64_t param_1,char *param_2)
{
  wchar_t *pWStr_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  
  pWStr_1 = _wsetlocale(0,(wchar_t *)0x0);
  if (*(wchar_t **)(param_1 + 0x48) != pWStr_1) {
    if (*(wchar_t **)(param_1 + 0x48) != (wchar_t *)0x0) {
      thunk_FUN_180695dd0();
    }
    *(uint64_t *)(param_1 + 0x48) = 0;
    if (pWStr_1 != (wchar_t *)0x0) {
      uVal_2 = func_0x180673d00();
      *(uint64_t *)(param_1 + 0x48) = uVal_2;
    }
  }
  if (param_2 != (char *)0x0) {
    param_2 = setlocale(0,param_2);
  }
  if (param_2 == (char *)0x0) {
    param_2 = "*";
  }
  if (*(char **)(param_1 + 0x58) != param_2) {
    if (*(char **)(param_1 + 0x58) != (char *)0x0) {
      thunk_FUN_180695dd0();
    }
    *(uint64_t *)(param_1 + 0x58) = 0;
    lVal_4 = -1;
    do {
      lVal_3 = lVal_4;
      lVal_4 = lVal_3 + 1;
    } while (param_2[lVal_3 + 1] != '\0');
    lVal_4 = _malloc_base(lVal_3 + 2);
    if (lVal_4 != 0) {
      func_0x1806aa960(lVal_4,param_2,lVal_3 + 2);
    }
    *(int64_t *)(param_1 + 0x58) = lVal_4;
  }
  return;
}

// func_0x180673a10
void func_0x180673a10(int64_t param_1)
{
  wchar_t *_Locale;
  
  _Locale = L"";
  if (*(wchar_t **)(param_1 + 0x48) != (wchar_t *)0x0) {
    _Locale = *(wchar_t **)(param_1 + 0x48);
  }
  _wsetlocale(0,_Locale);
  return;
}

// func_0x180673a30
uint64_t * func_0x180673a30(uint8_t param_1)
{
  uint64_t *pU64_1;
  uint16_t *pU64_2;
  
  pU64_1 = (uint64_t *)func_0x180672de0(0x38);
  if (pU64_1 != (uint64_t *)0x0) {
    *(uint32_t *)(pU64_1 + 1) = 1;
    *(uint8_t *)((int64_t)pU64_1 + 0x24) = param_1;
    *pU64_1 = std::locale::_Locimp::vftable;
    pU64_1[2] = 0;
    pU64_1[3] = 0;
    *(uint32_t *)(pU64_1 + 4) = 0;
    *(uint8_t *)(pU64_1 + 6) = 0;
    pU64_1[5] = 0;
    pU64_2 = (uint16_t *)_malloc_base(2);
    if (pU64_2 != (uint16_t *)0x0) {
      *pU64_2 = 0x2a;
    }
    pU64_1[5] = pU64_2;
    return pU64_1;
  }
  return (uint64_t *)0x0;
}

// func_0x180673ab0
uint64_t * func_0x180673ab0(uint64_t *param_1,uint param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint8_t local_res10 [24];
  
  *param_1 = std::locale::_Locimp::vftable;
  func_0x180673560(local_res10,0);
  lVal_2 = param_1[3];
  while (lVal_2 != 0) {
    lVal_2 = lVal_2 + -1;
    if ((*(int64_t *)(param_1[2] + lVal_2 * 8) != 0) &&
       (lVal_1 = (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(), lVal_1 != 0)) {
      (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_1,1);
    }
  }
  thunk_FUN_180695dd0(param_1[2]);
  func_0x1806735b0(local_res10);
  if (param_1[5] != 0) {
    thunk_FUN_180695dd0();
  }
  param_1[5] = 0;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x38);
  }
  return param_1;
}

// func_0x180673b70
uint8_t * func_0x180673b70(void)
{
  if (DAT_180841fc8 == 0) {
    func_0x180673ba0(0);
  }
  return &DAT_180841ff0;
}

// func_0x180673ba0
int64_t func_0x180673ba0(char param_1)
{
  int64_t lVal_1;
  uint16_t *pU64_2;
  uint8_t local_res8 [8];
  
  func_0x180673560(local_res8,0);
  lVal_1 = DAT_180842018;
  if (DAT_180842018 == 0) {
    lVal_1 = func_0x180673a30(0);
    if (DAT_180842020 == '\0') {
      DAT_180842020 = '\x01';
      _Atexit((_func_void *)&LAB_180673ca0);
    }
    DAT_180842018 = lVal_1;
    *(uint32_t *)(lVal_1 + 0x20) = 0x3f;
    if (*(uint8_t **)(lVal_1 + 0x28) != &DAT_1807616ec) {
      if (*(uint8_t **)(lVal_1 + 0x28) != (uint8_t *)0x0) {
        thunk_FUN_180695dd0();
      }
      *(uint64_t *)(lVal_1 + 0x28) = 0;
      pU64_2 = (uint16_t *)_malloc_base(2);
      if (pU64_2 != (uint16_t *)0x0) {
        *pU64_2 = 0x43;
      }
      *(uint16_t **)(lVal_1 + 0x28) = pU64_2;
    }
    (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_1);
    DAT_180841fc8 = lVal_1;
    DAT_180841ff8 = lVal_1;
  }
  if (param_1 != '\0') {
    (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_1);
  }
  func_0x1806735b0(local_res8);
  return lVal_1;
}

// func_0x180673c90
uint64_t func_0x180673c90(void)
{
  return DAT_180842018;
}

// func_0x180673d00
int64_t func_0x180673d00(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_1 = -1;
  do {
    lVal_2 = lVal_1 * 2;
    lVal_1 = lVal_1 + 1;
  } while (*(short *)(param_1 + 2 + lVal_2) != 0);
  lVal_1 = lVal_1 * 2 + 2;
  lVal_2 = _malloc_base(lVal_1);
  if (lVal_2 != 0) {
    func_0x1806aa960(lVal_2,param_1,lVal_1);
  }
  return lVal_2;
}

// func_0x180673d70
_iobuf * func_0x180673d70(char *param_1,uint param_2,int param_3)
{
  int iVal_1;
  _iobuf *p_Var2;
  uint uVal_3;
  uint uVal_4;
  
  uVal_4 = param_2 | 1;
  if ((param_2 & 0x40) == 0) {
    uVal_4 = param_2;
  }
  uVal_3 = uVal_4 | 2;
  if ((uVal_4 & 8) == 0) {
    uVal_3 = uVal_4;
  }
  iVal_1 = 0;
  if (DAT_18083cfa0 != (uVal_3 & 0xffffffbb)) {
    do {
      iVal_1 = iVal_1 + 1;
      if (iVal_1 == 0x14) {
        return (_iobuf *)0x0;
      }
    } while ((&DAT_18083cfa0)[iVal_1] != (uVal_3 & 0xffffffbb));
  }
  p_Var2 = common_fsopen<char>(param_1,(&PTR_DAT_1806df780)[iVal_1],param_3);
  if (p_Var2 == (_iobuf *)0x0) {
    return (_iobuf *)0x0;
  }
  if (((param_2 & 4) != 0) && (iVal_1 = func_0x180682c24(p_Var2,0,2), iVal_1 != 0)) {
    func_0x18068a690(p_Var2);
    return (_iobuf *)0x0;
  }
  return p_Var2;
}

// std::_Random_device
/* Library Function - Single Match
    unsigned int __cdecl std::_Random_device(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
/* Library Function - Single Match
    unsigned int __cdecl std::_Random_device(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */
uint __cdecl std:: _Random_device(void)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint uVal_3;
  uint local_res8 [8];
  
  iVal_2 = rand_s(local_res8);
  if (iVal_2 == 0) {
    return local_res8[0];
  }
  func_0x1806744f0("invalid random_device value");
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_3 = (*fnPtr_1)();
  return uVal_3;
}

// func_0x180673e60
DWORD func_0x180673e60(PTP_WORK *param_1)
{
  BOOL BVar1;
  DWORD DVar2;
  PTP_WORK p_Var3;
  IMAGE_DOS_HEADER *local_res8 [4];
  
  p_Var3 = CreateThreadpoolWork((PTP_WORK_CALLBACK)&LAB_180673f20,param_1,(PTP_CALLBACK_ENVIRON)0x0)
  ;
  *param_1 = p_Var3;
  if (p_Var3 != (PTP_WORK)0x0) {
    BVar1 = GetModuleHandleExW(2,(LPCWSTR)0x0,(HMODULE *)local_res8);
    if (((BVar1 == 0) || (local_res8[0] == (IMAGE_DOS_HEADER *)0x0)) ||
       (local_res8[0] != &IMAGE_DOS_HEADER_180000000)) {
      GetModuleHandleExW(4,(LPCWSTR)param_1[1],(HMODULE *)local_res8);
    }
    SubmitThreadpoolWork(*param_1);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180673eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

// func_0x180673ef0
void func_0x180673ef0(PTP_WORK *param_1)
{
  if (*param_1 != (PTP_WORK)0x0) {
    CloseThreadpoolWork(*param_1);
    *param_1 = (PTP_WORK)0x0;
  }
  return;
}

// func_0x1806740a0
char * func_0x1806740a0(int param_1)
{
  int *pInt_1;
  
  pInt_1 = &DAT_1806df830;
  do {
    if (*pInt_1 == param_1) {
      return *(char **)(pInt_1 + 2);
    }
    pInt_1 = pInt_1 + 4;
  } while (pInt_1 != &DAT_1806dfd20);
  return "unknown error";
}

// func_0x1806740d0
int func_0x1806740d0(int param_1)
{
  uint8_t **ptr2_U64_1;
  
  ptr2_U64_1 = (uint8_t **)&DAT_1806dfd20;
  do {
    if (*(int *)ptr2_U64_1 == param_1) {
      return *(int *)((int64_t)ptr2_U64_1 + 4);
    }
    ptr2_U64_1 = ptr2_U64_1 + 1;
  } while (ptr2_U64_1 != &PTR_s_device_or_resource_busy_1806dffc0);
  return 0;
}

// func_0x180674120
uint64_t * func_0x180674120(uint64_t *param_1)
{
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

// func_0x180674150
void func_0x180674150(int param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t local_38 [48];
  
  uVal_2 = func_0x1806741a0();
  func_0x1806741b0(local_38,*(uint32_t *)(&DAT_1806dfff8 + (int64_t)param_1 * 4),uVal_2,
                (&PTR_s_device_or_resource_busy_1806dffc0)[param_1]);
  func_0x18067a120(local_38,&DAT_180768818);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1806741a0
uint8_t ** func_0x1806741a0(void)
{
  return &PTR_vftable_1806b0120;
}

// func_0x1806741b0
void func_0x1806741b0(uint64_t *param_1,uint32_t param_2,uint64_t param_3,int64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t *pU64_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint8_t auStack_68 [8];
  uint8_t auStack_60 [24];
  uint64_t local_48;
  uint64_t local_40;
  uint8_t local_38 [16];
  int64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  pU64_3 = auStack_68;
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  local_38 = ZEXT816(0);
  local_28 = 0;
  local_20 = 0;
  lVal_4 = -1;
  do {
    lVal_4 = lVal_4 + 1;
  } while (*(char *)(param_4 + lVal_4) != '\0');
  local_48 = param_1;
  func_0x1806742f0(local_38,param_4);
  local_48 = (uint64_t *)CONCAT44(local_48._4_4_,param_2);
  local_40 = param_3;
  func_0x180089820(param_1,&local_48,local_38);
  if (0xf < local_20) {
    if (DAT_1806e3ba0 != '\0') {
      uVal_6 = local_20 + 1 + local_38._0_8_;
      uVal_7 = local_28 + 1 + local_38._0_8_;
      uVal_2 = uVal_6 + 7 & 0xfffffffffffffff8;
      uVal_5 = uVal_2;
      if (uVal_7 <= uVal_2) {
        uVal_5 = uVal_7;
      }
      if (uVal_2 < uVal_6) {
        uVal_6 = uVal_2;
      }
      _guard_check_icall(local_38._0_8_,uVal_2,uVal_5,uVal_6);
    }
    lVal_4 = local_38._0_8_;
    pU64_3 = auStack_68;
    if ((0xfff < local_20 + 1) &&
       (lVal_4 = *(int64_t *)(local_38._0_8_ + -8), pU64_3 = auStack_68,
       0x1f < (local_38._0_8_ - lVal_4) - 8U)) {
      fnPtr_1 = (func_ptr_t )swi(0x29);
      lVal_4 = (*fnPtr_1)(5);
      pU64_3 = auStack_60;
    }
    *(uint64_t *)(pU64_3 + -8) = 0x1806742b6;
    thunk_FUN_180695dd0(lVal_4);
  }
  *param_1 = std::system_error::vftable;
  *(uint64_t *)(pU64_3 + -8) = 0x1806742d0;
  func_0x180673080(*(uint64_t *)(pU64_3 + 0x50) ^ (uint64_t)pU64_3);
  return;
}

// func_0x1806742f0
void func_0x1806742f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uStack_50;
  uint8_t auStack_48 [40];
  
  pU64_6 = auStack_48;
  if (0x7fffffffffffffff < param_3) {
    func_0x18007ba70();
    fnPtr_1 = (func_ptr_t )swi(3);
    (*fnPtr_1)();
    return;
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    func_0x1806aa960();
    *(uint8_t *)(param_3 + (int64_t)param_1) = 0;
    return;
  }
  uVal_2 = param_3 | 0xf;
  if (uVal_2 < 0x8000000000000000) goto LAB_180674368;
  uVal_3 = 0x8000000000000027;
  pU64_6 = auStack_48;
  uVal_2 = 0x7fffffffffffffff;
  do {
    *(uint64_t *)(pU64_6 + -8) = 0x18067435c;
    lVal_4 = func_0x180672de0(uVal_3);
    if (lVal_4 != 0) {
      uVal_3 = lVal_4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_3 - 8) = lVal_4;
LAB_1806743b3:
      *param_1 = uVal_3;
      param_1[2] = param_3;
      param_1[3] = uVal_2;
      *(uint64_t *)(pU64_6 + -8) = 0x1806743cc;
      func_0x1806aa960(uVal_3,param_2,param_3);
      *(uint8_t *)(uVal_3 + param_3) = 0;
      uVal_2 = param_1[3];
      if ((0xf < uVal_2) && (DAT_1806e3ba0 != '\0')) {
        uVal_3 = *param_1;
        uVal_7 = param_1[2] + 1 + uVal_3;
        uVal_8 = uVal_3 + 1 + uVal_2;
        uVal_5 = uVal_2 + 8 + uVal_3 & 0xfffffffffffffff8;
        uVal_2 = uVal_5;
        if (uVal_8 <= uVal_5) {
          uVal_2 = uVal_8;
        }
        if (uVal_5 < uVal_7) {
          uVal_7 = uVal_5;
        }
        *(uint64_t *)(pU64_6 + -8) = 0x180674419;
        _guard_check_icall(uVal_3,uVal_5,uVal_2,uVal_7);
      }
      return;
    }
    fnPtr_1 = (func_ptr_t )swi(0x29);
    uVal_2 = (*fnPtr_1)(5);
    pU64_6 = pU64_6 + 8;
LAB_180674368:
    if (uVal_2 < 0x16) {
      uVal_2 = 0x16;
    }
    if (uVal_2 == 0xffffffffffffffff) {
      uVal_3 = 0;
      goto LAB_1806743b3;
    }
    if (uVal_2 + 1 < 0x1000) {
      *(uint64_t *)(pU64_6 + -8) = 0x1806743b0;
      uVal_3 = func_0x180672de0();
      goto LAB_1806743b3;
    }
    uVal_3 = uVal_2 + 0x28;
    if (uVal_3 <= uVal_2 + 1) {
      *(uint64_t *)(pU64_6 + -8) = 0x180674432;
      func_0x18007ba90();
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
  } while( true );
}

// func_0x180674440
uint64_t * func_0x180674440(uint64_t *param_1)
{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}

// func_0x180674470
void func_0x180674470(void)
{
  func_ptr_t fnPtr_1;
  uint8_t local_28 [40];
  
  func_0x180674440(local_28);
  func_0x18067a120(local_28,&DAT_180768880);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180674490
void func_0x180674490(uint64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t local_28 [40];
  
  func_0x180091370(local_28,param_1);
  func_0x18067a120(local_28,&DAT_180768c60);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1806744c0
void func_0x1806744c0(uint64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t local_28 [40];
  
  func_0x180674670(local_28,param_1);
  func_0x18067a120(local_28,&DAT_180839670);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1806744f0
void func_0x1806744f0(uint64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t local_28 [40];
  
  func_0x180674700(local_28,param_1);
  func_0x18067a120(local_28,&DAT_1808396d8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180674520
void func_0x180674520(uint64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t local_28 [40];
  
  func_0x1800d9790(local_28,param_1);
  func_0x18067a120(local_28,&DAT_18077f2c0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180674550
uint64_t * func_0x180674550(uint64_t *param_1)
{
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *param_1 = std::bad_function_call::vftable;
  return param_1;
}

// func_0x180674570
char * func_0x180674570(void)
{
  return "bad function call";
}

// func_0x1806745c0
uint64_t * func_0x1806745c0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = std::exception::vftable;
  func_0x18067b490(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x18);
  }
  return param_1;
}

// func_0x180674610
void func_0x180674610(void)
{
  func_ptr_t fnPtr_1;
  uint8_t local_28 [40];
  
  func_0x180674550(local_28);
  func_0x18067a120(local_28,&DAT_180839740);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180674670
uint64_t * func_0x180674670(uint64_t *param_1,uint64_t param_2)
{
  uint64_t local_18;
  uint8_t local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  local_18 = param_2;
  func_0x18067b3f0(&local_18);
  *param_1 = std::length_error::vftable;
  return param_1;
}

// func_0x180674700
uint64_t * func_0x180674700(uint64_t *param_1,uint64_t param_2)
{
  uint64_t local_18;
  uint8_t local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  local_18 = param_2;
  func_0x18067b3f0(&local_18);
  *param_1 = std::out_of_range::vftable;
  return param_1;
}

// func_0x180674790
void func_0x180674790(uint32_t param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t local_28 [40];
  
  func_0x1806747c0(local_28,param_1);
  func_0x18067a120(local_28,&DAT_1808397a0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1806747c0
uint64_t * func_0x1806747c0(uint64_t *param_1,uint32_t param_2)
{
  char *local_18;
  uint8_t local_10;
  
  switch(param_2) {
  case 0:
    local_18 = 
    "regex_error(error_collate): The expression contained an invalid collating element name.";
    break;
  case 1:
    local_18 = "regex_error(error_ctype): The expression contained an invalid character class name."
    ;
    break;
  case 2:
    local_18 = 
    "regex_error(error_escape): The expression contained an invalid escaped character, or a trailing escape."
    ;
    break;
  case 3:
    local_18 = "regex_error(error_backref): The expression contained an invalid back reference.";
    break;
  case 4:
    local_18 = "regex_error(error_brack): The expression contained mismatched [ and ].";
    break;
  case 5:
    local_18 = "regex_error(error_paren): The expression contained mismatched ( and ).";
    break;
  case 6:
    local_18 = "regex_error(error_brace): The expression contained mismatched { and }.";
    break;
  case 7:
    local_18 = 
    "regex_error(error_badbrace): The expression contained an invalid range in a {} expression.";
    break;
  case 8:
    local_18 = 
    "regex_error(error_range): The expression contained an invalid character range, such as [b-a] in most encodings."
    ;
    break;
  case 9:
    local_18 = 
    "regex_error(error_space): There was insufficient memory to convert the expression into a finite state machine."
    ;
    break;
  case 10:
    local_18 = 
    "regex_error(error_badrepeat): One of *?+{ was not preceded by a valid regular expression.";
    break;
  case 0xb:
    local_18 = 
    "regex_error(error_complexity): The complexity of an attempted match against a regular expression exceeded a pre-set level."
    ;
    break;
  case 0xc:
    local_18 = 
    "regex_error(error_stack): There was insufficient memory to determine whether the regular expression could match the specified character sequence."
    ;
    break;
  case 0xd:
    local_18 = "regex_error(error_parse)";
    break;
  case 0xe:
    local_18 = "regex_error(error_syntax)";
    break;
  default:
    local_18 = "regex_error";
  }
  *param_1 = std::exception::vftable;
  local_10 = 1;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  func_0x18067b3f0(&local_18);
  *(uint32_t *)(param_1 + 3) = param_2;
  *param_1 = std::regex_error::vftable;
  return param_1;
}

// func_0x180674950
uint64_t * func_0x180674950(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = std::exception::vftable;
  func_0x18067b490(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x20);
  }
  return param_1;
}

// func_0x1806749a0
uint64_t * func_0x1806749a0(uint64_t *param_1)
{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}

// func_0x180674a50
uint64_t * func_0x180674a50(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = std::exception::vftable;
  func_0x18067b490(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x18);
  }
  return param_1;
}

// func_0x180674aa0
void func_0x180674aa0(uint64_t *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// func_0x180674ab0
void func_0x180674ab0(int64_t param_1)
{
  int *pInt_1;
  int iVal_2;
  int64_t lVal_3;
  
  lVal_3 = *(int64_t *)(param_1 + 8);
  if (lVal_3 != 0) {
    LOCK();
    pInt_1 = (int *)(lVal_3 + 8);
    iVal_2 = *pInt_1;
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (iVal_2 == 1) {
      (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_3);
      LOCK();
      pInt_1 = (int *)(lVal_3 + 0xc);
      iVal_2 = *pInt_1;
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (iVal_2 == 1) {
        (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_3);
      }
    }
  }
  return;
}

// func_0x180674b10
void func_0x180674b10(uint64_t *param_1,uint64_t *param_2)
{
  int *pInt_1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    LOCK();
    pInt_1 = (int *)(param_2[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

// func_0x180674b40
void func_0x180674b40(uint64_t *param_1,uint64_t *param_2)
{
  int *pInt_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  if (param_2[1] != 0) {
    LOCK();
    pInt_1 = (int *)(param_2[1] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  uVal_3 = param_2[1];
  *param_1 = *param_2;
  lVal_4 = param_1[1];
  param_1[1] = uVal_3;
  if (lVal_4 != 0) {
    LOCK();
    pInt_1 = (int *)(lVal_4 + 8);
    iVal_2 = *pInt_1;
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (iVal_2 == 1) {
      (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_4);
      LOCK();
      pInt_1 = (int *)(lVal_4 + 0xc);
      iVal_2 = *pInt_1;
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (iVal_2 == 1) {
        (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_4);
      }
    }
  }
  return;
}

// func_0x180674be0
bool func_0x180674be0(int64_t *param_1)
{
  return *param_1 != 0;
}

// func_0x180674bf0
void func_0x180674bf0(uint64_t param_1)
{
  int iVal_1;
  int *pInt_2;
  int **ptr2_Int_3;
  uint64_t uVal_4;
  
  ptr2_Int_3 = (int **)func_0x18067a290();
  pInt_2 = *ptr2_Int_3;
  if (((pInt_2 != (int *)0x0) && (iVal_1 = *pInt_2, iVal_1 != -0x1fbcb0b3)) && (iVal_1 != -0x1fbcbcae))
  {
    if (((iVal_1 == -0x1f928c9d) && (pInt_2[6] == 4)) &&
       ((pInt_2[8] + 0xe66cfae0U < 3 || (pInt_2[8] == 0x1994000)))) {
      func_0x180675350(param_1,pInt_2);
      return;
    }
    uVal_4 = _malloc_base(0xb0);
    func_0x180675170(param_1,pInt_2,uVal_4);
  }
  return;
}

// func_0x180674c80
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
void func_0x180674c80(DWORD **param_1)
{
  int iVal_1;
  DWORD *pD_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  DWORD dwExceptionCode;
  DWORD dwExceptionFlags;
  DWORD nNumberOfArguments;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint8_t *pU64_7;
  uint8_t *puStack_100;
  uint8_t auStack_f8 [32];
  uint8_t local_d8 [32];
  DWORD local_b8;
  DWORD DStack_b4;
  DWORD DStack_b0;
  DWORD DStack_ac;
  DWORD local_a8;
  DWORD DStack_a4;
  DWORD DStack_a0;
  DWORD DStack_9c;
  ULONG_PTR local_98;
  uint8_t *puStack_90;
  int64_t local_88;
  int64_t lStack_80;
  DWORD local_78;
  DWORD DStack_74;
  DWORD DStack_70;
  DWORD DStack_6c;
  DWORD local_68;
  DWORD DStack_64;
  DWORD DStack_60;
  DWORD DStack_5c;
  DWORD local_58;
  DWORD DStack_54;
  DWORD DStack_50;
  DWORD DStack_4c;
  DWORD local_48;
  DWORD DStack_44;
  DWORD DStack_40;
  DWORD DStack_3c;
  DWORD local_38;
  DWORD DStack_34;
  DWORD DStack_30;
  DWORD DStack_2c;
  uint64_t local_28;
  uint64_t local_18;
  
  pU64_7 = auStack_f8;
  local_18 = DAT_18083cf40 ^ (uint64_t)local_d8;
  pD_2 = *param_1;
  if (pD_2 == (DWORD *)0x0) {
    puStack_100 = (uint8_t *)0x180674cb7;
    func_0x1806749a0(local_d8);
    puStack_100 = (uint8_t *)0x180674cc7;
    func_0x18067a120(local_d8,&DAT_180839808);
    fnPtr_3 = (func_ptr_t )swi(3);
    (*fnPtr_3)();
    return;
  }
  local_b8 = *pD_2;
  DStack_b4 = pD_2[1];
  DStack_b0 = pD_2[2];
  DStack_ac = pD_2[3];
  local_a8 = pD_2[4];
  DStack_a4 = pD_2[5];
  DStack_a0 = pD_2[6];
  DStack_9c = pD_2[7];
  local_98 = *(ULONG_PTR *)(pD_2 + 8);
  puStack_90 = *(uint8_t **)(pD_2 + 10);
  local_88 = *(int64_t *)(pD_2 + 0xc);
  lStack_80 = *(int64_t *)(pD_2 + 0xe);
  local_78 = pD_2[0x10];
  DStack_74 = pD_2[0x11];
  DStack_70 = pD_2[0x12];
  DStack_6c = pD_2[0x13];
  local_68 = pD_2[0x14];
  DStack_64 = pD_2[0x15];
  DStack_60 = pD_2[0x16];
  DStack_5c = pD_2[0x17];
  local_58 = pD_2[0x18];
  DStack_54 = pD_2[0x19];
  DStack_50 = pD_2[0x1a];
  DStack_4c = pD_2[0x1b];
  local_48 = pD_2[0x1c];
  DStack_44 = pD_2[0x1d];
  DStack_40 = pD_2[0x1e];
  DStack_3c = pD_2[0x1f];
  local_38 = pD_2[0x20];
  DStack_34 = pD_2[0x21];
  DStack_30 = pD_2[0x22];
  DStack_2c = pD_2[0x23];
  local_28 = *(uint64_t *)(pD_2 + 0x24);
  if (((local_b8 == 0xe06d7363) && (pU64_7 = auStack_f8, DStack_a0 == 4)) &&
     (((int)local_98 + 0xe66cfae0U < 3 || (pU64_7 = auStack_f8, (int)local_98 == 0x1994000)))) {
    if ((((puStack_90 == (uint8_t *)0x0) || (local_88 == 0)) ||
        (iVal_1 = *(int *)(local_88 + 0xc), iVal_1 == 0)) || (*(int *)(iVal_1 + lStack_80) < 1)) {
                    /* WARNING: Subroutine does not return */
      puStack_100 = &UNK_180674e25;
      abort();
    }
    uVal_5 = (uint64_t)*(int *)(*(int *)((int64_t)iVal_1 + 4 + lStack_80) + lStack_80 + 0x14);
    uVal_6 = uVal_5 + 0xf;
    if (uVal_6 <= uVal_5) {
      uVal_6 = 0xffffffffffffff0;
    }
    puStack_100 = (uint8_t *)0x180674dd5;
    lVal_4 = -(uVal_6 & 0xfffffffffffffff0);
    pU64_7 = auStack_f8 + lVal_4;
    *(uint64_t *)(auStack_f8 + lVal_4 + -8) = 0x180674de5;
    func_0x180674eb0(local_d8 + lVal_4);
    puStack_90 = local_d8 + lVal_4;
  }
  nNumberOfArguments = DStack_a0;
  dwExceptionFlags = DStack_b4;
  dwExceptionCode = local_b8;
  *(uint64_t *)(pU64_7 + -8) = 0x180674e01;
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,&local_98);
  uVal_6 = local_18 ^ (uint64_t)local_d8;
  *(uint64_t *)(pU64_7 + -8) = 0x180674e10;
  func_0x180673080(uVal_6);
  return;
}

// func_0x180674e30
void func_0x180674e30(int64_t param_1)
{
  int *pInt_1;
  int iVal_2;
  
  LOCK();
  pInt_1 = (int *)(param_1 + 8);
  iVal_2 = *pInt_1;
  *pInt_1 = *pInt_1 + -1;
  UNLOCK();
  if (iVal_2 == 1) {
    (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
    LOCK();
    pInt_1 = (int *)(param_1 + 0xc);
    iVal_2 = *pInt_1;
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (iVal_2 == 1) {
      (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(param_1);
    }
  }
  return;
}

// func_0x180674e80
void func_0x180674e80(uint64_t param_1,func_ptr_t UNRECOVERED_JUMPTABLE)
{
                    /* WARNING: Could not recover jumptable at 0x000180674e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// func_0x180674e90
void func_0x180674e90(uint64_t param_1,func_ptr_t UNRECOVERED_JUMPTABLE,uint64_t param_3)
{
                    /* WARNING: Could not recover jumptable at 0x000180674e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}

// func_0x180674ea0
void func_0x180674ea0(uint64_t param_1,func_ptr_t UNRECOVERED_JUMPTABLE,uint64_t param_3, uint32_t param_4)
{
                    /* WARNING: Could not recover jumptable at 0x000180674eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}

// func_0x180674eb0
void func_0x180674eb0(uint64_t param_1,int64_t *param_2,byte *param_3,int64_t param_4)
{
  int iVal_1;
  uint64_t uVal_2;
  
  if (((*param_3 & 1) == 0) && (iVal_1 = *(int *)(param_3 + 0x18), iVal_1 != 0)) {
    uVal_2 = func_0x18067a2b0(param_2,param_3 + 8);
    if ((*param_3 & 4) == 0) {
      func_0x180674e90(param_1,param_4 + iVal_1,uVal_2);
    }
    else {
      func_0x180674ea0();
    }
  }
  else {
    func_0x1806aa960(param_1,param_2,(int64_t)*(int *)(param_3 + 0x14));
    if (((*param_3 & 8) != 0) && (*param_2 != 0)) {
      (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
      return;
    }
  }
  return;
}

// func_0x180674f60
uint64_t * func_0x180674f60(uint64_t *param_1,uint64_t *param_2)
{
  int *pInt_1;
  int iVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  uVal_3 = *param_2;
  uVal_4 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = uVal_3;
  lVal_5 = param_1[1];
  param_1[1] = uVal_4;
  if (lVal_5 != 0) {
    LOCK();
    pInt_1 = (int *)(lVal_5 + 8);
    iVal_2 = *pInt_1;
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (iVal_2 == 1) {
      (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_5);
      LOCK();
      pInt_1 = (int *)(lVal_5 + 0xc);
      iVal_2 = *pInt_1;
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (iVal_2 == 1) {
        (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(lVal_5);
      }
    }
  }
  return param_1;
}

// func_0x180675000
void func_0x180675000(int64_t param_1)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  
  if ((*(int *)(param_1 + 0x10) == -0x1f928c9d) && (*(int *)(param_1 + 0x28) == 4)) {
    if ((*(int *)(param_1 + 0x30) + 0xe66cfae0U < 3) || (*(int *)(param_1 + 0x30) == 0x1994000)) {
      lVal_1 = *(int64_t *)(param_1 + 0x40);
      if (lVal_1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pLong_2 = *(int64_t **)(param_1 + 0x38);
      if (pLong_2 != (int64_t *)0x0) {
        lVal_3 = *(int64_t *)(param_1 + 0x48);
        if (*(int *)(lVal_1 + 4) != 0) {
          func_0x180674e80(pLong_2,lVal_3 + *(int *)(lVal_1 + 4));
          return;
        }
        if (((*(byte *)(*(int *)((int64_t)*(int *)(lVal_1 + 0xc) + 4 + lVal_3) + lVal_3) & 8) != 0) &&
           (*pLong_2 != 0)) {
          (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)();
        }
      }
    }
  }
  return;
}

// func_0x180675090
void func_0x180675090(void)
{
  thunk_FUN_180695dd0();
  return;
}

// func_0x1806750a0
uint64_t * func_0x1806750a0(uint64_t *param_1,uint32_t *param_2)

{
  uint uVal_1;
  
  *(uint32_t *)(param_1 + 1) = 1;
  *(uint32_t *)((int64_t)param_1 + 0xc) = 1;
  *param_1 = `anonymous_namespace'::_ExceptionPtr_normal::vftable;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 2) = *param_2;
  uVar1 = param_2[1];
  param_1[3] = 0;
  *(uint *)((longlong)param_1 + 0x14) = uVar1 | 1;
  param_1[4] = 0;
  uVar1 = param_2[6];
  *(uint *)(param_1 + 5) = uVar1;
  if (0xf < uVar1) {
    uVar1 = 0xf;
  }
  func_0x1806aa960(param_1 + 6,param_2 + 8,(ulonglong)uVar1 * 8);
  func_0x1806ab010(param_1 + (ulonglong)uVar1 + 6,0,(ulonglong)(0xf - uVar1) << 3);
  return param_1;
}


// func_0x180675140
uint64_t func_0x180675140(uint64_t param_1,uint64_t param_2)
{
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0xb0);
  }
  return param_1;
}

// func_0x180675170
void func_0x180675170(int64_t *param_1,uint32_t *param_2,uint64_t *param_3,uint64_t param_4)

{
  uint8_t **ptr2_U64_1;
  int *pInt_2;
  int iVal_3;
  uint uVal_4;
  uint8_t **ptr2_U64_5;
  uint8_t *local_40;
  uint8_t **ppuStack_38;
  
  if (param_3 == (uint64_t *)0x0) {
    LOCK();
    DAT_18083d108 = DAT_18083d108 + 1;
    UNLOCK();
    local_40 = &DAT_18083d110;
    ppuStack_38 = &PTR_vftable_18083d100;
    func_0x180674f60(param_1,&local_40,0,param_4,1);
    ptr2_U64_5 = ppuStack_38;
    if (ppuStack_38 != (uint8_t **)0x0) {
      LOCK();
      ptr2_U64_1 = ppuStack_38 + 1;
      iVal_3 = *(int *)ptr2_U64_1;
      *(int *)ptr2_U64_1 = *(int *)ptr2_U64_1 + -1;
      UNLOCK();
      if (iVal_3 == 1) {
        (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(ppuStack_38);
        LOCK();
        pInt_2 = (int *)((int64_t)ptr2_U64_5 + 0xc);
        iVal_3 = *pInt_2;
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (iVal_3 == 1) {
          (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(ptr2_U64_5);
          return;
        }
      }
    }
  }
  else {
    *(uint32_t *)(param_3 + 1) = 1;
    *(uint32_t *)((int64_t)param_3 + 0xc) = 1;
    *param_3 = `anonymous_namespace'::_ExceptionPtr_normal::vftable;
    param_3[0x15] = 0;
    *(undefined4 *)(param_3 + 2) = *param_2;
    *(uint *)((longlong)param_3 + 0x14) = param_2[1] | 1;
    param_3[3] = 0;
    param_3[4] = 0;
    uVar4 = param_2[6];
    *(uint *)(param_3 + 5) = uVar4;
    if (0xf < uVar4) {
      uVar4 = 0xf;
    }
    func_0x1806aa960(param_3 + 6,param_2 + 8,(ulonglong)uVar4 * 8,param_4,0);
    func_0x1806ab010(param_3 + (ulonglong)uVar4 + 6,0,(ulonglong)(0xf - uVar4) << 3);
    *param_1 = (longlong)(param_3 + 2);
    param_1[1] = (longlong)param_3;
  }
  return;
}


// func_0x180675350
void func_0x180675350(uint8_t (**param_1)[16],uint32_t *param_2)

{
  uint8_t **ptr2_U64_1;
  int *pInt_2;
  uint8_t (*pArr16_3)[16];
  int iVal_4;
  uint uVal_5;
  int64_t lVal_6;
  uint8_t **ptr2_U64_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  int64_t lVal_10;
  int64_t lVal_11;
  uint32_t uVal_12;
  uint8_t local_48 [16];
  
  uVal_12 = 0;
  lVal_6 = *(int64_t *)(param_2 + 0xe);
  local_48._8_8_ = local_48._0_8_;
  local_48._0_8_ = lVal_6;
  lVal_11 = *(int *)((int64_t)*(int *)(*(int64_t *)(param_2 + 0xc) + 0xc) + 4 + lVal_6) + lVal_6;
  lVal_10 = (int64_t)*(int *)(lVal_11 + 0x14) + 0xb0;
  pArr16_8 = (uint8_t (*)[16])_malloc_base();
  if (pArr16_8 == (uint8_t (*)[16])0x0) {
    LOCK();
    DAT_18083d108 = DAT_18083d108 + 1;
    UNLOCK();
    local_48._0_8_ = &DAT_18083d110;
    local_48._8_8_ = &PTR_vftable_18083d100;
    func_0x180674f60(param_1,local_48);
    ptr2_U64_7 = (uint8_t **)local_48._8_8_;
    if ((uint8_t **)local_48._8_8_ != (uint8_t **)0x0) {
      LOCK();
      ptr2_U64_1 = (uint8_t **)(local_48._8_8_ + 8);
      iVal_4 = *(int *)ptr2_U64_1;
      *(int *)ptr2_U64_1 = *(int *)ptr2_U64_1 + -1;
      UNLOCK();
      if (iVal_4 == 1) {
        (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(local_48._8_8_);
        LOCK();
        pInt_2 = (int *)((int64_t)ptr2_U64_7 + 0xc);
        iVal_4 = *pInt_2;
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (iVal_4 == 1) {
          (*(func_ptr_t )PTR__guard_dispatch_icall_1807658e0)(ptr2_U64_7);
          return;
        }
      }
    }
  }
  else {
    func_0x180674eb0(pArr16_8 + 0xb,*(uint64_t *)(param_2 + 10),lVal_11,lVal_6,uVal_12,lVal_10);
    *pArr16_8 = ZEXT816(0);
    *(uint32_t *)(*pArr16_8 + 8) = 1;
    *(uint32_t *)(*pArr16_8 + 0xc) = 1;
    *(uint8_t ***)*pArr16_8 = `anonymous_namespace'::_ExceptionPtr_normal::vftable;
    *(undefined8 *)(pauVar8[10] + 8) = 0;
    pauVar3 = pauVar8 + 1;
    *(undefined4 *)*pauVar3 = *param_2;
    *(uint *)(pauVar8[1] + 4) = param_2[1] | 1;
    *(undefined8 *)(pauVar8[1] + 8) = 0;
    *(undefined8 *)pauVar8[2] = 0;
    uVar5 = param_2[6];
    *(uint *)(pauVar8[2] + 8) = uVar5;
    uVar9 = (ulonglong)uVar5;
    if (0xf < uVar5) {
      uVar9 = 0xf;
    }
    func_0x1806aa960(pauVar8 + 3,param_2 + 8,uVar9 * 8);
    func_0x1806ab010(pauVar3[2] + uVar9 * 8,0,(ulonglong)(0xf - (int)uVar9) << 3);
    *(undefined (**)[16])(pauVar8[3] + 8) = pauVar8 + 0xb;
    *param_1 = pauVar3;
    param_1[1] = pauVar8;
  }
  return;
}

