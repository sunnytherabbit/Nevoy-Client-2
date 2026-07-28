#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@180208b10
void Unwind_180208b10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x15d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@180208b70
void Unwind_180208b70(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x150);
  *pU64_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(pU64_1 + 0x12);
  func_0x1801c49a0(pU64_1);
  return;
}

// Unwind@180208bd0
void Unwind_180208bd0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x89f4) = 0;
  return;
}

// Unwind@180208c20
void Unwind_180208c20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8a6c) = 0;
  *(uint8_t *)(param_2 + 0x15e) = 1;
  return;
}

// Unwind@180208c70
void Unwind_180208c70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8aa4) = 0;
  *(uint8_t *)(param_2 + 0x15d) = 1;
  return;
}

// Unwind@180208f60
void Unwind_180208f60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8ad8) = 0;
  return;
}

// Unwind@1802090e0
void Unwind_1802090e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x60);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x28));
  }
  return;
}

// Unwind@180209ac0
void Unwind_180209ac0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180209b00
void Unwind_180209b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180209b40
void Unwind_180209b40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@180209b90
void Unwind_180209b90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@180209be0
void Unwind_180209be0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@180209c30
void Unwind_180209c30(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8af4) = 0;
  return;
}

// func_0x180209c90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180209c90(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806bde17;
  uStack_24 = _UNK_1806bde1b;
  uStack_20 = _UNK_1806bde1f;
  uStack_1c = _UNK_1806bde23;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8b18) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x8b18) = 1;
    func_0x18007d150(lVal_1 + 0x8b05,&local_28);
    func_0x180673140(&LAB_180214820);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8b05;
}

// Unwind@180209d30
void Unwind_180209d30(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8b18) = 0;
  return;
}

// func_0x180209d60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180209d60(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e8c;
    *param_1 = auArr_1;
    param_1[1][0] = 0;
  }
  return;
}

// Unwind@18020a080
void Unwind_18020a080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18020a2a0
void Unwind_18020a2a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x18020a2d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18020a2d0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  char *_Str_00;
  uint64_t *_Str_01;
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint64_t *pU64_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint8_t *pU64_12;
  uint8_t uVal_13;
  uint64_t uVal_14;
  uint8_t *pU64_15;
  uint8_t local_f8 [56];
  uint64_t local_c0;
  uint8_t local_b8 [16];
  size_t local_a8;
  uint64_t local_a0;
  uint64_t *local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = _DAT_1806bde47;
  uStack_64 = _UNK_1806bde4b;
  uStack_60 = _UNK_1806bde4f;
  uStack_5c = _UNK_1806bde53;
  local_78._4_4_ = _UNK_1806bde3b;
  local_78._0_4_ = _DAT_1806bde37;
  uStack_70._0_4_ = _UNK_1806bde3f;
  uStack_70._4_4_ = _UNK_1806bde43;
  local_88._4_4_ = _UNK_1806bde2b;
  local_88._0_4_ = _DAT_1806bde27;
  uStack_80._0_4_ = _UNK_1806bde2f;
  uStack_80._4_4_ = _UNK_1806bde33;
  local_58 = 0x75;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8b70) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x8b70) = 1;
    func_0x1802148a0(lVal_11 + 0x8b3d,local_88);
    func_0x180673140(&LAB_180214a00);
  }
  uVal_7 = _UNK_1806b2d6c;
  uVal_6 = _UNK_1806b2d68;
  uVal_5 = _UNK_1806b2d64;
  uVal_4 = _DAT_1806b2d60;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_11 + 0x8b3d);
  if (*(char *)(lVal_11 + 0x8b6e) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_11 + 0x8b41) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(lVal_11 + 0x8b45) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(lVal_11 + 0x8b49) ^ _UNK_1806b2d6c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_11 + 0x8b51) ^ uVal_5;
    auArr_2._0_4_ = *(uint *)(lVal_11 + 0x8b4d) ^ uVal_4;
    auArr_2._8_4_ = *(uint *)(lVal_11 + 0x8b55) ^ uVal_6;
    auArr_2._12_4_ = *(uint *)(lVal_11 + 0x8b59) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_11 + 0x8b4d) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_11 + 0x8b61) ^ uVal_5;
    auArr_3._0_4_ = *(uint *)(lVal_11 + 0x8b5d) ^ uVal_4;
    auArr_3._8_4_ = *(uint *)(lVal_11 + 0x8b65) ^ uVal_6;
    auArr_3._12_4_ = *(uint *)(lVal_11 + 0x8b69) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_11 + 0x8b5d) = auArr_3;
    *(byte *)(lVal_11 + 0x8b6d) = *(byte *)(lVal_11 + 0x8b6d) ^ 0x75;
    *(uint8_t *)(lVal_11 + 0x8b6e) = 0;
  }
  _local_78 = ZEXT816(0);
  _local_88 = ZEXT816(0);
  sz_9 = strlen((char *)_Str);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_18020a82a:
    local_49 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_12 = local_88;
      uVal_14 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_10) {
        uVal_14 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_11;
      }
      local_88 = (uint8_t  [8])pU64_12;
    }
    local_78 = (uint8_t  [8])sz_9;
    uStack_70 = uVal_14;
    func_0x1806aa960(pU64_12,_Str,sz_9);
    pU64_12[sz_9] = 0;
    pU64_12 = local_88;
    func_0x18014fe60(param_1,0,0,pU64_12);
    if (0xf < uStack_70) {
      uVal_14 = uStack_70 + 1;
      lVal_11 = (int64_t)local_88;
      if (0xfff < uVal_14) {
        lVal_11 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_11)) goto LAB_18020a83e;
        uVal_14 = uStack_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_14);
    }
    *param_1 = &PTR_LAB_1806bca70;
    *(uint8_t *)(param_1 + 0x29) = 1;
    *(uint64_t *)((int64_t)param_1 + 0x14c) = 0;
    local_c0 = 0;
    local_90 = param_1;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_13 = 1;
    }
    else {
      local_c0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_f8);
      uVal_13 = *(uint8_t *)(param_1 + 0x29);
    }
    local_78._4_4_ = _UNK_1806bde6c;
    local_78._0_4_ = _DAT_1806bde68;
    uStack_70._0_4_ = _UNK_1806bde70;
    uStack_70._4_4_ = _UNK_1806bde74;
    local_88._4_4_ = _UNK_1806bde5c;
    local_88._0_4_ = _DAT_1806bde58;
    uStack_80._0_4_ = _UNK_1806bde60;
    uStack_80._4_4_ = _UNK_1806bde64;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8b94) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x8b94) = 1;
      func_0x18008f8e0(lVal_11 + 0x8b71,local_88);
      func_0x180673140(&LAB_180214a40);
    }
    _Str_00 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8b71);
    func_0x1801c21f0(_Str_00);
    local_b8 = ZEXT816(0);
    sz_9 = strlen(_Str_00);
    if ((int64_t)sz_9 < 0) goto LAB_18020a82a;
    if (sz_9 < 0x10) {
      uVal_14 = 0xf;
      pU64_15 = local_b8;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_10) {
        uVal_14 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_49 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_49 = 1;
        lVal_11 = func_0x180672de0(uVal_14 + 0x28);
        pU64_15 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_11;
      }
      local_b8._0_8_ = pU64_15;
    }
    local_a8 = sz_9;
    local_a0 = uVal_14;
    func_0x1806aa960(pU64_15,_Str_00,sz_9);
    pU64_15[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8ba4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x8ba4) = 1;
      *(uint8_t *)(lVal_11 + 0x8ba2) = 1;
      *(uint64_t *)(lVal_11 + 0x8b98) = 0x8cc1da91b0122d20;
      *(uint16_t *)(lVal_11 + 0x8ba0) = 0x451e;
      func_0x180673140(&LAB_180214a70);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_01 = (uint64_t *)(lVal_11 + 0x8b98);
    if (*(char *)(lVal_11 + 0x8ba2) == '\x01') {
      *_Str_01 = *_Str_01 ^ 0xe9b5b3b1c77d4573;
      *(byte *)(lVal_11 + 0x8ba0) = *(byte *)(lVal_11 + 0x8ba0) ^ 0x73;
      *(byte *)(lVal_11 + 0x8ba1) = *(byte *)(lVal_11 + 0x8ba1) ^ 0x45;
      *(uint8_t *)(lVal_11 + 0x8ba2) = 0;
    }
    _local_88 = ZEXT816(0);
    sz_9 = strlen((char *)_Str_01);
    if (-1 < (int64_t)sz_9) {
      uVal_14 = 0xf;
      if (0xf < sz_9) {
        uVal_10 = sz_9 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_10) {
          uVal_14 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          local_4a = 1;
          pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
        }
        else {
          local_4a = 1;
          lVal_11 = func_0x180672de0(uVal_14 + 0x28);
          pU64_12 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_12 + -8) = lVal_11;
        }
        local_88 = (uint8_t  [8])pU64_12;
      }
      local_78 = (uint8_t  [8])sz_9;
      uStack_70 = uVal_14;
      func_0x1806aa960(pU64_12,_Str_01,sz_9);
      pU64_12[sz_9] = 0;
      func_0x1801ccd70(local_90,local_88,local_b8,param_1 + 0x29,uVal_13,local_f8,0);
      if (0xf < uStack_70) {
        uVal_14 = uStack_70 + 1;
        lVal_11 = (int64_t)local_88;
        if (0xfff < uVal_14) {
          lVal_11 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_11)) goto LAB_18020a83e;
          uVal_14 = uStack_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_14);
      }
      pU64_8 = local_90;
      if (0xf < local_a0) {
        uVal_14 = local_a0 + 1;
        lVal_11 = local_b8._0_8_;
        if (0xfff < uVal_14) {
          lVal_11 = *(int64_t *)(local_b8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_11)) goto LAB_18020a83e;
          uVal_14 = local_a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_14);
      }
      return pU64_8;
    }
  }
  local_4a = 1;
  func_0x18007ba70();
LAB_18020a83e:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18020a840
void Unwind_18020a840(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@18020a890
void Unwind_18020a890(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8b94) = 0;
  *(uint8_t *)(param_2 + 0xef) = 1;
  return;
}

// Unwind@18020a8e0
void Unwind_18020a8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18020a920
void Unwind_18020a920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  *(uint8_t *)(param_2 + 0xee) = 0;
  return;
}

// Unwind@18020a960
void Unwind_18020a960(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xee);
  func_0x180001e70(param_2 + 0x80);
  *(uint8_t *)(param_2 + 0xef) = uVal_1;
  return;
}

// Unwind@18020a9a0
void Unwind_18020a9a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xef) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@18020aa00
void Unwind_18020aa00(uint64_t param_1,int64_t param_2)
{
  func_0x180154cc0(*(uint64_t *)(param_2 + 0xa8));
  return;
}

// Unwind@18020aa40
void Unwind_18020aa40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8b70) = 0;
  return;
}

// Unwind@18020ad40
void Unwind_18020ad40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8bd0) = 0;
  return;
}

// Unwind@18020bd00
void Unwind_18020bd00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18020bd80
void Unwind_18020bd80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18020be00
void Unwind_18020be00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@18020be80
void Unwind_18020be80(uint64_t param_1,int64_t param_2)
{
  func_0x1801a0760(param_2 + 0x90);
  return;
}

// Unwind@18020bf00
void Unwind_18020bf00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18020bf80
void Unwind_18020bf80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18020c000
void Unwind_18020c000(uint64_t param_1,int64_t param_2)
{
  func_0x18015fd20(param_2 + 0x90);
  return;
}

// Unwind@18020c080
void Unwind_18020c080(uint64_t param_1,int64_t param_2)
{
  func_0x1801a07d0(param_2 + 0x78);
  return;
}

// Unwind@18020c100
void Unwind_18020c100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@18020c180
void Unwind_18020c180(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8c0c) = 0;
  return;
}

// Unwind@18020c210
void Unwind_18020c210(uint64_t param_1,int64_t param_2)
{
  func_0x18015fd20(param_2 + 0x90);
  return;
}

// Unwind@18020c8e0
void Unwind_18020c8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18020c920
void Unwind_18020c920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xa8));
  return;
}

// Unwind@18020c960
void Unwind_18020c960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// func_0x18020ca00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18020ca00(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  uint *_Str;
  int64_t lVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint32_t *pU64_7;
  uint64_t uVal_8;
  uint32_t uVal_9;
  uint8_t local_e8 [56];
  uint64_t local_b0;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint16_t uStack_9c;
  uint16_t uStack_9a;
  uint16_t uStack_98;
  uint32_t uStack_96;
  uint16_t uStack_92;
  uint16_t uStack_90;
  uint32_t uStack_8e;
  uint16_t uStack_8a;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  undefined5 uStack_78;
  undefined3 uStack_73;
  uint64_t uStack_70;
  uint64_t *local_60;
  uint8_t local_52;
  uint8_t local_51;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_88 = _DAT_1806bde9f;
  uStack_84 = _UNK_1806bdea3;
  uStack_80 = _UNK_1806bdea7;
  uStack_7c = CONCAT31(0x7f32e4,(char)_UNK_1806bdeab);
  uStack_78 = 0xc57a9cb5a6;
  local_60 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8c74) == '\0') {
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_6 + 0x8c74) = 1;
    func_0x18007cd50(lVal_6 + 0x8c5d,&local_88);
    func_0x180673140(&LAB_180214c80);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x8c5d);
  func_0x1802188b0(fnPtr_1);
  uStack_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  sz_4 = strlen(fnPtr_1);
  if ((int64_t)sz_4 < 0) {
    func_0x18007ba70();
LAB_18020cf1f:
    local_51 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_4 < 0x10) {
      pU64_7 = &local_88;
      uVal_8 = 0xf;
    }
    else {
      uVal_5 = sz_4 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_7 = (uint32_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_8 + 0x28);
        pU64_7 = (uint32_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_7 + -2) = lVal_6;
      }
      local_88 = SUB84(pU64_7,0);
      uStack_84 = (uint32_t)((uint64_t)pU64_7 >> 0x20);
    }
    uStack_78 = (undefined5)sz_4;
    uStack_73 = (undefined3)(sz_4 >> 0x28);
    uStack_70 = uVal_8;
    func_0x1806aa960(pU64_7,fnPtr_1,sz_4);
    *(uint8_t *)((int64_t)pU64_7 + sz_4) = 0;
    pU64_7 = &local_88;
    func_0x1801c2ba0(local_60,0,0,pU64_7);
    if (0xf < uStack_70) {
      lVal_3 = CONCAT44(uStack_84,local_88);
      uVal_8 = uStack_70 + 1;
      lVal_6 = lVal_3;
      if (0xfff < uVal_8) {
        lVal_6 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_6)) goto LAB_18020cf33;
        uVal_8 = uStack_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_6,uVal_8);
    }
    *local_60 = &PTR_LAB_1806bcbe0;
    pU64_2 = local_60 + 0x10;
    *(uint32_t *)(local_60 + 0x10) = 0x3f800000;
    local_b0 = 0;
    uVal_9 = DAT_1806b26b4;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_b0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_e8);
      uVal_9 = *(uint32_t *)pU64_2;
    }
    uStack_98 = _UNK_1806bdec4;
    uStack_96 = _UNK_1806bdec6;
    uStack_92 = (uint16_t)_UNK_1806bdeca;
    uStack_90 = (uint16_t)((uint)_UNK_1806bdeca >> 0x10);
    uStack_8e = _UNK_1806bdece;
    local_a8 = _DAT_1806bdeb4;
    uStack_a4 = _UNK_1806bdeb8;
    uStack_a0 = _UNK_1806bdebc;
    uStack_9c = _UNK_1806bdec0;
    uStack_9a = _DAT_1806bdec2;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8c94) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0x8c94) = 1;
      func_0x18008fa60(lVal_6 + 0x8c75,&local_a8);
      func_0x180673140(&LAB_180214cb0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x8c75);
    func_0x1802188e0(fnPtr_1);
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    sz_4 = strlen(fnPtr_1);
    if ((int64_t)sz_4 < 0) goto LAB_18020cf1f;
    uVal_8 = 0xf;
    if (0xf < sz_4) {
      uVal_5 = sz_4 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        local_51 = 1;
        pU64_7 = (uint32_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        local_51 = 1;
        lVal_6 = func_0x180672de0(uVal_8 + 0x28);
        pU64_7 = (uint32_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_7 + -2) = lVal_6;
      }
      local_88 = SUB84(pU64_7,0);
      uStack_84 = (uint32_t)((uint64_t)pU64_7 >> 0x20);
    }
    uStack_78 = (undefined5)sz_4;
    uStack_73 = (undefined3)(sz_4 >> 0x28);
    uStack_70 = uVal_8;
    func_0x1806aa960(pU64_7,fnPtr_1,sz_4);
    *(uint8_t *)((int64_t)pU64_7 + sz_4) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 36000) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 36000) = 1;
      *(uint8_t *)(lVal_6 + 0x8c9e) = 1;
      *(uint32_t *)(lVal_6 + 0x8c98) = 0xc5907a26;
      *(uint16_t *)(lVal_6 + 0x8c9c) = 0x50c;
      func_0x180673140(&LAB_180214ce0);
    }
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_6 + 0x8c98);
    if (*(char *)(lVal_6 + 0x8c9e) == '\x01') {
      *_Str = *_Str ^ 0xa9f11975;
      *(byte *)(lVal_6 + 0x8c9c) = *(byte *)(lVal_6 + 0x8c9c) ^ 0x69;
      *(byte *)(lVal_6 + 0x8c9d) = *(byte *)(lVal_6 + 0x8c9d) ^ 5;
      *(uint8_t *)(lVal_6 + 0x8c9e) = 0;
    }
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    sz_4 = strlen((char *)_Str);
    if (-1 < (int64_t)sz_4) {
      if (sz_4 < 0x10) {
        pU64_7 = &local_a8;
        uVal_8 = 0xf;
      }
      else {
        uVal_5 = sz_4 | 0xf;
        uVal_8 = 0x16;
        if (0x16 < uVal_5) {
          uVal_8 = uVal_5;
        }
        if (uVal_5 < 0xfff) {
          local_52 = 1;
          pU64_7 = (uint32_t *)func_0x180672de0(uVal_8 + 1);
        }
        else {
          local_52 = 1;
          lVal_6 = func_0x180672de0(uVal_8 + 0x28);
          pU64_7 = (uint32_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_7 + -2) = lVal_6;
        }
        local_a8 = SUB84(pU64_7,0);
        uStack_a4 = (uint32_t)((uint64_t)pU64_7 >> 0x20);
      }
      uStack_98 = (uint16_t)sz_4;
      uStack_96 = (uint32_t)(sz_4 >> 0x10);
      uStack_92 = (uint16_t)(sz_4 >> 0x30);
      uStack_90 = (uint16_t)uVal_8;
      uStack_8e = (uint32_t)(uVal_8 >> 0x10);
      uStack_8a = (uint16_t)(uVal_8 >> 0x30);
      func_0x1806aa960(pU64_7,_Str,sz_4);
      *(uint8_t *)((int64_t)pU64_7 + sz_4) = 0;
      func_0x1801cd2e0(local_60,&local_a8,&local_88,pU64_2,uVal_9,0,0x40400000,local_e8,0);
      uVal_8 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
      if (0xf < uVal_8) {
        lVal_3 = CONCAT44(uStack_a4,local_a8);
        uVal_5 = uVal_8 + 1;
        lVal_6 = lVal_3;
        if (0xfff < uVal_5) {
          lVal_6 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_6)) goto LAB_18020cf33;
          uVal_5 = uVal_8 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_6,uVal_5);
      }
      if (0xf < uStack_70) {
        lVal_3 = CONCAT44(uStack_84,local_88);
        uVal_8 = uStack_70 + 1;
        lVal_6 = lVal_3;
        if (0xfff < uVal_8) {
          lVal_6 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_6)) goto LAB_18020cf33;
          uVal_8 = uStack_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_6,uVal_8);
      }
      return local_60;
    }
  }
  local_52 = 1;
  func_0x18007ba70();
LAB_18020cf33:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18020cf40
void Unwind_18020cf40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18020cf90
void Unwind_18020cf90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8c94) = 0;
  *(uint8_t *)(param_2 + 0xe7) = 1;
  return;
}

// Unwind@18020cfe0
void Unwind_18020cfe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18020d020
void Unwind_18020d020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  *(uint8_t *)(param_2 + 0xe6) = 0;
  return;
}

// Unwind@18020d060
void Unwind_18020d060(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xe6);
  func_0x180001e70(param_2 + 0xb0);
  *(uint8_t *)(param_2 + 0xe7) = uVal_1;
  return;
}

// Unwind@18020d0a0
void Unwind_18020d0a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xe7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18020d100
void Unwind_18020d100(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xd8));
  return;
}

// Unwind@18020d140
void Unwind_18020d140(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8c74) = 0;
  return;
}

// Unwind@18020d2f0
void Unwind_18020d2f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8cb4) = 0;
  return;
}

// Unwind@18020d480
void Unwind_18020d480(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8cd4) = 0;
  return;
}

// func_0x18020d4c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18020d4c0(uint64_t *param_1)
{
  char *_Str;
  int64_t lVal_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint32_t *pU64_5;
  uint64_t uVal_6;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  undefined5 uStack_48;
  undefined3 uStack_43;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58 = _DAT_1806bdefe;
  uStack_54 = _UNK_1806bdf02;
  uStack_50 = _UNK_1806bdf06;
  uStack_4c = CONCAT31(0x6e23a1,(char)_UNK_1806bdf0a);
  uStack_48 = 0xc52791baae;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8cec) == '\0') {
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_4 + 0x8cec) = 1;
    func_0x18007cd50(lVal_4 + 0x8cd5,&local_58);
    func_0x180673140(&LAB_180214d70);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8cd5);
  func_0x1802188b0(_Str);
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  sz_2 = strlen(_Str);
  if (-1 < (int64_t)sz_2) {
    if (sz_2 < 0x10) {
      pU64_5 = &local_58;
      uVal_6 = 0xf;
    }
    else {
      uVal_3 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pU64_5 = (uint32_t *)func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_4 = func_0x180672de0(uVal_6 + 0x28);
        pU64_5 = (uint32_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -2) = lVal_4;
      }
      local_58 = SUB84(pU64_5,0);
      uStack_54 = (uint32_t)((uint64_t)pU64_5 >> 0x20);
    }
    uStack_48 = (undefined5)sz_2;
    uStack_43 = (undefined3)(sz_2 >> 0x28);
    local_40 = uVal_6;
    func_0x1806aa960(pU64_5,_Str,sz_2);
    *(uint8_t *)((int64_t)pU64_5 + sz_2) = 0;
    func_0x18014fe60(param_1,0,2,&local_58);
    if (0xf < local_40) {
      lVal_1 = CONCAT44(uStack_54,local_58);
      uVal_6 = local_40 + 1;
      lVal_4 = lVal_1;
      if (0xfff < uVal_6) {
        lVal_4 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_4)) goto LAB_18020d679;
        uVal_6 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_6);
    }
    *param_1 = &PTR_LAB_1806bcd10;
    param_1[0x29] = 0;
    return param_1;
  }
  func_0x18007ba70();
LAB_18020d679:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18020d680
void Unwind_18020d680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18020d6b0
void Unwind_18020d6b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8cec) = 0;
  return;
}

// Unwind@18020d9a0
void Unwind_18020d9a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8d1c) = 0;
  return;
}

// Unwind@18020e5a0
void Unwind_18020e5a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18020e5e0
void Unwind_18020e5e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@18020e620
void Unwind_18020e620(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x88));
  return;
}

// Unwind@18020e660
void Unwind_18020e660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// func_0x18020ecf0
void func_0x18020ecf0(int64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  int64_t lVal_3;
  
  pU64_1 = (uint64_t *)*param_1;
  *(uint64_t *)pU64_1[1] = 0;
  pU64_1 = (uint64_t *)*pU64_1;
  while (pU64_1 != (uint64_t *)0x0) {
    pU64_2 = (uint64_t *)*pU64_1;
    lVal_3 = pU64_1[3];
    if (lVal_3 != 0) {
      func_0x1800fe9f0(lVal_3);
      thunk_FUN_180695dd0(lVal_3,0x250);
    }
    thunk_FUN_180695dd0(pU64_1,0x28);
    pU64_1 = pU64_2;
  }
  thunk_FUN_180695dd0(*param_1,0x28);
  return;
}

// func_0x18020ee80
void func_0x18020ee80(uint64_t *param_1,uint64_t param_2)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  
  if (param_2 < 0x1555555555555556) {
    uVal_2 = *param_1;
    uVal_3 = ((int64_t)(param_1[2] - uVal_2) >> 2) * -0x5555555555555555;
    uVal_5 = 0x1555555555555555 - (uVal_3 >> 1);
    uVal_7 = (uVal_3 >> 1) + uVal_3;
    if (uVal_7 <= param_2) {
      uVal_7 = param_2;
    }
    if (uVal_5 <= uVal_3 && uVal_3 - uVal_5 != 0) {
      uVal_7 = 0x1555555555555555;
    }
    if (uVal_7 < 0x1555555555555556) {
      uVal_3 = param_1[1];
      if (uVal_7 == 0) {
        uVal_5 = 0;
      }
      else if (uVal_7 < 0x156) {
        uVal_5 = func_0x180672de0(uVal_7 * 0xc);
      }
      else {
        if (0x1555555555555552 < uVal_7) goto LAB_18020f021;
        lVal_1 = func_0x180672de0(uVal_7 * 0xc + 0x27);
        uVal_5 = lVal_1 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_5 - 8) = lVal_1;
      }
      lVal_6 = uVal_3 - uVal_2;
      lVal_1 = (lVal_6 >> 2) * 0x5555555555555555 + param_2;
      if (lVal_1 != 0) {
        func_0x1806ab010(lVal_6 + uVal_5,0,lVal_1 * 0xc);
      }
      uVal_2 = *param_1;
      uVal_3 = param_1[1];
      if (uVal_2 != uVal_3) {
        lVal_1 = 0;
        do {
          *(uint32_t *)(uVal_5 + lVal_1) = *(uint32_t *)(uVal_2 + lVal_1);
          *(uint32_t *)(uVal_5 + 4 + lVal_1) = *(uint32_t *)(uVal_2 + 4 + lVal_1);
          *(uint32_t *)(uVal_5 + 8 + lVal_1) = *(uint32_t *)(uVal_2 + 8 + lVal_1);
          lVal_6 = uVal_2 + lVal_1;
          lVal_1 = lVal_1 + 0xc;
        } while (lVal_6 + 0xcU != uVal_3);
        uVal_2 = *param_1;
      }
      if (uVal_2 != 0) {
        uVal_4 = param_1[2] - uVal_2;
        uVal_3 = uVal_2;
        if (0xfff < uVal_4) {
          uVal_3 = *(uint64_t *)(uVal_2 - 8);
          if (0x1f < (uVal_2 - 8) - uVal_3) goto LAB_18020f02b;
          uVal_4 = uVal_4 + 0x27;
        }
        thunk_FUN_180695dd0(uVal_3,uVal_4);
      }
      *param_1 = uVal_5;
      param_1[1] = uVal_5 + param_2 * 0xc;
      param_1[2] = uVal_5 + uVal_7 * 0xc;
      return;
    }
LAB_18020f021:
    func_0x18007ba90();
  }
  func_0x18007c0d0();
LAB_18020f02b:
  do {
    invalidInstructionException();
  } while( true );
}

// func_0x18020f0d0
void func_0x18020f0d0(int64_t *param_1,int64_t *param_2)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint64_t local_88;
  uint64_t uStack_80;
  uint8_t local_78;
  int64_t local_70 [7];
  int64_t *local_38;
  int64_t local_30;
  
  local_98 = *(uint *)param_1;
  uStack_94 = *(uint32_t *)((int64_t)param_1 + 4);
  uStack_90 = *(uint32_t *)(param_1 + 1);
  uStack_8c = *(uint32_t *)((int64_t)param_1 + 0xc);
  local_88 = param_1[2];
  uStack_80 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(uint8_t *)param_1 = 0;
  local_78 = *(uint8_t *)(param_1 + 4);
  pLong_2 = param_1 + 5;
  local_38 = (int64_t *)0x0;
  pLong_1 = (int64_t *)param_1[0xc];
  if (pLong_1 != (int64_t *)0x0) {
    if (pLong_1 == pLong_2) {
      local_38 = (int64_t *)(**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,local_70);
      pLong_1 = (int64_t *)param_1[0xc];
      if (pLong_1 == (int64_t *)0x0) goto LAB_18020f16b;
      (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != pLong_2);
      pLong_1 = local_38;
    }
    local_38 = pLong_1;
    param_1[0xc] = 0;
  }
LAB_18020f16b:
  local_30 = param_1[0xd];
  if (param_1 == param_2) {
    *(uint8_t *)(param_1 + 4) = *(uint8_t *)(param_2 + 4);
  }
  else {
    uVal_12 = param_1[3];
    if (0xf < uVal_12) {
      lVal_11 = *param_1;
      uVal_10 = uVal_12 + 1;
      lVal_13 = lVal_11;
      if (0xfff < uVal_10) {
        lVal_13 = *(int64_t *)(lVal_11 + -8);
        if (0x1f < (uint64_t)((lVal_11 + -8) - lVal_13)) goto LAB_18020f3f3;
        uVal_10 = uVal_12 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_10);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(uint8_t *)param_1 = 0;
    uVal_3 = *(uint32_t *)param_2;
    uVal_4 = *(uint32_t *)((int64_t)param_2 + 4);
    uVal_5 = *(uint32_t *)(param_2 + 1);
    uVal_6 = *(uint32_t *)((int64_t)param_2 + 0xc);
    uVal_7 = *(uint32_t *)((int64_t)param_2 + 0x14);
    uVal_8 = *(uint32_t *)(param_2 + 3);
    uVal_9 = *(uint32_t *)((int64_t)param_2 + 0x1c);
    *(uint32_t *)(param_1 + 2) = *(uint32_t *)(param_2 + 2);
    *(uint32_t *)((int64_t)param_1 + 0x14) = uVal_7;
    *(uint32_t *)(param_1 + 3) = uVal_8;
    *(uint32_t *)((int64_t)param_1 + 0x1c) = uVal_9;
    *(uint32_t *)param_1 = uVal_3;
    *(uint32_t *)((int64_t)param_1 + 4) = uVal_4;
    *(uint32_t *)(param_1 + 1) = uVal_5;
    *(uint32_t *)((int64_t)param_1 + 0xc) = uVal_6;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(uint8_t *)param_2 = 0;
    *(uint8_t *)(param_1 + 4) = *(uint8_t *)(param_2 + 4);
    pLong_1 = (int64_t *)param_1[0xc];
    if (pLong_1 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != pLong_2);
      param_1[0xc] = 0;
    }
    pLong_1 = (int64_t *)param_2[0xc];
    if (pLong_1 != (int64_t *)0x0) {
      if (pLong_1 == param_2 + 5) {
        lVal_11 = (**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,pLong_2);
        param_1[0xc] = lVal_11;
        pLong_2 = (int64_t *)param_2[0xc];
        if (pLong_2 == (int64_t *)0x0) goto LAB_18020f261;
        (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_2 + 5);
      }
      else {
        param_1[0xc] = (int64_t)pLong_1;
      }
      param_2[0xc] = 0;
    }
  }
LAB_18020f261:
  param_1[0xd] = param_2[0xd];
  if (param_2 == (int64_t *)&local_98) {
    *(uint8_t *)(param_2 + 4) = local_78;
    param_2[0xd] = local_30;
    if (local_38 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_38 + 0x20))(local_38,local_38 != local_70);
      local_38 = (int64_t *)0x0;
    }
  }
  else {
    uVal_12 = param_2[3];
    if (0xf < uVal_12) {
      lVal_11 = *param_2;
      uVal_10 = uVal_12 + 1;
      lVal_13 = lVal_11;
      if (0xfff < uVal_10) {
        lVal_13 = *(int64_t *)(lVal_11 + -8);
        if (0x1f < (uint64_t)((lVal_11 + -8) - lVal_13)) goto LAB_18020f3f3;
        uVal_10 = uVal_12 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_10);
    }
    *(uint32_t *)(param_2 + 2) = (uint32_t)local_88;
    *(uint32_t *)((int64_t)param_2 + 0x14) = local_88._4_4_;
    *(uint32_t *)(param_2 + 3) = (uint32_t)uStack_80;
    *(uint32_t *)((int64_t)param_2 + 0x1c) = uStack_80._4_4_;
    *(uint *)param_2 = local_98;
    *(uint32_t *)((int64_t)param_2 + 4) = uStack_94;
    *(uint32_t *)(param_2 + 1) = uStack_90;
    *(uint32_t *)((int64_t)param_2 + 0xc) = uStack_8c;
    local_88 = 0;
    uStack_80 = 0xf;
    local_98 = local_98 & 0xffffff00;
    *(uint8_t *)(param_2 + 4) = local_78;
    pLong_2 = (int64_t *)param_2[0xc];
    if (pLong_2 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != param_2 + 5);
      param_2[0xc] = 0;
    }
    if (local_38 != (int64_t *)0x0) {
      if (local_38 == local_70) {
        lVal_11 = (**(func_ptr_t *)(*local_38 + 8))(local_38,param_2 + 5);
        param_2[0xc] = lVal_11;
        if (local_38 == (int64_t *)0x0) goto LAB_18020f39a;
        (**(func_ptr_t *)(*local_38 + 0x20))(local_38,local_38 != local_70);
      }
      else {
        param_2[0xc] = (int64_t)local_38;
      }
      local_38 = (int64_t *)0x0;
    }
LAB_18020f39a:
    param_2[0xd] = local_30;
  }
  if (0xf < uStack_80) {
    lVal_13 = CONCAT44(uStack_94,local_98);
    uVal_12 = uStack_80 + 1;
    lVal_11 = lVal_13;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(lVal_13 + -8);
      if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_11)) {
LAB_18020f3f3:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_12 = uStack_80 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  return;
}

// func_0x18020f400
uint8_t * func_0x18020f400(int64_t *param_1,uint32_t *param_2,uint64_t param_3)
{
  uint32_t *pU64_1;
  int64_t *pLong_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint32_t *pU64_17;
  uint64_t *pU64_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  uint32_t *pU64_21;
  int64_t *pLong_22;
  int64_t *local_98;
  uint8_t *local_90;
  uint64_t local_88;
  uint8_t *local_80;
  uint8_t *local_78;
  int64_t *local_70;
  uint8_t *local_68;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVal_20 = *param_1;
  uVal_16 = (param_1[1] - lVal_20 >> 4) * 0x6db6db6db6db6db7 + 1;
  uVal_14 = (param_1[2] - lVal_20 >> 4) * 0x6db6db6db6db6db7;
  uVal_19 = 0x249249249249249 - (uVal_14 >> 1);
  uVal_15 = (uVal_14 >> 1) + uVal_14;
  if (uVal_15 <= uVal_16) {
    uVal_15 = uVal_16;
  }
  if (uVal_19 <= uVal_14 && uVal_14 - uVal_19 != 0) {
    uVal_15 = 0x249249249249249;
  }
  if (uVal_15 < 0x24924924924924a) {
    if (uVal_15 == 0) {
      local_90 = (uint8_t *)0x0;
    }
    else if (uVal_15 < 0x25) {
      local_90 = (uint8_t *)func_0x180672de0(uVal_15 * 0x70);
    }
    else {
      if (uVal_15 == 0x249249249249249) goto LAB_18020f7c5;
      lVal_11 = func_0x180672de0(uVal_15 * 0x70 + 0x27);
      local_90 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(local_90 + -8) = lVal_11;
    }
    pU64_13 = (uint8_t *)((int64_t)param_2 + ((int64_t)local_90 - lVal_20));
    local_80 = (uint8_t *)((int64_t)param_2 + (int64_t)(local_90 + (0x70 - lVal_20)));
    local_98 = param_1;
    local_88 = uVal_15;
    local_78 = local_80;
    local_68 = local_90;
    func_0x1801d34e0(pU64_13,param_3);
    pU64_21 = (uint32_t *)*param_1;
    pU64_17 = (uint32_t *)param_1[1];
    local_80 = pU64_13;
    local_70 = param_1;
    if (param_2 == pU64_17) {
      if (pU64_21 != param_2) {
        pU64_18 = (uint64_t *)(local_68 + 0x68);
        do {
          *(uint8_t (*)[16])(pU64_18 + -0xb) = ZEXT816(0);
          *(uint8_t (*)[16])(pU64_18 + -0xd) = ZEXT816(0);
          uVal_4 = *pU64_21;
          uVal_5 = pU64_21[1];
          uVal_6 = pU64_21[2];
          uVal_7 = pU64_21[3];
          uVal_8 = pU64_21[5];
          uVal_9 = pU64_21[6];
          uVal_10 = pU64_21[7];
          *(uint32_t *)(pU64_18 + -0xb) = pU64_21[4];
          *(uint32_t *)((int64_t)pU64_18 + -0x54) = uVal_8;
          *(uint32_t *)(pU64_18 + -10) = uVal_9;
          *(uint32_t *)((int64_t)pU64_18 + -0x4c) = uVal_10;
          *(uint32_t *)(pU64_18 + -0xd) = uVal_4;
          *(uint32_t *)((int64_t)pU64_18 + -100) = uVal_5;
          *(uint32_t *)(pU64_18 + -0xc) = uVal_6;
          *(uint32_t *)((int64_t)pU64_18 + -0x5c) = uVal_7;
          *(uint64_t *)(pU64_21 + 4) = 0;
          *(uint64_t *)(pU64_21 + 6) = 0xf;
          *(uint8_t *)pU64_21 = 0;
          *(uint8_t *)(pU64_18 + -9) = *(uint8_t *)(pU64_21 + 8);
          pU64_18[-1] = 0;
          pLong_2 = *(int64_t **)(pU64_21 + 0x18);
          if (pLong_2 != (int64_t *)0x0) {
            if ((int64_t *)(pU64_21 + 10) == pLong_2) {
              uVal_12 = (**(func_ptr_t *)(*pLong_2 + 8))(pLong_2,pU64_18 + -8);
              pU64_18[-1] = uVal_12;
              pLong_2 = *(int64_t **)(pU64_21 + 0x18);
              if (pLong_2 == (int64_t *)0x0) goto LAB_18020f6fc;
              (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,(int64_t *)(pU64_21 + 10) != pLong_2);
            }
            else {
              pU64_18[-1] = pLong_2;
            }
            *(uint64_t *)(pU64_21 + 0x18) = 0;
          }
LAB_18020f6fc:
          *pU64_18 = *(uint64_t *)(pU64_21 + 0x1a);
          pU64_21 = pU64_21 + 0x1c;
          pU64_18 = pU64_18 + 0xe;
        } while (pU64_21 != param_2);
      }
    }
    else {
      if (pU64_21 != param_2) {
        pU64_18 = (uint64_t *)(local_68 + 0x68);
        do {
          *(uint8_t (*)[16])(pU64_18 + -0xb) = ZEXT816(0);
          *(uint8_t (*)[16])(pU64_18 + -0xd) = ZEXT816(0);
          uVal_4 = *pU64_21;
          uVal_5 = pU64_21[1];
          uVal_6 = pU64_21[2];
          uVal_7 = pU64_21[3];
          uVal_8 = pU64_21[5];
          uVal_9 = pU64_21[6];
          uVal_10 = pU64_21[7];
          *(uint32_t *)(pU64_18 + -0xb) = pU64_21[4];
          *(uint32_t *)((int64_t)pU64_18 + -0x54) = uVal_8;
          *(uint32_t *)(pU64_18 + -10) = uVal_9;
          *(uint32_t *)((int64_t)pU64_18 + -0x4c) = uVal_10;
          *(uint32_t *)(pU64_18 + -0xd) = uVal_4;
          *(uint32_t *)((int64_t)pU64_18 + -100) = uVal_5;
          *(uint32_t *)(pU64_18 + -0xc) = uVal_6;
          *(uint32_t *)((int64_t)pU64_18 + -0x5c) = uVal_7;
          *(uint64_t *)(pU64_21 + 4) = 0;
          *(uint64_t *)(pU64_21 + 6) = 0xf;
          *(uint8_t *)pU64_21 = 0;
          *(uint8_t *)(pU64_18 + -9) = *(uint8_t *)(pU64_21 + 8);
          pU64_18[-1] = 0;
          pLong_2 = *(int64_t **)(pU64_21 + 0x18);
          if (pLong_2 != (int64_t *)0x0) {
            if ((int64_t *)(pU64_21 + 10) == pLong_2) {
              uVal_12 = (**(func_ptr_t *)(*pLong_2 + 8))(pLong_2,pU64_18 + -8);
              pU64_18[-1] = uVal_12;
              pLong_2 = *(int64_t **)(pU64_21 + 0x18);
              if (pLong_2 == (int64_t *)0x0) goto LAB_18020f53c;
              (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,(int64_t *)(pU64_21 + 10) != pLong_2);
            }
            else {
              pU64_18[-1] = pLong_2;
            }
            *(uint64_t *)(pU64_21 + 0x18) = 0;
          }
LAB_18020f53c:
          *pU64_18 = *(uint64_t *)(pU64_21 + 0x1a);
          pU64_21 = pU64_21 + 0x1c;
          pU64_18 = pU64_18 + 0xe;
        } while (pU64_21 != param_2);
        pU64_17 = (uint32_t *)local_70[1];
      }
      local_80 = local_68;
      if (param_2 != pU64_17) {
        lVal_20 = 0;
        do {
          *(uint8_t (*)[16])(pU64_13 + lVal_20 + 0x80) = ZEXT816(0);
          *(uint8_t (*)[16])(pU64_13 + lVal_20 + 0x70) = ZEXT816(0);
          pU64_21 = (uint32_t *)((int64_t)param_2 + lVal_20);
          uVal_4 = *pU64_21;
          uVal_5 = pU64_21[1];
          uVal_6 = pU64_21[2];
          uVal_7 = pU64_21[3];
          pU64_21 = (uint32_t *)((int64_t)param_2 + lVal_20 + 0x10);
          uVal_8 = pU64_21[1];
          uVal_9 = pU64_21[2];
          uVal_10 = pU64_21[3];
          pU64_1 = (uint32_t *)(pU64_13 + lVal_20 + 0x80);
          *pU64_1 = *pU64_21;
          pU64_1[1] = uVal_8;
          pU64_1[2] = uVal_9;
          pU64_1[3] = uVal_10;
          pU64_21 = (uint32_t *)(pU64_13 + lVal_20 + 0x70);
          *pU64_21 = uVal_4;
          pU64_21[1] = uVal_5;
          pU64_21[2] = uVal_6;
          pU64_21[3] = uVal_7;
          *(uint64_t *)((int64_t)param_2 + lVal_20 + 0x10) = 0;
          *(uint64_t *)((int64_t)param_2 + lVal_20 + 0x18) = 0xf;
          *(uint8_t *)((int64_t)param_2 + lVal_20) = 0;
          pU64_13[lVal_20 + 0x90] = *(uint8_t *)((int64_t)param_2 + lVal_20 + 0x20);
          *(uint64_t *)(pU64_13 + lVal_20 + 0xd0) = 0;
          pLong_2 = *(int64_t **)((int64_t)param_2 + lVal_20 + 0x60);
          if (pLong_2 != (int64_t *)0x0) {
            pLong_22 = (int64_t *)((int64_t)param_2 + lVal_20 + 0x28);
            if (pLong_22 == pLong_2) {
              uVal_12 = (**(func_ptr_t *)(*pLong_2 + 8))(pLong_2,pU64_13 + lVal_20 + 0x98);
              *(uint64_t *)(pU64_13 + lVal_20 + 0xd0) = uVal_12;
              pLong_2 = *(int64_t **)((int64_t)param_2 + lVal_20 + 0x60);
              if (pLong_2 == (int64_t *)0x0) goto LAB_18020f601;
              (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_22 != pLong_2);
            }
            else {
              *(int64_t **)(pU64_13 + lVal_20 + 0xd0) = pLong_2;
            }
            *(uint64_t *)((int64_t)param_2 + lVal_20 + 0x60) = 0;
          }
LAB_18020f601:
          *(uint64_t *)(pU64_13 + lVal_20 + 0xd8) =
               *(uint64_t *)((int64_t)param_2 + lVal_20 + 0x68);
          lVal_11 = lVal_20 + 0x70;
          lVal_20 = lVal_20 + 0x70;
        } while ((uint32_t *)((int64_t)param_2 + lVal_11) != pU64_17);
      }
    }
    local_90 = (uint8_t *)0x0;
    func_0x18020f810(local_70,local_68,uVal_16,uVal_15);
    func_0x18020f940(&local_98);
    return pU64_13;
  }
LAB_18020f7c5:
  func_0x18007ba90();
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_13 = (uint8_t *)(*fnPtr_3)();
  return pU64_13;
}

// Unwind@18020f7d0
void Unwind_18020f7d0(uint64_t param_1,int64_t param_2)
{
  func_0x18020f940(param_2 + 0x20);
  return;
}

// func_0x18020f810
void func_0x18020f810(int64_t **param_1,int64_t *param_2,int64_t param_3,int64_t param_4)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  
  pLong_7 = *param_1;
  if (pLong_7 != (int64_t *)0x0) {
    pLong_1 = param_1[1];
    if (pLong_7 == pLong_1) {
      uVal_6 = (int64_t)param_1[2] - (int64_t)pLong_7;
    }
    else {
      do {
        pLong_2 = (int64_t *)pLong_7[0xc];
        if (pLong_2 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_7 + 5 != pLong_2);
          pLong_7[0xc] = 0;
        }
        uVal_6 = pLong_7[3];
        if (0xf < uVal_6) {
          lVal_3 = *pLong_7;
          uVal_4 = uVal_6 + 1;
          lVal_5 = lVal_3;
          if (0xfff < uVal_4) {
            lVal_5 = *(int64_t *)(lVal_3 + -8);
            if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_18020f934;
            uVal_4 = uVal_6 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_5,uVal_4);
        }
        pLong_7[2] = 0;
        pLong_7[3] = 0xf;
        *(uint8_t *)pLong_7 = 0;
        pLong_7 = pLong_7 + 0xe;
      } while (pLong_7 != pLong_1);
      pLong_7 = *param_1;
      uVal_6 = (int64_t)param_1[2] - (int64_t)pLong_7;
    }
    if (0xfff < uVal_6) {
      if ((uint8_t *)0x1f <
          (uint8_t *)((int64_t)pLong_7 + (-8 - (int64_t)(int64_t *)pLong_7[-1]))) {
LAB_18020f934:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = uVal_6 + 0x27;
      pLong_7 = (int64_t *)pLong_7[-1];
    }
    thunk_FUN_180695dd0(pLong_7,uVal_6);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0xe;
  param_1[2] = param_2 + param_4 * 0xe;
  return;
}

// func_0x18020f940
void func_0x18020f940(int64_t param_1)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  int64_t *pLong_7;
  
  lVal_5 = *(int64_t *)(param_1 + 8);
  if (lVal_5 == 0) {
    return;
  }
  pLong_7 = *(int64_t **)(param_1 + 0x18);
  pLong_1 = *(int64_t **)(param_1 + 0x20);
  if (pLong_7 == pLong_1) {
    lVal_4 = *(int64_t *)(param_1 + 0x10);
  }
  else {
    do {
      pLong_2 = (int64_t *)pLong_7[0xc];
      if (pLong_2 != (int64_t *)0x0) {
        (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_7 + 5 != pLong_2);
        pLong_7[0xc] = 0;
      }
      uVal_6 = pLong_7[3];
      if (0xf < uVal_6) {
        lVal_5 = *pLong_7;
        uVal_3 = uVal_6 + 1;
        lVal_4 = lVal_5;
        if (0xfff < uVal_3) {
          lVal_4 = *(int64_t *)(lVal_5 + -8);
          if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_4)) goto LAB_18020fa37;
          uVal_3 = uVal_6 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_4,uVal_3);
      }
      pLong_7[2] = 0;
      pLong_7[3] = 0xf;
      *(uint8_t *)pLong_7 = 0;
      pLong_7 = pLong_7 + 0xe;
    } while (pLong_7 != pLong_1);
    lVal_5 = *(int64_t *)(param_1 + 8);
    lVal_4 = *(int64_t *)(param_1 + 0x10);
  }
  uVal_6 = lVal_4 * 0x70;
  if (0xfff < uVal_6) {
    if (0x1f < (uint64_t)((lVal_5 + -8) - *(int64_t *)(lVal_5 + -8))) {
LAB_18020fa37:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_6 = uVal_6 + 0x27;
    lVal_5 = *(int64_t *)(lVal_5 + -8);
  }
  thunk_FUN_180695dd0(lVal_5,uVal_6);
  return;
}

// func_0x18020fa40
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
void func_0x18020fa40(int64_t *param_1,int64_t *param_2,uint64_t param_3)
{
  int64_t *pLong_1;
  uint32_t *pU64_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  byte bFlag_13;
  int64_t lVal_14;
  int64_t lVal_15;
  int64_t *pLong_16;
  int64_t *pLong_17;
  int64_t *pLong_18;
  int64_t *pLong_19;
  int64_t lVal_20;
  uint64_t uVal_21;
  int64_t *pLong_22;
  int64_t lVal_23;
  bool bFlag_24;
  uint64_t local_c8;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint64_t local_b8;
  uint64_t uStack_b0;
  byte local_a8;
  int64_t local_a0 [7];
  int64_t *local_68;
  int64_t local_60;
  int64_t local_58;
  uint64_t local_50;
  int64_t *local_48;
  
  uVal_21 = (int64_t)param_2 - (int64_t)param_1;
  while (0xe6f < (int64_t)uVal_21) {
    local_48 = param_2;
    if ((int64_t)param_3 < 1) {
      uVal_10 = uVal_21 / 0xe0 + 1;
      pLong_17 = param_1 + (uVal_21 / 0xe0) * 0xe;
      goto LAB_180210296;
    }
    uVal_21 = uVal_21 / 0x70 >> 1;
    lVal_20 = uVal_21 * 0x70;
    pLong_17 = param_1 + uVal_21 * 0xe;
    uVal_21 = (int64_t)(param_2 + -0xe) - (int64_t)param_1;
    if ((int64_t)uVal_21 < 0x1181) {
      bFlag_13 = *(byte *)(pLong_17 + 4);
      if (bFlag_13 < *(byte *)(param_1 + 4)) {
        func_0x18020f0d0(pLong_17,param_1);
        bFlag_13 = *(byte *)(pLong_17 + 4);
      }
      if ((*(byte *)(param_2 + -10) < bFlag_13) &&
         (func_0x18020f0d0(param_2 + -0xe,pLong_17), pLong_22 = param_1,
         *(byte *)(pLong_17 + 4) < *(byte *)(param_1 + 4))) goto LAB_180210094;
    }
    else {
      uVal_21 = (uVal_21 >> 4) * 0x6db6db6db6db6db7 + 1 >> 3;
      pLong_22 = param_1 + uVal_21 * 0xe;
      bFlag_13 = *(byte *)(param_1 + uVal_21 * 0xe + 4);
      if (bFlag_13 < *(byte *)(param_1 + 4)) {
        func_0x18020f0d0(pLong_22,param_1);
        bFlag_13 = *(byte *)(pLong_22 + 4);
      }
      local_58 = lVal_20;
      local_50 = param_3;
      if ((*(byte *)(param_1 + uVal_21 * 0x1c + 4) < bFlag_13) &&
         (func_0x18020f0d0(param_1 + uVal_21 * 0x1c,pLong_22),
         *(byte *)(pLong_22 + 4) < *(byte *)(param_1 + 4))) {
        func_0x18020f0d0(pLong_22,param_1);
      }
      pLong_19 = pLong_17 + uVal_21 * -0xe;
      bFlag_13 = *(byte *)(pLong_17 + 4);
      if (bFlag_13 < *(byte *)(pLong_17 + uVal_21 * -0xe + 4)) {
        func_0x18020f0d0(pLong_17,pLong_19);
        bFlag_13 = *(byte *)(pLong_17 + 4);
      }
      if ((*(byte *)(pLong_17 + uVal_21 * 0xe + 4) < bFlag_13) &&
         (func_0x18020f0d0(pLong_17 + uVal_21 * 0xe,pLong_17),
         *(byte *)(pLong_17 + 4) < *(byte *)(pLong_19 + 4))) {
        func_0x18020f0d0(pLong_17,pLong_19);
      }
      pLong_19 = param_2 + uVal_21 * -0xe + -0xe;
      pLong_18 = param_2 + uVal_21 * -0x1c + -0xe;
      bFlag_13 = *(byte *)(param_2 + uVal_21 * -0xe + -10);
      if (bFlag_13 < *(byte *)(param_2 + uVal_21 * -0x1c + -10)) {
        func_0x18020f0d0(pLong_19,pLong_18);
        bFlag_13 = *(byte *)(pLong_19 + 4);
      }
      param_3 = local_50;
      if ((*(byte *)(param_2 + -10) < bFlag_13) &&
         (func_0x18020f0d0(param_2 + -0xe,pLong_19), *(byte *)(pLong_19 + 4) < *(byte *)(pLong_18 + 4))) {
        func_0x18020f0d0(pLong_19,pLong_18);
      }
      bFlag_13 = *(byte *)(pLong_17 + 4);
      if (bFlag_13 < *(byte *)(pLong_22 + 4)) {
        func_0x18020f0d0(pLong_17,pLong_22);
        bFlag_13 = *(byte *)(pLong_17 + 4);
      }
      lVal_20 = local_58;
      if ((*(byte *)(pLong_19 + 4) < bFlag_13) &&
         (func_0x18020f0d0(pLong_19,pLong_17), *(byte *)(pLong_17 + 4) < *(byte *)(pLong_22 + 4))) {
LAB_180210094:
        func_0x18020f0d0(pLong_17,pLong_22);
      }
    }
    do {
      pLong_22 = pLong_17;
      if (pLong_22 <= param_1) break;
      pLong_17 = pLong_22 + -0xe;
    } while (*(char *)(pLong_22 + 4) == *(char *)(pLong_22 + -10));
    pLong_17 = (int64_t *)((int64_t)param_1 + lVal_20);
    do {
      pLong_16 = pLong_17 + 0xe;
      pLong_19 = pLong_22;
      pLong_18 = pLong_16;
      if (param_2 <= pLong_16) break;
      pLong_1 = pLong_17 + 0x12;
      pLong_17 = pLong_16;
    } while (*(char *)(pLong_22 + 4) == *(char *)pLong_1);
LAB_1802100f8:
    if (pLong_18 < param_2) {
      if (*(byte *)(pLong_18 + 4) <= *(byte *)(pLong_19 + 4)) {
        if (*(byte *)(pLong_18 + 4) < *(byte *)(pLong_19 + 4)) goto joined_r0x000180210122;
        if (pLong_18 != pLong_16) {
          func_0x18020f0d0(pLong_16,pLong_18);
        }
        pLong_16 = pLong_16 + 0xe;
      }
      pLong_18 = pLong_18 + 0xe;
      goto LAB_1802100f8;
    }
joined_r0x000180210122:
    while (pLong_17 = pLong_22, param_1 < pLong_17) {
      pLong_22 = pLong_17 + -0xe;
      if (*(byte *)(pLong_19 + 4) <= *(byte *)(pLong_17 + -10)) {
        if (*(byte *)(pLong_19 + 4) < *(byte *)(pLong_17 + -10)) break;
        pLong_1 = pLong_19 + -0xe;
        bFlag_24 = pLong_17 != pLong_19;
        pLong_19 = pLong_1;
        if (bFlag_24) {
          func_0x18020f0d0(pLong_1,pLong_22);
        }
      }
    }
    if ((pLong_18 != param_2) || (pLong_17 != param_1)) {
      if (pLong_17 == param_1) {
        if (pLong_16 != pLong_18) {
          func_0x18020f0d0(pLong_19,pLong_16);
        }
        pLong_16 = pLong_16 + 0xe;
        func_0x18020f0d0(pLong_19,pLong_18);
        pLong_22 = param_1;
        pLong_19 = pLong_19 + 0xe;
        pLong_18 = pLong_18 + 0xe;
      }
      else {
        pLong_22 = pLong_17 + -0xe;
        if (pLong_18 == param_2) {
          pLong_1 = pLong_19 + -0xe;
          if (pLong_17 != pLong_19) {
            func_0x18020f0d0(pLong_22,pLong_1);
          }
          pLong_16 = pLong_16 + -0xe;
          func_0x18020f0d0(pLong_1,pLong_16);
          pLong_19 = pLong_1;
        }
        else {
          func_0x18020f0d0(pLong_18,pLong_22);
          pLong_18 = pLong_18 + 0xe;
        }
      }
      goto LAB_1802100f8;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((int64_t)pLong_19 - (int64_t)param_1 < (int64_t)local_48 - (int64_t)pLong_16) {
      func_0x18020fa40(param_1,pLong_19,param_3);
      pLong_19 = param_2;
      param_1 = pLong_16;
    }
    else {
      func_0x18020fa40(pLong_16,param_2,param_3);
    }
    param_2 = pLong_19;
    uVal_21 = (int64_t)pLong_19 - (int64_t)param_1;
  }
  if ((param_1 != param_2) && (param_1 + 0xe != param_2)) {
    lVal_20 = 0;
    pLong_17 = param_1 + 0xe;
    pLong_22 = param_1;
    do {
      pLong_19 = pLong_17;
      local_c8._0_4_ = *(uint *)pLong_19;
      local_c8._4_4_ = *(uint32_t *)((int64_t)pLong_19 + 4);
      uStack_c0 = *(uint32_t *)(pLong_19 + 1);
      uStack_bc = *(uint32_t *)((int64_t)pLong_19 + 0xc);
      local_b8 = pLong_19[2];
      uStack_b0 = pLong_19[3];
      pLong_22[0x10] = 0;
      pLong_22[0x11] = 0xf;
      *(uint8_t *)(pLong_22 + 0xe) = 0;
      local_a8 = *(byte *)(pLong_22 + 0x12);
      local_68 = (int64_t *)0x0;
      pLong_17 = (int64_t *)pLong_22[0x1a];
      if (pLong_17 != (int64_t *)0x0) {
        if (pLong_17 == pLong_22 + 0x13) {
          local_68 = (int64_t *)(**(func_ptr_t *)(*pLong_17 + 8))(pLong_17,local_a0);
          pLong_17 = (int64_t *)pLong_22[0x1a];
          if (pLong_17 == (int64_t *)0x0) goto LAB_18020fb56;
          (**(func_ptr_t *)(*pLong_17 + 0x20))(pLong_17,pLong_17 != pLong_22 + 0x13);
          pLong_17 = local_68;
        }
        local_68 = pLong_17;
        pLong_22[0x1a] = 0;
      }
LAB_18020fb56:
      local_60 = pLong_22[0x1b];
      lVal_23 = lVal_20;
      do {
        pLong_17 = (int64_t *)((int64_t)param_1 + lVal_23 + 0x70);
        bFlag_13 = *(byte *)((int64_t)param_1 + lVal_23 + 0x20);
        if (bFlag_13 <= local_a8) break;
        pU64_2 = (uint32_t *)((int64_t)param_1 + lVal_23);
        uVal_21 = *(uint64_t *)((int64_t)param_1 + lVal_23 + 0x88);
        if (0xf < uVal_21) {
          lVal_15 = *pLong_17;
          uVal_10 = uVal_21 + 1;
          lVal_14 = lVal_15;
          if (0xfff < uVal_10) {
            lVal_14 = *(int64_t *)(lVal_15 + -8);
            if (0x1f < (uint64_t)((lVal_15 + -8) - lVal_14)) goto LAB_180210604;
            uVal_10 = uVal_21 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_14,uVal_10);
          bFlag_13 = *(byte *)(pU64_2 + 8);
        }
        uVal_3 = pU64_2[1];
        uVal_4 = pU64_2[2];
        uVal_5 = pU64_2[3];
        uVal_6 = pU64_2[5];
        uVal_7 = pU64_2[6];
        uVal_8 = pU64_2[7];
        *(uint32_t *)((int64_t)param_1 + lVal_23 + 0x80) = pU64_2[4];
        *(uint32_t *)((int64_t)param_1 + lVal_23 + 0x84) = uVal_6;
        *(uint32_t *)((int64_t)param_1 + lVal_23 + 0x88) = uVal_7;
        *(uint32_t *)((int64_t)param_1 + lVal_23 + 0x8c) = uVal_8;
        *(uint32_t *)pLong_17 = *pU64_2;
        *(uint32_t *)((int64_t)param_1 + lVal_23 + 0x74) = uVal_3;
        *(uint32_t *)((int64_t)param_1 + lVal_23 + 0x78) = uVal_4;
        *(uint32_t *)((int64_t)param_1 + lVal_23 + 0x7c) = uVal_5;
        *(uint64_t *)((int64_t)param_1 + lVal_23 + 0x10) = 0;
        *(uint64_t *)((int64_t)param_1 + lVal_23 + 0x18) = 0xf;
        *(uint8_t *)((int64_t)param_1 + lVal_23) = 0;
        *(byte *)((int64_t)param_1 + lVal_23 + 0x90) = bFlag_13;
        pLong_22 = (int64_t *)((int64_t)param_1 + lVal_23 + 0x98);
        pLong_17 = *(int64_t **)((int64_t)param_1 + lVal_23 + 0xd0);
        if (pLong_17 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*pLong_17 + 0x20))(pLong_17,pLong_22 != pLong_17);
          *(uint64_t *)((int64_t)param_1 + lVal_23 + 0xd0) = 0;
        }
        pLong_17 = *(int64_t **)((int64_t)param_1 + lVal_23 + 0x60);
        if (pLong_17 != (int64_t *)0x0) {
          pLong_18 = (int64_t *)((int64_t)param_1 + lVal_23 + 0x28);
          if (pLong_18 == pLong_17) {
            uVal_11 = (**(func_ptr_t *)(*pLong_17 + 8))(pLong_17,pLong_22);
            *(uint64_t *)((int64_t)param_1 + lVal_23 + 0xd0) = uVal_11;
            pLong_17 = *(int64_t **)((int64_t)param_1 + lVal_23 + 0x60);
            if (pLong_17 == (int64_t *)0x0) goto LAB_18020fb81;
            (**(func_ptr_t *)(*pLong_17 + 0x20))(pLong_17,pLong_18 != pLong_17);
          }
          else {
            *(int64_t **)((int64_t)param_1 + lVal_23 + 0xd0) = pLong_17;
          }
          *(uint64_t *)((int64_t)param_1 + lVal_23 + 0x60) = 0;
        }
LAB_18020fb81:
        *(uint64_t *)((int64_t)param_1 + lVal_23 + 0xd8) =
             *(uint64_t *)((int64_t)param_1 + lVal_23 + 0x68);
        lVal_23 = lVal_23 + -0x70;
        pLong_17 = param_1;
      } while (lVal_23 != -0x70);
      if (pLong_17 == &local_c8) {
        *(byte *)(pLong_17 + 4) = local_a8;
        pLong_17[0xd] = local_60;
        if (local_68 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*local_68 + 0x20))(local_68,local_68 != local_a0);
          local_68 = (int64_t *)0x0;
        }
      }
      else {
        uVal_21 = pLong_17[3];
        if (0xf < uVal_21) {
          lVal_23 = *pLong_17;
          uVal_10 = uVal_21 + 1;
          lVal_15 = lVal_23;
          if (0xfff < uVal_10) {
            lVal_15 = *(int64_t *)(lVal_23 + -8);
            if (0x1f < (uint64_t)((lVal_23 + -8) - lVal_15)) {
LAB_180210604:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_10 = uVal_21 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_15,uVal_10);
        }
        pLong_17[2] = 0;
        pLong_17[3] = 0xf;
        *(uint8_t *)pLong_17 = 0;
        *(uint32_t *)(pLong_17 + 2) = (uint32_t)local_b8;
        *(uint32_t *)((int64_t)pLong_17 + 0x14) = local_b8._4_4_;
        *(uint32_t *)(pLong_17 + 3) = (uint32_t)uStack_b0;
        *(uint32_t *)((int64_t)pLong_17 + 0x1c) = uStack_b0._4_4_;
        *(uint *)pLong_17 = (uint)local_c8;
        *(uint32_t *)((int64_t)pLong_17 + 4) = local_c8._4_4_;
        *(uint32_t *)(pLong_17 + 1) = uStack_c0;
        *(uint32_t *)((int64_t)pLong_17 + 0xc) = uStack_bc;
        local_b8 = 0;
        uStack_b0 = 0xf;
        local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
        *(byte *)(pLong_17 + 4) = local_a8;
        pLong_22 = (int64_t *)pLong_17[0xc];
        if (pLong_22 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*pLong_22 + 0x20))(pLong_22,pLong_22 != pLong_17 + 5);
          pLong_17[0xc] = 0;
        }
        if (local_68 != (int64_t *)0x0) {
          if (local_68 == local_a0) {
            lVal_23 = (**(func_ptr_t *)(*local_68 + 8))(local_68,pLong_17 + 5);
            pLong_17[0xc] = lVal_23;
            if (local_68 == (int64_t *)0x0) goto LAB_18020fe16;
            (**(func_ptr_t *)(*local_68 + 0x20))(local_68,local_68 != local_a0);
          }
          else {
            pLong_17[0xc] = (int64_t)local_68;
          }
          local_68 = (int64_t *)0x0;
        }
LAB_18020fe16:
        pLong_17[0xd] = local_60;
      }
      if (0xf < uStack_b0) {
        lVal_15 = CONCAT44(local_c8._4_4_,(uint)local_c8);
        uVal_21 = uStack_b0 + 1;
        lVal_23 = lVal_15;
        if (0xfff < uVal_21) {
          lVal_23 = *(int64_t *)(lVal_15 + -8);
          if (0x1f < (uint64_t)((lVal_15 + -8) - lVal_23)) goto LAB_180210604;
          uVal_21 = uStack_b0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_23,uVal_21);
      }
      lVal_20 = lVal_20 + 0x70;
      pLong_17 = pLong_19 + 0xe;
      pLong_22 = pLong_19;
    } while (pLong_19 + 0xe != param_2);
  }
  return;
  while (uVal_10 = uVal_10 - 1, pLong_17 = pLong_19, 1 < uVal_10) {
LAB_180210296:
    pLong_19 = pLong_17 + -0xe;
    local_c8._0_4_ = *(uint *)pLong_19;
    local_c8._4_4_ = *(uint32_t *)((int64_t)pLong_17 + -0x6c);
    uStack_c0 = *(uint32_t *)(pLong_17 + -0xd);
    uStack_bc = *(uint32_t *)((int64_t)pLong_17 + -100);
    local_b8 = pLong_17[-0xc];
    uStack_b0 = pLong_17[-0xb];
    pLong_17[-0xc] = 0;
    pLong_17[-0xb] = 0xf;
    *(uint8_t *)pLong_19 = 0;
    local_a8 = *(byte *)(pLong_17 + -10);
    local_68 = (int64_t *)0x0;
    pLong_22 = (int64_t *)pLong_17[-2];
    if (pLong_22 != (int64_t *)0x0) {
      if (pLong_17 + -9 == pLong_22) {
        local_68 = (int64_t *)(**(func_ptr_t *)(*pLong_22 + 8))(pLong_22,local_a0);
        pLong_22 = (int64_t *)pLong_17[-2];
        if (pLong_22 == (int64_t *)0x0) goto LAB_180210320;
        (**(func_ptr_t *)(*pLong_22 + 0x20))(pLong_22,pLong_17 + -9 != pLong_22);
        pLong_22 = local_68;
      }
      local_68 = pLong_22;
      pLong_17[-2] = 0;
    }
LAB_180210320:
    local_60 = pLong_17[-1];
    func_0x180210620(param_1,uVal_10 - 2,uVal_21 / 0x70,&local_c8);
    if (local_68 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_68 + 0x20))(local_68,local_68 != local_a0);
      local_68 = (int64_t *)0x0;
    }
    if (0xf < uStack_b0) {
      lVal_23 = CONCAT44(local_c8._4_4_,(uint)local_c8);
      uVal_12 = uStack_b0 + 1;
      lVal_20 = lVal_23;
      if (0xfff < uVal_12) {
        lVal_20 = *(int64_t *)(lVal_23 + -8);
        if (0x1f < (uint64_t)((lVal_23 + -8) - lVal_20)) goto LAB_180210604;
        uVal_12 = uStack_b0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_12);
    }
  }
  lVal_20 = (int64_t)param_2 - (int64_t)param_1;
  pLong_17 = param_2;
  do {
    pLong_22 = pLong_17 + -0xe;
    if (0xdf < uVal_21) {
      local_c8._0_4_ = *(uint *)pLong_22;
      local_c8._4_4_ = *(uint32_t *)((int64_t)pLong_17 + -0x6c);
      uStack_c0 = *(uint32_t *)(pLong_17 + -0xd);
      uStack_bc = *(uint32_t *)((int64_t)pLong_17 + -100);
      local_b8 = pLong_17[-0xc];
      uStack_b0 = pLong_17[-0xb];
      pLong_17[-0xc] = 0;
      pLong_17[-0xb] = 0xf;
      *(uint8_t *)pLong_22 = 0;
      local_a8 = *(byte *)(pLong_17 + -10);
      pLong_19 = pLong_17 + -9;
      local_68 = (int64_t *)0x0;
      pLong_18 = (int64_t *)pLong_17[-2];
      if (pLong_18 != (int64_t *)0x0) {
        if (pLong_19 == pLong_18) {
          local_68 = (int64_t *)(**(func_ptr_t *)(*pLong_18 + 8))(pLong_18,local_a0);
          pLong_18 = (int64_t *)pLong_17[-2];
          if (pLong_18 == (int64_t *)0x0) goto LAB_180210480;
          (**(func_ptr_t *)(*pLong_18 + 0x20))(pLong_18,pLong_19 != pLong_18);
          pLong_18 = local_68;
        }
        local_68 = pLong_18;
        pLong_17[-2] = 0;
      }
LAB_180210480:
      local_60 = pLong_17[-1];
      if (pLong_22 == param_1) {
        *(uint8_t *)(pLong_17 + -10) = *(uint8_t *)(param_1 + 4);
      }
      else {
        uVal_21 = pLong_17[-0xb];
        if (0xf < uVal_21) {
          lVal_23 = *pLong_22;
          uVal_10 = uVal_21 + 1;
          lVal_15 = lVal_23;
          if (0xfff < uVal_10) {
            lVal_15 = *(int64_t *)(lVal_23 + -8);
            if (0x1f < (uint64_t)((lVal_23 + -8) - lVal_15)) goto LAB_180210604;
            uVal_10 = uVal_21 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_15,uVal_10);
        }
        pLong_17[-0xc] = 0;
        pLong_17[-0xb] = 0xf;
        *(uint8_t *)pLong_22 = 0;
        uVal_3 = *(uint32_t *)param_1;
        uVal_4 = *(uint32_t *)((int64_t)param_1 + 4);
        uVal_5 = *(uint32_t *)(param_1 + 1);
        uVal_6 = *(uint32_t *)((int64_t)param_1 + 0xc);
        uVal_7 = *(uint32_t *)((int64_t)param_1 + 0x14);
        uVal_8 = *(uint32_t *)(param_1 + 3);
        uVal_9 = *(uint32_t *)((int64_t)param_1 + 0x1c);
        *(uint32_t *)(pLong_17 + -0xc) = *(uint32_t *)(param_1 + 2);
        *(uint32_t *)((int64_t)pLong_17 + -0x5c) = uVal_7;
        *(uint32_t *)(pLong_17 + -0xb) = uVal_8;
        *(uint32_t *)((int64_t)pLong_17 + -0x54) = uVal_9;
        *(uint32_t *)pLong_22 = uVal_3;
        *(uint32_t *)((int64_t)pLong_17 + -0x6c) = uVal_4;
        *(uint32_t *)(pLong_17 + -0xd) = uVal_5;
        *(uint32_t *)((int64_t)pLong_17 + -100) = uVal_6;
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(uint8_t *)param_1 = 0;
        *(uint8_t *)(pLong_17 + -10) = *(uint8_t *)(param_1 + 4);
        pLong_18 = (int64_t *)pLong_17[-2];
        if (pLong_18 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*pLong_18 + 0x20))(pLong_18,pLong_19 != pLong_18);
          pLong_17[-2] = 0;
        }
        pLong_18 = (int64_t *)param_1[0xc];
        if (pLong_18 != (int64_t *)0x0) {
          if (pLong_18 == param_1 + 5) {
            lVal_23 = (**(func_ptr_t *)(*pLong_18 + 8))(pLong_18,pLong_19);
            pLong_17[-2] = lVal_23;
            pLong_19 = (int64_t *)param_1[0xc];
            if (pLong_19 == (int64_t *)0x0) goto LAB_180210575;
            (**(func_ptr_t *)(*pLong_19 + 0x20))(pLong_19,pLong_19 != param_1 + 5);
          }
          else {
            pLong_17[-2] = (int64_t)pLong_18;
          }
          param_1[0xc] = 0;
        }
      }
LAB_180210575:
      pLong_17[-1] = param_1[0xd];
      func_0x180210620(param_1,0,(lVal_20 + -0x70 >> 4) * 0x6db6db6db6db6db7,&local_c8);
      if (local_68 != (int64_t *)0x0) {
        (**(func_ptr_t *)(*local_68 + 0x20))();
        local_68 = (int64_t *)0x0;
      }
      if (0xf < uStack_b0) {
        lVal_15 = CONCAT44(local_c8._4_4_,(uint)local_c8);
        lVal_23 = lVal_15;
        if ((0xfff < uStack_b0 + 1) &&
           (lVal_23 = *(int64_t *)(lVal_15 + -8), 0x1f < (uint64_t)((lVal_15 + -8) - lVal_23)))
        goto LAB_180210604;
        thunk_FUN_180695dd0(lVal_23);
      }
    }
    param_2 = param_2 + -0xe;
    uVal_21 = (int64_t)param_2 - (int64_t)param_1;
    lVal_20 = lVal_20 + -0x70;
    pLong_17 = pLong_22;
    if (lVal_20 < 0x71) {
      return;
    }
  } while( true );
}

// func_0x180210620
void func_0x180210620(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
{
  int64_t *pLong_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  byte bFlag_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  int64_t *pLong_16;
  uint64_t uVal_17;
  uint32_t *pU64_18;
  
  uVal_17 = param_3 - 1;
  uVal_14 = (int64_t)uVal_17 >> 1;
  uVal_12 = param_2;
  uVal_15 = param_2;
  if ((int64_t)param_2 < (int64_t)uVal_14) {
    do {
      uVal_12 = uVal_15 * 2 + 2;
      lVal_10 = uVal_12 * 0x70;
      if (*(byte *)(param_1 + 0x20 + lVal_10) < *(byte *)(param_1 + -0x50 + lVal_10)) {
        uVal_12 = uVal_15 * 2 + 1;
        lVal_13 = -0x70;
      }
      else {
        lVal_13 = 0;
      }
      pU64_18 = (uint32_t *)(param_1 + lVal_10 + lVal_13);
      pLong_16 = (int64_t *)(param_1 + uVal_15 * 0x70);
      if (uVal_15 * 0x70 - (lVal_13 + lVal_10) == 0) {
        *(uint8_t *)(pLong_16 + 4) = *(uint8_t *)(pU64_18 + 8);
      }
      else {
        uVal_15 = pLong_16[3];
        if (0xf < uVal_15) {
          lVal_10 = *pLong_16;
          uVal_11 = uVal_15 + 1;
          lVal_13 = lVal_10;
          if (0xfff < uVal_11) {
            lVal_13 = *(int64_t *)(lVal_10 + -8);
            if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_13)) goto LAB_180210b63;
            uVal_11 = uVal_15 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_11);
        }
        pLong_16[2] = 0;
        pLong_16[3] = 0xf;
        *(uint8_t *)pLong_16 = 0;
        uVal_2 = *pU64_18;
        uVal_3 = pU64_18[1];
        uVal_4 = pU64_18[2];
        uVal_5 = pU64_18[3];
        uVal_6 = pU64_18[5];
        uVal_7 = pU64_18[6];
        uVal_8 = pU64_18[7];
        *(uint32_t *)(pLong_16 + 2) = pU64_18[4];
        *(uint32_t *)((int64_t)pLong_16 + 0x14) = uVal_6;
        *(uint32_t *)(pLong_16 + 3) = uVal_7;
        *(uint32_t *)((int64_t)pLong_16 + 0x1c) = uVal_8;
        *(uint32_t *)pLong_16 = uVal_2;
        *(uint32_t *)((int64_t)pLong_16 + 4) = uVal_3;
        *(uint32_t *)(pLong_16 + 1) = uVal_4;
        *(uint32_t *)((int64_t)pLong_16 + 0xc) = uVal_5;
        *(uint64_t *)(pU64_18 + 4) = 0;
        *(uint64_t *)(pU64_18 + 6) = 0xf;
        *(uint8_t *)pU64_18 = 0;
        *(uint8_t *)(pLong_16 + 4) = *(uint8_t *)(pU64_18 + 8);
        pLong_1 = (int64_t *)pLong_16[0xc];
        if (pLong_1 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != pLong_16 + 5);
          pLong_16[0xc] = 0;
        }
        pLong_1 = *(int64_t **)(pU64_18 + 0x18);
        if (pLong_1 != (int64_t *)0x0) {
          if (pLong_1 == (int64_t *)(pU64_18 + 10)) {
            lVal_10 = (**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,pLong_16 + 5);
            pLong_16[0xc] = lVal_10;
            pLong_1 = *(int64_t **)(pU64_18 + 0x18);
            if (pLong_1 == (int64_t *)0x0) goto LAB_180210669;
            (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(pU64_18 + 10));
          }
          else {
            pLong_16[0xc] = (int64_t)pLong_1;
          }
          *(uint64_t *)(pU64_18 + 0x18) = 0;
        }
      }
LAB_180210669:
      pLong_16[0xd] = *(int64_t *)(pU64_18 + 0x1a);
      uVal_15 = uVal_12;
    } while ((int64_t)uVal_12 < (int64_t)uVal_14);
  }
  if (((param_3 & 1) == 0) && (uVal_12 == uVal_14)) {
    pU64_18 = (uint32_t *)(uVal_17 * 0x70 + param_1);
    pLong_16 = (int64_t *)(uVal_14 * 0x70 + param_1);
    if (uVal_14 == uVal_17) {
      *(uint8_t *)(pLong_16 + 4) = *(uint8_t *)(pU64_18 + 8);
    }
    else {
      uVal_12 = pLong_16[3];
      if (0xf < uVal_12) {
        lVal_10 = *pLong_16;
        uVal_15 = uVal_12 + 1;
        lVal_13 = lVal_10;
        if (0xfff < uVal_15) {
          lVal_13 = *(int64_t *)(lVal_10 + -8);
          if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_13)) goto LAB_180210b63;
          uVal_15 = uVal_12 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_13,uVal_15);
      }
      pLong_16[2] = 0;
      pLong_16[3] = 0xf;
      *(uint8_t *)pLong_16 = 0;
      uVal_2 = *pU64_18;
      uVal_3 = pU64_18[1];
      uVal_4 = pU64_18[2];
      uVal_5 = pU64_18[3];
      uVal_6 = pU64_18[5];
      uVal_7 = pU64_18[6];
      uVal_8 = pU64_18[7];
      *(uint32_t *)(pLong_16 + 2) = pU64_18[4];
      *(uint32_t *)((int64_t)pLong_16 + 0x14) = uVal_6;
      *(uint32_t *)(pLong_16 + 3) = uVal_7;
      *(uint32_t *)((int64_t)pLong_16 + 0x1c) = uVal_8;
      *(uint32_t *)pLong_16 = uVal_2;
      *(uint32_t *)((int64_t)pLong_16 + 4) = uVal_3;
      *(uint32_t *)(pLong_16 + 1) = uVal_4;
      *(uint32_t *)((int64_t)pLong_16 + 0xc) = uVal_5;
      *(uint64_t *)(pU64_18 + 4) = 0;
      *(uint64_t *)(pU64_18 + 6) = 0xf;
      *(uint8_t *)pU64_18 = 0;
      *(uint8_t *)(pLong_16 + 4) = *(uint8_t *)(pU64_18 + 8);
      pLong_1 = (int64_t *)pLong_16[0xc];
      if (pLong_1 != (int64_t *)0x0) {
        (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != pLong_16 + 5);
        pLong_16[0xc] = 0;
      }
      pLong_1 = *(int64_t **)(pU64_18 + 0x18);
      if (pLong_1 != (int64_t *)0x0) {
        if (pLong_1 == (int64_t *)(pU64_18 + 10)) {
          lVal_10 = (**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,pLong_16 + 5);
          pLong_16[0xc] = lVal_10;
          pLong_1 = *(int64_t **)(pU64_18 + 0x18);
          if (pLong_1 == (int64_t *)0x0) goto LAB_1802108e5;
          (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(pU64_18 + 10));
        }
        else {
          pLong_16[0xc] = (int64_t)pLong_1;
        }
        *(uint64_t *)(pU64_18 + 0x18) = 0;
      }
    }
LAB_1802108e5:
    pLong_16[0xd] = *(int64_t *)(pU64_18 + 0x1a);
    uVal_12 = uVal_17;
  }
  if ((int64_t)param_2 < (int64_t)uVal_12) {
    do {
      uVal_17 = uVal_12 - 1 >> 1;
      bFlag_9 = *(byte *)(param_1 + 0x20 + uVal_17 * 0x70);
      if (*(byte *)(param_4 + 4) <= bFlag_9) break;
      pU64_18 = (uint32_t *)(uVal_17 * 0x70 + param_1);
      pLong_16 = (int64_t *)(uVal_12 * 0x70 + param_1);
      if (uVal_12 == uVal_17) {
        *(byte *)(pLong_16 + 4) = bFlag_9;
      }
      else {
        uVal_12 = pLong_16[3];
        if (0xf < uVal_12) {
          lVal_10 = *pLong_16;
          uVal_15 = uVal_12 + 1;
          lVal_13 = lVal_10;
          if (0xfff < uVal_15) {
            lVal_13 = *(int64_t *)(lVal_10 + -8);
            if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_13)) goto LAB_180210b63;
            uVal_15 = uVal_12 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_15);
          bFlag_9 = *(byte *)(pU64_18 + 8);
        }
        pLong_16[2] = 0;
        pLong_16[3] = 0xf;
        *(uint8_t *)pLong_16 = 0;
        uVal_2 = *pU64_18;
        uVal_3 = pU64_18[1];
        uVal_4 = pU64_18[2];
        uVal_5 = pU64_18[3];
        uVal_6 = pU64_18[5];
        uVal_7 = pU64_18[6];
        uVal_8 = pU64_18[7];
        *(uint32_t *)(pLong_16 + 2) = pU64_18[4];
        *(uint32_t *)((int64_t)pLong_16 + 0x14) = uVal_6;
        *(uint32_t *)(pLong_16 + 3) = uVal_7;
        *(uint32_t *)((int64_t)pLong_16 + 0x1c) = uVal_8;
        *(uint32_t *)pLong_16 = uVal_2;
        *(uint32_t *)((int64_t)pLong_16 + 4) = uVal_3;
        *(uint32_t *)(pLong_16 + 1) = uVal_4;
        *(uint32_t *)((int64_t)pLong_16 + 0xc) = uVal_5;
        *(uint64_t *)(pU64_18 + 4) = 0;
        *(uint64_t *)(pU64_18 + 6) = 0xf;
        *(uint8_t *)pU64_18 = 0;
        *(byte *)(pLong_16 + 4) = bFlag_9;
        pLong_1 = (int64_t *)pLong_16[0xc];
        if (pLong_1 != (int64_t *)0x0) {
          (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != pLong_16 + 5);
          pLong_16[0xc] = 0;
        }
        pLong_1 = *(int64_t **)(pU64_18 + 0x18);
        if (pLong_1 != (int64_t *)0x0) {
          if (pLong_1 == (int64_t *)(pU64_18 + 10)) {
            lVal_10 = (**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,pLong_16 + 5);
            pLong_16[0xc] = lVal_10;
            pLong_1 = *(int64_t **)(pU64_18 + 0x18);
            if (pLong_1 == (int64_t *)0x0) goto LAB_1802109d4;
            (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(pU64_18 + 10));
          }
          else {
            pLong_16[0xc] = (int64_t)pLong_1;
          }
          *(uint64_t *)(pU64_18 + 0x18) = 0;
        }
      }
LAB_1802109d4:
      pLong_16[0xd] = *(int64_t *)(pU64_18 + 0x1a);
      uVal_12 = uVal_17;
    } while (param_2 < uVal_17);
  }
  pLong_16 = (int64_t *)(param_1 + uVal_12 * 0x70);
  if (pLong_16 == param_4) {
    *(uint8_t *)(pLong_16 + 4) = *(uint8_t *)(param_4 + 4);
  }
  else {
    uVal_17 = pLong_16[3];
    if (0xf < uVal_17) {
      lVal_10 = *pLong_16;
      uVal_12 = uVal_17 + 1;
      lVal_13 = lVal_10;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_13)) {
LAB_180210b63:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    pLong_16[2] = 0;
    pLong_16[3] = 0xf;
    *(uint8_t *)pLong_16 = 0;
    uVal_2 = *(uint32_t *)param_4;
    uVal_3 = *(uint32_t *)((int64_t)param_4 + 4);
    uVal_4 = *(uint32_t *)(param_4 + 1);
    uVal_5 = *(uint32_t *)((int64_t)param_4 + 0xc);
    uVal_6 = *(uint32_t *)((int64_t)param_4 + 0x14);
    uVal_7 = *(uint32_t *)(param_4 + 3);
    uVal_8 = *(uint32_t *)((int64_t)param_4 + 0x1c);
    *(uint32_t *)(pLong_16 + 2) = *(uint32_t *)(param_4 + 2);
    *(uint32_t *)((int64_t)pLong_16 + 0x14) = uVal_6;
    *(uint32_t *)(pLong_16 + 3) = uVal_7;
    *(uint32_t *)((int64_t)pLong_16 + 0x1c) = uVal_8;
    *(uint32_t *)pLong_16 = uVal_2;
    *(uint32_t *)((int64_t)pLong_16 + 4) = uVal_3;
    *(uint32_t *)(pLong_16 + 1) = uVal_4;
    *(uint32_t *)((int64_t)pLong_16 + 0xc) = uVal_5;
    param_4[2] = 0;
    param_4[3] = 0xf;
    *(uint8_t *)param_4 = 0;
    *(uint8_t *)(pLong_16 + 4) = *(uint8_t *)(param_4 + 4);
    pLong_1 = (int64_t *)pLong_16[0xc];
    if (pLong_1 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != pLong_16 + 5);
      pLong_16[0xc] = 0;
    }
    pLong_1 = (int64_t *)param_4[0xc];
    if (pLong_1 != (int64_t *)0x0) {
      if (pLong_1 == param_4 + 5) {
        lVal_10 = (**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,pLong_16 + 5);
        pLong_16[0xc] = lVal_10;
        pLong_1 = (int64_t *)param_4[0xc];
        if (pLong_1 == (int64_t *)0x0) goto LAB_180210b4a;
        (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_4 + 5);
      }
      else {
        pLong_16[0xc] = (int64_t)pLong_1;
      }
      param_4[0xc] = 0;
    }
  }
LAB_180210b4a:
  pLong_16[0xd] = param_4[0xd];
  return;
}

// func_0x180210ce0
void func_0x180210ce0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x46] = 1;
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
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  return;
}

// func_0x180210f40
void func_0x180210f40(int64_t *param_1,int64_t *param_2)
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint8_t auStack_78 [32];
  int64_t local_58 [7];
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  pLong_1 = (int64_t *)param_1[7];
  if (pLong_1 == param_1) {
    local_20 = (int64_t *)0x0;
    local_20 = (int64_t *)(**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,local_58);
    pLong_1 = (int64_t *)param_1[7];
    if (pLong_1 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_1);
      pLong_1 = local_20;
LAB_180210fbd:
      local_20 = pLong_1;
      param_1[7] = 0;
    }
  }
  else {
    if ((int64_t *)param_2[7] != param_2) {
      param_1[7] = (int64_t)(int64_t *)param_2[7];
      param_2[7] = (int64_t)pLong_1;
      goto LAB_180211049;
    }
    local_20 = (int64_t *)0x0;
    if (pLong_1 != (int64_t *)0x0) goto LAB_180210fbd;
  }
  pLong_1 = (int64_t *)param_2[7];
  if (pLong_1 != (int64_t *)0x0) {
    if (pLong_1 == param_2) {
      lVal_3 = (**(func_ptr_t *)(*pLong_1 + 8))(pLong_1,param_1);
      param_1[7] = lVal_3;
      pLong_1 = (int64_t *)param_2[7];
      if (pLong_1 == (int64_t *)0x0) goto LAB_180211003;
      (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != param_2);
    }
    else {
      param_1[7] = (int64_t)pLong_1;
    }
    param_2[7] = 0;
  }
LAB_180211003:
  if (local_20 != (int64_t *)0x0) {
    if (local_20 == local_58) {
      lVal_3 = (**(func_ptr_t *)(*local_20 + 8))(local_20,param_2);
      param_2[7] = lVal_3;
      if (local_20 == (int64_t *)0x0) goto LAB_180211049;
      (**(func_ptr_t *)(*local_20 + 0x20))(local_20,local_20 != local_58);
    }
    else {
      param_2[7] = (int64_t)local_20;
    }
    local_20 = (int64_t *)0x0;
  }
LAB_180211049:
  if (DAT_18083cf40 != (local_18 ^ (uint64_t)auStack_78)) {
    func_0x180673080(local_18 ^ (uint64_t)auStack_78);
    fnPtr_2 = (func_ptr_t )swi(3);
    (*fnPtr_2)();
    return;
  }
  return;
}

// func_0x180211160
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180211160(char *param_1,double *param_2)
{
  char ch_1;
  func_ptr_t fnPtr_2;
  double dVal_3;
  uint8_t local_80 [56];
  uint8_t local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  ch_1 = *param_1;
  if (ch_1 == '\x05') {
    dVal_3 = (double)*(int64_t *)(param_1 + 8);
  }
  else if (ch_1 == '\a') {
    dVal_3 = *(double *)(param_1 + 8);
  }
  else {
    if (ch_1 != '\x06') {
      local_28 = func_0x1800833d0();
      func_0x180083260(local_48,"type must be number, but is ",&local_28);
      func_0x180082f00(local_80,0x12e,local_48,param_1);
      func_0x18067a120(local_80,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      (*fnPtr_2)();
      return;
    }
    dVal_3 = ((double)CONCAT44(_UNK_1806bb344,(int)((uint64_t)*(uint64_t *)(param_1 + 8) >> 0x20))
            - _UNK_1806bb358) +
            ((double)CONCAT44(_DAT_1806bb340,(int)*(uint64_t *)(param_1 + 8)) - _DAT_1806bb350);
  }
  *param_2 = dVal_3;
  return;
}

// Unwind@180211220
void Unwind_180211220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x180211250
void func_0x180211250(char *param_1,int64_t *param_2)
{
  char ch_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint8_t local_80 [56];
  uint8_t local_48 [32];
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  ch_1 = *param_1;
  if (ch_1 != '\x05') {
    if (ch_1 == '\a') {
      lVal_3 = (int64_t)*(double *)(param_1 + 8);
      goto LAB_180211288;
    }
    if (ch_1 != '\x06') {
      local_28 = func_0x1800833d0();
      func_0x180083260(local_48,"type must be number, but is ",&local_28);
      func_0x180082f00(local_80,0x12e,local_48,param_1);
      func_0x18067a120(local_80,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      (*fnPtr_2)();
      return;
    }
  }
  lVal_3 = *(int64_t *)(param_1 + 8);
LAB_180211288:
  *param_2 = lVal_3;
  return;
}

// Unwind@1802112e0
void Unwind_1802112e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x180211710
void func_0x180211710(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x44] = 1;
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
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  return;
}

// func_0x180213910
void func_0x180213910(int64_t param_1,uint64_t *param_2,uint32_t *param_3,uint64_t *param_4, uint64_t *param_5)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  
  pU64_1 = *(uint64_t **)(param_1 + 8);
  if (pU64_1 == *(uint64_t **)(param_1 + 0x10)) {
    func_0x180213a20(param_1,pU64_1,param_2,param_3,param_4,param_5);
  }
  else {
    *pU64_1 = *param_5;
    pU64_1[1] = *param_4;
    *(uint32_t *)(pU64_1 + 2) = *param_3;
    *(uint8_t (*)[16])(pU64_1 + 3) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_1 + 5) = ZEXT816(0);
    uVal_2 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((int64_t)uVal_2 < 0) {
      func_0x18007ba70();
      fnPtr_3 = (func_ptr_t )swi(3);
      (*fnPtr_3)();
      return;
    }
    if (uVal_2 < 0x10) {
      pU64_1[5] = uVal_2;
      pU64_1[6] = 0xf;
      uVal_4 = *(uint32_t *)((int64_t)param_2 + 4);
      uVal_5 = *(uint32_t *)(param_2 + 1);
      uVal_6 = *(uint32_t *)((int64_t)param_2 + 0xc);
      *(uint32_t *)(pU64_1 + 3) = *(uint32_t *)param_2;
      *(uint32_t *)((int64_t)pU64_1 + 0x1c) = uVal_4;
      *(uint32_t *)(pU64_1 + 4) = uVal_5;
      *(uint32_t *)((int64_t)pU64_1 + 0x24) = uVal_6;
    }
    else {
      uVal_7 = uVal_2 | 0xf;
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
      pU64_1[3] = uVal_7;
      pU64_1[5] = uVal_2;
      pU64_1[6] = uVal_9;
      func_0x1806aa960(uVal_7,param_2,uVal_2 + 1);
    }
    *(int64_t *)(param_1 + 8) = *(int64_t *)(param_1 + 8) + 0x38;
  }
  return;
}

// func_0x180213a20
int64_t func_0x180213a20(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,uint32_t *param_4, uint64_t *param_5,uint64_t *param_6)
{
  int64_t lVal_1;
  uint32_t *pU64_2;
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
  int64_t lVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  int64_t lVal_22;
  uint64_t *pU64_23;
  uint64_t uVal_24;
  
  uVal_18 = *param_1;
  uVal_19 = ((int64_t)(param_1[1] - uVal_18) >> 3) * 0x6db6db6db6db6db7 + 1;
  uVal_16 = ((int64_t)(param_1[2] - uVal_18) >> 3) * 0x6db6db6db6db6db7;
  uVal_20 = 0x492492492492492 - (uVal_16 >> 1);
  uVal_21 = (uVal_16 >> 1) + uVal_16;
  if (uVal_21 <= uVal_19) {
    uVal_21 = uVal_19;
  }
  if (uVal_20 <= uVal_16 && uVal_16 - uVal_20 != 0) {
    uVal_21 = 0x492492492492492;
  }
  if (0x492492492492492 < uVal_21) {
LAB_180213e83:
    func_0x18007ba90();
LAB_180213e89:
    func_0x18007ba70();
    fnPtr_4 = (func_ptr_t )swi(3);
    lVal_17 = (*fnPtr_4)();
    return lVal_17;
  }
  lVal_17 = uVal_21 * 0x38;
  if (uVal_21 == 0) {
    uVal_16 = 0;
  }
  else if (uVal_21 < 0x4a) {
    uVal_16 = func_0x180672de0();
  }
  else {
    if (uVal_21 == 0x492492492492492) goto LAB_180213e83;
    lVal_12 = func_0x180672de0(lVal_17 + 0x27);
    uVal_16 = lVal_12 + 0x27U & 0xffffffffffffffe0;
    *(int64_t *)(uVal_16 - 8) = lVal_12;
  }
  lVal_13 = param_2 - uVal_18;
  lVal_12 = uVal_16 + lVal_13;
  lVal_22 = lVal_12 + 0x38;
  *(uint64_t *)(uVal_16 + lVal_13) = *param_6;
  *(uint64_t *)(uVal_16 + 8 + lVal_13) = *param_5;
  *(uint32_t *)(uVal_16 + 0x10 + lVal_13) = *param_4;
  *(uint8_t (*)[16])(uVal_16 + 0x18 + lVal_13) = ZEXT816(0);
  *(uint8_t (*)[16])(uVal_16 + 0x28 + lVal_13) = ZEXT816(0);
  uVal_18 = param_3[2];
  if (0xf < (uint64_t)param_3[3]) {
    param_3 = (uint64_t *)*param_3;
  }
  if ((int64_t)uVal_18 < 0) goto LAB_180213e89;
  lVal_1 = uVal_16 + lVal_13;
  if (uVal_18 < 0x10) {
    lVal_13 = lVal_13 + uVal_16;
    *(uint64_t *)(lVal_1 + 0x28) = uVal_18;
    *(uint64_t *)(lVal_1 + 0x30) = 0xf;
    uVal_5 = *(uint32_t *)((int64_t)param_3 + 4);
    uVal_6 = *(uint32_t *)(param_3 + 1);
    uVal_7 = *(uint32_t *)((int64_t)param_3 + 0xc);
    *(uint32_t *)(lVal_13 + 0x18) = *(uint32_t *)param_3;
    *(uint32_t *)(lVal_13 + 0x1c) = uVal_5;
    *(uint32_t *)(lVal_13 + 0x20) = uVal_6;
    *(uint32_t *)(lVal_13 + 0x24) = uVal_7;
  }
  else {
    uVal_15 = uVal_18 | 0xf;
    uVal_20 = 0x16;
    if (0x16 < uVal_15) {
      uVal_20 = uVal_15;
    }
    pU64_23 = param_1;
    uVal_24 = uVal_16;
    lVal_13 = lVal_22;
    if (uVal_15 < 0xfff) {
      uVal_15 = func_0x180672de0(uVal_20 + 1);
    }
    else {
      lVal_14 = func_0x180672de0(uVal_20 + 0x28);
      uVal_15 = lVal_14 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_15 - 8) = lVal_14;
    }
    *(uint64_t *)(lVal_1 + 0x18) = uVal_15;
    *(uint64_t *)(lVal_1 + 0x28) = uVal_18;
    *(uint64_t *)(lVal_1 + 0x30) = uVal_20;
    func_0x1806aa960(uVal_15,param_3,uVal_18 + 1,lVal_1,pU64_23,uVal_24,uVal_21,lVal_13);
  }
  uVal_21 = *param_1;
  uVal_18 = param_1[1];
  if (param_2 == uVal_18) {
    if (uVal_21 == param_2) goto LAB_180213d87;
    lVal_12 = 0;
    do {
      *(uint64_t *)(uVal_16 + lVal_12) = *(uint64_t *)(uVal_21 + lVal_12);
      *(uint64_t *)(uVal_16 + 8 + lVal_12) = *(uint64_t *)(uVal_21 + 8 + lVal_12);
      *(uint32_t *)(uVal_16 + 0x10 + lVal_12) = *(uint32_t *)(uVal_21 + 0x10 + lVal_12);
      *(uint8_t (*)[16])(uVal_16 + 0x28 + lVal_12) = ZEXT816(0);
      *(uint8_t (*)[16])(uVal_16 + 0x18 + lVal_12) = ZEXT816(0);
      pU64_2 = (uint32_t *)(uVal_21 + 0x18 + lVal_12);
      uVal_5 = *pU64_2;
      uVal_6 = pU64_2[1];
      uVal_7 = pU64_2[2];
      uVal_8 = pU64_2[3];
      pU64_2 = (uint32_t *)(uVal_21 + 0x28 + lVal_12);
      uVal_9 = pU64_2[1];
      uVal_10 = pU64_2[2];
      uVal_11 = pU64_2[3];
      pU64_3 = (uint32_t *)(uVal_16 + 0x28 + lVal_12);
      *pU64_3 = *pU64_2;
      pU64_3[1] = uVal_9;
      pU64_3[2] = uVal_10;
      pU64_3[3] = uVal_11;
      pU64_2 = (uint32_t *)(uVal_16 + 0x18 + lVal_12);
      *pU64_2 = uVal_5;
      pU64_2[1] = uVal_6;
      pU64_2[2] = uVal_7;
      pU64_2[3] = uVal_8;
      *(uint64_t *)(uVal_21 + 0x28 + lVal_12) = 0;
      *(uint64_t *)(uVal_21 + 0x30 + lVal_12) = 0xf;
      *(uint8_t *)(uVal_21 + 0x18 + lVal_12) = 0;
      lVal_13 = uVal_21 + lVal_12;
      lVal_12 = lVal_12 + 0x38;
    } while (lVal_13 + 0x38U != param_2);
  }
  else {
    if (uVal_21 != param_2) {
      lVal_13 = 0;
      do {
        *(uint64_t *)(uVal_16 + lVal_13) = *(uint64_t *)(uVal_21 + lVal_13);
        *(uint64_t *)(uVal_16 + 8 + lVal_13) = *(uint64_t *)(uVal_21 + 8 + lVal_13);
        *(uint32_t *)(uVal_16 + 0x10 + lVal_13) = *(uint32_t *)(uVal_21 + 0x10 + lVal_13);
        *(uint8_t (*)[16])(uVal_16 + 0x28 + lVal_13) = ZEXT816(0);
        *(uint8_t (*)[16])(uVal_16 + 0x18 + lVal_13) = ZEXT816(0);
        pU64_2 = (uint32_t *)(uVal_21 + 0x18 + lVal_13);
        uVal_5 = *pU64_2;
        uVal_6 = pU64_2[1];
        uVal_7 = pU64_2[2];
        uVal_8 = pU64_2[3];
        pU64_2 = (uint32_t *)(uVal_21 + 0x28 + lVal_13);
        uVal_9 = pU64_2[1];
        uVal_10 = pU64_2[2];
        uVal_11 = pU64_2[3];
        pU64_3 = (uint32_t *)(uVal_16 + 0x28 + lVal_13);
        *pU64_3 = *pU64_2;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_2 = (uint32_t *)(uVal_16 + 0x18 + lVal_13);
        *pU64_2 = uVal_5;
        pU64_2[1] = uVal_6;
        pU64_2[2] = uVal_7;
        pU64_2[3] = uVal_8;
        *(uint64_t *)(uVal_21 + 0x28 + lVal_13) = 0;
        *(uint64_t *)(uVal_21 + 0x30 + lVal_13) = 0xf;
        *(uint8_t *)(uVal_21 + 0x18 + lVal_13) = 0;
        lVal_14 = uVal_21 + lVal_13;
        lVal_13 = lVal_13 + 0x38;
      } while (lVal_14 + 0x38U != param_2);
      uVal_18 = param_1[1];
    }
    if (param_2 != uVal_18) {
      lVal_13 = 0;
      do {
        *(uint64_t *)(lVal_22 + lVal_13) = *(uint64_t *)(param_2 + lVal_13);
        *(uint64_t *)(lVal_12 + 0x40 + lVal_13) = *(uint64_t *)(param_2 + 8 + lVal_13);
        *(uint32_t *)(lVal_12 + 0x48 + lVal_13) = *(uint32_t *)(param_2 + 0x10 + lVal_13);
        *(uint8_t (*)[16])(lVal_12 + 0x60 + lVal_13) = ZEXT816(0);
        *(uint8_t (*)[16])(lVal_12 + 0x50 + lVal_13) = ZEXT816(0);
        pU64_2 = (uint32_t *)(param_2 + 0x18 + lVal_13);
        uVal_5 = *pU64_2;
        uVal_6 = pU64_2[1];
        uVal_7 = pU64_2[2];
        uVal_8 = pU64_2[3];
        pU64_2 = (uint32_t *)(param_2 + 0x28 + lVal_13);
        uVal_9 = pU64_2[1];
        uVal_10 = pU64_2[2];
        uVal_11 = pU64_2[3];
        pU64_3 = (uint32_t *)(lVal_12 + 0x60 + lVal_13);
        *pU64_3 = *pU64_2;
        pU64_3[1] = uVal_9;
        pU64_3[2] = uVal_10;
        pU64_3[3] = uVal_11;
        pU64_2 = (uint32_t *)(lVal_12 + 0x50 + lVal_13);
        *pU64_2 = uVal_5;
        pU64_2[1] = uVal_6;
        pU64_2[2] = uVal_7;
        pU64_2[3] = uVal_8;
        *(uint64_t *)(param_2 + 0x28 + lVal_13) = 0;
        *(uint64_t *)(param_2 + 0x30 + lVal_13) = 0xf;
        *(uint8_t *)(param_2 + 0x18 + lVal_13) = 0;
        lVal_14 = param_2 + lVal_13;
        lVal_13 = lVal_13 + 0x38;
      } while (lVal_14 + 0x38U != uVal_18);
    }
  }
  uVal_21 = *param_1;
LAB_180213d87:
  if (uVal_21 != 0) {
    uVal_18 = param_1[1];
    if (uVal_21 == uVal_18) {
      uVal_18 = param_1[2] - uVal_21;
    }
    else {
      do {
        uVal_20 = *(uint64_t *)(uVal_21 + 0x30);
        if (0xf < uVal_20) {
          lVal_12 = *(int64_t *)(uVal_21 + 0x18);
          uVal_15 = uVal_20 + 1;
          lVal_13 = lVal_12;
          if (0xfff < uVal_15) {
            lVal_13 = *(int64_t *)(lVal_12 + -8);
            if (0x1f < (uint64_t)((lVal_12 + -8) - lVal_13)) goto LAB_180213e81;
            uVal_15 = uVal_20 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_15);
        }
        *(uint64_t *)(uVal_21 + 0x28) = 0;
        *(uint64_t *)(uVal_21 + 0x30) = 0xf;
        *(uint8_t *)(uVal_21 + 0x18) = 0;
        uVal_21 = uVal_21 + 0x38;
      } while (uVal_21 != uVal_18);
      uVal_21 = *param_1;
      uVal_18 = param_1[2] - uVal_21;
    }
    if (0xfff < uVal_18) {
      if (0x1f < (uVal_21 - 8) - *(uint64_t *)(uVal_21 - 8)) {
LAB_180213e81:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_18 = uVal_18 + 0x27;
      uVal_21 = *(uint64_t *)(uVal_21 - 8);
    }
    thunk_FUN_180695dd0(uVal_21,uVal_18);
  }
  *param_1 = uVal_16;
  param_1[1] = uVal_19 * 0x38 + uVal_16;
  param_1[2] = lVal_17 + uVal_16;
  return lVal_1;
}

// Unwind@180213e90
void Unwind_180213e90(uint64_t param_1,int64_t param_2)
{
  func_0x180213ed0(param_2 + 0x20);
  return;
}

// func_0x180213ed0
void func_0x180213ed0(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  lVal_4 = *(int64_t *)(param_1 + 8);
  if (lVal_4 == 0) {
    return;
  }
  lVal_6 = *(int64_t *)(param_1 + 0x18);
  lVal_1 = *(int64_t *)(param_1 + 0x20);
  if (lVal_6 == lVal_1) {
    lVal_6 = *(int64_t *)(param_1 + 0x10);
  }
  else {
    do {
      uVal_5 = *(uint64_t *)(lVal_6 + 0x30);
      if (0xf < uVal_5) {
        lVal_4 = *(int64_t *)(lVal_6 + 0x18);
        uVal_2 = uVal_5 + 1;
        lVal_3 = lVal_4;
        if (0xfff < uVal_2) {
          lVal_3 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_3)) goto LAB_180213fa8;
          uVal_2 = uVal_5 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_3,uVal_2);
      }
      *(uint64_t *)(lVal_6 + 0x28) = 0;
      *(uint64_t *)(lVal_6 + 0x30) = 0xf;
      *(uint8_t *)(lVal_6 + 0x18) = 0;
      lVal_6 = lVal_6 + 0x38;
    } while (lVal_6 != lVal_1);
    lVal_4 = *(int64_t *)(param_1 + 8);
    lVal_6 = *(int64_t *)(param_1 + 0x10);
  }
  uVal_5 = lVal_6 * 0x38;
  if (0xfff < uVal_5) {
    if (0x1f < (uint64_t)((lVal_4 + -8) - *(int64_t *)(lVal_4 + -8))) {
LAB_180213fa8:
      do {
        invalidInstructionException();
      } while( true );
    }
    uVal_5 = uVal_5 + 0x27;
    lVal_4 = *(int64_t *)(lVal_4 + -8);
  }
  thunk_FUN_180695dd0(lVal_4,uVal_5);
  return;
}

// func_0x180213fe0
uint64_t * func_0x180213fe0(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)
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
  int64_t lVal_11;
  uint64_t *pU64_12;
  uint64_t *pU64_13;
  
  if (param_3 == param_4) goto LAB_180214144;
  pU64_13 = *(uint64_t **)(param_1 + 8);
  pU64_12 = param_3;
  if (pU64_13 == param_4) {
    pU64_13 = param_3;
    if (param_3 != param_4) {
LAB_180214106:
      do {
        uVal_1 = pU64_12[6];
        if (0xf < uVal_1) {
          lVal_2 = pU64_12[3];
          uVal_10 = uVal_1 + 1;
          lVal_11 = lVal_2;
          if (0xfff < uVal_10) {
            lVal_11 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_11)) {
LAB_18021415a:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_10 = uVal_1 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_10);
        }
        pU64_12[5] = 0;
        pU64_12[6] = 0xf;
        *(uint8_t *)(pU64_12 + 3) = 0;
        pU64_12 = pU64_12 + 7;
      } while (pU64_12 != param_4);
    }
  }
  else {
    do {
      if (pU64_12 != param_4) {
        uVal_1 = pU64_12[6];
        if (0xf < uVal_1) {
          lVal_2 = pU64_12[3];
          uVal_10 = uVal_1 + 1;
          lVal_11 = lVal_2;
          if (0xfff < uVal_10) {
            lVal_11 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_11)) goto LAB_18021415a;
            uVal_10 = uVal_1 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_10);
        }
        pU64_12[5] = 0;
        pU64_12[6] = 0xf;
        *(uint8_t *)(pU64_12 + 3) = 0;
        uVal_3 = *(uint32_t *)(param_4 + 3);
        uVal_4 = *(uint32_t *)((int64_t)param_4 + 0x1c);
        uVal_5 = *(uint32_t *)(param_4 + 4);
        uVal_6 = *(uint32_t *)((int64_t)param_4 + 0x24);
        uVal_7 = *(uint32_t *)((int64_t)param_4 + 0x2c);
        uVal_8 = *(uint32_t *)(param_4 + 6);
        uVal_9 = *(uint32_t *)((int64_t)param_4 + 0x34);
        *(uint32_t *)(pU64_12 + 5) = *(uint32_t *)(param_4 + 5);
        *(uint32_t *)((int64_t)pU64_12 + 0x2c) = uVal_7;
        *(uint32_t *)(pU64_12 + 6) = uVal_8;
        *(uint32_t *)((int64_t)pU64_12 + 0x34) = uVal_9;
        *(uint32_t *)(pU64_12 + 3) = uVal_3;
        *(uint32_t *)((int64_t)pU64_12 + 0x1c) = uVal_4;
        *(uint32_t *)(pU64_12 + 4) = uVal_5;
        *(uint32_t *)((int64_t)pU64_12 + 0x24) = uVal_6;
        param_4[5] = 0;
        param_4[6] = 0xf;
        *(uint8_t *)(param_4 + 3) = 0;
      }
      *(uint32_t *)(pU64_12 + 2) = *(uint32_t *)(param_4 + 2);
      pU64_12[1] = param_4[1];
      *pU64_12 = *param_4;
      pU64_12 = pU64_12 + 7;
      param_4 = param_4 + 7;
    } while (param_4 != pU64_13);
    param_4 = *(uint64_t **)(param_1 + 8);
    pU64_13 = pU64_12;
    if (pU64_12 != param_4) goto LAB_180214106;
  }
  *(uint64_t **)(param_1 + 8) = pU64_13;
LAB_180214144:
  *param_2 = param_3;
  return param_2;
}

// func_0x1802148a0
void func_0x1802148a0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x31] = 1;
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
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  return;
}

// func_0x180214ec0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180214ec0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cbc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x89f52b3945a9b135;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x180214ef0
uint32_t * func_0x180214ef0(uint32_t *param_1,uint32_t *param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  
  *param_1 = *param_2;
  *(uint8_t (*)[16])(param_1 + 2) = ZEXT816(0);
  lVal_2 = func_0x180672de0(0x28);
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

// Unwind@180215010
void Unwind_180215010(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x30));
  func_0x18020ecf0(*(uint64_t *)(param_2 + 0x28));
  return;
}

// func_0x180215050
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180215050(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x656173452549d30d;
    param_1[1][8] = param_1[1][8] ^ 0xd;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1802150b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802150b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xbb2103bf0b4d771d;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x180215110
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180215110(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2da4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2da0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2da8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dac;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x19cfe32d;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x180215130
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180215130(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][4] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5604;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5600;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5608;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b560c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xd3c78945;
    param_1[1][4] = 0;
  }
  return;
}

// func_0x180215150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180215150(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2914;
    uVal_2 = param_1[2] ^ _UNK_1806b2918;
    uVal_3 = param_1[3] ^ _UNK_1806b291c;
    *param_1 = *param_1 ^ _DAT_1806b2910;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806b5af0,0);
  }
  return;
}

// func_0x180215230
int64_t ** func_0x180215230(int64_t param_1,int64_t **param_2,int64_t **param_3)
{
  int64_t **ptr2_Long_1;
  int64_t lVal_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  int64_t *pLong_5;
  uint64_t uVal_6;
  int64_t **ptr2_Long_7;
  int64_t **ptr2_Long_8;
  int64_t lVal_9;
  int64_t **ptr2_Long_10;
  
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
  lVal_9 = ((((uint64_t)*(byte *)((int64_t)param_2 + 0x17) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x16) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x15) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 0x14) ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
            (uVal_6 >> 2) + uVal_6 * 0x40 ^ uVal_6) & *(uint64_t *)(param_1 + 0x30)) * 0x10;
  ptr2_Long_4 = *(int64_t ***)(lVal_2 + lVal_9);
  ptr2_Long_7 = *(int64_t ***)(lVal_2 + 8 + lVal_9);
  ptr2_Long_10 = param_2;
  if (ptr2_Long_4 == param_2) {
    do {
      ptr2_Long_8 = (int64_t **)*ptr2_Long_10;
      pLong_5 = ptr2_Long_10[3];
      if (pLong_5 != (int64_t *)0x0) {
        func_0x1800fe9f0(pLong_5);
        thunk_FUN_180695dd0(pLong_5,0x250);
      }
      thunk_FUN_180695dd0(ptr2_Long_10,0x28);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_10 == ptr2_Long_7) goto LAB_1802153b3;
      ptr2_Long_10 = ptr2_Long_8;
    } while (ptr2_Long_8 != param_3);
LAB_1802154ff:
    *(int64_t ***)(lVal_2 + lVal_9) = ptr2_Long_8;
  }
  else {
    do {
      ptr2_Long_8 = (int64_t **)*ptr2_Long_10;
      pLong_5 = ptr2_Long_10[3];
      if (pLong_5 != (int64_t *)0x0) {
        func_0x1800fe9f0(pLong_5);
        thunk_FUN_180695dd0(pLong_5,0x250);
      }
      thunk_FUN_180695dd0(ptr2_Long_10,0x28);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_10 == ptr2_Long_7) goto LAB_1802153b3;
      ptr2_Long_10 = ptr2_Long_8;
    } while (ptr2_Long_8 != param_3);
  }
LAB_180215508:
  *ptr2_Long_3 = (int64_t *)ptr2_Long_8;
  ptr2_Long_8[1] = (int64_t *)ptr2_Long_3;
  return param_3;
LAB_1802153b3:
  ptr2_Long_7 = ptr2_Long_3;
  if (ptr2_Long_4 == param_2) {
    *(int64_t ***)(lVal_2 + lVal_9) = ptr2_Long_1;
    ptr2_Long_7 = ptr2_Long_1;
  }
  *(int64_t ***)(lVal_2 + 8 + lVal_9) = ptr2_Long_7;
  while (ptr2_Long_8 != param_3) {
    uVal_6 = ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x13) ^
            ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x12) ^
            ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x11) ^
            ((uint64_t)*(byte *)(ptr2_Long_8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
    lVal_9 = ((((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x17) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x16) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x15) ^
              ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x14) ^ 0xcbf29ce484222325) * 0x100000001b3)
              * 0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
              (uVal_6 >> 2) + uVal_6 * 0x40 ^ uVal_6) & *(uint64_t *)(param_1 + 0x30)) * 0x10;
    ptr2_Long_4 = *(int64_t ***)(lVal_2 + 8 + lVal_9);
    ptr2_Long_7 = ptr2_Long_8;
    while( true ) {
      ptr2_Long_8 = (int64_t **)*ptr2_Long_7;
      pLong_5 = ptr2_Long_7[3];
      if (pLong_5 != (int64_t *)0x0) {
        func_0x1800fe9f0(pLong_5);
        thunk_FUN_180695dd0(pLong_5,0x250);
      }
      thunk_FUN_180695dd0(ptr2_Long_7,0x28);
      *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
      if (ptr2_Long_7 == ptr2_Long_4) break;
      ptr2_Long_7 = ptr2_Long_8;
      if (ptr2_Long_8 == param_3) goto LAB_1802154ff;
    }
    *(int64_t ***)(lVal_2 + lVal_9) = ptr2_Long_1;
    *(int64_t ***)(lVal_2 + 8 + lVal_9) = ptr2_Long_1;
  }
  goto LAB_180215508;
}

// func_0x180215530
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180215530(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806b2e44;
    uVal_3 = param_1[2] ^ _UNK_1806b2e48;
    uVal_4 = param_1[3] ^ _UNK_1806b2e4c;
    *param_1 = *param_1 ^ _DAT_1806b2e40;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806bb360;
  }
  return;
}

// func_0x180215590
uint64_t func_0x180215590(int64_t param_1,int *param_2)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  uint64_t uVal_7;
  
  uVal_7 = ((uint64_t)*(byte *)((int64_t)param_2 + 3) ^
          ((uint64_t)*(byte *)((int64_t)param_2 + 2) ^
          ((uint64_t)*(byte *)((int64_t)param_2 + 1) ^
          ((uint64_t)*(byte *)param_2 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
          0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
  pLong_1 = *(int64_t **)(param_1 + 8);
  lVal_2 = *(int64_t *)(param_1 + 0x18);
  lVal_5 = ((((uint64_t)*(byte *)((int64_t)param_2 + 7) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 6) ^
            ((uint64_t)*(byte *)((int64_t)param_2 + 5) ^
            ((uint64_t)*(byte *)(param_2 + 1) ^ 0xcbf29ce484222325) * 0x100000001b3) *
            0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
            (uVal_7 >> 2) + uVal_7 * 0x40 ^ uVal_7) & *(uint64_t *)(param_1 + 0x30)) * 0x10;
  pLong_3 = *(int64_t **)(lVal_2 + 8 + lVal_5);
  if (pLong_3 == pLong_1) {
    return 0;
  }
  pLong_4 = *(int64_t **)(lVal_2 + lVal_5);
  pLong_6 = pLong_3;
  if ((*param_2 != *(int *)(pLong_3 + 2)) || (param_2[1] != *(int *)((int64_t)pLong_3 + 0x14))) {
    do {
      if (pLong_6 == pLong_4) {
        return 0;
      }
      pLong_6 = (int64_t *)pLong_6[1];
    } while ((*param_2 != *(int *)(pLong_6 + 2)) || (param_2[1] != *(int *)((int64_t)pLong_6 + 0x14))
            );
    if (pLong_3 != pLong_6) {
      if (pLong_4 == pLong_6) {
        *(int64_t *)(lVal_2 + lVal_5) = *pLong_6;
      }
      goto LAB_1802156b3;
    }
  }
  if (pLong_4 == pLong_6) {
    *(int64_t **)(lVal_2 + lVal_5) = pLong_1;
    *(int64_t **)(lVal_2 + 8 + lVal_5) = pLong_1;
  }
  else {
    *(int64_t *)(lVal_2 + 8 + lVal_5) = pLong_6[1];
  }
LAB_1802156b3:
  lVal_2 = *pLong_6;
  *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
  *(int64_t *)pLong_6[1] = lVal_2;
  *(int64_t *)(lVal_2 + 8) = pLong_6[1];
  lVal_2 = pLong_6[3];
  if (lVal_2 != 0) {
    func_0x1800fe9f0(lVal_2);
    thunk_FUN_180695dd0(lVal_2,0x250);
  }
  thunk_FUN_180695dd0(pLong_6,0x28);
  return 1;
}

// func_0x180215700
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180215700(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bb374;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bb370;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bb378;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bb37c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x3d559f1b5179717b;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x5179717b;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x180215730
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180215730(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806bb384;
    uVal_2 = param_1[2] ^ _UNK_1806bb388;
    uVal_3 = param_1[3] ^ _UNK_1806bb38c;
    *param_1 = *param_1 ^ _DAT_1806bb380;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806ae1e0,0);
  }
  return;
}

// func_0x180215780
void func_0x180215780(int64_t param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  
  lVal_2 = *(int64_t *)(param_1 + 8);
  if (lVal_2 == 0) {
    return;
  }
  lVal_1 = *(int64_t *)(lVal_2 + 0x18);
  if (lVal_1 != 0) {
    func_0x1800fe9f0(lVal_1);
    thunk_FUN_180695dd0(lVal_1,0x250);
    lVal_2 = *(int64_t *)(param_1 + 8);
    if (lVal_2 == 0) {
      return;
    }
  }
  thunk_FUN_180695dd0(lVal_2,0x28);
  return;
}

// func_0x1802157d0
void func_0x1802157d0(int64_t param_1,uint64_t param_2)
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
joined_r0x00018021583d:
  do {
    if (ptr2_Long_8 == ptr2_Long_1) {
      return;
    }
    ptr2_Long_2 = (int64_t **)*ptr2_Long_8;
    uVal_10 = ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x13) ^
             ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x12) ^
             ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x11) ^
             ((uint64_t)*(byte *)(ptr2_Long_8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3) *
             0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9;
    lVal_11 = *(int64_t *)(param_1 + 0x18);
    lVal_13 = ((((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x17) ^
               ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x16) ^
               ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x15) ^
               ((uint64_t)*(byte *)((int64_t)ptr2_Long_8 + 0x14) ^ 0xcbf29ce484222325) * 0x100000001b3
               ) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3 + 0x9e3779b9 +
               (uVal_10 >> 2) + uVal_10 * 0x40 ^ uVal_10) & *(uint64_t *)(param_1 + 0x30)) * 0x10;
    if (*(int64_t ***)(lVal_11 + lVal_13) == ptr2_Long_1) {
      *(int64_t ***)(lVal_11 + lVal_13) = ptr2_Long_8;
    }
    else {
      ptr2_Long_12 = *(int64_t ***)(lVal_11 + 8 + lVal_13);
      if ((*(int *)(ptr2_Long_8 + 2) != *(int *)(ptr2_Long_12 + 2)) ||
         (*(int *)((int64_t)ptr2_Long_8 + 0x14) != *(int *)((int64_t)ptr2_Long_12 + 0x14))) {
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
            goto joined_r0x00018021583d;
          }
          ptr2_Long_12 = (int64_t **)ptr2_Long_12[1];
        } while ((*(int *)(ptr2_Long_8 + 2) != *(int *)(ptr2_Long_12 + 2)) ||
                (*(int *)((int64_t)ptr2_Long_8 + 0x14) != *(int *)((int64_t)ptr2_Long_12 + 0x14)));
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
        goto joined_r0x00018021583d;
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

// func_0x1802159f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802159f0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2cb4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2cb0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2cb8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cbc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x35;
    param_1[1][1] = param_1[1][1] ^ 0xb1;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180215a10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180215a10(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5604;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5600;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5608;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b560c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x5f694973d3c78945;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xd3c78945;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x73;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x180215a50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180215a50(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2eec;
  uVal_9 = _UNK_1806b2ee8;
  uVal_8 = _UNK_1806b2ee4;
  uVal_7 = _DAT_1806b2ee0;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ee4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ee0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ee8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2eec;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b2ef0,0);
  }
  return;
}

// func_0x180215ad0
int64_t * func_0x180215ad0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int iVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  bool bFlag_9;
  void *pVoid_10;
  void *pVoid_11;
  int64_t lVal_12;
  int64_t *pLong_13;
  uint64_t uVal_14;
  uint uVal_15;
  int64_t local_70;
  uint local_68;
  uint8_t local_60 [8];
  int64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  func_0x180215d70(local_60,param_1,*param_1,param_3,param_4);
  lVal_4 = local_58;
  pVoid_11 = (void *)(local_58 + 0x20);
  lVal_8 = *param_1;
  lVal_12 = *(int64_t *)(lVal_8 + 8);
  uVal_15 = 0;
  if (*(char *)(lVal_12 + 0x19) == '\0') {
    if (0xf < *(uint64_t *)(local_58 + 0x38)) {
      pVoid_11 = *(void **)(local_58 + 0x20);
    }
    uVal_3 = *(uint64_t *)(local_58 + 0x30);
    lVal_2 = lVal_12;
    local_50 = param_2;
    do {
      lVal_12 = lVal_2;
      if (*(uint64_t *)(lVal_12 + 0x38) < 0x10) {
        pVoid_10 = (void *)(lVal_12 + 0x20);
      }
      else {
        pVoid_10 = *(void **)(lVal_12 + 0x20);
      }
      uVal_7 = *(uint64_t *)(lVal_12 + 0x30);
      uVal_14 = uVal_7;
      if (uVal_3 < uVal_7) {
        uVal_14 = uVal_3;
      }
      iVal_6 = memcmp(pVoid_10,pVoid_11,uVal_14);
      bFlag_9 = uVal_7 < uVal_3;
      if (iVal_6 != 0) {
        bFlag_9 = iVal_6 < 0;
      }
      if (bFlag_9 == false) {
        lVal_8 = lVal_12;
      }
      lVal_2 = *(int64_t *)(lVal_12 + (uint64_t)bFlag_9 * 0x10);
    } while (*(char *)(lVal_2 + 0x19) == '\0');
    uVal_15 = (uint)(bFlag_9 ^ 1);
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = local_50;
    pLong_5 = local_50;
  }
  else {
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = param_2;
    pLong_5 = local_50;
  }
  local_50 = pLong_13;
  pLong_13 = local_50;
  if (ch_1 == '\0') {
    pVoid_11 = (void *)(lVal_4 + 0x20);
    if (*(uint64_t *)(lVal_8 + 0x38) < 0x10) {
      pVoid_10 = (void *)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    else {
      pVoid_10 = *(void **)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    if (0xf < uVal_14) {
      pVoid_11 = *(void **)(lVal_4 + 0x20);
    }
    uVal_14 = uVal_7;
    if (uVal_3 < uVal_7) {
      uVal_14 = uVal_3;
    }
    iVal_6 = memcmp(pVoid_11,pVoid_10,uVal_14);
    pLong_5 = local_50;
    bFlag_9 = uVal_3 <= uVal_7;
    if (iVal_6 != 0) {
      bFlag_9 = -1 < iVal_6;
    }
    pLong_13 = local_50;
    if (bFlag_9) {
      *local_50 = lVal_8;
      *(uint8_t *)(local_50 + 1) = 0;
      func_0x180084c70(lVal_4 + 0x48,*(uint8_t *)(lVal_4 + 0x40));
      uVal_3 = *(uint64_t *)(lVal_4 + 0x38);
      if (0xf < uVal_3) {
        lVal_8 = *(int64_t *)(lVal_4 + 0x20);
        uVal_7 = uVal_3 + 1;
        lVal_12 = lVal_8;
        if (0xfff < uVal_7) {
          lVal_12 = *(int64_t *)(lVal_8 + -8);
          if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_12)) goto LAB_180215cff;
          uVal_7 = uVal_3 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_12,uVal_7);
      }
      *(uint64_t *)(lVal_4 + 0x30) = 0;
      *(uint64_t *)(lVal_4 + 0x38) = 0xf;
      *(uint8_t *)(lVal_4 + 0x20) = 0;
      if (local_58 == 0) {
        return pLong_5;
      }
      thunk_FUN_180695dd0(local_58,0x50);
      return pLong_5;
    }
  }
  local_50 = pLong_5;
  if (param_1[1] != 0x333333333333333) {
    local_70 = lVal_12;
    local_68 = uVal_15;
    lVal_8 = func_0x1800a1550(param_1,&local_70,lVal_4);
    *pLong_13 = lVal_8;
    *(uint8_t *)(pLong_13 + 1) = 1;
    return pLong_13;
  }
  func_0x1800a17e0();
LAB_180215cff:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180215d10
void Unwind_180215d10(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180215d30
void Unwind_180215d30(uint64_t param_1,int64_t param_2)
{
  func_0x1801bd2b0(param_2 + 0x38);
  return;
}

// func_0x180215d70
void func_0x180215d70(uint64_t *param_1,uint64_t param_2,uint64_t param_3,char **param_4, float *param_5)
{
  float fVal_1;
  char *_Str;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  uint64_t *pU64_6;
  uint64_t **ptr2_U64_7;
  uint64_t uVal_8;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVal_3 = func_0x180672de0(0x50);
  param_1[1] = lVal_3;
  _Str = *param_4;
  *(uint8_t (*)[16])(lVal_3 + 0x30) = ZEXT816(0);
  *(uint8_t (*)[16])(lVal_3 + 0x20) = ZEXT816(0);
  sz_4 = strlen(_Str);
  if (-1 < (int64_t)sz_4) {
    uVal_8 = 0xf;
    ptr2_U64_7 = (uint64_t **)(lVal_3 + 0x20);
    if (0xf < sz_4) {
      uVal_5 = sz_4 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        ptr2_U64_7 = (uint64_t **)func_0x180672de0(uVal_8 + 1);
      }
      else {
        pU64_6 = (uint64_t *)func_0x180672de0(uVal_8 + 0x28);
        ptr2_U64_7 = (uint64_t **)((int64_t)pU64_6 + 0x27U & 0xffffffffffffffe0);
        ptr2_U64_7[-1] = pU64_6;
      }
      *(uint64_t **)(lVal_3 + 0x20) = (uint64_t *)ptr2_U64_7;
    }
    *(size_t *)(lVal_3 + 0x30) = sz_4;
    *(uint64_t *)(lVal_3 + 0x38) = uVal_8;
    func_0x1806aa960(ptr2_U64_7,_Str,sz_4);
    *(uint8_t *)((int64_t)ptr2_U64_7 + sz_4) = 0;
    fVal_1 = *param_5;
    *(uint8_t *)(lVal_3 + 0x40) = 7;
    *(double *)(lVal_3 + 0x48) = (double)fVal_1;
    *(uint64_t *)param_1[1] = param_3;
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

// Unwind@180215eb0
void Unwind_180215eb0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// Unwind@180215f00
void Unwind_180215f00(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// func_0x180215f50
int64_t * func_0x180215f50(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int iVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  bool bFlag_9;
  void *pVoid_10;
  void *pVoid_11;
  int64_t lVal_12;
  int64_t *pLong_13;
  uint64_t uVal_14;
  uint uVal_15;
  int64_t local_70;
  uint local_68;
  uint8_t local_60 [8];
  int64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  func_0x1802161f0(local_60,param_1,*param_1,param_3,param_4);
  lVal_4 = local_58;
  pVoid_11 = (void *)(local_58 + 0x20);
  lVal_8 = *param_1;
  lVal_12 = *(int64_t *)(lVal_8 + 8);
  uVal_15 = 0;
  if (*(char *)(lVal_12 + 0x19) == '\0') {
    if (0xf < *(uint64_t *)(local_58 + 0x38)) {
      pVoid_11 = *(void **)(local_58 + 0x20);
    }
    uVal_3 = *(uint64_t *)(local_58 + 0x30);
    lVal_2 = lVal_12;
    local_50 = param_2;
    do {
      lVal_12 = lVal_2;
      if (*(uint64_t *)(lVal_12 + 0x38) < 0x10) {
        pVoid_10 = (void *)(lVal_12 + 0x20);
      }
      else {
        pVoid_10 = *(void **)(lVal_12 + 0x20);
      }
      uVal_7 = *(uint64_t *)(lVal_12 + 0x30);
      uVal_14 = uVal_7;
      if (uVal_3 < uVal_7) {
        uVal_14 = uVal_3;
      }
      iVal_6 = memcmp(pVoid_10,pVoid_11,uVal_14);
      bFlag_9 = uVal_7 < uVal_3;
      if (iVal_6 != 0) {
        bFlag_9 = iVal_6 < 0;
      }
      if (bFlag_9 == false) {
        lVal_8 = lVal_12;
      }
      lVal_2 = *(int64_t *)(lVal_12 + (uint64_t)bFlag_9 * 0x10);
    } while (*(char *)(lVal_2 + 0x19) == '\0');
    uVal_15 = (uint)(bFlag_9 ^ 1);
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = local_50;
    pLong_5 = local_50;
  }
  else {
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = param_2;
    pLong_5 = local_50;
  }
  local_50 = pLong_13;
  pLong_13 = local_50;
  if (ch_1 == '\0') {
    pVoid_11 = (void *)(lVal_4 + 0x20);
    if (*(uint64_t *)(lVal_8 + 0x38) < 0x10) {
      pVoid_10 = (void *)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    else {
      pVoid_10 = *(void **)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    if (0xf < uVal_14) {
      pVoid_11 = *(void **)(lVal_4 + 0x20);
    }
    uVal_14 = uVal_7;
    if (uVal_3 < uVal_7) {
      uVal_14 = uVal_3;
    }
    iVal_6 = memcmp(pVoid_11,pVoid_10,uVal_14);
    pLong_5 = local_50;
    bFlag_9 = uVal_3 <= uVal_7;
    if (iVal_6 != 0) {
      bFlag_9 = -1 < iVal_6;
    }
    pLong_13 = local_50;
    if (bFlag_9) {
      *local_50 = lVal_8;
      *(uint8_t *)(local_50 + 1) = 0;
      func_0x180084c70(lVal_4 + 0x48,*(uint8_t *)(lVal_4 + 0x40));
      uVal_3 = *(uint64_t *)(lVal_4 + 0x38);
      if (0xf < uVal_3) {
        lVal_8 = *(int64_t *)(lVal_4 + 0x20);
        uVal_7 = uVal_3 + 1;
        lVal_12 = lVal_8;
        if (0xfff < uVal_7) {
          lVal_12 = *(int64_t *)(lVal_8 + -8);
          if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_12)) goto LAB_18021617f;
          uVal_7 = uVal_3 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_12,uVal_7);
      }
      *(uint64_t *)(lVal_4 + 0x30) = 0;
      *(uint64_t *)(lVal_4 + 0x38) = 0xf;
      *(uint8_t *)(lVal_4 + 0x20) = 0;
      if (local_58 == 0) {
        return pLong_5;
      }
      thunk_FUN_180695dd0(local_58,0x50);
      return pLong_5;
    }
  }
  local_50 = pLong_5;
  if (param_1[1] != 0x333333333333333) {
    local_70 = lVal_12;
    local_68 = uVal_15;
    lVal_8 = func_0x1800a1550(param_1,&local_70,lVal_4);
    *pLong_13 = lVal_8;
    *(uint8_t *)(pLong_13 + 1) = 1;
    return pLong_13;
  }
  func_0x1800a17e0();
LAB_18021617f:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180216190
void Unwind_180216190(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1802161b0
void Unwind_1802161b0(uint64_t param_1,int64_t param_2)
{
  func_0x1801bd2b0(param_2 + 0x38);
  return;
}

// func_0x1802161f0
void func_0x1802161f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,char **param_4, uint64_t *param_5)
{
  uint64_t uVal_1;
  char *_Str;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  uint64_t *pU64_6;
  uint64_t **ptr2_U64_7;
  uint64_t uVal_8;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVal_3 = func_0x180672de0(0x50);
  param_1[1] = lVal_3;
  _Str = *param_4;
  *(uint8_t (*)[16])(lVal_3 + 0x30) = ZEXT816(0);
  *(uint8_t (*)[16])(lVal_3 + 0x20) = ZEXT816(0);
  sz_4 = strlen(_Str);
  if (-1 < (int64_t)sz_4) {
    uVal_8 = 0xf;
    ptr2_U64_7 = (uint64_t **)(lVal_3 + 0x20);
    if (0xf < sz_4) {
      uVal_5 = sz_4 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        ptr2_U64_7 = (uint64_t **)func_0x180672de0(uVal_8 + 1);
      }
      else {
        pU64_6 = (uint64_t *)func_0x180672de0(uVal_8 + 0x28);
        ptr2_U64_7 = (uint64_t **)((int64_t)pU64_6 + 0x27U & 0xffffffffffffffe0);
        ptr2_U64_7[-1] = pU64_6;
      }
      *(uint64_t **)(lVal_3 + 0x20) = (uint64_t *)ptr2_U64_7;
    }
    *(size_t *)(lVal_3 + 0x30) = sz_4;
    *(uint64_t *)(lVal_3 + 0x38) = uVal_8;
    func_0x1806aa960(ptr2_U64_7,_Str,sz_4);
    *(uint8_t *)((int64_t)ptr2_U64_7 + sz_4) = 0;
    uVal_1 = *param_5;
    *(uint8_t *)(lVal_3 + 0x40) = 7;
    *(uint64_t *)(lVal_3 + 0x48) = uVal_1;
    *(uint64_t *)param_1[1] = param_3;
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

// Unwind@180216330
void Unwind_180216330(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// Unwind@180216380
void Unwind_180216380(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// func_0x1802163d0
int64_t * func_0x1802163d0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int iVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  bool bFlag_9;
  void *pVoid_10;
  void *pVoid_11;
  int64_t lVal_12;
  int64_t *pLong_13;
  uint64_t uVal_14;
  uint uVal_15;
  int64_t local_70;
  uint local_68;
  uint8_t local_60 [8];
  int64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  func_0x180216670(local_60,param_1,*param_1,param_3,param_4);
  lVal_4 = local_58;
  pVoid_11 = (void *)(local_58 + 0x20);
  lVal_8 = *param_1;
  lVal_12 = *(int64_t *)(lVal_8 + 8);
  uVal_15 = 0;
  if (*(char *)(lVal_12 + 0x19) == '\0') {
    if (0xf < *(uint64_t *)(local_58 + 0x38)) {
      pVoid_11 = *(void **)(local_58 + 0x20);
    }
    uVal_3 = *(uint64_t *)(local_58 + 0x30);
    lVal_2 = lVal_12;
    local_50 = param_2;
    do {
      lVal_12 = lVal_2;
      if (*(uint64_t *)(lVal_12 + 0x38) < 0x10) {
        pVoid_10 = (void *)(lVal_12 + 0x20);
      }
      else {
        pVoid_10 = *(void **)(lVal_12 + 0x20);
      }
      uVal_7 = *(uint64_t *)(lVal_12 + 0x30);
      uVal_14 = uVal_7;
      if (uVal_3 < uVal_7) {
        uVal_14 = uVal_3;
      }
      iVal_6 = memcmp(pVoid_10,pVoid_11,uVal_14);
      bFlag_9 = uVal_7 < uVal_3;
      if (iVal_6 != 0) {
        bFlag_9 = iVal_6 < 0;
      }
      if (bFlag_9 == false) {
        lVal_8 = lVal_12;
      }
      lVal_2 = *(int64_t *)(lVal_12 + (uint64_t)bFlag_9 * 0x10);
    } while (*(char *)(lVal_2 + 0x19) == '\0');
    uVal_15 = (uint)(bFlag_9 ^ 1);
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = local_50;
    pLong_5 = local_50;
  }
  else {
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = param_2;
    pLong_5 = local_50;
  }
  local_50 = pLong_13;
  pLong_13 = local_50;
  if (ch_1 == '\0') {
    pVoid_11 = (void *)(lVal_4 + 0x20);
    if (*(uint64_t *)(lVal_8 + 0x38) < 0x10) {
      pVoid_10 = (void *)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    else {
      pVoid_10 = *(void **)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    if (0xf < uVal_14) {
      pVoid_11 = *(void **)(lVal_4 + 0x20);
    }
    uVal_14 = uVal_7;
    if (uVal_3 < uVal_7) {
      uVal_14 = uVal_3;
    }
    iVal_6 = memcmp(pVoid_11,pVoid_10,uVal_14);
    pLong_5 = local_50;
    bFlag_9 = uVal_3 <= uVal_7;
    if (iVal_6 != 0) {
      bFlag_9 = -1 < iVal_6;
    }
    pLong_13 = local_50;
    if (bFlag_9) {
      *local_50 = lVal_8;
      *(uint8_t *)(local_50 + 1) = 0;
      func_0x180084c70(lVal_4 + 0x48,*(uint8_t *)(lVal_4 + 0x40));
      uVal_3 = *(uint64_t *)(lVal_4 + 0x38);
      if (0xf < uVal_3) {
        lVal_8 = *(int64_t *)(lVal_4 + 0x20);
        uVal_7 = uVal_3 + 1;
        lVal_12 = lVal_8;
        if (0xfff < uVal_7) {
          lVal_12 = *(int64_t *)(lVal_8 + -8);
          if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_12)) goto LAB_1802165ff;
          uVal_7 = uVal_3 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_12,uVal_7);
      }
      *(uint64_t *)(lVal_4 + 0x30) = 0;
      *(uint64_t *)(lVal_4 + 0x38) = 0xf;
      *(uint8_t *)(lVal_4 + 0x20) = 0;
      if (local_58 == 0) {
        return pLong_5;
      }
      thunk_FUN_180695dd0(local_58,0x50);
      return pLong_5;
    }
  }
  local_50 = pLong_5;
  if (param_1[1] != 0x333333333333333) {
    local_70 = lVal_12;
    local_68 = uVal_15;
    lVal_8 = func_0x1800a1550(param_1,&local_70,lVal_4);
    *pLong_13 = lVal_8;
    *(uint8_t *)(pLong_13 + 1) = 1;
    return pLong_13;
  }
  func_0x1800a17e0();
LAB_1802165ff:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180216610
void Unwind_180216610(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180216630
void Unwind_180216630(uint64_t param_1,int64_t param_2)
{
  func_0x1801bd2b0(param_2 + 0x38);
  return;
}

// func_0x180216670
void func_0x180216670(uint64_t *param_1,uint64_t param_2,uint64_t param_3,char **param_4, uint64_t *param_5)
{
  char *_Str;
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  uint64_t *pU64_6;
  uint64_t **ptr2_U64_7;
  uint64_t uVal_8;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVal_3 = func_0x180672de0(0x50);
  param_1[1] = lVal_3;
  _Str = *param_4;
  *(uint8_t (*)[16])(lVal_3 + 0x30) = ZEXT816(0);
  *(uint8_t (*)[16])(lVal_3 + 0x20) = ZEXT816(0);
  sz_4 = strlen(_Str);
  if (-1 < (int64_t)sz_4) {
    uVal_8 = 0xf;
    ptr2_U64_7 = (uint64_t **)(lVal_3 + 0x20);
    if (0xf < sz_4) {
      uVal_5 = sz_4 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        ptr2_U64_7 = (uint64_t **)func_0x180672de0(uVal_8 + 1);
      }
      else {
        pU64_6 = (uint64_t *)func_0x180672de0(uVal_8 + 0x28);
        ptr2_U64_7 = (uint64_t **)((int64_t)pU64_6 + 0x27U & 0xffffffffffffffe0);
        ptr2_U64_7[-1] = pU64_6;
      }
      *(uint64_t **)(lVal_3 + 0x20) = (uint64_t *)ptr2_U64_7;
    }
    *(size_t *)(lVal_3 + 0x30) = sz_4;
    *(uint64_t *)(lVal_3 + 0x38) = uVal_8;
    func_0x1806aa960(ptr2_U64_7,_Str,sz_4);
    *(uint8_t *)((int64_t)ptr2_U64_7 + sz_4) = 0;
    uVal_1 = *param_5;
    *(uint8_t *)(lVal_3 + 0x40) = 5;
    *(uint64_t *)(lVal_3 + 0x48) = uVal_1;
    *(uint64_t *)param_1[1] = param_3;
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

// Unwind@1802167b0
void Unwind_1802167b0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// Unwind@180216800
void Unwind_180216800(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// func_0x180216850
int64_t * func_0x180216850(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int iVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  bool bFlag_9;
  void *pVoid_10;
  void *pVoid_11;
  int64_t lVal_12;
  int64_t *pLong_13;
  uint64_t uVal_14;
  uint uVal_15;
  int64_t local_70;
  uint local_68;
  uint8_t local_60 [8];
  int64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  func_0x180216af0(local_60,param_1,*param_1,param_3,param_4);
  lVal_4 = local_58;
  pVoid_11 = (void *)(local_58 + 0x20);
  lVal_8 = *param_1;
  lVal_12 = *(int64_t *)(lVal_8 + 8);
  uVal_15 = 0;
  if (*(char *)(lVal_12 + 0x19) == '\0') {
    if (0xf < *(uint64_t *)(local_58 + 0x38)) {
      pVoid_11 = *(void **)(local_58 + 0x20);
    }
    uVal_3 = *(uint64_t *)(local_58 + 0x30);
    lVal_2 = lVal_12;
    local_50 = param_2;
    do {
      lVal_12 = lVal_2;
      if (*(uint64_t *)(lVal_12 + 0x38) < 0x10) {
        pVoid_10 = (void *)(lVal_12 + 0x20);
      }
      else {
        pVoid_10 = *(void **)(lVal_12 + 0x20);
      }
      uVal_7 = *(uint64_t *)(lVal_12 + 0x30);
      uVal_14 = uVal_7;
      if (uVal_3 < uVal_7) {
        uVal_14 = uVal_3;
      }
      iVal_6 = memcmp(pVoid_10,pVoid_11,uVal_14);
      bFlag_9 = uVal_7 < uVal_3;
      if (iVal_6 != 0) {
        bFlag_9 = iVal_6 < 0;
      }
      if (bFlag_9 == false) {
        lVal_8 = lVal_12;
      }
      lVal_2 = *(int64_t *)(lVal_12 + (uint64_t)bFlag_9 * 0x10);
    } while (*(char *)(lVal_2 + 0x19) == '\0');
    uVal_15 = (uint)(bFlag_9 ^ 1);
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = local_50;
    pLong_5 = local_50;
  }
  else {
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = param_2;
    pLong_5 = local_50;
  }
  local_50 = pLong_13;
  pLong_13 = local_50;
  if (ch_1 == '\0') {
    pVoid_11 = (void *)(lVal_4 + 0x20);
    if (*(uint64_t *)(lVal_8 + 0x38) < 0x10) {
      pVoid_10 = (void *)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    else {
      pVoid_10 = *(void **)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    if (0xf < uVal_14) {
      pVoid_11 = *(void **)(lVal_4 + 0x20);
    }
    uVal_14 = uVal_7;
    if (uVal_3 < uVal_7) {
      uVal_14 = uVal_3;
    }
    iVal_6 = memcmp(pVoid_11,pVoid_10,uVal_14);
    pLong_5 = local_50;
    bFlag_9 = uVal_3 <= uVal_7;
    if (iVal_6 != 0) {
      bFlag_9 = -1 < iVal_6;
    }
    pLong_13 = local_50;
    if (bFlag_9) {
      *local_50 = lVal_8;
      *(uint8_t *)(local_50 + 1) = 0;
      func_0x180084c70(lVal_4 + 0x48,*(uint8_t *)(lVal_4 + 0x40));
      uVal_3 = *(uint64_t *)(lVal_4 + 0x38);
      if (0xf < uVal_3) {
        lVal_8 = *(int64_t *)(lVal_4 + 0x20);
        uVal_7 = uVal_3 + 1;
        lVal_12 = lVal_8;
        if (0xfff < uVal_7) {
          lVal_12 = *(int64_t *)(lVal_8 + -8);
          if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_12)) goto LAB_180216a7f;
          uVal_7 = uVal_3 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_12,uVal_7);
      }
      *(uint64_t *)(lVal_4 + 0x30) = 0;
      *(uint64_t *)(lVal_4 + 0x38) = 0xf;
      *(uint8_t *)(lVal_4 + 0x20) = 0;
      if (local_58 == 0) {
        return pLong_5;
      }
      thunk_FUN_180695dd0(local_58,0x50);
      return pLong_5;
    }
  }
  local_50 = pLong_5;
  if (param_1[1] != 0x333333333333333) {
    local_70 = lVal_12;
    local_68 = uVal_15;
    lVal_8 = func_0x1800a1550(param_1,&local_70,lVal_4);
    *pLong_13 = lVal_8;
    *(uint8_t *)(pLong_13 + 1) = 1;
    return pLong_13;
  }
  func_0x1800a17e0();
LAB_180216a7f:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180216a90
void Unwind_180216a90(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180216ab0
void Unwind_180216ab0(uint64_t param_1,int64_t param_2)
{
  func_0x1801bd2b0(param_2 + 0x38);
  return;
}

// func_0x180216af0
void func_0x180216af0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,char **param_4, int *param_5)
{
  int iVal_1;
  char *_Str;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  uint64_t *pU64_6;
  uint64_t **ptr2_U64_7;
  uint64_t uVal_8;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVal_3 = func_0x180672de0(0x50);
  param_1[1] = lVal_3;
  _Str = *param_4;
  *(uint8_t (*)[16])(lVal_3 + 0x30) = ZEXT816(0);
  *(uint8_t (*)[16])(lVal_3 + 0x20) = ZEXT816(0);
  sz_4 = strlen(_Str);
  if (-1 < (int64_t)sz_4) {
    uVal_8 = 0xf;
    ptr2_U64_7 = (uint64_t **)(lVal_3 + 0x20);
    if (0xf < sz_4) {
      uVal_5 = sz_4 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        ptr2_U64_7 = (uint64_t **)func_0x180672de0(uVal_8 + 1);
      }
      else {
        pU64_6 = (uint64_t *)func_0x180672de0(uVal_8 + 0x28);
        ptr2_U64_7 = (uint64_t **)((int64_t)pU64_6 + 0x27U & 0xffffffffffffffe0);
        ptr2_U64_7[-1] = pU64_6;
      }
      *(uint64_t **)(lVal_3 + 0x20) = (uint64_t *)ptr2_U64_7;
    }
    *(size_t *)(lVal_3 + 0x30) = sz_4;
    *(uint64_t *)(lVal_3 + 0x38) = uVal_8;
    func_0x1806aa960(ptr2_U64_7,_Str,sz_4);
    *(uint8_t *)((int64_t)ptr2_U64_7 + sz_4) = 0;
    iVal_1 = *param_5;
    *(uint8_t *)(lVal_3 + 0x40) = 5;
    *(int64_t *)(lVal_3 + 0x48) = (int64_t)iVal_1;
    *(uint64_t *)param_1[1] = param_3;
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

// Unwind@180216c30
void Unwind_180216c30(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// Unwind@180216c80
void Unwind_180216c80(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// func_0x180216cd0
int64_t * func_0x180216cd0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char ch_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int iVal_6;
  uint64_t uVal_7;
  int64_t lVal_8;
  bool bFlag_9;
  void *pVoid_10;
  void *pVoid_11;
  int64_t lVal_12;
  int64_t *pLong_13;
  uint64_t uVal_14;
  uint uVal_15;
  int64_t local_70;
  uint local_68;
  uint8_t local_60 [8];
  int64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  func_0x180216f70(local_60,param_1,*param_1,param_3,param_4);
  lVal_4 = local_58;
  pVoid_11 = (void *)(local_58 + 0x20);
  lVal_8 = *param_1;
  lVal_12 = *(int64_t *)(lVal_8 + 8);
  uVal_15 = 0;
  if (*(char *)(lVal_12 + 0x19) == '\0') {
    if (0xf < *(uint64_t *)(local_58 + 0x38)) {
      pVoid_11 = *(void **)(local_58 + 0x20);
    }
    uVal_3 = *(uint64_t *)(local_58 + 0x30);
    lVal_2 = lVal_12;
    local_50 = param_2;
    do {
      lVal_12 = lVal_2;
      if (*(uint64_t *)(lVal_12 + 0x38) < 0x10) {
        pVoid_10 = (void *)(lVal_12 + 0x20);
      }
      else {
        pVoid_10 = *(void **)(lVal_12 + 0x20);
      }
      uVal_7 = *(uint64_t *)(lVal_12 + 0x30);
      uVal_14 = uVal_7;
      if (uVal_3 < uVal_7) {
        uVal_14 = uVal_3;
      }
      iVal_6 = memcmp(pVoid_10,pVoid_11,uVal_14);
      bFlag_9 = uVal_7 < uVal_3;
      if (iVal_6 != 0) {
        bFlag_9 = iVal_6 < 0;
      }
      if (bFlag_9 == false) {
        lVal_8 = lVal_12;
      }
      lVal_2 = *(int64_t *)(lVal_12 + (uint64_t)bFlag_9 * 0x10);
    } while (*(char *)(lVal_2 + 0x19) == '\0');
    uVal_15 = (uint)(bFlag_9 ^ 1);
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = local_50;
    pLong_5 = local_50;
  }
  else {
    ch_1 = *(char *)(lVal_8 + 0x19);
    pLong_13 = param_2;
    pLong_5 = local_50;
  }
  local_50 = pLong_13;
  pLong_13 = local_50;
  if (ch_1 == '\0') {
    pVoid_11 = (void *)(lVal_4 + 0x20);
    if (*(uint64_t *)(lVal_8 + 0x38) < 0x10) {
      pVoid_10 = (void *)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    else {
      pVoid_10 = *(void **)(lVal_8 + 0x20);
      uVal_3 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = *(uint64_t *)(lVal_4 + 0x30);
      uVal_14 = *(uint64_t *)(lVal_4 + 0x38);
    }
    if (0xf < uVal_14) {
      pVoid_11 = *(void **)(lVal_4 + 0x20);
    }
    uVal_14 = uVal_7;
    if (uVal_3 < uVal_7) {
      uVal_14 = uVal_3;
    }
    iVal_6 = memcmp(pVoid_11,pVoid_10,uVal_14);
    pLong_5 = local_50;
    bFlag_9 = uVal_3 <= uVal_7;
    if (iVal_6 != 0) {
      bFlag_9 = -1 < iVal_6;
    }
    pLong_13 = local_50;
    if (bFlag_9) {
      *local_50 = lVal_8;
      *(uint8_t *)(local_50 + 1) = 0;
      func_0x180084c70(lVal_4 + 0x48,*(uint8_t *)(lVal_4 + 0x40));
      uVal_3 = *(uint64_t *)(lVal_4 + 0x38);
      if (0xf < uVal_3) {
        lVal_8 = *(int64_t *)(lVal_4 + 0x20);
        uVal_7 = uVal_3 + 1;
        lVal_12 = lVal_8;
        if (0xfff < uVal_7) {
          lVal_12 = *(int64_t *)(lVal_8 + -8);
          if (0x1f < (uint64_t)((lVal_8 + -8) - lVal_12)) goto LAB_180216eff;
          uVal_7 = uVal_3 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_12,uVal_7);
      }
      *(uint64_t *)(lVal_4 + 0x30) = 0;
      *(uint64_t *)(lVal_4 + 0x38) = 0xf;
      *(uint8_t *)(lVal_4 + 0x20) = 0;
      if (local_58 == 0) {
        return pLong_5;
      }
      thunk_FUN_180695dd0(local_58,0x50);
      return pLong_5;
    }
  }
  local_50 = pLong_5;
  if (param_1[1] != 0x333333333333333) {
    local_70 = lVal_12;
    local_68 = uVal_15;
    lVal_8 = func_0x1800a1550(param_1,&local_70,lVal_4);
    *pLong_13 = lVal_8;
    *(uint8_t *)(pLong_13 + 1) = 1;
    return pLong_13;
  }
  func_0x1800a17e0();
LAB_180216eff:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180216f10
void Unwind_180216f10(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180216f30
void Unwind_180216f30(uint64_t param_1,int64_t param_2)
{
  func_0x1801bd2b0(param_2 + 0x38);
  return;
}

// func_0x180216f70
void func_0x180216f70(uint64_t *param_1,uint64_t param_2,uint64_t param_3,char **param_4, byte *param_5)
{
  byte bFlag_1;
  char *_Str;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  uint64_t *pU64_6;
  uint64_t **ptr2_U64_7;
  uint64_t uVal_8;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVal_3 = func_0x180672de0(0x50);
  param_1[1] = lVal_3;
  _Str = *param_4;
  *(uint8_t (*)[16])(lVal_3 + 0x30) = ZEXT816(0);
  *(uint8_t (*)[16])(lVal_3 + 0x20) = ZEXT816(0);
  sz_4 = strlen(_Str);
  if (-1 < (int64_t)sz_4) {
    uVal_8 = 0xf;
    ptr2_U64_7 = (uint64_t **)(lVal_3 + 0x20);
    if (0xf < sz_4) {
      uVal_5 = sz_4 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        ptr2_U64_7 = (uint64_t **)func_0x180672de0(uVal_8 + 1);
      }
      else {
        pU64_6 = (uint64_t *)func_0x180672de0(uVal_8 + 0x28);
        ptr2_U64_7 = (uint64_t **)((int64_t)pU64_6 + 0x27U & 0xffffffffffffffe0);
        ptr2_U64_7[-1] = pU64_6;
      }
      *(uint64_t **)(lVal_3 + 0x20) = (uint64_t *)ptr2_U64_7;
    }
    *(size_t *)(lVal_3 + 0x30) = sz_4;
    *(uint64_t *)(lVal_3 + 0x38) = uVal_8;
    func_0x1806aa960(ptr2_U64_7,_Str,sz_4);
    *(uint8_t *)((int64_t)ptr2_U64_7 + sz_4) = 0;
    bFlag_1 = *param_5;
    *(uint8_t *)(lVal_3 + 0x40) = 4;
    *(uint64_t *)(lVal_3 + 0x48) = (uint64_t)bFlag_1;
    *(uint64_t *)param_1[1] = param_3;
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

// Unwind@1802170b0
void Unwind_1802170b0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// Unwind@180217100
void Unwind_180217100(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// func_0x180217150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217150(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806bb39c;
  uVal_9 = _UNK_1806bb398;
  uVal_8 = _UNK_1806bb394;
  uVal_7 = _DAT_1806bb390;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bb394;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bb390;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bb398;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bb39c;
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

// func_0x180217180
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217180(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2c9c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xcf;
    param_1[1][1] = param_1[1][1] ^ 0xd9;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802171a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802171a0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2ca4;
    uVal_2 = param_1[2] ^ _UNK_1806b2ca8;
    uVal_3 = param_1[3] ^ _UNK_1806b2cac;
    *param_1 = *param_1 ^ _DAT_1806b2ca0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806ae200,0);
  }
  return;
}

// func_0x1802171f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802171f0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d7c;
  uVal_9 = _UNK_1806b2d78;
  uVal_8 = _UNK_1806b2d74;
  uVal_7 = _DAT_1806b2d70;
  if (param_1[2][3] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] =
         (*(uint *)param_1[2] & 0xffff | (uint)(byte)param_1[2][2] << 0x10) ^
         SUB164(_DAT_1806b6500,0);
  }
  return;
}

// func_0x180217240
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217240(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xd5;
    param_1[1][1] = param_1[1][1] ^ 0xf1;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180217260
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217260(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d1c;
  uVal_9 = _UNK_1806b2d18;
  uVal_8 = _UNK_1806b2d14;
  uVal_7 = _DAT_1806b2d10;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
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

// func_0x180217290
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217290(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806ae4dc;
  uVal_9 = _UNK_1806ae4d8;
  uVal_8 = _UNK_1806ae4d4;
  uVal_7 = _DAT_1806ae4d0;
  if (param_1[2][0] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae4d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae4d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae4d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae4dc;
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

// func_0x180217320
int64_t * func_0x180217320(int64_t *param_1,int64_t *param_2,uint64_t *param_3,uint64_t param_4)
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
  uint64_t uVal_15;
  uint8_t uVal_16;
  int iVal_17;
  int64_t lVal_18;
  int64_t lVal_19;
  int64_t *pLong_20;
  void *pVoid_21;
  uint64_t *pU64_22;
  int64_t *pLong_23;
  uint64_t uVal_24;
  uint64_t uVal_25;
  int64_t local_80;
  uint local_78;
  int64_t *local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t *local_58;
  uint local_4c;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_2 = *param_1;
  lVal_18 = *(int64_t *)(lVal_2 + 8);
  lVal_19 = lVal_2;
  if (*(char *)(lVal_18 + 0x19) == '\0') {
    pU64_22 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_22 = (uint64_t *)*param_3;
    }
    uVal_4 = param_3[2];
    lVal_3 = lVal_18;
    local_68 = param_1;
    local_60 = param_4;
    local_58 = param_2;
    do {
      lVal_18 = lVal_3;
      if (*(uint64_t *)(lVal_18 + 0x38) < 0x10) {
        pVoid_21 = (void *)(lVal_18 + 0x20);
      }
      else {
        pVoid_21 = *(void **)(lVal_18 + 0x20);
      }
      uVal_5 = *(uint64_t *)(lVal_18 + 0x30);
      uVal_24 = uVal_5;
      if (uVal_4 < uVal_5) {
        uVal_24 = uVal_4;
      }
      iVal_17 = memcmp(pVoid_21,pU64_22,uVal_24);
      bFlag_14 = uVal_5 < uVal_4;
      if (iVal_17 != 0) {
        bFlag_14 = iVal_17 < 0;
      }
      if (bFlag_14 == false) {
        lVal_19 = lVal_18;
      }
      lVal_3 = *(int64_t *)(lVal_18 + (uint64_t)bFlag_14 * 0x10);
    } while (*(char *)(lVal_3 + 0x19) == '\0');
    local_4c = (uint)(bFlag_14 ^ 1);
    ch_1 = *(char *)(lVal_19 + 0x19);
    pLong_23 = local_68;
    pLong_20 = local_68;
    uVal_25 = local_60;
    uVal_15 = local_60;
    param_2 = local_58;
  }
  else {
    local_4c = 0;
    ch_1 = *(char *)(lVal_2 + 0x19);
    pLong_23 = param_1;
    pLong_20 = local_68;
    uVal_25 = param_4;
    uVal_15 = local_60;
  }
  local_60 = uVal_25;
  local_68 = pLong_23;
  pLong_23 = local_68;
  uVal_25 = local_60;
  if (ch_1 == '\0') {
    if (*(uint64_t *)(lVal_19 + 0x38) < 0x10) {
      pVoid_21 = (void *)(lVal_19 + 0x20);
    }
    else {
      pVoid_21 = *(void **)(lVal_19 + 0x20);
    }
    uVal_4 = *(uint64_t *)(lVal_19 + 0x30);
    uVal_5 = param_3[2];
    pU64_22 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      pU64_22 = (uint64_t *)*param_3;
    }
    uVal_24 = uVal_5;
    if (uVal_4 < uVal_5) {
      uVal_24 = uVal_4;
    }
    iVal_17 = memcmp(pU64_22,pVoid_21,uVal_24);
    bFlag_14 = uVal_4 <= uVal_5;
    if (iVal_17 != 0) {
      bFlag_14 = -1 < iVal_17;
    }
    pLong_23 = local_68;
    uVal_25 = local_60;
    pLong_20 = local_68;
    uVal_15 = local_60;
    if (bFlag_14) {
      uVal_16 = 0;
      goto LAB_18021750f;
    }
  }
  local_60 = uVal_15;
  local_68 = pLong_20;
  if (pLong_23[1] == 0x333333333333333) {
    func_0x1800a17e0();
    fnPtr_6 = (func_ptr_t )swi(3);
    pLong_20 = (int64_t *)(*fnPtr_6)();
    return pLong_20;
  }
  local_58 = (int64_t *)func_0x180672de0(0x50);
  local_70 = local_58 + 4;
  uVal_7 = *(uint32_t *)param_3;
  uVal_8 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_9 = *(uint32_t *)(param_3 + 1);
  uVal_10 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_11 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_12 = *(uint32_t *)(param_3 + 3);
  uVal_13 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  *(uint32_t *)(local_58 + 6) = *(uint32_t *)(param_3 + 2);
  *(uint32_t *)((int64_t)local_58 + 0x34) = uVal_11;
  *(uint32_t *)(local_58 + 7) = uVal_12;
  *(uint32_t *)((int64_t)local_58 + 0x3c) = uVal_13;
  *(uint32_t *)(local_58 + 4) = uVal_7;
  *(uint32_t *)((int64_t)local_58 + 0x24) = uVal_8;
  *(uint32_t *)(local_58 + 5) = uVal_9;
  *(uint32_t *)((int64_t)local_58 + 0x2c) = uVal_10;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(uint8_t *)param_3 = 0;
  local_58[9] = 0;
  *(uint8_t *)(local_58 + 8) = 3;
  lVal_19 = func_0x1801c0670(uVal_25);
  local_58[9] = lVal_19;
  *local_58 = lVal_2;
  local_58[1] = lVal_2;
  local_58[2] = lVal_2;
  *(uint16_t *)(local_58 + 3) = 0;
  local_78 = local_4c;
  local_80 = lVal_18;
  lVal_19 = func_0x1800a1550(pLong_23,&local_80);
  uVal_16 = 1;
LAB_18021750f:
  *param_2 = lVal_19;
  *(uint8_t *)(param_2 + 1) = uVal_16;
  return param_2;
}

// Unwind@180217530
void Unwind_180217530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x38));
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x50),0x50);
  return;
}

// func_0x180217580
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217580(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xe9b5b3b1c77d4573;
    param_1[1][8] = param_1[1][8] ^ 0x73;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x1802175b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802175b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5604;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5600;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5608;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b560c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x5f694973d3c78945;
    param_1[1][8] = param_1[1][8] ^ 0x45;
    param_1[1][9] = param_1[1][9] ^ 0x89;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1802175e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802175e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xe9b5b3b1c77d4573;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xc77d4573;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x180217610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217610(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][9] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5b04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5b00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5b08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b5b0c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x750729cbe569d1dd;
    param_1[1][8] = param_1[1][8] ^ 0xdd;
    param_1[1][9] = 0;
  }
  return;
}

// func_0x180217640
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217640(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2d14;
    uVal_2 = param_1[2] ^ _UNK_1806b2d18;
    uVal_3 = param_1[3] ^ _UNK_1806b2d1c;
    *param_1 = *param_1 ^ _DAT_1806b2d10;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806bb3a0,0);
  }
  return;
}

// func_0x180217690
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217690(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2cb4;
    uVal_2 = param_1[2] ^ _UNK_1806b2cb8;
    uVal_3 = param_1[3] ^ _UNK_1806b2cbc;
    *param_1 = *param_1 ^ _DAT_1806b2cb0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0x89f52b3945a9b135;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b26c0,0);
  }
  return;
}

// func_0x1802176e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802176e0(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b649c;
  uVal_9 = _UNK_1806b6498;
  uVal_8 = _UNK_1806b6494;
  uVal_7 = _DAT_1806b6490;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b6494;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b6490;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b6498;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b649c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0x45;
    param_1[2][1] = param_1[2][1] ^ 0x31;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x180217710
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217710(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b5604;
    uVal_2 = param_1[2] ^ _UNK_1806b5608;
    uVal_3 = param_1[3] ^ _UNK_1806b560c;
    *param_1 = *param_1 ^ _DAT_1806b5600;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806ae250,0);
  }
  return;
}

// func_0x180217760
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217760(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2684;
    uVal_2 = param_1[2] ^ _UNK_1806b2688;
    uVal_3 = param_1[3] ^ _UNK_1806b268c;
    *param_1 = *param_1 ^ _DAT_1806b2680;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b5b80,0);
  }
  return;
}

// func_0x1802177a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802177a0(uint8_t (*param_1)[16])
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
  if (param_1[2][2] == '\x01') {
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
    param_1[2][1] = param_1[2][1] ^ 0x45;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x180217800
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217800(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2dc4;
    uVal_2 = param_1[2] ^ _UNK_1806b2dc8;
    uVal_3 = param_1[3] ^ _UNK_1806b2dcc;
    *param_1 = *param_1 ^ _DAT_1806b2dc0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806b5d00,0);
  }
  return;
}

// func_0x180217850
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217850(uint *param_1)
{
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint8_t auArr_1 [16];
  
  if (*(char *)((int64_t)param_1 + 0x1f) == '\x01') {
    uVal_2 = param_1[1] ^ _UNK_1806b2d74;
    uVal_3 = param_1[2] ^ _UNK_1806b2d78;
    uVal_4 = param_1[3] ^ _UNK_1806b2d7c;
    *param_1 = *param_1 ^ _DAT_1806b2d70;
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
    *(uint8_t (*)[16])(param_1 + 4) = auArr_1 ^ _DAT_1806bb110;
  }
  return;
}

// func_0x1802178b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802178b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x91219b1ff7f5f1d5;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x180217910
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180217910(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2dc4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2dc0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2dc8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2dcc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x6bad4799;
    param_1[1][4] = param_1[1][4] ^ 0x23;
    param_1[1][5] = param_1[1][5] ^ 0x77;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x180217d20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180217d20(float *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t *pU64_1;
  size_t _Size;
  size_t sz_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t *pU64_9;
  uint64_t *pU64_10;
  uint64_t *pU64_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  float fVal_15;
  uint64_t extraout_XMM0_Qb;
  uint8_t auArr_16 [16];
  uint8_t auArr_17 [16];
  uint8_t auArr_18 [16];
  float fVal_19;
  uint8_t local_60 [8];
  uint64_t *local_58;
  uint64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVal_7 = param_3[2];
  pU64_9 = param_3;
  if (0xf < (uint64_t)param_3[3]) {
    pU64_9 = (uint64_t *)*param_3;
  }
  if (uVal_7 == 0) {
    uVal_13 = 0xcbf29ce484222325;
  }
  else {
    uVal_5 = (uint64_t)((uint)uVal_7 & 3);
    if (uVal_7 < 4) {
      uVal_13 = 0xcbf29ce484222325;
      uVal_8 = 0;
    }
    else {
      uVal_13 = 0xcbf29ce484222325;
      uVal_8 = 0;
      do {
        uVal_13 = ((uint64_t)*(byte *)((int64_t)pU64_9 + uVal_8 + 3) ^
                 ((uint64_t)*(byte *)((int64_t)pU64_9 + uVal_8 + 2) ^
                 ((uint64_t)*(byte *)((int64_t)pU64_9 + uVal_8 + 1) ^
                 (*(byte *)((int64_t)pU64_9 + uVal_8) ^ uVal_13) * 0x100000001b3) * 0x100000001b3) *
                 0x100000001b3) * 0x100000001b3;
        uVal_8 = uVal_8 + 4;
      } while ((uVal_7 & 0xfffffffffffffffc) != uVal_8);
      if (uVal_5 == 0) goto LAB_180217e17;
    }
    uVal_12 = 0;
    do {
      uVal_13 = (*(byte *)((int64_t)pU64_9 + uVal_12 + uVal_8) ^ uVal_13) * 0x100000001b3;
      uVal_12 = uVal_12 + 1;
    } while (uVal_5 != uVal_12);
  }
LAB_180217e17:
  pU64_11 = *(uint64_t **)(param_1 + 2);
  lVal_6 = (*(uint64_t *)(param_1 + 0xc) & uVal_13) * 0x10;
  pU64_10 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_6);
  local_50 = param_2;
  if (pU64_10 != pU64_11) {
    pU64_1 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_6);
    pU64_11 = pU64_10;
    if (uVal_7 == 0) {
      for (; pU64_11[4] != 0; pU64_11 = (uint64_t *)pU64_11[1]) {
        if (pU64_11 == pU64_1) goto LAB_180217eb3;
      }
LAB_180217ea0:
      *local_50 = pU64_11;
      *(uint8_t *)(local_50 + 1) = 0;
      return local_50;
    }
    uVal_5 = pU64_10[4];
    while( true ) {
      if (uVal_7 == uVal_5) {
        if ((uint64_t)pU64_11[5] < 0x10) {
          pU64_10 = pU64_11 + 2;
        }
        else {
          pU64_10 = (uint64_t *)pU64_11[2];
        }
        iVal_4 = memcmp(pU64_9,pU64_10,uVal_7);
        if (iVal_4 == 0) goto LAB_180217ea0;
      }
      if (pU64_11 == pU64_1) break;
      pU64_11 = (uint64_t *)pU64_11[1];
      uVal_5 = pU64_11[4];
    }
  }
LAB_180217eb3:
  if (*(int64_t *)(param_1 + 4) == 0x333333333333333) {
    func_0x1806744c0("unordered_map/set too long");
    fnPtr_3 = (func_ptr_t )swi(3);
    pU64_9 = (uint64_t *)(*fnPtr_3)();
    return pU64_9;
  }
  auArr_18._0_8_ = func_0x180218140(local_60,param_1 + 2,param_3);
  auArr_18._8_8_ = extraout_XMM0_Qb;
  uVal_7 = *(int64_t *)(param_1 + 4) + 1;
  auArr_16._4_12_ = auArr_18._4_12_;
  if ((int64_t)uVal_7 < 0) {
    fVal_15 = (float)((uint64_t)((uint)uVal_7 & 1) | uVal_7 >> 1);
    auArr_16._0_4_ = fVal_15 + fVal_15;
    fVal_15 = *param_1;
    uVal_7 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_7) goto LAB_180217f3c;
LAB_180217ef2:
    fVal_19 = (float)((uint64_t)((uint)uVal_7 & 1) | uVal_7 >> 1);
    if (auArr_16._0_4_ / (fVal_19 + fVal_19) <= fVal_15) goto LAB_180218068;
  }
  else {
    auArr_16._0_4_ = (float)uVal_7;
    fVal_15 = *param_1;
    uVal_7 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_7 < 0) goto LAB_180217ef2;
LAB_180217f3c:
    if (auArr_16._0_4_ / (float)uVal_7 <= fVal_15) goto LAB_180218068;
  }
  auArr_17._4_12_ = auArr_16._4_12_;
  auArr_17._0_4_ = auArr_16._0_4_ / fVal_15;
  auArr_18 = roundss(auArr_17,auArr_17,10);
  uVal_8 = (uint64_t)auArr_18._0_4_;
  uVal_8 = (int64_t)(auArr_18._0_4_ - _DAT_1806ae420) & (int64_t)uVal_8 >> 0x3f | uVal_8;
  uVal_5 = 8;
  if (8 < uVal_8) {
    uVal_5 = uVal_8;
  }
  uVal_8 = uVal_7;
  if (uVal_7 < uVal_5) {
    uVal_8 = uVal_7 * 8;
    if (uVal_8 < uVal_5 || uVal_8 - uVal_5 == 0) {
      uVal_8 = uVal_5;
    }
    if (0x1ff < uVal_7) {
      uVal_8 = uVal_5;
    }
  }
  func_0x180095f50(param_1,uVal_8);
  pU64_11 = *(uint64_t **)(param_1 + 2);
  lVal_6 = *(int64_t *)(param_1 + 6);
  lVal_14 = (*(uint64_t *)(param_1 + 0xc) & uVal_13) * 0x10;
  pU64_9 = *(uint64_t **)(lVal_6 + 8 + lVal_14);
  if (pU64_9 != pU64_11) {
    _Size = local_58[4];
    if ((uint64_t)local_58[5] < 0x10) {
      pU64_10 = local_58 + 2;
      pU64_1 = *(uint64_t **)(lVal_6 + lVal_14);
    }
    else {
      pU64_10 = (uint64_t *)local_58[2];
      pU64_1 = *(uint64_t **)(lVal_6 + lVal_14);
    }
    pU64_11 = pU64_9;
    if (_Size == 0) {
      for (; pU64_11[4] != 0; pU64_11 = (uint64_t *)pU64_11[1]) {
        if (pU64_11 == pU64_1) goto LAB_180218068;
      }
LAB_180218065:
      pU64_11 = (uint64_t *)*pU64_11;
    }
    else {
      sz_2 = pU64_9[4];
      while( true ) {
        if (_Size == sz_2) {
          if ((uint64_t)pU64_11[5] < 0x10) {
            pU64_9 = pU64_11 + 2;
          }
          else {
            pU64_9 = (uint64_t *)pU64_11[2];
          }
          iVal_4 = memcmp(pU64_10,pU64_9,_Size);
          if (iVal_4 == 0) goto LAB_180218065;
        }
        if (pU64_11 == pU64_1) break;
        pU64_11 = (uint64_t *)pU64_11[1];
        sz_2 = pU64_11[4];
      }
    }
  }
LAB_180218068:
  pU64_1 = local_50;
  pU64_10 = local_58;
  local_58 = (uint64_t *)0x0;
  pU64_9 = (uint64_t *)pU64_11[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_10 = pU64_11;
  pU64_10[1] = pU64_9;
  *pU64_9 = pU64_10;
  pU64_11[1] = pU64_10;
  lVal_6 = *(int64_t *)(param_1 + 6);
  lVal_14 = (uVal_13 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_6 + lVal_14) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_6 + lVal_14) = pU64_10;
    *(uint64_t **)(lVal_6 + 8 + lVal_14) = pU64_10;
  }
  else if (*(uint64_t **)(lVal_6 + lVal_14) == pU64_11) {
    *(uint64_t **)(lVal_6 + lVal_14) = pU64_10;
  }
  else if (*(uint64_t **)(lVal_6 + 8 + lVal_14) == pU64_9) {
    *(uint64_t **)(lVal_6 + 8 + lVal_14) = pU64_10;
  }
  *local_50 = pU64_10;
  *(uint8_t *)(local_50 + 1) = 1;
  func_0x180095cc0(local_60);
  return pU64_1;
}

// Unwind@180218100
void Unwind_180218100(uint64_t param_1,int64_t param_2)
{
  func_0x180095cc0(param_2 + 0x28);
  return;
}

// func_0x180218140
uint64_t * func_0x180218140(uint64_t *param_1,uint64_t param_2,uint64_t *param_3)
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
  int64_t lVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t *pU64_13;
  uint64_t uVal_14;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVal_10 = func_0x180672de0(0x50);
  param_1[1] = lVal_10;
  *(uint8_t (*)[16])(lVal_10 + 0x20) = ZEXT816(0);
  *(uint8_t (*)[16])(lVal_10 + 0x10) = ZEXT816(0);
  uVal_1 = param_3[2];
  pU64_13 = param_3;
  if (0xf < (uint64_t)param_3[3]) {
    pU64_13 = (uint64_t *)*param_3;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      *(uint64_t *)(lVal_10 + 0x20) = uVal_1;
      *(uint64_t *)(lVal_10 + 0x28) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)pU64_13 + 4);
      uVal_4 = *(uint32_t *)(pU64_13 + 1);
      uVal_5 = *(uint32_t *)((int64_t)pU64_13 + 0xc);
      *(uint32_t *)(lVal_10 + 0x10) = *(uint32_t *)pU64_13;
      *(uint32_t *)(lVal_10 + 0x14) = uVal_3;
      *(uint32_t *)(lVal_10 + 0x18) = uVal_4;
      *(uint32_t *)(lVal_10 + 0x1c) = uVal_5;
    }
    else {
      uVal_11 = uVal_1 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_11) {
        uVal_14 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        uVal_11 = func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_14 + 0x28);
        uVal_11 = lVal_12 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_11 - 8) = lVal_12;
      }
      *(uint64_t *)(lVal_10 + 0x10) = uVal_11;
      *(uint64_t *)(lVal_10 + 0x20) = uVal_1;
      *(uint64_t *)(lVal_10 + 0x28) = uVal_14;
      func_0x1806aa960(uVal_11,pU64_13,uVal_1 + 1);
    }
    uVal_3 = *(uint32_t *)(param_3 + 4);
    uVal_4 = *(uint32_t *)((int64_t)param_3 + 0x24);
    uVal_5 = *(uint32_t *)(param_3 + 5);
    uVal_6 = *(uint32_t *)((int64_t)param_3 + 0x2c);
    uVal_7 = *(uint32_t *)((int64_t)param_3 + 0x34);
    uVal_8 = *(uint32_t *)(param_3 + 7);
    uVal_9 = *(uint32_t *)((int64_t)param_3 + 0x3c);
    *(uint32_t *)(lVal_10 + 0x40) = *(uint32_t *)(param_3 + 6);
    *(uint32_t *)(lVal_10 + 0x44) = uVal_7;
    *(uint32_t *)(lVal_10 + 0x48) = uVal_8;
    *(uint32_t *)(lVal_10 + 0x4c) = uVal_9;
    *(uint32_t *)(lVal_10 + 0x30) = uVal_3;
    *(uint32_t *)(lVal_10 + 0x34) = uVal_4;
    *(uint32_t *)(lVal_10 + 0x38) = uVal_5;
    *(uint32_t *)(lVal_10 + 0x3c) = uVal_6;
    param_3[6] = 0;
    param_3[7] = 0xf;
    *(uint8_t *)(param_3 + 4) = 0;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_13 = (uint64_t *)(*fnPtr_2)();
  return pU64_13;
}

// Unwind@180218270
void Unwind_180218270(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(*(int64_t *)(param_2 + 0x28) + 8);
  if (lVal_1 != 0) {
    thunk_FUN_180695dd0(lVal_1,0x50);
  }
  return;
}

// func_0x1802182b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802182b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806bb3b4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806bb3b0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806bb3b8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806bb3bc;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0xbf;
    param_1[1][1] = param_1[1][1] ^ 0xcf;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802182d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802182d0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e9c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x3f;
    param_1[1][1] = param_1[1][1] ^ 0x23;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x1802182f0
uint8_t (**func_0x1802182f0(uint8_t (**param_1)[16],uint64_t *param_2,uint64_t *param_3,uint64_t *param_4 ))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  int64_t lVal_8;
  uint8_t (**ptr2_Arr16_9)[16];
  uint64_t uVal_10;
  
  pArr16_6 = (uint8_t (*)[16])func_0x180672de0(0x30);
  *pArr16_6 = ZEXT816(0);
  pArr16_6[1] = ZEXT816(0);
  uVal_1 = param_4[2];
  if (0xf < (uint64_t)param_4[3]) {
    param_4 = (uint64_t *)*param_4;
  }
  if (-1 < (int64_t)uVal_1) {
    if (uVal_1 < 0x10) {
      *(uint64_t *)pArr16_6[1] = uVal_1;
      *(uint64_t *)(pArr16_6[1] + 8) = 0xf;
      uVal_3 = *(uint32_t *)((int64_t)param_4 + 4);
      uVal_4 = *(uint32_t *)(param_4 + 1);
      uVal_5 = *(uint32_t *)((int64_t)param_4 + 0xc);
      *(uint32_t *)*pArr16_6 = *(uint32_t *)param_4;
      *(uint32_t *)(*pArr16_6 + 4) = uVal_3;
      *(uint32_t *)(*pArr16_6 + 8) = uVal_4;
      *(uint32_t *)(*pArr16_6 + 0xc) = uVal_5;
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
      *(uint64_t *)*pArr16_6 = uVal_7;
      *(uint64_t *)pArr16_6[1] = uVal_1;
      *(uint64_t *)(pArr16_6[1] + 8) = uVal_10;
      func_0x1806aa960(uVal_7,param_4,uVal_1 + 1);
    }
    *(uint64_t *)pArr16_6[2] = *param_3;
    *(uint64_t *)(pArr16_6[2] + 8) = *param_2;
    *param_1 = pArr16_6;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  ptr2_Arr16_9 = (uint8_t (**)[16])(*fnPtr_2)();
  return ptr2_Arr16_9;
}

// Unwind@180218400
void Unwind_180218400(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x30);
  return;
}

// Unwind@1802184c0
void Unwind_1802184c0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1802184e0
void func_0x1802184e0(int64_t **param_1)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  
  pLong_1 = *param_1;
  if (pLong_1 == (int64_t *)0x0) {
    return;
  }
  uVal_2 = pLong_1[3];
  if (0xf < uVal_2) {
    lVal_3 = *pLong_1;
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
  thunk_FUN_180695dd0(pLong_1,0x30);
  return;
}

// func_0x180218550
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218550(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2ca4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2ca0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2ca8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2cac;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xe9b5b3b1c77d4573;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x180218580
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218580(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5b04;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5b00;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5b08;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b5b0c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x750729cbe569d1dd;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x1802185b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802185b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xc] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x47abcda593a3c787;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0x93a3c787;
    param_1[1][0xc] = 0;
  }
  return;
}

// func_0x180218610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218610(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xf7f5f1d5;
    param_1[1][4] = param_1[1][4] ^ 0x1f;
    param_1[1][5] = param_1[1][5] ^ 0x9b;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x180218640
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218640(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806aeaf4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806aeaf0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806aeaf8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806aeafc;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xdb63d3a5df2fa55d;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x180218670
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218670(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][10] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2c9c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xb5181c509f9d9cf;
    param_1[1][8] = param_1[1][8] ^ 0xcf;
    param_1[1][9] = param_1[1][9] ^ 0xd9;
    param_1[1][10] = 0;
  }
  return;
}

// func_0x1802186a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802186a0(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x13) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b54c4;
    uVal_2 = param_1[2] ^ _UNK_1806b54c8;
    uVal_3 = param_1[3] ^ _UNK_1806b54cc;
    *param_1 = *param_1 ^ _DAT_1806b54c0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    param_1[4] = (param_1[4] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x12) << 0x10) ^
                 SUB164(_DAT_1806b5cf0,0);
  }
  return;
}

// func_0x1802186e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802186e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xd] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d8c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xbb2103bf0b4d771d;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xb4d771d;
    param_1[1][0xc] = param_1[1][0xc] ^ 0xbf;
    param_1[1][0xd] = 0;
  }
  return;
}

// func_0x180218720
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218720(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806b2d1c;
  uVal_9 = _UNK_1806b2d18;
  uVal_8 = _UNK_1806b2d14;
  uVal_7 = _DAT_1806b2d10;
  if (param_1[2][5] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d14;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d10;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d18;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d1c;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    *(uint *)param_1[2] = *(uint *)param_1[2] ^ 0xf7f5f1d5;
    param_1[2][4] = param_1[2][4] ^ 0x1f;
    param_1[2][5] = 0;
  }
  return;
}

// func_0x180218760
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218760(uint8_t (*param_1)[16])
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
  
  uVal_10 = _UNK_1806ae4dc;
  uVal_9 = _UNK_1806ae4d8;
  uVal_8 = _UNK_1806ae4d4;
  uVal_7 = _DAT_1806ae4d0;
  if (param_1[2][2] == '\x01') {
    uVal_3 = *(uint *)param_1[1];
    uVal_4 = *(uint *)(param_1[1] + 4);
    uVal_5 = *(uint *)(param_1[1] + 8);
    uVal_6 = *(uint *)(param_1[1] + 0xc);
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806ae4d4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806ae4d0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806ae4d8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806ae4dc;
    *param_1 = auArr_1;
    auArr_2._4_4_ = uVal_4 ^ uVal_8;
    auArr_2._0_4_ = uVal_3 ^ uVal_7;
    auArr_2._8_4_ = uVal_5 ^ uVal_9;
    auArr_2._12_4_ = uVal_6 ^ uVal_10;
    param_1[1] = auArr_2;
    param_1[2][0] = param_1[2][0] ^ 0xc5;
    param_1[2][1] = param_1[2][1] ^ 0x73;
    param_1[2][2] = 0;
  }
  return;
}

// func_0x180218800
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218800(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][2] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2d74;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2d70;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2d78;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2d7c;
    *param_1 = auArr_1;
    param_1[1][0] = param_1[1][0] ^ 0x87;
    param_1[1][1] = param_1[1][1] ^ 199;
    param_1[1][2] = 0;
  }
  return;
}

// func_0x180218820
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218820(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b54c4;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b54c0;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b54c8;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b54cc;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x2549d30d;
    param_1[1][4] = param_1[1][4] ^ 0x45;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x180218850
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218850(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][8] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2e24;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2e20;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2e28;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2e2c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0xf14339ed95ff2fcf;
    param_1[1][8] = 0;
  }
  return;
}

// func_0x180218880
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218880(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][6] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b5604;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b5600;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b5608;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b560c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0xd3c78945;
    param_1[1][4] = param_1[1][4] ^ 0x73;
    param_1[1][5] = param_1[1][5] ^ 0x49;
    param_1[1][6] = 0;
  }
  return;
}

// func_0x1802188b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802188b0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][5] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b2c9c;
    *param_1 = auArr_1;
    *(uint *)param_1[1] = *(uint *)param_1[1] ^ 0x9f9d9cf;
    param_1[1][4] = param_1[1][4] ^ 0xc5;
    param_1[1][5] = 0;
  }
  return;
}

// func_0x1802188e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802188e0(uint8_t (*param_1)[16])
{
  uint8_t auArr_1 [16];
  
  if (param_1[1][0xe] == '\x01') {
    auArr_1._4_4_ = *(uint *)(*param_1 + 4) ^ _UNK_1806b4e84;
    auArr_1._0_4_ = *(uint *)*param_1 ^ _DAT_1806b4e80;
    auArr_1._8_4_ = *(uint *)(*param_1 + 8) ^ _UNK_1806b4e88;
    auArr_1._12_4_ = *(uint *)(*param_1 + 0xc) ^ _UNK_1806b4e8c;
    *param_1 = auArr_1;
    *(uint64_t *)param_1[1] = *(uint64_t *)param_1[1] ^ 0x47910569a9f11975;
    *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) ^ 0xa9f11975;
    param_1[1][0xc] = param_1[1][0xc] ^ 0x69;
    param_1[1][0xd] = param_1[1][0xd] ^ 5;
    param_1[1][0xe] = 0;
  }
  return;
}

// func_0x180218920
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218920(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x1b) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2d84;
    uVal_2 = param_1[2] ^ _UNK_1806b2d88;
    uVal_3 = param_1[3] ^ _UNK_1806b2d8c;
    *param_1 = *param_1 ^ _DAT_1806b2d80;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_1 + 4) ^ 0xbb2103bf0b4d771d;
    param_1[6] = (param_1[6] & 0xffff | (uint)*(byte *)((int64_t)param_1 + 0x1a) << 0x10) ^
                 SUB164(_DAT_1806b26d0,0);
  }
  return;
}

// func_0x180218970
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180218970(uint *param_1)
{
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  
  if (*(char *)((int64_t)param_1 + 0x17) == '\x01') {
    uVal_1 = param_1[1] ^ _UNK_1806b2cb4;
    uVal_2 = param_1[2] ^ _UNK_1806b2cb8;
    uVal_3 = param_1[3] ^ _UNK_1806b2cbc;
    *param_1 = *param_1 ^ _DAT_1806b2cb0;
    param_1[1] = uVal_1;
    param_1[2] = uVal_2;
    param_1[3] = uVal_3;
    *(uint64_t *)(param_1 + 4) =
         (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 0x15) << 8,param_1[4]) |
         (uint64_t)*(byte *)(param_1 + 5) << 0x20) ^ SUB168(_DAT_1806ae7c0,0);
  }
  return;
}

// func_0x180218db0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180218db0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  size_t sz_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint8_t *pU64_16;
  uint64_t uVal_17;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8dbc) == '\0') {
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_15 + 0x8dbc) = 1;
    uVal_12 = _UNK_1806c0dec;
    uVal_11 = _UNK_1806c0de8;
    uVal_10 = _UNK_1806c0de4;
    *(uint32_t *)(lVal_15 + 0x8d69) = _DAT_1806c0de0;
    *(uint32_t *)(lVal_15 + 0x8d6d) = uVal_10;
    *(uint32_t *)(lVal_15 + 0x8d71) = uVal_11;
    *(uint32_t *)(lVal_15 + 0x8d75) = uVal_12;
    uVal_12 = _UNK_1806c0dfc;
    uVal_11 = _UNK_1806c0df8;
    uVal_10 = _UNK_1806c0df4;
    *(uint32_t *)(lVal_15 + 0x8d79) = _DAT_1806c0df0;
    *(uint32_t *)(lVal_15 + 0x8d7d) = uVal_10;
    *(uint32_t *)(lVal_15 + 0x8d81) = uVal_11;
    *(uint32_t *)(lVal_15 + 0x8d85) = uVal_12;
    uVal_12 = _UNK_1806c0e0c;
    uVal_11 = _UNK_1806c0e08;
    uVal_10 = _UNK_1806c0e04;
    *(uint32_t *)(lVal_15 + 0x8d89) = _DAT_1806c0e00;
    *(uint32_t *)(lVal_15 + 0x8d8d) = uVal_10;
    *(uint32_t *)(lVal_15 + 0x8d91) = uVal_11;
    *(uint32_t *)(lVal_15 + 0x8d95) = uVal_12;
    uVal_12 = _UNK_1806c0e1c;
    uVal_11 = _UNK_1806c0e18;
    uVal_10 = _UNK_1806c0e14;
    *(uint32_t *)(lVal_15 + 0x8d99) = _DAT_1806c0e10;
    *(uint32_t *)(lVal_15 + 0x8d9d) = uVal_10;
    *(uint32_t *)(lVal_15 + 0x8da1) = uVal_11;
    *(uint32_t *)(lVal_15 + 0x8da5) = uVal_12;
    uVal_12 = _UNK_1806c0e2c;
    uVal_11 = _UNK_1806c0e28;
    uVal_10 = _UNK_1806c0e24;
    *(uint32_t *)(lVal_15 + 0x8da9) = _DAT_1806c0e20;
    *(uint32_t *)(lVal_15 + 0x8dad) = uVal_10;
    *(uint32_t *)(lVal_15 + 0x8db1) = uVal_11;
    *(uint32_t *)(lVal_15 + 0x8db5) = uVal_12;
    *(uint16_t *)(lVal_15 + 0x8db9) = 0x1cf;
    func_0x180673140(&LAB_1802d65b0);
  }
  uVal_9 = _UNK_1806b2c9c;
  uVal_8 = _UNK_1806b2c98;
  uVal_7 = _UNK_1806b2c94;
  uVal_6 = _DAT_1806b2c90;
  lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_15 + 0x8d69);
  if (*(char *)(lVal_15 + 0x8dba) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_15 + 0x8d6d) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(lVal_15 + 0x8d71) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(lVal_15 + 0x8d75) ^ _UNK_1806b2c9c;
    *_Str = auArr_1;
    auArr_3._4_4_ = *(uint *)(lVal_15 + 0x8d7d) ^ uVal_7;
    auArr_3._0_4_ = *(uint *)(lVal_15 + 0x8d79) ^ uVal_6;
    auArr_3._8_4_ = *(uint *)(lVal_15 + 0x8d81) ^ uVal_8;
    auArr_3._12_4_ = *(uint *)(lVal_15 + 0x8d85) ^ uVal_9;
    *(uint8_t (*)[16])(lVal_15 + 0x8d79) = auArr_3;
    auArr_4._4_4_ = *(uint *)(lVal_15 + 0x8d8d) ^ uVal_7;
    auArr_4._0_4_ = *(uint *)(lVal_15 + 0x8d89) ^ uVal_6;
    auArr_4._8_4_ = *(uint *)(lVal_15 + 0x8d91) ^ uVal_8;
    auArr_4._12_4_ = *(uint *)(lVal_15 + 0x8d95) ^ uVal_9;
    *(uint8_t (*)[16])(lVal_15 + 0x8d89) = auArr_4;
    auArr_5._4_4_ = *(uint *)(lVal_15 + 0x8d9d) ^ uVal_7;
    auArr_5._0_4_ = *(uint *)(lVal_15 + 0x8d99) ^ uVal_6;
    auArr_5._8_4_ = *(uint *)(lVal_15 + 0x8da1) ^ uVal_8;
    auArr_5._12_4_ = *(uint *)(lVal_15 + 0x8da5) ^ uVal_9;
    *(uint8_t (*)[16])(lVal_15 + 0x8d99) = auArr_5;
    auArr_2._4_4_ = *(uint *)(lVal_15 + 0x8dad) ^ uVal_7;
    auArr_2._0_4_ = *(uint *)(lVal_15 + 0x8da9) ^ uVal_6;
    auArr_2._8_4_ = *(uint *)(lVal_15 + 0x8db1) ^ uVal_8;
    auArr_2._12_4_ = *(uint *)(lVal_15 + 0x8db5) ^ uVal_9;
    *(uint8_t (*)[16])(lVal_15 + 0x8da9) = auArr_2;
    *(byte *)(lVal_15 + 0x8db9) = *(byte *)(lVal_15 + 0x8db9) ^ 0xcf;
    *(uint8_t *)(lVal_15 + 0x8dba) = 0;
  }
  local_58 = ZEXT816(0);
  sz_13 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_13) {
    if (sz_13 < 0x10) {
      pU64_16 = local_58;
      uVal_17 = 0xf;
    }
    else {
      uVal_14 = sz_13 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_14) {
        uVal_17 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_15;
      }
      local_58._0_8_ = pU64_16;
    }
    local_48 = sz_13;
    local_40 = uVal_17;
    func_0x1806aa960(pU64_16,_Str,sz_13);
    pU64_16[sz_13] = 0;
    func_0x1801c2ba0(param_1,0,0,local_58);
    if (0xf < local_40) {
      uVal_17 = local_40 + 1;
      lVal_15 = local_58._0_8_;
      if (0xfff < uVal_17) {
        lVal_15 = *(int64_t *)(local_58._0_8_ + -8);
        if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_15)) goto LAB_180218fee;
        uVal_17 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_17);
    }
    *param_1 = &PTR_LAB_1806bf040;
    param_1[0x10] = 0xfffffe0c00000000;
    *(uint32_t *)(param_1 + 0x11) = 0;
    *(uint32_t *)((int64_t)param_1 + 0x8b) = 0;
    return param_1;
  }
  func_0x18007ba70();
LAB_180218fee:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180218ff0
void Unwind_180218ff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180219180
void Unwind_180219180(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8dd0) = 0;
  return;
}

// Unwind@180219310
void Unwind_180219310(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8dec) = 0;
  return;
}

// Unwind@1802196f0
void Unwind_1802196f0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// func_0x180219990
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180219990(uint64_t *param_1)
{
  char *_Str;
  byte *_Str_00;
  uint *pU64_1;
  uint64_t *pU64_2;
  uint8_t (*_Str_01)[16];
  func_ptr_t fnPtr_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  uint64_t ***ptr3_U64_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t *pU64_13;
  uint64_t ****ptr4_U64_14;
  uint64_t ****ptr4_U64_15;
  uint8_t *pU64_16;
  uint8_t *pU64_17;
  uint64_t uVal_18;
  uint8_t auArr_19 [16];
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint32_t uVal_23;
  uint64_t in_stack_fffffffffffffe60;
  uint32_t uVal_24;
  uint uVal_25;
  uint8_t local_178 [56];
  uint64_t local_140;
  uint8_t local_138 [56];
  uint64_t local_100;
  uint8_t local_f8 [16];
  uint8_t local_e8 [24];
  uint64_t *local_d0;
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint64_t ****local_a8;
  undefined6 uStack_a0;
  uint16_t uStack_9a;
  uint16_t uStack_98;
  uint16_t uStack_96;
  uint16_t uStack_94;
  uint16_t uStack_92;
  uint16_t uStack_90;
  uint16_t uStack_8e;
  uint16_t uStack_8c;
  uint16_t uStack_8a;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t local_78;
  uint64_t *local_70;
  uint8_t local_64;
  uint8_t local_63;
  uint8_t local_62;
  uint8_t local_61;
  uint64_t local_60;
  
  uVal_24 = (uint32_t)((uint64_t)in_stack_fffffffffffffe60 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  uStack_98 = _UNK_1806c0e6b;
  uStack_96 = (uint16_t)_UNK_1806c0e6d;
  uStack_94 = (uint16_t)((uint)_UNK_1806c0e6d >> 0x10);
  uStack_92 = (uint16_t)_UNK_1806c0e71;
  uStack_90 = (uint16_t)((uint)_UNK_1806c0e71 >> 0x10);
  uStack_8e = (uint16_t)_UNK_1806c0e75;
  uStack_8c = (uint16_t)((uint)_UNK_1806c0e75 >> 0x10);
  local_a8 = (uint64_t ****)_DAT_1806c0e5b;
  uStack_a0 = _UNK_1806c0e63;
  uStack_9a = _DAT_1806c0e69;
  local_70 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8e0c) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x8e0c) = 1;
    func_0x18008fa60(lVal_12 + 0x8ded,&local_a8);
    func_0x180673140(&LAB_1802d6650);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8ded);
  func_0x1802e31f0(_Str);
  uStack_98 = 0;
  uStack_96 = 0;
  uStack_94 = 0;
  uStack_92 = 0;
  uStack_90 = 0;
  uStack_8e = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  local_a8 = (uint64_t ****)0x0;
  uStack_a0 = 0;
  uStack_9a = 0;
  sz_8 = strlen(_Str);
  if ((int64_t)sz_8 < 0) {
    func_0x18007ba70();
LAB_18021a803:
    local_63 = 1;
    func_0x18007ba70();
LAB_18021a810:
    local_62 = 1;
    func_0x18007ba70();
LAB_18021a81d:
    func_0x18007ba70();
LAB_18021a823:
    func_0x18007ba70();
LAB_18021a829:
    func_0x18007ba70();
  }
  else {
    if (sz_8 < 0x10) {
      ptr4_U64_15 = &local_a8;
      uVal_18 = 0xf;
    }
    else {
      uVal_9 = sz_8 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_9) {
        uVal_18 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_a8 = ptr4_U64_15;
      }
      else {
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_15;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint16_t)(sz_8 >> 0x10);
    uStack_94 = (uint16_t)(sz_8 >> 0x20);
    uStack_92 = (uint16_t)(sz_8 >> 0x30);
    uStack_90 = (uint16_t)uVal_18;
    uStack_8e = (uint16_t)(uVal_18 >> 0x10);
    uStack_8c = (uint16_t)(uVal_18 >> 0x20);
    uStack_8a = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(ptr4_U64_15,_Str,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_8) = 0;
    ptr4_U64_15 = &local_a8;
    func_0x18018c570(local_70,0,0,ptr4_U64_15);
    uVal_18 = CONCAT26(uStack_8a,CONCAT24(uStack_8c,CONCAT22(uStack_8e,uStack_90)));
    if (0xf < uVal_18) {
      uVal_9 = uVal_18 + 1;
      ptr4_U64_14 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_14 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18021a7fc;
        uVal_9 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_9);
    }
    *local_70 = &PTR_LAB_1806bf170;
    pU64_13 = local_70 + 0x1a;
    *(uint32_t *)(local_70 + 0x1a) = 0x3f800000;
    local_d0 = local_70 + 0x1b;
    *(uint8_t (*)[16])(local_70 + 0x1d) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_70 + 0x1b) = (uint8_t  [16])0x0;
    *(uint32_t *)(local_70 + 0x1e) = 0xffffffff;
    local_70[0x1f] = 0;
    local_140 = 0;
    uVal_23 = DAT_1806b26b4;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_140 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_178);
      uVal_23 = *(uint32_t *)pU64_13;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8e10) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8e10) = 1;
      *(uint16_t *)(lVal_12 + 0x8e0d) = 0x1dd;
      func_0x180673140(&LAB_1802d6680);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (byte *)(lVal_12 + 0x8e0d);
    if (*(char *)(lVal_12 + 0x8e0e) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xdd;
      *(uint8_t *)(lVal_12 + 0x8e0e) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_94 = 0;
    uStack_92 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9a = 0;
    sz_8 = strlen((char *)_Str_00);
    if ((int64_t)sz_8 < 0) goto LAB_18021a803;
    uVal_18 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_9) {
        uVal_18 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_63 = 1;
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_a8 = ptr4_U64_15;
      }
      else {
        local_63 = 1;
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_15;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint16_t)(sz_8 >> 0x10);
    uStack_94 = (uint16_t)(sz_8 >> 0x20);
    uStack_92 = (uint16_t)(sz_8 >> 0x30);
    uStack_90 = (uint16_t)uVal_18;
    uStack_8e = (uint16_t)(uVal_18 >> 0x10);
    uStack_8c = (uint16_t)(uVal_18 >> 0x20);
    uStack_8a = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(ptr4_U64_15,_Str_00,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_8) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8e1c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8e1c) = 1;
      *(uint32_t *)(lVal_12 + 0x8e14) = 0x8013b88e;
      *(uint16_t *)(lVal_12 + 0x8e18) = 0x1cb;
      func_0x180673140(&LAB_1802d66a0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x8e14);
    if (*(char *)(lVal_12 + 0x8e19) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xe569d1dd;
      *(byte *)(lVal_12 + 0x8e18) = *(byte *)(lVal_12 + 0x8e18) ^ 0xcb;
      *(uint8_t *)(lVal_12 + 0x8e19) = 0;
    }
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18021a810;
    if (sz_8 < 0x10) {
      pU64_16 = local_c8;
      uVal_18 = 0xf;
    }
    else {
      uVal_9 = sz_8 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_9) {
        uVal_18 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_62 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_62 = 1;
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_16;
    }
    local_b8._8_8_ = uVal_18;
    local_b8._0_8_ = sz_8;
    func_0x1806aa960(pU64_16,pU64_1,sz_8);
    pU64_16[sz_8] = 0;
    uVal_25 = 0x40000000;
    pU64_16 = local_c8;
    ptr4_U64_15 = &local_a8;
    func_0x1801cd2e0(local_70,pU64_16,ptr4_U64_15,pU64_13,uVal_23,CONCAT44(uVal_24,0x3f000000),0x40000000,
                  local_178,0);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_18 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18021a7fc;
        uVal_18 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    uVal_18 = CONCAT26(uStack_8a,CONCAT24(uStack_8c,CONCAT22(uStack_8e,uStack_90)));
    if (0xf < uVal_18) {
      uVal_9 = uVal_18 + 1;
      ptr4_U64_14 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_14 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18021a7fc;
        uVal_9 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_9);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8e30) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8e30) = 1;
      *(uint64_t *)(lVal_12 + 0x8e20) = 0xb8beb85f6cea6c9;
      *(uint32_t *)(lVal_12 + 0x8e28) = 0xffc6b1e2;
      *(uint16_t *)(lVal_12 + 0x8e2c) = 0x1a5;
      func_0x180673140(&LAB_1802d66d0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0x8e20);
    if (*(char *)(lVal_12 + 0x8e2d) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_12 + 0x8e28) = *(uint *)(lVal_12 + 0x8e28) ^ 0x93a3c787;
      *(byte *)(lVal_12 + 0x8e2c) = *(byte *)(lVal_12 + 0x8e2c) ^ 0xa5;
      *(uint8_t *)(lVal_12 + 0x8e2d) = 0;
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_94 = 0;
    uStack_92 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9a = 0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_18021a81d;
    uVal_18 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_9) {
        uVal_18 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
        local_a8 = ptr4_U64_15;
      }
      else {
        ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
        ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_15[-1] = ptr3_U64_10;
        local_a8 = ptr4_U64_15;
      }
    }
    uStack_98 = (uint16_t)sz_8;
    uStack_96 = (uint16_t)(sz_8 >> 0x10);
    uStack_94 = (uint16_t)(sz_8 >> 0x20);
    uStack_92 = (uint16_t)(sz_8 >> 0x30);
    uStack_90 = (uint16_t)uVal_18;
    uStack_8e = (uint16_t)(uVal_18 >> 0x10);
    uStack_8c = (uint16_t)(uVal_18 >> 0x20);
    uStack_8a = (uint16_t)(uVal_18 >> 0x30);
    func_0x1806aa960(ptr4_U64_15,pU64_2,sz_8);
    *(uint8_t *)((int64_t)ptr4_U64_15 + sz_8) = 0;
    ptr4_U64_15 = &local_a8;
    uVal_11 = func_0x1801d3650(local_d0,ptr4_U64_15,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8e44) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8e44) = 1;
      *(uint64_t *)(lVal_12 + 0x8e38) = 0x29c4a4d1f2d1b2c3;
      *(uint16_t *)(lVal_12 + 0x8e40) = 0x187;
      func_0x180673140(&LAB_1802d6700);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0x8e38);
    if (*(char *)(lVal_12 + 0x8e41) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47abcda593a3c787;
      *(byte *)(lVal_12 + 0x8e40) = *(byte *)(lVal_12 + 0x8e40) ^ 0x87;
      *(uint8_t *)(lVal_12 + 0x8e41) = 0;
    }
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_2);
    if ((int64_t)sz_8 < 0) goto LAB_18021a823;
    uVal_18 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_9) {
        uVal_18 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_c8._0_8_ = pU64_16;
    }
    local_b8._8_8_ = uVal_18;
    local_b8._0_8_ = sz_8;
    func_0x1806aa960(pU64_16,pU64_2,sz_8);
    pU64_16[sz_8] = 0;
    pU64_16 = local_c8;
    uVal_11 = func_0x1801d3650(uVal_11,pU64_16,1);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8e50) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8e50) = 1;
      *(uint32_t *)(lVal_12 + 0x8e48) = 0xfbd7a8c5;
      *(uint16_t *)(lVal_12 + 0x8e4c) = 0x1a5;
      func_0x180673140(&LAB_1802d6730);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x8e48);
    if (*(char *)(lVal_12 + 0x8e4d) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x93a3c787;
      *(byte *)(lVal_12 + 0x8e4c) = *(byte *)(lVal_12 + 0x8e4c) ^ 0xa5;
      *(uint8_t *)(lVal_12 + 0x8e4d) = 0;
    }
    local_e8._0_16_ = (uint8_t  [16])0x0;
    local_f8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_18021a829;
    if (sz_8 < 0x10) {
      pU64_17 = local_f8;
      uVal_18 = 0xf;
    }
    else {
      uVal_9 = sz_8 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_9) {
        uVal_18 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_f8._0_8_ = pU64_17;
    }
    local_e8._8_8_ = uVal_18;
    local_e8._0_8_ = sz_8;
    func_0x1806aa960(pU64_17,pU64_1,sz_8);
    pU64_17[sz_8] = 0;
    func_0x1801d3650(uVal_11,local_f8,2);
    if (0xf < (uint64_t)local_e8._8_8_) {
      uVal_18 = local_e8._8_8_ + 1;
      lVal_12 = local_f8._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_12)) goto LAB_18021a7fc;
        uVal_18 = local_e8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_18 = local_b8._8_8_ + 1;
      lVal_12 = local_c8._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) goto LAB_18021a7fc;
        uVal_18 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    uVal_18 = CONCAT26(uStack_8a,CONCAT24(uStack_8c,CONCAT22(uStack_8e,uStack_90)));
    if (0xf < uVal_18) {
      uVal_9 = uVal_18 + 1;
      ptr4_U64_14 = local_a8;
      if (0xfff < uVal_9) {
        ptr4_U64_14 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_14)))
        goto LAB_18021a7fc;
        uVal_9 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_14,uVal_9);
    }
    local_100 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_100 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_138);
    }
    local_88 = _DAT_1806c0e99;
    uStack_84 = _UNK_1806c0e9d;
    uStack_80 = _UNK_1806c0ea1;
    uStack_7c = _UNK_1806c0ea5;
    uStack_98 = (uint16_t)_DAT_1806c0e89;
    uStack_96 = (uint16_t)((uint)_DAT_1806c0e89 >> 0x10);
    uStack_94 = (uint16_t)_UNK_1806c0e8d;
    uStack_92 = (uint16_t)((uint)_UNK_1806c0e8d >> 0x10);
    uStack_90 = (uint16_t)_UNK_1806c0e91;
    uStack_8e = (uint16_t)((uint)_UNK_1806c0e91 >> 0x10);
    uStack_8c = (uint16_t)_UNK_1806c0e95;
    uStack_8a = (uint16_t)((uint)_UNK_1806c0e95 >> 0x10);
    local_a8 = _DAT_1806c0e79;
    uStack_a0 = (undefined6)_UNK_1806c0e81;
    uStack_9a = (uint16_t)((uint64_t)_UNK_1806c0e81 >> 0x30);
    local_78 = 0xf79b9eb6;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8e88) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8e88) = 1;
      func_0x18012b270(lVal_12 + 0x8e51,&local_a8);
      func_0x180673140(&LAB_1802d6760);
    }
    uVal_7 = _UNK_1806b2d1c;
    uVal_6 = _UNK_1806b2d18;
    uVal_5 = _UNK_1806b2d14;
    uVal_4 = _DAT_1806b2d10;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x8e51);
    if (*(char *)(lVal_12 + 0x8e85) == '\x01') {
      uVal_20 = *(uint *)(lVal_12 + 0x8e55) ^ _UNK_1806b2d14;
      uVal_21 = *(uint *)(lVal_12 + 0x8e59) ^ _UNK_1806b2d18;
      uVal_22 = *(uint *)(lVal_12 + 0x8e5d) ^ _UNK_1806b2d1c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d10;
      *(uint *)(lVal_12 + 0x8e55) = uVal_20;
      *(uint *)(lVal_12 + 0x8e59) = uVal_21;
      *(uint *)(lVal_12 + 0x8e5d) = uVal_22;
      *(uint *)(lVal_12 + 0x8e61) = *(uint *)(lVal_12 + 0x8e61) ^ uVal_4;
      *(uint *)(lVal_12 + 0x8e65) = *(uint *)(lVal_12 + 0x8e65) ^ uVal_5;
      *(uint *)(lVal_12 + 0x8e69) = *(uint *)(lVal_12 + 0x8e69) ^ uVal_6;
      *(uint *)(lVal_12 + 0x8e6d) = *(uint *)(lVal_12 + 0x8e6d) ^ uVal_7;
      *(uint *)(lVal_12 + 0x8e71) = *(uint *)(lVal_12 + 0x8e71) ^ uVal_4;
      *(uint *)(lVal_12 + 0x8e75) = *(uint *)(lVal_12 + 0x8e75) ^ uVal_5;
      *(uint *)(lVal_12 + 0x8e79) = *(uint *)(lVal_12 + 0x8e79) ^ uVal_6;
      *(uint *)(lVal_12 + 0x8e7d) = *(uint *)(lVal_12 + 0x8e7d) ^ uVal_7;
      *(uint *)(lVal_12 + 0x8e81) = *(uint *)(lVal_12 + 0x8e81) ^ 0xf7f5f1d5;
      *(uint8_t *)(lVal_12 + 0x8e85) = 0;
    }
    local_c8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_8) {
      uVal_18 = 0xf;
      if (0xf < sz_8) {
        uVal_9 = sz_8 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_9) {
          uVal_18 = uVal_9;
        }
        if (uVal_9 < 0xfff) {
          local_61 = 1;
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
        }
        else {
          local_61 = 1;
          lVal_12 = func_0x180672de0(uVal_18 + 0x28);
          pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_16 + -8) = lVal_12;
        }
        local_c8._0_8_ = pU64_16;
      }
      local_b8._8_8_ = uVal_18;
      local_b8._0_8_ = sz_8;
      func_0x1806aa960(pU64_16,pU64_1,sz_8);
      pU64_16[sz_8] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x8ea0) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0x8ea0) = 1;
        uVal_11 = _UNK_1806be308;
        *(uint64_t *)(lVal_12 + 0x8e90) = _DAT_1806be300;
        *(uint64_t *)(lVal_12 + 0x8e98) = uVal_11;
        func_0x180673140(&LAB_1802d67a0);
      }
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str_01 = (uint8_t (*)[16])(lVal_12 + 0x8e90);
      if (*(char *)(lVal_12 + 0x8e9f) == '\x01') {
        uVal_24 = *(uint32_t *)(lVal_12 + 0x8e98);
        auArr_19 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_24 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_24 >> 0x10),uVal_24)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_12 + 0x8e9d) >> 8)),
                                                  (char)((uint)uVal_24 >> 8)),
                                          CONCAT11((char)*(uint16_t *)(lVal_12 + 0x8e9d),
                                                   (char)uVal_24))),_DAT_1806ae110);
        auArr_19._8_8_ =
             auArr_19._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_12 + 0x8e9c) << 0x20;
        auArr_19 = pblendw(auArr_19,*_Str_01,0xf);
        *_Str_01 = auArr_19 ^ _DAT_1806be310;
      }
      local_a8 = (uint64_t ****)0x0;
      uStack_a0 = 0;
      uStack_9a = 0;
      sz_8 = strlen((char *)_Str_01);
      if (-1 < (int64_t)sz_8) {
        uVal_18 = 0xf;
        if (0xf < sz_8) {
          uVal_9 = sz_8 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_9) {
            uVal_18 = uVal_9;
          }
          if (uVal_9 < 0xfff) {
            local_64 = 1;
            ptr4_U64_15 = (uint64_t ****)func_0x180672de0(uVal_18 + 1);
            local_a8 = ptr4_U64_15;
          }
          else {
            local_64 = 1;
            ptr3_U64_10 = (uint64_t ***)func_0x180672de0(uVal_18 + 0x28);
            ptr4_U64_15 = (uint64_t ****)((int64_t)ptr3_U64_10 + 0x27U & 0xffffffffffffffe0);
            ptr4_U64_15[-1] = ptr3_U64_10;
            local_a8 = ptr4_U64_15;
          }
        }
        uStack_98 = (uint16_t)sz_8;
        uStack_96 = (uint16_t)(sz_8 >> 0x10);
        uStack_94 = (uint16_t)(sz_8 >> 0x20);
        uStack_92 = (uint16_t)(sz_8 >> 0x30);
        uStack_90 = (uint16_t)uVal_18;
        uStack_8e = (uint16_t)(uVal_18 >> 0x10);
        uStack_8c = (uint16_t)(uVal_18 >> 0x20);
        uStack_8a = (uint16_t)(uVal_18 >> 0x30);
        func_0x1806aa960(ptr4_U64_15,_Str_01,sz_8);
        *(uint8_t *)((int64_t)ptr4_U64_15 + sz_8) = 0;
        func_0x1801d3a80(local_70,&local_a8,local_c8,local_d0,2,local_138,uVal_25 & 0xffffff00);
        uVal_18 = CONCAT26(uStack_8a,CONCAT24(uStack_8c,CONCAT22(uStack_8e,uStack_90)));
        if (0xf < uVal_18) {
          uVal_9 = uVal_18 + 1;
          ptr4_U64_15 = local_a8;
          if (0xfff < uVal_9) {
            ptr4_U64_15 = (uint64_t ****)local_a8[-1];
            if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_15)))
            goto LAB_18021a7fc;
            uVal_9 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_15,uVal_9);
        }
        if (0xf < (uint64_t)local_b8._8_8_) {
          uVal_18 = local_b8._8_8_ + 1;
          lVal_12 = local_c8._0_8_;
          if (0xfff < uVal_18) {
            lVal_12 = *(int64_t *)(local_c8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_12)) {
LAB_18021a7fc:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_18 = local_b8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_18);
        }
        return local_70;
      }
      goto LAB_18021a83c;
    }
  }
  local_61 = 1;
  func_0x18007ba70();
LAB_18021a83c:
  local_64 = 1;
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_13 = (uint64_t *)(*fnPtr_3)();
  return pU64_13;
}

// Unwind@18021a850
void Unwind_18021a850(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18021a8b0
void Unwind_18021a8b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@18021a910
void Unwind_18021a910(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8e88) = 0;
  *(uint8_t *)(param_2 + 0x167) = 1;
  return;
}

// Unwind@18021a970
void Unwind_18021a970(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@18021a9c0
void Unwind_18021a9c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x166) = 0;
  return;
}

// Unwind@18021aa10
void Unwind_18021aa10(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x166);
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x165) = uVal_1;
  return;
}

// Unwind@18021aa60
void Unwind_18021aa60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x165) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18021aad0
void Unwind_18021aad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18021ab10
void Unwind_18021ab10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18021ab60
void Unwind_18021ab60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@18021abb0
void Unwind_18021abb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x164) = 0;
  return;
}

// Unwind@18021ac00
void Unwind_18021ac00(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x164);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x167) = uVal_1;
  return;
}

// Unwind@18021ac50
void Unwind_18021ac50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x167) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@18021acc0
void Unwind_18021acc0(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0xf8));
  func_0x18018ce50(*(uint64_t *)(param_2 + 0x158));
  return;
}

// Unwind@18021ad10
void Unwind_18021ad10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8e0c) = 0;
  return;
}

// Unwind@18021b030
void Unwind_18021b030(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8ed4) = 0;
  return;
}

// Unwind@18021b250
void Unwind_18021b250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@18021b490
void Unwind_18021b490(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18021dc00
void Unwind_18021dc00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18021dce0
void Unwind_18021dce0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x1d0);
  return;
}

// Unwind@18021ddc0
void Unwind_18021ddc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@18021dea0
void Unwind_18021dea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@18021df80
void Unwind_18021df80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18021e060
void Unwind_18021e060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18021e130
void Unwind_18021e130(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18021e210
void Unwind_18021e210(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@18021e2f0
void Unwind_18021e2f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@18021e3d0
void Unwind_18021e3d0(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x118);
  return;
}

// Unwind@18021e4b0
void Unwind_18021e4b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@18021e590
void Unwind_18021e590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@18021e670
void Unwind_18021e670(uint64_t param_1,int64_t param_2)
{
  func_0x1800d0dd0(param_2 + 0xd0);
  return;
}

// Unwind@18021e740
void Unwind_18021e740(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x48);
  return;
}

// func_0x18021e810
uint64_t func_0x18021e810(uint64_t param_1,uint64_t *param_2,uint32_t param_3,uint32_t param_4)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_78 [40];
  uint64_t *local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint32_t local_30 [4];
  uint32_t local_20;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_78;
  local_40 = 0x11;
  local_38 = local_30;
  local_50 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_50 = (uint64_t *)*param_2;
  }
  local_48 = param_2[2];
  local_30[0] = param_3;
  local_20 = param_4;
  func_0x18063ff10(param_1,&local_50,&local_40);
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_78)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_78);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// Unwind@18021eff0
void Unwind_18021eff0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8f98) = 0;
  return;
}

// Unwind@18021f070
void Unwind_18021f070(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18021f0e0
void Unwind_18021f0e0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x70);
  return;
}

// Unwind@18021f150
void Unwind_18021f150(uint64_t param_1,int64_t param_2)
{
  func_0x1800d0dd0(param_2 + 0x80);
  return;
}

// Unwind@18021f1c0
void Unwind_18021f1c0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x30);
  return;
}

// func_0x18021f300
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18021f300(uint64_t *param_1)
{
  char *fnPtr_1;
  uint *pU64_2;
  uint8_t (*_Str)[16];
  uint8_t *pU64_3;
  uint64_t *pU64_4;
  uint32_t *pU64_5;
  uint32_t uVal_6;
  func_ptr_t fnPtr_7;
  short sz_8;
  short sz_9;
  short sz_10;
  short sz_11;
  short sz_12;
  short sz_13;
  short sz_14;
  short sz_15;
  uint uVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  int64_t lVal_19;
  int64_t lVal_20;
  uint32_t uVal_21;
  int64_t lVal_22;
  size_t sz_23;
  uint64_t uVal_24;
  int64_t lVal_25;
  uint64_t *pU64_26;
  uint8_t *pU64_27;
  uint8_t *pU64_28;
  uint8_t *pU64_29;
  uint64_t uVal_30;
  uint8_t uVal_31;
  int64_t lVal_32;
  uint uVal_34;
  uint uVal_35;
  int64_t lVal_36;
  uint uVal_37;
  uint8_t auArr_33 [16];
  int64_t lVal_38;
  uint uVal_39;
  uint uVal_40;
  int64_t lVal_41;
  uint uVal_42;
  int64_t lVal_43;
  int64_t lVal_44;
  int64_t lVal_45;
  int64_t lVal_46;
  uint64_t uVal_47;
  uint64_t uVal_49;
  uint8_t auArr_48 [16];
  uint64_t uVal_50;
  uint64_t uVal_51;
  uint64_t uVal_52;
  uint64_t uVal_54;
  uint8_t auArr_53 [16];
  uint64_t uVal_55;
  uint64_t uVal_58;
  uint8_t auArr_56 [16];
  uint8_t auArr_57 [16];
  uint8_t auArr_59 [16];
  uint8_t auArr_60 [16];
  uint8_t auArr_61 [16];
  uint8_t auArr_62 [16];
  uint32_t uVal_64;
  uint64_t uVal_63;
  uint in_stack_fffffffffffffca8;
  uint8_t local_338 [56];
  uint64_t local_300;
  uint8_t local_2f8 [56];
  uint64_t local_2c0;
  uint8_t local_2b8 [56];
  uint64_t local_280;
  uint8_t local_278 [56];
  uint64_t local_240;
  uint8_t local_238 [56];
  uint64_t local_200;
  uint8_t local_1f8 [56];
  uint64_t local_1c0;
  uint8_t local_1b8 [56];
  uint64_t local_180;
  uint64_t local_178;
  uint64_t uStack_170;
  uint16_t local_168;
  uint8_t local_158 [16];
  uint32_t local_148;
  uint32_t uStack_144;
  uint32_t uStack_140;
  uint16_t uStack_13c;
  uint16_t uStack_13a;
  uint32_t uStack_138;
  uint16_t uStack_134;
  uint16_t uStack_132;
  uint32_t uStack_130;
  uint16_t uStack_12c;
  uint16_t uStack_12a;
  uint16_t uStack_128;
  uint16_t uStack_126;
  uint16_t uStack_124;
  uint16_t uStack_122;
  uint16_t uStack_120;
  uint16_t uStack_11e;
  uint16_t uStack_11c;
  uint8_t uStack_11a;
  uint8_t local_119;
  uint16_t uStack_118;
  uint8_t uStack_116;
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint64_t *local_e8;
  uint8_t local_de;
  uint8_t local_dd;
  uint8_t local_dc;
  uint8_t local_db;
  uint8_t local_da;
  uint8_t local_d9;
  uint8_t local_d8;
  uint8_t local_d7;
  uint8_t local_d6;
  uint8_t local_d5;
  uint8_t local_d4;
  uint8_t local_d3;
  uint8_t local_d2;
  uint8_t local_d1;
  uint64_t local_d0;
  
  local_d0 = 0xfffffffffffffffe;
  local_e8 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8ff4) == '\0') {
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_25 + 0x8ff4) = 1;
    *(uint8_t *)(lVal_25 + 0x8ff2) = 1;
    uVal_21 = _UNK_1806c0eea;
    uVal_6 = _UNK_1806c0ee6;
    uVal_64 = _UNK_1806c0ee2;
    *(uint32_t *)(lVal_25 + 0x8f99) = _DAT_1806c0ede;
    *(uint32_t *)(lVal_25 + 0x8f9d) = uVal_64;
    *(uint32_t *)(lVal_25 + 0x8fa1) = uVal_6;
    *(uint32_t *)(lVal_25 + 0x8fa5) = uVal_21;
    uVal_21 = _UNK_1806c0efa;
    uVal_6 = _UNK_1806c0ef6;
    uVal_64 = _UNK_1806c0ef2;
    *(uint32_t *)(lVal_25 + 0x8fa9) = _DAT_1806c0eee;
    *(uint32_t *)(lVal_25 + 0x8fad) = uVal_64;
    *(uint32_t *)(lVal_25 + 0x8fb1) = uVal_6;
    *(uint32_t *)(lVal_25 + 0x8fb5) = uVal_21;
    uVal_21 = _UNK_1806c0f0a;
    uVal_6 = _UNK_1806c0f06;
    uVal_64 = _UNK_1806c0f02;
    *(uint32_t *)(lVal_25 + 0x8fb9) = _DAT_1806c0efe;
    *(uint32_t *)(lVal_25 + 0x8fbd) = uVal_64;
    *(uint32_t *)(lVal_25 + 0x8fc1) = uVal_6;
    *(uint32_t *)(lVal_25 + 0x8fc5) = uVal_21;
    uVal_21 = _UNK_1806c0f1a;
    uVal_6 = _UNK_1806c0f16;
    uVal_64 = _UNK_1806c0f12;
    *(uint32_t *)(lVal_25 + 0x8fc9) = _DAT_1806c0f0e;
    *(uint32_t *)(lVal_25 + 0x8fcd) = uVal_64;
    *(uint32_t *)(lVal_25 + 0x8fd1) = uVal_6;
    *(uint32_t *)(lVal_25 + 0x8fd5) = uVal_21;
    uVal_21 = _UNK_1806c0f2a;
    uVal_6 = _UNK_1806c0f26;
    uVal_64 = _UNK_1806c0f22;
    *(uint32_t *)(lVal_25 + 0x8fd9) = _DAT_1806c0f1e;
    *(uint32_t *)(lVal_25 + 0x8fdd) = uVal_64;
    *(uint32_t *)(lVal_25 + 0x8fe1) = uVal_6;
    *(uint32_t *)(lVal_25 + 0x8fe5) = uVal_21;
    uVal_63 = _UNK_1806c0f2f;
    *(uint64_t *)(lVal_25 + 0x8fe2) =
         CONCAT17(UNK_1806c0f2e,CONCAT43(_UNK_1806c0f2a,_DAT_1806c0f27));
    *(uint64_t *)(lVal_25 + 0x8fea) = uVal_63;
    func_0x180673140(&LAB_1802d6a80);
  }
  lVal_20 = _UNK_1806bb038;
  lVal_19 = _DAT_1806bb030;
  auArr_33 = _DAT_1806bb020;
  uVal_18 = _UNK_1806bb018;
  uVal_17 = _DAT_1806bb010;
  uVal_24 = _UNK_1806b2d68;
  uVal_30 = _DAT_1806b2d60;
  lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_1 = (char *)(lVal_25 + 0x8f99);
  if (*(char *)(lVal_25 + 0x8ff2) == '\x01') {
    lVal_22 = 0;
    lVal_32 = _DAT_1806bafe0;
    lVal_36 = _UNK_1806bafe8;
    lVal_38 = _DAT_1806baff0;
    lVal_41 = _UNK_1806baff8;
    lVal_43 = _DAT_1806bb000;
    lVal_44 = _UNK_1806bb008;
    lVal_45 = _DAT_1806aeb30;
    lVal_46 = _UNK_1806aeb38;
    do {
      uVal_50 = lVal_45 << 3 & uVal_17;
      uVal_51 = lVal_46 << 3 & uVal_18;
      uVal_55 = lVal_43 << 3 & uVal_17;
      uVal_58 = lVal_44 << 3 & uVal_18;
      uVal_52 = lVal_38 << 3 & uVal_17;
      uVal_54 = lVal_41 << 3 & uVal_18;
      uVal_47 = lVal_32 << 3 & uVal_17;
      uVal_49 = lVal_36 << 3 & uVal_18;
      auArr_60._0_8_ = uVal_30 >> uVal_47;
      auArr_60._8_8_ = uVal_24 >> uVal_47;
      auArr_48._0_8_ = uVal_30 >> uVal_49;
      auArr_48._8_8_ = uVal_24 >> uVal_49;
      auArr_48 = pblendw(auArr_48,auArr_60,0xf);
      auArr_62._0_8_ = uVal_30 >> uVal_52;
      auArr_62._8_8_ = uVal_24 >> uVal_52;
      auArr_61._0_8_ = uVal_30 >> uVal_54;
      auArr_61._8_8_ = uVal_24 >> uVal_54;
      auArr_62 = pblendw(auArr_61,auArr_62,0xf);
      auArr_57._0_8_ = uVal_30 >> uVal_55;
      auArr_57._8_8_ = uVal_24 >> uVal_55;
      auArr_59._0_8_ = uVal_30 >> uVal_58;
      auArr_59._8_8_ = uVal_24 >> uVal_58;
      auArr_60 = pblendw(auArr_59,auArr_57,0xf);
      auArr_53._0_8_ = uVal_30 >> uVal_50;
      auArr_53._8_8_ = uVal_24 >> uVal_50;
      auArr_56._0_8_ = uVal_30 >> uVal_51;
      auArr_56._8_8_ = uVal_24 >> uVal_51;
      auArr_57 = pblendw(auArr_56,auArr_53,0xf);
      auArr_57 = packusdw(auArr_57 & auArr_33,auArr_60 & auArr_33);
      auArr_48 = packusdw(auArr_62 & auArr_33,auArr_48 & auArr_33);
      auArr_48 = packusdw(auArr_57,auArr_48);
      sz_8 = auArr_48._0_2_;
      sz_9 = auArr_48._2_2_;
      sz_10 = auArr_48._4_2_;
      sz_11 = auArr_48._6_2_;
      sz_12 = auArr_48._8_2_;
      sz_13 = auArr_48._10_2_;
      sz_14 = auArr_48._12_2_;
      sz_15 = auArr_48._14_2_;
      *(uint64_t *)(fnPtr_1 + lVal_22) =
           *(uint64_t *)(fnPtr_1 + lVal_22) ^
           CONCAT17((0 < sz_15) * (sz_15 < 0xff) * auArr_48[14] - (0xff < sz_15),
                    CONCAT16((0 < sz_14) * (sz_14 < 0xff) * auArr_48[12] - (0xff < sz_14),
                             CONCAT15((0 < sz_13) * (sz_13 < 0xff) * auArr_48[10] - (0xff < sz_13)
                                      ,CONCAT14((0 < sz_12) * (sz_12 < 0xff) * auArr_48[8] -
                                                (0xff < sz_12),
                                                CONCAT13((0 < sz_11) * (sz_11 < 0xff) * auArr_48[6]
                                                         - (0xff < sz_11),
                                                         CONCAT12((0 < sz_10) * (sz_10 < 0xff) *
                                                                  auArr_48[4] - (0xff < sz_10),
                                                                  CONCAT11((0 < sz_9) *
                                                                           (sz_9 < 0xff) *
                                                                           auArr_48[2] -
                                                                           (0xff < sz_9),
                                                                           (0 < sz_8) *
                                                                           (sz_8 < 0xff) *
                                                                           auArr_48[0] -
                                                                           (0xff < sz_8))))))));
      lVal_22 = lVal_22 + 8;
      lVal_45 = lVal_45 + lVal_19;
      lVal_46 = lVal_46 + lVal_20;
      lVal_43 = lVal_43 + lVal_19;
      lVal_44 = lVal_44 + lVal_20;
      lVal_38 = lVal_38 + lVal_19;
      lVal_41 = lVal_41 + lVal_20;
      lVal_32 = lVal_32 + lVal_19;
      lVal_36 = lVal_36 + lVal_20;
    } while (lVal_22 != 0x58);
    *(byte *)(lVal_25 + 0x8ff1) = *(byte *)(lVal_25 + 0x8ff1) ^ 0x75;
    *(uint8_t *)(lVal_25 + 0x8ff2) = 0;
  }
  local_158 = (uint8_t  [16])0x0;
  sz_23 = strlen(fnPtr_1);
  if ((int64_t)sz_23 < 0) {
    func_0x18007ba70();
LAB_1802213c0:
    local_d1 = 1;
    func_0x18007ba70();
LAB_1802213cd:
    local_dc = 1;
    func_0x18007ba70();
LAB_1802213da:
    local_d2 = 1;
    func_0x18007ba70();
LAB_1802213e7:
    local_dd = 1;
    func_0x18007ba70();
LAB_1802213f4:
    local_d3 = 1;
    func_0x18007ba70();
LAB_180221401:
    local_de = 1;
    func_0x18007ba70();
LAB_18022140e:
    local_d5 = 1;
    func_0x18007ba70();
LAB_18022141b:
    local_d4 = 1;
    func_0x18007ba70();
LAB_180221428:
    local_d7 = 1;
    func_0x18007ba70();
LAB_180221435:
    local_d6 = 1;
    func_0x18007ba70();
LAB_180221442:
    local_d9 = 1;
    func_0x18007ba70();
LAB_18022144f:
    local_d8 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_23 < 0x10) {
      pU64_28 = local_158;
      uVal_30 = 0xf;
    }
    else {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_25;
      }
      local_158._0_8_ = pU64_28;
    }
    local_148 = (uint32_t)sz_23;
    uStack_144 = (uint32_t)(sz_23 >> 0x20);
    uStack_140 = (uint32_t)uVal_30;
    uStack_13c = (uint16_t)(uVal_30 >> 0x20);
    uStack_13a = (uint16_t)(uVal_30 >> 0x30);
    func_0x1806aa960(pU64_28,fnPtr_1,sz_23);
    pU64_28[sz_23] = 0;
    pU64_28 = local_158;
    func_0x1801c2ba0(local_e8,0,4,pU64_28);
    uVal_30 = CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
    if (0xf < uVal_30) {
      uVal_24 = uVal_30 + 1;
      lVal_25 = local_158._0_8_;
      if (0xfff < uVal_24) {
        lVal_25 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_24 = uVal_30 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_24);
    }
    *local_e8 = &PTR_LAB_1806bf2d0;
    pU64_26 = local_e8 + 0x10;
    *(uint16_t *)(local_e8 + 0x10) = 0x101;
    *(uint8_t *)((int64_t)local_e8 + 0x82) = 1;
    uVal_63 = _UNK_1806be358;
    *(uint64_t *)((int64_t)local_e8 + 0x84) = _DAT_1806be350;
    *(uint64_t *)((int64_t)local_e8 + 0x8c) = uVal_63;
    local_300 = 0;
    if (DAT_18083fb50 == (uint64_t *)0x0) {
      uVal_31 = 1;
    }
    else {
      local_300 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_338);
      uVal_31 = *(uint8_t *)pU64_26;
    }
    local_108._8_8_ = _UNK_1806c0f3f;
    local_108._0_8_ = _DAT_1806c0f37;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x9008) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x9008) = 1;
      func_0x18007d150(lVal_25 + 0x8ff5,local_108);
      func_0x180673140(&LAB_1802d6ad0);
    }
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_25 + 0x8ff5);
    if (*(char *)(lVal_25 + 0x9005) == '\x01') {
      uVal_34 = *(uint *)(lVal_25 + 0x8ff9) ^ _UNK_1806b2ca4;
      uVal_35 = *(uint *)(lVal_25 + 0x8ffd) ^ _UNK_1806b2ca8;
      uVal_37 = *(uint *)(lVal_25 + 0x9001) ^ _UNK_1806b2cac;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_25 + 0x8ff9) = uVal_34;
      *(uint *)(lVal_25 + 0x8ffd) = uVal_35;
      *(uint *)(lVal_25 + 0x9001) = uVal_37;
      *(uint8_t *)(lVal_25 + 0x9005) = 0;
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_13a = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_2);
    if ((int64_t)sz_23 < 0) goto LAB_1802213c0;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_d1 = 1;
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_d1 = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_25;
      }
      local_158._0_8_ = pU64_28;
    }
    local_148 = (uint32_t)sz_23;
    uStack_144 = (uint32_t)(sz_23 >> 0x20);
    uStack_140 = (uint32_t)uVal_30;
    uStack_13c = (uint16_t)(uVal_30 >> 0x20);
    uStack_13a = (uint16_t)(uVal_30 >> 0x30);
    func_0x1806aa960(pU64_28,pU64_2,sz_23);
    pU64_28[sz_23] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x9020) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x9020) = 1;
      uVal_63 = _UNK_1806be368;
      *(uint64_t *)(lVal_25 + 0x9010) = _DAT_1806be360;
      *(uint64_t *)(lVal_25 + 0x9018) = uVal_63;
      func_0x180673140(&LAB_1802d6af0);
    }
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_25 + 0x9010);
    if (*(char *)(lVal_25 + 0x901f) == '\x01') {
      uVal_64 = *(uint32_t *)(lVal_25 + 0x9018);
      auArr_33 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_64 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_64 >> 0x10),uVal_64)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_25 + 0x901d) >> 8)),
                                                 (char)((uint)uVal_64 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_25 + 0x901d),(char)uVal_64
                                                ))),_DAT_1806ae110);
      auArr_33._8_8_ =
           auArr_33._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_25 + 0x901c) << 0x20;
      auArr_33 = pblendw(auArr_33,*_Str,0xf);
      *_Str = auArr_33 ^ _DAT_1806b6450;
    }
    local_f8 = (uint8_t  [16])0x0;
    local_108 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)_Str);
    if ((int64_t)sz_23 < 0) goto LAB_1802213cd;
    if (sz_23 < 0x10) {
      pU64_28 = local_108;
      uVal_30 = 0xf;
    }
    else {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_dc = 1;
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_dc = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_25;
      }
      local_108._0_8_ = pU64_28;
    }
    local_f8._0_8_ = sz_23;
    local_f8._8_8_ = uVal_30;
    func_0x1806aa960(pU64_28,_Str,sz_23);
    pU64_28[sz_23] = 0;
    in_stack_fffffffffffffca8 = in_stack_fffffffffffffca8 & 0xffffff00;
    pU64_28 = local_108;
    pU64_29 = local_158;
    func_0x1801ccd70(local_e8,pU64_28,pU64_29,pU64_26,uVal_31,local_338,in_stack_fffffffffffffca8);
    if (0xf < (uint64_t)local_f8._8_8_) {
      uVal_30 = local_f8._8_8_ + 1;
      lVal_25 = local_108._0_8_;
      if (0xfff < uVal_30) {
        lVal_25 = *(int64_t *)(local_108._0_8_ + -8);
        if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_30 = local_f8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_30);
    }
    uVal_30 = CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
    if (0xf < uVal_30) {
      uVal_24 = uVal_30 + 1;
      lVal_25 = local_158._0_8_;
      if (0xfff < uVal_24) {
        lVal_25 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_24 = uVal_30 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_24);
    }
    local_2c0 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_2c0 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_2f8);
    }
    pU64_3 = (uint8_t *)((int64_t)local_e8 + 0x81);
    uVal_31 = *pU64_3;
    local_148 = _DAT_1806c0f57;
    uStack_144 = _UNK_1806c0f5b;
    uStack_140 = _UNK_1806c0f5f;
    uStack_13c = (uint16_t)_UNK_1806c0f63;
    local_158._8_8_ = _UNK_1806c0f4f;
    local_158._0_8_ = _DAT_1806c0f47;
    uStack_13a = 0x1027;
    uStack_138 = 0x9100a5b3;
    uStack_134 = 0x29b2;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x9048) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x9048) = 1;
      func_0x180086e20(lVal_25 + 0x9021,local_158);
      func_0x180673140(&LAB_1802d6b20);
    }
    uVal_16 = _UNK_1806b5b0c;
    uVal_37 = _UNK_1806b5b08;
    uVal_35 = _UNK_1806b5b04;
    uVal_34 = _DAT_1806b5b00;
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_25 + 0x9021);
    if (*(char *)(lVal_25 + 0x9047) == '\x01') {
      uVal_39 = *(uint *)(lVal_25 + 0x9025) ^ _UNK_1806b5b04;
      uVal_40 = *(uint *)(lVal_25 + 0x9029) ^ _UNK_1806b5b08;
      uVal_42 = *(uint *)(lVal_25 + 0x902d) ^ _UNK_1806b5b0c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b5b00;
      *(uint *)(lVal_25 + 0x9025) = uVal_39;
      *(uint *)(lVal_25 + 0x9029) = uVal_40;
      *(uint *)(lVal_25 + 0x902d) = uVal_42;
      *(uint *)(lVal_25 + 0x9031) = *(uint *)(lVal_25 + 0x9031) ^ uVal_34;
      *(uint *)(lVal_25 + 0x9035) = *(uint *)(lVal_25 + 0x9035) ^ uVal_35;
      *(uint *)(lVal_25 + 0x9039) = *(uint *)(lVal_25 + 0x9039) ^ uVal_37;
      *(uint *)(lVal_25 + 0x903d) = *(uint *)(lVal_25 + 0x903d) ^ uVal_16;
      *(uint *)(lVal_25 + 0x9041) = *(uint *)(lVal_25 + 0x9041) ^ 0xe569d1dd;
      *(byte *)(lVal_25 + 0x9045) = *(byte *)(lVal_25 + 0x9045) ^ 0xcb;
      *(byte *)(lVal_25 + 0x9046) = *(byte *)(lVal_25 + 0x9046) ^ 0x29;
      *(uint8_t *)(lVal_25 + 0x9047) = 0;
    }
    local_f8 = (uint8_t  [16])0x0;
    local_108 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_2);
    if ((int64_t)sz_23 < 0) goto LAB_1802213da;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_d2 = 1;
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_d2 = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_25;
      }
      local_108._0_8_ = pU64_28;
    }
    local_f8._8_8_ = uVal_30;
    local_f8._0_8_ = sz_23;
    func_0x1806aa960(pU64_28,pU64_2,sz_23);
    pU64_28[sz_23] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x905c) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x905c) = 1;
      *(uint64_t *)(lVal_25 + 0x9050) = 0x106109a0860cb99e;
      *(uint32_t *)(lVal_25 + 0x9058) = 0x169a5b8;
      func_0x180673140(&LAB_1802d6b50);
    }
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_25 + 0x9050);
    if (*(char *)(lVal_25 + 0x905b) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x750729cbe569d1dd;
      *(uint *)(lVal_25 + 0x9058) =
           (*(uint *)(lVal_25 + 0x9058) & 0xffff | (uint)*(byte *)(lVal_25 + 0x905a) << 0x10) ^
           SUB164(_DAT_1806be370,0);
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_13a = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_4);
    if ((int64_t)sz_23 < 0) goto LAB_1802213e7;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_dd = 1;
        pU64_29 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_dd = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_29 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_29 + -8) = lVal_25;
      }
      local_158._0_8_ = pU64_29;
    }
    local_148 = (uint32_t)sz_23;
    uStack_144 = (uint32_t)(sz_23 >> 0x20);
    uStack_140 = (uint32_t)uVal_30;
    uStack_13c = (uint16_t)(uVal_30 >> 0x20);
    uStack_13a = (uint16_t)(uVal_30 >> 0x30);
    func_0x1806aa960(pU64_29,pU64_4,sz_23);
    pU64_29[sz_23] = 0;
    in_stack_fffffffffffffca8 = in_stack_fffffffffffffca8 & 0xffffff00;
    pU64_28 = local_158;
    pU64_29 = local_108;
    func_0x1801ccd70(local_e8,pU64_28,pU64_29,pU64_3,uVal_31,local_2f8,in_stack_fffffffffffffca8);
    uVal_30 = CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
    if (0xf < uVal_30) {
      uVal_24 = uVal_30 + 1;
      lVal_25 = local_158._0_8_;
      if (0xfff < uVal_24) {
        lVal_25 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_24 = uVal_30 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_24);
    }
    if (0xf < (uint64_t)local_f8._8_8_) {
      uVal_30 = local_f8._8_8_ + 1;
      lVal_25 = local_108._0_8_;
      if (0xfff < uVal_30) {
        lVal_25 = *(int64_t *)(local_108._0_8_ + -8);
        if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_30 = local_f8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_30);
    }
    local_280 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_280 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_2b8);
    }
    pU64_3 = (uint8_t *)((int64_t)local_e8 + 0x82);
    uVal_31 = *pU64_3;
    local_148 = _DAT_1806c0f7d;
    uStack_144 = _UNK_1806c0f81;
    uStack_140 = _UNK_1806c0f85;
    uStack_13c = (uint16_t)_UNK_1806c0f89;
    local_158._8_8_ = _UNK_1806c0f75;
    local_158._0_8_ = _DAT_1806c0f6d;
    uStack_13a = 0x228b;
    uStack_138 = 0xe7cab3e9;
    uStack_134 = 0xcddc;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x9084) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x9084) = 1;
      func_0x180086e20(lVal_25 + 0x905d,local_158);
      func_0x180673140(&LAB_1802d6b80);
    }
    uVal_16 = _UNK_1806b2d7c;
    uVal_37 = _UNK_1806b2d78;
    uVal_35 = _UNK_1806b2d74;
    uVal_34 = _DAT_1806b2d70;
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_25 + 0x905d);
    if (*(char *)(lVal_25 + 0x9083) == '\x01') {
      uVal_39 = *(uint *)(lVal_25 + 0x9061) ^ _UNK_1806b2d74;
      uVal_40 = *(uint *)(lVal_25 + 0x9065) ^ _UNK_1806b2d78;
      uVal_42 = *(uint *)(lVal_25 + 0x9069) ^ _UNK_1806b2d7c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2d70;
      *(uint *)(lVal_25 + 0x9061) = uVal_39;
      *(uint *)(lVal_25 + 0x9065) = uVal_40;
      *(uint *)(lVal_25 + 0x9069) = uVal_42;
      *(uint *)(lVal_25 + 0x906d) = *(uint *)(lVal_25 + 0x906d) ^ uVal_34;
      *(uint *)(lVal_25 + 0x9071) = *(uint *)(lVal_25 + 0x9071) ^ uVal_35;
      *(uint *)(lVal_25 + 0x9075) = *(uint *)(lVal_25 + 0x9075) ^ uVal_37;
      *(uint *)(lVal_25 + 0x9079) = *(uint *)(lVal_25 + 0x9079) ^ uVal_16;
      *(uint *)(lVal_25 + 0x907d) = *(uint *)(lVal_25 + 0x907d) ^ 0x93a3c787;
      *(byte *)(lVal_25 + 0x9081) = *(byte *)(lVal_25 + 0x9081) ^ 0xa5;
      *(byte *)(lVal_25 + 0x9082) = *(byte *)(lVal_25 + 0x9082) ^ 0xcd;
      *(uint8_t *)(lVal_25 + 0x9083) = 0;
    }
    local_f8 = (uint8_t  [16])0x0;
    local_108 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_2);
    if ((int64_t)sz_23 < 0) goto LAB_1802213f4;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_d3 = 1;
        pU64_29 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_d3 = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_29 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_29 + -8) = lVal_25;
      }
      local_108._0_8_ = pU64_29;
    }
    local_f8._8_8_ = uVal_30;
    local_f8._0_8_ = sz_23;
    func_0x1806aa960(pU64_29,pU64_2,sz_23);
    pU64_29[sz_23] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x9094) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x9094) = 1;
      *(uint64_t *)(lVal_25 + 37000) = 0x22c3edcef0c6afc4;
      *(uint32_t *)(lVal_25 + 0x9090) = 0x1a3a3e6;
      func_0x180673140(&LAB_1802d6bb0);
    }
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_25 + 37000);
    if (*(char *)(lVal_25 + 0x9093) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_25 + 0x9090) =
           (*(uint *)(lVal_25 + 0x9090) & 0xffff | (uint)*(byte *)(lVal_25 + 0x9092) << 0x10) ^
           SUB164(_DAT_1806b6500,0);
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_13a = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_4);
    if ((int64_t)sz_23 < 0) goto LAB_180221401;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_de = 1;
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_de = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_25;
      }
      local_158._0_8_ = pU64_28;
    }
    local_148 = (uint32_t)sz_23;
    uStack_144 = (uint32_t)(sz_23 >> 0x20);
    uStack_140 = (uint32_t)uVal_30;
    uStack_13c = (uint16_t)(uVal_30 >> 0x20);
    uStack_13a = (uint16_t)(uVal_30 >> 0x30);
    func_0x1806aa960(pU64_28,pU64_4,sz_23);
    pU64_28[sz_23] = 0;
    pU64_28 = local_2b8;
    pU64_29 = local_158;
    pU64_27 = local_108;
    func_0x1801ccd70(local_e8,pU64_29,pU64_27,pU64_3,uVal_31,pU64_28,
                  in_stack_fffffffffffffca8 & 0xffffff00);
    uVal_30 = CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
    if (0xf < uVal_30) {
      uVal_24 = uVal_30 + 1;
      lVal_25 = local_158._0_8_;
      if (0xfff < uVal_24) {
        lVal_25 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_24 = uVal_30 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_24);
    }
    if (0xf < (uint64_t)local_f8._8_8_) {
      uVal_30 = local_f8._8_8_ + 1;
      lVal_25 = local_108._0_8_;
      if (0xfff < uVal_30) {
        lVal_25 = *(int64_t *)(local_108._0_8_ + -8);
        if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_30 = local_f8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_30);
    }
    local_240 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_240 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_278);
    }
    pU64_5 = (uint32_t *)((int64_t)local_e8 + 0x84);
    uVal_64 = *pU64_5;
    uStack_128 = _UNK_1806c0fc3;
    uStack_126 = (uint16_t)_UNK_1806c0fc5;
    uStack_124 = (uint16_t)((uint)_UNK_1806c0fc5 >> 0x10);
    uStack_122 = (uint16_t)_UNK_1806c0fc9;
    uStack_120 = (uint16_t)((uint)_UNK_1806c0fc9 >> 0x10);
    uStack_11e = (uint16_t)_UNK_1806c0fcd;
    uStack_11c = (uint16_t)((uint)_UNK_1806c0fcd >> 0x10);
    uStack_138 = _DAT_1806c0fb3;
    uStack_134 = (uint16_t)_UNK_1806c0fb7;
    uStack_132 = (uint16_t)((uint)_UNK_1806c0fb7 >> 0x10);
    uStack_130 = _UNK_1806c0fbb;
    uStack_12c = _UNK_1806c0fbf;
    uStack_12a = _DAT_1806c0fc1;
    local_148 = _DAT_1806c0fa3;
    uStack_144 = _UNK_1806c0fa7;
    uStack_140 = _UNK_1806c0fab;
    uStack_13c = (uint16_t)_UNK_1806c0faf;
    uStack_13a = (uint16_t)((uint)_UNK_1806c0faf >> 0x10);
    local_158._8_8_ = _UNK_1806c0f9b;
    local_158._0_8_ = _DAT_1806c0f93;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x90d4) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x90d4) = 1;
      func_0x1802d6be0(lVal_25 + 0x9095,local_158);
      func_0x180673140(&LAB_1802d6da0);
    }
    uVal_16 = _UNK_1806b2d1c;
    uVal_37 = _UNK_1806b2d18;
    uVal_35 = _UNK_1806b2d14;
    uVal_34 = _DAT_1806b2d10;
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_25 + 0x9095);
    if (*(char *)(lVal_25 + 0x90d3) == '\x01') {
      uVal_39 = *(uint *)(lVal_25 + 0x9099) ^ _UNK_1806b2d14;
      uVal_40 = *(uint *)(lVal_25 + 0x909d) ^ _UNK_1806b2d18;
      uVal_42 = *(uint *)(lVal_25 + 0x90a1) ^ _UNK_1806b2d1c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2d10;
      *(uint *)(lVal_25 + 0x9099) = uVal_39;
      *(uint *)(lVal_25 + 0x909d) = uVal_40;
      *(uint *)(lVal_25 + 0x90a1) = uVal_42;
      *(uint *)(lVal_25 + 0x90a5) = *(uint *)(lVal_25 + 0x90a5) ^ uVal_34;
      *(uint *)(lVal_25 + 0x90a9) = *(uint *)(lVal_25 + 0x90a9) ^ uVal_35;
      *(uint *)(lVal_25 + 0x90ad) = *(uint *)(lVal_25 + 0x90ad) ^ uVal_37;
      *(uint *)(lVal_25 + 0x90b1) = *(uint *)(lVal_25 + 0x90b1) ^ uVal_16;
      *(uint *)(lVal_25 + 0x90b5) = *(uint *)(lVal_25 + 0x90b5) ^ uVal_34;
      *(uint *)(lVal_25 + 0x90b9) = *(uint *)(lVal_25 + 0x90b9) ^ uVal_35;
      *(uint *)(lVal_25 + 0x90bd) = *(uint *)(lVal_25 + 0x90bd) ^ uVal_37;
      *(uint *)(lVal_25 + 0x90c1) = *(uint *)(lVal_25 + 0x90c1) ^ uVal_16;
      *(uint64_t *)(lVal_25 + 0x90c5) = *(uint64_t *)(lVal_25 + 0x90c5) ^ SUB168(_DAT_1806b5c30,0);
      *(byte *)(lVal_25 + 0x90cd) = *(byte *)(lVal_25 + 0x90cd) ^ 0xd5;
      *(byte *)(lVal_25 + 0x90ce) = *(byte *)(lVal_25 + 0x90ce) ^ 0xf1;
      *(byte *)(lVal_25 + 0x90cf) = *(byte *)(lVal_25 + 0x90cf) ^ 0xf5;
      *(byte *)(lVal_25 + 0x90d0) = *(byte *)(lVal_25 + 0x90d0) ^ 0xf7;
      *(byte *)(lVal_25 + 0x90d1) = *(byte *)(lVal_25 + 0x90d1) ^ 0x1f;
      *(byte *)(lVal_25 + 0x90d2) = *(byte *)(lVal_25 + 0x90d2) ^ 0x9b;
      *(uint8_t *)(lVal_25 + 0x90d3) = 0;
    }
    local_f8 = (uint8_t  [16])0x0;
    local_108 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_2);
    if ((int64_t)sz_23 < 0) goto LAB_18022140e;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_d5 = 1;
        pU64_27 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_d5 = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_27 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_27 + -8) = lVal_25;
      }
      local_108._0_8_ = pU64_27;
    }
    local_f8._8_8_ = uVal_30;
    local_f8._0_8_ = sz_23;
    func_0x1806aa960(pU64_27,pU64_2,sz_23);
    pU64_27[sz_23] = 0;
    local_178 = _DAT_1806c0fd1;
    uStack_170 = _UNK_1806c0fd9;
    local_168 = CONCAT11(local_168._1_1_,0xd5);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x90e8) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x90e8) = 1;
      func_0x18007d2b0(lVal_25 + 0x90d5,&local_178);
      func_0x180673140(&LAB_1802d6de0);
    }
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_25 + 0x90d5);
    if (*(char *)(lVal_25 + 0x90e6) == '\x01') {
      uVal_34 = *(uint *)(lVal_25 + 0x90d9) ^ _UNK_1806b2d14;
      uVal_35 = *(uint *)(lVal_25 + 0x90dd) ^ _UNK_1806b2d18;
      uVal_37 = *(uint *)(lVal_25 + 0x90e1) ^ _UNK_1806b2d1c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2d10;
      *(uint *)(lVal_25 + 0x90d9) = uVal_34;
      *(uint *)(lVal_25 + 0x90dd) = uVal_35;
      *(uint *)(lVal_25 + 0x90e1) = uVal_37;
      *(byte *)(lVal_25 + 0x90e5) = *(byte *)(lVal_25 + 0x90e5) ^ 0xd5;
      *(uint8_t *)(lVal_25 + 0x90e6) = 0;
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_13a = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_2);
    if ((int64_t)sz_23 < 0) goto LAB_18022141b;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_d4 = 1;
        pU64_29 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_d4 = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_29 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_29 + -8) = lVal_25;
      }
      local_158._0_8_ = pU64_29;
    }
    local_148 = (uint32_t)sz_23;
    uStack_144 = (uint32_t)(sz_23 >> 0x20);
    uStack_140 = (uint32_t)uVal_30;
    uStack_13c = (uint16_t)(uVal_30 >> 0x20);
    uStack_13a = (uint16_t)(uVal_30 >> 0x30);
    func_0x1806aa960(pU64_29,pU64_2,sz_23);
    pU64_29[sz_23] = 0;
    uVal_30 = (uint64_t)pU64_28 & 0xffffffff00000000;
    pU64_28 = local_158;
    pU64_29 = local_108;
    func_0x1801cd2e0(local_e8,pU64_28,pU64_29,pU64_5,uVal_64,uVal_30,0x41c80000,local_278,0);
    uVal_64 = (uint32_t)(uVal_30 >> 0x20);
    uVal_30 = CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
    if (0xf < uVal_30) {
      uVal_24 = uVal_30 + 1;
      lVal_25 = local_158._0_8_;
      if (0xfff < uVal_24) {
        lVal_25 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_24 = uVal_30 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_24);
    }
    if (0xf < (uint64_t)local_f8._8_8_) {
      uVal_30 = local_f8._8_8_ + 1;
      lVal_25 = local_108._0_8_;
      if (0xfff < uVal_30) {
        lVal_25 = *(int64_t *)(local_108._0_8_ + -8);
        if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_30 = local_f8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_30);
    }
    local_200 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_200 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_238);
    }
    pU64_26 = local_e8 + 0x11;
    uVal_6 = *(uint32_t *)pU64_26;
    uStack_128 = (uint16_t)_DAT_1806c1012;
    uStack_126 = (uint16_t)((uint)_DAT_1806c1012 >> 0x10);
    uStack_124 = (uint16_t)_UNK_1806c1016;
    uStack_122 = (uint16_t)((uint)_UNK_1806c1016 >> 0x10);
    uStack_120 = (uint16_t)_UNK_1806c101a;
    uStack_11e = (uint16_t)((uint)_UNK_1806c101a >> 0x10);
    uStack_11c = (uint16_t)_UNK_1806c101e;
    uStack_11a = (uint8_t)((uint)_UNK_1806c101e >> 0x10);
    local_119 = (uint8_t)((uint)_UNK_1806c101e >> 0x18);
    uStack_138 = _DAT_1806c1002;
    uStack_134 = (uint16_t)_UNK_1806c1006;
    uStack_132 = (uint16_t)((uint)_UNK_1806c1006 >> 0x10);
    uStack_130 = _UNK_1806c100a;
    uStack_12c = (uint16_t)_UNK_1806c100e;
    uStack_12a = (uint16_t)((uint)_UNK_1806c100e >> 0x10);
    local_148 = _DAT_1806c0ff2;
    uStack_144 = _UNK_1806c0ff6;
    uStack_140 = _UNK_1806c0ffa;
    uStack_13c = (uint16_t)_UNK_1806c0ffe;
    uStack_13a = (uint16_t)((uint)_UNK_1806c0ffe >> 0x10);
    local_158._8_8_ = _UNK_1806c0fea;
    local_158._0_8_ = _DAT_1806c0fe2;
    uStack_118 = 0xd369;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x912c) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x912c) = 1;
      func_0x18012b460(lVal_25 + 0x90e9,local_158);
      func_0x180673140(&LAB_1802d6e10);
    }
    uVal_16 = _UNK_1806b54cc;
    uVal_37 = _UNK_1806b54c8;
    uVal_35 = _UNK_1806b54c4;
    uVal_34 = _DAT_1806b54c0;
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_25 + 0x90e9);
    if (*(char *)(lVal_25 + 0x912b) == '\x01') {
      uVal_39 = *(uint *)(lVal_25 + 0x90ed) ^ _UNK_1806b54c4;
      uVal_40 = *(uint *)(lVal_25 + 0x90f1) ^ _UNK_1806b54c8;
      uVal_42 = *(uint *)(lVal_25 + 0x90f5) ^ _UNK_1806b54cc;
      *pU64_2 = *pU64_2 ^ _DAT_1806b54c0;
      *(uint *)(lVal_25 + 0x90ed) = uVal_39;
      *(uint *)(lVal_25 + 0x90f1) = uVal_40;
      *(uint *)(lVal_25 + 0x90f5) = uVal_42;
      *(uint *)(lVal_25 + 0x90f9) = *(uint *)(lVal_25 + 0x90f9) ^ uVal_34;
      *(uint *)(lVal_25 + 0x90fd) = *(uint *)(lVal_25 + 0x90fd) ^ uVal_35;
      *(uint *)(lVal_25 + 0x9101) = *(uint *)(lVal_25 + 0x9101) ^ uVal_37;
      *(uint *)(lVal_25 + 0x9105) = *(uint *)(lVal_25 + 0x9105) ^ uVal_16;
      *(uint *)(lVal_25 + 0x9109) = *(uint *)(lVal_25 + 0x9109) ^ uVal_34;
      *(uint *)(lVal_25 + 0x910d) = *(uint *)(lVal_25 + 0x910d) ^ uVal_35;
      *(uint *)(lVal_25 + 0x9111) = *(uint *)(lVal_25 + 0x9111) ^ uVal_37;
      *(uint *)(lVal_25 + 0x9115) = *(uint *)(lVal_25 + 0x9115) ^ uVal_16;
      *(uint *)(lVal_25 + 0x9119) = *(uint *)(lVal_25 + 0x9119) ^ uVal_34;
      *(uint *)(lVal_25 + 0x911d) = *(uint *)(lVal_25 + 0x911d) ^ uVal_35;
      *(uint *)(lVal_25 + 0x9121) = *(uint *)(lVal_25 + 0x9121) ^ uVal_37;
      *(uint *)(lVal_25 + 0x9125) = *(uint *)(lVal_25 + 0x9125) ^ uVal_16;
      *(ushort *)(lVal_25 + 0x9129) = *(ushort *)(lVal_25 + 0x9129) ^ 0xd30d;
      *(uint8_t *)(lVal_25 + 0x912b) = 0;
    }
    local_f8 = (uint8_t  [16])0x0;
    local_108 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_2);
    if ((int64_t)sz_23 < 0) goto LAB_180221428;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_d7 = 1;
        pU64_29 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_d7 = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_29 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_29 + -8) = lVal_25;
      }
      local_108._0_8_ = pU64_29;
    }
    local_f8._8_8_ = uVal_30;
    local_f8._0_8_ = sz_23;
    func_0x1806aa960(pU64_29,pU64_2,sz_23);
    pU64_29[sz_23] = 0;
    local_178 = _DAT_1806c1024;
    uStack_170 = _UNK_1806c102c;
    local_168 = CONCAT11(local_168._1_1_,0xd);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x9140) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x9140) = 1;
      func_0x18007d2b0(lVal_25 + 0x912d,&local_178);
      func_0x180673140(&LAB_1802d6e50);
    }
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_25 + 0x912d);
    if (*(char *)(lVal_25 + 0x913e) == '\x01') {
      uVal_34 = *(uint *)(lVal_25 + 0x9131) ^ _UNK_1806b54c4;
      uVal_35 = *(uint *)(lVal_25 + 0x9135) ^ _UNK_1806b54c8;
      uVal_37 = *(uint *)(lVal_25 + 0x9139) ^ _UNK_1806b54cc;
      *pU64_2 = *pU64_2 ^ _DAT_1806b54c0;
      *(uint *)(lVal_25 + 0x9131) = uVal_34;
      *(uint *)(lVal_25 + 0x9135) = uVal_35;
      *(uint *)(lVal_25 + 0x9139) = uVal_37;
      *(byte *)(lVal_25 + 0x913d) = *(byte *)(lVal_25 + 0x913d) ^ 0xd;
      *(uint8_t *)(lVal_25 + 0x913e) = 0;
    }
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_13a = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_2);
    if ((int64_t)sz_23 < 0) goto LAB_180221435;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_d6 = 1;
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_d6 = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_25;
      }
      local_158._0_8_ = pU64_28;
    }
    local_148 = (uint32_t)sz_23;
    uStack_144 = (uint32_t)(sz_23 >> 0x20);
    uStack_140 = (uint32_t)uVal_30;
    uStack_13c = (uint16_t)(uVal_30 >> 0x20);
    uStack_13a = (uint16_t)(uVal_30 >> 0x30);
    func_0x1806aa960(pU64_28,pU64_2,sz_23);
    pU64_28[sz_23] = 0;
    uVal_63 = CONCAT44(uVal_64,0x3dcccccd);
    pU64_28 = local_158;
    pU64_29 = local_108;
    func_0x1801cd2e0(local_e8,pU64_28,pU64_29,pU64_26,uVal_6,uVal_63,0x41a00000,local_238,0);
    uVal_64 = (uint32_t)((uint64_t)uVal_63 >> 0x20);
    uVal_30 = CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
    if (0xf < uVal_30) {
      uVal_24 = uVal_30 + 1;
      lVal_25 = local_158._0_8_;
      if (0xfff < uVal_24) {
        lVal_25 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_24 = uVal_30 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_24);
    }
    if (0xf < (uint64_t)local_f8._8_8_) {
      uVal_30 = local_f8._8_8_ + 1;
      lVal_25 = local_108._0_8_;
      if (0xfff < uVal_30) {
        lVal_25 = *(int64_t *)(local_108._0_8_ + -8);
        if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_30 = local_f8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_30);
    }
    local_1c0 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_1c0 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_1f8);
    }
    pU64_5 = (uint32_t *)((int64_t)local_e8 + 0x8c);
    uVal_6 = *pU64_5;
    uStack_128 = (uint16_t)_DAT_1806c1065;
    uStack_126 = (uint16_t)((uint)_DAT_1806c1065 >> 0x10);
    uStack_124 = (uint16_t)_UNK_1806c1069;
    uStack_122 = (uint16_t)((uint)_UNK_1806c1069 >> 0x10);
    uStack_120 = (uint16_t)_UNK_1806c106d;
    uStack_11e = (uint16_t)((uint)_UNK_1806c106d >> 0x10);
    uStack_11c = (uint16_t)_UNK_1806c1071;
    uStack_11a = (uint8_t)((uint)_UNK_1806c1071 >> 0x10);
    uStack_138 = _DAT_1806c1055;
    uStack_134 = (uint16_t)_UNK_1806c1059;
    uStack_132 = (uint16_t)((uint)_UNK_1806c1059 >> 0x10);
    uStack_130 = _UNK_1806c105d;
    uStack_12c = (uint16_t)_UNK_1806c1061;
    uStack_12a = (uint16_t)((uint)_UNK_1806c1061 >> 0x10);
    local_148 = _DAT_1806c1045;
    uStack_144 = _UNK_1806c1049;
    uStack_140 = _UNK_1806c104d;
    uStack_13c = (uint16_t)_UNK_1806c1051;
    uStack_13a = (uint16_t)((uint)_UNK_1806c1051 >> 0x10);
    local_158._8_8_ = _UNK_1806c103d;
    local_158._0_8_ = _DAT_1806c1035;
    local_119 = 0x83;
    uStack_118 = 0x17a0;
    uStack_116 = 0xd5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x9188) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x9188) = 1;
      func_0x1802d6e80(lVal_25 + 0x9141,local_158);
      func_0x180673140(&LAB_1802d7060);
    }
    uVal_16 = _UNK_1806ae4dc;
    uVal_37 = _UNK_1806ae4d8;
    uVal_35 = _UNK_1806ae4d4;
    uVal_34 = _DAT_1806ae4d0;
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_25 + 0x9141);
    if (*(char *)(lVal_25 + 0x9184) == '\x01') {
      uVal_39 = *(uint *)(lVal_25 + 0x9145) ^ _UNK_1806ae4d4;
      uVal_40 = *(uint *)(lVal_25 + 0x9149) ^ _UNK_1806ae4d8;
      uVal_42 = *(uint *)(lVal_25 + 0x914d) ^ _UNK_1806ae4dc;
      *pU64_2 = *pU64_2 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_25 + 0x9145) = uVal_39;
      *(uint *)(lVal_25 + 0x9149) = uVal_40;
      *(uint *)(lVal_25 + 0x914d) = uVal_42;
      *(uint *)(lVal_25 + 0x9151) = *(uint *)(lVal_25 + 0x9151) ^ uVal_34;
      *(uint *)(lVal_25 + 0x9155) = *(uint *)(lVal_25 + 0x9155) ^ uVal_35;
      *(uint *)(lVal_25 + 0x9159) = *(uint *)(lVal_25 + 0x9159) ^ uVal_37;
      *(uint *)(lVal_25 + 0x915d) = *(uint *)(lVal_25 + 0x915d) ^ uVal_16;
      *(uint *)(lVal_25 + 0x9161) = *(uint *)(lVal_25 + 0x9161) ^ uVal_34;
      *(uint *)(lVal_25 + 0x9165) = *(uint *)(lVal_25 + 0x9165) ^ uVal_35;
      *(uint *)(lVal_25 + 0x9169) = *(uint *)(lVal_25 + 0x9169) ^ uVal_37;
      *(uint *)(lVal_25 + 0x916d) = *(uint *)(lVal_25 + 0x916d) ^ uVal_16;
      *(uint *)(lVal_25 + 0x9171) = *(uint *)(lVal_25 + 0x9171) ^ uVal_34;
      *(uint *)(lVal_25 + 0x9175) = *(uint *)(lVal_25 + 0x9175) ^ uVal_35;
      *(uint *)(lVal_25 + 0x9179) = *(uint *)(lVal_25 + 0x9179) ^ uVal_37;
      *(uint *)(lVal_25 + 0x917d) = *(uint *)(lVal_25 + 0x917d) ^ uVal_16;
      *(ushort *)(lVal_25 + 0x9181) = *(ushort *)(lVal_25 + 0x9181) ^ 0x73c5;
      *(byte *)(lVal_25 + 0x9183) = *(byte *)(lVal_25 + 0x9183) ^ 0xd5;
      *(uint8_t *)(lVal_25 + 0x9184) = 0;
    }
    local_f8 = (uint8_t  [16])0x0;
    local_108 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_2);
    if ((int64_t)sz_23 < 0) goto LAB_180221442;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_d9 = 1;
        pU64_29 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_d9 = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_29 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_29 + -8) = lVal_25;
      }
      local_108._0_8_ = pU64_29;
    }
    local_f8._8_8_ = uVal_30;
    local_f8._0_8_ = sz_23;
    func_0x1806aa960(pU64_29,pU64_2,sz_23);
    pU64_29[sz_23] = 0;
    local_178 = _DAT_1806c1078;
    uStack_170 = _UNK_1806c1080;
    local_168 = 0x73b1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x919c) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x919c) = 1;
      func_0x18007c170(lVal_25 + 0x9189,&local_178);
      func_0x180673140(&LAB_1802d70a0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x9189);
    func_0x1802e3290(fnPtr_1);
    local_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    uStack_13a = 0;
    local_158 = (uint8_t  [16])0x0;
    sz_23 = strlen(fnPtr_1);
    if ((int64_t)sz_23 < 0) goto LAB_18022144f;
    uVal_30 = 0xf;
    if (0xf < sz_23) {
      uVal_24 = sz_23 | 0xf;
      uVal_30 = 0x16;
      if (0x16 < uVal_24) {
        uVal_30 = uVal_24;
      }
      if (uVal_24 < 0xfff) {
        local_d8 = 1;
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
      }
      else {
        local_d8 = 1;
        lVal_25 = func_0x180672de0(uVal_30 + 0x28);
        pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_25;
      }
      local_158._0_8_ = pU64_28;
    }
    local_148 = (uint32_t)sz_23;
    uStack_144 = (uint32_t)(sz_23 >> 0x20);
    uStack_140 = (uint32_t)uVal_30;
    uStack_13c = (uint16_t)(uVal_30 >> 0x20);
    uStack_13a = (uint16_t)(uVal_30 >> 0x30);
    func_0x1806aa960(pU64_28,fnPtr_1,sz_23);
    pU64_28[sz_23] = 0;
    uVal_63 = CONCAT44(uVal_64,0x3dcccccd);
    pU64_28 = local_158;
    pU64_29 = local_108;
    func_0x1801cd2e0(local_e8,pU64_28,pU64_29,pU64_5,uVal_6,uVal_63,0x41a00000,local_1f8,0);
    uVal_64 = (uint32_t)((uint64_t)uVal_63 >> 0x20);
    uVal_30 = CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
    if (0xf < uVal_30) {
      uVal_24 = uVal_30 + 1;
      lVal_25 = local_158._0_8_;
      if (0xfff < uVal_24) {
        lVal_25 = *(int64_t *)(local_158._0_8_ + -8);
        if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_24 = uVal_30 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_24);
    }
    if (0xf < (uint64_t)local_f8._8_8_) {
      uVal_30 = local_f8._8_8_ + 1;
      lVal_25 = local_108._0_8_;
      if (0xfff < uVal_30) {
        lVal_25 = *(int64_t *)(local_108._0_8_ + -8);
        if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
        uVal_30 = local_f8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_30);
    }
    local_180 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_180 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_1b8);
    }
    pU64_26 = local_e8 + 0x12;
    uVal_6 = *(uint32_t *)pU64_26;
    uStack_128 = (uint16_t)_DAT_1806c10ba;
    uStack_126 = (uint16_t)((uint)_DAT_1806c10ba >> 0x10);
    uStack_124 = (uint16_t)_UNK_1806c10be;
    uStack_122 = (uint16_t)((uint)_UNK_1806c10be >> 0x10);
    uStack_120 = (uint16_t)_UNK_1806c10c2;
    uStack_11e = (uint16_t)((uint)_UNK_1806c10c2 >> 0x10);
    uStack_11c = (uint16_t)_UNK_1806c10c6;
    uStack_11a = (uint8_t)((uint)_UNK_1806c10c6 >> 0x10);
    uStack_138 = _DAT_1806c10aa;
    uStack_134 = (uint16_t)_UNK_1806c10ae;
    uStack_132 = (uint16_t)((uint)_UNK_1806c10ae >> 0x10);
    uStack_130 = _UNK_1806c10b2;
    uStack_12c = (uint16_t)_UNK_1806c10b6;
    uStack_12a = (uint16_t)((uint)_UNK_1806c10b6 >> 0x10);
    local_148 = _DAT_1806c109a;
    uStack_144 = _UNK_1806c109e;
    uStack_140 = _UNK_1806c10a2;
    uStack_13c = (uint16_t)_UNK_1806c10a6;
    uStack_13a = (uint16_t)((uint)_UNK_1806c10a6 >> 0x10);
    local_158._8_8_ = _UNK_1806c1092;
    local_158._0_8_ = _DAT_1806c108a;
    local_119 = 0xe5;
    uStack_118 = 0xd550;
    uStack_116 = 0xa9;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x91e4) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x91e4) = 1;
      func_0x1802d6e80(lVal_25 + 0x919d,local_158);
      func_0x180673140(&LAB_1802d70d0);
    }
    uVal_16 = _UNK_1806b2cbc;
    uVal_37 = _UNK_1806b2cb8;
    uVal_35 = _UNK_1806b2cb4;
    uVal_34 = _DAT_1806b2cb0;
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_25 + 0x919d);
    if (*(char *)(lVal_25 + 0x91e0) == '\x01') {
      uVal_39 = *(uint *)(lVal_25 + 0x91a1) ^ _UNK_1806b2cb4;
      uVal_40 = *(uint *)(lVal_25 + 0x91a5) ^ _UNK_1806b2cb8;
      uVal_42 = *(uint *)(lVal_25 + 0x91a9) ^ _UNK_1806b2cbc;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_25 + 0x91a1) = uVal_39;
      *(uint *)(lVal_25 + 0x91a5) = uVal_40;
      *(uint *)(lVal_25 + 0x91a9) = uVal_42;
      *(uint *)(lVal_25 + 0x91ad) = *(uint *)(lVal_25 + 0x91ad) ^ uVal_34;
      *(uint *)(lVal_25 + 0x91b1) = *(uint *)(lVal_25 + 0x91b1) ^ uVal_35;
      *(uint *)(lVal_25 + 0x91b5) = *(uint *)(lVal_25 + 0x91b5) ^ uVal_37;
      *(uint *)(lVal_25 + 0x91b9) = *(uint *)(lVal_25 + 0x91b9) ^ uVal_16;
      *(uint *)(lVal_25 + 0x91bd) = *(uint *)(lVal_25 + 0x91bd) ^ uVal_34;
      *(uint *)(lVal_25 + 0x91c1) = *(uint *)(lVal_25 + 0x91c1) ^ uVal_35;
      *(uint *)(lVal_25 + 0x91c5) = *(uint *)(lVal_25 + 0x91c5) ^ uVal_37;
      *(uint *)(lVal_25 + 0x91c9) = *(uint *)(lVal_25 + 0x91c9) ^ uVal_16;
      *(uint *)(lVal_25 + 0x91cd) = *(uint *)(lVal_25 + 0x91cd) ^ uVal_34;
      *(uint *)(lVal_25 + 0x91d1) = *(uint *)(lVal_25 + 0x91d1) ^ uVal_35;
      *(uint *)(lVal_25 + 0x91d5) = *(uint *)(lVal_25 + 0x91d5) ^ uVal_37;
      *(uint *)(lVal_25 + 0x91d9) = *(uint *)(lVal_25 + 0x91d9) ^ uVal_16;
      *(ushort *)(lVal_25 + 0x91dd) = *(ushort *)(lVal_25 + 0x91dd) ^ 0xb135;
      *(byte *)(lVal_25 + 0x91df) = *(byte *)(lVal_25 + 0x91df) ^ 0xa9;
      *(uint8_t *)(lVal_25 + 0x91e0) = 0;
    }
    local_f8 = (uint8_t  [16])0x0;
    local_108 = (uint8_t  [16])0x0;
    sz_23 = strlen((char *)pU64_2);
    if (-1 < (int64_t)sz_23) {
      uVal_30 = 0xf;
      if (0xf < sz_23) {
        uVal_24 = sz_23 | 0xf;
        uVal_30 = 0x16;
        if (0x16 < uVal_24) {
          uVal_30 = uVal_24;
        }
        if (uVal_24 < 0xfff) {
          local_db = 1;
          pU64_29 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
        }
        else {
          local_db = 1;
          lVal_25 = func_0x180672de0(uVal_30 + 0x28);
          pU64_29 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_29 + -8) = lVal_25;
        }
        local_108._0_8_ = pU64_29;
      }
      local_f8._8_8_ = uVal_30;
      local_f8._0_8_ = sz_23;
      func_0x1806aa960(pU64_29,pU64_2,sz_23);
      pU64_29[sz_23] = 0;
      local_178 = _DAT_1806c10cd;
      uStack_170 = _UNK_1806c10d5;
      local_168 = 0xb15d;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x91f8) == '\0') {
        lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_25 + 0x91f8) = 1;
        func_0x18007c170(lVal_25 + 0x91e5,&local_178);
        func_0x180673140(&LAB_1802d7110);
      }
      fnPtr_1 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x91e5)
      ;
      func_0x1802159f0(fnPtr_1);
      local_158 = (uint8_t  [16])0x0;
      sz_23 = strlen(fnPtr_1);
      if (-1 < (int64_t)sz_23) {
        uVal_30 = 0xf;
        if (0xf < sz_23) {
          uVal_24 = sz_23 | 0xf;
          uVal_30 = 0x16;
          if (0x16 < uVal_24) {
            uVal_30 = uVal_24;
          }
          if (uVal_24 < 0xfff) {
            local_da = 1;
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_30 + 1);
          }
          else {
            local_da = 1;
            lVal_25 = func_0x180672de0(uVal_30 + 0x28);
            pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_25;
          }
          local_158._0_8_ = pU64_28;
        }
        local_148 = (uint32_t)sz_23;
        uStack_144 = (uint32_t)(sz_23 >> 0x20);
        uStack_140 = (uint32_t)uVal_30;
        uStack_13c = (uint16_t)(uVal_30 >> 0x20);
        uStack_13a = (uint16_t)(uVal_30 >> 0x30);
        func_0x1806aa960(pU64_28,fnPtr_1,sz_23);
        pU64_28[sz_23] = 0;
        func_0x1801cd2e0(local_e8,local_158,local_108,pU64_26,uVal_6,CONCAT44(uVal_64,0x3dcccccd),
                      0x41a00000,local_1b8,0);
        uVal_30 = CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
        if (0xf < uVal_30) {
          uVal_24 = uVal_30 + 1;
          lVal_25 = local_158._0_8_;
          if (0xfff < uVal_24) {
            lVal_25 = *(int64_t *)(local_158._0_8_ + -8);
            if (0x1f < (uint64_t)((local_158._0_8_ + -8) - lVal_25)) goto LAB_1802213b9;
            uVal_24 = uVal_30 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_24);
        }
        if (0xf < (uint64_t)local_f8._8_8_) {
          uVal_30 = local_f8._8_8_ + 1;
          lVal_25 = local_108._0_8_;
          if (0xfff < uVal_30) {
            lVal_25 = *(int64_t *)(local_108._0_8_ + -8);
            if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_25)) {
LAB_1802213b9:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_30 = local_f8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_30);
        }
        return local_e8;
      }
      goto LAB_180221469;
    }
  }
  local_db = 1;
  func_0x18007ba70();
LAB_180221469:
  local_da = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_26 = (uint64_t *)(*fnPtr_7)();
  return pU64_26;
}

// Unwind@180221480
void Unwind_180221480(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180221550
void Unwind_180221550(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x9008) = 0;
  *(uint8_t *)(param_2 + 0x2b7) = 1;
  return;
}

// Unwind@180221630
void Unwind_180221630(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180221700
void Unwind_180221700(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x9048) = 0;
  *(uint8_t *)(param_2 + 0x2b6) = 1;
  return;
}

// Unwind@1802217e0
void Unwind_1802217e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x108);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1802218c0
void Unwind_1802218c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x9084) = 0;
  *(uint8_t *)(param_2 + 0x2b5) = 1;
  return;
}

// Unwind@1802219a0
void Unwind_1802219a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x148);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@180221a80
void Unwind_180221a80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x90d4) = 0;
  *(uint8_t *)(param_2 + 0x2b3) = 1;
  return;
}

// Unwind@180221b60
void Unwind_180221b60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x188);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@180221c40
void Unwind_180221c40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x912c) = 0;
  *(uint8_t *)(param_2 + 0x2b1) = 1;
  return;
}

// Unwind@180221d20
void Unwind_180221d20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@180221e00
void Unwind_180221e00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x9188) = 0;
  *(uint8_t *)(param_2 + 0x2af) = 1;
  return;
}

// Unwind@180221ee0
void Unwind_180221ee0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x208);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@180221fc0
void Unwind_180221fc0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x91e4) = 0;
  *(uint8_t *)(param_2 + 0x2ad) = 1;
  return;
}

// Unwind@1802220a0
void Unwind_1802220a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@180222160
void Unwind_180222160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  *(uint8_t *)(param_2 + 0x2ac) = 0;
  return;
}

// Unwind@180222230
void Unwind_180222230(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2ac);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x2b7) = uVal_1;
  return;
}

// Unwind@180222300
void Unwind_180222300(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2b7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1802223e0
void Unwind_1802223e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x2ab) = 0;
  return;
}

// Unwind@1802224b0
void Unwind_1802224b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2ab);
  func_0x180001e70(param_2 + 0x280);
  *(uint8_t *)(param_2 + 0x2b6) = uVal_1;
  return;
}

// Unwind@180222580
void Unwind_180222580(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2b6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@180222660
void Unwind_180222660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x2aa) = 0;
  return;
}

// Unwind@180222730
void Unwind_180222730(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2aa);
  func_0x180001e70(param_2 + 0x280);
  *(uint8_t *)(param_2 + 0x2b5) = uVal_1;
  return;
}
