#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1800a2510
void Unwind_1800a2510(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x68);
  return;
}

// func_0x1800a2540
uint8_t * func_0x1800a2540(int64_t *param_1,uint8_t *param_2,uint64_t param_3,char param_4)
{
  uint uVal_1;
  uint64_t uVal_2;
  int64_t *pLong_3;
  char *fnPtr_4;
  func_ptr_t fnPtr_5;
  uint8_t uVal_6;
  uint64_t uVal_7;
  char ch_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t *pU64_12;
  uint uVal_13;
  uint8_t local_80 [16];
  uint8_t local_70;
  uint64_t local_68;
  uint8_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint8_t local_40 [8];
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVal_2 = param_1[7];
  uVal_9 = (uint64_t)((uint)uVal_2 & 0x1f);
  uVal_10 = uVal_9 - 1;
  if ((*(uint *)(((uint64_t)(uVal_9 != 0) << 0x3d) +
                 ((int64_t)uVal_2 >> 0x3f & 0xe000000000000000U) + (uVal_2 >> 5) * 4 + param_1[4] +
                 (uVal_10 >> 5) * 4 + -0x2000000000000000) >> ((uint)uVal_10 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
    return param_2;
  }
  local_40[0] = 3;
  local_38 = func_0x1800a0a50(param_3);
  if (param_4 == '\0') {
    local_80[0] = 5;
    local_50 = CONCAT44(local_50._4_4_,(int)((uint64_t)(param_1[2] - param_1[1]) >> 3));
    pLong_3 = (int64_t *)param_1[0x15];
    if (pLong_3 == (int64_t *)0x0) {
      func_0x180674610();
      fnPtr_5 = (func_ptr_t )swi(3);
      pU64_12 = (uint8_t *)(*fnPtr_5)();
      return pU64_12;
    }
    ch_8 = (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,&local_50,local_80,local_40);
    if (ch_8 != '\0') goto LAB_1800a260d;
LAB_1800a275f:
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
  }
  else {
LAB_1800a260d:
    uVal_7 = local_38;
    uVal_6 = local_40[0];
    if (param_1[1] == param_1[2]) {
      local_40[0] = 0;
      local_38 = 0;
      pU64_12 = (uint8_t *)*param_1;
      local_70 = *pU64_12;
      *pU64_12 = uVal_6;
      local_68 = *(uint64_t *)(pU64_12 + 8);
      *(uint64_t *)(pU64_12 + 8) = uVal_7;
      func_0x180084c70(&local_68);
      lVal_11 = *param_1;
LAB_1800a278a:
      *param_2 = 1;
    }
    else {
      fnPtr_4 = *(char **)(param_1[2] + -8);
      if (fnPtr_4 == (char *)0x0) goto LAB_1800a275f;
      if (*fnPtr_4 == '\x02') {
        lVal_11 = *(int64_t *)(fnPtr_4 + 8);
        pU64_12 = *(uint8_t **)(lVal_11 + 8);
        if (pU64_12 == *(uint8_t **)(lVal_11 + 0x10)) {
          func_0x180085520(lVal_11,pU64_12,local_40);
        }
        else {
          *pU64_12 = local_40[0];
          *(uint64_t *)(pU64_12 + 8) = local_38;
          local_40[0] = 0;
          local_38 = 0;
          *(int64_t *)(lVal_11 + 8) = *(int64_t *)(lVal_11 + 8) + 0x10;
        }
        lVal_11 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_1800a278a;
      }
      uVal_2 = param_1[0xb];
      uVal_9 = (uint64_t)((uint)uVal_2 & 0x1f);
      uVal_10 = uVal_9 - 1;
      lVal_11 = ((uint64_t)(uVal_9 != 0) << 0x3d) +
               ((int64_t)uVal_2 >> 0x3f & 0xe000000000000000U) + (uVal_2 >> 5) * 4 + param_1[8] +
               (uVal_10 >> 5) * 4;
      local_50 = lVal_11 + -0x2000000000000000;
      uVal_13 = (uint)uVal_10;
      local_48 = (uint64_t)(uVal_13 & 0x1f);
      uVal_1 = *(uint *)(lVal_11 + -0x2000000000000000);
      func_0x1800a2b50(param_1 + 8,local_80,&local_50);
      uVal_7 = local_38;
      uVal_6 = local_40[0];
      if ((uVal_1 >> (uVal_13 & 0x1f) & 1) == 0) goto LAB_1800a275f;
      local_40[0] = 0;
      local_38 = 0;
      pU64_12 = (uint8_t *)param_1[0xc];
      local_60 = *pU64_12;
      *pU64_12 = uVal_6;
      local_58 = *(uint64_t *)(pU64_12 + 8);
      *(uint64_t *)(pU64_12 + 8) = uVal_7;
      func_0x180084c70(&local_58);
      *param_2 = 1;
      lVal_11 = param_1[0xc];
    }
    *(int64_t *)(param_2 + 8) = lVal_11;
  }
  func_0x180084c70(&local_38,local_40[0]);
  return param_2;
}

// Unwind@1800a27c0
void Unwind_1800a27c0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a27e0
void Unwind_1800a27e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a2800
void Unwind_1800a2800(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a2820
void Unwind_1800a2820(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x68);
  return;
}

// func_0x1800a2850
uint8_t * func_0x1800a2850(int64_t *param_1,uint8_t *param_2,uint64_t *param_3,char param_4)
{
  uint uVal_1;
  uint64_t uVal_2;
  int64_t *pLong_3;
  char *fnPtr_4;
  func_ptr_t fnPtr_5;
  uint8_t uVal_6;
  uint64_t uVal_7;
  char ch_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t *pU64_12;
  uint uVal_13;
  uint8_t local_80 [16];
  uint8_t local_70;
  uint64_t local_68;
  uint8_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint8_t local_40 [8];
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVal_2 = param_1[7];
  uVal_9 = (uint64_t)((uint)uVal_2 & 0x1f);
  uVal_10 = uVal_9 - 1;
  if ((*(uint *)(((uint64_t)(uVal_9 != 0) << 0x3d) +
                 ((int64_t)uVal_2 >> 0x3f & 0xe000000000000000U) + (uVal_2 >> 5) * 4 + param_1[4] +
                 (uVal_10 >> 5) * 4 + -0x2000000000000000) >> ((uint)uVal_10 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
    return param_2;
  }
  local_38 = *param_3;
  local_40[0] = 6;
  if (param_4 == '\0') {
    local_80[0] = 5;
    local_50 = CONCAT44(local_50._4_4_,(int)((uint64_t)(param_1[2] - param_1[1]) >> 3));
    pLong_3 = (int64_t *)param_1[0x15];
    if (pLong_3 == (int64_t *)0x0) {
      func_0x180674610();
      fnPtr_5 = (func_ptr_t )swi(3);
      pU64_12 = (uint8_t *)(*fnPtr_5)();
      return pU64_12;
    }
    ch_8 = (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,&local_50,local_80,local_40);
    if (ch_8 != '\0') goto LAB_1800a2915;
LAB_1800a2a67:
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
  }
  else {
LAB_1800a2915:
    uVal_7 = local_38;
    uVal_6 = local_40[0];
    if (param_1[1] == param_1[2]) {
      local_40[0] = 0;
      local_38 = 0;
      pU64_12 = (uint8_t *)*param_1;
      local_70 = *pU64_12;
      *pU64_12 = uVal_6;
      local_68 = *(uint64_t *)(pU64_12 + 8);
      *(uint64_t *)(pU64_12 + 8) = uVal_7;
      func_0x180084c70(&local_68);
      lVal_11 = *param_1;
LAB_1800a2a92:
      *param_2 = 1;
    }
    else {
      fnPtr_4 = *(char **)(param_1[2] + -8);
      if (fnPtr_4 == (char *)0x0) goto LAB_1800a2a67;
      if (*fnPtr_4 == '\x02') {
        lVal_11 = *(int64_t *)(fnPtr_4 + 8);
        pU64_12 = *(uint8_t **)(lVal_11 + 8);
        if (pU64_12 == *(uint8_t **)(lVal_11 + 0x10)) {
          func_0x180085520(lVal_11,pU64_12,local_40);
        }
        else {
          *pU64_12 = local_40[0];
          *(uint64_t *)(pU64_12 + 8) = local_38;
          local_40[0] = 0;
          local_38 = 0;
          *(int64_t *)(lVal_11 + 8) = *(int64_t *)(lVal_11 + 8) + 0x10;
        }
        lVal_11 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_1800a2a92;
      }
      uVal_2 = param_1[0xb];
      uVal_9 = (uint64_t)((uint)uVal_2 & 0x1f);
      uVal_10 = uVal_9 - 1;
      lVal_11 = ((uint64_t)(uVal_9 != 0) << 0x3d) +
               ((int64_t)uVal_2 >> 0x3f & 0xe000000000000000U) + (uVal_2 >> 5) * 4 + param_1[8] +
               (uVal_10 >> 5) * 4;
      local_50 = lVal_11 + -0x2000000000000000;
      uVal_13 = (uint)uVal_10;
      local_48 = (uint64_t)(uVal_13 & 0x1f);
      uVal_1 = *(uint *)(lVal_11 + -0x2000000000000000);
      func_0x1800a2b50(param_1 + 8,local_80,&local_50);
      uVal_7 = local_38;
      uVal_6 = local_40[0];
      if ((uVal_1 >> (uVal_13 & 0x1f) & 1) == 0) goto LAB_1800a2a67;
      local_40[0] = 0;
      local_38 = 0;
      pU64_12 = (uint8_t *)param_1[0xc];
      local_60 = *pU64_12;
      *pU64_12 = uVal_6;
      local_58 = *(uint64_t *)(pU64_12 + 8);
      *(uint64_t *)(pU64_12 + 8) = uVal_7;
      func_0x180084c70(&local_58);
      *param_2 = 1;
      lVal_11 = param_1[0xc];
    }
    *(int64_t *)(param_2 + 8) = lVal_11;
  }
  func_0x180084c70(&local_38,local_40[0]);
  return param_2;
}

// Unwind@1800a2ac0
void Unwind_1800a2ac0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a2ae0
void Unwind_1800a2ae0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a2b00
void Unwind_1800a2b00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a2b20
void Unwind_1800a2b20(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x68);
  return;
}

// func_0x1800a2b50
int64_t * func_0x1800a2b50(int64_t *param_1,int64_t *param_2,int64_t *param_3)
{
  int64_t lVal_1;
  uint *pU64_2;
  int64_t lVal_3;
  func_ptr_t fnPtr_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint8_t local_80 [16];
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
    lVal_8 = lVal_3;
  }
  else {
    uVal_9 = (*param_3 - lVal_3) * 8 + param_3[1];
    uVal_10 = (uint64_t)((uint)uVal_9 & 0x1f);
    lVal_8 = ((int64_t)uVal_9 >> 0x3f & 0xe000000000000000U) + lVal_3 + (uVal_9 >> 5) * 4;
  }
  local_60 = ((int64_t)uVal_7 >> 0x3f & 0xe000000000000000U) + lVal_3 + (uVal_7 >> 5) * 4;
  local_58 = (uint64_t)((uint)uVal_7 & 0x1f);
  local_50 = lVal_8 + (uint64_t)(uVal_10 == 0x1f) * 4;
  local_48 = 0;
  if (uVal_10 != 0x1f) {
    local_48 = uVal_10 + 1;
  }
  local_70 = lVal_8;
  local_68 = uVal_10;
  func_0x1800a2ce0(local_80,&local_50,&local_60,&local_70);
  uVal_7 = param_1[3] - 1;
  if (-1 < (int64_t)uVal_7) {
    uVal_9 = param_1[3] + 0x1eU >> 5;
    lVal_5 = *param_1;
    if ((uVal_9 < (uint64_t)(param_1[1] - lVal_5 >> 2)) &&
       (lVal_1 = lVal_5 + uVal_9 * 4, lVal_1 != param_1[1])) {
      param_1[1] = lVal_1;
    }
    param_1[3] = uVal_7;
    if ((uVal_7 & 0x1f) != 0) {
      pU64_2 = (uint *)(lVal_5 + -4 + uVal_9 * 4);
      *pU64_2 = *pU64_2 & ~(-1 << (sbyte)(uVal_7 & 0x1f));
      lVal_5 = *param_1;
    }
    uVal_10 = uVal_10 + (lVal_8 - lVal_3) * 8;
    *param_2 = ((int64_t)uVal_10 >> 0x3f & 0xe000000000000000U) + lVal_5 + (uVal_10 >> 5) * 4;
    param_2[1] = (uint64_t)((uint)uVal_10 & 0x1f);
    return param_2;
  }
  func_0x18009e5d0();
  fnPtr_4 = (func_ptr_t )swi(3);
  pLong_6 = (int64_t *)(*fnPtr_4)();
  return pLong_6;
}

// Unwind@1800a2cc0
void Unwind_1800a2cc0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a2ce0
int64_t * func_0x1800a2ce0(int64_t *param_1,uint **param_2,uint **param_3,uint **param_4)
{
  uint *pU64_1;
  uint *pU64_2;
  uint *pU64_3;
  uint *pU64_4;
  byte bFlag_5;
  char ch_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  byte *pU8_10;
  uint uVal_11;
  uint uVal_12;
  byte *pU8_13;
  uint *pU64_14;
  byte bFlag_15;
  uint uVal_16;
  uint64_t uVal_17;
  uint uVal_18;
  uint uVal_19;
  sbyte sz_20;
  uint uVal_21;
  int64_t lVal_22;
  uint *pU64_23;
  uint uVal_24;
  byte *pU8_25;
  uint *pU64_26;
  
  pU64_2 = *param_2;
  pU64_23 = param_2[1];
  pU64_3 = *param_3;
  pU64_26 = param_3[1];
  if (((uint64_t)pU64_26 ^ (uint64_t)pU64_23 | (uint64_t)pU64_2 ^ (uint64_t)pU64_3) == 0) {
    uVal_7 = *(uint32_t *)((int64_t)param_4 + 4);
    uVal_8 = *(uint32_t *)(param_4 + 1);
    uVal_9 = *(uint32_t *)((int64_t)param_4 + 0xc);
    *(uint32_t *)param_1 = *(uint32_t *)param_4;
    *(uint32_t *)((int64_t)param_1 + 4) = uVal_7;
    *(uint32_t *)(param_1 + 1) = uVal_8;
    *(uint32_t *)((int64_t)param_1 + 0xc) = uVal_9;
  }
  else {
    pU64_14 = *param_4;
    lVal_22 = (int64_t)pU64_26 + (((int64_t)pU64_3 - (int64_t)pU64_2) * 8 - (int64_t)pU64_23);
    uVal_7 = *(uint32_t *)((int64_t)param_4 + 4);
    uVal_8 = *(uint32_t *)(param_4 + 1);
    uVal_9 = *(uint32_t *)((int64_t)param_4 + 0xc);
    *(uint32_t *)param_1 = *(uint32_t *)param_4;
    *(uint32_t *)((int64_t)param_1 + 4) = uVal_7;
    *(uint32_t *)(param_1 + 1) = uVal_8;
    *(uint32_t *)((int64_t)param_1 + 0xc) = uVal_9;
    uVal_17 = param_1[1] + lVal_22;
    if ((uint64_t)param_1[1] < (uint64_t)-lVal_22 && lVal_22 < 0) {
      lVal_22 = (uVal_17 >> 5) * 4 + *param_1 + -0x2000000000000000;
    }
    else {
      lVal_22 = (uVal_17 >> 3 & 0xfffffffffffffffc) + *param_1;
    }
    *param_1 = lVal_22;
    uVal_16 = (uint)uVal_17 & 0x1f;
    uVal_17 = (uint64_t)uVal_16;
    param_1[1] = uVal_17;
    bFlag_5 = (byte)pU64_23;
    uVal_24 = -1 << (bFlag_5 & 0x1f);
    pU64_4 = param_4[1];
    ch_6 = (char)pU64_4;
    uVal_11 = 0xffffffff >> (-ch_6 & 0x1fU);
    if (pU64_4 == (uint *)0x0) {
      uVal_11 = 0;
    }
    bFlag_15 = (byte)pU64_26;
    uVal_12 = 0xffffffff >> (-bFlag_15 & 0x1f);
    uVal_21 = uVal_12;
    if (pU64_26 == (uint *)0x0) {
      uVal_21 = 0;
    }
    uVal_18 = -1 << (sbyte)uVal_16;
    pU64_1 = (uint *)(lVal_22 + (uint64_t)(uVal_17 == 0) * -4);
    if (pU64_2 == pU64_3) {
      uVal_19 = *pU64_2 & uVal_21 & uVal_24;
      uVal_12 = uVal_19 << (ch_6 - bFlag_5 & 0x1f);
      if (pU64_4 < pU64_23) {
        uVal_12 = uVal_19 >> (bFlag_5 - ch_6 & 0x1f);
      }
      if (pU64_14 == pU64_1) {
        if (uVal_17 == 0) {
          uVal_18 = 0;
        }
        *pU64_14 = (uVal_11 | uVal_18) & *pU64_14 | uVal_12;
      }
      else {
        *pU64_14 = uVal_11 & *pU64_14 | uVal_12;
        pU64_14[1] = uVal_18 & pU64_14[1] |
                     (uVal_21 & uVal_24 & *pU64_2) >>
                     ((char)*(uint32_t *)(param_3 + 1) - (sbyte)uVal_16 & 0x1fU);
      }
    }
    else if (pU64_14 == pU64_1) {
      uVal_21 = (uVal_24 & *pU64_2) << (ch_6 - bFlag_5 & 0x1f);
      if (pU64_4 < pU64_23) {
        uVal_21 = (uVal_24 & *pU64_2) >> (bFlag_5 - ch_6 & 0x1f);
      }
      if (uVal_17 == 0) {
        uVal_18 = 0;
      }
      if (pU64_26 == (uint *)0x0) {
        uVal_11 = (uVal_11 | uVal_18) & *pU64_14;
      }
      else {
        uVal_24 = 0;
        if (uVal_17 != 0) {
          uVal_24 = uVal_16;
        }
        uVal_11 = (uVal_11 | uVal_18) & *pU64_14 | (uVal_12 & *pU64_3) << ((char)uVal_24 - bFlag_15 & 0x1f)
        ;
      }
      *pU64_14 = uVal_11 | uVal_21;
    }
    else {
      uVal_16 = (uint)pU64_23 & 7;
      if (uVal_16 == ((uint)pU64_4 & 7)) {
        bFlag_15 = bFlag_15 & 7;
        pU8_10 = (byte *)((int64_t)pU64_2 + ((uint64_t)pU64_23 >> 3));
        pU8_25 = (byte *)((int64_t)pU64_3 + ((uint64_t)pU64_26 >> 3));
        pU8_13 = (byte *)((int64_t)pU64_14 + ((uint64_t)pU64_4 >> 3));
        if (((uint64_t)pU64_23 & 7) != 0) {
          sz_20 = (sbyte)uVal_16;
          *pU8_13 = (byte)(0xff >> (8U - sz_20 & 0x1f)) & *pU8_13 |
                     (*pU8_10 >> sz_20) << sz_20;
          pU8_10 = pU8_10 + 1;
          pU8_13 = pU8_13 + 1;
        }
        lVal_22 = (int64_t)pU8_25 - (int64_t)pU8_10;
        func_0x1806aa960(pU8_13,pU8_10,lVal_22);
        if (((uint64_t)pU64_26 & 7) != 0) {
          pU8_13[lVal_22] =
               (byte)(0xff >> (8 - bFlag_15 & 0x1f)) & *pU8_25 |
               (pU8_13[lVal_22] >> bFlag_15) << bFlag_15;
        }
      }
      else {
        pU64_26 = pU64_2 + 1;
        if (pU64_4 < pU64_23) {
          pU64_23 = (uint *)((int64_t)pU64_23 - (int64_t)pU64_4);
          bFlag_5 = (byte)pU64_23;
          uVal_16 = 0xffffffff >> (bFlag_5 & 0x1f);
          uVal_11 = uVal_11 & *pU64_14 | (uVal_24 & *pU64_2) >> (bFlag_5 & 0x1f);
          *pU64_14 = uVal_11;
          if (pU64_26 != pU64_3) {
            do {
              *pU64_14 = uVal_11 & uVal_16 | *pU64_26 << (0x20 - bFlag_5 & 0x1f);
              uVal_11 = pU64_14[1] & ~uVal_16 | *pU64_26 >> (bFlag_5 & 0x1f);
              pU64_14[1] = uVal_11;
              pU64_14 = pU64_14 + 1;
              pU64_26 = pU64_26 + 1;
            } while (pU64_26 != pU64_3);
          }
          if (param_3[1] != (uint *)0x0) {
            uVal_24 = (*pU64_26 & uVal_21) << (0x20 - bFlag_5 & 0x1f);
            if (param_3[1] < pU64_23) {
              *pU64_14 = uVal_11 & (uVal_16 | uVal_18) | uVal_24;
            }
            else {
              *pU64_14 = uVal_11 & uVal_16 | uVal_24;
              if (param_3[1] != pU64_23) {
                pU64_14[1] = uVal_18 & pU64_14[1] | (uVal_21 & *pU64_26) >> (bFlag_5 & 0x1f);
              }
            }
          }
        }
        else {
          bFlag_5 = (byte)((int64_t)pU64_4 - (int64_t)pU64_23);
          pU64_23 = (uint *)(0x20 - ((int64_t)pU64_4 - (int64_t)pU64_23));
          *pU64_14 = uVal_11 & *pU64_14 | (uVal_24 & *pU64_2) << (bFlag_5 & 0x1f);
          uVal_11 = *pU64_2 >> (-bFlag_5 & 0x1f);
          for (; pU64_2 = pU64_14 + 1, pU64_26 != pU64_3; pU64_26 = pU64_26 + 1) {
            *pU64_2 = *pU64_26 << (bFlag_5 & 0x1f) | uVal_11;
            uVal_11 = *pU64_26 >> ((byte)pU64_23 & 0x1f);
            pU64_14 = pU64_2;
          }
          if (param_3[1] < pU64_23) {
            if (param_3[1] == (uint *)0x0) {
              uVal_11 = uVal_18 & *pU64_2 | uVal_11;
            }
            else {
              uVal_11 = uVal_18 & *pU64_2 | uVal_11 | (uVal_21 & *pU64_26) << (bFlag_5 & 0x1f);
            }
            *pU64_2 = uVal_11;
          }
          else {
            *pU64_2 = *pU64_26 << (bFlag_5 & 0x1f) | uVal_11;
            if (param_3[1] != pU64_23) {
              uVal_11 = *pU64_26 >> ((byte)pU64_23 & 0x1f);
              pU64_14[2] = (pU64_14[2] ^ uVal_11) & uVal_18 ^ uVal_11;
            }
          }
        }
      }
    }
  }
  return param_1;
}

// func_0x1800a3150
uint64_t * func_0x1800a3150(uint64_t *param_1,int64_t param_2)
{
  *param_1 = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  func_0x18067b3f0(param_2 + 8,param_1 + 1);
  *param_1 = &PTR_LAB_1806aff10;
  *(uint32_t *)(param_1 + 3) = *(uint32_t *)(param_2 + 0x18);
  param_1[4] = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  func_0x18067b3f0(param_2 + 0x28,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_LAB_1806b0a18;
  param_1[7] = *(uint64_t *)(param_2 + 0x38);
  return param_1;
}

// func_0x1800a3240
uint64_t func_0x1800a3240(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t local_68 [3];
  uint64_t local_50;
  int64_t local_48 [3];
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  func_0x18009fe30(local_68,*(uint64_t *)(param_2 + 8));
  func_0x18009fe30(local_48,*(int64_t *)(param_2 + 0x10) + 1);
  func_0x1800a3640(param_1," at line ",local_48,", column ",local_68);
  if (0xf < local_30) {
    uVal_1 = local_30 + 1;
    lVal_2 = local_48[0];
    if (0xfff < uVal_1) {
      lVal_2 = *(int64_t *)(local_48[0] + -8);
      if (0x1f < (uint64_t)((local_48[0] + -8) - lVal_2)) goto LAB_1800a331e;
      uVal_1 = local_30 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_1);
  }
  if (0xf < local_50) {
    uVal_1 = local_50 + 1;
    lVal_2 = local_68[0];
    if (0xfff < uVal_1) {
      lVal_2 = *(int64_t *)(local_68[0] + -8);
      if (0x1f < (uint64_t)((local_68[0] + -8) - lVal_2)) {
LAB_1800a331e:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_1 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_1);
  }
  return param_1;
}

// Unwind@1800a3320
void Unwind_1800a3320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800a3350
void Unwind_1800a3350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// func_0x1800a3380
void func_0x1800a3380(uint64_t *param_1,uint64_t *param_2,char *param_3,uint64_t *param_4, char *param_5,uint64_t *param_6,uint64_t *param_7)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  size_t sz_3;
  uint64_t unaff_RBX;
  uint64_t *pU64_4;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVal_5;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  uVal_5 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  lVal_1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_1) < uVal_5) {
    func_0x180082950(param_1,uVal_5,uVal_5,param_2,uVal_5);
  }
  else {
    param_1[2] = lVal_1 + uVal_5;
    pU64_4 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_4 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_4,param_2);
    *(uint8_t *)((int64_t)pU64_4 + lVal_1 + uVal_5) = 0;
  }
  sz_3 = strlen(param_3);
  lVal_1 = param_1[2];
  uVal_5 = param_1[3] - lVal_1;
  if (uVal_5 < sz_3) {
    func_0x180082950(param_1,sz_3,uVal_5,param_3,sz_3);
    uVal_5 = param_4[2];
    uVal_2 = param_4[3];
  }
  else {
    param_1[2] = sz_3 + lVal_1;
    pU64_4 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_4 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_4,param_3,sz_3);
    *(uint8_t *)((int64_t)pU64_4 + sz_3 + lVal_1) = 0;
    uVal_5 = param_4[2];
    uVal_2 = param_4[3];
  }
  if (0xf < uVal_2) {
    param_4 = (uint64_t *)*param_4;
  }
  lVal_1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_1) < uVal_5) {
    func_0x180082950(param_1,uVal_5,uVal_5,param_4,uVal_5);
  }
  else {
    param_1[2] = lVal_1 + uVal_5;
    pU64_4 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_4 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_4,param_4);
    *(uint8_t *)((int64_t)pU64_4 + lVal_1 + uVal_5) = 0;
  }
  sz_3 = strlen(param_5);
  lVal_1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_1) < sz_3) {
    func_0x180082950(param_1,sz_3,sz_3,param_5,sz_3,unaff_RBX,unaff_RDI,unaff_RSI,unaff_R12,
                  unaff_R14,unaff_R15);
    uVal_5 = param_6[2];
    uVal_2 = param_6[3];
  }
  else {
    param_1[2] = sz_3 + lVal_1;
    pU64_4 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_4 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_4,param_5);
    *(uint8_t *)((int64_t)pU64_4 + sz_3 + lVal_1) = 0;
    uVal_5 = param_6[2];
    uVal_2 = param_6[3];
  }
  if (0xf < uVal_2) {
    param_6 = (uint64_t *)*param_6;
  }
  lVal_1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_1) < uVal_5) {
    func_0x180082950(param_1,uVal_5,uVal_5,param_6,uVal_5,unaff_RBX,unaff_RDI,unaff_RSI,unaff_R12,
                  unaff_R14,unaff_R15);
    uVal_5 = param_7[2];
    uVal_2 = param_7[3];
  }
  else {
    param_1[2] = lVal_1 + uVal_5;
    pU64_4 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_4 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_4,param_6);
    *(uint8_t *)((int64_t)pU64_4 + lVal_1 + uVal_5) = 0;
    uVal_5 = param_7[2];
    uVal_2 = param_7[3];
  }
  if (0xf < uVal_2) {
    param_7 = (uint64_t *)*param_7;
  }
  lVal_1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_1) < uVal_5) {
    func_0x180082950(param_1,uVal_5,uVal_5,param_7,uVal_5);
  }
  else {
    param_1[2] = lVal_1 + uVal_5;
    if (0xf < (uint64_t)param_1[3]) {
      param_1 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)param_1,param_7);
    *(uint8_t *)((int64_t)param_1 + lVal_1 + uVal_5) = 0;
  }
  return;
}

// func_0x1800a3640
uint8_t (*func_0x1800a3640(uint8_t (*param_1)[16],char *param_2,int64_t param_3,char *param_4, int64_t param_5))[16]
{
  int64_t lVal_1;
  size_t sz_2;
  size_t sz_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t (*pArr16_6)[16];
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  sz_2 = strlen(param_2);
  lVal_1 = *(int64_t *)(param_3 + 0x10);
  sz_3 = strlen(param_4);
  uVal_4 = sz_3 + sz_2 + lVal_1 + *(int64_t *)(param_5 + 0x10);
  uVal_5 = 0xf;
  if (0xf < uVal_4) {
    func_0x180082810(param_1,uVal_4);
    *(uint64_t *)param_1[1] = 0;
    uVal_5 = *(uint64_t *)(param_1[1] + 8);
  }
  sz_2 = strlen(param_2);
  if (uVal_5 < sz_2) {
    func_0x180082950(param_1,sz_2);
  }
  else {
    *(size_t *)param_1[1] = sz_2;
    pArr16_6 = param_1;
    if (0xf < uVal_5) {
      pArr16_6 = *(uint8_t (**)[16])*param_1;
    }
    func_0x1806aa960(pArr16_6,param_2,sz_2);
    (*pArr16_6)[sz_2] = 0;
  }
  func_0x1800a3780(param_1,param_3,param_4,param_5);
  return param_1;
}

// Unwind@1800a3740
void Unwind_1800a3740(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1800a3780
void func_0x1800a3780(uint64_t *param_1,uint64_t *param_2,char *param_3,uint64_t *param_4)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  size_t sz_3;
  uint64_t uVal_4;
  uint64_t *pU64_5;
  
  uVal_4 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  lVal_1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_1) < uVal_4) {
    func_0x180082950(param_1,uVal_4,uVal_4,param_2,uVal_4);
  }
  else {
    param_1[2] = lVal_1 + uVal_4;
    pU64_5 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_5 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_5,param_2);
    *(uint8_t *)((int64_t)pU64_5 + lVal_1 + uVal_4) = 0;
  }
  sz_3 = strlen(param_3);
  lVal_1 = param_1[2];
  uVal_4 = param_1[3] - lVal_1;
  if (uVal_4 < sz_3) {
    func_0x180082950(param_1,sz_3,uVal_4,param_3,sz_3);
    uVal_4 = param_4[2];
    uVal_2 = param_4[3];
  }
  else {
    param_1[2] = sz_3 + lVal_1;
    pU64_5 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_5 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_5,param_3,sz_3);
    *(uint8_t *)((int64_t)pU64_5 + sz_3 + lVal_1) = 0;
    uVal_4 = param_4[2];
    uVal_2 = param_4[3];
  }
  if (0xf < uVal_2) {
    param_4 = (uint64_t *)*param_4;
  }
  lVal_1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_1) < uVal_4) {
    func_0x180082950(param_1,uVal_4,uVal_4,param_4,uVal_4);
  }
  else {
    param_1[2] = lVal_1 + uVal_4;
    if (0xf < (uint64_t)param_1[3]) {
      param_1 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)param_1,param_4);
    *(uint8_t *)((int64_t)param_1 + lVal_1 + uVal_4) = 0;
  }
  return;
}

// func_0x1800a38c0
uint8_t (*func_0x1800a38c0(uint8_t (*param_1)[16],char **param_2,char *param_3,int64_t param_4, uint64_t param_5))[16]
{
  size_t sz_1;
  size_t sz_2;
  char *_Str;
  uint8_t (*pArr16_3)[16];
  uint64_t uVal_4;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  _Str = *param_2;
  sz_1 = strlen(_Str);
  sz_2 = strlen(param_3);
  uVal_4 = 0xf;
  if (0xf < *(int64_t *)(param_4 + 0x10) + sz_2 + sz_1 + 1) {
    func_0x180082810(param_1);
    *(uint64_t *)param_1[1] = 0;
    _Str = *param_2;
    uVal_4 = *(uint64_t *)(param_1[1] + 8);
  }
  sz_1 = strlen(_Str);
  if (uVal_4 < sz_1) {
    func_0x180082950(param_1,sz_1);
  }
  else {
    *(size_t *)param_1[1] = sz_1;
    pArr16_3 = param_1;
    if (0xf < uVal_4) {
      pArr16_3 = *(uint8_t (**)[16])*param_1;
    }
    func_0x1806aa960(pArr16_3,_Str,sz_1);
    (*pArr16_3)[sz_1] = 0;
  }
  func_0x1800a1800(param_1,param_3,param_4,param_5);
  return param_1;
}

// Unwind@1800a39d0
void Unwind_1800a39d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x1800a3a00
uint64_t func_0x1800a3a00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  uint64_t *pU64_3;
  uint64_t uVal_4;
  uint64_t local_res20;
  uint8_t auStack_68 [32];
  uint64_t local_48;
  uint64_t *local_40;
  uint64_t *local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  local_res20 = param_4;
  local_30 = &local_res20;
  pU64_3 = (uint64_t *)func_0x1800a3aa0();
  local_48 = 0;
  local_40 = &local_res20;
  uVal_2 = func_0x18067e60c(*pU64_3 | 2,param_1,param_2,param_3);
  uVal_4 = 0xffffffff;
  if (-1 < (int)uVal_2) {
    uVal_4 = (uint64_t)uVal_2;
  }
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_68)) {
    return uVal_4;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_1)();
  return uVal_4;
}

// func_0x1800a3aa0
uint8_t * func_0x1800a3aa0(void)
{
  return &DAT_18083ec28;
}

// func_0x1800a3ab0
uint64_t func_0x1800a3ab0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_68 [32];
  uint8_t local_48 [56];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  *(uint8_t *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    func_0x1800833f0(local_48,param_4);
    func_0x18067a120(local_48,&DAT_180768cf0);
  }
  else if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_68)) {
    return 0;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x1800a3b20
int64_t func_0x1800a3b20(int64_t *param_1,uint8_t *param_2)
{
  uint8_t uVal_1;
  char *fnPtr_2;
  uint8_t *pU64_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t local_38;
  uint8_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    uVal_1 = *param_2;
    func_0x180082430(&local_38);
    pU64_3 = (uint8_t *)*param_1;
    *pU64_3 = uVal_1;
    uVal_4 = *(uint64_t *)(pU64_3 + 8);
    *(uint64_t *)(pU64_3 + 8) = local_38;
    local_38 = uVal_4;
    func_0x180084c70(&local_38);
    lVal_5 = *param_1;
  }
  else {
    fnPtr_2 = *(char **)(param_1[2] + -8);
    if (*fnPtr_2 == '\x02') {
      lVal_5 = *(int64_t *)(fnPtr_2 + 8);
      pU64_3 = *(uint8_t **)(lVal_5 + 8);
      if (pU64_3 == *(uint8_t **)(lVal_5 + 0x10)) {
        func_0x1800a3c70(lVal_5,pU64_3);
      }
      else {
        *pU64_3 = *param_2;
        func_0x180082430(pU64_3 + 8);
        *(int64_t *)(lVal_5 + 8) = *(int64_t *)(lVal_5 + 8) + 0x10;
      }
      lVal_5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_30 = *param_2;
      func_0x180082430(&local_28);
      pU64_3 = (uint8_t *)param_1[4];
      uVal_1 = *pU64_3;
      *pU64_3 = local_30;
      uVal_4 = *(uint64_t *)(pU64_3 + 8);
      *(uint64_t *)(pU64_3 + 8) = local_28;
      local_30 = uVal_1;
      local_28 = uVal_4;
      func_0x180084c70(&local_28);
      lVal_5 = param_1[4];
    }
  }
  return lVal_5;
}

// Unwind@1800a3c30
void Unwind_1800a3c30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a3c50
void Unwind_1800a3c50(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a3c70
uint8_t * func_0x1800a3c70(uint64_t *param_1,uint8_t *param_2,uint8_t *param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint8_t *pU64_8;
  uint64_t uVal_9;
  
  uVal_1 = *param_1;
  uVal_9 = ((int64_t)(param_1[1] - uVal_1) >> 4) + 1;
  uVal_3 = (int64_t)(param_1[2] - uVal_1) >> 4;
  uVal_7 = (uVal_3 >> 1) + uVal_3;
  if (uVal_7 <= uVal_9) {
    uVal_7 = uVal_9;
  }
  if (0xfffffffffffffff - (uVal_3 >> 1) < uVal_3) {
    uVal_7 = 0xfffffffffffffff;
  }
  if (uVal_7 >> 0x3c != 0) {
LAB_1800a3eec:
    func_0x18007ba90();
    goto LAB_1800a3ef1;
  }
  if (uVal_7 == 0) {
    uVal_3 = 0;
  }
  else if (uVal_7 < 0x100) {
    uVal_3 = func_0x180672de0();
  }
  else {
    if (0xffffffffffffffd < uVal_7) goto LAB_1800a3eec;
    lVal_4 = func_0x180672de0(uVal_7 * 0x10 + 0x27);
    uVal_3 = lVal_4 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_3 - 8) = lVal_4;
  }
  param_2[uVal_3 - uVal_1] = *param_3;
  func_0x180082430();
  pU64_8 = (uint8_t *)*param_1;
  pU64_5 = (uint8_t *)param_1[1];
  if (param_2 == pU64_5) {
    if (pU64_8 != param_2) {
      lVal_4 = 0;
      do {
        *(uint8_t *)(uVal_3 + lVal_4) = pU64_8[lVal_4];
        *(uint64_t *)(uVal_3 + 8 + lVal_4) = *(uint64_t *)(pU64_8 + lVal_4 + 8);
        pU64_8[lVal_4] = 0;
        *(uint64_t *)(pU64_8 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (pU64_8 + lVal_2 != param_2);
      goto LAB_1800a3e51;
    }
  }
  else {
    if (pU64_8 != param_2) {
      lVal_4 = 0;
      do {
        *(uint8_t *)(uVal_3 + lVal_4) = pU64_8[lVal_4];
        *(uint64_t *)(uVal_3 + 8 + lVal_4) = *(uint64_t *)(pU64_8 + lVal_4 + 8);
        pU64_8[lVal_4] = 0;
        *(uint64_t *)(pU64_8 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (pU64_8 + lVal_2 != param_2);
      pU64_5 = (uint8_t *)param_1[1];
    }
    if (param_2 != pU64_5) {
      lVal_4 = 0;
      do {
        param_2[lVal_4 + (uVal_3 - uVal_1) + 0x10] = param_2[lVal_4];
        *(uint64_t *)(param_2 + lVal_4 + (uVal_3 - uVal_1) + 0x18) =
             *(uint64_t *)(param_2 + lVal_4 + 8);
        param_2[lVal_4] = 0;
        *(uint64_t *)(param_2 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (param_2 + lVal_2 != pU64_5);
    }
LAB_1800a3e51:
    pU64_8 = (uint8_t *)*param_1;
  }
  if (pU64_8 != (uint8_t *)0x0) {
    pU64_5 = (uint8_t *)param_1[1];
    if (pU64_8 != pU64_5) {
      do {
        func_0x180084c70(pU64_8 + 8,*pU64_8);
        pU64_8 = pU64_8 + 0x10;
      } while (pU64_8 != pU64_5);
      pU64_8 = (uint8_t *)*param_1;
    }
    uVal_6 = param_1[2] - (int64_t)pU64_8;
    pU64_5 = pU64_8;
    if (0xfff < uVal_6) {
      pU64_5 = *(uint8_t **)(pU64_8 + -8);
      if ((uint8_t *)0x1f < pU64_8 + (-8 - (int64_t)pU64_5)) {
LAB_1800a3ef1:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_5,uVal_6);
  }
  *param_1 = uVal_3;
  param_1[1] = uVal_9 * 0x10 + uVal_3;
  param_1[2] = uVal_7 * 0x10 + uVal_3;
  return param_2 + (uVal_3 - uVal_1);
}

// Unwind@1800a3f00
void Unwind_1800a3f00(uint64_t param_1,int64_t param_2)
{
  func_0x1800857c0(param_2 + 0x20);
  return;
}

// Unwind@1800a3f40
void Unwind_1800a3f40(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a3f60
int64_t func_0x1800a3f60(int64_t *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  char *fnPtr_2;
  int64_t lVal_3;
  uint8_t *pU64_4;
  uint64_t local_30;
  uint8_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    uVal_1 = *param_2;
    pU64_4 = (uint8_t *)*param_1;
    *pU64_4 = 7;
    local_30 = *(uint64_t *)(pU64_4 + 8);
    *(uint64_t *)(pU64_4 + 8) = uVal_1;
    func_0x180084c70(&local_30);
    return *param_1;
  }
  fnPtr_2 = *(char **)(param_1[2] + -8);
  if (*fnPtr_2 == '\x02') {
    lVal_3 = *(int64_t *)(fnPtr_2 + 8);
    pU64_4 = *(uint8_t **)(lVal_3 + 8);
    if (pU64_4 == *(uint8_t **)(lVal_3 + 0x10)) {
      func_0x1800a4090();
    }
    else {
      *pU64_4 = 0;
      *(uint64_t *)(pU64_4 + 8) = 0;
      uVal_1 = *param_2;
      *pU64_4 = 7;
      *(uint64_t *)(pU64_4 + 8) = uVal_1;
      *(int64_t *)(lVal_3 + 8) = *(int64_t *)(lVal_3 + 8) + 0x10;
    }
    return *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  uVal_1 = *param_2;
  pU64_4 = (uint8_t *)param_1[4];
  local_28 = *pU64_4;
  *pU64_4 = 7;
  local_20 = *(uint64_t *)(pU64_4 + 8);
  *(uint64_t *)(pU64_4 + 8) = uVal_1;
  func_0x180084c70(&local_20);
  return param_1[4];
}

// Unwind@1800a4050
void Unwind_1800a4050(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a4070
void Unwind_1800a4070(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a4090
uint8_t * func_0x1800a4090(uint64_t *param_1,uint8_t *param_2,uint64_t *param_3)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t *pU64_9;
  uint64_t uVal_10;
  
  uVal_2 = *param_1;
  uVal_10 = ((int64_t)(param_1[1] - uVal_2) >> 4) + 1;
  uVal_7 = (int64_t)(param_1[2] - uVal_2) >> 4;
  uVal_4 = (uVal_7 >> 1) + uVal_7;
  if (uVal_4 <= uVal_10) {
    uVal_4 = uVal_10;
  }
  if (0xfffffffffffffff - (uVal_7 >> 1) < uVal_7) {
    uVal_4 = 0xfffffffffffffff;
  }
  if (uVal_4 >> 0x3c != 0) {
LAB_1800a42fb:
    func_0x18007ba90();
    goto LAB_1800a4300;
  }
  lVal_8 = uVal_4 * 0x10;
  if (uVal_4 == 0) {
    uVal_4 = 0;
  }
  else if (uVal_4 < 0x100) {
    uVal_4 = func_0x180672de0(lVal_8);
  }
  else {
    if (0xffffffffffffffd < uVal_4) goto LAB_1800a42fb;
    lVal_5 = func_0x180672de0(lVal_8 + 0x27);
    uVal_4 = lVal_5 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_4 - 8) = lVal_5;
  }
  param_2[uVal_4 - uVal_2] = 0;
  *(uint64_t *)(param_2 + ((uVal_4 + 8) - uVal_2)) = 0;
  uVal_1 = *param_3;
  param_2[uVal_4 - uVal_2] = 7;
  *(uint64_t *)(param_2 + ((uVal_4 + 8) - uVal_2)) = uVal_1;
  pU64_9 = (uint8_t *)*param_1;
  pU64_6 = (uint8_t *)param_1[1];
  if (param_2 == pU64_6) {
    if (pU64_9 != param_2) {
      lVal_5 = 0;
      do {
        *(uint8_t *)(uVal_4 + lVal_5) = pU64_9[lVal_5];
        *(uint64_t *)(uVal_4 + 8 + lVal_5) = *(uint64_t *)(pU64_9 + lVal_5 + 8);
        pU64_9[lVal_5] = 0;
        *(uint64_t *)(pU64_9 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (pU64_9 + lVal_3 != param_2);
      goto LAB_1800a4261;
    }
  }
  else {
    if (pU64_9 != param_2) {
      lVal_5 = 0;
      do {
        *(uint8_t *)(uVal_4 + lVal_5) = pU64_9[lVal_5];
        *(uint64_t *)(uVal_4 + 8 + lVal_5) = *(uint64_t *)(pU64_9 + lVal_5 + 8);
        pU64_9[lVal_5] = 0;
        *(uint64_t *)(pU64_9 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (pU64_9 + lVal_3 != param_2);
      pU64_6 = (uint8_t *)param_1[1];
    }
    if (param_2 != pU64_6) {
      lVal_5 = 0;
      do {
        param_2[lVal_5 + (uVal_4 - uVal_2) + 0x10] = param_2[lVal_5];
        *(uint64_t *)(param_2 + lVal_5 + (uVal_4 - uVal_2) + 0x18) =
             *(uint64_t *)(param_2 + lVal_5 + 8);
        param_2[lVal_5] = 0;
        *(uint64_t *)(param_2 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (param_2 + lVal_3 != pU64_6);
    }
LAB_1800a4261:
    pU64_9 = (uint8_t *)*param_1;
  }
  if (pU64_9 != (uint8_t *)0x0) {
    pU64_6 = (uint8_t *)param_1[1];
    if (pU64_9 != pU64_6) {
      do {
        func_0x180084c70(pU64_9 + 8,*pU64_9);
        pU64_9 = pU64_9 + 0x10;
      } while (pU64_9 != pU64_6);
      pU64_9 = (uint8_t *)*param_1;
    }
    uVal_7 = param_1[2] - (int64_t)pU64_9;
    pU64_6 = pU64_9;
    if (0xfff < uVal_7) {
      pU64_6 = *(uint8_t **)(pU64_9 + -8);
      if ((uint8_t *)0x1f < pU64_9 + (-8 - (int64_t)pU64_6)) {
LAB_1800a4300:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_6,uVal_7);
  }
  *param_1 = uVal_4;
  param_1[1] = uVal_10 * 0x10 + uVal_4;
  param_1[2] = lVal_8 + uVal_4;
  return param_2 + (uVal_4 - uVal_2);
}

// Unwind@1800a4310
void Unwind_1800a4310(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a4330
int64_t func_0x1800a4330(int64_t *param_1,byte *param_2)
{
  byte bFlag_1;
  char *fnPtr_2;
  int64_t lVal_3;
  uint8_t *pU64_4;
  uint64_t local_30;
  uint8_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    bFlag_1 = *param_2;
    pU64_4 = (uint8_t *)*param_1;
    *pU64_4 = 4;
    local_30 = *(uint64_t *)(pU64_4 + 8);
    *(uint64_t *)(pU64_4 + 8) = (uint64_t)bFlag_1;
    func_0x180084c70(&local_30);
    return *param_1;
  }
  fnPtr_2 = *(char **)(param_1[2] + -8);
  if (*fnPtr_2 == '\x02') {
    lVal_3 = *(int64_t *)(fnPtr_2 + 8);
    pU64_4 = *(uint8_t **)(lVal_3 + 8);
    if (pU64_4 == *(uint8_t **)(lVal_3 + 0x10)) {
      func_0x1800a4460();
    }
    else {
      *pU64_4 = 0;
      *(uint64_t *)(pU64_4 + 8) = 0;
      bFlag_1 = *param_2;
      *pU64_4 = 4;
      *(uint64_t *)(pU64_4 + 8) = (uint64_t)bFlag_1;
      *(int64_t *)(lVal_3 + 8) = *(int64_t *)(lVal_3 + 8) + 0x10;
    }
    return *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  bFlag_1 = *param_2;
  pU64_4 = (uint8_t *)param_1[4];
  local_28 = *pU64_4;
  *pU64_4 = 4;
  local_20 = *(uint64_t *)(pU64_4 + 8);
  *(uint64_t *)(pU64_4 + 8) = (uint64_t)bFlag_1;
  func_0x180084c70(&local_20);
  return param_1[4];
}

// Unwind@1800a4420
void Unwind_1800a4420(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a4440
void Unwind_1800a4440(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a4460
uint8_t * func_0x1800a4460(uint64_t *param_1,uint8_t *param_2,byte *param_3)
{
  byte bFlag_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t *pU64_9;
  uint64_t uVal_10;
  
  uVal_2 = *param_1;
  uVal_10 = ((int64_t)(param_1[1] - uVal_2) >> 4) + 1;
  uVal_7 = (int64_t)(param_1[2] - uVal_2) >> 4;
  uVal_4 = (uVal_7 >> 1) + uVal_7;
  if (uVal_4 <= uVal_10) {
    uVal_4 = uVal_10;
  }
  if (0xfffffffffffffff - (uVal_7 >> 1) < uVal_7) {
    uVal_4 = 0xfffffffffffffff;
  }
  if (uVal_4 >> 0x3c != 0) {
LAB_1800a46cb:
    func_0x18007ba90();
    goto LAB_1800a46d0;
  }
  lVal_8 = uVal_4 * 0x10;
  if (uVal_4 == 0) {
    uVal_4 = 0;
  }
  else if (uVal_4 < 0x100) {
    uVal_4 = func_0x180672de0(lVal_8);
  }
  else {
    if (0xffffffffffffffd < uVal_4) goto LAB_1800a46cb;
    lVal_5 = func_0x180672de0(lVal_8 + 0x27);
    uVal_4 = lVal_5 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_4 - 8) = lVal_5;
  }
  param_2[uVal_4 - uVal_2] = 0;
  *(uint64_t *)(param_2 + ((uVal_4 + 8) - uVal_2)) = 0;
  bFlag_1 = *param_3;
  param_2[uVal_4 - uVal_2] = 4;
  *(uint64_t *)(param_2 + ((uVal_4 + 8) - uVal_2)) = (uint64_t)bFlag_1;
  pU64_9 = (uint8_t *)*param_1;
  pU64_6 = (uint8_t *)param_1[1];
  if (param_2 == pU64_6) {
    if (pU64_9 != param_2) {
      lVal_5 = 0;
      do {
        *(uint8_t *)(uVal_4 + lVal_5) = pU64_9[lVal_5];
        *(uint64_t *)(uVal_4 + 8 + lVal_5) = *(uint64_t *)(pU64_9 + lVal_5 + 8);
        pU64_9[lVal_5] = 0;
        *(uint64_t *)(pU64_9 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (pU64_9 + lVal_3 != param_2);
      goto LAB_1800a4631;
    }
  }
  else {
    if (pU64_9 != param_2) {
      lVal_5 = 0;
      do {
        *(uint8_t *)(uVal_4 + lVal_5) = pU64_9[lVal_5];
        *(uint64_t *)(uVal_4 + 8 + lVal_5) = *(uint64_t *)(pU64_9 + lVal_5 + 8);
        pU64_9[lVal_5] = 0;
        *(uint64_t *)(pU64_9 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (pU64_9 + lVal_3 != param_2);
      pU64_6 = (uint8_t *)param_1[1];
    }
    if (param_2 != pU64_6) {
      lVal_5 = 0;
      do {
        param_2[lVal_5 + (uVal_4 - uVal_2) + 0x10] = param_2[lVal_5];
        *(uint64_t *)(param_2 + lVal_5 + (uVal_4 - uVal_2) + 0x18) =
             *(uint64_t *)(param_2 + lVal_5 + 8);
        param_2[lVal_5] = 0;
        *(uint64_t *)(param_2 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (param_2 + lVal_3 != pU64_6);
    }
LAB_1800a4631:
    pU64_9 = (uint8_t *)*param_1;
  }
  if (pU64_9 != (uint8_t *)0x0) {
    pU64_6 = (uint8_t *)param_1[1];
    if (pU64_9 != pU64_6) {
      do {
        func_0x180084c70(pU64_9 + 8,*pU64_9);
        pU64_9 = pU64_9 + 0x10;
      } while (pU64_9 != pU64_6);
      pU64_9 = (uint8_t *)*param_1;
    }
    uVal_7 = param_1[2] - (int64_t)pU64_9;
    pU64_6 = pU64_9;
    if (0xfff < uVal_7) {
      pU64_6 = *(uint8_t **)(pU64_9 + -8);
      if ((uint8_t *)0x1f < pU64_9 + (-8 - (int64_t)pU64_6)) {
LAB_1800a46d0:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_6,uVal_7);
  }
  *param_1 = uVal_4;
  param_1[1] = uVal_10 * 0x10 + uVal_4;
  param_1[2] = lVal_8 + uVal_4;
  return param_2 + (uVal_4 - uVal_2);
}

// Unwind@1800a46e0
void Unwind_1800a46e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a4700
int64_t func_0x1800a4700(int64_t *param_1,uint64_t param_2)
{
  char *fnPtr_1;
  int64_t lVal_2;
  uint8_t *pU64_3;
  uint64_t local_30;
  uint8_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    pU64_3 = (uint8_t *)*param_1;
    *pU64_3 = 0;
    local_30 = *(uint64_t *)(pU64_3 + 8);
    *(uint64_t *)(pU64_3 + 8) = 0;
    func_0x180084c70(&local_30);
    return *param_1;
  }
  fnPtr_1 = *(char **)(param_1[2] + -8);
  if (*fnPtr_1 == '\x02') {
    lVal_2 = *(int64_t *)(fnPtr_1 + 8);
    pU64_3 = *(uint8_t **)(lVal_2 + 8);
    if (pU64_3 == *(uint8_t **)(lVal_2 + 0x10)) {
      func_0x1800a4810(lVal_2,pU64_3,param_2);
    }
    else {
      *pU64_3 = 0;
      *(uint64_t *)(pU64_3 + 8) = 0;
      *(int64_t *)(lVal_2 + 8) = *(int64_t *)(lVal_2 + 8) + 0x10;
    }
    return *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  pU64_3 = (uint8_t *)param_1[4];
  local_28 = *pU64_3;
  *pU64_3 = 0;
  local_20 = *(uint64_t *)(pU64_3 + 8);
  *(uint64_t *)(pU64_3 + 8) = 0;
  func_0x180084c70(&local_20);
  return param_1[4];
}

// Unwind@1800a47d0
void Unwind_1800a47d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a47f0
void Unwind_1800a47f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a4810
uint8_t * func_0x1800a4810(uint64_t *param_1,uint8_t *param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t *pU64_8;
  uint64_t uVal_9;
  
  uVal_1 = *param_1;
  uVal_9 = ((int64_t)(param_1[1] - uVal_1) >> 4) + 1;
  uVal_6 = (int64_t)(param_1[2] - uVal_1) >> 4;
  uVal_3 = (uVal_6 >> 1) + uVal_6;
  if (uVal_3 <= uVal_9) {
    uVal_3 = uVal_9;
  }
  if (0xfffffffffffffff - (uVal_6 >> 1) < uVal_6) {
    uVal_3 = 0xfffffffffffffff;
  }
  if (uVal_3 >> 0x3c != 0) {
LAB_1800a4a5b:
    func_0x18007ba90();
    goto LAB_1800a4a60;
  }
  lVal_7 = uVal_3 * 0x10;
  if (uVal_3 == 0) {
    uVal_3 = 0;
  }
  else if (uVal_3 < 0x100) {
    uVal_3 = func_0x180672de0(lVal_7);
  }
  else {
    if (0xffffffffffffffd < uVal_3) goto LAB_1800a4a5b;
    lVal_4 = func_0x180672de0(lVal_7 + 0x27);
    uVal_3 = lVal_4 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_3 - 8) = lVal_4;
  }
  param_2[uVal_3 - uVal_1] = 0;
  *(uint64_t *)(param_2 + ((uVal_3 + 8) - uVal_1)) = 0;
  pU64_8 = (uint8_t *)*param_1;
  pU64_5 = (uint8_t *)param_1[1];
  if (param_2 == pU64_5) {
    if (pU64_8 != param_2) {
      lVal_4 = 0;
      do {
        *(uint8_t *)(uVal_3 + lVal_4) = pU64_8[lVal_4];
        *(uint64_t *)(uVal_3 + 8 + lVal_4) = *(uint64_t *)(pU64_8 + lVal_4 + 8);
        pU64_8[lVal_4] = 0;
        *(uint64_t *)(pU64_8 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (pU64_8 + lVal_2 != param_2);
      goto LAB_1800a49c1;
    }
  }
  else {
    if (pU64_8 != param_2) {
      lVal_4 = 0;
      do {
        *(uint8_t *)(uVal_3 + lVal_4) = pU64_8[lVal_4];
        *(uint64_t *)(uVal_3 + 8 + lVal_4) = *(uint64_t *)(pU64_8 + lVal_4 + 8);
        pU64_8[lVal_4] = 0;
        *(uint64_t *)(pU64_8 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (pU64_8 + lVal_2 != param_2);
      pU64_5 = (uint8_t *)param_1[1];
    }
    if (param_2 != pU64_5) {
      lVal_4 = 0;
      do {
        param_2[lVal_4 + (uVal_3 - uVal_1) + 0x10] = param_2[lVal_4];
        *(uint64_t *)(param_2 + lVal_4 + (uVal_3 - uVal_1) + 0x18) =
             *(uint64_t *)(param_2 + lVal_4 + 8);
        param_2[lVal_4] = 0;
        *(uint64_t *)(param_2 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (param_2 + lVal_2 != pU64_5);
    }
LAB_1800a49c1:
    pU64_8 = (uint8_t *)*param_1;
  }
  if (pU64_8 != (uint8_t *)0x0) {
    pU64_5 = (uint8_t *)param_1[1];
    if (pU64_8 != pU64_5) {
      do {
        func_0x180084c70(pU64_8 + 8,*pU64_8);
        pU64_8 = pU64_8 + 0x10;
      } while (pU64_8 != pU64_5);
      pU64_8 = (uint8_t *)*param_1;
    }
    uVal_6 = param_1[2] - (int64_t)pU64_8;
    pU64_5 = pU64_8;
    if (0xfff < uVal_6) {
      pU64_5 = *(uint8_t **)(pU64_8 + -8);
      if ((uint8_t *)0x1f < pU64_8 + (-8 - (int64_t)pU64_5)) {
LAB_1800a4a60:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_5,uVal_6);
  }
  *param_1 = uVal_3;
  param_1[1] = uVal_9 * 0x10 + uVal_3;
  param_1[2] = lVal_7 + uVal_3;
  return param_2 + (uVal_3 - uVal_1);
}

// Unwind@1800a4a70
void Unwind_1800a4a70(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a4a90
int64_t func_0x1800a4a90(int64_t *param_1,uint64_t *param_2)
{
  char *fnPtr_1;
  int64_t lVal_2;
  uint8_t *pU64_3;
  uint64_t uVal_4;
  uint64_t local_30;
  uint8_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    uVal_4 = *param_2;
    pU64_3 = (uint8_t *)*param_1;
    *pU64_3 = 5;
    local_30 = *(uint64_t *)(pU64_3 + 8);
    *(uint64_t *)(pU64_3 + 8) = uVal_4;
    func_0x180084c70(&local_30);
    return *param_1;
  }
  fnPtr_1 = *(char **)(param_1[2] + -8);
  if (*fnPtr_1 == '\x02') {
    lVal_2 = *(int64_t *)(fnPtr_1 + 8);
    pU64_3 = *(uint8_t **)(lVal_2 + 8);
    if (pU64_3 == *(uint8_t **)(lVal_2 + 0x10)) {
      func_0x1800a4bb0();
    }
    else {
      *pU64_3 = 0;
      *(uint64_t *)(pU64_3 + 8) = 0;
      uVal_4 = *param_2;
      *pU64_3 = 5;
      *(uint64_t *)(pU64_3 + 8) = uVal_4;
      *(int64_t *)(lVal_2 + 8) = *(int64_t *)(lVal_2 + 8) + 0x10;
    }
    return *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  uVal_4 = *param_2;
  pU64_3 = (uint8_t *)param_1[4];
  local_28 = *pU64_3;
  *pU64_3 = 5;
  local_20 = *(uint64_t *)(pU64_3 + 8);
  *(uint64_t *)(pU64_3 + 8) = uVal_4;
  func_0x180084c70(&local_20);
  return param_1[4];
}

// Unwind@1800a4b70
void Unwind_1800a4b70(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a4b90
void Unwind_1800a4b90(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a4bb0
uint8_t * func_0x1800a4bb0(uint64_t *param_1,uint8_t *param_2,uint64_t *param_3)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t *pU64_9;
  uint64_t uVal_10;
  
  uVal_1 = *param_1;
  uVal_10 = ((int64_t)(param_1[1] - uVal_1) >> 4) + 1;
  uVal_7 = (int64_t)(param_1[2] - uVal_1) >> 4;
  uVal_4 = (uVal_7 >> 1) + uVal_7;
  if (uVal_4 <= uVal_10) {
    uVal_4 = uVal_10;
  }
  if (0xfffffffffffffff - (uVal_7 >> 1) < uVal_7) {
    uVal_4 = 0xfffffffffffffff;
  }
  if (uVal_4 >> 0x3c != 0) {
LAB_1800a4e1b:
    func_0x18007ba90();
    goto LAB_1800a4e20;
  }
  lVal_8 = uVal_4 * 0x10;
  if (uVal_4 == 0) {
    uVal_4 = 0;
  }
  else if (uVal_4 < 0x100) {
    uVal_4 = func_0x180672de0(lVal_8);
  }
  else {
    if (0xffffffffffffffd < uVal_4) goto LAB_1800a4e1b;
    lVal_5 = func_0x180672de0(lVal_8 + 0x27);
    uVal_4 = lVal_5 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_4 - 8) = lVal_5;
  }
  param_2[uVal_4 - uVal_1] = 0;
  *(uint64_t *)(param_2 + ((uVal_4 + 8) - uVal_1)) = 0;
  uVal_2 = *param_3;
  param_2[uVal_4 - uVal_1] = 5;
  *(uint64_t *)(param_2 + ((uVal_4 + 8) - uVal_1)) = uVal_2;
  pU64_9 = (uint8_t *)*param_1;
  pU64_6 = (uint8_t *)param_1[1];
  if (param_2 == pU64_6) {
    if (pU64_9 != param_2) {
      lVal_5 = 0;
      do {
        *(uint8_t *)(uVal_4 + lVal_5) = pU64_9[lVal_5];
        *(uint64_t *)(uVal_4 + 8 + lVal_5) = *(uint64_t *)(pU64_9 + lVal_5 + 8);
        pU64_9[lVal_5] = 0;
        *(uint64_t *)(pU64_9 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (pU64_9 + lVal_3 != param_2);
      goto LAB_1800a4d81;
    }
  }
  else {
    if (pU64_9 != param_2) {
      lVal_5 = 0;
      do {
        *(uint8_t *)(uVal_4 + lVal_5) = pU64_9[lVal_5];
        *(uint64_t *)(uVal_4 + 8 + lVal_5) = *(uint64_t *)(pU64_9 + lVal_5 + 8);
        pU64_9[lVal_5] = 0;
        *(uint64_t *)(pU64_9 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (pU64_9 + lVal_3 != param_2);
      pU64_6 = (uint8_t *)param_1[1];
    }
    if (param_2 != pU64_6) {
      lVal_5 = 0;
      do {
        param_2[lVal_5 + (uVal_4 - uVal_1) + 0x10] = param_2[lVal_5];
        *(uint64_t *)(param_2 + lVal_5 + (uVal_4 - uVal_1) + 0x18) =
             *(uint64_t *)(param_2 + lVal_5 + 8);
        param_2[lVal_5] = 0;
        *(uint64_t *)(param_2 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (param_2 + lVal_3 != pU64_6);
    }
LAB_1800a4d81:
    pU64_9 = (uint8_t *)*param_1;
  }
  if (pU64_9 != (uint8_t *)0x0) {
    pU64_6 = (uint8_t *)param_1[1];
    if (pU64_9 != pU64_6) {
      do {
        func_0x180084c70(pU64_9 + 8,*pU64_9);
        pU64_9 = pU64_9 + 0x10;
      } while (pU64_9 != pU64_6);
      pU64_9 = (uint8_t *)*param_1;
    }
    uVal_7 = param_1[2] - (int64_t)pU64_9;
    pU64_6 = pU64_9;
    if (0xfff < uVal_7) {
      pU64_6 = *(uint8_t **)(pU64_9 + -8);
      if ((uint8_t *)0x1f < pU64_9 + (-8 - (int64_t)pU64_6)) {
LAB_1800a4e20:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_6,uVal_7);
  }
  *param_1 = uVal_4;
  param_1[1] = uVal_10 * 0x10 + uVal_4;
  param_1[2] = lVal_8 + uVal_4;
  return param_2 + (uVal_4 - uVal_1);
}

// Unwind@1800a4e30
void Unwind_1800a4e30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a4e50
int64_t func_0x1800a4e50(int64_t *param_1,uint64_t param_2)
{
  char *fnPtr_1;
  uint8_t *pU64_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t local_40;
  uint8_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    uVal_3 = func_0x1800a0a50(param_2);
    pU64_2 = (uint8_t *)*param_1;
    *pU64_2 = 3;
    local_40 = *(uint64_t *)(pU64_2 + 8);
    *(uint64_t *)(pU64_2 + 8) = uVal_3;
    func_0x180084c70(&local_40);
    lVal_4 = *param_1;
  }
  else {
    fnPtr_1 = *(char **)(param_1[2] + -8);
    if (*fnPtr_1 == '\x02') {
      lVal_4 = *(int64_t *)(fnPtr_1 + 8);
      pU64_2 = *(uint8_t **)(lVal_4 + 8);
      if (pU64_2 == *(uint8_t **)(lVal_4 + 0x10)) {
        func_0x1800a4f80(lVal_4,pU64_2);
      }
      else {
        *(uint64_t *)(pU64_2 + 8) = 0;
        *pU64_2 = 3;
        uVal_3 = func_0x1800a0a50(param_2);
        *(uint64_t *)(pU64_2 + 8) = uVal_3;
        *(int64_t *)(lVal_4 + 8) = *(int64_t *)(lVal_4 + 8) + 0x10;
      }
      lVal_4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      uVal_3 = func_0x1800a0a50(param_2);
      pU64_2 = (uint8_t *)param_1[4];
      local_38 = *pU64_2;
      *pU64_2 = 3;
      local_30 = *(uint64_t *)(pU64_2 + 8);
      *(uint64_t *)(pU64_2 + 8) = uVal_3;
      func_0x180084c70(&local_30);
      lVal_4 = param_1[4];
    }
  }
  return lVal_4;
}

// Unwind@1800a4f40
void Unwind_1800a4f40(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a4f60
void Unwind_1800a4f60(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a4f80
uint8_t * func_0x1800a4f80(uint64_t *param_1,uint8_t *param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint8_t *pU64_9;
  uint64_t uVal_10;
  
  uVal_1 = *param_1;
  uVal_10 = ((int64_t)(param_1[1] - uVal_1) >> 4) + 1;
  uVal_3 = (int64_t)(param_1[2] - uVal_1) >> 4;
  uVal_8 = (uVal_3 >> 1) + uVal_3;
  if (uVal_8 <= uVal_10) {
    uVal_8 = uVal_10;
  }
  if (0xfffffffffffffff - (uVal_3 >> 1) < uVal_3) {
    uVal_8 = 0xfffffffffffffff;
  }
  if (uVal_8 >> 0x3c != 0) {
LAB_1800a51fc:
    func_0x18007ba90();
    goto LAB_1800a5201;
  }
  if (uVal_8 == 0) {
    uVal_3 = 0;
  }
  else if (uVal_8 < 0x100) {
    uVal_3 = func_0x180672de0();
  }
  else {
    if (0xffffffffffffffd < uVal_8) goto LAB_1800a51fc;
    lVal_4 = func_0x180672de0(uVal_8 * 0x10 + 0x27);
    uVal_3 = lVal_4 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_3 - 8) = lVal_4;
  }
  *(uint64_t *)(param_2 + ((uVal_3 + 8) - uVal_1)) = 0;
  param_2[uVal_3 - uVal_1] = 3;
  uVal_5 = func_0x1800a0a50();
  *(uint64_t *)(param_2 + (uVal_3 - uVal_1) + 8) = uVal_5;
  pU64_9 = (uint8_t *)*param_1;
  pU64_6 = (uint8_t *)param_1[1];
  if (param_2 == pU64_6) {
    if (pU64_9 != param_2) {
      lVal_4 = 0;
      do {
        *(uint8_t *)(uVal_3 + lVal_4) = pU64_9[lVal_4];
        *(uint64_t *)(uVal_3 + 8 + lVal_4) = *(uint64_t *)(pU64_9 + lVal_4 + 8);
        pU64_9[lVal_4] = 0;
        *(uint64_t *)(pU64_9 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (pU64_9 + lVal_2 != param_2);
      goto LAB_1800a5161;
    }
  }
  else {
    if (pU64_9 != param_2) {
      lVal_4 = 0;
      do {
        *(uint8_t *)(uVal_3 + lVal_4) = pU64_9[lVal_4];
        *(uint64_t *)(uVal_3 + 8 + lVal_4) = *(uint64_t *)(pU64_9 + lVal_4 + 8);
        pU64_9[lVal_4] = 0;
        *(uint64_t *)(pU64_9 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (pU64_9 + lVal_2 != param_2);
      pU64_6 = (uint8_t *)param_1[1];
    }
    if (param_2 != pU64_6) {
      lVal_4 = 0;
      do {
        param_2[lVal_4 + (uVal_3 - uVal_1) + 0x10] = param_2[lVal_4];
        *(uint64_t *)(param_2 + lVal_4 + (uVal_3 - uVal_1) + 0x18) =
             *(uint64_t *)(param_2 + lVal_4 + 8);
        param_2[lVal_4] = 0;
        *(uint64_t *)(param_2 + lVal_4 + 8) = 0;
        lVal_2 = lVal_4 + 0x10;
        lVal_4 = lVal_4 + 0x10;
      } while (param_2 + lVal_2 != pU64_6);
    }
LAB_1800a5161:
    pU64_9 = (uint8_t *)*param_1;
  }
  if (pU64_9 != (uint8_t *)0x0) {
    pU64_6 = (uint8_t *)param_1[1];
    if (pU64_9 != pU64_6) {
      do {
        func_0x180084c70(pU64_9 + 8,*pU64_9);
        pU64_9 = pU64_9 + 0x10;
      } while (pU64_9 != pU64_6);
      pU64_9 = (uint8_t *)*param_1;
    }
    uVal_7 = param_1[2] - (int64_t)pU64_9;
    pU64_6 = pU64_9;
    if (0xfff < uVal_7) {
      pU64_6 = *(uint8_t **)(pU64_9 + -8);
      if ((uint8_t *)0x1f < pU64_9 + (-8 - (int64_t)pU64_6)) {
LAB_1800a5201:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_6,uVal_7);
  }
  *param_1 = uVal_3;
  param_1[1] = uVal_10 * 0x10 + uVal_3;
  param_1[2] = uVal_8 * 0x10 + uVal_3;
  return param_2 + (uVal_3 - uVal_1);
}

// Unwind@1800a5210
void Unwind_1800a5210(uint64_t param_1,int64_t param_2)
{
  func_0x1800857c0(param_2 + 0x20);
  return;
}

// Unwind@1800a5250
void Unwind_1800a5250(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a5270
int64_t func_0x1800a5270(int64_t *param_1,uint64_t *param_2)
{
  char *fnPtr_1;
  int64_t lVal_2;
  uint8_t *pU64_3;
  uint64_t uVal_4;
  uint64_t local_30;
  uint8_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] == param_1[2]) {
    uVal_4 = *param_2;
    pU64_3 = (uint8_t *)*param_1;
    *pU64_3 = 6;
    local_30 = *(uint64_t *)(pU64_3 + 8);
    *(uint64_t *)(pU64_3 + 8) = uVal_4;
    func_0x180084c70(&local_30);
    return *param_1;
  }
  fnPtr_1 = *(char **)(param_1[2] + -8);
  if (*fnPtr_1 == '\x02') {
    lVal_2 = *(int64_t *)(fnPtr_1 + 8);
    pU64_3 = *(uint8_t **)(lVal_2 + 8);
    if (pU64_3 == *(uint8_t **)(lVal_2 + 0x10)) {
      func_0x1800a5390();
    }
    else {
      *pU64_3 = 0;
      *(uint64_t *)(pU64_3 + 8) = 0;
      uVal_4 = *param_2;
      *pU64_3 = 6;
      *(uint64_t *)(pU64_3 + 8) = uVal_4;
      *(int64_t *)(lVal_2 + 8) = *(int64_t *)(lVal_2 + 8) + 0x10;
    }
    return *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  uVal_4 = *param_2;
  pU64_3 = (uint8_t *)param_1[4];
  local_28 = *pU64_3;
  *pU64_3 = 6;
  local_20 = *(uint64_t *)(pU64_3 + 8);
  *(uint64_t *)(pU64_3 + 8) = uVal_4;
  func_0x180084c70(&local_20);
  return param_1[4];
}

// Unwind@1800a5350
void Unwind_1800a5350(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a5370
void Unwind_1800a5370(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a5390
uint8_t * func_0x1800a5390(uint64_t *param_1,uint8_t *param_2,uint64_t *param_3)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t *pU64_9;
  uint64_t uVal_10;
  
  uVal_1 = *param_1;
  uVal_10 = ((int64_t)(param_1[1] - uVal_1) >> 4) + 1;
  uVal_7 = (int64_t)(param_1[2] - uVal_1) >> 4;
  uVal_4 = (uVal_7 >> 1) + uVal_7;
  if (uVal_4 <= uVal_10) {
    uVal_4 = uVal_10;
  }
  if (0xfffffffffffffff - (uVal_7 >> 1) < uVal_7) {
    uVal_4 = 0xfffffffffffffff;
  }
  if (uVal_4 >> 0x3c != 0) {
LAB_1800a55fb:
    func_0x18007ba90();
    goto LAB_1800a5600;
  }
  lVal_8 = uVal_4 * 0x10;
  if (uVal_4 == 0) {
    uVal_4 = 0;
  }
  else if (uVal_4 < 0x100) {
    uVal_4 = func_0x180672de0(lVal_8);
  }
  else {
    if (0xffffffffffffffd < uVal_4) goto LAB_1800a55fb;
    lVal_5 = func_0x180672de0(lVal_8 + 0x27);
    uVal_4 = lVal_5 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_4 - 8) = lVal_5;
  }
  param_2[uVal_4 - uVal_1] = 0;
  *(uint64_t *)(param_2 + ((uVal_4 + 8) - uVal_1)) = 0;
  uVal_2 = *param_3;
  param_2[uVal_4 - uVal_1] = 6;
  *(uint64_t *)(param_2 + ((uVal_4 + 8) - uVal_1)) = uVal_2;
  pU64_9 = (uint8_t *)*param_1;
  pU64_6 = (uint8_t *)param_1[1];
  if (param_2 == pU64_6) {
    if (pU64_9 != param_2) {
      lVal_5 = 0;
      do {
        *(uint8_t *)(uVal_4 + lVal_5) = pU64_9[lVal_5];
        *(uint64_t *)(uVal_4 + 8 + lVal_5) = *(uint64_t *)(pU64_9 + lVal_5 + 8);
        pU64_9[lVal_5] = 0;
        *(uint64_t *)(pU64_9 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (pU64_9 + lVal_3 != param_2);
      goto LAB_1800a5561;
    }
  }
  else {
    if (pU64_9 != param_2) {
      lVal_5 = 0;
      do {
        *(uint8_t *)(uVal_4 + lVal_5) = pU64_9[lVal_5];
        *(uint64_t *)(uVal_4 + 8 + lVal_5) = *(uint64_t *)(pU64_9 + lVal_5 + 8);
        pU64_9[lVal_5] = 0;
        *(uint64_t *)(pU64_9 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (pU64_9 + lVal_3 != param_2);
      pU64_6 = (uint8_t *)param_1[1];
    }
    if (param_2 != pU64_6) {
      lVal_5 = 0;
      do {
        param_2[lVal_5 + (uVal_4 - uVal_1) + 0x10] = param_2[lVal_5];
        *(uint64_t *)(param_2 + lVal_5 + (uVal_4 - uVal_1) + 0x18) =
             *(uint64_t *)(param_2 + lVal_5 + 8);
        param_2[lVal_5] = 0;
        *(uint64_t *)(param_2 + lVal_5 + 8) = 0;
        lVal_3 = lVal_5 + 0x10;
        lVal_5 = lVal_5 + 0x10;
      } while (param_2 + lVal_3 != pU64_6);
    }
LAB_1800a5561:
    pU64_9 = (uint8_t *)*param_1;
  }
  if (pU64_9 != (uint8_t *)0x0) {
    pU64_6 = (uint8_t *)param_1[1];
    if (pU64_9 != pU64_6) {
      do {
        func_0x180084c70(pU64_9 + 8,*pU64_9);
        pU64_9 = pU64_9 + 0x10;
      } while (pU64_9 != pU64_6);
      pU64_9 = (uint8_t *)*param_1;
    }
    uVal_7 = param_1[2] - (int64_t)pU64_9;
    pU64_6 = pU64_9;
    if (0xfff < uVal_7) {
      pU64_6 = *(uint8_t **)(pU64_9 + -8);
      if ((uint8_t *)0x1f < pU64_9 + (-8 - (int64_t)pU64_6)) {
LAB_1800a5600:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = uVal_7 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_6,uVal_7);
  }
  *param_1 = uVal_4;
  param_1[1] = uVal_10 * 0x10 + uVal_4;
  param_1[2] = lVal_8 + uVal_4;
  return param_2 + (uVal_4 - uVal_1);
}

// Unwind@1800a5610
void Unwind_1800a5610(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a5630
char ** func_0x1800a5630(char **param_1)
{
  char **ptr2_Char_1;
  char *fnPtr_2;
  char *fnPtr_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  char *fnPtr_6;
  uint64_t uVal_7;
  char *fnPtr_8;
  int64_t lVal_9;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  
  if (**param_1 == '\x01') {
    param_1 = (char **)(param_1[1] + 0x20);
  }
  else if (**param_1 == '\x02') {
    if (param_1[4] != param_1[5]) {
      ptr2_Char_1 = param_1 + 6;
      func_0x18009fe30(&local_38);
      if (ptr2_Char_1 == (char **)&local_38) {
        uVal_5 = CONCAT44(uStack_1c,uStack_20);
        if (0xf < uVal_5) {
          lVal_4 = CONCAT44(uStack_34,local_38);
          uVal_7 = uVal_5 + 1;
          lVal_9 = lVal_4;
          if (0xfff < uVal_7) {
            lVal_9 = *(int64_t *)(lVal_4 + -8);
            if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_9)) goto LAB_1800a5737;
            uVal_7 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_7);
        }
      }
      else {
        fnPtr_2 = param_1[9];
        if (&DAT_0000000f < fnPtr_2) {
          fnPtr_3 = *ptr2_Char_1;
          fnPtr_6 = fnPtr_2 + 1;
          fnPtr_8 = fnPtr_3;
          if ((char *)0xfff < fnPtr_6) {
            fnPtr_8 = *(char **)(fnPtr_3 + -8);
            if ((char *)0x1f < fnPtr_3 + (-8 - (int64_t)fnPtr_8)) {
LAB_1800a5737:
              do {
                invalidInstructionException();
              } while( true );
            }
            fnPtr_6 = fnPtr_2 + 0x28;
          }
          thunk_FUN_180695dd0(fnPtr_8,fnPtr_6);
        }
        *(uint32_t *)(param_1 + 8) = local_28;
        *(uint32_t *)((int64_t)param_1 + 0x44) = uStack_24;
        *(uint32_t *)(param_1 + 9) = uStack_20;
        *(uint32_t *)((int64_t)param_1 + 0x4c) = uStack_1c;
        *(uint32_t *)ptr2_Char_1 = local_38;
        *(uint32_t *)((int64_t)param_1 + 0x34) = uStack_34;
        *(uint32_t *)(param_1 + 7) = uStack_30;
        *(uint32_t *)((int64_t)param_1 + 0x3c) = uStack_2c;
      }
      param_1[5] = param_1[4];
    }
    param_1 = param_1 + 6;
  }
  else {
    param_1 = param_1 + 10;
  }
  return param_1;
}

// func_0x1800a5740
int64_t ** func_0x1800a5740(int64_t param_1,int64_t **param_2,int64_t **param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  int64_t *pLong_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  int64_t **ptr2_Long_10;
  int64_t **ptr2_Long_11;
  int64_t **ptr2_Long_12;
  int64_t lVal_13;
  int64_t *pLong_14;
  
  if (param_2 == param_3) {
    return param_3;
  }
  uVal_1 = *(uint64_t *)(param_1 + 8);
  lVal_2 = *(int64_t *)(param_1 + 0x18);
  ptr2_Long_3 = (int64_t **)param_2[1];
  lVal_13 = (((uint64_t)*(byte *)((int64_t)param_2 + 0x17) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x16) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x15) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x14) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x13) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x12) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x11) ^
            ((uint64_t)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) * 0x10;
  ptr2_Long_4 = *(int64_t ***)(lVal_2 + lVal_13);
  ptr2_Long_10 = *(int64_t ***)(lVal_2 + 8 + lVal_13);
  ptr2_Long_11 = param_2;
  if (ptr2_Long_4 == param_2) {
    do {
      ptr2_Long_12 = (int64_t **)*ptr2_Long_11;
      func_0x1800821d0(param_1 + 8,ptr2_Long_11);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_11 == ptr2_Long_10) goto LAB_1800a5874;
      ptr2_Long_11 = ptr2_Long_12;
    } while (ptr2_Long_12 != param_3);
    *(int64_t ***)(lVal_2 + lVal_13) = ptr2_Long_12;
  }
  else {
    do {
      ptr2_Long_12 = (int64_t **)*ptr2_Long_11;
      func_0x1800821d0(param_1 + 8,ptr2_Long_11);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_11 == ptr2_Long_10) goto LAB_1800a5874;
      ptr2_Long_11 = ptr2_Long_12;
    } while (ptr2_Long_12 != param_3);
  }
  goto LAB_1800a5aa4;
LAB_1800a5a68:
  *(uint64_t *)(lVal_2 + lVal_13) = uVal_1;
  *(uint64_t *)(lVal_2 + 8 + lVal_13) = uVal_1;
  if (ptr2_Long_12 == param_3) goto LAB_1800a5aa4;
  goto LAB_1800a58be;
LAB_1800a5874:
  if (ptr2_Long_4 == param_2) {
    *(uint64_t *)(lVal_2 + lVal_13) = uVal_1;
    *(uint64_t *)(lVal_2 + 8 + lVal_13) = uVal_1;
  }
  else {
    *(int64_t ***)(lVal_2 + 8 + lVal_13) = ptr2_Long_3;
  }
  if (ptr2_Long_12 != param_3) {
LAB_1800a58be:
    lVal_13 = (((uint64_t)*(byte *)((int64_t)ptr2_Long_12 + 0x17) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_12 + 0x16) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_12 + 0x15) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_12 + 0x14) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_12 + 0x13) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_12 + 0x12) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_12 + 0x11) ^
              ((uint64_t)*(byte *)(ptr2_Long_12 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) * 0x10;
    ptr2_Long_4 = *(int64_t ***)(lVal_2 + 8 + lVal_13);
    ptr2_Long_10 = ptr2_Long_12;
    do {
      ptr2_Long_12 = (int64_t **)*ptr2_Long_10;
      pLong_14 = ptr2_Long_10[3];
      if (pLong_14 != (int64_t *)0x0) {
        pLong_5 = ptr2_Long_10[4];
        if (pLong_14 == pLong_5) {
          uVal_9 = (int64_t)ptr2_Long_10[5] - (int64_t)pLong_14;
        }
        else {
          do {
            uVal_9 = pLong_14[3];
            if (0xf < uVal_9) {
              lVal_6 = *pLong_14;
              uVal_7 = uVal_9 + 1;
              lVal_8 = lVal_6;
              if (0xfff < uVal_7) {
                lVal_8 = *(int64_t *)(lVal_6 + -8);
                if (0x1f < (uint64_t)((lVal_6 + -8) - lVal_8)) goto LAB_1800a5aca;
                uVal_7 = uVal_9 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_8,uVal_7);
            }
            pLong_14[2] = 0;
            pLong_14[3] = 0xf;
            *(uint8_t *)pLong_14 = 0;
            pLong_14 = pLong_14 + 4;
          } while (pLong_14 != pLong_5);
          pLong_14 = *(int64_t **)*(uint8_t (*)[16])(ptr2_Long_10 + 3);
          uVal_9 = (int64_t)ptr2_Long_10[5] - (int64_t)pLong_14;
        }
        if (0xfff < uVal_9) {
          if ((uint8_t *)0x1f <
              (uint8_t *)((int64_t)pLong_14 + (-8 - (int64_t)(int64_t *)pLong_14[-1]))) {
LAB_1800a5aca:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_9 = uVal_9 + 0x27;
          pLong_14 = (int64_t *)pLong_14[-1];
        }
        thunk_FUN_180695dd0(pLong_14,uVal_9);
        *(uint8_t (*)[16])(ptr2_Long_10 + 3) = ZEXT816(0);
        ptr2_Long_10[5] = (int64_t *)0x0;
      }
      thunk_FUN_180695dd0(ptr2_Long_10,0x30);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_10 == ptr2_Long_4) goto LAB_1800a5a68;
      ptr2_Long_10 = ptr2_Long_12;
      if (ptr2_Long_12 == param_3) {
        *(int64_t ***)(lVal_2 + lVal_13) = ptr2_Long_12;
        break;
      }
    } while( true );
  }
LAB_1800a5aa4:
  *ptr2_Long_3 = (int64_t *)ptr2_Long_12;
  ptr2_Long_12[1] = (int64_t *)ptr2_Long_3;
  return param_3;
}

// func_0x1800a5ad0
void func_0x1800a5ad0(int64_t param_1)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  
  lVal_6 = *(int64_t *)(param_1 + 8);
  if (lVal_6 == 0) {
    return;
  }
  pLong_7 = *(int64_t **)(lVal_6 + 0x18);
  if (pLong_7 != (int64_t *)0x0) {
    pLong_1 = *(int64_t **)(lVal_6 + 0x20);
    if (pLong_7 == pLong_1) {
      uVal_5 = *(int64_t *)(lVal_6 + 0x28) - (int64_t)pLong_7;
    }
    else {
      do {
        uVal_5 = pLong_7[3];
        if (0xf < uVal_5) {
          lVal_2 = *pLong_7;
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800a5be7;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        pLong_7[2] = 0;
        pLong_7[3] = 0xf;
        *(uint8_t *)pLong_7 = 0;
        pLong_7 = pLong_7 + 4;
      } while (pLong_7 != pLong_1);
      pLong_7 = *(int64_t **)*(uint8_t (*)[16])(lVal_6 + 0x18);
      uVal_5 = *(int64_t *)(lVal_6 + 0x28) - (int64_t)pLong_7;
    }
    if (0xfff < uVal_5) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_7 + (-8 - (int64_t)(int64_t *)pLong_7[-1]))) {
LAB_1800a5be7:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      pLong_7 = (int64_t *)pLong_7[-1];
    }
    thunk_FUN_180695dd0(pLong_7,uVal_5);
    *(uint8_t (*)[16])(lVal_6 + 0x18) = ZEXT816(0);
    *(uint64_t *)(lVal_6 + 0x28) = 0;
    lVal_6 = *(int64_t *)(param_1 + 8);
    if (lVal_6 == 0) {
      return;
    }
  }
  thunk_FUN_180695dd0(lVal_6,0x30);
  return;
}

// func_0x1800a5bf0
void func_0x1800a5bf0(int64_t param_1,uint64_t param_2)
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
joined_r0x0001800a5c5a:
  do {
    if (ptr2_Long_8 == ptr2_Long_1) {
      return;
    }
    ptr2_Long_2 = (int64_t **)*ptr2_Long_8;
    lVal_11 = *(int64_t *)(param_1 + 0x18);
    lVal_12 = (((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x17) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x16) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x15) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x14) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x13) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x12) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x11) ^
              ((uint64_t)*(byte *)(ptr2_Long_8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
              0x100000001b3) * 0x100000001b3 & *(uint64_t *)(param_1 + 0x30)) * 0x10;
    if (*(int64_t ***)(lVal_11 + lVal_12) == ptr2_Long_1) {
      *(int64_t ***)(lVal_11 + lVal_12) = ptr2_Long_8;
    }
    else {
      ptr2_Long_13 = *(int64_t ***)(lVal_11 + 8 + lVal_12);
      if (ptr2_Long_8[2] != ptr2_Long_13[2]) {
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
            goto joined_r0x0001800a5c5a;
          }
          ptr2_Long_13 = (int64_t **)ptr2_Long_13[1];
        } while (ptr2_Long_8[2] != ptr2_Long_13[2]);
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
        goto joined_r0x0001800a5c5a;
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

// func_0x1800a5de0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a5de0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeea4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeea0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeea8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeeac;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x23;
    param_1[1][1] = param_1[1][1] ^ 0x3d;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800a5e00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a5e00(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aeeb4;
    uVal_2 = param_1[2] ^ _UNK_1806aeeb8;
    uVal_3 = param_1[3] ^ _UNK_1806aeebc;
    *param_1 = *param_1 ^ _DAT_1806aeeb0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806aeec0,0);
  }
  return;
}

// func_0x1800a5e40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a5e40(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aeedc;
  uVal_9 = _UNK_1806aeed8;
  uVal_8 = _UNK_1806aeed4;
  uVal_7 = _DAT_1806aeed0;
  if (param_1[2][4] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeed4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeed0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeed8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeedc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xbb4fdb95;
    param_1[2][4] = 0;
  }
  return;
}

// func_0x1800a5e70
int64_t func_0x1800a5e70(int64_t *param_1,uint64_t *param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int iVal_4;
  bool bFlag_5;
  void *pVoid_6;
  uint64_t *_Buf2;
  int64_t lVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  
  lVal_1 = *param_1;
  lVal_9 = *(int64_t *)(lVal_1 + 8);
  lVal_7 = lVal_1;
  if (*(char *)(lVal_9 + 0x19) == '\0') {
    _Buf2 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      _Buf2 = (uint64_t *)*param_2;
    }
    uVal_2 = param_2[2];
    do {
      if (*(uint64_t *)(lVal_9 + 0x38) < 0x10) {
        pVoid_6 = (void *)(lVal_9 + 0x20);
      }
      else {
        pVoid_6 = *(void **)(lVal_9 + 0x20);
      }
      uVal_3 = *(uint64_t *)(lVal_9 + 0x30);
      uVal_8 = uVal_3;
      if (uVal_2 < uVal_3) {
        uVal_8 = uVal_2;
      }
      iVal_4 = memcmp(pVoid_6,_Buf2,uVal_8);
      bFlag_5 = uVal_3 < uVal_2;
      if (iVal_4 != 0) {
        bFlag_5 = iVal_4 < 0;
      }
      if (bFlag_5 == false) {
        lVal_7 = lVal_9;
      }
      lVal_9 = *(int64_t *)(lVal_9 + (uint64_t)bFlag_5 * 0x10);
    } while (*(char *)(lVal_9 + 0x19) == '\0');
  }
  if (*(char *)(lVal_7 + 0x19) == '\0') {
    if (*(uint64_t *)(lVal_7 + 0x38) < 0x10) {
      pVoid_6 = (void *)(lVal_7 + 0x20);
      uVal_2 = *(uint64_t *)(lVal_7 + 0x30);
      uVal_3 = param_2[2];
      uVal_8 = param_2[3];
    }
    else {
      pVoid_6 = *(void **)(lVal_7 + 0x20);
      uVal_2 = *(uint64_t *)(lVal_7 + 0x30);
      uVal_3 = param_2[2];
      uVal_8 = param_2[3];
    }
    if (0xf < uVal_8) {
      param_2 = (uint64_t *)*param_2;
    }
    uVal_8 = uVal_3;
    if (uVal_2 < uVal_3) {
      uVal_8 = uVal_2;
    }
    iVal_4 = memcmp(param_2,pVoid_6,uVal_8);
    bFlag_5 = uVal_2 <= uVal_3;
    if (iVal_4 != 0) {
      bFlag_5 = -1 < iVal_4;
    }
    if (bFlag_5) {
      return lVal_7;
    }
  }
  return lVal_1;
}

// func_0x1800a5f90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a5f90(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeee4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeee0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeee8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeeec;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x79e787bf;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1800a5fb0
uint8_t (*func_0x1800a5fb0(uint8_t (*param_1)[16],char *param_2,int64_t param_3,char *param_4))[16]
{
  int64_t lVal_1;
  size_t sz_2;
  size_t sz_3;
  uint64_t uVal_4;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  sz_2 = strlen(param_2);
  lVal_1 = *(int64_t *)(param_3 + 0x10);
  sz_3 = strlen(param_4);
  uVal_4 = sz_3 + sz_2 + lVal_1;
  if (0xf < uVal_4) {
    func_0x180082810(param_1,uVal_4);
    *(uint64_t *)param_1[1] = 0;
  }
  func_0x1800a6080(param_1,param_2,param_3,param_4);
  return param_1;
}

// Unwind@1800a6050
void Unwind_1800a6050(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1800a6080
void func_0x1800a6080(uint64_t *param_1,char *param_2,uint64_t *param_3,char *param_4)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  size_t sz_3;
  uint64_t uVal_4;
  uint64_t *pU64_5;
  
  sz_3 = strlen(param_2);
  lVal_1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_1) < sz_3) {
    func_0x180082950(param_1,sz_3,sz_3,param_2,sz_3);
    uVal_4 = param_3[2];
    uVal_2 = param_3[3];
  }
  else {
    param_1[2] = sz_3 + lVal_1;
    pU64_5 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_5 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_5,param_2);
    *(uint8_t *)((int64_t)pU64_5 + sz_3 + lVal_1) = 0;
    uVal_4 = param_3[2];
    uVal_2 = param_3[3];
  }
  if (0xf < uVal_2) {
    param_3 = (uint64_t *)*param_3;
  }
  lVal_1 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_1) < uVal_4) {
    func_0x180082950(param_1,uVal_4,uVal_4,param_3,uVal_4);
  }
  else {
    param_1[2] = lVal_1 + uVal_4;
    pU64_5 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_5 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)pU64_5,param_3);
    *(uint8_t *)((int64_t)pU64_5 + lVal_1 + uVal_4) = 0;
  }
  sz_3 = strlen(param_4);
  lVal_1 = param_1[2];
  uVal_4 = param_1[3] - lVal_1;
  if (uVal_4 < sz_3) {
    func_0x180082950(param_1,sz_3,uVal_4,param_4,sz_3);
  }
  else {
    param_1[2] = sz_3 + lVal_1;
    if (0xf < (uint64_t)param_1[3]) {
      param_1 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_1 + (int64_t)param_1,param_4,sz_3);
    *(uint8_t *)((int64_t)param_1 + sz_3 + lVal_1) = 0;
  }
  return;
}

// func_0x1800a61c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a61c0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeef4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeef0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeef8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeefc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x75f311ed;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1800a61e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a61e0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aef04;
    uVal_2 = param_1[2] ^ _UNK_1806aef08;
    uVal_3 = param_1[3] ^ _UNK_1806aef0c;
    *param_1 = *param_1 ^ _DAT_1806aef00;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806aef10,0);
  }
  return;
}

// func_0x1800a6220
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a6220(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aef24;
    uVal_2 = param_1[2] ^ _UNK_1806aef28;
    uVal_3 = param_1[3] ^ _UNK_1806aef2c;
    *param_1 = *param_1 ^ _DAT_1806aef20;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806aef30,0);
  }
  return;
}

// func_0x1800a6260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a6260(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aea1c;
  uVal_9 = _UNK_1806aea18;
  uVal_8 = _UNK_1806aea14;
  uVal_7 = _DAT_1806aea10;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aea14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aea10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aea18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aea1c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x8d;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1800a6290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a6290(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aef44;
    uVal_2 = param_1[2] ^ _UNK_1806aef48;
    uVal_3 = param_1[3] ^ _UNK_1806aef4c;
    *param_1 = *param_1 ^ _DAT_1806aef40;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806aef50,0);
  }
  return;
}

// func_0x1800a62d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a62d0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aef64;
    uVal_2 = param_1[2] ^ _UNK_1806aef68;
    uVal_3 = param_1[3] ^ _UNK_1806aef6c;
    *param_1 = *param_1 ^ _DAT_1806aef60;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806aef70,0);
  }
  return;
}

// func_0x1800a6310
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800a6310(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806aef8c;
  uVal_9 = _UNK_1806aef88;
  uVal_8 = _UNK_1806aef84;
  uVal_7 = _DAT_1806aef80;
  if (param_1[2][1] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aef84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aef80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aef88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aef8c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x3b;
    param_1[2][1] = 0;
  }
  return;
}

// func_0x1800a6340
uint8_t (*func_0x1800a6340(uint8_t (*param_1)[16],uint32_t param_2,uint64_t *param_3))[16]
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint uVal_9;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 7;
  uVal_4 = param_3[1];
  if (uVal_4 == 0) {
    return param_1;
  }
  if (uVal_4 >> 0x1f == 0) {
    uVal_9 = 0;
    uVal_4 = func_0x180678260(param_2,*param_3,uVal_4,0,0);
    if (uVal_4 >> 0x20 == 0) {
      uVal_8 = (uint64_t)(int)uVal_4;
      uVal_1 = *(uint64_t *)param_1[1];
      uVal_6 = uVal_8 - uVal_1;
      pArr16_5 = param_1;
      if (uVal_8 < uVal_1 || uVal_6 == 0) {
        *(uint64_t *)param_1[1] = uVal_8;
        if (7 < *(uint64_t *)(param_1[1] + 8)) {
          pArr16_5 = *(uint8_t (**)[16])*param_1;
        }
LAB_1800a6474:
        *(uint16_t *)(*pArr16_5 + uVal_8 * 2) = 0;
        uVal_1 = *(uint64_t *)(param_1[1] + 8);
      }
      else {
        uVal_2 = *(uint64_t *)(param_1[1] + 8);
        uVal_7 = uVal_2 - uVal_1;
        if (uVal_6 <= uVal_7) {
          *(uint64_t *)param_1[1] = uVal_8;
          if (7 < uVal_2) {
            pArr16_5 = *(uint8_t (**)[16])*param_1;
          }
          func_0x1806ab010(*pArr16_5 + uVal_1 * 2,0,((int64_t)(uVal_4 << 0x20) >> 0x1f) + uVal_1 * -2);
          goto LAB_1800a6474;
        }
        func_0x1800918c0(param_1,uVal_6,uVal_7,uVal_6,uVal_9 & 0xffff0000);
        uVal_1 = *(uint64_t *)(param_1[1] + 8);
      }
      pArr16_5 = param_1;
      if (7 < uVal_1) {
        pArr16_5 = *(uint8_t (**)[16])*param_1;
      }
      uVal_4 = func_0x180678260(param_2,*param_3,*(uint32_t *)(param_3 + 1),pArr16_5,(int)uVal_4);
      uVal_4 = uVal_4 >> 0x20;
      if (uVal_4 == 0) {
        return param_1;
      }
      goto LAB_1800a64a4;
    }
  }
  else {
    func_0x180089d20(0x16);
  }
  uVal_4 = func_0x180089e40();
LAB_1800a64a4:
  func_0x180089e40(uVal_4 & 0xffffffff);
  fnPtr_3 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_3)();
  return pArr16_5;
}

// Unwind@1800a64b0
void Unwind_1800a64b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(*(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x1800a64e0
void func_0x1800a64e0(int64_t *param_1,uint64_t param_2,uint param_3,uint32_t param_4,int param_5)
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
    pU64_4 = &DAT_1806b0180;
    *param_1 = (int64_t)&DAT_1806b0180;
    *(uint8_t (*)[16])(param_1 + 0x17) = ZEXT816(0);
    *(uint32_t *)(param_1 + 0x19) = 0;
    *(uint8_t (*)[16])(param_1 + 0x1a) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0x1c) = ZEXT816(0);
    param_1[0x1e] = 0;
    param_1[0x16] = (int64_t)&PTR_LAB_1806b0958;
    *(uint8_t (*)[16])(param_1 + 0x1f) = ZEXT816(0);
    *(uint8_t *)(param_1 + 0x21) = 0;
  }
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(pU64_4 + 4)) = &PTR_LAB_1806b0178;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb0;
  pLong_1 = param_1 + 2;
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4)) = &PTR_LAB_1806b0960;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  local_48 = param_1;
  func_0x1800964f0((int64_t)*(int *)(*param_1 + 4) + (int64_t)param_1,pLong_1,0);
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4)) = &PTR_LAB_1806b0178;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb0;
  param_1[2] = (int64_t)&PTR_LAB_1806b0210;
  *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xb) = ZEXT816(0);
  param_1[0xd] = 0;
  lVal_5 = func_0x180672de0(0x10);
  uVal_6 = func_0x180673ba0(1);
  *(uint64_t *)(lVal_5 + 8) = uVal_6;
  local_48[0xe] = lVal_5;
  local_48[2] = (int64_t)&PTR_LAB_1806b0190;
  *(uint8_t *)((int64_t)local_48 + 0x8c) = 0;
  *(uint8_t *)((int64_t)local_48 + 0x81) = 0;
  local_48[5] = (int64_t)(uint8_t (*)[16])(local_48 + 3);
  local_48[6] = (int64_t)(local_48 + 4);
  local_48[9] = (int64_t)(local_48 + 7);
  local_48[10] = (int64_t)(local_48 + 8);
  local_48[0xc] = (int64_t)(local_48 + 0xb);
  local_48[0xd] = (int64_t)local_48 + 0x5c;
  local_48[0xb] = 0;
  *(uint8_t (*)[16])(local_48 + 3) = ZEXT816(0);
  *(uint8_t (*)[16])(local_48 + 7) = ZEXT816(0);
  local_48[0x12] = 0;
  *(uint64_t *)((int64_t)local_48 + 0x84) = DAT_18083eb3c;
  local_48[0xf] = 0;
  local_50 = pLong_1;
  lVal_5 = func_0x1800a6830(pLong_1,param_2,param_3 | 1,param_4);
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

// Unwind@1800a6790
void Unwind_1800a6790(uint64_t param_1,int64_t param_2)
{
  func_0x18008b1c0(*(uint64_t *)(param_2 + 0x58));
  return;
}

// Unwind@1800a67c0
void Unwind_1800a67c0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  if (*(int *)(param_2 + 0xd0) != 0) {
    lVal_1 = *(int64_t *)(param_2 + 0x60);
    *(uint8_t ***)(lVal_1 + 0xb0) = &PTR_LAB_1806b0288;
    func_0x180673810(lVal_1 + 0xb0);
  }
  return;
}

// Unwind@1800a6810
void Unwind_1800a6810(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a6830
int64_t func_0x1800a6830(int64_t param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)
{
  uint8_t (*pArr16_1)[16];
  uint8_t (*pArr16_2)[16];
  char ch_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  uint64_t *pU64_6;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*(int64_t *)(param_1 + 0x80) == 0) &&
     (lVal_4 = func_0x180673d70(param_2,param_3,param_4), lVal_4 != 0)) {
    *(uint8_t *)(param_1 + 0x7c) = 1;
    *(uint8_t *)(param_1 + 0x71) = 0;
    pArr16_1 = (uint8_t (*)[16])(param_1 + 8);
    *(uint8_t (**)[16])(param_1 + 0x18) = pArr16_1;
    *(int64_t *)(param_1 + 0x20) = param_1 + 0x10;
    pArr16_2 = (uint8_t (*)[16])(param_1 + 0x28);
    *(uint8_t (**)[16])(param_1 + 0x38) = pArr16_2;
    *(int64_t *)(param_1 + 0x40) = param_1 + 0x30;
    *(int64_t *)(param_1 + 0x50) = param_1 + 0x48;
    *(int64_t *)(param_1 + 0x58) = param_1 + 0x4c;
    *(uint64_t *)(param_1 + 0x48) = 0;
    *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0x28) = ZEXT816(0);
    local_58 = 0;
    local_68 = 0;
    local_60 = 0;
    _get_stream_buffer_pointers(lVal_4,&local_58,&local_68,&local_60);
    *(uint64_t *)(param_1 + 0x18) = local_58;
    *(uint64_t *)(param_1 + 0x20) = local_58;
    *(uint64_t *)(param_1 + 0x38) = local_68;
    *(uint64_t *)(param_1 + 0x40) = local_68;
    *(uint64_t *)(param_1 + 0x50) = local_60;
    *(uint64_t *)(param_1 + 0x58) = local_60;
    *(int64_t *)(param_1 + 0x80) = lVal_4;
    *(uint64_t *)(param_1 + 0x74) = DAT_18083eb3c;
    *(uint64_t *)(param_1 + 0x68) = 0;
    local_50 = *(int64_t **)(*(int64_t *)(param_1 + 0x60) + 8);
    (**(func_ptr_t *)(*local_50 + 8))();
    pLong_5 = (int64_t *)func_0x18008c6e0(&local_58);
    ch_3 = (**(func_ptr_t *)(*pLong_5 + 0x18))(pLong_5);
    if (ch_3 == '\0') {
      *(uint8_t (**)[16])(param_1 + 0x18) = pArr16_1;
      *(int64_t *)(param_1 + 0x20) = param_1 + 0x10;
      *(uint8_t (**)[16])(param_1 + 0x38) = pArr16_2;
      *(int64_t *)(param_1 + 0x40) = param_1 + 0x30;
      *(int64_t *)(param_1 + 0x50) = param_1 + 0x48;
      *(int64_t *)(param_1 + 0x58) = param_1 + 0x4c;
      *(uint64_t *)(param_1 + 0x48) = 0;
      *pArr16_1 = ZEXT816(0);
      *pArr16_2 = ZEXT816(0);
      *(int64_t **)(param_1 + 0x68) = pLong_5;
    }
    else {
      *(uint64_t *)(param_1 + 0x68) = 0;
    }
    if ((local_50 != (int64_t *)0x0) &&
       (pU64_6 = (uint64_t *)(**(func_ptr_t *)(*local_50 + 0x10))(), pU64_6 != (uint64_t *)0x0)) {
      (**(func_ptr_t *)*pU64_6)(pU64_6,1);
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

// Unwind@1800a69e0
void Unwind_1800a69e0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  if (*(int64_t **)(param_2 + 0x38) != (int64_t *)0x0) {
    pU64_1 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(param_2 + 0x38) + 0x10))();
    if (pU64_1 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_1)(pU64_1,1);
    }
  }
  return;
}

// func_0x1800a6a30
uint64_t func_0x1800a6a30(uint64_t param_1,int64_t **param_2,int64_t *param_3,uint64_t param_4, uint8_t param_5)
{
  uint uVal_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint uVal_6;
  char *fnPtr_7;
  uint64_t uVal_8;
  bool bFlag_9;
  uint8_t **local_c0 [5];
  uint8_t local_98 [56];
  int64_t *local_60;
  uint32_t local_58 [2];
  uint8_t **local_50;
  int64_t **local_48;
  int64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_60 = (int64_t *)0x0;
  pLong_2 = (int64_t *)param_3[7];
  uVal_8 = param_4;
  if (pLong_2 != (int64_t *)0x0) {
    if (pLong_2 == param_3) {
      local_60 = (int64_t *)(**(func_ptr_t *)(*pLong_2 + 8))(pLong_2,local_98);
      uVal_8 = param_4 & 0xffffffff;
      pLong_2 = (int64_t *)param_3[7];
      if (pLong_2 == (int64_t *)0x0) goto LAB_1800a6aaf;
      (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_3);
      param_4 = param_4 & 0xffffffff;
      pLong_2 = local_60;
    }
    local_60 = pLong_2;
    param_3[7] = 0;
    uVal_8 = param_4;
  }
LAB_1800a6aaf:
  local_48 = param_2;
  local_40 = param_3;
  func_0x1800a7550(param_1,param_2,local_98,uVal_8,param_5);
  pLong_2 = *local_48;
  if (pLong_2 != (int64_t *)0x0) {
    lVal_5 = (int64_t)*(int *)(*pLong_2 + 4);
    bFlag_9 = *(int64_t *)((int64_t)(pLong_2 + 9) + lVal_5) == 0;
    uVal_6 = (*(uint *)((int64_t)(pLong_2 + 2) + lVal_5) & 1) + (uint)bFlag_9 * 4;
    *(uint *)((int64_t)(pLong_2 + 2) + lVal_5) = uVal_6;
    uVal_1 = *(uint *)((int64_t)pLong_2 + lVal_5 + 0x14);
    if ((uVal_1 & uVal_6) != 0) {
      fnPtr_7 = "ios_base::badbit set";
      if ((uVal_1 & (uint)bFlag_9 << 2) == 0) {
        fnPtr_7 = "ios_base::eofbit set";
      }
      local_58[0] = 1;
      local_50 = &PTR_vftable_1806b0968;
      func_0x1800968f0(local_c0,local_58,fnPtr_7);
      local_c0[0] = std::ios_base::failure::vftable;
      func_0x18067a120(local_c0,&DAT_180768ca8);
      fnPtr_3 = (func_ptr_t )swi(3);
      uVal_4 = (*fnPtr_3)();
      return uVal_4;
    }
  }
  pLong_2 = (int64_t *)local_40[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != local_40);
  }
  return param_1;
}

// Unwind@1800a6b90
void Unwind_1800a6b90(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a6bb0
void Unwind_1800a6bb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  func_0x1800a7760(*(uint64_t *)(param_2 + 0xa0));
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0xa8) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0xa8));
  }
  return;
}

// func_0x1800a6c00
void func_0x1800a6c00(int64_t param_1,char param_2,uint8_t **param_3)
{
  uint8_t uVal_1;
  uint64_t *pU64_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  int iVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t unaff_R14;
  uint64_t local_270 [13];
  char local_208;
  char local_1c0;
  uint8_t local_1a8 [56];
  uint64_t local_170;
  uint8_t **local_168;
  uint8_t local_160 [24];
  uint8_t **local_148;
  uint8_t local_140 [24];
  char local_128;
  uint8_t *local_120;
  uint8_t local_118;
  uint8_t *local_110;
  char local_108;
  uint8_t *local_100;
  int64_t local_f8 [3];
  uint64_t local_e0;
  uint32_t local_d8;
  uint32_t uStack_d4;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  uint64_t local_c8;
  uint8_t **local_b8;
  uint8_t local_b0 [16];
  uint8_t local_a0 [16];
  char local_90;
  char local_8f;
  uint8_t local_78;
  undefined7 uStack_77;
  uint64_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  pU64_2 = *(uint64_t **)(param_1 + 0x38);
  if (pU64_2 == (uint64_t *)0x0) {
    local_8f = *(char *)(param_1 + 0xe0);
    local_b0 = ZEXT816(0);
    local_a0 = ZEXT816(0);
    local_90 = '\0';
    local_b8 = param_3;
    func_0x1800aa720(param_1,&local_b8);
    if (param_2 != '\0') {
      iVal_5 = func_0x1800a79a0(param_1 + 0x48);
      *(int *)(param_1 + 0x40) = iVal_5;
      if (iVal_5 != 0xf) {
        local_48 = 5;
        local_40 = 0xf;
        local_58._5_11_ = SUB1611(ZEXT816(0),5);
        local_58._0_5_ = 0x65756c6176;
        func_0x18009c3b0(param_1,&local_78,0xf,local_58);
        local_c8 = *(uint64_t *)(param_1 + 0x78);
        local_d8 = *(uint32_t *)(param_1 + 0x68);
        uStack_d4 = *(uint32_t *)(param_1 + 0x6c);
        uStack_d0 = *(uint32_t *)(param_1 + 0x70);
        uStack_cc = *(uint32_t *)(param_1 + 0x74);
        func_0x18009bf90(&local_168,0x65,&local_d8,&local_78,0);
        func_0x18009ca10(param_1 + 0x48,local_f8);
        local_90 = '\x01';
        if (local_8f == '\x01') goto LAB_1800a71c7;
        if (0xf < local_e0) {
          uVal_6 = local_e0 + 1;
          lVal_7 = local_f8[0];
          if (0xfff < uVal_6) {
            lVal_7 = *(int64_t *)(local_f8[0] + -8);
            if (0x1f < (uint64_t)((local_f8[0] + -8) - lVal_7)) goto LAB_1800a719e;
            uVal_6 = local_e0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_6);
        }
        local_168 = &PTR_LAB_1806aff10;
        local_148 = std::exception::vftable;
        func_0x18067b490(local_140);
        local_168 = std::exception::vftable;
        func_0x18067b490(local_160);
        if (0xf < local_60) {
          lVal_4 = CONCAT71(uStack_77,local_78);
          uVal_6 = local_60 + 1;
          lVal_7 = lVal_4;
          if (0xfff < uVal_6) {
            lVal_7 = *(int64_t *)(lVal_4 + -8);
            if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800a719e;
            uVal_6 = local_60 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_6);
        }
        local_68 = 0;
        local_60 = 0xf;
        local_78 = 0;
        if (0xf < local_40) {
          uVal_6 = local_40 + 1;
          lVal_7 = local_58._0_8_;
          if (0xfff < uVal_6) {
            lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
            if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800a719e;
            uVal_6 = local_40 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_6);
        }
      }
    }
    if (local_90 == '\x01') {
      local_108 = *(char *)param_3;
      *(char *)param_3 = '\t';
      local_100 = param_3[1];
      param_3[1] = (uint8_t *)0x0;
      func_0x180084c70(&local_100);
    }
    if (local_b0._0_8_ != 0) {
      uVal_6 = local_a0._0_8_ - local_b0._0_8_;
      lVal_7 = local_b0._0_8_;
      if (0xfff < uVal_6) {
        lVal_7 = *(int64_t *)(local_b0._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b0._0_8_ + -8) - lVal_7)) {
LAB_1800a719e:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_6 = uVal_6 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_6);
    }
  }
  else {
    uVal_1 = *(uint8_t *)(param_1 + 0xe0);
    local_170 = 0;
    local_170 = (**(func_ptr_t *)*pU64_2)(pU64_2,local_1a8);
    func_0x18009a6a0(local_270,param_3,local_1a8,
                  CONCAT71((int7)((uint64_t)unaff_R14 >> 8),uVal_1) & 0xffffffff);
    func_0x1800a9160(param_1,local_270);
    if (param_2 != '\0') {
      iVal_5 = func_0x1800a79a0(param_1 + 0x48);
      *(int *)(param_1 + 0x40) = iVal_5;
      if (iVal_5 != 0xf) {
        local_48 = 5;
        local_40 = 0xf;
        local_58._5_11_ = SUB1611(ZEXT816(0),5);
        local_58._0_5_ = 0x65756c6176;
        func_0x18009c3b0(param_1,&local_78,0xf,local_58);
        local_c8 = *(uint64_t *)(param_1 + 0x78);
        local_d8 = *(uint32_t *)(param_1 + 0x68);
        uStack_d4 = *(uint32_t *)(param_1 + 0x6c);
        uStack_d0 = *(uint32_t *)(param_1 + 0x70);
        uStack_cc = *(uint32_t *)(param_1 + 0x74);
        func_0x18009bf90(&local_b8,0x65,&local_d8,&local_78,0);
        func_0x18009ca10(param_1 + 0x48,local_f8);
        local_208 = '\x01';
        if (local_1c0 == '\x01') {
          func_0x1800a3150(&local_168,&local_b8);
          func_0x18067a120(&local_168,&DAT_180768d30);
LAB_1800a71c7:
          func_0x1800a3150(local_270,&local_168);
          func_0x18067a120(local_270,&DAT_180768d30);
          fnPtr_3 = (func_ptr_t )swi(3);
          (*fnPtr_3)();
          return;
        }
        if (0xf < local_e0) {
          uVal_6 = local_e0 + 1;
          lVal_7 = local_f8[0];
          if (0xfff < uVal_6) {
            lVal_7 = *(int64_t *)(local_f8[0] + -8);
            if (0x1f < (uint64_t)((local_f8[0] + -8) - lVal_7)) goto LAB_1800a719e;
            uVal_6 = local_e0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_6);
        }
        local_b8 = &PTR_LAB_1806aff10;
        local_a0._8_8_ = std::exception::vftable;
        func_0x18067b490(&local_90);
        local_b8 = std::exception::vftable;
        func_0x18067b490(local_b0);
        if (0xf < local_60) {
          lVal_4 = CONCAT71(uStack_77,local_78);
          uVal_6 = local_60 + 1;
          lVal_7 = lVal_4;
          if (0xfff < uVal_6) {
            lVal_7 = *(int64_t *)(lVal_4 + -8);
            if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800a719e;
            uVal_6 = local_60 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_6);
        }
        local_68 = 0;
        local_60 = 0xf;
        local_78 = 0;
        if (0xf < local_40) {
          uVal_6 = local_40 + 1;
          lVal_7 = local_58._0_8_;
          if (0xfff < uVal_6) {
            lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
            if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800a719e;
            uVal_6 = local_40 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_6);
        }
      }
    }
    if (local_208 == '\x01') {
      local_128 = *(char *)param_3;
      *(char *)param_3 = '\t';
      local_120 = param_3[1];
      param_3[1] = (uint8_t *)0x0;
      func_0x180084c70(&local_120);
    }
    else if (*(char *)param_3 == '\t') {
      *(char *)param_3 = '\0';
      local_118 = 9;
      local_110 = param_3[1];
      param_3[1] = (uint8_t *)0x0;
      func_0x180084c70(&local_110,9);
    }
    func_0x18009cbf0(local_270);
  }
  return;
}

// Unwind@1800a71f0
void Unwind_1800a71f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x128);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf0));
  }
  return;
}

// Unwind@1800a7240
void Unwind_1800a7240(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1800a7280
void Unwind_1800a7280(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x1e0);
  return;
}

// Unwind@1800a72c0
void Unwind_1800a72c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@1800a7300
void Unwind_1800a7300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1800a7340
void Unwind_1800a7340(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a7360
void Unwind_1800a7360(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbf0(param_2 + 0x28);
  return;
}

// Unwind@1800a7390
void Unwind_1800a7390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1800a73d0
void Unwind_1800a73d0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x130);
  return;
}

// Unwind@1800a7410
void Unwind_1800a7410(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@1800a7450
void Unwind_1800a7450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1800a7490
void Unwind_1800a7490(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a74b0
void Unwind_1800a74b0(uint64_t param_1,int64_t param_2)
{
  func_0x18009e380(param_2 + 0x1e0);
  return;
}

// Unwind@1800a74f0
void Unwind_1800a74f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a7510
void func_0x1800a7510(int64_t *param_1)
{
  int64_t *pLong_1;
  
  func_0x1800a7830(param_1 + 9);
  pLong_1 = (int64_t *)param_1[7];
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_1);
    param_1[7] = 0;
  }
  return;
}

// func_0x1800a7550
int64_t func_0x1800a7550(int64_t param_1,uint8_t (*param_2)[16],int64_t *param_3, uint8_t param_4,uint8_t param_5)
{
  uint64_t *pU64_1;
  int64_t *pLong_2;
  int iVal_3;
  uint32_t uVal_4;
  uint64_t uVal_5;
  char **ptr2_Char_6;
  
  *(uint64_t *)(param_1 + 0x38) = 0;
  pU64_1 = (uint64_t *)param_3[7];
  if (pU64_1 != (uint64_t *)0x0) {
    uVal_5 = (**(func_ptr_t *)*pU64_1)(pU64_1,param_1);
    *(uint64_t *)(param_1 + 0x38) = uVal_5;
  }
  *(uint32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)*param_2;
  *(uint64_t *)(param_1 + 0x50) = *(uint64_t *)(*param_2 + 8);
  *param_2 = ZEXT816(0);
  *(uint8_t *)(param_1 + 0x58) = param_5;
  *(uint32_t *)(param_1 + 0x5c) = 0xffffffff;
  *(uint8_t *)(param_1 + 0x60) = 0;
  *(uint8_t (*)[16])(param_1 + 0x68) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x78) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x88) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x98) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0xf;
  *(undefined1 **)(param_1 + 0xb8) = &DAT_180761155;
  *(uint8_t (*)[16])(param_1 + 0xc0) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0xd0) = 0;
  ptr2_Char_6 = (char **)func_0x18068c080();
  if (*ptr2_Char_6 == (char *)0x0) {
    iVal_3 = 0x2e;
  }
  else {
    iVal_3 = (int)**ptr2_Char_6;
  }
  *(int *)(param_1 + 0xd8) = iVal_3;
  *(uint8_t *)(param_1 + 0xe0) = param_4;
  uVal_4 = func_0x1800a79a0(param_1 + 0x48);
  *(uint32_t *)(param_1 + 0x40) = uVal_4;
  pLong_2 = (int64_t *)param_3[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_3);
  }
  return param_1;
}

// Unwind@1800a7680
void Unwind_1800a7680(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  
  pLong_1 = *(int64_t **)(param_2 + 0x30);
  pLong_2 = (int64_t *)pLong_1[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != pLong_1);
    pLong_1[7] = 0;
  }
  return;
}

// Unwind@1800a76d0
void Unwind_1800a76d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  
  func_0x1800a7830(*(uint64_t *)(param_2 + 0x20));
  pLong_1 = *(int64_t **)(param_2 + 0x30);
  pLong_2 = (int64_t *)pLong_1[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != pLong_1);
    pLong_1[7] = 0;
  }
  return;
}

// Unwind@1800a7720
void Unwind_1800a7720(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x28) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x28));
  }
  return;
}

// func_0x1800a7760
void func_0x1800a7760(int64_t **param_1)
{
  uint uVal_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  int64_t lVal_4;
  uint uVal_5;
  char *fnPtr_6;
  bool bFlag_7;
  uint8_t **local_48 [5];
  uint32_t local_20 [2];
  uint8_t **local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  pLong_2 = *param_1;
  if (pLong_2 != (int64_t *)0x0) {
    lVal_4 = (int64_t)*(int *)(*pLong_2 + 4);
    bFlag_7 = *(int64_t *)((int64_t)pLong_2 + lVal_4 + 0x48) == 0;
    uVal_5 = (*(uint *)((int64_t)pLong_2 + lVal_4 + 0x10) & 1) + (uint)bFlag_7 * 4;
    *(uint *)((int64_t)pLong_2 + lVal_4 + 0x10) = uVal_5;
    uVal_1 = *(uint *)((int64_t)pLong_2 + lVal_4 + 0x14);
    if ((uVal_1 & uVal_5) != 0) {
      fnPtr_6 = "ios_base::badbit set";
      if ((uVal_1 & (uint)bFlag_7 << 2) == 0) {
        fnPtr_6 = "ios_base::eofbit set";
      }
      local_20[0] = 1;
      local_18 = &PTR_vftable_1806b0968;
      func_0x1800968f0(local_48,local_20,fnPtr_6);
      local_48[0] = std::ios_base::failure::vftable;
      func_0x18067a120(local_48,&DAT_180768ca8);
      fnPtr_3 = (func_ptr_t )swi(3);
      (*fnPtr_3)();
      return;
    }
  }
  return;
}

// Unwind@1800a7810
void Unwind_1800a7810(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a7830
void func_0x1800a7830(int64_t **param_1)
{
  uint uVal_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  int64_t *pLong_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint uVal_8;
  char *fnPtr_9;
  bool bFlag_10;
  uint8_t **local_58 [5];
  uint32_t local_30 [2];
  uint8_t **local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  pLong_2 = param_1[0xd];
  if (&DAT_0000000f < pLong_2) {
    pLong_3 = param_1[10];
    pLong_5 = (int64_t *)((int64_t)pLong_2 + 1);
    pLong_4 = pLong_3;
    if ((int64_t *)0xfff < pLong_5) {
      pLong_4 = (int64_t *)pLong_3[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_3 + (-8 - (int64_t)pLong_4))) goto LAB_1800a7976;
      pLong_5 = pLong_2 + 5;
    }
    thunk_FUN_180695dd0(pLong_4,pLong_5);
  }
  param_1[0xc] = (int64_t *)0x0;
  param_1[0xd] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)(param_1 + 10) = 0;
  pLong_2 = param_1[7];
  if (pLong_2 != (int64_t *)0x0) {
    uVal_6 = (int64_t)param_1[9] - (int64_t)pLong_2;
    pLong_5 = pLong_2;
    if (0xfff < uVal_6) {
      pLong_5 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_5))) goto LAB_1800a7976;
      uVal_6 = uVal_6 + 0x27;
    }
    thunk_FUN_180695dd0(pLong_5,uVal_6);
    *(uint8_t (*)[16])(param_1 + 7) = ZEXT816(0);
    param_1[9] = (int64_t *)0x0;
  }
  pLong_2 = *param_1;
  if (pLong_2 != (int64_t *)0x0) {
    lVal_7 = (int64_t)*(int *)(*pLong_2 + 4);
    bFlag_10 = *(int64_t *)((int64_t)pLong_2 + lVal_7 + 0x48) == 0;
    uVal_8 = (*(uint *)((int64_t)pLong_2 + lVal_7 + 0x10) & 1) + (uint)bFlag_10 * 4;
    *(uint *)((int64_t)pLong_2 + lVal_7 + 0x10) = uVal_8;
    uVal_1 = *(uint *)((int64_t)pLong_2 + lVal_7 + 0x14);
    if ((uVal_1 & uVal_8) != 0) {
      fnPtr_9 = "ios_base::badbit set";
      if ((uVal_1 & (uint)bFlag_10 << 2) == 0) {
        fnPtr_9 = "ios_base::eofbit set";
      }
      local_30[0] = 1;
      local_28 = &PTR_vftable_1806b0968;
      func_0x1800968f0(local_58,local_30,fnPtr_9);
      local_58[0] = std::ios_base::failure::vftable;
      func_0x18067a120(local_58,&DAT_180768ca8);
LAB_1800a7976:
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  return;
}

// Unwind@1800a7980
void Unwind_1800a7980(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a79a0
uint64_t func_0x1800a79a0(int64_t param_1)
{
  char ch_1;
  int iVal_2;
  char *fnPtr_3;
  uint64_t uVal_4;
  
  if (*(int64_t *)(param_1 + 0x20) == 0) {
    iVal_2 = func_0x1800a8e50(param_1);
    if (iVal_2 == 0xef) {
      iVal_2 = func_0x1800a8e50(param_1);
      if ((iVal_2 != 0xbb) || (iVal_2 = func_0x1800a8e50(param_1), iVal_2 != 0xbf)) {
        fnPtr_3 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
        goto LAB_1800a79e3;
      }
    }
    else {
      *(uint8_t *)(param_1 + 0x18) = 1;
      *(int64_t *)(param_1 + 0x20) = *(int64_t *)(param_1 + 0x20) + -1;
      if (*(int64_t *)(param_1 + 0x28) == 0) {
        if (*(int64_t *)(param_1 + 0x30) != 0) {
          *(int64_t *)(param_1 + 0x30) = *(int64_t *)(param_1 + 0x30) + -1;
        }
      }
      else {
        *(int64_t *)(param_1 + 0x28) = *(int64_t *)(param_1 + 0x28) + -1;
      }
      if (*(int *)(param_1 + 0x14) != -1) {
        *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
      }
    }
  }
  func_0x1800a7bb0(param_1);
  iVal_2 = *(int *)(param_1 + 0x14);
  if ((iVal_2 == 0x2f & *(byte *)(param_1 + 0x10)) == 1) {
    do {
      ch_1 = func_0x1800a7da0(param_1);
      if (ch_1 == '\0') {
        return 0xe;
      }
      func_0x1800a7bb0(param_1);
      iVal_2 = *(int *)(param_1 + 0x14);
    } while ((*(char *)(param_1 + 0x10) == '\x01') && (iVal_2 == 0x2f));
  }
  switch(iVal_2) {
  case 0x22:
    uVal_4 = func_0x1800a7e70(param_1);
    return uVal_4;
  case 0x2c:
    return 0xd;
  case 0x2d:
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
    uVal_4 = func_0x1800a8750(param_1);
    return uVal_4;
  case 0x3a:
    return 0xc;
  case 0x5b:
    return 8;
  case 0x5d:
    return 10;
  case 0x66:
    ch_1 = func_0x1800a8e50(param_1);
    if (((ch_1 == 'a') && (ch_1 = func_0x1800a8e50(param_1), ch_1 == 'l')) &&
       (ch_1 = func_0x1800a8e50(param_1), ch_1 == 's')) {
      ch_1 = func_0x1800a8e50(param_1);
      uVal_4 = 2;
joined_r0x0001800a7b91:
      if (ch_1 == 'e') {
        return uVal_4;
      }
    }
    break;
  case 0x6e:
    ch_1 = func_0x1800a8e50(param_1);
    if (((ch_1 == 'u') && (ch_1 = func_0x1800a8e50(param_1), ch_1 == 'l')) &&
       (ch_1 = func_0x1800a8e50(param_1), ch_1 == 'l')) {
      return 3;
    }
    break;
  case 0x74:
    ch_1 = func_0x1800a8e50(param_1);
    if ((ch_1 == 'r') && (ch_1 = func_0x1800a8e50(param_1), ch_1 == 'u')) {
      ch_1 = func_0x1800a8e50(param_1);
      uVal_4 = 1;
      goto joined_r0x0001800a7b91;
    }
    break;
  case 0x7b:
    return 9;
  case 0x7d:
    return 0xb;
  case -1:
  case 0:
    return 0xf;
  }
  fnPtr_3 = "invalid literal";
LAB_1800a79e3:
  *(char **)(param_1 + 0x70) = fnPtr_3;
  return 0xe;
}

// func_0x1800a7bb0
void func_0x1800a7bb0(int64_t **param_1)
{
  int iVal_1;
  byte *pU8_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  uint uVal_5;
  int64_t lVal_6;
  char *fnPtr_7;
  char *fnPtr_8;
  uint8_t auStack_98 [32];
  uint32_t local_78 [2];
  uint8_t **local_70;
  uint8_t local_68 [40];
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  param_1[4] = (int64_t *)((int64_t)param_1[4] + 1);
  param_1[5] = (int64_t *)((int64_t)param_1[5] + 1);
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint8_t *)(param_1 + 3) = 0;
    uVal_5 = *(uint *)((int64_t)param_1 + 0x14);
joined_r0x0001800a7c81:
    if (uVal_5 != 0xffffffff) {
      local_68[0] = (uint8_t)uVal_5;
      pLong_3 = param_1[8];
      if (pLong_3 == param_1[9]) {
        func_0x180099ff0(param_1 + 7,pLong_3,local_68);
        iVal_1 = *(int *)((int64_t)param_1 + 0x14);
      }
      else {
        *(uint8_t *)pLong_3 = local_68[0];
        param_1[8] = (int64_t *)((int64_t)param_1[8] + 1);
        iVal_1 = *(int *)((int64_t)param_1 + 0x14);
      }
      if (iVal_1 - 9U < 0x18) {
                    /* WARNING: Could not recover jumptable at 0x0001800a7ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(func_ptr_t )(&DAT_1806b1afc + *(int *)(&DAT_1806b1afc + (uint64_t)(iVal_1 - 9U) * 4)))();
        return;
      }
    }
  }
  else {
    pLong_3 = param_1[1];
    if (*(int64_t *)pLong_3[7] != 0) {
      iVal_1 = *(int *)pLong_3[10];
      if (0 < iVal_1) {
        *(int *)pLong_3[10] = iVal_1 + -1;
        pU8_2 = *(byte **)pLong_3[7];
        *(byte **)pLong_3[7] = pU8_2 + 1;
        uVal_5 = (uint)*pU8_2;
        *(uint *)((int64_t)param_1 + 0x14) = uVal_5;
        goto joined_r0x0001800a7c81;
      }
    }
    uVal_5 = (**(func_ptr_t *)(*pLong_3 + 0x38))();
    if (uVal_5 != 0xffffffff) {
      *(uint *)((int64_t)param_1 + 0x14) = uVal_5;
      goto joined_r0x0001800a7c81;
    }
    pLong_3 = *param_1;
    lVal_6 = (int64_t)*(int *)(*pLong_3 + 4);
    uVal_5 = (*(uint *)((int64_t)pLong_3 + lVal_6 + 0x10) & 0x16 |
            (uint)(*(int64_t *)((int64_t)pLong_3 + lVal_6 + 0x48) == 0) << 2) + 1;
    *(uint *)((int64_t)pLong_3 + lVal_6 + 0x10) = uVal_5;
    uVal_5 = uVal_5 & *(uint *)((int64_t)pLong_3 + lVal_6 + 0x14);
    if (uVal_5 != 0) goto LAB_1800a7d41;
    *(uint32_t *)((int64_t)param_1 + 0x14) = 0xffffffff;
  }
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_98)) {
    return;
  }
  uVal_5 = func_0x180673080(local_40 ^ (uint64_t)auStack_98);
LAB_1800a7d41:
  fnPtr_8 = "ios_base::failbit set";
  if ((uVal_5 & 2) == 0) {
    fnPtr_8 = "ios_base::eofbit set";
  }
  fnPtr_7 = "ios_base::badbit set";
  if ((uVal_5 & 4) == 0) {
    fnPtr_7 = fnPtr_8;
  }
  local_78[0] = 1;
  local_70 = &PTR_vftable_1806b0968;
  func_0x180096770(local_68,fnPtr_7,local_78);
  func_0x18067a120(local_68,&DAT_180768ca8);
  fnPtr_4 = (func_ptr_t )swi(3);
  (*fnPtr_4)();
  return;
}

// func_0x1800a7da0
uint64_t func_0x1800a7da0(int64_t param_1)
{
  int iVal_1;
  char *fnPtr_2;
  
  iVal_1 = func_0x1800a8e50();
  if (iVal_1 == 0x2a) {
    do {
      while (iVal_1 = func_0x1800a8e50(param_1), iVal_1 == 0x2a) {
        iVal_1 = func_0x1800a8e50(param_1);
        if (iVal_1 == 0x2f) {
          return 1;
        }
        *(uint8_t *)(param_1 + 0x18) = 1;
        *(int64_t *)(param_1 + 0x20) = *(int64_t *)(param_1 + 0x20) + -1;
        if (*(int64_t *)(param_1 + 0x28) == 0) {
          if (*(int64_t *)(param_1 + 0x30) != 0) {
            *(int64_t *)(param_1 + 0x30) = *(int64_t *)(param_1 + 0x30) + -1;
          }
        }
        else {
          *(int64_t *)(param_1 + 0x28) = *(int64_t *)(param_1 + 0x28) + -1;
        }
        if (*(int *)(param_1 + 0x14) != -1) {
          *(int64_t *)(param_1 + 0x40) = *(int64_t *)(param_1 + 0x40) + -1;
        }
      }
    } while (1 < iVal_1 + 1U);
    fnPtr_2 = "invalid comment; missing closing \'*/\'";
  }
  else {
    if (iVal_1 == 0x2f) {
      do {
        iVal_1 = func_0x1800a8e50(param_1);
      } while ((iVal_1 + 1U < 0xf & (byte)(0x4803 >> ((byte)(iVal_1 + 1U) & 0x1f))) == 0);
      return 1;
    }
    fnPtr_2 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
  }
  *(char **)(param_1 + 0x70) = fnPtr_2;
  return 0;
}

// func_0x1800a7e70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1800a7e70(int64_t **param_1)
{
  int64_t **ptr2_Long_1;
  int64_t *pLong_2;
  byte *pU8_3;
  func_ptr_t fnPtr_4;
  char ch_5;
  uint uVal_6;
  uint32_t uVal_7;
  int iVal_8;
  int64_t **ptr2_Long_9;
  uint64_t uVal_10;
  int64_t *pLong_11;
  uint64_t **ptr2_U64_12;
  int64_t lVal_13;
  char *fnPtr_14;
  uint64_t uVal_15;
  char *fnPtr_16;
  uint32_t local_118 [2];
  uint8_t **local_110;
  uint64_t *local_108;
  uint64_t *local_100;
  uint64_t *local_f8;
  uint64_t *local_f0;
  uint64_t *local_e8;
  uint64_t *local_e0;
  uint64_t *local_d8;
  uint64_t *local_d0;
  uint64_t *local_c8;
  uint8_t *local_c0;
  uint64_t *local_b8;
  uint8_t *local_b0;
  uint64_t *local_a8;
  uint8_t *local_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  uint64_t local_88;
  uint8_t local_80 [24];
  uint64_t local_68;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  ptr2_Long_1 = param_1 + 10;
  param_1[0xc] = (int64_t *)0x0;
  ptr2_Long_9 = ptr2_Long_1;
  if (&DAT_0000000f < param_1[0xd]) {
    ptr2_Long_9 = (int64_t **)param_1[10];
  }
  *(uint8_t *)ptr2_Long_9 = 0;
  pLong_2 = param_1[7];
  pLong_11 = param_1[8];
  if (pLong_2 != param_1[8]) {
    param_1[8] = pLong_2;
    pLong_11 = pLong_2;
  }
  local_98 = CONCAT71(local_98._1_7_,*(uint8_t *)((int64_t)param_1 + 0x14));
  if (pLong_11 == param_1[9]) {
    func_0x180099ff0(param_1 + 7,pLong_11,&local_98);
  }
  else {
    *(uint8_t *)pLong_11 = *(uint8_t *)((int64_t)param_1 + 0x14);
    param_1[8] = (int64_t *)((int64_t)param_1[8] + 1);
  }
LAB_1800a7f1d:
  param_1[4] = (int64_t *)((int64_t)param_1[4] + 1);
  param_1[5] = (int64_t *)((int64_t)param_1[5] + 1);
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint8_t *)(param_1 + 3) = 0;
    uVal_6 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    pLong_2 = param_1[1];
    if (*(int64_t *)pLong_2[7] == 0) {
LAB_1800a7f70:
      uVal_6 = (**(func_ptr_t *)(*pLong_2 + 0x38))();
      if (uVal_6 == 0xffffffff) {
        pLong_2 = *param_1;
        lVal_13 = (int64_t)*(int *)(*pLong_2 + 4);
        uVal_6 = (*(uint *)((int64_t)pLong_2 + lVal_13 + 0x10) & 0x16 |
                (uint)(*(int64_t *)((int64_t)pLong_2 + lVal_13 + 0x48) == 0) << 2) + 1;
        *(uint *)((int64_t)pLong_2 + lVal_13 + 0x10) = uVal_6;
        uVal_6 = uVal_6 & *(uint *)((int64_t)pLong_2 + lVal_13 + 0x14);
        if (uVal_6 != 0) {
          fnPtr_16 = "ios_base::failbit set";
          if ((uVal_6 & 2) == 0) {
            fnPtr_16 = "ios_base::eofbit set";
          }
          fnPtr_14 = "ios_base::badbit set";
          if ((uVal_6 & 4) == 0) {
            fnPtr_14 = fnPtr_16;
          }
          local_118[0] = 1;
          local_110 = &PTR_vftable_1806b0968;
          func_0x180096770(&local_98,fnPtr_14,local_118);
          func_0x18067a120(&local_98,&DAT_180768ca8);
          fnPtr_4 = (func_ptr_t )swi(3);
          uVal_10 = (*fnPtr_4)();
          return uVal_10;
        }
        uVal_6 = 0xffffffff;
      }
    }
    else {
      iVal_8 = *(int *)pLong_2[10];
      if (iVal_8 < 1) goto LAB_1800a7f70;
      *(int *)pLong_2[10] = iVal_8 + -1;
      pU8_3 = *(byte **)pLong_2[7];
      *(byte **)pLong_2[7] = pU8_3 + 1;
      uVal_6 = (uint)*pU8_3;
    }
    *(uint *)((int64_t)param_1 + 0x14) = uVal_6;
  }
  if (uVal_6 == 0xffffffff) {
switchD_1800a7fdf_caseD_ffffffff:
    fnPtr_16 = "invalid string: missing closing quote";
    goto switchD_1800a8109_caseD_23;
  }
  local_98 = CONCAT71(local_98._1_7_,(char)uVal_6);
  pLong_2 = param_1[8];
  if (pLong_2 == param_1[9]) {
    func_0x180099ff0(param_1 + 7,pLong_2,&local_98);
    uVal_6 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    *(char *)pLong_2 = (char)uVal_6;
    param_1[8] = (int64_t *)((int64_t)param_1[8] + 1);
    uVal_6 = *(uint *)((int64_t)param_1 + 0x14);
  }
  if (uVal_6 == 10) {
    param_1[6] = (int64_t *)((int64_t)param_1[6] + 1);
    param_1[5] = (int64_t *)0x0;
    fnPtr_16 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    goto switchD_1800a8109_caseD_23;
  }
  uVal_15 = (uint64_t)uVal_6;
  switch(uVal_6) {
  case 0:
    fnPtr_16 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    break;
  case 1:
    fnPtr_16 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
    break;
  case 2:
    fnPtr_16 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    break;
  case 3:
    fnPtr_16 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    break;
  case 4:
    fnPtr_16 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    break;
  case 5:
    fnPtr_16 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    break;
  case 6:
    fnPtr_16 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    break;
  case 7:
    fnPtr_16 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    break;
  case 8:
    fnPtr_16 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    break;
  case 9:
    fnPtr_16 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    break;
  default:
    fnPtr_16 = "invalid string: ill-formed UTF-8 byte";
    break;
  case 0xb:
    fnPtr_16 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    break;
  case 0xc:
    fnPtr_16 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    break;
  case 0xd:
    fnPtr_16 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    break;
  case 0xe:
    fnPtr_16 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    break;
  case 0xf:
    fnPtr_16 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    break;
  case 0x10:
    fnPtr_16 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    break;
  case 0x11:
    fnPtr_16 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    break;
  case 0x12:
    fnPtr_16 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    break;
  case 0x13:
    fnPtr_16 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    break;
  case 0x14:
    fnPtr_16 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    break;
  case 0x15:
    fnPtr_16 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    break;
  case 0x16:
    fnPtr_16 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    break;
  case 0x17:
    fnPtr_16 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    break;
  case 0x18:
    fnPtr_16 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    break;
  case 0x19:
    fnPtr_16 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    break;
  case 0x1a:
    fnPtr_16 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    break;
  case 0x1b:
    fnPtr_16 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    break;
  case 0x1c:
    fnPtr_16 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    break;
  case 0x1d:
    fnPtr_16 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    break;
  case 0x1e:
    fnPtr_16 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    break;
  case 0x1f:
    fnPtr_16 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
    break;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
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
  case 0x3f:
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
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
switchD_1800a7fdf_caseD_20:
    pLong_2 = param_1[0xc];
    if (pLong_2 < param_1[0xd]) {
      param_1[0xc] = (int64_t *)((int64_t)pLong_2 + 1);
      ptr2_Long_9 = ptr2_Long_1;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Long_9 = (int64_t **)param_1[10];
      }
      *(char *)((int64_t)ptr2_Long_9 + (int64_t)pLong_2) = (char)uVal_15;
      ((uint8_t *)((int64_t)ptr2_Long_9 + 1))[(int64_t)pLong_2] = 0;
    }
    else {
      func_0x18008c590(ptr2_Long_1,1);
    }
    goto LAB_1800a7f1d;
  case 0x22:
    return 4;
  case 0x5c:
    uVal_7 = func_0x1800a8e50(param_1);
    fnPtr_16 = "invalid string: forbidden character after backslash";
    switch(uVal_7) {
    case 0x22:
      pLong_2 = param_1[0xc];
      if (pLong_2 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_2 + 1);
        ptr2_Long_9 = ptr2_Long_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_9 = (int64_t **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Long_9 + (int64_t)pLong_2) = 0x22;
        goto LAB_1800a7f1d;
      }
      break;
    default:
      goto switchD_1800a8109_caseD_23;
    case 0x2f:
      pLong_2 = param_1[0xc];
      if (pLong_2 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_2 + 1);
        ptr2_Long_9 = ptr2_Long_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_9 = (int64_t **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Long_9 + (int64_t)pLong_2) = 0x2f;
        goto LAB_1800a7f1d;
      }
      break;
    case 0x5c:
      pLong_2 = param_1[0xc];
      if (pLong_2 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_2 + 1);
        ptr2_Long_9 = ptr2_Long_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_9 = (int64_t **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Long_9 + (int64_t)pLong_2) = 0x5c;
        goto LAB_1800a7f1d;
      }
      break;
    case 0x62:
      pLong_2 = param_1[0xc];
      if (pLong_2 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_2 + 1);
        ptr2_Long_9 = ptr2_Long_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_9 = (int64_t **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Long_9 + (int64_t)pLong_2) = 8;
        goto LAB_1800a7f1d;
      }
      break;
    case 0x66:
      pLong_2 = param_1[0xc];
      if (pLong_2 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_2 + 1);
        ptr2_Long_9 = ptr2_Long_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_9 = (int64_t **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Long_9 + (int64_t)pLong_2) = 0xc;
        goto LAB_1800a7f1d;
      }
      break;
    case 0x6e:
      pLong_2 = param_1[0xc];
      if (pLong_2 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_2 + 1);
        ptr2_Long_9 = ptr2_Long_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_9 = (int64_t **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Long_9 + (int64_t)pLong_2) = 10;
        goto LAB_1800a7f1d;
      }
      break;
    case 0x72:
      pLong_2 = param_1[0xc];
      if (pLong_2 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_2 + 1);
        ptr2_Long_9 = ptr2_Long_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_9 = (int64_t **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Long_9 + (int64_t)pLong_2) = 0xd;
        goto LAB_1800a7f1d;
      }
      break;
    case 0x74:
      pLong_2 = param_1[0xc];
      if (pLong_2 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_2 + 1);
        ptr2_Long_9 = ptr2_Long_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_9 = (int64_t **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Long_9 + (int64_t)pLong_2) = 9;
        goto LAB_1800a7f1d;
      }
      break;
    case 0x75:
      uVal_6 = func_0x1800a8f70(param_1);
      fnPtr_16 = "invalid string: \'\\u\' must be followed by 4 hex digits";
      if (uVal_6 == 0xffffffff) goto switchD_1800a8109_caseD_23;
      uVal_15 = (uint64_t)uVal_6;
      if ((uVal_6 & 0xfffffc00) == 0xd800) {
        local_68 = uVal_15;
        iVal_8 = func_0x1800a8e50(param_1);
        if ((iVal_8 != 0x5c) || (iVal_8 = func_0x1800a8e50(param_1), iVal_8 != 0x75)) {
          fnPtr_16 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
          goto switchD_1800a8109_caseD_23;
        }
        uVal_6 = func_0x1800a8f70(param_1);
        if ((uVal_6 == 0xffffffff) ||
           (fnPtr_16 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF",
           (uVal_6 & 0xfffffc00) != 0xdc00)) goto switchD_1800a8109_caseD_23;
        uVal_15 = (uint64_t)((int)local_68 * 0x400 + uVal_6 + 0xfca02400);
LAB_1800a82b6:
        local_68 = uVal_15;
        func_0x18009a150(param_1,(uint)(uVal_15 >> 0x12) | 0xf0);
        uVal_6 = (uint)(local_68 >> 0xc) & 0x3f | 0x80;
LAB_1800a82e3:
        func_0x18009a150(param_1,uVal_6);
        uVal_6 = (uint)(local_68 >> 6) & 0x3f | 0x80;
      }
      else {
        if ((uVal_6 & 0xfffffc00) == 0xdc00) {
          fnPtr_16 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
          goto switchD_1800a8109_caseD_23;
        }
        if ((int)uVal_6 < 0x80) goto switchD_1800a7fdf_caseD_20;
        if (0x7ff < uVal_6) {
          if (0xffff < uVal_6) goto LAB_1800a82b6;
          uVal_6 = uVal_6 >> 0xc | 0xe0;
          local_68 = uVal_15;
          goto LAB_1800a82e3;
        }
        uVal_6 = uVal_6 >> 6 | 0xc0;
        local_68 = uVal_15;
      }
      func_0x18009a150(param_1,uVal_6);
      func_0x18009a150(param_1,(uint)local_68 & 0x3f | 0x80);
      goto LAB_1800a7f1d;
    }
    func_0x18008c590(ptr2_Long_1,1);
    goto LAB_1800a7f1d;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    local_98 = 0xbf00000080;
    ptr2_U64_12 = &local_108;
    local_108 = &local_98;
    local_100 = &uStack_90;
    goto LAB_1800a804e;
  case 0xe0:
    local_f0 = &local_88;
    ptr2_U64_12 = &local_f8;
    local_f8 = &local_98;
    local_98 = _DAT_1806aee90;
    uStack_90 = _UNK_1806aee98;
    goto LAB_1800a804e;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    local_e0 = &local_88;
    ptr2_U64_12 = &local_e8;
    local_e8 = &local_98;
    local_98 = _DAT_1806aee80;
    uStack_90 = _UNK_1806aee88;
    goto LAB_1800a804e;
  case 0xed:
    local_d0 = &local_88;
    ptr2_U64_12 = &local_d8;
    local_d8 = &local_98;
    local_98 = _DAT_1806aee70;
    uStack_90 = _UNK_1806aee78;
    goto LAB_1800a804e;
  case 0xf0:
    local_88 = 0xbf00000080;
    ptr2_U64_12 = &local_c8;
    local_c8 = &local_98;
    local_c0 = local_80;
    local_98 = _DAT_1806b0a28;
    uStack_90 = _UNK_1806b0a30;
    goto LAB_1800a804e;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    local_88 = 0xbf00000080;
    ptr2_U64_12 = &local_b8;
    local_b8 = &local_98;
    local_b0 = local_80;
    local_98 = _DAT_1806b0a40;
    uStack_90 = _UNK_1806b0a48;
    goto LAB_1800a804e;
  case 0xf4:
    local_88 = 0xbf00000080;
    ptr2_U64_12 = &local_a8;
    local_a8 = &local_98;
    local_a0 = local_80;
    local_98 = _DAT_1806b0a58;
    uStack_90 = _UNK_1806b0a60;
LAB_1800a804e:
    ch_5 = func_0x1800a9060(param_1,ptr2_U64_12);
    if (ch_5 == '\0') {
      return 0xe;
    }
    goto LAB_1800a7f1d;
  case 0xffffffff:
    goto switchD_1800a7fdf_caseD_ffffffff;
  }
switchD_1800a8109_caseD_23:
  param_1[0xe] = (int64_t *)fnPtr_16;
  return 0xe;
}

// Unwind@1800a8720
void Unwind_1800a8720(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a8750
uint64_t func_0x1800a8750(int64_t **param_1)
{
  byte *pU8_1;
  uint uVal_2;
  int iVal_3;
  int iVal_4;
  int64_t **ptr2_Long_5;
  char *fnPtr_6;
  uint32_t *pU64_7;
  int64_t *pLong_8;
  int *pInt_9;
  int64_t *pLong_10;
  int64_t **ptr2_Long_11;
  int64_t **ptr2_Long_12;
  uint64_t local_40;
  uint8_t local_32;
  uint8_t local_31;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  ptr2_Long_12 = param_1 + 10;
  param_1[0xc] = (int64_t *)0x0;
  ptr2_Long_5 = ptr2_Long_12;
  if (&DAT_0000000f < param_1[0xd]) {
    ptr2_Long_5 = (int64_t **)param_1[10];
  }
  *(uint8_t *)ptr2_Long_5 = 0;
  pLong_8 = param_1[7];
  pLong_10 = param_1[8];
  if (pLong_8 != param_1[8]) {
    param_1[8] = pLong_8;
    pLong_10 = pLong_8;
  }
  local_31 = *(uint8_t *)((int64_t)param_1 + 0x14);
  if (pLong_10 == param_1[9]) {
    func_0x180099ff0(param_1 + 7,pLong_10,&local_31);
  }
  else {
    *(uint8_t *)pLong_10 = local_31;
    param_1[8] = (int64_t *)((int64_t)param_1[8] + 1);
  }
  iVal_3 = *(int *)((int64_t)param_1 + 0x14);
  ptr2_Long_5 = ptr2_Long_12;
  if (iVal_3 - 0x31U < 9) {
    pLong_8 = param_1[0xc];
    if (pLong_8 < param_1[0xd]) {
      param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
      ptr2_Long_11 = ptr2_Long_12;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Long_11 = (int64_t **)param_1[10];
      }
      *(char *)((int64_t)ptr2_Long_11 + (int64_t)pLong_8) = (char)iVal_3;
      ((uint8_t *)((int64_t)ptr2_Long_11 + 1))[(int64_t)pLong_8] = 0;
    }
    else {
      func_0x18008c590(ptr2_Long_12,1);
    }
    iVal_3 = 5;
LAB_1800a88fd:
    param_1[4] = (int64_t *)((int64_t)param_1[4] + 1);
    param_1[5] = (int64_t *)((int64_t)param_1[5] + 1);
    if (*(char *)(param_1 + 3) == '\x01') {
      *(uint8_t *)(param_1 + 3) = 0;
      uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
    }
    else {
      pLong_8 = param_1[1];
      if (*(int64_t *)pLong_8[7] == 0) {
LAB_1800a8950:
        uVal_2 = (**(func_ptr_t *)(*pLong_8 + 0x38))();
        if (uVal_2 == 0xffffffff) {
          pLong_8 = *param_1;
          func_0x180096da0((int64_t)pLong_8 + (int64_t)*(int *)(*pLong_8 + 4),
                        *(uint *)((int64_t)pLong_8 + (int64_t)*(int *)(*pLong_8 + 4) + 0x10) | 1,0);
          uVal_2 = 0xffffffff;
        }
      }
      else {
        iVal_4 = *(int *)pLong_8[10];
        if (iVal_4 < 1) goto LAB_1800a8950;
        *(int *)pLong_8[10] = iVal_4 + -1;
        pU8_1 = *(byte **)pLong_8[7];
        *(byte **)pLong_8[7] = pU8_1 + 1;
        uVal_2 = (uint)*pU8_1;
      }
      *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
    }
    if (uVal_2 == 0xffffffff) goto LAB_1800a8c59;
    local_32 = (uint8_t)uVal_2;
    if (param_1[8] == param_1[9]) {
      func_0x180099ff0(param_1 + 7);
      iVal_4 = *(int *)((int64_t)param_1 + 0x14);
    }
    else {
      *(uint8_t *)param_1[8] = local_32;
      param_1[8] = (int64_t *)((int64_t)param_1[8] + 1);
      iVal_4 = *(int *)((int64_t)param_1 + 0x14);
    }
    if (iVal_4 - 0x30U < 10) {
      pLong_8 = param_1[0xc];
      if (pLong_8 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
        ptr2_Long_11 = ptr2_Long_12;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_11 = (int64_t **)param_1[10];
        }
        *(char *)((int64_t)ptr2_Long_11 + (int64_t)pLong_8) = (char)iVal_4;
        ((uint8_t *)((int64_t)ptr2_Long_11 + 1))[(int64_t)pLong_8] = 0;
      }
      else {
        func_0x18008c590(ptr2_Long_12,1);
      }
      goto LAB_1800a88fd;
    }
    if (iVal_4 < 0x45) {
      if (iVal_4 == 10) {
        param_1[6] = (int64_t *)((int64_t)param_1[6] + 1);
        param_1[5] = (int64_t *)0x0;
        goto LAB_1800a8c59;
      }
      goto joined_r0x0001800a8a14;
    }
    if ((iVal_4 != 0x45) && (iVal_4 != 0x65)) goto LAB_1800a8c59;
    pLong_8 = param_1[0xc];
    if (param_1[0xd] <= pLong_8) goto LAB_1800a8beb;
    param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
    if (&DAT_0000000f < param_1[0xd]) {
      ptr2_Long_5 = (int64_t **)param_1[10];
    }
    *(char *)((int64_t)ptr2_Long_5 + (int64_t)pLong_8) = (char)iVal_4;
LAB_1800a8bdc:
    ((uint8_t *)((int64_t)ptr2_Long_5 + 1))[(int64_t)pLong_8] = 0;
  }
  else {
    if (iVal_3 == 0x30) {
      pLong_8 = param_1[0xc];
      if (pLong_8 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
        ptr2_Long_11 = ptr2_Long_12;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_11 = (int64_t **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Long_11 + (int64_t)pLong_8) = 0x30;
      }
      else {
        func_0x18008c590(ptr2_Long_12,1);
      }
      iVal_3 = 5;
      iVal_4 = func_0x1800a8e50(param_1);
    }
    else {
      if (iVal_3 == 0x2d) {
        pLong_8 = param_1[0xc];
        if (pLong_8 < param_1[0xd]) {
          param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
          ptr2_Long_11 = ptr2_Long_12;
          if (&DAT_0000000f < param_1[0xd]) {
            ptr2_Long_11 = (int64_t **)param_1[10];
          }
          *(uint16_t *)((int64_t)ptr2_Long_11 + (int64_t)pLong_8) = 0x2d;
        }
        else {
          func_0x18008c590(ptr2_Long_12,1);
        }
      }
      iVal_3 = func_0x1800a8e50(param_1);
      if (iVal_3 - 0x31U < 9) {
        pLong_8 = param_1[0xc];
        if (pLong_8 < param_1[0xd]) {
          param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
          ptr2_Long_11 = ptr2_Long_12;
          if (&DAT_0000000f < param_1[0xd]) {
            ptr2_Long_11 = (int64_t **)param_1[10];
          }
          *(uint8_t *)((int64_t)ptr2_Long_11 + (int64_t)pLong_8) =
               *(uint8_t *)((int64_t)param_1 + 0x14);
          ((uint8_t *)((int64_t)ptr2_Long_11 + 1))[(int64_t)pLong_8] = 0;
          iVal_3 = 6;
        }
        else {
          func_0x18008c590(ptr2_Long_12,1);
          iVal_3 = 6;
        }
        goto LAB_1800a88fd;
      }
      if (iVal_3 != 0x30) {
        fnPtr_6 = "invalid number; expected digit after \'-\'";
        goto LAB_1800a8e17;
      }
      func_0x18009a150(param_1,*(uint32_t *)((int64_t)param_1 + 0x14));
      iVal_3 = 6;
      iVal_4 = func_0x1800a8e50(param_1);
    }
    if ((iVal_4 != 0x65) && (iVal_4 != 0x45)) {
joined_r0x0001800a8a14:
      if (iVal_4 != 0x2e) goto LAB_1800a8c59;
      pLong_8 = param_1[0xc];
      if (pLong_8 < param_1[0xd]) {
        param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
        ptr2_Long_11 = ptr2_Long_12;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Long_11 = (int64_t **)param_1[10];
        }
        *(uint8_t *)((int64_t)ptr2_Long_11 + (int64_t)pLong_8) = *(uint8_t *)(param_1 + 0x12);
        ((uint8_t *)((int64_t)ptr2_Long_11 + 1))[(int64_t)pLong_8] = 0;
      }
      else {
        func_0x18008c590(ptr2_Long_12,1);
      }
      iVal_3 = func_0x1800a8e50(param_1);
      if (9 < iVal_3 - 0x30U) {
        fnPtr_6 = "invalid number; expected digit after \'.\'";
        goto LAB_1800a8e17;
      }
      do {
        pLong_8 = param_1[0xc];
        if (pLong_8 < param_1[0xd]) {
          param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
          ptr2_Long_11 = ptr2_Long_12;
          if (&DAT_0000000f < param_1[0xd]) {
            ptr2_Long_11 = (int64_t **)param_1[10];
          }
          *(uint8_t *)((int64_t)ptr2_Long_11 + (int64_t)pLong_8) =
               *(uint8_t *)((int64_t)param_1 + 0x14);
          ((uint8_t *)((int64_t)ptr2_Long_11 + 1))[(int64_t)pLong_8] = 0;
        }
        else {
          func_0x18008c590(ptr2_Long_12,1);
        }
        iVal_3 = func_0x1800a8e50(param_1);
      } while (iVal_3 - 0x30U < 10);
      if ((iVal_3 != 0x45) && (iVal_3 != 0x65)) {
        iVal_3 = 7;
        goto LAB_1800a8c59;
      }
    }
    pLong_8 = param_1[0xc];
    if (pLong_8 < param_1[0xd]) {
      param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Long_5 = (int64_t **)param_1[10];
      }
      *(uint8_t *)((int64_t)ptr2_Long_5 + (int64_t)pLong_8) =
           *(uint8_t *)((int64_t)param_1 + 0x14);
      goto LAB_1800a8bdc;
    }
LAB_1800a8beb:
    func_0x18008c590(ptr2_Long_12,1);
  }
  iVal_3 = func_0x1800a8e50(param_1);
  if (9 < iVal_3 - 0x30U) {
    if ((iVal_3 != 0x2d) && (iVal_3 != 0x2b)) {
      fnPtr_6 = "invalid number; expected \'+\', \'-\', or digit after exponent";
LAB_1800a8e17:
      param_1[0xe] = (int64_t *)fnPtr_6;
      return 0xe;
    }
    pLong_8 = param_1[0xc];
    if (pLong_8 < param_1[0xd]) {
      param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
      ptr2_Long_5 = ptr2_Long_12;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Long_5 = (int64_t **)param_1[10];
      }
      *(uint8_t *)((int64_t)ptr2_Long_5 + (int64_t)pLong_8) =
           *(uint8_t *)((int64_t)param_1 + 0x14);
      ((uint8_t *)((int64_t)ptr2_Long_5 + 1))[(int64_t)pLong_8] = 0;
    }
    else {
      func_0x18008c590(ptr2_Long_12,1);
    }
    iVal_3 = func_0x1800a8e50(param_1);
    if (9 < iVal_3 - 0x30U) {
      fnPtr_6 = "invalid number; expected digit after exponent sign";
      goto LAB_1800a8e17;
    }
  }
  pLong_8 = param_1[0xc];
  if (pLong_8 < param_1[0xd]) {
    param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
    ptr2_Long_5 = ptr2_Long_12;
    if (&DAT_0000000f < param_1[0xd]) {
      ptr2_Long_5 = (int64_t **)param_1[10];
    }
    *(uint8_t *)((int64_t)ptr2_Long_5 + (int64_t)pLong_8) = *(uint8_t *)((int64_t)param_1 + 0x14);
    ((uint8_t *)((int64_t)ptr2_Long_5 + 1))[(int64_t)pLong_8] = 0;
  }
  else {
    func_0x18008c590(ptr2_Long_12,1);
  }
  iVal_4 = func_0x1800a8e50(param_1);
  iVal_3 = 7;
  while (iVal_4 - 0x30U < 10) {
    pLong_8 = param_1[0xc];
    if (pLong_8 < param_1[0xd]) {
      param_1[0xc] = (int64_t *)((int64_t)pLong_8 + 1);
      ptr2_Long_5 = ptr2_Long_12;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Long_5 = (int64_t **)param_1[10];
      }
      *(uint8_t *)((int64_t)ptr2_Long_5 + (int64_t)pLong_8) =
           *(uint8_t *)((int64_t)param_1 + 0x14);
      ((uint8_t *)((int64_t)ptr2_Long_5 + 1))[(int64_t)pLong_8] = 0;
    }
    else {
      func_0x18008c590(ptr2_Long_12,1);
    }
    iVal_4 = func_0x1800a8e50(param_1);
  }
LAB_1800a8c59:
  *(uint8_t *)(param_1 + 3) = 1;
  param_1[4] = (int64_t *)((int64_t)param_1[4] + -1);
  if (param_1[5] == (int64_t *)0x0) {
    if (param_1[6] != (int64_t *)0x0) {
      param_1[6] = (int64_t *)((int64_t)param_1[6] + -1);
    }
  }
  else {
    param_1[5] = (int64_t *)((int64_t)param_1[5] + -1);
  }
  if (*(int *)((int64_t)param_1 + 0x14) != -1) {
    param_1[8] = (int64_t *)((int64_t)param_1[8] + -1);
  }
  local_40 = 0;
  pU64_7 = (uint32_t *)func_0x1806823dc();
  *pU64_7 = 0;
  if (iVal_3 == 6) {
    ptr2_Long_5 = ptr2_Long_12;
    if (&DAT_0000000f < param_1[0xd]) {
      ptr2_Long_5 = (int64_t **)param_1[10];
    }
    pLong_8 = (int64_t *)func_0x180691d50(ptr2_Long_5,&local_40,10);
    pInt_9 = (int *)func_0x1806823dc();
    if (*pInt_9 == 0) {
      param_1[0xf] = pLong_8;
      return 6;
    }
  }
  else if (iVal_3 == 5) {
    ptr2_Long_5 = ptr2_Long_12;
    if (&DAT_0000000f < param_1[0xd]) {
      ptr2_Long_5 = (int64_t **)param_1[10];
    }
    pLong_8 = (int64_t *)func_0x180691e04(ptr2_Long_5,&local_40,10);
    pInt_9 = (int *)func_0x1806823dc();
    if (*pInt_9 == 0) {
      param_1[0x10] = pLong_8;
      return 5;
    }
  }
  if (&DAT_0000000f < param_1[0xd]) {
    ptr2_Long_12 = (int64_t **)param_1[10];
  }
  pLong_8 = (int64_t *)func_0x18068e53c(ptr2_Long_12,&local_40);
  param_1[0x11] = pLong_8;
  return 7;
}

// Unwind@1800a8e30
void Unwind_1800a8e30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a8e50
uint64_t func_0x1800a8e50(int64_t **param_1)
{
  int iVal_1;
  byte *pU8_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint8_t auStack_38 [39];
  uint8_t local_11;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  param_1[4] = (int64_t *)((int64_t)param_1[4] + 1);
  param_1[5] = (int64_t *)((int64_t)param_1[5] + 1);
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint8_t *)(param_1 + 3) = 0;
    uVal_5 = *(uint *)((int64_t)param_1 + 0x14);
    goto LAB_1800a8ec5;
  }
  pLong_3 = param_1[1];
  if (*(int64_t *)pLong_3[7] == 0) {
LAB_1800a8eb7:
    uVal_5 = (**(func_ptr_t *)(*pLong_3 + 0x38))();
    if (uVal_5 == 0xffffffff) {
      pLong_3 = *param_1;
      func_0x180096da0((int64_t)pLong_3 + (int64_t)*(int *)(*pLong_3 + 4),
                    *(uint *)((int64_t)pLong_3 + (int64_t)*(int *)(*pLong_3 + 4) + 0x10) | 1,0);
      uVal_5 = 0xffffffff;
    }
  }
  else {
    iVal_1 = *(int *)pLong_3[10];
    if (iVal_1 < 1) goto LAB_1800a8eb7;
    *(int *)pLong_3[10] = iVal_1 + -1;
    pU8_2 = *(byte **)pLong_3[7];
    *(byte **)pLong_3[7] = pU8_2 + 1;
    uVal_5 = (uint)*pU8_2;
  }
  *(uint *)((int64_t)param_1 + 0x14) = uVal_5;
LAB_1800a8ec5:
  if (uVal_5 == 0xffffffff) {
    uVal_6 = 0xffffffff;
  }
  else {
    local_11 = (uint8_t)uVal_5;
    pLong_3 = param_1[8];
    if (pLong_3 == param_1[9]) {
      func_0x180099ff0(param_1 + 7,pLong_3,&local_11);
      uVal_5 = *(uint *)((int64_t)param_1 + 0x14);
    }
    else {
      *(uint8_t *)pLong_3 = local_11;
      param_1[8] = (int64_t *)((int64_t)param_1[8] + 1);
      uVal_5 = *(uint *)((int64_t)param_1 + 0x14);
    }
    uVal_6 = (uint64_t)uVal_5;
    if (uVal_5 == 10) {
      param_1[6] = (int64_t *)((int64_t)param_1[6] + 1);
      param_1[5] = (int64_t *)0x0;
      uVal_6 = 10;
    }
  }
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return uVal_6;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_4 = (func_ptr_t )swi(3);
  uVal_6 = (*fnPtr_4)();
  return uVal_6;
}

// func_0x1800a8f70
int func_0x1800a8f70(int64_t param_1)
{
  int iVal_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  
  func_0x1800a8e50();
  iVal_1 = *(int *)(param_1 + 0x14);
  uVal_2 = iVal_1 - 0x30;
  if (9 < uVal_2) {
    if (iVal_1 - 0x41U < 6) {
      uVal_2 = iVal_1 - 0x37;
    }
    else {
      if (5 < iVal_1 - 0x61U) {
        return -1;
      }
      uVal_2 = iVal_1 - 0x57;
    }
  }
  func_0x1800a8e50(param_1);
  iVal_1 = *(int *)(param_1 + 0x14);
  uVal_3 = iVal_1 - 0x30;
  if (9 < uVal_3) {
    if (iVal_1 - 0x41U < 6) {
      uVal_3 = iVal_1 - 0x37;
    }
    else {
      if (5 < iVal_1 - 0x61U) {
        return -1;
      }
      uVal_3 = iVal_1 - 0x57;
    }
  }
  func_0x1800a8e50(param_1);
  iVal_1 = *(int *)(param_1 + 0x14);
  uVal_4 = iVal_1 - 0x30;
  if (9 < uVal_4) {
    if (iVal_1 - 0x41U < 6) {
      uVal_4 = iVal_1 - 0x37;
    }
    else {
      if (5 < iVal_1 - 0x61U) {
        return -1;
      }
      uVal_4 = iVal_1 - 0x57;
    }
  }
  func_0x1800a8e50(param_1);
  iVal_1 = *(int *)(param_1 + 0x14);
  uVal_5 = iVal_1 - 0x30;
  if (9 < uVal_5) {
    if (iVal_1 - 0x41U < 6) {
      uVal_5 = iVal_1 - 0x37;
    }
    else {
      if (5 < iVal_1 - 0x61U) {
        return -1;
      }
      uVal_5 = iVal_1 - 0x57;
    }
  }
  return uVal_4 * 0x10 + uVal_3 * 0x100 + uVal_2 * 0x1000 + uVal_5;
}

// func_0x1800a9060
uint64_t func_0x1800a9060(int64_t param_1,int **param_2)
{
  int64_t lVal_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t unaff_RBP;
  uint64_t uVal_5;
  int *pInt_6;
  
  lVal_1 = param_1 + 0x50;
  uVal_5 = *(uint64_t *)(param_1 + 0x60);
  if (uVal_5 < *(uint64_t *)(param_1 + 0x68)) {
    *(uint64_t *)(param_1 + 0x60) = uVal_5 + 1;
    lVal_4 = lVal_1;
    if (0xf < *(uint64_t *)(param_1 + 0x68)) {
      lVal_4 = *(int64_t *)(param_1 + 0x50);
    }
    *(uint8_t *)(lVal_4 + uVal_5) = *(uint8_t *)(param_1 + 0x14);
    *(uint8_t *)(lVal_4 + 1 + uVal_5) = 0;
  }
  else {
    func_0x18008c590(lVal_1,1);
  }
  pInt_6 = *param_2;
  uVal_5 = CONCAT71((int7)((uint64_t)unaff_RBP >> 8),1);
  if (pInt_6 != param_2[1]) {
    do {
      while( true ) {
        func_0x1800a8e50(param_1);
        iVal_2 = *(int *)(param_1 + 0x14);
        if ((iVal_2 < *pInt_6) || (pInt_6[1] < iVal_2)) {
          *(char **)(param_1 + 0x70) = "invalid string: ill-formed UTF-8 byte";
          uVal_5 = 0;
          goto LAB_1800a9137;
        }
        uVal_3 = *(uint64_t *)(param_1 + 0x60);
        if (*(uint64_t *)(param_1 + 0x68) <= uVal_3) break;
        *(uint64_t *)(param_1 + 0x60) = uVal_3 + 1;
        lVal_4 = lVal_1;
        if (0xf < *(uint64_t *)(param_1 + 0x68)) {
          lVal_4 = *(int64_t *)(param_1 + 0x50);
        }
        *(char *)(lVal_4 + uVal_3) = (char)iVal_2;
        *(uint8_t *)(lVal_4 + 1 + uVal_3) = 0;
        pInt_6 = pInt_6 + 2;
        if (pInt_6 == param_2[1]) goto LAB_1800a9137;
      }
      func_0x18008c590(lVal_1,1);
      pInt_6 = pInt_6 + 2;
    } while (pInt_6 != param_2[1]);
  }
LAB_1800a9137:
  return uVal_5 & 0xffffffff;
}

// func_0x1800a9160
uint64_t func_0x1800a9160(int64_t param_1,int64_t *param_2)
{
  func_ptr_t fnPtr_1;
  char ch_2;
  int iVal_3;
  uint32_t uVal_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint *pU64_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint uVal_11;
  uint64_t unaff_R14;
  int64_t lVal_12;
  uint64_t local_168;
  uint64_t uStack_160;
  uint64_t local_158;
  uint *local_150;
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  int64_t local_128;
  uint64_t local_120;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0 [24];
  uint8_t **local_a8;
  uint8_t local_a0 [24];
  uint8_t local_88;
  undefined7 uStack_87;
  uint64_t local_78;
  uint64_t local_70;
  uint8_t local_68 [16];
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_138 = (uint8_t  [16])0x0;
  local_148 = (uint8_t  [16])0x0;
  lVal_10 = param_1 + 0x48;
LAB_1800a91c0:
  lVal_12 = param_1 + 0x98;
  switch(*(uint32_t *)(param_1 + 0x40)) {
  case 1:
    local_c8 = (uint8_t **)CONCAT71(local_c8._1_7_,1);
    func_0x1800a1c40(param_2,&local_128,&local_c8);
    break;
  case 2:
    local_c8 = (uint8_t **)((uint64_t)local_c8._1_7_ << 8);
    func_0x1800a1c40(param_2,&local_128,&local_c8);
    break;
  case 3:
    local_c8 = (uint8_t **)0x0;
    func_0x1800a1f40(param_2,&local_128,&local_c8);
    break;
  case 4:
    func_0x1800a2540(param_2,&local_128,lVal_12);
    break;
  case 5:
    local_c8 = *(uint8_t ***)(param_1 + 200);
    func_0x1800a2850(param_2,&local_128,&local_c8);
    break;
  case 6:
    local_c8 = *(uint8_t ***)(param_1 + 0xc0);
    func_0x1800a2240(param_2,&local_128,&local_c8);
    break;
  case 7:
    if (((uint64_t)*(uint8_t ***)(param_1 + 0xd0) & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      local_c8 = *(uint8_t ***)(param_1 + 0xd0);
      func_0x1800a1930(param_2,&local_128,&local_c8,0);
      break;
    }
    local_e8 = CONCAT71(local_e8._1_7_,0x27);
    func_0x18009ca10(lVal_10,&local_88);
    func_0x18009f8f0(&local_c8,"number overflow parsing \'",&local_88,&local_e8);
    func_0x18009f590(&local_128,0x196,&local_c8,0);
    func_0x18009ca10(lVal_10,local_68);
    uVal_5 = func_0x18009f520(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_128);
    goto LAB_1800a9d6f;
  case 8:
    ch_2 = func_0x18009f040(param_2,0xffffffffffffffff);
    if (ch_2 == '\0') goto LAB_1800a994d;
    iVal_3 = func_0x1800a79a0(lVal_10);
    *(int *)(param_1 + 0x40) = iVal_3;
    if (iVal_3 != 10) {
      local_128 = ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
                  ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_;
      local_120 = (uint64_t)(local_138._8_4_ & 0x1f);
      uVal_7 = func_0x18009e3e0(local_148,&local_128,1);
      uVal_5 = (uint)uVal_7 & 0x1f;
      uVal_9 = (uint64_t)uVal_5 + 1;
      uVal_6 = uVal_9 >> 5;
      uVal_11 = (uint)uVal_9 & 0x1f;
      if (((uint64_t)(uVal_5 ^ uVal_11) | uVal_6 * 4) != 0) {
        pU64_8 = (uint *)(((int64_t)uVal_7 >> 0x3f & 0xe000000000000000U) +
                         (uVal_7 >> 5) * 4 + local_148._0_8_);
        uVal_5 = -1 << (sbyte)uVal_5;
        ch_2 = (char)uVal_11;
        if (uVal_6 == 0) {
          uVal_5 = uVal_5 << (-ch_2 & 0x1fU);
        }
        else {
          *pU64_8 = *pU64_8 | uVal_5;
          local_150 = pU64_8;
          func_0x1806ab010(pU64_8 + 1,CONCAT71((uint7)(uint3)(uVal_5 >> 8),0xff));
          if ((uVal_9 & 0x1f) == 0) goto LAB_1800a967c;
          pU64_8 = local_150 + uVal_6;
          uVal_5 = 0xffffffff;
        }
        *pU64_8 = *pU64_8 | uVal_5 >> (-ch_2 & 0x1fU);
      }
LAB_1800a967c:
      unaff_R14 = 0;
      goto LAB_1800a91c0;
    }
    ch_2 = func_0x18009f310(param_2);
LAB_1800a92c8:
    if (ch_2 == '\0') goto LAB_1800a994d;
    break;
  case 9:
    ch_2 = func_0x18009e7c0(param_2,0xffffffffffffffff);
    if (ch_2 == '\0') goto LAB_1800a994d;
    iVal_3 = func_0x1800a79a0(lVal_10);
    *(int *)(param_1 + 0x40) = iVal_3;
    if (iVal_3 == 0xb) {
      ch_2 = func_0x18009ea90(param_2);
      goto LAB_1800a92c8;
    }
    if (iVal_3 != 4) {
      func_0x180001060(&local_88,"object key");
      func_0x18009c3b0(param_1,&local_c8,4,&local_88);
      local_d8 = *(uint64_t *)(param_1 + 0x78);
      local_e8 = *(int64_t *)(param_1 + 0x68);
      uStack_e0 = *(uint64_t *)(param_1 + 0x70);
      func_0x18009bf90(&local_128,0x65,&local_e8,&local_c8,0);
      func_0x18009ca10(lVal_10,local_68);
      uVal_5 = func_0x18009bf20(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_128);
LAB_1800a9d6f:
      unaff_R14 = (uint64_t)uVal_5;
      func_0x180001e70(local_68);
      func_0x18009cbb0(&local_128);
      func_0x180001e70(&local_c8);
      func_0x180001e70(&local_88);
      goto joined_r0x0001800a9da3;
    }
    ch_2 = func_0x18009ed70(param_2,lVal_12);
    if (ch_2 == '\0') goto LAB_1800a994d;
    iVal_3 = func_0x1800a79a0(lVal_10);
    *(int *)(param_1 + 0x40) = iVal_3;
    if (iVal_3 != 0xc) {
      func_0x180001060(&local_88,"object separator");
      func_0x18009c3b0(param_1,&local_c8,0xc,&local_88);
      local_d8 = *(uint64_t *)(param_1 + 0x78);
      local_e8 = *(int64_t *)(param_1 + 0x68);
      uStack_e0 = *(uint64_t *)(param_1 + 0x70);
      func_0x18009bf90(&local_128,0x65,&local_e8,&local_c8,0);
      func_0x18009ca10(lVal_10,local_68);
      uVal_5 = func_0x18009bf20(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_128);
      goto LAB_1800a9d6f;
    }
    local_128 = ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
                ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_;
    local_120 = (uint64_t)(local_138._8_4_ & 0x1f);
    uVal_7 = func_0x18009e3e0(local_148,&local_128,1);
    uVal_5 = (uint)uVal_7 & 0x1f;
    uVal_9 = (uint64_t)uVal_5 + 1;
    uVal_6 = uVal_9 >> 5;
    uVal_11 = (uint)uVal_9 & 0x1f;
    if (((uint64_t)(uVal_5 ^ uVal_11) | uVal_6 * 4) != 0) {
      pU64_8 = (uint *)(((int64_t)uVal_7 >> 0x3f & 0xe000000000000000U) +
                       (uVal_7 >> 5) * 4 + local_148._0_8_);
      uVal_5 = ~(-1 << (sbyte)uVal_5);
      ch_2 = (char)uVal_11;
      if (uVal_6 == 0) {
        uVal_5 = ~(0xffffffffU >> (-ch_2 & 0x1fU)) | uVal_5;
      }
      else {
        *pU64_8 = *pU64_8 & uVal_5;
        local_150 = pU64_8;
        func_0x1806ab010(pU64_8 + 1,0);
        if ((uVal_9 & 0x1f) == 0) goto LAB_1800a96bf;
        pU64_8 = local_150 + uVal_6;
        uVal_5 = ~(0xffffffffU >> (-ch_2 & 0x1fU));
      }
      *pU64_8 = *pU64_8 & uVal_5;
    }
LAB_1800a96bf:
    unaff_R14 = 0;
    uVal_4 = func_0x1800a79a0(lVal_10);
    *(uint32_t *)(param_1 + 0x40) = uVal_4;
    goto LAB_1800a91c0;
  default:
    goto switchD_1800a91d6_caseD_a;
  case 0xe:
    local_58 = 5;
    local_50 = 0xf;
    local_68._5_11_ = SUB1611((uint8_t  [16])0x0,5);
    local_68._0_5_ = 0x65756c6176;
    func_0x18009c3b0(param_1,&local_88,0,local_68);
    local_158 = *(uint64_t *)(param_1 + 0x78);
    local_168 = *(uint64_t *)(param_1 + 0x68);
    uStack_160 = *(uint64_t *)(param_1 + 0x70);
    func_0x18009bf90(&local_c8,0x65,&local_168,&local_88,0);
    func_0x18009ca10(lVal_10,&local_e8);
    *(uint8_t *)(param_2 + 0xd) = 1;
    if (*(char *)(param_2 + 0x16) != '\x01') goto LAB_1800a983b;
    param_2 = &local_128;
    func_0x1800a3150(param_2,&local_c8);
    func_0x18067a120(param_2,&DAT_180768d30);
    goto switchD_1800a91d6_caseD_a;
  }
  do {
    unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),local_138._8_8_ == 0);
    if (local_138._8_8_ == 0) goto LAB_1800a9950;
    uVal_9 = (uint64_t)(local_138._8_4_ & 0x1f);
    uVal_6 = uVal_9 - 1;
    if ((*(uint *)(((uint64_t)(uVal_9 != 0) << 0x3d) +
                   ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
                   ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_ + (uVal_6 >> 5) * 4 +
                  -0x2000000000000000) >> ((uint)uVal_6 & 0x1f) & 1) == 0) {
      iVal_3 = func_0x1800a79a0(lVal_10);
      *(int *)(param_1 + 0x40) = iVal_3;
      if (iVal_3 == 0xd) {
        iVal_3 = func_0x1800a79a0(lVal_10);
        *(int *)(param_1 + 0x40) = iVal_3;
        if (iVal_3 != 4) {
          func_0x180001060(&local_88,"object key");
          func_0x18009c3b0(param_1,&local_c8,4,&local_88);
          local_d8 = *(uint64_t *)(param_1 + 0x78);
          local_e8 = *(int64_t *)(param_1 + 0x68);
          uStack_e0 = *(uint64_t *)(param_1 + 0x70);
          func_0x18009bf90(&local_128,0x65,&local_e8,&local_c8,0);
          func_0x18009ca10(lVal_10,local_68);
          uVal_5 = func_0x18009bf20(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_128);
          goto LAB_1800a9d6f;
        }
        ch_2 = func_0x18009ed70(param_2,lVal_12);
        if (ch_2 == '\0') goto LAB_1800a994d;
        iVal_3 = func_0x1800a79a0(lVal_10);
        *(int *)(param_1 + 0x40) = iVal_3;
        if (iVal_3 != 0xc) {
          func_0x180001060(&local_88,"object separator");
          func_0x18009c3b0(param_1,&local_c8,0xc,&local_88);
          local_d8 = *(uint64_t *)(param_1 + 0x78);
          local_e8 = *(int64_t *)(param_1 + 0x68);
          uStack_e0 = *(uint64_t *)(param_1 + 0x70);
          func_0x18009bf90(&local_128,0x65,&local_e8,&local_c8,0);
          func_0x18009ca10(lVal_10,local_68);
          uVal_5 = func_0x18009bf20(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_128);
          goto LAB_1800a9d6f;
        }
        uVal_4 = func_0x1800a79a0(lVal_10);
        *(uint32_t *)(param_1 + 0x40) = uVal_4;
        goto LAB_1800a91c0;
      }
      if (iVal_3 != 0xb) {
        func_0x180001060(&local_88,"object");
        func_0x18009c3b0(param_1,&local_c8,0xb,&local_88);
        local_d8 = *(uint64_t *)(param_1 + 0x78);
        local_e8 = *(int64_t *)(param_1 + 0x68);
        uStack_e0 = *(uint64_t *)(param_1 + 0x70);
        func_0x18009bf90(&local_128,0x65,&local_e8,&local_c8,0);
        func_0x18009ca10(lVal_10,local_68);
        uVal_5 = func_0x18009bf20(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_128);
        goto LAB_1800a9d6f;
      }
      ch_2 = func_0x18009ea90(param_2);
    }
    else {
      iVal_3 = func_0x1800a79a0(lVal_10);
      *(int *)(param_1 + 0x40) = iVal_3;
      if (iVal_3 == 0xd) break;
      if (iVal_3 != 10) {
        func_0x180001060(&local_88,"array");
        func_0x18009c3b0(param_1,&local_c8,10,&local_88);
        local_d8 = *(uint64_t *)(param_1 + 0x78);
        local_e8 = *(int64_t *)(param_1 + 0x68);
        uStack_e0 = *(uint64_t *)(param_1 + 0x70);
        func_0x18009bf90(&local_128,0x65,&local_e8,&local_c8,0);
        func_0x18009ca10(lVal_10,local_68);
        uVal_5 = func_0x18009bf20(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_128);
        goto LAB_1800a9d6f;
      }
      ch_2 = func_0x18009f310(param_2);
    }
    if (ch_2 == '\0') goto LAB_1800a9950;
    uVal_9 = (uint64_t)(local_138._8_4_ & 0x1f);
    uVal_6 = uVal_9 - 1;
    local_128 = ((uint64_t)(uVal_9 != 0) << 0x3d) + -0x2000000000000000 +
                ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
                ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_ + (uVal_6 >> 5) * 4;
    local_120 = (uint64_t)((uint)uVal_6 & 0x1f);
    func_0x1800a2b50(local_148,&local_c8,&local_128);
  } while( true );
  uVal_4 = func_0x1800a79a0(lVal_10);
  *(uint32_t *)(param_1 + 0x40) = uVal_4;
  goto LAB_1800a91c0;
switchD_1800a91d6_caseD_a:
  local_58 = 5;
  local_50 = 0xf;
  local_68._5_11_ = SUB1611((uint8_t  [16])0x0,5);
  local_68._0_5_ = 0x65756c6176;
  func_0x18009c3b0(param_1,&local_88,0x10,local_68);
  local_158 = *(uint64_t *)(param_1 + 0x78);
  local_168 = *(uint64_t *)(param_1 + 0x68);
  uStack_160 = *(uint64_t *)(param_1 + 0x70);
  func_0x18009bf90(&local_c8,0x65,&local_168,&local_88,0);
  func_0x18009ca10(lVal_10,&local_e8);
  *(uint8_t *)(param_2 + 0xd) = 1;
  if (*(char *)(param_2 + 0x16) == '\x01') {
    func_0x1800a3150(&local_128,&local_c8);
    func_0x18067a120(&local_128,&DAT_180768d30);
    fnPtr_1 = (func_ptr_t )swi(3);
    uVal_9 = (*fnPtr_1)();
    return uVal_9;
  }
LAB_1800a983b:
  if (0xf < local_d0) {
    uVal_9 = local_d0 + 1;
    lVal_10 = local_e8;
    if (0xfff < uVal_9) {
      lVal_10 = *(int64_t *)(local_e8 + -8);
      if (0x1f < (uint64_t)((local_e8 + -8) - lVal_10)) goto LAB_1800a9dae;
      uVal_9 = local_d0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_10,uVal_9);
  }
  local_c8 = &PTR_LAB_1806aff10;
  local_a8 = std::exception::vftable;
  func_0x18067b490(local_a0);
  local_c8 = std::exception::vftable;
  func_0x18067b490(local_c0);
  if (0xf < local_70) {
    lVal_12 = CONCAT71(uStack_87,local_88);
    uVal_9 = local_70 + 1;
    lVal_10 = lVal_12;
    if (0xfff < uVal_9) {
      lVal_10 = *(int64_t *)(lVal_12 + -8);
      if (0x1f < (uint64_t)((lVal_12 + -8) - lVal_10)) goto LAB_1800a9dae;
      uVal_9 = local_70 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_10,uVal_9);
  }
  local_78 = 0;
  local_70 = 0xf;
  local_88 = 0;
  if (0xf < local_50) {
    uVal_9 = local_50 + 1;
    lVal_10 = local_68._0_8_;
    if (0xfff < uVal_9) {
      lVal_10 = *(int64_t *)(local_68._0_8_ + -8);
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_10)) goto LAB_1800a9dae;
      uVal_9 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_10,uVal_9);
  }
LAB_1800a994d:
  unaff_R14 = 0;
LAB_1800a9950:
joined_r0x0001800a9da3:
  if (local_148._0_8_ != 0) {
    uVal_9 = local_138._0_8_ - local_148._0_8_;
    lVal_10 = local_148._0_8_;
    if (0xfff < uVal_9) {
      lVal_10 = *(int64_t *)(local_148._0_8_ + -8);
      if (0x1f < (uint64_t)((local_148._0_8_ + -8) - lVal_10)) {
LAB_1800a9dae:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_9 = uVal_9 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_10,uVal_9);
  }
  return unaff_R14 & 0xffffffff;
}

// Unwind@1800a9de0
void Unwind_1800a9de0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800a9e20
void Unwind_1800a9e20(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@1800a9e60
void Unwind_1800a9e60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1800a9ea0
void Unwind_1800a9ea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800a9ee0
void Unwind_1800a9ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800a9f20
void Unwind_1800a9f20(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@1800a9f60
void Unwind_1800a9f60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1800a9fa0
void Unwind_1800a9fa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800a9fe0
void Unwind_1800a9fe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800aa020
void Unwind_1800aa020(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@1800aa060
void Unwind_1800aa060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1800aa0a0
void Unwind_1800aa0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800aa0e0
void Unwind_1800aa0e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1800aa120
void Unwind_1800aa120(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xd0);
  return;
}

// Unwind@1800aa160
void Unwind_1800aa160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800aa1a0
void Unwind_1800aa1a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800aa1e0
void Unwind_1800aa1e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1800aa220
void Unwind_1800aa220(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xd0);
  return;
}

// Unwind@1800aa260
void Unwind_1800aa260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800aa2a0
void Unwind_1800aa2a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800aa2e0
void Unwind_1800aa2e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800aa320
void Unwind_1800aa320(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@1800aa360
void Unwind_1800aa360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1800aa3a0
void Unwind_1800aa3a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800aa3e0
void Unwind_1800aa3e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800aa420
void Unwind_1800aa420(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@1800aa460
void Unwind_1800aa460(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1800aa4a0
void Unwind_1800aa4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800aa4e0
void Unwind_1800aa4e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800aa520
void Unwind_1800aa520(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@1800aa560
void Unwind_1800aa560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1800aa5a0
void Unwind_1800aa5a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800aa5e0
void Unwind_1800aa5e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800aa620
void Unwind_1800aa620(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@1800aa660
void Unwind_1800aa660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1800aa6a0
void Unwind_1800aa6a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800aa6e0
void Unwind_1800aa6e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x50);
  return;
}

// func_0x1800aa720
uint64_t func_0x1800aa720(int64_t param_1,uint64_t *param_2)
{
  uint64_t *pU64_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int iVal_4;
  uint32_t uVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  uint uVal_11;
  char ch_12;
  uint *pU64_13;
  uint64_t local_168;
  uint64_t uStack_160;
  uint64_t local_158;
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  uint64_t local_128;
  uint8_t local_120 [24];
  uint8_t **local_108;
  uint8_t local_100 [24];
  uint64_t local_e8;
  uint64_t local_e0;
  uint64_t local_a8;
  uint64_t uStack_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  undefined7 uStack_87;
  uint64_t local_78;
  uint64_t local_70;
  uint8_t local_68 [16];
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_138 = (uint8_t  [16])0x0;
  local_148 = (uint8_t  [16])0x0;
  lVal_9 = param_1 + 0x48;
LAB_1800aa780:
  switch(*(uint32_t *)(param_1 + 0x40)) {
  case 1:
    local_e8 = CONCAT71(local_e8._1_7_,1);
    func_0x1800a4330(param_2,&local_e8);
    break;
  case 2:
    local_e8 = (uint64_t)local_e8._1_7_ << 8;
    func_0x1800a4330(param_2,&local_e8);
    break;
  case 3:
    local_e8 = 0;
    func_0x1800a4700(param_2,&local_e8);
    break;
  case 4:
    func_0x1800a4e50(param_2,param_1 + 0x98);
    break;
  case 5:
    local_e8 = *(uint64_t *)(param_1 + 200);
    func_0x1800a5270(param_2,&local_e8);
    break;
  case 6:
    local_e8 = *(uint64_t *)(param_1 + 0xc0);
    func_0x1800a4a90(param_2,&local_e8);
    break;
  case 7:
    if ((*(uint64_t *)(param_1 + 0xd0) & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      local_e8 = *(uint64_t *)(param_1 + 0xd0);
      func_0x1800a3f60(param_2,&local_e8);
      break;
    }
    local_a8 = CONCAT71(local_a8._1_7_,0x27);
    func_0x18009ca10(lVal_9,&local_88);
    func_0x18009f8f0(&local_128,"number overflow parsing \'",&local_88,&local_a8);
    func_0x18009f590(&local_e8,0x196,&local_128,0);
    func_0x18009ca10(lVal_9,local_68);
    uVal_6 = func_0x1800a3ab0(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_e8);
    goto LAB_1800ab34b;
  case 8:
    local_128 = (uint8_t **)CONCAT71(local_128._1_7_,2);
    local_e8 = func_0x1800a3b20(param_2,&local_128);
    pU64_1 = (uint64_t *)param_2[2];
    if (pU64_1 == (uint64_t *)param_2[3]) {
      func_0x18007f260(param_2 + 1,pU64_1,&local_e8);
    }
    else {
      *pU64_1 = local_e8;
      param_2[2] = param_2[2] + 8;
    }
    iVal_4 = func_0x1800a79a0(lVal_9);
    *(int *)(param_1 + 0x40) = iVal_4;
    if (iVal_4 != 10) {
      local_e8 = ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
                 ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_;
      local_e0 = (uint64_t)(local_138._8_4_ & 0x1f);
      uVal_7 = func_0x18009e3e0(local_148,&local_e8,1);
      uVal_6 = (uint)uVal_7 & 0x1f;
      uVal_8 = (uint64_t)uVal_6 + 1;
      uVal_10 = uVal_8 >> 5;
      uVal_11 = (uint)uVal_8 & 0x1f;
      if (((uint64_t)(uVal_6 ^ uVal_11) | uVal_10 * 4) != 0) {
        pU64_13 = (uint *)(((int64_t)uVal_7 >> 0x3f & 0xe000000000000000U) +
                          (uVal_7 >> 5) * 4 + local_148._0_8_);
        uVal_6 = -1 << (sbyte)uVal_6;
        ch_12 = (char)uVal_11;
        if (uVal_10 == 0) {
          uVal_6 = uVal_6 << (-ch_12 & 0x1fU);
        }
        else {
          *pU64_13 = *pU64_13 | uVal_6;
          func_0x1806ab010(pU64_13 + 1,CONCAT71((uint7)(uint3)(uVal_6 >> 8),0xff));
          if ((uVal_8 & 0x1f) == 0) goto LAB_1800aa780;
          pU64_13 = pU64_13 + uVal_10;
          uVal_6 = 0xffffffff;
        }
        *pU64_13 = *pU64_13 | uVal_6 >> (-ch_12 & 0x1fU);
      }
      goto LAB_1800aa780;
    }
LAB_1800aa9a9:
    param_2[2] = param_2[2] + -8;
    break;
  case 9:
    local_128 = (uint8_t **)CONCAT71(local_128._1_7_,1);
    local_e8 = func_0x1800a3b20(param_2,&local_128);
    pU64_1 = (uint64_t *)param_2[2];
    if (pU64_1 == (uint64_t *)param_2[3]) {
      func_0x18007f260(param_2 + 1,pU64_1,&local_e8);
    }
    else {
      *pU64_1 = local_e8;
      param_2[2] = param_2[2] + 8;
    }
    iVal_4 = func_0x1800a79a0(lVal_9);
    *(int *)(param_1 + 0x40) = iVal_4;
    if (iVal_4 == 0xb) goto LAB_1800aa9a9;
    if (iVal_4 != 4) {
      func_0x180001060(&local_88,"object key");
      func_0x18009c3b0(param_1,&local_128,4,&local_88);
      local_98 = *(uint64_t *)(param_1 + 0x78);
      local_a8 = *(int64_t *)(param_1 + 0x68);
      uStack_a0 = *(uint64_t *)(param_1 + 0x70);
      func_0x18009bf90(&local_e8,0x65,&local_a8,&local_128,0);
      func_0x18009ca10(lVal_9,local_68);
      uVal_6 = func_0x18009e310(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_e8);
LAB_1800ab34b:
      uVal_8 = (uint64_t)uVal_6;
      func_0x180001e70(local_68);
      func_0x18009cbb0(&local_e8);
      func_0x180001e70(&local_128);
      func_0x180001e70(&local_88);
      goto LAB_1800aaca1;
    }
    func_0x1800a11f0(*(uint64_t *)(*(int64_t *)(param_2[2] + -8) + 8),&local_e8,param_1 + 0x98);
    param_2[4] = local_e8 + 0x40;
    iVal_4 = func_0x1800a79a0(lVal_9);
    *(int *)(param_1 + 0x40) = iVal_4;
    if (iVal_4 != 0xc) {
      func_0x180001060(&local_88,"object separator");
      func_0x18009c3b0(param_1,&local_128,0xc,&local_88);
      local_98 = *(uint64_t *)(param_1 + 0x78);
      local_a8 = *(int64_t *)(param_1 + 0x68);
      uStack_a0 = *(uint64_t *)(param_1 + 0x70);
      func_0x18009bf90(&local_e8,0x65,&local_a8,&local_128,0);
      func_0x18009ca10(lVal_9,local_68);
      uVal_6 = func_0x18009e310(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_e8);
      goto LAB_1800ab34b;
    }
    local_e8 = ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
               ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_;
    local_e0 = (uint64_t)(local_138._8_4_ & 0x1f);
    uVal_7 = func_0x18009e3e0(local_148,&local_e8,1);
    uVal_6 = (uint)uVal_7 & 0x1f;
    uVal_8 = (uint64_t)uVal_6 + 1;
    uVal_10 = uVal_8 >> 5;
    uVal_11 = (uint)uVal_8 & 0x1f;
    if (((uint64_t)(uVal_6 ^ uVal_11) | uVal_10 * 4) != 0) {
      pU64_13 = (uint *)(((int64_t)uVal_7 >> 0x3f & 0xe000000000000000U) +
                        (uVal_7 >> 5) * 4 + local_148._0_8_);
      uVal_6 = ~(-1 << (sbyte)uVal_6);
      ch_12 = (char)uVal_11;
      if (uVal_10 == 0) {
        uVal_6 = ~(0xffffffffU >> (-ch_12 & 0x1fU)) | uVal_6;
      }
      else {
        *pU64_13 = *pU64_13 & uVal_6;
        func_0x1806ab010(pU64_13 + 1,0);
        if ((uVal_8 & 0x1f) == 0) goto LAB_1800aac7b;
        pU64_13 = pU64_13 + uVal_10;
        uVal_6 = ~(0xffffffffU >> (-ch_12 & 0x1fU));
      }
      *pU64_13 = *pU64_13 & uVal_6;
    }
LAB_1800aac7b:
    uVal_5 = func_0x1800a79a0(lVal_9);
    *(uint32_t *)(param_1 + 0x40) = uVal_5;
    goto LAB_1800aa780;
  default:
    goto switchD_1800aa795_caseD_a;
  case 0xe:
    local_58 = 5;
    local_50 = 0xf;
    local_68._5_11_ = SUB1611((uint8_t  [16])0x0,5);
    local_68._0_5_ = 0x65756c6176;
    func_0x18009c3b0(param_1,&local_88,0,local_68);
    local_158 = *(uint64_t *)(param_1 + 0x78);
    local_168 = *(uint64_t *)(param_1 + 0x68);
    uStack_160 = *(uint64_t *)(param_1 + 0x70);
    func_0x18009bf90(&local_128,0x65,&local_168,&local_88,0);
    func_0x18009ca10(lVal_9,&local_a8);
    *(uint8_t *)(param_2 + 5) = 1;
    if (*(char *)((int64_t)param_2 + 0x29) != '\x01') goto LAB_1800aae4f;
    param_2 = &local_e8;
    func_0x1800a3150(param_2,&local_128);
    func_0x18067a120(param_2,&DAT_180768d30);
    goto switchD_1800aa795_caseD_a;
  }
  do {
    if (local_138._8_8_ == 0) {
      uVal_8 = CONCAT71((int7)((uint64_t)param_2 >> 8),1);
      goto LAB_1800aaca1;
    }
    uVal_8 = (uint64_t)(local_138._8_4_ & 0x1f);
    uVal_10 = uVal_8 - 1;
    if ((*(uint *)(((uint64_t)(uVal_8 != 0) << 0x3d) +
                   ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
                   ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_ + (uVal_10 >> 5) * 4 +
                  -0x2000000000000000) >> ((uint)uVal_10 & 0x1f) & 1) == 0) {
      iVal_4 = func_0x1800a79a0(lVal_9);
      *(int *)(param_1 + 0x40) = iVal_4;
      if (iVal_4 == 0xd) {
        iVal_4 = func_0x1800a79a0(lVal_9);
        *(int *)(param_1 + 0x40) = iVal_4;
        if (iVal_4 != 4) {
          func_0x180001060(&local_88,"object key");
          func_0x18009c3b0(param_1,&local_128,4,&local_88);
          local_98 = *(uint64_t *)(param_1 + 0x78);
          local_a8 = *(int64_t *)(param_1 + 0x68);
          uStack_a0 = *(uint64_t *)(param_1 + 0x70);
          func_0x18009bf90(&local_e8,0x65,&local_a8,&local_128,0);
          func_0x18009ca10(lVal_9,local_68);
          uVal_6 = func_0x18009e310(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_e8);
          goto LAB_1800ab34b;
        }
        func_0x1800a11f0(*(uint64_t *)(*(int64_t *)(param_2[2] + -8) + 8),&local_e8);
        param_2[4] = local_e8 + 0x40;
        iVal_4 = func_0x1800a79a0(lVal_9);
        *(int *)(param_1 + 0x40) = iVal_4;
        if (iVal_4 == 0xc) {
          uVal_5 = func_0x1800a79a0(lVal_9);
          *(uint32_t *)(param_1 + 0x40) = uVal_5;
          goto LAB_1800aa780;
        }
        func_0x180001060(&local_88,"object separator");
        func_0x18009c3b0(param_1,&local_128,0xc,&local_88);
        local_98 = *(uint64_t *)(param_1 + 0x78);
        local_a8 = *(int64_t *)(param_1 + 0x68);
        uStack_a0 = *(uint64_t *)(param_1 + 0x70);
        func_0x18009bf90(&local_e8,0x65,&local_a8,&local_128,0);
        func_0x18009ca10(lVal_9,local_68);
        uVal_6 = func_0x18009e310(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_e8);
        goto LAB_1800ab34b;
      }
      if (iVal_4 != 0xb) {
        func_0x180001060(&local_88,"object");
        func_0x18009c3b0(param_1,&local_128,0xb,&local_88);
        local_98 = *(uint64_t *)(param_1 + 0x78);
        local_a8 = *(int64_t *)(param_1 + 0x68);
        uStack_a0 = *(uint64_t *)(param_1 + 0x70);
        func_0x18009bf90(&local_e8,0x65,&local_a8,&local_128,0);
        func_0x18009ca10(lVal_9,local_68);
        uVal_6 = func_0x18009e310(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_e8);
        goto LAB_1800ab34b;
      }
    }
    else {
      iVal_4 = func_0x1800a79a0(lVal_9);
      *(int *)(param_1 + 0x40) = iVal_4;
      if (iVal_4 == 0xd) break;
      if (iVal_4 != 10) {
        func_0x180001060(&local_88,"array");
        func_0x18009c3b0(param_1,&local_128,10,&local_88);
        local_98 = *(uint64_t *)(param_1 + 0x78);
        local_a8 = *(int64_t *)(param_1 + 0x68);
        uStack_a0 = *(uint64_t *)(param_1 + 0x70);
        func_0x18009bf90(&local_e8,0x65,&local_a8,&local_128,0);
        func_0x18009ca10(lVal_9,local_68);
        uVal_6 = func_0x18009e310(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_e8);
        goto LAB_1800ab34b;
      }
    }
    param_2[2] = param_2[2] + -8;
    uVal_8 = (uint64_t)(local_138._8_4_ & 0x1f);
    uVal_10 = uVal_8 - 1;
    local_e8 = ((uint64_t)(uVal_8 != 0) << 0x3d) + -0x2000000000000000 +
               ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
               ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_ + (uVal_10 >> 5) * 4;
    local_e0 = (uint64_t)((uint)uVal_10 & 0x1f);
    func_0x1800a2b50(local_148,&local_128,&local_e8);
  } while( true );
  uVal_5 = func_0x1800a79a0(lVal_9);
  *(uint32_t *)(param_1 + 0x40) = uVal_5;
  goto LAB_1800aa780;
switchD_1800aa795_caseD_a:
  local_58 = 5;
  local_50 = 0xf;
  local_68._5_11_ = SUB1611((uint8_t  [16])0x0,5);
  local_68._0_5_ = 0x65756c6176;
  func_0x18009c3b0(param_1,&local_88,0x10,local_68);
  local_158 = *(uint64_t *)(param_1 + 0x78);
  local_168 = *(uint64_t *)(param_1 + 0x68);
  uStack_160 = *(uint64_t *)(param_1 + 0x70);
  func_0x18009bf90(&local_128,0x65,&local_168,&local_88,0);
  func_0x18009ca10(lVal_9,&local_a8);
  *(uint8_t *)(param_2 + 5) = 1;
  if (*(char *)((int64_t)param_2 + 0x29) == '\x01') {
    func_0x1800a3150(&local_e8,&local_128);
    func_0x18067a120(&local_e8,&DAT_180768d30);
    fnPtr_2 = (func_ptr_t )swi(3);
    uVal_8 = (*fnPtr_2)();
    return uVal_8;
  }
LAB_1800aae4f:
  if (0xf < local_90) {
    uVal_8 = local_90 + 1;
    lVal_9 = local_a8;
    if (0xfff < uVal_8) {
      lVal_9 = *(int64_t *)(local_a8 + -8);
      if (0x1f < (uint64_t)((local_a8 + -8) - lVal_9)) goto LAB_1800ab37c;
      uVal_8 = local_90 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_9,uVal_8);
  }
  local_128 = &PTR_LAB_1806aff10;
  local_108 = std::exception::vftable;
  func_0x18067b490(local_100);
  local_128 = std::exception::vftable;
  func_0x18067b490(local_120);
  if (0xf < local_70) {
    lVal_3 = CONCAT71(uStack_87,local_88);
    uVal_8 = local_70 + 1;
    lVal_9 = lVal_3;
    if (0xfff < uVal_8) {
      lVal_9 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_9)) goto LAB_1800ab37c;
      uVal_8 = local_70 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_9,uVal_8);
  }
  local_78 = 0;
  local_70 = 0xf;
  local_88 = 0;
  if (0xf < local_50) {
    uVal_8 = local_50 + 1;
    lVal_9 = local_68._0_8_;
    if (0xfff < uVal_8) {
      lVal_9 = *(int64_t *)(local_68._0_8_ + -8);
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_9)) goto LAB_1800ab37c;
      uVal_8 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_9,uVal_8);
  }
  uVal_8 = 0;
LAB_1800aaca1:
  if (local_148._0_8_ != 0) {
    uVal_10 = local_138._0_8_ - local_148._0_8_;
    lVal_9 = local_148._0_8_;
    if (0xfff < uVal_10) {
      lVal_9 = *(int64_t *)(local_148._0_8_ + -8);
      if (0x1f < (uint64_t)((local_148._0_8_ + -8) - lVal_9)) {
LAB_1800ab37c:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_10 = uVal_10 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_9,uVal_10);
  }
  return uVal_8 & 0xffffffff;
}

// Unwind@1800ab3a0
void Unwind_1800ab3a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800ab3e0
void Unwind_1800ab3e0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@1800ab420
void Unwind_1800ab420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800ab460
void Unwind_1800ab460(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800ab4a0
void Unwind_1800ab4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800ab4e0
void Unwind_1800ab4e0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@1800ab520
void Unwind_1800ab520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800ab560
void Unwind_1800ab560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800ab5a0
void Unwind_1800ab5a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800ab5e0
void Unwind_1800ab5e0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@1800ab620
void Unwind_1800ab620(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800ab660
void Unwind_1800ab660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800ab6a0
void Unwind_1800ab6a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1800ab6e0
void Unwind_1800ab6e0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@1800ab720
void Unwind_1800ab720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800ab760
void Unwind_1800ab760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800ab7a0
void Unwind_1800ab7a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1800ab7e0
void Unwind_1800ab7e0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@1800ab820
void Unwind_1800ab820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800ab860
void Unwind_1800ab860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800ab8a0
void Unwind_1800ab8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800ab8e0
void Unwind_1800ab8e0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@1800ab920
void Unwind_1800ab920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800ab960
void Unwind_1800ab960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800ab9a0
void Unwind_1800ab9a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800ab9e0
void Unwind_1800ab9e0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@1800aba20
void Unwind_1800aba20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800aba60
void Unwind_1800aba60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800abaa0
void Unwind_1800abaa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800abae0
void Unwind_1800abae0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@1800abb20
void Unwind_1800abb20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800abb60
void Unwind_1800abb60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800abba0
void Unwind_1800abba0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1800abbe0
void Unwind_1800abbe0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@1800abc20
void Unwind_1800abc20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800abc60
void Unwind_1800abc60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1800abca0
void Unwind_1800abca0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x50);
  return;
}

// func_0x1800abce0
int64_t * func_0x1800abce0(int64_t *param_1,int64_t *param_2,uint64_t *param_3)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  bool bFlag_14;
  uint8_t uVal_15;
  int iVal_16;
  int64_t lVal_17;
  int64_t *pLong_18;
  int64_t lVal_19;
  void *pVoid_20;
  uint64_t *pU64_21;
  uint uVal_22;
  uint64_t uVal_23;
  int64_t local_50;
  uint local_48;
  
  lVal_2 = *param_1;
  lVal_17 = *(int64_t *)(lVal_2 + 8);
  uVal_22 = 0;
  lVal_19 = lVal_2;
  if (*(char *)(lVal_17 + 0x19) == '\0') {
    pU64_21 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_21 = (uint64_t *)*param_3;
    }
    uVal_4 = param_3[2];
    lVal_3 = lVal_17;
    do {
      lVal_17 = lVal_3;
      if (*(uint64_t *)(lVal_17 + 0x38) < 0x10) {
        pVoid_20 = (void *)(lVal_17 + 0x20);
      }
      else {
        pVoid_20 = *(void **)(lVal_17 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_17 + 0x30);
      uVal_23 = uVal_5;
      if (uVal_4 < uVal_5) {
        uVal_23 = uVal_4;
      }
      iVal_16 = memcmp(pVoid_20,pU64_21,uVal_23);
      bFlag_14 = uVal_5 < uVal_4;
      if (iVal_16 != 0) {
        bFlag_14 = iVal_16 < 0;
      }
      if (bFlag_14 == false) {
        lVal_19 = lVal_17;
      }
      lVal_3 = *(int64_t *)(lVal_17 + (uint64_t)bFlag_14 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    uVal_22 = (uint)(bFlag_14 ^ 1);
    ch_1 = *(char *)(lVal_19 + 0x19);
  }
  else {
    ch_1 = *(char *)(lVal_2 + 0x19);
  }
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_19 + 0x38) < 0x10) {
      pVoid_20 = (void *)(lVal_19 + 0x20);
    }
    else {
      pVoid_20 = *(void **)(lVal_19 + 0x20);
    }
    uVal_4 = *(uint64_t *)(lVal_19 + 0x30);
    uVal_5 = param_3[2];
    pU64_21 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_21 = (uint64_t *)*param_3;
    }
    uVal_23 = uVal_5;
    if (uVal_4 < uVal_5) {
      uVal_23 = uVal_4;
    }
    iVal_16 = memcmp(pU64_21,pVoid_20,uVal_23);
    bFlag_14 = uVal_4 <= uVal_5;
    if (iVal_16 != 0) {
      bFlag_14 = -1 < iVal_16;
    }
    if (bFlag_14) {
      uVal_15 = 0;
      goto LAB_1800abe77;
    }
  }
  if (param_1[1] == 0x333333333333333) {
    func_0x1800a17e0();
    fnPtr_6 = (func_ptr_t )swi(3);
    pLong_18 = (int64_t *)(*fnPtr_6)();
    return pLong_18;
  }
  pLong_18 = (int64_t *)func_0x180672de0(0x50);
  uVal_7 = *(uint32_t *)param_3;
  uVal_8 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_9 = *(uint32_t *)(param_3 + 1);
  uVal_10 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_11 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_12 = *(uint32_t *)(param_3 + 3);
  uVal_13 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  *(uint32_t *)(pLong_18 + 6) = *(uint32_t *)(param_3 + 2);
  *(uint32_t *)((int64_t)pLong_18 + 0x34) = uVal_11;
  *(uint32_t *)(pLong_18 + 7) = uVal_12;
  *(uint32_t *)((int64_t)pLong_18 + 0x3c) = uVal_13;
  *(uint32_t *)(pLong_18 + 4) = uVal_7;
  *(uint32_t *)((int64_t)pLong_18 + 0x24) = uVal_8;
  *(uint32_t *)(pLong_18 + 5) = uVal_9;
  *(uint32_t *)((int64_t)pLong_18 + 0x2c) = uVal_10;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(uint8_t *)param_3 = 0;
  *(uint8_t *)(pLong_18 + 8) = 0;
  pLong_18[9] = 0;
  *pLong_18 = lVal_2;
  pLong_18[1] = lVal_2;
  pLong_18[2] = lVal_2;
  *(uint16_t *)(pLong_18 + 3) = 0;
  local_50 = lVal_17;
  local_48 = uVal_22;
  lVal_19 = func_0x1800a1550(param_1,&local_50,pLong_18);
  uVal_15 = 1;
LAB_1800abe77:
  *param_2 = lVal_19;
  *(uint8_t *)(param_2 + 1) = uVal_15;
  return param_2;
}

// func_0x1800abea0
void func_0x1800abea0(int64_t param_1)
{
  int64_t lVal_1;
  
  if (*(int64_t *)(param_1 + 0x28) != 0) {
    thunk_FUN_180695dd0(*(int64_t *)(param_1 + 0x28),8);
  }
  lVal_1 = *(int64_t *)(param_1 + 0x20);
  if (lVal_1 != 0) {
    func_0x1800abf30(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0x18);
  }
  if (*(int64_t *)(param_1 + 0x18) != 0) {
    thunk_FUN_180695dd0(*(int64_t *)(param_1 + 0x18),0x29);
  }
  lVal_1 = *(int64_t *)(param_1 + 0x10);
  if (lVal_1 != 0) {
    func_0x18008a760(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0x328);
    return;
  }
  return;
}

// func_0x1800abf30
void func_0x1800abf30(uint8_t (*param_1)[16])
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  
  pLong_6 = *(int64_t **)*param_1;
  if (pLong_6 != (int64_t *)0x0) {
    pLong_1 = *(int64_t **)(*param_1 + 8);
    if (pLong_6 == pLong_1) {
      uVal_5 = *(int64_t *)param_1[1] - (int64_t)pLong_6;
    }
    else {
      do {
        uVal_5 = pLong_6[7];
        if (0xf < uVal_5) {
          lVal_2 = pLong_6[4];
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800ac06f;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        pLong_6[6] = 0;
        pLong_6[7] = 0xf;
        *(uint8_t *)(pLong_6 + 4) = 0;
        uVal_5 = pLong_6[3];
        if (0xf < uVal_5) {
          lVal_2 = *pLong_6;
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800ac06f;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        pLong_6[2] = 0;
        pLong_6[3] = 0xf;
        *(uint8_t *)pLong_6 = 0;
        pLong_6 = pLong_6 + 9;
      } while (pLong_6 != pLong_1);
      pLong_6 = *(int64_t **)*param_1;
      uVal_5 = *(int64_t *)param_1[1] - (int64_t)pLong_6;
    }
    if (0xfff < uVal_5) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_6 + (-8 - (int64_t)(int64_t *)pLong_6[-1]))) {
LAB_1800ac06f:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      pLong_6 = (int64_t *)pLong_6[-1];
    }
    thunk_FUN_180695dd0(pLong_6,uVal_5);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x1800ac0b0
void func_0x1800ac0b0(int64_t param_1,uint64_t param_2)
{
  int64_t **ptr2_Long_1;
  int64_t **ptr2_Long_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  int64_t **ptr2_Long_5;
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
  lVal_12 = 0x3f;
  if (uVal_10 != 0) {
    for (; uVal_10 >> lVal_12 == 0; lVal_12 = lVal_12 + -1) {
    }
  }
  bFlag_9 = -((byte)lVal_12 ^ 0x3f);
  lVal_12 = 1L << (bFlag_9 & 0x3f);
  ptr2_Long_1 = *(int64_t ***)(param_1 + 8);
  func_0x180095b10(param_1 + 0x18,2L << (bFlag_9 & 0x3f),ptr2_Long_1);
  *(int64_t *)(param_1 + 0x30) = lVal_12 + -1;
  *(int64_t *)(param_1 + 0x38) = lVal_12;
  ptr2_Long_8 = (int64_t **)**(uint64_t **)(param_1 + 8);
LAB_1800ac129:
  do {
    while( true ) {
      while( true ) {
        if (ptr2_Long_8 == ptr2_Long_1) {
          return;
        }
        ptr2_Long_2 = (int64_t **)*ptr2_Long_8;
        pLong_3 = ptr2_Long_8[2];
        pLong_4 = ptr2_Long_8[3];
        lVal_12 = *(int64_t *)(param_1 + 0x18);
        lVal_11 = (((int64_t)pLong_4 * 0x1f1f1f1f ^ (uint64_t)pLong_3) &
                 *(uint64_t *)(param_1 + 0x30)) * 0x10;
        if (*(int64_t ***)(lVal_12 + lVal_11) != ptr2_Long_1) break;
        *(int64_t ***)(lVal_12 + lVal_11) = ptr2_Long_8;
        *(int64_t ***)(lVal_12 + 8 + lVal_11) = ptr2_Long_8;
        ptr2_Long_8 = ptr2_Long_2;
      }
      ptr2_Long_13 = *(int64_t ***)(lVal_12 + 8 + lVal_11);
      if ((pLong_3 != ptr2_Long_13[2]) || (pLong_4 != ptr2_Long_13[3])) break;
      ptr2_Long_13 = (int64_t **)*ptr2_Long_13;
      if (ptr2_Long_13 != ptr2_Long_8) {
        pLong_3 = ptr2_Long_8[1];
        *pLong_3 = (int64_t)ptr2_Long_2;
        ptr2_Long_5 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_5 = (int64_t *)ptr2_Long_13;
        pLong_4 = ptr2_Long_13[1];
        *pLong_4 = (int64_t)ptr2_Long_8;
        ptr2_Long_13[1] = (int64_t *)ptr2_Long_5;
        ptr2_Long_2[1] = pLong_3;
        ptr2_Long_8[1] = pLong_4;
      }
      *(int64_t ***)(lVal_12 + 8 + lVal_11) = ptr2_Long_8;
      ptr2_Long_8 = ptr2_Long_2;
    }
    do {
      if (*(int64_t ***)(lVal_12 + lVal_11) == ptr2_Long_13) {
        pLong_3 = ptr2_Long_8[1];
        *pLong_3 = (int64_t)ptr2_Long_2;
        ptr2_Long_5 = (int64_t **)ptr2_Long_2[1];
        *ptr2_Long_5 = (int64_t *)ptr2_Long_13;
        pLong_4 = ptr2_Long_13[1];
        *pLong_4 = (int64_t)ptr2_Long_8;
        ptr2_Long_13[1] = (int64_t *)ptr2_Long_5;
        ptr2_Long_2[1] = pLong_3;
        ptr2_Long_8[1] = pLong_4;
        *(int64_t ***)(lVal_12 + lVal_11) = ptr2_Long_8;
        ptr2_Long_8 = ptr2_Long_2;
        goto LAB_1800ac129;
      }
      ptr2_Long_13 = (int64_t **)ptr2_Long_13[1];
    } while ((pLong_3 != ptr2_Long_13[2]) || (pLong_4 != ptr2_Long_13[3]));
    pLong_3 = *ptr2_Long_13;
    pLong_4 = ptr2_Long_8[1];
    *pLong_4 = (int64_t)ptr2_Long_2;
    ptr2_Long_13 = (int64_t **)ptr2_Long_2[1];
    *ptr2_Long_13 = pLong_3;
    pLong_6 = (int64_t *)pLong_3[1];
    *pLong_6 = (int64_t)ptr2_Long_8;
    pLong_3[1] = (int64_t)ptr2_Long_13;
    ptr2_Long_2[1] = pLong_4;
    ptr2_Long_8[1] = pLong_6;
    ptr2_Long_8 = ptr2_Long_2;
  } while( true );
}

// func_0x1800ac220
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac220(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aef94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aef90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aef98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aef9c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xbf;
    param_1[1][1] = param_1[1][1] ^ 0x49;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800ac240
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac240(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aefa4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aefa0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aefa8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aefac;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x43;
    param_1[1][1] = param_1[1][1] ^ 0x13;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800ac260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac260(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aefb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aefb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aefb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aefbc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x7b;
    param_1[1][1] = param_1[1][1] ^ 99;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800ac280
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac280(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aefc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aefc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aefc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aefcc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xfbef85f1;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1800ac2a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac2a0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806aefd4;
    uVal_2 = param_1[2] ^ _UNK_1806aefd8;
    uVal_3 = param_1[3] ^ _UNK_1806aefdc;
    *param_1 = *param_1 ^ _DAT_1806aefd0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806aefe0,0);
  }
  return;
}

// func_0x1800ac2f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac2f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeff4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeff0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeff8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeffc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xc77b6759;
    param_1[1][4] = param_1[1][4] ^ 199;
    param_1[1][5] = param_1[1][5] ^ 0xbd;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1800ac320
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac320(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af004;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af000;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af008;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af00c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x5fd331b1;
    param_1[1][4] = ~param_1[1][4];
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1800ac350
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac350(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae304;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae300;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae308;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae30c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x5feda7c1;
    param_1[1][4] = param_1[1][4] ^ 0xa3;
    param_1[1][5] = param_1[1][5] ^ 0x29;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1800ac380
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac380(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af014;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af010;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af018;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af01c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xbd;
    param_1[1][1] = param_1[1][1] ^ 0x79;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800ac3a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac3a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af024;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af020;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af028;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af02c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 7;
    param_1[1][1] = param_1[1][1] ^ 0xab;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800ac3c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac3c0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806af034;
    uVal_2 = param_1[2] ^ _UNK_1806af038;
    uVal_3 = param_1[3] ^ _UNK_1806af03c;
    *param_1 = *param_1 ^ _DAT_1806af030;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806af040,0);
  }
  return;
}

// func_0x1800ac400
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac400(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806ae314;
    uVal_3 = param_1[2] ^ _UNK_1806ae318;
    uVal_4 = param_1[3] ^ _UNK_1806ae31c;
    *param_1 = *param_1 ^ _DAT_1806ae310;
    param_1[1] = uVal_2;
    param_1[2] = uVal_3;
    param_1[3] = uVal_4;
    uVal_2 = param_1[6];
    auArr_1 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)(uVal_2 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVal_2 >> 0x10),uVal_2)) >> 0x20),
                                                  (char)((ushort)*(uint16_t *)
                                                                  ((int64_t)param_1 + 0x1d) >> 8)),
                                              (char)(uVal_2 >> 8)),
                                     CONCAT11((char)*(uint16_t *)((int64_t)param_1 + 0x1d),
                                              (char)uVal_2))),_DAT_1806ae110);
    auArr_1._8_8_ = auArr_1._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(param_1 + 7) << 0x20;
    auArr_1 = pblendw(auArr_1,*(uint8_t (*)[16])(param_1 + 4),0xf);
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806ae330;
  }
  return;
}

// func_0x1800ac460
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac460(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806af05c;
  uVal_9 = _UNK_1806af058;
  uVal_8 = _UNK_1806af054;
  uVal_7 = _DAT_1806af050;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af054;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af050;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af058;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af05c;
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

// func_0x1800ac490
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac490(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806af064;
    uVal_2 = param_1[2] ^ _UNK_1806af068;
    uVal_3 = param_1[3] ^ _UNK_1806af06c;
    *param_1 = *param_1 ^ _DAT_1806af060;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xafc9b32fb3fd23a7;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806af070,0);
  }
  return;
}

// func_0x1800ac4e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac4e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af084;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af080;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af088;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af08c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x83af0533df55afe7;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xdf55afe7;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x33;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1800ac520
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac520(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af094;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af090;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af098;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af09c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x87e3c3e3cfe1adab;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xcfe1adab;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xe3;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xc3;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1800ac560
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac560(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af0a4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af0a0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af0a8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af0ac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x79e9a5d7e9ffe523;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xe9ffe523;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xd7;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x1800ac5a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac5a0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af0b4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af0b0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af0b8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af0bc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xcb93bf57cb393d5f;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xcb393d5f;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x1800ac5d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac5d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aef64;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aef60;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aef68;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aef6c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x9f97fbe36f2d0fbb;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x6f2d0fbb;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xe3;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xfb;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1800ac610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac610(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806af0c4;
    uVal_3 = param_1[2] ^ _UNK_1806af0c8;
    uVal_4 = param_1[3] ^ _UNK_1806af0cc;
    *param_1 = *param_1 ^ _DAT_1806af0c0;
    param_1[1] = uVal_2;
    param_1[2] = uVal_3;
    param_1[3] = uVal_4;
    uVal_2 = param_1[6];
    auArr_1 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)(uVal_2 
                                                  >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVal_2 >> 0x10),uVal_2)) >> 0x20),
                                                  (char)((ushort)*(uint16_t *)
                                                                  ((int64_t)param_1 + 0x1d) >> 8)),
                                              (char)(uVal_2 >> 8)),
                                     CONCAT11((char)*(uint16_t *)((int64_t)param_1 + 0x1d),
                                              (char)uVal_2))),_DAT_1806ae110);
    auArr_1._8_8_ = auArr_1._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(param_1 + 7) << 0x20;
    auArr_1 = pblendw(auArr_1,*(uint8_t (*)[16])(param_1 + 4),0xf);
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806af0d0;
  }
  return;
}

// func_0x1800ac670
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac670(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af0e4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af0e0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af0e8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af0ec;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x1f3fd56d15fbb583;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x15fbb583;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x6d;
    param_1[1][0xd] = param_1[1][0xd] ^ 0xd5;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x1800ac6b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac6b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af0f4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af0f0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af0f8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af0fc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x9799397b50199b9;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1800ac6e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac6e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af104;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af100;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af108;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af10c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x2b156f81b581bdc1;
    param_1[1][8] = param_1[1][8] ^ 0xc1;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1800ac710
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac710(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806af114;
    uVal_2 = param_1[2] ^ _UNK_1806af118;
    uVal_3 = param_1[3] ^ _UNK_1806af11c;
    *param_1 = *param_1 ^ _DAT_1806af110;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806af120,0);
  }
  return;
}

// func_0x1800ac750
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac750(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af134;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af130;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af138;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af13c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xed61eb31;
    param_1[1][4] = param_1[1][4] ^ 7;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1800ac780
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac780(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af144;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af140;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af148;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af14c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x8dbf83bf;
    param_1[1][4] = param_1[1][4] ^ 0xeb;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1800ac7b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac7b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae1b4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae1b0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae1b8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae1bc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x7fd57d6d;
    param_1[1][4] = param_1[1][4] ^ 0xe9;
    param_1[1][5] = param_1[1][5] ^ 0x85;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1800ac7e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac7e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af154;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af150;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af158;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af15c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x5faff50f;
    param_1[1][4] = param_1[1][4] ^ 0x9f;
    param_1[1][5] = param_1[1][5] ^ 0x8d;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1800ac810
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac810(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806af164;
    uVal_2 = param_1[2] ^ _UNK_1806af168;
    uVal_3 = param_1[3] ^ _UNK_1806af16c;
    *param_1 = *param_1 ^ _DAT_1806af160;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806af170,0);
  }
  return;
}

// func_0x1800ac860
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ac860(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af184;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af180;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af188;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af18c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xf9;
    param_1[1][1] = param_1[1][1] ^ 0x23;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1800ac880
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint func_0x1800ac880(uint *param_1)
{
  uint *pU64_1;
  uint *pU64_2;
  uint *pU64_3;
  uint *pU64_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint uVal_14;
  uint uVal_15;
  uint uVal_16;
  uint uVal_17;
  uint uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint uVal_26;
  uint uVal_27;
  uint uVal_28;
  uint uVal_29;
  uint uVal_30;
  uint uVal_31;
  uint uVal_32;
  uint uVal_33;
  uint uVal_34;
  uint uVal_35;
  uint uVal_36;
  int64_t lVal_37;
  uint uVal_38;
  
  uVal_36 = _UNK_1806af1cc;
  uVal_35 = _UNK_1806af1c8;
  uVal_34 = _UNK_1806af1c4;
  uVal_33 = _DAT_1806af1c0;
  uVal_32 = _UNK_1806af1bc;
  uVal_31 = _UNK_1806af1b8;
  uVal_30 = _UNK_1806af1b4;
  uVal_29 = _DAT_1806af1b0;
  uVal_28 = _UNK_1806af1ac;
  uVal_27 = _UNK_1806af1a8;
  uVal_26 = _UNK_1806af1a4;
  uVal_25 = _DAT_1806af1a0;
  uVal_38 = *param_1;
  if (uVal_38 == 0x270) {
    lVal_37 = 4;
    do {
      pU64_1 = (uint *)((int64_t)param_1 + lVal_37);
      uVal_7 = pU64_1[1];
      uVal_8 = pU64_1[2];
      uVal_9 = pU64_1[3];
      pU64_2 = (uint *)((int64_t)param_1 + lVal_37 + 4);
      uVal_38 = pU64_2[1];
      uVal_5 = pU64_2[2];
      uVal_6 = pU64_2[3];
      pU64_3 = (uint *)((int64_t)param_1 + lVal_37 + 0x634);
      uVal_10 = pU64_3[1];
      uVal_11 = pU64_3[2];
      uVal_12 = pU64_3[3];
      pU64_4 = (uint *)((int64_t)param_1 + lVal_37 + 0x9c0);
      *pU64_4 = *pU64_3 ^ (*pU64_2 & uVal_29 | *pU64_1 & uVal_25) >> 1 ^
                (int)(*pU64_2 << 0x1f) >> 0x1f & uVal_33;
      pU64_4[1] = uVal_10 ^ (uVal_38 & uVal_30 | uVal_7 & uVal_26) >> 1 ^
                  (int)(uVal_38 << 0x1f) >> 0x1f & uVal_34;
      pU64_4[2] = uVal_11 ^ (uVal_5 & uVal_31 | uVal_8 & uVal_27) >> 1 ^
                  (int)(uVal_5 << 0x1f) >> 0x1f & uVal_35;
      pU64_4[3] = uVal_12 ^ (uVal_6 & uVal_32 | uVal_9 & uVal_28) >> 1 ^
                  (int)(uVal_6 << 0x1f) >> 0x1f & uVal_36;
      lVal_37 = lVal_37 + 0x10;
    } while (lVal_37 != 0x9c4);
    uVal_38 = *param_1;
  }
  else if (0x4df < uVal_38) {
    lVal_37 = 0;
    do {
      pU64_2 = param_1 + lVal_37 + 0x271;
      uVal_15 = pU64_2[1];
      uVal_16 = pU64_2[2];
      uVal_17 = pU64_2[3];
      pU64_3 = param_1 + lVal_37 + 0x272;
      uVal_38 = pU64_3[1];
      uVal_5 = pU64_3[2];
      uVal_6 = pU64_3[3];
      pU64_1 = param_1 + lVal_37 + 0x275;
      uVal_11 = *pU64_1;
      uVal_12 = pU64_1[1];
      uVal_13 = pU64_1[2];
      uVal_14 = pU64_1[3];
      pU64_1 = param_1 + lVal_37 + 0x276;
      uVal_7 = *pU64_1;
      uVal_8 = pU64_1[1];
      uVal_9 = pU64_1[2];
      uVal_10 = pU64_1[3];
      pU64_4 = param_1 + lVal_37 + 0x3fe;
      uVal_22 = pU64_4[1];
      uVal_23 = pU64_4[2];
      uVal_24 = pU64_4[3];
      pU64_1 = param_1 + lVal_37 + 0x402;
      uVal_18 = *pU64_1;
      uVal_19 = pU64_1[1];
      uVal_20 = pU64_1[2];
      uVal_21 = pU64_1[3];
      pU64_1 = param_1 + lVal_37 + 1;
      *pU64_1 = *pU64_4 ^ (int)(*pU64_3 << 0x1f) >> 0x1f & uVal_33 ^
                (*pU64_3 & uVal_29 | *pU64_2 & uVal_25) >> 1;
      pU64_1[1] = uVal_22 ^ (int)(uVal_38 << 0x1f) >> 0x1f & uVal_34 ^
                  (uVal_38 & uVal_30 | uVal_15 & uVal_26) >> 1;
      pU64_1[2] = uVal_23 ^ (int)(uVal_5 << 0x1f) >> 0x1f & uVal_35 ^
                  (uVal_5 & uVal_31 | uVal_16 & uVal_27) >> 1;
      pU64_1[3] = uVal_24 ^ (int)(uVal_6 << 0x1f) >> 0x1f & uVal_36 ^
                  (uVal_6 & uVal_32 | uVal_17 & uVal_28) >> 1;
      pU64_1 = param_1 + lVal_37 + 5;
      *pU64_1 = uVal_18 ^ (int)(uVal_7 << 0x1f) >> 0x1f & uVal_33 ^
                (uVal_7 & uVal_29 | uVal_11 & uVal_25) >> 1;
      pU64_1[1] = uVal_19 ^ (int)(uVal_8 << 0x1f) >> 0x1f & uVal_34 ^
                  (uVal_8 & uVal_30 | uVal_12 & uVal_26) >> 1;
      pU64_1[2] = uVal_20 ^ (int)(uVal_9 << 0x1f) >> 0x1f & uVal_35 ^
                  (uVal_9 & uVal_31 | uVal_13 & uVal_27) >> 1;
      pU64_1[3] = uVal_21 ^ (int)(uVal_10 << 0x1f) >> 0x1f & uVal_36 ^
                  (uVal_10 & uVal_32 | uVal_14 & uVal_28) >> 1;
      lVal_37 = lVal_37 + 8;
    } while (lVal_37 != 0xe0);
    uVal_38 = param_1[0x352];
    uVal_5 = param_1[0x353];
    param_1[0xe1] =
         -(uVal_38 & 1) & 0x9908b0df ^ param_1[0x4de] ^
         (uVal_38 & 0x7ffffffe | param_1[0x351] & 0x80000000) >> 1;
    param_1[0xe2] =
         -(uVal_5 & 1) & 0x9908b0df ^ param_1[0x4df] ^
         (uVal_5 & 0x7ffffffe | uVal_38 & 0x80000000) >> 1;
    param_1[0xe3] =
         -(param_1[0x354] & 1) & 0x9908b0df ^ param_1[0x4e0] ^
         (param_1[0x354] & 0x7ffffffe | uVal_5 & 0x80000000) >> 1;
    lVal_37 = 0;
    do {
      pU64_2 = param_1 + lVal_37 + 0x354;
      uVal_7 = pU64_2[1];
      uVal_8 = pU64_2[2];
      uVal_9 = pU64_2[3];
      pU64_3 = param_1 + lVal_37 + 0x355;
      uVal_38 = pU64_3[1];
      uVal_5 = pU64_3[2];
      uVal_6 = pU64_3[3];
      pU64_1 = param_1 + lVal_37 + 1;
      uVal_10 = pU64_1[1];
      uVal_11 = pU64_1[2];
      uVal_12 = pU64_1[3];
      pU64_4 = param_1 + lVal_37 + 0xe4;
      *pU64_4 = *pU64_1 ^ (*pU64_3 & uVal_29 | *pU64_2 & uVal_25) >> 1 ^
                (int)(*pU64_3 << 0x1f) >> 0x1f & uVal_33;
      pU64_4[1] = uVal_10 ^ (uVal_38 & uVal_30 | uVal_7 & uVal_26) >> 1 ^
                  (int)(uVal_38 << 0x1f) >> 0x1f & uVal_34;
      pU64_4[2] = uVal_11 ^ (uVal_5 & uVal_31 | uVal_8 & uVal_27) >> 1 ^
                  (int)(uVal_5 << 0x1f) >> 0x1f & uVal_35;
      pU64_4[3] = uVal_12 ^ (uVal_6 & uVal_32 | uVal_9 & uVal_28) >> 1 ^
                  (int)(uVal_6 << 0x1f) >> 0x1f & uVal_36;
      lVal_37 = lVal_37 + 4;
    } while (lVal_37 != 0x18c);
    param_1[0x270] =
         -(param_1[1] & 1) & 0x9908b0df ^ param_1[0x18d] ^
         (param_1[1] & 0x7ffffffe | param_1[0x4e0] & 0x80000000) >> 1;
    uVal_38 = 0;
  }
  *param_1 = uVal_38 + 1;
  uVal_38 = param_1[(uint64_t)uVal_38 + 1] >> 0xb ^ param_1[(uint64_t)uVal_38 + 1];
  uVal_38 = (uVal_38 & 0x13a58ad) << 7 ^ uVal_38;
  uVal_38 = (uVal_38 & 0x1df8c) << 0xf ^ uVal_38;
  return uVal_38 >> 0x12 ^ uVal_38;
}

// func_0x1800acb80
uint64_t func_0x1800acb80(int64_t *param_1,char param_2)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  int *pInt_3;
  func_ptr_t fnPtr_4;
  uint uVal_5;
  int iVal_6;
  uint64_t *pU64_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint uVal_10;
  char *fnPtr_11;
  int64_t lVal_12;
  char *fnPtr_13;
  uint8_t local_68 [8];
  int64_t *local_60;
  uint32_t local_40 [2];
  uint8_t **local_38;
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVal_12 = (int64_t)*(int *)(*param_1 + 4);
  uVal_10 = *(uint *)((int64_t)param_1 + lVal_12 + 0x10);
  if (uVal_10 == 0) {
    local_30 = param_1;
    if (*(int64_t *)((int64_t)param_1 + lVal_12 + 0x50) != 0) {
      func_0x180097080();
    }
    pLong_1 = local_30;
    if ((param_2 == '\0') &&
       ((*(byte *)((int64_t)local_30 + (int64_t)*(int *)(*local_30 + 4) + 0x18) & 1) != 0)) {
      local_60 = *(int64_t **)
                  (*(int64_t *)((int64_t)local_30 + (int64_t)*(int *)(*local_30 + 4) + 0x40) + 8)
      ;
      (**(func_ptr_t *)(*local_60 + 8))();
      lVal_12 = func_0x180096a50(local_68);
      if (local_60 != (int64_t *)0x0) {
        pU64_7 = (uint64_t *)(**(func_ptr_t *)(*local_60 + 0x10))();
        if (pU64_7 != (uint64_t *)0x0) {
          (**(func_ptr_t *)*pU64_7)(pU64_7,1);
        }
      }
      pLong_1 = *(int64_t **)((int64_t)pLong_1 + (int64_t)*(int *)(*pLong_1 + 4) + 0x48);
      if ((*(byte **)pLong_1[7] == (byte *)0x0) || (*(int *)pLong_1[10] < 1)) {
        uVal_8 = (**(func_ptr_t *)(*pLong_1 + 0x30))();
      }
      else {
        uVal_8 = (uint64_t)**(byte **)pLong_1[7];
      }
      while ((int)uVal_8 != -1) {
        if ((*(byte *)(*(int64_t *)(lVal_12 + 0x18) + (uVal_8 & 0xff) * 2) & 0x48) == 0)
        goto LAB_1800acd73;
        pLong_1 = *(int64_t **)((int64_t)local_30 + (int64_t)*(int *)(*local_30 + 4) + 0x48);
        if (*(int64_t *)pLong_1[7] == 0) {
LAB_1800accf0:
          iVal_6 = (**(func_ptr_t *)(*pLong_1 + 0x38))(pLong_1);
          uVal_8 = 0xffffffff;
          if (iVal_6 != -1) {
LAB_1800acd06:
            if ((*(byte **)pLong_1[7] == (byte *)0x0) || (*(int *)pLong_1[10] < 1)) {
              uVal_8 = (**(func_ptr_t *)(*pLong_1 + 0x30))(pLong_1);
            }
            else {
              uVal_8 = (uint64_t)**(byte **)pLong_1[7];
            }
          }
        }
        else {
          pInt_3 = (int *)pLong_1[10];
          iVal_6 = *pInt_3;
          if (iVal_6 < 2) {
            if (iVal_6 != 1) goto LAB_1800accf0;
            *pInt_3 = 0;
            *(int64_t *)pLong_1[7] = *(int64_t *)pLong_1[7] + 1;
            goto LAB_1800acd06;
          }
          *pInt_3 = iVal_6 + -1;
          lVal_2 = *(int64_t *)pLong_1[7];
          *(int64_t *)pLong_1[7] = lVal_2 + 1;
          uVal_8 = (uint64_t)*(byte *)(lVal_2 + 1);
        }
      }
      lVal_12 = (int64_t)*(int *)(*local_30 + 4);
      uVal_5 = *(uint *)((int64_t)local_30 + lVal_12 + 0x10) & 0x14 |
              (uint)(*(int64_t *)((int64_t)local_30 + lVal_12 + 0x48) == 0) << 2 | 3;
      *(uint *)((int64_t)local_30 + lVal_12 + 0x10) = uVal_5;
      uVal_10 = *(uint *)((int64_t)local_30 + lVal_12 + 0x14);
      uVal_5 = uVal_5 & uVal_10;
      if (uVal_5 != 0) goto LAB_1800acd8f;
    }
LAB_1800acd73:
    uVal_9 = CONCAT71((int7)(int3)((uint)*(int *)(*local_30 + 4) >> 8),
                     *(int *)((int64_t)local_30 + (int64_t)*(int *)(*local_30 + 4) + 0x10) == 0);
  }
  else {
    uVal_5 = uVal_10 & 0x15 | (uint)(*(int64_t *)((int64_t)param_1 + lVal_12 + 0x48) == 0) << 2 | 2;
    *(uint *)((int64_t)param_1 + lVal_12 + 0x10) = uVal_5;
    uVal_10 = *(uint *)((int64_t)param_1 + lVal_12 + 0x14);
    uVal_5 = uVal_5 & uVal_10;
    if (uVal_5 != 0) {
LAB_1800acd8f:
      fnPtr_13 = "ios_base::failbit set";
      if ((uVal_10 & 2) == 0) {
        fnPtr_13 = "ios_base::eofbit set";
      }
      fnPtr_11 = "ios_base::badbit set";
      if ((uVal_5 & 4) == 0) {
        fnPtr_11 = fnPtr_13;
      }
      local_40[0] = 1;
      local_38 = &PTR_vftable_1806b0968;
      func_0x180096770(local_68,fnPtr_11,local_40);
      func_0x18067a120(local_68,&DAT_180768ca8);
      fnPtr_4 = (func_ptr_t )swi(3);
      uVal_9 = (*fnPtr_4)();
      return uVal_9;
    }
    uVal_9 = 0;
  }
  return uVal_9;
}

// Unwind@1800acdf0
void Unwind_1800acdf0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  if (*(int64_t **)(param_2 + 0x28) != (int64_t *)0x0) {
    pU64_1 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(param_2 + 0x28) + 0x10))();
    if (pU64_1 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_1)(pU64_1,1);
    }
  }
  return;
}

// Catch_All@1800ace30
uint64_t Catch_All_1800ace30(uint64_t param_1,int64_t param_2)
{
  func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x58) + 4) +
                (int64_t)*(int64_t **)(param_2 + 0x58),4,1);
  return 0x1800acd73;
}

// func_0x1800ace70
int64_t * func_0x1800ace70(int64_t param_1)
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
  pLong_4 = DAT_18083ec30;
  local_48 = DAT_18083ec30;
  if (DAT_18083eb28 == 0) {
    func_0x180673560(local_4c,0);
    if (DAT_18083eb28 == 0) {
      DAT_18083eb28 = (int64_t)DAT_180841fc0 + 1;
      DAT_180841fc0 = (int)DAT_18083eb28;
    }
    func_0x1806735b0(local_4c);
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_18083eb28 < *(uint64_t *)(lVal_3 + 0x18)) goto LAB_1800acefe;
  }
  else {
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_18083eb28 < *(uint64_t *)(lVal_3 + 0x18)) {
LAB_1800acefe:
      pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + DAT_18083eb28 * 8);
      if (pLong_5 != (int64_t *)0x0) goto LAB_1800acf68;
    }
  }
  uVal_2 = DAT_18083eb28;
  if ((((*(char *)(lVal_3 + 0x24) != '\x01') ||
       (lVal_3 = func_0x180673c90(), *(uint64_t *)(lVal_3 + 0x18) <= uVal_2)) ||
      (pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + uVal_2 * 8), pLong_5 == (int64_t *)0x0))
     && (pLong_5 = pLong_4, pLong_4 == (int64_t *)0x0)) {
    lVal_3 = func_0x1800ad000(&local_48,param_1);
    if (lVal_3 == -1) {
      func_0x18008c8d0();
      fnPtr_1 = (func_ptr_t )swi(3);
      pLong_4 = (int64_t *)(*fnPtr_1)();
      return pLong_4;
    }
    local_40 = local_48;
    func_0x180673910();
    (**(func_ptr_t *)(*local_40 + 8))();
    DAT_18083ec30 = local_48;
    pLong_5 = local_48;
  }
LAB_1800acf68:
  func_0x1806735b0(local_34);
  return pLong_5;
}

// Unwind@1800acf90
void Unwind_1800acf90(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    (**(func_ptr_t *)**(uint64_t **)(param_2 + 0x38))(*(uint64_t **)(param_2 + 0x38),1);
  }
  return;
}

// Unwind@1800acfd0
void Unwind_1800acfd0(uint64_t param_1,int64_t param_2)
{
  func_0x1806735b0(param_2 + 0x44);
  return;
}

// func_0x1800ad000
uint64_t func_0x1800ad000(int64_t *param_1,int64_t param_2)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  undefined1 *pU64_4;
  uint8_t local_98 [104];
  uint64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((param_1 != (int64_t *)0x0) && (*param_1 == 0)) {
    local_30 = (uint64_t *)func_0x180672de0(0x18);
    lVal_1 = *(int64_t *)(param_2 + 8);
    if (lVal_1 == 0) {
      pU64_4 = &DAT_180761155;
    }
    else {
      pU64_4 = (undefined1 *)(lVal_1 + 0x30);
      if (*(undefined1 **)(lVal_1 + 0x28) != (undefined1 *)0x0) {
        pU64_4 = *(undefined1 **)(lVal_1 + 0x28);
      }
    }
    func_0x18008c920(local_98,pU64_4);
    pU64_2 = local_30;
    *(uint32_t *)(local_30 + 1) = 0;
    *local_30 = std::
                time_put<char,class_std::ostreambuf_iterator<char,struct_std::char_traits<char>_>_>
                ::vftable;
    local_30[2] = 0;
    uVal_3 = thunk_FUN_18067bd10();
    thunk_FUN_180695dd0(pU64_2[2]);
    pU64_2[2] = uVal_3;
    *param_1 = (int64_t)pU64_2;
    func_0x18008ca70(local_98);
  }
  return 5;
}

// Unwind@1800ad0c0
void Unwind_1800ad0c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0x18);
  return;
}

// func_0x1800ad0f0
uint32_t * func_0x1800ad0f0(int64_t param_1,uint32_t *param_2,uint32_t *param_3,int64_t param_4, uint64_t param_5,uint64_t param_6,char param_7,char param_8)
{
  uint8_t uVal_1;
  int64_t *pLong_2;
  uint8_t *pU64_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  undefined5 uVal_7;
  uint32_t *pU64_8;
  uint uVal_9;
  int iVal_10;
  int *pInt_11;
  int64_t lVal_12;
  uint8_t *pU64_13;
  char *fnPtr_14;
  uint8_t uVal_15;
  char *fnPtr_16;
  uint64_t uVal_17;
  uint8_t *pU64_18;
  uint64_t local_d8;
  uint32_t local_b0 [2];
  uint8_t **local_a8;
  int *local_a0;
  int64_t local_98;
  uint32_t *local_90;
  uint32_t *local_88;
  int local_7c;
  uint8_t local_78 [16];
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_50;
  uint8_t local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_4c = 0;
  local_50 = 0x782521;
  local_78 = ZEXT816(0);
  local_68 = 0;
  local_60 = 0xf;
  if (param_8 != '\0') {
    local_50 = CONCAT13(param_7,0x782521);
    param_7 = param_8;
  }
  local_98 = param_4;
  local_90 = param_3;
  local_88 = param_2;
  pInt_11 = (int *)func_0x1806823dc();
  local_7c = *pInt_11;
  uVal_17 = 0x10;
  local_a0 = pInt_11;
  do {
    if (local_60 - local_68 < uVal_17) {
      func_0x180089e90(local_78,uVal_17);
    }
    else {
      lVal_12 = local_68 + uVal_17;
      pU64_13 = local_78;
      if (0xf < local_60) {
        pU64_13 = (uint8_t *)local_78._0_8_;
      }
      pU64_18 = pU64_13 + local_68;
      local_68 = lVal_12;
      func_0x1806ab010(pU64_18,0,uVal_17);
      pU64_13[lVal_12] = 0;
      pInt_11 = local_a0;
    }
    pU64_13 = local_78;
    if (0xf < local_60) {
      pU64_13 = (uint8_t *)local_78._0_8_;
    }
    lVal_12 = func_0x18067b6e0(pU64_13,local_68,&local_50,param_6,*(uint64_t *)(param_1 + 0x10));
    if (lVal_12 != 0) {
      *pInt_11 = local_7c;
      if (local_60 < 0x10) {
        pU64_13 = local_78;
      }
      else {
        pU64_13 = (uint8_t *)local_78._0_8_;
      }
      uVal_15 = *(uint8_t *)local_90;
      pLong_2 = *(int64_t **)(local_90 + 2);
      uVal_7 = CONCAT14(local_d8._7_1_,local_90[1]);
      local_d8 = (uint8_t **)
                 CONCAT44((int)((uint5)uVal_7 >> 8),*(uint32_t *)((int64_t)local_90 + 1));
      if (lVal_12 == 1) goto LAB_1800ad323;
      if (pLong_2 == (int64_t *)0x0) {
        uVal_15 = 1;
        goto LAB_1800ad323;
      }
      pU64_18 = pU64_13 + 1;
      goto LAB_1800ad2df;
    }
    uVal_17 = uVal_17 * 2;
  } while (*pInt_11 != 0x16);
  uVal_9 = *(uint *)(local_98 + 0x10) & 0x13 | 4;
  *(uint *)(local_98 + 0x10) = uVal_9;
  uVal_9 = uVal_9 & *(uint *)(local_98 + 0x14);
  if (uVal_9 != 0) {
    fnPtr_14 = "ios_base::failbit set";
    if ((uVal_9 & 2) == 0) {
      fnPtr_14 = "ios_base::eofbit set";
    }
    fnPtr_16 = "ios_base::badbit set";
    if ((*(uint *)(local_98 + 0x14) & 4) == 0) {
      fnPtr_16 = fnPtr_14;
    }
    local_b0[0] = 1;
    local_a8 = &PTR_vftable_1806b0968;
    func_0x1800968f0(&local_d8,local_b0,fnPtr_16);
    local_d8 = std::ios_base::failure::vftable;
    func_0x18067a120(&local_d8,&DAT_180768ca8);
    goto LAB_1800ad3ee;
  }
  uVal_4 = local_90[1];
  uVal_5 = local_90[2];
  uVal_6 = local_90[3];
  *local_88 = *local_90;
  local_88[1] = uVal_4;
  local_88[2] = uVal_5;
  local_88[3] = uVal_6;
  pU64_8 = local_88;
  goto joined_r0x0001800ad342;
LAB_1800ad2df:
  do {
    uVal_1 = *pU64_18;
    if (*(int64_t *)pLong_2[8] == 0) {
LAB_1800ad2f9:
      iVal_10 = (**(func_ptr_t *)(*pLong_2 + 0x18))(pLong_2,uVal_1);
      if (iVal_10 == -1) {
        uVal_15 = 1;
      }
    }
    else {
      iVal_10 = *(int *)pLong_2[0xb];
      if (iVal_10 < 1) goto LAB_1800ad2f9;
      *(int *)pLong_2[0xb] = iVal_10 + -1;
      pU64_3 = *(uint8_t **)(int64_t *)pLong_2[8];
      *(int64_t *)pLong_2[8] = (int64_t)(pU64_3 + 1);
      *pU64_3 = uVal_1;
    }
    pU64_18 = pU64_18 + 1;
  } while (pU64_18 != pU64_13 + lVal_12);
LAB_1800ad323:
  *(uint8_t *)local_88 = uVal_15;
  uVal_4 = (uint32_t)local_d8;
  *(uint32_t *)((int64_t)local_88 + 1) = uVal_4;
  local_88[1] = local_d8._3_4_;
  *(int64_t **)(local_88 + 2) = pLong_2;
  pU64_8 = local_88;
joined_r0x0001800ad342:
  if (0xf < local_60) {
    uVal_17 = local_60 + 1;
    lVal_12 = local_78._0_8_;
    if (0xfff < uVal_17) {
      lVal_12 = *(int64_t *)(local_78._0_8_ + -8);
      if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_12)) {
LAB_1800ad3ee:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_17 = local_60 + 0x28;
    }
    local_88 = pU64_8;
    thunk_FUN_180695dd0(lVal_12,uVal_17);
  }
  return pU64_8;
}

// Unwind@1800ad3f0
void Unwind_1800ad3f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// func_0x1800ad430
uint64_t * func_0x1800ad430(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = std::
             time_put<char,class_std::ostreambuf_iterator<char,struct_std::char_traits<char>_>_>::
             vftable;
  thunk_FUN_180695dd0(param_1[2]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x18);
  }
  return param_1;
}
