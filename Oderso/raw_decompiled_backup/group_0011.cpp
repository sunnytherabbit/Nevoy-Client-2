#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x180110810
int64_t func_0x180110810(int64_t param_1)
{
  return param_1 + 0xee;
}

// func_0x180110870
int64_t func_0x180110870(int64_t param_1)
{
  return param_1 + 0xef;
}

// func_0x1801108d0
int64_t func_0x1801108d0(int64_t param_1)
{
  return param_1 + 0xf0;
}

// func_0x180110930
int64_t func_0x180110930(int64_t param_1)
{
  return param_1 + 0xf1;
}

// func_0x180110990
int64_t func_0x180110990(int64_t param_1)
{
  return param_1 + 0x10;
}

// func_0x1801109f0
int64_t func_0x1801109f0(int64_t param_1)
{
  return param_1 + 0x58;
}

// func_0x180110a50
void func_0x180110a50(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  func_0x18010b100(param_1 + 0x28);
  lVal_6 = *(int64_t *)(param_1 + 0x10);
  if (lVal_6 != 0) {
    lVal_1 = *(int64_t *)(param_1 + 0x18);
    if (lVal_6 == lVal_1) {
      uVal_5 = *(int64_t *)(param_1 + 0x20) - lVal_6;
    }
    else {
      do {
        if (*(char *)(lVal_6 + 0x50) == '\x01') {
          uVal_5 = *(uint64_t *)(lVal_6 + 0x38);
          if (0xf < uVal_5) {
            lVal_2 = *(int64_t *)(lVal_6 + 0x20);
            uVal_3 = uVal_5 + 1;
            lVal_4 = lVal_2;
            if (0xfff < uVal_3) {
              lVal_4 = *(int64_t *)(lVal_2 + -8);
              if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180110b4b;
              uVal_3 = uVal_5 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_4,uVal_3);
          }
          *(uint64_t *)(lVal_6 + 0x30) = 0;
          *(uint64_t *)(lVal_6 + 0x38) = 0xf;
          *(uint8_t *)(lVal_6 + 0x20) = 0;
        }
        lVal_6 = lVal_6 + 0x58;
      } while (lVal_6 != lVal_1);
      lVal_6 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x10);
      uVal_5 = *(int64_t *)(param_1 + 0x20) - lVal_6;
    }
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) {
LAB_180110b4b:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      lVal_6 = *(int64_t *)(lVal_6 + -8);
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x20) = 0;
  }
  return;
}

// func_0x180110b50
int64_t func_0x180110b50(int64_t param_1)
{
  return param_1 + 0x88;
}

// func_0x180110bb0
uint64_t func_0x180110bb0(int64_t param_1,uint8_t param_2,uint8_t param_3)
{
  uint32_t *pU64_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  int64_t lVal_4;
  uint32_t *pU64_5;
  int64_t **ptr2_Long_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint64_t uVal_9;
  uint32_t *pU64_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  int64_t **ptr2_Long_14;
  uint8_t local_50;
  uint8_t local_4f;
  uint32_t local_4c;
  uint64_t local_48 [2];
  
  local_48[0] = 0x185d3740341075e6;
  if (*(uint64_t *)(param_1 + 0x98) != 0) {
    pU64_2 = *(uint64_t **)(param_1 + 0x90);
    if (*(uint64_t *)(param_1 + 0x98) < *(uint64_t *)(param_1 + 0xc0) >> 3) {
      func_0x180115e10(param_1 + 0x88,*pU64_2);
    }
    else {
      *(uint64_t *)pU64_2[1] = 0;
      pU64_2 = (uint64_t *)*pU64_2;
      while (pU64_2 != (uint64_t *)0x0) {
        pU64_3 = (uint64_t *)*pU64_2;
        thunk_FUN_180695dd0(pU64_2,0x28);
        pU64_2 = pU64_3;
      }
      lVal_4 = *(int64_t *)(param_1 + 0x90);
      *(int64_t *)lVal_4 = lVal_4;
      *(int64_t *)(lVal_4 + 8) = lVal_4;
      *(uint64_t *)(param_1 + 0x98) = 0;
      pU64_10 = *(uint32_t **)(param_1 + 0xa0);
      pU64_5 = *(uint32_t **)(param_1 + 0xa8);
      if (pU64_10 != pU64_5) {
        uVal_7 = *(uint32_t *)(param_1 + 0x90);
        uVal_8 = *(uint32_t *)(param_1 + 0x94);
        uVal_11 = (int64_t)pU64_5 + (-8 - (int64_t)pU64_10);
        if (0x17 < uVal_11) {
          uVal_11 = (uVal_11 >> 3) + 1;
          uVal_12 = uVal_11 & 0xfffffffffffffffc;
          uVal_13 = 0;
          do {
            pU64_1 = pU64_10 + uVal_13 * 2;
            *pU64_1 = uVal_7;
            pU64_1[1] = uVal_8;
            pU64_1[2] = uVal_7;
            pU64_1[3] = uVal_8;
            pU64_1 = pU64_10 + uVal_13 * 2 + 4;
            *pU64_1 = uVal_7;
            pU64_1[1] = uVal_8;
            pU64_1[2] = uVal_7;
            pU64_1[3] = uVal_8;
            uVal_13 = uVal_13 + 4;
          } while (uVal_12 != uVal_13);
          pU64_10 = pU64_10 + uVal_12 * 2;
          if (uVal_11 == uVal_12) goto LAB_180110d0c;
        }
        do {
          *pU64_10 = uVal_7;
          pU64_10[1] = uVal_8;
          pU64_10 = pU64_10 + 2;
        } while (pU64_10 != pU64_5);
      }
    }
  }
LAB_180110d0c:
  local_48[0] = 0x187b9c1260987053;
  uVal_9 = SUB168(ZEXT816(0x187b9cc70c628a87) * ZEXT816(0xfa3fef1b82e1ae29),0);
  ptr2_Long_6 = *(int64_t ***)(param_1 + 0x20);
  ptr2_Long_14 = (int64_t **)*ptr2_Long_6;
  if (ptr2_Long_14 != ptr2_Long_6) {
    do {
      local_4c = 0;
      local_50 = param_2;
      local_4f = param_3;
      uVal_9 = func_0x180110db0(param_1 + 0x88,local_48,ptr2_Long_14 + 2,&local_50);
      ptr2_Long_14 = (int64_t **)*ptr2_Long_14;
    } while (ptr2_Long_14 != ptr2_Long_6);
  }
  return uVal_9;
}

// func_0x180110db0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180110db0(float *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)
{
  int iVal_1;
  uint64_t *pU64_2;
  func_ptr_t fnPtr_3;
  uint8_t uVal_4;
  int64_t lVal_5;
  uint64_t *pU64_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t *pU64_12;
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
  uVal_11 = ((uint64_t)*(byte *)((int64_t)param_3 + 3) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 2) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 1) ^
           ((uint64_t)*(byte *)param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
  uVal_11 = ((uint64_t)*(byte *)((int64_t)param_3 + 7) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 6) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 5) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 4) ^ 0xcbf29ce484222325) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
           (uVal_11 >> 2) + uVal_11 * 0x40 ^ uVal_11;
  uVal_11 = ((uint64_t)*(byte *)((int64_t)param_3 + 0xb) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 10) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 9) ^
           ((uint64_t)*(byte *)(param_3 + 1) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
           ) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 + (uVal_11 >> 2) + uVal_11 * 0x40 ^ uVal_11;
  lVal_5 = (*(uint64_t *)(param_1 + 0xc) & uVal_11) * 0x10;
  pU64_6 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_5);
  pU64_12 = *(uint64_t **)(param_1 + 2);
  if (pU64_6 != *(uint64_t **)(param_1 + 2)) {
    iVal_1 = *(int *)(pU64_6 + 2);
    while( true ) {
      if (((*(int *)param_3 == iVal_1) &&
          (*(int *)((int64_t)param_3 + 4) == *(int *)((int64_t)pU64_6 + 0x14))) &&
         (*(int *)(param_3 + 1) == *(int *)(pU64_6 + 3))) {
        uVal_4 = 0;
        goto LAB_1801110da;
      }
      pU64_12 = pU64_6;
      if (pU64_6 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_5)) break;
      pU64_6 = (uint64_t *)pU64_6[1];
      iVal_1 = *(int *)(pU64_6 + 2);
    }
  }
  if (*(int64_t *)(param_1 + 4) == 0x666666666666666) {
    func_0x1806744c0("unordered_map/set too long");
    fnPtr_3 = (func_ptr_t )swi(3);
    pU64_6 = (uint64_t *)(*fnPtr_3)();
    return pU64_6;
  }
  pU64_6 = (uint64_t *)func_0x180672de0(0x28);
  auArr_17._8_8_ = extraout_XMM0_Qb;
  auArr_17._0_8_ = extraout_XMM0_Qa;
  pU64_6[2] = *param_3;
  *(int *)(pU64_6 + 3) = *(int *)(param_3 + 1);
  *(uint64_t *)((int64_t)pU64_6 + 0x1c) = *param_4;
  uVal_7 = *(int64_t *)(param_1 + 4) + 1;
  auArr_15._4_12_ = auArr_17._4_12_;
  if ((int64_t)uVal_7 < 0) {
    fVal_14 = (float)((uint64_t)((uint)uVal_7 & 1) | uVal_7 >> 1);
    auArr_15._0_4_ = fVal_14 + fVal_14;
    fVal_14 = *param_1;
    uVal_7 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_7) goto LAB_180110fae;
LAB_180110f64:
    fVal_18 = (float)((uint64_t)((uint)uVal_7 & 1) | uVal_7 >> 1);
    fVal_18 = auArr_15._0_4_ / (fVal_18 + fVal_18);
    if (fVal_14 < fVal_18) {
LAB_180110fc3:
      auArr_16._4_12_ = auArr_15._4_12_;
      auArr_16._0_4_ = auArr_15._0_4_ / fVal_14;
      auArr_17 = roundss(auArr_16,auArr_16,10);
      uVal_8 = (uint64_t)auArr_17._0_4_;
      uVal_8 = (int64_t)(auArr_17._0_4_ - _DAT_1806ae420) & (int64_t)uVal_8 >> 0x3f | uVal_8;
      uVal_9 = 8;
      if (8 < uVal_8) {
        uVal_9 = uVal_8;
      }
      uVal_10 = uVal_7;
      if (uVal_7 < uVal_9) {
        uVal_10 = uVal_7 * 8;
        if (uVal_10 < uVal_9 || uVal_10 - uVal_9 == 0) {
          uVal_10 = uVal_9;
        }
        if (0x1ff < uVal_7) {
          uVal_10 = uVal_9;
        }
      }
      func_0x180116130(param_1,uVal_10,uVal_8,fVal_18,pU64_6,uVal_19);
      pU64_12 = *(uint64_t **)(param_1 + 2);
      lVal_5 = (*(uint64_t *)(param_1 + 0xc) & uVal_11) * 0x10;
      pU64_2 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_5);
      if (pU64_2 != pU64_12) {
        iVal_1 = *(int *)(pU64_2 + 2);
        pU64_12 = pU64_2;
        while (((*(int *)(pU64_6 + 2) != iVal_1 ||
                (*(int *)((int64_t)pU64_6 + 0x14) != *(int *)((int64_t)pU64_12 + 0x14))) ||
               (*(int *)(pU64_6 + 3) != *(int *)(pU64_12 + 3)))) {
          if (pU64_12 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_5)) goto LAB_180111086;
          pU64_12 = (uint64_t *)pU64_12[1];
          iVal_1 = *(int *)(pU64_12 + 2);
        }
        pU64_12 = (uint64_t *)*pU64_12;
      }
    }
  }
  else {
    auArr_15._0_4_ = (float)uVal_7;
    fVal_14 = *param_1;
    uVal_7 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_7 < 0) goto LAB_180110f64;
LAB_180110fae:
    fVal_18 = auArr_15._0_4_ / (float)uVal_7;
    if (fVal_14 < fVal_18) goto LAB_180110fc3;
  }
LAB_180111086:
  pU64_2 = (uint64_t *)pU64_12[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_6 = pU64_12;
  pU64_6[1] = pU64_2;
  *pU64_2 = pU64_6;
  pU64_12[1] = pU64_6;
  lVal_5 = *(int64_t *)(param_1 + 6);
  lVal_13 = (uVal_11 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_5 + lVal_13) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_5 + lVal_13) = pU64_6;
    *(uint64_t **)(lVal_5 + 8 + lVal_13) = pU64_6;
  }
  else {
    if (*(uint64_t **)(lVal_5 + lVal_13) != pU64_12) {
      uVal_4 = 1;
      if (*(uint64_t **)(lVal_5 + 8 + lVal_13) == pU64_2) {
        *(uint64_t **)(lVal_5 + 8 + lVal_13) = pU64_6;
      }
      goto LAB_1801110da;
    }
    *(uint64_t **)(lVal_5 + lVal_13) = pU64_6;
  }
  uVal_4 = 1;
LAB_1801110da:
  *param_2 = pU64_6;
  *(uint8_t *)(param_2 + 1) = uVal_4;
  return param_2;
}

// Unwind@180111100
void Unwind_180111100(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x20),0x28);
  return;
}

// func_0x180111140
uint64_t func_0x180111140(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x38);
}

// func_0x1801111a0
int64_t func_0x1801111a0(int64_t param_1)
{
  return param_1 + 0x104;
}

// func_0x180111200
int64_t func_0x180111200(int64_t param_1)
{
  return param_1 + 0x10;
}

// func_0x180111260
void func_0x180111260(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t **ptr2_Long_1;
  int64_t lVal_2;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f2f8) {
    func_0x180672ec0(&DAT_18083f2f8);
    if (DAT_18083f2f8 == -1) {
      lVal_2 = func_0x180111480(&DAT_180840f80);
      if (lVal_2 == 0) {
        DAT_18083f2f0 = 0;
      }
      else {
        DAT_18083f2f0 = lVal_2 + *(int *)(lVal_2 + 3) + 7;
      }
      _Init_thread_footer(&DAT_18083f2f8);
    }
  }
  ptr2_Long_1 = (int64_t **)func_0x1801113a0(DAT_18083f2f0,param_1);
                    /* WARNING: Could not recover jumptable at 0x000180111319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(**ptr2_Long_1 + 0x10))(*ptr2_Long_1,param_1,param_2,param_3);
  return;
}

// Unwind@180111370
void Unwind_180111370(void)
{
  func_0x180672f60(&DAT_18083f2f8);
  return;
}

// func_0x1801113a0
int64_t func_0x1801113a0(int64_t *param_1,int *param_2)
{
  char ch_1;
  int iVal_2;
  int iVal_3;
  int64_t lVal_4;
  func_ptr_t fnPtr_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint uVal_9;
  int64_t lVal_10;
  int64_t local_38;
  uint local_30;
  
  lVal_8 = *param_1;
  lVal_10 = *(int64_t *)(lVal_8 + 8);
  uVal_9 = 0;
  lVal_7 = lVal_8;
  if (*(char *)(lVal_10 + 0x19) == '\0') {
    iVal_2 = *param_2;
    lVal_4 = lVal_10;
    do {
      lVal_10 = lVal_4;
      iVal_3 = *(int *)(lVal_10 + 0x20);
      if (iVal_2 <= iVal_3) {
        lVal_7 = lVal_10;
      }
      lVal_4 = *(int64_t *)(lVal_10 + (uint64_t)(iVal_3 < iVal_2) * 0x10);
    } while (*(char *)(lVal_4 + 0x19) == '\0');
    uVal_9 = (uint)(iVal_2 <= iVal_3);
    ch_1 = *(char *)(lVal_7 + 0x19);
  }
  else {
    ch_1 = *(char *)(lVal_8 + 0x19);
  }
  if ((ch_1 != '\0') || (*param_2 < *(int *)(lVal_7 + 0x20))) {
    if (param_1[1] == 0x555555555555555) {
      func_0x1800a17e0();
      fnPtr_5 = (func_ptr_t )swi(3);
      lVal_8 = (*fnPtr_5)();
      return lVal_8;
    }
    pLong_6 = (int64_t *)func_0x180672de0(0x30);
    *(int *)(pLong_6 + 4) = *param_2;
    pLong_6[5] = 0;
    *pLong_6 = lVal_8;
    pLong_6[1] = lVal_8;
    pLong_6[2] = lVal_8;
    *(uint16_t *)(pLong_6 + 3) = 0;
    local_38 = lVal_10;
    local_30 = uVal_9;
    lVal_7 = func_0x1800a1550(param_1,&local_38,pLong_6);
  }
  return lVal_7 + 0x28;
}

// func_0x180111480
int64_t func_0x180111480(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xa3f52b7bd8ee6e8) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x17f400c9bf8b4ea9) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180111524;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x17f400c9bf8b4ea9);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18011154a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x17f400c9bf8b4ea9);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffa87f4e60U) + -0x18;
  }
LAB_180111524:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18011154a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180111560
uint64_t func_0x180111560(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0xc48);
}

// func_0x1801115c0
uint64_t func_0x1801115c0(int64_t param_1)
{
  *(uint8_t *)(param_1 + 0xca0) = 1;
  return 0x187700640aea7d31;
}

// func_0x180111620
uint64_t func_0x180111620(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t *pU64_3;
  
  *(uint8_t *)(param_1 + 0xdad) = 1;
  uVal_2 = SUB168(ZEXT816(0x18abeaddeb8a17b3) * ZEXT816(0xfa40a495ba8be747),0);
  pU64_3 = (uint64_t *)(param_1 + 0xc60);
  if (param_2 != pU64_3) {
    uVal_1 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if (*(uint64_t *)(param_1 + 0xc78) < uVal_1) {
      uVal_2 = func_0x18007bba0(pU64_3,uVal_1);
      return uVal_2;
    }
    if (0xf < *(uint64_t *)(param_1 + 0xc78)) {
      pU64_3 = (uint64_t *)*pU64_3;
    }
    *(uint64_t *)(param_1 + 0xc70) = uVal_1;
    uVal_2 = func_0x1806aa960(pU64_3,param_2,uVal_1);
    *(uint8_t *)((int64_t)pU64_3 + uVal_1) = 0;
  }
  return uVal_2;
}

// func_0x180111730
uint64_t func_0x180111730(int64_t param_1)
{
  *(uint8_t *)(param_1 + 0x1015) = 1;
  return 0x185ecd27c1061136;
}

// func_0x180111790
int64_t func_0x180111790(int64_t param_1)
{
  return param_1 + 0xf98;
}

// func_0x1801117f0
void func_0x1801117f0(uint64_t param_1,uint64_t param_2,uint32_t param_3)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f308) {
    func_0x180672ec0(&DAT_18083f308);
    if (DAT_18083f308 == -1) {
      lVal_1 = func_0x1801118d0(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f300 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f300 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f308);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180111847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f300)(param_1,param_2,param_3);
  return;
}

// Unwind@1801118a0
void Unwind_1801118a0(void)
{
  func_0x180672f60(&DAT_18083f308);
  return;
}

// func_0x1801118d0
int64_t func_0x1801118d0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xd09b9ddbead1a) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x247025b315849355) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180111974;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x247025b315849355);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18011199a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x247025b315849355);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x31f4b6e6U) + -0x30;
  }
LAB_180111974:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18011199a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801119b0
void func_0x1801119b0(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t *param_4)
{
  uint64_t local_40;
  uint32_t local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f318) {
    func_0x180672ec0(&DAT_18083f318);
    if (DAT_18083f318 == -1) {
      DAT_18083f310 = (func_ptr_t )func_0x180111a90(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f318);
    }
  }
  local_40 = *param_4;
  local_38 = *(uint32_t *)(param_4 + 1);
  (*DAT_18083f310)(param_1,param_2,param_3,&local_40);
  return;
}

// Unwind@180111a60
void Unwind_180111a60(void)
{
  func_0x180672f60(&DAT_18083f318);
  return;
}

// func_0x180111a90
int64_t func_0x180111a90(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xcb321c556c26d5a) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x780883296bf46121) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180111b34;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x780883296bf46121);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180111b5a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x780883296bf46121);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x13fce208U) + -0x2a;
  }
LAB_180111b34:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180111b5a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180111b70
int64_t func_0x180111b70(int64_t param_1)
{
  return param_1 + 0x1224;
}

// func_0x180111bd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t * func_0x180111bd0(float *param_1,int64_t *param_2,int *param_3,uint32_t *param_4)
{
  func_ptr_t fnPtr_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint8_t uVal_5;
  int64_t lVal_6;
  uint64_t *pU64_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t *pU64_11;
  int64_t *pLong_12;
  uint64_t uVal_13;
  uint64_t *pU64_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  float fVal_17;
  uint8_t auArr_18 [16];
  float fVal_19;
  uint64_t uVal_20;
  
  uVal_20 = 0xfffffffffffffffe;
  uVal_15 = ((uint64_t)*(byte *)((int64_t)param_3 + 3) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 2) ^
           ((uint64_t)*(byte *)((int64_t)param_3 + 1) ^
           ((uint64_t)*(byte *)param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
           0x100000001b3) * 0x100000001b3;
  lVal_6 = (*(uint64_t *)(param_1 + 0xc) & uVal_15) * 0x10;
  pU64_7 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_6);
  pU64_14 = *(uint64_t **)(param_1 + 2);
  if (pU64_7 != *(uint64_t **)(param_1 + 2)) {
    if (*param_3 != *(int *)(pU64_7 + 2)) {
      do {
        pU64_14 = pU64_7;
        if (pU64_7 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_6)) goto LAB_180111c89;
        pU64_7 = (uint64_t *)pU64_7[1];
      } while (*param_3 != *(int *)(pU64_7 + 2));
    }
    uVal_5 = 0;
    goto LAB_180111e5a;
  }
LAB_180111c89:
  if (*(int64_t *)(param_1 + 4) == 0x2e8ba2e8ba2e8ba) {
    func_0x1806744c0("unordered_map/set too long");
    fnPtr_1 = (func_ptr_t )swi(3);
    pLong_12 = (int64_t *)(*fnPtr_1)();
    return pLong_12;
  }
  pU64_7 = (uint64_t *)func_0x180672de0(0x58);
  *(int *)(pU64_7 + 2) = *param_3;
  uVal_2 = param_4[1];
  uVal_3 = param_4[2];
  uVal_4 = param_4[3];
  *(uint32_t *)((int64_t)pU64_7 + 0x14) = *param_4;
  *(uint32_t *)(pU64_7 + 3) = uVal_2;
  *(uint32_t *)((int64_t)pU64_7 + 0x1c) = uVal_3;
  *(uint32_t *)(pU64_7 + 4) = uVal_4;
  uVal_2 = param_4[5];
  uVal_3 = param_4[6];
  uVal_4 = param_4[7];
  *(uint32_t *)((int64_t)pU64_7 + 0x24) = param_4[4];
  *(uint32_t *)(pU64_7 + 5) = uVal_2;
  *(uint32_t *)((int64_t)pU64_7 + 0x2c) = uVal_3;
  *(uint32_t *)(pU64_7 + 6) = uVal_4;
  uVal_2 = param_4[9];
  uVal_3 = param_4[10];
  uVal_4 = param_4[0xb];
  *(uint32_t *)((int64_t)pU64_7 + 0x34) = param_4[8];
  *(uint32_t *)(pU64_7 + 7) = uVal_2;
  *(uint32_t *)((int64_t)pU64_7 + 0x3c) = uVal_3;
  *(uint32_t *)(pU64_7 + 8) = uVal_4;
  uVal_2 = param_4[0xd];
  uVal_3 = param_4[0xe];
  uVal_4 = param_4[0xf];
  *(uint32_t *)((int64_t)pU64_7 + 0x44) = param_4[0xc];
  *(uint32_t *)(pU64_7 + 9) = uVal_2;
  *(uint32_t *)((int64_t)pU64_7 + 0x4c) = uVal_3;
  *(uint32_t *)(pU64_7 + 10) = uVal_4;
  uVal_8 = *(int64_t *)(param_1 + 4) + 1;
  if ((int64_t)uVal_8 < 0) {
    fVal_17 = (float)((uint64_t)((uint)uVal_8 & 1) | uVal_8 >> 1);
    auArr_18 = ZEXT416((uint)(fVal_17 + fVal_17));
    fVal_17 = *param_1;
    uVal_8 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_8 < 0) goto LAB_180111cf2;
LAB_180111d3f:
    if (fVal_17 < auArr_18._0_4_ / (float)uVal_8) {
LAB_180111d54:
      auArr_18._0_4_ = auArr_18._0_4_ / fVal_17;
      auArr_18 = roundss(auArr_18,auArr_18,10);
      uVal_9 = (uint64_t)auArr_18._0_4_;
      uVal_9 = (int64_t)(auArr_18._0_4_ - _DAT_1806ae420) & (int64_t)uVal_9 >> 0x3f | uVal_9;
      uVal_10 = 8;
      if (8 < uVal_9) {
        uVal_10 = uVal_9;
      }
      uVal_13 = uVal_8;
      if (uVal_8 < uVal_10) {
        uVal_13 = uVal_8 * 8;
        if (uVal_13 < uVal_10 || uVal_13 - uVal_10 == 0) {
          uVal_13 = uVal_10;
        }
        if (0x1ff < uVal_8) {
          uVal_13 = uVal_10;
        }
      }
      func_0x1801163b0(param_1,uVal_13,uVal_9,pU64_7,pU64_7,uVal_20);
      lVal_6 = (*(uint64_t *)(param_1 + 0xc) & uVal_15) * 0x10;
      pU64_11 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_6);
      pU64_14 = *(uint64_t **)(param_1 + 2);
      if (pU64_11 != *(uint64_t **)(param_1 + 2)) {
        if (*(int *)(pU64_7 + 2) != *(int *)(pU64_11 + 2)) {
          do {
            pU64_14 = pU64_11;
            if (pU64_11 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_6)) goto LAB_180111e06;
            pU64_11 = (uint64_t *)pU64_11[1];
          } while (*(int *)(pU64_7 + 2) != *(int *)(pU64_11 + 2));
        }
        pU64_14 = (uint64_t *)*pU64_11;
      }
    }
  }
  else {
    auArr_18 = ZEXT416((uint)(float)uVal_8);
    fVal_17 = *param_1;
    uVal_8 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_8) goto LAB_180111d3f;
LAB_180111cf2:
    fVal_19 = (float)((uint64_t)((uint)uVal_8 & 1) | uVal_8 >> 1);
    if (fVal_17 < auArr_18._0_4_ / (fVal_19 + fVal_19)) goto LAB_180111d54;
  }
LAB_180111e06:
  pU64_11 = (uint64_t *)pU64_14[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_7 = pU64_14;
  pU64_7[1] = pU64_11;
  *pU64_11 = pU64_7;
  pU64_14[1] = pU64_7;
  lVal_6 = *(int64_t *)(param_1 + 6);
  lVal_16 = (uVal_15 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_6 + lVal_16) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_6 + lVal_16) = pU64_7;
    *(uint64_t **)(lVal_6 + 8 + lVal_16) = pU64_7;
  }
  else {
    if (*(uint64_t **)(lVal_6 + lVal_16) != pU64_14) {
      uVal_5 = 1;
      if (*(uint64_t **)(lVal_6 + 8 + lVal_16) == pU64_11) {
        *(uint64_t **)(lVal_6 + 8 + lVal_16) = pU64_7;
      }
      goto LAB_180111e5a;
    }
    *(uint64_t **)(lVal_6 + lVal_16) = pU64_7;
  }
  uVal_5 = 1;
LAB_180111e5a:
  *param_2 = (int64_t)pU64_7;
  *(uint8_t *)(param_2 + 1) = uVal_5;
  return param_2;
}

// Unwind@180111e80
void Unwind_180111e80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x20),0x58);
  return;
}

// func_0x180111ec0
void func_0x180111ec0(int64_t **param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  
  pLong_6 = *param_1;
  pLong_1 = param_1[1];
  if (pLong_6 != pLong_1) {
    do {
      uVal_2 = pLong_6[0xb];
      if (0xf < uVal_2) {
        lVal_3 = pLong_6[8];
        uVal_4 = uVal_2 + 1;
        lVal_5 = lVal_3;
        if (0xfff < uVal_4) {
          lVal_5 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
LAB_180111fa1:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_4 = uVal_2 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_4);
      }
      pLong_6[10] = 0;
      pLong_6[0xb] = 0xf;
      *(uint8_t *)(pLong_6 + 8) = 0;
      uVal_2 = pLong_6[3];
      if (0xf < uVal_2) {
        lVal_3 = *pLong_6;
        uVal_4 = uVal_2 + 1;
        lVal_5 = lVal_3;
        if (0xfff < uVal_4) {
          lVal_5 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_180111fa1;
          uVal_4 = uVal_2 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_4);
      }
      pLong_6[2] = 0;
      pLong_6[3] = 0xf;
      *(uint8_t *)pLong_6 = 0;
      pLong_6 = pLong_6 + 0xc;
    } while (pLong_6 != pLong_1);
    param_1[1] = *param_1;
  }
  return;
}

// func_0x180111fb0
uint64_t * func_0x180111fb0(uint64_t *param_1,uint64_t *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t **ptr2_Long_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t **ptr2_Long_8;
  uint64_t *pU64_9;
  int64_t lVal_10;
  int64_t lVal_11;
  uint8_t auArr_12 [16];
  uint8_t local_70 [24];
  func_ptr_t local_58;
  int64_t local_50;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_1 != param_2) {
    uVal_5 = param_2[2];
    pU64_4 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      pU64_4 = (uint64_t *)*param_2;
    }
    if ((uint64_t)param_1[3] < uVal_5) {
      func_0x18007bba0(param_1,uVal_5);
      uVal_5 = param_2[6];
      if (0xf < (uint64_t)param_2[7]) goto LAB_180112163;
LAB_180112012:
      pU64_4 = param_2 + 4;
      uVal_6 = param_1[7];
      if (uVal_6 < uVal_5) goto LAB_180112178;
LAB_180112027:
      pU64_9 = param_1 + 4;
      if (0xf < uVal_6) {
        pU64_9 = (uint64_t *)param_1[4];
      }
      param_1[6] = uVal_5;
      func_0x1806aa960(pU64_9,pU64_4,uVal_5);
      *(uint8_t *)((int64_t)pU64_9 + uVal_5) = 0;
      uVal_5 = param_2[10];
      if (0xf < (uint64_t)param_2[0xb]) goto LAB_180112192;
LAB_180112057:
      pU64_4 = param_2 + 8;
      uVal_6 = param_1[0xb];
      if (uVal_6 < uVal_5) goto LAB_1801121a7;
LAB_18011206c:
      pU64_9 = param_1 + 8;
      if (0xf < uVal_6) {
        pU64_9 = (uint64_t *)param_1[8];
      }
      param_1[10] = uVal_5;
      func_0x1806aa960(pU64_9,pU64_4,uVal_5);
      *(uint8_t *)((int64_t)pU64_9 + uVal_5) = 0;
      uVal_5 = param_2[0xe];
      if (0xf < (uint64_t)param_2[0xf]) goto LAB_1801121c1;
LAB_18011209c:
      pU64_4 = param_2 + 0xc;
      uVal_6 = param_1[0xf];
      if (uVal_6 < uVal_5) goto LAB_1801121d6;
LAB_1801120b1:
      pU64_9 = param_1 + 0xc;
      if (0xf < uVal_6) {
        pU64_9 = (uint64_t *)param_1[0xc];
      }
      param_1[0xe] = uVal_5;
      func_0x1806aa960(pU64_9,pU64_4,uVal_5);
      *(uint8_t *)((int64_t)pU64_9 + uVal_5) = 0;
      uVal_5 = param_2[0x12];
      if (0xf < (uint64_t)param_2[0x13]) goto LAB_1801121f6;
LAB_1801120e7:
      pU64_4 = param_2 + 0x10;
      uVal_6 = param_1[0x13];
      if (uVal_6 < uVal_5) goto LAB_180112214;
    }
    else {
      pU64_9 = param_1;
      if (0xf < (uint64_t)param_1[3]) {
        pU64_9 = (uint64_t *)*param_1;
      }
      param_1[2] = uVal_5;
      func_0x1806aa960(pU64_9,pU64_4,uVal_5);
      *(uint8_t *)((int64_t)pU64_9 + uVal_5) = 0;
      uVal_5 = param_2[6];
      if ((uint64_t)param_2[7] < 0x10) goto LAB_180112012;
LAB_180112163:
      pU64_4 = (uint64_t *)param_2[4];
      uVal_6 = param_1[7];
      if (uVal_5 <= uVal_6) goto LAB_180112027;
LAB_180112178:
      func_0x18007bba0(param_1 + 4,uVal_5);
      uVal_5 = param_2[10];
      if ((uint64_t)param_2[0xb] < 0x10) goto LAB_180112057;
LAB_180112192:
      pU64_4 = (uint64_t *)param_2[8];
      uVal_6 = param_1[0xb];
      if (uVal_5 <= uVal_6) goto LAB_18011206c;
LAB_1801121a7:
      func_0x18007bba0(param_1 + 8,uVal_5);
      uVal_5 = param_2[0xe];
      if ((uint64_t)param_2[0xf] < 0x10) goto LAB_18011209c;
LAB_1801121c1:
      pU64_4 = (uint64_t *)param_2[0xc];
      uVal_6 = param_1[0xf];
      if (uVal_5 <= uVal_6) goto LAB_1801120b1;
LAB_1801121d6:
      func_0x18007bba0(param_1 + 0xc,uVal_5);
      uVal_5 = param_2[0x12];
      if ((uint64_t)param_2[0x13] < 0x10) goto LAB_1801120e7;
LAB_1801121f6:
      pU64_4 = (uint64_t *)param_2[0x10];
      uVal_6 = param_1[0x13];
      if (uVal_6 < uVal_5) {
LAB_180112214:
        func_0x18007bba0(param_1 + 0x10,uVal_5);
        goto LAB_18011221f;
      }
    }
    pU64_9 = param_1 + 0x10;
    if (0xf < uVal_6) {
      pU64_9 = (uint64_t *)param_1[0x10];
    }
    param_1[0x12] = uVal_5;
    func_0x1806aa960(pU64_9,pU64_4,uVal_5);
    *(uint8_t *)((int64_t)pU64_9 + uVal_5) = 0;
  }
LAB_18011221f:
  func_0x1800fe4f0(param_2 + 0x14,local_70);
  func_0x1800fe440(param_1 + 0x14,local_70);
  if (local_50 != 0) {
    (*local_58)();
  }
  func_0x1800fe4f0(param_2 + 0x1a,local_70);
  func_0x1800fe440(param_1 + 0x1a,local_70);
  if (local_50 != 0) {
    (*local_58)();
  }
  lVal_10 = param_1[0x20];
  lVal_11 = param_1[0x21];
  if (lVal_10 == lVal_11) {
    lVal_10 = param_2[0x20];
    lVal_11 = param_2[0x21];
    if (lVal_10 != lVal_11) {
LAB_1801122e9:
      do {
        while (lVal_1 = param_1[0x21], lVal_1 == param_1[0x22]) {
          func_0x180115040(param_1 + 0x20,lVal_1,lVal_10);
          lVal_10 = lVal_10 + 0x40;
          if (lVal_10 == lVal_11) goto LAB_180112340;
        }
        func_0x1801153c0(lVal_1,lVal_10);
        param_1[0x21] = param_1[0x21] + 0x40;
        lVal_10 = lVal_10 + 0x40;
      } while (lVal_10 != lVal_11);
    }
  }
  else {
    do {
      if (*(int64_t *)(lVal_10 + 0x28) != 0) {
        (**(func_ptr_t *)(lVal_10 + 0x20))();
      }
      lVal_10 = lVal_10 + 0x40;
    } while (lVal_10 != lVal_11);
    param_1[0x21] = param_1[0x20];
    lVal_10 = param_2[0x20];
    lVal_11 = param_2[0x21];
    if (lVal_10 != lVal_11) goto LAB_1801122e9;
  }
LAB_180112340:
  func_0x1800fde90(param_1 + 0x23,param_2 + 0x23);
  *(uint16_t *)(param_1 + 0x25) = *(uint16_t *)(param_2 + 0x25);
  *(uint16_t *)((int64_t)param_1 + 0x12a) = *(uint16_t *)((int64_t)param_2 + 0x12a);
  *(uint16_t *)((int64_t)param_1 + 300) = *(uint16_t *)((int64_t)param_2 + 300);
  *(uint8_t *)((int64_t)param_1 + 0x12e) = *(uint8_t *)((int64_t)param_2 + 0x12e);
  *(uint8_t *)((int64_t)param_1 + 0x12f) = *(uint8_t *)((int64_t)param_2 + 0x12f);
  func_0x180109e80(param_1 + 0x26,param_2 + 0x26);
  func_0x180109e80(param_1 + 0x27,param_2 + 0x27);
  *(uint32_t *)(param_1 + 0x28) = *(uint32_t *)(param_2 + 0x28);
  *(uint16_t *)((int64_t)param_1 + 0x144) = *(uint16_t *)((int64_t)param_2 + 0x144);
  func_0x1800fde90(param_1 + 0x29,param_2 + 0x29);
  if (param_1 != param_2) {
    uVal_5 = param_2[0x2d];
    if ((uint64_t)param_2[0x2e] < 0x10) {
      pU64_4 = param_2 + 0x2b;
      uVal_6 = param_1[0x2e];
      if (uVal_5 <= uVal_6) goto LAB_180112426;
LAB_1801124bf:
      func_0x18007bba0(param_1 + 0x2b,uVal_5);
      uVal_5 = param_2[0x31];
      if ((uint64_t)param_2[0x32] < 0x10) goto LAB_18011245e;
LAB_1801124db:
      pU64_4 = (uint64_t *)param_2[0x2f];
      uVal_6 = param_1[0x32];
      if (uVal_6 < uVal_5) goto LAB_1801124f5;
    }
    else {
      pU64_4 = (uint64_t *)param_2[0x2b];
      uVal_6 = param_1[0x2e];
      if (uVal_6 < uVal_5) goto LAB_1801124bf;
LAB_180112426:
      pU64_9 = param_1 + 0x2b;
      if (0xf < uVal_6) {
        pU64_9 = (uint64_t *)param_1[0x2b];
      }
      param_1[0x2d] = uVal_5;
      func_0x1806aa960(pU64_9,pU64_4,uVal_5);
      *(uint8_t *)((int64_t)pU64_9 + uVal_5) = 0;
      uVal_5 = param_2[0x31];
      if (0xf < (uint64_t)param_2[0x32]) goto LAB_1801124db;
LAB_18011245e:
      pU64_4 = param_2 + 0x2f;
      uVal_6 = param_1[0x32];
      if (uVal_6 < uVal_5) {
LAB_1801124f5:
        func_0x18007bba0(param_1 + 0x2f,uVal_5);
        goto LAB_180112500;
      }
    }
    pU64_9 = param_1 + 0x2f;
    if (0xf < uVal_6) {
      pU64_9 = (uint64_t *)param_1[0x2f];
    }
    param_1[0x31] = uVal_5;
    func_0x1806aa960(pU64_9,pU64_4,uVal_5);
    *(uint8_t *)((int64_t)pU64_9 + uVal_5) = 0;
  }
LAB_180112500:
  func_0x180111ec0(param_1 + 0x33);
  lVal_11 = param_2[0x34];
  for (lVal_10 = param_2[0x33]; lVal_10 != lVal_11; lVal_10 = lVal_10 + 0x60) {
    while (lVal_1 = param_1[0x34], lVal_1 != param_1[0x35]) {
      func_0x1801159a0(lVal_1,lVal_10);
      param_1[0x34] = param_1[0x34] + 0x60;
      lVal_10 = lVal_10 + 0x60;
      if (lVal_10 == lVal_11) goto LAB_180112570;
    }
    func_0x1801155f0(param_1 + 0x33,lVal_1,lVal_10);
  }
LAB_180112570:
  param_1[0x36] = param_2[0x36];
  if (param_1[0x39] != 0) {
    pU64_4 = (uint64_t *)param_1[0x38];
    if ((uint64_t)param_1[0x39] < (uint64_t)param_1[0x3e] >> 3) {
      func_0x180116560(param_1 + 0x37,*pU64_4);
    }
    else {
      *(uint64_t *)pU64_4[1] = 0;
      pU64_4 = (uint64_t *)*pU64_4;
      while (pU64_4 != (uint64_t *)0x0) {
        pU64_9 = (uint64_t *)*pU64_4;
        thunk_FUN_180695dd0(pU64_4,0x58);
        pU64_4 = pU64_9;
      }
      lVal_10 = param_1[0x38];
      *(int64_t *)lVal_10 = lVal_10;
      *(int64_t *)(lVal_10 + 8) = lVal_10;
      param_1[0x39] = 0;
      pU64_4 = (uint64_t *)param_1[0x3a];
      pU64_9 = (uint64_t *)param_1[0x3b];
      if (pU64_4 != pU64_9) {
        uVal_2 = param_1[0x38];
        uVal_5 = (int64_t)pU64_9 + (-8 - (int64_t)pU64_4);
        if (0x17 < uVal_5) {
          uVal_5 = (uVal_5 >> 3) + 1;
          uVal_6 = uVal_5 & 0xfffffffffffffffc;
          auArr_12._8_4_ = (int)uVal_2;
          auArr_12._0_8_ = uVal_2;
          auArr_12._12_4_ = (int)((uint64_t)uVal_2 >> 0x20);
          uVal_7 = 0;
          do {
            *(uint8_t (*)[16])(pU64_4 + uVal_7) = auArr_12;
            *(uint8_t (*)[16])(pU64_4 + uVal_7 + 2) = auArr_12;
            uVal_7 = uVal_7 + 4;
          } while (uVal_6 != uVal_7);
          pU64_4 = pU64_4 + uVal_6;
          if (uVal_5 == uVal_6) goto LAB_18011267c;
        }
        do {
          *pU64_4 = uVal_2;
          pU64_4 = pU64_4 + 1;
        } while (pU64_4 != pU64_9);
      }
    }
  }
LAB_18011267c:
  ptr2_Long_3 = (int64_t **)param_2[0x38];
  ptr2_Long_8 = (int64_t **)*ptr2_Long_3;
  if (ptr2_Long_8 != ptr2_Long_3) {
    do {
      func_0x180111bd0(param_1 + 0x37,local_70,ptr2_Long_8 + 2,(int64_t)ptr2_Long_8 + 0x14);
      ptr2_Long_8 = (int64_t **)*ptr2_Long_8;
    } while (ptr2_Long_8 != ptr2_Long_3);
  }
  *(uint32_t *)(param_1 + 0x3f) = *(uint32_t *)(param_2 + 0x3f);
  *(uint32_t *)((int64_t)param_1 + 0x1fc) = *(uint32_t *)((int64_t)param_2 + 0x1fc);
  *(uint32_t *)(param_1 + 0x40) = *(uint32_t *)(param_2 + 0x40);
  *(uint32_t *)((int64_t)param_1 + 0x204) = *(uint32_t *)((int64_t)param_2 + 0x204);
  *(uint8_t *)(param_1 + 0x41) = *(uint8_t *)(param_2 + 0x41);
  *(uint8_t *)((int64_t)param_1 + 0x209) = *(uint8_t *)((int64_t)param_2 + 0x209);
  *(uint8_t *)((int64_t)param_1 + 0x20a) = *(uint8_t *)((int64_t)param_2 + 0x20a);
  *(uint8_t *)((int64_t)param_1 + 0x20b) = *(uint8_t *)((int64_t)param_2 + 0x20b);
  *(uint8_t *)((int64_t)param_1 + 0x20c) = *(uint8_t *)((int64_t)param_2 + 0x20c);
  *(uint8_t *)((int64_t)param_1 + 0x20d) = *(uint8_t *)((int64_t)param_2 + 0x20d);
  return param_1;
}

// Unwind@180112750
void Unwind_180112750(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x48) != 0) {
    (**(func_ptr_t *)(param_2 + 0x40))();
  }
  return;
}

// Unwind@180112790
void Unwind_180112790(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x48) != 0) {
    (**(func_ptr_t *)(param_2 + 0x40))();
  }
  return;
}

// Unwind@1801127d0
void Unwind_1801127d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801127f0
void Unwind_1801127f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180112810
void Unwind_180112810(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180112830
int64_t func_0x180112830(int64_t param_1)
{
  return param_1 + 0xd0;
}

// func_0x180112890
uint64_t func_0x180112890(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x128);
}

// func_0x1801128f0
void func_0x1801128f0(int64_t *param_1,uint64_t param_2)
{
  uint64_t local_40 [7];
  uint64_t local_8;
  
  local_40[0] = 0x18ac31aa0a6c90aa;
  local_8 = 0;
  (**(func_ptr_t *)(*param_1 + 0x30))(param_1,param_2,local_40);
  return;
}

// func_0x180112970
void func_0x180112970(int64_t *param_1,uint64_t param_2)
{
                    /* WARNING: Could not recover jumptable at 0x0001801129d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0xd8))(param_1,param_2,0x18b3baf9ebfb80fe);
  return;
}

// func_0x1801129e0
int64_t func_0x1801129e0(int64_t param_1)
{
  return param_1 + 0x1d8;
}

// func_0x180112a40
uint8_t func_0x180112a40(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0x3f1);
}

// func_0x180112c00
void func_0x180112c00(uint64_t param_1,uint8_t *param_2,uint *param_3)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  uint8_t local_80 [56];
  uint8_t local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  switch(*param_2) {
  case 4:
    uVal_2 = (uint)(byte)param_2[8];
    break;
  case 5:
  case 6:
    uVal_2 = *(uint *)(param_2 + 8);
    break;
  case 7:
    uVal_2 = (uint)*(double *)(param_2 + 8);
    break;
  default:
    local_28 = func_0x1800833d0(param_2);
    func_0x180083260(local_48,"type must be number, but is ",&local_28);
    func_0x180082f00(local_80,0x12e,local_48,param_2);
    func_0x18067a120(local_80,&DAT_180768700);
    fnPtr_1 = (func_ptr_t )swi(3);
    (*fnPtr_1)();
    return;
  }
  *param_3 = uVal_2;
  return;
}

// Unwind@180112ca0
void Unwind_180112ca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x180112cd0
void func_0x180112cd0(uint8_t (*param_1)[16])
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  lVal_2 = *(int64_t *)*param_1;
  if (lVal_2 != 0) {
    lVal_3 = *(int64_t *)(*param_1 + 8);
    if (lVal_2 != lVal_3) {
      do {
        func_0x18008ae20(lVal_2);
        lVal_2 = lVal_2 + 0x90;
      } while (lVal_2 != lVal_3);
      lVal_2 = *(int64_t *)*param_1;
    }
    uVal_1 = *(int64_t *)param_1[1] - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_1) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_1 = uVal_1 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_1);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x180112d50
uint32_t * func_0x180112d50(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_2 = func_0x180672de0(0x38);
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

// Unwind@180112e70
void Unwind_180112e70(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x180112eb0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x180112eb0
void func_0x180112eb0(int64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  pU64_1 = (uint64_t *)*param_1;
  *(uint64_t *)pU64_1[1] = 0;
  pU64_1 = (uint64_t *)*pU64_1;
  do {
    if (pU64_1 == (uint64_t *)0x0) {
      thunk_FUN_180695dd0(*param_1,0x38);
      return;
    }
    pU64_2 = (uint64_t *)*pU64_1;
    uVal_3 = pU64_1[5];
    if (0xf < uVal_3) {
      lVal_4 = pU64_1[2];
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
    pU64_1[4] = 0;
    pU64_1[5] = 0xf;
    *(uint8_t *)(pU64_1 + 2) = 0;
    thunk_FUN_180695dd0(pU64_1,0x38);
    pU64_1 = pU64_2;
  } while( true );
}

// func_0x180113110
int64_t func_0x180113110(uint64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
  uint32_t *pU64_3;
  uint32_t uVal_4;
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
  int64_t lVal_15;
  int64_t lVal_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  
  uVal_17 = *param_1;
  uVal_22 = ((int64_t)(param_1[1] - uVal_17) >> 4) * -0x71c71c71c71c71c7 + 1;
  uVal_19 = ((int64_t)(param_1[2] - uVal_17) >> 4) * -0x71c71c71c71c71c7;
  uVal_21 = 0x1c71c71c71c71c7 - (uVal_19 >> 1);
  uVal_23 = (uVal_19 >> 1) + uVal_19;
  if (uVal_23 <= uVal_22) {
    uVal_23 = uVal_22;
  }
  if (uVal_21 <= uVal_19 && uVal_19 - uVal_21 != 0) {
    uVal_23 = 0x1c71c71c71c71c7;
  }
  if (0x1c71c71c71c71c7 < uVal_23) {
LAB_180113603:
    func_0x18007ba90();
    goto LAB_180113608;
  }
  if (uVal_23 == 0) {
    uVal_19 = 0;
  }
  else if (uVal_23 < 0x1d) {
    uVal_19 = func_0x180672de0(uVal_23 * 0x90);
  }
  else {
    if (uVal_23 == 0x1c71c71c71c71c7) goto LAB_180113603;
    lVal_15 = func_0x180672de0(uVal_23 * 0x90 + 0x27);
    uVal_19 = lVal_15 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_19 - 8) = lVal_15;
  }
  lVal_15 = uVal_19 + (param_2 - uVal_17);
  lVal_18 = uVal_19 + (param_2 - uVal_17);
  func_0x180113650(lVal_15,param_3);
  uVal_21 = *param_1;
  uVal_17 = param_1[1];
  if (param_2 == uVal_17) {
    if (uVal_21 != param_2) {
      lVal_18 = 0;
      do {
        *(uint8_t (*)[16])(uVal_19 + 0x10 + lVal_18) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_19 + lVal_18) = ZEXT816(0);
        pU64_1 = (uint32_t *)(uVal_21 + lVal_18);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(uVal_21 + 0x10 + lVal_18);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_19 + 0x10 + lVal_18);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        pU64_1 = (uint32_t *)(uVal_19 + lVal_18);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)(uVal_21 + 0x10 + lVal_18) = 0;
        *(uint64_t *)(uVal_21 + 0x18 + lVal_18) = 0xf;
        *(uint8_t *)(uVal_21 + lVal_18) = 0;
        pU64_1 = (uint32_t *)(uVal_21 + 0x20 + lVal_18);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(uVal_21 + 0x30 + lVal_18);
        uVal_8 = *pU64_1;
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_1 = (uint32_t *)(uVal_21 + 0x3c + lVal_18);
        uVal_12 = pU64_1[1];
        uVal_13 = pU64_1[2];
        uVal_14 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_19 + 0x3c + lVal_18);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_12;
        pU64_3[2] = uVal_13;
        pU64_3[3] = uVal_14;
        pU64_1 = (uint32_t *)(uVal_19 + 0x30 + lVal_18);
        *pU64_1 = uVal_8;
        pU64_1[1] = uVal_9;
        pU64_1[2] = uVal_10;
        pU64_1[3] = uVal_11;
        pU64_1 = (uint32_t *)(uVal_19 + 0x20 + lVal_18);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint8_t (*)[16])(uVal_19 + 0x60 + lVal_18) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_19 + 0x50 + lVal_18) = ZEXT816(0);
        pU64_1 = (uint32_t *)(uVal_21 + 0x50 + lVal_18);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(uVal_21 + 0x60 + lVal_18);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_19 + 0x60 + lVal_18);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        pU64_1 = (uint32_t *)(uVal_19 + 0x50 + lVal_18);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)(uVal_21 + 0x60 + lVal_18) = 0;
        *(uint64_t *)(uVal_21 + 0x68 + lVal_18) = 0xf;
        *(uint8_t *)(uVal_21 + 0x50 + lVal_18) = 0;
        *(uint8_t (*)[16])(uVal_19 + 0x80 + lVal_18) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_19 + 0x70 + lVal_18) = ZEXT816(0);
        pU64_1 = (uint32_t *)(uVal_21 + 0x70 + lVal_18);
        uVal_4 = pU64_1[1];
        uVal_5 = pU64_1[2];
        uVal_6 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_21 + 0x80 + lVal_18);
        uVal_7 = *pU64_3;
        uVal_8 = pU64_3[1];
        uVal_9 = pU64_3[2];
        uVal_10 = pU64_3[3];
        pU64_3 = (uint32_t *)(uVal_19 + 0x70 + lVal_18);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_4;
        pU64_3[2] = uVal_5;
        pU64_3[3] = uVal_6;
        pU64_1 = (uint32_t *)(uVal_19 + 0x80 + lVal_18);
        *pU64_1 = uVal_7;
        pU64_1[1] = uVal_8;
        pU64_1[2] = uVal_9;
        pU64_1[3] = uVal_10;
        *(uint64_t *)(uVal_21 + 0x80 + lVal_18) = 0;
        *(uint64_t *)(uVal_21 + 0x88 + lVal_18) = 0xf;
        *(uint8_t *)(uVal_21 + 0x70 + lVal_18) = 0;
        lVal_16 = uVal_21 + lVal_18;
        lVal_18 = lVal_18 + 0x90;
      } while (lVal_16 + 0x90U != param_2);
      goto LAB_18011355e;
    }
  }
  else {
    if (uVal_21 != param_2) {
      lVal_16 = 0;
      do {
        *(uint8_t (*)[16])(uVal_19 + 0x10 + lVal_16) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_19 + lVal_16) = ZEXT816(0);
        pU64_1 = (uint32_t *)(uVal_21 + lVal_16);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(uVal_21 + 0x10 + lVal_16);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_19 + 0x10 + lVal_16);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        pU64_1 = (uint32_t *)(uVal_19 + lVal_16);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)(uVal_21 + 0x10 + lVal_16) = 0;
        *(uint64_t *)(uVal_21 + 0x18 + lVal_16) = 0xf;
        *(uint8_t *)(uVal_21 + lVal_16) = 0;
        pU64_1 = (uint32_t *)(uVal_21 + 0x20 + lVal_16);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(uVal_21 + 0x30 + lVal_16);
        uVal_8 = *pU64_1;
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_1 = (uint32_t *)(uVal_21 + 0x3c + lVal_16);
        uVal_12 = pU64_1[1];
        uVal_13 = pU64_1[2];
        uVal_14 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_19 + 0x3c + lVal_16);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_12;
        pU64_3[2] = uVal_13;
        pU64_3[3] = uVal_14;
        pU64_1 = (uint32_t *)(uVal_19 + 0x30 + lVal_16);
        *pU64_1 = uVal_8;
        pU64_1[1] = uVal_9;
        pU64_1[2] = uVal_10;
        pU64_1[3] = uVal_11;
        pU64_1 = (uint32_t *)(uVal_19 + 0x20 + lVal_16);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint8_t (*)[16])(uVal_19 + 0x60 + lVal_16) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_19 + 0x50 + lVal_16) = ZEXT816(0);
        pU64_1 = (uint32_t *)(uVal_21 + 0x50 + lVal_16);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(uVal_21 + 0x60 + lVal_16);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_19 + 0x60 + lVal_16);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        pU64_1 = (uint32_t *)(uVal_19 + 0x50 + lVal_16);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)(uVal_21 + 0x60 + lVal_16) = 0;
        *(uint64_t *)(uVal_21 + 0x68 + lVal_16) = 0xf;
        *(uint8_t *)(uVal_21 + 0x50 + lVal_16) = 0;
        *(uint8_t (*)[16])(uVal_19 + 0x80 + lVal_16) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_19 + 0x70 + lVal_16) = ZEXT816(0);
        pU64_1 = (uint32_t *)(uVal_21 + 0x70 + lVal_16);
        uVal_4 = pU64_1[1];
        uVal_5 = pU64_1[2];
        uVal_6 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_21 + 0x80 + lVal_16);
        uVal_7 = *pU64_3;
        uVal_8 = pU64_3[1];
        uVal_9 = pU64_3[2];
        uVal_10 = pU64_3[3];
        pU64_3 = (uint32_t *)(uVal_19 + 0x70 + lVal_16);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_4;
        pU64_3[2] = uVal_5;
        pU64_3[3] = uVal_6;
        pU64_1 = (uint32_t *)(uVal_19 + 0x80 + lVal_16);
        *pU64_1 = uVal_7;
        pU64_1[1] = uVal_8;
        pU64_1[2] = uVal_9;
        pU64_1[3] = uVal_10;
        *(uint64_t *)(uVal_21 + 0x80 + lVal_16) = 0;
        *(uint64_t *)(uVal_21 + 0x88 + lVal_16) = 0xf;
        *(uint8_t *)(uVal_21 + 0x70 + lVal_16) = 0;
        lVal_2 = uVal_21 + lVal_16;
        lVal_16 = lVal_16 + 0x90;
      } while (lVal_2 + 0x90U != param_2);
      uVal_17 = param_1[1];
    }
    if (param_2 != uVal_17) {
      lVal_16 = 0;
      do {
        *(uint8_t (*)[16])(lVal_18 + 0xa0 + lVal_16) = ZEXT816(0);
        *(uint8_t (*)[16])(lVal_18 + 0x90 + lVal_16) = ZEXT816(0);
        pU64_1 = (uint32_t *)(param_2 + lVal_16);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(param_2 + 0x10 + lVal_16);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_3 = (uint32_t *)(lVal_18 + 0xa0 + lVal_16);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        pU64_1 = (uint32_t *)(lVal_18 + 0x90 + lVal_16);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)(param_2 + 0x10 + lVal_16) = 0;
        *(uint64_t *)(param_2 + 0x18 + lVal_16) = 0xf;
        *(uint8_t *)(param_2 + lVal_16) = 0;
        pU64_1 = (uint32_t *)(param_2 + 0x20 + lVal_16);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(param_2 + 0x30 + lVal_16);
        uVal_8 = *pU64_1;
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_1 = (uint32_t *)(param_2 + 0x3c + lVal_16);
        uVal_12 = pU64_1[1];
        uVal_13 = pU64_1[2];
        uVal_14 = pU64_1[3];
        pU64_3 = (uint32_t *)(lVal_18 + 0xcc + lVal_16);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_12;
        pU64_3[2] = uVal_13;
        pU64_3[3] = uVal_14;
        pU64_1 = (uint32_t *)(lVal_18 + 0xc0 + lVal_16);
        *pU64_1 = uVal_8;
        pU64_1[1] = uVal_9;
        pU64_1[2] = uVal_10;
        pU64_1[3] = uVal_11;
        pU64_1 = (uint32_t *)(lVal_18 + 0xb0 + lVal_16);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint8_t (*)[16])(lVal_18 + 0xf0 + lVal_16) = ZEXT816(0);
        *(uint8_t (*)[16])(lVal_18 + 0xe0 + lVal_16) = ZEXT816(0);
        pU64_1 = (uint32_t *)(param_2 + 0x50 + lVal_16);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(param_2 + 0x60 + lVal_16);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_3 = (uint32_t *)(lVal_18 + 0xf0 + lVal_16);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_8;
        pU64_3[2] = uVal_9;
        pU64_3[3] = uVal_10;
        pU64_1 = (uint32_t *)(lVal_18 + 0xe0 + lVal_16);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)(param_2 + 0x60 + lVal_16) = 0;
        *(uint64_t *)(param_2 + 0x68 + lVal_16) = 0xf;
        *(uint8_t *)(param_2 + 0x50 + lVal_16) = 0;
        *(uint8_t (*)[16])(lVal_18 + 0x110 + lVal_16) = ZEXT816(0);
        *(uint8_t (*)[16])(lVal_18 + 0x100 + lVal_16) = ZEXT816(0);
        pU64_1 = (uint32_t *)(param_2 + 0x70 + lVal_16);
        uVal_4 = pU64_1[1];
        uVal_5 = pU64_1[2];
        uVal_6 = pU64_1[3];
        pU64_3 = (uint32_t *)(param_2 + 0x80 + lVal_16);
        uVal_7 = *pU64_3;
        uVal_8 = pU64_3[1];
        uVal_9 = pU64_3[2];
        uVal_10 = pU64_3[3];
        pU64_3 = (uint32_t *)(lVal_18 + 0x100 + lVal_16);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_4;
        pU64_3[2] = uVal_5;
        pU64_3[3] = uVal_6;
        pU64_1 = (uint32_t *)(lVal_18 + 0x110 + lVal_16);
        *pU64_1 = uVal_7;
        pU64_1[1] = uVal_8;
        pU64_1[2] = uVal_9;
        pU64_1[3] = uVal_10;
        *(uint64_t *)(param_2 + 0x80 + lVal_16) = 0;
        *(uint64_t *)(param_2 + 0x88 + lVal_16) = 0xf;
        *(uint8_t *)(param_2 + 0x70 + lVal_16) = 0;
        lVal_2 = param_2 + lVal_16;
        lVal_16 = lVal_16 + 0x90;
      } while (lVal_2 + 0x90U != uVal_17);
    }
LAB_18011355e:
    uVal_21 = *param_1;
  }
  if (uVal_21 != 0) {
    uVal_17 = param_1[1];
    if (uVal_21 != uVal_17) {
      do {
        func_0x18008ae20(uVal_21);
        uVal_21 = uVal_21 + 0x90;
      } while (uVal_21 != uVal_17);
      uVal_21 = *param_1;
    }
    uVal_20 = param_1[2] - uVal_21;
    uVal_17 = uVal_21;
    if (0xfff < uVal_20) {
      uVal_17 = *(uint64_t *)(uVal_21 - 8);
      if (0x1f < (uVal_21 - 8) - uVal_17) {
LAB_180113608:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_20 = uVal_20 + 0x27;
    }
    thunk_FUN_180695dd0(uVal_17,uVal_20);
  }
  *param_1 = uVal_19;
  param_1[1] = uVal_22 * 0x90 + uVal_19;
  param_1[2] = uVal_23 * 0x90 + uVal_19;
  return lVal_15;
}

// Unwind@180113610
void Unwind_180113610(uint64_t param_1,int64_t param_2)
{
  func_0x180113930(param_2 + 0x28);
  return;
}

// func_0x180113650
uint8_t (*func_0x180113650(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint8_t (*pArr16_16)[16];
  uint64_t *pU64_17;
  uint64_t uVal_18;
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_1 = param_2[2];
  pU64_17 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    pU64_17 = (uint64_t *)*param_2;
  }
  if ((int64_t)uVal_1 < 0) {
    func_0x18007ba70();
  }
  else {
    if (uVal_1 < 0x10) {
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_17 + 4);
      uVal_4 = *(uint32_t *)(pU64_17 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_17 + 0xc);
      *(uint32_t *)*param_1 = *(uint32_t *)pU64_17;
      *(uint32_t *)(*param_1 + 4) = uVal_3;
      *(uint32_t *)(*param_1 + 8) = uVal_4;
      *(uint32_t *)(*param_1 + 0xc) = uVal_5;
    }
    else {
      uVal_14 = uVal_1 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_14) {
        uVal_18 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        uVal_14 = func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_18 + 0x28);
        uVal_14 = lVal_15 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_14 - 8) = lVal_15;
      }
      *(uint64_t *)*param_1 = uVal_14;
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = uVal_18;
      func_0x1806aa960(uVal_14,pU64_17,uVal_1 + 1);
    }
    uVal_10 = *(uint32_t *)(param_2 + 4);
    uVal_11 = *(uint32_t *)((int64_t)param_2 + 0x24);
    uVal_12 = *(uint32_t *)(param_2 + 5);
    uVal_13 = *(uint32_t *)((int64_t)param_2 + 0x2c);
    uVal_3 = *(uint32_t *)(param_2 + 6);
    uVal_4 = *(uint32_t *)((int64_t)param_2 + 0x34);
    uVal_5 = *(uint32_t *)(param_2 + 7);
    uVal_6 = *(uint32_t *)((int64_t)param_2 + 0x3c);
    uVal_7 = *(uint32_t *)(param_2 + 8);
    uVal_8 = *(uint32_t *)((int64_t)param_2 + 0x44);
    uVal_9 = *(uint32_t *)(param_2 + 9);
    *(uint32_t *)(param_1[3] + 0xc) = *(uint32_t *)((int64_t)param_2 + 0x3c);
    *(uint32_t *)param_1[4] = uVal_7;
    *(uint32_t *)(param_1[4] + 4) = uVal_8;
    *(uint32_t *)(param_1[4] + 8) = uVal_9;
    *(uint32_t *)param_1[3] = uVal_3;
    *(uint32_t *)(param_1[3] + 4) = uVal_4;
    *(uint32_t *)(param_1[3] + 8) = uVal_5;
    *(uint32_t *)(param_1[3] + 0xc) = uVal_6;
    *(uint32_t *)param_1[2] = uVal_10;
    *(uint32_t *)(param_1[2] + 4) = uVal_11;
    *(uint32_t *)(param_1[2] + 8) = uVal_12;
    *(uint32_t *)(param_1[2] + 0xc) = uVal_13;
    param_1[5] = ZEXT816(0);
    param_1[6] = ZEXT816(0);
    uVal_1 = param_2[0xc];
    if ((uint64_t)param_2[0xd] < 0x10) {
      pU64_17 = param_2 + 10;
    }
    else {
      pU64_17 = (uint64_t *)param_2[10];
    }
    if (-1 < (int64_t)uVal_1) {
      if (uVal_1 < 0x10) {
        *(uint64_t *)param_1[6] = uVal_1;
        *(uint64_t *)(param_1[6] + 8) = 0xf;
        uVal_3 = *(uint32_t *)((int64_t)pU64_17 + 4);
        uVal_4 = *(uint32_t *)(pU64_17 + 1);
        uVal_5 = *(uint32_t *)((int64_t)pU64_17 + 0xc);
        *(uint32_t *)param_1[5] = *(uint32_t *)pU64_17;
        *(uint32_t *)(param_1[5] + 4) = uVal_3;
        *(uint32_t *)(param_1[5] + 8) = uVal_4;
        *(uint32_t *)(param_1[5] + 0xc) = uVal_5;
      }
      else {
        uVal_14 = uVal_1 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_14) {
          uVal_18 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          uVal_14 = func_0x180672de0(uVal_18 + 1);
        }
        else {
          lVal_15 = func_0x180672de0(uVal_18 + 0x28);
          uVal_14 = lVal_15 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_14 - 8) = lVal_15;
        }
        *(uint64_t *)param_1[5] = uVal_14;
        *(uint64_t *)param_1[6] = uVal_1;
        *(uint64_t *)(param_1[6] + 8) = uVal_18;
        func_0x1806aa960(uVal_14,pU64_17,uVal_1 + 1);
      }
      param_1[8] = ZEXT816(0);
      param_1[7] = ZEXT816(0);
      uVal_1 = param_2[0x10];
      if ((uint64_t)param_2[0x11] < 0x10) {
        param_2 = param_2 + 0xe;
      }
      else {
        param_2 = (uint64_t *)param_2[0xe];
      }
      if (-1 < (int64_t)uVal_1) {
        if (uVal_1 < 0x10) {
          *(uint64_t *)param_1[8] = uVal_1;
          *(uint64_t *)(param_1[8] + 8) = 0xf;
          uVal_3 = *(uint32_t *)((int64_t)param_2 + 4);
          uVal_4 = *(uint32_t *)(param_2 + 1);
          uVal_5 = *(uint32_t *)((int64_t)param_2 + 0xc);
          *(uint32_t *)param_1[7] = *(uint32_t *)param_2;
          *(uint32_t *)(param_1[7] + 4) = uVal_3;
          *(uint32_t *)(param_1[7] + 8) = uVal_4;
          *(uint32_t *)(param_1[7] + 0xc) = uVal_5;
        }
        else {
          uVal_14 = uVal_1 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_14) {
            uVal_18 = uVal_14;
          }
          if (uVal_14 < 0xfff) {
            uVal_14 = func_0x180672de0(uVal_18 + 1);
          }
          else {
            lVal_15 = func_0x180672de0(uVal_18 + 0x28);
            uVal_14 = lVal_15 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_14 - 8) = lVal_15;
          }
          *(uint64_t *)param_1[7] = uVal_14;
          *(uint64_t *)param_1[8] = uVal_1;
          *(uint64_t *)(param_1[8] + 8) = uVal_18;
          func_0x1806aa960(uVal_14,param_2,uVal_1 + 1);
        }
        return param_1;
      }
      goto LAB_1801138b8;
    }
  }
  func_0x18007ba70();
LAB_1801138b8:
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_16 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_16;
}

// Unwind@1801138d0
void Unwind_1801138d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@180113900
void Unwind_180113900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x180113930
void func_0x180113930(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  lVal_2 = *(int64_t *)(param_1 + 8);
  if (lVal_2 == 0) {
    return;
  }
  lVal_4 = *(int64_t *)(param_1 + 0x18);
  lVal_1 = *(int64_t *)(param_1 + 0x20);
  if (lVal_4 != lVal_1) {
    do {
      func_0x18008ae20(lVal_4);
      lVal_4 = lVal_4 + 0x90;
    } while (lVal_4 != lVal_1);
    lVal_2 = *(int64_t *)(param_1 + 8);
  }
  uVal_3 = *(int64_t *)(param_1 + 0x10) * 0x90;
  lVal_4 = lVal_2;
  if (0xfff < uVal_3) {
    lVal_4 = *(int64_t *)(lVal_2 + -8);
    if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_3 = uVal_3 + 0x27;
  }
  thunk_FUN_180695dd0(lVal_4,uVal_3);
  return;
}

// func_0x1801139b0
uint64_t * func_0x1801139b0(uint64_t *param_1,uint64_t *param_2)
{
  int *pInt_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
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
  uint64_t uVal_18;
  int64_t lVal_19;
  uint64_t *pU64_20;
  uint64_t uVal_21;
  int64_t lVal_22;
  uint64_t uVal_23;
  uint64_t *pU64_24;
  uint64_t *pU64_25;
  uint64_t *pU64_26;
  uint8_t local_69;
  uint64_t *local_68;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  if (param_2[2] != 0) {
    LOCK();
    pInt_1 = (int *)(param_2[2] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(uint16_t *)(param_1 + 3) = *(uint16_t *)(param_2 + 3);
  *(uint32_t *)(param_1 + 4) = *(uint32_t *)(param_2 + 4);
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 7) = ZEXT816(0);
  uVal_21 = param_2[7];
  if ((uint64_t)param_2[8] < 0x10) {
    pU64_20 = param_2 + 5;
  }
  else {
    pU64_20 = (uint64_t *)param_2[5];
  }
  local_68 = param_1;
  if ((int64_t)uVal_21 < 0) {
    func_0x18007ba70();
LAB_1801140a7:
    func_0x18007ba70();
LAB_1801140ad:
    func_0x18007ba70();
LAB_1801140b3:
    func_0x18007ba70();
  }
  else {
    if (uVal_21 < 0x10) {
      param_1[7] = uVal_21;
      param_1[8] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_20 + 4);
      uVal_4 = *(uint32_t *)(pU64_20 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_20 + 0xc);
      *(uint32_t *)(param_1 + 5) = *(uint32_t *)pU64_20;
      *(uint32_t *)((int64_t)param_1 + 0x2c) = uVal_3;
      *(uint32_t *)(param_1 + 6) = uVal_4;
      *(uint32_t *)((int64_t)param_1 + 0x34) = uVal_5;
    }
    else {
      uVal_18 = uVal_21 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_18) {
        uVal_23 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        uVal_18 = func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_22 = func_0x180672de0(uVal_23 + 0x28);
        uVal_18 = lVal_22 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_18 - 8) = lVal_22;
      }
      param_1 = local_68;
      local_68[5] = uVal_18;
      local_68[7] = uVal_21;
      local_68[8] = uVal_23;
      func_0x1806aa960(uVal_18,pU64_20,uVal_21 + 1);
    }
    uVal_3 = *(uint32_t *)((int64_t)param_2 + 0x4c);
    uVal_4 = *(uint32_t *)(param_2 + 10);
    uVal_5 = *(uint32_t *)((int64_t)param_2 + 0x54);
    *(uint32_t *)(param_1 + 9) = *(uint32_t *)(param_2 + 9);
    *(uint32_t *)((int64_t)param_1 + 0x4c) = uVal_3;
    *(uint32_t *)(param_1 + 10) = uVal_4;
    *(uint32_t *)((int64_t)param_1 + 0x54) = uVal_5;
    *(uint32_t *)(param_1 + 0xb) = *(uint32_t *)(param_2 + 0xb);
    *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0xc) = ZEXT816(0);
    uVal_21 = param_2[0xe];
    if ((uint64_t)param_2[0xf] < 0x10) {
      pU64_20 = param_2 + 0xc;
    }
    else {
      pU64_20 = (uint64_t *)param_2[0xc];
    }
    pU64_24 = param_1 + 4;
    if ((int64_t)uVal_21 < 0) goto LAB_1801140a7;
    if (uVal_21 < 0x10) {
      param_1[0xe] = uVal_21;
      param_1[0xf] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_20 + 4);
      uVal_4 = *(uint32_t *)(pU64_20 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_20 + 0xc);
      *(uint32_t *)(param_1 + 0xc) = *(uint32_t *)pU64_20;
      *(uint32_t *)((int64_t)param_1 + 100) = uVal_3;
      *(uint32_t *)(param_1 + 0xd) = uVal_4;
      *(uint32_t *)((int64_t)param_1 + 0x6c) = uVal_5;
    }
    else {
      uVal_18 = uVal_21 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_18) {
        uVal_23 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        uVal_18 = func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_22 = func_0x180672de0(uVal_23 + 0x28);
        uVal_18 = lVal_22 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_18 - 8) = lVal_22;
      }
      param_1 = local_68;
      local_68[0xc] = uVal_18;
      local_68[0xe] = uVal_21;
      local_68[0xf] = uVal_23;
      func_0x1806aa960(uVal_18,pU64_20,uVal_21 + 1);
    }
    uVal_3 = *(uint32_t *)((int64_t)param_2 + 0x84);
    uVal_4 = *(uint32_t *)(param_2 + 0x11);
    uVal_5 = *(uint32_t *)((int64_t)param_2 + 0x8c);
    *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(param_2 + 0x10);
    *(uint32_t *)((int64_t)param_1 + 0x84) = uVal_3;
    *(uint32_t *)(param_1 + 0x11) = uVal_4;
    *(uint32_t *)((int64_t)param_1 + 0x8c) = uVal_5;
    uVal_15 = *(uint32_t *)((int64_t)param_2 + 0x94);
    uVal_16 = *(uint32_t *)(param_2 + 0x13);
    uVal_17 = *(uint32_t *)((int64_t)param_2 + 0x9c);
    uVal_3 = *(uint32_t *)(param_2 + 0x14);
    uVal_4 = *(uint32_t *)((int64_t)param_2 + 0xa4);
    uVal_5 = *(uint32_t *)(param_2 + 0x15);
    uVal_6 = *(uint32_t *)((int64_t)param_2 + 0xac);
    uVal_7 = *(uint32_t *)(param_2 + 0x16);
    uVal_8 = *(uint32_t *)((int64_t)param_2 + 0xb4);
    uVal_9 = *(uint32_t *)(param_2 + 0x17);
    uVal_10 = *(uint32_t *)((int64_t)param_2 + 0xbc);
    uVal_11 = *(uint32_t *)(param_2 + 0x18);
    uVal_12 = *(uint32_t *)((int64_t)param_2 + 0xc4);
    uVal_13 = *(uint32_t *)(param_2 + 0x19);
    uVal_14 = *(uint32_t *)((int64_t)param_2 + 0xcc);
    *(uint32_t *)(param_1 + 0x12) = *(uint32_t *)(param_2 + 0x12);
    *(uint32_t *)((int64_t)param_1 + 0x94) = uVal_15;
    *(uint32_t *)(param_1 + 0x13) = uVal_16;
    *(uint32_t *)((int64_t)param_1 + 0x9c) = uVal_17;
    *(uint32_t *)(param_1 + 0x14) = uVal_3;
    *(uint32_t *)((int64_t)param_1 + 0xa4) = uVal_4;
    *(uint32_t *)(param_1 + 0x15) = uVal_5;
    *(uint32_t *)((int64_t)param_1 + 0xac) = uVal_6;
    *(uint32_t *)(param_1 + 0x16) = uVal_7;
    *(uint32_t *)((int64_t)param_1 + 0xb4) = uVal_8;
    *(uint32_t *)(param_1 + 0x17) = uVal_9;
    *(uint32_t *)((int64_t)param_1 + 0xbc) = uVal_10;
    *(uint32_t *)(param_1 + 0x18) = uVal_11;
    *(uint32_t *)((int64_t)param_1 + 0xc4) = uVal_12;
    *(uint32_t *)(param_1 + 0x19) = uVal_13;
    *(uint32_t *)((int64_t)param_1 + 0xcc) = uVal_14;
    *(uint8_t (*)[16])(param_1 + 0x1a) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0x1c) = ZEXT816(0);
    uVal_21 = param_2[0x1c];
    if ((uint64_t)param_2[0x1d] < 0x10) {
      pU64_20 = param_2 + 0x1a;
    }
    else {
      pU64_20 = (uint64_t *)param_2[0x1a];
    }
    pU64_25 = param_1 + 0xb;
    if ((int64_t)uVal_21 < 0) goto LAB_1801140ad;
    pU64_26 = param_1 + 0x1a;
    if (uVal_21 < 0x10) {
      param_1[0x1c] = uVal_21;
      param_1[0x1d] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_20 + 4);
      uVal_4 = *(uint32_t *)(pU64_20 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_20 + 0xc);
      *(uint32_t *)pU64_26 = *(uint32_t *)pU64_20;
      *(uint32_t *)((int64_t)param_1 + 0xd4) = uVal_3;
      *(uint32_t *)(param_1 + 0x1b) = uVal_4;
      *(uint32_t *)((int64_t)param_1 + 0xdc) = uVal_5;
    }
    else {
      uVal_18 = uVal_21 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_18) {
        uVal_23 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        uVal_18 = func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_22 = func_0x180672de0(uVal_23 + 0x28);
        uVal_18 = lVal_22 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_18 - 8) = lVal_22;
      }
      param_1 = local_68;
      local_68[0x1a] = uVal_18;
      local_68[0x1c] = uVal_21;
      local_68[0x1d] = uVal_23;
      func_0x1806aa960(uVal_18,pU64_20,uVal_21 + 1);
    }
    *(uint8_t (*)[16])(param_1 + 0x1e) = ZEXT816(0);
    param_1[0x20] = 0;
    func_0x180085a50(param_1 + 0x1e,(int64_t)(param_2[0x1f] - param_2[0x1e]) >> 5,param_2 + 0x1e,
                  param_2 + 0x1f,pU64_24,pU64_25,pU64_26);
    *(uint8_t *)((int64_t)param_1 + 0x10a) = *(uint8_t *)((int64_t)param_2 + 0x10a);
    *(uint16_t *)(param_1 + 0x21) = *(uint16_t *)(param_2 + 0x21);
    *(uint8_t (*)[16])(param_1 + 0x22) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0x24) = ZEXT816(0);
    uVal_21 = param_2[0x24];
    if ((uint64_t)param_2[0x25] < 0x10) {
      pU64_20 = param_2 + 0x22;
    }
    else {
      pU64_20 = (uint64_t *)param_2[0x22];
    }
    if ((int64_t)uVal_21 < 0) goto LAB_1801140b3;
    if (uVal_21 < 0x10) {
      param_1[0x24] = uVal_21;
      param_1[0x25] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_20 + 4);
      uVal_4 = *(uint32_t *)(pU64_20 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_20 + 0xc);
      *(uint32_t *)(param_1 + 0x22) = *(uint32_t *)pU64_20;
      *(uint32_t *)((int64_t)param_1 + 0x114) = uVal_3;
      *(uint32_t *)(param_1 + 0x23) = uVal_4;
      *(uint32_t *)((int64_t)param_1 + 0x11c) = uVal_5;
    }
    else {
      uVal_18 = uVal_21 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_18) {
        uVal_23 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        uVal_18 = func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_22 = func_0x180672de0(uVal_23 + 0x28);
        uVal_18 = lVal_22 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_18 - 8) = lVal_22;
      }
      param_1 = local_68;
      local_68[0x22] = uVal_18;
      local_68[0x24] = uVal_21;
      local_68[0x25] = uVal_23;
      func_0x1806aa960(uVal_18,pU64_20,uVal_21 + 1);
    }
    *(uint8_t (*)[16])(param_1 + 0x28) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0x26) = ZEXT816(0);
    uVal_21 = param_2[0x28];
    if ((uint64_t)param_2[0x29] < 0x10) {
      pU64_20 = param_2 + 0x26;
    }
    else {
      pU64_20 = (uint64_t *)param_2[0x26];
    }
    if (-1 < (int64_t)uVal_21) {
      if (uVal_21 < 0x10) {
        param_1[0x28] = uVal_21;
        param_1[0x29] = 0xf;
        uVal_3 = *(uint32_t *)((int64_t)pU64_20 + 4);
        uVal_4 = *(uint32_t *)(pU64_20 + 1);
        uVal_5 = *(uint32_t *)((int64_t)pU64_20 + 0xc);
        *(uint32_t *)(param_1 + 0x26) = *(uint32_t *)pU64_20;
        *(uint32_t *)((int64_t)param_1 + 0x134) = uVal_3;
        *(uint32_t *)(param_1 + 0x27) = uVal_4;
        *(uint32_t *)((int64_t)param_1 + 0x13c) = uVal_5;
      }
      else {
        uVal_18 = uVal_21 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_18) {
          uVal_23 = uVal_18;
        }
        if (uVal_18 < 0xfff) {
          uVal_18 = func_0x180672de0(uVal_23 + 1);
        }
        else {
          lVal_22 = func_0x180672de0(uVal_23 + 0x28);
          uVal_18 = lVal_22 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_18 - 8) = lVal_22;
        }
        param_1 = local_68;
        local_68[0x26] = uVal_18;
        local_68[0x28] = uVal_21;
        local_68[0x29] = uVal_23;
        func_0x1806aa960(uVal_18,pU64_20,uVal_21 + 1);
      }
      func_0x1806aa960(param_1 + 0x2a,param_2 + 0x2a,0x8b);
      *(uint8_t (*)[16])(param_1 + 0x3c) = ZEXT816(0);
      param_1[0x3e] = 0;
      func_0x1801146b0(param_1 + 0x3c,
                    ((int64_t)(param_2[0x3d] - param_2[0x3c]) >> 4) * -0x71c71c71c71c71c7,
                    param_2 + 0x3c,param_2 + 0x3d);
      param_1[0x41] = param_2[0x41];
      uVal_3 = *(uint32_t *)((int64_t)param_2 + 0x1fc);
      uVal_4 = *(uint32_t *)(param_2 + 0x40);
      uVal_5 = *(uint32_t *)((int64_t)param_2 + 0x204);
      *(uint32_t *)(param_1 + 0x3f) = *(uint32_t *)(param_2 + 0x3f);
      *(uint32_t *)((int64_t)param_1 + 0x1fc) = uVal_3;
      *(uint32_t *)(param_1 + 0x40) = uVal_4;
      *(uint32_t *)((int64_t)param_1 + 0x204) = uVal_5;
      *(uint8_t (*)[16])(param_1 + 0x42) = ZEXT816(0);
      param_1[0x44] = 0;
      lVal_22 = param_2[0x43] - param_2[0x42];
      if (lVal_22 == 0) {
LAB_18011400d:
        param_1[0x4b] = param_2[0x4b];
        uVal_3 = *(uint32_t *)(param_2 + 0x45);
        uVal_4 = *(uint32_t *)((int64_t)param_2 + 0x22c);
        uVal_5 = *(uint32_t *)(param_2 + 0x46);
        uVal_6 = *(uint32_t *)((int64_t)param_2 + 0x234);
        uVal_7 = *(uint32_t *)(param_2 + 0x47);
        uVal_8 = *(uint32_t *)((int64_t)param_2 + 0x23c);
        uVal_9 = *(uint32_t *)(param_2 + 0x48);
        uVal_10 = *(uint32_t *)((int64_t)param_2 + 0x244);
        uVal_11 = *(uint32_t *)((int64_t)param_2 + 0x24c);
        uVal_12 = *(uint32_t *)(param_2 + 0x4a);
        uVal_13 = *(uint32_t *)((int64_t)param_2 + 0x254);
        *(uint32_t *)(param_1 + 0x49) = *(uint32_t *)(param_2 + 0x49);
        *(uint32_t *)((int64_t)param_1 + 0x24c) = uVal_11;
        *(uint32_t *)(param_1 + 0x4a) = uVal_12;
        *(uint32_t *)((int64_t)param_1 + 0x254) = uVal_13;
        *(uint32_t *)(param_1 + 0x47) = uVal_7;
        *(uint32_t *)((int64_t)param_1 + 0x23c) = uVal_8;
        *(uint32_t *)(param_1 + 0x48) = uVal_9;
        *(uint32_t *)((int64_t)param_1 + 0x244) = uVal_10;
        *(uint32_t *)(param_1 + 0x45) = uVal_3;
        *(uint32_t *)((int64_t)param_1 + 0x22c) = uVal_4;
        *(uint32_t *)(param_1 + 0x46) = uVal_5;
        *(uint32_t *)((int64_t)param_1 + 0x234) = uVal_6;
        func_0x180114880(param_1 + 0x4c,param_2 + 0x4c,&local_69);
        func_0x180114350(param_1 + 0x54,param_2 + 0x54);
        return param_1;
      }
      uVal_21 = ((int64_t)(param_2[0x43] - param_2[0x42]) >> 4) * -0x5555555555555555;
      if (uVal_21 < 0x555555555555556) {
        if (uVal_21 < 0x56) {
          uVal_21 = func_0x180672de0(lVal_22);
        }
        else {
          lVal_19 = func_0x180672de0(lVal_22 + 0x27);
          uVal_21 = lVal_19 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_21 - 8) = lVal_19;
        }
        param_1 = local_68;
        local_68[0x42] = uVal_21;
        local_68[0x43] = uVal_21;
        local_68[0x44] = lVal_22 + uVal_21;
        lVal_22 = param_2[0x43] - param_2[0x42];
        func_0x1806aa960(uVal_21,param_2[0x42],lVal_22);
        param_1[0x43] = lVal_22 + uVal_21;
        goto LAB_18011400d;
      }
      goto LAB_1801140bf;
    }
  }
  func_0x18007ba70();
LAB_1801140bf:
  func_0x18007c0d0();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_20 = (uint64_t *)(*fnPtr_2)();
  return pU64_20;
}

// Unwind@1801140d0
void Unwind_1801140d0(uint64_t param_1,int64_t param_2)
{
  func_0x18008ad20(*(uint64_t *)(param_2 + 0x60));
  return;
}

// Unwind@180114110
void Unwind_180114110(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x58));
  return;
}

// Unwind@180114150
void Unwind_180114150(uint64_t param_1,int64_t param_2)
{
  func_0x180112cd0(*(uint64_t *)(param_2 + 0x50));
  return;
}

// Unwind@180114190
void Unwind_180114190(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  return;
}

// Unwind@1801141d0
void Unwind_1801141d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x40));
  return;
}

// Unwind@180114210
void Unwind_180114210(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x38));
  return;
}

// Unwind@180114250
void Unwind_180114250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x30));
  return;
}

// Unwind@180114290
void Unwind_180114290(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@1801142d0
void Unwind_1801142d0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(*(uint64_t *)(param_2 + 0x20));
  return;
}

// Unwind@180114310
void Unwind_180114310(uint64_t param_1,int64_t param_2)
{
  func_0x180038830(*(uint64_t *)(param_2 + 0x70));
  return;
}

// func_0x180114350
uint8_t (*func_0x180114350(uint8_t (*param_1)[16],int64_t *param_2))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t (*pArr16_8)[16];
  int64_t *pLong_9;
  uint64_t uVal_10;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  func_0x180085a50(param_1,param_2[1] - *param_2 >> 5,param_2,param_2 + 1);
  *(uint8_t (*)[16])(param_1[2] + 8) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1[1] + 8) = ZEXT816(0);
  uVal_1 = param_2[5];
  if ((uint64_t)param_2[6] < 0x10) {
    pLong_9 = param_2 + 3;
  }
  else {
    pLong_9 = (int64_t *)param_2[3];
  }
  if ((int64_t)uVal_1 < 0) {
    func_0x18007ba70();
  }
  else {
    if (uVal_1 < 0x10) {
      *(uint64_t *)(param_1[2] + 8) = uVal_1;
      *(uint64_t *)param_1[3] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pLong_9 + 4);
      uVal_4 = *(uint32_t *)(pLong_9 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pLong_9 + 0xc);
      *(uint32_t *)(param_1[1] + 8) = *(uint32_t *)pLong_9;
      *(uint32_t *)(param_1[1] + 0xc) = uVal_3;
      *(uint32_t *)param_1[2] = uVal_4;
      *(uint32_t *)(param_1[2] + 4) = uVal_5;
    }
    else {
      uVal_6 = uVal_1 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_6) {
        uVal_10 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        uVal_6 = func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_10 + 0x28);
        uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_6 - 8) = lVal_7;
      }
      *(uint64_t *)(param_1[1] + 8) = uVal_6;
      *(uint64_t *)(param_1[2] + 8) = uVal_1;
      *(uint64_t *)param_1[3] = uVal_10;
      func_0x1806aa960(uVal_6,pLong_9,uVal_1 + 1);
    }
    *(uint8_t (*)[16])(param_1[4] + 8) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1[3] + 8) = ZEXT816(0);
    uVal_1 = param_2[9];
    if ((uint64_t)param_2[10] < 0x10) {
      pLong_9 = param_2 + 7;
    }
    else {
      pLong_9 = (int64_t *)param_2[7];
    }
    if (-1 < (int64_t)uVal_1) {
      if (uVal_1 < 0x10) {
        *(uint64_t *)(param_1[4] + 8) = uVal_1;
        *(uint64_t *)param_1[5] = 0xf;
        uVal_3 = *(uint32_t *)((int64_t)pLong_9 + 4);
        uVal_4 = *(uint32_t *)(pLong_9 + 1);
        uVal_5 = *(uint32_t *)((int64_t)pLong_9 + 0xc);
        *(uint32_t *)(param_1[3] + 8) = *(uint32_t *)pLong_9;
        *(uint32_t *)(param_1[3] + 0xc) = uVal_3;
        *(uint32_t *)param_1[4] = uVal_4;
        *(uint32_t *)(param_1[4] + 4) = uVal_5;
      }
      else {
        uVal_6 = uVal_1 | 0xf;
        uVal_10 = 0x16;
        if (0x16 < uVal_6) {
          uVal_10 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          uVal_6 = func_0x180672de0(uVal_10 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_10 + 0x28);
          uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_6 - 8) = lVal_7;
        }
        *(uint64_t *)(param_1[3] + 8) = uVal_6;
        *(uint64_t *)(param_1[4] + 8) = uVal_1;
        *(uint64_t *)param_1[5] = uVal_10;
        func_0x1806aa960(uVal_6,pLong_9,uVal_1 + 1);
      }
      *(uint8_t (*)[16])(param_1[6] + 8) = ZEXT816(0);
      *(uint8_t (*)[16])(param_1[5] + 8) = ZEXT816(0);
      uVal_1 = param_2[0xd];
      if ((uint64_t)param_2[0xe] < 0x10) {
        pLong_9 = param_2 + 0xb;
      }
      else {
        pLong_9 = (int64_t *)param_2[0xb];
      }
      if (-1 < (int64_t)uVal_1) {
        if (uVal_1 < 0x10) {
          *(uint64_t *)(param_1[6] + 8) = uVal_1;
          *(uint64_t *)param_1[7] = 0xf;
          uVal_3 = *(uint32_t *)((int64_t)pLong_9 + 4);
          uVal_4 = *(uint32_t *)(pLong_9 + 1);
          uVal_5 = *(uint32_t *)((int64_t)pLong_9 + 0xc);
          *(uint32_t *)(param_1[5] + 8) = *(uint32_t *)pLong_9;
          *(uint32_t *)(param_1[5] + 0xc) = uVal_3;
          *(uint32_t *)param_1[6] = uVal_4;
          *(uint32_t *)(param_1[6] + 4) = uVal_5;
        }
        else {
          uVal_6 = uVal_1 | 0xf;
          uVal_10 = 0x16;
          if (0x16 < uVal_6) {
            uVal_10 = uVal_6;
          }
          if (uVal_6 < 0xfff) {
            uVal_6 = func_0x180672de0(uVal_10 + 1);
          }
          else {
            lVal_7 = func_0x180672de0(uVal_10 + 0x28);
            uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_6 - 8) = lVal_7;
          }
          *(uint64_t *)(param_1[5] + 8) = uVal_6;
          *(uint64_t *)(param_1[6] + 8) = uVal_1;
          *(uint64_t *)param_1[7] = uVal_10;
          func_0x1806aa960(uVal_6,pLong_9,uVal_1 + 1);
        }
        uVal_3 = *(uint32_t *)((int64_t)param_2 + 0x7c);
        uVal_4 = *(uint32_t *)(param_2 + 0x10);
        uVal_5 = *(uint32_t *)((int64_t)param_2 + 0x84);
        *(uint32_t *)(param_1[7] + 8) = *(uint32_t *)(param_2 + 0xf);
        *(uint32_t *)(param_1[7] + 0xc) = uVal_3;
        *(uint32_t *)param_1[8] = uVal_4;
        *(uint32_t *)(param_1[8] + 4) = uVal_5;
        return param_1;
      }
      goto LAB_1801145da;
    }
  }
  func_0x18007ba70();
LAB_1801145da:
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_8;
}

// Unwind@1801145f0
void Unwind_1801145f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@180114630
void Unwind_180114630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// Unwind@180114670
void Unwind_180114670(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x1801146b0
void func_0x1801146b0(uint64_t *param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)
{
  int64_t lVal_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  if (param_2 != 0) {
    if (0x1c71c71c71c71c7 < param_2) {
      func_0x18007c0d0();
LAB_1801147a9:
      func_0x18007ba90();
      fnPtr_3 = (func_ptr_t )swi(3);
      (*fnPtr_3)();
      return;
    }
    if (param_2 < 0x1d) {
      uVal_5 = func_0x180672de0(param_2 * 0x90);
    }
    else {
      if (param_2 == 0x1c71c71c71c71c7) goto LAB_1801147a9;
      lVal_4 = func_0x180672de0(param_2 * 0x90 + 0x27);
      uVal_5 = lVal_4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_5 - 8) = lVal_4;
    }
    *param_1 = uVal_5;
    param_1[1] = uVal_5;
    param_1[2] = param_2 * 0x90 + uVal_5;
    lVal_4 = *param_4;
    lVal_2 = *param_3;
    if (lVal_2 != lVal_4) {
      lVal_6 = 0;
      do {
        func_0x180113650(uVal_5 + lVal_6,lVal_2 + lVal_6);
        lVal_1 = lVal_2 + lVal_6;
        lVal_6 = lVal_6 + 0x90;
      } while (lVal_1 + 0x90 != lVal_4);
      uVal_5 = uVal_5 + lVal_6;
    }
    param_1[1] = uVal_5;
  }
  return;
}

// Unwind@1801147b0
void Unwind_1801147b0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_1 = *(int64_t *)(param_2 + 0x30);
  for (lVal_2 = *(int64_t *)(param_2 + 0x28); lVal_2 != 0; lVal_2 = lVal_2 + -0x90) {
    func_0x18008ae20(lVal_1);
    lVal_1 = lVal_1 + 0x90;
  }
  func_0x180114800(param_2 + 0x20);
  return;
}

// func_0x180114800
void func_0x180114800(uint8_t (**param_1)[16])
{
  uint8_t (*pArr16_1)[16];
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  
  pArr16_1 = *param_1;
  if ((pArr16_1 != (uint8_t (*)[16])0x0) && (lVal_3 = *(int64_t *)*pArr16_1, lVal_3 != 0)) {
    lVal_4 = *(int64_t *)(*pArr16_1 + 8);
    if (lVal_3 != lVal_4) {
      do {
        func_0x18008ae20(lVal_3);
        lVal_3 = lVal_3 + 0x90;
      } while (lVal_3 != lVal_4);
      lVal_3 = *(int64_t *)*pArr16_1;
    }
    uVal_2 = *(int64_t *)pArr16_1[1] - lVal_3;
    lVal_4 = lVal_3;
    if (0xfff < uVal_2) {
      lVal_4 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = uVal_2 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_2);
    *pArr16_1 = ZEXT816(0);
    *(uint64_t *)pArr16_1[1] = 0;
  }
  return;
}

// func_0x180114880
uint32_t * func_0x180114880(uint32_t *param_1,uint32_t *param_2)
{
  int64_t **ptr2_Long_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  uint8_t local_60 [16];
  uint32_t *local_50;
  uint32_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  local_50 = param_1 + 2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_2 = func_0x180672de0(0x38);
  *(int64_t *)lVal_2 = lVal_2;
  *(int64_t *)(lVal_2 + 8) = lVal_2;
  *(int64_t *)(param_1 + 2) = lVal_2;
  local_48 = param_1 + 6;
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_2 + 0xc);
  *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_2 + 0xe);
  func_0x180095b10(local_48,*(int64_t *)(param_2 + 8) - *(int64_t *)(param_2 + 6) >> 3,lVal_2);
  ptr2_Long_1 = *(int64_t ***)(param_2 + 2);
  ptr2_Long_3 = (int64_t **)*ptr2_Long_1;
  if (ptr2_Long_3 != ptr2_Long_1) {
    do {
      func_0x180114990(param_1,local_60,ptr2_Long_3 + 2);
      ptr2_Long_3 = (int64_t **)*ptr2_Long_3;
    } while (ptr2_Long_3 != ptr2_Long_1);
  }
  return param_1;
}

// Unwind@180114950
void Unwind_180114950(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x40));
  func_0x180112eb0(*(uint64_t *)(param_2 + 0x38));
  return;
}

// func_0x180114990
/* WARNING: Removing unreachable block (ram,0x000180114d4a) */
/* WARNING: Removing unreachable block (ram,0x000180114da7) */
/* WARNING: Removing unreachable block (ram,0x000180114d54) */
/* WARNING: Removing unreachable block (ram,0x000180114d65) */
/* WARNING: Removing unreachable block (ram,0x000180114d76) */
/* WARNING: Removing unreachable block (ram,0x000180114d80) */
/* WARNING: Removing unreachable block (ram,0x000180114da5) */
/* WARNING: Removing unreachable block (ram,0x000180114dbb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x000180114d4a) */
/* WARNING: Removing unreachable block (ram,0x000180114da7) */
/* WARNING: Removing unreachable block (ram,0x000180114d54) */
/* WARNING: Removing unreachable block (ram,0x000180114d65) */
/* WARNING: Removing unreachable block (ram,0x000180114d76) */
/* WARNING: Removing unreachable block (ram,0x000180114d80) */
/* WARNING: Removing unreachable block (ram,0x000180114da5) */
/* WARNING: Removing unreachable block (ram,0x000180114dbb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180114990(float *param_1,uint64_t *param_2,uint64_t *param_3)
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
  uint8_t local_60 [8];
  uint64_t *local_58;
  uint64_t *local_50;
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
      if (uVal_4 == 0) goto LAB_180114a87;
    }
    uVal_11 = 0;
    do {
      uVal_12 = (*(byte *)((int64_t)pU64_9 + uVal_11 + uVal_7) ^ uVal_12) * 0x100000001b3;
      uVal_11 = uVal_11 + 1;
    } while (uVal_4 != uVal_11);
  }
LAB_180114a87:
  pU64_10 = *(uint64_t **)(param_1 + 2);
  lVal_5 = (*(uint64_t *)(param_1 + 0xc) & uVal_12) * 0x10;
  pU64_8 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_5);
  local_50 = param_2;
  if (pU64_8 != pU64_10) {
    pU64_1 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_5);
    pU64_10 = pU64_8;
    if (uVal_6 == 0) {
      for (; pU64_10[4] != 0; pU64_10 = (uint64_t *)pU64_10[1]) {
        if (pU64_10 == pU64_1) goto LAB_180114b23;
      }
LAB_180114b10:
      *local_50 = pU64_10;
      *(uint8_t *)(local_50 + 1) = 0;
      return local_50;
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
        if (iVal_3 == 0) goto LAB_180114b10;
      }
      if (pU64_10 == pU64_1) break;
      pU64_10 = (uint64_t *)pU64_10[1];
      uVal_4 = pU64_10[4];
    }
  }
LAB_180114b23:
  if (*(int64_t *)(param_1 + 4) == 0x492492492492492) {
    func_0x1806744c0("unordered_map/set too long");
    do {
      invalidInstructionException();
    } while( true );
  }
  auArr_17._0_8_ = func_0x180114e30(local_60,param_1 + 2,param_3);
  auArr_17._8_8_ = extraout_XMM0_Qb;
  uVal_6 = *(int64_t *)(param_1 + 4) + 1;
  auArr_15._4_12_ = auArr_17._4_12_;
  if ((int64_t)uVal_6 < 0) {
    fVal_14 = (float)((uint64_t)((uint)uVal_6 & 1) | uVal_6 >> 1);
    auArr_15._0_4_ = fVal_14 + fVal_14;
    fVal_14 = *param_1;
    uVal_6 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_6 < 0) goto LAB_180114b62;
LAB_180114bac:
    if (auArr_15._0_4_ / (float)uVal_6 <= fVal_14) goto LAB_180114cd8;
  }
  else {
    auArr_15._0_4_ = (float)uVal_6;
    fVal_14 = *param_1;
    uVal_6 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_6) goto LAB_180114bac;
LAB_180114b62:
    fVal_18 = (float)((uint64_t)((uint)uVal_6 & 1) | uVal_6 >> 1);
    if (auArr_15._0_4_ / (fVal_18 + fVal_18) <= fVal_14) goto LAB_180114cd8;
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
        if (pU64_10 == pU64_1) goto LAB_180114cd8;
      }
LAB_180114cd5:
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
          if (iVal_3 == 0) goto LAB_180114cd5;
        }
        if (pU64_10 == pU64_1) break;
        pU64_10 = (uint64_t *)pU64_10[1];
        sz_2 = pU64_10[4];
      }
    }
  }
LAB_180114cd8:
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
    *(uint64_t **)(lVal_5 + 8 + lVal_13) = local_58;
  }
  else if (*(uint64_t **)(lVal_5 + lVal_13) == pU64_10) {
    *(uint64_t **)(lVal_5 + lVal_13) = local_58;
  }
  else if (*(uint64_t **)(lVal_5 + 8 + lVal_13) == pU64_9) {
    *(uint64_t **)(lVal_5 + 8 + lVal_13) = local_58;
  }
  *local_50 = local_58;
  *(uint8_t *)(local_50 + 1) = 1;
  return local_50;
}

// Unwind@180114df0
void Unwind_180114df0(uint64_t param_1,int64_t param_2)
{
  func_0x180114f80(param_2 + 0x28);
  return;
}

// func_0x180114e30
uint64_t * func_0x180114e30(uint64_t *param_1,uint64_t param_2,uint64_t *param_3)
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
  *(uint8_t (*)[16])(lVal_6 + 0x20) = ZEXT816(0);
  *(uint8_t (*)[16])(lVal_6 + 0x10) = ZEXT816(0);
  uVal_1 = param_3[2];
  pU64_9 = param_3;
  if (0xf < (uint64_t)param_3[3]) {
    pU64_9 = (uint64_t *)*param_3;
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
    *(uint32_t *)(lVal_6 + 0x30) = *(uint32_t *)(param_3 + 4);
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_9 = (uint64_t *)(*fnPtr_2)();
  return pU64_9;
}

// Unwind@180114f40
void Unwind_180114f40(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x38);
  }
  return;
}

// func_0x180114f80
void func_0x180114f80(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  if (lVal_1 != 0) {
    uVal_2 = *(uint64_t *)(lVal_1 + 0x28);
    if (0xf < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + 0x10);
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
    *(uint64_t *)(lVal_1 + 0x20) = 0;
    *(uint64_t *)(lVal_1 + 0x28) = 0xf;
    *(uint8_t *)(lVal_1 + 0x10) = 0;
    if (*(int64_t *)(param_1 + 8) != 0) {
      thunk_FUN_180695dd0(*(int64_t *)(param_1 + 8),0x38);
      return;
    }
  }
  return;
}

// func_0x180115040
int64_t func_0x180115040(uint64_t *param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  
  uVal_8 = *param_1;
  uVal_6 = ((int64_t)(param_1[1] - uVal_8) >> 6) + 1;
  uVal_2 = (int64_t)(param_1[2] - uVal_8) >> 6;
  uVal_4 = (uVal_2 >> 1) + uVal_2;
  if (uVal_4 <= uVal_6) {
    uVal_4 = uVal_6;
  }
  if (0x3ffffffffffffff - (uVal_2 >> 1) < uVal_2) {
    uVal_4 = 0x3ffffffffffffff;
  }
  if (uVal_4 >> 0x3a != 0) {
    func_0x18007ba90();
LAB_18011528f:
    do {
      invalidInstructionException();
    } while( true );
  }
  if (uVal_4 == 0) {
    uVal_2 = 0;
  }
  else if (uVal_4 < 0x40) {
    uVal_2 = func_0x180672de0();
  }
  else {
    lVal_1 = func_0x180672de0(uVal_4 * 0x40 | 0x27);
    uVal_2 = lVal_1 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_2 - 8) = lVal_1;
  }
  lVal_1 = uVal_2 + (param_2 - uVal_8);
  lVal_7 = (param_2 - uVal_8) + uVal_2;
  func_0x1801153c0(lVal_1,param_3);
  uVal_8 = *param_1;
  uVal_3 = param_1[1];
  uVal_5 = uVal_2;
  if (param_2 == uVal_3) {
    for (; uVal_8 != param_2; uVal_8 = uVal_8 + 0x40) {
      func_0x1801153c0(uVal_5,uVal_8);
      uVal_5 = uVal_5 + 0x40;
    }
  }
  else {
    if (uVal_8 != param_2) {
      do {
        func_0x1801153c0(uVal_5,uVal_8);
        uVal_8 = uVal_8 + 0x40;
        uVal_5 = uVal_5 + 0x40;
      } while (uVal_8 != param_2);
      uVal_3 = param_1[1];
    }
    if (param_2 != uVal_3) {
      do {
        lVal_7 = lVal_7 + 0x40;
        func_0x1801153c0(lVal_7,param_2);
        param_2 = param_2 + 0x40;
      } while (param_2 != uVal_3);
    }
  }
  uVal_8 = *param_1;
  if (uVal_8 != 0) {
    uVal_3 = param_1[1];
    if (uVal_8 == uVal_3) {
      uVal_3 = param_1[2] - uVal_8;
    }
    else {
      do {
        if (*(int64_t *)(uVal_8 + 0x28) != 0) {
          (**(func_ptr_t *)(uVal_8 + 0x20))();
        }
        uVal_8 = uVal_8 + 0x40;
      } while (uVal_8 != uVal_3);
      uVal_8 = *param_1;
      uVal_3 = param_1[2] - uVal_8;
    }
    if (0xfff < uVal_3) {
      if (0x1f < (uVal_8 - 8) - *(uint64_t *)(uVal_8 - 8)) goto LAB_18011528f;
      uVal_3 = uVal_3 | 0x27;
      uVal_8 = *(uint64_t *)(uVal_8 - 8);
    }
    thunk_FUN_180695dd0(uVal_8,uVal_3);
  }
  *param_1 = uVal_2;
  param_1[1] = uVal_6 * 0x40 + uVal_2;
  param_1[2] = uVal_4 * 0x40 + uVal_2;
  return lVal_1;
}

// Unwind@1801152a0
void Unwind_1801152a0(uint64_t param_1,int64_t param_2)
{
  func_0x1801154c0(param_2 + 0x20);
  return;
}

// Unwind@1801152e0
void Unwind_1801152e0(uint64_t param_1,int64_t param_2)
{
  func_0x180115590(param_2 + 0x58);
  return;
}

// Unwind@180115320
void Unwind_180115320(uint64_t param_1,int64_t param_2)
{
  func_0x180115590(param_2 + 0x58);
  return;
}

// Unwind@180115360
void Unwind_180115360(uint64_t param_1,int64_t param_2)
{
  func_0x180115590(param_2 + 0x58);
  return;
}

// Unwind@1801153a0
void Unwind_1801153a0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801153c0
void func_0x1801153c0(uint32_t *param_1,uint32_t *param_2)
{
  uint8_t local_50 [24];
  func_ptr_t local_38;
  int64_t local_30;
  uint32_t *local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  *(func_ptr_t *)(param_1 + 8) = func_0x1800fe430;
  *(uint64_t *)(param_1 + 10) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  local_20 = param_1;
  func_0x1800fe4f0(param_2 + 2,local_50);
  func_0x1800fe440(local_20 + 2,local_50);
  if (local_30 != 0) {
    (*local_38)();
  }
  local_20[0xe] = param_2[0xe];
  return;
}

// Unwind@180115440
void Unwind_180115440(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x48) != 0) {
    (**(func_ptr_t *)(param_2 + 0x40))();
  }
  return;
}

// Unwind@180115470
void Unwind_180115470(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(*(int64_t *)(param_2 + 0x58) + 0x28) != 0) {
    (**(func_ptr_t *)(*(int64_t *)(param_2 + 0x58) + 0x20))();
  }
  return;
}

// Unwind@1801154a0
void Unwind_1801154a0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801154c0
void func_0x1801154c0(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  lVal_2 = *(int64_t *)(param_1 + 8);
  if (lVal_2 == 0) {
    return;
  }
  lVal_4 = *(int64_t *)(param_1 + 0x18);
  lVal_1 = *(int64_t *)(param_1 + 0x20);
  if (lVal_4 == lVal_1) {
    lVal_4 = *(int64_t *)(param_1 + 0x10);
  }
  else {
    do {
      if (*(int64_t *)(lVal_4 + 0x28) != 0) {
        (**(func_ptr_t *)(lVal_4 + 0x20))();
      }
      lVal_4 = lVal_4 + 0x40;
    } while (lVal_4 != lVal_1);
    lVal_2 = *(int64_t *)(param_1 + 8);
    lVal_4 = *(int64_t *)(param_1 + 0x10);
  }
  uVal_3 = lVal_4 << 6;
  if (0xfff < uVal_3) {
    if (0x1f < (uint64_t)((lVal_2 + -8) - *(int64_t *)(lVal_2 + -8))) {
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_3 = uVal_3 | 0x27;
    lVal_2 = *(int64_t *)(lVal_2 + -8);
  }
  thunk_FUN_180695dd0(lVal_2,uVal_3);
  return;
}

// Unwind@180115570
void Unwind_180115570(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180115590
void func_0x180115590(int64_t *param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_1 = param_1[1];
  for (lVal_2 = *param_1; lVal_2 != lVal_1; lVal_2 = lVal_2 + 0x40) {
    if (*(int64_t *)(lVal_2 + 0x28) != 0) {
      (**(func_ptr_t *)(lVal_2 + 0x20))();
    }
  }
  return;
}

// Unwind@1801155d0
void Unwind_1801155d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801155f0
uint64_t func_0x1801155f0(int64_t *param_1,int64_t param_2,uint64_t param_3)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
  uint32_t *pU64_3;
  func_ptr_t fnPtr_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  int64_t lVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  int64_t lVal_19;
  int64_t *local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_13 = *param_1;
  uVal_15 = (param_1[1] - lVal_13 >> 5) * -0x5555555555555555 + 1;
  uVal_16 = (param_1[2] - lVal_13 >> 5) * -0x5555555555555555;
  uVal_17 = 0x2aaaaaaaaaaaaaa - (uVal_16 >> 1);
  uVal_14 = (uVal_16 >> 1) + uVal_16;
  if (uVal_14 <= uVal_15) {
    uVal_14 = uVal_15;
  }
  if (uVal_17 <= uVal_16 && uVal_16 - uVal_17 != 0) {
    uVal_14 = 0x2aaaaaaaaaaaaaa;
  }
  if (0x2aaaaaaaaaaaaaa < uVal_14) {
    func_0x18007ba90();
    fnPtr_4 = (func_ptr_t )swi(3);
    uVal_14 = (*fnPtr_4)();
    return uVal_14;
  }
  if (uVal_14 == 0) {
    uVal_16 = 0;
  }
  else if (uVal_14 < 0x2b) {
    uVal_16 = func_0x180672de0(uVal_14 * 0x60);
  }
  else {
    lVal_12 = func_0x180672de0(uVal_14 * 0x60 + 0x27);
    uVal_16 = lVal_12 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_16 - 8) = lVal_12;
  }
  uVal_17 = uVal_16 + (param_2 - lVal_13);
  lVal_18 = (param_2 - lVal_13) + uVal_16;
  lVal_19 = lVal_18 + 0x60;
  local_70 = param_1;
  local_68 = uVal_16;
  local_60 = uVal_14;
  local_58 = lVal_19;
  local_50 = lVal_19;
  func_0x1801159a0(uVal_17,param_3);
  lVal_13 = *param_1;
  lVal_12 = param_1[1];
  if (param_2 == lVal_12) {
    local_58 = uVal_17;
    if (lVal_13 != param_2) {
      lVal_12 = 0;
      do {
        *(uint8_t (*)[16])(uVal_16 + 0x10 + lVal_12) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_16 + lVal_12) = ZEXT816(0);
        pU64_1 = (uint32_t *)(lVal_13 + lVal_12);
        uVal_5 = *pU64_1;
        uVal_6 = pU64_1[1];
        uVal_7 = pU64_1[2];
        uVal_8 = pU64_1[3];
        pU64_1 = (uint32_t *)(lVal_13 + 0x10 + lVal_12);
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_16 + 0x10 + lVal_12);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_1 = (uint32_t *)(uVal_16 + lVal_12);
        *pU64_1 = uVal_5;
        pU64_1[1] = uVal_6;
        pU64_1[2] = uVal_7;
        pU64_1[3] = uVal_8;
        *(uint64_t *)(lVal_13 + 0x10 + lVal_12) = 0;
        *(uint64_t *)(lVal_13 + 0x18 + lVal_12) = 0xf;
        *(uint8_t *)(lVal_13 + lVal_12) = 0;
        pU64_1 = (uint32_t *)(lVal_13 + 0x20 + lVal_12);
        uVal_5 = *pU64_1;
        uVal_6 = pU64_1[1];
        uVal_7 = pU64_1[2];
        uVal_8 = pU64_1[3];
        pU64_1 = (uint32_t *)(lVal_13 + 0x29 + lVal_12);
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_16 + 0x29 + lVal_12);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_1 = (uint32_t *)(uVal_16 + 0x20 + lVal_12);
        *pU64_1 = uVal_5;
        pU64_1[1] = uVal_6;
        pU64_1[2] = uVal_7;
        pU64_1[3] = uVal_8;
        *(uint8_t (*)[16])(uVal_16 + 0x50 + lVal_12) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_16 + 0x40 + lVal_12) = ZEXT816(0);
        pU64_1 = (uint32_t *)(lVal_13 + 0x40 + lVal_12);
        uVal_5 = *pU64_1;
        uVal_6 = pU64_1[1];
        uVal_7 = pU64_1[2];
        uVal_8 = pU64_1[3];
        pU64_1 = (uint32_t *)(lVal_13 + 0x50 + lVal_12);
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_16 + 0x50 + lVal_12);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_1 = (uint32_t *)(uVal_16 + 0x40 + lVal_12);
        *pU64_1 = uVal_5;
        pU64_1[1] = uVal_6;
        pU64_1[2] = uVal_7;
        pU64_1[3] = uVal_8;
        *(uint64_t *)(lVal_13 + 0x50 + lVal_12) = 0;
        *(uint64_t *)(lVal_13 + 0x58 + lVal_12) = 0xf;
        *(uint8_t *)(lVal_13 + 0x40 + lVal_12) = 0;
        lVal_18 = lVal_13 + lVal_12;
        lVal_12 = lVal_12 + 0x60;
      } while (lVal_18 + 0x60 != param_2);
    }
  }
  else {
    if (lVal_13 != param_2) {
      lVal_12 = 0;
      do {
        *(uint8_t (*)[16])(uVal_16 + 0x10 + lVal_12) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_16 + lVal_12) = ZEXT816(0);
        pU64_1 = (uint32_t *)(lVal_13 + lVal_12);
        uVal_5 = *pU64_1;
        uVal_6 = pU64_1[1];
        uVal_7 = pU64_1[2];
        uVal_8 = pU64_1[3];
        pU64_1 = (uint32_t *)(lVal_13 + 0x10 + lVal_12);
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_16 + 0x10 + lVal_12);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_1 = (uint32_t *)(uVal_16 + lVal_12);
        *pU64_1 = uVal_5;
        pU64_1[1] = uVal_6;
        pU64_1[2] = uVal_7;
        pU64_1[3] = uVal_8;
        *(uint64_t *)(lVal_13 + 0x10 + lVal_12) = 0;
        *(uint64_t *)(lVal_13 + 0x18 + lVal_12) = 0xf;
        *(uint8_t *)(lVal_13 + lVal_12) = 0;
        pU64_1 = (uint32_t *)(lVal_13 + 0x20 + lVal_12);
        uVal_5 = *pU64_1;
        uVal_6 = pU64_1[1];
        uVal_7 = pU64_1[2];
        uVal_8 = pU64_1[3];
        pU64_1 = (uint32_t *)(lVal_13 + 0x29 + lVal_12);
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_16 + 0x29 + lVal_12);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_1 = (uint32_t *)(uVal_16 + 0x20 + lVal_12);
        *pU64_1 = uVal_5;
        pU64_1[1] = uVal_6;
        pU64_1[2] = uVal_7;
        pU64_1[3] = uVal_8;
        *(uint8_t (*)[16])(uVal_16 + 0x50 + lVal_12) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_16 + 0x40 + lVal_12) = ZEXT816(0);
        pU64_1 = (uint32_t *)(lVal_13 + 0x40 + lVal_12);
        uVal_5 = *pU64_1;
        uVal_6 = pU64_1[1];
        uVal_7 = pU64_1[2];
        uVal_8 = pU64_1[3];
        pU64_1 = (uint32_t *)(lVal_13 + 0x50 + lVal_12);
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_3 = (uint32_t *)(uVal_16 + 0x50 + lVal_12);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_1 = (uint32_t *)(uVal_16 + 0x40 + lVal_12);
        *pU64_1 = uVal_5;
        pU64_1[1] = uVal_6;
        pU64_1[2] = uVal_7;
        pU64_1[3] = uVal_8;
        *(uint64_t *)(lVal_13 + 0x50 + lVal_12) = 0;
        *(uint64_t *)(lVal_13 + 0x58 + lVal_12) = 0xf;
        *(uint8_t *)(lVal_13 + 0x40 + lVal_12) = 0;
        lVal_2 = lVal_13 + lVal_12;
        lVal_12 = lVal_12 + 0x60;
      } while (lVal_2 + 0x60 != param_2);
      lVal_12 = param_1[1];
    }
    local_58 = uVal_16;
    if (param_2 != lVal_12) {
      lVal_13 = 0;
      do {
        *(uint8_t (*)[16])(lVal_18 + 0x70 + lVal_13) = ZEXT816(0);
        *(uint8_t (*)[16])(lVal_19 + lVal_13) = ZEXT816(0);
        pU64_1 = (uint32_t *)(param_2 + lVal_13);
        uVal_5 = *pU64_1;
        uVal_6 = pU64_1[1];
        uVal_7 = pU64_1[2];
        uVal_8 = pU64_1[3];
        pU64_1 = (uint32_t *)(param_2 + 0x10 + lVal_13);
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_3 = (uint32_t *)(lVal_18 + 0x70 + lVal_13);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_1 = (uint32_t *)(lVal_19 + lVal_13);
        *pU64_1 = uVal_5;
        pU64_1[1] = uVal_6;
        pU64_1[2] = uVal_7;
        pU64_1[3] = uVal_8;
        *(uint64_t *)(param_2 + 0x10 + lVal_13) = 0;
        *(uint64_t *)(param_2 + 0x18 + lVal_13) = 0xf;
        *(uint8_t *)(param_2 + lVal_13) = 0;
        pU64_1 = (uint32_t *)(param_2 + 0x20 + lVal_13);
        uVal_5 = *pU64_1;
        uVal_6 = pU64_1[1];
        uVal_7 = pU64_1[2];
        uVal_8 = pU64_1[3];
        pU64_1 = (uint32_t *)(param_2 + 0x29 + lVal_13);
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_3 = (uint32_t *)(lVal_18 + 0x89 + lVal_13);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_1 = (uint32_t *)(lVal_18 + 0x80 + lVal_13);
        *pU64_1 = uVal_5;
        pU64_1[1] = uVal_6;
        pU64_1[2] = uVal_7;
        pU64_1[3] = uVal_8;
        *(uint8_t (*)[16])(lVal_18 + 0xb0 + lVal_13) = ZEXT816(0);
        *(uint8_t (*)[16])(lVal_18 + 0xa0 + lVal_13) = ZEXT816(0);
        pU64_1 = (uint32_t *)(param_2 + 0x40 + lVal_13);
        uVal_5 = *pU64_1;
        uVal_6 = pU64_1[1];
        uVal_7 = pU64_1[2];
        uVal_8 = pU64_1[3];
        pU64_1 = (uint32_t *)(param_2 + 0x50 + lVal_13);
        uVal_9 = pU64_1[1];
        uVal_10 = pU64_1[2];
        uVal_11 = pU64_1[3];
        pU64_3 = (uint32_t *)(lVal_18 + 0xb0 + lVal_13);
        *pU64_3 = *pU64_1;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_1 = (uint32_t *)(lVal_18 + 0xa0 + lVal_13);
        *pU64_1 = uVal_5;
        pU64_1[1] = uVal_6;
        pU64_1[2] = uVal_7;
        pU64_1[3] = uVal_8;
        *(uint64_t *)(param_2 + 0x50 + lVal_13) = 0;
        *(uint64_t *)(param_2 + 0x58 + lVal_13) = 0xf;
        *(uint8_t *)(param_2 + 0x40 + lVal_13) = 0;
        lVal_2 = param_2 + lVal_13;
        lVal_13 = lVal_13 + 0x60;
      } while (lVal_2 + 0x60 != lVal_12);
    }
  }
  local_68 = 0;
  func_0x180115b70(param_1,uVal_16,uVal_15,uVal_14);
  func_0x180115ce0(&local_70);
  return uVal_17;
}

// Unwind@180115960
void Unwind_180115960(uint64_t param_1,int64_t param_2)
{
  func_0x180115ce0(param_2 + 0x28);
  return;
}

// func_0x1801159a0
uint8_t (*func_0x1801159a0(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t (*pArr16_12)[16];
  uint64_t *pU64_13;
  uint64_t uVal_14;
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_1 = param_2[2];
  pU64_13 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    pU64_13 = (uint64_t *)*param_2;
  }
  if ((int64_t)uVal_1 < 0) {
    func_0x18007ba70();
  }
  else {
    if (uVal_1 < 0x10) {
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_13 + 4);
      uVal_4 = *(uint32_t *)(pU64_13 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_13 + 0xc);
      *(uint32_t *)*param_1 = *(uint32_t *)pU64_13;
      *(uint32_t *)(*param_1 + 4) = uVal_3;
      *(uint32_t *)(*param_1 + 8) = uVal_4;
      *(uint32_t *)(*param_1 + 0xc) = uVal_5;
    }
    else {
      uVal_10 = uVal_1 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_10) {
        uVal_14 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        uVal_10 = func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_14 + 0x28);
        uVal_10 = lVal_11 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_10 - 8) = lVal_11;
      }
      *(uint64_t *)*param_1 = uVal_10;
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = uVal_14;
      func_0x1806aa960(uVal_10,pU64_13,uVal_1 + 1);
    }
    uVal_6 = *(uint32_t *)(param_2 + 4);
    uVal_7 = *(uint32_t *)((int64_t)param_2 + 0x24);
    uVal_8 = *(uint32_t *)(param_2 + 5);
    uVal_9 = *(uint32_t *)((int64_t)param_2 + 0x2c);
    uVal_3 = *(uint32_t *)((int64_t)param_2 + 0x2d);
    uVal_4 = *(uint32_t *)((int64_t)param_2 + 0x31);
    uVal_5 = *(uint32_t *)((int64_t)param_2 + 0x35);
    *(uint32_t *)(param_1[2] + 9) = *(uint32_t *)((int64_t)param_2 + 0x29);
    *(uint32_t *)(param_1[2] + 0xd) = uVal_3;
    *(uint32_t *)(param_1[3] + 1) = uVal_4;
    *(uint32_t *)(param_1[3] + 5) = uVal_5;
    *(uint32_t *)param_1[2] = uVal_6;
    *(uint32_t *)(param_1[2] + 4) = uVal_7;
    *(uint32_t *)(param_1[2] + 8) = uVal_8;
    *(uint32_t *)(param_1[2] + 0xc) = uVal_9;
    param_1[4] = ZEXT816(0);
    param_1[5] = ZEXT816(0);
    uVal_1 = param_2[10];
    if ((uint64_t)param_2[0xb] < 0x10) {
      param_2 = param_2 + 8;
    }
    else {
      param_2 = (uint64_t *)param_2[8];
    }
    if (-1 < (int64_t)uVal_1) {
      if (uVal_1 < 0x10) {
        *(uint64_t *)param_1[5] = uVal_1;
        *(uint64_t *)(param_1[5] + 8) = 0xf;
        uVal_3 = *(uint32_t *)((int64_t)param_2 + 4);
        uVal_4 = *(uint32_t *)(param_2 + 1);
        uVal_5 = *(uint32_t *)((int64_t)param_2 + 0xc);
        *(uint32_t *)param_1[4] = *(uint32_t *)param_2;
        *(uint32_t *)(param_1[4] + 4) = uVal_3;
        *(uint32_t *)(param_1[4] + 8) = uVal_4;
        *(uint32_t *)(param_1[4] + 0xc) = uVal_5;
      }
      else {
        uVal_10 = uVal_1 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_10) {
          uVal_14 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          uVal_10 = func_0x180672de0(uVal_14 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_14 + 0x28);
          uVal_10 = lVal_11 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_10 - 8) = lVal_11;
        }
        *(uint64_t *)param_1[4] = uVal_10;
        *(uint64_t *)param_1[5] = uVal_1;
        *(uint64_t *)(param_1[5] + 8) = uVal_14;
        func_0x1806aa960(uVal_10,param_2,uVal_1 + 1);
      }
      return param_1;
    }
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_12 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_12;
}

// Unwind@180115b40
void Unwind_180115b40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x180115b70
void func_0x180115b70(int64_t **param_1,int64_t *param_2,int64_t param_3,int64_t param_4)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  pLong_6 = *param_1;
  if (pLong_6 != (int64_t *)0x0) {
    pLong_1 = param_1[1];
    if (pLong_6 == pLong_1) {
      uVal_5 = (int64_t)param_1[2] - (int64_t)pLong_6;
    }
    else {
      do {
        uVal_5 = pLong_6[0xb];
        if (0xf < uVal_5) {
          lVal_2 = pLong_6[8];
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180115cda;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        pLong_6[10] = 0;
        pLong_6[0xb] = 0xf;
        *(uint8_t *)(pLong_6 + 8) = 0;
        uVal_5 = pLong_6[3];
        if (0xf < uVal_5) {
          lVal_2 = *pLong_6;
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180115cda;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        pLong_6[2] = 0;
        pLong_6[3] = 0xf;
        *(uint8_t *)pLong_6 = 0;
        pLong_6 = pLong_6 + 0xc;
      } while (pLong_6 != pLong_1);
      pLong_6 = *param_1;
      uVal_5 = (int64_t)param_1[2] - (int64_t)pLong_6;
    }
    if (0xfff < uVal_5) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_6 + (-8 - (int64_t)(int64_t *)pLong_6[-1]))) {
LAB_180115cda:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      pLong_6 = (int64_t *)pLong_6[-1];
    }
    thunk_FUN_180695dd0(pLong_6,uVal_5);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0xc;
  param_1[2] = param_2 + param_4 * 0xc;
  return;
}

// func_0x180115ce0
void func_0x180115ce0(int64_t param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  lVal_4 = *(int64_t *)(param_1 + 8);
  if (lVal_4 == 0) {
    return;
  }
  pLong_6 = *(int64_t **)(param_1 + 0x18);
  pLong_1 = *(int64_t **)(param_1 + 0x20);
  if (pLong_6 != pLong_1) {
    do {
      uVal_5 = pLong_6[0xb];
      if (0xf < uVal_5) {
        lVal_4 = pLong_6[8];
        uVal_2 = uVal_5 + 1;
        lVal_3 = lVal_4;
        if (0xfff < uVal_2) {
          lVal_3 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_180115e0b;
          uVal_2 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_2);
      }
      pLong_6[10] = 0;
      pLong_6[0xb] = 0xf;
      *(uint8_t *)(pLong_6 + 8) = 0;
      uVal_5 = pLong_6[3];
      if (0xf < uVal_5) {
        lVal_4 = *pLong_6;
        uVal_2 = uVal_5 + 1;
        lVal_3 = lVal_4;
        if (0xfff < uVal_2) {
          lVal_3 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_180115e0b;
          uVal_2 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_2);
      }
      pLong_6[2] = 0;
      pLong_6[3] = 0xf;
      *(uint8_t *)pLong_6 = 0;
      pLong_6 = pLong_6 + 0xc;
    } while (pLong_6 != pLong_1);
    lVal_4 = *(int64_t *)(param_1 + 8);
  }
  uVal_5 = *(int64_t *)(param_1 + 0x10) * 0x60;
  lVal_3 = lVal_4;
  if (0xfff < uVal_5) {
    lVal_3 = *(int64_t *)(lVal_4 + -8);
    if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) {
LAB_180115e0b:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_5 = uVal_5 + 0x27;
  }
  thunk_FUN_180695dd0(lVal_3,uVal_5);
  return;
}

// func_0x180115e10
int64_t ** func_0x180115e10(int64_t param_1,int64_t **param_2,int64_t **param_3)
{
  int64_t **ptr2_Long_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  int64_t **ptr2_Long_5;
  uint64_t uVal_6;
  int64_t **ptr2_Long_7;
  int64_t **ptr2_Long_8;
  int64_t lVal_9;
  
  if (param_2 == param_3) {
    return param_3;
  }
  ptr2_Long_1 = *(int64_t ***)(param_1 + 8);
  lVal_2 = *(int64_t *)(param_1 + 0x18);
  ptr2_Long_3 = (int64_t **)param_2[1];
  uVal_6 = ((uint64_t)*(byte *)((int64_t)param_2 + 0x13) ^
          ((uint64_t)*(byte *)((int64_t)param_2 + 0x12) ^
          ((uint64_t)*(byte *)((int64_t)param_2 + 0x11) ^
          ((uint64_t)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3)
          * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
  uVal_6 = ((uint64_t)*(byte *)((int64_t)param_2 + 0x17) ^
          ((uint64_t)*(byte *)((int64_t)param_2 + 0x16) ^
          ((uint64_t)*(byte *)((int64_t)param_2 + 0x15) ^
          ((uint64_t)*(byte *)((int64_t)param_2 + 0x14) ^ 0xcbf29ce484222325) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 + (uVal_6 >> 2) + uVal_6 * 0x40
          ^ uVal_6;
  lVal_9 = ((((uint64_t)*(byte *)((int64_t)param_2 + 0x1b) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x1a) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x19) ^
            ((uint64_t)*(byte *)(param_2 + 3) ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
            (uVal_6 >> 2) + uVal_6 * 0x40 ^ uVal_6) & *(uint64_t *)(param_1 + 0x30)) * 0x10;
  ptr2_Long_4 = *(int64_t ***)(lVal_2 + lVal_9);
  ptr2_Long_5 = *(int64_t ***)(lVal_2 + 8 + lVal_9);
  ptr2_Long_7 = param_2;
  if (ptr2_Long_4 == param_2) {
    do {
      ptr2_Long_8 = (int64_t **)*ptr2_Long_7;
      thunk_FUN_180695dd0(ptr2_Long_7,0x28);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_7 == ptr2_Long_5) goto LAB_180115fa6;
      ptr2_Long_7 = ptr2_Long_8;
    } while (ptr2_Long_8 != param_3);
LAB_180116102:
    *(int64_t ***)(lVal_2 + lVal_9) = ptr2_Long_8;
  }
  else {
    do {
      ptr2_Long_8 = (int64_t **)*ptr2_Long_7;
      thunk_FUN_180695dd0(ptr2_Long_7,0x28);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_7 == ptr2_Long_5) goto LAB_180115fa6;
      ptr2_Long_7 = ptr2_Long_8;
    } while (ptr2_Long_8 != param_3);
  }
LAB_18011610b:
  *ptr2_Long_3 = (int64_t *)ptr2_Long_8;
  ptr2_Long_8[1] = (int64_t *)ptr2_Long_3;
  return param_3;
LAB_180115fa6:
  ptr2_Long_5 = ptr2_Long_3;
  if (ptr2_Long_4 == param_2) {
    *(int64_t ***)(lVal_2 + lVal_9) = ptr2_Long_1;
    ptr2_Long_5 = ptr2_Long_1;
  }
  *(int64_t ***)(lVal_2 + 8 + lVal_9) = ptr2_Long_5;
  while (ptr2_Long_8 != param_3) {
    uVal_6 = ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x13) ^
            ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x12) ^
            ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x11) ^
            ((uint64_t)*(byte *)(ptr2_Long_8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
    uVal_6 = ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x17) ^
            ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x16) ^
            ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x15) ^
            ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x14) ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
            (uVal_6 >> 2) + uVal_6 * 0x40 ^ uVal_6;
    lVal_9 = ((((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x1b) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x1a) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x19) ^
              ((uint64_t)*(byte *)(ptr2_Long_8 + 3) ^ 0xcbf29ce484222325) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
              (uVal_6 >> 2) + uVal_6 * 0x40 ^ uVal_6) & *(uint64_t *)(param_1 + 0x30)) * 0x10;
    ptr2_Long_4 = *(int64_t ***)(lVal_2 + 8 + lVal_9);
    ptr2_Long_5 = ptr2_Long_8;
    while( true ) {
      ptr2_Long_8 = (int64_t **)*ptr2_Long_5;
      thunk_FUN_180695dd0(ptr2_Long_5,0x28);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_5 == ptr2_Long_4) break;
      ptr2_Long_5 = ptr2_Long_8;
      if (ptr2_Long_8 == param_3) goto LAB_180116102;
    }
    *(int64_t ***)(lVal_2 + lVal_9) = ptr2_Long_1;
    *(int64_t ***)(lVal_2 + 8 + lVal_9) = ptr2_Long_1;
  }
  goto LAB_18011610b;
}

// func_0x180116130
void func_0x180116130(int64_t param_1,uint64_t param_2)
{
  int64_t **ptr2_Long_1;
  int64_t **ptr2_Long_2;
  int64_t **ptr2_Long_3;
  int64_t *pLong_4;
  int64_t **ptr2_Long_5;
  int64_t *pLong_6;
  int64_t *pLong_7;
  func_ptr_t fnPtr_8;
  int64_t **ptr2_Long_9;
  byte bFlag_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  int64_t **ptr2_Long_13;
  int64_t lVal_14;
  
  if (0x800000000000000 < param_2) {
    func_0x1806744c0("invalid hash bucket count");
    fnPtr_8 = (func_ptr_t )swi(3);
    (*fnPtr_8)();
    return;
  }
  uVal_11 = param_2 - 1 | 1;
  lVal_12 = 0x3f;
  if (uVal_11 != 0) {
    for (; uVal_11 >> lVal_12 == 0; lVal_12 = lVal_12 + -1) {
    }
  }
  bFlag_10 = -((byte)lVal_12 ^ 0x3f);
  lVal_12 = 1L << (bFlag_10 & 0x3f);
  ptr2_Long_1 = *(int64_t ***)(param_1 + 8);
  func_0x180095b10(param_1 + 0x18,2L << (bFlag_10 & 0x3f),ptr2_Long_1);
  *(int64_t *)(param_1 + 0x30) = lVal_12 + -1;
  *(int64_t *)(param_1 + 0x38) = lVal_12;
  ptr2_Long_9 = (int64_t **)**(uint64_t **)(param_1 + 8);
joined_r0x00018011619d:
  do {
    if (ptr2_Long_9 == ptr2_Long_1) {
      return;
    }
    ptr2_Long_3 = (int64_t **)*ptr2_Long_9;
    uVal_11 = ((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x13) ^
             ((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x12) ^
             ((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x11) ^
             ((uint64_t)*(byte *)(ptr2_Long_9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
             0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
    uVal_11 = ((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x17) ^
             ((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x16) ^
             ((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x15) ^
             ((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x14) ^ 0xcbf29ce484222325) * 0x100000001b3)
             * 0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
             (uVal_11 >> 2) + uVal_11 * 0x40 ^ uVal_11;
    lVal_12 = *(int64_t *)(param_1 + 0x18);
    lVal_14 = ((((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x1b) ^
               ((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x1a) ^
               ((uint64_t)*(byte *)((int64_t)ptr2_Long_9 + 0x19) ^
               ((uint64_t)*(byte *)(ptr2_Long_9 + 3) ^ 0xcbf29ce484222325) * 0x100000001b3) *
               0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
               (uVal_11 >> 2) + uVal_11 * 0x40 ^ uVal_11) & *(uint64_t *)(param_1 + 0x30)) * 0x10;
    if (*(int64_t ***)(lVal_12 + lVal_14) == ptr2_Long_1) {
      *(int64_t ***)(lVal_12 + lVal_14) = ptr2_Long_9;
    }
    else {
      ptr2_Long_13 = *(int64_t ***)(lVal_12 + 8 + lVal_14);
      if (((*(int *)(ptr2_Long_9 + 2) != *(int *)(ptr2_Long_13 + 2)) ||
          (*(int *)((int64_t)ptr2_Long_9 + 0x14) != *(int *)((int64_t)ptr2_Long_13 + 0x14))) ||
         (*(int *)(ptr2_Long_9 + 3) != *(int *)(ptr2_Long_13 + 3))) {
        do {
          if (*(int64_t ***)(lVal_12 + lVal_14) == ptr2_Long_13) {
            pLong_4 = ptr2_Long_9[1];
            *pLong_4 = (int64_t)ptr2_Long_3;
            ptr2_Long_5 = (int64_t **)ptr2_Long_3[1];
            *ptr2_Long_5 = (int64_t *)ptr2_Long_13;
            ptr2_Long_2 = (int64_t **)ptr2_Long_13[1];
            *ptr2_Long_2 = (int64_t *)ptr2_Long_9;
            ptr2_Long_13[1] = (int64_t *)ptr2_Long_5;
            ptr2_Long_3[1] = pLong_4;
            ptr2_Long_9[1] = (int64_t *)ptr2_Long_2;
            *(int64_t ***)(lVal_12 + lVal_14) = ptr2_Long_9;
            ptr2_Long_9 = ptr2_Long_3;
            goto joined_r0x00018011619d;
          }
          ptr2_Long_13 = (int64_t **)ptr2_Long_13[1];
        } while (((*(int *)(ptr2_Long_9 + 2) != *(int *)(ptr2_Long_13 + 2)) ||
                 (*(int *)((int64_t)ptr2_Long_9 + 0x14) != *(int *)((int64_t)ptr2_Long_13 + 0x14))) ||
                (*(int *)(ptr2_Long_9 + 3) != *(int *)(ptr2_Long_13 + 3)));
        pLong_4 = *ptr2_Long_13;
        pLong_6 = ptr2_Long_9[1];
        *pLong_6 = (int64_t)ptr2_Long_3;
        ptr2_Long_13 = (int64_t **)ptr2_Long_3[1];
        *ptr2_Long_13 = pLong_4;
        pLong_7 = (int64_t *)pLong_4[1];
        *pLong_7 = (int64_t)ptr2_Long_9;
        pLong_4[1] = (int64_t)ptr2_Long_13;
        ptr2_Long_3[1] = pLong_6;
        ptr2_Long_9[1] = pLong_7;
        ptr2_Long_9 = ptr2_Long_3;
        goto joined_r0x00018011619d;
      }
      ptr2_Long_13 = (int64_t **)*ptr2_Long_13;
      if (ptr2_Long_13 != ptr2_Long_9) {
        pLong_4 = ptr2_Long_9[1];
        *pLong_4 = (int64_t)ptr2_Long_3;
        ptr2_Long_5 = (int64_t **)ptr2_Long_3[1];
        *ptr2_Long_5 = (int64_t *)ptr2_Long_13;
        pLong_6 = ptr2_Long_13[1];
        *pLong_6 = (int64_t)ptr2_Long_9;
        ptr2_Long_13[1] = (int64_t *)ptr2_Long_5;
        ptr2_Long_3[1] = pLong_4;
        ptr2_Long_9[1] = pLong_6;
      }
    }
    *(int64_t ***)(lVal_12 + 8 + lVal_14) = ptr2_Long_9;
    ptr2_Long_9 = ptr2_Long_3;
  } while( true );
}

// func_0x1801163b0
void func_0x1801163b0(int64_t param_1,uint64_t param_2)
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
  int64_t lVal_12;
  int64_t **ptr2_Long_13;
  
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
joined_r0x00018011641b:
  do {
    if (ptr2_Long_8 == ptr2_Long_1) {
      return;
    }
    ptr2_Long_2 = (int64_t **)*ptr2_Long_8;
    lVal_11 = *(int64_t *)(param_1 + 0x18);
    lVal_12 = (((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x13) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x12) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x11) ^
              ((uint64_t)*(byte *)(ptr2_Long_8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) *
             0x10;
    if (*(int64_t ***)(lVal_11 + lVal_12) == ptr2_Long_1) {
      *(int64_t ***)(lVal_11 + lVal_12) = ptr2_Long_8;
    }
    else {
      ptr2_Long_13 = *(int64_t ***)(lVal_11 + 8 + lVal_12);
      if (*(int *)(ptr2_Long_8 + 2) != *(int *)(ptr2_Long_13 + 2)) {
        do {
          if (*(int64_t ***)(lVal_11 + lVal_12) == ptr2_Long_13) {
            pLong_3 = ptr2_Long_8[1];
            *pLong_3 = (int64_t)ptr2_Long_2;
            ptr2_Long_4 = (int64_t **)ptr2_Long_2[1];
            *ptr2_Long_4 = (int64_t *)ptr2_Long_13;
            pLong_5 = ptr2_Long_13[1];
            *pLong_5 = (int64_t)ptr2_Long_8;
            ptr2_Long_13[1] = (int64_t *)ptr2_Long_4;
            ptr2_Long_2[1] = pLong_3;
            ptr2_Long_8[1] = pLong_5;
            *(int64_t ***)(lVal_11 + lVal_12) = ptr2_Long_8;
            ptr2_Long_8 = ptr2_Long_2;
            goto joined_r0x00018011641b;
          }
          ptr2_Long_13 = (int64_t **)ptr2_Long_13[1];
        } while (*(int *)(ptr2_Long_8 + 2) != *(int *)(ptr2_Long_13 + 2));
        pLong_3 = *ptr2_Long_13;
        pLong_5 = ptr2_Long_8[1];
        *pLong_5 = (int64_t)ptr2_Long_2;
        ptr2_Long_13 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_13 = pLong_3;
        pLong_6 = (int64_t *)pLong_3[1];
        *pLong_6 = (int64_t)ptr2_Long_8;
        pLong_3[1] = (int64_t)ptr2_Long_13;
        ptr2_Long_2[1] = pLong_5;
        ptr2_Long_8[1] = pLong_6;
        ptr2_Long_8 = ptr2_Long_2;
        goto joined_r0x00018011641b;
      }
      ptr2_Long_13 = (int64_t **)*ptr2_Long_13;
      if (ptr2_Long_13 != ptr2_Long_8) {
        pLong_3 = ptr2_Long_8[1];
        *pLong_3 = (int64_t)ptr2_Long_2;
        ptr2_Long_4 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_4 = (int64_t *)ptr2_Long_13;
        pLong_5 = ptr2_Long_13[1];
        *pLong_5 = (int64_t)ptr2_Long_8;
        ptr2_Long_13[1] = (int64_t *)ptr2_Long_4;
        ptr2_Long_2[1] = pLong_3;
        ptr2_Long_8[1] = pLong_5;
      }
    }
    *(int64_t ***)(lVal_11 + 8 + lVal_12) = ptr2_Long_8;
    ptr2_Long_8 = ptr2_Long_2;
  } while( true );
}

// func_0x180116560
int64_t ** func_0x180116560(int64_t param_1,int64_t **param_2,int64_t **param_3)
{
  int64_t **ptr2_Long_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  int64_t **ptr2_Long_5;
  int64_t **ptr2_Long_6;
  int64_t **ptr2_Long_7;
  int64_t lVal_8;
  
  if (param_2 == param_3) {
    return param_3;
  }
  ptr2_Long_1 = *(int64_t ***)(param_1 + 8);
  lVal_2 = *(int64_t *)(param_1 + 0x18);
  ptr2_Long_3 = (int64_t **)param_2[1];
  lVal_8 = (((uint64_t)*(byte *)((int64_t)param_2 + 0x13) ^
           ((uint64_t)*(byte *)((int64_t)param_2 + 0x12) ^
           ((uint64_t)*(byte *)((int64_t)param_2 + 0x11) ^
           ((uint64_t)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
           ) * 0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) * 0x10;
  ptr2_Long_4 = *(int64_t ***)(lVal_2 + lVal_8);
  ptr2_Long_5 = *(int64_t ***)(lVal_2 + 8 + lVal_8);
  ptr2_Long_6 = param_2;
  if (ptr2_Long_4 == param_2) {
    do {
      ptr2_Long_7 = (int64_t **)*ptr2_Long_6;
      thunk_FUN_180695dd0(ptr2_Long_6,0x58);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_6 == ptr2_Long_5) goto LAB_180116656;
      ptr2_Long_6 = ptr2_Long_7;
    } while (ptr2_Long_7 != param_3);
    *(int64_t ***)(lVal_2 + lVal_8) = ptr2_Long_7;
  }
  else {
    do {
      ptr2_Long_7 = (int64_t **)*ptr2_Long_6;
      thunk_FUN_180695dd0(ptr2_Long_6,0x58);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_6 == ptr2_Long_5) goto LAB_180116656;
      ptr2_Long_6 = ptr2_Long_7;
    } while (ptr2_Long_7 != param_3);
  }
LAB_18011672c:
  *ptr2_Long_3 = (int64_t *)ptr2_Long_7;
  ptr2_Long_7[1] = (int64_t *)ptr2_Long_3;
  return param_3;
LAB_180116656:
  ptr2_Long_5 = ptr2_Long_3;
  if (ptr2_Long_4 == param_2) {
    *(int64_t ***)(lVal_2 + lVal_8) = ptr2_Long_1;
    ptr2_Long_5 = ptr2_Long_1;
  }
  *(int64_t ***)(lVal_2 + 8 + lVal_8) = ptr2_Long_5;
  while (ptr2_Long_7 != param_3) {
    lVal_8 = (((uint64_t)*(byte *)((int64_t)ptr2_Long_7 + 0x13) ^
             ((uint64_t)*(byte *)((int64_t)ptr2_Long_7 + 0x12) ^
             ((uint64_t)*(byte *)((int64_t)ptr2_Long_7 + 0x11) ^
             ((uint64_t)*(byte *)(ptr2_Long_7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
             0x100000001b3) * 0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) *
            0x10;
    ptr2_Long_4 = *(int64_t ***)(lVal_2 + 8 + lVal_8);
    ptr2_Long_5 = ptr2_Long_7;
    while( true ) {
      ptr2_Long_7 = (int64_t **)*ptr2_Long_5;
      thunk_FUN_180695dd0(ptr2_Long_5,0x58);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_5 == ptr2_Long_4) break;
      ptr2_Long_5 = ptr2_Long_7;
      if (ptr2_Long_7 == param_3) {
        *(int64_t ***)(lVal_2 + lVal_8) = ptr2_Long_7;
        goto LAB_18011672c;
      }
    }
    *(int64_t ***)(lVal_2 + lVal_8) = ptr2_Long_1;
    *(int64_t ***)(lVal_2 + 8 + lVal_8) = ptr2_Long_1;
  }
  goto LAB_18011672c;
}

// func_0x180116750
uint64_t func_0x180116750(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  
  if (*(uint **)(param_1 + 0x28) != *(uint **)(param_1 + 0x20)) {
    return (uint64_t)**(uint **)(param_1 + 0x20);
  }
  func_0x18007f460();
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x180116770
uint64_t func_0x180116770(int64_t param_1,int param_2)
{
  int *pInt_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  
  pInt_1 = *(int **)(param_1 + 0x20);
  if (*(int **)(param_1 + 0x28) != pInt_1) {
    return CONCAT71((int7)((uint64_t)pInt_1 >> 8),*pInt_1 == param_2);
  }
  func_0x18007f460();
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_3 = (*fnPtr_2)();
  return uVal_3;
}

// func_0x180116790
void func_0x180116790(int64_t param_1)
{
  uint uVal_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  
  if (*(uint **)(param_1 + 0x28) == *(uint **)(param_1 + 0x20)) {
    func_0x18007f460();
    fnPtr_2 = (func_ptr_t )swi(3);
    (*fnPtr_2)();
    return;
  }
  uVal_1 = **(uint **)(param_1 + 0x20);
  if (uVal_1 != 0xffffffa0 && uVal_1 + 99 < 6) {
    uVal_3 = uVal_1 + 99;
    if (0xffffffa0 < uVal_1) {
      uVal_3 = uVal_1 + 0x62;
    }
    func_0x18045fc80(uVal_3);
    return;
  }
  func_0x18045fc60();
  return;
}

// func_0x1801167e0
void func_0x1801167e0(int64_t param_1)
{
  int iVal_1;
  func_ptr_t fnPtr_2;
  
  if (*(int **)(param_1 + 0x28) == *(int **)(param_1 + 0x20)) {
    func_0x18007f460();
    fnPtr_2 = (func_ptr_t )swi(3);
    (*fnPtr_2)();
    return;
  }
  iVal_1 = **(int **)(param_1 + 0x20);
  if (iVal_1 != -99) {
    if (iVal_1 == -100) {
      func_0x18045fce0(0);
      return;
    }
    func_0x18045fcc0(iVal_1 + -1);
    return;
  }
  func_0x18045fce0(1);
  return;
}

// func_0x180116830
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180116830(uint64_t param_1)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f328) {
    func_0x180672ec0(&DAT_18083f328);
    if (DAT_18083f328 == -1) {
      lVal_1 = func_0x180116950(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f320 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f320 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f328);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f338) {
    func_0x180672ec0(&DAT_18083f338);
    if (DAT_18083f338 == -1) {
      _DAT_18083f330 = DAT_18083f320;
      _Init_thread_footer(&DAT_18083f338);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180116891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_18083f330)(param_1);
  return;
}

// Unwind@180116920
void Unwind_180116920(void)
{
  func_0x180672f60(&DAT_18083f328);
  return;
}

// func_0x180116950
int64_t func_0x180116950(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x611d0036592ec7a) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x531de8d1d3157dca) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801169f4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x531de8d1d3157dca);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180116a1a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x531de8d1d3157dca);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff80089518U) + -0x27;
  }
LAB_1801169f4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180116a1a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180116a30
uint64_t func_0x180116a30(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 8);
}

// func_0x180116a90
int64_t func_0x180116a90(int64_t param_1)
{
  return param_1 + 0x400;
}

// func_0x180116af0
uint64_t func_0x180116af0(int64_t param_1)
{
  uint uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  
  lVal_2 = *(int64_t *)(param_1 + 0x18);
  pLong_3 = (int64_t *)
           (*(int64_t *)(lVal_2 + 0x48) +
           (uint64_t)
           ((int)((uint64_t)(*(int64_t *)(lVal_2 + 0x50) - *(int64_t *)(lVal_2 + 0x48)) >> 3) - 1U
           & 0x5649b5f8) * 8);
  lVal_2 = *(int64_t *)(lVal_2 + 0x68);
  do {
    lVal_4 = *pLong_3 * 0x20;
    pLong_3 = (int64_t *)(lVal_2 + lVal_4);
  } while (*(int *)(lVal_2 + 8 + lVal_4) != 0x5649b5f8);
  lVal_2 = *(int64_t *)(lVal_4 + 0x10 + lVal_2);
  uVal_1 = *(uint *)(*(int64_t *)
                     (*(int64_t *)(lVal_2 + 8) +
                     (uint64_t)((*(uint *)(param_1 + 0x20) & 0x3f800) >> 8)) +
                   (uint64_t)(*(uint *)(param_1 + 0x20) & 0x7ff) * 4);
  return *(uint64_t *)
          (*(int64_t *)(*(int64_t *)(lVal_2 + 0x50) + (uint64_t)((uVal_1 & 0x3ff80) >> 4)) +
          (uint64_t)(uVal_1 & 0x7f) * 8);
}

// func_0x180116b80
void func_0x180116b80(uint64_t param_1,int64_t param_2)
{
  uint8_t local_48 [32];
  uint8_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (0xffffffffffffefff < *(int64_t *)(param_2 + 0x10) - 0x1001U) {
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x1c39c) < DAT_18083f348) {
      func_0x180672ec0(&DAT_18083f348);
      if (DAT_18083f348 == -1) {
        DAT_18083f340 = (func_ptr_t )func_0x180116c60(&DAT_180840f80);
        _Init_thread_footer(&DAT_18083f348);
      }
    }
    if (DAT_18083f340 != (func_ptr_t )0x0) {
      local_28 = 0;
      (*DAT_18083f340)(param_1,param_2,local_48,0);
    }
  }
  return;
}

// Unwind@180116c30
void Unwind_180116c30(void)
{
  func_0x180672f60(&DAT_18083f348);
  return;
}

// func_0x180116c60
int64_t func_0x180116c60(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x49433c6dff1d6d5) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x1d7637fcd6fb9b60) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180116d04;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x1d7637fcd6fb9b60);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180116d2a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x1d7637fcd6fb9b60);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffcb8dac9cU) + -0x1d;
  }
LAB_180116d04:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180116d2a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180116d40
uint64_t func_0x180116d40(int64_t param_1,uint64_t param_2)
{
  return CONCAT44((float)(int)(float)((uint64_t)param_2 >> 0x20),
                  (float)(int)((float)param_2 * *(float *)(param_1 + 0x5c)) *
                  *(float *)(param_1 + 0x60));
}

// func_0x180116d60
int64_t func_0x180116d60(int64_t param_1)
{
  return param_1 + 0xe0;
}

// func_0x180116dc0
int64_t func_0x180116dc0(int64_t param_1)
{
  return param_1 + 0x300;
}

// func_0x180116e20
int64_t func_0x180116e20(int64_t param_1)
{
  return param_1 + 0x10;
}

// func_0x180116e80
uint64_t func_0x180116e80(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 200);
}

// func_0x180116ee0
void func_0x180116ee0(uint64_t param_1,uint32_t param_2)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f358) {
    func_0x180672ec0(&DAT_18083f358);
    if (DAT_18083f358 == -1) {
      DAT_18083f350 = (func_ptr_t )func_0x180117000(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f358);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f368) {
    func_0x180672ec0(&DAT_18083f368);
    if (DAT_18083f368 == -1) {
      DAT_18083f360 = DAT_18083f350;
      _Init_thread_footer(&DAT_18083f368);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180116f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f360)(param_1,param_2);
  return;
}

// Unwind@180116fd0
void Unwind_180116fd0(void)
{
  func_0x180672f60(&DAT_18083f358);
  return;
}

// func_0x180117000
int64_t func_0x180117000(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x316c8aec0afd825) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x78ae55208dd209ab) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801170a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x78ae55208dd209ab);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801170ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x78ae55208dd209ab);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xfffffffff57c5c8bU) + -0x29;
  }
LAB_1801170a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801170ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801170e0
void func_0x1801170e0(uint64_t param_1,uint64_t param_2)
{
  func_0x1806aa960(param_1,param_2,0x1e8);
  return;
}

// func_0x1801170f0
uint64_t func_0x1801170f0(int64_t param_1)
{
  int *pInt_1;
  int iVal_2;
  uint uVal_3;
  uint uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  int iVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  int64_t *pLong_12;
  bool bFlag_13;
  
  if ((*(int *)(param_1 + 0x18) != 1) || (lVal_5 = *(int64_t *)(param_1 + 0x40), lVal_5 == 0)) {
    return 0;
  }
  iVal_8 = *(int *)(lVal_5 + 8);
  do {
    if (iVal_8 == 0) {
      return 0;
    }
    LOCK();
    iVal_2 = *(int *)(lVal_5 + 8);
    bFlag_13 = iVal_8 == iVal_2;
    if (bFlag_13) {
      *(int *)(lVal_5 + 8) = iVal_8 + 1;
      iVal_2 = iVal_8;
    }
    iVal_8 = iVal_2;
    UNLOCK();
  } while (!bFlag_13);
  lVal_5 = *(int64_t *)(param_1 + 0x38);
  pLong_6 = *(int64_t **)(param_1 + 0x40);
  if (lVal_5 != 0) {
    uVal_3 = *(uint *)(param_1 + 0x48);
    pLong_12 = (int64_t *)
              (*(int64_t *)(lVal_5 + 0x78) +
              (uint64_t)
              ((int)((uint64_t)(*(int64_t *)(lVal_5 + 0x80) - *(int64_t *)(lVal_5 + 0x78)) >> 3) -
               1U & 0x85b93800) * 8);
    lVal_7 = *(int64_t *)(lVal_5 + 0x98);
    uVal_9 = 0;
    do {
      if (*pLong_12 == -1) goto LAB_180117232;
      lVal_10 = *pLong_12 * 0x20;
      pLong_12 = (int64_t *)(lVal_7 + lVal_10);
    } while (*(int *)(lVal_7 + 8 + lVal_10) != -0x7a46c800);
    if ((*(int64_t *)(lVal_5 + 0xa0) != lVal_7 + lVal_10) &&
       (lVal_5 = *(int64_t *)(lVal_7 + lVal_10 + 0x10), lVal_5 != 0)) {
      uVal_11 = (uint64_t)((uVal_3 & 0x3ffff) >> 0xb);
      if ((uVal_11 < (uint64_t)(*(int64_t *)(lVal_5 + 0x10) - *(int64_t *)(lVal_5 + 8) >> 3)) &&
         (((lVal_7 = *(int64_t *)(*(int64_t *)(lVal_5 + 8) + uVal_11 * 8), lVal_7 != 0 &&
           (uVal_4 = *(uint *)(lVal_7 + (uint64_t)(uVal_3 & 0x7ff) * 4),
           (uVal_3 & 0xfffc0000 ^ uVal_4) < 0x3ffff)) &&
          (lVal_5 = *(int64_t *)(*(int64_t *)(lVal_5 + 0x50) + (uint64_t)(uVal_4 >> 4 & 0x3ff8)),
          lVal_5 != 0)))) {
        uVal_9 = *(uint64_t *)(lVal_5 + (uint64_t)(uVal_4 & 0x7f) * 8);
        goto LAB_180117232;
      }
    }
  }
  uVal_9 = 0;
LAB_180117232:
  if (pLong_6 != (int64_t *)0x0) {
    LOCK();
    pLong_12 = pLong_6 + 1;
    *(int *)pLong_12 = *(int *)pLong_12 + -1;
    UNLOCK();
    if (*(int *)pLong_12 == 0) {
      (**(func_ptr_t *)*pLong_6)(pLong_6);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_6 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_6 + 8))(pLong_6);
      }
    }
  }
  return uVal_9;
}

// func_0x180117260
int64_t func_0x180117260(int64_t param_1)
{
  return param_1 + 0x50;
}

// func_0x1801172c0
void func_0x1801172c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f378) {
    func_0x180672ec0(&DAT_18083f378);
    if (DAT_18083f378 == -1) {
      lVal_1 = func_0x180117400(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f370 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f370 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f378);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f388) {
    func_0x180672ec0(&DAT_18083f388);
    if (DAT_18083f388 == -1) {
      DAT_18083f380 = DAT_18083f370;
      _Init_thread_footer(&DAT_18083f388);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180117342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f380)(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@1801173d0
void Unwind_1801173d0(void)
{
  func_0x180672f60(&DAT_18083f378);
  return;
}

// func_0x180117400
int64_t func_0x180117400(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xc4a9495fde27dff) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x41a3ba46519a7ece) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801174a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x41a3ba46519a7ece);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801174ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x41a3ba46519a7ece);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x1039c48bU) + -0x30;
  }
LAB_1801174a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801174ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801174e0
uint64_t func_0x1801174e0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  int *pInt_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  uint8_t local_48 [24];
  uint64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_3;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f398) {
    func_0x180672ec0(&DAT_18083f398);
    if (DAT_18083f398 == -1) {
      lVal_4 = func_0x1801176b0(&DAT_180840f80);
      if (lVal_4 == 0) {
        DAT_18083f390 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f390 = (func_ptr_t )(lVal_4 + *(int *)(lVal_4 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f398);
      param_3 = local_30;
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f3a8) {
    func_0x180672ec0(&DAT_18083f3a8);
    if (DAT_18083f3a8 == -1) {
      DAT_18083f3a0 = DAT_18083f390;
      _Init_thread_footer(&DAT_18083f3a8);
    }
  }
  fnPtr_3 = DAT_18083f3a0;
  local_48._0_16_ = ZEXT816(0);
  lVal_4 = param_3[1];
  if (lVal_4 != 0) {
    local_48._8_8_ = lVal_4;
    local_48._0_8_ = *param_3;
    LOCK();
    *(int *)(lVal_4 + 0xc) = *(int *)(lVal_4 + 0xc) + 1;
    UNLOCK();
  }
  (*fnPtr_3)(param_1,param_2,local_48);
  pLong_2 = (int64_t *)local_30[1];
  if (pLong_2 != (int64_t *)0x0) {
    LOCK();
    pInt_1 = (int *)((int64_t)pLong_2 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
      (**(func_ptr_t *)(*pLong_2 + 8))();
    }
  }
  return param_2;
}

// Unwind@180117640
void Unwind_180117640(void)
{
  func_0x180672f60(&DAT_18083f398);
  return;
}

// Unwind@180117670
void Unwind_180117670(uint64_t param_1,int64_t param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  
  pLong_2 = *(int64_t **)(*(int64_t *)(param_2 + 0x38) + 8);
  if (pLong_2 != (int64_t *)0x0) {
    LOCK();
    pInt_1 = (int *)((int64_t)pLong_2 + 0xc);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (*pInt_1 == 0) {
      (**(func_ptr_t *)(*pLong_2 + 8))();
    }
  }
  return;
}

// func_0x1801176b0
int64_t func_0x1801176b0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x11e6b7c9328bae2) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x604493b0189f2b88) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180117754;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x604493b0189f2b88);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18011777a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x604493b0189f2b88);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x78dbb838U) + -0x26;
  }
LAB_180117754:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18011777a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180117790
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180117790(int64_t param_1)
{
  uint64_t *_Str;
  size_t sz_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  undefined7 uVal_4;
  uint64_t uVal_5;
  uint8_t *pU64_6;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3830) == '\0') {
    lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_3 + 0x3830) = 1;
    *(uint64_t *)(lVal_3 + 0x3828) = 0x1afd133f03e7e84;
    func_0x180673140(&LAB_18011cbd0);
  }
  lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_3 + 0x3828);
  if (*(char *)(lVal_3 + 0x382f) == '\x01') {
    *_Str = (CONCAT44((uint)*(ushort *)(lVal_3 + 0x382d) << 8,*(uint32_t *)_Str) |
            (uint64_t)*(byte *)(lVal_3 + 0x382c) << 0x20) ^ SUB168(_DAT_1806ae020,0);
  }
  local_58 = (uint8_t  [16])0x0;
  sz_1 = strlen((char *)_Str);
  if ((int64_t)sz_1 < 0) {
    func_0x18007ba70();
    goto LAB_1801179b4;
  }
  uVal_5 = 0xf;
  pU64_6 = local_58;
  if (0xf < sz_1) {
    uVal_2 = sz_1 | 0xf;
    uVal_5 = 0x16;
    if (0x16 < uVal_2) {
      uVal_5 = uVal_2;
    }
    if (uVal_2 < 0xfff) {
      pU64_6 = (uint8_t *)func_0x180672de0(uVal_5 + 1);
    }
    else {
      lVal_3 = func_0x180672de0(uVal_5 + 0x28);
      pU64_6 = (uint8_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_6 + -8) = lVal_3;
    }
    local_58._0_8_ = pU64_6;
  }
  local_48 = sz_1;
  local_40 = uVal_5;
  func_0x1806aa960(pU64_6,_Str,sz_1);
  pU64_6[sz_1] = 0;
  pU64_6 = local_58;
  if (0xf < local_40) {
    pU64_6 = (uint8_t *)local_58._0_8_;
  }
  uVal_5 = *(uint64_t *)(param_1 + 0xe8);
  if (*(uint64_t *)(param_1 + 0xf0) < 0x10) {
    param_1 = param_1 + 0xd8;
    if (uVal_5 < local_48) goto LAB_18011791e;
LAB_1801178db:
    uVal_4 = (undefined7)((uint64_t)param_1 >> 8);
    if (local_48 == 0) {
      uVal_5 = CONCAT71(uVal_4,1);
    }
    else {
      lVal_3 = thunk_FUN_180676d20(param_1,uVal_5 + param_1,pU64_6);
      uVal_5 = CONCAT71(uVal_4,lVal_3 - param_1 != -1 && lVal_3 != uVal_5 + param_1);
    }
  }
  else {
    param_1 = *(int64_t *)(param_1 + 0xd8);
    if (local_48 <= uVal_5) goto LAB_1801178db;
LAB_18011791e:
    uVal_5 = 0;
  }
  if (0xf < local_40) {
    uVal_2 = local_40 + 1;
    lVal_3 = local_58._0_8_;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_58._0_8_ + -8);
      if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_3)) {
LAB_1801179b4:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  return uVal_5 & 0xffffffff;
}

// func_0x1801179c0
void func_0x1801179c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f3b8) {
    func_0x180672ec0(&DAT_18083f3b8);
    if (DAT_18083f3b8 == -1) {
      lVal_1 = func_0x180117b00(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f3b0 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f3b0 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f3b8);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f3c8) {
    func_0x180672ec0(&DAT_18083f3c8);
    if (DAT_18083f3c8 == -1) {
      DAT_18083f3c0 = DAT_18083f3b0;
      _Init_thread_footer(&DAT_18083f3c8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180117a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f3c0)(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@180117ad0
void Unwind_180117ad0(void)
{
  func_0x180672f60(&DAT_18083f3b8);
  return;
}

// func_0x180117b00
int64_t func_0x180117b00(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xa53ab4c866d7075) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x76fd1c2aee362b51) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180117ba4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x76fd1c2aee362b51);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180117bca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x76fd1c2aee362b51);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff98cb377aU) + -0x1e;
  }
LAB_180117ba4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180117bca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180117be0
uint64_t * func_0x180117be0(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t *pU64_5;
  uint64_t local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(uint16_t *)(param_1 + 4) = *(uint16_t *)(param_2 + 4);
  *(uint8_t *)((int64_t)param_1 + 0x22) = *(uint8_t *)((int64_t)param_2 + 0x22);
  *(uint8_t *)((int64_t)param_1 + 0x23) = *(uint8_t *)((int64_t)param_2 + 0x23);
  *(uint8_t *)((int64_t)param_1 + 0x24) = *(uint8_t *)((int64_t)param_2 + 0x24);
  *(uint8_t *)((int64_t)param_1 + 0x25) = *(uint8_t *)((int64_t)param_2 + 0x25);
  param_1[5] = param_2[5];
  pU64_1 = (uint64_t *)param_2[7];
  for (pU64_5 = (uint64_t *)param_2[6]; pU64_5 != pU64_1; pU64_5 = pU64_5 + 1) {
    while( true ) {
      local_48 = *pU64_5;
      pU64_2 = (uint64_t *)param_1[7];
      if (pU64_2 != (uint64_t *)param_1[8]) break;
      func_0x18007f260(param_1 + 6,pU64_2,&local_48);
      pU64_5 = pU64_5 + 1;
      if (pU64_5 == pU64_1) goto LAB_180117ca7;
    }
    *pU64_2 = local_48;
    param_1[7] = param_1[7] + 8;
  }
LAB_180117ca7:
  param_1[9] = param_2[9];
  pU64_1 = (uint64_t *)param_2[0xb];
  for (pU64_5 = (uint64_t *)param_2[10]; pU64_5 != pU64_1; pU64_5 = pU64_5 + 1) {
    while( true ) {
      local_48 = *pU64_5;
      pU64_2 = (uint64_t *)param_1[0xb];
      if (pU64_2 != (uint64_t *)param_1[0xc]) break;
      func_0x18007f260(param_1 + 10,pU64_2,&local_48);
      pU64_5 = pU64_5 + 1;
      if (pU64_5 == pU64_1) goto LAB_180117d07;
    }
    *pU64_2 = local_48;
    param_1[0xb] = param_1[0xb] + 8;
  }
LAB_180117d07:
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVal_3 = param_2[0xf];
  param_2[0xf] = 0;
  lVal_4 = param_1[0xf];
  param_1[0xf] = uVal_3;
  if (lVal_4 != 0) {
    func_0x18011cc00(param_1 + 0xf);
  }
  return param_1;
}

// Unwind@180117d50
void Unwind_180117d50(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180117d70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint16_t func_0x180117d70(int64_t param_1)
{
  uint64_t *pU64_1;
  char ch_2;
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint8_t *pU64_7;
  uint64_t uVal_8;
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t local_50;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVal_6 = *(int64_t *)(param_1 + 0x10);
  if (lVal_6 == 0) {
    return 0;
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3840) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0x3840) = 1;
    *(uint64_t *)(lVal_5 + 0x3838) = 0x107a8e814f48429;
    func_0x180673140(&LAB_18011cde0);
  }
  lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_5 + 0x3838);
  if (*(char *)(lVal_5 + 0x383f) == '\x01') {
    *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_5 + 0x383d) << 8,*(uint32_t *)pU64_1) |
              (uint64_t)*(byte *)(lVal_5 + 0x383c) << 0x20) ^ SUB168(_DAT_1806ae820,0);
  }
  local_68 = (uint8_t  [16])0x0;
  sz_3 = strlen((char *)pU64_1);
  if ((int64_t)sz_3 < 0) {
LAB_1801180e9:
    func_0x18007ba70();
  }
  else {
    if (sz_3 < 0x10) {
      pU64_7 = local_68;
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
      local_68._0_8_ = pU64_7;
    }
    local_58 = sz_3;
    local_50 = uVal_8;
    func_0x1806aa960(pU64_7,pU64_1,sz_3);
    pU64_7[sz_3] = 0;
    pU64_7 = local_68;
    ch_2 = func_0x1800d73e0(lVal_6 + 8,pU64_7);
    if (0xf < local_50) {
      uVal_8 = local_50 + 1;
      lVal_6 = local_68._0_8_;
      if (0xfff < uVal_8) {
        lVal_6 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_6)) goto LAB_1801180f3;
        uVal_8 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_8);
    }
    if (ch_2 == '\0') {
      return 0;
    }
    lVal_6 = *(int64_t *)(param_1 + 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3850) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x3850) = 1;
      *(uint64_t *)(lVal_5 + 0x3848) = 0x167565066b2f8bd;
      func_0x180673140(&LAB_18011ce10);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_5 + 0x3848);
    if (*(char *)(lVal_5 + 0x384f) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_5 + 0x384d) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_5 + 0x384c) << 0x20) ^ SUB168(_DAT_1806b52d0,0);
    }
    local_68 = (uint8_t  [16])0x0;
    sz_3 = strlen((char *)pU64_1);
    if ((int64_t)sz_3 < 0) goto LAB_1801180e9;
    uVal_8 = 0xf;
    if (0xf < sz_3) {
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
      local_68._0_8_ = pU64_7;
    }
    local_58 = sz_3;
    local_50 = uVal_8;
    func_0x1806aa960(pU64_7,pU64_1,sz_3);
    pU64_7[sz_3] = 0;
    lVal_6 = func_0x1800fcc60(lVal_6 + 8,local_68);
    if (0xf < local_50) {
      uVal_8 = local_50 + 1;
      lVal_5 = local_68._0_8_;
      if (0xfff < uVal_8) {
        lVal_5 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_5)) goto LAB_1801180f3;
        uVal_8 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_8);
    }
    if (*(char *)(lVal_6 + 0x28) == '\x03') {
      return *(uint16_t *)(lVal_6 + 8);
    }
  }
  func_0x18011cb80();
LAB_1801180f3:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180118100
void Unwind_180118100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180118130
void Unwind_180118130(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x180118160
uint64_t func_0x180118160(int64_t param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  
  if (*(int64_t ***)(param_1 + 8) != (int64_t **)0x0) {
    pLong_1 = **(int64_t ***)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001801181c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVal_2 = (**(func_ptr_t *)(*pLong_1 + 0x120))(pLong_1,0x24,0x28fe63dd9bf41185);
    return uVal_2;
  }
  return 0;
}

// func_0x1801181d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1801181d0(int64_t param_1)
{
  uint *_Str;
  char *_Str_00;
  uint uVal_1;
  int64_t lVal_2;
  int iVal_3;
  size_t sz_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  void *_Buf1;
  uint32_t *pU64_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint32_t *pU64_11;
  bool bFlag_12;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58;
  uint32_t uStack_57;
  uint32_t uStack_53;
  undefined7 uStack_4f;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(int64_t **)(param_1 + 8) == (int64_t *)0x0) {
    return 0;
  }
  local_68 = 0xbec92fba;
  uStack_64 = 0x18bd2c6b;
  uVal_1 = *(uint *)(**(int64_t **)(param_1 + 8) + 0x1bc);
  uVal_9 = (uint64_t)uVal_1;
  lVal_6 = *(int64_t *)(param_1 + 0x10);
  if (lVal_6 == 0) {
    return uVal_9;
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x385c) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0x385c) = 1;
    *(uint32_t *)(lVal_5 + 0x3854) = 0xc3f6a1da;
    *(uint16_t *)(lVal_5 + 0x3858) = 499;
    func_0x180673140(&LAB_18011ce40);
  }
  lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint *)(lVal_5 + 0x3854);
  if (*(char *)(lVal_5 + 0x3859) == '\x01') {
    *_Str = *_Str ^ 0xab95cfbf;
    *(byte *)(lVal_5 + 0x3858) = *(byte *)(lVal_5 + 0x3858) ^ 0xf3;
    *(uint8_t *)(lVal_5 + 0x3859) = 0;
  }
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  sz_4 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_4) {
    if (sz_4 < 0x10) {
      pU64_11 = &local_68;
      uVal_10 = 0xf;
    }
    else {
      uVal_7 = sz_4 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_7) {
        uVal_10 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_11 = (uint32_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_10 + 0x28);
        pU64_11 = (uint32_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -2) = lVal_5;
      }
      local_68 = SUB84(pU64_11,0);
      uStack_64 = (uint32_t)((uint64_t)pU64_11 >> 0x20);
    }
    local_58 = (uint8_t)sz_4;
    uStack_57 = (uint32_t)(sz_4 >> 8);
    uStack_53._0_3_ = (undefined3)(sz_4 >> 0x28);
    uStack_53._3_1_ = (uint8_t)uVal_10;
    uStack_4f = (undefined7)(uVal_10 >> 8);
    func_0x1806aa960(pU64_11,_Str,sz_4);
    *(uint8_t *)((int64_t)pU64_11 + sz_4) = 0;
    lVal_6 = func_0x180107500(lVal_6,&local_68);
    uVal_10 = CONCAT71(uStack_4f,uStack_53._3_1_);
    if (0xf < uVal_10) {
      lVal_2 = CONCAT44(uStack_64,local_68);
      uVal_7 = uVal_10 + 1;
      lVal_5 = lVal_2;
      if (0xfff < uVal_7) {
        lVal_5 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)) goto LAB_1801185d0;
        uVal_7 = uVal_10 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_7);
    }
    if (lVal_6 == 0) {
      return uVal_9;
    }
    local_58 = UNK_1806b5340;
    uStack_57 = _UNK_1806b5341;
    uStack_53 = _UNK_1806b5345;
    local_68 = _DAT_1806b5330;
    uStack_64 = _UNK_1806b5334;
    uStack_60 = _UNK_1806b5338;
    uStack_5c = _UNK_1806b533c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3878) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0x3878) = 1;
      func_0x1800904a0(lVal_6 + 0x385d,&local_68);
      func_0x180673140(&LAB_18011ce70);
    }
    _Str_00 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x385d);
    func_0x18011d7a0(_Str_00);
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    sz_4 = strlen(_Str_00);
    if (-1 < (int64_t)sz_4) {
      uVal_10 = 0xf;
      pU64_11 = &local_68;
      if (0xf < sz_4) {
        uVal_7 = sz_4 | 0xf;
        uVal_10 = 0x16;
        if (0x16 < uVal_7) {
          uVal_10 = uVal_7;
        }
        if (uVal_7 < 0xfff) {
          pU64_11 = (uint32_t *)func_0x180672de0(uVal_10 + 1);
        }
        else {
          lVal_6 = func_0x180672de0(uVal_10 + 0x28);
          pU64_11 = (uint32_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_11 + -2) = lVal_6;
        }
        local_68 = SUB84(pU64_11,0);
        uStack_64 = (uint32_t)((uint64_t)pU64_11 >> 0x20);
      }
      local_58 = (uint8_t)sz_4;
      uStack_57 = (uint32_t)(sz_4 >> 8);
      uStack_53._0_3_ = (undefined3)(sz_4 >> 0x28);
      uStack_53._3_1_ = (uint8_t)uVal_10;
      uStack_4f = (undefined7)(uVal_10 >> 8);
      func_0x1806aa960(pU64_11,_Str_00,sz_4);
      *(uint8_t *)((int64_t)pU64_11 + sz_4) = 0;
      lVal_6 = **(int64_t **)(param_1 + 8);
      pU64_11 = (uint32_t *)CONCAT44(uStack_64,local_68);
      uVal_10 = CONCAT71(uStack_4f,uStack_53._3_1_);
      pU64_8 = &local_68;
      if (0xf < uVal_10) {
        pU64_8 = pU64_11;
      }
      sz_4 = CONCAT35((undefined3)uStack_53,CONCAT41(uStack_57,local_58));
      if (*(uint64_t *)(lVal_6 + 0x140) < 0x10) {
        _Buf1 = (void *)(lVal_6 + 0x128);
        if (*(size_t *)(lVal_6 + 0x138) != sz_4) goto LAB_1801184bb;
LAB_1801184d1:
        if (sz_4 == 0) {
          bFlag_12 = true;
        }
        else {
          iVal_3 = memcmp(_Buf1,pU64_8,sz_4);
          bFlag_12 = iVal_3 == 0;
        }
      }
      else {
        _Buf1 = *(void **)(lVal_6 + 0x128);
        if (*(size_t *)(lVal_6 + 0x138) == sz_4) goto LAB_1801184d1;
LAB_1801184bb:
        bFlag_12 = false;
      }
      if (0xf < uVal_10) {
        uVal_7 = uVal_10 + 1;
        pU64_8 = pU64_11;
        if (0xfff < uVal_7) {
          pU64_8 = *(uint32_t **)(pU64_11 + -2);
          if (0x1f < (uint64_t)((int64_t)pU64_11 + (-8 - (int64_t)pU64_8))) goto LAB_1801185d0;
          uVal_7 = uVal_10 + 0x28;
        }
        thunk_FUN_180695dd0(pU64_8,uVal_7);
      }
      if (!(bool)(bFlag_12 | 2 < uVal_1)) {
        uVal_9 = (uint64_t)*(uint *)(&DAT_1806b5310 + uVal_9 * 4);
      }
      return uVal_9;
    }
  }
  func_0x18007ba70();
LAB_1801185d0:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801185e0
void Unwind_1801185e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3878) = 0;
  return;
}

// Unwind@180118630
void Unwind_180118630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x180118670
void func_0x180118670(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f3d8) {
    func_0x180672ec0(&DAT_18083f3d8);
    if (DAT_18083f3d8 == -1) {
      DAT_18083f3d0 = (func_ptr_t )func_0x180118740(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f3d8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801186d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f3d0)(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@180118710
void Unwind_180118710(void)
{
  func_0x180672f60(&DAT_18083f3d8);
  return;
}

// func_0x180118740
int64_t func_0x180118740(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xe868f497e6bb64b) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x4f920b3b7dde6ef4) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801187e4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x4f920b3b7dde6ef4);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18011880a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x4f920b3b7dde6ef4);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x324c65cfU) + -0x24;
  }
LAB_1801187e4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18011880a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180118820
void func_0x180118820(int64_t *param_1)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f3e8) {
    func_0x180672ec0(&DAT_18083f3e8);
    if (DAT_18083f3e8 == -1) {
      DAT_18083f3e0 = func_0x1801188f0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f3e8);
    }
  }
  if (DAT_18083f3e0 == 0) {
    lVal_1 = 0;
  }
  else {
    lVal_1 = DAT_18083f3e0 + *(int *)(DAT_18083f3e0 + 3) + 7;
  }
  *param_1 = lVal_1;
  return;
}

// Unwind@1801188c0
void Unwind_1801188c0(void)
{
  func_0x180672f60(&DAT_18083f3e8);
  return;
}

// func_0x1801188f0
int64_t func_0x1801188f0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x26bcbe13ee780fe) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x3041758984c748bc) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180118994;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x3041758984c748bc);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801189ba;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x3041758984c748bc);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffb4863d32U) + -0xf;
  }
LAB_180118994:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801189ba:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801189d0
void func_0x1801189d0(int64_t *param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)
{
  int iVal_1;
  int64_t lVal_2;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f3e8) {
    func_0x180672ec0(&DAT_18083f3e8);
    if (DAT_18083f3e8 == -1) {
      DAT_18083f3e0 = func_0x1801188f0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083f3e8);
    }
  }
  lVal_2 = DAT_18083f3e0;
  iVal_1 = *(int *)(DAT_18083f3e0 + 3);
  *param_1 = DAT_18083f3e0 + iVal_1 + 7;
                    /* WARNING: Could not recover jumptable at 0x000180118a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(lVal_2 + 0x1f + (int64_t)iVal_1))(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@180118a80
void Unwind_180118a80(void)
{
  func_0x180672f60(&DAT_18083f3e8);
  return;
}

// func_0x180118ab0
void func_0x180118ab0(uint64_t param_1,uint64_t param_2)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f3f8) {
    func_0x180672ec0(&DAT_18083f3f8);
    if (DAT_18083f3f8 == -1) {
      lVal_1 = func_0x180118b80(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f3f0 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f3f0 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f3f8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000180118aff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f3f0)(param_1,param_2);
  return;
}

// Unwind@180118b50
void Unwind_180118b50(void)
{
  func_0x180672f60(&DAT_18083f3f8);
  return;
}

// func_0x180118b80
int64_t func_0x180118b80(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x696463b6f59c3b) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x5cf9de89c4fd1b50) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180118c24;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x5cf9de89c4fd1b50);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180118c4a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x5cf9de89c4fd1b50);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff9804c5d9U) + -0x14;
  }
LAB_180118c24:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180118c4a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180118c60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180118c60(int64_t param_1)
{
  char *fnPtr_1;
  uint *_Str;
  func_ptr_t fnPtr_2;
  int iVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  void *_Buf1;
  int64_t lVal_7;
  uint32_t *pU64_8;
  uint64_t uVal_9;
  uint32_t *pU64_10;
  uint8_t *pU64_11;
  bool bFlag_12;
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint16_t local_a8;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  undefined7 uStack_88;
  uint8_t uStack_81;
  uint64_t local_80;
  void *local_70;
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*(int64_t **)(param_1 + 8) == (int64_t *)0x0) ||
     (lVal_7 = **(int64_t **)(param_1 + 8), lVal_7 == 0)) {
LAB_180118fad:
    lVal_7 = *(int64_t *)(param_1 + 0x10);
    if (lVal_7 == 0) {
      return 0;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x38b4) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0x38b4) = 1;
      *(uint32_t *)(lVal_6 + 0x38ac) = 0x4d26b994;
      *(uint16_t *)(lVal_6 + 0x38b0) = 0x157;
      func_0x180673140(&LAB_18011cf00);
    }
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_6 + 0x38ac);
    if (*(char *)(lVal_6 + 0x38b1) == '\x01') {
      *_Str = *_Str ^ 0x2545d7f1;
      *(byte *)(lVal_6 + 0x38b0) = *(byte *)(lVal_6 + 0x38b0) ^ 0x57;
      *(uint8_t *)(lVal_6 + 0x38b1) = 0;
    }
    local_68 = ZEXT816(0);
    sz_4 = strlen((char *)_Str);
    if (-1 < (int64_t)sz_4) {
      if (sz_4 < 0x10) {
        pU64_11 = local_68;
        uVal_9 = 0xf;
      }
      else {
        uVal_5 = sz_4 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_5) {
          uVal_9 = uVal_5;
        }
        if (uVal_5 < 0xfff) {
          pU64_11 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_6 = func_0x180672de0(uVal_9 + 0x28);
          pU64_11 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_11 + -8) = lVal_6;
        }
        local_68._0_8_ = pU64_11;
      }
      local_58 = sz_4;
      local_50 = uVal_9;
      func_0x1806aa960(pU64_11,_Str,sz_4);
      pU64_11[sz_4] = 0;
      uVal_9 = func_0x1801073b0(lVal_7,local_68);
      if (local_50 < 0x10) {
        return uVal_9;
      }
      uVal_5 = local_50 + 1;
      lVal_7 = local_68._0_8_;
      if (uVal_5 < 0x1000) {
LAB_1801190e7:
        thunk_FUN_180695dd0(lVal_7,uVal_5);
        return uVal_9 & 0xffffffff;
      }
      if ((uint64_t)((local_68._0_8_ + -8) - *(int64_t *)(local_68._0_8_ + -8)) < 0x20) {
        uVal_5 = local_50 + 0x28;
        lVal_7 = *(int64_t *)(local_68._0_8_ + -8);
        goto LAB_1801190e7;
      }
      goto LAB_1801191bd;
    }
  }
  else {
    local_98 = _DAT_1806b5349;
    uStack_94 = _UNK_1806b534d;
    uStack_90 = _UNK_1806b5351;
    uStack_8c = CONCAT13(1,(int3)_UNK_1806b5355);
    uStack_88 = 0x5d64e963556672;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3894) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0x3894) = 1;
      func_0x18007d3c0(lVal_6 + 0x3879,&local_98);
      func_0x180673140(&LAB_18011cea0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x3879);
    func_0x18011d7d0(fnPtr_1);
    local_68 = ZEXT816(0);
    sz_4 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_4) {
      uVal_9 = 0xf;
      pU64_11 = local_68;
      if (0xf < sz_4) {
        uVal_5 = sz_4 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_5) {
          uVal_9 = uVal_5;
        }
        if (uVal_5 < 0xfff) {
          pU64_11 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_6 = func_0x180672de0(uVal_9 + 0x28);
          pU64_11 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_11 + -8) = lVal_6;
        }
        local_68._0_8_ = pU64_11;
      }
      local_58 = sz_4;
      local_50 = uVal_9;
      func_0x1806aa960(pU64_11,fnPtr_1,sz_4);
      pU64_11[sz_4] = 0;
      uVal_9 = local_50;
      pU64_11 = local_68;
      if (0xf < local_50) {
        pU64_11 = (uint8_t *)local_68._0_8_;
      }
      _Buf1 = (void *)(lVal_7 + 0xd8);
      if (0xf < *(uint64_t *)(lVal_7 + 0xf0)) {
        _Buf1 = *(void **)(lVal_7 + 0xd8);
      }
      if ((*(size_t *)(lVal_7 + 0xe8) != local_58) ||
         ((bFlag_12 = true, local_58 != 0 && (iVal_3 = memcmp(_Buf1,pU64_11,local_58), iVal_3 != 0)))) {
        local_b8 = _DAT_1806b5360;
        uStack_b4 = _UNK_1806b5364;
        uStack_b0 = _UNK_1806b5368;
        uStack_ac = _UNK_1806b536c;
        local_a8 = 0x748;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x38a8) == '\0') {
          lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_6 + 0x38a8) = 1;
          func_0x18007c170(lVal_6 + 0x3895,&local_b8);
          func_0x180673140(&LAB_18011ced0);
        }
        fnPtr_1 = (char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x3895);
        local_70 = (void *)(lVal_7 + 0xd8);
        func_0x18011d820(fnPtr_1);
        local_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        sz_4 = strlen(fnPtr_1);
        if ((int64_t)sz_4 < 0) {
          func_0x18007ba70();
          fnPtr_2 = (func_ptr_t )swi(3);
          uVal_9 = (*fnPtr_2)();
          return uVal_9;
        }
        uVal_9 = 0xf;
        pU64_10 = &local_98;
        if (0xf < sz_4) {
          uVal_5 = sz_4 | 0xf;
          uVal_9 = 0x16;
          if (0x16 < uVal_5) {
            uVal_9 = uVal_5;
          }
          if (uVal_5 < 0xfff) {
            pU64_10 = (uint32_t *)func_0x180672de0(uVal_9 + 1);
          }
          else {
            lVal_6 = func_0x180672de0(uVal_9 + 0x28);
            pU64_10 = (uint32_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_10 + -2) = lVal_6;
          }
          local_98 = SUB84(pU64_10,0);
          uStack_94 = (uint32_t)((uint64_t)pU64_10 >> 0x20);
        }
        uStack_88 = (undefined7)sz_4;
        uStack_81 = (uint8_t)(sz_4 >> 0x38);
        local_80 = uVal_9;
        func_0x1806aa960(pU64_10,fnPtr_1,sz_4);
        *(uint8_t *)((int64_t)pU64_10 + sz_4) = 0;
        uVal_5 = local_80;
        pU64_10 = (uint32_t *)CONCAT44(uStack_94,local_98);
        pU64_8 = &local_98;
        if (0xf < local_80) {
          pU64_8 = pU64_10;
        }
        sz_4 = CONCAT17(uStack_81,uStack_88);
        if (0xf < *(uint64_t *)(lVal_7 + 0xf0)) {
          local_70 = *(void **)(lVal_7 + 0xd8);
        }
        uVal_9 = local_50;
        if (*(size_t *)(lVal_7 + 0xe8) == sz_4) {
          if (sz_4 == 0) {
            bFlag_12 = true;
          }
          else {
            iVal_3 = memcmp(local_70,pU64_8,sz_4);
            bFlag_12 = iVal_3 == 0;
            uVal_9 = local_50;
          }
        }
        else {
          bFlag_12 = false;
        }
        local_50 = uVal_9;
        if (0xf < uVal_5) {
          uVal_9 = uVal_5 + 1;
          pU64_8 = pU64_10;
          if (0xfff < uVal_9) {
            pU64_8 = *(uint32_t **)(pU64_10 + -2);
            if (0x1f < (uint64_t)((int64_t)pU64_10 + (-8 - (int64_t)pU64_8))) goto LAB_1801191bd;
            uVal_9 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(pU64_8,uVal_9);
          uVal_9 = local_50;
        }
      }
      if (0xf < uVal_9) {
        uVal_5 = uVal_9 + 1;
        lVal_7 = local_68._0_8_;
        if (0xfff < uVal_5) {
          lVal_7 = *(int64_t *)(local_68._0_8_ + -8);
          if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_7)) goto LAB_1801191bd;
          uVal_5 = uVal_9 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_5);
      }
      if (bFlag_12) {
        return 1;
      }
      goto LAB_180118fad;
    }
  }
  func_0x18007ba70();
LAB_1801191bd:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801191d0
void Unwind_1801191d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3894) = 0;
  return;
}

// Unwind@180119220
void Unwind_180119220(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x38a8) = 0;
  return;
}

// Unwind@180119270
void Unwind_180119270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1801192b0
void Unwind_1801192b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// func_0x1801192f0
uint64_t func_0x1801192f0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x90);
}

// func_0x180119350
uint8_t (*func_0x180119350(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  int64_t lVal_1;
  
  *param_2 = ZEXT816(0);
  lVal_1 = *(int64_t *)(param_1 + 0x1a0);
  if (lVal_1 != 0) {
    *(uint64_t *)*param_2 = *(uint64_t *)(param_1 + 0x198);
    *(int64_t *)(*param_2 + 8) = lVal_1;
    LOCK();
    *(int *)(lVal_1 + 0xc) = *(int *)(lVal_1 + 0xc) + 1;
    UNLOCK();
  }
  return param_2;
}

// func_0x1801193d0
uint64_t func_0x1801193d0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1e8);
}

// func_0x180119430
int64_t func_0x180119430(int64_t param_1)
{
  return param_1 + 600;
}

// func_0x180119490
uint64_t func_0x180119490(int64_t param_1)
{
  return *(uint64_t *)(*(int64_t *)(param_1 + 0x318) + 0x18);
}

// func_0x1801194f0
int64_t func_0x1801194f0(int64_t param_1)
{
  return param_1 + 800;
}

// func_0x180119550
uint64_t func_0x180119550(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x4e0);
}

// func_0x1801195b0
uint64_t func_0x1801195b0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x818);
}

// func_0x180119610
void func_0x180119610(int64_t param_1)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t ***ptr3_U64_3;
  uint64_t ***local_40 [3];
  uint64_t local_28;
  uint64_t local_20;
  
  uVal_1 = *(uint64_t *)(param_1 + 0x90);
  local_20 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f468) {
    func_0x180672ec0(&DAT_18083f468);
    if (DAT_18083f468 == -1) {
      uVal_2 = func_0x180119fe0(uVal_1);
      uVal_2 = func_0x18011a070(uVal_2);
      func_0x180001060(local_40,uVal_2);
      ptr3_U64_3 = local_40;
      if (0xf < local_28) {
        ptr3_U64_3 = local_40[0];
      }
      func_0x180119d20(&DAT_18083f438,0xd4e049e8356bc00f,ptr3_U64_3);
      func_0x180001e70(local_40);
      func_0x1806731d0(&LAB_18011a090);
      _Init_thread_footer(&DAT_18083f468);
    }
  }
  func_0x18011a100(uVal_1,&DAT_18083f438);
  return;
}

// Unwind@180119750
void Unwind_180119750(void)
{
  func_0x180672f60(&DAT_18083f468);
  return;
}

// func_0x180119780
uint64_t func_0x180119780(int64_t param_1)
{
  return CONCAT71((int7)((uint64_t)*(int64_t *)(param_1 + 0x1e8) >> 8),
                  *(int *)(*(int64_t *)(param_1 + 0x1e8) + 0x18) == 1);
}

// func_0x1801197e0
uint64_t func_0x1801197e0(int64_t param_1)
{
  uint64_t uVal_1;
  
  if (*(int *)(*(int64_t *)(param_1 + 0x1e8) + 0x18) == 1) {
    uVal_1 = func_0x1801170f0(*(uint64_t *)(param_1 + 0x1e8));
    return uVal_1;
  }
  return 0;
}

// func_0x180119880
void func_0x180119880(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x0001801198d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x410))(param_1,0x82,0x290a57924a9cb60f);
  return;
}

// func_0x1801198e0
void func_0x1801198e0(int64_t *param_1,uint32_t param_2,uint64_t param_3)
{
                    /* WARNING: Could not recover jumptable at 0x000180119940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x5e0))(param_1,param_2,param_3,0x291794c44cb25c52);
  return;
}

// func_0x180119950
uint8_t (*func_0x180119950(int64_t param_1,uint8_t (*param_2)[16],int64_t **param_3))[16]
{
  int64_t **ptr2_Long_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t (*pArr16_9)[16];
  int64_t **ptr2_Long_10;
  uint64_t uVal_11;
  
  ptr2_Long_1 = *(int64_t ***)(*(int64_t *)(param_1 + 0x4e0) + 8);
  ptr2_Long_10 = (int64_t **)*ptr2_Long_1;
  if (ptr2_Long_10 != ptr2_Long_1) {
    do {
      if ((ptr2_Long_10[6] == param_3[1]) && (ptr2_Long_10[5] == *param_3)) {
        param_2[1] = ZEXT816(0);
        *param_2 = ZEXT816(0);
        pLong_2 = ptr2_Long_10[9];
        if (ptr2_Long_10[10] < (int64_t *)0x10) {
          ptr2_Long_10 = ptr2_Long_10 + 7;
        }
        else {
          ptr2_Long_10 = (int64_t **)ptr2_Long_10[7];
        }
        if (-1 < (int64_t)pLong_2) {
          if (pLong_2 <= &DAT_0000000f) {
            *(int64_t **)param_2[1] = pLong_2;
            *(uint64_t *)(param_2[1] + 8) = 0xf;
            uVal_4 = *(uint32_t *)((int64_t)ptr2_Long_10 + 4);
            uVal_5 = *(uint32_t *)(ptr2_Long_10 + 1);
            uVal_6 = *(uint32_t *)((int64_t)ptr2_Long_10 + 0xc);
            *(uint32_t *)*param_2 = *(uint32_t *)ptr2_Long_10;
            *(uint32_t *)(*param_2 + 4) = uVal_4;
            *(uint32_t *)(*param_2 + 8) = uVal_5;
            *(uint32_t *)(*param_2 + 0xc) = uVal_6;
            return param_2;
          }
          uVal_7 = (uint64_t)pLong_2 | 0xf;
          uVal_11 = 0x16;
          if (0x16 < uVal_7) {
            uVal_11 = uVal_7;
          }
          if (uVal_7 < 0xfff) {
            uVal_7 = func_0x180672de0(uVal_11 + 1);
          }
          else {
            lVal_8 = func_0x180672de0(uVal_11 + 0x28);
            uVal_7 = lVal_8 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_7 - 8) = lVal_8;
          }
          *(uint64_t *)*param_2 = uVal_7;
          *(int64_t **)param_2[1] = pLong_2;
          *(uint64_t *)(param_2[1] + 8) = uVal_11;
          func_0x1806aa960(uVal_7,ptr2_Long_10,(uint8_t *)((int64_t)pLong_2 + 1));
          return param_2;
        }
        func_0x18007ba70();
        fnPtr_3 = (func_ptr_t )swi(3);
        pArr16_9 = (uint8_t (*)[16])(*fnPtr_3)();
        return pArr16_9;
      }
      ptr2_Long_10 = (int64_t **)*ptr2_Long_10;
    } while (ptr2_Long_10 != ptr2_Long_1);
  }
  *param_2 = ZEXT816(0);
  *(uint64_t *)param_2[1] = 0;
  *(uint64_t *)(param_2[1] + 8) = 0xf;
  return param_2;
}

// func_0x180119ab0
int64_t func_0x180119ab0(int64_t param_1)
{
  return param_1 + 0x2a8;
}

// func_0x180119b10
uint32_t func_0x180119b10(int64_t param_1)
{
  return *(uint32_t *)(param_1 + 0x3b8);
}

// func_0x180119b70
void func_0x180119b70(uint64_t param_1)
{
  uint64_t uVal_1;
  uint64_t ***ptr3_U64_2;
  uint64_t ***local_40 [3];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f430) {
    func_0x180672ec0(&DAT_18083f430);
    if (DAT_18083f430 == -1) {
      uVal_1 = func_0x180119c80(param_1);
      uVal_1 = func_0x180119d00(uVal_1);
      func_0x180001060(local_40,uVal_1);
      ptr3_U64_2 = local_40;
      if (0xf < local_28) {
        ptr3_U64_2 = local_40[0];
      }
      func_0x180119d20(&DAT_18083f400,0x92eb667ea331f1e6,ptr3_U64_2);
      func_0x180001e70(local_40);
      func_0x1806731d0(&LAB_180119e20);
      _Init_thread_footer(&DAT_18083f430);
    }
  }
  func_0x180119e90(param_1,&DAT_18083f400);
  return;
}

// Unwind@180119c50
void Unwind_180119c50(void)
{
  func_0x180672f60(&DAT_18083f430);
  return;
}

// func_0x180119c80
int64_t func_0x180119c80(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x38c0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x38c0) = 1;
    *(uint32_t *)(lVal_1 + 0x38b8) = 0x29f4b6e2;
    *(uint16_t *)(lVal_1 + 0x38bc) = 0x17d;
    func_0x180673140(&LAB_18011cf30);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x38b8;
}

// func_0x180119d00
void func_0x180119d00(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x4d91d391;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x7d;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x180119d20
uint64_t * func_0x180119d20(uint64_t *param_1,uint64_t param_2,char *param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  size_t sz_2;
  uint64_t uVal_3;
  uint64_t *pU64_4;
  uint64_t **ptr2_U64_5;
  uint64_t *pU64_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  
  uVal_8 = 0xfffffffffffffffe;
  *param_1 = param_2;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
  sz_2 = strlen(param_3);
  if (-1 < (int64_t)sz_2) {
    uVal_7 = 0xf;
    ptr2_U64_5 = (uint64_t **)(param_1 + 1);
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_3) {
        uVal_7 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        ptr2_U64_5 = (uint64_t **)func_0x180672de0(uVal_7 + 1);
      }
      else {
        pU64_4 = (uint64_t *)func_0x180672de0(uVal_7 + 0x28);
        ptr2_U64_5 = (uint64_t **)((int64_t)pU64_4 + 0x27U & 0xffffffffffffffe0);
        ptr2_U64_5[-1] = pU64_4;
      }
      param_1[1] = ptr2_U64_5;
    }
    param_1[3] = sz_2;
    param_1[4] = uVal_7;
    func_0x1806aa960(ptr2_U64_5,param_3,sz_2,param_4,uVal_8);
    *(uint8_t *)((int64_t)ptr2_U64_5 + sz_2) = 0;
    param_1[5] = 0;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_6 = (uint64_t *)(*fnPtr_1)();
  return pU64_6;
}

// Unwind@180119e00
void Unwind_180119e00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180119e90
uint64_t func_0x180119e90(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  uVal_1 = *param_2;
  lVal_3 = (*(uint64_t *)(param_1 + 0x5f8) & uVal_1) * 0x10;
  lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x5e0) + 8 + lVal_3);
  if (lVal_2 != *(int64_t *)(param_1 + 0x5d0)) {
    if (uVal_1 != *(uint64_t *)(lVal_2 + 0x10)) {
      do {
        if (lVal_2 == *(int64_t *)(*(int64_t *)(param_1 + 0x5e0) + lVal_3)) goto LAB_180119f6a;
        lVal_2 = *(int64_t *)(lVal_2 + 8);
      } while (uVal_1 != *(uint64_t *)(lVal_2 + 0x10));
    }
    if ((lVal_2 != *(int64_t *)(param_1 + 0x5d0)) && (*(char *)(lVal_2 + 0x60) == '\a'))
    goto LAB_180119fca;
  }
LAB_180119f6a:
  lVal_3 = (*(uint64_t *)(param_1 + 0x5b8) & uVal_1) * 0x10;
  lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x5a0) + 8 + lVal_3);
  if (lVal_2 != *(int64_t *)(param_1 + 0x590)) {
    if (uVal_1 != *(uint64_t *)(lVal_2 + 0x10)) {
      do {
        if (lVal_2 == *(int64_t *)(*(int64_t *)(param_1 + 0x5a0) + lVal_3)) {
          return 0;
        }
        lVal_2 = *(int64_t *)(lVal_2 + 8);
      } while (uVal_1 != *(uint64_t *)(lVal_2 + 0x10));
    }
    if ((lVal_2 != *(int64_t *)(param_1 + 0x590)) && (*(char *)(lVal_2 + 0x60) == '\a')) {
LAB_180119fca:
      return *(uint64_t *)(lVal_2 + 0x40);
    }
  }
  return 0;
}

// func_0x180119fe0
int64_t func_0x180119fe0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x38d4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x38d4) = 1;
    *(uint64_t *)(lVal_1 + 0x38c8) = 0x30fb80f1ead00cd8;
    *(uint16_t *)(lVal_1 + 0x38d0) = 0x1bf;
    func_0x180673140(&LAB_18011cf60);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x38c8;
}

// func_0x18011a070
void func_0x18011a070(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 9) == '\x01') {
    *param_1 = *param_1 ^ 0x558bf9a58fbd6dbf;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xbf;
    *(uint8_t *)((int64_t)param_1 + 9) = 0;
  }
  return;
}

// func_0x18011a100
uint32_t func_0x18011a100(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  uVal_1 = *param_2;
  lVal_3 = (*(uint64_t *)(param_1 + 0x5f8) & uVal_1) * 0x10;
  lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x5e0) + 8 + lVal_3);
  if (lVal_2 != *(int64_t *)(param_1 + 0x5d0)) {
    if (uVal_1 != *(uint64_t *)(lVal_2 + 0x10)) {
      do {
        if (lVal_2 == *(int64_t *)(*(int64_t *)(param_1 + 0x5e0) + lVal_3)) goto LAB_18011a1da;
        lVal_2 = *(int64_t *)(lVal_2 + 8);
      } while (uVal_1 != *(uint64_t *)(lVal_2 + 0x10));
    }
    if ((lVal_2 != *(int64_t *)(param_1 + 0x5d0)) && (*(char *)(lVal_2 + 0x60) == '\x05'))
    goto LAB_18011a23a;
  }
LAB_18011a1da:
  lVal_3 = (*(uint64_t *)(param_1 + 0x5b8) & uVal_1) * 0x10;
  lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x5a0) + 8 + lVal_3);
  if (lVal_2 == *(int64_t *)(param_1 + 0x590)) {
    return 5;
  }
  if (uVal_1 != *(uint64_t *)(lVal_2 + 0x10)) {
    do {
      if (lVal_2 == *(int64_t *)(*(int64_t *)(param_1 + 0x5a0) + lVal_3)) {
        return 5;
      }
      lVal_2 = *(int64_t *)(lVal_2 + 8);
    } while (uVal_1 != *(uint64_t *)(lVal_2 + 0x10));
  }
  if (lVal_2 == *(int64_t *)(param_1 + 0x590)) {
    return 5;
  }
  if (*(char *)(lVal_2 + 0x60) != '\x05') {
    return 5;
  }
LAB_18011a23a:
  return *(uint32_t *)(lVal_2 + 0x40);
}

// func_0x18011a240
uint8_t func_0x18011a240(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0xf3);
}

// func_0x18011a2a0
int64_t func_0x18011a2a0(int64_t param_1)
{
  return param_1 + 0x140;
}

// func_0x18011a300
int64_t func_0x18011a300(int64_t param_1)
{
  return param_1 + 0xb98;
}

// func_0x18011a360
int64_t func_0x18011a360(int64_t param_1)
{
  return param_1 + 0x1178;
}

// func_0x18011a3c0
uint8_t func_0x18011a3c0(int64_t param_1)
{
  if (*(char *)(param_1 + 0xf0) == '\r') {
    return *(uint8_t *)(param_1 + 0x10e9);
  }
  return 0;
}

// func_0x18011a470
int64_t func_0x18011a470(int64_t param_1,int64_t param_2)
{
  int iVal_1;
  func_ptr_t fnPtr_2;
  short sz_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  
  iVal_1 = *(int *)(param_2 + 4);
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
  }
  uVal_4 = func_0x180126030(DAT_180840a60);
  sz_3 = func_0x1801293f0(uVal_4);
  uVal_5 = (uint64_t)(iVal_1 - sz_3 >> 4);
  uVal_7 = (*(int64_t *)(param_1 + 0x148) - *(int64_t *)(param_1 + 0x140) >> 3) *
          0x2e8ba2e8ba2e8ba3;
  if (uVal_7 < uVal_5 || uVal_7 - uVal_5 == 0) {
    lVal_6 = 0;
  }
  else {
    iVal_1 = *(int *)(param_2 + 4);
    DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
    if (DAT_180840a60 == 0) {
      DAT_180840a68 = 0;
    }
    uVal_4 = func_0x180126030(DAT_180840a60);
    sz_3 = func_0x1801293f0(uVal_4);
    uVal_5 = (uint64_t)(iVal_1 - sz_3 >> 4);
    uVal_7 = (*(int64_t *)(param_1 + 0x148) - *(int64_t *)(param_1 + 0x140) >> 3) *
            0x2e8ba2e8ba2e8ba3;
    if (uVal_7 < uVal_5 || uVal_7 - uVal_5 == 0) {
      func_0x18007f460();
      fnPtr_2 = (func_ptr_t )swi(3);
      lVal_6 = (*fnPtr_2)();
      return lVal_6;
    }
    lVal_6 = *(int64_t *)(param_1 + 0x140) + uVal_5 * 0x58;
  }
  return lVal_6;
}

// func_0x18011a670
uint8_t (*func_0x18011a670(int64_t param_1,uint8_t (*param_2)[16],short param_3))[16]
{
  int *pInt_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  
  pLong_2 = *(int64_t **)(param_1 + 0x30);
  do {
    pLong_2 = (int64_t *)*pLong_2;
    if (pLong_2 == *(int64_t **)(param_1 + 0x30)) {
      *param_2 = ZEXT816(0);
      return param_2;
    }
  } while (*(short *)(pLong_2 + 2) != param_3);
  *param_2 = ZEXT816(0);
  if (pLong_2[4] == 0) {
    uVal_3 = 0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(pLong_2[4] + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    uVal_3 = pLong_2[4];
  }
  *(int64_t *)*param_2 = pLong_2[3];
  *(uint64_t *)(*param_2 + 8) = uVal_3;
  return param_2;
}

// func_0x18011a720
int64_t func_0x18011a720(int64_t param_1)
{
  return param_1 + 0x1d0;
}

// func_0x18011a780
uint64_t func_0x18011a780(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x3a0);
}

// func_0x18011a7e0
uint8_t * func_0x18011a7e0(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x478) != 0) {
    return (uint8_t *)(*(int64_t *)(param_1 + 0x478) + 0x660);
  }
  return &DAT_18083eb30;
}

// func_0x18011a8c0
int64_t func_0x18011a8c0(int64_t param_1)
{
  return param_1 + 0x660;
}

// func_0x18011a920
int64_t func_0x18011a920(int64_t param_1)
{
  return param_1 + 0x1c0;
}

// func_0x18011a980
int64_t func_0x18011a980(int64_t param_1)
{
  return param_1 + 0x1d8;
}

// func_0x18011a9e0
int64_t func_0x18011a9e0(int64_t param_1)
{
  return param_1 + 0x1f0;
}

// func_0x18011aa40
int64_t func_0x18011aa40(int64_t param_1)
{
  return param_1 + 0x208;
}

// func_0x18011aaa0
int64_t func_0x18011aaa0(int64_t param_1)
{
  return param_1 + 0x43c;
}

// func_0x18011ab00
int64_t func_0x18011ab00(int64_t param_1)
{
  return param_1 + 0x440;
}

// func_0x18011ab60
int64_t func_0x18011ab60(int64_t param_1)
{
  return param_1 + 0x654;
}

// func_0x18011abc0
uint64_t func_0x18011abc0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x958);
}

// func_0x18011ac20
int64_t func_0x18011ac20(int64_t param_1)
{
  return param_1 + 0xa80;
}

// func_0x18011ac80
int64_t func_0x18011ac80(int64_t param_1)
{
  return param_1 + 0xa88;
}

// func_0x18011ace0
uint64_t func_0x18011ace0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 8);
}

// func_0x18011ad40
uint64_t func_0x18011ad40(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x38);
}

// func_0x18011ada0
uint64_t func_0x18011ada0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x98);
}

// func_0x18011ae00
uint64_t func_0x18011ae00(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0xd0);
}

// func_0x18011ae60
int64_t func_0x18011ae60(int64_t param_1)
{
  return param_1 + 0x70;
}

// func_0x18011aec0
void func_0x18011aec0(uint64_t param_1,uint32_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f478) {
    func_0x180672ec0(&DAT_18083f478);
    if (DAT_18083f478 == -1) {
      lVal_1 = func_0x18011b000(&DAT_180840f80);
      if (lVal_1 == 0) {
        DAT_18083f470 = (func_ptr_t )0x0;
      }
      else {
        DAT_18083f470 = (func_ptr_t )(lVal_1 + *(int *)(lVal_1 + 1) + 5);
      }
      _Init_thread_footer(&DAT_18083f478);
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f488) {
    func_0x180672ec0(&DAT_18083f488);
    if (DAT_18083f488 == -1) {
      DAT_18083f480 = DAT_18083f470;
      _Init_thread_footer(&DAT_18083f488);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00018011af40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18083f480)(param_1,param_2,param_3,param_4);
  return;
}

// Unwind@18011afd0
void Unwind_18011afd0(void)
{
  func_0x180672f60(&DAT_18083f478);
  return;
}

// func_0x18011b000
int64_t func_0x18011b000(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xcab0166c4f3eb74) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x51456aefaa2a54a2) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_18011b0a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x51456aefaa2a54a2);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_18011b0ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x51456aefaa2a54a2);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xfffffffffb6f3e4dU) + -0x16;
  }
LAB_18011b0a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_18011b0ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x18011b0e0
uint32_t * func_0x18011b0e0(uint32_t *param_1,uint32_t *param_2)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  
  uVal_1 = param_1[7];
  uVal_2 = param_1[0xb];
  uVal_3 = param_1[0xf];
  *param_2 = *param_1;
  auArr_4._4_4_ = param_1[8];
  auArr_4._0_4_ = param_1[4];
  auArr_4._8_4_ = param_1[3];
  auArr_4._12_4_ = param_1[1];
  auArr_4 = insertps(auArr_4,param_1[0xc],0x20);
  *(uint8_t (*)[16])(param_2 + 1) = auArr_4;
  auArr_5._4_4_ = param_1[9];
  auArr_5._0_4_ = param_1[5];
  auArr_5._8_4_ = param_1[4];
  auArr_5._12_4_ = param_1[2];
  auArr_4 = insertps(auArr_5,param_1[0xd],0x20);
  *(uint8_t (*)[16])(param_2 + 5) = auArr_4;
  auArr_6._4_4_ = param_1[10];
  auArr_6._0_4_ = param_1[6];
  auArr_6._8_4_ = param_1[5];
  auArr_6._12_4_ = param_1[3];
  auArr_4 = insertps(auArr_6,param_1[0xe],0x20);
  *(uint8_t (*)[16])(param_2 + 9) = auArr_4;
  param_2[0xd] = uVal_1;
  param_2[0xe] = uVal_2;
  param_2[0xf] = uVal_3;
  return param_2;
}

// func_0x18011b160
bool func_0x18011b160(float *param_1,uint64_t *param_2,uint64_t *param_3,float *param_4, float *param_5,float *param_6)
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  float fVal_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  float fVal_8;
  float fVal_9;
  
  fVal_5 = *(float *)(param_3 + 1) - *(float *)(param_2 + 1);
  fVal_7 = (float)*param_3 - (float)*param_2;
  fVal_9 = (float)((uint64_t)*param_3 >> 0x20) - (float)((uint64_t)*param_2 >> 0x20);
  *param_3 = CONCAT44(fVal_9,fVal_7);
  *(float *)(param_3 + 1) = fVal_5;
  fVal_6 = param_1[10] * fVal_5 + param_1[0xe] + param_1[6] * fVal_9 + param_1[2] * fVal_7;
  if (fVal_6 <= 0.0) {
    fVal_1 = param_1[1];
    fVal_2 = param_1[5];
    fVal_3 = param_1[9];
    fVal_4 = param_1[0xd];
    fVal_8 = DAT_1806aeae4 * param_6[1];
    *param_4 = *param_6 * DAT_1806aeae4 -
               (((param_1[8] * fVal_5 + param_1[0xc] + param_1[4] * fVal_9 + *param_1 * fVal_7) *
                *param_6 * DAT_1806aeae4) / fVal_6) * *param_5;
    param_4[1] = (((fVal_5 * fVal_3 + fVal_4 + fVal_9 * fVal_2 + fVal_7 * fVal_1) * fVal_8) / fVal_6) *
                 param_5[5] + fVal_8;
  }
  return fVal_6 <= 0.0;
}

// func_0x18011b260
void func_0x18011b260(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  uint8_t local_298 [8];
  uint8_t local_290 [16];
  uint8_t local_260;
  uint8_t local_250 [16];
  uint8_t local_238 [312];
  uint8_t local_100 [16];
  uint8_t local_e8 [16];
  uint8_t local_d4;
  uint8_t local_60 [16];
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0x278) == '\x01') {
    local_290 = ZEXT816(0);
    local_260 = 0;
    local_250 = ZEXT816(0);
    func_0x1806ab010(local_238,0,0x120);
    local_100 = ZEXT816(0);
    local_e8 = ZEXT816(0);
    local_d4 = 0;
    local_60 = ZEXT816(0);
    local_50 = 0;
    func_0x180108350(param_2,local_298);
    local_48 = 0x18a39a29c9f0ea2b;
    func_0x1800ff1e0(local_298,param_1 + 0x10,param_3);
    func_0x180107990(param_2);
    func_0x1800fe9f0(local_298);
  }
  return;
}

// Unwind@18011b380
void Unwind_18011b380(uint64_t param_1,int64_t param_2)
{
  func_0x1800fe9f0(param_2 + 0x20);
  return;
}

// thunk_FUN_18011b3c0
void thunk_FUN_18011b3c0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint8_t auStack_298 [8];
  uint8_t auStack_290 [16];
  uint8_t uStack_260;
  uint8_t auStack_250 [16];
  uint8_t auStack_238 [312];
  uint8_t auStack_100 [16];
  uint8_t auStack_e8 [16];
  uint8_t uStack_d4;
  uint8_t auStack_60 [16];
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0x278) == '\x01') {
    auStack_290 = ZEXT816(0);
    uStack_260 = 0;
    auStack_250 = ZEXT816(0);
    func_0x1806ab010(auStack_238,0,0x120);
    auStack_100 = ZEXT816(0);
    auStack_e8 = ZEXT816(0);
    uStack_d4 = 0;
    auStack_60 = ZEXT816(0);
    uStack_50 = 0;
    func_0x180108350(param_2,auStack_298);
    uStack_48 = 0x18a39a29c9f0ea2b;
    func_0x1800ff650(auStack_298,param_1 + 0x10,param_3,param_4);
    func_0x180107990(param_2);
    func_0x1800fe9f0(auStack_298);
  }
  return;
}

// func_0x18011b3c0
void func_0x18011b3c0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint8_t local_298 [8];
  uint8_t local_290 [16];
  uint8_t local_260;
  uint8_t local_250 [16];
  uint8_t local_238 [312];
  uint8_t local_100 [16];
  uint8_t local_e8 [16];
  uint8_t local_d4;
  uint8_t local_60 [16];
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0x278) == '\x01') {
    local_290 = ZEXT816(0);
    local_260 = 0;
    local_250 = ZEXT816(0);
    func_0x1806ab010(local_238,0,0x120);
    local_100 = ZEXT816(0);
    local_e8 = ZEXT816(0);
    local_d4 = 0;
    local_60 = ZEXT816(0);
    local_50 = 0;
    func_0x180108350(param_2,local_298);
    local_48 = 0x18a39a29c9f0ea2b;
    func_0x1800ff650(local_298,param_1 + 0x10,param_3,param_4);
    func_0x180107990(param_2);
    func_0x1800fe9f0(local_298);
  }
  return;
}

// Unwind@18011b4f0
void Unwind_18011b4f0(uint64_t param_1,int64_t param_2)
{
  func_0x1800fe9f0(param_2 + 0x20);
  return;
}

// func_0x18011b530
uint64_t func_0x18011b530(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0xb8);
}

// func_0x18011b590
uint8_t (*func_0x18011b590(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  int *pInt_1;
  uint64_t uVal_2;
  
  *param_2 = ZEXT816(0);
  if (*(int64_t *)(param_1 + 0x108) == 0) {
    uVal_2 = 0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(*(int64_t *)(param_1 + 0x108) + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    uVal_2 = *(uint64_t *)(param_1 + 0x108);
  }
  *(uint64_t *)*param_2 = *(uint64_t *)(param_1 + 0x100);
  *(uint64_t *)(*param_2 + 8) = uVal_2;
  return param_2;
}

// func_0x18011b620
void func_0x18011b620(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018011b676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x328))(param_1,0x65,0x1861812ff6d4add7);
  return;
}

// func_0x18011b680
uint64_t func_0x18011b680(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x1c0);
}

// func_0x18011b6e0
int64_t func_0x18011b6e0(int64_t param_1)
{
  return param_1 + 0x1d8;
}

// func_0x18011b740
uint64_t func_0x18011b740(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x208);
}

// func_0x18011b7a0
int64_t func_0x18011b7a0(int64_t param_1)
{
  return param_1 + 0x250;
}

// func_0x18011b800
int64_t func_0x18011b800(int64_t param_1)
{
  return param_1 + 0x2c8;
}

// func_0x18011b860
int64_t func_0x18011b860(int64_t param_1)
{
  return param_1 + 0x2cc;
}

// func_0x18011b8c0
int64_t func_0x18011b8c0(int64_t param_1)
{
  return param_1 + 0x2d4;
}

// func_0x18011b920
uint8_t (*func_0x18011b920(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  int *pInt_1;
  uint64_t uVal_2;
  
  *param_2 = ZEXT816(0);
  if (*(int64_t *)(param_1 + 0x698) == 0) {
    uVal_2 = 0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(*(int64_t *)(param_1 + 0x698) + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    uVal_2 = *(uint64_t *)(param_1 + 0x698);
  }
  *(uint64_t *)*param_2 = *(uint64_t *)(param_1 + 0x690);
  *(uint64_t *)(*param_2 + 8) = uVal_2;
  return param_2;
}

// func_0x18011b9b0
uint8_t (*func_0x18011b9b0(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  int *pInt_1;
  uint64_t uVal_2;
  
  *param_2 = ZEXT816(0);
  if (*(int64_t *)(param_1 + 0x768) == 0) {
    uVal_2 = 0;
  }
  else {
    LOCK();
    pInt_1 = (int *)(*(int64_t *)(param_1 + 0x768) + 8);
    *pInt_1 = *pInt_1 + 1;
    UNLOCK();
    uVal_2 = *(uint64_t *)(param_1 + 0x768);
  }
  *(uint64_t *)*param_2 = *(uint64_t *)(param_1 + 0x760);
  *(uint64_t *)(*param_2 + 8) = uVal_2;
  return param_2;
}

// func_0x18011ba40
uint64_t func_0x18011ba40(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x7b0);
}

// func_0x18011baa0
uint64_t func_0x18011baa0(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0xf18);
}

// func_0x18011bb00
uint64_t func_0x18011bb00(int64_t param_1)
{
  return *(uint64_t *)(param_1 + 0x10c0);
}

// func_0x18011bb60
int64_t func_0x18011bb60(int64_t param_1)
{
  return param_1 + 0x908;
}

// func_0x18011bbc0
void func_0x18011bbc0(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018011bc16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x420))(param_1,0x84,0x29031ea97266f1d5);
  return;
}

// func_0x18011bc20
void func_0x18011bc20(int64_t *param_1)
{
                    /* WARNING: Could not recover jumptable at 0x00018011bc76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(func_ptr_t *)(*param_1 + 0x428))(param_1,0x85,0x29169aa7a284bfbb);
  return;
}

// func_0x18011bc80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x18011bc80(int64_t param_1,uint param_2)
{
  int *pInt_1;
  int64_t *pLong_2;
  char *_Str;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  uint8_t auArr_5 [16];
  int iVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  void *pVoid_12;
  int64_t lVal_13;
  uint8_t *pU64_14;
  uint64_t uVal_15;
  uint8_t *pU64_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  bool bFlag_19;
  int64_t local_b0;
  uint8_t local_a8 [16];
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint8_t local_68 [28];
  uint32_t local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_4c = param_2;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083f4d0) {
    unique0x1000068a = SUB1612(_local_78,8);
    func_0x180672ec0(&DAT_18083f4d0);
    if (DAT_18083f4d0 == -1) {
      auArr_5._12_4_ = 0;
      auArr_5._0_12_ = stack0xffffffffffffff8c;
      _local_78 = auArr_5 << 0x20;
      func_0x18011cf90(&DAT_18083f490,local_78,local_98);
      func_0x1806731d0(&LAB_18011c420);
      _Init_thread_footer(&DAT_18083f4d0);
    }
  }
  local_78 = (uint8_t  [8])0x187a845198950328;
  lVal_11 = *(int64_t *)(param_1 + 0x700);
  uVal_18 = 0xcbf29ce484222325;
  lVal_13 = (((uint64_t)local_4c._3_1_ ^
            ((uint64_t)local_4c._2_1_ ^
            ((uint64_t)local_4c._1_1_ ^
            ((uint64_t)(byte)local_4c ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3 & _DAT_18083f4c0) * 0x10;
  lVal_8 = *(int64_t *)(DAT_18083f4a8 + 8 + lVal_13);
  if (lVal_8 != DAT_18083f498) {
    if (local_4c != *(uint *)(lVal_8 + 0x10)) {
      do {
        if (lVal_8 == *(int64_t *)(DAT_18083f4a8 + lVal_13)) goto LAB_18011bdbf;
        lVal_8 = *(int64_t *)(lVal_8 + 8);
      } while (local_4c != *(uint *)(lVal_8 + 0x10));
    }
    func_0x18011d840(&DAT_18083f490,local_78,&local_4c);
    return *(int64_t *)((int64_t)local_78 + 0x18);
  }
LAB_18011bdbf:
  if (local_4c < 10) {
    pU64_14 = (&PTR_s_MinecraftTenEmoticon_1806b5378)[(uint64_t)local_4c * 2];
    uVal_10 = *(uint64_t *)(&DAT_1806b5380 + (uint64_t)local_4c * 0x10);
    local_68._0_16_ = ZEXT816(0);
    _local_78 = ZEXT816(0);
    if ((local_4c == 9) || (local_4c == 0)) {
      uVal_7 = uVal_10 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_7) {
        uVal_17 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_8;
      }
      local_78 = (uint8_t  [8])pU64_16;
    }
    else {
      pU64_16 = local_78;
      uVal_17 = 0xf;
    }
  }
  else {
    _local_78 = ZEXT816(0);
    pU64_16 = local_78;
    uVal_17 = 0xf;
    uVal_10 = 0;
    pU64_14 = (uint8_t *)0x0;
  }
  local_68._0_8_ = uVal_10;
  local_68._8_8_ = uVal_17;
  func_0x1806aa960(pU64_16,pU64_14,uVal_10);
  pU64_16[uVal_10] = 0;
  uVal_10 = local_68._0_8_;
  if ((uint64_t)local_68._8_8_ < 0x10) {
    pU64_16 = local_78;
  }
  else {
    pU64_16 = (uint8_t *)local_78;
  }
  if (local_68._0_8_ != 0) {
    uVal_17 = (uint64_t)((uint)local_68._0_8_ & 3);
    if ((uint64_t)local_68._0_8_ < 4) {
      uVal_18 = 0xcbf29ce484222325;
      uVal_7 = 0;
    }
    else {
      uVal_18 = 0xcbf29ce484222325;
      uVal_7 = 0;
      do {
        uVal_18 = ((uint64_t)(byte)pU64_16[uVal_7 + 3] ^
                 ((uint64_t)(byte)pU64_16[uVal_7 + 2] ^
                 ((uint64_t)(byte)pU64_16[uVal_7 + 1] ^
                 ((byte)pU64_16[uVal_7] ^ uVal_18) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3)
                 * 0x100000001b3;
        uVal_7 = uVal_7 + 4;
      } while ((local_68._0_8_ & 0xfffffffffffffffc) != uVal_7);
      if (uVal_17 == 0) goto LAB_18011bf37;
    }
    uVal_15 = 0;
    do {
      uVal_18 = ((byte)pU64_16[uVal_15 + uVal_7] ^ uVal_18) * 0x100000001b3;
      uVal_15 = uVal_15 + 1;
    } while (uVal_17 != uVal_15);
  }
LAB_18011bf37:
  lVal_13 = (uVal_18 & *(uint64_t *)(lVal_11 + 0x88)) * 0x10;
  lVal_8 = *(int64_t *)(*(int64_t *)(lVal_11 + 0x70) + 8 + lVal_13);
  if (lVal_8 == *(int64_t *)(lVal_11 + 0x60)) {
LAB_18011c014:
    lVal_11 = **(int64_t **)(lVal_11 + 0x40);
  }
  else {
    lVal_13 = *(int64_t *)(*(int64_t *)(lVal_11 + 0x70) + lVal_13);
    if (local_68._0_8_ != 0) {
      uVal_18 = *(uint64_t *)(lVal_8 + 0x20);
      while( true ) {
        if (uVal_10 == uVal_18) {
          if (*(uint64_t *)(lVal_8 + 0x28) < 0x10) {
            pVoid_12 = (void *)(lVal_8 + 0x10);
          }
          else {
            pVoid_12 = *(void **)(lVal_8 + 0x10);
          }
          iVal_6 = memcmp(pU64_16,pVoid_12,uVal_10);
          if (iVal_6 == 0) goto LAB_18011bfc0;
        }
        if (lVal_8 == lVal_13) break;
        lVal_8 = *(int64_t *)(lVal_8 + 8);
        uVal_18 = *(uint64_t *)(lVal_8 + 0x20);
      }
      goto LAB_18011c014;
    }
    for (; *(int64_t *)(lVal_8 + 0x20) != 0; lVal_8 = *(int64_t *)(lVal_8 + 8)) {
      if (lVal_8 == lVal_13) goto LAB_18011c014;
    }
LAB_18011bfc0:
    func_0x18011d140(lVal_11 + 0x58,local_98,local_78);
    lVal_8 = *(int64_t *)(lVal_11 + 0x40);
    if ((uint64_t)(*(int64_t *)(lVal_11 + 0x48) - lVal_8 >> 4) <=
        *(uint64_t *)((int64_t)local_98 + 0x30)) goto LAB_18011c014;
    lVal_11 = *(uint64_t *)((int64_t)local_98 + 0x30) * 0x10;
    pLong_3 = (int64_t *)(lVal_8 + lVal_11);
    lVal_11 = *(int64_t *)(lVal_8 + 8 + lVal_11);
    if (lVal_11 == 0) {
      local_a8._8_8_ = 0;
    }
    else {
      LOCK();
      pInt_1 = (int *)(lVal_11 + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
      local_a8._8_8_ = pLong_3[1];
    }
    lVal_11 = *pLong_3;
    local_a8._0_8_ = lVal_11;
    if (local_4c == 3) {
      iVal_6 = func_0x18012abd0(lVal_11);
      if (iVal_6 == 3) {
        local_98._4_4_ = _UNK_1806b54a4;
        local_98._0_4_ = _DAT_1806b54a0;
        uStack_90._0_4_ = _UNK_1806b54a8;
        uStack_90._4_4_ = _UNK_1806b54ac;
        local_88 = CONCAT44(local_88._4_4_,0xb58cfd0f);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x38ec) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0x38ec) = 1;
          func_0x18007cfc0(lVal_11 + 0x38d5,local_98);
          func_0x180673140(&LAB_18011d750);
        }
        _Str = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x38d5)
        ;
        func_0x18011db00(_Str);
        _local_98 = ZEXT816(0);
        sz_9 = strlen(_Str);
        if ((int64_t)sz_9 < 0) {
          func_0x18007ba70();
          fnPtr_4 = (func_ptr_t )swi(3);
          lVal_11 = (*fnPtr_4)();
          return lVal_11;
        }
        uVal_18 = 0xf;
        pU64_16 = local_98;
        if (0xf < sz_9) {
          uVal_10 = sz_9 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_10) {
            uVal_18 = uVal_10;
          }
          if (uVal_10 < 0xfff) {
            pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
          }
          else {
            lVal_11 = func_0x180672de0(uVal_18 + 0x28);
            pU64_16 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_16 + -8) = lVal_11;
          }
          local_98 = (uint8_t  [8])pU64_16;
        }
        local_88 = sz_9;
        local_80 = uVal_18;
        func_0x1806aa960(pU64_16,_Str,sz_9);
        pU64_16[sz_9] = 0;
        uVal_18 = local_80;
        lVal_11 = local_a8._0_8_;
        pU64_16 = (uint8_t *)local_98;
        pU64_14 = local_98;
        if (0xf < local_80) {
          pU64_14 = (uint8_t *)local_98;
        }
        if (*(uint64_t *)(local_a8._0_8_ + 0x2c8) < 0x10) {
          pVoid_12 = (void *)(local_a8._0_8_ + 0x2b0);
        }
        else {
          pVoid_12 = *(void **)(local_a8._0_8_ + 0x2b0);
        }
        if (*(size_t *)(local_a8._0_8_ + 0x2c0) == local_88) {
          if (local_88 == 0) {
            bFlag_19 = true;
          }
          else {
            iVal_6 = memcmp(pVoid_12,pU64_14,local_88);
            bFlag_19 = iVal_6 == 0;
          }
        }
        else {
          bFlag_19 = false;
        }
        if (0xf < uVal_18) {
          uVal_10 = uVal_18 + 1;
          pU64_14 = pU64_16;
          if (0xfff < uVal_10) {
            pU64_14 = *(uint8_t **)(pU64_16 + -8);
            if ((uint8_t *)0x1f < pU64_16 + (-8 - (int64_t)pU64_14)) goto LAB_18011c303;
            uVal_10 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(pU64_14,uVal_10);
        }
        if (bFlag_19) goto LAB_18011c215;
      }
    }
    else {
LAB_18011c215:
      local_b0 = lVal_11;
      func_0x18011c4c0(&DAT_18083f490,local_98,&local_4c,&local_b0);
    }
    pLong_3 = (int64_t *)local_a8._8_8_;
    if ((int64_t *)local_a8._8_8_ != (int64_t *)0x0) {
      LOCK();
      pLong_2 = (int64_t *)(local_a8._8_8_ + 8);
      *(int *)pLong_2 = *(int *)pLong_2 + -1;
      UNLOCK();
      if (*(int *)pLong_2 == 0) {
        (***(func_ptr_t **)local_a8._8_8_)(local_a8._8_8_);
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
  if (0xf < (uint64_t)local_68._8_8_) {
    uVal_18 = local_68._8_8_ + 1;
    lVal_8 = (int64_t)local_78;
    if (0xfff < uVal_18) {
      lVal_8 = *(int64_t *)((int64_t)local_78 + -8);
      if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_8)) {
LAB_18011c303:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_18 = local_68._8_8_ + 0x28;
    }
    thunk_FUN_180695dd0(lVal_8,uVal_18);
  }
  return lVal_11;
}

// Unwind@18011c310
void Unwind_18011c310(void)
{
  func_0x180672f60(&DAT_18083f4d0);
  return;
}

// Unwind@18011c350
void Unwind_18011c350(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  return;
}
