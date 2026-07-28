#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1802c1520
void Unwind_1802c1520(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x168));
  return;
}

// Unwind@1802c1570
void Unwind_1802c1570(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xc92c) = 0;
  return;
}

// Unwind@1802c15d0
void Unwind_1802c15d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xc97c) = 0;
  *(uint8_t *)(param_2 + 0x176) = 1;
  return;
}

// Unwind@1802c1630
void Unwind_1802c1630(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xc9a0) = 0;
  *(uint8_t *)(param_2 + 0x175) = 1;
  return;
}

// Unwind@1802c1940
void Unwind_1802c1940(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xc9d8) = 0;
  return;
}

// Unwind@1802c1a60
void Unwind_1802c1a60(void)
{
  func_0x180672f60(&DAT_18083fc48);
  return;
}

// func_0x1802c1a90
int64_t func_0x1802c1a90(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x7aae81170eed16e) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x527957e1c4acd808) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1802c1b34;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x527957e1c4acd808);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1802c1b5a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x527957e1c4acd808);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff96d58fe9U) + -0x15;
  }
LAB_1802c1b34:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1802c1b5a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// Unwind@1802c1c10
void Unwind_1802c1c10(void)
{
  func_0x180672f60(&DAT_18083fc58);
  return;
}

// Unwind@1802c1eb0
void Unwind_1802c1eb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// func_0x1802c1ee0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802c1ee0(uint64_t *param_1)
{
  uint *pU64_1;
  uint8_t (*_Str)[16];
  uint32_t *pU64_2;
  char *fnPtr_3;
  uint8_t uVal_4;
  uint32_t uVal_5;
  func_ptr_t fnPtr_6;
  size_t sz_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t *pU64_10;
  uint8_t *pU64_11;
  uint8_t *pU64_12;
  uint64_t uVal_13;
  uint uVal_15;
  uint uVal_16;
  uint uVal_17;
  uint uVal_18;
  uint uVal_19;
  uint8_t auArr_14 [16];
  uint uVal_20;
  uint uVal_21;
  uint32_t uVal_22;
  uint64_t in_stack_fffffffffffffd60;
  uint32_t uVal_24;
  uint64_t uVal_23;
  uint uVal_25;
  uint8_t **local_278;
  uint64_t *local_270;
  uint8_t ***local_240;
  uint8_t local_238 [56];
  uint64_t local_200;
  uint8_t local_1f8 [56];
  uint64_t local_1c0;
  uint8_t local_1b8 [56];
  uint64_t local_180;
  uint8_t local_178 [56];
  uint64_t local_140;
  uint8_t local_138 [56];
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t uStack_f0;
  uint16_t local_e8;
  uint8_t local_d8 [16];
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint16_t uStack_ac;
  uint8_t uStack_aa;
  uint8_t uStack_a9;
  undefined6 uStack_a8;
  uint8_t uStack_a2;
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint64_t *local_78;
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
  
  uVal_24 = (uint32_t)((uint64_t)in_stack_fffffffffffffd60 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  uStack_b8._3_1_ = (uint8_t)_UNK_1806c2542;
  uStack_b8 = CONCAT13(uStack_b8._3_1_,_UNK_1806c253f);
  uStack_b4._3_1_ = (uint8_t)_UNK_1806c2546;
  uStack_b4 = CONCAT13(uStack_b4._3_1_,(int3)((uint)_UNK_1806c2542 >> 8));
  local_c8 = _DAT_1806c252f;
  uStack_c4 = _UNK_1806c2533;
  uStack_c0 = _UNK_1806c2537;
  uStack_bc = _UNK_1806c253b;
  local_d8._8_8_ = _UNK_1806c2527;
  local_d8._0_8_ = _DAT_1806c251f;
  local_78 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xca1c) == '\0') {
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_9 + 0xca1c) = 1;
    func_0x1801b3830(lVal_9 + 0xc9ed,local_d8);
    func_0x180673140(&LAB_1802e10b0);
  }
  uVal_20 = _UNK_1806b2d6c;
  uVal_18 = _UNK_1806b2d68;
  uVal_16 = _UNK_1806b2d64;
  uVal_25 = _DAT_1806b2d60;
  lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_9 + 0xc9ed);
  if (*(char *)(lVal_9 + 0xca18) == '\x01') {
    uVal_15 = *(uint *)(lVal_9 + 0xc9f1) ^ _UNK_1806b2d64;
    uVal_17 = *(uint *)(lVal_9 + 0xc9f5) ^ _UNK_1806b2d68;
    uVal_19 = *(uint *)(lVal_9 + 0xc9f9) ^ _UNK_1806b2d6c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2d60;
    *(uint *)(lVal_9 + 0xc9f1) = uVal_15;
    *(uint *)(lVal_9 + 0xc9f5) = uVal_17;
    *(uint *)(lVal_9 + 0xc9f9) = uVal_19;
    *(uint *)(lVal_9 + 0xc9fd) = *(uint *)(lVal_9 + 0xc9fd) ^ uVal_25;
    *(uint *)(lVal_9 + 0xca01) = *(uint *)(lVal_9 + 0xca01) ^ uVal_16;
    *(uint *)(lVal_9 + 0xca05) = *(uint *)(lVal_9 + 0xca05) ^ uVal_18;
    *(uint *)(lVal_9 + 0xca09) = *(uint *)(lVal_9 + 0xca09) ^ uVal_20;
    *(uint64_t *)(lVal_9 + 0xca0d) = *(uint64_t *)(lVal_9 + 0xca0d) ^ SUB168(_DAT_1806b6410,0);
    *(byte *)(lVal_9 + 0xca15) = *(byte *)(lVal_9 + 0xca15) ^ 0x75;
    *(byte *)(lVal_9 + 0xca16) = *(byte *)(lVal_9 + 0xca16) ^ 0x55;
    *(byte *)(lVal_9 + 0xca17) = *(byte *)(lVal_9 + 0xca17) ^ 0x4d;
    *(uint8_t *)(lVal_9 + 0xca18) = 0;
  }
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_d8 = (uint8_t  [16])0x0;
  sz_7 = strlen((char *)pU64_1);
  if ((int64_t)sz_7 < 0) {
    func_0x18007ba70();
LAB_1802c383e:
    local_69 = 1;
    func_0x18007ba70();
LAB_1802c384b:
    local_68 = 1;
    func_0x18007ba70();
LAB_1802c3858:
    local_61 = 1;
    func_0x18007ba70();
LAB_1802c3865:
    local_6a = 1;
    func_0x18007ba70();
LAB_1802c3872:
    local_62 = 1;
    func_0x18007ba70();
LAB_1802c387f:
    local_6b = 1;
    func_0x18007ba70();
LAB_1802c388c:
    local_63 = 1;
    func_0x18007ba70();
LAB_1802c3899:
    local_6c = 1;
    func_0x18007ba70();
LAB_1802c38a6:
    local_65 = 1;
    func_0x18007ba70();
LAB_1802c38b3:
    local_64 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_7 < 0x10) {
      pU64_11 = local_d8;
      uVal_13 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_d8._0_8_ = pU64_11;
    }
    local_c8 = (uint32_t)sz_7;
    uStack_c4 = (uint32_t)(sz_7 >> 0x20);
    uStack_c0 = (uint32_t)uVal_13;
    uStack_bc = (uint32_t)(uVal_13 >> 0x20);
    func_0x1806aa960(pU64_11,pU64_1,sz_7);
    pU64_11[sz_7] = 0;
    pU64_11 = local_d8;
    func_0x1801c2ba0(local_78,0,0,pU64_11);
    uVal_13 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_13) {
      uVal_8 = uVal_13 + 1;
      lVal_9 = local_d8._0_8_;
      if (0xfff < uVal_8) {
        lVal_9 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_8 = uVal_13 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_8);
    }
    *local_78 = &PTR_LAB_1806c0650;
    uVal_23 = _UNK_1806bec38;
    pU64_10 = local_78 + 0x10;
    local_78[0x10] = _DAT_1806bec30;
    local_78[0x11] = uVal_23;
    *(uint16_t *)(local_78 + 0x12) = 0x100;
    local_200 = 0;
    uVal_22 = DAT_1806b55e4;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_200 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_238);
      uVal_22 = *(uint32_t *)pU64_10;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xca30) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xca30) = 1;
      uVal_23 = _UNK_1806bec48;
      *(uint64_t *)(lVal_9 + 0xca20) = _DAT_1806bec40;
      *(uint64_t *)(lVal_9 + 0xca28) = uVal_23;
      func_0x180673140(&LAB_1802e10e0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_9 + 0xca20);
    if (*(char *)(lVal_9 + 0xca2f) == '\x01') {
      uVal_5 = *(uint32_t *)(lVal_9 + 0xca28);
      auArr_14 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_5 >> 0x10),uVal_5)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_9 + 0xca2d) >> 8)),
                                                 (char)((uint)uVal_5 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_9 + 0xca2d),(char)uVal_5))
                              ),_DAT_1806ae110);
      auArr_14._8_8_ =
           auArr_14._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_9 + 0xca2c) << 0x20;
      auArr_14 = pblendw(auArr_14,*_Str,0xf);
      *_Str = auArr_14 ^ _DAT_1806b6450;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)_Str);
    if ((int64_t)sz_7 < 0) goto LAB_1802c383e;
    uVal_13 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_69 = 1;
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_69 = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_d8._0_8_ = pU64_11;
    }
    local_c8 = (uint32_t)sz_7;
    uStack_c4 = (uint32_t)(sz_7 >> 0x20);
    uStack_c0 = (uint32_t)uVal_13;
    uStack_bc = (uint32_t)(uVal_13 >> 0x20);
    func_0x1806aa960(pU64_11,_Str,sz_7);
    pU64_11[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xca3c) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xca3c) = 1;
      *(uint8_t *)(lVal_9 + 0xca3a) = 1;
      *(uint32_t *)(lVal_9 + 0xca34) = 0xa2183520;
      *(uint16_t *)(lVal_9 + 0xca38) = 0xb3d5;
      func_0x180673140(&LAB_1802e1110);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_9 + 0xca34);
    if (*(char *)(lVal_9 + 0xca3a) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xc77d4573;
      *(byte *)(lVal_9 + 0xca38) = *(byte *)(lVal_9 + 0xca38) ^ 0xb1;
      *(byte *)(lVal_9 + 0xca39) = *(byte *)(lVal_9 + 0xca39) ^ 0xb3;
      *(uint8_t *)(lVal_9 + 0xca3a) = 0;
    }
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_1);
    if ((int64_t)sz_7 < 0) goto LAB_1802c384b;
    if (sz_7 < 0x10) {
      pU64_11 = local_98;
      uVal_13 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_68 = 1;
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_68 = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_11;
    }
    local_88._0_8_ = sz_7;
    local_88._8_8_ = uVal_13;
    func_0x1806aa960(pU64_11,pU64_1,sz_7);
    pU64_11[sz_7] = 0;
    uVal_23 = CONCAT44(uVal_24,0x40400000);
    pU64_11 = local_98;
    pU64_12 = local_d8;
    func_0x1801cd2e0(local_78,pU64_11,pU64_12,pU64_10,uVal_22,uVal_23,0x41700000,local_238,0);
    uVal_24 = (uint32_t)((uint64_t)uVal_23 >> 0x20);
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_13 = local_88._8_8_ + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_13) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_13 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_13);
    }
    uVal_13 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_13) {
      uVal_8 = uVal_13 + 1;
      lVal_9 = local_d8._0_8_;
      if (0xfff < uVal_8) {
        lVal_9 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_8 = uVal_13 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_8);
    }
    local_1c0 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_1c0 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_1f8);
    }
    pU64_2 = (uint32_t *)((int64_t)local_78 + 0x84);
    uVal_22 = *pU64_2;
    local_c8 = _DAT_1806c255a;
    uStack_c4 = _UNK_1806c255e;
    uStack_c0 = _UNK_1806c2562;
    local_d8._8_8_ = _UNK_1806c2552;
    local_d8._0_8_ = _DAT_1806c254a;
    uStack_bc._0_3_ = (undefined3)_UNK_1806c2566;
    uStack_bc = CONCAT13(0xd,(undefined3)uStack_bc);
    uStack_b8 = CONCAT13(uStack_b8._3_1_,0x69a2b4);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xca64) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xca64) = 1;
      func_0x1801b30c0(lVal_9 + 0xca3d,local_d8);
      func_0x180673140(&LAB_1802e1140);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xca3d);
    func_0x1802e4930(fnPtr_3);
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen(fnPtr_3);
    if ((int64_t)sz_7 < 0) goto LAB_1802c3858;
    uVal_13 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_61 = 1;
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_61 = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_11;
    }
    local_88._8_8_ = uVal_13;
    local_88._0_8_ = sz_7;
    func_0x1806aa960(pU64_11,fnPtr_3,sz_7);
    pU64_11[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xca70) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xca70) = 1;
      *(uint8_t *)(lVal_9 + 0xca6e) = 1;
      *(uint32_t *)(lVal_9 + 0xca68) = 0x9004f185;
      *(uint16_t *)(lVal_9 + 0xca6c) = 0x29a7;
      func_0x180673140(&LAB_1802e1170);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_9 + 0xca68);
    if (*(char *)(lVal_9 + 0xca6e) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xe569d1dd;
      *(byte *)(lVal_9 + 0xca6c) = *(byte *)(lVal_9 + 0xca6c) ^ 0xcb;
      *(byte *)(lVal_9 + 0xca6d) = *(byte *)(lVal_9 + 0xca6d) ^ 0x29;
      *(uint8_t *)(lVal_9 + 0xca6e) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_1);
    if ((int64_t)sz_7 < 0) goto LAB_1802c3865;
    uVal_13 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_6a = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_6a = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_d8._0_8_ = pU64_12;
    }
    local_c8 = (uint32_t)sz_7;
    uStack_c4 = (uint32_t)(sz_7 >> 0x20);
    uStack_c0 = (uint32_t)uVal_13;
    uStack_bc = (uint32_t)(uVal_13 >> 0x20);
    func_0x1806aa960(pU64_12,pU64_1,sz_7);
    pU64_12[sz_7] = 0;
    uVal_23 = CONCAT44(uVal_24,0x40e00000);
    pU64_11 = local_d8;
    pU64_12 = local_98;
    func_0x1801cd2e0(local_78,pU64_11,pU64_12,pU64_2,uVal_22,uVal_23,0x41f00000,local_1f8,0);
    uVal_24 = (uint32_t)((uint64_t)uVal_23 >> 0x20);
    uVal_13 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_13) {
      uVal_8 = uVal_13 + 1;
      lVal_9 = local_d8._0_8_;
      if (0xfff < uVal_8) {
        lVal_9 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_8 = uVal_13 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_8);
    }
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_13 = local_88._8_8_ + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_13) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_13 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_13);
    }
    local_180 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_180 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_1b8);
    }
    pU64_10 = local_78 + 0x11;
    uVal_22 = *(uint32_t *)pU64_10;
    local_c8 = _DAT_1806c257d;
    uStack_c4 = _UNK_1806c2581;
    uStack_c0 = _UNK_1806c2585;
    local_d8._8_8_ = _UNK_1806c2575;
    local_d8._0_8_ = _DAT_1806c256d;
    uStack_bc._0_3_ = (undefined3)_UNK_1806c2589;
    uStack_bc = CONCAT13(0x3f,(undefined3)uStack_bc);
    uStack_b8 = CONCAT13(uStack_b8._3_1_,0xa3b4ee);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xca98) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xca98) = 1;
      func_0x1801b30c0(lVal_9 + 0xca71,local_d8);
      func_0x180673140(&LAB_1802e11a0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xca71);
    func_0x1802171f0(fnPtr_3);
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen(fnPtr_3);
    if ((int64_t)sz_7 < 0) goto LAB_1802c3872;
    uVal_13 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_62 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_62 = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_12;
    }
    local_88._8_8_ = uVal_13;
    local_88._0_8_ = sz_7;
    func_0x1806aa960(pU64_12,fnPtr_3,sz_7);
    pU64_12[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcaa4) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xcaa4) = 1;
      *(uint8_t *)(lVal_9 + 0xcaa2) = 1;
      *(uint32_t *)(lVal_9 + 0xca9c) = 0xe6cee7de;
      *(uint16_t *)(lVal_9 + 0xcaa0) = 0xcdc9;
      func_0x180673140(&LAB_1802e11d0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_9 + 0xca9c);
    if (*(char *)(lVal_9 + 0xcaa2) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x93a3c787;
      *(byte *)(lVal_9 + 0xcaa0) = *(byte *)(lVal_9 + 0xcaa0) ^ 0xa5;
      *(byte *)(lVal_9 + 0xcaa1) = *(byte *)(lVal_9 + 0xcaa1) ^ 0xcd;
      *(uint8_t *)(lVal_9 + 0xcaa2) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_1);
    if ((int64_t)sz_7 < 0) goto LAB_1802c387f;
    uVal_13 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_6b = 1;
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_6b = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_d8._0_8_ = pU64_11;
    }
    local_c8 = (uint32_t)sz_7;
    uStack_c4 = (uint32_t)(sz_7 >> 0x20);
    uStack_c0 = (uint32_t)uVal_13;
    uStack_bc = (uint32_t)(uVal_13 >> 0x20);
    func_0x1806aa960(pU64_11,pU64_1,sz_7);
    pU64_11[sz_7] = 0;
    uVal_23 = CONCAT44(uVal_24,0x40e00000);
    pU64_11 = local_d8;
    pU64_12 = local_98;
    func_0x1801cd2e0(local_78,pU64_11,pU64_12,pU64_10,uVal_22,uVal_23,0x41f00000,local_1b8,0);
    uVal_24 = (uint32_t)((uint64_t)uVal_23 >> 0x20);
    uVal_13 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_13) {
      uVal_8 = uVal_13 + 1;
      lVal_9 = local_d8._0_8_;
      if (0xfff < uVal_8) {
        lVal_9 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_8 = uVal_13 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_8);
    }
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_13 = local_88._8_8_ + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_13) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_13 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_13);
    }
    local_140 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_140 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_178);
    }
    pU64_2 = (uint32_t *)((int64_t)local_78 + 0x8c);
    uVal_22 = *pU64_2;
    local_c8 = _DAT_1806c25a0;
    uStack_c4 = _UNK_1806c25a4;
    uStack_c0 = _UNK_1806c25a8;
    local_d8._8_8_ = _UNK_1806c2598;
    local_d8._0_8_ = _DAT_1806c2590;
    uStack_bc._0_3_ = (undefined3)_UNK_1806c25ac;
    uStack_bc = CONCAT13(0xe9,(undefined3)uStack_bc);
    uStack_b8 = CONCAT13(uStack_b8._3_1_,0xf582bc);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcacc) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xcacc) = 1;
      func_0x1801b30c0(lVal_9 + 0xcaa5,local_d8);
      func_0x180673140(&LAB_1802e1200);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcaa5);
    func_0x1802e4980(fnPtr_3);
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen(fnPtr_3);
    if ((int64_t)sz_7 < 0) goto LAB_1802c388c;
    uVal_13 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_63 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_63 = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_12;
    }
    local_88._8_8_ = uVal_13;
    local_88._0_8_ = sz_7;
    func_0x1806aa960(pU64_12,fnPtr_3,sz_7);
    pU64_12[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcad8) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xcad8) = 1;
      *(uint8_t *)(lVal_9 + 0xcad6) = 1;
      *(uint32_t *)(lVal_9 + 0xcad0) = 0x8298d18f;
      *(uint16_t *)(lVal_9 + 0xcad4) = 0x9b73;
      func_0x180673140(&LAB_1802e1230);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_9 + 0xcad0);
    if (*(char *)(lVal_9 + 0xcad6) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xf7f5f1d5;
      *(byte *)(lVal_9 + 0xcad4) = *(byte *)(lVal_9 + 0xcad4) ^ 0x1f;
      *(byte *)(lVal_9 + 0xcad5) = *(byte *)(lVal_9 + 0xcad5) ^ 0x9b;
      *(uint8_t *)(lVal_9 + 0xcad6) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_1);
    if ((int64_t)sz_7 < 0) goto LAB_1802c3899;
    uVal_13 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_6c = 1;
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_6c = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_d8._0_8_ = pU64_11;
    }
    local_c8 = (uint32_t)sz_7;
    uStack_c4 = (uint32_t)(sz_7 >> 0x20);
    uStack_c0 = (uint32_t)uVal_13;
    uStack_bc = (uint32_t)(uVal_13 >> 0x20);
    func_0x1806aa960(pU64_11,pU64_1,sz_7);
    pU64_11[sz_7] = 0;
    uVal_25 = 0x41f00000;
    pU64_11 = local_d8;
    pU64_12 = local_98;
    func_0x1801cd2e0(local_78,pU64_11,pU64_12,pU64_2,uVal_22,CONCAT44(uVal_24,0x40e00000),0x41f00000,
                  local_178,0);
    uVal_13 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_13) {
      uVal_8 = uVal_13 + 1;
      lVal_9 = local_d8._0_8_;
      if (0xfff < uVal_8) {
        lVal_9 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_8 = uVal_13 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_8);
    }
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_13 = local_88._8_8_ + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_13) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_13 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_13);
    }
    local_100 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_100 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_138);
    }
    pU64_10 = local_78 + 0x12;
    uVal_4 = *(uint8_t *)pU64_10;
    uStack_b8 = _DAT_1806c25d3;
    uStack_b4 = _UNK_1806c25d7;
    uStack_b0 = _UNK_1806c25db;
    uStack_ac = (uint16_t)_UNK_1806c25df;
    local_c8 = _DAT_1806c25c3;
    uStack_c4 = _UNK_1806c25c7;
    uStack_c0 = _UNK_1806c25cb;
    uStack_bc = _UNK_1806c25cf;
    local_d8._8_8_ = _UNK_1806c25bb;
    local_d8._0_8_ = _DAT_1806c25b3;
    uStack_aa = 0x41;
    uStack_a9 = 2;
    uStack_a8 = 0x73214b3cbc7f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcb10) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xcb10) = 1;
      func_0x1801b5990(lVal_9 + 0xcad9,local_d8);
      func_0x180673140(&LAB_1802e1260);
    }
    uVal_15 = _UNK_1806b54cc;
    uVal_20 = _UNK_1806b54c8;
    uVal_18 = _UNK_1806b54c4;
    uVal_16 = _DAT_1806b54c0;
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_9 + 0xcad9);
    if (*(char *)(lVal_9 + 0xcb0f) == '\x01') {
      uVal_17 = *(uint *)(lVal_9 + 0xcadd) ^ _UNK_1806b54c4;
      uVal_19 = *(uint *)(lVal_9 + 0xcae1) ^ _UNK_1806b54c8;
      uVal_21 = *(uint *)(lVal_9 + 0xcae5) ^ _UNK_1806b54cc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b54c0;
      *(uint *)(lVal_9 + 0xcadd) = uVal_17;
      *(uint *)(lVal_9 + 0xcae1) = uVal_19;
      *(uint *)(lVal_9 + 0xcae5) = uVal_21;
      *(uint *)(lVal_9 + 0xcae9) = *(uint *)(lVal_9 + 0xcae9) ^ uVal_16;
      *(uint *)(lVal_9 + 0xcaed) = *(uint *)(lVal_9 + 0xcaed) ^ uVal_18;
      *(uint *)(lVal_9 + 0xcaf1) = *(uint *)(lVal_9 + 0xcaf1) ^ uVal_20;
      *(uint *)(lVal_9 + 0xcaf5) = *(uint *)(lVal_9 + 0xcaf5) ^ uVal_15;
      *(uint *)(lVal_9 + 0xcaf9) = *(uint *)(lVal_9 + 0xcaf9) ^ uVal_16;
      *(uint *)(lVal_9 + 0xcafd) = *(uint *)(lVal_9 + 0xcafd) ^ uVal_18;
      *(uint *)(lVal_9 + 0xcb01) = *(uint *)(lVal_9 + 0xcb01) ^ uVal_20;
      *(uint *)(lVal_9 + 0xcb05) = *(uint *)(lVal_9 + 0xcb05) ^ uVal_15;
      *(uint *)(lVal_9 + 0xcb09) = *(uint *)(lVal_9 + 0xcb09) ^ 0x2549d30d;
      *(byte *)(lVal_9 + 0xcb0d) = *(byte *)(lVal_9 + 0xcb0d) ^ 0x45;
      *(byte *)(lVal_9 + 0xcb0e) = *(byte *)(lVal_9 + 0xcb0e) ^ 0x73;
      *(uint8_t *)(lVal_9 + 0xcb0f) = 0;
    }
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_1);
    if ((int64_t)sz_7 < 0) goto LAB_1802c38a6;
    uVal_13 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_65 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_65 = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_12;
    }
    local_88._8_8_ = uVal_13;
    local_88._0_8_ = sz_7;
    func_0x1806aa960(pU64_12,pU64_1,sz_7);
    pU64_12[sz_7] = 0;
    local_f8 = _DAT_1806c25e9;
    uStack_f0 = _UNK_1806c25f1;
    local_e8 = 0xd363;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcb24) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xcb24) = 1;
      func_0x18007c170(lVal_9 + 0xcb11,&local_f8);
      func_0x180673140(&LAB_1802e12a0);
    }
    fnPtr_3 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcb11);
    func_0x1802e49d0(fnPtr_3);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_7 = strlen(fnPtr_3);
    if ((int64_t)sz_7 < 0) goto LAB_1802c38b3;
    uVal_13 = 0xf;
    if (0xf < sz_7) {
      uVal_8 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_8) {
        uVal_13 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_64 = 1;
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_64 = 1;
        lVal_9 = func_0x180672de0(uVal_13 + 0x28);
        pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_9;
      }
      local_d8._0_8_ = pU64_11;
    }
    local_c8 = (uint32_t)sz_7;
    uStack_c4 = (uint32_t)(sz_7 >> 0x20);
    uStack_c0 = (uint32_t)uVal_13;
    uStack_bc = (uint32_t)(uVal_13 >> 0x20);
    func_0x1806aa960(pU64_11,fnPtr_3,sz_7);
    pU64_11[sz_7] = 0;
    uVal_25 = uVal_25 & 0xffffff00;
    pU64_11 = local_d8;
    pU64_12 = local_98;
    func_0x1801ccd70(local_78,pU64_11,pU64_12,pU64_10,uVal_4,local_138,uVal_25);
    uVal_13 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_13) {
      uVal_8 = uVal_13 + 1;
      lVal_9 = local_d8._0_8_;
      if (0xfff < uVal_8) {
        lVal_9 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_8 = uVal_13 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_8);
    }
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_13 = local_88._8_8_ + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_13) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
        uVal_13 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_13);
    }
    local_278 = &PTR_LAB_1806c32d0;
    local_270 = local_78;
    local_240 = &local_278;
    uVal_4 = *(uint8_t *)((int64_t)local_78 + 0x91);
    uStack_b8 = _DAT_1806c261b;
    uStack_b4 = _UNK_1806c261f;
    uStack_b0 = _UNK_1806c2623;
    uStack_ac = (uint16_t)_UNK_1806c2627;
    uStack_aa = (uint8_t)((uint)_UNK_1806c2627 >> 0x10);
    local_c8 = _DAT_1806c260b;
    uStack_c4 = _UNK_1806c260f;
    uStack_c0 = _UNK_1806c2613;
    uStack_bc = _UNK_1806c2617;
    local_d8._8_8_ = _UNK_1806c2603;
    local_d8._0_8_ = _DAT_1806c25fb;
    uStack_a9 = 0xef;
    uStack_a8 = 0x455c31ddd059;
    uStack_a2 = 0xf5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcb60) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xcb60) = 1;
      func_0x1801bb8d0(lVal_9 + 0xcb25,local_d8);
      func_0x180673140(&LAB_1802e12d0);
    }
    uVal_15 = _UNK_1806b2cbc;
    uVal_20 = _UNK_1806b2cb8;
    uVal_18 = _UNK_1806b2cb4;
    uVal_16 = _DAT_1806b2cb0;
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_9 + 0xcb25);
    if (*(char *)(lVal_9 + 0xcb5c) == '\x01') {
      uVal_17 = *(uint *)(lVal_9 + 0xcb29) ^ _UNK_1806b2cb4;
      uVal_19 = *(uint *)(lVal_9 + 0xcb2d) ^ _UNK_1806b2cb8;
      uVal_21 = *(uint *)(lVal_9 + 0xcb31) ^ _UNK_1806b2cbc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_9 + 0xcb29) = uVal_17;
      *(uint *)(lVal_9 + 0xcb2d) = uVal_19;
      *(uint *)(lVal_9 + 0xcb31) = uVal_21;
      *(uint *)(lVal_9 + 0xcb35) = *(uint *)(lVal_9 + 0xcb35) ^ uVal_16;
      *(uint *)(lVal_9 + 0xcb39) = *(uint *)(lVal_9 + 0xcb39) ^ uVal_18;
      *(uint *)(lVal_9 + 0xcb3d) = *(uint *)(lVal_9 + 0xcb3d) ^ uVal_20;
      *(uint *)(lVal_9 + 0xcb41) = *(uint *)(lVal_9 + 0xcb41) ^ uVal_15;
      *(uint *)(lVal_9 + 0xcb45) = *(uint *)(lVal_9 + 0xcb45) ^ uVal_16;
      *(uint *)(lVal_9 + 0xcb49) = *(uint *)(lVal_9 + 0xcb49) ^ uVal_18;
      *(uint *)(lVal_9 + 0xcb4d) = *(uint *)(lVal_9 + 0xcb4d) ^ uVal_20;
      *(uint *)(lVal_9 + 0xcb51) = *(uint *)(lVal_9 + 0xcb51) ^ uVal_15;
      *(uint *)(lVal_9 + 0xcb55) = *(uint *)(lVal_9 + 0xcb55) ^ 0x45a9b135;
      *(byte *)(lVal_9 + 0xcb59) = *(byte *)(lVal_9 + 0xcb59) ^ 0x39;
      *(byte *)(lVal_9 + 0xcb5a) = *(byte *)(lVal_9 + 0xcb5a) ^ 0x2b;
      *(byte *)(lVal_9 + 0xcb5b) = *(byte *)(lVal_9 + 0xcb5b) ^ 0xf5;
      *(uint8_t *)(lVal_9 + 0xcb5c) = 0;
    }
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_7) {
      uVal_13 = 0xf;
      if (0xf < sz_7) {
        uVal_8 = sz_7 | 0xf;
        uVal_13 = 0x16;
        if (0x16 < uVal_8) {
          uVal_13 = uVal_8;
        }
        if (uVal_8 < 0xfff) {
          local_67 = 1;
          pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
        }
        else {
          local_67 = 1;
          lVal_9 = func_0x180672de0(uVal_13 + 0x28);
          pU64_12 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_12 + -8) = lVal_9;
        }
        local_98._0_8_ = pU64_12;
      }
      local_88._8_8_ = uVal_13;
      local_88._0_8_ = sz_7;
      func_0x1806aa960(pU64_12,pU64_1,sz_7);
      pU64_12[sz_7] = 0;
      local_f8 = _DAT_1806c2632;
      uStack_f0 = _UNK_1806c263a;
      local_e8 = CONCAT11(local_e8._1_1_,0x35);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xcb74) == '\0') {
        lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_9 + 0xcb74) = 1;
        func_0x18007d2b0(lVal_9 + 0xcb61,&local_f8);
        func_0x180673140(&LAB_1802e1310);
      }
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_9 + 0xcb61);
      if (*(char *)(lVal_9 + 0xcb72) == '\x01') {
        uVal_16 = *(uint *)(lVal_9 + 0xcb65) ^ _UNK_1806b2cb4;
        uVal_18 = *(uint *)(lVal_9 + 0xcb69) ^ _UNK_1806b2cb8;
        uVal_20 = *(uint *)(lVal_9 + 0xcb6d) ^ _UNK_1806b2cbc;
        *pU64_1 = *pU64_1 ^ _DAT_1806b2cb0;
        *(uint *)(lVal_9 + 0xcb65) = uVal_16;
        *(uint *)(lVal_9 + 0xcb69) = uVal_18;
        *(uint *)(lVal_9 + 0xcb6d) = uVal_20;
        *(byte *)(lVal_9 + 0xcb71) = *(byte *)(lVal_9 + 0xcb71) ^ 0x35;
        *(uint8_t *)(lVal_9 + 0xcb72) = 0;
      }
      local_d8 = (uint8_t  [16])0x0;
      sz_7 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_7) {
        uVal_13 = 0xf;
        if (0xf < sz_7) {
          uVal_8 = sz_7 | 0xf;
          uVal_13 = 0x16;
          if (0x16 < uVal_8) {
            uVal_13 = uVal_8;
          }
          if (uVal_8 < 0xfff) {
            local_66 = 1;
            pU64_11 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
          }
          else {
            local_66 = 1;
            lVal_9 = func_0x180672de0(uVal_13 + 0x28);
            pU64_11 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_11 + -8) = lVal_9;
          }
          local_d8._0_8_ = pU64_11;
        }
        pU64_10 = local_78;
        lVal_9 = (int64_t)local_78 + 0x91;
        local_c8 = (uint32_t)sz_7;
        uStack_c4 = (uint32_t)(sz_7 >> 0x20);
        uStack_c0 = (uint32_t)uVal_13;
        uStack_bc = (uint32_t)(uVal_13 >> 0x20);
        func_0x1806aa960(pU64_11,pU64_1,sz_7);
        pU64_11[sz_7] = 0;
        func_0x1801ccd70(pU64_10,local_d8,local_98,lVal_9,uVal_4,&local_278,uVal_25 & 0xffffff00);
        uVal_13 = CONCAT44(uStack_bc,uStack_c0);
        if (0xf < uVal_13) {
          uVal_8 = uVal_13 + 1;
          lVal_9 = local_d8._0_8_;
          if (0xfff < uVal_8) {
            lVal_9 = *(int64_t *)(local_d8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_9)) goto LAB_1802c3837;
            uVal_8 = uVal_13 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_8);
        }
        if (0xf < (uint64_t)local_88._8_8_) {
          uVal_13 = local_88._8_8_ + 1;
          lVal_9 = local_98._0_8_;
          if (0xfff < uVal_13) {
            lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) {
LAB_1802c3837:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_13 = local_88._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_13);
        }
        return local_78;
      }
      goto LAB_1802c38cd;
    }
  }
  local_67 = 1;
  func_0x18007ba70();
LAB_1802c38cd:
  local_66 = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_10 = (uint64_t *)(*fnPtr_6)();
  return pU64_10;
}

// Unwind@1802c38e0
void Unwind_1802c38e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1802c3940
void Unwind_1802c3940(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x108);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1802c39a0
void Unwind_1802c39a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xca64) = 0;
  *(uint8_t *)(param_2 + 0x267) = 1;
  return;
}

// Unwind@1802c3a00
void Unwind_1802c3a00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x148);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1802c3a70
void Unwind_1802c3a70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xca98) = 0;
  *(uint8_t *)(param_2 + 0x266) = 1;
  return;
}

// Unwind@1802c3ad0
void Unwind_1802c3ad0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x188);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@1802c3b40
void Unwind_1802c3b40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcacc) = 0;
  *(uint8_t *)(param_2 + 0x265) = 1;
  return;
}

// Unwind@1802c3ba0
void Unwind_1802c3ba0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@1802c3c10
void Unwind_1802c3c10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcb10) = 0;
  *(uint8_t *)(param_2 + 0x263) = 1;
  return;
}

// Unwind@1802c3c70
void Unwind_1802c3c70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  return;
}

// Unwind@1802c3cc0
void Unwind_1802c3cc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x260) = 0;
  return;
}

// Unwind@1802c3d10
void Unwind_1802c3d10(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x260);
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x25f) = uVal_1;
  return;
}

// Unwind@1802c3d60
void Unwind_1802c3d60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x25f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1802c3dd0
void Unwind_1802c3dd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x25e) = 0;
  return;
}

// Unwind@1802c3e20
void Unwind_1802c3e20(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x25e);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x267) = uVal_1;
  return;
}

// Unwind@1802c3e70
void Unwind_1802c3e70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x267) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1802c3ee0
void Unwind_1802c3ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x25d) = 0;
  return;
}

// Unwind@1802c3f30
void Unwind_1802c3f30(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x25d);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x266) = uVal_1;
  return;
}

// Unwind@1802c3f80
void Unwind_1802c3f80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x266) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1802c3ff0
void Unwind_1802c3ff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x25c) = 0;
  return;
}

// Unwind@1802c4040
void Unwind_1802c4040(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x25c);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x265) = uVal_1;
  return;
}

// Unwind@1802c4090
void Unwind_1802c4090(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x265) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@1802c4100
void Unwind_1802c4100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x264) = 0;
  return;
}

// Unwind@1802c4150
void Unwind_1802c4150(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x264);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x263) = uVal_1;
  return;
}

// Unwind@1802c41a0
void Unwind_1802c41a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x263) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@1802c4210
void Unwind_1802c4210(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  *(uint8_t *)(param_2 + 0x262) = 0;
  return;
}

// Unwind@1802c4260
void Unwind_1802c4260(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x262);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x261) = uVal_1;
  return;
}

// Unwind@1802c42b0
void Unwind_1802c42b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x261) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1802c4320
void Unwind_1802c4320(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x250));
  return;
}

// Unwind@1802c4370
void Unwind_1802c4370(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xca1c) = 0;
  return;
}

// Unwind@1802c43d0
void Unwind_1802c43d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcb24) = 0;
  *(uint8_t *)(param_2 + 0x264) = 1;
  return;
}

// Unwind@1802c4430
void Unwind_1802c4430(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcb60) = 0;
  *(uint8_t *)(param_2 + 0x261) = 1;
  return;
}

// Unwind@1802c4490
void Unwind_1802c4490(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcb74) = 0;
  *(uint8_t *)(param_2 + 0x262) = 1;
  return;
}

// Unwind@1802c47a0
void Unwind_1802c47a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcba0) = 0;
  return;
}

// func_0x1802c47e0
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802c47e0(int64_t param_1,int64_t *param_2)
{
  float fVal_1;
  uint32_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint8_t (*pArr16_5)[16];
  bool bFlag_6;
  bool bFlag_7;
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [16];
  uint8_t auArr_16 [16];
  float fVal_17;
  float fVal_18;
  float fVal_19;
  float fVal_20;
  char ch_21;
  uint uVal_22;
  int iVal_23;
  uint64_t uVal_24;
  uint64_t uVal_25;
  int64_t lVal_26;
  int64_t lVal_27;
  uint8_t *pU64_28;
  int64_t *pLong_29;
  uint uVal_30;
  int64_t lVal_31;
  int64_t *pLong_32;
  uint64_t uVal_33;
  uint64_t *pU64_34;
  float fVal_35;
  float fVal_36;
  float fVal_37;
  float fVal_38;
  uint8_t auArr_39 [16];
  float fVal_40;
  float fVal_41;
  float fVal_42;
  float fVal_43;
  float fVal_44;
  float fVal_45;
  float fVal_46;
  float fVal_47;
  float fVal_48;
  float fVal_49;
  float fVal_50;
  float local_14bc;
  float local_14b8;
  float local_14b4;
  uint64_t local_14b0;
  int local_14a8;
  uint32_t local_14a4;
  uint8_t local_1488;
  uint32_t local_1484;
  uint8_t local_1480 [8];
  uint64_t local_1478;
  uint64_t local_1470;
  uint auStack_1468 [1247];
  uint32_t local_ec;
  uint64_t uStack_48;
  
  uStack_48 = 0x1802c47f6;
  if (param_2 == (int64_t *)0x0) {
    return;
  }
  lVal_26 = *param_2;
  lVal_27 = *(int64_t *)(lVal_26 + 0x10);
  uVal_30 = *(uint *)(lVal_26 + 0x18);
  pLong_29 = (int64_t *)
            (*(int64_t *)(lVal_27 + 0x48) +
            (uint64_t)
            ((int)((uint64_t)(*(int64_t *)(lVal_27 + 0x50) - *(int64_t *)(lVal_27 + 0x48)) >> 3) -
             1U & 0xeb873e36) * 8);
  lVal_3 = *(int64_t *)(lVal_27 + 0x68);
  pLong_32 = pLong_29;
  do {
    if (*pLong_32 == -1) goto LAB_1802c49bd;
    lVal_31 = *pLong_32 * 0x20;
    pLong_32 = (int64_t *)(lVal_3 + lVal_31);
  } while (*(int *)(lVal_3 + 8 + lVal_31) != -0x1478c1ca);
  if ((*(int64_t *)(lVal_27 + 0x70) == lVal_31 + lVal_3) ||
     (lVal_31 = *(int64_t *)(lVal_31 + lVal_3 + 0x10), lVal_31 == 0)) {
LAB_1802c49bd:
    uVal_22 = std::_Random_device();
    local_ec = 0xffffffff;
    lVal_27 = 3;
    uVal_30 = uVal_22;
    while( true ) {
      uVal_24 = ((uint64_t)((uVal_30 >> 0x1e ^ uVal_30) * 0x6c078965) + lVal_27) - 2;
      uVal_30 = (uint)uVal_24;
      *(uint *)((int64_t)&local_1478 + lVal_27 * 4 + 4) = uVal_30;
      if (lVal_27 == 0x271) break;
      uVal_30 = (((uint)(uVal_24 >> 0x1e) & 3 ^ uVal_30) * 0x6c078965 + (int)lVal_27) - 1;
      auStack_1468[lVal_27 + -2] = uVal_30;
      lVal_27 = lVal_27 + 2;
    }
    local_1470 = CONCAT44(uVal_22,0x270);
    uVal_30 = func_0x1800ac880(&local_1470);
    uVal_24 = (uint64_t)uVal_30 * 0x168;
    if ((uVal_24 & 0xffffff00) == 0) {
      do {
        uVal_30 = func_0x1800ac880(&local_1470);
        uVal_24 = (uint64_t)uVal_30 * 0x168;
      } while ((uVal_24 & 0xffffff00) == 0);
    }
    uVal_30 = func_0x1800ac880(&local_1470);
    uVal_33 = (uint64_t)uVal_30 * 0x168;
    if ((uVal_33 & 0xffffff00) == 0) {
      do {
        uVal_30 = func_0x1800ac880(&local_1470);
        uVal_33 = (uint64_t)uVal_30 * 0x168;
      } while ((uVal_33 & 0xffffff00) == 0);
    }
    uVal_30 = func_0x1800ac880(&local_1470);
    uVal_25 = (uint64_t)uVal_30 * 0x168;
    if ((uVal_25 & 0xffffff00) == 0) {
      do {
        uVal_30 = func_0x1800ac880(&local_1470);
        uVal_25 = (uint64_t)uVal_30 * 0x168;
      } while ((uVal_25 & 0xffffff00) == 0);
    }
    iVal_23 = func_0x1800ac880(&local_1470);
    uVal_30 = func_0x1800ac880(&local_1470);
    uVal_22 = func_0x1800ac880(&local_1470);
    uVal_4 = *(uint64_t *)(lVal_26 + 0x10);
    ch_21 = func_0x1801262b0(lVal_26);
    local_14a4 = 0;
    if (ch_21 == '\0') {
      local_14a4 = DAT_1806aeae4;
    }
    uVal_2 = *(uint32_t *)(lVal_26 + 0x18);
    lVal_27 = func_0x1802e13a0(uVal_4,0xeb873e36);
    auArr_39._0_4_ = uVal_22 >> 0x1e;
    auArr_39._4_4_ = uVal_30 >> 0x1e;
    auArr_39._8_8_ = 0;
    local_14b0 = CONCAT44(SUB164(auArr_39 & _DAT_1806bec50,4) + -1,
                          SUB164(auArr_39 & _DAT_1806bec50,0) + -1);
    local_1488 = 0;
    local_1484 = 0;
    local_14bc = (float)(int)(uVal_25 >> 0x20);
    local_14b8 = (float)(int)(uVal_33 >> 0x20);
    local_14b4 = (float)(int)(uVal_24 >> 0x20);
    local_14a8 = (iVal_23 >> 0x1f) * -2 + -1;
    func_0x1802e1ca0(lVal_27,local_1480,uVal_2,0,&local_14bc);
    pU64_34 = (uint64_t *)
              ((uint64_t)((uint)(local_1478 - 1U) & 0x7f) * 0x3c +
              *(int64_t *)(*(int64_t *)(lVal_27 + 0x50) + (local_1478 - 1U >> 7) * 8));
  }
  else {
    uVal_24 = (uint64_t)((uVal_30 & 0x3ffff) >> 0xb);
    if (((uint64_t)(*(int64_t *)(lVal_31 + 0x10) - *(int64_t *)(lVal_31 + 8) >> 3) <= uVal_24) ||
       (lVal_31 = *(int64_t *)(*(int64_t *)(lVal_31 + 8) + uVal_24 * 8), lVal_31 == 0))
    goto LAB_1802c49bd;
    if (0x3fffe < (*(uint *)(lVal_31 + (uint64_t)(uVal_30 & 0x7ff) * 4) ^ uVal_30 & 0xfffc0000))
    goto LAB_1802c49bd;
    pU64_34 = (uint64_t *)0x0;
    do {
      if (*pLong_29 == -1) goto LAB_1802c4c1d;
      lVal_31 = *pLong_29 * 0x20;
      pLong_29 = (int64_t *)(lVal_3 + lVal_31);
    } while (*(int *)(lVal_3 + 8 + lVal_31) != -0x1478c1ca);
    if ((((*(int64_t *)(lVal_27 + 0x70) == lVal_3 + lVal_31) ||
         (lVal_27 = *(int64_t *)(lVal_3 + lVal_31 + 0x10), lVal_27 == 0)) ||
        ((uint64_t)(*(int64_t *)(lVal_27 + 0x10) - *(int64_t *)(lVal_27 + 8) >> 3) <= uVal_24)) ||
       ((lVal_3 = *(int64_t *)(*(int64_t *)(lVal_27 + 8) + uVal_24 * 8), lVal_3 == 0 ||
        (uVal_22 = *(uint *)(lVal_3 + (uint64_t)(uVal_30 & 0x7ff) * 4),
        0x3fffe < (uVal_30 & 0xfffc0000 ^ uVal_22))))) {
      pU64_34 = (uint64_t *)0x0;
    }
    else {
      pU64_34 = (uint64_t *)
                ((uint64_t)(uVal_22 & 0x7f) * 0x3c +
                *(int64_t *)(*(int64_t *)(lVal_27 + 0x50) + (uint64_t)((uVal_22 & 0x3ff80) >> 4)));
    }
  }
LAB_1802c4c1d:
  fVal_20 = DAT_1806b26b4;
  fVal_46 = *(float *)(param_1 + 0x80) * (DAT_1806b26b4 / (float)DAT_180840c80);
  fVal_40 = (DAT_1806b26b4 / (float)DAT_180840c80) * DAT_1806b2860 + *(float *)(pU64_34 + 3);
  fVal_49 = 0.0;
  if (0.0 <= fVal_40) {
    fVal_49 = fVal_40;
  }
  *(float *)(pU64_34 + 3) = fVal_49;
  fVal_40 = *(float *)(param_2 + 2);
  fVal_1 = *(float *)(param_2 + 3);
  fVal_49 = fVal_49 + *(float *)((int64_t)param_2 + 0x14);
  ch_21 = func_0x1801262b0(lVal_26);
  fVal_41 = DAT_1806b28b0;
  if ((ch_21 == '\0') || (0.0 < *(float *)(pU64_34 + 3))) {
    fVal_35 = (float)func_0x18068afa0((float)(int)*(float *)((int64_t)pU64_34 + 0xc) * fVal_46 *
                                  *(float *)(param_1 + 0x84) + *(float *)pU64_34 + DAT_1806b28b0,
                                  DAT_1806b28b0);
    *(float *)pU64_34 = fVal_35;
    fVal_35 = (float)func_0x18068afa0((float)(int)*(float *)(pU64_34 + 2) * fVal_46 *
                                  *(float *)(param_1 + 0x88) + *(float *)((int64_t)pU64_34 + 4) +
                                  fVal_41,fVal_41);
    *(float *)((int64_t)pU64_34 + 4) = fVal_35;
    fVal_46 = (float)func_0x18068afa0((float)(int)*(float *)((int64_t)pU64_34 + 0x14) * fVal_46 *
                                  *(float *)(param_1 + 0x8c) + *(float *)(pU64_34 + 1) + fVal_41);
    *(float *)(pU64_34 + 1) = fVal_46;
  }
  ch_21 = func_0x1801262b0(lVal_26);
  if (((((ch_21 == '\0') || (*(float *)(pU64_34 + 3) != 0.0)) || (NAN(*(float *)(pU64_34 + 3)))) ||
      (*(char *)(param_1 + 0x90) != '\0')) ||
     ((*(float *)((int64_t)pU64_34 + 0xc) == 0.0 &&
      ((*(float *)(pU64_34 + 2) == 0.0 || (*(float *)((int64_t)pU64_34 + 0x14) == 0.0))))))
  goto LAB_1802c513e;
  local_1470 = 0x18b3a83a43099104;
  pU64_28 = (uint8_t *)0x7d204403eec7b023;
  lVal_26 = *(int64_t *)(lVal_26 + 0x3c8);
  if (*(char *)(param_1 + 0x91) != '\x01') goto LAB_1802c513e;
  if (*(char *)((int64_t)pU64_34 + 0x34) == '\0') {
    fVal_46 = *(float *)pU64_34;
    if (lVal_26 == 0) {
      pU64_28 = &DAT_1806bec60;
      fVal_41 = *(float *)(&DAT_1806bec60 + (uint64_t)(fVal_46 < DAT_1806b28cc) * 4);
    }
    else {
      fVal_41 = (float)(~-(uint)(fVal_46 < DAT_1806b28c8) & (uint)DAT_1806b28b0);
    }
    *(float *)((int64_t)pU64_34 + 0x1c) = fVal_46;
    uVal_24 = *(uint64_t *)((int64_t)pU64_34 + 4);
    pU64_34[4] = uVal_24;
    *(float *)(pU64_34 + 5) = fVal_41;
    bFlag_6 = _DAT_1806bec70 <= (float)uVal_24;
    bFlag_7 = _UNK_1806bec74 <= (float)(uVal_24 >> 0x20);
    *(uint8_t *)((int64_t)pU64_34 + 0x34) = 1;
    *(uint64_t *)((int64_t)pU64_34 + 0x2c) =
         CONCAT44(-(uint)bFlag_7 & _UNK_1806bec84,-(uint)bFlag_6 & _DAT_1806bec80);
  }
  fVal_41 = DAT_180840b20 + DAT_180840b20 + *(float *)(pU64_34 + 7);
  *(float *)(pU64_34 + 7) = fVal_41;
  fVal_46 = fVal_20;
  if ((fVal_41 <= fVal_20) && (fVal_46 = 0.0, 0.0 <= fVal_41)) {
    fVal_46 = fVal_41;
  }
  fVal_35 = *(float *)((int64_t)pU64_34 + 0x1c);
  fVal_47 = *(float *)(pU64_34 + 5);
  uVal_30 = (uint)fVal_46 & 0x7fffffff;
  if ((uVal_30 < 0x7f800000) && (((uint)fVal_35 & 0x7fffffff) < 0x7f800000)) {
    if (0x7f7fffff < ((uint)fVal_47 & 0x7fffffff)) {
LAB_1802c4f61:
      if (0x7f800000 < ((uint)fVal_47 & 0x7fffffff)) goto LAB_1802c4f6c;
      fVal_38 = fVal_46;
      if (uVal_30 < 0x7f800001) {
        if (uVal_30 < 0x7f800000) {
          if (fVal_46 <= DAT_1806b26b4) goto LAB_1802c4f3b;
          fVal_47 = fVal_47 - fVal_35;
        }
        else {
          fVal_47 = (fVal_47 - fVal_35) * fVal_46;
        }
        goto LAB_1802c4f76;
      }
      goto LAB_1802c4f71;
    }
    if (((0.0 <= fVal_47) && (fVal_35 <= 0.0)) || ((fVal_47 <= 0.0 && (0.0 <= fVal_35)))) {
LAB_1802c4f3b:
      fVal_47 = fVal_47 * fVal_46 + (DAT_1806b26b4 - fVal_46) * fVal_35;
    }
    else if ((fVal_46 != DAT_1806b26b4) || (NAN(fVal_46) || NAN(DAT_1806b26b4))) {
      fVal_38 = (float)func_0x18068ae40(pU64_28,fVal_47 - fVal_35,fVal_35);
      pU64_28 = (uint8_t *)(uint64_t)(fVal_47 <= fVal_35);
      if (DAT_1806b26b4 < fVal_46 == fVal_47 <= fVal_35) {
        if (fVal_38 <= fVal_47) goto LAB_1802c5667;
      }
      else if (fVal_47 <= fVal_38) {
LAB_1802c5667:
        fVal_47 = fVal_38;
      }
    }
  }
  else {
    if (((uint)fVal_35 & 0x7fffffff) < 0x7f800001) goto LAB_1802c4f61;
LAB_1802c4f6c:
    fVal_38 = fVal_47 + fVal_35;
LAB_1802c4f71:
    fVal_47 = fVal_38 + fVal_46;
  }
LAB_1802c4f76:
  *(float *)pU64_34 = fVal_47;
  if (lVal_26 == 0) {
    fVal_35 = *(float *)(pU64_34 + 4);
    fVal_47 = *(float *)((int64_t)pU64_34 + 0x2c);
    if ((uVal_30 < 0x7f800000) && (((uint)fVal_35 & 0x7fffffff) < 0x7f800000)) {
      if (((uint)fVal_47 & 0x7fffffff) < 0x7f800000) {
        if (((0.0 <= fVal_47) && (fVal_35 <= 0.0)) || ((fVal_47 <= 0.0 && (0.0 <= fVal_35)))) {
LAB_1802c507a:
          fVal_47 = fVal_47 * fVal_46 + (DAT_1806b26b4 - fVal_46) * fVal_35;
        }
        else if ((fVal_46 != DAT_1806b26b4) || (NAN(fVal_46) || NAN(DAT_1806b26b4))) {
          fVal_38 = (float)func_0x18068ae40(pU64_28,fVal_47 - fVal_35,fVal_35);
          if (DAT_1806b26b4 < fVal_46 == fVal_47 <= fVal_35) {
            if (fVal_38 <= fVal_47) goto LAB_1802c568d;
          }
          else if (fVal_47 <= fVal_38) {
LAB_1802c568d:
            fVal_47 = fVal_38;
          }
        }
      }
      else {
LAB_1802c50f9:
        if (0x7f800000 < ((uint)fVal_47 & 0x7fffffff)) goto LAB_1802c5104;
        if (uVal_30 < 0x7f800001) {
          if (uVal_30 < 0x7f800000) {
            if (fVal_46 <= DAT_1806b26b4) goto LAB_1802c507a;
            fVal_47 = fVal_47 - fVal_35;
          }
          else {
            fVal_47 = (fVal_47 - fVal_35) * fVal_46;
          }
        }
        else {
          fVal_47 = fVal_46 + fVal_46;
        }
      }
    }
    else {
      if (((uint)fVal_35 & 0x7fffffff) < 0x7f800001) goto LAB_1802c50f9;
LAB_1802c5104:
      fVal_47 = fVal_47 + fVal_35 + fVal_46;
    }
    *(float *)((int64_t)pU64_34 + 4) = fVal_47;
    if (DAT_1806b26b4 <= fVal_41) {
      *(uint64_t *)((int64_t)pU64_34 + 0xc) = 0;
      *(float *)((int64_t)pU64_34 + 0x14) = 0.0;
      *pU64_34 = (uint64_t)DAT_1806b28c4;
    }
    goto LAB_1802c513e;
  }
  fVal_35 = *(float *)((int64_t)pU64_34 + 0x24);
  fVal_47 = *(float *)(pU64_34 + 6);
  if ((uVal_30 < 0x7f800000) && (((uint)fVal_35 & 0x7fffffff) < 0x7f800000)) {
    if (((uint)fVal_47 & 0x7fffffff) < 0x7f800000) {
      if (((0.0 <= fVal_47) && (fVal_35 <= 0.0)) || ((fVal_47 <= 0.0 && (0.0 <= fVal_35)))) {
LAB_1802c4ff5:
        fVal_47 = fVal_47 * fVal_46 + (DAT_1806b26b4 - fVal_46) * fVal_35;
      }
      else if ((fVal_46 != DAT_1806b26b4) || (NAN(fVal_46) || NAN(DAT_1806b26b4))) {
        fVal_38 = (float)func_0x18068ae40(pU64_28,fVal_47 - fVal_35,fVal_35);
        if (DAT_1806b26b4 < fVal_46 == fVal_47 <= fVal_35) {
          if (fVal_38 <= fVal_47) goto LAB_1802c567a;
        }
        else if (fVal_47 <= fVal_38) {
LAB_1802c567a:
          fVal_47 = fVal_38;
        }
      }
    }
    else {
LAB_1802c50a0:
      if (0x7f800000 < ((uint)fVal_47 & 0x7fffffff)) goto LAB_1802c50ab;
      if (uVal_30 < 0x7f800001) {
        if (uVal_30 < 0x7f800000) {
          if (fVal_46 <= DAT_1806b26b4) goto LAB_1802c4ff5;
          fVal_47 = fVal_47 - fVal_35;
        }
        else {
          fVal_47 = (fVal_47 - fVal_35) * fVal_46;
        }
      }
      else {
        fVal_47 = fVal_46 + fVal_46;
      }
    }
  }
  else {
    if (((uint)fVal_35 & 0x7fffffff) < 0x7f800001) goto LAB_1802c50a0;
LAB_1802c50ab:
    fVal_47 = fVal_47 + fVal_35 + fVal_46;
  }
  *(float *)*(uint8_t (*)[16])(pU64_34 + 1) = fVal_47;
  if (DAT_1806b26b4 <= fVal_41) {
    *(float *)pU64_34 = 0.0;
    *(uint8_t (*)[16])(pU64_34 + 1) = ZEXT816(0);
  }
LAB_1802c513e:
  lVal_26 = func_0x180129cf0(DAT_180840a58);
  pArr16_5 = *(uint8_t (**)[16])
             (*(int64_t *)(lVal_26 + 0x48) +
             (*(int64_t *)(lVal_26 + 0x50) - 1U &
             (*(int64_t *)(lVal_26 + 0x60) + *(int64_t *)(lVal_26 + 0x58)) - 1U) * 8);
  auArr_16._4_4_ =
       fVal_40 * *(float *)(*pArr16_5 + 4) + fVal_49 * *(float *)(pArr16_5[1] + 4) +
       *(float *)(pArr16_5[2] + 4) * fVal_1 + *(float *)(pArr16_5[3] + 4);
  auArr_16._0_4_ =
       fVal_40 * *(float *)*pArr16_5 + fVal_49 * *(float *)pArr16_5[1] + *(float *)pArr16_5[2] * fVal_1 +
       *(float *)pArr16_5[3];
  auArr_16._8_4_ =
       fVal_40 * *(float *)(*pArr16_5 + 8) + fVal_49 * *(float *)(pArr16_5[1] + 8) +
       *(float *)(pArr16_5[2] + 8) * fVal_1 + *(float *)(pArr16_5[3] + 8);
  auArr_16._12_4_ =
       fVal_40 * *(float *)(*pArr16_5 + 0xc) + fVal_49 * *(float *)(pArr16_5[1] + 0xc) +
       *(float *)(pArr16_5[2] + 0xc) * fVal_1 + *(float *)(pArr16_5[3] + 0xc);
  pArr16_5[3] = auArr_16;
  fVal_36 = (float)func_0x18068a470();
  fVal_49 = (float)func_0x18068dd00();
  fVal_48 = DAT_1806b5bf0;
  fVal_45 = fVal_36 + (fVal_20 - fVal_36);
  fVal_42 = (fVal_20 - fVal_36) * 0.0;
  fVal_43 = fVal_49 * 0.0 + fVal_42;
  fVal_44 = fVal_49 * DAT_1806b5bf0 + fVal_42;
  fVal_42 = fVal_42 * 0.0;
  fVal_36 = fVal_36 + fVal_42;
  fVal_50 = fVal_42 + fVal_49;
  fVal_42 = fVal_42 - fVal_49;
  fVal_49 = *(float *)*pArr16_5;
  fVal_40 = *(float *)(*pArr16_5 + 4);
  fVal_46 = *(float *)(*pArr16_5 + 8);
  fVal_1 = *(float *)(*pArr16_5 + 0xc);
  fVal_41 = *(float *)pArr16_5[1];
  fVal_35 = *(float *)(pArr16_5[1] + 4);
  fVal_47 = *(float *)(pArr16_5[1] + 8);
  fVal_38 = *(float *)(pArr16_5[1] + 0xc);
  fVal_17 = *(float *)pArr16_5[2];
  fVal_18 = *(float *)(pArr16_5[2] + 4);
  fVal_19 = *(float *)(pArr16_5[2] + 8);
  fVal_37 = *(float *)(pArr16_5[2] + 0xc);
  auArr_12._4_4_ = fVal_45 * fVal_40 + fVal_43 * fVal_35 + fVal_18 * fVal_44;
  auArr_12._0_4_ = fVal_45 * fVal_49 + fVal_43 * fVal_41 + fVal_17 * fVal_44;
  auArr_12._8_4_ = fVal_45 * fVal_46 + fVal_43 * fVal_47 + fVal_19 * fVal_44;
  auArr_12._12_4_ = fVal_45 * fVal_1 + fVal_43 * fVal_38 + fVal_37 * fVal_44;
  *pArr16_5 = auArr_12;
  auArr_11._4_4_ = fVal_44 * fVal_40 + fVal_36 * fVal_35 + fVal_50 * fVal_18;
  auArr_11._0_4_ = fVal_44 * fVal_49 + fVal_36 * fVal_41 + fVal_50 * fVal_17;
  auArr_11._8_4_ = fVal_44 * fVal_46 + fVal_36 * fVal_47 + fVal_50 * fVal_19;
  auArr_11._12_4_ = fVal_44 * fVal_1 + fVal_36 * fVal_38 + fVal_50 * fVal_37;
  pArr16_5[1] = auArr_11;
  auArr_10._4_4_ = fVal_43 * fVal_40 + fVal_42 * fVal_35 + fVal_18 * fVal_36;
  auArr_10._0_4_ = fVal_43 * fVal_49 + fVal_42 * fVal_41 + fVal_17 * fVal_36;
  auArr_10._8_4_ = fVal_43 * fVal_46 + fVal_42 * fVal_47 + fVal_19 * fVal_36;
  auArr_10._12_4_ = fVal_43 * fVal_1 + fVal_42 * fVal_38 + fVal_37 * fVal_36;
  pArr16_5[2] = auArr_10;
  fVal_36 = (float)func_0x18068a470();
  fVal_49 = (float)func_0x18068dd00();
  fVal_42 = (fVal_20 - fVal_36) * 0.0;
  fVal_43 = fVal_42 * 0.0;
  fVal_44 = fVal_43 + fVal_36;
  fVal_45 = fVal_49 * 0.0 + fVal_42;
  fVal_50 = fVal_43 - fVal_49;
  fVal_43 = fVal_43 + fVal_49;
  fVal_42 = fVal_49 * fVal_48 + fVal_42;
  fVal_36 = (fVal_20 - fVal_36) + fVal_36;
  fVal_49 = *(float *)*pArr16_5;
  fVal_40 = *(float *)(*pArr16_5 + 4);
  fVal_46 = *(float *)(*pArr16_5 + 8);
  fVal_1 = *(float *)(*pArr16_5 + 0xc);
  fVal_41 = *(float *)pArr16_5[1];
  fVal_35 = *(float *)(pArr16_5[1] + 4);
  fVal_47 = *(float *)(pArr16_5[1] + 8);
  fVal_38 = *(float *)(pArr16_5[1] + 0xc);
  fVal_17 = *(float *)pArr16_5[2];
  fVal_18 = *(float *)(pArr16_5[2] + 4);
  fVal_19 = *(float *)(pArr16_5[2] + 8);
  fVal_37 = *(float *)(pArr16_5[2] + 0xc);
  auArr_13._4_4_ = fVal_44 * fVal_40 + fVal_45 * fVal_35 + fVal_50 * fVal_18;
  auArr_13._0_4_ = fVal_44 * fVal_49 + fVal_45 * fVal_41 + fVal_50 * fVal_17;
  auArr_13._8_4_ = fVal_44 * fVal_46 + fVal_45 * fVal_47 + fVal_50 * fVal_19;
  auArr_13._12_4_ = fVal_44 * fVal_1 + fVal_45 * fVal_38 + fVal_50 * fVal_37;
  *pArr16_5 = auArr_13;
  auArr_14._4_4_ = fVal_42 * fVal_40 + fVal_36 * fVal_35 + fVal_18 * fVal_45;
  auArr_14._0_4_ = fVal_42 * fVal_49 + fVal_36 * fVal_41 + fVal_17 * fVal_45;
  auArr_14._8_4_ = fVal_42 * fVal_46 + fVal_36 * fVal_47 + fVal_19 * fVal_45;
  auArr_14._12_4_ = fVal_42 * fVal_1 + fVal_36 * fVal_38 + fVal_37 * fVal_45;
  pArr16_5[1] = auArr_14;
  auArr_8._4_4_ = fVal_43 * fVal_40 + fVal_42 * fVal_35 + fVal_18 * fVal_44;
  auArr_8._0_4_ = fVal_43 * fVal_49 + fVal_42 * fVal_41 + fVal_17 * fVal_44;
  auArr_8._8_4_ = fVal_43 * fVal_46 + fVal_42 * fVal_47 + fVal_19 * fVal_44;
  auArr_8._12_4_ = fVal_43 * fVal_1 + fVal_42 * fVal_38 + fVal_37 * fVal_44;
  pArr16_5[2] = auArr_8;
  fVal_37 = (float)func_0x18068a470();
  fVal_49 = (float)func_0x18068dd00();
  fVal_36 = (fVal_20 - fVal_37) * 0.0;
  fVal_42 = fVal_36 * 0.0;
  fVal_43 = fVal_42 + fVal_37;
  fVal_44 = fVal_42 + fVal_49;
  fVal_48 = fVal_48 * fVal_49 + fVal_36;
  fVal_42 = fVal_42 - fVal_49;
  fVal_36 = fVal_49 * 0.0 + fVal_36;
  fVal_37 = (fVal_20 - fVal_37) + fVal_37;
  fVal_20 = *(float *)*pArr16_5;
  fVal_49 = *(float *)(*pArr16_5 + 4);
  fVal_40 = *(float *)(*pArr16_5 + 8);
  fVal_46 = *(float *)(*pArr16_5 + 0xc);
  fVal_1 = *(float *)pArr16_5[1];
  fVal_41 = *(float *)(pArr16_5[1] + 4);
  fVal_35 = *(float *)(pArr16_5[1] + 8);
  fVal_47 = *(float *)(pArr16_5[1] + 0xc);
  fVal_38 = *(float *)pArr16_5[2];
  fVal_17 = *(float *)(pArr16_5[2] + 4);
  fVal_18 = *(float *)(pArr16_5[2] + 8);
  fVal_19 = *(float *)(pArr16_5[2] + 0xc);
  auArr_15._4_4_ = fVal_43 * fVal_49 + fVal_44 * fVal_41 + fVal_17 * fVal_48;
  auArr_15._0_4_ = fVal_43 * fVal_20 + fVal_44 * fVal_1 + fVal_38 * fVal_48;
  auArr_15._8_4_ = fVal_43 * fVal_40 + fVal_44 * fVal_35 + fVal_18 * fVal_48;
  auArr_15._12_4_ = fVal_43 * fVal_46 + fVal_44 * fVal_47 + fVal_19 * fVal_48;
  *pArr16_5 = auArr_15;
  auArr_9._4_4_ = fVal_42 * fVal_49 + fVal_43 * fVal_41 + fVal_17 * fVal_36;
  auArr_9._0_4_ = fVal_42 * fVal_20 + fVal_43 * fVal_1 + fVal_38 * fVal_36;
  auArr_9._8_4_ = fVal_42 * fVal_40 + fVal_43 * fVal_35 + fVal_18 * fVal_36;
  auArr_9._12_4_ = fVal_42 * fVal_46 + fVal_43 * fVal_47 + fVal_19 * fVal_36;
  pArr16_5[1] = auArr_9;
  *(float *)pArr16_5[2] = fVal_36 * fVal_20 + fVal_48 * fVal_1 + fVal_37 * fVal_38;
  *(float *)(pArr16_5[2] + 4) = fVal_36 * fVal_49 + fVal_48 * fVal_41 + fVal_37 * fVal_17;
  *(float *)(pArr16_5[2] + 8) = fVal_36 * fVal_40 + fVal_48 * fVal_35 + fVal_37 * fVal_18;
  *(float *)(pArr16_5[2] + 0xc) = fVal_36 * fVal_46 + fVal_48 * fVal_47 + fVal_37 * fVal_19;
  return;
}

// Unwind@1802c5740
void Unwind_1802c5740(void)
{
  func_0x180672f60(&DAT_18083fc80);
  return;
}

// func_0x1802c5770
int64_t func_0x1802c5770(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xfa6f74417a24346) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x5ba21f25cdfed4dd) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1802c5814;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x5ba21f25cdfed4dd);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1802c583a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x5ba21f25cdfed4dd);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffff965ccbf8U) + -0x10;
  }
LAB_1802c5814:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1802c583a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// Unwind@1802c59f0
void Unwind_1802c59f0(void)
{
  func_0x180672f60(&DAT_18083fc90);
  return;
}

// func_0x1802c5a20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802c5a20(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  uint *pU64_3;
  byte *_Str;
  uint32_t uVal_4;
  uint8_t uVal_5;
  func_ptr_t fnPtr_6;
  uint uVal_7;
  uint uVal_8;
  uint64_t *pU64_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t ***ptr3_U64_13;
  uint64_t uVal_14;
  uint64_t *pU64_15;
  uint64_t ****ptr4_U64_16;
  uint8_t *pU64_17;
  uint8_t *pU64_18;
  uint64_t ****ptr4_U64_19;
  uint64_t uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint32_t *pU64_26;
  uint32_t uVal_28;
  uint64_t uVal_27;
  uint8_t ***ptr3_U64_29;
  uint32_t uVal_31;
  uint64_t uVal_30;
  uint in_stack_fffffffffffff9e8;
  uint uVal_32;
  uint8_t **local_5f8;
  uint64_t *local_5f0;
  uint8_t ***local_5c0;
  uint8_t **local_5b8;
  uint64_t *local_5b0;
  uint8_t ***local_580;
  uint8_t **local_578;
  uint64_t *local_570;
  uint8_t ***local_540;
  uint8_t **local_538;
  uint64_t *local_530;
  uint8_t ***local_500;
  uint8_t **local_4f8;
  uint64_t *local_4f0;
  uint8_t ***local_4c0;
  uint8_t **local_4b8;
  uint64_t *local_4b0;
  uint8_t ***local_480;
  uint32_t local_478;
  uint32_t uStack_474;
  uint32_t uStack_470;
  uint32_t uStack_46c;
  uint32_t local_468;
  uint32_t uStack_464;
  uint32_t uStack_460;
  uint32_t uStack_45c;
  uint32_t local_458;
  uint32_t uStack_454;
  uint32_t uStack_450;
  uint32_t uStack_44c;
  uint8_t local_448 [56];
  uint64_t local_410;
  uint8_t local_408 [56];
  uint64_t local_3d0;
  uint8_t local_3c8 [56];
  uint64_t local_390;
  uint8_t local_388 [56];
  uint64_t local_350;
  uint8_t local_348 [56];
  uint64_t local_310;
  uint8_t local_308 [56];
  uint64_t local_2d0;
  uint8_t local_2c8 [56];
  uint64_t local_290;
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
  undefined7 uStack_100;
  uint8_t uStack_f9;
  uint8_t uStack_f8;
  uint16_t uStack_f7;
  uint8_t local_e8 [16];
  uint32_t local_d8;
  uint32_t uStack_d4;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  uint8_t uStack_c8;
  uint8_t uStack_c7;
  uint16_t uStack_c6;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint8_t local_b9;
  uint8_t local_b8;
  uint8_t local_b7;
  uint8_t local_b6;
  uint8_t local_b5;
  uint8_t local_b4;
  uint8_t local_b3;
  uint8_t local_b2;
  uint8_t local_b1;
  uint8_t local_b0;
  uint8_t local_af;
  uint8_t local_ae;
  uint8_t local_ad;
  uint8_t local_ac;
  uint8_t local_ab;
  uint8_t local_aa;
  uint8_t local_a9;
  uint64_t *local_a8;
  uint8_t local_9d;
  uint8_t local_9c;
  uint8_t local_9b;
  uint8_t local_9a;
  uint8_t local_99;
  uint8_t local_98;
  uint8_t local_97;
  uint8_t local_96;
  uint8_t local_95;
  uint8_t local_94;
  uint8_t local_93;
  uint8_t local_92;
  uint8_t local_91;
  uint8_t local_90;
  uint8_t local_8f;
  uint8_t local_8e;
  uint8_t local_8d;
  uint8_t local_8c;
  uint8_t local_8b;
  uint8_t local_8a;
  uint8_t local_89;
  uint64_t ****local_88;
  uint32_t uStack_80;
  uint8_t uStack_7c;
  uint8_t uStack_7b;
  uint8_t uStack_7a;
  uint8_t uStack_79;
  uint16_t uStack_78;
  uint8_t uStack_76;
  uint8_t uStack_75;
  uint8_t uStack_74;
  uint8_t uStack_73;
  uint8_t uStack_72;
  uint8_t uStack_71;
  uint16_t uStack_70;
  uint8_t uStack_6e;
  uint8_t uStack_6d;
  uint16_t uStack_6c;
  uint8_t uStack_6a;
  uint8_t uStack_69;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_e8._8_8_ = _UNK_1806c26b8;
  local_e8._0_8_ = _DAT_1806c26b0;
  local_d8 = 0xe51ab4b6;
  local_a8 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xcbb8) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0xcbb8) = 1;
    func_0x18007cfc0(lVal_12 + 0xcba1,local_e8);
    func_0x180673140(&LAB_1802e2000);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xcba1);
  func_0x1802e4a50(fnPtr_1);
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_e8 = (uint8_t  [16])0x0;
  sz_10 = strlen(fnPtr_1);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_1802ca320:
    local_89 = 1;
    func_0x18007ba70();
LAB_1802ca32d:
    local_a9 = 1;
    func_0x18007ba70();
LAB_1802ca33a:
    local_8a = 1;
    func_0x18007ba70();
LAB_1802ca347:
    local_aa = 1;
    func_0x18007ba70();
LAB_1802ca354:
    local_8b = 1;
    func_0x18007ba70();
LAB_1802ca361:
    local_ab = 1;
    func_0x18007ba70();
LAB_1802ca36e:
    local_8c = 1;
    func_0x18007ba70();
LAB_1802ca37b:
    local_ac = 1;
    func_0x18007ba70();
LAB_1802ca388:
    local_8e = 1;
    func_0x18007ba70();
LAB_1802ca395:
    local_8d = 1;
    func_0x18007ba70();
LAB_1802ca3a2:
    local_90 = 1;
    func_0x18007ba70();
LAB_1802ca3af:
    local_8f = 1;
    func_0x18007ba70();
LAB_1802ca3bc:
    local_91 = 1;
    func_0x18007ba70();
LAB_1802ca3c9:
    local_ad = 1;
    func_0x18007ba70();
LAB_1802ca3d6:
    local_af = 1;
    func_0x18007ba70();
LAB_1802ca3e3:
    local_ae = 1;
    func_0x18007ba70();
LAB_1802ca3f0:
    local_92 = 1;
    func_0x18007ba70();
LAB_1802ca3fd:
    local_b0 = 1;
    func_0x18007ba70();
LAB_1802ca40a:
    local_94 = 1;
    func_0x18007ba70();
LAB_1802ca417:
    local_93 = 1;
    func_0x18007ba70();
LAB_1802ca424:
    local_95 = 1;
    func_0x18007ba70();
LAB_1802ca431:
    local_b1 = 1;
    func_0x18007ba70();
LAB_1802ca43e:
    local_96 = 1;
    func_0x18007ba70();
LAB_1802ca44b:
    local_b2 = 1;
    func_0x18007ba70();
LAB_1802ca458:
    local_97 = 1;
    func_0x18007ba70();
LAB_1802ca465:
    local_b3 = 1;
    func_0x18007ba70();
LAB_1802ca472:
    local_98 = 1;
    func_0x18007ba70();
LAB_1802ca47f:
    local_b4 = 1;
    func_0x18007ba70();
LAB_1802ca48c:
    local_99 = 1;
    func_0x18007ba70();
LAB_1802ca499:
    local_b5 = 1;
    func_0x18007ba70();
LAB_1802ca4a6:
    local_9a = 1;
    func_0x18007ba70();
LAB_1802ca4b3:
    local_b6 = 1;
    func_0x18007ba70();
LAB_1802ca4c0:
    local_9b = 1;
    func_0x18007ba70();
LAB_1802ca4cd:
    local_b7 = 1;
    func_0x18007ba70();
LAB_1802ca4da:
    local_9c = 1;
    func_0x18007ba70();
LAB_1802ca4e7:
    local_b8 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_18 = local_e8;
      uVal_20 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    pU64_18 = local_e8;
    func_0x18018c570(local_a8,0,0,pU64_18);
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    *local_a8 = &PTR_LAB_1806c0780;
    *(uint16_t *)(local_a8 + 0x1a) = 0;
    uVal_4 = _UNK_1806b669c;
    uVal_31 = _UNK_1806b6698;
    uVal_28 = _UNK_1806b6694;
    *(uint32_t *)((int64_t)local_a8 + 0xd4) = _DAT_1806b6690;
    *(uint32_t *)(local_a8 + 0x1b) = uVal_28;
    *(uint32_t *)((int64_t)local_a8 + 0xdc) = uVal_31;
    *(uint32_t *)(local_a8 + 0x1c) = uVal_4;
    uVal_30 = _UNK_1806b2888;
    uVal_27 = _DAT_1806b2880;
    *(uint64_t *)((int64_t)local_a8 + 0xe4) = _DAT_1806b2880;
    *(uint64_t *)((int64_t)local_a8 + 0xec) = uVal_30;
    uVal_4 = _UNK_1806bec9c;
    uVal_31 = _UNK_1806bec98;
    uVal_28 = _UNK_1806bec94;
    *(uint32_t *)((int64_t)local_a8 + 0xf4) = _DAT_1806bec90;
    *(uint32_t *)(local_a8 + 0x1f) = uVal_28;
    *(uint32_t *)((int64_t)local_a8 + 0xfc) = uVal_31;
    *(uint32_t *)(local_a8 + 0x20) = uVal_4;
    *(uint32_t *)((int64_t)local_a8 + 0x104) = 0x40866666;
    *(uint8_t *)(local_a8 + 0x21) = 1;
    *(uint8_t (*)[16])((int64_t)local_a8 + 0x10c) = ZEXT416(DAT_1806beca0);
    *(uint8_t (*)[16])((int64_t)local_a8 + 0x11c) = ZEXT416(DAT_1806b26b4);
    *(uint32_t *)((int64_t)local_a8 + 300) = 0x3f000000;
    *(uint8_t *)(local_a8 + 0x26) = 1;
    *(uint64_t *)((int64_t)local_a8 + 0x134) = DAT_1806becb0;
    *(uint32_t *)((int64_t)local_a8 + 0x13c) = 0x1010100;
    local_a8[0x28] = uVal_27;
    local_a8[0x29] = uVal_30;
    local_a8[0x2a] = uVal_27;
    local_a8[0x2b] = uVal_30;
    local_a8[0x2c] = uVal_27;
    local_a8[0x2d] = uVal_30;
    local_a8[0x2e] = uVal_27;
    local_a8[0x2f] = uVal_30;
    local_a8[0x30] = uVal_27;
    local_a8[0x31] = uVal_30;
    local_a8[0x32] = uVal_27;
    local_a8[0x33] = uVal_30;
    local_a8[0x34] = uVal_27;
    local_a8[0x35] = uVal_30;
    local_a8[0x36] = uVal_27;
    local_a8[0x37] = uVal_30;
    local_410 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_410 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_448);
    }
    pU64_15 = local_a8 + 0x1a;
    uVal_5 = *(uint8_t *)pU64_15;
    local_d8 = _DAT_1806ba1ef;
    uStack_d4 = _UNK_1806ba1f3;
    uStack_d0 = _UNK_1806ba1f7;
    uStack_cc = _UNK_1806ba1fb;
    local_e8._8_8_ = _UNK_1806ba1e7;
    local_e8._0_8_ = _DAT_1806ba1df;
    uStack_c8 = 0xf3;
    uStack_c7 = 199;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcbdc) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcbdc) = 1;
      func_0x1800f15f0(lVal_12 + 0xcbb9,local_e8);
      func_0x180673140(&LAB_1802e2030);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcbb9);
    func_0x1801c09f0(fnPtr_1);
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca320;
    if (sz_10 < 0x10) {
      ptr4_U64_19 = &local_88;
      uVal_20 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_89 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_89 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,fnPtr_1,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcbe8) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcbe8) = 1;
      *(uint64_t *)(lVal_12 + 0xcbe0) = 0x1abbacaf7c2afd4;
      func_0x180673140(&LAB_1802e2060);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xcbe0);
    if (*(char *)(lVal_12 + 0xcbe7) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_12 + 0xcbe5) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_12 + 0xcbe4) << 0x20) ^ SUB168(_DAT_1806b5ce0,0);
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca32d;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_a9 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_a9 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,pU64_2,sz_10);
    pU64_18[sz_10] = 0;
    in_stack_fffffffffffff9e8 = in_stack_fffffffffffff9e8 & 0xffffff00;
    pU64_18 = local_e8;
    ptr4_U64_19 = &local_88;
    func_0x1801ccd70(local_a8,pU64_18,ptr4_U64_19,pU64_15,uVal_5,local_448,in_stack_fffffffffffff9e8);
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    local_3d0 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_3d0 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_408);
    }
    pU64_17 = (uint8_t *)((int64_t)local_a8 + 0xd1);
    uVal_5 = *pU64_17;
    local_88 = _DAT_1806c26c4;
    uStack_80 = (uint32_t)_UNK_1806c26cc;
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806c26cc >> 0x20);
    uStack_7b = 0xfe;
    uStack_7a = 0x45;
    uStack_79 = 0xb1;
    uStack_78 = 0x94a1;
    uStack_76 = 0x8d;
    uStack_75 = 0x83;
    uStack_74 = 0x1f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcc00) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcc00) = 1;
      func_0x18007cd50(lVal_12 + 0xcbe9,&local_88);
      func_0x180673140(&LAB_1802e2090);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcbe9);
    func_0x1802e4a70(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca33a;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_8a = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_8a = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcc18) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcc18) = 1;
      *(uint64_t *)(lVal_12 + 0xcc08) = 0xb156f47d999c9087;
      *(uint32_t *)(lVal_12 + 0xcc10) = 0x838d94a1;
      *(uint16_t *)(lVal_12 + 0xcc14) = 0x11f;
      func_0x180673140(&LAB_1802e20c0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xcc08);
    if (*(char *)(lVal_12 + 0xcc15) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x91219b1ff7f5f1d5;
      *(uint *)(lVal_12 + 0xcc10) = *(uint *)(lVal_12 + 0xcc10) ^ 0xf7f5f1d5;
      *(byte *)(lVal_12 + 0xcc14) = *(byte *)(lVal_12 + 0xcc14) ^ 0x1f;
      *(uint8_t *)(lVal_12 + 0xcc15) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca347;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_aa = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_aa = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_2,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    in_stack_fffffffffffff9e8 = in_stack_fffffffffffff9e8 & 0xffffff00;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801ccd70(local_a8,ptr4_U64_19,pU64_18,pU64_17,uVal_5,local_408,in_stack_fffffffffffff9e8);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_5f8 = &PTR_LAB_1806ba9a0;
    local_5f0 = local_a8;
    local_5c0 = &local_5f8;
    local_478 = *(uint32_t *)((int64_t)local_a8 + 0xd4);
    uStack_474 = *(uint32_t *)(local_a8 + 0x1b);
    uStack_470 = *(uint32_t *)((int64_t)local_a8 + 0xdc);
    uStack_46c = *(uint32_t *)(local_a8 + 0x1c);
    local_88 = _DAT_1806c26d9;
    uStack_80 = (uint32_t)_UNK_1806c26e1;
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806c26e1 >> 0x20);
    uStack_7b = (uint8_t)((uint64_t)_UNK_1806c26e1 >> 0x28);
    uStack_7a = (uint8_t)((uint64_t)_UNK_1806c26e1 >> 0x30);
    uStack_79 = (uint8_t)((uint64_t)_UNK_1806c26e1 >> 0x38);
    uStack_78 = 0xd37f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcc2c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcc2c) = 1;
      func_0x18007c170(lVal_12 + 0xcc19,&local_88);
      func_0x180673140(&LAB_1802e20f0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcc19);
    func_0x1802e49d0(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca354;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_8b = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_8b = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcc3c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcc3c) = 1;
      *(uint64_t *)(lVal_12 + 0xcc30) = 0x90e10655131b659;
      *(uint32_t *)(lVal_12 + 0xcc38) = 0x149a162;
      func_0x180673140(&LAB_1802e2120);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xcc30);
    if (*(char *)(lVal_12 + 0xcc3b) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x656173452549d30d;
      *(uint *)(lVal_12 + 0xcc38) =
           (*(uint *)(lVal_12 + 0xcc38) & 0xffff | (uint)*(byte *)(lVal_12 + 0xcc3a) << 0x10) ^
           SUB164(_DAT_1806b5cf0,0);
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca361;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_ab = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_ab = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    pU64_15 = local_a8;
    lVal_12 = (int64_t)local_a8 + 0xd4;
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_2,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    ptr3_U64_29 = &local_5f8;
    pU64_26 = &local_478;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801cd600(pU64_15,ptr4_U64_19,pU64_18,lVal_12,pU64_26,ptr3_U64_29,
                  in_stack_fffffffffffff9e8 & 0xffffff00);
    uVal_31 = (uint32_t)((uint64_t)ptr3_U64_29 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)pU64_26 >> 0x20);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_390 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_390 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_3c8);
    }
    pU64_26 = (uint32_t *)((int64_t)local_a8 + 0xf4);
    uVal_4 = *pU64_26;
    local_88 = _DAT_1806c26eb;
    uStack_80 = (uint32_t)_UNK_1806c26f3;
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806c26f3 >> 0x20);
    uStack_7b = (uint8_t)((uint64_t)_UNK_1806c26f3 >> 0x28);
    uStack_7a = (uint8_t)((uint64_t)_UNK_1806c26f3 >> 0x30);
    uStack_79 = (uint8_t)((uint64_t)_UNK_1806c26f3 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcc50) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcc50) = 1;
      func_0x18007d150(lVal_12 + 0xcc3d,&local_88);
      func_0x180673140(&LAB_1802e2150);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xcc3d);
    if (*(char *)(lVal_12 + 0xcc4d) == '\x01') {
      uVal_32 = *(uint *)(lVal_12 + 0xcc41) ^ _UNK_1806ae4d4;
      uVal_22 = *(uint *)(lVal_12 + 0xcc45) ^ _UNK_1806ae4d8;
      uVal_24 = *(uint *)(lVal_12 + 0xcc49) ^ _UNK_1806ae4dc;
      *pU64_3 = *pU64_3 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_12 + 0xcc41) = uVal_32;
      *(uint *)(lVal_12 + 0xcc45) = uVal_22;
      *(uint *)(lVal_12 + 0xcc49) = uVal_24;
      *(uint8_t *)(lVal_12 + 0xcc4d) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca36e;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_8c = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_8c = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,pU64_3,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcc5c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcc5c) = 1;
      *(uint32_t *)(lVal_12 + 0xcc54) = 0xc4af1a96;
      *(uint16_t *)(lVal_12 + 0xcc58) = 0x181;
      func_0x180673140(&LAB_1802e2170);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xcc54);
    if (*(char *)(lVal_12 + 0xcc59) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xa1d573c5;
      *(byte *)(lVal_12 + 0xcc58) = *(byte *)(lVal_12 + 0xcc58) ^ 0x81;
      *(uint8_t *)(lVal_12 + 0xcc59) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca37b;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_ac = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_ac = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_3,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_27 = CONCAT44(uVal_28,uVal_4);
    uVal_11 = CONCAT44(uVal_31,0x3f000000);
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801cd2e0(local_a8,ptr4_U64_19,pU64_18,pU64_26,uVal_27,uVal_11,0x40000000,local_3c8,0);
    uVal_28 = (uint32_t)((uint64_t)uVal_27 >> 0x20);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_14 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_14 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_14);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_14 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_14) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_14 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_14);
    }
    local_350 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_350 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_388);
    }
    pU64_15 = local_a8 + 0x1f;
    uVal_31 = *(uint32_t *)pU64_15;
    local_d8 = _DAT_1806c270b;
    uStack_d4 = _UNK_1806c270f;
    uStack_d0 = _UNK_1806c2713;
    uStack_cc = _UNK_1806c2717;
    local_e8._8_8_ = _UNK_1806c2703;
    local_e8._0_8_ = _DAT_1806c26fb;
    uStack_c8 = 0x35;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcc80) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcc80) = 1;
      func_0x180086ce0(lVal_12 + 0xcc5d,local_e8);
      func_0x180673140(&LAB_1802e21a0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcc5d);
    func_0x1802e3c80(fnPtr_1);
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca388;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_14 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_14) {
        uVal_20 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_8e = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_8e = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,fnPtr_1,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    local_108 = _DAT_1806c271c;
    uStack_100 = (undefined7)_UNK_1806c2724;
    uStack_f9 = 0xe0;
    uStack_f8 = 0x5b;
    uStack_f7 = 0xa9d6;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcc98) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcc98) = 1;
      func_0x18007cb80(lVal_12 + 0xcc81,&local_108);
      func_0x180673140(&LAB_1802e21d0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcc81);
    func_0x1801c1840(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca395;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_14 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_14) {
        uVal_20 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_8d = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_8d = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    uVal_27 = CONCAT44(uVal_28,uVal_31);
    uVal_11 = uVal_11 & 0xffffffff00000000;
    pU64_18 = local_e8;
    ptr4_U64_19 = &local_88;
    func_0x1801cd2e0(local_a8,pU64_18,ptr4_U64_19,pU64_15,uVal_27,uVal_11,0x40a00000,local_388,0);
    uVal_28 = (uint32_t)((uint64_t)uVal_27 >> 0x20);
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_14 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_14) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_14 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_14);
    }
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_14 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_14) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_14 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_14);
    }
    local_310 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_310 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_348);
    }
    pU64_26 = (uint32_t *)((int64_t)local_a8 + 0xfc);
    uVal_31 = *pU64_26;
    uStack_78 = (uint16_t)((uint)_DAT_1806c273e >> 8);
    uStack_76 = (uint8_t)((uint)_DAT_1806c273e >> 0x18);
    uStack_75 = (uint8_t)_UNK_1806c2742;
    uStack_74 = (uint8_t)((uint)_UNK_1806c2742 >> 8);
    uStack_73 = (uint8_t)((uint)_UNK_1806c2742 >> 0x10);
    uStack_72 = (uint8_t)((uint)_UNK_1806c2742 >> 0x18);
    uStack_71 = (uint8_t)_UNK_1806c2746;
    uStack_70 = (uint16_t)((uint)_UNK_1806c2746 >> 8);
    uStack_6e = (uint8_t)((uint)_UNK_1806c2746 >> 0x18);
    uStack_6d = (uint8_t)_UNK_1806c274a;
    uStack_6c = (uint16_t)((uint)_UNK_1806c274a >> 8);
    uStack_6a = (uint8_t)((uint)_UNK_1806c274a >> 0x18);
    local_88 = _DAT_1806c272f;
    uStack_80 = (uint32_t)_UNK_1806c2737;
    uStack_7c = (uint8_t)((uint7)_UNK_1806c2737 >> 0x20);
    uStack_7b = (uint8_t)((uint7)_UNK_1806c2737 >> 0x28);
    uStack_7a = (uint8_t)((uint7)_UNK_1806c2737 >> 0x30);
    uStack_79 = DAT_1806c273e;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xccbc) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xccbc) = 1;
      func_0x18007ce20(lVal_12 + 0xcc99,&local_88);
      func_0x180673140(&LAB_1802e2200);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcc99);
    func_0x1802e4aa0(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca3a2;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_14 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_14) {
        uVal_20 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_90 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_90 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    local_108 = _DAT_1806c274e;
    uStack_100 = (undefined7)_UNK_1806c2756;
    uStack_f9 = (uint8_t)((uint64_t)_UNK_1806c2756 >> 0x38);
    uStack_f8 = 0x45;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xccd0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xccd0) = 1;
      func_0x18007d2b0(lVal_12 + 0xccbd,&local_108);
      func_0x180673140(&LAB_1802e2230);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xccbd);
    if (*(char *)(lVal_12 + 0xccce) == '\x01') {
      uVal_32 = *(uint *)(lVal_12 + 0xccc1) ^ _UNK_1806b6494;
      uVal_22 = *(uint *)(lVal_12 + 0xccc5) ^ _UNK_1806b6498;
      uVal_24 = *(uint *)(lVal_12 + 0xccc9) ^ _UNK_1806b649c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b6490;
      *(uint *)(lVal_12 + 0xccc1) = uVal_32;
      *(uint *)(lVal_12 + 0xccc5) = uVal_22;
      *(uint *)(lVal_12 + 0xccc9) = uVal_24;
      *(byte *)(lVal_12 + 0xcccd) = *(byte *)(lVal_12 + 0xcccd) ^ 0x45;
      *(uint8_t *)(lVal_12 + 0xccce) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca3af;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_14 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_14) {
        uVal_20 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        local_8f = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_8f = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_3,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_27 = CONCAT44(uVal_28,uVal_31);
    uVal_11 = uVal_11 & 0xffffffff00000000;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801cd2e0(local_a8,ptr4_U64_19,pU64_18,pU64_26,uVal_27,uVal_11,0x40a00000,local_348,0);
    uVal_31 = (uint32_t)(uVal_11 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)uVal_27 >> 0x20);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_2d0 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_2d0 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_308);
    }
    pU64_15 = local_a8 + 0x20;
    uVal_4 = *(uint32_t *)pU64_15;
    uStack_78 = _UNK_1806c276f;
    uStack_76 = (uint8_t)_UNK_1806c2771;
    uStack_75 = (uint8_t)((uint)_UNK_1806c2771 >> 8);
    uStack_74 = (uint8_t)((uint)_UNK_1806c2771 >> 0x10);
    uStack_73 = (uint8_t)((uint)_UNK_1806c2771 >> 0x18);
    uStack_72 = (uint8_t)_UNK_1806c2775;
    uStack_71 = (uint8_t)((uint)_UNK_1806c2775 >> 8);
    uStack_70 = (uint16_t)((uint)_UNK_1806c2775 >> 0x10);
    uStack_6e = (uint8_t)_UNK_1806c2779;
    uStack_6d = (uint8_t)((uint)_UNK_1806c2779 >> 8);
    uStack_6c = (uint16_t)((uint)_UNK_1806c2779 >> 0x10);
    local_88 = _DAT_1806c275f;
    uStack_80 = (uint32_t)_UNK_1806c2767;
    uStack_7c = (uint8_t)((uint6)_UNK_1806c2767 >> 0x20);
    uStack_7b = (uint8_t)((uint6)_UNK_1806c2767 >> 0x28);
    uStack_7a = (uint8_t)_DAT_1806c276d;
    uStack_79 = (uint8_t)((ushort)_DAT_1806c276d >> 8);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xccf0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xccf0) = 1;
      func_0x18008fa60(lVal_12 + 0xccd1,&local_88);
      func_0x180673140(&LAB_1802e2260);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xccd1);
    func_0x1802e4b00(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca3bc;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_91 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_91 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcd04) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcd04) = 1;
      *(uint64_t *)(lVal_12 + 0xccf8) = 0xde4f6bcb64221a4e;
      *(uint32_t *)(lVal_12 + 0xcd00) = 0x14d046e;
      func_0x180673140(&LAB_1802e2290);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xccf8);
    if (*(char *)(lVal_12 + 0xcd03) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xbb2103bf0b4d771d;
      *(uint *)(lVal_12 + 0xcd00) =
           (*(uint *)(lVal_12 + 0xcd00) & 0xffff | (uint)*(byte *)(lVal_12 + 0xcd02) << 0x10) ^
           SUB164(_DAT_1806b26d0,0);
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca3c9;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_ad = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_ad = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_2,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_27 = CONCAT44(uVal_28,uVal_4);
    uVal_30 = CONCAT44(uVal_31,0x3f800000);
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801cd2e0(local_a8,ptr4_U64_19,pU64_18,pU64_15,uVal_27,uVal_30,0x42340000,local_308,0);
    uVal_31 = (uint32_t)((uint64_t)uVal_30 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)uVal_27 >> 0x20);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_290 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_290 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_2c8);
    }
    pU64_26 = (uint32_t *)((int64_t)local_a8 + 0x104);
    uVal_4 = *pU64_26;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcd08) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcd08) = 1;
      *(uint16_t *)(lVal_12 + 0xcd05) = 0x12d;
      func_0x180673140(&LAB_1802e22c0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (byte *)(lVal_12 + 0xcd05);
    if (*(char *)(lVal_12 + 0xcd06) == '\x01') {
      *_Str = *_Str ^ 0x2d;
      *(uint8_t *)(lVal_12 + 0xcd06) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)_Str);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca3d6;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_af = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_af = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,_Str,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcd18) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcd18) = 1;
      *(uint64_t *)(lVal_12 + 0xcd10) = 0x1939cce70ab827f;
      func_0x180673140(&LAB_1802e22e0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xcd10);
    if (*(char *)(lVal_12 + 0xcd17) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_12 + 0xcd15) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_12 + 0xcd14) << 0x20) ^ SUB168(_DAT_1806ae240,0);
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca3e3;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_ae = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_ae = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_2,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_27 = CONCAT44(uVal_28,uVal_4);
    uVal_32 = 0x41700000;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801cd2e0(local_a8,ptr4_U64_19,pU64_18,pU64_26,uVal_27,CONCAT44(uVal_31,0x3dcccccd),0x41700000,
                  local_2c8,0);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_250 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_250 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_288);
    }
    pU64_15 = local_a8 + 0x21;
    uVal_5 = *(uint8_t *)pU64_15;
    uStack_c8 = (uint8_t)_UNK_1806c279d;
    uStack_c7 = (uint8_t)((uint)_UNK_1806c279d >> 8);
    uStack_c6 = (uint16_t)((uint)_UNK_1806c279d >> 0x10);
    uStack_c4 = _UNK_1806c27a1;
    uStack_c0 = _UNK_1806c27a5;
    local_d8 = _DAT_1806c278d;
    uStack_d4 = _UNK_1806c2791;
    uStack_d0 = _UNK_1806c2795;
    uStack_cc = _DAT_1806c2799;
    local_e8._8_8_ = _UNK_1806c2785;
    local_e8._0_8_ = _DAT_1806c277d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcd48) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcd48) = 1;
      func_0x1801b1b20(lVal_12 + 0xcd19,local_e8);
      func_0x180673140(&LAB_1802e2310);
    }
    uVal_8 = _UNK_1806b560c;
    uVal_7 = _UNK_1806b5608;
    uVal_24 = _UNK_1806b5604;
    uVal_22 = _DAT_1806b5600;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xcd19);
    if (*(char *)(lVal_12 + 0xcd45) == '\x01') {
      uVal_21 = *(uint *)(lVal_12 + 0xcd1d) ^ _UNK_1806b5604;
      uVal_23 = *(uint *)(lVal_12 + 0xcd21) ^ _UNK_1806b5608;
      uVal_25 = *(uint *)(lVal_12 + 0xcd25) ^ _UNK_1806b560c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b5600;
      *(uint *)(lVal_12 + 0xcd1d) = uVal_21;
      *(uint *)(lVal_12 + 0xcd21) = uVal_23;
      *(uint *)(lVal_12 + 0xcd25) = uVal_25;
      *(uint *)(lVal_12 + 0xcd29) = *(uint *)(lVal_12 + 0xcd29) ^ uVal_22;
      *(uint *)(lVal_12 + 0xcd2d) = *(uint *)(lVal_12 + 0xcd2d) ^ uVal_24;
      *(uint *)(lVal_12 + 0xcd31) = *(uint *)(lVal_12 + 0xcd31) ^ uVal_7;
      *(uint *)(lVal_12 + 0xcd35) = *(uint *)(lVal_12 + 0xcd35) ^ uVal_8;
      *(uint64_t *)(lVal_12 + 0xcd39) = *(uint64_t *)(lVal_12 + 0xcd39) ^ SUB168(_DAT_1806b5b60,0);
      *(byte *)(lVal_12 + 0xcd41) = *(byte *)(lVal_12 + 0xcd41) ^ 0x45;
      *(byte *)(lVal_12 + 0xcd42) = *(byte *)(lVal_12 + 0xcd42) ^ 0x89;
      *(byte *)(lVal_12 + 0xcd43) = *(byte *)(lVal_12 + 0xcd43) ^ 199;
      *(byte *)(lVal_12 + 0xcd44) = *(byte *)(lVal_12 + 0xcd44) ^ 0xd3;
      *(uint8_t *)(lVal_12 + 0xcd45) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca3f0;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_92 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_92 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_3,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcd5c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcd5c) = 1;
      *(uint8_t *)(lVal_12 + 0xcd5a) = 1;
      *(uint64_t *)(lVal_12 + 0xcd50) = 0x30003d12beaee704;
      *(uint16_t *)(lVal_12 + 0xcd58) = 0x892b;
      func_0x180673140(&LAB_1802e2340);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xcd50);
    if (*(char *)(lVal_12 + 0xcd5a) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x5f694973d3c78945;
      *(byte *)(lVal_12 + 0xcd58) = *(byte *)(lVal_12 + 0xcd58) ^ 0x45;
      *(byte *)(lVal_12 + 0xcd59) = *(byte *)(lVal_12 + 0xcd59) ^ 0x89;
      *(uint8_t *)(lVal_12 + 0xcd5a) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca3fd;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_b0 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_b0 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,pU64_2,sz_10);
    pU64_18[sz_10] = 0;
    pU64_18 = local_288;
    uVal_27 = CONCAT71((int7)((uint64_t)uVal_27 >> 8),uVal_5);
    pU64_17 = local_e8;
    ptr4_U64_19 = &local_88;
    func_0x1801ccd70(local_a8,pU64_17,ptr4_U64_19,pU64_15,uVal_27,pU64_18,uVal_32 & 0xffffff00);
    uVal_31 = (uint32_t)((uint64_t)pU64_18 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)uVal_27 >> 0x20);
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    local_5b8 = &PTR_LAB_1806bad30;
    local_5b0 = local_a8;
    local_580 = &local_5b8;
    uVal_4 = *(uint32_t *)((int64_t)local_a8 + 0x10c);
    local_88 = _DAT_1806c27a9;
    uStack_80 = (uint32_t)_UNK_1806c27b1;
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806c27b1 >> 0x20);
    uStack_7b = (uint8_t)((uint64_t)_UNK_1806c27b1 >> 0x28);
    uStack_7a = (uint8_t)((uint64_t)_UNK_1806c27b1 >> 0x30);
    uStack_79 = (uint8_t)((uint64_t)_UNK_1806c27b1 >> 0x38);
    uStack_78 = 0x7315;
    uStack_76 = 6;
    uStack_75 = 7;
    uStack_74 = 0xe;
    uStack_73 = 0x8b;
    uStack_72 = 0x34;
    uStack_71 = 0xf5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcd78) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcd78) = 1;
      func_0x18007d9e0(lVal_12 + 0xcd5d,&local_88);
      func_0x180673140(&LAB_1802e2370);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcd5d);
    func_0x1801be7f0(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca40a;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_94 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_94 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_17,fnPtr_1,sz_10);
    pU64_17[sz_10] = 0;
    local_108 = _DAT_1806c27c1;
    uStack_100 = (undefined7)_UNK_1806c27c9;
    uStack_f9 = (uint8_t)((uint64_t)_UNK_1806c27c9 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcd8c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcd8c) = 1;
      func_0x18007d150(lVal_12 + 0xcd79,&local_108);
      func_0x180673140(&LAB_1802e23a0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xcd79);
    if (*(char *)(lVal_12 + 0xcd89) == '\x01') {
      uVal_32 = *(uint *)(lVal_12 + 0xcd7d) ^ _UNK_1806af244;
      uVal_22 = *(uint *)(lVal_12 + 0xcd81) ^ _UNK_1806af248;
      uVal_24 = *(uint *)(lVal_12 + 0xcd85) ^ _UNK_1806af24c;
      *pU64_3 = *pU64_3 ^ _DAT_1806af240;
      *(uint *)(lVal_12 + 0xcd7d) = uVal_32;
      *(uint *)(lVal_12 + 0xcd81) = uVal_22;
      *(uint *)(lVal_12 + 0xcd85) = uVal_24;
      *(uint8_t *)(lVal_12 + 0xcd89) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca417;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_93 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_93 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    pU64_15 = local_a8;
    lVal_12 = (int64_t)local_a8 + 0x10c;
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_3,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_32 = 0x41400000;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801cd2e0(pU64_15,ptr4_U64_19,pU64_18,lVal_12,CONCAT44(uVal_28,uVal_4),
                  CONCAT44(uVal_31,0x40000000),0x41400000,&local_5b8,0);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_210 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_210 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_248);
    }
    pU64_15 = local_a8 + 0x22;
    local_468 = *(uint32_t *)pU64_15;
    uStack_464 = *(uint32_t *)((int64_t)local_a8 + 0x114);
    uStack_460 = *(uint32_t *)(local_a8 + 0x23);
    uStack_45c = *(uint32_t *)((int64_t)local_a8 + 0x11c);
    uStack_78 = (uint16_t)_UNK_1806c27e1;
    uStack_76 = (uint8_t)((uint)_UNK_1806c27e1 >> 0x10);
    uStack_75 = (uint8_t)((uint)_UNK_1806c27e1 >> 0x18);
    uStack_74 = (uint8_t)_UNK_1806c27e5;
    uStack_73 = (uint8_t)((uint)_UNK_1806c27e5 >> 8);
    uStack_72 = (uint8_t)((uint)_UNK_1806c27e5 >> 0x10);
    uStack_71 = (uint8_t)((uint)_UNK_1806c27e5 >> 0x18);
    uStack_70 = (uint16_t)_UNK_1806c27e9;
    uStack_6e = (uint8_t)((uint)_UNK_1806c27e9 >> 0x10);
    uStack_6d = (uint8_t)((uint)_UNK_1806c27e9 >> 0x18);
    local_88 = _DAT_1806c27d1;
    uStack_80 = _UNK_1806c27d9;
    uStack_7c = (uint8_t)_DAT_1806c27dd;
    uStack_7b = (uint8_t)((uint)_DAT_1806c27dd >> 8);
    uStack_7a = (uint8_t)((uint)_DAT_1806c27dd >> 0x10);
    uStack_79 = (uint8_t)((uint)_DAT_1806c27dd >> 0x18);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcdac) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcdac) = 1;
      func_0x18008fba0(lVal_12 + 0xcd8d,&local_88);
      func_0x180673140(&LAB_1802e23c0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcd8d);
    func_0x1802e4b40(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca424;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_95 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_95 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcdbc) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcdbc) = 1;
      *(uint8_t *)(lVal_12 + 0xcdb8) = 1;
      *(uint64_t *)(lVal_12 + 0xcdb0) = 0xffa7f2f8baea21c9;
      func_0x180673140(&LAB_1802e23f0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xcdb0);
    if (*(char *)(lVal_12 + 0xcdb8) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xffc3978bc98f5399;
      *(uint8_t *)(lVal_12 + 0xcdb8) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca431;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_b1 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_b1 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_2,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801cd600(local_a8,ptr4_U64_19,pU64_18,pU64_15,&local_468,local_248,uVal_32);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_1d0 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_1d0 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_208);
    }
    pU64_15 = local_a8 + 0x24;
    local_458 = *(uint32_t *)pU64_15;
    uStack_454 = *(uint32_t *)((int64_t)local_a8 + 0x124);
    uStack_450 = *(uint32_t *)(local_a8 + 0x25);
    uStack_44c = *(uint32_t *)((int64_t)local_a8 + 300);
    local_d8 = _DAT_1806c27fd;
    uStack_d4 = _UNK_1806c2801;
    uStack_d0 = _UNK_1806c2805;
    uStack_cc = _UNK_1806c2809;
    local_e8._8_8_ = _UNK_1806c27f5;
    local_e8._0_8_ = _DAT_1806c27ed;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcde0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcde0) = 1;
      func_0x18008f8e0(lVal_12 + 0xcdbd,local_e8);
      func_0x180673140(&LAB_1802e2410);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcdbd);
    func_0x1802e4b70(fnPtr_1);
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca43e;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_96 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_96 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,fnPtr_1,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcdf4) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcdf4) = 1;
      *(uint8_t *)(lVal_12 + 0xcdf2) = 1;
      *(uint64_t *)(lVal_12 + 0xcde8) = 0xfea6e6caf76de5b2;
      *(uint16_t *)(lVal_12 + 0xcdf0) = 0x8b83;
      func_0x180673140(&LAB_1802e2440);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xcde8);
    if (*(char *)(lVal_12 + 0xcdf2) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x9bd595af851d8be7;
      *(byte *)(lVal_12 + 0xcdf0) = *(byte *)(lVal_12 + 0xcdf0) ^ 0xe7;
      *(byte *)(lVal_12 + 0xcdf1) = *(byte *)(lVal_12 + 0xcdf1) ^ 0x8b;
      *(uint8_t *)(lVal_12 + 0xcdf2) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca44b;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_b2 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_b2 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,pU64_2,sz_10);
    pU64_18[sz_10] = 0;
    pU64_26 = &local_458;
    uVal_32 = uVal_32 & 0xffffff00;
    pU64_18 = local_e8;
    ptr4_U64_19 = &local_88;
    func_0x1801cd600(local_a8,pU64_18,ptr4_U64_19,pU64_15,pU64_26,local_208,uVal_32);
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    local_190 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_190 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_1c8);
    }
    pU64_15 = local_a8 + 0x26;
    uVal_5 = *(uint8_t *)pU64_15;
    local_88 = _DAT_1806c280d;
    uStack_80 = (uint32_t)_UNK_1806c2815;
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806c2815 >> 0x20);
    uStack_7b = (uint8_t)((uint64_t)_UNK_1806c2815 >> 0x28);
    uStack_7a = (uint8_t)((uint64_t)_UNK_1806c2815 >> 0x30);
    uStack_79 = 0x52;
    uStack_78 = 0x2a16;
    uStack_76 = 0x93;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xce0c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xce0c) = 1;
      func_0x18007cb80(lVal_12 + 0xcdf5,&local_88);
      func_0x180673140(&LAB_1802e2470);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcdf5);
    func_0x1800f36d0(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca458;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_97 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_97 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xce18) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xce18) = 1;
      *(uint32_t *)(lVal_12 + 0xce10) = 0xcbfe2639;
      *(uint16_t *)(lVal_12 + 0xce14) = 0x19b;
      func_0x180673140(&LAB_1802e24a0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xce10);
    if (*(char *)(lVal_12 + 0xce15) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xbb935373;
      *(byte *)(lVal_12 + 0xce14) = *(byte *)(lVal_12 + 0xce14) ^ 0x9b;
      *(uint8_t *)(lVal_12 + 0xce15) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca465;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_b3 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_b3 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_3,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    pU64_18 = local_1c8;
    uVal_27 = CONCAT71((int7)((uint64_t)pU64_26 >> 8),uVal_5);
    ptr4_U64_19 = &local_88;
    pU64_17 = local_e8;
    func_0x1801ccd70(local_a8,ptr4_U64_19,pU64_17,pU64_15,uVal_27,pU64_18,uVal_32 & 0xffffff00);
    uVal_31 = (uint32_t)((uint64_t)pU64_18 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)uVal_27 >> 0x20);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_578 = &PTR_LAB_1806c3300;
    local_570 = local_a8;
    local_540 = &local_578;
    uVal_4 = *(uint32_t *)((int64_t)local_a8 + 0x134);
    local_88 = _DAT_1806c2820;
    uStack_80 = (uint32_t)_UNK_1806c2828;
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806c2828 >> 0x20);
    uStack_7b = (uint8_t)((uint64_t)_UNK_1806c2828 >> 0x28);
    uStack_7a = 0x6c;
    uStack_79 = 0xfa;
    uStack_78 = 0xc747;
    uStack_76 = 0x1d;
    uStack_75 = 0x6c;
    uStack_74 = 0xab;
    uStack_73 = 0x41;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xce30) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xce30) = 1;
      func_0x18007cab0(lVal_12 + 0xce19,&local_88);
      func_0x180673140(&LAB_1802e24d0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xce19);
    func_0x1802e49f0(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca472;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_98 = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_98 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_17;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_17,fnPtr_1,sz_10);
    pU64_17[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xce44) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xce44) = 1;
      *(uint64_t *)(lVal_12 + 0xce38) = 0xf37036f97d12927d;
      *(uint32_t *)(lVal_12 + 0xce40) = 0x17f8f43;
      func_0x180673140(&LAB_1802e2500);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xce38);
    if (*(char *)(lVal_12 + 0xce43) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x971941d90d7fe737;
      *(uint *)(lVal_12 + 0xce40) =
           (*(uint *)(lVal_12 + 0xce40) & 0xffff | (uint)*(byte *)(lVal_12 + 0xce42) << 0x10) ^
           SUB164(_DAT_1806b2720,0);
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca47f;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_b4 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_b4 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    pU64_15 = local_a8;
    lVal_12 = (int64_t)local_a8 + 0x134;
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_2,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_27 = CONCAT44(uVal_28,uVal_4);
    uVal_30 = CONCAT44(uVal_31,0x40000000);
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801cd2e0(pU64_15,ptr4_U64_19,pU64_18,lVal_12,uVal_27,uVal_30,0x42480000,&local_578,0);
    uVal_31 = (uint32_t)((uint64_t)uVal_30 >> 0x20);
    uVal_28 = (uint32_t)((uint64_t)uVal_27 >> 0x20);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_538 = &PTR_LAB_1806c3300;
    local_530 = local_a8;
    local_500 = &local_538;
    uVal_4 = *(uint32_t *)(local_a8 + 0x27);
    local_88 = _DAT_1806c2836;
    uStack_80 = (uint32_t)_UNK_1806c283e;
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806c283e >> 0x20);
    uStack_7b = (uint8_t)((uint64_t)_UNK_1806c283e >> 0x28);
    uStack_7a = (uint8_t)((uint64_t)_UNK_1806c283e >> 0x30);
    uStack_79 = 0xb2;
    uStack_78 = 0x37f4;
    uStack_76 = 0x8d;
    uStack_75 = 9;
    uStack_74 = 0x42;
    uStack_73 = 5;
    uStack_72 = 0x7f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xce60) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xce60) = 1;
      func_0x18007d3c0(lVal_12 + 0xce45,&local_88);
      func_0x180673140(&LAB_1802e2530);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xce45);
    func_0x180217800(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca48c;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_99 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_99 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xce78) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xce78) = 1;
      *(uint8_t *)(lVal_12 + 0xce74) = 1;
      *(uint64_t *)(lVal_12 + 0xce68) = 0xae1a1f031bc032d3;
      *(uint32_t *)(lVal_12 + 0xce70) = 0x6bd92ffe;
      func_0x180673140(&LAB_1802e2560);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xce68);
    if (*(char *)(lVal_12 + 0xce74) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xc77f77236bad4799;
      *(uint *)(lVal_12 + 0xce70) = *(uint *)(lVal_12 + 0xce70) ^ 0x6bad4799;
      *(uint8_t *)(lVal_12 + 0xce74) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca499;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_b5 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_b5 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    pU64_9 = local_a8;
    pU64_15 = local_a8 + 0x27;
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_2,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_32 = 0x41200000;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801cd2e0(pU64_9,ptr4_U64_19,pU64_18,pU64_15,CONCAT44(uVal_28,uVal_4),
                  CONCAT44(uVal_31,0x3f000000),0x41200000,&local_538,0);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_150 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_150 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_188);
    }
    pU64_17 = (uint8_t *)((int64_t)local_a8 + 0x13c);
    uVal_5 = *pU64_17;
    local_88 = _DAT_1806c284d;
    uStack_80 = (uint32_t)_UNK_1806c2855;
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806c2855 >> 0x20);
    uStack_7b = (uint8_t)((uint64_t)_UNK_1806c2855 >> 0x28);
    uStack_7a = (uint8_t)((uint64_t)_UNK_1806c2855 >> 0x30);
    uStack_79 = (uint8_t)((uint64_t)_UNK_1806c2855 >> 0x38);
    uStack_78 = 0x5eec;
    uStack_76 = 0xe8;
    uStack_75 = 0xf9;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xce90) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xce90) = 1;
      func_0x18007cfc0(lVal_12 + 0xce79,&local_88);
      func_0x180673140(&LAB_1802e2590);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xce79);
    func_0x1802e4bd0(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca4a6;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_9a = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_9a = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xce9c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xce9c) = 1;
      *(uint8_t *)(lVal_12 + 0xce9a) = 1;
      *(uint32_t *)(lVal_12 + 0xce94) = 0x98f455d4;
      *(uint16_t *)(lVal_12 + 0xce98) = 0x1b2e;
      func_0x180673140(&LAB_1802e25c0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xce94);
    if (*(char *)(lVal_12 + 0xce9a) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xf9913b87;
      *(byte *)(lVal_12 + 0xce98) = *(byte *)(lVal_12 + 0xce98) ^ 0x45;
      *(byte *)(lVal_12 + 0xce99) = *(byte *)(lVal_12 + 0xce99) ^ 0x1b;
      *(uint8_t *)(lVal_12 + 0xce9a) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca4b3;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_b6 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_b6 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_3,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801ccd70(local_a8,ptr4_U64_19,pU64_18,pU64_17,uVal_5,local_188,uVal_32);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_110 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_110 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_148);
    }
    pU64_17 = (uint8_t *)((int64_t)local_a8 + 0x13d);
    uVal_5 = *pU64_17;
    local_88 = _DAT_1806c2861;
    uStack_80 = (uint32_t)_UNK_1806c2869;
    uStack_7c = (uint8_t)((uint64_t)_UNK_1806c2869 >> 0x20);
    uStack_7b = (uint8_t)((uint64_t)_UNK_1806c2869 >> 0x28);
    uStack_7a = (uint8_t)((uint64_t)_UNK_1806c2869 >> 0x30);
    uStack_79 = (uint8_t)((uint64_t)_UNK_1806c2869 >> 0x38);
    uStack_78 = 0x1ebf;
    uStack_76 = 0x71;
    uStack_75 = 0xdf;
    uStack_74 = 0xc0;
    uStack_73 = 0x27;
    uStack_72 = 0x72;
    uStack_71 = 0x7d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xceb8) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xceb8) = 1;
      func_0x18007d9e0(lVal_12 + 0xce9d,&local_88);
      func_0x180673140(&LAB_1802e25f0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xce9d);
    func_0x1802e4bf0(fnPtr_1);
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca4c0;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_9b = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_9b = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,fnPtr_1,sz_10);
    pU64_18[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcec4) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcec4) = 1;
      *(uint8_t *)(lVal_12 + 0xcec2) = 1;
      *(uint32_t *)(lVal_12 + 0xcebc) = 0xd8700490;
      *(uint16_t *)(lVal_12 + 0xcec0) = 0x49ca;
      func_0x180673140(&LAB_1802e2620);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xcebc);
    if (*(char *)(lVal_12 + 0xcec2) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xab056bdd;
      *(byte *)(lVal_12 + 0xcec0) = *(byte *)(lVal_12 + 0xcec0) ^ 0xaf;
      *(byte *)(lVal_12 + 0xcec1) = *(byte *)(lVal_12 + 0xcec1) ^ 0x49;
      *(uint8_t *)(lVal_12 + 0xcec2) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca4cd;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_b7 = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_b7 = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,pU64_3,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    ptr4_U64_19 = &local_88;
    pU64_18 = local_e8;
    func_0x1801ccd70(local_a8,ptr4_U64_19,pU64_18,pU64_17,uVal_5,local_148,uVal_32);
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    local_4f8 = &PTR_LAB_1806c3330;
    local_4f0 = local_a8;
    local_4c0 = &local_4f8;
    uVal_5 = *(uint8_t *)((int64_t)local_a8 + 0x13e);
    local_d8 = _DAT_1806c2889;
    uStack_d4 = _UNK_1806c288d;
    uStack_d0 = _UNK_1806c2891;
    uStack_cc = _UNK_1806c2895;
    local_e8._8_8_ = _UNK_1806c2881;
    local_e8._0_8_ = _DAT_1806c2879;
    uStack_c8 = 0x99;
    uStack_c7 = 0x34;
    uStack_c6 = 0x818f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xceec) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xceec) = 1;
      func_0x180086790(lVal_12 + 0xcec5,local_e8);
      func_0x180673140(&LAB_1802e2650);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcec5);
    func_0x1802e4c20(fnPtr_1);
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca4da;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_9c = 1;
        ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
        local_88 = ptr4_U64_19;
      }
      else {
        local_9c = 1;
        ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
        ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_19[-1] = ptr3_U64_13;
        local_88 = ptr4_U64_19;
      }
    }
    uStack_78 = (uint16_t)sz_10;
    uStack_76 = (uint8_t)(sz_10 >> 0x10);
    uStack_75 = (uint8_t)(sz_10 >> 0x18);
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint8_t)(sz_10 >> 0x30);
    uStack_71 = (uint8_t)(sz_10 >> 0x38);
    uStack_70 = (uint16_t)uVal_20;
    uStack_6e = (uint8_t)(uVal_20 >> 0x10);
    uStack_6d = (uint8_t)(uVal_20 >> 0x18);
    uStack_6c = (uint16_t)(uVal_20 >> 0x20);
    uStack_6a = (uint8_t)(uVal_20 >> 0x30);
    uStack_69 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(ptr4_U64_19,fnPtr_1,sz_10);
    *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcefc) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcefc) = 1;
      *(uint64_t *)(lVal_12 + 0xcef0) = 0x2c83ee91f5873ea1;
      *(uint16_t *)(lVal_12 + 0xcef8) = 0x1ed;
      func_0x180673140(&LAB_1802e2680);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xcef0);
    if (*(char *)(lVal_12 + 0xcef9) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x7fd3adb181e15bed;
      *(byte *)(lVal_12 + 0xcef8) = *(byte *)(lVal_12 + 0xcef8) ^ 0xed;
      *(uint8_t *)(lVal_12 + 0xcef9) = 0;
    }
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802ca4e7;
    uVal_20 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_11) {
        uVal_20 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_b8 = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        local_b8 = 1;
        lVal_12 = func_0x180672de0(uVal_20 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_e8._0_8_ = pU64_18;
    }
    pU64_15 = local_a8;
    lVal_12 = (int64_t)local_a8 + 0x13e;
    local_d8 = (uint32_t)sz_10;
    uStack_d4 = (uint32_t)(sz_10 >> 0x20);
    uStack_d0 = (uint32_t)uVal_20;
    uStack_cc = (uint32_t)(uVal_20 >> 0x20);
    func_0x1806aa960(pU64_18,pU64_2,sz_10);
    pU64_18[sz_10] = 0;
    uVal_32 = uVal_32 & 0xffffff00;
    pU64_18 = local_e8;
    ptr4_U64_19 = &local_88;
    func_0x1801ccd70(pU64_15,pU64_18,ptr4_U64_19,lVal_12,uVal_5,&local_4f8,uVal_32);
    uVal_20 = CONCAT44(uStack_cc,uStack_d0);
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      lVal_12 = local_e8._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    uVal_20 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT24(uStack_6c,CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))
                              ));
    if (0xf < uVal_20) {
      uVal_11 = uVal_20 + 1;
      ptr4_U64_16 = local_88;
      if (0xfff < uVal_11) {
        ptr4_U64_16 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_16)))
        goto LAB_1802ca319;
        uVal_11 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_16,uVal_11);
    }
    local_4b8 = &PTR_LAB_1806c3330;
    local_4b0 = local_a8;
    local_480 = &local_4b8;
    uVal_5 = *(uint8_t *)((int64_t)local_a8 + 0x13f);
    local_d8 = _DAT_1806c28ad;
    uStack_d4 = _UNK_1806c28b1;
    uStack_d0 = _UNK_1806c28b5;
    local_e8._8_8_ = _UNK_1806c28a5;
    local_e8._0_8_ = _DAT_1806c289d;
    uStack_cc = CONCAT31(0x6c2f99,(char)_UNK_1806c28b9);
    uStack_c8 = 0xeb;
    uStack_c7 = 0xc9;
    uStack_c6 = 0xf522;
    uStack_c4 = CONCAT31(uStack_c4._1_3_,0xcd);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcf24) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xcf24) = 1;
      func_0x1801b1390(lVal_12 + 0xcefd,local_e8);
      func_0x180673140(&LAB_1802e26b0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xcefd);
    func_0x1802e4c80(fnPtr_1);
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    sz_10 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_10) {
      uVal_20 = 0xf;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_20 = 0x16;
        if (0x16 < uVal_11) {
          uVal_20 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          local_9d = 1;
          ptr4_U64_19 = (uint64_t ****)func_0x180672de0(uVal_20 + 1);
          local_88 = ptr4_U64_19;
        }
        else {
          local_9d = 1;
          ptr3_U64_13 = (uint64_t ***)func_0x180672de0(uVal_20 + 0x28);
          ptr4_U64_19 = (uint64_t ****)((int64_t)ptr3_U64_13 + 0x27U & 0xffffffffffffffe0);
          ptr4_U64_19[-1] = ptr3_U64_13;
          local_88 = ptr4_U64_19;
        }
      }
      uStack_78 = (uint16_t)sz_10;
      uStack_76 = (uint8_t)(sz_10 >> 0x10);
      uStack_75 = (uint8_t)(sz_10 >> 0x18);
      uStack_74 = (uint8_t)(sz_10 >> 0x20);
      uStack_73 = (uint8_t)(sz_10 >> 0x28);
      uStack_72 = (uint8_t)(sz_10 >> 0x30);
      uStack_71 = (uint8_t)(sz_10 >> 0x38);
      uStack_70 = (uint16_t)uVal_20;
      uStack_6e = (uint8_t)(uVal_20 >> 0x10);
      uStack_6d = (uint8_t)(uVal_20 >> 0x18);
      uStack_6c = (uint16_t)(uVal_20 >> 0x20);
      uStack_6a = (uint8_t)(uVal_20 >> 0x30);
      uStack_69 = (uint8_t)(uVal_20 >> 0x38);
      func_0x1806aa960(ptr4_U64_19,fnPtr_1,sz_10);
      *(uint8_t *)((int64_t)ptr4_U64_19 + sz_10) = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xcf34) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0xcf34) = 1;
        *(uint8_t *)(lVal_12 + 0xcf32) = 1;
        *(uint64_t *)(lVal_12 + 0xcf28) = 0x490e99b9f32ad4cd;
        *(uint16_t *)(lVal_12 + 0xcf30) = 0xbdcc;
        func_0x180673140(&LAB_1802e26e0);
      }
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_12 + 0xcf28);
      if (*(char *)(lVal_12 + 0xcf32) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0x194db9cd9b4dbd9f;
        *(byte *)(lVal_12 + 0xcf30) = *(byte *)(lVal_12 + 0xcf30) ^ 0x9f;
        *(byte *)(lVal_12 + 0xcf31) = *(byte *)(lVal_12 + 0xcf31) ^ 0xbd;
        *(uint8_t *)(lVal_12 + 0xcf32) = 0;
      }
      local_e8 = (uint8_t  [16])0x0;
      sz_10 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_10) {
        uVal_20 = 0xf;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_20 = 0x16;
          if (0x16 < uVal_11) {
            uVal_20 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            local_b9 = 1;
            pU64_18 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
          }
          else {
            local_b9 = 1;
            lVal_12 = func_0x180672de0(uVal_20 + 0x28);
            pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_18 + -8) = lVal_12;
          }
          local_e8._0_8_ = pU64_18;
        }
        pU64_15 = local_a8;
        lVal_12 = (int64_t)local_a8 + 0x13f;
        local_d8 = (uint32_t)sz_10;
        uStack_d4 = (uint32_t)(sz_10 >> 0x20);
        uStack_d0 = (uint32_t)uVal_20;
        uStack_cc = (uint32_t)(uVal_20 >> 0x20);
        func_0x1806aa960(pU64_18,pU64_2,sz_10);
        pU64_18[sz_10] = 0;
        func_0x1801ccd70(pU64_15,local_e8,&local_88,lVal_12,uVal_5,&local_4b8,uVal_32 & 0xffffff00);
        uVal_20 = CONCAT44(uStack_cc,uStack_d0);
        if (0xf < uVal_20) {
          uVal_11 = uVal_20 + 1;
          lVal_12 = local_e8._0_8_;
          if (0xfff < uVal_11) {
            lVal_12 = *(int64_t *)(local_e8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_12)) goto LAB_1802ca319;
            uVal_11 = uVal_20 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_11);
        }
        uVal_20 = CONCAT17(uStack_69,
                          CONCAT16(uStack_6a,
                                   CONCAT24(uStack_6c,
                                            CONCAT13(uStack_6d,CONCAT12(uStack_6e,uStack_70)))));
        if (0xf < uVal_20) {
          uVal_11 = uVal_20 + 1;
          ptr4_U64_19 = local_88;
          if (0xfff < uVal_11) {
            ptr4_U64_19 = (uint64_t ****)local_88[-1];
            if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19))) {
LAB_1802ca319:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_11 = uVal_20 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_19,uVal_11);
        }
        return local_a8;
      }
      goto LAB_1802ca501;
    }
  }
  local_9d = 1;
  func_0x18007ba70();
LAB_1802ca501:
  local_b9 = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_15 = (uint64_t *)(*fnPtr_6)();
  return pU64_15;
}

// Unwind@1802ca510
void Unwind_1802ca510(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x238);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x200));
    *(uint64_t *)(param_2 + 0x238) = 0;
  }
  return;
}

// Unwind@1802ca580
void Unwind_1802ca580(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcbdc) = 0;
  *(uint8_t *)(param_2 + 0x5bf) = 1;
  return;
}

// Unwind@1802ca5e0
void Unwind_1802ca5e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x278);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x240));
    *(uint64_t *)(param_2 + 0x278) = 0;
  }
  return;
}

// Unwind@1802ca650
void Unwind_1802ca650(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcc00) = 0;
  *(uint8_t *)(param_2 + 0x5be) = 1;
  return;
}

// Unwind@1802ca6b0
void Unwind_1802ca6b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2b8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x280));
    *(uint64_t *)(param_2 + 0x2b8) = 0;
  }
  return;
}

// Unwind@1802ca720
void Unwind_1802ca720(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcc50) = 0;
  *(uint8_t *)(param_2 + 0x5bc) = 1;
  return;
}

// Unwind@1802ca780
void Unwind_1802ca780(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2f8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2c0));
    *(uint64_t *)(param_2 + 0x2f8) = 0;
  }
  return;
}

// Unwind@1802ca7f0
void Unwind_1802ca7f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcc80) = 0;
  *(uint8_t *)(param_2 + 0x5ba) = 1;
  return;
}

// Unwind@1802ca850
void Unwind_1802ca850(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x338);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x300));
    *(uint64_t *)(param_2 + 0x338) = 0;
  }
  return;
}

// Unwind@1802ca8c0
void Unwind_1802ca8c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xccbc) = 0;
  *(uint8_t *)(param_2 + 0x5b8) = 1;
  return;
}

// Unwind@1802ca920
void Unwind_1802ca920(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x378);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x340));
    *(uint64_t *)(param_2 + 0x378) = 0;
  }
  return;
}

// Unwind@1802ca990
void Unwind_1802ca990(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xccf0) = 0;
  *(uint8_t *)(param_2 + 0x5b7) = 1;
  return;
}

// Unwind@1802ca9f0
void Unwind_1802ca9f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x3b8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x380));
    *(uint64_t *)(param_2 + 0x3b8) = 0;
  }
  return;
}

// Unwind@1802caa60
void Unwind_1802caa60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x3f8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x3c0));
    *(uint64_t *)(param_2 + 0x3f8) = 0;
  }
  return;
}

// Unwind@1802caad0
void Unwind_1802caad0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcd48) = 0;
  *(uint8_t *)(param_2 + 0x5b6) = 1;
  return;
}

// Unwind@1802cab30
void Unwind_1802cab30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x438);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x400));
    *(uint64_t *)(param_2 + 0x438) = 0;
  }
  return;
}

// Unwind@1802caba0
void Unwind_1802caba0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcdac) = 0;
  *(uint8_t *)(param_2 + 0x5b3) = 1;
  return;
}

// Unwind@1802cac00
void Unwind_1802cac00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x478);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x440));
    *(uint64_t *)(param_2 + 0x478) = 0;
  }
  return;
}

// Unwind@1802cac70
void Unwind_1802cac70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcde0) = 0;
  *(uint8_t *)(param_2 + 0x5b2) = 1;
  return;
}

// Unwind@1802cacd0
void Unwind_1802cacd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x4b8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x480));
    *(uint64_t *)(param_2 + 0x4b8) = 0;
  }
  return;
}

// Unwind@1802cad40
void Unwind_1802cad40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xce0c) = 0;
  *(uint8_t *)(param_2 + 0x5b1) = 1;
  return;
}

// Unwind@1802cada0
void Unwind_1802cada0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x4f8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x4c0));
    *(uint64_t *)(param_2 + 0x4f8) = 0;
  }
  return;
}

// Unwind@1802cae10
void Unwind_1802cae10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xce90) = 0;
  *(uint8_t *)(param_2 + 0x5ae) = 1;
  return;
}

// Unwind@1802cae70
void Unwind_1802cae70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x538);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x500));
    *(uint64_t *)(param_2 + 0x538) = 0;
  }
  return;
}

// Unwind@1802caee0
void Unwind_1802caee0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xceb8) = 0;
  *(uint8_t *)(param_2 + 0x5ad) = 1;
  return;
}

// Unwind@1802caf40
void Unwind_1802caf40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@1802caf90
void Unwind_1802caf90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x59f) = 0;
  return;
}

// Unwind@1802cafe0
void Unwind_1802cafe0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x59f);
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x5bf) = uVal_1;
  return;
}

// Unwind@1802cb030
void Unwind_1802cb030(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5bf) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x238), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x200));
    *(uint64_t *)(param_2 + 0x238) = 0;
  }
  return;
}

// Unwind@1802cb0a0
void Unwind_1802cb0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x59e) = 0;
  return;
}

// Unwind@1802cb0f0
void Unwind_1802cb0f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x59e);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5be) = uVal_1;
  return;
}

// Unwind@1802cb140
void Unwind_1802cb140(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5be) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x278), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x240));
    *(uint64_t *)(param_2 + 0x278) = 0;
  }
  return;
}

// Unwind@1802cb1b0
void Unwind_1802cb1b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x59d) = 0;
  return;
}

// Unwind@1802cb200
void Unwind_1802cb200(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x59d);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5bd) = uVal_1;
  return;
}

// Unwind@1802cb250
void Unwind_1802cb250(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5bd) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1802cb2c0
void Unwind_1802cb2c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x59c) = 0;
  return;
}

// Unwind@1802cb310
void Unwind_1802cb310(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x59c);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5bc) = uVal_1;
  return;
}

// Unwind@1802cb360
void Unwind_1802cb360(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5bc) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x280));
    *(uint64_t *)(param_2 + 0x2b8) = 0;
  }
  return;
}

// Unwind@1802cb3d0
void Unwind_1802cb3d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5bb) = 0;
  return;
}

// Unwind@1802cb420
void Unwind_1802cb420(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5bb);
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x5ba) = uVal_1;
  return;
}

// Unwind@1802cb470
void Unwind_1802cb470(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5ba) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2f8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2c0));
    *(uint64_t *)(param_2 + 0x2f8) = 0;
  }
  return;
}

// Unwind@1802cb4e0
void Unwind_1802cb4e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x5b9) = 0;
  return;
}

// Unwind@1802cb530
void Unwind_1802cb530(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5b9);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5b8) = uVal_1;
  return;
}

// Unwind@1802cb580
void Unwind_1802cb580(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b8) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x338), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x300));
    *(uint64_t *)(param_2 + 0x338) = 0;
  }
  return;
}

// Unwind@1802cb5f0
void Unwind_1802cb5f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x59b) = 0;
  return;
}

// Unwind@1802cb640
void Unwind_1802cb640(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x59b);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5b7) = uVal_1;
  return;
}

// Unwind@1802cb690
void Unwind_1802cb690(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x378), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x340));
    *(uint64_t *)(param_2 + 0x378) = 0;
  }
  return;
}

// Unwind@1802cb700
void Unwind_1802cb700(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x59a) = 0;
  return;
}

// Unwind@1802cb750
void Unwind_1802cb750(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x59a);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x599) = uVal_1;
  return;
}

// Unwind@1802cb7a0
void Unwind_1802cb7a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x599) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x3b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x380));
    *(uint64_t *)(param_2 + 0x3b8) = 0;
  }
  return;
}

// Unwind@1802cb810
void Unwind_1802cb810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x598) = 0;
  return;
}

// Unwind@1802cb860
void Unwind_1802cb860(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x598);
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x5b6) = uVal_1;
  return;
}

// Unwind@1802cb8b0
void Unwind_1802cb8b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x3f8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x3c0));
    *(uint64_t *)(param_2 + 0x3f8) = 0;
  }
  return;
}

// Unwind@1802cb920
void Unwind_1802cb920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x5b5) = 0;
  return;
}

// Unwind@1802cb970
void Unwind_1802cb970(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5b5);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5b4) = uVal_1;
  return;
}

// Unwind@1802cb9c0
void Unwind_1802cb9c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b4) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1802cba30
void Unwind_1802cba30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x597) = 0;
  return;
}

// Unwind@1802cba80
void Unwind_1802cba80(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x597);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5b3) = uVal_1;
  return;
}

// Unwind@1802cbad0
void Unwind_1802cbad0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b3) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x438), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x400));
    *(uint64_t *)(param_2 + 0x438) = 0;
  }
  return;
}

// Unwind@1802cbb40
void Unwind_1802cbb40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x596) = 0;
  return;
}

// Unwind@1802cbb90
void Unwind_1802cbb90(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x596);
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x5b2) = uVal_1;
  return;
}

// Unwind@1802cbbe0
void Unwind_1802cbbe0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b2) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x478), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x440));
    *(uint64_t *)(param_2 + 0x478) = 0;
  }
  return;
}

// Unwind@1802cbc50
void Unwind_1802cbc50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x595) = 0;
  return;
}

// Unwind@1802cbca0
void Unwind_1802cbca0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x595);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5b1) = uVal_1;
  return;
}

// Unwind@1802cbcf0
void Unwind_1802cbcf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b1) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x4b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x480));
    *(uint64_t *)(param_2 + 0x4b8) = 0;
  }
  return;
}

// Unwind@1802cbd60
void Unwind_1802cbd60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x594) = 0;
  return;
}

// Unwind@1802cbdb0
void Unwind_1802cbdb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x594);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5b0) = uVal_1;
  return;
}

// Unwind@1802cbe00
void Unwind_1802cbe00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5b0) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1802cbe70
void Unwind_1802cbe70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x593) = 0;
  return;
}

// Unwind@1802cbec0
void Unwind_1802cbec0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x593);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5af) = uVal_1;
  return;
}

// Unwind@1802cbf10
void Unwind_1802cbf10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5af) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1802cbf80
void Unwind_1802cbf80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x592) = 0;
  return;
}

// Unwind@1802cbfd0
void Unwind_1802cbfd0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x592);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5ae) = uVal_1;
  return;
}

// Unwind@1802cc020
void Unwind_1802cc020(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5ae) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x4f8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x4c0));
    *(uint64_t *)(param_2 + 0x4f8) = 0;
  }
  return;
}

// Unwind@1802cc090
void Unwind_1802cc090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x591) = 0;
  return;
}

// Unwind@1802cc0e0
void Unwind_1802cc0e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x591);
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x5ad) = uVal_1;
  return;
}

// Unwind@1802cc130
void Unwind_1802cc130(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5ad) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x538), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x500));
    *(uint64_t *)(param_2 + 0x538) = 0;
  }
  return;
}

// Unwind@1802cc1a0
void Unwind_1802cc1a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x590) = 0;
  return;
}

// Unwind@1802cc1f0
void Unwind_1802cc1f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x590);
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x5ac) = uVal_1;
  return;
}

// Unwind@1802cc240
void Unwind_1802cc240(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5ac) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@1802cc2b0
void Unwind_1802cc2b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  *(uint8_t *)(param_2 + 0x58f) = 0;
  return;
}

// Unwind@1802cc300
void Unwind_1802cc300(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x58f);
  func_0x180001e70(param_2 + 0x5c0);
  *(uint8_t *)(param_2 + 0x5ab) = uVal_1;
  return;
}

// Unwind@1802cc350
void Unwind_1802cc350(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5ab) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@1802cc3c0
void Unwind_1802cc3c0(uint64_t param_1,int64_t param_2)
{
  func_0x18018ce50(*(uint64_t *)(param_2 + 0x5a0));
  return;
}

// Unwind@1802cc410
void Unwind_1802cc410(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcbb8) = 0;
  return;
}

// Unwind@1802cc470
void Unwind_1802cc470(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcc2c) = 0;
  *(uint8_t *)(param_2 + 0x5bd) = 1;
  return;
}

// Unwind@1802cc4d0
void Unwind_1802cc4d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcc98) = 0;
  *(uint8_t *)(param_2 + 0x5bb) = 1;
  return;
}

// Unwind@1802cc530
void Unwind_1802cc530(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xccd0) = 0;
  *(uint8_t *)(param_2 + 0x5b9) = 1;
  return;
}

// Unwind@1802cc590
void Unwind_1802cc590(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcd78) = 0;
  *(uint8_t *)(param_2 + 0x5b4) = 1;
  return;
}

// Unwind@1802cc5f0
void Unwind_1802cc5f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcd8c) = 0;
  *(uint8_t *)(param_2 + 0x5b5) = 1;
  return;
}

// Unwind@1802cc650
void Unwind_1802cc650(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xce30) = 0;
  *(uint8_t *)(param_2 + 0x5b0) = 1;
  return;
}

// Unwind@1802cc6b0
void Unwind_1802cc6b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xce60) = 0;
  *(uint8_t *)(param_2 + 0x5af) = 1;
  return;
}

// Unwind@1802cc710
void Unwind_1802cc710(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xceec) = 0;
  *(uint8_t *)(param_2 + 0x5ac) = 1;
  return;
}

// Unwind@1802cc770
void Unwind_1802cc770(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcf24) = 0;
  *(uint8_t *)(param_2 + 0x5ab) = 1;
  return;
}

// Unwind@1802cca90
void Unwind_1802cca90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcf5c) = 0;
  return;
}

// func_0x1802ccb10
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802ccb10(int64_t param_1,uint8_t (*param_2)[16],float *param_3,float *param_4, char param_5)
{
  uint8_t auArr_1 [16];
  float fVal_3;
  uint8_t auArr_2 [16];
  float fVal_4;
  uint8_t auArr_5 [16];
  float fVal_6;
  float fVal_7;
  float fVal_8;
  
  if (*(char *)(param_1 + 0x108) != '\x01') {
    if (param_5 != '\0') {
      param_4 = param_3;
    }
    *(float *)*param_2 = *param_4;
LAB_1802ccbdf:
    *(float *)(*param_2 + 4) = param_4[1];
    *(float *)(*param_2 + 8) = param_4[2];
    *(float *)(*param_2 + 0xc) = param_4[3];
    return;
  }
  fVal_3 = *(float *)*param_2;
  if (param_5 == '\0') {
    fVal_4 = *param_4;
    if (DAT_1806b2674 <= (float)((uint)(fVal_3 - fVal_4) & _DAT_1806b55f0)) {
      fVal_7 = param_4[1];
      fVal_6 = *(float *)(*param_2 + 4);
    }
    else {
      fVal_6 = *(float *)(*param_2 + 4);
      fVal_7 = param_4[1];
      if ((((float)((uint)(fVal_6 - fVal_7) & _DAT_1806b55f0) < DAT_1806b2674) &&
          ((float)((uint)(*(float *)(*param_2 + 8) - param_4[2]) & _DAT_1806b55f0) < DAT_1806b2674))
         && ((float)((uint)(*(float *)(*param_2 + 0xc) - param_4[3]) & _DAT_1806b55f0) <
             DAT_1806b2674)) {
        *(float *)*param_2 = fVal_4;
        goto LAB_1802ccbdf;
      }
    }
    fVal_8 = *(float *)(param_1 + 0x10c);
    auArr_5 = insertps(ZEXT416((uint)fVal_4),ZEXT416((uint)fVal_7),0x10);
    auArr_5._8_8_ = *(uint64_t *)(param_4 + 2);
  }
  else {
    fVal_4 = *param_3;
    if (DAT_1806b2674 <= (float)((uint)(fVal_3 - fVal_4) & _DAT_1806b55f0)) {
      fVal_7 = param_3[1];
      fVal_6 = *(float *)(*param_2 + 4);
    }
    else {
      fVal_6 = *(float *)(*param_2 + 4);
      fVal_7 = param_3[1];
      if ((((float)((uint)(fVal_6 - fVal_7) & _DAT_1806b55f0) < DAT_1806b2674) &&
          ((float)((uint)(*(float *)(*param_2 + 8) - param_3[2]) & _DAT_1806b55f0) < DAT_1806b2674))
         && ((float)((uint)(*(float *)(*param_2 + 0xc) - param_3[3]) & _DAT_1806b55f0) <
             DAT_1806b2674)) {
        *(float *)*param_2 = fVal_4;
        *(float *)(*param_2 + 4) = param_3[1];
        *(float *)(*param_2 + 8) = param_3[2];
        *(float *)(*param_2 + 0xc) = param_3[3];
        return;
      }
    }
    fVal_8 = *(float *)(param_1 + 0x10c);
    auArr_5 = insertps(ZEXT416((uint)fVal_4),ZEXT416((uint)fVal_7),0x10);
    auArr_5._8_8_ = *(uint64_t *)(param_3 + 2);
  }
  fVal_8 = DAT_180840b20 * fVal_8;
  auArr_2 = insertps(ZEXT416((uint)fVal_3),ZEXT416((uint)fVal_6),0x10);
  fVal_3 = (float)*(uint64_t *)(*param_2 + 8);
  fVal_4 = (float)((uint64_t)*(uint64_t *)(*param_2 + 8) >> 0x20);
  auArr_1._4_4_ = fVal_8 * (auArr_5._4_4_ - auArr_2._4_4_) + auArr_2._4_4_;
  auArr_1._0_4_ = fVal_8 * (auArr_5._0_4_ - auArr_2._0_4_) + auArr_2._0_4_;
  auArr_1._8_4_ = fVal_8 * (auArr_5._8_4_ - fVal_3) + fVal_3;
  auArr_1._12_4_ = fVal_8 * (auArr_5._12_4_ - fVal_4) + fVal_4;
  *param_2 = auArr_1;
  return;
}

// func_0x1802ccce0
void func_0x1802ccce0(int64_t param_1,uint32_t param_2,int param_3,float *param_4,float *param_5)
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  uint8_t uVal_4;
  uint32_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  float fVal_8;
  float fVal_9;
  float fVal_10;
  float fVal_11;
  uint32_t uVal_12;
  int64_t local_a8 [3];
  uint64_t local_90;
  float local_88;
  float local_84;
  uint64_t local_80;
  
  local_80 = 0xfffffffffffffffe;
  func_0x1802ccf40(local_a8);
  fVal_10 = param_5[1] * DAT_1806aeae4;
  fVal_1 = param_4[1];
  uVal_5 = func_0x18018ce30(param_1);
  fVal_8 = (float)func_0x1800cfa00(*(uint32_t *)(param_1 + 0xf4),uVal_5);
  fVal_3 = DAT_1806aeae4;
  fVal_11 = *param_5 * DAT_1806aeae4;
  fVal_2 = *param_4;
  uVal_5 = func_0x18018ce30(param_1);
  fVal_9 = (float)func_0x1800cd3b0(local_a8,*(uint32_t *)(param_1 + 0xf4),uVal_5);
  local_84 = (fVal_10 + fVal_1) - fVal_8 * fVal_3;
  local_88 = fVal_11 + fVal_2 + fVal_9 * DAT_1806b2860;
  uVal_4 = func_0x18045fc60(param_2);
  lVal_7 = param_1 + (int64_t)param_3 * 0x10 + 0x140;
  func_0x1802ccb10(param_1,lVal_7,param_1 + 0x110,param_1 + 0x120,uVal_4);
  func_0x1800d2e40(*param_4,param_4[1],*param_5,param_5[1],*(uint32_t *)(param_1 + 0x100),lVal_7,0xf,
                *(uint32_t *)(param_1 + 0x104));
  uVal_12 = (uint32_t)((uint64_t)lVal_7 >> 0x20);
  uVal_4 = *(uint8_t *)(param_1 + 0xd0);
  uVal_5 = func_0x18018ce30(param_1);
  func_0x1800d00e0(&local_88,local_a8,(uint64_t)*(byte *)(param_1 + 0xd1) * 0x10 + param_1 + 0xd4,
                *(uint32_t *)(param_1 + 0xf4),0x3f800000,CONCAT44(uVal_12,uVal_5),uVal_4);
  if (0xf < local_90) {
    uVal_6 = local_90 + 1;
    lVal_7 = local_a8[0];
    if (0xfff < uVal_6) {
      lVal_7 = *(int64_t *)(local_a8[0] + -8);
      if (0x1f < (uint64_t)((local_a8[0] + -8) - lVal_7)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = local_90 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
  }
  return;
}

// Unwind@1802ccee0
void Unwind_1802ccee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1802ccf40
uint8_t (*func_0x1802ccf40(uint8_t (*param_1)[16],uint param_2))[16]
{
  func_ptr_t fnPtr_1;
  uint8_t auArr_2 [16];
  int64_t lVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint8_t (*pArr16_7)[16];
  uint32_t *pU64_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  
  lVal_3 = DAT_18083eab8;
  lVal_4 = DAT_18083eaa0;
  lVal_6 = DAT_18083ea88;
  if ((int)param_2 < 0) {
    if (param_2 < 0xffffffc4) {
      lVal_6 = (int64_t)(int)param_2 * 0x20;
      param_1[1] = ZEXT816(0);
      *param_1 = ZEXT816(0);
      uVal_9 = *(uint64_t *)(lVal_4 + 0xc90 + lVal_6);
      if (*(uint64_t *)(lVal_4 + 0xc98 + lVal_6) < 0x10) {
        pU64_8 = (uint32_t *)(lVal_4 + lVal_6 + 0xc80);
      }
      else {
        pU64_8 = *(uint32_t **)(lVal_4 + 0xc80 + lVal_6);
      }
    }
    else {
      lVal_6 = (int64_t)(int)param_2 * 0x20;
      param_1[1] = ZEXT816(0);
      *param_1 = ZEXT816(0);
      uVal_9 = *(uint64_t *)(lVal_3 + 0x690 + lVal_6);
      if (*(uint64_t *)(lVal_3 + 0x698 + lVal_6) < 0x10) {
        pU64_8 = (uint32_t *)(lVal_3 + lVal_6 + 0x680);
      }
      else {
        pU64_8 = *(uint32_t **)(lVal_3 + 0x680 + lVal_6);
      }
    }
    if ((int64_t)uVal_9 < 0) goto LAB_1802cd111;
    if (0xf < uVal_9) {
      uVal_5 = uVal_9 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_5) {
        uVal_10 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        uVal_5 = func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_10 + 0x28);
        uVal_5 = lVal_6 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_5 - 8) = lVal_6;
      }
      *(uint64_t *)*param_1 = uVal_5;
      *(uint64_t *)param_1[1] = uVal_9;
      *(uint64_t *)(param_1[1] + 8) = uVal_10;
      goto LAB_1802cd0ff;
    }
    *(uint64_t *)param_1[1] = uVal_9;
    *(uint64_t *)(param_1[1] + 8) = 0xf;
    uVal_11 = *pU64_8;
    uVal_12 = pU64_8[1];
    uVal_13 = pU64_8[2];
    uVal_14 = pU64_8[3];
  }
  else {
    lVal_4 = (uint64_t)param_2 * 0x20;
    param_1[1] = ZEXT816(0);
    *param_1 = ZEXT816(0);
    uVal_9 = *(uint64_t *)(lVal_6 + 0x10 + lVal_4);
    if (*(uint64_t *)(lVal_6 + 0x18 + lVal_4) < 0x10) {
      pU64_8 = (uint32_t *)(lVal_6 + lVal_4);
    }
    else {
      pU64_8 = *(uint32_t **)(lVal_6 + lVal_4);
    }
    if ((int64_t)uVal_9 < 0) {
LAB_1802cd111:
      func_0x18007ba70();
      fnPtr_1 = (func_ptr_t )swi(3);
      pArr16_7 = (uint8_t (*)[16])(*fnPtr_1)();
      return pArr16_7;
    }
    if (0xf < uVal_9) {
      uVal_5 = uVal_9 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_5) {
        uVal_10 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        uVal_5 = func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_10 + 0x28);
        uVal_5 = lVal_6 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_5 - 8) = lVal_6;
      }
      *(uint64_t *)*param_1 = uVal_5;
      *(uint64_t *)param_1[1] = uVal_9;
      *(uint64_t *)(param_1[1] + 8) = uVal_10;
LAB_1802cd0ff:
      func_0x1806aa960(uVal_5,pU64_8,uVal_9 + 1);
      return param_1;
    }
    *(uint64_t *)param_1[1] = uVal_9;
    *(uint64_t *)(param_1[1] + 8) = 0xf;
    uVal_11 = *pU64_8;
    uVal_12 = pU64_8[1];
    uVal_13 = pU64_8[2];
    uVal_14 = pU64_8[3];
  }
  auArr_2._4_4_ = uVal_12;
  auArr_2._0_4_ = uVal_11;
  auArr_2._8_4_ = uVal_13;
  auArr_2._12_4_ = uVal_14;
  *param_1 = auArr_2;
  return param_1;
}

// func_0x1802cd120
void func_0x1802cd120(int64_t param_1,int param_2,int param_3,float *param_4,float *param_5)
{
  uint *pU64_1;
  float fVal_2;
  float fVal_3;
  uint8_t uVal_4;
  uint32_t uVal_5;
  size_t sz_6;
  uint64_t uVal_7;
  byte bFlag_8;
  uint8_t *pU64_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  float fVal_12;
  float fVal_13;
  float fVal_14;
  float fVal_15;
  float fVal_16;
  float fVal_17;
  uint32_t uVal_19;
  uint64_t uVal_18;
  int64_t local_f8 [3];
  uint64_t local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint8_t local_c8 [16];
  size_t local_b8;
  uint64_t local_b0;
  uint64_t local_a0;
  
  local_a0 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    uVal_4 = func_0x18045fca0();
  }
  else if (param_2 == 1) {
    uVal_4 = func_0x18045fcb0();
  }
  else {
    uVal_4 = 0;
  }
  lVal_11 = param_1 + (int64_t)param_3 * 0x10 + 0x140;
  func_0x1802ccb10(param_1,lVal_11,param_1 + 0x110,param_1 + 0x120,uVal_4);
  func_0x1800d2e40(*param_4,param_4[1],*param_5,param_5[1],*(uint32_t *)(param_1 + 0x100),lVal_11,0xf,
                *(uint32_t *)(param_1 + 0x104));
  uVal_19 = (uint32_t)((uint64_t)lVal_11 >> 0x20);
  if (param_2 == 0) {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcf68) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0xcf68) = 1;
      *(uint8_t *)(lVal_11 + 0xcf64) = 1;
      *(uint32_t *)(lVal_11 + 0xcf60) = 0x334160b9;
      func_0x180673140(&LAB_1802e2770);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0xcf60);
    if (*(char *)(lVal_11 + 0xcf64) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x33032df5;
      *(uint8_t *)(lVal_11 + 0xcf64) = 0;
    }
    local_c8 = ZEXT816(0);
    sz_6 = strlen((char *)pU64_1);
    if ((int64_t)sz_6 < 0) goto LAB_1802cd703;
    if (sz_6 < 0x10) {
      pU64_9 = local_c8;
      uVal_10 = 0xf;
    }
    else {
      uVal_7 = sz_6 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_7) {
        uVal_10 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
        local_c8._0_8_ = pU64_9;
      }
      else {
        lVal_11 = func_0x180672de0(uVal_10 + 0x28);
        pU64_9 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_9 + -8) = lVal_11;
        local_c8._0_8_ = pU64_9;
      }
    }
    local_b8 = sz_6;
    local_b0 = uVal_10;
    func_0x1806aa960(pU64_9,pU64_1,sz_6);
    pU64_9[sz_6] = 0;
    bFlag_8 = 1;
    if (*(char *)(param_1 + 0x13e) == '\0') goto LAB_1802cd3cd;
  }
  else {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcf74) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0xcf74) = 1;
      *(uint8_t *)(lVal_11 + 0xcf70) = 1;
      *(uint32_t *)(lVal_11 + 0xcf6c) = 0x334160a7;
      func_0x180673140(&LAB_1802e2790);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0xcf6c);
    if (*(char *)(lVal_11 + 0xcf70) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x33032df5;
      *(uint8_t *)(lVal_11 + 0xcf70) = 0;
    }
    local_c8 = ZEXT816(0);
    sz_6 = strlen((char *)pU64_1);
    if ((int64_t)sz_6 < 0) {
LAB_1802cd703:
      func_0x18007ba70();
      goto LAB_1802cd708;
    }
    if (sz_6 < 0x10) {
      pU64_9 = local_c8;
      uVal_10 = 0xf;
    }
    else {
      uVal_7 = sz_6 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_7) {
        uVal_10 = uVal_7;
      }
      if (uVal_7 < 0xfff) {
        pU64_9 = (uint8_t *)func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_10 + 0x28);
        pU64_9 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_9 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_9;
    }
    local_b8 = sz_6;
    local_b0 = uVal_10;
    func_0x1806aa960(pU64_9,pU64_1,sz_6);
    pU64_9[sz_6] = 0;
LAB_1802cd3cd:
    bFlag_8 = param_2 == 1 & *(byte *)(param_1 + 0x13f);
  }
  fVal_14 = param_5[1] * DAT_1806aeae4;
  fVal_2 = param_4[1];
  uVal_5 = func_0x18018ce30(param_1);
  fVal_12 = (float)func_0x1800cfa00(*(uint32_t *)(param_1 + 0xf4),uVal_5);
  fVal_3 = DAT_1806aeae4;
  if (bFlag_8 == 0) {
    fVal_16 = 0.0;
  }
  else {
    fVal_16 = *(float *)(param_1 + 0xf4) * DAT_1806ae650;
  }
  fVal_17 = *param_5 * DAT_1806aeae4;
  fVal_15 = *param_4;
  uVal_5 = func_0x18018ce30(param_1);
  fVal_13 = (float)func_0x1800cd3b0(local_c8,*(uint32_t *)(param_1 + 0xf4),uVal_5);
  local_cc = ((fVal_14 + fVal_2) - fVal_12 * fVal_3) - fVal_16;
  local_d0 = fVal_17 + fVal_15 + fVal_13 * DAT_1806b2860;
  uVal_4 = *(uint8_t *)(param_1 + 0xd0);
  uVal_5 = func_0x18018ce30(param_1);
  lVal_11 = param_1 + 0xd4;
  if (*(char *)(param_1 + 0xd1) != '\0') {
    lVal_11 = param_1 + 0xe4;
  }
  uVal_18 = CONCAT44(uVal_19,uVal_5);
  func_0x1800d00e0(&local_d0,local_c8,lVal_11,*(uint32_t *)(param_1 + 0xf4),0x3f800000,uVal_18,uVal_4);
  uVal_19 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
  if (bFlag_8 != 0) {
    if (param_2 == 0) {
      func_0x180094590(local_f8,(uint64_t)(DAT_180840c90 - DAT_180840c88) >> 3);
    }
    else {
      func_0x180094590(local_f8,(uint64_t)(DAT_180840ca8 - DAT_180840ca0) >> 3);
    }
    fVal_12 = local_cc;
    uVal_5 = func_0x18018ce30(param_1);
    fVal_14 = (float)func_0x1800cfa00(*(uint32_t *)(param_1 + 0xf4),uVal_5);
    fVal_2 = *(float *)(param_1 + 0xf4);
    fVal_15 = *param_5 * DAT_1806aeae4;
    fVal_3 = *param_4;
    uVal_5 = func_0x18018ce30(param_1);
    fVal_16 = (float)func_0x1800cd3b0(local_f8,*(uint32_t *)(param_1 + 0xf4),uVal_5);
    local_d8 = fVal_15 + fVal_3 + fVal_16 * DAT_1806b2860;
    uVal_4 = *(uint8_t *)(param_1 + 0xd0);
    local_d4 = fVal_12 + fVal_14 + fVal_2;
    uVal_5 = func_0x18018ce30(param_1);
    lVal_11 = param_1 + 0xd4;
    if (*(char *)(param_1 + 0xd1) != '\0') {
      lVal_11 = param_1 + 0xe4;
    }
    func_0x1800d00e0(&local_d8,local_f8,lVal_11,*(uint32_t *)(param_1 + 0xf4),0x3f800000,
                  CONCAT44(uVal_19,uVal_5),uVal_4);
    if (0xf < local_e0) {
      uVal_10 = local_e0 + 1;
      lVal_11 = local_f8[0];
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_f8[0] + -8);
        if (0x1f < (uint64_t)((local_f8[0] + -8) - lVal_11)) goto LAB_1802cd708;
        uVal_10 = local_e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
  }
  if (0xf < local_b0) {
    uVal_10 = local_b0 + 1;
    lVal_11 = local_c8._0_8_;
    if (0xfff < uVal_10) {
      lVal_11 = *(int64_t *)(local_c8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_11)) {
LAB_1802cd708:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_10 = local_b0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_10);
  }
  return;
}

// Unwind@1802cd710
void Unwind_1802cd710(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1802cd790
void Unwind_1802cd790(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1802cda20
void Unwind_1802cda20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x1802ce320
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802ce320(uint64_t *param_1)
{
  uint8_t (*pArr16_1)[16];
  uint64_t *_Str;
  int64_t *pLong_2;
  int64_t lVal_3;
  func_ptr_t fnPtr_4;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint uVal_14;
  size_t sz_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint64_t *pU64_18;
  int64_t lVal_19;
  uint8_t *pU64_20;
  uint64_t uVal_21;
  uint8_t *pU64_22;
  uint8_t local_a8 [4];
  uint32_t uStack_a4;
  uint64_t uStack_a0;
  uint64_t local_98;
  uint64_t uStack_90;
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
  uint32_t uStack_58;
  uint64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  uStack_68._3_1_ = (uint8_t)_UNK_1806c28f9;
  uStack_68 = CONCAT13(uStack_68._3_1_,_UNK_1806c28f6);
  uStack_64._3_1_ = (uint8_t)_UNK_1806c28fd;
  uStack_64 = CONCAT13(uStack_64._3_1_,(int3)((uint)_UNK_1806c28f9 >> 8));
  uStack_60._3_1_ = (uint8_t)_UNK_1806c2901;
  uStack_60 = CONCAT13(uStack_60._3_1_,(int3)((uint)_UNK_1806c28fd >> 8));
  uStack_5c._0_3_ = (undefined3)((uint)_UNK_1806c2901 >> 8);
  local_78 = _DAT_1806c28e6;
  uStack_74 = _UNK_1806c28ea;
  uStack_70 = _UNK_1806c28ee;
  uStack_6c = _UNK_1806c28f2;
  local_88._4_4_ = _UNK_1806c28da;
  local_88._0_4_ = _DAT_1806c28d6;
  uStack_80._0_4_ = _UNK_1806c28de;
  uStack_80._4_4_ = _UNK_1806c28e2;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xcfb4) == '\0') {
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_17 + 0xcfb4) = 1;
    func_0x1801bb2b0(lVal_17 + 0xcf81,local_88);
    func_0x180673140(&LAB_1802e27e0);
  }
  uVal_14 = _UNK_1806b2c9c;
  uVal_13 = _UNK_1806b2c98;
  uVal_12 = _UNK_1806b2c94;
  uVal_11 = _DAT_1806b2c90;
  lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pArr16_1 = (uint8_t (*)[16])(lVal_17 + 0xcf81);
  if (*(char *)(lVal_17 + 0xcfb0) == '\x01') {
    auArr_5._4_4_ = *(uint *)(lVal_17 + 0xcf85) ^ _UNK_1806b2c94;
    auArr_5._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b2c90;
    auArr_5._8_4_ = *(uint *)(lVal_17 + 0xcf89) ^ _UNK_1806b2c98;
    auArr_5._12_4_ = *(uint *)(lVal_17 + 0xcf8d) ^ _UNK_1806b2c9c;
    *pArr16_1 = auArr_5;
    auArr_6._4_4_ = *(uint *)(lVal_17 + 0xcf95) ^ uVal_12;
    auArr_6._0_4_ = *(uint *)(lVal_17 + 0xcf91) ^ uVal_11;
    auArr_6._8_4_ = *(uint *)(lVal_17 + 0xcf99) ^ uVal_13;
    auArr_6._12_4_ = *(uint *)(lVal_17 + 0xcf9d) ^ uVal_14;
    *(uint8_t (*)[16])(lVal_17 + 0xcf91) = auArr_6;
    *(uint64_t *)(lVal_17 + 0xcfa1) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_17 + 0xcfa1) >> 0x20) ^ _UNK_1806b63e4,
                  (uint)*(uint64_t *)(lVal_17 + 0xcfa1) ^ _DAT_1806b63e0);
    *(byte *)(lVal_17 + 0xcfa9) = *(byte *)(lVal_17 + 0xcfa9) ^ 0xcf;
    *(byte *)(lVal_17 + 0xcfaa) = *(byte *)(lVal_17 + 0xcfaa) ^ 0xd9;
    *(byte *)(lVal_17 + 0xcfab) = *(byte *)(lVal_17 + 0xcfab) ^ 0xf9;
    *(byte *)(lVal_17 + 0xcfac) = *(byte *)(lVal_17 + 0xcfac) ^ 9;
    *(byte *)(lVal_17 + 0xcfad) = *(byte *)(lVal_17 + 0xcfad) ^ 0xc5;
    *(byte *)(lVal_17 + 0xcfae) = *(byte *)(lVal_17 + 0xcfae) ^ 0x81;
    *(byte *)(lVal_17 + 0xcfaf) = *(byte *)(lVal_17 + 0xcfaf) ^ 0x51;
    *(uint8_t *)(lVal_17 + 0xcfb0) = 0;
  }
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  _local_88 = ZEXT816(0);
  sz_15 = strlen((char *)pArr16_1);
  if ((int64_t)sz_15 < 0) {
    func_0x18007ba70();
  }
  else {
    if (sz_15 < 0x10) {
      pU64_20 = local_88;
      uVal_21 = 0xf;
    }
    else {
      uVal_16 = sz_15 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_16) {
        uVal_21 = uVal_16;
      }
      if (uVal_16 < 0xfff) {
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
      }
      else {
        lVal_17 = func_0x180672de0(uVal_21 + 0x28);
        pU64_20 = (uint8_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_17;
      }
      local_88 = (uint8_t  [8])pU64_20;
    }
    local_78 = (uint32_t)sz_15;
    uStack_74 = (uint32_t)(sz_15 >> 0x20);
    uStack_70 = (uint32_t)uVal_21;
    uStack_6c = (uint32_t)(uVal_21 >> 0x20);
    func_0x1806aa960(pU64_20,pArr16_1,sz_15);
    pU64_20[sz_15] = 0;
    pU64_20 = local_88;
    func_0x18014fe60(param_1,0,0,pU64_20);
    uVal_21 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_21) {
      uVal_16 = uVal_21 + 1;
      lVal_17 = (int64_t)local_88;
      if (0xfff < uVal_16) {
        lVal_17 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_17)) goto LAB_1802ce96b;
        uVal_16 = uVal_21 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_17,uVal_16);
    }
    *param_1 = &PTR_LAB_1806c08e0;
    lVal_17 = param_1[0x1e];
    pLong_2 = *(int64_t **)(lVal_17 + -0x10);
    if (pLong_2 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_2 + 0x20))(pLong_2,pLong_2 != (int64_t *)(lVal_17 + -0x48));
      *(uint64_t *)(lVal_17 + -0x10) = 0;
    }
    uVal_21 = *(uint64_t *)(lVal_17 + -0x58);
    if (0xf < uVal_21) {
      lVal_3 = *(int64_t *)(lVal_17 + -0x70);
      uVal_16 = uVal_21 + 1;
      lVal_19 = lVal_3;
      if (0xfff < uVal_16) {
        lVal_19 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_19)) goto LAB_1802ce96b;
        uVal_16 = uVal_21 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_16);
    }
    *(uint64_t *)(lVal_17 + -0x60) = 0;
    *(uint64_t *)(lVal_17 + -0x58) = 0xf;
    *(uint8_t *)(lVal_17 + -0x70) = 0;
    param_1[0x1e] = param_1[0x1e] + -0x70;
    uStack_68 = _DAT_1806b9547;
    uStack_64 = _UNK_1806b954b;
    uStack_60 = _UNK_1806b954f;
    local_78 = _DAT_1806b9537;
    uStack_74 = _UNK_1806b953b;
    uStack_70 = _UNK_1806b953f;
    uStack_6c = _UNK_1806b9543;
    local_88._4_4_ = _UNK_1806b952b;
    local_88._0_4_ = _DAT_1806b9527;
    uStack_80._0_4_ = _UNK_1806b952f;
    uStack_80._4_4_ = _UNK_1806b9533;
    uStack_5c._0_3_ = (undefined3)_UNK_1806b9553;
    uStack_5c = CONCAT13(0x80,(undefined3)uStack_5c);
    uStack_58 = CONCAT13(uStack_58._3_1_,0x7d221d);
    local_48 = param_1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xcfec) == '\0') {
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_17 + 0xcfec) = 1;
      func_0x1801b4360(lVal_17 + 0xcfb5,local_88);
      func_0x180673140(&LAB_1802e2810);
    }
    pU64_18 = local_48;
    uVal_14 = _UNK_1806b2cac;
    uVal_13 = _UNK_1806b2ca8;
    uVal_12 = _UNK_1806b2ca4;
    uVal_11 = _DAT_1806b2ca0;
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_1 = (uint8_t (*)[16])(lVal_17 + 0xcfb5);
    if (*(char *)(lVal_17 + 0xcfe8) == '\x01') {
      auArr_7._4_4_ = *(uint *)(lVal_17 + 0xcfb9) ^ _UNK_1806b2ca4;
      auArr_7._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b2ca0;
      auArr_7._8_4_ = *(uint *)(lVal_17 + 0xcfbd) ^ _UNK_1806b2ca8;
      auArr_7._12_4_ = *(uint *)(lVal_17 + 0xcfc1) ^ _UNK_1806b2cac;
      *pArr16_1 = auArr_7;
      auArr_8._4_4_ = *(uint *)(lVal_17 + 0xcfc9) ^ uVal_12;
      auArr_8._0_4_ = *(uint *)(lVal_17 + 0xcfc5) ^ uVal_11;
      auArr_8._8_4_ = *(uint *)(lVal_17 + 0xcfcd) ^ uVal_13;
      auArr_8._12_4_ = *(uint *)(lVal_17 + 0xcfd1) ^ uVal_14;
      *(uint8_t (*)[16])(lVal_17 + 0xcfc5) = auArr_8;
      auArr_9._4_4_ = *(uint *)(lVal_17 + 0xcfd9) ^ uVal_12;
      auArr_9._0_4_ = *(uint *)(lVal_17 + 0xcfd5) ^ uVal_11;
      auArr_9._8_4_ = *(uint *)(lVal_17 + 0xcfdd) ^ uVal_13;
      auArr_9._12_4_ = *(uint *)(lVal_17 + 0xcfe1) ^ uVal_14;
      *(uint8_t (*)[16])(lVal_17 + 0xcfd5) = auArr_9;
      *(ushort *)(lVal_17 + 0xcfe5) = *(ushort *)(lVal_17 + 0xcfe5) ^ 0x4573;
      *(byte *)(lVal_17 + 0xcfe7) = *(byte *)(lVal_17 + 0xcfe7) ^ 0x7d;
      *(uint8_t *)(lVal_17 + 0xcfe8) = 0;
    }
    _local_a8 = ZEXT816(0);
    sz_15 = strlen((char *)pArr16_1);
    if (-1 < (int64_t)sz_15) {
      if (sz_15 < 0x10) {
        pU64_22 = local_a8;
        uVal_21 = 0xf;
      }
      else {
        uVal_16 = sz_15 | 0xf;
        uVal_21 = 0x16;
        if (0x16 < uVal_16) {
          uVal_21 = uVal_16;
        }
        if (uVal_16 < 0xfff) {
          pU64_22 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
        }
        else {
          lVal_17 = func_0x180672de0(uVal_21 + 0x28);
          pU64_22 = (uint8_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_22 + -8) = lVal_17;
        }
        _local_a8 = (int64_t)pU64_22;
        pU64_18 = local_48;
      }
      local_98 = sz_15;
      uStack_90 = uVal_21;
      func_0x1806aa960(pU64_22,pArr16_1,sz_15);
      pU64_22[sz_15] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xd000) == '\0') {
        lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_17 + 0xd000) = 1;
        *(uint8_t *)(lVal_17 + 0xcffe) = 1;
        *(uint64_t *)(lVal_17 + 0xcff0) = 0x9dcdd6c5e7192a3e;
        *(uint32_t *)(lVal_17 + 0xcff8) = 0xb7043153;
        *(uint16_t *)(lVal_17 + 0xcffc) = 0xb3d4;
        func_0x180673140(&LAB_1802e2850);
      }
      lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint64_t *)(lVal_17 + 0xcff0);
      if (*(char *)(lVal_17 + 0xcffe) == '\x01') {
        *_Str = *_Str ^ 0xe9b5b3b1c77d4573;
        *(uint *)(lVal_17 + 0xcff8) = *(uint *)(lVal_17 + 0xcff8) ^ 0xc77d4573;
        *(byte *)(lVal_17 + 0xcffc) = *(byte *)(lVal_17 + 0xcffc) ^ 0xb1;
        *(byte *)(lVal_17 + 0xcffd) = *(byte *)(lVal_17 + 0xcffd) ^ 0xb3;
        *(uint8_t *)(lVal_17 + 0xcffe) = 0;
      }
      _local_88 = ZEXT816(0);
      sz_15 = strlen((char *)_Str);
      if (-1 < (int64_t)sz_15) {
        uVal_21 = 0xf;
        if (0xf < sz_15) {
          uVal_16 = sz_15 | 0xf;
          uVal_21 = 0x16;
          if (0x16 < uVal_16) {
            uVal_21 = uVal_16;
          }
          if (uVal_16 < 0xfff) {
            pU64_20 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
          }
          else {
            lVal_17 = func_0x180672de0(uVal_21 + 0x28);
            pU64_20 = (uint8_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_20 + -8) = lVal_17;
          }
          local_88 = (uint8_t  [8])pU64_20;
          pU64_18 = local_48;
        }
        local_78 = (uint32_t)sz_15;
        uStack_74 = (uint32_t)(sz_15 >> 0x20);
        uStack_70 = (uint32_t)uVal_21;
        uStack_6c = (uint32_t)(uVal_21 >> 0x20);
        func_0x1806aa960(pU64_20,_Str,sz_15);
        pU64_20[sz_15] = 0;
        lVal_17 = func_0x1801cf6b0(pU64_18,local_88);
        pLong_2 = (int64_t *)(lVal_17 + 0x20);
        if (pLong_2 != (int64_t *)local_a8) {
          uVal_21 = *(uint64_t *)(lVal_17 + 0x38);
          if (0xf < uVal_21) {
            lVal_3 = *pLong_2;
            uVal_16 = uVal_21 + 1;
            lVal_19 = lVal_3;
            if (0xfff < uVal_16) {
              lVal_19 = *(int64_t *)(lVal_3 + -8);
              if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_19)) goto LAB_1802ce96b;
              uVal_16 = uVal_21 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_19,uVal_16);
          }
          *(uint32_t *)(lVal_17 + 0x30) = (uint32_t)local_98;
          *(uint32_t *)(lVal_17 + 0x34) = local_98._4_4_;
          *(uint32_t *)(lVal_17 + 0x38) = (uint32_t)uStack_90;
          *(uint32_t *)(lVal_17 + 0x3c) = uStack_90._4_4_;
          *(uint8_t (*)[4])pLong_2 = local_a8;
          *(uint32_t *)(lVal_17 + 0x24) = uStack_a4;
          *(uint32_t *)(lVal_17 + 0x28) = (uint32_t)uStack_a0;
          *(uint32_t *)(lVal_17 + 0x2c) = uStack_a0._4_4_;
          uStack_90 = 0xf;
          auArr_10[15] = 0;
          auArr_10._0_15_ = stack0xffffffffffffff59;
          _local_a8 = auArr_10 << 8;
        }
        pU64_18 = local_48;
        uVal_21 = CONCAT44(uStack_6c,uStack_70);
        if (0xf < uVal_21) {
          uVal_16 = uVal_21 + 1;
          lVal_17 = (int64_t)local_88;
          if (0xfff < uVal_16) {
            lVal_17 = *(int64_t *)((int64_t)local_88 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_17)) goto LAB_1802ce96b;
            uVal_16 = uVal_21 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_17,uVal_16);
        }
        if (0xf < uStack_90) {
          uVal_21 = uStack_90 + 1;
          lVal_17 = _local_a8;
          if (0xfff < uVal_21) {
            lVal_17 = *(int64_t *)(_local_a8 + -8);
            if (0x1f < (uint64_t)((_local_a8 + -8) - lVal_17)) {
LAB_1802ce96b:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_21 = uStack_90 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_17,uVal_21);
        }
        return pU64_18;
      }
      goto LAB_1802ce979;
    }
  }
  func_0x18007ba70();
LAB_1802ce979:
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_18 = (uint64_t *)(*fnPtr_4)();
  return pU64_18;
}

// Unwind@1802ce980
void Unwind_1802ce980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1802ce9c0
void Unwind_1802ce9c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1802cea00
void Unwind_1802cea00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1802cea40
void Unwind_1802cea40(uint64_t param_1,int64_t param_2)
{
  func_0x180154cc0(*(uint64_t *)(param_2 + 0x80));
  return;
}

// Unwind@1802cea80
void Unwind_1802cea80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcfb4) = 0;
  return;
}

// Unwind@1802cead0
void Unwind_1802cead0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xcfec) = 0;
  return;
}

// Unwind@1802cf880
void Unwind_1802cf880(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd08c) = 0;
  return;
}

// Unwind@1802cf8e0
void Unwind_1802cf8e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd040) = 0;
  return;
}

// Unwind@1802cf940
void Unwind_1802cf940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1802cf980
void Unwind_1802cf980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1802cf9c0
void Unwind_1802cf9c0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x60);
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1802cfa10
void Unwind_1802cfa10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xb0));
  return;
}

// func_0x1802cfa50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802cfa50(uint64_t *param_1)
{
  uint *pU64_1;
  char *fnPtr_2;
  uint64_t *pU64_3;
  uint32_t *pU64_4;
  uint8_t *pU64_5;
  uint8_t uVal_6;
  func_ptr_t fnPtr_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint64_t uVal_10;
  size_t sz_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t *pU64_14;
  uint8_t *pU64_15;
  uint8_t *pU64_16;
  uint32_t uVal_17;
  uint64_t uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint64_t in_stack_fffffffffffffcd8;
  uint32_t uVal_26;
  uint64_t in_stack_fffffffffffffce0;
  uint32_t uVal_27;
  uint uVal_28;
  uint8_t **local_2f8;
  uint64_t *local_2f0;
  uint8_t ***local_2c0;
  uint32_t local_2b8;
  uint32_t uStack_2b4;
  uint32_t uStack_2b0;
  uint32_t uStack_2ac;
  uint32_t local_2a8;
  uint32_t uStack_2a4;
  uint32_t uStack_2a0;
  uint32_t uStack_29c;
  uint32_t local_298;
  uint32_t uStack_294;
  uint32_t uStack_290;
  uint32_t uStack_28c;
  uint8_t local_280 [56];
  uint64_t local_248;
  uint8_t local_240 [56];
  uint64_t local_208;
  uint8_t local_200 [56];
  uint64_t local_1c8;
  uint8_t local_1c0 [56];
  uint64_t local_188;
  uint8_t local_180 [56];
  uint64_t local_148;
  uint8_t local_140 [56];
  uint64_t local_108;
  uint64_t *local_100;
  uint64_t local_f8;
  undefined7 uStack_f0;
  uint8_t uStack_e9;
  uint8_t uStack_e8;
  uint16_t uStack_e7;
  uint8_t local_d8 [16];
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint16_t local_a8;
  uint8_t uStack_a6;
  uint8_t uStack_a5;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint16_t uStack_9c;
  uint8_t uStack_9a;
  uint8_t uStack_99;
  undefined6 uStack_98;
  uint8_t uStack_92;
  uint8_t uStack_91;
  uint8_t local_88 [16];
  uint8_t local_78 [24];
  uint64_t *local_60;
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
  
  uVal_27 = (uint32_t)((uint64_t)in_stack_fffffffffffffce0 >> 0x20);
  uVal_26 = (uint32_t)((uint64_t)in_stack_fffffffffffffcd8 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  local_a8 = (uint16_t)_DAT_1806c2964;
  uStack_a6 = (uint8_t)((uint)_DAT_1806c2964 >> 0x10);
  uStack_a5 = (uint8_t)((uint)_DAT_1806c2964 >> 0x18);
  uStack_a4 = _UNK_1806c2968;
  uStack_a0 = _UNK_1806c296c;
  uStack_9c = (uint16_t)_UNK_1806c2970;
  uStack_b8 = _DAT_1806c2954;
  uStack_b4 = _UNK_1806c2958;
  uStack_b0 = _UNK_1806c295c;
  uStack_ac = _UNK_1806c2960;
  local_c8 = _DAT_1806c2944;
  uStack_c4 = _UNK_1806c2948;
  uStack_c0 = _UNK_1806c294c;
  uStack_bc = _UNK_1806c2950;
  local_d8._8_8_ = _UNK_1806c293c;
  local_d8._0_8_ = _DAT_1806c2934;
  uStack_9a = 0xdb;
  uStack_99 = 0xc9;
  uStack_98 = 0xb3dfb01c3500;
  local_60 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xd0d4) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0xd0d4) = 1;
    func_0x180210ce0(lVal_13 + 0xd08d,local_d8);
    func_0x180673140(&LAB_1802e2990);
  }
  uVal_21 = _UNK_1806b2cac;
  uVal_20 = _UNK_1806b2ca8;
  uVal_19 = _UNK_1806b2ca4;
  uVal_28 = _DAT_1806b2ca0;
  lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_13 + 0xd08d);
  if (*(char *)(lVal_13 + 0xd0d3) == '\x01') {
    uVal_22 = *(uint *)(lVal_13 + 0xd091) ^ _UNK_1806b2ca4;
    uVal_23 = *(uint *)(lVal_13 + 0xd095) ^ _UNK_1806b2ca8;
    uVal_24 = *(uint *)(lVal_13 + 0xd099) ^ _UNK_1806b2cac;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
    *(uint *)(lVal_13 + 0xd091) = uVal_22;
    *(uint *)(lVal_13 + 0xd095) = uVal_23;
    *(uint *)(lVal_13 + 0xd099) = uVal_24;
    *(uint *)(lVal_13 + 0xd09d) = *(uint *)(lVal_13 + 0xd09d) ^ uVal_28;
    *(uint *)(lVal_13 + 0xd0a1) = *(uint *)(lVal_13 + 0xd0a1) ^ uVal_19;
    *(uint *)(lVal_13 + 0xd0a5) = *(uint *)(lVal_13 + 0xd0a5) ^ uVal_20;
    *(uint *)(lVal_13 + 0xd0a9) = *(uint *)(lVal_13 + 0xd0a9) ^ uVal_21;
    *(uint *)(lVal_13 + 0xd0ad) = *(uint *)(lVal_13 + 0xd0ad) ^ uVal_28;
    *(uint *)(lVal_13 + 0xd0b1) = *(uint *)(lVal_13 + 0xd0b1) ^ uVal_19;
    *(uint *)(lVal_13 + 0xd0b5) = *(uint *)(lVal_13 + 0xd0b5) ^ uVal_20;
    *(uint *)(lVal_13 + 0xd0b9) = *(uint *)(lVal_13 + 0xd0b9) ^ uVal_21;
    *(uint *)(lVal_13 + 0xd0bd) = *(uint *)(lVal_13 + 0xd0bd) ^ uVal_28;
    *(uint *)(lVal_13 + 0xd0c1) = *(uint *)(lVal_13 + 0xd0c1) ^ uVal_19;
    *(uint *)(lVal_13 + 0xd0c5) = *(uint *)(lVal_13 + 0xd0c5) ^ uVal_20;
    *(uint *)(lVal_13 + 0xd0c9) = *(uint *)(lVal_13 + 0xd0c9) ^ uVal_21;
    *(uint *)(lVal_13 + 0xd0cd) = *(uint *)(lVal_13 + 0xd0cd) ^ 0xc77d4573;
    *(byte *)(lVal_13 + 0xd0d1) = *(byte *)(lVal_13 + 0xd0d1) ^ 0xb1;
    *(byte *)(lVal_13 + 0xd0d2) = *(byte *)(lVal_13 + 0xd0d2) ^ 0xb3;
    *(uint8_t *)(lVal_13 + 0xd0d3) = 0;
  }
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_d8 = (uint8_t  [16])0x0;
  sz_11 = strlen((char *)pU64_1);
  if ((int64_t)sz_11 < 0) {
    func_0x18007ba70();
LAB_1802d1962:
    local_49 = 1;
    func_0x18007ba70();
LAB_1802d196f:
    local_53 = 1;
    func_0x18007ba70();
LAB_1802d197c:
    local_4a = 1;
    func_0x18007ba70();
LAB_1802d1989:
    local_54 = 1;
    func_0x18007ba70();
LAB_1802d1996:
    local_4b = 1;
    func_0x18007ba70();
LAB_1802d19a3:
    local_55 = 1;
    func_0x18007ba70();
LAB_1802d19b0:
    local_4c = 1;
    func_0x18007ba70();
LAB_1802d19bd:
    local_56 = 1;
    func_0x18007ba70();
LAB_1802d19ca:
    local_4e = 1;
    func_0x18007ba70();
LAB_1802d19d7:
    local_4d = 1;
    func_0x18007ba70();
LAB_1802d19e4:
    local_50 = 1;
    func_0x18007ba70();
LAB_1802d19f1:
    local_4f = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_11 < 0x10) {
      pU64_16 = local_d8;
      uVal_18 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_d8._0_8_ = pU64_16;
    }
    local_c8 = (uint32_t)sz_11;
    uStack_c4 = (uint32_t)(sz_11 >> 0x20);
    uStack_c0 = (uint32_t)uVal_18;
    uStack_bc = (uint32_t)(uVal_18 >> 0x20);
    func_0x1806aa960(pU64_16,pU64_1,sz_11);
    pU64_16[sz_11] = 0;
    pU64_16 = local_d8;
    func_0x1801c2ba0(local_60,0,0,pU64_16);
    uVal_18 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_18) {
      uVal_12 = uVal_18 + 1;
      lVal_13 = local_d8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_12 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    *local_60 = &PTR_LAB_1806c0a50;
    local_100 = local_60 + 0x10;
    *(uint8_t (*)[16])(local_60 + 0x10) = (uint8_t  [16])0x0;
    local_60[0x12] = 0;
    *(uint16_t *)(local_60 + 0x13) = 0x101;
    uVal_9 = _UNK_1806bed3c;
    uVal_8 = _UNK_1806bed38;
    uVal_17 = _UNK_1806bed34;
    pU64_14 = local_60 + 0x15;
    *(uint32_t *)((int64_t)local_60 + 0x9c) = _DAT_1806bed30;
    *(uint32_t *)(local_60 + 0x14) = uVal_17;
    *(uint32_t *)((int64_t)local_60 + 0xa4) = uVal_8;
    *(uint32_t *)(local_60 + 0x15) = uVal_9;
    uVal_9 = _UNK_1806bed4c;
    uVal_8 = _UNK_1806bed48;
    uVal_17 = _UNK_1806bed44;
    *(uint32_t *)((int64_t)local_60 + 0xac) = _DAT_1806bed40;
    *(uint32_t *)(local_60 + 0x16) = uVal_17;
    *(uint32_t *)((int64_t)local_60 + 0xb4) = uVal_8;
    *(uint32_t *)(local_60 + 0x17) = uVal_9;
    uVal_9 = _UNK_1806bed5c;
    uVal_8 = _UNK_1806bed58;
    uVal_17 = _UNK_1806bed54;
    *(uint32_t *)((int64_t)local_60 + 0xbc) = _DAT_1806bed50;
    *(uint32_t *)(local_60 + 0x18) = uVal_17;
    *(uint32_t *)((int64_t)local_60 + 0xc4) = uVal_8;
    *(uint32_t *)(local_60 + 0x19) = uVal_9;
    uVal_10 = _UNK_1806bed68;
    *(uint64_t *)((int64_t)local_60 + 0xcc) = _DAT_1806bed60;
    *(uint64_t *)((int64_t)local_60 + 0xd4) = uVal_10;
    *(uint32_t *)((int64_t)local_60 + 0xdc) = 0x101;
    local_248 = 0;
    if (DAT_18083fb50 == (uint64_t *)0x0) {
      uVal_17 = 0xf;
    }
    else {
      local_248 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_280);
      uVal_17 = *(uint32_t *)pU64_14;
    }
    local_c8 = _DAT_1806c298a;
    uStack_c4 = _UNK_1806c298e;
    uStack_c0 = _UNK_1806c2992;
    uStack_bc = _UNK_1806c2996;
    local_d8._8_8_ = _UNK_1806c2982;
    local_d8._0_8_ = _DAT_1806c297a;
    uStack_b8 = CONCAT31(uStack_b8._1_3_,0xdd);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd0f8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd0f8) = 1;
      func_0x180086ce0(lVal_13 + 0xd0d5,local_d8);
      func_0x180673140(&LAB_1802e29d0);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xd0d5);
    func_0x1801bf040(fnPtr_2);
    local_78._0_16_ = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_2);
    if ((int64_t)sz_11 < 0) goto LAB_1802d1962;
    if (sz_11 < 0x10) {
      pU64_15 = local_88;
      uVal_18 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_49 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_49 = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_88._0_8_ = pU64_15;
    }
    local_78._8_8_ = uVal_18;
    local_78._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,fnPtr_2,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd108) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd108) = 1;
      *(uint64_t *)(lVal_13 + 0xd100) = 0x1075abe8c0db08f;
      func_0x180673140(&LAB_1802e2a00);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0xd100);
    if (*(char *)(lVal_13 + 0xd107) == '\x01') {
      *pU64_3 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0xd105) << 8,*(uint32_t *)pU64_3) |
                (uint64_t)*(byte *)(lVal_13 + 0xd104) << 0x20) ^ SUB168(_DAT_1806b5230,0);
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1802d196f;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_53 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_53 = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_d8._0_8_ = pU64_16;
    }
    local_c8 = (uint32_t)sz_11;
    uStack_c4 = (uint32_t)(sz_11 >> 0x20);
    uStack_c0 = (uint32_t)uVal_18;
    uStack_bc = (uint32_t)(uVal_18 >> 0x20);
    func_0x1806aa960(pU64_16,pU64_3,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = 0;
    pU64_16 = local_d8;
    pU64_15 = local_88;
    func_0x1801ccff0(local_60,pU64_16,pU64_15,pU64_14,CONCAT44(uVal_26,uVal_17),CONCAT44(uVal_27,2),0x14,
                  local_280,0);
    uVal_18 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_18) {
      uVal_12 = uVal_18 + 1;
      lVal_13 = local_d8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_12 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_18 = local_78._8_8_ + 1;
      lVal_13 = local_88._0_8_;
      if (0xfff < uVal_18) {
        lVal_13 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_18 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_18);
    }
    local_208 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_208 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_240);
    }
    pU64_4 = (uint32_t *)((int64_t)local_60 + 0xac);
    local_2b8 = *pU64_4;
    uStack_2b4 = *(uint32_t *)(local_60 + 0x16);
    uStack_2b0 = *(uint32_t *)((int64_t)local_60 + 0xb4);
    uStack_2ac = *(uint32_t *)(local_60 + 0x17);
    uStack_b8 = _DAT_1806c29bb;
    uStack_b4 = _UNK_1806c29bf;
    uStack_b0 = _UNK_1806c29c3;
    uStack_ac = _UNK_1806c29c7;
    local_c8 = _DAT_1806c29ab;
    uStack_c4 = _UNK_1806c29af;
    uStack_c0 = _UNK_1806c29b3;
    uStack_bc = _UNK_1806c29b7;
    local_d8._8_8_ = _UNK_1806c29a3;
    local_d8._0_8_ = _DAT_1806c299b;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd13c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd13c) = 1;
      func_0x1801b4680(lVal_13 + 0xd109,local_d8);
      func_0x180673140(&LAB_1802e2a30);
    }
    uVal_22 = _UNK_1806b2d7c;
    uVal_21 = _UNK_1806b2d78;
    uVal_20 = _UNK_1806b2d74;
    uVal_19 = _DAT_1806b2d70;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0xd109);
    if (*(char *)(lVal_13 + 0xd139) == '\x01') {
      uVal_23 = *(uint *)(lVal_13 + 0xd10d) ^ _UNK_1806b2d74;
      uVal_24 = *(uint *)(lVal_13 + 0xd111) ^ _UNK_1806b2d78;
      uVal_25 = *(uint *)(lVal_13 + 0xd115) ^ _UNK_1806b2d7c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d70;
      *(uint *)(lVal_13 + 0xd10d) = uVal_23;
      *(uint *)(lVal_13 + 0xd111) = uVal_24;
      *(uint *)(lVal_13 + 0xd115) = uVal_25;
      *(uint *)(lVal_13 + 0xd119) = *(uint *)(lVal_13 + 0xd119) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd11d) = *(uint *)(lVal_13 + 0xd11d) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd121) = *(uint *)(lVal_13 + 0xd121) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd125) = *(uint *)(lVal_13 + 0xd125) ^ uVal_22;
      *(uint *)(lVal_13 + 0xd129) = *(uint *)(lVal_13 + 0xd129) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd12d) = *(uint *)(lVal_13 + 0xd12d) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd131) = *(uint *)(lVal_13 + 0xd131) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd135) = *(uint *)(lVal_13 + 0xd135) ^ uVal_22;
      *(uint8_t *)(lVal_13 + 0xd139) = 0;
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if ((int64_t)sz_11 < 0) goto LAB_1802d197c;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4a = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4a = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_88._0_8_ = pU64_15;
    }
    local_78._8_8_ = uVal_18;
    local_78._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,pU64_1,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd150) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd150) = 1;
      *(uint8_t *)(lVal_13 + 0xd14c) = 1;
      *(uint64_t *)(lVal_13 + 0xd140) = 0x28c8edcbe4c2b7d4;
      *(uint32_t *)(lVal_13 + 0xd148) = 0x93d1a8eb;
      func_0x180673140(&LAB_1802e2a60);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0xd140);
    if (*(char *)(lVal_13 + 0xd14c) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_13 + 0xd148) = *(uint *)(lVal_13 + 0xd148) ^ 0x93a3c787;
      *(uint8_t *)(lVal_13 + 0xd14c) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1802d1989;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_54 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_54 = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_d8._0_8_ = pU64_16;
    }
    local_c8 = (uint32_t)sz_11;
    uStack_c4 = (uint32_t)(sz_11 >> 0x20);
    uStack_c0 = (uint32_t)uVal_18;
    uStack_bc = (uint32_t)(uVal_18 >> 0x20);
    func_0x1806aa960(pU64_16,pU64_3,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_16 = local_d8;
    pU64_15 = local_88;
    func_0x1801cd600(local_60,pU64_16,pU64_15,pU64_4,&local_2b8,local_240,uVal_28);
    uVal_18 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_18) {
      uVal_12 = uVal_18 + 1;
      lVal_13 = local_d8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_12 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_18 = local_78._8_8_ + 1;
      lVal_13 = local_88._0_8_;
      if (0xfff < uVal_18) {
        lVal_13 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_18 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_18);
    }
    local_1c8 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_1c8 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_200);
    }
    pU64_4 = (uint32_t *)((int64_t)local_60 + 0xbc);
    local_2a8 = *pU64_4;
    uStack_2a4 = *(uint32_t *)(local_60 + 0x18);
    uStack_2a0 = *(uint32_t *)((int64_t)local_60 + 0xc4);
    uStack_29c = *(uint32_t *)(local_60 + 0x19);
    local_a8 = (uint16_t)_DAT_1806c29fb;
    uStack_a6 = (uint8_t)((uint)_DAT_1806c29fb >> 0x10);
    uStack_a5 = (uint8_t)((uint)_DAT_1806c29fb >> 0x18);
    uStack_a4 = _UNK_1806c29ff;
    uStack_a0 = _UNK_1806c2a03;
    uStack_9c = (uint16_t)_UNK_1806c2a07;
    uStack_9a = (uint8_t)((uint)_UNK_1806c2a07 >> 0x10);
    uStack_b8 = _DAT_1806c29eb;
    uStack_b4 = _UNK_1806c29ef;
    uStack_b0 = _UNK_1806c29f3;
    uStack_ac = _UNK_1806c29f7;
    local_c8 = _DAT_1806c29db;
    uStack_c4 = _UNK_1806c29df;
    uStack_c0 = _UNK_1806c29e3;
    uStack_bc = _UNK_1806c29e7;
    local_d8._8_8_ = _UNK_1806c29d3;
    local_d8._0_8_ = _DAT_1806c29cb;
    uStack_99 = 0xf9;
    uStack_98 = 0xfe729e81d1a1;
    uStack_92 = 0x21;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd19c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd19c) = 1;
      func_0x1801b24b0(lVal_13 + 0xd151,local_d8);
      func_0x180673140(&LAB_1802e2a90);
    }
    uVal_22 = _UNK_1806b2d1c;
    uVal_21 = _UNK_1806b2d18;
    uVal_20 = _UNK_1806b2d14;
    uVal_19 = _DAT_1806b2d10;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0xd151);
    if (*(char *)(lVal_13 + 0xd198) == '\x01') {
      uVal_23 = *(uint *)(lVal_13 + 0xd155) ^ _UNK_1806b2d14;
      uVal_24 = *(uint *)(lVal_13 + 0xd159) ^ _UNK_1806b2d18;
      uVal_25 = *(uint *)(lVal_13 + 0xd15d) ^ _UNK_1806b2d1c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d10;
      *(uint *)(lVal_13 + 0xd155) = uVal_23;
      *(uint *)(lVal_13 + 0xd159) = uVal_24;
      *(uint *)(lVal_13 + 0xd15d) = uVal_25;
      *(uint *)(lVal_13 + 0xd161) = *(uint *)(lVal_13 + 0xd161) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd165) = *(uint *)(lVal_13 + 0xd165) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd169) = *(uint *)(lVal_13 + 0xd169) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd16d) = *(uint *)(lVal_13 + 0xd16d) ^ uVal_22;
      *(uint *)(lVal_13 + 0xd171) = *(uint *)(lVal_13 + 0xd171) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd175) = *(uint *)(lVal_13 + 0xd175) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd179) = *(uint *)(lVal_13 + 0xd179) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd17d) = *(uint *)(lVal_13 + 0xd17d) ^ uVal_22;
      *(uint *)(lVal_13 + 0xd181) = *(uint *)(lVal_13 + 0xd181) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd185) = *(uint *)(lVal_13 + 0xd185) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd189) = *(uint *)(lVal_13 + 0xd189) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd18d) = *(uint *)(lVal_13 + 0xd18d) ^ uVal_22;
      *(uint *)(lVal_13 + 0xd191) = *(uint *)(lVal_13 + 0xd191) ^ 0xf7f5f1d5;
      *(byte *)(lVal_13 + 0xd195) = *(byte *)(lVal_13 + 0xd195) ^ 0x1f;
      *(byte *)(lVal_13 + 0xd196) = *(byte *)(lVal_13 + 0xd196) ^ 0x9b;
      *(byte *)(lVal_13 + 0xd197) = *(byte *)(lVal_13 + 0xd197) ^ 0x21;
      *(uint8_t *)(lVal_13 + 0xd198) = 0;
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if ((int64_t)sz_11 < 0) goto LAB_1802d1996;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4b = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4b = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_88._0_8_ = pU64_15;
    }
    local_78._8_8_ = uVal_18;
    local_78._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,pU64_1,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd1b0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd1b0) = 1;
      *(uint8_t *)(lVal_13 + 0xd1ac) = 1;
      *(uint64_t *)(lVal_13 + 0xd1a0) = 0xfe42bb6b9f92989b;
      *(uint32_t *)(lVal_13 + 0xd1a8) = 0xf7879eb9;
      func_0x180673140(&LAB_1802e2ad0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0xd1a0);
    if (*(char *)(lVal_13 + 0xd1ac) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x91219b1ff7f5f1d5;
      *(uint *)(lVal_13 + 0xd1a8) = *(uint *)(lVal_13 + 0xd1a8) ^ 0xf7f5f1d5;
      *(uint8_t *)(lVal_13 + 0xd1ac) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1802d19a3;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_55 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_55 = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_d8._0_8_ = pU64_16;
    }
    local_c8 = (uint32_t)sz_11;
    uStack_c4 = (uint32_t)(sz_11 >> 0x20);
    uStack_c0 = (uint32_t)uVal_18;
    uStack_bc = (uint32_t)(uVal_18 >> 0x20);
    func_0x1806aa960(pU64_16,pU64_3,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_16 = local_d8;
    pU64_15 = local_88;
    func_0x1801cd600(local_60,pU64_16,pU64_15,pU64_4,&local_2a8,local_200,uVal_28);
    uVal_18 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_18) {
      uVal_12 = uVal_18 + 1;
      lVal_13 = local_d8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_12 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_18 = local_78._8_8_ + 1;
      lVal_13 = local_88._0_8_;
      if (0xfff < uVal_18) {
        lVal_13 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_18 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_18);
    }
    local_188 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_188 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_1c0);
    }
    pU64_4 = (uint32_t *)((int64_t)local_60 + 0xcc);
    local_298 = *pU64_4;
    uStack_294 = *(uint32_t *)(local_60 + 0x1a);
    uStack_290 = *(uint32_t *)((int64_t)local_60 + 0xd4);
    uStack_28c = *(uint32_t *)(local_60 + 0x1b);
    uStack_b8 = _DAT_1806c2a32;
    uStack_b4 = _UNK_1806c2a36;
    uStack_b0 = _UNK_1806c2a3a;
    local_c8 = _DAT_1806c2a22;
    uStack_c4 = _UNK_1806c2a26;
    uStack_c0 = _UNK_1806c2a2a;
    uStack_bc = _UNK_1806c2a2e;
    local_d8._8_8_ = _UNK_1806c2a1a;
    local_d8._0_8_ = _DAT_1806c2a12;
    uStack_ac = CONCAT13(10,(int3)_UNK_1806c2a3e);
    local_a8 = 0xb86e;
    uStack_a6 = 0x49;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd1e8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd1e8) = 1;
      func_0x1801b4360(lVal_13 + 0xd1b1,local_d8);
      func_0x180673140(&LAB_1802e2b00);
    }
    uVal_22 = _UNK_1806b54cc;
    uVal_21 = _UNK_1806b54c8;
    uVal_20 = _UNK_1806b54c4;
    uVal_19 = _DAT_1806b54c0;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0xd1b1);
    if (*(char *)(lVal_13 + 0xd1e4) == '\x01') {
      uVal_23 = *(uint *)(lVal_13 + 0xd1b5) ^ _UNK_1806b54c4;
      uVal_24 = *(uint *)(lVal_13 + 0xd1b9) ^ _UNK_1806b54c8;
      uVal_25 = *(uint *)(lVal_13 + 0xd1bd) ^ _UNK_1806b54cc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b54c0;
      *(uint *)(lVal_13 + 0xd1b5) = uVal_23;
      *(uint *)(lVal_13 + 0xd1b9) = uVal_24;
      *(uint *)(lVal_13 + 0xd1bd) = uVal_25;
      *(uint *)(lVal_13 + 0xd1c1) = *(uint *)(lVal_13 + 0xd1c1) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd1c5) = *(uint *)(lVal_13 + 0xd1c5) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd1c9) = *(uint *)(lVal_13 + 0xd1c9) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd1cd) = *(uint *)(lVal_13 + 0xd1cd) ^ uVal_22;
      *(uint *)(lVal_13 + 0xd1d1) = *(uint *)(lVal_13 + 0xd1d1) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd1d5) = *(uint *)(lVal_13 + 0xd1d5) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd1d9) = *(uint *)(lVal_13 + 0xd1d9) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd1dd) = *(uint *)(lVal_13 + 0xd1dd) ^ uVal_22;
      *(ushort *)(lVal_13 + 0xd1e1) = *(ushort *)(lVal_13 + 0xd1e1) ^ 0xd30d;
      *(byte *)(lVal_13 + 0xd1e3) = *(byte *)(lVal_13 + 0xd1e3) ^ 0x49;
      *(uint8_t *)(lVal_13 + 0xd1e4) = 0;
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if ((int64_t)sz_11 < 0) goto LAB_1802d19b0;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4c = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4c = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_88._0_8_ = pU64_15;
    }
    local_78._8_8_ = uVal_18;
    local_78._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,pU64_1,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd1fc) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd1fc) = 1;
      *(uint8_t *)(lVal_13 + 0xd1fa) = 1;
      *(uint64_t *)(lVal_13 + 0xd1f0) = 0xa0d1c26053dba41;
      *(uint16_t *)(lVal_13 + 0xd1f8) = 0xd37f;
      func_0x180673140(&LAB_1802e2b40);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0xd1f0);
    if (*(char *)(lVal_13 + 0xd1fa) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x656173452549d30d;
      *(byte *)(lVal_13 + 0xd1f8) = *(byte *)(lVal_13 + 0xd1f8) ^ 0xd;
      *(byte *)(lVal_13 + 0xd1f9) = *(byte *)(lVal_13 + 0xd1f9) ^ 0xd3;
      *(uint8_t *)(lVal_13 + 0xd1fa) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_3);
    if ((int64_t)sz_11 < 0) goto LAB_1802d19bd;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_56 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_56 = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_d8._0_8_ = pU64_16;
    }
    local_c8 = (uint32_t)sz_11;
    uStack_c4 = (uint32_t)(sz_11 >> 0x20);
    uStack_c0 = (uint32_t)uVal_18;
    uStack_bc = (uint32_t)(uVal_18 >> 0x20);
    func_0x1806aa960(pU64_16,pU64_3,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_16 = local_d8;
    pU64_15 = local_88;
    func_0x1801cd600(local_60,pU64_16,pU64_15,pU64_4,&local_298,local_1c0,uVal_28);
    uVal_18 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_18) {
      uVal_12 = uVal_18 + 1;
      lVal_13 = local_d8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_12 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_18 = local_78._8_8_ + 1;
      lVal_13 = local_88._0_8_;
      if (0xfff < uVal_18) {
        lVal_13 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_18 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_18);
    }
    local_148 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_148 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_180);
    }
    pU64_5 = (uint8_t *)((int64_t)local_60 + 0xdc);
    uVal_6 = *pU64_5;
    local_a8 = (uint16_t)_DAT_1806c2a75;
    uStack_a6 = (uint8_t)((uint)_DAT_1806c2a75 >> 0x10);
    uStack_a5 = (uint8_t)((uint)_DAT_1806c2a75 >> 0x18);
    uStack_a4 = _UNK_1806c2a79;
    uStack_a0 = _UNK_1806c2a7d;
    uStack_9c = (uint16_t)_UNK_1806c2a81;
    uStack_9a = (uint8_t)((uint)_UNK_1806c2a81 >> 0x10);
    uStack_99 = (uint8_t)((uint)_UNK_1806c2a81 >> 0x18);
    uStack_b8 = _DAT_1806c2a65;
    uStack_b4 = _UNK_1806c2a69;
    uStack_b0 = _UNK_1806c2a6d;
    uStack_ac = _UNK_1806c2a71;
    local_c8 = _DAT_1806c2a55;
    uStack_c4 = _UNK_1806c2a59;
    uStack_c0 = _UNK_1806c2a5d;
    uStack_bc = _UNK_1806c2a61;
    local_d8._8_8_ = _UNK_1806c2a4d;
    local_d8._0_8_ = _DAT_1806c2a45;
    uStack_98 = 0xd6a1c7ba53b5;
    uStack_92 = 0xb3;
    uStack_91 = 0xef;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd248) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd248) = 1;
      func_0x1801b2030(lVal_13 + 0xd1fd,local_d8);
      func_0x180673140(&LAB_1802e2b70);
    }
    uVal_22 = _UNK_1806ae4dc;
    uVal_21 = _UNK_1806ae4d8;
    uVal_20 = _UNK_1806ae4d4;
    uVal_19 = _DAT_1806ae4d0;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0xd1fd);
    if (*(char *)(lVal_13 + 0xd245) == '\x01') {
      uVal_23 = *(uint *)(lVal_13 + 0xd201) ^ _UNK_1806ae4d4;
      uVal_24 = *(uint *)(lVal_13 + 0xd205) ^ _UNK_1806ae4d8;
      uVal_25 = *(uint *)(lVal_13 + 0xd209) ^ _UNK_1806ae4dc;
      *pU64_1 = *pU64_1 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_13 + 0xd201) = uVal_23;
      *(uint *)(lVal_13 + 0xd205) = uVal_24;
      *(uint *)(lVal_13 + 0xd209) = uVal_25;
      *(uint *)(lVal_13 + 0xd20d) = *(uint *)(lVal_13 + 0xd20d) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd211) = *(uint *)(lVal_13 + 0xd211) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd215) = *(uint *)(lVal_13 + 0xd215) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd219) = *(uint *)(lVal_13 + 0xd219) ^ uVal_22;
      *(uint *)(lVal_13 + 0xd21d) = *(uint *)(lVal_13 + 0xd21d) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd221) = *(uint *)(lVal_13 + 0xd221) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd225) = *(uint *)(lVal_13 + 0xd225) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd229) = *(uint *)(lVal_13 + 0xd229) ^ uVal_22;
      *(uint *)(lVal_13 + 0xd22d) = *(uint *)(lVal_13 + 0xd22d) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd231) = *(uint *)(lVal_13 + 0xd231) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd235) = *(uint *)(lVal_13 + 0xd235) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd239) = *(uint *)(lVal_13 + 0xd239) ^ uVal_22;
      *(uint64_t *)(lVal_13 + 0xd23d) = *(uint64_t *)(lVal_13 + 0xd23d) ^ SUB168(_DAT_1806b54d0,0);
      *(uint8_t *)(lVal_13 + 0xd245) = 0;
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if ((int64_t)sz_11 < 0) goto LAB_1802d19ca;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4e = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4e = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_88._0_8_ = pU64_15;
    }
    local_78._8_8_ = uVal_18;
    local_78._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,pU64_1,sz_11);
    pU64_15[sz_11] = 0;
    local_f8 = _DAT_1806c2a8d;
    uStack_f0 = (undefined7)_UNK_1806c2a95;
    uStack_e9 = 0x8e;
    uStack_e8 = 0xb2;
    uStack_e7 = 0xd51d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd260) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd260) = 1;
      func_0x18007cb80(lVal_13 + 0xd249,&local_f8);
      func_0x180673140(&LAB_1802e2bb0);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xd249);
    func_0x1802e4d50(fnPtr_2);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_2);
    if ((int64_t)sz_11 < 0) goto LAB_1802d19d7;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4d = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4d = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_d8._0_8_ = pU64_16;
    }
    local_c8 = (uint32_t)sz_11;
    uStack_c4 = (uint32_t)(sz_11 >> 0x20);
    uStack_c0 = (uint32_t)uVal_18;
    uStack_bc = (uint32_t)(uVal_18 >> 0x20);
    func_0x1806aa960(pU64_16,fnPtr_2,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_16 = local_d8;
    pU64_15 = local_88;
    func_0x1801ccd70(local_60,pU64_16,pU64_15,pU64_5,uVal_6,local_180,uVal_28);
    uVal_18 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_18) {
      uVal_12 = uVal_18 + 1;
      lVal_13 = local_d8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_12 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_18 = local_78._8_8_ + 1;
      lVal_13 = local_88._0_8_;
      if (0xfff < uVal_18) {
        lVal_13 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_18 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_18);
    }
    local_108 = 0;
    if (DAT_18083fb50 != (uint64_t *)0x0) {
      local_108 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_140);
    }
    pU64_5 = (uint8_t *)((int64_t)local_60 + 0xdd);
    uVal_6 = *pU64_5;
    local_c8 = _DAT_1806c2ab0;
    uStack_c4 = _UNK_1806c2ab4;
    uStack_c0 = _UNK_1806c2ab8;
    local_d8._8_8_ = _UNK_1806c2aa8;
    local_d8._0_8_ = _DAT_1806c2aa0;
    uStack_bc = CONCAT13(0xe7,(int3)_UNK_1806c2abc);
    uStack_b8 = 0x2ac5d315;
    uStack_b4 = CONCAT13(uStack_b4._3_1_,0xf5405a);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd28c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd28c) = 1;
      func_0x1801b72f0(lVal_13 + 0xd261,local_d8);
      func_0x180673140(&LAB_1802e2be0);
    }
    uVal_22 = _UNK_1806b2cbc;
    uVal_21 = _UNK_1806b2cb8;
    uVal_20 = _UNK_1806b2cb4;
    uVal_19 = _DAT_1806b2cb0;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0xd261);
    if (*(char *)(lVal_13 + 0xd288) == '\x01') {
      uVal_23 = *(uint *)(lVal_13 + 0xd265) ^ _UNK_1806b2cb4;
      uVal_24 = *(uint *)(lVal_13 + 0xd269) ^ _UNK_1806b2cb8;
      uVal_25 = *(uint *)(lVal_13 + 0xd26d) ^ _UNK_1806b2cbc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_13 + 0xd265) = uVal_23;
      *(uint *)(lVal_13 + 0xd269) = uVal_24;
      *(uint *)(lVal_13 + 0xd26d) = uVal_25;
      *(uint *)(lVal_13 + 0xd271) = *(uint *)(lVal_13 + 0xd271) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd275) = *(uint *)(lVal_13 + 0xd275) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd279) = *(uint *)(lVal_13 + 0xd279) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd27d) = *(uint *)(lVal_13 + 0xd27d) ^ uVal_22;
      *(uint *)(lVal_13 + 0xd281) = *(uint *)(lVal_13 + 0xd281) ^ 0x45a9b135;
      *(byte *)(lVal_13 + 0xd285) = *(byte *)(lVal_13 + 0xd285) ^ 0x39;
      *(byte *)(lVal_13 + 0xd286) = *(byte *)(lVal_13 + 0xd286) ^ 0x2b;
      *(byte *)(lVal_13 + 0xd287) = *(byte *)(lVal_13 + 0xd287) ^ 0xf5;
      *(uint8_t *)(lVal_13 + 0xd288) = 0;
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if ((int64_t)sz_11 < 0) goto LAB_1802d19e4;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_50 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_50 = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_88._0_8_ = pU64_15;
    }
    local_78._8_8_ = uVal_18;
    local_78._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,pU64_1,sz_11);
    pU64_15[sz_11] = 0;
    local_f8 = _DAT_1806c2ac7;
    uStack_f0 = (undefined7)_UNK_1806c2acf;
    uStack_e9 = (uint8_t)((uint64_t)_UNK_1806c2acf >> 0x38);
    uStack_e8 = 0x35;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd2a0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd2a0) = 1;
      func_0x18007d2b0(lVal_13 + 0xd28d,&local_f8);
      func_0x180673140(&LAB_1802e2c10);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0xd28d);
    if (*(char *)(lVal_13 + 0xd29e) == '\x01') {
      uVal_19 = *(uint *)(lVal_13 + 0xd291) ^ _UNK_1806b2cb4;
      uVal_20 = *(uint *)(lVal_13 + 0xd295) ^ _UNK_1806b2cb8;
      uVal_21 = *(uint *)(lVal_13 + 0xd299) ^ _UNK_1806b2cbc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2cb0;
      *(uint *)(lVal_13 + 0xd291) = uVal_19;
      *(uint *)(lVal_13 + 0xd295) = uVal_20;
      *(uint *)(lVal_13 + 0xd299) = uVal_21;
      *(byte *)(lVal_13 + 0xd29d) = *(byte *)(lVal_13 + 0xd29d) ^ 0x35;
      *(uint8_t *)(lVal_13 + 0xd29e) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if ((int64_t)sz_11 < 0) goto LAB_1802d19f1;
    uVal_18 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_12) {
        uVal_18 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4f = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4f = 1;
        lVal_13 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_d8._0_8_ = pU64_16;
    }
    local_c8 = (uint32_t)sz_11;
    uStack_c4 = (uint32_t)(sz_11 >> 0x20);
    uStack_c0 = (uint32_t)uVal_18;
    uStack_bc = (uint32_t)(uVal_18 >> 0x20);
    func_0x1806aa960(pU64_16,pU64_1,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_16 = local_d8;
    pU64_15 = local_88;
    func_0x1801ccd70(local_60,pU64_16,pU64_15,pU64_5,uVal_6,local_140,uVal_28);
    uVal_18 = CONCAT44(uStack_bc,uStack_c0);
    if (0xf < uVal_18) {
      uVal_12 = uVal_18 + 1;
      lVal_13 = local_d8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_12 = uVal_18 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_18 = local_78._8_8_ + 1;
      lVal_13 = local_88._0_8_;
      if (0xfff < uVal_18) {
        lVal_13 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
        uVal_18 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_18);
    }
    local_2f8 = &PTR_LAB_1806c3360;
    local_2f0 = local_60;
    local_2c0 = &local_2f8;
    uVal_6 = *(uint8_t *)((int64_t)local_60 + 0xde);
    uStack_b8 = _DAT_1806c2af8;
    uStack_b4 = _UNK_1806c2afc;
    uStack_b0 = _UNK_1806c2b00;
    uStack_ac = _UNK_1806c2b04;
    local_c8 = _DAT_1806c2ae8;
    uStack_c4 = _UNK_1806c2aec;
    uStack_c0 = _UNK_1806c2af0;
    uStack_bc = _UNK_1806c2af4;
    local_d8._8_8_ = _UNK_1806c2ae0;
    local_d8._0_8_ = _DAT_1806c2ad8;
    local_a8 = 0x3129;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd2d4) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xd2d4) = 1;
      func_0x1802d74e0(lVal_13 + 0xd2a1,local_d8);
      func_0x180673140(&LAB_1802e2c40);
    }
    uVal_22 = _UNK_1806b649c;
    uVal_21 = _UNK_1806b6498;
    uVal_20 = _UNK_1806b6494;
    uVal_19 = _DAT_1806b6490;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0xd2a1);
    if (*(char *)(lVal_13 + 0xd2d3) == '\x01') {
      uVal_23 = *(uint *)(lVal_13 + 0xd2a5) ^ _UNK_1806b6494;
      uVal_24 = *(uint *)(lVal_13 + 0xd2a9) ^ _UNK_1806b6498;
      uVal_25 = *(uint *)(lVal_13 + 0xd2ad) ^ _UNK_1806b649c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b6490;
      *(uint *)(lVal_13 + 0xd2a5) = uVal_23;
      *(uint *)(lVal_13 + 0xd2a9) = uVal_24;
      *(uint *)(lVal_13 + 0xd2ad) = uVal_25;
      *(uint *)(lVal_13 + 0xd2b1) = *(uint *)(lVal_13 + 0xd2b1) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd2b5) = *(uint *)(lVal_13 + 0xd2b5) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd2b9) = *(uint *)(lVal_13 + 0xd2b9) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd2bd) = *(uint *)(lVal_13 + 0xd2bd) ^ uVal_22;
      *(uint *)(lVal_13 + 0xd2c1) = *(uint *)(lVal_13 + 0xd2c1) ^ uVal_19;
      *(uint *)(lVal_13 + 0xd2c5) = *(uint *)(lVal_13 + 0xd2c5) ^ uVal_20;
      *(uint *)(lVal_13 + 0xd2c9) = *(uint *)(lVal_13 + 0xd2c9) ^ uVal_21;
      *(uint *)(lVal_13 + 0xd2cd) = *(uint *)(lVal_13 + 0xd2cd) ^ uVal_22;
      *(ushort *)(lVal_13 + 0xd2d1) = *(ushort *)(lVal_13 + 0xd2d1) ^ 0x3145;
      *(uint8_t *)(lVal_13 + 0xd2d3) = 0;
    }
    local_78._0_16_ = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_11) {
      uVal_18 = 0xf;
      if (0xf < sz_11) {
        uVal_12 = sz_11 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_12) {
          uVal_18 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          local_52 = 1;
          pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
        }
        else {
          local_52 = 1;
          lVal_13 = func_0x180672de0(uVal_18 + 0x28);
          pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_15 + -8) = lVal_13;
        }
        local_88._0_8_ = pU64_15;
      }
      local_78._8_8_ = uVal_18;
      local_78._0_8_ = sz_11;
      func_0x1806aa960(pU64_15,pU64_1,sz_11);
      pU64_15[sz_11] = 0;
      local_f8 = _DAT_1806c2b0a;
      uStack_f0 = (undefined7)_UNK_1806c2b12;
      uStack_e9 = (uint8_t)((uint64_t)_UNK_1806c2b12 >> 0x38);
      uStack_e8 = 0x45;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xd2e8) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0xd2e8) = 1;
        func_0x18007d2b0(lVal_13 + 0xd2d5,&local_f8);
        func_0x180673140(&LAB_1802e2c80);
      }
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_13 + 0xd2d5);
      if (*(char *)(lVal_13 + 0xd2e6) == '\x01') {
        uVal_19 = *(uint *)(lVal_13 + 0xd2d9) ^ _UNK_1806b6494;
        uVal_20 = *(uint *)(lVal_13 + 0xd2dd) ^ _UNK_1806b6498;
        uVal_21 = *(uint *)(lVal_13 + 0xd2e1) ^ _UNK_1806b649c;
        *pU64_1 = *pU64_1 ^ _DAT_1806b6490;
        *(uint *)(lVal_13 + 0xd2d9) = uVal_19;
        *(uint *)(lVal_13 + 0xd2dd) = uVal_20;
        *(uint *)(lVal_13 + 0xd2e1) = uVal_21;
        *(byte *)(lVal_13 + 0xd2e5) = *(byte *)(lVal_13 + 0xd2e5) ^ 0x45;
        *(uint8_t *)(lVal_13 + 0xd2e6) = 0;
      }
      local_d8 = (uint8_t  [16])0x0;
      sz_11 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_11) {
        uVal_18 = 0xf;
        if (0xf < sz_11) {
          uVal_12 = sz_11 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_12) {
            uVal_18 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            local_51 = 1;
            pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
          }
          else {
            local_51 = 1;
            lVal_13 = func_0x180672de0(uVal_18 + 0x28);
            pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_16 + -8) = lVal_13;
          }
          local_d8._0_8_ = pU64_16;
        }
        pU64_14 = local_60;
        lVal_13 = (int64_t)local_60 + 0xde;
        local_c8 = (uint32_t)sz_11;
        uStack_c4 = (uint32_t)(sz_11 >> 0x20);
        uStack_c0 = (uint32_t)uVal_18;
        uStack_bc = (uint32_t)(uVal_18 >> 0x20);
        func_0x1806aa960(pU64_16,pU64_1,sz_11);
        pU64_16[sz_11] = 0;
        func_0x1801ccd70(pU64_14,local_d8,local_88,lVal_13,uVal_6,&local_2f8,uVal_28 & 0xffffff00);
        uVal_18 = CONCAT44(uStack_bc,uStack_c0);
        if (0xf < uVal_18) {
          uVal_12 = uVal_18 + 1;
          lVal_13 = local_d8._0_8_;
          if (0xfff < uVal_12) {
            lVal_13 = *(int64_t *)(local_d8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_13)) goto LAB_1802d195b;
            uVal_12 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_12);
        }
        if (0xf < (uint64_t)local_78._8_8_) {
          uVal_18 = local_78._8_8_ + 1;
          lVal_13 = local_88._0_8_;
          if (0xfff < uVal_18) {
            lVal_13 = *(int64_t *)(local_88._0_8_ + -8);
            if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_13)) {
LAB_1802d195b:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_18 = local_78._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_18);
        }
        return local_60;
      }
      goto LAB_1802d1a0b;
    }
  }
  local_52 = 1;
  func_0x18007ba70();
LAB_1802d1a0b:
  local_51 = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_7)();
  return pU64_14;
}

// Unwind@1802d1a20
void Unwind_1802d1a20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x100);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 200));
    *(uint64_t *)(param_2 + 0x100) = 0;
  }
  return;
}

// Unwind@1802d1a80
void Unwind_1802d1a80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd0f8) = 0;
  *(uint8_t *)(param_2 + 0x2ff) = 1;
  return;
}

// Unwind@1802d1ad0
void Unwind_1802d1ad0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x140);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1802d1b30
void Unwind_1802d1b30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd13c) = 0;
  *(uint8_t *)(param_2 + 0x2fe) = 1;
  return;
}

// Unwind@1802d1b80
void Unwind_1802d1b80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x180);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x148));
    *(uint64_t *)(param_2 + 0x180) = 0;
  }
  return;
}

// Unwind@1802d1be0
void Unwind_1802d1be0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd19c) = 0;
  *(uint8_t *)(param_2 + 0x2fd) = 1;
  return;
}

// Unwind@1802d1c30
void Unwind_1802d1c30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x188));
    *(uint64_t *)(param_2 + 0x1c0) = 0;
  }
  return;
}

// Unwind@1802d1c90
void Unwind_1802d1c90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd1e8) = 0;
  *(uint8_t *)(param_2 + 0x2fc) = 1;
  return;
}

// Unwind@1802d1ce0
void Unwind_1802d1ce0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c8));
    *(uint64_t *)(param_2 + 0x200) = 0;
  }
  return;
}

// Unwind@1802d1d40
void Unwind_1802d1d40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd248) = 0;
  *(uint8_t *)(param_2 + 0x2fa) = 1;
  return;
}

// Unwind@1802d1d90
void Unwind_1802d1d90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x240);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x208));
    *(uint64_t *)(param_2 + 0x240) = 0;
  }
  return;
}

// Unwind@1802d1df0
void Unwind_1802d1df0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd28c) = 0;
  *(uint8_t *)(param_2 + 0x2f8) = 1;
  return;
}

// Unwind@1802d1e40
void Unwind_1802d1e40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@1802d1e80
void Unwind_1802d1e80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2f5) = 0;
  return;
}

// Unwind@1802d1ec0
void Unwind_1802d1ec0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2f5);
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x2ff) = uVal_1;
  return;
}

// Unwind@1802d1f10
void Unwind_1802d1f10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2ff) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x100), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 200));
    *(uint64_t *)(param_2 + 0x100) = 0;
  }
  return;
}

// Unwind@1802d1f70
void Unwind_1802d1f70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2f4) = 0;
  return;
}

// Unwind@1802d1fb0
void Unwind_1802d1fb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2f4);
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x2fe) = uVal_1;
  return;
}

// Unwind@1802d2000
void Unwind_1802d2000(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2fe) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x140), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1802d2060
void Unwind_1802d2060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2f3) = 0;
  return;
}

// Unwind@1802d20a0
void Unwind_1802d20a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2f3);
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x2fd) = uVal_1;
  return;
}

// Unwind@1802d20f0
void Unwind_1802d20f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2fd) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x180), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x148));
    *(uint64_t *)(param_2 + 0x180) = 0;
  }
  return;
}

// Unwind@1802d2150
void Unwind_1802d2150(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2f2) = 0;
  return;
}

// Unwind@1802d2190
void Unwind_1802d2190(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2f2);
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x2fc) = uVal_1;
  return;
}

// Unwind@1802d21e0
void Unwind_1802d21e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2fc) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x188));
    *(uint64_t *)(param_2 + 0x1c0) = 0;
  }
  return;
}

// Unwind@1802d2240
void Unwind_1802d2240(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2fb) = 0;
  return;
}

// Unwind@1802d2280
void Unwind_1802d2280(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2fb);
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x2fa) = uVal_1;
  return;
}

// Unwind@1802d22d0
void Unwind_1802d22d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2fa) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c8));
    *(uint64_t *)(param_2 + 0x200) = 0;
  }
  return;
}

// Unwind@1802d2330
void Unwind_1802d2330(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2f9) = 0;
  return;
}

// Unwind@1802d2370
void Unwind_1802d2370(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2f9);
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x2f8) = uVal_1;
  return;
}

// Unwind@1802d23c0
void Unwind_1802d23c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2f8) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x240), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x208));
    *(uint64_t *)(param_2 + 0x240) = 0;
  }
  return;
}

// Unwind@1802d2420
void Unwind_1802d2420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x2f7) = 0;
  return;
}

// Unwind@1802d2460
void Unwind_1802d2460(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x2f7);
  func_0x180001e70(param_2 + 0x2c0);
  *(uint8_t *)(param_2 + 0x2f6) = uVal_1;
  return;
}

// Unwind@1802d24b0
void Unwind_1802d24b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x2f6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1802d2510
void Unwind_1802d2510(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x248));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x2e8));
  return;
}

// Unwind@1802d2560
void Unwind_1802d2560(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd0d4) = 0;
  return;
}

// Unwind@1802d25b0
void Unwind_1802d25b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd260) = 0;
  *(uint8_t *)(param_2 + 0x2fb) = 1;
  return;
}

// Unwind@1802d2600
void Unwind_1802d2600(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd2a0) = 0;
  *(uint8_t *)(param_2 + 0x2f9) = 1;
  return;
}

// Unwind@1802d2650
void Unwind_1802d2650(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd2d4) = 0;
  *(uint8_t *)(param_2 + 0x2f6) = 1;
  return;
}

// Unwind@1802d26a0
void Unwind_1802d26a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd2e8) = 0;
  *(uint8_t *)(param_2 + 0x2f7) = 1;
  return;
}

// Unwind@1802d29a0
void Unwind_1802d29a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd31c) = 0;
  return;
}

// Unwind@1802d3350
void Unwind_1802d3350(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x50);
  func_0x1800349b0(param_2 + 0x78);
  return;
}

// Unwind@1802d3c80
void Unwind_1802d3c80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// func_0x1802d3fd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802d3fd0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint8_t *pU64_11;
  uint64_t uVal_12;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  size_t local_68;
  uint64_t uStack_60;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  undefined3 uStack_48;
  uint32_t uStack_45;
  uint32_t uStack_41;
  uint32_t uStack_3d;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  uStack_48 = _UNK_1806c2b62;
  uStack_45 = _UNK_1806c2b65;
  uStack_41 = _UNK_1806c2b69;
  uStack_3d = _UNK_1806c2b6d;
  uStack_58 = _DAT_1806c2b52;
  uStack_54 = _UNK_1806c2b56;
  uStack_50 = _UNK_1806c2b5a;
  uStack_4c = _UNK_1806c2b5e;
  local_68 = CONCAT44(_UNK_1806c2b46,_DAT_1806c2b42);
  uStack_60 = CONCAT44(_UNK_1806c2b4e,_UNK_1806c2b4a);
  local_78._4_4_ = _UNK_1806c2b36;
  local_78._0_4_ = _DAT_1806c2b32;
  uStack_70._0_4_ = _UNK_1806c2b3a;
  uStack_70._4_4_ = _UNK_1806c2b3e;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xd360) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0xd360) = 1;
    func_0x1801b7c70(lVal_10 + 0xd31d,local_78);
    func_0x180673140(&LAB_1802e2f70);
  }
  uVal_7 = _UNK_1806b2d6c;
  uVal_6 = _UNK_1806b2d68;
  uVal_5 = _UNK_1806b2d64;
  uVal_4 = _DAT_1806b2d60;
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_10 + 0xd31d);
  if (*(char *)(lVal_10 + 0xd35c) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_10 + 0xd321) ^ _UNK_1806b2d64;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2d60;
    auArr_1._8_4_ = *(uint *)(lVal_10 + 0xd325) ^ _UNK_1806b2d68;
    auArr_1._12_4_ = *(uint *)(lVal_10 + 0xd329) ^ _UNK_1806b2d6c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_10 + 0xd331) ^ uVal_5;
    auArr_2._0_4_ = *(uint *)(lVal_10 + 0xd32d) ^ uVal_4;
    auArr_2._8_4_ = *(uint *)(lVal_10 + 0xd335) ^ uVal_6;
    auArr_2._12_4_ = *(uint *)(lVal_10 + 0xd339) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_10 + 0xd32d) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_10 + 0xd341) ^ uVal_5;
    auArr_3._0_4_ = *(uint *)(lVal_10 + 0xd33d) ^ uVal_4;
    auArr_3._8_4_ = *(uint *)(lVal_10 + 0xd345) ^ uVal_6;
    auArr_3._12_4_ = *(uint *)(lVal_10 + 0xd349) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_10 + 0xd33d) = auArr_3;
    *(uint64_t *)(lVal_10 + 0xd34d) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_10 + 0xd34d) >> 0x20) ^ _UNK_1806b6414,
                  (uint)*(uint64_t *)(lVal_10 + 0xd34d) ^ _DAT_1806b6410);
    *(byte *)(lVal_10 + 0xd355) = *(byte *)(lVal_10 + 0xd355) ^ 0x75;
    *(byte *)(lVal_10 + 0xd356) = *(byte *)(lVal_10 + 0xd356) ^ 0x55;
    *(byte *)(lVal_10 + 0xd357) = *(byte *)(lVal_10 + 0xd357) ^ 0x4d;
    *(byte *)(lVal_10 + 0xd358) = *(byte *)(lVal_10 + 0xd358) ^ 0xd5;
    *(byte *)(lVal_10 + 0xd359) = *(byte *)(lVal_10 + 0xd359) ^ 0x37;
    *(byte *)(lVal_10 + 0xd35a) = *(byte *)(lVal_10 + 0xd35a) ^ 0xd7;
    *(byte *)(lVal_10 + 0xd35b) = *(byte *)(lVal_10 + 0xd35b) ^ 0x6b;
    *(uint8_t *)(lVal_10 + 0xd35c) = 0;
  }
  _local_78 = ZEXT816(0);
  sz_8 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_8) {
    if (sz_8 < 0x10) {
      pU64_11 = local_78;
      uVal_12 = 0xf;
    }
    else {
      uVal_9 = sz_8 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_9) {
        uVal_12 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_11 = (uint8_t *)func_0x180672de0(uVal_12 + 1);
      }
      else {
        lVal_10 = func_0x180672de0(uVal_12 + 0x28);
        pU64_11 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_11 + -8) = lVal_10;
      }
      local_78 = (uint8_t  [8])pU64_11;
    }
    local_68 = sz_8;
    uStack_60 = uVal_12;
    func_0x1806aa960(pU64_11,_Str,sz_8);
    pU64_11[sz_8] = 0;
    func_0x1801c2ba0(param_1,0,0,local_78);
    if (0xf < uStack_60) {
      uVal_12 = uStack_60 + 1;
      lVal_10 = (int64_t)local_78;
      if (0xfff < uVal_12) {
        lVal_10 = *(int64_t *)((int64_t)local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_10)) goto LAB_1802d41fa;
        uVal_12 = uStack_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_12);
    }
    *param_1 = &PTR_LAB_1806c0b80;
    *(uint32_t *)(param_1 + 0x10) = 0;
    param_1[0x11] = 0;
    return param_1;
  }
  func_0x18007ba70();
LAB_1802d41fa:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1802d4200
void Unwind_1802d4200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1802d4230
void Unwind_1802d4230(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd360) = 0;
  return;
}

// Unwind@1802d4530
void Unwind_1802d4530(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd384) = 0;
  return;
}

// Unwind@1802d48c0
void Unwind_1802d48c0(void)
{
  func_0x180672f60(&DAT_18083fca0);
  return;
}

// Unwind@1802d4900
void Unwind_1802d4900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1802d4930
void Unwind_1802d4930(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd3c0) = 0;
  return;
}

// func_0x1802d4970
int64_t func_0x1802d4970(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xead69de1767f84c) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x34f4b9b196b4d2ab) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1802d4a14;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x34f4b9b196b4d2ab);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1802d4a3a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x34f4b9b196b4d2ab);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffa2406b1aU) + -0xd;
  }
LAB_1802d4a14:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1802d4a3a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// Unwind@1802d4af0
void Unwind_1802d4af0(void)
{
  func_0x180672f60(&DAT_18083fcb0);
  return;
}

// Unwind@1802d4cf0
void Unwind_1802d4cf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1802d4d20
void Unwind_1802d4d20(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd3d8) = 0;
  return;
}

// func_0x1802d4da0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802d4da0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  uint32_t uVal_3;
  func_ptr_t fnPtr_4;
  size_t sz_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t ***ptr3_U64_8;
  uint64_t *pU64_9;
  uint64_t ****ptr4_U64_10;
  uint64_t ****ptr4_U64_11;
  uint8_t *pU64_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint8_t uVal_15;
  uint in_stack_fffffffffffffeb8;
  uint8_t **local_128;
  uint64_t *local_120;
  uint8_t ***local_f0;
  uint8_t local_e8 [56];
  uint64_t local_b0;
  uint64_t ****local_a8;
  undefined6 uStack_a0;
  uint16_t uStack_9a;
  uint16_t uStack_98;
  uint32_t uStack_96;
  uint16_t uStack_92;
  uint16_t uStack_90;
  uint32_t uStack_8e;
  uint16_t uStack_8a;
  uint64_t *local_80;
  uint8_t local_78 [16];
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_54;
  uint8_t local_53;
  uint8_t local_52;
  uint8_t local_51;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_78._8_8_ = _UNK_1806c2bd4;
  local_78._0_8_ = _DAT_1806c2bcc;
  uStack_60 = (uint64_t)local_68;
  local_68 = (uint8_t  [8])0x47d2acc9e1c6b1e8;
  local_80 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xd3f4) == '\0') {
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_7 + 0xd3f4) = 1;
    func_0x18007d9e0(lVal_7 + 0xd3d9,local_78);
    func_0x180673140(&LAB_1802e3080);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xd3d9);
  func_0x1802e4e00(fnPtr_1);
  _local_68 = (uint8_t  [16])0x0;
  local_78 = (uint8_t  [16])0x0;
  sz_5 = strlen(fnPtr_1);
  if ((int64_t)sz_5 < 0) {
    func_0x18007ba70();
LAB_1802d56b8:
    local_51 = 1;
    func_0x18007ba70();
LAB_1802d56c5:
    local_53 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_5 < 0x10) {
      pU64_12 = local_78;
      uVal_14 = 0xf;
    }
    else {
      uVal_6 = sz_5 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_6) {
        uVal_14 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_7;
      }
      local_78._0_8_ = pU64_12;
    }
    local_68 = (uint8_t  [8])sz_5;
    uStack_60 = uVal_14;
    func_0x1806aa960(pU64_12,fnPtr_1,sz_5);
    pU64_12[sz_5] = 0;
    pU64_12 = local_78;
    func_0x1801c2ba0(local_80,0,0,pU64_12);
    if (0xf < uStack_60) {
      uVal_14 = uStack_60 + 1;
      lVal_7 = local_78._0_8_;
      if (0xfff < uVal_14) {
        lVal_7 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_7)) goto LAB_1802d56b1;
        uVal_14 = uStack_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_14);
    }
    *local_80 = &PTR_LAB_1806c0cb0;
    pU64_9 = local_80 + 0x10;
    *(uint8_t *)(local_80 + 0x10) = 0;
    *(uint32_t *)((int64_t)local_80 + 0x84) = 0x3f4ccccd;
    local_b0 = 0;
    if (DAT_18083fb50 == (uint64_t *)0x0) {
      uVal_15 = 0;
    }
    else {
      local_b0 = (**(func_ptr_t *)*DAT_18083fb50)(DAT_18083fb50,local_e8);
      uVal_15 = *(uint8_t *)pU64_9;
    }
    uStack_98 = _UNK_1806c2bf4;
    uStack_96 = _UNK_1806c2bf6;
    uStack_92 = (uint16_t)_UNK_1806c2bfa;
    uStack_90 = (uint16_t)((uint)_UNK_1806c2bfa >> 0x10);
    uStack_8e = _UNK_1806c2bfe;
    local_a8 = _DAT_1806c2be4;
    uStack_a0 = _UNK_1806c2bec;
    uStack_9a = _DAT_1806c2bf2;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd414) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0xd414) = 1;
      func_0x18008fa60(lVal_7 + 0xd3f5,&local_a8);
      func_0x180673140(&LAB_1802e30b0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xd3f5);
    func_0x1802e4e30(fnPtr_1);
    _local_68 = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_5 = strlen(fnPtr_1);
    if ((int64_t)sz_5 < 0) goto LAB_1802d56b8;
    uVal_14 = 0xf;
    if (0xf < sz_5) {
      uVal_6 = sz_5 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_6) {
        uVal_14 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        local_51 = 1;
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        local_51 = 1;
        lVal_7 = func_0x180672de0(uVal_14 + 0x28);
        pU64_12 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_7;
      }
      local_78._0_8_ = pU64_12;
    }
    uStack_60 = uVal_14;
    local_68 = (uint8_t  [8])sz_5;
    func_0x1806aa960(pU64_12,fnPtr_1,sz_5);
    pU64_12[sz_5] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd420) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0xd420) = 1;
      *(uint64_t *)(lVal_7 + 0xd418) = 0x121fe6d9eb39e9b;
      func_0x180673140(&LAB_1802e30e0);
    }
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_7 + 0xd418);
    if (*(char *)(lVal_7 + 0xd41f) == '\x01') {
      *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_7 + 0xd41d) << 8,*(uint32_t *)pU64_2) |
                (uint64_t)*(byte *)(lVal_7 + 0xd41c) << 0x20) ^ SUB168(_DAT_1806bb3a0,0);
    }
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8a = 0;
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9a = 0;
    sz_5 = strlen((char *)pU64_2);
    if ((int64_t)sz_5 < 0) goto LAB_1802d56c5;
    if (sz_5 < 0x10) {
      ptr4_U64_11 = &local_a8;
      uVal_14 = 0xf;
    }
    else {
      uVal_6 = sz_5 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_6) {
        uVal_14 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        local_53 = 1;
        ptr4_U64_11 = (uint64_t ****)func_0x180672de0(uVal_14 + 1);
        local_a8 = ptr4_U64_11;
      }
      else {
        local_53 = 1;
        ptr3_U64_8 = (uint64_t ***)func_0x180672de0(uVal_14 + 0x28);
        ptr4_U64_11 = (uint64_t ****)((int64_t)ptr3_U64_8 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_11[-1] = ptr3_U64_8;
        local_a8 = ptr4_U64_11;
      }
    }
    uStack_98 = (uint16_t)sz_5;
    uStack_96 = (uint32_t)(sz_5 >> 0x10);
    uStack_92 = (uint16_t)(sz_5 >> 0x30);
    uStack_90 = (uint16_t)uVal_14;
    uStack_8e = (uint32_t)(uVal_14 >> 0x10);
    uStack_8a = (uint16_t)(uVal_14 >> 0x30);
    func_0x1806aa960(ptr4_U64_11,pU64_2,sz_5);
    *(uint8_t *)((int64_t)ptr4_U64_11 + sz_5) = 0;
    pU64_12 = local_e8;
    ptr4_U64_11 = &local_a8;
    pU64_13 = local_78;
    func_0x1801ccd70(local_80,ptr4_U64_11,pU64_13,pU64_9,uVal_15,pU64_12,
                  in_stack_fffffffffffffeb8 & 0xffffff00);
    uVal_14 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
    if (0xf < uVal_14) {
      uVal_6 = uVal_14 + 1;
      ptr4_U64_10 = local_a8;
      if (0xfff < uVal_6) {
        ptr4_U64_10 = (uint64_t ****)local_a8[-1];
        if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_10)))
        goto LAB_1802d56b1;
        uVal_6 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_10,uVal_6);
    }
    if (0xf < uStack_60) {
      uVal_14 = uStack_60 + 1;
      lVal_7 = local_78._0_8_;
      if (0xfff < uVal_14) {
        lVal_7 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_7)) goto LAB_1802d56b1;
        uVal_14 = uStack_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_14);
    }
    local_128 = &PTR_LAB_1806c2d00;
    local_120 = local_80;
    local_f0 = &local_128;
    uVal_3 = *(uint32_t *)((int64_t)local_80 + 0x84);
    local_68._4_4_ = _UNK_1806c2c16;
    local_68._0_4_ = _DAT_1806c2c12;
    uStack_60._0_4_ = _UNK_1806c2c1a;
    uStack_60._4_4_ = _UNK_1806c2c1e;
    local_78._8_8_ = _UNK_1806c2c0a;
    local_78._0_8_ = _DAT_1806c2c02;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd444) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0xd444) = 1;
      func_0x18008f8e0(lVal_7 + 0xd421,local_78);
      func_0x180673140(&LAB_1802e3110);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xd421);
    func_0x1801bd780(fnPtr_1);
    local_a8 = (uint64_t ****)0x0;
    uStack_a0 = 0;
    uStack_9a = 0;
    sz_5 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_5) {
      uVal_14 = 0xf;
      if (0xf < sz_5) {
        uVal_6 = sz_5 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_6) {
          uVal_14 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          local_52 = 1;
          ptr4_U64_11 = (uint64_t ****)func_0x180672de0(uVal_14 + 1);
          local_a8 = ptr4_U64_11;
        }
        else {
          local_52 = 1;
          ptr3_U64_8 = (uint64_t ***)func_0x180672de0(uVal_14 + 0x28);
          ptr4_U64_11 = (uint64_t ****)((int64_t)ptr3_U64_8 + 0x27U & 0xffffffffffffffe0);
          ptr4_U64_11[-1] = ptr3_U64_8;
          local_a8 = ptr4_U64_11;
        }
      }
      uStack_98 = (uint16_t)sz_5;
      uStack_96 = (uint32_t)(sz_5 >> 0x10);
      uStack_92 = (uint16_t)(sz_5 >> 0x30);
      uStack_90 = (uint16_t)uVal_14;
      uStack_8e = (uint32_t)(uVal_14 >> 0x10);
      uStack_8a = (uint16_t)(uVal_14 >> 0x30);
      func_0x1806aa960(ptr4_U64_11,fnPtr_1,sz_5);
      *(uint8_t *)((int64_t)ptr4_U64_11 + sz_5) = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xd450) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0xd450) = 1;
        *(uint64_t *)(lVal_7 + 0xd448) = 0x161072d4220b645;
        func_0x180673140(&LAB_1802e3140);
      }
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_7 + 0xd448);
      if (*(char *)(lVal_7 + 0xd44f) == '\x01') {
        *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_7 + 0xd44d) << 8,*(uint32_t *)pU64_2) |
                  (uint64_t)*(byte *)(lVal_7 + 0xd44c) << 0x20) ^ SUB168(_DAT_1806ae210,0);
      }
      local_78 = (uint8_t  [16])0x0;
      sz_5 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_5) {
        uVal_14 = 0xf;
        if (0xf < sz_5) {
          uVal_6 = sz_5 | 0xf;
          uVal_14 = 0x16;
          if (0x16 < uVal_6) {
            uVal_14 = uVal_6;
          }
          if (uVal_6 < 0xfff) {
            local_54 = 1;
            pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
          }
          else {
            local_54 = 1;
            lVal_7 = func_0x180672de0(uVal_14 + 0x28);
            pU64_13 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_13 + -8) = lVal_7;
          }
          local_78._0_8_ = pU64_13;
        }
        pU64_9 = local_80;
        lVal_7 = (int64_t)local_80 + 0x84;
        local_68 = (uint8_t  [8])sz_5;
        uStack_60 = uVal_14;
        func_0x1806aa960(pU64_13,pU64_2,sz_5);
        pU64_13[sz_5] = 0;
        func_0x1801cd2e0(pU64_9,local_78,&local_a8,lVal_7,uVal_3,(uint64_t)pU64_12 & 0xffffffff00000000,
                      0x3fc00000,&local_128,0);
        if (0xf < uStack_60) {
          uVal_14 = uStack_60 + 1;
          lVal_7 = local_78._0_8_;
          if (0xfff < uVal_14) {
            lVal_7 = *(int64_t *)(local_78._0_8_ + -8);
            if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_7)) goto LAB_1802d56b1;
            uVal_14 = uStack_60 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_14);
        }
        uVal_14 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
        if (0xf < uVal_14) {
          uVal_6 = uVal_14 + 1;
          ptr4_U64_11 = local_a8;
          if (0xfff < uVal_6) {
            ptr4_U64_11 = (uint64_t ****)local_a8[-1];
            if (0x1f < (uint64_t)((int64_t)local_a8 + (-8 - (int64_t)ptr4_U64_11))) {
LAB_1802d56b1:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_6 = uVal_14 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_11,uVal_6);
        }
        return local_80;
      }
      goto LAB_1802d56df;
    }
  }
  local_52 = 1;
  func_0x18007ba70();
LAB_1802d56df:
  local_54 = 1;
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_9 = (uint64_t *)(*fnPtr_4)();
  return pU64_9;
}

// Unwind@1802d56f0
void Unwind_1802d56f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1802d5750
void Unwind_1802d5750(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd414) = 0;
  *(uint8_t *)(param_2 + 0x127) = 1;
  return;
}

// Unwind@1802d57b0
void Unwind_1802d57b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1802d57f0
void Unwind_1802d57f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  *(uint8_t *)(param_2 + 0x125) = 0;
  return;
}

// Unwind@1802d5840
void Unwind_1802d5840(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x125);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x127) = uVal_1;
  return;
}

// Unwind@1802d5890
void Unwind_1802d5890(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x127) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1802d58f0
void Unwind_1802d58f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x124) = 0;
  return;
}

// Unwind@1802d5940
void Unwind_1802d5940(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x124);
  func_0x180001e70(param_2 + 0xd0);
  *(uint8_t *)(param_2 + 0x126) = uVal_1;
  return;
}

// Unwind@1802d5990
void Unwind_1802d5990(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x126) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1802d59f0
void Unwind_1802d59f0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xf8));
  return;
}

// Unwind@1802d5a30
void Unwind_1802d5a30(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd3f4) = 0;
  return;
}

// Unwind@1802d5a80
void Unwind_1802d5a80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd444) = 0;
  *(uint8_t *)(param_2 + 0x126) = 1;
  return;
}

// Unwind@1802d5d80
void Unwind_1802d5d80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd478) = 0;
  return;
}

// Unwind@1802d5ef0
void Unwind_1802d5ef0(void)
{
  func_0x180672f60(&DAT_18083fcc8);
  return;
}

// func_0x1802d5f20
uint64_t func_0x1802d5f20(uint64_t param_1)
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
  func_0x180401850(param_1,&local_28,0xdbcfee85);
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

// Unwind@1802d61a0
void Unwind_1802d61a0(void)
{
  func_0x180672f60(&DAT_18083fcf0);
  return;
}

// Unwind@1802d61d0
void Unwind_1802d61d0(void)
{
  func_0x180672f60(&DAT_18083fce0);
  return;
}

// func_0x1802d6200
int64_t func_0x1802d6200(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x2c490af87dcb430) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x34563e488e99afe7) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1802d62a4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x34563e488e99afe7);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1802d62ca;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x34563e488e99afe7);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffbacf91afU) + -0x25;
  }
LAB_1802d62a4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1802d62ca:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1802d62e0
uint64_t * func_0x1802d62e0(uint64_t *param_1,char **param_2,uint64_t param_3)
{
  char *lp;
  BOOL BVar1;
  int iVal_2;
  char **ptr2_Char_3;
  
  ptr2_Char_3 = (char **)func_0x180672de0(0x10);
  lp = *param_2;
  *ptr2_Char_3 = lp;
  BVar1 = IsBadReadPtr(lp,8);
  if (BVar1 == 0) {
    if (*lp != -0x17) {
      iVal_2 = func_0x18063e510(lp,param_3,ptr2_Char_3 + 1);
      if (iVal_2 == 0) goto LAB_1802d63a0;
    }
  }
  func_0x18045fd20(&DAT_180840a48,1);
LAB_1802d63a0:
  *param_1 = ptr2_Char_3;
  return param_1;
}

// Unwind@1802d63c0
void Unwind_1802d63c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x28),0x10);
  return;
}

// Unwind@1802d6490
void Unwind_1802d6490(void)
{
  func_0x180672f60(&DAT_18083fd00);
  return;
}

// Unwind@1802d6580
void Unwind_1802d6580(void)
{
  func_0x180672f60(&DAT_18083fd10);
  return;
}

// func_0x1802d6be0
void func_0x1802d6be0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x3e] = 1;
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
  return;
}

// func_0x1802d6e80
void func_0x1802d6e80(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x43] = 1;
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
  return;
}

// func_0x1802d71a0
void func_0x1802d71a0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x39] = 1;
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
  return;
}

// func_0x1802d74e0
void func_0x1802d74e0(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x32] = 1;
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
  return;
}

// func_0x1802d8620
uint8_t (*func_0x1802d8620(uint8_t (**param_1)[16],char *param_2))[16]
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
  size_t sz_11;
  uint8_t *pU64_12;
  int64_t lVal_13;
  uint8_t (*pArr16_14)[16];
  uint8_t *pU64_15;
  int64_t lVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  uint8_t (*pArr16_19)[16];
  uint8_t (*pArr16_20)[16];
  uint64_t uVal_21;
  uint8_t *pU64_22;
  uint8_t (*pArr16_23)[16];
  uint64_t uVal_24;
  uint8_t (*pArr16_25)[16];
  
  pArr16_14 = param_1[1];
  if (pArr16_14 != param_1[2]) {
    pArr16_14[1] = ZEXT816(0);
    *pArr16_14 = ZEXT816(0);
    sz_11 = strlen(param_2);
    if (-1 < (int64_t)sz_11) {
      pU64_22 = &DAT_0000000f;
      pArr16_25 = pArr16_14;
      if (0xf < sz_11) {
        pU64_12 = (uint8_t *)(sz_11 | 0xf);
        pU64_22 = (uint8_t *)0x16;
        if ((uint8_t *)0x16 < pU64_12) {
          pU64_22 = pU64_12;
        }
        if (pU64_12 < (uint8_t *)0xfff) {
          pArr16_25 = (uint8_t (*)[16])func_0x180672de0(pU64_22 + 1);
        }
        else {
          lVal_13 = func_0x180672de0(pU64_22 + 0x28);
          pArr16_25 = (uint8_t (*)[16])(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pArr16_25[-1] + 8) = lVal_13;
        }
        *(uint8_t (**)[16])*pArr16_14 = pArr16_25;
      }
      *(size_t *)pArr16_14[1] = sz_11;
      *(uint8_t **)(pArr16_14[1] + 8) = pU64_22;
      func_0x1806aa960(pArr16_25,param_2,sz_11);
      (*pArr16_25)[sz_11] = 0;
      pArr16_14 = param_1[1];
      param_1[1] = pArr16_14 + 2;
      return pArr16_14;
    }
    func_0x18007ba70();
    fnPtr_3 = (func_ptr_t )swi(3);
    pArr16_14 = (uint8_t (*)[16])(*fnPtr_3)();
    return pArr16_14;
  }
  pArr16_25 = *param_1;
  uVal_21 = ((int64_t)param_1[1] - (int64_t)pArr16_25 >> 5) + 1;
  uVal_18 = (int64_t)param_1[2] - (int64_t)pArr16_25 >> 5;
  uVal_24 = (uVal_18 >> 1) + uVal_18;
  if (uVal_24 <= uVal_21) {
    uVal_24 = uVal_21;
  }
  if (0x7ffffffffffffff - (uVal_18 >> 1) < uVal_18) {
    uVal_24 = 0x7ffffffffffffff;
  }
  if (uVal_24 >> 0x3b != 0) {
LAB_1802d8ac5:
    func_0x18007ba90();
LAB_1802d8acb:
    func_0x18007ba70();
    fnPtr_3 = (func_ptr_t )swi(3);
    pArr16_14 = (uint8_t (*)[16])(*fnPtr_3)();
    return pArr16_14;
  }
  if (uVal_24 == 0) {
    pArr16_19 = (uint8_t (*)[16])0x0;
  }
  else if (uVal_24 < 0x80) {
    pArr16_19 = (uint8_t (*)[16])func_0x180672de0();
  }
  else {
    if (uVal_24 == 0x7ffffffffffffff) goto LAB_1802d8ac5;
    lVal_13 = func_0x180672de0(uVal_24 * 0x20 + 0x27);
    pArr16_19 = (uint8_t (*)[16])(lVal_13 + 0x27U & 0xffffffffffffffe0);
    *(int64_t *)(pArr16_19[-1] + 8) = lVal_13;
  }
  lVal_13 = (int64_t)pArr16_14 - (int64_t)pArr16_25;
  *(uint8_t (*)[16])((int64_t)pArr16_19 + lVal_13 + 0x10) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pArr16_19 + lVal_13) = ZEXT816(0);
  pU64_22 = (uint8_t *)strlen(param_2);
  if ((int64_t)pU64_22 < 0) goto LAB_1802d8acb;
  pArr16_20 = (uint8_t (*)[16])(lVal_13 + (int64_t)pArr16_19);
  pU64_12 = &DAT_0000000f;
  pArr16_25 = pArr16_20;
  if (&DAT_0000000f < pU64_22) {
    pU64_15 = (uint8_t *)((uint64_t)pU64_22 | 0xf);
    pU64_12 = (uint8_t *)0x16;
    if ((uint8_t *)0x16 < pU64_15) {
      pU64_12 = pU64_15;
    }
    if (pU64_15 < (uint8_t *)0xfff) {
      pArr16_25 = (uint8_t (*)[16])func_0x180672de0(pU64_12 + 1);
    }
    else {
      lVal_16 = func_0x180672de0(pU64_12 + 0x28);
      pArr16_25 = (uint8_t (*)[16])(lVal_16 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pArr16_25[-1] + 8) = lVal_16;
    }
    *(uint8_t (**)[16])*pArr16_20 = pArr16_25;
  }
  *(uint8_t **)pArr16_20[1] = pU64_22;
  *(uint8_t **)(pArr16_20[1] + 8) = pU64_12;
  func_0x1806aa960(pArr16_25,param_2,pU64_22);
  (*pArr16_25)[(int64_t)pU64_22] = 0;
  pArr16_23 = *param_1;
  pArr16_25 = param_1[1];
  if (pArr16_14 == pArr16_25) {
    if (pArr16_23 == pArr16_14) goto LAB_1802d89c8;
    lVal_13 = 0;
    do {
      *(uint8_t (*)[16])(pArr16_19[1] + lVal_13) = ZEXT816(0);
      *(uint8_t (*)[16])(*pArr16_19 + lVal_13) = ZEXT816(0);
      pU64_1 = (uint32_t *)(*pArr16_23 + lVal_13);
      uVal_4 = *pU64_1;
      uVal_5 = pU64_1[1];
      uVal_6 = pU64_1[2];
      uVal_7 = pU64_1[3];
      pU64_1 = (uint32_t *)(pArr16_23[1] + lVal_13);
      uVal_8 = pU64_1[1];
      uVal_9 = pU64_1[2];
      uVal_10 = pU64_1[3];
      pU64_2 = (uint32_t *)(pArr16_19[1] + lVal_13);
      *pU64_2 = *pU64_1;
      pU64_2[1] = uVal_8;
      pU64_2[2] = uVal_9;
      pU64_2[3] = uVal_10;
      pU64_1 = (uint32_t *)(*pArr16_19 + lVal_13);
      *pU64_1 = uVal_4;
      pU64_1[1] = uVal_5;
      pU64_1[2] = uVal_6;
      pU64_1[3] = uVal_7;
      *(uint64_t *)(pArr16_23[1] + lVal_13) = 0;
      *(uint64_t *)(pArr16_23[1] + lVal_13 + 8) = 0xf;
      (*pArr16_23)[lVal_13] = 0;
      pArr16_25 = (uint8_t (*)[16])(pArr16_23[2] + lVal_13);
      lVal_13 = lVal_13 + 0x20;
    } while (pArr16_25 != pArr16_14);
  }
  else {
    if (pArr16_23 != pArr16_14) {
      lVal_16 = 0;
      do {
        *(uint8_t (*)[16])(pArr16_19[1] + lVal_16) = ZEXT816(0);
        *(uint8_t (*)[16])(*pArr16_19 + lVal_16) = ZEXT816(0);
        pU64_1 = (uint32_t *)(*pArr16_23 + lVal_16);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(pArr16_23[1] + lVal_16);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_2 = (uint32_t *)(pArr16_19[1] + lVal_16);
        *pU64_2 = *pU64_1;
        pU64_2[1] = uVal_8;
        pU64_2[2] = uVal_9;
        pU64_2[3] = uVal_10;
        pU64_1 = (uint32_t *)(*pArr16_19 + lVal_16);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)(pArr16_23[1] + lVal_16) = 0;
        *(uint64_t *)(pArr16_23[1] + lVal_16 + 8) = 0xf;
        (*pArr16_23)[lVal_16] = 0;
        pArr16_25 = (uint8_t (*)[16])(pArr16_23[2] + lVal_16);
        lVal_16 = lVal_16 + 0x20;
      } while (pArr16_25 != pArr16_14);
      pArr16_25 = param_1[1];
    }
    if (pArr16_14 != pArr16_25) {
      lVal_16 = 0;
      do {
        *(uint8_t (*)[16])((int64_t)pArr16_19 + lVal_16 + lVal_13 + 0x30) = ZEXT816(0);
        *(uint8_t (*)[16])((int64_t)pArr16_19 + lVal_16 + lVal_13 + 0x20) = ZEXT816(0);
        pU64_1 = (uint32_t *)(*pArr16_14 + lVal_16);
        uVal_4 = *pU64_1;
        uVal_5 = pU64_1[1];
        uVal_6 = pU64_1[2];
        uVal_7 = pU64_1[3];
        pU64_1 = (uint32_t *)(pArr16_14[1] + lVal_16);
        uVal_8 = pU64_1[1];
        uVal_9 = pU64_1[2];
        uVal_10 = pU64_1[3];
        pU64_2 = (uint32_t *)((int64_t)pArr16_19 + lVal_16 + lVal_13 + 0x30);
        *pU64_2 = *pU64_1;
        pU64_2[1] = uVal_8;
        pU64_2[2] = uVal_9;
        pU64_2[3] = uVal_10;
        pU64_1 = (uint32_t *)((int64_t)pArr16_19 + lVal_16 + lVal_13 + 0x20);
        *pU64_1 = uVal_4;
        pU64_1[1] = uVal_5;
        pU64_1[2] = uVal_6;
        pU64_1[3] = uVal_7;
        *(uint64_t *)(pArr16_14[1] + lVal_16) = 0;
        *(uint64_t *)(pArr16_14[1] + lVal_16 + 8) = 0xf;
        (*pArr16_14)[lVal_16] = 0;
        pArr16_23 = (uint8_t (*)[16])(pArr16_14[2] + lVal_16);
        lVal_16 = lVal_16 + 0x20;
      } while (pArr16_23 != pArr16_25);
    }
  }
  pArr16_23 = *param_1;
LAB_1802d89c8:
  if (pArr16_23 != (uint8_t (*)[16])0x0) {
    pArr16_14 = param_1[1];
    if (pArr16_23 == pArr16_14) {
      uVal_18 = (int64_t)param_1[2] - (int64_t)pArr16_23;
    }
    else {
      do {
        uVal_18 = *(uint64_t *)(pArr16_23[1] + 8);
        if (0xf < uVal_18) {
          lVal_13 = *(int64_t *)*pArr16_23;
          uVal_17 = uVal_18 + 1;
          lVal_16 = lVal_13;
          if (0xfff < uVal_17) {
            lVal_16 = *(int64_t *)(lVal_13 + -8);
            if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_16)) goto LAB_1802d8ac3;
            uVal_17 = uVal_18 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_16,uVal_17);
        }
        *(uint64_t *)pArr16_23[1] = 0;
        *(uint64_t *)(pArr16_23[1] + 8) = 0xf;
        (*pArr16_23)[0] = 0;
        pArr16_23 = pArr16_23 + 2;
      } while (pArr16_23 != pArr16_14);
      pArr16_23 = *param_1;
      uVal_18 = (int64_t)param_1[2] - (int64_t)pArr16_23;
    }
    if (0xfff < uVal_18) {
      if (0x1f < (uint64_t)
                 ((int64_t)pArr16_23 + (-8 - (int64_t)*(uint8_t (**)[16])(pArr16_23[-1] + 8)))) {
LAB_1802d8ac3:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_18 = uVal_18 + 0x27;
      pArr16_23 = *(uint8_t (**)[16])(pArr16_23[-1] + 8);
    }
    thunk_FUN_180695dd0(pArr16_23,uVal_18);
  }
  *param_1 = pArr16_19;
  param_1[1] = pArr16_19 + uVal_21 * 2;
  param_1[2] = pArr16_19 + uVal_24 * 2;
  return pArr16_20;
}

// Unwind@1802d8ae0
void Unwind_1802d8ae0(uint64_t param_1,int64_t param_2)
{
  func_0x180084690(param_2 + 0x28);
  return;
}

// func_0x1802d9b30
void func_0x1802d9b30(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x3a] = 1;
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
  return;
}
