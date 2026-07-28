#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x1800968f0
uint64_t * func_0x1800968f0(uint64_t *param_1,uint32_t *param_2,char *param_3)
{
  size_t sz_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint8_t *pU64_5;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t local_50;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_68 = ZEXT816(0);
  sz_1 = strlen(param_3);
  if (-1 < (int64_t)sz_1) {
    if (sz_1 < 0x10) {
      pU64_5 = local_68;
      uVal_4 = 0xf;
    }
    else {
      uVal_2 = sz_1 | 0xf;
      uVal_4 = 0x16;
      if (0x16 < uVal_2) {
        uVal_4 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        pU64_5 = (uint8_t *)func_0x180672de0(uVal_4 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_4 + 0x28);
        pU64_5 = (uint8_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -8) = lVal_3;
      }
      local_68._0_8_ = pU64_5;
    }
    local_58 = sz_1;
    local_50 = uVal_4;
    func_0x1806aa960(pU64_5,param_3,sz_1);
    pU64_5[sz_1] = 0;
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = param_2[2];
    uStack_6c = param_2[3];
    func_0x180089820(param_1,&local_78,local_68);
    if (0xf < local_50) {
      uVal_4 = local_50 + 1;
      lVal_3 = local_68._0_8_;
      if (0xfff < uVal_4) {
        lVal_3 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_3)) goto LAB_180096a16;
        uVal_4 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_4);
    }
    *param_1 = std::system_error::vftable;
    return param_1;
  }
  func_0x18007ba70();
LAB_180096a16:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180096a20
void Unwind_180096a20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// func_0x180096a50
int64_t * func_0x180096a50(int64_t param_1)
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
  pLong_1 = DAT_18083ec20;
  if (DAT_180841fd8 == 0) {
    func_0x180673560(local_a8,0);
    if (DAT_180841fd8 == 0) {
      DAT_180841fd8 = (int64_t)DAT_180841fc0 + 1;
      DAT_180841fc0 = (int)DAT_180841fd8;
    }
    func_0x1806735b0(local_a8);
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_180841fd8 < *(uint64_t *)(lVal_3 + 0x18)) goto LAB_180096ae0;
  }
  else {
    lVal_3 = *(int64_t *)(param_1 + 8);
    if (DAT_180841fd8 < *(uint64_t *)(lVal_3 + 0x18)) {
LAB_180096ae0:
      pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + DAT_180841fd8 * 8);
      if (pLong_5 != (int64_t *)0x0) goto LAB_180096ba2;
    }
  }
  uVal_2 = DAT_180841fd8;
  if ((((*(char *)(lVal_3 + 0x24) != '\x01') ||
       (lVal_3 = func_0x180673c90(), *(uint64_t *)(lVal_3 + 0x18) <= uVal_2)) ||
      (pLong_5 = *(int64_t **)(*(int64_t *)(lVal_3 + 0x10) + uVal_2 * 8), pLong_5 == (int64_t *)0x0))
     && (pLong_5 = pLong_1, pLong_1 == (int64_t *)0x0)) {
    local_40 = (int64_t *)func_0x180672de0(0x30);
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
    *local_40 = (int64_t)std::ctype<char>::vftable;
    func_0x180675b70(local_40 + 2);
    func_0x18008ca70(local_a8);
    func_0x180673910(pLong_1);
    pLong_5 = local_40;
    (**(func_ptr_t *)(*local_40 + 8))(local_40);
    DAT_18083ec20 = pLong_5;
  }
LAB_180096ba2:
  func_0x1806735b0(local_34);
  return pLong_5;
}

// Unwind@180096bc0
void Unwind_180096bc0(uint64_t param_1,int64_t param_2)
{
  func_0x1806735b0(param_2 + 0x94);
  return;
}

// Unwind@180096bf0
void Unwind_180096bf0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x88),0x30);
  return;
}

// Unwind@180096c20
void Unwind_180096c20(uint64_t param_1,int64_t param_2)
{
  (**(func_ptr_t *)**(uint64_t **)(param_2 + 0x88))(*(uint64_t **)(param_2 + 0x88),1);
  return;
}

// func_0x180096d40
uint64_t * func_0x180096d40(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = std::ctype<char>::vftable;
  if (*(int *)(param_1 + 4) < 1) {
    if ((*(int *)(param_1 + 4) < 0) && (param_1[3] != 0)) {
      thunk_FUN_180695dd0();
    }
  }
  else {
    thunk_FUN_180695dd0(param_1[3]);
  }
  thunk_FUN_180695dd0(param_1[5]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180695dd0(param_1,0x30);
  }
  return param_1;
}

// func_0x180096da0
void func_0x180096da0(int64_t param_1,uint param_2,char param_3)
{
  func_ptr_t fnPtr_1;
  char *fnPtr_2;
  uint uVal_3;
  uint64_t uVal_4;
  char *fnPtr_5;
  uint8_t auStack_68 [32];
  uint32_t local_48 [2];
  uint8_t **local_40;
  uint8_t local_38 [40];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  uVal_3 = param_2 & 0x17 | (uint)(*(int64_t *)(param_1 + 0x48) == 0) << 2;
  *(uint *)(param_1 + 0x10) = uVal_3;
  uVal_3 = uVal_3 & *(uint *)(param_1 + 0x14);
  uVal_4 = (uint64_t)uVal_3;
  if (uVal_3 == 0) {
    if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_68)) {
      return;
    }
  }
  else {
    if (param_3 == '\0') goto LAB_180096e03;
    uVal_4 = 0;
    func_0x18067a120(0);
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_68);
LAB_180096e03:
  fnPtr_2 = "ios_base::failbit set";
  if ((uVal_4 & 2) == 0) {
    fnPtr_2 = "ios_base::eofbit set";
  }
  fnPtr_5 = "ios_base::badbit set";
  if ((uVal_4 & 4) == 0) {
    fnPtr_5 = fnPtr_2;
  }
  local_48[0] = 1;
  local_40 = &PTR_vftable_1806b0968;
  func_0x180096770(local_38,fnPtr_5,local_48);
  func_0x18067a120(local_38,&DAT_180768ca8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180096eb0
void Unwind_180096eb0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180096f30
void Unwind_180096f30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180096f50
int64_t ** func_0x180096f50(int64_t **param_1,int64_t *param_2)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  
  *param_1 = param_2;
  lVal_2 = (int64_t)*(int *)(*param_2 + 4);
  pLong_1 = *(int64_t **)((int64_t)param_2 + lVal_2 + 0x48);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 8))();
    lVal_2 = (int64_t)*(int *)(*param_2 + 4);
  }
  if (*(int *)((int64_t)param_2 + lVal_2 + 0x10) == 0) {
    pLong_1 = *(int64_t **)((int64_t)param_2 + lVal_2 + 0x50);
    if ((pLong_1 == (int64_t *)0x0) || (pLong_1 == param_2)) {
      *(uint8_t *)(param_1 + 1) = 1;
    }
    else {
      func_0x180097080();
      *(bool *)(param_1 + 1) =
           *(int *)((int64_t)param_2 + (int64_t)*(int *)(*param_2 + 4) + 0x10) == 0;
    }
  }
  else {
    *(uint8_t *)(param_1 + 1) = 0;
  }
  return param_1;
}

// Unwind@180096fe0
void Unwind_180096fe0(uint64_t param_1,int64_t param_2)
{
  func_0x180097250(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x180097010
void func_0x180097010(int64_t **param_1)
{
  int64_t *pLong_1;
  int iVal_2;
  
  iVal_2 = thunk_FUN_18067b540();
  if (iVal_2 == 0) {
    func_0x1800972b0(*param_1);
  }
  pLong_1 = *(int64_t **)((int64_t)*param_1 + (int64_t)*(int *)(**param_1 + 4) + 0x48);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x10))();
  }
  return;
}

// Unwind@180097060
void Unwind_180097060(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180097080
int64_t * func_0x180097080(int64_t *param_1)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint uVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  char *fnPtr_6;
  char *fnPtr_7;
  uint8_t **local_78 [5];
  uint32_t local_50 [2];
  uint8_t **local_48;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  uint local_24;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  pLong_4 = *(int64_t **)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x48);
  if (pLong_4 != (int64_t *)0x0) {
    func_0x180096f50(&local_40,param_1);
    if (local_38 == '\x01') {
      local_30 = param_1;
      iVal_2 = (**(func_ptr_t *)(*pLong_4 + 0x68))(pLong_4);
      local_24 = (uint)(iVal_2 == -1) << 2;
      lVal_5 = (int64_t)*(int *)(*local_30 + 4);
      uVal_3 = *(uint *)((int64_t)local_30 + lVal_5 + 0x10) & 0x17 |
              (uint)(*(int64_t *)((int64_t)local_30 + lVal_5 + 0x48) == 0) << 2 | local_24;
      *(uint *)((int64_t)local_30 + lVal_5 + 0x10) = uVal_3;
      uVal_3 = uVal_3 & *(uint *)((int64_t)local_30 + lVal_5 + 0x14);
      param_1 = local_30;
      if (uVal_3 != 0) {
        fnPtr_6 = "ios_base::failbit set";
        if ((uVal_3 & 2) == 0) {
          fnPtr_6 = "ios_base::eofbit set";
        }
        fnPtr_7 = "ios_base::badbit set";
        if ((uVal_3 & 4) == 0) {
          fnPtr_7 = fnPtr_6;
        }
        local_50[0] = 1;
        local_48 = &PTR_vftable_1806b0968;
        func_0x1800968f0(local_78,local_50,fnPtr_7);
        local_78[0] = std::ios_base::failure::vftable;
        func_0x18067a120(local_78,&DAT_180768ca8);
        fnPtr_1 = (func_ptr_t )swi(3);
        pLong_4 = (int64_t *)(*fnPtr_1)();
        return pLong_4;
      }
    }
    iVal_2 = thunk_FUN_18067b540();
    if (iVal_2 == 0) {
      func_0x1800972b0(local_40);
    }
    pLong_4 = *(int64_t **)((int64_t)local_40 + (int64_t)*(int *)(*local_40 + 4) + 0x48);
    if (pLong_4 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_4 + 0x10))();
    }
  }
  return param_1;
}

// Catch_All@1800971b0
uint64_t Catch_All_1800971b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800966b0((int64_t)*(int *)(**(int64_t **)(param_2 + 0x68) + 4) +
                (int64_t)*(int64_t **)(param_2 + 0x68),4,1);
  *(uint32_t *)(param_2 + 0x74) = 0;
  return 0x1800970e0;
}

// Unwind@180097200
void Unwind_180097200(uint64_t param_1,int64_t param_2)
{
  func_0x180097010(param_2 + 0x58);
  return;
}

// Unwind@180097230
void Unwind_180097230(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180097250
void func_0x180097250(int64_t **param_1)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)((int64_t)*param_1 + (int64_t)*(int *)(**param_1 + 4) + 0x48);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x10))();
  }
  return;
}

// Unwind@180097290
void Unwind_180097290(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800972b0
void func_0x1800972b0(int64_t *param_1)
{
  uint uVal_1;
  func_ptr_t fnPtr_2;
  int iVal_3;
  uint uVal_4;
  int64_t lVal_5;
  char *fnPtr_6;
  char *fnPtr_7;
  uint8_t **local_50 [5];
  uint32_t local_28 [2];
  uint8_t **local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVal_5 = (int64_t)*(int *)(*param_1 + 4);
  if ((*(int *)((int64_t)param_1 + lVal_5 + 0x10) == 0) &&
     ((*(byte *)((int64_t)param_1 + lVal_5 + 0x18) & 2) != 0)) {
    iVal_3 = (**(func_ptr_t *)(**(int64_t **)((int64_t)param_1 + lVal_5 + 0x48) + 0x68))();
    if (iVal_3 == -1) {
      lVal_5 = (int64_t)*(int *)(*param_1 + 4);
      uVal_4 = *(uint *)((int64_t)param_1 + lVal_5 + 0x10) & 0x13 | 4;
      *(uint *)((int64_t)param_1 + lVal_5 + 0x10) = uVal_4;
      uVal_1 = *(uint *)((int64_t)param_1 + lVal_5 + 0x14);
      uVal_4 = uVal_4 & uVal_1;
      if (uVal_4 != 0) {
        fnPtr_6 = "ios_base::failbit set";
        if ((uVal_4 & 2) == 0) {
          fnPtr_6 = "ios_base::eofbit set";
        }
        fnPtr_7 = "ios_base::badbit set";
        if ((uVal_1 & 4) == 0) {
          fnPtr_7 = fnPtr_6;
        }
        local_28[0] = 1;
        local_20 = &PTR_vftable_1806b0968;
        func_0x1800968f0(local_50,local_28,fnPtr_7);
        local_50[0] = std::ios_base::failure::vftable;
        func_0x18067a120(local_50,&DAT_180768ca8);
        fnPtr_2 = (func_ptr_t )swi(3);
        (*fnPtr_2)();
        return;
      }
    }
  }
  return;
}

// Catch_All@180097370
uint64_t Catch_All_180097370(void)
{
  return 0x180097309;
}

// Unwind@180097390
void Unwind_180097390(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800973b0
uint32_t * func_0x1800973b0(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_2 = func_0x180672de0(0x30);
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

// Unwind@1800974d0
void Unwind_1800974d0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x180082180(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x180097520
void func_0x180097520(uint64_t param_1,char param_2)
{
  if (param_2 != '\0') {
    thunk_FUN_180695dd0(param_1,0x10);
    return;
  }
  return;
}

// func_0x180097550
void func_0x180097550(int64_t param_1,char param_2,uint8_t **param_3)
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
    func_0x18009cd50(param_1,&local_b8);
    if (param_2 != '\0') {
      iVal_5 = func_0x180098200(param_1 + 0x48);
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
        if (local_8f == '\x01') goto LAB_180097b17;
        if (0xf < local_e0) {
          uVal_6 = local_e0 + 1;
          lVal_7 = local_f8[0];
          if (0xfff < uVal_6) {
            lVal_7 = *(int64_t *)(local_f8[0] + -8);
            if (0x1f < (uint64_t)((local_f8[0] + -8) - lVal_7)) goto LAB_180097aee;
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
            if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_180097aee;
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
            if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_180097aee;
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
LAB_180097aee:
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
    func_0x18009a960(param_1,local_270);
    if (param_2 != '\0') {
      iVal_5 = func_0x180098200(param_1 + 0x48);
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
LAB_180097b17:
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
            if (0x1f < (uint64_t)((local_f8[0] + -8) - lVal_7)) goto LAB_180097aee;
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
            if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_180097aee;
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
            if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_180097aee;
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

// Unwind@180097b40
void Unwind_180097b40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x128);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf0));
  }
  return;
}

// Unwind@180097b90
void Unwind_180097b90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@180097bd0
void Unwind_180097bd0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x1e0);
  return;
}

// Unwind@180097c10
void Unwind_180097c10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@180097c50
void Unwind_180097c50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@180097c90
void Unwind_180097c90(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180097cb0
void Unwind_180097cb0(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbf0(param_2 + 0x28);
  return;
}

// Unwind@180097ce0
void Unwind_180097ce0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@180097d20
void Unwind_180097d20(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x130);
  return;
}

// Unwind@180097d60
void Unwind_180097d60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@180097da0
void Unwind_180097da0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@180097de0
void Unwind_180097de0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180097e00
void Unwind_180097e00(uint64_t param_1,int64_t param_2)
{
  func_0x18009e380(param_2 + 0x1e0);
  return;
}

// Unwind@180097e40
void Unwind_180097e40(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180097e60
void func_0x180097e60(int64_t *param_1)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  uVal_5 = param_1[0x16];
  if (0xf < uVal_5) {
    lVal_1 = param_1[0x13];
    uVal_3 = uVal_5 + 1;
    lVal_4 = lVal_1;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) goto LAB_180097f40;
      uVal_3 = uVal_5 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0xf;
  *(uint8_t *)(param_1 + 0x13) = 0;
  lVal_1 = param_1[0x10];
  if (lVal_1 != 0) {
    uVal_5 = param_1[0x12] - lVal_1;
    lVal_4 = lVal_1;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) {
LAB_180097f40:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
    param_1[0x12] = 0;
  }
  pLong_2 = (int64_t *)param_1[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_1);
    param_1[7] = 0;
  }
  return;
}

// func_0x180097f50
int64_t func_0x180097f50(int64_t param_1,uint32_t *param_2,int64_t *param_3,uint8_t param_4, uint8_t param_5)
{
  uint64_t *pU64_1;
  int64_t *pLong_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  int iVal_5;
  uint32_t uVal_6;
  uint64_t uVal_7;
  char **ptr2_Char_8;
  
  *(uint64_t *)(param_1 + 0x38) = 0;
  pU64_1 = (uint64_t *)param_3[7];
  if (pU64_1 != (uint64_t *)0x0) {
    uVal_7 = (**(func_ptr_t *)*pU64_1)(pU64_1,param_1);
    *(uint64_t *)(param_1 + 0x38) = uVal_7;
  }
  *(uint32_t *)(param_1 + 0x40) = 0;
  uVal_6 = param_2[1];
  uVal_3 = param_2[2];
  uVal_4 = param_2[3];
  *(uint32_t *)(param_1 + 0x48) = *param_2;
  *(uint32_t *)(param_1 + 0x4c) = uVal_6;
  *(uint32_t *)(param_1 + 0x50) = uVal_3;
  *(uint32_t *)(param_1 + 0x54) = uVal_4;
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
  ptr2_Char_8 = (char **)func_0x18068c080();
  if (*ptr2_Char_8 == (char *)0x0) {
    iVal_5 = 0x2e;
  }
  else {
    iVal_5 = (int)**ptr2_Char_8;
  }
  *(int *)(param_1 + 0xd8) = iVal_5;
  *(uint8_t *)(param_1 + 0xe0) = param_4;
  uVal_6 = func_0x180098200(param_1 + 0x48);
  *(uint32_t *)(param_1 + 0x40) = uVal_6;
  pLong_2 = (int64_t *)param_3[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_3);
  }
  return param_1;
}

// Unwind@180098070
void Unwind_180098070(uint64_t param_1,int64_t param_2)
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

// Unwind@1800980c0
void Unwind_1800980c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  
  func_0x180098150(*(uint64_t *)(param_2 + 0x20));
  pLong_1 = *(int64_t **)(param_2 + 0x30);
  pLong_2 = (int64_t *)pLong_1[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != pLong_1);
    pLong_1[7] = 0;
  }
  return;
}

// Unwind@180098110
void Unwind_180098110(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x28) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x28));
  }
  return;
}

// func_0x180098150
void func_0x180098150(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  uVal_4 = *(uint64_t *)(param_1 + 0x68);
  if (0xf < uVal_4) {
    lVal_1 = *(int64_t *)(param_1 + 0x50);
    uVal_2 = uVal_4 + 1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1800981f5;
      uVal_2 = uVal_4 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0xf;
  *(uint8_t *)(param_1 + 0x50) = 0;
  lVal_1 = *(int64_t *)(param_1 + 0x38);
  if (lVal_1 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 0x48) - lVal_1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) {
LAB_1800981f5:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 0x38) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x48) = 0;
  }
  return;
}

// func_0x180098200
uint64_t func_0x180098200(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  char ch_2;
  int iVal_3;
  uint64_t uVal_4;
  char *fnPtr_5;
  uint8_t auStack_38 [32];
  uint32_t local_18;
  uint8_t local_14;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_38;
  if ((*(int64_t *)(param_1 + 0x20) == 0) && (ch_2 = func_0x1800983d0(param_1), ch_2 == '\0')) {
    fnPtr_5 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
LAB_1800982b9:
    *(char **)(param_1 + 0x70) = fnPtr_5;
LAB_1800982bd:
    uVal_4 = 0xe;
    goto LAB_1800982c2;
  }
  func_0x180098670(param_1);
  iVal_3 = *(int *)(param_1 + 0x14);
  if ((iVal_3 == 0x2f & *(byte *)(param_1 + 0x10)) == 1) {
    do {
      ch_2 = func_0x180098780(param_1);
      if (ch_2 == '\0') goto LAB_1800982bd;
      func_0x180098670(param_1);
      iVal_3 = *(int *)(param_1 + 0x14);
    } while ((*(char *)(param_1 + 0x10) == '\x01') && (iVal_3 == 0x2f));
  }
  switch(iVal_3) {
  default:
    fnPtr_5 = "invalid literal";
    goto LAB_1800982b9;
  case 0x22:
    if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
      uVal_4 = func_0x180098c50(param_1);
      return uVal_4;
    }
    goto LAB_1800983c2;
  case 0x2c:
    uVal_4 = 0xd;
    break;
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
    if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
      uVal_4 = func_0x180099630(param_1);
      return uVal_4;
    }
    goto LAB_1800983c2;
  case 0x3a:
    uVal_4 = 0xc;
    break;
  case 0x5b:
    uVal_4 = 8;
    break;
  case 0x5d:
    uVal_4 = 10;
    break;
  case 0x66:
    local_14 = 0x65;
    local_18 = 0x736c6166;
    uVal_4 = func_0x180098b00(param_1,&local_18,5,2);
    break;
  case 0x6e:
    local_18 = 0x6c6c756e;
    uVal_4 = func_0x180098b00(param_1,&local_18,4,3);
    break;
  case 0x74:
    local_18 = 0x65757274;
    uVal_4 = func_0x180098b00(param_1,&local_18,4,1);
    break;
  case 0x7b:
    uVal_4 = 9;
    break;
  case 0x7d:
    uVal_4 = 0xb;
    break;
  case -1:
  case 0:
    uVal_4 = 0xf;
  }
LAB_1800982c2:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return uVal_4;
  }
LAB_1800983c2:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_1)();
  return uVal_4;
}

// func_0x1800983d0
uint64_t func_0x1800983d0(byte **param_1)
{
  byte *pU8_1;
  byte bFlag_2;
  byte *pU8_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint uVal_6;
  int iVal_7;
  byte *pU8_8;
  byte local_b;
  byte local_a;
  byte local_9;
  
  pU8_3 = param_1[4];
  pU8_8 = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  param_1[5] = pU8_8;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint8_t *)(param_1 + 3) = 0;
    uVal_6 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    pU8_1 = *param_1;
    if (pU8_1 == param_1[1]) {
      uVal_6 = 0xffffffff;
    }
    else {
      uVal_6 = (uint)*pU8_1;
      *param_1 = pU8_1 + 1;
    }
    *(uint *)((int64_t)param_1 + 0x14) = uVal_6;
  }
  if (uVal_6 == 0xffffffff) {
    iVal_7 = -1;
    *(uint8_t *)(param_1 + 3) = 1;
    param_1[4] = pU8_3;
    if (pU8_8 != (byte *)0x0) {
LAB_180098510:
      param_1[5] = pU8_8 + -1;
      goto LAB_180098628;
    }
LAB_180098618:
    pU8_3 = param_1[6];
    if (pU8_3 == (byte *)0x0) goto LAB_180098628;
  }
  else {
    local_b = (byte)uVal_6;
    pU8_3 = param_1[8];
    if (pU8_3 == param_1[9]) {
      func_0x180099ff0(param_1 + 7,pU8_3,&local_b);
      iVal_7 = *(int *)((int64_t)param_1 + 0x14);
    }
    else {
      *pU8_3 = local_b;
      param_1[8] = param_1[8] + 1;
      iVal_7 = *(int *)((int64_t)param_1 + 0x14);
    }
    if (iVal_7 != 10) {
      if (iVal_7 != 0xef) {
        pU8_8 = param_1[5];
        pU8_3 = param_1[4] + -1;
        *(uint8_t *)(param_1 + 3) = 1;
        param_1[4] = pU8_3;
        if (pU8_8 == (byte *)0x0) goto LAB_180098618;
        goto LAB_180098510;
      }
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\x01') {
        *(uint8_t *)(param_1 + 3) = 0;
        local_a = 0xef;
        pU8_3 = param_1[8];
        if (pU8_3 == param_1[9]) goto LAB_180098547;
LAB_18009847f:
        *pU8_3 = local_a;
        param_1[8] = param_1[8] + 1;
        iVal_7 = *(int *)((int64_t)param_1 + 0x14);
      }
      else {
        pU8_3 = *param_1;
        if (pU8_3 == param_1[1]) {
          *(uint32_t *)((int64_t)param_1 + 0x14) = 0xffffffff;
          return 0;
        }
        local_a = *pU8_3;
        *param_1 = pU8_3 + 1;
        *(uint *)((int64_t)param_1 + 0x14) = (uint)local_a;
        pU8_3 = param_1[8];
        if (pU8_3 != param_1[9]) goto LAB_18009847f;
LAB_180098547:
        func_0x180099ff0(param_1 + 7,0xffffffff,&local_a);
        iVal_7 = *(int *)((int64_t)param_1 + 0x14);
      }
      if (iVal_7 != 0xbb) {
        if (iVal_7 == 10) {
          param_1[6] = param_1[6] + 1;
          param_1[5] = (byte *)0x0;
        }
        return 0;
      }
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\x01') {
        *(uint8_t *)(param_1 + 3) = 0;
        bFlag_2 = 0xbb;
        local_9 = 0xbb;
        pU8_3 = param_1[8];
        if (pU8_3 != param_1[9]) goto LAB_18009858f;
LAB_1800985c6:
        func_0x180099ff0(param_1 + 7,0xffffffff,&local_9);
        uVal_6 = *(uint *)((int64_t)param_1 + 0x14);
      }
      else {
        pU8_3 = *param_1;
        if (pU8_3 == param_1[1]) {
          *(uint32_t *)((int64_t)param_1 + 0x14) = 0xffffffff;
          uVal_4 = 0xffffffff;
          goto LAB_1800985ed;
        }
        bFlag_2 = *pU8_3;
        *param_1 = pU8_3 + 1;
        *(uint *)((int64_t)param_1 + 0x14) = (uint)bFlag_2;
        pU8_3 = param_1[8];
        local_9 = bFlag_2;
        if (pU8_3 == param_1[9]) goto LAB_1800985c6;
LAB_18009858f:
        *pU8_3 = bFlag_2;
        param_1[8] = param_1[8] + 1;
        uVal_6 = *(uint *)((int64_t)param_1 + 0x14);
      }
      uVal_4 = (uint64_t)uVal_6;
      if (uVal_6 == 10) {
        param_1[6] = param_1[6] + 1;
        param_1[5] = (byte *)0x0;
        uVal_4 = 10;
      }
LAB_1800985ed:
      return CONCAT71((int7)(uVal_4 >> 8),(int)uVal_4 == 0xbf);
    }
    pU8_3 = param_1[6] + 1;
    param_1[6] = pU8_3;
    param_1[5] = (byte *)0x0;
    *(uint8_t *)(param_1 + 3) = 1;
    param_1[4] = param_1[4] + -1;
    iVal_7 = 10;
    if (pU8_3 == (byte *)0x0) {
      pU8_3 = (byte *)0x0;
      goto LAB_180098628;
    }
  }
  pU8_3 = pU8_3 + -1;
  param_1[6] = pU8_3;
LAB_180098628:
  uVal_5 = CONCAT71((int7)((uint64_t)pU8_3 >> 8),1);
  if (iVal_7 != -1) {
    param_1[8] = param_1[8] + -1;
    return uVal_5;
  }
  return uVal_5;
}

// func_0x180098670
void func_0x180098670(byte **param_1)
{
  int iVal_1;
  byte *pU8_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  uint8_t auStack_68 [39];
  byte local_41;
  uint64_t local_40;
  
  local_40 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint8_t *)(param_1 + 3) = 0;
    uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    pU8_2 = *param_1;
    if (pU8_2 == param_1[1]) {
      *(uint32_t *)((int64_t)param_1 + 0x14) = 0xffffffff;
      goto LAB_18009874c;
    }
    uVal_4 = (uint)*pU8_2;
    *param_1 = pU8_2 + 1;
    *(uint *)((int64_t)param_1 + 0x14) = uVal_4;
  }
  if (uVal_4 != 0xffffffff) {
    local_41 = (byte)uVal_4;
    pU8_2 = param_1[8];
    if (pU8_2 == param_1[9]) {
      func_0x180099ff0(param_1 + 7,pU8_2,&local_41);
      iVal_1 = *(int *)((int64_t)param_1 + 0x14);
    }
    else {
      *pU8_2 = local_41;
      param_1[8] = param_1[8] + 1;
      iVal_1 = *(int *)((int64_t)param_1 + 0x14);
    }
    if (iVal_1 - 9U < 0x18) {
                    /* WARNING: Could not recover jumptable at 0x00018009873d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(func_ptr_t )(&DAT_1806b12e8 + *(int *)(&DAT_1806b12e8 + (uint64_t)(iVal_1 - 9U) * 4)))();
      return;
    }
  }
LAB_18009874c:
  if (DAT_18083cf40 != (local_40 ^ (uint64_t)auStack_68)) {
    func_0x180673080(local_40 ^ (uint64_t)auStack_68);
    fnPtr_3 = (func_ptr_t )swi(3);
    (*fnPtr_3)();
    return;
  }
  return;
}

// func_0x180098780
uint64_t func_0x180098780(byte **param_1)
{
  byte *pU8_1;
  uint uVal_2;
  int iVal_3;
  byte *pU8_4;
  char *fnPtr_5;
  uint uVal_6;
  byte *pU8_7;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39 [25];
  
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint8_t *)(param_1 + 3) = 0;
    uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    pU8_4 = *param_1;
    if (pU8_4 == param_1[1]) {
      uVal_2 = 0xffffffff;
    }
    else {
      uVal_2 = (uint)*pU8_4;
      *param_1 = pU8_4 + 1;
    }
    *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
  }
  if (uVal_2 != 0xffffffff) {
    local_3c = (byte)uVal_2;
    pU8_4 = param_1[8];
    if (pU8_4 == param_1[9]) {
      func_0x180099ff0(param_1 + 7,pU8_4,&local_3c);
      iVal_3 = *(int *)((int64_t)param_1 + 0x14);
    }
    else {
      *pU8_4 = local_3c;
      param_1[8] = param_1[8] + 1;
      iVal_3 = *(int *)((int64_t)param_1 + 0x14);
    }
    if (iVal_3 == 10) {
      param_1[6] = param_1[6] + 1;
      param_1[5] = (byte *)0x0;
    }
    else {
      if (iVal_3 == 0x2f) {
        iVal_3 = 0x2f;
        do {
          local_3b = (byte)iVal_3;
          param_1[4] = param_1[4] + 1;
          param_1[5] = param_1[5] + 1;
          if (*(char *)(param_1 + 3) == '\x01') {
            *(uint8_t *)(param_1 + 3) = 0;
            pU8_4 = param_1[8];
            if (pU8_4 != param_1[9]) goto LAB_180098a56;
LAB_180098a93:
            func_0x180099ff0(param_1 + 7,pU8_4,&local_3b);
            iVal_3 = *(int *)((int64_t)param_1 + 0x14);
          }
          else {
            pU8_4 = *param_1;
            if (pU8_4 == param_1[1]) {
              *(uint32_t *)((int64_t)param_1 + 0x14) = 0xffffffff;
              return 1;
            }
            local_3b = *pU8_4;
            *param_1 = pU8_4 + 1;
            *(uint *)((int64_t)param_1 + 0x14) = (uint)local_3b;
            pU8_4 = param_1[8];
            if (pU8_4 == param_1[9]) goto LAB_180098a93;
LAB_180098a56:
            *pU8_4 = local_3b;
            param_1[8] = param_1[8] + 1;
            iVal_3 = *(int *)((int64_t)param_1 + 0x14);
          }
          if (iVal_3 + 1U < 2) {
            return 1;
          }
          if (iVal_3 == 0xd) {
            return 1;
          }
          if (iVal_3 == 10) {
            param_1[6] = param_1[6] + 1;
            param_1[5] = (byte *)0x0;
            return 1;
          }
        } while( true );
      }
      if (iVal_3 == 0x2a) {
        uVal_2 = 0x2a;
LAB_180098841:
        do {
          while( true ) {
            param_1[4] = param_1[4] + 1;
            param_1[5] = param_1[5] + 1;
            if (*(char *)(param_1 + 3) == '\x01') {
              *(uint8_t *)(param_1 + 3) = 0;
            }
            else {
              pU8_4 = *param_1;
              if (pU8_4 == param_1[1]) {
                uVal_2 = 0xffffffff;
              }
              else {
                uVal_2 = (uint)*pU8_4;
                *param_1 = pU8_4 + 1;
              }
              *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
            }
            if (uVal_2 == 0xffffffff) goto LAB_180098ac7;
            local_3a = (byte)uVal_2;
            pU8_4 = param_1[8];
            if (pU8_4 != param_1[9]) break;
            func_0x180099ff0(param_1 + 7,pU8_4,&local_3a);
            uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
            if (uVal_2 != 10) goto LAB_1800988b7;
LAB_180098830:
            param_1[6] = param_1[6] + 1;
            param_1[5] = (byte *)0x0;
            uVal_2 = 10;
          }
          *pU8_4 = local_3a;
          param_1[8] = param_1[8] + 1;
          uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
          if (uVal_2 == 10) goto LAB_180098830;
LAB_1800988b7:
          if (uVal_2 == 0x2a) {
            pU8_4 = param_1[4];
            pU8_7 = param_1[5] + 1;
            param_1[4] = param_1[4] + 1;
            param_1[5] = pU8_7;
            if (*(char *)(param_1 + 3) == '\x01') {
              *(uint8_t *)(param_1 + 3) = 0;
              local_39[0] = 0x2a;
              pU8_4 = param_1[8];
              if (pU8_4 == param_1[9]) {
LAB_18009895b:
                func_0x180099ff0(param_1 + 7,pU8_4,local_39);
                uVal_6 = *(uint *)((int64_t)param_1 + 0x14);
                if (uVal_6 == 10) goto LAB_18009896e;
LAB_18009890a:
                if (uVal_6 == 0x2f) {
                  return 1;
                }
                pU8_7 = param_1[5];
                *(uint8_t *)(param_1 + 3) = 1;
                param_1[4] = param_1[4] + -1;
                if (pU8_7 != (byte *)0x0) goto LAB_18009892f;
LAB_1800989e1:
                pU8_4 = param_1[6];
              }
              else {
LAB_1800988fc:
                *pU8_4 = local_39[0];
                param_1[8] = param_1[8] + 1;
                uVal_6 = *(uint *)((int64_t)param_1 + 0x14);
                if (uVal_6 != 10) goto LAB_18009890a;
LAB_18009896e:
                pU8_4 = param_1[6] + 1;
                param_1[6] = pU8_4;
                param_1[5] = (byte *)0x0;
                *(uint8_t *)(param_1 + 3) = 1;
                param_1[4] = param_1[4] + -1;
                uVal_6 = 10;
              }
              if (pU8_4 != (byte *)0x0) {
                param_1[6] = pU8_4 + -1;
              }
            }
            else {
              pU8_1 = *param_1;
              if (pU8_1 != param_1[1]) {
                local_39[0] = *pU8_1;
                *param_1 = pU8_1 + 1;
                *(uint *)((int64_t)param_1 + 0x14) = (uint)local_39[0];
                pU8_4 = param_1[8];
                if (pU8_4 == param_1[9]) goto LAB_18009895b;
                goto LAB_1800988fc;
              }
              *(uint32_t *)((int64_t)param_1 + 0x14) = 0xffffffff;
              uVal_6 = 0xffffffff;
              *(uint8_t *)(param_1 + 3) = 1;
              param_1[4] = pU8_4;
              if (pU8_7 == (byte *)0x0) goto LAB_1800989e1;
LAB_18009892f:
              param_1[5] = pU8_7 + -1;
            }
            uVal_2 = 0xffffffff;
            if (uVal_6 != 0xffffffff) {
              param_1[8] = param_1[8] + -1;
              uVal_2 = uVal_6;
            }
            goto LAB_180098841;
          }
        } while (1 < uVal_2 + 1);
LAB_180098ac7:
        fnPtr_5 = "invalid comment; missing closing \'*/\'";
        goto LAB_180098ace;
      }
    }
  }
  fnPtr_5 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
LAB_180098ace:
  param_1[0xe] = (byte *)fnPtr_5;
  return 0;
}

// func_0x180098b00
uint64_t func_0x180098b00(byte **param_1,int64_t param_2,uint64_t param_3,uint param_4)
{
  int iVal_1;
  byte *pU8_2;
  func_ptr_t fnPtr_3;
  char ch_4;
  uint uVal_5;
  uint64_t uVal_6;
  uint8_t auStack_78 [39];
  byte local_51;
  uint64_t local_50;
  
  local_50 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  if (1 < param_3) {
    uVal_6 = 1;
    do {
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\x01') {
        *(uint8_t *)(param_1 + 3) = 0;
        uVal_5 = *(uint *)((int64_t)param_1 + 0x14);
      }
      else {
        pU8_2 = *param_1;
        if (pU8_2 == param_1[1]) {
          uVal_5 = 0xffffffff;
        }
        else {
          uVal_5 = (uint)*pU8_2;
          *param_1 = pU8_2 + 1;
        }
        *(uint *)((int64_t)param_1 + 0x14) = uVal_5;
      }
      if (uVal_5 == 0xffffffff) {
        if (*(char *)(param_2 + uVal_6) != -1) goto LAB_180098bfc;
      }
      else {
        local_51 = (byte)uVal_5;
        pU8_2 = param_1[8];
        if (pU8_2 == param_1[9]) {
          func_0x180099ff0(param_1 + 7,pU8_2,&local_51);
          iVal_1 = *(int *)((int64_t)param_1 + 0x14);
        }
        else {
          *pU8_2 = local_51;
          param_1[8] = param_1[8] + 1;
          iVal_1 = *(int *)((int64_t)param_1 + 0x14);
        }
        ch_4 = (char)iVal_1;
        if (iVal_1 == 10) {
          param_1[6] = param_1[6] + 1;
          param_1[5] = (byte *)0x0;
          ch_4 = '\n';
        }
        if (*(char *)(param_2 + uVal_6) != ch_4) {
LAB_180098bfc:
          param_1[0xe] = (byte *)"invalid literal";
          param_4 = 0xe;
          break;
        }
      }
      uVal_6 = uVal_6 + 1;
    } while (param_3 != uVal_6);
  }
  if (DAT_18083cf40 == (local_50 ^ (uint64_t)auStack_78)) {
    return (uint64_t)param_4;
  }
  func_0x180673080(local_50 ^ (uint64_t)auStack_78);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_6 = (*fnPtr_3)();
  return uVal_6;
}

// func_0x180098c50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180098c50(byte **param_1)
{
  byte **ptr2_Byte_1;
  char ch_2;
  byte bFlag_3;
  uint uVal_4;
  int iVal_5;
  byte **ptr2_Byte_6;
  byte *pU8_7;
  uint64_t **ptr2_U64_8;
  byte *pU8_9;
  byte **ptr2_Byte_10;
  uint64_t uVal_11;
  char *fnPtr_12;
  uint64_t *local_f8;
  uint64_t *local_f0;
  uint64_t *local_e8;
  uint64_t *local_e0;
  uint64_t *local_d8;
  uint64_t *local_d0;
  uint64_t *local_c8;
  uint64_t *local_c0;
  uint64_t *local_b8;
  uint8_t *local_b0;
  uint64_t *local_a8;
  uint8_t *local_a0;
  uint64_t *local_98;
  uint8_t *local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_78;
  uint8_t local_70 [8];
  uint64_t local_68;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  ptr2_Byte_1 = param_1 + 10;
  param_1[0xc] = (byte *)0x0;
  ptr2_Byte_6 = ptr2_Byte_1;
  if (&DAT_0000000f < param_1[0xd]) {
    ptr2_Byte_6 = (byte **)param_1[10];
  }
  *(uint8_t *)ptr2_Byte_6 = 0;
  pU8_9 = param_1[7];
  pU8_7 = param_1[8];
  if (pU8_9 != param_1[8]) {
    param_1[8] = pU8_9;
    pU8_7 = pU8_9;
  }
  ptr2_Byte_6 = param_1 + 7;
  local_88 = CONCAT71(local_88._1_7_,*(byte *)((int64_t)param_1 + 0x14));
  if (pU8_7 == param_1[9]) {
    func_0x180099ff0(ptr2_Byte_6,pU8_7,&local_88);
  }
  else {
    *pU8_7 = *(byte *)((int64_t)param_1 + 0x14);
    param_1[8] = param_1[8] + 1;
  }
LAB_180098cfd:
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint8_t *)(param_1 + 3) = 0;
    uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    pU8_9 = *param_1;
    if (pU8_9 == param_1[1]) {
      uVal_4 = 0xffffffff;
    }
    else {
      uVal_4 = (uint)*pU8_9;
      *param_1 = pU8_9 + 1;
    }
    *(uint *)((int64_t)param_1 + 0x14) = uVal_4;
  }
  if (uVal_4 == 0xffffffff) {
switchD_180098d9f_caseD_ffffffff:
    fnPtr_12 = "invalid string: missing closing quote";
    goto switchD_180098f6d_caseD_23;
  }
  local_88 = CONCAT71(local_88._1_7_,(byte)uVal_4);
  pU8_9 = param_1[8];
  if (pU8_9 == param_1[9]) {
    func_0x180099ff0(ptr2_Byte_6,pU8_9,&local_88);
    uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    *pU8_9 = (byte)uVal_4;
    param_1[8] = param_1[8] + 1;
    uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
  }
  if (uVal_4 == 10) {
    param_1[6] = param_1[6] + 1;
    param_1[5] = (byte *)0x0;
    fnPtr_12 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    goto switchD_180098f6d_caseD_23;
  }
  uVal_11 = (uint64_t)uVal_4;
  switch(uVal_4) {
  case 0:
    fnPtr_12 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    break;
  case 1:
    fnPtr_12 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
    break;
  case 2:
    fnPtr_12 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    break;
  case 3:
    fnPtr_12 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    break;
  case 4:
    fnPtr_12 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    break;
  case 5:
    fnPtr_12 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    break;
  case 6:
    fnPtr_12 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    break;
  case 7:
    fnPtr_12 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    break;
  case 8:
    fnPtr_12 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    break;
  case 9:
    fnPtr_12 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    break;
  default:
    fnPtr_12 = "invalid string: ill-formed UTF-8 byte";
    break;
  case 0xb:
    fnPtr_12 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    break;
  case 0xc:
    fnPtr_12 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    break;
  case 0xd:
    fnPtr_12 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    break;
  case 0xe:
    fnPtr_12 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    break;
  case 0xf:
    fnPtr_12 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    break;
  case 0x10:
    fnPtr_12 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    break;
  case 0x11:
    fnPtr_12 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    break;
  case 0x12:
    fnPtr_12 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    break;
  case 0x13:
    fnPtr_12 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    break;
  case 0x14:
    fnPtr_12 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    break;
  case 0x15:
    fnPtr_12 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    break;
  case 0x16:
    fnPtr_12 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    break;
  case 0x17:
    fnPtr_12 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    break;
  case 0x18:
    fnPtr_12 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    break;
  case 0x19:
    fnPtr_12 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    break;
  case 0x1a:
    fnPtr_12 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    break;
  case 0x1b:
    fnPtr_12 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    break;
  case 0x1c:
    fnPtr_12 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    break;
  case 0x1d:
    fnPtr_12 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    break;
  case 0x1e:
    fnPtr_12 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    break;
  case 0x1f:
    fnPtr_12 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
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
switchD_180098d9f_caseD_20:
    pU8_9 = param_1[0xc];
    if (pU8_9 < param_1[0xd]) {
      param_1[0xc] = pU8_9 + 1;
      ptr2_Byte_10 = ptr2_Byte_1;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Byte_10 = (byte **)param_1[10];
      }
      *(byte *)((int64_t)ptr2_Byte_10 + (int64_t)pU8_9) = (byte)uVal_11;
      ((uint8_t *)((int64_t)ptr2_Byte_10 + 1))[(int64_t)pU8_9] = 0;
    }
    else {
      func_0x18008c590(ptr2_Byte_1,1);
    }
    goto LAB_180098cfd;
  case 0x22:
    return 4;
  case 0x5c:
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    local_88._1_7_ = (undefined7)((uint64_t)local_88 >> 8);
    if (*(char *)(param_1 + 3) == '\x01') {
      *(uint8_t *)(param_1 + 3) = 0;
      bFlag_3 = 0x5c;
      local_88 = CONCAT71(local_88._1_7_,0x5c);
      pU8_9 = param_1[8];
      if (pU8_9 == param_1[9]) goto LAB_180098f3d;
LAB_180098ecb:
      *pU8_9 = bFlag_3;
      param_1[8] = param_1[8] + 1;
    }
    else {
      pU8_9 = *param_1;
      if (pU8_9 == param_1[1]) {
        *(uint32_t *)((int64_t)param_1 + 0x14) = 0xffffffff;
        fnPtr_12 = "invalid string: forbidden character after backslash";
        break;
      }
      bFlag_3 = *pU8_9;
      *param_1 = pU8_9 + 1;
      *(uint *)((int64_t)param_1 + 0x14) = (uint)bFlag_3;
      local_88 = CONCAT71(local_88._1_7_,bFlag_3);
      pU8_9 = param_1[8];
      if (pU8_9 != param_1[9]) goto LAB_180098ecb;
LAB_180098f3d:
      func_0x180099ff0(ptr2_Byte_6,0xffffffff,&local_88);
    }
    fnPtr_12 = "invalid string: forbidden character after backslash";
    switch(*(int *)((int64_t)param_1 + 0x14)) {
    case 0x22:
      pU8_9 = param_1[0xc];
      if (pU8_9 < param_1[0xd]) {
        param_1[0xc] = pU8_9 + 1;
        ptr2_Byte_10 = ptr2_Byte_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Byte_10 = (byte **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Byte_10 + (int64_t)pU8_9) = 0x22;
        goto LAB_180098cfd;
      }
      break;
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
    case 99:
    case 100:
    case 0x65:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
      goto switchD_180098f6d_caseD_23;
    case 0x2f:
      pU8_9 = param_1[0xc];
      if (pU8_9 < param_1[0xd]) {
        param_1[0xc] = pU8_9 + 1;
        ptr2_Byte_10 = ptr2_Byte_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Byte_10 = (byte **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Byte_10 + (int64_t)pU8_9) = 0x2f;
        goto LAB_180098cfd;
      }
      break;
    case 0x5c:
      pU8_9 = param_1[0xc];
      if (pU8_9 < param_1[0xd]) {
        param_1[0xc] = pU8_9 + 1;
        ptr2_Byte_10 = ptr2_Byte_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Byte_10 = (byte **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Byte_10 + (int64_t)pU8_9) = 0x5c;
        goto LAB_180098cfd;
      }
      break;
    case 0x62:
      pU8_9 = param_1[0xc];
      if (pU8_9 < param_1[0xd]) {
        param_1[0xc] = pU8_9 + 1;
        ptr2_Byte_10 = ptr2_Byte_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Byte_10 = (byte **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Byte_10 + (int64_t)pU8_9) = 8;
        goto LAB_180098cfd;
      }
      break;
    case 0x66:
      pU8_9 = param_1[0xc];
      if (pU8_9 < param_1[0xd]) {
        param_1[0xc] = pU8_9 + 1;
        ptr2_Byte_10 = ptr2_Byte_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Byte_10 = (byte **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Byte_10 + (int64_t)pU8_9) = 0xc;
        goto LAB_180098cfd;
      }
      break;
    case 0x6e:
      pU8_9 = param_1[0xc];
      if (pU8_9 < param_1[0xd]) {
        param_1[0xc] = pU8_9 + 1;
        ptr2_Byte_10 = ptr2_Byte_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Byte_10 = (byte **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Byte_10 + (int64_t)pU8_9) = 10;
        goto LAB_180098cfd;
      }
      break;
    case 0x72:
      pU8_9 = param_1[0xc];
      if (pU8_9 < param_1[0xd]) {
        param_1[0xc] = pU8_9 + 1;
        ptr2_Byte_10 = ptr2_Byte_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Byte_10 = (byte **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Byte_10 + (int64_t)pU8_9) = 0xd;
        goto LAB_180098cfd;
      }
      break;
    case 0x74:
      pU8_9 = param_1[0xc];
      if (pU8_9 < param_1[0xd]) {
        param_1[0xc] = pU8_9 + 1;
        ptr2_Byte_10 = ptr2_Byte_1;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Byte_10 = (byte **)param_1[10];
        }
        *(uint16_t *)((int64_t)ptr2_Byte_10 + (int64_t)pU8_9) = 9;
        goto LAB_180098cfd;
      }
      break;
    case 0x75:
      uVal_4 = func_0x18009a190(param_1);
      fnPtr_12 = "invalid string: \'\\u\' must be followed by 4 hex digits";
      if (uVal_4 == 0xffffffff) goto switchD_180098f6d_caseD_23;
      uVal_11 = (uint64_t)uVal_4;
      if ((uVal_4 & 0xfffffc00) == 0xd800) {
        param_1[4] = param_1[4] + 1;
        param_1[5] = param_1[5] + 1;
        if (*(char *)(param_1 + 3) == '\x01') {
          *(uint8_t *)(param_1 + 3) = 0;
          uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
        }
        else {
          pU8_9 = *param_1;
          if (pU8_9 == param_1[1]) {
            uVal_4 = 0xffffffff;
          }
          else {
            uVal_4 = (uint)*pU8_9;
            *param_1 = pU8_9 + 1;
          }
          *(uint *)((int64_t)param_1 + 0x14) = uVal_4;
        }
        if (uVal_4 != 0xffffffff) {
          pU8_9 = param_1[8];
          if (pU8_9 == param_1[9]) {
            local_68 = uVal_11;
            local_88._0_1_ = (byte)uVal_4;
            func_0x180099ff0(ptr2_Byte_6,pU8_9,&local_88);
          }
          else {
            *pU8_9 = (byte)uVal_4;
            param_1[8] = param_1[8] + 1;
            local_68 = uVal_11;
          }
          iVal_5 = *(int *)((int64_t)param_1 + 0x14);
          if (iVal_5 == 0x5c) {
            param_1[4] = param_1[4] + 1;
            param_1[5] = param_1[5] + 1;
            if (*(char *)(param_1 + 3) == '\x01') {
              *(uint8_t *)(param_1 + 3) = 0;
              bFlag_3 = 0x5c;
            }
            else {
              pU8_9 = *param_1;
              if (pU8_9 == param_1[1]) {
                *(uint32_t *)((int64_t)param_1 + 0x14) = 0xffffffff;
                goto LAB_1800995ea;
              }
              bFlag_3 = *pU8_9;
              *param_1 = pU8_9 + 1;
              *(uint *)((int64_t)param_1 + 0x14) = (uint)bFlag_3;
            }
            local_88 = CONCAT71(local_88._1_7_,bFlag_3);
            pU8_9 = param_1[8];
            if (pU8_9 == param_1[9]) {
              func_0x180099ff0(ptr2_Byte_6,pU8_9,&local_88);
            }
            else {
              *pU8_9 = bFlag_3;
              param_1[8] = param_1[8] + 1;
            }
            iVal_5 = *(int *)((int64_t)param_1 + 0x14);
            if (iVal_5 == 0x75) {
              uVal_4 = func_0x18009a190(param_1);
              if ((uVal_4 == 0xffffffff) ||
                 (fnPtr_12 = 
                  "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF",
                 (uVal_4 & 0xfffffc00) != 0xdc00)) goto switchD_180098f6d_caseD_23;
              uVal_11 = (uint64_t)((int)local_68 * 0x400 + uVal_4 + 0xfca02400);
LAB_18009936b:
              local_68 = uVal_11;
              func_0x18009a150(param_1,(uint)(uVal_11 >> 0x12) | 0xf0);
              uVal_4 = (uint)(local_68 >> 0xc) & 0x3f | 0x80;
              goto LAB_180099398;
            }
          }
          fnPtr_12 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
          if (iVal_5 == 10) {
            param_1[6] = param_1[6] + 1;
            param_1[5] = (byte *)0x0;
            goto switchD_180098f6d_caseD_23;
          }
        }
LAB_1800995ea:
        fnPtr_12 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
        goto switchD_180098f6d_caseD_23;
      }
      if ((uVal_4 & 0xfffffc00) == 0xdc00) {
        fnPtr_12 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
        goto switchD_180098f6d_caseD_23;
      }
      if ((int)uVal_4 < 0x80) goto switchD_180098d9f_caseD_20;
      if (uVal_4 < 0x800) {
        uVal_4 = uVal_4 >> 6 | 0xc0;
        local_68 = uVal_11;
      }
      else {
        if (0xffff < uVal_4) goto LAB_18009936b;
        uVal_4 = uVal_4 >> 0xc | 0xe0;
        local_68 = uVal_11;
LAB_180099398:
        func_0x18009a150(param_1,uVal_4);
        uVal_4 = (uint)(local_68 >> 6) & 0x3f | 0x80;
      }
      func_0x18009a150(param_1,uVal_4);
      func_0x18009a150(param_1,(uint)local_68 & 0x3f | 0x80);
      goto LAB_180098cfd;
    default:
      if (*(int *)((int64_t)param_1 + 0x14) == 10) {
        param_1[6] = param_1[6] + 1;
        param_1[5] = (byte *)0x0;
      }
      goto switchD_180098f6d_caseD_23;
    }
    func_0x18008c590(ptr2_Byte_1,1);
    goto LAB_180098cfd;
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
    local_88 = 0xbf00000080;
    ptr2_U64_8 = &local_f8;
    local_f8 = &local_88;
    local_f0 = &uStack_80;
    goto LAB_180098e0e;
  case 0xe0:
    local_e0 = &local_78;
    ptr2_U64_8 = &local_e8;
    local_e8 = &local_88;
    local_88 = _DAT_1806aee90;
    uStack_80 = _UNK_1806aee98;
    goto LAB_180098e0e;
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
    local_d0 = &local_78;
    ptr2_U64_8 = &local_d8;
    local_d8 = &local_88;
    local_88 = _DAT_1806aee80;
    uStack_80 = _UNK_1806aee88;
    goto LAB_180098e0e;
  case 0xed:
    local_c0 = &local_78;
    ptr2_U64_8 = &local_c8;
    local_c8 = &local_88;
    local_88 = _DAT_1806aee70;
    uStack_80 = _UNK_1806aee78;
    goto LAB_180098e0e;
  case 0xf0:
    local_78 = 0xbf00000080;
    ptr2_U64_8 = &local_b8;
    local_b8 = &local_88;
    local_b0 = local_70;
    local_88 = _DAT_1806b0a28;
    uStack_80 = _UNK_1806b0a30;
    goto LAB_180098e0e;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    local_78 = 0xbf00000080;
    ptr2_U64_8 = &local_a8;
    local_a8 = &local_88;
    local_a0 = local_70;
    local_88 = _DAT_1806b0a40;
    uStack_80 = _UNK_1806b0a48;
    goto LAB_180098e0e;
  case 0xf4:
    local_78 = 0xbf00000080;
    ptr2_U64_8 = &local_98;
    local_98 = &local_88;
    local_90 = local_70;
    local_88 = _DAT_1806b0a58;
    uStack_80 = _UNK_1806b0a60;
LAB_180098e0e:
    ch_2 = func_0x18009a4a0(param_1,ptr2_U64_8);
    if (ch_2 == '\0') {
      return 0xe;
    }
    goto LAB_180098cfd;
  case 0xffffffff:
    goto switchD_180098d9f_caseD_ffffffff;
  }
switchD_180098f6d_caseD_23:
  param_1[0xe] = (byte *)fnPtr_12;
  return 0xe;
}

// Unwind@180099600
void Unwind_180099600(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180099630
uint64_t func_0x180099630(byte **param_1)
{
  int iVal_1;
  uint uVal_2;
  byte **ptr2_Byte_3;
  char *fnPtr_4;
  uint32_t *pU64_5;
  byte *pU8_6;
  int *pInt_7;
  byte *pU8_8;
  byte **ptr2_Byte_9;
  byte **ptr2_Byte_10;
  int iVal_11;
  int iVal_12;
  uint64_t local_38;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  ptr2_Byte_10 = param_1 + 10;
  param_1[0xc] = (byte *)0x0;
  ptr2_Byte_3 = ptr2_Byte_10;
  if (&DAT_0000000f < param_1[0xd]) {
    ptr2_Byte_3 = (byte **)param_1[10];
  }
  *(uint8_t *)ptr2_Byte_3 = 0;
  pU8_6 = param_1[7];
  pU8_8 = param_1[8];
  if (pU8_6 != param_1[8]) {
    param_1[8] = pU8_6;
    pU8_8 = pU8_6;
  }
  ptr2_Byte_3 = param_1 + 7;
  local_38 = CONCAT71(local_38._1_7_,*(byte *)((int64_t)param_1 + 0x14));
  if (pU8_8 == param_1[9]) {
    func_0x180099ff0(ptr2_Byte_3,pU8_8,&local_38);
  }
  else {
    *pU8_8 = *(byte *)((int64_t)param_1 + 0x14);
    param_1[8] = param_1[8] + 1;
  }
  iVal_12 = *(int *)((int64_t)param_1 + 0x14);
  if (iVal_12 - 0x31U < 9) {
    pU8_6 = param_1[0xc];
    if (pU8_6 < param_1[0xd]) {
      param_1[0xc] = pU8_6 + 1;
      ptr2_Byte_9 = ptr2_Byte_10;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Byte_9 = (byte **)param_1[10];
      }
      *(byte *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = (byte)iVal_12;
      ((uint8_t *)((int64_t)ptr2_Byte_9 + 1))[(int64_t)pU8_6] = 0;
    }
    else {
      func_0x18008c590(ptr2_Byte_10,1);
    }
    iVal_12 = 5;
LAB_18009982d:
    while( true ) {
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\x01') {
        *(uint8_t *)(param_1 + 3) = 0;
        uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
      }
      else {
        pU8_6 = *param_1;
        if (pU8_6 == param_1[1]) {
          uVal_2 = 0xffffffff;
        }
        else {
          uVal_2 = (uint)*pU8_6;
          *param_1 = pU8_6 + 1;
        }
        *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
      }
      iVal_11 = iVal_12;
      if (uVal_2 == 0xffffffff) goto LAB_180099f71;
      local_38 = CONCAT71(local_38._1_7_,(byte)uVal_2);
      pU8_6 = param_1[8];
      if (pU8_6 == param_1[9]) {
        func_0x180099ff0(ptr2_Byte_3,pU8_6,&local_38);
        iVal_11 = *(int *)((int64_t)param_1 + 0x14);
      }
      else {
        *pU8_6 = (byte)uVal_2;
        param_1[8] = param_1[8] + 1;
        iVal_11 = *(int *)((int64_t)param_1 + 0x14);
      }
      if (9 < iVal_11 - 0x30U) break;
      pU8_6 = param_1[0xc];
      if (pU8_6 < param_1[0xd]) {
        param_1[0xc] = pU8_6 + 1;
        ptr2_Byte_9 = ptr2_Byte_10;
        if (&DAT_0000000f < param_1[0xd]) {
          ptr2_Byte_9 = (byte **)param_1[10];
        }
        *(byte *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = (byte)iVal_11;
        ((uint8_t *)((int64_t)ptr2_Byte_9 + 1))[(int64_t)pU8_6] = 0;
      }
      else {
        func_0x18008c590(ptr2_Byte_10,1);
      }
    }
  }
  else {
    if (iVal_12 != 0x30) {
      if (iVal_12 == 0x2d) {
        pU8_6 = param_1[0xc];
        if (pU8_6 < param_1[0xd]) {
          param_1[0xc] = pU8_6 + 1;
          ptr2_Byte_9 = ptr2_Byte_10;
          if (&DAT_0000000f < param_1[0xd]) {
            ptr2_Byte_9 = (byte **)param_1[10];
          }
          *(uint16_t *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = 0x2d;
        }
        else {
          func_0x18008c590(ptr2_Byte_10,1);
        }
      }
      param_1[4] = param_1[4] + 1;
      param_1[5] = param_1[5] + 1;
      if (*(char *)(param_1 + 3) == '\x01') {
        *(uint8_t *)(param_1 + 3) = 0;
        uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
      }
      else {
        pU8_6 = *param_1;
        if (pU8_6 == param_1[1]) {
          uVal_2 = 0xffffffff;
        }
        else {
          uVal_2 = (uint)*pU8_6;
          *param_1 = pU8_6 + 1;
        }
        *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
      }
      if (uVal_2 != 0xffffffff) {
        local_38 = CONCAT71(local_38._1_7_,(byte)uVal_2);
        pU8_6 = param_1[8];
        if (pU8_6 == param_1[9]) {
          func_0x180099ff0(ptr2_Byte_3,pU8_6,&local_38);
          iVal_12 = *(int *)((int64_t)param_1 + 0x14);
        }
        else {
          *pU8_6 = (byte)uVal_2;
          param_1[8] = param_1[8] + 1;
          iVal_12 = *(int *)((int64_t)param_1 + 0x14);
        }
        if (iVal_12 - 0x31U < 9) {
          pU8_6 = param_1[0xc];
          if (pU8_6 < param_1[0xd]) {
            param_1[0xc] = pU8_6 + 1;
            ptr2_Byte_9 = ptr2_Byte_10;
            if (&DAT_0000000f < param_1[0xd]) {
              ptr2_Byte_9 = (byte **)param_1[10];
            }
            *(byte *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = (byte)iVal_12;
            ((uint8_t *)((int64_t)ptr2_Byte_9 + 1))[(int64_t)pU8_6] = 0;
            iVal_12 = 6;
          }
          else {
            func_0x18008c590(ptr2_Byte_10,1);
            iVal_12 = 6;
          }
          goto LAB_18009982d;
        }
        if (iVal_12 == 0x30) {
          func_0x18009a150(param_1,0x30);
          iVal_12 = 6;
          goto LAB_180099956;
        }
        if (iVal_12 == 10) {
          param_1[6] = param_1[6] + 1;
          param_1[5] = (byte *)0x0;
        }
      }
      fnPtr_4 = "invalid number; expected digit after \'-\'";
      goto LAB_180099baf;
    }
    pU8_6 = param_1[0xc];
    if (pU8_6 < param_1[0xd]) {
      param_1[0xc] = pU8_6 + 1;
      ptr2_Byte_9 = ptr2_Byte_10;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Byte_9 = (byte **)param_1[10];
      }
      *(uint16_t *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = 0x30;
    }
    else {
      func_0x18008c590(ptr2_Byte_10,1);
    }
    iVal_12 = 5;
LAB_180099956:
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(uint8_t *)(param_1 + 3) = 0;
      uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
    }
    else {
      pU8_6 = *param_1;
      if (pU8_6 == param_1[1]) {
        uVal_2 = 0xffffffff;
      }
      else {
        uVal_2 = (uint)*pU8_6;
        *param_1 = pU8_6 + 1;
      }
      *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
    }
    iVal_11 = iVal_12;
    if (uVal_2 == 0xffffffff) {
LAB_180099f71:
      iVal_12 = iVal_11;
      iVal_11 = -1;
      goto LAB_180099cf5;
    }
    local_38 = CONCAT71(local_38._1_7_,(byte)uVal_2);
    pU8_6 = param_1[8];
    if (pU8_6 == param_1[9]) {
      func_0x180099ff0(ptr2_Byte_3,pU8_6,&local_38);
    }
    else {
      *pU8_6 = (byte)uVal_2;
      param_1[8] = param_1[8] + 1;
    }
    iVal_11 = *(int *)((int64_t)param_1 + 0x14);
  }
  if (0x44 < iVal_11) {
    if ((iVal_11 != 0x45) && (iVal_11 != 0x65)) goto LAB_180099cf5;
LAB_180099a24:
    pU8_6 = param_1[0xc];
    if (pU8_6 < param_1[0xd]) {
      param_1[0xc] = pU8_6 + 1;
      ptr2_Byte_9 = ptr2_Byte_10;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Byte_9 = (byte **)param_1[10];
      }
      *(byte *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = (byte)iVal_11;
      ((uint8_t *)((int64_t)ptr2_Byte_9 + 1))[(int64_t)pU8_6] = 0;
    }
    else {
      func_0x18008c590(ptr2_Byte_10,1);
    }
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(uint8_t *)(param_1 + 3) = 0;
      uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
    }
    else {
      pU8_6 = *param_1;
      if (pU8_6 == param_1[1]) {
        uVal_2 = 0xffffffff;
      }
      else {
        uVal_2 = (uint)*pU8_6;
        *param_1 = pU8_6 + 1;
      }
      *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
    }
    if (uVal_2 != 0xffffffff) {
      local_38 = CONCAT71(local_38._1_7_,(byte)uVal_2);
      pU8_6 = param_1[8];
      if (pU8_6 == param_1[9]) {
        func_0x180099ff0(ptr2_Byte_3,pU8_6,&local_38);
        iVal_11 = *(int *)((int64_t)param_1 + 0x14);
      }
      else {
        *pU8_6 = (byte)uVal_2;
        param_1[8] = param_1[8] + 1;
        iVal_11 = *(int *)((int64_t)param_1 + 0x14);
      }
      if (iVal_11 - 0x30U < 10) {
LAB_180099eb7:
        do {
          pU8_6 = param_1[0xc];
          if (pU8_6 < param_1[0xd]) {
            param_1[0xc] = pU8_6 + 1;
            ptr2_Byte_9 = ptr2_Byte_10;
            if (&DAT_0000000f < param_1[0xd]) {
              ptr2_Byte_9 = (byte **)param_1[10];
            }
            *(byte *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = (byte)iVal_11;
            ((uint8_t *)((int64_t)ptr2_Byte_9 + 1))[(int64_t)pU8_6] = 0;
          }
          else {
            func_0x18008c590(ptr2_Byte_10,1);
          }
          param_1[4] = param_1[4] + 1;
          param_1[5] = param_1[5] + 1;
          if (*(char *)(param_1 + 3) == '\x01') {
            *(uint8_t *)(param_1 + 3) = 0;
            uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
          }
          else {
            pU8_6 = *param_1;
            if (pU8_6 == param_1[1]) {
              uVal_2 = 0xffffffff;
            }
            else {
              uVal_2 = (uint)*pU8_6;
              *param_1 = pU8_6 + 1;
            }
            *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
          }
          iVal_12 = 7;
          iVal_11 = 7;
          if (uVal_2 == 0xffffffff) goto LAB_180099f71;
          local_38 = CONCAT71(local_38._1_7_,(byte)uVal_2);
          pU8_6 = param_1[8];
          if (pU8_6 == param_1[9]) {
            func_0x180099ff0(ptr2_Byte_3,pU8_6,&local_38);
            iVal_11 = *(int *)((int64_t)param_1 + 0x14);
          }
          else {
            *pU8_6 = (byte)uVal_2;
            param_1[8] = param_1[8] + 1;
            iVal_11 = *(int *)((int64_t)param_1 + 0x14);
          }
          iVal_1 = 7;
          if (iVal_11 == 10) goto LAB_180099ce3;
        } while (iVal_11 - 0x30U < 10);
        goto LAB_180099cf5;
      }
      if ((iVal_11 == 0x2d) || (iVal_11 == 0x2b)) {
        pU8_6 = param_1[0xc];
        if (pU8_6 < param_1[0xd]) {
          param_1[0xc] = pU8_6 + 1;
          ptr2_Byte_9 = ptr2_Byte_10;
          if (&DAT_0000000f < param_1[0xd]) {
            ptr2_Byte_9 = (byte **)param_1[10];
          }
          *(byte *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = (byte)iVal_11;
          ((uint8_t *)((int64_t)ptr2_Byte_9 + 1))[(int64_t)pU8_6] = 0;
        }
        else {
          func_0x18008c590(ptr2_Byte_10,1);
        }
        param_1[4] = param_1[4] + 1;
        param_1[5] = param_1[5] + 1;
        if (*(char *)(param_1 + 3) == '\x01') {
          *(uint8_t *)(param_1 + 3) = 0;
          uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
        }
        else {
          pU8_6 = *param_1;
          if (pU8_6 == param_1[1]) {
            uVal_2 = 0xffffffff;
          }
          else {
            uVal_2 = (uint)*pU8_6;
            *param_1 = pU8_6 + 1;
          }
          *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
        }
        if (uVal_2 != 0xffffffff) {
          local_38 = CONCAT71(local_38._1_7_,(byte)uVal_2);
          pU8_6 = param_1[8];
          if (pU8_6 == param_1[9]) {
            func_0x180099ff0(ptr2_Byte_3,pU8_6,&local_38);
            iVal_11 = *(int *)((int64_t)param_1 + 0x14);
          }
          else {
            *pU8_6 = (byte)uVal_2;
            param_1[8] = param_1[8] + 1;
            iVal_11 = *(int *)((int64_t)param_1 + 0x14);
          }
          if (iVal_11 == 10) {
            param_1[6] = param_1[6] + 1;
            param_1[5] = (byte *)0x0;
            fnPtr_4 = "invalid number; expected digit after exponent sign";
            goto LAB_180099baf;
          }
          if (iVal_11 - 0x30U < 10) goto LAB_180099eb7;
        }
        fnPtr_4 = "invalid number; expected digit after exponent sign";
        goto LAB_180099baf;
      }
      if (iVal_11 == 10) {
        param_1[6] = param_1[6] + 1;
        param_1[5] = (byte *)0x0;
      }
    }
    fnPtr_4 = "invalid number; expected \'+\', \'-\', or digit after exponent";
    goto LAB_180099baf;
  }
  iVal_1 = iVal_12;
  if (iVal_11 == 10) {
LAB_180099ce3:
    iVal_12 = iVal_1;
    param_1[6] = param_1[6] + 1;
    param_1[5] = (byte *)0x0;
    iVal_11 = 10;
LAB_180099cf5:
    *(uint8_t *)(param_1 + 3) = 1;
    param_1[4] = param_1[4] + -1;
    if (param_1[5] == (byte *)0x0) {
      if (param_1[6] != (byte *)0x0) {
        param_1[6] = param_1[6] + -1;
      }
    }
    else {
      param_1[5] = param_1[5] + -1;
    }
    if (iVal_11 != -1) {
      param_1[8] = param_1[8] + -1;
    }
    local_38 = 0;
    pU64_5 = (uint32_t *)func_0x1806823dc();
    *pU64_5 = 0;
    if (iVal_12 == 6) {
      ptr2_Byte_3 = ptr2_Byte_10;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Byte_3 = (byte **)param_1[10];
      }
      pU8_6 = (byte *)func_0x180691d50(ptr2_Byte_3,&local_38,10);
      pInt_7 = (int *)func_0x1806823dc();
      if (*pInt_7 == 0) {
        param_1[0xf] = pU8_6;
        return 6;
      }
    }
    else if (iVal_12 == 5) {
      ptr2_Byte_3 = ptr2_Byte_10;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Byte_3 = (byte **)param_1[10];
      }
      pU8_6 = (byte *)func_0x180691e04(ptr2_Byte_3,&local_38,10);
      pInt_7 = (int *)func_0x1806823dc();
      if (*pInt_7 == 0) {
        param_1[0x10] = pU8_6;
        return 5;
      }
    }
    if (&DAT_0000000f < param_1[0xd]) {
      ptr2_Byte_10 = (byte **)param_1[10];
    }
    pU8_6 = (byte *)func_0x18068e53c(ptr2_Byte_10,&local_38);
    param_1[0x11] = pU8_6;
    return 7;
  }
  if (iVal_11 != 0x2e) goto LAB_180099cf5;
  pU8_6 = param_1[0xc];
  if (pU8_6 < param_1[0xd]) {
    param_1[0xc] = pU8_6 + 1;
    ptr2_Byte_9 = ptr2_Byte_10;
    if (&DAT_0000000f < param_1[0xd]) {
      ptr2_Byte_9 = (byte **)param_1[10];
    }
    *(byte *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = *(byte *)(param_1 + 0x12);
    ((uint8_t *)((int64_t)ptr2_Byte_9 + 1))[(int64_t)pU8_6] = 0;
  }
  else {
    func_0x18008c590(ptr2_Byte_10,1);
  }
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint8_t *)(param_1 + 3) = 0;
    uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    pU8_6 = *param_1;
    if (pU8_6 == param_1[1]) {
      uVal_2 = 0xffffffff;
    }
    else {
      uVal_2 = (uint)*pU8_6;
      *param_1 = pU8_6 + 1;
    }
    *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
  }
  if (uVal_2 != 0xffffffff) {
    local_38 = CONCAT71(local_38._1_7_,(byte)uVal_2);
    pU8_6 = param_1[8];
    if (pU8_6 == param_1[9]) {
      func_0x180099ff0(ptr2_Byte_3,pU8_6,&local_38);
      iVal_11 = *(int *)((int64_t)param_1 + 0x14);
    }
    else {
      *pU8_6 = (byte)uVal_2;
      param_1[8] = param_1[8] + 1;
      iVal_11 = *(int *)((int64_t)param_1 + 0x14);
    }
    if (iVal_11 == 10) {
      param_1[6] = param_1[6] + 1;
      param_1[5] = (byte *)0x0;
    }
    else if (iVal_11 - 0x30U < 10) {
      do {
        while( true ) {
          pU8_6 = param_1[0xc];
          if (pU8_6 < param_1[0xd]) {
            param_1[0xc] = pU8_6 + 1;
            ptr2_Byte_9 = ptr2_Byte_10;
            if (&DAT_0000000f < param_1[0xd]) {
              ptr2_Byte_9 = (byte **)param_1[10];
            }
            *(byte *)((int64_t)ptr2_Byte_9 + (int64_t)pU8_6) = (byte)iVal_11;
            ((uint8_t *)((int64_t)ptr2_Byte_9 + 1))[(int64_t)pU8_6] = 0;
          }
          else {
            func_0x18008c590(ptr2_Byte_10,1);
          }
          param_1[4] = param_1[4] + 1;
          param_1[5] = param_1[5] + 1;
          if (*(char *)(param_1 + 3) == '\x01') {
            *(uint8_t *)(param_1 + 3) = 0;
            uVal_2 = *(uint *)((int64_t)param_1 + 0x14);
          }
          else {
            pU8_6 = *param_1;
            if (pU8_6 == param_1[1]) {
              uVal_2 = 0xffffffff;
            }
            else {
              uVal_2 = (uint)*pU8_6;
              *param_1 = pU8_6 + 1;
            }
            *(uint *)((int64_t)param_1 + 0x14) = uVal_2;
          }
          iVal_12 = 7;
          iVal_11 = 7;
          if (uVal_2 == 0xffffffff) goto LAB_180099f71;
          local_38 = CONCAT71(local_38._1_7_,(byte)uVal_2);
          pU8_6 = param_1[8];
          if (pU8_6 == param_1[9]) break;
          *pU8_6 = (byte)uVal_2;
          param_1[8] = param_1[8] + 1;
          iVal_11 = *(int *)((int64_t)param_1 + 0x14);
          if (9 < iVal_11 - 0x30U) goto LAB_180099cc9;
        }
        func_0x180099ff0(ptr2_Byte_3,pU8_6,&local_38);
        iVal_11 = *(int *)((int64_t)param_1 + 0x14);
      } while (iVal_11 - 0x30U < 10);
LAB_180099cc9:
      if ((iVal_11 == 0x65) || (iVal_11 == 0x45)) goto LAB_180099a24;
      iVal_1 = 7;
      if (iVal_11 != 10) goto LAB_180099cf5;
      goto LAB_180099ce3;
    }
  }
  fnPtr_4 = "invalid number; expected digit after \'.\'";
LAB_180099baf:
  param_1[0xe] = (byte *)fnPtr_4;
  return 0xe;
}

// Unwind@180099fd0
void Unwind_180099fd0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180099ff0
int64_t func_0x180099ff0(uint64_t *param_1,uint64_t param_2,uint8_t *param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  
  uVal_1 = *param_1;
  if (param_1[1] - uVal_1 != 0x7fffffffffffffff) {
    uVal_7 = (param_1[1] - uVal_1) + 1;
    uVal_3 = param_1[2] - uVal_1;
    uVal_6 = (uVal_3 >> 1) + uVal_3;
    if (uVal_6 <= uVal_7) {
      uVal_6 = uVal_7;
    }
    if ((uVal_3 >> 1 ^ 0x7fffffffffffffff) < uVal_3) {
      uVal_6 = 0x7fffffffffffffff;
    }
    if (uVal_6 == 0) {
      uVal_3 = 0;
    }
    else if (uVal_6 < 0x1000) {
      uVal_3 = func_0x180672de0(uVal_6);
    }
    else {
      if (0xffffffffffffffd8 < uVal_6) goto LAB_18009a142;
      lVal_2 = func_0x180672de0(uVal_6 + 0x27);
      uVal_3 = lVal_2 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_3 - 8) = lVal_2;
    }
    lVal_2 = uVal_3 + (param_2 - uVal_1);
    *(uint8_t *)(uVal_3 + (param_2 - uVal_1)) = *param_3;
    if (param_2 == param_1[1]) {
      func_0x1806aa960(uVal_3,*param_1,param_2 - *param_1);
      uVal_1 = *param_1;
    }
    else {
      func_0x1806aa960(uVal_3,*param_1,param_2 - *param_1);
      func_0x1806aa960(lVal_2 + 1,param_2,param_1[1] - param_2);
      uVal_1 = *param_1;
    }
    if (uVal_1 != 0) {
      uVal_5 = param_1[2] - uVal_1;
      uVal_4 = uVal_1;
      if (0xfff < uVal_5) {
        uVal_4 = *(uint64_t *)(uVal_1 - 8);
        if (0x1f < (uVal_1 - 8) - uVal_4) goto LAB_18009a147;
        uVal_5 = uVal_5 + 0x27;
      }
      thunk_FUN_180695dd0(uVal_4,uVal_5);
    }
    *param_1 = uVal_3;
    param_1[1] = uVal_7 + uVal_3;
    param_1[2] = uVal_6 + uVal_3;
    return lVal_2;
  }
  func_0x18007c0d0();
LAB_18009a142:
  func_0x18007ba90();
LAB_18009a147:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18009a150
void func_0x18009a150(int64_t param_1,uint8_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  
  lVal_2 = param_1 + 0x50;
  uVal_1 = *(uint64_t *)(param_1 + 0x60);
  if (uVal_1 < *(uint64_t *)(param_1 + 0x68)) {
    *(uint64_t *)(param_1 + 0x60) = uVal_1 + 1;
    if (0xf < *(uint64_t *)(param_1 + 0x68)) {
      lVal_2 = *(int64_t *)(param_1 + 0x50);
    }
    *(uint8_t *)(lVal_2 + uVal_1) = param_2;
    *(uint8_t *)(lVal_2 + 1 + uVal_1) = 0;
    return;
  }
  func_0x18008c590(lVal_2,1);
  return;
}

// func_0x18009a190
uint64_t func_0x18009a190(byte **param_1)
{
  byte **ptr2_Byte_1;
  int iVal_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  byte *pU8_5;
  uint uVal_6;
  uint64_t uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint8_t auStack_68 [47];
  byte local_39;
  uint64_t local_38;
  
  local_38 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  param_1[4] = param_1[4] + 1;
  param_1[5] = param_1[5] + 1;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(uint8_t *)(param_1 + 3) = 0;
    uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    pU8_5 = *param_1;
    if (pU8_5 == param_1[1]) {
      uVal_4 = 0xffffffff;
    }
    else {
      uVal_4 = (uint)*pU8_5;
      *param_1 = pU8_5 + 1;
    }
    *(uint *)((int64_t)param_1 + 0x14) = uVal_4;
  }
  uVal_7 = 0xffffffff;
  if (uVal_4 == 0xffffffff) goto LAB_18009a3de;
  ptr2_Byte_1 = param_1 + 7;
  local_39 = (byte)uVal_4;
  pU8_5 = param_1[8];
  if (pU8_5 == param_1[9]) {
    func_0x180099ff0(ptr2_Byte_1,pU8_5,&local_39);
    uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
  }
  else {
    *pU8_5 = local_39;
    param_1[8] = param_1[8] + 1;
    uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
  }
  if (uVal_4 != 10) {
    uVal_6 = uVal_4 - 0x30;
    if (9 < uVal_6) {
      if (uVal_4 - 0x41 < 6) {
        uVal_6 = uVal_4 - 0x37;
      }
      else {
        if (5 < uVal_4 - 0x61) goto LAB_18009a3de;
        uVal_6 = uVal_4 - 0x57;
      }
    }
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\0') {
      pU8_5 = *param_1;
      if (pU8_5 != param_1[1]) {
        local_39 = *pU8_5;
        uVal_4 = (uint)local_39;
        *param_1 = pU8_5 + 1;
        *(uint *)((int64_t)param_1 + 0x14) = uVal_4;
        pU8_5 = param_1[8];
        if (pU8_5 == param_1[9]) goto LAB_18009a2bc;
        goto LAB_18009a282;
      }
LAB_18009a485:
      *(uint32_t *)((int64_t)param_1 + 0x14) = 0xffffffff;
      goto LAB_18009a3de;
    }
    *(uint8_t *)(param_1 + 3) = 0;
    local_39 = (byte)uVal_4;
    pU8_5 = param_1[8];
    if (pU8_5 == param_1[9]) {
LAB_18009a2bc:
      func_0x180099ff0(ptr2_Byte_1,0xffffffff,&local_39);
      uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
    }
    else {
LAB_18009a282:
      *pU8_5 = (byte)uVal_4;
      param_1[8] = param_1[8] + 1;
      uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
    }
    if (uVal_4 == 10) goto LAB_18009a3d2;
    uVal_8 = uVal_4 - 0x30;
    if (9 < uVal_8) {
      if (uVal_4 - 0x41 < 6) {
        uVal_8 = uVal_4 - 0x37;
      }
      else {
        if (5 < uVal_4 - 0x61) goto LAB_18009a3de;
        uVal_8 = uVal_4 - 0x57;
      }
    }
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\0') {
      pU8_5 = *param_1;
      if (pU8_5 == param_1[1]) goto LAB_18009a485;
      local_39 = *pU8_5;
      uVal_4 = (uint)local_39;
      *param_1 = pU8_5 + 1;
      *(uint *)((int64_t)param_1 + 0x14) = uVal_4;
      pU8_5 = param_1[8];
      if (pU8_5 == param_1[9]) goto LAB_18009a361;
LAB_18009a327:
      *pU8_5 = (byte)uVal_4;
      param_1[8] = param_1[8] + 1;
      uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
    }
    else {
      *(uint8_t *)(param_1 + 3) = 0;
      local_39 = (byte)uVal_4;
      pU8_5 = param_1[8];
      if (pU8_5 != param_1[9]) goto LAB_18009a327;
LAB_18009a361:
      func_0x180099ff0(ptr2_Byte_1,0xffffffff,&local_39);
      uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
    }
    if (uVal_4 == 10) goto LAB_18009a3d2;
    uVal_9 = uVal_4 - 0x30;
    if (9 < uVal_9) {
      if (uVal_4 - 0x41 < 6) {
        uVal_9 = uVal_4 - 0x37;
      }
      else {
        if (5 < uVal_4 - 0x61) goto LAB_18009a3de;
        uVal_9 = uVal_4 - 0x57;
      }
    }
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\0') {
      pU8_5 = *param_1;
      if (pU8_5 == param_1[1]) goto LAB_18009a485;
      local_39 = *pU8_5;
      uVal_4 = (uint)local_39;
      *param_1 = pU8_5 + 1;
      *(uint *)((int64_t)param_1 + 0x14) = uVal_4;
      pU8_5 = param_1[8];
      if (pU8_5 != param_1[9]) goto LAB_18009a3c4;
LAB_18009a428:
      func_0x180099ff0(ptr2_Byte_1,0xffffffff,&local_39);
      iVal_2 = *(int *)((int64_t)param_1 + 0x14);
    }
    else {
      *(uint8_t *)(param_1 + 3) = 0;
      local_39 = (byte)uVal_4;
      pU8_5 = param_1[8];
      if (pU8_5 == param_1[9]) goto LAB_18009a428;
LAB_18009a3c4:
      *pU8_5 = (byte)uVal_4;
      param_1[8] = param_1[8] + 1;
      iVal_2 = *(int *)((int64_t)param_1 + 0x14);
    }
    if (iVal_2 != 10) {
      uVal_4 = iVal_2 - 0x30;
      if (9 < uVal_4) {
        if (iVal_2 - 0x41U < 6) {
          uVal_4 = iVal_2 - 0x37;
        }
        else {
          if (5 < iVal_2 - 0x61U) goto LAB_18009a3de;
          uVal_4 = iVal_2 - 0x57;
        }
      }
      uVal_7 = (uint64_t)(uVal_9 * 0x10 + uVal_8 * 0x100 + uVal_6 * 0x1000 + uVal_4);
      goto LAB_18009a3de;
    }
  }
LAB_18009a3d2:
  param_1[6] = param_1[6] + 1;
  param_1[5] = (byte *)0x0;
LAB_18009a3de:
  if (DAT_18083cf40 != (local_38 ^ (uint64_t)auStack_68)) {
    func_0x180673080(local_38 ^ (uint64_t)auStack_68);
    fnPtr_3 = (func_ptr_t )swi(3);
    uVal_7 = (*fnPtr_3)();
    return uVal_7;
  }
  return uVal_7;
}

// func_0x18009a4a0
uint64_t func_0x18009a4a0(byte **param_1,int **param_2)
{
  byte **ptr2_Byte_1;
  byte *pU8_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  uint64_t uVal_5;
  byte **ptr2_Byte_6;
  uint64_t unaff_RBP;
  undefined7 uVal_7;
  int iVal_8;
  int *pInt_9;
  uint8_t auStack_78 [39];
  byte local_51;
  uint64_t local_50;
  
  local_50 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  ptr2_Byte_1 = param_1 + 10;
  pU8_2 = param_1[0xc];
  uVal_7 = (undefined7)((uint64_t)unaff_RBP >> 8);
  if (pU8_2 < param_1[0xd]) {
    param_1[0xc] = pU8_2 + 1;
    ptr2_Byte_6 = ptr2_Byte_1;
    if (&DAT_0000000f < param_1[0xd]) {
      ptr2_Byte_6 = (byte **)param_1[10];
    }
    *(byte *)((int64_t)ptr2_Byte_6 + (int64_t)pU8_2) = *(byte *)((int64_t)param_1 + 0x14);
    pU8_2[(int64_t)ptr2_Byte_6 + 1] = 0;
    pInt_9 = *param_2;
    uVal_5 = CONCAT71(uVal_7,1);
    if (pInt_9 == param_2[1]) goto LAB_18009a668;
  }
  else {
    func_0x18008c590(ptr2_Byte_1,1);
    pInt_9 = *param_2;
    uVal_5 = CONCAT71(uVal_7,1);
    if (pInt_9 == param_2[1]) goto LAB_18009a668;
  }
  uVal_5 = CONCAT71(uVal_7,1);
LAB_18009a55b:
  do {
    param_1[4] = param_1[4] + 1;
    param_1[5] = param_1[5] + 1;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(uint8_t *)(param_1 + 3) = 0;
      uVal_4 = *(uint *)((int64_t)param_1 + 0x14);
    }
    else {
      pU8_2 = *param_1;
      if (pU8_2 == param_1[1]) {
        uVal_4 = 0xffffffff;
      }
      else {
        uVal_4 = (uint)*pU8_2;
        *param_1 = pU8_2 + 1;
      }
      *(uint *)((int64_t)param_1 + 0x14) = uVal_4;
    }
    if (uVal_4 == 0xffffffff) {
      iVal_8 = -1;
      if (*pInt_9 < 0) goto LAB_18009a5fd;
LAB_18009a65b:
      param_1[0xe] = (byte *)"invalid string: ill-formed UTF-8 byte";
      uVal_5 = 0;
      break;
    }
    local_51 = (byte)uVal_4;
    pU8_2 = param_1[8];
    if (pU8_2 == param_1[9]) {
      func_0x180099ff0(param_1 + 7,pU8_2,&local_51);
      iVal_8 = *(int *)((int64_t)param_1 + 0x14);
    }
    else {
      *pU8_2 = local_51;
      param_1[8] = param_1[8] + 1;
      iVal_8 = *(int *)((int64_t)param_1 + 0x14);
    }
    if (iVal_8 == 10) {
      param_1[6] = param_1[6] + 1;
      param_1[5] = (byte *)0x0;
      iVal_8 = 10;
    }
    if (iVal_8 < *pInt_9) goto LAB_18009a65b;
LAB_18009a5fd:
    if (pInt_9[1] < iVal_8) goto LAB_18009a65b;
    pU8_2 = param_1[0xc];
    if (pU8_2 < param_1[0xd]) {
      param_1[0xc] = pU8_2 + 1;
      ptr2_Byte_6 = ptr2_Byte_1;
      if (&DAT_0000000f < param_1[0xd]) {
        ptr2_Byte_6 = (byte **)param_1[10];
      }
      *(byte *)((int64_t)ptr2_Byte_6 + (int64_t)pU8_2) = (byte)iVal_8;
      pU8_2[(int64_t)ptr2_Byte_6 + 1] = 0;
      pInt_9 = pInt_9 + 2;
      if (pInt_9 == param_2[1]) break;
      goto LAB_18009a55b;
    }
    func_0x18008c590(ptr2_Byte_1,1);
    pInt_9 = pInt_9 + 2;
  } while (pInt_9 != param_2[1]);
LAB_18009a668:
  if (DAT_18083cf40 == (local_50 ^ (uint64_t)auStack_78)) {
    return uVal_5 & 0xffffffff;
  }
  func_0x180673080(local_50 ^ (uint64_t)auStack_78);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_5 = (*fnPtr_3)();
  return uVal_5;
}

// func_0x18009a6a0
uint64_t * func_0x18009a6a0(uint64_t *param_1,uint64_t param_2,int64_t *param_3,uint8_t param_4)
{
  uint64_t uVal_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint *pU64_5;
  uint uVal_6;
  uint64_t uVal_7;
  char ch_8;
  uint uVal_9;
  int64_t local_70;
  uint64_t local_68;
  uint64_t *local_60;
  uint64_t *local_58;
  uint64_t *local_50;
  uint64_t *local_48;
  int64_t *local_40;
  int64_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = param_2;
  local_60 = param_1 + 1;
  local_40 = param_1 + 4;
  local_58 = param_1 + 8;
  local_50 = param_1 + 0xe;
  param_1[0x15] = 0;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 7) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 9) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xb) = ZEXT816(0);
  *(uint8_t *)(param_1 + 0xd) = 0;
  local_38 = param_3;
  local_30 = param_1;
  if ((uint64_t *)param_3[7] == (uint64_t *)0x0) {
    *(uint8_t *)(param_1 + 0x16) = param_4;
    local_48 = param_1 + 0x17;
    *(uint8_t *)(param_1 + 0x17) = 9;
    param_1[0x18] = 0;
    local_70 = 0;
    local_68 = 0;
    uVal_7 = 0;
  }
  else {
    uVal_3 = (***(func_ptr_t **)(uint64_t *)param_3[7])();
    local_30[0x15] = uVal_3;
    uVal_1 = local_30[7];
    *(uint8_t *)(local_30 + 0x16) = param_4;
    local_48 = local_30 + 0x17;
    *(uint8_t *)(local_30 + 0x17) = 9;
    local_30[0x18] = 0;
    local_70 = (uVal_1 >> 3 & 0xfffffffffffffffc) + local_30[4];
    uVal_7 = (int64_t)uVal_1 >> 0x3f & 0xe000000000000000;
    local_68 = (uint64_t)((uint)uVal_1 & 0x1f);
  }
  local_70 = local_70 + uVal_7;
  uVal_4 = func_0x18009e3e0(local_40,&local_70,1);
  uVal_6 = (uint)uVal_4 & 0x1f;
  uVal_7 = (uint64_t)uVal_6 + 1;
  uVal_1 = uVal_7 >> 5;
  uVal_9 = (uint)uVal_7 & 0x1f;
  if (((uint64_t)(uVal_6 ^ uVal_9) | uVal_1 * 4) != 0) {
    pU64_5 = (uint *)(((int64_t)uVal_4 >> 0x3f & 0xe000000000000000U) + (uVal_4 >> 5) * 4 + *local_40
                     );
    uVal_6 = -1 << (sbyte)uVal_6;
    ch_8 = (char)uVal_9;
    if (uVal_1 == 0) {
      uVal_6 = uVal_6 << (-ch_8 & 0x1fU);
    }
    else {
      *pU64_5 = *pU64_5 | uVal_6;
      func_0x1806ab010(pU64_5 + 1,CONCAT71((uint7)(uint3)(uVal_6 >> 8),0xff),uVal_1 * 4 - 4);
      if ((uVal_7 & 0x1f) == 0) goto LAB_18009a841;
      pU64_5 = pU64_5 + uVal_1;
      uVal_6 = 0xffffffff;
    }
    *pU64_5 = *pU64_5 | uVal_6 >> (-ch_8 & 0x1fU);
  }
LAB_18009a841:
  pLong_2 = (int64_t *)local_38[7];
  if (pLong_2 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != local_38);
  }
  return local_30;
}

// Unwind@18009a870
void Unwind_18009a870(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x68) + 0xa8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x48));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x68) + 0xa8) = 0;
  }
  return;
}

// Unwind@18009a8c0
void Unwind_18009a8c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  func_0x18003c630(*(uint64_t *)(param_2 + 0x50));
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x68) + 0xa8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x48));
    *(uint64_t *)(*(int64_t *)(param_2 + 0x68) + 0xa8) = 0;
  }
  return;
}

// Unwind@18009a910
void Unwind_18009a910(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x40));
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x58));
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x38));
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x60) + 0x38);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != *(int64_t **)(param_2 + 0x60));
  }
  return;
}

// func_0x18009a960
uint64_t func_0x18009a960(int64_t param_1,int64_t *param_2)
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
LAB_18009a9c0:
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
    goto LAB_18009b56f;
  case 8:
    ch_2 = func_0x18009f040(param_2,0xffffffffffffffff);
    if (ch_2 == '\0') goto LAB_18009b14d;
    iVal_3 = func_0x180098200(lVal_10);
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
          if ((uVal_9 & 0x1f) == 0) goto LAB_18009ae7c;
          pU64_8 = local_150 + uVal_6;
          uVal_5 = 0xffffffff;
        }
        *pU64_8 = *pU64_8 | uVal_5 >> (-ch_2 & 0x1fU);
      }
LAB_18009ae7c:
      unaff_R14 = 0;
      goto LAB_18009a9c0;
    }
    ch_2 = func_0x18009f310(param_2);
LAB_18009aac8:
    if (ch_2 == '\0') goto LAB_18009b14d;
    break;
  case 9:
    ch_2 = func_0x18009e7c0(param_2,0xffffffffffffffff);
    if (ch_2 == '\0') goto LAB_18009b14d;
    iVal_3 = func_0x180098200(lVal_10);
    *(int *)(param_1 + 0x40) = iVal_3;
    if (iVal_3 == 0xb) {
      ch_2 = func_0x18009ea90(param_2);
      goto LAB_18009aac8;
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
LAB_18009b56f:
      unaff_R14 = (uint64_t)uVal_5;
      func_0x180001e70(local_68);
      func_0x18009cbb0(&local_128);
      func_0x180001e70(&local_c8);
      func_0x180001e70(&local_88);
      goto joined_r0x00018009b5a3;
    }
    ch_2 = func_0x18009ed70(param_2,lVal_12);
    if (ch_2 == '\0') goto LAB_18009b14d;
    iVal_3 = func_0x180098200(lVal_10);
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
      goto LAB_18009b56f;
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
        if ((uVal_9 & 0x1f) == 0) goto LAB_18009aebf;
        pU64_8 = local_150 + uVal_6;
        uVal_5 = ~(0xffffffffU >> (-ch_2 & 0x1fU));
      }
      *pU64_8 = *pU64_8 & uVal_5;
    }
LAB_18009aebf:
    unaff_R14 = 0;
    uVal_4 = func_0x180098200(lVal_10);
    *(uint32_t *)(param_1 + 0x40) = uVal_4;
    goto LAB_18009a9c0;
  default:
    goto switchD_18009a9d6_caseD_a;
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
    if (*(char *)(param_2 + 0x16) != '\x01') goto LAB_18009b03b;
    param_2 = &local_128;
    func_0x1800a3150(param_2,&local_c8);
    func_0x18067a120(param_2,&DAT_180768d30);
    goto switchD_18009a9d6_caseD_a;
  }
  do {
    unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),local_138._8_8_ == 0);
    if (local_138._8_8_ == 0) goto LAB_18009b150;
    uVal_9 = (uint64_t)(local_138._8_4_ & 0x1f);
    uVal_6 = uVal_9 - 1;
    if ((*(uint *)(((uint64_t)(uVal_9 != 0) << 0x3d) +
                   ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
                   ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_ + (uVal_6 >> 5) * 4 +
                  -0x2000000000000000) >> ((uint)uVal_6 & 0x1f) & 1) == 0) {
      iVal_3 = func_0x180098200(lVal_10);
      *(int *)(param_1 + 0x40) = iVal_3;
      if (iVal_3 == 0xd) {
        iVal_3 = func_0x180098200(lVal_10);
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
          goto LAB_18009b56f;
        }
        ch_2 = func_0x18009ed70(param_2,lVal_12);
        if (ch_2 == '\0') goto LAB_18009b14d;
        iVal_3 = func_0x180098200(lVal_10);
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
          goto LAB_18009b56f;
        }
        uVal_4 = func_0x180098200(lVal_10);
        *(uint32_t *)(param_1 + 0x40) = uVal_4;
        goto LAB_18009a9c0;
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
        goto LAB_18009b56f;
      }
      ch_2 = func_0x18009ea90(param_2);
    }
    else {
      iVal_3 = func_0x180098200(lVal_10);
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
        goto LAB_18009b56f;
      }
      ch_2 = func_0x18009f310(param_2);
    }
    if (ch_2 == '\0') goto LAB_18009b150;
    uVal_9 = (uint64_t)(local_138._8_4_ & 0x1f);
    uVal_6 = uVal_9 - 1;
    local_128 = ((uint64_t)(uVal_9 != 0) << 0x3d) + -0x2000000000000000 +
                ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
                ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_ + (uVal_6 >> 5) * 4;
    local_120 = (uint64_t)((uint)uVal_6 & 0x1f);
    func_0x1800a2b50(local_148,&local_c8,&local_128);
  } while( true );
  uVal_4 = func_0x180098200(lVal_10);
  *(uint32_t *)(param_1 + 0x40) = uVal_4;
  goto LAB_18009a9c0;
switchD_18009a9d6_caseD_a:
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
LAB_18009b03b:
  if (0xf < local_d0) {
    uVal_9 = local_d0 + 1;
    lVal_10 = local_e8;
    if (0xfff < uVal_9) {
      lVal_10 = *(int64_t *)(local_e8 + -8);
      if (0x1f < (uint64_t)((local_e8 + -8) - lVal_10)) goto LAB_18009b5ae;
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
      if (0x1f < (uint64_t)((lVal_12 + -8) - lVal_10)) goto LAB_18009b5ae;
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
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_10)) goto LAB_18009b5ae;
      uVal_9 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_10,uVal_9);
  }
LAB_18009b14d:
  unaff_R14 = 0;
LAB_18009b150:
joined_r0x00018009b5a3:
  if (local_148._0_8_ != 0) {
    uVal_9 = local_138._0_8_ - local_148._0_8_;
    lVal_10 = local_148._0_8_;
    if (0xfff < uVal_9) {
      lVal_10 = *(int64_t *)(local_148._0_8_ + -8);
      if (0x1f < (uint64_t)((local_148._0_8_ + -8) - lVal_10)) {
LAB_18009b5ae:
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

// Unwind@18009b5e0
void Unwind_18009b5e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009b620
void Unwind_18009b620(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@18009b660
void Unwind_18009b660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18009b6a0
void Unwind_18009b6a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009b6e0
void Unwind_18009b6e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009b720
void Unwind_18009b720(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@18009b760
void Unwind_18009b760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18009b7a0
void Unwind_18009b7a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009b7e0
void Unwind_18009b7e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009b820
void Unwind_18009b820(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@18009b860
void Unwind_18009b860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18009b8a0
void Unwind_18009b8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009b8e0
void Unwind_18009b8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18009b920
void Unwind_18009b920(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xd0);
  return;
}

// Unwind@18009b960
void Unwind_18009b960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009b9a0
void Unwind_18009b9a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009b9e0
void Unwind_18009b9e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18009ba20
void Unwind_18009ba20(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xd0);
  return;
}

// Unwind@18009ba60
void Unwind_18009ba60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009baa0
void Unwind_18009baa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009bae0
void Unwind_18009bae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009bb20
void Unwind_18009bb20(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@18009bb60
void Unwind_18009bb60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18009bba0
void Unwind_18009bba0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009bbe0
void Unwind_18009bbe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009bc20
void Unwind_18009bc20(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@18009bc60
void Unwind_18009bc60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18009bca0
void Unwind_18009bca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009bce0
void Unwind_18009bce0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009bd20
void Unwind_18009bd20(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@18009bd60
void Unwind_18009bd60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18009bda0
void Unwind_18009bda0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009bde0
void Unwind_18009bde0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009be20
void Unwind_18009be20(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@18009be60
void Unwind_18009be60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18009bea0
void Unwind_18009bea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009bee0
void Unwind_18009bee0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x50);
  return;
}

// func_0x18009bf20
uint64_t func_0x18009bf20(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_78 [40];
  uint8_t local_50 [64];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  *(uint8_t *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    func_0x1800a3150(local_50,param_4);
    func_0x18067a120(local_50,&DAT_180768d30);
  }
  else if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_78)) {
    return 0;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x18009bf90
uint64_t * func_0x18009bf90(uint64_t *param_1,uint32_t param_2,uint64_t *param_3,int64_t param_4)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t local_e8 [2];
  int64_t local_d8;
  uint64_t local_d0;
  uint8_t local_c8;
  undefined7 uStack_c7;
  int64_t local_b8;
  uint64_t local_b0;
  undefined7 local_a8;
  uint32_t uStack_a1;
  undefined5 uStack_9d;
  uint64_t local_98;
  uint64_t local_90;
  uint8_t local_88 [9];
  undefined7 uStack_7f;
  int64_t local_78;
  uint64_t local_70;
  uint8_t local_68 [16];
  uint64_t local_58;
  uint64_t local_50;
  uint8_t local_39;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  _local_88 = ZEXT816(0);
  local_78 = 0;
  local_70 = 0xf;
  func_0x1800a3240(local_e8,param_3);
  uStack_9d = 0;
  local_98 = 0xb;
  local_90 = 0xf;
  local_a8 = 0x655f6573726170;
  uStack_a1 = 0x726f7272;
  func_0x180094590(local_68,param_2);
  local_39 = 0x2e;
  func_0x180082ac0(&local_c8,"[json.exception.",&local_a8,&local_39,local_68,&DAT_18076100f);
  if (0xf < local_50) {
    uVal_3 = local_50 + 1;
    lVal_4 = local_68._0_8_;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(local_68._0_8_ + -8);
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_4)) goto LAB_18009c2c0;
      uVal_3 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  local_68 = ZEXT816(0);
  local_58 = 0;
  local_50 = 0xf;
  if (0xf < *(int64_t *)(param_4 + 0x10) + local_b8 + local_d8 + local_78 + 0xdU) {
    func_0x180082810(local_68);
  }
  local_58 = 0;
  func_0x1800a3380(local_68,&local_c8,"parse error",local_e8,&DAT_18076106c,local_88,param_4);
  if (0xf < local_b0) {
    lVal_2 = CONCAT71(uStack_c7,local_c8);
    uVal_3 = local_b0 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18009c2c0;
      uVal_3 = local_b0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  local_b8 = 0;
  local_b0 = 0xf;
  local_c8 = 0;
  if (0xf < local_90) {
    lVal_2 = CONCAT17((uint8_t)uStack_a1,local_a8);
    uVal_3 = local_90 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_18009c2c0;
      uVal_3 = local_90 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  if (0xf < local_d0) {
    uVal_3 = local_d0 + 1;
    lVal_4 = local_e8[0];
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(local_e8[0] + -8);
      if (0x1f < (uint64_t)((local_e8[0] + -8) - lVal_4)) goto LAB_18009c2c0;
      uVal_3 = local_d0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  if (0xf < local_70) {
    uVal_3 = local_70 + 1;
    lVal_4 = local_88._0_8_;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(local_88._0_8_ + -8);
      if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_4)) goto LAB_18009c2c0;
      uVal_3 = local_70 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  uVal_1 = *param_3;
  local_88._0_8_ = local_68;
  if (0xf < local_50) {
    local_88._0_8_ = local_68._0_8_;
  }
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *param_1 = &PTR_LAB_1806aff10;
  *(uint32_t *)(param_1 + 3) = param_2;
  param_1[4] = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  local_88[8] = 1;
  func_0x18067b3f0(local_88,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_LAB_1806b0a18;
  param_1[7] = uVal_1;
  if (0xf < local_50) {
    uVal_3 = local_50 + 1;
    lVal_4 = local_68._0_8_;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(local_68._0_8_ + -8);
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_4)) {
LAB_18009c2c0:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  return param_1;
}

// Unwind@18009c2d0
void Unwind_18009c2d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@18009c310
void Unwind_18009c310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18009c340
void Unwind_18009c340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18009c370
void Unwind_18009c370(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x18009c3b0
uint64_t * func_0x18009c3b0(int64_t param_1,uint64_t *param_2,uint param_3,int64_t param_4)
{
  int64_t lVal_1;
  uint uVal_2;
  uint8_t auArr_3 [16];
  char *fnPtr_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  char *fnPtr_7;
  uint8_t *pU64_8;
  uint64_t *pU64_9;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_70;
  uint8_t local_68 [16];
  uint64_t local_58;
  uint64_t local_50;
  uint64_t *local_48;
  uint8_t local_39;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  param_2[1] = 0;
  param_2[2] = 0xd;
  param_2[3] = 0xf;
  *param_2 = 0x65207861746e7973;
  *(uint64_t *)((int64_t)param_2 + 5) = 0x20726f7272652078;
  local_48 = param_2;
  if (*(int64_t *)(param_4 + 0x10) == 0) {
    lVal_5 = 0xd;
    uVal_6 = 0xf;
LAB_18009c4d8:
    param_2[2] = lVal_5 + 2;
    if (0xf < uVal_6) {
      param_2 = (uint64_t *)*param_2;
    }
    *(uint16_t *)((int64_t)param_2 + lVal_5) = 0x202d;
    *(uint8_t *)((int64_t)param_2 + lVal_5 + 2) = 0;
  }
  else {
    local_88 = (char *)CONCAT71(local_88._1_7_,0x20);
    local_68 = ZEXT816(0);
    local_58 = 0;
    local_50 = 0xf;
    if (0xf < *(int64_t *)(param_4 + 0x10) + 0xfU) {
      func_0x180082810(local_68);
    }
    local_58 = 0;
    func_0x1800a1800(local_68,"while parsing ",param_4,&local_88);
    pU64_8 = local_68;
    if (0xf < local_50) {
      pU64_8 = (uint8_t *)local_68._0_8_;
    }
    lVal_5 = local_48[2];
    if ((uint64_t)(local_48[3] - lVal_5) < local_58) {
      func_0x180082950(local_48,local_58,local_58,pU64_8,local_58);
      param_2 = local_48;
    }
    else {
      lVal_1 = lVal_5 + local_58;
      local_48[2] = lVal_1;
      pU64_9 = local_48;
      if (0xf < (uint64_t)local_48[3]) {
        pU64_9 = (uint64_t *)*local_48;
      }
      func_0x1806aa960(lVal_5 + (int64_t)pU64_9,pU64_8);
      *(uint8_t *)((int64_t)pU64_9 + lVal_1) = 0;
      param_2 = local_48;
    }
    local_48 = param_2;
    if (0xf < local_50) {
      uVal_6 = local_50 + 1;
      lVal_5 = local_68._0_8_;
      if (0xfff < uVal_6) {
        lVal_5 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_5)) goto LAB_18009c8b4;
        uVal_6 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_6);
    }
    lVal_5 = param_2[2];
    uVal_6 = param_2[3];
    if (1 < uVal_6 - lVal_5) goto LAB_18009c4d8;
    func_0x180082950(param_2,2);
  }
  uVal_2 = *(uint *)(param_1 + 0x40);
  if ((uint64_t)uVal_2 == 0xe) {
    local_39 = 0x27;
    func_0x18009ca10(param_1 + 0x48,&local_88);
    local_90 = *(uint64_t *)(param_1 + 0xb8);
    func_0x1800a38c0(local_68,&local_90,"; last read: \'",&local_88,&local_39);
    pU64_8 = local_68;
    if (0xf < local_50) {
      pU64_8 = (uint8_t *)local_68._0_8_;
    }
    lVal_5 = local_48[2];
    if ((uint64_t)(local_48[3] - lVal_5) < local_58) {
      func_0x180082950(local_48,local_58,local_58,pU64_8,local_58);
    }
    else {
      lVal_1 = lVal_5 + local_58;
      local_48[2] = lVal_1;
      pU64_9 = local_48;
      if (0xf < (uint64_t)local_48[3]) {
        pU64_9 = (uint64_t *)*local_48;
      }
      func_0x1806aa960(lVal_5 + (int64_t)pU64_9,pU64_8);
      *(uint8_t *)((int64_t)pU64_9 + lVal_1) = 0;
    }
    if (0xf < local_50) {
      uVal_6 = local_50 + 1;
      lVal_5 = local_68._0_8_;
      if (0xfff < uVal_6) {
        lVal_5 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_5)) goto LAB_18009c8b4;
        uVal_6 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_6);
    }
    local_58 = 0;
    local_50 = 0xf;
    auArr_3[15] = 0;
    auArr_3._0_15_ = local_68._1_15_;
    local_68 = auArr_3 << 8;
    fnPtr_4 = local_88;
    if (0xf < local_70) {
joined_r0x00018009c6f8:
      uVal_6 = local_70 + 1;
      fnPtr_7 = fnPtr_4;
      if (0xfff < uVal_6) {
        fnPtr_7 = *(char **)(fnPtr_4 + -8);
        if ((char *)0x1f < fnPtr_4 + (-8 - (int64_t)fnPtr_7)) goto LAB_18009c8b4;
        uVal_6 = local_70 + 0x28;
      }
      thunk_FUN_180695dd0(fnPtr_7,uVal_6);
    }
  }
  else {
    if (uVal_2 < 0x11) {
      local_88 = (&PTR_s_<uninitialized>_1806b0e80)[uVal_2];
    }
    else {
      local_88 = "unknown token";
    }
    func_0x180083260(local_68,"unexpected ",&local_88);
    pU64_8 = local_68;
    if (0xf < local_50) {
      pU64_8 = (uint8_t *)local_68._0_8_;
    }
    lVal_5 = local_48[2];
    if ((uint64_t)(local_48[3] - lVal_5) < local_58) {
      func_0x180082950(local_48,local_58,local_58,pU64_8,local_58);
    }
    else {
      lVal_1 = lVal_5 + local_58;
      local_48[2] = lVal_1;
      pU64_9 = local_48;
      if (0xf < (uint64_t)local_48[3]) {
        pU64_9 = (uint64_t *)*local_48;
      }
      func_0x1806aa960(lVal_5 + (int64_t)pU64_9,pU64_8);
      *(uint8_t *)((int64_t)pU64_9 + lVal_1) = 0;
    }
    if (0xf < local_50) {
      fnPtr_4 = (char *)local_68._0_8_;
      local_70 = local_50;
      goto joined_r0x00018009c6f8;
    }
  }
  if (param_3 != 0) {
    if (param_3 < 0x11) {
      local_88 = (&PTR_s_true_literal_1806b0f08)[param_3 - 1];
    }
    else {
      local_88 = "unknown token";
    }
    func_0x180083260(local_68,"; expected ",&local_88);
    pU64_8 = local_68;
    if (0xf < local_50) {
      pU64_8 = (uint8_t *)local_68._0_8_;
    }
    lVal_5 = local_48[2];
    if ((uint64_t)(local_48[3] - lVal_5) < local_58) {
      func_0x180082950(local_48,local_58,local_58,pU64_8,local_58);
    }
    else {
      lVal_1 = lVal_5 + local_58;
      local_48[2] = lVal_1;
      pU64_9 = local_48;
      if (0xf < (uint64_t)local_48[3]) {
        pU64_9 = (uint64_t *)*local_48;
      }
      func_0x1806aa960(lVal_5 + (int64_t)pU64_9,pU64_8);
      *(uint8_t *)((int64_t)pU64_9 + lVal_1) = 0;
    }
    if (0xf < local_50) {
      uVal_6 = local_50 + 1;
      lVal_5 = local_68._0_8_;
      if (0xfff < uVal_6) {
        lVal_5 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_5)) {
LAB_18009c8b4:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_6 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_6);
    }
  }
  return local_48;
}

// Unwind@18009c8c0
void Unwind_18009c8c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@18009c8f0
void Unwind_18009c8f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@18009c920
void Unwind_18009c920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x70));
  return;
}

// Unwind@18009c950
void Unwind_18009c950(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@18009c980
void Unwind_18009c980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@18009c9b0
void Unwind_18009c9b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@18009c9e0
void Unwind_18009c9e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// func_0x18009ca10
uint8_t (*func_0x18009ca10(int64_t param_1,uint8_t (*param_2)[16]))[16]
{
  byte bFlag_1;
  byte *pU8_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  size_t sz_5;
  uint8_t (*pArr16_6)[16];
  byte *pU8_7;
  uint64_t uVal_8;
  uint64_t local_60;
  uint8_t local_58;
  uint8_t (*local_50)[16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_2 = ZEXT816(0);
  *(uint64_t *)param_2[1] = 0;
  *(uint64_t *)(param_2[1] + 8) = 0xf;
  pU8_7 = *(byte **)(param_1 + 0x38);
  pU8_2 = *(byte **)(param_1 + 0x40);
  if (pU8_7 != pU8_2) {
    local_50 = param_2;
    do {
      pArr16_6 = local_50;
      bFlag_1 = *pU8_7;
      if (bFlag_1 < 0x20) {
        local_58 = 0;
        local_60 = 0;
        func_0x1800a3a00(&local_60,9,"<U+%.4X>");
        sz_5 = strlen((char *)&local_60);
        lVal_3 = *(int64_t *)pArr16_6[1];
        uVal_4 = *(uint64_t *)(pArr16_6[1] + 8);
        uVal_8 = uVal_4 - lVal_3;
        if (uVal_8 < sz_5) {
          func_0x180082950(pArr16_6,sz_5,uVal_8,&local_60,sz_5);
        }
        else {
          *(size_t *)pArr16_6[1] = sz_5 + lVal_3;
          if (0xf < uVal_4) {
            pArr16_6 = *(uint8_t (**)[16])*pArr16_6;
          }
          func_0x1806aa960(*pArr16_6 + lVal_3,&local_60,sz_5);
          (*pArr16_6)[sz_5 + lVal_3] = 0;
        }
      }
      else {
        uVal_4 = *(uint64_t *)local_50[1];
        uVal_8 = *(uint64_t *)(local_50[1] + 8);
        if (uVal_4 < uVal_8) {
          *(uint64_t *)local_50[1] = uVal_4 + 1;
          if (0xf < uVal_8) {
            pArr16_6 = *(uint8_t (**)[16])*local_50;
          }
          (*pArr16_6)[uVal_4] = bFlag_1;
          (*pArr16_6)[uVal_4 + 1] = 0;
        }
        else {
          func_0x18008c590(local_50,1);
        }
      }
      pU8_7 = pU8_7 + 1;
      param_2 = local_50;
    } while (pU8_7 != pU8_2);
  }
  return param_2;
}

// Unwind@18009cb70
void Unwind_18009cb70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x38));
  return;
}

// func_0x18009cbb0
void func_0x18009cbb0(uint64_t *param_1)
{
  *param_1 = &PTR_LAB_1806aff10;
  param_1[4] = std::exception::vftable;
  func_0x18067b490(param_1 + 5);
  *param_1 = std::exception::vftable;
  func_0x18067b490(param_1 + 1);
  return;
}

// func_0x18009cbf0
void func_0x18009cbf0(int64_t param_1)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  func_0x180084c70(param_1 + 0xc0,*(uint8_t *)(param_1 + 0xb8));
  pLong_1 = *(int64_t **)(param_1 + 0xa8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_1 + 0x70));
    *(uint64_t *)(param_1 + 0xa8) = 0;
  }
  lVal_2 = *(int64_t *)(param_1 + 0x40);
  if (lVal_2 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 0x50) - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) goto LAB_18009cd26;
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 0x40) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x50) = 0;
  }
  lVal_2 = *(int64_t *)(param_1 + 0x20);
  if (lVal_2 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 0x30) - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) goto LAB_18009cd26;
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 0x20) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x30) = 0;
  }
  lVal_2 = *(int64_t *)(param_1 + 8);
  if (lVal_2 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 0x18) - lVal_2;
    lVal_3 = lVal_2;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_3)) {
LAB_18009cd26:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}

// Unwind@18009cd30
void Unwind_18009cd30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18009cd50
uint64_t func_0x18009cd50(int64_t param_1,uint64_t *param_2)
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
LAB_18009cdb0:
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
    goto LAB_18009d97b;
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
    iVal_4 = func_0x180098200(lVal_9);
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
          if ((uVal_8 & 0x1f) == 0) goto LAB_18009cdb0;
          pU64_13 = pU64_13 + uVal_10;
          uVal_6 = 0xffffffff;
        }
        *pU64_13 = *pU64_13 | uVal_6 >> (-ch_12 & 0x1fU);
      }
      goto LAB_18009cdb0;
    }
LAB_18009cfd9:
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
    iVal_4 = func_0x180098200(lVal_9);
    *(int *)(param_1 + 0x40) = iVal_4;
    if (iVal_4 == 0xb) goto LAB_18009cfd9;
    if (iVal_4 != 4) {
      func_0x180001060(&local_88,"object key");
      func_0x18009c3b0(param_1,&local_128,4,&local_88);
      local_98 = *(uint64_t *)(param_1 + 0x78);
      local_a8 = *(int64_t *)(param_1 + 0x68);
      uStack_a0 = *(uint64_t *)(param_1 + 0x70);
      func_0x18009bf90(&local_e8,0x65,&local_a8,&local_128,0);
      func_0x18009ca10(lVal_9,local_68);
      uVal_6 = func_0x18009e310(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_e8);
LAB_18009d97b:
      uVal_8 = (uint64_t)uVal_6;
      func_0x180001e70(local_68);
      func_0x18009cbb0(&local_e8);
      func_0x180001e70(&local_128);
      func_0x180001e70(&local_88);
      goto LAB_18009d2d1;
    }
    func_0x1800a11f0(*(uint64_t *)(*(int64_t *)(param_2[2] + -8) + 8),&local_e8,param_1 + 0x98);
    param_2[4] = local_e8 + 0x40;
    iVal_4 = func_0x180098200(lVal_9);
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
      goto LAB_18009d97b;
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
        if ((uVal_8 & 0x1f) == 0) goto LAB_18009d2ab;
        pU64_13 = pU64_13 + uVal_10;
        uVal_6 = ~(0xffffffffU >> (-ch_12 & 0x1fU));
      }
      *pU64_13 = *pU64_13 & uVal_6;
    }
LAB_18009d2ab:
    uVal_5 = func_0x180098200(lVal_9);
    *(uint32_t *)(param_1 + 0x40) = uVal_5;
    goto LAB_18009cdb0;
  default:
    goto switchD_18009cdc5_caseD_a;
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
    if (*(char *)((int64_t)param_2 + 0x29) != '\x01') goto LAB_18009d47f;
    param_2 = &local_e8;
    func_0x1800a3150(param_2,&local_128);
    func_0x18067a120(param_2,&DAT_180768d30);
    goto switchD_18009cdc5_caseD_a;
  }
  do {
    if (local_138._8_8_ == 0) {
      uVal_8 = CONCAT71((int7)((uint64_t)param_2 >> 8),1);
      goto LAB_18009d2d1;
    }
    uVal_8 = (uint64_t)(local_138._8_4_ & 0x1f);
    uVal_10 = uVal_8 - 1;
    if ((*(uint *)(((uint64_t)(uVal_8 != 0) << 0x3d) +
                   ((int64_t)local_138._8_8_ >> 0x3f & 0xe000000000000000U) +
                   ((uint64_t)local_138._8_8_ >> 5) * 4 + local_148._0_8_ + (uVal_10 >> 5) * 4 +
                  -0x2000000000000000) >> ((uint)uVal_10 & 0x1f) & 1) == 0) {
      iVal_4 = func_0x180098200(lVal_9);
      *(int *)(param_1 + 0x40) = iVal_4;
      if (iVal_4 == 0xd) {
        iVal_4 = func_0x180098200(lVal_9);
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
          goto LAB_18009d97b;
        }
        func_0x1800a11f0(*(uint64_t *)(*(int64_t *)(param_2[2] + -8) + 8),&local_e8);
        param_2[4] = local_e8 + 0x40;
        iVal_4 = func_0x180098200(lVal_9);
        *(int *)(param_1 + 0x40) = iVal_4;
        if (iVal_4 == 0xc) {
          uVal_5 = func_0x180098200(lVal_9);
          *(uint32_t *)(param_1 + 0x40) = uVal_5;
          goto LAB_18009cdb0;
        }
        func_0x180001060(&local_88,"object separator");
        func_0x18009c3b0(param_1,&local_128,0xc,&local_88);
        local_98 = *(uint64_t *)(param_1 + 0x78);
        local_a8 = *(int64_t *)(param_1 + 0x68);
        uStack_a0 = *(uint64_t *)(param_1 + 0x70);
        func_0x18009bf90(&local_e8,0x65,&local_a8,&local_128,0);
        func_0x18009ca10(lVal_9,local_68);
        uVal_6 = func_0x18009e310(param_2,*(uint64_t *)(param_1 + 0x68),local_68,&local_e8);
        goto LAB_18009d97b;
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
        goto LAB_18009d97b;
      }
    }
    else {
      iVal_4 = func_0x180098200(lVal_9);
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
        goto LAB_18009d97b;
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
  uVal_5 = func_0x180098200(lVal_9);
  *(uint32_t *)(param_1 + 0x40) = uVal_5;
  goto LAB_18009cdb0;
switchD_18009cdc5_caseD_a:
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
LAB_18009d47f:
  if (0xf < local_90) {
    uVal_8 = local_90 + 1;
    lVal_9 = local_a8;
    if (0xfff < uVal_8) {
      lVal_9 = *(int64_t *)(local_a8 + -8);
      if (0x1f < (uint64_t)((local_a8 + -8) - lVal_9)) goto LAB_18009d9ac;
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
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_9)) goto LAB_18009d9ac;
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
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_9)) goto LAB_18009d9ac;
      uVal_8 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_9,uVal_8);
  }
  uVal_8 = 0;
LAB_18009d2d1:
  if (local_148._0_8_ != 0) {
    uVal_10 = local_138._0_8_ - local_148._0_8_;
    lVal_9 = local_148._0_8_;
    if (0xfff < uVal_10) {
      lVal_9 = *(int64_t *)(local_148._0_8_ + -8);
      if (0x1f < (uint64_t)((local_148._0_8_ + -8) - lVal_9)) {
LAB_18009d9ac:
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

// Unwind@18009d9d0
void Unwind_18009d9d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009da10
void Unwind_18009da10(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@18009da50
void Unwind_18009da50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18009da90
void Unwind_18009da90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009dad0
void Unwind_18009dad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009db10
void Unwind_18009db10(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@18009db50
void Unwind_18009db50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18009db90
void Unwind_18009db90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009dbd0
void Unwind_18009dbd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009dc10
void Unwind_18009dc10(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@18009dc50
void Unwind_18009dc50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18009dc90
void Unwind_18009dc90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009dcd0
void Unwind_18009dcd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18009dd10
void Unwind_18009dd10(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@18009dd50
void Unwind_18009dd50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009dd90
void Unwind_18009dd90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009ddd0
void Unwind_18009ddd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18009de10
void Unwind_18009de10(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0x70);
  return;
}

// Unwind@18009de50
void Unwind_18009de50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009de90
void Unwind_18009de90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009ded0
void Unwind_18009ded0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009df10
void Unwind_18009df10(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@18009df50
void Unwind_18009df50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18009df90
void Unwind_18009df90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009dfd0
void Unwind_18009dfd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009e010
void Unwind_18009e010(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@18009e050
void Unwind_18009e050(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18009e090
void Unwind_18009e090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009e0d0
void Unwind_18009e0d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009e110
void Unwind_18009e110(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@18009e150
void Unwind_18009e150(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18009e190
void Unwind_18009e190(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009e1d0
void Unwind_18009e1d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18009e210
void Unwind_18009e210(uint64_t param_1,int64_t param_2)
{
  func_0x18009cbb0(param_2 + 0xb0);
  return;
}

// Unwind@18009e250
void Unwind_18009e250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18009e290
void Unwind_18009e290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18009e2d0
void Unwind_18009e2d0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x50);
  return;
}

// func_0x18009e310
uint64_t func_0x18009e310(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_78 [40];
  uint8_t local_50 [64];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  *(uint8_t *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    func_0x1800a3150(local_50,param_4);
    func_0x18067a120(local_50,&DAT_180768d30);
  }
  else if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_78)) {
    return 0;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x18009e380
void func_0x18009e380(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  lVal_1 = *(int64_t *)(param_1 + 8);
  if (lVal_1 != 0) {
    uVal_3 = *(int64_t *)(param_1 + 0x18) - lVal_1;
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
    *(uint8_t (*)[16])(param_1 + 8) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}

// func_0x18009e3e0
void func_0x18009e3e0(int64_t *param_1,int64_t *param_2,uint64_t param_3)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint *pU64_6;
  uint uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint uVal_10;
  int64_t lVal_11;
  bool bFlag_12;
  uint32_t local_34;
  
  lVal_1 = *param_1;
  uVal_3 = (*param_2 - lVal_1) * 8 + param_2[1];
  if (param_3 != 0) {
    if ((param_1[3] ^ 0x7fffffffffffffffU) < param_3) {
      func_0x18009e5d0();
      fnPtr_2 = (func_ptr_t )swi(3);
      (*fnPtr_2)();
      return;
    }
    local_34 = 0;
    uVal_4 = param_1[3] + param_3 + 0x1f >> 5;
    lVal_5 = param_1[1];
    uVal_9 = lVal_5 - lVal_1 >> 2;
    lVal_11 = uVal_4 - uVal_9;
    if (uVal_9 <= uVal_4) {
      if (uVal_9 <= uVal_4 && lVal_11 != 0) {
        if ((uint64_t)(param_1[2] - lVal_1 >> 2) < uVal_4) {
          func_0x18009e5f0(param_1,uVal_4,&local_34);
        }
        else {
          func_0x1806ab010(lVal_5,0,lVal_11 * 4);
          param_1[1] = lVal_5 + lVal_11 * 4;
        }
      }
    }
    else {
      param_1[1] = lVal_1 + uVal_4 * 4;
    }
    uVal_4 = param_1[3];
    if (uVal_4 == 0) {
      param_1[3] = param_3;
    }
    else {
      lVal_1 = *param_1;
      uVal_9 = ((int64_t)uVal_4 >> 0x3f & 0xe000000000000000U) + (uVal_4 >> 5) * 4;
      uVal_7 = (uint)uVal_4 & 0x1f;
      uVal_8 = (uint64_t)uVal_7;
      param_3 = param_3 + uVal_4;
      param_1[3] = param_3;
      uVal_4 = ((int64_t)uVal_3 >> 0x3f & 0xe000000000000000U) + (uVal_3 >> 5) * 4;
      uVal_10 = (uint)uVal_3 & 0x1f;
      if (((uint64_t)(uVal_10 ^ uVal_7) | uVal_4 ^ uVal_9) != 0) {
        lVal_5 = uVal_9 + lVal_1;
        uVal_3 = (uint64_t)((uint)param_3 & 0x1f);
        pU64_6 = (uint *)(((int64_t)param_3 >> 0x3f & 0xe000000000000000U) +
                         lVal_1 + (param_3 >> 5) * 4);
        do {
          bFlag_12 = uVal_8 != 0;
          uVal_8 = uVal_8 - 1;
          uVal_9 = (uint64_t)bFlag_12;
          if (!bFlag_12) {
            uVal_8 = 0x1f;
          }
          bFlag_12 = uVal_3 != 0;
          uVal_3 = uVal_3 - 1;
          if (!bFlag_12) {
            uVal_3 = 0x1f;
          }
          pU64_6 = pU64_6 + ((uint64_t)bFlag_12 - 1);
          uVal_7 = 1 << ((byte)uVal_3 & 0x1f);
          if ((*(uint *)(lVal_5 + -4 + uVal_9 * 4) >> ((uint)uVal_8 & 0x1f) & 1) == 0) {
            *pU64_6 = ~uVal_7 & *pU64_6;
          }
          else {
            *pU64_6 = uVal_7 | *pU64_6;
          }
          lVal_5 = lVal_5 + uVal_9 * 4 + -4;
        } while ((uVal_4 + lVal_1 != lVal_5) || (uVal_10 != uVal_8));
      }
    }
  }
  return;
}

// func_0x18009e5d0
void func_0x18009e5d0(void)
{
  func_ptr_t fnPtr_1;
  
  func_0x1806744c0("vector<bool> too long");
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18009e5f0
void func_0x18009e5f0(uint64_t *param_1,uint64_t param_2,int *param_3)
{
  int *pInt_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  bool bFlag_10;
  
  if (param_2 >> 0x3e == 0) {
    uVal_7 = *param_1;
    uVal_3 = (int64_t)(param_1[2] - uVal_7) >> 2;
    uVal_9 = (uVal_3 >> 1) + uVal_3;
    if (uVal_9 <= param_2) {
      uVal_9 = param_2;
    }
    if (0x3fffffffffffffff - (uVal_3 >> 1) < uVal_3) {
      uVal_9 = 0x3fffffffffffffff;
    }
    if (uVal_9 >> 0x3e == 0) {
      uVal_3 = param_1[1];
      if (uVal_9 == 0) {
        uVal_6 = 0;
      }
      else if (uVal_9 < 0x400) {
        uVal_6 = func_0x180672de0(uVal_9 * 4);
      }
      else {
        if (0x3ffffffffffffff6 < uVal_9) goto LAB_18009e7a6;
        lVal_4 = func_0x180672de0(uVal_9 * 4 + 0x27);
        uVal_6 = lVal_4 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_6 - 8) = lVal_4;
      }
      lVal_8 = uVal_3 - uVal_7;
      lVal_4 = uVal_6 + lVal_8;
      uVal_7 = param_2 - (lVal_8 >> 2);
      iVal_2 = *param_3;
      if (iVal_2 == 0) {
        func_0x1806ab010(lVal_4,0,uVal_7 * 4);
      }
      else if (uVal_7 != 0) {
        if (7 < uVal_7) {
          uVal_3 = uVal_7 & 0xfffffffffffffff8;
          lVal_4 = lVal_4 + uVal_3 * 4;
          uVal_5 = 0;
          do {
            pInt_1 = (int *)(lVal_8 + uVal_6 + uVal_5 * 4);
            *pInt_1 = iVal_2;
            pInt_1[1] = iVal_2;
            pInt_1[2] = iVal_2;
            pInt_1[3] = iVal_2;
            pInt_1 = (int *)(lVal_8 + uVal_6 + 0x10 + uVal_5 * 4);
            *pInt_1 = iVal_2;
            pInt_1[1] = iVal_2;
            pInt_1[2] = iVal_2;
            pInt_1[3] = iVal_2;
            uVal_5 = uVal_5 + 8;
          } while (uVal_3 != uVal_5);
          bFlag_10 = uVal_7 == uVal_3;
          uVal_7 = (uint64_t)((uint)uVal_7 & 7);
          if (bFlag_10) goto LAB_18009e73c;
        }
        uVal_3 = 0;
        do {
          *(int *)(lVal_4 + uVal_3 * 4) = iVal_2;
          uVal_3 = uVal_3 + 1;
        } while (uVal_7 != uVal_3);
      }
LAB_18009e73c:
      func_0x1806aa960(uVal_6,*param_1,param_1[1] - *param_1);
      uVal_7 = *param_1;
      if (uVal_7 != 0) {
        uVal_5 = param_1[2] - uVal_7;
        uVal_3 = uVal_7;
        if (0xfff < uVal_5) {
          uVal_3 = *(uint64_t *)(uVal_7 - 8);
          if (0x1f < (uVal_7 - 8) - uVal_3) goto LAB_18009e7b0;
          uVal_5 = uVal_5 + 0x27;
        }
        thunk_FUN_180695dd0(uVal_3,uVal_5);
      }
      *param_1 = uVal_6;
      param_1[1] = uVal_6 + param_2 * 4;
      param_1[2] = uVal_6 + uVal_9 * 4;
      return;
    }
LAB_18009e7a6:
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18009e7b0:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18009e7c0
uint64_t func_0x18009e7c0(int64_t param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  byte *pU8_3;
  func_ptr_t fnPtr_4;
  char ch_5;
  uint64_t uVal_6;
  uint *pU64_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint uVal_10;
  uint64_t uVal_11;
  uint uVal_12;
  char ch_13;
  uint uVal_14;
  uint8_t local_c8 [56];
  uint8_t local_90 [32];
  uint8_t local_70 [8];
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_90[0] = 0;
  local_60 = CONCAT44(local_60._4_4_,
                      (int)((uint64_t)(*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8))
                           >> 3));
  pLong_1 = *(int64_t **)(param_1 + 0xa8);
  if (pLong_1 == (int64_t *)0x0) goto LAB_18009ea02;
  ch_5 = (**(func_ptr_t *)(*pLong_1 + 0x10))(pLong_1,&local_60,local_90,param_1 + 0xb8);
  uVal_8 = *(uint64_t *)(param_1 + 0x38);
  local_60 = ((int64_t)uVal_8 >> 0x3f & 0xe000000000000000U) +
             (uVal_8 >> 5) * 4 + *(int64_t *)(param_1 + 0x20);
  local_58 = (uint64_t)((uint)uVal_8 & 0x1f);
  uVal_6 = func_0x18009e3e0(param_1 + 0x20,&local_60,1);
  uVal_10 = (uint)uVal_6 & 0x1f;
  uVal_8 = (uint64_t)uVal_10 + 1;
  uVal_11 = uVal_8 >> 5;
  uVal_14 = (uint)uVal_8 & 0x1f;
  if (((uint64_t)(uVal_10 ^ uVal_14) | uVal_11 * 4) != 0) {
    pU64_7 = (uint *)(((int64_t)uVal_6 >> 0x3f & 0xe000000000000000U) +
                     (uVal_6 >> 5) * 4 + *(int64_t *)(param_1 + 0x20));
    uVal_10 = -1 << (sbyte)uVal_10;
    ch_13 = (char)uVal_14;
    if (uVal_11 == 0) {
      uVal_12 = 0xffffffff >> (-ch_13 & 0x1fU);
      uVal_14 = uVal_12 & uVal_10;
      uVal_10 = ~uVal_12 | ~uVal_10;
    }
    else {
      uVal_14 = 0;
      if (ch_5 != '\0') {
        uVal_14 = uVal_10;
      }
      *pU64_7 = uVal_14 | ~uVal_10 & *pU64_7;
      func_0x1806ab010(pU64_7 + 1,-ch_5);
      if ((uVal_8 & 0x1f) == 0) goto LAB_18009e929;
      uVal_14 = 0xffffffff >> (-ch_13 & 0x1fU);
      pU64_7 = pU64_7 + uVal_11;
      uVal_10 = ~uVal_14;
    }
    uVal_12 = 0;
    if (ch_5 != '\0') {
      uVal_12 = uVal_14;
    }
    *pU64_7 = uVal_12 | uVal_10 & *pU64_7;
  }
LAB_18009e929:
  local_60 = CONCAT71(local_60._1_7_,1);
  func_0x18009f9b0(param_1,local_70,&local_60,1);
  pU64_2 = *(uint64_t **)(param_1 + 0x10);
  if (pU64_2 == *(uint64_t **)(param_1 + 0x18)) {
    func_0x18007f260(param_1 + 8,pU64_2,&local_68);
    uVal_8 = *(uint64_t *)(param_1 + 0x10);
  }
  else {
    *pU64_2 = local_68;
    uVal_8 = *(int64_t *)(param_1 + 0x10) + 8;
    *(uint64_t *)(param_1 + 0x10) = uVal_8;
  }
  if ((param_2 != 0xffffffffffffffff) && (pU8_3 = *(byte **)(uVal_8 - 8), pU8_3 != (byte *)0x0)) {
    uVal_8 = (uint64_t)*pU8_3;
    uVal_11 = 1;
    if (uVal_8 < 3) {
      uVal_11 = *(uint64_t *)(&DAT_1806b0e68 + uVal_8 * 8);
    }
    if (uVal_11 < param_2) {
      func_0x18009fe30(local_90,param_2);
      func_0x18009fcc0(&local_60,"excessive object size: ",local_90);
      func_0x18009f590(local_c8,0x198,&local_60,pU8_3);
      func_0x18067a120(local_c8,&DAT_180768cf0);
LAB_18009ea02:
      func_0x180674610();
      fnPtr_4 = (func_ptr_t )swi(3);
      uVal_9 = (*fnPtr_4)();
      return uVal_9;
    }
  }
  return CONCAT71((int7)(uVal_8 >> 8),1);
}

// Unwind@18009ea10
void Unwind_18009ea10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x88);
  return;
}

// Unwind@18009ea50
void Unwind_18009ea50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// func_0x18009ea90
uint64_t func_0x18009ea90(int64_t param_1)
{
  uint8_t uVal_1;
  int64_t *pLong_2;
  uint8_t *pU64_3;
  uint64_t uVal_4;
  char **ptr2_Char_5;
  char **ptr2_Char_6;
  func_ptr_t fnPtr_7;
  char ch_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  char **ptr2_Char_12;
  char **ptr2_Char_13;
  bool bFlag_14;
  uint64_t local_b0;
  uint64_t local_a8;
  uint8_t local_78 [32];
  char **local_58;
  char **local_50;
  char **local_48;
  int64_t local_40;
  uint8_t local_38 [8];
  uint64_t local_30;
  uint64_t local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int64_t *)(*(int64_t *)(param_1 + 0x10) + -8) != 0) {
    local_78[0] = 1;
    local_b0 = CONCAT44(local_b0._4_4_,
                        (int)((uint64_t)
                              (*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8)) >> 3) +
                        -1);
    pLong_2 = *(int64_t **)(param_1 + 0xa8);
    if (pLong_2 == (int64_t *)0x0) {
LAB_18009ed12:
      func_0x180674610();
      fnPtr_7 = (func_ptr_t )swi(3);
      uVal_11 = (*fnPtr_7)();
      return uVal_11;
    }
    ch_8 = (**(func_ptr_t *)(*pLong_2 + 0x10))(pLong_2,&local_b0,local_78);
    if (ch_8 == '\0') {
      func_0x18009ff70(local_38,param_1 + 0xb8);
      pU64_3 = *(uint8_t **)(*(int64_t *)(param_1 + 0x10) + -8);
      uVal_1 = *pU64_3;
      *pU64_3 = local_38[0];
      uVal_11 = *(uint64_t *)(pU64_3 + 8);
      *(uint64_t *)(pU64_3 + 8) = local_30;
      local_38[0] = uVal_1;
      local_30 = uVal_11;
      func_0x180084c70(&local_30);
    }
  }
  *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -8;
  uVal_4 = *(uint64_t *)(param_1 + 0x38);
  uVal_9 = (uint64_t)((uint)uVal_4 & 0x1f);
  uVal_10 = uVal_9 - 1;
  local_b0 = ((uint64_t)(uVal_9 != 0) << 0x3d) + -0x2000000000000000 +
             ((int64_t)uVal_4 >> 0x3f & 0xe000000000000000U) +
             (uVal_4 >> 5) * 4 + *(int64_t *)(param_1 + 0x20) + (uVal_10 >> 5) * 4;
  local_a8 = (uint64_t)((uint)uVal_10 & 0x1f);
  func_0x1800a2b50(param_1 + 0x20,local_78,&local_b0);
  if (((*(int64_t *)(param_1 + 8) != *(int64_t *)(param_1 + 0x10)) &&
      (ptr2_Char_5 = *(char ***)(*(int64_t *)(param_1 + 0x10) + -8), ptr2_Char_5 != (char **)0x0)) &&
     (ch_8 = *(char *)ptr2_Char_5, (byte)(ch_8 - 1U) < 2)) {
    ptr2_Char_6 = *(char ***)ptr2_Char_5[1];
    if (ch_8 == '\x01') {
      local_50 = (char **)*ptr2_Char_6;
      local_48 = (char **)0x0;
    }
    else {
      local_50 = (char **)0x0;
      local_48 = ptr2_Char_6;
    }
    local_40 = -0x8000000000000000;
LAB_18009ebf7:
    if (ch_8 == '\x01') {
      if (local_50 == ptr2_Char_6) {
        return 1;
      }
      ptr2_Char_13 = local_50 + 8;
    }
    else if (ch_8 == '\x02') {
      ptr2_Char_13 = local_48;
      if (local_48 == *(char ***)((int64_t)ptr2_Char_5[1] + 8)) {
        return 1;
      }
    }
    else {
      if (local_40 == 1) {
        return 1;
      }
      ptr2_Char_13 = ptr2_Char_5;
      if (local_40 != 0) {
        func_0x180001060(local_78,"cannot get value");
        func_0x180083e30(&local_b0,0xd6,local_78,ptr2_Char_5);
        func_0x18067a120(&local_b0,&DAT_180768740);
        goto LAB_18009ed12;
      }
    }
    if (*(char *)ptr2_Char_13 != '\t') {
      if (ch_8 == '\x02') {
        local_48 = local_48 + 2;
      }
      else if (ch_8 == '\x01') {
        ptr2_Char_13 = (char **)local_50[2];
        ptr2_Char_12 = local_50;
        if (*(char *)((int64_t)local_50[2] + 0x19) == '\0') {
          do {
            local_50 = ptr2_Char_13;
            ptr2_Char_13 = (char **)*local_50;
          } while (*(char *)((int64_t)*local_50 + 0x19) == '\0');
        }
        else {
          do {
            local_50 = (char **)ptr2_Char_12[1];
            if (*(char *)((int64_t)local_50 + 0x19) != '\0') break;
            bFlag_14 = ptr2_Char_12 == (char **)local_50[2];
            ptr2_Char_12 = local_50;
          } while (bFlag_14);
        }
      }
      else {
        local_40 = local_40 + 1;
      }
      goto LAB_18009ebf7;
    }
    local_58 = ptr2_Char_5;
    func_0x1800a00b0(ptr2_Char_5,&local_b0,&local_58);
  }
  return 1;
}

// Unwind@18009ed20
void Unwind_18009ed20(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18009ed40
void Unwind_18009ed40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x18009ed70
uint64_t func_0x18009ed70(int64_t param_1,uint64_t param_2)
{
  uint8_t uVal_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  char ch_7;
  uint64_t uVal_8;
  uint *pU64_9;
  uint64_t uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint64_t unaff_RBX;
  char ch_13;
  uint uVal_14;
  uint8_t local_80 [8];
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint8_t local_60 [8];
  uint64_t local_58;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80[0] = 3;
  local_78 = func_0x1800a0a50(param_2);
  local_49 = 4;
  local_70 = CONCAT44(local_70._4_4_,
                      (int)((uint64_t)(*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8))
                           >> 3));
  pLong_2 = *(int64_t **)(param_1 + 0xa8);
  if (pLong_2 == (int64_t *)0x0) {
    func_0x180674610();
    fnPtr_4 = (func_ptr_t )swi(3);
    uVal_10 = (*fnPtr_4)();
    return uVal_10;
  }
  ch_7 = (**(func_ptr_t *)(*pLong_2 + 0x10))(pLong_2,&local_70,&local_49,local_80);
  uVal_3 = *(uint64_t *)(param_1 + 0x58);
  local_70 = ((int64_t)uVal_3 >> 0x3f & 0xe000000000000000U) +
             (uVal_3 >> 5) * 4 + *(int64_t *)(param_1 + 0x40);
  local_68 = (uint64_t)((uint)uVal_3 & 0x1f);
  uVal_8 = func_0x18009e3e0((int64_t *)(param_1 + 0x40),&local_70,1);
  uVal_11 = (uint)uVal_8 & 0x1f;
  uVal_3 = (uint64_t)uVal_11 + 1;
  uVal_5 = uVal_3 >> 5;
  uVal_14 = (uint)uVal_3 & 0x1f;
  if (((uint64_t)(uVal_11 ^ uVal_14) | uVal_5 * 4) != 0) {
    pU64_9 = (uint *)(((int64_t)uVal_8 >> 0x3f & 0xe000000000000000U) +
                     (uVal_8 >> 5) * 4 + *(int64_t *)(param_1 + 0x40));
    uVal_11 = -1 << (sbyte)uVal_11;
    ch_13 = (char)uVal_14;
    if (uVal_5 == 0) {
      uVal_12 = 0xffffffff >> (-ch_13 & 0x1fU);
      uVal_14 = uVal_12 & uVal_11;
      uVal_11 = ~uVal_12 | ~uVal_11;
    }
    else {
      uVal_8 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),ch_7) & 0xffffffff;
      uVal_14 = 0;
      if (ch_7 != '\0') {
        uVal_14 = uVal_11;
      }
      *pU64_9 = uVal_14 | ~uVal_11 & *pU64_9;
      func_0x1806ab010(pU64_9 + 1,CONCAT71((int7)(uVal_8 >> 8),-(char)uVal_8));
      if ((uVal_3 & 0x1f) == 0) goto LAB_18009eee6;
      uVal_14 = 0xffffffff >> (-ch_13 & 0x1fU);
      pU64_9 = pU64_9 + uVal_5;
      uVal_11 = ~uVal_14;
    }
    uVal_12 = 0;
    if (ch_7 != '\0') {
      uVal_12 = uVal_14;
    }
    *pU64_9 = uVal_12 | uVal_11 & *pU64_9;
  }
LAB_18009eee6:
  if ((ch_7 != '\0') && (*(int64_t *)(*(int64_t *)(param_1 + 0x10) + -8) != 0)) {
    func_0x18009ff70(local_60,param_1 + 0xb8);
    func_0x1800a11f0(*(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x10) + -8) + 8),&local_70,
                  param_2);
    lVal_6 = local_70;
    uVal_1 = *(uint8_t *)(local_70 + 0x40);
    *(uint8_t *)(local_70 + 0x40) = local_60[0];
    uVal_10 = *(uint64_t *)(local_70 + 0x48);
    *(uint64_t *)(local_70 + 0x48) = local_58;
    local_60[0] = uVal_1;
    local_58 = uVal_10;
    func_0x180084c70(&local_58);
    *(int64_t *)(param_1 + 0x60) = lVal_6 + 0x40;
  }
  func_0x180084c70(&local_78,local_80[0]);
  return 1;
}

// Unwind@18009ef80
void Unwind_18009ef80(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x28);
  return;
}

// Unwind@18009efc0
void Unwind_18009efc0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18009efe0
void Unwind_18009efe0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x48);
  return;
}

// Unwind@18009f020
void Unwind_18009f020(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18009f040
uint64_t func_0x18009f040(int64_t param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  byte *pU8_3;
  func_ptr_t fnPtr_4;
  char ch_5;
  uint64_t uVal_6;
  uint *pU64_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint uVal_10;
  uint64_t uVal_11;
  uint uVal_12;
  char ch_13;
  uint uVal_14;
  uint8_t local_c8 [56];
  uint8_t local_90 [32];
  uint8_t local_70 [8];
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_90[0] = 2;
  local_60 = CONCAT44(local_60._4_4_,
                      (int)((uint64_t)(*(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8))
                           >> 3));
  pLong_1 = *(int64_t **)(param_1 + 0xa8);
  if (pLong_1 == (int64_t *)0x0) goto LAB_18009f282;
  ch_5 = (**(func_ptr_t *)(*pLong_1 + 0x10))(pLong_1,&local_60,local_90,param_1 + 0xb8);
  uVal_8 = *(uint64_t *)(param_1 + 0x38);
  local_60 = ((int64_t)uVal_8 >> 0x3f & 0xe000000000000000U) +
             (uVal_8 >> 5) * 4 + *(int64_t *)(param_1 + 0x20);
  local_58 = (uint64_t)((uint)uVal_8 & 0x1f);
  uVal_6 = func_0x18009e3e0(param_1 + 0x20,&local_60,1);
  uVal_10 = (uint)uVal_6 & 0x1f;
  uVal_8 = (uint64_t)uVal_10 + 1;
  uVal_11 = uVal_8 >> 5;
  uVal_14 = (uint)uVal_8 & 0x1f;
  if (((uint64_t)(uVal_10 ^ uVal_14) | uVal_11 * 4) != 0) {
    pU64_7 = (uint *)(((int64_t)uVal_6 >> 0x3f & 0xe000000000000000U) +
                     (uVal_6 >> 5) * 4 + *(int64_t *)(param_1 + 0x20));
    uVal_10 = -1 << (sbyte)uVal_10;
    ch_13 = (char)uVal_14;
    if (uVal_11 == 0) {
      uVal_12 = 0xffffffff >> (-ch_13 & 0x1fU);
      uVal_14 = uVal_12 & uVal_10;
      uVal_10 = ~uVal_12 | ~uVal_10;
    }
    else {
      uVal_14 = 0;
      if (ch_5 != '\0') {
        uVal_14 = uVal_10;
      }
      *pU64_7 = uVal_14 | ~uVal_10 & *pU64_7;
      func_0x1806ab010(pU64_7 + 1,-ch_5);
      if ((uVal_8 & 0x1f) == 0) goto LAB_18009f1a9;
      uVal_14 = 0xffffffff >> (-ch_13 & 0x1fU);
      pU64_7 = pU64_7 + uVal_11;
      uVal_10 = ~uVal_14;
    }
    uVal_12 = 0;
    if (ch_5 != '\0') {
      uVal_12 = uVal_14;
    }
    *pU64_7 = uVal_12 | uVal_10 & *pU64_7;
  }
LAB_18009f1a9:
  local_60 = CONCAT71(local_60._1_7_,2);
  func_0x18009f9b0(param_1,local_70,&local_60,1);
  pU64_2 = *(uint64_t **)(param_1 + 0x10);
  if (pU64_2 == *(uint64_t **)(param_1 + 0x18)) {
    func_0x18007f260(param_1 + 8,pU64_2,&local_68);
    uVal_8 = *(uint64_t *)(param_1 + 0x10);
  }
  else {
    *pU64_2 = local_68;
    uVal_8 = *(int64_t *)(param_1 + 0x10) + 8;
    *(uint64_t *)(param_1 + 0x10) = uVal_8;
  }
  if ((param_2 != 0xffffffffffffffff) && (pU8_3 = *(byte **)(uVal_8 - 8), pU8_3 != (byte *)0x0)) {
    uVal_8 = (uint64_t)*pU8_3;
    uVal_11 = 1;
    if (uVal_8 < 3) {
      uVal_11 = *(uint64_t *)(&DAT_1806b0e68 + uVal_8 * 8);
    }
    if (uVal_11 < param_2) {
      func_0x18009fe30(local_90,param_2);
      func_0x18009fcc0(&local_60,"excessive array size: ",local_90);
      func_0x18009f590(local_c8,0x198,&local_60,pU8_3);
      func_0x18067a120(local_c8,&DAT_180768cf0);
LAB_18009f282:
      func_0x180674610();
      fnPtr_4 = (func_ptr_t )swi(3);
      uVal_9 = (*fnPtr_4)();
      return uVal_9;
    }
  }
  return CONCAT71((int7)(uVal_8 >> 8),1);
}

// Unwind@18009f290
void Unwind_18009f290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x88);
  return;
}

// Unwind@18009f2d0
void Unwind_18009f2d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// func_0x18009f310
uint64_t func_0x18009f310(int64_t param_1)
{
  uint8_t uVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  uint8_t *pU64_4;
  uint64_t uVal_5;
  char *fnPtr_6;
  int64_t lVal_7;
  func_ptr_t fnPtr_8;
  char ch_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  uint8_t local_50 [16];
  uint8_t local_40 [8];
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVal_2 = *(int64_t *)(param_1 + 0x10);
  if (*(int64_t *)(lVal_2 + -8) == 0) {
    *(int64_t *)(param_1 + 0x10) = lVal_2 + -8;
    uVal_5 = *(uint64_t *)(param_1 + 0x38);
    uVal_10 = (uint64_t)((uint)uVal_5 & 0x1f);
    uVal_11 = uVal_10 - 1;
    local_30 = ((uint64_t)(uVal_10 != 0) << 0x3d) + -0x2000000000000000 +
               ((int64_t)uVal_5 >> 0x3f & 0xe000000000000000U) +
               (uVal_5 >> 5) * 4 + *(int64_t *)(param_1 + 0x20) + (uVal_11 >> 5) * 4;
    local_28 = (uint64_t)((uint)uVal_11 & 0x1f);
    func_0x1800a2b50(param_1 + 0x20,local_50,&local_30);
  }
  else {
    local_50[0] = 3;
    local_30 = CONCAT44(local_30._4_4_,
                        (int)((uint64_t)(lVal_2 - *(int64_t *)(param_1 + 8)) >> 3) + -1);
    pLong_3 = *(int64_t **)(param_1 + 0xa8);
    if (pLong_3 == (int64_t *)0x0) {
      func_0x180674610();
      fnPtr_8 = (func_ptr_t )swi(3);
      uVal_12 = (*fnPtr_8)();
      return uVal_12;
    }
    ch_9 = (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,&local_30,local_50);
    if (ch_9 == '\0') {
      func_0x18009ff70(local_40,param_1 + 0xb8);
      pU64_4 = *(uint8_t **)(*(int64_t *)(param_1 + 0x10) + -8);
      uVal_1 = *pU64_4;
      *pU64_4 = local_40[0];
      uVal_12 = *(uint64_t *)(pU64_4 + 8);
      *(uint64_t *)(pU64_4 + 8) = local_38;
      local_40[0] = uVal_1;
      local_38 = uVal_12;
      func_0x180084c70(&local_38);
    }
    *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -8;
    uVal_5 = *(uint64_t *)(param_1 + 0x38);
    uVal_10 = (uint64_t)((uint)uVal_5 & 0x1f);
    uVal_11 = uVal_10 - 1;
    local_30 = ((uint64_t)(uVal_10 != 0) << 0x3d) + -0x2000000000000000 +
               ((int64_t)uVal_5 >> 0x3f & 0xe000000000000000U) +
               (uVal_5 >> 5) * 4 + *(int64_t *)(param_1 + 0x20) + (uVal_11 >> 5) * 4;
    local_28 = (uint64_t)((uint)uVal_11 & 0x1f);
    func_0x1800a2b50(param_1 + 0x20,local_50,&local_30);
    if (((ch_9 == '\0') && (*(int64_t *)(param_1 + 8) != *(int64_t *)(param_1 + 0x10))) &&
       (fnPtr_6 = *(char **)(*(int64_t *)(param_1 + 0x10) + -8), *fnPtr_6 == '\x02')) {
      lVal_2 = *(int64_t *)(fnPtr_6 + 8);
      lVal_7 = *(int64_t *)(lVal_2 + 8);
      func_0x180084c70(lVal_7 + -8,*(uint8_t *)(lVal_7 + -0x10));
      pLong_3 = (int64_t *)(lVal_2 + 8);
      *pLong_3 = *pLong_3 + -0x10;
    }
  }
  return 1;
}

// Unwind@18009f4e0
void Unwind_18009f4e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18009f500
void Unwind_18009f500(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18009f520
uint64_t func_0x18009f520(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_68 [32];
  uint8_t local_48 [56];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  *(uint8_t *)(param_1 + 0x68) = 1;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
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

// func_0x18009f590
uint64_t * func_0x18009f590(uint64_t *param_1,uint32_t param_2,int64_t param_3)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint8_t local_b8;
  undefined7 uStack_b7;
  int64_t local_a8;
  uint64_t local_a0;
  int64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint8_t local_78 [9];
  undefined7 uStack_6f;
  int64_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint64_t local_48;
  uint64_t local_40;
  uint8_t local_31;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  _local_78 = ZEXT816(0);
  local_68 = 0;
  local_60 = 0xf;
  local_88 = 0xc;
  local_80 = 0xf;
  local_98 = 0x725f666f5f74756f;
  local_90 = 0x65676e61;
  func_0x180094590(local_58);
  local_31 = 0x2e;
  func_0x180082ac0(&local_b8,"[json.exception.",&local_98,&local_31,local_58,&DAT_18076100f);
  if (0xf < local_40) {
    uVal_2 = local_40 + 1;
    lVal_3 = local_58._0_8_;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_58._0_8_ + -8);
      if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_3)) goto LAB_18009f837;
      uVal_2 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  local_58 = ZEXT816(0);
  local_48 = 0;
  local_40 = 0xf;
  if (0xf < (uint64_t)(local_68 + local_a8 + *(int64_t *)(param_3 + 0x10))) {
    func_0x180082810(local_58);
  }
  local_48 = 0;
  func_0x1800826d0(local_58,&local_b8,local_78,param_3);
  if (0xf < local_a0) {
    lVal_1 = CONCAT71(uStack_b7,local_b8);
    uVal_2 = local_a0 + 1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_18009f837;
      uVal_2 = local_a0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  local_a8 = 0;
  local_a0 = 0xf;
  local_b8 = 0;
  if (0xf < local_80) {
    uVal_2 = local_80 + 1;
    lVal_3 = local_98;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_98 + -8);
      if (0x1f < (uint64_t)((local_98 + -8) - lVal_3)) goto LAB_18009f837;
      uVal_2 = local_80 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  if (0xf < local_60) {
    uVal_2 = local_60 + 1;
    lVal_3 = local_78._0_8_;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_78._0_8_ + -8);
      if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_3)) goto LAB_18009f837;
      uVal_2 = local_60 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  local_78._0_8_ = local_58;
  if (0xf < local_40) {
    local_78._0_8_ = local_58._0_8_;
  }
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  *param_1 = &PTR_LAB_1806aff10;
  *(uint32_t *)(param_1 + 3) = param_2;
  param_1[4] = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  local_78[8] = 1;
  func_0x18067b3f0(local_78,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_LAB_1806aff10;
  if (0xf < local_40) {
    uVal_2 = local_40 + 1;
    lVal_3 = local_58._0_8_;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(local_58._0_8_ + -8);
      if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_3)) {
LAB_18009f837:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  return param_1;
}

// Unwind@18009f840
void Unwind_18009f840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18009f880
void Unwind_18009f880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18009f8b0
void Unwind_18009f8b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  func_0x180001e70(param_2 + 0x30);
  return;
}

// func_0x18009f8f0
uint8_t (*func_0x18009f8f0(uint8_t (*param_1)[16],char *param_2,int64_t param_3,uint64_t param_4))[16]
{
  size_t sz_1;
  uint64_t uVal_2;
  
  uVal_2 = 0xfffffffffffffffe;
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  sz_1 = strlen(param_2);
  if (0xf < sz_1 + *(int64_t *)(param_3 + 0x10) + 1) {
    func_0x180082810(param_1);
    *(uint64_t *)param_1[1] = 0;
  }
  func_0x1800a1800(param_1,param_2,param_3,param_4,param_1,uVal_2);
  return param_1;
}

// Unwind@18009f980
void Unwind_18009f980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x20));
  return;
}

// func_0x18009f9b0
uint8_t * func_0x18009f9b0(int64_t *param_1,uint8_t *param_2,uint8_t *param_3,char param_4)
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
  uint8_t local_88 [16];
  uint8_t local_78;
  uint64_t local_70;
  uint8_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint8_t local_48 [8];
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
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
  local_48[0] = *param_3;
  func_0x180082430(&local_40);
  if (param_4 == '\0') {
    local_88[0] = 5;
    local_58 = CONCAT44(local_58._4_4_,(int)((uint64_t)(param_1[2] - param_1[1]) >> 3));
    pLong_3 = (int64_t *)param_1[0x15];
    if (pLong_3 == (int64_t *)0x0) {
      func_0x180674610();
      fnPtr_5 = (func_ptr_t )swi(3);
      pU64_12 = (uint8_t *)(*fnPtr_5)();
      return pU64_12;
    }
    ch_8 = (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,&local_58,local_88,local_48);
    if (ch_8 != '\0') goto LAB_18009fa7d;
LAB_18009fbd0:
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
  }
  else {
LAB_18009fa7d:
    uVal_7 = local_40;
    uVal_6 = local_48[0];
    if (param_1[1] == param_1[2]) {
      local_48[0] = 0;
      local_40 = 0;
      pU64_12 = (uint8_t *)*param_1;
      local_78 = *pU64_12;
      *pU64_12 = uVal_6;
      local_70 = *(uint64_t *)(pU64_12 + 8);
      *(uint64_t *)(pU64_12 + 8) = uVal_7;
      func_0x180084c70(&local_70);
      lVal_11 = *param_1;
LAB_18009fbfb:
      *param_2 = 1;
    }
    else {
      fnPtr_4 = *(char **)(param_1[2] + -8);
      if (fnPtr_4 == (char *)0x0) goto LAB_18009fbd0;
      if (*fnPtr_4 == '\x02') {
        lVal_11 = *(int64_t *)(fnPtr_4 + 8);
        pU64_12 = *(uint8_t **)(lVal_11 + 8);
        if (pU64_12 == *(uint8_t **)(lVal_11 + 0x10)) {
          func_0x180085520(lVal_11,pU64_12,local_48);
        }
        else {
          *pU64_12 = local_48[0];
          *(uint64_t *)(pU64_12 + 8) = local_40;
          local_48[0] = 0;
          local_40 = 0;
          *(int64_t *)(lVal_11 + 8) = *(int64_t *)(lVal_11 + 8) + 0x10;
        }
        lVal_11 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_18009fbfb;
      }
      uVal_2 = param_1[0xb];
      uVal_9 = (uint64_t)((uint)uVal_2 & 0x1f);
      uVal_10 = uVal_9 - 1;
      lVal_11 = ((uint64_t)(uVal_9 != 0) << 0x3d) +
               ((int64_t)uVal_2 >> 0x3f & 0xe000000000000000U) + (uVal_2 >> 5) * 4 + param_1[8] +
               (uVal_10 >> 5) * 4;
      local_58 = lVal_11 + -0x2000000000000000;
      uVal_13 = (uint)uVal_10;
      local_50 = (uint64_t)(uVal_13 & 0x1f);
      uVal_1 = *(uint *)(lVal_11 + -0x2000000000000000);
      func_0x1800a2b50(param_1 + 8,local_88,&local_58);
      uVal_7 = local_40;
      uVal_6 = local_48[0];
      if ((uVal_1 >> (uVal_13 & 0x1f) & 1) == 0) goto LAB_18009fbd0;
      local_48[0] = 0;
      local_40 = 0;
      pU64_12 = (uint8_t *)param_1[0xc];
      local_68 = *pU64_12;
      *pU64_12 = uVal_6;
      local_60 = *(uint64_t *)(pU64_12 + 8);
      *(uint64_t *)(pU64_12 + 8) = uVal_7;
      func_0x180084c70(&local_60);
      *param_2 = 1;
      lVal_11 = param_1[0xc];
    }
    *(int64_t *)(param_2 + 8) = lVal_11;
  }
  func_0x180084c70(&local_40,local_48[0]);
  return param_2;
}

// Unwind@18009fc30
void Unwind_18009fc30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18009fc50
void Unwind_18009fc50(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18009fc70
void Unwind_18009fc70(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18009fc90
void Unwind_18009fc90(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x60);
  return;
}

// func_0x18009fcc0
uint8_t (*func_0x18009fcc0(uint8_t (*param_1)[16],char *param_2,uint64_t *param_3))[16]
{
  int64_t lVal_1;
  uint64_t uVal_2;
  size_t sz_3;
  uint8_t (*pArr16_4)[16];
  uint64_t uVal_5;
  
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  sz_3 = strlen(param_2);
  uVal_5 = 0xf;
  if (0xf < sz_3 + param_3[2]) {
    func_0x180082810(param_1,sz_3 + param_3[2]);
    *(uint64_t *)param_1[1] = 0;
    uVal_5 = *(uint64_t *)(param_1[1] + 8);
  }
  sz_3 = strlen(param_2);
  if (uVal_5 < sz_3) {
    func_0x180082950(param_1,sz_3);
    uVal_5 = param_3[2];
    uVal_2 = param_3[3];
  }
  else {
    *(size_t *)param_1[1] = sz_3;
    pArr16_4 = param_1;
    if (0xf < uVal_5) {
      pArr16_4 = *(uint8_t (**)[16])*param_1;
    }
    func_0x1806aa960(pArr16_4,param_2,sz_3);
    (*pArr16_4)[sz_3] = 0;
    uVal_5 = param_3[2];
    uVal_2 = param_3[3];
  }
  if (0xf < uVal_2) {
    param_3 = (uint64_t *)*param_3;
  }
  lVal_1 = *(int64_t *)param_1[1];
  uVal_2 = *(uint64_t *)(param_1[1] + 8);
  if (uVal_2 - lVal_1 < uVal_5) {
    func_0x180082950(param_1,uVal_5,uVal_5,param_3,uVal_5);
  }
  else {
    *(uint64_t *)param_1[1] = lVal_1 + uVal_5;
    pArr16_4 = param_1;
    if (0xf < uVal_2) {
      pArr16_4 = *(uint8_t (**)[16])*param_1;
    }
    func_0x1806aa960(*pArr16_4 + lVal_1,param_3);
    (*pArr16_4)[lVal_1 + uVal_5] = 0;
  }
  return param_1;
}

// Unwind@18009fe00
void Unwind_18009fe00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x18009fe30
uint8_t (*func_0x18009fe30(uint8_t (*param_1)[16],uint64_t param_2))[16]
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  byte *pU8_4;
  byte *pU8_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  byte local_36;
  uint16_t local_35;
  byte local_33 [11];
  
  if (param_2 < 10) {
    local_35._1_1_ = (byte)param_2 | 0x30;
    pU8_4 = (byte *)((int64_t)&local_35 + 1);
  }
  else {
    pU8_4 = (byte *)((int64_t)&local_35 + 1);
    lVal_3 = 0;
    do {
      uVal_7 = param_2;
      param_2 = uVal_7 / 100;
      *(uint16_t *)(pU8_4 + -1) =
           *(uint16_t *)(&DAT_1806b0846 + (uint64_t)(uint)((int)uVal_7 + (int)param_2 * -100) * 2)
      ;
      lVal_3 = lVal_3 + 2;
      pU8_4 = pU8_4 + -2;
    } while (999 < uVal_7);
    if (uVal_7 < 100) {
      pU8_4 = local_33 + -lVal_3;
    }
    else {
      *pU8_4 = (byte)param_2 | 0x30;
      param_1[1] = ZEXT816(0);
    }
  }
  *param_1 = ZEXT816(0);
  pU8_5 = local_33 + -(int64_t)pU8_4;
  if (-1 < (int64_t)pU8_5) {
    uVal_7 = 0xf;
    pArr16_6 = param_1;
    if ((byte *)0xf < pU8_5) {
      uVal_2 = (uint64_t)pU8_5 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_2) {
        uVal_7 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        pArr16_6 = (uint8_t (*)[16])func_0x180672de0(uVal_7 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_7 + 0x28);
        pArr16_6 = (uint8_t (*)[16])(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_6[-1] + 8) = lVal_3;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_6;
    }
    *(byte **)param_1[1] = pU8_5;
    *(uint64_t *)(param_1[1] + 8) = uVal_7;
    func_0x1806aa960(pArr16_6,pU8_4,pU8_5);
    pU8_5[(int64_t)*pArr16_6] = 0;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_6 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_6;
}

// func_0x18009ff70
uint8_t * func_0x18009ff70(uint8_t *param_1,uint8_t *param_2)
{
  uint8_t uVal_1;
  uint64_t uVal_2;
  int64_t *pLong_3;
  uint8_t (*pArr16_4)[16];
  uint8_t local_21;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVal_1 = *param_2;
  *param_1 = uVal_1;
  *(uint64_t *)(param_1 + 8) = 0;
  switch(uVal_1) {
  case 1:
    uVal_2 = *(uint64_t *)(param_2 + 8);
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x10);
    func_0x1800a04c0(pArr16_4,uVal_2,&local_21);
    break;
  case 2:
    pLong_3 = *(int64_t **)(param_2 + 8);
    pArr16_4 = (uint8_t (*)[16])func_0x180672de0(0x18);
    *pArr16_4 = ZEXT816(0);
    *(uint64_t *)pArr16_4[1] = 0;
    func_0x1800a0860(pArr16_4,pLong_3[1] - *pLong_3 >> 4,pLong_3,pLong_3 + 1);
    break;
  case 3:
    pArr16_4 = (uint8_t (*)[16])func_0x1800a0a50(*(uint64_t *)(param_2 + 8));
    break;
  case 4:
    pArr16_4 = (uint8_t (*)[16])(uint64_t)(byte)param_2[8];
    break;
  case 5:
  case 6:
  case 7:
    pArr16_4 = *(uint8_t (**)[16])(param_2 + 8);
    break;
  case 8:
    pArr16_4 = (uint8_t (*)[16])func_0x1800a0b60(*(uint64_t *)(param_2 + 8));
    break;
  default:
    goto switchD_18009ffad_caseD_8;
  }
  *(uint8_t (**)[16])(param_1 + 8) = pArr16_4;
switchD_18009ffad_caseD_8:
  return param_1;
}

// Unwind@1800a0050
void Unwind_1800a0050(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x18);
  return;
}

// Unwind@1800a0080
void Unwind_1800a0080(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x10);
  return;
}

// func_0x1800a00b0
char ** func_0x1800a00b0(char *param_1,char **param_2,char **param_3)
{
  char ch_1;
  char *fnPtr_2;
  uint64_t uVal_3;
  int64_t *pLong_4;
  char *fnPtr_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  char *fnPtr_8;
  uint8_t (*pArr16_9)[16];
  uint64_t uVal_10;
  uint8_t local_110 [56];
  uint8_t local_d8 [56];
  uint8_t local_a0 [56];
  uint64_t local_68;
  char local_60 [8];
  uint64_t local_58 [3];
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_1 != *param_3) {
    func_0x180001060(local_60,"iterator does not fit current value");
    func_0x180083e30(local_110,0xca,local_60,param_1);
    func_0x18067a120(local_110,&DAT_180768740);
LAB_1800a03bc:
    do {
      invalidInstructionException();
    } while( true );
  }
  *param_2 = param_1;
  *(uint8_t (*)[16])(param_2 + 1) = ZEXT816(0);
  param_2[3] = (char *)0x8000000000000000;
  ch_1 = *param_1;
  if (ch_1 == '\x02') {
    lVal_6 = *(int64_t *)(param_1 + 8);
    fnPtr_8 = *(char **)(lVal_6 + 8);
    fnPtr_2 = param_3[2];
    fnPtr_5 = fnPtr_2 + 0x10;
    if (fnPtr_5 != fnPtr_8) {
      do {
        local_60[0] = fnPtr_5[-0x10];
        ch_1 = *fnPtr_5;
        uVal_3 = *(uint64_t *)(fnPtr_5 + 8);
        *fnPtr_5 = '\0';
        *(uint64_t *)(fnPtr_5 + 8) = 0;
        fnPtr_5[-0x10] = ch_1;
        local_58[0] = *(uint64_t *)(fnPtr_5 + -8);
        *(uint64_t *)(fnPtr_5 + -8) = uVal_3;
        func_0x180084c70(local_58);
        fnPtr_5 = fnPtr_5 + 0x10;
      } while (fnPtr_5 != fnPtr_8);
      fnPtr_8 = *(char **)(lVal_6 + 8);
    }
    func_0x180084c70(fnPtr_8 + -8,fnPtr_8[-0x10]);
    *(int64_t *)(lVal_6 + 8) = *(int64_t *)(lVal_6 + 8) + -0x10;
    param_2[2] = fnPtr_2;
  }
  else {
    if (ch_1 != '\x01') {
      param_2[3] = (char *)0x1;
      if ((byte)(ch_1 - 3U) < 6) {
        if (param_3[3] == (char *)0x0) {
          if (ch_1 == '\b') {
            pArr16_9 = *(uint8_t (**)[16])(param_1 + 8);
            lVal_6 = *(int64_t *)*pArr16_9;
            if (lVal_6 != 0) {
              uVal_7 = *(int64_t *)pArr16_9[1] - lVal_6;
              if (0xfff < uVal_7) {
                if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8)))
                goto LAB_1800a03bc;
                uVal_7 = uVal_7 + 0x27;
                lVal_6 = *(int64_t *)(lVal_6 + -8);
              }
              thunk_FUN_180695dd0(lVal_6,uVal_7);
              *pArr16_9 = ZEXT816(0);
              *(uint64_t *)pArr16_9[1] = 0;
              pArr16_9 = *(uint8_t (**)[16])(param_1 + 8);
            }
            thunk_FUN_180695dd0(pArr16_9,0x28);
            *(uint64_t *)(param_1 + 8) = 0;
          }
          else if (ch_1 == '\x03') {
            pLong_4 = *(int64_t **)(param_1 + 8);
            uVal_7 = pLong_4[3];
            if (0xf < uVal_7) {
              lVal_6 = *pLong_4;
              uVal_10 = uVal_7 + 1;
              if (0xfff < uVal_10) {
                if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8)))
                goto LAB_1800a03bc;
                uVal_10 = uVal_7 + 0x28;
                lVal_6 = *(int64_t *)(lVal_6 + -8);
              }
              thunk_FUN_180695dd0(lVal_6,uVal_10);
            }
            pLong_4[2] = 0;
            pLong_4[3] = 0xf;
            *(uint8_t *)pLong_4 = 0;
            thunk_FUN_180695dd0(*(uint64_t *)(param_1 + 8),0x20);
            *(uint64_t *)(param_1 + 8) = 0;
            *param_1 = '\0';
            return param_2;
          }
          *param_1 = '\0';
          return param_2;
        }
        func_0x180001060(local_60,"iterator out of range");
        func_0x180083e30(local_d8,0xcd,local_60,param_1);
        func_0x18067a120(local_d8,&DAT_180768740);
      }
      else {
        local_68 = func_0x1800833d0();
        func_0x180083260(local_60,"cannot use erase() with ",&local_68);
        func_0x180082f00(local_a0,0x133,local_60,param_1);
        func_0x18067a120(local_a0,&DAT_180768700);
      }
      goto LAB_1800a03bc;
    }
    fnPtr_5 = (char *)func_0x1800a0c60(*(uint64_t *)(param_1 + 8),param_3[1]);
    param_2[1] = fnPtr_5;
  }
  return param_2;
}

// Unwind@1800a03c0
void Unwind_1800a03c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd8);
  return;
}

// Unwind@1800a0400
void Unwind_1800a0400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd8);
  return;
}

// Unwind@1800a0440
void Unwind_1800a0440(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a0460
void Unwind_1800a0460(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a0480
void Unwind_1800a0480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd8);
  return;
}

// func_0x1800a04c0
uint8_t (*func_0x1800a04c0(uint8_t (*param_1)[16],int64_t *param_2))[16]
{
  int64_t **ptr2_Long_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t *pLong_6;
  int64_t lVal_7;
  
  *param_1 = ZEXT816(0);
  lVal_4 = func_0x180672de0(0x50);
  *(int64_t *)lVal_4 = lVal_4;
  *(int64_t *)(lVal_4 + 8) = lVal_4;
  *(int64_t *)(lVal_4 + 0x10) = lVal_4;
  *(uint16_t *)(lVal_4 + 0x18) = 0x101;
  *(int64_t *)*param_1 = lVal_4;
  uVal_5 = func_0x1800a05f0(param_1,*(uint64_t *)(*param_2 + 8),lVal_4);
  *(uint64_t *)(*(int64_t *)*param_1 + 8) = uVal_5;
  *(int64_t *)(*param_1 + 8) = param_2[1];
  ptr2_Long_1 = *(int64_t ***)*param_1;
  pLong_2 = ptr2_Long_1[1];
  if (*(char *)((int64_t)ptr2_Long_1[1] + 0x19) == '\0') {
    do {
      pLong_6 = pLong_2;
      pLong_2 = (int64_t *)*pLong_6;
    } while (*(char *)((int64_t)pLong_2 + 0x19) == '\0');
    *ptr2_Long_1 = pLong_6;
    lVal_4 = *(int64_t *)*param_1;
    lVal_3 = *(int64_t *)(lVal_4 + 8);
    do {
      lVal_7 = lVal_3;
      lVal_3 = *(int64_t *)(lVal_7 + 0x10);
    } while (*(char *)(*(int64_t *)(lVal_7 + 0x10) + 0x19) == '\0');
  }
  else {
    *ptr2_Long_1 = (int64_t *)ptr2_Long_1;
    lVal_4 = *(int64_t *)*param_1;
    lVal_7 = lVal_4;
  }
  *(int64_t *)(lVal_4 + 0x10) = lVal_7;
  return param_1;
}

// Unwind@1800a0580
void Unwind_1800a0580(uint64_t param_1,int64_t param_2)
{
  func_0x1800a05b0(param_2 + 0x28);
  return;
}

// func_0x1800a05b0
void func_0x1800a05b0(uint64_t *param_1)
{
  int64_t *pLong_1;
  
  pLong_1 = (int64_t *)param_1[1];
  if (pLong_1 != (int64_t *)0x0) {
    func_0x180085870(pLong_1,*param_1,*(uint64_t *)(*pLong_1 + 8));
    thunk_FUN_180695dd0(*pLong_1,0x50);
    return;
  }
  return;
}

// func_0x1800a05f0
uint64_t * func_0x1800a05f0(int64_t *param_1,uint64_t *param_2,uint64_t param_3)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  
  pU64_1 = (uint64_t *)*param_1;
  if (*(char *)((int64_t)param_2 + 0x19) == '\0') {
    pU64_1 = (uint64_t *)func_0x1800a06a0(param_1,pU64_1,param_2 + 4);
    pU64_1[1] = param_3;
    *(uint8_t *)(pU64_1 + 3) = *(uint8_t *)(param_2 + 3);
    uVal_2 = func_0x1800a05f0(param_1,*param_2);
    *pU64_1 = uVal_2;
    uVal_2 = func_0x1800a05f0(param_1,param_2[2]);
    pU64_1[2] = uVal_2;
  }
  return pU64_1;
}

// Unwind@1800a0670
void Unwind_1800a0670(uint64_t param_1,int64_t param_2)
{
  func_0x180085870(*(uint64_t *)(param_2 + 0x20),*(uint64_t *)(param_2 + 0x20),
                *(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x1800a06a0
void func_0x1800a06a0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
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
  
  pU64_6 = (uint64_t *)func_0x180672de0(0x50);
  *(uint8_t (*)[16])(pU64_6 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 4) = ZEXT816(0);
  uVal_1 = param_3[2];
  pU64_9 = param_3;
  if (0xf < (uint64_t)param_3[3]) {
    pU64_9 = (uint64_t *)*param_3;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      pU64_6[6] = uVal_1;
      pU64_6[7] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_9 + 4);
      uVal_4 = *(uint32_t *)(pU64_9 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_9 + 0xc);
      *(uint32_t *)(pU64_6 + 4) = *(uint32_t *)pU64_9;
      *(uint32_t *)((int64_t)pU64_6 + 0x24) = uVal_3;
      *(uint32_t *)(pU64_6 + 5) = uVal_4;
      *(uint32_t *)((int64_t)pU64_6 + 0x2c) = uVal_5;
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
      func_0x1806aa960(uVal_7,pU64_9,uVal_1 + 1);
    }
    func_0x18009ff70(pU64_6 + 8,param_3 + 4);
    *pU64_6 = param_2;
    pU64_6[1] = param_2;
    pU64_6[2] = param_2;
    *(uint16_t *)(pU64_6 + 3) = 0;
    return;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@1800a07e0
void Unwind_1800a07e0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    thunk_FUN_180695dd0(*(int64_t *)(param_2 + 0x38),0x50);
  }
  return;
}

// Unwind@1800a0820
void Unwind_1800a0820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x28));
  *(uint64_t *)(param_2 + 0x38) = *(uint64_t *)(param_2 + 0x30);
  return;
}

// func_0x1800a0860
void func_0x1800a0860(uint64_t *param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3c != 0) {
      func_0x18007c0d0();
LAB_1800a0943:
      func_0x18007ba90();
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
    lVal_4 = param_2 * 0x10;
    if (param_2 < 0x100) {
      uVal_3 = func_0x180672de0(lVal_4);
    }
    else {
      if (0xffffffffffffffd < param_2) goto LAB_1800a0943;
      lVal_2 = func_0x180672de0(lVal_4 + 0x27);
      uVal_3 = lVal_2 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_3 - 8) = lVal_2;
    }
    *param_1 = uVal_3;
    param_1[1] = uVal_3;
    param_1[2] = lVal_4 + uVal_3;
    lVal_4 = *param_4;
    for (lVal_2 = *param_3; lVal_2 != lVal_4; lVal_2 = lVal_2 + 0x10) {
      func_0x18009ff70(uVal_3,lVal_2);
      uVal_3 = uVal_3 + 0x10;
    }
    param_1[1] = uVal_3;
  }
  return;
}

// Unwind@1800a0950
void Unwind_1800a0950(uint64_t param_1,int64_t param_2)
{
  func_0x1800854b0(param_2 + 0x20);
  func_0x1800a0990(param_2 + 0x38);
  return;
}

// func_0x1800a0990
void func_0x1800a0990(uint8_t (**param_1)[16],uint64_t param_2,uint64_t param_3, uint64_t param_4)
{
  uint8_t (*pArr16_1)[16];
  uint64_t uVal_2;
  uint8_t *pU64_3;
  uint8_t *pU64_4;
  uint64_t uVal_5;
  
  uVal_5 = 0xfffffffffffffffe;
  pArr16_1 = *param_1;
  if ((pArr16_1 != (uint8_t (*)[16])0x0) &&
     (pU64_3 = *(uint8_t **)*pArr16_1, pU64_3 != (uint8_t *)0x0)) {
    pU64_4 = *(uint8_t **)(*pArr16_1 + 8);
    if (pU64_3 != pU64_4) {
      do {
        func_0x180084c70(pU64_3 + 8,*pU64_3,param_3,param_4,uVal_5);
        pU64_3 = pU64_3 + 0x10;
      } while (pU64_3 != pU64_4);
      pU64_3 = *(uint8_t **)*pArr16_1;
    }
    uVal_2 = *(int64_t *)pArr16_1[1] - (int64_t)pU64_3;
    pU64_4 = pU64_3;
    if (0xfff < uVal_2) {
      pU64_4 = *(uint8_t **)(pU64_3 + -8);
      if ((uint8_t *)0x1f < pU64_3 + (-8 - (int64_t)pU64_4)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = uVal_2 + 0x27;
    }
    thunk_FUN_180695dd0(pU64_4,uVal_2);
    *pArr16_1 = ZEXT816(0);
    *(uint64_t *)pArr16_1[1] = 0;
  }
  return;
}

// Unwind@1800a0a30
void Unwind_1800a0a30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a0a50
uint8_t (*func_0x1800a0a50(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  
  uVal_10 = 0xfffffffffffffffe;
  pArr16_6 = (uint8_t (*)[16])func_0x180672de0(0x20);
  *pArr16_6 = ZEXT816(0);
  pArr16_6[1] = ZEXT816(0);
  uVal_1 = param_1[2];
  if (0xf < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      *(uint64_t *)pArr16_6[1] = uVal_1;
      *(uint64_t *)(pArr16_6[1] + 8) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)param_1 + 4);
      uVal_4 = *(uint32_t *)(param_1 + 1);
      uVal_5 = *(uint32_t *)((int64_t)param_1 + 0xc);
      *(uint32_t *)*pArr16_6 = *(uint32_t *)param_1;
      *(uint32_t *)(*pArr16_6 + 4) = uVal_3;
      *(uint32_t *)(*pArr16_6 + 8) = uVal_4;
      *(uint32_t *)(*pArr16_6 + 0xc) = uVal_5;
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
      *(uint64_t *)*pArr16_6 = uVal_7;
      *(uint64_t *)pArr16_6[1] = uVal_1;
      *(uint64_t *)(pArr16_6[1] + 8) = uVal_9;
      func_0x1806aa960(uVal_7,param_1,uVal_1 + 1,param_4,pArr16_6,uVal_10);
    }
    return pArr16_6;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_6 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_6;
}

// Unwind@1800a0b30
void Unwind_1800a0b30(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x20),0x20);
  return;
}

// func_0x1800a0b60
uint8_t (*func_0x1800a0b60(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4))[16]
{
  func_ptr_t fnPtr_1;
  uint8_t (*pArr16_2)[16];
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  
  uVal_6 = 0xfffffffffffffffe;
  pArr16_2 = (uint8_t (*)[16])func_0x180672de0(0x28);
  *pArr16_2 = ZEXT816(0);
  *(uint64_t *)pArr16_2[1] = 0;
  uVal_5 = param_1[1] - *param_1;
  if (uVal_5 != 0) {
    if ((int64_t)uVal_5 < 0) {
      func_0x18007c0d0();
      fnPtr_1 = (func_ptr_t )swi(3);
      pArr16_2 = (uint8_t (*)[16])(*fnPtr_1)();
      return pArr16_2;
    }
    if (uVal_5 < 0x1000) {
      uVal_4 = func_0x180672de0(uVal_5);
    }
    else {
      lVal_3 = func_0x180672de0(uVal_5 + 0x27);
      uVal_4 = lVal_3 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_4 - 8) = lVal_3;
    }
    *(uint64_t *)*pArr16_2 = uVal_4;
    *(uint64_t *)pArr16_2[1] = uVal_5 + uVal_4;
    lVal_3 = param_1[1] - *param_1;
    func_0x1806aa960(uVal_4,*param_1,lVal_3,param_4,pArr16_2,uVal_6);
    *(uint64_t *)(*pArr16_2 + 8) = lVal_3 + uVal_4;
  }
  pArr16_2[2][0] = *(uint8_t *)(param_1 + 4);
  *(int64_t *)(pArr16_2[1] + 8) = param_1[3];
  return pArr16_2;
}

// Unwind@1800a0c30
void Unwind_1800a0c30(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x20),0x28);
  return;
}

// func_0x1800a0c60
int64_t * func_0x1800a0c60(uint64_t param_1,int64_t *param_2)
{
  char ch_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  int64_t *pLong_8;
  
  pLong_4 = (int64_t *)param_2[2];
  if (*(char *)((int64_t)(int64_t *)param_2[2] + 0x19) == '\0') {
    do {
      pLong_8 = pLong_4;
      pLong_4 = (int64_t *)*pLong_8;
    } while (*(char *)((int64_t)(int64_t *)*pLong_8 + 0x19) == '\0');
  }
  else {
    ch_1 = *(char *)((int64_t)(int64_t *)param_2[1] + 0x19);
    pLong_4 = (int64_t *)param_2[1];
    while ((pLong_8 = pLong_4, ch_1 == '\0' && (param_2 == (int64_t *)pLong_8[2]))) {
      ch_1 = *(char *)((int64_t)(int64_t *)pLong_8[1] + 0x19);
      pLong_4 = (int64_t *)pLong_8[1];
      param_2 = pLong_8;
    }
  }
  lVal_5 = func_0x1800a0d60();
  func_0x180084c70(lVal_5 + 0x48,*(uint8_t *)(lVal_5 + 0x40));
  uVal_2 = *(uint64_t *)(lVal_5 + 0x38);
  if (0xf < uVal_2) {
    lVal_3 = *(int64_t *)(lVal_5 + 0x20);
    uVal_6 = uVal_2 + 1;
    lVal_7 = lVal_3;
    if (0xfff < uVal_6) {
      lVal_7 = *(int64_t *)(lVal_3 + -8);
      if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_7)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_2 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
  }
  *(uint64_t *)(lVal_5 + 0x30) = 0;
  *(uint64_t *)(lVal_5 + 0x38) = 0xf;
  *(uint8_t *)(lVal_5 + 0x20) = 0;
  thunk_FUN_180695dd0(lVal_5,0x50);
  return pLong_8;
}

// Unwind@1800a0d40
void Unwind_1800a0d40(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a0d60
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
void func_0x1800a0d60(int64_t *param_1,int64_t **param_2)
{
  char ch_1;
  uint8_t uVal_2;
  int64_t *pLong_3;
  int64_t **ptr2_Long_4;
  int64_t *pLong_5;
  int64_t **ptr2_Long_6;
  int64_t **ptr2_Long_7;
  int64_t lVal_8;
  int64_t **ptr2_Long_9;
  int64_t **ptr2_Long_10;
  
  ptr2_Long_6 = (int64_t **)param_2[2];
  ptr2_Long_9 = ptr2_Long_6;
  if (*(char *)((int64_t)ptr2_Long_6 + 0x19) == '\0') {
    do {
      ptr2_Long_10 = ptr2_Long_9;
      ptr2_Long_9 = (int64_t **)*ptr2_Long_10;
    } while (*(char *)((int64_t)*ptr2_Long_10 + 0x19) == '\0');
    if ((*(char *)((int64_t)*param_2 + 0x19) != '\0') ||
       (ptr2_Long_6 = (int64_t **)ptr2_Long_10[2], ptr2_Long_10 == param_2)) goto LAB_1800a0d9b;
    (*param_2)[1] = (int64_t)ptr2_Long_10;
    *ptr2_Long_10 = *param_2;
    ptr2_Long_9 = ptr2_Long_10;
    if (ptr2_Long_10 != (int64_t **)param_2[2]) {
      ptr2_Long_9 = (int64_t **)ptr2_Long_10[1];
      if (*(char *)((int64_t)ptr2_Long_6 + 0x19) == '\0') {
        ptr2_Long_6[1] = (int64_t *)ptr2_Long_9;
      }
      *ptr2_Long_9 = (int64_t *)ptr2_Long_6;
      pLong_5 = param_2[2];
      ptr2_Long_10[2] = pLong_5;
      pLong_5[1] = (int64_t)ptr2_Long_10;
    }
    if (*(int64_t ***)(*param_1 + 8) == param_2) {
      *(int64_t ***)(*param_1 + 8) = ptr2_Long_10;
    }
    else {
      pLong_5 = param_2[1];
      if ((int64_t **)*pLong_5 == param_2) {
        *pLong_5 = (int64_t)ptr2_Long_10;
      }
      else {
        pLong_5[2] = (int64_t)ptr2_Long_10;
      }
    }
    ptr2_Long_10[1] = param_2[1];
    uVal_2 = *(uint8_t *)(ptr2_Long_10 + 3);
    *(uint8_t *)(ptr2_Long_10 + 3) = *(uint8_t *)(param_2 + 3);
    *(uint8_t *)(param_2 + 3) = uVal_2;
    ch_1 = *(char *)(param_2 + 3);
  }
  else {
    if (*(char *)((int64_t)*param_2 + 0x19) == '\0') {
      ptr2_Long_6 = (int64_t **)*param_2;
    }
LAB_1800a0d9b:
    ptr2_Long_9 = (int64_t **)param_2[1];
    if (*(char *)((int64_t)ptr2_Long_6 + 0x19) == '\0') {
      ptr2_Long_6[1] = (int64_t *)ptr2_Long_9;
      lVal_8 = *param_1;
      if (*(int64_t ***)(lVal_8 + 8) != param_2) goto LAB_1800a0dae;
LAB_1800a0de5:
      *(int64_t ***)(lVal_8 + 8) = ptr2_Long_6;
      ptr2_Long_7 = (int64_t **)*param_1;
      ptr2_Long_10 = (int64_t **)*ptr2_Long_7;
joined_r0x0001800a0dc1:
      if (ptr2_Long_10 == param_2) goto LAB_1800a0df1;
LAB_1800a0dc3:
      ptr2_Long_10 = (int64_t **)ptr2_Long_7[2];
    }
    else {
      lVal_8 = *param_1;
      if (*(int64_t ***)(lVal_8 + 8) == param_2) goto LAB_1800a0de5;
LAB_1800a0dae:
      if ((int64_t **)*ptr2_Long_9 != param_2) {
        ptr2_Long_9[2] = (int64_t *)ptr2_Long_6;
        ptr2_Long_7 = (int64_t **)*param_1;
        ptr2_Long_10 = (int64_t **)*ptr2_Long_7;
        goto joined_r0x0001800a0dc1;
      }
      *ptr2_Long_9 = (int64_t *)ptr2_Long_6;
      ptr2_Long_7 = (int64_t **)*param_1;
      if ((int64_t **)*ptr2_Long_7 != param_2) goto LAB_1800a0dc3;
LAB_1800a0df1:
      ch_1 = *(char *)((int64_t)ptr2_Long_6 + 0x19);
      ptr2_Long_10 = ptr2_Long_9;
      ptr2_Long_4 = ptr2_Long_6;
      while (ch_1 == '\0') {
        ch_1 = *(char *)((int64_t)*ptr2_Long_4 + 0x19);
        ptr2_Long_10 = ptr2_Long_4;
        ptr2_Long_4 = (int64_t **)*ptr2_Long_4;
      }
      *ptr2_Long_7 = (int64_t *)ptr2_Long_10;
      ptr2_Long_7 = (int64_t **)*param_1;
      ptr2_Long_10 = (int64_t **)ptr2_Long_7[2];
    }
    if (ptr2_Long_10 == param_2) {
      ch_1 = *(char *)((int64_t)ptr2_Long_6 + 0x19);
      ptr2_Long_10 = ptr2_Long_9;
      ptr2_Long_4 = ptr2_Long_6;
      while (ch_1 == '\0') {
        ch_1 = *(char *)((int64_t)ptr2_Long_4[2] + 0x19);
        ptr2_Long_10 = ptr2_Long_4;
        ptr2_Long_4 = (int64_t **)ptr2_Long_4[2];
      }
      ptr2_Long_7[2] = (int64_t *)ptr2_Long_10;
      ch_1 = *(char *)(param_2 + 3);
    }
    else {
      ch_1 = *(char *)(param_2 + 3);
    }
  }
  if (ch_1 != '\x01') {
    lVal_8 = param_1[1];
joined_r0x0001800a11d8:
    if (lVal_8 != 0) {
      param_1[1] = lVal_8 + -1;
    }
    return;
  }
LAB_1800a0f09:
  if ((ptr2_Long_6 == *(int64_t ***)(*param_1 + 8)) || (*(char *)(ptr2_Long_6 + 3) != '\x01'))
  goto LAB_1800a11cd;
  ptr2_Long_10 = (int64_t **)*ptr2_Long_9;
  if (ptr2_Long_6 == ptr2_Long_10) {
    ptr2_Long_10 = (int64_t **)ptr2_Long_9[2];
    if (*(char *)(ptr2_Long_10 + 3) == '\0') {
      *(uint8_t *)(ptr2_Long_10 + 3) = 1;
      *(uint8_t *)(ptr2_Long_9 + 3) = 0;
      ptr2_Long_10 = (int64_t **)ptr2_Long_9[2];
      pLong_5 = *ptr2_Long_10;
      ptr2_Long_9[2] = pLong_5;
      if (*(char *)((int64_t)pLong_5 + 0x19) == '\0') {
        pLong_5[1] = (int64_t)ptr2_Long_9;
      }
      ptr2_Long_7 = (int64_t **)ptr2_Long_9[1];
      ptr2_Long_10[1] = (int64_t *)ptr2_Long_7;
      if (ptr2_Long_9 == *(int64_t ***)(*param_1 + 8)) {
        *(int64_t ***)(*param_1 + 8) = ptr2_Long_10;
      }
      else if (ptr2_Long_9 == (int64_t **)*ptr2_Long_7) {
        *ptr2_Long_7 = (int64_t *)ptr2_Long_10;
      }
      else {
        ptr2_Long_7[2] = (int64_t *)ptr2_Long_10;
      }
      *ptr2_Long_10 = (int64_t *)ptr2_Long_9;
      ptr2_Long_9[1] = (int64_t *)ptr2_Long_10;
      ptr2_Long_10 = (int64_t **)ptr2_Long_9[2];
      ch_1 = *(char *)((int64_t)ptr2_Long_10 + 0x19);
    }
    else {
      ch_1 = *(char *)((int64_t)ptr2_Long_10 + 0x19);
    }
    if (ch_1 == '\0') {
      if (*(char *)(*ptr2_Long_10 + 3) == '\x01') {
        if (*(char *)(ptr2_Long_10[2] + 3) == '\x01') goto LAB_1800a0f00;
      }
      else if (*(char *)(ptr2_Long_10[2] + 3) == '\x01') {
        *(uint8_t *)(*ptr2_Long_10 + 3) = 1;
        *(uint8_t *)(ptr2_Long_10 + 3) = 0;
        pLong_5 = *ptr2_Long_10;
        pLong_3 = (int64_t *)pLong_5[2];
        *ptr2_Long_10 = pLong_3;
        if (*(char *)((int64_t)pLong_3 + 0x19) == '\0') {
          pLong_3[1] = (int64_t)ptr2_Long_10;
        }
        ptr2_Long_7 = (int64_t **)ptr2_Long_10[1];
        pLong_5[1] = (int64_t)ptr2_Long_7;
        if (ptr2_Long_10 == *(int64_t ***)(*param_1 + 8)) {
          *(int64_t **)(*param_1 + 8) = pLong_5;
        }
        else if (ptr2_Long_10 == (int64_t **)ptr2_Long_7[2]) {
          ptr2_Long_7[2] = pLong_5;
        }
        else {
          *ptr2_Long_7 = pLong_5;
        }
        pLong_5[2] = (int64_t)ptr2_Long_10;
        ptr2_Long_10[1] = pLong_5;
        ptr2_Long_10 = (int64_t **)ptr2_Long_9[2];
      }
      *(uint8_t *)(ptr2_Long_10 + 3) = *(uint8_t *)(ptr2_Long_9 + 3);
      *(uint8_t *)(ptr2_Long_9 + 3) = 1;
      *(uint8_t *)(ptr2_Long_10[2] + 3) = 1;
      ptr2_Long_10 = (int64_t **)ptr2_Long_9[2];
      pLong_5 = *ptr2_Long_10;
      ptr2_Long_9[2] = pLong_5;
      if (*(char *)((int64_t)pLong_5 + 0x19) == '\0') {
        pLong_5[1] = (int64_t)ptr2_Long_9;
      }
      ptr2_Long_7 = (int64_t **)ptr2_Long_9[1];
      ptr2_Long_10[1] = (int64_t *)ptr2_Long_7;
      if (ptr2_Long_9 == *(int64_t ***)(*param_1 + 8)) {
        *(int64_t ***)(*param_1 + 8) = ptr2_Long_10;
      }
      else if (ptr2_Long_9 == (int64_t **)*ptr2_Long_7) {
        *ptr2_Long_7 = (int64_t *)ptr2_Long_10;
      }
      else {
        ptr2_Long_7[2] = (int64_t *)ptr2_Long_10;
      }
      *ptr2_Long_10 = (int64_t *)ptr2_Long_9;
      goto LAB_1800a11c6;
    }
  }
  else {
    if (*(char *)(ptr2_Long_10 + 3) == '\0') {
      *(uint8_t *)(ptr2_Long_10 + 3) = 1;
      *(uint8_t *)(ptr2_Long_9 + 3) = 0;
      pLong_5 = *ptr2_Long_9;
      pLong_3 = (int64_t *)pLong_5[2];
      *ptr2_Long_9 = pLong_3;
      if (*(char *)((int64_t)pLong_3 + 0x19) == '\0') {
        pLong_3[1] = (int64_t)ptr2_Long_9;
      }
      ptr2_Long_10 = (int64_t **)ptr2_Long_9[1];
      pLong_5[1] = (int64_t)ptr2_Long_10;
      if (ptr2_Long_9 == *(int64_t ***)(*param_1 + 8)) {
        *(int64_t **)(*param_1 + 8) = pLong_5;
      }
      else if (ptr2_Long_9 == (int64_t **)ptr2_Long_10[2]) {
        ptr2_Long_10[2] = pLong_5;
      }
      else {
        *ptr2_Long_10 = pLong_5;
      }
      pLong_5[2] = (int64_t)ptr2_Long_9;
      ptr2_Long_9[1] = pLong_5;
      ptr2_Long_10 = (int64_t **)*ptr2_Long_9;
      ch_1 = *(char *)((int64_t)ptr2_Long_10 + 0x19);
    }
    else {
      ch_1 = *(char *)((int64_t)ptr2_Long_10 + 0x19);
    }
    if (ch_1 == '\0') {
      if (*(char *)(ptr2_Long_10[2] + 3) == '\x01') {
        if (*(char *)(*ptr2_Long_10 + 3) == '\x01') {
LAB_1800a0f00:
          *(uint8_t *)(ptr2_Long_10 + 3) = 0;
          goto LAB_1800a0f05;
        }
      }
      else if (*(char *)(*ptr2_Long_10 + 3) == '\x01') {
        *(uint8_t *)(ptr2_Long_10[2] + 3) = 1;
        *(uint8_t *)(ptr2_Long_10 + 3) = 0;
        ptr2_Long_7 = (int64_t **)ptr2_Long_10[2];
        pLong_5 = *ptr2_Long_7;
        ptr2_Long_10[2] = pLong_5;
        if (*(char *)((int64_t)pLong_5 + 0x19) == '\0') {
          pLong_5[1] = (int64_t)ptr2_Long_10;
        }
        ptr2_Long_4 = (int64_t **)ptr2_Long_10[1];
        ptr2_Long_7[1] = (int64_t *)ptr2_Long_4;
        if (ptr2_Long_10 == *(int64_t ***)(*param_1 + 8)) {
          *(int64_t ***)(*param_1 + 8) = ptr2_Long_7;
        }
        else if (ptr2_Long_10 == (int64_t **)*ptr2_Long_4) {
          *ptr2_Long_4 = (int64_t *)ptr2_Long_7;
        }
        else {
          ptr2_Long_4[2] = (int64_t *)ptr2_Long_7;
        }
        *ptr2_Long_7 = (int64_t *)ptr2_Long_10;
        ptr2_Long_10[1] = (int64_t *)ptr2_Long_7;
        ptr2_Long_10 = (int64_t **)*ptr2_Long_9;
      }
      *(uint8_t *)(ptr2_Long_10 + 3) = *(uint8_t *)(ptr2_Long_9 + 3);
      *(uint8_t *)(ptr2_Long_9 + 3) = 1;
      *(uint8_t *)(*ptr2_Long_10 + 3) = 1;
      ptr2_Long_10 = (int64_t **)*ptr2_Long_9;
      pLong_5 = ptr2_Long_10[2];
      *ptr2_Long_9 = pLong_5;
      if (*(char *)((int64_t)pLong_5 + 0x19) == '\0') {
        pLong_5[1] = (int64_t)ptr2_Long_9;
      }
      ptr2_Long_7 = (int64_t **)ptr2_Long_9[1];
      ptr2_Long_10[1] = (int64_t *)ptr2_Long_7;
      if (ptr2_Long_9 == *(int64_t ***)(*param_1 + 8)) {
        *(int64_t ***)(*param_1 + 8) = ptr2_Long_10;
      }
      else if (ptr2_Long_9 == (int64_t **)ptr2_Long_7[2]) {
        ptr2_Long_7[2] = (int64_t *)ptr2_Long_10;
      }
      else {
        *ptr2_Long_7 = (int64_t *)ptr2_Long_10;
      }
      ptr2_Long_10[2] = (int64_t *)ptr2_Long_9;
LAB_1800a11c6:
      ptr2_Long_9[1] = (int64_t *)ptr2_Long_10;
LAB_1800a11cd:
      *(uint8_t *)(ptr2_Long_6 + 3) = 1;
      lVal_8 = param_1[1];
      goto joined_r0x0001800a11d8;
    }
  }
LAB_1800a0f05:
  ptr2_Long_6 = ptr2_Long_9;
  ptr2_Long_9 = (int64_t **)ptr2_Long_9[1];
  goto LAB_1800a0f09;
}

// func_0x1800a11f0
int64_t * func_0x1800a11f0(int64_t *param_1,int64_t *param_2,uint64_t *param_3)
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
  uint uVal_15;
  uint64_t uVal_16;
  uint8_t local_71;
  uint64_t local_70;
  uint64_t *local_68;
  int64_t local_60;
  uint local_58;
  uint8_t local_50 [8];
  uint64_t local_48;
  
  lVal_2 = *param_1;
  lVal_10 = *(int64_t *)(lVal_2 + 8);
  uVal_15 = 0;
  lVal_11 = lVal_2;
  if (*(char *)(lVal_10 + 0x19) == '\0') {
    pU64_14 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_14 = (uint64_t *)*param_3;
    }
    uVal_4 = param_3[2];
    lVal_3 = lVal_10;
    local_70 = param_2;
    do {
      lVal_10 = lVal_3;
      if (*(uint64_t *)(lVal_10 + 0x38) < 0x10) {
        pVoid_13 = (void *)(lVal_10 + 0x20);
      }
      else {
        pVoid_13 = *(void **)(lVal_10 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_10 + 0x30);
      uVal_16 = uVal_5;
      if (uVal_4 < uVal_5) {
        uVal_16 = uVal_4;
      }
      iVal_9 = memcmp(pVoid_13,pU64_14,uVal_16);
      bFlag_7 = uVal_5 < uVal_4;
      if (iVal_9 != 0) {
        bFlag_7 = iVal_9 < 0;
      }
      if (bFlag_7 == false) {
        lVal_11 = lVal_10;
      }
      lVal_3 = *(int64_t *)(lVal_10 + (uint64_t)bFlag_7 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    uVal_15 = (uint)(bFlag_7 ^ 1);
    ch_1 = *(char *)(lVal_11 + 0x19);
    param_2 = local_70;
  }
  else {
    ch_1 = *(char *)(lVal_2 + 0x19);
  }
  if (ch_1 == '\0') {
    uVal_4 = (uint64_t)local_70 >> 0x20;
    local_70 = (int64_t *)CONCAT44((int)uVal_4,uVal_15);
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
    uVal_16 = uVal_5;
    if (uVal_4 < uVal_5) {
      uVal_16 = uVal_4;
    }
    iVal_9 = memcmp(pU64_14,pVoid_13,uVal_16);
    bFlag_7 = uVal_4 <= uVal_5;
    if (iVal_9 != 0) {
      bFlag_7 = -1 < iVal_9;
    }
    uVal_15 = (uint)local_70;
    if (bFlag_7) {
      uVal_8 = 0;
      goto LAB_1800a136c;
    }
  }
  if (param_1[1] == 0x333333333333333) {
    func_0x1800a17e0();
    fnPtr_6 = (func_ptr_t )swi(3);
    pLong_12 = (int64_t *)(*fnPtr_6)();
    return pLong_12;
  }
  local_68 = param_3;
  func_0x1800a1390(local_50,param_1,lVal_2,&DAT_1806b0a10,&local_68,&local_71);
  local_60 = lVal_10;
  local_58 = uVal_15;
  lVal_11 = func_0x1800a1550(param_1,&local_60,local_48);
  uVal_8 = 1;
LAB_1800a136c:
  *param_2 = lVal_11;
  *(uint8_t *)(param_2 + 1) = uVal_8;
  return param_2;
}

// func_0x1800a1390
void func_0x1800a1390(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, int64_t *param_5)
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
  pU64_6 = (uint64_t *)func_0x180672de0(0x50);
  param_1[1] = pU64_6;
  pU64_9 = (uint64_t *)*param_5;
  *(uint8_t (*)[16])(pU64_6 + 6) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 4) = ZEXT816(0);
  uVal_1 = pU64_9[2];
  if (0xf < (uint64_t)pU64_9[3]) {
    pU64_9 = (uint64_t *)*pU64_9;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      pU64_6[6] = uVal_1;
      pU64_6[7] = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_9 + 4);
      uVal_4 = *(uint32_t *)(pU64_9 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_9 + 0xc);
      *(uint32_t *)(pU64_6 + 4) = *(uint32_t *)pU64_9;
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
      func_0x1806aa960(uVal_7,pU64_9,uVal_1 + 1);
      pU64_9 = (uint64_t *)param_1[1];
    }
    *(uint8_t *)(pU64_6 + 8) = 0;
    pU64_6[9] = 0;
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

// Unwind@1800a14d0
void Unwind_1800a14d0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// Unwind@1800a1510
void Unwind_1800a1510(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// func_0x1800a1550
void func_0x1800a1550(int64_t **param_1,int64_t **param_2,int64_t **param_3)
{
  char ch_1;
  int64_t **ptr2_Long_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  int64_t **ptr2_Long_5;
  int64_t **ptr2_Long_6;
  int64_t *pLong_7;
  
  param_1[1] = (int64_t *)((int64_t)param_1[1] + 1);
  ptr2_Long_2 = (int64_t **)*param_1;
  ptr2_Long_4 = (int64_t **)*param_2;
  param_3[1] = (int64_t *)ptr2_Long_4;
  if (ptr2_Long_4 == ptr2_Long_2) {
    *ptr2_Long_2 = (int64_t *)param_3;
    ptr2_Long_2[1] = (int64_t *)param_3;
    ptr2_Long_2[2] = (int64_t *)param_3;
    *(uint8_t *)(param_3 + 3) = 1;
    return;
  }
  ptr2_Long_6 = param_3 + 1;
  if (*(int *)(param_2 + 1) == 0) {
    ptr2_Long_4[2] = (int64_t *)param_3;
    if (*param_2 == ptr2_Long_2[2]) {
      ptr2_Long_2[2] = (int64_t *)param_3;
      ptr2_Long_4 = (int64_t **)*ptr2_Long_6;
      ch_1 = *(char *)(ptr2_Long_4 + 3);
      goto joined_r0x0001800a15cc;
    }
  }
  else {
    *ptr2_Long_4 = (int64_t *)param_3;
    if (*param_2 == *ptr2_Long_2) {
      *ptr2_Long_2 = (int64_t *)param_3;
      ptr2_Long_4 = (int64_t **)*ptr2_Long_6;
      ch_1 = *(char *)(ptr2_Long_4 + 3);
      goto joined_r0x0001800a15cc;
    }
  }
  ptr2_Long_4 = (int64_t **)*ptr2_Long_6;
  ch_1 = *(char *)(ptr2_Long_4 + 3);
joined_r0x0001800a15cc:
  do {
    if (ch_1 != '\0') {
      *(uint8_t *)(ptr2_Long_2[1] + 3) = 1;
      return;
    }
    ptr2_Long_5 = (int64_t **)ptr2_Long_4[1];
    ptr2_Long_3 = (int64_t **)*ptr2_Long_5;
    if (ptr2_Long_4 == ptr2_Long_3) {
      ptr2_Long_3 = (int64_t **)ptr2_Long_5[2];
      if (*(char *)(ptr2_Long_3 + 3) == '\0') goto LAB_1800a15e0;
      ptr2_Long_6 = (int64_t **)ptr2_Long_4[2];
      if (param_3 == ptr2_Long_6) {
        pLong_7 = *ptr2_Long_6;
        ptr2_Long_4[2] = pLong_7;
        if (*(char *)((int64_t)pLong_7 + 0x19) == '\0') {
          pLong_7[1] = (int64_t)ptr2_Long_4;
          ptr2_Long_5 = (int64_t **)ptr2_Long_4[1];
          ptr2_Long_6[1] = (int64_t *)ptr2_Long_5;
          pLong_7 = *param_1;
          if (ptr2_Long_4 != (int64_t **)pLong_7[1]) goto LAB_1800a16a7;
LAB_1800a175a:
          pLong_7[1] = (int64_t)ptr2_Long_6;
        }
        else {
          ptr2_Long_6[1] = (int64_t *)ptr2_Long_5;
          pLong_7 = *param_1;
          if (ptr2_Long_4 == (int64_t **)pLong_7[1]) goto LAB_1800a175a;
LAB_1800a16a7:
          if (ptr2_Long_4 == (int64_t **)*ptr2_Long_5) {
            *ptr2_Long_5 = (int64_t *)ptr2_Long_6;
          }
          else {
            ptr2_Long_5[2] = (int64_t *)ptr2_Long_6;
          }
        }
        *ptr2_Long_6 = (int64_t *)ptr2_Long_4;
        ptr2_Long_4[1] = (int64_t *)ptr2_Long_6;
        param_3 = ptr2_Long_4;
        ptr2_Long_4 = ptr2_Long_6;
      }
      *(uint8_t *)(ptr2_Long_4 + 3) = 1;
      *(uint8_t *)(param_3[1][1] + 0x18) = 0;
      ptr2_Long_4 = (int64_t **)param_3[1][1];
      ptr2_Long_6 = (int64_t **)*ptr2_Long_4;
      pLong_7 = ptr2_Long_6[2];
      *ptr2_Long_4 = pLong_7;
      if (*(char *)((int64_t)pLong_7 + 0x19) == '\0') {
        pLong_7[1] = (int64_t)ptr2_Long_4;
      }
      ptr2_Long_5 = (int64_t **)ptr2_Long_4[1];
      ptr2_Long_6[1] = (int64_t *)ptr2_Long_5;
      if (ptr2_Long_4 == (int64_t **)(*param_1)[1]) {
        (*param_1)[1] = (int64_t)ptr2_Long_6;
        ptr2_Long_6[2] = (int64_t *)ptr2_Long_4;
      }
      else if (ptr2_Long_4 == (int64_t **)ptr2_Long_5[2]) {
        ptr2_Long_5[2] = (int64_t *)ptr2_Long_6;
        ptr2_Long_6[2] = (int64_t *)ptr2_Long_4;
      }
      else {
        *ptr2_Long_5 = (int64_t *)ptr2_Long_6;
        ptr2_Long_6[2] = (int64_t *)ptr2_Long_4;
      }
LAB_1800a1738:
      ptr2_Long_4[1] = (int64_t *)ptr2_Long_6;
    }
    else {
      if (*(char *)(ptr2_Long_3 + 3) != '\0') {
        ptr2_Long_6 = (int64_t **)*ptr2_Long_4;
        if (param_3 == ptr2_Long_6) {
          pLong_7 = ptr2_Long_6[2];
          *ptr2_Long_4 = pLong_7;
          if (*(char *)((int64_t)pLong_7 + 0x19) == '\0') {
            pLong_7[1] = (int64_t)ptr2_Long_4;
            ptr2_Long_5 = (int64_t **)ptr2_Long_4[1];
            ptr2_Long_6[1] = (int64_t *)ptr2_Long_5;
            pLong_7 = *param_1;
            if (ptr2_Long_4 != (int64_t **)pLong_7[1]) goto LAB_1800a1679;
LAB_1800a16ce:
            pLong_7[1] = (int64_t)ptr2_Long_6;
          }
          else {
            ptr2_Long_6[1] = (int64_t *)ptr2_Long_5;
            pLong_7 = *param_1;
            if (ptr2_Long_4 == (int64_t **)pLong_7[1]) goto LAB_1800a16ce;
LAB_1800a1679:
            if (ptr2_Long_4 == (int64_t **)ptr2_Long_5[2]) {
              ptr2_Long_5[2] = (int64_t *)ptr2_Long_6;
            }
            else {
              *ptr2_Long_5 = (int64_t *)ptr2_Long_6;
            }
          }
          ptr2_Long_6[2] = (int64_t *)ptr2_Long_4;
          ptr2_Long_4[1] = (int64_t *)ptr2_Long_6;
          param_3 = ptr2_Long_4;
          ptr2_Long_4 = ptr2_Long_6;
        }
        *(uint8_t *)(ptr2_Long_4 + 3) = 1;
        *(uint8_t *)(param_3[1][1] + 0x18) = 0;
        ptr2_Long_4 = (int64_t **)param_3[1][1];
        ptr2_Long_6 = (int64_t **)ptr2_Long_4[2];
        pLong_7 = *ptr2_Long_6;
        ptr2_Long_4[2] = pLong_7;
        if (*(char *)((int64_t)pLong_7 + 0x19) == '\0') {
          pLong_7[1] = (int64_t)ptr2_Long_4;
        }
        ptr2_Long_5 = (int64_t **)ptr2_Long_4[1];
        ptr2_Long_6[1] = (int64_t *)ptr2_Long_5;
        if (ptr2_Long_4 == (int64_t **)(*param_1)[1]) {
          (*param_1)[1] = (int64_t)ptr2_Long_6;
        }
        else if (ptr2_Long_4 == (int64_t **)*ptr2_Long_5) {
          *ptr2_Long_5 = (int64_t *)ptr2_Long_6;
        }
        else {
          ptr2_Long_5[2] = (int64_t *)ptr2_Long_6;
        }
        *ptr2_Long_6 = (int64_t *)ptr2_Long_4;
        goto LAB_1800a1738;
      }
LAB_1800a15e0:
      *(uint8_t *)(ptr2_Long_4 + 3) = 1;
      *(uint8_t *)(ptr2_Long_3 + 3) = 1;
      *(uint8_t *)((*ptr2_Long_6)[1] + 0x18) = 0;
      param_3 = (int64_t **)(*ptr2_Long_6)[1];
    }
    ptr2_Long_6 = param_3 + 1;
    ptr2_Long_4 = (int64_t **)param_3[1];
    ch_1 = *(char *)(ptr2_Long_4 + 3);
  } while( true );
}

// func_0x1800a17e0
void func_0x1800a17e0(void)
{
  func_ptr_t fnPtr_1;
  
  func_0x1806744c0("map/set too long");
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800a1800
void func_0x1800a1800(uint64_t *param_1,char *param_2,uint64_t *param_3,uint8_t *param_4)
{
  uint8_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  size_t sz_5;
  uint64_t *pU64_6;
  
  sz_5 = strlen(param_2);
  lVal_2 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_2) < sz_5) {
    func_0x180082950(param_1,sz_5,sz_5,param_2,sz_5);
    uVal_3 = param_3[2];
    uVal_4 = param_3[3];
  }
  else {
    param_1[2] = sz_5 + lVal_2;
    pU64_6 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_6 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_2 + (int64_t)pU64_6,param_2);
    *(uint8_t *)((int64_t)pU64_6 + sz_5 + lVal_2) = 0;
    uVal_3 = param_3[2];
    uVal_4 = param_3[3];
  }
  if (0xf < uVal_4) {
    param_3 = (uint64_t *)*param_3;
  }
  lVal_2 = param_1[2];
  if ((uint64_t)(param_1[3] - lVal_2) < uVal_3) {
    func_0x180082950(param_1,uVal_3,uVal_3,param_3,uVal_3);
  }
  else {
    param_1[2] = lVal_2 + uVal_3;
    pU64_6 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_6 = (uint64_t *)*param_1;
    }
    func_0x1806aa960(lVal_2 + (int64_t)pU64_6,param_3);
    *(uint8_t *)((int64_t)pU64_6 + lVal_2 + uVal_3) = 0;
  }
  uVal_1 = *param_4;
  uVal_3 = param_1[2];
  if (uVal_3 < (uint64_t)param_1[3]) {
    param_1[2] = uVal_3 + 1;
    if (0xf < (uint64_t)param_1[3]) {
      param_1 = (uint64_t *)*param_1;
    }
    *(uint8_t *)((int64_t)param_1 + uVal_3) = uVal_1;
    *(uint8_t *)((int64_t)param_1 + uVal_3 + 1) = 0;
    return;
  }
  func_0x18008c590(param_1,1);
  return;
}

// func_0x1800a1930
uint8_t * func_0x1800a1930(int64_t *param_1,uint8_t *param_2,uint64_t *param_3,char param_4)
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
  local_40[0] = 7;
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
    if (ch_8 != '\0') goto LAB_1800a19f8;
LAB_1800a1b4a:
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
  }
  else {
LAB_1800a19f8:
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
LAB_1800a1b75:
      *param_2 = 1;
    }
    else {
      fnPtr_4 = *(char **)(param_1[2] + -8);
      if (fnPtr_4 == (char *)0x0) goto LAB_1800a1b4a;
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
        goto LAB_1800a1b75;
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
      if ((uVal_1 >> (uVal_13 & 0x1f) & 1) == 0) goto LAB_1800a1b4a;
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

// Unwind@1800a1bb0
void Unwind_1800a1bb0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a1bd0
void Unwind_1800a1bd0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a1bf0
void Unwind_1800a1bf0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a1c10
void Unwind_1800a1c10(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x68);
  return;
}

// func_0x1800a1c40
uint8_t * func_0x1800a1c40(int64_t *param_1,uint8_t *param_2,byte *param_3,char param_4)
{
  uint uVal_1;
  uint64_t uVal_2;
  int64_t *pLong_3;
  char *fnPtr_4;
  func_ptr_t fnPtr_5;
  uint8_t uVal_6;
  char ch_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint8_t *pU64_11;
  uint uVal_12;
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
  uVal_8 = (uint64_t)((uint)uVal_2 & 0x1f);
  uVal_9 = uVal_8 - 1;
  if ((*(uint *)(((uint64_t)(uVal_8 != 0) << 0x3d) +
                 ((int64_t)uVal_2 >> 0x3f & 0xe000000000000000U) + (uVal_2 >> 5) * 4 + param_1[4] +
                 (uVal_9 >> 5) * 4 + -0x2000000000000000) >> ((uint)uVal_9 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
    return param_2;
  }
  local_38 = (uint64_t)*param_3;
  local_40[0] = 4;
  if (param_4 == '\0') {
    local_80[0] = 5;
    local_50 = CONCAT44(local_50._4_4_,(int)((uint64_t)(param_1[2] - param_1[1]) >> 3));
    pLong_3 = (int64_t *)param_1[0x15];
    if (pLong_3 == (int64_t *)0x0) {
      func_0x180674610();
      fnPtr_5 = (func_ptr_t )swi(3);
      pU64_11 = (uint8_t *)(*fnPtr_5)();
      return pU64_11;
    }
    ch_7 = (**(func_ptr_t *)(*pLong_3 + 0x10))(pLong_3,&local_50,local_80,local_40);
    if (ch_7 != '\0') goto LAB_1800a1d06;
LAB_1800a1e58:
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
  }
  else {
LAB_1800a1d06:
    uVal_2 = local_38;
    uVal_6 = local_40[0];
    if (param_1[1] == param_1[2]) {
      local_40[0] = 0;
      local_38 = 0;
      pU64_11 = (uint8_t *)*param_1;
      local_70 = *pU64_11;
      *pU64_11 = uVal_6;
      local_68 = *(uint64_t *)(pU64_11 + 8);
      *(uint64_t *)(pU64_11 + 8) = uVal_2;
      func_0x180084c70(&local_68);
      lVal_10 = *param_1;
LAB_1800a1e83:
      *param_2 = 1;
    }
    else {
      fnPtr_4 = *(char **)(param_1[2] + -8);
      if (fnPtr_4 == (char *)0x0) goto LAB_1800a1e58;
      if (*fnPtr_4 == '\x02') {
        lVal_10 = *(int64_t *)(fnPtr_4 + 8);
        pU64_11 = *(uint8_t **)(lVal_10 + 8);
        if (pU64_11 == *(uint8_t **)(lVal_10 + 0x10)) {
          func_0x180085520(lVal_10,pU64_11,local_40);
        }
        else {
          *pU64_11 = local_40[0];
          *(uint64_t *)(pU64_11 + 8) = local_38;
          local_40[0] = 0;
          local_38 = 0;
          *(int64_t *)(lVal_10 + 8) = *(int64_t *)(lVal_10 + 8) + 0x10;
        }
        lVal_10 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1[2] + -8) + 8) + 8) + -0x10;
        goto LAB_1800a1e83;
      }
      uVal_2 = param_1[0xb];
      uVal_8 = (uint64_t)((uint)uVal_2 & 0x1f);
      uVal_9 = uVal_8 - 1;
      lVal_10 = ((uint64_t)(uVal_8 != 0) << 0x3d) +
               ((int64_t)uVal_2 >> 0x3f & 0xe000000000000000U) + (uVal_2 >> 5) * 4 + param_1[8] +
               (uVal_9 >> 5) * 4;
      local_50 = lVal_10 + -0x2000000000000000;
      uVal_12 = (uint)uVal_9;
      local_48 = (uint64_t)(uVal_12 & 0x1f);
      uVal_1 = *(uint *)(lVal_10 + -0x2000000000000000);
      func_0x1800a2b50(param_1 + 8,local_80,&local_50);
      uVal_2 = local_38;
      uVal_6 = local_40[0];
      if ((uVal_1 >> (uVal_12 & 0x1f) & 1) == 0) goto LAB_1800a1e58;
      local_40[0] = 0;
      local_38 = 0;
      pU64_11 = (uint8_t *)param_1[0xc];
      local_60 = *pU64_11;
      *pU64_11 = uVal_6;
      local_58 = *(uint64_t *)(pU64_11 + 8);
      *(uint64_t *)(pU64_11 + 8) = uVal_2;
      func_0x180084c70(&local_58);
      *param_2 = 1;
      lVal_10 = param_1[0xc];
    }
    *(int64_t *)(param_2 + 8) = lVal_10;
  }
  func_0x180084c70(&local_38,local_40[0]);
  return param_2;
}

// Unwind@1800a1eb0
void Unwind_1800a1eb0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a1ed0
void Unwind_1800a1ed0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a1ef0
void Unwind_1800a1ef0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a1f10
void Unwind_1800a1f10(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x68);
  return;
}

// func_0x1800a1f40
uint8_t * func_0x1800a1f40(int64_t *param_1,uint8_t *param_2,uint64_t param_3,char param_4)
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
  local_40[0] = 0;
  local_38 = 0;
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
    if (ch_8 != '\0') goto LAB_1800a2006;
LAB_1800a2158:
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
  }
  else {
LAB_1800a2006:
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
LAB_1800a2183:
      *param_2 = 1;
    }
    else {
      fnPtr_4 = *(char **)(param_1[2] + -8);
      if (fnPtr_4 == (char *)0x0) goto LAB_1800a2158;
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
        goto LAB_1800a2183;
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
      if ((uVal_1 >> (uVal_13 & 0x1f) & 1) == 0) goto LAB_1800a2158;
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

// Unwind@1800a21b0
void Unwind_1800a21b0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a21d0
void Unwind_1800a21d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a21f0
void Unwind_1800a21f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a2210
void Unwind_1800a2210(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x68);
  return;
}

// func_0x1800a2240
uint8_t * func_0x1800a2240(int64_t *param_1,uint8_t *param_2,uint64_t *param_3,char param_4)
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
  local_40[0] = 5;
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
    if (ch_8 != '\0') goto LAB_1800a2305;
LAB_1800a2457:
    *param_2 = 0;
    *(uint64_t *)(param_2 + 8) = 0;
  }
  else {
LAB_1800a2305:
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
LAB_1800a2482:
      *param_2 = 1;
    }
    else {
      fnPtr_4 = *(char **)(param_1[2] + -8);
      if (fnPtr_4 == (char *)0x0) goto LAB_1800a2457;
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
        goto LAB_1800a2482;
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
      if ((uVal_1 >> (uVal_13 & 0x1f) & 1) == 0) goto LAB_1800a2457;
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

// Unwind@1800a24b0
void Unwind_1800a24b0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a24d0
void Unwind_1800a24d0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800a24f0
void Unwind_1800a24f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}
