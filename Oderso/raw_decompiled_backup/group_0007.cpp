#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x1800ad470
int64_t * func_0x1800ad470(int64_t param_1)
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
  pLong_4 = DAT_18083ec38;
  local_48 = DAT_18083ec38;
  if (DAT_18083eb18 == 0) {
    func_0x180673560(local_4c,0);
    if (DAT_18083eb18 == 0) {
      DAT_18083eb18 = (int64_t)DAT_180841fc0 + 1;
      DAT_180841fc0 = (int)DAT_18083eb18;
    }
    func_0x1806735b0(local_4c);
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_18083eb18 < *(uint64_t *)(lVal_3 + 0x18)) goto LAB_1800ad4fe;
  }
  else {
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_18083eb18 < *(uint64_t *)(lVal_3 + 0x18)) {
LAB_1800ad4fe:
      pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + DAT_18083eb18 * 8);
      if (pLong_5 != (int64_t *)0x0) goto LAB_1800ad568;
    }
  }
  uVal_2 = DAT_18083eb18;
  if ((((*(char *)(lVal_3 + 0x24) != '\x01') ||
       (lVal_3 = func_0x180673c90(), *(uint64_t *)(lVal_3 + 0x18) <= uVal_2)) ||
      (pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + uVal_2 * 8), pLong_5 == (int64_t *)0x0))
     && (pLong_5 = pLong_4, pLong_4 == (int64_t *)0x0)) {
    lVal_3 = func_0x1800ad600(&local_48,param_1);
    if (lVal_3 == -1) {
      func_0x18008c8d0();
      fnPtr_1 = (func_ptr_t )swi(3);
      pLong_4 = (int64_t *)(*fnPtr_1)();
      return pLong_4;
    }
    local_40 = local_48;
    func_0x180673910();
    (**(func_ptr_t *)(*local_40 + 8))();
    DAT_18083ec38 = local_48;
    pLong_5 = local_48;
  }
LAB_1800ad568:
  func_0x1806735b0(local_34);
  return pLong_5;
}

// Unwind@1800ad590
void Unwind_1800ad590(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    (**(func_ptr_t *)**(uint64_t **)(param_2 + 0x38))(*(uint64_t **)(param_2 + 0x38),1);
  }
  return;
}

// Unwind@1800ad5d0
void Unwind_1800ad5d0(uint64_t param_1,int64_t param_2)
{
  func_0x1806735b0(param_2 + 0x44);
  return;
}

// func_0x1800ad600
uint64_t func_0x1800ad600(int64_t *param_1,int64_t param_2)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  undefined1 *pU64_3;
  uint8_t local_90 [104];
  uint64_t *local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((param_1 != (int64_t *)0x0) && (*param_1 == 0)) {
    local_28 = (uint64_t *)func_0x180672de0(0x30);
    lVal_1 = *(int64_t *)(param_2 + 8);
    if (lVal_1 == 0) {
      pU64_3 = &DAT_180761155;
    }
    else {
      pU64_3 = (undefined1 *)(lVal_1 + 0x30);
      if (*(undefined1 **)(lVal_1 + 0x28) != (undefined1 *)0x0) {
        pU64_3 = *(undefined1 **)(lVal_1 + 0x28);
      }
    }
    func_0x18008c920(local_90,pU64_3);
    pU64_2 = local_28;
    *(uint32_t *)(local_28 + 1) = 0;
    *local_28 = std::numpunct<char>::vftable;
    func_0x1800ad710(local_28,local_90,1);
    *param_1 = (int64_t)pU64_2;
    func_0x18008ca70(local_90);
  }
  return 4;
}

// Unwind@1800ad6b0
void Unwind_1800ad6b0(uint64_t param_1,int64_t param_2)
{
  func_0x18008ca70(param_2 + 0x28);
  return;
}

// Unwind@1800ad6e0
void Unwind_1800ad6e0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0x30);
  return;
}

// func_0x1800ad710
void func_0x1800ad710(int64_t param_1,uint64_t param_2,char param_3)
{
  func_ptr_t fnPtr_1;
  uint8_t uVal_2;
  uint64_t *pU64_3;
  size_t sz_4;
  int64_t lVal_5;
  uint32_t *pU64_6;
  char *_Str;
  int64_t lVal_7;
  uint8_t local_74 [44];
  int64_t local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  pU64_3 = (uint64_t *)func_0x18068c080();
  func_0x180675c50(local_74);
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint8_t (*)[16])(param_1 + 0x20) = ZEXT816(0);
  if (param_3 == '\0') {
    _Str = (char *)pU64_3[2];
  }
  else {
    _Str = "";
  }
  local_48 = param_1;
  sz_4 = strlen(_Str);
  lVal_7 = sz_4 + 1;
  lVal_5 = _calloc_base(lVal_7,1);
  if (lVal_5 == 0) {
    func_0x180674470();
  }
  else {
    if (lVal_7 != 0) {
      func_0x1806aa960(lVal_5,_Str,lVal_7);
    }
    *(int64_t *)(param_1 + 0x10) = lVal_5;
    pU64_6 = (uint32_t *)_calloc_base(6,1);
    if (pU64_6 != (uint32_t *)0x0) {
      *(uint16_t *)(pU64_6 + 1) = 0x65;
      *pU64_6 = 0x736c6166;
      *(uint32_t **)(param_1 + 0x20) = pU64_6;
      pU64_6 = (uint32_t *)_calloc_base(5,1);
      if (pU64_6 != (uint32_t *)0x0) {
        *(uint8_t *)(pU64_6 + 1) = 0;
        *pU64_6 = 0x65757274;
        *(uint32_t **)(param_1 + 0x28) = pU64_6;
        if (param_3 == '\0') {
          *(uint8_t *)(param_1 + 0x18) = *(uint8_t *)*pU64_3;
          uVal_2 = *(uint8_t *)pU64_3[1];
        }
        else {
          *(uint8_t *)(param_1 + 0x18) = 0x2e;
          uVal_2 = 0x2c;
        }
        *(uint8_t *)(param_1 + 0x19) = uVal_2;
        return;
      }
      goto LAB_1800ad827;
    }
  }
  func_0x180674470();
LAB_1800ad827:
  func_0x180674470();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800ad830
void Unwind_1800ad830(uint64_t param_1,int64_t param_2)
{
  func_0x1800ada90(param_2 + 0x50);
  return;
}

// func_0x1800ad860
uint8_t func_0x1800ad860(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0x18);
}

// func_0x1800ad870
uint8_t func_0x1800ad870(int64_t param_1)
{
  return *(uint8_t *)(param_1 + 0x19);
}

// func_0x1800ad880
uint8_t (*func_0x1800ad880(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  char *_Str;
  func_ptr_t fnPtr_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  
  _Str = *(char **)(param_1 + 0x10);
  *param_2 = ZEXT816(0);
  sz_2 = strlen(_Str);
  if (-1 < (int64_t)sz_2) {
    uVal_6 = 0xf;
    pArr16_5 = param_2;
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pArr16_5 = (uint8_t (*)[16])func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_6 + 0x28);
        pArr16_5 = (uint8_t (*)[16])(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_5[-1] + 8) = lVal_4;
      }
      *(uint8_t (**)[16])*param_2 = pArr16_5;
    }
    *(size_t *)param_2[1] = sz_2;
    *(uint64_t *)(param_2[1] + 8) = uVal_6;
    func_0x1806aa960(pArr16_5,_Str,sz_2);
    (*pArr16_5)[sz_2] = 0;
    return param_2;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_5;
}

// func_0x1800ad930
uint8_t (*func_0x1800ad930(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  char *_Str;
  func_ptr_t fnPtr_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  
  _Str = *(char **)(param_1 + 0x20);
  *param_2 = ZEXT816(0);
  sz_2 = strlen(_Str);
  if (-1 < (int64_t)sz_2) {
    uVal_6 = 0xf;
    pArr16_5 = param_2;
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pArr16_5 = (uint8_t (*)[16])func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_6 + 0x28);
        pArr16_5 = (uint8_t (*)[16])(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_5[-1] + 8) = lVal_4;
      }
      *(uint8_t (**)[16])*param_2 = pArr16_5;
    }
    *(size_t *)param_2[1] = sz_2;
    *(uint64_t *)(param_2[1] + 8) = uVal_6;
    func_0x1806aa960(pArr16_5,_Str,sz_2);
    (*pArr16_5)[sz_2] = 0;
    return param_2;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_5;
}

// func_0x1800ad9e0
uint8_t (*func_0x1800ad9e0(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  char *_Str;
  func_ptr_t fnPtr_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  
  _Str = *(char **)(param_1 + 0x28);
  *param_2 = ZEXT816(0);
  sz_2 = strlen(_Str);
  if (-1 < (int64_t)sz_2) {
    uVal_6 = 0xf;
    pArr16_5 = param_2;
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pArr16_5 = (uint8_t (*)[16])func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_6 + 0x28);
        pArr16_5 = (uint8_t (*)[16])(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_5[-1] + 8) = lVal_4;
      }
      *(uint8_t (**)[16])*param_2 = pArr16_5;
    }
    *(size_t *)param_2[1] = sz_2;
    *(uint64_t *)(param_2[1] + 8) = uVal_6;
    func_0x1806aa960(pArr16_5,_Str,sz_2);
    (*pArr16_5)[sz_2] = 0;
    return param_2;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_5;
}

// func_0x1800ada90
void func_0x1800ada90(int64_t *param_1)
{
  int64_t lVal_1;
  
  lVal_1 = *param_1;
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(*(uint64_t *)(lVal_1 + 0x10));
    thunk_FUN_180695dd0(*(uint64_t *)(lVal_1 + 0x20));
    thunk_FUN_180695dd0(*(uint64_t *)(lVal_1 + 0x28));
    return;
  }
  return;
}

// func_0x1800adad0
uint64_t * func_0x1800adad0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = std::numpunct<char>::vftable;
  thunk_FUN_180695dd0(param_1[2]);
  thunk_FUN_180695dd0(param_1[4]);
  thunk_FUN_180695dd0(param_1[5]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x30);
  }
  return param_1;
}

// func_0x1800adb20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800adb20(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af1d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af1d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af1d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af1dc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x1ebaf17eba19395;
    param_1[1][8] = param_1[1][8] ^ 0x95;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1800adb50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800adb50(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af1e4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af1e0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af1e8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af1ec;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xbd094b5f;
    param_1[1][4] = param_1[1][4] ^ 0x19;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1800adc40
uint64_t func_0x1800adc40(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  int iVal_1;
  int64_t lVal_2;
  int *pInt_3;
  int64_t lVal_4;
  uint8_t auStack_e8 [32];
  int64_t *local_c8;
  int64_t local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int local_88 [6];
  int64_t local_70;
  tm local_68;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  local_70 = param_3 / 10000000;
  iVal_1 = common_gmtime_s<__int64>(&local_68,&local_70);
  if (iVal_1 != 0) {
    pInt_3 = &local_b8;
    goto LAB_1800addab;
  }
  local_98 = local_68.tm_isdst;
  local_a8 = local_68.tm_mon;
  iStack_a4 = local_68.tm_year;
  iStack_a0 = local_68.tm_wday;
  iStack_9c = local_68.tm_yday;
  local_b8 = local_68.tm_sec;
  iStack_b4 = local_68.tm_min;
  iStack_b0 = local_68.tm_hour;
  iStack_ac = local_68.tm_mday;
  lVal_4 = param_3 % 10000000;
  local_c0 = lVal_4;
  if (lVal_4 < 0) {
    if (local_68.tm_sec == 0) {
      lVal_2 = SUB168(SEXT816(param_3 + -10000000) * SEXT816(-0x29406b2a1a85bd43),8) + param_3 +
              -10000000;
      local_70 = (lVal_2 >> 0x17) - (lVal_2 >> 0x3f);
      iVal_1 = common_gmtime_s<__int64>(&local_68,&local_70);
      if (iVal_1 != 0) goto LAB_1800addd2;
      local_98 = local_68.tm_isdst;
      local_a8 = local_68.tm_mon;
      iStack_a4 = local_68.tm_year;
      iStack_a0 = local_68.tm_wday;
      iStack_9c = local_68.tm_yday;
      local_b8 = local_68.tm_sec;
      iStack_b4 = local_68.tm_min;
      iStack_b0 = local_68.tm_hour;
      iStack_ac = local_68.tm_mday;
    }
    else {
      local_b8 = local_68.tm_sec + -1;
    }
    local_c0 = lVal_4 + 10000000;
  }
  local_c8 = &local_c0;
  func_0x1800ae7e0(param_1,param_2,&local_b8,param_4);
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_e8)) {
    return param_2;
  }
  do {
    func_0x180673080(local_40 ^ (uint64_t)auStack_e8);
LAB_1800addd2:
    pInt_3 = local_88;
LAB_1800addab:
    func_0x1800ae690(pInt_3,"time_t value out of range");
    func_0x18067a120(pInt_3,&DAT_180768d70);
  } while( true );
}

// func_0x1800adde0
char * func_0x1800adde0(uint *param_1,char **param_2,uint8_t param_3)
{
  func_ptr_t fnPtr_1;
  char ch_2;
  char *fnPtr_3;
  char *fnPtr_4;
  char *fnPtr_5;
  uint8_t auStack_78 [32];
  uint *local_58;
  char **local_50;
  uint8_t local_40;
  undefined7 uStack_3f;
  int local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  fnPtr_3 = *param_2;
  if ((param_2[1] != (char *)0x0) && (*fnPtr_3 != '}')) {
    fnPtr_5 = param_2[1] + (int64_t)fnPtr_3;
    fnPtr_3 = (char *)func_0x1800adef0(fnPtr_3,fnPtr_5,param_1);
    if (fnPtr_3 != fnPtr_5) {
      ch_2 = *fnPtr_3;
      fnPtr_4 = fnPtr_3;
      if (ch_2 == '{' || (byte)(ch_2 - 0x30U) < 10) {
        local_58 = param_1 + 4;
        local_50 = param_2;
        func_0x1800ae330(&local_40,fnPtr_3,fnPtr_5,param_1 + 2);
        *param_1 = local_38 << 6 | *param_1 & 0xffffff3f;
        fnPtr_3 = (char *)CONCAT71(uStack_3f,local_40);
        if (fnPtr_3 == fnPtr_5) goto LAB_1800adec3;
        ch_2 = *fnPtr_3;
        fnPtr_4 = fnPtr_3;
      }
      if (ch_2 == 'L') {
        *(byte *)((int64_t)param_1 + 1) = *(byte *)((int64_t)param_1 + 1) | 0x40;
        fnPtr_4 = fnPtr_4 + 1;
      }
      local_40 = param_3;
      fnPtr_3 = (char *)func_0x1800ae0e0(fnPtr_4,fnPtr_5,&local_40);
      if ((int64_t)fnPtr_3 - (int64_t)fnPtr_4 != 0) {
        *(char **)(param_1 + 8) = fnPtr_4;
        *(int64_t *)(param_1 + 10) = (int64_t)fnPtr_3 - (int64_t)fnPtr_4;
      }
    }
  }
LAB_1800adec3:
  if (DAT_18083cf40 != (local_30 ^ (uint64_t)auStack_78)) {
    func_0x180673080(local_30 ^ (uint64_t)auStack_78);
    fnPtr_1 = (func_ptr_t )swi(3);
    fnPtr_3 = (char *)(*fnPtr_1)();
    return fnPtr_3;
  }
  return fnPtr_3;
}

// func_0x1800adef0
byte * func_0x1800adef0(byte *param_1,byte *param_2,uint *param_3)
{
  uint *pU64_1;
  uint *pU64_2;
  byte bFlag_3;
  byte bFlag_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint64_t uVal_12;
  int iVal_13;
  byte *pU8_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  
  bFlag_3 = *param_1;
  pU8_14 = param_1 + (uint64_t)((uint)(0x3a55000000000000 >> (bFlag_3 >> 2 & 0x3e)) & 3) + 1;
  if (param_2 == pU8_14 || (int64_t)param_2 - (int64_t)pU8_14 < 0) {
    pU8_14 = param_1;
  }
  bFlag_4 = *pU8_14;
  if (bFlag_4 == 0x3c) {
    iVal_13 = 1;
joined_r0x0001800adf8e:
    uVal_12 = (int64_t)pU8_14 - (int64_t)param_1;
    if (uVal_12 != 0) {
      if (bFlag_3 == 0x7d) {
        return param_1;
      }
      if (bFlag_3 == 0x7b) {
        func_0x18063f960("invalid fill character \'{\'");
        return param_1;
      }
      *param_3 = (int)uVal_12 << 0xf | *param_3 & 0xfffc7fff;
      if (uVal_12 != 0) {
        if (uVal_12 == 1) {
          *(byte *)(param_3 + 1) = *param_1;
          *(uint16_t *)((int64_t)param_3 + 5) = 0;
        }
        else {
          if (((uint64_t)((int64_t)param_1 - (int64_t)pU8_14) < 0xfffffffffffffffc || uVal_12 < 4
              ) || ((uint64_t)((int64_t)param_3 + (4 - (int64_t)param_1)) < 0x20)) {
            uVal_15 = 0;
          }
          else {
            if (uVal_12 < 0x20) {
              uVal_16 = 0;
LAB_1800ae078:
              uVal_15 = uVal_12 & 0xfffffffffffffffc;
              do {
                param_3[1] = *(uint *)(param_1 + uVal_16);
                uVal_16 = uVal_16 + 4;
                if (uVal_15 == uVal_16) goto LAB_1800ae0b6;
              } while( true );
            }
            uVal_15 = uVal_12 & 0xffffffffffffffe0;
            uVal_16 = 0;
            do {
              pU64_1 = (uint *)(param_1 + uVal_16);
              uVal_5 = pU64_1[1];
              uVal_6 = pU64_1[2];
              uVal_7 = pU64_1[3];
              pU64_2 = (uint *)(param_1 + uVal_16 + 0x10);
              uVal_8 = *pU64_2;
              uVal_9 = pU64_2[1];
              uVal_10 = pU64_2[2];
              uVal_11 = pU64_2[3];
              param_3[1] = *pU64_1;
              param_3[2] = uVal_5;
              param_3[3] = uVal_6;
              param_3[4] = uVal_7;
              param_3[5] = uVal_8;
              param_3[6] = uVal_9;
              param_3[7] = uVal_10;
              param_3[8] = uVal_11;
              uVal_16 = uVal_16 + 0x20;
            } while (uVal_15 != uVal_16);
            if (uVal_12 == uVal_15) goto LAB_1800ae0bb;
            uVal_16 = uVal_15;
            if ((uVal_12 & 0x1c) != 0) goto LAB_1800ae078;
          }
          do {
            *(byte *)((int64_t)param_3 + (uint64_t)((uint)uVal_15 & 3) + 4) = param_1[uVal_15];
            uVal_15 = uVal_15 + 1;
LAB_1800ae0b6:
          } while (uVal_12 != uVal_15);
        }
      }
LAB_1800ae0bb:
      param_1 = pU8_14 + 1;
      goto LAB_1800ae0c1;
    }
  }
  else {
    if (bFlag_4 == 0x3e) {
      iVal_13 = 2;
      goto joined_r0x0001800adf8e;
    }
    iVal_13 = 3;
    if (bFlag_4 == 0x5e) goto joined_r0x0001800adf8e;
    iVal_13 = 0;
    if (pU8_14 == param_1) goto LAB_1800ae0c1;
    if (bFlag_3 == 0x3c) {
      iVal_13 = 1;
    }
    else if (bFlag_3 == 0x5e) {
      iVal_13 = 3;
    }
    else {
      iVal_13 = 0;
      if (bFlag_3 != 0x3e) goto LAB_1800ae0c1;
      iVal_13 = 2;
    }
  }
  param_1 = param_1 + 1;
LAB_1800ae0c1:
  *param_3 = (*param_3 & 0xffffffc7) + iVal_13 * 8;
  return param_1;
}

// func_0x1800ae0e0
char * func_0x1800ae0e0(char *param_1,char *param_2,char *param_3)
{
  uint uVal_1;
  char *fnPtr_2;
  uint8_t *pU64_3;
  uint8_t auStack_138 [40];
  uint8_t local_110 [24];
  uint8_t local_f8 [24];
  uint8_t local_e0 [24];
  uint8_t local_c8 [24];
  uint8_t local_b0 [24];
  uint8_t local_98 [24];
  uint8_t local_80 [24];
  uint8_t local_68 [24];
  uint8_t local_50 [24];
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_138;
  if ((param_1 == param_2) || (*param_1 == '}')) {
LAB_1800ae242:
    if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_138)) {
      return param_1;
    }
    do {
      func_0x180673080(local_38 ^ (uint64_t)auStack_138);
LAB_1800ae2b4:
      fnPtr_2 = "invalid format";
      pU64_3 = local_68;
LAB_1800ae28d:
      func_0x1800ae690(pU64_3,fnPtr_2);
      func_0x18067a120(pU64_3,&DAT_180768d70);
    } while( true );
  }
  if (*param_1 != '%') goto LAB_1800ae2b4;
  do {
    fnPtr_2 = param_1 + 1;
    if (fnPtr_2 == param_2) {
      fnPtr_2 = "invalid format";
      pU64_3 = local_80;
      goto LAB_1800ae28d;
    }
    if ((*fnPtr_2 == '-') || (*fnPtr_2 == '_')) {
      fnPtr_2 = param_1 + 2;
    }
    if (fnPtr_2 == param_2) {
      fnPtr_2 = "invalid format";
      pU64_3 = local_98;
      goto LAB_1800ae28d;
    }
    param_1 = fnPtr_2 + 1;
    switch(*fnPtr_2) {
    case '%':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'M':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'g':
    case 'h':
    case 'j':
    case 'm':
    case 'n':
    case 'p':
    case 'r':
    case 't':
    case 'u':
    case 'w':
    case 'x':
    case 'y':
      break;
    default:
      fnPtr_2 = "invalid format";
      pU64_3 = local_110;
      goto LAB_1800ae28d;
    case 'E':
      if (param_1 == param_2) {
        fnPtr_2 = "invalid format";
        pU64_3 = local_b0;
        goto LAB_1800ae28d;
      }
      uVal_1 = (byte)fnPtr_2[1] - 0x43;
      if (0x37 < uVal_1) {
LAB_1800ae30c:
        fnPtr_2 = "invalid format";
        pU64_3 = local_c8;
        goto LAB_1800ae28d;
      }
      if ((0x60000100600001U >> ((uint64_t)uVal_1 & 0x3f) & 1) == 0) {
        if ((uint64_t)uVal_1 != 0x37) goto LAB_1800ae30c;
LAB_1800ae227:
        func_0x1800ae770(param_3,1);
      }
      goto LAB_1800ae218;
    case 'O':
      if (param_1 == param_2) {
        fnPtr_2 = "invalid format";
        pU64_3 = local_e0;
        goto LAB_1800ae28d;
      }
      uVal_1 = (byte)fnPtr_2[1] - 0x48;
      if (0x32 < uVal_1) {
LAB_1800ae31d:
        fnPtr_2 = "invalid format";
        pU64_3 = local_f8;
        goto LAB_1800ae28d;
      }
      if ((0x2a0203000e823U >> ((uint64_t)uVal_1 & 0x3f) & 1) == 0) {
        if ((uint64_t)uVal_1 != 0x32) goto LAB_1800ae31d;
        goto LAB_1800ae227;
      }
LAB_1800ae218:
      param_1 = fnPtr_2 + 2;
      break;
    case 'Q':
    case 'q':
      fnPtr_2 = "no format";
LAB_1800ae2d5:
      pU64_3 = local_50;
      goto LAB_1800ae28d;
    case 'Z':
    case 'z':
      if (*param_3 == '\0') {
        fnPtr_2 = "no timezone";
        goto LAB_1800ae2d5;
      }
    }
    while( true ) {
      if (param_1 == param_2) goto LAB_1800ae242;
      if (*param_1 == '%') break;
      if (*param_1 == '}') goto LAB_1800ae242;
      param_1 = param_1 + 1;
    }
  } while( true );
}

// func_0x1800ae330
byte ** func_0x1800ae330(byte **param_1,byte *param_2,byte *param_3,uint *param_4,int *param_5, int64_t param_6)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  byte *pU8_3;
  uint uVal_4;
  uint uVal_5;
  uint32_t uVal_6;
  byte **ptr2_Byte_7;
  int iVal_8;
  byte *pU8_9;
  byte *pU8_10;
  uint8_t auStack_68 [32];
  int64_t local_48;
  int *local_40;
  uint32_t *local_38;
  uint32_t local_2c;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  local_2c = 0;
  bFlag_1 = *param_2;
  if ((byte)(bFlag_1 - 0x30) < 10) {
    pU8_3 = param_2 + 1;
    uVal_5 = 0;
    do {
      uVal_4 = uVal_5;
      pU8_10 = pU8_3;
      uVal_5 = ((uint)bFlag_1 + uVal_4 * 10) - 0x30;
      pU8_9 = param_3;
      if (pU8_10 == param_3) break;
      bFlag_1 = *pU8_10;
      pU8_9 = pU8_10;
      pU8_3 = pU8_10 + 1;
    } while ((byte)(bFlag_1 - 0x30) < 10);
    if (((9 < (int64_t)pU8_9 - (int64_t)param_2) &&
        (((int64_t)pU8_9 - (int64_t)param_2 != 10 ||
         (0x7fffffff <
          (uint64_t)((int)(char)pU8_10[-1] - 0x30U & 0xfffffffe) + (uint64_t)uVal_4 * 10)))) ||
       (uVal_5 == 0xffffffff)) {
      func_0x18063f960("number is too big");
      uVal_5 = 0xffffffff;
    }
    *param_4 = uVal_5;
    param_2 = pU8_9;
    uVal_6 = 0;
  }
  else {
    if (bFlag_1 == 0x7b) {
      param_2 = param_2 + 1;
      uVal_6 = local_2c;
      if (param_2 != param_3) {
        if ((*param_2 == 0x7d) || (*param_2 == 0x3a)) {
          iVal_8 = *(int *)(param_6 + 0x10);
          if (iVal_8 < 0) {
            func_0x18063f960();
            iVal_8 = 0;
          }
          else {
            *(int *)(param_6 + 0x10) = iVal_8 + 1;
          }
          *param_5 = iVal_8;
          local_2c = 1;
          uVal_6 = local_2c;
        }
        else {
          local_48 = param_6;
          local_40 = param_5;
          local_38 = &local_2c;
          param_2 = (byte *)func_0x1800ae4f0(param_2,param_3,&local_48);
          uVal_6 = local_2c;
        }
      }
      local_2c = uVal_6;
      if ((param_2 != param_3) && (*param_2 == 0x7d)) {
        *param_1 = param_2 + 1;
        goto LAB_1800ae4b5;
      }
    }
    func_0x18063f960("invalid format string");
    uVal_6 = local_2c;
  }
  *param_1 = param_2;
LAB_1800ae4b5:
  *(uint32_t *)(param_1 + 1) = uVal_6;
  if (DAT_18083cf40 != (local_28 ^ (uint64_t)auStack_68)) {
    func_0x180673080(local_28 ^ (uint64_t)auStack_68);
    fnPtr_2 = (func_ptr_t )swi(3);
    ptr2_Byte_7 = (byte **)(*fnPtr_2)();
    return ptr2_Byte_7;
  }
  return param_1;
}

// func_0x1800ae4f0
byte * func_0x1800ae4f0(byte *param_1,byte *param_2,int64_t *param_3)
{
  byte **ptr2_Byte_1;
  uint uVal_2;
  byte *pU8_3;
  byte *pU8_4;
  byte *pU8_5;
  byte bFlag_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  
  bFlag_6 = *param_1;
  pU8_5 = param_2;
  if ((byte)(bFlag_6 - 0x30) < 10) {
    if (bFlag_6 == 0x30) {
      uVal_2 = 0;
      pU8_5 = param_1 + 1;
    }
    else {
      uVal_2 = 0;
      pU8_4 = param_1 + 1;
      do {
        pU8_3 = pU8_4;
        uVal_8 = (uint64_t)uVal_2;
        uVal_2 = ((uint)bFlag_6 + uVal_2 * 10) - 0x30;
        if (pU8_3 == param_2) {
          lVal_7 = (int64_t)param_2 - (int64_t)param_1;
          if (lVal_7 < 10) goto LAB_1800ae634;
          goto LAB_1800ae60c;
        }
        bFlag_6 = *pU8_3;
        pU8_4 = pU8_3 + 1;
      } while ((byte)(bFlag_6 - 0x30) < 10);
      lVal_7 = (int64_t)pU8_3 - (int64_t)param_1;
      pU8_5 = pU8_3;
      if (9 < lVal_7) {
LAB_1800ae60c:
        if ((lVal_7 != 10) ||
           (((uint64_t)((int)(char)pU8_3[-1] - 0x30U & 0xfffffffe) + uVal_8 * 10 &
            0xffffffff80000000) != 0)) {
          uVal_2 = 0x7fffffff;
        }
      }
    }
LAB_1800ae634:
    if ((pU8_5 == param_2) || ((*pU8_5 != 0x3a && (*pU8_5 != 0x7d)))) {
      func_0x18063f960("invalid format string");
    }
    else {
      *(uint *)param_3[1] = uVal_2;
      *(uint32_t *)param_3[2] = 1;
      if (*(int *)(*param_3 + 0x10) < 1) {
        *(uint32_t *)(*param_3 + 0x10) = 0xffffffff;
      }
      else {
        func_0x18063f960("cannot switch from automatic to manual argument indexing");
      }
    }
  }
  else if ((bFlag_6 == 0x5f) || ((byte)((bFlag_6 & 0xdf) + 0xbf) < 0x1a)) {
    pU8_4 = param_1 + 1;
    do {
      pU8_3 = pU8_4;
      pU8_5 = param_2;
      if (pU8_3 == param_2) break;
      bFlag_6 = *pU8_3;
      pU8_4 = pU8_3 + 1;
    } while ((((byte)(bFlag_6 - 0x30) < 10) || (bFlag_6 == 0x5f)) ||
            (pU8_5 = pU8_3, (byte)((bFlag_6 & 0xdf) + 0xbf) < 0x1a));
    ptr2_Byte_1 = (byte **)param_3[1];
    *ptr2_Byte_1 = param_1;
    ptr2_Byte_1[1] = pU8_5 + -(int64_t)param_1;
    *(uint32_t *)param_3[2] = 2;
    *(uint32_t *)(*param_3 + 0x10) = 0xffffffff;
  }
  else {
    func_0x18063f960("invalid format string");
    pU8_5 = param_1;
  }
  return pU8_5;
}

// func_0x1800ae690
uint64_t * func_0x1800ae690(uint64_t *param_1,uint64_t param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t *pU64_2;
  uint8_t auStack_48 [40];
  uint64_t local_20;
  uint8_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  *param_1 = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  local_18 = 1;
  local_20 = param_2;
  func_0x18067b3f0(&local_20,param_1 + 1);
  *param_1 = &PTR_FUN_1806b0aa8;
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_48)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_2 = (uint64_t *)(*fnPtr_1)();
  return pU64_2;
}

// func_0x1800ae770
void func_0x1800ae770(char *param_1)
{
  func_ptr_t fnPtr_1;
  uint8_t auStack_48 [32];
  uint8_t local_28 [24];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  if (*param_1 == '\0') {
    func_0x1800ae690(local_28,"no timezone");
    func_0x18067a120(local_28,&DAT_180768d70);
  }
  else if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_48)) {
    return;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800ae7e0
uint64_t func_0x1800ae7e0(uint *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4, uint64_t param_5)
{
  uint64_t *pU64_1;
  uint8_t *pU64_2;
  uint64_t local_2b8;
  uint64_t uStack_2b0;
  uint64_t local_2a8;
  func_ptr_t local_2a0;
  uint8_t local_298 [504];
  int64_t local_a0 [5];
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint8_t local_50 [8];
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = *param_1;
  uStack_64 = param_1[1];
  uStack_60 = param_1[2];
  uStack_5c = param_1[3];
  uStack_2b0 = 0;
  local_2a0 = func_0x1800b02d0;
  local_2b8 = local_298;
  local_2a8 = 500;
  func_0x1800aeaa0(local_68 >> 6 & 3,&uStack_60,param_1 + 4);
  if ((local_68 & 0x4000) == 0) {
    local_40 = '\0';
  }
  else {
    local_a0[0] = param_4[3];
    local_40 = local_a0[0] != 0;
    if ((bool)local_40) {
      func_0x18063f3e0(local_a0);
      pU64_2 = local_50;
      if (local_40 != '\0') goto LAB_1800ae8d0;
    }
  }
  pU64_2 = DAT_18083ec40;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083ec48) &&
     (func_0x180672ec0(&DAT_18083ec48), pU64_2 = DAT_18083ec40, DAT_18083ec48 == -1)) {
    DAT_18083ec40 = (uint8_t *)func_0x180673b70();
    _Init_thread_footer(&DAT_18083ec48);
    pU64_2 = DAT_18083ec40;
  }
LAB_1800ae8d0:
  func_0x1800aec80(local_a0,pU64_2,&local_2b8,param_3,param_5);
  func_0x1800aedf0(*(int64_t *)(param_1 + 8),*(int64_t *)(param_1 + 10) + *(int64_t *)(param_1 + 8),
                local_a0);
  local_78 = (uint32_t)local_2b8;
  uStack_74 = local_2b8._4_4_;
  uStack_70 = (uint32_t)uStack_2b0;
  uStack_6c = uStack_2b0._4_4_;
  func_0x1800affa0(param_2,*param_4,&local_78,&local_68);
  if (((local_40 == '\x01') && (local_48 != (int64_t *)0x0)) &&
     (pU64_1 = (uint64_t *)(**(func_ptr_t *)(*local_48 + 0x10))(), pU64_1 != (uint64_t *)0x0)) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  if (local_2b8 != local_298) {
    thunk_FUN_180695dd0();
  }
  return param_2;
}

// Unwind@1800ae9c0
void Unwind_1800ae9c0(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  if ((*(char *)(param_2 + 0x2a8) == '\x01') && (*(int64_t **)(param_2 + 0x2a0) != (int64_t *)0x0)
     ) {
    pU64_1 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(param_2 + 0x2a0) + 0x10))();
    if (pU64_1 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_1)(pU64_1,1);
    }
  }
  return;
}

// Unwind@1800aea20
void Unwind_1800aea20(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x30) != param_2 + 0x50) {
    thunk_FUN_180695dd0();
  }
  return;
}

// Unwind@1800aea60
void Unwind_1800aea60(void)
{
  func_0x180672f60(&DAT_18083ec48);
  return;
}

// func_0x1800aeaa0
void func_0x1800aeaa0(int param_1,uint32_t *param_2,void **param_3,int64_t param_4)
{
  uint uVal_1;
  int64_t lVal_2;
  void *_Buf2;
  void *pVoid_3;
  uint64_t uVal_4;
  int iVal_5;
  void *pVoid_6;
  int64_t lVal_7;
  char *fnPtr_8;
  uint *pU64_9;
  void *_Size;
  uint uVal_10;
  uint64_t uVal_11;
  uint64_t *pU64_12;
  
  if (param_1 == 0) {
    return;
  }
  if (param_1 == 1) {
    uVal_1 = *(uint *)param_3;
    uVal_11 = *(uint64_t *)(param_4 + 8);
    if ((int64_t)uVal_11 < 0) {
      if ((int)uVal_1 < (int)uVal_11) {
        pU64_12 = (uint64_t *)((int64_t)(int)uVal_1 * 0x18 + *(int64_t *)(param_4 + 0x10));
        uVal_10 = *(uint *)(pU64_12 + 2);
joined_r0x0001800aec33:
        if (uVal_10 != 0) goto LAB_1800aebcf;
      }
      goto LAB_1800aec35;
    }
    if ((0xe < uVal_1) ||
       (uVal_11 = uVal_11 >> ((char)uVal_1 * '\x04' & 0x3fU), uVal_10 = (uint)uVal_11 & 0xf,
       (uVal_11 & 0xf) == 0)) goto LAB_1800aec35;
    pU64_12 = (uint64_t *)((int64_t)(int)uVal_1 * 0x10 + *(int64_t *)(param_4 + 0x10));
LAB_1800aebcf:
    if (3 < uVal_10 - 1) goto LAB_1800aec41;
    uVal_4 = *pU64_12;
    switch(uVal_10) {
    case 1:
      if (-1 < (int)uVal_4) {
        uVal_11 = uVal_4 & 0xffffffff;
        goto LAB_1800aec54;
      }
      uVal_11 = 0xffffffffffffffff;
      goto LAB_1800aec6e;
    case 2:
      uVal_11 = uVal_4 & 0xffffffff;
      break;
    case 3:
      uVal_11 = 0xffffffffffffffff;
      if (-1 < (int64_t)uVal_4) {
        uVal_11 = uVal_4;
      }
      break;
    case 4:
      uVal_11 = uVal_4;
    }
    if (uVal_11 >> 0x1f == 0) goto LAB_1800aec54;
LAB_1800aec6e:
    fnPtr_8 = "width/precision is out of range";
  }
  else {
    uVal_11 = *(uint64_t *)(param_4 + 8);
    if ((uVal_11 >> 0x3e & 1) != 0) {
      lVal_2 = *(int64_t *)(param_4 + 0x10);
      lVal_7 = *(int64_t *)(lVal_2 + -0x10 + (uint64_t)(-1 < (int64_t)uVal_11) * 8);
      if (lVal_7 != 0) {
        _Buf2 = *param_3;
        pVoid_3 = param_3[1];
        pU64_9 = (uint *)(*(int64_t *)(lVal_2 + (uint64_t)(-1 < (int64_t)uVal_11) * 8 + -0x18) + 8)
        ;
        do {
          fnPtr_8 = *(char **)(pU64_9 + -2);
          pVoid_6 = (void *)strlen(fnPtr_8);
          _Size = pVoid_3;
          if (pVoid_6 < pVoid_3) {
            _Size = pVoid_6;
          }
          iVal_5 = memcmp(fnPtr_8,_Buf2,(size_t)_Size);
          if ((pVoid_6 == pVoid_3) && (iVal_5 == 0)) {
            uVal_10 = *pU64_9;
            lVal_7 = (int64_t)(int)uVal_10;
            if (-1 < lVal_7) {
              if ((int64_t)uVal_11 < 0) {
                if ((int)uVal_10 < (int)uVal_11) {
                  pU64_12 = (uint64_t *)(lVal_2 + lVal_7 * 0x18);
                  uVal_10 = *(uint *)(pU64_12 + 2);
                  goto joined_r0x0001800aec33;
                }
              }
              else if ((uVal_10 < 0xf) &&
                      (uVal_11 = uVal_11 >> ((char)uVal_10 * '\x04' & 0x3fU),
                      uVal_10 = (uint)uVal_11 & 0xf, (uVal_11 & 0xf) != 0)) {
                pU64_12 = (uint64_t *)(lVal_2 + lVal_7 * 0x10);
                goto LAB_1800aebcf;
              }
            }
            break;
          }
          pU64_9 = pU64_9 + 4;
          lVal_7 = lVal_7 + -1;
        } while (lVal_7 != 0);
      }
    }
LAB_1800aec35:
    func_0x18063f960("argument not found");
LAB_1800aec41:
    fnPtr_8 = "width/precision is not integer";
    uVal_11 = 0;
  }
  func_0x18063f960(fnPtr_8);
LAB_1800aec54:
  *param_2 = (int)uVal_11;
  return;
}

// func_0x1800aec80
int64_t * func_0x1800aec80(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5)
{
  char ch_1;
  int64_t lVal_2;
  int64_t lVal_3;
  int iVal_4;
  char *fnPtr_5;
  char *_Str1;
  bool bFlag_6;
  
  *param_1 = param_2;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083ec48) && (func_0x180672ec0(&DAT_18083ec48), DAT_18083ec48 == -1)) {
    DAT_18083ec40 = func_0x180673b70();
    _Init_thread_footer(&DAT_18083ec48);
  }
  lVal_2 = *(int64_t *)(param_2 + 8);
  lVal_3 = *(int64_t *)(DAT_18083ec40 + 8);
  if (lVal_2 == lVal_3) {
    bFlag_6 = true;
  }
  else {
    if (lVal_2 == 0) {
      fnPtr_5 = "";
      ch_1 = DAT_180761155;
    }
    else {
      fnPtr_5 = (char *)(lVal_2 + 0x30);
      if (*(char **)(lVal_2 + 0x28) != (char *)0x0) {
        fnPtr_5 = *(char **)(lVal_2 + 0x28);
      }
      ch_1 = *fnPtr_5;
    }
    if ((ch_1 == '*') && (fnPtr_5[1] == '\0')) {
      bFlag_6 = false;
    }
    else {
      fnPtr_5 = "";
      if (lVal_3 != 0) {
        fnPtr_5 = (char *)(lVal_3 + 0x30);
        if (*(char **)(lVal_3 + 0x28) != (char *)0x0) {
          fnPtr_5 = *(char **)(lVal_3 + 0x28);
        }
      }
      _Str1 = "";
      if (lVal_2 != 0) {
        _Str1 = (char *)(lVal_2 + 0x30);
        if (*(char **)(lVal_2 + 0x28) != (char *)0x0) {
          _Str1 = *(char **)(lVal_2 + 0x28);
        }
      }
      iVal_4 = strcmp(_Str1,fnPtr_5);
      bFlag_6 = iVal_4 == 0;
    }
  }
  *(bool *)(param_1 + 1) = bFlag_6;
  param_1[2] = param_3;
  param_1[3] = param_5;
  param_1[4] = param_4;
  return param_1;
}

// Unwind@1800aedc0
void Unwind_1800aedc0(void)
{
  func_0x180672f60(&DAT_18083ec48);
  return;
}

// func_0x1800aedf0
char * func_0x1800aedf0(char *param_1,char *param_2,int64_t param_3)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  char ch_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  bool bFlag_11;
  uint64_t *pU64_12;
  int64_t lVal_13;
  int64_t lVal_14;
  size_t sz_15;
  uint64_t uVal_16;
  int iVal_17;
  uint8_t **ptr2_U64_18;
  int64_t lVal_19;
  int iVal_20;
  uint8_t uVal_21;
  uint64_t uVal_22;
  uint8_t uVal_23;
  uint uVal_24;
  uint8_t *pU64_25;
  byte bFlag_26;
  uint64_t uVal_27;
  int64_t lVal_28;
  int64_t lVal_29;
  int64_t lVal_30;
  uint64_t uVal_31;
  int64_t lVal_32;
  uint64_t uVal_33;
  int64_t lVal_34;
  int64_t lVal_35;
  char *fnPtr_36;
  int64_t *pLong_37;
  char *fnPtr_38;
  uint8_t local_138 [40];
  uint8_t local_110 [24];
  uint8_t local_f8 [24];
  uint8_t local_e0 [24];
  uint8_t local_c8 [24];
  uint8_t local_b0 [24];
  uint8_t local_98 [24];
  uint8_t local_80 [24];
  uint8_t local_68 [24];
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)local_138;
  fnPtr_36 = param_1;
  if ((param_1 != param_2) && (*param_1 != '}')) {
    if (*param_1 != '%') goto LAB_1800aff39;
LAB_1800aee6f:
    if (*fnPtr_36 != '%') {
      if (*fnPtr_36 != '}') {
        fnPtr_36 = fnPtr_36 + 1;
        goto LAB_1800aee63;
      }
      goto LAB_1800afd3d;
    }
    if (param_1 != fnPtr_36) {
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      lVal_19 = pLong_37[1];
      do {
        uVal_22 = (int64_t)fnPtr_36 - (int64_t)param_1;
        uVal_31 = pLong_37[2];
        if (uVal_31 < uVal_22 + lVal_19) {
          (*(func_ptr_t )pLong_37[3])(pLong_37);
          lVal_19 = pLong_37[1];
          uVal_31 = pLong_37[2];
        }
        uVal_16 = uVal_31 - lVal_19;
        if (uVal_22 <= uVal_31 - lVal_19) {
          uVal_16 = uVal_22;
        }
        if (uVal_16 != 0) {
          lVal_29 = *pLong_37;
          lVal_28 = lVal_29 + lVal_19;
          if ((uVal_16 < 4) || ((uint64_t)(lVal_28 - (int64_t)param_1) < 0x20)) {
            uVal_31 = 0;
LAB_1800aef18:
            uVal_33 = uVal_31;
            for (uVal_22 = uVal_16 & 3; uVal_22 != 0; uVal_22 = uVal_22 - 1) {
              *(char *)(lVal_28 + uVal_33) = param_1[uVal_33];
              uVal_33 = uVal_33 + 1;
            }
            if (uVal_31 - uVal_16 < 0xfffffffffffffffd) {
              lVal_19 = lVal_19 + lVal_29;
              do {
                *(char *)(lVal_19 + uVal_33) = param_1[uVal_33];
                *(char *)(lVal_19 + 1 + uVal_33) = param_1[uVal_33 + 1];
                *(char *)(lVal_19 + 2 + uVal_33) = param_1[uVal_33 + 2];
                *(char *)(lVal_19 + 3 + uVal_33) = param_1[uVal_33 + 3];
                uVal_33 = uVal_33 + 4;
              } while (uVal_16 != uVal_33);
            }
          }
          else if (uVal_16 < 0x20) {
            uVal_22 = 0;
LAB_1800aeff1:
            uVal_31 = uVal_16 & 0xfffffffffffffffc;
            do {
              *(uint32_t *)(lVal_28 + uVal_22) = *(uint32_t *)(param_1 + uVal_22);
              uVal_22 = uVal_22 + 4;
            } while (uVal_31 != uVal_22);
            if (uVal_16 != uVal_31) goto LAB_1800aef18;
          }
          else {
            uVal_31 = uVal_16 & 0xffffffffffffffe0;
            uVal_22 = 0;
            do {
              pU64_2 = (uint32_t *)(param_1 + uVal_22);
              uVal_4 = pU64_2[1];
              uVal_5 = pU64_2[2];
              uVal_6 = pU64_2[3];
              pU64_1 = (uint32_t *)(param_1 + uVal_22 + 0x10);
              uVal_7 = *pU64_1;
              uVal_8 = pU64_1[1];
              uVal_9 = pU64_1[2];
              uVal_10 = pU64_1[3];
              pU64_1 = (uint32_t *)(lVal_29 + lVal_19 + uVal_22);
              *pU64_1 = *pU64_2;
              pU64_1[1] = uVal_4;
              pU64_1[2] = uVal_5;
              pU64_1[3] = uVal_6;
              pU64_1 = (uint32_t *)(lVal_29 + lVal_19 + 0x10 + uVal_22);
              *pU64_1 = uVal_7;
              pU64_1[1] = uVal_8;
              pU64_1[2] = uVal_9;
              pU64_1[3] = uVal_10;
              uVal_22 = uVal_22 + 0x20;
            } while (uVal_31 != uVal_22);
            if (uVal_16 != uVal_31) {
              uVal_22 = uVal_31;
              if ((uVal_16 & 0x1c) == 0) goto LAB_1800aef18;
              goto LAB_1800aeff1;
            }
          }
          lVal_19 = pLong_37[1];
        }
        lVal_19 = lVal_19 + uVal_16;
        pLong_37[1] = lVal_19;
        param_1 = param_1 + uVal_16;
      } while (param_1 != fnPtr_36);
      *(int64_t **)(param_3 + 0x10) = pLong_37;
    }
    uVal_21 = DAT_18083aa30;
    fnPtr_38 = fnPtr_36 + 1;
    if (fnPtr_38 == param_2) {
      pU64_25 = local_80;
      goto LAB_1800aff12;
    }
    uVal_23 = 0x30;
    if (*fnPtr_38 == '-') {
      uVal_27 = 1;
      bFlag_11 = true;
      uVal_23 = 0x30;
LAB_1800af06a:
      fnPtr_38 = fnPtr_36 + 2;
    }
    else {
      bFlag_11 = false;
      uVal_27 = 0;
      if (*fnPtr_38 == '_') {
        uVal_27 = 2;
        bFlag_11 = false;
        uVal_23 = 0x20;
        goto LAB_1800af06a;
      }
    }
    if (fnPtr_38 == param_2) {
      pU64_25 = local_98;
      goto LAB_1800aff12;
    }
    param_1 = fnPtr_38 + 1;
    fnPtr_36 = param_1;
    switch(*fnPtr_38) {
    case '%':
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      uVal_31 = pLong_37[1];
      uVal_22 = pLong_37[2];
      if (uVal_31 + 1 <= uVal_22) goto LAB_1800af7c3;
      do {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        uVal_31 = pLong_37[1];
        uVal_22 = pLong_37[2];
LAB_1800af7c3:
        do {
          uVal_16 = (uint64_t)(uVal_22 != uVal_31);
          if (uVal_22 != uVal_31) {
            *(char *)(*pLong_37 + uVal_31) = *fnPtr_38;
            pLong_37[1] = pLong_37[1] + uVal_16;
            *(int64_t **)(param_3 + 0x10) = pLong_37;
            goto LAB_1800aee63;
          }
          uVal_31 = uVal_31 + uVal_16;
          pLong_37[1] = uVal_31;
          uVal_22 = pLong_37[2];
        } while (uVal_31 + 1 <= uVal_22);
      } while( true );
    default:
      pU64_25 = local_110;
      goto LAB_1800aff12;
    case 'A':
      if (*(char *)(param_3 + 8) != '\x01') {
        uVal_27 = 0x41;
LAB_1800aee4e:
        func_0x1800b19e0(param_3,uVal_27,0);
        break;
      }
      uVal_31 = (uint64_t)*(uint *)(*(int64_t *)(param_3 + 0x20) + 0x18);
      if (uVal_31 < 7) {
        ptr2_U64_18 = &PTR_s_Sunday_1806b0c70;
        goto LAB_1800af77c;
      }
LAB_1800afb80:
      fnPtr_38 = "?";
      goto LAB_1800afb87;
    case 'B':
      if (*(char *)(param_3 + 8) != '\x01') {
        uVal_27 = 0x42;
        goto LAB_1800aee4e;
      }
      uVal_31 = (uint64_t)*(uint *)(*(int64_t *)(param_3 + 0x20) + 0x10);
      if (0xb < uVal_31) goto LAB_1800afb80;
      ptr2_U64_18 = &PTR_s_January_1806b0d10;
      goto LAB_1800af77c;
    case 'C':
      func_0x1800b04e0(param_3);
      break;
    case 'D':
      lVal_19 = *(int64_t *)(param_3 + 0x20);
      lVal_29 = (int64_t)*(int *)(lVal_19 + 0x14);
      lVal_28 = SUB168(SEXT816(lVal_29 + 0x76c) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_29 + 0x76c;
      lVal_29 = ((lVal_28 >> 6) - (lVal_28 >> 0x3f)) * -100 + lVal_29 + 0x76c;
      lVal_28 = -lVal_29;
      if (0 < lVal_29) {
        lVal_28 = lVal_29;
      }
      uVal_31 = lVal_28 << 0x30 |
               (uint64_t)(*(int *)(lVal_19 + 0xc) << 0x18 | *(int *)(lVal_19 + 0x10) + 1U);
      uVal_31 = uVal_31 + (uVal_31 * 0xcd >> 0xb & 0xf00000f00000f) * 6;
      local_50 = (uVal_31 & 0xf00000f00000f) << 8 | uVal_31 >> 4 & 0xf00000f00000f |
                 0x30302f30302f3030;
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      lVal_19 = pLong_37[1];
      lVal_28 = 0;
      do {
        uVal_22 = 8 - lVal_28;
        uVal_31 = pLong_37[2];
        if (uVal_31 < uVal_22 + lVal_19) {
          (*(func_ptr_t )pLong_37[3])(pLong_37);
          lVal_19 = pLong_37[1];
          uVal_31 = pLong_37[2];
        }
        uVal_16 = uVal_31 - lVal_19;
        if (uVal_22 <= uVal_31 - lVal_19) {
          uVal_16 = uVal_22;
        }
        if (uVal_16 != 0) {
          func_0x1806aa960(lVal_19 + *pLong_37,(int64_t)&local_50 + lVal_28,uVal_16);
          lVal_19 = pLong_37[1];
        }
        lVal_19 = lVal_19 + uVal_16;
        pLong_37[1] = lVal_19;
        lVal_28 = lVal_28 + uVal_16;
      } while (lVal_28 != 8);
      goto LAB_1800af90e;
    case 'E':
      if (param_1 == param_2) {
        pU64_25 = local_b0;
        goto LAB_1800aff12;
      }
      param_1 = fnPtr_38 + 2;
      fnPtr_36 = param_1;
      switch(fnPtr_38[1]) {
      case 'C':
        func_0x1800b04e0(param_3);
        break;
      default:
        pU64_25 = local_c8;
        goto LAB_1800aff12;
      case 'X':
        func_0x1800b1350(param_3);
        break;
      case 'Y':
        func_0x1800b03c0(param_3);
        break;
      case 'c':
        func_0x1800b0f10(param_3);
        break;
      case 'x':
        func_0x1800b1190(param_3);
        break;
      case 'y':
        func_0x1800b18f0(param_3);
        break;
      case 'z':
switchD_1800af300_caseD_7a:
        param_1 = fnPtr_38 + 2;
        func_0x1800b3e60(param_3,0,1);
        fnPtr_36 = param_1;
      }
      break;
    case 'F':
      func_0x1800b13f0(param_3);
      break;
    case 'G':
      lVal_19 = *(int64_t *)(param_3 + 0x20);
      lVal_28 = (int64_t)*(int *)(lVal_19 + 0x14);
      iVal_20 = 7;
      if (*(int *)(lVal_19 + 0x18) != 0) {
        iVal_20 = *(int *)(lVal_19 + 0x18);
      }
      uVal_24 = (*(int *)(lVal_19 + 0x1c) - iVal_20) + 0xb;
      if ((int)uVal_24 < 7) {
        lVal_19 = lVal_28 + 0x76b;
      }
      else {
        lVal_29 = lVal_28 + 0x76c;
        lVal_13 = lVal_28 + 0x76f;
        if (-1 < lVal_29) {
          lVal_13 = lVal_29;
        }
        lVal_19 = lVal_28 + 0x76b;
        lVal_32 = (SUB168(SEXT816(lVal_29) * SEXT816(0x5c28f5c28f5c28f5),8) - lVal_28) + -0x76c;
        lVal_34 = SUB168(SEXT816(lVal_29) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_28 + 0x76c;
        lVal_14 = lVal_28 + 0x76e;
        if (-1 < lVal_19) {
          lVal_14 = lVal_19;
        }
        lVal_35 = (SUB168(SEXT816(lVal_19) * SEXT816(0x5c28f5c28f5c28f5),8) - lVal_28) + -0x76b;
        lVal_30 = SUB168(SEXT816(lVal_19) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_28 + 0x76b;
        lVal_19 = lVal_28 + 0x76d;
        if (uVal_24 / 7 <=
            (((((lVal_30 >> 8) - (lVal_30 >> 0x3f)) +
              ((lVal_35 >> 6) - (lVal_35 >> 0x3f)) + (lVal_14 >> 2) + lVal_28 + 0x76b) % 7 == 3 ||
             (((lVal_34 >> 8) - (lVal_34 >> 0x3f)) +
             ((lVal_32 >> 6) - (lVal_32 >> 0x3f)) + (lVal_13 >> 2) + lVal_28 + 0x76c) % 7 == 4) | 0x34))
        {
          lVal_19 = lVal_29;
        }
      }
      uVal_27 = 0;
      goto LAB_1800afb76;
    case 'H':
      iVal_20 = *(int *)(*(int64_t *)(param_3 + 0x20) + 8);
      goto LAB_1800af873;
    case 'I':
      iVal_20 = *(int *)(*(int64_t *)(param_3 + 0x20) + 8);
      iVal_17 = iVal_20 + -0xc;
      if (iVal_20 < 0xc) {
        iVal_17 = iVal_20;
      }
      iVal_20 = 0xc;
      if (iVal_17 != 0) {
        iVal_20 = iVal_17;
      }
      goto LAB_1800af873;
    case 'M':
      iVal_20 = *(int *)(*(int64_t *)(param_3 + 0x20) + 4);
      goto LAB_1800af873;
    case 'O':
      if (param_1 == param_2) {
        pU64_25 = local_e0;
        goto LAB_1800aff12;
      }
      param_1 = fnPtr_38 + 2;
      fnPtr_36 = param_1;
      switch(fnPtr_38[1]) {
      case 'H':
        func_0x1800b0e30(param_3);
        break;
      case 'I':
        func_0x1800b0e50(param_3);
        break;
      default:
        pU64_25 = local_f8;
        goto LAB_1800aff12;
      case 'M':
        func_0x1800b0e90(param_3);
        break;
      case 'S':
        func_0x1800b0eb0(param_3);
        break;
      case 'U':
        func_0x1800b0a40(param_3);
        break;
      case 'V':
        func_0x1800b0af0(param_3);
        break;
      case 'W':
        func_0x1800b0a90(param_3);
        break;
      case 'd':
        goto LAB_1800afc9a;
      case 'e':
        uVal_27 = 2;
LAB_1800afc9a:
        func_0x1800b0e10(param_3,1,uVal_27);
        break;
      case 'm':
        func_0x1800b0a10(param_3);
        break;
      case 'u':
        func_0x1800b0980(param_3);
        break;
      case 'w':
        func_0x1800b0900(param_3);
        break;
      case 'y':
        func_0x1800b03f0(param_3);
        break;
      case 'z':
        goto switchD_1800af300_caseD_7a;
      }
      break;
    case 'Q':
    case 'q':
      break;
    case 'R':
      func_0x1800b17b0(param_3);
      break;
    case 'S':
      func_0x1800b3a30(param_3);
      pU64_12 = *(uint64_t **)(param_3 + 0x18);
      if (pU64_12 == (uint64_t *)0x0) break;
      goto LAB_1800af686;
    case 'T':
      goto switchD_1800af091_caseD_54;
    case 'U':
      iVal_20 = *(int *)(*(int64_t *)(param_3 + 0x20) + 0x1c) -
               *(int *)(*(int64_t *)(param_3 + 0x20) + 0x18);
      iVal_20 = (int)((uint64_t)((int64_t)(iVal_20 + 7) * -0x6db6db6d) >> 0x20) + iVal_20;
      goto LAB_1800af488;
    case 'V':
      func_0x1800b0af0(param_3);
      break;
    case 'W':
      iVal_20 = *(int *)(*(int64_t *)(param_3 + 0x20) + 0x18);
      iVal_17 = -6;
      if (iVal_20 != 0) {
        iVal_17 = 1 - iVal_20;
      }
      iVal_20 = *(int *)(*(int64_t *)(param_3 + 0x20) + 0x1c);
      iVal_20 = (int)((uint64_t)((int64_t)(iVal_17 + iVal_20 + 7) * -0x6db6db6d) >> 0x20) +
               iVal_20 + iVal_17;
LAB_1800af488:
      iVal_20 = (iVal_20 + 7 >> 2) - (iVal_20 + 7 >> 0x1f);
      goto LAB_1800af873;
    case 'X':
      if (*(char *)(param_3 + 8) != '\x01') {
        uVal_27 = 0x58;
        goto LAB_1800aee4e;
      }
      goto switchD_1800af091_caseD_54;
    case 'Y':
      lVal_19 = (int64_t)*(int *)(*(int64_t *)(param_3 + 0x20) + 0x14) + 0x76c;
LAB_1800afb76:
      func_0x1800b1ad0(param_3,lVal_19,uVal_27);
      break;
    case 'Z':
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      lVal_19 = pLong_37[1];
      uVal_31 = lVal_19 + 1;
      if ((uint64_t)pLong_37[2] < uVal_31) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
      }
      pLong_37[1] = uVal_31;
      *(uint8_t *)(*pLong_37 + lVal_19) = uVal_21;
      uVal_21 = DAT_18083aa31;
      lVal_19 = pLong_37[1];
      uVal_31 = lVal_19 + 1;
      if ((uint64_t)pLong_37[2] < uVal_31) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
      }
      pLong_37[1] = uVal_31;
      *(uint8_t *)(*pLong_37 + lVal_19) = uVal_21;
      uVal_21 = DAT_18083aa32;
      lVal_19 = pLong_37[1];
      uVal_31 = lVal_19 + 1;
      if ((uint64_t)pLong_37[2] < uVal_31) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
      }
      pLong_37[1] = uVal_31;
      *(uint8_t *)(*pLong_37 + lVal_19) = uVal_21;
LAB_1800af90e:
      *(int64_t **)(param_3 + 0x10) = pLong_37;
      break;
    case 'a':
      if (*(char *)(param_3 + 8) != '\x01') {
        uVal_27 = 0x61;
        goto LAB_1800aee4e;
      }
      uVal_31 = (uint64_t)*(uint *)(*(int64_t *)(param_3 + 0x20) + 0x18);
      if (6 < uVal_31) {
LAB_1800af92c:
        fnPtr_38 = "???";
        goto LAB_1800afb87;
      }
      ptr2_U64_18 = &PTR_DAT_1806b0c30;
      goto LAB_1800af77c;
    case 'b':
    case 'h':
      if (*(char *)(param_3 + 8) != '\x01') {
        uVal_27 = 0x62;
        goto LAB_1800aee4e;
      }
      uVal_31 = (uint64_t)*(uint *)(*(int64_t *)(param_3 + 0x20) + 0x10);
      if (0xb < uVal_31) goto LAB_1800af92c;
      ptr2_U64_18 = &PTR_DAT_1806b0cb0;
LAB_1800af77c:
      fnPtr_38 = ptr2_U64_18[uVal_31];
LAB_1800afb87:
      sz_15 = strlen(fnPtr_38);
      func_0x1800b1e50(&local_50,fnPtr_38,fnPtr_38 + sz_15);
      *(uint64_t *)(param_3 + 0x10) = local_50;
      break;
    case 'c':
      func_0x1800b0f10(param_3);
      break;
    case 'd':
      iVal_20 = *(int *)(*(int64_t *)(param_3 + 0x20) + 0xc);
      goto LAB_1800af873;
    case 'e':
      uVal_27 = 2;
      iVal_20 = *(int *)(*(int64_t *)(param_3 + 0x20) + 0xc);
      goto LAB_1800af873;
    case 'g':
      func_0x1800b06b0(param_3);
      break;
    case 'j':
      iVal_17 = *(int *)(*(int64_t *)(param_3 + 0x20) + 0x1c);
      iVal_20 = iVal_17 + 1;
      if (iVal_17 + 100U < 199) {
        pLong_37 = *(int64_t **)(param_3 + 0x10);
        if (!bFlag_11) {
          lVal_19 = pLong_37[1];
          uVal_31 = lVal_19 + 1;
          if ((uint64_t)pLong_37[2] < uVal_31) {
            (*(func_ptr_t )pLong_37[3])(pLong_37,uVal_31);
            lVal_19 = pLong_37[1];
            uVal_31 = lVal_19 + 1;
          }
          pLong_37[1] = uVal_31;
          *(uint8_t *)(*pLong_37 + lVal_19) = uVal_23;
        }
        *(int64_t **)(param_3 + 0x10) = pLong_37;
      }
      else {
        pLong_37 = *(int64_t **)(param_3 + 0x10);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
        if ((uint64_t)pLong_37[2] < uVal_31) {
          (*(func_ptr_t )pLong_37[3])(pLong_37,uVal_31);
          lVal_19 = pLong_37[1];
          uVal_31 = lVal_19 + 1;
        }
        pLong_37[1] = uVal_31;
        *(byte *)(*pLong_37 + lVal_19) = (byte)((uint)(iVal_20 / 100) % 10) | 0x30;
      }
      iVal_20 = iVal_20 % 100;
      goto LAB_1800af873;
    case 'm':
      iVal_20 = *(int *)(*(int64_t *)(param_3 + 0x20) + 0x10) + 1;
LAB_1800af873:
      func_0x1800b3a30(param_3,iVal_20,uVal_27);
      break;
    case 'n':
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      uVal_31 = pLong_37[1];
      uVal_22 = pLong_37[2];
      if (uVal_31 + 1 <= uVal_22) goto LAB_1800af833;
LAB_1800af824:
      (*(func_ptr_t )pLong_37[3])(pLong_37);
      uVal_31 = pLong_37[1];
      uVal_22 = pLong_37[2];
LAB_1800af833:
      uVal_16 = (uint64_t)(uVal_22 != uVal_31);
      if (uVal_22 == uVal_31) goto LAB_1800af810;
      *(uint8_t *)(*pLong_37 + uVal_31) = 10;
LAB_1800af844:
      pLong_37[1] = pLong_37[1] + uVal_16;
      goto LAB_1800af90e;
    case 'p':
      if (*(char *)(param_3 + 8) != '\x01') {
        uVal_27 = 0x70;
        goto LAB_1800aee4e;
      }
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      uVal_21 = 0x50;
      if (*(int *)(*(int64_t *)(param_3 + 0x20) + 8) < 0xc) {
        uVal_21 = 0x41;
      }
      lVal_19 = pLong_37[1];
      uVal_31 = lVal_19 + 1;
      if ((uint64_t)pLong_37[2] < uVal_31) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
      }
      pLong_37[1] = uVal_31;
      *(uint8_t *)(*pLong_37 + lVal_19) = uVal_21;
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      lVal_19 = pLong_37[1];
      uVal_31 = lVal_19 + 1;
      if ((uint64_t)pLong_37[2] < uVal_31) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
      }
      pLong_37[1] = uVal_31;
      *(uint8_t *)(*pLong_37 + lVal_19) = 0x4d;
      break;
    case 'r':
      func_0x1800b1570(param_3);
      break;
    case 't':
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      uVal_31 = pLong_37[1];
      uVal_22 = pLong_37[2];
      if (uVal_31 + 1 <= uVal_22) goto LAB_1800af1f3;
      do {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        uVal_31 = pLong_37[1];
        uVal_22 = pLong_37[2];
LAB_1800af1f3:
        do {
          uVal_16 = (uint64_t)(uVal_22 != uVal_31);
          if (uVal_22 != uVal_31) {
            *(uint8_t *)(*pLong_37 + uVal_31) = 9;
            goto LAB_1800af844;
          }
          uVal_31 = uVal_31 + uVal_16;
          pLong_37[1] = uVal_31;
          uVal_22 = pLong_37[2];
        } while (uVal_31 + 1 <= uVal_22);
      } while( true );
    case 'u':
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      uVal_24 = *(uint *)(*(int64_t *)(param_3 + 0x20) + 0x18);
      lVal_19 = pLong_37[1];
      uVal_31 = lVal_19 + 1;
      if ((uint64_t)pLong_37[2] < uVal_31) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
      }
      bFlag_26 = 0x37;
      if (uVal_24 != 0) {
        bFlag_26 = (char)uVal_24 + (char)(uVal_24 / 10) * -10 | 0x30;
      }
      pLong_37[1] = uVal_31;
      *(byte *)(*pLong_37 + lVal_19) = bFlag_26;
      break;
    case 'w':
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      uVal_24 = *(uint *)(*(int64_t *)(param_3 + 0x20) + 0x18);
      lVal_19 = pLong_37[1];
      uVal_31 = lVal_19 + 1;
      if ((uint64_t)pLong_37[2] < uVal_31) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
      }
      pLong_37[1] = uVal_31;
      *(byte *)(*pLong_37 + lVal_19) = (byte)(uVal_24 % 10) | 0x30;
      break;
    case 'x':
      func_0x1800b1190(param_3);
      break;
    case 'y':
      lVal_28 = (int64_t)*(int *)(*(int64_t *)(param_3 + 0x20) + 0x14);
      lVal_19 = lVal_28 + 0x76c;
      lVal_28 = SUB168(SEXT816(lVal_19) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_28 + 0x76c;
      lVal_19 = lVal_19 + ((lVal_28 >> 6) - (lVal_28 >> 0x3f)) * -100;
      lVal_28 = -lVal_19;
      if (0 < lVal_19) {
        lVal_28 = lVal_19;
      }
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      uVal_24 = (int)lVal_28 * 2;
      uVal_21 = (&DAT_1806afb50)[uVal_24];
      lVal_19 = pLong_37[1];
      uVal_31 = lVal_19 + 1;
      if ((uint64_t)pLong_37[2] < uVal_31) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
      }
      pLong_37[1] = uVal_31;
      *(uint8_t *)(*pLong_37 + lVal_19) = uVal_21;
      ch_3 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              [uVal_24];
      pLong_37 = *(int64_t **)(param_3 + 0x10);
      lVal_19 = pLong_37[1];
      uVal_31 = lVal_19 + 1;
      if ((uint64_t)pLong_37[2] < uVal_31) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = lVal_19 + 1;
      }
      pLong_37[1] = uVal_31;
      *(char *)(*pLong_37 + lVal_19) = ch_3;
      break;
    case 'z':
      func_0x1800b3e60(param_3,0,0);
    }
    goto LAB_1800aee63;
  }
  goto LAB_1800afec4;
LAB_1800af810:
  uVal_31 = uVal_31 + uVal_16;
  pLong_37[1] = uVal_31;
  uVal_22 = pLong_37[2];
  if (uVal_22 < uVal_31 + 1) goto LAB_1800af824;
  goto LAB_1800af833;
switchD_1800af091_caseD_54:
  func_0x1800b17b0(param_3);
  pLong_37 = *(int64_t **)(param_3 + 0x10);
  lVal_19 = pLong_37[1];
  uVal_31 = lVal_19 + 1;
  if ((uint64_t)pLong_37[2] < uVal_31) {
    (*(func_ptr_t )pLong_37[3])(pLong_37);
    lVal_19 = pLong_37[1];
    uVal_31 = lVal_19 + 1;
  }
  pLong_37[1] = uVal_31;
  *(uint8_t *)(*pLong_37 + lVal_19) = 0x3a;
  func_0x1800b3a30(param_3,**(uint32_t **)(param_3 + 0x20),0);
  pU64_12 = *(uint64_t **)(param_3 + 0x18);
  if (pU64_12 != (uint64_t *)0x0) {
LAB_1800af686:
    func_0x1800b3b40(param_3 + 0x10,*pU64_12,0xffffffff);
  }
LAB_1800aee63:
  if (fnPtr_36 == param_2) goto LAB_1800afd3d;
  goto LAB_1800aee6f;
LAB_1800afd3d:
  if (param_1 != fnPtr_36) {
    pLong_37 = *(int64_t **)(param_3 + 0x10);
    lVal_19 = pLong_37[1];
    do {
      uVal_22 = (int64_t)fnPtr_36 - (int64_t)param_1;
      uVal_31 = pLong_37[2];
      if (uVal_31 < uVal_22 + lVal_19) {
        (*(func_ptr_t )pLong_37[3])(pLong_37);
        lVal_19 = pLong_37[1];
        uVal_31 = pLong_37[2];
      }
      uVal_16 = uVal_31 - lVal_19;
      if (uVal_22 <= uVal_31 - lVal_19) {
        uVal_16 = uVal_22;
      }
      if (uVal_16 != 0) {
        lVal_29 = *pLong_37;
        lVal_28 = lVal_29 + lVal_19;
        if ((uVal_16 < 4) || ((uint64_t)(lVal_28 - (int64_t)param_1) < 0x20)) {
          uVal_31 = 0;
LAB_1800afdb7:
          uVal_33 = uVal_31;
          for (uVal_22 = uVal_16 & 3; uVal_22 != 0; uVal_22 = uVal_22 - 1) {
            *(char *)(lVal_28 + uVal_33) = param_1[uVal_33];
            uVal_33 = uVal_33 + 1;
          }
          if (uVal_31 - uVal_16 < 0xfffffffffffffffd) {
            lVal_19 = lVal_19 + lVal_29;
            do {
              *(char *)(lVal_19 + uVal_33) = param_1[uVal_33];
              *(char *)(lVal_19 + 1 + uVal_33) = param_1[uVal_33 + 1];
              *(char *)(lVal_19 + 2 + uVal_33) = param_1[uVal_33 + 2];
              *(char *)(lVal_19 + 3 + uVal_33) = param_1[uVal_33 + 3];
              uVal_33 = uVal_33 + 4;
            } while (uVal_16 != uVal_33);
          }
        }
        else if (uVal_16 < 0x20) {
          uVal_22 = 0;
LAB_1800afe91:
          uVal_31 = uVal_16 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_28 + uVal_22) = *(uint32_t *)(param_1 + uVal_22);
            uVal_22 = uVal_22 + 4;
          } while (uVal_31 != uVal_22);
          if (uVal_16 != uVal_31) goto LAB_1800afdb7;
        }
        else {
          uVal_31 = uVal_16 & 0xffffffffffffffe0;
          uVal_22 = 0;
          do {
            pU64_2 = (uint32_t *)(param_1 + uVal_22);
            uVal_4 = pU64_2[1];
            uVal_5 = pU64_2[2];
            uVal_6 = pU64_2[3];
            pU64_1 = (uint32_t *)(param_1 + uVal_22 + 0x10);
            uVal_7 = *pU64_1;
            uVal_8 = pU64_1[1];
            uVal_9 = pU64_1[2];
            uVal_10 = pU64_1[3];
            pU64_1 = (uint32_t *)(lVal_29 + lVal_19 + uVal_22);
            *pU64_1 = *pU64_2;
            pU64_1[1] = uVal_4;
            pU64_1[2] = uVal_5;
            pU64_1[3] = uVal_6;
            pU64_1 = (uint32_t *)(lVal_29 + lVal_19 + 0x10 + uVal_22);
            *pU64_1 = uVal_7;
            pU64_1[1] = uVal_8;
            pU64_1[2] = uVal_9;
            pU64_1[3] = uVal_10;
            uVal_22 = uVal_22 + 0x20;
          } while (uVal_31 != uVal_22);
          if (uVal_16 != uVal_31) {
            uVal_22 = uVal_31;
            if ((uVal_16 & 0x1c) == 0) goto LAB_1800afdb7;
            goto LAB_1800afe91;
          }
        }
        lVal_19 = pLong_37[1];
      }
      lVal_19 = lVal_19 + uVal_16;
      pLong_37[1] = lVal_19;
      param_1 = param_1 + uVal_16;
    } while (param_1 != fnPtr_36);
    *(int64_t **)(param_3 + 0x10) = pLong_37;
  }
LAB_1800afec4:
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)local_138)) {
    return fnPtr_36;
  }
  do {
    func_0x180673080(local_48 ^ (uint64_t)local_138);
LAB_1800aff39:
    pU64_25 = local_68;
LAB_1800aff12:
    func_0x1800ae690(pU64_25,"invalid format");
    func_0x18067a120(pU64_25,&DAT_180768d70);
  } while( true );
}

// func_0x1800affa0
int64_t ** func_0x1800affa0(int64_t **param_1,int64_t *param_2,int64_t *param_3,uint *param_4)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  uint uVal_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint64_t uVal_14;
  int64_t **ptr2_Long_15;
  int64_t lVal_16;
  int64_t lVal_17;
  uint uVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  int64_t lVal_21;
  uint64_t uVal_22;
  uint8_t auStack_f8 [32];
  uint64_t local_d8;
  uint8_t *local_d0;
  uint8_t local_c8 [8];
  uint64_t local_c0;
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint8_t *local_98;
  uint64_t *local_90;
  int64_t *local_88;
  uint64_t *local_80;
  int64_t *local_78;
  uint64_t local_70;
  uint64_t local_68;
  int64_t local_60;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint8_t local_39;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_f8;
  uVal_18 = *param_4 & 7;
  local_39 = uVal_18 == 1;
  uVal_4 = param_4[3];
  if (((int64_t)(int)uVal_4 < 0) && (param_4[2] == 0)) {
    if ((uint64_t)param_2[2] < (uint64_t)(param_2[1] + param_3[1])) {
      (*(func_ptr_t )param_2[3])(param_2);
    }
    if (uVal_18 == 1) {
      local_58 = *(uint32_t *)param_3;
      uStack_54 = *(uint32_t *)((int64_t)param_3 + 4);
      uStack_50 = *(uint32_t *)(param_3 + 1);
      uStack_4c = *(uint32_t *)((int64_t)param_3 + 0xc);
      func_0x1800b4040(param_1,param_2,&local_58);
    }
    else {
      if (param_3[1] != 0) {
        lVal_17 = *param_3;
        lVal_21 = param_3[1] + lVal_17;
        lVal_16 = param_2[1];
        do {
          uVal_22 = lVal_21 - lVal_17;
          uVal_19 = param_2[2];
          if (uVal_19 < uVal_22 + lVal_16) {
            (*(func_ptr_t )param_2[3])(param_2);
            lVal_16 = param_2[1];
            uVal_19 = param_2[2];
          }
          uVal_14 = uVal_19 - lVal_16;
          if (uVal_22 <= uVal_19 - lVal_16) {
            uVal_14 = uVal_22;
          }
          if (uVal_14 != 0) {
            lVal_5 = *param_2;
            lVal_1 = lVal_5 + lVal_16;
            if ((uVal_14 < 4) || ((uint64_t)(lVal_1 - lVal_17) < 0x20)) {
              uVal_19 = 0;
LAB_1800b0187:
              uVal_20 = uVal_19;
              for (uVal_22 = uVal_14 & 3; uVal_22 != 0; uVal_22 = uVal_22 - 1) {
                *(uint8_t *)(lVal_1 + uVal_20) = *(uint8_t *)(lVal_17 + uVal_20);
                uVal_20 = uVal_20 + 1;
              }
              if (uVal_19 - uVal_14 < 0xfffffffffffffffd) {
                lVal_16 = lVal_16 + lVal_5;
                do {
                  *(uint8_t *)(lVal_16 + uVal_20) = *(uint8_t *)(lVal_17 + uVal_20);
                  *(uint8_t *)(lVal_16 + 1 + uVal_20) = *(uint8_t *)(lVal_17 + 1 + uVal_20);
                  *(uint8_t *)(lVal_16 + 2 + uVal_20) = *(uint8_t *)(lVal_17 + 2 + uVal_20);
                  *(uint8_t *)(lVal_16 + 3 + uVal_20) = *(uint8_t *)(lVal_17 + 3 + uVal_20);
                  uVal_20 = uVal_20 + 4;
                } while (uVal_14 != uVal_20);
              }
            }
            else if (uVal_14 < 0x20) {
              uVal_22 = 0;
LAB_1800b0260:
              uVal_19 = uVal_14 & 0xfffffffffffffffc;
              do {
                *(uint32_t *)(lVal_1 + uVal_22) = *(uint32_t *)(lVal_17 + uVal_22);
                uVal_22 = uVal_22 + 4;
              } while (uVal_19 != uVal_22);
              if (uVal_14 != uVal_19) goto LAB_1800b0187;
            }
            else {
              uVal_19 = uVal_14 & 0xffffffffffffffe0;
              uVal_22 = 0;
              do {
                pU64_2 = (uint32_t *)(lVal_17 + uVal_22);
                uVal_7 = pU64_2[1];
                uVal_8 = pU64_2[2];
                uVal_9 = pU64_2[3];
                pU64_3 = (uint32_t *)(lVal_17 + 0x10 + uVal_22);
                uVal_10 = *pU64_3;
                uVal_11 = pU64_3[1];
                uVal_12 = pU64_3[2];
                uVal_13 = pU64_3[3];
                pU64_3 = (uint32_t *)(lVal_5 + lVal_16 + uVal_22);
                *pU64_3 = *pU64_2;
                pU64_3[1] = uVal_7;
                pU64_3[2] = uVal_8;
                pU64_3[3] = uVal_9;
                pU64_2 = (uint32_t *)(lVal_5 + lVal_16 + 0x10 + uVal_22);
                *pU64_2 = uVal_10;
                pU64_2[1] = uVal_11;
                pU64_2[2] = uVal_12;
                pU64_2[3] = uVal_13;
                uVal_22 = uVal_22 + 0x20;
              } while (uVal_19 != uVal_22);
              if (uVal_14 != uVal_19) {
                uVal_22 = uVal_19;
                if ((uVal_14 & 0x1c) == 0) goto LAB_1800b0187;
                goto LAB_1800b0260;
              }
            }
            lVal_16 = param_2[1];
          }
          lVal_16 = lVal_16 + uVal_14;
          param_2[1] = lVal_16;
          lVal_17 = lVal_17 + uVal_14;
        } while (lVal_17 != lVal_21);
      }
      *param_1 = param_2;
    }
  }
  else {
    local_60 = -1;
    if (-1 < (int)uVal_4) {
      local_60 = (int64_t)(int)uVal_4;
    }
    local_70 = (uint64_t)(uVal_4 != 0 && uVal_18 == 1);
    local_98 = &local_39;
    local_90 = &local_68;
    local_88 = &local_60;
    local_80 = &local_70;
    local_a8 = *(uint32_t *)param_3;
    uStack_a4 = *(uint32_t *)((int64_t)param_3 + 4);
    uStack_a0 = *(uint32_t *)(param_3 + 1);
    uStack_9c = *(uint32_t *)((int64_t)param_3 + 0xc);
    local_78 = param_3;
    local_68 = local_70;
    func_0x1800b47a0(&local_a8,&local_98);
    local_c8[0] = local_39;
    local_c0 = local_70;
    local_b8 = *(uint32_t *)param_3;
    uStack_b4 = *(uint32_t *)((int64_t)param_3 + 4);
    uStack_b0 = *(uint32_t *)(param_3 + 1);
    uStack_ac = *(uint32_t *)((int64_t)param_3 + 0xc);
    local_d0 = local_c8;
    local_d8 = local_68;
    func_0x1800b4c70(param_1,param_2,param_4);
  }
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_f8)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_f8);
  fnPtr_6 = (func_ptr_t )swi(3);
  ptr2_Long_15 = (int64_t **)(*fnPtr_6)();
  return ptr2_Long_15;
}

// func_0x1800b02d0
void func_0x1800b02d0(int64_t *param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint8_t auStack_68 [40];
  uint8_t **local_40;
  char *local_38;
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  pLong_1 = (int64_t *)*param_1;
  uVal_4 = ((uint64_t)param_1[2] >> 1) + param_1[2];
  if (uVal_4 < param_2) {
    uVal_4 = param_2;
  }
  lVal_3 = _malloc_base(uVal_4);
  if (lVal_3 == 0) {
    local_30 = 0;
    local_38 = "bad allocation";
    local_40 = std::bad_alloc::vftable;
    func_0x18067a120(&local_40,&DAT_180768880);
  }
  else {
    func_0x1806aa960(lVal_3,pLong_1,param_1[1]);
    *param_1 = lVal_3;
    param_1[2] = uVal_4;
    if (pLong_1 == param_1 + 4) {
      if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_68)) {
        return;
      }
    }
    else if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_68)) {
      thunk_FUN_180695dd0(pLong_1);
      return;
    }
  }
  func_0x180673080(local_28 ^ (uint64_t)auStack_68);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1800b03c0
void func_0x1800b03c0(int64_t param_1,int param_2)
{
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x59,0x45);
    return;
  }
  func_0x1800b1ad0(param_1,(int64_t)*(int *)(*(int64_t *)(param_1 + 0x20) + 0x14) + 0x76c);
  return;
}

// func_0x1800b03f0
void func_0x1800b03f0(int64_t param_1,int param_2)
{
  uint8_t uVal_1;
  char ch_2;
  int64_t *pLong_3;
  uint uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x79,0x4f);
    return;
  }
  lVal_7 = (int64_t)*(int *)(*(int64_t *)(param_1 + 0x20) + 0x14);
  lVal_6 = lVal_7 + 0x76c;
  lVal_7 = SUB168(SEXT816(lVal_6) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_7 + 0x76c;
  lVal_6 = lVal_6 + ((lVal_7 >> 6) - (lVal_7 >> 0x3f)) * -100;
  lVal_7 = -lVal_6;
  if (0 < lVal_6) {
    lVal_7 = lVal_6;
  }
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  uVal_4 = (int)lVal_7 * 2;
  uVal_1 = (&DAT_1806afb50)[uVal_4];
  lVal_6 = pLong_3[1];
  uVal_5 = lVal_6 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_6 = pLong_3[1];
    uVal_5 = lVal_6 + 1;
  }
  pLong_3[1] = uVal_5;
  *(uint8_t *)(*pLong_3 + lVal_6) = uVal_1;
  ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [uVal_4];
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_6 = pLong_3[1];
  uVal_5 = lVal_6 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_6 = pLong_3[1];
    uVal_5 = lVal_6 + 1;
  }
  pLong_3[1] = uVal_5;
  *(char *)(*pLong_3 + lVal_6) = ch_2;
  return;
}

// func_0x1800b04e0
void func_0x1800b04e0(int64_t param_1,int param_2)
{
  uint8_t uVal_1;
  char ch_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t auStack_58 [32];
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if ((param_2 == 0) || (*(char *)(param_1 + 8) != '\0')) {
    lVal_8 = (int64_t)*(int *)(*(int64_t *)(param_1 + 0x20) + 0x14);
    if (lVal_8 + 0x76cU < 0xffffffffffffff9d) {
      lVal_6 = SUB168(SEXT816((int64_t)(lVal_8 + 0x76cU)) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_8 +
              0x76c;
      lVal_6 = (lVal_6 >> 6) - (lVal_6 >> 0x3f);
      if (lVal_8 + 1999U < 0x2773) {
        uVal_7 = (uint64_t)((int)lVal_6 + (uint)((uint64_t)(lVal_6 * 0x51eb851f) >> 0x25) * -100);
        uVal_1 = (&DAT_1806afb50)[uVal_7 * 2];
        pLong_3 = *(int64_t **)(param_1 + 0x10);
        lVal_8 = pLong_3[1];
        uVal_5 = lVal_8 + 1;
        if ((uint64_t)pLong_3[2] < uVal_5) {
          (*(func_ptr_t )pLong_3[3])(pLong_3);
          lVal_8 = pLong_3[1];
          uVal_5 = lVal_8 + 1;
        }
        pLong_3[1] = uVal_5;
        *(uint8_t *)(*pLong_3 + lVal_8) = uVal_1;
        ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                [uVal_7 * 2];
        pLong_3 = *(int64_t **)(param_1 + 0x10);
        lVal_8 = pLong_3[1];
        uVal_5 = lVal_8 + 1;
        if ((uint64_t)pLong_3[2] < uVal_5) {
          (*(func_ptr_t )pLong_3[3])(pLong_3);
          lVal_8 = pLong_3[1];
          uVal_5 = lVal_8 + 1;
        }
        pLong_3[1] = uVal_5;
        *(char *)(*pLong_3 + lVal_8) = ch_2;
      }
      else {
        func_0x1800b38b0(&local_38,*(uint64_t *)(param_1 + 0x10),lVal_6);
        *(uint64_t *)(param_1 + 0x10) = local_38;
      }
    }
    else {
      pLong_3 = *(int64_t **)(param_1 + 0x10);
      lVal_8 = pLong_3[1];
      uVal_5 = lVal_8 + 1;
      if ((uint64_t)pLong_3[2] < uVal_5) {
        (*(func_ptr_t )pLong_3[3])(pLong_3);
        lVal_8 = pLong_3[1];
        uVal_5 = lVal_8 + 1;
      }
      pLong_3[1] = uVal_5;
      *(uint8_t *)(*pLong_3 + lVal_8) = 0x2d;
      pLong_3 = *(int64_t **)(param_1 + 0x10);
      lVal_8 = pLong_3[1];
      uVal_5 = lVal_8 + 1;
      if ((uint64_t)pLong_3[2] < uVal_5) {
        (*(func_ptr_t )pLong_3[3])(pLong_3);
        lVal_8 = pLong_3[1];
        uVal_5 = lVal_8 + 1;
      }
      pLong_3[1] = uVal_5;
      *(uint8_t *)(*pLong_3 + lVal_8) = 0x30;
    }
    if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
      return;
    }
  }
  else if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    func_0x1800b19e0(param_1,CONCAT71((int7)(DAT_18083cf40 >> 8),0x43),0x45);
    return;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_4 = (func_ptr_t )swi(3);
  (*fnPtr_4)();
  return;
}

// func_0x1800b06b0
void func_0x1800b06b0(int64_t param_1)
{
  uint8_t uVal_1;
  char ch_2;
  int64_t *pLong_3;
  int iVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  uint uVal_11;
  int64_t lVal_12;
  int64_t lVal_13;
  int64_t lVal_14;
  int64_t lVal_15;
  
  lVal_7 = *(int64_t *)(param_1 + 0x20);
  lVal_8 = (int64_t)*(int *)(lVal_7 + 0x14);
  iVal_4 = 7;
  if (*(int *)(lVal_7 + 0x18) != 0) {
    iVal_4 = *(int *)(lVal_7 + 0x18);
  }
  uVal_11 = (*(int *)(lVal_7 + 0x1c) - iVal_4) + 0xb;
  if ((int)uVal_11 < 7) {
    lVal_9 = lVal_8 + 0x76b;
  }
  else {
    lVal_7 = lVal_8 + 0x76c;
    lVal_9 = lVal_8 + 0x76b;
    lVal_5 = lVal_8 + 0x76f;
    if (-1 < lVal_7) {
      lVal_5 = lVal_7;
    }
    lVal_13 = (SUB168(SEXT816(lVal_7) * SEXT816(0x5c28f5c28f5c28f5),8) - lVal_8) + -0x76c;
    lVal_14 = SUB168(SEXT816(lVal_7) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_8 + 0x76c;
    lVal_6 = lVal_8 + 0x76e;
    if (-1 < lVal_9) {
      lVal_6 = lVal_9;
    }
    lVal_15 = (SUB168(SEXT816(lVal_9) * SEXT816(0x5c28f5c28f5c28f5),8) - lVal_8) + -0x76b;
    lVal_12 = SUB168(SEXT816(lVal_9) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_8 + 0x76b;
    lVal_9 = lVal_8 + 0x76d;
    if (uVal_11 / 7 <=
        (((((lVal_12 >> 8) - (lVal_12 >> 0x3f)) +
          ((lVal_15 >> 6) - (lVal_15 >> 0x3f)) + (lVal_6 >> 2) + lVal_8 + 0x76b) % 7 == 3 ||
         (((lVal_14 >> 8) - (lVal_14 >> 0x3f)) +
         ((lVal_13 >> 6) - (lVal_13 >> 0x3f)) + (lVal_5 >> 2) + lVal_8 + 0x76c) % 7 == 4) | 0x34)) {
      lVal_9 = lVal_7;
    }
  }
  lVal_9 = lVal_9 % 100;
  lVal_7 = -lVal_9;
  if (0 < lVal_9) {
    lVal_7 = lVal_9;
  }
  uVal_11 = (int)lVal_7 * 2;
  uVal_1 = (&DAT_1806afb50)[uVal_11];
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_7 = pLong_3[1];
  uVal_10 = lVal_7 + 1;
  if ((uint64_t)pLong_3[2] < uVal_10) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_7 = pLong_3[1];
    uVal_10 = lVal_7 + 1;
  }
  pLong_3[1] = uVal_10;
  *(uint8_t *)(*pLong_3 + lVal_7) = uVal_1;
  ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [uVal_11];
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_7 = pLong_3[1];
  uVal_10 = lVal_7 + 1;
  if ((uint64_t)pLong_3[2] < uVal_10) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_7 = pLong_3[1];
    uVal_10 = lVal_7 + 1;
  }
  pLong_3[1] = uVal_10;
  *(char *)(*pLong_3 + lVal_7) = ch_2;
  return;
}

// func_0x1800b0900
void func_0x1800b0900(int64_t param_1,int param_2)
{
  uint uVal_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x77,0x4f);
    return;
  }
  pLong_2 = *(int64_t **)(param_1 + 0x10);
  uVal_1 = *(uint *)(*(int64_t *)(param_1 + 0x20) + 0x18);
  lVal_3 = pLong_2[1];
  uVal_4 = lVal_3 + 1;
  if ((uint64_t)pLong_2[2] < uVal_4) {
    (*(func_ptr_t )pLong_2[3])(pLong_2);
    lVal_3 = pLong_2[1];
    uVal_4 = lVal_3 + 1;
  }
  pLong_2[1] = uVal_4;
  *(byte *)(*pLong_2 + lVal_3) = (char)uVal_1 + (char)(uVal_1 / 10) * -10 | 0x30;
  return;
}

// func_0x1800b0980
void func_0x1800b0980(int64_t param_1,int param_2)
{
  uint uVal_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  byte bFlag_5;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x75,0x4f);
    return;
  }
  pLong_2 = *(int64_t **)(param_1 + 0x10);
  uVal_1 = *(uint *)(*(int64_t *)(param_1 + 0x20) + 0x18);
  lVal_3 = pLong_2[1];
  uVal_4 = lVal_3 + 1;
  if ((uint64_t)pLong_2[2] < uVal_4) {
    (*(func_ptr_t )pLong_2[3])(pLong_2);
    lVal_3 = pLong_2[1];
    uVal_4 = lVal_3 + 1;
  }
  bFlag_5 = 0x37;
  if (uVal_1 != 0) {
    bFlag_5 = (char)uVal_1 + (char)(uVal_1 / 10) * -10 | 0x30;
  }
  pLong_2[1] = uVal_4;
  *(byte *)(*pLong_2 + lVal_3) = bFlag_5;
  return;
}

// func_0x1800b0a10
void func_0x1800b0a10(int64_t param_1,int param_2)
{
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x6d,0x4f);
    return;
  }
  func_0x1800b3a30(param_1,*(int *)(*(int64_t *)(param_1 + 0x20) + 0x10) + 1);
  return;
}

// func_0x1800b0a40
void func_0x1800b0a40(int64_t param_1,int param_2)
{
  int iVal_1;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x55,0x4f);
    return;
  }
  iVal_1 = *(int *)(*(int64_t *)(param_1 + 0x20) + 0x1c) -
          *(int *)(*(int64_t *)(param_1 + 0x20) + 0x18);
  iVal_1 = iVal_1 + (int)((uint64_t)((int64_t)(iVal_1 + 7) * -0x6db6db6d) >> 0x20) + 7;
  func_0x1800b3a30(param_1,(iVal_1 >> 2) - (iVal_1 >> 0x1f));
  return;
}

// func_0x1800b0a90
void func_0x1800b0a90(int64_t param_1,int param_2)
{
  int iVal_1;
  int iVal_2;
  int iVal_3;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x57,0x4f);
    return;
  }
  iVal_3 = *(int *)(*(int64_t *)(param_1 + 0x20) + 0x18);
  iVal_1 = *(int *)(*(int64_t *)(param_1 + 0x20) + 0x1c);
  iVal_2 = -6;
  if (iVal_3 != 0) {
    iVal_2 = 1 - iVal_3;
  }
  iVal_3 = (int)((uint64_t)((int64_t)(iVal_2 + iVal_1 + 7) * -0x6db6db6d) >> 0x20) + iVal_1 + iVal_2 +
          7;
  func_0x1800b3a30(param_1,(iVal_3 >> 2) - (iVal_3 >> 0x1f));
  return;
}

// func_0x1800b0af0
void func_0x1800b0af0(int64_t param_1,int param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint uVal_3;
  uint uVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int iVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  int64_t lVal_10;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x56,0x4f);
    return;
  }
  lVal_2 = *(int64_t *)(param_1 + 0x20);
  lVal_6 = (int64_t)*(int *)(lVal_2 + 0x14);
  iVal_7 = 7;
  if (*(int *)(lVal_2 + 0x18) != 0) {
    iVal_7 = *(int *)(lVal_2 + 0x18);
  }
  uVal_4 = (*(int *)(lVal_2 + 0x1c) - iVal_7) + 0xb;
  if ((int)uVal_4 < 7) {
    lVal_2 = lVal_6 + 0x76b;
    lVal_1 = lVal_6 + 0x76e;
    if (-1 < lVal_2) {
      lVal_1 = lVal_2;
    }
    lVal_8 = lVal_6 + 0x76a;
    lVal_9 = (SUB168(SEXT816(lVal_2) * SEXT816(0x5c28f5c28f5c28f5),8) - lVal_6) + -0x76b;
    lVal_5 = SUB168(SEXT816(lVal_2) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_6 + 0x76b;
    lVal_2 = lVal_6 + 0x76d;
    if (-1 < lVal_8) {
      lVal_2 = lVal_8;
    }
    lVal_10 = (SUB168(SEXT816(lVal_8) * SEXT816(0x5c28f5c28f5c28f5),8) - lVal_6) + -0x76a;
    lVal_8 = SUB168(SEXT816(lVal_8) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_6 + 0x76a;
    uVal_3 = ((((lVal_8 >> 8) - (lVal_8 >> 0x3f)) +
             ((lVal_10 >> 6) - (lVal_10 >> 0x3f)) + (lVal_2 >> 2) + lVal_6 + 0x76a) % 7 == 3 ||
            (((lVal_5 >> 8) - (lVal_5 >> 0x3f)) +
            ((lVal_9 >> 6) - (lVal_9 >> 0x3f)) + (lVal_1 >> 2) + lVal_6 + 0x76b) % 7 == 4) | 0x34;
  }
  else {
    lVal_2 = lVal_6 + 0x76c;
    uVal_4 = uVal_4 / 7;
    lVal_1 = lVal_6 + 0x76f;
    if (-1 < lVal_2) {
      lVal_1 = lVal_2;
    }
    lVal_8 = lVal_6 + 0x76b;
    lVal_9 = (SUB168(SEXT816(lVal_2) * SEXT816(0x5c28f5c28f5c28f5),8) - lVal_6) + -0x76c;
    lVal_5 = SUB168(SEXT816(lVal_2) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_6 + 0x76c;
    lVal_2 = lVal_6 + 0x76e;
    if (-1 < lVal_8) {
      lVal_2 = lVal_8;
    }
    lVal_10 = (SUB168(SEXT816(lVal_8) * SEXT816(0x5c28f5c28f5c28f5),8) - lVal_6) + -0x76b;
    lVal_8 = SUB168(SEXT816(lVal_8) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_6 + 0x76b;
    uVal_3 = 1;
    if (uVal_4 <= (((((lVal_8 >> 8) - (lVal_8 >> 0x3f)) +
                   ((lVal_10 >> 6) - (lVal_10 >> 0x3f)) + (lVal_2 >> 2) + lVal_6 + 0x76b) % 7 == 3 ||
                  (((lVal_5 >> 8) - (lVal_5 >> 0x3f)) +
                  ((lVal_9 >> 6) - (lVal_9 >> 0x3f)) + (lVal_1 >> 2) + lVal_6 + 0x76c) % 7 == 4) | 0x34)
       ) {
      uVal_3 = uVal_4;
    }
  }
  func_0x1800b3a30(param_1,uVal_3);
  return;
}

// func_0x1800b0e10
void func_0x1800b0e10(int64_t param_1,int param_2)
{
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,100,0x4f);
    return;
  }
  func_0x1800b3a30(param_1,*(uint32_t *)(*(int64_t *)(param_1 + 0x20) + 0xc));
  return;
}

// func_0x1800b0e30
void func_0x1800b0e30(int64_t param_1,int param_2)
{
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x48,0x4f);
    return;
  }
  func_0x1800b3a30(param_1,*(uint32_t *)(*(int64_t *)(param_1 + 0x20) + 8));
  return;
}

// func_0x1800b0e50
void func_0x1800b0e50(int64_t param_1,int param_2)
{
  int iVal_1;
  int iVal_2;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x49,0x4f);
    return;
  }
  iVal_2 = *(int *)(*(int64_t *)(param_1 + 0x20) + 8);
  iVal_1 = iVal_2 + -0xc;
  if (iVal_2 < 0xc) {
    iVal_1 = iVal_2;
  }
  iVal_2 = 0xc;
  if (iVal_1 != 0) {
    iVal_2 = iVal_1;
  }
  func_0x1800b3a30(param_1,iVal_2);
  return;
}

// func_0x1800b0e90
void func_0x1800b0e90(int64_t param_1,int param_2)
{
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x4d,0x4f);
    return;
  }
  func_0x1800b3a30(param_1,*(uint32_t *)(*(int64_t *)(param_1 + 0x20) + 4));
  return;
}

// func_0x1800b0eb0
void func_0x1800b0eb0(int64_t param_1,int param_2)
{
  if ((param_2 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    func_0x1800b19e0(param_1,0x53,0x4f);
    return;
  }
  func_0x1800b3a30(param_1,**(uint32_t **)(param_1 + 0x20));
  if (*(uint64_t **)(param_1 + 0x18) != (uint64_t *)0x0) {
    func_0x1800b3b40(param_1 + 0x10,**(uint64_t **)(param_1 + 0x18),0xffffffff);
    return;
  }
  return;
}

// func_0x1800b0f10
void func_0x1800b0f10(int64_t param_1,int param_2)
{
  int64_t **ptr2_Long_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  size_t sz_5;
  int64_t lVal_6;
  char *fnPtr_7;
  int64_t *pLong_8;
  uint32_t uVal_9;
  uint8_t auStack_58 [40];
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if (*(char *)(param_1 + 8) != '\x01') {
    uVal_9 = 0x45;
    if (param_2 == 0) {
      uVal_9 = 0;
    }
    if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_58)) {
      func_0x1800b19e0(param_1,99,uVal_9);
      return;
    }
    goto LAB_1800b1176;
  }
  uVal_4 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x20) + 0x18);
  if (uVal_4 < 7) {
    fnPtr_7 = (&PTR_DAT_1806b0c30)[uVal_4];
  }
  else {
    fnPtr_7 = "???";
  }
  uVal_2 = *(uint64_t *)(param_1 + 0x10);
  sz_5 = strlen(fnPtr_7);
  func_0x1800b1e50(&local_30,fnPtr_7,fnPtr_7 + sz_5,uVal_2);
  pLong_8 = local_30;
  *(int64_t **)(param_1 + 0x10) = local_30;
  lVal_6 = local_30[1];
  uVal_4 = lVal_6 + 1;
  if ((uint64_t)local_30[2] < uVal_4) {
    (*(func_ptr_t )local_30[3])(local_30);
    lVal_6 = pLong_8[1];
    uVal_4 = lVal_6 + 1;
  }
  ptr2_Long_1 = (int64_t **)(param_1 + 0x10);
  pLong_8[1] = uVal_4;
  *(uint8_t *)(*pLong_8 + lVal_6) = 0x20;
  if (*(char *)(param_1 + 8) == '\x01') {
    uVal_4 = (uint64_t)*(uint *)(*(int64_t *)(param_1 + 0x20) + 0x10);
    if (uVal_4 < 0xc) {
      fnPtr_7 = (&PTR_DAT_1806b0cb0)[uVal_4];
    }
    else {
      fnPtr_7 = "???";
    }
    pLong_8 = *ptr2_Long_1;
    sz_5 = strlen(fnPtr_7);
    func_0x1800b1e50(&local_30,fnPtr_7,fnPtr_7 + sz_5,pLong_8);
    *ptr2_Long_1 = local_30;
    lVal_6 = local_30[1];
    uVal_4 = lVal_6 + 1;
    pLong_8 = local_30;
    if ((uint64_t)local_30[2] < uVal_4) {
LAB_1800b105a:
      (*(func_ptr_t )pLong_8[3])(pLong_8);
      lVal_6 = pLong_8[1];
      uVal_4 = lVal_6 + 1;
    }
  }
  else {
    func_0x1800b19e0(param_1,CONCAT71((int7)(uVal_4 >> 8),0x62),0);
    pLong_8 = *(int64_t **)(param_1 + 0x10);
    lVal_6 = pLong_8[1];
    uVal_4 = lVal_6 + 1;
    if ((uint64_t)pLong_8[2] < uVal_4) goto LAB_1800b105a;
  }
  pLong_8[1] = uVal_4;
  *(uint8_t *)(*pLong_8 + lVal_6) = 0x20;
  func_0x1800b3a30(param_1,*(uint32_t *)(*(int64_t *)(param_1 + 0x20) + 0xc),2);
  pLong_8 = *(int64_t **)(param_1 + 0x10);
  lVal_6 = pLong_8[1];
  uVal_4 = lVal_6 + 1;
  if ((uint64_t)pLong_8[2] < uVal_4) {
    (*(func_ptr_t )pLong_8[3])(pLong_8);
    lVal_6 = pLong_8[1];
    uVal_4 = lVal_6 + 1;
  }
  pLong_8[1] = uVal_4;
  *(uint8_t *)(*pLong_8 + lVal_6) = 0x20;
  func_0x1800b17b0(param_1);
  pLong_8 = *(int64_t **)(param_1 + 0x10);
  lVal_6 = pLong_8[1];
  uVal_4 = lVal_6 + 1;
  if ((uint64_t)pLong_8[2] < uVal_4) {
    (*(func_ptr_t )pLong_8[3])(pLong_8);
    lVal_6 = pLong_8[1];
    uVal_4 = lVal_6 + 1;
  }
  pLong_8[1] = uVal_4;
  *(uint8_t *)(*pLong_8 + lVal_6) = 0x3a;
  func_0x1800b3a30(param_1,**(uint32_t **)(param_1 + 0x20),0);
  if (*(uint64_t **)(param_1 + 0x18) != (uint64_t *)0x0) {
    func_0x1800b3b40(ptr2_Long_1,**(uint64_t **)(param_1 + 0x18),0xffffffff);
  }
  pLong_8 = *ptr2_Long_1;
  lVal_6 = pLong_8[1];
  uVal_4 = lVal_6 + 1;
  if ((uint64_t)pLong_8[2] < uVal_4) {
    (*(func_ptr_t )pLong_8[3])(pLong_8);
    lVal_6 = pLong_8[1];
    uVal_4 = lVal_6 + 1;
  }
  pLong_8[1] = uVal_4;
  *(uint8_t *)(*pLong_8 + lVal_6) = 0x20;
  func_0x1800b1ad0(param_1,(int64_t)*(int *)(*(int64_t *)(param_1 + 0x20) + 0x14) + 0x76c,2);
  if (DAT_18083cf40 == (local_28 ^ (uint64_t)auStack_58)) {
    return;
  }
LAB_1800b1176:
  func_0x180673080(local_28 ^ (uint64_t)auStack_58);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x1800b1190
void func_0x1800b1190(int64_t param_1,int param_2)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint32_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint8_t local_58 [32];
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)local_58;
  if (*(char *)(param_1 + 8) == '\x01') {
    lVal_4 = *(int64_t *)(param_1 + 0x20);
    lVal_8 = (int64_t)*(int *)(lVal_4 + 0x14);
    lVal_3 = SUB168(SEXT816(lVal_8 + 0x76c) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_8 + 0x76c;
    lVal_8 = ((lVal_3 >> 6) - (lVal_3 >> 0x3f)) * -100 + lVal_8 + 0x76c;
    lVal_3 = -lVal_8;
    if (0 < lVal_8) {
      lVal_3 = lVal_8;
    }
    uVal_5 = lVal_3 << 0x30 | (uint64_t)(*(int *)(lVal_4 + 0xc) << 0x18 | *(int *)(lVal_4 + 0x10) + 1U)
    ;
    uVal_5 = uVal_5 + (uVal_5 * 0xcd >> 0xb & 0xf00000f00000f) * 6;
    local_38 = (uVal_5 & 0xf00000f00000f) << 8 | uVal_5 >> 4 & 0xf00000f00000f | 0x30302f30302f3030;
    pLong_1 = *(int64_t **)(param_1 + 0x10);
    lVal_4 = pLong_1[1];
    lVal_3 = 0;
    do {
      uVal_9 = 8 - lVal_3;
      uVal_5 = pLong_1[2];
      if (uVal_5 < uVal_9 + lVal_4) {
        (*(func_ptr_t )pLong_1[3])(pLong_1);
        lVal_4 = pLong_1[1];
        uVal_5 = pLong_1[2];
      }
      uVal_6 = uVal_5 - lVal_4;
      if (uVal_9 <= uVal_5 - lVal_4) {
        uVal_6 = uVal_9;
      }
      if (uVal_6 != 0) {
        func_0x1806aa960(lVal_4 + *pLong_1,(int64_t)&local_38 + lVal_3,uVal_6);
        lVal_4 = pLong_1[1];
      }
      lVal_4 = lVal_4 + uVal_6;
      pLong_1[1] = lVal_4;
      lVal_3 = lVal_3 + uVal_6;
    } while (lVal_3 != 8);
    *(int64_t **)(param_1 + 0x10) = pLong_1;
    if (DAT_18083cf40 == (local_30 ^ (uint64_t)local_58)) {
      return;
    }
  }
  else {
    uVal_7 = 0x45;
    if (param_2 == 0) {
      uVal_7 = 0;
    }
    if (DAT_18083cf40 == (local_30 ^ (uint64_t)local_58)) {
      func_0x1800b19e0(param_1,0x78,uVal_7);
      return;
    }
  }
  func_0x180673080(local_30 ^ (uint64_t)local_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1800b1350
void func_0x1800b1350(int64_t param_1,int param_2)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint32_t uVal_4;
  
  if (*(char *)(param_1 + 8) != '\x01') {
    uVal_4 = 0x45;
    if (param_2 == 0) {
      uVal_4 = 0;
    }
    func_0x1800b19e0(param_1,0x58,uVal_4);
    return;
  }
  func_0x1800b17b0(param_1);
  pLong_1 = *(int64_t **)(param_1 + 0x10);
  lVal_2 = pLong_1[1];
  uVal_3 = lVal_2 + 1;
  if ((uint64_t)pLong_1[2] < uVal_3) {
    (*(func_ptr_t )pLong_1[3])(pLong_1);
    lVal_2 = pLong_1[1];
    uVal_3 = lVal_2 + 1;
  }
  pLong_1[1] = uVal_3;
  *(uint8_t *)(*pLong_1 + lVal_2) = 0x3a;
  func_0x1800b3a30(param_1,**(uint32_t **)(param_1 + 0x20),0);
  if (*(uint64_t **)(param_1 + 0x18) != (uint64_t *)0x0) {
    func_0x1800b3b40(param_1 + 0x10,**(uint64_t **)(param_1 + 0x18),0xffffffff);
    return;
  }
  return;
}

// func_0x1800b13f0
void func_0x1800b13f0(int64_t param_1)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint8_t local_68 [46];
  uint16_t local_3a;
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)local_68;
  lVal_4 = *(int64_t *)(param_1 + 0x20);
  uVal_5 = (int64_t)*(int *)(lVal_4 + 0x14) + 0x76c;
  if (uVal_5 < 10000) {
    uVal_3 = ((uint)(uVal_5 >> 2) & 0xffff) * 0x147b >> 0x11;
    local_3a = *(uint16_t *)(&DAT_1806afb50 + (uint64_t)uVal_3 * 2);
    uVal_3 = (int)uVal_5 + uVal_3 * -100 & 0xffff;
    lVal_7 = 0;
  }
  else {
    uVal_3 = 0;
    func_0x1800b1ad0(param_1,uVal_5,0);
    lVal_4 = *(int64_t *)(param_1 + 0x20);
    lVal_7 = 4;
  }
  uVal_5 = (uint64_t)*(uint *)(lVal_4 + 0xc) << 0x30 |
          (uint64_t)(*(int *)(lVal_4 + 0x10) * 0x1000000 + uVal_3 + 0x1000000);
  uVal_5 = uVal_5 + (uVal_5 * 0xcd >> 0xb & 0xf00000f00000f) * 6;
  local_38 = (uVal_5 & 0xf00000f00000f) << 8 | uVal_5 >> 4 & 0xf00000f00000f | 0x30302d30302d3030;
  pLong_1 = *(int64_t **)(param_1 + 0x10);
  lVal_4 = pLong_1[1];
  do {
    uVal_8 = 10 - lVal_7;
    uVal_5 = pLong_1[2];
    if (uVal_5 < uVal_8 + lVal_4) {
      (*(func_ptr_t )pLong_1[3])(pLong_1);
      lVal_4 = pLong_1[1];
      uVal_5 = pLong_1[2];
    }
    uVal_6 = uVal_5 - lVal_4;
    if (uVal_8 <= uVal_5 - lVal_4) {
      uVal_6 = uVal_8;
    }
    if (uVal_6 != 0) {
      func_0x1806aa960(lVal_4 + *pLong_1,(int64_t)&local_3a + lVal_7,uVal_6);
      lVal_4 = pLong_1[1];
    }
    lVal_4 = lVal_4 + uVal_6;
    pLong_1[1] = lVal_4;
    lVal_7 = lVal_7 + uVal_6;
  } while (lVal_7 != 10);
  *(int64_t **)(param_1 + 0x10) = pLong_1;
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)local_68)) {
    return;
  }
  func_0x180673080(local_30 ^ (uint64_t)local_68);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1800b1570
void func_0x1800b1570(int64_t param_1)
{
  uint *pU64_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint uVal_7;
  uint64_t uVal_8;
  uint8_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t local_58 [32];
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)local_58;
  if (*(char *)(param_1 + 8) == '\x01') {
    pU64_1 = *(uint **)(param_1 + 0x20);
    uVal_7 = pU64_1[2];
    uVal_4 = uVal_7 - 0xc;
    if ((int)uVal_7 < 0xc) {
      uVal_4 = uVal_7;
    }
    uVal_7 = 0xc;
    if (uVal_4 != 0) {
      uVal_7 = uVal_4;
    }
    uVal_5 = (uint64_t)*pU64_1 << 0x30 | (uint64_t)(pU64_1[1] << 0x18 | uVal_7);
    uVal_5 = uVal_5 + (uVal_5 * 0xcd >> 0xb & 0xf00000f00000f) * 6;
    local_38 = (uVal_5 & 0xf00000f00000f) << 8 | uVal_5 >> 4 & 0xf00000f00000f | 0x30303a30303a3030;
    pLong_2 = *(int64_t **)(param_1 + 0x10);
    lVal_6 = pLong_2[1];
    lVal_11 = 0;
    do {
      uVal_12 = 8 - lVal_11;
      uVal_5 = pLong_2[2];
      if (uVal_5 < uVal_12 + lVal_6) {
        (*(func_ptr_t )pLong_2[3])(pLong_2);
        lVal_6 = pLong_2[1];
        uVal_5 = pLong_2[2];
      }
      uVal_10 = uVal_5 - lVal_6;
      if (uVal_12 <= uVal_5 - lVal_6) {
        uVal_10 = uVal_12;
      }
      if (uVal_10 != 0) {
        func_0x1806aa960(lVal_6 + *pLong_2,(int64_t)&local_38 + lVal_11,uVal_10);
        lVal_6 = pLong_2[1];
      }
      lVal_6 = lVal_6 + uVal_10;
      pLong_2[1] = lVal_6;
      lVal_11 = lVal_11 + uVal_10;
    } while (lVal_11 != 8);
    *(int64_t **)(param_1 + 0x10) = pLong_2;
    lVal_6 = pLong_2[1];
    uVal_5 = lVal_6 + 1;
    if ((uint64_t)pLong_2[2] < uVal_5) {
      (*(func_ptr_t )pLong_2[3])(pLong_2);
      lVal_6 = pLong_2[1];
      uVal_5 = lVal_6 + 1;
    }
    pLong_2[1] = uVal_5;
    *(uint8_t *)(*pLong_2 + lVal_6) = 0x20;
    if (*(char *)(param_1 + 8) == '\x01') {
      pLong_2 = *(int64_t **)(param_1 + 0x10);
      uVal_9 = 0x50;
      if (*(int *)(*(int64_t *)(param_1 + 0x20) + 8) < 0xc) {
        uVal_9 = 0x41;
      }
      lVal_6 = pLong_2[1];
      uVal_5 = lVal_6 + 1;
      if ((uint64_t)pLong_2[2] < uVal_5) {
        (*(func_ptr_t )pLong_2[3])(pLong_2);
        lVal_6 = pLong_2[1];
        uVal_5 = lVal_6 + 1;
      }
      pLong_2[1] = uVal_5;
      *(uint8_t *)(*pLong_2 + lVal_6) = uVal_9;
      pLong_2 = *(int64_t **)(param_1 + 0x10);
      lVal_6 = pLong_2[1];
      uVal_5 = lVal_6 + 1;
      if ((uint64_t)pLong_2[2] < uVal_5) {
        (*(func_ptr_t )pLong_2[3])(pLong_2);
        lVal_6 = pLong_2[1];
        uVal_5 = lVal_6 + 1;
      }
      pLong_2[1] = uVal_5;
      *(uint8_t *)(*pLong_2 + lVal_6) = 0x4d;
      if (DAT_18083cf40 == (local_30 ^ (uint64_t)local_58)) {
        return;
      }
    }
    else if (DAT_18083cf40 == (local_30 ^ (uint64_t)local_58)) {
      uVal_8 = 0x70;
      goto LAB_1800b1786;
    }
  }
  else if (DAT_18083cf40 == (local_30 ^ (uint64_t)local_58)) {
    uVal_8 = 0x72;
LAB_1800b1786:
    func_0x1800b19e0(param_1,uVal_8,0);
    return;
  }
  func_0x180673080(local_30 ^ (uint64_t)local_58);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x1800b17b0
void func_0x1800b17b0(int64_t param_1)
{
  uint8_t uVal_1;
  char ch_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  uVal_6 = (uint64_t)(*(uint *)(*(int64_t *)(param_1 + 0x20) + 8) % 100);
  uVal_1 = (&DAT_1806afb50)[uVal_6 * 2];
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
  }
  pLong_3[1] = uVal_5;
  *(uint8_t *)(*pLong_3 + lVal_4) = uVal_1;
  ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [uVal_6 * 2];
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
  }
  pLong_3[1] = uVal_5;
  *(char *)(*pLong_3 + lVal_4) = ch_2;
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
  }
  pLong_3[1] = uVal_5;
  *(uint8_t *)(*pLong_3 + lVal_4) = 0x3a;
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  uVal_6 = (uint64_t)(*(uint *)(*(int64_t *)(param_1 + 0x20) + 4) % 100);
  uVal_1 = (&DAT_1806afb50)[uVal_6 * 2];
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
  }
  pLong_3[1] = uVal_5;
  *(uint8_t *)(*pLong_3 + lVal_4) = uVal_1;
  ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [uVal_6 * 2];
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
  }
  pLong_3[1] = uVal_5;
  *(char *)(*pLong_3 + lVal_4) = ch_2;
  return;
}

// func_0x1800b18f0
void func_0x1800b18f0(int64_t param_1)
{
  uint8_t uVal_1;
  char ch_2;
  int64_t *pLong_3;
  uint uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    lVal_7 = (int64_t)*(int *)(*(int64_t *)(param_1 + 0x20) + 0x14);
    lVal_6 = lVal_7 + 0x76c;
    lVal_7 = SUB168(SEXT816(lVal_6) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVal_7 + 0x76c;
    lVal_6 = lVal_6 + ((lVal_7 >> 6) - (lVal_7 >> 0x3f)) * -100;
    lVal_7 = -lVal_6;
    if (0 < lVal_6) {
      lVal_7 = lVal_6;
    }
    pLong_3 = *(int64_t **)(param_1 + 0x10);
    uVal_4 = (int)lVal_7 * 2;
    uVal_1 = (&DAT_1806afb50)[uVal_4];
    lVal_6 = pLong_3[1];
    uVal_5 = lVal_6 + 1;
    if ((uint64_t)pLong_3[2] < uVal_5) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_6 = pLong_3[1];
      uVal_5 = lVal_6 + 1;
    }
    pLong_3[1] = uVal_5;
    *(uint8_t *)(*pLong_3 + lVal_6) = uVal_1;
    ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            [uVal_4];
    pLong_3 = *(int64_t **)(param_1 + 0x10);
    lVal_6 = pLong_3[1];
    uVal_5 = lVal_6 + 1;
    if ((uint64_t)pLong_3[2] < uVal_5) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_6 = pLong_3[1];
      uVal_5 = lVal_6 + 1;
    }
    pLong_3[1] = uVal_5;
    *(char *)(*pLong_3 + lVal_6) = ch_2;
    return;
  }
  func_0x1800b19e0(param_1,0x79,0x45);
  return;
}

// func_0x1800b19e0
void func_0x1800b19e0(uint64_t *param_1,uint32_t param_2,uint8_t param_3)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t local_258;
  uint64_t uStack_250;
  uint64_t local_248;
  func_ptr_t local_240;
  uint8_t local_238 [504];
  uint32_t local_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVal_1 = *param_1;
  uVal_2 = param_1[2];
  uStack_250 = 0;
  local_240 = func_0x1800b02d0;
  local_258 = local_238;
  local_248 = 500;
  func_0x1800b2010(&local_258,param_1[4],uVal_1,param_2,param_3);
  local_40 = (uint32_t)local_258;
  uStack_3c = local_258._4_4_;
  uStack_38 = (uint32_t)uStack_250;
  uStack_34 = uStack_250._4_4_;
  func_0x1800b2380(&local_30,uVal_2,&local_40,uVal_1);
  if (local_258 != local_238) {
    thunk_FUN_180695dd0();
  }
  param_1[2] = local_30;
  return;
}

// Unwind@1800b1aa0
void Unwind_1800b1aa0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x30) != param_2 + 0x50) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x1800b1ad0
void func_0x1800b1ad0(int64_t param_1,uint64_t param_2,int param_3)
{
  func_ptr_t fnPtr_1;
  int64_t **ptr2_Long_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int iVal_6;
  int iVal_7;
  int64_t *pLong_8;
  uint8_t auStack_78 [32];
  int64_t **pplStack_58;
  uint64_t uStack_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  uVal_5 = -param_2;
  if (0 < (int64_t)param_2) {
    uVal_5 = param_2;
  }
  lVal_3 = 0x3f;
  if ((uVal_5 | 1) != 0) {
    for (; (uVal_5 | 1) >> lVal_3 == 0; lVal_3 = lVal_3 + -1) {
    }
  }
  iVal_6 = (uint)(byte)(&DAT_1806b0ac0)[lVal_3] -
          (uint)(uVal_5 < *(uint64_t *)
                          (&DAT_1806b0b00 + (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_3] * 8));
  if (param_3 == 0 && (int64_t)param_2 < 0) {
    pLong_8 = *(int64_t **)(param_1 + 0x10);
    lVal_3 = pLong_8[1];
    uVal_4 = lVal_3 + 1;
    if ((uint64_t)pLong_8[2] < uVal_4) {
      (*(func_ptr_t )pLong_8[3])(pLong_8);
      lVal_3 = pLong_8[1];
      uVal_4 = lVal_3 + 1;
    }
    pLong_8[1] = uVal_4;
    *(uint8_t *)(*pLong_8 + lVal_3) = 0x2d;
    if (2 < iVal_6) goto LAB_1800b1c32;
    pLong_8 = *(int64_t **)(param_1 + 0x10);
    iVal_7 = 3;
LAB_1800b1b9c:
    pplStack_58 = (int64_t **)(param_1 + 0x10);
    iVal_7 = iVal_7 - iVal_6;
    do {
      lVal_3 = pLong_8[1];
      uVal_4 = lVal_3 + 1;
      if ((uint64_t)pLong_8[2] < uVal_4) {
        (*(func_ptr_t )pLong_8[3])(pLong_8);
        lVal_3 = pLong_8[1];
        uVal_4 = lVal_3 + 1;
      }
      pLong_8[1] = uVal_4;
      *(byte *)(*pLong_8 + lVal_3) = (param_3 != 2) << 4 | 0x20;
      iVal_7 = iVal_7 + -1;
      ptr2_Long_2 = pplStack_58;
    } while (iVal_7 != 0);
LAB_1800b1bf4:
    *ptr2_Long_2 = pLong_8;
  }
  else {
    iVal_7 = (int)((int64_t)param_2 >> 0x3f) + 4;
    if (iVal_6 < iVal_7) {
      pLong_8 = *(int64_t **)(param_1 + 0x10);
      ptr2_Long_2 = (int64_t **)(param_1 + 0x10);
      if (param_3 != 1) goto LAB_1800b1b9c;
      goto LAB_1800b1bf4;
    }
  }
  if (param_3 != 0 && (int64_t)param_2 < 0) {
    pLong_8 = *(int64_t **)(param_1 + 0x10);
    lVal_3 = pLong_8[1];
    uVal_4 = lVal_3 + 1;
    if ((uint64_t)pLong_8[2] < uVal_4) {
      (*(func_ptr_t )pLong_8[3])(pLong_8);
      lVal_3 = pLong_8[1];
      uVal_4 = lVal_3 + 1;
    }
    pLong_8[1] = uVal_4;
    *(uint8_t *)(*pLong_8 + lVal_3) = 0x2d;
  }
LAB_1800b1c32:
  func_0x1800b1c90(&uStack_50,*(uint64_t *)(param_1 + 0x10),uVal_5,iVal_6);
  *(uint64_t *)(param_1 + 0x10) = uStack_50;
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_78)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_78);
    fnPtr_1 = (func_ptr_t )swi(3);
    (*fnPtr_1)();
    return;
  }
  return;
}

// func_0x1800b1c90
int64_t ** func_0x1800b1c90(int64_t **param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  bool bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t **ptr2_Long_3;
  uint uVal_4;
  int64_t lVal_5;
  uint uVal_7;
  uint64_t uVal_8;
  uint8_t auStack_68 [32];
  uint16_t local_48 [12];
  uint64_t local_30;
  uint64_t uVal_6;
  
  uVal_6 = param_4 & 0xffffffff;
  uVal_7 = (uint)param_4;
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  lVal_5 = param_2[1];
  uVal_8 = lVal_5 + (param_4 & 0xffffffff);
  if ((uint64_t)param_2[2] < uVal_8) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_8 = (param_4 & 0xffffffff) + lVal_5;
    if (uVal_8 <= (uint64_t)param_2[2]) goto LAB_1800b1ce1;
  }
  else {
LAB_1800b1ce1:
    param_2[1] = uVal_8;
    if (*param_2 != 0) {
      lVal_5 = *param_2 + lVal_5;
      uVal_8 = param_3;
      if (param_3 < 100) {
        if (9 < param_3) goto LAB_1800b1d4a;
LAB_1800b1e0a:
        *(byte *)(lVal_5 + (uint64_t)(uVal_7 - 1)) = (byte)param_3 | 0x30;
      }
      else {
        do {
          uVal_7 = (int)uVal_6 - 2;
          uVal_6 = (uint64_t)uVal_7;
          param_3 = uVal_8 / 100;
          *(uint16_t *)(lVal_5 + uVal_6) = *(uint16_t *)(&DAT_1806afb50 + (uVal_8 % 100) * 2);
          bFlag_1 = 9999 < uVal_8;
          uVal_8 = param_3;
        } while (bFlag_1);
        if (param_3 < 10) goto LAB_1800b1e0a;
LAB_1800b1d4a:
        *(uint16_t *)(lVal_5 + (uint64_t)(uVal_7 - 2)) =
             *(uint16_t *)(&DAT_1806afb50 + param_3 * 2);
      }
      *param_1 = param_2;
      goto LAB_1800b1e15;
    }
  }
  uVal_8 = param_3;
  if (param_3 < 100) {
    uVal_4 = uVal_7;
    if (9 < param_3) goto LAB_1800b1db7;
LAB_1800b1dd7:
    *(byte *)((int64_t)local_48 + (uint64_t)(uVal_4 - 1)) = (byte)param_3 | 0x30;
  }
  else {
    do {
      uVal_4 = (int)uVal_6 - 2;
      uVal_6 = (uint64_t)uVal_4;
      param_3 = uVal_8 / 100;
      *(uint16_t *)((int64_t)local_48 + uVal_6) =
           *(uint16_t *)(&DAT_1806afb50 + (uVal_8 % 100) * 2);
      bFlag_1 = 9999 < uVal_8;
      uVal_8 = param_3;
    } while (bFlag_1);
    if (param_3 < 10) goto LAB_1800b1dd7;
LAB_1800b1db7:
    *(uint16_t *)((int64_t)local_48 + (uint64_t)(uVal_4 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + param_3 * 2);
  }
  func_0x1800b1e50(param_1,local_48,(int64_t)local_48 + (int64_t)(int)uVal_7,param_2);
LAB_1800b1e15:
  if (DAT_18083cf40 != (local_30 ^ (uint64_t)auStack_68)) {
    func_0x180673080(local_30 ^ (uint64_t)auStack_68);
    fnPtr_2 = (func_ptr_t )swi(3);
    ptr2_Long_3 = (int64_t **)(*fnPtr_2)();
    return ptr2_Long_3;
  }
  return param_1;
}

// func_0x1800b1e50
int64_t ** func_0x1800b1e50(int64_t **param_1,int64_t param_2,int64_t param_3,int64_t *param_4)
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
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  
  if (param_2 != param_3) {
    lVal_13 = param_4[1];
    do {
      uVal_16 = param_3 - param_2;
      uVal_14 = param_4[2];
      if (uVal_14 < uVal_16 + lVal_13) {
        (*(func_ptr_t )param_4[3])(param_4);
        lVal_13 = param_4[1];
        uVal_14 = param_4[2];
      }
      uVal_12 = uVal_14 - lVal_13;
      if (uVal_16 <= uVal_14 - lVal_13) {
        uVal_12 = uVal_16;
      }
      if (uVal_12 != 0) {
        lVal_4 = *param_4;
        lVal_1 = lVal_4 + lVal_13;
        if ((uVal_12 < 4) || ((uint64_t)(lVal_1 - param_2) < 0x20)) {
          uVal_14 = 0;
LAB_1800b1ee7:
          uVal_15 = uVal_14;
          for (uVal_16 = uVal_12 & 3; uVal_16 != 0; uVal_16 = uVal_16 - 1) {
            *(uint8_t *)(lVal_1 + uVal_15) = *(uint8_t *)(param_2 + uVal_15);
            uVal_15 = uVal_15 + 1;
          }
          if (uVal_14 - uVal_12 < 0xfffffffffffffffd) {
            lVal_13 = lVal_13 + lVal_4;
            do {
              *(uint8_t *)(lVal_13 + uVal_15) = *(uint8_t *)(param_2 + uVal_15);
              *(uint8_t *)(lVal_13 + 1 + uVal_15) = *(uint8_t *)(param_2 + 1 + uVal_15);
              *(uint8_t *)(lVal_13 + 2 + uVal_15) = *(uint8_t *)(param_2 + 2 + uVal_15);
              *(uint8_t *)(lVal_13 + 3 + uVal_15) = *(uint8_t *)(param_2 + 3 + uVal_15);
              uVal_15 = uVal_15 + 4;
            } while (uVal_12 != uVal_15);
          }
        }
        else if (uVal_12 < 0x20) {
          uVal_16 = 0;
LAB_1800b1fc0:
          uVal_14 = uVal_12 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_16) = *(uint32_t *)(param_2 + uVal_16);
            uVal_16 = uVal_16 + 4;
          } while (uVal_14 != uVal_16);
          if (uVal_12 != uVal_14) goto LAB_1800b1ee7;
        }
        else {
          uVal_14 = uVal_12 & 0xffffffffffffffe0;
          uVal_16 = 0;
          do {
            pU64_2 = (uint32_t *)(param_2 + uVal_16);
            uVal_5 = pU64_2[1];
            uVal_6 = pU64_2[2];
            uVal_7 = pU64_2[3];
            pU64_3 = (uint32_t *)(param_2 + 0x10 + uVal_16);
            uVal_8 = *pU64_3;
            uVal_9 = pU64_3[1];
            uVal_10 = pU64_3[2];
            uVal_11 = pU64_3[3];
            pU64_3 = (uint32_t *)(lVal_4 + lVal_13 + uVal_16);
            *pU64_3 = *pU64_2;
            pU64_3[1] = uVal_5;
            pU64_3[2] = uVal_6;
            pU64_3[3] = uVal_7;
            pU64_2 = (uint32_t *)(lVal_4 + lVal_13 + 0x10 + uVal_16);
            *pU64_2 = uVal_8;
            pU64_2[1] = uVal_9;
            pU64_2[2] = uVal_10;
            pU64_2[3] = uVal_11;
            uVal_16 = uVal_16 + 0x20;
          } while (uVal_14 != uVal_16);
          if (uVal_12 != uVal_14) {
            uVal_16 = uVal_14;
            if ((uVal_12 & 0x1c) == 0) goto LAB_1800b1ee7;
            goto LAB_1800b1fc0;
          }
        }
        lVal_13 = param_4[1];
      }
      lVal_13 = lVal_13 + uVal_12;
      param_4[1] = lVal_13;
      param_2 = param_2 + uVal_12;
    } while (param_2 != param_3);
  }
  *param_1 = param_4;
  return param_1;
}

// func_0x1800b2010
void func_0x1800b2010(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint8_t param_4, uint8_t param_5)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t *pU64_4;
  int64_t *pLong_5;
  uint8_t local_160 [8];
  int64_t *local_158;
  char local_150 [16];
  uint8_t *local_140;
  uint32_t local_134;
  uint8_t **local_130;
  uint8_t local_128 [16];
  uint32_t local_118;
  uint8_t local_110 [16];
  uint8_t local_100 [16];
  unkbyte9 local_f0;
  undefined7 uStack_e7;
  unkbyte9 Stack_e0;
  uint8_t **local_d0;
  uint8_t local_c8 [16];
  uint8_t *local_b8;
  uint8_t *local_b0;
  uint8_t local_a8 [16];
  uint8_t *local_98;
  uint8_t *local_90;
  uint64_t local_88;
  uint64_t *local_80;
  int64_t local_78;
  int64_t local_70;
  uint64_t local_68;
  uint8_t **local_60;
  uint8_t local_58 [16];
  char *local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVal_2 = func_0x180672de0(0x10);
  uVal_3 = func_0x180673ba0(1);
  local_b8 = local_c8;
  local_78 = (int64_t)&local_88 + 4;
  local_80 = &local_88;
  local_90 = local_a8 + 8;
  local_98 = local_a8;
  local_b0 = local_c8 + 8;
  *(uint64_t *)(lVal_2 + 8) = uVal_3;
  local_88 = 0;
  local_c8 = ZEXT816(0);
  local_a8 = ZEXT816(0);
  local_d0 = &PTR_LAB_1806b0bb0;
  local_140 = &DAT_1806b0998;
  local_128 = ZEXT816(0);
  local_118 = 0;
  local_110 = ZEXT816(0);
  local_100 = ZEXT816(0);
  local_f0 = SUB169(ZEXT816(0),0);
  uStack_e7 = 0;
  Stack_e0 = SUB169(ZEXT816(0),7);
  local_130 = &PTR_LAB_1806b09a0;
  local_134 = 0;
  local_70 = lVal_2;
  local_68 = param_1;
  func_0x1800964f0(&local_130,&local_d0,0);
  func_0x1800b29e0((int64_t)&local_140 + (int64_t)*(int *)(local_140 + 4),local_160,param_3);
  if (local_158 != (int64_t *)0x0) {
    pU64_4 = (uint64_t *)(**(func_ptr_t *)(*local_158 + 0x10))();
    if (pU64_4 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_4)(pU64_4,1);
    }
  }
  pLong_5 = (int64_t *)func_0x1800ace70(param_3);
  local_40 = *(uint64_t *)(local_100 + (int64_t)*(int *)(local_140 + 4) + 8);
  local_48 = (char *)((uint64_t)local_48 & 0xffffffffffffff00);
  (**(func_ptr_t *)(*pLong_5 + 0x18))
            (pLong_5,local_150,&local_48,(int64_t)&local_140 + (int64_t)*(int *)(local_140 + 4),
             0x20,param_2,param_4,param_5);
  if (local_150[0] != '\x01') {
    local_130 = &PTR_LAB_1806b0288;
    func_0x180673810(&local_130);
    lVal_2 = local_70;
    local_d0 = &PTR_LAB_1806b0210;
    if (local_70 != 0) {
      if (*(int64_t **)(local_70 + 8) != (int64_t *)0x0) {
        pU64_4 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(local_70 + 8) + 0x10))();
        if (pU64_4 != (uint64_t *)0x0) {
          (**(func_ptr_t *)*pU64_4)(pU64_4,1);
        }
      }
      thunk_FUN_180695dd0(lVal_2,0x10);
    }
    return;
  }
  local_60 = std::exception::vftable;
  local_58 = ZEXT816(0);
  local_48 = "failed to format time";
  local_40 = CONCAT71(local_40._1_7_,1);
  func_0x18067b3f0(&local_48,local_58);
  local_60 = &PTR_FUN_1806b0aa8;
  func_0x18067a120(&local_60,&DAT_180768d70);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800b2290
void Unwind_1800b2290(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800b22b0
void Unwind_1800b22b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t ***)(param_2 + 0x78) = &PTR_LAB_1806b0288;
  func_0x180673810(param_2 + 0x78);
  return;
}

// Unwind@1800b22f0
void Unwind_1800b22f0(uint64_t param_1,int64_t param_2)
{
  func_0x1800b2bb0(param_2 + 0xd8);
  return;
}

// Unwind@1800b2320
void Unwind_1800b2320(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800b2340
void Unwind_1800b2340(uint64_t param_1,int64_t param_2)
{
  *(uint8_t ***)(param_2 + 0x78) = &PTR_LAB_1806b0288;
  func_0x180673810(param_2 + 0x78);
  return;
}

// func_0x1800b2380
int64_t ** func_0x1800b2380(int64_t **param_1,int64_t *param_2,int64_t *param_3,int64_t param_4)
{
  uint32_t *pU64_1;
  int64_t lVal_2;
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
  char ch_13;
  int iVal_14;
  int64_t *pLong_15;
  uint64_t uVal_16;
  int64_t **ptr2_Long_17;
  char *fnPtr_18;
  char *_Str1;
  int64_t lVal_19;
  int64_t lVal_20;
  uint8_t *pU64_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  uint8_t *pU64_24;
  int64_t lVal_25;
  uint64_t uVal_26;
  char local_158 [64];
  int64_t local_118;
  uint8_t *local_110;
  uint64_t local_108;
  uint64_t local_100;
  func_ptr_t local_f8;
  uint8_t local_f0 [136];
  uint8_t **local_68;
  uint8_t local_60 [16];
  uint64_t local_50;
  char *local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083ec48) && (func_0x180672ec0(&DAT_18083ec48), DAT_18083ec48 == -1)) {
    DAT_18083ec40 = func_0x180673b70();
    _Init_thread_footer(&DAT_18083ec48);
  }
  lVal_19 = *(int64_t *)(param_4 + 8);
  lVal_20 = *(int64_t *)(DAT_18083ec40 + 8);
  if (lVal_19 != lVal_20) {
    if (lVal_19 == 0) {
      fnPtr_18 = "";
      ch_13 = DAT_180761155;
    }
    else {
      fnPtr_18 = (char *)(lVal_19 + 0x30);
      if (*(char **)(lVal_19 + 0x28) != (char *)0x0) {
        fnPtr_18 = *(char **)(lVal_19 + 0x28);
      }
      ch_13 = *fnPtr_18;
    }
    if ((ch_13 != '*') || (fnPtr_18[1] != '\0')) {
      fnPtr_18 = "";
      if (lVal_20 != 0) {
        fnPtr_18 = (char *)(lVal_20 + 0x30);
        if (*(char **)(lVal_20 + 0x28) != (char *)0x0) {
          fnPtr_18 = *(char **)(lVal_20 + 0x28);
        }
      }
      _Str1 = "";
      if (lVal_19 != 0) {
        _Str1 = (char *)(lVal_19 + 0x30);
        if (*(char **)(lVal_19 + 0x28) != (char *)0x0) {
          _Str1 = *(char **)(lVal_19 + 0x28);
        }
      }
      iVal_14 = strcmp(_Str1,fnPtr_18);
      if (iVal_14 == 0) goto LAB_1800b26df;
    }
    lVal_19 = *param_3;
    lVal_20 = param_3[1];
    pLong_15 = (int64_t *)func_0x1800b2e80(param_4);
    local_48 = (char *)0x0;
    local_50 = 0;
    iVal_14 = (**(func_ptr_t *)(*pLong_15 + 0x30))
                       (pLong_15,&local_48,lVal_19,lVal_20 + lVal_19,&local_50,local_158,&local_118,
                        &local_118);
    if (iVal_14 == 0) {
      local_108 = 0;
      local_f8 = func_0x1800b02d0;
      local_110 = local_f0;
      local_100 = 0x80;
      local_40 = local_118 - (int64_t)local_158 >> 1;
      local_48 = local_158;
      ch_13 = func_0x1800b34b0(&local_110,&local_48,0);
      if (ch_13 != '\0') {
        uVal_22 = local_108 + 1;
        if (local_100 < uVal_22) {
          (*local_f8)(&local_110);
          uVal_22 = local_108 + 1;
        }
        local_110[local_108] = 0;
        local_108 = uVal_22;
        if (uVal_22 != 1) {
          pU64_24 = local_110 + (uVal_22 - 1);
          lVal_19 = param_2[1];
          pU64_21 = local_110;
          do {
            uVal_26 = (int64_t)pU64_24 - (int64_t)pU64_21;
            uVal_22 = param_2[2];
            if (uVal_22 < uVal_26 + lVal_19) {
              (*(func_ptr_t )param_2[3])(param_2);
              lVal_19 = param_2[1];
              uVal_22 = param_2[2];
            }
            uVal_16 = uVal_22 - lVal_19;
            if (uVal_26 <= uVal_22 - lVal_19) {
              uVal_16 = uVal_26;
            }
            if (uVal_16 != 0) {
              lVal_25 = *param_2;
              lVal_20 = lVal_25 + lVal_19;
              if ((uVal_16 < 4) || ((uint64_t)(lVal_20 - (int64_t)pU64_21) < 0x20)) {
                uVal_22 = 0;
LAB_1800b25d8:
                uVal_23 = uVal_22;
                for (uVal_26 = uVal_16 & 3; uVal_26 != 0; uVal_26 = uVal_26 - 1) {
                  *(uint8_t *)(lVal_20 + uVal_23) = pU64_21[uVal_23];
                  uVal_23 = uVal_23 + 1;
                }
                if (uVal_22 - uVal_16 < 0xfffffffffffffffd) {
                  lVal_19 = lVal_19 + lVal_25;
                  do {
                    *(uint8_t *)(lVal_19 + uVal_23) = pU64_21[uVal_23];
                    *(uint8_t *)(lVal_19 + 1 + uVal_23) = pU64_21[uVal_23 + 1];
                    *(uint8_t *)(lVal_19 + 2 + uVal_23) = pU64_21[uVal_23 + 2];
                    *(uint8_t *)(lVal_19 + 3 + uVal_23) = pU64_21[uVal_23 + 3];
                    uVal_23 = uVal_23 + 4;
                  } while (uVal_16 != uVal_23);
                }
              }
              else if (uVal_16 < 0x20) {
                uVal_26 = 0;
LAB_1800b26b0:
                uVal_22 = uVal_16 & 0xfffffffffffffffc;
                do {
                  *(uint32_t *)(lVal_20 + uVal_26) = *(uint32_t *)(pU64_21 + uVal_26);
                  uVal_26 = uVal_26 + 4;
                } while (uVal_22 != uVal_26);
                if (uVal_16 != uVal_22) goto LAB_1800b25d8;
              }
              else {
                uVal_22 = uVal_16 & 0xffffffffffffffe0;
                uVal_26 = 0;
                do {
                  pU64_1 = (uint32_t *)(pU64_21 + uVal_26);
                  uVal_6 = pU64_1[1];
                  uVal_7 = pU64_1[2];
                  uVal_8 = pU64_1[3];
                  pU64_3 = (uint32_t *)(pU64_21 + uVal_26 + 0x10);
                  uVal_9 = *pU64_3;
                  uVal_10 = pU64_3[1];
                  uVal_11 = pU64_3[2];
                  uVal_12 = pU64_3[3];
                  pU64_3 = (uint32_t *)(lVal_25 + lVal_19 + uVal_26);
                  *pU64_3 = *pU64_1;
                  pU64_3[1] = uVal_6;
                  pU64_3[2] = uVal_7;
                  pU64_3[3] = uVal_8;
                  pU64_1 = (uint32_t *)(lVal_25 + lVal_19 + 0x10 + uVal_26);
                  *pU64_1 = uVal_9;
                  pU64_1[1] = uVal_10;
                  pU64_1[2] = uVal_11;
                  pU64_1[3] = uVal_12;
                  uVal_26 = uVal_26 + 0x20;
                } while (uVal_22 != uVal_26);
                if (uVal_16 != uVal_22) {
                  uVal_26 = uVal_22;
                  if ((uVal_16 & 0x1c) == 0) goto LAB_1800b25d8;
                  goto LAB_1800b26b0;
                }
              }
              lVal_19 = param_2[1];
            }
            lVal_19 = lVal_19 + uVal_16;
            param_2[1] = lVal_19;
            pU64_21 = pU64_21 + uVal_16;
          } while (pU64_21 != pU64_24);
        }
        *param_1 = param_2;
        if (local_110 != local_f0) {
          thunk_FUN_180695dd0(local_110);
          return param_1;
        }
        return param_1;
      }
    }
    else {
      func_0x1800ae690(&local_110,"failed to format time");
      func_0x18067a120(&local_110,&DAT_180768d70);
    }
    local_68 = std::exception::vftable;
    local_60 = ZEXT816(0);
    local_48 = "failed to format time";
    local_40 = CONCAT71(local_40._1_7_,1);
    func_0x18067b3f0(&local_48,local_60);
    local_68 = &PTR_FUN_1806b0aa8;
    func_0x18067a120(&local_68,&DAT_180768d70);
    fnPtr_5 = (func_ptr_t )swi(3);
    ptr2_Long_17 = (int64_t **)(*fnPtr_5)();
    return ptr2_Long_17;
  }
LAB_1800b26df:
  if (param_3[1] != 0) {
    lVal_19 = *param_3;
    lVal_25 = param_3[1] + lVal_19;
    lVal_20 = param_2[1];
    do {
      uVal_26 = lVal_25 - lVal_19;
      uVal_22 = param_2[2];
      if (uVal_22 < uVal_26 + lVal_20) {
        (*(func_ptr_t )param_2[3])(param_2);
        lVal_20 = param_2[1];
        uVal_22 = param_2[2];
      }
      uVal_16 = uVal_22 - lVal_20;
      if (uVal_26 <= uVal_22 - lVal_20) {
        uVal_16 = uVal_26;
      }
      if (uVal_16 != 0) {
        lVal_4 = *param_2;
        lVal_2 = lVal_4 + lVal_20;
        if ((uVal_16 < 4) || ((uint64_t)(lVal_2 - lVal_19) < 0x20)) {
          uVal_22 = 0;
LAB_1800b2767:
          uVal_23 = uVal_22;
          for (uVal_26 = uVal_16 & 3; uVal_26 != 0; uVal_26 = uVal_26 - 1) {
            *(uint8_t *)(lVal_2 + uVal_23) = *(uint8_t *)(lVal_19 + uVal_23);
            uVal_23 = uVal_23 + 1;
          }
          if (uVal_22 - uVal_16 < 0xfffffffffffffffd) {
            lVal_20 = lVal_20 + lVal_4;
            do {
              *(uint8_t *)(lVal_20 + uVal_23) = *(uint8_t *)(lVal_19 + uVal_23);
              *(uint8_t *)(lVal_20 + 1 + uVal_23) = *(uint8_t *)(lVal_19 + 1 + uVal_23);
              *(uint8_t *)(lVal_20 + 2 + uVal_23) = *(uint8_t *)(lVal_19 + 2 + uVal_23);
              *(uint8_t *)(lVal_20 + 3 + uVal_23) = *(uint8_t *)(lVal_19 + 3 + uVal_23);
              uVal_23 = uVal_23 + 4;
            } while (uVal_16 != uVal_23);
          }
        }
        else if (uVal_16 < 0x20) {
          uVal_26 = 0;
LAB_1800b2840:
          uVal_22 = uVal_16 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_2 + uVal_26) = *(uint32_t *)(lVal_19 + uVal_26);
            uVal_26 = uVal_26 + 4;
          } while (uVal_22 != uVal_26);
          if (uVal_16 != uVal_22) goto LAB_1800b2767;
        }
        else {
          uVal_22 = uVal_16 & 0xffffffffffffffe0;
          uVal_26 = 0;
          do {
            pU64_1 = (uint32_t *)(lVal_19 + uVal_26);
            uVal_6 = pU64_1[1];
            uVal_7 = pU64_1[2];
            uVal_8 = pU64_1[3];
            pU64_3 = (uint32_t *)(lVal_19 + 0x10 + uVal_26);
            uVal_9 = *pU64_3;
            uVal_10 = pU64_3[1];
            uVal_11 = pU64_3[2];
            uVal_12 = pU64_3[3];
            pU64_3 = (uint32_t *)(lVal_4 + lVal_20 + uVal_26);
            *pU64_3 = *pU64_1;
            pU64_3[1] = uVal_6;
            pU64_3[2] = uVal_7;
            pU64_3[3] = uVal_8;
            pU64_1 = (uint32_t *)(lVal_4 + lVal_20 + 0x10 + uVal_26);
            *pU64_1 = uVal_9;
            pU64_1[1] = uVal_10;
            pU64_1[2] = uVal_11;
            pU64_1[3] = uVal_12;
            uVal_26 = uVal_26 + 0x20;
          } while (uVal_22 != uVal_26);
          if (uVal_16 != uVal_22) {
            uVal_26 = uVal_22;
            if ((uVal_16 & 0x1c) == 0) goto LAB_1800b2767;
            goto LAB_1800b2840;
          }
        }
        lVal_20 = param_2[1];
      }
      lVal_20 = lVal_20 + uVal_16;
      param_2[1] = lVal_20;
      lVal_19 = lVal_19 + uVal_16;
    } while (lVal_19 != lVal_25);
  }
  *param_1 = param_2;
  return param_1;
}

// Unwind@1800b2960
void Unwind_1800b2960(void)
{
  func_0x180672f60(&DAT_18083ec48);
  return;
}

// Unwind@1800b29a0
void Unwind_1800b29a0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x88) != param_2 + 0xa8) {
    thunk_FUN_180695dd0();
  }
  return;
}

// func_0x1800b29e0
int64_t func_0x1800b29e0(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  uint64_t *pU64_4;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_1 + 0x40) + 8);
  *(int64_t **)(param_2 + 8) = pLong_1;
  (**(func_ptr_t *)(*pLong_1 + 8))();
  lVal_2 = *(int64_t *)(param_1 + 0x40);
  pLong_1 = *(int64_t **)(lVal_2 + 8);
  if (pLong_1 != *(int64_t **)(param_3 + 8)) {
    pU64_4 = (uint64_t *)(**(func_ptr_t *)(*pLong_1 + 0x10))();
    if (pU64_4 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_4)(pU64_4,1);
    }
    pLong_1 = *(int64_t **)(param_3 + 8);
    *(int64_t **)(lVal_2 + 8) = pLong_1;
    (**(func_ptr_t *)(*pLong_1 + 8))();
  }
  for (pU64_4 = *(uint64_t **)(param_1 + 0x38); pU64_4 != (uint64_t *)0x0;
      pU64_4 = (uint64_t *)*pU64_4) {
    (*(func_ptr_t )pU64_4[2])(1,param_1,*(uint32_t *)(pU64_4 + 1));
  }
  pLong_1 = *(int64_t **)(param_1 + 0x48);
  if (pLong_1 != (int64_t *)0x0) {
    pLong_3 = *(int64_t **)(pLong_1[0xc] + 8);
    (**(func_ptr_t *)(*pLong_3 + 8))();
    (**(func_ptr_t *)(*pLong_1 + 0x70))(pLong_1,param_3);
    lVal_2 = pLong_1[0xc];
    pLong_1 = *(int64_t **)(lVal_2 + 8);
    if (pLong_1 != *(int64_t **)(param_3 + 8)) {
      pU64_4 = (uint64_t *)(**(func_ptr_t *)(*pLong_1 + 0x10))();
      if (pU64_4 != (uint64_t *)0x0) {
        (**(func_ptr_t *)*pU64_4)(pU64_4,1);
      }
      pLong_1 = *(int64_t **)(param_3 + 8);
      *(int64_t **)(lVal_2 + 8) = pLong_1;
      (**(func_ptr_t *)(*pLong_1 + 8))();
    }
    pU64_4 = (uint64_t *)(**(func_ptr_t *)(*pLong_3 + 0x10))();
    if (pU64_4 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_4)(pU64_4,1);
    }
  }
  return param_2;
}

// Unwind@1800b2b10
void Unwind_1800b2b10(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(param_2 + 0x30) + 0x10))();
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@1800b2b50
void Unwind_1800b2b50(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(param_2 + 0x28) + 0x10))();
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  pU64_1 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(param_2 + 0x30) + 0x10))();
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// func_0x1800b2bb0
void func_0x1800b2bb0(uint64_t *param_1)
{
  int64_t lVal_1;
  uint64_t *pU64_2;
  
  *param_1 = &PTR_LAB_1806b0210;
  lVal_1 = param_1[0xc];
  if (lVal_1 != 0) {
    if (*(int64_t **)(lVal_1 + 8) != (int64_t *)0x0) {
      pU64_2 = (uint64_t *)(**(func_ptr_t *)(**(int64_t **)(lVal_1 + 8) + 0x10))();
      if (pU64_2 != (uint64_t *)0x0) {
        (**(func_ptr_t *)*pU64_2)(pU64_2,1);
      }
    }
    thunk_FUN_180695dd0(lVal_1,0x10);
    return;
  }
  return;
}

// func_0x1800b2e80
int64_t * func_0x1800b2e80(int64_t param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  undefined1 *pU64_4;
  int64_t *pLong_5;
  uint8_t local_a8 [104];
  int64_t *local_40;
  uint8_t local_34 [4];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  func_0x180673560(local_34,0);
  pLong_1 = DAT_18083ec50;
  if (DAT_180842000 == 0) {
    func_0x180673560(local_a8,0);
    if (DAT_180842000 == 0) {
      DAT_180842000 = (int64_t)DAT_180841fc0 + 1;
      DAT_180841fc0 = (int)DAT_180842000;
    }
    func_0x1806735b0(local_a8);
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_180842000 < *(uint64_t *)(lVal_3 + 0x18)) goto LAB_1800b2f10;
  }
  else {
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_180842000 < *(uint64_t *)(lVal_3 + 0x18)) {
LAB_1800b2f10:
      pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + DAT_180842000 * 8);
      if (pLong_5 != (int64_t *)0x0) goto LAB_1800b2fd2;
    }
  }
  uVal_2 = DAT_180842000;
  if ((((*(char *)(lVal_3 + 0x24) != '\x01') ||
       (lVal_3 = func_0x180673c90(), *(uint64_t *)(lVal_3 + 0x18) <= uVal_2)) ||
      (pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + uVal_2 * 8), pLong_5 == (int64_t *)0x0))
     && (pLong_5 = pLong_1, pLong_1 == (int64_t *)0x0)) {
    local_40 = (int64_t *)func_0x180672de0(0x40);
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (lVal_3 == 0) {
      pU64_4 = &DAT_180761155;
    }
    else {
      pU64_4 = (undefined1 *)(lVal_3 + 0x30);
      if (*(undefined1 **)(lVal_3 + 0x28) != (undefined1 *)0x0) {
        pU64_4 = *(undefined1 **)(lVal_3 + 0x28);
      }
    }
    func_0x18008c920(local_a8,pU64_4);
    pLong_1 = local_40;
    *(uint32_t *)(local_40 + 1) = 0;
    *local_40 = (int64_t)std::codecvt<wchar_t,char,struct__Mbstatet>::vftable;
    func_0x180675c50(local_40 + 2);
    func_0x18008ca70(local_a8);
    func_0x180673910(pLong_1);
    pLong_5 = local_40;
    (**(func_ptr_t *)(*local_40 + 8))(local_40);
    DAT_18083ec50 = pLong_5;
  }
LAB_1800b2fd2:
  func_0x1806735b0(local_34);
  return pLong_5;
}

// Unwind@1800b2ff0
void Unwind_1800b2ff0(uint64_t param_1,int64_t param_2)
{
  func_0x1806735b0(param_2 + 0x94);
  return;
}

// Unwind@1800b3020
void Unwind_1800b3020(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0x40);
  return;
}

// Unwind@1800b3050
void Unwind_1800b3050(uint64_t param_1,int64_t param_2)
{
  (**(func_ptr_t *)**(uint64_t **)(param_2 + 0x88))(*(uint64_t **)(param_2 + 0x88),1);
  return;
}

// func_0x1800b3080
uint32_t func_0x1800b3080(int64_t param_1)
{
  return *(uint32_t *)(param_1 + 0x14);
}

// func_0x1800b3090
bool func_0x1800b3090(int64_t param_1)
{
  return *(int *)(param_1 + 0x14) == 1;
}

// func_0x1800b30a0
uint64_t func_0x1800b30a0(int64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4, int64_t *param_5,int64_t param_6,int64_t param_7,int64_t *param_8)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint8_t auStack_78 [32];
  int64_t local_58;
  uint64_t local_48;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  local_48 = 0;
  *param_5 = param_3;
  *param_8 = param_6;
  lVal_3 = *param_5;
  if (lVal_3 != param_4) {
    uVal_4 = 1;
    do {
      if (param_6 == param_7) goto LAB_1800b315b;
      local_58 = param_1 + 0x10;
      iVal_2 = func_0x180675de0(param_6,lVal_3,param_4 - lVal_3,&local_48);
      if (iVal_2 == 0) {
        iVal_2 = 1;
      }
      else {
        if (iVal_2 == -2) goto LAB_1800b315b;
        if (iVal_2 == -1) {
          uVal_4 = 2;
          goto LAB_1800b315b;
        }
      }
      *param_5 = *param_5 + (int64_t)iVal_2;
      param_6 = *param_8 + 2;
      *param_8 = param_6;
      lVal_3 = *param_5;
    } while (lVal_3 != param_4);
  }
  uVal_4 = 0;
LAB_1800b315b:
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_78)) {
    return uVal_4;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_1)();
  return uVal_4;
}

// func_0x1800b3190
uint64_t func_0x1800b3190(int64_t param_1,uint64_t *param_2,int64_t param_3,uint16_t *param_4, int64_t *param_5,int64_t param_6,int64_t param_7,int64_t *param_8)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint16_t *pU64_4;
  uint64_t uVal_5;
  uint16_t *pU64_6;
  uint8_t auStack_78 [43];
  uint8_t local_4d [5];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  *param_5 = param_3;
  *param_8 = param_6;
  pU64_4 = (uint16_t *)*param_5;
  pU64_6 = param_4;
  if (pU64_4 != param_4) {
    do {
      pU64_6 = pU64_4;
      if (param_6 == param_7) break;
      if (param_7 - param_6 < 5) {
        uVal_1 = *param_2;
        uVal_3 = func_0x180675d60(local_4d,*pU64_4,param_2,param_1 + 0x10);
        if ((int)uVal_3 < 0) goto LAB_1800b3298;
        uVal_5 = (uint64_t)uVal_3;
        if (param_7 - *param_8 < (int64_t)uVal_5) {
          *param_2 = uVal_1;
          pU64_6 = (uint16_t *)*param_5;
          break;
        }
        func_0x1806aa960(*param_8,local_4d,uVal_5);
        *param_5 = *param_5 + 2;
      }
      else {
        uVal_3 = func_0x180675d60(param_6,*pU64_4,param_2,param_1 + 0x10);
        if ((int)uVal_3 < 0) {
LAB_1800b3298:
          uVal_5 = 2;
          goto LAB_1800b32b3;
        }
        *param_5 = *param_5 + 2;
        uVal_5 = (uint64_t)uVal_3;
      }
      param_6 = uVal_5 + *param_8;
      *param_8 = param_6;
      pU64_4 = (uint16_t *)*param_5;
      pU64_6 = param_4;
    } while (pU64_4 != param_4);
  }
  uVal_5 = (uint64_t)(pU64_6 != param_4);
LAB_1800b32b3:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_78)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_78);
    fnPtr_2 = (func_ptr_t )swi(3);
    uVal_5 = (*fnPtr_2)();
    return uVal_5;
  }
  return uVal_5;
}

// func_0x1800b32f0
uint64_t func_0x1800b32f0(int64_t param_1,uint64_t *param_2,int64_t param_3,int64_t param_4, int64_t *param_5)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint8_t auStack_58 [35];
  uint8_t local_35 [5];
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  *param_5 = param_3;
  uVal_3 = *param_2;
  iVal_2 = func_0x180675d60(local_35,0,param_2,param_1 + 0x10);
  if (iVal_2 < 1) {
    uVal_3 = 2;
  }
  else {
    uVal_4 = (uint64_t)(iVal_2 - 1);
    if (param_4 - *param_5 < (int64_t)uVal_4) {
      *param_2 = uVal_3;
      uVal_3 = 1;
    }
    else {
      uVal_3 = 0;
      if (iVal_2 != 1) {
        func_0x1806aa960(*param_5,local_35,uVal_4);
        uVal_3 = 0;
        *param_5 = *param_5 + uVal_4;
      }
    }
  }
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return uVal_3;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_3 = (*fnPtr_1)();
  return uVal_3;
}

// func_0x1800b33a0
int64_t func_0x1800b33a0(int64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4, int64_t param_5)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint8_t auStack_78 [32];
  int64_t local_58;
  uint8_t local_42 [2];
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  lVal_4 = param_3;
  if (param_3 != param_4 && param_5 != 0) {
    do {
      param_5 = param_5 + -1;
      local_58 = param_1 + 0x10;
      iVal_2 = func_0x180675de0(local_42,lVal_4,param_4 - lVal_4,param_2);
      if ((iVal_2 < 0) || (lVal_4 = lVal_4 + (uint64_t)(iVal_2 + (uint)(iVal_2 == 0)), param_5 == 0))
      break;
    } while (lVal_4 != param_4);
  }
  lVal_3 = 0x7fffffff;
  if (lVal_4 - param_3 < 0x7fffffff) {
    lVal_3 = lVal_4 - param_3;
  }
  if (DAT_18083cf40 == (local_40 ^ (uint64_t)auStack_78)) {
    return lVal_3;
  }
  func_0x180673080(local_40 ^ (uint64_t)auStack_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_1)();
  return lVal_4;
}

// func_0x1800b3480
uint64_t func_0x1800b3480(uint64_t param_1,uint64_t param_2)
{
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x40);
  }
  return param_1;
}

// func_0x1800b34b0
uint64_t func_0x1800b34b0(int64_t *param_1,ushort **param_2,int param_3)
{
  uint32_t *pU64_1;
  ushort *pU64_2;
  ushort uVal_3;
  int64_t lVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  ushort *pU64_12;
  int64_t lVal_13;
  byte bFlag_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  ushort *pU64_20;
  uint uVal_21;
  int64_t lVal_22;
  
  if (param_2[1] != (ushort *)0x0) {
    pU64_20 = *param_2;
    pU64_12 = pU64_20 + (int64_t)param_2[1];
    do {
      uVal_3 = *pU64_20;
      uVal_18 = (uint64_t)uVal_3;
      if ((uVal_3 & 0xf800) == 0xd800) {
        pU64_2 = pU64_20 + 1;
        if (((uVal_3 & 0xdc00) == 0xd800 && pU64_2 != pU64_12) && ((*pU64_2 & 0xfc00) == 0xdc00)) {
          uVal_18 = (uint64_t)((uint)uVal_3 * 0x400 + (uint)*pU64_2 + 0xfca02400);
          pU64_20 = pU64_2;
LAB_1800b3770:
          uVal_21 = (uint)uVal_18;
          if (uVal_21 < 0xd800 || (uVal_21 & 0xffffe000) == 0xe000) {
            lVal_13 = param_1[1];
            uVal_16 = lVal_13 + 1;
            if ((uint64_t)param_1[2] < uVal_16) {
              (*(func_ptr_t )param_1[3])(param_1);
              lVal_13 = param_1[1];
              uVal_16 = lVal_13 + 1;
            }
            bFlag_14 = (byte)(uVal_18 >> 0xc) | 0xe0;
          }
          else {
            if (0xfffff < uVal_21 - 0x10000) {
              return 0;
            }
            lVal_13 = param_1[1];
            uVal_16 = lVal_13 + 1;
            if ((uint64_t)param_1[2] < uVal_16) {
              (*(func_ptr_t )param_1[3])(param_1);
              lVal_13 = param_1[1];
              uVal_16 = lVal_13 + 1;
            }
            param_1[1] = uVal_16;
            *(byte *)(*param_1 + lVal_13) = (byte)(uVal_18 >> 0x12) | 0xf0;
            lVal_13 = param_1[1];
            uVal_16 = lVal_13 + 1;
            if ((uint64_t)param_1[2] < uVal_16) {
              (*(func_ptr_t )param_1[3])(param_1);
              lVal_13 = param_1[1];
              uVal_16 = lVal_13 + 1;
            }
            bFlag_14 = (byte)(uVal_18 >> 0xc) & 0x3f | 0x80;
          }
          param_1[1] = uVal_16;
          *(byte *)(*param_1 + lVal_13) = bFlag_14;
          lVal_13 = param_1[1];
          uVal_16 = lVal_13 + 1;
          if ((uint64_t)param_1[2] < uVal_16) {
            (*(func_ptr_t )param_1[3])(param_1);
            lVal_13 = param_1[1];
            uVal_16 = lVal_13 + 1;
          }
          bFlag_14 = (byte)(uVal_18 >> 6) & 0x3f | 0x80;
LAB_1800b3858:
          param_1[1] = uVal_16;
          *(byte *)(*param_1 + lVal_13) = bFlag_14;
          uVal_18 = (uint64_t)((byte)uVal_18 & 0x3f | 0x80);
          goto LAB_1800b386b;
        }
        if (param_3 == 0) {
          return 0;
        }
        lVal_13 = param_1[1];
        lVal_22 = 0;
        do {
          uVal_16 = 3 - lVal_22;
          uVal_18 = param_1[2];
          if (uVal_18 < lVal_13 + uVal_16) {
            (*(func_ptr_t )param_1[3])(param_1);
            lVal_13 = param_1[1];
            uVal_18 = param_1[2];
          }
          uVal_15 = uVal_18 - lVal_13;
          if (uVal_16 <= uVal_18 - lVal_13) {
            uVal_15 = uVal_16;
          }
          if (uVal_15 != 0) {
            lVal_4 = *param_1;
            if ((uVal_15 < 4) || (((lVal_4 + lVal_13) - lVal_22) - 0x1806edc9aU < 0x20)) {
              uVal_18 = 0;
LAB_1800b365a:
              uVal_19 = uVal_18;
              for (uVal_16 = uVal_15 & 3; uVal_16 != 0; uVal_16 = uVal_16 - 1) {
                *(uint8_t *)(lVal_4 + lVal_13 + uVal_19) =
                     *(uint8_t *)((int64_t)&DAT_1806edc9a + uVal_19 + lVal_22);
                uVal_19 = uVal_19 + 1;
              }
              if (uVal_18 - uVal_15 < 0xfffffffffffffffd) {
                do {
                  *(uint32_t *)(lVal_13 + lVal_4 + uVal_19) =
                       *(uint32_t *)((int64_t)&DAT_1806edc9a + uVal_19 + lVal_22);
                  uVal_19 = uVal_19 + 4;
                } while (uVal_15 != uVal_19);
              }
            }
            else if (uVal_15 < 0x20) {
              uVal_16 = 0;
LAB_1800b3726:
              uVal_18 = uVal_15 & 0xfffffffffffffffc;
              lVal_17 = 0;
              do {
                *(uint32_t *)(lVal_13 + uVal_16 + lVal_4 + lVal_17) =
                     *(uint32_t *)((int64_t)&DAT_1806edc9a + lVal_17 + uVal_16 + lVal_22);
                lVal_17 = lVal_17 + 4;
              } while (uVal_18 - uVal_16 != lVal_17);
              if (uVal_15 != uVal_18) goto LAB_1800b365a;
            }
            else {
              uVal_18 = uVal_15 & 0xffffffffffffffe0;
              uVal_16 = 0;
              do {
                lVal_17 = lVal_22 + uVal_16;
                uVal_5 = *(uint32_t *)(&PNG_1806edc9e.field_0x0 + lVal_17);
                uVal_6 = *(uint32_t *)(&PNG_1806edc9e.field_0x4 + lVal_17);
                uVal_7 = *(uint32_t *)(&PNG_1806edc9e.field_0x8 + lVal_17);
                pU64_1 = (uint32_t *)(lVal_22 + 0x1806edcaa + uVal_16);
                uVal_8 = *pU64_1;
                uVal_9 = pU64_1[1];
                uVal_10 = pU64_1[2];
                uVal_11 = pU64_1[3];
                pU64_1 = (uint32_t *)(lVal_4 + lVal_13 + uVal_16);
                *pU64_1 = *(uint32_t *)((int64_t)&DAT_1806edc9a + lVal_17);
                pU64_1[1] = uVal_5;
                pU64_1[2] = uVal_6;
                pU64_1[3] = uVal_7;
                pU64_1 = (uint32_t *)(lVal_4 + lVal_13 + 0x10 + uVal_16);
                *pU64_1 = uVal_8;
                pU64_1[1] = uVal_9;
                pU64_1[2] = uVal_10;
                pU64_1[3] = uVal_11;
                uVal_16 = uVal_16 + 0x20;
              } while (uVal_18 != uVal_16);
              if (uVal_15 != uVal_18) {
                uVal_16 = uVal_18;
                if ((uVal_15 & 0x1c) == 0) goto LAB_1800b365a;
                goto LAB_1800b3726;
              }
            }
            lVal_13 = param_1[1];
          }
          lVal_13 = lVal_13 + uVal_15;
          param_1[1] = lVal_13;
          lVal_22 = lVal_22 + uVal_15;
        } while (lVal_22 != 3);
      }
      else {
        if (0x7f < uVal_3) {
          if (0x7ff < uVal_3) goto LAB_1800b3770;
          lVal_13 = param_1[1];
          uVal_16 = lVal_13 + 1;
          if ((uint64_t)param_1[2] < uVal_16) {
            (*(func_ptr_t )param_1[3])(param_1);
            lVal_13 = param_1[1];
            uVal_16 = lVal_13 + 1;
          }
          bFlag_14 = (byte)(uVal_3 >> 6) | 0xc0;
          goto LAB_1800b3858;
        }
LAB_1800b386b:
        lVal_13 = param_1[1];
        uVal_16 = lVal_13 + 1;
        if ((uint64_t)param_1[2] < uVal_16) {
          (*(func_ptr_t )param_1[3])(param_1);
          lVal_13 = param_1[1];
          uVal_16 = lVal_13 + 1;
        }
        param_1[1] = uVal_16;
        *(char *)(*param_1 + lVal_13) = (char)uVal_18;
      }
      pU64_20 = pU64_20 + 1;
      pU64_12 = *param_2 + (int64_t)param_2[1];
    } while (pU64_20 != pU64_12);
  }
  return 1;
}

// func_0x1800b38b0
int64_t ** func_0x1800b38b0(int64_t **param_1,int64_t *param_2,uint64_t param_3)
{
  bool bFlag_1;
  uint64_t uVal_2;
  uint8_t *pU64_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  
  uVal_9 = -param_3;
  if (0 < (int64_t)param_3) {
    uVal_9 = param_3;
  }
  lVal_7 = 0x3f;
  if ((uVal_9 | 1) != 0) {
    for (; (uVal_9 | 1) >> lVal_7 == 0; lVal_7 = lVal_7 + -1) {
    }
  }
  uVal_4 = (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_7] -
          (uint64_t)
          (uVal_9 < *(uint64_t *)(&DAT_1806b0b00 + (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_7] * 8));
  lVal_7 = uVal_4 - ((int64_t)param_3 >> 0x3f);
  uVal_5 = param_2[1];
  uVal_2 = param_2[2];
  uVal_8 = lVal_7 + uVal_5;
  if (uVal_2 < uVal_8) {
    (*(func_ptr_t )param_2[3])(param_2);
    uVal_5 = param_2[1];
    uVal_2 = param_2[2];
    uVal_8 = lVal_7 + uVal_5;
    uVal_6 = uVal_5;
    if (uVal_2 < uVal_8) goto LAB_1800b39b4;
  }
  param_2[1] = uVal_8;
  uVal_6 = uVal_8;
  if (*param_2 != 0) {
    pU64_3 = (uint8_t *)(*param_2 + uVal_5);
    if ((int64_t)param_3 < 0) {
      *pU64_3 = 0x2d;
      pU64_3 = pU64_3 + 1;
    }
    if (99 < uVal_9) {
      do {
        uVal_4 = (uint64_t)((int)uVal_4 - 2);
        uVal_8 = uVal_9 / 100;
        *(uint16_t *)(pU64_3 + uVal_4) = *(uint16_t *)(&DAT_1806afb50 + (uVal_9 % 100) * 2);
        bFlag_1 = 9999 < uVal_9;
        uVal_9 = uVal_8;
      } while (bFlag_1);
    }
    if (uVal_9 < 10) {
      pU64_3[(int)uVal_4 - 1] = (byte)uVal_9 | 0x30;
    }
    else {
      *(uint16_t *)(pU64_3 + ((int)uVal_4 - 2)) = *(uint16_t *)(&DAT_1806afb50 + uVal_9 * 2);
    }
    *param_1 = param_2;
    return param_1;
  }
LAB_1800b39b4:
  if ((int64_t)param_3 < 0) {
    uVal_8 = uVal_6 + 1;
    if (uVal_2 < uVal_8) {
      (*(func_ptr_t )param_2[3])(param_2);
      uVal_6 = param_2[1];
      uVal_8 = uVal_6 + 1;
    }
    param_2[1] = uVal_8;
    *(uint8_t *)(*param_2 + uVal_6) = 0x2d;
  }
  func_0x1800b1c90(param_1,param_2,uVal_9,uVal_4 & 0xffffffff);
  return param_1;
}

// func_0x1800b3a30
void func_0x1800b3a30(int64_t param_1,uint param_2,int param_3)
{
  uint8_t uVal_1;
  char ch_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  param_2 = param_2 % 100;
  if (param_2 < 10) {
    pLong_3 = *(int64_t **)(param_1 + 0x10);
    if (param_3 != 1) {
      lVal_4 = pLong_3[1];
      uVal_5 = lVal_4 + 1;
      if ((uint64_t)pLong_3[2] < uVal_5) {
        (*(func_ptr_t )pLong_3[3])(pLong_3);
        lVal_4 = pLong_3[1];
        uVal_5 = lVal_4 + 1;
      }
      pLong_3[1] = uVal_5;
      *(byte *)(*pLong_3 + lVal_4) = (param_3 != 2) << 4 | 0x20;
    }
    *(int64_t **)(param_1 + 0x10) = pLong_3;
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
    if ((uint64_t)pLong_3[2] < uVal_5) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_4 = pLong_3[1];
      uVal_5 = lVal_4 + 1;
    }
    pLong_3[1] = uVal_5;
    *(byte *)(*pLong_3 + lVal_4) = (byte)param_2 | 0x30;
  }
  else {
    uVal_1 = (&DAT_1806afb50)[(uint64_t)param_2 * 2];
    pLong_3 = *(int64_t **)(param_1 + 0x10);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
    if ((uint64_t)pLong_3[2] < uVal_5) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_4 = pLong_3[1];
      uVal_5 = lVal_4 + 1;
    }
    pLong_3[1] = uVal_5;
    *(uint8_t *)(*pLong_3 + lVal_4) = uVal_1;
    ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            [(uint64_t)param_2 * 2];
    pLong_3 = *(int64_t **)(param_1 + 0x10);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
    if ((uint64_t)pLong_3[2] < uVal_5) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_4 = pLong_3[1];
      uVal_5 = lVal_4 + 1;
    }
    pLong_3[1] = uVal_5;
    *(char *)(*pLong_3 + lVal_4) = ch_2;
  }
  return;
}

// func_0x1800b3b40
void func_0x1800b3b40(int64_t **param_1,int64_t param_2,uint param_3)
{
  byte bFlag_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  int64_t **ptr2_Long_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int iVal_8;
  uint uVal_9;
  uint uVal_10;
  int iVal_11;
  uint64_t uVal_12;
  uint uVal_13;
  uint8_t auStack_88 [40];
  int64_t **pplStack_60;
  uint uStack_54;
  int64_t *plStack_50;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_88;
  uVal_12 = param_2 % 10000000;
  lVal_5 = 0x3f;
  if ((uVal_12 | 1) != 0) {
    for (; (uVal_12 | 1) >> lVal_5 == 0; lVal_5 = lVal_5 + -1) {
    }
  }
  bFlag_1 = (&DAT_1806b0ac0)[lVal_5];
  uVal_7 = *(uint64_t *)(&DAT_1806b0b00 + (uint64_t)bFlag_1 * 8);
  iVal_8 = (uint)bFlag_1 - (uint)(uVal_12 < uVal_7);
  uVal_9 = 0;
  if (iVal_8 < 7) {
    uVal_9 = 7 - iVal_8;
  }
  if ((int)param_3 < 0) {
    pLong_2 = *param_1;
    lVal_5 = pLong_2[1];
    uVal_7 = lVal_5 + 1;
    if ((uint64_t)pLong_2[2] < uVal_7) {
      (*(func_ptr_t )pLong_2[3])(pLong_2);
      lVal_5 = pLong_2[1];
      uVal_7 = lVal_5 + 1;
    }
    pLong_2[1] = uVal_7;
    *(uint8_t *)(*pLong_2 + lVal_5) = 0x2e;
    pLong_2 = *param_1;
    if (iVal_8 < 7) {
      do {
        lVal_5 = pLong_2[1];
        uVal_7 = lVal_5 + 1;
        if ((uint64_t)pLong_2[2] < uVal_7) {
          (*(func_ptr_t )pLong_2[3])(pLong_2);
          lVal_5 = pLong_2[1];
          uVal_7 = lVal_5 + 1;
        }
        pLong_2[1] = uVal_7;
        *(uint8_t *)(*pLong_2 + lVal_5) = 0x30;
        uVal_9 = uVal_9 - 1;
      } while (uVal_9 != 0);
    }
    *param_1 = pLong_2;
    func_0x1800b1c90(&plStack_50,pLong_2,uVal_12,iVal_8);
    *param_1 = plStack_50;
    goto LAB_1800b3e1f;
  }
  if (param_3 == 0) goto LAB_1800b3e1f;
  pLong_2 = *param_1;
  lVal_5 = pLong_2[1];
  uVal_6 = lVal_5 + 1;
  pplStack_60 = param_1;
  if ((uint64_t)pLong_2[2] < uVal_6) {
    (*(func_ptr_t )pLong_2[3])(pLong_2);
    lVal_5 = pLong_2[1];
    uVal_6 = lVal_5 + 1;
  }
  pLong_2[1] = uVal_6;
  *(uint8_t *)(*pLong_2 + lVal_5) = 0x2e;
  uVal_10 = param_3;
  if (uVal_9 < param_3) {
    uVal_10 = uVal_9;
  }
  iVal_11 = param_3 - uVal_10;
  pLong_2 = *pplStack_60;
  uVal_13 = uVal_10;
  ptr2_Long_4 = pplStack_60;
  uStack_54 = param_3;
  while (pplStack_60 = ptr2_Long_4, uVal_9 != 0) {
    lVal_5 = pLong_2[1];
    uVal_6 = lVal_5 + 1;
    if ((uint64_t)pLong_2[2] < uVal_6) {
      (*(func_ptr_t )pLong_2[3])(pLong_2);
      lVal_5 = pLong_2[1];
      uVal_6 = lVal_5 + 1;
    }
    pLong_2[1] = uVal_6;
    *(uint8_t *)(*pLong_2 + lVal_5) = 0x30;
    uVal_13 = uVal_13 - 1;
    ptr2_Long_4 = pplStack_60;
    uVal_9 = uVal_13;
  }
  *ptr2_Long_4 = pLong_2;
  if (iVal_8 <= iVal_11) {
    if (uVal_12 != 0) {
      func_0x1800b1c90(&plStack_50,pLong_2,uVal_12,iVal_8);
      *pplStack_60 = plStack_50;
      iVal_11 = iVal_11 - iVal_8;
      pLong_2 = plStack_50;
      ptr2_Long_4 = pplStack_60;
    }
    pplStack_60 = ptr2_Long_4;
    if (0 < iVal_11) {
      do {
        lVal_5 = pLong_2[1];
        uVal_12 = lVal_5 + 1;
        if ((uint64_t)pLong_2[2] < uVal_12) {
          (*(func_ptr_t )pLong_2[3])(pLong_2);
          lVal_5 = pLong_2[1];
          uVal_12 = lVal_5 + 1;
        }
        pLong_2[1] = uVal_12;
        *(uint8_t *)(*pLong_2 + lVal_5) = 0x30;
        iVal_11 = iVal_11 + -1;
      } while (iVal_11 != 0);
    }
    *ptr2_Long_4 = pLong_2;
    goto LAB_1800b3e1f;
  }
  uVal_9 = iVal_8 - iVal_11;
  if (uVal_9 == 0) {
    uVal_6 = 1;
    if (uVal_12 == 0) goto LAB_1800b3e1f;
  }
  else {
    uVal_6 = 1;
    if (uStack_54 - ((uVal_10 - (uVal_12 < uVal_7)) + (uint)bFlag_1) < 0xfffffff9) {
      uVal_10 = uVal_9 & 0xfffffff8;
      do {
        uVal_6 = uVal_6 * 100000000;
        uVal_10 = uVal_10 - 8;
      } while (uVal_10 != 0);
      if ((uVal_9 & 7) != 0) goto LAB_1800b3cc0;
    }
    else {
LAB_1800b3cc0:
      iVal_8 = -(uVal_9 & 7);
      do {
        uVal_6 = uVal_6 * 10;
        iVal_8 = iVal_8 + 1;
      } while (iVal_8 != 0);
    }
    if (uVal_12 < uVal_6) goto LAB_1800b3e1f;
  }
  if ((uVal_12 | uVal_6) >> 0x20 == 0) {
    uVal_12 = (uVal_12 & 0xffffffff) / (uVal_6 & 0xffffffff);
  }
  else {
    uVal_12 = uVal_12 / uVal_6;
  }
  func_0x1800b1c90(&plStack_50,pLong_2,uVal_12,iVal_11);
  *ptr2_Long_4 = plStack_50;
LAB_1800b3e1f:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_88)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_88);
    fnPtr_3 = (func_ptr_t )swi(3);
    (*fnPtr_3)();
    return;
  }
  return;
}

// func_0x1800b3e60
void func_0x1800b3e60(int64_t param_1,uint64_t param_2,int param_3)
{
  uint8_t uVal_1;
  char ch_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((int64_t)param_2 < 0) {
    if ((uint64_t)pLong_3[2] < uVal_5) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_4 = pLong_3[1];
      uVal_5 = lVal_4 + 1;
    }
    pLong_3[1] = uVal_5;
    *(uint8_t *)(*pLong_3 + lVal_4) = 0x2d;
    param_2 = -param_2;
  }
  else {
    if ((uint64_t)pLong_3[2] < uVal_5) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_4 = pLong_3[1];
      uVal_5 = lVal_4 + 1;
    }
    pLong_3[1] = uVal_5;
    *(uint8_t *)(*pLong_3 + lVal_4) = 0x2b;
  }
  uVal_6 = (uint64_t)
          (uint)((int)(param_2 / 0xe10) + (int)((param_2 / 0xe10 & 0xffffffff) / 100) * -100);
  uVal_1 = (&DAT_1806afb50)[uVal_6 * 2];
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
  }
  pLong_3[1] = uVal_5;
  *(uint8_t *)(*pLong_3 + lVal_4) = uVal_1;
  ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [uVal_6 * 2];
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
  }
  pLong_3[1] = uVal_5;
  *(char *)(*pLong_3 + lVal_4) = ch_2;
  if (param_3 != 0) {
    pLong_3 = *(int64_t **)(param_1 + 0x10);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
    if ((uint64_t)pLong_3[2] < uVal_5) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_4 = pLong_3[1];
      uVal_5 = lVal_4 + 1;
    }
    pLong_3[1] = uVal_5;
    *(uint8_t *)(*pLong_3 + lVal_4) = 0x3a;
  }
  uVal_6 = (param_2 / 0x3c) % 0x3c;
  uVal_1 = (&DAT_1806afb50)[uVal_6 * 2];
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
  }
  pLong_3[1] = uVal_5;
  *(uint8_t *)(*pLong_3 + lVal_4) = uVal_1;
  ch_2 = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          [uVal_6 * 2];
  pLong_3 = *(int64_t **)(param_1 + 0x10);
  lVal_4 = pLong_3[1];
  uVal_5 = lVal_4 + 1;
  if ((uint64_t)pLong_3[2] < uVal_5) {
    (*(func_ptr_t )pLong_3[3])(pLong_3);
    lVal_4 = pLong_3[1];
    uVal_5 = lVal_4 + 1;
  }
  pLong_3[1] = uVal_5;
  *(char *)(*pLong_3 + lVal_4) = ch_2;
  return;
}

// func_0x1800b4040
void func_0x1800b4040(int64_t **param_1,int64_t *param_2,byte **param_3)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  byte bFlag_3;
  int64_t lVal_4;
  func_ptr_t fnPtr_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  char ch_13;
  uint uVal_14;
  uint64_t uVal_15;
  uint *pU64_16;
  uint64_t uVal_17;
  byte *pU8_18;
  byte *pU8_19;
  int64_t lVal_20;
  int64_t lVal_21;
  byte *pU8_22;
  uint64_t uVal_23;
  uint64_t uVal_24;
  byte *pU8_25;
  uint uVal_26;
  uint *pU64_27;
  byte *pU8_28;
  byte *pU8_29;
  uint8_t auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  int64_t **local_78;
  uint *local_70;
  byte *local_68;
  byte *local_60;
  uint local_58;
  uint local_50 [2];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_a8;
  lVal_21 = param_2[1];
  uVal_15 = lVal_21 + 1;
  local_78 = param_1;
  if ((uint64_t)param_2[2] < uVal_15) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_21 = param_2[1];
    uVal_15 = lVal_21 + 1;
  }
  param_2[1] = uVal_15;
  *(uint8_t *)(*param_2 + lVal_21) = 0x22;
  pU8_25 = *param_3;
  pU8_29 = param_3[1] + (int64_t)pU8_25;
  local_80 = pU8_29;
  do {
    local_60 = (byte *)0x0;
    local_58 = 0;
    uVal_15 = (int64_t)pU8_29 - (int64_t)pU8_25;
    pU8_28 = pU8_25;
    local_68 = pU8_29;
    if ((uVal_15 < 4) || ((int64_t)uVal_15 < 4)) {
      uVal_17 = (int64_t)pU8_29 - (int64_t)pU8_25;
    }
    else {
      local_88 = pU8_25 + (uVal_15 - 3);
LAB_1800b4103:
      do {
        uVal_14 = (uint)(*pU8_28 >> 3);
        lVal_21 = (int64_t)(char)(&DAT_180761126)[uVal_14];
        uVal_15 = (uint64_t)((0x80ff0000U >> uVal_14 & 1) != 0);
        uVal_14 = (pU8_28[3] & 0x3f |
                 (pU8_28[2] & 0x3f) << 6 |
                 (pU8_28[1] & 0x3f) << 0xc |
                 ((uint)*pU8_28 & *(uint *)(&DAT_1806b0d70 + lVal_21 * 4)) << 0x12) >>
                 ((&DAT_1806b0db0)[lVal_21 * 4] & 0x1f);
        uVal_26 = ((pU8_28[1] >> 2 & 0xfffffff0) + (uint)(pU8_28[2] >> 6) * 4 |
                  (uint)(pU8_28[3] >> 6) |
                  (uint)(uVal_14 < *(uint *)(&DAT_1806b0d90 + lVal_21 * 4)) << 6 |
                  (uint)(0x10ffff < uVal_14) << 8 | (uint)((uVal_14 & 0x7ffff800) == 0xd800) << 7) ^
                 0x2a;
        bFlag_3 = (&DAT_1806b0dd0)[lVal_21 * 4];
        if (uVal_26 >> (bFlag_3 & 0x1f) == 0) {
          lVal_20 = uVal_15 + lVal_21;
          if ((((0x1f < uVal_14) && (uVal_14 != 0x22)) && (uVal_14 != 0x5c)) && (uVal_14 != 0x7f))
          goto LAB_1800b4228;
LAB_1800b42be:
          local_60 = pU8_28 + lVal_20;
          pU8_29 = local_80;
          local_68 = pU8_28;
          local_58 = uVal_14;
          goto LAB_1800b4570;
        }
        uVal_14 = 0xffffffff;
        lVal_20 = 1;
LAB_1800b4228:
        ch_13 = func_0x180640e10(uVal_14);
        if (ch_13 == '\0') goto LAB_1800b42be;
        if (uVal_26 >> (bFlag_3 & 0x1f) == 0) {
          pU8_28 = pU8_28 + lVal_21 + uVal_15;
          if (local_88 <= pU8_28) break;
          goto LAB_1800b4103;
        }
        pU8_28 = pU8_28 + 1;
      } while (pU8_28 < local_88);
      uVal_15 = (int64_t)local_80 - (int64_t)pU8_28;
      uVal_17 = (int64_t)local_80 - (int64_t)pU8_28;
      pU8_29 = local_80;
    }
    if (uVal_17 != 0) {
      local_50[1] = local_50[1] & 0xff000000;
      local_50[0] = 0;
      pU64_16 = local_50;
      pU8_22 = pU8_28;
      if ((uint64_t)((int64_t)local_50 - (int64_t)pU8_28) < 0x20 || uVal_17 < 4) {
LAB_1800b434b:
        uVal_14 = (int)pU8_29 - (int)pU8_22 & 7;
        uVal_17 = (uint64_t)uVal_14;
        pU8_19 = pU8_22;
        pU8_18 = pU8_22;
        if (uVal_14 != 0) {
          do {
            pU8_19 = pU8_18 + 1;
            *(byte *)pU64_16 = *pU8_18;
            pU64_16 = (uint *)((int64_t)pU64_16 + 1);
            uVal_17 = uVal_17 - 1;
            pU8_18 = pU8_19;
          } while (uVal_17 != 0);
        }
        if ((uint64_t)((int64_t)pU8_22 - (int64_t)pU8_29) < 0xfffffffffffffff9) {
          lVal_21 = 0;
          do {
            *(byte *)((int64_t)pU64_16 + lVal_21) = pU8_19[lVal_21];
            *(byte *)((int64_t)pU64_16 + lVal_21 + 1) = pU8_19[lVal_21 + 1];
            *(byte *)((int64_t)pU64_16 + lVal_21 + 2) = pU8_19[lVal_21 + 2];
            *(byte *)((int64_t)pU64_16 + lVal_21 + 3) = pU8_19[lVal_21 + 3];
            *(byte *)((int64_t)pU64_16 + lVal_21 + 4) = pU8_19[lVal_21 + 4];
            *(byte *)((int64_t)pU64_16 + lVal_21 + 5) = pU8_19[lVal_21 + 5];
            *(byte *)((int64_t)pU64_16 + lVal_21 + 6) = pU8_19[lVal_21 + 6];
            *(byte *)((int64_t)pU64_16 + lVal_21 + 7) = pU8_19[lVal_21 + 7];
            lVal_20 = lVal_21 + 8;
            lVal_21 = lVal_21 + 8;
          } while (pU8_19 + lVal_20 != pU8_29);
        }
      }
      else if (uVal_17 < 0x20) {
        uVal_24 = 0;
LAB_1800b4310:
        uVal_23 = uVal_17 & 0xfffffffffffffffc;
        pU8_22 = pU8_28 + uVal_23;
        pU64_16 = (uint *)((int64_t)local_50 + uVal_23);
        do {
          *(uint32_t *)((int64_t)local_50 + uVal_24) = *(uint32_t *)(pU8_28 + uVal_24);
          uVal_24 = uVal_24 + 4;
        } while (uVal_23 != uVal_24);
        if (uVal_17 != uVal_23) goto LAB_1800b434b;
      }
      else {
        uVal_24 = uVal_17 & 0xffffffffffffffe0;
        uVal_23 = 0;
        do {
          pU64_1 = (uint32_t *)(pU8_28 + uVal_23);
          uVal_6 = pU64_1[1];
          uVal_7 = pU64_1[2];
          uVal_8 = pU64_1[3];
          pU64_2 = (uint32_t *)(pU8_28 + uVal_23 + 0x10);
          uVal_9 = *pU64_2;
          uVal_10 = pU64_2[1];
          uVal_11 = pU64_2[2];
          uVal_12 = pU64_2[3];
          *(uint32_t *)((int64_t)local_50 + uVal_23) = *pU64_1;
          *(uint32_t *)((int64_t)local_50 + uVal_23 + 4) = uVal_6;
          *(uint32_t *)((int64_t)&local_48 + uVal_23) = uVal_7;
          *(uint32_t *)((int64_t)&local_48 + uVal_23 + 4) = uVal_8;
          *(uint32_t *)(&stack0xffffffffffffffc0 + uVal_23) = uVal_9;
          *(uint32_t *)(&stack0xffffffffffffffc4 + uVal_23) = uVal_10;
          *(uint32_t *)(&stack0xffffffffffffffc8 + uVal_23) = uVal_11;
          *(uint32_t *)(&stack0xffffffffffffffcc + uVal_23) = uVal_12;
          uVal_23 = uVal_23 + 0x20;
        } while (uVal_24 != uVal_23);
        if (uVal_17 != uVal_24) {
          if ((uVal_17 & 0x1c) == 0) {
            pU8_22 = pU8_28 + uVal_24;
            pU64_16 = (uint *)((int64_t)local_50 + uVal_24);
            goto LAB_1800b434b;
          }
          goto LAB_1800b4310;
        }
      }
      local_70 = (uint *)((int64_t)local_50 + uVal_15);
      pU64_16 = local_50;
      do {
        uVal_14 = (uint)(*(byte *)pU64_16 >> 3);
        lVal_21 = (int64_t)(char)(&DAT_180761126)[uVal_14];
        uVal_15 = (uint64_t)((0x80ff0000U >> uVal_14 & 1) != 0);
        uVal_26 = (*(byte *)((int64_t)pU64_16 + 3) & 0x3f |
                 (*(byte *)((int64_t)pU64_16 + 2) & 0x3f) << 6 |
                 (*(byte *)((int64_t)pU64_16 + 1) & 0x3f) << 0xc |
                 ((uint)*(byte *)pU64_16 & *(uint *)(&DAT_1806b0d70 + lVal_21 * 4)) << 0x12) >>
                 ((&DAT_1806b0db0)[lVal_21 * 4] & 0x1f);
        uVal_14 = ((*(byte *)((int64_t)pU64_16 + 1) >> 2 & 0xfffffff0) +
                  (uint)(*(byte *)((int64_t)pU64_16 + 2) >> 6) * 4 |
                  (uint)(*(byte *)((int64_t)pU64_16 + 3) >> 6) |
                  (uint)(uVal_26 < *(uint *)(&DAT_1806b0d90 + lVal_21 * 4)) << 6 |
                  (uint)(0x10ffff < uVal_26) << 8 | (uint)((uVal_26 & 0x7ffff800) == 0xd800) << 7) ^
                 0x2a;
        bFlag_3 = (&DAT_1806b0dd0)[lVal_21 * 4];
        local_88 = pU8_28;
        if (uVal_14 >> (bFlag_3 & 0x1f) == 0) {
          lVal_20 = lVal_21 + uVal_15;
          if (((0x1f < uVal_26) && (uVal_26 != 0x22)) && ((uVal_26 != 0x5c && (uVal_26 != 0x7f))))
          goto LAB_1800b4528;
LAB_1800b4550:
          local_60 = local_88 + lVal_20;
          local_68 = local_88;
          pU8_29 = local_80;
          local_58 = uVal_26;
          break;
        }
        uVal_26 = 0xffffffff;
        lVal_20 = 1;
LAB_1800b4528:
        ch_13 = func_0x180640e10(uVal_26);
        if (ch_13 == '\0') goto LAB_1800b4550;
        if (uVal_14 >> (bFlag_3 & 0x1f) == 0) {
          pU64_27 = (uint *)((int64_t)pU64_16 + lVal_21 + uVal_15);
        }
        else {
          pU64_27 = (uint *)((int64_t)pU64_16 + 1);
        }
        pU8_28 = local_88 + ((int64_t)pU64_27 - (int64_t)pU64_16);
        pU64_16 = pU64_27;
        pU8_29 = local_80;
      } while (pU64_27 < local_70);
    }
LAB_1800b4570:
    pU8_28 = local_68;
    if (pU8_25 != local_68) {
      lVal_21 = param_2[1];
      do {
        uVal_17 = (int64_t)pU8_28 - (int64_t)pU8_25;
        uVal_15 = param_2[2];
        if (uVal_15 < uVal_17 + lVal_21) {
          (*(func_ptr_t )param_2[3])(param_2);
          lVal_21 = param_2[1];
          uVal_15 = param_2[2];
        }
        uVal_23 = uVal_15 - lVal_21;
        if (uVal_17 <= uVal_15 - lVal_21) {
          uVal_23 = uVal_17;
        }
        if (uVal_23 != 0) {
          lVal_4 = *param_2;
          lVal_20 = lVal_4 + lVal_21;
          if ((uVal_23 < 4) || ((uint64_t)(lVal_20 - (int64_t)pU8_25) < 0x20)) {
            uVal_15 = 0;
LAB_1800b45f7:
            uVal_24 = uVal_15;
            for (uVal_17 = uVal_23 & 3; uVal_17 != 0; uVal_17 = uVal_17 - 1) {
              *(byte *)(lVal_20 + uVal_24) = pU8_25[uVal_24];
              uVal_24 = uVal_24 + 1;
            }
            if (uVal_15 - uVal_23 < 0xfffffffffffffffd) {
              lVal_21 = lVal_21 + lVal_4;
              do {
                *(byte *)(lVal_21 + uVal_24) = pU8_25[uVal_24];
                *(byte *)(lVal_21 + 1 + uVal_24) = pU8_25[uVal_24 + 1];
                *(byte *)(lVal_21 + 2 + uVal_24) = pU8_25[uVal_24 + 2];
                *(byte *)(lVal_21 + 3 + uVal_24) = pU8_25[uVal_24 + 3];
                uVal_24 = uVal_24 + 4;
              } while (uVal_23 != uVal_24);
            }
          }
          else if (uVal_23 < 0x20) {
            uVal_17 = 0;
LAB_1800b46d0:
            uVal_15 = uVal_23 & 0xfffffffffffffffc;
            do {
              *(uint32_t *)(lVal_20 + uVal_17) = *(uint32_t *)(pU8_25 + uVal_17);
              uVal_17 = uVal_17 + 4;
            } while (uVal_15 != uVal_17);
            if (uVal_23 != uVal_15) goto LAB_1800b45f7;
          }
          else {
            uVal_15 = uVal_23 & 0xffffffffffffffe0;
            uVal_17 = 0;
            do {
              pU64_1 = (uint32_t *)(pU8_25 + uVal_17);
              uVal_6 = pU64_1[1];
              uVal_7 = pU64_1[2];
              uVal_8 = pU64_1[3];
              pU64_2 = (uint32_t *)(pU8_25 + uVal_17 + 0x10);
              uVal_9 = *pU64_2;
              uVal_10 = pU64_2[1];
              uVal_11 = pU64_2[2];
              uVal_12 = pU64_2[3];
              pU64_2 = (uint32_t *)(lVal_4 + lVal_21 + uVal_17);
              *pU64_2 = *pU64_1;
              pU64_2[1] = uVal_6;
              pU64_2[2] = uVal_7;
              pU64_2[3] = uVal_8;
              pU64_1 = (uint32_t *)(lVal_4 + lVal_21 + 0x10 + uVal_17);
              *pU64_1 = uVal_9;
              pU64_1[1] = uVal_10;
              pU64_1[2] = uVal_11;
              pU64_1[3] = uVal_12;
              uVal_17 = uVal_17 + 0x20;
            } while (uVal_15 != uVal_17);
            if (uVal_23 != uVal_15) {
              uVal_17 = uVal_15;
              if ((uVal_23 & 0x1c) == 0) goto LAB_1800b45f7;
              goto LAB_1800b46d0;
            }
          }
          lVal_21 = param_2[1];
        }
        lVal_21 = lVal_21 + uVal_23;
        param_2[1] = lVal_21;
        pU8_25 = pU8_25 + uVal_23;
      } while (pU8_25 != pU8_28);
    }
    pU8_25 = local_60;
    if (local_60 == (byte *)0x0) break;
    func_0x1800b4f40(local_50,param_2,&local_68);
    param_2 = (int64_t *)CONCAT44(local_50[1],local_50[0]);
  } while (pU8_25 != pU8_29);
  lVal_21 = param_2[1];
  uVal_15 = lVal_21 + 1;
  if ((uint64_t)param_2[2] < uVal_15) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_21 = param_2[1];
    uVal_15 = lVal_21 + 1;
  }
  param_2[1] = uVal_15;
  *(uint8_t *)(*param_2 + lVal_21) = 0x22;
  *local_78 = param_2;
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_a8)) {
    return;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_a8);
  fnPtr_5 = (func_ptr_t )swi(3);
  (*fnPtr_5)();
  return;
}

// func_0x1800b47a0
void func_0x1800b47a0(byte **param_1,uint32_t *param_2)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  int64_t lVal_11;
  char ch_12;
  byte *pU8_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint *pU64_16;
  uint *pU64_17;
  uint uVal_18;
  byte *pU8_19;
  uint64_t uVal_20;
  byte *pU8_21;
  byte *pU8_22;
  uint uVal_23;
  uint64_t uVal_24;
  byte *pU8_25;
  bool bFlag_26;
  uint8_t auStack_b8 [40];
  byte **local_90;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint64_t local_68;
  byte *local_60;
  int64_t local_58;
  uint local_50 [2];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_b8;
  local_68 = *(uint64_t *)(param_2 + 8);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = param_2[4];
  uStack_74 = param_2[5];
  uStack_70 = param_2[6];
  uStack_6c = param_2[7];
  pU8_25 = *param_1;
  pU8_13 = param_1[1];
  if ((byte *)0x3 < pU8_13) {
    pU8_13 = pU8_25 + (int64_t)pU8_13;
    local_90 = param_1;
    do {
      if (pU8_13 + -3 <= pU8_25) {
        pU8_13 = local_90[1] + (int64_t)*local_90;
        uVal_14 = (int64_t)pU8_13 - (int64_t)pU8_25;
        if (uVal_14 != 0) goto LAB_1800b4972;
        break;
      }
      uVal_18 = (uint)(*pU8_25 >> 3);
      lVal_15 = (int64_t)(char)(&DAT_180761126)[uVal_18];
      uVal_14 = (uint64_t)((0x80ff0000U >> uVal_18 & 1) != 0);
      uVal_18 = (pU8_25[3] & 0x3f |
               (pU8_25[2] & 0x3f) << 6 |
               (pU8_25[1] & 0x3f) << 0xc |
               ((uint)*pU8_25 & *(uint *)(&DAT_1806b0d70 + lVal_15 * 4)) << 0x12) >>
               ((&DAT_1806b0db0)[lVal_15 * 4] & 0x1f);
      uVal_23 = ((pU8_25[1] >> 2 & 0xfffffff0) + (uint)(pU8_25[2] >> 6) * 4 |
                (uint)(pU8_25[3] >> 6) |
                (uint)(uVal_18 < *(uint *)(&DAT_1806b0d90 + lVal_15 * 4)) << 6 |
                (uint)(0x10ffff < uVal_18) << 8 | (uint)((uVal_18 & 0x7ffff800) == 0xd800) << 7) ^
               0x2a;
      local_58 = uVal_14 + lVal_15;
      bFlag_26 = uVal_23 >> ((&DAT_1806b0dd0)[lVal_15 * 4] & 0x1f) != 0;
      if (bFlag_26) {
        local_58 = 1;
      }
      pU8_19 = pU8_25 + 1;
      if (!bFlag_26) {
        pU8_19 = pU8_25 + lVal_15 + uVal_14;
      }
      local_60 = pU8_25;
      ch_12 = func_0x1800b5560(&local_88,
                             -(uint)(uVal_23 >> ((&DAT_1806b0dd0)[lVal_15 * 4] & 0x1f) != 0) | uVal_18,
                             &local_60);
      pU8_25 = pU8_19;
    } while (ch_12 != '\0');
    goto LAB_1800b4c2b;
  }
  pU8_13 = pU8_13 + (int64_t)pU8_25;
  uVal_14 = (int64_t)pU8_13 - (int64_t)pU8_25;
  if (uVal_14 == 0) goto LAB_1800b4c2b;
LAB_1800b4972:
  local_50[1] = local_50[1] & 0xff000000;
  local_50[0] = 0;
  pU64_16 = local_50;
  pU8_19 = pU8_25;
  if ((uVal_14 < 4) || ((uint64_t)((int64_t)pU64_16 - (int64_t)pU8_25) < 0x20)) {
LAB_1800b4a2b:
    uVal_18 = (int)pU8_13 - (int)pU8_19 & 7;
    uVal_24 = (uint64_t)uVal_18;
    pU8_22 = pU8_19;
    pU8_21 = pU8_19;
    if (uVal_18 != 0) {
      do {
        pU8_22 = pU8_21 + 1;
        *(byte *)pU64_16 = *pU8_21;
        pU64_16 = (uint *)((int64_t)pU64_16 + 1);
        uVal_24 = uVal_24 - 1;
        pU8_21 = pU8_22;
      } while (uVal_24 != 0);
    }
    if ((uint64_t)((int64_t)pU8_19 - (int64_t)pU8_13) < 0xfffffffffffffff9) {
      lVal_15 = 0;
      do {
        *(byte *)((int64_t)pU64_16 + lVal_15) = pU8_22[lVal_15];
        *(byte *)((int64_t)pU64_16 + lVal_15 + 1) = pU8_22[lVal_15 + 1];
        *(byte *)((int64_t)pU64_16 + lVal_15 + 2) = pU8_22[lVal_15 + 2];
        *(byte *)((int64_t)pU64_16 + lVal_15 + 3) = pU8_22[lVal_15 + 3];
        *(byte *)((int64_t)pU64_16 + lVal_15 + 4) = pU8_22[lVal_15 + 4];
        *(byte *)((int64_t)pU64_16 + lVal_15 + 5) = pU8_22[lVal_15 + 5];
        *(byte *)((int64_t)pU64_16 + lVal_15 + 6) = pU8_22[lVal_15 + 6];
        *(byte *)((int64_t)pU64_16 + lVal_15 + 7) = pU8_22[lVal_15 + 7];
        lVal_11 = lVal_15 + 8;
        lVal_15 = lVal_15 + 8;
      } while (pU8_22 + lVal_11 != pU8_13);
    }
  }
  else if (uVal_14 < 0x20) {
    uVal_20 = 0;
LAB_1800b49f0:
    uVal_24 = uVal_14 & 0xfffffffffffffffc;
    pU64_16 = (uint *)((int64_t)local_50 + uVal_24);
    do {
      *(uint32_t *)((int64_t)local_50 + uVal_20) = *(uint32_t *)(pU8_25 + uVal_20);
      uVal_20 = uVal_20 + 4;
    } while (uVal_24 != uVal_20);
    pU8_19 = pU8_25 + uVal_24;
    if (uVal_14 != uVal_24) goto LAB_1800b4a2b;
  }
  else {
    uVal_20 = uVal_14 & 0xffffffffffffffe0;
    uVal_24 = 0;
    do {
      pU64_1 = (uint32_t *)(pU8_25 + uVal_24);
      uVal_4 = pU64_1[1];
      uVal_5 = pU64_1[2];
      uVal_6 = pU64_1[3];
      pU64_2 = (uint32_t *)(pU8_25 + uVal_24 + 0x10);
      uVal_7 = *pU64_2;
      uVal_8 = pU64_2[1];
      uVal_9 = pU64_2[2];
      uVal_10 = pU64_2[3];
      *(uint32_t *)((int64_t)local_50 + uVal_24) = *pU64_1;
      *(uint32_t *)((int64_t)local_50 + uVal_24 + 4) = uVal_4;
      *(uint32_t *)((int64_t)&local_48 + uVal_24) = uVal_5;
      *(uint32_t *)((int64_t)&local_48 + uVal_24 + 4) = uVal_6;
      *(uint32_t *)(&stack0xffffffffffffffc0 + uVal_24) = uVal_7;
      *(uint32_t *)(&stack0xffffffffffffffc4 + uVal_24) = uVal_8;
      *(uint32_t *)(&stack0xffffffffffffffc8 + uVal_24) = uVal_9;
      *(uint32_t *)(&stack0xffffffffffffffcc + uVal_24) = uVal_10;
      uVal_24 = uVal_24 + 0x20;
    } while (uVal_20 != uVal_24);
    if (uVal_14 != uVal_20) {
      if ((uVal_14 & 0x1c) == 0) {
        pU64_16 = (uint *)((int64_t)local_50 + uVal_20);
        pU8_19 = pU8_25 + uVal_20;
        goto LAB_1800b4a2b;
      }
      goto LAB_1800b49f0;
    }
  }
  pU64_16 = local_50;
  do {
    uVal_18 = (uint)(*(byte *)pU64_16 >> 3);
    lVal_15 = (int64_t)(char)(&DAT_180761126)[uVal_18];
    uVal_24 = (uint64_t)((0x80ff0000U >> uVal_18 & 1) != 0);
    uVal_18 = (*(byte *)((int64_t)pU64_16 + 3) & 0x3f |
             (*(byte *)((int64_t)pU64_16 + 2) & 0x3f) << 6 |
             (*(byte *)((int64_t)pU64_16 + 1) & 0x3f) << 0xc |
             ((uint)*(byte *)pU64_16 & *(uint *)(&DAT_1806b0d70 + lVal_15 * 4)) << 0x12) >>
             ((&DAT_1806b0db0)[lVal_15 * 4] & 0x1f);
    uVal_23 = ((*(byte *)((int64_t)pU64_16 + 1) >> 2 & 0xfffffff0) +
              (uint)(*(byte *)((int64_t)pU64_16 + 2) >> 6) * 4 |
              (uint)(*(byte *)((int64_t)pU64_16 + 3) >> 6) |
              (uint)(uVal_18 < *(uint *)(&DAT_1806b0d90 + lVal_15 * 4)) << 6 |
              (uint)(0x10ffff < uVal_18) << 8 | (uint)((uVal_18 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a;
    local_58 = uVal_24 + lVal_15;
    bFlag_26 = uVal_23 >> ((&DAT_1806b0dd0)[lVal_15 * 4] & 0x1f) != 0;
    if (bFlag_26) {
      local_58 = 1;
    }
    pU64_17 = (uint *)((int64_t)pU64_16 + 1);
    if (!bFlag_26) {
      pU64_17 = (uint *)((int64_t)pU64_16 + lVal_15 + uVal_24);
    }
    local_60 = pU8_25;
    ch_12 = func_0x1800b5560(&local_88,
                           -(uint)(uVal_23 >> ((&DAT_1806b0dd0)[lVal_15 * 4] & 0x1f) != 0) | uVal_18,
                           &local_60);
  } while ((ch_12 != '\0') &&
          (pU8_25 = pU8_25 + ((int64_t)pU64_17 - (int64_t)pU64_16), pU64_16 = pU64_17,
          pU64_17 < (uint *)((int64_t)local_50 + uVal_14)));
LAB_1800b4c2b:
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_b8)) {
    return;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_b8);
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// func_0x1800b4c70
int64_t ** func_0x1800b4c70(int64_t **param_1,int64_t *param_2,uint *param_3,int64_t param_4,uint64_t param_5, char *param_6)
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
  uint64_t uVal_13;
  int64_t **ptr2_Long_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  int64_t lVal_21;
  uint64_t uVal_22;
  uint8_t auStack_98 [32];
  int64_t *local_78;
  uint64_t local_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  int64_t *local_58 [2];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  uVal_16 = 0;
  if (param_5 <= param_3[2]) {
    uVal_16 = param_3[2] - param_5;
  }
  uVal_22 = uVal_16 >> ((&DAT_180761149)[*param_3 >> 3 & 7] & 0x3f);
  uVal_18 = param_4 + param_2[1] + (*param_3 >> 0xf & 7) * uVal_16;
  if ((uint64_t)param_2[2] < uVal_18) {
    (*(func_ptr_t )param_2[3])(param_2,uVal_18);
  }
  if (uVal_22 != 0) {
    func_0x1800b57e0(local_58,param_2,uVal_22);
    param_2 = local_58[0];
  }
  if (*param_6 == '\x01') {
    local_68 = *(uint32_t *)(param_6 + 0x10);
    uStack_64 = *(uint32_t *)(param_6 + 0x14);
    uStack_60 = *(uint32_t *)(param_6 + 0x18);
    uStack_5c = *(uint32_t *)(param_6 + 0x1c);
    local_70 = *(uint64_t *)(param_6 + 8);
    local_78 = param_2;
    func_0x1800b5a10(local_58,&local_78,&local_68);
    param_2 = local_58[0];
  }
  else if (*(int64_t *)(param_6 + 8) != 0) {
    lVal_21 = *(int64_t *)(param_6 + 0x10);
    lVal_20 = *(int64_t *)(param_6 + 8) + lVal_21;
    lVal_15 = param_2[1];
    do {
      uVal_17 = lVal_20 - lVal_21;
      uVal_18 = param_2[2];
      if (uVal_18 < lVal_15 + uVal_17) {
        (*(func_ptr_t )param_2[3])(param_2);
        lVal_15 = param_2[1];
        uVal_18 = param_2[2];
      }
      uVal_13 = uVal_18 - lVal_15;
      if (uVal_17 <= uVal_18 - lVal_15) {
        uVal_13 = uVal_17;
      }
      if (uVal_13 != 0) {
        lVal_4 = *param_2;
        lVal_1 = lVal_4 + lVal_15;
        if ((uVal_13 < 4) || ((uint64_t)(lVal_1 - lVal_21) < 0x20)) {
          uVal_18 = 0;
LAB_1800b4dd8:
          uVal_19 = uVal_18;
          for (uVal_17 = uVal_13 & 3; uVal_17 != 0; uVal_17 = uVal_17 - 1) {
            *(uint8_t *)(lVal_1 + uVal_19) = *(uint8_t *)(lVal_21 + uVal_19);
            uVal_19 = uVal_19 + 1;
          }
          if (uVal_18 - uVal_13 < 0xfffffffffffffffd) {
            lVal_15 = lVal_15 + lVal_4;
            do {
              *(uint8_t *)(lVal_15 + uVal_19) = *(uint8_t *)(lVal_21 + uVal_19);
              *(uint8_t *)(lVal_15 + 1 + uVal_19) = *(uint8_t *)(lVal_21 + 1 + uVal_19);
              *(uint8_t *)(lVal_15 + 2 + uVal_19) = *(uint8_t *)(lVal_21 + 2 + uVal_19);
              *(uint8_t *)(lVal_15 + 3 + uVal_19) = *(uint8_t *)(lVal_21 + 3 + uVal_19);
              uVal_19 = uVal_19 + 4;
            } while (uVal_13 != uVal_19);
          }
        }
        else if (uVal_13 < 0x20) {
          uVal_17 = 0;
LAB_1800b4eb1:
          uVal_18 = uVal_13 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_17) = *(uint32_t *)(lVal_21 + uVal_17);
            uVal_17 = uVal_17 + 4;
          } while (uVal_18 != uVal_17);
          if (uVal_13 != uVal_18) goto LAB_1800b4dd8;
        }
        else {
          uVal_18 = uVal_13 & 0xffffffffffffffe0;
          uVal_17 = 0;
          do {
            pU64_3 = (uint32_t *)(lVal_21 + uVal_17);
            uVal_6 = pU64_3[1];
            uVal_7 = pU64_3[2];
            uVal_8 = pU64_3[3];
            pU64_2 = (uint32_t *)(lVal_21 + 0x10 + uVal_17);
            uVal_9 = *pU64_2;
            uVal_10 = pU64_2[1];
            uVal_11 = pU64_2[2];
            uVal_12 = pU64_2[3];
            pU64_2 = (uint32_t *)(lVal_4 + lVal_15 + uVal_17);
            *pU64_2 = *pU64_3;
            pU64_2[1] = uVal_6;
            pU64_2[2] = uVal_7;
            pU64_2[3] = uVal_8;
            pU64_2 = (uint32_t *)(lVal_4 + lVal_15 + 0x10 + uVal_17);
            *pU64_2 = uVal_9;
            pU64_2[1] = uVal_10;
            pU64_2[2] = uVal_11;
            pU64_2[3] = uVal_12;
            uVal_17 = uVal_17 + 0x20;
          } while (uVal_18 != uVal_17);
          if (uVal_13 != uVal_18) {
            uVal_17 = uVal_18;
            if ((uVal_13 & 0x1c) == 0) goto LAB_1800b4dd8;
            goto LAB_1800b4eb1;
          }
        }
        lVal_15 = param_2[1];
      }
      lVal_15 = lVal_15 + uVal_13;
      param_2[1] = lVal_15;
      lVal_21 = lVal_21 + uVal_13;
    } while (lVal_21 != lVal_20);
  }
  if (uVal_16 != uVal_22) {
    func_0x1800b57e0(local_58,param_2,uVal_16 - uVal_22,param_3);
    param_2 = local_58[0];
  }
  *param_1 = param_2;
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_98)) {
    return param_1;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_98);
  fnPtr_5 = (func_ptr_t )swi(3);
  ptr2_Long_14 = (int64_t **)(*fnPtr_5)();
  return ptr2_Long_14;
}

// func_0x1800b4f40
int64_t ** func_0x1800b4f40(int64_t **param_1,int64_t *param_2,uint64_t *param_3)
{
  uint8_t *pU64_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  int64_t **ptr2_Long_4;
  uint64_t uVal_5;
  uint uVal_6;
  uint8_t *pU64_7;
  uint8_t auStack_58 [32];
  int64_t *local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  uVal_6 = *(uint *)(param_3 + 2);
  switch(uVal_6) {
  case 9:
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_5) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_3 = param_2[1];
      uVal_5 = lVal_3 + 1;
    }
    param_2[1] = uVal_5;
    *(uint8_t *)(*param_2 + lVal_3) = 0x5c;
    uVal_6 = 0x74;
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_5) {
LAB_1800b4fef:
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_3 = param_2[1];
      uVal_5 = lVal_3 + 1;
    }
    break;
  case 10:
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_5) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_3 = param_2[1];
      uVal_5 = lVal_3 + 1;
    }
    param_2[1] = uVal_5;
    *(uint8_t *)(*param_2 + lVal_3) = 0x5c;
    uVal_6 = 0x6e;
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_5) goto LAB_1800b4fef;
    break;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    goto switchD_1800b4f7a_caseD_b;
  case 0xd:
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_5) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_3 = param_2[1];
      uVal_5 = lVal_3 + 1;
    }
    param_2[1] = uVal_5;
    *(uint8_t *)(*param_2 + lVal_3) = 0x5c;
    uVal_6 = 0x72;
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_5) goto LAB_1800b4fef;
    break;
  case 0x22:
  case 0x27:
switchD_1800b4f7a_caseD_22:
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_5) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_3 = param_2[1];
      uVal_5 = lVal_3 + 1;
    }
    param_2[1] = uVal_5;
    *(uint8_t *)(*param_2 + lVal_3) = 0x5c;
    lVal_3 = param_2[1];
    uVal_5 = lVal_3 + 1;
    if ((uint64_t)param_2[2] < uVal_5) goto LAB_1800b4fef;
    break;
  default:
    if (uVal_6 == 0x5c) goto switchD_1800b4f7a_caseD_22;
switchD_1800b4f7a_caseD_b:
    if (uVal_6 < 0x100) {
      func_0x1800b5170(param_1,param_2,0x78,uVal_6);
      goto LAB_1800b500a;
    }
    if (uVal_6 < 0x10000) {
      func_0x1800b52c0(param_1,param_2,0x75,uVal_6);
      goto LAB_1800b500a;
    }
    if (uVal_6 < 0x110000) {
      func_0x1800b5410(param_1,param_2,0x55,uVal_6);
      goto LAB_1800b500a;
    }
    pU64_7 = (uint8_t *)*param_3;
    pU64_1 = (uint8_t *)param_3[1];
    if (pU64_7 != pU64_1) {
      do {
        func_0x1800b5170(&local_38,param_2,0x78,*pU64_7);
        pU64_7 = pU64_7 + 1;
        param_2 = local_38;
      } while (pU64_7 != pU64_1);
    }
    goto LAB_1800b5007;
  }
  param_2[1] = uVal_5;
  *(char *)(*param_2 + lVal_3) = (char)uVal_6;
LAB_1800b5007:
  *param_1 = param_2;
LAB_1800b500a:
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return param_1;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_4 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_4;
}

// func_0x1800b5170
int64_t ** func_0x1800b5170(int64_t **param_1,int64_t *param_2,uint8_t param_3,uint param_4)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  char *fnPtr_3;
  int64_t **ptr2_Long_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint8_t local_68 [46];
  uint16_t local_3a;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)local_68;
  lVal_5 = param_2[1];
  uVal_6 = lVal_5 + 1;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_6 = lVal_5 + 1;
  }
  param_2[1] = uVal_6;
  *(uint8_t *)(*param_2 + lVal_5) = 0x5c;
  lVal_5 = param_2[1];
  uVal_6 = lVal_5 + 1;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_6 = lVal_5 + 1;
  }
  param_2[1] = uVal_6;
  *(uint8_t *)(*param_2 + lVal_5) = param_3;
  local_3a = 0x3030;
  fnPtr_3 = (char *)((int64_t)&local_3a + 1);
  do {
    *fnPtr_3 = "0123456789abcdef"[param_4 & 0xf];
    fnPtr_3 = fnPtr_3 + -1;
    uVal_2 = param_4 >> 4;
    param_4 = param_4 >> 4;
  } while (uVal_2 != 0);
  lVal_5 = param_2[1];
  lVal_8 = 0;
  do {
    uVal_9 = 2 - lVal_8;
    uVal_6 = param_2[2];
    if (uVal_6 < uVal_9 + lVal_5) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_5 = param_2[1];
      uVal_6 = param_2[2];
    }
    uVal_7 = uVal_6 - lVal_5;
    if (uVal_9 <= uVal_6 - lVal_5) {
      uVal_7 = uVal_9;
    }
    if (uVal_7 != 0) {
      func_0x1806aa960(lVal_5 + *param_2,(int64_t)&local_3a + lVal_8,uVal_7);
      lVal_5 = param_2[1];
    }
    lVal_5 = lVal_5 + uVal_7;
    param_2[1] = lVal_5;
    lVal_8 = lVal_8 + uVal_7;
  } while (lVal_8 != 2);
  *param_1 = param_2;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)local_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)local_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  ptr2_Long_4 = (int64_t **)(*fnPtr_1)();
  return ptr2_Long_4;
}

// func_0x1800b52c0
int64_t ** func_0x1800b52c0(int64_t **param_1,int64_t *param_2,uint8_t param_3,uint param_4)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  char *fnPtr_3;
  int64_t **ptr2_Long_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint8_t local_68 [44];
  uint32_t local_3c;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)local_68;
  lVal_5 = param_2[1];
  uVal_6 = lVal_5 + 1;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_6 = lVal_5 + 1;
  }
  param_2[1] = uVal_6;
  *(uint8_t *)(*param_2 + lVal_5) = 0x5c;
  lVal_5 = param_2[1];
  uVal_6 = lVal_5 + 1;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_6 = lVal_5 + 1;
  }
  param_2[1] = uVal_6;
  *(uint8_t *)(*param_2 + lVal_5) = param_3;
  local_3c = 0x30303030;
  fnPtr_3 = (char *)((int64_t)&local_3c + 3);
  do {
    *fnPtr_3 = "0123456789abcdef"[param_4 & 0xf];
    fnPtr_3 = fnPtr_3 + -1;
    uVal_2 = param_4 >> 4;
    param_4 = param_4 >> 4;
  } while (uVal_2 != 0);
  lVal_5 = param_2[1];
  lVal_8 = 0;
  do {
    uVal_9 = 4 - lVal_8;
    uVal_6 = param_2[2];
    if (uVal_6 < uVal_9 + lVal_5) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_5 = param_2[1];
      uVal_6 = param_2[2];
    }
    uVal_7 = uVal_6 - lVal_5;
    if (uVal_9 <= uVal_6 - lVal_5) {
      uVal_7 = uVal_9;
    }
    if (uVal_7 != 0) {
      func_0x1806aa960(lVal_5 + *param_2,(int64_t)&local_3c + lVal_8,uVal_7);
      lVal_5 = param_2[1];
    }
    lVal_5 = lVal_5 + uVal_7;
    param_2[1] = lVal_5;
    lVal_8 = lVal_8 + uVal_7;
  } while (lVal_8 != 4);
  *param_1 = param_2;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)local_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)local_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  ptr2_Long_4 = (int64_t **)(*fnPtr_1)();
  return ptr2_Long_4;
}

// func_0x1800b5410
int64_t ** func_0x1800b5410(int64_t **param_1,int64_t *param_2,uint8_t param_3,uint param_4)
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  char *fnPtr_3;
  int64_t **ptr2_Long_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint8_t local_68 [40];
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)local_68;
  lVal_5 = param_2[1];
  uVal_6 = lVal_5 + 1;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_6 = lVal_5 + 1;
  }
  param_2[1] = uVal_6;
  *(uint8_t *)(*param_2 + lVal_5) = 0x5c;
  lVal_5 = param_2[1];
  uVal_6 = lVal_5 + 1;
  if ((uint64_t)param_2[2] < uVal_6) {
    (*(func_ptr_t )param_2[3])(param_2);
    lVal_5 = param_2[1];
    uVal_6 = lVal_5 + 1;
  }
  param_2[1] = uVal_6;
  *(uint8_t *)(*param_2 + lVal_5) = param_3;
  local_40 = &DAT_3030303030303030;
  fnPtr_3 = (char *)((int64_t)&local_40 + 7);
  do {
    *fnPtr_3 = "0123456789abcdef"[param_4 & 0xf];
    fnPtr_3 = fnPtr_3 + -1;
    uVal_2 = param_4 >> 4;
    param_4 = param_4 >> 4;
  } while (uVal_2 != 0);
  lVal_5 = param_2[1];
  lVal_8 = 0;
  do {
    uVal_9 = 8 - lVal_8;
    uVal_6 = param_2[2];
    if (uVal_6 < uVal_9 + lVal_5) {
      (*(func_ptr_t )param_2[3])(param_2);
      lVal_5 = param_2[1];
      uVal_6 = param_2[2];
    }
    uVal_7 = uVal_6 - lVal_5;
    if (uVal_9 <= uVal_6 - lVal_5) {
      uVal_7 = uVal_9;
    }
    if (uVal_7 != 0) {
      func_0x1806aa960(lVal_5 + *param_2,(int64_t)&local_40 + lVal_8,uVal_7);
      lVal_5 = param_2[1];
    }
    lVal_5 = lVal_5 + uVal_7;
    param_2[1] = lVal_5;
    lVal_8 = lVal_8 + uVal_7;
  } while (lVal_8 != 8);
  *param_1 = param_2;
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)local_68)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)local_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  ptr2_Long_4 = (int64_t **)(*fnPtr_1)();
  return ptr2_Long_4;
}

// func_0x1800b5560
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1800b5560(char **param_1,uint param_2,int64_t *param_3)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  char ch_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t *pU64_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint uVal_14;
  uint uVal_15;
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  int64_t local_160;
  int64_t local_158;
  uint local_150;
  uint8_t local_148 [8];
  uint8_t *local_140;
  int64_t local_138;
  uint64_t local_130;
  uint8_t *local_128;
  uint8_t local_120 [256];
  int64_t local_20;
  
  if ((**param_1 == '\x01') &&
     ((((param_2 < 0x20 || (param_2 == 0x22)) || (param_2 == 0x5c)) ||
      ((param_2 == 0x7f || (ch_3 = func_0x180640e10(param_2), ch_3 == '\0')))))) {
    local_140 = local_120;
    local_138 = 0;
    local_130 = 0x100;
    local_128 = &LAB_1800b57c0;
    local_20 = 0;
    local_160 = *param_3;
    local_158 = local_160 + param_3[1];
    local_150 = param_2;
    func_0x1800b4f40(local_148,&local_140,&local_160);
    uVal_1 = *(uint64_t *)param_1[1];
    uVal_6 = uVal_1 + local_138 + local_20;
    uVal_2 = *(uint64_t *)param_1[2];
    uVal_4 = CONCAT71((int7)((uint64_t)param_1[2] >> 8),uVal_6 <= uVal_2);
    if (uVal_2 < uVal_6) {
      *(uint64_t *)param_1[3] = *(int64_t *)param_1[3] + (uVal_2 - uVal_1);
      *(uint64_t *)param_1[1] = *(uint64_t *)param_1[2];
      return uVal_4;
    }
    *(uint64_t *)param_1[1] = uVal_6;
    *(int64_t *)param_1[3] = *(int64_t *)param_1[3] + local_138 + local_20;
    pU64_7 = (uint64_t *)param_1[1];
    uVal_6 = *pU64_7;
    if (*(uint64_t *)param_1[2] <= uVal_6) {
      return uVal_4;
    }
    if (*param_3 + param_3[1] != *(int64_t *)param_1[4] + *(int64_t *)((int64_t)param_1[4] + 8))
    {
      return uVal_4;
    }
  }
  else {
    lVal_5 = 1;
    if ((0x10ff < param_2) && (lVal_5 = 2, 1 < param_2 - 0x2329 && 0x115f < param_2)) {
      uVal_12 = (_DAT_1806af1f0 & param_2) + _DAT_1806af200;
      uVal_13 = (_UNK_1806af1f4 & param_2) + _UNK_1806af204;
      uVal_14 = (_UNK_1806af1f8 & param_2) + _UNK_1806af208;
      uVal_15 = (_UNK_1806af1fc & param_2) + _UNK_1806af20c;
      uVal_8 = param_2 + _DAT_1806af210;
      uVal_9 = param_2 + _UNK_1806af214;
      uVal_10 = param_2 + _UNK_1806af218;
      uVal_11 = param_2 + _UNK_1806af21c;
      auArr_16._0_4_ =
           -(uint)(((uVal_8 < _DAT_1806af220) * uVal_8 | (uVal_8 >= _DAT_1806af220) * _DAT_1806af220)
                  == uVal_8);
      auArr_16._4_4_ =
           -(uint)(((uVal_9 < _UNK_1806af224) * uVal_9 | (uVal_9 >= _UNK_1806af224) * _UNK_1806af224)
                  == uVal_9);
      auArr_16._8_4_ =
           -(uint)(((uVal_10 < _UNK_1806af228) * uVal_10 | (uVal_10 >= _UNK_1806af228) * _UNK_1806af228
                   ) == uVal_10);
      auArr_16._12_4_ =
           -(uint)(((uVal_11 < _UNK_1806af22c) * uVal_11 | (uVal_11 >= _UNK_1806af22c) * _UNK_1806af22c
                   ) == uVal_11);
      auArr_17._0_4_ =
           -(uint)(((uVal_12 < _DAT_1806af230) * uVal_12 | (uVal_12 >= _DAT_1806af230) * _DAT_1806af230
                   ) == uVal_12);
      auArr_17._4_4_ =
           -(uint)(((uVal_13 < _UNK_1806af234) * uVal_13 | (uVal_13 >= _UNK_1806af234) * _UNK_1806af234
                   ) == uVal_13);
      auArr_17._8_4_ =
           -(uint)(((uVal_14 < _UNK_1806af238) * uVal_14 | (uVal_14 >= _UNK_1806af238) * _UNK_1806af238
                   ) == uVal_14);
      auArr_17._12_4_ =
           -(uint)(((uVal_15 < _UNK_1806af23c) * uVal_15 | (uVal_15 >= _UNK_1806af23c) * _UNK_1806af23c
                   ) == uVal_15);
      auArr_17 = packssdw(auArr_16,auArr_17);
      if (((ushort)((ushort)(SUB161(auArr_17 >> 7,0) & 1) |
                    (ushort)(SUB161(auArr_17 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auArr_17 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auArr_17 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auArr_17 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auArr_17 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auArr_17 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auArr_17 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auArr_17 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auArr_17 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auArr_17 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auArr_17 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auArr_17 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auArr_17 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auArr_17 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auArr_17[15] >> 7) << 0xf) == 0) &&
         (param_2 == 0x303f || 0x764f < param_2 - 0x2e80)) {
        lVal_5 = (uint64_t)((param_2 & 0xffffff00) == 0x1f900) + 1;
      }
    }
    uVal_6 = lVal_5 + *(uint64_t *)param_1[1];
    if (*(uint64_t *)param_1[2] < uVal_6) {
      return 0;
    }
    *(uint64_t *)param_1[1] = uVal_6;
    lVal_5 = param_3[1];
    *(int64_t *)param_1[3] = *(int64_t *)param_1[3] + lVal_5;
    uVal_4 = CONCAT71((int7)((uint64_t)lVal_5 >> 8),1);
    if (**param_1 != '\x01') {
      return uVal_4;
    }
    pU64_7 = (uint64_t *)param_1[1];
    uVal_6 = *pU64_7;
    if (*(uint64_t *)param_1[2] <= uVal_6) {
      return uVal_4;
    }
    if (*param_3 + param_3[1] != *(int64_t *)param_1[4] + *(int64_t *)((int64_t)param_1[4] + 8))
    {
      return uVal_4;
    }
  }
  *pU64_7 = uVal_6 + 1;
  *(int64_t *)param_1[3] = *(int64_t *)param_1[3] + 1;
  return uVal_4;
}

// func_0x1800b57e0
int64_t ** func_0x1800b57e0(int64_t **param_1,int64_t *param_2,int64_t param_3,uint *param_4)
{
  int64_t lVal_1;
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
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  int64_t lVal_18;
  uint *pU64_19;
  uint uVal_20;
  
  uVal_20 = *param_4 >> 0xf & 7;
  param_4 = param_4 + 1;
  if (uVal_20 == 1) {
    if (param_3 != 0) {
      uVal_4 = *(uint8_t *)param_4;
      do {
        lVal_13 = param_2[1];
        uVal_16 = lVal_13 + 1;
        if ((uint64_t)param_2[2] < uVal_16) {
          (*(func_ptr_t )param_2[3])(param_2);
          lVal_13 = param_2[1];
          uVal_16 = lVal_13 + 1;
        }
        param_2[1] = uVal_16;
        *(uint8_t *)(*param_2 + lVal_13) = uVal_4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if ((param_3 != 0) && (uVal_20 != 0)) {
    lVal_13 = param_2[1];
    lVal_18 = 0;
    pU64_19 = param_4;
    do {
      uVal_15 = (int64_t)(uint *)((uint64_t)uVal_20 + (int64_t)param_4) - (int64_t)pU64_19;
      uVal_16 = param_2[2];
      if (uVal_16 < lVal_13 + uVal_15) {
        (*(func_ptr_t )param_2[3])(param_2);
        lVal_13 = param_2[1];
        uVal_16 = param_2[2];
      }
      uVal_14 = uVal_16 - lVal_13;
      if (uVal_15 <= uVal_16 - lVal_13) {
        uVal_14 = uVal_15;
      }
      if (uVal_14 != 0) {
        lVal_5 = *param_2;
        lVal_1 = lVal_5 + lVal_13;
        if ((uVal_14 < 4) || ((uint64_t)(lVal_1 - (int64_t)pU64_19) < 0x20)) {
          uVal_16 = 0;
LAB_1800b58ef:
          uVal_17 = uVal_16;
          for (uVal_15 = uVal_14 & 3; uVal_15 != 0; uVal_15 = uVal_15 - 1) {
            *(uint8_t *)(lVal_1 + uVal_17) = *(uint8_t *)((int64_t)pU64_19 + uVal_17);
            uVal_17 = uVal_17 + 1;
          }
          if (uVal_16 - uVal_14 < 0xfffffffffffffffd) {
            lVal_13 = lVal_13 + lVal_5;
            do {
              *(uint8_t *)(lVal_13 + uVal_17) = *(uint8_t *)((int64_t)pU64_19 + uVal_17);
              *(uint8_t *)(lVal_13 + 1 + uVal_17) = *(uint8_t *)((int64_t)pU64_19 + uVal_17 + 1);
              *(uint8_t *)(lVal_13 + 2 + uVal_17) = *(uint8_t *)((int64_t)pU64_19 + uVal_17 + 2);
              *(uint8_t *)(lVal_13 + 3 + uVal_17) = *(uint8_t *)((int64_t)pU64_19 + uVal_17 + 3);
              uVal_17 = uVal_17 + 4;
            } while (uVal_14 != uVal_17);
          }
        }
        else if (uVal_14 < 0x20) {
          uVal_15 = 0;
LAB_1800b59c2:
          uVal_16 = uVal_14 & 0xfffffffffffffffc;
          do {
            *(uint32_t *)(lVal_1 + uVal_15) = *(uint32_t *)((int64_t)pU64_19 + uVal_15);
            uVal_15 = uVal_15 + 4;
          } while (uVal_16 != uVal_15);
          if (uVal_14 != uVal_16) goto LAB_1800b58ef;
        }
        else {
          uVal_16 = uVal_14 & 0xffffffffffffffe0;
          uVal_15 = 0;
          do {
            pU64_3 = (uint32_t *)((int64_t)pU64_19 + uVal_15);
            uVal_6 = pU64_3[1];
            uVal_7 = pU64_3[2];
            uVal_8 = pU64_3[3];
            pU64_2 = (uint32_t *)((int64_t)pU64_19 + uVal_15 + 0x10);
            uVal_9 = *pU64_2;
            uVal_10 = pU64_2[1];
            uVal_11 = pU64_2[2];
            uVal_12 = pU64_2[3];
            pU64_2 = (uint32_t *)(lVal_5 + lVal_13 + uVal_15);
            *pU64_2 = *pU64_3;
            pU64_2[1] = uVal_6;
            pU64_2[2] = uVal_7;
            pU64_2[3] = uVal_8;
            pU64_2 = (uint32_t *)(lVal_5 + lVal_13 + 0x10 + uVal_15);
            *pU64_2 = uVal_9;
            pU64_2[1] = uVal_10;
            pU64_2[2] = uVal_11;
            pU64_2[3] = uVal_12;
            uVal_15 = uVal_15 + 0x20;
          } while (uVal_16 != uVal_15);
          if (uVal_14 != uVal_16) {
            uVal_15 = uVal_16;
            if ((uVal_14 & 0x1c) == 0) goto LAB_1800b58ef;
            goto LAB_1800b59c2;
          }
        }
        lVal_13 = param_2[1];
      }
      lVal_13 = lVal_13 + uVal_14;
      param_2[1] = lVal_13;
      pU64_19 = (uint *)((int64_t)pU64_19 + uVal_14);
    } while ((pU64_19 != (uint *)((uint64_t)uVal_20 + (int64_t)param_4)) ||
            (lVal_18 = lVal_18 + 1, pU64_19 = param_4, lVal_18 != param_3));
  }
  *param_1 = param_2;
  return param_1;
}

// func_0x1800b5a10
uint32_t * func_0x1800b5a10(uint32_t *param_1,int64_t **param_2,byte **param_3)
{
  uint32_t *pU64_1;
  byte bFlag_2;
  int64_t *pLong_3;
  func_ptr_t fnPtr_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  char ch_12;
  uint uVal_13;
  uint64_t uVal_14;
  int64_t *pLong_15;
  uint32_t *pU64_16;
  uint *pU64_17;
  uint64_t uVal_18;
  byte *pU8_19;
  byte *pU8_20;
  int64_t lVal_21;
  uint *pU64_22;
  int64_t *pLong_23;
  byte *pU8_24;
  uint64_t uVal_25;
  uint64_t uVal_26;
  byte *pU8_27;
  int64_t lVal_28;
  uint uVal_29;
  byte *pU8_30;
  uint8_t auStack_c8 [32];
  int64_t **local_a8;
  byte *local_a0;
  uint32_t *local_98;
  uint *local_90;
  int64_t *local_88;
  int64_t *local_80;
  byte *local_70;
  byte *local_68;
  uint local_60;
  uint local_58 [4];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_c8;
  if (param_2[1] != (int64_t *)0x0) {
    pLong_3 = *param_2;
    lVal_21 = pLong_3[1];
    uVal_14 = lVal_21 + 1;
    if ((uint64_t)pLong_3[2] < uVal_14) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_21 = pLong_3[1];
      uVal_14 = lVal_21 + 1;
    }
    pLong_3[1] = uVal_14;
    *(uint8_t *)(*pLong_3 + lVal_21) = 0x22;
    param_2[1] = (int64_t *)((int64_t)param_2[1] + -1);
  }
  pU8_30 = *param_3;
  local_a0 = param_3[1] + (int64_t)pU8_30;
  local_a8 = param_2;
  local_98 = param_1;
  do {
    local_68 = (byte *)0x0;
    local_60 = 0;
    uVal_14 = (int64_t)local_a0 - (int64_t)pU8_30;
    pU8_27 = pU8_30;
    local_70 = local_a0;
    if ((uVal_14 < 4) || ((int64_t)uVal_14 < 4)) {
      uVal_18 = (int64_t)local_a0 - (int64_t)pU8_30;
    }
    else {
LAB_1800b5adc:
      do {
        uVal_13 = (uint)(*pU8_27 >> 3);
        lVal_21 = (int64_t)(char)(&DAT_180761126)[uVal_13];
        uVal_18 = (uint64_t)((0x80ff0000U >> uVal_13 & 1) != 0);
        uVal_13 = (pU8_27[3] & 0x3f |
                 (pU8_27[2] & 0x3f) << 6 |
                 (pU8_27[1] & 0x3f) << 0xc |
                 ((uint)*pU8_27 & *(uint *)(&DAT_1806b0d70 + lVal_21 * 4)) << 0x12) >>
                 ((&DAT_1806b0db0)[lVal_21 * 4] & 0x1f);
        uVal_29 = ((pU8_27[1] >> 2 & 0xfffffff0) + (uint)(pU8_27[2] >> 6) * 4 |
                  (uint)(pU8_27[3] >> 6) |
                  (uint)(uVal_13 < *(uint *)(&DAT_1806b0d90 + lVal_21 * 4)) << 6 |
                  (uint)(0x10ffff < uVal_13) << 8 | (uint)((uVal_13 & 0x7ffff800) == 0xd800) << 7) ^
                 0x2a;
        bFlag_2 = (&DAT_1806b0dd0)[lVal_21 * 4];
        if (uVal_29 >> (bFlag_2 & 0x1f) == 0) {
          lVal_28 = uVal_18 + lVal_21;
          if ((((0x1f < uVal_13) && (uVal_13 != 0x22)) && (uVal_13 != 0x5c)) && (uVal_13 != 0x7f))
          goto LAB_1800b5bf8;
LAB_1800b5c95:
          local_68 = pU8_27 + lVal_28;
          param_2 = local_a8;
          local_70 = pU8_27;
          local_60 = uVal_13;
          goto LAB_1800b5f36;
        }
        uVal_13 = 0xffffffff;
        lVal_28 = 1;
LAB_1800b5bf8:
        ch_12 = func_0x180640e10(uVal_13);
        if (ch_12 == '\0') goto LAB_1800b5c95;
        if (uVal_29 >> (bFlag_2 & 0x1f) == 0) {
          pU8_27 = pU8_27 + lVal_21 + uVal_18;
          if (pU8_30 + (uVal_14 - 3) <= pU8_27) break;
          goto LAB_1800b5adc;
        }
        pU8_27 = pU8_27 + 1;
      } while (pU8_27 < pU8_30 + (uVal_14 - 3));
      uVal_14 = (int64_t)local_a0 - (int64_t)pU8_27;
      uVal_18 = (int64_t)local_a0 - (int64_t)pU8_27;
      param_2 = local_a8;
    }
    if (uVal_18 != 0) {
      local_58[1] = local_58[1] & 0xff000000;
      local_58[0] = 0;
      pU64_17 = local_58;
      pU8_24 = pU8_27;
      if ((uint64_t)((int64_t)pU64_17 - (int64_t)pU8_27) < 0x20 || uVal_18 < 4) {
LAB_1800b5d1b:
        uVal_13 = (int)local_a0 - (int)pU8_24 & 7;
        uVal_18 = (uint64_t)uVal_13;
        pU8_20 = pU8_24;
        pU8_19 = pU8_24;
        if (uVal_13 != 0) {
          do {
            pU8_20 = pU8_19 + 1;
            *(byte *)pU64_17 = *pU8_19;
            pU64_17 = (uint *)((int64_t)pU64_17 + 1);
            uVal_18 = uVal_18 - 1;
            pU8_19 = pU8_20;
          } while (uVal_18 != 0);
        }
        if ((uint64_t)((int64_t)pU8_24 - (int64_t)local_a0) < 0xfffffffffffffff9) {
          lVal_21 = 0;
          do {
            *(byte *)((int64_t)pU64_17 + lVal_21) = pU8_20[lVal_21];
            *(byte *)((int64_t)pU64_17 + lVal_21 + 1) = pU8_20[lVal_21 + 1];
            *(byte *)((int64_t)pU64_17 + lVal_21 + 2) = pU8_20[lVal_21 + 2];
            *(byte *)((int64_t)pU64_17 + lVal_21 + 3) = pU8_20[lVal_21 + 3];
            *(byte *)((int64_t)pU64_17 + lVal_21 + 4) = pU8_20[lVal_21 + 4];
            *(byte *)((int64_t)pU64_17 + lVal_21 + 5) = pU8_20[lVal_21 + 5];
            *(byte *)((int64_t)pU64_17 + lVal_21 + 6) = pU8_20[lVal_21 + 6];
            *(byte *)((int64_t)pU64_17 + lVal_21 + 7) = pU8_20[lVal_21 + 7];
            lVal_28 = lVal_21 + 8;
            lVal_21 = lVal_21 + 8;
          } while (pU8_20 + lVal_28 != local_a0);
        }
      }
      else if (uVal_18 < 0x20) {
        uVal_25 = 0;
LAB_1800b5ce3:
        uVal_26 = uVal_18 & 0xfffffffffffffffc;
        pU8_24 = pU8_27 + uVal_26;
        pU64_17 = (uint *)((int64_t)local_58 + uVal_26);
        do {
          *(uint32_t *)((int64_t)local_58 + uVal_25) = *(uint32_t *)(pU8_27 + uVal_25);
          uVal_25 = uVal_25 + 4;
        } while (uVal_26 != uVal_25);
        if (uVal_18 != uVal_26) goto LAB_1800b5d1b;
      }
      else {
        uVal_25 = uVal_18 & 0xffffffffffffffe0;
        uVal_26 = 0;
        do {
          pU64_16 = (uint32_t *)(pU8_27 + uVal_26);
          uVal_5 = pU64_16[1];
          uVal_6 = pU64_16[2];
          uVal_7 = pU64_16[3];
          pU64_1 = (uint32_t *)(pU8_27 + uVal_26 + 0x10);
          uVal_8 = *pU64_1;
          uVal_9 = pU64_1[1];
          uVal_10 = pU64_1[2];
          uVal_11 = pU64_1[3];
          *(uint32_t *)((int64_t)local_58 + uVal_26) = *pU64_16;
          *(uint32_t *)((int64_t)local_58 + uVal_26 + 4) = uVal_5;
          *(uint32_t *)((int64_t)local_58 + uVal_26 + 8) = uVal_6;
          *(uint32_t *)((int64_t)local_58 + uVal_26 + 0xc) = uVal_7;
          *(uint32_t *)((int64_t)&local_48 + uVal_26) = uVal_8;
          *(uint32_t *)((int64_t)&local_48 + uVal_26 + 4) = uVal_9;
          *(uint32_t *)(&stack0xffffffffffffffc0 + uVal_26) = uVal_10;
          *(uint32_t *)(&stack0xffffffffffffffc4 + uVal_26) = uVal_11;
          uVal_26 = uVal_26 + 0x20;
        } while (uVal_25 != uVal_26);
        if (uVal_18 != uVal_25) {
          if ((uVal_18 & 0x1c) == 0) {
            pU8_24 = pU8_27 + uVal_25;
            pU64_17 = (uint *)((int64_t)local_58 + uVal_25);
            goto LAB_1800b5d1b;
          }
          goto LAB_1800b5ce3;
        }
      }
      local_90 = (uint *)((int64_t)local_58 + uVal_14);
      pU64_17 = local_58;
      do {
        uVal_13 = (uint)(*(byte *)pU64_17 >> 3);
        lVal_21 = (int64_t)(char)(&DAT_180761126)[uVal_13];
        uVal_14 = (uint64_t)((0x80ff0000U >> uVal_13 & 1) != 0);
        uVal_13 = (*(byte *)((int64_t)pU64_17 + 3) & 0x3f |
                 (*(byte *)((int64_t)pU64_17 + 2) & 0x3f) << 6 |
                 (*(byte *)((int64_t)pU64_17 + 1) & 0x3f) << 0xc |
                 ((uint)*(byte *)pU64_17 & *(uint *)(&DAT_1806b0d70 + lVal_21 * 4)) << 0x12) >>
                 ((&DAT_1806b0db0)[lVal_21 * 4] & 0x1f);
        uVal_29 = ((*(byte *)((int64_t)pU64_17 + 1) >> 2 & 0xfffffff0) +
                  (uint)(*(byte *)((int64_t)pU64_17 + 2) >> 6) * 4 |
                  (uint)(*(byte *)((int64_t)pU64_17 + 3) >> 6) |
                  (uint)(uVal_13 < *(uint *)(&DAT_1806b0d90 + lVal_21 * 4)) << 6 |
                  (uint)(0x10ffff < uVal_13) << 8 | (uint)((uVal_13 & 0x7ffff800) == 0xd800) << 7) ^
                 0x2a;
        bFlag_2 = (&DAT_1806b0dd0)[lVal_21 * 4];
        if (uVal_29 >> (bFlag_2 & 0x1f) == 0) {
          lVal_28 = uVal_14 + lVal_21;
          if (((0x1f < uVal_13) && (uVal_13 != 0x22)) && ((uVal_13 != 0x5c && (uVal_13 != 0x7f))))
          goto LAB_1800b5ef8;
LAB_1800b5f20:
          local_68 = pU8_27 + lVal_28;
          param_2 = local_a8;
          local_70 = pU8_27;
          local_60 = uVal_13;
          break;
        }
        uVal_13 = 0xffffffff;
        lVal_28 = 1;
LAB_1800b5ef8:
        ch_12 = func_0x180640e10(uVal_13);
        if (ch_12 == '\0') goto LAB_1800b5f20;
        if (uVal_29 >> (bFlag_2 & 0x1f) == 0) {
          pU64_22 = (uint *)((int64_t)pU64_17 + lVal_21 + uVal_14);
        }
        else {
          pU64_22 = (uint *)((int64_t)pU64_17 + 1);
        }
        pU8_27 = pU8_27 + ((int64_t)pU64_22 - (int64_t)pU64_17);
        pU64_17 = pU64_22;
        param_2 = local_a8;
      } while (pU64_22 < local_90);
    }
LAB_1800b5f36:
    pU8_27 = local_70;
    pLong_3 = *param_2;
    pLong_23 = param_2[1];
    if (pU8_30 != local_70) {
      if (pLong_23 == (int64_t *)0x0) {
        pLong_23 = (int64_t *)0x0;
      }
      else {
        pLong_15 = (int64_t *)0x1;
        do {
          while (pLong_15 != (int64_t *)0x0) {
            bFlag_2 = *pU8_30;
            lVal_21 = pLong_3[1];
            uVal_14 = lVal_21 + 1;
            if ((uint64_t)pLong_3[2] < uVal_14) {
              (*(func_ptr_t )pLong_3[3])(pLong_3);
              lVal_21 = pLong_3[1];
              uVal_14 = lVal_21 + 1;
            }
            pLong_3[1] = uVal_14;
            *(byte *)(*pLong_3 + lVal_21) = bFlag_2;
            pLong_15 = (int64_t *)((int64_t)pLong_23 + -1);
            pU8_30 = pU8_30 + 1;
            pLong_23 = pLong_15;
            if (pU8_30 == pU8_27) goto LAB_1800b5fb2;
          }
          pLong_15 = (int64_t *)0x0;
          pU8_30 = pU8_30 + 1;
        } while (pU8_30 != pU8_27);
      }
    }
LAB_1800b5fb2:
    pU8_30 = local_68;
    *param_2 = pLong_3;
    param_2[1] = pLong_23;
    if (local_68 == (byte *)0x0) goto LAB_1800b6016;
    local_88 = *param_2;
    local_80 = param_2[1];
    func_0x1800b60a0(local_58,&local_88,&local_70);
    *(uint *)param_2 = local_58[0];
    *(uint *)((int64_t)param_2 + 4) = local_58[1];
    *(uint *)(param_2 + 1) = local_58[2];
    *(uint *)((int64_t)param_2 + 0xc) = local_58[3];
  } while (pU8_30 != local_a0);
  pLong_23 = param_2[1];
LAB_1800b6016:
  pU64_16 = local_98;
  if (pLong_23 != (int64_t *)0x0) {
    pLong_3 = *param_2;
    lVal_21 = pLong_3[1];
    uVal_14 = lVal_21 + 1;
    if ((uint64_t)pLong_3[2] < uVal_14) {
      (*(func_ptr_t )pLong_3[3])(pLong_3);
      lVal_21 = pLong_3[1];
      uVal_14 = lVal_21 + 1;
    }
    pLong_3[1] = uVal_14;
    *(uint8_t *)(*pLong_3 + lVal_21) = 0x22;
    param_2[1] = (int64_t *)((int64_t)param_2[1] + -1);
  }
  uVal_5 = *(uint32_t *)((int64_t)param_2 + 4);
  uVal_6 = *(uint32_t *)(param_2 + 1);
  uVal_7 = *(uint32_t *)((int64_t)param_2 + 0xc);
  *pU64_16 = *(uint32_t *)param_2;
  pU64_16[1] = uVal_5;
  pU64_16[2] = uVal_6;
  pU64_16[3] = uVal_7;
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_c8)) {
    return pU64_16;
  }
  func_0x180673080(local_48 ^ (uint64_t)auStack_c8);
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_16 = (uint32_t *)(*fnPtr_4)();
  return pU64_16;
}

// func_0x1800b60a0
uint32_t * func_0x1800b60a0(uint32_t *param_1,int64_t **param_2,uint64_t *param_3)
{
  uint8_t *pU64_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  uint32_t *pU64_8;
  uint64_t uVal_9;
  uint8_t uVal_10;
  uint uVal_11;
  uint8_t *pU64_12;
  uint8_t auStack_a8 [32];
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_a8;
  uVal_11 = *(uint *)(param_3 + 2);
  switch(uVal_11) {
  case 9:
    if (param_2[1] != (int64_t *)0x0) {
      pLong_6 = *param_2;
      lVal_7 = pLong_6[1];
      uVal_9 = lVal_7 + 1;
      if ((uint64_t)pLong_6[2] < uVal_9) {
        (*(func_ptr_t )pLong_6[3])(pLong_6);
        lVal_7 = pLong_6[1];
        uVal_9 = lVal_7 + 1;
      }
      pLong_6[1] = uVal_9;
      *(uint8_t *)(*pLong_6 + lVal_7) = 0x5c;
      pLong_6 = (int64_t *)((int64_t)param_2[1] + -1);
      param_2[1] = pLong_6;
      uVal_10 = 0x74;
joined_r0x0001800b6177:
      if (pLong_6 != (int64_t *)0x0) {
        pLong_6 = *param_2;
        lVal_7 = pLong_6[1];
        uVal_9 = lVal_7 + 1;
        if ((uint64_t)pLong_6[2] < uVal_9) {
          (*(func_ptr_t )pLong_6[3])(pLong_6);
          lVal_7 = pLong_6[1];
          uVal_9 = lVal_7 + 1;
        }
        pLong_6[1] = uVal_9;
        *(uint8_t *)(*pLong_6 + lVal_7) = uVal_10;
        param_2[1] = (int64_t *)((int64_t)param_2[1] + -1);
      }
    }
    break;
  case 10:
    if (param_2[1] != (int64_t *)0x0) {
      pLong_6 = *param_2;
      lVal_7 = pLong_6[1];
      uVal_9 = lVal_7 + 1;
      if ((uint64_t)pLong_6[2] < uVal_9) {
        (*(func_ptr_t )pLong_6[3])(pLong_6);
        lVal_7 = pLong_6[1];
        uVal_9 = lVal_7 + 1;
      }
      pLong_6[1] = uVal_9;
      *(uint8_t *)(*pLong_6 + lVal_7) = 0x5c;
      pLong_6 = (int64_t *)((int64_t)param_2[1] + -1);
      param_2[1] = pLong_6;
      uVal_10 = 0x6e;
      goto joined_r0x0001800b6177;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    goto switchD_1800b60dc_caseD_b;
  case 0xd:
    if (param_2[1] != (int64_t *)0x0) {
      pLong_6 = *param_2;
      lVal_7 = pLong_6[1];
      uVal_9 = lVal_7 + 1;
      if ((uint64_t)pLong_6[2] < uVal_9) {
        (*(func_ptr_t )pLong_6[3])(pLong_6);
        lVal_7 = pLong_6[1];
        uVal_9 = lVal_7 + 1;
      }
      pLong_6[1] = uVal_9;
      *(uint8_t *)(*pLong_6 + lVal_7) = 0x5c;
      pLong_6 = (int64_t *)((int64_t)param_2[1] + -1);
      param_2[1] = pLong_6;
      uVal_11 = 0x72;
joined_r0x0001800b6177:
      uVal_10 = (uint8_t)uVal_11;
      goto joined_r0x0001800b6177;
    }
    break;
  case 0x22:
  case 0x27:
switchD_1800b60dc_caseD_22:
    if (param_2[1] != (int64_t *)0x0) {
      pLong_6 = *param_2;
      lVal_7 = pLong_6[1];
      uVal_9 = lVal_7 + 1;
      if ((uint64_t)pLong_6[2] < uVal_9) {
        (*(func_ptr_t )pLong_6[3])(pLong_6);
        lVal_7 = pLong_6[1];
        uVal_9 = lVal_7 + 1;
      }
      pLong_6[1] = uVal_9;
      *(uint8_t *)(*pLong_6 + lVal_7) = 0x5c;
      pLong_6 = (int64_t *)((int64_t)param_2[1] + -1);
      param_2[1] = pLong_6;
      goto joined_r0x0001800b6177;
    }
    break;
  default:
    if (uVal_11 == 0x5c) goto switchD_1800b60dc_caseD_22;
switchD_1800b60dc_caseD_b:
    if (uVal_11 < 0x100) {
      local_48 = *(uint32_t *)param_2;
      uStack_44 = *(uint32_t *)((int64_t)param_2 + 4);
      uStack_40 = *(uint32_t *)(param_2 + 1);
      uStack_3c = *(uint32_t *)((int64_t)param_2 + 0xc);
      func_0x1800b6340(param_1,&local_48,0x78,uVal_11);
      goto LAB_1800b626e;
    }
    if (uVal_11 < 0x10000) {
      local_58 = *(uint32_t *)param_2;
      uStack_54 = *(uint32_t *)((int64_t)param_2 + 4);
      uStack_50 = *(uint32_t *)(param_2 + 1);
      uStack_4c = *(uint32_t *)((int64_t)param_2 + 0xc);
      func_0x1800b64b0(param_1,&local_58,0x75,uVal_11);
      goto LAB_1800b626e;
    }
    if (uVal_11 < 0x110000) {
      local_68 = *(uint32_t *)param_2;
      uStack_64 = *(uint32_t *)((int64_t)param_2 + 4);
      uStack_60 = *(uint32_t *)(param_2 + 1);
      uStack_5c = *(uint32_t *)((int64_t)param_2 + 0xc);
      func_0x1800b6680(param_1,&local_68,0x55,uVal_11);
      goto LAB_1800b626e;
    }
    pU64_12 = (uint8_t *)*param_3;
    pU64_1 = (uint8_t *)param_3[1];
    if (pU64_12 != pU64_1) {
      do {
        local_88 = *(uint32_t *)param_2;
        uStack_84 = *(uint32_t *)((int64_t)param_2 + 4);
        uStack_80 = *(uint32_t *)(param_2 + 1);
        uStack_7c = *(uint32_t *)((int64_t)param_2 + 0xc);
        func_0x1800b6340(&local_78,&local_88,0x78,*pU64_12);
        *(uint32_t *)param_2 = local_78;
        *(uint32_t *)((int64_t)param_2 + 4) = uStack_74;
        *(uint32_t *)(param_2 + 1) = uStack_70;
        *(uint32_t *)((int64_t)param_2 + 0xc) = uStack_6c;
        pU64_12 = pU64_12 + 1;
      } while (pU64_12 != pU64_1);
    }
  }
  uVal_3 = *(uint32_t *)((int64_t)param_2 + 4);
  uVal_4 = *(uint32_t *)(param_2 + 1);
  uVal_5 = *(uint32_t *)((int64_t)param_2 + 0xc);
  *param_1 = *(uint32_t *)param_2;
  param_1[1] = uVal_3;
  param_1[2] = uVal_4;
  param_1[3] = uVal_5;
LAB_1800b626e:
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_a8)) {
    return param_1;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_a8);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_8 = (uint32_t *)(*fnPtr_2)();
  return pU64_8;
}

// func_0x1800b6340
int64_t ** func_0x1800b6340(int64_t **param_1,int64_t **param_2,uint8_t param_3,uint param_4)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint8_t uVal_4;
  char *fnPtr_5;
  int64_t lVal_6;
  int64_t **ptr2_Long_7;
  uint64_t uVal_8;
  int64_t *pLong_9;
  uint8_t auStack_58 [38];
  uint16_t local_32;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if (param_2[1] == (int64_t *)0x0) {
LAB_1800b63d5:
    pLong_9 = (int64_t *)0x0;
  }
  else {
    pLong_9 = *param_2;
    lVal_6 = pLong_9[1];
    uVal_8 = lVal_6 + 1;
    if ((uint64_t)pLong_9[2] < uVal_8) {
      (*(func_ptr_t )pLong_9[3])(pLong_9);
      lVal_6 = pLong_9[1];
      uVal_8 = lVal_6 + 1;
    }
    pLong_9[1] = uVal_8;
    *(uint8_t *)(*pLong_9 + lVal_6) = 0x5c;
    ptr2_Long_7 = param_2 + 1;
    *ptr2_Long_7 = (int64_t *)((int64_t)*ptr2_Long_7 + -1);
    if (*ptr2_Long_7 == (int64_t *)0x0) goto LAB_1800b63d5;
    pLong_9 = *param_2;
    lVal_6 = pLong_9[1];
    uVal_8 = lVal_6 + 1;
    if ((uint64_t)pLong_9[2] < uVal_8) {
      (*(func_ptr_t )pLong_9[3])(pLong_9);
      lVal_6 = pLong_9[1];
      uVal_8 = lVal_6 + 1;
    }
    pLong_9[1] = uVal_8;
    *(uint8_t *)(*pLong_9 + lVal_6) = param_3;
    pLong_9 = (int64_t *)((int64_t)param_2[1] + -1);
    param_2[1] = pLong_9;
  }
  local_32 = 0x3030;
  fnPtr_5 = (char *)((int64_t)&local_32 + 1);
  do {
    *fnPtr_5 = "0123456789abcdef"[param_4 & 0xf];
    fnPtr_5 = fnPtr_5 + -1;
    uVal_3 = param_4 >> 4;
    param_4 = param_4 >> 4;
  } while (uVal_3 != 0);
  pLong_1 = *param_2;
  if (pLong_9 != (int64_t *)0x0) {
    lVal_6 = pLong_1[1];
    uVal_8 = lVal_6 + 1;
    if ((uint64_t)pLong_1[2] < uVal_8) {
      (*(func_ptr_t )pLong_1[3])(pLong_1);
      lVal_6 = pLong_1[1];
      uVal_8 = lVal_6 + 1;
    }
    pLong_1[1] = uVal_8;
    *(uint8_t *)(*pLong_1 + lVal_6) = 0x30;
    if (pLong_9 != (int64_t *)0x1) {
      uVal_4 = local_32._1_1_;
      lVal_6 = pLong_1[1];
      uVal_8 = lVal_6 + 1;
      if ((uint64_t)pLong_1[2] < uVal_8) {
        (*(func_ptr_t )pLong_1[3])(pLong_1);
        lVal_6 = pLong_1[1];
        uVal_8 = lVal_6 + 1;
      }
      pLong_1[1] = uVal_8;
      *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
      pLong_9 = (int64_t *)((int64_t)pLong_9 + -2);
      goto LAB_1800b6472;
    }
  }
  pLong_9 = (int64_t *)0x0;
LAB_1800b6472:
  *param_1 = pLong_1;
  param_1[1] = pLong_9;
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return param_1;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_7 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_7;
}

// func_0x1800b64b0
int64_t ** func_0x1800b64b0(int64_t **param_1,int64_t **param_2,uint8_t param_3,uint param_4)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint8_t uVal_4;
  char *fnPtr_5;
  int64_t lVal_6;
  int64_t **ptr2_Long_7;
  uint64_t uVal_8;
  int64_t *pLong_9;
  uint8_t auStack_58 [36];
  uint32_t local_34;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if (param_2[1] == (int64_t *)0x0) {
LAB_1800b6545:
    pLong_9 = (int64_t *)0x0;
  }
  else {
    pLong_9 = *param_2;
    lVal_6 = pLong_9[1];
    uVal_8 = lVal_6 + 1;
    if ((uint64_t)pLong_9[2] < uVal_8) {
      (*(func_ptr_t )pLong_9[3])(pLong_9);
      lVal_6 = pLong_9[1];
      uVal_8 = lVal_6 + 1;
    }
    pLong_9[1] = uVal_8;
    *(uint8_t *)(*pLong_9 + lVal_6) = 0x5c;
    ptr2_Long_7 = param_2 + 1;
    *ptr2_Long_7 = (int64_t *)((int64_t)*ptr2_Long_7 + -1);
    if (*ptr2_Long_7 == (int64_t *)0x0) goto LAB_1800b6545;
    pLong_9 = *param_2;
    lVal_6 = pLong_9[1];
    uVal_8 = lVal_6 + 1;
    if ((uint64_t)pLong_9[2] < uVal_8) {
      (*(func_ptr_t )pLong_9[3])(pLong_9);
      lVal_6 = pLong_9[1];
      uVal_8 = lVal_6 + 1;
    }
    pLong_9[1] = uVal_8;
    *(uint8_t *)(*pLong_9 + lVal_6) = param_3;
    pLong_9 = (int64_t *)((int64_t)param_2[1] + -1);
    param_2[1] = pLong_9;
  }
  local_34 = 0x30303030;
  fnPtr_5 = (char *)((int64_t)&local_34 + 3);
  do {
    *fnPtr_5 = "0123456789abcdef"[param_4 & 0xf];
    fnPtr_5 = fnPtr_5 + -1;
    uVal_3 = param_4 >> 4;
    param_4 = param_4 >> 4;
  } while (uVal_3 != 0);
  pLong_1 = *param_2;
  if (pLong_9 != (int64_t *)0x0) {
    lVal_6 = pLong_1[1];
    uVal_8 = lVal_6 + 1;
    if ((uint64_t)pLong_1[2] < uVal_8) {
      (*(func_ptr_t )pLong_1[3])(pLong_1);
      lVal_6 = pLong_1[1];
      uVal_8 = lVal_6 + 1;
    }
    pLong_1[1] = uVal_8;
    *(uint8_t *)(*pLong_1 + lVal_6) = 0x30;
    if (pLong_9 != (int64_t *)0x1) {
      uVal_4 = local_34._1_1_;
      lVal_6 = pLong_1[1];
      uVal_8 = lVal_6 + 1;
      if ((uint64_t)pLong_1[2] < uVal_8) {
        (*(func_ptr_t )pLong_1[3])(pLong_1);
        lVal_6 = pLong_1[1];
        uVal_8 = lVal_6 + 1;
      }
      pLong_1[1] = uVal_8;
      *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
      if (pLong_9 != (int64_t *)0x2) {
        uVal_4 = local_34._2_1_;
        lVal_6 = pLong_1[1];
        uVal_8 = lVal_6 + 1;
        if ((uint64_t)pLong_1[2] < uVal_8) {
          (*(func_ptr_t )pLong_1[3])(pLong_1);
          lVal_6 = pLong_1[1];
          uVal_8 = lVal_6 + 1;
        }
        pLong_1[1] = uVal_8;
        *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
        if (pLong_9 != (int64_t *)0x3) {
          uVal_4 = local_34._3_1_;
          lVal_6 = pLong_1[1];
          uVal_8 = lVal_6 + 1;
          if ((uint64_t)pLong_1[2] < uVal_8) {
            (*(func_ptr_t )pLong_1[3])(pLong_1);
            lVal_6 = pLong_1[1];
            uVal_8 = lVal_6 + 1;
          }
          pLong_1[1] = uVal_8;
          *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
          pLong_9 = (int64_t *)((int64_t)pLong_9 + -4);
          goto LAB_1800b6617;
        }
      }
    }
  }
  pLong_9 = (int64_t *)0x0;
LAB_1800b6617:
  *param_1 = pLong_1;
  param_1[1] = pLong_9;
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return param_1;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_7 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_7;
}

// func_0x1800b6680
int64_t ** func_0x1800b6680(int64_t **param_1,int64_t **param_2,uint8_t param_3,uint param_4)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint8_t uVal_4;
  char *fnPtr_5;
  int64_t lVal_6;
  int64_t **ptr2_Long_7;
  uint64_t uVal_8;
  int64_t *pLong_9;
  uint8_t auStack_58 [32];
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  if (param_2[1] == (int64_t *)0x0) {
LAB_1800b6715:
    pLong_9 = (int64_t *)0x0;
  }
  else {
    pLong_9 = *param_2;
    lVal_6 = pLong_9[1];
    uVal_8 = lVal_6 + 1;
    if ((uint64_t)pLong_9[2] < uVal_8) {
      (*(func_ptr_t )pLong_9[3])(pLong_9);
      lVal_6 = pLong_9[1];
      uVal_8 = lVal_6 + 1;
    }
    pLong_9[1] = uVal_8;
    *(uint8_t *)(*pLong_9 + lVal_6) = 0x5c;
    ptr2_Long_7 = param_2 + 1;
    *ptr2_Long_7 = (int64_t *)((int64_t)*ptr2_Long_7 + -1);
    if (*ptr2_Long_7 == (int64_t *)0x0) goto LAB_1800b6715;
    pLong_9 = *param_2;
    lVal_6 = pLong_9[1];
    uVal_8 = lVal_6 + 1;
    if ((uint64_t)pLong_9[2] < uVal_8) {
      (*(func_ptr_t )pLong_9[3])(pLong_9);
      lVal_6 = pLong_9[1];
      uVal_8 = lVal_6 + 1;
    }
    pLong_9[1] = uVal_8;
    *(uint8_t *)(*pLong_9 + lVal_6) = param_3;
    pLong_9 = (int64_t *)((int64_t)param_2[1] + -1);
    param_2[1] = pLong_9;
  }
  local_38 = &DAT_3030303030303030;
  fnPtr_5 = (char *)((int64_t)&local_38 + 7);
  do {
    *fnPtr_5 = "0123456789abcdef"[param_4 & 0xf];
    fnPtr_5 = fnPtr_5 + -1;
    uVal_3 = param_4 >> 4;
    param_4 = param_4 >> 4;
  } while (uVal_3 != 0);
  pLong_1 = *param_2;
  if (pLong_9 != (int64_t *)0x0) {
    lVal_6 = pLong_1[1];
    uVal_8 = lVal_6 + 1;
    if ((uint64_t)pLong_1[2] < uVal_8) {
      (*(func_ptr_t )pLong_1[3])(pLong_1);
      lVal_6 = pLong_1[1];
      uVal_8 = lVal_6 + 1;
    }
    pLong_1[1] = uVal_8;
    *(uint8_t *)(*pLong_1 + lVal_6) = 0x30;
    if (pLong_9 != (int64_t *)0x1) {
      uVal_4 = local_38._1_1_;
      lVal_6 = pLong_1[1];
      uVal_8 = lVal_6 + 1;
      if ((uint64_t)pLong_1[2] < uVal_8) {
        (*(func_ptr_t )pLong_1[3])(pLong_1);
        lVal_6 = pLong_1[1];
        uVal_8 = lVal_6 + 1;
      }
      pLong_1[1] = uVal_8;
      *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
      if (pLong_9 != (int64_t *)0x2) {
        uVal_4 = local_38._2_1_;
        lVal_6 = pLong_1[1];
        uVal_8 = lVal_6 + 1;
        if ((uint64_t)pLong_1[2] < uVal_8) {
          (*(func_ptr_t )pLong_1[3])(pLong_1);
          lVal_6 = pLong_1[1];
          uVal_8 = lVal_6 + 1;
        }
        pLong_1[1] = uVal_8;
        *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
        if (pLong_9 != (int64_t *)0x3) {
          uVal_4 = local_38._3_1_;
          lVal_6 = pLong_1[1];
          uVal_8 = lVal_6 + 1;
          if ((uint64_t)pLong_1[2] < uVal_8) {
            (*(func_ptr_t )pLong_1[3])(pLong_1);
            lVal_6 = pLong_1[1];
            uVal_8 = lVal_6 + 1;
          }
          pLong_1[1] = uVal_8;
          *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
          if (pLong_9 != (int64_t *)0x4) {
            uVal_4 = local_38._4_1_;
            lVal_6 = pLong_1[1];
            uVal_8 = lVal_6 + 1;
            if ((uint64_t)pLong_1[2] < uVal_8) {
              (*(func_ptr_t )pLong_1[3])(pLong_1);
              lVal_6 = pLong_1[1];
              uVal_8 = lVal_6 + 1;
            }
            pLong_1[1] = uVal_8;
            *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
            if (pLong_9 != (int64_t *)0x5) {
              uVal_4 = local_38._5_1_;
              lVal_6 = pLong_1[1];
              uVal_8 = lVal_6 + 1;
              if ((uint64_t)pLong_1[2] < uVal_8) {
                (*(func_ptr_t )pLong_1[3])(pLong_1);
                lVal_6 = pLong_1[1];
                uVal_8 = lVal_6 + 1;
              }
              pLong_1[1] = uVal_8;
              *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
              if (pLong_9 != (int64_t *)0x6) {
                uVal_4 = local_38._6_1_;
                lVal_6 = pLong_1[1];
                uVal_8 = lVal_6 + 1;
                if ((uint64_t)pLong_1[2] < uVal_8) {
                  (*(func_ptr_t )pLong_1[3])(pLong_1);
                  lVal_6 = pLong_1[1];
                  uVal_8 = lVal_6 + 1;
                }
                pLong_1[1] = uVal_8;
                *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
                if (pLong_9 != (int64_t *)&DAT_00000007) {
                  uVal_4 = local_38._7_1_;
                  lVal_6 = pLong_1[1];
                  uVal_8 = lVal_6 + 1;
                  if ((uint64_t)pLong_1[2] < uVal_8) {
                    (*(func_ptr_t )pLong_1[3])(pLong_1);
                    lVal_6 = pLong_1[1];
                    uVal_8 = lVal_6 + 1;
                  }
                  pLong_1[1] = uVal_8;
                  *(uint8_t *)(*pLong_1 + lVal_6) = uVal_4;
                  pLong_9 = pLong_9 + -1;
                  goto LAB_1800b68cb;
                }
              }
            }
          }
        }
      }
    }
  }
  pLong_9 = (int64_t *)0x0;
LAB_1800b68cb:
  *param_1 = pLong_1;
  param_1[1] = pLong_9;
  if (DAT_18083cf40 == (local_30 ^ (uint64_t)auStack_58)) {
    return param_1;
  }
  func_0x180673080(local_30 ^ (uint64_t)auStack_58);
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Long_7 = (int64_t **)(*fnPtr_2)();
  return ptr2_Long_7;
}

// func_0x1800b6940
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800b6940(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af244;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af240;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af248;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af24c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x63671535;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x1800b6960
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800b6960(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806af254;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806af250;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806af258;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806af25c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xe7;
    param_1[1][1] = param_1[1][1] ^ 0x8b;
    param_1[1][2] = 0;
  }
  return;
}

// Unwind@1800b6db0
void Unwind_1800b6db0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x70) != 0) {
    thunk_FUN_180695dd0();
  }
  return;
}

// Unwind@1800b6e00
void Unwind_1800b6e00(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800b6e30
void Unwind_1800b6e30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800b6e60
void Unwind_1800b6e60(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800b6e90
void Unwind_1800b6e90(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800b6ec0
void Unwind_1800b6ec0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0xb0) != 0) {
    (**(func_ptr_t *)(param_2 + 0xa8))();
  }
  return;
}

// Unwind@1800b6f10
void Unwind_1800b6f10(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x98) != 0) {
    (**(func_ptr_t *)(param_2 + 0x90))();
  }
  return;
}

// Unwind@1800b6f60
void Unwind_1800b6f60(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x48) != 0) {
    (**(func_ptr_t *)(param_2 + 0x40))();
  }
  return;
}

// Unwind@1800b6fb0
void Unwind_1800b6fb0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x70) != 0) {
    thunk_FUN_180695dd0();
  }
  return;
}

// Unwind@1800b7000
void Unwind_1800b7000(uint64_t param_1,int64_t param_2)
{
  func_0x1800762e0(param_2 + 0x80);
  return;
}

// Unwind@1800b7040
void Unwind_1800b7040(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Catch@1800b7070
uint8_t * Catch_1800b7070(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)(*(int64_t *)(param_2 + 0xe0) + 1) = 1;
  return &LAB_1800b6c48;
}

// func_0x1800b70c0
void func_0x1800b70c0(uint64_t *param_1,uint64_t param_2)
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  
  if (param_2 < 0x492492492492493) {
    uVal_6 = *param_1;
    uVal_7 = ((int64_t)(param_1[2] - uVal_6) >> 3) * 0x6db6db6db6db6db7;
    uVal_9 = 0x492492492492492 - (uVal_7 >> 1);
    uVal_10 = (uVal_7 >> 1) + uVal_7;
    if (uVal_10 <= param_2) {
      uVal_10 = param_2;
    }
    if (uVal_9 <= uVal_7 && uVal_7 - uVal_9 != 0) {
      uVal_10 = 0x492492492492492;
    }
    if (uVal_10 < 0x492492492492493) {
      uVal_7 = param_1[1];
      lVal_8 = uVal_10 * 0x38;
      if (uVal_10 == 0) {
        uVal_10 = 0;
      }
      else if (uVal_10 < 0x4a) {
        uVal_10 = func_0x180672de0(lVal_8);
      }
      else {
        if (uVal_10 == 0x492492492492492) goto LAB_1800b73c2;
        lVal_4 = func_0x180672de0(lVal_8 + 0x27);
        uVal_10 = lVal_4 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_10 - 8) = lVal_4;
      }
      lVal_4 = uVal_7 - uVal_6;
      pArr16_5 = (uint8_t (*)[16])(uVal_10 + lVal_4);
      lVal_4 = (lVal_4 >> 3) * -0x6db6db6db6db6db7;
      uVal_6 = lVal_4 + param_2;
      if (uVal_6 != 0) {
        if ((uVal_6 & 3) != 0) {
          uVal_7 = 0;
          do {
            pArr16_5[1] = ZEXT816(0);
            pArr16_5[2] = ZEXT816(0);
            *pArr16_5 = ZEXT816(0);
            *(func_ptr_t *)(pArr16_5[1] + 8) = func_0x1800fe430;
            *(uint64_t *)pArr16_5[3] = 0;
            pArr16_5 = (uint8_t (*)[16])(pArr16_5[3] + 8);
            uVal_7 = uVal_7 + 1;
          } while ((uVal_6 & 3) != uVal_7);
          uVal_6 = uVal_6 - uVal_7;
        }
        if (2 < (lVal_4 + param_2) - 1) {
          do {
            pArr16_5[1] = ZEXT816(0);
            pArr16_5[2] = ZEXT816(0);
            *pArr16_5 = ZEXT816(0);
            *(func_ptr_t *)(pArr16_5[1] + 8) = func_0x1800fe430;
            *(uint64_t *)pArr16_5[3] = 0;
            *(uint8_t (*)[16])(pArr16_5[4] + 8) = ZEXT816(0);
            *(uint8_t (*)[16])(pArr16_5[3] + 8) = ZEXT816(0);
            *(uint8_t (*)[16])(pArr16_5[5] + 8) = ZEXT816(0);
            *(func_ptr_t *)pArr16_5[5] = func_0x1800fe430;
            *(uint64_t *)(pArr16_5[6] + 8) = 0;
            pArr16_5[8] = ZEXT816(0);
            pArr16_5[7] = ZEXT816(0);
            pArr16_5[9] = ZEXT816(0);
            *(func_ptr_t *)(pArr16_5[8] + 8) = func_0x1800fe430;
            *(uint64_t *)pArr16_5[10] = 0;
            *(uint8_t (*)[16])(pArr16_5[0xb] + 8) = ZEXT816(0);
            *(uint8_t (*)[16])(pArr16_5[10] + 8) = ZEXT816(0);
            *(uint8_t (*)[16])(pArr16_5[0xc] + 8) = ZEXT816(0);
            *(func_ptr_t *)pArr16_5[0xc] = func_0x1800fe430;
            *(uint64_t *)(pArr16_5[0xd] + 8) = 0;
            pArr16_5 = pArr16_5 + 0xe;
            uVal_6 = uVal_6 - 4;
          } while (uVal_6 != 0);
        }
      }
      uVal_7 = *param_1;
      uVal_6 = param_1[1];
      if (uVal_7 != uVal_6) {
        lVal_4 = uVal_10 + 0x18;
        lVal_11 = uVal_7 + 0x18;
        do {
          *(uint8_t *)(lVal_4 + -8) = *(uint8_t *)(lVal_11 + -8);
          uVal_1 = *(uint32_t *)(lVal_11 + -0x14);
          uVal_2 = *(uint32_t *)(lVal_11 + -0x10);
          uVal_3 = *(uint32_t *)(lVal_11 + -0xc);
          *(uint32_t *)(lVal_4 + -0x18) = *(uint32_t *)(lVal_11 + -0x18);
          *(uint32_t *)(lVal_4 + -0x14) = uVal_1;
          *(uint32_t *)(lVal_4 + -0x10) = uVal_2;
          *(uint32_t *)(lVal_4 + -0xc) = uVal_3;
          func_0x1800fe3d0(lVal_4,lVal_11);
          *(uint64_t *)(lVal_4 + 0x18) = *(uint64_t *)(lVal_11 + 0x18);
          lVal_4 = lVal_4 + 0x38;
          uVal_7 = lVal_11 + 0x20;
          lVal_11 = lVal_11 + 0x38;
        } while (uVal_7 != uVal_6);
        uVal_7 = *param_1;
      }
      if (uVal_7 != 0) {
        uVal_6 = param_1[1];
        if (uVal_7 == uVal_6) {
          uVal_6 = param_1[2] - uVal_7;
        }
        else {
          do {
            if (*(int64_t *)(uVal_7 + 0x20) != 0) {
              (**(func_ptr_t *)(uVal_7 + 0x18))();
            }
            uVal_7 = uVal_7 + 0x38;
          } while (uVal_7 != uVal_6);
          uVal_7 = *param_1;
          uVal_6 = param_1[2] - uVal_7;
        }
        if (0xfff < uVal_6) {
          if (0x1f < (uVal_7 - 8) - *(uint64_t *)(uVal_7 - 8)) goto LAB_1800b73cc;
          uVal_6 = uVal_6 + 0x27;
          uVal_7 = *(uint64_t *)(uVal_7 - 8);
        }
        thunk_FUN_180695dd0(uVal_7,uVal_6);
      }
      *param_1 = uVal_10;
      param_1[1] = param_2 * 0x38 + uVal_10;
      param_1[2] = lVal_8 + uVal_10;
      return;
    }
LAB_1800b73c2:
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_1800b73cc:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800b73d0
void Unwind_1800b73d0(uint64_t param_1,int64_t param_2)
{
  func_0x1800b74f0(param_2 + 0x48);
  func_0x1800b7430(param_2 + 0x20);
  return;
}

// Unwind@1800b7410
void Unwind_1800b7410(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800b7430
void func_0x1800b7430(int64_t param_1)
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
      if (*(int64_t *)(lVal_4 + 0x20) != 0) {
        (**(func_ptr_t *)(lVal_4 + 0x18))();
      }
      lVal_4 = lVal_4 + 0x38;
    } while (lVal_4 != lVal_1);
    lVal_2 = *(int64_t *)(param_1 + 8);
    lVal_4 = *(int64_t *)(param_1 + 0x10);
  }
  uVal_3 = lVal_4 * 0x38;
  if (0xfff < uVal_3) {
    if (0x1f < (uint64_t)((lVal_2 + -8) - *(int64_t *)(lVal_2 + -8))) {
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_3 = uVal_3 + 0x27;
    lVal_2 = *(int64_t *)(lVal_2 + -8);
  }
  thunk_FUN_180695dd0(lVal_2,uVal_3);
  return;
}

// Unwind@1800b74d0
void Unwind_1800b74d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800b74f0
void func_0x1800b74f0(int64_t *param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_1 = param_1[1];
  for (lVal_2 = *param_1; lVal_2 != lVal_1; lVal_2 = lVal_2 + 0x38) {
    if (*(int64_t *)(lVal_2 + 0x20) != 0) {
      (**(func_ptr_t *)(lVal_2 + 0x18))();
    }
  }
  return;
}

// Unwind@1800b7530
void Unwind_1800b7530(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800b7550
int64_t func_0x1800b7550(int64_t *param_1,int64_t param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int iVal_4;
  bool bFlag_5;
  void *pVoid_6;
  int64_t lVal_7;
  void *pVoid_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  
  lVal_1 = *param_1;
  lVal_10 = *(int64_t *)(lVal_1 + 8);
  lVal_7 = lVal_1;
  if (*(char *)(lVal_10 + 0x19) == '\0') {
    if (*(uint64_t *)(param_2 + 0x20) < 0x10) {
      pVoid_6 = (void *)(param_2 + 8);
    }
    else {
      pVoid_6 = *(void **)(param_2 + 8);
    }
    uVal_2 = *(uint64_t *)(param_2 + 0x18);
    do {
      if (*(uint64_t *)(lVal_10 + 0x40) < 0x10) {
        pVoid_8 = (void *)(lVal_10 + 0x28);
      }
      else {
        pVoid_8 = *(void **)(lVal_10 + 0x28);
      }
      uVal_3 = *(uint64_t *)(lVal_10 + 0x38);
      uVal_9 = uVal_3;
      if (uVal_2 < uVal_3) {
        uVal_9 = uVal_2;
      }
      iVal_4 = memcmp(pVoid_8,pVoid_6,uVal_9);
      bFlag_5 = uVal_3 < uVal_2;
      if (iVal_4 != 0) {
        bFlag_5 = iVal_4 < 0;
      }
      if (bFlag_5 == false) {
        lVal_7 = lVal_10;
      }
      lVal_10 = *(int64_t *)(lVal_10 + (uint64_t)bFlag_5 * 0x10);
    } while (*(char *)(lVal_10 + 0x19) == '\0');
  }
  if (*(char *)(lVal_7 + 0x19) == '\0') {
    if (*(uint64_t *)(lVal_7 + 0x40) < 0x10) {
      pVoid_6 = (void *)(lVal_7 + 0x28);
      uVal_2 = *(uint64_t *)(lVal_7 + 0x38);
      uVal_3 = *(uint64_t *)(param_2 + 0x18);
      uVal_9 = *(uint64_t *)(param_2 + 0x20);
    }
    else {
      pVoid_6 = *(void **)(lVal_7 + 0x28);
      uVal_2 = *(uint64_t *)(lVal_7 + 0x38);
      uVal_3 = *(uint64_t *)(param_2 + 0x18);
      uVal_9 = *(uint64_t *)(param_2 + 0x20);
    }
    if (uVal_9 < 0x10) {
      pVoid_8 = (void *)(param_2 + 8);
    }
    else {
      pVoid_8 = *(void **)(param_2 + 8);
    }
    uVal_9 = uVal_3;
    if (uVal_2 < uVal_3) {
      uVal_9 = uVal_2;
    }
    iVal_4 = memcmp(pVoid_8,pVoid_6,uVal_9);
    bFlag_5 = uVal_2 <= uVal_3;
    if (iVal_4 != 0) {
      bFlag_5 = -1 < iVal_4;
    }
    if (bFlag_5) {
      return lVal_7;
    }
    return lVal_1;
  }
  return lVal_1;
}

// func_0x1800b7670
void func_0x1800b7670(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  
  pLong_3 = *(int64_t **)(param_1 + 0x60);
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
  pLong_3 = *(int64_t **)(param_1 + 0x50);
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
  pLong_3 = *(int64_t **)(param_1 + 0x40);
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
  uVal_4 = *(uint64_t *)(param_1 + 0x20);
  if (0xf < uVal_4) {
    lVal_5 = *(int64_t *)(param_1 + 8);
    uVal_6 = uVal_4 + 1;
    lVal_7 = lVal_5;
    if (0xfff < uVal_6) {
      lVal_7 = *(int64_t *)(lVal_5 + -8);
      if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_7)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_4 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0xf;
  *(uint8_t *)(param_1 + 8) = 0;
  return;
}

// Unwind@1800b9920
void Unwind_1800b9920(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_2 + 0xb8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0xa0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800b9af2;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0xb0) = 0;
  *(uint64_t *)(param_2 + 0xb8) = 0xf;
  *(uint8_t *)(param_2 + 0xa0) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x98);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x80);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800b9af2;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x90) = 0;
  *(uint64_t *)(param_2 + 0x98) = 0xf;
  *(uint8_t *)(int64_t *)(param_2 + 0x80) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x78);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x60);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800b9af2;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x70) = 0;
  *(uint64_t *)(param_2 + 0x78) = 0xf;
  *(uint8_t *)(param_2 + 0x60) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x58);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x40);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1800b9af2;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x50) = 0;
  *(uint64_t *)(param_2 + 0x58) = 0xf;
  *(uint8_t *)(param_2 + 0x40) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x38);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x20);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_1800b9af2:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x30) = 0;
  *(uint64_t *)(param_2 + 0x38) = 0xf;
  *(uint8_t *)(param_2 + 0x20) = 0;
  *(int64_t *)(param_2 + 0x248) = param_2 + 0xa0;
  *(uint8_t *)(param_2 + 0x25e) = 1;
  return;
}

// Unwind@1800b9b00
void Unwind_1800b9b00(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x248);
  if ((param_2 + 0x20 == lVal_1 | *(byte *)(param_2 + 0x25e) & 1) == 0) {
    do {
      lVal_1 = lVal_1 + -0x20;
      func_0x180001e70(lVal_1);
    } while (lVal_1 != param_2 + 0x20);
  }
  return;
}

// Unwind@1800b9b60
void Unwind_1800b9b60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2dd8) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x20;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800b9bc0
void Unwind_1800b9bc0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  
  lVal_5 = 0x1e0;
  do {
    uVal_1 = *(uint64_t *)(param_2 + 0x38 + lVal_5);
    if (0xf < uVal_1) {
      lVal_2 = *(int64_t *)(param_2 + 0x20 + lVal_5);
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
    *(uint64_t *)(param_2 + 0x30 + lVal_5) = 0;
    *(uint64_t *)(param_2 + 0x38 + lVal_5) = 0xf;
    *(uint8_t *)(param_2 + 0x20 + lVal_5) = 0;
    lVal_5 = lVal_5 + -0x20;
  } while (lVal_5 != -0x20);
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x200;
  *(uint8_t *)(param_2 + 0x25f) = 1;
  return;
}

// Unwind@1800b9c70
void Unwind_1800b9c70(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x250);
  if ((param_2 + 0x20 == lVal_1 | *(byte *)(param_2 + 0x25f) & 1) == 0) {
    do {
      lVal_1 = lVal_1 + -0x20;
      func_0x180001e70(lVal_1);
    } while (lVal_1 != param_2 + 0x20);
  }
  return;
}

// Unwind@1800b9cd0
void Unwind_1800b9cd0(uint64_t param_1,int64_t param_2)
{
  func_0x1800809f0(param_2 + 0x220);
  return;
}

// Unwind@1800b9d10
void Unwind_1800b9d10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2df4) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x40;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800b9d70
void Unwind_1800b9d70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2e68) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0xe0;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800b9dd0
void Unwind_1800b9dd0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2e80) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x100;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800b9e30
void Unwind_1800b9e30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2e98) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x120;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800b9e90
void Unwind_1800b9e90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2eb0) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x140;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800b9ef0
void Unwind_1800b9ef0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2ec8) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x160;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800b9f50
void Unwind_1800b9f50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2ee4) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x180;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800b9fb0
void Unwind_1800b9fb0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2ef8) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x1a0;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800ba010
void Unwind_1800ba010(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2f0c) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x1c0;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800ba070
void Unwind_1800ba070(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2f20) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x1e0;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800ba0d0
void Unwind_1800ba0d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2f34) = 0;
  *(int64_t *)(param_2 + 0x250) = param_2 + 0x200;
  *(uint8_t *)(param_2 + 0x25f) = 0;
  return;
}

// Unwind@1800ba130
void Unwind_1800ba130(uint64_t param_1,int64_t param_2)
{
  func_0x1800809f0(param_2 + 0x220);
  return;
}

// func_0x1800ba170
uint8_t (*func_0x1800ba170(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t (*pArr16_8)[16];
  uint64_t uVal_9;
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_1 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)param_2 + 4);
      uVal_4 = *(uint32_t *)(param_2 + 1);
      uVal_5 = *(uint32_t *)((int64_t)param_2 + 0xc);
      *(uint32_t *)*param_1 = *(uint32_t *)param_2;
      *(uint32_t *)(*param_1 + 4) = uVal_3;
      *(uint32_t *)(*param_1 + 8) = uVal_4;
      *(uint32_t *)(*param_1 + 0xc) = uVal_5;
    }
    else {
      uVal_6 = uVal_1 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_6) {
        uVal_9 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        uVal_6 = func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_9 + 0x28);
        uVal_6 = lVal_7 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_6 - 8) = lVal_7;
      }
      *(uint64_t *)*param_1 = uVal_6;
      *(uint64_t *)param_1[1] = uVal_1;
      *(uint64_t *)(param_1[1] + 8) = uVal_9;
      func_0x1806aa960(uVal_6,param_2,uVal_1 + 1);
    }
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_8 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_8;
}

// func_0x1800ba230
void func_0x1800ba230(uint64_t param_1,int param_2,int param_3)
{
  _malloc_base(param_2 * param_3);
  return;
}

// func_0x1800ba240
uint64_t func_0x1800ba240(int64_t param_1)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  
  if (((((param_1 != 0) && (*(int64_t *)(param_1 + 0x40) != 0)) &&
       (*(int64_t *)(param_1 + 0x48) != 0)) &&
      ((pLong_2 = *(int64_t **)(param_1 + 0x38), pLong_2 != (int64_t *)0x0 && (*pLong_2 == param_1)))
      ) && (*(int *)(pLong_2 + 1) - 0x3f34U < 0x20)) {
    *(uint64_t *)((int64_t)pLong_2 + 0x34) = 0;
    *(uint32_t *)((int64_t)pLong_2 + 0x3c) = 0;
    if (((*(int64_t *)(param_1 + 0x40) != 0) && (*(int64_t *)(param_1 + 0x48) != 0)) &&
       ((pLong_2 = *(int64_t **)(param_1 + 0x38), pLong_2 != (int64_t *)0x0 &&
        ((*pLong_2 == param_1 && (*(int *)(pLong_2 + 1) - 0x3f34U < 0x20)))))) {
      *(uint32_t *)((int64_t)pLong_2 + 0x24) = 0;
      *(uint64_t *)(param_1 + 0x10) = 0;
      *(uint8_t (*)[16])(param_1 + 0x28) = ZEXT816(0);
      if (*(uint *)(pLong_2 + 2) != 0) {
        *(uint64_t *)(param_1 + 0x60) = (uint64_t)(*(uint *)(pLong_2 + 2) & 1);
      }
      pLong_2[1] = 0x3f34;
      *(uint64_t *)((int64_t)pLong_2 + 0x14) = 0xffffffff00000000;
      *(uint32_t *)((int64_t)pLong_2 + 0x1c) = 0x8000;
      pLong_2[5] = 0;
      pLong_2[9] = 0;
      pLong_1 = pLong_2 + 0xaa;
      pLong_2[0x11] = (int64_t)pLong_1;
      pLong_2[0xd] = (int64_t)pLong_1;
      pLong_2[0xc] = (int64_t)pLong_1;
      pLong_2[0x37c] = -0xffffffff;
      return 0;
    }
  }
  return 0xfffffffe;
}

// func_0x1800ba330
int func_0x1800ba330(int64_t param_1,uint param_2,char *param_3,int param_4)
{
  int64_t *pLong_1;
  uint uVal_2;
  uint64_t uVal_3;
  int64_t *pLong_4;
  int iVal_5;
  func_ptr_t fnPtr_6;
  
  if (param_3 == (char *)0x0) {
    return -6;
  }
  if (param_4 != 0x70) {
    return -6;
  }
  if (*param_3 != '1') {
    return -6;
  }
  if (param_1 == 0) {
    return -2;
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  fnPtr_6 = *(func_ptr_t *)(param_1 + 0x40);
  if (fnPtr_6 == (func_ptr_t )0x0) {
    fnPtr_6 = func_0x1800ba230;
    *(func_ptr_t *)(param_1 + 0x40) = func_0x1800ba230;
    *(uint64_t *)(param_1 + 0x50) = 0;
    uVal_3 = 0;
  }
  else {
    uVal_3 = *(uint64_t *)(param_1 + 0x50);
  }
  *(func_ptr_t *)(param_1 + 0x48) = func_0x1800780b0;
  pLong_4 = (int64_t *)(*fnPtr_6)(uVal_3,1,0x1bf0);
  if (pLong_4 == (int64_t *)0x0) {
    return -4;
  }
  *(int64_t **)(param_1 + 0x38) = pLong_4;
  *pLong_4 = param_1;
  pLong_4[8] = 0;
  *(uint32_t *)(pLong_4 + 1) = 0x3f34;
  fnPtr_6 = *(func_ptr_t *)(param_1 + 0x48);
  if ((((*(int64_t *)(param_1 + 0x40) != 0) &&
       (pLong_1 = *(int64_t **)(param_1 + 0x38), pLong_1 != (int64_t *)0x0)) && (*pLong_1 == param_1)
      ) && (*(int *)(pLong_1 + 1) - 0x3f34U < 0x20)) {
    if ((int)param_2 < 0) {
      if (param_2 < 0xfffffff1) goto LAB_1800ba4a4;
      iVal_5 = 0;
      uVal_2 = -param_2;
    }
    else {
      iVal_5 = (param_2 >> 4) + 5;
      uVal_2 = param_2 & 0xf;
      if (0x2f < param_2) {
        uVal_2 = param_2;
      }
    }
    if ((uVal_2 - 8 < 8) || (uVal_2 == 0)) {
      if ((pLong_1[8] != 0) && (*(uint *)(pLong_1 + 6) != uVal_2)) {
        (*fnPtr_6)(*(uint64_t *)(param_1 + 0x50));
        pLong_1[8] = 0;
      }
      *(int *)(pLong_1 + 2) = iVal_5;
      *(uint *)(pLong_1 + 6) = uVal_2;
      iVal_5 = func_0x1800ba240(param_1);
      if (iVal_5 == 0) {
        return 0;
      }
      fnPtr_6 = *(func_ptr_t *)(param_1 + 0x48);
      goto LAB_1800ba4a9;
    }
  }
LAB_1800ba4a4:
  iVal_5 = -2;
LAB_1800ba4a9:
  (*fnPtr_6)(*(uint64_t *)(param_1 + 0x50),pLong_4);
  *(uint64_t *)(param_1 + 0x38) = 0;
  return iVal_5;
}

// func_0x1800ba4d0
uint64_t func_0x1800ba4d0(int param_1,int64_t param_2,uint param_3,int64_t *param_4,uint *param_5, uint8_t *param_6)
{
  short *pSize_1;
  uint32_t *pU64_2;
  undefined3 uVal_3;
  int64_t *pLong_4;
  uint64_t uVal_5;
  byte bFlag_6;
  byte bFlag_7;
  uint uVal_8;
  uint uVal_9;
  ushort uVal_10;
  uint uVal_11;
  uint *pU64_12;
  uint *pU64_13;
  uint uVal_14;
  int64_t *pLong_15;
  uint64_t uVal_16;
  uint uVal_17;
  uint64_t uVal_18;
  uint *pU64_19;
  uint8_t uVal_20;
  uint uVal_21;
  int iVal_22;
  uint uVal_23;
  int iVal_24;
  int64_t lVal_25;
  uint uVal_26;
  uint8_t auStack_e8 [32];
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  int64_t *local_98;
  uint local_8c;
  ushort auStack_88 [5];
  uint16_t local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  uint8_t local_68 [2];
  ushort auStack_66 [4];
  ushort uStack_5e;
  ushort uStack_5c;
  ushort uStack_5a;
  uint8_t local_58 [4];
  ushort uStack_54;
  ushort uStack_52;
  ushort uStack_50;
  ushort uStack_4e;
  ushort uStack_4c;
  ushort uStack_4a;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  _local_68 = ZEXT816(0);
  _local_58 = ZEXT816(0);
  pLong_15 = param_4;
  if (param_3 == 0) {
    uVal_26 = *param_5;
LAB_1800ba5bf:
    if (uStack_4c != 0) {
      pU64_12 = (uint *)&DAT_0000000e;
LAB_1800ba6bd:
      uVal_10 = 0;
      goto LAB_1800ba6bf;
    }
    if (uStack_4e != 0) {
      pU64_12 = (uint *)0xd;
      goto LAB_1800ba6bd;
    }
    if (uStack_50 != 0) {
      pU64_12 = (uint *)0xc;
      goto LAB_1800ba6bd;
    }
    if (uStack_52 != 0) {
      pU64_12 = (uint *)0xb;
      goto LAB_1800ba6bd;
    }
    if (uStack_54 != 0) {
      pU64_12 = (uint *)0xa;
      goto LAB_1800ba6bd;
    }
    if (local_58._2_2_ != 0) {
      pU64_12 = (uint *)&DAT_00000009;
      goto LAB_1800ba6bd;
    }
    if (local_58._0_2_ != 0) {
      pU64_12 = (uint *)0x8;
      goto LAB_1800ba6bd;
    }
    if (uStack_5a != 0) {
      pU64_12 = (uint *)&DAT_00000007;
      goto LAB_1800ba6bd;
    }
    if (uStack_5c != 0) {
      pU64_12 = (uint *)0x6;
      goto LAB_1800ba6bd;
    }
    if (uStack_5e != 0) {
      pU64_12 = (uint *)0x5;
      goto LAB_1800ba6bd;
    }
    if (auStack_66[3] != 0) {
      pU64_12 = (uint *)0x4;
      goto LAB_1800ba6bd;
    }
    if (auStack_66[2] != 0) {
      pU64_12 = (uint *)0x3;
      goto LAB_1800ba6bd;
    }
    if (auStack_66[1] != 0) {
      pU64_12 = (uint *)0x2;
      goto LAB_1800ba6bd;
    }
    if (auStack_66[0] == 0) goto LAB_1800bad48;
    pU64_19 = (uint *)0x1;
    bFlag_6 = 0;
    uVal_11 = 1;
    uVal_10 = 0;
    pU64_12 = (uint *)0x1;
    uVal_5 = 0xffffffff;
    uVal_26 = (uint)auStack_66[0];
    if (2 < uVal_26) goto LAB_1800bacd3;
  }
  else {
    if (param_3 < 4) {
      uVal_16 = 0;
LAB_1800ba589:
      uVal_18 = 0;
      do {
        *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + uVal_16 * 2 + uVal_18 * 2) * 2) =
             *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + uVal_16 * 2 + uVal_18 * 2) * 2) +
             1;
        uVal_18 = uVal_18 + 1;
      } while ((param_3 & 3) != uVal_18);
    }
    else {
      uVal_16 = 0;
      do {
        *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + uVal_16 * 2) * 2) =
             *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + uVal_16 * 2) * 2) + 1;
        *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + 2 + uVal_16 * 2) * 2) =
             *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + 2 + uVal_16 * 2) * 2) + 1;
        *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + 4 + uVal_16 * 2) * 2) =
             *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + 4 + uVal_16 * 2) * 2) + 1;
        *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + 6 + uVal_16 * 2) * 2) =
             *(short *)(local_68 + (uint64_t)*(ushort *)(param_2 + 6 + uVal_16 * 2) * 2) + 1;
        uVal_16 = uVal_16 + 4;
      } while ((param_3 & 0xfffffffc) != uVal_16);
      if ((uint64_t)(param_3 & 3) != 0) goto LAB_1800ba589;
    }
    uVal_26 = *param_5;
    pU64_12 = (uint *)&DAT_0000000f;
    uVal_10 = uStack_4a;
    if (uStack_4a == 0) goto LAB_1800ba5bf;
LAB_1800ba6bf:
    uVal_11 = (uint)pU64_12;
    if (uVal_11 <= uVal_26) {
      uVal_26 = uVal_11;
    }
    pU64_13 = (uint *)0x1;
    do {
      if (*(short *)(local_68 + (int64_t)pU64_13 * 2) != 0) {
        pU64_12 = pU64_13;
        pU64_19 = (uint *)(uint64_t)uVal_26;
        if (uVal_26 <= (uint)pU64_13) {
          pU64_19 = (uint *)((uint64_t)pU64_13 & 0xffffffff);
        }
        break;
      }
      pU64_13 = (uint *)((int64_t)pU64_13 + 1);
      pU64_19 = pU64_12;
    } while (pU64_12 != pU64_13);
    bFlag_6 = 1;
    uVal_26 = (uint)auStack_66[0];
    uVal_5 = 0xffffffff;
    if (2 < auStack_66[0]) goto LAB_1800bacd3;
  }
  uVal_17 = (uint)pU64_19;
  uVal_5 = 0xffffffff;
  iVal_24 = 4 - ((uint)auStack_66[1] + uVal_26 * 2);
  if (iVal_24 < 0) goto LAB_1800bacd3;
  iVal_24 = iVal_24 * 2 - (uint)auStack_66[2];
  if (iVal_24 < 0) goto LAB_1800bacd3;
  iVal_24 = iVal_24 * 2 - (uint)auStack_66[3];
  local_98 = param_4;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  uVal_14 = (uint)uStack_5e;
  iVal_24 = iVal_24 * 2 - uVal_14;
  pLong_15 = (int64_t *)(uint64_t)uStack_5e;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  local_b8 = (uint)uStack_5c;
  iVal_24 = iVal_24 * 2 - local_b8;
  pLong_15 = (int64_t *)(uint64_t)uStack_5c;
  local_c0 = uVal_14;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  local_bc = (uint)uStack_5a;
  iVal_24 = iVal_24 * 2 - local_bc;
  pLong_15 = (int64_t *)(uint64_t)uStack_5a;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  local_b4 = (uint)(ushort)local_58._0_2_;
  iVal_24 = iVal_24 * 2 - local_b4;
  pLong_15 = (int64_t *)(uint64_t)(ushort)local_58._0_2_;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  local_a0 = (uint8_t *)CONCAT44(local_a0._4_4_,(uint)(ushort)local_58._2_2_);
  iVal_24 = iVal_24 * 2 - (uint)(ushort)local_58._2_2_;
  pLong_15 = (int64_t *)(uint64_t)(ushort)local_58._2_2_;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  local_a8 = (uint8_t *)CONCAT44(local_a8._4_4_,(uint)uStack_54);
  iVal_24 = iVal_24 * 2 - (uint)uStack_54;
  pLong_15 = (int64_t *)(uint64_t)uStack_54;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  local_b0 = CONCAT44(local_b0._4_4_,(uint)uStack_52);
  iVal_24 = iVal_24 * 2 - (uint)uStack_52;
  pLong_15 = (int64_t *)(uint64_t)uStack_52;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  local_c8 = (uint)uStack_50;
  iVal_24 = iVal_24 * 2 - local_c8;
  pLong_15 = (int64_t *)(uint64_t)uStack_50;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  local_c4 = (uint)uStack_4e;
  iVal_24 = iVal_24 * 2 - local_c4;
  pLong_15 = (int64_t *)(uint64_t)uStack_4e;
  if (iVal_24 < 0) goto LAB_1800bacd3;
  pLong_15 = (int64_t *)(uint64_t)uStack_4c;
  local_8c = (uint)uStack_4c;
  iVal_24 = iVal_24 * 2 - local_8c;
  if (((iVal_24 < 0) || (uVal_23 = iVal_24 * 2, uVal_23 < uVal_10)) ||
     ((bool)(uVal_23 != uVal_10 & (param_1 == 0 | bFlag_6)))) goto LAB_1800bacd3;
  auStack_88[1] = 0;
  auStack_88[2] = (short)uVal_26;
  iVal_24 = (uint)auStack_66[2] + auStack_66[1] + uVal_26;
  auStack_88[3] = (short)(auStack_66[1] + uVal_26);
  iVal_22 = (uint)auStack_66[3] + iVal_24;
  auStack_88[4] = (short)iVal_24;
  uVal_14 = uVal_14 + iVal_22;
  pLong_15 = (int64_t *)(uint64_t)uVal_14;
  local_7e = (short)iVal_22;
  local_7c = (short)uVal_14;
  local_7a = uStack_5c + local_7c;
  local_78 = uStack_5a + local_7a;
  local_76 = local_58._0_2_ + local_78;
  local_74 = local_58._2_2_ + local_76;
  local_72 = uStack_54 + local_74;
  local_70 = uStack_52 + local_72;
  local_6e = uStack_50 + local_70;
  local_6c = uStack_4e + local_6e;
  local_6a = uStack_4c + local_6c;
  if (param_3 != 0) {
    if (param_3 == 1) {
      pLong_4 = (int64_t *)0x0;
    }
    else {
      pLong_15 = (int64_t *)(uint64_t)(param_3 & 0xfffffffe);
      pLong_4 = (int64_t *)0x0;
      do {
        uVal_16 = (uint64_t)*(ushort *)(param_2 + (int64_t)pLong_4 * 2);
        if (uVal_16 != 0) {
          uVal_10 = auStack_88[uVal_16];
          auStack_88[uVal_16] = uVal_10 + 1;
          *(short *)(param_6 + (uint64_t)uVal_10 * 2) = (short)pLong_4;
        }
        uVal_16 = (uint64_t)*(ushort *)(param_2 + 2 + (int64_t)pLong_4 * 2);
        if (uVal_16 != 0) {
          uVal_10 = auStack_88[uVal_16];
          auStack_88[uVal_16] = uVal_10 + 1;
          *(short *)(param_6 + (uint64_t)uVal_10 * 2) = (short)pLong_4 + 1;
        }
        pLong_4 = (int64_t *)((int64_t)pLong_4 + 2);
      } while (pLong_15 != pLong_4);
      if ((param_3 & 1) == 0) goto LAB_1800ba9e3;
    }
    uVal_16 = (uint64_t)*(ushort *)(param_2 + (int64_t)pLong_4 * 2);
    if (uVal_16 != 0) {
      pLong_15 = (int64_t *)(uint64_t)auStack_88[uVal_16];
      auStack_88[uVal_16] = auStack_88[uVal_16] + 1;
      *(short *)(param_6 + (int64_t)pLong_15 * 2) = (short)pLong_4;
    }
  }
LAB_1800ba9e3:
  if (param_1 == 0) {
    local_c0 = 0x14;
    local_c4 = 0;
    local_a8 = param_6;
    local_a0 = param_6;
  }
  else {
    if (param_1 == 1) {
      uVal_5 = 1;
      if (9 < uVal_17) goto LAB_1800bacd3;
      local_c8 = 1;
      local_c0 = 0x101;
      local_a0 = &DAT_1806b2f40;
      local_a8 = &DAT_1806af6a0;
      local_c4 = 0;
      goto LAB_1800baa59;
    }
    local_c0 = 0;
    local_a0 = &DAT_1806b2f80;
    local_a8 = &DAT_1806af700;
    local_c4 = (uint)CONCAT71(0x1806af7,param_1 == 2);
    if (param_1 == 2) {
      uVal_5 = 1;
      local_c8 = 0;
      if (uVal_17 < 10) goto LAB_1800baa59;
LAB_1800bacd3:
      while (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_e8)) {
        func_0x180673080(local_48 ^ (uint64_t)auStack_e8);
        param_5 = pU64_12;
LAB_1800bad48:
        pU64_2 = (uint32_t *)*pLong_15;
        *pLong_15 = (int64_t)(pU64_2 + 1);
        *pU64_2 = 0x140;
        pU64_2 = (uint32_t *)*pLong_15;
        *pLong_15 = (int64_t)(pU64_2 + 1);
        *pU64_2 = 0x140;
        uVal_17 = 1;
LAB_1800bac85:
        *param_5 = uVal_17;
        uVal_5 = 0;
        pU64_12 = param_5;
      }
      return uVal_5;
    }
  }
  local_c8 = 0;
LAB_1800baa59:
  bFlag_6 = (byte)pU64_19;
  local_b4 = 1 << (bFlag_6 & 0x1f);
  local_b0 = (uint64_t)local_b4;
  local_b4 = local_b4 - 1;
  lVal_25 = *param_4;
  local_bc = 0xffffffff;
  uVal_23 = 0;
  uVal_26 = 0;
  uVal_14 = 0;
  do {
    local_b8 = 1 << ((byte)pU64_19 & 0x1f);
    do {
      uVal_10 = *(ushort *)(param_6 + (uint64_t)uVal_23 * 2);
      if (uVal_10 + 1 < local_c0) {
        uVal_20 = 0;
      }
      else if (uVal_10 < local_c0) {
        uVal_20 = 0x60;
        uVal_10 = 0;
      }
      else {
        uVal_8 = (uVal_10 - local_c0) * 2;
        uVal_20 = local_a0[uVal_8];
        uVal_10 = *(ushort *)(local_a8 + uVal_8);
      }
      bFlag_7 = (char)pU64_12 - (byte)uVal_26;
      iVal_24 = -1 << (bFlag_7 & 0x1f);
      uVal_8 = local_b8;
      do {
        uVal_16 = (uint64_t)((uVal_14 >> ((byte)uVal_26 & 0x1f)) + iVal_24 + uVal_8);
        *(uint8_t *)(lVal_25 + uVal_16 * 4) = uVal_20;
        *(byte *)(lVal_25 + 1 + uVal_16 * 4) = bFlag_7;
        *(ushort *)(lVal_25 + 2 + uVal_16 * 4) = uVal_10;
        uVal_8 = uVal_8 + iVal_24;
      } while (uVal_8 != 0);
      uVal_8 = 1 << ((char)pU64_12 - 1U & 0x1f);
      do {
        uVal_21 = uVal_8;
        uVal_8 = uVal_21 >> 1;
      } while ((uVal_21 & uVal_14) != 0);
      uVal_14 = (uVal_21 - 1 & uVal_14) + uVal_21;
      pLong_15 = (int64_t *)(uint64_t)uVal_14;
      if (uVal_21 == 0) {
        uVal_14 = 0;
      }
      uVal_23 = uVal_23 + 1;
      pSize_1 = (short *)(local_68 + ((uint64_t)pU64_12 & 0xffffffff) * 2);
      *pSize_1 = *pSize_1 + -1;
      if (*pSize_1 == 0) {
        if ((uint)pU64_12 == uVal_11) {
          if (uVal_14 != 0) {
            uVal_16 = (uint64_t)uVal_14;
            *(uint8_t *)(lVal_25 + uVal_16 * 4) = 0x40;
            *(byte *)(lVal_25 + 1 + uVal_16 * 4) = bFlag_7;
            *(uint16_t *)(lVal_25 + 2 + uVal_16 * 4) = 0;
          }
          *param_4 = *param_4 + local_b0 * 4;
          goto LAB_1800bac85;
        }
        pU64_12 = (uint *)(uint64_t)
                          *(ushort *)
                           (param_2 + (uint64_t)*(ushort *)(param_6 + (uint64_t)uVal_23 * 2) * 2);
      }
      uVal_8 = (uint)pU64_12;
    } while ((uVal_8 <= uVal_17) || (uVal_21 = uVal_14 & local_b4, uVal_21 == local_bc));
    if (uVal_26 == 0) {
      uVal_26 = uVal_17;
    }
    uVal_9 = uVal_8 - uVal_26;
    iVal_24 = 1 << ((byte)uVal_9 & 0x1f);
    if (uVal_8 < uVal_11) {
      uVal_9 = uVal_11 - uVal_26;
      uVal_16 = (uint64_t)pU64_12 & 0xffffffff;
      do {
        iVal_22 = iVal_24 - (uint)*(ushort *)(local_68 + uVal_16 * 2);
        if (iVal_22 == 0 || iVal_24 < (int)(uint)*(ushort *)(local_68 + uVal_16 * 2)) {
          uVal_9 = (int)uVal_16 - uVal_26;
          break;
        }
        iVal_24 = iVal_22 * 2;
        uVal_16 = uVal_16 + 1;
      } while ((uint)uVal_16 < uVal_11);
      iVal_24 = 1 << ((byte)uVal_9 & 0x1f);
    }
    pU64_19 = (uint *)(uint64_t)uVal_9;
    uVal_8 = (int)local_b0 + iVal_24;
    local_b0 = (uint64_t)uVal_8;
    uVal_3 = (undefined3)(uVal_8 >> 8);
    uVal_5 = 1;
    pLong_15 = (int64_t *)(uint64_t)CONCAT31(uVal_3,0x250 < uVal_8);
    if (((byte)local_c8 & 0x354 < uVal_8) != 0) goto LAB_1800bacd3;
    bFlag_7 = 0x250 < uVal_8 & (byte)local_c4;
    pLong_15 = (int64_t *)(uint64_t)CONCAT31(uVal_3,bFlag_7);
    if (bFlag_7 != 0) goto LAB_1800bacd3;
    lVal_25 = lVal_25 + (uint64_t)local_b8 * 4;
    uVal_16 = (uint64_t)uVal_21;
    *(char *)(*param_4 + uVal_16 * 4) = (char)uVal_9;
    *(byte *)(*param_4 + 1 + uVal_16 * 4) = bFlag_6;
    *(short *)(*param_4 + 2 + uVal_16 * 4) = (short)((uint)((int)lVal_25 - (int)*param_4) >> 2);
    local_bc = uVal_21;
  } while( true );
}

// func_0x1800bad80
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
void func_0x1800bad80(byte **param_1,uint param_2)
{
  uint uVal_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  byte bFlag_4;
  byte bFlag_5;
  byte bFlag_6;
  int iVal_7;
  uint uVal_8;
  uint uVal_9;
  byte *pU8_10;
  byte *pU8_11;
  int64_t lVal_12;
  int64_t lVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  uint32_t uVal_18;
  uint32_t uVal_19;
  int iVal_20;
  uint uVal_21;
  uint64_t uVal_23;
  uint64_t uVal_24;
  char *fnPtr_25;
  byte *pU8_26;
  uint uVal_27;
  int iVal_28;
  uint uVal_29;
  byte *pU8_30;
  uint64_t uVal_31;
  int iVal_32;
  byte *pU8_33;
  uint uVal_34;
  uint32_t uVal_35;
  int64_t lVal_36;
  uint uVal_37;
  byte *pU8_38;
  byte *pU8_39;
  uint uVal_40;
  uint64_t uVal_41;
  uint uVal_42;
  byte *pU8_43;
  int64_t lVal_44;
  uint uVal_45;
  uint64_t local_a0;
  int local_50;
  uint64_t uVal_22;
  
  pU8_10 = param_1[7];
  pU8_39 = *param_1;
  pU8_30 = pU8_39 + (*(int *)(param_1 + 1) - 5);
  pU8_33 = param_1[3];
  iVal_7 = *(int *)(param_1 + 4);
  uVal_8 = *(uint *)(pU8_10 + 0x3c);
  iVal_20 = (int)pU8_33 + iVal_7;
  local_50 = (int)pU8_33 - (param_2 - iVal_7);
  pU8_38 = pU8_33 + (iVal_7 - 0x101);
  iVal_7 = *(int *)(pU8_10 + 0x34);
  bFlag_4 = pU8_10[0x70];
  bFlag_5 = pU8_10[0x74];
  iVal_28 = ~param_2 + iVal_20;
  uVal_21 = uVal_8 & 0xffffffe0;
  uVal_22 = (uint64_t)uVal_21;
  uVal_9 = *(uint *)(pU8_10 + 0x38);
  pU8_11 = *(byte **)(pU8_10 + 0x40);
  uVal_45 = *(uint *)(pU8_10 + 0x48);
  uVal_27 = *(uint *)(pU8_10 + 0x4c);
  lVal_12 = *(int64_t *)(pU8_10 + 0x60);
  lVal_13 = *(int64_t *)(pU8_10 + 0x68);
LAB_1800bae6c:
  if (uVal_27 < 0xf) {
    bFlag_6 = *pU8_39;
    pU8_43 = pU8_39 + 1;
    pU8_39 = pU8_39 + 2;
    uVal_45 = ((uint)*pU8_43 << ((byte)uVal_27 + 8 & 0x1f)) +
             ((uint)bFlag_6 << ((byte)uVal_27 & 0x1f)) + uVal_45;
    uVal_27 = uVal_27 | 0x10;
  }
  uVal_24 = (uint64_t)(uVal_45 & ~(-1 << (bFlag_4 & 0x1f)));
  bFlag_6 = *(byte *)(lVal_12 + 1 + uVal_24 * 4);
  uVal_45 = uVal_45 >> (bFlag_6 & 0x1f);
  lVal_44 = lVal_12 + uVal_24 * 4;
  uVal_27 = uVal_27 - bFlag_6;
  bFlag_6 = *(byte *)(lVal_12 + uVal_24 * 4);
  while (bFlag_6 != 0) {
    if ((bFlag_6 & 0x10) != 0) {
      uVal_42 = (uint)*(ushort *)(lVal_44 + 2);
      uVal_34 = bFlag_6 & 0xf;
      if ((bFlag_6 & 0xf) != 0) {
        if (uVal_27 < uVal_34) {
          bFlag_6 = *pU8_39;
          pU8_39 = pU8_39 + 1;
          uVal_45 = uVal_45 + ((uint)bFlag_6 << ((byte)uVal_27 & 0x1f));
          uVal_27 = uVal_27 + 8;
        }
        uVal_42 = (uint)*(ushort *)(lVal_44 + 2) + (~(-1 << (sbyte)uVal_34) & uVal_45);
        uVal_45 = uVal_45 >> (sbyte)uVal_34;
        uVal_27 = uVal_27 - uVal_34;
      }
      if (uVal_27 < 0xf) {
        bFlag_6 = *pU8_39;
        pU8_43 = pU8_39 + 1;
        pU8_39 = pU8_39 + 2;
        uVal_45 = ((uint)*pU8_43 << ((byte)uVal_27 + 8 & 0x1f)) +
                 ((uint)bFlag_6 << ((byte)uVal_27 & 0x1f)) + uVal_45;
        uVal_27 = uVal_27 | 0x10;
      }
      uVal_24 = (uint64_t)(uVal_45 & ~(-1 << (bFlag_5 & 0x1f)));
      lVal_44 = lVal_13 + uVal_24 * 4;
      bFlag_6 = *(byte *)(lVal_13 + 1 + uVal_24 * 4);
      uVal_45 = uVal_45 >> (bFlag_6 & 0x1f);
      uVal_27 = uVal_27 - bFlag_6;
      bFlag_6 = *(byte *)(lVal_13 + uVal_24 * 4);
      goto joined_r0x0001800bafa8;
    }
    if ((bFlag_6 & 0x40) != 0) {
      uVal_35 = 0x3f3f;
      if ((bFlag_6 & 0x20) != 0) goto LAB_1800bb81f;
      fnPtr_25 = "invalid literal/length code";
      goto LAB_1800bb814;
    }
    lVal_36 = lVal_12 + (uint64_t)*(ushort *)(lVal_44 + 2) * 4;
    uVal_24 = (uint64_t)(~(-1 << (bFlag_6 & 0x1f)) & uVal_45);
    bFlag_6 = *(byte *)(lVal_36 + 1 + uVal_24 * 4);
    uVal_45 = uVal_45 >> (bFlag_6 & 0x1f);
    lVal_44 = lVal_36 + uVal_24 * 4;
    uVal_27 = uVal_27 - bFlag_6;
    bFlag_6 = *(byte *)(lVal_36 + uVal_24 * 4);
  }
  *pU8_33 = *(byte *)(lVal_44 + 2);
  goto LAB_1800baef5;
joined_r0x0001800bafa8:
  if ((bFlag_6 & 0x10) != 0) goto LAB_1800bafe4;
  if ((bFlag_6 & 0x40) != 0) {
    fnPtr_25 = "invalid distance code";
    goto LAB_1800bb814;
  }
  lVal_36 = lVal_13 + (uint64_t)*(ushort *)(lVal_44 + 2) * 4;
  uVal_24 = (uint64_t)(~(-1 << (bFlag_6 & 0x1f)) & uVal_45);
  bFlag_6 = *(byte *)(lVal_36 + 1 + uVal_24 * 4);
  uVal_45 = uVal_45 >> (bFlag_6 & 0x1f);
  lVal_44 = lVal_36 + uVal_24 * 4;
  uVal_27 = uVal_27 - bFlag_6;
  bFlag_6 = *(byte *)(lVal_36 + uVal_24 * 4);
  goto joined_r0x0001800bafa8;
LAB_1800bafe4:
  uVal_40 = (uint)*(ushort *)(lVal_44 + 2);
  uVal_34 = bFlag_6 & 0xf;
  if (uVal_27 < uVal_34) {
    uVal_45 = ((uint)*pU8_39 << ((byte)uVal_27 & 0x1f)) + uVal_45;
    uVal_1 = uVal_27 + 8;
    if (uVal_1 < uVal_34) {
      pU8_43 = pU8_39 + 1;
      pU8_39 = pU8_39 + 2;
      uVal_45 = uVal_45 + ((uint)*pU8_43 << ((byte)uVal_1 & 0x1f));
      uVal_27 = uVal_27 + 0x10;
    }
    else {
      pU8_39 = pU8_39 + 1;
      uVal_27 = uVal_1;
    }
  }
  uVal_29 = ~(-1 << (sbyte)uVal_34) & uVal_45;
  uVal_1 = uVal_40 + uVal_29;
  uVal_45 = uVal_45 >> (sbyte)uVal_34;
  uVal_27 = uVal_27 - uVal_34;
  iVal_32 = (int)pU8_33;
  uVal_34 = uVal_1 - (iVal_32 - local_50);
  if (uVal_1 < (uint)(iVal_32 - local_50) || uVal_34 == 0) {
    uVal_24 = (uint64_t)uVal_1;
    lVal_44 = 0;
    uVal_34 = uVal_42;
    do {
      lVal_36 = lVal_44;
      pU8_33[lVal_36] = pU8_33[lVal_36 - uVal_24];
      pU8_33[lVal_36 + 1] = pU8_33[lVal_36 + (1 - uVal_24)];
      pU8_33[lVal_36 + 2] = pU8_33[lVal_36 + (2 - uVal_24)];
      uVal_34 = uVal_34 - 3;
      lVal_44 = lVal_36 + 3;
    } while (2 < uVal_34);
    if ((uint)lVal_44 == uVal_42) {
      pU8_33 = pU8_33 + lVal_44;
    }
    else {
      pU8_33[lVal_44] = pU8_33[lVal_44 + -uVal_24];
      if ((uint)lVal_44 - uVal_42 == -2) {
        pU8_33[lVal_36 + 4] = pU8_33[-uVal_24 + 1 + lVal_44];
        pU8_33 = pU8_33 + lVal_36 + 5;
      }
      else {
        pU8_33 = pU8_33 + lVal_36 + 4;
      }
    }
    goto LAB_1800baef8;
  }
  if ((uVal_9 < uVal_34) && (*(int *)(pU8_10 + 0x1be0) != 0)) {
    fnPtr_25 = "invalid distance too far back";
LAB_1800bb814:
    param_1[6] = (byte *)fnPtr_25;
    uVal_35 = 0x3f51;
LAB_1800bb81f:
    *(uint32_t *)(pU8_10 + 8) = uVal_35;
LAB_1800bb828:
    *param_1 = pU8_39 + -(uint64_t)(uVal_27 >> 3);
    param_1[3] = pU8_33;
    *(int *)(param_1 + 1) = ((int)pU8_30 - (int)(pU8_39 + -(uint64_t)(uVal_27 >> 3))) + 5;
    *(int *)(param_1 + 4) = ((int)pU8_38 - (int)pU8_33) + 0x101;
    *(uint *)(pU8_10 + 0x48) = ~(-1 << (sbyte)(uVal_27 & 7)) & uVal_45;
    *(uint *)(pU8_10 + 0x4c) = uVal_27 & 7;
    return;
  }
  pU8_43 = pU8_33;
  if (uVal_8 == 0) {
    uVal_24 = (uint64_t)(iVal_7 - uVal_34);
    pU8_26 = pU8_11 + uVal_24;
    local_a0 = (uint64_t)(uVal_42 - uVal_34);
    if (uVal_42 < uVal_34 || uVal_42 - uVal_34 == 0) goto joined_r0x0001800bb6a5;
    uVal_42 = (uVal_29 + iVal_28 + uVal_40) - iVal_32;
    if ((0x1e < uVal_42) && (0x1f < (uint64_t)((int64_t)pU8_33 - (int64_t)(pU8_11 + uVal_24)))) {
      uVal_31 = (uint64_t)uVal_42 + 1;
      uVal_41 = uVal_31 & 0xffffffffffffffe0;
      pU8_43 = pU8_33 + uVal_41;
      uVal_34 = uVal_34 - (int)uVal_41;
      pU8_26 = pU8_26 + uVal_41;
      uVal_23 = 0;
      do {
        pU64_3 = (uint32_t *)(pU8_11 + uVal_23 + uVal_24);
        uVal_35 = pU64_3[1];
        uVal_14 = pU64_3[2];
        uVal_15 = pU64_3[3];
        pU64_2 = (uint32_t *)(pU8_11 + uVal_23 + uVal_24 + 0x10);
        uVal_16 = *pU64_2;
        uVal_17 = pU64_2[1];
        uVal_18 = pU64_2[2];
        uVal_19 = pU64_2[3];
        pU64_2 = (uint32_t *)(pU8_33 + uVal_23);
        *pU64_2 = *pU64_3;
        pU64_2[1] = uVal_35;
        pU64_2[2] = uVal_14;
        pU64_2[3] = uVal_15;
        pU64_2 = (uint32_t *)(pU8_33 + uVal_23 + 0x10);
        *pU64_2 = uVal_16;
        pU64_2[1] = uVal_17;
        pU64_2[2] = uVal_18;
        pU64_2[3] = uVal_19;
        uVal_23 = uVal_23 + 0x20;
      } while (uVal_41 != uVal_23);
      if (uVal_31 == uVal_41) goto LAB_1800bb51b;
    }
    uVal_42 = uVal_34;
    if ((uVal_34 & 7) != 0) {
      lVal_44 = 0;
      do {
        pU8_43[lVal_44] = pU8_26[lVal_44];
        lVal_44 = lVal_44 + 1;
      } while ((uVal_34 & 7) != (uint)lVal_44);
      pU8_43 = pU8_43 + lVal_44;
      pU8_26 = pU8_26 + lVal_44;
      uVal_42 = uVal_34 - (uint)lVal_44;
    }
    if (6 < uVal_34 - 1) {
      lVal_44 = 0;
      do {
        pU8_43[lVal_44] = pU8_26[lVal_44];
        pU8_43[lVal_44 + 1] = pU8_26[lVal_44 + 1];
        pU8_43[lVal_44 + 2] = pU8_26[lVal_44 + 2];
        pU8_43[lVal_44 + 3] = pU8_26[lVal_44 + 3];
        pU8_43[lVal_44 + 4] = pU8_26[lVal_44 + 4];
        pU8_43[lVal_44 + 5] = pU8_26[lVal_44 + 5];
        pU8_43[lVal_44 + 6] = pU8_26[lVal_44 + 6];
        pU8_43[lVal_44 + 7] = pU8_26[lVal_44 + 7];
        lVal_44 = lVal_44 + 8;
      } while (uVal_42 != (uint)lVal_44);
LAB_1800bb518:
      pU8_43 = pU8_43 + lVal_44;
    }
LAB_1800bb51b:
    pU8_26 = pU8_43 + -(uint64_t)uVal_1;
    uVal_42 = (uint)local_a0;
    pU8_33 = pU8_43;
  }
  else {
    uVal_24 = (uint64_t)(uVal_8 - uVal_34);
    if (uVal_8 < uVal_34) {
      uVal_24 = (uint64_t)((uVal_8 + iVal_7) - uVal_34);
      pU8_26 = pU8_11 + uVal_24;
      uVal_34 = uVal_34 - uVal_8;
      uVal_37 = uVal_42 - uVal_34;
      if (uVal_34 <= uVal_42 && uVal_37 != 0) {
        uVal_42 = (uVal_29 + ((~uVal_8 + iVal_20) - param_2) + uVal_40) - iVal_32;
        if ((uVal_42 < 0x1f) ||
           ((uint64_t)((int64_t)pU8_33 - (int64_t)(pU8_11 + uVal_24)) < 0x20)) {
LAB_1800bb0e9:
          uVal_42 = uVal_34;
          if ((uVal_34 & 7) != 0) {
            lVal_44 = 0;
            do {
              pU8_43[lVal_44] = pU8_26[lVal_44];
              lVal_44 = lVal_44 + 1;
            } while ((uVal_34 & 7) != (uint)lVal_44);
            pU8_43 = pU8_43 + lVal_44;
            pU8_26 = pU8_26 + lVal_44;
            uVal_42 = uVal_34 - (uint)lVal_44;
          }
          if (6 < uVal_34 - 1) {
            lVal_44 = 0;
            do {
              pU8_43[lVal_44] = pU8_26[lVal_44];
              pU8_43[lVal_44 + 1] = pU8_26[lVal_44 + 1];
              pU8_43[lVal_44 + 2] = pU8_26[lVal_44 + 2];
              pU8_43[lVal_44 + 3] = pU8_26[lVal_44 + 3];
              pU8_43[lVal_44 + 4] = pU8_26[lVal_44 + 4];
              pU8_43[lVal_44 + 5] = pU8_26[lVal_44 + 5];
              pU8_43[lVal_44 + 6] = pU8_26[lVal_44 + 6];
              pU8_43[lVal_44 + 7] = pU8_26[lVal_44 + 7];
              lVal_44 = lVal_44 + 8;
            } while (uVal_42 != (uint)lVal_44);
            pU8_43 = pU8_43 + lVal_44;
          }
        }
        else {
          uVal_31 = (uint64_t)uVal_42 + 1;
          uVal_41 = uVal_31 & 0xffffffffffffffe0;
          pU8_43 = pU8_33 + uVal_41;
          uVal_34 = uVal_34 - (int)uVal_41;
          pU8_26 = pU8_26 + uVal_41;
          uVal_23 = 0;
          do {
            pU64_3 = (uint32_t *)(pU8_11 + uVal_23 + uVal_24);
            uVal_35 = pU64_3[1];
            uVal_14 = pU64_3[2];
            uVal_15 = pU64_3[3];
            pU64_2 = (uint32_t *)(pU8_11 + uVal_23 + uVal_24 + 0x10);
            uVal_16 = *pU64_2;
            uVal_17 = pU64_2[1];
            uVal_18 = pU64_2[2];
            uVal_19 = pU64_2[3];
            pU64_2 = (uint32_t *)(pU8_33 + uVal_23);
            *pU64_2 = *pU64_3;
            pU64_2[1] = uVal_35;
            pU64_2[2] = uVal_14;
            pU64_2[3] = uVal_15;
            pU64_2 = (uint32_t *)(pU8_33 + uVal_23 + 0x10);
            *pU64_2 = uVal_16;
            pU64_2[1] = uVal_17;
            pU64_2[2] = uVal_18;
            pU64_2[3] = uVal_19;
            uVal_23 = uVal_23 + 0x20;
          } while (uVal_41 != uVal_23);
          if (uVal_31 != uVal_41) goto LAB_1800bb0e9;
        }
        pU8_26 = pU8_11;
        uVal_42 = uVal_37;
        if (uVal_8 <= uVal_37 && uVal_37 - uVal_8 != 0) {
          pU8_33 = pU8_43;
          uVal_42 = uVal_8;
          if ((uVal_8 < 0x20) || ((uint64_t)((int64_t)pU8_43 - (int64_t)pU8_11) < 0x20)) {
LAB_1800bb71e:
            uVal_34 = uVal_42;
            if ((uVal_42 & 7) != 0) {
              lVal_44 = 0;
              do {
                pU8_33[lVal_44] = pU8_26[lVal_44];
                lVal_44 = lVal_44 + 1;
              } while ((uVal_42 & 7) != (uint)lVal_44);
              pU8_33 = pU8_33 + lVal_44;
              pU8_26 = pU8_26 + lVal_44;
              uVal_34 = uVal_42 - (uint)lVal_44;
            }
            if (6 < uVal_42 - 1) {
              lVal_44 = 0;
              do {
                pU8_33[lVal_44] = pU8_26[lVal_44];
                pU8_33[lVal_44 + 1] = pU8_26[lVal_44 + 1];
                pU8_33[lVal_44 + 2] = pU8_26[lVal_44 + 2];
                pU8_33[lVal_44 + 3] = pU8_26[lVal_44 + 3];
                pU8_33[lVal_44 + 4] = pU8_26[lVal_44 + 4];
                pU8_33[lVal_44 + 5] = pU8_26[lVal_44 + 5];
                pU8_33[lVal_44 + 6] = pU8_26[lVal_44 + 6];
                pU8_33[lVal_44 + 7] = pU8_26[lVal_44 + 7];
                lVal_44 = lVal_44 + 8;
              } while (uVal_34 != (uint)lVal_44);
              pU8_33 = pU8_33 + lVal_44;
            }
          }
          else {
            pU8_33 = pU8_43 + uVal_22;
            uVal_24 = 0;
            do {
              pU64_3 = (uint32_t *)(pU8_11 + uVal_24);
              uVal_35 = pU64_3[1];
              uVal_14 = pU64_3[2];
              uVal_15 = pU64_3[3];
              pU64_2 = (uint32_t *)(pU8_11 + uVal_24 + 0x10);
              uVal_16 = *pU64_2;
              uVal_17 = pU64_2[1];
              uVal_18 = pU64_2[2];
              uVal_19 = pU64_2[3];
              pU64_2 = (uint32_t *)(pU8_43 + uVal_24);
              *pU64_2 = *pU64_3;
              pU64_2[1] = uVal_35;
              pU64_2[2] = uVal_14;
              pU64_2[3] = uVal_15;
              pU64_2 = (uint32_t *)(pU8_43 + uVal_24 + 0x10);
              *pU64_2 = uVal_16;
              pU64_2[1] = uVal_17;
              pU64_2[2] = uVal_18;
              pU64_2[3] = uVal_19;
              uVal_24 = uVal_24 + 0x20;
            } while (uVal_22 != uVal_24);
            pU8_26 = pU8_11 + uVal_22;
            uVal_42 = uVal_8 - uVal_21;
            if (uVal_21 != uVal_8) goto LAB_1800bb71e;
          }
          pU8_26 = pU8_33 + -(uint64_t)uVal_1;
          uVal_42 = uVal_37 - uVal_8;
          pU8_43 = pU8_33;
        }
      }
    }
    else {
      pU8_26 = pU8_11 + uVal_24;
      local_a0 = (uint64_t)(uVal_42 - uVal_34);
      if (uVal_34 <= uVal_42 && uVal_42 - uVal_34 != 0) {
        uVal_42 = (uVal_29 + iVal_28 + uVal_40) - iVal_32;
        if ((0x1e < uVal_42) &&
           (0x1f < (uint64_t)((int64_t)pU8_33 - (int64_t)(pU8_11 + uVal_24)))) {
          uVal_31 = (uint64_t)uVal_42 + 1;
          uVal_41 = uVal_31 & 0xffffffffffffffe0;
          pU8_43 = pU8_33 + uVal_41;
          uVal_34 = uVal_34 - (int)uVal_41;
          pU8_26 = pU8_26 + uVal_41;
          uVal_23 = 0;
          do {
            pU64_3 = (uint32_t *)(pU8_11 + uVal_23 + uVal_24);
            uVal_35 = pU64_3[1];
            uVal_14 = pU64_3[2];
            uVal_15 = pU64_3[3];
            pU64_2 = (uint32_t *)(pU8_11 + uVal_23 + uVal_24 + 0x10);
            uVal_16 = *pU64_2;
            uVal_17 = pU64_2[1];
            uVal_18 = pU64_2[2];
            uVal_19 = pU64_2[3];
            pU64_2 = (uint32_t *)(pU8_33 + uVal_23);
            *pU64_2 = *pU64_3;
            pU64_2[1] = uVal_35;
            pU64_2[2] = uVal_14;
            pU64_2[3] = uVal_15;
            pU64_2 = (uint32_t *)(pU8_33 + uVal_23 + 0x10);
            *pU64_2 = uVal_16;
            pU64_2[1] = uVal_17;
            pU64_2[2] = uVal_18;
            pU64_2[3] = uVal_19;
            uVal_23 = uVal_23 + 0x20;
          } while (uVal_41 != uVal_23);
          if (uVal_31 == uVal_41) goto LAB_1800bb51b;
        }
        uVal_42 = uVal_34;
        if ((uVal_34 & 7) != 0) {
          lVal_44 = 0;
          do {
            pU8_43[lVal_44] = pU8_26[lVal_44];
            lVal_44 = lVal_44 + 1;
          } while ((uVal_34 & 7) != (uint)lVal_44);
          pU8_43 = pU8_43 + lVal_44;
          pU8_26 = pU8_26 + lVal_44;
          uVal_42 = uVal_34 - (uint)lVal_44;
        }
        if (6 < uVal_34 - 1) {
          lVal_44 = 0;
          do {
            pU8_43[lVal_44] = pU8_26[lVal_44];
            pU8_43[lVal_44 + 1] = pU8_26[lVal_44 + 1];
            pU8_43[lVal_44 + 2] = pU8_26[lVal_44 + 2];
            pU8_43[lVal_44 + 3] = pU8_26[lVal_44 + 3];
            pU8_43[lVal_44 + 4] = pU8_26[lVal_44 + 4];
            pU8_43[lVal_44 + 5] = pU8_26[lVal_44 + 5];
            pU8_43[lVal_44 + 6] = pU8_26[lVal_44 + 6];
            pU8_43[lVal_44 + 7] = pU8_26[lVal_44 + 7];
            lVal_44 = lVal_44 + 8;
          } while (uVal_42 != (uint)lVal_44);
          goto LAB_1800bb518;
        }
        goto LAB_1800bb51b;
      }
    }
joined_r0x0001800bb6a5:
    local_a0 = (uint64_t)uVal_42;
    pU8_33 = pU8_43;
  }
  if (2 < uVal_42) {
    uVal_42 = (int)local_a0 - 3;
    if (((uint64_t)uVal_42 / 3 & 1) == 0) {
      *pU8_33 = *pU8_26;
      pU8_33[1] = pU8_26[1];
      pU8_43 = pU8_26 + 2;
      pU8_26 = pU8_26 + 3;
      pU8_33[2] = *pU8_43;
      pU8_33 = pU8_33 + 3;
      local_a0 = (uint64_t)uVal_42;
    }
    while (2 < uVal_42) {
      *pU8_33 = *pU8_26;
      pU8_33[1] = pU8_26[1];
      pU8_33[2] = pU8_26[2];
      pU8_33[3] = pU8_26[3];
      pU8_33[4] = pU8_26[4];
      pU8_43 = pU8_26 + 5;
      pU8_26 = pU8_26 + 6;
      pU8_33[5] = *pU8_43;
      pU8_33 = pU8_33 + 6;
      uVal_42 = (int)local_a0 - 6;
      local_a0 = (uint64_t)uVal_42;
    }
  }
  if (uVal_42 != 0) {
    *pU8_33 = *pU8_26;
    if (uVal_42 == 2) {
      pU8_33[1] = pU8_26[1];
      pU8_33 = pU8_33 + 2;
    }
    else {
LAB_1800baef5:
      pU8_33 = pU8_33 + 1;
    }
  }
LAB_1800baef8:
  if ((pU8_30 <= pU8_39) || (pU8_38 <= pU8_33)) goto LAB_1800bb828;
  goto LAB_1800bae6c;
}

// func_0x1800bb890
uint64_t func_0x1800bb890(int64_t *param_1,uint64_t param_2)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  byte bFlag_3;
  char ch_4;
  int64_t **ptr2_Long_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  func_ptr_t fnPtr_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint uVal_15;
  uint32_t uVal_16;
  uint64_t uVal_17;
  int64_t **ptr2_Long_18;
  int64_t lVal_19;
  byte bFlag_20;
  uint uVal_21;
  int iVal_22;
  uint uVal_23;
  uint uVal_24;
  int64_t **ptr2_Long_25;
  uint8_t *pU64_26;
  uint8_t *pU64_27;
  uint uVal_28;
  int64_t **ptr2_Long_29;
  uint64_t uVal_30;
  uint uVal_31;
  int iVal_32;
  uint uVal_33;
  char *fnPtr_34;
  uint16_t *pU64_35;
  ushort *pU64_36;
  byte *pU8_37;
  uint8_t *pU64_38;
  uint16_t uVal_39;
  int64_t **ptr2_Long_40;
  int64_t **ptr2_Long_41;
  int64_t **ptr2_Long_42;
  int64_t **ptr2_Long_43;
  uint uVal_44;
  uint64_t uVal_45;
  ushort uVal_46;
  int64_t lVal_47;
  uint uVal_48;
  bool bFlag_49;
  uint8_t auArr_50 [16];
  uint8_t auArr_51 [16];
  uint8_t auStack_d8 [32];
  int64_t **local_b8;
  int64_t **local_b0;
  int64_t *local_a0;
  uint local_94;
  uint8_t *local_90;
  uint local_84;
  int64_t **local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint64_t local_58;
  uint32_t local_4c;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_d8;
  uVal_17 = 0xfffffffe;
  if ((((((param_1 == (int64_t *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
       ((ptr2_Long_5 = (int64_t **)param_1[7], ptr2_Long_5 == (int64_t **)0x0 || (*ptr2_Long_5 != param_1))))
      || ((iVal_32 = *(int *)(ptr2_Long_5 + 1), 0x1f < iVal_32 - 0x3f34U ||
          (pU64_27 = (uint8_t *)param_1[3], pU64_27 == (uint8_t *)0x0)))) ||
     ((ptr2_Long_42 = (int64_t **)*param_1, ptr2_Long_42 == (int64_t **)0x0 &&
      (*(int *)(param_1 + 1) != 0)))) {
LAB_1800bdf2e:
    if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_d8)) {
      func_0x180673080(local_48 ^ (uint64_t)auStack_d8);
      fnPtr_8 = (func_ptr_t )swi(3);
      uVal_17 = (*fnPtr_8)();
      return uVal_17;
    }
    return uVal_17;
  }
  if (iVal_32 == 0x3f3f) {
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f40;
    ptr2_Long_42 = (int64_t **)*param_1;
    pU64_27 = (uint8_t *)param_1[3];
    iVal_32 = 0x3f40;
  }
  local_5c = *(uint *)(param_1 + 1);
  ptr2_Long_18 = (int64_t **)(uint64_t)*(uint *)(ptr2_Long_5 + 9);
  local_60 = (int)param_2 - 5;
  ptr2_Long_40 = (int64_t **)(uint64_t)local_60;
  local_68 = 0;
  pU64_26 = (uint8_t *)(uint64_t)*(uint *)((int64_t)ptr2_Long_5 + 0x4c);
  ptr2_Long_29 = (int64_t **)(uint64_t)local_5c;
  uVal_48 = *(uint *)(param_1 + 4);
  uVal_15 = *(uint *)(param_1 + 4);
  local_a0 = param_1;
  local_70 = param_2;
LAB_1800bb96e:
  iVal_22 = (int)param_2;
  uVal_17 = 0xfffffffe;
  if (0x1e < iVal_32 - 0x3f34U) goto LAB_1800bdf2e;
  uVal_31 = (uint)pU64_26;
  uVal_33 = (uint)ptr2_Long_29;
  uVal_24 = (uint)ptr2_Long_18;
  bFlag_20 = (byte)pU64_26;
  ptr2_Long_25 = ptr2_Long_18;
  ptr2_Long_41 = ptr2_Long_42;
  ptr2_Long_43 = ptr2_Long_42;
  switch(iVal_32) {
  case 0x3f34:
    uVal_23 = *(uint *)(ptr2_Long_5 + 2);
    if (uVal_23 != 0) {
      if (uVal_31 < 0x10) {
        if (uVal_33 == 0) goto LAB_1800bdd33;
        uVal_44 = uVal_33 - 1;
        ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
        uVal_24 = uVal_24 + ((uint)*(byte *)ptr2_Long_42 << (bFlag_20 & 0x1f));
        ptr2_Long_25 = (int64_t **)(uint64_t)uVal_24;
        uVal_21 = uVal_31 + 8;
        ptr2_Long_18 = ptr2_Long_40;
        if (uVal_31 < 8) {
          ptr2_Long_41 = ptr2_Long_40;
          if (uVal_44 == 0) goto LAB_1800bdd2e;
          uVal_44 = uVal_33 - 2;
          ptr2_Long_25 = (int64_t **)
                     (uint64_t)
                     (((uint)*(byte *)((int64_t)ptr2_Long_42 + 1) << ((byte)uVal_21 & 0x1f)) + uVal_24);
          uVal_21 = uVal_31 | 0x10;
          ptr2_Long_18 = (int64_t **)((int64_t)ptr2_Long_42 + 2);
        }
        ptr2_Long_29 = (int64_t **)(uint64_t)uVal_44;
        pU64_26 = (uint8_t *)(uint64_t)uVal_21;
        param_1 = local_a0;
        ptr2_Long_42 = ptr2_Long_18;
      }
      uVal_24 = (uint)ptr2_Long_25;
      if (((uVal_23 & 2) == 0) || (uVal_24 != 0x8b1f)) {
        if (ptr2_Long_5[5] != (int64_t *)0x0) {
          *(uint32_t *)(ptr2_Long_5[5] + 9) = 0xffffffff;
          uVal_23 = *(uint *)(ptr2_Long_5 + 2);
        }
        if (((uVal_23 & 1) == 0) ||
           (0x8421084 <
            (((uint)((uint64_t)ptr2_Long_25 >> 8) & 0xffffff) + (uVal_24 & 0xff) * 0x100) * -0x42108421)
           ) {
          fnPtr_34 = "incorrect header check";
          ptr2_Long_18 = ptr2_Long_25;
          goto LAB_1800bda62;
        }
        if ((uVal_24 & 0xf) != 8) goto LAB_1800bda5b;
        ptr2_Long_18 = (int64_t **)((uint64_t)ptr2_Long_25 >> 4 & 0xfffffff);
        uVal_33 = (uint)ptr2_Long_18 & 0xf;
        uVal_24 = uVal_33 + 8;
        uVal_31 = *(uint *)(ptr2_Long_5 + 6);
        if (*(uint *)(ptr2_Long_5 + 6) == 0) {
          *(uint *)(ptr2_Long_5 + 6) = uVal_24;
          uVal_31 = uVal_24;
        }
        local_80 = ptr2_Long_42;
        local_78 = ptr2_Long_29;
        if ((uVal_33 < 8) && (uVal_24 <= uVal_31)) {
          *(int *)((int64_t)ptr2_Long_5 + 0x1c) = 0x100 << (sbyte)uVal_33;
          *(uint32_t *)(ptr2_Long_5 + 3) = 0;
          pU64_26 = (uint8_t *)0x0;
          uVal_24 = func_0x1801027c0(0,0,0);
          *(uint *)(ptr2_Long_5 + 4) = uVal_24;
          local_a0[0xc] = (uint64_t)uVal_24;
          bFlag_49 = ((uint64_t)ptr2_Long_25 & 0x2000) == 0;
          *(uint *)(ptr2_Long_5 + 1) = bFlag_49 + 0x3f3d + (uint)bFlag_49;
          ptr2_Long_18 = (int64_t **)0x0;
          param_2 = local_70;
        }
        else {
          pU64_26 = (uint8_t *)(uint64_t)((int)pU64_26 - 4);
          local_a0[6] = (int64_t)"invalid window size";
          *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f51;
          param_2 = local_70;
        }
        goto LAB_1800bd57e;
      }
      if (*(int *)(ptr2_Long_5 + 6) == 0) {
        *(uint32_t *)(ptr2_Long_5 + 6) = 0xf;
      }
      ptr2_Long_18 = (int64_t **)0x0;
      uVal_16 = func_0x180102d50(0,0,0);
      *(uint32_t *)(ptr2_Long_5 + 4) = uVal_16;
      local_4c = CONCAT22(local_4c._2_2_,0x8b1f);
      uVal_16 = func_0x180102d50(uVal_16,&local_4c,2);
      *(uint32_t *)(ptr2_Long_5 + 4) = uVal_16;
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f35;
      pU64_26 = (uint8_t *)0x0;
      goto LAB_1800bd12f;
    }
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f40;
    iVal_32 = *(int *)(ptr2_Long_5 + 1);
    goto LAB_1800bb96e;
  case 0x3f35:
    if (uVal_31 < 0x10) {
      if (uVal_33 == 0) goto LAB_1800bdd33;
      uVal_23 = uVal_33 - 1;
      uVal_21 = (uint)*(byte *)ptr2_Long_42 << (bFlag_20 & 0x1f);
      ptr2_Long_40 = (int64_t **)(uint64_t)uVal_21;
      ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
      uVal_24 = uVal_24 + uVal_21;
      ptr2_Long_25 = (int64_t **)(uint64_t)uVal_24;
      uVal_21 = uVal_31 + 8;
      if (uVal_31 < 8) {
        if (uVal_23 == 0) goto LAB_1800bdd2e;
        uVal_23 = uVal_33 - 2;
        bFlag_20 = (byte)uVal_21;
        ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 2);
        uVal_21 = uVal_31 | 0x10;
        ptr2_Long_25 = (int64_t **)
                   (uint64_t)
                   (((uint)*(byte *)((int64_t)ptr2_Long_42 + 1) << (bFlag_20 & 0x1f)) + uVal_24);
      }
      ptr2_Long_29 = (int64_t **)(uint64_t)uVal_23;
      pU64_26 = (uint8_t *)(uint64_t)uVal_21;
      param_1 = local_a0;
      ptr2_Long_42 = ptr2_Long_41;
    }
    *(int *)(ptr2_Long_5 + 3) = (int)ptr2_Long_25;
    if ((char)ptr2_Long_25 == '\b') {
      if (((uint64_t)ptr2_Long_25 & 0xe000) == 0) {
        uVal_17 = (uint64_t)ptr2_Long_25 & 0xffffffff;
        if (ptr2_Long_5[5] != (int64_t *)0x0) {
          *(uint *)ptr2_Long_5[5] = (uint)((uint64_t)ptr2_Long_25 >> 8) & 1;
          uVal_17 = (uint64_t)*(uint *)(ptr2_Long_5 + 3);
        }
        if (((uVal_17 & 0x200) != 0) && ((*(byte *)(ptr2_Long_5 + 2) & 4) != 0)) {
          uVal_16 = func_0x180102d50(*(uint32_t *)(ptr2_Long_5 + 4),&local_4c,2);
          *(uint32_t *)(ptr2_Long_5 + 4) = uVal_16;
          param_1 = local_a0;
          param_2 = local_70;
        }
        *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f36;
        pU64_26 = (uint8_t *)0x0;
        ptr2_Long_18 = (int64_t **)0x0;
        goto LAB_1800bcad6;
      }
      fnPtr_34 = "unknown header flags set";
      ptr2_Long_18 = ptr2_Long_25;
    }
    else {
LAB_1800bda5b:
      fnPtr_34 = "unknown compression method";
      ptr2_Long_18 = ptr2_Long_25;
    }
    goto LAB_1800bda62;
  case 0x3f36:
    if (0x1f < uVal_31) goto LAB_1800bcb75;
LAB_1800bcad6:
    iVal_22 = (int)param_2;
    iVal_32 = (int)ptr2_Long_29;
    if (iVal_32 == 0) goto LAB_1800bdb35;
    uVal_31 = (uint)pU64_26;
    uVal_33 = iVal_32 - 1;
    ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
    uVal_24 = (int)ptr2_Long_18 + ((uint)*(byte *)ptr2_Long_42 << ((byte)pU64_26 & 0x1f));
    ptr2_Long_25 = (int64_t **)(uint64_t)uVal_24;
    param_1 = local_a0;
    if (0x17 < uVal_31) {
LAB_1800bcb6a:
      ptr2_Long_29 = (int64_t **)(uint64_t)uVal_33;
      ptr2_Long_42 = ptr2_Long_41;
      goto LAB_1800bcb75;
    }
    uVal_21 = uVal_31 + 8;
    if (uVal_33 == 0) goto LAB_1800bdd2e;
    uVal_33 = iVal_32 - 2;
    ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 2);
    uVal_24 = uVal_24 + ((uint)*(byte *)((int64_t)ptr2_Long_42 + 1) << ((byte)uVal_21 & 0x1f));
    ptr2_Long_25 = (int64_t **)(uint64_t)uVal_24;
    if (0xf < uVal_31) goto LAB_1800bcb6a;
    uVal_21 = uVal_31 + 0x10;
    if (uVal_33 == 0) goto LAB_1800bdd2e;
    ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 3);
    uVal_24 = uVal_24 + ((uint)*(byte *)((int64_t)ptr2_Long_42 + 2) << ((byte)uVal_21 & 0x1f));
    ptr2_Long_18 = (int64_t **)(uint64_t)uVal_24;
    if (7 < uVal_31) {
      ptr2_Long_29 = (int64_t **)(uint64_t)(iVal_32 - 3U);
      ptr2_Long_25 = ptr2_Long_18;
      ptr2_Long_42 = ptr2_Long_41;
LAB_1800bcb75:
      if (ptr2_Long_5[5] != (int64_t *)0x0) {
        ptr2_Long_5[5][1] = (uint64_t)ptr2_Long_25 & 0xffffffff;
      }
      if (((*(byte *)((int64_t)ptr2_Long_5 + 0x19) & 2) != 0) && ((*(byte *)(ptr2_Long_5 + 2) & 4) != 0)) {
        local_4c = (int)ptr2_Long_25;
        uVal_16 = func_0x180102d50(*(uint32_t *)(ptr2_Long_5 + 4),&local_4c,4);
        *(uint32_t *)(ptr2_Long_5 + 4) = uVal_16;
        param_1 = local_a0;
        param_2 = local_70;
      }
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f37;
      pU64_26 = (uint8_t *)0x0;
      ptr2_Long_18 = (int64_t **)0x0;
      goto LAB_1800bcbd5;
    }
    uVal_31 = uVal_31 + 0x18;
    if (iVal_32 - 3U != 0) {
      ptr2_Long_29 = (int64_t **)(uint64_t)(iVal_32 - 4);
      ptr2_Long_25 = (int64_t **)
                 (uint64_t)
                 (((uint)*(byte *)((int64_t)ptr2_Long_42 + 3) << ((byte)uVal_31 & 0x1f)) + uVal_24);
      ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + 4);
      goto LAB_1800bcb75;
    }
LAB_1800bdd03:
    pU64_26 = (uint8_t *)(uint64_t)uVal_31;
    goto LAB_1800bdd33;
  case 0x3f37:
    if (0xf < uVal_31) {
LAB_1800bcc28:
      if (ptr2_Long_5[5] != (int64_t *)0x0) {
        *(uint *)(ptr2_Long_5[5] + 2) = (uint)ptr2_Long_18 & 0xff;
        *(uint *)((int64_t)ptr2_Long_5[5] + 0x14) = (uint)((uint64_t)ptr2_Long_18 >> 8) & 0xffffff;
      }
      local_90 = pU64_27;
      if (((*(byte *)((int64_t)ptr2_Long_5 + 0x19) & 2) != 0) && ((*(byte *)(ptr2_Long_5 + 2) & 4) != 0)) {
        local_4c = CONCAT22(local_4c._2_2_,(short)ptr2_Long_18);
        uVal_16 = func_0x180102d50(*(uint32_t *)(ptr2_Long_5 + 4),&local_4c,2);
        *(uint32_t *)(ptr2_Long_5 + 4) = uVal_16;
        param_1 = local_a0;
        param_2 = local_70;
      }
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f38;
      uVal_24 = *(uint *)(ptr2_Long_5 + 3);
      ptr2_Long_18 = (int64_t **)0x0;
      pU64_26 = (uint8_t *)0x0;
      ptr2_Long_40 = (int64_t **)0x0;
      if ((uVal_24 & 0x400) == 0) goto LAB_1800bccb7;
LAB_1800bccd1:
      iVal_22 = (int)param_2;
      iVal_32 = (int)ptr2_Long_29;
      pU64_27 = local_90;
      if (iVal_32 != 0) {
        uVal_31 = iVal_32 - 1;
        ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
        uVal_33 = (int)ptr2_Long_18 + ((uint)*(byte *)ptr2_Long_42 << ((byte)pU64_26 & 0x1f));
        ptr2_Long_18 = (int64_t **)(uint64_t)uVal_33;
        param_1 = local_a0;
        if ((uint)pU64_26 < 8) {
          uVal_21 = (uint)pU64_26 + 8;
          pU64_26 = (uint8_t *)(uint64_t)uVal_21;
          if (uVal_31 == 0) {
            ptr2_Long_29 = (int64_t **)0x0;
            ptr2_Long_42 = ptr2_Long_41;
            break;
          }
          uVal_31 = iVal_32 - 2;
          ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 2);
          ptr2_Long_18 = (int64_t **)
                     (uint64_t)
                     (((uint)*(byte *)((int64_t)ptr2_Long_42 + 1) << ((byte)uVal_21 & 0x1f)) + uVal_33);
        }
        ptr2_Long_29 = (int64_t **)(uint64_t)uVal_31;
        goto LAB_1800bcd25;
      }
      ptr2_Long_29 = (int64_t **)0x0;
      break;
    }
LAB_1800bcbd5:
    iVal_22 = (int)param_2;
    iVal_32 = (int)ptr2_Long_29;
    if (iVal_32 != 0) {
      uVal_24 = iVal_32 - 1;
      ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
      uVal_33 = (int)ptr2_Long_18 + ((uint)*(byte *)ptr2_Long_42 << ((byte)pU64_26 & 0x1f));
      ptr2_Long_18 = (int64_t **)(uint64_t)uVal_33;
      if ((uint)pU64_26 < 8) {
        uVal_31 = (uint)pU64_26 + 8;
        if (uVal_24 == 0) goto LAB_1800bdd03;
        uVal_24 = iVal_32 - 2;
        ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 2);
        ptr2_Long_18 = (int64_t **)
                   (uint64_t)
                   (((uint)*(byte *)((int64_t)ptr2_Long_42 + 1) << ((byte)uVal_31 & 0x1f)) + uVal_33);
      }
      ptr2_Long_29 = (int64_t **)(uint64_t)uVal_24;
      param_1 = local_a0;
      ptr2_Long_42 = ptr2_Long_41;
      goto LAB_1800bcc28;
    }
    goto LAB_1800bdb35;
  case 0x3f38:
    uVal_24 = *(uint *)(ptr2_Long_5 + 3);
    if ((uVal_24 & 0x400) == 0) {
      ptr2_Long_40 = (int64_t **)((uint64_t)ptr2_Long_18 & 0xffffffff);
      local_90 = pU64_27;
LAB_1800bccb7:
      ptr2_Long_41 = ptr2_Long_42;
      ptr2_Long_18 = ptr2_Long_40;
      if (ptr2_Long_5[5] != (int64_t *)0x0) {
        ptr2_Long_5[5][3] = 0;
      }
    }
    else {
      ptr2_Long_41 = ptr2_Long_42;
      local_90 = pU64_27;
      if (uVal_31 < 0x10) goto LAB_1800bccd1;
LAB_1800bcd25:
      *(int *)(ptr2_Long_5 + 10) = (int)ptr2_Long_18;
      if (ptr2_Long_5[5] != (int64_t *)0x0) {
        *(int *)(ptr2_Long_5[5] + 4) = (int)ptr2_Long_18;
        uVal_24 = *(uint *)(ptr2_Long_5 + 3);
      }
      if (((uVal_24 & 0x200) != 0) && ((*(byte *)(ptr2_Long_5 + 2) & 4) != 0)) {
        local_4c = CONCAT22(local_4c._2_2_,(short)ptr2_Long_18);
        uVal_16 = func_0x180102d50(*(uint32_t *)(ptr2_Long_5 + 4),&local_4c,2);
        *(uint32_t *)(ptr2_Long_5 + 4) = uVal_16;
        param_1 = local_a0;
        param_2 = local_70;
      }
      pU64_26 = (uint8_t *)0x0;
      ptr2_Long_18 = (int64_t **)0x0;
    }
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f39;
    ptr2_Long_42 = ptr2_Long_41;
    goto LAB_1800bcd94;
  case 0x3f39:
    local_90 = pU64_27;
LAB_1800bcd94:
    ptr2_Long_40 = (int64_t **)(uint64_t)*(uint *)(ptr2_Long_5 + 3);
    if ((*(uint *)(ptr2_Long_5 + 3) & 0x400) != 0) {
      uVal_24 = *(uint *)(ptr2_Long_5 + 10);
      uVal_33 = (uint)ptr2_Long_29;
      uVal_31 = uVal_33;
      if (uVal_24 < uVal_33) {
        uVal_31 = uVal_24;
      }
      if (uVal_31 != 0) {
        pLong_6 = ptr2_Long_5[5];
        local_94 = uVal_15;
        if ((pLong_6 != (int64_t *)0x0) && (pLong_6[3] != 0)) {
          uVal_21 = *(uint *)((int64_t)pLong_6 + 0x24);
          uVal_24 = *(int *)(pLong_6 + 4) - uVal_24;
          if (uVal_24 <= uVal_21 && uVal_21 - uVal_24 != 0) {
            uVal_23 = uVal_21 - uVal_24;
            if (uVal_24 + uVal_31 <= uVal_21) {
              uVal_23 = uVal_31;
            }
            func_0x1806aa960(pLong_6[3] + (uint64_t)uVal_24,ptr2_Long_42,uVal_23);
            ptr2_Long_40 = (int64_t **)(uint64_t)*(uint *)(ptr2_Long_5 + 3);
            param_1 = local_a0;
            param_2 = local_70;
          }
        }
        if ((((uint64_t)ptr2_Long_40 & 0x200) != 0) && ((*(byte *)(ptr2_Long_5 + 2) & 4) != 0)) {
          uVal_16 = func_0x180102d50(*(uint32_t *)(ptr2_Long_5 + 4),ptr2_Long_42,uVal_31);
          *(uint32_t *)(ptr2_Long_5 + 4) = uVal_16;
          param_1 = local_a0;
          param_2 = local_70;
        }
        ptr2_Long_29 = (int64_t **)(uint64_t)(uVal_33 - uVal_31);
        ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + (uint64_t)uVal_31);
        uVal_24 = *(int *)(ptr2_Long_5 + 10) - uVal_31;
        *(uint *)(ptr2_Long_5 + 10) = uVal_24;
        uVal_15 = local_94;
      }
      iVal_22 = (int)param_2;
      pU64_27 = local_90;
      if (uVal_24 != 0) break;
    }
    *(uint32_t *)(ptr2_Long_5 + 10) = 0;
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f3a;
    pU64_27 = local_90;
switchD_1800bb98d_caseD_3f3a:
    iVal_22 = (int)param_2;
    if ((*(byte *)((int64_t)ptr2_Long_5 + 0x19) & 8) != 0) {
      if ((int)ptr2_Long_29 == 0) {
LAB_1800bdb35:
        ptr2_Long_29 = (int64_t **)0x0;
      }
      else {
        uVal_17 = 0;
        do {
          ch_4 = *(char *)((int64_t)ptr2_Long_42 + uVal_17);
          pLong_6 = ptr2_Long_5[5];
          if ((pLong_6 != (int64_t *)0x0) && (lVal_47 = pLong_6[5], lVal_47 != 0)) {
            uVal_24 = *(uint *)(ptr2_Long_5 + 10);
            ptr2_Long_40 = (int64_t **)(uint64_t)uVal_24;
            if (uVal_24 < *(uint *)(pLong_6 + 6)) {
              *(uint *)(ptr2_Long_5 + 10) = uVal_24 + 1;
              *(char *)(lVal_47 + (int64_t)ptr2_Long_40) = ch_4;
            }
          }
          uVal_17 = uVal_17 + 1;
        } while ((ch_4 != '\0') && (uVal_17 < ((uint64_t)ptr2_Long_29 & 0xffffffff)));
        local_90 = pU64_27;
        local_80 = ptr2_Long_18;
        local_78 = ptr2_Long_29;
        if (((*(byte *)((int64_t)ptr2_Long_5 + 0x19) & 2) != 0) && ((*(byte *)(ptr2_Long_5 + 2) & 4) != 0))
        {
          uVal_16 = func_0x180102d50(*(uint32_t *)(ptr2_Long_5 + 4),ptr2_Long_42,uVal_17 & 0xffffffff);
          *(uint32_t *)(ptr2_Long_5 + 4) = uVal_16;
          param_1 = local_a0;
          param_2 = local_70;
        }
        iVal_22 = (int)param_2;
        if (ch_4 == '\0') {
          ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + uVal_17);
          ptr2_Long_29 = (int64_t **)(((uint64_t)ptr2_Long_29 & 0xffffffff) - uVal_17 & 0xffffffff);
          ptr2_Long_18 = local_80;
          pU64_27 = local_90;
          goto LAB_1800bcf6b;
        }
LAB_1800bdc1d:
        ptr2_Long_29 = (int64_t **)(uint64_t)(uint)((int)local_78 - (int)uVal_17);
        ptr2_Long_18 = local_80;
        ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + uVal_17);
        pU64_27 = local_90;
      }
      break;
    }
    if (ptr2_Long_5[5] != (int64_t *)0x0) {
      ptr2_Long_5[5][5] = 0;
    }
LAB_1800bcf6b:
    *(uint32_t *)(ptr2_Long_5 + 10) = 0;
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f3b;
switchD_1800bb98d_caseD_3f3b:
    iVal_22 = (int)param_2;
    if ((*(byte *)((int64_t)ptr2_Long_5 + 0x19) & 0x10) == 0) {
      ptr2_Long_25 = ptr2_Long_18;
      if (ptr2_Long_5[5] != (int64_t *)0x0) {
        ptr2_Long_5[5][7] = 0;
      }
    }
    else {
      if ((int)ptr2_Long_29 == 0) goto LAB_1800bdb35;
      uVal_17 = 0;
      do {
        ch_4 = *(char *)((int64_t)ptr2_Long_42 + uVal_17);
        pLong_6 = ptr2_Long_5[5];
        if ((pLong_6 != (int64_t *)0x0) && (lVal_47 = pLong_6[7], lVal_47 != 0)) {
          uVal_24 = *(uint *)(ptr2_Long_5 + 10);
          ptr2_Long_40 = (int64_t **)(uint64_t)uVal_24;
          if (uVal_24 < *(uint *)(pLong_6 + 8)) {
            *(uint *)(ptr2_Long_5 + 10) = uVal_24 + 1;
            *(char *)(lVal_47 + (int64_t)ptr2_Long_40) = ch_4;
          }
        }
        uVal_17 = uVal_17 + 1;
      } while ((ch_4 != '\0') && (uVal_17 < ((uint64_t)ptr2_Long_29 & 0xffffffff)));
      local_90 = pU64_27;
      local_80 = ptr2_Long_18;
      local_78 = ptr2_Long_29;
      if (((*(byte *)((int64_t)ptr2_Long_5 + 0x19) & 2) != 0) && ((*(byte *)(ptr2_Long_5 + 2) & 4) != 0)) {
        uVal_16 = func_0x180102d50(*(uint32_t *)(ptr2_Long_5 + 4),ptr2_Long_42,uVal_17 & 0xffffffff);
        *(uint32_t *)(ptr2_Long_5 + 4) = uVal_16;
        param_1 = local_a0;
        param_2 = local_70;
      }
      iVal_22 = (int)param_2;
      if (ch_4 != '\0') goto LAB_1800bdc1d;
      ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + uVal_17);
      ptr2_Long_29 = (int64_t **)(((uint64_t)ptr2_Long_29 & 0xffffffff) - uVal_17 & 0xffffffff);
      ptr2_Long_25 = local_80;
      pU64_27 = local_90;
    }
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f3c;
    ptr2_Long_43 = ptr2_Long_42;
switchD_1800bb98d_caseD_3f3c:
    iVal_22 = (int)param_2;
    ptr2_Long_18 = ptr2_Long_25;
    ptr2_Long_42 = ptr2_Long_43;
    if ((*(uint *)(ptr2_Long_5 + 3) & 0x200) != 0) {
      uVal_24 = (uint)pU64_26;
      if (uVal_24 < 0x10) {
        iVal_32 = (int)ptr2_Long_29;
        if (iVal_32 == 0) goto LAB_1800bdb35;
        uVal_31 = iVal_32 - 1;
        ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_43 + 1);
        uVal_33 = (int)ptr2_Long_25 + ((uint)*(byte *)ptr2_Long_43 << ((byte)pU64_26 & 0x1f));
        ptr2_Long_25 = (int64_t **)(uint64_t)uVal_33;
        uVal_21 = uVal_24 + 8;
        ptr2_Long_42 = ptr2_Long_40;
        if (uVal_24 < 8) {
          ptr2_Long_41 = ptr2_Long_40;
          if (uVal_31 == 0) {
LAB_1800bdd2e:
            pU64_26 = (uint8_t *)(uint64_t)uVal_21;
            ptr2_Long_18 = ptr2_Long_25;
LAB_1800bdd33:
            ptr2_Long_29 = (int64_t **)0x0;
            param_1 = local_a0;
            ptr2_Long_42 = ptr2_Long_41;
            break;
          }
          uVal_31 = iVal_32 - 2;
          bFlag_20 = (byte)uVal_21;
          uVal_21 = uVal_24 | 0x10;
          ptr2_Long_25 = (int64_t **)
                     (uint64_t)
                     (((uint)*(byte *)((int64_t)ptr2_Long_43 + 1) << (bFlag_20 & 0x1f)) + uVal_33);
          ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_43 + 2);
        }
        ptr2_Long_29 = (int64_t **)(uint64_t)uVal_31;
        pU64_26 = (uint8_t *)(uint64_t)uVal_21;
        param_1 = local_a0;
      }
      if (((*(byte *)(ptr2_Long_5 + 2) & 4) == 0) || ((uint)ptr2_Long_25 == (uint)*(ushort *)(ptr2_Long_5 + 4)))
      {
        ptr2_Long_18 = (int64_t **)0x0;
        pU64_26 = (uint8_t *)0x0;
        goto LAB_1800bd0e6;
      }
      fnPtr_34 = "header crc mismatch";
      ptr2_Long_18 = ptr2_Long_25;
      goto LAB_1800bda62;
    }
LAB_1800bd0e6:
    if (ptr2_Long_5[5] != (int64_t *)0x0) {
      *(uint *)((int64_t)ptr2_Long_5[5] + 0x44) = *(uint *)(ptr2_Long_5 + 3) >> 9 & 1;
      *(uint32_t *)(ptr2_Long_5[5] + 9) = 1;
    }
    uVal_24 = func_0x180102d50(0,0,0);
    *(uint *)(ptr2_Long_5 + 4) = uVal_24;
    local_a0[0xc] = (uint64_t)uVal_24;
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f3f;
LAB_1800bd12f:
    iVal_32 = *(int *)(ptr2_Long_5 + 1);
    param_1 = local_a0;
    param_2 = local_70;
    goto LAB_1800bb96e;
  case 0x3f3a:
    goto switchD_1800bb98d_caseD_3f3a;
  case 0x3f3b:
    goto switchD_1800bb98d_caseD_3f3b;
  case 0x3f3c:
    goto switchD_1800bb98d_caseD_3f3c;
  case 0x3f3d:
    if (uVal_31 < 0x20) {
      if (uVal_33 == 0) goto LAB_1800bdd33;
      uVal_23 = uVal_33 - 1;
      ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
      uVal_24 = uVal_24 + ((uint)*(byte *)ptr2_Long_42 << (bFlag_20 & 0x1f));
      ptr2_Long_18 = (int64_t **)(uint64_t)uVal_24;
      if (0x17 < uVal_31) {
LAB_1800bc610:
        ptr2_Long_29 = (int64_t **)(uint64_t)uVal_23;
        param_1 = local_a0;
        goto LAB_1800bc61b;
      }
      uVal_21 = uVal_31 + 8;
      ptr2_Long_25 = ptr2_Long_18;
      if (uVal_23 != 0) {
        uVal_23 = uVal_33 - 2;
        ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 2);
        uVal_24 = uVal_24 + ((uint)*(byte *)((int64_t)ptr2_Long_42 + 1) << ((byte)uVal_21 & 0x1f));
        ptr2_Long_18 = (int64_t **)(uint64_t)uVal_24;
        if (0xf < uVal_31) goto LAB_1800bc610;
        uVal_21 = uVal_31 + 0x10;
        ptr2_Long_25 = ptr2_Long_18;
        if (uVal_23 != 0) {
          ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 3);
          uVal_24 = uVal_24 + ((uint)*(byte *)((int64_t)ptr2_Long_42 + 2) << ((byte)uVal_21 & 0x1f));
          ptr2_Long_18 = (int64_t **)(uint64_t)uVal_24;
          if (uVal_31 < 8) {
            pU64_26 = (uint8_t *)(uint64_t)(uVal_31 + 0x18);
            if (uVal_33 - 3 == 0) goto LAB_1800bdd33;
            ptr2_Long_29 = (int64_t **)(uint64_t)(uVal_33 - 4);
            ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 4);
            ptr2_Long_18 = (int64_t **)
                       (uint64_t)
                       (((uint)*(byte *)((int64_t)ptr2_Long_42 + 3) << ((byte)(uVal_31 + 0x18) & 0x1f))
                       + uVal_24);
            param_1 = local_a0;
          }
          else {
            ptr2_Long_29 = (int64_t **)(uint64_t)(uVal_33 - 3);
            param_1 = local_a0;
          }
          goto LAB_1800bc61b;
        }
      }
      goto LAB_1800bdd2e;
    }
LAB_1800bc61b:
    uVal_24 = (uint)ptr2_Long_18;
    uVal_24 = uVal_24 >> 0x18 | (uVal_24 & 0xff0000) >> 8 | (uVal_24 & 0xff00) << 8 | uVal_24 << 0x18;
    *(uint *)(ptr2_Long_5 + 4) = uVal_24;
    param_1[0xc] = (uint64_t)uVal_24;
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f3e;
    ptr2_Long_18 = (int64_t **)0x0;
    pU64_26 = (uint8_t *)0x0;
  case 0x3f3e:
    if (*(int *)((int64_t)ptr2_Long_5 + 0x14) == 0) {
      param_1[3] = (int64_t)pU64_27;
      *(uint *)(param_1 + 4) = uVal_48;
      *param_1 = (int64_t)ptr2_Long_41;
      *(int *)(param_1 + 1) = (int)ptr2_Long_29;
      *(int *)(ptr2_Long_5 + 9) = (int)ptr2_Long_18;
      *(int *)((int64_t)ptr2_Long_5 + 0x4c) = (int)pU64_26;
      uVal_17 = 2;
      goto LAB_1800bdf2e;
    }
    uVal_24 = func_0x1801027c0(0,0,0);
    *(uint *)(ptr2_Long_5 + 4) = uVal_24;
    local_a0[0xc] = (uint64_t)uVal_24;
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f3f;
    param_1 = local_a0;
    param_2 = local_70;
switchD_1800bb98d_caseD_3f3f:
    iVal_22 = (int)param_2;
    ptr2_Long_42 = ptr2_Long_41;
    if (local_60 < 2) break;
switchD_1800bb98d_caseD_3f40:
    iVal_22 = (int)param_2;
    uVal_31 = (uint)pU64_26;
    uVal_24 = (uint)ptr2_Long_18;
    if (*(int *)((int64_t)ptr2_Long_5 + 0xc) == 0) {
      if (uVal_31 < 3) {
        if ((int)ptr2_Long_29 != 0) {
          uVal_31 = uVal_31 | 8;
          ptr2_Long_29 = (int64_t **)(uint64_t)((int)ptr2_Long_29 - 1);
          bFlag_20 = *(byte *)ptr2_Long_42;
          ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
          uVal_24 = ((uint)bFlag_20 << ((byte)pU64_26 & 0x1f)) + uVal_24;
          param_1 = local_a0;
          goto LAB_1800bc6d1;
        }
        goto LAB_1800bdb35;
      }
LAB_1800bc6d1:
      *(uint *)((int64_t)ptr2_Long_5 + 0xc) = uVal_24 & 1;
      switch(uVal_24 >> 1 & 3) {
      case 0:
        uVal_16 = 0x3f41;
        break;
      case 1:
        ptr2_Long_5[0xc] = (int64_t *)&DAT_1806b3010;
        ptr2_Long_5[0xe] = (int64_t *)0x500000009;
        ptr2_Long_5[0xd] = (int64_t *)&DAT_1806b3810;
        *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f47;
        if (iVal_22 == 6) {
          ptr2_Long_18 = (int64_t **)(uint64_t)(uVal_24 >> 3);
          pU64_26 = (uint8_t *)(uint64_t)(uVal_31 - 3);
          goto LAB_1800bdd38;
        }
        goto LAB_1800bc83f;
      case 2:
        uVal_16 = 0x3f44;
        break;
      case 3:
        param_1[6] = (int64_t)"invalid block type";
        uVal_16 = 0x3f51;
      }
      *(uint32_t *)(ptr2_Long_5 + 1) = uVal_16;
LAB_1800bc83f:
      ptr2_Long_18 = (int64_t **)(uint64_t)(uVal_24 >> 3);
      pU64_26 = (uint8_t *)(uint64_t)(uVal_31 - 3);
      iVal_32 = *(int *)(ptr2_Long_5 + 1);
    }
    else {
      ptr2_Long_18 = (int64_t **)(uint64_t)(uVal_24 >> ((byte)pU64_26 & 7));
      pU64_26 = (uint8_t *)(uint64_t)(uVal_31 & 0xfffffff8);
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f4e;
      iVal_32 = *(int *)(ptr2_Long_5 + 1);
      param_1 = local_a0;
    }
    goto LAB_1800bb96e;
  case 0x3f3f:
    goto switchD_1800bb98d_caseD_3f3f;
  case 0x3f40:
    goto switchD_1800bb98d_caseD_3f40;
  case 0x3f41:
    uVal_24 = uVal_24 >> (bFlag_20 & 7);
    ptr2_Long_25 = (int64_t **)(uint64_t)uVal_24;
    uVal_23 = uVal_31 & 0xfffffff8;
    if (uVal_31 < 0x20) {
      if (uVal_33 == 0) {
LAB_1800bdfc7:
        pU64_26 = (uint8_t *)(uint64_t)uVal_23;
        ptr2_Long_18 = ptr2_Long_25;
        goto LAB_1800bdd33;
      }
      uVal_44 = uVal_33 - 1;
      ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
      uVal_24 = uVal_24 + ((uint)*(byte *)ptr2_Long_42 << ((byte)uVal_23 & 0x1f));
      ptr2_Long_25 = (int64_t **)(uint64_t)uVal_24;
      uVal_21 = uVal_23 + 8;
      if (uVal_31 < 0x18) {
        ptr2_Long_41 = ptr2_Long_40;
        if (uVal_44 != 0) {
          uVal_44 = uVal_33 - 2;
          ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_42 + 2);
          uVal_24 = uVal_24 + ((uint)*(byte *)((int64_t)ptr2_Long_42 + 1) << ((byte)uVal_21 & 0x1f));
          ptr2_Long_25 = (int64_t **)(uint64_t)uVal_24;
          uVal_21 = uVal_23 + 0x10;
          if (0xf < uVal_31) goto LAB_1800bc702;
          ptr2_Long_41 = ptr2_Long_40;
          if (uVal_44 != 0) {
            ptr2_Long_29 = (int64_t **)(uint64_t)(uVal_33 - 3);
            uVal_21 = (uint)*(byte *)((int64_t)ptr2_Long_42 + 2) << ((byte)uVal_21 & 0x1f);
            ptr2_Long_40 = (int64_t **)(uint64_t)uVal_21;
            ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 3);
            uVal_24 = uVal_24 + uVal_21;
            ptr2_Long_25 = (int64_t **)(uint64_t)uVal_24;
            uVal_23 = uVal_23 + 0x18;
            if (uVal_31 < 8) {
              if (uVal_33 - 3 == 0) goto LAB_1800bdfc7;
              ptr2_Long_29 = (int64_t **)(uint64_t)(uVal_33 - 4);
              ptr2_Long_25 = (int64_t **)
                         (uint64_t)
                         (((uint)*(byte *)((int64_t)ptr2_Long_42 + 3) << ((byte)uVal_23 & 0x1f)) +
                         uVal_24);
              pU64_26 = (uint8_t *)0x20;
              ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + 4);
            }
            else {
              pU64_26 = (uint8_t *)(uint64_t)uVal_23;
              ptr2_Long_42 = ptr2_Long_41;
            }
            goto LAB_1800bc70a;
          }
        }
        goto LAB_1800bdd2e;
      }
LAB_1800bc702:
      ptr2_Long_29 = (int64_t **)(uint64_t)uVal_44;
      pU64_26 = (uint8_t *)(uint64_t)uVal_21;
      ptr2_Long_42 = ptr2_Long_40;
    }
    else {
      pU64_26 = (uint8_t *)(uint64_t)uVal_23;
    }
LAB_1800bc70a:
    uVal_24 = (uint)ptr2_Long_25 & 0xffff;
    if (uVal_24 != ~(uint)ptr2_Long_25 >> 0x10) {
      fnPtr_34 = "invalid stored block lengths";
      param_1 = local_a0;
      ptr2_Long_18 = ptr2_Long_25;
      goto LAB_1800bda62;
    }
    ptr2_Long_18 = (int64_t **)0x0;
    *(uint *)(ptr2_Long_5 + 10) = uVal_24;
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f42;
    pU64_26 = (uint8_t *)0x0;
    param_1 = local_a0;
    if (iVal_22 != 6) goto switchD_1800bb98d_caseD_3f42;
    pU64_26 = (uint8_t *)0x0;
    ptr2_Long_18 = (int64_t **)0x0;
    break;
  case 0x3f42:
switchD_1800bb98d_caseD_3f42:
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f43;
  case 0x3f43:
    uVal_24 = *(uint *)(ptr2_Long_5 + 10);
    if (uVal_24 == 0) {
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f3f;
      iVal_32 = *(int *)(ptr2_Long_5 + 1);
      goto LAB_1800bb96e;
    }
    uVal_31 = (uint)ptr2_Long_29;
    if (uVal_31 <= uVal_24) {
      uVal_24 = uVal_31;
    }
    if (uVal_48 <= uVal_24) {
      uVal_24 = uVal_48;
    }
    if (uVal_24 != 0) {
      uVal_17 = (uint64_t)uVal_24;
      local_94 = uVal_15;
      local_90 = pU64_26;
      func_0x1806aa960(pU64_27,ptr2_Long_42,uVal_17);
      ptr2_Long_29 = (int64_t **)(uint64_t)(uVal_31 - uVal_24);
      ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + uVal_17);
      uVal_48 = uVal_48 - uVal_24;
      pU64_27 = pU64_27 + uVal_17;
      *(uint *)(ptr2_Long_5 + 10) = *(int *)(ptr2_Long_5 + 10) - uVal_24;
      iVal_32 = *(int *)(ptr2_Long_5 + 1);
      param_1 = local_a0;
      param_2 = local_70;
      pU64_26 = local_90;
      uVal_15 = local_94;
      goto LAB_1800bb96e;
    }
    break;
  case 0x3f44:
    if (uVal_31 < 0xe) {
      if (uVal_33 == 0) goto LAB_1800bdd33;
      uVal_23 = uVal_33 - 1;
      ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
      uVal_24 = uVal_24 + ((uint)*(byte *)ptr2_Long_42 << (bFlag_20 & 0x1f));
      ptr2_Long_25 = (int64_t **)(uint64_t)uVal_24;
      uVal_21 = uVal_31 + 8;
      if (uVal_31 < 6) {
        if (uVal_23 == 0) goto LAB_1800bdd2e;
        uVal_23 = uVal_33 - 2;
        bFlag_20 = (byte)uVal_21;
        ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 2);
        uVal_21 = uVal_31 | 0x10;
        ptr2_Long_25 = (int64_t **)
                   (uint64_t)
                   (((uint)*(byte *)((int64_t)ptr2_Long_42 + 1) << (bFlag_20 & 0x1f)) + uVal_24);
      }
      ptr2_Long_29 = (int64_t **)(uint64_t)uVal_23;
      pU64_26 = (uint8_t *)(uint64_t)uVal_21;
      param_1 = local_a0;
      ptr2_Long_42 = ptr2_Long_41;
    }
    uVal_31 = (uint)ptr2_Long_25 & 0x1f;
    *(uint *)((int64_t)ptr2_Long_5 + 0x7c) = uVal_31 + 0x101;
    uVal_33 = (uint)((uint64_t)ptr2_Long_25 >> 5) & 0x1f;
    *(uint *)(ptr2_Long_5 + 0x10) = uVal_33 + 1;
    uVal_24 = ((uint)((uint64_t)ptr2_Long_25 >> 10) & 0xf) + 4;
    *(uint *)(ptr2_Long_5 + 0xf) = uVal_24;
    ptr2_Long_18 = (int64_t **)(uint64_t)((uint)ptr2_Long_25 >> 0xe);
    pU64_26 = (uint8_t *)(uint64_t)((int)pU64_26 - 0xe);
    ptr2_Long_40 = (int64_t **)(uint64_t)(0x1d < uVal_33 || 0x1d < uVal_31);
    if (0x1d < uVal_33 || 0x1d < uVal_31) {
      fnPtr_34 = "too many length or distance symbols";
      goto LAB_1800bda62;
    }
    *(uint32_t *)((int64_t)ptr2_Long_5 + 0x84) = 0;
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f45;
    uVal_31 = 0;
LAB_1800bc9d2:
    pU64_36 = &DAT_1806b2fc0 + uVal_31;
    uVal_30 = (uint64_t)uVal_31;
    do {
      uVal_31 = (uint)ptr2_Long_18;
      uVal_33 = (uint)pU64_26;
      if (uVal_33 < 3) {
        if ((int)ptr2_Long_29 == 0) goto LAB_1800bdb35;
        uVal_33 = uVal_33 | 8;
        bFlag_20 = *(byte *)ptr2_Long_42;
        ptr2_Long_29 = (int64_t **)(uint64_t)((int)ptr2_Long_29 - 1);
        ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
        uVal_31 = uVal_31 + ((uint)bFlag_20 << ((byte)pU64_26 & 0x1f));
        param_1 = local_a0;
      }
      uVal_17 = uVal_30 + 1;
      *(int *)((int64_t)ptr2_Long_5 + 0x84) = (int)uVal_30 + 1;
      ptr2_Long_40 = (int64_t **)(uint64_t)*pU64_36;
      *(ushort *)((int64_t)ptr2_Long_5 + (int64_t)ptr2_Long_40 * 2 + 0x90) = (ushort)uVal_31 & 7;
      ptr2_Long_18 = (int64_t **)(uint64_t)(uVal_31 >> 3);
      pU64_26 = (uint8_t *)(uint64_t)(uVal_33 - 3);
      pU64_36 = pU64_36 + 1;
      uVal_30 = uVal_17;
    } while (uVal_17 < uVal_24);
    goto LAB_1800bba69;
  case 0x3f45:
    uVal_24 = *(uint *)(ptr2_Long_5 + 0xf);
    uVal_31 = *(uint *)((int64_t)ptr2_Long_5 + 0x84);
    uVal_17 = (uint64_t)uVal_31;
    if (uVal_31 < uVal_24) goto LAB_1800bc9d2;
LAB_1800bba69:
    uVal_24 = (uint)uVal_17;
    if (uVal_24 < 0x13) {
      ptr2_Long_41 = (int64_t **)(uVal_17 & 0xffffffff);
      if ((uVal_24 & 3) != 3) {
        lVal_47 = 0;
        do {
          *(uint16_t *)
           ((int64_t)ptr2_Long_5 +
           (uint64_t)(ushort)(&DAT_1806b2fc0)[lVal_47 + (uVal_17 & 0xffffffff)] * 2 + 0x90) = 0;
          lVal_47 = lVal_47 + 1;
        } while ((uVal_24 & 3 ^ (uint)lVal_47) != 3);
        uVal_31 = (uint)lVal_47 + uVal_24;
        ptr2_Long_41 = (int64_t **)(uint64_t)uVal_31;
        ptr2_Long_40 = (int64_t **)(uint64_t)uVal_31;
      }
      if (uVal_24 < 0x10) {
        iVal_32 = (int)ptr2_Long_41;
        pU64_35 = &DAT_1806b2fc0;
        ptr2_Long_40 = ptr2_Long_41;
        do {
          *(uint16_t *)
           ((int64_t)ptr2_Long_5 + (uint64_t)(ushort)pU64_35[(int64_t)ptr2_Long_41] * 2 + 0x90) = 0;
          *(uint16_t *)
           ((int64_t)ptr2_Long_5 + (uint64_t)(ushort)pU64_35[(int64_t)iVal_32 + 1] * 2 + 0x90) = 0;
          *(uint16_t *)
           ((int64_t)ptr2_Long_5 + (uint64_t)(ushort)pU64_35[(int64_t)iVal_32 + 2] * 2 + 0x90) = 0;
          uVal_24 = (uint)ptr2_Long_40;
          ptr2_Long_40 = (int64_t **)(uint64_t)(uVal_24 + 4);
          *(uint16_t *)((int64_t)ptr2_Long_5 + (uint64_t)(ushort)pU64_35[iVal_32 + 3] * 2 + 0x90) = 0
          ;
          pU64_35 = pU64_35 + 4;
        } while (uVal_24 < 0xf);
      }
      *(int *)((int64_t)ptr2_Long_5 + 0x84) = (int)ptr2_Long_40;
    }
    ptr2_Long_41 = ptr2_Long_5 + 0xaa;
    ptr2_Long_5[0x11] = (int64_t *)ptr2_Long_41;
    ptr2_Long_5[0xd] = (int64_t *)ptr2_Long_41;
    ptr2_Long_5[0xc] = (int64_t *)ptr2_Long_41;
    *(uint32_t *)(ptr2_Long_5 + 0xe) = 7;
    local_b0 = ptr2_Long_5 + 0x62;
    local_b8 = ptr2_Long_5 + 0xe;
    uVal_17 = 0;
    local_84 = uVal_48;
    local_80 = ptr2_Long_42;
    local_68 = func_0x1800ba4d0(0,ptr2_Long_5 + 0x12,0x13,ptr2_Long_5 + 0x11);
    param_1 = local_a0;
    param_2 = local_70;
    if (local_68 == 0) {
      *(uint32_t *)((int64_t)ptr2_Long_5 + 0x84) = 0;
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f46;
      local_68 = 0;
      ptr2_Long_41 = local_80;
LAB_1800bc1b7:
      iVal_22 = (int)param_2;
      local_64 = *(int *)((int64_t)ptr2_Long_5 + 0x7c);
      uVal_24 = *(int *)(ptr2_Long_5 + 0x10) + local_64;
      local_78 = (int64_t **)CONCAT44(local_78._4_4_,uVal_24);
      uVal_48 = local_84;
      if ((uint)uVal_17 < uVal_24) {
        pLong_6 = ptr2_Long_5[0xc];
        uVal_31 = ~(-1 << (*(byte *)(ptr2_Long_5 + 0xe) & 0x1f));
        ptr2_Long_42 = ptr2_Long_29;
        do {
          uVal_30 = (uint64_t)((uint)ptr2_Long_18 & uVal_31);
          bFlag_20 = *(byte *)((int64_t)pLong_6 + uVal_30 * 4 + 1);
          uVal_33 = (uint)pU64_26;
          uVal_21 = (uint)uVal_17;
          param_1 = local_a0;
          ptr2_Long_40 = ptr2_Long_41;
          if (uVal_33 < bFlag_20) {
            pU64_26 = (uint8_t *)((uint64_t)pU64_26 & 0xffffffff);
            ptr2_Long_29 = (int64_t **)((uint64_t)ptr2_Long_42 & 0xffffffff);
            do {
              if ((int)ptr2_Long_29 == 0) {
                pU64_26 = (uint8_t *)(uint64_t)(uVal_33 + (int)ptr2_Long_42 * 8);
                ptr2_Long_29 = (int64_t **)0x0;
                ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_41 + ((uint64_t)ptr2_Long_42 & 0xffffffff));
                local_94 = uVal_15;
                local_90 = pU64_27;
                goto LAB_1800bdd38;
              }
              bFlag_20 = *(byte *)ptr2_Long_40;
              ptr2_Long_29 = (int64_t **)(uint64_t)((int)ptr2_Long_29 - 1);
              ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_40 + 1);
              uVal_23 = (int)ptr2_Long_18 + ((uint)bFlag_20 << ((byte)pU64_26 & 0x1f));
              ptr2_Long_18 = (int64_t **)(uint64_t)uVal_23;
              uVal_44 = (int)pU64_26 + 8;
              pU64_26 = (uint8_t *)(uint64_t)uVal_44;
              uVal_30 = (uint64_t)(uVal_23 & uVal_31);
              bFlag_20 = *(byte *)((int64_t)pLong_6 + uVal_30 * 4 + 1);
            } while (uVal_44 < bFlag_20);
          }
          else {
            ptr2_Long_29 = (int64_t **)((uint64_t)ptr2_Long_42 & 0xffffffff);
            pU64_26 = (uint8_t *)((uint64_t)pU64_26 & 0xffffffff);
          }
          ptr2_Long_41 = ptr2_Long_40;
          ptr2_Long_40 = (int64_t **)(uint64_t)bFlag_20;
          uVal_23 = (uint)ptr2_Long_18;
          uVal_46 = *(ushort *)((int64_t)pLong_6 + uVal_30 * 4 + 2);
          uVal_33 = (uint)pU64_26;
          uVal_44 = (uint)bFlag_20;
          if (0xf < uVal_46) {
            if (uVal_46 == 0x10) {
              while (uVal_33 < bFlag_20 + 2) {
                if ((int)ptr2_Long_29 == 0) goto LAB_1800bdc3a;
                ptr2_Long_29 = (int64_t **)(uint64_t)((int)ptr2_Long_29 - 1);
                bFlag_3 = *(byte *)ptr2_Long_41;
                ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_41 + 1);
                uVal_23 = (int)ptr2_Long_18 + ((uint)bFlag_3 << ((byte)pU64_26 & 0x1f));
                ptr2_Long_18 = (int64_t **)(uint64_t)uVal_23;
                uVal_33 = (int)pU64_26 + 8;
                pU64_26 = (uint8_t *)(uint64_t)uVal_33;
              }
              uVal_23 = uVal_23 >> (bFlag_20 & 0x1f);
              ptr2_Long_18 = (int64_t **)(uint64_t)uVal_23;
              if (uVal_21 != 0) {
                ptr2_Long_40 = (int64_t **)
                           (uint64_t)
                           *(ushort *)((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 - 1) * 2 + 0x90);
                uVal_28 = uVal_23 & 3;
                uVal_23 = uVal_23 >> 2;
                uVal_33 = (uVal_33 - uVal_44) - 2;
                goto LAB_1800bc355;
              }
              local_a0[6] = (int64_t)"invalid bit length repeat";
              *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f51;
              pU64_26 = (uint8_t *)(uint64_t)(uVal_33 - uVal_44);
            }
            else {
              if (uVal_46 == 0x11) {
                while (uVal_33 < bFlag_20 + 3) {
                  if ((int)ptr2_Long_29 == 0) goto LAB_1800bdc3a;
                  ptr2_Long_29 = (int64_t **)(uint64_t)((int)ptr2_Long_29 - 1);
                  bFlag_3 = *(byte *)ptr2_Long_41;
                  ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_41 + 1);
                  uVal_23 = (int)ptr2_Long_18 + ((uint)bFlag_3 << ((byte)pU64_26 & 0x1f));
                  ptr2_Long_18 = (int64_t **)(uint64_t)uVal_23;
                  uVal_33 = (int)pU64_26 + 8;
                  pU64_26 = (uint8_t *)(uint64_t)uVal_33;
                }
                uVal_23 = uVal_23 >> (bFlag_20 & 0x1f);
                uVal_28 = uVal_23 & 7;
                uVal_23 = uVal_23 >> 3;
                uVal_33 = (uVal_33 - uVal_44) - 3;
                ptr2_Long_40 = (int64_t **)0x0;
LAB_1800bc355:
                uVal_28 = uVal_28 + 3;
              }
              else {
                while (uVal_33 < bFlag_20 + 7) {
                  local_94 = uVal_15;
                  local_90 = pU64_27;
                  if ((int)ptr2_Long_29 == 0) goto LAB_1800bdb5b;
                  ptr2_Long_29 = (int64_t **)(uint64_t)((int)ptr2_Long_29 - 1);
                  bFlag_3 = *(byte *)ptr2_Long_41;
                  ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_41 + 1);
                  uVal_23 = (int)ptr2_Long_18 + ((uint)bFlag_3 << ((byte)pU64_26 & 0x1f));
                  ptr2_Long_18 = (int64_t **)(uint64_t)uVal_23;
                  uVal_33 = (int)pU64_26 + 8;
                  pU64_26 = (uint8_t *)(uint64_t)uVal_33;
                }
                uVal_23 = uVal_23 >> (bFlag_20 & 0x1f);
                uVal_28 = (uVal_23 & 0x7f) + 0xb;
                uVal_23 = uVal_23 >> 7;
                uVal_33 = (uVal_33 - uVal_44) - 7;
                ptr2_Long_40 = (int64_t **)0x0;
              }
              uVal_30 = (uint64_t)uVal_28;
              pU64_26 = (uint8_t *)(uint64_t)uVal_33;
              ptr2_Long_18 = (int64_t **)(uint64_t)uVal_23;
              if (uVal_28 + uVal_21 <= uVal_24) {
                if ((uVal_28 < 0x10) || (-uVal_28 < uVal_21)) {
LAB_1800bc4d0:
                  uVal_21 = (uint)uVal_30;
                  uVal_39 = SUB82(ptr2_Long_40,0);
                  uVal_33 = uVal_21;
                  if ((uVal_30 & 3) != 0) {
                    uVal_33 = 0;
                    do {
                      *(uint16_t *)
                       ((int64_t)ptr2_Long_5 + (uint64_t)((int)uVal_17 + uVal_33) * 2 + 0x90) = uVal_39;
                      uVal_33 = uVal_33 + 1;
                    } while ((uVal_21 & 3) != uVal_33);
                    uVal_17 = (uint64_t)((int)uVal_17 + uVal_33);
                    uVal_33 = uVal_21 - uVal_33;
                    local_58 = uVal_30;
                  }
                  if (2 < uVal_21 - 1) {
                    do {
                      iVal_32 = (int)uVal_17;
                      *(uint16_t *)((int64_t)ptr2_Long_5 + uVal_17 * 2 + 0x90) = uVal_39;
                      *(uint16_t *)((int64_t)ptr2_Long_5 + (uint64_t)(iVal_32 + 1) * 2 + 0x90) =
                           uVal_39;
                      *(uint16_t *)((int64_t)ptr2_Long_5 + (uint64_t)(iVal_32 + 2) * 2 + 0x90) =
                           uVal_39;
                      uVal_17 = (uint64_t)(iVal_32 + 4);
                      *(uint16_t *)((int64_t)ptr2_Long_5 + (uint64_t)(iVal_32 + 3) * 2 + 0x90) =
                           uVal_39;
                      uVal_33 = uVal_33 - 4;
                    } while (uVal_33 != 0);
                  }
                }
                else {
                  uVal_33 = uVal_28 & 0xfffffff0;
                  auArr_50 = pshuflw(ZEXT416((uint)ptr2_Long_40),ZEXT416((uint)ptr2_Long_40),0);
                  auArr_51._0_8_ = auArr_50._0_8_;
                  auArr_51._8_4_ = auArr_50._0_4_;
                  auArr_51._12_4_ = auArr_50._4_4_;
                  *(uint8_t (*)[16])((int64_t)ptr2_Long_5 + uVal_17 * 2 + 0x90) = auArr_51;
                  *(uint8_t (*)[16])((int64_t)ptr2_Long_5 + uVal_17 * 2 + 0xa0) = auArr_51;
                  if (uVal_33 != 0x10) {
                    *(uint8_t (*)[16])((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x10) * 2 + 0x90)
                         = auArr_51;
                    *(uint8_t (*)[16])((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x10) * 2 + 0xa0)
                         = auArr_51;
                    if (uVal_33 != 0x20) {
                      *(uint8_t (*)[16])
                       ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x20) * 2 + 0x90) = auArr_51;
                      *(uint8_t (*)[16])
                       ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x20) * 2 + 0xa0) = auArr_51;
                      if (uVal_33 != 0x30) {
                        *(uint8_t (*)[16])
                         ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x30) * 2 + 0x90) = auArr_51;
                        *(uint8_t (*)[16])
                         ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x30) * 2 + 0xa0) = auArr_51;
                        if (uVal_33 != 0x40) {
                          *(uint8_t (*)[16])
                           ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x40) * 2 + 0x90) = auArr_51;
                          *(uint8_t (*)[16])
                           ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x40) * 2 + 0xa0) = auArr_51;
                          if (uVal_33 != 0x50) {
                            *(uint8_t (*)[16])
                             ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x50) * 2 + 0x90) = auArr_51;
                            *(uint8_t (*)[16])
                             ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x50) * 2 + 0xa0) = auArr_51;
                            if (uVal_33 != 0x60) {
                              *(uint8_t (*)[16])
                               ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x60) * 2 + 0x90) = auArr_51
                              ;
                              *(uint8_t (*)[16])
                               ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x60) * 2 + 0xa0) = auArr_51
                              ;
                              if (uVal_33 != 0x70) {
                                *(uint8_t (*)[16])
                                 ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x70) * 2 + 0x90) =
                                     auArr_51;
                                *(uint8_t (*)[16])
                                 ((int64_t)ptr2_Long_5 + (uint64_t)(uVal_21 + 0x70) * 2 + 0xa0) =
                                     auArr_51;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  uVal_17 = (uint64_t)(uVal_21 + uVal_33);
                  if (uVal_28 != uVal_33) {
                    uVal_30 = (uint64_t)(uVal_28 & 0xf);
                    goto LAB_1800bc4d0;
                  }
                }
                *(int *)((int64_t)ptr2_Long_5 + 0x84) = (int)uVal_17;
                local_80 = ptr2_Long_18;
                goto LAB_1800bc55e;
              }
              local_a0[6] = (int64_t)"invalid bit length repeat";
              *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f51;
            }
            iVal_32 = *(int *)(ptr2_Long_5 + 1);
            ptr2_Long_42 = ptr2_Long_41;
            local_94 = uVal_15;
            local_90 = pU64_27;
            goto LAB_1800bb96e;
          }
          ptr2_Long_18 = (int64_t **)(uint64_t)(uVal_23 >> (bFlag_20 & 0x1f));
          uVal_21 = uVal_21 + 1;
          ptr2_Long_40 = (int64_t **)(uint64_t)uVal_21;
          *(uint *)((int64_t)ptr2_Long_5 + 0x84) = uVal_21;
          *(ushort *)((int64_t)ptr2_Long_5 + uVal_17 * 2 + 0x90) = uVal_46;
          uVal_17 = (uint64_t)uVal_21;
          pU64_26 = (uint8_t *)(uint64_t)(uVal_33 - uVal_44);
LAB_1800bc55e:
          ptr2_Long_42 = ptr2_Long_29;
        } while ((uint)uVal_17 < uVal_24);
      }
      else {
        ptr2_Long_29 = (int64_t **)((uint64_t)ptr2_Long_29 & 0xffffffff);
      }
      uVal_33 = (uint)ptr2_Long_29;
      ptr2_Long_42 = ptr2_Long_41;
      if (*(short *)(ptr2_Long_5 + 0x52) == 0) {
        param_1[6] = (int64_t)"invalid code -- missing end-of-block";
        *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f51;
        iVal_32 = *(int *)(ptr2_Long_5 + 1);
        local_94 = uVal_15;
        local_90 = pU64_27;
      }
      else {
        ptr2_Long_5[0x11] = (int64_t *)(ptr2_Long_5 + 0xaa);
        ptr2_Long_5[0xc] = (int64_t *)(ptr2_Long_5 + 0xaa);
        *(uint32_t *)(ptr2_Long_5 + 0xe) = 9;
        local_b0 = ptr2_Long_5 + 0x62;
        local_b8 = ptr2_Long_5 + 0xe;
        local_94 = uVal_15;
        local_90 = pU64_27;
        local_78 = local_b0;
        uVal_15 = func_0x1800ba4d0(1,ptr2_Long_5 + 0x12,local_64,ptr2_Long_5 + 0x11);
        uVal_48 = local_84;
        if (uVal_15 == 0) {
          ptr2_Long_5[0xd] = ptr2_Long_5[0x11];
          *(uint32_t *)((int64_t)ptr2_Long_5 + 0x74) = 6;
          local_b0 = local_78;
          local_b8 = (int64_t **)((int64_t)ptr2_Long_5 + 0x74);
          local_68 = func_0x1800ba4d0(2,(int64_t)(ptr2_Long_5 + 0x12) +
                                     (uint64_t)*(uint *)((int64_t)ptr2_Long_5 + 0x7c) * 2,
                                   *(uint32_t *)(ptr2_Long_5 + 0x10),ptr2_Long_5 + 0x11);
          if (local_68 != 0) {
            fnPtr_34 = "invalid distances set";
            goto LAB_1800bd19f;
          }
          local_68 = 0;
          *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f47;
          param_1 = local_a0;
          param_2 = local_70;
          if ((int)local_70 == 6) {
            iVal_22 = 6;
            pU64_27 = local_90;
            uVal_15 = local_94;
            break;
          }
LAB_1800bbbe5:
          *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f48;
          ptr2_Long_29 = (int64_t **)(uint64_t)uVal_33;
          pU64_27 = local_90;
LAB_1800bbeb2:
          uVal_15 = local_94;
          iVal_22 = (int)param_2;
          uVal_31 = (uint)ptr2_Long_29;
          uVal_24 = (uint)pU64_26;
          if ((uVal_31 < 6) || (uVal_48 < 0x102)) {
            *(uint32_t *)((int64_t)ptr2_Long_5 + 0x1be4) = 0;
            ptr2_Long_40 = (int64_t **)ptr2_Long_5[0xc];
            uVal_21 = ~(-1 << (*(byte *)(ptr2_Long_5 + 0xe) & 0x1f));
            uVal_17 = (uint64_t)((uint)ptr2_Long_18 & uVal_21);
            uVal_33 = (uint)*(byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4 + 1);
            local_80 = ptr2_Long_41;
            param_1 = local_a0;
            if (uVal_24 < uVal_33) {
              uVal_30 = (uint64_t)pU64_26 & 0xffffffff;
              uVal_45 = (uint64_t)ptr2_Long_29 & 0xffffffff;
              do {
                if ((int)uVal_45 == 0) {
                  pU64_26 = (uint8_t *)(uint64_t)(uVal_24 + uVal_31 * 8);
                  uVal_17 = (uint64_t)ptr2_Long_29 & 0xffffffff;
                  ptr2_Long_29 = (int64_t **)0x0;
                  ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_41 + uVal_17);
                  local_90 = pU64_27;
                  local_80 = ptr2_Long_41;
                  goto LAB_1800bdd38;
                }
                uVal_44 = (int)uVal_45 - 1;
                uVal_45 = (uint64_t)uVal_44;
                bFlag_20 = *(byte *)local_80;
                local_80 = (int64_t **)((int64_t)local_80 + 1);
                uVal_33 = (int)ptr2_Long_18 + ((uint)bFlag_20 << ((byte)uVal_30 & 0x1f));
                ptr2_Long_18 = (int64_t **)(uint64_t)uVal_33;
                uVal_23 = (int)uVal_30 + 8;
                uVal_30 = (uint64_t)uVal_23;
                uVal_17 = (uint64_t)(uVal_33 & uVal_21);
                uVal_33 = (uint)*(byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4 + 1);
              } while (uVal_23 < uVal_33);
              pU64_26 = (uint8_t *)(uint64_t)uVal_23;
              local_90 = pU64_27;
              ptr2_Long_29 = (int64_t **)(uint64_t)uVal_44;
            }
            local_78 = ptr2_Long_29;
            pU8_37 = (byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4);
            uVal_31 = (uint)pU64_26;
            uVal_24 = (uint)ptr2_Long_18;
            bFlag_20 = *pU8_37;
            uVal_21 = (uint)bFlag_20;
            uVal_46 = *(ushort *)(pU8_37 + 2);
            if (bFlag_20 == 0) {
              uVal_23 = 0;
              uVal_21 = 0;
            }
            else if (bFlag_20 < 0x10) {
              bFlag_3 = (byte)uVal_33;
              uVal_21 = ~(-1 << (bFlag_20 + bFlag_3 & 0x1f));
              uVal_17 = (uint64_t)(((uVal_24 & uVal_21) >> (bFlag_3 & 0x1f)) + (uint)uVal_46);
              uVal_44 = (uint)*(byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4 + 1);
              ptr2_Long_42 = ptr2_Long_40;
              uVal_23 = uVal_31;
              ptr2_Long_29 = local_80;
              ptr2_Long_41 = local_78;
              local_84 = uVal_48;
              if (uVal_31 < uVal_33 + uVal_44) {
                uVal_30 = (uint64_t)pU64_26 & 0xffffffff;
                ptr2_Long_42 = (int64_t **)((uint64_t)local_78 & 0xffffffff);
                do {
                  if ((int)ptr2_Long_42 == 0) {
                    pU64_26 = (uint8_t *)(uint64_t)(uVal_31 + (int)local_78 * 8);
                    ptr2_Long_29 = (int64_t **)0x0;
                    ptr2_Long_42 = (int64_t **)
                               ((int64_t)local_80 + ((uint64_t)local_78 & 0xffffffff));
                    local_90 = pU64_27;
                    goto LAB_1800bdd38;
                  }
                  ptr2_Long_42 = (int64_t **)(uint64_t)((int)ptr2_Long_42 - 1);
                  bFlag_20 = *(byte *)ptr2_Long_29;
                  ptr2_Long_29 = (int64_t **)((int64_t)ptr2_Long_29 + 1);
                  uVal_24 = (int)ptr2_Long_18 + ((uint)bFlag_20 << ((byte)uVal_30 & 0x1f));
                  ptr2_Long_18 = (int64_t **)(uint64_t)uVal_24;
                  uVal_23 = (int)uVal_30 + 8;
                  uVal_30 = (uint64_t)uVal_23;
                  uVal_17 = (uint64_t)(((uVal_24 & uVal_21) >> (bFlag_3 & 0x1f)) + (uint)uVal_46);
                  uVal_44 = (uint)*(byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4 + 1);
                  local_90 = pU64_27;
                  ptr2_Long_41 = ptr2_Long_42;
                } while (uVal_23 < uVal_33 + uVal_44);
              }
              local_78 = ptr2_Long_41;
              local_80 = ptr2_Long_29;
              pU8_37 = (byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4);
              uVal_46 = *(ushort *)(pU8_37 + 2);
              uVal_21 = (uint)*pU8_37;
              uVal_24 = uVal_24 >> (bFlag_3 & 0x1f);
              uVal_31 = uVal_23 - uVal_33;
              ptr2_Long_40 = ptr2_Long_42;
              uVal_23 = uVal_33;
              uVal_33 = uVal_44;
            }
            else {
              uVal_23 = 0;
            }
            ptr2_Long_18 = (int64_t **)(uint64_t)(uVal_24 >> ((byte)uVal_33 & 0x1f));
            pU64_26 = (uint8_t *)(uint64_t)(uVal_31 - uVal_33);
            *(uint *)((int64_t)ptr2_Long_5 + 0x1be4) = uVal_23 + uVal_33;
            *(uint *)(ptr2_Long_5 + 10) = (uint)uVal_46;
            ptr2_Long_42 = local_80;
            ptr2_Long_29 = local_78;
            if ((char)uVal_21 == '\0') {
              *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f4d;
              iVal_32 = *(int *)(ptr2_Long_5 + 1);
            }
            else {
              if ((uVal_21 & 0x20) == 0) {
                if ((uVal_21 & 0x40) == 0) {
                  uVal_24 = uVal_21 & 0xf;
                  *(uint *)(ptr2_Long_5 + 0xb) = uVal_21 & 0xf;
                  *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f49;
                  ptr2_Long_41 = local_80;
joined_r0x0001800bba05:
                  if (uVal_24 == 0) {
                    iVal_32 = *(int *)(ptr2_Long_5 + 10);
                  }
                  else {
                    iVal_22 = (int)param_2;
                    uVal_33 = (uint)ptr2_Long_18;
                    uVal_31 = (uint)pU64_26;
                    ptr2_Long_42 = ptr2_Long_41;
                    if (uVal_31 < uVal_24) {
                      uVal_17 = (uint64_t)pU64_26 & 0xffffffff;
                      uVal_30 = (uint64_t)ptr2_Long_29 & 0xffffffff;
                      do {
                        local_90 = pU64_26;
                        if ((int)uVal_30 == 0) goto LAB_1800bdb94;
                        uVal_21 = (int)uVal_30 - 1;
                        uVal_30 = (uint64_t)uVal_21;
                        bFlag_20 = *(byte *)ptr2_Long_42;
                        ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
                        uVal_33 = (int)ptr2_Long_18 + ((uint)bFlag_20 << ((byte)uVal_17 & 0x1f));
                        ptr2_Long_18 = (int64_t **)(uint64_t)uVal_33;
                        uVal_31 = (int)uVal_17 + 8;
                        uVal_17 = (uint64_t)uVal_31;
                      } while (uVal_31 < uVal_24);
                    }
                    else {
                      uVal_21 = (uint)ptr2_Long_29;
                    }
                    iVal_32 = (~(-1 << ((byte)uVal_24 & 0x1f)) & uVal_33) + *(int *)(ptr2_Long_5 + 10);
                    ptr2_Long_18 = (int64_t **)(uint64_t)(uVal_33 >> ((byte)uVal_24 & 0x1f));
                    *(int *)(ptr2_Long_5 + 10) = iVal_32;
                    *(int *)((int64_t)ptr2_Long_5 + 0x1be4) =
                         *(int *)((int64_t)ptr2_Long_5 + 0x1be4) + uVal_24;
                    ptr2_Long_29 = (int64_t **)(uint64_t)uVal_21;
                    pU64_26 = (uint8_t *)(uint64_t)(uVal_31 - uVal_24);
                    ptr2_Long_41 = ptr2_Long_42;
                  }
                  *(int *)(ptr2_Long_5 + 0x37d) = iVal_32;
                  *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f4a;
                  local_80 = ptr2_Long_41;
LAB_1800bd333:
                  iVal_22 = (int)param_2;
                  ptr2_Long_40 = (int64_t **)ptr2_Long_5[0xd];
                  uVal_33 = ~(-1 << (*(byte *)((int64_t)ptr2_Long_5 + 0x74) & 0x1f));
                  uVal_17 = (uint64_t)((uint)ptr2_Long_18 & uVal_33);
                  uVal_24 = (uint)*(byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4 + 1);
                  uVal_31 = (uint)pU64_26;
                  if (uVal_31 < uVal_24) {
                    ptr2_Long_41 = (int64_t **)((uint64_t)ptr2_Long_29 & 0xffffffff);
                    ptr2_Long_42 = local_80;
LAB_1800bd379:
                    if ((int)ptr2_Long_41 != 0) goto code_r0x0001800bd381;
                    pU64_26 = (uint8_t *)(uint64_t)(uVal_31 + (int)ptr2_Long_29 * 8);
                    ptr2_Long_41 = (int64_t **)
                               ((int64_t)local_80 + ((uint64_t)ptr2_Long_29 & 0xffffffff));
                    local_94 = uVal_15;
                    local_90 = pU64_27;
LAB_1800bdb5b:
                    ptr2_Long_29 = (int64_t **)0x0;
                    param_1 = local_a0;
                    ptr2_Long_42 = ptr2_Long_41;
                    pU64_27 = local_90;
                    uVal_15 = local_94;
                    break;
                  }
                  goto LAB_1800bd3d6;
                }
                fnPtr_34 = "invalid literal/length code";
                goto LAB_1800bda62;
              }
              *(uint32_t *)((int64_t)ptr2_Long_5 + 0x1be4) = 0xffffffff;
              *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f3f;
              iVal_32 = *(int *)(ptr2_Long_5 + 1);
            }
          }
          else {
            param_1[3] = (int64_t)pU64_27;
            *(uint *)(param_1 + 4) = uVal_48;
            *param_1 = (int64_t)ptr2_Long_41;
            *(uint *)(param_1 + 1) = uVal_31;
            *(uint *)(ptr2_Long_5 + 9) = (uint)ptr2_Long_18;
            *(uint *)((int64_t)ptr2_Long_5 + 0x4c) = uVal_24;
            func_0x1800bad80(local_a0,local_94);
            pU64_27 = (uint8_t *)local_a0[3];
            uVal_48 = *(uint *)(local_a0 + 4);
            ptr2_Long_42 = (int64_t **)*local_a0;
            uVal_24 = *(uint *)(local_a0 + 1);
            ptr2_Long_18 = (int64_t **)(uint64_t)*(uint *)(ptr2_Long_5 + 9);
            if (*(int *)(ptr2_Long_5 + 1) == 0x3f3f) {
              *(uint32_t *)((int64_t)ptr2_Long_5 + 0x1be4) = 0xffffffff;
            }
            iVal_32 = *(int *)(ptr2_Long_5 + 1);
            param_1 = local_a0;
            param_2 = local_70;
            pU64_26 = (uint8_t *)(uint64_t)*(uint *)((int64_t)ptr2_Long_5 + 0x4c);
            ptr2_Long_29 = (int64_t **)(uint64_t)uVal_24;
          }
        }
        else {
          fnPtr_34 = "invalid literal/lengths set";
          local_68 = uVal_15;
LAB_1800bd19f:
          local_a0[6] = (int64_t)fnPtr_34;
          *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f51;
          iVal_32 = *(int *)(ptr2_Long_5 + 1);
          param_1 = local_a0;
          param_2 = local_70;
          pU64_27 = local_90;
          uVal_15 = local_94;
        }
      }
    }
    else {
      local_a0[6] = (int64_t)"invalid code lengths set";
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f51;
      iVal_32 = *(int *)(ptr2_Long_5 + 1);
      ptr2_Long_42 = local_80;
      uVal_48 = local_84;
    }
    goto LAB_1800bb96e;
  case 0x3f46:
    uVal_17 = (uint64_t)*(uint *)((int64_t)ptr2_Long_5 + 0x84);
    local_84 = uVal_48;
    goto LAB_1800bc1b7;
  case 0x3f47:
    local_94 = uVal_15;
    local_90 = pU64_27;
    goto LAB_1800bbbe5;
  case 0x3f48:
    local_94 = uVal_15;
    goto LAB_1800bbeb2;
  case 0x3f49:
    uVal_24 = *(uint *)(ptr2_Long_5 + 0xb);
    goto joined_r0x0001800bba05;
  case 0x3f4a:
    local_80 = ptr2_Long_42;
    goto LAB_1800bd333;
  case 0x3f4b:
    uVal_24 = *(uint *)(ptr2_Long_5 + 0xb);
    goto LAB_1800bd51a;
  case 0x3f4c:
    goto switchD_1800bb98d_caseD_3f4c;
  case 0x3f4d:
    if (uVal_48 == 0) goto LAB_1800bdc5c;
    *pU64_27 = *(uint8_t *)(ptr2_Long_5 + 10);
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f48;
    iVal_32 = *(int *)(ptr2_Long_5 + 1);
    pU64_27 = pU64_27 + 1;
    uVal_48 = uVal_48 - 1;
    goto LAB_1800bb96e;
  case 0x3f4e:
    if (*(int *)(ptr2_Long_5 + 2) == 0) {
      uVal_24 = 0;
LAB_1800bd862:
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f4f;
      ptr2_Long_25 = ptr2_Long_18;
      ptr2_Long_43 = ptr2_Long_42;
      goto LAB_1800bd869;
    }
    if (uVal_31 < 0x20) {
      if (uVal_33 == 0) goto LAB_1800bdd33;
      uVal_23 = uVal_33 - 1;
      ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
      uVal_24 = uVal_24 + ((uint)*(byte *)ptr2_Long_42 << (bFlag_20 & 0x1f));
      ptr2_Long_18 = (int64_t **)(uint64_t)uVal_24;
      uVal_21 = uVal_31 + 8;
      if (uVal_31 < 0x18) {
        ptr2_Long_25 = ptr2_Long_18;
        if (uVal_23 == 0) goto LAB_1800bdd2e;
        uVal_23 = uVal_33 - 2;
        ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 2);
        uVal_24 = uVal_24 + ((uint)*(byte *)((int64_t)ptr2_Long_42 + 1) << ((byte)uVal_21 & 0x1f));
        ptr2_Long_18 = (int64_t **)(uint64_t)uVal_24;
        uVal_21 = uVal_31 + 0x10;
        if (uVal_31 < 0x10) {
          ptr2_Long_25 = ptr2_Long_18;
          if (uVal_23 == 0) goto LAB_1800bdd2e;
          uVal_23 = uVal_33 - 3;
          ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 3);
          uVal_24 = uVal_24 + ((uint)*(byte *)((int64_t)ptr2_Long_42 + 2) << ((byte)uVal_21 & 0x1f));
          ptr2_Long_18 = (int64_t **)(uint64_t)uVal_24;
          uVal_21 = uVal_31 + 0x18;
          if (uVal_31 < 8) {
            ptr2_Long_25 = ptr2_Long_18;
            if (uVal_23 == 0) goto LAB_1800bdd2e;
            uVal_23 = uVal_33 - 4;
            bFlag_20 = (byte)uVal_21;
            ptr2_Long_41 = (int64_t **)((int64_t)ptr2_Long_42 + 4);
            uVal_21 = uVal_31 | 0x20;
            ptr2_Long_18 = (int64_t **)
                       (uint64_t)
                       (((uint)*(byte *)((int64_t)ptr2_Long_42 + 3) << (bFlag_20 & 0x1f)) + uVal_24);
          }
        }
      }
      ptr2_Long_29 = (int64_t **)(uint64_t)uVal_23;
      pU64_26 = (uint8_t *)(uint64_t)uVal_21;
      param_1 = local_a0;
    }
    uVal_31 = uVal_15 - uVal_48;
    param_1[5] = param_1[5] + (uint64_t)uVal_31;
    *(int *)((int64_t)ptr2_Long_5 + 0x24) = *(int *)((int64_t)ptr2_Long_5 + 0x24) + uVal_31;
    uVal_24 = *(uint *)(ptr2_Long_5 + 2);
    ptr2_Long_40 = (int64_t **)(uint64_t)(uVal_24 & 4);
    if (((uVal_24 & 4) != 0) && (uVal_15 != uVal_48)) {
      if (*(int *)(ptr2_Long_5 + 3) == 0) {
        uVal_15 = func_0x1801027c0(*(uint32_t *)(ptr2_Long_5 + 4),(int64_t)pU64_27 - (uint64_t)uVal_31);
      }
      else {
        uVal_15 = func_0x180102d50();
      }
      *(uint *)(ptr2_Long_5 + 4) = uVal_15;
      local_a0[0xc] = (uint64_t)uVal_15;
      uVal_24 = *(uint *)(ptr2_Long_5 + 2);
      ptr2_Long_40 = (int64_t **)(uint64_t)(uVal_24 & 4);
      param_1 = local_a0;
      param_2 = local_70;
    }
    uVal_15 = uVal_48;
    ptr2_Long_42 = ptr2_Long_41;
    if ((int)ptr2_Long_40 == 0) {
LAB_1800bd85b:
      ptr2_Long_18 = (int64_t **)0x0;
      pU64_26 = (uint8_t *)0x0;
      goto LAB_1800bd862;
    }
    uVal_33 = (uint)ptr2_Long_18;
    uVal_31 = uVal_33 >> 0x18 | (uVal_33 & 0xff0000) >> 8 | (uVal_33 & 0xff00) << 8 | uVal_33 << 0x18;
    if (*(int *)(ptr2_Long_5 + 3) != 0) {
      uVal_31 = uVal_33;
    }
    if (uVal_31 == *(uint *)(ptr2_Long_5 + 4)) goto LAB_1800bd85b;
    param_1[6] = (int64_t)"incorrect data check";
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f51;
    iVal_32 = *(int *)(ptr2_Long_5 + 1);
    goto LAB_1800bb96e;
  case 0x3f4f:
    uVal_24 = *(uint *)(ptr2_Long_5 + 2);
LAB_1800bd869:
    iVal_22 = (int)param_2;
    ptr2_Long_42 = ptr2_Long_43;
    if ((uVal_24 == 0) || (*(int *)(ptr2_Long_5 + 3) == 0)) {
LAB_1800bdc68:
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f50;
      goto switchD_1800bb98d_caseD_3f50;
    }
    uVal_31 = (uint)pU64_26;
    if (0x1f < uVal_31) {
LAB_1800bd92b:
      if (((uVal_24 & 4) != 0) && ((int)ptr2_Long_25 != *(int *)((int64_t)ptr2_Long_5 + 0x24))) {
        fnPtr_34 = "incorrect length check";
        ptr2_Long_18 = ptr2_Long_25;
        goto LAB_1800bda62;
      }
      ptr2_Long_25 = (int64_t **)0x0;
      pU64_26 = (uint8_t *)0x0;
      goto LAB_1800bdc68;
    }
    iVal_32 = (int)ptr2_Long_29;
    ptr2_Long_18 = ptr2_Long_25;
    if (iVal_32 == 0) goto LAB_1800bdb35;
    uVal_33 = iVal_32 - 1;
    ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_43 + 1);
    uVal_23 = (int)ptr2_Long_25 + ((uint)*(byte *)ptr2_Long_43 << ((byte)pU64_26 & 0x1f));
    ptr2_Long_25 = (int64_t **)(uint64_t)uVal_23;
    uVal_21 = uVal_31 + 8;
    ptr2_Long_42 = ptr2_Long_40;
    if (0x17 < uVal_31) {
LAB_1800bd926:
      ptr2_Long_29 = (int64_t **)(uint64_t)uVal_33;
      pU64_26 = (uint8_t *)(uint64_t)uVal_21;
      param_1 = local_a0;
      goto LAB_1800bd92b;
    }
    ptr2_Long_41 = ptr2_Long_40;
    if (uVal_33 != 0) {
      uVal_33 = iVal_32 - 2;
      ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_43 + 2);
      uVal_23 = uVal_23 + ((uint)*(byte *)((int64_t)ptr2_Long_43 + 1) << ((byte)uVal_21 & 0x1f));
      ptr2_Long_25 = (int64_t **)(uint64_t)uVal_23;
      uVal_21 = uVal_31 + 0x10;
      ptr2_Long_42 = ptr2_Long_40;
      if (uVal_31 < 0x10) {
        ptr2_Long_41 = ptr2_Long_40;
        if (uVal_33 == 0) goto LAB_1800bdd2e;
        uVal_33 = iVal_32 - 3;
        ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_43 + 3);
        uVal_23 = uVal_23 + ((uint)*(byte *)((int64_t)ptr2_Long_43 + 2) << ((byte)uVal_21 & 0x1f));
        ptr2_Long_25 = (int64_t **)(uint64_t)uVal_23;
        uVal_21 = uVal_31 + 0x18;
        ptr2_Long_42 = ptr2_Long_40;
        if (uVal_31 < 8) {
          ptr2_Long_41 = ptr2_Long_40;
          if (uVal_33 == 0) goto LAB_1800bdd2e;
          uVal_33 = iVal_32 - 4;
          bFlag_20 = (byte)uVal_21;
          uVal_21 = uVal_31 | 0x20;
          ptr2_Long_25 = (int64_t **)
                     (uint64_t)
                     (((uint)*(byte *)((int64_t)ptr2_Long_43 + 3) << (bFlag_20 & 0x1f)) + uVal_23);
          ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_43 + 4);
        }
      }
      goto LAB_1800bd926;
    }
    goto LAB_1800bdd2e;
  case 0x3f50:
switchD_1800bb98d_caseD_3f50:
    local_68 = 1;
    ptr2_Long_18 = ptr2_Long_25;
    break;
  case 0x3f51:
    local_68 = 0xfffffffd;
    break;
  case 0x3f52:
    goto switchD_1800bb98d_caseD_3f52;
  }
LAB_1800bdd38:
  param_1[3] = (int64_t)pU64_27;
  *(uint *)(param_1 + 4) = uVal_48;
  *param_1 = (int64_t)ptr2_Long_42;
  *(int *)(param_1 + 1) = (int)ptr2_Long_29;
  *(int *)(ptr2_Long_5 + 9) = (int)ptr2_Long_18;
  *(int *)((int64_t)ptr2_Long_5 + 0x4c) = (int)pU64_26;
  uVal_48 = *(uint *)(param_1 + 4);
  if ((*(int *)((int64_t)ptr2_Long_5 + 0x34) != 0) ||
     (((uVal_15 != uVal_48 && (*(int *)(ptr2_Long_5 + 1) < 0x3f51)) &&
      (iVal_22 != 4 || *(int *)(ptr2_Long_5 + 1) < 0x3f4e)))) {
    lVal_47 = param_1[3];
    lVal_7 = param_1[7];
    lVal_19 = *(int64_t *)(lVal_7 + 0x40);
    if (lVal_19 == 0) {
      lVal_19 = (*(func_ptr_t )local_a0[8])(local_a0[10],1 << (*(byte *)(lVal_7 + 0x30) & 0x1f),1);
      *(int64_t *)(lVal_7 + 0x40) = lVal_19;
      if (lVal_19 == 0) {
        *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f52;
switchD_1800bb98d_caseD_3f52:
        uVal_17 = 0xfffffffc;
        goto LAB_1800bdf2e;
      }
    }
    uVal_48 = uVal_15 - uVal_48;
    uVal_24 = *(uint *)(lVal_7 + 0x34);
    if (uVal_24 == 0) {
      uVal_24 = 1 << (*(byte *)(lVal_7 + 0x30) & 0x1f);
      *(uint *)(lVal_7 + 0x34) = uVal_24;
      *(uint64_t *)(lVal_7 + 0x38) = 0;
    }
    if (uVal_48 < uVal_24) {
      uVal_24 = uVal_24 - *(uint *)(lVal_7 + 0x3c);
      uVal_31 = uVal_48;
      if (uVal_24 < uVal_48) {
        uVal_31 = uVal_24;
      }
      func_0x1806aa960(lVal_19 + (uint64_t)*(uint *)(lVal_7 + 0x3c),lVal_47 - (uint64_t)uVal_48);
      if (uVal_48 <= uVal_24) {
        uVal_24 = *(int *)(lVal_7 + 0x3c) + uVal_31;
        uVal_48 = 0;
        if (uVal_24 != *(uint *)(lVal_7 + 0x34)) {
          uVal_48 = uVal_24;
        }
        *(uint *)(lVal_7 + 0x3c) = uVal_48;
        iVal_22 = (int)local_70;
        param_1 = local_a0;
        if (*(uint *)(lVal_7 + 0x38) < *(uint *)(lVal_7 + 0x34)) {
          *(uint *)(lVal_7 + 0x38) = *(uint *)(lVal_7 + 0x38) + uVal_31;
        }
        goto LAB_1800bde5d;
      }
      uVal_48 = uVal_48 - uVal_31;
      func_0x1806aa960(*(uint64_t *)(lVal_7 + 0x40),lVal_47 - (uint64_t)uVal_48,(uint64_t)uVal_48);
      *(uint *)(lVal_7 + 0x3c) = uVal_48;
    }
    else {
      func_0x1806aa960(lVal_19,lVal_47 - (uint64_t)uVal_24);
      *(uint32_t *)(lVal_7 + 0x3c) = 0;
    }
    *(uint32_t *)(lVal_7 + 0x38) = *(uint32_t *)(lVal_7 + 0x34);
    iVal_22 = (int)local_70;
    param_1 = local_a0;
  }
LAB_1800bde5d:
  uVal_31 = local_5c;
  uVal_48 = *(uint *)(param_1 + 1);
  uVal_24 = *(uint *)(param_1 + 4);
  param_1[2] = param_1[2] + (uint64_t)(local_5c - uVal_48);
  uVal_33 = uVal_15 - uVal_24;
  param_1[5] = param_1[5] + (uint64_t)uVal_33;
  *(int *)((int64_t)ptr2_Long_5 + 0x24) = *(int *)((int64_t)ptr2_Long_5 + 0x24) + uVal_33;
  if (((*(byte *)(ptr2_Long_5 + 2) & 4) != 0) && (uVal_15 != uVal_24)) {
    if (*(int *)(ptr2_Long_5 + 3) == 0) {
      uVal_33 = func_0x1801027c0(*(uint32_t *)(ptr2_Long_5 + 4),param_1[3] - (uint64_t)uVal_33);
    }
    else {
      uVal_33 = func_0x180102d50();
    }
    *(uint *)(ptr2_Long_5 + 4) = uVal_33;
    local_a0[0xc] = (uint64_t)uVal_33;
    iVal_22 = (int)local_70;
    param_1 = local_a0;
  }
  iVal_32 = *(int *)(ptr2_Long_5 + 1);
  uVal_33 = 0xfffffffb;
  if (local_68 != 0) {
    uVal_33 = local_68;
  }
  *(uint *)(param_1 + 0xb) =
       (uint)(iVal_32 == 0x3f42 || iVal_32 == 0x3f47) * 0x100 + (uint)(iVal_32 == 0x3f3f) * 0x80 +
       (uint)(*(int *)((int64_t)ptr2_Long_5 + 0xc) != 0) * 0x40 + *(int *)((int64_t)ptr2_Long_5 + 0x4c);
  uVal_21 = local_68;
  if ((uVal_15 ^ uVal_24 | uVal_31 ^ uVal_48) == 0) {
    uVal_21 = uVal_33;
  }
  if (iVal_22 == 4) {
    uVal_21 = uVal_33;
  }
  uVal_17 = (uint64_t)uVal_21;
  goto LAB_1800bdf2e;
LAB_1800bdc3a:
  ptr2_Long_29 = (int64_t **)0x0;
  ptr2_Long_42 = ptr2_Long_41;
  local_94 = uVal_15;
  local_90 = pU64_27;
  goto LAB_1800bdd38;
code_r0x0001800bd381:
  ptr2_Long_41 = (int64_t **)(uint64_t)((int)ptr2_Long_41 - 1);
  bFlag_20 = *(byte *)ptr2_Long_42;
  ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
  uVal_24 = (int)ptr2_Long_18 + ((uint)bFlag_20 << ((byte)pU64_26 & 0x1f));
  ptr2_Long_18 = (int64_t **)(uint64_t)uVal_24;
  uVal_21 = (int)pU64_26 + 8;
  pU64_26 = (uint8_t *)(uint64_t)uVal_21;
  uVal_17 = (uint64_t)(uVal_24 & uVal_33);
  uVal_24 = (uint)*(byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4 + 1);
  if (uVal_24 <= uVal_21) goto code_r0x0001800bd3ab;
  goto LAB_1800bd379;
code_r0x0001800bd3ab:
  pU64_26 = (uint8_t *)(uint64_t)uVal_21;
  local_94 = uVal_15;
  local_90 = pU64_27;
  local_80 = ptr2_Long_42;
  ptr2_Long_29 = ptr2_Long_41;
LAB_1800bd3d6:
  local_78 = ptr2_Long_29;
  pU8_37 = (byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4);
  uVal_33 = (uint)pU64_26;
  uVal_31 = (uint)ptr2_Long_18;
  uVal_46 = *(ushort *)(pU8_37 + 2);
  bFlag_20 = *pU8_37;
  param_1 = local_a0;
  if (bFlag_20 < 0x10) {
    bFlag_3 = (byte)uVal_24;
    uVal_44 = ~(-1 << (bFlag_20 + bFlag_3 & 0x1f));
    uVal_17 = (uint64_t)(((uVal_31 & uVal_44) >> (bFlag_3 & 0x1f)) + (uint)uVal_46);
    uVal_23 = (uint)*(byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4 + 1);
    uVal_21 = uVal_33;
    ptr2_Long_42 = local_80;
    ptr2_Long_29 = local_78;
    if (uVal_33 < uVal_24 + uVal_23) {
      uVal_30 = (uint64_t)pU64_26 & 0xffffffff;
      ptr2_Long_29 = (int64_t **)((uint64_t)local_78 & 0xffffffff);
      do {
        local_84 = uVal_48;
        if ((int)ptr2_Long_29 == 0) {
          pU64_26 = (uint8_t *)(uint64_t)(uVal_33 + (int)local_78 * 8);
          ptr2_Long_29 = (int64_t **)0x0;
          ptr2_Long_42 = (int64_t **)((int64_t)local_80 + ((uint64_t)local_78 & 0xffffffff));
          local_94 = uVal_15;
          local_90 = pU64_27;
          goto LAB_1800bdd38;
        }
        ptr2_Long_29 = (int64_t **)(uint64_t)((int)ptr2_Long_29 - 1);
        bFlag_20 = *(byte *)ptr2_Long_42;
        ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
        uVal_31 = (int)ptr2_Long_18 + ((uint)bFlag_20 << ((byte)uVal_30 & 0x1f));
        ptr2_Long_18 = (int64_t **)(uint64_t)uVal_31;
        uVal_21 = (int)uVal_30 + 8;
        uVal_30 = (uint64_t)uVal_21;
        uVal_17 = (uint64_t)(((uVal_31 & uVal_44) >> (bFlag_3 & 0x1f)) + (uint)uVal_46);
        uVal_23 = (uint)*(byte *)((int64_t)ptr2_Long_40 + uVal_17 * 4 + 1);
        local_94 = uVal_15;
        local_90 = pU64_27;
      } while (uVal_21 < uVal_24 + uVal_23);
    }
    local_78 = ptr2_Long_29;
    local_80 = ptr2_Long_42;
    ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_40 + uVal_17 * 4);
    uVal_46 = *(ushort *)((int64_t)ptr2_Long_40 + 2);
    uVal_31 = uVal_31 >> (bFlag_3 & 0x1f);
    bFlag_20 = *(byte *)ptr2_Long_40;
    uVal_33 = uVal_21 - uVal_24;
    iVal_32 = uVal_24 + *(int *)((int64_t)ptr2_Long_5 + 0x1be4);
    uVal_24 = uVal_23;
  }
  else {
    iVal_32 = *(int *)((int64_t)ptr2_Long_5 + 0x1be4);
  }
  ptr2_Long_18 = (int64_t **)(uint64_t)(uVal_31 >> ((byte)uVal_24 & 0x1f));
  pU64_26 = (uint8_t *)(uint64_t)(uVal_33 - uVal_24);
  *(uint *)((int64_t)ptr2_Long_5 + 0x1be4) = iVal_32 + uVal_24;
  if ((bFlag_20 & 0x40) != 0) {
    local_a0[6] = (int64_t)"invalid distance code";
    *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f51;
LAB_1800bd57e:
    iVal_32 = *(int *)(ptr2_Long_5 + 1);
    param_1 = local_a0;
    ptr2_Long_42 = local_80;
    ptr2_Long_29 = local_78;
    goto LAB_1800bb96e;
  }
  *(uint *)((int64_t)ptr2_Long_5 + 0x54) = (uint)uVal_46;
  uVal_24 = bFlag_20 & 0xf;
  *(uint *)(ptr2_Long_5 + 0xb) = uVal_24;
  *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f4b;
  ptr2_Long_41 = local_80;
  ptr2_Long_29 = local_78;
LAB_1800bd51a:
  iVal_22 = (int)param_2;
  ptr2_Long_42 = ptr2_Long_41;
  if (uVal_24 != 0) {
    uVal_31 = (uint)pU64_26;
    if (uVal_31 < uVal_24) {
      uVal_17 = (uint64_t)pU64_26 & 0xffffffff;
      ptr2_Long_40 = (int64_t **)((uint64_t)ptr2_Long_29 & 0xffffffff);
      do {
        local_90 = pU64_26;
        if ((int)ptr2_Long_40 == 0) goto LAB_1800bdb94;
        ptr2_Long_40 = (int64_t **)(uint64_t)((int)ptr2_Long_40 - 1);
        bFlag_20 = *(byte *)ptr2_Long_42;
        ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_42 + 1);
        ptr2_Long_18 = (int64_t **)(uint64_t)((int)ptr2_Long_18 + ((uint)bFlag_20 << ((byte)uVal_17 & 0x1f)))
        ;
        uVal_31 = (int)uVal_17 + 8;
        uVal_17 = (uint64_t)uVal_31;
      } while (uVal_31 < uVal_24);
    }
    else {
      ptr2_Long_40 = (int64_t **)((uint64_t)ptr2_Long_29 & 0xffffffff);
    }
    *(int *)((int64_t)ptr2_Long_5 + 0x54) =
         *(int *)((int64_t)ptr2_Long_5 + 0x54) + (~(-1 << ((byte)uVal_24 & 0x1f)) & (uint)ptr2_Long_18);
    ptr2_Long_18 = (int64_t **)(uint64_t)((uint)ptr2_Long_18 >> ((byte)uVal_24 & 0x1f));
    *(int *)((int64_t)ptr2_Long_5 + 0x1be4) = *(int *)((int64_t)ptr2_Long_5 + 0x1be4) + uVal_24;
    pU64_26 = (uint8_t *)(uint64_t)(uVal_31 - uVal_24);
    param_1 = local_a0;
    ptr2_Long_29 = ptr2_Long_40;
  }
  *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f4c;
switchD_1800bb98d_caseD_3f4c:
  iVal_22 = (int)param_2;
  if (uVal_48 != 0) {
    uVal_24 = *(uint *)((int64_t)ptr2_Long_5 + 0x54);
    local_78 = ptr2_Long_29;
    if (uVal_15 - uVal_48 < uVal_24) {
      uVal_24 = uVal_24 - (uVal_15 - uVal_48);
      if ((*(uint *)(ptr2_Long_5 + 7) < uVal_24) && (*(int *)(ptr2_Long_5 + 0x37c) != 0)) {
        fnPtr_34 = "invalid distance too far back";
LAB_1800bda62:
        param_1[6] = (int64_t)fnPtr_34;
        *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f51;
        iVal_32 = *(int *)(ptr2_Long_5 + 1);
        goto LAB_1800bb96e;
      }
      uVal_31 = *(uint *)((int64_t)ptr2_Long_5 + 0x3c);
      uVal_33 = uVal_24 - uVal_31;
      if (uVal_24 < uVal_31 || uVal_33 == 0) {
        uVal_31 = uVal_31 - uVal_24;
      }
      else {
        uVal_31 = *(int *)((int64_t)ptr2_Long_5 + 0x34) - uVal_33;
        uVal_24 = uVal_33;
      }
      ptr2_Long_41 = (int64_t **)((uint64_t)uVal_31 + (int64_t)ptr2_Long_5[8]);
      uVal_31 = *(uint *)(ptr2_Long_5 + 10);
      if (uVal_31 <= uVal_24) {
        uVal_24 = uVal_31;
      }
    }
    else {
      ptr2_Long_41 = (int64_t **)(pU64_27 + -(uint64_t)uVal_24);
      uVal_31 = *(uint *)(ptr2_Long_5 + 10);
      uVal_24 = uVal_31;
    }
    if (uVal_48 <= uVal_24) {
      uVal_24 = uVal_48;
    }
    *(uint *)(ptr2_Long_5 + 10) = uVal_31 - uVal_24;
    pU64_38 = pU64_27;
    ptr2_Long_40 = ptr2_Long_41;
    uVal_31 = uVal_24;
    if ((0x1e < uVal_24 - 1) && (0x1f < (uint64_t)((int64_t)pU64_27 - (int64_t)ptr2_Long_41))) {
      uVal_30 = (uint64_t)(uVal_24 - 1) + 1;
      uVal_45 = uVal_30 & 0xffffffffffffffe0;
      pU64_38 = pU64_27 + uVal_45;
      ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_41 + uVal_45);
      uVal_17 = 0;
      do {
        pU64_1 = (uint32_t *)((int64_t)ptr2_Long_41 + uVal_17);
        uVal_16 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_2 = (uint32_t *)((int64_t)ptr2_Long_41 + uVal_17 + 0x10);
        uVal_11 = *pU64_2;
        uVal_12 = pU64_2[1];
        uVal_13 = pU64_2[2];
        uVal_14 = pU64_2[3];
        pU64_2 = (uint32_t *)(pU64_27 + uVal_17);
        *pU64_2 = *pU64_1;
        pU64_2[1] = uVal_16;
        pU64_2[2] = uVal_9;
        pU64_2[3] = uVal_10;
        pU64_1 = (uint32_t *)(pU64_27 + uVal_17 + 0x10);
        *pU64_1 = uVal_11;
        pU64_1[1] = uVal_12;
        pU64_1[2] = uVal_13;
        pU64_1[3] = uVal_14;
        uVal_17 = uVal_17 + 0x20;
      } while (uVal_45 != uVal_17);
      uVal_31 = uVal_24 - (int)uVal_45;
      local_94 = uVal_15;
      local_84 = uVal_48;
      if (uVal_30 == uVal_45) goto LAB_1800bd7ac;
    }
    uVal_33 = uVal_31;
    if ((uVal_31 & 7) != 0) {
      lVal_47 = 0;
      do {
        pU64_38[lVal_47] = *(uint8_t *)((int64_t)ptr2_Long_40 + lVal_47);
        lVal_47 = lVal_47 + 1;
      } while ((uVal_31 & 7) != (uint)lVal_47);
      pU64_38 = pU64_38 + lVal_47;
      ptr2_Long_40 = (int64_t **)((int64_t)ptr2_Long_40 + lVal_47);
      uVal_33 = uVal_31 - (uint)lVal_47;
    }
    if (6 < uVal_31 - 1) {
      lVal_47 = 0;
      do {
        pU64_38[lVal_47] = *(uint8_t *)((int64_t)ptr2_Long_40 + lVal_47);
        pU64_38[lVal_47 + 1] = *(uint8_t *)((int64_t)ptr2_Long_40 + lVal_47 + 1);
        pU64_38[lVal_47 + 2] = *(uint8_t *)((int64_t)ptr2_Long_40 + lVal_47 + 2);
        pU64_38[lVal_47 + 3] = *(uint8_t *)((int64_t)ptr2_Long_40 + lVal_47 + 3);
        pU64_38[lVal_47 + 4] = *(uint8_t *)((int64_t)ptr2_Long_40 + lVal_47 + 4);
        pU64_38[lVal_47 + 5] = *(uint8_t *)((int64_t)ptr2_Long_40 + lVal_47 + 5);
        pU64_38[lVal_47 + 6] = *(uint8_t *)((int64_t)ptr2_Long_40 + lVal_47 + 6);
        pU64_38[lVal_47 + 7] = *(uint8_t *)((int64_t)ptr2_Long_40 + lVal_47 + 7);
        lVal_47 = lVal_47 + 8;
      } while (uVal_33 != (uint)lVal_47);
      pU64_38 = pU64_38 + lVal_47;
    }
LAB_1800bd7ac:
    if (*(int *)(ptr2_Long_5 + 10) == 0) {
      *(uint32_t *)(ptr2_Long_5 + 1) = 0x3f48;
    }
    iVal_32 = *(int *)(ptr2_Long_5 + 1);
    pU64_27 = pU64_38;
    uVal_48 = uVal_48 - uVal_24;
    local_80 = ptr2_Long_42;
    goto LAB_1800bb96e;
  }
LAB_1800bdc5c:
  uVal_48 = 0;
  goto LAB_1800bdd38;
LAB_1800bdb94:
  pU64_26 = (uint8_t *)(uint64_t)(uint)((int)local_90 + (int)ptr2_Long_29 * 8);
  uVal_17 = (uint64_t)ptr2_Long_29 & 0xffffffff;
  ptr2_Long_29 = (int64_t **)0x0;
  param_1 = local_a0;
  ptr2_Long_42 = (int64_t **)((int64_t)ptr2_Long_41 + uVal_17);
  goto LAB_1800bdd38;
}

// func_0x1800bdff0
uint64_t func_0x1800bdff0(int64_t param_1)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  
  if ((((param_1 != 0) && (*(int64_t *)(param_1 + 0x40) != 0)) &&
      (fnPtr_2 = *(func_ptr_t *)(param_1 + 0x48), fnPtr_2 != (func_ptr_t )0x0)) &&
     (((pLong_1 = *(int64_t **)(param_1 + 0x38), pLong_1 != (int64_t *)0x0 && (*pLong_1 == param_1))
      && (*(int *)(pLong_1 + 1) - 0x3f34U < 0x20)))) {
    if (pLong_1[8] != 0) {
      (*fnPtr_2)(*(uint64_t *)(param_1 + 0x50),pLong_1[8]);
      pLong_1 = *(int64_t **)(param_1 + 0x38);
      fnPtr_2 = *(func_ptr_t *)(param_1 + 0x48);
    }
    (*fnPtr_2)(*(uint64_t *)(param_1 + 0x50),pLong_1);
    *(uint64_t *)(param_1 + 0x38) = 0;
    return 0;
  }
  return 0xfffffffe;
}

// func_0x1800be080
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1800be080(void)
{
  uint64_t *_Str;
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  DWORD DVar5;
  size_t sz_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  int64_t *pLong_10;
  int64_t lVal_11;
  uint8_t *pU64_12;
  int64_t *pLong_13;
  LPCSTR pCStr_14;
  uint64_t uVal_15;
  CHAR local_188 [272];
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083ec58) {
    func_0x180672ec0(&DAT_18083ec58);
    if (DAT_18083ec58 == -1) {
      func_0x1806731d0(&LAB_1800be4f0);
      _Init_thread_footer(&DAT_18083ec58);
    }
  }
  if (CONCAT44(DAT_18083aa48._4_4_,(uint32_t)DAT_18083aa48) == 0) {
    func_0x1806ab010(local_188,0,0x104);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3040) == '\0') {
      lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_8 + 0x3040) = 1;
      *(uint64_t *)(lVal_8 + 0x3030) = 0x35313209640a9c41;
      *(uint32_t *)(lVal_8 + 0x3038) = 0x641d9249;
      *(uint16_t *)(lVal_8 + 0x303c) = 0x145;
      func_0x180673140(&LAB_1800d90c0);
    }
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint64_t *)(lVal_8 + 0x3030);
    if (*(char *)(lVal_8 + 0x303d) == '\x01') {
      *_Str = *_Str ^ 0x656173452549d30d;
      *(uint *)(lVal_8 + 0x3038) = *(uint *)(lVal_8 + 0x3038) ^ 0x2549d30d;
      *(byte *)(lVal_8 + 0x303c) = *(byte *)(lVal_8 + 0x303c) ^ 0x45;
      *(uint8_t *)(lVal_8 + 0x303d) = 0;
    }
    local_78 = ZEXT816(0);
    sz_6 = strlen((char *)_Str);
    if ((int64_t)sz_6 < 0) {
      func_0x18007ba70();
LAB_1800be4ab:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_15 = 0xf;
    pCStr_14 = local_78;
    if (0xf < sz_6) {
      uVal_7 = sz_6 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_7) {
        uVal_15 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pCStr_14 = (LPCSTR)func_0x180672de0(uVal_15 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_15 + 0x28);
        pCStr_14 = (LPCSTR)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pCStr_14 + -8) = lVal_8;
      }
      local_78._0_8_ = pCStr_14;
    }
    local_68 = sz_6;
    local_60 = uVal_15;
    func_0x1806aa960(pCStr_14,_Str,sz_6);
    pCStr_14[sz_6] = '\0';
    pCStr_14 = local_78;
    if (0xf < local_60) {
      pCStr_14 = (LPCSTR)local_78._0_8_;
    }
    DVar5 = GetEnvironmentVariableA(pCStr_14,local_188,0x104);
    uVal_15 = (uint64_t)DVar5;
    if (0xf < local_60) {
      uVal_7 = local_60 + 1;
      lVal_8 = local_78._0_8_;
      if (0xfff < uVal_7) {
        lVal_8 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_8)) goto LAB_1800be4ab;
        uVal_7 = local_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_7);
    }
    if (DVar5 != 0) {
      local_78 = ZEXT816(0);
      if (DVar5 < 0x10) {
        pU64_12 = local_78;
        uVal_7 = 0xf;
      }
      else {
        uVal_9 = uVal_15 | 0xf;
        uVal_7 = 0x16;
        if (0x16 < uVal_9) {
          uVal_7 = uVal_9;
        }
        if (uVal_9 < 0xfff) {
          pU64_12 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
        }
        else {
          lVal_8 = func_0x180672de0(uVal_7 + 0x28);
          pU64_12 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_12 + -8) = lVal_8;
        }
        local_78._0_8_ = pU64_12;
      }
      local_68 = uVal_15;
      local_60 = uVal_7;
      func_0x1806aa960(pU64_12,local_188,uVal_15);
      pU64_12[uVal_15] = 0;
      uVal_15 = local_68;
      if (local_60 == local_68) {
        pLong_10 = (int64_t *)func_0x180082950(local_78,1);
      }
      else {
        local_68 = local_68 + 1;
        pLong_10 = (int64_t *)local_78;
        pLong_13 = pLong_10;
        if (0xf < local_60) {
          pLong_13 = (int64_t *)local_78._0_8_;
        }
        *(uint16_t *)((int64_t)pLong_13 + uVal_15) = 0x5c;
      }
      lVal_8 = *pLong_10;
      uVal_1 = *(uint32_t *)(pLong_10 + 1);
      uVal_2 = *(uint32_t *)((int64_t)pLong_10 + 0xc);
      uVal_3 = *(uint32_t *)(pLong_10 + 2);
      uVal_4 = *(uint32_t *)((int64_t)pLong_10 + 0x14);
      uVal_15 = pLong_10[3];
      pLong_10[2] = 0;
      pLong_10[3] = 0xf;
      *(uint8_t *)pLong_10 = 0;
      if (0xf < DAT_18083aa50) {
        uVal_7 = DAT_18083aa50 + 1;
        lVal_11 = DAT_18083aa38;
        if (0xfff < uVal_7) {
          lVal_11 = *(int64_t *)(DAT_18083aa38 + -8);
          if (0x1f < (uint64_t)((DAT_18083aa38 + -8) - lVal_11)) goto LAB_1800be4ab;
          uVal_7 = DAT_18083aa50 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_7);
      }
      DAT_18083aa38 = lVal_8;
      _DAT_18083aa40 = uVal_1;
      uRam000000018083aa44 = uVal_2;
      DAT_18083aa48._0_4_ = uVal_3;
      DAT_18083aa48._4_4_ = uVal_4;
      DAT_18083aa50 = uVal_15;
      if (0xf < local_60) {
        uVal_15 = local_60 + 1;
        lVal_8 = local_78._0_8_;
        if (0xfff < uVal_15) {
          lVal_8 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_8)) goto LAB_1800be4ab;
          uVal_15 = local_60 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_15);
      }
    }
  }
  return &DAT_18083aa38;
}

// Unwind@1800be4b0
void Unwind_1800be4b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// func_0x1800be560
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
uint64_t func_0x1800be560(uint64_t *param_1,char param_2)
{
  func_ptr_t fnPtr_1;
  bool bFlag_2;
  uint32_t uVal_3;
  int iVal_4;
  uint64_t uVal_5;
  uint64_t *******ptr7_U64_6;
  uint64_t uVal_7;
  uint64_t local_68;
  uint8_t **local_60;
  uint local_58;
  int local_54;
  uint64_t *******local_48 [3];
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_60 = (uint8_t **)param_1[2];
  local_68 = param_1;
  if (0xf < (uint64_t)param_1[3]) {
    local_68 = (uint64_t *)*param_1;
  }
  uVal_3 = func_0x180678230();
  func_0x1800a6340(local_48,uVal_3,&local_68);
  ptr7_U64_6 = local_48;
  if (7 < local_30) {
    ptr7_U64_6 = local_48[0];
  }
  iVal_4 = func_0x180677ed0(ptr7_U64_6,&local_68,3,0xffffffff);
  if (iVal_4 < 0x7b) {
    if ((0x3e < iVal_4 - 2U) ||
       (bFlag_2 = false, (0x4008000000000003U >> ((uint64_t)(iVal_4 - 2U) & 0x3f) & 1) == 0)) {
      if (iVal_4 != 0) goto LAB_1800be8bc;
      bFlag_2 = true;
    }
LAB_1800be5f5:
    if (7 < local_30) {
      uVal_5 = local_30 * 2 + 2;
      ptr7_U64_6 = local_48[0];
      if (0xfff < uVal_5) {
        ptr7_U64_6 = (uint64_t *******)local_48[0][-1];
        if (0x1f < (uint64_t)((int64_t)local_48[0] + (-8 - (int64_t)ptr7_U64_6)))
        goto LAB_1800be8ba;
        uVal_5 = local_30 * 2 + 0x29;
      }
      thunk_FUN_180695dd0(ptr7_U64_6,uVal_5);
    }
    if (!bFlag_2) {
      return 0;
    }
    if (param_2 == '\0') {
      local_60 = (uint8_t **)param_1[2];
      if (0xf < (uint64_t)param_1[3]) {
        param_1 = (uint64_t *)*param_1;
      }
      local_68 = param_1;
      uVal_3 = func_0x180678230();
      func_0x1800a6340(local_48,uVal_3,&local_68);
      ptr7_U64_6 = local_48;
      if (7 < local_30) {
        ptr7_U64_6 = local_48[0];
      }
      iVal_4 = func_0x180677ed0(ptr7_U64_6,&local_68,3,0xffffffff);
      uVal_5 = 0;
      if (iVal_4 < 0x7b) {
        if ((0x3e < iVal_4 - 2U) ||
           ((0x4008000000000003U >> ((uint64_t)(iVal_4 - 2U) & 0x3f) & 1) == 0)) {
          if (iVal_4 != 0) goto LAB_1800be8f0;
          if (((local_58 & 0x400) == 0) ||
             ((uVal_5 = 0, local_54 != -0x5ffffffd && (local_54 != -0x5ffffff4)))) {
            uVal_5 = (uint64_t)((local_58 & 0x10) == 0);
          }
        }
      }
      else if (((iVal_4 != 0x7b) && (uVal_5 = 0, iVal_4 != 0xa1)) && (iVal_4 != 0x10b))
      goto LAB_1800be8f0;
    }
    else {
      local_60 = (uint8_t **)param_1[2];
      if (0xf < (uint64_t)param_1[3]) {
        param_1 = (uint64_t *)*param_1;
      }
      local_68 = param_1;
      uVal_3 = func_0x180678230();
      func_0x1800a6340(local_48,uVal_3,&local_68);
      ptr7_U64_6 = local_48;
      if (7 < local_30) {
        ptr7_U64_6 = local_48[0];
      }
      iVal_4 = func_0x180677ed0(ptr7_U64_6,&local_68,3,0xffffffff);
      uVal_5 = 0;
      if (iVal_4 < 0x7b) {
        if ((0x3e < iVal_4 - 2U) ||
           (uVal_5 = 0, (0x4008000000000003U >> ((uint64_t)(iVal_4 - 2U) & 0x3f) & 1) == 0)) {
          if (iVal_4 != 0) goto LAB_1800be8df;
          if (((local_58 & 0x400) == 0) ||
             ((uVal_5 = 0, local_54 != -0x5ffffffd && (local_54 != -0x5ffffff4)))) {
            uVal_5 = (uint64_t)((local_58 & 0x10) >> 4);
          }
        }
      }
      else if (((iVal_4 != 0x7b) && (iVal_4 != 0xa1)) && (iVal_4 != 0x10b)) goto LAB_1800be8df;
    }
    if (7 < local_30) {
      uVal_7 = local_30 * 2 + 2;
      if (0xfff < uVal_7) {
        if (0x1f < (uint64_t)((int64_t)local_48[0] + (-8 - (int64_t)local_48[0][-1]))) {
LAB_1800be8ba:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_7 = local_30 * 2 + 0x29;
        local_48[0] = (uint64_t *******)local_48[0][-1];
      }
      thunk_FUN_180695dd0(local_48[0],uVal_7);
    }
    return uVal_5;
  }
  bFlag_2 = false;
  if (((iVal_4 == 0x7b) || (bFlag_2 = false, iVal_4 == 0xa1)) || (iVal_4 == 0x10b)) goto LAB_1800be5f5;
LAB_1800be8bc:
  local_68 = (uint64_t *)CONCAT44(local_68._4_4_,iVal_4);
  local_60 = &PTR_PTR_FUN_1806b00d8;
  func_0x18008a340("exists",&local_68,local_48);
LAB_1800be8df:
  func_0x180087670("status");
LAB_1800be8f0:
  func_0x180087670("status");
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_1)();
  return uVal_5;
}

// Unwind@1800be910
void Unwind_1800be910(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x40);
  return;
}

// Unwind@1800be940
void Unwind_1800be940(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x40);
  return;
}

// Unwind@1800be970
void Unwind_1800be970(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x40);
  return;
}

// func_0x1800be9a0
uint32_t func_0x1800be9a0(uint64_t *param_1,int64_t *param_2)
{
  uint64_t uVal_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint32_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t *pU64_10;
  uint64_t *pU64_11;
  uint64_t *pU64_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint8_t local_88 [16];
  uint64_t local_78;
  uint64_t local_70;
  uint64_t *local_68;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  pU64_11 = (uint64_t *)*param_2;
  pU64_2 = (uint64_t *)param_2[1];
  local_68 = param_1;
  if (pU64_11 == pU64_2) {
    uVal_6 = 0;
  }
  else {
    do {
      pU64_13 = local_88;
      uVal_9 = local_68[2];
      uVal_3 = pU64_11[2];
      if ((uVal_9 ^ 0x7fffffffffffffff) < uVal_3) {
        func_0x18007ba70();
LAB_1800beb6d:
        do {
          invalidInstructionException();
        } while( true );
      }
      pU64_10 = (uint64_t *)*local_68;
      uVal_4 = local_68[3];
      pU64_12 = (uint64_t *)*pU64_11;
      uVal_5 = pU64_11[3];
      local_88 = ZEXT816(0);
      uVal_1 = uVal_3 + uVal_9;
      uVal_14 = 0xf;
      if (0xf < uVal_1) {
        uVal_14 = 0x7fffffffffffffff;
        if ((int64_t)uVal_1 < 0) {
LAB_1800bea87:
          lVal_8 = func_0x180672de0(uVal_14 + 0x28);
          pU64_13 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_8;
        }
        else {
          uVal_7 = uVal_1 | 0xf;
          uVal_14 = 0x16;
          if (0x16 < uVal_7) {
            uVal_14 = uVal_7;
          }
          if (0xffe < uVal_7) goto LAB_1800bea87;
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
        }
        local_88._0_8_ = pU64_13;
      }
      if (uVal_5 < 0x10) {
        pU64_12 = pU64_11;
      }
      if (uVal_4 < 0x10) {
        pU64_10 = local_68;
      }
      local_78 = uVal_1;
      local_70 = uVal_14;
      func_0x1806aa960(pU64_13,pU64_10,uVal_9);
      func_0x1806aa960(pU64_13 + uVal_9,pU64_12,uVal_3);
      pU64_13[uVal_1] = 0;
      uVal_6 = func_0x1800be560(local_88,0);
      if (0xf < local_70) {
        uVal_9 = local_70 + 1;
        lVal_8 = local_88._0_8_;
        if (0xfff < uVal_9) {
          lVal_8 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_8)) goto LAB_1800beb6d;
          uVal_9 = local_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_9);
      }
      pU64_11 = pU64_11 + 4;
    } while ((byte)(pU64_11 == pU64_2 | (byte)uVal_6) == 0);
  }
  return uVal_6;
}

// Unwind@1800beb70
void Unwind_1800beb70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1800bebb0
uint32_t * func_0x1800bebb0(uint32_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint64_t uVal_10;
  uint64_t *pU64_11;
  
  uVal_1 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  lVal_2 = param_3[2];
  if ((uint64_t)(param_3[3] - lVal_2) < uVal_1) {
    param_3 = (uint64_t *)func_0x1800871a0(param_3,uVal_1,lVal_2,0,param_2,uVal_1);
  }
  else {
    param_3[2] = lVal_2 + uVal_1;
    pU64_11 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_11 = (uint64_t *)*param_3;
    }
    uVal_10 = uVal_1;
    if (((pU64_11 < (uint64_t *)((int64_t)param_2 + uVal_1)) &&
        (param_2 <= (uint64_t *)((int64_t)pU64_11 + lVal_2))) &&
       (uVal_10 = (int64_t)pU64_11 - (int64_t)param_2, pU64_11 < param_2 || uVal_10 == 0)) {
      uVal_10 = 0;
    }
    func_0x1806aa960((uint8_t *)((int64_t)pU64_11 + uVal_1),pU64_11,lVal_2 + 1);
    func_0x1806aa960(pU64_11,param_2,uVal_10);
    func_0x1806aa960((uint8_t *)((int64_t)pU64_11 + uVal_10),
                  (uint8_t *)((int64_t)(uint64_t *)((int64_t)param_2 + uVal_1) + uVal_10),
                  uVal_1 - uVal_10);
  }
  uVal_3 = *(uint32_t *)param_3;
  uVal_4 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_5 = *(uint32_t *)(param_3 + 1);
  uVal_6 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_7 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_8 = *(uint32_t *)(param_3 + 3);
  uVal_9 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  param_1[4] = *(uint32_t *)(param_3 + 2);
  param_1[5] = uVal_7;
  param_1[6] = uVal_8;
  param_1[7] = uVal_9;
  *param_1 = uVal_3;
  param_1[1] = uVal_4;
  param_1[2] = uVal_5;
  param_1[3] = uVal_6;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(uint8_t *)param_3 = 0;
  return param_1;
}

// func_0x1800becb0
uint64_t * func_0x1800becb0(void)
{
  uint64_t uVal_1;
  uint8_t local_30 [32];
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083ec80) {
    func_0x180672ec0(&DAT_18083ec80);
    if (DAT_18083ec80 == -1) {
      uVal_1 = func_0x1800bedc0();
      uVal_1 = func_0x1800bee60(uVal_1);
      func_0x180001060(local_30,uVal_1);
      func_0x1800be080();
      func_0x1800bebb0(&DAT_18083ec60,&DAT_18083aa38,local_30);
      func_0x180001e70(local_30);
      func_0x1806731d0(&LAB_1800bee90);
      _Init_thread_footer(&DAT_18083ec80);
      return &DAT_18083ec60;
    }
  }
  return &DAT_18083ec60;
}

// Unwind@1800bed70
void Unwind_1800bed70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1800bed90
void Unwind_1800bed90(void)
{
  func_0x180672f60(&DAT_18083ec80);
  return;
}

// func_0x1800bedc0
int64_t func_0x1800bedc0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3058) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x3058) = 1;
    *(uint8_t *)(lVal_1 + 0x3056) = 1;
    *(uint64_t *)(lVal_1 + 0x3048) = 0xc13a2e427f0e410e;
    *(uint32_t *)(lVal_1 + 0x3050) = 0x79054028;
    *(uint16_t *)(lVal_1 + 0x3054) = 0x414d;
    func_0x180673140(&LAB_1800d9180);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3048;
}

// func_0x1800bee60
void func_0x1800bee60(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xe) == '\x01') {
    *param_1 = *param_1 ^ 0xad7941110d6b2541;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ 0xd6b2541;
    *(byte *)((int64_t)param_1 + 0xc) = *(byte *)((int64_t)param_1 + 0xc) ^ 0x11;
    *(byte *)((int64_t)param_1 + 0xd) = *(byte *)((int64_t)param_1 + 0xd) ^ 0x41;
    *(uint8_t *)((int64_t)param_1 + 0xe) = 0;
  }
  return;
}

// func_0x1800bef00
uint64_t func_0x1800bef00(uint64_t *param_1)
{
  char ch_1;
  uint32_t uVal_2;
  uint uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t unaff_RBX;
  uint64_t uVal_6;
  int64_t local_50 [3];
  uint64_t local_38;
  uint64_t *local_30;
  uint8_t **local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVal_6 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  ch_1 = func_0x1800be560(param_1,1);
  if (ch_1 == '\0') {
    local_28 = (uint8_t **)param_1[2];
    if (0xf < (uint64_t)param_1[3]) {
      param_1 = (uint64_t *)*param_1;
    }
    local_30 = param_1;
    uVal_2 = func_0x180678230();
    func_0x1800a6340(local_50,uVal_2,&local_30);
    local_30 = (uint64_t *)((uint64_t)local_30 & 0xffffffff00000000);
    local_28 = &PTR_PTR_FUN_1806b00d8;
    uVal_3 = func_0x180094a60(local_50,&local_30);
    if ((int)local_30 != 0) {
      func_0x18008a340("create_directories",&local_30,local_50);
LAB_1800befdd:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_6 = (uint64_t)uVal_3;
    if (7 < local_38) {
      uVal_4 = local_38 * 2 + 2;
      lVal_5 = local_50[0];
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(local_50[0] + -8);
        if (0x1f < (uint64_t)((local_50[0] + -8) - lVal_5)) goto LAB_1800befdd;
        uVal_4 = local_38 * 2 + 0x29;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
  }
  return uVal_6 & 0xffffffff;
}

// Unwind@1800befe0
void Unwind_1800befe0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x28);
  return;
}

// func_0x1800bf010
void func_0x1800bf010(void)
{
  uint64_t uVal_1;
  
  uVal_1 = func_0x1800becb0();
  func_0x1800bef00(uVal_1);
  return;
}

// func_0x1800bf030
uint8_t (*func_0x1800bf030(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  uint uVal_1;
  char ch_2;
  uint uVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  char *fnPtr_7;
  char *fnPtr_8;
  int iStack_1a4;
  int64_t local_1a0 [2];
  uint local_190 [14];
  int64_t alStack_158 [9];
  int64_t local_110;
  uint8_t **local_f0 [12];
  uint8_t **local_90 [5];
  uint32_t local_68 [2];
  uint8_t **local_60;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  uint8_t (*local_30)[16];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  ch_2 = func_0x1800be560(param_2,0);
  if (ch_2 == '\0') {
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  else {
    func_0x1800bf330(local_1a0,1);
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    func_0x1800f1d80(local_1a0,param_2,1,0x40);
    if (local_110 == 0) {
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
    }
    else {
      local_58 = ZEXT816(0);
      local_48 = 0;
      local_40 = 0xf;
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
      local_30 = param_1;
      while( true ) {
        pLong_4 = (int64_t *)func_0x1800bf570(local_1a0,local_58);
        if ((*(byte *)((int64_t)pLong_4 + (int64_t)*(int *)(*pLong_4 + 4) + 0x10) & 6) != 0) break;
        func_0x180084770(local_30,local_58);
      }
      lVal_5 = func_0x18008b2b0(local_190);
      param_1 = local_30;
      if (lVal_5 == 0) {
        lVal_5 = (int64_t)*(int *)(local_1a0[0] + 4);
        uVal_1 = *(uint *)((int64_t)local_190 + lVal_5 + 4);
        uVal_3 = *(uint *)((int64_t)local_190 + lVal_5) & 0x15 |
                (uint)(*(int64_t *)((int64_t)alStack_158 + lVal_5) == 0) << 2 | 2;
        *(uint *)((int64_t)local_190 + lVal_5) = uVal_3;
        uVal_3 = uVal_3 & uVal_1;
        if (uVal_3 != 0) {
          fnPtr_7 = "ios_base::failbit set";
          if ((uVal_1 & 2) == 0) {
            fnPtr_7 = "ios_base::eofbit set";
          }
          fnPtr_8 = "ios_base::badbit set";
          if ((uVal_3 & 4) == 0) {
            fnPtr_8 = fnPtr_7;
          }
          local_68[0] = 1;
          local_60 = &PTR_vftable_1806b0968;
          func_0x1800968f0(local_90,local_68,fnPtr_8);
          local_90[0] = std::ios_base::failure::vftable;
          func_0x18067a120(local_90,&DAT_180768ca8);
          goto LAB_1800bf296;
        }
      }
      if (0xf < local_40) {
        uVal_6 = local_40 + 1;
        lVal_5 = local_58._0_8_;
        if (0xfff < uVal_6) {
          lVal_5 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_5)) {
LAB_1800bf296:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_6 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_6);
      }
    }
    *(uint8_t ***)((int64_t)local_1a0 + (int64_t)*(int *)(local_1a0[0] + 4)) =
         &PTR_LAB_1806b0178;
    *(int *)((int64_t)&iStack_1a4 + (int64_t)*(int *)(local_1a0[0] + 4)) =
         *(int *)(local_1a0[0] + 4) + -0xb0;
    func_0x18008b1c0(local_190);
    local_f0[0] = &PTR_LAB_1806b0288;
    func_0x180673810(local_f0);
  }
  return param_1;
}

// Unwind@1800bf2a0
void Unwind_1800bf2a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800573d0(param_2 + 0x28);
  return;
}

// Unwind@1800bf2d0
void Unwind_1800bf2d0(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x198));
  func_0x180001e70(param_2 + 0x170);
  return;
}

// Unwind@1800bf310
void Unwind_1800bf310(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800bf330
int64_t * func_0x1800bf330(int64_t *param_1,int param_2)
{
  uint8_t *pU64_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  if (param_2 == 0) {
    pU64_1 = (uint8_t *)*param_1;
  }
  else {
    pU64_1 = &DAT_1806b0180;
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
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(pU64_1 + 4)) = &PTR_LAB_1806b0178;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb0;
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4)) = &PTR_LAB_1806b0960;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  func_0x1800964f0((int64_t)*(int *)(*param_1 + 4) + (int64_t)param_1,param_1 + 2,0);
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
  lVal_2 = func_0x180672de0(0x10);
  uVal_3 = func_0x180673ba0(1);
  *(uint64_t *)(lVal_2 + 8) = uVal_3;
  param_1[0xe] = lVal_2;
  param_1[2] = (int64_t)&PTR_LAB_1806b0190;
  *(uint8_t *)((int64_t)param_1 + 0x8c) = 0;
  *(uint8_t *)((int64_t)param_1 + 0x81) = 0;
  param_1[5] = (int64_t)(uint8_t (*)[16])(param_1 + 3);
  param_1[6] = (int64_t)(param_1 + 4);
  param_1[9] = (int64_t)(param_1 + 7);
  param_1[10] = (int64_t)(param_1 + 8);
  param_1[0xc] = (int64_t)(param_1 + 0xb);
  param_1[0xd] = (int64_t)param_1 + 0x5c;
  param_1[0xb] = 0;
  *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 7) = ZEXT816(0);
  param_1[0x12] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x84) = DAT_18083eb3c;
  param_1[0xf] = 0;
  return param_1;
}

// Unwind@1800bf510
void Unwind_1800bf510(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(uint8_t ***)(lVal_1 + 0xb0) = &PTR_LAB_1806b0288;
    func_0x180673810(lVal_1 + 0xb0);
  }
  return;
}

// Unwind@1800bf550
void Unwind_1800bf550(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800bf570
void func_0x1800bf570(int64_t *param_1,uint64_t param_2)
{
  uint32_t uVal_1;
  int64_t *pLong_2;
  uint64_t *pU64_3;
  uint8_t local_38 [8];
  int64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = *(int64_t **)
              (*(int64_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x40) + 8);
  (**(func_ptr_t *)(*local_30 + 8))();
  pLong_2 = (int64_t *)func_0x180096a50(local_38);
  uVal_1 = (**(func_ptr_t *)(*pLong_2 + 0x40))(pLong_2,10);
  if (local_30 != (int64_t *)0x0) {
    pU64_3 = (uint64_t *)(**(func_ptr_t *)(*local_30 + 0x10))();
    if (pU64_3 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_3)(pU64_3,1);
    }
  }
  func_0x1800f1e90(param_1,param_2,uVal_1);
  return;
}

// Unwind@1800bf600
void Unwind_1800bf600(uint64_t param_1,int64_t param_2)
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

// func_0x1800bf640
uint8_t (*func_0x1800bf640(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  int64_t lVal_1;
  char ch_2;
  uint64_t uVal_3;
  int iStack_22c;
  int64_t local_228 [2];
  uint8_t local_218 [128];
  int64_t local_198;
  uint8_t **local_178 [11];
  int iStack_11c;
  int64_t local_118;
  uint8_t local_110 [24];
  int64_t *local_f8;
  int64_t *local_f0;
  int64_t *local_d8;
  uint64_t *local_d0;
  int *local_c0;
  uint64_t local_a8;
  uint local_a0;
  uint8_t **local_90 [12];
  uint8_t (*local_30)[16];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  ch_2 = func_0x1800be560(param_2,0);
  if (ch_2 == '\0') {
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
    *(uint64_t *)(param_1[1] + 8) = 0xf;
    return param_1;
  }
  func_0x1800bf330(local_228,1);
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  func_0x1800f1d80(local_228,param_2,0x20,0x40);
  if (local_198 == 0) {
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
    *(uint64_t *)(param_1[1] + 8) = 0xf;
    goto LAB_1800bf83f;
  }
  func_0x1800bf970(&local_118,1);
  func_0x1800bfb80(&local_118,local_218);
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  local_30 = param_1;
  if (((local_a0 & 0x22) == 2) || (uVal_3 = *local_d0, uVal_3 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      uVal_3 = *local_d8 + (int64_t)*local_c0;
      lVal_1 = *local_f8;
      goto joined_r0x0001800bf787;
    }
  }
  else {
    if (uVal_3 < local_a8) {
      uVal_3 = local_a8;
    }
    lVal_1 = *local_f0;
joined_r0x0001800bf787:
    if (lVal_1 != 0) {
      uVal_3 = uVal_3 - lVal_1;
      if (uVal_3 < 0x10) {
        *(uint64_t *)param_1[1] = uVal_3;
        func_0x1806aa960(param_1,lVal_1,uVal_3);
        *(uint8_t *)((int64_t)param_1 + uVal_3) = 0;
      }
      else {
        func_0x18007bba0(param_1,uVal_3);
      }
    }
  }
  *(uint8_t ***)(local_110 + (int64_t)*(int *)(local_118 + 4) + -8) = &PTR_LAB_1806b3890;
  *(int *)((int64_t)&iStack_11c + (int64_t)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  func_0x1800935b0(local_110);
  local_90[0] = &PTR_LAB_1806b0288;
  func_0x180673810(local_90);
  param_1 = local_30;
LAB_1800bf83f:
  *(uint8_t ***)((int64_t)local_228 + (int64_t)*(int *)(local_228[0] + 4)) = &PTR_LAB_1806b0178;
  *(int *)((int64_t)&iStack_22c + (int64_t)*(int *)(local_228[0] + 4)) =
       *(int *)(local_228[0] + 4) + -0xb0;
  func_0x18008b1c0(local_218);
  local_178[0] = &PTR_LAB_1806b0288;
  func_0x180673810(local_178);
  return param_1;
}

// Unwind@1800bf8a0
void Unwind_1800bf8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x218));
  return;
}

// Unwind@1800bf8d0
void Unwind_1800bf8d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800bf8f0
void Unwind_1800bf8f0(uint64_t param_1,int64_t param_2)
{
  func_0x1800bffd0(param_2 + 0x130);
  return;
}

// Unwind@1800bf920
void Unwind_1800bf920(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800bf940
void Unwind_1800bf940(uint64_t param_1,int64_t param_2)
{
  func_0x1800573d0(param_2 + 0x20);
  return;
}

// func_0x1800bf970
int64_t * func_0x1800bf970(int64_t *param_1,int param_2)
{
  uint8_t *pU64_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  if (param_2 == 0) {
    pU64_1 = (uint8_t *)*param_1;
  }
  else {
    pU64_1 = &DAT_1806b3898;
    *param_1 = (int64_t)&DAT_1806b3898;
    *(uint8_t (*)[16])(param_1 + 0x12) = ZEXT816(0);
    *(uint32_t *)(param_1 + 0x14) = 0;
    *(uint8_t (*)[16])(param_1 + 0x15) = ZEXT816(0);
    *(uint8_t (*)[16])(param_1 + 0x17) = ZEXT816(0);
    param_1[0x19] = 0;
    param_1[0x11] = (int64_t)&PTR_LAB_1806b0958;
    *(uint8_t (*)[16])(param_1 + 0x1a) = ZEXT816(0);
    *(uint8_t *)(param_1 + 0x1c) = 0;
  }
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(pU64_1 + 4)) = &PTR_LAB_1806b3890;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x88;
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4)) = &PTR_LAB_1806b09a0;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x10;
  func_0x1800964f0((int64_t)*(int *)(*param_1 + 4) + (int64_t)param_1,param_1 + 1,0);
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4)) = &PTR_LAB_1806b3890;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x88;
  param_1[1] = (int64_t)&PTR_LAB_1806b0210;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 4) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  param_1[0xc] = 0;
  lVal_2 = func_0x180672de0(0x10);
  uVal_3 = func_0x180673ba0(1);
  *(uint64_t *)(lVal_2 + 8) = uVal_3;
  param_1[0xd] = lVal_2;
  param_1[4] = (int64_t)(uint8_t (*)[16])(param_1 + 2);
  param_1[5] = (int64_t)(param_1 + 3);
  param_1[8] = (int64_t)(param_1 + 6);
  param_1[9] = (int64_t)(param_1 + 7);
  param_1[0xb] = (int64_t)(param_1 + 10);
  param_1[0xc] = (int64_t)param_1 + 0x54;
  param_1[10] = 0;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 6) = ZEXT816(0);
  param_1[1] = (int64_t)&PTR_LAB_1806b07a0;
  param_1[0xe] = 0;
  *(uint32_t *)(param_1 + 0xf) = 4;
  return param_1;
}

// Unwind@1800bfb20
void Unwind_1800bfb20(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(uint8_t ***)(lVal_1 + 0x88) = &PTR_LAB_1806b0288;
    func_0x180673810(lVal_1 + 0x88);
  }
  return;
}

// Unwind@1800bfb60
void Unwind_1800bfb60(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800bfb80
int64_t * func_0x1800bfb80(int64_t *param_1,int64_t *param_2)
{
  uint8_t *pU64_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  int iVal_5;
  byte *pU8_6;
  int64_t *pLong_7;
  uint uVal_8;
  int64_t lVal_9;
  char ch_10;
  int64_t lVal_11;
  char *fnPtr_12;
  char *fnPtr_13;
  uint8_t **local_88 [5];
  uint32_t local_60 [2];
  uint8_t **local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint8_t local_40;
  int64_t *local_38;
  uint32_t local_2c;
  uint local_28;
  byte local_22;
  char local_21;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVal_9 = *param_1;
  lVal_11 = (int64_t)*(int *)(lVal_9 + 4);
  pLong_7 = *(int64_t **)((int64_t)param_1 + lVal_11 + 0x48);
  local_48 = param_1;
  if (pLong_7 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_7 + 8))();
    lVal_9 = *param_1;
    lVal_11 = (int64_t)*(int *)(lVal_9 + 4);
  }
  ch_10 = local_21;
  if (*(int *)((int64_t)param_1 + lVal_11 + 0x10) == 0) {
    pLong_7 = *(int64_t **)((int64_t)param_1 + lVal_11 + 0x50);
    if ((pLong_7 == (int64_t *)0x0) || (pLong_7 == param_1)) {
      local_40 = true;
    }
    else {
      func_0x180097080();
      lVal_9 = *param_1;
      local_40 = *(int *)((int64_t)param_1 + (int64_t)*(int *)(lVal_9 + 4) + 0x10) == 0;
      ch_10 = local_21;
    }
    if ((param_2 != (int64_t *)0x0) && (local_21 = param_2 != (int64_t *)0x0, (bool)local_40)) {
      local_28 = 0xffffffff;
      local_2c = 0;
      local_50 = param_2;
      local_38 = param_1;
LAB_1800bfcea:
      do {
        local_22 = (byte)local_2c;
        pU8_6 = *(byte **)local_50[7];
        if (local_28 == 0xffffffff) {
          if ((pU8_6 != (byte *)0x0) && (0 < *(int *)local_50[10])) goto LAB_1800bfd89;
          local_28 = (**(func_ptr_t *)(*local_50 + 0x30))();
LAB_1800bfd97:
          if (local_28 == 0xffffffff) {
            uVal_4 = 0;
            goto LAB_1800bfdf4;
          }
        }
        else if (pU8_6 == (byte *)0x0) {
LAB_1800bfd60:
          iVal_5 = (**(func_ptr_t *)(*local_50 + 0x38))();
          if (iVal_5 == -1) {
            *(uint64_t *)((int64_t)local_38 + (int64_t)*(int *)(*local_38 + 4) + 0x28) = 0;
            uVal_8 = 2;
            param_1 = local_38;
            uVal_4 = 0;
            ch_10 = local_21;
            if ((local_22 & 1) != 0) goto LAB_1800bfe40;
            goto LAB_1800bfbe9;
          }
LAB_1800bfd74:
          pU8_6 = *(byte **)local_50[7];
          if ((pU8_6 == (byte *)0x0) || (*(int *)local_50[10] < 1)) {
            local_28 = (**(func_ptr_t *)(*local_50 + 0x30))();
            goto LAB_1800bfd97;
          }
LAB_1800bfd89:
          local_28 = (uint)*pU8_6;
        }
        else {
          pInt_2 = (int *)local_50[10];
          iVal_5 = *pInt_2;
          if (iVal_5 < 2) {
            if (iVal_5 != 1) goto LAB_1800bfd60;
            *pInt_2 = 0;
            *(int64_t *)local_50[7] = *(int64_t *)local_50[7] + 1;
            goto LAB_1800bfd74;
          }
          *pInt_2 = iVal_5 + -1;
          lVal_9 = *(int64_t *)local_50[7];
          *(int64_t *)local_50[7] = lVal_9 + 1;
          local_28 = (uint)*(byte *)(lVal_9 + 1);
        }
        pLong_7 = *(int64_t **)((int64_t)local_38 + (int64_t)*(int *)(*local_38 + 4) + 0x48);
        if (*(int64_t *)pLong_7[8] != 0) {
          iVal_5 = *(int *)pLong_7[0xb];
          if (0 < iVal_5) {
            *(int *)pLong_7[0xb] = iVal_5 + -1;
            pLong_7 = (int64_t *)pLong_7[8];
            pU64_1 = (uint8_t *)*pLong_7;
            *pLong_7 = (int64_t)(pU64_1 + 1);
            *pU64_1 = (char)local_28;
            local_2c = (uint32_t)CONCAT71((int7)((uint64_t)pLong_7 >> 8),1);
            goto LAB_1800bfcea;
          }
        }
        iVal_5 = (**(func_ptr_t *)(*pLong_7 + 0x18))(pLong_7,local_28 & 0xff);
        local_2c = (uint32_t)CONCAT71((int7)((uint64_t)pLong_7 >> 8),1);
      } while (iVal_5 != -1);
      uVal_4 = 4;
LAB_1800bfdf4:
      *(uint64_t *)((int64_t)local_38 + (int64_t)*(int *)(*local_38 + 4) + 0x28) = 0;
      if ((local_22 & 1) == 0) {
        uVal_4 = uVal_4 | 2;
      }
LAB_1800bfe40:
      uVal_8 = uVal_4;
      param_1 = local_38;
      ch_10 = local_21;
      goto LAB_1800bfbe9;
    }
  }
  else {
    local_40 = false;
  }
  local_21 = ch_10;
  *(uint64_t *)((int64_t)param_1 + (int64_t)*(int *)(lVal_9 + 4) + 0x28) = 0;
  uVal_8 = 2;
  ch_10 = param_2 != (int64_t *)0x0;
LAB_1800bfbe9:
  uVal_4 = 4;
  if (ch_10 != '\0') {
    uVal_4 = uVal_8;
  }
  lVal_9 = (int64_t)*(int *)(*param_1 + 4);
  uVal_4 = uVal_4 | *(uint *)((int64_t)param_1 + lVal_9 + 0x10) & 0x17 |
          (uint)(*(int64_t *)((int64_t)param_1 + lVal_9 + 0x48) == 0) << 2;
  *(uint *)((int64_t)param_1 + lVal_9 + 0x10) = uVal_4;
  uVal_4 = uVal_4 & *(uint *)((int64_t)param_1 + lVal_9 + 0x14);
  if (uVal_4 == 0) {
    iVal_5 = thunk_FUN_18067b540();
    pLong_7 = local_48;
    if (iVal_5 == 0) {
      func_0x1800972b0(local_48);
    }
    pLong_7 = *(int64_t **)((int64_t)pLong_7 + (int64_t)*(int *)(*pLong_7 + 4) + 0x48);
    if (pLong_7 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_7 + 0x10))();
    }
    return param_1;
  }
  fnPtr_12 = "ios_base::failbit set";
  if ((uVal_4 & 2) == 0) {
    fnPtr_12 = "ios_base::eofbit set";
  }
  fnPtr_13 = "ios_base::badbit set";
  if ((uVal_4 & 4) == 0) {
    fnPtr_13 = fnPtr_12;
  }
  local_60[0] = 1;
  local_58 = &PTR_vftable_1806b0968;
  func_0x1800968f0(local_88,local_60,fnPtr_13);
  local_88[0] = std::ios_base::failure::vftable;
  func_0x18067a120(local_88,&DAT_180768ca8);
  fnPtr_3 = (func_ptr_t )swi(3);
  pLong_7 = (int64_t *)(*fnPtr_3)();
  return pLong_7;
}

// Catch_All@1800bfeb0
uint64_t Catch_All_1800bfeb0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  
  uVal_1 = func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x70) + 4) +
                        (int64_t)*(int64_t **)(param_2 + 0x70),4,1);
  *(int *)(param_2 + 0x7c) = (int)CONCAT71((int7)((uint64_t)uVal_1 >> 8),1);
  return 0x1800bfcea;
}

// Catch_All@1800bff00
uint64_t Catch_All_1800bff00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x70);
  func_0x1800966b0((int64_t)pLong_1 + (int64_t)*(int *)(*pLong_1 + 4),2,
                *(int *)((int64_t)pLong_1 + (int64_t)*(int *)(*pLong_1 + 4) + 0x14) == 2);
  return 0x1800bfd9a;
}

// Unwind@1800bff50
void Unwind_1800bff50(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(param_2 + 0x60);
  return;
}

// Unwind@1800bff80
void Unwind_1800bff80(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800bffa0
void Unwind_1800bffa0(uint64_t param_1,int64_t param_2)
{
  func_0x180097010(param_2 + 0x60);
  return;
}

// func_0x1800bffd0
void func_0x1800bffd0(int64_t *param_1)
{
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4)) = &PTR_LAB_1806b3890;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0x88;
  func_0x1800935b0(param_1 + 1);
  param_1[0x11] = (int64_t)&PTR_LAB_1806b0288;
  func_0x180673810(param_1 + 0x11);
  return;
}

// Unwind@1800c0040
void Unwind_1800c0040(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800c0060
uint8_t (*func_0x1800c0060(uint8_t (*param_1)[16],uint64_t param_2))[16]
{
  uint32_t uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  char ch_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t ******ptr6_U64_8;
  uint64_t ******ptr6_U64_9;
  uint64_t ******ptr6_U64_10;
  uint64_t local_58;
  uint64_t ******local_50 [2];
  uint64_t local_40;
  uint64_t local_38;
  uint8_t (*local_30)[16];
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  ch_4 = func_0x1800be560(param_2,0);
  if (ch_4 == '\0') {
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
    *(uint64_t *)(param_1[1] + 8) = 0xf;
    return param_1;
  }
  func_0x1800bf640(local_50,param_2);
  local_30 = param_1;
  ptr6_U64_8 = local_50;
  if (local_40 < 2) {
    if (0xf < local_38) {
      ptr6_U64_8 = local_50[0];
    }
LAB_1800c0152:
    *(uint64_t *)param_1[1] = local_40;
    *(uint64_t *)(param_1[1] + 8) = 0xf;
    uVal_1 = *(uint32_t *)((int64_t)ptr6_U64_8 + 4);
    uVal_2 = *(uint32_t *)(ptr6_U64_8 + 1);
    uVal_3 = *(uint32_t *)((int64_t)ptr6_U64_8 + 0xc);
    *(uint32_t *)*param_1 = *(uint32_t *)ptr6_U64_8;
    *(uint32_t *)(*param_1 + 4) = uVal_1;
    *(uint32_t *)(*param_1 + 8) = uVal_2;
    *(uint32_t *)(*param_1 + 0xc) = uVal_3;
  }
  else {
    ptr6_U64_10 = local_50;
    if (0xf < local_38) {
      ptr6_U64_10 = local_50[0];
    }
    if (*(char *)ptr6_U64_10 == '\x1f') {
      ptr6_U64_9 = local_50;
      if (0xf < local_38) {
        ptr6_U64_9 = local_50[0];
      }
      if (*(char *)((int64_t)ptr6_U64_9 + 1) != -0x75) goto LAB_1800c0131;
      local_58 = 1000000000;
      *param_1 = ZEXT816(0);
      *(uint64_t *)param_1[1] = 0;
      *(uint64_t *)(param_1[1] + 8) = 0xf;
      func_0x1800d9270(&local_58,param_1,ptr6_U64_10,local_40);
    }
    else {
LAB_1800c0131:
      param_1[1] = ZEXT816(0);
      *param_1 = ZEXT816(0);
      if (0xf < local_38) {
        ptr6_U64_8 = local_50[0];
      }
      if ((int64_t)local_40 < 0) {
        func_0x18007ba70();
        goto LAB_1800c0218;
      }
      if (local_40 < 0x10) goto LAB_1800c0152;
      uVal_5 = local_40 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_5) {
        uVal_7 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        uVal_5 = func_0x180672de0(uVal_7 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_7 + 0x28);
        uVal_5 = lVal_6 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_5 - 8) = lVal_6;
      }
      *(uint64_t *)*local_30 = uVal_5;
      *(uint64_t *)local_30[1] = local_40;
      *(uint64_t *)(local_30[1] + 8) = uVal_7;
      func_0x1806aa960(uVal_5,ptr6_U64_8,local_40 + 1);
    }
  }
  if (0xf < local_38) {
    uVal_7 = local_38 + 1;
    ptr6_U64_8 = local_50[0];
    if (0xfff < uVal_7) {
      ptr6_U64_8 = (uint64_t ******)local_50[0][-1];
      if ((char *)0x1f < (char *)((int64_t)local_50[0] + (-8 - (int64_t)ptr6_U64_8))) {
LAB_1800c0218:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_7 = local_38 + 0x28;
    }
    thunk_FUN_180695dd0(ptr6_U64_8,uVal_7);
  }
  return local_30;
}

// Unwind@1800c0220
void Unwind_1800c0220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  return;
}

// Catch@1800c0250
uint64_t Catch_1800c0250(uint64_t param_1,int64_t param_2)
{
  func_0x180001060(*(uint64_t *)(param_2 + 0x48),&DAT_180761155);
  return 0x1800c01c7;
}

// Unwind@1800c0290
void Unwind_1800c0290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x1800c02c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
float * func_0x1800c02c0(float *param_1,float *param_2)
{
  float fVal_1;
  float fVal_2;
  uint uVal_3;
  float fVal_4;
  float fVal_5;
  
  fVal_4 = *param_1 * DAT_1806aeae0;
  fVal_5 = param_1[1] * _DAT_1806b2670;
  fVal_1 = (float)func_0x18068a470(fVal_5);
  fVal_5 = (float)func_0x18068dd00(fVal_5);
  fVal_2 = (float)func_0x18068a470(fVal_4);
  uVal_3 = func_0x18068dd00(fVal_4);
  fVal_4 = (float)(uVal_3 ^ _DAT_1806af1a0);
  *param_2 = fVal_5 * fVal_2;
  param_2[1] = fVal_4;
  param_2[2] = fVal_1 * fVal_2;
  return param_2;
}

// func_0x1800c0370
uint8_t (*func_0x1800c0370(uint8_t (*param_1)[16],float *param_2,byte param_3,float *param_4,char param_5))[16]
{
  float *pFloat_1;
  float fVal_2;
  float fVal_3;
  float fVal_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  float fVal_8;
  float fVal_9;
  float fVal_10;
  float fVal_11;
  float fVal_12;
  float fVal_13;
  
  param_1[2] = ZEXT816(0);
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  pFloat_1 = (float *)func_0x18011a7e0(*(uint64_t *)(DAT_180840a58 + 0x1b8));
  fVal_12 = DAT_1806b2674;
  if (param_5 == '\0') {
    fVal_12 = 0.0;
  }
  fVal_5 = 0.0;
  fVal_4 = 0.0;
  fVal_2 = 0.0;
  fVal_7 = 0.0;
  fVal_8 = 0.0;
  fVal_6 = 0.0;
  fVal_9 = 0.0;
  fVal_3 = 0.0;
  fVal_10 = 0.0;
  fVal_11 = 0.0;
  fVal_13 = 0.0;
  if (5 < param_3) goto LAB_1800c05be;
  fVal_3 = param_2[2] - pFloat_1[2];
  fVal_6 = param_2[1] - pFloat_1[1];
  fVal_4 = *param_2 - *pFloat_1;
  switch(param_3) {
  case 0:
    fVal_9 = fVal_6 - fVal_12;
    fVal_8 = param_4[2] + fVal_3;
    fVal_5 = fVal_9 + 0.0;
    fVal_11 = fVal_4 + 0.0;
    fVal_7 = *param_4 + fVal_4;
    fVal_2 = fVal_3;
    fVal_6 = fVal_5;
    fVal_10 = fVal_7;
    goto LAB_1800c04b8;
  case 1:
    fVal_2 = fVal_3 + 0.0;
    fVal_5 = fVal_6 + fVal_12 + param_4[1];
    fVal_4 = fVal_4 + 0.0;
    fVal_7 = *param_4 + fVal_4;
    fVal_8 = param_4[2] + fVal_2;
    fVal_6 = fVal_5;
    fVal_9 = fVal_5;
    fVal_3 = param_4[2] + fVal_2;
    fVal_10 = fVal_4;
    fVal_11 = *param_4 + fVal_4;
    fVal_13 = fVal_2;
    break;
  case 2:
    fVal_2 = fVal_3 - fVal_12;
    fVal_6 = fVal_6 + param_4[1];
    fVal_4 = fVal_4 + *param_4;
    fVal_7 = fVal_4 - *param_4;
    fVal_5 = fVal_6 - param_4[1];
    fVal_8 = fVal_2;
    fVal_9 = fVal_6;
    fVal_3 = fVal_2;
    fVal_10 = fVal_4;
    fVal_11 = fVal_7;
    fVal_13 = fVal_2;
    break;
  case 3:
    fVal_2 = fVal_3 + fVal_12 + param_4[2];
    fVal_9 = fVal_6 + param_4[1];
    fVal_4 = fVal_4 + 0.0;
    fVal_5 = fVal_9 - param_4[1];
    fVal_7 = *param_4 + fVal_4;
    fVal_8 = fVal_2;
    fVal_6 = fVal_9 + 0.0;
    fVal_3 = fVal_2;
    fVal_10 = fVal_4;
    fVal_11 = *param_4 + fVal_4;
    fVal_13 = fVal_2;
    break;
  case 4:
    fVal_9 = fVal_6 + param_4[1];
    fVal_4 = fVal_4 - fVal_12;
    fVal_8 = param_4[2] + fVal_3 + 0.0;
    fVal_7 = fVal_4 + 0.0;
    fVal_5 = fVal_9 - param_4[1];
    fVal_2 = fVal_3 + 0.0;
    fVal_6 = fVal_9 + 0.0;
    fVal_10 = fVal_4;
    fVal_11 = fVal_7;
LAB_1800c04b8:
    fVal_3 = fVal_3 + 0.0;
    fVal_13 = fVal_8;
    break;
  case 5:
    fVal_2 = fVal_3 + param_4[2];
    fVal_6 = fVal_6 + param_4[1];
    fVal_4 = fVal_4 + fVal_12 + *param_4;
    fVal_8 = fVal_2 - param_4[2];
    fVal_5 = fVal_6 - param_4[1];
    fVal_7 = fVal_4;
    fVal_9 = fVal_6;
    fVal_3 = fVal_2;
    fVal_10 = fVal_4;
    fVal_11 = fVal_4;
    fVal_13 = fVal_8;
  }
LAB_1800c05be:
  *(float *)*param_1 = fVal_4;
  *(float *)(*param_1 + 4) = fVal_9;
  *(float *)(*param_1 + 8) = fVal_2;
  *(float *)(*param_1 + 0xc) = fVal_11;
  *(float *)param_1[1] = fVal_6;
  *(float *)(param_1[1] + 4) = fVal_13;
  *(float *)(param_1[1] + 8) = fVal_10;
  *(float *)(param_1[1] + 0xc) = fVal_5;
  *(float *)param_1[2] = fVal_3;
  *(float *)(param_1[2] + 4) = fVal_7;
  *(float *)(param_1[2] + 8) = fVal_5;
  *(float *)(param_1[2] + 0xc) = fVal_8;
  return param_1;
}

// func_0x1800c07a0
uint64_t func_0x1800c07a0(uint64_t param_1,byte param_2,uint8_t (*param_3)[16])
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint8_t local_88 [32];
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083ecc8) && (func_0x180672ec0(&DAT_18083ecc8), DAT_18083ecc8 == -1)) {
    uVal_5 = func_0x1800c09b0();
    func_0x1800f22e0(uVal_5);
    func_0x180001060(local_88,uVal_5);
    func_0x1800bebb0(&DAT_18083eca8,&DAT_18083ec88,local_88);
    func_0x180001e70(local_88);
    func_0x1806731d0(&LAB_1800c0a80);
    _Init_thread_footer(&DAT_18083ecc8);
  }
  local_48 = ZEXT816(0);
  local_58 = ZEXT816(0);
  uVal_1 = *(uint64_t *)param_3[1];
  if (0xf < *(uint64_t *)(param_3[1] + 8)) {
    param_3 = *(uint8_t (**)[16])*param_3;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      local_48._8_8_ = 0xf;
      local_48._0_8_ = uVal_1;
      local_58 = *param_3;
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
      local_58._0_8_ = uVal_3;
      local_48._8_8_ = uVal_6;
      local_48._0_8_ = uVal_1;
      func_0x1806aa960(uVal_3,param_3,uVal_1 + 1);
    }
    if (param_2 < 0x10) {
      lVal_4 = (uint64_t)param_2 * 0x10;
      uVal_7 = *(uint32_t *)(&PTR_DAT_1806b38c0 + (uint64_t)param_2 * 2);
      uVal_8 = *(uint32_t *)((int64_t)&PTR_DAT_1806b38c0 + lVal_4 + 4);
      uVal_9 = *(uint32_t *)(&UNK_1806b38c8 + lVal_4);
      uVal_10 = *(uint32_t *)(&UNK_1806b38cc + lVal_4);
    }
    else {
      uVal_7 = 0;
      uVal_8 = 0;
      uVal_9 = 0;
      uVal_10 = 0;
    }
    local_68._4_4_ = uVal_8;
    local_68._0_4_ = uVal_7;
    local_68._8_4_ = uVal_9;
    local_68._12_4_ = uVal_10;
    func_0x1800c0af0(param_1,&DAT_18083eca8,local_68,local_58);
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_2)();
  return uVal_5;
}

// Unwind@1800c0950
void Unwind_1800c0950(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1800c0980
void Unwind_1800c0980(void)
{
  func_0x180672f60(&DAT_18083ecc8);
  return;
}

// func_0x1800c09b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1800c09b0(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint16_t uStack_30;
  uint16_t local_2e;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint32_t uStack_26;
  uint32_t uStack_22;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = _UNK_1806b3a20;
  uStack_26 = _UNK_1806b3a22;
  uStack_22 = _UNK_1806b3a26;
  local_38 = _DAT_1806b3a10;
  uStack_34 = _UNK_1806b3a14;
  uStack_30 = _UNK_1806b3a18;
  local_2e = _DAT_1806b3a1a;
  uStack_2c = _UNK_1806b3a1c;
  uStack_2a = _UNK_1806b3a1e;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3094) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x3094) = 1;
    func_0x1800d9840(lVal_1 + 0x3079,&local_38);
    func_0x180673140(&LAB_1800d9900);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3079;
}

// Unwind@1800c0a50
void Unwind_1800c0a50(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3094) = 0;
  return;
}

// func_0x1800c0af0
uint64_t func_0x1800c0af0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,int64_t **param_4)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t *pLong_7;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  int64_t **local_78;
  int64_t *local_70;
  int64_t local_68 [3];
  uint64_t local_50;
  uint64_t local_48;
  uint32_t *local_40;
  uint64_t *local_38;
  uint64_t local_30;
  int64_t **local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  local_70 = param_4[2];
  local_78 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_78 = (int64_t **)*param_4;
  }
  local_48 = 0xdd;
  local_40 = &local_88;
  local_38 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_38 = (uint64_t *)*param_2;
  }
  local_30 = param_2[2];
  local_28 = param_4;
  func_0x18063ff10(local_68,&local_38,&local_48);
  func_0x18003b540(param_1,local_68);
  ptr2_Long_3 = local_28;
  if (0xf < local_50) {
    uVal_4 = local_50 + 1;
    lVal_5 = local_68[0];
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(local_68[0] + -8);
      if (0x1f < (uint64_t)((local_68[0] + -8) - lVal_5)) goto LAB_1800c0c01;
      uVal_4 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_4);
  }
  pLong_1 = ptr2_Long_3[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *ptr2_Long_3;
    pLong_7 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_6 = pLong_2;
    if ((int64_t *)0xfff < pLong_7) {
      pLong_6 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) {
LAB_1800c0c01:
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_7 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_6,pLong_7);
  }
  return param_1;
}

// Unwind@1800c0c10
void Unwind_1800c0c10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800c0c40
void Unwind_1800c0c40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x80));
  return;
}

// func_0x1800c0c70
uint64_t func_0x1800c0c70(uint64_t param_1,byte param_2,uint8_t (*param_3)[16])
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint8_t local_88 [32];
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083ecf0) && (func_0x180672ec0(&DAT_18083ecf0), DAT_18083ecf0 == -1)) {
    uVal_5 = func_0x1800c0e70();
    uVal_5 = func_0x1800c0ef0(uVal_5);
    func_0x180001060(local_88,uVal_5);
    func_0x1800bebb0(&DAT_18083ecd0,&DAT_18083ec88,local_88);
    func_0x180001e70(local_88);
    func_0x1806731d0(&LAB_1800c0f40);
    _Init_thread_footer(&DAT_18083ecf0);
  }
  local_48 = ZEXT816(0);
  local_58 = ZEXT816(0);
  uVal_1 = *(uint64_t *)param_3[1];
  if (0xf < *(uint64_t *)(param_3[1] + 8)) {
    param_3 = *(uint8_t (**)[16])*param_3;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      local_48._8_8_ = 0xf;
      local_48._0_8_ = uVal_1;
      local_58 = *param_3;
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
      local_58._0_8_ = uVal_3;
      local_48._8_8_ = uVal_6;
      local_48._0_8_ = uVal_1;
      func_0x1806aa960(uVal_3,param_3,uVal_1 + 1);
    }
    if (param_2 < 0x10) {
      lVal_4 = (uint64_t)param_2 * 0x10;
      uVal_7 = *(uint32_t *)(&PTR_DAT_1806b38c0 + (uint64_t)param_2 * 2);
      uVal_8 = *(uint32_t *)((int64_t)&PTR_DAT_1806b38c0 + lVal_4 + 4);
      uVal_9 = *(uint32_t *)(&UNK_1806b38c8 + lVal_4);
      uVal_10 = *(uint32_t *)(&UNK_1806b38cc + lVal_4);
    }
    else {
      uVal_7 = 0;
      uVal_8 = 0;
      uVal_9 = 0;
      uVal_10 = 0;
    }
    local_68._4_4_ = uVal_8;
    local_68._0_4_ = uVal_7;
    local_68._8_4_ = uVal_9;
    local_68._12_4_ = uVal_10;
    func_0x1800c0af0(param_1,&DAT_18083ecd0,local_68,local_58);
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_2)();
  return uVal_5;
}

// Unwind@1800c0e10
void Unwind_1800c0e10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1800c0e40
void Unwind_1800c0e40(void)
{
  func_0x180672f60(&DAT_18083ecf0);
  return;
}

// func_0x1800c0e70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1800c0e70(void)
{
  int64_t lVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x30b0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x30b0) = 1;
    uVal_4 = _UNK_1806b269c;
    uVal_3 = _UNK_1806b2698;
    uVal_2 = _UNK_1806b2694;
    *(uint32_t *)(lVal_1 + 0x30a0) = _DAT_1806b2690;
    *(uint32_t *)(lVal_1 + 0x30a4) = uVal_2;
    *(uint32_t *)(lVal_1 + 0x30a8) = uVal_3;
    *(uint32_t *)(lVal_1 + 0x30ac) = uVal_4;
    func_0x180673140(&LAB_1800d9930);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x30a0;
}

// func_0x1800c0ef0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800c0ef0(uint8_t (*param_1)[16])
{
  uint32_t uVal_1;
  uint8_t auArr_2 [16];
  
  if ((*param_1)[0xf] == '\x01') {
    uVal_1 = *(uint32_t *)(*param_1 + 8);
    auArr_2 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((uint)
                                                  uVal_1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_1 >> 0x10),uVal_1)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (*param_1 + 0xd) >> 8)),
                                              (char)((uint)uVal_1 >> 8)),
                                     CONCAT11((char)*(uint16_t *)(*param_1 + 0xd),(char)uVal_1))),
                    _DAT_1806ae110);
    auArr_2._8_8_ = auArr_2._8_8_ & 0xffff00ffffffff | (uint64_t)(byte)(*param_1)[0xc] << 0x20;
    auArr_2 = pblendw(auArr_2,*param_1,0xf);
    *param_1 = auArr_2 ^ _DAT_1806b26a0;
  }
  return;
}

// Unwind@1800c12a0
void Unwind_1800c12a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x20);
  return;
}

// func_0x1800c1380
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800c1380(void)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t *pU64_3;
  char *_Str;
  uint64_t *pU64_4;
  uint8_t auArr_5 [16];
  uint64_t uVal_6;
  int64_t *pLong_7;
  int64_t lVal_8;
  size_t sz_9;
  uint64_t *pU64_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  uint64_t *pU64_14;
  uint64_t uVal_15;
  uint64_t *pU64_16;
  uint8_t (*pArr16_17)[16];
  uint8_t *pU64_18;
  uint32_t local_1f8;
  uint32_t uStack_1f4;
  uint16_t uStack_1f0;
  uint16_t uStack_1ee;
  uint16_t uStack_1ec;
  uint16_t uStack_1ea;
  uint16_t uStack_1e8;
  uint32_t uStack_1e6;
  uint32_t uStack_1e2;
  int64_t *local_1c0;
  int64_t local_1b8 [7];
  int64_t *local_180;
  int64_t local_178 [7];
  int64_t *local_140;
  int64_t local_138 [7];
  int64_t *local_100;
  uint8_t local_f8 [16];
  size_t local_e8;
  uint64_t local_e0;
  uint8_t local_d8 [8];
  uint64_t uStack_d0;
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint64_t local_98;
  uint64_t uStack_90;
  uint8_t local_88 [16];
  size_t local_78;
  uint64_t local_70;
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t uStack_50;
  uint8_t local_41;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_1c0 = (int64_t *)0x0;
  local_180 = (int64_t *)0x0;
  local_140 = (int64_t *)0x0;
  local_100 = (int64_t *)0x0;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x30c4) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x30c4) = 1;
    *(uint64_t *)(lVal_12 + 0x30b8) = 0x33d3b98be0c4a8eb;
    *(uint16_t *)(lVal_12 + 0x30c0) = 0x187;
    func_0x180673140(&LAB_1800d9960);
  }
  lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_3 = (uint64_t *)(lVal_12 + 0x30b8);
  if (*(char *)(lVal_12 + 0x30c1) == '\x01') {
    *pU64_3 = *pU64_3 ^ 0x47abcda593a3c787;
    *(byte *)(lVal_12 + 0x30c0) = *(byte *)(lVal_12 + 0x30c0) ^ 0x87;
    *(uint8_t *)(lVal_12 + 0x30c1) = 0;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = ZEXT816(0);
  sz_9 = strlen((char *)pU64_3);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_1800c1b9f:
    func_0x18007ba70();
LAB_1800c1ba5:
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_18 = local_68;
      uVal_15 = 0xf;
    }
    else {
      uVal_11 = sz_9 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_11) {
        uVal_15 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_15 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_68._0_8_ = pU64_18;
    }
    local_58 = sz_9;
    uStack_50 = uVal_15;
    func_0x1806aa960(pU64_18,pU64_3,sz_9);
    pU64_18[sz_9] = 0;
    func_0x1800becb0();
    uVal_15 = DAT_18083ec70;
    pU64_14 = DAT_18083ec60;
    if (DAT_18083ec78 < 0x10) {
      pU64_14 = &DAT_18083ec60;
    }
    if (uStack_50 - local_58 < DAT_18083ec70) {
      pU64_10 = (uint64_t *)func_0x1800871a0(local_68,DAT_18083ec70,local_58,0,pU64_14,DAT_18083ec70)
      ;
    }
    else {
      pU64_10 = (uint64_t *)local_68;
      pU64_16 = (uint64_t *)local_68._0_8_;
      if (uStack_50 < 0x10) {
        pU64_16 = pU64_10;
      }
      pU64_4 = (uint64_t *)((int64_t)pU64_14 + DAT_18083ec70);
      uVal_11 = DAT_18083ec70;
      if ((pU64_14 <= (uint64_t *)((int64_t)pU64_16 + local_58) && pU64_16 < pU64_4) &&
         (uVal_11 = (int64_t)pU64_16 - (int64_t)pU64_14, pU64_16 < pU64_14 || uVal_11 == 0)) {
        uVal_11 = 0;
      }
      lVal_12 = local_58 + 1;
      local_58 = local_58 + DAT_18083ec70;
      func_0x1806aa960((uint8_t *)((int64_t)pU64_16 + DAT_18083ec70),pU64_16,lVal_12);
      func_0x1806aa960(pU64_16,pU64_14,uVal_11);
      func_0x1806aa960((uint8_t *)((int64_t)pU64_16 + uVal_11),
                    (uint8_t *)((int64_t)pU64_4 + uVal_11),uVal_15 - uVal_11);
    }
    local_a8 = *(uint *)pU64_10;
    uStack_a4 = *(uint32_t *)((int64_t)pU64_10 + 4);
    uStack_a0 = *(uint32_t *)(pU64_10 + 1);
    uStack_9c = *(uint32_t *)((int64_t)pU64_10 + 0xc);
    local_98 = pU64_10[2];
    uStack_90 = pU64_10[3];
    pU64_10[2] = 0;
    pU64_10[3] = 0xf;
    *(uint8_t *)pU64_10 = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x30d8) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x30d8) = 1;
      *(uint8_t *)(lVal_12 + 0x30d6) = 1;
      *(uint64_t *)(lVal_12 + 0x30c8) = 0x2bf4a2d6e1c6a3e8;
      *(uint32_t *)(lVal_12 + 0x30d0) = 0xf6c4a0e8;
      *(uint16_t *)(lVal_12 + 0x30d4) = 0xcdd7;
      func_0x180673140(&LAB_1800d9990);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_12 + 0x30c8);
    if (*(char *)(lVal_12 + 0x30d6) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_12 + 0x30d0) = *(uint *)(lVal_12 + 0x30d0) ^ 0x93a3c787;
      *(byte *)(lVal_12 + 0x30d4) = *(byte *)(lVal_12 + 0x30d4) ^ 0xa5;
      *(byte *)(lVal_12 + 0x30d5) = *(byte *)(lVal_12 + 0x30d5) ^ 0xcd;
      *(uint8_t *)(lVal_12 + 0x30d6) = 0;
    }
    local_88 = ZEXT816(0);
    sz_9 = strlen((char *)pU64_3);
    if ((int64_t)sz_9 < 0) goto LAB_1800c1b9f;
    uVal_15 = 0xf;
    pArr16_17 = &local_88;
    if (0xf < sz_9) {
      uVal_11 = sz_9 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_11) {
        uVal_15 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pArr16_17 = (uint8_t (*)[16])func_0x180672de0(uVal_15 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_15 + 0x28);
        pArr16_17 = (uint8_t (*)[16])(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_17[-1] + 8) = lVal_12;
      }
      local_88._0_8_ = pArr16_17;
    }
    local_78 = sz_9;
    local_70 = uVal_15;
    func_0x1806aa960(pArr16_17,pU64_3,sz_9);
    (*pArr16_17)[sz_9] = 0;
    uVal_15 = local_78;
    local_41 = 0;
    local_c8 = ZEXT816(0);
    local_b8 = ZEXT816(0);
    pArr16_17 = &local_88;
    if (0xf < local_70) {
      pArr16_17 = (uint8_t (*)[16])local_88._0_8_;
    }
    if ((int64_t)local_78 < 0) goto LAB_1800c1ba5;
    if (local_78 < 0x10) {
      local_b8._8_8_ = 0xf;
      local_b8._0_8_ = local_78;
      local_c8 = *pArr16_17;
    }
    else {
      uVal_13 = local_78 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_13) {
        uVal_11 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        uVal_13 = func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_11 + 0x28);
        uVal_13 = lVal_12 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_13 - 8) = lVal_12;
      }
      local_c8._0_8_ = uVal_13;
      local_b8._8_8_ = uVal_11;
      local_b8._0_8_ = uVal_15;
      func_0x1806aa960(uVal_13,pArr16_17,uVal_15 + 1);
    }
    func_0x1800f2360(local_d8,local_c8,&local_a8,&local_41,&local_1f8);
    auArr_5 = ZEXT816(0);
    pLong_7 = (int64_t *)CONCAT44(DAT_18083ed08._4_4_,(uint32_t)DAT_18083ed08);
    DAT_18083ed00._0_4_ = local_d8._0_4_;
    DAT_18083ed00._4_4_ = local_d8._4_4_;
    DAT_18083ed08._0_4_ = (uint32_t)uStack_d0;
    DAT_18083ed08._4_4_ = uStack_d0._4_4_;
    _local_d8 = auArr_5;
    if (pLong_7 != (int64_t *)0x0) {
      LOCK();
      pLong_1 = pLong_7 + 1;
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (**(func_ptr_t *)*pLong_7)(pLong_7);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_7 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
        }
      }
      pLong_7 = uStack_d0;
      if (uStack_d0 != (int64_t *)0x0) {
        LOCK();
        pLong_1 = uStack_d0 + 1;
        *(int *)pLong_1 = *(int *)pLong_1 + -1;
        UNLOCK();
        if (*(int *)pLong_1 == 0) {
          (**(func_ptr_t *)*uStack_d0)(uStack_d0);
          LOCK();
          pInt_2 = (int *)((int64_t)pLong_7 + 0xc);
          *pInt_2 = *pInt_2 + -1;
          UNLOCK();
          if (*pInt_2 == 0) {
            (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
          }
        }
      }
    }
    if (0xf < local_70) {
      uVal_15 = local_70 + 1;
      lVal_12 = local_88._0_8_;
      if (0xfff < uVal_15) {
        lVal_12 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_12)) goto LAB_1800c1bb0;
        uVal_15 = local_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_15);
    }
    if (0xf < uStack_90) {
      lVal_8 = CONCAT44(uStack_a4,local_a8);
      uVal_15 = uStack_90 + 1;
      lVal_12 = lVal_8;
      if (0xfff < uVal_15) {
        lVal_12 = *(int64_t *)(lVal_8 + -8);
        if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_12)) goto LAB_1800c1bb0;
        uVal_15 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_15);
    }
    local_98 = 0;
    uStack_90 = 0xf;
    local_a8 = local_a8 & 0xffffff00;
    if (0xf < uStack_50) {
      uVal_15 = uStack_50 + 1;
      lVal_12 = local_68._0_8_;
      if (0xfff < uVal_15) {
        lVal_12 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_12)) goto LAB_1800c1bb0;
        uVal_15 = uStack_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_15);
    }
    if (local_100 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_100 + 0x20))(local_100,local_100 != local_138);
      local_100 = (int64_t *)0x0;
    }
    if (local_140 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_140 + 0x20))(local_140,local_140 != local_178);
      local_140 = (int64_t *)0x0;
    }
    if (local_180 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_180 + 0x20))(local_180,local_180 != local_1b8);
      local_180 = (int64_t *)0x0;
    }
    if (local_1c0 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_1c0 + 0x20))(local_1c0,local_1c0 != (int64_t *)&local_1f8);
    }
    uVal_6 = CONCAT44(DAT_18083ed00._4_4_,(uint32_t)DAT_18083ed00);
    uStack_1e8 = _UNK_1806b3a3a;
    uStack_1e6 = _UNK_1806b3a3c;
    uStack_1e2 = _UNK_1806b3a40;
    local_1f8 = _DAT_1806b3a2a;
    uStack_1f4 = _UNK_1806b3a2e;
    uStack_1f0 = _UNK_1806b3a32;
    uStack_1ee = _DAT_1806b3a34;
    uStack_1ec = _UNK_1806b3a36;
    uStack_1ea = _UNK_1806b3a38;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x30f4) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x30f4) = 1;
      func_0x1800d9840(lVal_12 + 0x30d9,&local_1f8);
      func_0x180673140(&LAB_1800d99c0);
    }
    _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x30d9);
    func_0x1800f2c80(_Str);
    local_f8 = ZEXT816(0);
    sz_9 = strlen(_Str);
    if (-1 < (int64_t)sz_9) {
      if (sz_9 < 0x10) {
        pU64_18 = local_f8;
        uVal_15 = 0xf;
      }
      else {
        uVal_11 = sz_9 | 0xf;
        uVal_15 = 0x16;
        if (0x16 < uVal_11) {
          uVal_15 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          pU64_18 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
        }
        else {
          lVal_12 = func_0x180672de0(uVal_15 + 0x28);
          pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_18 + -8) = lVal_12;
        }
        local_f8._0_8_ = pU64_18;
      }
      local_e8 = sz_9;
      local_e0 = uVal_15;
      func_0x1806aa960(pU64_18,_Str,sz_9);
      pU64_18[sz_9] = 0;
      func_0x180654b80(uVal_6,local_f8,0);
      func_0x180654470(CONCAT44(DAT_18083ed00._4_4_,(uint32_t)DAT_18083ed00),2);
      return;
    }
  }
  func_0x18007ba70();
LAB_1800c1bb0:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800c1bc0
void Unwind_1800c1bc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1800c1c00
void Unwind_1800c1c00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1800c1c40
void Unwind_1800c1c40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@1800c1c80
void Unwind_1800c1c80(uint64_t param_1,int64_t param_2)
{
  func_0x1800c1d10(param_2 + 0x30);
  return;
}

// Unwind@1800c1cc0
void Unwind_1800c1cc0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x30f4) = 0;
  return;
}

// func_0x1800c1d10
void func_0x1800c1d10(int64_t *param_1)
{
  int64_t *pLong_1;
  
  pLong_1 = (int64_t *)param_1[0x1f];
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_1 + 0x18);
    param_1[0x1f] = 0;
  }
  pLong_1 = (int64_t *)param_1[0x17];
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_1 + 0x10);
    param_1[0x17] = 0;
  }
  pLong_1 = (int64_t *)param_1[0xf];
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_1 + 8);
    param_1[0xf] = 0;
  }
  pLong_1 = (int64_t *)param_1[7];
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_1);
    param_1[7] = 0;
  }
  return;
}

// func_0x1800c1db0
void func_0x1800c1db0(void)
{
  uint64_t *_Str;
  int64_t *pLong_1;
  uint uVal_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  size_t sz_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  uint8_t ******ptr6_U64_8;
  char *fnPtr_9;
  uint8_t *pU64_10;
  int64_t *pLong_11;
  char *fnPtr_12;
  uint64_t uVal_13;
  uint64_t uVal_14;
  int64_t *pLong_15;
  uint64_t in_stack_fffffffffffffe48;
  uint32_t uVal_16;
  int iStack_1a4;
  int64_t local_1a0;
  uint8_t local_198 [8];
  uint auStack_190 [14];
  int64_t local_158 [12];
  uint8_t **local_f8 [12];
  uint8_t *****local_98;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  int64_t local_88;
  uint64_t uStack_80;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  size_t local_58;
  uint64_t uStack_50;
  uint64_t local_40;
  
  uVal_16 = (uint32_t)((uint64_t)in_stack_fffffffffffffe48 >> 0x20);
  local_40 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3104) == '\0') {
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_7 + 0x3104) = 1;
    *(uint64_t *)(lVal_7 + 0x30f8) = 0xcf597791782a1871;
    *(uint16_t *)(lVal_7 + 0x3100) = 0x11d;
    func_0x180673140(&LAB_1800d99f0);
  }
  lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_7 + 0x30f8);
  if (*(char *)(lVal_7 + 0x3101) == '\x01') {
    *_Str = *_Str ^ 0xbb2103bf0b4d771d;
    *(byte *)(lVal_7 + 0x3100) = *(byte *)(lVal_7 + 0x3100) ^ 0x1d;
    *(uint8_t *)(lVal_7 + 0x3101) = 0;
  }
  _local_68 = ZEXT816(0);
  sz_5 = strlen((char *)_Str);
  if ((int64_t)sz_5 < 0) {
    func_0x18007ba70();
LAB_1800c2194:
    do {
      invalidInstructionException();
    } while( true );
  }
  if (sz_5 < 0x10) {
    pU64_10 = local_68;
    uVal_14 = 0xf;
  }
  else {
    uVal_13 = sz_5 | 0xf;
    uVal_14 = 0x16;
    if (0x16 < uVal_13) {
      uVal_14 = uVal_13;
    }
    if (uVal_13 < 0xfff) {
      pU64_10 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
    }
    else {
      lVal_7 = func_0x180672de0(uVal_14 + 0x28);
      pU64_10 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_10 + -8) = lVal_7;
    }
    local_68 = (uint8_t  [8])pU64_10;
  }
  local_58 = sz_5;
  uStack_50 = uVal_14;
  func_0x1806aa960(pU64_10,_Str,sz_5);
  pU64_10[sz_5] = 0;
  func_0x1800becb0();
  uVal_14 = DAT_18083ec70;
  pLong_11 = DAT_18083ec60;
  if (DAT_18083ec78 < 0x10) {
    pLong_11 = (int64_t *)&DAT_18083ec60;
  }
  if (uStack_50 - local_58 < DAT_18083ec70) {
    pLong_6 = (int64_t *)func_0x1800871a0(local_68,DAT_18083ec70,local_58,0,pLong_11,DAT_18083ec70);
    uVal_16 = (uint32_t)((uint64_t)pLong_11 >> 0x20);
  }
  else {
    pLong_6 = (int64_t *)local_68;
    pLong_15 = (int64_t *)local_68;
    if (uStack_50 < 0x10) {
      pLong_15 = pLong_6;
    }
    pLong_1 = (int64_t *)((int64_t)pLong_11 + DAT_18083ec70);
    uVal_13 = DAT_18083ec70;
    if ((pLong_11 <= (int64_t *)((int64_t)pLong_15 + local_58) && pLong_15 < pLong_1) &&
       (uVal_13 = (int64_t)pLong_15 - (int64_t)pLong_11, pLong_15 < pLong_11 || uVal_13 == 0)) {
      uVal_13 = 0;
    }
    lVal_7 = local_58 + 1;
    local_58 = local_58 + DAT_18083ec70;
    func_0x1806aa960((uint8_t *)((int64_t)pLong_15 + DAT_18083ec70),pLong_15,lVal_7);
    func_0x1806aa960(pLong_15,pLong_11,uVal_13);
    func_0x1806aa960((uint8_t *)((int64_t)pLong_15 + uVal_13),(uint8_t *)((int64_t)pLong_1 + uVal_13)
                  ,uVal_14 - uVal_13);
  }
  local_98 = (uint8_t *****)*pLong_6;
  uStack_90 = *(uint32_t *)(pLong_6 + 1);
  uStack_8c = *(uint32_t *)((int64_t)pLong_6 + 0xc);
  local_88 = pLong_6[2];
  uStack_80 = pLong_6[3];
  pLong_6[2] = 0;
  pLong_6[3] = 0xf;
  *(uint8_t *)pLong_6 = 0;
  ptr6_U64_8 = (uint8_t ******)local_98;
  if (uStack_80 < 0x10) {
    ptr6_U64_8 = &local_98;
  }
  func_0x1800f2cb0(&local_1a0,ptr6_U64_8,0x10,0x40,CONCAT44(uVal_16,1));
  if (0xf < uStack_80) {
    uVal_14 = uStack_80 + 1;
    ptr6_U64_8 = (uint8_t ******)local_98;
    if (0xfff < uVal_14) {
      ptr6_U64_8 = (uint8_t ******)local_98[-1];
      if (0x1f < (uint64_t)((int64_t)local_98 + (-8 - (int64_t)ptr6_U64_8))) goto LAB_1800c2194;
      uVal_14 = uStack_80 + 0x28;
    }
    thunk_FUN_180695dd0(ptr6_U64_8,uVal_14);
  }
  local_88 = 0;
  uStack_80 = 0xf;
  local_98 = (uint8_t *****)((uint64_t)local_98 & 0xffffffffffffff00);
  if (0xf < uStack_50) {
    uVal_14 = uStack_50 + 1;
    lVal_7 = (int64_t)local_68;
    if (0xfff < uVal_14) {
      lVal_7 = *(int64_t *)((int64_t)local_68 + -8);
      if (0x1f < (uint64_t)(((int64_t)local_68 + -8) - lVal_7)) goto LAB_1800c2194;
      uVal_14 = uStack_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_14);
  }
  lVal_7 = func_0x18008b2b0(local_198);
  if (lVal_7 == 0) {
    lVal_7 = (int64_t)*(int *)(local_1a0 + 4);
    uVal_2 = *(uint *)((int64_t)auStack_190 + lVal_7 + 4);
    uVal_4 = *(uint *)((int64_t)auStack_190 + lVal_7) & 0x15 |
            (uint)(*(int64_t *)((int64_t)local_158 + lVal_7) == 0) << 2 | 2;
    *(uint *)((int64_t)auStack_190 + lVal_7) = uVal_4;
    uVal_4 = uVal_4 & uVal_2;
    if (uVal_4 != 0) {
      fnPtr_9 = "ios_base::failbit set";
      if ((uVal_2 & 2) == 0) {
        fnPtr_9 = "ios_base::eofbit set";
      }
      fnPtr_12 = "ios_base::badbit set";
      if ((uVal_4 & 4) == 0) {
        fnPtr_12 = fnPtr_9;
      }
      local_68._0_4_ = 1;
      uStack_60 = &PTR_vftable_1806b0968;
      func_0x1800968f0(&local_98,local_68,fnPtr_12);
      local_98 = (uint8_t *****)std::ios_base::failure::vftable;
      func_0x18067a120(&local_98,&DAT_180768ca8);
      fnPtr_3 = (func_ptr_t )swi(3);
      (*fnPtr_3)();
      return;
    }
  }
  *(uint8_t ***)(local_198 + (int64_t)*(int *)(local_1a0 + 4) + -8) = &PTR_LAB_1806b3a48;
  *(int *)((int64_t)&iStack_1a4 + (int64_t)*(int *)(local_1a0 + 4)) =
       *(int *)(local_1a0 + 4) + -0xa8;
  func_0x18008b1c0(local_198);
  local_f8[0] = &PTR_LAB_1806b0288;
  func_0x180673810(local_f8);
  return;
}

// Unwind@1800c2210
void Unwind_1800c2210(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800c2230
void Unwind_1800c2230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1800c2270
void Unwind_1800c2270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  return;
}

// Unwind@1800c22b0
void Unwind_1800c22b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800c22f0(param_2 + 0x38);
  return;
}

// func_0x1800c22f0
void func_0x1800c22f0(int64_t *param_1)
{
  *(uint8_t ***)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4)) = &PTR_LAB_1806b3a48;
  *(int *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xa8;
  func_0x18008b1c0(param_1 + 1);
  param_1[0x15] = (int64_t)&PTR_LAB_1806b0288;
  func_0x180673810(param_1 + 0x15);
  return;
}

// Unwind@1800c2360
void Unwind_1800c2360(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800c23c0
uint64_t * func_0x1800c23c0(uint64_t *param_1)
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
  for (pU64_4 = DAT_18083ed10; pU64_4 != (uint64_t *)0x0; pU64_4 = (uint64_t *)*pU64_4) {
    if (((pU64_5 <= pU64_4) && (pU64_4 < pU64_10)) && (pU64_4[1] != 0)) goto LAB_1800c2459;
  }
  lpAddress = param_1;
  do {
    if (lpAddress < pU64_5) {
LAB_1800c251a:
      goto LAB_1800c251f;
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
      goto LAB_1800c251a;
      if (local_78.State == 0x10000) break;
      lpAddress = (uint64_t *)((int64_t)local_78.AllocationBase - (int64_t)pVoid_7);
      if (local_78.AllocationBase < pVoid_7) goto LAB_1800c251a;
    }
    if (lpAddress == (uint64_t *)0x0) goto LAB_1800c251a;
    pU64_4 = (uint64_t *)VirtualAlloc(lpAddress,0x1000,0x3000,0x40);
  } while (pU64_4 == (uint64_t *)0x0);
  goto LAB_1800c25f9;
LAB_1800c251f:
  do {
    if (pU64_10 < param_1) {
LAB_1800c298a:
      pU64_5 = (uint64_t *)0x0;
      goto LAB_1800c298c;
    }
    uVal_6 = (uint64_t)local_a8.dwAllocationGranularity;
    if ((uint64_t)param_1 >> 0x20 == 0) {
      param_1 = (uint64_t *)
                ((int64_t)param_1 + (uVal_6 - ((uint64_t)param_1 & 0xffffffff) % uVal_6));
      if (param_1 <= pU64_10) goto LAB_1800c2565;
      goto LAB_1800c298a;
    }
    param_1 = (uint64_t *)((int64_t)param_1 + (uVal_6 - (uint64_t)param_1 % uVal_6));
    if (pU64_10 < param_1) goto LAB_1800c298a;
LAB_1800c2565:
    uVal_9 = local_a8.dwAllocationGranularity - 1;
    while( true ) {
      SVar3 = VirtualQuery(param_1,&local_78,0x30);
      if (SVar3 == 0) goto LAB_1800c298a;
      if (local_78.State == 0x10000) break;
      uVal_8 = (int64_t)local_78.BaseAddress + local_78.RegionSize + uVal_9;
      uVal_2 = uVal_8;
      if (uVal_8 >> 0x20 == 0) {
        uVal_2 = uVal_8 & 0xffffffff;
      }
      param_1 = (uint64_t *)(uVal_8 - uVal_2 % uVal_6);
      if (pU64_10 < param_1) goto LAB_1800c298a;
    }
    if (param_1 == (uint64_t *)0x0) goto LAB_1800c298a;
    pU64_4 = (uint64_t *)VirtualAlloc(param_1,0x1000,0x3000,0x40);
  } while (pU64_4 == (uint64_t *)0x0);
LAB_1800c25f9:
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
  *pU64_4 = DAT_18083ed10;
  DAT_18083ed10 = pU64_4;
LAB_1800c2459:
  pU64_5 = (uint64_t *)pU64_4[1];
  pU64_4[1] = *pU64_5;
  *(int *)(pU64_4 + 2) = *(int *)(pU64_4 + 2) + 1;
LAB_1800c298c:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_c8)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_c8);
    fnPtr_1 = (func_ptr_t )swi(3);
    pU64_5 = (uint64_t *)(*fnPtr_1)();
    return pU64_5;
  }
  return pU64_5;
}

// func_0x1800c29d0
void func_0x1800c29d0(uint64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  uint64_t *lpAddress;
  
  lpAddress = &DAT_18083ed10;
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
  pU64_2 = &DAT_18083ed10;
  if (pU64_1 != (uint64_t *)0x0) {
    pU64_2 = pU64_1;
  }
  *pU64_2 = *lpAddress;
                    /* WARNING: Could not recover jumptable at 0x0001800c2a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VirtualFree(lpAddress,0,0x8000);
  return;
}

// func_0x1800c2a40
int64_t func_0x1800c2a40(char *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, uint32_t param_5)
{
  func_ptr_t fnPtr_1;
  errno_t eVar2;
  int iVal_3;
  int64_t lVal_4;
  uint8_t auStack_148 [32];
  uint32_t local_128;
  FILE *local_118 [2];
  uint32_t local_108;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  uint8_t *local_f8;
  FILE *local_f0;
  uint64_t local_e8;
  uint8_t local_e0 [128];
  int local_60;
  uint8_t *local_58;
  uint8_t *local_50;
  uint8_t *local_48;
  uint8_t *local_40;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_148;
  eVar2 = fopen_s(local_118,param_1,"rb");
  if (local_118[0] == (FILE *)0x0 || eVar2 != 0) {
    *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x3010) = "can\'t fopen";
    lVal_4 = 0;
  }
  else {
    local_f8 = PTR_LAB_1806b3a68;
    local_108 = PTR_LAB_1806b3a58._0_4_;
    uStack_104 = PTR_LAB_1806b3a58._4_4_;
    uStack_100 = PTR_LAB_1806b3a60._0_4_;
    uStack_fc = PTR_LAB_1806b3a60._4_4_;
    local_f0 = local_118[0];
    local_e8 = 0x8000000001;
    local_60 = 0;
    local_58 = local_e0;
    local_48 = local_e0;
    iVal_3 = (*(func_ptr_t )CONCAT44(PTR_LAB_1806b3a58._4_4_,PTR_LAB_1806b3a58._0_4_))
                      (local_118[0],local_e0,0x80);
    local_60 = local_60 + ((int)local_58 - (int)local_48);
    if (iVal_3 == 0) {
      local_e8 = local_e8 & 0xffffffff00000000;
      local_50 = local_e0 + 1;
      local_e0[0] = 0;
    }
    else {
      local_50 = local_e0 + iVal_3;
    }
    local_128 = param_5;
    local_58 = local_e0;
    local_40 = local_50;
    lVal_4 = func_0x1800c2bf0(local_118,param_2,param_3,param_4);
    if (lVal_4 != 0) {
      func_0x180682c24(local_118[0],(int)local_58 - (int)local_50,1);
    }
    func_0x18068a690(local_118[0]);
  }
  if (DAT_18083cf40 == (local_38 ^ (uint64_t)auStack_148)) {
    return lVal_4;
  }
  func_0x180673080(local_38 ^ (uint64_t)auStack_148);
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_1)();
  return lVal_4;
}

// func_0x1800c2bf0
int64_t func_0x1800c2bf0(uint64_t param_1,int *param_2,int *param_3,int *param_4,int param_5)
{
  char *fnPtr_1;
  uint64_t uVal_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  func_ptr_t fnPtr_5;
  int64_t lVal_6;
  int *pInt_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  int iVal_13;
  uint uVal_14;
  uint64_t uVal_15;
  ushort uVal_16;
  ushort uVal_17;
  ushort uVal_18;
  ushort uVal_19;
  ushort uVal_20;
  ushort uVal_21;
  ushort uVal_22;
  ushort uVal_23;
  ushort uVal_24;
  ushort uVal_25;
  ushort uVal_26;
  ushort uVal_27;
  ushort uVal_28;
  ushort uVal_29;
  ushort uVal_30;
  ushort uVal_31;
  uint8_t auStack_8a8 [32];
  int local_888;
  int *local_880;
  uint32_t local_878;
  int local_864;
  uint64_t local_860;
  int local_854 [3];
  uint8_t local_848 [2048];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_8a8;
  local_880 = local_854;
  local_888 = param_5;
  local_878 = 8;
  lVal_6 = func_0x1800d9b80();
  if (lVal_6 == 0) {
    lVal_6 = 0;
    goto LAB_1800c2e60;
  }
  if (local_854[0] != 8) {
    iVal_13 = param_5;
    if (param_5 == 0) {
      iVal_13 = *param_4;
    }
    uVal_14 = iVal_13 * *param_3 * *param_2;
    lVal_8 = _malloc_base((int64_t)(int)uVal_14);
    if (lVal_8 == 0) {
      *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x3010) = "outofmem";
    }
    else {
      if (0 < (int)uVal_14) {
        if (uVal_14 < 4) {
          uVal_9 = 0;
        }
        else {
          if (uVal_14 < 0x10) {
            uVal_10 = 0;
          }
          else {
            uVal_9 = (uint64_t)(uVal_14 & 0x7ffffff0);
            uVal_10 = 0;
            do {
              auArr_3 = *(uint8_t (*)[16])(lVal_6 + uVal_10 * 2);
              auArr_4 = *(uint8_t (*)[16])(lVal_6 + 0x10 + uVal_10 * 2);
              uVal_16 = auArr_3._0_2_ >> 8;
              uVal_17 = auArr_3._2_2_ >> 8;
              uVal_18 = auArr_3._4_2_ >> 8;
              uVal_19 = auArr_3._6_2_ >> 8;
              uVal_20 = auArr_3._8_2_ >> 8;
              uVal_21 = auArr_3._10_2_ >> 8;
              uVal_22 = auArr_3._12_2_ >> 8;
              uVal_23 = auArr_3._14_2_ >> 8;
              uVal_24 = auArr_4._0_2_ >> 8;
              uVal_25 = auArr_4._2_2_ >> 8;
              uVal_26 = auArr_4._4_2_ >> 8;
              uVal_27 = auArr_4._6_2_ >> 8;
              uVal_28 = auArr_4._8_2_ >> 8;
              uVal_29 = auArr_4._10_2_ >> 8;
              uVal_30 = auArr_4._12_2_ >> 8;
              uVal_31 = auArr_4._14_2_ >> 8;
              fnPtr_1 = (char *)(lVal_8 + uVal_10);
              *fnPtr_1 = (uVal_16 != 0) * (uVal_16 < 0xff) * auArr_3[1] - (0xff < uVal_16);
              fnPtr_1[1] = (uVal_17 != 0) * (uVal_17 < 0xff) * auArr_3[3] - (0xff < uVal_17);
              fnPtr_1[2] = (uVal_18 != 0) * (uVal_18 < 0xff) * auArr_3[5] - (0xff < uVal_18);
              fnPtr_1[3] = (uVal_19 != 0) * (uVal_19 < 0xff) * auArr_3[7] - (0xff < uVal_19);
              fnPtr_1[4] = (uVal_20 != 0) * (uVal_20 < 0xff) * auArr_3[9] - (0xff < uVal_20);
              fnPtr_1[5] = (uVal_21 != 0) * (uVal_21 < 0xff) * auArr_3[11] - (0xff < uVal_21);
              fnPtr_1[6] = (uVal_22 != 0) * (uVal_22 < 0xff) * auArr_3[13] - (0xff < uVal_22);
              fnPtr_1[7] = (uVal_23 != 0) * (uVal_23 < 0xff) * auArr_3[15] - (0xff < uVal_23);
              fnPtr_1[8] = (uVal_24 != 0) * (uVal_24 < 0xff) * auArr_4[1] - (0xff < uVal_24);
              fnPtr_1[9] = (uVal_25 != 0) * (uVal_25 < 0xff) * auArr_4[3] - (0xff < uVal_25);
              fnPtr_1[10] = (uVal_26 != 0) * (uVal_26 < 0xff) * auArr_4[5] - (0xff < uVal_26);
              fnPtr_1[0xb] = (uVal_27 != 0) * (uVal_27 < 0xff) * auArr_4[7] - (0xff < uVal_27);
              fnPtr_1[0xc] = (uVal_28 != 0) * (uVal_28 < 0xff) * auArr_4[9] - (0xff < uVal_28);
              fnPtr_1[0xd] = (uVal_29 != 0) * (uVal_29 < 0xff) * auArr_4[11] - (0xff < uVal_29);
              fnPtr_1[0xe] = (uVal_30 != 0) * (uVal_30 < 0xff) * auArr_4[13] - (0xff < uVal_30);
              fnPtr_1[0xf] = (uVal_31 != 0) * (uVal_31 < 0xff) * auArr_4[15] - (0xff < uVal_31);
              uVal_10 = uVal_10 + 0x10;
            } while (uVal_9 != uVal_10);
            if ((uVal_14 & 0x7ffffff0) == uVal_14) goto LAB_1800c2d62;
            uVal_10 = uVal_9;
            if ((uVal_14 & 0xc) == 0) goto LAB_1800c2d50;
          }
          uVal_9 = (uint64_t)(uVal_14 & 0x7ffffffc);
          do {
            uVal_2 = *(uint64_t *)(lVal_6 + uVal_10 * 2);
            uVal_16 = (ushort)uVal_2 >> 8;
            uVal_17 = (ushort)((uint64_t)uVal_2 >> 0x10) >> 8;
            uVal_18 = (ushort)((uint64_t)uVal_2 >> 0x20) >> 8;
            uVal_19 = (ushort)((uint64_t)uVal_2 >> 0x38);
            *(uint *)(lVal_8 + uVal_10) =
                 CONCAT13((uVal_19 != 0) * (uVal_19 < 0xff) * (char)((uint64_t)uVal_2 >> 0x38) -
                          (0xff < uVal_19),
                          CONCAT12((uVal_18 != 0) * (uVal_18 < 0xff) *
                                   (char)((uint64_t)uVal_2 >> 0x28) - (0xff < uVal_18),
                                   CONCAT11((uVal_17 != 0) * (uVal_17 < 0xff) *
                                            (char)((uint64_t)uVal_2 >> 0x18) - (0xff < uVal_17),
                                            (uVal_16 != 0) * (uVal_16 < 0xff) *
                                            (char)((uint64_t)uVal_2 >> 8) - (0xff < uVal_16))));
            uVal_10 = uVal_10 + 4;
          } while (uVal_9 != uVal_10);
          if ((uVal_14 & 0x7ffffffc) == uVal_14) goto LAB_1800c2d62;
        }
LAB_1800c2d50:
        do {
          *(uint8_t *)(lVal_8 + uVal_9) = *(uint8_t *)(lVal_6 + 1 + uVal_9 * 2);
          uVal_9 = uVal_9 + 1;
        } while (uVal_14 != uVal_9);
      }
LAB_1800c2d62:
      thunk_FUN_180695dd0();
    }
    local_854[0] = 8;
    lVal_6 = lVal_8;
  }
  lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pInt_7 = (int *)&DAT_18083ed18;
  if (*(int *)(lVal_8 + 0x301c) != 0) {
    pInt_7 = (int *)(lVal_8 + 0x3018);
  }
  if (*pInt_7 != 0) {
    if (param_5 == 0) {
      param_5 = *param_4;
    }
    local_864 = *param_3;
    uVal_9 = (int64_t)param_5 * (int64_t)*param_2;
    if (uVal_9 != 0 && 0 < local_864 >> 1) {
      local_860 = (uint64_t)(uint)(local_864 >> 1);
      uVal_10 = 0;
      do {
        lVal_8 = uVal_10 * uVal_9 + lVal_6;
        lVal_12 = (int64_t)(int)(~(uint)uVal_10 + local_864) * uVal_9 + lVal_6;
        uVal_11 = uVal_9;
        do {
          uVal_15 = 0x800;
          if (uVal_11 < 0x800) {
            uVal_15 = uVal_11;
          }
          func_0x1806aa960(local_848,lVal_8,uVal_15);
          func_0x1806aa960(lVal_8,lVal_12,uVal_15);
          func_0x1806aa960(lVal_12,local_848,uVal_15);
          lVal_8 = lVal_8 + uVal_15;
          lVal_12 = lVal_12 + uVal_15;
          uVal_11 = uVal_11 - uVal_15;
        } while (uVal_11 != 0);
        uVal_10 = uVal_10 + 1;
      } while (uVal_10 != local_860);
    }
  }
LAB_1800c2e60:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_8a8)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_8a8);
    fnPtr_5 = (func_ptr_t )swi(3);
    lVal_6 = (*fnPtr_5)();
    return lVal_6;
  }
  return lVal_6;
}

// func_0x1800c2ea0
bool func_0x1800c2ea0(int64_t param_1)
{
  byte *pU8_1;
  byte *pU8_2;
  int iVal_3;
  byte *pU8_4;
  byte *pU8_5;
  byte *pU8_6;
  byte bFlag_7;
  byte *pU8_8;
  int64_t lVal_9;
  bool bFlag_10;
  
  pU8_5 = (byte *)(param_1 + 0x38);
  pU8_1 = (byte *)(param_1 + 0x39);
  pU8_6 = *(byte **)(param_1 + 0xc0);
  pU8_4 = *(byte **)(param_1 + 200);
  lVal_9 = 0;
  while( true ) {
    if (pU8_6 < pU8_4) {
      *(byte **)(param_1 + 0xc0) = pU8_6 + 1;
      bFlag_7 = *pU8_6;
      pU8_6 = pU8_6 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      bFlag_7 = 0;
    }
    else {
      iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),pU8_5,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_3 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        bFlag_7 = 0;
        pU8_4 = pU8_1;
      }
      else {
        bFlag_7 = *pU8_5;
        pU8_4 = pU8_5 + iVal_3;
      }
      *(byte **)(param_1 + 200) = pU8_4;
      *(byte **)(param_1 + 0xc0) = pU8_1;
      pU8_6 = pU8_1;
    }
    if ((uint)bFlag_7 != (int)"#?RADIANCE\n"[lVal_9]) break;
    lVal_9 = lVal_9 + 1;
    if (lVal_9 == 0xb) {
      pU8_6 = *(byte **)(param_1 + 0xd0);
      bFlag_10 = true;
LAB_1800c3325:
      *(byte **)(param_1 + 0xc0) = pU8_6;
      *(uint64_t *)(param_1 + 200) = *(uint64_t *)(param_1 + 0xd8);
      return bFlag_10;
    }
  }
  pU8_6 = *(byte **)(param_1 + 0xd0);
  pU8_4 = *(byte **)(param_1 + 0xd8);
  *(byte **)(param_1 + 0xc0) = pU8_6;
  *(byte **)(param_1 + 200) = pU8_4;
  if (pU8_6 < pU8_4) {
    pU8_8 = pU8_6 + 1;
    *(byte **)(param_1 + 0xc0) = pU8_8;
    bFlag_7 = *pU8_6;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      bFlag_10 = false;
      goto LAB_1800c3325;
    }
    iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),pU8_5);
    pU8_6 = *(byte **)(param_1 + 0xd0);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - (int)pU8_6);
    if (iVal_3 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      bFlag_7 = 0;
      pU8_4 = pU8_1;
    }
    else {
      bFlag_7 = *pU8_5;
      pU8_4 = pU8_5 + iVal_3;
    }
    *(byte **)(param_1 + 200) = pU8_4;
    *(byte **)(param_1 + 0xc0) = pU8_1;
    pU8_8 = pU8_1;
  }
  bFlag_10 = false;
  if (bFlag_7 != 0x23) goto LAB_1800c3325;
  bFlag_10 = false;
  if (pU8_8 < pU8_4) {
    pU8_2 = pU8_8 + 1;
    *(byte **)(param_1 + 0xc0) = pU8_2;
    bFlag_7 = *pU8_8;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800c3325;
    iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),pU8_5);
    pU8_6 = *(byte **)(param_1 + 0xd0);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - (int)pU8_6);
    if (iVal_3 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      bFlag_7 = 0;
      pU8_4 = pU8_1;
    }
    else {
      bFlag_7 = *pU8_5;
      pU8_4 = pU8_5 + iVal_3;
    }
    *(byte **)(param_1 + 200) = pU8_4;
    *(byte **)(param_1 + 0xc0) = pU8_1;
    pU8_2 = pU8_1;
  }
  bFlag_10 = false;
  if (bFlag_7 != 0x3f) goto LAB_1800c3325;
  bFlag_10 = false;
  if (pU8_2 < pU8_4) {
    pU8_8 = pU8_2 + 1;
    *(byte **)(param_1 + 0xc0) = pU8_8;
    bFlag_7 = *pU8_2;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800c3325;
    iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),pU8_5);
    pU8_6 = *(byte **)(param_1 + 0xd0);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - (int)pU8_6);
    if (iVal_3 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      bFlag_7 = 0;
      pU8_4 = pU8_1;
    }
    else {
      bFlag_7 = *pU8_5;
      pU8_4 = pU8_5 + iVal_3;
    }
    *(byte **)(param_1 + 200) = pU8_4;
    *(byte **)(param_1 + 0xc0) = pU8_1;
    pU8_8 = pU8_1;
  }
  bFlag_10 = false;
  if (bFlag_7 != 0x52) goto LAB_1800c3325;
  bFlag_10 = false;
  if (pU8_8 < pU8_4) {
    *(byte **)(param_1 + 0xc0) = pU8_8 + 1;
    bFlag_7 = *pU8_8;
    pU8_8 = pU8_8 + 1;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800c3325;
    iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),pU8_5);
    pU8_6 = *(byte **)(param_1 + 0xd0);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - (int)pU8_6);
    if (iVal_3 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      bFlag_7 = 0;
      pU8_4 = pU8_1;
    }
    else {
      bFlag_7 = *pU8_5;
      pU8_4 = pU8_5 + iVal_3;
    }
    *(byte **)(param_1 + 200) = pU8_4;
    *(byte **)(param_1 + 0xc0) = pU8_1;
    pU8_8 = pU8_1;
  }
  bFlag_10 = false;
  if (bFlag_7 != 0x47) goto LAB_1800c3325;
  if (pU8_8 < pU8_4) {
    *(byte **)(param_1 + 0xc0) = pU8_8 + 1;
    bFlag_7 = *pU8_8;
    pU8_8 = pU8_8 + 1;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800c3325;
    iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),pU8_5);
    pU8_6 = *(byte **)(param_1 + 0xd0);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - (int)pU8_6);
    if (iVal_3 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      bFlag_7 = 0;
      pU8_4 = pU8_1;
    }
    else {
      bFlag_7 = *pU8_5;
      pU8_4 = pU8_5 + iVal_3;
    }
    *(byte **)(param_1 + 200) = pU8_4;
    *(byte **)(param_1 + 0xc0) = pU8_1;
    pU8_8 = pU8_1;
  }
  bFlag_10 = false;
  if (bFlag_7 != 0x42) goto LAB_1800c3325;
  if (pU8_8 < pU8_4) {
    *(byte **)(param_1 + 0xc0) = pU8_8 + 1;
    bFlag_7 = *pU8_8;
    pU8_8 = pU8_8 + 1;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800c3325;
    iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),pU8_5);
    pU8_6 = *(byte **)(param_1 + 0xd0);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - (int)pU8_6);
    if (iVal_3 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      bFlag_7 = 0;
      pU8_4 = pU8_1;
    }
    else {
      bFlag_7 = *pU8_5;
      pU8_4 = pU8_5 + iVal_3;
    }
    *(byte **)(param_1 + 200) = pU8_4;
    *(byte **)(param_1 + 0xc0) = pU8_1;
    pU8_8 = pU8_1;
  }
  bFlag_10 = false;
  if (bFlag_7 != 0x45) goto LAB_1800c3325;
  if (pU8_8 < pU8_4) {
    *(byte **)(param_1 + 0xc0) = pU8_8 + 1;
    bFlag_7 = *pU8_8;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800c3325;
    iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),pU8_5,*(uint32_t *)(param_1 + 0x34));
    pU8_6 = *(byte **)(param_1 + 0xd0);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - (int)pU8_6);
    if (iVal_3 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      bFlag_7 = 0;
      pU8_5 = pU8_1;
    }
    else {
      bFlag_7 = *pU8_5;
      pU8_5 = pU8_5 + iVal_3;
    }
    *(byte **)(param_1 + 200) = pU8_5;
    *(byte **)(param_1 + 0xc0) = pU8_1;
  }
  bFlag_10 = bFlag_7 == 10;
  goto LAB_1800c3325;
}

// func_0x1800c3350
uint64_t func_0x1800c3350(byte **param_1,byte *param_2,int param_3,uint32_t param_4,int param_5)
{
  uint32_t *pU64_1;
  uint32_t *pU64_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  ushort uVal_11;
  uint uVal_12;
  int iVal_13;
  byte *pU8_14;
  byte *pU8_15;
  char *fnPtr_16;
  uint8_t uVal_17;
  int iVal_18;
  int iVal_19;
  uint uVal_20;
  byte *pU8_21;
  uint uVal_22;
  int iVal_23;
  int iVal_24;
  uint64_t uVal_25;
  byte bFlag_26;
  int64_t lVal_27;
  uint64_t uVal_28;
  int64_t lVal_29;
  int64_t lVal_30;
  uint64_t uVal_31;
  uint64_t uVal_32;
  uint uVal_33;
  bool bFlag_34;
  uint8_t local_a58 [32];
  uint8_t local_a38 [15];
  uint32_t uStack_a29;
  uint8_t auStack_a19 [469];
  uint32_t local_844;
  ushort auStack_432 [27];
  int aiStack_3fc [11];
  ushort auStack_3ce [7];
  byte abStack_3c0 [288];
  ushort auStack_2a0 [288];
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)local_a58;
  param_1[5] = param_2;
  param_1[4] = param_2;
  param_1[6] = param_2 + param_3;
  *(uint32_t *)(param_1 + 7) = param_4;
  if (param_5 == 0) {
LAB_1800c3418:
    param_1[2] = (byte *)0x0;
    *(uint32_t *)(param_1 + 3) = 0;
    uVal_31 = 0;
    iVal_13 = 0;
LAB_1800c43b6:
    do {
      iVal_24 = iVal_13;
      bFlag_26 = (byte)iVal_24 & 0x1f;
      if ((uint)uVal_31 >> bFlag_26 != 0) {
        *param_1 = param_1[1];
        goto LAB_1800c440e;
      }
      pU8_15 = *param_1;
      uVal_12 = 0 >> bFlag_26;
      if (pU8_15 < param_1[1]) {
        *param_1 = pU8_15 + 1;
        uVal_12 = (uint)*pU8_15;
      }
      uVal_12 = (uint)uVal_31 | uVal_12 << ((byte)iVal_24 & 0x1f);
      uVal_31 = (uint64_t)uVal_12;
      *(uint *)(param_1 + 3) = uVal_12;
      *(int *)(param_1 + 2) = iVal_24 + 8;
      iVal_13 = iVal_24 + 8;
    } while (iVal_24 < 0x11);
    iVal_13 = iVal_24 + 7;
    uVal_33 = uVal_12 >> 3;
    *(uint *)(param_1 + 3) = uVal_33;
    uVal_20 = iVal_24 + 5;
    *(uint *)(param_1 + 2) = uVal_20;
    uVal_32 = 0;
    switch(uVal_12 >> 1 & 3) {
    case 0:
switchD_1800c440c_caseD_0:
      uVal_12 = uVal_20 & 7;
      if (uVal_12 != 0) {
        if (iVal_13 < 2) {
          do {
            bFlag_26 = (byte)uVal_20 & 0x1f;
            if (uVal_33 >> bFlag_26 != 0) {
              *param_1 = param_1[1];
              break;
            }
            pU8_15 = *param_1;
            uVal_22 = 0 >> bFlag_26;
            if (pU8_15 < param_1[1]) {
              *param_1 = pU8_15 + 1;
              uVal_22 = (uint)*pU8_15;
            }
            uVal_33 = uVal_33 | uVal_22 << ((byte)uVal_20 & 0x1f);
            *(uint *)(param_1 + 3) = uVal_33;
            uVal_22 = uVal_20 + 8;
            *(uint *)(param_1 + 2) = uVal_22;
            bFlag_34 = (int)uVal_20 < 0x11;
            uVal_20 = uVal_22;
          } while (bFlag_34);
        }
        uVal_33 = uVal_33 >> (sbyte)uVal_12;
        *(uint *)(param_1 + 3) = uVal_33;
        uVal_20 = uVal_20 - uVal_12;
        *(uint *)(param_1 + 2) = uVal_20;
      }
      if ((int)uVal_20 < 1) {
        if (-1 < (int)uVal_20) {
          uVal_25 = 0;
LAB_1800c41ea:
          pU8_15 = *param_1;
          pU8_14 = param_1[1];
          iVal_13 = (int)uVal_25;
          if ((uVal_25 & 1) != 0) {
            if (pU8_15 < pU8_14) {
              *param_1 = pU8_15 + 1;
              bFlag_26 = *pU8_15;
              pU8_15 = pU8_15 + 1;
            }
            else {
              bFlag_26 = 0;
            }
            *(byte *)((int64_t)&local_844 + uVal_25) = bFlag_26;
            uVal_25 = uVal_25 + 1;
          }
          if (iVal_13 != 3) {
            do {
              while (pU8_14 <= pU8_15) {
                *(uint8_t *)((int64_t)&local_844 + uVal_25) = 0;
                pU8_21 = pU8_15;
                if (pU8_14 <= pU8_15) goto LAB_1800c427f;
LAB_1800c4230:
                *param_1 = pU8_15 + 1;
                *(byte *)((int64_t)&local_844 + uVal_25 + 1) = *pU8_15;
                uVal_25 = uVal_25 + 2;
                pU8_15 = pU8_15 + 1;
                if (uVal_25 == 4) goto LAB_1800c4293;
              }
              pU8_21 = pU8_15 + 1;
              *param_1 = pU8_21;
              *(byte *)((int64_t)&local_844 + uVal_25) = *pU8_15;
              pU8_15 = pU8_21;
              if (pU8_21 < pU8_14) goto LAB_1800c4230;
LAB_1800c427f:
              *(uint8_t *)((int64_t)&local_844 + uVal_25 + 1) = 0;
              uVal_25 = uVal_25 + 2;
              pU8_15 = pU8_21;
            } while (uVal_25 != 4);
          }
          goto LAB_1800c4293;
        }
LAB_1800c45f8:
        fnPtr_16 = "zlib corrupt";
      }
      else {
        uVal_12 = (uVal_20 - 1 >> 3) + 1;
        uVal_25 = (uint64_t)uVal_12;
        if (uVal_20 < 0x19) {
          uVal_28 = 0;
LAB_1800c41a0:
          uVal_28 = uVal_28 - 1;
          lVal_30 = -(uint64_t)(uVal_12 & 3);
          do {
            *(char *)((int64_t)&local_844 + uVal_28 + 1) = (char)uVal_33;
            uVal_33 = uVal_33 >> 8;
            uVal_28 = uVal_28 + 1;
            lVal_30 = lVal_30 + 1;
          } while (lVal_30 != 0);
          bFlag_34 = uVal_28 < 3;
        }
        else {
          uVal_28 = 0;
          do {
            *(uint *)((int64_t)&local_844 + uVal_28) = uVal_33;
            uVal_28 = uVal_28 + 4;
            uVal_33 = 0;
          } while ((uVal_12 & 0xfffffffc) != uVal_28);
          uVal_33 = 0;
          if ((uint64_t)(uVal_12 & 3) != 0) goto LAB_1800c41a0;
          bFlag_34 = false;
        }
        *(uint *)(param_1 + 3) = uVal_33;
        iVal_13 = (uVal_20 - (uVal_20 - 1 & 0xfffffff8)) + -8;
        *(int *)(param_1 + 2) = iVal_13;
        if (iVal_13 != 0) goto LAB_1800c45f8;
        if (bFlag_34) goto LAB_1800c41ea;
LAB_1800c4293:
        if ((local_844._2_2_ ^ (ushort)local_844) != 0xffff) goto LAB_1800c45f8;
        pU8_15 = *param_1;
        uVal_25 = (uint64_t)(ushort)local_844;
        if (param_1[1] < pU8_15 + uVal_25) {
          fnPtr_16 = "read past buffer";
        }
        else {
          if (param_2 + uVal_25 <= param_1[6]) {
LAB_1800c433c:
            func_0x1806aa960(param_2,pU8_15,uVal_25);
            *param_1 = *param_1 + uVal_25;
            param_2 = param_1[4] + uVal_25;
            param_1[4] = param_2;
LAB_1800c4355:
            if ((uVal_31 & 1) != 0) {
              uVal_32 = 1;
              break;
            }
            iVal_24 = *(int *)(param_1 + 2);
            uVal_31 = (uint64_t)*(uint *)(param_1 + 3);
            iVal_13 = iVal_24;
            if (iVal_24 < 1) goto LAB_1800c43b6;
LAB_1800c440e:
            uVal_25 = uVal_31 >> 1;
            uVal_12 = (uint)uVal_25;
            *(uint *)(param_1 + 3) = uVal_12;
            iVal_13 = iVal_24 + -1;
            *(int *)(param_1 + 2) = iVal_13;
            if (iVal_24 < 3) {
              do {
                uVal_12 = (uint)uVal_25;
                bFlag_26 = (byte)iVal_13 & 0x1f;
                if (uVal_12 >> bFlag_26 != 0) {
                  *param_1 = param_1[1];
                  uVal_33 = uVal_12 >> 2;
                  *(uint *)(param_1 + 3) = uVal_33;
                  uVal_20 = iVal_13 - 2;
                  *(uint *)(param_1 + 2) = uVal_20;
                  uVal_32 = 0;
                  switch(uVal_12 & 3) {
                  case 0:
                    goto switchD_1800c440c_caseD_0;
                  case 1:
                    goto switchD_1800c440c_caseD_1;
                  case 2:
                    goto switchD_1800c440c_caseD_2;
                  }
                  goto switchD_1800c440c_caseD_3;
                }
                pU8_15 = *param_1;
                uVal_20 = 0 >> bFlag_26;
                if (pU8_15 < param_1[1]) {
                  *param_1 = pU8_15 + 1;
                  uVal_20 = (uint)*pU8_15;
                }
                uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_13 & 0x1f);
                uVal_25 = (uint64_t)uVal_12;
                *(uint *)(param_1 + 3) = uVal_12;
                iVal_24 = iVal_13 + 8;
                *(int *)(param_1 + 2) = iVal_24;
                bFlag_34 = iVal_13 < 0x11;
                iVal_13 = iVal_24;
              } while (bFlag_34);
            }
            uVal_33 = uVal_12 >> 2;
            *(uint *)(param_1 + 3) = uVal_33;
            uVal_20 = iVal_13 - 2;
            *(uint *)(param_1 + 2) = uVal_20;
            uVal_32 = 0;
            switch(uVal_12 & 3) {
            case 0:
              goto switchD_1800c440c_caseD_0;
            case 1:
switchD_1800c440c_caseD_1:
              iVal_13 = func_0x1800ef930((int64_t)param_1 + 0x3c,&DAT_1806b3c60,0x120);
              uVal_32 = 0;
              if ((iVal_13 == 0) ||
                 (iVal_13 = func_0x1800ef930(param_1 + 0x104,&DAT_1806b3d80,0x20), iVal_13 == 0))
              goto switchD_1800c440c_caseD_3;
              break;
            case 2:
switchD_1800c440c_caseD_2:
              if (iVal_13 < 7) {
                do {
                  bFlag_26 = (byte)uVal_20 & 0x1f;
                  if (uVal_33 >> bFlag_26 != 0) {
                    *param_1 = param_1[1];
                    break;
                  }
                  pU8_15 = *param_1;
                  uVal_12 = 0 >> bFlag_26;
                  if (pU8_15 < param_1[1]) {
                    *param_1 = pU8_15 + 1;
                    uVal_12 = (uint)*pU8_15;
                  }
                  uVal_33 = uVal_33 | uVal_12 << ((byte)uVal_20 & 0x1f);
                  *(uint *)(param_1 + 3) = uVal_33;
                  uVal_12 = uVal_20 + 8;
                  *(uint *)(param_1 + 2) = uVal_12;
                  bFlag_34 = (int)uVal_20 < 0x11;
                  uVal_20 = uVal_12;
                } while (bFlag_34);
              }
              uVal_12 = uVal_33 >> 5;
              *(uint *)(param_1 + 3) = uVal_12;
              iVal_13 = uVal_20 - 5;
              *(int *)(param_1 + 2) = iVal_13;
              if ((int)uVal_20 < 10) {
                do {
                  bFlag_26 = (byte)iVal_13 & 0x1f;
                  if (uVal_12 >> bFlag_26 != 0) {
                    *param_1 = param_1[1];
                    break;
                  }
                  pU8_15 = *param_1;
                  uVal_20 = 0 >> bFlag_26;
                  if (pU8_15 < param_1[1]) {
                    *param_1 = pU8_15 + 1;
                    uVal_20 = (uint)*pU8_15;
                  }
                  uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_13 & 0x1f);
                  *(uint *)(param_1 + 3) = uVal_12;
                  iVal_24 = iVal_13 + 8;
                  *(int *)(param_1 + 2) = iVal_24;
                  bFlag_34 = iVal_13 < 0x11;
                  iVal_13 = iVal_24;
                } while (bFlag_34);
              }
              uVal_20 = uVal_12 >> 5;
              *(uint *)(param_1 + 3) = uVal_20;
              iVal_24 = iVal_13 + -5;
              *(int *)(param_1 + 2) = iVal_24;
              if (iVal_13 < 9) {
                do {
                  bFlag_26 = (byte)iVal_24 & 0x1f;
                  if (uVal_20 >> bFlag_26 != 0) {
                    *param_1 = param_1[1];
                    break;
                  }
                  pU8_15 = *param_1;
                  uVal_22 = 0 >> bFlag_26;
                  if (pU8_15 < param_1[1]) {
                    *param_1 = pU8_15 + 1;
                    uVal_22 = (uint)*pU8_15;
                  }
                  uVal_20 = uVal_20 | uVal_22 << ((byte)iVal_24 & 0x1f);
                  *(uint *)(param_1 + 3) = uVal_20;
                  iVal_13 = iVal_24 + 8;
                  *(int *)(param_1 + 2) = iVal_13;
                  bFlag_34 = iVal_24 < 0x11;
                  iVal_24 = iVal_13;
                } while (bFlag_34);
              }
              uVal_33 = (uVal_33 & 0x1f) + 0x101;
              iVal_13 = (uVal_12 & 0x1f) + 1;
              uVal_12 = uVal_20 >> 4;
              *(uint *)(param_1 + 3) = uVal_12;
              iVal_24 = iVal_24 + -4;
              *(int *)(param_1 + 2) = iVal_24;
              local_a38 = SUB1615(ZEXT816(0),0);
              uStack_a29 = 0;
              uVal_25 = 0;
              do {
                uVal_22 = uVal_12;
                if (iVal_24 < 3) {
                  do {
                    bFlag_26 = (byte)iVal_24 & 0x1f;
                    if (uVal_12 >> bFlag_26 != 0) {
                      *param_1 = param_1[1];
                      uVal_22 = uVal_12;
                      break;
                    }
                    pU8_15 = *param_1;
                    uVal_22 = 0 >> bFlag_26;
                    if (pU8_15 < param_1[1]) {
                      *param_1 = pU8_15 + 1;
                      uVal_22 = (uint)*pU8_15;
                    }
                    uVal_12 = uVal_12 | uVal_22 << ((byte)iVal_24 & 0x1f);
                    *(uint *)(param_1 + 3) = uVal_12;
                    iVal_19 = iVal_24 + 8;
                    *(int *)(param_1 + 2) = iVal_19;
                    bFlag_34 = iVal_24 < 0x11;
                    uVal_22 = uVal_12;
                    iVal_24 = iVal_19;
                  } while (bFlag_34);
                }
                uVal_12 = uVal_22 >> 3;
                *(uint *)(param_1 + 3) = uVal_12;
                iVal_24 = iVal_24 + -3;
                *(int *)(param_1 + 2) = iVal_24;
                local_a38[(byte)(&DAT_1806b0940)[uVal_25]] = (byte)uVal_22 & 7;
                uVal_25 = uVal_25 + 1;
              } while (uVal_25 != (uVal_20 & 0xf) + 4);
              iVal_24 = func_0x1800ef930(&local_844,local_a38,0x13);
              if (iVal_24 == 0) goto LAB_1800c45b3;
              iVal_24 = uVal_33 + iVal_13;
              iVal_19 = *(int *)(param_1 + 2);
              iVal_23 = 0;
LAB_1800c3d60:
              do {
                if (iVal_19 < 0x10) {
                  pU8_15 = param_1[1];
                  if (*param_1 < pU8_15) {
                    uVal_12 = *(uint *)(param_1 + 3);
                    pU8_14 = *param_1;
                    do {
                      bFlag_26 = (byte)iVal_19 & 0x1f;
                      if (uVal_12 >> bFlag_26 != 0) {
                        *param_1 = pU8_15;
                        break;
                      }
                      uVal_20 = 0 >> bFlag_26;
                      pU8_21 = pU8_14;
                      if (pU8_14 < pU8_15) {
                        pU8_21 = pU8_14 + 1;
                        *param_1 = pU8_21;
                        uVal_20 = (uint)*pU8_14;
                      }
                      uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_19 & 0x1f);
                      *(uint *)(param_1 + 3) = uVal_12;
                      iVal_18 = iVal_19 + 8;
                      *(int *)(param_1 + 2) = iVal_18;
                      bFlag_34 = iVal_19 < 0x11;
                      pU8_14 = pU8_21;
                      iVal_19 = iVal_18;
                    } while (bFlag_34);
                  }
                  else {
                    if (*(int *)((int64_t)param_1 + 0x14) != 0) goto LAB_1800c4541;
                    *(uint32_t *)((int64_t)param_1 + 0x14) = 1;
                    iVal_19 = iVal_19 + 0x10;
                    *(int *)(param_1 + 2) = iVal_19;
                  }
                }
                uVal_12 = *(uint *)(param_1 + 3);
                uVal_11 = *(ushort *)((int64_t)&local_844 + (uint64_t)(uVal_12 & 0x1ff) * 2);
                if (uVal_11 == 0) {
                  uVal_11 = (ushort)uVal_12 << 8 | (ushort)uVal_12 >> 8;
                  uVal_20 = (uVal_11 & 0xf0f0) >> 4 | (uVal_11 & 0xf0f) << 4;
                  uVal_20 = (uVal_20 >> 2 & 0x3333) + (uVal_20 & 0x3333) * 4;
                  uVal_20 = (uVal_20 >> 1 & 0x5555) + (uVal_20 & 0x5555) * 2;
                  lVal_30 = 0;
                  do {
                    lVal_27 = lVal_30;
                    lVal_30 = lVal_27 + 1;
                  } while (aiStack_3fc[lVal_27] <= (int)uVal_20);
                  if (((0xf < lVal_27 + 10U) ||
                      (lVal_29 = (uint64_t)auStack_3ce[lVal_30] +
                                ((uint64_t)(uVal_20 >> (7U - (char)lVal_30 & 0x1f)) -
                                (uint64_t)auStack_432[lVal_30]), 0x11f < (int)lVal_29)) ||
                     ((uint64_t)abStack_3c0[lVal_29] - 9 != lVal_30)) goto LAB_1800c4541;
                  uVal_12 = uVal_12 >> ((byte)(lVal_27 + 10U) & 0x1f);
                  *(uint *)(param_1 + 3) = uVal_12;
                  iVal_19 = (iVal_19 - (int)lVal_30) + -9;
                  *(int *)(param_1 + 2) = iVal_19;
                  uVal_11 = auStack_2a0[lVal_29];
                }
                else {
                  uVal_12 = uVal_12 >> ((byte)(uVal_11 >> 9) & 0x1f);
                  *(uint *)(param_1 + 3) = uVal_12;
                  iVal_19 = iVal_19 - (uint)(uVal_11 >> 9);
                  *(int *)(param_1 + 2) = iVal_19;
                  uVal_11 = uVal_11 & 0x1ff;
                }
                if (0x12 < uVal_11) goto LAB_1800c4541;
                if (uVal_11 < 0x10) {
                  iVal_18 = iVal_23 + 1;
                  auStack_a19[(int64_t)iVal_23 + 1] = (char)uVal_11;
                  iVal_23 = iVal_18;
                  if (iVal_24 <= iVal_18) break;
                  goto LAB_1800c3d60;
                }
                if (uVal_11 == 0x11) {
                  if (iVal_19 < 3) {
                    do {
                      bFlag_26 = (byte)iVal_19 & 0x1f;
                      if (uVal_12 >> bFlag_26 != 0) {
                        *param_1 = param_1[1];
                        break;
                      }
                      pU8_15 = *param_1;
                      uVal_20 = 0 >> bFlag_26;
                      if (pU8_15 < param_1[1]) {
                        *param_1 = pU8_15 + 1;
                        uVal_20 = (uint)*pU8_15;
                      }
                      uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_19 & 0x1f);
                      *(uint *)(param_1 + 3) = uVal_12;
                      iVal_18 = iVal_19 + 8;
                      *(int *)(param_1 + 2) = iVal_18;
                      bFlag_34 = iVal_19 < 0x11;
                      iVal_19 = iVal_18;
                    } while (bFlag_34);
                  }
                  *(uint *)(param_1 + 3) = uVal_12 >> 3;
                  iVal_19 = iVal_19 + -3;
                  *(int *)(param_1 + 2) = iVal_19;
                  iVal_18 = (uVal_12 & 7) + 3;
LAB_1800c40af:
                  uVal_17 = 0;
                }
                else {
                  if (uVal_11 != 0x10) {
                    if (iVal_19 < 7) {
                      do {
                        bFlag_26 = (byte)iVal_19 & 0x1f;
                        if (uVal_12 >> bFlag_26 != 0) {
                          *param_1 = param_1[1];
                          break;
                        }
                        pU8_15 = *param_1;
                        uVal_20 = 0 >> bFlag_26;
                        if (pU8_15 < param_1[1]) {
                          *param_1 = pU8_15 + 1;
                          uVal_20 = (uint)*pU8_15;
                        }
                        uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_19 & 0x1f);
                        *(uint *)(param_1 + 3) = uVal_12;
                        iVal_18 = iVal_19 + 8;
                        *(int *)(param_1 + 2) = iVal_18;
                        bFlag_34 = iVal_19 < 0x11;
                        iVal_19 = iVal_18;
                      } while (bFlag_34);
                    }
                    *(uint *)(param_1 + 3) = uVal_12 >> 7;
                    iVal_19 = iVal_19 + -7;
                    *(int *)(param_1 + 2) = iVal_19;
                    iVal_18 = (uVal_12 & 0x7f) + 0xb;
                    goto LAB_1800c40af;
                  }
                  if (iVal_19 < 2) {
                    do {
                      bFlag_26 = (byte)iVal_19 & 0x1f;
                      if (uVal_12 >> bFlag_26 != 0) {
                        *param_1 = param_1[1];
                        break;
                      }
                      pU8_15 = *param_1;
                      uVal_20 = 0 >> bFlag_26;
                      if (pU8_15 < param_1[1]) {
                        *param_1 = pU8_15 + 1;
                        uVal_20 = (uint)*pU8_15;
                      }
                      uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_19 & 0x1f);
                      *(uint *)(param_1 + 3) = uVal_12;
                      iVal_18 = iVal_19 + 8;
                      *(int *)(param_1 + 2) = iVal_18;
                      bFlag_34 = iVal_19 < 0x11;
                      iVal_19 = iVal_18;
                    } while (bFlag_34);
                  }
                  *(uint *)(param_1 + 3) = uVal_12 >> 2;
                  iVal_19 = iVal_19 + -2;
                  *(int *)(param_1 + 2) = iVal_19;
                  if (iVal_23 == 0) goto LAB_1800c4541;
                  iVal_18 = (uVal_12 & 3) + 3;
                  uVal_17 = auStack_a19[iVal_23];
                }
                if (iVal_24 - iVal_23 < iVal_18) goto LAB_1800c4541;
                func_0x1806ab010(auStack_a19 + (int64_t)iVal_23 + 1,uVal_17,iVal_18);
                iVal_18 = iVal_23 + iVal_18;
                iVal_23 = iVal_18;
              } while (iVal_18 < iVal_24);
              if (iVal_18 != iVal_24) {
LAB_1800c4541:
                lVal_30 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                fnPtr_16 = "bad codelengths";
                goto LAB_1800c45ac;
              }
              iVal_24 = func_0x1800ef930((int64_t)param_1 + 0x3c,auStack_a19 + 1,uVal_33);
              if ((iVal_24 == 0) ||
                 (iVal_13 = func_0x1800ef930(param_1 + 0x104,auStack_a19 + (uint64_t)uVal_33 + 1,iVal_13)
                 , iVal_13 == 0)) goto LAB_1800c45b3;
              break;
            case 3:
              goto switchD_1800c440c_caseD_3;
            }
            param_2 = param_1[4];
LAB_1800c3476:
            iVal_13 = *(int *)(param_1 + 2);
            if (iVal_13 < 0x10) {
              pU8_15 = param_1[1];
              if (*param_1 < pU8_15) {
                uVal_12 = *(uint *)(param_1 + 3);
                pU8_14 = *param_1;
                do {
                  bFlag_26 = (byte)iVal_13 & 0x1f;
                  if (uVal_12 >> bFlag_26 != 0) {
                    *param_1 = pU8_15;
                    break;
                  }
                  uVal_20 = 0 >> bFlag_26;
                  pU8_21 = pU8_14;
                  if (pU8_14 < pU8_15) {
                    pU8_21 = pU8_14 + 1;
                    *param_1 = pU8_21;
                    uVal_20 = (uint)*pU8_14;
                  }
                  uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_13 & 0x1f);
                  *(uint *)(param_1 + 3) = uVal_12;
                  iVal_24 = iVal_13 + 8;
                  *(int *)(param_1 + 2) = iVal_24;
                  bFlag_34 = iVal_13 < 0x11;
                  pU8_14 = pU8_21;
                  iVal_13 = iVal_24;
                } while (bFlag_34);
                goto LAB_1800c34f2;
              }
              if (*(int *)((int64_t)param_1 + 0x14) == 0) {
                *(uint32_t *)((int64_t)param_1 + 0x14) = 1;
                iVal_13 = iVal_13 + 0x10;
                *(int *)(param_1 + 2) = iVal_13;
                goto LAB_1800c34f2;
              }
            }
            else {
LAB_1800c34f2:
              uVal_12 = *(uint *)(param_1 + 3);
              uVal_11 = *(ushort *)((int64_t)param_1 + (uint64_t)(uVal_12 & 0x1ff) * 2 + 0x3c);
              if (uVal_11 == 0) {
                uVal_11 = (ushort)uVal_12 << 8 | (ushort)uVal_12 >> 8;
                uVal_20 = (uVal_11 & 0xf0f0) >> 4 | (uVal_11 & 0xf0f) << 4;
                uVal_20 = (uVal_20 >> 2 & 0x3333) + (uVal_20 & 0x3333) * 4;
                uVal_20 = (uVal_20 >> 1 & 0x5555) + (uVal_20 & 0x5555) * 2;
                lVal_30 = 0;
                do {
                  lVal_27 = lVal_30;
                  lVal_30 = lVal_27 + 1;
                } while (*(int *)((int64_t)param_1 + lVal_27 * 4 + 0x484) <= (int)uVal_20);
                if (((0xf < lVal_27 + 10U) ||
                    (lVal_29 = (uint64_t)*(ushort *)((int64_t)param_1 + lVal_30 * 2 + 0x4b2) +
                              ((uint64_t)(uVal_20 >> (7U - (char)lVal_30 & 0x1f)) -
                              (uint64_t)*(ushort *)((int64_t)param_1 + lVal_30 * 2 + 0x44e)),
                    0x11f < (int)lVal_29)) ||
                   ((uint64_t)*(byte *)((int64_t)param_1 + lVal_29 + 0x4c0) - 9 != lVal_30))
                goto LAB_1800c4566;
                uVal_12 = uVal_12 >> ((byte)(lVal_27 + 10U) & 0x1f);
                *(uint *)(param_1 + 3) = uVal_12;
                iVal_13 = (iVal_13 - (int)lVal_30) + -9;
                *(int *)(param_1 + 2) = iVal_13;
                uVal_20 = (uint)*(ushort *)((int64_t)param_1 + lVal_29 * 2 + 0x5e0);
              }
              else {
                uVal_12 = uVal_12 >> ((byte)(uVal_11 >> 9) & 0x1f);
                *(uint *)(param_1 + 3) = uVal_12;
                iVal_13 = iVal_13 - (uint)(uVal_11 >> 9);
                *(int *)(param_1 + 2) = iVal_13;
                uVal_20 = uVal_11 & 0x1ff;
              }
              if (uVal_20 < 0x100) {
                if (param_1[6] <= param_2) {
                  param_1[4] = param_2;
                  if (*(int *)(param_1 + 7) == 0) goto LAB_1800c45ec;
                  pU8_15 = param_1[5];
                  uVal_12 = (uint)((int64_t)param_2 - (int64_t)pU8_15);
                  if (uVal_12 == 0xffffffff) goto LAB_1800c455d;
                  for (uVal_33 = (int)param_1[6] - (int)pU8_15; uVal_33 <= uVal_12;
                      uVal_33 = uVal_33 * 2) {
                    if ((int)uVal_33 < 0) goto LAB_1800c455d;
                  }
                  pU8_14 = (byte *)_realloc_base(pU8_15,(uint64_t)uVal_33);
                  if (pU8_14 == (byte *)0x0) goto LAB_1800c455d;
                  param_1[5] = pU8_14;
                  param_2 = pU8_14 + ((int64_t)param_2 - (int64_t)pU8_15 & 0xffffffff);
                  param_1[4] = param_2;
                  param_1[6] = pU8_14 + uVal_33;
                }
                *param_2 = (byte)uVal_20;
                param_2 = param_2 + 1;
                goto LAB_1800c3476;
              }
              if (uVal_20 == 0x100) goto LAB_1800c4378;
              if (0x11d < uVal_20) goto LAB_1800c4566;
              uVal_33 = *(uint *)(&DAT_1806b3da0 + (uint64_t)(uVal_20 - 0x101) * 4);
              if (0xffffffeb < uVal_20 - 0x11d) {
                iVal_24 = *(int *)(&DAT_1806b3e20 + (uint64_t)(uVal_20 - 0x101) * 4);
                if (iVal_13 < iVal_24) {
                  do {
                    bFlag_26 = (byte)iVal_13 & 0x1f;
                    if (uVal_12 >> bFlag_26 != 0) {
                      *param_1 = param_1[1];
                      break;
                    }
                    pU8_15 = *param_1;
                    uVal_20 = 0 >> bFlag_26;
                    if (pU8_15 < param_1[1]) {
                      *param_1 = pU8_15 + 1;
                      uVal_20 = (uint)*pU8_15;
                    }
                    uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_13 & 0x1f);
                    *(uint *)(param_1 + 3) = uVal_12;
                    iVal_19 = iVal_13 + 8;
                    *(int *)(param_1 + 2) = iVal_19;
                    bFlag_34 = iVal_13 < 0x11;
                    iVal_13 = iVal_19;
                  } while (bFlag_34);
                }
                uVal_20 = ~(-1 << ((byte)iVal_24 & 0x1f)) & uVal_12;
                uVal_12 = uVal_12 >> ((byte)iVal_24 & 0x1f);
                *(uint *)(param_1 + 3) = uVal_12;
                iVal_13 = iVal_13 - iVal_24;
                *(int *)(param_1 + 2) = iVal_13;
                uVal_33 = uVal_33 + uVal_20;
              }
              if (iVal_13 < 0x10) {
                pU8_15 = param_1[1];
                pU8_14 = *param_1;
                if (*param_1 < pU8_15) {
                  do {
                    bFlag_26 = (byte)iVal_13 & 0x1f;
                    if (uVal_12 >> bFlag_26 != 0) {
                      *param_1 = pU8_15;
                      break;
                    }
                    uVal_20 = 0 >> bFlag_26;
                    pU8_21 = pU8_14;
                    if (pU8_14 < pU8_15) {
                      pU8_21 = pU8_14 + 1;
                      *param_1 = pU8_21;
                      uVal_20 = (uint)*pU8_14;
                    }
                    uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_13 & 0x1f);
                    *(uint *)(param_1 + 3) = uVal_12;
                    iVal_24 = iVal_13 + 8;
                    *(int *)(param_1 + 2) = iVal_24;
                    bFlag_34 = iVal_13 < 0x11;
                    pU8_14 = pU8_21;
                    iVal_13 = iVal_24;
                  } while (bFlag_34);
                }
                else {
                  if (*(int *)((int64_t)param_1 + 0x14) != 0) goto LAB_1800c4566;
                  *(uint32_t *)((int64_t)param_1 + 0x14) = 1;
                  iVal_13 = iVal_13 + 0x10;
                  *(int *)(param_1 + 2) = iVal_13;
                }
              }
              uVal_11 = *(ushort *)((int64_t)param_1 + (uint64_t)(uVal_12 & 0x1ff) * 2 + 0x820);
              if (uVal_11 == 0) {
                uVal_11 = (ushort)uVal_12 << 8 | (ushort)uVal_12 >> 8;
                uVal_20 = uVal_11 >> 4 & 0xf0f | (uVal_11 & 0xf0f) << 4;
                uVal_20 = (uVal_20 >> 2 & 0x3333) + (uVal_20 & 0x3333) * 4;
                uVal_20 = (uVal_20 >> 1 & 0x5555) + (uVal_20 & 0x5555) * 2;
                lVal_30 = 0;
                do {
                  lVal_27 = lVal_30;
                  lVal_30 = lVal_27 + 1;
                } while (*(int *)((int64_t)param_1 + lVal_27 * 4 + 0xc68) <= (int)uVal_20);
                if (((0xf < lVal_27 + 10U) ||
                    (lVal_29 = (uint64_t)*(ushort *)((int64_t)param_1 + lVal_30 * 2 + 0xc96) +
                              ((uint64_t)(uVal_20 >> (7U - (char)lVal_30 & 0x1f)) -
                              (uint64_t)*(ushort *)((int64_t)param_1 + lVal_30 * 2 + 0xc32)),
                    0x11f < (int)lVal_29)) ||
                   ((uint64_t)*(byte *)((int64_t)param_1 + lVal_29 + 0xca4) - 9 != lVal_30))
                goto LAB_1800c4566;
                uVal_12 = uVal_12 >> ((byte)(lVal_27 + 10U) & 0x1f);
                *(uint *)(param_1 + 3) = uVal_12;
                iVal_13 = (iVal_13 - (int)lVal_30) + -9;
                *(int *)(param_1 + 2) = iVal_13;
                uVal_20 = (uint)*(ushort *)((int64_t)param_1 + lVal_29 * 2 + 0xdc4);
              }
              else {
                uVal_12 = uVal_12 >> ((byte)(uVal_11 >> 9) & 0x1f);
                *(uint *)(param_1 + 3) = uVal_12;
                iVal_13 = iVal_13 - (uint)(uVal_11 >> 9);
                *(int *)(param_1 + 2) = iVal_13;
                uVal_20 = uVal_11 & 0x1ff;
              }
              if (uVal_20 < 0x1e) {
                uVal_22 = *(uint *)(&DAT_1806b3ea0 + (uint64_t)uVal_20 * 4);
                if (3 < uVal_20) {
                  iVal_24 = *(int *)(&DAT_1806b3f20 + (uint64_t)uVal_20 * 4);
                  if (iVal_13 < iVal_24) {
                    do {
                      bFlag_26 = (byte)iVal_13 & 0x1f;
                      if (uVal_12 >> bFlag_26 != 0) {
                        *param_1 = param_1[1];
                        break;
                      }
                      pU8_15 = *param_1;
                      uVal_20 = 0 >> bFlag_26;
                      if (pU8_15 < param_1[1]) {
                        *param_1 = pU8_15 + 1;
                        uVal_20 = (uint)*pU8_15;
                      }
                      uVal_12 = uVal_12 | uVal_20 << ((byte)iVal_13 & 0x1f);
                      *(uint *)(param_1 + 3) = uVal_12;
                      iVal_19 = iVal_13 + 8;
                      *(int *)(param_1 + 2) = iVal_19;
                      bFlag_34 = iVal_13 < 0x11;
                      iVal_13 = iVal_19;
                    } while (bFlag_34);
                  }
                  *(uint *)(param_1 + 3) = uVal_12 >> ((byte)iVal_24 & 0x1f);
                  *(int *)(param_1 + 2) = iVal_13 - iVal_24;
                  uVal_22 = uVal_22 + (~(-1 << ((byte)iVal_24 & 0x1f)) & uVal_12);
                }
                pU8_15 = param_1[5];
                uVal_25 = (int64_t)param_2 - (int64_t)pU8_15;
                lVal_30 = (int64_t)(int)uVal_22;
                if ((int64_t)uVal_25 < lVal_30) {
                  fnPtr_16 = "bad dist";
                  goto LAB_1800c456d;
                }
                pU8_14 = param_2;
                if ((int64_t)param_1[6] - (int64_t)param_2 < (int64_t)(int)uVal_33) {
                  param_1[4] = param_2;
                  if (*(int *)(param_1 + 7) == 0) goto LAB_1800c45ec;
                  if (CARRY4((uint)uVal_25,uVal_33)) goto LAB_1800c455d;
                  for (uVal_12 = (int)param_1[6] - (int)pU8_15; uVal_12 < (uint)uVal_25 + uVal_33;
                      uVal_12 = uVal_12 * 2) {
                    if ((int)uVal_12 < 0) goto LAB_1800c455d;
                  }
                  pU8_15 = (byte *)_realloc_base(pU8_15,(uint64_t)uVal_12);
                  if (pU8_15 == (byte *)0x0) goto LAB_1800c455d;
                  param_1[5] = pU8_15;
                  pU8_14 = pU8_15 + (uVal_25 & 0xffffffff);
                  param_1[4] = pU8_14;
                  param_1[6] = pU8_15 + uVal_12;
                }
                pU8_15 = pU8_14 + -lVal_30;
                param_2 = pU8_14;
                if (uVal_22 == 1) {
                  if (uVal_33 != 0) {
                    func_0x1806ab010(pU8_14,*pU8_15,uVal_33);
                    param_2 = pU8_14 + (uint64_t)(uVal_33 - 1) + 1;
                  }
                }
                else if (uVal_33 != 0) {
                  uVal_12 = uVal_33;
                  if ((0x1f < uVal_33) && (0x1f < uVal_22)) {
                    uVal_20 = uVal_33 & 0xffffffe0;
                    uVal_25 = (uint64_t)uVal_20;
                    param_2 = pU8_14 + uVal_25;
                    pU8_15 = pU8_15 + uVal_25;
                    uVal_12 = uVal_33 - uVal_20;
                    uVal_28 = 0;
                    do {
                      pU64_2 = (uint32_t *)(pU8_14 + (uVal_28 - lVal_30));
                      uVal_4 = pU64_2[1];
                      uVal_5 = pU64_2[2];
                      uVal_6 = pU64_2[3];
                      pU64_1 = (uint32_t *)(pU8_14 + uVal_28 + (0x10 - lVal_30));
                      uVal_7 = *pU64_1;
                      uVal_8 = pU64_1[1];
                      uVal_9 = pU64_1[2];
                      uVal_10 = pU64_1[3];
                      pU64_1 = (uint32_t *)(pU8_14 + uVal_28);
                      *pU64_1 = *pU64_2;
                      pU64_1[1] = uVal_4;
                      pU64_1[2] = uVal_5;
                      pU64_1[3] = uVal_6;
                      pU64_1 = (uint32_t *)(pU8_14 + uVal_28 + 0x10);
                      *pU64_1 = uVal_7;
                      pU64_1[1] = uVal_8;
                      pU64_1[2] = uVal_9;
                      pU64_1[3] = uVal_10;
                      uVal_28 = uVal_28 + 0x20;
                    } while (uVal_25 != uVal_28);
                    if (uVal_20 == uVal_33) goto LAB_1800c3476;
                  }
                  uVal_20 = uVal_12;
                  if ((uVal_12 & 7) != 0) {
                    lVal_30 = 0;
                    do {
                      param_2[lVal_30] = pU8_15[lVal_30];
                      lVal_30 = lVal_30 + 1;
                    } while ((uVal_12 & 7) != (uint)lVal_30);
                    param_2 = param_2 + lVal_30;
                    pU8_15 = pU8_15 + lVal_30;
                    uVal_20 = uVal_12 - (uint)lVal_30;
                  }
                  if (6 < uVal_12 - 1) {
                    lVal_30 = 0;
                    do {
                      param_2[lVal_30] = pU8_15[lVal_30];
                      param_2[lVal_30 + 1] = pU8_15[lVal_30 + 1];
                      param_2[lVal_30 + 2] = pU8_15[lVal_30 + 2];
                      param_2[lVal_30 + 3] = pU8_15[lVal_30 + 3];
                      param_2[lVal_30 + 4] = pU8_15[lVal_30 + 4];
                      param_2[lVal_30 + 5] = pU8_15[lVal_30 + 5];
                      param_2[lVal_30 + 6] = pU8_15[lVal_30 + 6];
                      param_2[lVal_30 + 7] = pU8_15[lVal_30 + 7];
                      lVal_30 = lVal_30 + 8;
                    } while (uVal_20 != (uint)lVal_30);
                    param_2 = param_2 + lVal_30;
                  }
                }
                goto LAB_1800c3476;
              }
            }
LAB_1800c4566:
            fnPtr_16 = "bad huffman code";
            goto LAB_1800c456d;
          }
          if (*(int *)(param_1 + 7) == 0) {
LAB_1800c45ec:
            fnPtr_16 = "output buffer limit";
          }
          else {
            pU8_15 = param_1[5];
            uVal_12 = (uint)((int64_t)param_2 - (int64_t)pU8_15);
            if (!CARRY4((uint)(ushort)local_844,uVal_12)) {
              for (uVal_20 = (int)param_1[6] - (int)pU8_15; uVal_20 < (ushort)local_844 + uVal_12;
                  uVal_20 = uVal_20 * 2) {
                if ((int)uVal_20 < 0) goto LAB_1800c455d;
              }
              pU8_14 = (byte *)_realloc_base(pU8_15,(uint64_t)uVal_20);
              if (pU8_14 != (byte *)0x0) {
                param_1[5] = pU8_14;
                param_2 = pU8_14 + ((int64_t)param_2 - (int64_t)pU8_15 & 0xffffffff);
                param_1[4] = param_2;
                param_1[6] = pU8_14 + uVal_20;
                pU8_15 = *param_1;
                goto LAB_1800c433c;
              }
            }
LAB_1800c455d:
            fnPtr_16 = "outofmem";
          }
        }
      }
LAB_1800c456d:
      *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x3010) = fnPtr_16;
      goto LAB_1800c45b3;
    case 1:
      goto switchD_1800c440c_caseD_1;
    case 2:
      goto switchD_1800c440c_caseD_2;
    }
  }
  else {
    pU8_14 = *param_1;
    pU8_21 = param_1[1];
    uVal_12 = 0;
    pU8_15 = pU8_14;
    if (pU8_14 < pU8_21) {
      pU8_15 = pU8_14 + 1;
      *param_1 = pU8_15;
      uVal_12 = (uint)*pU8_14;
    }
    fnPtr_16 = "bad zlib header";
    if (((pU8_15 < pU8_21) && (*param_1 = pU8_15 + 1, pU8_15 + 1 < pU8_21)) &&
       (((uVal_12 << 8 | (uint)*pU8_15) * 0x7bdf & 0xffff) < 0x843)) {
      if ((*pU8_15 & 0x20) == 0) {
        if ((uVal_12 & 0xf) == 8) goto LAB_1800c3418;
        fnPtr_16 = "bad compression";
      }
      else {
        fnPtr_16 = "no preset dict";
      }
    }
    lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
LAB_1800c45ac:
    *(char **)(lVal_30 + 0x3010) = fnPtr_16;
LAB_1800c45b3:
    uVal_32 = 0;
  }
switchD_1800c440c_caseD_3:
  if (DAT_18083cf40 != (local_60 ^ (uint64_t)local_a58)) {
    func_0x180673080(local_60 ^ (uint64_t)local_a58);
    fnPtr_3 = (func_ptr_t )swi(3);
    uVal_32 = (*fnPtr_3)();
    return uVal_32;
  }
  return uVal_32;
LAB_1800c4378:
  param_1[4] = param_2;
  if ((*(int *)((int64_t)param_1 + 0x14) != 0) && (iVal_13 < 0x10)) {
    fnPtr_16 = "unexpected end";
    goto LAB_1800c456d;
  }
  goto LAB_1800c4355;
}

// thunk_FUN_1800c2a40
int64_t thunk_FUN_1800c2a40(char *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, uint32_t param_5)
{
  func_ptr_t fnPtr_1;
  errno_t eVar2;
  int iVal_3;
  int64_t lVal_4;
  uint8_t auStack_148 [32];
  uint32_t uStack_128;
  FILE *apFStack_118 [2];
  uint32_t uStack_108;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  uint8_t *puStack_f8;
  FILE *pFStack_f0;
  uint64_t uStack_e8;
  uint8_t auStack_e0 [128];
  int iStack_60;
  uint8_t *puStack_58;
  uint8_t *puStack_50;
  uint8_t *puStack_48;
  uint8_t *puStack_40;
  uint64_t uStack_38;
  
  uStack_38 = DAT_18083cf40 ^ (uint64_t)auStack_148;
  eVar2 = fopen_s(apFStack_118,param_1,"rb");
  if (apFStack_118[0] == (FILE *)0x0 || eVar2 != 0) {
    *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x3010) = "can\'t fopen";
    lVal_4 = 0;
  }
  else {
    puStack_f8 = PTR_LAB_1806b3a68;
    uStack_108 = PTR_LAB_1806b3a58._0_4_;
    uStack_104 = PTR_LAB_1806b3a58._4_4_;
    uStack_100 = PTR_LAB_1806b3a60._0_4_;
    uStack_fc = PTR_LAB_1806b3a60._4_4_;
    pFStack_f0 = apFStack_118[0];
    uStack_e8 = 0x8000000001;
    iStack_60 = 0;
    puStack_58 = auStack_e0;
    puStack_48 = auStack_e0;
    iVal_3 = (*(func_ptr_t )CONCAT44(PTR_LAB_1806b3a58._4_4_,PTR_LAB_1806b3a58._0_4_))
                      (apFStack_118[0],auStack_e0,0x80);
    iStack_60 = iStack_60 + ((int)puStack_58 - (int)puStack_48);
    if (iVal_3 == 0) {
      uStack_e8 = uStack_e8 & 0xffffffff00000000;
      puStack_50 = auStack_e0 + 1;
      auStack_e0[0] = 0;
    }
    else {
      puStack_50 = auStack_e0 + iVal_3;
    }
    uStack_128 = param_5;
    puStack_58 = auStack_e0;
    puStack_40 = puStack_50;
    lVal_4 = func_0x1800c2bf0(apFStack_118,param_2,param_3,param_4);
    if (lVal_4 != 0) {
      func_0x180682c24(apFStack_118[0],(int)puStack_58 - (int)puStack_50,1);
    }
    func_0x18068a690(apFStack_118[0]);
  }
  if (DAT_18083cf40 == (uStack_38 ^ (uint64_t)auStack_148)) {
    return lVal_4;
  }
  func_0x180673080(uStack_38 ^ (uint64_t)auStack_148);
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_1)();
  return lVal_4;
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

// func_0x1800c4670
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1800c4670(void)
{
  uint *pU64_1;
  int64_t lVal_2;
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  uint8_t local_48 [8];
  uint64_t uStack_40;
  uint64_t local_38;
  uint64_t uStack_30;
  
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083ed24) && (func_0x180672ec0(&DAT_18083ed24), DAT_18083ed24 == -1)) {
    func_0x1806731d0(&LAB_1800c6cb0);
    _Init_thread_footer(&DAT_18083ed24);
  }
  if (DAT_18083ed28 != '\0') {
    return &DAT_18083aaa0;
  }
  DAT_18083ed28 = 1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3110) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0x3110) = 1;
    *(uint8_t *)(lVal_5 + 0x310c) = 1;
    *(uint32_t *)(lVal_5 + 0x3108) = 0xa1e65083;
    func_0x180673140(&LAB_1800efc40);
  }
  lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_5 + 0x3108);
  if (*(char *)(lVal_5 + 0x310c) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xa1d573c5;
    *(uint8_t *)(lVal_5 + 0x310c) = 0;
  }
  _local_48 = (uint8_t  [16])0x0;
  sz_3 = strlen((char *)pU64_1);
  if (-1 < (int64_t)sz_3) {
    if (sz_3 < 0x10) {
      pU64_6 = local_48;
      uVal_7 = 0xf;
    }
    else {
      uVal_4 = sz_3 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_4) {
        uVal_7 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
      }
      else {
        lVal_5 = func_0x180672de0(uVal_7 + 0x28);
        pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_6 + -8) = lVal_5;
      }
      local_48 = (uint8_t  [8])pU64_6;
    }
    local_38 = sz_3;
    uStack_30 = uVal_7;
    func_0x1806aa960(pU64_6,pU64_1,sz_3);
    pU64_6[sz_3] = 0;
    uVal_7 = CONCAT44(DAT_18083aab8._4_4_,(uint32_t)DAT_18083aab8);
    if (0xf < uVal_7) {
      uVal_4 = uVal_7 + 1;
      lVal_5 = DAT_18083aaa0;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(DAT_18083aaa0 + -8);
        if (0x1f < (uint64_t)((DAT_18083aaa0 + -8) - lVal_5)) goto LAB_1800c6c74;
        uVal_4 = uVal_7 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    _DAT_18083aab0 = (uint32_t)local_38;
    uRam000000018083aab4 = local_38._4_4_;
    DAT_18083aab8._0_4_ = (uint32_t)uStack_30;
    DAT_18083aab8._4_4_ = uStack_30._4_4_;
    DAT_18083aaa0 = (int64_t)local_48;
    uRam000000018083aaa8 = uStack_40;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3118) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x3118) = 1;
      *(uint32_t *)(lVal_5 + 0x3114) = 0x1a98272;
      func_0x180673140(&LAB_1800efc60);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_5 + 0x3114);
    if (*(char *)(lVal_5 + 0x3117) == '\x01') {
      *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_5 + 0x3116) << 0x10) ^
                SUB164(_DAT_1806b26c0,0);
    }
    _local_48 = (uint8_t  [16])0x0;
    sz_3 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_3) {
      if (sz_3 < 0x10) {
        pU64_6 = local_48;
        uVal_7 = 0xf;
      }
      else {
        uVal_4 = sz_3 | 0xf;
        uVal_7 = 0x16;
        if (0x16 < uVal_4) {
          uVal_7 = uVal_4;
        }
        if (uVal_4 < 0xfff) {
          pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
        }
        else {
          lVal_5 = func_0x180672de0(uVal_7 + 0x28);
          pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_6 + -8) = lVal_5;
        }
        local_48 = (uint8_t  [8])pU64_6;
      }
      local_38 = sz_3;
      uStack_30 = uVal_7;
      func_0x1806aa960(pU64_6,pU64_1,sz_3);
      pU64_6[sz_3] = 0;
      uVal_7 = CONCAT44(DAT_18083aad8._4_4_,(uint32_t)DAT_18083aad8);
      if (0xf < uVal_7) {
        uVal_4 = uVal_7 + 1;
        lVal_5 = DAT_18083aac0;
        if (0xfff < uVal_4) {
          lVal_5 = *(int64_t *)(DAT_18083aac0 + -8);
          if (0x1f < (uint64_t)((DAT_18083aac0 + -8) - lVal_5)) goto LAB_1800c6c74;
          uVal_4 = uVal_7 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_4);
      }
      _DAT_18083aad0 = (uint32_t)local_38;
      uRam000000018083aad4 = local_38._4_4_;
      DAT_18083aad8._0_4_ = (uint32_t)uStack_30;
      DAT_18083aad8._4_4_ = uStack_30._4_4_;
      DAT_18083aac0 = (int64_t)local_48;
      uRam000000018083aac8 = uStack_40;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3124) == '\0') {
        lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_5 + 0x3124) = 1;
        *(uint8_t *)(lVal_5 + 0x3120) = 1;
        *(uint32_t *)(lVal_5 + 0x311c) = 0xd90e1202;
        func_0x180673140(&LAB_1800efc90);
      }
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_5 + 0x311c);
      if (*(char *)(lVal_5 + 0x3120) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xd93d3145;
        *(uint8_t *)(lVal_5 + 0x3120) = 0;
      }
      _local_48 = (uint8_t  [16])0x0;
      sz_3 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_3) {
        if (sz_3 < 0x10) {
          pU64_6 = local_48;
          uVal_7 = 0xf;
        }
        else {
          uVal_4 = sz_3 | 0xf;
          uVal_7 = 0x16;
          if (0x16 < uVal_4) {
            uVal_7 = uVal_4;
          }
          if (uVal_4 < 0xfff) {
            pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
          }
          else {
            lVal_5 = func_0x180672de0(uVal_7 + 0x28);
            pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_6 + -8) = lVal_5;
          }
          local_48 = (uint8_t  [8])pU64_6;
        }
        local_38 = sz_3;
        uStack_30 = uVal_7;
        func_0x1806aa960(pU64_6,pU64_1,sz_3);
        pU64_6[sz_3] = 0;
        uVal_7 = CONCAT44(DAT_18083aaf8._4_4_,(uint32_t)DAT_18083aaf8);
        if (0xf < uVal_7) {
          uVal_4 = uVal_7 + 1;
          lVal_5 = DAT_18083aae0;
          if (0xfff < uVal_4) {
            lVal_5 = *(int64_t *)(DAT_18083aae0 + -8);
            if (0x1f < (uint64_t)((DAT_18083aae0 + -8) - lVal_5)) goto LAB_1800c6c74;
            uVal_4 = uVal_7 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_4);
        }
        _DAT_18083aaf0 = (uint32_t)local_38;
        uRam000000018083aaf4 = local_38._4_4_;
        DAT_18083aaf8._0_4_ = (uint32_t)uStack_30;
        DAT_18083aaf8._4_4_ = uStack_30._4_4_;
        DAT_18083aae0 = (int64_t)local_48;
        uRam000000018083aae8 = uStack_40;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x312c) == '\0') {
          lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_5 + 0x312c) = 1;
          *(uint32_t *)(lVal_5 + 0x3128) = 0x14d445c;
          func_0x180673140(&LAB_1800efcb0);
        }
        lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint *)(lVal_5 + 0x3128);
        if (*(char *)(lVal_5 + 0x312b) == '\x01') {
          *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_5 + 0x312a) << 0x10) ^
                    SUB164(_DAT_1806b26d0,0);
        }
        _local_48 = (uint8_t  [16])0x0;
        sz_3 = strlen((char *)pU64_1);
        if (-1 < (int64_t)sz_3) {
          if (sz_3 < 0x10) {
            pU64_6 = local_48;
            uVal_7 = 0xf;
          }
          else {
            uVal_4 = sz_3 | 0xf;
            uVal_7 = 0x16;
            if (0x16 < uVal_4) {
              uVal_7 = uVal_4;
            }
            if (uVal_4 < 0xfff) {
              pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
            }
            else {
              lVal_5 = func_0x180672de0(uVal_7 + 0x28);
              pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_6 + -8) = lVal_5;
            }
            local_48 = (uint8_t  [8])pU64_6;
          }
          local_38 = sz_3;
          uStack_30 = uVal_7;
          func_0x1806aa960(pU64_6,pU64_1,sz_3);
          pU64_6[sz_3] = 0;
          uVal_7 = CONCAT44(DAT_18083ab18._4_4_,(uint32_t)DAT_18083ab18);
          if (0xf < uVal_7) {
            uVal_4 = uVal_7 + 1;
            lVal_5 = DAT_18083ab00;
            if (0xfff < uVal_4) {
              lVal_5 = *(int64_t *)(DAT_18083ab00 + -8);
              if (0x1f < (uint64_t)((DAT_18083ab00 + -8) - lVal_5)) goto LAB_1800c6c74;
              uVal_4 = uVal_7 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_5,uVal_4);
          }
          _DAT_18083ab10 = (uint32_t)local_38;
          uRam000000018083ab14 = local_38._4_4_;
          DAT_18083ab18._0_4_ = (uint32_t)uStack_30;
          DAT_18083ab18._4_4_ = uStack_30._4_4_;
          DAT_18083ab00 = (int64_t)local_48;
          uRam000000018083ab08 = uStack_40;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3138)
              == '\0') {
            lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_5 + 0x3138) = 1;
            *(uint8_t *)(lVal_5 + 0x3134) = 1;
            *(uint32_t *)(lVal_5 + 0x3130) = 0x19fcc06c;
            func_0x180673140(&LAB_1800efce0);
          }
          lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_1 = (uint *)(lVal_5 + 0x3130);
          if (*(char *)(lVal_5 + 0x3134) == '\x01') {
            *pU64_1 = *pU64_1 ^ 0x19cfe32d;
            *(uint8_t *)(lVal_5 + 0x3134) = 0;
          }
          _local_48 = (uint8_t  [16])0x0;
          sz_3 = strlen((char *)pU64_1);
          if (-1 < (int64_t)sz_3) {
            if (sz_3 < 0x10) {
              pU64_6 = local_48;
              uVal_7 = 0xf;
            }
            else {
              uVal_4 = sz_3 | 0xf;
              uVal_7 = 0x16;
              if (0x16 < uVal_4) {
                uVal_7 = uVal_4;
              }
              if (uVal_4 < 0xfff) {
                pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
              }
              else {
                lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_6 + -8) = lVal_5;
              }
              local_48 = (uint8_t  [8])pU64_6;
            }
            local_38 = sz_3;
            uStack_30 = uVal_7;
            func_0x1806aa960(pU64_6,pU64_1,sz_3);
            pU64_6[sz_3] = 0;
            uVal_7 = CONCAT44(DAT_18083ab38._4_4_,(uint32_t)DAT_18083ab38);
            if (0xf < uVal_7) {
              uVal_4 = uVal_7 + 1;
              lVal_5 = DAT_18083ab20;
              if (0xfff < uVal_4) {
                lVal_5 = *(int64_t *)(DAT_18083ab20 + -8);
                if (0x1f < (uint64_t)((DAT_18083ab20 + -8) - lVal_5)) goto LAB_1800c6c74;
                uVal_4 = uVal_7 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_5,uVal_4);
            }
            _DAT_18083ab30 = (uint32_t)local_38;
            uRam000000018083ab34 = local_38._4_4_;
            DAT_18083ab38._0_4_ = (uint32_t)uStack_30;
            DAT_18083ab38._4_4_ = uStack_30._4_4_;
            DAT_18083ab20 = (int64_t)local_48;
            uRam000000018083ab28 = uStack_40;
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x3140) == '\0') {
              lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
              ;
              *(uint8_t *)(lVal_5 + 0x3140) = 1;
              *(uint32_t *)(lVal_5 + 0x313c) = 0x1c7ba07;
              func_0x180673140(&LAB_1800efd00);
            }
            lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            pU64_1 = (uint *)(lVal_5 + 0x313c);
            if (*(char *)(lVal_5 + 0x313f) == '\x01') {
              *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_5 + 0x313e) << 0x10) ^
                        SUB164(_DAT_1806b26e0,0);
            }
            _local_48 = (uint8_t  [16])0x0;
            sz_3 = strlen((char *)pU64_1);
            if (-1 < (int64_t)sz_3) {
              if (sz_3 < 0x10) {
                pU64_6 = local_48;
                uVal_7 = 0xf;
              }
              else {
                uVal_4 = sz_3 | 0xf;
                uVal_7 = 0x16;
                if (0x16 < uVal_4) {
                  uVal_7 = uVal_4;
                }
                if (uVal_4 < 0xfff) {
                  pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                }
                else {
                  lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                  pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_6 + -8) = lVal_5;
                }
                local_48 = (uint8_t  [8])pU64_6;
              }
              local_38 = sz_3;
              uStack_30 = uVal_7;
              func_0x1806aa960(pU64_6,pU64_1,sz_3);
              pU64_6[sz_3] = 0;
              uVal_7 = CONCAT44(DAT_18083ab58._4_4_,(uint32_t)DAT_18083ab58);
              if (0xf < uVal_7) {
                uVal_4 = uVal_7 + 1;
                lVal_5 = DAT_18083ab40;
                if (0xfff < uVal_4) {
                  lVal_5 = *(int64_t *)(DAT_18083ab40 + -8);
                  if (0x1f < (uint64_t)((DAT_18083ab40 + -8) - lVal_5)) goto LAB_1800c6c74;
                  uVal_4 = uVal_7 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_5,uVal_4);
              }
              _DAT_18083ab50 = (uint32_t)local_38;
              uRam000000018083ab54 = local_38._4_4_;
              DAT_18083ab58._0_4_ = (uint32_t)uStack_30;
              DAT_18083ab58._4_4_ = uStack_30._4_4_;
              DAT_18083ab40 = (int64_t)local_48;
              uRam000000018083ab48 = uStack_40;
              if (*(char *)(*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                           0x3148) == '\0') {
                lVal_5 = *(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                *(uint8_t *)(lVal_5 + 0x3148) = 1;
                *(uint32_t *)(lVal_5 + 0x3144) = 0x1f3cf74;
                func_0x180673140(&LAB_1800efd30);
              }
              lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
              ;
              pU64_1 = (uint *)(lVal_5 + 0x3144);
              if (*(char *)(lVal_5 + 0x3147) == '\x01') {
                *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_5 + 0x3146) << 0x10) ^
                          SUB164(_DAT_1806b26f0,0);
              }
              _local_48 = (uint8_t  [16])0x0;
              sz_3 = strlen((char *)pU64_1);
              if (-1 < (int64_t)sz_3) {
                if (sz_3 < 0x10) {
                  pU64_6 = local_48;
                  uVal_7 = 0xf;
                }
                else {
                  uVal_4 = sz_3 | 0xf;
                  uVal_7 = 0x16;
                  if (0x16 < uVal_4) {
                    uVal_7 = uVal_4;
                  }
                  if (uVal_4 < 0xfff) {
                    pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                  }
                  else {
                    lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                    pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                    *(int64_t *)(pU64_6 + -8) = lVal_5;
                  }
                  local_48 = (uint8_t  [8])pU64_6;
                }
                local_38 = sz_3;
                uStack_30 = uVal_7;
                func_0x1806aa960(pU64_6,pU64_1,sz_3);
                pU64_6[sz_3] = 0;
                uVal_7 = CONCAT44(DAT_18083ab78._4_4_,(uint32_t)DAT_18083ab78);
                if (0xf < uVal_7) {
                  uVal_4 = uVal_7 + 1;
                  lVal_5 = DAT_18083ab60;
                  if (0xfff < uVal_4) {
                    lVal_5 = *(int64_t *)(DAT_18083ab60 + -8);
                    if (0x1f < (uint64_t)((DAT_18083ab60 + -8) - lVal_5)) goto LAB_1800c6c74;
                    uVal_4 = uVal_7 + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_5,uVal_4);
                }
                _DAT_18083ab70 = (uint32_t)local_38;
                uRam000000018083ab74 = local_38._4_4_;
                DAT_18083ab78._0_4_ = (uint32_t)uStack_30;
                DAT_18083ab78._4_4_ = uStack_30._4_4_;
                DAT_18083ab60 = (int64_t)local_48;
                uRam000000018083ab68 = uStack_40;
                if (*(char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x3154) == '\0') {
                  lVal_5 = *(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  *(uint8_t *)(lVal_5 + 0x3154) = 1;
                  *(uint8_t *)(lVal_5 + 0x3150) = 1;
                  *(uint32_t *)(lVal_5 + 0x314c) = 0x63533676;
                  func_0x180673140(&LAB_1800efd60);
                }
                lVal_5 = *(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                pU64_1 = (uint *)(lVal_5 + 0x314c);
                if (*(char *)(lVal_5 + 0x3150) == '\x01') {
                  *pU64_1 = *pU64_1 ^ 0x63671535;
                  *(uint8_t *)(lVal_5 + 0x3150) = 0;
                }
                _local_48 = (uint8_t  [16])0x0;
                sz_3 = strlen((char *)pU64_1);
                if (-1 < (int64_t)sz_3) {
                  if (sz_3 < 0x10) {
                    pU64_6 = local_48;
                    uVal_7 = 0xf;
                  }
                  else {
                    uVal_4 = sz_3 | 0xf;
                    uVal_7 = 0x16;
                    if (0x16 < uVal_4) {
                      uVal_7 = uVal_4;
                    }
                    if (uVal_4 < 0xfff) {
                      pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                    }
                    else {
                      lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                      pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                      *(int64_t *)(pU64_6 + -8) = lVal_5;
                    }
                    local_48 = (uint8_t  [8])pU64_6;
                  }
                  local_38 = sz_3;
                  uStack_30 = uVal_7;
                  func_0x1806aa960(pU64_6,pU64_1,sz_3);
                  pU64_6[sz_3] = 0;
                  uVal_7 = CONCAT44(DAT_18083ab98._4_4_,(uint32_t)DAT_18083ab98);
                  if (0xf < uVal_7) {
                    uVal_4 = uVal_7 + 1;
                    lVal_5 = DAT_18083ab80;
                    if (0xfff < uVal_4) {
                      lVal_5 = *(int64_t *)(DAT_18083ab80 + -8);
                      if (0x1f < (uint64_t)((DAT_18083ab80 + -8) - lVal_5)) goto LAB_1800c6c74;
                      uVal_4 = uVal_7 + 0x28;
                    }
                    thunk_FUN_180695dd0(lVal_5,uVal_4);
                  }
                  _DAT_18083ab90 = (uint32_t)local_38;
                  uRam000000018083ab94 = local_38._4_4_;
                  DAT_18083ab98._0_4_ = (uint32_t)uStack_30;
                  DAT_18083ab98._4_4_ = uStack_30._4_4_;
                  DAT_18083ab80 = (int64_t)local_48;
                  uRam000000018083ab88 = uStack_40;
                  if (*(char *)(*(int64_t *)
                                 ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                               0x315c) == '\0') {
                    lVal_5 = *(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                    *(uint8_t *)(lVal_5 + 0x315c) = 1;
                    *(uint32_t *)(lVal_5 + 0x3158) = 0x18f67dd;
                    func_0x180673140(&LAB_1800efd80);
                  }
                  lVal_5 = *(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  pU64_1 = (uint *)(lVal_5 + 0x3158);
                  if (*(char *)(lVal_5 + 0x315b) == '\x01') {
                    *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_5 + 0x315a) << 0x10) ^
                              SUB164(_DAT_1806b2700,0);
                  }
                  _local_48 = (uint8_t  [16])0x0;
                  sz_3 = strlen((char *)pU64_1);
                  if (-1 < (int64_t)sz_3) {
                    if (sz_3 < 0x10) {
                      pU64_6 = local_48;
                      uVal_7 = 0xf;
                    }
                    else {
                      uVal_4 = sz_3 | 0xf;
                      uVal_7 = 0x16;
                      if (0x16 < uVal_4) {
                        uVal_7 = uVal_4;
                      }
                      if (uVal_4 < 0xfff) {
                        pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                      }
                      else {
                        lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                        pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                        *(int64_t *)(pU64_6 + -8) = lVal_5;
                      }
                      local_48 = (uint8_t  [8])pU64_6;
                    }
                    local_38 = sz_3;
                    uStack_30 = uVal_7;
                    func_0x1806aa960(pU64_6,pU64_1,sz_3);
                    pU64_6[sz_3] = 0;
                    uVal_7 = CONCAT44(DAT_18083abb8._4_4_,(uint32_t)DAT_18083abb8);
                    if (0xf < uVal_7) {
                      uVal_4 = uVal_7 + 1;
                      lVal_5 = DAT_18083aba0;
                      if (0xfff < uVal_4) {
                        lVal_5 = *(int64_t *)(DAT_18083aba0 + -8);
                        if (0x1f < (uint64_t)((DAT_18083aba0 + -8) - lVal_5)) goto LAB_1800c6c74;
                        uVal_4 = uVal_7 + 0x28;
                      }
                      thunk_FUN_180695dd0(lVal_5,uVal_4);
                    }
                    _DAT_18083abb0 = (uint32_t)local_38;
                    uRam000000018083abb4 = local_38._4_4_;
                    DAT_18083abb8._0_4_ = (uint32_t)uStack_30;
                    DAT_18083abb8._4_4_ = uStack_30._4_4_;
                    DAT_18083aba0 = (int64_t)local_48;
                    uRam000000018083aba8 = uStack_40;
                    if (*(char *)(*(int64_t *)
                                   ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                                 + 0x3168) == '\0') {
                      lVal_5 = *(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                      *(uint8_t *)(lVal_5 + 0x3168) = 1;
                      *(uint8_t *)(lVal_5 + 0x3164) = 1;
                      *(uint32_t *)(lVal_5 + 0x3160) = 0x8529a8a3;
                      func_0x180673140(&LAB_1800efdb0);
                    }
                    lVal_5 = *(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                    pU64_1 = (uint *)(lVal_5 + 0x3160);
                    if (*(char *)(lVal_5 + 0x3164) == '\x01') {
                      *pU64_1 = *pU64_1 ^ 0x851d8be7;
                      *(uint8_t *)(lVal_5 + 0x3164) = 0;
                    }
                    _local_48 = (uint8_t  [16])0x0;
                    sz_3 = strlen((char *)pU64_1);
                    if (-1 < (int64_t)sz_3) {
                      if (sz_3 < 0x10) {
                        pU64_6 = local_48;
                        uVal_7 = 0xf;
                      }
                      else {
                        uVal_4 = sz_3 | 0xf;
                        uVal_7 = 0x16;
                        if (0x16 < uVal_4) {
                          uVal_7 = uVal_4;
                        }
                        if (uVal_4 < 0xfff) {
                          pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                        }
                        else {
                          lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                          pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                          *(int64_t *)(pU64_6 + -8) = lVal_5;
                        }
                        local_48 = (uint8_t  [8])pU64_6;
                      }
                      local_38 = sz_3;
                      uStack_30 = uVal_7;
                      func_0x1806aa960(pU64_6,pU64_1,sz_3);
                      pU64_6[sz_3] = 0;
                      uVal_7 = CONCAT44(DAT_18083abd8._4_4_,(uint32_t)DAT_18083abd8);
                      if (0xf < uVal_7) {
                        uVal_4 = uVal_7 + 1;
                        lVal_5 = DAT_18083abc0;
                        if (0xfff < uVal_4) {
                          lVal_5 = *(int64_t *)(DAT_18083abc0 + -8);
                          if (0x1f < (uint64_t)((DAT_18083abc0 + -8) - lVal_5)) goto LAB_1800c6c74;
                          uVal_4 = uVal_7 + 0x28;
                        }
                        thunk_FUN_180695dd0(lVal_5,uVal_4);
                      }
                      _DAT_18083abd0 = (uint32_t)local_38;
                      uRam000000018083abd4 = local_38._4_4_;
                      DAT_18083abd8._0_4_ = (uint32_t)uStack_30;
                      DAT_18083abd8._4_4_ = uStack_30._4_4_;
                      DAT_18083abc0 = (int64_t)local_48;
                      uRam000000018083abc8 = uStack_40;
                      if (*(char *)(*(int64_t *)
                                     ((int64_t)ThreadLocalStoragePointer +
                                     (uint64_t)_tls_index * 8) + 0x3170) == '\0') {
                        lVal_5 = *(int64_t *)
                                 ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        *(uint8_t *)(lVal_5 + 0x3170) = 1;
                        *(uint32_t *)(lVal_5 + 0x316c) = 0x1936736;
                        func_0x180673140(&LAB_1800efdd0);
                      }
                      lVal_5 = *(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                      pU64_1 = (uint *)(lVal_5 + 0x316c);
                      if (*(char *)(lVal_5 + 0x316f) == '\x01') {
                        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_5 + 0x316e) << 0x10) ^
                                  SUB164(_DAT_1806b2710,0);
                      }
                      _local_48 = (uint8_t  [16])0x0;
                      sz_3 = strlen((char *)pU64_1);
                      if (-1 < (int64_t)sz_3) {
                        if (sz_3 < 0x10) {
                          pU64_6 = local_48;
                          uVal_7 = 0xf;
                        }
                        else {
                          uVal_4 = sz_3 | 0xf;
                          uVal_7 = 0x16;
                          if (0x16 < uVal_4) {
                            uVal_7 = uVal_4;
                          }
                          if (uVal_4 < 0xfff) {
                            pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                          }
                          else {
                            lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                            pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                            *(int64_t *)(pU64_6 + -8) = lVal_5;
                          }
                          local_48 = (uint8_t  [8])pU64_6;
                        }
                        local_38 = sz_3;
                        uStack_30 = uVal_7;
                        func_0x1806aa960(pU64_6,pU64_1,sz_3);
                        pU64_6[sz_3] = 0;
                        uVal_7 = CONCAT44(DAT_18083abf8._4_4_,(uint32_t)DAT_18083abf8);
                        if (0xf < uVal_7) {
                          uVal_4 = uVal_7 + 1;
                          lVal_5 = DAT_18083abe0;
                          if (0xfff < uVal_4) {
                            lVal_5 = *(int64_t *)(DAT_18083abe0 + -8);
                            if (0x1f < (uint64_t)((DAT_18083abe0 + -8) - lVal_5))
                            goto LAB_1800c6c74;
                            uVal_4 = uVal_7 + 0x28;
                          }
                          thunk_FUN_180695dd0(lVal_5,uVal_4);
                        }
                        _DAT_18083abf0 = (uint32_t)local_38;
                        uRam000000018083abf4 = local_38._4_4_;
                        DAT_18083abf8._0_4_ = (uint32_t)uStack_30;
                        DAT_18083abf8._4_4_ = uStack_30._4_4_;
                        DAT_18083abe0 = (int64_t)local_48;
                        uRam000000018083abe8 = uStack_40;
                        if (*(char *)(*(int64_t *)
                                       ((int64_t)ThreadLocalStoragePointer +
                                       (uint64_t)_tls_index * 8) + 0x3178) == '\0') {
                          lVal_5 = *(int64_t *)
                                   ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                          ;
                          *(uint8_t *)(lVal_5 + 0x3178) = 1;
                          *(uint32_t *)(lVal_5 + 0x3174) = 0x17fd371;
                          func_0x180673140(&LAB_1800efe00);
                        }
                        lVal_5 = *(int64_t *)
                                 ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        pU64_1 = (uint *)(lVal_5 + 0x3174);
                        if (*(char *)(lVal_5 + 0x3177) == '\x01') {
                          *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_5 + 0x3176) << 0x10) ^
                                    SUB164(_DAT_1806b2720,0);
                        }
                        _local_48 = (uint8_t  [16])0x0;
                        sz_3 = strlen((char *)pU64_1);
                        if (-1 < (int64_t)sz_3) {
                          if (sz_3 < 0x10) {
                            pU64_6 = local_48;
                            uVal_7 = 0xf;
                          }
                          else {
                            uVal_4 = sz_3 | 0xf;
                            uVal_7 = 0x16;
                            if (0x16 < uVal_4) {
                              uVal_7 = uVal_4;
                            }
                            if (uVal_4 < 0xfff) {
                              pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                            }
                            else {
                              lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                              pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                              *(int64_t *)(pU64_6 + -8) = lVal_5;
                            }
                            local_48 = (uint8_t  [8])pU64_6;
                          }
                          local_38 = sz_3;
                          uStack_30 = uVal_7;
                          func_0x1806aa960(pU64_6,pU64_1,sz_3);
                          pU64_6[sz_3] = 0;
                          uVal_7 = CONCAT44(DAT_18083ac18._4_4_,(uint32_t)DAT_18083ac18);
                          if (0xf < uVal_7) {
                            uVal_4 = uVal_7 + 1;
                            lVal_5 = DAT_18083ac00;
                            if (0xfff < uVal_4) {
                              lVal_5 = *(int64_t *)(DAT_18083ac00 + -8);
                              if (0x1f < (uint64_t)((DAT_18083ac00 + -8) - lVal_5))
                              goto LAB_1800c6c74;
                              uVal_4 = uVal_7 + 0x28;
                            }
                            thunk_FUN_180695dd0(lVal_5,uVal_4);
                          }
                          _DAT_18083ac10 = (uint32_t)local_38;
                          uRam000000018083ac14 = local_38._4_4_;
                          DAT_18083ac18._0_4_ = (uint32_t)uStack_30;
                          DAT_18083ac18._4_4_ = uStack_30._4_4_;
                          DAT_18083ac00 = (int64_t)local_48;
                          uRam000000018083ac08 = uStack_40;
                          if (*(char *)(*(int64_t *)
                                         ((int64_t)ThreadLocalStoragePointer +
                                         (uint64_t)_tls_index * 8) + 0x3184) == '\0') {
                            lVal_5 = *(int64_t *)
                                     ((int64_t)ThreadLocalStoragePointer +
                                     (uint64_t)_tls_index * 8);
                            *(uint8_t *)(lVal_5 + 0x3184) = 1;
                            *(uint8_t *)(lVal_5 + 0x3180) = 1;
                            *(uint32_t *)(lVal_5 + 0x317c) = 0x6b9964df;
                            func_0x180673140(&LAB_1800efe30);
                          }
                          lVal_5 = *(int64_t *)
                                   ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                          ;
                          pU64_1 = (uint *)(lVal_5 + 0x317c);
                          if (*(char *)(lVal_5 + 0x3180) == '\x01') {
                            *pU64_1 = *pU64_1 ^ 0x6bad4799;
                            *(uint8_t *)(lVal_5 + 0x3180) = 0;
                          }
                          _local_48 = (uint8_t  [16])0x0;
                          sz_3 = strlen((char *)pU64_1);
                          if (-1 < (int64_t)sz_3) {
                            if (sz_3 < 0x10) {
                              pU64_6 = local_48;
                              uVal_7 = 0xf;
                            }
                            else {
                              uVal_4 = sz_3 | 0xf;
                              uVal_7 = 0x16;
                              if (0x16 < uVal_4) {
                                uVal_7 = uVal_4;
                              }
                              if (uVal_4 < 0xfff) {
                                pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                              }
                              else {
                                lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                                *(int64_t *)(pU64_6 + -8) = lVal_5;
                              }
                              local_48 = (uint8_t  [8])pU64_6;
                            }
                            local_38 = sz_3;
                            uStack_30 = uVal_7;
                            func_0x1806aa960(pU64_6,pU64_1,sz_3);
                            pU64_6[sz_3] = 0;
                            uVal_7 = CONCAT44(DAT_18083ac38._4_4_,(uint32_t)DAT_18083ac38);
                            if (0xf < uVal_7) {
                              uVal_4 = uVal_7 + 1;
                              lVal_5 = DAT_18083ac20;
                              if (0xfff < uVal_4) {
                                lVal_5 = *(int64_t *)(DAT_18083ac20 + -8);
                                if (0x1f < (uint64_t)((DAT_18083ac20 + -8) - lVal_5))
                                goto LAB_1800c6c74;
                                uVal_4 = uVal_7 + 0x28;
                              }
                              thunk_FUN_180695dd0(lVal_5,uVal_4);
                            }
                            _DAT_18083ac30 = (uint32_t)local_38;
                            uRam000000018083ac34 = local_38._4_4_;
                            DAT_18083ac38._0_4_ = (uint32_t)uStack_30;
                            DAT_18083ac38._4_4_ = uStack_30._4_4_;
                            DAT_18083ac20 = (int64_t)local_48;
                            uRam000000018083ac28 = uStack_40;
                            if (*(char *)(*(int64_t *)
                                           ((int64_t)ThreadLocalStoragePointer +
                                           (uint64_t)_tls_index * 8) + 0x318c) == '\0') {
                              lVal_5 = *(int64_t *)
                                       ((int64_t)ThreadLocalStoragePointer +
                                       (uint64_t)_tls_index * 8);
                              *(uint8_t *)(lVal_5 + 0x318c) = 1;
                              *(uint32_t *)(lVal_5 + 0x3188) = 0x1910fc0;
                              func_0x180673140(&LAB_1800efe50);
                            }
                            lVal_5 = *(int64_t *)
                                     ((int64_t)ThreadLocalStoragePointer +
                                     (uint64_t)_tls_index * 8);
                            pU64_1 = (uint *)(lVal_5 + 0x3188);
                            if (*(char *)(lVal_5 + 0x318b) == '\x01') {
                              *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_5 + 0x318a) << 0x10)
                                        ^ SUB164(_DAT_1806b2730,0);
                            }
                            _local_48 = (uint8_t  [16])0x0;
                            sz_3 = strlen((char *)pU64_1);
                            if (-1 < (int64_t)sz_3) {
                              if (sz_3 < 0x10) {
                                pU64_6 = local_48;
                                uVal_7 = 0xf;
                              }
                              else {
                                uVal_4 = sz_3 | 0xf;
                                uVal_7 = 0x16;
                                if (0x16 < uVal_4) {
                                  uVal_7 = uVal_4;
                                }
                                if (uVal_4 < 0xfff) {
                                  pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                }
                                else {
                                  lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                  pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                                  *(int64_t *)(pU64_6 + -8) = lVal_5;
                                }
                                local_48 = (uint8_t  [8])pU64_6;
                              }
                              local_38 = sz_3;
                              uStack_30 = uVal_7;
                              func_0x1806aa960(pU64_6,pU64_1,sz_3);
                              pU64_6[sz_3] = 0;
                              uVal_7 = CONCAT44(DAT_18083ac58._4_4_,(uint32_t)DAT_18083ac58);
                              if (0xf < uVal_7) {
                                uVal_4 = uVal_7 + 1;
                                lVal_5 = DAT_18083ac40;
                                if (0xfff < uVal_4) {
                                  lVal_5 = *(int64_t *)(DAT_18083ac40 + -8);
                                  if (0x1f < (uint64_t)((DAT_18083ac40 + -8) - lVal_5))
                                  goto LAB_1800c6c74;
                                  uVal_4 = uVal_7 + 0x28;
                                }
                                thunk_FUN_180695dd0(lVal_5,uVal_4);
                              }
                              _DAT_18083ac50 = (uint32_t)local_38;
                              uRam000000018083ac54 = local_38._4_4_;
                              DAT_18083ac58._0_4_ = (uint32_t)uStack_30;
                              DAT_18083ac58._4_4_ = uStack_30._4_4_;
                              DAT_18083ac40 = (int64_t)local_48;
                              uRam000000018083ac48 = uStack_40;
                              if (*(char *)(*(int64_t *)
                                             ((int64_t)ThreadLocalStoragePointer +
                                             (uint64_t)_tls_index * 8) + 0x3198) == '\0') {
                                lVal_5 = *(int64_t *)
                                         ((int64_t)ThreadLocalStoragePointer +
                                         (uint64_t)_tls_index * 8);
                                *(uint8_t *)(lVal_5 + 0x3198) = 1;
                                *(uint8_t *)(lVal_5 + 0x3194) = 1;
                                *(uint32_t *)(lVal_5 + 0x3190) = 0xab31489a;
                                func_0x180673140(&LAB_1800efe80);
                              }
                              lVal_5 = *(int64_t *)
                                       ((int64_t)ThreadLocalStoragePointer +
                                       (uint64_t)_tls_index * 8);
                              pU64_1 = (uint *)(lVal_5 + 0x3190);
                              if (*(char *)(lVal_5 + 0x3194) == '\x01') {
                                *pU64_1 = *pU64_1 ^ 0xab056bdd;
                                *(uint8_t *)(lVal_5 + 0x3194) = 0;
                              }
                              _local_48 = (uint8_t  [16])0x0;
                              sz_3 = strlen((char *)pU64_1);
                              if (-1 < (int64_t)sz_3) {
                                if (sz_3 < 0x10) {
                                  pU64_6 = local_48;
                                  uVal_7 = 0xf;
                                }
                                else {
                                  uVal_4 = sz_3 | 0xf;
                                  uVal_7 = 0x16;
                                  if (0x16 < uVal_4) {
                                    uVal_7 = uVal_4;
                                  }
                                  if (uVal_4 < 0xfff) {
                                    pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                  }
                                  else {
                                    lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                    pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                                    *(int64_t *)(pU64_6 + -8) = lVal_5;
                                  }
                                  local_48 = (uint8_t  [8])pU64_6;
                                }
                                local_38 = sz_3;
                                uStack_30 = uVal_7;
                                func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                pU64_6[sz_3] = 0;
                                uVal_7 = CONCAT44(DAT_18083ac78._4_4_,(uint32_t)DAT_18083ac78);
                                if (0xf < uVal_7) {
                                  uVal_4 = uVal_7 + 1;
                                  lVal_5 = DAT_18083ac60;
                                  if (0xfff < uVal_4) {
                                    lVal_5 = *(int64_t *)(DAT_18083ac60 + -8);
                                    if (0x1f < (uint64_t)((DAT_18083ac60 + -8) - lVal_5))
                                    goto LAB_1800c6c74;
                                    uVal_4 = uVal_7 + 0x28;
                                  }
                                  thunk_FUN_180695dd0(lVal_5,uVal_4);
                                }
                                _DAT_18083ac70 = (uint32_t)local_38;
                                uRam000000018083ac74 = local_38._4_4_;
                                DAT_18083ac78._0_4_ = (uint32_t)uStack_30;
                                DAT_18083ac78._4_4_ = uStack_30._4_4_;
                                DAT_18083ac60 = (int64_t)local_48;
                                uRam000000018083ac68 = uStack_40;
                                if (*(char *)(*(int64_t *)
                                               ((int64_t)ThreadLocalStoragePointer +
                                               (uint64_t)_tls_index * 8) + 0x31a0) == '\0') {
                                  lVal_5 = *(int64_t *)
                                           ((int64_t)ThreadLocalStoragePointer +
                                           (uint64_t)_tls_index * 8);
                                  *(uint8_t *)(lVal_5 + 0x31a0) = 1;
                                  *(uint32_t *)(lVal_5 + 0x319c) = 0x1c981ae;
                                  func_0x180673140(&LAB_1800efea0);
                                }
                                lVal_5 = *(int64_t *)
                                         ((int64_t)ThreadLocalStoragePointer +
                                         (uint64_t)_tls_index * 8);
                                pU64_1 = (uint *)(lVal_5 + 0x319c);
                                if (*(char *)(lVal_5 + 0x319f) == '\x01') {
                                  *pU64_1 = (*pU64_1 & 0xffff |
                                            (uint)*(byte *)(lVal_5 + 0x319e) << 0x10) ^
                                            SUB164(_DAT_1806b2740,0);
                                }
                                _local_48 = (uint8_t  [16])0x0;
                                sz_3 = strlen((char *)pU64_1);
                                if (-1 < (int64_t)sz_3) {
                                  if (sz_3 < 0x10) {
                                    pU64_6 = local_48;
                                    uVal_7 = 0xf;
                                  }
                                  else {
                                    uVal_4 = sz_3 | 0xf;
                                    uVal_7 = 0x16;
                                    if (0x16 < uVal_4) {
                                      uVal_7 = uVal_4;
                                    }
                                    if (uVal_4 < 0xfff) {
                                      pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                    }
                                    else {
                                      lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                      pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                                      *(int64_t *)(pU64_6 + -8) = lVal_5;
                                    }
                                    local_48 = (uint8_t  [8])pU64_6;
                                  }
                                  local_38 = sz_3;
                                  uStack_30 = uVal_7;
                                  func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                  pU64_6[sz_3] = 0;
                                  uVal_7 = CONCAT44(DAT_18083ac98._4_4_,(uint32_t)DAT_18083ac98);
                                  if (0xf < uVal_7) {
                                    uVal_4 = uVal_7 + 1;
                                    lVal_5 = DAT_18083ac80;
                                    if (0xfff < uVal_4) {
                                      lVal_5 = *(int64_t *)(DAT_18083ac80 + -8);
                                      if (0x1f < (uint64_t)((DAT_18083ac80 + -8) - lVal_5))
                                      goto LAB_1800c6c74;
                                      uVal_4 = uVal_7 + 0x28;
                                    }
                                    thunk_FUN_180695dd0(lVal_5,uVal_4);
                                  }
                                  _DAT_18083ac90 = (uint32_t)local_38;
                                  uRam000000018083ac94 = local_38._4_4_;
                                  DAT_18083ac98._0_4_ = (uint32_t)uStack_30;
                                  DAT_18083ac98._4_4_ = uStack_30._4_4_;
                                  DAT_18083ac80 = (int64_t)local_48;
                                  uRam000000018083ac88 = uStack_40;
                                  if (*(char *)(*(int64_t *)
                                                 ((int64_t)ThreadLocalStoragePointer +
                                                 (uint64_t)_tls_index * 8) + 0x31ac) == '\0') {
                                    lVal_5 = *(int64_t *)
                                             ((int64_t)ThreadLocalStoragePointer +
                                             (uint64_t)_tls_index * 8);
                                    *(uint8_t *)(lVal_5 + 0x31ac) = 1;
                                    *(uint8_t *)(lVal_5 + 0x31a8) = 1;
                                    *(uint32_t *)(lVal_5 + 0x31a4) = 0x81d578ac;
                                    func_0x180673140(&LAB_1800efed0);
                                  }
                                  lVal_5 = *(int64_t *)
                                           ((int64_t)ThreadLocalStoragePointer +
                                           (uint64_t)_tls_index * 8);
                                  pU64_1 = (uint *)(lVal_5 + 0x31a4);
                                  if (*(char *)(lVal_5 + 0x31a8) == '\x01') {
                                    *pU64_1 = *pU64_1 ^ 0x81e15bed;
                                    *(uint8_t *)(lVal_5 + 0x31a8) = 0;
                                  }
                                  _local_48 = (uint8_t  [16])0x0;
                                  sz_3 = strlen((char *)pU64_1);
                                  if (-1 < (int64_t)sz_3) {
                                    if (sz_3 < 0x10) {
                                      pU64_6 = local_48;
                                      uVal_7 = 0xf;
                                    }
                                    else {
                                      uVal_4 = sz_3 | 0xf;
                                      uVal_7 = 0x16;
                                      if (0x16 < uVal_4) {
                                        uVal_7 = uVal_4;
                                      }
                                      if (uVal_4 < 0xfff) {
                                        pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                      }
                                      else {
                                        lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                        pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
                                        *(int64_t *)(pU64_6 + -8) = lVal_5;
                                      }
                                      local_48 = (uint8_t  [8])pU64_6;
                                    }
                                    local_38 = sz_3;
                                    uStack_30 = uVal_7;
                                    func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                    pU64_6[sz_3] = 0;
                                    uVal_7 = CONCAT44(DAT_18083acb8._4_4_,(uint32_t)DAT_18083acb8);
                                    if (0xf < uVal_7) {
                                      uVal_4 = uVal_7 + 1;
                                      lVal_5 = DAT_18083aca0;
                                      if (0xfff < uVal_4) {
                                        lVal_5 = *(int64_t *)(DAT_18083aca0 + -8);
                                        if (0x1f < (uint64_t)((DAT_18083aca0 + -8) - lVal_5))
                                        goto LAB_1800c6c74;
                                        uVal_4 = uVal_7 + 0x28;
                                      }
                                      thunk_FUN_180695dd0(lVal_5,uVal_4);
                                    }
                                    _DAT_18083acb0 = (uint32_t)local_38;
                                    uRam000000018083acb4 = local_38._4_4_;
                                    DAT_18083acb8._0_4_ = (uint32_t)uStack_30;
                                    DAT_18083acb8._4_4_ = uStack_30._4_4_;
                                    DAT_18083aca0 = (int64_t)local_48;
                                    uRam000000018083aca8 = uStack_40;
                                    if (*(char *)(*(int64_t *)
                                                   ((int64_t)ThreadLocalStoragePointer +
                                                   (uint64_t)_tls_index * 8) + 0x31b4) == '\0') {
                                      lVal_5 = *(int64_t *)
                                               ((int64_t)ThreadLocalStoragePointer +
                                               (uint64_t)_tls_index * 8);
                                      *(uint8_t *)(lVal_5 + 0x31b4) = 1;
                                      *(uint32_t *)(lVal_5 + 0x31b0) = 0x179a711;
                                      func_0x180673140(&LAB_1800efef0);
                                    }
                                    lVal_5 = *(int64_t *)
                                             ((int64_t)ThreadLocalStoragePointer +
                                             (uint64_t)_tls_index * 8);
                                    pU64_1 = (uint *)(lVal_5 + 0x31b0);
                                    if (*(char *)(lVal_5 + 0x31b3) == '\x01') {
                                      *pU64_1 = (*pU64_1 & 0xffff |
                                                (uint)*(byte *)(lVal_5 + 0x31b2) << 0x10) ^
                                                SUB164(_DAT_1806b2750,0);
                                    }
                                    _local_48 = (uint8_t  [16])0x0;
                                    sz_3 = strlen((char *)pU64_1);
                                    if (-1 < (int64_t)sz_3) {
                                      if (sz_3 < 0x10) {
                                        pU64_6 = local_48;
                                        uVal_7 = 0xf;
                                      }
                                      else {
                                        uVal_4 = sz_3 | 0xf;
                                        uVal_7 = 0x16;
                                        if (0x16 < uVal_4) {
                                          uVal_7 = uVal_4;
                                        }
                                        if (uVal_4 < 0xfff) {
                                          pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                        }
                                        else {
                                          lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                          pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0)
                                          ;
                                          *(int64_t *)(pU64_6 + -8) = lVal_5;
                                        }
                                        local_48 = (uint8_t  [8])pU64_6;
                                      }
                                      local_38 = sz_3;
                                      uStack_30 = uVal_7;
                                      func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                      pU64_6[sz_3] = 0;
                                      uVal_7 = CONCAT44(DAT_18083acd8._4_4_,(uint32_t)DAT_18083acd8
                                                      );
                                      if (0xf < uVal_7) {
                                        uVal_4 = uVal_7 + 1;
                                        lVal_5 = DAT_18083acc0;
                                        if (0xfff < uVal_4) {
                                          lVal_5 = *(int64_t *)(DAT_18083acc0 + -8);
                                          if (0x1f < (uint64_t)((DAT_18083acc0 + -8) - lVal_5))
                                          goto LAB_1800c6c74;
                                          uVal_4 = uVal_7 + 0x28;
                                        }
                                        thunk_FUN_180695dd0(lVal_5,uVal_4);
                                      }
                                      _DAT_18083acd0 = (uint32_t)local_38;
                                      uRam000000018083acd4 = local_38._4_4_;
                                      DAT_18083acd8._0_4_ = (uint32_t)uStack_30;
                                      DAT_18083acd8._4_4_ = uStack_30._4_4_;
                                      DAT_18083acc0 = (int64_t)local_48;
                                      uRam000000018083acc8 = uStack_40;
                                      if (*(char *)(*(int64_t *)
                                                     ((int64_t)ThreadLocalStoragePointer +
                                                     (uint64_t)_tls_index * 8) + 0x31bc) == '\0') {
                                        lVal_5 = *(int64_t *)
                                                 ((int64_t)ThreadLocalStoragePointer +
                                                 (uint64_t)_tls_index * 8);
                                        *(uint8_t *)(lVal_5 + 0x31bc) = 1;
                                        *(uint32_t *)(lVal_5 + 0x31b8) = 0x14d88dc;
                                        func_0x180673140(&LAB_1800eff20);
                                      }
                                      lVal_5 = *(int64_t *)
                                               ((int64_t)ThreadLocalStoragePointer +
                                               (uint64_t)_tls_index * 8);
                                      pU64_1 = (uint *)(lVal_5 + 0x31b8);
                                      if (*(char *)(lVal_5 + 0x31bb) == '\x01') {
                                        *pU64_1 = (*pU64_1 & 0xffff |
                                                  (uint)*(byte *)(lVal_5 + 0x31ba) << 0x10) ^
                                                  SUB164(_DAT_1806b2760,0);
                                      }
                                      _local_48 = (uint8_t  [16])0x0;
                                      sz_3 = strlen((char *)pU64_1);
                                      if (-1 < (int64_t)sz_3) {
                                        if (sz_3 < 0x10) {
                                          pU64_6 = local_48;
                                          uVal_7 = 0xf;
                                        }
                                        else {
                                          uVal_4 = sz_3 | 0xf;
                                          uVal_7 = 0x16;
                                          if (0x16 < uVal_4) {
                                            uVal_7 = uVal_4;
                                          }
                                          if (uVal_4 < 0xfff) {
                                            pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                          }
                                          else {
                                            lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                            pU64_6 = (uint8_t *)
                                                     (lVal_5 + 0x27U & 0xffffffffffffffe0);
                                            *(int64_t *)(pU64_6 + -8) = lVal_5;
                                          }
                                          local_48 = (uint8_t  [8])pU64_6;
                                        }
                                        local_38 = sz_3;
                                        uStack_30 = uVal_7;
                                        func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                        pU64_6[sz_3] = 0;
                                        uVal_7 = CONCAT44(DAT_18083acf8._4_4_,
                                                         (uint32_t)DAT_18083acf8);
                                        if (0xf < uVal_7) {
                                          uVal_4 = uVal_7 + 1;
                                          lVal_5 = DAT_18083ace0;
                                          if (0xfff < uVal_4) {
                                            lVal_5 = *(int64_t *)(DAT_18083ace0 + -8);
                                            if (0x1f < (uint64_t)((DAT_18083ace0 + -8) - lVal_5))
                                            goto LAB_1800c6c74;
                                            uVal_4 = uVal_7 + 0x28;
                                          }
                                          thunk_FUN_180695dd0(lVal_5,uVal_4);
                                        }
                                        _DAT_18083acf0 = (uint32_t)local_38;
                                        uRam000000018083acf4 = local_38._4_4_;
                                        DAT_18083acf8._0_4_ = (uint32_t)uStack_30;
                                        DAT_18083acf8._4_4_ = uStack_30._4_4_;
                                        DAT_18083ace0 = (int64_t)local_48;
                                        uRam000000018083ace8 = uStack_40;
                                        if (*(char *)(*(int64_t *)
                                                       ((int64_t)ThreadLocalStoragePointer +
                                                       (uint64_t)_tls_index * 8) + 0x31c8) == '\0')
                                        {
                                          lVal_5 = *(int64_t *)
                                                   ((int64_t)ThreadLocalStoragePointer +
                                                   (uint64_t)_tls_index * 8);
                                          *(uint8_t *)(lVal_5 + 0x31c8) = 1;
                                          *(uint8_t *)(lVal_5 + 0x31c4) = 1;
                                          *(uint32_t *)(lVal_5 + 0x31c0) = 0x90e6072;
                                          func_0x180673140(&LAB_1800eff50);
                                        }
                                        lVal_5 = *(int64_t *)
                                                 ((int64_t)ThreadLocalStoragePointer +
                                                 (uint64_t)_tls_index * 8);
                                        pU64_1 = (uint *)(lVal_5 + 0x31c0);
                                        if (*(char *)(lVal_5 + 0x31c4) == '\x01') {
                                          *pU64_1 = *pU64_1 ^ 0x93b4331;
                                          *(uint8_t *)(lVal_5 + 0x31c4) = 0;
                                        }
                                        _local_48 = (uint8_t  [16])0x0;
                                        sz_3 = strlen((char *)pU64_1);
                                        if (-1 < (int64_t)sz_3) {
                                          if (sz_3 < 0x10) {
                                            pU64_6 = local_48;
                                            uVal_7 = 0xf;
                                          }
                                          else {
                                            uVal_4 = sz_3 | 0xf;
                                            uVal_7 = 0x16;
                                            if (0x16 < uVal_4) {
                                              uVal_7 = uVal_4;
                                            }
                                            if (uVal_4 < 0xfff) {
                                              pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                            }
                                            else {
                                              lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                              pU64_6 = (uint8_t *)
                                                       (lVal_5 + 0x27U & 0xffffffffffffffe0);
                                              *(int64_t *)(pU64_6 + -8) = lVal_5;
                                            }
                                            local_48 = (uint8_t  [8])pU64_6;
                                          }
                                          local_38 = sz_3;
                                          uStack_30 = uVal_7;
                                          func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                          pU64_6[sz_3] = 0;
                                          uVal_7 = CONCAT44(DAT_18083ad18._4_4_,
                                                           (uint32_t)DAT_18083ad18);
                                          if (0xf < uVal_7) {
                                            uVal_4 = uVal_7 + 1;
                                            lVal_5 = DAT_18083ad00;
                                            if (0xfff < uVal_4) {
                                              lVal_5 = *(int64_t *)(DAT_18083ad00 + -8);
                                              if (0x1f < (uint64_t)((DAT_18083ad00 + -8) - lVal_5))
                                              goto LAB_1800c6c74;
                                              uVal_4 = uVal_7 + 0x28;
                                            }
                                            thunk_FUN_180695dd0(lVal_5,uVal_4);
                                          }
                                          _DAT_18083ad10 = (uint32_t)local_38;
                                          uRam000000018083ad14 = local_38._4_4_;
                                          DAT_18083ad18._0_4_ = (uint32_t)uStack_30;
                                          DAT_18083ad18._4_4_ = uStack_30._4_4_;
                                          DAT_18083ad00 = (int64_t)local_48;
                                          uRam000000018083ad08 = uStack_40;
                                          if (*(char *)(*(int64_t *)
                                                         ((int64_t)ThreadLocalStoragePointer +
                                                         (uint64_t)_tls_index * 8) + 0x31d0) ==
                                              '\0') {
                                            lVal_5 = *(int64_t *)
                                                     ((int64_t)ThreadLocalStoragePointer +
                                                     (uint64_t)_tls_index * 8);
                                            *(uint8_t *)(lVal_5 + 0x31d0) = 1;
                                            *(uint32_t *)(lVal_5 + 0x31cc) = 0x1d19ced;
                                            func_0x180673140(&LAB_1800eff70);
                                          }
                                          lVal_5 = *(int64_t *)
                                                   ((int64_t)ThreadLocalStoragePointer +
                                                   (uint64_t)_tls_index * 8);
                                          pU64_1 = (uint *)(lVal_5 + 0x31cc);
                                          if (*(char *)(lVal_5 + 0x31cf) == '\x01') {
                                            *pU64_1 = (*pU64_1 & 0xffff |
                                                      (uint)*(byte *)(lVal_5 + 0x31ce) << 0x10) ^
                                                      SUB164(_DAT_1806b2770,0);
                                          }
                                          _local_48 = (uint8_t  [16])0x0;
                                          sz_3 = strlen((char *)pU64_1);
                                          if (-1 < (int64_t)sz_3) {
                                            if (sz_3 < 0x10) {
                                              pU64_6 = local_48;
                                              uVal_7 = 0xf;
                                            }
                                            else {
                                              uVal_4 = sz_3 | 0xf;
                                              uVal_7 = 0x16;
                                              if (0x16 < uVal_4) {
                                                uVal_7 = uVal_4;
                                              }
                                              if (uVal_4 < 0xfff) {
                                                pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                              }
                                              else {
                                                lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                                pU64_6 = (uint8_t *)
                                                         (lVal_5 + 0x27U & 0xffffffffffffffe0);
                                                *(int64_t *)(pU64_6 + -8) = lVal_5;
                                              }
                                              local_48 = (uint8_t  [8])pU64_6;
                                            }
                                            local_38 = sz_3;
                                            uStack_30 = uVal_7;
                                            func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                            pU64_6[sz_3] = 0;
                                            uVal_7 = CONCAT44(DAT_18083ad38._4_4_,
                                                             (uint32_t)DAT_18083ad38);
                                            if (0xf < uVal_7) {
                                              uVal_4 = uVal_7 + 1;
                                              lVal_5 = DAT_18083ad20;
                                              if (0xfff < uVal_4) {
                                                lVal_5 = *(int64_t *)(DAT_18083ad20 + -8);
                                                if (0x1f < (uint64_t)((DAT_18083ad20 + -8) - lVal_5)
                                                   ) goto LAB_1800c6c74;
                                                uVal_4 = uVal_7 + 0x28;
                                              }
                                              thunk_FUN_180695dd0(lVal_5,uVal_4);
                                            }
                                            _DAT_18083ad30 = (uint32_t)local_38;
                                            uRam000000018083ad34 = local_38._4_4_;
                                            DAT_18083ad38._0_4_ = (uint32_t)uStack_30;
                                            DAT_18083ad38._4_4_ = uStack_30._4_4_;
                                            DAT_18083ad20 = (int64_t)local_48;
                                            uRam000000018083ad28 = uStack_40;
                                            if (*(char *)(*(int64_t *)
                                                           ((int64_t)ThreadLocalStoragePointer +
                                                           (uint64_t)_tls_index * 8) + 0x31dc) ==
                                                '\0') {
                                              lVal_5 = *(int64_t *)
                                                       ((int64_t)ThreadLocalStoragePointer +
                                                       (uint64_t)_tls_index * 8);
                                              *(uint8_t *)(lVal_5 + 0x31dc) = 1;
                                              *(uint8_t *)(lVal_5 + 0x31d8) = 1;
                                              *(uint32_t *)(lVal_5 + 0x31d4) = 0x1fdabc39;
                                              func_0x180673140(&LAB_1800effa0);
                                            }
                                            lVal_5 = *(int64_t *)
                                                     ((int64_t)ThreadLocalStoragePointer +
                                                     (uint64_t)_tls_index * 8);
                                            pU64_1 = (uint *)(lVal_5 + 0x31d4);
                                            if (*(char *)(lVal_5 + 0x31d8) == '\x01') {
                                              *pU64_1 = *pU64_1 ^ 0x1fef9f7d;
                                              *(uint8_t *)(lVal_5 + 0x31d8) = 0;
                                            }
                                            _local_48 = (uint8_t  [16])0x0;
                                            sz_3 = strlen((char *)pU64_1);
                                            if (-1 < (int64_t)sz_3) {
                                              if (sz_3 < 0x10) {
                                                pU64_6 = local_48;
                                                uVal_7 = 0xf;
                                              }
                                              else {
                                                uVal_4 = sz_3 | 0xf;
                                                uVal_7 = 0x16;
                                                if (0x16 < uVal_4) {
                                                  uVal_7 = uVal_4;
                                                }
                                                if (uVal_4 < 0xfff) {
                                                  pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                                }
                                                else {
                                                  lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                                  pU64_6 = (uint8_t *)
                                                           (lVal_5 + 0x27U & 0xffffffffffffffe0);
                                                  *(int64_t *)(pU64_6 + -8) = lVal_5;
                                                }
                                                local_48 = (uint8_t  [8])pU64_6;
                                              }
                                              local_38 = sz_3;
                                              uStack_30 = uVal_7;
                                              func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                              pU64_6[sz_3] = 0;
                                              uVal_7 = CONCAT44(DAT_18083ad58._4_4_,
                                                               (uint32_t)DAT_18083ad58);
                                              if (0xf < uVal_7) {
                                                uVal_4 = uVal_7 + 1;
                                                lVal_5 = DAT_18083ad40;
                                                if (0xfff < uVal_4) {
                                                  lVal_5 = *(int64_t *)(DAT_18083ad40 + -8);
                                                  if (0x1f < (uint64_t)
                                                             ((DAT_18083ad40 + -8) - lVal_5))
                                                  goto LAB_1800c6c74;
                                                  uVal_4 = uVal_7 + 0x28;
                                                }
                                                thunk_FUN_180695dd0(lVal_5,uVal_4);
                                              }
                                              _DAT_18083ad50 = (uint32_t)local_38;
                                              uRam000000018083ad54 = local_38._4_4_;
                                              DAT_18083ad58._0_4_ = (uint32_t)uStack_30;
                                              DAT_18083ad58._4_4_ = uStack_30._4_4_;
                                              DAT_18083ad40 = (int64_t)local_48;
                                              uRam000000018083ad48 = uStack_40;
                                              if (*(char *)(*(int64_t *)
                                                             ((int64_t)ThreadLocalStoragePointer +
                                                             (uint64_t)_tls_index * 8) + 0x31e4) ==
                                                  '\0') {
                                                lVal_5 = *(int64_t *)
                                                         ((int64_t)ThreadLocalStoragePointer +
                                                         (uint64_t)_tls_index * 8);
                                                *(uint8_t *)(lVal_5 + 0x31e4) = 1;
                                                *(uint32_t *)(lVal_5 + 0x31e0) = 0x1a36c4a;
                                                func_0x180673140(&LAB_1800effc0);
                                              }
                                              lVal_5 = *(int64_t *)
                                                       ((int64_t)ThreadLocalStoragePointer +
                                                       (uint64_t)_tls_index * 8);
                                              pU64_1 = (uint *)(lVal_5 + 0x31e0);
                                              if (*(char *)(lVal_5 + 0x31e3) == '\x01') {
                                                *pU64_1 = (*pU64_1 & 0xffff |
                                                          (uint)*(byte *)(lVal_5 + 0x31e2) << 0x10) ^
                                                          SUB164(_DAT_1806ae010,0);
                                              }
                                              _local_48 = (uint8_t  [16])0x0;
                                              sz_3 = strlen((char *)pU64_1);
                                              if (-1 < (int64_t)sz_3) {
                                                if (sz_3 < 0x10) {
                                                  pU64_6 = local_48;
                                                  uVal_7 = 0xf;
                                                }
                                                else {
                                                  uVal_4 = sz_3 | 0xf;
                                                  uVal_7 = 0x16;
                                                  if (0x16 < uVal_4) {
                                                    uVal_7 = uVal_4;
                                                  }
                                                  if (uVal_4 < 0xfff) {
                                                    pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
                                                  }
                                                  else {
                                                    lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                                    pU64_6 = (uint8_t *)
                                                             (lVal_5 + 0x27U & 0xffffffffffffffe0);
                                                    *(int64_t *)(pU64_6 + -8) = lVal_5;
                                                  }
                                                  local_48 = (uint8_t  [8])pU64_6;
                                                }
                                                local_38 = sz_3;
                                                uStack_30 = uVal_7;
                                                func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                                pU64_6[sz_3] = 0;
                                                uVal_7 = CONCAT44(DAT_18083ad78._4_4_,
                                                                 (uint32_t)DAT_18083ad78);
                                                if (0xf < uVal_7) {
                                                  uVal_4 = uVal_7 + 1;
                                                  lVal_5 = DAT_18083ad60;
                                                  if (0xfff < uVal_4) {
                                                    lVal_5 = *(int64_t *)(DAT_18083ad60 + -8);
                                                    if (0x1f < (uint64_t)
                                                               ((DAT_18083ad60 + -8) - lVal_5))
                                                    goto LAB_1800c6c74;
                                                    uVal_4 = uVal_7 + 0x28;
                                                  }
                                                  thunk_FUN_180695dd0(lVal_5,uVal_4);
                                                }
                                                _DAT_18083ad70 = (uint32_t)local_38;
                                                uRam000000018083ad74 = local_38._4_4_;
                                                DAT_18083ad78._0_4_ = (uint32_t)uStack_30;
                                                DAT_18083ad78._4_4_ = uStack_30._4_4_;
                                                DAT_18083ad60 = (int64_t)local_48;
                                                uRam000000018083ad68 = uStack_40;
                                                if (*(char *)(*(int64_t *)
                                                               ((int64_t)ThreadLocalStoragePointer
                                                               + (uint64_t)_tls_index * 8) + 0x31ec
                                                             ) == '\0') {
                                                  lVal_5 = *(int64_t *)
                                                           ((int64_t)ThreadLocalStoragePointer +
                                                           (uint64_t)_tls_index * 8);
                                                  *(uint8_t *)(lVal_5 + 0x31ec) = 1;
                                                  *(uint32_t *)(lVal_5 + 0x31e8) = 0x1094e3d;
                                                  func_0x180673140(&LAB_1800efff0);
                                                }
                                                lVal_5 = *(int64_t *)
                                                         ((int64_t)ThreadLocalStoragePointer +
                                                         (uint64_t)_tls_index * 8);
                                                pU64_1 = (uint *)(lVal_5 + 0x31e8);
                                                if (*(char *)(lVal_5 + 0x31eb) == '\x01') {
                                                  *pU64_1 = (*pU64_1 & 0xffff |
                                                            (uint)*(byte *)(lVal_5 + 0x31ea) << 0x10)
                                                            ^ SUB164(_DAT_1806b2780,0);
                                                }
                                                _local_48 = (uint8_t  [16])0x0;
                                                sz_3 = strlen((char *)pU64_1);
                                                if (-1 < (int64_t)sz_3) {
                                                  if (sz_3 < 0x10) {
                                                    pU64_6 = local_48;
                                                    uVal_7 = 0xf;
                                                  }
                                                  else {
                                                    uVal_4 = sz_3 | 0xf;
                                                    uVal_7 = 0x16;
                                                    if (0x16 < uVal_4) {
                                                      uVal_7 = uVal_4;
                                                    }
                                                    if (uVal_4 < 0xfff) {
                                                      pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1)
                                                      ;
                                                    }
                                                    else {
                                                      lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                                      pU64_6 = (uint8_t *)
                                                               (lVal_5 + 0x27U & 0xffffffffffffffe0);
                                                      *(int64_t *)(pU64_6 + -8) = lVal_5;
                                                    }
                                                    local_48 = (uint8_t  [8])pU64_6;
                                                  }
                                                  local_38 = sz_3;
                                                  uStack_30 = uVal_7;
                                                  func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                                  pU64_6[sz_3] = 0;
                                                  uVal_7 = CONCAT44(DAT_18083ad98._4_4_,
                                                                   (uint32_t)DAT_18083ad98);
                                                  if (0xf < uVal_7) {
                                                    uVal_4 = uVal_7 + 1;
                                                    lVal_5 = DAT_18083ad80;
                                                    if (0xfff < uVal_4) {
                                                      lVal_5 = *(int64_t *)(DAT_18083ad80 + -8);
                                                      if (0x1f < (uint64_t)
                                                                 ((DAT_18083ad80 + -8) - lVal_5))
                                                      goto LAB_1800c6c74;
                                                      uVal_4 = uVal_7 + 0x28;
                                                    }
                                                    thunk_FUN_180695dd0(lVal_5,uVal_4);
                                                  }
                                                  _DAT_18083ad90 = (uint32_t)local_38;
                                                  uRam000000018083ad94 = local_38._4_4_;
                                                  DAT_18083ad98._0_4_ = (uint32_t)uStack_30;
                                                  DAT_18083ad98._4_4_ = uStack_30._4_4_;
                                                  DAT_18083ad80 = (int64_t)local_48;
                                                  uRam000000018083ad88 = uStack_40;
                                                  if (*(char *)(*(int64_t *)
                                                                 ((int64_t)
                                                                  ThreadLocalStoragePointer +
                                                                 (uint64_t)_tls_index * 8) + 0x31f8
                                                               ) == '\0') {
                                                    lVal_5 = *(int64_t *)
                                                             ((int64_t)ThreadLocalStoragePointer +
                                                             (uint64_t)_tls_index * 8);
                                                    *(uint8_t *)(lVal_5 + 0x31f8) = 1;
                                                    *(uint8_t *)(lVal_5 + 0x31f4) = 1;
                                                    *(uint32_t *)(lVal_5 + 0x31f0) = 0x7b5022ef;
                                                    func_0x180673140(&LAB_1800f0020);
                                                  }
                                                  lVal_5 = *(int64_t *)
                                                           ((int64_t)ThreadLocalStoragePointer +
                                                           (uint64_t)_tls_index * 8);
                                                  pU64_1 = (uint *)(lVal_5 + 0x31f0);
                                                  if (*(char *)(lVal_5 + 0x31f4) == '\x01') {
                                                    *pU64_1 = *pU64_1 ^ 0x7b6501a9;
                                                    *(uint8_t *)(lVal_5 + 0x31f4) = 0;
                                                  }
                                                  _local_48 = (uint8_t  [16])0x0;
                                                  sz_3 = strlen((char *)pU64_1);
                                                  if (-1 < (int64_t)sz_3) {
                                                    if (sz_3 < 0x10) {
                                                      pU64_6 = local_48;
                                                      uVal_7 = 0xf;
                                                    }
                                                    else {
                                                      uVal_4 = sz_3 | 0xf;
                                                      uVal_7 = 0x16;
                                                      if (0x16 < uVal_4) {
                                                        uVal_7 = uVal_4;
                                                      }
                                                      if (uVal_4 < 0xfff) {
                                                        pU64_6 = (uint8_t *)
                                                                 func_0x180672de0(uVal_7 + 1);
                                                      }
                                                      else {
                                                        lVal_5 = func_0x180672de0(uVal_7 + 0x28);
                                                        pU64_6 = (uint8_t *)
                                                                 (lVal_5 + 0x27U & 0xffffffffffffffe0
                                                                 );
                                                        *(int64_t *)(pU64_6 + -8) = lVal_5;
                                                      }
                                                      local_48 = (uint8_t  [8])pU64_6;
                                                    }
                                                    local_38 = sz_3;
                                                    uStack_30 = uVal_7;
                                                    func_0x1806aa960(pU64_6,pU64_1,sz_3);
                                                    pU64_6[sz_3] = 0;
                                                    uVal_7 = CONCAT44(DAT_18083adb8._4_4_,
                                                                     (uint32_t)DAT_18083adb8);
                                                    if (0xf < uVal_7) {
                                                      lVal_2 = CONCAT44(DAT_18083ada0._4_4_,
                                                                       (uint32_t)DAT_18083ada0);
                                                      uVal_4 = uVal_7 + 1;
                                                      lVal_5 = lVal_2;
                                                      if (0xfff < uVal_4) {
                                                        lVal_5 = *(int64_t *)(lVal_2 + -8);
                                                        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_5)
                                                           ) goto LAB_1800c6c74;
                                                        uVal_4 = uVal_7 + 0x28;
                                                      }
                                                      thunk_FUN_180695dd0(lVal_5,uVal_4);
                                                    }
                                                    DAT_18083ada0._0_4_ = local_48._0_4_;
                                                    DAT_18083ada0._4_4_ = local_48._4_4_;
                                                    uRam000000018083ada8 = (uint32_t)uStack_40;
                                                    uRam000000018083adac = uStack_40._4_4_;
                                                    DAT_18083adb0._0_4_ = (uint32_t)local_38;
                                                    DAT_18083adb0._4_4_ = local_38._4_4_;
                                                    DAT_18083adb8._0_4_ = (uint32_t)uStack_30;
                                                    DAT_18083adb8._4_4_ = uStack_30._4_4_;
                                                    return &DAT_18083aaa0;
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
      }
    }
  }
  func_0x18007ba70();
LAB_1800c6c74:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x1800c6d40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1800c6d40(void)
{
  uint *pU64_1;
  func_ptr_t fnPtr_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  uint8_t auArr_18 [16];
  uint8_t auArr_19 [16];
  uint8_t auArr_20 [16];
  uint8_t auArr_21 [16];
  uint8_t auArr_22 [16];
  uint8_t auArr_23 [16];
  uint8_t auArr_24 [16];
  uint8_t auArr_25 [16];
  uint8_t auArr_26 [16];
  uint8_t auArr_27 [16];
  uint8_t auArr_28 [16];
  uint8_t auArr_29 [16];
  uint8_t auArr_30 [16];
  uint8_t auArr_31 [16];
  uint8_t auArr_32 [16];
  uint8_t auArr_33 [16];
  uint8_t auArr_34 [16];
  uint8_t auArr_35 [16];
  uint8_t auArr_36 [16];
  uint8_t auArr_37 [16];
  uint8_t auArr_38 [16];
  uint8_t auArr_39 [16];
  uint8_t auArr_40 [16];
  uint8_t auArr_41 [16];
  uint8_t auArr_42 [16];
  uint8_t auArr_43 [16];
  uint8_t auArr_44 [16];
  uint8_t auArr_45 [16];
  uint8_t auArr_46 [16];
  uint8_t auArr_47 [16];
  uint8_t auArr_48 [16];
  uint64_t uVal_49;
  uint32_t uVal_50;
  uint32_t uVal_51;
  uint32_t uVal_52;
  uint32_t uVal_53;
  uint64_t uVal_54;
  uint32_t uVal_55;
  uint32_t uVal_56;
  uint32_t uVal_57;
  uint32_t uVal_58;
  size_t sz_59;
  uint64_t uVal_60;
  uint64_t uVal_61;
  int64_t lVal_62;
  uint64_t *pU64_63;
  int64_t lVal_64;
  int64_t lVal_65;
  uint8_t *pU64_66;
  uint64_t uVal_67;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083ed2c) && (func_0x180672ec0(&DAT_18083ed2c), DAT_18083ed2c == -1)) {
    func_0x1806731d0(&LAB_1800cc620);
    _Init_thread_footer(&DAT_18083ed2c);
  }
  if (DAT_18083ed30 != '\0') {
    return &DAT_18083adc0;
  }
  DAT_18083ed30 = 1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3204) == '\0') {
    lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_62 + 0x3204) = 1;
    *(uint8_t *)(lVal_62 + 0x3202) = 1;
    *(uint32_t *)(lVal_62 + 0x31fc) = 0x98e27ff7;
    *(uint16_t *)(lVal_62 + 0x3200) = 0xfbba;
    func_0x180673140(&LAB_1800f0040);
  }
  lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_62 + 0x31fc);
  if (*(char *)(lVal_62 + 0x3202) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0x377b9db1;
    *(byte *)(lVal_62 + 0x3200) = *(byte *)(lVal_62 + 0x3200) ^ 0x89;
    *(byte *)(lVal_62 + 0x3201) = *(byte *)(lVal_62 + 0x3201) ^ 0xfb;
    *(uint8_t *)(lVal_62 + 0x3202) = 0;
  }
  _local_78 = (uint8_t  [16])0x0;
  sz_59 = strlen((char *)pU64_1);
  if (-1 < (int64_t)sz_59) {
    if (sz_59 < 0x10) {
      pU64_66 = local_78;
      uVal_67 = 0xf;
    }
    else {
      uVal_61 = sz_59 | 0xf;
      uVal_67 = 0x16;
      if (0x16 < uVal_61) {
        uVal_67 = uVal_61;
      }
      if (uVal_61 < 0xfff) {
        pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
      }
      else {
        lVal_62 = func_0x180672de0(uVal_67 + 0x28);
        pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_66 + -8) = lVal_62;
      }
      local_78 = (uint8_t  [8])pU64_66;
    }
    local_68 = sz_59;
    local_60 = uVal_67;
    func_0x1806aa960(pU64_66,pU64_1,sz_59);
    pU64_66[sz_59] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3210) == '\0') {
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_62 + 0x3210) = 1;
      *(uint8_t *)(lVal_62 + 0x320e) = 1;
      *(uint32_t *)(lVal_62 + 0x3208) = 0x9ae27ff6;
      *(uint16_t *)(lVal_62 + 0x320c) = 0xfbba;
      func_0x180673140(&LAB_1800f0070);
    }
    lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_62 + 0x3208);
    if (*(char *)(lVal_62 + 0x320e) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x377b9db1;
      *(byte *)(lVal_62 + 0x320c) = *(byte *)(lVal_62 + 0x320c) ^ 0x89;
      *(byte *)(lVal_62 + 0x320d) = *(byte *)(lVal_62 + 0x320d) ^ 0xfb;
      *(uint8_t *)(lVal_62 + 0x320e) = 0;
    }
    _local_98 = (uint8_t  [16])0x0;
    sz_59 = strlen((char *)pU64_1);
    if ((int64_t)sz_59 < 0) {
      func_0x18007ba70();
LAB_1800cbf49:
      func_0x18007ba70();
LAB_1800cbf4f:
      func_0x18007ba70();
LAB_1800cbf55:
      func_0x18007ba70();
LAB_1800cbf5b:
      func_0x18007ba70();
LAB_1800cbf61:
      func_0x18007ba70();
LAB_1800cbf67:
      func_0x18007ba70();
LAB_1800cbf6d:
      func_0x18007ba70();
LAB_1800cbf73:
      func_0x18007ba70();
LAB_1800cbf79:
      func_0x18007ba70();
LAB_1800cbf7f:
      func_0x18007ba70();
LAB_1800cbf85:
      func_0x18007ba70();
LAB_1800cbf8b:
      func_0x18007ba70();
LAB_1800cbf91:
      func_0x18007ba70();
LAB_1800cbf97:
      func_0x18007ba70();
LAB_1800cbf9d:
      func_0x18007ba70();
LAB_1800cbfa3:
      func_0x18007ba70();
LAB_1800cbfa9:
      func_0x18007ba70();
LAB_1800cbfaf:
      func_0x18007ba70();
LAB_1800cbfb5:
      func_0x18007ba70();
LAB_1800cbfbb:
      func_0x18007ba70();
LAB_1800cbfc1:
      func_0x18007ba70();
LAB_1800cbfc7:
      func_0x18007ba70();
LAB_1800cbfcd:
      func_0x18007ba70();
LAB_1800cbfd3:
      func_0x18007ba70();
      fnPtr_2 = (func_ptr_t )swi(3);
      pU64_63 = (uint64_t *)(*fnPtr_2)();
      return pU64_63;
    }
    if (sz_59 < 0x10) {
      pU64_66 = local_98;
      uVal_67 = 0xf;
    }
    else {
      uVal_61 = sz_59 | 0xf;
      uVal_67 = 0x16;
      if (0x16 < uVal_61) {
        uVal_67 = uVal_61;
      }
      if (uVal_61 < 0xfff) {
        pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
      }
      else {
        lVal_62 = func_0x180672de0(uVal_67 + 0x28);
        pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_66 + -8) = lVal_62;
      }
      local_98 = (uint8_t  [8])pU64_66;
    }
    local_88 = sz_59;
    local_80 = uVal_67;
    func_0x1806aa960(pU64_66,pU64_1,sz_59);
    pU64_66[sz_59] = 0;
    uVal_61 = local_60;
    uVal_67 = local_80;
    lVal_65 = (int64_t)local_78;
    uVal_55 = (uint32_t)uStack_70;
    uVal_56 = uStack_70._4_4_;
    uVal_57 = (uint32_t)local_68;
    uVal_58 = local_68._4_4_;
    local_68 = 0;
    local_60 = 0xf;
    auArr_3[15] = 0;
    auArr_3._0_15_ = stack0xffffffffffffff89;
    _local_78 = auArr_3 << 8;
    lVal_62 = (int64_t)local_98;
    uVal_50 = (uint32_t)uStack_90;
    uVal_51 = uStack_90._4_4_;
    uVal_52 = (uint32_t)local_88;
    uVal_53 = local_88._4_4_;
    local_88 = 0;
    local_80 = 0xf;
    auArr_4[15] = 0;
    auArr_4._0_15_ = stack0xffffffffffffff69;
    _local_98 = auArr_4 << 8;
    if (0xf < DAT_18083add8) {
      uVal_60 = DAT_18083add8 + 1;
      lVal_64 = DAT_18083adc0;
      if (0xfff < uVal_60) {
        lVal_64 = *(int64_t *)(DAT_18083adc0 + -8);
        if (0x1f < (uint64_t)((DAT_18083adc0 + -8) - lVal_64)) goto LAB_1800cbf0b;
        uVal_60 = DAT_18083add8 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_64,uVal_60);
    }
    DAT_18083adc0 = lVal_65;
    _DAT_18083adc8 = uVal_55;
    uRam000000018083adcc = uVal_56;
    uRam000000018083add0 = uVal_57;
    uRam000000018083add4 = uVal_58;
    DAT_18083add8 = uVal_61;
    if (0xf < DAT_18083adf8) {
      uVal_61 = DAT_18083adf8 + 1;
      lVal_65 = DAT_18083ade0;
      if (0xfff < uVal_61) {
        lVal_65 = *(int64_t *)(DAT_18083ade0 + -8);
        if (0x1f < (uint64_t)((DAT_18083ade0 + -8) - lVal_65)) goto LAB_1800cbf0b;
        uVal_61 = DAT_18083adf8 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_65,uVal_61);
    }
    DAT_18083ade0 = lVal_62;
    _DAT_18083ade8 = uVal_50;
    uRam000000018083adec = uVal_51;
    uRam000000018083adf0 = uVal_52;
    uRam000000018083adf4 = uVal_53;
    DAT_18083adf8 = uVal_67;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3218) == '\0') {
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_62 + 0x3218) = 1;
      *(uint32_t *)(lVal_62 + 0x3214) = 0x15562c8;
      func_0x180673140(&LAB_1800f00a0);
    }
    lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_62 + 0x3214);
    if (*(char *)(lVal_62 + 0x3217) == '\x01') {
      *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x3216) << 0x10) ^
                SUB164(_DAT_1806b2790,0);
    }
    _local_78 = (uint8_t  [16])0x0;
    sz_59 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_59) {
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3220) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3220) = 1;
        *(uint32_t *)(lVal_62 + 0x321c) = 0x15562c8;
        func_0x180673140(&LAB_1800f00d0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x321c);
      if (*(char *)(lVal_62 + 0x321f) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x321e) << 0x10) ^
                  SUB164(_DAT_1806b2790,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf49;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_5[15] = 0;
      auArr_5._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_5 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_6[15] = 0;
      auArr_6._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_6 << 8;
      if (0xf < DAT_18083ae18) {
        uVal_60 = DAT_18083ae18 + 1;
        lVal_64 = DAT_18083ae00;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083ae00 + -8);
          if (0x1f < (uint64_t)((DAT_18083ae00 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083ae18 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083ae00 = lVal_65;
      _DAT_18083ae08 = uVal_55;
      uRam000000018083ae0c = uVal_56;
      uRam000000018083ae10 = uVal_57;
      uRam000000018083ae14 = uVal_58;
      DAT_18083ae18 = uVal_61;
      if (0xf < DAT_18083ae38) {
        uVal_61 = DAT_18083ae38 + 1;
        lVal_65 = DAT_18083ae20;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083ae20 + -8);
          if (0x1f < (uint64_t)((DAT_18083ae20 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083ae38 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083ae20 = lVal_62;
      _DAT_18083ae28 = uVal_50;
      uRam000000018083ae2c = uVal_51;
      uRam000000018083ae30 = uVal_52;
      uRam000000018083ae34 = uVal_53;
      DAT_18083ae38 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x322c) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x322c) = 1;
        *(uint8_t *)(lVal_62 + 0x322a) = 1;
        *(uint32_t *)(lVal_62 + 0x3224) = 0x6a06fb88;
        *(uint16_t *)(lVal_62 + 0x3228) = 0x43b0;
        func_0x180673140(&LAB_1800f0100);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3224);
      if (*(char *)(lVal_62 + 0x322a) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xc59f19cf;
        *(byte *)(lVal_62 + 0x3228) = *(byte *)(lVal_62 + 0x3228) ^ 0x83;
        *(byte *)(lVal_62 + 0x3229) = *(byte *)(lVal_62 + 0x3229) ^ 0x43;
        *(uint8_t *)(lVal_62 + 0x322a) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3238) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3238) = 1;
        *(uint8_t *)(lVal_62 + 0x3236) = 1;
        *(uint32_t *)(lVal_62 + 0x3230) = 0x6806fb8e;
        *(uint16_t *)(lVal_62 + 0x3234) = 0x43b0;
        func_0x180673140(&LAB_1800f0130);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3230);
      if (*(char *)(lVal_62 + 0x3236) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xc59f19cf;
        *(byte *)(lVal_62 + 0x3234) = *(byte *)(lVal_62 + 0x3234) ^ 0x83;
        *(byte *)(lVal_62 + 0x3235) = *(byte *)(lVal_62 + 0x3235) ^ 0x43;
        *(uint8_t *)(lVal_62 + 0x3236) = 0;
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf4f;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_7[15] = 0;
      auArr_7._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_7 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_8[15] = 0;
      auArr_8._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_8 << 8;
      if (0xf < DAT_18083ae58) {
        uVal_60 = DAT_18083ae58 + 1;
        lVal_64 = DAT_18083ae40;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083ae40 + -8);
          if (0x1f < (uint64_t)((DAT_18083ae40 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083ae58 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083ae40 = lVal_65;
      _DAT_18083ae48 = uVal_55;
      uRam000000018083ae4c = uVal_56;
      uRam000000018083ae50 = uVal_57;
      uRam000000018083ae54 = uVal_58;
      DAT_18083ae58 = uVal_61;
      if (0xf < DAT_18083ae78) {
        uVal_61 = DAT_18083ae78 + 1;
        lVal_65 = DAT_18083ae60;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083ae60 + -8);
          if (0x1f < (uint64_t)((DAT_18083ae60 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083ae78 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083ae60 = lVal_62;
      _DAT_18083ae68 = uVal_50;
      uRam000000018083ae6c = uVal_51;
      uRam000000018083ae70 = uVal_52;
      uRam000000018083ae74 = uVal_53;
      DAT_18083ae78 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3240) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3240) = 1;
        *(uint32_t *)(lVal_62 + 0x323c) = 0x1f3e6b0;
        func_0x180673140(&LAB_1800f0160);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x323c);
      if (*(char *)(lVal_62 + 0x323f) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x323e) << 0x10) ^
                  SUB164(_DAT_1806ae3b0,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3248) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3248) = 1;
        *(uint32_t *)(lVal_62 + 0x3244) = 0x1f3e6b0;
        func_0x180673140(&LAB_1800f0190);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3244);
      if (*(char *)(lVal_62 + 0x3247) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x3246) << 0x10) ^
                  SUB164(_DAT_1806ae3b0,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf55;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_9[15] = 0;
      auArr_9._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_9 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_10[15] = 0;
      auArr_10._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_10 << 8;
      if (0xf < DAT_18083ae98) {
        uVal_60 = DAT_18083ae98 + 1;
        lVal_64 = DAT_18083ae80;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083ae80 + -8);
          if (0x1f < (uint64_t)((DAT_18083ae80 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083ae98 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083ae80 = lVal_65;
      _DAT_18083ae88 = uVal_55;
      uRam000000018083ae8c = uVal_56;
      uRam000000018083ae90 = uVal_57;
      uRam000000018083ae94 = uVal_58;
      DAT_18083ae98 = uVal_61;
      if (0xf < DAT_18083aeb8) {
        uVal_61 = DAT_18083aeb8 + 1;
        lVal_65 = DAT_18083aea0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083aea0 + -8);
          if (0x1f < (uint64_t)((DAT_18083aea0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083aeb8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083aea0 = lVal_62;
      _DAT_18083aea8 = uVal_50;
      uRam000000018083aeac = uVal_51;
      uRam000000018083aeb0 = uVal_52;
      uRam000000018083aeb4 = uVal_53;
      DAT_18083aeb8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3254) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3254) = 1;
        *(uint8_t *)(lVal_62 + 0x3252) = 1;
        *(uint32_t *)(lVal_62 + 0x324c) = 0xf89625ce;
        *(uint16_t *)(lVal_62 + 0x3250) = 0xdbce;
        func_0x180673140(&LAB_1800f01c0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x324c);
      if (*(char *)(lVal_62 + 0x3252) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x570fc78f;
        *(byte *)(lVal_62 + 0x3250) = *(byte *)(lVal_62 + 0x3250) ^ 0xfd;
        *(byte *)(lVal_62 + 0x3251) = *(byte *)(lVal_62 + 0x3251) ^ 0xdb;
        *(uint8_t *)(lVal_62 + 0x3252) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3260) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3260) = 1;
        *(uint8_t *)(lVal_62 + 0x325e) = 1;
        *(uint32_t *)(lVal_62 + 0x3258) = 0xfa9625cd;
        *(uint16_t *)(lVal_62 + 0x325c) = 0xdbce;
        func_0x180673140(&LAB_1800f01f0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3258);
      if (*(char *)(lVal_62 + 0x325e) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x570fc78f;
        *(byte *)(lVal_62 + 0x325c) = *(byte *)(lVal_62 + 0x325c) ^ 0xfd;
        *(byte *)(lVal_62 + 0x325d) = *(byte *)(lVal_62 + 0x325d) ^ 0xdb;
        *(uint8_t *)(lVal_62 + 0x325e) = 0;
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf5b;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_11[15] = 0;
      auArr_11._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_11 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_12[15] = 0;
      auArr_12._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_12 << 8;
      if (0xf < DAT_18083aed8) {
        uVal_60 = DAT_18083aed8 + 1;
        lVal_64 = DAT_18083aec0;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083aec0 + -8);
          if (0x1f < (uint64_t)((DAT_18083aec0 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083aed8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083aec0 = lVal_65;
      _DAT_18083aec8 = uVal_55;
      uRam000000018083aecc = uVal_56;
      uRam000000018083aed0 = uVal_57;
      uRam000000018083aed4 = uVal_58;
      DAT_18083aed8 = uVal_61;
      if (0xf < DAT_18083aef8) {
        uVal_61 = DAT_18083aef8 + 1;
        lVal_65 = DAT_18083aee0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083aee0 + -8);
          if (0x1f < (uint64_t)((DAT_18083aee0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083aef8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083aee0 = lVal_62;
      _DAT_18083aee8 = uVal_50;
      uRam000000018083aeec = uVal_51;
      uRam000000018083aef0 = uVal_52;
      uRam000000018083aef4 = uVal_53;
      DAT_18083aef8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3268) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3268) = 1;
        *(uint32_t *)(lVal_62 + 0x3264) = 0x12318b1;
        func_0x180673140(&LAB_1800f0220);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3264);
      if (*(char *)(lVal_62 + 0x3267) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x3266) << 0x10) ^
                  SUB164(_DAT_1806b27a0,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3270) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3270) = 1;
        *(uint32_t *)(lVal_62 + 0x326c) = 0x12318b1;
        func_0x180673140(&LAB_1800f0250);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x326c);
      if (*(char *)(lVal_62 + 0x326f) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x326e) << 0x10) ^
                  SUB164(_DAT_1806b27a0,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf61;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_13[15] = 0;
      auArr_13._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_13 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_14[15] = 0;
      auArr_14._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_14 << 8;
      if (0xf < DAT_18083af18) {
        uVal_60 = DAT_18083af18 + 1;
        lVal_64 = DAT_18083af00;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083af00 + -8);
          if (0x1f < (uint64_t)((DAT_18083af00 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083af18 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083af00 = lVal_65;
      _DAT_18083af08 = uVal_55;
      uRam000000018083af0c = uVal_56;
      uRam000000018083af10 = uVal_57;
      uRam000000018083af14 = uVal_58;
      DAT_18083af18 = uVal_61;
      if (0xf < DAT_18083af38) {
        uVal_61 = DAT_18083af38 + 1;
        lVal_65 = DAT_18083af20;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083af20 + -8);
          if (0x1f < (uint64_t)((DAT_18083af20 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083af38 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083af20 = lVal_62;
      _DAT_18083af28 = uVal_50;
      uRam000000018083af2c = uVal_51;
      uRam000000018083af30 = uVal_52;
      uRam000000018083af34 = uVal_53;
      DAT_18083af38 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3278) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3278) = 1;
        *(uint32_t *)(lVal_62 + 0x3274) = 0x151ad5a;
        func_0x180673140(&LAB_1800f0280);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3274);
      if (*(char *)(lVal_62 + 0x3277) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x3276) << 0x10) ^
                  SUB164(_DAT_1806b27b0,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3280) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3280) = 1;
        *(uint32_t *)(lVal_62 + 0x327c) = 0x151ad5a;
        func_0x180673140(&LAB_1800f02b0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x327c);
      if (*(char *)(lVal_62 + 0x327f) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x327e) << 0x10) ^
                  SUB164(_DAT_1806b27b0,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf67;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_15[15] = 0;
      auArr_15._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_15 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_16[15] = 0;
      auArr_16._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_16 << 8;
      if (0xf < DAT_18083af58) {
        uVal_60 = DAT_18083af58 + 1;
        lVal_64 = DAT_18083af40;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083af40 + -8);
          if (0x1f < (uint64_t)((DAT_18083af40 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083af58 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083af40 = lVal_65;
      _DAT_18083af48 = uVal_55;
      uRam000000018083af4c = uVal_56;
      uRam000000018083af50 = uVal_57;
      uRam000000018083af54 = uVal_58;
      DAT_18083af58 = uVal_61;
      if (0xf < DAT_18083af78) {
        uVal_61 = DAT_18083af78 + 1;
        lVal_65 = DAT_18083af60;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083af60 + -8);
          if (0x1f < (uint64_t)((DAT_18083af60 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083af78 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083af60 = lVal_62;
      _DAT_18083af68 = uVal_50;
      uRam000000018083af6c = uVal_51;
      uRam000000018083af70 = uVal_52;
      uRam000000018083af74 = uVal_53;
      DAT_18083af78 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x328c) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x328c) = 1;
        *(uint8_t *)(lVal_62 + 0x328a) = 1;
        *(uint32_t *)(lVal_62 + 0x3284) = 0x32e4f1a6;
        *(uint16_t *)(lVal_62 + 0x3288) = 0xab43;
        func_0x180673140(&LAB_1800f02e0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3284);
      if (*(char *)(lVal_62 + 0x328a) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x9d7d13e5;
        *(byte *)(lVal_62 + 0x3288) = *(byte *)(lVal_62 + 0x3288) ^ 0x77;
        *(byte *)(lVal_62 + 0x3289) = *(byte *)(lVal_62 + 0x3289) ^ 0xab;
        *(uint8_t *)(lVal_62 + 0x328a) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3298) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3298) = 1;
        *(uint8_t *)(lVal_62 + 0x3296) = 1;
        *(uint32_t *)(lVal_62 + 0x3290) = 0x30e4f1a1;
        *(uint16_t *)(lVal_62 + 0x3294) = 0xab43;
        func_0x180673140(&LAB_1800f0310);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3290);
      if (*(char *)(lVal_62 + 0x3296) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x9d7d13e5;
        *(byte *)(lVal_62 + 0x3294) = *(byte *)(lVal_62 + 0x3294) ^ 0x77;
        *(byte *)(lVal_62 + 0x3295) = *(byte *)(lVal_62 + 0x3295) ^ 0xab;
        *(uint8_t *)(lVal_62 + 0x3296) = 0;
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf6d;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_17[15] = 0;
      auArr_17._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_17 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_18[15] = 0;
      auArr_18._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_18 << 8;
      if (0xf < DAT_18083af98) {
        uVal_60 = DAT_18083af98 + 1;
        lVal_64 = DAT_18083af80;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083af80 + -8);
          if (0x1f < (uint64_t)((DAT_18083af80 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083af98 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083af80 = lVal_65;
      _DAT_18083af88 = uVal_55;
      uRam000000018083af8c = uVal_56;
      uRam000000018083af90 = uVal_57;
      uRam000000018083af94 = uVal_58;
      DAT_18083af98 = uVal_61;
      if (0xf < DAT_18083afb8) {
        uVal_61 = DAT_18083afb8 + 1;
        lVal_65 = DAT_18083afa0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083afa0 + -8);
          if (0x1f < (uint64_t)((DAT_18083afa0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083afb8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083afa0 = lVal_62;
      _DAT_18083afa8 = uVal_50;
      uRam000000018083afac = uVal_51;
      uRam000000018083afb0 = uVal_52;
      uRam000000018083afb4 = uVal_53;
      DAT_18083afb8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x32a0) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x32a0) = 1;
        *(uint32_t *)(lVal_62 + 0x329c) = 0x17da50b;
        func_0x180673140(&LAB_1800f0340);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x329c);
      if (*(char *)(lVal_62 + 0x329f) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x329e) << 0x10) ^
                  SUB164(_DAT_1806b27c0,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x32a8) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x32a8) = 1;
        *(uint32_t *)(lVal_62 + 0x32a4) = 0x17da50b;
        func_0x180673140(&LAB_1800f0370);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32a4);
      if (*(char *)(lVal_62 + 0x32a7) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x32a6) << 0x10) ^
                  SUB164(_DAT_1806b27c0,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf73;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_19[15] = 0;
      auArr_19._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_19 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_20[15] = 0;
      auArr_20._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_20 << 8;
      if (0xf < DAT_18083afd8) {
        uVal_60 = DAT_18083afd8 + 1;
        lVal_64 = DAT_18083afc0;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083afc0 + -8);
          if (0x1f < (uint64_t)((DAT_18083afc0 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083afd8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083afc0 = lVal_65;
      _DAT_18083afc8 = uVal_55;
      uRam000000018083afcc = uVal_56;
      uRam000000018083afd0 = uVal_57;
      uRam000000018083afd4 = uVal_58;
      DAT_18083afd8 = uVal_61;
      if (0xf < DAT_18083aff8) {
        uVal_61 = DAT_18083aff8 + 1;
        lVal_65 = DAT_18083afe0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083afe0 + -8);
          if (0x1f < (uint64_t)((DAT_18083afe0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083aff8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083afe0 = lVal_62;
      _DAT_18083afe8 = uVal_50;
      uRam000000018083afec = uVal_51;
      uRam000000018083aff0 = uVal_52;
      uRam000000018083aff4 = uVal_53;
      DAT_18083aff8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x32b4) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x32b4) = 1;
        *(uint8_t *)(lVal_62 + 0x32b2) = 1;
        *(uint32_t *)(lVal_62 + 0x32ac) = 0x6492dfe1;
        *(uint16_t *)(lVal_62 + 0x32b0) = 0x23f7;
        func_0x180673140(&LAB_1800f03a0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32ac);
      if (*(char *)(lVal_62 + 0x32b2) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xcb0b3da5;
        *(byte *)(lVal_62 + 0x32b0) = *(byte *)(lVal_62 + 0x32b0) ^ 0xc3;
        *(byte *)(lVal_62 + 0x32b1) = *(byte *)(lVal_62 + 0x32b1) ^ 0x23;
        *(uint8_t *)(lVal_62 + 0x32b2) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x32c0) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x32c0) = 1;
        *(uint8_t *)(lVal_62 + 0x32be) = 1;
        *(uint32_t *)(lVal_62 + 0x32b8) = 0x6692dfe0;
        *(uint16_t *)(lVal_62 + 0x32bc) = 0x23f7;
        func_0x180673140(&LAB_1800f03d0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32b8);
      if (*(char *)(lVal_62 + 0x32be) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xcb0b3da5;
        *(byte *)(lVal_62 + 0x32bc) = *(byte *)(lVal_62 + 0x32bc) ^ 0xc3;
        *(byte *)(lVal_62 + 0x32bd) = *(byte *)(lVal_62 + 0x32bd) ^ 0x23;
        *(uint8_t *)(lVal_62 + 0x32be) = 0;
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf79;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_21[15] = 0;
      auArr_21._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_21 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_22[15] = 0;
      auArr_22._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_22 << 8;
      if (0xf < DAT_18083b018) {
        uVal_60 = DAT_18083b018 + 1;
        lVal_64 = DAT_18083b000;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b000 + -8);
          if (0x1f < (uint64_t)((DAT_18083b000 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b018 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b000 = lVal_65;
      _DAT_18083b008 = uVal_55;
      uRam000000018083b00c = uVal_56;
      uRam000000018083b010 = uVal_57;
      uRam000000018083b014 = uVal_58;
      DAT_18083b018 = uVal_61;
      if (0xf < DAT_18083b038) {
        uVal_61 = DAT_18083b038 + 1;
        lVal_65 = DAT_18083b020;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b020 + -8);
          if (0x1f < (uint64_t)((DAT_18083b020 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b038 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b020 = lVal_62;
      _DAT_18083b028 = uVal_50;
      uRam000000018083b02c = uVal_51;
      uRam000000018083b030 = uVal_52;
      uRam000000018083b034 = uVal_53;
      DAT_18083b038 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   13000) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 13000) = 1;
        *(uint32_t *)(lVal_62 + 0x32c4) = 0x149399e;
        func_0x180673140(&LAB_1800f0400);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32c4);
      if (*(char *)(lVal_62 + 12999) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x32c6) << 0x10) ^
                  SUB164(_DAT_1806b27d0,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x32d0) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x32d0) = 1;
        *(uint32_t *)(lVal_62 + 0x32cc) = 0x149399e;
        func_0x180673140(&LAB_1800f0430);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32cc);
      if (*(char *)(lVal_62 + 0x32cf) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x32ce) << 0x10) ^
                  SUB164(_DAT_1806b27d0,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf7f;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_23[15] = 0;
      auArr_23._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_23 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_24[15] = 0;
      auArr_24._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_24 << 8;
      if (0xf < DAT_18083b058) {
        uVal_60 = DAT_18083b058 + 1;
        lVal_64 = DAT_18083b040;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b040 + -8);
          if (0x1f < (uint64_t)((DAT_18083b040 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b058 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b040 = lVal_65;
      _DAT_18083b048 = uVal_55;
      uRam000000018083b04c = uVal_56;
      uRam000000018083b050 = uVal_57;
      uRam000000018083b054 = uVal_58;
      DAT_18083b058 = uVal_61;
      if (0xf < DAT_18083b078) {
        uVal_61 = DAT_18083b078 + 1;
        lVal_65 = DAT_18083b060;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b060 + -8);
          if (0x1f < (uint64_t)((DAT_18083b060 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b078 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b060 = lVal_62;
      _DAT_18083b068 = uVal_50;
      uRam000000018083b06c = uVal_51;
      uRam000000018083b070 = uVal_52;
      uRam000000018083b074 = uVal_53;
      DAT_18083b078 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x32d8) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x32d8) = 1;
        *(uint32_t *)(lVal_62 + 0x32d4) = 0x1d5dde1;
        func_0x180673140(&LAB_1800f0460);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32d4);
      if (*(char *)(lVal_62 + 0x32d7) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x32d6) << 0x10) ^
                  SUB164(_DAT_1806b27e0,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x32e0) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x32e0) = 1;
        *(uint32_t *)(lVal_62 + 0x32dc) = 0x1d5dde1;
        func_0x180673140(&LAB_1800f0490);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32dc);
      if (*(char *)(lVal_62 + 0x32df) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x32de) << 0x10) ^
                  SUB164(_DAT_1806b27e0,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf85;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_25[15] = 0;
      auArr_25._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_25 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_26[15] = 0;
      auArr_26._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_26 << 8;
      if (0xf < DAT_18083b098) {
        uVal_60 = DAT_18083b098 + 1;
        lVal_64 = DAT_18083b080;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b080 + -8);
          if (0x1f < (uint64_t)((DAT_18083b080 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b098 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b080 = lVal_65;
      _DAT_18083b088 = uVal_55;
      uRam000000018083b08c = uVal_56;
      uRam000000018083b090 = uVal_57;
      uRam000000018083b094 = uVal_58;
      DAT_18083b098 = uVal_61;
      if (0xf < DAT_18083b0b8) {
        uVal_61 = DAT_18083b0b8 + 1;
        lVal_65 = DAT_18083b0a0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b0a0 + -8);
          if (0x1f < (uint64_t)((DAT_18083b0a0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b0b8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b0a0 = lVal_62;
      _DAT_18083b0a8 = uVal_50;
      uRam000000018083b0ac = uVal_51;
      uRam000000018083b0b0 = uVal_52;
      uRam000000018083b0b4 = uVal_53;
      DAT_18083b0b8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x32ec) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x32ec) = 1;
        *(uint8_t *)(lVal_62 + 0x32ea) = 1;
        *(uint32_t *)(lVal_62 + 0x32e4) = 0xa8e08791;
        *(uint16_t *)(lVal_62 + 0x32e8) = 0x21d9;
        func_0x180673140(&LAB_1800f04c0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32e4);
      if (*(char *)(lVal_62 + 0x32ea) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x77965d7;
        *(byte *)(lVal_62 + 0x32e8) = *(byte *)(lVal_62 + 0x32e8) ^ 0xed;
        *(byte *)(lVal_62 + 0x32e9) = *(byte *)(lVal_62 + 0x32e9) ^ 0x21;
        *(uint8_t *)(lVal_62 + 0x32ea) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x32f8) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x32f8) = 1;
        *(uint8_t *)(lVal_62 + 0x32f6) = 1;
        *(uint32_t *)(lVal_62 + 0x32f0) = 0xaae08790;
        *(uint16_t *)(lVal_62 + 0x32f4) = 0x21d9;
        func_0x180673140(&LAB_1800f04f0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32f0);
      if (*(char *)(lVal_62 + 0x32f6) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x77965d7;
        *(byte *)(lVal_62 + 0x32f4) = *(byte *)(lVal_62 + 0x32f4) ^ 0xed;
        *(byte *)(lVal_62 + 0x32f5) = *(byte *)(lVal_62 + 0x32f5) ^ 0x21;
        *(uint8_t *)(lVal_62 + 0x32f6) = 0;
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf8b;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_27[15] = 0;
      auArr_27._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_27 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_28[15] = 0;
      auArr_28._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_28 << 8;
      if (0xf < DAT_18083b0d8) {
        uVal_60 = DAT_18083b0d8 + 1;
        lVal_64 = DAT_18083b0c0;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b0c0 + -8);
          if (0x1f < (uint64_t)((DAT_18083b0c0 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b0d8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b0c0 = lVal_65;
      _DAT_18083b0c8 = uVal_55;
      uRam000000018083b0cc = uVal_56;
      uRam000000018083b0d0 = uVal_57;
      uRam000000018083b0d4 = uVal_58;
      DAT_18083b0d8 = uVal_61;
      if (0xf < DAT_18083b0f8) {
        uVal_61 = DAT_18083b0f8 + 1;
        lVal_65 = DAT_18083b0e0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b0e0 + -8);
          if (0x1f < (uint64_t)((DAT_18083b0e0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b0f8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b0e0 = lVal_62;
      _DAT_18083b0e8 = uVal_50;
      uRam000000018083b0ec = uVal_51;
      uRam000000018083b0f0 = uVal_52;
      uRam000000018083b0f4 = uVal_53;
      DAT_18083b0f8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3300) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3300) = 1;
        *(uint32_t *)(lVal_62 + 0x32fc) = 0x1ff1b60;
        func_0x180673140(&LAB_1800f0520);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x32fc);
      if (*(char *)(lVal_62 + 0x32ff) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x32fe) << 0x10) ^
                  SUB164(_DAT_1806b27f0,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3308) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3308) = 1;
        *(uint32_t *)(lVal_62 + 0x3304) = 0x1ff1b60;
        func_0x180673140(&LAB_1800f0550);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3304);
      if (*(char *)(lVal_62 + 0x3307) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x3306) << 0x10) ^
                  SUB164(_DAT_1806b27f0,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf91;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_29[15] = 0;
      auArr_29._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_29 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_30[15] = 0;
      auArr_30._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_30 << 8;
      if (0xf < DAT_18083b118) {
        uVal_60 = DAT_18083b118 + 1;
        lVal_64 = DAT_18083b100;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b100 + -8);
          if (0x1f < (uint64_t)((DAT_18083b100 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b118 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b100 = lVal_65;
      _DAT_18083b108 = uVal_55;
      uRam000000018083b10c = uVal_56;
      uRam000000018083b110 = uVal_57;
      uRam000000018083b114 = uVal_58;
      DAT_18083b118 = uVal_61;
      if (0xf < DAT_18083b138) {
        uVal_61 = DAT_18083b138 + 1;
        lVal_65 = DAT_18083b120;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b120 + -8);
          if (0x1f < (uint64_t)((DAT_18083b120 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b138 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b120 = lVal_62;
      _DAT_18083b128 = uVal_50;
      uRam000000018083b12c = uVal_51;
      uRam000000018083b130 = uVal_52;
      uRam000000018083b134 = uVal_53;
      DAT_18083b138 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3314) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3314) = 1;
        *(uint8_t *)(lVal_62 + 0x3312) = 1;
        *(uint32_t *)(lVal_62 + 0x330c) = 0x26a2371a;
        *(uint16_t *)(lVal_62 + 0x3310) = 0x8701;
        func_0x180673140(&LAB_1800f0580);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x330c);
      if (*(char *)(lVal_62 + 0x3312) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x893bd55d;
        *(byte *)(lVal_62 + 0x3310) = *(byte *)(lVal_62 + 0x3310) ^ 0x35;
        *(byte *)(lVal_62 + 0x3311) = *(byte *)(lVal_62 + 0x3311) ^ 0x87;
        *(uint8_t *)(lVal_62 + 0x3312) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3320) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3320) = 1;
        *(uint8_t *)(lVal_62 + 0x331e) = 1;
        *(uint32_t *)(lVal_62 + 0x3318) = 0x24a2371c;
        *(uint16_t *)(lVal_62 + 0x331c) = 0x8701;
        func_0x180673140(&LAB_1800f05b0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3318);
      if (*(char *)(lVal_62 + 0x331e) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x893bd55d;
        *(byte *)(lVal_62 + 0x331c) = *(byte *)(lVal_62 + 0x331c) ^ 0x35;
        *(byte *)(lVal_62 + 0x331d) = *(byte *)(lVal_62 + 0x331d) ^ 0x87;
        *(uint8_t *)(lVal_62 + 0x331e) = 0;
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf97;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_31[15] = 0;
      auArr_31._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_31 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_32[15] = 0;
      auArr_32._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_32 << 8;
      if (0xf < DAT_18083b158) {
        uVal_60 = DAT_18083b158 + 1;
        lVal_64 = DAT_18083b140;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b140 + -8);
          if (0x1f < (uint64_t)((DAT_18083b140 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b158 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b140 = lVal_65;
      _DAT_18083b148 = uVal_55;
      uRam000000018083b14c = uVal_56;
      uRam000000018083b150 = uVal_57;
      uRam000000018083b154 = uVal_58;
      DAT_18083b158 = uVal_61;
      if (0xf < DAT_18083b178) {
        uVal_61 = DAT_18083b178 + 1;
        lVal_65 = DAT_18083b160;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b160 + -8);
          if (0x1f < (uint64_t)((DAT_18083b160 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b178 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b160 = lVal_62;
      _DAT_18083b168 = uVal_50;
      uRam000000018083b16c = uVal_51;
      uRam000000018083b170 = uVal_52;
      uRam000000018083b174 = uVal_53;
      DAT_18083b178 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3328) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3328) = 1;
        *(uint32_t *)(lVal_62 + 0x3324) = 0x195fbfe;
        func_0x180673140(&LAB_1800f05e0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3324);
      if (*(char *)(lVal_62 + 0x3327) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x3326) << 0x10) ^
                  SUB164(_DAT_1806b2800,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3330) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3330) = 1;
        *(uint32_t *)(lVal_62 + 0x332c) = 0x195fbfe;
        func_0x180673140(&LAB_1800f0610);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x332c);
      if (*(char *)(lVal_62 + 0x332f) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x332e) << 0x10) ^
                  SUB164(_DAT_1806b2800,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf9d;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_33[15] = 0;
      auArr_33._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_33 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_34[15] = 0;
      auArr_34._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_34 << 8;
      if (0xf < DAT_18083b198) {
        uVal_60 = DAT_18083b198 + 1;
        lVal_64 = DAT_18083b180;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b180 + -8);
          if (0x1f < (uint64_t)((DAT_18083b180 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b198 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b180 = lVal_65;
      _DAT_18083b188 = uVal_55;
      uRam000000018083b18c = uVal_56;
      uRam000000018083b190 = uVal_57;
      uRam000000018083b194 = uVal_58;
      DAT_18083b198 = uVal_61;
      if (0xf < DAT_18083b1b8) {
        uVal_61 = DAT_18083b1b8 + 1;
        lVal_65 = DAT_18083b1a0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b1a0 + -8);
          if (0x1f < (uint64_t)((DAT_18083b1a0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b1b8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b1a0 = lVal_62;
      _DAT_18083b1a8 = uVal_50;
      uRam000000018083b1ac = uVal_51;
      uRam000000018083b1b0 = uVal_52;
      uRam000000018083b1b4 = uVal_53;
      DAT_18083b1b8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x333c) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x333c) = 1;
        *(uint8_t *)(lVal_62 + 0x333a) = 1;
        *(uint32_t *)(lVal_62 + 0x3334) = 0xd800c17e;
        *(uint16_t *)(lVal_62 + 0x3338) = 0xdb91;
        func_0x180673140(&LAB_1800f0640);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3334);
      if (*(char *)(lVal_62 + 0x333a) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x7799233f;
        *(byte *)(lVal_62 + 0x3338) = *(byte *)(lVal_62 + 0x3338) ^ 0xa5;
        *(byte *)(lVal_62 + 0x3339) = *(byte *)(lVal_62 + 0x3339) ^ 0xdb;
        *(uint8_t *)(lVal_62 + 0x333a) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3348) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3348) = 1;
        *(uint8_t *)(lVal_62 + 0x3346) = 1;
        *(uint32_t *)(lVal_62 + 0x3340) = 0xda00c17d;
        *(uint16_t *)(lVal_62 + 0x3344) = 0xdb91;
        func_0x180673140(&LAB_1800f0670);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3340);
      if (*(char *)(lVal_62 + 0x3346) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x7799233f;
        *(byte *)(lVal_62 + 0x3344) = *(byte *)(lVal_62 + 0x3344) ^ 0xa5;
        *(byte *)(lVal_62 + 0x3345) = *(byte *)(lVal_62 + 0x3345) ^ 0xdb;
        *(uint8_t *)(lVal_62 + 0x3346) = 0;
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbfa3;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_35[15] = 0;
      auArr_35._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_35 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_36[15] = 0;
      auArr_36._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_36 << 8;
      if (0xf < DAT_18083b1d8) {
        uVal_60 = DAT_18083b1d8 + 1;
        lVal_64 = DAT_18083b1c0;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b1c0 + -8);
          if (0x1f < (uint64_t)((DAT_18083b1c0 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b1d8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b1c0 = lVal_65;
      _DAT_18083b1c8 = uVal_55;
      uRam000000018083b1cc = uVal_56;
      uRam000000018083b1d0 = uVal_57;
      uRam000000018083b1d4 = uVal_58;
      DAT_18083b1d8 = uVal_61;
      if (0xf < DAT_18083b1f8) {
        uVal_61 = DAT_18083b1f8 + 1;
        lVal_65 = DAT_18083b1e0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b1e0 + -8);
          if (0x1f < (uint64_t)((DAT_18083b1e0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b1f8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b1e0 = lVal_62;
      _DAT_18083b1e8 = uVal_50;
      uRam000000018083b1ec = uVal_51;
      uRam000000018083b1f0 = uVal_52;
      uRam000000018083b1f4 = uVal_53;
      DAT_18083b1f8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3350) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3350) = 1;
        *(uint32_t *)(lVal_62 + 0x334c) = 0x18df1e1;
        func_0x180673140(&LAB_1800f06a0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x334c);
      if (*(char *)(lVal_62 + 0x334f) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x334e) << 0x10) ^
                  SUB164(_DAT_1806ae570,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3358) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3358) = 1;
        *(uint32_t *)(lVal_62 + 0x3354) = 0x18df1e1;
        func_0x180673140(&LAB_1800f06d0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3354);
      if (*(char *)(lVal_62 + 0x3357) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x3356) << 0x10) ^
                  SUB164(_DAT_1806ae570,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbfa9;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_37[15] = 0;
      auArr_37._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_37 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_38[15] = 0;
      auArr_38._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_38 << 8;
      if (0xf < DAT_18083b218) {
        uVal_60 = DAT_18083b218 + 1;
        lVal_64 = DAT_18083b200;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b200 + -8);
          if (0x1f < (uint64_t)((DAT_18083b200 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b218 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b200 = lVal_65;
      _DAT_18083b208 = uVal_55;
      uRam000000018083b20c = uVal_56;
      uRam000000018083b210 = uVal_57;
      uRam000000018083b214 = uVal_58;
      DAT_18083b218 = uVal_61;
      if (0xf < DAT_18083b238) {
        uVal_61 = DAT_18083b238 + 1;
        lVal_65 = DAT_18083b220;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b220 + -8);
          if (0x1f < (uint64_t)((DAT_18083b220 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b238 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b220 = lVal_62;
      _DAT_18083b228 = uVal_50;
      uRam000000018083b22c = uVal_51;
      uRam000000018083b230 = uVal_52;
      uRam000000018083b234 = uVal_53;
      DAT_18083b238 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3360) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3360) = 1;
        *(uint32_t *)(lVal_62 + 0x335c) = 0x1fb3c02;
        func_0x180673140(&LAB_1800f0700);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x335c);
      if (*(char *)(lVal_62 + 0x335f) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x335e) << 0x10) ^
                  SUB164(_DAT_1806ae580,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3368) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3368) = 1;
        *(uint32_t *)(lVal_62 + 0x3364) = 0x1fb3c02;
        func_0x180673140(&LAB_1800f0730);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3364);
      if (*(char *)(lVal_62 + 0x3367) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x3366) << 0x10) ^
                  SUB164(_DAT_1806ae580,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbfaf;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_39[15] = 0;
      auArr_39._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_39 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_40[15] = 0;
      auArr_40._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_40 << 8;
      if (0xf < DAT_18083b258) {
        uVal_60 = DAT_18083b258 + 1;
        lVal_64 = DAT_18083b240;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b240 + -8);
          if (0x1f < (uint64_t)((DAT_18083b240 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b258 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b240 = lVal_65;
      _DAT_18083b248 = uVal_55;
      uRam000000018083b24c = uVal_56;
      uRam000000018083b250 = uVal_57;
      uRam000000018083b254 = uVal_58;
      DAT_18083b258 = uVal_61;
      if (0xf < DAT_18083b278) {
        uVal_61 = DAT_18083b278 + 1;
        lVal_65 = DAT_18083b260;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b260 + -8);
          if (0x1f < (uint64_t)((DAT_18083b260 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b278 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b260 = lVal_62;
      _DAT_18083b268 = uVal_50;
      uRam000000018083b26c = uVal_51;
      uRam000000018083b270 = uVal_52;
      uRam000000018083b274 = uVal_53;
      DAT_18083b278 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3374) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3374) = 1;
        *(uint8_t *)(lVal_62 + 0x3372) = 1;
        *(uint32_t *)(lVal_62 + 0x336c) = 0xd4c62bfe;
        *(uint16_t *)(lVal_62 + 0x3370) = 0x1df8;
        func_0x180673140(&LAB_1800f0760);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x336c);
      if (*(char *)(lVal_62 + 0x3372) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x7b5fc9bd;
        *(byte *)(lVal_62 + 0x3370) = *(byte *)(lVal_62 + 0x3370) ^ 0xcd;
        *(byte *)(lVal_62 + 0x3371) = *(byte *)(lVal_62 + 0x3371) ^ 0x1d;
        *(uint8_t *)(lVal_62 + 0x3372) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3380) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3380) = 1;
        *(uint8_t *)(lVal_62 + 0x337e) = 1;
        *(uint32_t *)(lVal_62 + 0x3378) = 0xd6c62bf9;
        *(uint16_t *)(lVal_62 + 0x337c) = 0x1df8;
        func_0x180673140(&LAB_1800f0790);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3378);
      if (*(char *)(lVal_62 + 0x337e) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x7b5fc9bd;
        *(byte *)(lVal_62 + 0x337c) = *(byte *)(lVal_62 + 0x337c) ^ 0xcd;
        *(byte *)(lVal_62 + 0x337d) = *(byte *)(lVal_62 + 0x337d) ^ 0x1d;
        *(uint8_t *)(lVal_62 + 0x337e) = 0;
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbfb5;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_41[15] = 0;
      auArr_41._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_41 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_42[15] = 0;
      auArr_42._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_42 << 8;
      if (0xf < DAT_18083b298) {
        uVal_60 = DAT_18083b298 + 1;
        lVal_64 = DAT_18083b280;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b280 + -8);
          if (0x1f < (uint64_t)((DAT_18083b280 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b298 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b280 = lVal_65;
      _DAT_18083b288 = uVal_55;
      uRam000000018083b28c = uVal_56;
      uRam000000018083b290 = uVal_57;
      uRam000000018083b294 = uVal_58;
      DAT_18083b298 = uVal_61;
      if (0xf < DAT_18083b2b8) {
        uVal_61 = DAT_18083b2b8 + 1;
        lVal_65 = DAT_18083b2a0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b2a0 + -8);
          if (0x1f < (uint64_t)((DAT_18083b2a0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b2b8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b2a0 = lVal_62;
      _DAT_18083b2a8 = uVal_50;
      uRam000000018083b2ac = uVal_51;
      uRam000000018083b2b0 = uVal_52;
      uRam000000018083b2b4 = uVal_53;
      DAT_18083b2b8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3388) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3388) = 1;
        *(uint32_t *)(lVal_62 + 0x3384) = 0x111d2af;
        func_0x180673140(&LAB_1800f07c0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3384);
      if (*(char *)(lVal_62 + 0x3387) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x3386) << 0x10) ^
                  SUB164(_DAT_1806b2810,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3390) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x3390) = 1;
        *(uint32_t *)(lVal_62 + 0x338c) = 0x111d2af;
        func_0x180673140(&LAB_1800f07f0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x338c);
      if (*(char *)(lVal_62 + 0x338f) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x338e) << 0x10) ^
                  SUB164(_DAT_1806b2810,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbfbb;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_43[15] = 0;
      auArr_43._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_43 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_44[15] = 0;
      auArr_44._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_44 << 8;
      if (0xf < DAT_18083b2d8) {
        uVal_60 = DAT_18083b2d8 + 1;
        lVal_64 = DAT_18083b2c0;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b2c0 + -8);
          if (0x1f < (uint64_t)((DAT_18083b2c0 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b2d8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b2c0 = lVal_65;
      _DAT_18083b2c8 = uVal_55;
      uRam000000018083b2cc = uVal_56;
      uRam000000018083b2d0 = uVal_57;
      uRam000000018083b2d4 = uVal_58;
      DAT_18083b2d8 = uVal_61;
      if (0xf < DAT_18083b2f8) {
        uVal_61 = DAT_18083b2f8 + 1;
        lVal_65 = DAT_18083b2e0;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b2e0 + -8);
          if (0x1f < (uint64_t)((DAT_18083b2e0 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b2f8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b2e0 = lVal_62;
      _DAT_18083b2e8 = uVal_50;
      uRam000000018083b2ec = uVal_51;
      uRam000000018083b2f0 = uVal_52;
      uRam000000018083b2f4 = uVal_53;
      DAT_18083b2f8 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x339c) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x339c) = 1;
        *(uint8_t *)(lVal_62 + 0x339a) = 1;
        *(uint32_t *)(lVal_62 + 0x3394) = 0xd2221755;
        *(uint16_t *)(lVal_62 + 0x3398) = 0xf534;
        func_0x180673140(&LAB_1800f0820);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x3394);
      if (*(char *)(lVal_62 + 0x339a) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x7dbbf511;
        *(byte *)(lVal_62 + 0x3398) = *(byte *)(lVal_62 + 0x3398) ^ 1;
        *(byte *)(lVal_62 + 0x3399) = *(byte *)(lVal_62 + 0x3399) ^ 0xf5;
        *(uint8_t *)(lVal_62 + 0x339a) = 0;
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x33a8) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x33a8) = 1;
        *(uint8_t *)(lVal_62 + 0x33a6) = 1;
        *(uint32_t *)(lVal_62 + 0x33a0) = 0xd0221754;
        *(uint16_t *)(lVal_62 + 0x33a4) = 0xf534;
        func_0x180673140(&LAB_1800f0850);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x33a0);
      if (*(char *)(lVal_62 + 0x33a6) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x7dbbf511;
        *(byte *)(lVal_62 + 0x33a4) = *(byte *)(lVal_62 + 0x33a4) ^ 1;
        *(byte *)(lVal_62 + 0x33a5) = *(byte *)(lVal_62 + 0x33a5) ^ 0xf5;
        *(uint8_t *)(lVal_62 + 0x33a6) = 0;
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbfc1;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_45[15] = 0;
      auArr_45._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_45 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_46[15] = 0;
      auArr_46._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_46 << 8;
      if (0xf < DAT_18083b318) {
        uVal_60 = DAT_18083b318 + 1;
        lVal_64 = DAT_18083b300;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b300 + -8);
          if (0x1f < (uint64_t)((DAT_18083b300 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b318 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b300 = lVal_65;
      _DAT_18083b308 = uVal_55;
      uRam000000018083b30c = uVal_56;
      uRam000000018083b310 = uVal_57;
      uRam000000018083b314 = uVal_58;
      DAT_18083b318 = uVal_61;
      if (0xf < DAT_18083b338) {
        uVal_61 = DAT_18083b338 + 1;
        lVal_65 = DAT_18083b320;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b320 + -8);
          if (0x1f < (uint64_t)((DAT_18083b320 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b338 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b320 = lVal_62;
      _DAT_18083b328 = uVal_50;
      uRam000000018083b32c = uVal_51;
      uRam000000018083b330 = uVal_52;
      uRam000000018083b334 = uVal_53;
      DAT_18083b338 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x33b0) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x33b0) = 1;
        *(uint32_t *)(lVal_62 + 0x33ac) = 0x1931282;
        func_0x180673140(&LAB_1800f0880);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x33ac);
      if (*(char *)(lVal_62 + 0x33af) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x33ae) << 0x10) ^
                  SUB164(_DAT_1806b2820,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbf06;
      if (sz_59 < 0x10) {
        pU64_66 = local_78;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_78 = (uint8_t  [8])pU64_66;
      }
      local_68 = sz_59;
      local_60 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x33b8) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x33b8) = 1;
        *(uint32_t *)(lVal_62 + 0x33b4) = 0x1931282;
        func_0x180673140(&LAB_1800f08b0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x33b4);
      if (*(char *)(lVal_62 + 0x33b7) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x33b6) << 0x10) ^
                  SUB164(_DAT_1806b2820,0);
      }
      _local_98 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if ((int64_t)sz_59 < 0) goto LAB_1800cbfc7;
      if (sz_59 < 0x10) {
        pU64_66 = local_98;
        uVal_67 = 0xf;
      }
      else {
        uVal_61 = sz_59 | 0xf;
        uVal_67 = 0x16;
        if (0x16 < uVal_61) {
          uVal_67 = uVal_61;
        }
        if (uVal_61 < 0xfff) {
          pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
        }
        else {
          lVal_62 = func_0x180672de0(uVal_67 + 0x28);
          pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_66 + -8) = lVal_62;
        }
        local_98 = (uint8_t  [8])pU64_66;
      }
      local_88 = sz_59;
      local_80 = uVal_67;
      func_0x1806aa960(pU64_66,pU64_1,sz_59);
      pU64_66[sz_59] = 0;
      uVal_61 = local_60;
      uVal_67 = local_80;
      lVal_65 = (int64_t)local_78;
      uVal_55 = (uint32_t)uStack_70;
      uVal_56 = uStack_70._4_4_;
      uVal_57 = (uint32_t)local_68;
      uVal_58 = local_68._4_4_;
      local_68 = 0;
      local_60 = 0xf;
      auArr_47[15] = 0;
      auArr_47._0_15_ = stack0xffffffffffffff89;
      _local_78 = auArr_47 << 8;
      lVal_62 = (int64_t)local_98;
      uVal_50 = (uint32_t)uStack_90;
      uVal_51 = uStack_90._4_4_;
      uVal_52 = (uint32_t)local_88;
      uVal_53 = local_88._4_4_;
      local_88 = 0;
      local_80 = 0xf;
      auArr_48[15] = 0;
      auArr_48._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_48 << 8;
      if (0xf < DAT_18083b358) {
        uVal_60 = DAT_18083b358 + 1;
        lVal_64 = DAT_18083b340;
        if (0xfff < uVal_60) {
          lVal_64 = *(int64_t *)(DAT_18083b340 + -8);
          if (0x1f < (uint64_t)((DAT_18083b340 + -8) - lVal_64)) goto LAB_1800cbf0b;
          uVal_60 = DAT_18083b358 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_64,uVal_60);
      }
      DAT_18083b340 = lVal_65;
      _DAT_18083b348 = uVal_55;
      uRam000000018083b34c = uVal_56;
      uRam000000018083b350 = uVal_57;
      uRam000000018083b354 = uVal_58;
      DAT_18083b358 = uVal_61;
      if (0xf < DAT_18083b378) {
        uVal_61 = DAT_18083b378 + 1;
        lVal_65 = DAT_18083b360;
        if (0xfff < uVal_61) {
          lVal_65 = *(int64_t *)(DAT_18083b360 + -8);
          if (0x1f < (uint64_t)((DAT_18083b360 + -8) - lVal_65)) goto LAB_1800cbf0b;
          uVal_61 = DAT_18083b378 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_65,uVal_61);
      }
      DAT_18083b360 = lVal_62;
      _DAT_18083b368 = uVal_50;
      uRam000000018083b36c = uVal_51;
      uRam000000018083b370 = uVal_52;
      uRam000000018083b374 = uVal_53;
      DAT_18083b378 = uVal_67;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x33c0) == '\0') {
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_62 + 0x33c0) = 1;
        *(uint32_t *)(lVal_62 + 0x33bc) = 0x1a91a91;
        func_0x180673140(&LAB_1800f08e0);
      }
      lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_62 + 0x33bc);
      if (*(char *)(lVal_62 + 0x33bf) == '\x01') {
        *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x33be) << 0x10) ^
                  SUB164(_DAT_1806b2830,0);
      }
      _local_78 = (uint8_t  [16])0x0;
      sz_59 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_59) {
        if (sz_59 < 0x10) {
          pU64_66 = local_78;
          uVal_67 = 0xf;
        }
        else {
          uVal_61 = sz_59 | 0xf;
          uVal_67 = 0x16;
          if (0x16 < uVal_61) {
            uVal_67 = uVal_61;
          }
          if (uVal_61 < 0xfff) {
            pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
          }
          else {
            lVal_62 = func_0x180672de0(uVal_67 + 0x28);
            pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_66 + -8) = lVal_62;
          }
          local_78 = (uint8_t  [8])pU64_66;
        }
        local_68 = sz_59;
        local_60 = uVal_67;
        func_0x1806aa960(pU64_66,pU64_1,sz_59);
        pU64_66[sz_59] = 0;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x33c8) == '\0') {
          lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_62 + 0x33c8) = 1;
          *(uint32_t *)(lVal_62 + 0x33c4) = 0x1a91a91;
          func_0x180673140(&LAB_1800f0910);
        }
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint *)(lVal_62 + 0x33c4);
        if (*(char *)(lVal_62 + 0x33c7) == '\x01') {
          *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_62 + 0x33c6) << 0x10) ^
                    SUB164(_DAT_1806b2830,0);
        }
        _local_98 = (uint8_t  [16])0x0;
        sz_59 = strlen((char *)pU64_1);
        if ((int64_t)sz_59 < 0) goto LAB_1800cbfcd;
        if (sz_59 < 0x10) {
          pU64_66 = local_98;
          uVal_67 = 0xf;
        }
        else {
          uVal_61 = sz_59 | 0xf;
          uVal_67 = 0x16;
          if (0x16 < uVal_61) {
            uVal_67 = uVal_61;
          }
          if (uVal_61 < 0xfff) {
            pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
          }
          else {
            lVal_62 = func_0x180672de0(uVal_67 + 0x28);
            pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_66 + -8) = lVal_62;
          }
          local_98 = (uint8_t  [8])pU64_66;
        }
        local_88 = sz_59;
        local_80 = uVal_67;
        func_0x1806aa960(pU64_66,pU64_1,sz_59);
        pU64_66[sz_59] = 0;
        uVal_61 = local_60;
        uVal_67 = local_80;
        lVal_65 = (int64_t)local_78;
        uVal_55 = (uint32_t)uStack_70;
        uVal_56 = uStack_70._4_4_;
        uVal_57 = (uint32_t)local_68;
        uVal_58 = local_68._4_4_;
        lVal_62 = (int64_t)local_98;
        uVal_50 = (uint32_t)uStack_90;
        uVal_51 = uStack_90._4_4_;
        uVal_52 = (uint32_t)local_88;
        uVal_53 = local_88._4_4_;
        if (0xf < DAT_18083b398) {
          uVal_60 = DAT_18083b398 + 1;
          lVal_64 = DAT_18083b380;
          if (0xfff < uVal_60) {
            lVal_64 = *(int64_t *)(DAT_18083b380 + -8);
            if (0x1f < (uint64_t)((DAT_18083b380 + -8) - lVal_64)) goto LAB_1800cbf0b;
            uVal_60 = DAT_18083b398 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_64,uVal_60);
        }
        DAT_18083b380 = lVal_65;
        _DAT_18083b388 = uVal_55;
        uRam000000018083b38c = uVal_56;
        uRam000000018083b390 = uVal_57;
        uRam000000018083b394 = uVal_58;
        DAT_18083b398 = uVal_61;
        if (0xf < DAT_18083b3b8) {
          uVal_61 = DAT_18083b3b8 + 1;
          lVal_65 = DAT_18083b3a0;
          if (0xfff < uVal_61) {
            lVal_65 = *(int64_t *)(DAT_18083b3a0 + -8);
            if (0x1f < (uint64_t)((DAT_18083b3a0 + -8) - lVal_65)) goto LAB_1800cbf0b;
            uVal_61 = DAT_18083b3b8 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_65,uVal_61);
        }
        DAT_18083b3a0 = lVal_62;
        _DAT_18083b3a8 = uVal_50;
        uRam000000018083b3ac = uVal_51;
        uRam000000018083b3b0 = uVal_52;
        uRam000000018083b3b4 = uVal_53;
        DAT_18083b3b8 = uVal_67;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x33d4) == '\0') {
          lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_62 + 0x33d4) = 1;
          *(uint8_t *)(lVal_62 + 0x33d2) = 1;
          *(uint32_t *)(lVal_62 + 0x33cc) = 0x601a5d8d;
          *(uint16_t *)(lVal_62 + 0x33d0) = 0x34a;
          func_0x180673140(&LAB_1800f0940);
        }
        lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint *)(lVal_62 + 0x33cc);
        if (*(char *)(lVal_62 + 0x33d2) == '\x01') {
          *pU64_1 = *pU64_1 ^ 0xcf83bfcb;
          *(byte *)(lVal_62 + 0x33d0) = *(byte *)(lVal_62 + 0x33d0) ^ 0x7f;
          *(byte *)(lVal_62 + 0x33d1) = *(byte *)(lVal_62 + 0x33d1) ^ 3;
          *(uint8_t *)(lVal_62 + 0x33d2) = 0;
        }
        _local_78 = (uint8_t  [16])0x0;
        sz_59 = strlen((char *)pU64_1);
        if (-1 < (int64_t)sz_59) {
          if (sz_59 < 0x10) {
            pU64_66 = local_78;
            uVal_67 = 0xf;
          }
          else {
            uVal_61 = sz_59 | 0xf;
            uVal_67 = 0x16;
            if (0x16 < uVal_61) {
              uVal_67 = uVal_61;
            }
            if (uVal_61 < 0xfff) {
              pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
            }
            else {
              lVal_62 = func_0x180672de0(uVal_67 + 0x28);
              pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_66 + -8) = lVal_62;
            }
            local_78 = (uint8_t  [8])pU64_66;
          }
          local_68 = sz_59;
          local_60 = uVal_67;
          func_0x1806aa960(pU64_66,pU64_1,sz_59);
          pU64_66[sz_59] = 0;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x33e0)
              == '\0') {
            lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_62 + 0x33e0) = 1;
            *(uint8_t *)(lVal_62 + 0x33de) = 1;
            *(uint32_t *)(lVal_62 + 0x33d8) = 0x621a5d8c;
            *(uint16_t *)(lVal_62 + 0x33dc) = 0x34a;
            func_0x180673140(&LAB_1800f0970);
          }
          lVal_62 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_1 = (uint *)(lVal_62 + 0x33d8);
          if (*(char *)(lVal_62 + 0x33de) == '\x01') {
            *pU64_1 = *pU64_1 ^ 0xcf83bfcb;
            *(byte *)(lVal_62 + 0x33dc) = *(byte *)(lVal_62 + 0x33dc) ^ 0x7f;
            *(byte *)(lVal_62 + 0x33dd) = *(byte *)(lVal_62 + 0x33dd) ^ 3;
            *(uint8_t *)(lVal_62 + 0x33de) = 0;
          }
          _local_98 = (uint8_t  [16])0x0;
          sz_59 = strlen((char *)pU64_1);
          if (-1 < (int64_t)sz_59) {
            if (sz_59 < 0x10) {
              pU64_66 = local_98;
              uVal_67 = 0xf;
            }
            else {
              uVal_61 = sz_59 | 0xf;
              uVal_67 = 0x16;
              if (0x16 < uVal_61) {
                uVal_67 = uVal_61;
              }
              if (uVal_61 < 0xfff) {
                pU64_66 = (uint8_t *)func_0x180672de0(uVal_67 + 1);
              }
              else {
                lVal_62 = func_0x180672de0(uVal_67 + 0x28);
                pU64_66 = (uint8_t *)(lVal_62 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_66 + -8) = lVal_62;
              }
              local_98 = (uint8_t  [8])pU64_66;
            }
            local_88 = sz_59;
            local_80 = uVal_67;
            func_0x1806aa960(pU64_66,pU64_1,sz_59);
            pU64_66[sz_59] = 0;
            uVal_61 = local_60;
            uVal_67 = local_80;
            uVal_54 = local_78;
            uVal_55 = (uint32_t)uStack_70;
            uVal_56 = uStack_70._4_4_;
            uVal_57 = (uint32_t)local_68;
            uVal_58 = local_68._4_4_;
            uVal_49 = local_98;
            uVal_50 = (uint32_t)uStack_90;
            uVal_51 = uStack_90._4_4_;
            uVal_52 = (uint32_t)local_88;
            uVal_53 = local_88._4_4_;
            if (0xf < DAT_18083b3d8) {
              uVal_60 = DAT_18083b3d8 + 1;
              lVal_62 = _DAT_18083b3c0;
              if (0xfff < uVal_60) {
                lVal_62 = *(int64_t *)(_DAT_18083b3c0 + -8);
                if (0x1f < (uint64_t)((_DAT_18083b3c0 + -8) - lVal_62)) goto LAB_1800cbf0b;
                uVal_60 = DAT_18083b3d8 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_62,uVal_60);
            }
            _DAT_18083b3c0 = uVal_54;
            _DAT_18083b3c8 = uVal_55;
            uRam000000018083b3cc = uVal_56;
            DAT_18083b3d0._0_4_ = uVal_57;
            DAT_18083b3d0._4_4_ = uVal_58;
            DAT_18083b3d8 = uVal_61;
            if (0xf < DAT_18083b3f8) {
              uVal_61 = DAT_18083b3f8 + 1;
              lVal_62 = _DAT_18083b3e0;
              if (0xfff < uVal_61) {
                lVal_62 = *(int64_t *)(_DAT_18083b3e0 + -8);
                if (0x1f < (uint64_t)((_DAT_18083b3e0 + -8) - lVal_62)) goto LAB_1800cbf0b;
                uVal_61 = DAT_18083b3f8 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_62,uVal_61);
            }
            _DAT_18083b3e0 = uVal_49;
            _DAT_18083b3e8 = uVal_50;
            uRam000000018083b3ec = uVal_51;
            DAT_18083b3f0._0_4_ = uVal_52;
            DAT_18083b3f0._4_4_ = uVal_53;
            DAT_18083b3f8 = uVal_67;
            return &DAT_18083adc0;
          }
          goto LAB_1800cbfd3;
        }
      }
    }
  }
LAB_1800cbf06:
  func_0x18007ba70();
LAB_1800cbf0b:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800cbfe0
void Unwind_1800cbfe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc020
void Unwind_1800cc020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc060
void Unwind_1800cc060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc0a0
void Unwind_1800cc0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc0e0
void Unwind_1800cc0e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc120
void Unwind_1800cc120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc160
void Unwind_1800cc160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc1a0
void Unwind_1800cc1a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc1e0
void Unwind_1800cc1e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}
