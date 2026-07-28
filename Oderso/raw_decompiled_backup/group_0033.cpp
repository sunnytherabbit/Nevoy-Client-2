#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1802f2240
void Unwind_1802f2240(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1802f2280
void Unwind_1802f2280(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0x115) = 0;
  return;
}

// Unwind@1802f22d0
void Unwind_1802f22d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x115);
  func_0x180001e70(param_2 + 0xf0);
  *(uint8_t *)(param_2 + 0x114) = uVal_1;
  return;
}

// Unwind@1802f2320
void Unwind_1802f2320(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x114) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x70), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x38));
    *(uint64_t *)(param_2 + 0x70) = 0;
  }
  return;
}

// Unwind@1802f2380
void Unwind_1802f2380(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0xb8));
  func_0x180154cc0(*(uint64_t *)(param_2 + 0xe8));
  return;
}

// Unwind@1802f30d0
void Unwind_1802f30d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1802f3110
void Unwind_1802f3110(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  *(uint8_t *)(param_2 + 0xdf) = 0;
  return;
}

// Unwind@1802f3150
void Unwind_1802f3150(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0xdf) == '\x01') {
    func_0x180001e70(param_2 + 0x60);
  }
  return;
}

// Unwind@1802f3190
void Unwind_1802f3190(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1802f31d0
void Unwind_1802f31d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1802f3210
void Unwind_1802f3210(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xa8));
  return;
}

// Unwind@1802f3250
void Unwind_1802f3250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// func_0x1802f3290
uint64_t func_0x1802f3290(uint64_t param_1,uint64_t *param_2,uint32_t param_3,int64_t **param_4, uint32_t param_5)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  uint32_t local_70 [4];
  int64_t **local_60;
  int64_t *local_58;
  uint32_t local_50;
  uint64_t local_40;
  uint32_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  int64_t **local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_58 = param_4[2];
  local_60 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_60 = (int64_t **)*param_4;
  }
  local_50 = param_5;
  local_40 = 0x1d1;
  local_38 = local_70;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
  local_70[0] = param_3;
  local_20 = param_4;
  func_0x18063ff10(param_1,&local_30,&local_40);
  pLong_1 = local_20[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *local_20;
    pLong_4 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_3 = pLong_2;
    if ((int64_t *)0xfff < pLong_4) {
      pLong_3 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_3))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_4 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_3,pLong_4);
  }
  return param_1;
}

// Unwind@1802f3360
void Unwind_1802f3360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x78));
  return;
}

// func_0x1802f3390
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802f3390(uint64_t *param_1)
{
  uint64_t *pU64_1;
  byte *pU8_2;
  uint *pU64_3;
  uint32_t uVal_4;
  func_ptr_t fnPtr_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint64_t *pU64_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t *pU64_13;
  uint8_t *pU64_14;
  uint8_t *pU64_15;
  uint8_t *pU64_16;
  uint8_t *pU64_17;
  uint64_t uVal_18;
  uint8_t uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint32_t uVal_23;
  uint in_stack_fffffffffffffe28;
  uint uVal_24;
  uint8_t **local_1b8;
  uint64_t *local_1b0;
  uint8_t ***local_180;
  uint8_t **local_178;
  uint64_t *local_170;
  uint8_t ***local_140;
  uint8_t local_138 [56];
  uint64_t local_100;
  uint8_t local_f8 [56];
  uint64_t local_c0;
  uint8_t local_b8 [16];
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint8_t local_88;
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint64_t *local_58;
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
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xd964) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0xd964) = 1;
    *(uint64_t *)(lVal_12 + 0xd958) = 0x4871f2b16094b083;
    *(uint32_t *)(lVal_12 + 0xd960) = 0x1f98a9f;
    func_0x180673140(&LAB_180364020);
  }
  lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_12 + 0xd958);
  if (*(char *)(lVal_12 + 0xd963) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xb5181c509f9d9cf;
    *(uint *)(lVal_12 + 0xd960) =
         (*(uint *)(lVal_12 + 0xd960) & 0xffff | (uint)*(byte *)(lVal_12 + 0xd962) << 0x10) ^
         SUB164(_DAT_1806b68f0,0);
  }
  local_b8 = (uint8_t  [16])0x0;
  sz_10 = strlen((char *)pU64_1);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_1802f44c7:
    local_4c = 1;
    func_0x18007ba70();
LAB_1802f44d4:
    local_4b = 1;
    func_0x18007ba70();
LAB_1802f44e1:
    local_49 = 1;
    func_0x18007ba70();
LAB_1802f44ee:
    local_4d = 1;
    func_0x18007ba70();
LAB_1802f44fb:
    local_4f = 1;
    func_0x18007ba70();
LAB_1802f4508:
    local_4e = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_15 = local_b8;
      uVal_18 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_11) {
        uVal_18 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_b8._0_8_ = pU64_15;
    }
    local_a8 = (uint8_t  [8])sz_10;
    uStack_a0 = uVal_18;
    func_0x1806aa960(pU64_15,pU64_1,sz_10);
    pU64_15[sz_10] = 0;
    pU64_15 = local_b8;
    func_0x1801c2ba0(local_58,0,3,pU64_15);
    if (0xf < uStack_a0) {
      uVal_18 = uStack_a0 + 1;
      lVal_12 = local_b8._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_1802f44c0;
        uVal_18 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    *local_58 = &PTR_LAB_1806c4160;
    pU64_13 = local_58 + 0x10;
    *(uint16_t *)(local_58 + 0x10) = 0x101;
    *(uint64_t *)((int64_t)local_58 + 0x84) = 0x1200000012;
    *(uint8_t (*)[16])(local_58 + 0x12) = (uint8_t  [16])0x0;
    local_100 = 0;
    if (DAT_18083fd98 == (uint64_t *)0x0) {
      uVal_19 = 1;
    }
    else {
      local_100 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_138);
      uVal_19 = *(uint8_t *)pU64_13;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd968) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xd968) = 1;
      *(uint16_t *)(lVal_12 + 0xd965) = 0x175;
      func_0x180673140(&LAB_180364050);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0xd965);
    if (*(char *)(lVal_12 + 0xd966) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x75;
      *(uint8_t *)(lVal_12 + 0xd966) = 0;
    }
    _local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802f44c7;
    uVal_18 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_11) {
        uVal_18 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4c = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4c = 1;
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_b8._0_8_ = pU64_15;
    }
    uStack_a0 = uVal_18;
    local_a8 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_15,pU8_2,sz_10);
    pU64_15[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd97c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xd97c) = 1;
      *(uint64_t *)(lVal_12 + 0xd970) = 0x22fd251dc09c7039;
      *(uint32_t *)(lVal_12 + 0xd978) = 0x1f16d13;
      func_0x180673140(&LAB_180364070);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_12 + 0xd970);
    if (*(char *)(lVal_12 + 0xd97b) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47910569a9f11975;
      *(uint *)(lVal_12 + 0xd978) =
           (*(uint *)(lVal_12 + 0xd978) & 0xffff | (uint)*(byte *)(lVal_12 + 0xd97a) << 0x10) ^
           SUB164(_DAT_1806b6630,0);
    }
    local_68 = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802f44d4;
    if (sz_10 < 0x10) {
      pU64_15 = local_78;
      uVal_18 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_11) {
        uVal_18 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4b = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4b = 1;
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_78._0_8_ = pU64_15;
    }
    local_68._0_8_ = sz_10;
    local_68._8_8_ = uVal_18;
    func_0x1806aa960(pU64_15,pU64_1,sz_10);
    pU64_15[sz_10] = 0;
    pU64_15 = local_138;
    pU64_14 = local_78;
    pU64_16 = local_b8;
    func_0x1801ccd70(local_58,pU64_14,pU64_16,pU64_13,uVal_19,pU64_15,
                  in_stack_fffffffffffffe28 & 0xffffff00);
    uVal_23 = (uint32_t)((uint64_t)pU64_15 >> 0x20);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_18 = local_68._8_8_ + 1;
      lVal_12 = local_78._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_12)) goto LAB_1802f44c0;
        uVal_18 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    if (0xf < uStack_a0) {
      uVal_18 = uStack_a0 + 1;
      lVal_12 = local_b8._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_1802f44c0;
        uVal_18 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    local_1b8 = &PTR_LAB_1806bad00;
    local_1b0 = local_58;
    local_180 = &local_1b8;
    uVal_4 = *(uint32_t *)((int64_t)local_58 + 0x84);
    local_98 = _DAT_1806c5e34;
    uStack_94 = _UNK_1806c5e38;
    uStack_90 = _UNK_1806c5e3c;
    uStack_8c = _UNK_1806c5e40;
    local_a8._4_4_ = _UNK_1806c5e28;
    local_a8._0_4_ = _DAT_1806c5e24;
    uStack_a0._0_4_ = _UNK_1806c5e2c;
    uStack_a0._4_4_ = _UNK_1806c5e30;
    local_b8._8_8_ = _UNK_1806c5e1c;
    local_b8._0_8_ = _DAT_1806c5e14;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd9b0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xd9b0) = 1;
      func_0x1801b4680(lVal_12 + 0xd97d,local_b8);
      func_0x180673140(&LAB_1803640a0);
    }
    uVal_8 = _UNK_1806b2cac;
    uVal_7 = _UNK_1806b2ca8;
    uVal_6 = _UNK_1806b2ca4;
    uVal_24 = _DAT_1806b2ca0;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xd97d);
    if (*(char *)(lVal_12 + 0xd9ad) == '\x01') {
      uVal_20 = *(uint *)(lVal_12 + 0xd981) ^ _UNK_1806b2ca4;
      uVal_21 = *(uint *)(lVal_12 + 0xd985) ^ _UNK_1806b2ca8;
      uVal_22 = *(uint *)(lVal_12 + 0xd989) ^ _UNK_1806b2cac;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_12 + 0xd981) = uVal_20;
      *(uint *)(lVal_12 + 0xd985) = uVal_21;
      *(uint *)(lVal_12 + 0xd989) = uVal_22;
      *(uint *)(lVal_12 + 0xd98d) = *(uint *)(lVal_12 + 0xd98d) ^ uVal_24;
      *(uint *)(lVal_12 + 0xd991) = *(uint *)(lVal_12 + 0xd991) ^ uVal_6;
      *(uint *)(lVal_12 + 0xd995) = *(uint *)(lVal_12 + 0xd995) ^ uVal_7;
      *(uint *)(lVal_12 + 0xd999) = *(uint *)(lVal_12 + 0xd999) ^ uVal_8;
      *(uint *)(lVal_12 + 0xd99d) = *(uint *)(lVal_12 + 0xd99d) ^ uVal_24;
      *(uint *)(lVal_12 + 0xd9a1) = *(uint *)(lVal_12 + 0xd9a1) ^ uVal_6;
      *(uint *)(lVal_12 + 0xd9a5) = *(uint *)(lVal_12 + 0xd9a5) ^ uVal_7;
      *(uint *)(lVal_12 + 0xd9a9) = *(uint *)(lVal_12 + 0xd9a9) ^ uVal_8;
      *(uint8_t *)(lVal_12 + 0xd9ad) = 0;
    }
    local_68 = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1802f44e1;
    uVal_18 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_11) {
        uVal_18 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_49 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_49 = 1;
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_78._0_8_ = pU64_14;
    }
    local_68._8_8_ = uVal_18;
    local_68._0_8_ = sz_10;
    func_0x1806aa960(pU64_14,pU64_3,sz_10);
    pU64_14[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd9c4) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xd9c4) = 1;
      *(uint64_t *)(lVal_12 + 0xd9b8) = 0x8cd993c8a6112037;
      *(uint32_t *)(lVal_12 + 0xd9c0) = 0x17d3115;
      func_0x180673140(&LAB_1803640d0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_12 + 0xd9b8);
    if (*(char *)(lVal_12 + 0xd9c3) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xe9b5b3b1c77d4573;
      *(uint *)(lVal_12 + 0xd9c0) =
           (*(uint *)(lVal_12 + 0xd9c0) & 0xffff | (uint)*(byte *)(lVal_12 + 0xd9c2) << 0x10) ^
           SUB164(_DAT_1806b69b0,0);
    }
    _local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802f44ee;
    uVal_18 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_11) {
        uVal_18 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4d = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4d = 1;
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_b8._0_8_ = pU64_16;
    }
    pU64_13 = local_58;
    lVal_12 = (int64_t)local_58 + 0x84;
    local_a8 = (uint8_t  [8])sz_10;
    uStack_a0 = uVal_18;
    func_0x1806aa960(pU64_16,pU64_1,sz_10);
    pU64_16[sz_10] = 0;
    uVal_24 = 1000;
    pU64_15 = local_b8;
    pU64_14 = local_78;
    func_0x1801ccff0(pU64_13,pU64_15,pU64_14,lVal_12,uVal_4,CONCAT44(uVal_23,1),1000,&local_1b8,0);
    if (0xf < uStack_a0) {
      uVal_18 = uStack_a0 + 1;
      lVal_12 = local_b8._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_1802f44c0;
        uVal_18 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_18 = local_68._8_8_ + 1;
      lVal_12 = local_78._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_12)) goto LAB_1802f44c0;
        uVal_18 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    local_c0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_c0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_f8);
    }
    pU64_16 = (uint8_t *)((int64_t)local_58 + 0x81);
    uVal_19 = *pU64_16;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd9c8) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xd9c8) = 1;
      *(uint16_t *)(lVal_12 + 0xd9c5) = 0x1dd;
      func_0x180673140(&LAB_180364100);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_12 + 0xd9c5);
    if (*(char *)(lVal_12 + 0xd9c6) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xdd;
      *(uint8_t *)(lVal_12 + 0xd9c6) = 0;
    }
    _local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU8_2);
    if ((int64_t)sz_10 < 0) goto LAB_1802f44fb;
    uVal_18 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_11) {
        uVal_18 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4f = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4f = 1;
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_b8._0_8_ = pU64_15;
    }
    uStack_a0 = uVal_18;
    local_a8 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_15,pU8_2,sz_10);
    pU64_15[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xd9e0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xd9e0) = 1;
      *(uint8_t *)(lVal_12 + 0xd9dc) = 1;
      *(uint64_t *)(lVal_12 + 0xd9d0) = 0x1c7509bf8c04b891;
      *(uint32_t *)(lVal_12 + 0xd9d8) = 0xe51db9ba;
      func_0x180673140(&LAB_180364120);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_12 + 0xd9d0);
    if (*(char *)(lVal_12 + 0xd9dc) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x750729cbe569d1dd;
      *(uint *)(lVal_12 + 0xd9d8) = *(uint *)(lVal_12 + 0xd9d8) ^ 0xe569d1dd;
      *(uint8_t *)(lVal_12 + 0xd9dc) = 0;
    }
    local_68 = (uint8_t  [16])0x0;
    local_78 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_1802f4508;
    uVal_18 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_11) {
        uVal_18 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4e = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        local_4e = 1;
        lVal_12 = func_0x180672de0(uVal_18 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_78._0_8_ = pU64_14;
    }
    local_68._8_8_ = uVal_18;
    local_68._0_8_ = sz_10;
    func_0x1806aa960(pU64_14,pU64_1,sz_10);
    pU64_14[sz_10] = 0;
    pU64_15 = local_f8;
    pU64_14 = local_78;
    pU64_17 = local_b8;
    func_0x1801ccd70(local_58,pU64_14,pU64_17,pU64_16,uVal_19,pU64_15,uVal_24 & 0xffffff00);
    uVal_23 = (uint32_t)((uint64_t)pU64_15 >> 0x20);
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_18 = local_68._8_8_ + 1;
      lVal_12 = local_78._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_12)) goto LAB_1802f44c0;
        uVal_18 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    if (0xf < uStack_a0) {
      uVal_18 = uStack_a0 + 1;
      lVal_12 = local_b8._0_8_;
      if (0xfff < uVal_18) {
        lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_1802f44c0;
        uVal_18 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_18);
    }
    local_178 = &PTR_LAB_1806bae50;
    local_170 = local_58;
    local_140 = &local_178;
    uVal_4 = *(uint32_t *)(local_58 + 0x11);
    local_98 = _DAT_1806c5e64;
    uStack_94 = _UNK_1806c5e68;
    uStack_90 = _UNK_1806c5e6c;
    uStack_8c = _UNK_1806c5e70;
    local_a8._4_4_ = _UNK_1806c5e58;
    local_a8._0_4_ = _DAT_1806c5e54;
    uStack_a0._0_4_ = _UNK_1806c5e5c;
    uStack_a0._4_4_ = _UNK_1806c5e60;
    local_b8._8_8_ = _UNK_1806c5e4c;
    local_b8._0_8_ = _DAT_1806c5e44;
    local_88 = 0xd5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xda14) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xda14) = 1;
      func_0x1802148a0(lVal_12 + 0xd9e1,local_b8);
      func_0x180673140(&LAB_180364150);
    }
    uVal_8 = _UNK_1806b2d1c;
    uVal_7 = _UNK_1806b2d18;
    uVal_6 = _UNK_1806b2d14;
    uVal_24 = _DAT_1806b2d10;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_12 + 0xd9e1);
    if (*(char *)(lVal_12 + 0xda12) == '\x01') {
      uVal_20 = *(uint *)(lVal_12 + 0xd9e5) ^ _UNK_1806b2d14;
      uVal_21 = *(uint *)(lVal_12 + 0xd9e9) ^ _UNK_1806b2d18;
      uVal_22 = *(uint *)(lVal_12 + 0xd9ed) ^ _UNK_1806b2d1c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2d10;
      *(uint *)(lVal_12 + 0xd9e5) = uVal_20;
      *(uint *)(lVal_12 + 0xd9e9) = uVal_21;
      *(uint *)(lVal_12 + 0xd9ed) = uVal_22;
      *(uint *)(lVal_12 + 0xd9f1) = *(uint *)(lVal_12 + 0xd9f1) ^ uVal_24;
      *(uint *)(lVal_12 + 0xd9f5) = *(uint *)(lVal_12 + 0xd9f5) ^ uVal_6;
      *(uint *)(lVal_12 + 0xd9f9) = *(uint *)(lVal_12 + 0xd9f9) ^ uVal_7;
      *(uint *)(lVal_12 + 0xd9fd) = *(uint *)(lVal_12 + 0xd9fd) ^ uVal_8;
      *(uint *)(lVal_12 + 0xda01) = *(uint *)(lVal_12 + 0xda01) ^ uVal_24;
      *(uint *)(lVal_12 + 0xda05) = *(uint *)(lVal_12 + 0xda05) ^ uVal_6;
      *(uint *)(lVal_12 + 0xda09) = *(uint *)(lVal_12 + 0xda09) ^ uVal_7;
      *(uint *)(lVal_12 + 0xda0d) = *(uint *)(lVal_12 + 0xda0d) ^ uVal_8;
      *(byte *)(lVal_12 + 0xda11) = *(byte *)(lVal_12 + 0xda11) ^ 0xd5;
      *(uint8_t *)(lVal_12 + 0xda12) = 0;
    }
    local_78 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_3);
    if (-1 < (int64_t)sz_10) {
      uVal_18 = 0xf;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_11) {
          uVal_18 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          local_4a = 1;
          pU64_14 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
        }
        else {
          local_4a = 1;
          lVal_12 = func_0x180672de0(uVal_18 + 0x28);
          pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_14 + -8) = lVal_12;
        }
        local_78._0_8_ = pU64_14;
      }
      local_68._8_8_ = uVal_18;
      local_68._0_8_ = sz_10;
      func_0x1806aa960(pU64_14,pU64_3,sz_10);
      pU64_14[sz_10] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xda28) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0xda28) = 1;
        *(uint8_t *)(lVal_12 + 0xda24) = 1;
        *(uint64_t *)(lVal_12 + 0xda18) = 0xf853bb6696999491;
        *(uint32_t *)(lVal_12 + 0xda20) = 0xf78199b2;
        func_0x180673140(&LAB_180364190);
      }
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_12 + 0xda18);
      if (*(char *)(lVal_12 + 0xda24) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x91219b1ff7f5f1d5;
        *(uint *)(lVal_12 + 0xda20) = *(uint *)(lVal_12 + 0xda20) ^ 0xf7f5f1d5;
        *(uint8_t *)(lVal_12 + 0xda24) = 0;
      }
      local_b8 = (uint8_t  [16])0x0;
      sz_10 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_10) {
        uVal_18 = 0xf;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_18 = 0x16;
          if (0x16 < uVal_11) {
            uVal_18 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            local_50 = 1;
            pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
          }
          else {
            local_50 = 1;
            lVal_12 = func_0x180672de0(uVal_18 + 0x28);
            pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_17 + -8) = lVal_12;
          }
          local_b8._0_8_ = pU64_17;
        }
        pU64_9 = local_58;
        pU64_13 = local_58 + 0x11;
        local_a8 = (uint8_t  [8])sz_10;
        uStack_a0 = uVal_18;
        func_0x1806aa960(pU64_17,pU64_1,sz_10);
        pU64_17[sz_10] = 0;
        func_0x1801ccff0(pU64_9,local_b8,local_78,pU64_13,uVal_4,CONCAT44(uVal_23,1),1000,&local_178,0);
        if (0xf < uStack_a0) {
          uVal_18 = uStack_a0 + 1;
          lVal_12 = local_b8._0_8_;
          if (0xfff < uVal_18) {
            lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_1802f44c0;
            uVal_18 = uStack_a0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_18);
        }
        if (0xf < (uint64_t)local_68._8_8_) {
          uVal_18 = local_68._8_8_ + 1;
          lVal_12 = local_78._0_8_;
          if (0xfff < uVal_18) {
            lVal_12 = *(int64_t *)(local_78._0_8_ + -8);
            if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_12)) {
LAB_1802f44c0:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_18 = local_68._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_18);
        }
        return local_58;
      }
      goto LAB_1802f4522;
    }
  }
  local_4a = 1;
  func_0x18007ba70();
LAB_1802f4522:
  local_50 = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_13 = (uint64_t *)(*fnPtr_5)();
  return pU64_13;
}

// Unwind@1802f4530
void Unwind_1802f4530(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x108);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1802f4590
void Unwind_1802f4590(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x148);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1802f45f0
void Unwind_1802f45f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1802f4630
void Unwind_1802f4630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1bd) = 0;
  return;
}

// Unwind@1802f4670
void Unwind_1802f4670(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1bd);
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1bc) = uVal_1;
  return;
}

// Unwind@1802f46c0
void Unwind_1802f46c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1bc) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1802f4720
void Unwind_1802f4720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1bb) = 0;
  return;
}

// Unwind@1802f4760
void Unwind_1802f4760(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1bb);
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1bf) = uVal_1;
  return;
}

// Unwind@1802f47b0
void Unwind_1802f47b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1bf) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1802f4810
void Unwind_1802f4810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1ba) = 0;
  return;
}

// Unwind@1802f4850
void Unwind_1802f4850(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1ba);
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1b9) = uVal_1;
  return;
}

// Unwind@1802f48a0
void Unwind_1802f48a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1b9) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1802f4900
void Unwind_1802f4900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1b8) = 0;
  return;
}

// Unwind@1802f4940
void Unwind_1802f4940(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1b8);
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x1be) = uVal_1;
  return;
}

// Unwind@1802f4990
void Unwind_1802f4990(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1be) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1802f49f0
void Unwind_1802f49f0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x1b0));
  return;
}

// Unwind@1802f4a30
void Unwind_1802f4a30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd9b0) = 0;
  *(uint8_t *)(param_2 + 0x1bf) = 1;
  return;
}

// Unwind@1802f4a80
void Unwind_1802f4a80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xda14) = 0;
  *(uint8_t *)(param_2 + 0x1be) = 1;
  return;
}

// Unwind@1802f4d90
void Unwind_1802f4d90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xda54) = 0;
  return;
}

// func_0x1802f4de0
uint64_t func_0x1802f4de0(int64_t param_1)
{
  char ch_1;
  char *fnPtr_2;
  uint64_t uVal_3;
  
  fnPtr_2 = (char *)func_0x18011b6e0(DAT_180840a50);
  if (*fnPtr_2 == '\x01') {
    if (*(char *)(param_1 + 0x40) != '\x01') {
      return 0;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      return 0;
    }
    ch_1 = func_0x180057f30(*(uint64_t *)(param_1 + 0x90),(int64_t)*(int *)(param_1 + 0x84));
    if (ch_1 == '\0') {
      return 1;
    }
    uVal_3 = func_0x1800576d0();
    *(uint64_t *)(param_1 + 0x90) = uVal_3;
  }
  return 0;
}

// func_0x1802f4e40
uint64_t func_0x1802f4e40(int64_t param_1)
{
  char ch_1;
  char *fnPtr_2;
  uint64_t uVal_3;
  
  fnPtr_2 = (char *)func_0x18011b6e0(DAT_180840a50);
  if (*fnPtr_2 == '\x01') {
    if (*(char *)(param_1 + 0x40) != '\x01') {
      return 0;
    }
    if (*(char *)(param_1 + 0x81) == '\0') {
      return 0;
    }
    ch_1 = func_0x180057f30(*(uint64_t *)(param_1 + 0x98),(int64_t)*(int *)(param_1 + 0x88));
    if (ch_1 == '\0') {
      return 1;
    }
    uVal_3 = func_0x1800576d0();
    *(uint64_t *)(param_1 + 0x98) = uVal_3;
  }
  return 0;
}

// func_0x1802f4ea0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802f4ea0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint8_t *pU64_2;
  uint8_t (*pArr16_3)[16];
  uint64_t *pU64_4;
  uint *_Str;
  func_ptr_t fnPtr_5;
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  int64_t lVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  size_t sz_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  uint64_t *pU64_21;
  uint32_t *pU64_22;
  uint8_t *pU64_23;
  uint8_t uVal_24;
  uint64_t uVal_25;
  uint8_t **local_168;
  uint64_t *local_160;
  uint8_t ***local_130;
  uint8_t **local_128;
  uint64_t *local_120;
  uint8_t ***local_f0;
  uint8_t local_e8 [56];
  uint64_t local_b0;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  undefined7 uStack_98;
  uint8_t uStack_91;
  uint64_t uStack_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint16_t local_78;
  uint16_t uStack_76;
  uint32_t uStack_74;
  uint16_t uStack_70;
  uint16_t uStack_6e;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t uStack_68;
  uint32_t uStack_66;
  uint32_t uStack_62;
  uint64_t *local_58;
  uint8_t local_4e;
  uint8_t local_4d;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88._4_4_ = _UNK_1806c5e8e;
  local_88._0_4_ = _DAT_1806c5e8a;
  uStack_80._0_4_ = _UNK_1806c5e92;
  uStack_80._4_4_ = _UNK_1806c5e96;
  local_78 = 0x5501;
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xda68) == '\0') {
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_20 + 0xda68) = 1;
    func_0x18007c170(lVal_20 + 0xda55,local_88);
    func_0x180673140(&LAB_180364220);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xda55);
  func_0x18036eb70(fnPtr_1);
  local_78 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  _local_88 = ZEXT816(0);
  sz_18 = strlen(fnPtr_1);
  if ((int64_t)sz_18 < 0) {
    func_0x18007ba70();
LAB_1802f5bf2:
    local_49 = 1;
    func_0x18007ba70();
LAB_1802f5bff:
    local_4c = 1;
    func_0x18007ba70();
LAB_1802f5c0c:
    local_4a = 1;
    func_0x18007ba70();
LAB_1802f5c19:
    local_4d = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_18 < 0x10) {
      pU64_23 = local_88;
      uVal_25 = 0xf;
    }
    else {
      uVal_19 = sz_18 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_19) {
        uVal_25 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_20 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_20;
      }
      local_88 = (uint8_t  [8])pU64_23;
    }
    local_78 = (uint16_t)sz_18;
    uStack_76 = (uint16_t)(sz_18 >> 0x10);
    uStack_74 = (uint32_t)(sz_18 >> 0x20);
    uStack_70 = (uint16_t)uVal_25;
    uStack_6e = (uint16_t)(uVal_25 >> 0x10);
    uStack_6c = (uint16_t)(uVal_25 >> 0x20);
    uStack_6a = (uint16_t)(uVal_25 >> 0x30);
    func_0x1806aa960(pU64_23,fnPtr_1,sz_18);
    pU64_23[sz_18] = 0;
    pU64_23 = local_88;
    func_0x180132ee0(local_58,0,0,pU64_23);
    uVal_25 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
    if (0xf < uVal_25) {
      uVal_19 = uVal_25 + 1;
      lVal_20 = (int64_t)local_88;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) goto LAB_1802f5beb;
        uVal_19 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    *local_58 = &PTR_LAB_1806c4290;
    uVal_17 = _UNK_1806b5c0c;
    uVal_16 = _UNK_1806b5c08;
    uVal_15 = _UNK_1806b5c04;
    *(uint32_t *)(local_58 + 0x16) = _DAT_1806b5c00;
    *(uint32_t *)((int64_t)local_58 + 0xb4) = uVal_15;
    *(uint32_t *)(local_58 + 0x17) = uVal_16;
    *(uint32_t *)((int64_t)local_58 + 0xbc) = uVal_17;
    *(uint16_t *)(local_58 + 0x18) = 0;
    pU64_2 = (uint8_t *)((int64_t)local_58 + 0xd1);
    local_58[0x19] = 0;
    *(uint32_t *)((int64_t)local_58 + 0xcf) = 0;
    *(uint8_t *)((int64_t)local_58 + 0xd3) = 1;
    *(uint64_t *)((int64_t)local_58 + 0xd4) = DAT_1806b2890;
    local_b0 = 0;
    if (DAT_18083fd98 == (uint64_t *)0x0) {
      uVal_24 = 0;
    }
    else {
      local_b0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_e8);
      uVal_24 = *pU64_2;
    }
    local_78 = (uint16_t)_DAT_1806c5eac;
    uStack_76 = (uint16_t)((uint)_DAT_1806c5eac >> 0x10);
    uStack_74 = _UNK_1806c5eb0;
    uStack_70 = (uint16_t)_UNK_1806c5eb4;
    uStack_6e = (uint16_t)((uint)_UNK_1806c5eb4 >> 0x10);
    uStack_6c = (uint16_t)_UNK_1806c5eb8;
    local_88._4_4_ = _UNK_1806c5ea0;
    local_88._0_4_ = _DAT_1806c5e9c;
    uStack_80._0_4_ = _UNK_1806c5ea4;
    uStack_80._4_4_ = _UNK_1806c5ea8;
    uStack_6a = 0x87d0;
    uStack_68 = 0x2017;
    uStack_66 = 0xb3d5a20f;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xda90) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xda90) = 1;
      func_0x180086e20(lVal_20 + 0xda69,local_88);
      func_0x180673140(&LAB_180364250);
    }
    uVal_14 = _UNK_1806b2cac;
    uVal_13 = _UNK_1806b2ca8;
    uVal_12 = _UNK_1806b2ca4;
    uVal_11 = _DAT_1806b2ca0;
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_3 = (uint8_t (*)[16])(lVal_20 + 0xda69);
    if (*(char *)(lVal_20 + 0xda8f) == '\x01') {
      auArr_7._4_4_ = *(uint *)(lVal_20 + 0xda6d) ^ _UNK_1806b2ca4;
      auArr_7._0_4_ = *(uint *)*pArr16_3 ^ _DAT_1806b2ca0;
      auArr_7._8_4_ = *(uint *)(lVal_20 + 0xda71) ^ _UNK_1806b2ca8;
      auArr_7._12_4_ = *(uint *)(lVal_20 + 0xda75) ^ _UNK_1806b2cac;
      *pArr16_3 = auArr_7;
      auArr_9._4_4_ = *(uint *)(lVal_20 + 0xda7d) ^ uVal_12;
      auArr_9._0_4_ = *(uint *)(lVal_20 + 0xda79) ^ uVal_11;
      auArr_9._8_4_ = *(uint *)(lVal_20 + 0xda81) ^ uVal_13;
      auArr_9._12_4_ = *(uint *)(lVal_20 + 0xda85) ^ uVal_14;
      *(uint8_t (*)[16])(lVal_20 + 0xda79) = auArr_9;
      *(uint *)(lVal_20 + 0xda89) = *(uint *)(lVal_20 + 0xda89) ^ 0xc77d4573;
      *(byte *)(lVal_20 + 0xda8d) = *(byte *)(lVal_20 + 0xda8d) ^ 0xb1;
      *(byte *)(lVal_20 + 0xda8e) = *(byte *)(lVal_20 + 0xda8e) ^ 0xb3;
      *(uint8_t *)(lVal_20 + 0xda8f) = 0;
    }
    uStack_98 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    sz_18 = strlen((char *)pArr16_3);
    if ((int64_t)sz_18 < 0) goto LAB_1802f5bf2;
    if (sz_18 < 0x10) {
      pU64_22 = &local_a8;
      uVal_25 = 0xf;
    }
    else {
      uVal_19 = sz_18 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_19) {
        uVal_25 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_49 = 1;
        pU64_22 = (uint32_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_49 = 1;
        lVal_20 = func_0x180672de0(uVal_25 + 0x28);
        pU64_22 = (uint32_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -2) = lVal_20;
      }
      local_a8 = SUB84(pU64_22,0);
      uStack_a4 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
    }
    uStack_98 = (undefined7)sz_18;
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = uVal_25;
    func_0x1806aa960(pU64_22,pArr16_3,sz_18);
    *(uint8_t *)((int64_t)pU64_22 + sz_18) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdaa4) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xdaa4) = 1;
      *(uint8_t *)(lVal_20 + 0xdaa0) = 1;
      *(uint64_t *)(lVal_20 + 0xda98) = 0xe9d0dfd3a60e2c37;
      func_0x180673140(&LAB_180364280);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_20 + 0xda98);
    if (*(char *)(lVal_20 + 0xdaa0) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0xe9b5b3b1c77d4573;
      *(uint8_t *)(lVal_20 + 0xdaa0) = 0;
    }
    local_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    _local_88 = ZEXT816(0);
    sz_18 = strlen((char *)pU64_4);
    if ((int64_t)sz_18 < 0) goto LAB_1802f5bff;
    uVal_25 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_19) {
        uVal_25 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_4c = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_4c = 1;
        lVal_20 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_20;
      }
      local_88 = (uint8_t  [8])pU64_23;
    }
    local_78 = (uint16_t)sz_18;
    uStack_76 = (uint16_t)(sz_18 >> 0x10);
    uStack_74 = (uint32_t)(sz_18 >> 0x20);
    uStack_70 = (uint16_t)uVal_25;
    uStack_6e = (uint16_t)(uVal_25 >> 0x10);
    uStack_6c = (uint16_t)(uVal_25 >> 0x20);
    uStack_6a = (uint16_t)(uVal_25 >> 0x30);
    func_0x1806aa960(pU64_23,pU64_4,sz_18);
    pU64_23[sz_18] = 0;
    pU64_23 = local_88;
    pU64_22 = &local_a8;
    func_0x1801ccd70(local_58,pU64_23,pU64_22,pU64_2,uVal_24,local_e8,0);
    uVal_25 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
    if (0xf < uVal_25) {
      uVal_19 = uVal_25 + 1;
      lVal_20 = (int64_t)local_88;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) goto LAB_1802f5beb;
        uVal_19 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    if (0xf < uStack_90) {
      lVal_10 = CONCAT44(uStack_a4,local_a8);
      uVal_25 = uStack_90 + 1;
      lVal_20 = lVal_10;
      if (0xfff < uVal_25) {
        lVal_20 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_20)) goto LAB_1802f5beb;
        uVal_25 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_25);
    }
    local_168 = &PTR_LAB_1806ba9a0;
    local_160 = local_58;
    local_130 = &local_168;
    uVal_24 = *(uint8_t *)((int64_t)local_58 + 0xd2);
    uStack_68 = _UNK_1806c5ee2;
    uStack_66 = _UNK_1806c5ee4;
    uStack_62 = _UNK_1806c5ee8;
    local_78 = (uint16_t)_DAT_1806c5ed2;
    uStack_76 = (uint16_t)((uint)_DAT_1806c5ed2 >> 0x10);
    uStack_74 = _UNK_1806c5ed6;
    uStack_70 = _UNK_1806c5eda;
    uStack_6e = _DAT_1806c5edc;
    uStack_6c = _UNK_1806c5ede;
    uStack_6a = _UNK_1806c5ee0;
    local_88._4_4_ = _UNK_1806c5ec6;
    local_88._0_4_ = _DAT_1806c5ec2;
    uStack_80._0_4_ = _UNK_1806c5eca;
    uStack_80._4_4_ = _UNK_1806c5ece;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdad0) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xdad0) = 1;
      func_0x18012b7b0(lVal_20 + 0xdaa5,local_88);
      func_0x180673140(&LAB_1803642a0);
    }
    uVal_14 = _UNK_1806b2d7c;
    uVal_13 = _UNK_1806b2d78;
    uVal_12 = _UNK_1806b2d74;
    uVal_11 = _DAT_1806b2d70;
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_3 = (uint8_t (*)[16])(lVal_20 + 0xdaa5);
    if (*(char *)(lVal_20 + 0xdacf) == '\x01') {
      auArr_6._4_4_ = *(uint *)(lVal_20 + 0xdaa9) ^ _UNK_1806b2d74;
      auArr_6._0_4_ = *(uint *)*pArr16_3 ^ _DAT_1806b2d70;
      auArr_6._8_4_ = *(uint *)(lVal_20 + 0xdaad) ^ _UNK_1806b2d78;
      auArr_6._12_4_ = *(uint *)(lVal_20 + 0xdab1) ^ _UNK_1806b2d7c;
      *pArr16_3 = auArr_6;
      auArr_8._4_4_ = *(uint *)(lVal_20 + 0xdab9) ^ uVal_12;
      auArr_8._0_4_ = *(uint *)(lVal_20 + 0xdab5) ^ uVal_11;
      auArr_8._8_4_ = *(uint *)(lVal_20 + 0xdabd) ^ uVal_13;
      auArr_8._12_4_ = *(uint *)(lVal_20 + 0xdac1) ^ uVal_14;
      *(uint8_t (*)[16])(lVal_20 + 0xdab5) = auArr_8;
      *(uint64_t *)(lVal_20 + 0xdac5) =
           CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_20 + 0xdac5) >> 0x20) ^ _UNK_1806b5c24,
                    (uint)*(uint64_t *)(lVal_20 + 0xdac5) ^ _DAT_1806b5c20);
      *(byte *)(lVal_20 + 0xdacd) = *(byte *)(lVal_20 + 0xdacd) ^ 0x87;
      *(byte *)(lVal_20 + 0xdace) = *(byte *)(lVal_20 + 0xdace) ^ 199;
      *(uint8_t *)(lVal_20 + 0xdacf) = 0;
    }
    uStack_98 = 0;
    uStack_91 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    sz_18 = strlen((char *)pArr16_3);
    if ((int64_t)sz_18 < 0) goto LAB_1802f5c0c;
    uVal_25 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_19) {
        uVal_25 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_4a = 1;
        pU64_22 = (uint32_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_4a = 1;
        lVal_20 = func_0x180672de0(uVal_25 + 0x28);
        pU64_22 = (uint32_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -2) = lVal_20;
      }
      local_a8 = SUB84(pU64_22,0);
      uStack_a4 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
    }
    uStack_98 = (undefined7)sz_18;
    uStack_91 = (uint8_t)(sz_18 >> 0x38);
    uStack_90 = uVal_25;
    func_0x1806aa960(pU64_22,pArr16_3,sz_18);
    *(uint8_t *)((int64_t)pU64_22 + sz_18) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdae8) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xdae8) = 1;
      *(uint8_t *)(lVal_20 + 0xdae6) = 1;
      *(uint64_t *)(lVal_20 + 0xdad8) = 0x20c0aec4f183a8c9;
      *(uint32_t *)(lVal_20 + 0xdae0) = 0xfdd6a8f5;
      *(uint16_t *)(lVal_20 + 0xdae4) = 0xcdc1;
      func_0x180673140(&LAB_1803642d0);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_20 + 0xdad8);
    if (*(char *)(lVal_20 + 0xdae6) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_20 + 0xdae0) = *(uint *)(lVal_20 + 0xdae0) ^ 0x93a3c787;
      *(byte *)(lVal_20 + 0xdae4) = *(byte *)(lVal_20 + 0xdae4) ^ 0xa5;
      *(byte *)(lVal_20 + 0xdae5) = *(byte *)(lVal_20 + 0xdae5) ^ 0xcd;
      *(uint8_t *)(lVal_20 + 0xdae6) = 0;
    }
    local_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    _local_88 = ZEXT816(0);
    sz_18 = strlen((char *)pU64_4);
    if ((int64_t)sz_18 < 0) goto LAB_1802f5c19;
    uVal_25 = 0xf;
    if (0xf < sz_18) {
      uVal_19 = sz_18 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_19) {
        uVal_25 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        local_4d = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_4d = 1;
        lVal_20 = func_0x180672de0(uVal_25 + 0x28);
        pU64_23 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_20;
      }
      local_88 = (uint8_t  [8])pU64_23;
    }
    pU64_21 = local_58;
    lVal_20 = (int64_t)local_58 + 0xd2;
    local_78 = (uint16_t)sz_18;
    uStack_76 = (uint16_t)(sz_18 >> 0x10);
    uStack_74 = (uint32_t)(sz_18 >> 0x20);
    uStack_70 = (uint16_t)uVal_25;
    uStack_6e = (uint16_t)(uVal_25 >> 0x10);
    uStack_6c = (uint16_t)(uVal_25 >> 0x20);
    uStack_6a = (uint16_t)(uVal_25 >> 0x30);
    func_0x1806aa960(pU64_23,pU64_4,sz_18);
    pU64_23[sz_18] = 0;
    pU64_23 = local_88;
    pU64_22 = &local_a8;
    func_0x1801ccd70(pU64_21,pU64_23,pU64_22,lVal_20,uVal_24,&local_168,0);
    uVal_25 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
    if (0xf < uVal_25) {
      uVal_19 = uVal_25 + 1;
      lVal_20 = (int64_t)local_88;
      if (0xfff < uVal_19) {
        lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) goto LAB_1802f5beb;
        uVal_19 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_19);
    }
    if (0xf < uStack_90) {
      lVal_10 = CONCAT44(uStack_a4,local_a8);
      uVal_25 = uStack_90 + 1;
      lVal_20 = lVal_10;
      if (0xfff < uVal_25) {
        lVal_20 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_20)) goto LAB_1802f5beb;
        uVal_25 = uStack_90 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_20,uVal_25);
    }
    local_128 = &PTR_LAB_1806ba9a0;
    local_120 = local_58;
    uVal_24 = *(uint8_t *)((int64_t)local_58 + 0xd3);
    local_a8 = _DAT_1806c5eec;
    uStack_a4 = _UNK_1806c5ef0;
    uStack_a0 = _UNK_1806c5ef4;
    uStack_9c = CONCAT13(0xfc,(int3)_UNK_1806c5ef8);
    uStack_98 = 0x21fe73959487ba;
    local_f0 = &local_128;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdb04) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xdb04) = 1;
      func_0x18007d3c0(lVal_20 + 0xdae9,&local_a8);
      func_0x180673140(&LAB_180364300);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xdae9);
    func_0x180217640(fnPtr_1);
    _local_88 = ZEXT816(0);
    sz_18 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_18) {
      uVal_25 = 0xf;
      if (0xf < sz_18) {
        uVal_19 = sz_18 | 0xf;
        uVal_25 = 0x16;
        if (0x16 < uVal_19) {
          uVal_25 = uVal_19;
        }
        if (uVal_19 < 0xfff) {
          local_4b = 1;
          pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
        }
        else {
          local_4b = 1;
          lVal_20 = func_0x180672de0(uVal_25 + 0x28);
          pU64_23 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_23 + -8) = lVal_20;
        }
        local_88 = (uint8_t  [8])pU64_23;
      }
      local_78 = (uint16_t)sz_18;
      uStack_76 = (uint16_t)(sz_18 >> 0x10);
      uStack_74 = (uint32_t)(sz_18 >> 0x20);
      uStack_70 = (uint16_t)uVal_25;
      uStack_6e = (uint16_t)(uVal_25 >> 0x10);
      uStack_6c = (uint16_t)(uVal_25 >> 0x20);
      uStack_6a = (uint16_t)(uVal_25 >> 0x30);
      func_0x1806aa960(pU64_23,fnPtr_1,sz_18);
      pU64_23[sz_18] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xdb10) == '\0') {
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_20 + 0xdb10) = 1;
        *(uint32_t *)(lVal_20 + 0xdb08) = 0x92839e98;
        *(uint16_t *)(lVal_20 + 0xdb0c) = 0x11f;
        func_0x180673140(&LAB_180364330);
      }
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_20 + 0xdb08);
      if (*(char *)(lVal_20 + 0xdb0d) == '\x01') {
        *_Str = *_Str ^ 0xf7f5f1d5;
        *(byte *)(lVal_20 + 0xdb0c) = *(byte *)(lVal_20 + 0xdb0c) ^ 0x1f;
        *(uint8_t *)(lVal_20 + 0xdb0d) = 0;
      }
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      sz_18 = strlen((char *)_Str);
      if (-1 < (int64_t)sz_18) {
        uVal_25 = 0xf;
        if (0xf < sz_18) {
          uVal_19 = sz_18 | 0xf;
          uVal_25 = 0x16;
          if (0x16 < uVal_19) {
            uVal_25 = uVal_19;
          }
          if (uVal_19 < 0xfff) {
            local_4e = 1;
            pU64_22 = (uint32_t *)func_0x180672de0(uVal_25 + 1);
          }
          else {
            local_4e = 1;
            lVal_20 = func_0x180672de0(uVal_25 + 0x28);
            pU64_22 = (uint32_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_22 + -2) = lVal_20;
          }
          local_a8 = SUB84(pU64_22,0);
          uStack_a4 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
        }
        pU64_21 = local_58;
        lVal_20 = (int64_t)local_58 + 0xd3;
        uStack_98 = (undefined7)sz_18;
        uStack_91 = (uint8_t)(sz_18 >> 0x38);
        uStack_90 = uVal_25;
        func_0x1806aa960(pU64_22,_Str,sz_18);
        *(uint8_t *)((int64_t)pU64_22 + sz_18) = 0;
        func_0x1801ccd70(pU64_21,&local_a8,local_88,lVal_20,uVal_24,&local_128,0);
        if (0xf < uStack_90) {
          lVal_10 = CONCAT44(uStack_a4,local_a8);
          uVal_25 = uStack_90 + 1;
          lVal_20 = lVal_10;
          if (0xfff < uVal_25) {
            lVal_20 = *(int64_t *)(lVal_10 + -8);
            if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_20)) goto LAB_1802f5beb;
            uVal_25 = uStack_90 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_20,uVal_25);
        }
        uVal_25 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70)));
        if (0xf < uVal_25) {
          uVal_19 = uVal_25 + 1;
          lVal_20 = (int64_t)local_88;
          if (0xfff < uVal_19) {
            lVal_20 = *(int64_t *)((int64_t)local_88 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_20)) {
LAB_1802f5beb:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_19 = uVal_25 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_20,uVal_19);
        }
        return local_58;
      }
      goto LAB_1802f5c33;
    }
  }
  local_4b = 1;
  func_0x18007ba70();
LAB_1802f5c33:
  local_4e = 1;
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  pU64_21 = (uint64_t *)(*fnPtr_5)();
  return pU64_21;
}

// Unwind@1802f5c50
void Unwind_1802f5c50(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xf8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@1802f5ca0
void Unwind_1802f5ca0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xda90) = 0;
  *(uint8_t *)(param_2 + 0x15f) = 1;
  return;
}

// Unwind@1802f5cf0
void Unwind_1802f5cf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1802f5d30
void Unwind_1802f5d30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x15c) = 0;
  return;
}

// Unwind@1802f5d70
void Unwind_1802f5d70(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x15c);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x15f) = uVal_1;
  return;
}

// Unwind@1802f5dc0
void Unwind_1802f5dc0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x15f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@1802f5e20
void Unwind_1802f5e20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x15b) = 0;
  return;
}

// Unwind@1802f5e60
void Unwind_1802f5e60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x15b);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x15e) = uVal_1;
  return;
}

// Unwind@1802f5eb0
void Unwind_1802f5eb0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x15e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1802f5f10
void Unwind_1802f5f10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x15a) = 0;
  return;
}

// Unwind@1802f5f50
void Unwind_1802f5f50(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x15a);
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x15d) = uVal_1;
  return;
}

// Unwind@1802f5fa0
void Unwind_1802f5fa0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x15d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@1802f6000
void Unwind_1802f6000(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x150);
  *pU64_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(pU64_1 + 0x12);
  func_0x1801c49a0(pU64_1);
  return;
}

// Unwind@1802f6060
void Unwind_1802f6060(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xda68) = 0;
  return;
}

// Unwind@1802f60b0
void Unwind_1802f60b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdad0) = 0;
  *(uint8_t *)(param_2 + 0x15e) = 1;
  return;
}

// Unwind@1802f6100
void Unwind_1802f6100(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdb04) = 0;
  *(uint8_t *)(param_2 + 0x15d) = 1;
  return;
}

// Unwind@1802f6da0
void Unwind_1802f6da0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1802f6de0
void Unwind_1802f6de0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1802f6e20
void Unwind_1802f6e20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1802f6e70
void Unwind_1802f6e70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1802f6ec0
void Unwind_1802f6ec0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1802f6f10
void Unwind_1802f6f10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdb4c) = 0;
  return;
}

// func_0x1802f6f70
int64_t func_0x1802f6f70(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xdb6c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0xdb6c) = 1;
    *(uint64_t *)(lVal_1 + 0xdb60) = 0x83dceb6aa93439ec;
    *(uint32_t *)(lVal_1 + 0xdb68) = 0x1553dea;
    func_0x180673140(&LAB_180364420);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdb60;
}

// func_0x1802f7000
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1802f7000(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0xedbd9b35dd55518f;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806b2790,0);
  }
  return;
}

// Unwind@1802f7330
void Unwind_1802f7330(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1802f7550
void Unwind_1802f7550(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x1802f7580
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802f7580(uint64_t *param_1)
{
  char *fnPtr_1;
  byte *pU8_2;
  uint64_t *pU64_3;
  uint8_t *pU64_4;
  uint *pU64_5;
  uint8_t uVal_6;
  func_ptr_t fnPtr_7;
  uint8_t auArr_8 [16];
  uint uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  size_t sz_16;
  uint64_t uVal_17;
  uint64_t ***ptr3_U64_18;
  int64_t lVal_19;
  uint64_t *pU64_20;
  uint64_t ****ptr4_U64_21;
  uint64_t ****ptr4_U64_22;
  uint8_t *pU64_23;
  uint64_t uVal_24;
  uint uVal_25;
  uint uVal_26;
  uint uVal_27;
  uint uVal_28;
  uint uVal_29;
  uint uVal_30;
  uint8_t **local_2b8;
  uint64_t *local_2b0;
  uint8_t ***local_280;
  uint8_t **local_278;
  uint64_t *local_270;
  uint8_t ***local_240;
  uint64_t local_238;
  uint64_t uStack_230;
  uint64_t local_228;
  uint64_t uStack_220;
  uint64_t local_218;
  uint64_t uStack_210;
  uint64_t local_208;
  uint64_t uStack_200;
  uint8_t local_1f0 [56];
  uint64_t local_1b8;
  uint8_t local_1b0 [56];
  uint64_t local_178;
  uint8_t local_170 [56];
  uint64_t local_138;
  uint8_t local_130 [56];
  uint64_t local_f8;
  uint64_t *local_f0;
  uint64_t local_e8;
  undefined7 uStack_e0;
  uint8_t uStack_d9;
  uint16_t uStack_d8;
  uint8_t uStack_d6;
  uint64_t ****local_c8;
  undefined7 uStack_c0;
  uint8_t uStack_b9;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint32_t uStack_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
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
  
  local_60 = 0xfffffffffffffffe;
  local_c8 = (uint64_t ****)_DAT_1806c5f03;
  uStack_c0 = (undefined7)_UNK_1806c5f0b;
  uStack_b9 = 0x25;
  uStack_b8 = 0xf6c7b5e8;
  uStack_b4 = CONCAT13(uStack_b4._3_1_,0xabbed7);
  local_78 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xdba0) == '\0') {
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_19 + 0xdba0) = 1;
    func_0x18007d3c0(lVal_19 + 0xdb85,&local_c8);
    func_0x180673140(&LAB_1803644b0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xdb85);
  func_0x18036eb90(fnPtr_1);
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_c8 = (uint64_t ****)0x0;
  uStack_c0 = 0;
  uStack_b9 = 0;
  sz_16 = strlen(fnPtr_1);
  if ((int64_t)sz_16 < 0) {
    func_0x18007ba70();
LAB_1802f8e52:
    local_67 = 1;
    func_0x18007ba70();
LAB_1802f8e5f:
    local_66 = 1;
    func_0x18007ba70();
LAB_1802f8e6c:
    local_69 = 1;
    func_0x18007ba70();
LAB_1802f8e79:
    local_68 = 1;
    func_0x18007ba70();
LAB_1802f8e86:
    local_62 = 1;
    func_0x18007ba70();
LAB_1802f8e93:
    local_61 = 1;
    func_0x18007ba70();
LAB_1802f8ea0:
    local_6a = 1;
    func_0x18007ba70();
LAB_1802f8ead:
    local_63 = 1;
    func_0x18007ba70();
LAB_1802f8eba:
    local_6b = 1;
    func_0x18007ba70();
LAB_1802f8ec7:
    local_64 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_16 < 0x10) {
      ptr4_U64_22 = &local_c8;
      uVal_24 = 0xf;
    }
    else {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_24 + 1);
        local_c8 = ptr4_U64_22;
      }
      else {
        ptr3_U64_18 = (uint64_t ***)func_0x180672de0(uVal_24 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_18 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_18;
        local_c8 = ptr4_U64_22;
      }
    }
    uStack_b8 = (uint32_t)sz_16;
    uStack_b4 = (uint32_t)(sz_16 >> 0x20);
    uStack_b0 = (uint32_t)uVal_24;
    uStack_ac = (uint32_t)(uVal_24 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,fnPtr_1,sz_16);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_16) = 0;
    ptr4_U64_22 = &local_c8;
    func_0x1801c2ba0(local_78,0,0,ptr4_U64_22);
    uVal_24 = CONCAT44(uStack_ac,uStack_b0);
    if (0xf < uVal_24) {
      uVal_17 = uVal_24 + 1;
      ptr4_U64_21 = local_c8;
      if (0xfff < uVal_17) {
        ptr4_U64_21 = (uint64_t ****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr4_U64_21)))
        goto LAB_1802f8e4b;
        uVal_17 = uVal_24 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_21,uVal_17);
    }
    pU64_20 = local_78;
    *local_78 = &PTR_LAB_1806c43f0;
    *(uint32_t *)(local_78 + 0x10) = 0x101;
    uVal_13 = _UNK_1806b5b2c;
    uVal_12 = _UNK_1806b5b28;
    uVal_11 = _UNK_1806b5b24;
    uVal_10 = _DAT_1806b5b20;
    *(uint32_t *)((int64_t)local_78 + 0x84) = _DAT_1806b5b20;
    *(uint32_t *)(local_78 + 0x11) = uVal_11;
    *(uint32_t *)((int64_t)local_78 + 0x8c) = uVal_12;
    *(uint32_t *)(local_78 + 0x12) = uVal_13;
    *(uint32_t *)((int64_t)local_78 + 0x94) = uVal_10;
    *(uint32_t *)(local_78 + 0x13) = uVal_11;
    *(uint32_t *)((int64_t)local_78 + 0x9c) = uVal_12;
    *(uint32_t *)(local_78 + 0x14) = uVal_13;
    uVal_13 = _UNK_1806c353c;
    uVal_12 = _UNK_1806c3538;
    uVal_11 = _UNK_1806c3534;
    uVal_10 = _DAT_1806c3530;
    *(uint32_t *)((int64_t)local_78 + 0xa4) = _DAT_1806c3530;
    *(uint32_t *)(local_78 + 0x15) = uVal_11;
    *(uint32_t *)((int64_t)local_78 + 0xac) = uVal_12;
    *(uint32_t *)(local_78 + 0x16) = uVal_13;
    *(uint32_t *)((int64_t)local_78 + 0xb4) = uVal_10;
    *(uint32_t *)(local_78 + 0x17) = uVal_11;
    *(uint32_t *)((int64_t)local_78 + 0xbc) = uVal_12;
    *(uint32_t *)(local_78 + 0x18) = uVal_13;
    uVal_13 = _UNK_1806be66c;
    uVal_12 = _UNK_1806be668;
    uVal_11 = _UNK_1806be664;
    uVal_10 = _DAT_1806be660;
    *(uint32_t *)((int64_t)local_78 + 0xc4) = _DAT_1806be660;
    *(uint32_t *)(local_78 + 0x19) = uVal_11;
    *(uint32_t *)((int64_t)local_78 + 0xcc) = uVal_12;
    *(uint32_t *)(local_78 + 0x1a) = uVal_13;
    *(uint32_t *)((int64_t)local_78 + 0xd4) = uVal_10;
    *(uint32_t *)(local_78 + 0x1b) = uVal_11;
    *(uint32_t *)((int64_t)local_78 + 0xdc) = uVal_12;
    *(uint32_t *)(local_78 + 0x1c) = uVal_13;
    uVal_15 = _UNK_1806b5f68;
    uVal_14 = _DAT_1806b5f60;
    *(uint64_t *)((int64_t)local_78 + 0xe4) = _DAT_1806b5f60;
    *(uint64_t *)((int64_t)local_78 + 0xec) = uVal_15;
    *(uint64_t *)((int64_t)local_78 + 0xf4) = uVal_14;
    *(uint64_t *)((int64_t)local_78 + 0xfc) = uVal_15;
    *(uint8_t *)((int64_t)local_78 + 0x104) = 0;
    local_f0 = local_78 + 0x24;
    *(uint8_t *)(local_78 + 0x2b) = 0;
    *(uint16_t *)(local_78 + 0x2c) = 0;
    *(uint8_t *)((int64_t)local_78 + 0x2e4) = 0;
    *(uint8_t (*)[16])(local_78 + 0x6b) = ZEXT816(0);
    local_78[0x6d] = 0;
    *(uint8_t (*)[16])(local_78 + 0x21) = ZEXT816(0);
    *(uint32_t *)(local_78 + 0x23) = 0;
    *(uint8_t (*)[16])(local_78 + 0x26) = ZEXT816(0);
    *(uint8_t (*)[16])(local_78 + 0x24) = ZEXT816(0);
    local_78[0x28] = 0;
    *(uint8_t (*)[16])(local_78 + 0x2d) = ZEXT816(0);
    *(uint16_t *)(local_78 + 0x2f) = 0;
    func_0x1806ab010(local_78 + 0x30,0,0x12e);
    *(uint8_t (*)[16])(pU64_20 + 0x56) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_20 + 0x58) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_20 + 0x5a) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_20 + 0x5d) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_20 + 0x5f) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_20 + 0x61) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_20 + 99) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_20 + 0x65) = ZEXT816(0);
    *(uint8_t (*)[16])(pU64_20 + 0x67) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_20 + 0x344) = ZEXT816(0);
    local_1b8 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_1b8 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_1f0);
    }
    pU64_20 = local_78 + 0x10;
    uVal_6 = *(uint8_t *)pU64_20;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdba4) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdba4) = 1;
      *(uint16_t *)(lVal_19 + 0xdba1) = 0x1d5;
      func_0x180673140(&LAB_1803644e0);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_19 + 0xdba1);
    if (*(char *)(lVal_19 + 0xdba2) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xd5;
      *(uint8_t *)(lVal_19 + 0xdba2) = 0;
    }
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_c8 = (uint64_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_16 = strlen((char *)pU8_2);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8e52;
    uVal_24 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_67 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_24 + 1);
        local_c8 = ptr4_U64_22;
      }
      else {
        local_67 = 1;
        ptr3_U64_18 = (uint64_t ***)func_0x180672de0(uVal_24 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_18 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_18;
        local_c8 = ptr4_U64_22;
      }
    }
    uStack_b8 = (uint32_t)sz_16;
    uStack_b4 = (uint32_t)(sz_16 >> 0x20);
    uStack_b0 = (uint32_t)uVal_24;
    uStack_ac = (uint32_t)(uVal_24 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU8_2,sz_16);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_16) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdbb4) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdbb4) = 1;
      *(uint8_t *)(lVal_19 + 0xdbb2) = 1;
      *(uint64_t *)(lVal_19 + 0xdba8) = 0xf853fc3f809a9986;
      *(uint16_t *)(lVal_19 + 0xdbb0) = 0xf1b1;
      func_0x180673140(&LAB_180364500);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_19 + 0xdba8);
    if (*(char *)(lVal_19 + 0xdbb2) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x91219b1ff7f5f1d5;
      *(byte *)(lVal_19 + 0xdbb0) = *(byte *)(lVal_19 + 0xdbb0) ^ 0xd5;
      *(byte *)(lVal_19 + 0xdbb1) = *(byte *)(lVal_19 + 0xdbb1) ^ 0xf1;
      *(uint8_t *)(lVal_19 + 0xdbb2) = 0;
    }
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_16 = strlen((char *)pU64_3);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8e5f;
    if (sz_16 < 0x10) {
      pU64_23 = local_98;
      uVal_24 = 0xf;
    }
    else {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_66 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_24 + 1);
      }
      else {
        local_66 = 1;
        lVal_19 = func_0x180672de0(uVal_24 + 0x28);
        pU64_23 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_19;
      }
      local_98._0_8_ = pU64_23;
    }
    local_88._8_8_ = uVal_24;
    local_88._0_8_ = sz_16;
    func_0x1806aa960(pU64_23,pU64_3,sz_16);
    pU64_23[sz_16] = 0;
    pU64_23 = local_98;
    ptr4_U64_22 = &local_c8;
    func_0x1801ccd70(local_78,pU64_23,ptr4_U64_22,pU64_20,uVal_6,local_1f0,0);
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_24 = local_88._8_8_ + 1;
      lVal_19 = local_98._0_8_;
      if (0xfff < uVal_24) {
        lVal_19 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_19)) goto LAB_1802f8e4b;
        uVal_24 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_24);
    }
    uVal_24 = CONCAT44(uStack_ac,uStack_b0);
    if (0xf < uVal_24) {
      uVal_17 = uVal_24 + 1;
      ptr4_U64_21 = local_c8;
      if (0xfff < uVal_17) {
        ptr4_U64_21 = (uint64_t ****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr4_U64_21)))
        goto LAB_1802f8e4b;
        uVal_17 = uVal_24 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_21,uVal_17);
    }
    local_2b8 = &PTR_LAB_1806bad00;
    local_2b0 = local_78;
    local_280 = &local_2b8;
    local_238 = *(uint64_t *)((int64_t)local_78 + 0x84);
    uStack_230 = *(uint64_t *)((int64_t)local_78 + 0x8c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdbb8) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdbb8) = 1;
      *(uint16_t *)(lVal_19 + 0xdbb5) = 0x10d;
      func_0x180673140(&LAB_180364530);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_19 + 0xdbb5);
    if (*(char *)(lVal_19 + 0xdbb6) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xd;
      *(uint8_t *)(lVal_19 + 0xdbb6) = 0;
    }
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_c8 = (uint64_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_16 = strlen((char *)pU8_2);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8e6c;
    uVal_24 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_69 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_24 + 1);
        local_c8 = ptr4_U64_22;
      }
      else {
        local_69 = 1;
        ptr3_U64_18 = (uint64_t ***)func_0x180672de0(uVal_24 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_18 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_18;
        local_c8 = ptr4_U64_22;
      }
    }
    uStack_b8 = (uint32_t)sz_16;
    uStack_b4 = (uint32_t)(sz_16 >> 0x20);
    uStack_b0 = (uint32_t)uVal_24;
    uStack_ac = (uint32_t)(uVal_24 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU8_2,sz_16);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_16) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdbcc) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdbcc) = 1;
      *(uint64_t *)(lVal_19 + 0xdbc0) = 0x90e10654120a14a;
      *(uint32_t *)(lVal_19 + 0xdbc8) = 0x149a162;
      func_0x180673140(&LAB_180364550);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_19 + 0xdbc0);
    if (*(char *)(lVal_19 + 0xdbcb) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x656173452549d30d;
      *(uint *)(lVal_19 + 0xdbc8) =
           (*(uint *)(lVal_19 + 0xdbc8) & 0xffff | (uint)*(byte *)(lVal_19 + 0xdbca) << 0x10) ^
           SUB164(_DAT_1806b5cf0,0);
    }
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_16 = strlen((char *)pU64_3);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8e79;
    uVal_24 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_68 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_24 + 1);
      }
      else {
        local_68 = 1;
        lVal_19 = func_0x180672de0(uVal_24 + 0x28);
        pU64_23 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_19;
      }
      local_98._0_8_ = pU64_23;
    }
    pU64_20 = local_78;
    lVal_19 = (int64_t)local_78 + 0x84;
    local_88._0_8_ = sz_16;
    local_88._8_8_ = uVal_24;
    func_0x1806aa960(pU64_23,pU64_3,sz_16);
    pU64_23[sz_16] = 0;
    pU64_23 = local_98;
    ptr4_U64_22 = &local_c8;
    func_0x1801cd600(pU64_20,pU64_23,ptr4_U64_22,lVal_19,&local_238,&local_2b8,0);
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_24 = local_88._8_8_ + 1;
      lVal_19 = local_98._0_8_;
      if (0xfff < uVal_24) {
        lVal_19 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_19)) goto LAB_1802f8e4b;
        uVal_24 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_24);
    }
    uVal_24 = CONCAT44(uStack_ac,uStack_b0);
    if (0xf < uVal_24) {
      uVal_17 = uVal_24 + 1;
      ptr4_U64_21 = local_c8;
      if (0xfff < uVal_17) {
        ptr4_U64_21 = (uint64_t ****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr4_U64_21)))
        goto LAB_1802f8e4b;
        uVal_17 = uVal_24 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_21,uVal_17);
    }
    local_178 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_178 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_1b0);
    }
    pU64_4 = (uint8_t *)((int64_t)local_78 + 0x82);
    uVal_6 = *pU64_4;
    uStack_a8 = _UNK_1806c5f3a;
    uStack_a4 = _UNK_1806c5f3e;
    uStack_a0 = _UNK_1806c5f42;
    uStack_b8 = _DAT_1806c5f2a;
    uStack_b4 = _UNK_1806c5f2e;
    uStack_b0 = _UNK_1806c5f32;
    uStack_ac = _DAT_1806c5f36;
    local_c8 = _DAT_1806c5f1a;
    uStack_c0 = (undefined7)_UNK_1806c5f22;
    uStack_b9 = (uint8_t)((uint64_t)_UNK_1806c5f22 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdbfc) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdbfc) = 1;
      func_0x1801b1b20(lVal_19 + 0xdbcd,&local_c8);
      func_0x180673140(&LAB_180364580);
    }
    uVal_9 = _UNK_1806ae4dc;
    uVal_30 = _UNK_1806ae4d8;
    uVal_28 = _UNK_1806ae4d4;
    uVal_26 = _DAT_1806ae4d0;
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint *)(lVal_19 + 0xdbcd);
    if (*(char *)(lVal_19 + 0xdbf9) == '\x01') {
      uVal_25 = *(uint *)(lVal_19 + 0xdbd1) ^ _UNK_1806ae4d4;
      uVal_27 = *(uint *)(lVal_19 + 0xdbd5) ^ _UNK_1806ae4d8;
      uVal_29 = *(uint *)(lVal_19 + 0xdbd9) ^ _UNK_1806ae4dc;
      *pU64_5 = *pU64_5 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_19 + 0xdbd1) = uVal_25;
      *(uint *)(lVal_19 + 0xdbd5) = uVal_27;
      *(uint *)(lVal_19 + 0xdbd9) = uVal_29;
      auArr_8._4_4_ = *(uint *)(lVal_19 + 0xdbe1) ^ uVal_28;
      auArr_8._0_4_ = *(uint *)(lVal_19 + 0xdbdd) ^ uVal_26;
      auArr_8._8_4_ = *(uint *)(lVal_19 + 0xdbe5) ^ uVal_30;
      auArr_8._12_4_ = *(uint *)(lVal_19 + 0xdbe9) ^ uVal_9;
      *(uint8_t (*)[16])(lVal_19 + 0xdbdd) = auArr_8;
      *(uint64_t *)(lVal_19 + 0xdbed) = *(uint64_t *)(lVal_19 + 0xdbed) ^ SUB168(_DAT_1806b54d0,0);
      *(byte *)(lVal_19 + 0xdbf5) = *(byte *)(lVal_19 + 0xdbf5) ^ 0xc5;
      *(byte *)(lVal_19 + 0xdbf6) = *(byte *)(lVal_19 + 0xdbf6) ^ 0x73;
      *(byte *)(lVal_19 + 0xdbf7) = *(byte *)(lVal_19 + 0xdbf7) ^ 0xd5;
      *(byte *)(lVal_19 + 0xdbf8) = *(byte *)(lVal_19 + 0xdbf8) ^ 0xa1;
      *(uint8_t *)(lVal_19 + 0xdbf9) = 0;
    }
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_16 = strlen((char *)pU64_5);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8e86;
    uVal_24 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_62 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_24 + 1);
      }
      else {
        local_62 = 1;
        lVal_19 = func_0x180672de0(uVal_24 + 0x28);
        pU64_23 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_19;
      }
      local_98._0_8_ = pU64_23;
    }
    local_88._8_8_ = uVal_24;
    local_88._0_8_ = sz_16;
    func_0x1806aa960(pU64_23,pU64_5,sz_16);
    pU64_23[sz_16] = 0;
    local_e8 = _DAT_1806c5f46;
    uStack_e0 = (undefined7)_UNK_1806c5f4e;
    uStack_d9 = (uint8_t)((uint64_t)_UNK_1806c5f4e >> 0x38);
    uStack_d8 = 0x73b6;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdc10) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdc10) = 1;
      func_0x18007c170(lVal_19 + 0xdbfd,&local_e8);
      func_0x180673140(&LAB_1803645b0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xdbfd);
    func_0x1802e3290(fnPtr_1);
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_c8 = (uint64_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_16 = strlen(fnPtr_1);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8e93;
    uVal_24 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_61 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_24 + 1);
        local_c8 = ptr4_U64_22;
      }
      else {
        local_61 = 1;
        ptr3_U64_18 = (uint64_t ***)func_0x180672de0(uVal_24 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_18 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_18;
        local_c8 = ptr4_U64_22;
      }
    }
    uStack_b8 = (uint32_t)sz_16;
    uStack_b4 = (uint32_t)(sz_16 >> 0x20);
    uStack_b0 = (uint32_t)uVal_24;
    uStack_ac = (uint32_t)(uVal_24 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,fnPtr_1,sz_16);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_16) = 0;
    ptr4_U64_22 = &local_c8;
    pU64_23 = local_98;
    func_0x1801ccd70(local_78,ptr4_U64_22,pU64_23,pU64_4,uVal_6,local_1b0,0);
    uVal_24 = CONCAT44(uStack_ac,uStack_b0);
    if (0xf < uVal_24) {
      uVal_17 = uVal_24 + 1;
      ptr4_U64_21 = local_c8;
      if (0xfff < uVal_17) {
        ptr4_U64_21 = (uint64_t ****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr4_U64_21)))
        goto LAB_1802f8e4b;
        uVal_17 = uVal_24 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_21,uVal_17);
    }
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_24 = local_88._8_8_ + 1;
      lVal_19 = local_98._0_8_;
      if (0xfff < uVal_24) {
        lVal_19 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_19)) goto LAB_1802f8e4b;
        uVal_24 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_24);
    }
    local_278 = &PTR_LAB_1806bae80;
    local_270 = local_78;
    local_228 = *(uint64_t *)((int64_t)local_78 + 0xa4);
    uStack_220 = *(uint64_t *)((int64_t)local_78 + 0xac);
    local_240 = &local_278;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdc14) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdc14) = 1;
      *(uint16_t *)(lVal_19 + 0xdc11) = 0x135;
      func_0x180673140(&LAB_1803645e0);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_19 + 0xdc11);
    if (*(char *)(lVal_19 + 0xdc12) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x35;
      *(uint8_t *)(lVal_19 + 0xdc12) = 0;
    }
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_c8 = (uint64_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_16 = strlen((char *)pU8_2);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8ea0;
    uVal_24 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_6a = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_24 + 1);
        local_c8 = ptr4_U64_22;
      }
      else {
        local_6a = 1;
        ptr3_U64_18 = (uint64_t ***)func_0x180672de0(uVal_24 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_18 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_18;
        local_c8 = ptr4_U64_22;
      }
    }
    uStack_b8 = (uint32_t)sz_16;
    uStack_b4 = (uint32_t)(sz_16 >> 0x20);
    uStack_b0 = (uint32_t)uVal_24;
    uStack_ac = (uint32_t)(uVal_24 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU8_2,sz_16);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_16) = 0;
    local_e8 = _DAT_1806c5f58;
    uStack_e0 = (undefined7)_UNK_1806c5f60;
    uStack_d9 = (uint8_t)((uint64_t)_UNK_1806c5f60 >> 0x38);
    uStack_d8 = 0xb147;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdc28) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdc28) = 1;
      func_0x18007c170(lVal_19 + 0xdc15,&local_e8);
      func_0x180673140(&LAB_180364600);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xdc15);
    func_0x1802159f0(fnPtr_1);
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_16 = strlen(fnPtr_1);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8ead;
    uVal_24 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_63 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_24 + 1);
      }
      else {
        local_63 = 1;
        lVal_19 = func_0x180672de0(uVal_24 + 0x28);
        pU64_23 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_19;
      }
      local_98._0_8_ = pU64_23;
    }
    pU64_20 = local_78;
    lVal_19 = (int64_t)local_78 + 0xa4;
    local_88._8_8_ = uVal_24;
    local_88._0_8_ = sz_16;
    func_0x1806aa960(pU64_23,fnPtr_1,sz_16);
    pU64_23[sz_16] = 0;
    pU64_23 = local_98;
    ptr4_U64_22 = &local_c8;
    func_0x1801cd600(pU64_20,pU64_23,ptr4_U64_22,lVal_19,&local_228,&local_278,0);
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_24 = local_88._8_8_ + 1;
      lVal_19 = local_98._0_8_;
      if (0xfff < uVal_24) {
        lVal_19 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_19)) goto LAB_1802f8e4b;
        uVal_24 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_24);
    }
    uVal_24 = CONCAT44(uStack_ac,uStack_b0);
    if (0xf < uVal_24) {
      uVal_17 = uVal_24 + 1;
      ptr4_U64_21 = local_c8;
      if (0xfff < uVal_17) {
        ptr4_U64_21 = (uint64_t ****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr4_U64_21)))
        goto LAB_1802f8e4b;
        uVal_17 = uVal_24 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_21,uVal_17);
    }
    local_138 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_138 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_170);
    }
    pU64_20 = (uint64_t *)((int64_t)local_78 + 0xc4);
    local_218 = *pU64_20;
    uStack_210 = *(uint64_t *)((int64_t)local_78 + 0xcc);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdc2c) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdc2c) = 1;
      *(uint16_t *)(lVal_19 + 0xdc29) = 0x145;
      func_0x180673140(&LAB_180364630);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_19 + 0xdc29);
    if (*(char *)(lVal_19 + 0xdc2a) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x45;
      *(uint8_t *)(lVal_19 + 0xdc2a) = 0;
    }
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_c8 = (uint64_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_16 = strlen((char *)pU8_2);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8eba;
    uVal_24 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_6b = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_24 + 1);
        local_c8 = ptr4_U64_22;
      }
      else {
        local_6b = 1;
        ptr3_U64_18 = (uint64_t ***)func_0x180672de0(uVal_24 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_18 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_18;
        local_c8 = ptr4_U64_22;
      }
    }
    uStack_b8 = (uint32_t)sz_16;
    uStack_b4 = (uint32_t)(sz_16 >> 0x20);
    uStack_b0 = (uint32_t)uVal_24;
    uStack_ac = (uint32_t)(uVal_24 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU8_2,sz_16);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_16) = 0;
    local_e8 = _DAT_1806c5f6a;
    uStack_e0 = (undefined7)_UNK_1806c5f72;
    uStack_d9 = (uint8_t)((uint64_t)_UNK_1806c5f72 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdc40) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdc40) = 1;
      func_0x18007d150(lVal_19 + 0xdc2d,&local_e8);
      func_0x180673140(&LAB_180364650);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint *)(lVal_19 + 0xdc2d);
    if (*(char *)(lVal_19 + 0xdc3d) == '\x01') {
      uVal_26 = *(uint *)(lVal_19 + 0xdc31) ^ _UNK_1806b6494;
      uVal_28 = *(uint *)(lVal_19 + 0xdc35) ^ _UNK_1806b6498;
      uVal_30 = *(uint *)(lVal_19 + 0xdc39) ^ _UNK_1806b649c;
      *pU64_5 = *pU64_5 ^ _DAT_1806b6490;
      *(uint *)(lVal_19 + 0xdc31) = uVal_26;
      *(uint *)(lVal_19 + 0xdc35) = uVal_28;
      *(uint *)(lVal_19 + 0xdc39) = uVal_30;
      *(uint8_t *)(lVal_19 + 0xdc3d) = 0;
    }
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_16 = strlen((char *)pU64_5);
    if ((int64_t)sz_16 < 0) goto LAB_1802f8ec7;
    uVal_24 = 0xf;
    if (0xf < sz_16) {
      uVal_17 = sz_16 | 0xf;
      uVal_24 = 0x16;
      if (0x16 < uVal_17) {
        uVal_24 = uVal_17;
      }
      if (uVal_17 < 0xfff) {
        local_64 = 1;
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_24 + 1);
      }
      else {
        local_64 = 1;
        lVal_19 = func_0x180672de0(uVal_24 + 0x28);
        pU64_23 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_19;
      }
      local_98._0_8_ = pU64_23;
    }
    local_88._8_8_ = uVal_24;
    local_88._0_8_ = sz_16;
    func_0x1806aa960(pU64_23,pU64_5,sz_16);
    pU64_23[sz_16] = 0;
    pU64_23 = local_98;
    ptr4_U64_22 = &local_c8;
    func_0x1801cd600(local_78,pU64_23,ptr4_U64_22,pU64_20,&local_218,local_170,0);
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_24 = local_88._8_8_ + 1;
      lVal_19 = local_98._0_8_;
      if (0xfff < uVal_24) {
        lVal_19 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_19)) goto LAB_1802f8e4b;
        uVal_24 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_24);
    }
    uVal_24 = CONCAT44(uStack_ac,uStack_b0);
    if (0xf < uVal_24) {
      uVal_17 = uVal_24 + 1;
      ptr4_U64_21 = local_c8;
      if (0xfff < uVal_17) {
        ptr4_U64_21 = (uint64_t ****)local_c8[-1];
        if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr4_U64_21)))
        goto LAB_1802f8e4b;
        uVal_17 = uVal_24 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_21,uVal_17);
    }
    local_f8 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_f8 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_130);
    }
    pU64_20 = (uint64_t *)((int64_t)local_78 + 0xe4);
    local_208 = *pU64_20;
    uStack_200 = *(uint64_t *)((int64_t)local_78 + 0xec);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdc44) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xdc44) = 1;
      *(uint16_t *)(lVal_19 + 0xdc41) = 0x11d;
      func_0x180673140(&LAB_180364670);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_19 + 0xdc41);
    if (*(char *)(lVal_19 + 0xdc42) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x1d;
      *(uint8_t *)(lVal_19 + 0xdc42) = 0;
    }
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_c8 = (uint64_t ****)0x0;
    uStack_c0 = 0;
    uStack_b9 = 0;
    sz_16 = strlen((char *)pU8_2);
    if (-1 < (int64_t)sz_16) {
      uVal_24 = 0xf;
      if (0xf < sz_16) {
        uVal_17 = sz_16 | 0xf;
        uVal_24 = 0x16;
        if (0x16 < uVal_17) {
          uVal_24 = uVal_17;
        }
        if (uVal_17 < 0xfff) {
          local_6c = 1;
          ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_24 + 1);
          local_c8 = ptr4_U64_22;
        }
        else {
          local_6c = 1;
          ptr3_U64_18 = (uint64_t ***)func_0x180672de0(uVal_24 + 0x28);
          ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_18 + 0x27U & 0xffffffffffffffe0);
          ptr4_U64_22[-1] = ptr3_U64_18;
          local_c8 = ptr4_U64_22;
        }
      }
      uStack_b8 = (uint32_t)sz_16;
      uStack_b4 = (uint32_t)(sz_16 >> 0x20);
      uStack_b0 = (uint32_t)uVal_24;
      uStack_ac = (uint32_t)(uVal_24 >> 0x20);
      func_0x1806aa960(ptr4_U64_22,pU8_2,sz_16);
      *(uint8_t *)((int64_t)ptr4_U64_22 + sz_16) = 0;
      local_e8 = _DAT_1806c5f7a;
      uStack_e0 = (undefined7)_UNK_1806c5f82;
      uStack_d9 = 0xd7;
      uStack_d8 = 0x572;
      uStack_d6 = 0x4d;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xdc5c) == '\0') {
        lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_19 + 0xdc5c) = 1;
        func_0x18007cb80(lVal_19 + 0xdc45,&local_e8);
        func_0x180673140(&LAB_180364690);
      }
      fnPtr_1 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdc45)
      ;
      func_0x18012be40(fnPtr_1);
      local_98 = (uint8_t  [16])0x0;
      sz_16 = strlen(fnPtr_1);
      if (-1 < (int64_t)sz_16) {
        uVal_24 = 0xf;
        if (0xf < sz_16) {
          uVal_17 = sz_16 | 0xf;
          uVal_24 = 0x16;
          if (0x16 < uVal_17) {
            uVal_24 = uVal_17;
          }
          if (uVal_17 < 0xfff) {
            local_65 = 1;
            pU64_23 = (uint8_t *)func_0x180672de0(uVal_24 + 1);
          }
          else {
            local_65 = 1;
            lVal_19 = func_0x180672de0(uVal_24 + 0x28);
            pU64_23 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_23 + -8) = lVal_19;
          }
          local_98._0_8_ = pU64_23;
        }
        local_88._0_8_ = sz_16;
        local_88._8_8_ = uVal_24;
        func_0x1806aa960(pU64_23,fnPtr_1,sz_16);
        pU64_23[sz_16] = 0;
        func_0x1801cd600(local_78,local_98,&local_c8,pU64_20,&local_208,local_130,0);
        if (0xf < (uint64_t)local_88._8_8_) {
          uVal_24 = local_88._8_8_ + 1;
          lVal_19 = local_98._0_8_;
          if (0xfff < uVal_24) {
            lVal_19 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_19)) goto LAB_1802f8e4b;
            uVal_24 = local_88._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_19,uVal_24);
        }
        uVal_24 = CONCAT44(uStack_ac,uStack_b0);
        if (0xf < uVal_24) {
          uVal_17 = uVal_24 + 1;
          ptr4_U64_22 = local_c8;
          if (0xfff < uVal_17) {
            ptr4_U64_22 = (uint64_t ****)local_c8[-1];
            if (0x1f < (uint64_t)((int64_t)local_c8 + (-8 - (int64_t)ptr4_U64_22))) {
LAB_1802f8e4b:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_17 = uVal_24 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_22,uVal_17);
        }
        return local_78;
      }
      goto LAB_1802f8ee1;
    }
  }
  local_6c = 1;
  func_0x18007ba70();
LAB_1802f8ee1:
  local_65 = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_20 = (uint64_t *)(*fnPtr_7)();
  return pU64_20;
}

// Unwind@1802f8ef0
void Unwind_1802f8ef0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x140);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1802f8f60
void Unwind_1802f8f60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x180);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x148));
    *(uint64_t *)(param_2 + 0x180) = 0;
  }
  return;
}

// Unwind@1802f8fd0
void Unwind_1802f8fd0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdbfc) = 0;
  *(uint8_t *)(param_2 + 0x296) = 1;
  return;
}

// Unwind@1802f9030
void Unwind_1802f9030(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x188));
    *(uint64_t *)(param_2 + 0x1c0) = 0;
  }
  return;
}

// Unwind@1802f90a0
void Unwind_1802f90a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x200);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c8));
    *(uint64_t *)(param_2 + 0x200) = 0;
  }
  return;
}

// Unwind@1802f9110
void Unwind_1802f9110(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@1802f9160
void Unwind_1802f9160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x292) = 0;
  return;
}

// Unwind@1802f91b0
void Unwind_1802f91b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x292);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x291) = uVal_1;
  return;
}

// Unwind@1802f9200
void Unwind_1802f9200(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x291) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x140), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1802f9270
void Unwind_1802f9270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x290) = 0;
  return;
}

// Unwind@1802f92c0
void Unwind_1802f92c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x290);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x28f) = uVal_1;
  return;
}

// Unwind@1802f9310
void Unwind_1802f9310(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1802f9380
void Unwind_1802f9380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x297) = 0;
  return;
}

// Unwind@1802f93d0
void Unwind_1802f93d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x297);
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x296) = uVal_1;
  return;
}

// Unwind@1802f9420
void Unwind_1802f9420(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x296) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x180), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x148));
    *(uint64_t *)(param_2 + 0x180) = 0;
  }
  return;
}

// Unwind@1802f9490
void Unwind_1802f9490(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x295) = 0;
  return;
}

// Unwind@1802f94e0
void Unwind_1802f94e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x295);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x28e) = uVal_1;
  return;
}

// Unwind@1802f9530
void Unwind_1802f9530(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@1802f9590
void Unwind_1802f9590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x294) = 0;
  return;
}

// Unwind@1802f95e0
void Unwind_1802f95e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x294);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x28d) = uVal_1;
  return;
}

// Unwind@1802f9630
void Unwind_1802f9630(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x188));
    *(uint64_t *)(param_2 + 0x1c0) = 0;
  }
  return;
}

// Unwind@1802f96a0
void Unwind_1802f96a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x293) = 0;
  return;
}

// Unwind@1802f96f0
void Unwind_1802f96f0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x293);
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x28c) = uVal_1;
  return;
}

// Unwind@1802f9740
void Unwind_1802f9740(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x28c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1c8));
    *(uint64_t *)(param_2 + 0x200) = 0;
  }
  return;
}

// Unwind@1802f97b0
void Unwind_1802f97b0(uint64_t param_1,int64_t param_2)
{
  func_0x1800fe9f0(*(uint64_t *)(param_2 + 0x208));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x280));
  return;
}

// Unwind@1802f9800
void Unwind_1802f9800(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdba0) = 0;
  return;
}

// Unwind@1802f9860
void Unwind_1802f9860(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdc10) = 0;
  *(uint8_t *)(param_2 + 0x297) = 1;
  return;
}

// Unwind@1802f98c0
void Unwind_1802f98c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdc28) = 0;
  *(uint8_t *)(param_2 + 0x295) = 1;
  return;
}

// Unwind@1802f9920
void Unwind_1802f9920(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdc40) = 0;
  *(uint8_t *)(param_2 + 0x294) = 1;
  return;
}

// Unwind@1802f9980
void Unwind_1802f9980(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdc5c) = 0;
  *(uint8_t *)(param_2 + 0x293) = 1;
  return;
}

// Unwind@1802f9c90
void Unwind_1802f9c90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdc8c) = 0;
  return;
}

// Unwind@1802fb4a0
void Unwind_1802fb4a0(void)
{
  func_0x180672f60(&DAT_18083fde8);
  return;
}

// func_0x1802fb570
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802fb570(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  byte *_Str;
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  uint32_t uVal_8;
  uint32_t local_108;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  undefined7 uStack_f8;
  uint8_t local_e8 [56];
  uint64_t local_b0;
  uint8_t local_a8 [16];
  size_t local_98;
  uint64_t local_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78 [24];
  uint64_t *local_60;
  uint8_t local_52;
  uint8_t local_51;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_88._4_4_ = _UNK_1806c5fa8;
  local_88._0_4_ = _DAT_1806c5fa4;
  uStack_80._0_4_ = _UNK_1806c5fac;
  uStack_80._4_4_ = _UNK_1806c5fb0;
  local_78._8_8_ = local_78._0_8_;
  local_78._0_8_ = 0xb25efa0649cafa0;
  local_60 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xdca8) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0xdca8) = 1;
    func_0x18007d9e0(lVal_5 + 0xdc8d,local_88);
    func_0x180673140(&LAB_180364720);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xdc8d);
  func_0x1801c0df0(fnPtr_1);
  local_78._0_16_ = ZEXT816(0);
  _local_88 = ZEXT816(0);
  sz_3 = strlen(fnPtr_1);
  if ((int64_t)sz_3 < 0) {
    func_0x18007ba70();
LAB_1802fba8f:
    local_52 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_3 < 0x10) {
      pU64_6 = local_88;
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
      local_88 = (uint8_t  [8])pU64_6;
    }
    local_78._0_8_ = sz_3;
    local_78._8_8_ = uVal_7;
    func_0x1806aa960(pU64_6,fnPtr_1,sz_3);
    pU64_6[sz_3] = 0;
    pU64_6 = local_88;
    func_0x1801c2ba0(local_60,0,0,pU64_6);
    if (0xf < (uint64_t)local_78._8_8_) {
      uVal_7 = local_78._8_8_ + 1;
      lVal_5 = (int64_t)local_88;
      if (0xfff < uVal_7) {
        lVal_5 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_5)) goto LAB_1802fbaa9;
        uVal_7 = local_78._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_7);
    }
    *local_60 = &PTR_LAB_1806c4520;
    pU64_2 = local_60 + 0x10;
    *(uint32_t *)(local_60 + 0x10) = 0x3f800000;
    local_b0 = 0;
    uVal_8 = DAT_1806b26b4;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_b0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_e8);
      uVal_8 = *(uint32_t *)pU64_2;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdcac) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0xdcac) = 1;
      *(uint16_t *)(lVal_5 + 0xdca9) = 0x175;
      func_0x180673140(&LAB_180364750);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (byte *)(lVal_5 + 0xdca9);
    if (*(char *)(lVal_5 + 0xdcaa) == '\x01') {
      *_Str = *_Str ^ 0x75;
      *(uint8_t *)(lVal_5 + 0xdcaa) = 0;
    }
    local_78._0_16_ = ZEXT816(0);
    _local_88 = ZEXT816(0);
    sz_3 = strlen((char *)_Str);
    if ((int64_t)sz_3 < 0) goto LAB_1802fba8f;
    uVal_7 = 0xf;
    if (0xf < sz_3) {
      uVal_4 = sz_3 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_4) {
        uVal_7 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        local_52 = 1;
        pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
      }
      else {
        local_52 = 1;
        lVal_5 = func_0x180672de0(uVal_7 + 0x28);
        pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_6 + -8) = lVal_5;
      }
      local_88 = (uint8_t  [8])pU64_6;
    }
    local_78._8_8_ = uVal_7;
    local_78._0_8_ = sz_3;
    func_0x1806aa960(pU64_6,_Str,sz_3);
    pU64_6[sz_3] = 0;
    local_108 = _DAT_1806c5fbc;
    uStack_104 = _UNK_1806c5fc0;
    uStack_100 = _UNK_1806c5fc4;
    uStack_fc = CONCAT13(0x33,(int3)_UNK_1806c5fc8);
    uStack_f8 = 0x91770cc09d691c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xdcc8) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0xdcc8) = 1;
      func_0x18007d3c0(lVal_5 + 0xdcad,&local_108);
      func_0x180673140(&LAB_180364770);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xdcad);
    func_0x18036ec30(fnPtr_1);
    local_a8 = ZEXT816(0);
    sz_3 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_3) {
      if (sz_3 < 0x10) {
        pU64_6 = local_a8;
        uVal_7 = 0xf;
      }
      else {
        uVal_4 = sz_3 | 0xf;
        uVal_7 = 0x16;
        if (0x16 < uVal_4) {
          uVal_7 = uVal_4;
        }
        if (uVal_4 < 0xfff) {
          local_51 = 1;
          pU64_6 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
        }
        else {
          local_51 = 1;
          lVal_5 = func_0x180672de0(uVal_7 + 0x28);
          pU64_6 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_6 + -8) = lVal_5;
        }
        local_a8._0_8_ = pU64_6;
      }
      local_98 = sz_3;
      local_90 = uVal_7;
      func_0x1806aa960(pU64_6,fnPtr_1,sz_3);
      pU64_6[sz_3] = 0;
      func_0x1801cd2e0(local_60,local_a8,local_88,pU64_2,uVal_8,0x3dcccccd,0x40a00000,local_e8,0);
      if (0xf < local_90) {
        uVal_7 = local_90 + 1;
        lVal_5 = local_a8._0_8_;
        if (0xfff < uVal_7) {
          lVal_5 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_5)) goto LAB_1802fbaa9;
          uVal_7 = local_90 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_7);
      }
      if (0xf < (uint64_t)local_78._8_8_) {
        uVal_7 = local_78._8_8_ + 1;
        lVal_5 = (int64_t)local_88;
        if (0xfff < uVal_7) {
          lVal_5 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_5)) goto LAB_1802fbaa9;
          uVal_7 = local_78._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_7);
      }
      return local_60;
    }
  }
  local_51 = 1;
  func_0x18007ba70();
LAB_1802fbaa9:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1802fbab0
void Unwind_1802fbab0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xa8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x70));
    *(uint64_t *)(param_2 + 0xa8) = 0;
  }
  return;
}

// Unwind@1802fbb00
void Unwind_1802fbb00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1802fbb40
void Unwind_1802fbb40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  *(uint8_t *)(param_2 + 0x107) = 0;
  return;
}

// Unwind@1802fbb80
void Unwind_1802fbb80(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x107);
  func_0x180001e70(param_2 + 0xd0);
  *(uint8_t *)(param_2 + 0x106) = uVal_1;
  return;
}

// Unwind@1802fbbd0
void Unwind_1802fbbd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x106) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xa8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x70));
    *(uint64_t *)(param_2 + 0xa8) = 0;
  }
  return;
}

// Unwind@1802fbc30
void Unwind_1802fbc30(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xf8));
  return;
}

// Unwind@1802fbc70
void Unwind_1802fbc70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdca8) = 0;
  return;
}

// Unwind@1802fbcc0
void Unwind_1802fbcc0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdcc8) = 0;
  *(uint8_t *)(param_2 + 0x107) = 1;
  return;
}

// Unwind@1802fbe70
void Unwind_1802fbe70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdcdc) = 0;
  return;
}

// Unwind@1802fc000
void Unwind_1802fc000(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdcf8) = 0;
  return;
}

// func_0x1802fc040 - decompilation failed



// Unwind@18030b380
void Unwind_18030b380(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe894) = 0;
  *(uint8_t *)(param_2 + 0x15eb) = 1;
  return;
}

// Unwind@18030b3e0
void Unwind_18030b3e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe810) = 0;
  *(uint8_t *)(param_2 + 0x15ec) = 1;
  return;
}

// Unwind@18030b440
void Unwind_18030b440(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe7c0) = 0;
  *(uint8_t *)(param_2 + 0x15ed) = 1;
  return;
}

// Unwind@18030b4a0
void Unwind_18030b4a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe78c) = 0;
  *(uint8_t *)(param_2 + 0x15ef) = 1;
  return;
}

// Unwind@18030b500
void Unwind_18030b500(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe778) = 0;
  *(uint8_t *)(param_2 + 0x15ee) = 1;
  return;
}

// Unwind@18030b560
void Unwind_18030b560(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe74c) = 0;
  *(uint8_t *)(param_2 + 0x15f1) = 1;
  return;
}

// Unwind@18030b5c0
void Unwind_18030b5c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe738) = 0;
  *(uint8_t *)(param_2 + 0x15f0) = 1;
  return;
}

// Unwind@18030b620
void Unwind_18030b620(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe714) = 0;
  *(uint8_t *)(param_2 + 0x15f3) = 1;
  return;
}

// Unwind@18030b680
void Unwind_18030b680(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe700) = 0;
  *(uint8_t *)(param_2 + 0x15f2) = 1;
  return;
}

// Unwind@18030b6e0
void Unwind_18030b6e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe6e0) = 0;
  *(uint8_t *)(param_2 + 0x15f4) = 1;
  return;
}

// Unwind@18030b740
void Unwind_18030b740(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe674) = 0;
  *(uint8_t *)(param_2 + 0x15f5) = 1;
  return;
}

// Unwind@18030b7a0
void Unwind_18030b7a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe658) = 0;
  *(uint8_t *)(param_2 + 0x15f6) = 1;
  return;
}

// Unwind@18030b800
void Unwind_18030b800(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe63c) = 0;
  *(uint8_t *)(param_2 + 0x15f7) = 1;
  return;
}

// Unwind@18030b860
void Unwind_18030b860(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe620) = 0;
  *(uint8_t *)(param_2 + 0x15f8) = 1;
  return;
}

// Unwind@18030b8c0
void Unwind_18030b8c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe604) = 0;
  *(uint8_t *)(param_2 + 0x15f9) = 1;
  return;
}

// Unwind@18030b920
void Unwind_18030b920(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe5cc) = 0;
  *(uint8_t *)(param_2 + 0x15fb) = 1;
  return;
}

// Unwind@18030b980
void Unwind_18030b980(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe5b8) = 0;
  *(uint8_t *)(param_2 + 0x15fa) = 1;
  return;
}

// Unwind@18030b9e0
void Unwind_18030b9e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe574) = 0;
  *(uint8_t *)(param_2 + 0x15fd) = 1;
  return;
}

// Unwind@18030ba40
void Unwind_18030ba40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe560) = 0;
  *(uint8_t *)(param_2 + 0x15fc) = 1;
  return;
}

// Unwind@18030baa0
void Unwind_18030baa0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe534) = 0;
  *(uint8_t *)(param_2 + 0x15fe) = 1;
  return;
}

// Unwind@18030bb00
void Unwind_18030bb00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe514) = 0;
  *(uint8_t *)(param_2 + 0x15ff) = 1;
  return;
}

// Unwind@18030bb60
void Unwind_18030bb60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe4fc) = 0;
  *(uint8_t *)(param_2 + 0x1601) = 1;
  return;
}

// Unwind@18030bbc0
void Unwind_18030bbc0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe4e4) = 0;
  *(uint8_t *)(param_2 + 0x1600) = 1;
  return;
}

// Unwind@18030bc20
void Unwind_18030bc20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe4b0) = 0;
  *(uint8_t *)(param_2 + 0x1603) = 1;
  return;
}

// Unwind@18030bc80
void Unwind_18030bc80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe49c) = 0;
  *(uint8_t *)(param_2 + 0x1602) = 1;
  return;
}

// Unwind@18030bce0
void Unwind_18030bce0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe46c) = 0;
  *(uint8_t *)(param_2 + 0x1604) = 1;
  return;
}

// Unwind@18030bd40
void Unwind_18030bd40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe450) = 0;
  *(uint8_t *)(param_2 + 0x1606) = 1;
  return;
}

// Unwind@18030bda0
void Unwind_18030bda0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe43c) = 0;
  *(uint8_t *)(param_2 + 0x1605) = 1;
  return;
}

// Unwind@18030be00
void Unwind_18030be00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe414) = 0;
  *(uint8_t *)(param_2 + 0x1608) = 1;
  return;
}

// Unwind@18030be60
void Unwind_18030be60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe400) = 0;
  *(uint8_t *)(param_2 + 0x1607) = 1;
  return;
}

// Unwind@18030bec0
void Unwind_18030bec0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe3d8) = 0;
  *(uint8_t *)(param_2 + 0x1609) = 1;
  return;
}

// Unwind@18030bf20
void Unwind_18030bf20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe3bc) = 0;
  *(uint8_t *)(param_2 + 0x160a) = 1;
  return;
}

// Unwind@18030bf80
void Unwind_18030bf80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe388) = 0;
  *(uint8_t *)(param_2 + 0x160c) = 1;
  return;
}

// Unwind@18030bfe0
void Unwind_18030bfe0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe374) = 0;
  *(uint8_t *)(param_2 + 0x160b) = 1;
  return;
}

// Unwind@18030c040
void Unwind_18030c040(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe33c) = 0;
  *(uint8_t *)(param_2 + 0x160d) = 1;
  return;
}

// Unwind@18030c0a0
void Unwind_18030c0a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe30c) = 0;
  *(uint8_t *)(param_2 + 0x160e) = 1;
  return;
}

// Unwind@18030c100
void Unwind_18030c100(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe2f0) = 0;
  *(uint8_t *)(param_2 + 0x1610) = 1;
  return;
}

// Unwind@18030c160
void Unwind_18030c160(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe2dc) = 0;
  *(uint8_t *)(param_2 + 0x160f) = 1;
  return;
}

// Unwind@18030c1c0
void Unwind_18030c1c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe2b4) = 0;
  *(uint8_t *)(param_2 + 0x1612) = 1;
  return;
}

// Unwind@18030c220
void Unwind_18030c220(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe2a0) = 0;
  *(uint8_t *)(param_2 + 0x1611) = 1;
  return;
}

// Unwind@18030c280
void Unwind_18030c280(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe278) = 0;
  *(uint8_t *)(param_2 + 0x1613) = 1;
  return;
}

// Unwind@18030c2e0
void Unwind_18030c2e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe25c) = 0;
  *(uint8_t *)(param_2 + 0x1614) = 1;
  return;
}

// Unwind@18030c340
void Unwind_18030c340(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe224) = 0;
  *(uint8_t *)(param_2 + 0x1616) = 1;
  return;
}

// Unwind@18030c3a0
void Unwind_18030c3a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe210) = 0;
  *(uint8_t *)(param_2 + 0x1615) = 1;
  return;
}

// Unwind@18030c400
void Unwind_18030c400(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe1ec) = 0;
  *(uint8_t *)(param_2 + 0x1618) = 1;
  return;
}

// Unwind@18030c460
void Unwind_18030c460(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe1d8) = 0;
  *(uint8_t *)(param_2 + 0x1617) = 1;
  return;
}

// Unwind@18030c4c0
void Unwind_18030c4c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe198) = 0;
  *(uint8_t *)(param_2 + 0x161a) = 1;
  return;
}

// Unwind@18030c520
void Unwind_18030c520(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe17c) = 0;
  *(uint8_t *)(param_2 + 0x1619) = 1;
  return;
}

// Unwind@18030c580
void Unwind_18030c580(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe15c) = 0;
  *(uint8_t *)(param_2 + 0x161b) = 1;
  return;
}

// Unwind@18030c5e0
void Unwind_18030c5e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe140) = 0;
  *(uint8_t *)(param_2 + 0x161c) = 1;
  return;
}

// Unwind@18030c640
void Unwind_18030c640(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe124) = 0;
  *(uint8_t *)(param_2 + 0x161d) = 1;
  return;
}

// Unwind@18030c6a0
void Unwind_18030c6a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe0f8) = 0;
  *(uint8_t *)(param_2 + 0x161e) = 1;
  return;
}

// Unwind@18030c700
void Unwind_18030c700(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe0cc) = 0;
  *(uint8_t *)(param_2 + 0x161f) = 1;
  return;
}

// Unwind@18030c760
void Unwind_18030c760(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe098) = 0;
  *(uint8_t *)(param_2 + 0x1620) = 1;
  return;
}

// Unwind@18030c7c0
void Unwind_18030c7c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe02c) = 0;
  *(uint8_t *)(param_2 + 0x1622) = 1;
  return;
}

// Unwind@18030c820
void Unwind_18030c820(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe014) = 0;
  *(uint8_t *)(param_2 + 0x1621) = 1;
  return;
}

// Unwind@18030c880
void Unwind_18030c880(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdff4) = 0;
  *(uint8_t *)(param_2 + 0x1624) = 1;
  return;
}

// Unwind@18030c8e0
void Unwind_18030c8e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdfdc) = 0;
  *(uint8_t *)(param_2 + 0x1623) = 1;
  return;
}

// Unwind@18030c940
void Unwind_18030c940(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdfac) = 0;
  *(uint8_t *)(param_2 + 0x1626) = 1;
  return;
}

// Unwind@18030c9a0
void Unwind_18030c9a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdf98) = 0;
  *(uint8_t *)(param_2 + 0x1625) = 1;
  return;
}

// Unwind@18030ca00
void Unwind_18030ca00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdf7c) = 0;
  *(uint8_t *)(param_2 + 0x1628) = 1;
  return;
}

// Unwind@18030ca60
void Unwind_18030ca60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdf68) = 0;
  *(uint8_t *)(param_2 + 0x1627) = 1;
  return;
}

// Unwind@18030cac0
void Unwind_18030cac0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdf3c) = 0;
  *(uint8_t *)(param_2 + 0x162a) = 1;
  return;
}

// Unwind@18030cb20
void Unwind_18030cb20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdf28) = 0;
  *(uint8_t *)(param_2 + 0x1629) = 1;
  return;
}

// Unwind@18030cb80
void Unwind_18030cb80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdeec) = 0;
  *(uint8_t *)(param_2 + 0x162b) = 1;
  return;
}

// Unwind@18030cbe0
void Unwind_18030cbe0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdea4) = 0;
  *(uint8_t *)(param_2 + 0x162c) = 1;
  return;
}

// Unwind@18030cc40
void Unwind_18030cc40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xde70) = 0;
  *(uint8_t *)(param_2 + 0x162d) = 1;
  return;
}

// Unwind@18030cca0
void Unwind_18030cca0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xde54) = 0;
  *(uint8_t *)(param_2 + 0x162e) = 1;
  return;
}

// Unwind@18030cd00
void Unwind_18030cd00(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xde0c) = 0;
  *(uint8_t *)(param_2 + 0x162f) = 1;
  return;
}

// Unwind@18030cd60
void Unwind_18030cd60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdd34) = 0;
  return;
}

// Unwind@18030cdc0
void Unwind_18030cdc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  return;
}

// Unwind@18030ce10
void Unwind_18030ce10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1348);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1310));
    *(uint64_t *)(param_2 + 0x1348) = 0;
  }
  return;
}

// Unwind@18030ce80
void Unwind_18030ce80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2b8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x280));
    *(uint64_t *)(param_2 + 0x2b8) = 0;
  }
  return;
}

// Unwind@18030cef0
void Unwind_18030cef0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1308);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x12d0));
    *(uint64_t *)(param_2 + 0x1308) = 0;
  }
  return;
}

// Unwind@18030cf60
void Unwind_18030cf60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x12c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1290));
    *(uint64_t *)(param_2 + 0x12c8) = 0;
  }
  return;
}

// Unwind@18030cfd0
void Unwind_18030cfd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1288);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1250));
    *(uint64_t *)(param_2 + 0x1288) = 0;
  }
  return;
}

// Unwind@18030d040
void Unwind_18030d040(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1248);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1210));
    *(uint64_t *)(param_2 + 0x1248) = 0;
  }
  return;
}

// Unwind@18030d0b0
void Unwind_18030d0b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1208);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x11d0));
    *(uint64_t *)(param_2 + 0x1208) = 0;
  }
  return;
}

// Unwind@18030d120
void Unwind_18030d120(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x11c8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1190));
    *(uint64_t *)(param_2 + 0x11c8) = 0;
  }
  return;
}

// Unwind@18030d190
void Unwind_18030d190(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1188);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1150));
    *(uint64_t *)(param_2 + 0x1188) = 0;
  }
  return;
}

// Unwind@18030d200
void Unwind_18030d200(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1148);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1110));
    *(uint64_t *)(param_2 + 0x1148) = 0;
  }
  return;
}

// Unwind@18030d270
void Unwind_18030d270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1460);
  return;
}

// Unwind@18030d2c0
void Unwind_18030d2c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  return;
}

// Unwind@18030d310
void Unwind_18030d310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15eb) = 0;
  return;
}

// Unwind@18030d360
void Unwind_18030d360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1541) = 0;
  return;
}

// Unwind@18030d3b0
void Unwind_18030d3b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1542) = 0;
  return;
}

// Unwind@18030d400
void Unwind_18030d400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x15ef) = 0;
  return;
}

// Unwind@18030d450
void Unwind_18030d450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x15f1) = 0;
  return;
}

// Unwind@18030d4a0
void Unwind_18030d4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15f3) = 0;
  return;
}

// Unwind@18030d4f0
void Unwind_18030d4f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15f4) = 0;
  return;
}

// Unwind@18030d540
void Unwind_18030d540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15f5) = 0;
  return;
}

// Unwind@18030d590
void Unwind_18030d590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15f6) = 0;
  return;
}

// Unwind@18030d5e0
void Unwind_18030d5e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15f7) = 0;
  return;
}

// Unwind@18030d630
void Unwind_18030d630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15f8) = 0;
  return;
}

// Unwind@18030d680
void Unwind_18030d680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15f9) = 0;
  return;
}

// Unwind@18030d6d0
void Unwind_18030d6d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x154a) = 0;
  return;
}

// Unwind@18030d720
void Unwind_18030d720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x15fb) = 0;
  return;
}

// Unwind@18030d770
void Unwind_18030d770(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x15fd) = 0;
  return;
}

// Unwind@18030d7c0
void Unwind_18030d7c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15fe) = 0;
  return;
}

// Unwind@18030d810
void Unwind_18030d810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x15ff) = 0;
  return;
}

// Unwind@18030d860
void Unwind_18030d860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1601) = 0;
  return;
}

// Unwind@18030d8b0
void Unwind_18030d8b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1603) = 0;
  return;
}

// Unwind@18030d900
void Unwind_18030d900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x154d) = 0;
  return;
}

// Unwind@18030d950
void Unwind_18030d950(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1606) = 0;
  return;
}

// Unwind@18030d9a0
void Unwind_18030d9a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1608) = 0;
  return;
}

// Unwind@18030d9f0
void Unwind_18030d9f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1609) = 0;
  return;
}

// Unwind@18030da40
void Unwind_18030da40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x160a) = 0;
  return;
}

// Unwind@18030da90
void Unwind_18030da90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1551) = 0;
  return;
}

// Unwind@18030dae0
void Unwind_18030dae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x160c) = 0;
  return;
}

// Unwind@18030db30
void Unwind_18030db30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1552) = 0;
  return;
}

// Unwind@18030db80
void Unwind_18030db80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1553) = 0;
  return;
}

// Unwind@18030dbd0
void Unwind_18030dbd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1610) = 0;
  return;
}

// Unwind@18030dc20
void Unwind_18030dc20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1612) = 0;
  return;
}

// Unwind@18030dc70
void Unwind_18030dc70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1613) = 0;
  return;
}

// Unwind@18030dcc0
void Unwind_18030dcc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1614) = 0;
  return;
}

// Unwind@18030dd10
void Unwind_18030dd10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1557) = 0;
  return;
}

// Unwind@18030dd60
void Unwind_18030dd60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1616) = 0;
  return;
}

// Unwind@18030ddb0
void Unwind_18030ddb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1618) = 0;
  return;
}

// Unwind@18030de00
void Unwind_18030de00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x161a) = 0;
  return;
}

// Unwind@18030de50
void Unwind_18030de50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x161b) = 0;
  return;
}

// Unwind@18030dea0
void Unwind_18030dea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x161c) = 0;
  return;
}

// Unwind@18030def0
void Unwind_18030def0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x161d) = 0;
  return;
}

// Unwind@18030df40
void Unwind_18030df40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x155c) = 0;
  return;
}

// Unwind@18030df90
void Unwind_18030df90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x161e) = 0;
  return;
}

// Unwind@18030dfe0
void Unwind_18030dfe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x155e) = 0;
  return;
}

// Unwind@18030e030
void Unwind_18030e030(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1620) = 0;
  return;
}

// Unwind@18030e080
void Unwind_18030e080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1622) = 0;
  return;
}

// Unwind@18030e0d0
void Unwind_18030e0d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1624) = 0;
  return;
}

// Unwind@18030e120
void Unwind_18030e120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1626) = 0;
  return;
}

// Unwind@18030e170
void Unwind_18030e170(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1628) = 0;
  return;
}

// Unwind@18030e1c0
void Unwind_18030e1c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x162a) = 0;
  return;
}

// Unwind@18030e210
void Unwind_18030e210(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1560) = 0;
  return;
}

// Unwind@18030e260
void Unwind_18030e260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1561) = 0;
  return;
}

// Unwind@18030e2b0
void Unwind_18030e2b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x162d) = 0;
  return;
}

// Unwind@18030e300
void Unwind_18030e300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x162e) = 0;
  return;
}

// Unwind@18030e350
void Unwind_18030e350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x1565) = 0;
  return;
}

// Unwind@18030e3a0
void Unwind_18030e3a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  *(uint8_t *)(param_2 + 0x1566) = 0;
  return;
}

// Unwind@18030e3f0
void Unwind_18030e3f0(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x210);
  return;
}

// Unwind@18030e440
void Unwind_18030e440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  *(uint8_t *)(param_2 + 0x156f) = 0;
  return;
}

// Unwind@18030e490
void Unwind_18030e490(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  return;
}

// Unwind@18030e4e0
void Unwind_18030e4e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1570);
  return;
}

// Unwind@18030e530
void Unwind_18030e530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x14d0);
  return;
}
