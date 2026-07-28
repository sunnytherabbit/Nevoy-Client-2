#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@18011c390
void Unwind_18011c390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18011c3d0
void Unwind_18011c3d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x38ec) = 0;
  return;
}

// func_0x18011c4c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t * func_0x18011c4c0(float *param_1,int64_t *param_2,int *param_3,uint64_t *param_4)
{
  func_ptr_t fnPtr_1;
  uint8_t uVal_2;
  int64_t lVal_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t *pU64_8;
  int64_t *pLong_9;
  uint64_t uVal_10;
  uint64_t *pU64_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  float fVal_14;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  float fVal_18;
  uint64_t uVal_19;
  
  uVal_19 = 0xfffffffffffffffe;
  uVal_12 = ((uint64_t)*(byte *)((int64_t)param_3 + 3) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 2) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 1) ^
           ((uint64_t)*(byte *)param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3;
  lVal_3 = (*(uint64_t *)(param_1 + 0xc) & uVal_12) * 0x10;
  pU64_4 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_3);
  pU64_11 = *(uint64_t **)(param_1 + 2);
  if (pU64_4 != *(uint64_t **)(param_1 + 2)) {
    if (*param_3 != *(int *)(pU64_4 + 2)) {
      do {
        pU64_11 = pU64_4;
        if (pU64_4 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_3)) goto LAB_18011c579;
        pU64_4 = (uint64_t *)pU64_4[1];
      } while (*param_3 != *(int *)(pU64_4 + 2));
    }
    uVal_2 = 0;
    goto LAB_18011c72a;
  }
LAB_18011c579:
  if (*(int64_t *)(param_1 + 4) == 0x7ffffffffffffff) {
    func_0x1806744c0("unordered_map/set too long");
    fnPtr_1 = (func_ptr_t )swi(3);
    pLong_9 = (int64_t *)(*fnPtr_1)();
    return pLong_9;
  }
  pU64_4 = (uint64_t *)func_0x180672de0(0x20);
  auArr_17._8_8_ = extraout_XMM0_Qb;
  auArr_17._0_8_ = extraout_XMM0_Qa;
  *(int *)(pU64_4 + 2) = *param_3;
  pU64_4[3] = *param_4;
  uVal_5 = *(int64_t *)(param_1 + 4) + 1;
  auArr_15._4_12_ = auArr_17._4_12_;
  if ((int64_t)uVal_5 < 0) {
    fVal_14 = (float)((uint64_t)((uint)uVal_5 & 1) | uVal_5 >> 1);
    auArr_15._0_4_ = fVal_14 + fVal_14;
    fVal_14 = *param_1;
    uVal_5 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_5 < 0) goto LAB_18011c5c3;
LAB_18011c60d:
    if (fVal_14 < auArr_15._0_4_ / (float)uVal_5) {
LAB_18011c622:
      auArr_16._4_12_ = auArr_15._4_12_;
      auArr_16._0_4_ = auArr_15._0_4_ / fVal_14;
      auArr_17 = roundss(auArr_16,auArr_16,10);
      uVal_6 = (uint64_t)auArr_17._0_4_;
      uVal_6 = (int64_t)(auArr_17._0_4_ - _DAT_1806ae420) & (int64_t)uVal_6 >> 0x3f | uVal_6;
      uVal_7 = 8;
      if (8 < uVal_6) {
        uVal_7 = uVal_6;
      }
      uVal_10 = uVal_5;
      if (uVal_5 < uVal_7) {
        uVal_10 = uVal_5 * 8;
        if (uVal_10 < uVal_7 || uVal_10 - uVal_7 == 0) {
          uVal_10 = uVal_7;
        }
        if (0x1ff < uVal_5) {
          uVal_10 = uVal_7;
        }
      }
      func_0x1801163b0(param_1,uVal_10,uVal_6,pU64_4,pU64_4,uVal_19);
      lVal_3 = (*(uint64_t *)(param_1 + 0xc) & uVal_12) * 0x10;
      pU64_8 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_3);
      pU64_11 = *(uint64_t **)(param_1 + 2);
      if (pU64_8 != *(uint64_t **)(param_1 + 2)) {
        if (*(int *)(pU64_4 + 2) != *(int *)(pU64_8 + 2)) {
          do {
            pU64_11 = pU64_8;
            if (pU64_8 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_3)) goto LAB_18011c6d6;
            pU64_8 = (uint64_t *)pU64_8[1];
          } while (*(int *)(pU64_4 + 2) != *(int *)(pU64_8 + 2));
        }
        pU64_11 = (uint64_t *)*pU64_8;
      }
    }
  }
  else {
    auArr_15._0_4_ = (float)uVal_5;
    fVal_14 = *param_1;
    uVal_5 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_5) goto LAB_18011c60d;
LAB_18011c5c3:
    fVal_18 = (float)((uint64_t)((uint)uVal_5 & 1) | uVal_5 >> 1);
    if (fVal_14 < auArr_15._0_4_ / (fVal_18 + fVal_18)) goto LAB_18011c622;
  }
LAB_18011c6d6:
  pU64_8 = (uint64_t *)pU64_11[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_4 = pU64_11;
  pU64_4[1] = pU64_8;
  *pU64_8 = pU64_4;
  pU64_11[1] = pU64_4;
  lVal_3 = *(int64_t *)(param_1 + 6);
  lVal_13 = (uVal_12 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_3 + lVal_13) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_3 + lVal_13) = pU64_4;
    *(uint64_t **)(lVal_3 + 8 + lVal_13) = pU64_4;
  }
  else {
    if (*(uint64_t **)(lVal_3 + lVal_13) != pU64_11) {
      uVal_2 = 1;
      if (*(uint64_t **)(lVal_3 + 8 + lVal_13) == pU64_8) {
        *(uint64_t **)(lVal_3 + 8 + lVal_13) = pU64_4;
      }
      goto LAB_18011c72a;
    }
    *(uint64_t **)(lVal_3 + lVal_13) = pU64_4;
  }
  uVal_2 = 1;
LAB_18011c72a:
  *param_2 = (int64_t)pU64_4;
  *(uint8_t *)(param_2 + 1) = uVal_2;
  return param_2;
}

// Unwind@18011c750
void Unwind_18011c750(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x20),0x20);
  return;
}

// func_0x18011c790
uint8_t (*func_0x18011c790(uint64_t param_1,uint8_t (*param_2)[16],uint64_t param_3))[16]
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f4e0) {
    func_0x180672ec0(&DAT_18083f4e0);
    if (DAT_18083f4e0 == -1) {
      DAT_18083f4d8 = (func_ptr_t )func_0x18011c900(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f4e0);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f4f0) {
    func_0x180672ec0(&DAT_18083f4f0);
    if (DAT_18083f4f0 == -1) {
      DAT_18083f4e8 = DAT_18083f4d8;
      _Init_thread_footer(&DAT_18083f4f0);
    }
  }
  *param_2 = ZEXT816(0);
  *(uint64_t *)param_2[1] = 0;
  *(uint64_t *)(param_2[1] + 8) = 0xf;
  (*DAT_18083f4e8)(param_1,param_2,param_3);
  return param_2;
}

// Unwind@18011c8a0
void Unwind_18011c8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@18011c8d0
void Unwind_18011c8d0(void)
{
  func_0x180672f60(&DAT_18083f4e0);
  return;
}

// func_0x18011c900
int64_t func_0x18011c900(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x3e39bed76990fc6) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x634c2dcf1d9561ef) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18011c9a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x634c2dcf1d9561ef);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18011c9ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x634c2dcf1d9561ef);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x7ed94c20U) + -0x20;
  }
LAB_18011c9a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18011c9ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18011c9e0
uint64_t func_0x18011c9e0(uint64_t param_1,uint32_t param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f500) {
    func_0x180672ec0(&DAT_18083f500);
    if (DAT_18083f500 == -1) {
      DAT_18083f4f8 = (func_ptr_t )func_0x18011caa0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f500);
    }
  }
  (*DAT_18083f4f8)(param_1,param_2);
  return param_1;
}

// Unwind@18011ca70
void Unwind_18011ca70(void)
{
  func_0x180672f60(&DAT_18083f500);
  return;
}

// func_0x18011caa0
int64_t func_0x18011caa0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x626d3724de3f1b4) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x4762209f0ea1bc1b) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18011cb44;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x4762209f0ea1bc1b);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18011cb6a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x4762209f0ea1bc1b);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x49c39c85U) + -0x1e;
  }
LAB_18011cb44:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18011cb6a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18011cb80
void func_0x18011cb80(void)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_48 [40];
  uint8_t **local_20;
  uint8_t local_18 [16];
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  local_18 = ZEXT816(0);
  local_20 = &PTR_FUN_1806b5320;
  func_0x18067a120(&local_20,&DAT_180786670);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18011cc00
void func_0x18011cc00(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  if (param_2 == 0) {
    return;
  }
  func_0x18011ccf0(param_2 + 0x78);
  lVal_2 = *(int64_t *)(param_2 + 0x50);
  if (lVal_2 != 0) {
    uVal_4 = *(int64_t *)(param_2 + 0x60) - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) goto LAB_18011cce9;
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_2 + 0x50) = ZEXT816(0);
    *(uint64_t *)(param_2 + 0x60) = 0;
  }
  lVal_2 = *(int64_t *)(param_2 + 0x30);
  if (lVal_2 != 0) {
    uVal_4 = *(int64_t *)(param_2 + 0x40) - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) {
LAB_18011cce9:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_2 + 0x30) = ZEXT816(0);
    *(uint64_t *)(param_2 + 0x40) = 0;
  }
  lVal_2 = *(int64_t *)(param_2 + 8);
  if (lVal_2 != 0) {
    LOCK();
    pInt_1 = (int *)(lVal_2 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if ((*pInt_1 == 0) && (*(int *)(lVal_2 + 8) == 0)) {
      thunk_FUN_180695dd0(lVal_2,0x10);
    }
  }
  thunk_FUN_180695dd0(param_2,0x80);
  return;
}

// func_0x18011ccf0
void func_0x18011ccf0(int64_t *param_1)
{
  int *pInt_1;
  int64_t lVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  lVal_2 = *param_1;
  if (lVal_2 == 0) {
    return;
  }
  func_0x18011ccf0(lVal_2 + 0x78);
  lVal_3 = *(int64_t *)(lVal_2 + 0x50);
  if (lVal_3 != 0) {
    uVal_5 = *(int64_t *)(lVal_2 + 0x60) - lVal_3;
    lVal_4 = lVal_3;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_4)) goto LAB_18011cdd9;
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(lVal_2 + 0x50) = ZEXT816(0);
    *(uint64_t *)(lVal_2 + 0x60) = 0;
  }
  lVal_3 = *(int64_t *)(lVal_2 + 0x30);
  if (lVal_3 != 0) {
    uVal_5 = *(int64_t *)(lVal_2 + 0x40) - lVal_3;
    lVal_4 = lVal_3;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_4)) {
LAB_18011cdd9:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(lVal_2 + 0x30) = ZEXT816(0);
    *(uint64_t *)(lVal_2 + 0x40) = 0;
  }
  lVal_3 = *(int64_t *)(lVal_2 + 8);
  if (lVal_3 != 0) {
    LOCK();
    pInt_1 = (int *)(lVal_3 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if ((*pInt_1 == 0) && (*(int *)(lVal_3 + 8) == 0)) {
      thunk_FUN_180695dd0(lVal_3,0x10);
    }
  }
  thunk_FUN_180695dd0(lVal_2,0x80);
  return;
}

// func_0x18011cf90
uint32_t * func_0x18011cf90(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_2 = func_0x180672de0(0x20);
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

// Unwind@18011d0b0
void Unwind_18011d0b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x18011d0f0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x18011d0f0
void func_0x18011d0f0(int64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  
  pU64_1 = (uint64_t *)*param_1;
  *(uint64_t *)pU64_1[1] = 0;
  pU64_1 = (uint64_t *)*pU64_1;
  while (pU64_1 != (uint64_t *)0x0) {
    pU64_2 = (uint64_t *)*pU64_1;
    thunk_FUN_180695dd0(pU64_1,0x20);
    pU64_1 = pU64_2;
  }
  thunk_FUN_180695dd0(*param_1,0x20);
  return;
}

// func_0x18011d140
/* WARNING: Removing unreachable block (ram,0x00018011d51a) */
/* WARNING: Removing unreachable block (ram,0x00018011d577) */
/* WARNING: Removing unreachable block (ram,0x00018011d524) */
/* WARNING: Removing unreachable block (ram,0x00018011d535) */
/* WARNING: Removing unreachable block (ram,0x00018011d546) */
/* WARNING: Removing unreachable block (ram,0x00018011d550) */
/* WARNING: Removing unreachable block (ram,0x00018011d575) */
/* WARNING: Removing unreachable block (ram,0x00018011d58b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x00018011d51a) */
/* WARNING: Removing unreachable block (ram,0x00018011d577) */
/* WARNING: Removing unreachable block (ram,0x00018011d524) */
/* WARNING: Removing unreachable block (ram,0x00018011d535) */
/* WARNING: Removing unreachable block (ram,0x00018011d546) */
/* WARNING: Removing unreachable block (ram,0x00018011d550) */
/* WARNING: Removing unreachable block (ram,0x00018011d575) */
/* WARNING: Removing unreachable block (ram,0x00018011d58b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18011d140(float *param_1,uint64_t *param_2,uint64_t *param_3)
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
  uint8_t local_68 [8];
  uint64_t *local_60;
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
      if (uVal_4 == 0) goto LAB_18011d237;
    }
    uVal_11 = 0;
    do {
      uVal_12 = (*(byte *)((int64_t)pU64_9 + uVal_11 + uVal_7) ^ uVal_12) * 0x100000001b3;
      uVal_11 = uVal_11 + 1;
    } while (uVal_4 != uVal_11);
  }
LAB_18011d237:
  pU64_10 = *(uint64_t **)(param_1 + 2);
  lVal_5 = (*(uint64_t *)(param_1 + 0xc) & uVal_12) * 0x10;
  pU64_8 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_5);
  local_58 = param_2;
  if (pU64_8 != pU64_10) {
    pU64_1 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_5);
    pU64_10 = pU64_8;
    if (uVal_6 == 0) {
      for (; pU64_10[4] != 0; pU64_10 = (uint64_t *)pU64_10[1]) {
        if (pU64_10 == pU64_1) goto LAB_18011d2d3;
      }
LAB_18011d2c0:
      *local_58 = pU64_10;
      *(uint8_t *)(local_58 + 1) = 0;
      return local_58;
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
        if (iVal_3 == 0) goto LAB_18011d2c0;
      }
      if (pU64_10 == pU64_1) break;
      pU64_10 = (uint64_t *)pU64_10[1];
      uVal_4 = pU64_10[4];
    }
  }
LAB_18011d2d3:
  if (*(int64_t *)(param_1 + 4) == 0x492492492492492) {
    func_0x1806744c0("unordered_map/set too long");
    do {
      invalidInstructionException();
    } while( true );
  }
  local_70 = param_3;
  auArr_17._0_8_ = func_0x18011d600(local_68,param_1 + 2,&DAT_1806b0a10,&local_70,&local_49);
  auArr_17._8_8_ = extraout_XMM0_Qb;
  uVal_6 = *(int64_t *)(param_1 + 4) + 1;
  auArr_15._4_12_ = auArr_17._4_12_;
  if ((int64_t)uVal_6 < 0) {
    fVal_14 = (float)((uint64_t)((uint)uVal_6 & 1) | uVal_6 >> 1);
    auArr_15._0_4_ = fVal_14 + fVal_14;
    fVal_14 = *param_1;
    uVal_6 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_6 < 0) goto LAB_18011d327;
LAB_18011d371:
    if (auArr_15._0_4_ / (float)uVal_6 <= fVal_14) goto LAB_18011d4a8;
  }
  else {
    auArr_15._0_4_ = (float)uVal_6;
    fVal_14 = *param_1;
    uVal_6 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_6) goto LAB_18011d371;
LAB_18011d327:
    fVal_18 = (float)((uint64_t)((uint)uVal_6 & 1) | uVal_6 >> 1);
    if (auArr_15._0_4_ / (fVal_18 + fVal_18) <= fVal_14) goto LAB_18011d4a8;
  }
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
    _Size = local_60[4];
    if ((uint64_t)local_60[5] < 0x10) {
      pU64_8 = local_60 + 2;
      pU64_1 = *(uint64_t **)(lVal_5 + lVal_13);
    }
    else {
      pU64_8 = (uint64_t *)local_60[2];
      pU64_1 = *(uint64_t **)(lVal_5 + lVal_13);
    }
    pU64_10 = pU64_9;
    if (_Size == 0) {
      for (; pU64_10[4] != 0; pU64_10 = (uint64_t *)pU64_10[1]) {
        if (pU64_10 == pU64_1) goto LAB_18011d4a8;
      }
LAB_18011d4a5:
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
          if (iVal_3 == 0) goto LAB_18011d4a5;
        }
        if (pU64_10 == pU64_1) break;
        pU64_10 = (uint64_t *)pU64_10[1];
        sz_2 = pU64_10[4];
      }
    }
  }
LAB_18011d4a8:
  pU64_9 = (uint64_t *)pU64_10[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *local_60 = pU64_10;
  local_60[1] = pU64_9;
  *pU64_9 = local_60;
  pU64_10[1] = local_60;
  lVal_5 = *(int64_t *)(param_1 + 6);
  lVal_13 = (uVal_12 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_5 + lVal_13) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_5 + lVal_13) = local_60;
    *(uint64_t **)(lVal_5 + 8 + lVal_13) = local_60;
  }
  else if (*(uint64_t **)(lVal_5 + lVal_13) == pU64_10) {
    *(uint64_t **)(lVal_5 + lVal_13) = local_60;
  }
  else if (*(uint64_t **)(lVal_5 + 8 + lVal_13) == pU64_9) {
    *(uint64_t **)(lVal_5 + 8 + lVal_13) = local_60;
  }
  *local_58 = local_60;
  *(uint8_t *)(local_58 + 1) = 1;
  return local_58;
}

// Unwind@18011d5c0
void Unwind_18011d5c0(uint64_t param_1,int64_t param_2)
{
  func_0x180114f80(param_2 + 0x30);
  return;
}

// func_0x18011d600
uint64_t * func_0x18011d600(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
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
  lVal_6 = func_0x180672de0(0x38);
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
    *(uint64_t *)(lVal_6 + 0x30) = 0;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_9 = (uint64_t *)(*fnPtr_2)();
  return pU64_9;
}

// Unwind@18011d710
void Unwind_18011d710(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x20) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x38);
  }
  return;
}

// func_0x18011d780
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18011d780(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2ccc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x87;
    param_1[1][1] = param_1[1][1] ^ 0x3b;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x18011d7a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18011d7a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b52e4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b52e0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b52e8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b52ec;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x95355dfd798dc5a3;
    param_1[1][8] = param_1[1][8] ^ 0xa3;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x18011d7d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18011d7d0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2f14;
    uVal_2 = param_1[2] ^ _UNK_1806b2f18;
    uVal_3 = param_1[3] ^ _UNK_1806b2f1c;
    *param_1 = *param_1 ^ _DAT_1806b2f10;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806b52f0,0);
  }
  return;
}

// func_0x18011d820
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18011d820(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2f14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2f10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2f18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2f1c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x2d;
    param_1[1][1] = param_1[1][1] ^ 7;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x18011d840
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t * func_0x18011d840(float *param_1,int64_t *param_2,int *param_3)
{
  func_ptr_t fnPtr_1;
  uint8_t uVal_2;
  int64_t lVal_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t *pU64_8;
  int64_t *pLong_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t *pU64_12;
  float fVal_13;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  float fVal_17;
  
  uVal_10 = ((uint64_t)*(byte *)((int64_t)param_3 + 3) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 2) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 1) ^
           ((uint64_t)*(byte *)param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3;
  lVal_3 = (*(uint64_t *)(param_1 + 0xc) & uVal_10) * 0x10;
  pU64_4 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_3);
  pU64_12 = *(uint64_t **)(param_1 + 2);
  if (pU64_4 != *(uint64_t **)(param_1 + 2)) {
    if (*param_3 != *(int *)(pU64_4 + 2)) {
      do {
        pU64_12 = pU64_4;
        if (pU64_4 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_3)) goto LAB_18011d8e9;
        pU64_4 = (uint64_t *)pU64_4[1];
      } while (*param_3 != *(int *)(pU64_4 + 2));
    }
    uVal_2 = 0;
    goto LAB_18011da98;
  }
LAB_18011d8e9:
  if (*(int64_t *)(param_1 + 4) == 0x7ffffffffffffff) {
    func_0x1806744c0("unordered_map/set too long");
    fnPtr_1 = (func_ptr_t )swi(3);
    pLong_9 = (int64_t *)(*fnPtr_1)();
    return pLong_9;
  }
  pU64_4 = (uint64_t *)func_0x180672de0(0x20);
  auArr_16._8_8_ = extraout_XMM0_Qb;
  auArr_16._0_8_ = extraout_XMM0_Qa;
  *(int *)(pU64_4 + 2) = *param_3;
  pU64_4[3] = 0;
  uVal_5 = *(int64_t *)(param_1 + 4) + 1;
  auArr_14._4_12_ = auArr_16._4_12_;
  if ((int64_t)uVal_5 < 0) {
    fVal_13 = (float)((uint64_t)((uint)uVal_5 & 1) | uVal_5 >> 1);
    auArr_14._0_4_ = fVal_13 + fVal_13;
    fVal_13 = *param_1;
    uVal_5 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_5 < 0) goto LAB_18011d933;
LAB_18011d97d:
    if (fVal_13 < auArr_14._0_4_ / (float)uVal_5) {
LAB_18011d992:
      auArr_15._4_12_ = auArr_14._4_12_;
      auArr_15._0_4_ = auArr_14._0_4_ / fVal_13;
      auArr_16 = roundss(auArr_15,auArr_15,10);
      uVal_6 = (uint64_t)auArr_16._0_4_;
      uVal_6 = (int64_t)(auArr_16._0_4_ - _DAT_1806ae420) & (int64_t)uVal_6 >> 0x3f | uVal_6;
      uVal_7 = 8;
      if (8 < uVal_6) {
        uVal_7 = uVal_6;
      }
      uVal_6 = uVal_5;
      if (uVal_5 < uVal_7) {
        uVal_6 = uVal_5 * 8;
        if (uVal_6 < uVal_7 || uVal_6 - uVal_7 == 0) {
          uVal_6 = uVal_7;
        }
        if (0x1ff < uVal_5) {
          uVal_6 = uVal_7;
        }
      }
      func_0x1801163b0(param_1,uVal_6);
      lVal_3 = (*(uint64_t *)(param_1 + 0xc) & uVal_10) * 0x10;
      pU64_8 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_3);
      pU64_12 = *(uint64_t **)(param_1 + 2);
      if (pU64_8 != *(uint64_t **)(param_1 + 2)) {
        if (*(int *)(pU64_4 + 2) != *(int *)(pU64_8 + 2)) {
          do {
            pU64_12 = pU64_8;
            if (pU64_8 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_3)) goto LAB_18011da46;
            pU64_8 = (uint64_t *)pU64_8[1];
          } while (*(int *)(pU64_4 + 2) != *(int *)(pU64_8 + 2));
        }
        pU64_12 = (uint64_t *)*pU64_8;
      }
    }
  }
  else {
    auArr_14._0_4_ = (float)uVal_5;
    fVal_13 = *param_1;
    uVal_5 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_5) goto LAB_18011d97d;
LAB_18011d933:
    fVal_17 = (float)((uint64_t)((uint)uVal_5 & 1) | uVal_5 >> 1);
    if (fVal_13 < auArr_14._0_4_ / (fVal_17 + fVal_17)) goto LAB_18011d992;
  }
LAB_18011da46:
  pU64_8 = (uint64_t *)pU64_12[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_4 = pU64_12;
  pU64_4[1] = pU64_8;
  *pU64_8 = pU64_4;
  pU64_12[1] = pU64_4;
  lVal_3 = *(int64_t *)(param_1 + 6);
  lVal_11 = (uVal_10 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_3 + lVal_11) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_3 + lVal_11) = pU64_4;
    *(uint64_t **)(lVal_3 + 8 + lVal_11) = pU64_4;
  }
  else {
    if (*(uint64_t **)(lVal_3 + lVal_11) != pU64_12) {
      uVal_2 = 1;
      if (*(uint64_t **)(lVal_3 + 8 + lVal_11) == pU64_8) {
        *(uint64_t **)(lVal_3 + 8 + lVal_11) = pU64_4;
      }
      goto LAB_18011da98;
    }
    *(uint64_t **)(lVal_3 + lVal_11) = pU64_4;
  }
  uVal_2 = 1;
LAB_18011da98:
  *param_2 = (int64_t)pU64_4;
  *(uint8_t *)(param_2 + 1) = uVal_2;
  return param_2;
}

// Unwind@18011dac0
void Unwind_18011dac0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x20);
  return;
}

// func_0x18011db00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18011db00(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5304;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5300;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5308;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b530c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xb5d3957b;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x18011dba0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18011dba0(uint64_t *param_1)
{
  uint *pU64_1;
  uint64_t *pU64_2;
  char *fnPtr_3;
  byte *pU8_4;
  uint8_t uVal_5;
  func_ptr_t fnPtr_6;
  uint uVal_7;
  uint64_t *pU64_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t ***ptr3_U64_12;
  uint64_t *pU64_13;
  uint64_t ****ptr4_U64_14;
  uint64_t ****ptr4_U64_15;
  uint8_t *pU64_16;
  uint8_t *pU64_17;
  uint64_t uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint32_t uVal_25;
  uint64_t in_stack_fffffffffffffc10;
  uint32_t uVal_27;
  uint8_t ***ptr3_U64_26;
  uint uVal_28;
  uint8_t **local_3c8;
  uint64_t *local_3c0;
  uint8_t ***local_390;
  uint8_t **local_388;
  uint64_t *local_380;
  uint8_t ***local_350;
  uint8_t **local_348;
  uint64_t *local_340;
  uint8_t ***local_310;
  uint8_t **local_308;
  uint64_t *local_300;
  uint8_t ***local_2d0;
  uint8_t **local_2c8;
  uint64_t *local_2c0;
  uint8_t ***local_290;
  uint8_t local_288 [56];
  uint64_t local_250;
  uint8_t local_248 [56];
  uint64_t local_210;
  uint8_t local_208 [56];
  uint64_t local_1d0;
  uint8_t local_1c8 [56];
  uint64_t local_190;
  uint8_t local_188 [56];
  uint64_t local_150;
  uint8_t local_148 [56];
  uint64_t local_110;
  uint64_t local_108;
  uint16_t uStack_100;
  uint32_t uStack_fe;
  uint8_t uStack_fa;
  uint8_t uStack_f9;
  uint16_t uStack_f8;
  uint8_t uStack_f6;
  uint16_t uStack_f5;
  uint8_t uStack_f3;
  uint32_t uStack_f2;
  uint32_t uStack_ee;
  uint8_t local_e8 [16];
  uint32_t local_d8;
  uint32_t uStack_d4;
  uint16_t uStack_d0;
  uint16_t uStack_ce;
  uint16_t uStack_cc;
  uint16_t uStack_ca;
  uint8_t local_c8;
  uint8_t uStack_c7;
  uint16_t uStack_c6;
  uint16_t uStack_c4;
  uint16_t uStack_c2;
  uint16_t uStack_c0;
  uint16_t uStack_be;
  uint32_t uStack_bc;
  uint64_t local_b8;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint16_t local_a8;
  uint64_t *local_a0;
  uint64_t ****local_98;
  uint8_t uStack_90;
  uint32_t uStack_8f;
  uint32_t uStack_8b;
  uint32_t uStack_87;
  uint32_t uStack_83;
  undefined7 uStack_7f;
  uint8_t local_76;
  uint8_t local_75;
  uint8_t local_74;
  uint8_t local_73;
  uint8_t local_72;
  uint8_t local_71;
  uint8_t local_70;
  uint8_t local_6f;
  uint8_t local_6e;
  uint8_t local_6d;
  uint8_t local_6c;
  uint8_t local_6b;
  uint8_t local_6a;
  uint8_t local_69;
  uint8_t local_68;
  uint8_t local_67;
  uint8_t local_66;
  uint8_t local_65;
  uint8_t local_64;
  uint8_t local_63;
  uint8_t local_62;
  uint8_t local_61;
  uint64_t local_60;
  
  uVal_27 = (uint32_t)((uint64_t)in_stack_fffffffffffffc10 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_e8._8_8_ = _UNK_1806b5748;
  local_e8._0_8_ = _DAT_1806b5740;
  local_a0 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3900) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x3900) = 1;
    func_0x18007d150(lVal_11 + 0x38ed,local_e8);
    func_0x180673140(&LAB_18012b250);
  }
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_11 + 0x38ed);
  if (*(char *)(lVal_11 + 0x38fd) == '\x01') {
    uVal_28 = *(uint *)(lVal_11 + 0x38f1) ^ _UNK_1806b2c94;
    uVal_19 = *(uint *)(lVal_11 + 0x38f5) ^ _UNK_1806b2c98;
    uVal_20 = *(uint *)(lVal_11 + 0x38f9) ^ _UNK_1806b2c9c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2c90;
    *(uint *)(lVal_11 + 0x38f1) = uVal_28;
    *(uint *)(lVal_11 + 0x38f5) = uVal_19;
    *(uint *)(lVal_11 + 0x38f9) = uVal_20;
    *(uint8_t *)(lVal_11 + 0x38fd) = 0;
  }
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  uStack_cc = 0;
  uStack_ca = 0;
  local_e8 = (uint8_t  [16])0x0;
  sz_9 = strlen((char *)pU64_1);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_180120751:
    local_61 = 1;
    func_0x18007ba70();
LAB_18012075e:
    local_6f = 1;
    func_0x18007ba70();
LAB_18012076b:
    local_63 = 1;
    func_0x18007ba70();
LAB_180120778:
    local_62 = 1;
    func_0x18007ba70();
LAB_180120785:
    local_64 = 1;
    func_0x18007ba70();
LAB_180120792:
    local_70 = 1;
    func_0x18007ba70();
LAB_18012079f:
    local_66 = 1;
    func_0x18007ba70();
LAB_1801207ac:
    local_65 = 1;
    func_0x18007ba70();
LAB_1801207b9:
    local_71 = 1;
    func_0x18007ba70();
LAB_1801207c6:
    local_67 = 1;
    func_0x18007ba70();
LAB_1801207d3:
    local_68 = 1;
    func_0x18007ba70();
LAB_1801207e0:
    local_72 = 1;
    func_0x18007ba70();
LAB_1801207ed:
    local_6a = 1;
    func_0x18007ba70();
LAB_1801207fa:
    local_69 = 1;
    func_0x18007ba70();
LAB_180120807:
    local_73 = 1;
    func_0x18007ba70();
LAB_180120814:
    local_6b = 1;
    func_0x18007ba70();
LAB_180120821:
    local_74 = 1;
    func_0x18007ba70();
LAB_18012082e:
    local_6c = 1;
    func_0x18007ba70();
LAB_18012083b:
    local_6d = 1;
    func_0x18007ba70();
LAB_180120848:
    local_75 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_17 = local_e8;
      uVal_18 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,pU64_1,sz_9);
    pU64_17[sz_9] = 0;
    pU64_17 = local_e8;
    func_0x1801c2ba0(local_a0,0,0,pU64_17);
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    *local_a0 = &PTR_LAB_1806b5610;
    pU64_13 = local_a0 + 0x10;
    *(uint32_t *)(local_a0 + 0x10) = 0x3f000000;
    *(uint16_t *)((int64_t)local_a0 + 0x84) = 0x100;
    *(uint8_t *)((int64_t)local_a0 + 0x86) = 1;
    *(uint32_t *)(local_a0 + 0x11) = 0x41800000;
    *(uint16_t *)((int64_t)local_a0 + 0x8c) = 1;
    *(uint32_t *)(local_a0 + 0x12) = 0x3d4ccccd;
    *(uint64_t *)((int64_t)local_a0 + 0x94) = 0;
    *(uint64_t *)((int64_t)local_a0 + 0x99) = 0;
    *(uint32_t *)((int64_t)local_a0 + 0xa4) = 0x3f800000;
    *(uint8_t *)(local_a0 + 0x15) = 0;
    *(uint32_t *)((int64_t)local_a0 + 0xac) = 0x3f000000;
    *(uint8_t *)(local_a0 + 0x16) = 0;
    local_250 = 0;
    uVal_25 = DAT_1806aeae4;
    if (DAT_18083f540 != (uint64_t *)0x0) {
      local_250 = (**(func_ptr_t *)*DAT_18083f540)(DAT_18083f540,local_288);
      uVal_25 = *(uint32_t *)pU64_13;
    }
    local_c8 = (uint8_t)_DAT_1806b5770;
    uStack_c7 = (uint8_t)((uint)_DAT_1806b5770 >> 8);
    uStack_c6 = (uint16_t)((uint)_DAT_1806b5770 >> 0x10);
    uStack_c4 = (uint16_t)_UNK_1806b5774;
    uStack_c2 = (uint16_t)((uint)_UNK_1806b5774 >> 0x10);
    uStack_c0 = (uint16_t)_UNK_1806b5778;
    uStack_be = (uint16_t)((uint)_UNK_1806b5778 >> 0x10);
    uStack_bc = _UNK_1806b577c;
    local_d8 = _DAT_1806b5760;
    uStack_d4 = _UNK_1806b5764;
    uStack_d0 = (uint16_t)_UNK_1806b5768;
    uStack_ce = (uint16_t)((uint)_UNK_1806b5768 >> 0x10);
    uStack_cc = (uint16_t)_UNK_1806b576c;
    uStack_ca = (uint16_t)((uint)_UNK_1806b576c >> 0x10);
    local_e8._8_8_ = _UNK_1806b5758;
    local_e8._0_8_ = _DAT_1806b5750;
    local_b8 = CONCAT44(local_b8._4_4_,0xa9d8741a);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3938) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3938) = 1;
      func_0x18012b270(lVal_11 + 0x3901,local_e8);
      func_0x180673140(&LAB_18012b3f0);
    }
    uVal_7 = _UNK_1806b4e8c;
    uVal_20 = _UNK_1806b4e88;
    uVal_19 = _UNK_1806b4e84;
    uVal_28 = _DAT_1806b4e80;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x3901);
    if (*(char *)(lVal_11 + 0x3935) == '\x01') {
      uVal_21 = *(uint *)(lVal_11 + 0x3905) ^ _UNK_1806b4e84;
      uVal_22 = *(uint *)(lVal_11 + 0x3909) ^ _UNK_1806b4e88;
      uVal_23 = *(uint *)(lVal_11 + 0x390d) ^ _UNK_1806b4e8c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b4e80;
      *(uint *)(lVal_11 + 0x3905) = uVal_21;
      *(uint *)(lVal_11 + 0x3909) = uVal_22;
      *(uint *)(lVal_11 + 0x390d) = uVal_23;
      *(uint *)(lVal_11 + 0x3911) = *(uint *)(lVal_11 + 0x3911) ^ uVal_28;
      *(uint *)(lVal_11 + 0x3915) = *(uint *)(lVal_11 + 0x3915) ^ uVal_19;
      *(uint *)(lVal_11 + 0x3919) = *(uint *)(lVal_11 + 0x3919) ^ uVal_20;
      *(uint *)(lVal_11 + 0x391d) = *(uint *)(lVal_11 + 0x391d) ^ uVal_7;
      *(uint *)(lVal_11 + 0x3921) = *(uint *)(lVal_11 + 0x3921) ^ uVal_28;
      *(uint *)(lVal_11 + 0x3925) = *(uint *)(lVal_11 + 0x3925) ^ uVal_19;
      *(uint *)(lVal_11 + 0x3929) = *(uint *)(lVal_11 + 0x3929) ^ uVal_20;
      *(uint *)(lVal_11 + 0x392d) = *(uint *)(lVal_11 + 0x392d) ^ uVal_7;
      *(uint *)(lVal_11 + 0x3931) = *(uint *)(lVal_11 + 0x3931) ^ 0xa9f11975;
      *(uint8_t *)(lVal_11 + 0x3935) = 0;
    }
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_180120751;
    if (sz_9 < 0x10) {
      ptr4_U64_15 = &local_98;
      uVal_18 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_61 = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_61 = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,pU64_1,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x394c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x394c) = 1;
      *(uint64_t *)(lVal_11 + 0x3940) = 0x2fe56207cc836d26;
      *(uint16_t *)(lVal_11 + 0x3948) = 0x175;
      func_0x180673140(&LAB_18012b430);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x3940);
    if (*(char *)(lVal_11 + 0x3949) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47910569a9f11975;
      *(byte *)(lVal_11 + 0x3948) = *(byte *)(lVal_11 + 0x3948) ^ 0x75;
      *(uint8_t *)(lVal_11 + 0x3949) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_18012075e;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6f = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_6f = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    uVal_28 = 0x3f800000;
    pU64_17 = local_e8;
    ptr4_U64_15 = &local_98;
    func_0x1801cd2e0(local_a0,pU64_17,ptr4_U64_15,pU64_13,uVal_25,CONCAT44(uVal_27,0x3c23d70a),0x3f800000,
                  local_288,0);
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    local_210 = 0;
    if (DAT_18083f540 != (uint64_t *)0x0) {
      local_210 = (**(func_ptr_t *)*DAT_18083f540)(DAT_18083f540,local_248);
    }
    pU64_16 = (uint8_t *)((int64_t)local_a0 + 0x84);
    uVal_5 = *pU64_16;
    local_b8 = CONCAT44(_UNK_1806b57b8,_DAT_1806b57b4);
    uStack_b0 = _UNK_1806b57bc;
    uStack_ac = _UNK_1806b57c0;
    local_c8 = (uint8_t)_DAT_1806b57a4;
    uStack_c7 = (uint8_t)((uint)_DAT_1806b57a4 >> 8);
    uStack_c6 = (uint16_t)((uint)_DAT_1806b57a4 >> 0x10);
    uStack_c4 = (uint16_t)_UNK_1806b57a8;
    uStack_c2 = (uint16_t)((uint)_UNK_1806b57a8 >> 0x10);
    uStack_c0 = (uint16_t)_UNK_1806b57ac;
    uStack_be = (uint16_t)((uint)_UNK_1806b57ac >> 0x10);
    uStack_bc = _UNK_1806b57b0;
    local_d8 = _DAT_1806b5794;
    uStack_d4 = _UNK_1806b5798;
    uStack_d0 = (uint16_t)_UNK_1806b579c;
    uStack_ce = (uint16_t)((uint)_UNK_1806b579c >> 0x10);
    uStack_cc = (uint16_t)_UNK_1806b57a0;
    uStack_ca = (uint16_t)((uint)_UNK_1806b57a0 >> 0x10);
    local_e8._8_8_ = _UNK_1806b578c;
    local_e8._0_8_ = _DAT_1806b5784;
    local_a8 = 0x5510;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3990) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3990) = 1;
      func_0x18012b460(lVal_11 + 0x394d,local_e8);
      func_0x180673140(&LAB_18012b640);
    }
    uVal_21 = _UNK_1806b2d6c;
    uVal_7 = _UNK_1806b2d68;
    uVal_20 = _UNK_1806b2d64;
    uVal_19 = _DAT_1806b2d60;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x394d);
    if (*(char *)(lVal_11 + 0x398f) == '\x01') {
      uVal_22 = *(uint *)(lVal_11 + 0x3951) ^ _UNK_1806b2d64;
      uVal_23 = *(uint *)(lVal_11 + 0x3955) ^ _UNK_1806b2d68;
      uVal_24 = *(uint *)(lVal_11 + 0x3959) ^ _UNK_1806b2d6c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d60;
      *(uint *)(lVal_11 + 0x3951) = uVal_22;
      *(uint *)(lVal_11 + 0x3955) = uVal_23;
      *(uint *)(lVal_11 + 0x3959) = uVal_24;
      *(uint *)(lVal_11 + 0x395d) = *(uint *)(lVal_11 + 0x395d) ^ uVal_19;
      *(uint *)(lVal_11 + 0x3961) = *(uint *)(lVal_11 + 0x3961) ^ uVal_20;
      *(uint *)(lVal_11 + 0x3965) = *(uint *)(lVal_11 + 0x3965) ^ uVal_7;
      *(uint *)(lVal_11 + 0x3969) = *(uint *)(lVal_11 + 0x3969) ^ uVal_21;
      *(uint *)(lVal_11 + 0x396d) = *(uint *)(lVal_11 + 0x396d) ^ uVal_19;
      *(uint *)(lVal_11 + 0x3971) = *(uint *)(lVal_11 + 0x3971) ^ uVal_20;
      *(uint *)(lVal_11 + 0x3975) = *(uint *)(lVal_11 + 0x3975) ^ uVal_7;
      *(uint *)(lVal_11 + 0x3979) = *(uint *)(lVal_11 + 0x3979) ^ uVal_21;
      *(uint *)(lVal_11 + 0x397d) = *(uint *)(lVal_11 + 0x397d) ^ uVal_19;
      *(uint *)(lVal_11 + 0x3981) = *(uint *)(lVal_11 + 0x3981) ^ uVal_20;
      *(uint *)(lVal_11 + 0x3985) = *(uint *)(lVal_11 + 0x3985) ^ uVal_7;
      *(uint *)(lVal_11 + 0x3989) = *(uint *)(lVal_11 + 0x3989) ^ uVal_21;
      *(ushort *)(lVal_11 + 0x398d) = *(ushort *)(lVal_11 + 0x398d) ^ 0x5575;
      *(uint8_t *)(lVal_11 + 0x398f) = 0;
    }
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_18012076b;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_63 = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_63 = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,pU64_1,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    local_108 = _DAT_1806b57c6;
    uStack_100 = (uint16_t)_UNK_1806b57ce;
    uStack_fe._0_3_ = (undefined3)((uint64_t)_UNK_1806b57ce >> 0x10);
    uStack_fe = CONCAT13(0xf7,(undefined3)uStack_fe);
    uStack_fa = 0x1f;
    uStack_f9 = 0xb8;
    uStack_f8 = 0x3212;
    uStack_f6 = 0x21;
    uStack_f5 = 0x37b0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x39a8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x39a8) = 1;
      func_0x18007cd50(lVal_11 + 0x3991,&local_108);
      func_0x180673140(&LAB_18012b680);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3991);
    func_0x18012bd20(fnPtr_3);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_180120778;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_62 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_62 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,fnPtr_3,sz_9);
    pU64_17[sz_9] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_17 = local_e8;
    ptr4_U64_15 = &local_98;
    func_0x1801ccd70(local_a0,pU64_17,ptr4_U64_15,pU64_16,uVal_5,local_248,uVal_28);
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    local_1d0 = 0;
    if (DAT_18083f540 != (uint64_t *)0x0) {
      local_1d0 = (**(func_ptr_t *)*DAT_18083f540)(DAT_18083f540,local_208);
    }
    pU64_16 = (uint8_t *)((int64_t)local_a0 + 0x85);
    uVal_5 = *pU64_16;
    local_98 = _DAT_1806b57db;
    uStack_90 = (uint8_t)_UNK_1806b57e3;
    uStack_8f = (uint32_t)((uint64_t)_UNK_1806b57e3 >> 8);
    uStack_8b = 0x1e86dac9;
    uStack_87 = 0xb1a0132c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x39c0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x39c0) = 1;
      func_0x18007cd50(lVal_11 + 0x39a9,&local_98);
      func_0x180673140(&LAB_18012b6b0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x39a9);
    func_0x18012bd50(fnPtr_3);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_180120785;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_64 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_64 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,fnPtr_3,sz_9);
    pU64_17[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x39d4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x39d4) = 1;
      *(uint8_t *)(lVal_11 + 0x39d2) = 1;
      *(uint64_t *)(lVal_11 + 0x39c8) = 0x86dcc7d0aa142b32;
      *(uint16_t *)(lVal_11 + 0x39d0) = 0x451d;
      func_0x180673140(&LAB_18012b6e0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x39c8);
    if (*(char *)(lVal_11 + 0x39d2) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xe9b5b3b1c77d4573;
      *(byte *)(lVal_11 + 0x39d0) = *(byte *)(lVal_11 + 0x39d0) ^ 0x73;
      *(byte *)(lVal_11 + 0x39d1) = *(byte *)(lVal_11 + 0x39d1) ^ 0x45;
      *(uint8_t *)(lVal_11 + 0x39d2) = 0;
    }
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180120792;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_70 = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_70 = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    ptr4_U64_15 = &local_98;
    pU64_17 = local_e8;
    func_0x1801ccd70(local_a0,ptr4_U64_15,pU64_17,pU64_16,uVal_5,local_208,uVal_28);
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_3c8 = &PTR_LAB_1806b5930;
    local_3c0 = local_a0;
    local_390 = &local_3c8;
    uVal_5 = *(uint8_t *)((int64_t)local_a0 + 0x86);
    local_d8 = _DAT_1806b5800;
    uStack_d4 = _UNK_1806b5804;
    uStack_d0 = (uint16_t)_UNK_1806b5808;
    uStack_ce = (uint16_t)((uint)_UNK_1806b5808 >> 0x10);
    uStack_cc = (uint16_t)_UNK_1806b580c;
    uStack_ca = (uint16_t)((uint)_UNK_1806b580c >> 0x10);
    local_e8._8_8_ = _UNK_1806b57f8;
    local_e8._0_8_ = _DAT_1806b57f0;
    local_c8 = 0x87;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x39f8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x39f8) = 1;
      func_0x180086ce0(lVal_11 + 0x39d5,local_e8);
      func_0x180673140(&LAB_18012b710);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x39d5);
    func_0x18012bd80(fnPtr_3);
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18012079f;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_66 = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_66 = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,fnPtr_3,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    local_108 = _DAT_1806b5811;
    uStack_100 = (uint16_t)_UNK_1806b5819;
    uStack_fe._0_3_ = (undefined3)((uint64_t)_UNK_1806b5819 >> 0x10);
    uStack_fe = CONCAT13(0xa9,(undefined3)uStack_fe);
    uStack_fa = 0xc2;
    uStack_f9 = 0x34;
    uStack_f8 = 0xa5e6;
    uStack_f6 = 0xcf;
    uStack_f5 = 0xa5f6;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3a10) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3a10) = 1;
      func_0x18007cd50(lVal_11 + 0x39f9,&local_108);
      func_0x180673140(&LAB_18012b740);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x39f9);
    func_0x1800f3650(fnPtr_3);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_1801207ac;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_65 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_65 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    pU64_13 = local_a0;
    lVal_11 = (int64_t)local_a0 + 0x86;
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,fnPtr_3,sz_9);
    pU64_17[sz_9] = 0;
    ptr3_U64_26 = &local_3c8;
    pU64_17 = local_e8;
    ptr4_U64_15 = &local_98;
    func_0x1801ccd70(pU64_13,pU64_17,ptr4_U64_15,lVal_11,uVal_5,ptr3_U64_26,uVal_28 & 0xffffff00);
    uVal_27 = (uint32_t)((uint64_t)ptr3_U64_26 >> 0x20);
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    local_388 = &PTR_LAB_1806b5930;
    local_380 = local_a0;
    local_350 = &local_388;
    uVal_25 = *(uint32_t *)(local_a0 + 0x11);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3a14) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3a14) = 1;
      *(uint16_t *)(lVal_11 + 0x3a11) = 0x10d;
      func_0x180673140(&LAB_18012b770);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_11 + 0x3a11);
    if (*(char *)(lVal_11 + 0x3a12) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0xd;
      *(uint8_t *)(lVal_11 + 0x3a12) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_4);
    if ((int64_t)sz_9 < 0) goto LAB_1801207b9;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_71 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_71 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,pU8_4,sz_9);
    pU64_17[sz_9] = 0;
    local_108 = _DAT_1806b5826;
    uStack_100 = (uint16_t)_UNK_1806b582e;
    uStack_fe = (uint32_t)((uint64_t)_UNK_1806b582e >> 0x10);
    uStack_fa = (uint8_t)((uint64_t)_UNK_1806b582e >> 0x30);
    uStack_f9 = (uint8_t)((uint64_t)_UNK_1806b582e >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3a28) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3a28) = 1;
      func_0x18007d150(lVal_11 + 0x3a15,&local_108);
      func_0x180673140(&LAB_18012b790);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x3a15);
    if (*(char *)(lVal_11 + 0x3a25) == '\x01') {
      uVal_28 = *(uint *)(lVal_11 + 0x3a19) ^ _UNK_1806b54c4;
      uVal_19 = *(uint *)(lVal_11 + 0x3a1d) ^ _UNK_1806b54c8;
      uVal_20 = *(uint *)(lVal_11 + 0x3a21) ^ _UNK_1806b54cc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b54c0;
      *(uint *)(lVal_11 + 0x3a19) = uVal_28;
      *(uint *)(lVal_11 + 0x3a1d) = uVal_19;
      *(uint *)(lVal_11 + 0x3a21) = uVal_20;
      *(uint8_t *)(lVal_11 + 0x3a25) = 0;
    }
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_1801207c6;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_67 = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_67 = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    pU64_8 = local_a0;
    pU64_13 = local_a0 + 0x11;
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,pU64_1,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    uVal_28 = 0x41e00000;
    ptr4_U64_15 = &local_98;
    pU64_17 = local_e8;
    func_0x1801cd2e0(pU64_8,ptr4_U64_15,pU64_17,pU64_13,uVal_25,CONCAT44(uVal_27,0x40e00000),0x41e00000,
                  &local_388,0);
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_190 = 0;
    if (DAT_18083f540 != (uint64_t *)0x0) {
      local_190 = (**(func_ptr_t *)*DAT_18083f540)(DAT_18083f540,local_1c8);
    }
    pU64_16 = (uint8_t *)((int64_t)local_a0 + 0x8c);
    uVal_5 = *pU64_16;
    local_c8 = (uint8_t)_UNK_1806b5856;
    uStack_c7 = (uint8_t)((ushort)_UNK_1806b5856 >> 8);
    uStack_c6 = (uint16_t)_UNK_1806b5858;
    uStack_c4 = (uint16_t)((uint)_UNK_1806b5858 >> 0x10);
    uStack_c2 = (uint16_t)_UNK_1806b585c;
    uStack_c0 = (uint16_t)((uint)_UNK_1806b585c >> 0x10);
    local_d8 = _DAT_1806b5846;
    uStack_d4 = _UNK_1806b584a;
    uStack_d0 = _UNK_1806b584e;
    uStack_ce = _DAT_1806b5850;
    uStack_cc = _UNK_1806b5852;
    uStack_ca = _UNK_1806b5854;
    local_e8._8_8_ = _UNK_1806b583e;
    local_e8._0_8_ = _DAT_1806b5836;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3a54) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3a54) = 1;
      func_0x18012b7b0(lVal_11 + 0x3a29,local_e8);
      func_0x180673140(&LAB_18012b8e0);
    }
    uVal_21 = _UNK_1806ae4dc;
    uVal_7 = _UNK_1806ae4d8;
    uVal_20 = _UNK_1806ae4d4;
    uVal_19 = _DAT_1806ae4d0;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x3a29);
    if (*(char *)(lVal_11 + 0x3a53) == '\x01') {
      uVal_22 = *(uint *)(lVal_11 + 0x3a2d) ^ _UNK_1806ae4d4;
      uVal_23 = *(uint *)(lVal_11 + 0x3a31) ^ _UNK_1806ae4d8;
      uVal_24 = *(uint *)(lVal_11 + 0x3a35) ^ _UNK_1806ae4dc;
      *pU64_1 = *pU64_1 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_11 + 0x3a2d) = uVal_22;
      *(uint *)(lVal_11 + 0x3a31) = uVal_23;
      *(uint *)(lVal_11 + 0x3a35) = uVal_24;
      *(uint *)(lVal_11 + 0x3a39) = *(uint *)(lVal_11 + 0x3a39) ^ uVal_19;
      *(uint *)(lVal_11 + 0x3a3d) = *(uint *)(lVal_11 + 0x3a3d) ^ uVal_20;
      *(uint *)(lVal_11 + 0x3a41) = *(uint *)(lVal_11 + 0x3a41) ^ uVal_7;
      *(uint *)(lVal_11 + 0x3a45) = *(uint *)(lVal_11 + 0x3a45) ^ uVal_21;
      *(uint64_t *)(lVal_11 + 0x3a49) = *(uint64_t *)(lVal_11 + 0x3a49) ^ SUB168(_DAT_1806b54d0,0);
      *(byte *)(lVal_11 + 0x3a51) = *(byte *)(lVal_11 + 0x3a51) ^ 0xc5;
      *(byte *)(lVal_11 + 0x3a52) = *(byte *)(lVal_11 + 0x3a52) ^ 0x73;
      *(uint8_t *)(lVal_11 + 0x3a53) = 0;
    }
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_1801207d3;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_68 = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_68 = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,pU64_1,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3a60) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3a60) = 1;
      *(uint64_t *)(lVal_11 + 0x3a58) = 0x1c7d3edcea71096;
      func_0x180673140(&LAB_18012b910);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x3a58);
    if (*(char *)(lVal_11 + 0x3a5f) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_11 + 0x3a5d) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_11 + 0x3a5c) << 0x20) ^ SUB168(_DAT_1806ae220,0);
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_1801207e0;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_72 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_72 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,pU64_2,sz_9);
    pU64_17[sz_9] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_17 = local_e8;
    ptr4_U64_15 = &local_98;
    func_0x1801ccd70(local_a0,pU64_17,ptr4_U64_15,pU64_16,uVal_5,local_1c8,uVal_28);
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    local_348 = &PTR_LAB_1806b5960;
    local_340 = local_a0;
    local_310 = &local_348;
    uVal_5 = *(uint8_t *)((int64_t)local_a0 + 0x8d);
    local_c8 = (uint8_t)_DAT_1806b5880;
    uStack_c7 = (uint8_t)((uint)_DAT_1806b5880 >> 8);
    uStack_c6 = (uint16_t)((uint)_DAT_1806b5880 >> 0x10);
    uStack_c4 = (uint16_t)_UNK_1806b5884;
    uStack_c2 = (uint16_t)((uint)_UNK_1806b5884 >> 0x10);
    uStack_c0 = (uint16_t)_UNK_1806b5888;
    uStack_be = (uint16_t)((uint)_UNK_1806b5888 >> 0x10);
    uStack_bc = _UNK_1806b588c;
    local_d8 = _DAT_1806b5870;
    uStack_d4 = _UNK_1806b5874;
    uStack_d0 = (uint16_t)_UNK_1806b5878;
    uStack_ce = (uint16_t)((uint)_UNK_1806b5878 >> 0x10);
    uStack_cc = (uint16_t)_UNK_1806b587c;
    uStack_ca = (uint16_t)((uint)_UNK_1806b587c >> 0x10);
    local_e8._8_8_ = _UNK_1806b5868;
    local_e8._0_8_ = _DAT_1806b5860;
    local_b8 = 0x8992455029c5de47;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3a9c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3a9c) = 1;
      func_0x18012b940(lVal_11 + 0x3a61,local_e8);
      func_0x180673140(&LAB_18012bad0);
    }
    uVal_21 = _UNK_1806b2cbc;
    uVal_7 = _UNK_1806b2cb8;
    uVal_20 = _UNK_1806b2cb4;
    uVal_19 = _DAT_1806b2cb0;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x3a61);
    if (*(char *)(lVal_11 + 0x3a99) == '\x01') {
      uVal_22 = *(uint *)(lVal_11 + 0x3a65) ^ _UNK_1806b2cb4;
      uVal_23 = *(uint *)(lVal_11 + 0x3a69) ^ _UNK_1806b2cb8;
      uVal_24 = *(uint *)(lVal_11 + 0x3a6d) ^ _UNK_1806b2cbc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_11 + 0x3a65) = uVal_22;
      *(uint *)(lVal_11 + 0x3a69) = uVal_23;
      *(uint *)(lVal_11 + 0x3a6d) = uVal_24;
      *(uint *)(lVal_11 + 0x3a71) = *(uint *)(lVal_11 + 0x3a71) ^ uVal_19;
      *(uint *)(lVal_11 + 0x3a75) = *(uint *)(lVal_11 + 0x3a75) ^ uVal_20;
      *(uint *)(lVal_11 + 0x3a79) = *(uint *)(lVal_11 + 0x3a79) ^ uVal_7;
      *(uint *)(lVal_11 + 0x3a7d) = *(uint *)(lVal_11 + 0x3a7d) ^ uVal_21;
      *(uint *)(lVal_11 + 0x3a81) = *(uint *)(lVal_11 + 0x3a81) ^ uVal_19;
      *(uint *)(lVal_11 + 0x3a85) = *(uint *)(lVal_11 + 0x3a85) ^ uVal_20;
      *(uint *)(lVal_11 + 0x3a89) = *(uint *)(lVal_11 + 0x3a89) ^ uVal_7;
      *(uint *)(lVal_11 + 0x3a8d) = *(uint *)(lVal_11 + 0x3a8d) ^ uVal_21;
      *(uint64_t *)(lVal_11 + 0x3a91) = *(uint64_t *)(lVal_11 + 0x3a91) ^ SUB168(_DAT_1806b54e0,0);
      *(uint8_t *)(lVal_11 + 0x3a99) = 0;
    }
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_1801207ed;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6a = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_6a = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,pU64_1,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    local_108 = _DAT_1806b5898;
    uStack_100 = (uint16_t)_UNK_1806b58a0;
    uStack_fe._0_3_ = (undefined3)((uint64_t)_UNK_1806b58a0 >> 0x10);
    uStack_fe = CONCAT13(0xb,(undefined3)uStack_fe);
    uStack_fa = 0x86;
    uStack_f9 = 0xea;
    uStack_f8 = 0xde47;
    uStack_f6 = 0xc5;
    uStack_f5 = 0x3929;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3ab4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3ab4) = 1;
      func_0x18007cd50(lVal_11 + 0x3a9d,&local_108);
      func_0x180673140(&LAB_18012bb10);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3a9d);
    func_0x18012bde0(fnPtr_3);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_1801207fa;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_69 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_69 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    pU64_13 = local_a0;
    lVal_11 = (int64_t)local_a0 + 0x8d;
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,fnPtr_3,sz_9);
    pU64_17[sz_9] = 0;
    ptr3_U64_26 = &local_348;
    pU64_17 = local_e8;
    ptr4_U64_15 = &local_98;
    func_0x1801ccd70(pU64_13,pU64_17,ptr4_U64_15,lVal_11,uVal_5,ptr3_U64_26,uVal_28 & 0xffffff00);
    uVal_27 = (uint32_t)((uint64_t)ptr3_U64_26 >> 0x20);
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    local_308 = &PTR_LAB_1806b5960;
    local_300 = local_a0;
    local_2d0 = &local_308;
    uVal_25 = *(uint32_t *)(local_a0 + 0x12);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3ab8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3ab8) = 1;
      *(uint16_t *)(lVal_11 + 0x3ab5) = 0x11d;
      func_0x180673140(&LAB_18012bb40);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_11 + 0x3ab5);
    if (*(char *)(lVal_11 + 0x3ab6) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x1d;
      *(uint8_t *)(lVal_11 + 0x3ab6) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_4);
    if ((int64_t)sz_9 < 0) goto LAB_180120807;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_73 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_73 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,pU8_4,sz_9);
    pU64_17[sz_9] = 0;
    local_108 = _DAT_1806b58ad;
    uStack_100 = (uint16_t)_UNK_1806b58b5;
    uStack_fe = (uint32_t)((uint64_t)_UNK_1806b58b5 >> 0x10);
    uStack_fa = (uint8_t)((uint64_t)_UNK_1806b58b5 >> 0x30);
    uStack_f9 = 0xd2;
    uStack_f8 = 0xe69;
    uStack_f6 = 0x4d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3ad0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3ad0) = 1;
      func_0x18007cb80(lVal_11 + 0x3ab9,&local_108);
      func_0x180673140(&LAB_18012bb60);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3ab9);
    func_0x18012be40(fnPtr_3);
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_180120814;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6b = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_6b = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    pU64_8 = local_a0;
    pU64_13 = local_a0 + 0x12;
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,fnPtr_3,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    uVal_28 = 0x3e800000;
    ptr4_U64_15 = &local_98;
    pU64_17 = local_e8;
    func_0x1801cd2e0(pU64_8,ptr4_U64_15,pU64_17,pU64_13,uVal_25,CONCAT44(uVal_27,0x3c23d70a),0x3e800000,
                  &local_308,0);
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_150 = 0;
    if (DAT_18083f540 != (uint64_t *)0x0) {
      local_150 = (**(func_ptr_t *)*DAT_18083f540)(DAT_18083f540,local_188);
    }
    pU64_13 = local_a0 + 0x15;
    uVal_5 = *(uint8_t *)pU64_13;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3ad4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3ad4) = 1;
      *(uint16_t *)(lVal_11 + 0x3ad1) = 0x12d;
      func_0x180673140(&LAB_18012bb90);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_11 + 0x3ad1);
    if (*(char *)(lVal_11 + 0x3ad2) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x2d;
      *(uint8_t *)(lVal_11 + 0x3ad2) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_4);
    if ((int64_t)sz_9 < 0) goto LAB_180120821;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_74 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_74 = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,pU8_4,sz_9);
    pU64_17[sz_9] = 0;
    uStack_f8 = _UNK_1806b58d0;
    uStack_f6 = (uint8_t)_UNK_1806b58d2;
    uStack_f5 = (uint16_t)((uint)_UNK_1806b58d2 >> 8);
    uStack_f3 = (uint8_t)((uint)_UNK_1806b58d2 >> 0x18);
    uStack_f2 = _UNK_1806b58d6;
    local_108 = _DAT_1806b58c0;
    uStack_100 = _UNK_1806b58c8;
    uStack_fe = _DAT_1806b58ca;
    uStack_fa = (uint8_t)_UNK_1806b58ce;
    uStack_f9 = (uint8_t)((ushort)_UNK_1806b58ce >> 8);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3af0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3af0) = 1;
      func_0x1800d9840(lVal_11 + 0x3ad5,&local_108);
      func_0x180673140(&LAB_18012bbb0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3ad5);
    func_0x18012be80(fnPtr_3);
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18012082e;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6c = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_6c = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,fnPtr_3,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    ptr4_U64_15 = &local_98;
    pU64_17 = local_e8;
    func_0x1801ccd70(local_a0,ptr4_U64_15,pU64_17,pU64_13,uVal_5,local_188,uVal_28);
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_110 = 0;
    if (DAT_18083f540 != (uint64_t *)0x0) {
      local_110 = (**(func_ptr_t *)*DAT_18083f540)(DAT_18083f540,local_148);
    }
    pU64_13 = local_a0 + 0x14;
    uVal_5 = *(uint8_t *)pU64_13;
    uStack_87 = _UNK_1806b58eb;
    uStack_83 = _UNK_1806b58ef;
    local_98 = _DAT_1806b58da;
    uStack_90 = UNK_1806b58e2;
    uStack_8f = _DAT_1806b58e3;
    uStack_8b = _UNK_1806b58e7;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3b0c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3b0c) = 1;
      func_0x1800904a0(lVal_11 + 0x3af1,&local_98);
      func_0x180673140(&LAB_18012bbe0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3af1);
    func_0x18012beb0(fnPtr_3);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_3);
    if ((int64_t)sz_9 < 0) goto LAB_18012083b;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_6d = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_6d = 1;
        lVal_11 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_11;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_9;
    uStack_d4 = (uint32_t)(sz_9 >> 0x20);
    uStack_d0 = (uint16_t)uVal_18;
    uStack_ce = (uint16_t)(uVal_18 >> 0x10);
    uStack_cc = (uint16_t)(uVal_18 >> 0x20);
    uStack_ca = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(pU64_17,fnPtr_3,sz_9);
    pU64_17[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3b20) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3b20) = 1;
      *(uint8_t *)(lVal_11 + 0x3b1e) = 1;
      *(uint64_t *)(lVal_11 + 0x3b10) = 0x3c492107bca8e416;
      *(uint32_t *)(lVal_11 + 0x3b18) = 0xa1a2e424;
      *(uint16_t *)(lVal_11 + 0x3b1c) = 0x4912;
      func_0x180673140(&LAB_18012bc10);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0x3b10);
    if (*(char *)(lVal_11 + 0x3b1e) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x5f694973d3c78945;
      *(uint *)(lVal_11 + 0x3b18) = *(uint *)(lVal_11 + 0x3b18) ^ 0xd3c78945;
      *(byte *)(lVal_11 + 0x3b1c) = *(byte *)(lVal_11 + 0x3b1c) ^ 0x73;
      *(byte *)(lVal_11 + 0x3b1d) = *(byte *)(lVal_11 + 0x3b1d) ^ 0x49;
      *(uint8_t *)(lVal_11 + 0x3b1e) = 0;
    }
    uStack_87 = 0;
    uStack_83 = 0;
    uStack_7f = 0;
    local_98 = (uint64_t ****)0x0;
    uStack_90 = 0;
    uStack_8f = 0;
    uStack_8b = 0;
    sz_9 = strlen((char *)pU64_2);
    if ((int64_t)sz_9 < 0) goto LAB_180120848;
    uVal_18 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_75 = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_98 = ptr4_U64_15;
      }
      else {
        local_75 = 1;
        ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_12;
        local_98 = ptr4_U64_15;
      }
    }
    uStack_8b._3_1_ = (uint8_t)sz_9;
    uStack_87 = (uint32_t)(sz_9 >> 8);
    uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
    uStack_83._3_1_ = (uint8_t)uVal_18;
    uStack_7f = (undefined7)(uVal_18 >> 8);
    func_0x1806aa960(ptr4_U64_15,pU64_2,sz_9);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
    pU64_17 = local_148;
    ptr4_U64_15 = &local_98;
    pU64_16 = local_e8;
    func_0x1801ccd70(local_a0,ptr4_U64_15,pU64_16,pU64_13,uVal_5,pU64_17,uVal_28 & 0xffffff00);
    uVal_27 = (uint32_t)((uint64_t)pU64_17 >> 0x20);
    uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      ptr4_U64_14 = local_98;
      if (0xfff < uVal_10) {
        ptr4_U64_14 = (uint64_t ****)local_98[-1];
        if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_10);
    }
    uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
    if (0xf < uVal_18) {
      uVal_10 = uVal_18 + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_18012074a;
        uVal_10 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    local_2c8 = &PTR_LAB_1806b5990;
    local_2c0 = local_a0;
    local_290 = &local_2c8;
    uVal_25 = *(uint32_t *)((int64_t)local_a0 + 0xa4);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3b24) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3b24) = 1;
      *(uint16_t *)(lVal_11 + 0x3b21) = 0x135;
      func_0x180673140(&LAB_18012bc40);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_11 + 0x3b21);
    if (*(char *)(lVal_11 + 0x3b22) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x35;
      *(uint8_t *)(lVal_11 + 0x3b22) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_ce = 0;
    uStack_cc = 0;
    uStack_ca = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU8_4);
    if (-1 < (int64_t)sz_9) {
      uVal_18 = 0xf;
      if (0xf < sz_9) {
        uVal_10 = sz_9 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_10) {
          uVal_18 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          local_76 = 1;
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
        }
        else {
          local_76 = 1;
          lVal_11 = func_0x180672de0(uVal_18 + 0x28);
          pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_16 + -8) = lVal_11;
        }
        local_e8._0_8_ = pU64_16;
      }
      local_d8 = (uint32_t)sz_9;
      uStack_d4 = (uint32_t)(sz_9 >> 0x20);
      uStack_d0 = (uint16_t)uVal_18;
      uStack_ce = (uint16_t)(uVal_18 >> 0x10);
      uStack_cc = (uint16_t)(uVal_18 >> 0x20);
      uStack_ca = (uint16_t)(uVal_18 >> 0x30);
      func_0x1806aa960(pU64_16,pU8_4,sz_9);
      pU64_16[sz_9] = 0;
      uStack_f8 = _UNK_1806b5903;
      uStack_f6 = (uint8_t)_UNK_1806b5905;
      uStack_f5 = (uint16_t)((uint)_UNK_1806b5905 >> 8);
      uStack_f3 = (uint8_t)((uint)_UNK_1806b5905 >> 0x18);
      uStack_f2 = _UNK_1806b5909;
      uStack_ee = _UNK_1806b590d;
      local_108 = _DAT_1806b58f3;
      uStack_100 = (uint16_t)_UNK_1806b58fb;
      uStack_fe = (uint32_t)((uint6)_UNK_1806b58fb >> 0x10);
      uStack_fa = (uint8_t)_DAT_1806b5901;
      uStack_f9 = (uint8_t)((ushort)_DAT_1806b5901 >> 8);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3b44) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x3b44) = 1;
        func_0x18008fa60(lVal_11 + 0x3b25,&local_108);
        func_0x180673140(&LAB_18012bc60);
      }
      fnPtr_3 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3b25)
      ;
      func_0x18012bee0(fnPtr_3);
      local_98 = (uint64_t ****)0x0;
      uStack_90 = 0;
      uStack_8f = 0;
      uStack_8b = uStack_8b & 0xff000000;
      sz_9 = strlen(fnPtr_3);
      if (-1 < (int64_t)sz_9) {
        uVal_18 = 0xf;
        if (0xf < sz_9) {
          uVal_10 = sz_9 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_10) {
            uVal_18 = uVal_10;
          }
          if (uVal_10 < 0xfff) {
            local_6e = 1;
            ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
            local_98 = ptr4_U64_15;
          }
          else {
            local_6e = 1;
            ptr3_U64_12 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
            ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_12 + 0x27U & 0xffffffffffffffe0);
            ptr4_U64_15[-1] = ptr3_U64_12;
            local_98 = ptr4_U64_15;
          }
        }
        pU64_13 = local_a0;
        lVal_11 = (int64_t)local_a0 + 0xa4;
        uStack_8b._3_1_ = (uint8_t)sz_9;
        uStack_87 = (uint32_t)(sz_9 >> 8);
        uStack_83._0_3_ = (undefined3)(sz_9 >> 0x28);
        uStack_83._3_1_ = (uint8_t)uVal_18;
        uStack_7f = (undefined7)(uVal_18 >> 8);
        func_0x1806aa960(ptr4_U64_15,fnPtr_3,sz_9);
        *(uint8_t *)((int64_t)ptr4_U64_15 + sz_9) = 0;
        func_0x1801cd2e0(pU64_13,&local_98,local_e8,lVal_11,uVal_25,CONCAT44(uVal_27,0x3dcccccd),
                      0x40a00000,&local_2c8,0);
        uVal_18 = CONCAT71(uStack_7f,uStack_83._3_1_);
        if (0xf < uVal_18) {
          uVal_10 = uVal_18 + 1;
          ptr4_U64_15 = local_98;
          if (0xfff < uVal_10) {
            ptr4_U64_15 = (uint64_t ****)local_98[-1];
            if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr4_U64_15)))
            goto LAB_18012074a;
            uVal_10 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_15,uVal_10);
        }
        uVal_18 = CONCAT26(uStack_ca,CONCAT24(uStack_cc,CONCAT22(uStack_ce,uStack_d0)));
        if (0xf < uVal_18) {
          uVal_10 = uVal_18 + 1;
          lVal_11 = local_e8._0_8_;
          if (0xfff < uVal_10) {
            lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) {
LAB_18012074a:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_10 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_10);
        }
        return local_a0;
      }
      goto LAB_180120862;
    }
  }
  local_76 = 1;
  func_0x18007ba70();
LAB_180120862:
  local_6e = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_13 = (uint64_t *)(*fnPtr_6)();
  return pU64_13;
}

// Unwind@180120870
void Unwind_180120870(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@1801208e0
void Unwind_1801208e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3938) = 0;
  *(uint8_t *)(param_2 + 0x3b7) = 1;
  return;
}

// Unwind@180120940
void Unwind_180120940(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x208);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@1801209b0
void Unwind_1801209b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3990) = 0;
  *(uint8_t *)(param_2 + 0x3b5) = 1;
  return;
}

// Unwind@180120a10
void Unwind_180120a10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x248);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@180120a80
void Unwind_180120a80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x39c0) = 0;
  *(uint8_t *)(param_2 + 0x3b4) = 1;
  return;
}

// Unwind@180120ae0
void Unwind_180120ae0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x288);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x250));
    *(uint64_t *)(param_2 + 0x288) = 0;
  }
  return;
}

// Unwind@180120b50
void Unwind_180120b50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3a54) = 0;
  *(uint8_t *)(param_2 + 0x3b0) = 1;
  return;
}

// Unwind@180120bb0
void Unwind_180120bb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x290));
    *(uint64_t *)(param_2 + 0x2c8) = 0;
  }
  return;
}

// Unwind@180120c20
void Unwind_180120c20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x308);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2d0));
    *(uint64_t *)(param_2 + 0x308) = 0;
  }
  return;
}

// Unwind@180120c90
void Unwind_180120c90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3b0c) = 0;
  *(uint8_t *)(param_2 + 0x3ab) = 1;
  return;
}

// Unwind@180120cf0
void Unwind_180120cf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x330);
  return;
}

// Unwind@180120d40
void Unwind_180120d40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3a9) = 0;
  return;
}

// Unwind@180120d90
void Unwind_180120d90(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a9);
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3b7) = uVal_1;
  return;
}

// Unwind@180120de0
void Unwind_180120de0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3b7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@180120e50
void Unwind_180120e50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3b6) = 0;
  return;
}

// Unwind@180120ea0
void Unwind_180120ea0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3b6);
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3b5) = uVal_1;
  return;
}

// Unwind@180120ef0
void Unwind_180120ef0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3b5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x208), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@180120f60
void Unwind_180120f60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3a8) = 0;
  return;
}

// Unwind@180120fb0
void Unwind_180120fb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a8);
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3b4) = uVal_1;
  return;
}

// Unwind@180121000
void Unwind_180121000(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3b4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x248), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@180121070
void Unwind_180121070(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3b3) = 0;
  return;
}

// Unwind@1801210c0
void Unwind_1801210c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3b3);
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3b2) = uVal_1;
  return;
}

// Unwind@180121110
void Unwind_180121110(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3b2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180121180
void Unwind_180121180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3b1) = 0;
  return;
}

// Unwind@1801211d0
void Unwind_1801211d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3b1);
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3a7) = uVal_1;
  return;
}

// Unwind@180121220
void Unwind_180121220(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180121290
void Unwind_180121290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3a6) = 0;
  return;
}

// Unwind@1801212e0
void Unwind_1801212e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a6);
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3b0) = uVal_1;
  return;
}

// Unwind@180121330
void Unwind_180121330(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3b0) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x288), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x250));
    *(uint64_t *)(param_2 + 0x288) = 0;
  }
  return;
}

// Unwind@1801213a0
void Unwind_1801213a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3af) = 0;
  return;
}

// Unwind@1801213f0
void Unwind_1801213f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3af);
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3ae) = uVal_1;
  return;
}

// Unwind@180121440
void Unwind_180121440(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3ae) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1801214b0
void Unwind_1801214b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3ad) = 0;
  return;
}

// Unwind@180121500
void Unwind_180121500(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3ad);
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3a5) = uVal_1;
  return;
}

// Unwind@180121550
void Unwind_180121550(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a5) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1801215c0
void Unwind_1801215c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3ac) = 0;
  return;
}

// Unwind@180121610
void Unwind_180121610(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3ac);
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3a4) = uVal_1;
  return;
}

// Unwind@180121660
void Unwind_180121660(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x290));
    *(uint64_t *)(param_2 + 0x2c8) = 0;
  }
  return;
}

// Unwind@1801216d0
void Unwind_1801216d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3a3) = 0;
  return;
}

// Unwind@180121720
void Unwind_180121720(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a3);
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3ab) = uVal_1;
  return;
}

// Unwind@180121770
void Unwind_180121770(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3ab) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x308), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2d0));
    *(uint64_t *)(param_2 + 0x308) = 0;
  }
  return;
}

// Unwind@1801217e0
void Unwind_1801217e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x380);
  *(uint8_t *)(param_2 + 0x3aa) = 0;
  return;
}

// Unwind@180121830
void Unwind_180121830(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3aa);
  func_0x180001e70(param_2 + 0x330);
  *(uint8_t *)(param_2 + 0x3a2) = uVal_1;
  return;
}

// Unwind@180121880
void Unwind_180121880(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@1801218f0
void Unwind_1801218f0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x378));
  return;
}

// Unwind@180121940
void Unwind_180121940(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3900) = 0;
  return;
}

// Unwind@1801219a0
void Unwind_1801219a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x39a8) = 0;
  *(uint8_t *)(param_2 + 0x3b6) = 1;
  return;
}

// Unwind@180121a00
void Unwind_180121a00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x39f8) = 0;
  *(uint8_t *)(param_2 + 0x3b2) = 1;
  return;
}

// Unwind@180121a60
void Unwind_180121a60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3a10) = 0;
  *(uint8_t *)(param_2 + 0x3b3) = 1;
  return;
}

// Unwind@180121ac0
void Unwind_180121ac0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3a28) = 0;
  *(uint8_t *)(param_2 + 0x3b1) = 1;
  return;
}

// Unwind@180121b20
void Unwind_180121b20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3a9c) = 0;
  *(uint8_t *)(param_2 + 0x3ae) = 1;
  return;
}

// Unwind@180121b80
void Unwind_180121b80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3ab4) = 0;
  *(uint8_t *)(param_2 + 0x3af) = 1;
  return;
}

// Unwind@180121be0
void Unwind_180121be0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3ad0) = 0;
  *(uint8_t *)(param_2 + 0x3ad) = 1;
  return;
}

// Unwind@180121c40
void Unwind_180121c40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3af0) = 0;
  *(uint8_t *)(param_2 + 0x3ac) = 1;
  return;
}

// Unwind@180121ca0
void Unwind_180121ca0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3b44) = 0;
  *(uint8_t *)(param_2 + 0x3aa) = 1;
  return;
}

// func_0x1801221f0
uint64_t func_0x1801221f0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1d8);
}

// func_0x180122250
uint64_t func_0x180122250(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x218);
}

// Unwind@180123510
void Unwind_180123510(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180123570
void Unwind_180123570(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801235d0
void Unwind_1801235d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@180123630
void Unwind_180123630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@180123690
void Unwind_180123690(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801236f0
void Unwind_1801236f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801240d0
void Unwind_1801240d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180124110
void Unwind_180124110(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180124150
void Unwind_180124150(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180124820
void Unwind_180124820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180124860
void Unwind_180124860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1801248a0
void Unwind_1801248a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180124f50
void Unwind_180124f50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180124f90
void Unwind_180124f90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180124fd0
void Unwind_180124fd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x180125010
uint32_t func_0x180125010(int64_t param_1)
{
  return *(uint32_t *)(param_1 + 0x198);
}

// func_0x180125070
uint16_t func_0x180125070(int64_t param_1)
{
  return *(uint16_t *)(param_1 + 0x19c);
}

// func_0x1801250d0
int64_t func_0x1801250d0(int64_t param_1)
{
  return param_1 + 0x1e0;
}

// func_0x180125130
int64_t func_0x180125130(int64_t param_1)
{
  return param_1 + 0x300;
}

// func_0x180125190
uint8_t func_0x180125190(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0x356);
}

// func_0x1801251f0
uint8_t func_0x1801251f0(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0x357);
}

// func_0x180125250
uint8_t func_0x180125250(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0x358);
}

// func_0x1801252b0
int64_t func_0x1801252b0(int64_t param_1)
{
  return param_1 + 0x40c;
}

// func_0x180125310
int64_t func_0x180125310(int64_t param_1)
{
  return param_1 + 0x434;
}

// func_0x180125370
void func_0x180125370(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x0001801253c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x360))(param_1,0x6c,0x291a1d4c846799f9);
  return;
}

// func_0x1801253d0
byte func_0x1801253d0(int64_t param_1)
{
  uint uVal_1;
  uint uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  
  lVal_3 = *(int64_t *)(param_1 + 0x10);
  uVal_1 = *(uint *)(param_1 + 0x18);
  pLong_7 = (int64_t *)
           (*(int64_t *)(lVal_3 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_3 + 0x50) - *(int64_t *)(lVal_3 + 0x48)) >> 3) - 1U
           & 0xc67426f3) * 8);
  lVal_4 = *(int64_t *)(lVal_3 + 0x68);
  do {
    if (*pLong_7 == -1) {
      return 0;
    }
    lVal_5 = *pLong_7 * 0x20;
    pLong_7 = (int64_t *)(lVal_4 + lVal_5);
  } while (*(int *)(lVal_4 + 8 + lVal_5) != -0x398bd90d);
  if ((*(int64_t *)(lVal_3 + 0x70) != lVal_4 + lVal_5) &&
     (lVal_3 = *(int64_t *)(lVal_4 + lVal_5 + 0x10), lVal_3 != 0)) {
    uVal_6 = (uint64_t)((uVal_1 & 0x3ffff) >> 0xb);
    if ((uVal_6 < (uint64_t)(*(int64_t *)(lVal_3 + 0x10) - *(int64_t *)(lVal_3 + 8) >> 3)) &&
       (((lVal_4 = *(int64_t *)(*(int64_t *)(lVal_3 + 8) + uVal_6 * 8), lVal_4 != 0 &&
         (uVal_2 = *(uint *)(lVal_4 + (uint64_t)(uVal_1 & 0x7ff) * 4),
         (uVal_1 & 0xfffc0000 ^ uVal_2) < 0x3ffff)) &&
        (lVal_3 = *(int64_t *)(*(int64_t *)(lVal_3 + 0x50) + (uint64_t)(uVal_2 >> 4 & 0x3ff8)),
        lVal_3 != 0)))) {
      return (*(byte *)(lVal_3 + (uint64_t)(uVal_2 & 0x7f) * 0x18) & 0x20) >> 5;
    }
  }
  return 0;
}

// func_0x1801254b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1801254b0(int64_t param_1)
{
  uint8_t (*_Str)[16];
  uint8_t auArr_1 [16];
  int64_t lVal_2;
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t *pU64_7;
  uint64_t uVal_8;
  uint8_t local_88 [16];
  size_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x269) == '\0') {
    local_68 = CONCAT44(_UNK_1806b5915,_DAT_1806b5911);
    uStack_60 = _UNK_1806b5919;
    uStack_5c = _UNK_1806b591d;
    local_58 = 0x77;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3b7c) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x3b7c) = 1;
      func_0x18007d2b0(lVal_5 + 0x3b69,&local_68);
      func_0x180673140(&LAB_18012bcf0);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_5 + 0x3b69);
    if (*(char *)(lVal_5 + 0x3b7a) == '\x01') {
      auArr_1._4_4_ = *(uint *)(lVal_5 + 0x3b6d) ^ _UNK_1806b5504;
      auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b5500;
      auArr_1._8_4_ = *(uint *)(lVal_5 + 0x3b71) ^ _UNK_1806b5508;
      auArr_1._12_4_ = *(uint *)(lVal_5 + 0x3b75) ^ _UNK_1806b550c;
      *_Str = auArr_1;
      *(byte *)(lVal_5 + 0x3b79) = *(byte *)(lVal_5 + 0x3b79) ^ 0x77;
      *(uint8_t *)(lVal_5 + 0x3b7a) = 0;
    }
    local_88 = ZEXT816(0);
    sz_3 = strlen((char *)_Str);
    if ((int64_t)sz_3 < 0) {
      func_0x18007ba70();
LAB_180125786:
      do {
        invalidInstructionException();
      } while( true );
    }
    if (sz_3 < 0x10) {
      pU64_7 = local_88;
      uVal_8 = 0xf;
    }
    else {
      uVal_4 = sz_3 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_4) {
        uVal_8 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pU64_7 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_8 + 0x28);
        pU64_7 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_7 + -8) = lVal_5;
      }
      local_88._0_8_ = pU64_7;
    }
    local_78 = sz_3;
    local_70 = uVal_8;
    func_0x1806aa960(pU64_7,_Str,sz_3);
    pU64_7[sz_3] = 0;
    func_0x180034bf0(&local_68,local_88);
    lVal_5 = func_0x1801257d0(param_1,&local_68);
    if (0xf < local_48) {
      lVal_2 = CONCAT44(uStack_5c,uStack_60);
      uVal_8 = local_48 + 1;
      lVal_6 = lVal_2;
      if (0xfff < uVal_8) {
        lVal_6 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_6)) goto LAB_180125786;
        uVal_8 = local_48 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_8);
    }
    local_50 = 0;
    local_48 = 0xf;
    uStack_60 = uStack_60 & 0xffffff00;
    if (0xf < local_70) {
      uVal_8 = local_70 + 1;
      lVal_6 = local_88._0_8_;
      if (0xfff < uVal_8) {
        lVal_6 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_6)) goto LAB_180125786;
        uVal_8 = local_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_8);
    }
    if (lVal_5 != 0) {
      return CONCAT71(SUB167(ZEXT816(0x2906ba8e40bc8343) * ZEXT816(0x7d1de65fdb757c63),1),
                      0.0 < *(float *)(lVal_5 + 0x7c));
    }
  }
  return 0;
}

// Unwind@180125790
void Unwind_180125790(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3b7c) = 0;
  return;
}

// func_0x1801257d0
int64_t func_0x1801257d0(int64_t param_1,int64_t *param_2)
{
  uint uVal_1;
  uint uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  
  lVal_3 = *(int64_t *)(param_1 + 0x10);
  uVal_1 = *(uint *)(param_1 + 0x18);
  pLong_7 = (int64_t *)
           (*(int64_t *)(lVal_3 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_3 + 0x50) - *(int64_t *)(lVal_3 + 0x48)) >> 3) - 1U
           & 0xfd3b0613) * 8);
  lVal_4 = *(int64_t *)(lVal_3 + 0x68);
  do {
    if (*pLong_7 == -1) {
      return 0;
    }
    lVal_6 = *pLong_7 * 0x20;
    pLong_7 = (int64_t *)(lVal_4 + lVal_6);
  } while (*(int *)(lVal_4 + 8 + lVal_6) != -0x2c4f9ed);
  if ((*(int64_t *)(lVal_3 + 0x70) != lVal_4 + lVal_6) &&
     (lVal_3 = *(int64_t *)(lVal_4 + lVal_6 + 0x10), lVal_3 != 0)) {
    uVal_5 = (uint64_t)((uVal_1 & 0x3ffff) >> 0xb);
    if ((uVal_5 < (uint64_t)(*(int64_t *)(lVal_3 + 0x10) - *(int64_t *)(lVal_3 + 8) >> 3)) &&
       (((lVal_4 = *(int64_t *)(*(int64_t *)(lVal_3 + 8) + uVal_5 * 8), lVal_4 != 0 &&
         (uVal_2 = *(uint *)(lVal_4 + (uint64_t)(uVal_1 & 0x7ff) * 4),
         (uVal_1 & 0xfffc0000 ^ uVal_2) < 0x3ffff)) &&
        (lVal_3 = *(int64_t *)(*(int64_t *)(lVal_3 + 0x50) + (uint64_t)(uVal_2 >> 4 & 0x3ff8)),
        lVal_3 != 0)))) {
      uVal_5 = (uint64_t)((uVal_2 & 0x7f) * 0x50);
      lVal_4 = *(int64_t *)(lVal_3 + 0x18 + uVal_5);
      lVal_3 = *(int64_t *)(lVal_3 + 0x20 + uVal_5);
      if (lVal_4 != lVal_3) {
        do {
          if (*(int64_t *)(*(int64_t *)(lVal_4 + 8) + 8) == *param_2) {
            return lVal_4;
          }
          lVal_4 = lVal_4 + 0x80;
        } while (lVal_4 != lVal_3);
        return 0;
      }
    }
  }
  return 0;
}

// func_0x1801258e0
int func_0x1801258e0(int64_t param_1)
{
  if (*(short **)(param_1 + 0x418) != (short *)0x0) {
    return (int)**(short **)(param_1 + 0x418);
  }
  return 0;
}

// func_0x180125950
int64_t func_0x180125950(int64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = func_0x180104e70(param_1 + 0x128,0x81);
  if (ch_1 == '\0') {
    *(uint8_t *)(param_2 + 0xc) = 0;
  }
  else {
    func_0x180104f70(param_1 + 0x128,param_2,0x7f);
  }
  return param_2;
}

// func_0x180125aa0
uint32_t func_0x180125aa0(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  lVal_1 = *(int64_t *)(param_1 + 0x10);
  uVal_3 = *(uint *)(param_1 + 0x18);
  pLong_6 = (int64_t *)
           (*(int64_t *)(lVal_1 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_1 + 0x50) - *(int64_t *)(lVal_1 + 0x48)) >> 3) - 1U
           & 0xf95d258f) * 8);
  lVal_2 = *(int64_t *)(lVal_1 + 0x68);
  do {
    if (*pLong_6 == -1) {
      return 0;
    }
    lVal_4 = *pLong_6 * 0x20;
    pLong_6 = (int64_t *)(lVal_2 + lVal_4);
  } while (*(int *)(lVal_2 + 8 + lVal_4) != -0x6a2da71);
  if ((*(int64_t *)(lVal_1 + 0x70) != lVal_2 + lVal_4) &&
     (lVal_1 = *(int64_t *)(lVal_2 + lVal_4 + 0x10), lVal_1 != 0)) {
    uVal_5 = (uint64_t)((uVal_3 & 0x3ffff) >> 0xb);
    if ((uVal_5 < (uint64_t)(*(int64_t *)(lVal_1 + 0x10) - *(int64_t *)(lVal_1 + 8) >> 3)) &&
       (lVal_1 = *(int64_t *)(*(int64_t *)(lVal_1 + 8) + uVal_5 * 8), lVal_1 != 0)) {
      uVal_3 = uVal_3 & 0xfffc0000 ^ *(uint *)(lVal_1 + (uint64_t)(uVal_3 & 0x7ff) * 4);
      return CONCAT31((int3)(uVal_3 >> 8),uVal_3 < 0x3ffff);
    }
  }
  return 0;
}

// func_0x180125b50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180125b50(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  uint uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint8_t auArr_5 [16];
  uint uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  int64_t *pLong_9;
  uint64_t extraout_XMM0_Qb;
  uint8_t auArr_10 [16];
  uint32_t uVal_11;
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  uint8_t in_XMM2 [16];
  uint8_t auArr_15 [16];
  int iVal_16;
  int iVal_17;
  uint64_t local_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint local_5c;
  uint64_t local_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint64_t local_40;
  uint8_t auArr_14 [16];
  
  lVal_3 = *(int64_t *)(param_1 + 0x10);
  uVal_2 = *(uint *)(param_1 + 0x18);
  pLong_9 = (int64_t *)
           (*(int64_t *)(lVal_3 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_3 + 0x50) - *(int64_t *)(lVal_3 + 0x48)) >> 3) - 1U
           & 0xa2e26a5a) * 8);
  lVal_4 = *(int64_t *)(lVal_3 + 0x68);
  do {
    if (*pLong_9 == -1) goto LAB_180125e15;
    lVal_7 = *pLong_9 * 0x20;
    pLong_9 = (int64_t *)(lVal_4 + lVal_7);
  } while (*(int *)(lVal_4 + 8 + lVal_7) != -0x5d1d95a6);
  if ((*(int64_t *)(lVal_3 + 0x70) != lVal_4 + lVal_7) &&
     (lVal_3 = *(int64_t *)(lVal_4 + lVal_7 + 0x10), lVal_3 != 0)) {
    uVal_8 = (uint64_t)((uVal_2 & 0x3ffff) >> 0xb);
    if (((uVal_8 < (uint64_t)(*(int64_t *)(lVal_3 + 0x10) - *(int64_t *)(lVal_3 + 8) >> 3)) &&
        (((lVal_4 = *(int64_t *)(*(int64_t *)(lVal_3 + 8) + uVal_8 * 8), lVal_4 != 0 &&
          (uVal_6 = *(uint *)(lVal_4 + (uint64_t)(uVal_2 & 0x7ff) * 4),
          (uVal_2 & 0xfffc0000 ^ uVal_6) < 0x3ffff)) &&
         (lVal_3 = *(int64_t *)(*(int64_t *)(lVal_3 + 0x50) + (uint64_t)(uVal_6 >> 4 & 0x3ff8)),
         lVal_3 != 0)))) &&
       (pLong_9 = *(int64_t **)(lVal_3 + (uint64_t)((uVal_6 & 0x7f) << 4)), pLong_9 != (int64_t *)0x0
       )) {
      uVal_8 = **(uint64_t **)(param_1 + 0x218);
      uVal_2 = *(uint *)(*(uint64_t **)(param_1 + 0x218) + 1);
      local_5c = *(uint *)(*(uint64_t **)(param_1 + 0x220) + 1);
      uVal_1 = **(uint64_t **)(param_1 + 0x220);
      uVal_11 = (uint32_t)uVal_1;
      auArr_10._4_4_ = (uint32_t)((uint64_t)uVal_1 >> 0x20);
      auArr_10._0_4_ = auArr_10._4_4_;
      auArr_10._8_4_ = uVal_11;
      auArr_10._12_4_ = auArr_10._4_4_;
      auArr_12 = insertps(auArr_10,ZEXT416(local_5c),0x10);
      fStack_68 = auArr_12._4_4_ + _UNK_1806b5514;
      fStack_64 = auArr_12._8_4_ + _UNK_1806b5518;
      fStack_60 = auArr_12._12_4_ + _UNK_1806b551c;
      local_70 = CONCAT44(auArr_12._0_4_ + _DAT_1806b5510,uVal_11);
      local_58 = 0;
      fStack_50 = 0.0;
      fStack_4c = 0.0;
      fStack_48 = 0.0;
      fStack_44 = 0.0;
      local_40 = 0x28d5b2b9e3612609;
      auArr_12._0_8_ = (**(func_ptr_t *)(*pLong_9 + 0xb8))(pLong_9,&local_58,&local_70,0,1,0);
      auArr_12._8_8_ = extraout_XMM0_Qb;
      auArr_13._8_8_ = 0;
      auArr_13._0_8_ = local_58;
      auArr_12 = roundps(auArr_12,auArr_13,9);
      *param_2 = CONCAT44((int)auArr_12._4_4_,(int)auArr_12._0_4_);
      auArr_12 = roundss(in_XMM2,ZEXT416((uint)fStack_50),9);
      *(int *)(param_2 + 1) = (int)auArr_12._0_4_;
      iVal_16 = -(uint)((float)local_58 < fStack_4c);
      iVal_17 = -(uint)((float)(local_58 >> 0x20) < fStack_48);
      auArr_15._4_4_ = iVal_17;
      auArr_15._0_4_ = iVal_16;
      auArr_15._8_4_ = iVal_17;
      auArr_15._12_4_ = iVal_17;
      auArr_14._8_8_ = auArr_15._8_8_;
      auArr_14._4_4_ = iVal_16;
      auArr_14._0_4_ = iVal_16;
      uVal_6 = movmskpd((int)auArr_12._0_4_,auArr_14);
      if ((((uVal_6 & 1) != 0) && ((byte)((byte)uVal_6 >> 1) != 0)) && (fStack_50 < fStack_44)) {
        return;
      }
      auArr_12 = roundss(ZEXT816(0),ZEXT416(uVal_2),9);
      auArr_5._8_8_ = 0;
      auArr_5._0_8_ = uVal_8;
      auArr_10 = roundps(auArr_12,auArr_5,9);
      *param_2 = CONCAT44((int)auArr_10._4_4_,(int)auArr_10._0_4_);
      *(int *)(param_2 + 1) = (int)auArr_12._0_4_;
      return;
    }
  }
LAB_180125e15:
  *(uint32_t *)(param_2 + 1) = 0;
  *param_2 = 0;
  return;
}

// func_0x180125e40
uint64_t func_0x180125e40(int64_t param_1)
{
  uint uVal_1;
  uint uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  
  lVal_3 = *(int64_t *)(param_1 + 0x10);
  uVal_1 = *(uint *)(param_1 + 0x18);
  pLong_7 = (int64_t *)
           (*(int64_t *)(lVal_3 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_3 + 0x50) - *(int64_t *)(lVal_3 + 0x48)) >> 3) - 1U
           & 0xa2e26a5a) * 8);
  lVal_4 = *(int64_t *)(lVal_3 + 0x68);
  do {
    if (*pLong_7 == -1) {
      return 0;
    }
    lVal_6 = *pLong_7 * 0x20;
    pLong_7 = (int64_t *)(lVal_4 + lVal_6);
  } while (*(int *)(lVal_4 + 8 + lVal_6) != -0x5d1d95a6);
  if ((*(int64_t *)(lVal_3 + 0x70) != lVal_4 + lVal_6) &&
     (lVal_3 = *(int64_t *)(lVal_4 + lVal_6 + 0x10), lVal_3 != 0)) {
    uVal_5 = (uint64_t)((uVal_1 & 0x3ffff) >> 0xb);
    if ((uVal_5 < (uint64_t)(*(int64_t *)(lVal_3 + 0x10) - *(int64_t *)(lVal_3 + 8) >> 3)) &&
       (((lVal_4 = *(int64_t *)(*(int64_t *)(lVal_3 + 8) + uVal_5 * 8), lVal_4 != 0 &&
         (uVal_2 = *(uint *)(lVal_4 + (uint64_t)(uVal_1 & 0x7ff) * 4),
         (uVal_1 & 0xfffc0000 ^ uVal_2) < 0x3ffff)) &&
        (lVal_3 = *(int64_t *)(*(int64_t *)(lVal_3 + 0x50) + (uint64_t)(uVal_2 >> 4 & 0x3ff8)),
        lVal_3 != 0)))) {
      return *(uint64_t *)(lVal_3 + (uint64_t)((uVal_2 & 0x7f) << 4));
    }
  }
  return 0;
}

// func_0x180125f20
uint64_t func_0x180125f20(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x220);
}

// func_0x180125f80
uint64_t func_0x180125f80(void)
{
  return 0x187a80d09ffac6b6;
}

// func_0x180126030
uint64_t func_0x180126030(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1c8);
}

// func_0x180126090
uint64_t func_0x180126090(int64_t param_1)
{
  return **(uint64_t **)(param_1 + 0xab0);
}

// func_0x1801260f0
uint64_t func_0x1801260f0(int64_t param_1)
{
  uint uVal_1;
  uint uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  
  lVal_3 = *(int64_t *)(param_1 + 0x10);
  uVal_1 = *(uint *)(param_1 + 0x18);
  pLong_8 = (int64_t *)
           (*(int64_t *)(lVal_3 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_3 + 0x50) - *(int64_t *)(lVal_3 + 0x48)) >> 3) - 1U
           & 0xb06141a9) * 8);
  lVal_4 = *(int64_t *)(lVal_3 + 0x68);
  do {
    if (*pLong_8 == -1) {
      return 0;
    }
    lVal_6 = *pLong_8 * 0x20;
    pLong_8 = (int64_t *)(lVal_4 + lVal_6);
  } while (*(int *)(lVal_4 + 8 + lVal_6) != -0x4f9ebe57);
  if ((*(int64_t *)(lVal_3 + 0x70) != lVal_4 + lVal_6) &&
     (lVal_3 = *(int64_t *)(lVal_4 + lVal_6 + 0x10), lVal_3 != 0)) {
    uVal_7 = (uint64_t)((uVal_1 & 0x3ffff) >> 0xb);
    if (((uVal_7 < (uint64_t)(*(int64_t *)(lVal_3 + 0x10) - *(int64_t *)(lVal_3 + 8) >> 3)) &&
        (((lVal_4 = *(int64_t *)(*(int64_t *)(lVal_3 + 8) + uVal_7 * 8), lVal_4 != 0 &&
          (uVal_2 = *(uint *)(lVal_4 + (uint64_t)(uVal_1 & 0x7ff) * 4),
          (uVal_1 & 0xfffc0000 ^ uVal_2) < 0x3ffff)) &&
         (lVal_3 = *(int64_t *)(*(int64_t *)(lVal_3 + 0x50) + (uint64_t)(uVal_2 >> 4 & 0x3ff8)),
         lVal_3 != 0)))) &&
       (pLong_8 = *(int64_t **)(lVal_3 + (uint64_t)((uVal_2 & 0x7f) << 4)), pLong_8 != (int64_t *)0x0
       )) {
                    /* WARNING: Could not recover jumptable at 0x000180126235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVal_5 = (**(func_ptr_t *)(*pLong_8 + 0x38))(pLong_8,1,0x18b4b0f4218cf1b9);
      return uVal_5;
    }
  }
  return 0;
}

// func_0x180126240
void func_0x180126240(int64_t *param_1,uint32_t param_2)
{
                    /* WARNING: Could not recover jumptable at 0x0001801262a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x38))(param_1,param_2,0x18b4b0f4218cf1b9);
  return;
}

// func_0x1801262b0
uint32_t func_0x1801262b0(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  lVal_1 = *(int64_t *)(param_1 + 0x10);
  uVal_3 = *(uint *)(param_1 + 0x18);
  pLong_6 = (int64_t *)
           (*(int64_t *)(lVal_1 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_1 + 0x50) - *(int64_t *)(lVal_1 + 0x48)) >> 3) - 1U
           & 0xc29078a0) * 8);
  lVal_2 = *(int64_t *)(lVal_1 + 0x68);
  do {
    if (*pLong_6 == -1) {
      return 0;
    }
    lVal_4 = *pLong_6 * 0x20;
    pLong_6 = (int64_t *)(lVal_2 + lVal_4);
  } while (*(int *)(lVal_2 + 8 + lVal_4) != -0x3d6f8760);
  if ((*(int64_t *)(lVal_1 + 0x70) != lVal_2 + lVal_4) &&
     (lVal_1 = *(int64_t *)(lVal_2 + lVal_4 + 0x10), lVal_1 != 0)) {
    uVal_5 = (uint64_t)((uVal_3 & 0x3ffff) >> 0xb);
    if ((uVal_5 < (uint64_t)(*(int64_t *)(lVal_1 + 0x10) - *(int64_t *)(lVal_1 + 8) >> 3)) &&
       (lVal_1 = *(int64_t *)(*(int64_t *)(lVal_1 + 8) + uVal_5 * 8), lVal_1 != 0)) {
      uVal_3 = uVal_3 & 0xfffc0000 ^ *(uint *)(lVal_1 + (uint64_t)(uVal_3 & 0x7ff) * 4);
      return CONCAT31((int3)(uVal_3 >> 8),uVal_3 < 0x3ffff);
    }
  }
  return 0;
}

// func_0x180126360
uint64_t func_0x180126360(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x228);
}

// func_0x1801263c0
void func_0x1801263c0(int64_t param_1)
{
  func_0x180104f20(param_1 + 0x128,4);
  return;
}

// func_0x180126460
void func_0x180126460(uint64_t param_1,uint64_t param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f590) {
    func_0x180672ec0(&DAT_18083f590);
    if (DAT_18083f590 == -1) {
      DAT_18083f588 = (func_ptr_t )func_0x180126570(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f590);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f5a0) {
    func_0x180672ec0(&DAT_18083f5a0);
    if (DAT_18083f5a0 == -1) {
      DAT_18083f598 = DAT_18083f588;
      _Init_thread_footer(&DAT_18083f5a0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801264d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f598)(param_1,param_2);
  return;
}

// Unwind@180126540
void Unwind_180126540(void)
{
  func_0x180672f60(&DAT_18083f590);
  return;
}

// func_0x180126570
int64_t func_0x180126570(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x2b1e3a0876ffb7a) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x1bf9681d4be759c3) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180126614;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x1bf9681d4be759c3);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18012663a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x1bf9681d4be759c3);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x501e31deU) + -0x11;
  }
LAB_180126614:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18012663a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180126650
void func_0x180126650(int64_t param_1,uint32_t param_2)
{
  uint uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  
  lVal_2 = *(int64_t *)(param_1 + 0x10);
  pLong_3 = (int64_t *)
           (*(int64_t *)(lVal_2 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_2 + 0x50) - *(int64_t *)(lVal_2 + 0x48)) >> 3) - 1U
           & 0xb06141a9) * 8);
  lVal_2 = *(int64_t *)(lVal_2 + 0x68);
  do {
    lVal_4 = *pLong_3 * 0x20;
    pLong_3 = (int64_t *)(lVal_2 + lVal_4);
  } while (*(int *)(lVal_2 + 8 + lVal_4) != -0x4f9ebe57);
  lVal_2 = *(int64_t *)(lVal_4 + 0x10 + lVal_2);
  uVal_1 = *(uint *)(*(int64_t *)
                     (*(int64_t *)(lVal_2 + 8) +
                     (uint64_t)((*(uint *)(param_1 + 0x18) & 0x3f800) >> 8)) +
                   (uint64_t)(*(uint *)(param_1 + 0x18) & 0x7ff) * 4);
  pLong_3 = *(int64_t **)
            (*(int64_t *)(*(int64_t *)(lVal_2 + 0x50) + (uint64_t)((uVal_1 & 0x3ff80) >> 4)) + 8 +
            (uint64_t)((uVal_1 & 0x7f) << 4));
                    /* WARNING: Could not recover jumptable at 0x000180126730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*pLong_3 + 0x38))(pLong_3,param_2,0x18b4b0f4218cf1b9);
  return;
}

// func_0x180126740
uint64_t func_0x180126740(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f5b0) {
    func_0x180672ec0(&DAT_18083f5b0);
    if (DAT_18083f5b0 == -1) {
      DAT_18083f5a8 = (func_ptr_t )func_0x180126870(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f5b0);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f5c0) {
    func_0x180672ec0(&DAT_18083f5c0);
    if (DAT_18083f5c0 == -1) {
      DAT_18083f5b8 = DAT_18083f5a8;
      _Init_thread_footer(&DAT_18083f5c0);
    }
  }
  (*DAT_18083f5b8)(param_1,param_2,param_3,param_4);
  return param_2;
}

// Unwind@180126840
void Unwind_180126840(void)
{
  func_0x180672f60(&DAT_18083f5b0);
  return;
}

// func_0x180126870
int64_t func_0x180126870(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x75d4ab7725022e8) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x562105a29f83b633) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180126914;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x562105a29f83b633);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18012693a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x562105a29f83b633);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffc9a2b391U) + -0x13;
  }
LAB_180126914:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18012693a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180126950
uint64_t func_0x180126950(int64_t param_1,uint param_2)
{
  return CONCAT71(SUB167(ZEXT816(0x186ed449c0ec9bc4) * ZEXT816(0x3e8fed1eec5a2173),1),
                  (*(uint *)(param_1 + 0x210) & param_2) != 0);
}

// func_0x1801269b0
int64_t func_0x1801269b0(int64_t param_1,uint param_2)
{
  uint uVal_1;
  uint uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  int64_t *pLong_8;
  
  if (param_2 < 0x1f) {
    lVal_5 = *(int64_t *)(param_1 + 0x10);
    uVal_1 = *(uint *)(param_1 + 0x18);
    pLong_8 = (int64_t *)
             (*(int64_t *)(lVal_5 + 0x48) +
             (uint64_t)
             ((int)((uint64_t)(*(int64_t *)(lVal_5 + 0x50) - *(int64_t *)(lVal_5 + 0x48)) >> 3) -
              1U & 0xe6a1b550) * 8);
    lVal_3 = *(int64_t *)(lVal_5 + 0x68);
    do {
      if (*pLong_8 == -1) {
        return 0;
      }
      lVal_7 = *pLong_8 * 0x20;
      pLong_8 = (int64_t *)(lVal_3 + lVal_7);
    } while (*(int *)(lVal_3 + 8 + lVal_7) != -0x195e4ab0);
    if ((*(int64_t *)(lVal_5 + 0x70) != lVal_3 + lVal_7) &&
       (lVal_5 = *(int64_t *)(lVal_3 + lVal_7 + 0x10), lVal_5 != 0)) {
      uVal_4 = (uint64_t)((uVal_1 & 0x3ffff) >> 0xb);
      if ((uVal_4 < (uint64_t)(*(int64_t *)(lVal_5 + 0x10) - *(int64_t *)(lVal_5 + 8) >> 3)) &&
         (((lVal_3 = *(int64_t *)(*(int64_t *)(lVal_5 + 8) + uVal_4 * 8), lVal_3 != 0 &&
           (uVal_2 = *(uint *)(lVal_3 + (uint64_t)(uVal_1 & 0x7ff) * 4),
           (uVal_1 & 0xfffc0000 ^ uVal_2) < 0x3ffff)) &&
          (lVal_5 = *(int64_t *)(*(int64_t *)(lVal_5 + 0x50) + (uint64_t)(uVal_2 >> 4 & 0x3ff8)),
          lVal_5 != 0)))) {
        lVal_3 = *(int64_t *)(lVal_5 + (uint64_t)(uVal_2 & 0x7f) * 0x18);
        lVal_5 = *(int64_t *)(lVal_5 + 8 + (uint64_t)(uVal_2 & 0x7f) * 0x18);
        if ((lVal_3 != lVal_5) &&
           (uVal_6 = (lVal_5 - lVal_3 >> 3) * -0xf0f0f0f0f0f0f0f, uVal_4 = (uint64_t)param_2,
           uVal_4 <= uVal_6 && uVal_6 - uVal_4 != 0)) {
          lVal_5 = 0;
          if (*(int *)(lVal_3 + uVal_4 * 0x88) != 0) {
            lVal_5 = lVal_3 + uVal_4 * 0x88;
          }
          return lVal_5;
        }
      }
    }
  }
  return 0;
}

// func_0x180126af0
bool func_0x180126af0(void)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x1801269b0();
  return lVal_1 != 0;
}

// func_0x180126b10
uint32_t func_0x180126b10(int64_t param_1)
{
  uint uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  
  lVal_2 = *(int64_t *)(param_1 + 0x10);
  pLong_3 = (int64_t *)
           (*(int64_t *)(lVal_2 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_2 + 0x50) - *(int64_t *)(lVal_2 + 0x48)) >> 3) - 1U
           & 0x4f6ba419) * 8);
  lVal_2 = *(int64_t *)(lVal_2 + 0x68);
  do {
    lVal_4 = *pLong_3 * 0x20;
    pLong_3 = (int64_t *)(lVal_2 + lVal_4);
  } while (*(int *)(lVal_2 + 8 + lVal_4) != 0x4f6ba419);
  lVal_2 = *(int64_t *)(lVal_4 + 0x10 + lVal_2);
  uVal_1 = *(uint *)(*(int64_t *)
                     (*(int64_t *)(lVal_2 + 8) +
                     (uint64_t)((*(uint *)(param_1 + 0x18) & 0x3f800) >> 8)) +
                   (uint64_t)(*(uint *)(param_1 + 0x18) & 0x7ff) * 4);
  return *(uint32_t *)
          (*(int64_t *)(*(int64_t *)(lVal_2 + 0x50) + (uint64_t)((uVal_1 & 0x3ff80) >> 4)) +
          (uint64_t)(uVal_1 & 0x7f) * 4);
}

// func_0x180126b90
bool func_0x180126b90(int64_t param_1,int param_2)
{
  uint uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  
  lVal_2 = *(int64_t *)(param_1 + 0x10);
  pLong_3 = (int64_t *)
           (*(int64_t *)(lVal_2 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_2 + 0x50) - *(int64_t *)(lVal_2 + 0x48)) >> 3) - 1U
           & 0x4f6ba419) * 8);
  lVal_2 = *(int64_t *)(lVal_2 + 0x68);
  do {
    lVal_4 = *pLong_3 * 0x20;
    pLong_3 = (int64_t *)(lVal_2 + lVal_4);
  } while (*(int *)(lVal_2 + 8 + lVal_4) != 0x4f6ba419);
  lVal_2 = *(int64_t *)(lVal_4 + 0x10 + lVal_2);
  uVal_1 = *(uint *)(*(int64_t *)
                     (*(int64_t *)(lVal_2 + 8) +
                     (uint64_t)((*(uint *)(param_1 + 0x18) & 0x3f800) >> 8)) +
                   (uint64_t)(*(uint *)(param_1 + 0x18) & 0x7ff) * 4);
  return param_2 ==
         *(int *)(*(int64_t *)(*(int64_t *)(lVal_2 + 0x50) + (uint64_t)((uVal_1 & 0x3ff80) >> 4)) +
                 (uint64_t)(uVal_1 & 0x7f) * 4);
}

// func_0x180126c20
bool func_0x180126c20(int64_t param_1,uint param_2)
{
  uint uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  
  lVal_2 = *(int64_t *)(param_1 + 0x10);
  pLong_3 = (int64_t *)
           (*(int64_t *)(lVal_2 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_2 + 0x50) - *(int64_t *)(lVal_2 + 0x48)) >> 3) - 1U
           & 0x4f6ba419) * 8);
  lVal_2 = *(int64_t *)(lVal_2 + 0x68);
  do {
    lVal_4 = *pLong_3 * 0x20;
    pLong_3 = (int64_t *)(lVal_2 + lVal_4);
  } while (*(int *)(lVal_2 + 8 + lVal_4) != 0x4f6ba419);
  lVal_2 = *(int64_t *)(lVal_4 + 0x10 + lVal_2);
  uVal_1 = *(uint *)(*(int64_t *)
                     (*(int64_t *)(lVal_2 + 8) +
                     (uint64_t)((*(uint *)(param_1 + 0x18) & 0x3f800) >> 8)) +
                   (uint64_t)(*(uint *)(param_1 + 0x18) & 0x7ff) * 4);
  return (*(uint *)(*(int64_t *)(*(int64_t *)(lVal_2 + 0x50) + (uint64_t)((uVal_1 & 0x3ff80) >> 4))
                   + (uint64_t)(uVal_1 & 0x7f) * 4) & param_2) != 0;
}

// func_0x180126cb0
void func_0x180126cb0(uint64_t param_1)
{
  func_0x180126cc0(param_1,0);
  return;
}

// func_0x180126cc0
bool func_0x180126cc0(int64_t param_1,uint param_2)
{
  uint uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  
  lVal_2 = *(int64_t *)(param_1 + 0x10);
  uVal_1 = *(uint *)(param_1 + 0x18);
  pLong_7 = (int64_t *)
           (*(int64_t *)(lVal_2 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_2 + 0x50) - *(int64_t *)(lVal_2 + 0x48)) >> 3) - 1U
           & 0x88d3eddf) * 8);
  lVal_3 = *(int64_t *)(lVal_2 + 0x68);
  do {
    if (*pLong_7 == -1) {
      return false;
    }
    lVal_5 = *pLong_7 * 0x20;
    pLong_7 = (int64_t *)(lVal_3 + lVal_5);
  } while (*(int *)(lVal_3 + 8 + lVal_5) != -0x772c1221);
  if ((*(int64_t *)(lVal_2 + 0x70) != lVal_3 + lVal_5) &&
     (lVal_2 = *(int64_t *)(lVal_3 + lVal_5 + 0x10), lVal_2 != 0)) {
    uVal_6 = (uint64_t)((uVal_1 & 0x3ffff) >> 0xb);
    if ((uVal_6 < (uint64_t)(*(int64_t *)(lVal_2 + 0x10) - *(int64_t *)(lVal_2 + 8) >> 3)) &&
       (((lVal_3 = *(int64_t *)(*(int64_t *)(lVal_2 + 8) + uVal_6 * 8), lVal_3 != 0 &&
         (uVal_4 = *(uint *)(lVal_3 + (uint64_t)(uVal_1 & 0x7ff) * 4),
         (uVal_1 & 0xfffc0000 ^ uVal_4) < 0x3ffff)) &&
        (lVal_2 = *(int64_t *)(*(int64_t *)(lVal_2 + 0x50) + (uint64_t)(uVal_4 >> 4 & 0x3ff8)),
        lVal_2 != 0)))) {
      uVal_1 = *(uint *)(lVal_2 + (uint64_t)(uVal_4 & 0x7f) * 4);
      uVal_4 = func_0x180119610(*(uint64_t *)(param_1 + 0x1d8));
      if (uVal_1 != param_2) {
        return (uVal_4 ^ param_2 | uVal_1 ^ 5) == 0;
      }
      return true;
    }
  }
  return false;
}

// func_0x180126e30
void func_0x180126e30(uint64_t param_1)
{
  func_0x180126cc0(param_1,1);
  return;
}

// func_0x180126e40
void func_0x180126e40(uint64_t param_1)
{
  func_0x180126cc0(param_1,2);
  return;
}

// func_0x180126e50
void func_0x180126e50(uint64_t param_1)
{
  func_0x180126cc0(param_1,6);
  return;
}

// func_0x180126e60
uint64_t func_0x180126e60(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x5b8);
}

// func_0x180126ec0
void func_0x180126ec0(int64_t param_1)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_1 + 0x5b8) + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x000180126ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*pLong_1 + 0x38))
            (pLong_1,*(uint32_t *)(*(int64_t *)(param_1 + 0x5b8) + 0x10),0x18b4b0f4218cf1b9);
  return;
}

// func_0x180127000
uint64_t func_0x180127000(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0xaa0);
}

// func_0x180127060
int64_t func_0x180127060(int64_t param_1)
{
  return param_1 + 0xeb8;
}

// func_0x1801270c0
uint64_t func_0x1801270c0(uint64_t *param_1)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  
  uVal_2 = *param_1;
  uVal_1 = (int64_t)uVal_2 >> 0x20;
  uVal_2 = (uVal_1 >> 0x38 ^
          (uVal_1 >> 0x30 & 0xff ^
          (uVal_1 >> 0x28 & 0xff ^
          (uVal_1 >> 0x20 & 0xff ^
          (uVal_1 >> 0x18 & 0xff ^
          (uVal_1 >> 0x10 & 0xff ^
          (uVal_2 >> 0x28 & 0xff ^ (uVal_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
  return (uVal_2 >> 0x18 & 0xff ^
         (uVal_2 >> 0x10 & 0xff ^
         (uVal_2 >> 8 & 0xff ^ (uVal_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3)
         * 0x100000001b3) * 0xcaee32a7d4f6a63 + 0x9e3779b9 + (uVal_2 >> 2) + uVal_2 * 0x40 ^ uVal_2;
}

// func_0x1801271c0
int64_t func_0x1801271c0(int64_t param_1)
{
  return param_1 + 0x899;
}

// func_0x180127220
int64_t func_0x180127220(int64_t param_1)
{
  return param_1 + 0x778;
}

// func_0x180127280
uint64_t func_0x180127280(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x780);
}

// func_0x1801272e0
void func_0x1801272e0(uint8_t (*param_1)[16])
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  
  lVal_3 = *(int64_t *)*param_1;
  if (lVal_3 != 0) {
    *(uint8_t *)(lVal_3 + 0x58) = 1;
    *(byte *)(lVal_3 + 0x59) = *(byte *)(lVal_3 + 0x59) & 0xfd;
    pLong_4 = *(int64_t **)(*param_1 + 8);
    *param_1 = ZEXT816(0);
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
  lVal_3 = *(int64_t *)param_1[1];
  if (lVal_3 != 0) {
    *(uint8_t *)(lVal_3 + 0x58) = 1;
    *(byte *)(lVal_3 + 0x59) = *(byte *)(lVal_3 + 0x59) & 0xfd;
    pLong_4 = *(int64_t **)(param_1[1] + 8);
    param_1[1] = ZEXT816(0);
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
  lVal_3 = *(int64_t *)param_1[2];
  if (lVal_3 != 0) {
    *(uint8_t *)(lVal_3 + 0x58) = 1;
    *(byte *)(lVal_3 + 0x59) = *(byte *)(lVal_3 + 0x59) & 0xfd;
    pLong_4 = *(int64_t **)(param_1[2] + 8);
    param_1[2] = ZEXT816(0);
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
                    /* WARNING: Could not recover jumptable at 0x0001801273a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(func_ptr_t *)(*pLong_4 + 8))(pLong_4);
          return;
        }
      }
    }
  }
  return;
}

// func_0x1801273b0
int64_t func_0x1801273b0(int64_t param_1)
{
  return param_1 + 400;
}

// func_0x180127410
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint8_t (*func_0x180127410(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  uint uVal_1;
  uint8_t in_XMM0 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  
  uVal_1 = *(uint *)(param_1 + 0x38);
  auArr_4._4_12_ = in_XMM0._4_12_;
  auArr_4._0_4_ = (float)(uVal_1 & 0xff);
  auArr_3._0_4_ = uVal_1 >> 0x10;
  auArr_3._4_4_ = uVal_1 >> 8;
  auArr_3._8_8_ = 0;
  auArr_5 = insertps(_DAT_1806b5540,auArr_4,0x20);
  auArr_4 = pblendw(auArr_3 & _DAT_1806b5530,_DAT_1806b5550,0xaa);
  auArr_2._0_4_ = ((float)DAT_1806b5560 - _DAT_1806b5570) + auArr_4._0_4_;
  auArr_2._4_4_ = ((float)((uint64_t)DAT_1806b5560 >> 0x20) - _UNK_1806b5574) + auArr_4._4_4_;
  auArr_2._8_4_ = (0.0 - _UNK_1806b5578) + auArr_4._8_4_;
  auArr_2._12_4_ = (0.0 - _UNK_1806b557c) + auArr_4._12_4_;
  auArr_4 = blendps(auArr_2,auArr_5,0xc);
  auArr_4 = divps(auArr_4,_DAT_1806b5580);
  *param_2 = auArr_4;
  return param_2;
}

// func_0x1801274d0
uint16_t func_0x1801274d0(int64_t param_1)
{
  return *(uint16_t *)(param_1 + 0x50);
}

// func_0x180127530
uint64_t func_0x180127530(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x68);
}

// func_0x180127590
uint8_t func_0x180127590(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0xa4);
}

// func_0x1801275f0
int64_t func_0x1801275f0(int64_t param_1)
{
  return param_1 + 0xd8;
}

// func_0x180127650
int64_t func_0x180127650(int64_t param_1)
{
  return param_1 + 0xf0;
}

// func_0x1801276b0
int64_t func_0x1801276b0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xb152fe9a1f8b1e8) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x4376ecb89a40069) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180127754;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x4376ecb89a40069);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18012777a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x4376ecb89a40069);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff8d936ea3U) + -0xf;
  }
LAB_180127754:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18012777a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180127790
void func_0x180127790(uint64_t param_1)
{
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = 0;
  local_20 = 0x19;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f5d0) {
    func_0x180672ec0(&DAT_18083f5d0);
    if (DAT_18083f5d0 == -1) {
      DAT_18083f5c8 = (func_ptr_t )func_0x1801276b0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f5d0);
    }
  }
  (*DAT_18083f5c8)(param_1,&local_28);
  return;
}

// Unwind@180127830
void Unwind_180127830(void)
{
  func_0x180672f60(&DAT_18083f5d0);
  return;
}

// func_0x180127860
void func_0x180127860(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4, uint64_t param_5,uint8_t param_6,uint64_t param_7,uint64_t param_8, uint32_t param_9,uint32_t *param_10)
{
  char ch_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint8_t local_88;
  uint8_t local_80 [40];
  uint8_t local_58;
  uint8_t local_50;
  uint8_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f5e0) {
    func_0x180672ec0(&DAT_18083f5e0);
    if (DAT_18083f5e0 == -1) {
      DAT_18083f5d8 = (func_ptr_t )func_0x180127b20(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f5e0);
    }
  }
  fnPtr_2 = DAT_18083f5d8;
  local_50 = 0;
  ch_1 = *(char *)(param_10 + 0x12);
  if (ch_1 == '\x01') {
    local_88 = *(uint8_t *)(param_10 + 4);
    local_98 = *param_10;
    uStack_94 = param_10[1];
    uStack_90 = param_10[2];
    uStack_8c = param_10[3];
    local_48 = local_80;
    local_58 = 0xff;
    func_0x180103270((int64_t)*(char *)(param_10 + 0x10) + 1,&local_48,param_10 + 6);
  }
  local_48 = (uint8_t *)0x186a9875012ea424;
  local_50 = ch_1 == '\x01';
  uVal_3 = (**(func_ptr_t *)(*param_4 + 0xa0))(param_4);
  (*fnPtr_2)(param_1,param_2,param_3,uVal_3,param_5,param_6,param_7,param_8,param_9,&local_98);
  if (*(char *)(param_10 + 0x12) == '\x01') {
    func_0x180103220((int64_t)*(char *)(param_10 + 0x10) + 1,&local_48,param_10 + 6);
  }
  return;
}

// Unwind@180127a30
void Unwind_180127a30(void)
{
  func_0x180672f60(&DAT_18083f5e0);
  return;
}

// Unwind@180127a70
void Unwind_180127a70(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    func_0x180103220((int64_t)*(char *)(param_2 + 0x90) + 1,param_2 + 0xa0,param_2 + 0x68);
  }
  return;
}

// Unwind@180127ac0
void Unwind_180127ac0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(*(int64_t *)(param_2 + 0x138) + 0x48) == '\x01') {
    func_0x180103220((int64_t)*(char *)(*(int64_t *)(param_2 + 0x138) + 0x40) + 1,param_2 + 0xa0,
                  *(int64_t *)(param_2 + 0x138) + 0x18);
  }
  return;
}

// func_0x180127b20
int64_t func_0x180127b20(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x2e46c465e6528a7) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x499cde2f5369a1a) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180127bc4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x499cde2f5369a1a);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180127bea;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x499cde2f5369a1a);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xfffffffff1af57fbU) + -0x22;
  }
LAB_180127bc4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180127bea:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180127c00
void func_0x180127c00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f5f0) {
    func_0x180672ec0(&DAT_18083f5f0);
    if (DAT_18083f5f0 == -1) {
      DAT_18083f5e8 = (func_ptr_t )func_0x180127d20(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f5f0);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f600) {
    func_0x180672ec0(&DAT_18083f600);
    if (DAT_18083f600 == -1) {
      DAT_18083f5f8 = DAT_18083f5e8;
      _Init_thread_footer(&DAT_18083f600);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180127c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f5f8)(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@180127cf0
void Unwind_180127cf0(void)
{
  func_0x180672f60(&DAT_18083f5f0);
  return;
}

// func_0x180127d20
int64_t func_0x180127d20(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x6387cf19c214715) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x7d4a836b6bb610f0) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180127dc4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x7d4a836b6bb610f0);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180127dea;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x7d4a836b6bb610f0);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x16fc939bU) + -0x19;
  }
LAB_180127dc4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180127dea:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180127e00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180127e00(uint64_t param_1)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f610) {
    func_0x180672ec0(&DAT_18083f610);
    if (DAT_18083f610 == -1) {
      DAT_18083f608 = (func_ptr_t )func_0x180127f00(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f610);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f620) {
    func_0x180672ec0(&DAT_18083f620);
    if (DAT_18083f620 == -1) {
      _DAT_18083f618 = DAT_18083f608;
      _Init_thread_footer(&DAT_18083f620);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180127e61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_18083f618)(param_1);
  return;
}

// Unwind@180127ed0
void Unwind_180127ed0(void)
{
  func_0x180672f60(&DAT_18083f610);
  return;
}

// func_0x180127f00
int64_t func_0x180127f00(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xfdeb33bf38b2c3d) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x5f8fceae05f878fd) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180127fa4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x5f8fceae05f878fd);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180127fca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x5f8fceae05f878fd);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x5a77b653U) + -0x1a;
  }
LAB_180127fa4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180127fca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180127fe0
uint16_t func_0x180127fe0(int64_t param_1)
{
  return *(uint16_t *)(param_1 + 0x17e);
}

// func_0x180128040
int64_t func_0x180128040(int64_t param_1)
{
  return param_1 + 0x1a0;
}

// func_0x1801280a0
int64_t func_0x1801280a0(int64_t param_1)
{
  return param_1 + 0x1e8;
}

// func_0x180128100
uint64_t func_0x180128100(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x240);
}

// func_0x180128160
void func_0x180128160(int64_t *param_1,uint64_t param_2)
{
                    /* WARNING: Could not recover jumptable at 0x0001801281c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x40))(param_1,param_2);
  return;
}

// func_0x1801281d0
void func_0x1801281d0(int64_t *param_1,uint64_t param_2)
{
                    /* WARNING: Could not recover jumptable at 0x000180128230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x40))(param_1,param_2);
  return;
}

// func_0x180128240
void func_0x180128240(int64_t *param_1,uint64_t param_2)
{
                    /* WARNING: Could not recover jumptable at 0x0001801282a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

// func_0x1801282b0
uint64_t func_0x1801282b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  
  uVal_2 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f630) {
    func_0x180672ec0(&DAT_18083f630);
    if (DAT_18083f630 == -1) {
      lVal_1 = func_0x1801283e0(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f628 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f628 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f630);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f640) {
    func_0x180672ec0(&DAT_18083f640);
    if (DAT_18083f640 == -1) {
      DAT_18083f638 = DAT_18083f628;
      _Init_thread_footer(&DAT_18083f640);
    }
  }
  (*DAT_18083f638)(param_1,param_2,param_3,param_4,uVal_2);
  return param_1;
}

// Unwind@1801283b0
void Unwind_1801283b0(void)
{
  func_0x180672f60(&DAT_18083f630);
  return;
}

// func_0x1801283e0
int64_t func_0x1801283e0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x2a44edda552f18d) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x43ba3021e5802b95) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180128484;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x43ba3021e5802b95);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801284aa;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x43ba3021e5802b95);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffa63a1bb5U) + -0x2b;
  }
LAB_180128484:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801284aa:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801288d0
uint64_t func_0x1801288d0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x28);
}

// func_0x180128930
void func_0x180128930(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180128937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x10))();
  return;
}

// func_0x180128940
void func_0x180128940(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180128947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x18))();
  return;
}

// func_0x180128950
void func_0x180128950(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x000180128957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x28))();
  return;
}

// func_0x180128960
uint8_t (*func_0x180128960(int64_t *param_1,uint8_t (*param_2)[16],uint64_t param_3))[16]
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint8_t local_38 [16];
  int64_t local_28;
  uint8_t (*local_18)[16];
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  *param_2 = ZEXT816(0);
  *(uint64_t *)param_2[1] = 0;
  local_38 = ZEXT816(0);
  local_28 = 0;
  local_18 = param_2;
  (**(func_ptr_t *)(*param_1 + 0xb0))(0,param_2,param_3,0,0,local_38);
  if (local_38._0_8_ != 0) {
    uVal_2 = local_28 - local_38._0_8_;
    lVal_1 = local_38._0_8_;
    if (0xfff < uVal_2) {
      lVal_1 = *(int64_t *)(local_38._0_8_ + -8);
      if (0x1f < (uint64_t)((local_38._0_8_ + -8) - lVal_1)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = uVal_2 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_1,uVal_2);
  }
  return local_18;
}

// Unwind@180128a50
void Unwind_180128a50(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x40);
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x60));
  return;
}

// func_0x180128a80
void func_0x180128a80(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4, uint64_t param_5)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_78 [32];
  uint64_t local_58;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint64_t local_28;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint64_t local_8;
  
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  local_48 = *(uint32_t *)param_4;
  uStack_44 = *(uint32_t *)((int64_t)param_4 + 4);
  local_28 = *param_4;
  uStack_40 = *(uint32_t *)(param_4 + 1);
  uStack_3c = *(uint32_t *)((int64_t)param_4 + 0xc);
  local_38 = *(uint32_t *)(param_4 + 2);
  uStack_34 = *(uint32_t *)((int64_t)param_4 + 0x14);
  uStack_30 = *(uint32_t *)(param_4 + 3);
  uStack_2c = *(uint32_t *)((int64_t)param_4 + 0x1c);
  local_58 = param_5;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  (**(func_ptr_t *)(*param_1 + 0xd0))(local_48,param_2,param_3,&local_28);
  if (DAT_18083cf40 == (local_8 ^ (uint64_t)auStack_78)) {
    return;
  }
  func_0x180673080(local_8 ^ (uint64_t)auStack_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180128b60
uint64_t func_0x180128b60(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, uint8_t param_5,uint8_t param_6,uint32_t param_7,uint8_t param_8, uint8_t param_9,uint64_t param_10,uint64_t param_11,uint8_t param_12)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f650) {
    lVal_1 = *param_1;
    func_0x180672ec0(&DAT_18083f650);
    if (DAT_18083f650 == -1) {
      DAT_18083f648 = *(func_ptr_t *)(lVal_1 + 0x198);
      _Init_thread_footer(&DAT_18083f650,0x33,param_3,param_4);
    }
  }
  (*DAT_18083f648)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
  return param_2;
}

// func_0x180128d00
void func_0x180128d00(uint64_t param_1,uint64_t param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f660) {
    func_0x180672ec0(&DAT_18083f660);
    if (DAT_18083f660 == -1) {
      DAT_18083f658 = (func_ptr_t )func_0x180128dc0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f660);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180128d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f658)(param_1,param_2);
  return;
}

// Unwind@180128d90
void Unwind_180128d90(void)
{
  func_0x180672f60(&DAT_18083f660);
  return;
}

// func_0x180128dc0
int64_t func_0x180128dc0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xf2b1137f0d7382a) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x6a7a682c1340ad7) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180128e64;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x6a7a682c1340ad7);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180128e8a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x6a7a682c1340ad7);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffc793ac55U) + -0x15;
  }
LAB_180128e64:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180128e8a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180128ea0
uint16_t * func_0x180128ea0(int64_t param_1,uint16_t *param_2,int *param_3)
{
  int iVal_1;
  int iVal_2;
  func_ptr_t fnPtr_3;
  short sz_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  uint64_t uVal_7;
  uint16_t *pU64_8;
  int iVal_9;
  uint8_t auStack_88 [44];
  uint local_5c;
  uint8_t *local_58;
  uint local_50;
  uint64_t local_48;
  uint64_t uVal_10;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  local_58 = (uint8_t *)0x18b0ef8bb1d61846;
  lVal_5 = func_0x180129210(*(uint64_t *)(param_1 + 0x28),CONCAT44(param_3[2] >> 4,*param_3 >> 4));
  if (lVal_5 != 0) {
    local_58 = &DAT_28d478d88fb3dcdf;
    DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
    if (DAT_180840a60 == 0) {
      DAT_180840a68 = 0;
    }
    local_58 = (uint8_t *)0x18ac8656e949a6f2;
    sz_4 = *(short *)(param_3 + 1) - *(short *)(*(int64_t *)(DAT_180840a60 + 0x1c8) + 200);
    if (-0x11 < sz_4) {
      iVal_1 = *param_3;
      local_5c = param_3[2];
      iVal_2 = sz_4 + 1;
      iVal_9 = sz_4 + 0x10;
      if (-1 < iVal_2) {
        iVal_9 = iVal_2;
      }
      uVal_10 = (uint64_t)(uint)(iVal_9 >> 4);
      pLong_6 = (int64_t *)func_0x18011a2a0(lVal_5);
      uVal_7 = (pLong_6[1] - *pLong_6 >> 3) * 0x2e8ba2e8ba2e8ba3;
      if (uVal_10 <= uVal_7 && uVal_7 - uVal_10 != 0) {
        local_5c = local_5c & 0xf;
        pLong_6 = (int64_t *)func_0x18011a2a0(lVal_5);
        lVal_5 = *pLong_6;
        iVal_2 = param_3[1];
        local_58 = &DAT_28d478d88fb3dcdf;
        DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
        if (DAT_180840a60 == 0) {
          DAT_180840a68 = 0;
        }
        local_58 = (uint8_t *)
                   (CONCAT44((iVal_2 - (uint)*(ushort *)(*(int64_t *)(DAT_180840a60 + 0x1c8) + 200))
                             + 1,iVal_1) & 0xf0000000f);
        local_50 = local_5c;
        func_0x180104d50(uVal_10 * 0x58 + lVal_5,param_2,&local_58);
        goto LAB_1801291d5;
      }
    }
  }
  *param_2 = 0;
LAB_1801291d5:
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_88)) {
    return param_2;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_88);
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_8 = (uint16_t *)(*fnPtr_3)();
  return pU64_8;
}

// func_0x180129210
int64_t func_0x180129210(int64_t param_1,uint64_t param_2)
{
  uint uVal_1;
  uint uVal_2;
  char ch_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  
  uVal_7 = (param_2 >> 0x18 & 0xff ^
          (param_2 >> 0x10 & 0xff ^
          (param_2 >> 8 & 0xff ^ (param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
  lVal_4 = (((uVal_7 >> 2) + 0x9e3779b9 +
            uVal_7 * 0x40 +
            ((param_2 >> 0x30 & 0xff ^
             (param_2 >> 0x28 & 0xff ^ (param_2 >> 0x20 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3
             ) * 0x100000001b3) * 0x100000001b3 ^ param_2 >> 0x38) * 0x100000001b3 ^ uVal_7) &
          *(uint64_t *)(param_1 + 0xa0)) * 0x10;
  lVal_5 = *(int64_t *)(*(int64_t *)(param_1 + 0x88) + 8 + lVal_4);
  if (lVal_5 != *(int64_t *)(param_1 + 0x78)) {
    uVal_6 = (uint)param_2 & 0xff |
            ((uint)(param_2 >> 8) & 0xff) << 8 |
            ((uint)(param_2 >> 0x10) & 0xff) << 0x10 | (int)(param_2 >> 0x18) << 0x18;
    uVal_2 = (uint)(param_2 >> 0x20);
    if (uVal_6 != *(uint *)(lVal_5 + 0x10)) goto LAB_1801293a0;
    uVal_1 = *(uint *)(lVal_5 + 0x14);
    while ((uVal_2 & 0xff |
           (uVal_2 >> 8 & 0xff) << 8 |
           ((ushort)(param_2 >> 0x30) & 0xff) << 0x10 | (uint)(byte)(param_2 >> 0x38) << 0x18) !=
           uVal_1) {
LAB_1801293a0:
      do {
        if (lVal_5 == *(int64_t *)(*(int64_t *)(param_1 + 0x88) + lVal_4)) {
          return 0;
        }
        lVal_5 = *(int64_t *)(lVal_5 + 8);
      } while (uVal_6 != *(uint *)(lVal_5 + 0x10));
      uVal_1 = *(uint *)(lVal_5 + 0x14);
    }
    if ((lVal_5 != *(int64_t *)(param_1 + 0x78)) &&
       (lVal_5 = *(int64_t *)(lVal_5 + 0x18), lVal_5 != 0)) {
      ch_3 = func_0x18011a3c0(lVal_5);
      if (ch_3 == '\0') {
        return 0;
      }
      return lVal_5;
    }
  }
  return 0;
}

// func_0x1801293f0
uint16_t func_0x1801293f0(int64_t param_1)
{
  return *(uint16_t *)(param_1 + 200);
}

// func_0x180129450
uint64_t func_0x180129450(int64_t param_1,int *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  
  lVal_1 = func_0x180129210(*(uint64_t *)(param_1 + 0x28),CONCAT44(param_2[2] >> 4,*param_2 >> 4));
  if (lVal_1 != 0) {
    uVal_2 = func_0x18011a470(lVal_1,param_2);
    return uVal_2;
  }
  return 0;
}

// func_0x1801294f0
uint64_t func_0x1801294f0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 8);
}

// func_0x180129550
int64_t func_0x180129550(int64_t param_1)
{
  return param_1 + 0x78;
}

// func_0x1801295b0
uint32_t func_0x1801295b0(int64_t param_1)
{
  return *(uint32_t *)(param_1 + 0xe4);
}

// func_0x180129610
int64_t func_0x180129610(int64_t param_1)
{
  return param_1 + 0xec;
}

// func_0x180129670
void func_0x180129670(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f670) {
    func_0x180672ec0(&DAT_18083f670);
    if (DAT_18083f670 == -1) {
      lVal_1 = func_0x180129750(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f668 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f668 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f670);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801296d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f668)(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@180129720
void Unwind_180129720(void)
{
  func_0x180672f60(&DAT_18083f670);
  return;
}

// func_0x180129750
int64_t func_0x180129750(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x4ffed07a28b96b0) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x54d1d95189c63131) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801297f4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x54d1d95189c63131);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18012981a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x54d1d95189c63131);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffdd17e861U) + -0x23;
  }
LAB_1801297f4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18012981a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180129830
void func_0x180129830(uint64_t param_1)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f680) {
    func_0x180672ec0(&DAT_18083f680);
    if (DAT_18083f680 == -1) {
      DAT_18083f678 = (func_ptr_t )func_0x1801299f0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f680);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f690) {
    func_0x180672ec0(&DAT_18083f690);
    if (DAT_18083f690 == -1) {
      lVal_1 = func_0x180129ad0(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f688 = 0;
      }
      else {
        DAT_18083f688 = lVal_1 + *(int *)(lVal_1 + 3) + 7;
      }
      _Init_thread_footer(&DAT_18083f690);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f6a0) {
    func_0x180672ec0(&DAT_18083f6a0);
    if (DAT_18083f6a0 == -1) {
      DAT_18083f698 = DAT_18083f678;
      _Init_thread_footer(&DAT_18083f6a0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801298c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f698)(DAT_18083f688,param_1,0);
  return;
}

// Unwind@180129990
void Unwind_180129990(void)
{
  func_0x180672f60(&DAT_18083f680);
  return;
}

// Unwind@1801299c0
void Unwind_1801299c0(void)
{
  func_0x180672f60(&DAT_18083f690);
  return;
}

// func_0x1801299f0
int64_t func_0x1801299f0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x96f48d51a16b3c9) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x1fb9228aa261d6fa) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180129a94;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x1fb9228aa261d6fa);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180129aba;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x1fb9228aa261d6fa);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffbdd8f473U) + -0x27;
  }
LAB_180129a94:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180129aba:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180129ad0
int64_t func_0x180129ad0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x46a0e43b7c5f443) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x5ec46f2d00666ddd) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180129b74;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x5ec46f2d00666ddd);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180129b9a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x5ec46f2d00666ddd);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x5ea202f0U) + -0x24;
  }
LAB_180129b74:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180129b9a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180129bb0
int64_t func_0x180129bb0(int64_t param_1)
{
  int *pInt_1;
  uint uVal_2;
  uint uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  int64_t local_28;
  int64_t *local_20;
  
  func_0x18011b590(*(uint64_t *)(param_1 + 0x1a8),&local_28);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_7 = local_20 + 1;
    *(int *)pLong_7 = *(int *)pLong_7 + -1;
    UNLOCK();
    if (*(int *)pLong_7 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_1 = (int *)((int64_t)local_20 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  lVal_4 = func_0x18012e150(local_28 + 0x30,0x119e772b);
  uVal_2 = **(uint **)(lVal_4 + 0x20);
  pLong_7 = (int64_t *)
           (*(int64_t *)(local_28 + 0x78) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(local_28 + 0x80) - *(int64_t *)(local_28 + 0x78)) >> 3)
            - 1U & 0x4f6047c7) * 8);
  lVal_4 = *(int64_t *)(local_28 + 0x98);
  do {
    if (*pLong_7 == -1) {
      return 0;
    }
    lVal_5 = *pLong_7 * 0x20;
    pLong_7 = (int64_t *)(lVal_4 + lVal_5);
  } while (*(int *)(lVal_4 + 8 + lVal_5) != 0x4f6047c7);
  if ((*(int64_t *)(local_28 + 0xa0) != lVal_4 + lVal_5) &&
     (lVal_4 = *(int64_t *)(lVal_4 + lVal_5 + 0x10), lVal_4 != 0)) {
    uVal_6 = (uint64_t)((uVal_2 & 0x3ffff) >> 0xb);
    if ((uVal_6 < (uint64_t)(*(int64_t *)(lVal_4 + 0x10) - *(int64_t *)(lVal_4 + 8) >> 3)) &&
       ((lVal_5 = *(int64_t *)(*(int64_t *)(lVal_4 + 8) + uVal_6 * 8), lVal_5 != 0 &&
        (uVal_3 = *(uint *)(lVal_5 + (uint64_t)(uVal_2 & 0x7ff) * 4),
        (uVal_2 & 0xfffc0000 ^ uVal_3) < 0x3ffff)))) {
      return (uint64_t)((uVal_3 & 0x7f) * 0x120) +
             *(int64_t *)(*(int64_t *)(lVal_4 + 0x50) + (uint64_t)((uVal_3 & 0x3ff80) >> 4));
    }
  }
  return 0;
}

// func_0x180129cf0
int64_t func_0x180129cf0(int64_t param_1)
{
  return param_1 + 0x358;
}

// func_0x180129d50
uint64_t func_0x180129d50(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x610);
}

// func_0x180129db0
uint8_t (*func_0x180129db0(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  int *pInt_1;
  uint64_t uVal_2;
  
  *param_2 = ZEXT816(0);
  if (*(int64_t *)(param_1 + 0x620) == 0) {
    uVal_2 = 0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(*(int64_t *)(param_1 + 0x620) + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    uVal_2 = *(uint64_t *)(param_1 + 0x620);
  }
  *(uint64_t *)*param_2 = *(uint64_t *)(param_1 + 0x618);
  *(uint64_t *)(*param_2 + 8) = uVal_2;
  return param_2;
}

// func_0x180129e40
void func_0x180129e40(int64_t param_1)
{
  func_0x1801098c0(*(uint64_t *)(param_1 + 0xc58));
  return;
}

// func_0x180129ea0
uint64_t func_0x180129ea0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0xc58);
}

// func_0x180129f00
uint64_t func_0x180129f00(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x680);
}

// func_0x180129fc0
void func_0x180129fc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f6b0) {
    func_0x180672ec0(&DAT_18083f6b0);
    if (DAT_18083f6b0 == -1) {
      DAT_18083f6a8 = (func_ptr_t )func_0x18012a0f0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f6b0);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f6c0) {
    func_0x180672ec0(&DAT_18083f6c0);
    if (DAT_18083f6c0 == -1) {
      DAT_18083f6b8 = DAT_18083f6a8;
      _Init_thread_footer(&DAT_18083f6c0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018012a046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f6b8)(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@18012a0c0
void Unwind_18012a0c0(void)
{
  func_0x180672f60(&DAT_18083f6b0);
  return;
}

// func_0x18012a0f0
int64_t func_0x18012a0f0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xbb8b08fc198c3fb) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x38319ed1f48f647b) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18012a194;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x38319ed1f48f647b);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18012a1ba;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x38319ed1f48f647b);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffccbefaaaU) + -0x2a;
  }
LAB_18012a194:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18012a1ba:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18012a1d0
int64_t func_0x18012a1d0(int64_t param_1)
{
  return param_1 + 0x20;
}

// func_0x18012a230
uint16_t func_0x18012a230(int64_t param_1)
{
  return *(uint16_t *)(param_1 + 0xca);
}

// func_0x18012a290
uint8_t (*func_0x18012a290(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  int *pInt_1;
  uint64_t uVal_2;
  
  *param_2 = ZEXT816(0);
  if (*(int64_t *)(param_1 + 0xf8) == 0) {
    uVal_2 = 0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(*(int64_t *)(param_1 + 0xf8) + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    uVal_2 = *(uint64_t *)(param_1 + 0xf8);
  }
  *(uint64_t *)*param_2 = *(uint64_t *)(param_1 + 0xf0);
  *(uint64_t *)(*param_2 + 8) = uVal_2;
  return param_2;
}

// func_0x18012a320
uint16_t func_0x18012a320(int64_t param_1)
{
  return *(uint16_t *)(param_1 + 0x1a0);
}

// func_0x18012a380
uint64_t func_0x18012a380(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1e0);
}

// func_0x18012a3e0
uint64_t func_0x18012a3e0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1e8);
}

// func_0x18012a440
uint8_t (*func_0x18012a440(int64_t param_1,uint8_t (*param_2)[16],short param_3))[16]
{
  int *pInt_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  
  pLong_2 = *(int64_t **)(*(int64_t *)(param_1 + 0x10) + 0x20);
  pLong_3 = pLong_2;
  do {
    pLong_3 = (int64_t *)*pLong_3;
    if (pLong_3 == pLong_2) {
      *param_2 = ZEXT816(0);
      return param_2;
    }
  } while (*(short *)(pLong_3 + 2) != param_3);
  *param_2 = ZEXT816(0);
  if (pLong_3[4] == 0) {
    uVal_4 = 0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(pLong_3[4] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    uVal_4 = pLong_3[4];
  }
  *(int64_t *)*param_2 = pLong_3[3];
  *(uint64_t *)(*param_2 + 8) = uVal_4;
  return param_2;
}

// func_0x18012a540
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18012a540(uint64_t param_1)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f6d0) {
    func_0x180672ec0(&DAT_18083f6d0);
    if (DAT_18083f6d0 == -1) {
      DAT_18083f6c8 = (func_ptr_t )func_0x18012a640(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f6d0);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f6e0) {
    func_0x180672ec0(&DAT_18083f6e0);
    if (DAT_18083f6e0 == -1) {
      _DAT_18083f6d8 = DAT_18083f6c8;
      _Init_thread_footer(&DAT_18083f6e0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018012a5a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_18083f6d8)(param_1);
  return;
}

// Unwind@18012a610
void Unwind_18012a610(void)
{
  func_0x180672f60(&DAT_18083f6d0);
  return;
}

// func_0x18012a640
int64_t func_0x18012a640(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x8c755d3bcb0d995) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x5dc6163f99c5a982) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18012a6e4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x5dc6163f99c5a982);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18012a70a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x5dc6163f99c5a982);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffc403bfbeU) + -0x2c;
  }
LAB_18012a6e4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18012a70a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18012a720
uint8_t (*func_0x18012a720(uint8_t (*param_1)[16],int64_t *param_2))[16]
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  int64_t lVal_6;
  uint8_t local_68 [8];
  uint64_t local_60;
  byte local_58;
  uint8_t (*local_50)[16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = ZEXT816(0);
  lVal_4 = func_0x180672de0(0x48);
  *(int64_t *)lVal_4 = lVal_4;
  *(int64_t *)(lVal_4 + 8) = lVal_4;
  *(int64_t *)(lVal_4 + 0x10) = lVal_4;
  *(uint16_t *)(lVal_4 + 0x18) = 0x101;
  *(int64_t *)*param_1 = lVal_4;
  lVal_6 = *param_2;
  lVal_1 = param_2[1];
  if (lVal_6 != lVal_1) {
    local_50 = param_1;
    do {
      func_0x18012f1b0(param_1,local_68,lVal_4,lVal_6);
      uVal_3 = local_60;
      param_1 = local_50;
      if ((local_58 & 1) == 0) {
        if (*(int64_t *)(*local_50 + 8) == 0x38e38e38e38e38e) {
          func_0x1800a17e0();
          fnPtr_2 = (func_ptr_t )swi(3);
          pArr16_5 = (uint8_t (*)[16])(*fnPtr_2)();
          return pArr16_5;
        }
        func_0x18012f5d0(local_68,local_50,*(uint64_t *)*local_50,lVal_6);
        param_1 = local_50;
        func_0x1800a1550(local_50,local_68,local_60);
        local_60 = uVal_3;
      }
      lVal_6 = lVal_6 + 0x28;
    } while (lVal_6 != lVal_1);
  }
  return param_1;
}

// Unwind@18012a810
void Unwind_18012a810(uint64_t param_1,int64_t param_2)
{
  func_0x18012a850(*(uint64_t *)(param_2 + 0x38));
  return;
}

// func_0x18012a850
void func_0x18012a850(int64_t *param_1)
{
  func_0x1800f1a50(param_1,param_1,*(uint64_t *)(*param_1 + 8));
  thunk_FUN_180695dd0(*param_1,0x48);
  return;
}

// func_0x18012a8c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint8_t (*func_0x18012a8c0(uint8_t (*param_1)[16],uint64_t param_2,uint64_t param_3))[16]
{
  uint uVal_1;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f700) {
    func_0x180672ec0(&DAT_18083f700);
    if (DAT_18083f700 == -1) {
      DAT_18083f6f8 = (func_ptr_t )func_0x18012aa20(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f700);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f710) {
    func_0x180672ec0(&DAT_18083f710);
    if (DAT_18083f710 == -1) {
      DAT_18083f708 = DAT_18083f6f8;
      _Init_thread_footer(&DAT_18083f710);
    }
  }
  uVal_1 = (*DAT_18083f708)(param_2,param_3);
  auArr_3._0_4_ = uVal_1 >> 0x10;
  auArr_3._4_4_ = uVal_1 >> 8;
  auArr_3._8_8_ = 0;
  auArr_2._0_4_ = (float)SUB164(auArr_3 & _DAT_1806b5530,0);
  auArr_2._4_4_ = (float)SUB164(auArr_3 & _DAT_1806b5530,4);
  auArr_2._8_4_ = (float)(uVal_1 & 0xff);
  auArr_2._12_4_ = (float)(uVal_1 >> 0x18);
  auArr_3 = divps(auArr_2,ram0x0001806b2990);
  *param_1 = auArr_3;
  return param_1;
}

// Unwind@18012a9f0
void Unwind_18012a9f0(void)
{
  func_0x180672f60(&DAT_18083f700);
  return;
}

// func_0x18012aa20
int64_t func_0x18012aa20(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xfcc46a6796447db) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x796f548602317a25) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18012aac4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x796f548602317a25);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18012aaea;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x796f548602317a25);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x7b5e2ea3U) + -0x21;
  }
LAB_18012aac4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18012aaea:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18012ab00
void func_0x18012ab00(int64_t *param_1,uint64_t param_2,uint64_t param_3,byte param_4)
{
                    /* WARNING: Could not recover jumptable at 0x00018012ab68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x30))(param_1,param_2,0x18b7c87a8fe15ea6,(float)(uint)param_4);
  return;
}

// func_0x18012ab70
void func_0x18012ab70(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018012abc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x38))(param_1,7,0x186ed1431c29415f);
  return;
}

// func_0x18012abd0
void func_0x18012abd0(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018012ac2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x78))(param_1,0,0x18b7d185d1d4115f);
  return;
}

// func_0x18012ac30
uint64_t func_0x18012ac30(int64_t *param_1,char **param_2)
{
  char ch_1;
  char *fnPtr_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  char **ptr2_Char_5;
  uint64_t uVal_6;
  float fVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  float fVal_13;
  uint32_t uVal_10;
  
  uVal_8 = (**(func_ptr_t *)(*param_1 + 0x38))(param_1);
  uVal_10 = (uint32_t)((uint64_t)uVal_8 >> 0x20);
  uVal_9 = (**(func_ptr_t *)(*param_1 + 0x48))(param_1);
  fVal_13 = (float)uVal_8 * (float)uVal_9;
  fVal_7 = ((float)uVal_9 + DAT_1806ae7b0) * DAT_1806b55e0 + DAT_1806b55e4;
  auArr_11._4_4_ = uVal_10;
  auArr_11._0_4_ = fVal_13;
  auArr_11._8_4_ = extraout_XMM0_Dc;
  auArr_11._12_4_ = extraout_XMM0_Dd;
  if (fVal_13 <= fVal_7) {
    auArr_11._0_4_ = fVal_7;
  }
  auArr_3._4_4_ = (int)((uint64_t)uVal_9 >> 0x20);
  auArr_3._0_4_ = -(uint)NAN(fVal_7);
  auArr_3._8_4_ = extraout_XMM0_Dc_00;
  auArr_3._12_4_ = extraout_XMM0_Dd_00;
  auArr_4._4_4_ = uVal_10;
  auArr_4._0_4_ = fVal_13;
  auArr_4._8_4_ = extraout_XMM0_Dc;
  auArr_4._12_4_ = extraout_XMM0_Dd;
  auArr_12 = blendvps(auArr_11,auArr_4,auArr_3);
  uVal_8 = auArr_12._0_8_;
  fnPtr_2 = param_2[2];
  if (&DAT_0000000f < param_2[3]) {
    param_2 = (char **)*param_2;
  }
  if (fnPtr_2 != (char *)0x0) {
    ptr2_Char_5 = param_2;
    for (uVal_6 = (uint64_t)fnPtr_2 & 3; uVal_6 != 0; uVal_6 = uVal_6 - 1) {
      if (*(char *)ptr2_Char_5 == '\n') {
        auArr_12._0_4_ = auArr_12._0_4_ + fVal_13;
      }
      ptr2_Char_5 = (char **)((int64_t)ptr2_Char_5 + 1);
    }
    uVal_8 = auArr_12._0_8_;
    if ((char *)0x3 < fnPtr_2) {
      do {
        if (*(char *)ptr2_Char_5 == '\n') {
          auArr_12._0_4_ = auArr_12._0_4_ + fVal_13;
          if (*(char *)((int64_t)ptr2_Char_5 + 1) != '\n') goto LAB_18012ad94;
LAB_18012adba:
          auArr_12._0_4_ = auArr_12._0_4_ + fVal_13;
          if (*(char *)((int64_t)ptr2_Char_5 + 2) != '\n') goto LAB_18012ad9a;
LAB_18012adc4:
          auArr_12._0_4_ = auArr_12._0_4_ + fVal_13;
          ch_1 = *(char *)((int64_t)ptr2_Char_5 + 3);
        }
        else {
          if (*(char *)((int64_t)ptr2_Char_5 + 1) == '\n') goto LAB_18012adba;
LAB_18012ad94:
          if (*(char *)((int64_t)ptr2_Char_5 + 2) == '\n') goto LAB_18012adc4;
LAB_18012ad9a:
          ch_1 = *(char *)((int64_t)ptr2_Char_5 + 3);
        }
        if (ch_1 == '\n') {
          auArr_12._0_4_ = auArr_12._0_4_ + fVal_13;
        }
        uVal_8 = auArr_12._0_8_;
        ptr2_Char_5 = (char **)((int64_t)ptr2_Char_5 + 4);
      } while (ptr2_Char_5 != (char **)((int64_t)param_2 + (int64_t)fnPtr_2));
    }
  }
  return uVal_8;
}

// func_0x18012ade0
void func_0x18012ade0(int64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4, uint32_t param_5,uint64_t param_6,char param_7,uint64_t param_8)
{
  uint64_t in_stack_ffffffffffffff20;
  uint in_stack_ffffffffffffff28;
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint64_t *local_58;
  uint64_t local_50;
  char local_30;
  uint64_t *local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (param_7 == '\0') {
    local_78 = ZEXT816(0);
    local_68 = ZEXT816(0);
    local_20 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    local_30 = '\0';
    local_18 = 0x18a2e401268d7202;
    local_28 = param_3;
    (**(func_ptr_t *)(*param_1 + 0x20))
              (param_5,param_2,&local_28,param_2,param_5,param_6,0,
               in_stack_ffffffffffffff20 & 0xffffffffffffff00,in_stack_ffffffffffffff28 & 0xffffff00
               ,param_8,0xffffffff,0,0,local_68,local_78,0,0,&local_58,0);
    func_0x180103220((int64_t)local_30 + 1,&local_18,&local_58);
    return;
  }
  local_50 = param_3[2];
  if (0xf < (uint64_t)param_3[3]) {
    param_3 = (uint64_t *)*param_3;
  }
  local_58 = param_3;
  func_0x18012afd0(param_5,param_2,&local_58,param_4,param_5,param_6,0,param_8,0);
  return;
}

// Unwind@18012af90
void Unwind_18012af90(uint64_t param_1,int64_t param_2)
{
  func_0x180103220((int64_t)*(char *)(param_2 + 0xe8) + 1,param_2 + 0x100,param_2 + 0xc0);
  return;
}

// func_0x18012afd0
void func_0x18012afd0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f720) {
    func_0x180672ec0(&DAT_18083f720);
    if (DAT_18083f720 == -1) {
      lVal_1 = func_0x18012b110(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f718 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f718 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f720);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f730) {
    func_0x180672ec0(&DAT_18083f730);
    if (DAT_18083f730 == -1) {
      DAT_18083f728 = DAT_18083f718;
      _Init_thread_footer(&DAT_18083f730);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018012b056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f728)(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@18012b0e0
void Unwind_18012b0e0(void)
{
  func_0x180672f60(&DAT_18083f720);
  return;
}

// func_0x18012b110
int64_t func_0x18012b110(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x14666e48f8ba5ac) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x55c5798ce444ce8e) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18012b1b4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x55c5798ce444ce8e);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18012b1da;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x55c5798ce444ce8e);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffb181b702U) + -0x10;
  }
LAB_18012b1b4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18012b1da:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}
