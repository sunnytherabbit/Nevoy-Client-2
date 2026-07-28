#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1801dbbd0
void Unwind_1801dbbd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// Unwind@1801dbc10
void Unwind_1801dbc10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1801dbc50
void func_0x1801dbc50(int64_t *param_1)
{
  uint *_Str;
  char ch_1;
  size_t sz_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t *_Str_00;
  uint64_t uVal_6;
  uint8_t local_98 [32];
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint8_t local_48 [22];
  uint8_t local_32;
  uint8_t local_31;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  ch_1 = (**(func_ptr_t *)(*param_1 + 0x98))();
  if (ch_1 != '\0') {
    return;
  }
  (**(func_ptr_t *)(*param_1 + 0x10))(param_1,local_98);
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x75e4) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x75e4) = 1;
      *(uint8_t *)(lVal_4 + 0x75e0) = 1;
      *(uint64_t *)(lVal_4 + 0x75d8) = 0xf3cf86e369a4d934;
      func_0x180673140(&LAB_1802114b0);
    }
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_4 + 0x75d8);
    if (*(char *)(lVal_4 + 0x75e0) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xf3abe38f0bc5b771;
      *(uint8_t *)(lVal_4 + 0x75e0) = 0;
    }
    local_48._0_16_ = ZEXT816(0);
    local_58 = ZEXT816(0);
    sz_2 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_2) {
      if (0xf < sz_2) {
        uVal_3 = sz_2 | 0xf;
        uVal_6 = 0x16;
        if (0x16 < uVal_3) {
          uVal_6 = uVal_3;
        }
        if (uVal_3 < 0xfff) {
          local_31 = 1;
          pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
        }
        else {
          local_31 = 1;
          lVal_4 = func_0x180672de0(uVal_6 + 0x28);
LAB_1801dbdfd:
          pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_5 + -8) = lVal_4;
        }
        goto LAB_1801dbe2f;
      }
LAB_1801dbdc6:
      pU64_5 = local_58;
      uVal_6 = 0xf;
LAB_1801dbe33:
      local_48._8_8_ = uVal_6;
      local_48._0_8_ = sz_2;
      func_0x1806aa960(pU64_5,_Str_00,sz_2);
      pU64_5[sz_2] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7600) == '\0') {
        lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_4 + 0x7600) = 1;
        *(uint8_t *)(lVal_4 + 0x75fe) = 1;
        *(uint32_t *)(lVal_4 + 0x75f8) = 0x70e5ca0a;
        *(uint16_t *)(lVal_4 + 0x75fc) = 0xe3f2;
        func_0x180673140(&LAB_180211500);
      }
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_4 + 0x75f8);
      if (*(char *)(lVal_4 + 0x75fe) == '\x01') {
        *_Str = *_Str ^ 0xbc5b771;
        *(byte *)(lVal_4 + 0x75fc) = *(byte *)(lVal_4 + 0x75fc) ^ 0x8f;
        *(byte *)(lVal_4 + 0x75fd) = *(byte *)(lVal_4 + 0x75fd) ^ 0xe3;
        *(uint8_t *)(lVal_4 + 0x75fe) = 0;
      }
      local_78 = ZEXT816(0);
      sz_2 = strlen((char *)_Str);
      if (-1 < (int64_t)sz_2) {
        if (sz_2 < 0x10) {
          pU64_5 = local_78;
          uVal_6 = 0xf;
        }
        else {
          uVal_3 = sz_2 | 0xf;
          uVal_6 = 0x16;
          if (0x16 < uVal_3) {
            uVal_6 = uVal_3;
          }
          if (uVal_3 < 0xfff) {
            local_32 = 1;
            pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
          }
          else {
            local_32 = 1;
            lVal_4 = func_0x180672de0(uVal_6 + 0x28);
            pU64_5 = (uint8_t *)(lVal_4 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_5 + -8) = lVal_4;
          }
          local_78._0_8_ = pU64_5;
        }
        local_68 = sz_2;
        local_60 = uVal_6;
        func_0x1806aa960(pU64_5,_Str,sz_2);
        pU64_5[sz_2] = 0;
        func_0x1801dc140(local_78,local_58,local_98);
        if (0xf < local_60) {
          uVal_6 = local_60 + 1;
          lVal_4 = local_78._0_8_;
          if (0xfff < uVal_6) {
            lVal_4 = *(int64_t *)(local_78._0_8_ + -8);
            if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_4)) goto LAB_1801dc085;
            uVal_6 = local_60 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_6);
        }
        return;
      }
      local_32 = 1;
      func_0x18007ba70();
    }
    local_31 = 1;
    func_0x18007ba70();
  }
  else {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x75f4) == '\0') {
      lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_4 + 0x75f4) = 1;
      *(uint64_t *)(lVal_4 + 0x75e8) = 0x97ce8fed6ab6de35;
      *(uint16_t *)(lVal_4 + 0x75f0) = 0x171;
      func_0x180673140(&LAB_1802114d0);
    }
    lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_4 + 0x75e8);
    if (*(char *)(lVal_4 + 0x75f1) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0xf3abe38f0bc5b771;
      *(byte *)(lVal_4 + 0x75f0) = *(byte *)(lVal_4 + 0x75f0) ^ 0x71;
      *(uint8_t *)(lVal_4 + 0x75f1) = 0;
    }
    local_48._0_16_ = ZEXT816(0);
    local_58 = ZEXT816(0);
    sz_2 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_2) {
      if (sz_2 < 0x10) goto LAB_1801dbdc6;
      uVal_3 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (0xffe < uVal_3) {
        local_31 = 1;
        lVal_4 = func_0x180672de0(uVal_6 + 0x28);
        goto LAB_1801dbdfd;
      }
      local_31 = 1;
      pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
LAB_1801dbe2f:
      local_58._0_8_ = pU64_5;
      goto LAB_1801dbe33;
    }
  }
  local_31 = 1;
  func_0x18007ba70();
LAB_1801dc085:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801dc090
void Unwind_1801dc090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  *(uint8_t *)(param_2 + 0x86) = 0;
  return;
}

// Unwind@1801dc0c0
void Unwind_1801dc0c0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x86);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x60);
  }
  *(char *)(param_2 + 0x87) = ch_1;
  return;
}

// Unwind@1801dc100
void Unwind_1801dc100(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x87) == '\x01') {
    func_0x180001e70(param_2 + 0x20);
  }
  return;
}

// func_0x1801dc140
void func_0x1801dc140(uint64_t *param_1,int64_t **param_2,int64_t **param_3)
{
  int iVal_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  int64_t **ptr2_Long_5;
  int64_t **ptr2_Long_6;
  uint32_t uVal_7;
  uint64_t uVal_8;
  uint64_t ****ptr4_U64_9;
  int64_t *pLong_10;
  int64_t *pLong_11;
  int64_t **local_138;
  int64_t *local_130;
  int64_t **local_128;
  int64_t *local_120;
  uint8_t local_d8 [16];
  uint64_t local_c8;
  uint64_t ****local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  int64_t ***local_90;
  uint64_t *local_88;
  uint64_t local_80;
  uint64_t ****local_78 [2];
  uint64_t local_68;
  uint64_t local_60;
  int64_t **local_58;
  int64_t **local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_130 = param_2[2];
  local_138 = param_2;
  if (&DAT_0000000f < param_2[3]) {
    local_138 = (int64_t **)*param_2;
  }
  local_120 = param_3[2];
  local_128 = param_3;
  if (&DAT_0000000f < param_3[3]) {
    local_128 = (int64_t **)*param_3;
  }
  local_98 = 0xdd;
  local_90 = &local_138;
  local_88 = param_1;
  if (0xf < (uint64_t)param_1[3]) {
    local_88 = (uint64_t *)*param_1;
  }
  local_80 = param_1[2];
  local_58 = param_3;
  local_50 = param_2;
  func_0x18063ff10(local_78,&local_88,&local_98);
  uVal_8 = local_60;
  ptr4_U64_9 = local_78[0];
  lVal_4 = DAT_18083ed00;
  iVal_1 = *(int *)(DAT_18083ed00 + 0x40);
  uVal_7 = func_0x1806520c0(DAT_18083ed00 + 0x88);
  if ((2 < iVal_1 & ((byte)uVal_7 ^ 1)) == 0) {
    local_b8 = local_78;
    if (0xf < uVal_8) {
      local_b8 = ptr4_U64_9;
    }
    local_b0 = local_68;
    if (*(uint64_t *)(lVal_4 + 0x20) < 0x10) {
      local_a8 = lVal_4 + 8;
    }
    else {
      local_a8 = *(int64_t *)(lVal_4 + 8);
    }
    local_a0 = *(uint64_t *)(lVal_4 + 0x18);
    local_d8 = ZEXT816(0);
    local_c8 = 0;
    func_0x180652c00(&local_138,local_d8,&local_a8,2,&local_b8);
    func_0x180654f40(lVal_4,&local_138,iVal_1 < 3,uVal_7);
  }
  ptr2_Long_6 = local_50;
  ptr2_Long_5 = local_58;
  if (0xf < local_60) {
    uVal_8 = local_60 + 1;
    ptr4_U64_9 = local_78[0];
    if (0xfff < uVal_8) {
      ptr4_U64_9 = (uint64_t ****)local_78[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_78[0] + (-8 - (int64_t)ptr4_U64_9)))
      goto LAB_1801dc381;
      uVal_8 = local_60 + 0x28;
    }
    thunk_FUN_180695dd0(ptr4_U64_9,uVal_8);
  }
  pLong_2 = ptr2_Long_6[3];
  if (&DAT_0000000f < pLong_2) {
    pLong_3 = *ptr2_Long_6;
    pLong_11 = (int64_t *)((int64_t)pLong_2 + 1);
    pLong_10 = pLong_3;
    if ((int64_t *)0xfff < pLong_11) {
      pLong_10 = (int64_t *)pLong_3[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_3 + (-8 - (int64_t)pLong_10))) goto LAB_1801dc381;
      pLong_11 = pLong_2 + 5;
    }
    thunk_FUN_180695dd0(pLong_10,pLong_11);
  }
  ptr2_Long_6[2] = (int64_t *)0x0;
  ptr2_Long_6[3] = (int64_t *)&DAT_0000000f;
  *(uint8_t *)ptr2_Long_6 = 0;
  pLong_2 = ptr2_Long_5[3];
  if (&DAT_0000000f < pLong_2) {
    pLong_3 = *ptr2_Long_5;
    pLong_11 = (int64_t *)((int64_t)pLong_2 + 1);
    pLong_10 = pLong_3;
    if ((int64_t *)0xfff < pLong_11) {
      pLong_10 = (int64_t *)pLong_3[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_3 + (-8 - (int64_t)pLong_10))) {
LAB_1801dc381:
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_11 = pLong_2 + 5;
    }
    thunk_FUN_180695dd0(pLong_10,pLong_11);
  }
  return;
}

// Unwind@1801dc390
void Unwind_1801dc390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1801dc3d0
void Unwind_1801dc3d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x118));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x110));
  return;
}

// func_0x1801dc420
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801dc420(int64_t *param_1)
{
  char *_Str;
  size_t sz_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint8_t local_b8 [32];
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint8_t *local_88;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t local_50;
  uint8_t local_39;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_88 = &DAT_28d478d88fb3dcdf;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
  }
  else {
    local_88 = &DAT_28d0f803f34a0611;
    lVal_4 = DAT_180840a58[0xc9];
    (**(func_ptr_t *)(*param_1 + 0x10))(param_1,local_b8);
    local_98 = PTR_DAT_1806b6f30._0_4_;
    uStack_94 = PTR_DAT_1806b6f30._4_4_;
    uStack_90 = _UNK_1806b6f38;
    uStack_8c = _UNK_1806b6f3c;
    local_78 = _DAT_1806bd2c0;
    uStack_74 = _UNK_1806bd2c4;
    uStack_70 = _UNK_1806bd2c8;
    uStack_6c = _UNK_1806bd2cc;
    local_88 = (uint8_t *)CONCAT44(_UNK_1806bd2b4,_DAT_1806bd2b0);
    uStack_80 = _UNK_1806bd2b8;
    uStack_7c = _UNK_1806bd2bc;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7624) == '\0') {
      lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_3 + 0x7624) = 1;
      func_0x18008f8e0(lVal_3 + 0x7601,&local_88);
      func_0x180673140(&LAB_180211530);
    }
    _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7601);
    func_0x180217150(_Str);
    local_68 = ZEXT816(0);
    sz_1 = strlen(_Str);
    if ((int64_t)sz_1 < 0) {
      local_39 = 1;
      func_0x18007ba70();
LAB_1801dc6cb:
      do {
        invalidInstructionException();
      } while( true );
    }
    if (sz_1 < 0x10) {
      pU64_5 = local_68;
      uVal_6 = 0xf;
    }
    else {
      uVal_2 = sz_1 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_2) {
        uVal_6 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        local_39 = 1;
        pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
      }
      else {
        local_39 = 1;
        lVal_3 = func_0x180672de0(uVal_6 + 0x28);
        pU64_5 = (uint8_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -8) = lVal_3;
      }
      local_68._0_8_ = pU64_5;
    }
    local_58 = sz_1;
    local_50 = uVal_6;
    func_0x1806aa960(pU64_5,_Str,sz_1);
    pU64_5[sz_1] = 0;
    func_0x180143b90(lVal_4,local_68,&local_98,local_b8);
    if (0xf < local_50) {
      uVal_6 = local_50 + 1;
      lVal_4 = local_68._0_8_;
      if (0xfff < uVal_6) {
        lVal_4 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_4)) goto LAB_1801dc6cb;
        uVal_6 = local_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_6);
    }
  }
  return;
}

// Unwind@1801dc6d0
void Unwind_1801dc6d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  *(uint8_t *)(param_2 + 0x9f) = 0;
  return;
}

// Unwind@1801dc710
void Unwind_1801dc710(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x9f) == '\x01') {
    func_0x180001e70(param_2 + 0x20);
  }
  return;
}

// Unwind@1801dc750
void Unwind_1801dc750(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7624) = 0;
  *(uint8_t *)(param_2 + 0x9f) = 1;
  return;
}

// func_0x1801dc7a0
void func_0x1801dc7a0(int64_t *param_1,char param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint32_t uVal_4;
  int64_t lVal_5;
  char ch_6;
  int iVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint *pU64_12;
  uint64_t *_Buf1;
  uint *pU64_13;
  uint8_t *pU64_14;
  uint64_t *pU64_15;
  uint8_t (*pArr16_16)[16];
  uint8_t *pU64_17;
  uint64_t uVal_18;
  bool bFlag_19;
  uint64_t in_stack_fffffffffffffed8;
  int64_t local_118 [3];
  uint64_t local_100;
  uint64_t local_f8;
  int64_t *local_f0;
  uint8_t local_e8;
  undefined7 uStack_e7;
  uint64_t local_d8;
  uint64_t local_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint64_t local_b8;
  uint64_t uStack_b0;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint64_t local_78;
  uint64_t uStack_70;
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_68._8_8_ = local_68._0_8_;
  local_48 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083f9a0) && (func_0x180672ec0(&DAT_18083f9a0), DAT_18083f9a0 == -1)) {
    DAT_18083f998 = func_0x1801dd3e0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_18083f9a0);
  }
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083f9b0) && (func_0x180672ec0(&DAT_18083f9b0), DAT_18083f9b0 == -1)) {
    DAT_18083f9a8 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_18083f9b0);
  }
  local_68._0_8_ = &DAT_28d478d88fb3dcdf;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
    return;
  }
  if (*(char *)(DAT_18083f9a8 + 0x40) != '\0') {
    return;
  }
  ch_6 = (**(func_ptr_t *)(*param_1 + 0x98))(param_1);
  if (ch_6 != '\0') {
    return;
  }
  if (*(char *)(DAT_18083f998 + 0x40) != '\x01') {
    return;
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7638) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x7638) = 1;
    *(uint64_t *)(lVal_10 + 0x7628) = 0x4e242a9c7ba439c;
    *(uint32_t *)(lVal_10 + 0x7630) = 0xdbbe529d;
    *(uint16_t *)(lVal_10 + 0x7634) = 0x1dd;
    func_0x180673140(&LAB_180211560);
  }
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_15 = (uint64_t *)(lVal_10 + 0x7628);
  if (*(char *)(lVal_10 + 0x7635) == '\x01') {
    *pU64_15 = *pU64_15 ^ 0x67911dddb5db37ef;
    *(uint *)(lVal_10 + 0x7630) = *(uint *)(lVal_10 + 0x7630) ^ 0xb5db37ef;
    *(byte *)(lVal_10 + 0x7634) = *(byte *)(lVal_10 + 0x7634) ^ 0xdd;
    *(uint8_t *)(lVal_10 + 0x7635) = 0;
  }
  local_68 = ZEXT816(0);
  sz_8 = strlen((char *)pU64_15);
  if (-1 < (int64_t)sz_8) {
    uVal_18 = 0xf;
    pU64_17 = local_68;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_9) {
        uVal_18 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_10 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_10;
      }
      local_68._0_8_ = pU64_17;
    }
    local_58 = sz_8;
    local_50 = uVal_18;
    func_0x1806aa960(pU64_17,pU64_15,sz_8);
    pU64_17[sz_8] = 0;
    uVal_18 = local_50;
    pU64_17 = (uint8_t *)local_68._0_8_;
    pU64_14 = local_68;
    if (0xf < local_50) {
      pU64_14 = (uint8_t *)local_68._0_8_;
    }
    if (DAT_18083cd20 < 0x10) {
      _Buf1 = &DAT_18083cd08;
      if (DAT_18083cd18 != local_58) goto LAB_1801dc9f8;
LAB_1801dca0e:
      if (local_58 == 0) {
        bFlag_19 = true;
      }
      else {
        iVal_7 = memcmp(_Buf1,pU64_14,local_58);
        bFlag_19 = iVal_7 == 0;
      }
    }
    else {
      _Buf1 = DAT_18083cd08;
      if (DAT_18083cd18 == local_58) goto LAB_1801dca0e;
LAB_1801dc9f8:
      bFlag_19 = false;
    }
    if (0xf < uVal_18) {
      uVal_9 = uVal_18 + 1;
      pU64_14 = pU64_17;
      if (0xfff < uVal_9) {
        pU64_14 = *(uint8_t **)(pU64_17 + -8);
        if ((uint8_t *)0x1f < pU64_17 + (-8 - (int64_t)pU64_14)) goto LAB_1801dd18e;
        uVal_9 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(pU64_14,uVal_9);
    }
    if (bFlag_19) {
      return;
    }
    if (param_2 == '\0') {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x765c) == '\0') {
        lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_10 + 0x765c) = 1;
        *(uint8_t *)(lVal_10 + 0x765a) = 1;
        *(uint64_t *)(lVal_10 + 0x7650) = 0x4eb54124c08a9b07;
        *(uint16_t *)(lVal_10 + 0x7658) = 0xdf43;
        func_0x180673140(&LAB_1802115c0);
      }
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_15 = (uint64_t *)(lVal_10 + 0x7650);
      if (*(char *)(lVal_10 + 0x765a) == '\x01') {
        *pU64_15 = *pU64_15 ^ 0x2bd92345b3e3df27;
        *(byte *)(lVal_10 + 0x7658) = *(byte *)(lVal_10 + 0x7658) ^ 0x27;
        *(byte *)(lVal_10 + 0x7659) = *(byte *)(lVal_10 + 0x7659) ^ 0xdf;
        *(uint8_t *)(lVal_10 + 0x765a) = 0;
      }
    }
    else {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x764c) == '\0') {
        lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_10 + 0x764c) = 1;
        *(uint64_t *)(lVal_10 + 0x7640) = 0x4fbc4f27d28d9a07;
        *(uint16_t *)(lVal_10 + 0x7648) = 0x127;
        func_0x180673140(&LAB_180211590);
      }
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_15 = (uint64_t *)(lVal_10 + 0x7640);
      if (*(char *)(lVal_10 + 0x7649) == '\x01') {
        *pU64_15 = *pU64_15 ^ 0x2bd92345b3e3df27;
        *(byte *)(lVal_10 + 0x7648) = *(byte *)(lVal_10 + 0x7648) ^ 0x27;
        *(uint8_t *)(lVal_10 + 0x7649) = 0;
      }
    }
    local_68 = ZEXT816(0);
    sz_8 = strlen((char *)pU64_15);
    if (-1 < (int64_t)sz_8) {
      if (sz_8 < 0x10) {
        pU64_17 = local_68;
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
          lVal_10 = func_0x180672de0(uVal_18 + 0x28);
          pU64_17 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_17 + -8) = lVal_10;
        }
        local_68._0_8_ = pU64_17;
      }
      local_58 = sz_8;
      local_50 = uVal_18;
      func_0x1806aa960(pU64_17,pU64_15,sz_8);
      pU64_17[sz_8] = 0;
      (**(func_ptr_t *)(*param_1 + 0x10))(param_1,local_118);
      uVal_18 = local_58;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = ZEXT816(0);
      if (local_50 < 0x10) {
        pArr16_16 = &local_68;
      }
      else {
        pArr16_16 = (uint8_t (*)[16])local_68._0_8_;
      }
      if ((int64_t)local_58 < 0) {
        func_0x18007ba70();
LAB_1801dd196:
        func_0x18007ba70();
        fnPtr_3 = (func_ptr_t )swi(3);
        (*fnPtr_3)();
        return;
      }
      if (local_58 < 0x10) {
        local_78 = local_58;
        uStack_70 = 0xf;
        local_88 = *pArr16_16;
      }
      else {
        uVal_11 = local_58 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_11) {
          uVal_9 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          uVal_11 = func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_10 = func_0x180672de0(uVal_9 + 0x28);
          uVal_11 = lVal_10 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_11 - 8) = lVal_10;
        }
        local_88._0_8_ = uVal_11;
        local_78 = uVal_18;
        uStack_70 = uVal_9;
        func_0x1806aa960(uVal_11,pArr16_16,uVal_18 + 1);
      }
      uVal_18 = local_78;
      if (uStack_70 == local_78) {
        in_stack_fffffffffffffed8 = 0;
        pU64_12 = (uint *)func_0x180082950(local_88,1);
      }
      else {
        local_78 = local_78 + 1;
        pU64_12 = (uint *)local_88;
        pU64_13 = pU64_12;
        if (0xf < uStack_70) {
          pU64_13 = (uint *)local_88._0_8_;
        }
        *(uint16_t *)((int64_t)pU64_13 + uVal_18) = 0x20;
      }
      local_c8 = *pU64_12;
      uStack_c4 = pU64_12[1];
      uStack_c0 = pU64_12[2];
      uStack_bc = pU64_12[3];
      uVal_4 = pU64_12[4];
      local_b8 = *(uint64_t *)(pU64_12 + 4);
      uStack_b0 = *(uint64_t *)(pU64_12 + 6);
      *(uint64_t *)(pU64_12 + 4) = 0;
      *(uint64_t *)(pU64_12 + 6) = 0xf;
      *(uint8_t *)pU64_12 = 0;
      func_0x180094870(&local_e8,uVal_4,&local_c8,local_118);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7670) == '\0') {
        lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_10 + 0x7670) = 1;
        *(uint64_t *)(lVal_10 + 0x7660) = 0xc4fc6ae730ef6a95;
        *(uint32_t *)(lVal_10 + 0x7668) = 0x37f46caf;
        *(uint16_t *)(lVal_10 + 0x766c) = 0x181;
        func_0x180673140(&LAB_1802115f0);
      }
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_15 = (uint64_t *)(lVal_10 + 0x7660);
      if (*(char *)(lVal_10 + 0x766d) == '\x01') {
        *pU64_15 = *pU64_15 ^ 0xa59f0381599b05db;
        *(uint *)(lVal_10 + 0x7668) = *(uint *)(lVal_10 + 0x7668) ^ 0x599b05db;
        *(byte *)(lVal_10 + 0x766c) = *(byte *)(lVal_10 + 0x766c) ^ 0x81;
        *(uint8_t *)(lVal_10 + 0x766d) = 0;
      }
      local_98 = ZEXT816(0);
      local_a8 = ZEXT816(0);
      sz_8 = strlen((char *)pU64_15);
      if ((int64_t)sz_8 < 0) goto LAB_1801dd196;
      if (sz_8 < 0x10) {
        pU64_17 = local_a8;
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
          lVal_10 = func_0x180672de0(uVal_18 + 0x28);
          pU64_17 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_17 + -8) = lVal_10;
        }
        local_a8._0_8_ = pU64_17;
      }
      local_98._0_8_ = sz_8;
      local_98._8_8_ = uVal_18;
      func_0x1806aa960(pU64_17,pU64_15,sz_8);
      pU64_17[sz_8] = 0;
      func_0x180460b20(&DAT_180840a48,&local_f8,local_a8,&local_e8,
                    in_stack_fffffffffffffed8 & 0xffffffffffffff00);
      if (0xf < (uint64_t)local_98._8_8_) {
        uVal_18 = local_98._8_8_ + 1;
        lVal_10 = local_a8._0_8_;
        if (0xfff < uVal_18) {
          lVal_10 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_10)) goto LAB_1801dd18e;
          uVal_18 = local_98._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_18);
      }
      if (0xf < local_d0) {
        lVal_5 = CONCAT71(uStack_e7,local_e8);
        uVal_18 = local_d0 + 1;
        lVal_10 = lVal_5;
        if (0xfff < uVal_18) {
          lVal_10 = *(int64_t *)(lVal_5 + -8);
          if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_10)) goto LAB_1801dd18e;
          uVal_18 = local_d0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_18);
      }
      local_d8 = 0;
      local_d0 = 0xf;
      local_e8 = 0;
      if (0xf < uStack_b0) {
        lVal_5 = CONCAT44(uStack_c4,local_c8);
        uVal_18 = uStack_b0 + 1;
        lVal_10 = lVal_5;
        if (0xfff < uVal_18) {
          lVal_10 = *(int64_t *)(lVal_5 + -8);
          if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_10)) goto LAB_1801dd18e;
          uVal_18 = uStack_b0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_18);
      }
      local_b8 = 0;
      uStack_b0 = 0xf;
      local_c8 = local_c8 & 0xffffff00;
      if (0xf < uStack_70) {
        uVal_18 = uStack_70 + 1;
        lVal_10 = local_88._0_8_;
        if (0xfff < uVal_18) {
          lVal_10 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_10)) goto LAB_1801dd18e;
          uVal_18 = uStack_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_18);
      }
      if (0xf < local_100) {
        uVal_18 = local_100 + 1;
        lVal_10 = local_118[0];
        if (0xfff < uVal_18) {
          lVal_10 = *(int64_t *)(local_118[0] + -8);
          if (0x1f < (uint64_t)((local_118[0] + -8) - lVal_10)) goto LAB_1801dd18e;
          uVal_18 = local_100 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_18);
      }
      func_0x1800cc7c0(local_f8,DAT_1806ae650);
      if (local_f0 != (int64_t *)0x0) {
        LOCK();
        pLong_1 = local_f0 + 1;
        *(int *)pLong_1 = *(int *)pLong_1 + -1;
        UNLOCK();
        if (*(int *)pLong_1 == 0) {
          (**(func_ptr_t *)*local_f0)(local_f0);
          LOCK();
          pInt_2 = (int *)((int64_t)local_f0 + 0xc);
          *pInt_2 = *pInt_2 + -1;
          UNLOCK();
          if (*pInt_2 == 0) {
            (**(func_ptr_t *)(*local_f0 + 8))(local_f0);
          }
        }
      }
      if (local_50 < 0x10) {
        return;
      }
      uVal_18 = local_50 + 1;
      lVal_10 = local_68._0_8_;
      if (uVal_18 < 0x1000) {
LAB_1801dcfd4:
        thunk_FUN_180695dd0(lVal_10,uVal_18);
        return;
      }
      lVal_10 = *(int64_t *)(local_68._0_8_ + -8);
      if ((uint64_t)((local_68._0_8_ + -8) - lVal_10) < 0x20) {
        uVal_18 = local_50 + 0x28;
        goto LAB_1801dcfd4;
      }
      goto LAB_1801dd18e;
    }
  }
  func_0x18007ba70();
LAB_1801dd18e:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801dd1a0
void Unwind_1801dd1a0(void)
{
  func_0x180672f60(&DAT_18083f9a0);
  return;
}

// Unwind@1801dd1e0
void Unwind_1801dd1e0(void)
{
  func_0x180672f60(&DAT_18083f9b0);
  return;
}

// Unwind@1801dd220
void Unwind_1801dd220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@1801dd260
void Unwind_1801dd260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1801dd2a0
void Unwind_1801dd2a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1801dd2e0
void Unwind_1801dd2e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1801dd320
void Unwind_1801dd320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1801dd360
void Unwind_1801dd360(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  return;
}

// Unwind@1801dd3a0
void Unwind_1801dd3a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// func_0x1801dd3e0
uint64_t func_0x1801dd3e0(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0x381d190f);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x1801dd480
void func_0x1801dd480(int64_t param_1)
{
  func_ptr_t fnPtr_1;
  
  if (*(int64_t **)(param_1 + 0x168) != (int64_t *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001801dd497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(func_ptr_t *)(**(int64_t **)(param_1 + 0x168) + 0x10))();
    return;
  }
  func_0x180674610();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801dd4b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801dd4b0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint *pU64_2;
  uint64_t *pU64_3;
  uint8_t *pU64_4;
  byte *pU8_5;
  uint32_t uVal_6;
  func_ptr_t fnPtr_7;
  uint64_t uVal_8;
  uint8_t auArr_9 [16];
  uint64_t *pU64_10;
  size_t sz_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t *pU64_14;
  uint8_t *pU64_15;
  uint8_t *pU64_16;
  uint8_t *pU64_17;
  uint8_t uVal_18;
  uint64_t uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint uVal_26;
  uint64_t in_stack_fffffffffffffc18;
  uint64_t uVal_27;
  uint32_t uVal_28;
  uint32_t uVal_29;
  uint in_stack_fffffffffffffc28;
  uint uVal_30;
  uint8_t **local_3b8;
  uint64_t *local_3b0;
  uint8_t ***local_380;
  uint8_t **local_378;
  uint64_t *local_370;
  uint8_t ***local_340;
  uint8_t **local_338;
  uint64_t *local_330;
  uint8_t ***local_300;
  uint8_t **local_2f8;
  uint64_t *local_2f0;
  uint8_t ***local_2c0;
  uint64_t local_2b8;
  uint64_t uStack_2b0;
  uint64_t local_2a8;
  uint64_t uStack_2a0;
  uint8_t local_298 [56];
  uint64_t local_260;
  uint8_t local_258 [56];
  uint64_t local_220;
  uint8_t local_218 [56];
  uint64_t local_1e0;
  uint8_t local_1d8 [56];
  uint64_t local_1a0;
  uint8_t local_198 [56];
  uint64_t local_160;
  uint8_t local_158 [56];
  uint64_t local_120;
  uint64_t local_118;
  undefined7 uStack_110;
  uint8_t uStack_109;
  uint8_t uStack_108;
  uint8_t uStack_107;
  undefined5 uStack_106;
  uint8_t uStack_101;
  uint8_t local_f8 [16];
  uint16_t local_e8;
  uint16_t uStack_e6;
  uint32_t uStack_e4;
  uint16_t uStack_e0;
  uint16_t uStack_de;
  uint16_t uStack_dc;
  uint8_t uStack_da;
  uint8_t uStack_d9;
  uint16_t uStack_d8;
  uint8_t uStack_d6;
  uint8_t uStack_d5;
  uint16_t uStack_d4;
  uint16_t uStack_d2;
  uint16_t uStack_d0;
  uint16_t uStack_ce;
  uint32_t uStack_cc;
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint32_t local_b8;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint64_t *local_80;
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
  
  local_60 = 0xfffffffffffffffe;
  local_f8._8_8_ = _UNK_1806bd2d8;
  local_f8._0_8_ = _DAT_1806bd2d0;
  local_e8 = 0xd9bc;
  local_80 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7684) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0x7684) = 1;
    func_0x18007c170(lVal_13 + 0x7671,local_f8);
    func_0x180673140(&LAB_180211620);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7671);
  func_0x180217180(fnPtr_1);
  local_e8 = 0;
  uStack_e6 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_de = 0;
  uStack_dc = 0;
  uStack_da = 0;
  uStack_d9 = 0;
  local_f8 = (uint8_t  [16])0x0;
  sz_11 = strlen(fnPtr_1);
  if ((int64_t)sz_11 < 0) {
    func_0x18007ba70();
LAB_1801dfcb1:
    local_61 = 1;
    func_0x18007ba70();
LAB_1801dfcbe:
    local_6e = 1;
    func_0x18007ba70();
LAB_1801dfccb:
    local_62 = 1;
    func_0x18007ba70();
LAB_1801dfcd8:
    local_6f = 1;
    func_0x18007ba70();
LAB_1801dfce5:
    local_64 = 1;
    func_0x18007ba70();
LAB_1801dfcf2:
    local_63 = 1;
    func_0x18007ba70();
LAB_1801dfcff:
    local_66 = 1;
    func_0x18007ba70();
LAB_1801dfd0c:
    local_65 = 1;
    func_0x18007ba70();
LAB_1801dfd19:
    local_67 = 1;
    func_0x18007ba70();
LAB_1801dfd26:
    local_70 = 1;
    func_0x18007ba70();
LAB_1801dfd33:
    local_69 = 1;
    func_0x18007ba70();
LAB_1801dfd40:
    local_68 = 1;
    func_0x18007ba70();
LAB_1801dfd4d:
    local_72 = 1;
    func_0x18007ba70();
LAB_1801dfd5a:
    local_71 = 1;
    func_0x18007ba70();
LAB_1801dfd67:
    local_6a = 1;
    func_0x18007ba70();
LAB_1801dfd74:
    local_73 = 1;
    func_0x18007ba70();
LAB_1801dfd81:
    local_6c = 1;
    func_0x18007ba70();
LAB_1801dfd8e:
    local_6b = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_11 < 0x10) {
      pU64_16 = local_f8;
      uVal_19 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_16;
    }
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,fnPtr_1,sz_11);
    pU64_16[sz_11] = 0;
    pU64_16 = local_f8;
    func_0x1801c2ba0(local_80,0,0,pU64_16);
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    *local_80 = &PTR_LAB_1806bb8d0;
    pU64_14 = local_80 + 0x10;
    *(uint8_t *)(local_80 + 0x10) = 1;
    *(uint64_t *)((int64_t)local_80 + 0x81) = 0;
    uVal_8 = _UNK_1806b2888;
    uVal_27 = _DAT_1806b2880;
    *(uint64_t *)((int64_t)local_80 + 0x8c) = _DAT_1806b2880;
    *(uint64_t *)((int64_t)local_80 + 0x94) = uVal_8;
    *(uint16_t *)((int64_t)local_80 + 0x9c) = 0;
    local_80[0x14] = uVal_27;
    local_80[0x15] = uVal_8;
    local_260 = 0;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_18 = 1;
    }
    else {
      local_260 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_298);
      uVal_18 = *(uint8_t *)pU64_14;
    }
    uStack_d8 = _UNK_1806bd302;
    uStack_d6 = (uint8_t)_UNK_1806bd304;
    uStack_d5 = (uint8_t)((uint)_UNK_1806bd304 >> 8);
    uStack_d4 = (uint16_t)((uint)_UNK_1806bd304 >> 0x10);
    uStack_d2 = (uint16_t)_UNK_1806bd308;
    uStack_d0 = (uint16_t)((uint)_UNK_1806bd308 >> 0x10);
    local_e8 = (uint16_t)_DAT_1806bd2f2;
    uStack_e6 = (uint16_t)((uint)_DAT_1806bd2f2 >> 0x10);
    uStack_e4 = _UNK_1806bd2f6;
    uStack_e0 = _UNK_1806bd2fa;
    uStack_de = _DAT_1806bd2fc;
    uStack_dc = _UNK_1806bd2fe;
    uStack_da = (uint8_t)_UNK_1806bd300;
    uStack_d9 = (uint8_t)((ushort)_UNK_1806bd300 >> 8);
    local_f8._8_8_ = _UNK_1806bd2ea;
    local_f8._0_8_ = _DAT_1806bd2e2;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x76b0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x76b0) = 1;
      func_0x18012b7b0(lVal_13 + 0x7685,local_f8);
      func_0x180673140(&LAB_180211650);
    }
    uVal_25 = _UNK_1806b4e8c;
    uVal_24 = _UNK_1806b4e88;
    uVal_22 = _UNK_1806b4e84;
    uVal_30 = _DAT_1806b4e80;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_13 + 0x7685);
    if (*(char *)(lVal_13 + 0x76af) == '\x01') {
      uVal_20 = *(uint *)(lVal_13 + 0x7689) ^ _UNK_1806b4e84;
      uVal_21 = *(uint *)(lVal_13 + 0x768d) ^ _UNK_1806b4e88;
      uVal_23 = *(uint *)(lVal_13 + 0x7691) ^ _UNK_1806b4e8c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b4e80;
      *(uint *)(lVal_13 + 0x7689) = uVal_20;
      *(uint *)(lVal_13 + 0x768d) = uVal_21;
      *(uint *)(lVal_13 + 0x7691) = uVal_23;
      *(uint *)(lVal_13 + 0x7695) = *(uint *)(lVal_13 + 0x7695) ^ uVal_30;
      *(uint *)(lVal_13 + 0x7699) = *(uint *)(lVal_13 + 0x7699) ^ uVal_22;
      *(uint *)(lVal_13 + 0x769d) = *(uint *)(lVal_13 + 0x769d) ^ uVal_24;
      *(uint *)(lVal_13 + 0x76a1) = *(uint *)(lVal_13 + 0x76a1) ^ uVal_25;
      *(uint64_t *)(lVal_13 + 0x76a5) = *(uint64_t *)(lVal_13 + 0x76a5) ^ SUB168(_DAT_1806b63f0,0);
      *(byte *)(lVal_13 + 0x76ad) = *(byte *)(lVal_13 + 0x76ad) ^ 0x75;
      *(byte *)(lVal_13 + 0x76ae) = *(byte *)(lVal_13 + 0x76ae) ^ 0x19;
      *(uint8_t *)(lVal_13 + 0x76af) = 0;
    }
    _local_98 = (uint8_t  [16])0x0;
    _local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfcb1;
    if (sz_11 < 0x10) {
      pU64_17 = local_a8;
      uVal_19 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_61 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_61 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_a8 = (uint8_t  [8])pU64_17;
    }
    uStack_90 = uVal_19;
    local_98 = (uint8_t  [8])sz_11;
    func_0x1806aa960(pU64_17,pU64_2,sz_11);
    pU64_17[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x76c8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x76c8) = 1;
      *(uint64_t *)(lVal_13 + 0x76b8) = 0x22e1250ddb987121;
      *(uint32_t *)(lVal_13 + 0x76c0) = 0xc79e6a07;
      *(uint16_t *)(lVal_13 + 0x76c4) = 0x169;
      func_0x180673140(&LAB_180211680);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0x76b8);
    if (*(char *)(lVal_13 + 0x76c5) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x47910569a9f11975;
      *(uint *)(lVal_13 + 0x76c0) = *(uint *)(lVal_13 + 0x76c0) ^ 0xa9f11975;
      *(byte *)(lVal_13 + 0x76c4) = *(byte *)(lVal_13 + 0x76c4) ^ 0x69;
      *(uint8_t *)(lVal_13 + 0x76c5) = 0;
    }
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfcbe;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6e = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_6e = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_16;
    }
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,pU64_3,sz_11);
    pU64_16[sz_11] = 0;
    uVal_27 = CONCAT71((int7)((uint64_t)in_stack_fffffffffffffc18 >> 8),uVal_18);
    in_stack_fffffffffffffc28 = in_stack_fffffffffffffc28 & 0xffffff00;
    pU64_16 = local_f8;
    pU64_17 = local_a8;
    func_0x1801ccd70(local_80,pU64_16,pU64_17,pU64_14,uVal_27,local_298,in_stack_fffffffffffffc28);
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < uStack_90) {
      uVal_19 = uStack_90 + 1;
      lVal_13 = (int64_t)local_a8;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_19 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    local_220 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_220 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_258);
    }
    auArr_9 = _local_98;
    pU64_4 = (uint8_t *)((int64_t)local_80 + 0x81);
    uVal_18 = *pU64_4;
    local_98._4_4_ = _UNK_1806bd320;
    local_98._0_4_ = _UNK_1806bd31c;
    uStack_90._4_4_ = auArr_9._12_4_;
    uStack_90._0_4_ = _UNK_1806bd324;
    uStack_a0._4_4_ = _DAT_1806bd318;
    uStack_a0._0_4_ = _UNK_1806bd314;
    local_a8 = (uint8_t  [8])_DAT_1806bd30c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x76e8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x76e8) = 1;
      func_0x18008fba0(lVal_13 + 0x76c9,local_a8);
      func_0x180673140(&LAB_1802116b0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x76c9);
    func_0x1801c0d20(fnPtr_1);
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfccb;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_62 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_62 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_16;
    }
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,fnPtr_1,sz_11);
    pU64_16[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x76fc) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x76fc) = 1;
      *(uint8_t *)(lVal_13 + 0x76fa) = 1;
      *(uint64_t *)(lVal_13 + 0x76f0) = 0x914bb245ba23323c;
      *(uint16_t *)(lVal_13 + 0x76f8) = 0x5544;
      func_0x180673140(&LAB_1802116e0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0x76f0);
    if (*(char *)(lVal_13 + 0x76fa) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xd76bd737d54d5575;
      *(byte *)(lVal_13 + 0x76f8) = *(byte *)(lVal_13 + 0x76f8) ^ 0x75;
      *(byte *)(lVal_13 + 0x76f9) = *(byte *)(lVal_13 + 0x76f9) ^ 0x55;
      *(uint8_t *)(lVal_13 + 0x76fa) = 0;
    }
    _local_98 = (uint8_t  [16])0x0;
    _local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfcd8;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6f = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_6f = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_a8 = (uint8_t  [8])pU64_17;
    }
    local_98 = (uint8_t  [8])sz_11;
    uStack_90 = uVal_19;
    func_0x1806aa960(pU64_17,pU64_3,sz_11);
    pU64_17[sz_11] = 0;
    uVal_27 = CONCAT71((int7)((uint64_t)uVal_27 >> 8),uVal_18);
    in_stack_fffffffffffffc28 = in_stack_fffffffffffffc28 & 0xffffff00;
    pU64_16 = local_a8;
    pU64_17 = local_f8;
    func_0x1801ccd70(local_80,pU64_16,pU64_17,pU64_4,uVal_27,local_258,in_stack_fffffffffffffc28);
    if (0xf < uStack_90) {
      uVal_19 = uStack_90 + 1;
      lVal_13 = (int64_t)local_a8;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_19 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_1e0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_1e0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_218);
    }
    pU64_4 = (uint8_t *)((int64_t)local_80 + 0x82);
    uVal_18 = *pU64_4;
    local_c8 = _DAT_1806bd358;
    uStack_c4 = _UNK_1806bd35c;
    uStack_c0 = _UNK_1806bd360;
    uStack_bc = _UNK_1806bd364;
    uStack_d8 = (uint16_t)_DAT_1806bd348;
    uStack_d6 = (uint8_t)((uint)_DAT_1806bd348 >> 0x10);
    uStack_d5 = (uint8_t)((uint)_DAT_1806bd348 >> 0x18);
    uStack_d4 = (uint16_t)_UNK_1806bd34c;
    uStack_d2 = (uint16_t)((uint)_UNK_1806bd34c >> 0x10);
    uStack_d0 = (uint16_t)_UNK_1806bd350;
    uStack_ce = (uint16_t)((uint)_UNK_1806bd350 >> 0x10);
    uStack_cc = _UNK_1806bd354;
    local_e8 = (uint16_t)_DAT_1806bd338;
    uStack_e6 = (uint16_t)((uint)_DAT_1806bd338 >> 0x10);
    uStack_e4 = _UNK_1806bd33c;
    uStack_e0 = (uint16_t)_UNK_1806bd340;
    uStack_de = (uint16_t)((uint)_UNK_1806bd340 >> 0x10);
    uStack_dc = (uint16_t)_UNK_1806bd344;
    uStack_da = (uint8_t)((uint)_UNK_1806bd344 >> 0x10);
    uStack_d9 = (uint8_t)((uint)_UNK_1806bd344 >> 0x18);
    local_f8._8_8_ = _UNK_1806bd330;
    local_f8._0_8_ = _DAT_1806bd328;
    local_b8 = 0xc7092453;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7744) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7744) = 1;
      func_0x180211710(lVal_13 + 0x76fd,local_f8);
      func_0x180673140(&LAB_180211900);
    }
    uVal_25 = _UNK_1806b2cac;
    uVal_24 = _UNK_1806b2ca8;
    uVal_22 = _UNK_1806b2ca4;
    uVal_30 = _DAT_1806b2ca0;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_13 + 0x76fd);
    if (*(char *)(lVal_13 + 0x7741) == '\x01') {
      uVal_20 = *(uint *)(lVal_13 + 0x7701) ^ _UNK_1806b2ca4;
      uVal_21 = *(uint *)(lVal_13 + 0x7705) ^ _UNK_1806b2ca8;
      uVal_23 = *(uint *)(lVal_13 + 0x7709) ^ _UNK_1806b2cac;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_13 + 0x7701) = uVal_20;
      *(uint *)(lVal_13 + 0x7705) = uVal_21;
      *(uint *)(lVal_13 + 0x7709) = uVal_23;
      *(uint *)(lVal_13 + 0x770d) = *(uint *)(lVal_13 + 0x770d) ^ uVal_30;
      *(uint *)(lVal_13 + 0x7711) = *(uint *)(lVal_13 + 0x7711) ^ uVal_22;
      *(uint *)(lVal_13 + 0x7715) = *(uint *)(lVal_13 + 0x7715) ^ uVal_24;
      *(uint *)(lVal_13 + 0x7719) = *(uint *)(lVal_13 + 0x7719) ^ uVal_25;
      *(uint *)(lVal_13 + 0x771d) = *(uint *)(lVal_13 + 0x771d) ^ uVal_30;
      *(uint *)(lVal_13 + 0x7721) = *(uint *)(lVal_13 + 0x7721) ^ uVal_22;
      *(uint *)(lVal_13 + 0x7725) = *(uint *)(lVal_13 + 0x7725) ^ uVal_24;
      *(uint *)(lVal_13 + 0x7729) = *(uint *)(lVal_13 + 0x7729) ^ uVal_25;
      *(uint *)(lVal_13 + 0x772d) = *(uint *)(lVal_13 + 0x772d) ^ uVal_30;
      *(uint *)(lVal_13 + 0x7731) = *(uint *)(lVal_13 + 0x7731) ^ uVal_22;
      *(uint *)(lVal_13 + 0x7735) = *(uint *)(lVal_13 + 0x7735) ^ uVal_24;
      *(uint *)(lVal_13 + 0x7739) = *(uint *)(lVal_13 + 0x7739) ^ uVal_25;
      *(uint *)(lVal_13 + 0x773d) = *(uint *)(lVal_13 + 0x773d) ^ 0xc77d4573;
      *(uint8_t *)(lVal_13 + 0x7741) = 0;
    }
    _local_98 = (uint8_t  [16])0x0;
    _local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfce5;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_64 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_64 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_a8 = (uint8_t  [8])pU64_16;
    }
    uStack_90 = uVal_19;
    local_98 = (uint8_t  [8])sz_11;
    func_0x1806aa960(pU64_16,pU64_2,sz_11);
    pU64_16[sz_11] = 0;
    local_118 = _DAT_1806bd36c;
    uStack_110 = (undefined7)_UNK_1806bd374;
    uStack_109 = 0x80;
    uStack_108 = 7;
    uStack_107 = 0x3c;
    uStack_106 = 0xb5d4d0b35d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7760) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7760) = 1;
      func_0x18007d3c0(lVal_13 + 0x7745,&local_118);
      func_0x180673140(&LAB_180211940);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7745);
    func_0x1802171a0(fnPtr_1);
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfcf2;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_63 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_63 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_17;
    }
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_17,fnPtr_1,sz_11);
    pU64_17[sz_11] = 0;
    uVal_27 = CONCAT71((int7)((uint64_t)uVal_27 >> 8),uVal_18);
    in_stack_fffffffffffffc28 = in_stack_fffffffffffffc28 & 0xffffff00;
    pU64_16 = local_f8;
    pU64_17 = local_a8;
    func_0x1801ccd70(local_80,pU64_16,pU64_17,pU64_4,uVal_27,local_218,in_stack_fffffffffffffc28);
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < uStack_90) {
      uVal_19 = uStack_90 + 1;
      lVal_13 = (int64_t)local_a8;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_19 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    local_1a0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_1a0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_1d8);
    }
    pU64_4 = (uint8_t *)((int64_t)local_80 + 0x83);
    uVal_18 = *pU64_4;
    local_c8 = _DAT_1806bd3b3;
    uStack_c4 = _UNK_1806bd3b7;
    uStack_c0 = _UNK_1806bd3bb;
    uStack_bc = _UNK_1806bd3bf;
    uStack_d8 = (uint16_t)_DAT_1806bd3a3;
    uStack_d6 = (uint8_t)((uint)_DAT_1806bd3a3 >> 0x10);
    uStack_d5 = (uint8_t)((uint)_DAT_1806bd3a3 >> 0x18);
    uStack_d4 = (uint16_t)_UNK_1806bd3a7;
    uStack_d2 = (uint16_t)((uint)_UNK_1806bd3a7 >> 0x10);
    uStack_d0 = (uint16_t)_UNK_1806bd3ab;
    uStack_ce = (uint16_t)((uint)_UNK_1806bd3ab >> 0x10);
    uStack_cc = _UNK_1806bd3af;
    local_e8 = (uint16_t)_DAT_1806bd393;
    uStack_e6 = (uint16_t)((uint)_DAT_1806bd393 >> 0x10);
    uStack_e4 = _UNK_1806bd397;
    uStack_e0 = (uint16_t)_UNK_1806bd39b;
    uStack_de = (uint16_t)((uint)_UNK_1806bd39b >> 0x10);
    uStack_dc = (uint16_t)_UNK_1806bd39f;
    uStack_da = (uint8_t)((uint)_UNK_1806bd39f >> 0x10);
    uStack_d9 = (uint8_t)((uint)_UNK_1806bd39f >> 0x18);
    local_f8._8_8_ = _UNK_1806bd38b;
    local_f8._0_8_ = _DAT_1806bd383;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x77a4) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x77a4) = 1;
      func_0x1801b4030(lVal_13 + 0x7761,local_f8);
      func_0x180673140(&LAB_180211970);
    }
    uVal_25 = _UNK_1806b5b0c;
    uVal_24 = _UNK_1806b5b08;
    uVal_22 = _UNK_1806b5b04;
    uVal_30 = _DAT_1806b5b00;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_13 + 0x7761);
    if (*(char *)(lVal_13 + 0x77a1) == '\x01') {
      uVal_20 = *(uint *)(lVal_13 + 0x7765) ^ _UNK_1806b5b04;
      uVal_21 = *(uint *)(lVal_13 + 0x7769) ^ _UNK_1806b5b08;
      uVal_23 = *(uint *)(lVal_13 + 0x776d) ^ _UNK_1806b5b0c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b5b00;
      *(uint *)(lVal_13 + 0x7765) = uVal_20;
      *(uint *)(lVal_13 + 0x7769) = uVal_21;
      *(uint *)(lVal_13 + 0x776d) = uVal_23;
      *(uint *)(lVal_13 + 0x7771) = *(uint *)(lVal_13 + 0x7771) ^ uVal_30;
      *(uint *)(lVal_13 + 0x7775) = *(uint *)(lVal_13 + 0x7775) ^ uVal_22;
      *(uint *)(lVal_13 + 0x7779) = *(uint *)(lVal_13 + 0x7779) ^ uVal_24;
      *(uint *)(lVal_13 + 0x777d) = *(uint *)(lVal_13 + 0x777d) ^ uVal_25;
      *(uint *)(lVal_13 + 0x7781) = *(uint *)(lVal_13 + 0x7781) ^ uVal_30;
      *(uint *)(lVal_13 + 0x7785) = *(uint *)(lVal_13 + 0x7785) ^ uVal_22;
      *(uint *)(lVal_13 + 0x7789) = *(uint *)(lVal_13 + 0x7789) ^ uVal_24;
      *(uint *)(lVal_13 + 0x778d) = *(uint *)(lVal_13 + 0x778d) ^ uVal_25;
      *(uint *)(lVal_13 + 0x7791) = *(uint *)(lVal_13 + 0x7791) ^ uVal_30;
      *(uint *)(lVal_13 + 0x7795) = *(uint *)(lVal_13 + 0x7795) ^ uVal_22;
      *(uint *)(lVal_13 + 0x7799) = *(uint *)(lVal_13 + 0x7799) ^ uVal_24;
      *(uint *)(lVal_13 + 0x779d) = *(uint *)(lVal_13 + 0x779d) ^ uVal_25;
      *(uint8_t *)(lVal_13 + 0x77a1) = 0;
    }
    _local_98 = (uint8_t  [16])0x0;
    _local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfcff;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_66 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_66 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_a8 = (uint8_t  [8])pU64_17;
    }
    uStack_90 = uVal_19;
    local_98 = (uint8_t  [8])sz_11;
    func_0x1806aa960(pU64_17,pU64_2,sz_11);
    pU64_17[sz_11] = 0;
    local_118 = _DAT_1806bd3c3;
    uStack_110 = (undefined7)_UNK_1806bd3cb;
    uStack_109 = (uint8_t)((uint64_t)_UNK_1806bd3cb >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x77b8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x77b8) = 1;
      func_0x18007d150(lVal_13 + 0x77a5,&local_118);
      func_0x180673140(&LAB_1802119b0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_13 + 0x77a5);
    if (*(char *)(lVal_13 + 0x77b5) == '\x01') {
      uVal_30 = *(uint *)(lVal_13 + 0x77a9) ^ _UNK_1806b5b04;
      uVal_22 = *(uint *)(lVal_13 + 0x77ad) ^ _UNK_1806b5b08;
      uVal_24 = *(uint *)(lVal_13 + 0x77b1) ^ _UNK_1806b5b0c;
      *pU64_2 = *pU64_2 ^ _DAT_1806b5b00;
      *(uint *)(lVal_13 + 0x77a9) = uVal_30;
      *(uint *)(lVal_13 + 0x77ad) = uVal_22;
      *(uint *)(lVal_13 + 0x77b1) = uVal_24;
      *(uint8_t *)(lVal_13 + 0x77b5) = 0;
    }
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd0c;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_65 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_65 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_16;
    }
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,pU64_2,sz_11);
    pU64_16[sz_11] = 0;
    pU64_16 = local_1d8;
    uVal_27 = CONCAT71((int7)((uint64_t)uVal_27 >> 8),uVal_18);
    pU64_17 = local_f8;
    pU64_15 = local_a8;
    func_0x1801ccd70(local_80,pU64_17,pU64_15,pU64_4,uVal_27,pU64_16,
                  in_stack_fffffffffffffc28 & 0xffffff00);
    uVal_29 = (uint32_t)((uint64_t)pU64_16 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)uVal_27 >> 0x20);
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < uStack_90) {
      uVal_19 = uStack_90 + 1;
      lVal_13 = (int64_t)local_a8;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_19 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    local_3b8 = &PTR_LAB_1806baeb0;
    local_3b0 = local_80;
    local_380 = &local_3b8;
    uVal_6 = *(uint32_t *)((int64_t)local_80 + 0x84);
    local_e8 = (uint16_t)_DAT_1806bd3e3;
    uStack_e6 = (uint16_t)((uint)_DAT_1806bd3e3 >> 0x10);
    uStack_e4 = _UNK_1806bd3e7;
    uStack_e0 = (uint16_t)_UNK_1806bd3eb;
    uStack_de = (uint16_t)((uint)_UNK_1806bd3eb >> 0x10);
    uStack_dc = (uint16_t)_UNK_1806bd3ef;
    uStack_da = (uint8_t)((uint)_UNK_1806bd3ef >> 0x10);
    local_f8._8_8_ = _UNK_1806bd3db;
    local_f8._0_8_ = _DAT_1806bd3d3;
    uStack_d9 = 0x26;
    uStack_d8 = 0xb4e0;
    uStack_d6 = 0xa3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x77e0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x77e0) = 1;
      func_0x1801b30c0(lVal_13 + 0x77b9,local_f8);
      func_0x180673140(&LAB_1802119d0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x77b9);
    func_0x1802171f0(fnPtr_1);
    _local_98 = (uint8_t  [16])0x0;
    _local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd19;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_67 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_67 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_a8 = (uint8_t  [8])pU64_15;
    }
    uStack_90 = uVal_19;
    local_98 = (uint8_t  [8])sz_11;
    func_0x1806aa960(pU64_15,fnPtr_1,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x77f4) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x77f4) = 1;
      *(uint64_t *)(lVal_13 + 0x77e8) = 0x33cebec3f5cce7de;
      *(uint16_t *)(lVal_13 + 0x77f0) = 0x187;
      func_0x180673140(&LAB_180211a00);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0x77e8);
    if (*(char *)(lVal_13 + 0x77f1) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x47abcda593a3c787;
      *(byte *)(lVal_13 + 0x77f0) = *(byte *)(lVal_13 + 0x77f0) ^ 0x87;
      *(uint8_t *)(lVal_13 + 0x77f1) = 0;
    }
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd26;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_70 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_70 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_17;
    }
    pU64_14 = local_80;
    lVal_13 = (int64_t)local_80 + 0x84;
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_17,pU64_3,sz_11);
    pU64_17[sz_11] = 0;
    uVal_30 = 0x3f000000;
    pU64_16 = local_f8;
    pU64_17 = local_a8;
    func_0x1801cd2e0(pU64_14,pU64_16,pU64_17,lVal_13,CONCAT44(uVal_28,uVal_6),CONCAT44(uVal_29,0xbf000000),
                  0x3f000000,&local_3b8,0);
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < uStack_90) {
      uVal_19 = uStack_90 + 1;
      lVal_13 = (int64_t)local_a8;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_19 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    local_160 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_160 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_198);
    }
    pU64_14 = local_80 + 0x11;
    uVal_18 = *(uint8_t *)pU64_14;
    local_e8 = (uint16_t)_DAT_1806bd406;
    uStack_e6 = (uint16_t)((uint)_DAT_1806bd406 >> 0x10);
    uStack_e4 = _UNK_1806bd40a;
    uStack_e0 = (uint16_t)_UNK_1806bd40e;
    uStack_de = (uint16_t)((uint)_UNK_1806bd40e >> 0x10);
    uStack_dc = (uint16_t)_UNK_1806bd412;
    uStack_da = (uint8_t)((uint)_UNK_1806bd412 >> 0x10);
    uStack_d9 = (uint8_t)((uint)_UNK_1806bd412 >> 0x18);
    local_f8._8_8_ = _UNK_1806bd3fe;
    local_f8._0_8_ = _DAT_1806bd3f6;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7818) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7818) = 1;
      func_0x18008f8e0(lVal_13 + 0x77f5,local_f8);
      func_0x180673140(&LAB_180211a30);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x77f5);
    func_0x180217260(fnPtr_1);
    _local_98 = (uint8_t  [16])0x0;
    _local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd33;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_69 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_69 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_a8 = (uint8_t  [8])pU64_17;
    }
    uStack_90 = uVal_19;
    local_98 = (uint8_t  [8])sz_11;
    func_0x1806aa960(pU64_17,fnPtr_1,sz_11);
    pU64_17[sz_11] = 0;
    local_118 = _DAT_1806bd416;
    uStack_110 = (undefined7)_UNK_1806bd41e;
    uStack_109 = (uint8_t)((uint64_t)_UNK_1806bd41e >> 0x38);
    uStack_108 = 0xa7;
    uStack_107 = 0xf1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x782c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x782c) = 1;
      func_0x18007c170(lVal_13 + 0x7819,&local_118);
      func_0x180673140(&LAB_180211a60);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7819);
    func_0x180217240(fnPtr_1);
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd40;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_68 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_68 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_16;
    }
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,fnPtr_1,sz_11);
    pU64_16[sz_11] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    pU64_16 = local_f8;
    pU64_17 = local_a8;
    func_0x1801ccd70(local_80,pU64_16,pU64_17,pU64_14,uVal_18,local_198,uVal_30);
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < uStack_90) {
      uVal_19 = uStack_90 + 1;
      lVal_13 = (int64_t)local_a8;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_19 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    local_378 = &PTR_LAB_1806ba910;
    local_370 = local_80;
    local_340 = &local_378;
    local_2b8 = *(uint64_t *)((int64_t)local_80 + 0x8c);
    uStack_2b0 = *(uint64_t *)((int64_t)local_80 + 0x94);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7830) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7830) = 1;
      *(uint16_t *)(lVal_13 + 0x782d) = 0x10d;
      func_0x180673140(&LAB_180211a90);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_13 + 0x782d);
    if (*(char *)(lVal_13 + 0x782e) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0xd;
      *(uint8_t *)(lVal_13 + 0x782e) = 0;
    }
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU8_5);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd4d;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_72 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_72 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_16;
    }
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,pU8_5,sz_11);
    pU64_16[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7844) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7844) = 1;
      *(uint64_t *)(lVal_13 + 0x7838) = 0x90e10655131b659;
      *(uint32_t *)(lVal_13 + 0x7840) = 0x149a162;
      func_0x180673140(&LAB_180211ab0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0x7838);
    if (*(char *)(lVal_13 + 0x7843) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x656173452549d30d;
      *(uint *)(lVal_13 + 0x7840) =
           (*(uint *)(lVal_13 + 0x7840) & 0xffff | (uint)*(byte *)(lVal_13 + 0x7842) << 0x10) ^
           SUB164(_DAT_1806b5cf0,0);
    }
    _local_98 = (uint8_t  [16])0x0;
    _local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd5a;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_71 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_71 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_a8 = (uint8_t  [8])pU64_17;
    }
    pU64_14 = local_80;
    lVal_13 = (int64_t)local_80 + 0x8c;
    local_98 = (uint8_t  [8])sz_11;
    uStack_90 = uVal_19;
    func_0x1806aa960(pU64_17,pU64_3,sz_11);
    pU64_17[sz_11] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    pU64_16 = local_a8;
    pU64_17 = local_f8;
    func_0x1801cd600(pU64_14,pU64_16,pU64_17,lVal_13,&local_2b8,&local_378,uVal_30);
    if (0xf < uStack_90) {
      uVal_19 = uStack_90 + 1;
      lVal_13 = (int64_t)local_a8;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_19 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_120 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_120 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_158);
    }
    pU64_4 = (uint8_t *)((int64_t)local_80 + 0x9c);
    uVal_18 = *pU64_4;
    local_e8 = (uint16_t)_DAT_1806bd438;
    uStack_e6 = (uint16_t)((uint)_DAT_1806bd438 >> 0x10);
    uStack_e4 = _UNK_1806bd43c;
    uStack_e0 = (uint16_t)_UNK_1806bd440;
    uStack_de = (uint16_t)((uint)_UNK_1806bd440 >> 0x10);
    uStack_dc = (uint16_t)_UNK_1806bd444;
    uStack_da = (uint8_t)((uint)_UNK_1806bd444 >> 0x10);
    uStack_d9 = (uint8_t)((uint)_UNK_1806bd444 >> 0x18);
    local_f8._8_8_ = _UNK_1806bd430;
    local_f8._0_8_ = _DAT_1806bd428;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7868) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7868) = 1;
      func_0x18008f8e0(lVal_13 + 0x7845,local_f8);
      func_0x180673140(&LAB_180211ae0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7845);
    func_0x180217290(fnPtr_1);
    _local_98 = (uint8_t  [16])0x0;
    _local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd67;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6a = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_6a = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_a8 = (uint8_t  [8])pU64_16;
    }
    uStack_90 = uVal_19;
    local_98 = (uint8_t  [8])sz_11;
    func_0x1806aa960(pU64_16,fnPtr_1,sz_11);
    pU64_16[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7880) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x7880) = 1;
      *(uint8_t *)(lVal_13 + 0x787e) = 1;
      *(uint64_t *)(lVal_13 + 0x7870) = 0x88acdce0c3f51c8b;
      *(uint32_t *)(lVal_13 + 0x7878) = 0xcfa01cb7;
      *(uint16_t *)(lVal_13 + 0x787c) = 0xbfe5;
      func_0x180673140(&LAB_180211b10);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0x7870);
    if (*(char *)(lVal_13 + 0x787e) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xefc7bf81a1d573c5;
      *(uint *)(lVal_13 + 0x7878) = *(uint *)(lVal_13 + 0x7878) ^ 0xa1d573c5;
      *(byte *)(lVal_13 + 0x787c) = *(byte *)(lVal_13 + 0x787c) ^ 0x81;
      *(byte *)(lVal_13 + 0x787d) = *(byte *)(lVal_13 + 0x787d) ^ 0xbf;
      *(uint8_t *)(lVal_13 + 0x787e) = 0;
    }
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd74;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_73 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_73 = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_17;
    }
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_17,pU64_3,sz_11);
    pU64_17[sz_11] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    pU64_16 = local_f8;
    pU64_17 = local_a8;
    func_0x1801ccd70(local_80,pU64_16,pU64_17,pU64_4,uVal_18,local_158,uVal_30);
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < uStack_90) {
      uVal_19 = uStack_90 + 1;
      lVal_13 = (int64_t)local_a8;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_19 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    local_338 = &PTR_LAB_1806be050;
    local_330 = local_80;
    local_300 = &local_338;
    uVal_18 = *(uint8_t *)((int64_t)local_80 + 0x9d);
    local_e8 = (uint16_t)_DAT_1806bd458;
    uStack_e6 = (uint16_t)((uint)_DAT_1806bd458 >> 0x10);
    uStack_e4 = _UNK_1806bd45c;
    uStack_e0 = (uint16_t)_UNK_1806bd460;
    uStack_de = (uint16_t)((uint)_UNK_1806bd460 >> 0x10);
    uStack_dc = (uint16_t)_UNK_1806bd464;
    local_f8._8_8_ = _UNK_1806bd450;
    local_f8._0_8_ = _DAT_1806bd448;
    uStack_da = 0x91;
    uStack_d9 = 0xa9;
    uStack_d8 = 0xde56;
    uStack_d6 = 0xc5;
    uStack_d5 = 0x2a;
    uStack_d4 = 0x2b4b;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x78a8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x78a8) = 1;
      func_0x180086e20(lVal_13 + 0x7881,local_f8);
      func_0x180673140(&LAB_180211b40);
    }
    uVal_20 = _UNK_1806b2cbc;
    uVal_25 = _UNK_1806b2cb8;
    uVal_24 = _UNK_1806b2cb4;
    uVal_22 = _DAT_1806b2cb0;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_13 + 0x7881);
    if (*(char *)(lVal_13 + 0x78a7) == '\x01') {
      uVal_21 = *(uint *)(lVal_13 + 0x7885) ^ _UNK_1806b2cb4;
      uVal_23 = *(uint *)(lVal_13 + 0x7889) ^ _UNK_1806b2cb8;
      uVal_26 = *(uint *)(lVal_13 + 0x788d) ^ _UNK_1806b2cbc;
      *pU64_2 = *pU64_2 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_13 + 0x7885) = uVal_21;
      *(uint *)(lVal_13 + 0x7889) = uVal_23;
      *(uint *)(lVal_13 + 0x788d) = uVal_26;
      *(uint *)(lVal_13 + 0x7891) = *(uint *)(lVal_13 + 0x7891) ^ uVal_22;
      *(uint *)(lVal_13 + 0x7895) = *(uint *)(lVal_13 + 0x7895) ^ uVal_24;
      *(uint *)(lVal_13 + 0x7899) = *(uint *)(lVal_13 + 0x7899) ^ uVal_25;
      *(uint *)(lVal_13 + 0x789d) = *(uint *)(lVal_13 + 0x789d) ^ uVal_20;
      *(uint *)(lVal_13 + 0x78a1) = *(uint *)(lVal_13 + 0x78a1) ^ 0x45a9b135;
      *(byte *)(lVal_13 + 0x78a5) = *(byte *)(lVal_13 + 0x78a5) ^ 0x39;
      *(byte *)(lVal_13 + 0x78a6) = *(byte *)(lVal_13 + 0x78a6) ^ 0x2b;
      *(uint8_t *)(lVal_13 + 0x78a7) = 0;
    }
    _local_98 = (uint8_t  [16])0x0;
    _local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd81;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6c = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_6c = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_a8 = (uint8_t  [8])pU64_17;
    }
    uStack_90 = uVal_19;
    local_98 = (uint8_t  [8])sz_11;
    func_0x1806aa960(pU64_17,pU64_2,sz_11);
    pU64_17[sz_11] = 0;
    local_118 = _DAT_1806bd46e;
    uStack_110 = (undefined7)_UNK_1806bd476;
    uStack_109 = (uint8_t)((uint64_t)_UNK_1806bd476 >> 0x38);
    uStack_108 = 0x51;
    uStack_107 = 0x91;
    uStack_106 = 0x8744552aca;
    uStack_101 = 0x89;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x78c4) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x78c4) = 1;
      func_0x18007d9e0(lVal_13 + 0x78a9,&local_118);
      func_0x180673140(&LAB_180211b70);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x78a9);
    func_0x180214ec0(fnPtr_1);
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801dfd8e;
    uVal_19 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6b = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_6b = 1;
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_f8._0_8_ = pU64_16;
    }
    pU64_14 = local_80;
    lVal_13 = (int64_t)local_80 + 0x9d;
    local_e8 = (uint16_t)sz_11;
    uStack_e6 = (uint16_t)(sz_11 >> 0x10);
    uStack_e4 = (uint32_t)(sz_11 >> 0x20);
    uStack_e0 = (uint16_t)uVal_19;
    uStack_de = (uint16_t)(uVal_19 >> 0x10);
    uStack_dc = (uint16_t)(uVal_19 >> 0x20);
    uStack_da = (uint8_t)(uVal_19 >> 0x30);
    uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
    func_0x1806aa960(pU64_16,fnPtr_1,sz_11);
    pU64_16[sz_11] = 0;
    uVal_30 = uVal_30 & 0xffffff00;
    pU64_16 = local_f8;
    pU64_17 = local_a8;
    func_0x1801ccd70(pU64_14,pU64_16,pU64_17,lVal_13,uVal_18,&local_338,uVal_30);
    uVal_19 = CONCAT17(uStack_d9,
                      CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
    if (0xf < uVal_19) {
      uVal_12 = uVal_19 + 1;
      lVal_13 = local_f8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_12 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < uStack_90) {
      uVal_19 = uStack_90 + 1;
      lVal_13 = (int64_t)local_a8;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
        uVal_19 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    local_2f8 = &PTR_LAB_1806be080;
    local_2f0 = local_80;
    local_2c0 = &local_2f8;
    local_2a8 = local_80[0x14];
    uStack_2a0 = local_80[0x15];
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x78c8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x78c8) = 1;
      *(uint16_t *)(lVal_13 + 0x78c5) = 0x145;
      func_0x180673140(&LAB_180211ba0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_5 = (byte *)(lVal_13 + 0x78c5);
    if (*(char *)(lVal_13 + 0x78c6) == '\x01') {
      *pU8_5 = *pU8_5 ^ 0x45;
      *(uint8_t *)(lVal_13 + 0x78c6) = 0;
    }
    local_e8 = 0;
    uStack_e6 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d9 = 0;
    local_f8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU8_5);
    if (-1 < (int64_t)sz_11) {
      uVal_19 = 0xf;
      if (0xf < sz_11) {
        uVal_12 = sz_11 | 0xf;
        uVal_19 = 0x16;
        if (0x16 < uVal_12) {
          uVal_19 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          local_74 = 1;
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
        }
        else {
          local_74 = 1;
          lVal_13 = func_0x180672de0(uVal_19 + 0x28);
          pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_16 + -8) = lVal_13;
        }
        local_f8._0_8_ = pU64_16;
      }
      local_e8 = (uint16_t)sz_11;
      uStack_e6 = (uint16_t)(sz_11 >> 0x10);
      uStack_e4 = (uint32_t)(sz_11 >> 0x20);
      uStack_e0 = (uint16_t)uVal_19;
      uStack_de = (uint16_t)(uVal_19 >> 0x10);
      uStack_dc = (uint16_t)(uVal_19 >> 0x20);
      uStack_da = (uint8_t)(uVal_19 >> 0x30);
      uStack_d9 = (uint8_t)(uVal_19 >> 0x38);
      func_0x1806aa960(pU64_16,pU8_5,sz_11);
      pU64_16[sz_11] = 0;
      local_118 = _DAT_1806ba5f1;
      uStack_110 = (undefined7)_UNK_1806ba5f9;
      uStack_109 = (uint8_t)((uint64_t)_UNK_1806ba5f9 >> 0x38);
      uStack_108 = 0x45;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x78dc) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0x78dc) = 1;
        func_0x18007d2b0(lVal_13 + 0x78c9,&local_118);
        func_0x180673140(&LAB_180211bc0);
      }
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint *)(lVal_13 + 0x78c9);
      if (*(char *)(lVal_13 + 0x78da) == '\x01') {
        uVal_22 = *(uint *)(lVal_13 + 0x78cd) ^ _UNK_1806b6494;
        uVal_24 = *(uint *)(lVal_13 + 0x78d1) ^ _UNK_1806b6498;
        uVal_25 = *(uint *)(lVal_13 + 0x78d5) ^ _UNK_1806b649c;
        *pU64_2 = *pU64_2 ^ _DAT_1806b6490;
        *(uint *)(lVal_13 + 0x78cd) = uVal_22;
        *(uint *)(lVal_13 + 0x78d1) = uVal_24;
        *(uint *)(lVal_13 + 0x78d5) = uVal_25;
        *(byte *)(lVal_13 + 0x78d9) = *(byte *)(lVal_13 + 0x78d9) ^ 0x45;
        *(uint8_t *)(lVal_13 + 0x78da) = 0;
      }
      _local_a8 = (uint8_t  [16])0x0;
      sz_11 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_11) {
        uVal_19 = 0xf;
        if (0xf < sz_11) {
          uVal_12 = sz_11 | 0xf;
          uVal_19 = 0x16;
          if (0x16 < uVal_12) {
            uVal_19 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            local_6d = 1;
            pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
          }
          else {
            local_6d = 1;
            lVal_13 = func_0x180672de0(uVal_19 + 0x28);
            pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_17 + -8) = lVal_13;
          }
          local_a8 = (uint8_t  [8])pU64_17;
        }
        pU64_10 = local_80;
        pU64_14 = local_80 + 0x14;
        local_98 = (uint8_t  [8])sz_11;
        uStack_90 = uVal_19;
        func_0x1806aa960(pU64_17,pU64_2,sz_11);
        pU64_17[sz_11] = 0;
        func_0x1801cd600(pU64_10,local_a8,local_f8,pU64_14,&local_2a8,&local_2f8,uVal_30 & 0xffffff00);
        if (0xf < uStack_90) {
          uVal_19 = uStack_90 + 1;
          lVal_13 = (int64_t)local_a8;
          if (0xfff < uVal_19) {
            lVal_13 = *(int64_t *)((int64_t)local_a8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_13)) goto LAB_1801dfcaa;
            uVal_19 = uStack_90 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_19);
        }
        uVal_19 = CONCAT17(uStack_d9,
                          CONCAT16(uStack_da,CONCAT24(uStack_dc,CONCAT22(uStack_de,uStack_e0))));
        if (0xf < uVal_19) {
          uVal_12 = uVal_19 + 1;
          lVal_13 = local_f8._0_8_;
          if (0xfff < uVal_12) {
            lVal_13 = *(int64_t *)(local_f8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_13)) {
LAB_1801dfcaa:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_12 = uVal_19 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_12);
        }
        return local_80;
      }
      goto LAB_1801dfda8;
    }
  }
  local_74 = 1;
  func_0x18007ba70();
LAB_1801dfda8:
  local_6d = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_7)();
  return pU64_14;
}

// Unwind@1801dfdc0
void Unwind_1801dfdc0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@1801dfe30
void Unwind_1801dfe30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x76b0) = 0;
  *(uint8_t *)(param_2 + 0x3a7) = 1;
  return;
}

// Unwind@1801dfe90
void Unwind_1801dfe90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1e8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b0));
    *(uint64_t *)(param_2 + 0x1e8) = 0;
  }
  return;
}

// Unwind@1801dff00
void Unwind_1801dff00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x76e8) = 0;
  *(uint8_t *)(param_2 + 0x3a6) = 1;
  return;
}

// Unwind@1801dff60
void Unwind_1801dff60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x228);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@1801dffd0
void Unwind_1801dffd0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7744) = 0;
  *(uint8_t *)(param_2 + 0x3a4) = 1;
  return;
}

// Unwind@1801e0030
void Unwind_1801e0030(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x268);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x230));
    *(uint64_t *)(param_2 + 0x268) = 0;
  }
  return;
}

// Unwind@1801e00a0
void Unwind_1801e00a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x77a4) = 0;
  *(uint8_t *)(param_2 + 0x3a2) = 1;
  return;
}

// Unwind@1801e0100
void Unwind_1801e0100(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x270));
    *(uint64_t *)(param_2 + 0x2a8) = 0;
  }
  return;
}

// Unwind@1801e0170
void Unwind_1801e0170(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7818) = 0;
  *(uint8_t *)(param_2 + 0x39f) = 1;
  return;
}

// Unwind@1801e01d0
void Unwind_1801e01d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2e8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2b0));
    *(uint64_t *)(param_2 + 0x2e8) = 0;
  }
  return;
}

// Unwind@1801e0240
void Unwind_1801e0240(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7868) = 0;
  *(uint8_t *)(param_2 + 0x39e) = 1;
  return;
}

// Unwind@1801e02a0
void Unwind_1801e02a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  return;
}

// Unwind@1801e02f0
void Unwind_1801e02f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x39a) = 0;
  return;
}

// Unwind@1801e0340
void Unwind_1801e0340(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x39a);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3a7) = uVal_1;
  return;
}

// Unwind@1801e0390
void Unwind_1801e0390(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1a8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@1801e0400
void Unwind_1801e0400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x399) = 0;
  return;
}

// Unwind@1801e0450
void Unwind_1801e0450(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x399);
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x3a6) = uVal_1;
  return;
}

// Unwind@1801e04a0
void Unwind_1801e04a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1e8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b0));
    *(uint64_t *)(param_2 + 0x1e8) = 0;
  }
  return;
}

// Unwind@1801e0510
void Unwind_1801e0510(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x3a5) = 0;
  return;
}

// Unwind@1801e0560
void Unwind_1801e0560(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a5);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3a4) = uVal_1;
  return;
}

// Unwind@1801e05b0
void Unwind_1801e05b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x228), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f0));
    *(uint64_t *)(param_2 + 0x228) = 0;
  }
  return;
}

// Unwind@1801e0620
void Unwind_1801e0620(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x3a3) = 0;
  return;
}

// Unwind@1801e0670
void Unwind_1801e0670(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a3);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3a2) = uVal_1;
  return;
}

// Unwind@1801e06c0
void Unwind_1801e06c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x268), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x230));
    *(uint64_t *)(param_2 + 0x268) = 0;
  }
  return;
}

// Unwind@1801e0730
void Unwind_1801e0730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x398) = 0;
  return;
}

// Unwind@1801e0780
void Unwind_1801e0780(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x398);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x3a1) = uVal_1;
  return;
}

// Unwind@1801e07d0
void Unwind_1801e07d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a1) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1801e0840
void Unwind_1801e0840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x3a0) = 0;
  return;
}

// Unwind@1801e0890
void Unwind_1801e0890(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x3a0);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x39f) = uVal_1;
  return;
}

// Unwind@1801e08e0
void Unwind_1801e08e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x39f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2a8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x270));
    *(uint64_t *)(param_2 + 0x2a8) = 0;
  }
  return;
}

// Unwind@1801e0950
void Unwind_1801e0950(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x397) = 0;
  return;
}

// Unwind@1801e09a0
void Unwind_1801e09a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x397);
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x396) = uVal_1;
  return;
}

// Unwind@1801e09f0
void Unwind_1801e09f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x396) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1801e0a60
void Unwind_1801e0a60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x395) = 0;
  return;
}

// Unwind@1801e0ab0
void Unwind_1801e0ab0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x395);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x39e) = uVal_1;
  return;
}

// Unwind@1801e0b00
void Unwind_1801e0b00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x39e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2e8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2b0));
    *(uint64_t *)(param_2 + 0x2e8) = 0;
  }
  return;
}

// Unwind@1801e0b70
void Unwind_1801e0b70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x39d) = 0;
  return;
}

// Unwind@1801e0bc0
void Unwind_1801e0bc0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x39d);
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x39c) = uVal_1;
  return;
}

// Unwind@1801e0c10
void Unwind_1801e0c10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x39c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1801e0c80
void Unwind_1801e0c80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x39b) = 0;
  return;
}

// Unwind@1801e0cd0
void Unwind_1801e0cd0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x39b);
  func_0x180001e70(param_2 + 0x310);
  *(uint8_t *)(param_2 + 0x394) = uVal_1;
  return;
}

// Unwind@1801e0d20
void Unwind_1801e0d20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x394) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1801e0d90
void Unwind_1801e0d90(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x388));
  return;
}

// Unwind@1801e0de0
void Unwind_1801e0de0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7684) = 0;
  return;
}

// Unwind@1801e0e40
void Unwind_1801e0e40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7760) = 0;
  *(uint8_t *)(param_2 + 0x3a5) = 1;
  return;
}

// Unwind@1801e0ea0
void Unwind_1801e0ea0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x77b8) = 0;
  *(uint8_t *)(param_2 + 0x3a3) = 1;
  return;
}

// Unwind@1801e0f00
void Unwind_1801e0f00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x77e0) = 0;
  *(uint8_t *)(param_2 + 0x3a1) = 1;
  return;
}

// Unwind@1801e0f60
void Unwind_1801e0f60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x782c) = 0;
  *(uint8_t *)(param_2 + 0x3a0) = 1;
  return;
}

// Unwind@1801e0fc0
void Unwind_1801e0fc0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x78a8) = 0;
  *(uint8_t *)(param_2 + 0x39c) = 1;
  return;
}

// Unwind@1801e1020
void Unwind_1801e1020(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x78c4) = 0;
  *(uint8_t *)(param_2 + 0x39d) = 1;
  return;
}

// Unwind@1801e1080
void Unwind_1801e1080(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x78dc) = 0;
  *(uint8_t *)(param_2 + 0x39b) = 1;
  return;
}

// Unwind@1801e1390
void Unwind_1801e1390(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7900) = 0;
  return;
}

// Unwind@1801e17e0
void Unwind_1801e17e0(void)
{
  func_0x180672f60(&DAT_18083f9c0);
  return;
}

// Unwind@1801e1810
void Unwind_1801e1810(void)
{
  func_0x180672f60(&DAT_18083f9d0);
  return;
}

// Unwind@1801e1840
void Unwind_1801e1840(void)
{
  func_0x180672f60(&DAT_18083f9e0);
  return;
}

// Unwind@1801e1870
void Unwind_1801e1870(void)
{
  func_0x180672f60(&DAT_18083f9f0);
  return;
}

// Unwind@1801e18a0
void Unwind_1801e18a0(void)
{
  func_0x180672f60(&DAT_18083fa00);
  return;
}

// Unwind@1801e18d0
void Unwind_1801e18d0(void)
{
  func_0x180672f60(&DAT_18083fa10);
  return;
}

// func_0x1801e1900
int64_t func_0x1801e1900(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x6bea2ab06291c2c) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x12698a3e8e552c8a) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801e19a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x12698a3e8e552c8a);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801e19ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x12698a3e8e552c8a);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff9c3ca6b7U) + -7;
  }
LAB_1801e19a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801e19ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801e19e0
int64_t func_0x1801e19e0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xb892124d0959276) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x5ce56d6608294082) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801e1a84;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x5ce56d6608294082);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801e1aaa;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x5ce56d6608294082);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x54cc2de4U) + -9;
  }
LAB_1801e1a84:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801e1aaa:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801e1ac0
int64_t func_0x1801e1ac0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xfad9f23300c7424) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x594789ecda94f761) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801e1b64;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x594789ecda94f761);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801e1b8a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x594789ecda94f761);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff83d37e8dU) + -0x1c;
  }
LAB_1801e1b64:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801e1b8a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801e1ba0
int64_t func_0x1801e1ba0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x46203d88aeff101) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x4986b0776b204209) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801e1c44;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x4986b0776b204209);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801e1c6a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x4986b0776b204209);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x22a6f27eU) + -0x1d;
  }
LAB_1801e1c44:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801e1c6a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801e1c80
int64_t func_0x1801e1c80(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xbb7aa8a1cd8b85b) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x43730df3348753de) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801e1d24;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x43730df3348753de);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801e1d4a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x43730df3348753de);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x77f45e2dU) + -0xf;
  }
LAB_1801e1d24:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801e1d4a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801e1d60
int64_t func_0x1801e1d60(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x70305cea3b0e22a) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x43730cf33487522b) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801e1e04;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x43730cf33487522b);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801e1e2a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x43730cf33487522b);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x77f45ed8U) + -0xf;
  }
LAB_1801e1e04:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801e1e2a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801e20d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801e20d0(uint64_t *param_1)
{
  uint *_Str;
  uint64_t *_Str_00;
  uint uVal_1;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  size_t sz_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint8_t *pU64_9;
  int64_t *unaff_R12;
  uint64_t uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint16_t uStack_5c;
  uint16_t uStack_5a;
  undefined6 uStack_58;
  uint64_t *local_50;
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_68 = _DAT_1806bd4c7;
  uStack_64 = _UNK_1806bd4cb;
  uStack_60 = _UNK_1806bd4cf;
  uStack_5c = (uint16_t)_UNK_1806bd4d3;
  local_78 = _DAT_1806bd4b7;
  uStack_74 = _UNK_1806bd4bb;
  uStack_70 = _UNK_1806bd4bf;
  uStack_6c = _UNK_1806bd4c3;
  local_88 = CONCAT44(_UNK_1806bd4ab,_DAT_1806bd4a7);
  uStack_80 = CONCAT44(_UNK_1806bd4b3,_UNK_1806bd4af);
  uStack_90 = _UNK_1806bd49f;
  local_98 = (uint8_t  [8])_DAT_1806bd497;
  uStack_5a = 0xf70c;
  uStack_58 = 0xd75cb6243b5b;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7948) == '\0') {
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_7 + 0x7948) = 1;
    func_0x180210ce0(lVal_7 + 0x7901,local_98);
    func_0x180673140(&LAB_180211c40);
  }
  uVal_4 = _UNK_1806b2d6c;
  uVal_3 = _UNK_1806b2d68;
  uVal_2 = _UNK_1806b2d64;
  uVal_1 = _DAT_1806b2d60;
  lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint *)(lVal_7 + 0x7901);
  if (*(char *)(lVal_7 + 0x7947) == '\x01') {
    uVal_11 = *(uint *)(lVal_7 + 0x7905) ^ _UNK_1806b2d64;
    uVal_12 = *(uint *)(lVal_7 + 0x7909) ^ _UNK_1806b2d68;
    uVal_13 = *(uint *)(lVal_7 + 0x790d) ^ _UNK_1806b2d6c;
    *_Str = *_Str ^ _DAT_1806b2d60;
    *(uint *)(lVal_7 + 0x7905) = uVal_11;
    *(uint *)(lVal_7 + 0x7909) = uVal_12;
    *(uint *)(lVal_7 + 0x790d) = uVal_13;
    *(uint *)(lVal_7 + 0x7911) = *(uint *)(lVal_7 + 0x7911) ^ uVal_1;
    *(uint *)(lVal_7 + 0x7915) = *(uint *)(lVal_7 + 0x7915) ^ uVal_2;
    *(uint *)(lVal_7 + 0x7919) = *(uint *)(lVal_7 + 0x7919) ^ uVal_3;
    *(uint *)(lVal_7 + 0x791d) = *(uint *)(lVal_7 + 0x791d) ^ uVal_4;
    *(uint *)(lVal_7 + 0x7921) = *(uint *)(lVal_7 + 0x7921) ^ uVal_1;
    *(uint *)(lVal_7 + 0x7925) = *(uint *)(lVal_7 + 0x7925) ^ uVal_2;
    *(uint *)(lVal_7 + 0x7929) = *(uint *)(lVal_7 + 0x7929) ^ uVal_3;
    *(uint *)(lVal_7 + 0x792d) = *(uint *)(lVal_7 + 0x792d) ^ uVal_4;
    *(uint *)(lVal_7 + 0x7931) = *(uint *)(lVal_7 + 0x7931) ^ uVal_1;
    *(uint *)(lVal_7 + 0x7935) = *(uint *)(lVal_7 + 0x7935) ^ uVal_2;
    *(uint *)(lVal_7 + 0x7939) = *(uint *)(lVal_7 + 0x7939) ^ uVal_3;
    *(uint *)(lVal_7 + 0x793d) = *(uint *)(lVal_7 + 0x793d) ^ uVal_4;
    *(uint *)(lVal_7 + 0x7941) = *(uint *)(lVal_7 + 0x7941) ^ 0xd54d5575;
    *(byte *)(lVal_7 + 0x7945) = *(byte *)(lVal_7 + 0x7945) ^ 0x37;
    *(byte *)(lVal_7 + 0x7946) = *(byte *)(lVal_7 + 0x7946) ^ 0xd7;
    *(uint8_t *)(lVal_7 + 0x7947) = 0;
  }
  _local_98 = (uint8_t  [16])0x0;
  sz_5 = strlen((char *)_Str);
  if ((int64_t)sz_5 < 0) {
    func_0x18007ba70();
  }
  else {
    if (sz_5 < 0x10) {
      pU64_9 = local_98;
      uVal_10 = 0xf;
    }
    else {
      uVal_6 = sz_5 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_6) {
        uVal_10 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_10 + 0x28);
        pU64_9 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_9 + -8) = lVal_7;
      }
      local_98 = (uint8_t  [8])pU64_9;
    }
    local_88 = sz_5;
    uStack_80 = uVal_10;
    func_0x1806aa960(pU64_9,_Str,sz_5);
    pU64_9[sz_5] = 0;
    pU64_9 = local_98;
    func_0x1801c2ba0(param_1,0,3,pU64_9);
    if (0xf < uStack_80) {
      uVal_10 = uStack_80 + 1;
      lVal_7 = (int64_t)local_98;
      if (0xfff < uVal_10) {
        lVal_7 = *(int64_t *)((int64_t)local_98 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_7)) goto LAB_1801e24e1;
        uVal_10 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_10);
    }
    *param_1 = &PTR_LAB_1806bba00;
    *(uint8_t (*)[16])(param_1 + 0x10) = (uint8_t  [16])0x0;
    param_1[0x12] = 0;
    param_1[0x13] = 0xf;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7958) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x7958) = 1;
      *(uint64_t *)(lVal_7 + 0x7950) = 0x1b5d7d4ac1e2c3d;
      func_0x180673140(&LAB_180211c80);
    }
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_7 + 0x7950);
    if (*(char *)(lVal_7 + 0x7957) == '\x01') {
      *_Str_00 = (CONCAT44((uint)*(ushort *)(lVal_7 + 0x7955) << 8,*(uint32_t *)_Str_00) |
                 (uint64_t)*(byte *)(lVal_7 + 0x7954) << 0x20) ^ SUB168(_DAT_1806ae200,0);
    }
    unaff_R12 = param_1 + 0x10;
    _local_98 = (uint8_t  [16])0x0;
    sz_5 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_5) {
      uVal_10 = 0xf;
      if (0xf < sz_5) {
        uVal_6 = sz_5 | 0xf;
        uVal_10 = 0x16;
        if (0x16 < uVal_6) {
          uVal_10 = uVal_6;
        }
        local_48 = unaff_R12;
        if (uVal_6 < 0xfff) {
          local_50 = param_1;
          pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
        }
        else {
          local_50 = param_1;
          lVal_7 = func_0x180672de0(uVal_10 + 0x28);
          pU64_9 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_9 + -8) = lVal_7;
        }
        local_98 = (uint8_t  [8])pU64_9;
        unaff_R12 = local_48;
        param_1 = local_50;
      }
      local_88 = sz_5;
      uStack_80 = uVal_10;
      func_0x1806aa960(pU64_9,_Str_00,sz_5);
      pU64_9[sz_5] = 0;
      uVal_10 = param_1[0x13];
      if (0xf < uVal_10) {
        lVal_7 = *unaff_R12;
        uVal_6 = uVal_10 + 1;
        lVal_8 = lVal_7;
        if (0xfff < uVal_6) {
          lVal_8 = *(int64_t *)(lVal_7 + -8);
          if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_8)) goto LAB_1801e24e1;
          uVal_6 = uVal_10 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_8,uVal_6);
      }
      *(uint32_t *)(unaff_R12 + 2) = (uint32_t)local_88;
      *(uint32_t *)((int64_t)unaff_R12 + 0x14) = local_88._4_4_;
      *(uint32_t *)(unaff_R12 + 3) = (uint32_t)uStack_80;
      *(uint32_t *)((int64_t)unaff_R12 + 0x1c) = uStack_80._4_4_;
      *(uint32_t *)unaff_R12 = local_98._0_4_;
      *(uint32_t *)((int64_t)unaff_R12 + 4) = local_98._4_4_;
      *(uint32_t *)(unaff_R12 + 1) = (uint32_t)uStack_90;
      *(uint32_t *)((int64_t)unaff_R12 + 0xc) = uStack_90._4_4_;
      return param_1;
    }
  }
  local_50 = param_1;
  local_48 = unaff_R12;
  func_0x18007ba70();
LAB_1801e24e1:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801e24f0
void Unwind_1801e24f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801e2530
void Unwind_1801e2530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x70));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x68));
  return;
}

// Unwind@1801e2570
void Unwind_1801e2570(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7948) = 0;
  return;
}

// func_0x1801e25c0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
void func_0x1801e25c0(int64_t param_1,int64_t **param_2)
{
  int *pInt_1;
  uint64_t *pU64_2;
  int64_t *pLong_3;
  uint64_t *pU64_4;
  func_ptr_t fnPtr_5;
  uint32_t uVal_6;
  int64_t lVal_7;
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  int iVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  int64_t *pLong_13;
  uint64_t uVal_14;
  size_t sz_15;
  uint64_t *pU64_16;
  uint *pU64_17;
  int64_t *pLong_18;
  int64_t *pLong_19;
  bool bFlag_20;
  int64_t **ptr2_Long_21;
  uint8_t *pU64_22;
  uint64_t uVal_23;
  uint8_t *pU64_24;
  int64_t **ptr2_Long_25;
  uint *pU64_26;
  uint8_t local_120 [8];
  uint8_t local_118;
  undefined7 uStack_117;
  uint64_t local_108;
  uint64_t local_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint8_t local_d8 [16];
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [4];
  uint32_t uStack_94;
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint8_t local_78 [16];
  int64_t *local_68;
  uint64_t local_60;
  int64_t *local_58;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVal_11 = func_0x180129ea0(DAT_180840a58);
  if (lVal_11 == 0) {
    return;
  }
  uVal_12 = func_0x180129ea0(DAT_180840a58);
  lVal_11 = func_0x180109920(uVal_12);
  if (*(int64_t *)(lVal_11 + 0x10) == 0) {
    return;
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7970) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x7970) = 1;
    *(uint64_t *)(lVal_11 + 0x7960) = 0xbae0b0de6aba825d;
    *(uint32_t *)(lVal_11 + 0x7968) = 0x77aa865f;
    *(uint16_t *)(lVal_11 + 0x796c) = 0x1bb;
    func_0x180673140(&LAB_180211cb0);
  }
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_2 = (uint64_t *)(lVal_11 + 0x7960);
  if (*(char *)(lVal_11 + 0x796d) == '\x01') {
    *pU64_2 = *pU64_2 ^ 0xd993efbb19cfe32d;
    *(uint *)(lVal_11 + 0x7968) = *(uint *)(lVal_11 + 0x7968) ^ 0x19cfe32d;
    *(byte *)(lVal_11 + 0x796c) = *(byte *)(lVal_11 + 0x796c) ^ 0xbb;
    *(uint8_t *)(lVal_11 + 0x796d) = 0;
  }
  local_78 = ZEXT816(0);
  pLong_13 = (int64_t *)strlen((char *)pU64_2);
  if (-1 < (int64_t)pLong_13) {
    uVal_23 = 0xf;
    pU64_22 = local_78;
    if (&DAT_0000000f < pLong_13) {
      uVal_14 = (uint64_t)pLong_13 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_14) {
        uVal_23 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_22 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_23 + 0x28);
        pU64_22 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -8) = lVal_11;
      }
      local_78._0_8_ = pU64_22;
    }
    local_68 = pLong_13;
    local_60 = uVal_23;
    func_0x1806aa960(pU64_22,pU64_2,pLong_13);
    pU64_22[(int64_t)pLong_13] = 0;
    uVal_23 = local_60;
    pU64_22 = local_78;
    if (0xf < local_60) {
      pU64_22 = (uint8_t *)local_78._0_8_;
    }
    if (DAT_18083cd20 < 0x10) {
      pU64_16 = &DAT_18083cd08;
      if (DAT_18083cd18 == local_68) goto LAB_1801e274d;
LAB_1801e2769:
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7988) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x7988) = 1;
        *(uint64_t *)(lVal_11 + 0x7978) = 0xbae0b0de6aba825d;
        *(uint32_t *)(lVal_11 + 0x7980) = 0x77aa865f;
        *(uint16_t *)(lVal_11 + 0x7984) = 0x1bb;
        func_0x180673140(&LAB_180211ce0);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_11 + 0x7978);
      if (*(char *)(lVal_11 + 0x7985) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0xd993efbb19cfe32d;
        *(uint *)(lVal_11 + 0x7980) = *(uint *)(lVal_11 + 0x7980) ^ 0x19cfe32d;
        *(byte *)(lVal_11 + 0x7984) = *(byte *)(lVal_11 + 0x7984) ^ 0xbb;
        *(uint8_t *)(lVal_11 + 0x7985) = 0;
      }
      _local_98 = ZEXT816(0);
      sz_15 = strlen((char *)pU64_2);
      if ((int64_t)sz_15 < 0) goto LAB_1801e3303;
      uVal_23 = 0xf;
      pLong_13 = (int64_t *)local_98;
      if (0xf < sz_15) {
        uVal_14 = sz_15 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_14) {
          uVal_23 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pLong_13 = (int64_t *)func_0x180672de0(uVal_23 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_23 + 0x28);
          pLong_13 = (int64_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          pLong_13[-1] = lVal_11;
        }
        _local_98 = pLong_13;
      }
      local_88 = sz_15;
      uStack_80 = uVal_23;
      func_0x1806aa960(pLong_13,pU64_2,sz_15);
      *(uint8_t *)((int64_t)pLong_13 + sz_15) = 0;
      uVal_14 = uStack_80;
      pLong_13 = _local_98;
      pLong_19 = (int64_t *)local_98;
      if (0xf < uStack_80) {
        pLong_19 = _local_98;
      }
      uVal_23 = local_60;
      if (DAT_18083cd40 < 0x10) {
        pU64_16 = &DAT_18083cd28;
        if (DAT_18083cd38 == local_88) goto LAB_1801e28a6;
LAB_1801e288f:
        bFlag_20 = false;
      }
      else {
        pU64_16 = DAT_18083cd28;
        if (DAT_18083cd38 != local_88) goto LAB_1801e288f;
LAB_1801e28a6:
        if (local_88 == 0) {
          bFlag_20 = true;
        }
        else {
          iVal_10 = memcmp(pU64_16,pLong_19,local_88);
          bFlag_20 = iVal_10 == 0;
          uVal_23 = local_60;
        }
      }
      local_60 = uVal_23;
      if (0xf < uVal_14) {
        uVal_23 = uVal_14 + 1;
        pLong_19 = pLong_13;
        if (0xfff < uVal_23) {
          pLong_19 = (int64_t *)pLong_13[-1];
          if ((uint8_t *)0x1f < (uint8_t *)((int64_t)pLong_13 + (-8 - (int64_t)pLong_19)))
          goto LAB_1801e32fb;
          uVal_23 = uVal_14 + 0x28;
        }
        thunk_FUN_180695dd0(pLong_19,uVal_23);
        uVal_23 = local_60;
      }
    }
    else {
      pU64_16 = DAT_18083cd08;
      if (DAT_18083cd18 != local_68) goto LAB_1801e2769;
LAB_1801e274d:
      bFlag_20 = true;
      if ((local_68 != (int64_t *)0x0) &&
         (iVal_10 = memcmp(pU64_16,pU64_22,(size_t)local_68), iVal_10 != 0)) goto LAB_1801e2769;
    }
    if (0xf < uVal_23) {
      uVal_14 = uVal_23 + 1;
      lVal_11 = local_78._0_8_;
      if (0xfff < uVal_14) {
        lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_1801e32fb;
        uVal_14 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_14);
    }
    if (bFlag_20) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7994) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x7994) = 1;
        *(uint8_t *)(lVal_11 + 0x7990) = 1;
        *(uint32_t *)(lVal_11 + 0x798c) = 0xd3e9a76b;
        func_0x180673140(&LAB_180211d10);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_17 = (uint *)(lVal_11 + 0x798c);
      if (*(char *)(lVal_11 + 0x7990) == '\x01') {
        *pU64_17 = *pU64_17 ^ 0xd3c78945;
        *(uint8_t *)(lVal_11 + 0x7990) = 0;
      }
      local_78 = ZEXT816(0);
      pLong_13 = (int64_t *)strlen((char *)pU64_17);
      if ((int64_t)pLong_13 < 0) goto LAB_1801e32f6;
      uVal_23 = 0xf;
      pU64_22 = local_78;
      if (&DAT_0000000f < pLong_13) {
        uVal_14 = (uint64_t)pLong_13 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_14) {
          uVal_23 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pU64_22 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_23 + 0x28);
          pU64_22 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_22 + -8) = lVal_11;
        }
        local_78._0_8_ = pU64_22;
      }
      local_68 = pLong_13;
      local_60 = uVal_23;
      func_0x1806aa960(pU64_22,pU64_17,pLong_13);
      pU64_22[(int64_t)pLong_13] = 0;
      pU64_22 = local_78;
      if (0xf < local_60) {
        pU64_22 = (uint8_t *)local_78._0_8_;
      }
      ptr2_Long_21 = param_2;
      if (&DAT_0000000f < param_2[3]) {
        ptr2_Long_21 = (int64_t **)*param_2;
      }
      if (param_2[2] < local_68) {
        bFlag_20 = false;
      }
      else if (local_68 == (int64_t *)0x0) {
        bFlag_20 = true;
      }
      else {
        pU64_24 = (uint8_t *)((int64_t)param_2[2] + (int64_t)ptr2_Long_21);
        pU64_22 = (uint8_t *)thunk_FUN_180676d20(ptr2_Long_21,pU64_24,pU64_22);
        bFlag_20 = (int64_t)pU64_22 - (int64_t)ptr2_Long_21 != -1 && pU64_22 != pU64_24;
      }
      if (0xf < local_60) {
        uVal_23 = local_60 + 1;
        lVal_11 = local_78._0_8_;
        if (0xfff < uVal_23) {
          lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_1801e32fb;
          uVal_23 = local_60 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_23);
      }
      if (bFlag_20) {
        pLong_13 = param_2[2];
        local_78 = ZEXT816(0);
        pLong_19 = (int64_t *)((int64_t)pLong_13 + -3);
        if (pLong_13 < (int64_t *)((int64_t)pLong_13 + -3)) {
          pLong_19 = pLong_13;
        }
        if ((int64_t)pLong_19 < 0) goto LAB_1801e32f6;
        ptr2_Long_21 = (int64_t **)*param_2;
        pLong_13 = param_2[3];
        if (&DAT_0000000f < pLong_19) {
          uVal_14 = (uint64_t)pLong_19 | 0xf;
          uVal_23 = 0x16;
          if (0x16 < uVal_14) {
            uVal_23 = uVal_14;
          }
          if (uVal_14 < 0xfff) {
            pU64_22 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
          }
          else {
            lVal_11 = func_0x180672de0(uVal_23 + 0x28);
            pU64_22 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_22 + -8) = lVal_11;
          }
          local_78._0_8_ = pU64_22;
        }
        else {
          pU64_22 = local_78;
          uVal_23 = 0xf;
        }
        if (pLong_13 < (int64_t *)0x10) {
          ptr2_Long_21 = param_2;
        }
        local_68 = pLong_19;
        local_60 = uVal_23;
        func_0x1806aa960(pU64_22,ptr2_Long_21,pLong_19);
        pU64_22[(int64_t)pLong_19] = 0;
        uVal_12 = func_0x180129ea0(DAT_180840a58);
        pU64_16 = (uint64_t *)func_0x180109920(uVal_12);
        uVal_23 = local_60;
        bFlag_20 = true;
        if (local_68 <= (int64_t *)pU64_16[2]) {
          if (local_60 < 0x10) {
            pU64_22 = local_78;
          }
          else {
            pU64_22 = (uint8_t *)local_78._0_8_;
          }
          if (0xf < (uint64_t)pU64_16[3]) {
            pU64_16 = (uint64_t *)*pU64_16;
          }
          iVal_10 = memcmp(pU64_16,pU64_22,(size_t)local_68);
          if (iVal_10 == 0) {
            ptr2_Long_21 = (int64_t **)(param_1 + 0x80);
            if (param_2 != ptr2_Long_21) {
              pLong_13 = *(int64_t **)(param_1 + 0x90);
              if (0xf < *(uint64_t *)(param_1 + 0x98)) {
                ptr2_Long_21 = *(int64_t ***)(param_1 + 0x80);
              }
              if (param_2[3] < pLong_13) {
                func_0x18007bba0(param_2,pLong_13);
              }
              else {
                ptr2_Long_25 = param_2;
                if (&DAT_0000000f < param_2[3]) {
                  ptr2_Long_25 = (int64_t **)*param_2;
                }
                param_2[2] = pLong_13;
                func_0x1806aa960(ptr2_Long_25,ptr2_Long_21,pLong_13);
                *(uint8_t *)((int64_t)ptr2_Long_25 + (int64_t)pLong_13) = 0;
              }
            }
            bFlag_20 = false;
          }
        }
        if (0xf < uVal_23) {
          uVal_14 = uVal_23 + 1;
          lVal_11 = local_78._0_8_;
          if (0xfff < uVal_14) {
            lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
            if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_1801e32fb;
            uVal_14 = uVal_23 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_14);
        }
        if (!bFlag_20) {
          return;
        }
      }
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x79a0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x79a0) = 1;
      *(uint8_t *)(lVal_11 + 0x799c) = 1;
      *(uint32_t *)(lVal_11 + 0x7998) = 0xb1bb122d;
      func_0x180673140(&LAB_180211d30);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_17 = (uint *)(lVal_11 + 0x7998);
    if (*(char *)(lVal_11 + 0x799c) == '\x01') {
      *pU64_17 = *pU64_17 ^ 0xb1c9b5ef;
      *(uint8_t *)(lVal_11 + 0x799c) = 0;
    }
    local_c8 = ZEXT816(0);
    local_d8 = ZEXT816(0);
    sz_15 = strlen((char *)pU64_17);
    if (-1 < (int64_t)sz_15) {
      if (sz_15 < 0x10) {
        uVal_23 = 0xf;
        pU64_22 = local_d8;
      }
      else {
        uVal_14 = sz_15 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_14) {
          uVal_23 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pU64_22 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_23 + 0x28);
          pU64_22 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_22 + -8) = lVal_11;
        }
        local_d8._0_8_ = pU64_22;
      }
      local_c8._8_8_ = uVal_23;
      local_c8._0_8_ = sz_15;
      func_0x1806aa960(pU64_22,pU64_17,sz_15);
      pU64_22[sz_15] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x79ac) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x79ac) = 1;
        *(uint8_t *)(lVal_11 + 0x79a8) = 1;
        *(uint32_t *)(lVal_11 + 0x79a4) = 0xb1a6122d;
        func_0x180673140(&LAB_180211d50);
      }
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_17 = (uint *)(lVal_11 + 0x79a4);
      if (*(char *)(lVal_11 + 0x79a8) == '\x01') {
        *pU64_17 = *pU64_17 ^ 0xb1c9b5ef;
        *(uint8_t *)(lVal_11 + 0x79a8) = 0;
      }
      local_a8 = ZEXT816(0);
      local_b8 = ZEXT816(0);
      sz_15 = strlen((char *)pU64_17);
      if ((int64_t)sz_15 < 0) {
        func_0x18007ba70();
LAB_1801e3303:
        func_0x18007ba70();
        fnPtr_5 = (func_ptr_t )swi(3);
        (*fnPtr_5)();
        return;
      }
      if (sz_15 < 0x10) {
        pU64_22 = local_b8;
        uVal_23 = 0xf;
      }
      else {
        uVal_14 = sz_15 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_14) {
          uVal_23 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pU64_22 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_23 + 0x28);
          pU64_22 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_22 + -8) = lVal_11;
        }
        local_b8._0_8_ = pU64_22;
      }
      local_a8._0_8_ = sz_15;
      local_a8._8_8_ = uVal_23;
      func_0x1806aa960(pU64_22,pU64_17,sz_15);
      pU64_22[sz_15] = 0;
      uVal_23 = *(uint64_t *)(param_1 + 0x90);
      if (*(uint64_t *)(param_1 + 0x98) < 0x10) {
        param_1 = param_1 + 0x80;
      }
      else {
        param_1 = *(int64_t *)(param_1 + 0x80);
      }
      if ((uint64_t)(local_a8._8_8_ - local_a8._0_8_) < uVal_23) {
        pU64_17 = (uint *)func_0x180082950(local_b8,uVal_23,uVal_23,param_1,uVal_23);
      }
      else {
        sz_15 = local_a8._0_8_ + uVal_23;
        pU64_17 = (uint *)local_b8;
        pU64_26 = pU64_17;
        if (0xf < (uint64_t)local_a8._8_8_) {
          pU64_26 = (uint *)local_b8._0_8_;
        }
        pU64_22 = (uint8_t *)(local_a8._0_8_ + (int64_t)pU64_26);
        local_a8._0_8_ = sz_15;
        func_0x1806aa960(pU64_22,param_1);
        *(uint8_t *)((int64_t)pU64_26 + sz_15) = 0;
      }
      local_f8 = *pU64_17;
      uStack_f4 = pU64_17[1];
      uStack_f0 = pU64_17[2];
      uStack_ec = pU64_17[3];
      uVal_6 = pU64_17[4];
      local_e8 = *(uint64_t *)(pU64_17 + 4);
      uStack_e0 = *(uint64_t *)(pU64_17 + 6);
      *(uint64_t *)(pU64_17 + 4) = 0;
      *(uint64_t *)(pU64_17 + 6) = 0xf;
      *(uint8_t *)pU64_17 = 0;
      func_0x180094870(&local_118,uVal_6,&local_f8,local_d8);
      uVal_12 = func_0x180129ea0(DAT_180840a58);
      uVal_12 = func_0x180109920(uVal_12);
      func_0x1800d5e00(local_78,uVal_12,1);
      _local_98 = ZEXT816(0);
      local_88 = 0;
      uStack_80 = 0xf;
      ptr2_Long_21 = param_2;
      if (&DAT_0000000f < param_2[3]) {
        ptr2_Long_21 = (int64_t **)*param_2;
      }
      func_0x1800f81c0(local_120,local_98,ptr2_Long_21,(int64_t)param_2[2] + (int64_t)ptr2_Long_21,local_78,
                    &local_118,0);
      if (param_2 == (int64_t **)local_98) {
        if (0xf < uStack_80) {
          uVal_23 = uStack_80 + 1;
          pLong_13 = _local_98;
          if (0xfff < uVal_23) {
            pLong_13 = (int64_t *)_local_98[-1];
            if (0x1f < (uint64_t)((int64_t)_local_98 + (-8 - (int64_t)pLong_13)))
            goto LAB_1801e32fb;
            uVal_23 = uStack_80 + 0x28;
          }
          thunk_FUN_180695dd0(pLong_13,uVal_23);
        }
      }
      else {
        pLong_13 = param_2[3];
        if (&DAT_0000000f < pLong_13) {
          pLong_3 = *param_2;
          pLong_19 = (int64_t *)((int64_t)pLong_13 + 1);
          pLong_18 = pLong_3;
          if ((int64_t *)0xfff < pLong_19) {
            pLong_18 = (int64_t *)pLong_3[-1];
            if (0x1f < (uint64_t)((int64_t)pLong_3 + (-8 - (int64_t)pLong_18))) goto LAB_1801e32fb;
            pLong_19 = pLong_13 + 5;
          }
          thunk_FUN_180695dd0(pLong_18,pLong_19);
        }
        *(uint32_t *)(param_2 + 2) = (uint32_t)local_88;
        *(uint32_t *)((int64_t)param_2 + 0x14) = local_88._4_4_;
        *(uint32_t *)(param_2 + 3) = (uint32_t)uStack_80;
        *(uint32_t *)((int64_t)param_2 + 0x1c) = uStack_80._4_4_;
        *(uint8_t (*)[4])param_2 = local_98;
        *(uint32_t *)((int64_t)param_2 + 4) = uStack_94;
        *(uint32_t *)(param_2 + 1) = (uint32_t)uStack_90;
        *(uint32_t *)((int64_t)param_2 + 0xc) = uStack_90._4_4_;
      }
      local_88 = 0;
      uStack_80 = 0xf;
      auArr_8[15] = 0;
      auArr_8._0_15_ = stack0xffffffffffffff69;
      _local_98 = auArr_8 << 8;
      if ((uint64_t *)local_78._0_8_ != (uint64_t *)0x0) {
        LOCK();
        pInt_1 = (int *)(local_78._0_8_ + 0x2c);
        *pInt_1 = *pInt_1 + -1;
        UNLOCK();
        pU64_16 = (uint64_t *)local_78._0_8_;
        if ((uint64_t *)local_78._0_8_ != (uint64_t *)0x0 && *pInt_1 == 0) {
          do {
            pU64_4 = (uint64_t *)pU64_16[2];
            pU64_16[2] = 0;
            (**(func_ptr_t *)*pU64_16)(pU64_16,1);
            pU64_16 = pU64_4;
          } while (pU64_4 != (uint64_t *)0x0);
        }
      }
      auArr_9._8_8_ = 0;
      auArr_9._0_8_ = local_78._8_8_;
      local_78 = auArr_9 << 0x40;
      if ((local_58 != (int64_t *)0x0) &&
         (pU64_16 = (uint64_t *)(**(func_ptr_t *)(*local_58 + 0x10))(), pU64_16 != (uint64_t *)0x0))
      {
        (**(func_ptr_t *)*pU64_16)(pU64_16,1);
      }
      if (0xf < local_100) {
        lVal_7 = CONCAT71(uStack_117,local_118);
        uVal_23 = local_100 + 1;
        lVal_11 = lVal_7;
        if (0xfff < uVal_23) {
          lVal_11 = *(int64_t *)(lVal_7 + -8);
          if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_11)) goto LAB_1801e32fb;
          uVal_23 = local_100 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_23);
      }
      local_108 = 0;
      local_100 = 0xf;
      local_118 = 0;
      if (0xf < uStack_e0) {
        lVal_7 = CONCAT44(uStack_f4,local_f8);
        uVal_23 = uStack_e0 + 1;
        lVal_11 = lVal_7;
        if (0xfff < uVal_23) {
          lVal_11 = *(int64_t *)(lVal_7 + -8);
          if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_11)) goto LAB_1801e32fb;
          uVal_23 = uStack_e0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_23);
      }
      local_e8 = 0;
      uStack_e0 = 0xf;
      local_f8 = local_f8 & 0xffffff00;
      if (0xf < (uint64_t)local_a8._8_8_) {
        uVal_23 = local_a8._8_8_ + 1;
        lVal_11 = local_b8._0_8_;
        if (0xfff < uVal_23) {
          lVal_11 = *(int64_t *)(local_b8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_11)) goto LAB_1801e32fb;
          uVal_23 = local_a8._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_23);
      }
      if (0xf < (uint64_t)local_c8._8_8_) {
        uVal_23 = local_c8._8_8_ + 1;
        lVal_11 = local_d8._0_8_;
        if (0xfff < uVal_23) {
          lVal_11 = *(int64_t *)(local_d8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_11)) goto LAB_1801e32fb;
          uVal_23 = local_c8._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_23);
      }
      return;
    }
  }
LAB_1801e32f6:
  func_0x18007ba70();
LAB_1801e32fb:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801e3310
void Unwind_1801e3310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801e3350
void Unwind_1801e3350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1801e3390
void Unwind_1801e3390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@1801e33d0
void Unwind_1801e33d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1801e3410
void Unwind_1801e3410(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1801e3450
void Unwind_1801e3450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1801e3490
void Unwind_1801e3490(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  func_0x1800d5f50(param_2 + 0xe0);
  return;
}

// Unwind@1801e3bd0
void Unwind_1801e3bd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1801e4660
void Unwind_1801e4660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1801e46a0
void Unwind_1801e46a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1801e46e0
void Unwind_1801e46e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800d5f50(param_2 + 0x100);
  return;
}

// Unwind@1801e4720
void Unwind_1801e4720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1801e4760
void Unwind_1801e4760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1801e47a0
void Unwind_1801e47a0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xe0);
  return;
}

// Unwind@1801e47e0
void Unwind_1801e47e0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801e4810
void Unwind_1801e4810(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801e4840
void Unwind_1801e4840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801e4880
void Unwind_1801e4880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@1801e48c0
void Unwind_1801e48c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@1801e4910
void Unwind_1801e4910(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801e4940
void Unwind_1801e4940(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xf0);
  return;
}

// Unwind@1801e4980
void Unwind_1801e4980(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801e5010
void Unwind_1801e5010(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1801e5050
void Unwind_1801e5050(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1801e5090
void Unwind_1801e5090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801e50d0
void Unwind_1801e50d0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xa8);
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1801e5110
void Unwind_1801e5110(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801e5130
void Unwind_1801e5130(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1801e5150
byte ** func_0x1801e5150(byte *param_1,byte **param_2,uint64_t param_3,uint64_t param_4)
{
  byte bFlag_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  byte **ptr2_Byte_4;
  uint8_t (*pArr16_5)[16];
  byte *pU8_6;
  byte *pU8_7;
  uint8_t local_98 [56];
  byte *local_60;
  uint8_t local_58;
  uint64_t local_40;
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_1 == 0) {
    *param_1 = 1;
    local_38 = (uint8_t (*)[16])func_0x180672de0(0x10);
    *local_38 = ZEXT816(0);
    lVal_3 = func_0x180672de0(0x50);
    *(int64_t *)lVal_3 = lVal_3;
    *(int64_t *)(lVal_3 + 8) = lVal_3;
    *(int64_t *)(lVal_3 + 0x10) = lVal_3;
    *(uint16_t *)(lVal_3 + 0x18) = 0x101;
    *(int64_t *)*local_38 = lVal_3;
    *(uint8_t (**)[16])(param_1 + 8) = local_38;
    pArr16_5 = local_38;
  }
  else {
    if (*param_1 != 1) {
      local_40 = func_0x1800833d0(param_1);
      func_0x180083260(&local_60,"cannot use emplace() with ",&local_40);
      func_0x180082f00(local_98,0x137,&local_60,param_1);
      func_0x18067a120(local_98,&DAT_180768700);
      fnPtr_2 = (func_ptr_t )swi(3);
      ptr2_Byte_4 = (byte **)(*fnPtr_2)();
      return ptr2_Byte_4;
    }
    pArr16_5 = *(uint8_t (**)[16])(param_1 + 8);
  }
  func_0x180217320(pArr16_5,&local_60,param_3,param_4);
  bFlag_1 = *param_1;
  pU8_6 = (byte *)(uint64_t)bFlag_1;
  if (bFlag_1 == 0) {
    pU8_7 = (byte *)0x1;
  }
  else if (bFlag_1 == 2) {
    pU8_6 = **(byte ***)(param_1 + 8);
    pU8_7 = (byte *)0x8000000000000000;
  }
  else if (bFlag_1 == 1) {
    pU8_7 = (byte *)0x8000000000000000;
    pU8_6 = (byte *)0x0;
  }
  else {
    pU8_6 = (byte *)0x0;
    pU8_7 = (byte *)0x0;
  }
  *param_2 = param_1;
  param_2[1] = local_60;
  param_2[2] = pU8_6;
  param_2[3] = pU8_7;
  *(uint8_t *)(param_2 + 4) = local_58;
  return param_2;
}

// Unwind@1801e5290
void Unwind_1801e5290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@1801e52c0
void Unwind_1801e52c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x80),0x10);
  return;
}

// func_0x1801e52f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801e52f0(uint64_t *param_1)
{
  char *_Str;
  int64_t lVal_1;
  size_t sz_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint32_t *pU64_5;
  uint64_t uVal_6;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint8_t uStack_48;
  uint32_t uStack_47;
  uint32_t uStack_43;
  undefined7 uStack_3f;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  uStack_48 = UNK_1806bd557;
  uStack_47 = _UNK_1806bd558;
  uStack_43 = _UNK_1806bd55c;
  local_58 = _DAT_1806bd547;
  uStack_54 = _UNK_1806bd54b;
  uStack_50 = _UNK_1806bd54f;
  uStack_4c = _UNK_1806bd553;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7ac0) == '\0') {
    lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_3 + 0x7ac0) = 1;
    func_0x1800904a0(lVal_3 + 0x7aa5,&local_58);
    func_0x180673140(&LAB_180211f60);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7aa5);
  func_0x180217580(_Str);
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
      uVal_4 = sz_2 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_4) {
        uVal_6 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pU64_5 = (uint32_t *)func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_6 + 0x28);
        pU64_5 = (uint32_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -2) = lVal_3;
      }
      local_58 = SUB84(pU64_5,0);
      uStack_54 = (uint32_t)((uint64_t)pU64_5 >> 0x20);
    }
    uStack_48 = (uint8_t)sz_2;
    uStack_47 = (uint32_t)(sz_2 >> 8);
    uStack_43._0_3_ = (undefined3)(sz_2 >> 0x28);
    uStack_43._3_1_ = (uint8_t)uVal_6;
    uStack_3f = (undefined7)(uVal_6 >> 8);
    func_0x1806aa960(pU64_5,_Str,sz_2);
    *(uint8_t *)((int64_t)pU64_5 + sz_2) = 0;
    func_0x1801c2ba0(param_1,0,0,&local_58);
    uVal_6 = CONCAT71(uStack_3f,uStack_43._3_1_);
    if (0xf < uVal_6) {
      lVal_1 = CONCAT44(uStack_54,local_58);
      uVal_4 = uVal_6 + 1;
      lVal_3 = lVal_1;
      if (0xfff < uVal_4) {
        lVal_3 = *(int64_t *)(lVal_1 + -8);
        if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1801e54a2;
        uVal_4 = uVal_6 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_4);
    }
    *param_1 = &PTR_LAB_1806bbb30;
    *(uint32_t *)(param_1 + 0x10) = 0x3f000000;
    return param_1;
  }
  func_0x18007ba70();
LAB_1801e54a2:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801e54b0
void Unwind_1801e54b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801e54e0
void Unwind_1801e54e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7ac0) = 0;
  return;
}

// Unwind@1801e57d0
void Unwind_1801e57d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7aec) = 0;
  return;
}

// Unwind@1801e5e80
void Unwind_1801e5e80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801e5ec0
void Unwind_1801e5ec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1801e5f00
void Unwind_1801e5f00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1801e5f40
void Unwind_1801e5f40(void)
{
  func_0x180672f60(&DAT_18083fa70);
  return;
}

// func_0x1801e5f80
uint64_t func_0x1801e5f80(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  func_ptr_t fnPtr_3;
  uint64_t uVal_4;
  uint8_t auStack_48 [32];
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  func_0x180401850(param_1,&local_28,0xb736418e);
  if (local_20 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_20 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_20)(local_20);
      LOCK();
      pInt_2 = (int *)((int64_t)local_20 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_20 + 8))(local_20);
      }
    }
  }
  if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
    return local_28;
  }
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_3 = (func_ptr_t )swi(3);
  uVal_4 = (*fnPtr_3)();
  return uVal_4;
}

// func_0x1801e6000
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801e6000(uint64_t *param_1)
{
  uint8_t (*pArr16_1)[16];
  byte *_Str;
  char *_Str_00;
  uint32_t uVal_2;
  func_ptr_t fnPtr_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  size_t sz_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint64_t *pU64_17;
  uint8_t *pU64_18;
  uint8_t *pU64_19;
  uint8_t *pU64_20;
  uint8_t uVal_21;
  uint64_t uVal_22;
  uint32_t uVal_23;
  uint in_stack_fffffffffffffe98;
  uint8_t **local_148;
  uint64_t *local_140;
  uint8_t ***local_110;
  uint8_t local_108 [56];
  uint64_t local_d0;
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint8_t uStack_b8;
  uint16_t uStack_b7;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint64_t *local_58;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = _DAT_1806bd584;
  uStack_74 = _UNK_1806bd588;
  uStack_70 = _UNK_1806bd58c;
  local_88._4_4_ = _UNK_1806bd578;
  local_88._0_4_ = _DAT_1806bd574;
  uStack_80._0_4_ = _UNK_1806bd57c;
  uStack_80._4_4_ = _UNK_1806bd580;
  uStack_6c = CONCAT13(0x25,(int3)_UNK_1806bd590);
  uStack_68 = 0x7b90bfef;
  uStack_64 = CONCAT13(uStack_64._3_1_,0x51a8a0);
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7b18) == '\0') {
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_16 + 0x7b18) = 1;
    func_0x1801b72f0(lVal_16 + 0x7aed,local_88);
    func_0x180673140(&LAB_180211ff0);
  }
  uVal_13 = _UNK_1806b2c9c;
  uVal_12 = _UNK_1806b2c98;
  uVal_11 = _UNK_1806b2c94;
  uVal_10 = _DAT_1806b2c90;
  lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pArr16_1 = (uint8_t (*)[16])(lVal_16 + 0x7aed);
  if (*(char *)(lVal_16 + 0x7b14) == '\x01') {
    auArr_5._4_4_ = *(uint *)(lVal_16 + 0x7af1) ^ _UNK_1806b2c94;
    auArr_5._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b2c90;
    auArr_5._8_4_ = *(uint *)(lVal_16 + 0x7af5) ^ _UNK_1806b2c98;
    auArr_5._12_4_ = *(uint *)(lVal_16 + 0x7af9) ^ _UNK_1806b2c9c;
    *pArr16_1 = auArr_5;
    auArr_7._4_4_ = *(uint *)(lVal_16 + 0x7b01) ^ uVal_11;
    auArr_7._0_4_ = *(uint *)(lVal_16 + 0x7afd) ^ uVal_10;
    auArr_7._8_4_ = *(uint *)(lVal_16 + 0x7b05) ^ uVal_12;
    auArr_7._12_4_ = *(uint *)(lVal_16 + 0x7b09) ^ uVal_13;
    *(uint8_t (*)[16])(lVal_16 + 0x7afd) = auArr_7;
    *(uint *)(lVal_16 + 0x7b0d) = *(uint *)(lVal_16 + 0x7b0d) ^ 0x9f9d9cf;
    *(byte *)(lVal_16 + 0x7b11) = *(byte *)(lVal_16 + 0x7b11) ^ 0xc5;
    *(byte *)(lVal_16 + 0x7b12) = *(byte *)(lVal_16 + 0x7b12) ^ 0x81;
    *(byte *)(lVal_16 + 0x7b13) = *(byte *)(lVal_16 + 0x7b13) ^ 0x51;
    *(uint8_t *)(lVal_16 + 0x7b14) = 0;
  }
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  _local_88 = ZEXT816(0);
  sz_14 = strlen((char *)pArr16_1);
  if ((int64_t)sz_14 < 0) {
    func_0x18007ba70();
LAB_1801e6965:
    local_4a = 1;
    func_0x18007ba70();
LAB_1801e6972:
    local_49 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_14 < 0x10) {
      pU64_19 = local_88;
      uVal_22 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_15) {
        uVal_22 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        lVal_16 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_16;
      }
      local_88 = (uint8_t  [8])pU64_19;
    }
    local_78 = (uint32_t)sz_14;
    uStack_74 = (uint32_t)(sz_14 >> 0x20);
    uStack_70 = (uint32_t)uVal_22;
    uStack_6c = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_19,pArr16_1,sz_14);
    pU64_19[sz_14] = 0;
    pU64_19 = local_88;
    func_0x1801c2ba0(local_58,0,3,pU64_19);
    uVal_22 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_22) {
      uVal_15 = uVal_22 + 1;
      lVal_16 = (int64_t)local_88;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_16)) goto LAB_1801e695e;
        uVal_15 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    *local_58 = &PTR_LAB_1806bbc60;
    pU64_17 = local_58 + 0x10;
    *(uint8_t *)(local_58 + 0x10) = 0;
    *(uint32_t *)((int64_t)local_58 + 0x84) = 0x14;
    local_d0 = 0;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_21 = 0;
    }
    else {
      local_d0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_108);
      uVal_21 = *(uint8_t *)pU64_17;
    }
    uStack_68 = _DAT_1806bd5bb;
    uStack_64 = _UNK_1806bd5bf;
    uStack_60 = _UNK_1806bd5c3;
    uStack_5c = _UNK_1806bd5c7;
    local_78 = _DAT_1806bd5ab;
    uStack_74 = _UNK_1806bd5af;
    uStack_70 = _UNK_1806bd5b3;
    uStack_6c = _UNK_1806bd5b7;
    local_88._4_4_ = _UNK_1806bd59f;
    local_88._0_4_ = _DAT_1806bd59b;
    uStack_80._0_4_ = _UNK_1806bd5a3;
    uStack_80._4_4_ = _UNK_1806bd5a7;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7b4c) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x7b4c) = 1;
      func_0x1801b4680(lVal_16 + 0x7b19,local_88);
      func_0x180673140(&LAB_180212020);
    }
    uVal_13 = _UNK_1806b4e8c;
    uVal_12 = _UNK_1806b4e88;
    uVal_11 = _UNK_1806b4e84;
    uVal_10 = _DAT_1806b4e80;
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_1 = (uint8_t (*)[16])(lVal_16 + 0x7b19);
    if (*(char *)(lVal_16 + 0x7b49) == '\x01') {
      auArr_6._4_4_ = *(uint *)(lVal_16 + 0x7b1d) ^ _UNK_1806b4e84;
      auArr_6._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b4e80;
      auArr_6._8_4_ = *(uint *)(lVal_16 + 0x7b21) ^ _UNK_1806b4e88;
      auArr_6._12_4_ = *(uint *)(lVal_16 + 0x7b25) ^ _UNK_1806b4e8c;
      *pArr16_1 = auArr_6;
      auArr_8._4_4_ = *(uint *)(lVal_16 + 0x7b2d) ^ uVal_11;
      auArr_8._0_4_ = *(uint *)(lVal_16 + 0x7b29) ^ uVal_10;
      auArr_8._8_4_ = *(uint *)(lVal_16 + 0x7b31) ^ uVal_12;
      auArr_8._12_4_ = *(uint *)(lVal_16 + 0x7b35) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_16 + 0x7b29) = auArr_8;
      auArr_9._4_4_ = *(uint *)(lVal_16 + 0x7b3d) ^ uVal_11;
      auArr_9._0_4_ = *(uint *)(lVal_16 + 0x7b39) ^ uVal_10;
      auArr_9._8_4_ = *(uint *)(lVal_16 + 0x7b41) ^ uVal_12;
      auArr_9._12_4_ = *(uint *)(lVal_16 + 0x7b45) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_16 + 0x7b39) = auArr_9;
      *(uint8_t *)(lVal_16 + 0x7b49) = 0;
    }
    local_98 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    sz_14 = strlen((char *)pArr16_1);
    if ((int64_t)sz_14 < 0) goto LAB_1801e6965;
    if (sz_14 < 0x10) {
      pU64_20 = local_a8;
      uVal_22 = 0xf;
    }
    else {
      uVal_15 = sz_14 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_15) {
        uVal_22 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_4a = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_4a = 1;
        lVal_16 = func_0x180672de0(uVal_22 + 0x28);
        pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_16;
      }
      local_a8._0_8_ = pU64_20;
    }
    local_98._8_8_ = uVal_22;
    local_98._0_8_ = sz_14;
    func_0x1806aa960(pU64_20,pArr16_1,sz_14);
    pU64_20[sz_14] = 0;
    local_c8 = _DAT_1806bd5cb;
    uStack_c4 = _UNK_1806bd5cf;
    uStack_c0 = _UNK_1806bd5d3;
    uStack_bc = _UNK_1806bd5d7;
    uStack_b8 = 0x75;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7b60) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x7b60) = 1;
      func_0x18007d2b0(lVal_16 + 0x7b4d,&local_c8);
      func_0x180673140(&LAB_180212050);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_1 = (uint8_t (*)[16])(lVal_16 + 0x7b4d);
    if (*(char *)(lVal_16 + 0x7b5e) == '\x01') {
      auArr_4._4_4_ = *(uint *)(lVal_16 + 0x7b51) ^ _UNK_1806b4e84;
      auArr_4._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b4e80;
      auArr_4._8_4_ = *(uint *)(lVal_16 + 0x7b55) ^ _UNK_1806b4e88;
      auArr_4._12_4_ = *(uint *)(lVal_16 + 0x7b59) ^ _UNK_1806b4e8c;
      *pArr16_1 = auArr_4;
      *(byte *)(lVal_16 + 0x7b5d) = *(byte *)(lVal_16 + 0x7b5d) ^ 0x75;
      *(uint8_t *)(lVal_16 + 0x7b5e) = 0;
    }
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    _local_88 = ZEXT816(0);
    sz_14 = strlen((char *)pArr16_1);
    if ((int64_t)sz_14 < 0) goto LAB_1801e6972;
    uVal_22 = 0xf;
    if (0xf < sz_14) {
      uVal_15 = sz_14 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_15) {
        uVal_22 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        local_49 = 1;
        pU64_19 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        local_49 = 1;
        lVal_16 = func_0x180672de0(uVal_22 + 0x28);
        pU64_19 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_19 + -8) = lVal_16;
      }
      local_88 = (uint8_t  [8])pU64_19;
    }
    local_78 = (uint32_t)sz_14;
    uStack_74 = (uint32_t)(sz_14 >> 0x20);
    uStack_70 = (uint32_t)uVal_22;
    uStack_6c = (uint32_t)(uVal_22 >> 0x20);
    func_0x1806aa960(pU64_19,pArr16_1,sz_14);
    pU64_19[sz_14] = 0;
    pU64_19 = local_108;
    pU64_18 = local_88;
    pU64_20 = local_a8;
    func_0x1801ccd70(local_58,pU64_18,pU64_20,pU64_17,uVal_21,pU64_19,
                  in_stack_fffffffffffffe98 & 0xffffff00);
    uVal_23 = (uint32_t)((uint64_t)pU64_19 >> 0x20);
    uVal_22 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_22) {
      uVal_15 = uVal_22 + 1;
      lVal_16 = (int64_t)local_88;
      if (0xfff < uVal_15) {
        lVal_16 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_16)) goto LAB_1801e695e;
        uVal_15 = uVal_22 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_15);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_22 = local_98._8_8_ + 1;
      lVal_16 = local_a8._0_8_;
      if (0xfff < uVal_22) {
        lVal_16 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_16)) goto LAB_1801e695e;
        uVal_22 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_16,uVal_22);
    }
    local_148 = &PTR_LAB_1806bad00;
    local_140 = local_58;
    local_110 = &local_148;
    uVal_2 = *(uint32_t *)((int64_t)local_58 + 0x84);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7b64) == '\0') {
      lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_16 + 0x7b64) = 1;
      *(uint16_t *)(lVal_16 + 0x7b61) = 0x173;
      func_0x180673140(&LAB_180212080);
    }
    lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (byte *)(lVal_16 + 0x7b61);
    if (*(char *)(lVal_16 + 0x7b62) == '\x01') {
      *_Str = *_Str ^ 0x73;
      *(uint8_t *)(lVal_16 + 0x7b62) = 0;
    }
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    _local_88 = ZEXT816(0);
    sz_14 = strlen((char *)_Str);
    if (-1 < (int64_t)sz_14) {
      uVal_22 = 0xf;
      if (0xf < sz_14) {
        uVal_15 = sz_14 | 0xf;
        uVal_22 = 0x16;
        if (0x16 < uVal_15) {
          uVal_22 = uVal_15;
        }
        if (uVal_15 < 0xfff) {
          local_4c = 1;
          pU64_18 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
        }
        else {
          local_4c = 1;
          lVal_16 = func_0x180672de0(uVal_22 + 0x28);
          pU64_18 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_18 + -8) = lVal_16;
        }
        local_88 = (uint8_t  [8])pU64_18;
      }
      local_78 = (uint32_t)sz_14;
      uStack_74 = (uint32_t)(sz_14 >> 0x20);
      uStack_70 = (uint32_t)uVal_22;
      uStack_6c = (uint32_t)(uVal_22 >> 0x20);
      func_0x1806aa960(pU64_18,_Str,sz_14);
      pU64_18[sz_14] = 0;
      local_c8 = _DAT_1806bd5dc;
      uStack_c4 = _UNK_1806bd5e0;
      uStack_c0 = _UNK_1806bd5e4;
      uStack_bc = CONCAT13(0x86,(int3)_UNK_1806bd5e8);
      uStack_b8 = 0x1d;
      uStack_b7 = 0x7d21;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7b7c) == '\0') {
        lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_16 + 0x7b7c) = 1;
        func_0x18007cb80(lVal_16 + 0x7b65,&local_c8);
        func_0x180673140(&LAB_1802120a0);
      }
      _Str_00 = (char *)(*(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7b65
                        );
      func_0x1801c0b80(_Str_00);
      local_a8 = ZEXT816(0);
      sz_14 = strlen(_Str_00);
      if (-1 < (int64_t)sz_14) {
        uVal_22 = 0xf;
        if (0xf < sz_14) {
          uVal_15 = sz_14 | 0xf;
          uVal_22 = 0x16;
          if (0x16 < uVal_15) {
            uVal_22 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            local_4b = 1;
            pU64_20 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
          }
          else {
            local_4b = 1;
            lVal_16 = func_0x180672de0(uVal_22 + 0x28);
            pU64_20 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_20 + -8) = lVal_16;
          }
          local_a8._0_8_ = pU64_20;
        }
        pU64_17 = local_58;
        lVal_16 = (int64_t)local_58 + 0x84;
        local_98._0_8_ = sz_14;
        local_98._8_8_ = uVal_22;
        func_0x1806aa960(pU64_20,_Str_00,sz_14);
        pU64_20[sz_14] = 0;
        func_0x1801ccff0(pU64_17,local_a8,local_88,lVal_16,uVal_2,CONCAT44(uVal_23,1),0x14,&local_148,0);
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_22 = local_98._8_8_ + 1;
          lVal_16 = local_a8._0_8_;
          if (0xfff < uVal_22) {
            lVal_16 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_16)) goto LAB_1801e695e;
            uVal_22 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_22);
        }
        uVal_22 = CONCAT44(uStack_6c,uStack_70);
        if (0xf < uVal_22) {
          uVal_15 = uVal_22 + 1;
          lVal_16 = (int64_t)local_88;
          if (0xfff < uVal_15) {
            lVal_16 = *(int64_t *)((int64_t)local_88 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_16)) {
LAB_1801e695e:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_15 = uVal_22 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_15);
        }
        return local_58;
      }
      goto LAB_1801e698c;
    }
  }
  local_4c = 1;
  func_0x18007ba70();
LAB_1801e698c:
  local_4b = 1;
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_17 = (uint64_t *)(*fnPtr_3)();
  return pU64_17;
}

// Unwind@1801e69a0
void Unwind_1801e69a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1801e69f0
void Unwind_1801e69f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7b4c) = 0;
  *(uint8_t *)(param_2 + 0x14e) = 1;
  return;
}

// Unwind@1801e6a40
void Unwind_1801e6a40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1801e6a80
void Unwind_1801e6a80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  *(uint8_t *)(param_2 + 0x14f) = 0;
  return;
}

// Unwind@1801e6ac0
void Unwind_1801e6ac0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x14f);
  func_0x180001e70(param_2 + 0xf0);
  *(uint8_t *)(param_2 + 0x14e) = uVal_1;
  return;
}

// Unwind@1801e6b10
void Unwind_1801e6b10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x14e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1801e6b70
void Unwind_1801e6b70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  *(uint8_t *)(param_2 + 0x14d) = 0;
  return;
}

// Unwind@1801e6bb0
void Unwind_1801e6bb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x14d);
  func_0x180001e70(param_2 + 0x110);
  *(uint8_t *)(param_2 + 0x14c) = uVal_1;
  return;
}

// Unwind@1801e6c00
void Unwind_1801e6c00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x14c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1801e6c60
void Unwind_1801e6c60(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x140));
  return;
}

// Unwind@1801e6ca0
void Unwind_1801e6ca0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7b18) = 0;
  return;
}

// Unwind@1801e6cf0
void Unwind_1801e6cf0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7b60) = 0;
  *(uint8_t *)(param_2 + 0x14f) = 1;
  return;
}

// Unwind@1801e6d40
void Unwind_1801e6d40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7b7c) = 0;
  *(uint8_t *)(param_2 + 0x14d) = 1;
  return;
}

// Unwind@1801e7050
void Unwind_1801e7050(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7bac) = 0;
  return;
}

// func_0x1801e7090
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801e7090(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  size_t sz_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint8_t *pU64_10;
  uint64_t uVal_11;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  size_t local_58;
  uint32_t local_50;
  uint32_t uStack_4c;
  undefined3 uStack_48;
  uint32_t uStack_45;
  uint32_t uStack_41;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  uStack_48 = _UNK_1806bd629;
  uStack_45 = _UNK_1806bd62c;
  uStack_41 = _UNK_1806bd630;
  local_58 = CONCAT44(_UNK_1806bd61d,_DAT_1806bd619);
  local_50 = _UNK_1806bd621;
  uStack_4c = _UNK_1806bd625;
  local_68._4_4_ = _UNK_1806bd60d;
  local_68._0_4_ = _DAT_1806bd609;
  uStack_60._0_4_ = _UNK_1806bd611;
  uStack_60._4_4_ = _UNK_1806bd615;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7bdc) == '\0') {
    lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_8 + 0x7bdc) = 1;
    func_0x1801b3830(lVal_8 + 0x7bad,local_68);
    func_0x180673140(&LAB_180212130);
  }
  uVal_6 = _UNK_1806b2c9c;
  uVal_5 = _UNK_1806b2c98;
  uVal_4 = _UNK_1806b2c94;
  uVal_3 = _DAT_1806b2c90;
  lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_8 + 0x7bad);
  if (*(char *)(lVal_8 + 0x7bd8) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_8 + 0x7bb1) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(lVal_8 + 0x7bb5) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(lVal_8 + 0x7bb9) ^ _UNK_1806b2c9c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_8 + 0x7bc1) ^ uVal_4;
    auArr_2._0_4_ = *(uint *)(lVal_8 + 0x7bbd) ^ uVal_3;
    auArr_2._8_4_ = *(uint *)(lVal_8 + 0x7bc5) ^ uVal_5;
    auArr_2._12_4_ = *(uint *)(lVal_8 + 0x7bc9) ^ uVal_6;
    *(uint8_t (*)[16])(lVal_8 + 0x7bbd) = auArr_2;
    *(uint64_t *)(lVal_8 + 0x7bcd) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_8 + 0x7bcd) >> 0x20) ^ _UNK_1806b63e4,
                  (uint)*(uint64_t *)(lVal_8 + 0x7bcd) ^ _DAT_1806b63e0);
    *(byte *)(lVal_8 + 0x7bd5) = *(byte *)(lVal_8 + 0x7bd5) ^ 0xcf;
    *(byte *)(lVal_8 + 0x7bd6) = *(byte *)(lVal_8 + 0x7bd6) ^ 0xd9;
    *(byte *)(lVal_8 + 0x7bd7) = *(byte *)(lVal_8 + 0x7bd7) ^ 0xf9;
    *(uint8_t *)(lVal_8 + 0x7bd8) = 0;
  }
  _local_68 = ZEXT816(0);
  sz_7 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_7) {
    if (sz_7 < 0x10) {
      pU64_10 = local_68;
      uVal_11 = 0xf;
    }
    else {
      uVal_9 = sz_7 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_9) {
        uVal_11 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_8 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_8 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_8;
      }
      local_68 = (uint8_t  [8])pU64_10;
    }
    local_50 = (uint32_t)uVal_11;
    uStack_4c = (uint32_t)(uVal_11 >> 0x20);
    local_58 = sz_7;
    func_0x1806aa960(pU64_10,_Str,sz_7);
    pU64_10[sz_7] = 0;
    func_0x1801c2ba0(param_1,0,3,local_68);
    uVal_11 = CONCAT44(uStack_4c,local_50);
    if (0xf < uVal_11) {
      uVal_9 = uVal_11 + 1;
      lVal_8 = (int64_t)local_68;
      if (0xfff < uVal_9) {
        lVal_8 = *(int64_t *)((int64_t)local_68 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_68 + -8) - lVal_8)) goto LAB_1801e7282;
        uVal_9 = uVal_11 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_8,uVal_9);
    }
    *param_1 = &PTR_LAB_1806bbd90;
    return param_1;
  }
  func_0x18007ba70();
LAB_1801e7282:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801e7290
void Unwind_1801e7290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1801e72c0
void Unwind_1801e72c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7bdc) = 0;
  return;
}

// Unwind@1801e75a0
void Unwind_1801e75a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7c04) = 0;
  return;
}

// func_0x1801e7620
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801e7620(uint64_t *param_1)
{
  uint *pU64_1;
  uint8_t *pU64_2;
  char *fnPtr_3;
  uint64_t *pU64_4;
  uint8_t (*_Str)[16];
  uint32_t uVal_5;
  func_ptr_t fnPtr_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint64_t uVal_11;
  size_t sz_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint64_t **ptr2_U64_15;
  uint64_t *pU64_16;
  uint64_t ***ptr3_U64_17;
  uint8_t *pU64_18;
  uint64_t ***ptr3_U64_19;
  uint64_t uVal_20;
  uint8_t uVal_21;
  uint uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint8_t auArr_22 [16];
  uint8_t local_398 [56];
  uint64_t local_360;
  uint8_t local_358 [56];
  uint64_t local_320;
  uint8_t local_318 [56];
  uint64_t local_2e0;
  uint8_t local_2d8 [56];
  uint64_t local_2a0;
  uint8_t local_298 [56];
  uint64_t local_260;
  uint8_t local_258 [56];
  uint64_t local_220;
  uint8_t local_218 [56];
  uint64_t local_1e0;
  uint8_t local_1d8 [56];
  uint64_t local_1a0;
  uint8_t local_198 [56];
  uint64_t local_160;
  uint8_t local_158 [56];
  uint64_t local_120;
  uint8_t local_118 [56];
  uint64_t local_e0;
  uint8_t local_d8 [16];
  uint8_t local_c8 [8];
  uint64_t uStack_c0;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint8_t uStack_a8;
  uint32_t uStack_a7;
  uint32_t uStack_a3;
  uint32_t uStack_9f;
  uint64_t *local_90;
  uint64_t ***local_88;
  uint8_t uStack_80;
  uint16_t uStack_7f;
  uint8_t uStack_7d;
  uint8_t uStack_7c;
  uint16_t uStack_7b;
  uint8_t uStack_79;
  uint8_t uStack_78;
  uint16_t uStack_77;
  uint8_t uStack_75;
  uint8_t uStack_74;
  uint16_t uStack_73;
  uint8_t uStack_71;
  uint8_t uStack_70;
  uint16_t uStack_6f;
  uint8_t uStack_6d;
  uint32_t uStack_6c;
  uint8_t local_5e;
  uint8_t local_5d;
  uint8_t local_5c;
  uint8_t local_5b;
  uint8_t local_5a;
  uint8_t local_59;
  uint8_t local_58;
  uint8_t local_57;
  uint8_t local_56;
  uint8_t local_55;
  uint8_t local_54;
  uint8_t local_53;
  uint8_t local_52;
  uint8_t local_51;
  uint8_t local_50;
  uint8_t local_4f;
  uint8_t local_4e;
  uint8_t local_4d;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uStack_b8 = _UNK_1806bd667;
  uStack_b4 = _UNK_1806bd66b;
  uStack_b0 = _UNK_1806bd66f;
  local_c8._4_4_ = _UNK_1806bd65b;
  local_c8._0_4_ = _DAT_1806bd657;
  uStack_c0._0_4_ = _UNK_1806bd65f;
  uStack_c0._4_4_ = _DAT_1806bd663;
  local_d8._8_8_ = _UNK_1806bd64f;
  local_d8._0_8_ = _DAT_1806bd647;
  local_90 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7c34) == '\0') {
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_14 + 0x7c34) = 1;
    func_0x1801b1b20(lVal_14 + 0x7c05,local_d8);
    func_0x180673140(&LAB_1802121c0);
  }
  uVal_10 = _UNK_1806b2d6c;
  uVal_9 = _UNK_1806b2d68;
  uVal_8 = _UNK_1806b2d64;
  uVal_7 = _DAT_1806b2d60;
  lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_14 + 0x7c05);
  if (*(char *)(lVal_14 + 0x7c31) == '\x01') {
    uVal_23 = *(uint *)(lVal_14 + 0x7c09) ^ _UNK_1806b2d64;
    uVal_24 = *(uint *)(lVal_14 + 0x7c0d) ^ _UNK_1806b2d68;
    uVal_25 = *(uint *)(lVal_14 + 0x7c11) ^ _UNK_1806b2d6c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2d60;
    *(uint *)(lVal_14 + 0x7c09) = uVal_23;
    *(uint *)(lVal_14 + 0x7c0d) = uVal_24;
    *(uint *)(lVal_14 + 0x7c11) = uVal_25;
    *(uint *)(lVal_14 + 0x7c15) = *(uint *)(lVal_14 + 0x7c15) ^ uVal_7;
    *(uint *)(lVal_14 + 0x7c19) = *(uint *)(lVal_14 + 0x7c19) ^ uVal_8;
    *(uint *)(lVal_14 + 0x7c1d) = *(uint *)(lVal_14 + 0x7c1d) ^ uVal_9;
    *(uint *)(lVal_14 + 0x7c21) = *(uint *)(lVal_14 + 0x7c21) ^ uVal_10;
    *(uint64_t *)(lVal_14 + 0x7c25) = *(uint64_t *)(lVal_14 + 0x7c25) ^ SUB168(_DAT_1806b6410,0);
    *(byte *)(lVal_14 + 0x7c2d) = *(byte *)(lVal_14 + 0x7c2d) ^ 0x75;
    *(byte *)(lVal_14 + 0x7c2e) = *(byte *)(lVal_14 + 0x7c2e) ^ 0x55;
    *(byte *)(lVal_14 + 0x7c2f) = *(byte *)(lVal_14 + 0x7c2f) ^ 0x4d;
    *(byte *)(lVal_14 + 0x7c30) = *(byte *)(lVal_14 + 0x7c30) ^ 0xd5;
    *(uint8_t *)(lVal_14 + 0x7c31) = 0;
  }
  _local_c8 = (uint8_t  [16])0x0;
  local_d8 = (uint8_t  [16])0x0;
  sz_12 = strlen((char *)pU64_1);
  if ((int64_t)sz_12 < 0) {
    func_0x18007ba70();
LAB_1801ea0b6:
    local_49 = 1;
    func_0x18007ba70();
LAB_1801ea0c3:
    local_54 = 1;
    func_0x18007ba70();
LAB_1801ea0d0:
    local_4a = 1;
    func_0x18007ba70();
LAB_1801ea0dd:
    local_55 = 1;
    func_0x18007ba70();
LAB_1801ea0ea:
    local_4b = 1;
    func_0x18007ba70();
LAB_1801ea0f7:
    local_56 = 1;
    func_0x18007ba70();
LAB_1801ea104:
    local_4c = 1;
    func_0x18007ba70();
LAB_1801ea111:
    local_57 = 1;
    func_0x18007ba70();
LAB_1801ea11e:
    local_4d = 1;
    func_0x18007ba70();
LAB_1801ea12b:
    local_58 = 1;
    func_0x18007ba70();
LAB_1801ea138:
    local_4e = 1;
    func_0x18007ba70();
LAB_1801ea145:
    local_59 = 1;
    func_0x18007ba70();
LAB_1801ea152:
    local_4f = 1;
    func_0x18007ba70();
LAB_1801ea15f:
    local_5a = 1;
    func_0x18007ba70();
LAB_1801ea16c:
    local_50 = 1;
    func_0x18007ba70();
LAB_1801ea179:
    local_5b = 1;
    func_0x18007ba70();
LAB_1801ea186:
    local_51 = 1;
    func_0x18007ba70();
LAB_1801ea193:
    local_5c = 1;
    func_0x18007ba70();
LAB_1801ea1a0:
    local_52 = 1;
    func_0x18007ba70();
LAB_1801ea1ad:
    local_5d = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_12 < 0x10) {
      pU64_18 = local_d8;
      uVal_20 = 0xf;
    }
    else {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    local_c8 = (uint8_t  [8])sz_12;
    uStack_c0 = uVal_20;
    func_0x1806aa960(pU64_18,pU64_1,sz_12);
    pU64_18[sz_12] = 0;
    pU64_18 = local_d8;
    func_0x1801c2ba0(local_90,0,0,pU64_18);
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    *local_90 = &PTR_LAB_1806bbec0;
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xb2);
    *(uint8_t (*)[16])(local_90 + 0x10) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_90 + 0x12) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_90 + 0x14) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])((int64_t)local_90 + 0xad) = (uint8_t  [16])0x0;
    local_360 = 0;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_21 = 0;
    }
    else {
      local_360 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_398);
      uVal_21 = *pU64_2;
    }
    uStack_78 = (uint8_t)_UNK_1806bd683;
    uStack_77 = (uint16_t)((uint)_UNK_1806bd683 >> 8);
    uStack_75 = (uint8_t)((uint)_UNK_1806bd683 >> 0x18);
    uStack_74 = (uint8_t)_UNK_1806bd687;
    uStack_73 = (uint16_t)((uint)_UNK_1806bd687 >> 8);
    uStack_71 = (uint8_t)((uint)_UNK_1806bd687 >> 0x18);
    uStack_70 = (uint8_t)_UNK_1806bd68b;
    uStack_6f = (uint16_t)((uint)_UNK_1806bd68b >> 8);
    uStack_6d = (uint8_t)((uint)_UNK_1806bd68b >> 0x18);
    local_88 = _DAT_1806bd673;
    uStack_80 = (uint8_t)_UNK_1806bd67b;
    uStack_7f = (uint16_t)((uint)_UNK_1806bd67b >> 8);
    uStack_7d = (uint8_t)((uint)_UNK_1806bd67b >> 0x18);
    uStack_7c = (uint8_t)_DAT_1806bd67f;
    uStack_7b = (uint16_t)((uint)_DAT_1806bd67f >> 8);
    uStack_79 = (uint8_t)((uint)_DAT_1806bd67f >> 0x18);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7c54) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7c54) = 1;
      func_0x18008fba0(lVal_14 + 0x7c35,&local_88);
      func_0x180673140(&LAB_1802121f0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7c35);
    func_0x1802175e0(fnPtr_3);
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_3);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea0b6;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_49 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_49 = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    uStack_c0 = uVal_20;
    local_c8 = (uint8_t  [8])sz_12;
    func_0x1806aa960(pU64_18,fnPtr_3,sz_12);
    pU64_18[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7c64) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7c64) = 1;
      *(uint64_t *)(lVal_14 + 0x7c58) = 0x9ad0dac5ae092b36;
      *(uint16_t *)(lVal_14 + 0x7c60) = 0x173;
      func_0x180673140(&LAB_180212220);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_14 + 0x7c58);
    if (*(char *)(lVal_14 + 0x7c61) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0xe9b5b3b1c77d4573;
      *(byte *)(lVal_14 + 0x7c60) = *(byte *)(lVal_14 + 0x7c60) ^ 0x73;
      *(uint8_t *)(lVal_14 + 0x7c61) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen((char *)pU64_4);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea0c3;
    if (sz_12 < 0x10) {
      ptr3_U64_19 = &local_88;
      uVal_20 = 0xf;
    }
    else {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_54 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_54 = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,pU64_4,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    ptr3_U64_19 = &local_88;
    pU64_18 = local_d8;
    func_0x1801ccd70(local_90,ptr3_U64_19,pU64_18,pU64_2,uVal_21,local_398,0);
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    local_320 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_320 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_358);
    }
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xb3);
    uVal_21 = *pU64_2;
    uStack_78 = (uint8_t)((uint)_UNK_1806bd69c >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806bd6a0;
    uStack_75 = (uint8_t)((uint)_UNK_1806bd6a0 >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806bd6a0 >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806bd6a4;
    uStack_71 = (uint8_t)((uint)_UNK_1806bd6a4 >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806bd6a4 >> 0x18);
    local_88 = _DAT_1806bd68f;
    uStack_80 = UNK_1806bd697;
    uStack_7f = (uint16_t)_DAT_1806bd698;
    uStack_7d = (uint8_t)((uint)_DAT_1806bd698 >> 0x10);
    uStack_7c = (uint8_t)((uint)_DAT_1806bd698 >> 0x18);
    uStack_7b = (uint16_t)_UNK_1806bd69c;
    uStack_79 = (uint8_t)((uint)_UNK_1806bd69c >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7c80) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7c80) = 1;
      func_0x1800904a0(lVal_14 + 0x7c65,&local_88);
      func_0x180673140(&LAB_180212250);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7c65);
    func_0x180217610(fnPtr_3);
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_3);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea0d0;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_4a = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_4a = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    uStack_c0 = uVal_20;
    local_c8 = (uint8_t  [8])sz_12;
    func_0x1806aa960(pU64_18,fnPtr_3,sz_12);
    pU64_18[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7c8c) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7c8c) = 1;
      *(uint8_t *)(lVal_14 + 0x7c8a) = 1;
      *(uint32_t *)(lVal_14 + 0x7c84) = 0x880ca594;
      *(uint16_t *)(lVal_14 + 0x7c88) = 0x29b8;
      func_0x180673140(&LAB_180212280);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_14 + 0x7c84);
    if (*(char *)(lVal_14 + 0x7c8a) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xe569d1dd;
      *(byte *)(lVal_14 + 0x7c88) = *(byte *)(lVal_14 + 0x7c88) ^ 0xcb;
      *(byte *)(lVal_14 + 0x7c89) = *(byte *)(lVal_14 + 0x7c89) ^ 0x29;
      *(uint8_t *)(lVal_14 + 0x7c8a) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea0dd;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_55 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_55 = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,pU64_1,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    ptr3_U64_19 = &local_88;
    pU64_18 = local_d8;
    func_0x1801ccd70(local_90,ptr3_U64_19,pU64_18,pU64_2,uVal_21,local_358,0);
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    local_2e0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_2e0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_318);
    }
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xb4);
    uVal_21 = *pU64_2;
    local_c8._4_4_ = _UNK_1806bd6bc;
    local_c8._0_4_ = _DAT_1806bd6b8;
    uStack_c0._0_4_ = _UNK_1806bd6c0;
    uStack_c0._4_4_ = _UNK_1806bd6c4;
    local_d8._8_8_ = _UNK_1806bd6b0;
    local_d8._0_8_ = _DAT_1806bd6a8;
    uStack_b8 = CONCAT22(uStack_b8._2_2_,0xc7f4);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7cb0) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7cb0) = 1;
      func_0x1800f15f0(lVal_14 + 0x7c8d,local_d8);
      func_0x180673140(&LAB_1802122b0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7c8d);
    func_0x1801c09f0(fnPtr_3);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen(fnPtr_3);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea0ea;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_4b = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_4b = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,fnPtr_3,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7cd0) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7cd0) = 1;
      uVal_11 = _UNK_1806bb108;
      *(uint64_t *)(lVal_14 + 0x7cc0) = _DAT_1806bb100;
      *(uint64_t *)(lVal_14 + 0x7cc8) = uVal_11;
      func_0x180673140(&LAB_1802122e0);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_14 + 0x7cc0);
    if (*(char *)(lVal_14 + 0x7ccf) == '\x01') {
      uVal_5 = *(uint32_t *)(lVal_14 + 0x7cc8);
      auArr_22 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_5 >> 0x10),uVal_5)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_14 + 0x7ccd) >> 8)),
                                                 (char)((uint)uVal_5 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_14 + 0x7ccd),(char)uVal_5)
                                       )),_DAT_1806ae110);
      auArr_22._8_8_ =
           auArr_22._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_14 + 0x7ccc) << 0x20;
      auArr_22 = pblendw(auArr_22,*_Str,0xf);
      *_Str = auArr_22 ^ _DAT_1806bb110;
    }
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen((char *)_Str);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea0f7;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_56 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_56 = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    local_c8 = (uint8_t  [8])sz_12;
    uStack_c0 = uVal_20;
    func_0x1806aa960(pU64_18,_Str,sz_12);
    pU64_18[sz_12] = 0;
    pU64_18 = local_d8;
    ptr3_U64_19 = &local_88;
    func_0x1801ccd70(local_90,pU64_18,ptr3_U64_19,pU64_2,uVal_21,local_318,0);
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    local_2a0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_2a0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_2d8);
    }
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xb5);
    uVal_21 = *pU64_2;
    local_88 = _DAT_1806bd6ca;
    uStack_80 = (uint8_t)_UNK_1806bd6d2;
    uStack_7f = (uint16_t)((uint64_t)_UNK_1806bd6d2 >> 8);
    uStack_7d = (uint8_t)((uint64_t)_UNK_1806bd6d2 >> 0x18);
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806bd6d2 >> 0x20);
    uStack_7b = (uint16_t)((uint64_t)_UNK_1806bd6d2 >> 0x28);
    uStack_79 = 0xf8;
    uStack_78 = 0xbb;
    uStack_77 = 0xd596;
    uStack_75 = 0xbf;
    uStack_74 = 0x4a;
    uStack_73 = 0x21df;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7cec) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7cec) = 1;
      func_0x18007d3c0(lVal_14 + 0x7cd1,&local_88);
      func_0x180673140(&LAB_180212310);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7cd1);
    func_0x180217640(fnPtr_3);
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_3);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea104;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_4c = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_4c = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    uStack_c0 = uVal_20;
    local_c8 = (uint8_t  [8])sz_12;
    func_0x1806aa960(pU64_18,fnPtr_3,sz_12);
    pU64_18[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7cf8) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7cf8) = 1;
      *(uint8_t *)(lVal_14 + 0x7cf4) = 1;
      *(uint32_t *)(lVal_14 + 0x7cf0) = 0xf7b1a49d;
      func_0x180673140(&LAB_180212340);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_14 + 0x7cf0);
    if (*(char *)(lVal_14 + 0x7cf4) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xf7f5f1d5;
      *(uint8_t *)(lVal_14 + 0x7cf4) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea111;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_57 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_57 = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,pU64_1,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    ptr3_U64_19 = &local_88;
    pU64_18 = local_d8;
    func_0x1801ccd70(local_90,ptr3_U64_19,pU64_18,pU64_2,uVal_21,local_2d8,0);
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    local_260 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_260 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_298);
    }
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xb6);
    uVal_21 = *pU64_2;
    uStack_78 = (uint8_t)((uint)_DAT_1806bd6ee >> 0x18);
    uStack_77 = (uint16_t)_UNK_1806bd6f2;
    uStack_75 = (uint8_t)((uint)_UNK_1806bd6f2 >> 0x10);
    uStack_74 = (uint8_t)((uint)_UNK_1806bd6f2 >> 0x18);
    uStack_73 = (uint16_t)_UNK_1806bd6f6;
    uStack_71 = (uint8_t)((uint)_UNK_1806bd6f6 >> 0x10);
    uStack_70 = (uint8_t)((uint)_UNK_1806bd6f6 >> 0x18);
    uStack_6f = (uint16_t)_UNK_1806bd6fa;
    uStack_6d = (uint8_t)((uint)_UNK_1806bd6fa >> 0x10);
    local_88 = _DAT_1806bd6e1;
    uStack_80 = (uint8_t)_UNK_1806bd6e9;
    uStack_7f = (uint16_t)((uint5)_UNK_1806bd6e9 >> 8);
    uStack_7d = (uint8_t)((uint5)_UNK_1806bd6e9 >> 0x18);
    uStack_7c = (uint8_t)((uint5)_UNK_1806bd6e9 >> 0x20);
    uStack_7b = (uint16_t)_DAT_1806bd6ee;
    uStack_79 = (uint8_t)((uint)_DAT_1806bd6ee >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7d18) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7d18) = 1;
      func_0x18007cc40(lVal_14 + 0x7cf9,&local_88);
      func_0x180673140(&LAB_180212360);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7cf9);
    func_0x1801bdd90(fnPtr_3);
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_3);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea11e;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_4d = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_4d = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    uStack_c0 = uVal_20;
    local_c8 = (uint8_t  [8])sz_12;
    func_0x1806aa960(pU64_18,fnPtr_3,sz_12);
    pU64_18[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7d2c) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7d2c) = 1;
      *(uint8_t *)(lVal_14 + 0x7d2a) = 1;
      *(uint64_t *)(lVal_14 + 0x7d20) = 0xd102c513bb25d;
      *(uint16_t *)(lVal_14 + 0x7d28) = 0xd37e;
      func_0x180673140(&LAB_180212390);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_14 + 0x7d20);
    if (*(char *)(lVal_14 + 0x7d2a) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x656173452549d30d;
      *(byte *)(lVal_14 + 0x7d28) = *(byte *)(lVal_14 + 0x7d28) ^ 0xd;
      *(byte *)(lVal_14 + 0x7d29) = *(byte *)(lVal_14 + 0x7d29) ^ 0xd3;
      *(uint8_t *)(lVal_14 + 0x7d2a) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen((char *)pU64_4);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea12b;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_58 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_58 = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,pU64_4,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    ptr3_U64_19 = &local_88;
    pU64_18 = local_d8;
    func_0x1801ccd70(local_90,ptr3_U64_19,pU64_18,pU64_2,uVal_21,local_298,0);
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    local_220 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_220 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_258);
    }
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xb7);
    uVal_21 = *pU64_2;
    local_88 = _DAT_1806bd6fe;
    uStack_80 = (uint8_t)_UNK_1806bd706;
    uStack_7f = (uint16_t)((uint64_t)_UNK_1806bd706 >> 8);
    uStack_7d = (uint8_t)((uint64_t)_UNK_1806bd706 >> 0x18);
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806bd706 >> 0x20);
    uStack_7b = (uint16_t)((uint64_t)_UNK_1806bd706 >> 0x28);
    uStack_79 = 0x86;
    uStack_78 = 0xab;
    uStack_77 = 0xf514;
    uStack_75 = 0xd2;
    uStack_74 = 0xea;
    uStack_73 = 0xc7c6;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7d48) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7d48) = 1;
      func_0x18007d3c0(lVal_14 + 0x7d2d,&local_88);
      func_0x180673140(&LAB_1802123c0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7d2d);
    func_0x1801bf0d0(fnPtr_3);
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_3);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea138;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_4e = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_4e = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    uStack_c0 = uVal_20;
    local_c8 = (uint8_t  [8])sz_12;
    func_0x1806aa960(pU64_18,fnPtr_3,sz_12);
    pU64_18[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7d54) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7d54) = 1;
      *(uint8_t *)(lVal_14 + 0x7d50) = 1;
      *(uint32_t *)(lVal_14 + 0x7d4c) = 0xa1ac1896;
      func_0x180673140(&LAB_1802123f0);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_14 + 0x7d4c);
    if (*(char *)(lVal_14 + 0x7d50) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xa1d573c5;
      *(uint8_t *)(lVal_14 + 0x7d50) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea145;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_59 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_59 = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,pU64_1,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    ptr3_U64_19 = &local_88;
    pU64_18 = local_d8;
    func_0x1801ccd70(local_90,ptr3_U64_19,pU64_18,pU64_2,uVal_21,local_258,0);
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    local_1e0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_1e0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_218);
    }
    pU64_16 = local_90 + 0x17;
    uVal_21 = *(uint8_t *)pU64_16;
    uStack_78 = (uint8_t)((uint)_UNK_1806bd724 >> 8);
    uStack_77 = (uint16_t)((uint)_UNK_1806bd724 >> 0x10);
    uStack_75 = (uint8_t)_UNK_1806bd728;
    uStack_74 = (uint8_t)((uint)_UNK_1806bd728 >> 8);
    uStack_73 = (uint16_t)((uint)_UNK_1806bd728 >> 0x10);
    uStack_71 = (uint8_t)_UNK_1806bd72c;
    uStack_70 = (uint8_t)((uint)_UNK_1806bd72c >> 8);
    uStack_6f = (uint16_t)((uint)_UNK_1806bd72c >> 0x10);
    local_88 = _DAT_1806bd715;
    uStack_80 = (uint8_t)_UNK_1806bd71d;
    uStack_7f = (uint16_t)((uint3)_UNK_1806bd71d >> 8);
    uStack_7d = (uint8_t)_DAT_1806bd720;
    uStack_7c = (uint8_t)((uint)_DAT_1806bd720 >> 8);
    uStack_7b = (uint16_t)((uint)_DAT_1806bd720 >> 0x10);
    uStack_79 = UNK_1806bd724;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7d74) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7d74) = 1;
      func_0x18007c9b0(lVal_14 + 0x7d55,&local_88);
      func_0x180673140(&LAB_180212410);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7d55);
    func_0x180217690(fnPtr_3);
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_3);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea152;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_4f = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_4f = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    uStack_c0 = uVal_20;
    local_c8 = (uint8_t  [8])sz_12;
    func_0x1806aa960(pU64_18,fnPtr_3,sz_12);
    pU64_18[sz_12] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7d84) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7d84) = 1;
      *(uint8_t *)(lVal_14 + 0x7d80) = 1;
      *(uint64_t *)(lVal_14 + 0x7d78) = 0x89874e5131c8d462;
      func_0x180673140(&LAB_180212440);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_14 + 0x7d78);
    if (*(char *)(lVal_14 + 0x7d80) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x89f52b3945a9b135;
      *(uint8_t *)(lVal_14 + 0x7d80) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen((char *)pU64_4);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea15f;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_5a = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_5a = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,pU64_4,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    ptr3_U64_19 = &local_88;
    pU64_18 = local_d8;
    func_0x1801ccd70(local_90,ptr3_U64_19,pU64_18,pU64_16,uVal_21,local_218,0);
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    local_1a0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_1a0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_1d8);
    }
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xb9);
    uVal_21 = *pU64_2;
    local_c8._4_4_ = _UNK_1806bd744;
    local_c8._0_4_ = _DAT_1806bd740;
    uStack_c0._0_4_ = _UNK_1806bd748;
    uStack_c0._4_4_ = _UNK_1806bd74c;
    local_d8._8_8_ = _UNK_1806bd738;
    local_d8._0_8_ = _DAT_1806bd730;
    uStack_b8 = CONCAT22(uStack_b8._2_2_,0x313c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7da8) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7da8) = 1;
      func_0x1800f15f0(lVal_14 + 0x7d85,local_d8);
      func_0x180673140(&LAB_180212460);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7d85);
    func_0x1802176e0(fnPtr_3);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen(fnPtr_3);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea16c;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_50 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_50 = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,fnPtr_3,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7dc0) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7dc0) = 1;
      *(uint8_t *)(lVal_14 + 0x7dbe) = 1;
      *(uint64_t *)(lVal_14 + 0x7db0) = 0x91f06146ad4f5e15;
      *(uint32_t *)(lVal_14 + 0x7db8) = 0xb8514320;
      *(uint16_t *)(lVal_14 + 0x7dbc) = 0xd5e;
      func_0x180673140(&LAB_180212490);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_14 + 0x7db0);
    if (*(char *)(lVal_14 + 0x7dbe) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0xe7bf0d27d93d3145;
      *(uint *)(lVal_14 + 0x7db8) = *(uint *)(lVal_14 + 0x7db8) ^ 0xd93d3145;
      *(byte *)(lVal_14 + 0x7dbc) = *(byte *)(lVal_14 + 0x7dbc) ^ 0x27;
      *(byte *)(lVal_14 + 0x7dbd) = *(byte *)(lVal_14 + 0x7dbd) ^ 0xd;
      *(uint8_t *)(lVal_14 + 0x7dbe) = 0;
    }
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen((char *)pU64_4);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea179;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_5b = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_5b = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    local_c8 = (uint8_t  [8])sz_12;
    uStack_c0 = uVal_20;
    func_0x1806aa960(pU64_18,pU64_4,sz_12);
    pU64_18[sz_12] = 0;
    pU64_18 = local_d8;
    ptr3_U64_19 = &local_88;
    func_0x1801ccd70(local_90,pU64_18,ptr3_U64_19,pU64_2,uVal_21,local_1d8,0);
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    local_160 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_160 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_198);
    }
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xba);
    uVal_21 = *pU64_2;
    local_c8._4_4_ = _UNK_1806bd766;
    local_c8._0_4_ = _DAT_1806bd762;
    uStack_c0._0_4_ = _UNK_1806bd76a;
    uStack_c0._4_4_ = _UNK_1806bd76e;
    local_d8._8_8_ = _UNK_1806bd75a;
    local_d8._0_8_ = _DAT_1806bd752;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7de4) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7de4) = 1;
      func_0x18008f8e0(lVal_14 + 0x7dc1,local_d8);
      func_0x180673140(&LAB_1802124c0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7dc1);
    func_0x1801bf1c0(fnPtr_3);
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen(fnPtr_3);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea186;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_51 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_51 = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,fnPtr_3,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7df0) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7df0) = 1;
      *(uint32_t *)(lVal_14 + 0x7de8) = 0x6e3f1e5b;
      *(uint16_t *)(lVal_14 + 0x7dec) = 0x1bf;
      func_0x180673140(&LAB_1802124f0);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_14 + 0x7de8);
    if (*(char *)(lVal_14 + 0x7ded) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xb4d771d;
      *(byte *)(lVal_14 + 0x7dec) = *(byte *)(lVal_14 + 0x7dec) ^ 0xbf;
      *(uint8_t *)(lVal_14 + 0x7ded) = 0;
    }
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea193;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_5c = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_5c = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    local_c8 = (uint8_t  [8])sz_12;
    uStack_c0 = uVal_20;
    func_0x1806aa960(pU64_18,pU64_1,sz_12);
    pU64_18[sz_12] = 0;
    pU64_18 = local_d8;
    ptr3_U64_19 = &local_88;
    func_0x1801ccd70(local_90,pU64_18,ptr3_U64_19,pU64_2,uVal_21,local_198,0);
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    local_120 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_120 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_158);
    }
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xbb);
    uVal_21 = *pU64_2;
    uStack_a8 = UNK_1806bd7a2;
    uStack_a7 = _UNK_1806bd7a3;
    uStack_a3 = _UNK_1806bd7a7;
    uStack_9f = _UNK_1806bd7ab;
    uStack_b8 = _DAT_1806bd792;
    uStack_b4 = _UNK_1806bd796;
    uStack_b0 = _UNK_1806bd79a;
    uStack_ac = _UNK_1806bd79e;
    local_c8._4_4_ = _UNK_1806bd786;
    local_c8._0_4_ = _DAT_1806bd782;
    uStack_c0._0_4_ = _UNK_1806bd78a;
    uStack_c0._4_4_ = _UNK_1806bd78e;
    local_d8._8_8_ = _UNK_1806bd77a;
    local_d8._0_8_ = _DAT_1806bd772;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7e30) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7e30) = 1;
      func_0x1801b4920(lVal_14 + 0x7df1,local_d8);
      func_0x180673140(&LAB_180212520);
    }
    uVal_10 = _UNK_1806b2dac;
    uVal_9 = _UNK_1806b2da8;
    uVal_8 = _UNK_1806b2da4;
    uVal_7 = _DAT_1806b2da0;
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_14 + 0x7df1);
    if (*(char *)(lVal_14 + 0x7e2e) == '\x01') {
      uVal_23 = *(uint *)(lVal_14 + 0x7df5) ^ _UNK_1806b2da4;
      uVal_24 = *(uint *)(lVal_14 + 0x7df9) ^ _UNK_1806b2da8;
      uVal_25 = *(uint *)(lVal_14 + 0x7dfd) ^ _UNK_1806b2dac;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2da0;
      *(uint *)(lVal_14 + 0x7df5) = uVal_23;
      *(uint *)(lVal_14 + 0x7df9) = uVal_24;
      *(uint *)(lVal_14 + 0x7dfd) = uVal_25;
      *(uint *)(lVal_14 + 0x7e01) = *(uint *)(lVal_14 + 0x7e01) ^ uVal_7;
      *(uint *)(lVal_14 + 0x7e05) = *(uint *)(lVal_14 + 0x7e05) ^ uVal_8;
      *(uint *)(lVal_14 + 0x7e09) = *(uint *)(lVal_14 + 0x7e09) ^ uVal_9;
      *(uint *)(lVal_14 + 0x7e0d) = *(uint *)(lVal_14 + 0x7e0d) ^ uVal_10;
      *(uint *)(lVal_14 + 0x7e11) = *(uint *)(lVal_14 + 0x7e11) ^ uVal_7;
      *(uint *)(lVal_14 + 0x7e15) = *(uint *)(lVal_14 + 0x7e15) ^ uVal_8;
      *(uint *)(lVal_14 + 0x7e19) = *(uint *)(lVal_14 + 0x7e19) ^ uVal_9;
      *(uint *)(lVal_14 + 0x7e1d) = *(uint *)(lVal_14 + 0x7e1d) ^ uVal_10;
      *(uint64_t *)(lVal_14 + 0x7e21) = *(uint64_t *)(lVal_14 + 0x7e21) ^ SUB168(_DAT_1806bb120,0);
      *(byte *)(lVal_14 + 0x7e29) = *(byte *)(lVal_14 + 0x7e29) ^ 0x2d;
      *(byte *)(lVal_14 + 0x7e2a) = *(byte *)(lVal_14 + 0x7e2a) ^ 0xe3;
      *(byte *)(lVal_14 + 0x7e2b) = *(byte *)(lVal_14 + 0x7e2b) ^ 0xcf;
      *(byte *)(lVal_14 + 0x7e2c) = *(byte *)(lVal_14 + 0x7e2c) ^ 0x19;
      *(byte *)(lVal_14 + 0x7e2d) = *(byte *)(lVal_14 + 0x7e2d) ^ 0xbb;
      *(uint8_t *)(lVal_14 + 0x7e2e) = 0;
    }
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ***)0x0;
    uStack_80 = 0;
    uStack_7f = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    sz_12 = strlen((char *)pU64_1);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea1a0;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_52 = 1;
        ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr3_U64_19;
      }
      else {
        local_52 = 1;
        ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
        ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_19[-1] = ptr2_U64_15;
        local_88 = ptr3_U64_19;
      }
    }
    uStack_78 = (uint8_t)sz_12;
    uStack_77 = (uint16_t)(sz_12 >> 8);
    uStack_75 = (uint8_t)(sz_12 >> 0x18);
    uStack_74 = (uint8_t)(sz_12 >> 0x20);
    uStack_73 = (uint16_t)(sz_12 >> 0x28);
    uStack_71 = (uint8_t)(sz_12 >> 0x38);
    uStack_70 = (uint8_t)uVal_20;
    uStack_6f = (uint16_t)(uVal_20 >> 8);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(ptr3_U64_19,pU64_1,sz_12);
    *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7e44) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7e44) = 1;
      *(uint8_t *)(lVal_14 + 0x7e42) = 1;
      *(uint64_t *)(lVal_14 + 0x7e38) = 0xb7fa81cf71a88a61;
      *(uint16_t *)(lVal_14 + 0x7e40) = 0xe34a;
      func_0x180673140(&LAB_180212560);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_14 + 0x7e38);
    if (*(char *)(lVal_14 + 0x7e42) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0xd993efbb19cfe32d;
      *(byte *)(lVal_14 + 0x7e40) = *(byte *)(lVal_14 + 0x7e40) ^ 0x2d;
      *(byte *)(lVal_14 + 0x7e41) = *(byte *)(lVal_14 + 0x7e41) ^ 0xe3;
      *(uint8_t *)(lVal_14 + 0x7e42) = 0;
    }
    _local_c8 = (uint8_t  [16])0x0;
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen((char *)pU64_4);
    if ((int64_t)sz_12 < 0) goto LAB_1801ea1ad;
    uVal_20 = 0xf;
    if (0xf < sz_12) {
      uVal_13 = sz_12 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_5d = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_5d = 1;
        lVal_14 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_14;
      }
      local_d8._0_8_ = pU64_18;
    }
    uStack_c0 = uVal_20;
    local_c8 = (uint8_t  [8])sz_12;
    func_0x1806aa960(pU64_18,pU64_4,sz_12);
    pU64_18[sz_12] = 0;
    pU64_18 = local_d8;
    ptr3_U64_19 = &local_88;
    func_0x1801ccd70(local_90,pU64_18,ptr3_U64_19,pU64_2,uVal_21,local_158,0);
    if (0xf < uStack_c0) {
      uVal_20 = uStack_c0 + 1;
      lVal_14 = local_d8._0_8_;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) goto LAB_1801ea0af;
        uVal_20 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
    if (0xf < uVal_20) {
      uVal_13 = uVal_20 + 1;
      ptr3_U64_17 = local_88;
      if (0xfff < uVal_13) {
        ptr3_U64_17 = (uint64_t ***)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_17))) goto LAB_1801ea0af;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_17,uVal_13);
    }
    local_e0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_e0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_118);
    }
    pU64_2 = (uint8_t *)((int64_t)local_90 + 0xbc);
    uVal_21 = *pU64_2;
    local_88 = _DAT_1806bd7af;
    uStack_80 = (uint8_t)_UNK_1806bd7b7;
    uStack_7f = (uint16_t)((uint64_t)_UNK_1806bd7b7 >> 8);
    uStack_7d = (uint8_t)((uint64_t)_UNK_1806bd7b7 >> 0x18);
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806bd7b7 >> 0x20);
    uStack_7b = (uint16_t)((uint64_t)_UNK_1806bd7b7 >> 0x28);
    uStack_79 = 0x36;
    uStack_78 = 0x2b;
    uStack_77 = 0xe7ee;
    uStack_75 = 0xb5;
    uStack_74 = 0x1c;
    uStack_73 = 0x692e;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7e60) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x7e60) = 1;
      func_0x18007d3c0(lVal_14 + 0x7e45,&local_88);
      func_0x180673140(&LAB_180212590);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7e45);
    func_0x180217710(fnPtr_3);
    local_d8 = (uint8_t  [16])0x0;
    sz_12 = strlen(fnPtr_3);
    if (-1 < (int64_t)sz_12) {
      uVal_20 = 0xf;
      if (0xf < sz_12) {
        uVal_13 = sz_12 | 0xf;
        uVal_20 = 0x16;
        if (0x16 < uVal_13) {
          uVal_20 = uVal_13;
        }
        if (uVal_13 < 0xfff) {
          local_53 = 1;
          pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
        }
        else {
          local_53 = 1;
          lVal_14 = func_0x180672de0(uVal_20 + 0x28);
          pU64_18 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_18 + -8) = lVal_14;
        }
        local_d8._0_8_ = pU64_18;
      }
      uStack_c0 = uVal_20;
      local_c8 = (uint8_t  [8])sz_12;
      func_0x1806aa960(pU64_18,fnPtr_3,sz_12);
      pU64_18[sz_12] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7e6c) == '\0') {
        lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_14 + 0x7e6c) = 1;
        *(uint8_t *)(lVal_14 + 0x7e68) = 1;
        *(uint32_t *)(lVal_14 + 0x7e64) = 0xd3a0e603;
        func_0x180673140(&LAB_1802125c0);
      }
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_14 + 0x7e64);
      if (*(char *)(lVal_14 + 0x7e68) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xd3c78945;
        *(uint8_t *)(lVal_14 + 0x7e68) = 0;
      }
      local_88 = (uint64_t ***)0x0;
      uStack_80 = 0;
      uStack_7f = 0;
      uStack_7d = 0;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_79 = 0;
      sz_12 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_12) {
        uVal_20 = 0xf;
        if (0xf < sz_12) {
          uVal_13 = sz_12 | 0xf;
          uVal_20 = 0x16;
          if (0x16 < uVal_13) {
            uVal_20 = uVal_13;
          }
          if (uVal_13 < 0xfff) {
            local_5e = 1;
            ptr3_U64_19 = (uint64_t ***)func_0x180672de0(uVal_20 + 1);
            local_88 = ptr3_U64_19;
          }
          else {
            local_5e = 1;
            ptr2_U64_15 = (uint64_t **)func_0x180672de0(uVal_20 + 0x28);
            ptr3_U64_19 = (uint64_t ***)((int64_t)ptr2_U64_15 + 0x27U & 0xffffffffffffffe0);
            ptr3_U64_19[-1] = ptr2_U64_15;
            local_88 = ptr3_U64_19;
          }
        }
        uStack_78 = (uint8_t)sz_12;
        uStack_77 = (uint16_t)(sz_12 >> 8);
        uStack_75 = (uint8_t)(sz_12 >> 0x18);
        uStack_74 = (uint8_t)(sz_12 >> 0x20);
        uStack_73 = (uint16_t)(sz_12 >> 0x28);
        uStack_71 = (uint8_t)(sz_12 >> 0x38);
        uStack_70 = (uint8_t)uVal_20;
        uStack_6f = (uint16_t)(uVal_20 >> 8);
        uStack_6d = (uint8_t)(uVal_20 >> 0x18);
        uStack_6c = (uint32_t)(uVal_20 >> 0x20);
        func_0x1806aa960(ptr3_U64_19,pU64_1,sz_12);
        *(uint8_t *)((int64_t)ptr3_U64_19 + sz_12) = 0;
        func_0x1801ccd70(local_90,&local_88,local_d8,pU64_2,uVal_21,local_118,0);
        uVal_20 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,uStack_70)));
        if (0xf < uVal_20) {
          uVal_13 = uVal_20 + 1;
          ptr3_U64_19 = local_88;
          if (0xfff < uVal_13) {
            ptr3_U64_19 = (uint64_t ***)local_88[-1];
            if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr3_U64_19)))
            goto LAB_1801ea0af;
            uVal_13 = uVal_20 + 0x28;
          }
          thunk_FUN_180695dd0(ptr3_U64_19,uVal_13);
        }
        if (0xf < uStack_c0) {
          uVal_20 = uStack_c0 + 1;
          lVal_14 = local_d8._0_8_;
          if (0xfff < uVal_20) {
            lVal_14 = *(int64_t *)(local_d8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_14)) {
LAB_1801ea0af:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_20 = uStack_c0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_14,uVal_20);
        }
        return local_90;
      }
      goto LAB_1801ea1c7;
    }
  }
  local_53 = 1;
  func_0x18007ba70();
LAB_1801ea1c7:
  local_5e = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_16 = (uint64_t *)(*fnPtr_6)();
  return pU64_16;
}

// Unwind@1801ea1e0
void Unwind_1801ea1e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1801ea230
void Unwind_1801ea230(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7c54) = 0;
  *(uint8_t *)(param_2 + 0x38f) = 1;
  return;
}

// Unwind@1801ea280
void Unwind_1801ea280(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xb8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@1801ea2d0
void Unwind_1801ea2d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7c80) = 0;
  *(uint8_t *)(param_2 + 0x38e) = 1;
  return;
}

// Unwind@1801ea320
void Unwind_1801ea320(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xf8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@1801ea370
void Unwind_1801ea370(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7cb0) = 0;
  *(uint8_t *)(param_2 + 0x38d) = 1;
  return;
}

// Unwind@1801ea3c0
void Unwind_1801ea3c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x138);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x100));
    *(uint64_t *)(param_2 + 0x138) = 0;
  }
  return;
}

// Unwind@1801ea420
void Unwind_1801ea420(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7cec) = 0;
  *(uint8_t *)(param_2 + 0x38c) = 1;
  return;
}

// Unwind@1801ea470
void Unwind_1801ea470(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x178);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x140));
    *(uint64_t *)(param_2 + 0x178) = 0;
  }
  return;
}

// Unwind@1801ea4d0
void Unwind_1801ea4d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7d18) = 0;
  *(uint8_t *)(param_2 + 0x38b) = 1;
  return;
}

// Unwind@1801ea520
void Unwind_1801ea520(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1b8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
    *(uint64_t *)(param_2 + 0x1b8) = 0;
  }
  return;
}

// Unwind@1801ea580
void Unwind_1801ea580(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7d48) = 0;
  *(uint8_t *)(param_2 + 0x38a) = 1;
  return;
}

// Unwind@1801ea5d0
void Unwind_1801ea5d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1f8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c0));
    *(uint64_t *)(param_2 + 0x1f8) = 0;
  }
  return;
}

// Unwind@1801ea630
void Unwind_1801ea630(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7d74) = 0;
  *(uint8_t *)(param_2 + 0x389) = 1;
  return;
}

// Unwind@1801ea680
void Unwind_1801ea680(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x238);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x200));
    *(uint64_t *)(param_2 + 0x238) = 0;
  }
  return;
}

// Unwind@1801ea6e0
void Unwind_1801ea6e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7da8) = 0;
  *(uint8_t *)(param_2 + 0x388) = 1;
  return;
}

// Unwind@1801ea730
void Unwind_1801ea730(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x278);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x240));
    *(uint64_t *)(param_2 + 0x278) = 0;
  }
  return;
}

// Unwind@1801ea790
void Unwind_1801ea790(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7de4) = 0;
  *(uint8_t *)(param_2 + 0x387) = 1;
  return;
}

// Unwind@1801ea7e0
void Unwind_1801ea7e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2b8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x280));
    *(uint64_t *)(param_2 + 0x2b8) = 0;
  }
  return;
}

// Unwind@1801ea840
void Unwind_1801ea840(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7e30) = 0;
  *(uint8_t *)(param_2 + 0x386) = 1;
  return;
}

// Unwind@1801ea890
void Unwind_1801ea890(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2f8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2c0));
    *(uint64_t *)(param_2 + 0x2f8) = 0;
  }
  return;
}

// Unwind@1801ea8f0
void Unwind_1801ea8f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7e60) = 0;
  *(uint8_t *)(param_2 + 0x385) = 1;
  return;
}

// Unwind@1801ea940
void Unwind_1801ea940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@1801ea980
void Unwind_1801ea980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 900) = 0;
  return;
}

// Unwind@1801ea9c0
void Unwind_1801ea9c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 900);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x38f) = uVal_1;
  return;
}

// Unwind@1801eaa10
void Unwind_1801eaa10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x38f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1801eaa70
void Unwind_1801eaa70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 899) = 0;
  return;
}

// Unwind@1801eaab0
void Unwind_1801eaab0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 899);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x38e) = uVal_1;
  return;
}

// Unwind@1801eab00
void Unwind_1801eab00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x38e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@1801eab60
void Unwind_1801eab60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x382) = 0;
  return;
}

// Unwind@1801eaba0
void Unwind_1801eaba0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x382);
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x38d) = uVal_1;
  return;
}

// Unwind@1801eabf0
void Unwind_1801eabf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x38d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@1801eac50
void Unwind_1801eac50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x381) = 0;
  return;
}

// Unwind@1801eac90
void Unwind_1801eac90(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x381);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x38c) = uVal_1;
  return;
}

// Unwind@1801eace0
void Unwind_1801eace0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x38c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x138), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x100));
    *(uint64_t *)(param_2 + 0x138) = 0;
  }
  return;
}

// Unwind@1801ead40
void Unwind_1801ead40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x380) = 0;
  return;
}

// Unwind@1801ead80
void Unwind_1801ead80(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x380);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x38b) = uVal_1;
  return;
}

// Unwind@1801eadd0
void Unwind_1801eadd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x38b) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x178), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x140));
    *(uint64_t *)(param_2 + 0x178) = 0;
  }
  return;
}

// Unwind@1801eae30
void Unwind_1801eae30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x37f) = 0;
  return;
}

// Unwind@1801eae70
void Unwind_1801eae70(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x37f);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x38a) = uVal_1;
  return;
}

// Unwind@1801eaec0
void Unwind_1801eaec0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x38a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
    *(uint64_t *)(param_2 + 0x1b8) = 0;
  }
  return;
}

// Unwind@1801eaf20
void Unwind_1801eaf20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x37e) = 0;
  return;
}

// Unwind@1801eaf60
void Unwind_1801eaf60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x37e);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x389) = uVal_1;
  return;
}

// Unwind@1801eafb0
void Unwind_1801eafb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x389) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1f8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c0));
    *(uint64_t *)(param_2 + 0x1f8) = 0;
  }
  return;
}

// Unwind@1801eb010
void Unwind_1801eb010(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x37d) = 0;
  return;
}

// Unwind@1801eb050
void Unwind_1801eb050(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x37d);
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x388) = uVal_1;
  return;
}

// Unwind@1801eb0a0
void Unwind_1801eb0a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x388) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x238), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x200));
    *(uint64_t *)(param_2 + 0x238) = 0;
  }
  return;
}

// Unwind@1801eb100
void Unwind_1801eb100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x37c) = 0;
  return;
}

// Unwind@1801eb140
void Unwind_1801eb140(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x37c);
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x387) = uVal_1;
  return;
}

// Unwind@1801eb190
void Unwind_1801eb190(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x387) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x278), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x240));
    *(uint64_t *)(param_2 + 0x278) = 0;
  }
  return;
}

// Unwind@1801eb1f0
void Unwind_1801eb1f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x37b) = 0;
  return;
}

// Unwind@1801eb230
void Unwind_1801eb230(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x37b);
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x386) = uVal_1;
  return;
}

// Unwind@1801eb280
void Unwind_1801eb280(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x386) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x280));
    *(uint64_t *)(param_2 + 0x2b8) = 0;
  }
  return;
}

// Unwind@1801eb2e0
void Unwind_1801eb2e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x350);
  *(uint8_t *)(param_2 + 0x37a) = 0;
  return;
}

// Unwind@1801eb320
void Unwind_1801eb320(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x37a);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x385) = uVal_1;
  return;
}

// Unwind@1801eb370
void Unwind_1801eb370(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x385) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2f8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2c0));
    *(uint64_t *)(param_2 + 0x2f8) = 0;
  }
  return;
}

// Unwind@1801eb3d0
void Unwind_1801eb3d0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x348));
  return;
}

// Unwind@1801eb410
void Unwind_1801eb410(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7c34) = 0;
  return;
}

// Unwind@1801eb700
void Unwind_1801eb700(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7e94) = 0;
  return;
}

// Unwind@1801ecb60
void Unwind_1801ecb60(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_2 + 0x198);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x180);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 400) = 0;
  *(uint64_t *)(param_2 + 0x198) = 0xf;
  *(uint8_t *)(param_2 + 0x180) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x178);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x160);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x170) = 0;
  *(uint64_t *)(param_2 + 0x178) = 0xf;
  *(uint8_t *)(param_2 + 0x160) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x158);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x140);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x150) = 0;
  *(uint64_t *)(param_2 + 0x158) = 0xf;
  *(uint8_t *)(param_2 + 0x140) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x138);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x120);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x130) = 0;
  *(uint64_t *)(param_2 + 0x138) = 0xf;
  *(uint8_t *)(param_2 + 0x120) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0x118);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x100);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x110) = 0;
  *(uint64_t *)(param_2 + 0x118) = 0xf;
  *(uint8_t *)(param_2 + 0x100) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0xf8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0xe0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0xf0) = 0;
  *(uint64_t *)(param_2 + 0xf8) = 0xf;
  *(uint8_t *)(param_2 + 0xe0) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0xd8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0xc0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0xd0) = 0;
  *(uint64_t *)(param_2 + 0xd8) = 0xf;
  *(uint8_t *)(param_2 + 0xc0) = 0;
  uVal_1 = *(uint64_t *)(param_2 + 0xb8);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0xa0);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ecf76;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_1801ecf76:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x50) = 0;
  *(uint64_t *)(param_2 + 0x58) = 0xf;
  *(uint8_t *)(param_2 + 0x40) = 0;
  *(int64_t *)(param_2 + 0x1a8) = param_2 + 0x180;
  *(uint8_t *)(param_2 + 0x1b7) = 1;
  return;
}

// Unwind@1801ecf80
void Unwind_1801ecf80(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x1a8);
  if ((param_2 + 0x40 == lVal_1 | *(byte *)(param_2 + 0x1b7) & 1) == 0) {
    do {
      lVal_1 = lVal_1 + -0x20;
      func_0x180001e70(lVal_1);
    } while (lVal_1 != param_2 + 0x40);
  }
  return;
}

// Unwind@1801ecfe0
void Unwind_1801ecfe0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7ec8) = 0;
  *(int64_t *)(param_2 + 0x1a8) = param_2 + 0x80;
  *(uint8_t *)(param_2 + 0x1b7) = 0;
  return;
}

// Unwind@1801ed040
void Unwind_1801ed040(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7f18) = 0;
  *(int64_t *)(param_2 + 0x1a8) = param_2 + 0x120;
  *(uint8_t *)(param_2 + 0x1b7) = 0;
  return;
}

// Unwind@1801ed6a0
void Unwind_1801ed6a0(void)
{
  func_0x180672f60(&DAT_18083fa80);
  return;
}

// Unwind@1801ed6d0
void Unwind_1801ed6d0(void)
{
  func_0x180672f60(&DAT_18083fa90);
  return;
}

// func_0x1801ed700
int64_t func_0x1801ed700(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xed44a1a359aa413) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x6ccfd407771a4be1) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801ed7a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x6ccfd407771a4be1);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801ed7ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x6ccfd407771a4be1);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x1bd59fe7U) + -0x1a;
  }
LAB_1801ed7a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801ed7ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1801ed7e0
int64_t func_0x1801ed7e0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x6f6282151cdfda5) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x792ec1f437ae1c55) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1801ed884;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x792ec1f437ae1c55);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1801ed8aa;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x792ec1f437ae1c55);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x4e80dda1U) + -0x1c;
  }
LAB_1801ed884:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1801ed8aa:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// Unwind@1801edb40
void Unwind_1801edb40(void)
{
  func_0x180672f60(&DAT_18083faa8);
  return;
}

// Unwind@1801edb70
void Unwind_1801edb70(void)
{
  func_0x180672f60(&DAT_18083fab8);
  return;
}

// func_0x1801edba0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801edba0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  uint8_t *pU64_3;
  byte *pU8_4;
  uint *_Str;
  uint8_t (*_Str_00)[16];
  uint32_t uVal_5;
  func_ptr_t fnPtr_6;
  size_t sz_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t *pU64_10;
  uint8_t *pU64_11;
  uint8_t *pU64_12;
  uint8_t *pU64_13;
  uint8_t uVal_14;
  uint64_t uVal_15;
  uint uVal_17;
  uint uVal_18;
  uint8_t auArr_16 [16];
  uint64_t *pU64_19;
  uint64_t uVal_20;
  uint32_t uVal_21;
  uint32_t uVal_22;
  uint in_stack_fffffffffffffcb8;
  uint uVal_23;
  uint8_t **local_328;
  uint64_t *local_320;
  uint8_t ***local_2f0;
  uint8_t **local_2e8;
  uint64_t *local_2e0;
  uint8_t ***local_2b0;
  uint8_t **local_2a8;
  uint64_t *local_2a0;
  uint8_t ***local_270;
  uint64_t local_268;
  uint64_t uStack_260;
  uint64_t local_258;
  uint64_t uStack_250;
  uint64_t local_248;
  uint64_t uStack_240;
  uint64_t local_238;
  uint64_t uStack_230;
  uint8_t local_228 [56];
  uint64_t local_1f0;
  uint8_t local_1e8 [56];
  uint64_t local_1b0;
  uint8_t local_1a8 [56];
  uint64_t local_170;
  uint8_t local_168 [56];
  uint64_t local_130;
  uint8_t local_128 [56];
  uint64_t local_f0;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint8_t local_d8;
  uint8_t local_c8 [16];
  uint8_t local_b8 [24];
  uint64_t *local_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint16_t local_78;
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
  
  local_60 = 0xfffffffffffffffe;
  local_88._4_4_ = _UNK_1806bd80d;
  local_88._0_4_ = _DAT_1806bd809;
  uStack_80._0_4_ = _UNK_1806bd811;
  uStack_80._4_4_ = _UNK_1806bd815;
  local_98._8_8_ = _UNK_1806bd801;
  local_98._0_8_ = _DAT_1806bd7f9;
  local_78 = 0x5506;
  local_a0 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x7f6c) == '\0') {
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_9 + 0x7f6c) = 1;
    func_0x1800f15f0(lVal_9 + 0x7f49,local_98);
    func_0x180673140(&LAB_180212820);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x7f49);
  func_0x1800f35f0(fnPtr_1);
  _local_88 = (uint8_t  [16])0x0;
  local_98 = (uint8_t  [16])0x0;
  sz_7 = strlen(fnPtr_1);
  if ((int64_t)sz_7 < 0) {
    func_0x18007ba70();
LAB_1801efac1:
    local_61 = 1;
    func_0x18007ba70();
LAB_1801eface:
    local_63 = 1;
    func_0x18007ba70();
LAB_1801efadb:
    local_65 = 1;
    func_0x18007ba70();
LAB_1801efae8:
    local_64 = 1;
    func_0x18007ba70();
LAB_1801efaf5:
    local_67 = 1;
    func_0x18007ba70();
LAB_1801efb02:
    local_66 = 1;
    func_0x18007ba70();
LAB_1801efb0f:
    local_68 = 1;
    func_0x18007ba70();
LAB_1801efb1c:
    local_62 = 1;
    func_0x18007ba70();
LAB_1801efb29:
    local_6a = 1;
    func_0x18007ba70();
LAB_1801efb36:
    local_69 = 1;
    func_0x18007ba70();
LAB_1801efb43:
    local_6c = 1;
    func_0x18007ba70();
LAB_1801efb50:
    local_6b = 1;
    func_0x18007ba70();
LAB_1801efb5d:
    local_6e = 1;
    func_0x18007ba70();
LAB_1801efb6a:
    local_6d = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_7 < 0x10) {
      pU64_12 = local_98;
      uVal_15 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_12;
    }
    local_88 = (uint8_t  [8])sz_7;
    uStack_80 = uVal_15;
    func_0x1806aa960(pU64_12,fnPtr_1,sz_7);
    pU64_12[sz_7] = 0;
    pU64_12 = local_98;
    func_0x1801c2ba0(local_a0,0,4,pU64_12);
    if (0xf < uStack_80) {
      uVal_15 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    *local_a0 = &PTR_LAB_1806bbff0;
    pU64_10 = local_a0 + 0x10;
    *(uint16_t *)(local_a0 + 0x10) = 1;
    uVal_5 = _UNK_1806b669c;
    uVal_22 = _UNK_1806b6698;
    uVal_21 = _UNK_1806b6694;
    *(uint32_t *)((int64_t)local_a0 + 0x84) = _DAT_1806b6690;
    *(uint32_t *)(local_a0 + 0x11) = uVal_21;
    *(uint32_t *)((int64_t)local_a0 + 0x8c) = uVal_22;
    *(uint32_t *)(local_a0 + 0x12) = uVal_5;
    uVal_5 = _UNK_1806bb13c;
    uVal_22 = _UNK_1806bb138;
    uVal_21 = _UNK_1806bb134;
    *(uint32_t *)((int64_t)local_a0 + 0x94) = _DAT_1806bb130;
    *(uint32_t *)(local_a0 + 0x13) = uVal_21;
    *(uint32_t *)((int64_t)local_a0 + 0x9c) = uVal_22;
    *(uint32_t *)(local_a0 + 0x14) = uVal_5;
    *(uint8_t *)((int64_t)local_a0 + 0xa4) = 0;
    uVal_5 = _UNK_1806bb14c;
    uVal_22 = _UNK_1806bb148;
    uVal_21 = _UNK_1806bb144;
    *(uint32_t *)(local_a0 + 0x15) = _DAT_1806bb140;
    *(uint32_t *)((int64_t)local_a0 + 0xac) = uVal_21;
    *(uint32_t *)(local_a0 + 0x16) = uVal_22;
    *(uint32_t *)((int64_t)local_a0 + 0xb4) = uVal_5;
    uVal_20 = _UNK_1806b2888;
    local_a0[0x17] = _DAT_1806b2880;
    local_a0[0x18] = uVal_20;
    *(uint32_t *)(local_a0 + 0x19) = 0x3f800000;
    local_1f0 = 0;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_14 = 1;
    }
    else {
      local_1f0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_228);
      uVal_14 = *(uint8_t *)pU64_10;
    }
    local_88._4_4_ = _UNK_1806bd82f;
    local_88._0_4_ = _DAT_1806bd82b;
    uStack_80._0_4_ = _UNK_1806bd833;
    uStack_80._4_4_ = _UNK_1806bd837;
    local_98._8_8_ = _UNK_1806bd823;
    local_98._0_8_ = _DAT_1806bd81b;
    local_78 = 0x4507;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7f90) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7f90) = 1;
      func_0x1800f15f0(lVal_9 + 0x7f6d,local_98);
      func_0x180673140(&LAB_180212850);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x7f6d);
    func_0x1802177a0(fnPtr_1);
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_7 = strlen(fnPtr_1);
    if ((int64_t)sz_7 < 0) goto LAB_1801efac1;
    if (sz_7 < 0x10) {
      pU64_13 = local_c8;
      uVal_15 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_61 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_61 = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_c8._0_8_ = pU64_13;
    }
    local_b8._8_8_ = uVal_15;
    local_b8._0_8_ = sz_7;
    func_0x1806aa960(pU64_13,fnPtr_1,sz_7);
    pU64_13[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7fa0) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7fa0) = 1;
      *(uint64_t *)(lVal_9 + 0x7f98) = 0x1b5c4dea31c2d20;
      func_0x180673140(&LAB_180212880);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_9 + 0x7f98);
    if (*(char *)(lVal_9 + 0x7f9f) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_9 + 0x7f9d) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_9 + 0x7f9c) << 0x20) ^ SUB168(_DAT_1806ae200,0);
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_1801eface;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_63 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_63 = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_12;
    }
    local_88 = (uint8_t  [8])sz_7;
    uStack_80 = uVal_15;
    func_0x1806aa960(pU64_12,pU64_2,sz_7);
    pU64_12[sz_7] = 0;
    in_stack_fffffffffffffcb8 = in_stack_fffffffffffffcb8 & 0xffffff00;
    pU64_12 = local_98;
    pU64_13 = local_c8;
    func_0x1801ccd70(local_a0,pU64_12,pU64_13,pU64_10,uVal_14,local_228,in_stack_fffffffffffffcb8);
    if (0xf < uStack_80) {
      uVal_15 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_15 = local_b8._8_8_ + 1;
      lVal_9 = local_c8._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    local_1b0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_1b0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_1e8);
    }
    pU64_3 = (uint8_t *)((int64_t)local_a0 + 0x81);
    uVal_14 = *pU64_3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7fa4) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7fa4) = 1;
      *(uint16_t *)(lVal_9 + 0x7fa1) = 0x1dd;
      func_0x180673140(&LAB_1802128b0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_9 + 0x7fa1);
    if (*(char *)(lVal_9 + 0x7fa2) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0xdd;
      *(uint8_t *)(lVal_9 + 0x7fa2) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU8_4);
    if ((int64_t)sz_7 < 0) goto LAB_1801efadb;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_65 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_65 = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_12;
    }
    uStack_80 = uVal_15;
    local_88 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_12,pU8_4,sz_7);
    pU64_12[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7fb8) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7fb8) = 1;
      *(uint64_t *)(lVal_9 + 0x7fa8) = 0x557046a98b00b08f;
      *(uint32_t *)(lVal_9 + 0x7fb0) = 0x9111b4a9;
      *(uint16_t *)(lVal_9 + 0x7fb4) = 0x1cb;
      func_0x180673140(&LAB_1802128d0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_9 + 0x7fa8);
    if (*(char *)(lVal_9 + 0x7fb5) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x750729cbe569d1dd;
      *(uint *)(lVal_9 + 0x7fb0) = *(uint *)(lVal_9 + 0x7fb0) ^ 0xe569d1dd;
      *(byte *)(lVal_9 + 0x7fb4) = *(byte *)(lVal_9 + 0x7fb4) ^ 0xcb;
      *(uint8_t *)(lVal_9 + 0x7fb5) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_1801efae8;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_64 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_64 = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_c8._0_8_ = pU64_13;
    }
    local_b8._8_8_ = uVal_15;
    local_b8._0_8_ = sz_7;
    func_0x1806aa960(pU64_13,pU64_2,sz_7);
    pU64_13[sz_7] = 0;
    in_stack_fffffffffffffcb8 = in_stack_fffffffffffffcb8 & 0xffffff00;
    pU64_12 = local_c8;
    pU64_13 = local_98;
    func_0x1801ccd70(local_a0,pU64_12,pU64_13,pU64_3,uVal_14,local_1e8,in_stack_fffffffffffffcb8);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_15 = local_b8._8_8_ + 1;
      lVal_9 = local_c8._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    if (0xf < uStack_80) {
      uVal_15 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    local_328 = &PTR_LAB_1806baa30;
    local_320 = local_a0;
    local_2f0 = &local_328;
    local_268 = *(uint64_t *)((int64_t)local_a0 + 0x84);
    uStack_260 = *(uint64_t *)((int64_t)local_a0 + 0x8c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7fbc) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7fbc) = 1;
      *(uint16_t *)(lVal_9 + 0x7fb9) = 0x187;
      func_0x180673140(&LAB_180212900);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_9 + 0x7fb9);
    if (*(char *)(lVal_9 + 0x7fba) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x87;
      *(uint8_t *)(lVal_9 + 0x7fba) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU8_4);
    if ((int64_t)sz_7 < 0) goto LAB_1801efaf5;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_67 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_67 = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_13;
    }
    uStack_80 = uVal_15;
    local_88 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_13,pU8_4,sz_7);
    pU64_13[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7fcc) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7fcc) = 1;
      *(uint64_t *)(lVal_9 + 0x7fc0) = 0x2bc4ae85e7dba2d3;
      *(uint32_t *)(lVal_9 + 0x7fc8) = 0x1a3b5e8;
      func_0x180673140(&LAB_180212920);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_9 + 0x7fc0);
    if (*(char *)(lVal_9 + 0x7fcb) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_9 + 0x7fc8) =
           (*(uint *)(lVal_9 + 0x7fc8) & 0xffff | (uint)*(byte *)(lVal_9 + 0x7fca) << 0x10) ^
           SUB164(_DAT_1806b6500,0);
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_1801efb02;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_66 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_66 = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_c8._0_8_ = pU64_12;
    }
    pU64_10 = local_a0;
    lVal_9 = (int64_t)local_a0 + 0x84;
    local_b8._8_8_ = uVal_15;
    local_b8._0_8_ = sz_7;
    func_0x1806aa960(pU64_12,pU64_2,sz_7);
    pU64_12[sz_7] = 0;
    in_stack_fffffffffffffcb8 = in_stack_fffffffffffffcb8 & 0xffffff00;
    pU64_12 = local_c8;
    pU64_13 = local_98;
    func_0x1801cd600(pU64_10,pU64_12,pU64_13,lVal_9,&local_268,&local_328,in_stack_fffffffffffffcb8);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_15 = local_b8._8_8_ + 1;
      lVal_9 = local_c8._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    if (0xf < uStack_80) {
      uVal_15 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    local_170 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_170 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_1a8);
    }
    pU64_10 = (uint64_t *)((int64_t)local_a0 + 0x94);
    local_258 = *pU64_10;
    uStack_250 = *(uint64_t *)((int64_t)local_a0 + 0x9c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7fd0) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7fd0) = 1;
      *(uint16_t *)(lVal_9 + 0x7fcd) = 0x1d5;
      func_0x180673140(&LAB_180212950);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_9 + 0x7fcd);
    if (*(char *)(lVal_9 + 0x7fce) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0xd5;
      *(uint8_t *)(lVal_9 + 0x7fce) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU8_4);
    if ((int64_t)sz_7 < 0) goto LAB_1801efb0f;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_68 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_68 = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_13;
    }
    uStack_80 = uVal_15;
    local_88 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_13,pU8_4,sz_7);
    pU64_13[sz_7] = 0;
    local_e8 = _DAT_1806b9f9f;
    uStack_e0 = _UNK_1806b9fa7;
    local_d8 = 0xd5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7fe4) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7fe4) = 1;
      func_0x18007d2b0(lVal_9 + 0x7fd1,&local_e8);
      func_0x180673140(&LAB_180212970);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_9 + 0x7fd1);
    if (*(char *)(lVal_9 + 0x7fe2) == '\x01') {
      uVal_23 = *(uint *)(lVal_9 + 0x7fd5) ^ _UNK_1806b2d14;
      uVal_17 = *(uint *)(lVal_9 + 0x7fd9) ^ _UNK_1806b2d18;
      uVal_18 = *(uint *)(lVal_9 + 0x7fdd) ^ _UNK_1806b2d1c;
      *_Str = *_Str ^ _DAT_1806b2d10;
      *(uint *)(lVal_9 + 0x7fd5) = uVal_23;
      *(uint *)(lVal_9 + 0x7fd9) = uVal_17;
      *(uint *)(lVal_9 + 0x7fdd) = uVal_18;
      *(byte *)(lVal_9 + 0x7fe1) = *(byte *)(lVal_9 + 0x7fe1) ^ 0xd5;
      *(uint8_t *)(lVal_9 + 0x7fe2) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)_Str);
    if ((int64_t)sz_7 < 0) goto LAB_1801efb1c;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_62 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_62 = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_c8._0_8_ = pU64_12;
    }
    local_b8._8_8_ = uVal_15;
    local_b8._0_8_ = sz_7;
    func_0x1806aa960(pU64_12,_Str,sz_7);
    pU64_12[sz_7] = 0;
    pU64_19 = &local_258;
    in_stack_fffffffffffffcb8 = in_stack_fffffffffffffcb8 & 0xffffff00;
    pU64_12 = local_c8;
    pU64_13 = local_98;
    func_0x1801cd600(local_a0,pU64_12,pU64_13,pU64_10,pU64_19,local_1a8,in_stack_fffffffffffffcb8);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_15 = local_b8._8_8_ + 1;
      lVal_9 = local_c8._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    if (0xf < uStack_80) {
      uVal_15 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    local_130 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_130 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_168);
    }
    pU64_3 = (uint8_t *)((int64_t)local_a0 + 0xa4);
    uVal_14 = *pU64_3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7fe8) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7fe8) = 1;
      *(uint16_t *)(lVal_9 + 0x7fe5) = 0x10d;
      func_0x180673140(&LAB_1802129a0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_9 + 0x7fe5);
    if (*(char *)(lVal_9 + 0x7fe6) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0xd;
      *(uint8_t *)(lVal_9 + 0x7fe6) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU8_4);
    if ((int64_t)sz_7 < 0) goto LAB_1801efb29;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_6a = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_6a = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_13;
    }
    uStack_80 = uVal_15;
    local_88 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_13,pU8_4,sz_7);
    pU64_13[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x7ffc) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x7ffc) = 1;
      *(uint8_t *)(lVal_9 + 0x7ff8) = 1;
      *(uint64_t *)(lVal_9 + 0x7ff0) = 0x65041d2c493da642;
      func_0x180673140(&LAB_1802129c0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_9 + 0x7ff0);
    if (*(char *)(lVal_9 + 0x7ff8) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x656173452549d30d;
      *(uint8_t *)(lVal_9 + 0x7ff8) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_1801efb36;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_69 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_69 = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_c8._0_8_ = pU64_12;
    }
    local_b8._8_8_ = uVal_15;
    local_b8._0_8_ = sz_7;
    func_0x1806aa960(pU64_12,pU64_2,sz_7);
    pU64_12[sz_7] = 0;
    pU64_12 = local_168;
    uVal_20 = CONCAT71((int7)((uint64_t)pU64_19 >> 8),uVal_14);
    pU64_13 = local_c8;
    pU64_11 = local_98;
    func_0x1801ccd70(local_a0,pU64_13,pU64_11,pU64_3,uVal_20,pU64_12,
                  in_stack_fffffffffffffcb8 & 0xffffff00);
    uVal_22 = (uint32_t)((uint64_t)pU64_12 >> 0x20);
    uVal_21 = (uint32_t)((uint64_t)uVal_20 >> 0x20);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_15 = local_b8._8_8_ + 1;
      lVal_9 = local_c8._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    if (0xf < uStack_80) {
      uVal_15 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    local_2e8 = &PTR_LAB_1806be0b0;
    local_2e0 = local_a0;
    local_2b0 = &local_2e8;
    uVal_5 = *(uint32_t *)(local_a0 + 0x15);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8000) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x8000) = 1;
      *(uint16_t *)(lVal_9 + 0x7ffd) = 0x1c5;
      func_0x180673140(&LAB_1802129e0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_9 + 0x7ffd);
    if (*(char *)(lVal_9 + 0x7ffe) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0xc5;
      *(uint8_t *)(lVal_9 + 0x7ffe) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU8_4);
    if ((int64_t)sz_7 < 0) goto LAB_1801efb43;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_6c = 1;
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_6c = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_11;
    }
    uStack_80 = uVal_15;
    local_88 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_11,pU8_4,sz_7);
    pU64_11[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8018) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x8018) = 1;
      *(uint64_t *)(lVal_9 + 0x8008) = 0xcfa2d1e8cda1068a;
      *(uint32_t *)(lVal_9 + 0x8010) = 0xc4af1ab6;
      *(uint16_t *)(lVal_9 + 0x8014) = 0x181;
      func_0x180673140(&LAB_180212a00);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_9 + 0x8008);
    if (*(char *)(lVal_9 + 0x8015) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xefc7bf81a1d573c5;
      *(uint *)(lVal_9 + 0x8010) = *(uint *)(lVal_9 + 0x8010) ^ 0xa1d573c5;
      *(byte *)(lVal_9 + 0x8014) = *(byte *)(lVal_9 + 0x8014) ^ 0x81;
      *(uint8_t *)(lVal_9 + 0x8015) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_1801efb50;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_6b = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_6b = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_c8._0_8_ = pU64_13;
    }
    pU64_19 = local_a0;
    pU64_10 = local_a0 + 0x15;
    local_b8._8_8_ = uVal_15;
    local_b8._0_8_ = sz_7;
    func_0x1806aa960(pU64_13,pU64_2,sz_7);
    pU64_13[sz_7] = 0;
    uVal_23 = 0x40800000;
    pU64_12 = local_c8;
    pU64_13 = local_98;
    func_0x1801cd2e0(pU64_19,pU64_12,pU64_13,pU64_10,CONCAT44(uVal_21,uVal_5),CONCAT44(uVal_22,0x3f800000)
                  ,0x40800000,&local_2e8,0);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_15 = local_b8._8_8_ + 1;
      lVal_9 = local_c8._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    if (0xf < uStack_80) {
      uVal_15 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    local_2a8 = &PTR_LAB_1806be0b0;
    local_2a0 = local_a0;
    local_270 = &local_2a8;
    local_248 = *(uint64_t *)((int64_t)local_a0 + 0xac);
    uStack_240 = *(uint64_t *)((int64_t)local_a0 + 0xb4);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x801c) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x801c) = 1;
      *(uint16_t *)(lVal_9 + 0x8019) = 0x135;
      func_0x180673140(&LAB_180212a30);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_9 + 0x8019);
    if (*(char *)(lVal_9 + 0x801a) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x35;
      *(uint8_t *)(lVal_9 + 0x801a) = 0;
    }
    _local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU8_4);
    if ((int64_t)sz_7 < 0) goto LAB_1801efb5d;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_6e = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_6e = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_13;
    }
    uStack_80 = uVal_15;
    local_88 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_13,pU8_4,sz_7);
    pU64_13[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8030) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x8030) = 1;
      *(uint8_t *)(lVal_9 + 0x802e) = 1;
      *(uint64_t *)(lVal_9 + 0x8020) = 0xa990455029ddc47a;
      *(uint32_t *)(lVal_9 + 0x8028) = 0x2ac5de56;
      *(uint16_t *)(lVal_9 + 0x802c) = 0x2b4b;
      func_0x180673140(&LAB_180212a50);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_9 + 0x8020);
    if (*(char *)(lVal_9 + 0x802e) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x89f52b3945a9b135;
      *(uint *)(lVal_9 + 0x8028) = *(uint *)(lVal_9 + 0x8028) ^ 0x45a9b135;
      *(byte *)(lVal_9 + 0x802c) = *(byte *)(lVal_9 + 0x802c) ^ 0x39;
      *(byte *)(lVal_9 + 0x802d) = *(byte *)(lVal_9 + 0x802d) ^ 0x2b;
      *(uint8_t *)(lVal_9 + 0x802e) = 0;
    }
    local_b8._0_16_ = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_2);
    if ((int64_t)sz_7 < 0) goto LAB_1801efb6a;
    uVal_15 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_8) {
        uVal_15 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_6d = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        local_6d = 1;
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_c8._0_8_ = pU64_12;
    }
    pU64_10 = local_a0;
    lVal_9 = (int64_t)local_a0 + 0xac;
    local_b8._8_8_ = uVal_15;
    local_b8._0_8_ = sz_7;
    func_0x1806aa960(pU64_12,pU64_2,sz_7);
    pU64_12[sz_7] = 0;
    uVal_23 = uVal_23 & 0xffffff00;
    pU64_12 = local_c8;
    pU64_13 = local_98;
    func_0x1801cd600(pU64_10,pU64_12,pU64_13,lVal_9,&local_248,&local_2a8,uVal_23);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_15 = local_b8._8_8_ + 1;
      lVal_9 = local_c8._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    if (0xf < uStack_80) {
      uVal_15 = uStack_80 + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
        uVal_15 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
    }
    local_f0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_f0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_128);
    }
    pU64_10 = (uint64_t *)((int64_t)local_a0 + 0xbc);
    local_238 = *pU64_10;
    uStack_230 = *(uint64_t *)((int64_t)local_a0 + 0xc4);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8034) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x8034) = 1;
      *(uint16_t *)(lVal_9 + 0x8031) = 0x145;
      func_0x180673140(&LAB_180212a80);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_4 = (byte *)(lVal_9 + 0x8031);
    if (*(char *)(lVal_9 + 0x8032) == '\x01') {
      *pU8_4 = *pU8_4 ^ 0x45;
      *(uint8_t *)(lVal_9 + 0x8032) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU8_4);
    if (-1 < (int64_t)sz_7) {
      uVal_15 = 0xf;
      if (0xf < sz_7) {
        uVal_8 = sz_7 | 0xf;
        uVal_15 = 0x16;
        if (0x16 < uVal_8) {
          uVal_15 = uVal_8;
        }
        if (uVal_8 < 0xfff) {
          local_70 = 1;
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
        }
        else {
          local_70 = 1;
          lVal_9 = func_0x180672de0(uVal_15 + 0x28);
          pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_9;
        }
        local_98._0_8_ = pU64_13;
      }
      uStack_80 = uVal_15;
      local_88 = (uint8_t  [8])sz_7;
      func_0x1806aa960(pU64_13,pU8_4,sz_7);
      pU64_13[sz_7] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x8050) == '\0') {
        lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_9 + 0x8050) = 1;
        uVal_20 = _UNK_1806bb158;
        *(uint64_t *)(lVal_9 + 0x8040) = _DAT_1806bb150;
        *(uint64_t *)(lVal_9 + 0x8048) = uVal_20;
        func_0x180673140(&LAB_180212aa0);
      }
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str_00 = (uint8_t (*)[16])(lVal_9 + 0x8040);
      if (*(char *)(lVal_9 + 0x804f) == '\x01') {
        uVal_21 = *(uint32_t *)(lVal_9 + 0x8048);
        auArr_16 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_21 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_21 >> 0x10),uVal_21)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_9 + 0x804d) >> 8)),
                                                  (char)((uint)uVal_21 >> 8)),
                                          CONCAT11((char)*(uint16_t *)(lVal_9 + 0x804d),
                                                   (char)uVal_21))),_DAT_1806ae110);
        auArr_16._8_8_ =
             auArr_16._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_9 + 0x804c) << 0x20;
        auArr_16 = pblendw(auArr_16,*_Str_00,0xf);
        *_Str_00 = auArr_16 ^ _DAT_1806bb160;
      }
      local_c8 = (uint8_t  [16])0x0;
      sz_7 = strlen((char *)_Str_00);
      if (-1 < (int64_t)sz_7) {
        uVal_15 = 0xf;
        if (0xf < sz_7) {
          uVal_8 = sz_7 | 0xf;
          uVal_15 = 0x16;
          if (0x16 < uVal_8) {
            uVal_15 = uVal_8;
          }
          if (uVal_8 < 0xfff) {
            local_6f = 1;
            pU64_12 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
          }
          else {
            local_6f = 1;
            lVal_9 = func_0x180672de0(uVal_15 + 0x28);
            pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_12 + -8) = lVal_9;
          }
          local_c8._0_8_ = pU64_12;
        }
        local_b8._0_8_ = sz_7;
        local_b8._8_8_ = uVal_15;
        func_0x1806aa960(pU64_12,_Str_00,sz_7);
        pU64_12[sz_7] = 0;
        func_0x1801cd600(local_a0,local_c8,local_98,pU64_10,&local_238,local_128,uVal_23 & 0xffffff00);
        if (0xf < (uint64_t)local_b8._8_8_) {
          uVal_15 = local_b8._8_8_ + 1;
          lVal_9 = local_c8._0_8_;
          if (0xfff < uVal_15) {
            lVal_9 = *(int64_t *)(local_c8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_9)) goto LAB_1801efaba;
            uVal_15 = local_b8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_15);
        }
        if (0xf < uStack_80) {
          uVal_15 = uStack_80 + 1;
          lVal_9 = local_98._0_8_;
          if (0xfff < uVal_15) {
            lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) {
LAB_1801efaba:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_15 = uStack_80 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_15);
        }
        return local_a0;
      }
      goto LAB_1801efb84;
    }
  }
  local_70 = 1;
  func_0x18007ba70();
LAB_1801efb84:
  local_6f = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_10 = (uint64_t *)(*fnPtr_6)();
  return pU64_10;
}

// Unwind@1801efba0
void Unwind_1801efba0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x188);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@1801efc10
void Unwind_1801efc10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7f90) = 0;
  *(uint8_t *)(param_2 + 0x317) = 1;
  return;
}

// Unwind@1801efc70
void Unwind_1801efc70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@1801efce0
void Unwind_1801efce0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x208);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@1801efd50
void Unwind_1801efd50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x248);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@1801efdc0
void Unwind_1801efdc0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x288);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x250));
    *(uint64_t *)(param_2 + 0x288) = 0;
  }
  return;
}

// Unwind@1801efe30
void Unwind_1801efe30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  return;
}

// Unwind@1801efe80
void Unwind_1801efe80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x315) = 0;
  return;
}

// Unwind@1801efed0
void Unwind_1801efed0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x315);
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x317) = uVal_1;
  return;
}

// Unwind@1801eff20
void Unwind_1801eff20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x317) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@1801eff90
void Unwind_1801eff90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x314) = 0;
  return;
}

// Unwind@1801effe0
void Unwind_1801effe0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x314);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x313) = uVal_1;
  return;
}

// Unwind@1801f0030
void Unwind_1801f0030(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x313) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@1801f00a0
void Unwind_1801f00a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x312) = 0;
  return;
}

// Unwind@1801f00f0
void Unwind_1801f00f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x312);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x311) = uVal_1;
  return;
}

// Unwind@1801f0140
void Unwind_1801f0140(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x311) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1801f01b0
void Unwind_1801f01b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x316) = 0;
  return;
}

// Unwind@1801f0200
void Unwind_1801f0200(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x316);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x310) = uVal_1;
  return;
}

// Unwind@1801f0250
void Unwind_1801f0250(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x310) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x208), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@1801f02c0
void Unwind_1801f02c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x30f) = 0;
  return;
}

// Unwind@1801f0310
void Unwind_1801f0310(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x30f);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x30e) = uVal_1;
  return;
}

// Unwind@1801f0360
void Unwind_1801f0360(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x30e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x248), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x210));
    *(uint64_t *)(param_2 + 0x248) = 0;
  }
  return;
}

// Unwind@1801f03d0
void Unwind_1801f03d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x30d) = 0;
  return;
}

// Unwind@1801f0420
void Unwind_1801f0420(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x30d);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x30c) = uVal_1;
  return;
}
