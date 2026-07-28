#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@18064e0d0
void Unwind_18064e0d0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x28) != param_2 + 0x48) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18064e110
int64_t ** func_0x18064e110(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, int **param_6)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int iVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  uint8_t auStack_88 [32];
  int local_68;
  uint8_t local_60;
  int *local_58;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  uVal_4 = 0;
  if (param_5 <= param_3[2]) {
    uVal_4 = param_3[2] - param_5;
  }
  uVal_7 = uVal_4 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_6 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_4;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_6);
  }
  if (uVal_7 != 0) {
    func_0x1800b57e0(&local_48,param_2,uVal_7,param_3);
    param_2 = local_48;
  }
  iVal_5 = **param_6;
  if (iVal_5 != 0) {
    lVal_2 = param_2[1];
    uVal_6 = lVal_2 + 1;
    if ((uint64_t)param_2[2] < uVal_6) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_2 = param_2[1];
      uVal_6 = lVal_2 + 1;
    }
    param_2[1] = uVal_6;
    *(char *)(*param_2 + lVal_2) = (char)(0x202b2d00 >> ((byte)(iVal_5 << 3) & 0x1f));
  }
  local_58 = param_6[5];
  local_60 = *(uint8_t *)param_6[4];
  local_68 = *param_6[3];
  func_0x18064e2c0(&local_48,param_2,*(uint64_t *)param_6[1],*param_6[2]);
  pLong_8 = local_48;
  iVal_5 = *param_6[6];
  if (0 < iVal_5) {
    do {
      lVal_2 = pLong_8[1];
      uVal_6 = lVal_2 + 1;
      if ((uint64_t)pLong_8[2] < uVal_6) {
        (*(func_ptr_t )pLong_8[3])(pLong_8);
        lVal_2 = pLong_8[1];
        uVal_6 = lVal_2 + 1;
      }
      pLong_8[1] = uVal_6;
      *(uint8_t *)(*pLong_8 + lVal_2) = 0x30;
      iVal_5 = iVal_5 + -1;
    } while (iVal_5 != 0);
  }
  if (uVal_4 != uVal_7) {
    func_0x1800b57e0(&local_48,pLong_8,uVal_4 - uVal_7,param_3);
    pLong_8 = local_48;
  }
  *param_1 = pLong_8;
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_88)) {
    return param_1;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_88);
  fnPtr_1 = (func_ptr_t )swi(3);
  ptr2_Long_3 = (int64_t **)(*fnPtr_1)();
  return ptr2_Long_3;
}

// func_0x18064e2c0
uint64_t func_0x18064e2c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4,uint param_5, char param_6,int64_t param_7)
{
  bool bFlag_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  uint uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t local_298;
  int64_t local_290;
  uint64_t local_288;
  func_ptr_t local_280;
  uint8_t local_278 [504];
  uint8_t local_80 [8];
  uint8_t *local_78;
  uint64_t local_70;
  uint16_t local_68;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVal_9 = (uint64_t)param_5;
  if (*(int64_t *)(param_7 + 0x30) == 0) {
    if (param_6 != '\0') {
      lVal_5 = (int64_t)&local_298 + (int64_t)(int)param_4 + 1;
      param_4 = param_4 - param_5;
      lVal_6 = lVal_5;
      if (1 < (int)param_4) {
        uVal_7 = (param_4 >> 1) + 1;
        uVal_3 = param_3;
        do {
          param_3 = uVal_3 / 100;
          *(uint16_t *)(lVal_6 + -2) = *(uint16_t *)(&DAT_1806afb50 + (uVal_3 % 100) * 2);
          lVal_6 = lVal_6 + -2;
          uVal_7 = uVal_7 - 1;
          uVal_3 = param_3;
        } while (1 < uVal_7);
      }
      uVal_3 = param_3;
      if ((param_4 & 1) != 0) {
        uVal_3 = param_3 / 10;
        *(byte *)(lVal_6 + -1) = (char)param_3 + (char)uVal_3 * -10 | 0x30;
        lVal_6 = lVal_6 + -1;
      }
      *(char *)(lVal_6 + -1) = param_6;
      lVal_6 = (lVal_6 + -1) - (int64_t)(int)param_5;
      uVal_4 = uVal_3;
      if (99 < uVal_3) {
        do {
          param_5 = (int)uVal_9 - 2;
          uVal_9 = (uint64_t)param_5;
          uVal_4 = uVal_3 / 100;
          *(uint16_t *)(lVal_6 + uVal_9) = *(uint16_t *)(&DAT_1806afb50 + (uVal_3 % 100) * 2);
          bFlag_1 = 9999 < uVal_3;
          uVal_3 = uVal_4;
        } while (bFlag_1);
      }
      if (uVal_4 < 10) {
        *(byte *)(lVal_6 + (uint64_t)(param_5 - 1)) = (byte)uVal_4 | 0x30;
      }
      else {
        *(uint16_t *)(lVal_6 + (uint64_t)(param_5 - 2)) =
             *(uint16_t *)(&DAT_1806afb50 + uVal_4 * 2);
      }
      goto LAB_18064e7ad;
    }
    if (param_3 < 100) {
      uVal_7 = param_4;
      if (param_3 < 10) goto LAB_18064e799;
LAB_18064e69b:
      *(uint16_t *)((int64_t)&local_298 + (uint64_t)(uVal_7 - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + param_3 * 2);
    }
    else {
      uVal_3 = (uint64_t)param_4;
      uVal_9 = param_3;
      do {
        uVal_7 = (int)uVal_3 - 2;
        uVal_3 = (uint64_t)uVal_7;
        param_3 = uVal_9 / 100;
        *(uint16_t *)((int64_t)&local_298 + uVal_3) =
             *(uint16_t *)(&DAT_1806afb50 + (uVal_9 % 100) * 2);
        bFlag_1 = 9999 < uVal_9;
        uVal_9 = param_3;
      } while (bFlag_1);
      if (9 < param_3) goto LAB_18064e69b;
LAB_18064e799:
      *(byte *)((int64_t)&local_298 + (uint64_t)(uVal_7 - 1)) = (byte)param_3 | 0x30;
    }
    lVal_5 = (int64_t)&local_298 + (int64_t)(int)param_4;
LAB_18064e7ad:
    func_0x1800b1e50(param_1,&local_298,lVal_5,param_2);
    return param_1;
  }
  local_290 = 0;
  local_280 = func_0x1800b02d0;
  local_298 = local_278;
  local_288 = 500;
  lVal_5 = (int64_t)(int)param_5;
  if (param_6 != '\0') {
    lVal_6 = (int64_t)&local_68 + (int64_t)(int)param_4 + 1;
    param_4 = param_4 - param_5;
    lVal_10 = lVal_6;
    local_50 = param_2;
    if (1 < (int)param_4) {
      uVal_7 = (param_4 >> 1) + 1;
      uVal_3 = param_3;
      do {
        param_3 = uVal_3 / 100;
        *(uint16_t *)(lVal_10 + -2) = *(uint16_t *)(&DAT_1806afb50 + (uVal_3 % 100) * 2);
        lVal_10 = lVal_10 + -2;
        uVal_7 = uVal_7 - 1;
        uVal_3 = param_3;
      } while (1 < uVal_7);
    }
    uVal_3 = param_3;
    if ((param_4 & 1) != 0) {
      uVal_3 = param_3 / 10;
      *(byte *)(lVal_10 + -1) = (char)param_3 + (char)uVal_3 * -10 | 0x30;
      lVal_10 = lVal_10 + -1;
    }
    *(char *)(lVal_10 + -1) = param_6;
    lVal_2 = -1 - lVal_5;
    if (99 < uVal_3) {
      uVal_8 = (uint64_t)param_5;
      uVal_4 = uVal_3;
      do {
        param_5 = (int)uVal_8 - 2;
        uVal_8 = (uint64_t)param_5;
        uVal_3 = uVal_4 / 100;
        *(uint16_t *)(lVal_10 + uVal_8 + lVal_2) =
             *(uint16_t *)(&DAT_1806afb50 + (uVal_4 % 100) * 2);
        bFlag_1 = 9999 < uVal_4;
        uVal_4 = uVal_3;
      } while (bFlag_1);
    }
    if (uVal_3 < 10) {
      *(byte *)(lVal_10 + (uint64_t)(param_5 - 1) + lVal_2) = (byte)uVal_3 | 0x30;
      param_2 = local_50;
    }
    else {
      *(uint16_t *)(lVal_10 + (uint64_t)(param_5 - 2) + lVal_2) =
           *(uint16_t *)(&DAT_1806afb50 + uVal_3 * 2);
      param_2 = local_50;
    }
    goto LAB_18064e70e;
  }
  if (param_3 < 100) {
    uVal_7 = param_4;
    if (param_3 < 10) goto LAB_18064e6f4;
LAB_18064e5de:
    *(uint16_t *)((int64_t)&local_68 + (uint64_t)(uVal_7 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + param_3 * 2);
  }
  else {
    uVal_4 = (uint64_t)param_4;
    uVal_3 = param_3;
    do {
      uVal_7 = (int)uVal_4 - 2;
      uVal_4 = (uint64_t)uVal_7;
      param_3 = uVal_3 / 100;
      *(uint16_t *)((int64_t)&local_68 + uVal_4) =
           *(uint16_t *)(&DAT_1806afb50 + (uVal_3 % 100) * 2);
      bFlag_1 = 9999 < uVal_3;
      uVal_3 = param_3;
    } while (bFlag_1);
    if (9 < param_3) goto LAB_18064e5de;
LAB_18064e6f4:
    *(byte *)((int64_t)&local_68 + (uint64_t)(uVal_7 - 1)) = (byte)param_3 | 0x30;
  }
  lVal_6 = (int64_t)&local_68 + (int64_t)(int)param_4;
LAB_18064e70e:
  func_0x1800b1e50(local_80,&local_68,lVal_6,&local_298);
  local_78 = local_298;
  local_70 = uVal_9;
  func_0x180647bc0(param_7,&local_68,param_2,&local_78);
  func_0x1800b1e50(param_1,local_298 + lVal_5,local_298 + local_290,param_2);
  if (local_298 != local_278) {
    thunk_FUN_180695dd0();
  }
  return param_1;
}

// Unwind@18064e7e0
void Unwind_18064e7e0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x20) != param_2 + 0x40) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18064e820
int64_t * func_0x18064e820(int64_t *param_1,int64_t param_2,uint *param_3,int64_t param_4,uint64_t param_5, uint64_t param_6)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t auStack_68 [40];
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = 0;
  if (param_5 <= param_3[2]) {
    uVal_3 = param_3[2] - param_5;
  }
  uVal_5 = uVal_3 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_4 = param_4 + *(int64_t *)(param_2 + 8) + (*param_3 >> 0xf & 7) * uVal_3;
  if (*(uint64_t *)(param_2 + 0x10) < uVal_4) {
    (**(func_ptr_t *)(param_2 + 0x18))(param_2,uVal_4);
  }
  if (uVal_5 != 0) {
    func_0x1800b57e0(&local_40,param_2,uVal_5,param_3);
    param_2 = local_40;
  }
  func_0x18064da20(param_6,&local_40,param_2);
  if (uVal_3 != uVal_5) {
    func_0x1800b57e0(&local_40,local_40,uVal_3 - uVal_5,param_3);
  }
  *param_1 = local_40;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  pLong_2 = (int64_t *)(*fnPtr_1)();
  return pLong_2;
}

// func_0x18064e930
/* WARNING: Removing unreachable block (ram,0x00018064ebe7) */
/* WARNING: Removing unreachable block (ram,0x00018064ebe7) */
int64_t ** func_0x18064e930(int64_t **param_1,int64_t *param_2,double param_3,uint64_t *param_4, uint64_t param_5)
{
  uint uVal_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  char ch_4;
  int iVal_5;
  int64_t **ptr2_Long_6;
  uint8_t *pU64_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  bool bFlag_13;
  uint64_t in_stack_fffffffffffffd08;
  uint32_t uVal_14;
  uint64_t in_stack_fffffffffffffd10;
  uint32_t uVal_15;
  uint64_t local_2d8;
  uint8_t *local_2d0;
  uint64_t local_2c8;
  func_ptr_t local_2c0;
  uint8_t local_2b8;
  double local_c0 [2];
  uint32_t local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  char *local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint8_t **local_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_51;
  uint64_t local_50;
  
  uVal_15 = (uint32_t)((uint64_t)in_stack_fffffffffffffd10 >> 0x20);
  uVal_14 = (uint32_t)((uint64_t)in_stack_fffffffffffffd08 >> 0x20);
  uStack_60 = local_68;
  local_50 = 0xfffffffffffffffe;
  if ((*(byte *)((int64_t)param_4 + 1) & 0x40) != 0) {
    local_b0 = 0xb;
    local_c0[0] = param_3;
    ch_4 = func_0x18063f160(param_2,local_c0,param_4,param_5);
    if (ch_4 != '\0') {
      *param_1 = param_2;
      return param_1;
    }
  }
  iVal_5 = func_0x1806823d0();
  uVal_11 = 1;
  if (iVal_5 == 0) {
    uVal_11 = *(uint *)param_4 >> 10 & 3;
  }
  if (0x7fefffffffffffff < ((uint64_t)param_3 & 0x7fffffffffffffff)) {
    uVal_8 = *param_4;
    uStack_80 = param_4[1];
    local_88._0_4_ = (uint)uVal_8;
    uVal_3 = uVal_8;
    if ((((uint)local_88 & 0x38000) == 0x8000) &&
       (local_88._4_1_ = (char)(uVal_8 >> 0x20), local_88._4_1_ == '0')) {
      uVal_3 = local_88;
    }
    local_88 = uVal_3;
    bFlag_13 = (uVal_8 & 0x1000) == 0;
    pU64_7 = &DAT_180760383;
    if (bFlag_13) {
      pU64_7 = &DAT_18075f3fa;
    }
    local_2d0 = &DAT_1807603b6;
    if (bFlag_13) {
      local_2d0 = &DAT_18075fded;
    }
    if (NAN(param_3)) {
      local_2d0 = pU64_7;
    }
    lVal_9 = 4 - (uint64_t)(uVal_11 == 0);
    local_2d8 = (uint8_t **)CONCAT44(local_2d8._4_4_,uVal_11);
    func_0x18036a520(param_1,param_2,&local_88,lVal_9,lVal_9,&local_2d8);
    return param_1;
  }
  if ((uVal_11 != 0) && ((*(uint *)param_4 & 0x38) == 0x20)) {
    lVal_9 = param_2[1];
    uVal_8 = lVal_9 + 1;
    if ((uint64_t)param_2[2] < uVal_8) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_9 = param_2[1];
      uVal_8 = lVal_9 + 1;
    }
    param_2[1] = uVal_8;
    *(char *)(*param_2 + lVal_9) = (char)(0x202b2d00 >> (sbyte)(uVal_11 << 3));
    uVal_11 = 0;
    if (*(uint *)(param_4 + 1) != 0) {
      *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) - 1;
    }
  }
  uVal_12 = *(uint *)param_4;
  uVal_1 = *(uint *)((int64_t)param_4 + 0xc);
  uVal_10 = uVal_1;
  if (((int)uVal_1 < 0) && (uVal_10 = 6, (uVal_12 & 7) == 0)) {
    func_0x1806412c0(&local_2d8);
    func_0x18064d380(param_1,param_2,&local_2d8,param_4,CONCAT44(uVal_14,uVal_11),CONCAT44(uVal_15,0x10),
                  param_5);
    return param_1;
  }
  local_2d0 = (uint8_t *)0x0;
  local_2c0 = func_0x1800b02d0;
  local_2d8 = (uint8_t **)&local_2b8;
  local_2c8 = 500;
  if (((byte)uVal_12 & 7) == 1) {
    if (uVal_10 == 0x7fffffff) {
      local_51 = 1;
      local_70 = std::exception::vftable;
      _local_68 = (uint8_t  [16])0x0;
      local_98 = "number is too big";
      local_90 = 1;
      func_0x18067b3f0(&local_98,local_68);
      local_70 = &PTR_FUN_1806b0aa8;
      func_0x18067a120(&local_70,&DAT_180768d70);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Long_6 = (int64_t **)(*fnPtr_2)();
      return ptr2_Long_6;
    }
    uVal_10 = uVal_10 + 1;
    if (uVal_1 != 0) {
      *(byte *)((int64_t)param_4 + 1) = *(byte *)((int64_t)param_4 + 1) | 0x20;
    }
  }
  else if ((uVal_12 & 7) == 2) {
    if (uVal_1 != 0) {
      uVal_12 = uVal_12 | 0x2000;
      *(uint *)param_4 = uVal_12;
    }
  }
  else {
    if ((uVal_12 & 7) == 4) {
      if (uVal_11 != 0) {
        uVal_12 = uVal_11 << 3;
        local_2b8 = (uint8_t)(0x202b2d00 >> (sbyte)uVal_12);
      }
      local_2d0 = (uint8_t *)(uint64_t)(uVal_11 != 0);
      local_a8 = *(uint *)param_4;
      uStack_a4 = *(uint *)((int64_t)param_4 + 4);
      uStack_a0 = *(uint *)(param_4 + 1);
      uStack_9c = *(uint *)((int64_t)param_4 + 0xc);
      func_0x180645de0(uVal_12,&local_a8,&local_2d8);
      local_70 = local_2d8;
      local_68 = (uint8_t  [8])local_2d0;
      func_0x180648850(param_1,param_2,param_4,local_2d0,local_2d0,&local_70);
      goto LAB_18064ec9e;
    }
    uVal_10 = uVal_10 + (uVal_10 == 0);
  }
  local_68._4_4_ = func_0x180646280(uVal_12,uVal_10,param_4,0,&local_2d8);
  *(uint *)((int64_t)param_4 + 0xc) = uVal_10;
  local_70 = local_2d8;
  local_68._0_4_ = local_2d0._0_4_;
  func_0x18064b790(param_1,param_2,&local_70,param_4,uVal_11,CONCAT44(uVal_15,0x10),param_5);
LAB_18064ec9e:
  if (local_2d8 != (uint8_t **)&local_2b8) {
    thunk_FUN_180695dd0();
  }
  return param_1;
}

// Unwind@18064ed40
void Unwind_18064ed40(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x40) != param_2 + 0x60) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18064ed90
uint64_t func_0x18064ed90(uint64_t param_1,uint64_t param_2,char *param_3,uint *param_4)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  char *fnPtr_4;
  uint8_t auStack_78 [32];
  int64_t local_58;
  char **local_50;
  uint8_t local_41;
  char *local_40;
  uint64_t local_38;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  if ((*param_4 & 7) == 3) {
    local_58 = 2;
    fnPtr_4 = param_3;
    do {
      lVal_2 = local_58;
      fnPtr_4 = (char *)((uint64_t)fnPtr_4 >> 4);
      local_58 = lVal_2 + 1;
    } while (fnPtr_4 != (char *)0x0);
    local_38 = CONCAT44(local_38._4_4_,(int)lVal_2 + -1);
    local_50 = &local_40;
    local_40 = param_3;
    func_0x180644060(param_1,param_2,param_4,local_58);
  }
  else {
    if (param_3 == (char *)0x0) {
      local_41 = 1;
      goto LAB_18064ee66;
    }
    local_38 = strlen(param_3);
    local_40 = param_3;
    func_0x1800affa0(param_1,param_2,&local_40,param_4);
  }
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_78)) {
    return param_1;
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_78);
LAB_18064ee66:
  func_0x1800ae690(&local_40,"string pointer is null");
  func_0x18067a120(&local_40,&DAT_180768d70);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_3 = (*fnPtr_1)();
  return uVal_3;
}

// func_0x18064ee90
uint64_t func_0x18064ee90(uint64_t *param_1,int param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  uint64_t *pU64_7;
  uint8_t (*pArr16_8)[16];
  uint8_t local_b0 [8];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint64_t local_78;
  uint64_t uStack_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_58 [16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 < 0) {
    param_2 = -param_2;
    uVal_5 = 0x100002d;
  }
  else {
    uVal_5 = *(uint32_t *)((int64_t)&DAT_1806de840 + (uint64_t)(*(uint *)param_1[1] >> 8 & 0xc));
  }
  _local_68 = ZEXT816(0);
  local_58 = ZEXT816(0);
  uVal_4 = param_1[4];
  if ((uint64_t)param_1[5] < 0x10) {
    pArr16_8 = (uint8_t (*)[16])(param_1 + 2);
  }
  else {
    pArr16_8 = (uint8_t (*)[16])param_1[2];
  }
  if ((int64_t)uVal_4 < 0) {
    func_0x18007ba70();
  }
  else {
    if (uVal_4 < 0x10) {
      local_58._8_8_ = 0xf;
      local_58._0_8_ = uVal_4;
      _local_68 = *pArr16_8;
      uVal_4 = param_1[8];
      if ((uint64_t)param_1[9] < 0x10) goto LAB_18064ef29;
LAB_18064ef96:
      pU64_7 = (uint64_t *)param_1[6];
    }
    else {
      uVal_2 = uVal_4 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_2) {
        uVal_6 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        uVal_2 = func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_6 + 0x28);
        uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_2 - 8) = lVal_3;
      }
      local_68 = (uint8_t  [8])uVal_2;
      local_58._8_8_ = uVal_6;
      local_58._0_8_ = uVal_4;
      func_0x1806aa960(uVal_2,pArr16_8,uVal_4 + 1);
      uVal_4 = param_1[8];
      if (0xf < (uint64_t)param_1[9]) goto LAB_18064ef96;
LAB_18064ef29:
      pU64_7 = param_1 + 6;
    }
    if (-1 < (int64_t)uVal_4) {
      if (uVal_4 < 0x10) {
        uVal_2 = *pU64_7;
        local_a0 = pU64_7[1];
        uVal_6 = 0xf;
      }
      else {
        uVal_2 = uVal_4 | 0xf;
        uVal_6 = 0x16;
        if (0x16 < uVal_2) {
          uVal_6 = uVal_2;
        }
        if (uVal_2 < 0xfff) {
          uVal_2 = func_0x180672de0(uVal_6 + 1);
        }
        else {
          lVal_3 = func_0x180672de0(uVal_6 + 0x28);
          uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_2 - 8) = lVal_3;
        }
        func_0x1806aa960(uVal_2,pU64_7,uVal_4 + 1);
        local_a0 = 0;
      }
      local_88 = local_68._0_4_;
      uStack_84 = local_68._4_4_;
      uStack_80 = (uint32_t)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78 = local_58._0_8_;
      uStack_70 = local_58._8_8_;
      local_a8 = uVal_2;
      local_98 = uVal_4;
      local_90 = uVal_6;
      func_0x18064fa70(local_b0,*param_1,param_2,uVal_5,param_1[1],&local_a8);
      if (0xf < uStack_70) {
        lVal_1 = CONCAT44(uStack_84,local_88);
        uVal_4 = uStack_70 + 1;
        lVal_3 = lVal_1;
        if (0xfff < uVal_4) {
          lVal_3 = *(int64_t *)(lVal_1 + -8);
          if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_18064f104;
          uVal_4 = uStack_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_4);
      }
      local_78 = 0;
      uStack_70 = 0xf;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_90) {
        uVal_4 = local_90 + 1;
        uVal_6 = local_a8;
        if (0xfff < uVal_4) {
          uVal_6 = *(uint64_t *)(local_a8 - 8);
          if (0x1f < (local_a8 - 8) - uVal_6) goto LAB_18064f104;
          uVal_4 = local_90 + 0x28;
        }
        thunk_FUN_180695dd0(uVal_6,uVal_4);
      }
      return 1;
    }
  }
  func_0x18007ba70();
LAB_18064f104:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18064f110
void Unwind_18064f110(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18064f150
void Unwind_18064f150(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x40);
  return;
}

// Unwind@18064f400
void Unwind_18064f400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18064f440
void Unwind_18064f440(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x40);
  return;
}

// func_0x18064f480
uint64_t func_0x18064f480(uint64_t *param_1,int64_t param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  uint64_t *pU64_7;
  uint8_t (*pArr16_8)[16];
  uint8_t local_b0 [8];
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint64_t local_78;
  uint64_t uStack_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_58 [16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 < 0) {
    param_2 = -param_2;
    uVal_5 = 0x100002d;
  }
  else {
    uVal_5 = *(uint32_t *)((int64_t)&DAT_1806de840 + (uint64_t)(*(uint *)param_1[1] >> 8 & 0xc));
  }
  _local_68 = ZEXT816(0);
  local_58 = ZEXT816(0);
  uVal_4 = param_1[4];
  if ((uint64_t)param_1[5] < 0x10) {
    pArr16_8 = (uint8_t (*)[16])(param_1 + 2);
  }
  else {
    pArr16_8 = (uint8_t (*)[16])param_1[2];
  }
  if ((int64_t)uVal_4 < 0) {
    func_0x18007ba70();
  }
  else {
    if (uVal_4 < 0x10) {
      local_58._8_8_ = 0xf;
      local_58._0_8_ = uVal_4;
      _local_68 = *pArr16_8;
      uVal_4 = param_1[8];
      if ((uint64_t)param_1[9] < 0x10) goto LAB_18064f51c;
LAB_18064f589:
      pU64_7 = (uint64_t *)param_1[6];
    }
    else {
      uVal_2 = uVal_4 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_2) {
        uVal_6 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        uVal_2 = func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_6 + 0x28);
        uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_2 - 8) = lVal_3;
      }
      local_68 = (uint8_t  [8])uVal_2;
      local_58._8_8_ = uVal_6;
      local_58._0_8_ = uVal_4;
      func_0x1806aa960(uVal_2,pArr16_8,uVal_4 + 1);
      uVal_4 = param_1[8];
      if (0xf < (uint64_t)param_1[9]) goto LAB_18064f589;
LAB_18064f51c:
      pU64_7 = param_1 + 6;
    }
    if (-1 < (int64_t)uVal_4) {
      if (uVal_4 < 0x10) {
        uVal_2 = *pU64_7;
        local_a0 = pU64_7[1];
        uVal_6 = 0xf;
      }
      else {
        uVal_2 = uVal_4 | 0xf;
        uVal_6 = 0x16;
        if (0x16 < uVal_2) {
          uVal_6 = uVal_2;
        }
        if (uVal_2 < 0xfff) {
          uVal_2 = func_0x180672de0(uVal_6 + 1);
        }
        else {
          lVal_3 = func_0x180672de0(uVal_6 + 0x28);
          uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_2 - 8) = lVal_3;
        }
        func_0x1806aa960(uVal_2,pU64_7,uVal_4 + 1);
        local_a0 = 0;
      }
      local_88 = local_68._0_4_;
      uStack_84 = local_68._4_4_;
      uStack_80 = (uint32_t)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78 = local_58._0_8_;
      uStack_70 = local_58._8_8_;
      local_a8 = uVal_2;
      local_98 = uVal_4;
      local_90 = uVal_6;
      func_0x18064fa70(local_b0,*param_1,param_2,uVal_5,param_1[1],&local_a8);
      if (0xf < uStack_70) {
        lVal_1 = CONCAT44(uStack_84,local_88);
        uVal_4 = uStack_70 + 1;
        lVal_3 = lVal_1;
        if (0xfff < uVal_4) {
          lVal_3 = *(int64_t *)(lVal_1 + -8);
          if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_18064f6f7;
          uVal_4 = uStack_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_4);
      }
      local_78 = 0;
      uStack_70 = 0xf;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_90) {
        uVal_4 = local_90 + 1;
        uVal_6 = local_a8;
        if (0xfff < uVal_4) {
          uVal_6 = *(uint64_t *)(local_a8 - 8);
          if (0x1f < (local_a8 - 8) - uVal_6) goto LAB_18064f6f7;
          uVal_4 = local_90 + 0x28;
        }
        thunk_FUN_180695dd0(uVal_6,uVal_4);
      }
      return 1;
    }
  }
  func_0x18007ba70();
LAB_18064f6f7:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18064f700
void Unwind_18064f700(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18064f740
void Unwind_18064f740(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x40);
  return;
}

// Unwind@18064f9f0
void Unwind_18064f9f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18064fa30
void Unwind_18064fa30(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0x40);
  return;
}

// func_0x18064fa70
uint64_t func_0x18064fa70(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint param_4,uint *param_5, char **param_6)
{
  char ch_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint uVal_4;
  char *fnPtr_5;
  uint64_t uVal_6;
  uint8_t *pU64_7;
  byte *pU8_8;
  uint64_t uVal_9;
  char *fnPtr_10;
  uint uVal_11;
  char **ptr2_Char_12;
  int iVal_13;
  char **ptr2_Char_14;
  int iVal_15;
  int64_t lVal_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  uint8_t *local_280;
  uint64_t local_278;
  uint64_t local_270;
  func_ptr_t local_268;
  uint8_t local_260 [504];
  uint64_t local_68;
  char *local_60;
  uint8_t **local_58;
  uint local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_278 = 0;
  local_268 = func_0x1800b02d0;
  pU64_7 = local_260;
  local_270 = 500;
  uVal_11 = *param_5;
  local_280 = pU64_7;
  local_4c = param_4;
  switch(uVal_11 & 7) {
  case 4:
    if ((uVal_11 & 0x2000) != 0) {
      uVal_3 = (uint)((uVal_11 & 0x1000) == 0) << 0xd | 0x5830;
      uVal_4 = uVal_3 << 8;
      if (param_4 == 0) {
        uVal_4 = uVal_3;
      }
      local_4c = (uVal_4 | param_4) + 0x2000000;
    }
    uVal_6 = param_3;
    lVal_18 = -1;
    do {
      lVal_16 = lVal_18;
      uVal_6 = uVal_6 >> 4;
      lVal_18 = lVal_16 + 1;
    } while (uVal_6 != 0);
    uVal_6 = lVal_16 + 2;
    uVal_17 = local_270;
    if (499 < (uint)lVal_18) {
      uVal_17 = 0x2ee;
      if (0x2ee < uVal_6) {
        uVal_17 = uVal_6;
      }
      pU64_7 = (uint8_t *)_malloc_base(uVal_17);
      if (pU64_7 == (uint8_t *)0x0) {
        local_58 = (uint8_t **)0x0;
        local_60 = "bad allocation";
        local_68 = std::bad_alloc::vftable;
        func_0x18067a120(&local_68,&DAT_180768880);
LAB_18064ff00:
        local_58 = (uint8_t **)0x0;
        local_60 = "bad allocation";
        local_68 = std::bad_alloc::vftable;
        func_0x18067a120(&local_68,&DAT_180768880);
LAB_18064ff3b:
        local_58 = (uint8_t **)0x0;
        local_60 = "bad allocation";
        local_68 = std::bad_alloc::vftable;
        func_0x18067a120(&local_68,&DAT_180768880);
        fnPtr_2 = (func_ptr_t )swi(3);
        uVal_9 = (*fnPtr_2)();
        return uVal_9;
      }
    }
    local_270 = uVal_17;
    fnPtr_10 = "0123456789ABCDEF";
    if ((uVal_11 & 0x1000) == 0) {
      fnPtr_10 = "0123456789abcdef";
    }
    fnPtr_5 = pU64_7 + lVal_18;
    do {
      *fnPtr_5 = fnPtr_10[(uint)param_3 & 0xf];
      param_3 = param_3 >> 4;
      fnPtr_5 = fnPtr_5 + -1;
      local_280 = pU64_7;
      local_278 = uVal_6;
    } while (param_3 != 0);
    break;
  case 5:
    uVal_6 = param_3;
    lVal_18 = -1;
    do {
      lVal_16 = lVal_18;
      uVal_6 = uVal_6 >> 3;
      lVal_18 = lVal_16 + 1;
    } while (uVal_6 != 0);
    uVal_6 = lVal_16 + 2;
    if ((((uVal_11 & 0x2000) != 0) && (param_3 != 0)) && ((int)param_5[3] <= (int)uVal_6)) {
      uVal_11 = 0x3000;
      if (param_4 == 0) {
        uVal_11 = 0x30;
      }
      local_4c = (uVal_11 | param_4) + 0x1000000;
    }
    uVal_17 = local_270;
    if (499 < (uint)lVal_18) {
      uVal_17 = 0x2ee;
      if (0x2ee < uVal_6) {
        uVal_17 = uVal_6;
      }
      pU64_7 = (uint8_t *)_malloc_base(uVal_17);
      if (pU64_7 == (uint8_t *)0x0) goto LAB_18064ff3b;
    }
    local_270 = uVal_17;
    pU8_8 = pU64_7 + lVal_18;
    do {
      *pU8_8 = (byte)param_3 & 7 | 0x30;
      param_3 = param_3 >> 3;
      pU8_8 = pU8_8 + -1;
      local_280 = pU64_7;
      local_278 = uVal_6;
    } while (param_3 != 0);
    break;
  case 6:
    if ((uVal_11 & 0x2000) != 0) {
      uVal_4 = (uint)((uVal_11 & 0x1000) == 0) << 0xd | 0x4230;
      uVal_11 = uVal_4 << 8;
      if (param_4 == 0) {
        uVal_11 = uVal_4;
      }
      local_4c = (uVal_11 | param_4) + 0x2000000;
    }
    uVal_6 = param_3;
    lVal_18 = -1;
    do {
      lVal_16 = lVal_18;
      uVal_6 = uVal_6 >> 1;
      lVal_18 = lVal_16 + 1;
    } while (uVal_6 != 0);
    uVal_6 = lVal_16 + 2;
    uVal_17 = local_270;
    if (499 < (uint)lVal_18) {
      uVal_17 = 0x2ee;
      if (0x2ee < uVal_6) {
        uVal_17 = uVal_6;
      }
      pU64_7 = (uint8_t *)_malloc_base(uVal_17);
      if (pU64_7 == (uint8_t *)0x0) goto LAB_18064ff00;
    }
    local_270 = uVal_17;
    pU8_8 = pU64_7 + lVal_18;
    do {
      *pU8_8 = (byte)param_3 & 1 | 0x30;
      param_3 = param_3 >> 1;
      pU8_8 = pU8_8 + -1;
      local_280 = pU64_7;
      local_278 = uVal_6;
    } while (param_3 != 0);
    break;
  case 7:
    func_0x1806426f0(param_1,param_2,param_5,1,1,&local_68);
    goto LAB_18064fe9c;
  default:
    lVal_18 = 0x3f;
    if ((param_3 | 1) != 0) {
      for (; (param_3 | 1) >> lVal_18 == 0; lVal_18 = lVal_18 + -1) {
      }
    }
    uVal_11 = (uint)(byte)(&DAT_1806b0ac0)[lVal_18] -
             (uint)(param_3 <
                   *(uint64_t *)(&DAT_1806b0b00 + (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_18] * 8));
    uVal_6 = (uint64_t)uVal_11;
    func_0x1800b1c90(&local_68,&local_280,param_3,uVal_11);
  }
  if (param_6[6] != (char *)0x0) {
    ptr2_Char_12 = param_6;
    if (&DAT_0000000f < param_6[3]) {
      ptr2_Char_12 = (char **)*param_6;
    }
    ptr2_Char_14 = (char **)(param_6[2] + (int64_t)ptr2_Char_12);
    iVal_13 = 0;
    iVal_15 = 0;
    do {
      if (ptr2_Char_12 == ptr2_Char_14) {
        ch_1 = *(char *)((int64_t)ptr2_Char_14 + -1);
      }
      else {
        ch_1 = *(char *)ptr2_Char_12;
        if ((byte)(ch_1 + 0x81U) < 0x82) goto LAB_18064fe5c;
        ptr2_Char_12 = (char **)((int64_t)ptr2_Char_12 + 1);
      }
      iVal_15 = iVal_15 + ch_1;
      if ((int)uVal_6 <= iVal_15) goto LAB_18064fe5c;
      iVal_13 = iVal_13 + 1;
    } while( true );
  }
  iVal_13 = 0;
LAB_18064fe5c:
  iVal_13 = (local_4c >> 0x18) + (int)uVal_6 + iVal_13;
  local_68 = (uint8_t **)&local_4c;
  local_60 = (char *)param_6;
  local_58 = &local_280;
  func_0x18064ffc0(param_1,param_2,param_5,iVal_13,iVal_13,&local_68);
LAB_18064fe9c:
  if (local_280 != local_260) {
    thunk_FUN_180695dd0();
  }
  return param_1;
}

// Unwind@18064ff80
void Unwind_18064ff80(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x38) != param_2 + 0x58) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x18064ffc0
uint64_t * func_0x18064ffc0(uint64_t *param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5 ,uint **param_6)
{
  uint *pU64_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  uint uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint8_t auStack_78 [32];
  uint64_t local_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  uVal_5 = 0;
  if (param_5 <= param_3[2]) {
    uVal_5 = param_3[2] - param_5;
  }
  uVal_8 = uVal_5 >> ((&DAT_18076114e)[*param_3 >> 3 & 7] & 0x3f);
  uVal_7 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_5;
  if ((uint64_t)param_2[2] < uVal_7) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_7);
  }
  if (uVal_8 != 0) {
    func_0x1800b57e0(&local_50,param_2,uVal_8,param_3);
    param_2 = (int64_t *)CONCAT44(uStack_4c,local_50);
  }
  for (uVal_6 = **param_6 & 0xffffff; uVal_6 != 0; uVal_6 = uVal_6 >> 8) {
    lVal_3 = param_2[1];
    uVal_7 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_7) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_3 = param_2[1];
      uVal_7 = lVal_3 + 1;
    }
    param_2[1] = uVal_7;
    *(char *)(*param_2 + lVal_3) = (char)uVal_6;
  }
  pU64_1 = param_6[2];
  local_50 = *pU64_1;
  uStack_4c = pU64_1[1];
  uStack_48 = pU64_1[2];
  uStack_44 = pU64_1[3];
  func_0x180647bc0(param_6[1],&local_58,param_2,&local_50);
  if (uVal_5 != uVal_8) {
    func_0x1800b57e0(&local_50,local_58,uVal_5 - uVal_8,param_3);
    local_58 = CONCAT44(uStack_4c,local_50);
  }
  *param_1 = local_58;
  if (DAT_18083cf40 != (local_40 ^ (uint64_t)auStack_78)) {
    func_0x180673080(local_40 ^ (uint64_t)auStack_78);
    fnPtr_2 = (func_ptr_t )swi(3);
    pU64_4 = (uint64_t *)(*fnPtr_2)();
    return pU64_4;
  }
  return param_1;
}

// func_0x180650130
int64_t func_0x180650130(int64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  
  *(uint64_t *)(param_1 + 0x38) = 0;
  pU64_1 = *(uint64_t **)(param_2 + 0x38);
  if (pU64_1 != (uint64_t *)0x0) {
    uVal_2 = (**(func_ptr_t *)*pU64_1)(pU64_1,param_1);
    *(uint64_t *)(param_1 + 0x38) = uVal_2;
  }
  *(uint64_t *)(param_1 + 0x78) = 0;
  pU64_1 = *(uint64_t **)(param_2 + 0x78);
  if (pU64_1 != (uint64_t *)0x0) {
    uVal_2 = (**(func_ptr_t *)*pU64_1)(pU64_1,param_1 + 0x40);
    *(uint64_t *)(param_1 + 0x78) = uVal_2;
  }
  *(uint64_t *)(param_1 + 0xb8) = 0;
  pU64_1 = *(uint64_t **)(param_2 + 0xb8);
  if (pU64_1 != (uint64_t *)0x0) {
    uVal_2 = (**(func_ptr_t *)*pU64_1)(pU64_1,param_1 + 0x80);
    *(uint64_t *)(param_1 + 0xb8) = uVal_2;
  }
  *(uint64_t *)(param_1 + 0xf8) = 0;
  if (*(uint64_t **)(param_2 + 0xf8) != (uint64_t *)0x0) {
    uVal_2 = (**(func_ptr_t *)**(uint64_t **)(param_2 + 0xf8))();
    *(uint64_t *)(param_1 + 0xf8) = uVal_2;
  }
  return param_1;
}

// Unwind@180650210
void Unwind_180650210(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x38) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    pLong_2 = *(int64_t **)(param_2 + 0x38);
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != pLong_2);
    pLong_2[7] = 0;
  }
  return;
}

// Unwind@180650250
void Unwind_180650250(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x38) + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x28));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x38) + 0x78) = 0;
  }
  return;
}

// Unwind@180650290
void Unwind_180650290(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x38) + 0xb8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x30));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x38) + 0xb8) = 0;
  }
  return;
}

// Unwind@1806502e0
void Unwind_1806502e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x38) + 0xf8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x20));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x38) + 0xf8) = 0;
  }
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x38) + 0xb8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x30));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x38) + 0xb8) = 0;
  }
  return;
}

// Unwind@180650360
void Unwind_180650360(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x38) + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x28));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x38) + 0x78) = 0;
  }
  return;
}

// Unwind@1806503a0
void Unwind_1806503a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x38) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    pLong_2 = *(int64_t **)(param_2 + 0x38);
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != pLong_2);
    pLong_2[7] = 0;
  }
  return;
}

// func_0x1806503e0
void func_0x1806503e0(int64_t param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVal_4 = *(int64_t *)(param_1 + 8);
  if (lVal_4 != 0) {
    pLong_1 = *(int64_t **)(param_1 + 0xe8);
    if (pLong_1 != (int64_t *)0x0) {
      local_20 = lVal_4;
      (**(func_ptr_t *)(*pLong_1 + 0x10))(pLong_1,param_1 + 0x10,&local_20);
      lVal_4 = *(int64_t *)(param_1 + 8);
    }
    func_0x18068a690(lVal_4);
    *(uint64_t *)(param_1 + 8) = 0;
    pLong_1 = *(int64_t **)(param_1 + 0x128);
    if (pLong_1 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_1 + 0x10))(pLong_1,param_1 + 0x10);
    }
  }
  pLong_1 = *(int64_t **)(param_1 + 0x128);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_1 + 0xf0));
    *(uint64_t *)(param_1 + 0x128) = 0;
  }
  pLong_1 = *(int64_t **)(param_1 + 0xe8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_1 + 0xb0));
    *(uint64_t *)(param_1 + 0xe8) = 0;
  }
  pLong_1 = *(int64_t **)(param_1 + 0xa8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_1 + 0x70));
    *(uint64_t *)(param_1 + 0xa8) = 0;
  }
  pLong_1 = *(int64_t **)(param_1 + 0x68);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_1 + 0x30));
    *(uint64_t *)(param_1 + 0x68) = 0;
  }
  uVal_2 = *(uint64_t *)(param_1 + 0x28);
  if (0xf < uVal_2) {
    lVal_4 = *(int64_t *)(param_1 + 0x10);
    uVal_3 = uVal_2 + 1;
    lVal_5 = lVal_4;
    if (0xfff < uVal_3) {
      lVal_5 = *(int64_t *)(lVal_4 + -8);
      if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_5)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_2 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_3);
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0xf;
  *(uint8_t *)(param_1 + 0x10) = 0;
  return;
}

// Unwind@180650540
void Unwind_180650540(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180650560
void func_0x180650560(int *param_1,int **param_2,char param_3)
{
  int **ptr2_Int_1;
  uint32_t uVal_2;
  int64_t *pLong_3;
  int *pInt_4;
  char ch_5;
  uint64_t uVal_6;
  uint32_t *pU64_7;
  int64_t lVal_8;
  int **ptr2_Int_9;
  int iVal_10;
  int **ptr2_Int_11;
  uint8_t local_d0 [32];
  uint64_t local_b0 [4];
  int **local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVal_8 = *(int64_t *)(param_1 + 2);
  if (lVal_8 != 0) {
    pLong_3 = *(int64_t **)(param_1 + 0x3a);
    if (pLong_3 != (int64_t *)0x0) {
      local_88 = (uint8_t  [8])lVal_8;
      (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,param_1 + 4,local_88);
      lVal_8 = *(int64_t *)(param_1 + 2);
    }
    func_0x18068a690(lVal_8);
    *(uint64_t *)(param_1 + 2) = 0;
    pLong_3 = *(int64_t **)(param_1 + 0x4a);
    if (pLong_3 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,param_1 + 4);
    }
  }
  ptr2_Int_1 = (int **)(param_1 + 4);
  if (ptr2_Int_1 != param_2) {
    pInt_4 = param_2[2];
    ptr2_Int_9 = param_2;
    if (&DAT_0000000f < param_2[3]) {
      ptr2_Int_9 = (int **)*param_2;
    }
    if (pInt_4 <= *(int **)(param_1 + 10)) {
      ptr2_Int_11 = ptr2_Int_1;
      if (&DAT_0000000f < *(int **)(param_1 + 10)) {
        ptr2_Int_11 = *(int ***)(param_1 + 4);
      }
      *(int **)(param_1 + 8) = pInt_4;
      func_0x1806aa960(ptr2_Int_11,ptr2_Int_9,pInt_4);
      *(uint8_t *)((int64_t)ptr2_Int_11 + (int64_t)pInt_4) = 0;
      pLong_3 = *(int64_t **)(param_1 + 0x1a);
      goto joined_r0x00018065061b;
    }
    func_0x18007bba0(ptr2_Int_1,pInt_4);
  }
  pLong_3 = *(int64_t **)(param_1 + 0x1a);
joined_r0x00018065061b:
  if (pLong_3 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,ptr2_Int_1);
  }
  local_90 = ptr2_Int_1;
  if (0 < *param_1) {
    iVal_10 = 0;
    do {
      func_0x180653160(local_88,param_2);
      func_0x180652d60(local_88);
      if (0xf < local_70) {
        uVal_6 = local_70 + 1;
        lVal_8 = (int64_t)local_88;
        if (0xfff < uVal_6) {
          lVal_8 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_8)) goto LAB_18065086b;
          uVal_6 = local_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_6);
      }
      if (param_3 == '\0') {
LAB_180650732:
        local_78 = 2;
        local_70 = 0xf;
        stack0xffffffffffffff7a = SUB1614(ZEXT816(0),2);
        local_88._0_2_ = 0x6261;
        ch_5 = func_0x180652d10(param_1 + 2,param_2,local_88);
        if (0xf < local_70) {
          uVal_6 = local_70 + 1;
          lVal_8 = (int64_t)local_88;
          if (0xfff < uVal_6) {
            lVal_8 = *(int64_t *)((int64_t)local_88 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_8)) goto LAB_18065086b;
            uVal_6 = local_70 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_8,uVal_6);
        }
        if (ch_5 == '\0') {
          pLong_3 = *(int64_t **)(param_1 + 0x2a);
          if (pLong_3 != (int64_t *)0x0) {
            local_88 = (uint8_t  [8])*(uint64_t *)(param_1 + 2);
            (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,local_90,local_88);
          }
          return;
        }
        Sleep(param_1[1]);
      }
      else {
        local_78 = 2;
        local_70 = 0xf;
        stack0xffffffffffffff7a = SUB1614(ZEXT816(0),2);
        local_88._0_2_ = 0x6277;
        ch_5 = func_0x180652d10(local_b0,param_2,local_88);
        if (0xf < local_70) {
          uVal_6 = local_70 + 1;
          lVal_8 = (int64_t)local_88;
          if (0xfff < uVal_6) {
            lVal_8 = *(int64_t *)((int64_t)local_88 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_8)) goto LAB_18065086b;
            uVal_6 = local_70 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_8,uVal_6);
        }
        if (ch_5 == '\0') {
          func_0x18068a690(local_b0[0]);
          goto LAB_180650732;
        }
      }
      iVal_10 = iVal_10 + 1;
    } while (iVal_10 < *param_1);
  }
  pU64_7 = (uint32_t *)func_0x1806823dc();
  uVal_2 = *pU64_7;
  func_0x1800ba170(local_d0,local_90);
  func_0x1800d9690(local_b0,"Failed opening file ",local_d0);
  func_0x1806509f0(local_88,local_b0," for writing");
  func_0x180651c70(local_88,uVal_2);
LAB_18065086b:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180650870
void Unwind_180650870(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1806508b0
void Unwind_1806508b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1806508f0
void Unwind_1806508f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180650930
void Unwind_180650930(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180650970
void Unwind_180650970(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x48);
  return;
}

// Unwind@1806509b0
void Unwind_1806509b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x1806509f0
uint32_t * func_0x1806509f0(uint32_t *param_1,uint64_t *param_2,char *param_3)
{
  int64_t lVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  size_t sz_9;
  uint64_t *pU64_10;
  
  sz_9 = strlen(param_3);
  lVal_1 = param_2[2];
  if ((uint64_t)(param_2[3] - lVal_1) < sz_9) {
    param_2 = (uint64_t *)func_0x180082950(param_2,sz_9,sz_9,param_3,sz_9);
  }
  else {
    param_2[2] = sz_9 + lVal_1;
    pU64_10 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      pU64_10 = (uint64_t *)*param_2;
    }
    func_0x1806aa960((uint8_t *)(lVal_1 + (int64_t)pU64_10),param_3);
    *(uint8_t *)((int64_t)pU64_10 + sz_9 + lVal_1) = 0;
  }
  uVal_2 = *(uint32_t *)param_2;
  uVal_3 = *(uint32_t *)((int64_t)param_2 + 4);
  uVal_4 = *(uint32_t *)(param_2 + 1);
  uVal_5 = *(uint32_t *)((int64_t)param_2 + 0xc);
  uVal_6 = *(uint32_t *)((int64_t)param_2 + 0x14);
  uVal_7 = *(uint32_t *)(param_2 + 3);
  uVal_8 = *(uint32_t *)((int64_t)param_2 + 0x1c);
  param_1[4] = *(uint32_t *)(param_2 + 2);
  param_1[5] = uVal_6;
  param_1[6] = uVal_7;
  param_1[7] = uVal_8;
  *param_1 = uVal_2;
  param_1[1] = uVal_3;
  param_1[2] = uVal_4;
  param_1[3] = uVal_5;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(uint8_t *)param_2 = 0;
  return param_1;
}

// Unwind@180650b00
void Unwind_180650b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180650b30
void Unwind_180650b30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x180650b60
void func_0x180650b60(int64_t param_1,uint64_t *param_2)
{
  uint32_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t *pU64_3;
  char ch_4;
  uint8_t local_68 [32];
  uint8_t local_48 [32];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_1 + 8) != 0) {
    ch_4 = func_0x180653370(*param_2,param_2[1]);
    if (ch_4 == '\0') {
      pU64_3 = (uint32_t *)func_0x1806823dc();
      uVal_1 = *pU64_3;
      func_0x1800ba170(local_68,param_1 + 0x10);
      func_0x1800d9690(local_48,"Failed writing to file ",local_68);
      func_0x180651c70(local_48,uVal_1);
      fnPtr_2 = (func_ptr_t )swi(3);
      (*fnPtr_2)();
      return;
    }
  }
  return;
}

// Unwind@180650be0
void Unwind_180650be0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180650c10
void Unwind_180650c10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x180650c40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180650c40(uint64_t *param_1,uint64_t param_2,uint8_t param_3,uint64_t param_4)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint64_t unaff_RBX;
  uint8_t local_78 [16];
  uint64_t local_68;
  uint64_t local_60;
  uint64_t *local_50;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  *(uint32_t *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_1806b4180;
  local_48 = (uint64_t *)func_0x180672de0(0xd8);
  local_68 = 2;
  local_60 = 0xf;
  local_78._2_14_ = SUB1614(ZEXT816(0),2);
  local_78._0_2_ = 0xa0d;
  func_0x1806539f0(local_48,0,local_78);
  param_1[2] = local_48;
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  *(uint32_t *)(param_1 + 3) = 2;
  *param_1 = &PTR_LAB_1806ded80;
  uVal_3 = _UNK_1806ded7c;
  uVal_2 = _UNK_1806ded78;
  uVal_1 = _UNK_1806ded74;
  *(uint32_t *)(param_1 + 0xc) = _DAT_1806ded70;
  *(uint32_t *)((int64_t)param_1 + 100) = uVal_1;
  *(uint32_t *)(param_1 + 0xd) = uVal_2;
  *(uint32_t *)((int64_t)param_1 + 0x6c) = uVal_3;
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
  param_1[0x12] = 0xf;
  local_48 = param_1;
  func_0x180650130(param_1 + 0x13,param_4);
  local_50 = local_48 + 0xd;
  func_0x180650560(local_50,param_2,CONCAT71((int7)((uint64_t)unaff_RBX >> 8),param_3) & 0xffffffff);
  return local_48;
}

// Unwind@180650d50
void Unwind_180650d50(uint64_t param_1,int64_t param_2)
{
  func_0x1806503e0(*(uint64_t *)(param_2 + 0x48));
  return;
}

// Unwind@180650d90
void Unwind_180650d90(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x50);
  *pU64_1 = &PTR_FUN_1806b4180;
  pU64_1 = (uint64_t *)pU64_1[2];
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180650de0
void Unwind_180650de0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0xd8);
  return;
}

// Unwind@180650e20
void Unwind_180650e20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(int64_t *)(param_2 + 0x50) + 0x78);
  return;
}

// Unwind@180650ee0
void Unwind_180650ee0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x20) != param_2 + 0x40) {
    thunk_FUN_180695dd0();
  }
  return;
}

// Unwind@180650fa0
void Unwind_180650fa0(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@180651040
void Unwind_180651040(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x20));
  return;
}

// Unwind@1806510f0
void Unwind_1806510f0(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@1806511c0
void Unwind_1806511c0(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x38));
  return;
}

// Unwind@1806511f0
void Unwind_1806511f0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = (uint64_t *)**(int64_t **)(param_2 + 0x30);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806512a0
void Unwind_1806512a0(uint64_t param_1,int64_t param_2)
{
  func_0x180651360(param_2 + 0x28);
  return;
}

// func_0x180651360
void func_0x180651360(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    func_0x180651390(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0xd8);
    return;
  }
  return;
}

// func_0x180651390
void func_0x180651390(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  int64_t *pLong_3;
  uint64_t *pU64_4;
  uint64_t *pU64_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  int64_t *pLong_9;
  
  lVal_1 = *(int64_t *)(param_1 + 0xb0);
  if (lVal_1 != 0) {
    uVal_8 = *(int64_t *)(param_1 + 0xc0) - lVal_1;
    lVal_7 = lVal_1;
    if (0xfff < uVal_8) {
      lVal_7 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_7)) goto LAB_18065159d;
      uVal_8 = uVal_8 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_8);
    *(uint8_t (*)[16])(param_1 + 0xb0) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0xc0) = 0;
  }
  pU64_2 = *(uint64_t **)(param_1 + 0xa0);
  *(uint64_t *)pU64_2[1] = 0;
  pU64_2 = (uint64_t *)*pU64_2;
  while (pU64_2 != (uint64_t *)0x0) {
    pU64_4 = (uint64_t *)*pU64_2;
    pU64_5 = (uint64_t *)pU64_2[3];
    if (pU64_5 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_5)(pU64_5,1);
    }
    thunk_FUN_180695dd0(pU64_2,0x20);
    pU64_2 = pU64_4;
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_1 + 0xa0),0x20);
  pLong_9 = *(int64_t **)(param_1 + 0x80);
  if (pLong_9 != (int64_t *)0x0) {
    pLong_3 = *(int64_t **)(param_1 + 0x88);
    if (pLong_9 == pLong_3) {
      uVal_8 = *(int64_t *)(param_1 + 0x90) - (int64_t)pLong_9;
    }
    else {
      do {
        pU64_2 = (uint64_t *)*pLong_9;
        if (pU64_2 != (uint64_t *)0x0) {
          (**(func_ptr_t *)*pU64_2)(pU64_2,1);
        }
        pLong_9 = pLong_9 + 1;
      } while (pLong_9 != pLong_3);
      pLong_9 = *(int64_t **)*(uint8_t (*)[16])(param_1 + 0x80);
      uVal_8 = *(int64_t *)(param_1 + 0x90) - (int64_t)pLong_9;
    }
    if (0xfff < uVal_8) {
      if (0x1f < (uint64_t)((int64_t)pLong_9 + (-8 - (int64_t)(int64_t *)pLong_9[-1])))
      goto LAB_18065159d;
      uVal_8 = uVal_8 + 0x27;
      pLong_9 = (int64_t *)pLong_9[-1];
    }
    thunk_FUN_180695dd0(pLong_9,uVal_8);
    *(uint8_t (*)[16])(param_1 + 0x80) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x90) = 0;
  }
  uVal_8 = *(uint64_t *)(param_1 + 0x40);
  if (0xf < uVal_8) {
    lVal_1 = *(int64_t *)(param_1 + 0x28);
    uVal_6 = uVal_8 + 1;
    lVal_7 = lVal_1;
    if (0xfff < uVal_6) {
      lVal_7 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_7)) goto LAB_18065159d;
      uVal_6 = uVal_8 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
  }
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x40) = 0xf;
  *(uint8_t *)(param_1 + 0x28) = 0;
  uVal_8 = *(uint64_t *)(param_1 + 0x20);
  if (0xf < uVal_8) {
    lVal_1 = *(int64_t *)(param_1 + 8);
    uVal_6 = uVal_8 + 1;
    lVal_7 = lVal_1;
    if (0xfff < uVal_6) {
      lVal_7 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_7)) {
LAB_18065159d:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_8 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0xf;
  *(uint8_t *)(param_1 + 8) = 0;
  return;
}

// func_0x1806515a0
void func_0x1806515a0(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  
  lVal_1 = *(int64_t *)(param_1 + 0x18);
  if (lVal_1 != 0) {
    uVal_6 = *(int64_t *)(param_1 + 0x28) - lVal_1;
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
    *(uint8_t (*)[16])(param_1 + 0x18) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x28) = 0;
  }
  pU64_2 = *(uint64_t **)(param_1 + 8);
  *(uint64_t *)pU64_2[1] = 0;
  pU64_2 = (uint64_t *)*pU64_2;
  while (pU64_2 != (uint64_t *)0x0) {
    pU64_3 = (uint64_t *)*pU64_2;
    pU64_4 = (uint64_t *)pU64_2[3];
    if (pU64_4 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_4)(pU64_4,1);
    }
    thunk_FUN_180695dd0(pU64_2,0x20);
    pU64_2 = pU64_3;
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_1 + 8),0x20);
  return;
}

// func_0x180651650
void func_0x180651650(int64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  
  pU64_1 = (uint64_t *)*param_1;
  *(uint64_t *)pU64_1[1] = 0;
  pU64_1 = (uint64_t *)*pU64_1;
  while (pU64_1 != (uint64_t *)0x0) {
    pU64_2 = (uint64_t *)*pU64_1;
    pU64_3 = (uint64_t *)pU64_1[3];
    if (pU64_3 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_3)(pU64_3,1);
    }
    thunk_FUN_180695dd0(pU64_1,0x20);
    pU64_1 = pU64_2;
  }
  thunk_FUN_180695dd0(*param_1,0x20);
  return;
}

// func_0x1806516c0
uint64_t * func_0x1806516c0(uint64_t *param_1,uint8_t (*param_2)[16])
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t *pU64_5;
  uint64_t uVal_6;
  uint8_t local_d8 [64];
  uint8_t local_98 [16];
  uint64_t local_88;
  uint64_t local_80;
  uint8_t local_78 [16];
  uint8_t local_68 [28];
  uint32_t local_4c;
  uint64_t local_48;
  uint8_t local_39;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = func_0x180672de0(0xd8);
  local_4c = 0;
  func_0x180651890(local_d8,&local_4c,&local_39);
  local_88 = 2;
  local_80 = 0xf;
  local_98._2_14_ = SUB1614(ZEXT816(0),2);
  local_98._0_2_ = 0xa0d;
  local_78 = ZEXT816(0);
  local_68._0_16_ = ZEXT816(0);
  uVal_1 = *(uint64_t *)param_2[1];
  if (0xf < *(uint64_t *)(param_2[1] + 8)) {
    param_2 = *(uint8_t (**)[16])*param_2;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      local_68._8_8_ = 0xf;
      local_68._0_8_ = uVal_1;
      local_78 = *param_2;
    }
    else {
      uVal_3 = uVal_1 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        uVal_3 = func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_6 + 0x28);
        uVal_3 = lVal_4 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_3 - 8) = lVal_4;
      }
      local_78._0_8_ = uVal_3;
      local_68._8_8_ = uVal_6;
      local_68._0_8_ = uVal_1;
      func_0x1806aa960(uVal_3,param_2,uVal_1 + 1);
    }
    func_0x1806554e0(local_48,local_78,0,local_98,local_d8);
    *param_1 = local_48;
    return param_1;
  }
  func_0x18007ba70(local_48);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_5 = (uint64_t *)(*fnPtr_2)();
  return pU64_5;
}

// Unwind@180651810
void Unwind_180651810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  func_0x1806515a0(param_2 + 0x30);
  return;
}

// Unwind@180651850
void Unwind_180651850(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0xc0),0xd8);
  return;
}

// func_0x180651890
uint32_t * func_0x180651890(uint32_t *param_1,uint32_t *param_2)
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

// Unwind@1806519b0
void Unwind_1806519b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x180651650(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1806519f0
uint64_t * func_0x1806519f0(uint64_t *param_1,uint64_t *param_2,uint32_t param_3)
{
  uint64_t uVal_1;
  uint8_t *pU64_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  int64_t *pLong_7;
  uint64_t uVal_8;
  uint8_t *local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  func_ptr_t local_1a0;
  uint8_t local_198 [256];
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t *local_78;
  uint64_t *local_70;
  int64_t *local_68;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *param_1 = &PTR_LAB_1806dee78;
  *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
  param_1[5] = 0;
  param_1[6] = 0xf;
  local_1b0 = 0;
  local_1a0 = func_0x1800b02d0;
  local_1a8 = 0xfa;
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  pLong_7 = param_1 + 3;
  local_1b8 = local_198;
  func_0x180640070(&local_1b8,param_3,param_2);
  uVal_1 = local_1b0;
  pU64_2 = local_1b8;
  _local_98 = ZEXT816(0);
  if (local_1b0 < 0x10) {
    pU64_6 = local_98;
    uVal_8 = 0xf;
  }
  else {
    local_78 = param_1 + 1;
    uVal_3 = local_1b0 | 0xf;
    uVal_8 = 0x16;
    if (0x16 < uVal_3) {
      uVal_8 = uVal_3;
    }
    local_70 = param_1;
    local_68 = pLong_7;
    if (uVal_3 < 0xfff) {
      pU64_6 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
    }
    else {
      lVal_4 = func_0x180672de0(uVal_8 + 0x28);
      pU64_6 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_6 + -8) = lVal_4;
    }
    local_98 = (uint8_t  [8])pU64_6;
    pLong_7 = local_68;
    param_1 = local_70;
  }
  local_88 = uVal_1;
  uStack_80 = uVal_8;
  func_0x1806aa960(pU64_6,pU64_2,uVal_1);
  pU64_6[uVal_1] = 0;
  uVal_1 = param_1[6];
  if (0xf < uVal_1) {
    lVal_4 = *pLong_7;
    uVal_8 = uVal_1 + 1;
    lVal_5 = lVal_4;
    if (0xfff < uVal_8) {
      lVal_5 = *(int64_t *)(lVal_4 + -8);
      if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_5)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_8 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_8);
  }
  *(uint32_t *)(pLong_7 + 2) = (uint32_t)local_88;
  *(uint32_t *)((int64_t)pLong_7 + 0x14) = local_88._4_4_;
  *(uint32_t *)(pLong_7 + 3) = (uint32_t)uStack_80;
  *(uint32_t *)((int64_t)pLong_7 + 0x1c) = uStack_80._4_4_;
  *(uint32_t *)pLong_7 = local_98._0_4_;
  *(uint32_t *)((int64_t)pLong_7 + 4) = local_98._4_4_;
  *(uint32_t *)(pLong_7 + 1) = (uint32_t)uStack_90;
  *(uint32_t *)((int64_t)pLong_7 + 0xc) = uStack_90._4_4_;
  if (local_1b8 != local_198) {
    thunk_FUN_180695dd0();
  }
  return param_1;
}

// Unwind@180651bd0
void Unwind_180651bd0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x20) != param_2 + 0x40) {
    thunk_FUN_180695dd0();
  }
  func_0x180001e70(*(uint64_t *)(param_2 + 0x170));
  **(uint64_t **)(param_2 + 0x168) = std::exception::vftable;
  func_0x18067b490(*(uint64_t *)(param_2 + 0x160));
  return;
}

// func_0x180651c70
void func_0x180651c70(uint64_t param_1,uint32_t param_2)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_68 [32];
  uint8_t local_48 [56];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  func_0x1806519f0(local_48,param_1,param_2);
  func_0x18067a120(local_48,&DAT_180832240);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180651dd0
void Unwind_180651dd0(uint64_t param_1,int64_t param_2)
{
  **(uint64_t **)(param_2 + 0x30) = std::exception::vftable;
  func_0x18067b490(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x180651ea0
void func_0x180651ea0(uint32_t *param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t **local_50;
  uint8_t local_48 [16];
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t *local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  local_28 = param_1[4];
  uStack_24 = param_1[5];
  uStack_20 = param_1[6];
  uStack_1c = param_1[7];
  *(uint64_t *)(param_1 + 4) = 0;
  *(uint64_t *)(param_1 + 6) = 0xf;
  *(uint8_t *)param_1 = 0;
  local_48 = ZEXT816(0);
  local_50 = &PTR_LAB_1806dee78;
  local_18 = param_1;
  func_0x18067a120(&local_50,&DAT_180832240);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180651f00
void Unwind_180651f00(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = (*(int64_t **)(param_2 + 0x60))[3];
  if (0xf < uVal_1) {
    lVal_2 = **(int64_t **)(param_2 + 0x60);
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
  return;
}

// func_0x180651f60
uint32_t * func_0x180651f60(uint32_t *param_1,uint32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  int iVal_9;
  uint32_t *pU64_10;
  uint64_t uVal_11;
  
  uVal_11 = 0xfffffffffffffffe;
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x12) = 0xffffffff;
  *param_1 = 2;
  *(uint8_t *)(param_1 + 0x14) = 0;
  *(uint8_t (*)[16])(param_1 + 0x16) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1a) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1e) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x22) = 0;
  iVal_9 = func_0x180675fe0(param_2);
  if (iVal_9 == 0) {
    if (param_2[0x13] != 0x7fffffff) {
      LOCK();
      *(byte *)(param_1 + 0x14) = *(byte *)(param_2 + 0x14) & 1;
      UNLOCK();
      uVal_2 = param_2[0x16];
      uVal_3 = param_2[0x17];
      uVal_4 = param_2[0x18];
      uVal_5 = param_2[0x19];
      uVal_6 = param_2[0x1b];
      uVal_7 = param_2[0x1c];
      uVal_8 = param_2[0x1d];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x1b] = uVal_6;
      param_1[0x1c] = uVal_7;
      param_1[0x1d] = uVal_8;
      param_1[0x16] = uVal_2;
      param_1[0x17] = uVal_3;
      param_1[0x18] = uVal_4;
      param_1[0x19] = uVal_5;
      if (param_1 != param_2) {
        func_0x180659000(param_1 + 0x1e,*(int64_t *)(param_2 + 0x1e),
                      (*(int64_t *)(param_2 + 0x20) - *(int64_t *)(param_2 + 0x1e) >> 7) *
                      -0x5555555555555555,param_4,param_1 + 0x16,param_2,uVal_11);
      }
      func_0x180676070(param_2);
      return param_1;
    }
  }
  else {
    func_0x180674150(5);
  }
  param_2[0x13] = 0x7ffffffe;
  func_0x180674150(6);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_10 = (uint32_t *)(*fnPtr_1)();
  return pU64_10;
}

// Unwind@180652060
void Unwind_180652060(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@180652090
void Unwind_180652090(uint64_t param_1,int64_t param_2)
{
  func_0x1806520d0(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x1806520c0
byte func_0x1806520c0(int64_t param_1)
{
  return *(byte *)(param_1 + 0x50) & 1;
}

// func_0x1806520d0
void func_0x1806520d0(int64_t param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  
  lVal_3 = *(int64_t *)(param_1 + 0x20);
  if (lVal_3 != 0) {
    lVal_4 = *(int64_t *)(param_1 + 0x28);
    if (lVal_3 != lVal_4) {
      lVal_3 = lVal_3 + 0x80;
      do {
        if (lVal_3 != *(int64_t *)(lVal_3 + -0x20)) {
          thunk_FUN_180695dd0();
        }
        lVal_2 = lVal_3 + 0x100;
        lVal_3 = lVal_3 + 0x180;
      } while (lVal_2 != lVal_4);
      lVal_3 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x20);
    }
    uVal_1 = *(int64_t *)(param_1 + 0x30) - lVal_3;
    lVal_4 = lVal_3;
    if (0xfff < uVal_1) {
      lVal_4 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_1 = uVal_1 | 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_1);
    *(uint8_t (*)[16])(param_1 + 0x20) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x30) = 0;
  }
  return;
}

// func_0x180652180
void func_0x180652180(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  
  uVal_10 = 0xfffffffffffffffe;
  iVal_1 = func_0x180675fe0();
  if (iVal_1 == 0) {
    if (*(int *)(param_1 + 0x4c) == 0x7fffffff) goto LAB_180652453;
    *(uint8_t *)(param_1 + 0x50) = 1;
    uVal_9 = param_2 + 1;
    if (uVal_9 == 0) {
      uVal_6 = 0;
      uVal_7 = 0;
      lVal_2 = 0;
LAB_18065236c:
      *(uint64_t *)(param_1 + 0x58) = uVal_9;
      *(uint8_t (*)[16])(param_1 + 0x60) = ZEXT816(0);
      *(uint64_t *)(param_1 + 0x70) = 0;
      lVal_4 = *(int64_t *)(param_1 + 0x78);
      if (lVal_4 != 0) {
        lVal_5 = *(int64_t *)(param_1 + 0x80);
        if (lVal_4 != lVal_5) {
          lVal_4 = lVal_4 + 0x80;
          do {
            if (lVal_4 != *(int64_t *)(lVal_4 + -0x20)) {
              thunk_FUN_180695dd0();
            }
            lVal_3 = lVal_4 + 0x100;
            lVal_4 = lVal_4 + 0x180;
          } while (lVal_3 != lVal_5);
          lVal_4 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x78);
        }
        uVal_9 = *(int64_t *)(param_1 + 0x88) - lVal_4;
        lVal_5 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_5 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_5)) goto LAB_18065246c;
          uVal_9 = uVal_9 | 0x27;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_9);
        *(uint8_t (*)[16])(param_1 + 0x78) = ZEXT816(0);
        *(uint64_t *)(param_1 + 0x88) = 0;
      }
      *(uint64_t *)(param_1 + 0x78) = uVal_6;
      *(uint64_t *)(param_1 + 0x80) = uVal_7;
      *(int64_t *)(param_1 + 0x88) = lVal_2;
      func_0x180676070(param_1);
      return;
    }
    if (uVal_9 < 0xaaaaaaaaaaaaab) {
      if (uVal_9 < 0xb) {
        uVal_6 = func_0x180672de0(uVal_9 * 0x180);
      }
      else {
        lVal_2 = func_0x180672de0(uVal_9 * 0x180 | 0x27);
        uVal_6 = lVal_2 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_6 - 8) = lVal_2;
      }
      uVal_7 = uVal_6;
      uVal_8 = uVal_9;
      if ((param_2 & 1) == 0) {
        func_0x1806ab010(uVal_6,0,0x180,param_4,param_1,uVal_10);
        *(uint32_t *)(uVal_6 + 0x10) = 6;
        *(uint8_t (*)[16])(uVal_6 + 0x18) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_6 + 0x28) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_6 + 0x34) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_6 + 0x48) = ZEXT816(0);
        *(uint64_t *)(uVal_6 + 0x58) = 0;
        *(func_ptr_t *)(uVal_6 + 0x78) = func_0x1800b02d0;
        *(uint64_t *)(uVal_6 + 0x60) = uVal_6 + 0x80;
        *(uint64_t *)(uVal_6 + 0x70) = 0xfa;
        uVal_7 = uVal_6 + 0x180;
        uVal_8 = param_2;
      }
      lVal_2 = uVal_9 * 0x180 + uVal_6;
      if (param_2 != 0) {
        do {
          func_0x1806ab010(uVal_7,0,0x180);
          *(uint32_t *)(uVal_7 + 0x10) = 6;
          *(uint8_t (*)[16])(uVal_7 + 0x18) = ZEXT816(0);
          *(uint8_t (*)[16])(uVal_7 + 0x28) = ZEXT816(0);
          *(uint8_t (*)[16])(uVal_7 + 0x34) = ZEXT816(0);
          *(uint8_t (*)[16])(uVal_7 + 0x48) = ZEXT816(0);
          *(uint64_t *)(uVal_7 + 0x58) = 0;
          *(func_ptr_t *)(uVal_7 + 0x78) = func_0x1800b02d0;
          *(uint64_t *)(uVal_7 + 0x60) = uVal_7 + 0x80;
          *(uint64_t *)(uVal_7 + 0x70) = 0xfa;
          func_0x1806ab010(uVal_7 + 0x180,0,0x180);
          *(uint32_t *)(uVal_7 + 400) = 6;
          *(uint8_t (*)[16])(uVal_7 + 0x198) = ZEXT816(0);
          *(uint8_t (*)[16])(uVal_7 + 0x1a8) = ZEXT816(0);
          *(uint8_t (*)[16])(uVal_7 + 0x1b4) = ZEXT816(0);
          *(uint8_t (*)[16])(uVal_7 + 0x1c8) = ZEXT816(0);
          *(uint64_t *)(uVal_7 + 0x1d8) = 0;
          *(func_ptr_t *)(uVal_7 + 0x1f8) = func_0x1800b02d0;
          *(uint64_t *)(uVal_7 + 0x1e0) = uVal_7 + 0x200;
          *(uint64_t *)(uVal_7 + 0x1f0) = 0xfa;
          uVal_7 = uVal_7 + 0x300;
          uVal_8 = uVal_8 - 2;
        } while (uVal_8 != 0);
      }
      goto LAB_18065236c;
    }
  }
  else {
    func_0x180674150(5);
LAB_180652453:
    *(uint32_t *)(param_1 + 0x4c) = 0x7ffffffe;
    func_0x180674150(6);
  }
  func_0x18007c0d0();
LAB_18065246c:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180652470
void Unwind_180652470(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x1806524b0
void func_0x1806524b0(int64_t param_1,uint64_t param_2)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  int iVal_3;
  uint8_t local_1a8 [96];
  uint8_t *local_148;
  uint8_t local_128 [256];
  int64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  iVal_3 = func_0x180675fe0();
  if (iVal_3 == 0) {
    local_28 = param_1;
    if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
      func_0x180652800(local_1a8,param_2);
      lVal_2 = local_28;
      func_0x180652590(local_28 + 0x58,local_1a8);
      if (local_148 != local_128) {
        thunk_FUN_180695dd0();
      }
      func_0x180676070(lVal_2);
      return;
    }
  }
  else {
    func_0x180674150(5);
  }
  *(uint32_t *)(local_28 + 0x4c) = 0x7ffffffe;
  func_0x180674150(6);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180652560
void Unwind_180652560(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x1a0));
  return;
}

// func_0x180652590
void func_0x180652590(uint64_t *param_1,uint32_t *param_2)
{
  int64_t *pLong_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  uint8_t uVal_4;
  int64_t lVal_5;
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
  uint32_t uVal_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  uint64_t uVal_24;
  uint32_t *pU64_25;
  uint8_t *pU64_26;
  int64_t lVal_27;
  
  if (*param_1 == 0) {
    return;
  }
  uVal_23 = param_1[2];
  uVal_21 = param_1[4];
  lVal_27 = uVal_23 * 0x180;
  uVal_6 = param_2[0x15];
  uVal_7 = param_2[0x16];
  uVal_8 = param_2[0x17];
  pU64_2 = (uint32_t *)(uVal_21 + 0x50 + lVal_27);
  *pU64_2 = param_2[0x14];
  pU64_2[1] = uVal_6;
  pU64_2[2] = uVal_7;
  pU64_2[3] = uVal_8;
  uVal_6 = param_2[0x11];
  uVal_7 = param_2[0x12];
  uVal_8 = param_2[0x13];
  pU64_2 = (uint32_t *)(uVal_21 + 0x40 + lVal_27);
  *pU64_2 = param_2[0x10];
  pU64_2[1] = uVal_6;
  pU64_2[2] = uVal_7;
  pU64_2[3] = uVal_8;
  uVal_6 = *param_2;
  uVal_7 = param_2[1];
  uVal_8 = param_2[2];
  uVal_9 = param_2[3];
  uVal_10 = param_2[4];
  uVal_11 = param_2[5];
  uVal_12 = param_2[6];
  uVal_13 = param_2[7];
  uVal_14 = param_2[8];
  uVal_15 = param_2[9];
  uVal_16 = param_2[10];
  uVal_17 = param_2[0xb];
  uVal_18 = param_2[0xd];
  uVal_19 = param_2[0xe];
  uVal_20 = param_2[0xf];
  pU64_2 = (uint32_t *)(uVal_21 + 0x30 + lVal_27);
  *pU64_2 = param_2[0xc];
  pU64_2[1] = uVal_18;
  pU64_2[2] = uVal_19;
  pU64_2[3] = uVal_20;
  pU64_2 = (uint32_t *)(uVal_21 + 0x20 + lVal_27);
  *pU64_2 = uVal_14;
  pU64_2[1] = uVal_15;
  pU64_2[2] = uVal_16;
  pU64_2[3] = uVal_17;
  pU64_2 = (uint32_t *)(uVal_21 + 0x10 + lVal_27);
  *pU64_2 = uVal_10;
  pU64_2[1] = uVal_11;
  pU64_2[2] = uVal_12;
  pU64_2[3] = uVal_13;
  pU64_2 = (uint32_t *)(uVal_21 + lVal_27);
  *pU64_2 = uVal_6;
  pU64_2[1] = uVal_7;
  pU64_2[2] = uVal_8;
  pU64_2[3] = uVal_9;
  pU64_26 = (uint8_t *)(uVal_21 + lVal_27 + 0x80);
  if (*(uint8_t **)(uVal_21 + 0x60 + lVal_27) != pU64_26) {
    thunk_FUN_180695dd0();
  }
  pLong_1 = (int64_t *)(uVal_21 + lVal_27);
  uVal_22 = *(uint64_t *)(param_2 + 0x1a);
  lVal_5 = *(int64_t *)(param_2 + 0x1c);
  pU64_2 = param_2 + 0x20;
  if (*(uint32_t **)(param_2 + 0x18) != pU64_2) {
    pLong_1[0xc] = (int64_t)*(uint32_t **)(param_2 + 0x18);
    pLong_1[0xe] = lVal_5;
    *(uint32_t **)(param_2 + 0x18) = pU64_2;
    *(uint8_t (*)[16])(param_2 + 0x1a) = ZEXT816(0);
    goto LAB_1806526a2;
  }
  pLong_1[0xc] = (int64_t)pU64_26;
  pLong_1[0xe] = lVal_5;
  if (uVal_22 == 0) goto LAB_1806526a2;
  pU64_25 = pU64_2;
  if ((3 < uVal_22) && (lVal_5 = uVal_23 * 0x180, 0x1f < (lVal_5 + uVal_21) - (int64_t)param_2)) {
    if (uVal_22 < 0x20) {
      uVal_23 = 0;
    }
    else {
      uVal_23 = uVal_22 & 0xffffffffffffffe0;
      lVal_5 = lVal_5 + uVal_21;
      uVal_24 = 0;
      do {
        pU64_3 = (uint32_t *)((int64_t)param_2 + uVal_24 + 0x80);
        uVal_6 = pU64_3[1];
        uVal_7 = pU64_3[2];
        uVal_8 = pU64_3[3];
        pU64_25 = (uint32_t *)((int64_t)param_2 + uVal_24 + 0x90);
        uVal_9 = *pU64_25;
        uVal_10 = pU64_25[1];
        uVal_11 = pU64_25[2];
        uVal_12 = pU64_25[3];
        pU64_25 = (uint32_t *)(lVal_5 + 0x80 + uVal_24);
        *pU64_25 = *pU64_3;
        pU64_25[1] = uVal_6;
        pU64_25[2] = uVal_7;
        pU64_25[3] = uVal_8;
        pU64_25 = (uint32_t *)(lVal_5 + 0x90 + uVal_24);
        *pU64_25 = uVal_9;
        pU64_25[1] = uVal_10;
        pU64_25[2] = uVal_11;
        pU64_25[3] = uVal_12;
        uVal_24 = uVal_24 + 0x20;
      } while (uVal_23 != uVal_24);
      if (uVal_22 == uVal_23) goto LAB_1806526a2;
      if ((uVal_22 & 0x1c) == 0) {
        pU64_26 = pU64_26 + uVal_23;
        pU64_25 = (uint32_t *)((int64_t)pU64_2 + uVal_23);
        goto LAB_18065268b;
      }
    }
    uVal_24 = uVal_22 & 0xfffffffffffffffc;
    do {
      *(uint32_t *)(pU64_26 + uVal_23) = *(uint32_t *)((int64_t)pU64_2 + uVal_23);
      uVal_23 = uVal_23 + 4;
    } while (uVal_24 != uVal_23);
    pU64_26 = pU64_26 + uVal_24;
    pU64_25 = (uint32_t *)((int64_t)pU64_2 + uVal_24);
    if (uVal_22 == uVal_24) goto LAB_1806526a2;
  }
LAB_18065268b:
  do {
    uVal_4 = *(uint8_t *)pU64_25;
    pU64_25 = (uint32_t *)((int64_t)pU64_25 + 1);
    *pU64_26 = uVal_4;
    pU64_26 = pU64_26 + 1;
  } while (pU64_25 != (uint32_t *)((int64_t)pU64_2 + uVal_22));
LAB_1806526a2:
  uVal_23 = pLong_1[0xe];
  if (uVal_23 < uVal_22) {
    (*(func_ptr_t )pLong_1[0xf])(uVal_21 + lVal_27 + 0x60);
    uVal_23 = pLong_1[0xe];
  }
  if (uVal_22 < uVal_23) {
    uVal_23 = uVal_22;
  }
  pLong_1[0xd] = uVal_23;
  *pLong_1 = pLong_1[0xc];
  pLong_1[10] = pLong_1[0xc] + pLong_1[1];
  uVal_23 = *param_1;
  uVal_21 = param_1[2] + 1;
  if ((uVal_21 | uVal_23) >> 0x20 == 0) {
    uVal_21 = (uVal_21 & 0xffffffff) % (uVal_23 & 0xffffffff);
    param_1[2] = uVal_21;
    if (uVal_21 != param_1[1]) {
      return;
    }
  }
  else {
    uVal_21 = uVal_21 % uVal_23;
    param_1[2] = uVal_21;
    if (uVal_21 != param_1[1]) {
      return;
    }
  }
  uVal_22 = 0;
  if (uVal_21 + 1 != uVal_23) {
    uVal_22 = uVal_21 + 1;
  }
  param_1[1] = uVal_22;
  param_1[3] = param_1[3] + 1;
  return;
}

// Unwind@1806527e0
void Unwind_1806527e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180652800
int64_t * func_0x180652800(int64_t *param_1,uint32_t *param_2)
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
  int64_t lVal_21;
  int64_t lVal_22;
  uint64_t uVal_23;
  uint64_t uVal_24;
  uint64_t uVal_25;
  uint64_t uVal_26;
  
  uVal_5 = param_2[1];
  uVal_6 = param_2[2];
  uVal_7 = param_2[3];
  uVal_8 = param_2[4];
  uVal_9 = param_2[5];
  uVal_10 = param_2[6];
  uVal_11 = param_2[7];
  uVal_12 = param_2[8];
  uVal_13 = param_2[9];
  uVal_14 = param_2[10];
  uVal_15 = param_2[0xb];
  uVal_16 = param_2[0xc];
  uVal_17 = param_2[0xd];
  uVal_18 = param_2[0xe];
  uVal_19 = param_2[0xf];
  *(uint32_t *)param_1 = *param_2;
  *(uint32_t *)((int64_t)param_1 + 4) = uVal_5;
  *(uint32_t *)(param_1 + 1) = uVal_6;
  *(uint32_t *)((int64_t)param_1 + 0xc) = uVal_7;
  uVal_5 = param_2[0x15];
  uVal_6 = param_2[0x16];
  uVal_7 = param_2[0x17];
  *(uint32_t *)(param_1 + 10) = param_2[0x14];
  *(uint32_t *)((int64_t)param_1 + 0x54) = uVal_5;
  *(uint32_t *)(param_1 + 0xb) = uVal_6;
  *(uint32_t *)((int64_t)param_1 + 0x5c) = uVal_7;
  uVal_5 = param_2[0x11];
  uVal_6 = param_2[0x12];
  uVal_7 = param_2[0x13];
  *(uint32_t *)(param_1 + 8) = param_2[0x10];
  *(uint32_t *)((int64_t)param_1 + 0x44) = uVal_5;
  *(uint32_t *)(param_1 + 9) = uVal_6;
  *(uint32_t *)((int64_t)param_1 + 0x4c) = uVal_7;
  *(uint32_t *)(param_1 + 6) = uVal_16;
  *(uint32_t *)((int64_t)param_1 + 0x34) = uVal_17;
  *(uint32_t *)(param_1 + 7) = uVal_18;
  *(uint32_t *)((int64_t)param_1 + 0x3c) = uVal_19;
  *(uint32_t *)(param_1 + 4) = uVal_12;
  *(uint32_t *)((int64_t)param_1 + 0x24) = uVal_13;
  *(uint32_t *)(param_1 + 5) = uVal_14;
  *(uint32_t *)((int64_t)param_1 + 0x2c) = uVal_15;
  *(uint32_t *)(param_1 + 2) = uVal_8;
  *(uint32_t *)((int64_t)param_1 + 0x14) = uVal_9;
  *(uint32_t *)(param_1 + 3) = uVal_10;
  *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_11;
  param_1[0xd] = 0;
  param_1[0xf] = (int64_t)func_0x1800b02d0;
  param_1[0xc] = (int64_t)(param_1 + 0x10);
  param_1[0xe] = 0xfa;
  if (param_1[1] == 0) {
    lVal_20 = 0;
  }
  else {
    lVal_21 = *param_1;
    lVal_22 = param_1[1] + lVal_21;
    lVal_20 = 0;
    do {
      uVal_25 = lVal_22 - lVal_21;
      uVal_23 = param_1[0xe];
      if (uVal_23 < uVal_25 + lVal_20) {
        (*(func_ptr_t )param_1[0xf])();
        lVal_20 = param_1[0xd];
        uVal_23 = param_1[0xe];
      }
      uVal_26 = uVal_23 - lVal_20;
      if (uVal_25 <= uVal_23 - lVal_20) {
        uVal_26 = uVal_25;
      }
      if (uVal_26 != 0) {
        lVal_4 = param_1[0xc];
        lVal_1 = lVal_4 + lVal_20;
        if ((uVal_26 < 4) || ((uint64_t)(lVal_1 - lVal_21) < 0x20)) {
          uVal_23 = 0;
LAB_180652909:
          uVal_24 = uVal_23;
          for (uVal_25 = uVal_26 & 3; uVal_25 != 0; uVal_25 = uVal_25 - 1) {
            *(uint8_t *)(lVal_1 + uVal_24) = *(uint8_t *)(lVal_21 + uVal_24);
            uVal_24 = uVal_24 + 1;
          }
          if (uVal_23 - uVal_26 < 0xfffffffffffffffd) {
            lVal_20 = lVal_20 + lVal_4;
            do {
              *(uint8_t *)(lVal_20 + uVal_24) = *(uint8_t *)(lVal_21 + uVal_24);
              *(uint8_t *)(lVal_20 + 1 + uVal_24) = *(uint8_t *)(lVal_21 + 1 + uVal_24);
              *(uint8_t *)(lVal_20 + 2 + uVal_24) = *(uint8_t *)(lVal_21 + 2 + uVal_24);
              *(uint8_t *)(lVal_20 + 3 + uVal_24) = *(uint8_t *)(lVal_21 + 3 + uVal_24);
              uVal_24 = uVal_24 + 4;
            } while (uVal_26 != uVal_24);
          }
        }
        else if (uVal_26 < 0x20) {
          uVal_25 = 0;
LAB_1806529e2:
          uVal_23 = uVal_26 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_25) = *(uint32_t *)(lVal_21 + uVal_25);
            uVal_25 = uVal_25 + 4;
          } while (uVal_23 != uVal_25);
          if (uVal_26 != uVal_23) goto LAB_180652909;
        }
        else {
          uVal_23 = uVal_26 & 0xffffffffffffffe0;
          uVal_25 = 0;
          do {
            pU64_2 = (uint32_t *)(lVal_21 + uVal_25);
            uVal_5 = pU64_2[1];
            uVal_6 = pU64_2[2];
            uVal_7 = pU64_2[3];
            pU64_3 = (uint32_t *)(lVal_21 + 0x10 + uVal_25);
            uVal_8 = *pU64_3;
            uVal_9 = pU64_3[1];
            uVal_10 = pU64_3[2];
            uVal_11 = pU64_3[3];
            pU64_3 = (uint32_t *)(lVal_4 + lVal_20 + uVal_25);
            *pU64_3 = *pU64_2;
            pU64_3[1] = uVal_5;
            pU64_3[2] = uVal_6;
            pU64_3[3] = uVal_7;
            pU64_2 = (uint32_t *)(lVal_4 + lVal_20 + 0x10 + uVal_25);
            *pU64_2 = uVal_8;
            pU64_2[1] = uVal_9;
            pU64_2[2] = uVal_10;
            pU64_2[3] = uVal_11;
            uVal_25 = uVal_25 + 0x20;
          } while (uVal_23 != uVal_25);
          if (uVal_26 != uVal_23) {
            uVal_25 = uVal_23;
            if ((uVal_26 & 0x1c) == 0) goto LAB_180652909;
            goto LAB_1806529e2;
          }
        }
        lVal_20 = param_1[0xd];
      }
      lVal_20 = lVal_20 + uVal_26;
      param_1[0xd] = lVal_20;
      lVal_21 = lVal_21 + uVal_26;
    } while (lVal_21 != lVal_22);
  }
  if (param_1[0xb] != 0) {
    lVal_21 = param_1[10];
    lVal_22 = param_1[0xb] + lVal_21;
    do {
      uVal_25 = lVal_22 - lVal_21;
      uVal_23 = param_1[0xe];
      if (uVal_23 < uVal_25 + lVal_20) {
        (*(func_ptr_t )param_1[0xf])();
        lVal_20 = param_1[0xd];
        uVal_23 = param_1[0xe];
      }
      uVal_26 = uVal_23 - lVal_20;
      if (uVal_25 <= uVal_23 - lVal_20) {
        uVal_26 = uVal_25;
      }
      if (uVal_26 != 0) {
        lVal_4 = param_1[0xc];
        lVal_1 = lVal_4 + lVal_20;
        if ((uVal_26 < 4) || ((uint64_t)(lVal_1 - lVal_21) < 0x20)) {
          uVal_23 = 0;
LAB_180652a99:
          uVal_24 = uVal_23;
          for (uVal_25 = uVal_26 & 3; uVal_25 != 0; uVal_25 = uVal_25 - 1) {
            *(uint8_t *)(lVal_1 + uVal_24) = *(uint8_t *)(lVal_21 + uVal_24);
            uVal_24 = uVal_24 + 1;
          }
          if (uVal_23 - uVal_26 < 0xfffffffffffffffd) {
            lVal_20 = lVal_20 + lVal_4;
            do {
              *(uint8_t *)(lVal_20 + uVal_24) = *(uint8_t *)(lVal_21 + uVal_24);
              *(uint8_t *)(lVal_20 + 1 + uVal_24) = *(uint8_t *)(lVal_21 + 1 + uVal_24);
              *(uint8_t *)(lVal_20 + 2 + uVal_24) = *(uint8_t *)(lVal_21 + 2 + uVal_24);
              *(uint8_t *)(lVal_20 + 3 + uVal_24) = *(uint8_t *)(lVal_21 + 3 + uVal_24);
              uVal_24 = uVal_24 + 4;
            } while (uVal_26 != uVal_24);
          }
        }
        else if (uVal_26 < 0x20) {
          uVal_25 = 0;
LAB_180652b72:
          uVal_23 = uVal_26 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_25) = *(uint32_t *)(lVal_21 + uVal_25);
            uVal_25 = uVal_25 + 4;
          } while (uVal_23 != uVal_25);
          if (uVal_26 != uVal_23) goto LAB_180652a99;
        }
        else {
          uVal_23 = uVal_26 & 0xffffffffffffffe0;
          uVal_25 = 0;
          do {
            pU64_2 = (uint32_t *)(lVal_21 + uVal_25);
            uVal_5 = pU64_2[1];
            uVal_6 = pU64_2[2];
            uVal_7 = pU64_2[3];
            pU64_3 = (uint32_t *)(lVal_21 + 0x10 + uVal_25);
            uVal_8 = *pU64_3;
            uVal_9 = pU64_3[1];
            uVal_10 = pU64_3[2];
            uVal_11 = pU64_3[3];
            pU64_3 = (uint32_t *)(lVal_4 + lVal_20 + uVal_25);
            *pU64_3 = *pU64_2;
            pU64_3[1] = uVal_5;
            pU64_3[2] = uVal_6;
            pU64_3[3] = uVal_7;
            pU64_2 = (uint32_t *)(lVal_4 + lVal_20 + 0x10 + uVal_25);
            *pU64_2 = uVal_8;
            pU64_2[1] = uVal_9;
            pU64_2[2] = uVal_10;
            pU64_2[3] = uVal_11;
            uVal_25 = uVal_25 + 0x20;
          } while (uVal_23 != uVal_25);
          if (uVal_26 != uVal_23) {
            uVal_25 = uVal_23;
            if ((uVal_26 & 0x1c) == 0) goto LAB_180652a99;
            goto LAB_180652b72;
          }
        }
        lVal_20 = param_1[0xd];
      }
      lVal_20 = lVal_20 + uVal_26;
      param_1[0xd] = lVal_20;
      lVal_21 = lVal_21 + uVal_26;
    } while (lVal_21 != lVal_22);
  }
  *param_1 = param_1[0xc];
  param_1[10] = param_1[0xc] + param_1[1];
  return param_1;
}

// Unwind@180652bc0
void Unwind_180652bc0(uint64_t param_1,int64_t param_2)
{
  if (**(int64_t **)(param_2 + 0x20) != *(int64_t *)(param_2 + 0x28)) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x180652c00
uint32_t * func_0x180652c00(uint32_t *param_1,uint32_t *param_2,uint32_t *param_3,uint32_t param_4, uint32_t *param_5)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  DWORD DVar3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint32_t *pU64_6;
  uint8_t auStack_78 [32];
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t local_48;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  local_28 = *param_5;
  uStack_24 = param_5[1];
  uStack_20 = param_5[2];
  uStack_1c = param_5[3];
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = *(uint64_t *)(param_2 + 4);
  uVal_4 = _Xtime_get_ticks();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  param_1[4] = param_4;
  *(uint64_t *)(param_1 + 6) = uVal_4;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c380) == '\x01') {
    uVal_5 = *(uint64_t *)
             (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
             0x1c378);
  }
  else {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x1c380) = 1;
    DVar3 = GetCurrentThreadId();
    uVal_5 = (uint64_t)DVar3;
    *(uint64_t *)(lVal_1 + 0x1c378) = uVal_5;
  }
  *(uint64_t *)(param_1 + 8) = uVal_5;
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  param_1[0xe] = local_58;
  param_1[0xf] = uStack_54;
  param_1[0x10] = uStack_50;
  param_1[0x11] = uStack_4c;
  *(uint64_t *)(param_1 + 0x12) = local_48;
  param_1[0x14] = local_28;
  param_1[0x15] = uStack_24;
  param_1[0x16] = uStack_20;
  param_1[0x17] = uStack_1c;
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_78)) {
    return param_1;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_78);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_6 = (uint32_t *)(*fnPtr_2)();
  return pU64_6;
}

// func_0x180652d10
bool func_0x180652d10(_iobuf **param_1,uint64_t *param_2,uint64_t *param_3)
{
  _iobuf *p_Var1;
  
  if (0xf < (uint64_t)param_3[3]) {
    param_3 = (uint64_t *)*param_3;
  }
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  p_Var1 = common_fsopen<char>((char *)param_2,(char *)param_3,0x40);
  *param_1 = p_Var1;
  return p_Var1 == (_iobuf *)0x0;
}

// API-MS-WIN-CORE-SYNCH-L1-2-0.DLL::Sleep
void __stdcall Sleep(DWORD dwMilliseconds)
{
                    /* WARNING: Could not recover jumptable at 0x000180652d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}

// func_0x180652d60
uint64_t func_0x180652d60(uint64_t *param_1)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t *pU64_6;
  int64_t lVal_7;
  uint8_t *pU64_8;
  uint64_t unaff_R13;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint8_t local_198 [16];
  uint8_t local_188 [16];
  uint8_t local_178 [16];
  uint8_t local_168 [16];
  uint8_t local_158 [16];
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint64_t local_90;
  uint8_t local_88 [16];
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  pU64_6 = param_1;
  if (0xf < (uint64_t)param_1[3]) {
    pU64_6 = (uint64_t *)*param_1;
  }
  iVal_2 = func_0x1806866cc(pU64_6,local_198);
  if (iVal_2 == 0) {
    uVal_5 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  }
  else {
    uVal_3 = param_1[2];
    if (uVal_3 == 0) {
      uVal_5 = 0;
    }
    else {
      uVal_9 = 0;
      do {
        pU64_8 = local_88;
        pU64_6 = param_1;
        if (0xf < (uint64_t)param_1[3]) {
          pU64_6 = (uint64_t *)*param_1;
        }
        lVal_7 = uVal_3 - uVal_9;
        local_90 = uVal_9;
        uVal_10 = uVal_3;
        if (uVal_9 <= uVal_3 && lVal_7 != 0) {
          if (lVal_7 + 2U < 0x10) {
            local_a8 = ZEXT816(0);
            local_b8 = ZEXT816(0);
            local_c8 = ZEXT816(0);
            local_d8 = ZEXT816(0);
            local_e8 = ZEXT816(0);
            local_f8 = ZEXT816(0);
            local_108 = ZEXT816(0);
            local_118 = ZEXT816(0);
            local_128 = ZEXT816(0);
            local_138 = ZEXT816(0);
            local_158 = ZEXT816(0);
            local_168 = ZEXT816(0);
            local_188 = ZEXT816(0);
            local_198 = ZEXT816(0);
            local_148._0_12_ = SUB1612(ZEXT816(0),0);
            local_148[12] = 1;
            local_148._13_3_ = 0;
            local_178._0_15_ = SUB1615(ZEXT816(0),0);
            local_178[15] = 1;
            do {
              if (local_198[*(byte *)((int64_t)pU64_6 + uVal_9)] != '\0')
              goto joined_r0x000180652edc;
              lVal_7 = uVal_9 + 1;
              uVal_9 = uVal_9 + 1;
            } while ((uint64_t)((int64_t)pU64_6 + lVal_7) < (int64_t)pU64_6 + uVal_3);
            uVal_9 = 0xffffffffffffffff;
          }
          else {
            lVal_7 = thunk_FUN_180676a30((int64_t)pU64_6 + uVal_9,lVal_7,&DAT_1806dee88,2);
            uVal_3 = param_1[2];
            uVal_10 = uVal_3;
            if (lVal_7 == -1) goto joined_r0x000180652f0d;
            uVal_9 = lVal_7 + uVal_9;
          }
joined_r0x000180652edc:
          uVal_10 = uVal_3;
          if ((uVal_9 != 0xffffffffffffffff) && (uVal_10 = uVal_9, uVal_9 <= uVal_3)) {
            uVal_3 = uVal_9;
          }
        }
joined_r0x000180652f0d:
        if ((int64_t)uVal_3 < 0) {
          local_88 = ZEXT816(0);
          func_0x18007ba70();
          fnPtr_1 = (func_ptr_t )swi(3);
          uVal_5 = (*fnPtr_1)();
          return uVal_5;
        }
        local_88 = ZEXT816(0);
        pU64_6 = (uint64_t *)*param_1;
        uVal_5 = param_1[3];
        uVal_9 = 0xf;
        if (0xf < uVal_3) {
          uVal_4 = uVal_3 | 0xf;
          uVal_9 = 0x16;
          if (0x16 < uVal_4) {
            uVal_9 = uVal_4;
          }
          if (uVal_4 < 0xfff) {
            pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
          }
          else {
            lVal_7 = func_0x180672de0(uVal_9 + 0x28);
            pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_8 + -8) = lVal_7;
          }
          local_88._0_8_ = pU64_8;
        }
        if (uVal_5 < 0x10) {
          pU64_6 = param_1;
        }
        local_78 = uVal_3;
        local_70 = uVal_9;
        func_0x1806aa960(pU64_8,pU64_6,uVal_3);
        pU64_8[uVal_3] = 0;
        if (local_78 == 2) {
          pU64_8 = local_88;
          if (0xf < local_70) {
            pU64_8 = (uint8_t *)local_88._0_8_;
          }
          if (pU64_8[1] == ':') {
            if (local_70 < 3) {
              func_0x18008c590(local_88,1);
            }
            else {
              local_78 = 3;
              pU64_8 = (uint8_t *)local_88._0_8_;
              if (local_70 < 0x10) {
                pU64_8 = local_88;
              }
              *(uint16_t *)(pU64_8 + 2) = 0x5c;
            }
            uVal_10 = uVal_10 + 1;
            if (local_78 == 0) goto LAB_180653090;
          }
LAB_180653031:
          pU64_8 = local_88;
          if (0xf < local_70) {
            pU64_8 = (uint8_t *)local_88._0_8_;
          }
          iVal_2 = func_0x1806866cc(pU64_8,local_198);
          if (iVal_2 == 0) goto LAB_180653090;
          pU64_8 = local_88;
          if (0xf < local_70) {
            pU64_8 = (uint8_t *)local_88._0_8_;
          }
          iVal_2 = func_0x1806851a8(pU64_8);
          if (iVal_2 == 0) goto LAB_180653090;
          uVal_5 = 0;
          uVal_9 = local_90;
        }
        else {
          if (local_78 != 0) goto LAB_180653031;
LAB_180653090:
          uVal_5 = CONCAT71((int7)((uint64_t)pU64_6 >> 8),1);
          uVal_9 = uVal_10 + 1;
        }
        if (0xf < local_70) {
          uVal_3 = local_70 + 1;
          lVal_7 = local_88._0_8_;
          if (0xfff < uVal_3) {
            lVal_7 = *(int64_t *)(local_88._0_8_ + -8);
            if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_7)) {
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_3 = local_70 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_3);
        }
        uVal_3 = param_1[2];
      } while (((byte)uVal_5 & uVal_9 < uVal_3) != 0);
    }
  }
  return uVal_5 & 0xffffffff;
}

// Unwind@180653110
void Unwind_180653110(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// func_0x180653160
uint8_t (*func_0x180653160(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  byte *pU8_1;
  char ch_2;
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t *pU64_7;
  uint8_t (*pArr16_8)[16];
  int64_t lVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  
  lVal_5 = param_2[2];
  pU64_7 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    pU64_7 = (uint64_t *)*param_2;
  }
  if (lVal_5 != 0) {
    if (lVal_5 + 2U < 0x10) {
      local_48 = ZEXT816(0);
      local_58 = ZEXT816(0);
      local_68 = ZEXT816(0);
      local_78 = ZEXT816(0);
      local_88 = ZEXT816(0);
      local_98 = ZEXT816(0);
      local_a8 = ZEXT816(0);
      local_b8 = ZEXT816(0);
      local_c8 = ZEXT816(0);
      local_d8 = ZEXT816(0);
      local_f8 = ZEXT816(0);
      local_108 = ZEXT816(0);
      local_128 = ZEXT816(0);
      local_138 = ZEXT816(0);
      local_e8._0_12_ = SUB1612(ZEXT816(0),0);
      local_e8[12] = 1;
      local_e8._13_3_ = 0;
      local_118._0_15_ = SUB1615(ZEXT816(0),0);
      local_118[15] = 1;
      lVal_9 = (int64_t)pU64_7 + lVal_5 + -1;
      ch_2 = local_138[*(byte *)((int64_t)pU64_7 + lVal_5 + -1)];
      while (ch_2 == '\0') {
        lVal_5 = lVal_5 + -1;
        if (lVal_5 == 0) goto LAB_18065332f;
        pU8_1 = (byte *)(lVal_9 + -1);
        lVal_9 = lVal_9 + -1;
        ch_2 = local_138[*pU8_1];
      }
      uVal_10 = lVal_9 - (int64_t)pU64_7;
    }
    else {
      uVal_10 = func_0x180676ba0(pU64_7,lVal_5,&DAT_1806dee88,2);
    }
    if (uVal_10 != 0xffffffffffffffff) {
      *param_1 = ZEXT816(0);
      if ((uint64_t)param_2[2] < uVal_10) {
        uVal_10 = param_2[2];
      }
      if (-1 < (int64_t)uVal_10) {
        pU64_7 = (uint64_t *)*param_2;
        uVal_3 = param_2[3];
        uVal_11 = 0xf;
        pArr16_8 = param_1;
        if (0xf < uVal_10) {
          uVal_6 = uVal_10 | 0xf;
          uVal_11 = 0x16;
          if (0x16 < uVal_6) {
            uVal_11 = uVal_6;
          }
          if (uVal_6 < 0xfff) {
            pArr16_8 = (uint8_t (*)[16])func_0x180672de0(uVal_11 + 1);
          }
          else {
            lVal_5 = func_0x180672de0(uVal_11 + 0x28);
            pArr16_8 = (uint8_t (*)[16])(lVal_5 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pArr16_8[-1] + 8) = lVal_5;
          }
          *(uint8_t (**)[16])*param_1 = pArr16_8;
        }
        if (0xf < uVal_3) {
          param_2 = pU64_7;
        }
        *(uint64_t *)param_1[1] = uVal_10;
        *(uint64_t *)(param_1[1] + 8) = uVal_11;
        func_0x1806aa960(pArr16_8,param_2,uVal_10);
        (*pArr16_8)[uVal_10] = 0;
        return param_1;
      }
      func_0x18007ba70();
      fnPtr_4 = (func_ptr_t )swi(3);
      pArr16_8 = (uint8_t (*)[16])(*fnPtr_4)();
      return pArr16_8;
    }
  }
LAB_18065332f:
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  return param_1;
}

// func_0x180653370
bool func_0x180653370(uint64_t param_1,int64_t param_2,uint64_t param_3)
{
  int64_t lVal_1;
  
  lVal_1 = func_0x18068385c(param_1,1,param_2,param_3);
  return lVal_1 == param_2;
}

// func_0x1806533a0
uint32_t * func_0x1806533a0(uint32_t *param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  char *fnPtr_5;
  uint32_t *pU64_6;
  size_t sz_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  uint8_t *pU64_11;
  int64_t *pLong_12;
  uint64_t *pU64_13;
  uint64_t uVal_14;
  uint8_t local_108 [16];
  uint64_t local_f8;
  uint64_t local_f0;
  int64_t local_e0 [2];
  uint32_t *local_d0;
  uint32_t *local_c8;
  uint32_t *local_c0;
  uint32_t *local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  char *local_a0;
  uint64_t *local_98;
  uint32_t *local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78 [16];
  uint32_t *local_68;
  int64_t *local_60;
  uint32_t *local_58;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  param_1[0x12] = 0xffffffff;
  *param_1 = 2;
  *(uint64_t *)(param_1 + 0x13) = 0x200000000;
  *(uint8_t (*)[16])(param_1 + 0x16) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1a) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x1e) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x22) = ZEXT816(0);
  *(uint64_t *)(param_1 + 0x26) = 0xffffffff;
  *(uint8_t (*)[16])(param_1 + 0x2a) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x2e) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x32) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x36) = ZEXT816(0);
  param_1[0x3a] = 0xffffffff;
  param_1[0x28] = 0x102;
  param_1[0x3b] = 0;
  local_68 = param_1 + 0x3c;
  auArr_3._12_4_ = 0;
  auArr_3._0_12_ = stack0xffffffffffffff7c;
  _local_88 = auArr_3 << 0x20;
  func_0x18065bb20(local_68,local_88,local_e0);
  local_d0 = param_1 + 0x4c;
  auArr_4._12_4_ = 0;
  auArr_4._0_12_ = stack0xffffffffffffff7c;
  _local_88 = auArr_4 << 0x20;
  pU64_11 = local_88;
  func_0x180112d50(local_d0,pU64_11,local_e0);
  local_58 = (uint32_t *)func_0x180672de0(0xd8);
  local_f8 = 2;
  local_f0 = 0xf;
  local_108._2_14_ = SUB1614(ZEXT816(0),2);
  local_108._0_2_ = 0xa0d;
  func_0x1806539f0(local_58,0,local_108);
  *(uint32_t **)(param_1 + 0x5c) = local_58;
  *(uint64_t *)(param_1 + 0x5e) = 0x600000002;
  local_b8 = param_1 + 0x60;
  local_90 = param_1 + 0x6e;
  local_c8 = param_1 + 0x70;
  local_c0 = param_1 + 0x74;
  local_98 = (uint64_t *)(param_1 + 0x76);
  *(uint8_t (*)[16])(param_1 + 0x6e) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x72) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x76) = ZEXT816(0);
  *(uint8_t *)(param_1 + 0x7a) = 1;
  *(uint64_t *)(param_1 + 0x7c) = 0;
  local_58 = param_1;
  local_60 = (int64_t *)func_0x180672de0(0x50);
  local_60[1] = 0x100000001;
  *local_60 = (int64_t)&PTR_FUN_1806deee0;
  pLong_12 = local_60 + 2;
  func_0x1806715f0(pLong_12,1);
  local_a8 = local_60;
  local_a0 = "";
  local_b0 = pLong_12;
  local_60 = (int64_t *)func_0x180672de0(0x128);
  local_60[1] = 0x100000001;
  *local_60 = (int64_t)&PTR_FUN_1806b41d0;
  pU64_13 = local_60 + 2;
  func_0x18065bcb0(pU64_13,&local_a0,&local_b0);
  *(uint64_t **)(local_58 + 0x76) = pU64_13;
  pLong_12 = *(int64_t **)(local_58 + 0x78);
  *(int64_t **)(local_58 + 0x78) = local_60;
  if (pLong_12 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_12 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_12)(pLong_12);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_12 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_12 + 8))(pLong_12);
      }
    }
  }
  fnPtr_5 = local_a0;
  _local_88 = ZEXT816(0);
  local_78 = ZEXT816(0);
  sz_7 = strlen(local_a0);
  if (-1 < (int64_t)sz_7) {
    uVal_14 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_8) {
        uVal_14 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_14 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_88 = (uint8_t  [8])pU64_11;
    }
    pU64_6 = local_68;
    local_78._8_8_ = uVal_14;
    local_78._0_8_ = sz_7;
    func_0x1806aa960(pU64_11,fnPtr_5,sz_7);
    pU64_11[sz_7] = 0;
    func_0x18065bdd0(pU64_6,local_e0,local_88);
    pU64_6 = local_58;
    if (*(int64_t *)(local_58 + 0x78) == 0) {
      uVal_10 = 0;
    }
    else {
      LOCK();
      pInt_2 = (int *)(*(int64_t *)(local_58 + 0x78) + 8);
      *pInt_2 = *pInt_2 + 1;
      UNLOCK();
      uVal_10 = *(uint64_t *)(local_58 + 0x78);
    }
    *(uint64_t *)(local_e0[0] + 0x30) = *local_98;
    pLong_12 = *(int64_t **)(local_e0[0] + 0x38);
    *(uint64_t *)(local_e0[0] + 0x38) = uVal_10;
    if (pLong_12 != (int64_t *)0x0) {
      LOCK();
      pLong_1 = pLong_12 + 1;
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (**(func_ptr_t *)*pLong_12)(pLong_12);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_12 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_12 + 8))(pLong_12);
        }
      }
    }
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_14 = local_78._8_8_ + 1;
      lVal_9 = (int64_t)local_88;
      if (0xfff < uVal_14) {
        lVal_9 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_9)) goto LAB_180653790;
        uVal_14 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_14);
    }
    pLong_12 = local_a8;
    if (local_a8 != (int64_t *)0x0) {
      LOCK();
      pLong_1 = local_a8 + 1;
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (**(func_ptr_t *)*local_a8)(local_a8);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_12 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_12 + 8))(pLong_12);
        }
      }
    }
    return pU64_6;
  }
  func_0x18007ba70();
LAB_180653790:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1806537a0
void Unwind_1806537a0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0xd0),0xd8);
  return;
}

// Unwind@1806537e0
void Unwind_1806537e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@180653820
void Unwind_180653820(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x78);
  return;
}

// Unwind@180653860
void Unwind_180653860(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x90));
  func_0x180653c80(*(uint64_t *)(param_2 + 0x68));
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x60));
  pLong_1 = **(int64_t ***)(param_2 + 0x98);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x70));
    **(uint64_t **)(param_2 + 0x98) = 0;
  }
  pU64_2 = *(uint64_t **)(*(int64_t *)(param_2 + 0xd0) + 0x170);
  if (pU64_2 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_2)(pU64_2,1);
  }
  return;
}

// Unwind@1806538f0
void Unwind_1806538f0(uint64_t param_1,int64_t param_2)
{
  func_0x18008ad20(*(uint64_t *)(param_2 + 0x58));
  return;
}

// Unwind@180653930
void Unwind_180653930(uint64_t param_1,int64_t param_2)
{
  func_0x180653cb0(*(uint64_t *)(param_2 + 0xc0));
  return;
}

// Unwind@180653970
void Unwind_180653970(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 200),0x50);
  return;
}

// Unwind@1806539b0
void Unwind_1806539b0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 200),0x128);
  return;
}

// func_0x1806539f0
uint64_t * func_0x1806539f0(uint64_t *param_1,uint32_t param_2,int64_t *param_3,uint64_t param_4)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
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
  uint64_t local_48;
  int64_t *local_40;
  uint64_t *local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = &PTR_LAB_1806dee90;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  param_1[3] = 2;
  param_1[4] = 0xf;
  *(uint16_t *)(param_1 + 1) = 0x2b25;
  *(uint8_t (*)[16])(param_1 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  uVal_4 = *(uint32_t *)param_3;
  uVal_5 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_6 = *(uint32_t *)(param_3 + 1);
  uVal_7 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_8 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_9 = *(uint32_t *)(param_3 + 3);
  uVal_10 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  *(uint32_t *)(param_1 + 7) = *(uint32_t *)(param_3 + 2);
  *(uint32_t *)((int64_t)param_1 + 0x3c) = uVal_8;
  *(uint32_t *)(param_1 + 8) = uVal_9;
  *(uint32_t *)((int64_t)param_1 + 0x44) = uVal_10;
  *(uint32_t *)(param_1 + 5) = uVal_4;
  *(uint32_t *)((int64_t)param_1 + 0x2c) = uVal_5;
  *(uint32_t *)(param_1 + 6) = uVal_6;
  *(uint32_t *)((int64_t)param_1 + 0x34) = uVal_7;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(uint8_t *)param_3 = 0;
  *(uint32_t *)(param_1 + 9) = param_2;
  *(uint8_t *)((int64_t)param_1 + 0x4c) = 1;
  *(uint8_t (*)[16])(param_1 + 0xf) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x11) = ZEXT816(0);
  local_38 = (uint64_t *)((uint64_t)local_38 & 0xffffffff00000000);
  local_40 = param_3;
  func_0x180651890(param_1 + 0x13,&local_38,&local_48,param_4,param_1 + 1,param_1 + 5,param_1 + 0x10,
                param_1 + 0x13);
  *(uint8_t (*)[16])(param_1 + 0xc) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  *(uint32_t *)(param_1 + 0xe) = 0;
  local_38 = (uint64_t *)func_0x180672de0(0x158);
  *(uint8_t (*)[16])(local_38 + 1) = ZEXT816(0);
  *local_38 = &PTR_FUN_1806deea8;
  local_38[3] = 0;
  local_38[5] = 0;
  local_38[7] = func_0x1800b02d0;
  local_38[4] = local_38 + 8;
  local_38[6] = 0xfa;
  *(uint8_t (*)[16])(local_38 + 0x29) = ZEXT816(0);
  local_38[0x28] = &PTR_FUN_1806deeb8;
  local_48 = 0;
  pU64_1 = (uint64_t *)param_1[0x11];
  if (pU64_1 == (uint64_t *)param_1[0x12]) {
    func_0x180639250(param_1 + 0x10,pU64_1,&local_38);
    if (local_38 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*local_38)(local_38,1);
    }
  }
  else {
    *pU64_1 = local_38;
    param_1[0x11] = param_1[0x11] + 8;
  }
  uVal_2 = local_40[3];
  if (0xf < uVal_2) {
    lVal_3 = *local_40;
    uVal_11 = uVal_2 + 1;
    lVal_12 = lVal_3;
    if (0xfff < uVal_11) {
      lVal_12 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_12)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_11 = uVal_2 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_12,uVal_11);
  }
  return param_1;
}

// Unwind@180653bc0
void Unwind_180653bc0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x50);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  func_0x180655c60(param_2 + 0x40);
  return;
}

// Unwind@180653c00
void Unwind_180653c00(uint64_t param_1,int64_t param_2)
{
  func_0x1806515a0(*(uint64_t *)(param_2 + 0x38));
  return;
}

// Unwind@180653c30
void Unwind_180653c30(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(*(uint64_t *)(param_2 + 0x30));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  return;
}

// func_0x180653c80
void func_0x180653c80(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    func_0x180671680(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0xb0);
    return;
  }
  return;
}

// func_0x180653cb0
void func_0x180653cb0(int64_t param_1)
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
  func_0x1806597f0(param_1 + 8,*(uint64_t *)(param_1 + 8));
  thunk_FUN_180695dd0(*(uint64_t *)(param_1 + 8),0x40);
  return;
}

// func_0x180653e80
void func_0x180653e80(int64_t param_1,uint8_t (*param_2)[16])
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint8_t (*pArr16_7)[16];
  int64_t lVal_8;
  int64_t local_38 [2];
  uint8_t (*local_28)[16];
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVal_8 = *(int64_t *)*param_2 + 8;
  local_28 = param_2;
  func_0x180654550(param_1,lVal_8);
  func_0x18065c380(param_1 + 0xf0,local_38,lVal_8);
  pArr16_7 = local_28;
  uVal_4 = *(uint32_t *)(*local_28 + 4);
  uVal_5 = *(uint32_t *)(*local_28 + 8);
  uVal_6 = *(uint32_t *)(*local_28 + 0xc);
  *local_28 = ZEXT816(0);
  pLong_3 = *(int64_t **)(local_38[0] + 0x38);
  *(uint32_t *)(local_38[0] + 0x30) = *(uint32_t *)*local_28;
  *(uint32_t *)(local_38[0] + 0x34) = uVal_4;
  *(uint32_t *)(local_38[0] + 0x38) = uVal_5;
  *(uint32_t *)(local_38[0] + 0x3c) = uVal_6;
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
  pLong_3 = *(int64_t **)(*pArr16_7 + 8);
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
  return;
}

// Unwind@180653f30
void Unwind_180653f30(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x30));
  return;
}

// func_0x180653f60
void func_0x180653f60(int64_t param_1,uint8_t (*param_2)[16])
{
  int *pInt_1;
  int64_t **ptr2_Long_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t _Size;
  void *_Buf1;
  int64_t lVal_5;
  int64_t *pLong_6;
  func_ptr_t fnPtr_7;
  int iVal_8;
  int64_t **ptr2_Long_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint32_t *pU64_12;
  uint64_t uVal_13;
  void *_Buf2;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  int64_t lVal_18;
  uint8_t local_c0 [8];
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  int64_t local_a8 [7];
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t local_58;
  uint8_t (*local_50)[16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
  iVal_8 = func_0x180675fe0();
  if (iVal_8 != 0) {
    func_0x180674150(5);
LAB_180654331:
    *(uint32_t *)(param_1 + 0x4c) = 0x7ffffffe;
    func_0x180674150(6);
    fnPtr_7 = (func_ptr_t )swi(3);
    (*fnPtr_7)();
    return;
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) goto LAB_180654331;
  lVal_17 = *(int64_t *)*local_50;
  local_58 = param_1;
  (**(func_ptr_t *)(**(int64_t **)(param_1 + 0x170) + 0x10))(*(int64_t **)(param_1 + 0x170),&local_60);
  ptr2_Long_9 = *(int64_t ***)(lVal_17 + 0x28);
  while (pLong_6 = local_60, ptr2_Long_2 = *(int64_t ***)(lVal_17 + 0x30), ptr2_Long_9 != ptr2_Long_2) {
    pLong_3 = *ptr2_Long_9;
    if (ptr2_Long_9 + 2 == ptr2_Long_2) {
      local_60 = (int64_t *)0x0;
      local_68 = pLong_6;
      (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3);
      break;
    }
    (**(func_ptr_t *)(*local_60 + 0x10))(local_60,local_c0);
    (**(func_ptr_t *)(*pLong_3 + 0x20))(pLong_3,local_c0);
    ptr2_Long_9 = ptr2_Long_9 + 2;
  }
  if (local_60 != (int64_t *)0x0) {
    (**(func_ptr_t *)*local_60)();
  }
  lVal_17 = local_58;
  if (*(uint64_t **)(local_58 + 0x1b8) != (uint64_t *)0x0) {
    lVal_4 = *(int64_t *)*local_50;
    local_70 = (int64_t *)0x0;
    local_70 = (int64_t *)(**(func_ptr_t *)**(uint64_t **)(local_58 + 0x1b8))();
    lVal_17 = local_58;
    if ((int64_t *)(lVal_4 + 0x48) == local_a8) {
      if (local_70 != (int64_t *)0x0) {
        (**(func_ptr_t *)(*local_70 + 0x20))(local_70);
      }
    }
    else {
      if (*(int64_t **)(lVal_4 + 0x80) != (int64_t *)0x0) {
        (**(func_ptr_t *)(**(int64_t **)(lVal_4 + 0x80) + 0x20))();
        *(uint64_t *)(lVal_4 + 0x80) = 0;
      }
      if (local_70 != (int64_t *)0x0) {
        if (local_70 == local_a8) {
          uVal_10 = (**(func_ptr_t *)(*local_70 + 8))(local_70);
          *(uint64_t *)(lVal_4 + 0x80) = uVal_10;
          if (local_70 != (int64_t *)0x0) {
            (**(func_ptr_t *)(*local_70 + 0x20))();
          }
        }
        else {
          *(int64_t **)(lVal_4 + 0x80) = local_70;
        }
      }
    }
  }
  lVal_4 = *(int64_t *)*local_50;
  _Size = *(uint64_t *)(lVal_4 + 0x18);
  if (*(uint64_t *)(lVal_4 + 0x20) < 0x10) {
    _Buf1 = (void *)(lVal_4 + 8);
  }
  else {
    _Buf1 = *(void **)(lVal_4 + 8);
  }
  if (_Size == 0) {
    uVal_14 = 0xcbf29ce484222325;
  }
  else {
    uVal_11 = (uint64_t)((uint)_Size & 3);
    if (_Size < 4) {
      uVal_14 = 0xcbf29ce484222325;
      uVal_13 = 0;
    }
    else {
      uVal_14 = 0xcbf29ce484222325;
      uVal_13 = 0;
      do {
        uVal_14 = ((uint64_t)*(byte *)((int64_t)_Buf1 + uVal_13 + 3) ^
                 ((uint64_t)*(byte *)((int64_t)_Buf1 + uVal_13 + 2) ^
                 ((uint64_t)*(byte *)((int64_t)_Buf1 + uVal_13 + 1) ^
                 (*(byte *)((int64_t)_Buf1 + uVal_13) ^ uVal_14) * 0x100000001b3) * 0x100000001b3) *
                 0x100000001b3) * 0x100000001b3;
        uVal_13 = uVal_13 + 4;
      } while ((_Size & 0xfffffffffffffffc) != uVal_13);
      if (uVal_11 == 0) goto LAB_1806541c7;
    }
    uVal_16 = 0;
    do {
      uVal_14 = (*(byte *)((int64_t)_Buf1 + uVal_16 + uVal_13) ^ uVal_14) * 0x100000001b3;
      uVal_16 = uVal_16 + 1;
    } while (uVal_11 != uVal_16);
  }
LAB_1806541c7:
  lVal_5 = *(int64_t *)(lVal_17 + 0x138);
  lVal_15 = (uVal_14 & *(uint64_t *)(lVal_17 + 0x160)) * 0x10;
  lVal_18 = *(int64_t *)(*(int64_t *)(lVal_17 + 0x148) + 8 + lVal_15);
  if (lVal_18 != lVal_5) {
    lVal_15 = *(int64_t *)(*(int64_t *)(lVal_17 + 0x148) + lVal_15);
    if (_Size == 0) {
      for (; *(int64_t *)(lVal_18 + 0x20) != 0; lVal_18 = *(int64_t *)(lVal_18 + 8)) {
        if (lVal_18 == lVal_15) goto LAB_180654262;
      }
      goto LAB_180654265;
    }
    uVal_14 = *(uint64_t *)(lVal_18 + 0x20);
    while( true ) {
      if (_Size == uVal_14) {
        if (*(uint64_t *)(lVal_18 + 0x28) < 0x10) {
          _Buf2 = (void *)(lVal_18 + 0x10);
        }
        else {
          _Buf2 = *(void **)(lVal_18 + 0x10);
        }
        iVal_8 = memcmp(_Buf1,_Buf2,_Size);
        if (iVal_8 == 0) goto LAB_180654265;
      }
      if (lVal_18 == lVal_15) break;
      lVal_18 = *(int64_t *)(lVal_18 + 8);
      uVal_14 = *(uint64_t *)(lVal_18 + 0x20);
    }
  }
LAB_180654262:
  lVal_18 = 0;
LAB_180654265:
  if (lVal_18 == 0) {
    lVal_18 = lVal_5;
  }
  pU64_12 = (uint32_t *)(lVal_18 + 0x30);
  if (lVal_18 == lVal_5) {
    pU64_12 = (uint32_t *)(lVal_17 + 0x178);
  }
  LOCK();
  *(uint32_t *)(lVal_4 + 0x40) = *pU64_12;
  UNLOCK();
  LOCK();
  *(uint32_t *)(*(int64_t *)*local_50 + 0x44) = *(uint32_t *)(lVal_17 + 0x17c);
  UNLOCK();
  if (*(int64_t *)(lVal_17 + 0x1f0) != 0) {
    func_0x180652180(*(int64_t *)*local_50 + 0x88);
  }
  if (*(char *)(local_58 + 0x1e8) == '\x01') {
    local_b8 = *(uint32_t *)*local_50;
    uStack_b4 = *(uint32_t *)(*local_50 + 4);
    uStack_b0 = *(uint32_t *)(*local_50 + 8);
    uStack_ac = *(uint32_t *)(*local_50 + 0xc);
    *local_50 = ZEXT816(0);
    func_0x180653e80(local_58,&local_b8);
  }
  func_0x180676070(local_58);
  pLong_6 = *(int64_t **)(*local_50 + 8);
  if (pLong_6 != (int64_t *)0x0) {
    LOCK();
    pLong_3 = pLong_6 + 1;
    *(int *)pLong_3 = *(int *)pLong_3 + -1;
    UNLOCK();
    if (*(int *)pLong_3 == 0) {
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
  return;
}

// Unwind@180654350
void Unwind_180654350(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x88);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806543a0
void Unwind_1806543a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1806543f0
void Unwind_1806543f0(uint64_t param_1,int64_t param_2)
{
  func_0x180676070(*(uint64_t *)(param_2 + 0x90));
  return;
}

// Unwind@180654430
void Unwind_180654430(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(*(uint64_t *)(param_2 + 0x98));
  return;
}

// func_0x180654470
void func_0x180654470(int64_t param_1,uint32_t param_2)
{
  LOCK();
  *(uint32_t *)(param_1 + 0x44) = param_2;
  UNLOCK();
  return;
}

// func_0x180654480
uint8_t * func_0x180654480(void)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_180841d70) {
    func_0x180672ec0(&DAT_180841d70);
    if (DAT_180841d70 == -1) {
      func_0x1806533a0(&DAT_180841b78);
      func_0x1806731d0(&DAT_180654540);
      _Init_thread_footer(&DAT_180841d70);
      return &DAT_180841b78;
    }
  }
  return &DAT_180841b78;
}

// Unwind@180654510
void Unwind_180654510(void)
{
  func_0x180672f60(&DAT_180841d70);
  return;
}

// func_0x180654550
void func_0x180654550(int64_t param_1,uint64_t *param_2)
{
  uint64_t _Size;
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint64_t uVal_4;
  void *_Buf2;
  uint64_t *_Buf1;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint8_t local_80 [32];
  uint8_t local_60 [32];
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  _Size = param_2[2];
  _Buf1 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    _Buf1 = (uint64_t *)*param_2;
  }
  if (_Size == 0) {
    uVal_6 = 0xcbf29ce484222325;
  }
  else {
    uVal_4 = (uint64_t)((uint)_Size & 3);
    if (_Size < 4) {
      uVal_6 = 0xcbf29ce484222325;
      uVal_5 = 0;
    }
    else {
      uVal_6 = 0xcbf29ce484222325;
      uVal_5 = 0;
      do {
        uVal_6 = ((uint64_t)*(byte *)((int64_t)_Buf1 + uVal_5 + 3) ^
                ((uint64_t)*(byte *)((int64_t)_Buf1 + uVal_5 + 2) ^
                ((uint64_t)*(byte *)((int64_t)_Buf1 + uVal_5 + 1) ^
                (*(byte *)((int64_t)_Buf1 + uVal_5) ^ uVal_6) * 0x100000001b3) * 0x100000001b3) *
                0x100000001b3) * 0x100000001b3;
        uVal_5 = uVal_5 + 4;
      } while ((_Size & 0xfffffffffffffffc) != uVal_5);
      if (uVal_4 == 0) goto LAB_180654637;
    }
    uVal_8 = 0;
    do {
      uVal_6 = (*(byte *)((int64_t)_Buf1 + uVal_8 + uVal_5) ^ uVal_6) * 0x100000001b3;
      uVal_8 = uVal_8 + 1;
    } while (uVal_4 != uVal_8);
  }
LAB_180654637:
  lVal_1 = *(int64_t *)(param_1 + 0xf8);
  lVal_7 = (uVal_6 & *(uint64_t *)(param_1 + 0x120)) * 0x10;
  lVal_9 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 8 + lVal_7);
  if (lVal_9 != lVal_1) {
    lVal_7 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + lVal_7);
    if (_Size == 0) {
      for (; *(int64_t *)(lVal_9 + 0x20) != 0; lVal_9 = *(int64_t *)(lVal_9 + 8)) {
        if (lVal_9 == lVal_7) {
          return;
        }
      }
LAB_1806546d0:
      if (lVal_9 != lVal_1) {
        func_0x180654750(local_60,"logger with name \'",param_2);
        func_0x1806509f0(local_80,local_60,"\' already exists");
        func_0x180651ea0(local_80);
        fnPtr_2 = (func_ptr_t )swi(3);
        (*fnPtr_2)();
        return;
      }
    }
    else {
      uVal_6 = *(uint64_t *)(lVal_9 + 0x20);
      while( true ) {
        if (_Size == uVal_6) {
          if (*(uint64_t *)(lVal_9 + 0x28) < 0x10) {
            _Buf2 = (void *)(lVal_9 + 0x10);
          }
          else {
            _Buf2 = *(void **)(lVal_9 + 0x10);
          }
          iVal_3 = memcmp(_Buf1,_Buf2,_Size);
          if (iVal_3 == 0) goto LAB_1806546d0;
        }
        if (lVal_9 == lVal_7) break;
        lVal_9 = *(int64_t *)(lVal_9 + 8);
        uVal_6 = *(uint64_t *)(lVal_9 + 0x20);
      }
    }
  }
  return;
}

// Unwind@180654720
void Unwind_180654720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x48);
  return;
}

// func_0x180654750
uint8_t (*func_0x180654750(uint8_t (*param_1)[16],char *param_2,uint64_t *param_3))[16]
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t *pU64_3;
  uint64_t uVal_4;
  func_ptr_t fnPtr_5;
  size_t sz_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint8_t (*pArr16_10)[16];
  
  sz_6 = strlen(param_2);
  uVal_2 = param_3[2];
  uVal_9 = 0x7fffffffffffffff;
  if ((uVal_2 ^ 0x7fffffffffffffff) < sz_6) {
    func_0x18007ba70();
    fnPtr_5 = (func_ptr_t )swi(3);
    pArr16_10 = (uint8_t (*)[16])(*fnPtr_5)();
    return pArr16_10;
  }
  pU64_3 = (uint64_t *)*param_3;
  uVal_4 = param_3[3];
  *param_1 = ZEXT816(0);
  uVal_1 = uVal_2 + sz_6;
  uVal_7 = 0xf;
  pArr16_10 = param_1;
  if (uVal_1 < 0x10) goto LAB_18065480f;
  if ((int64_t)uVal_1 < 0) {
LAB_1806547db:
    lVal_8 = func_0x180672de0(uVal_9 + 0x28);
    pArr16_10 = (uint8_t (*)[16])(lVal_8 + 0x27U & 0xffffffffffffffe0);
    *(int64_t *)(pArr16_10[-1] + 8) = lVal_8;
    uVal_7 = uVal_9;
  }
  else {
    uVal_7 = uVal_1 | 0xf;
    uVal_9 = 0x16;
    if (0x16 < uVal_7) {
      uVal_9 = uVal_7;
    }
    if (0xffe < uVal_7) goto LAB_1806547db;
    pArr16_10 = (uint8_t (*)[16])func_0x180672de0(uVal_9 + 1);
    uVal_7 = uVal_9;
  }
  *(uint8_t (**)[16])*param_1 = pArr16_10;
LAB_18065480f:
  if (0xf < uVal_4) {
    param_3 = pU64_3;
  }
  *(uint64_t *)param_1[1] = uVal_1;
  *(uint64_t *)(param_1[1] + 8) = uVal_7;
  func_0x1806aa960(pArr16_10,param_2,sz_6);
  func_0x1806aa960(*pArr16_10 + sz_6,param_3,uVal_2);
  (*pArr16_10)[uVal_1] = 0;
  return param_1;
}

// func_0x180654860
uint64_t * func_0x180654860(uint64_t *param_1,int64_t param_2)
{
  int *pInt_1;
  uint64_t *pU64_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint8_t (*pArr16_10)[16];
  uint64_t uVal_11;
  uint64_t *pU64_12;
  uint32_t *pU64_13;
  int64_t lVal_14;
  uint64_t uVal_15;
  
  *param_1 = &PTR_LAB_1806b41f0;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
  uVal_8 = *(uint64_t *)(param_2 + 0x18);
  if (*(uint64_t *)(param_2 + 0x20) < 0x10) {
    pU64_13 = (uint32_t *)(param_2 + 8);
  }
  else {
    pU64_13 = *(uint32_t **)(param_2 + 8);
  }
  if (-1 < (int64_t)uVal_8) {
    if (uVal_8 < 0x10) {
      param_1[3] = uVal_8;
      param_1[4] = 0xf;
      uVal_4 = pU64_13[1];
      uVal_5 = pU64_13[2];
      uVal_6 = pU64_13[3];
      *(uint32_t *)(param_1 + 1) = *pU64_13;
      *(uint32_t *)((int64_t)param_1 + 0xc) = uVal_4;
      *(uint32_t *)(param_1 + 2) = uVal_5;
      *(uint32_t *)((int64_t)param_1 + 0x14) = uVal_6;
    }
    else {
      uVal_7 = uVal_8 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_7) {
        uVal_15 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        uVal_7 = func_0x180672de0(uVal_15 + 1);
      }
      else {
        lVal_14 = func_0x180672de0(uVal_15 + 0x28);
        uVal_7 = lVal_14 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_7 - 8) = lVal_14;
      }
      param_1[1] = uVal_7;
      param_1[3] = uVal_8;
      param_1[4] = uVal_15;
      func_0x1806aa960(uVal_7,pU64_13,uVal_8 + 1);
    }
    *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
    param_1[7] = 0;
    lVal_14 = *(int64_t *)(param_2 + 0x30) - *(int64_t *)(param_2 + 0x28);
    if (lVal_14 != 0) {
      uVal_8 = *(int64_t *)(param_2 + 0x30) - *(int64_t *)(param_2 + 0x28) >> 4;
      if (uVal_8 >> 0x3c != 0) goto LAB_180654a6e;
      if (uVal_8 < 0x100) {
        pArr16_10 = (uint8_t (*)[16])func_0x180672de0(lVal_14);
      }
      else {
        lVal_9 = func_0x180672de0(lVal_14 + 0x27);
        pArr16_10 = (uint8_t (*)[16])(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_10[-1] + 8) = lVal_9;
      }
      param_1[5] = pArr16_10;
      param_1[6] = pArr16_10;
      param_1[7] = lVal_14 + (int64_t)pArr16_10;
      pU64_2 = *(uint64_t **)(param_2 + 0x30);
      for (pU64_12 = *(uint64_t **)(param_2 + 0x28); pU64_12 != pU64_2; pU64_12 = pU64_12 + 2) {
        *pArr16_10 = ZEXT816(0);
        if (pU64_12[1] != 0) {
          LOCK();
          pInt_1 = (int *)(pU64_12[1] + 8);
          *pInt_1 = *pInt_1 + 1;
          UNLOCK();
        }
        *(uint64_t *)*pArr16_10 = *pU64_12;
        *(uint64_t *)(*pArr16_10 + 8) = pU64_12[1];
        pArr16_10 = pArr16_10 + 1;
      }
      param_1[6] = pArr16_10;
    }
    *(uint32_t *)(param_1 + 8) = *(uint32_t *)(param_2 + 0x40);
    *(uint32_t *)((int64_t)param_1 + 0x44) = *(uint32_t *)(param_2 + 0x44);
    param_1[0x10] = 0;
    pU64_12 = *(uint64_t **)(param_2 + 0x80);
    if (pU64_12 != (uint64_t *)0x0) {
      uVal_11 = (**(func_ptr_t *)*pU64_12)(pU64_12,param_1 + 9);
      param_1[0x10] = uVal_11;
    }
    func_0x180651f60(param_1 + 0x11,param_2 + 0x88);
    return param_1;
  }
  func_0x18007ba70();
LAB_180654a6e:
  func_0x18007c0d0();
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_12 = (uint64_t *)(*fnPtr_3)();
  return pU64_12;
}

// Unwind@180654a80
void Unwind_180654a80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x38) + 0x80);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x30));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x38) + 0x80) = 0;
  }
  return;
}

// Unwind@180654ad0
void Unwind_180654ad0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  
  lVal_1 = *(int64_t *)(param_2 + 0x38);
  pLong_2 = *(int64_t **)(lVal_1 + 0x80);
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != *(int64_t **)(param_2 + 0x30));
    *(uint64_t *)(lVal_1 + 0x80) = 0;
  }
  return;
}

// Unwind@180654b20
void Unwind_180654b20(uint64_t param_1,int64_t param_2)
{
  func_0x1804f6530(*(uint64_t *)(param_2 + 0x28));
  return;
}

// Unwind@180654b50
void Unwind_180654b50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x180654b80
void func_0x180654b80(int64_t param_1,int64_t *param_2,uint32_t param_3)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint8_t auArr_4 [16];
  int64_t *pLong_5;
  int64_t **ptr2_Long_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  int64_t *local_e8 [8];
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint64_t local_80;
  uint8_t local_78 [4];
  uint8_t auStack_74 [12];
  uint64_t local_68;
  uint64_t local_60;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_48 = param_2;
  local_40 = (int64_t *)func_0x180672de0(0xd8);
  auArr_4._12_4_ = 0;
  auArr_4._0_12_ = auStack_74;
  _local_78 = auArr_4 << 0x20;
  func_0x180651890(local_e8,local_78,&local_a8);
  local_68 = 2;
  local_60 = 0xf;
  stack0xffffffffffffff8a = SUB1614(ZEXT816(0),2);
  local_78._0_2_ = 0xa0d;
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
  func_0x1806554e0(local_40,&local_a8,param_3,local_78,local_e8);
  pLong_5 = local_40;
  local_80 = 0;
  ptr2_Long_6 = *(int64_t ***)(param_1 + 0x28);
  do {
    if (ptr2_Long_6 == *(int64_t ***)(param_1 + 0x30)) {
      (**(func_ptr_t *)*pLong_5)(pLong_5,1);
LAB_180654cbe:
      uVal_2 = local_48[3];
      if (0xf < uVal_2) {
        lVal_3 = *local_48;
        uVal_7 = uVal_2 + 1;
        lVal_8 = lVal_3;
        if (0xfff < uVal_7) {
          lVal_8 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_8)) {
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_7 = uVal_2 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_7);
      }
      return;
    }
    pLong_1 = *ptr2_Long_6;
    if (ptr2_Long_6 + 2 == *(int64_t ***)(param_1 + 0x30)) {
      local_e8[0] = pLong_5;
      local_50 = (int64_t *)0x0;
      (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,local_e8);
      goto LAB_180654cbe;
    }
    local_50 = pLong_5;
    (**(func_ptr_t *)(*pLong_5 + 0x10))(pLong_5,local_78);
    local_50 = pLong_5;
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,local_78);
    ptr2_Long_6 = ptr2_Long_6 + 2;
  } while( true );
}

// Unwind@180654d10
void Unwind_180654d10(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 200);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  func_0x180651360(param_2 + 0x98);
  return;
}

// Unwind@180654d60
void Unwind_180654d60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xd0));
  return;
}

// Unwind@180654d90
void Unwind_180654d90(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0xd8),0xd8);
  return;
}

// Unwind@180654ee0
void Unwind_180654ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// Unwind@180654f10
void Unwind_180654f10(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x128);
  return;
}

// func_0x180654f40
void func_0x180654f40(int64_t *param_1,uint64_t param_2,char param_3,char param_4)
{
  if (param_3 != '\0') {
    (**(func_ptr_t *)(*param_1 + 0x10))();
  }
  if (param_4 != '\0') {
    func_0x1806524b0(param_1 + 0x11,param_2);
    return;
  }
  return;
}

// func_0x18065500e
uint8_t * func_0x18065500e(void)
{
  func_0x180001e70();
  return &LAB_180654fe0;
}

// Catch@180655030
void Catch_180655030(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  if (*(int64_t *)(*(int64_t *)(param_2 + 0xb0) + 0x38) != 0) {
    uVal_1 = (**(func_ptr_t *)(**(int64_t **)(param_2 + 0xc0) + 8))();
    *(uint64_t *)(param_2 + 0x68) = uVal_1;
    *(uint64_t *)(param_2 + 0x78) = *(uint64_t *)(*(int64_t *)(param_2 + 0xb0) + 0x38);
    *(uint32_t *)(param_2 + 0x88) = *(uint32_t *)(*(int64_t *)(param_2 + 0xb0) + 0x40);
    *(uint64_t *)(param_2 + 0x48) = 0x1cc;
    *(int64_t *)(param_2 + 0x50) = param_2 + 0x68;
    *(char **)(param_2 + 0x58) = "{} [{}({})]";
    *(uint64_t *)(param_2 + 0x60) = 0xb;
    func_0x18063ff10(param_2 + 0x28,param_2 + 0x58,param_2 + 0x48);
    func_0x1806551d0(*(uint64_t *)(param_2 + 0xa8),param_2 + 0x28);
    func_0x18065500e(param_2 + 0x28);
    return;
  }
  uVal_1 = (**(func_ptr_t *)(**(int64_t **)(param_2 + 0xc0) + 8))();
  func_0x180001060(param_2 + 0x68,uVal_1);
  func_0x1806551d0(*(uint64_t *)(param_2 + 0xa8),param_2 + 0x68);
  func_0x18065500e(param_2 + 0x68);
  return;
}

// Catch_All@1806550f0
void Catch_All_1806550f0(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  func_0x180001060(param_2 + 0x68,"Rethrowing unknown exception in logger");
  func_0x1806551d0(*(uint64_t *)(param_2 + 0xa8),param_2 + 0x68);
  func_0x180001e70(param_2 + 0x68);
  func_0x18067a120(0,0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180655140
void Unwind_180655140(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@180655170
void Unwind_180655170(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1806551a0
void Unwind_1806551a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// func_0x1806551d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1806551d0(int64_t param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint8_t auStack_c8 [32];
  int64_t local_a8;
  uint64_t *local_a0;
  uint8_t local_8c [36];
  int64_t local_68 [8];
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_c8;
  if (*(int64_t **)(param_1 + 0x80) == (int64_t *)0x0) {
    iVal_2 = func_0x180675fe0(&DAT_18083cec8);
    if (iVal_2 == 0) {
      if (DAT_18083cf14 == 0x7fffffff) goto LAB_180655368;
      lVal_3 = _Xtime_get_ticks();
      DAT_180841d80 = DAT_180841d80 + 1;
      if (9999999 < lVal_3 - _DAT_180841d78) {
        local_68[0] = lVal_3 / 10000000;
        _DAT_180841d78 = lVal_3;
        thunk_FUN_180684dc4(local_8c,local_68);
        func_0x18067b6bc(local_68,0x40,"%Y-%m-%d %H:%M:%S",local_8c);
        lVal_3 = DAT_180841d80;
        if (0xf < (uint64_t)param_2[3]) {
          param_2 = (uint64_t *)*param_2;
        }
        if (*(uint64_t *)(param_1 + 0x20) < 0x10) {
          param_1 = param_1 + 8;
        }
        else {
          param_1 = *(int64_t *)(param_1 + 8);
        }
        uVal_4 = func_0x18067e2c8(2);
        local_a8 = param_1;
        local_a0 = param_2;
        func_0x18063efd0(uVal_4,"[*** LOG ERROR #%04zu ***] [%s] [%s] %s\n",lVal_3,local_68);
      }
      func_0x180676070(&DAT_18083cec8);
      if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_c8)) {
        return;
      }
      goto LAB_18065534e;
    }
  }
  else {
    if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_c8)) {
                    /* WARNING: Could not recover jumptable at 0x00018065522b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(func_ptr_t *)(**(int64_t **)(param_1 + 0x80) + 0x10))();
      return;
    }
LAB_18065534e:
    func_0x180673080(local_28 ^ (uint64_t)auStack_c8);
  }
  func_0x180674150(5);
LAB_180655368:
  DAT_18083cf14 = 0x7ffffffe;
  func_0x180674150(6);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Catch@1806553e0
uint8_t * Catch_1806553e0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  uVal_1 = (**(func_ptr_t *)(**(int64_t **)(param_2 + 0x68) + 8))();
  func_0x180001060(param_2 + 0x28,uVal_1);
  func_0x1806551d0(*(uint64_t *)(param_2 + 0x58),param_2 + 0x28);
  func_0x180001e70(param_2 + 0x28);
  return &LAB_1806553be;
}

// Catch_All@180655430
void Catch_All_180655430(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  func_0x180001060(param_2 + 0x28,"Rethrowing unknown exception in logger");
  func_0x1806551d0(*(uint64_t *)(param_2 + 0x58),param_2 + 0x28);
  func_0x180001e70(param_2 + 0x28);
  func_0x18067a120(0,0);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180655480
void Unwind_180655480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1806554b0
void Unwind_1806554b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x1806554e0
uint64_t * func_0x1806554e0(uint64_t *param_1,int64_t *param_2,uint32_t param_3,int64_t *param_4, int64_t param_5)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  uint64_t *pU64_4;
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
  
  *param_1 = &PTR_LAB_1806dee90;
  *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  uVal_5 = *(uint32_t *)param_2;
  uVal_6 = *(uint32_t *)((int64_t)param_2 + 4);
  uVal_7 = *(uint32_t *)(param_2 + 1);
  uVal_8 = *(uint32_t *)((int64_t)param_2 + 0xc);
  uVal_9 = *(uint32_t *)((int64_t)param_2 + 0x14);
  uVal_10 = *(uint32_t *)(param_2 + 3);
  uVal_11 = *(uint32_t *)((int64_t)param_2 + 0x1c);
  *(uint32_t *)(param_1 + 3) = *(uint32_t *)(param_2 + 2);
  *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_9;
  *(uint32_t *)(param_1 + 4) = uVal_10;
  *(uint32_t *)((int64_t)param_1 + 0x24) = uVal_11;
  *(uint32_t *)(param_1 + 1) = uVal_5;
  *(uint32_t *)((int64_t)param_1 + 0xc) = uVal_6;
  *(uint32_t *)(param_1 + 2) = uVal_7;
  *(uint32_t *)((int64_t)param_1 + 0x14) = uVal_8;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(uint8_t *)param_2 = 0;
  *(uint8_t (*)[16])(param_1 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  uVal_5 = *(uint32_t *)param_4;
  uVal_6 = *(uint32_t *)((int64_t)param_4 + 4);
  uVal_7 = *(uint32_t *)(param_4 + 1);
  uVal_8 = *(uint32_t *)((int64_t)param_4 + 0xc);
  uVal_9 = *(uint32_t *)((int64_t)param_4 + 0x14);
  uVal_10 = *(uint32_t *)(param_4 + 3);
  uVal_11 = *(uint32_t *)((int64_t)param_4 + 0x1c);
  *(uint32_t *)(param_1 + 7) = *(uint32_t *)(param_4 + 2);
  *(uint32_t *)((int64_t)param_1 + 0x3c) = uVal_9;
  *(uint32_t *)(param_1 + 8) = uVal_10;
  *(uint32_t *)((int64_t)param_1 + 0x44) = uVal_11;
  *(uint32_t *)(param_1 + 5) = uVal_5;
  *(uint32_t *)((int64_t)param_1 + 0x2c) = uVal_6;
  *(uint32_t *)(param_1 + 6) = uVal_7;
  *(uint32_t *)((int64_t)param_1 + 0x34) = uVal_8;
  param_4[2] = 0;
  param_4[3] = 0xf;
  *(uint8_t *)param_4 = 0;
  *(uint32_t *)(param_1 + 9) = param_3;
  *(uint8_t *)((int64_t)param_1 + 0x4c) = 0;
  *(uint8_t (*)[16])(param_1 + 0xf) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x11) = ZEXT816(0);
  func_0x18065c980(param_1 + 0x13,param_5);
  *(uint8_t (*)[16])(param_1 + 0xc) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  *(uint32_t *)(param_1 + 0xe) = 0;
  func_0x1806557e0(param_1,param_1 + 1);
  uVal_14 = param_2[3];
  if (0xf < uVal_14) {
    lVal_1 = *param_2;
    uVal_12 = uVal_14 + 1;
    lVal_13 = lVal_1;
    if (0xfff < uVal_12) {
      lVal_13 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_13)) goto LAB_18065572d;
      uVal_12 = uVal_14 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_13,uVal_12);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(uint8_t *)param_2 = 0;
  uVal_14 = param_4[3];
  if (0xf < uVal_14) {
    lVal_1 = *param_4;
    uVal_12 = uVal_14 + 1;
    lVal_13 = lVal_1;
    if (0xfff < uVal_12) {
      lVal_13 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_13)) goto LAB_18065572d;
      uVal_12 = uVal_14 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_13,uVal_12);
  }
  param_4[2] = 0;
  param_4[3] = 0xf;
  *(uint8_t *)param_4 = 0;
  lVal_1 = *(int64_t *)(param_5 + 0x18);
  if (lVal_1 != 0) {
    uVal_14 = *(int64_t *)(param_5 + 0x28) - lVal_1;
    lVal_13 = lVal_1;
    if (0xfff < uVal_14) {
      lVal_13 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_13)) {
LAB_18065572d:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_14 = uVal_14 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_13,uVal_14);
    *(uint8_t (*)[16])(param_5 + 0x18) = ZEXT816(0);
    *(uint64_t *)(param_5 + 0x28) = 0;
  }
  pU64_2 = *(uint64_t **)(param_5 + 8);
  *(uint64_t *)pU64_2[1] = 0;
  pU64_2 = (uint64_t *)*pU64_2;
  while (pU64_2 != (uint64_t *)0x0) {
    pU64_3 = (uint64_t *)*pU64_2;
    pU64_4 = (uint64_t *)pU64_2[3];
    if (pU64_4 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_4)(pU64_4,1);
    }
    thunk_FUN_180695dd0(pU64_2,0x20);
    pU64_2 = pU64_3;
  }
  thunk_FUN_180695dd0(*(uint64_t *)(param_5 + 8),0x20);
  return param_1;
}

// Unwind@180655730
void Unwind_180655730(uint64_t param_1,int64_t param_2)
{
  func_0x1806515a0(*(uint64_t *)(param_2 + 0x30));
  return;
}

// Unwind@180655770
void Unwind_180655770(uint64_t param_1,int64_t param_2)
{
  func_0x1806325a0(*(int64_t *)(param_2 + 0x50) + 0x80);
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x38));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x40));
  func_0x1806515a0(*(uint64_t *)(param_2 + 0xc0));
  return;
}

// func_0x1806557e0
void func_0x1806557e0(int64_t param_1,char **param_2)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  uint8_t (**ptr2_Arr16_3)[16];
  uint32_t uVal_4;
  uint8_t (*pArr16_5)[16];
  char *fnPtr_6;
  uint8_t *pU64_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  char **ptr2_Char_10;
  char **ptr2_Char_11;
  char **ptr2_Char_12;
  int64_t *pLong_13;
  byte bFlag_14;
  uint8_t (*pArr16_15)[16];
  uint8_t (*pArr16_16)[16];
  char **ptr2_Char_17;
  bool bFlag_18;
  uint8_t local_98 [16];
  int64_t local_88;
  uint64_t local_80;
  uint32_t local_78;
  uint8_t local_74;
  uint8_t local_73;
  uint16_t local_72;
  uint8_t (*local_70)[16];
  uint8_t (*local_68)[16];
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  ptr2_Char_11 = (char **)*param_2;
  fnPtr_6 = param_2[3];
  ptr2_Char_17 = param_2;
  if (&DAT_0000000f < fnPtr_6) {
    ptr2_Char_17 = ptr2_Char_11;
  }
  ptr2_Char_17 = (char **)((int64_t)ptr2_Char_17 + (int64_t)param_2[2]);
  local_70 = (uint8_t (*)[16])0x0;
  pLong_13 = *(int64_t **)(param_1 + 0x80);
  pLong_1 = *(int64_t **)(param_1 + 0x88);
  if (pLong_13 != pLong_1) {
    do {
      pU64_2 = (uint64_t *)*pLong_13;
      if (pU64_2 != (uint64_t *)0x0) {
        (**(func_ptr_t *)*pU64_2)(pU64_2,1);
      }
      pLong_13 = pLong_13 + 1;
    } while (pLong_13 != pLong_1);
    *(uint64_t *)(param_1 + 0x88) = *(uint64_t *)(param_1 + 0x80);
    ptr2_Char_11 = (char **)*param_2;
    fnPtr_6 = param_2[3];
  }
  local_88 = param_1 + 0x80;
  if (&DAT_0000000f < fnPtr_6) {
    param_2 = ptr2_Char_11;
  }
  pArr16_5 = (uint8_t (*)[16])0x0;
  pArr16_16 = (uint8_t (*)[16])0x0;
  pArr16_15 = (uint8_t (*)[16])0x0;
  while (param_2 != ptr2_Char_17) {
    bFlag_14 = *(byte *)param_2;
    if (bFlag_14 == 0x25) {
      if (pArr16_16 != (uint8_t (*)[16])0x0) {
        local_70 = (uint8_t (*)[16])0x0;
        ptr2_Arr16_3 = *(uint8_t (***)[16])(param_1 + 0x88);
        if (ptr2_Arr16_3 == *(uint8_t (***)[16])(param_1 + 0x90)) {
          local_68 = pArr16_16;
          func_0x180639250(param_1 + 0x80,ptr2_Arr16_3,&local_68);
        }
        else {
          local_68 = (uint8_t (*)[16])0x0;
          *ptr2_Arr16_3 = pArr16_16;
          *(int64_t *)(param_1 + 0x88) = *(int64_t *)(param_1 + 0x88) + 8;
        }
        if (local_68 != (uint8_t (*)[16])0x0) {
          (***(func_ptr_t **)*local_68)(local_68,1);
        }
        pArr16_5 = (uint8_t (*)[16])0x0;
      }
      ptr2_Char_11 = (char **)((int64_t)param_2 + 1);
      if (ptr2_Char_11 == ptr2_Char_17) {
LAB_180655a80:
        if (ptr2_Char_11 == ptr2_Char_17) break;
        local_98 = ZEXT816(0);
        func_0x1806579c0(param_1,*(byte *)ptr2_Char_11,local_98);
      }
      else {
        if (*(byte *)ptr2_Char_11 == 0x2d) {
          uVal_4 = 1;
LAB_1806559ec:
          ptr2_Char_11 = (char **)((int64_t)param_2 + 2);
        }
        else {
          uVal_4 = 0;
          if (*(byte *)ptr2_Char_11 == 0x3d) {
            uVal_4 = 2;
            goto LAB_1806559ec;
          }
        }
        if ((ptr2_Char_11 == ptr2_Char_17) || (9 < (byte)(*(byte *)ptr2_Char_11 - 0x30))) goto LAB_180655a80;
        uVal_8 = (uint64_t)*(byte *)ptr2_Char_11 - 0x30;
        ptr2_Char_12 = (char **)((int64_t)ptr2_Char_11 + 1);
        if (ptr2_Char_12 == ptr2_Char_17) {
LAB_180655aa9:
          bFlag_18 = false;
          ptr2_Char_11 = ptr2_Char_12;
        }
        else {
          bFlag_14 = *(byte *)ptr2_Char_12;
          if ((byte)(bFlag_14 - 0x30) < 10) {
            ptr2_Char_11 = (char **)((int64_t)ptr2_Char_11 + 2);
            do {
              ptr2_Char_12 = ptr2_Char_11;
              uVal_8 = ((uint64_t)bFlag_14 + uVal_8 * 10) - 0x30;
              if (ptr2_Char_12 == ptr2_Char_17) goto LAB_180655aa9;
              bFlag_14 = *(byte *)ptr2_Char_12;
              ptr2_Char_11 = (char **)((int64_t)ptr2_Char_12 + 1);
            } while ((byte)(bFlag_14 - 0x30) < 10);
            ptr2_Char_11 = (char **)((int64_t)ptr2_Char_12 + -1);
          }
          ptr2_Char_10 = (char **)((int64_t)ptr2_Char_11 + 2);
          bFlag_18 = bFlag_14 == 0x21;
          ptr2_Char_11 = ptr2_Char_12;
          if (bFlag_18) {
            ptr2_Char_11 = ptr2_Char_10;
          }
        }
        if (ptr2_Char_11 == ptr2_Char_17) break;
        if (0x3f < uVal_8) {
          uVal_8 = 0x40;
        }
        local_73 = 1;
        local_72 = 0;
        local_80 = uVal_8;
        local_78 = uVal_4;
        local_74 = bFlag_18;
        func_0x180656430(param_1,*(byte *)ptr2_Char_11,&local_80);
      }
      pArr16_16 = (uint8_t (*)[16])0x0;
      pArr16_15 = (uint8_t (*)[16])0x0;
      param_2 = (char **)((int64_t)ptr2_Char_11 + 1);
    }
    else if (pArr16_15 == (uint8_t (*)[16])0x0) {
      pArr16_5 = (uint8_t (*)[16])func_0x180672de0(0x38);
      *pArr16_5 = ZEXT816(0);
      pArr16_5[1] = ZEXT816(0);
      *(uint8_t ***)*pArr16_5 = &PTR_FUN_1806deec8;
      *(uint8_t (*)[16])(pArr16_5[1] + 8) = ZEXT816(0);
      *(uint64_t *)(pArr16_5[2] + 8) = 0;
      *(uint64_t *)pArr16_5[3] = 0xf;
      bFlag_14 = *(byte *)param_2;
      uVal_8 = 0xf;
      pU64_7 = pArr16_5[1] + 8;
      uVal_9 = *(uint64_t *)(pArr16_5[2] + 8);
      pArr16_15 = pArr16_5;
      pArr16_16 = pArr16_5;
      local_70 = pArr16_5;
      if (0xe < uVal_9) goto LAB_18065598b;
LAB_180655919:
      *(uint64_t *)(pArr16_15[2] + 8) = uVal_9 + 1;
      if (0xf < uVal_8) {
        pU64_7 = *(uint8_t **)(pArr16_15[1] + 8);
      }
      pU64_7[uVal_9] = bFlag_14;
      pU64_7[uVal_9 + 1] = 0;
      param_2 = (char **)((int64_t)param_2 + 1);
    }
    else {
      uVal_8 = *(uint64_t *)pArr16_15[3];
      pU64_7 = pArr16_15[1] + 8;
      uVal_9 = *(uint64_t *)(pArr16_15[2] + 8);
      if (uVal_9 < uVal_8) goto LAB_180655919;
LAB_18065598b:
      func_0x18008c590(pU64_7,1);
      param_2 = (char **)((int64_t)param_2 + 1);
    }
  }
  if (pArr16_5 != (uint8_t (*)[16])0x0) {
    local_70 = (uint8_t (*)[16])0x0;
    ptr2_Arr16_3 = *(uint8_t (***)[16])(param_1 + 0x88);
    if (ptr2_Arr16_3 == *(uint8_t (***)[16])(param_1 + 0x90)) {
      local_68 = pArr16_5;
      func_0x180639250(local_88,ptr2_Arr16_3,&local_68);
      if (local_68 != (uint8_t (*)[16])0x0) {
        (***(func_ptr_t **)*local_68)(local_68,1);
      }
    }
    else {
      *ptr2_Arr16_3 = pArr16_5;
      *(int64_t *)(param_1 + 0x88) = *(int64_t *)(param_1 + 0x88) + 8;
    }
  }
  return;
}

// Unwind@180655b50
void Unwind_180655b50(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x50);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180655ba0
void Unwind_180655ba0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x50);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180655bf0
void Unwind_180655bf0(uint64_t param_1,int64_t param_2)
{
  func_0x180658f50(param_2 + 0x48);
  return;
}

// func_0x180655c30
int64_t * func_0x180655c30(int64_t **param_1,int64_t **param_2)
{
  int64_t **ptr2_Long_1;
  uint32_t *pU64_2;
  int64_t *pLong_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint64_t uVal_12;
  int64_t *pLong_13;
  int64_t lVal_14;
  int64_t **ptr2_Long_15;
  int64_t **ptr2_Long_16;
  int64_t **ptr2_Long_17;
  int64_t **ptr2_Long_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  uint64_t uVal_22;
  
  ptr2_Long_17 = (int64_t **)param_1[1];
  if (ptr2_Long_17 != (int64_t **)param_1[2]) {
    pLong_3 = *param_2;
    *param_2 = (int64_t *)0x0;
    *ptr2_Long_17 = pLong_3;
    param_1[1] = param_1[1] + 1;
    return pLong_3;
  }
  pLong_3 = *param_1;
  uVal_21 = ((int64_t)param_1[1] - (int64_t)pLong_3 >> 3) + 1;
  uVal_12 = (int64_t)param_1[2] - (int64_t)pLong_3 >> 3;
  uVal_22 = (uVal_12 >> 1) + uVal_12;
  if (uVal_22 <= uVal_21) {
    uVal_22 = uVal_21;
  }
  if (0x1fffffffffffffff - (uVal_12 >> 1) < uVal_12) {
    uVal_22 = 0x1fffffffffffffff;
  }
  if (uVal_22 >> 0x3d != 0) {
LAB_180639648:
    func_0x18007ba90();
    goto LAB_18063964d;
  }
  if (uVal_22 == 0) {
    ptr2_Long_18 = (int64_t **)0x0;
  }
  else if (uVal_22 < 0x200) {
    ptr2_Long_18 = (int64_t **)func_0x180672de0(uVal_22 * 8);
  }
  else {
    if (0x1ffffffffffffffb < uVal_22) goto LAB_180639648;
    pLong_13 = (int64_t *)func_0x180672de0(uVal_22 * 8 + 0x27);
    ptr2_Long_18 = (int64_t **)((int64_t)pLong_13 + 0x27U & 0xffffffffffffffe0);
    ptr2_Long_18[-1] = pLong_13;
  }
  lVal_14 = (int64_t)ptr2_Long_17 - (int64_t)pLong_3;
  ptr2_Long_1 = (int64_t **)((int64_t)ptr2_Long_18 + lVal_14);
  pLong_13 = *param_2;
  *param_2 = (int64_t *)0x0;
  *(int64_t **)((int64_t)ptr2_Long_18 + lVal_14) = pLong_13;
  ptr2_Long_15 = (int64_t **)*param_1;
  ptr2_Long_16 = (int64_t **)param_1[1];
  if (ptr2_Long_17 == ptr2_Long_16) {
    if (ptr2_Long_15 != ptr2_Long_17) {
      uVal_12 = (int64_t)ptr2_Long_17 + (-8 - (int64_t)ptr2_Long_15);
      ptr2_Long_16 = ptr2_Long_18;
      if ((uVal_12 < 0x98) ||
         ((ptr2_Long_15 < (int64_t **)((int64_t)ptr2_Long_18 + (uVal_12 & 0xfffffffffffffff8) + 8) &&
          (ptr2_Long_18 < (int64_t **)((int64_t)ptr2_Long_15 + (uVal_12 & 0xfffffffffffffff8) + 8))))) {
LAB_180639470:
        do {
          pLong_3 = *ptr2_Long_15;
          *ptr2_Long_15 = (int64_t *)0x0;
          *ptr2_Long_16 = pLong_3;
          ptr2_Long_15 = ptr2_Long_15 + 1;
          ptr2_Long_16 = ptr2_Long_16 + 1;
        } while (ptr2_Long_15 != ptr2_Long_17);
      }
      else {
        uVal_12 = (uVal_12 >> 3) + 1;
        uVal_19 = uVal_12 & 0xfffffffffffffffc;
        uVal_20 = 0;
        do {
          ptr2_Long_16 = ptr2_Long_15 + uVal_20;
          uVal_4 = *(uint32_t *)ptr2_Long_16;
          uVal_5 = *(uint32_t *)((int64_t)ptr2_Long_16 + 4);
          uVal_6 = *(uint32_t *)(ptr2_Long_16 + 1);
          uVal_7 = *(uint32_t *)((int64_t)ptr2_Long_16 + 0xc);
          ptr2_Long_16 = ptr2_Long_15 + uVal_20 + 2;
          uVal_8 = *(uint32_t *)ptr2_Long_16;
          uVal_9 = *(uint32_t *)((int64_t)ptr2_Long_16 + 4);
          uVal_10 = *(uint32_t *)(ptr2_Long_16 + 1);
          uVal_11 = *(uint32_t *)((int64_t)ptr2_Long_16 + 0xc);
          *(uint8_t (*)[16])(ptr2_Long_15 + uVal_20) = ZEXT816(0);
          *(uint8_t (*)[16])(ptr2_Long_15 + uVal_20 + 2) = ZEXT816(0);
          ptr2_Long_16 = ptr2_Long_18 + uVal_20;
          *(uint32_t *)ptr2_Long_16 = uVal_4;
          *(uint32_t *)((int64_t)ptr2_Long_16 + 4) = uVal_5;
          *(uint32_t *)(ptr2_Long_16 + 1) = uVal_6;
          *(uint32_t *)((int64_t)ptr2_Long_16 + 0xc) = uVal_7;
          ptr2_Long_16 = ptr2_Long_18 + uVal_20 + 2;
          *(uint32_t *)ptr2_Long_16 = uVal_8;
          *(uint32_t *)((int64_t)ptr2_Long_16 + 4) = uVal_9;
          *(uint32_t *)(ptr2_Long_16 + 1) = uVal_10;
          *(uint32_t *)((int64_t)ptr2_Long_16 + 0xc) = uVal_11;
          uVal_20 = uVal_20 + 4;
        } while (uVal_19 != uVal_20);
        ptr2_Long_15 = ptr2_Long_15 + uVal_19;
        ptr2_Long_16 = ptr2_Long_18 + uVal_19;
        if (uVal_12 != uVal_19) goto LAB_180639470;
      }
      goto LAB_18063948a;
    }
  }
  else {
    if (ptr2_Long_15 != ptr2_Long_17) {
      uVal_12 = (int64_t)ptr2_Long_17 + (-8 - (int64_t)ptr2_Long_15);
      ptr2_Long_16 = ptr2_Long_18;
      if ((uVal_12 < 0x98) ||
         ((ptr2_Long_15 < (int64_t **)((int64_t)ptr2_Long_18 + (uVal_12 & 0xfffffffffffffff8) + 8) &&
          (ptr2_Long_18 < (int64_t **)((int64_t)ptr2_Long_15 + (uVal_12 & 0xfffffffffffffff8) + 8))))) {
LAB_180639380:
        do {
          pLong_13 = *ptr2_Long_15;
          *ptr2_Long_15 = (int64_t *)0x0;
          *ptr2_Long_16 = pLong_13;
          ptr2_Long_15 = ptr2_Long_15 + 1;
          ptr2_Long_16 = ptr2_Long_16 + 1;
        } while (ptr2_Long_15 != ptr2_Long_17);
      }
      else {
        uVal_12 = (uVal_12 >> 3) + 1;
        uVal_19 = uVal_12 & 0xfffffffffffffffc;
        uVal_20 = 0;
        do {
          ptr2_Long_16 = ptr2_Long_15 + uVal_20;
          uVal_4 = *(uint32_t *)ptr2_Long_16;
          uVal_5 = *(uint32_t *)((int64_t)ptr2_Long_16 + 4);
          uVal_6 = *(uint32_t *)(ptr2_Long_16 + 1);
          uVal_7 = *(uint32_t *)((int64_t)ptr2_Long_16 + 0xc);
          ptr2_Long_16 = ptr2_Long_15 + uVal_20 + 2;
          uVal_8 = *(uint32_t *)ptr2_Long_16;
          uVal_9 = *(uint32_t *)((int64_t)ptr2_Long_16 + 4);
          uVal_10 = *(uint32_t *)(ptr2_Long_16 + 1);
          uVal_11 = *(uint32_t *)((int64_t)ptr2_Long_16 + 0xc);
          *(uint8_t (*)[16])(ptr2_Long_15 + uVal_20) = ZEXT816(0);
          *(uint8_t (*)[16])(ptr2_Long_15 + uVal_20 + 2) = ZEXT816(0);
          ptr2_Long_16 = ptr2_Long_18 + uVal_20;
          *(uint32_t *)ptr2_Long_16 = uVal_4;
          *(uint32_t *)((int64_t)ptr2_Long_16 + 4) = uVal_5;
          *(uint32_t *)(ptr2_Long_16 + 1) = uVal_6;
          *(uint32_t *)((int64_t)ptr2_Long_16 + 0xc) = uVal_7;
          ptr2_Long_16 = ptr2_Long_18 + uVal_20 + 2;
          *(uint32_t *)ptr2_Long_16 = uVal_8;
          *(uint32_t *)((int64_t)ptr2_Long_16 + 4) = uVal_9;
          *(uint32_t *)(ptr2_Long_16 + 1) = uVal_10;
          *(uint32_t *)((int64_t)ptr2_Long_16 + 0xc) = uVal_11;
          uVal_20 = uVal_20 + 4;
        } while (uVal_19 != uVal_20);
        ptr2_Long_15 = ptr2_Long_15 + uVal_19;
        ptr2_Long_16 = ptr2_Long_18 + uVal_19;
        if (uVal_12 != uVal_19) goto LAB_180639380;
      }
      ptr2_Long_16 = (int64_t **)param_1[1];
    }
    if (ptr2_Long_17 != ptr2_Long_16) {
      uVal_12 = (int64_t)ptr2_Long_16 + (-8 - (int64_t)ptr2_Long_17);
      ptr2_Long_15 = ptr2_Long_1;
      if ((0x107 < uVal_12) &&
         (((int64_t **)
           ((int64_t)ptr2_Long_18 +
           (int64_t)ptr2_Long_17 + ((uVal_12 & 0xfffffffffffffff8) - (int64_t)pLong_3) + 0x10) <=
           ptr2_Long_17 ||
          ((int64_t)ptr2_Long_17 + (uVal_12 & 0xfffffffffffffff8) + 8 <=
           (uint64_t)((int64_t)ptr2_Long_18 + lVal_14 + 8))))) {
        uVal_12 = (uVal_12 >> 3) + 1;
        uVal_19 = uVal_12 & 0xfffffffffffffffc;
        uVal_20 = 0;
        do {
          ptr2_Long_15 = ptr2_Long_17 + uVal_20;
          uVal_4 = *(uint32_t *)ptr2_Long_15;
          uVal_5 = *(uint32_t *)((int64_t)ptr2_Long_15 + 4);
          uVal_6 = *(uint32_t *)(ptr2_Long_15 + 1);
          uVal_7 = *(uint32_t *)((int64_t)ptr2_Long_15 + 0xc);
          ptr2_Long_15 = ptr2_Long_17 + uVal_20 + 2;
          uVal_8 = *(uint32_t *)ptr2_Long_15;
          uVal_9 = *(uint32_t *)((int64_t)ptr2_Long_15 + 4);
          uVal_10 = *(uint32_t *)(ptr2_Long_15 + 1);
          uVal_11 = *(uint32_t *)((int64_t)ptr2_Long_15 + 0xc);
          *(uint8_t (*)[16])(ptr2_Long_17 + uVal_20) = ZEXT816(0);
          *(uint8_t (*)[16])(ptr2_Long_17 + uVal_20 + 2) = ZEXT816(0);
          pU64_2 = (uint32_t *)((int64_t)ptr2_Long_18 + uVal_20 * 8 + lVal_14 + 8);
          *pU64_2 = uVal_4;
          pU64_2[1] = uVal_5;
          pU64_2[2] = uVal_6;
          pU64_2[3] = uVal_7;
          pU64_2 = (uint32_t *)((int64_t)ptr2_Long_18 + uVal_20 * 8 + lVal_14 + 0x18);
          *pU64_2 = uVal_8;
          pU64_2[1] = uVal_9;
          pU64_2[2] = uVal_10;
          pU64_2[3] = uVal_11;
          uVal_20 = uVal_20 + 4;
        } while (uVal_19 != uVal_20);
        ptr2_Long_17 = ptr2_Long_17 + uVal_19;
        ptr2_Long_15 = ptr2_Long_1 + uVal_19;
        if (uVal_12 == uVal_19) goto LAB_18063948a;
      }
      do {
        pLong_3 = *ptr2_Long_17;
        *ptr2_Long_17 = (int64_t *)0x0;
        ptr2_Long_15[1] = pLong_3;
        ptr2_Long_17 = ptr2_Long_17 + 1;
        ptr2_Long_15 = ptr2_Long_15 + 1;
      } while (ptr2_Long_17 != ptr2_Long_16);
    }
LAB_18063948a:
    ptr2_Long_15 = (int64_t **)*param_1;
  }
  if (ptr2_Long_15 != (int64_t **)0x0) {
    ptr2_Long_17 = (int64_t **)param_1[1];
    if (ptr2_Long_15 == ptr2_Long_17) {
      uVal_12 = (int64_t)param_1[2] - (int64_t)ptr2_Long_15;
    }
    else {
      do {
        pLong_3 = *ptr2_Long_15;
        if (pLong_3 != (int64_t *)0x0) {
          (**(func_ptr_t *)*pLong_3)(pLong_3,1);
        }
        ptr2_Long_15 = ptr2_Long_15 + 1;
      } while (ptr2_Long_15 != ptr2_Long_17);
      ptr2_Long_15 = (int64_t **)*param_1;
      uVal_12 = (int64_t)param_1[2] - (int64_t)ptr2_Long_15;
    }
    if (0xfff < uVal_12) {
      if (0x1f < (uint64_t)((int64_t)ptr2_Long_15 + (-8 - (int64_t)ptr2_Long_15[-1]))) {
LAB_18063964d:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_12 = uVal_12 + 0x27;
      ptr2_Long_15 = (int64_t **)ptr2_Long_15[-1];
    }
    thunk_FUN_180695dd0(ptr2_Long_15,uVal_12);
  }
  *param_1 = (int64_t *)ptr2_Long_18;
  param_1[1] = (int64_t *)(ptr2_Long_18 + uVal_21);
  param_1[2] = (int64_t *)(ptr2_Long_18 + uVal_22);
  return (int64_t *)ptr2_Long_1;
}

// func_0x180655c60
void func_0x180655c60(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    if (*(int64_t *)(lVal_1 + 0x20) != lVal_1 + 0x40) {
      thunk_FUN_180695dd0();
    }
    thunk_FUN_180695dd0(lVal_1,0x158);
    return;
  }
  return;
}

// Unwind@180655e50
void Unwind_180655e50(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x78);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180655ea0
void Unwind_180655ea0(uint64_t param_1,int64_t param_2)
{
  func_0x1806515a0(param_2 + 0x28);
  return;
}

// func_0x180655ee0
uint64_t * func_0x180655ee0(uint64_t *param_1,uint8_t (*param_2)[16],uint32_t *param_3, uint8_t (*param_4)[16],uint64_t param_5)
{
  uint32_t uVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t *pU64_6;
  uint64_t uVal_7;
  uint8_t local_d8 [64];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [24];
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = func_0x180672de0(0xd8);
  func_0x18065c980(local_d8,param_5);
  local_68._0_16_ = ZEXT816(0);
  local_78 = ZEXT816(0);
  uVal_2 = *(uint64_t *)param_4[1];
  if (0xf < *(uint64_t *)(param_4[1] + 8)) {
    param_4 = *(uint8_t (**)[16])*param_4;
  }
  if ((int64_t)uVal_2 < 0) {
    func_0x18007ba70();
  }
  else {
    if (uVal_2 < 0x10) {
      local_68._8_8_ = 0xf;
      local_68._0_8_ = uVal_2;
      local_78 = *param_4;
    }
    else {
      uVal_4 = uVal_2 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_4) {
        uVal_7 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        uVal_4 = func_0x180672de0(uVal_7 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_7 + 0x28);
        uVal_4 = lVal_5 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_4 - 8) = lVal_5;
      }
      local_78._0_8_ = uVal_4;
      local_68._8_8_ = uVal_7;
      local_68._0_8_ = uVal_2;
      func_0x1806aa960(uVal_4,param_4,uVal_2 + 1);
    }
    uVal_1 = *param_3;
    local_88 = ZEXT816(0);
    local_98 = ZEXT816(0);
    uVal_2 = *(uint64_t *)param_2[1];
    if (0xf < *(uint64_t *)(param_2[1] + 8)) {
      param_2 = *(uint8_t (**)[16])*param_2;
    }
    if (-1 < (int64_t)uVal_2) {
      if (uVal_2 < 0x10) {
        local_88._8_8_ = 0xf;
        local_88._0_8_ = uVal_2;
        local_98 = *param_2;
      }
      else {
        uVal_4 = uVal_2 | 0xf;
        uVal_7 = 0x16;
        if (0x16 < uVal_4) {
          uVal_7 = uVal_4;
        }
        if (uVal_4 < 0xfff) {
          uVal_4 = func_0x180672de0(uVal_7 + 1);
        }
        else {
          lVal_5 = func_0x180672de0(uVal_7 + 0x28);
          uVal_4 = lVal_5 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_4 - 8) = lVal_5;
        }
        local_98._0_8_ = uVal_4;
        local_88._8_8_ = uVal_7;
        local_88._0_8_ = uVal_2;
        func_0x1806aa960(uVal_4,param_2,uVal_2 + 1);
      }
      func_0x1806554e0(local_50,local_98,uVal_1,local_78,local_d8);
      *param_1 = local_50;
      return param_1;
    }
  }
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_6 = (uint64_t *)(*fnPtr_3)();
  return pU64_6;
}

// Unwind@1806560c0
void Unwind_1806560c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180656100
void Unwind_180656100(uint64_t param_1,int64_t param_2)
{
  func_0x1806515a0(param_2 + 0x30);
  return;
}

// Unwind@180656140
void Unwind_180656140(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0xb8),0xd8);
  return;
}

// func_0x180656430
void func_0x180656430(int64_t param_1,uint param_2,uint32_t *param_3)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint8_t (*pArr16_4)[16];
  uint64_t uVal_5;
  int64_t lVal_6;
  uint8_t (**ptr2_Arr16_7)[16];
  int64_t lVal_8;
  uint8_t (*local_38)[16];
  uint8_t (*local_30)[16];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVal_8 = (((uint64_t)(param_2 & 0xff) ^ 0xbf29ce484222325) * 0x100000001b3 &
          *(uint64_t *)(param_1 + 200)) * 0x10;
  lVal_6 = *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 8 + lVal_8);
  if (lVal_6 != *(int64_t *)(param_1 + 0xa0)) {
    if ((char)param_2 != *(char *)(lVal_6 + 0x10)) {
      do {
        if (lVal_6 == *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + lVal_8))
        goto code_r0x000180656504;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while ((char)param_2 != *(char *)(lVal_6 + 0x10));
    }
    if (lVal_6 != *(int64_t *)(param_1 + 0xa0)) {
      (**(func_ptr_t *)(**(int64_t **)(lVal_6 + 0x18) + 0x10))(*(int64_t **)(lVal_6 + 0x18),&local_30);
      local_38 = local_30;
      uVal_1 = param_3[1];
      uVal_2 = param_3[2];
      uVal_3 = param_3[3];
      *(uint32_t *)(*local_30 + 8) = *param_3;
      *(uint32_t *)(*local_30 + 0xc) = uVal_1;
      *(uint32_t *)local_30[1] = uVal_2;
      *(uint32_t *)(local_30[1] + 4) = uVal_3;
      local_30 = (uint8_t (*)[16])0x0;
      ptr2_Arr16_7 = *(uint8_t (***)[16])(param_1 + 0x88);
      if (ptr2_Arr16_7 == *(uint8_t (***)[16])(param_1 + 0x90)) {
        func_0x180639250(param_1 + 0x80,ptr2_Arr16_7,&local_38);
        if (local_38 != (uint8_t (*)[16])0x0) {
          (***(func_ptr_t **)*local_38)(local_38,1);
        }
      }
      else {
        *ptr2_Arr16_7 = local_38;
        *(int64_t *)(param_1 + 0x88) = *(int64_t *)(param_1 + 0x88) + 8;
      }
      goto LAB_180656581;
    }
  }
code_r0x000180656504:
  switch(param_2 & 0xff) {
  case 0x21:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df130;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  default:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x38);
    *local_30 = ZEXT816(0);
    local_30[1] = ZEXT816(0);
    *(uint8_t ***)*local_30 = &PTR_FUN_1806deec8;
    *(uint8_t (*)[16])(local_30[1] + 8) = ZEXT816(0);
    *(uint64_t *)(local_30[2] + 8) = 0;
    *(uint64_t *)local_30[3] = 0xf;
    if (*(char *)(param_3 + 3) == '\0') {
      func_0x180658fc0(local_30,0x25);
      func_0x180658fc0(local_30,param_2);
      local_38 = local_30;
      local_30 = (uint8_t (*)[16])0x0;
      func_0x180655c30(param_1 + 0x80,&local_38);
    }
    else {
      *(uint8_t *)(param_3 + 3) = 0;
      local_38 = (uint8_t (*)[16])func_0x180672de0(0x18);
      uVal_1 = param_3[1];
      uVal_2 = param_3[2];
      uVal_3 = param_3[3];
      *(uint32_t *)(*local_38 + 8) = *param_3;
      *(uint32_t *)(*local_38 + 0xc) = uVal_1;
      *(uint32_t *)local_38[1] = uVal_2;
      *(uint32_t *)(local_38[1] + 4) = uVal_3;
      *(uint8_t ***)*local_38 = &PTR_FUN_1806df130;
      func_0x180655c30(param_1 + 0x80,&local_38);
      if (local_38 != (uint8_t (*)[16])0x0) {
        (***(func_ptr_t **)*local_38)(local_38,1);
      }
      func_0x180658fc0(local_30,param_2);
      local_38 = local_30;
      local_30 = (uint8_t (*)[16])0x0;
      func_0x180655c30(param_1 + 0x80,&local_38);
    }
    if (local_38 != (uint8_t (*)[16])0x0) {
      (***(func_ptr_t **)*local_38)(local_38,1);
    }
    func_0x180658f50(&local_30);
    return;
  case 0x23:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df120;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x24:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df0e0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x25:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x20);
    *(uint64_t *)(*local_30 + 8) = 0;
    *(uint64_t *)(*local_30 + 0xe) = 0;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df140;
    local_30[1][8] = 0x25;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x26:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df190;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x2b:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x158);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806deea8;
    *(uint64_t *)(local_30[1] + 8) = 0;
    *(uint64_t *)(local_30[2] + 8) = 0;
    *(func_ptr_t *)(local_30[3] + 8) = func_0x1800b02d0;
    *(uint8_t (**)[16])local_30[2] = local_30 + 4;
    *(uint64_t *)local_30[3] = 0xfa;
    *(uint8_t (*)[16])(local_30[0x14] + 8) = ZEXT816(0);
    *(uint8_t ***)local_30[0x14] = &PTR_FUN_1806deeb8;
    local_38 = (uint8_t (*)[16])0x0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    if (local_30 != (uint8_t (*)[16])0x0) {
      (***(func_ptr_t **)*local_30)(local_30,1);
    }
    func_0x180655c60(&local_38);
    goto LAB_18065702a;
  case 0x40:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df0f0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x41:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def60;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x42:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def80;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x43:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806defa0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x44:
  case 0x78:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806defc0;
    ptr2_Arr16_7 = *(uint8_t (***)[16])(param_1 + 0x88);
    if (ptr2_Arr16_7 != *(uint8_t (***)[16])(param_1 + 0x90)) {
LAB_180656615:
      *ptr2_Arr16_7 = local_30;
      *(int64_t *)(param_1 + 0x88) = *(int64_t *)(param_1 + 0x88) + 8;
      goto LAB_18065702a;
    }
    func_0x180639250(param_1 + 0x80,ptr2_Arr16_7,&local_30);
    goto LAB_180657017;
  case 0x45:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df060;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x46:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df050;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x48:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806deff0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x49:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df000;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x4c:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def20;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x4d:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df010;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x4f:
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x20);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*pArr16_4 + 8) = *param_3;
    *(uint32_t *)(*pArr16_4 + 0xc) = uVal_1;
    *(uint32_t *)pArr16_4[1] = uVal_2;
    *(uint32_t *)(pArr16_4[1] + 4) = uVal_3;
    *(uint8_t ***)*pArr16_4 = &PTR_FUN_1806df180;
    uVal_5 = _Xtime_get_ticks();
    *(uint64_t *)(pArr16_4[1] + 8) = uVal_5;
    local_30 = pArr16_4;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x50:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df0c0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x52:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df090;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x53:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df020;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x54:
  case 0x58:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df0a0;
    ptr2_Arr16_7 = *(uint8_t (***)[16])(param_1 + 0x88);
    if (ptr2_Arr16_7 != *(uint8_t (***)[16])(param_1 + 0x90)) goto LAB_180656615;
    func_0x180639250(param_1 + 0x80,ptr2_Arr16_7,&local_30);
    goto LAB_180657017;
  case 0x59:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806defb0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x5e:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df0d0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x61:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def50;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x62:
  case 0x68:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def70;
    ptr2_Arr16_7 = *(uint8_t (***)[16])(param_1 + 0x88);
    if (ptr2_Arr16_7 != *(uint8_t (***)[16])(param_1 + 0x90)) goto LAB_180656615;
    func_0x180639250(param_1 + 0x80,ptr2_Arr16_7,&local_30);
    goto LAB_180657017;
  case 99:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def90;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 100:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806defe0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x65:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df030;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x66:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df040;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x67:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df110;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x69:
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x20);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*pArr16_4 + 8) = *param_3;
    *(uint32_t *)(*pArr16_4 + 0xc) = uVal_1;
    *(uint32_t *)pArr16_4[1] = uVal_2;
    *(uint32_t *)(pArr16_4[1] + 4) = uVal_3;
    *(uint8_t ***)*pArr16_4 = &PTR_FUN_1806df160;
    uVal_5 = _Xtime_get_ticks();
    *(uint64_t *)(pArr16_4[1] + 8) = uVal_5;
    local_30 = pArr16_4;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x6c:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def10;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x6d:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806defd0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x6e:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def00;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x6f:
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x20);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*pArr16_4 + 8) = *param_3;
    *(uint32_t *)(*pArr16_4 + 0xc) = uVal_1;
    *(uint32_t *)pArr16_4[1] = uVal_2;
    *(uint32_t *)(pArr16_4[1] + 4) = uVal_3;
    *(uint8_t ***)*pArr16_4 = &PTR_FUN_1806df170;
    uVal_5 = _Xtime_get_ticks();
    *(uint64_t *)(pArr16_4[1] + 8) = uVal_5;
    local_30 = pArr16_4;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x70:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df070;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x72:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df080;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_180657017;
  case 0x73:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df100;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x74:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def30;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x75:
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x20);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*pArr16_4 + 8) = *param_3;
    *(uint32_t *)(*pArr16_4 + 0xc) = uVal_1;
    *(uint32_t *)pArr16_4[1] = uVal_2;
    *(uint32_t *)(pArr16_4[1] + 4) = uVal_3;
    *(uint8_t ***)*pArr16_4 = &PTR_FUN_1806df150;
    uVal_5 = _Xtime_get_ticks();
    *(uint64_t *)(pArr16_4[1] + 8) = uVal_5;
    local_30 = pArr16_4;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x76:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806def40;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x7a:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x28);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df0b0;
    *(uint64_t *)(local_30[1] + 8) = 0;
    *(uint32_t *)local_30[2] = 0;
    func_0x180655c30(param_1 + 0x80,&local_30);
LAB_180657017:
    if (local_30 != (uint8_t (*)[16])0x0) {
      (***(func_ptr_t **)*local_30)(local_30,1);
    }
LAB_18065702a:
    *(uint8_t *)(param_1 + 0x4c) = 1;
    return;
  }
LAB_180656581:
  if (local_30 != (uint8_t (*)[16])0x0) {
    (***(func_ptr_t **)*local_30)(local_30,1);
  }
  return;
}

// Unwind@180657090
void Unwind_180657090(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x20);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806570e0
void Unwind_1806570e0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  func_0x180655c60(param_2 + 0x20);
  return;
}

// Unwind@180657120
void Unwind_180657120(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657150
void Unwind_180657150(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657180
void Unwind_180657180(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806571b0
void Unwind_1806571b0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806571e0
void Unwind_1806571e0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657210
void Unwind_180657210(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657240
void Unwind_180657240(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657270
void Unwind_180657270(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806572a0
void Unwind_1806572a0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806572d0
void Unwind_1806572d0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657300
void Unwind_180657300(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657330
void Unwind_180657330(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657360
void Unwind_180657360(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657390
void Unwind_180657390(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806573c0
void Unwind_1806573c0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806573f0
void Unwind_1806573f0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657420
void Unwind_180657420(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657450
void Unwind_180657450(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657480
void Unwind_180657480(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806574b0
void Unwind_1806574b0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806574e0
void Unwind_1806574e0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657510
void Unwind_180657510(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657540
void Unwind_180657540(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657570
void Unwind_180657570(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806575a0
void Unwind_1806575a0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806575d0
void Unwind_1806575d0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657600
void Unwind_180657600(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657630
void Unwind_180657630(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657660
void Unwind_180657660(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657690
void Unwind_180657690(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806576c0
void Unwind_1806576c0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806576f0
void Unwind_1806576f0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657720
void Unwind_180657720(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657750
void Unwind_180657750(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657780
void Unwind_180657780(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806577b0
void Unwind_1806577b0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806577e0
void Unwind_1806577e0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657810
void Unwind_180657810(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657840
void Unwind_180657840(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657870
void Unwind_180657870(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806578a0
void Unwind_1806578a0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806578d0
void Unwind_1806578d0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657900
void Unwind_180657900(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x20);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657930
void Unwind_180657930(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x20);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657960
void Unwind_180657960(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x20);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180657990
void Unwind_180657990(uint64_t param_1,int64_t param_2)
{
  func_0x180658f50(param_2 + 0x28);
  return;
}

// func_0x1806579c0
void func_0x1806579c0(int64_t param_1,uint param_2,uint32_t *param_3)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint8_t (*pArr16_4)[16];
  uint64_t uVal_5;
  int64_t lVal_6;
  uint8_t (**ptr2_Arr16_7)[16];
  int64_t lVal_8;
  uint8_t (*local_38)[16];
  uint8_t (*local_30)[16];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVal_8 = (((uint64_t)(param_2 & 0xff) ^ 0xbf29ce484222325) * 0x100000001b3 &
          *(uint64_t *)(param_1 + 200)) * 0x10;
  lVal_6 = *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 8 + lVal_8);
  if (lVal_6 != *(int64_t *)(param_1 + 0xa0)) {
    if ((char)param_2 != *(char *)(lVal_6 + 0x10)) {
      do {
        if (lVal_6 == *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + lVal_8))
        goto code_r0x000180657a94;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while ((char)param_2 != *(char *)(lVal_6 + 0x10));
    }
    if (lVal_6 != *(int64_t *)(param_1 + 0xa0)) {
      (**(func_ptr_t *)(**(int64_t **)(lVal_6 + 0x18) + 0x10))(*(int64_t **)(lVal_6 + 0x18),&local_30);
      local_38 = local_30;
      uVal_1 = param_3[1];
      uVal_2 = param_3[2];
      uVal_3 = param_3[3];
      *(uint32_t *)(*local_30 + 8) = *param_3;
      *(uint32_t *)(*local_30 + 0xc) = uVal_1;
      *(uint32_t *)local_30[1] = uVal_2;
      *(uint32_t *)(local_30[1] + 4) = uVal_3;
      local_30 = (uint8_t (*)[16])0x0;
      ptr2_Arr16_7 = *(uint8_t (***)[16])(param_1 + 0x88);
      if (ptr2_Arr16_7 == *(uint8_t (***)[16])(param_1 + 0x90)) {
        func_0x180639250(param_1 + 0x80,ptr2_Arr16_7,&local_38);
        if (local_38 != (uint8_t (*)[16])0x0) {
          (***(func_ptr_t **)*local_38)(local_38,1);
        }
      }
      else {
        *ptr2_Arr16_7 = local_38;
        *(int64_t *)(param_1 + 0x88) = *(int64_t *)(param_1 + 0x88) + 8;
      }
      goto LAB_180657b11;
    }
  }
code_r0x000180657a94:
  switch(param_2 & 0xff) {
  case 0x21:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df3b0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  default:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x38);
    *local_30 = ZEXT816(0);
    local_30[1] = ZEXT816(0);
    *(uint8_t ***)*local_30 = &PTR_FUN_1806deec8;
    *(uint8_t (*)[16])(local_30[1] + 8) = ZEXT816(0);
    *(uint64_t *)(local_30[2] + 8) = 0;
    *(uint64_t *)local_30[3] = 0xf;
    if (*(char *)(param_3 + 3) == '\0') {
      func_0x180658fc0(local_30,0x25);
      func_0x180658fc0(local_30,param_2);
      local_38 = local_30;
      local_30 = (uint8_t (*)[16])0x0;
      func_0x180655c30(param_1 + 0x80,&local_38);
    }
    else {
      *(uint8_t *)(param_3 + 3) = 0;
      local_38 = (uint8_t (*)[16])func_0x180672de0(0x18);
      uVal_1 = param_3[1];
      uVal_2 = param_3[2];
      uVal_3 = param_3[3];
      *(uint32_t *)(*local_38 + 8) = *param_3;
      *(uint32_t *)(*local_38 + 0xc) = uVal_1;
      *(uint32_t *)local_38[1] = uVal_2;
      *(uint32_t *)(local_38[1] + 4) = uVal_3;
      *(uint8_t ***)*local_38 = &PTR_FUN_1806df3b0;
      func_0x180655c30(param_1 + 0x80,&local_38);
      if (local_38 != (uint8_t (*)[16])0x0) {
        (***(func_ptr_t **)*local_38)(local_38,1);
      }
      func_0x180658fc0(local_30,param_2);
      local_38 = local_30;
      local_30 = (uint8_t (*)[16])0x0;
      func_0x180655c30(param_1 + 0x80,&local_38);
    }
    if (local_38 != (uint8_t (*)[16])0x0) {
      (***(func_ptr_t **)*local_38)(local_38,1);
    }
    func_0x180658f50(&local_30);
    return;
  case 0x23:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df3a0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x24:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df0e0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x25:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x20);
    *(uint64_t *)(*local_30 + 8) = 0;
    *(uint64_t *)(*local_30 + 0xe) = 0;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df140;
    local_30[1][8] = 0x25;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x26:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806deeb8;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x2b:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x158);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806deea8;
    *(uint64_t *)(local_30[1] + 8) = 0;
    *(uint64_t *)(local_30[2] + 8) = 0;
    *(func_ptr_t *)(local_30[3] + 8) = func_0x1800b02d0;
    *(uint8_t (**)[16])local_30[2] = local_30 + 4;
    *(uint64_t *)local_30[3] = 0xfa;
    *(uint8_t (*)[16])(local_30[0x14] + 8) = ZEXT816(0);
    *(uint8_t ***)local_30[0x14] = &PTR_FUN_1806deeb8;
    local_38 = (uint8_t (*)[16])0x0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    if (local_30 != (uint8_t (*)[16])0x0) {
      (***(func_ptr_t **)*local_30)(local_30,1);
    }
    func_0x180655c60(&local_38);
    goto LAB_1806585ba;
  case 0x40:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df370;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x41:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df200;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x42:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df220;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x43:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df240;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x44:
  case 0x78:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df260;
    ptr2_Arr16_7 = *(uint8_t (***)[16])(param_1 + 0x88);
    if (ptr2_Arr16_7 != *(uint8_t (***)[16])(param_1 + 0x90)) {
LAB_180657ba5:
      *ptr2_Arr16_7 = local_30;
      *(int64_t *)(param_1 + 0x88) = *(int64_t *)(param_1 + 0x88) + 8;
      goto LAB_1806585ba;
    }
    func_0x180639250(param_1 + 0x80,ptr2_Arr16_7,&local_30);
    goto LAB_1806585a7;
  case 0x45:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df300;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x46:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df2f0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x48:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df290;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x49:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df2a0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x4c:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df1c0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x4d:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df2b0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x4f:
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x20);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*pArr16_4 + 8) = *param_3;
    *(uint32_t *)(*pArr16_4 + 0xc) = uVal_1;
    *(uint32_t *)pArr16_4[1] = uVal_2;
    *(uint32_t *)(pArr16_4[1] + 4) = uVal_3;
    *(uint8_t ***)*pArr16_4 = &PTR_FUN_1806df3f0;
    uVal_5 = _Xtime_get_ticks();
    *(uint64_t *)(pArr16_4[1] + 8) = uVal_5;
    local_30 = pArr16_4;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x50:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df360;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x52:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df330;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x53:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df2c0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x54:
  case 0x58:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df340;
    ptr2_Arr16_7 = *(uint8_t (***)[16])(param_1 + 0x88);
    if (ptr2_Arr16_7 != *(uint8_t (***)[16])(param_1 + 0x90)) goto LAB_180657ba5;
    func_0x180639250(param_1 + 0x80,ptr2_Arr16_7,&local_30);
    goto LAB_1806585a7;
  case 0x59:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df250;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x5e:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df0d0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x61:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df1f0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x62:
  case 0x68:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df210;
    ptr2_Arr16_7 = *(uint8_t (***)[16])(param_1 + 0x88);
    if (ptr2_Arr16_7 != *(uint8_t (***)[16])(param_1 + 0x90)) goto LAB_180657ba5;
    func_0x180639250(param_1 + 0x80,ptr2_Arr16_7,&local_30);
    goto LAB_1806585a7;
  case 99:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df230;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 100:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df280;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x65:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df2d0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x66:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df2e0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x67:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df390;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x69:
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x20);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*pArr16_4 + 8) = *param_3;
    *(uint32_t *)(*pArr16_4 + 0xc) = uVal_1;
    *(uint32_t *)pArr16_4[1] = uVal_2;
    *(uint32_t *)(pArr16_4[1] + 4) = uVal_3;
    *(uint8_t ***)*pArr16_4 = &PTR_FUN_1806df3d0;
    uVal_5 = _Xtime_get_ticks();
    *(uint64_t *)(pArr16_4[1] + 8) = uVal_5;
    local_30 = pArr16_4;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x6c:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df1b0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x6d:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df270;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x6e:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df1a0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x6f:
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x20);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*pArr16_4 + 8) = *param_3;
    *(uint32_t *)(*pArr16_4 + 0xc) = uVal_1;
    *(uint32_t *)pArr16_4[1] = uVal_2;
    *(uint32_t *)(pArr16_4[1] + 4) = uVal_3;
    *(uint8_t ***)*pArr16_4 = &PTR_FUN_1806df3e0;
    uVal_5 = _Xtime_get_ticks();
    *(uint64_t *)(pArr16_4[1] + 8) = uVal_5;
    local_30 = pArr16_4;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x70:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df310;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x72:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df320;
    func_0x180655c30(param_1 + 0x80,&local_30);
    goto LAB_1806585a7;
  case 0x73:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df380;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x74:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df1d0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x75:
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x20);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*pArr16_4 + 8) = *param_3;
    *(uint32_t *)(*pArr16_4 + 0xc) = uVal_1;
    *(uint32_t *)pArr16_4[1] = uVal_2;
    *(uint32_t *)(pArr16_4[1] + 4) = uVal_3;
    *(uint8_t ***)*pArr16_4 = &PTR_FUN_1806df3c0;
    uVal_5 = _Xtime_get_ticks();
    *(uint64_t *)(pArr16_4[1] + 8) = uVal_5;
    local_30 = pArr16_4;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x76:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x18);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df1e0;
    func_0x180655c30(param_1 + 0x80,&local_30);
    break;
  case 0x7a:
    local_30 = (uint8_t (*)[16])func_0x180672de0(0x28);
    uVal_1 = param_3[1];
    uVal_2 = param_3[2];
    uVal_3 = param_3[3];
    *(uint32_t *)(*local_30 + 8) = *param_3;
    *(uint32_t *)(*local_30 + 0xc) = uVal_1;
    *(uint32_t *)local_30[1] = uVal_2;
    *(uint32_t *)(local_30[1] + 4) = uVal_3;
    *(uint8_t ***)*local_30 = &PTR_FUN_1806df350;
    *(uint64_t *)(local_30[1] + 8) = 0;
    *(uint32_t *)local_30[2] = 0;
    func_0x180655c30(param_1 + 0x80,&local_30);
LAB_1806585a7:
    if (local_30 != (uint8_t (*)[16])0x0) {
      (***(func_ptr_t **)*local_30)(local_30,1);
    }
LAB_1806585ba:
    *(uint8_t *)(param_1 + 0x4c) = 1;
    return;
  }
LAB_180657b11:
  if (local_30 != (uint8_t (*)[16])0x0) {
    (***(func_ptr_t **)*local_30)(local_30,1);
  }
  return;
}

// Unwind@180658620
void Unwind_180658620(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x20);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658670
void Unwind_180658670(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  func_0x180655c60(param_2 + 0x20);
  return;
}

// Unwind@1806586b0
void Unwind_1806586b0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806586e0
void Unwind_1806586e0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658710
void Unwind_180658710(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658740
void Unwind_180658740(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658770
void Unwind_180658770(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806587a0
void Unwind_1806587a0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806587d0
void Unwind_1806587d0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658800
void Unwind_180658800(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658830
void Unwind_180658830(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658860
void Unwind_180658860(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658890
void Unwind_180658890(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806588c0
void Unwind_1806588c0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806588f0
void Unwind_1806588f0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658920
void Unwind_180658920(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658950
void Unwind_180658950(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658980
void Unwind_180658980(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806589b0
void Unwind_1806589b0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1806589e0
void Unwind_1806589e0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658a10
void Unwind_180658a10(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658a40
void Unwind_180658a40(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658a70
void Unwind_180658a70(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658aa0
void Unwind_180658aa0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658ad0
void Unwind_180658ad0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658b00
void Unwind_180658b00(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658b30
void Unwind_180658b30(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658b60
void Unwind_180658b60(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658b90
void Unwind_180658b90(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658bc0
void Unwind_180658bc0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658bf0
void Unwind_180658bf0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658c20
void Unwind_180658c20(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658c50
void Unwind_180658c50(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658c80
void Unwind_180658c80(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658cb0
void Unwind_180658cb0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658ce0
void Unwind_180658ce0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658d10
void Unwind_180658d10(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658d40
void Unwind_180658d40(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658d70
void Unwind_180658d70(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658da0
void Unwind_180658da0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658dd0
void Unwind_180658dd0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658e00
void Unwind_180658e00(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658e30
void Unwind_180658e30(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180658e60
void Unwind_180658e60(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x28);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}
