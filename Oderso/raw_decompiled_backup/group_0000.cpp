#include <oderso/compat.h>
#include <oderso/decls.h>

// func_0x180001110
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint8_t (*func_0x180001110(uint8_t (*param_1)[16],uint8_t (*param_2)[16]))[16]
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t *pU64_3;
  uint8_t *pU64_4;
  func_ptr_t fnPtr_5;
  uint8_t *pU64_6;
  uint8_t uVal_7;
  char ch_8;
  int iVal_9;
  size_t sz_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint8_t (*pArr16_15)[16];
  uint8_t (*pArr16_16)[16];
  uint8_t (*pArr16_17)[16];
  uint64_t *pU64_18;
  uint64_t uVal_19;
  uint64_t *pU64_20;
  bool bFlag_21;
  int64_t local_b8;
  int64_t *local_b0;
  uint64_t *local_98;
  uint64_t local_90;
  uint8_t *local_88;
  uint8_t *local_80;
  uint8_t (*local_78)[16];
  uint8_t (*local_70)[16];
  uint8_t local_68 [16];
  uint64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = (uint8_t  [16])0x0;
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  local_78 = param_1 + 2;
  local_88 = param_1[3] + 8;
  param_1[2] = (uint8_t  [16])0x0;
  param_1[3] = (uint8_t  [16])0x0;
  param_1[4] = (uint8_t  [16])0x0;
  *(uint8_t (*)[16])(param_1[4] + 9) = (uint8_t  [16])0x0;
  local_70 = param_1;
  if (param_1 != param_2) {
    uVal_19 = *(uint64_t *)param_2[1];
    pArr16_15 = param_2;
    if (0xf < *(uint64_t *)(param_2[1] + 8)) {
      pArr16_15 = *(uint8_t (**)[16])*param_2;
    }
    if (uVal_19 < 0x10) {
      *(uint64_t *)param_1[1] = uVal_19;
      func_0x1806aa960(param_1,pArr16_15,uVal_19);
      (*param_1)[uVal_19] = 0;
    }
    else {
      func_0x18007bba0(param_1,uVal_19);
    }
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x18) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x18) = 1;
    *(uint64_t *)(lVal_11 + 8) = 0x3c1c3b07a0a4e46b;
    *(uint32_t *)(lVal_11 + 0x10) = 0xb6b5fc31;
    *(uint16_t *)(lVal_11 + 0x14) = 0x173;
    func_0x180673140(&LAB_18007bca0);
  }
  pArr16_15 = local_70;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_3 = (uint64_t *)(lVal_11 + 8);
  if (*(char *)(lVal_11 + 0x15) == '\x01') {
    *pU64_3 = *pU64_3 ^ 0x5f694973d3c78945;
    *(uint *)(lVal_11 + 0x10) = *(uint *)(lVal_11 + 0x10) ^ 0xd3c78945;
    *(byte *)(lVal_11 + 0x14) = *(byte *)(lVal_11 + 0x14) ^ 0x73;
    *(uint8_t *)(lVal_11 + 0x15) = 0;
  }
  local_68 = (uint8_t  [16])0x0;
  sz_10 = strlen((char *)pU64_3);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
    goto LAB_180001b49;
  }
  if (sz_10 < 0x10) {
    uVal_19 = 0xf;
    pU64_20 = (uint64_t *)local_68;
  }
  else {
    uVal_12 = sz_10 | 0xf;
    uVal_19 = 0x16;
    if (0x16 < uVal_12) {
      uVal_19 = uVal_12;
    }
    if (uVal_12 < 0xfff) {
      pU64_20 = (uint64_t *)func_0x180672de0(uVal_19 + 1);
    }
    else {
      lVal_11 = func_0x180672de0(uVal_19 + 0x28);
      pU64_20 = (uint64_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
      pU64_20[-1] = lVal_11;
    }
    local_68._0_8_ = pU64_20;
    pArr16_15 = local_70;
  }
  local_58 = sz_10;
  uStack_50 = uVal_19;
  func_0x1806aa960(pU64_20,pU64_3,sz_10);
  *(uint8_t *)((int64_t)pU64_20 + sz_10) = 0;
  uVal_19 = uStack_50;
  pU64_20 = (uint64_t *)local_68._0_8_;
  if (*(uint64_t *)pArr16_15[1] < local_58) {
    bFlag_21 = false;
  }
  else {
    pU64_18 = (uint64_t *)local_68;
    if (0xf < uStack_50) {
      pU64_18 = (uint64_t *)local_68._0_8_;
    }
    pArr16_16 = pArr16_15;
    if (0xf < *(uint64_t *)(pArr16_15[1] + 8)) {
      pArr16_16 = *(uint8_t (**)[16])*pArr16_15;
    }
    iVal_9 = memcmp((void *)((int64_t)pArr16_16 + (*(uint64_t *)pArr16_15[1] - local_58)),pU64_18,
                   local_58);
    bFlag_21 = iVal_9 == 0;
  }
  if (0xf < uVal_19) {
    uVal_12 = uVal_19 + 1;
    pU64_18 = pU64_20;
    if (0xfff < uVal_12) {
      pU64_18 = (uint64_t *)pU64_20[-1];
      if (0x1f < (uint64_t)((int64_t)pU64_20 + (-8 - (int64_t)pU64_18))) goto LAB_180001b49;
      uVal_12 = uVal_19 + 0x28;
    }
    thunk_FUN_180695dd0(pU64_18,uVal_12);
  }
  pArr16_16 = pArr16_15 + 5;
  pU64_4 = pArr16_15[5] + 2;
  local_80 = pArr16_15[5] + 4;
  if (bFlag_21) {
    pArr16_15[5][7] = 1;
    func_0x1800bf640(local_68,param_2);
    if (local_58 != 0) {
      local_98 = (uint64_t *)local_68;
      if (0xf < uStack_50) {
        local_98 = (uint64_t *)local_68._0_8_;
      }
      local_90 = local_58;
      func_0x180101c70(&local_b8,&local_98,0);
      func_0x18010c9b0(&local_98,&local_b8);
      if (local_98 != (uint64_t *)0x0) {
        uVal_7 = func_0x180001ed0(local_98,pArr16_16,pU64_4,local_80,local_78,local_88);
        local_70[5][6] = uVal_7;
        if (local_98 != (uint64_t *)0x0) {
          (**(func_ptr_t *)*local_98)(local_98,1);
        }
      }
    }
    pArr16_15 = local_70;
    if (uStack_50 < 0x10) {
      return local_70;
    }
    uVal_19 = uStack_50 + 1;
    lVal_11 = local_68._0_8_;
    if (0xfff < uVal_19) {
      lVal_11 = *(int64_t *)(local_68._0_8_ + -8);
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_11)) goto LAB_180001b49;
      uVal_19 = uStack_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_19);
    return pArr16_15;
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x2c) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x2c) = 1;
    *(uint64_t *)(lVal_11 + 0x20) = 0x1b34a0f00fca3521;
    *(uint32_t *)(lVal_11 + 0x28) = 0x1a33a66;
    func_0x180673140(&LAB_18007bcd0);
  }
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_3 = (uint64_t *)(lVal_11 + 0x20);
  if (*(char *)(lVal_11 + 0x2b) == '\x01') {
    *pU64_3 = *pU64_3 ^ 0x6f55cd957ba3590f;
    *(uint *)(lVal_11 + 0x28) =
         (*(uint *)(lVal_11 + 0x28) & 0xffff | (uint)*(byte *)(lVal_11 + 0x2a) << 0x10) ^
         SUB164(_DAT_1806ae010,0);
  }
  local_68 = (uint8_t  [16])0x0;
  sz_10 = strlen((char *)pU64_3);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_180001b51:
    func_0x18007ba70();
LAB_180001b57:
    func_0x18007ba70();
    fnPtr_5 = (func_ptr_t )swi(3);
    pArr16_15 = (uint8_t (*)[16])(*fnPtr_5)();
    return pArr16_15;
  }
  if (sz_10 < 0x10) {
    uVal_19 = 0xf;
    pU64_20 = (uint64_t *)local_68;
  }
  else {
    uVal_12 = sz_10 | 0xf;
    uVal_19 = 0x16;
    if (0x16 < uVal_12) {
      uVal_19 = uVal_12;
    }
    if (uVal_12 < 0xfff) {
      pU64_20 = (uint64_t *)func_0x180672de0(uVal_19 + 1);
    }
    else {
      lVal_11 = func_0x180672de0(uVal_19 + 0x28);
      pU64_20 = (uint64_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
      pU64_20[-1] = lVal_11;
    }
    local_68._0_8_ = pU64_20;
  }
  local_58 = sz_10;
  uStack_50 = uVal_19;
  func_0x1806aa960(pU64_20,pU64_3,sz_10);
  pArr16_15 = local_70;
  *(uint8_t *)((int64_t)pU64_20 + sz_10) = 0;
  uVal_19 = uStack_50;
  pU64_20 = (uint64_t *)local_68._0_8_;
  if (*(uint64_t *)local_70[1] < local_58) {
    bFlag_21 = false;
    if (0xf < uStack_50) goto LAB_180001656;
LAB_180001560:
    if (!bFlag_21) goto LAB_180001694;
LAB_180001569:
    pArr16_15[5][8] = 1;
    local_68 = (uint8_t  [16])0x0;
    local_58 = 0;
    uStack_50 = 0xf;
    func_0x1800d60c0(&local_b8,param_2,local_68);
    pU64_6 = local_88;
    if (0xf < uStack_50) {
      uVal_19 = uStack_50 + 1;
      lVal_11 = local_68._0_8_;
      if (0xfff < uVal_19) {
        lVal_11 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_11)) {
LAB_180001b49:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_19 = uStack_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_19);
    }
    pArr16_15 = local_70;
    if (((local_b8 == 0) || (lVal_11 = *(int64_t *)(local_b8 + 0x20), lVal_11 == 0)) ||
       (*(char *)(lVal_11 + 8) != '\n')) goto LAB_1800019e9;
    uVal_7 = func_0x180004a90(lVal_11,pArr16_16,pU64_4,local_80,local_78,pU64_6);
  }
  else {
    pU64_18 = (uint64_t *)local_68;
    if (0xf < uStack_50) {
      pU64_18 = (uint64_t *)local_68._0_8_;
    }
    pArr16_17 = local_70;
    if (0xf < *(uint64_t *)(local_70[1] + 8)) {
      pArr16_17 = *(uint8_t (**)[16])*local_70;
    }
    iVal_9 = memcmp((void *)((int64_t)pArr16_17 + (*(uint64_t *)local_70[1] - local_58)),pU64_18,
                   local_58);
    bFlag_21 = iVal_9 == 0;
    if (uVal_19 < 0x10) goto LAB_180001560;
LAB_180001656:
    uVal_12 = uVal_19 + 1;
    pU64_18 = pU64_20;
    if (0xfff < uVal_12) {
      pU64_18 = (uint64_t *)pU64_20[-1];
      if (0x1f < (uint64_t)((int64_t)pU64_20 + (-8 - (int64_t)pU64_18))) goto LAB_180001b49;
      uVal_12 = uVal_19 + 0x28;
    }
    thunk_FUN_180695dd0(pU64_18,uVal_12);
    if (bFlag_21) goto LAB_180001569;
LAB_180001694:
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x3c) = 1;
      *(uint8_t *)(lVal_11 + 0x3a) = 1;
      *(uint64_t *)(lVal_11 + 0x30) = 0xa6fb9ae45213fee2;
      *(uint16_t *)(lVal_11 + 0x38) = 0x9dd2;
      func_0x180673140(&LAB_18007bd00);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_11 + 0x30);
    if (*(char *)(lVal_11 + 0x3a) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xcf8ffb89377b9db1;
      *(byte *)(lVal_11 + 0x38) = *(byte *)(lVal_11 + 0x38) ^ 0xb1;
      *(byte *)(lVal_11 + 0x39) = *(byte *)(lVal_11 + 0x39) ^ 0x9d;
      *(uint8_t *)(lVal_11 + 0x3a) = 0;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_180001b51;
    if (sz_10 < 0x10) {
      uVal_19 = 0xf;
      pU64_20 = (uint64_t *)local_68;
    }
    else {
      uVal_12 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_20 = (uint64_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_19 + 0x28);
        pU64_20 = (uint64_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        pU64_20[-1] = lVal_11;
      }
      local_68._0_8_ = pU64_20;
    }
    local_58 = sz_10;
    uStack_50 = uVal_19;
    func_0x1806aa960(pU64_20,pU64_3,sz_10);
    *(uint8_t *)((int64_t)pU64_20 + sz_10) = 0;
    func_0x1800d60c0(&local_b8,param_2,local_68);
    pArr16_15 = local_70;
    if (0xf < uStack_50) {
      uVal_19 = uStack_50 + 1;
      lVal_11 = local_68._0_8_;
      if (0xfff < uVal_19) {
        lVal_11 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_11)) goto LAB_180001b49;
        uVal_19 = uStack_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_19);
    }
    if (((local_b8 == 0) || (lVal_11 = *(int64_t *)(local_b8 + 0x20), lVal_11 == 0)) ||
       (*(char *)(lVal_11 + 8) != '\n')) goto LAB_1800019e9;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x48) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x48) = 1;
      *(uint64_t *)(lVal_13 + 0x40) = 0x1afc62afc266199;
      func_0x180673140(&LAB_18007bd30);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_13 + 0x40);
    if (*(char *)(lVal_13 + 0x47) == '\x01') {
      *pU64_3 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0x45) << 8,*(uint32_t *)pU64_3) |
                (uint64_t)*(byte *)(lVal_13 + 0x44) << 0x20) ^ SUB168(_DAT_1806ae020,0);
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_180001b57;
    uVal_19 = 0xf;
    pU64_20 = (uint64_t *)local_68;
    if (0xf < sz_10) {
      uVal_12 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_12) {
        uVal_19 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_20 = (uint64_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_19 + 0x28);
        pU64_20 = (uint64_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        pU64_20[-1] = lVal_13;
      }
      local_68._0_8_ = pU64_20;
    }
    local_58 = sz_10;
    uStack_50 = uVal_19;
    func_0x1806aa960(pU64_20,pU64_3,sz_10);
    *(uint8_t *)((int64_t)pU64_20 + sz_10) = 0;
    ch_8 = func_0x1800d73d0(lVal_11,local_68);
    pArr16_15 = local_78;
    if (0xf < uStack_50) {
      uVal_19 = uStack_50 + 1;
      lVal_13 = local_68._0_8_;
      if (0xfff < uVal_19) {
        lVal_13 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_13)) goto LAB_180001b49;
        uVal_19 = uStack_50 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_19);
    }
    if (ch_8 == '\0') {
      uVal_14 = func_0x18001eef0();
      uVal_14 = func_0x18001ef80(uVal_14);
      func_0x180001060(local_68,uVal_14);
      ch_8 = func_0x1800d73d0(lVal_11,local_68);
      func_0x180001e70(local_68);
      pArr16_15 = local_70;
      if (ch_8 == '\0') goto LAB_1800019e9;
      uVal_7 = func_0x18001efb0(lVal_11,pArr16_16,pU64_4,local_80,local_78,local_88);
    }
    else {
      uVal_7 = func_0x18001def0(lVal_11,pArr16_16,pU64_4,local_80,pArr16_15);
    }
  }
  local_70[5][6] = uVal_7;
  pArr16_15 = local_70;
LAB_1800019e9:
  if (local_b0 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_b0 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_b0)(local_b0);
      LOCK();
      pInt_2 = (int *)((int64_t)local_b0 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_b0 + 8))(local_b0);
      }
    }
  }
  return pArr16_15;
}

// Unwind@180001b60
void Unwind_180001b60(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x50);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@180001bb0
void Unwind_180001bb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180001bf0
void Unwind_180001bf0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  return;
}

// Unwind@180001c30
void Unwind_180001c30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180001c70
void Unwind_180001c70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180001cb0
void Unwind_180001cb0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x30);
  return;
}

// Unwind@180001cf0
void Unwind_180001cf0(uint64_t param_1,int64_t param_2)
{
  func_0x1800348f0(*(uint64_t *)(param_2 + 0x60));
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x70));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x78));
  return;
}

// Unwind@180001d40
void Unwind_180001d40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180001d80
void Unwind_180001d80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// func_0x180001dc0
uint64_t * func_0x180001dc0(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  uint64_t *pU64_2;
  
  if (param_1 != param_2) {
    uVal_1 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if ((uint64_t)param_1[3] < uVal_1) {
      func_0x18007bba0(param_1,uVal_1);
    }
    else {
      pU64_2 = param_1;
      if (0xf < (uint64_t)param_1[3]) {
        pU64_2 = (uint64_t *)*param_1;
      }
      param_1[2] = uVal_1;
      func_0x1806aa960(pU64_2,param_2,uVal_1);
      *(uint8_t *)((int64_t)pU64_2 + uVal_1) = 0;
    }
  }
  return param_1;
}

// func_0x180001e30
uint64_t func_0x180001e30(uint64_t *param_1,void **param_2)
{
  void **ptr2_Void_1;
  void *_Size;
  int iVal_2;
  uint32_t extraout_var;
  
  ptr2_Void_1 = (void **)(param_1 + 2);
  _Size = param_2[1];
  if (*ptr2_Void_1 < _Size) {
    return 0;
  }
  if (0xf < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  iVal_2 = memcmp((void *)((int64_t)param_1 + ((int64_t)*ptr2_Void_1 - (int64_t)_Size)),*param_2,
                 (size_t)_Size);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVal_2) >> 8),iVal_2 == 0);
}

// func_0x180001e70
void func_0x180001e70(int64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = param_1[3];
  if (0xf < uVal_1) {
    lVal_2 = *param_1;
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
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(uint8_t *)param_1 = 0;
  return;
}

// func_0x180001ed0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x180001ed0(uint64_t param_1,ushort *param_2,ushort *param_3,ushort *param_4,int64_t param_5, int64_t param_6)
{
  int *pInt_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  func_ptr_t fnPtr_4;
  uint8_t auArr_5 [16];
  char ch_6;
  byte bFlag_7;
  uint8_t uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint *pU64_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint32_t *pU64_18;
  char *fnPtr_19;
  uint64_t *pU64_20;
  uint uVal_21;
  bool bFlag_22;
  uint8_t *pU64_23;
  uint uVal_24;
  uint64_t uVal_25;
  uint8_t *pU64_26;
  uint uVal_27;
  uint64_t uVal_28;
  uint32_t uVal_29;
  uint8_t *local_1e0;
  uint64_t local_1d8;
  uint8_t *local_1d0;
  uint64_t local_1c8;
  uint8_t *local_1c0;
  uint64_t local_1b8;
  uint8_t *local_1b0;
  uint64_t local_1a8;
  uint8_t *local_1a0;
  uint64_t local_198;
  int64_t local_190;
  uint64_t *local_188;
  int64_t local_180;
  char *local_178;
  uint64_t *local_170;
  uint64_t *local_168;
  uint *local_160;
  uint64_t *local_158;
  ushort *local_150;
  uint64_t local_148;
  uint64_t *local_140;
  ushort *local_138;
  uint64_t *local_130;
  uint local_124;
  ushort *local_120;
  int local_118 [2];
  uint64_t local_110;
  uint8_t local_108 [16];
  uint8_t local_f8 [28];
  uint64_t local_dc;
  uint32_t local_d4;
  uint64_t local_d0;
  uint8_t local_c8 [16];
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint64_t local_90;
  
  local_90 = 0xfffffffffffffffe;
  local_150 = param_4;
  local_138 = param_2;
  local_120 = param_3;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xa9c) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0xa9c) = 1;
    *(uint32_t *)(lVal_11 + 0xa94) = 0x928f98a6;
    *(uint16_t *)(lVal_11 + 0xa98) = 0x11f;
    func_0x180673140(&LAB_18007f3d0);
  }
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_15 = (uint *)(lVal_11 + 0xa94);
  if (*(char *)(lVal_11 + 0xa99) == '\x01') {
    *pU64_15 = *pU64_15 ^ 0xf7f5f1d5;
    *(byte *)(lVal_11 + 0xa98) = *(byte *)(lVal_11 + 0xa98) ^ 0x1f;
    *(uint8_t *)(lVal_11 + 0xa99) = 0;
  }
  _local_b8 = (uint8_t  [16])0x0;
  sz_9 = strlen((char *)pU64_15);
  if ((int64_t)sz_9 < 0) {
LAB_18000408f:
    func_0x18007ba70();
LAB_180004094:
    do {
      invalidInstructionException();
    } while( true );
  }
  if (sz_9 < 0x10) {
    pU64_26 = local_b8;
    uVal_28 = 0xf;
  }
  else {
    uVal_10 = sz_9 | 0xf;
    uVal_28 = 0x16;
    if (0x16 < uVal_10) {
      uVal_28 = uVal_10;
    }
    if (uVal_10 < 0xfff) {
      pU64_26 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
    }
    else {
      lVal_11 = func_0x180672de0(uVal_28 + 0x28);
      pU64_26 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_26 + -8) = lVal_11;
    }
    local_b8 = (uint8_t  [8])pU64_26;
  }
  local_a8 = (uint8_t  [8])sz_9;
  uStack_a0 = uVal_28;
  func_0x1806aa960(pU64_26,pU64_15,sz_9);
  pU64_26[sz_9] = 0;
  pU64_26 = local_b8;
  ch_6 = func_0x1801073b0(param_1,pU64_26);
  bFlag_7 = 1;
  if (ch_6 == '\0') {
LAB_180002197:
    if (0xf < uStack_a0) {
      uVal_28 = uStack_a0 + 1;
      lVal_11 = (int64_t)local_b8;
      if (0xfff < uVal_28) {
        lVal_11 = *(int64_t *)((int64_t)local_b8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_11)) goto LAB_180004094;
        uVal_28 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_28);
    }
    if (bFlag_7 != 0) {
      return 0;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xab8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0xab8) = 1;
      *(uint32_t *)(lVal_11 + 0xab0) = 0xbc475836;
      *(uint16_t *)(lVal_11 + 0xab4) = 0x127;
      func_0x180673140(&LAB_18007f430);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_15 = (uint *)(lVal_11 + 0xab0);
    if (*(char *)(lVal_11 + 0xab5) == '\x01') {
      *pU64_15 = *pU64_15 ^ 0xd93d3145;
      *(byte *)(lVal_11 + 0xab4) = *(byte *)(lVal_11 + 0xab4) ^ 0x27;
      *(uint8_t *)(lVal_11 + 0xab5) = 0;
    }
    _local_a8 = (uint8_t  [16])0x0;
    _local_b8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_15);
    if ((int64_t)sz_9 < 0) goto LAB_18000408f;
    uVal_28 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_28 = 0x16;
      if (0x16 < uVal_10) {
        uVal_28 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_26 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_28 + 0x28);
        pU64_26 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_26 + -8) = lVal_11;
      }
      local_b8 = (uint8_t  [8])pU64_26;
    }
    local_a8 = (uint8_t  [8])sz_9;
    uStack_a0 = uVal_28;
    func_0x1806aa960(pU64_26,pU64_15,sz_9);
    pU64_26[sz_9] = 0;
    pU64_26 = local_b8;
    lVal_11 = func_0x1801075f0(param_1,pU64_26);
    if (0xf < uStack_a0) {
      uVal_28 = uStack_a0 + 1;
      lVal_14 = (int64_t)local_b8;
      if (0xfff < uVal_28) {
        lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14)) goto LAB_180004094;
        uVal_28 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_28);
    }
    if (*(char *)(lVal_11 + 0x20) != '\x03') {
      return 0;
    }
    if (*(int64_t *)(lVal_11 + 0x10) - (int64_t)*(int64_t **)(lVal_11 + 8) != 0x18) {
      return 0;
    }
    *local_138 = *(ushort *)(**(int64_t **)(lVal_11 + 8) + 8);
    if (8 < (uint64_t)(*(int64_t *)(lVal_11 + 0x10) - *(int64_t *)(lVal_11 + 8))) {
      *local_120 = *(ushort *)(*(int64_t *)(*(int64_t *)(lVal_11 + 8) + 8) + 8);
      if (0x10 < (uint64_t)(*(int64_t *)(lVal_11 + 0x10) - *(int64_t *)(lVal_11 + 8))) {
        uVal_21 = *(uint *)(*(int64_t *)(*(int64_t *)(lVal_11 + 8) + 0x10) + 8);
        *local_150 = (ushort)uVal_21;
        if (*local_138 == 0) {
          return 0;
        }
        if (*local_120 == 0) {
          return 0;
        }
        if ((uVal_21 & 0xffff) == 0) {
          return 0;
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xacc) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0xacc) = 1;
          *(uint8_t *)(lVal_11 + 0xaca) = 1;
          *(uint64_t *)(lVal_11 + 0xac0) = 0xda6d9d2f4932f9e;
          *(uint16_t *)(lVal_11 + 0xac8) = 0x5b88;
          func_0x180673140(&LAB_18007f480);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_2 = (uint64_t *)(lVal_11 + 0xac0);
        if (*(char *)(lVal_11 + 0xaca) == '\x01') {
          *pU64_2 = *pU64_2 ^ 0x7fd3adb181e15bed;
          *(byte *)(lVal_11 + 0xac8) = *(byte *)(lVal_11 + 0xac8) ^ 0xed;
          *(byte *)(lVal_11 + 0xac9) = *(byte *)(lVal_11 + 0xac9) ^ 0x5b;
          *(uint8_t *)(lVal_11 + 0xaca) = 0;
        }
        _local_a8 = (uint8_t  [16])0x0;
        _local_b8 = (uint8_t  [16])0x0;
        sz_9 = strlen((char *)pU64_2);
        if (-1 < (int64_t)sz_9) {
          uVal_28 = 0xf;
          if (0xf < sz_9) {
            uVal_10 = sz_9 | 0xf;
            uVal_28 = 0x16;
            if (0x16 < uVal_10) {
              uVal_28 = uVal_10;
            }
            if (uVal_10 < 0xfff) {
              pU64_26 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
            }
            else {
              lVal_11 = func_0x180672de0(uVal_28 + 0x28);
              pU64_26 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_26 + -8) = lVal_11;
            }
            local_b8 = (uint8_t  [8])pU64_26;
          }
          local_a8 = (uint8_t  [8])sz_9;
          uStack_a0 = uVal_28;
          func_0x1806aa960(pU64_26,pU64_2,sz_9);
          pU64_26[sz_9] = 0;
          pU64_26 = local_b8;
          uVal_12 = func_0x180107640(param_1,pU64_26);
          if (0xf < uStack_a0) {
            uVal_28 = uStack_a0 + 1;
            lVal_11 = (int64_t)local_b8;
            if (0xfff < uVal_28) {
              lVal_11 = *(int64_t *)((int64_t)local_b8 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_11)) goto LAB_180004094;
              uVal_28 = uStack_a0 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_11,uVal_28);
          }
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xae0)
              == '\0') {
            lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_11 + 0xae0) = 1;
            *(uint8_t *)(lVal_11 + 0xade) = 1;
            *(uint64_t *)(lVal_11 + 0xad0) = 0x7724e6a6f822d1fd;
            *(uint32_t *)(lVal_11 + 0xad8) = 0xfe2ed4fb;
            *(uint16_t *)(lVal_11 + 0xadc) = 0xb9be;
            func_0x180673140(&LAB_18007f4b0);
          }
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_2 = (uint64_t *)(lVal_11 + 0xad0);
          if (*(char *)(lVal_11 + 0xade) == '\x01') {
            *pU64_2 = *pU64_2 ^ 0x194db9cd9b4dbd9f;
            *(uint *)(lVal_11 + 0xad8) = *(uint *)(lVal_11 + 0xad8) ^ 0x9b4dbd9f;
            *(byte *)(lVal_11 + 0xadc) = *(byte *)(lVal_11 + 0xadc) ^ 0xcd;
            *(byte *)(lVal_11 + 0xadd) = *(byte *)(lVal_11 + 0xadd) ^ 0xb9;
            *(uint8_t *)(lVal_11 + 0xade) = 0;
          }
          _local_a8 = (uint8_t  [16])0x0;
          _local_b8 = (uint8_t  [16])0x0;
          sz_9 = strlen((char *)pU64_2);
          if (-1 < (int64_t)sz_9) {
            uVal_28 = 0xf;
            if (0xf < sz_9) {
              uVal_10 = sz_9 | 0xf;
              uVal_28 = 0x16;
              if (0x16 < uVal_10) {
                uVal_28 = uVal_10;
              }
              if (uVal_10 < 0xfff) {
                pU64_26 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
              }
              else {
                lVal_11 = func_0x180672de0(uVal_28 + 0x28);
                pU64_26 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_26 + -8) = lVal_11;
              }
              local_b8 = (uint8_t  [8])pU64_26;
            }
            local_a8 = (uint8_t  [8])sz_9;
            uStack_a0 = uVal_28;
            func_0x1806aa960(pU64_26,pU64_2,sz_9);
            pU64_26[sz_9] = 0;
            pU64_26 = local_b8;
            ch_6 = func_0x1801073b0(uVal_12,pU64_26);
            bFlag_7 = 1;
            if (ch_6 != '\0') {
              if (*(char *)(*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                           0xaf4) == '\0') {
                lVal_11 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                *(uint8_t *)(lVal_11 + 0xaf4) = 1;
                *(uint8_t *)(lVal_11 + 0xaf0) = 1;
                *(uint64_t *)(lVal_11 + 0xae8) = 0x1928cdb9fe21dcef;
                func_0x180673140(&LAB_18007f4e0);
              }
              lVal_11 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              pU64_2 = (uint64_t *)(lVal_11 + 0xae8);
              if (*(char *)(lVal_11 + 0xaf0) == '\x01') {
                *pU64_2 = *pU64_2 ^ 0x194db9cd9b4dbd9f;
                *(uint8_t *)(lVal_11 + 0xaf0) = 0;
              }
              local_f8._0_16_ = (uint8_t  [16])0x0;
              local_108 = (uint8_t  [16])0x0;
              sz_9 = strlen((char *)pU64_2);
              if ((int64_t)sz_9 < 0) goto LAB_1800040cc;
              if (sz_9 < 0x10) {
                pU64_23 = local_108;
                uVal_28 = 0xf;
              }
              else {
                uVal_10 = sz_9 | 0xf;
                uVal_28 = 0x16;
                if (0x16 < uVal_10) {
                  uVal_28 = uVal_10;
                }
                if (uVal_10 < 0xfff) {
                  pU64_23 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
                }
                else {
                  lVal_11 = func_0x180672de0(uVal_28 + 0x28);
                  pU64_23 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_23 + -8) = lVal_11;
                }
                local_108._0_8_ = pU64_23;
              }
              local_f8._8_8_ = uVal_28;
              local_f8._0_8_ = sz_9;
              func_0x1806aa960(pU64_23,pU64_2,sz_9);
              pU64_23[sz_9] = 0;
              bFlag_7 = func_0x1801073b0(uVal_12,local_108);
              if (0xf < (uint64_t)local_f8._8_8_) {
                uVal_28 = local_f8._8_8_ + 1;
                lVal_11 = local_108._0_8_;
                if (0xfff < uVal_28) {
                  lVal_11 = *(int64_t *)(local_108._0_8_ + -8);
                  if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_11)) goto LAB_180004094;
                  uVal_28 = local_f8._8_8_ + 0x28;
                }
                thunk_FUN_180695dd0(lVal_11,uVal_28);
              }
              bFlag_7 = bFlag_7 ^ 1;
            }
            if (0xf < uStack_a0) {
              uVal_28 = uStack_a0 + 1;
              lVal_11 = (int64_t)local_b8;
              if (0xfff < uVal_28) {
                lVal_11 = *(int64_t *)((int64_t)local_b8 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_11)) goto LAB_180004094;
                uVal_28 = uStack_a0 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_11,uVal_28);
            }
            if (bFlag_7 != 0) {
              return 0;
            }
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xb08
                         ) == '\0') {
              lVal_11 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_11 + 0xb08) = 1;
              *(uint8_t *)(lVal_11 + 0xb06) = 1;
              *(uint64_t *)(lVal_11 + 0xaf8) = 0xa37cd6647c80f31f;
              *(uint32_t *)(lVal_11 + 0xb00) = 0x7a8cf619;
              *(uint16_t *)(lVal_11 + 0xb04) = 0x897c;
              func_0x180673140(&LAB_18007f500);
            }
            lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            pU64_2 = (uint64_t *)(lVal_11 + 0xaf8);
            if (*(char *)(lVal_11 + 0xb06) == '\x01') {
              *pU64_2 = *pU64_2 ^ 0xcd15890f1fef9f7d;
              *(uint *)(lVal_11 + 0xb00) = *(uint *)(lVal_11 + 0xb00) ^ 0x1fef9f7d;
              *(byte *)(lVal_11 + 0xb04) = *(byte *)(lVal_11 + 0xb04) ^ 0xf;
              *(byte *)(lVal_11 + 0xb05) = *(byte *)(lVal_11 + 0xb05) ^ 0x89;
              *(uint8_t *)(lVal_11 + 0xb06) = 0;
            }
            _local_a8 = (uint8_t  [16])0x0;
            _local_b8 = (uint8_t  [16])0x0;
            sz_9 = strlen((char *)pU64_2);
            if (-1 < (int64_t)sz_9) {
              uVal_28 = 0xf;
              if (0xf < sz_9) {
                uVal_10 = sz_9 | 0xf;
                uVal_28 = 0x16;
                if (0x16 < uVal_10) {
                  uVal_28 = uVal_10;
                }
                if (uVal_10 < 0xfff) {
                  pU64_26 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
                }
                else {
                  lVal_11 = func_0x180672de0(uVal_28 + 0x28);
                  pU64_26 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_26 + -8) = lVal_11;
                }
                local_b8 = (uint8_t  [8])pU64_26;
              }
              uStack_a0 = uVal_28;
              local_a8 = (uint8_t  [8])sz_9;
              func_0x1806aa960(pU64_26,pU64_2,sz_9);
              pU64_26[sz_9] = 0;
              lVal_11 = func_0x1801075f0(uVal_12,local_b8);
              if (0xf < uStack_a0) {
                uVal_28 = uStack_a0 + 1;
                lVal_14 = (int64_t)local_b8;
                if (0xfff < uVal_28) {
                  lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
                  if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14)) goto LAB_180004094;
                  uVal_28 = uStack_a0 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_14,uVal_28);
              }
              if (*(char *)(lVal_11 + 0x20) != '\t') {
                return 0;
              }
              if (*(int64_t *)(lVal_11 + 0x10) - (int64_t)*(int64_t **)(lVal_11 + 8) != 0x10) {
                return 0;
              }
              lVal_11 = **(int64_t **)(lVal_11 + 8);
              if (*(char *)(lVal_11 + 0x20) != '\x03') {
                return 0;
              }
              if (*(int64_t *)(lVal_11 + 0x10) - *(int64_t *)(lVal_11 + 8) >> 3 !=
                  (uint64_t)((uint)*local_150 * (uint)*local_120 * (uint)*local_138)) {
                return 0;
              }
              uVal_13 = func_0x1800381d0();
              uVal_13 = func_0x180038250(uVal_13);
              func_0x180001060(local_b8,uVal_13);
              uVal_12 = func_0x180107640(uVal_12,local_b8);
              func_0x180001e70(local_b8);
              uVal_13 = func_0x180038270();
              uVal_13 = func_0x1800382f0(uVal_13);
              func_0x180001060(local_b8,uVal_13);
              ch_6 = func_0x1801073b0(uVal_12,local_b8);
              func_0x180001e70(local_b8);
              if (ch_6 == '\0') {
                return 0;
              }
              uVal_13 = func_0x180038310();
              uVal_13 = func_0x180038390(uVal_13);
              func_0x180001060(local_b8,uVal_13);
              uVal_12 = func_0x180107640(uVal_12,local_b8);
              func_0x180001e70(local_b8);
              uVal_13 = func_0x1800383b0();
              uVal_13 = func_0x180038450(uVal_13);
              func_0x180001060(local_b8,uVal_13);
              ch_6 = func_0x1801073b0(uVal_12,local_b8);
              func_0x180001e70(local_b8);
              if (ch_6 == '\0') {
                return 0;
              }
              uVal_13 = func_0x180038480();
              uVal_13 = func_0x180038520(uVal_13);
              func_0x180001060(local_b8,uVal_13);
              lVal_14 = func_0x1801075f0(uVal_12,local_b8);
              func_0x180001e70(local_b8);
              if (*(char *)(lVal_14 + 0x20) != '\n') {
                return 0;
              }
              if (*(int64_t *)(lVal_14 + 8) == *(int64_t *)(lVal_14 + 0x10)) {
                return 0;
              }
              local_190 = lVal_11;
              local_148 = uVal_12;
              func_0x180038550(local_108,*(int64_t *)(lVal_14 + 0x10) - *(int64_t *)(lVal_14 + 8) >> 3)
              ;
              uVal_21 = 0;
LAB_180002b65:
              do {
                uVal_28 = (uint64_t)uVal_21;
                if ((uint64_t)(*(int64_t *)(lVal_14 + 0x10) - *(int64_t *)(lVal_14 + 8) >> 3) <=
                    uVal_28) {
                  uVal_12 = func_0x180038b60();
                  func_0x180095700(uVal_12);
                  func_0x180001060(local_b8,uVal_12);
                  local_180 = func_0x180107640(local_148);
                  func_0x180001e70(local_b8);
                  uVal_10 = DAT_1806ae040;
                  uVal_28 = DAT_1806ae030;
                  lVal_11 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  local_140 = (uint64_t *)(lVal_11 + 0xbf0);
                  local_178 = (char *)(lVal_11 + 0xbf9);
                  local_130 = (uint64_t *)(lVal_11 + 0xc10);
                  local_170 = (uint64_t *)(lVal_11 + 0xc20);
                  local_168 = (uint64_t *)(lVal_11 + 0xc30);
                  local_160 = (uint *)(lVal_11 + 0xc44);
                  local_158 = (uint64_t *)(lVal_11 + 0xc50);
                  uVal_21 = 0;
                  do {
                    if (*local_138 <= uVal_21) {
                      func_0x180037eb0(local_108);
                      return 1;
                    }
                    local_124 = uVal_21;
                    for (uVal_24 = 0; uVal_24 < *local_120; uVal_24 = uVal_24 + 1) {
                      local_148 = CONCAT44(local_148._4_4_,uVal_24);
                      for (uVal_27 = 0; uVal_27 < *local_150; uVal_27 = uVal_27 + 1) {
                        uVal_17 = (uint64_t)
                                 ((*local_120 * uVal_21 + uVal_24) * (uint)*local_150 + uVal_27);
                        uVal_16 = (uint64_t)
                                 *(int *)(*(int64_t *)(*(int64_t *)(local_190 + 8) + uVal_17 * 8) +
                                         8);
                        if ((int64_t)uVal_16 < 0) {
                          pU64_20 = *(uint64_t **)(param_5 + 8);
LAB_1800031c4:
                          auArr_5._8_8_ = 0;
                          auArr_5._0_8_ = uStack_b0;
                          _local_b8 = auArr_5 << 0x40;
                          if (pU64_20 == *(uint64_t **)(param_5 + 0x10)) {
                            func_0x18007f730(param_5,pU64_20,local_b8);
                          }
                          else {
                            *pU64_20 = 0;
                            *(int64_t *)(param_5 + 8) = *(int64_t *)(param_5 + 8) + 8;
                          }
                        }
                        else {
                          uVal_25 = ((int64_t)(local_108._8_8_ - local_108._0_8_) >> 3) *
                                   -0x5555555555555555;
                          pU64_20 = *(uint64_t **)(param_5 + 8);
                          if (uVal_25 < uVal_16 || uVal_25 - uVal_16 == 0) goto LAB_1800031c4;
                          pU64_3 = (uint64_t *)(local_108._0_8_ + uVal_16 * 0x18);
                          if (pU64_20 == *(uint64_t **)(param_5 + 0x10)) {
                            func_0x18007f260(param_5,pU64_20,pU64_3);
                          }
                          else {
                            *pU64_20 = *pU64_3;
                            *(int64_t *)(param_5 + 8) = *(int64_t *)(param_5 + 8) + 8;
                          }
                          if (pU64_3[1] != 0) {
                            local_188 = pU64_3 + 1;
                            if (local_180 != 0) {
                              lVal_11 = func_0x180127530(*pU64_3);
                              if (*(char *)(*(int64_t *)
                                             ((int64_t)ThreadLocalStoragePointer +
                                             (uint64_t)_tls_index * 8) + 0xbf8) == '\0') {
                                lVal_14 = *(int64_t *)
                                          ((int64_t)ThreadLocalStoragePointer +
                                          (uint64_t)_tls_index * 8);
                                *(uint8_t *)(lVal_14 + 0xbf8) = 1;
                                *(uint64_t *)(lVal_14 + 0xbf0) = 0x1ad6bc04fc2bc35;
                                func_0x180673140(&LAB_18007f8a0);
                                ch_6 = *(char *)((int64_t)local_140 + 7);
                              }
                              else {
                                ch_6 = *(char *)((int64_t)local_140 + 7);
                              }
                              if (ch_6 == '\x01') {
                                *local_140 = (CONCAT44((uint)*(ushort *)((int64_t)local_140 + 5) <<
                                                       8,*(uint32_t *)local_140) |
                                             (uint64_t)*(byte *)((int64_t)local_140 + 4) << 0x20)
                                             ^ uVal_28;
                              }
                              local_a8 = (uint8_t  [8])0x0;
                              uStack_a0 = 0;
                              _local_b8 = ZEXT816(0);
                              sz_9 = strlen((char *)local_140);
                              if ((int64_t)sz_9 < 0) {
                                func_0x18007ba70();
                                goto LAB_18000409c;
                              }
                              uVal_16 = 0xf;
                              pU64_26 = local_b8;
                              if (0xf < sz_9) {
                                uVal_25 = sz_9 | 0xf;
                                uVal_16 = 0x16;
                                if (0x16 < uVal_25) {
                                  uVal_16 = uVal_25;
                                }
                                if (uVal_25 < 0xfff) {
                                  pU64_26 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
                                }
                                else {
                                  lVal_14 = func_0x180672de0(uVal_16 + 0x28);
                                  pU64_26 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
                                  *(int64_t *)(pU64_26 + -8) = lVal_14;
                                }
                                local_b8 = (uint8_t  [8])pU64_26;
                              }
                              uStack_a0 = uVal_16;
                              local_a8 = (uint8_t  [8])sz_9;
                              func_0x1806aa960(pU64_26,local_140,sz_9);
                              pU64_26[sz_9] = 0;
                              pU64_26 = local_b8;
                              if (0xf < uStack_a0) {
                                pU64_26 = (uint8_t *)local_b8;
                              }
                              uVal_16 = *(uint64_t *)(lVal_11 + 0xa8);
                              if (*(uint64_t *)(lVal_11 + 0xb0) < 0x10) {
                                lVal_11 = lVal_11 + 0x98;
                                if (uVal_16 < (uint64_t)local_a8) goto LAB_1800033b0;
LAB_180003362:
                                if (local_a8 == (uint8_t  [8])0x0) {
                                  bFlag_22 = true;
                                }
                                else {
                                  lVal_14 = thunk_FUN_180676d20(lVal_11,uVal_16 + lVal_11,pU64_26);
                                  bFlag_22 = lVal_14 - lVal_11 != -1 && lVal_14 != uVal_16 + lVal_11;
                                }
                              }
                              else {
                                lVal_11 = *(int64_t *)(lVal_11 + 0x98);
                                if ((uint64_t)local_a8 <= uVal_16) goto LAB_180003362;
LAB_1800033b0:
                                bFlag_22 = false;
                              }
                              if (0xf < uStack_a0) {
                                uVal_16 = uStack_a0 + 1;
                                lVal_11 = (int64_t)local_b8;
                                if (0xfff < uVal_16) {
                                  lVal_11 = *(int64_t *)((int64_t)local_b8 + -8);
                                  if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_11))
                                  goto LAB_180004094;
                                  uVal_16 = uStack_a0 + 0x28;
                                }
                                thunk_FUN_180695dd0(lVal_11,uVal_16);
                              }
                              if (bFlag_22) {
                                func_0x180038c30(local_b8,uVal_17);
                                lVal_11 = func_0x180107640(local_180,local_b8);
                                if (0xf < uStack_a0) {
                                  uVal_16 = uStack_a0 + 1;
                                  lVal_14 = (int64_t)local_b8;
                                  if (0xfff < uVal_16) {
                                    lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
                                    if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14))
                                    goto LAB_180004094;
                                    uVal_16 = uStack_a0 + 0x28;
                                  }
                                  thunk_FUN_180695dd0(lVal_14,uVal_16);
                                }
                                if (lVal_11 != 0) {
                                  uStack_b0 = _UNK_1806afc21;
                                  local_b8 = (uint8_t  [8])_DAT_1806afc19;
                                  local_a8._0_2_ = 0x47f6;
                                  if (*(char *)(*(int64_t *)
                                                 ((int64_t)ThreadLocalStoragePointer +
                                                 (uint64_t)_tls_index * 8) + 0xc0c) == '\0') {
                                    lVal_14 = *(int64_t *)
                                              ((int64_t)ThreadLocalStoragePointer +
                                              (uint64_t)_tls_index * 8);
                                    *(uint8_t *)(lVal_14 + 0xc0c) = 1;
                                    func_0x18007c170(lVal_14 + 0xbf9,local_b8);
                                    func_0x180673140(&LAB_18007f8d0);
                                  }
                                  fnPtr_19 = local_178;
                                  func_0x180095720(local_178);
                                  local_a8 = (uint8_t  [8])0x0;
                                  uStack_a0 = 0;
                                  _local_b8 = ZEXT816(0);
                                  sz_9 = strlen(fnPtr_19);
                                  if ((int64_t)sz_9 < 0) goto LAB_1800040a8;
                                  uVal_16 = 0xf;
                                  pU64_26 = local_b8;
                                  if (0xf < sz_9) {
                                    uVal_17 = sz_9 | 0xf;
                                    uVal_16 = 0x16;
                                    if (0x16 < uVal_17) {
                                      uVal_16 = uVal_17;
                                    }
                                    if (uVal_17 < 0xfff) {
                                      pU64_26 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
                                    }
                                    else {
                                      lVal_14 = func_0x180672de0(uVal_16 + 0x28);
                                      pU64_26 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
                                      *(int64_t *)(pU64_26 + -8) = lVal_14;
                                    }
                                    local_b8 = (uint8_t  [8])pU64_26;
                                  }
                                  uStack_a0 = uVal_16;
                                  local_a8 = (uint8_t  [8])sz_9;
                                  func_0x1806aa960(pU64_26,local_178,sz_9);
                                  pU64_26[sz_9] = 0;
                                  lVal_11 = func_0x180107640(lVal_11,local_b8);
                                  if (0xf < uStack_a0) {
                                    uVal_16 = uStack_a0 + 1;
                                    lVal_14 = (int64_t)local_b8;
                                    if (0xfff < uVal_16) {
                                      lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
                                      if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14))
                                      goto LAB_180004094;
                                      uVal_16 = uStack_a0 + 0x28;
                                    }
                                    thunk_FUN_180695dd0(lVal_14,uVal_16);
                                  }
                                  if (lVal_11 != 0) {
                                    local_d0 = pU64_3[1];
                                    if (*(char *)(*(int64_t *)
                                                   ((int64_t)ThreadLocalStoragePointer +
                                                   (uint64_t)_tls_index * 8) + 0xc18) == '\0') {
                                      lVal_14 = *(int64_t *)
                                                ((int64_t)ThreadLocalStoragePointer +
                                                (uint64_t)_tls_index * 8);
                                      *(uint8_t *)(lVal_14 + 0xc18) = 1;
                                      *(uint64_t *)(lVal_14 + 0xc10) = 0x127c4f2fcf6f596;
                                      func_0x180673140(&LAB_18007f900);
                                      ch_6 = *(char *)((int64_t)local_130 + 7);
                                    }
                                    else {
                                      ch_6 = *(char *)((int64_t)local_130 + 7);
                                    }
                                    if (ch_6 == '\x01') {
                                      *local_130 = (CONCAT44((uint)*(ushort *)
                                                                    ((int64_t)local_130 + 5) << 8,
                                                             *(uint32_t *)local_130) |
                                                   (uint64_t)*(byte *)((int64_t)local_130 + 4) <<
                                                   0x20) ^ uVal_10;
                                    }
                                    local_a8 = (uint8_t  [8])0x0;
                                    uStack_a0 = 0;
                                    _local_b8 = ZEXT816(0);
                                    sz_9 = strlen((char *)local_130);
                                    if ((int64_t)sz_9 < 0) goto LAB_1800040c6;
                                    uVal_16 = 0xf;
                                    pU64_26 = local_b8;
                                    if (0xf < sz_9) {
                                      uVal_17 = sz_9 | 0xf;
                                      uVal_16 = 0x16;
                                      if (0x16 < uVal_17) {
                                        uVal_16 = uVal_17;
                                      }
                                      if (uVal_17 < 0xfff) {
                                        pU64_26 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
                                      }
                                      else {
                                        lVal_14 = func_0x180672de0(uVal_16 + 0x28);
                                        pU64_26 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0)
                                        ;
                                        *(int64_t *)(pU64_26 + -8) = lVal_14;
                                      }
                                      local_b8 = (uint8_t  [8])pU64_26;
                                    }
                                    local_a8 = (uint8_t  [8])sz_9;
                                    uStack_a0 = uVal_16;
                                    func_0x1806aa960(pU64_26,local_130,sz_9);
                                    pU64_26[sz_9] = 0;
                                    ch_6 = func_0x1801073c0(lVal_11,local_b8);
                                    uVal_12 = func_0x1801106f0(local_d0);
                                    *(bool *)uVal_12 = ch_6 != '\0';
                                    if (0xf < uStack_a0) {
                                      uVal_16 = uStack_a0 + 1;
                                      lVal_14 = (int64_t)local_b8;
                                      if (0xfff < uVal_16) {
                                        lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
                                        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14))
                                        goto LAB_180004094;
                                        uVal_16 = uStack_a0 + 0x28;
                                      }
                                      thunk_FUN_180695dd0(lVal_14,uVal_16);
                                    }
                                    if (*(char *)(*(int64_t *)
                                                   ((int64_t)ThreadLocalStoragePointer +
                                                   (uint64_t)_tls_index * 8) + 0xc2c) == '\0') {
                                      lVal_14 = *(int64_t *)
                                                ((int64_t)ThreadLocalStoragePointer +
                                                (uint64_t)_tls_index * 8);
                                      *(uint8_t *)(lVal_14 + 0xc2c) = 1;
                                      *(uint64_t *)(lVal_14 + 0xc20) = 0xac8418bd08268fbb;
                                      *(uint16_t *)(lVal_14 + 0xc28) = 0x1eb;
                                      func_0x180673140(&LAB_18007f930);
                                      ch_6 = *(char *)((int64_t)local_170 + 9);
                                    }
                                    else {
                                      ch_6 = *(char *)((int64_t)local_170 + 9);
                                    }
                                    if (ch_6 == '\x01') {
                                      *local_170 = *local_170 ^ 0xdff77dcf6f49fdeb;
                                      *(byte *)(local_170 + 1) = *(byte *)(local_170 + 1) ^ 0xeb;
                                      *(uint8_t *)((int64_t)local_170 + 9) = 0;
                                    }
                                    local_a8 = (uint8_t  [8])0x0;
                                    uStack_a0 = 0;
                                    _local_b8 = ZEXT816(0);
                                    sz_9 = strlen((char *)local_170);
                                    if ((int64_t)sz_9 < 0) goto LAB_1800040b4;
                                    uVal_16 = 0xf;
                                    pU64_26 = local_b8;
                                    if (0xf < sz_9) {
                                      uVal_17 = sz_9 | 0xf;
                                      uVal_16 = 0x16;
                                      if (0x16 < uVal_17) {
                                        uVal_16 = uVal_17;
                                      }
                                      if (uVal_17 < 0xfff) {
                                        pU64_26 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
                                      }
                                      else {
                                        lVal_14 = func_0x180672de0(uVal_16 + 0x28);
                                        pU64_26 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0)
                                        ;
                                        *(int64_t *)(pU64_26 + -8) = lVal_14;
                                      }
                                      local_b8 = (uint8_t  [8])pU64_26;
                                    }
                                    local_a8 = (uint8_t  [8])sz_9;
                                    uStack_a0 = uVal_16;
                                    func_0x1806aa960(pU64_26,local_170,sz_9);
                                    pU64_26[sz_9] = 0;
                                    uVal_29 = func_0x180107550(lVal_11,local_b8);
                                    pU64_18 = (uint32_t *)func_0x180110750(local_d0);
                                    *pU64_18 = uVal_29;
                                    if (0xf < uStack_a0) {
                                      uVal_16 = uStack_a0 + 1;
                                      lVal_14 = (int64_t)local_b8;
                                      if (0xfff < uVal_16) {
                                        lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
                                        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14))
                                        goto LAB_180004094;
                                        uVal_16 = uStack_a0 + 0x28;
                                      }
                                      thunk_FUN_180695dd0(lVal_14,uVal_16);
                                    }
                                    if (*(char *)(*(int64_t *)
                                                   ((int64_t)ThreadLocalStoragePointer +
                                                   (uint64_t)_tls_index * 8) + 0xc40) == '\0') {
                                      lVal_14 = *(int64_t *)
                                                ((int64_t)ThreadLocalStoragePointer +
                                                (uint64_t)_tls_index * 8);
                                      *(uint8_t *)(lVal_14 + 0xc40) = 1;
                                      *(uint64_t *)(lVal_14 + 0xc30) = 0xf2b4777fb1b80279;
                                      *(uint32_t *)(lVal_14 + 0xc38) = 0xb6b80647;
                                      *(uint16_t *)(lVal_14 + 0xc3c) = 0x12f;
                                      func_0x180673140(&LAB_18007f960);
                                      ch_6 = *(char *)((int64_t)local_168 + 0xd);
                                    }
                                    else {
                                      ch_6 = *(char *)((int64_t)local_168 + 0xd);
                                    }
                                    if (ch_6 == '\x01') {
                                      *local_168 = *local_168 ^ 0x95db052fc5cb6335;
                                      *(uint *)(local_168 + 1) =
                                           *(uint *)(local_168 + 1) ^ 0xc5cb6335;
                                      *(byte *)((int64_t)local_168 + 0xc) =
                                           *(byte *)((int64_t)local_168 + 0xc) ^ 0x2f;
                                      *(uint8_t *)((int64_t)local_168 + 0xd) = 0;
                                    }
                                    local_a8 = (uint8_t  [8])0x0;
                                    uStack_a0 = 0;
                                    _local_b8 = ZEXT816(0);
                                    sz_9 = strlen((char *)local_168);
                                    if ((int64_t)sz_9 < 0) goto LAB_1800040c0;
                                    uVal_16 = 0xf;
                                    pU64_26 = local_b8;
                                    if (0xf < sz_9) {
                                      uVal_17 = sz_9 | 0xf;
                                      uVal_16 = 0x16;
                                      if (0x16 < uVal_17) {
                                        uVal_16 = uVal_17;
                                      }
                                      if (uVal_17 < 0xfff) {
                                        pU64_26 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
                                      }
                                      else {
                                        lVal_14 = func_0x180672de0(uVal_16 + 0x28);
                                        pU64_26 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0)
                                        ;
                                        *(int64_t *)(pU64_26 + -8) = lVal_14;
                                      }
                                      local_b8 = (uint8_t  [8])pU64_26;
                                    }
                                    local_a8 = (uint8_t  [8])sz_9;
                                    uStack_a0 = uVal_16;
                                    func_0x1806aa960(pU64_26,local_168,sz_9);
                                    pU64_26[sz_9] = 0;
                                    uVal_29 = func_0x180107550(lVal_11,local_b8);
                                    pU64_18 = (uint32_t *)func_0x1801107b0(local_d0);
                                    *pU64_18 = uVal_29;
                                    if (0xf < uStack_a0) {
                                      uVal_16 = uStack_a0 + 1;
                                      lVal_14 = (int64_t)local_b8;
                                      if (0xfff < uVal_16) {
                                        lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
                                        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14))
                                        goto LAB_180004094;
                                        uVal_16 = uStack_a0 + 0x28;
                                      }
                                      thunk_FUN_180695dd0(lVal_14,uVal_16);
                                    }
                                    if (*(char *)(*(int64_t *)
                                                   ((int64_t)ThreadLocalStoragePointer +
                                                   (uint64_t)_tls_index * 8) + 0xc4c) == '\0') {
                                      lVal_14 = *(int64_t *)
                                                ((int64_t)ThreadLocalStoragePointer +
                                                (uint64_t)_tls_index * 8);
                                      *(uint8_t *)(lVal_14 + 0xc4c) = 1;
                                      *(uint8_t *)(lVal_14 + 0xc4a) = 1;
                                      *(uint32_t *)(lVal_14 + 0xc44) = 0x193213b4;
                                      *(uint16_t *)(lVal_14 + 0xc48) = 0x4d44;
                                      func_0x180673140(&LAB_18007f990);
                                      ch_6 = *(char *)((int64_t)local_160 + 6);
                                    }
                                    else {
                                      ch_6 = *(char *)((int64_t)local_160 + 6);
                                    }
                                    if (ch_6 == '\x01') {
                                      *local_160 = *local_160 ^ 0x6d5367e7;
                                      *(byte *)(local_160 + 1) = *(byte *)(local_160 + 1) ^ 0x21;
                                      *(byte *)((int64_t)local_160 + 5) =
                                           *(byte *)((int64_t)local_160 + 5) ^ 0x4d;
                                      *(uint8_t *)((int64_t)local_160 + 6) = 0;
                                    }
                                    local_a8 = (uint8_t  [8])0x0;
                                    uStack_a0 = 0;
                                    _local_b8 = ZEXT816(0);
                                    sz_9 = strlen((char *)local_160);
                                    if ((int64_t)sz_9 < 0) goto LAB_1800040ba;
                                    uVal_16 = 0xf;
                                    pU64_26 = local_b8;
                                    if (0xf < sz_9) {
                                      uVal_17 = sz_9 | 0xf;
                                      uVal_16 = 0x16;
                                      if (0x16 < uVal_17) {
                                        uVal_16 = uVal_17;
                                      }
                                      if (uVal_17 < 0xfff) {
                                        pU64_26 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
                                      }
                                      else {
                                        lVal_14 = func_0x180672de0(uVal_16 + 0x28);
                                        pU64_26 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0)
                                        ;
                                        *(int64_t *)(pU64_26 + -8) = lVal_14;
                                      }
                                      local_b8 = (uint8_t  [8])pU64_26;
                                    }
                                    local_a8 = (uint8_t  [8])sz_9;
                                    uStack_a0 = uVal_16;
                                    func_0x1806aa960(pU64_26,local_160,sz_9);
                                    pU64_26[sz_9] = 0;
                                    uVal_8 = func_0x1801073c0(lVal_11,local_b8);
                                    pU64_26 = (uint8_t *)func_0x180110870(local_d0);
                                    *pU64_26 = uVal_8;
                                    if (0xf < uStack_a0) {
                                      uVal_16 = uStack_a0 + 1;
                                      lVal_14 = (int64_t)local_b8;
                                      if (0xfff < uVal_16) {
                                        lVal_14 = *(int64_t *)((int64_t)local_b8 + -8);
                                        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_14))
                                        goto LAB_180004094;
                                        uVal_16 = uStack_a0 + 0x28;
                                      }
                                      thunk_FUN_180695dd0(lVal_14,uVal_16);
                                    }
                                    if (*(char *)(*(int64_t *)
                                                   ((int64_t)ThreadLocalStoragePointer +
                                                   (uint64_t)_tls_index * 8) + 0xc5c) == '\0') {
                                      lVal_14 = *(int64_t *)
                                                ((int64_t)ThreadLocalStoragePointer +
                                                (uint64_t)_tls_index * 8);
                                      *(uint8_t *)(lVal_14 + 0xc5c) = 1;
                                      *(uint64_t *)(lVal_14 + 0xc50) = 0xfe4f200d347238ef;
                                      *(uint16_t *)(lVal_14 + 0xc58) = 0x1a1;
                                      func_0x180673140(&LAB_18007f9c0);
                                      ch_6 = *(char *)((int64_t)local_158 + 9);
                                    }
                                    else {
                                      ch_6 = *(char *)((int64_t)local_158 + 9);
                                    }
                                    if (ch_6 == '\x01') {
                                      *local_158 = *local_158 ^ 0x9b3b417967055da1;
                                      *(byte *)(local_158 + 1) = *(byte *)(local_158 + 1) ^ 0xa1;
                                      *(uint8_t *)((int64_t)local_158 + 9) = 0;
                                    }
                                    local_a8 = (uint8_t  [8])0x0;
                                    uStack_a0 = 0;
                                    _local_b8 = ZEXT816(0);
                                    sz_9 = strlen((char *)local_158);
                                    if ((int64_t)sz_9 < 0) goto LAB_1800040ae;
                                    uVal_16 = 0xf;
                                    pU64_26 = local_b8;
                                    if (0xf < sz_9) {
                                      uVal_17 = sz_9 | 0xf;
                                      uVal_16 = 0x16;
                                      if (0x16 < uVal_17) {
                                        uVal_16 = uVal_17;
                                      }
                                      if (uVal_17 < 0xfff) {
                                        pU64_26 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
                                      }
                                      else {
                                        lVal_14 = func_0x180672de0(uVal_16 + 0x28);
                                        pU64_26 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0)
                                        ;
                                        *(int64_t *)(pU64_26 + -8) = lVal_14;
                                      }
                                      local_b8 = (uint8_t  [8])pU64_26;
                                    }
                                    uStack_a0 = uVal_16;
                                    local_a8 = (uint8_t  [8])sz_9;
                                    func_0x1806aa960(pU64_26,local_158,sz_9);
                                    pU64_26[sz_9] = 0;
                                    uVal_8 = func_0x1801073c0(lVal_11,local_b8);
                                    pU64_26 = (uint8_t *)func_0x1801108d0(local_d0);
                                    *pU64_26 = uVal_8;
                                    if (0xf < uStack_a0) {
                                      uVal_16 = uStack_a0 + 1;
                                      lVal_11 = (int64_t)local_b8;
                                      if (0xfff < uVal_16) {
                                        lVal_11 = *(int64_t *)((int64_t)local_b8 + -8);
                                        if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_11))
                                        goto LAB_180004094;
                                        uVal_16 = uStack_a0 + 0x28;
                                      }
                                      thunk_FUN_180695dd0(lVal_11,uVal_16);
                                    }
                                    pU64_26 = (uint8_t *)func_0x1801108d0(local_d0);
                                    uVal_8 = *pU64_26;
                                    pU64_26 = (uint8_t *)func_0x180110810(local_d0);
                                    *pU64_26 = uVal_8;
                                    fnPtr_19 = (char *)func_0x1801108d0(local_d0);
                                    ch_6 = *fnPtr_19;
                                    uVal_12 = func_0x180110930(local_d0);
                                    *(bool *)uVal_12 = ch_6 == '\0';
                                  }
                                }
                              }
                            }
                            auArr_5 = _local_b8;
                            local_b8._4_4_ = (uint)local_148;
                            local_b8._0_4_ = local_124;
                            uStack_b0._4_4_ = auArr_5._12_4_;
                            uStack_b0._0_4_ = uVal_27;
                            pU64_15 = *(uint **)(param_6 + 8);
                            if (pU64_15 == *(uint **)(param_6 + 0x10)) {
                              func_0x18007f9f0(param_6,pU64_15,local_b8,local_188);
                            }
                            else {
                              *pU64_15 = local_124;
                              pU64_15[1] = (uint)local_148;
                              pU64_15[2] = uVal_27;
                              *(uint8_t (*)[16])(pU64_15 + 4) = ZEXT816(0);
                              if (pU64_3[2] != 0) {
                                LOCK();
                                pInt_1 = (int *)(pU64_3[2] + 8);
                                *pInt_1 = *pInt_1 + 1;
                                UNLOCK();
                              }
                              *(uint64_t *)(pU64_15 + 4) = pU64_3[1];
                              *(uint64_t *)(pU64_15 + 6) = pU64_3[2];
                              *(int64_t *)(param_6 + 8) = *(int64_t *)(param_6 + 8) + 0x20;
                            }
                          }
                        }
                        uVal_24 = (uint)local_148;
                        uVal_21 = local_124;
                      }
                    }
                    uVal_21 = uVal_21 + 1;
                  } while( true );
                }
                func_0x1801282b0(local_118,*(uint64_t *)(*(int64_t *)(lVal_14 + 8) + uVal_28 * 8));
                if (local_110 != 0 && local_118[0] == 2) {
                  lVal_11 = func_0x180127530();
                  uVal_12 = func_0x180038660();
                  func_0x1800956a0(uVal_12);
                  func_0x180001060(local_b8,uVal_12);
                  lVal_11 = lVal_11 + 0x98;
                  ch_6 = func_0x180034ae0(lVal_11,local_b8);
                  func_0x180001e70(local_b8);
                  if (ch_6 == '\0') {
                    uVal_12 = func_0x180038730();
                    uVal_12 = func_0x1800387c0(uVal_12);
                    func_0x180001060(local_b8,uVal_12);
                    local_1e0 = local_b8;
                    if (0xf < uStack_a0) {
                      local_1e0 = (uint8_t *)local_b8;
                    }
                    local_1d8 = local_a8;
                    ch_6 = func_0x180037b60(lVal_11,&local_1e0);
                    func_0x180001e70(local_b8);
                    if (ch_6 == '\0') {
                      pU64_15 = (uint *)func_0x180038870();
                      if (*(char *)(pU64_15 + 1) == '\x01') {
                        *pU64_15 = *pU64_15 ^ 0x7d7f3d23;
                        *(uint8_t *)(pU64_15 + 1) = 0;
                      }
                      func_0x180001060(local_b8,pU64_15);
                      local_1d0 = local_b8;
                      if (0xf < uStack_a0) {
                        local_1d0 = (uint8_t *)local_b8;
                      }
                      local_1c8 = local_a8;
                      ch_6 = func_0x180037b60(lVal_11,&local_1d0);
                      func_0x180001e70(local_b8);
                      if (ch_6 == '\0') {
                        uVal_12 = func_0x1800388f0();
                        uVal_12 = func_0x180038970(uVal_12);
                        func_0x180001060(local_b8,uVal_12);
                        local_1c0 = local_b8;
                        if (0xf < uStack_a0) {
                          local_1c0 = (uint8_t *)local_b8;
                        }
                        local_1b8 = local_a8;
                        ch_6 = func_0x180037b60(lVal_11,&local_1c0);
                        func_0x180001e70(local_b8);
                        if (ch_6 == '\0') {
                          uVal_12 = func_0x1800389b0();
                          uVal_12 = func_0x180038a40(uVal_12);
                          func_0x180001060(local_b8,uVal_12);
                          local_1b0 = local_b8;
                          if (0xf < uStack_a0) {
                            local_1b0 = (uint8_t *)local_b8;
                          }
                          local_1a8 = local_a8;
                          ch_6 = func_0x180037b60(lVal_11,&local_1b0);
                          func_0x180001e70(local_b8);
                          if (ch_6 == '\0') {
                            uVal_12 = func_0x180038a70();
                            uVal_12 = func_0x180038af0(uVal_12);
                            func_0x180001060(local_b8,uVal_12);
                            local_1a0 = local_b8;
                            if (0xf < uStack_a0) {
                              local_1a0 = (uint8_t *)local_b8;
                            }
                            local_198 = local_a8;
                            ch_6 = func_0x180037b60(lVal_11,&local_1a0);
                            func_0x180001e70(local_b8);
                            if (ch_6 == '\0') {
                              uStack_b0 = 0;
                              local_b8 = (uint8_t  [8])local_110;
                              func_0x180038b10(uVal_28 * 0x18 + local_108._0_8_,local_b8);
                              uVal_21 = uVal_21 + 1;
                              goto LAB_180002b65;
                            }
                            func_0x180127530(local_110);
                            local_d4 = 0;
                            local_dc = 0;
                            func_0x180109a60(local_c8,&local_dc);
                          }
                          else {
                            func_0x180127530(local_110);
                            local_d4 = 0;
                            local_dc = 0;
                            func_0x180109a60(local_c8,&local_dc);
                          }
                        }
                        else {
                          func_0x180127530(local_110);
                          local_d4 = 0;
                          local_dc = 0;
                          func_0x180109a60(local_c8,&local_dc);
                        }
                      }
                      else {
                        func_0x180127530(local_110);
                        local_d4 = 0;
                        local_dc = 0;
                        func_0x180109a60(local_c8,&local_dc);
                      }
                    }
                    else {
                      func_0x180127530(local_110);
                      local_d4 = 0;
                      local_dc = 0;
                      func_0x180109a60(local_c8,&local_dc);
                    }
                    uStack_b0 = local_c8._0_8_;
                    local_b8 = (uint8_t  [8])local_110;
                    local_a8 = (uint8_t  [8])local_c8._8_8_;
                    local_c8 = (uint8_t  [16])0x0;
                    func_0x1800387e0(uVal_28 * 0x18 + local_108._0_8_,local_b8);
                    func_0x180038830(local_b8);
                    func_0x18001deb0(local_c8);
                    uVal_21 = uVal_21 + 1;
                    goto LAB_180002b65;
                  }
                }
                _local_b8 = (uint8_t  [16])0x0;
                func_0x180038610(uVal_28 * 0x18 + local_108._0_8_,local_b8);
                uVal_21 = uVal_21 + 1;
              } while( true );
            }
          }
        }
        goto LAB_18000408f;
      }
    }
  }
  else {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xaac) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0xaac) = 1;
      *(uint8_t *)(lVal_11 + 0xaaa) = 1;
      *(uint64_t *)(lVal_11 + 0xaa0) = 0xe354ef7c828785a6;
      *(uint16_t *)(lVal_11 + 0xaa8) = 0xf1b0;
      func_0x180673140(&LAB_18007f400);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_11 + 0xaa0);
    if (*(char *)(lVal_11 + 0xaaa) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x91219b1ff7f5f1d5;
      *(byte *)(lVal_11 + 0xaa8) = *(byte *)(lVal_11 + 0xaa8) ^ 0xd5;
      *(byte *)(lVal_11 + 0xaa9) = *(byte *)(lVal_11 + 0xaa9) ^ 0xf1;
      *(uint8_t *)(lVal_11 + 0xaaa) = 0;
    }
    local_f8._0_16_ = (uint8_t  [16])0x0;
    local_108 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_2);
    if (-1 < (int64_t)sz_9) {
      if (sz_9 < 0x10) {
        pU64_23 = local_108;
        uVal_28 = 0xf;
      }
      else {
        uVal_10 = sz_9 | 0xf;
        uVal_28 = 0x16;
        if (0x16 < uVal_10) {
          uVal_28 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          pU64_23 = (uint8_t *)func_0x180672de0(uVal_28 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_28 + 0x28);
          pU64_23 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_23 + -8) = lVal_11;
        }
        local_108._0_8_ = pU64_23;
      }
      local_f8._8_8_ = uVal_28;
      local_f8._0_8_ = sz_9;
      func_0x1806aa960(pU64_23,pU64_2,sz_9);
      pU64_23[sz_9] = 0;
      bFlag_7 = func_0x1801073b0(param_1,local_108);
      if (0xf < (uint64_t)local_f8._8_8_) {
        uVal_28 = local_f8._8_8_ + 1;
        lVal_11 = local_108._0_8_;
        if (0xfff < uVal_28) {
          lVal_11 = *(int64_t *)(local_108._0_8_ + -8);
          if (0x1f < (uint64_t)((local_108._0_8_ + -8) - lVal_11)) goto LAB_180004094;
          uVal_28 = local_f8._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_28);
      }
      bFlag_7 = bFlag_7 ^ 1;
      goto LAB_180002197;
    }
LAB_18000409c:
    func_0x18007ba70();
  }
  func_0x18007f460();
LAB_1800040a8:
  func_0x18007ba70();
LAB_1800040ae:
  func_0x18007ba70();
LAB_1800040b4:
  func_0x18007ba70();
LAB_1800040ba:
  func_0x18007ba70();
LAB_1800040c0:
  func_0x18007ba70();
LAB_1800040c6:
  func_0x18007ba70();
LAB_1800040cc:
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  uVal_12 = (*fnPtr_4)();
  return uVal_12;
}

// Unwind@1800040e0
void Unwind_1800040e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xc0c) = 0;
  return;
}

// Unwind@180004160
void Unwind_180004160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1800041d0
void Unwind_1800041d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004240
void Unwind_180004240(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1800042b0
void Unwind_1800042b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004320
void Unwind_180004320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004390
void Unwind_180004390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004400
void Unwind_180004400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004470
void Unwind_180004470(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1800044e0
void Unwind_1800044e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004550
void Unwind_180004550(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1800045c0
void Unwind_1800045c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004630
void Unwind_180004630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1800046a0
void Unwind_1800046a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004710
void Unwind_180004710(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004780
void Unwind_180004780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1800047f0
void Unwind_1800047f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004860
void Unwind_180004860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1800048d0
void Unwind_1800048d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004940
void Unwind_180004940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1800049b0
void Unwind_1800049b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180004a20
void Unwind_180004a20(uint64_t param_1,int64_t param_2)
{
  func_0x180037eb0(param_2 + 0x100);
  return;
}

// func_0x180004a90 - decompilation failed



// Unwind@180015540
void Unwind_180015540(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x22c) = 0;
  return;
}

// Unwind@180015630
void Unwind_180015630(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x164) = 0;
  return;
}

// Unwind@180015720
void Unwind_180015720(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x550) = 0;
  return;
}

// Unwind@180015810
void Unwind_180015810(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6f0) = 0;
  return;
}

// Unwind@180015900
void Unwind_180015900(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3ac) = 0;
  return;
}

// Unwind@1800159f0
void Unwind_1800159f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2cc) = 0;
  return;
}

// Unwind@180015ae0
void Unwind_180015ae0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2f0) = 0;
  return;
}

// Unwind@180015bd0
void Unwind_180015bd0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x9c4) = 0;
  return;
}

// Unwind@180015cc0
void Unwind_180015cc0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x50c) = 0;
  return;
}

// Unwind@180015db0
void Unwind_180015db0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x35c) = 0;
  return;
}

// Unwind@180015ea0
void Unwind_180015ea0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3f8) = 0;
  return;
}

// Unwind@180015f90
void Unwind_180015f90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x344) = 0;
  return;
}

// Unwind@180016080
void Unwind_180016080(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x32c) = 0;
  return;
}

// Unwind@180016170
void Unwind_180016170(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x294) = 0;
  return;
}

// Unwind@180016260
void Unwind_180016260(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x96c) = 0;
  return;
}

// Unwind@180016350
void Unwind_180016350(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x878) = 0;
  return;
}

// Unwind@180016440
void Unwind_180016440(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x6d0) = 0;
  return;
}

// Unwind@180016530
void Unwind_180016530(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3d8) = 0;
  return;
}

// Unwind@180016620
void Unwind_180016620(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7f4) = 0;
  return;
}

// Unwind@180016710
void Unwind_180016710(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x27c) = 0;
  return;
}

// Unwind@180016800
void Unwind_180016800(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x83c) = 0;
  return;
}

// Unwind@1800168f0
void Unwind_1800168f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x5bc) = 0;
  return;
}

// Unwind@1800169e0
void Unwind_1800169e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x420) = 0;
  return;
}

// Unwind@180016ad0
void Unwind_180016ad0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x4e0) = 0;
  return;
}

// Unwind@180016bc0
void Unwind_180016bc0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x308) = 0;
  return;
}

// Unwind@180016cb0
void Unwind_180016cb0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x2b4) = 0;
  return;
}

// Unwind@180016da0
void Unwind_180016da0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x264) = 0;
  return;
}

// Unwind@180016e90
void Unwind_180016e90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x660) = 0;
  return;
}

// Unwind@180016f80
void Unwind_180016f80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4e0);
  return;
}

// Unwind@180017060
void Unwind_180017060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@180017140
void Unwind_180017140(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4e0);
  return;
}

// Unwind@180017220
void Unwind_180017220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180017300
void Unwind_180017300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@1800173e0
void Unwind_1800173e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@1800174c0
void Unwind_1800174c0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x560);
  return;
}

// Unwind@1800175a0
void Unwind_1800175a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4e0);
  return;
}

// Unwind@180017680
void Unwind_180017680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4e0);
  return;
}

// Unwind@180017760
void Unwind_180017760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180017840
void Unwind_180017840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180017920
void Unwind_180017920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180017a00
void Unwind_180017a00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@180017ae0
void Unwind_180017ae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@180017bc0
void Unwind_180017bc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x510);
  return;
}

// Unwind@180017ca0
void Unwind_180017ca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x4e0);
  return;
}

// Unwind@180017d80
void Unwind_180017d80(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x560);
  return;
}

// Unwind@180017e60
void Unwind_180017e60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180017f40
void Unwind_180017f40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180018020
void Unwind_180018020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180018100
void Unwind_180018100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@1800181e0
void Unwind_1800181e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@1800182c0
void Unwind_1800182c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@1800183a0
void Unwind_1800183a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180018480
void Unwind_180018480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180018560
void Unwind_180018560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@180018640
void Unwind_180018640(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@180018720
void Unwind_180018720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@180018800
void Unwind_180018800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@1800188e0
void Unwind_1800188e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@1800189c0
void Unwind_1800189c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@180018aa0
void Unwind_180018aa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x510);
  return;
}

// Unwind@180018b80
void Unwind_180018b80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180018c60
void Unwind_180018c60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180018d40
void Unwind_180018d40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180018e20
void Unwind_180018e20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180018f00
void Unwind_180018f00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180018fe0
void Unwind_180018fe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@1800190c0
void Unwind_1800190c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@1800191a0
void Unwind_1800191a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019280
void Unwind_180019280(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019360
void Unwind_180019360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019440
void Unwind_180019440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019520
void Unwind_180019520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019600
void Unwind_180019600(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@1800196e0
void Unwind_1800196e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@1800197c0
void Unwind_1800197c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@1800198a0
void Unwind_1800198a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019980
void Unwind_180019980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019a60
void Unwind_180019a60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019b40
void Unwind_180019b40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x510);
  return;
}

// Unwind@180019c20
void Unwind_180019c20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019d00
void Unwind_180019d00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180019de0
void Unwind_180019de0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@180019ec0
void Unwind_180019ec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x510);
  return;
}

// Unwind@180019fa0
void Unwind_180019fa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001a080
void Unwind_18001a080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001a160
void Unwind_18001a160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001a240
void Unwind_18001a240(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001a320
void Unwind_18001a320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@18001a400
void Unwind_18001a400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001a4e0
void Unwind_18001a4e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001a5c0
void Unwind_18001a5c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@18001a6a0
void Unwind_18001a6a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@18001a780
void Unwind_18001a780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@18001a860
void Unwind_18001a860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@18001a940
void Unwind_18001a940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001aa20
void Unwind_18001aa20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@18001ab00
void Unwind_18001ab00(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x430);
  return;
}

// Unwind@18001abe0
void Unwind_18001abe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001acc0
void Unwind_18001acc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001ada0
void Unwind_18001ada0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001ae80
void Unwind_18001ae80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001af60
void Unwind_18001af60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b040
void Unwind_18001b040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b120
void Unwind_18001b120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b200
void Unwind_18001b200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b2e0
void Unwind_18001b2e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b3c0
void Unwind_18001b3c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b4a0
void Unwind_18001b4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b580
void Unwind_18001b580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b660
void Unwind_18001b660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b740
void Unwind_18001b740(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b820
void Unwind_18001b820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b900
void Unwind_18001b900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001b9e0
void Unwind_18001b9e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001bac0
void Unwind_18001bac0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001bba0
void Unwind_18001bba0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001bc80
void Unwind_18001bc80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001bd60
void Unwind_18001bd60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@18001be40
void Unwind_18001be40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001bf20
void Unwind_18001bf20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c000
void Unwind_18001c000(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c0e0
void Unwind_18001c0e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c1c0
void Unwind_18001c1c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c2a0
void Unwind_18001c2a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c380
void Unwind_18001c380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c460
void Unwind_18001c460(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c540
void Unwind_18001c540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c620
void Unwind_18001c620(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c700
void Unwind_18001c700(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x560);
  return;
}

// Unwind@18001c7e0
void Unwind_18001c7e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c8c0
void Unwind_18001c8c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001c9a0
void Unwind_18001c9a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@18001ca80
void Unwind_18001ca80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x510);
  return;
}

// Unwind@18001cb60
void Unwind_18001cb60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@18001cc40
void Unwind_18001cc40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@18001cd20
void Unwind_18001cd20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001ce00
void Unwind_18001ce00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@18001cee0
void Unwind_18001cee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001cfc0
void Unwind_18001cfc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001d0a0
void Unwind_18001d0a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001d180
void Unwind_18001d180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001d260
void Unwind_18001d260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@18001d340
void Unwind_18001d340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001d420
void Unwind_18001d420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001d500
void Unwind_18001d500(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001d5e0
void Unwind_18001d5e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@18001d6c0
void Unwind_18001d6c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001d7a0
void Unwind_18001d7a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001d880
void Unwind_18001d880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001d960
void Unwind_18001d960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x560);
  return;
}

// Unwind@18001da40
void Unwind_18001da40(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x428);
  if (pU64_1 != (uint64_t *)0x0) {
    (**(func_ptr_t *)*pU64_1)(pU64_1,1);
  }
  return;
}

// Unwind@18001db30
void Unwind_18001db30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x540);
  return;
}

// Unwind@18001dc10
void Unwind_18001dc10(uint64_t param_1,int64_t param_2)
{
  func_0x180037e70(param_2 + 0x560);
  return;
}

// Unwind@18001dcf0
void Unwind_18001dcf0(uint64_t param_1,int64_t param_2)
{
  func_0x180037eb0(param_2 + 0x4c0);
  return;
}

// Unwind@18001ddd0
void Unwind_18001ddd0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x28);
  return;
}

// func_0x18001deb0
void func_0x18001deb0(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  
  pLong_3 = *(int64_t **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00018001dedd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
        return;
      }
    }
  }
  return;
}

// func_0x18001def0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
bool func_0x18001def0(uint64_t param_1,short *param_2,short *param_3,short *param_4,int64_t param_5)
{
  uint *pU64_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  func_ptr_t fnPtr_4;
  char ch_5;
  byte bFlag_6;
  uint8_t uVal_7;
  short sz_8;
  short sz_9;
  short sz_10;
  size_t sz_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint8_t *pU64_15;
  uint64_t uVal_16;
  uint8_t *pU64_17;
  bool bFlag_18;
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint8_t local_58 [16];
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xa30) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0xa30) = 1;
    *(uint32_t *)(lVal_13 + 0xa28) = 0xa6092437;
    *(uint16_t *)(lVal_13 + 0xa2c) = 0x1b1;
    func_0x180673140(&LAB_18007f0e0);
  }
  lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_13 + 0xa28);
  if (*(char *)(lVal_13 + 0xa2d) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xc77d4573;
    *(byte *)(lVal_13 + 0xa2c) = *(byte *)(lVal_13 + 0xa2c) ^ 0xb1;
    *(uint8_t *)(lVal_13 + 0xa2d) = 0;
  }
  local_68 = (uint8_t  [16])0x0;
  sz_11 = strlen((char *)pU64_1);
  if (-1 < (int64_t)sz_11) {
    if (sz_11 < 0x10) {
      pU64_17 = local_68;
      uVal_16 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_12) {
        uVal_16 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_16 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_68._0_8_ = pU64_17;
    }
    local_58._8_8_ = uVal_16;
    local_58._0_8_ = sz_11;
    func_0x1806aa960(pU64_17,pU64_1,sz_11);
    pU64_17[sz_11] = 0;
    pU64_17 = local_68;
    ch_5 = func_0x1800d73d0(param_1,pU64_17);
    bFlag_6 = 1;
    if (ch_5 != '\0') {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xa3c) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0xa3c) = 1;
        *(uint8_t *)(lVal_13 + 0xa3a) = 1;
        *(uint32_t *)(lVal_13 + 0xa34) = 0xb3192c24;
        *(uint16_t *)(lVal_13 + 0xa38) = 0xb3d9;
        func_0x180673140(&LAB_18007f110);
      }
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_13 + 0xa34);
      if (*(char *)(lVal_13 + 0xa3a) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xc77d4573;
        *(byte *)(lVal_13 + 0xa38) = *(byte *)(lVal_13 + 0xa38) ^ 0xb1;
        *(byte *)(lVal_13 + 0xa39) = *(byte *)(lVal_13 + 0xa39) ^ 0xb3;
        *(uint8_t *)(lVal_13 + 0xa3a) = 0;
      }
      local_78 = (uint8_t  [16])0x0;
      local_88 = (uint8_t  [16])0x0;
      sz_11 = strlen((char *)pU64_1);
      if ((int64_t)sz_11 < 0) {
        func_0x18007ba70();
LAB_18001ec97:
        func_0x18007ba70();
LAB_18001ec9d:
        func_0x18007ba70();
        fnPtr_4 = (func_ptr_t )swi(3);
        uVal_7 = (*fnPtr_4)();
        return (bool)uVal_7;
      }
      if (sz_11 < 0x10) {
        uVal_16 = 0xf;
        pU64_15 = local_88;
      }
      else {
        uVal_12 = sz_11 | 0xf;
        uVal_16 = 0x16;
        if (0x16 < uVal_12) {
          uVal_16 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
        }
        else {
          lVal_13 = func_0x180672de0(uVal_16 + 0x28);
          pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_15 + -8) = lVal_13;
        }
        local_88._0_8_ = pU64_15;
      }
      local_78._8_8_ = uVal_16;
      local_78._0_8_ = sz_11;
      func_0x1806aa960(pU64_15,pU64_1,sz_11);
      pU64_15[sz_11] = 0;
      ch_5 = func_0x1800d73d0(param_1,local_88);
      bFlag_6 = 1;
      if (ch_5 != '\0') {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xa48) == '\0') {
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_13 + 0xa48) = 1;
          *(uint64_t *)(lVal_13 + 0xa40) = 0x1b5c7d9a014203b;
          func_0x180673140(&LAB_18007f140);
        }
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_2 = (uint64_t *)(lVal_13 + 0xa40);
        if (*(char *)(lVal_13 + 0xa47) == '\x01') {
          *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0xa45) << 8,*(uint32_t *)pU64_2) |
                    (uint64_t)*(byte *)(lVal_13 + 0xa44) << 0x20) ^ SUB168(_DAT_1806ae200,0);
        }
        local_b8 = (uint8_t  [16])0x0;
        local_c8 = (uint8_t  [16])0x0;
        sz_11 = strlen((char *)pU64_2);
        if ((int64_t)sz_11 < 0) goto LAB_18001ec97;
        if (sz_11 < 0x10) {
          pU64_15 = local_c8;
          uVal_16 = 0xf;
        }
        else {
          uVal_12 = sz_11 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_12) {
            uVal_16 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            lVal_13 = func_0x180672de0(uVal_16 + 0x28);
            pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_15 + -8) = lVal_13;
          }
          local_c8._0_8_ = pU64_15;
        }
        local_b8._8_8_ = uVal_16;
        local_b8._0_8_ = sz_11;
        func_0x1806aa960(pU64_15,pU64_2,sz_11);
        pU64_15[sz_11] = 0;
        ch_5 = func_0x1800d73d0(param_1,local_c8);
        bFlag_6 = 1;
        if (ch_5 != '\0') {
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xa58)
              == '\0') {
            lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_13 + 0xa58) = 1;
            *(uint64_t *)(lVal_13 + 0xa50) = 0x1b5dbc5a013203f;
            func_0x180673140(&LAB_18007f170);
          }
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_2 = (uint64_t *)(lVal_13 + 0xa50);
          if (*(char *)(lVal_13 + 0xa57) == '\x01') {
            *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0xa55) << 8,*(uint32_t *)pU64_2) |
                      (uint64_t)*(byte *)(lVal_13 + 0xa54) << 0x20) ^ SUB168(_DAT_1806ae200,0);
          }
          local_98 = (uint8_t  [16])0x0;
          local_a8 = (uint8_t  [16])0x0;
          sz_11 = strlen((char *)pU64_2);
          if ((int64_t)sz_11 < 0) goto LAB_18001ec9d;
          if (sz_11 < 0x10) {
            pU64_15 = local_a8;
            uVal_16 = 0xf;
          }
          else {
            uVal_12 = sz_11 | 0xf;
            uVal_16 = 0x16;
            if (0x16 < uVal_12) {
              uVal_16 = uVal_12;
            }
            if (uVal_12 < 0xfff) {
              pU64_15 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
            }
            else {
              lVal_13 = func_0x180672de0(uVal_16 + 0x28);
              pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_15 + -8) = lVal_13;
            }
            local_a8._0_8_ = pU64_15;
          }
          local_98._8_8_ = uVal_16;
          local_98._0_8_ = sz_11;
          func_0x1806aa960(pU64_15,pU64_2,sz_11);
          pU64_15[sz_11] = 0;
          bFlag_6 = func_0x1800d73d0(param_1,local_a8);
          if (0xf < (uint64_t)local_98._8_8_) {
            uVal_16 = local_98._8_8_ + 1;
            lVal_13 = local_a8._0_8_;
            if (0xfff < uVal_16) {
              lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
              if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_18001ec8f;
              uVal_16 = local_98._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_13,uVal_16);
          }
          bFlag_6 = bFlag_6 ^ 1;
        }
        if (0xf < (uint64_t)local_b8._8_8_) {
          uVal_16 = local_b8._8_8_ + 1;
          lVal_13 = local_c8._0_8_;
          if (0xfff < uVal_16) {
            lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_18001ec8f;
            uVal_16 = local_b8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_16);
        }
      }
      if (0xf < (uint64_t)local_78._8_8_) {
        uVal_16 = local_78._8_8_ + 1;
        lVal_13 = local_88._0_8_;
        if (0xfff < uVal_16) {
          lVal_13 = *(int64_t *)(local_88._0_8_ + -8);
          if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_13)) goto LAB_18001ec8f;
          uVal_16 = local_78._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_13,uVal_16);
      }
    }
    if (0xf < (uint64_t)local_58._8_8_) {
      uVal_16 = local_58._8_8_ + 1;
      lVal_13 = local_68._0_8_;
      if (0xfff < uVal_16) {
        lVal_13 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_13)) goto LAB_18001ec8f;
        uVal_16 = local_58._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_16);
    }
    if (bFlag_6 != 0) {
      return false;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xa64) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0xa64) = 1;
      *(uint8_t *)(lVal_13 + 0xa62) = 1;
      *(uint32_t *)(lVal_13 + 0xa5c) = 0x83919882;
      *(uint16_t *)(lVal_13 + 0xa60) = 0x9b77;
      func_0x180673140(&LAB_18007f1a0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0xa5c);
    if (*(char *)(lVal_13 + 0xa62) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xf7f5f1d5;
      *(byte *)(lVal_13 + 0xa60) = *(byte *)(lVal_13 + 0xa60) ^ 0x1f;
      *(byte *)(lVal_13 + 0xa61) = *(byte *)(lVal_13 + 0xa61) ^ 0x9b;
      *(uint8_t *)(lVal_13 + 0xa62) = 0;
    }
    local_58 = (uint8_t  [16])0x0;
    local_68 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_11) {
      uVal_16 = 0xf;
      if (0xf < sz_11) {
        uVal_12 = sz_11 | 0xf;
        uVal_16 = 0x16;
        if (0x16 < uVal_12) {
          uVal_16 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
        }
        else {
          lVal_13 = func_0x180672de0(uVal_16 + 0x28);
          pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_17 + -8) = lVal_13;
        }
        local_68._0_8_ = pU64_17;
      }
      local_58._0_8_ = sz_11;
      local_58._8_8_ = uVal_16;
      func_0x1806aa960(pU64_17,pU64_1,sz_11);
      pU64_17[sz_11] = 0;
      pU64_17 = local_68;
      sz_8 = func_0x1800d74e0(param_1,pU64_17);
      if (0xf < (uint64_t)local_58._8_8_) {
        uVal_16 = local_58._8_8_ + 1;
        lVal_13 = local_68._0_8_;
        if (0xfff < uVal_16) {
          lVal_13 = *(int64_t *)(local_68._0_8_ + -8);
          if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_13)) goto LAB_18001ec8f;
          uVal_16 = local_58._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_13,uVal_16);
      }
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xa70) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0xa70) = 1;
        *(uint64_t *)(lVal_13 + 0xa68) = 0x161072d4220b645;
        func_0x180673140(&LAB_18007f1d0);
      }
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_13 + 0xa68);
      if (*(char *)(lVal_13 + 0xa6f) == '\x01') {
        *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0xa6d) << 8,*(uint32_t *)pU64_2) |
                  (uint64_t)*(byte *)(lVal_13 + 0xa6c) << 0x20) ^ SUB168(_DAT_1806ae210,0);
      }
      local_58 = (uint8_t  [16])0x0;
      local_68 = (uint8_t  [16])0x0;
      sz_11 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_11) {
        uVal_16 = 0xf;
        if (0xf < sz_11) {
          uVal_12 = sz_11 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_12) {
            uVal_16 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            lVal_13 = func_0x180672de0(uVal_16 + 0x28);
            pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_17 + -8) = lVal_13;
          }
          local_68._0_8_ = pU64_17;
        }
        local_58._0_8_ = sz_11;
        local_58._8_8_ = uVal_16;
        func_0x1806aa960(pU64_17,pU64_2,sz_11);
        pU64_17[sz_11] = 0;
        pU64_17 = local_68;
        sz_9 = func_0x1800d74e0(param_1,pU64_17);
        if (0xf < (uint64_t)local_58._8_8_) {
          uVal_16 = local_58._8_8_ + 1;
          lVal_13 = local_68._0_8_;
          if (0xfff < uVal_16) {
            lVal_13 = *(int64_t *)(local_68._0_8_ + -8);
            if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_13)) goto LAB_18001ec8f;
            uVal_16 = local_58._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_16);
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xa80) == '\0') {
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_13 + 0xa80) = 1;
          *(uint64_t *)(lVal_13 + 0xa78) = 0x1c7d7f5c6bb1689;
          func_0x180673140(&LAB_18007f200);
        }
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_2 = (uint64_t *)(lVal_13 + 0xa78);
        if (*(char *)(lVal_13 + 0xa7f) == '\x01') {
          *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0xa7d) << 8,*(uint32_t *)pU64_2) |
                    (uint64_t)*(byte *)(lVal_13 + 0xa7c) << 0x20) ^ SUB168(_DAT_1806ae220,0);
        }
        local_58 = (uint8_t  [16])0x0;
        local_68 = (uint8_t  [16])0x0;
        sz_11 = strlen((char *)pU64_2);
        if (-1 < (int64_t)sz_11) {
          uVal_16 = 0xf;
          if (0xf < sz_11) {
            uVal_12 = sz_11 | 0xf;
            uVal_16 = 0x16;
            if (0x16 < uVal_12) {
              uVal_16 = uVal_12;
            }
            if (uVal_12 < 0xfff) {
              pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
            }
            else {
              lVal_13 = func_0x180672de0(uVal_16 + 0x28);
              pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_17 + -8) = lVal_13;
            }
            local_68._0_8_ = pU64_17;
          }
          local_58._8_8_ = uVal_16;
          local_58._0_8_ = sz_11;
          func_0x1806aa960(pU64_17,pU64_2,sz_11);
          pU64_17[sz_11] = 0;
          pU64_17 = local_68;
          sz_10 = func_0x1800d74e0(param_1,pU64_17);
          if (0xf < (uint64_t)local_58._8_8_) {
            uVal_16 = local_58._8_8_ + 1;
            lVal_13 = local_68._0_8_;
            if (0xfff < uVal_16) {
              lVal_13 = *(int64_t *)(local_68._0_8_ + -8);
              if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_13)) goto LAB_18001ec8f;
              uVal_16 = local_58._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_13,uVal_16);
          }
          if (sz_10 < 1 || (sz_9 < 1 || sz_8 < 1)) {
            return false;
          }
          *param_2 = sz_8;
          *param_3 = sz_9;
          *param_4 = sz_10;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xa90)
              == '\0') {
            lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_13 + 0xa90) = 1;
            *(uint64_t *)(lVal_13 + 0xa88) = 0x1d5e6c4e672e7a5;
            func_0x180673140(&LAB_18007f230);
          }
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_2 = (uint64_t *)(lVal_13 + 0xa88);
          if (*(char *)(lVal_13 + 0xa8f) == '\x01') {
            *pU64_2 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0xa8d) << 8,*(uint32_t *)pU64_2) |
                      (uint64_t)*(byte *)(lVal_13 + 0xa8c) << 0x20) ^ SUB168(_DAT_1806ae230,0);
          }
          local_68 = (uint8_t  [16])0x0;
          sz_11 = strlen((char *)pU64_2);
          if (-1 < (int64_t)sz_11) {
            uVal_16 = 0xf;
            if (0xf < sz_11) {
              uVal_12 = sz_11 | 0xf;
              uVal_16 = 0x16;
              if (0x16 < uVal_12) {
                uVal_16 = uVal_12;
              }
              if (uVal_12 < 0xfff) {
                pU64_17 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
              }
              else {
                lVal_13 = func_0x180672de0(uVal_16 + 0x28);
                pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_17 + -8) = lVal_13;
              }
              local_68._0_8_ = pU64_17;
            }
            local_58._0_8_ = sz_11;
            local_58._8_8_ = uVal_16;
            func_0x1806aa960(pU64_17,pU64_2,sz_11);
            pU64_17[sz_11] = 0;
            func_0x1800d7570(param_1,local_88,local_68);
            if (0xf < (uint64_t)local_58._8_8_) {
              uVal_16 = local_58._8_8_ + 1;
              lVal_13 = local_68._0_8_;
              if (0xfff < uVal_16) {
                lVal_13 = *(int64_t *)(local_68._0_8_ + -8);
                if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_13)) goto LAB_18001ec8f;
                uVal_16 = local_58._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_13,uVal_16);
            }
            pU64_17 = (uint8_t *)local_88._8_8_;
            bFlag_18 = local_88._0_8_ != local_88._8_8_;
            pU64_15 = (uint8_t *)local_88._0_8_;
            if (bFlag_18) {
              do {
                uVal_14 = func_0x1800d5480(*pU64_15);
                local_68._0_8_ = uVal_14;
                pU64_3 = *(uint64_t **)(param_5 + 8);
                if (pU64_3 == *(uint64_t **)(param_5 + 0x10)) {
                  func_0x18007f260(param_5,pU64_3,local_68);
                }
                else {
                  *pU64_3 = uVal_14;
                  *(int64_t *)(param_5 + 8) = *(int64_t *)(param_5 + 8) + 8;
                }
                pU64_15 = pU64_15 + 1;
              } while (pU64_15 != pU64_17);
              pU64_15 = (uint8_t *)local_88._0_8_;
            }
            if (pU64_15 == (uint8_t *)0x0) {
              return bFlag_18;
            }
            uVal_16 = local_78._0_8_ - (int64_t)pU64_15;
            if (uVal_16 < 0x1000) {
LAB_18001ea87:
              thunk_FUN_180695dd0(pU64_15,uVal_16);
              return bFlag_18;
            }
            if (pU64_15 + (-8 - (int64_t)*(uint8_t **)(pU64_15 + -8)) < (uint8_t *)0x20) {
              uVal_16 = uVal_16 + 0x27;
              pU64_15 = *(uint8_t **)(pU64_15 + -8);
              goto LAB_18001ea87;
            }
            goto LAB_18001ec8f;
          }
        }
      }
    }
  }
  func_0x18007ba70();
LAB_18001ec8f:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18001ecb0
void Unwind_18001ecb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18001ecf0
void Unwind_18001ecf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18001ed30
void Unwind_18001ed30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18001ed70
void Unwind_18001ed70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18001edb0
void Unwind_18001edb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18001edf0
void Unwind_18001edf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@18001ee30
void Unwind_18001ee30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18001ee70
void Unwind_18001ee70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18001eeb0
void Unwind_18001eeb0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x80);
  return;
}

// func_0x18001eef0
int64_t func_0x18001eef0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x5c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x5c) = 1;
    *(uint8_t *)(lVal_1 + 0x5a) = 1;
    *(uint64_t *)(lVal_1 + 0x50) = 0xd770658664160995;
    *(uint16_t *)(lVal_1 + 0x58) = 0x65b6;
    func_0x180673140(&LAB_18007bd60);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x50;
}

// func_0x18001ef80
void func_0x18001ef80(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 10) == '\x01') {
    *param_1 = *param_1 ^ 0xa31121ed077965d7;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xd7;
    *(byte *)((int64_t)param_1 + 9) = *(byte *)((int64_t)param_1 + 9) ^ 0x65;
    *(uint8_t *)((int64_t)param_1 + 10) = 0;
  }
  return;
}

// func_0x18001efb0 - decompilation failed



// Unwind@18002f390
void Unwind_18002f390(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x14a4) = 0;
  return;
}

// Unwind@18002f480
void Unwind_18002f480(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1180) = 0;
  return;
}

// Unwind@18002f570
void Unwind_18002f570(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfbc) = 0;
  return;
}

// Unwind@18002f660
void Unwind_18002f660(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf90) = 0;
  return;
}

// Unwind@18002f750
void Unwind_18002f750(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe1c) = 0;
  return;
}

// Unwind@18002f840
void Unwind_18002f840(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe04) = 0;
  return;
}

// Unwind@18002f930
void Unwind_18002f930(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe88) = 0;
  return;
}

// Unwind@18002fa20
void Unwind_18002fa20(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x141c) = 0;
  return;
}

// Unwind@18002fb10
void Unwind_18002fb10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1110) = 0;
  return;
}

// Unwind@18002fc00
void Unwind_18002fc00(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12ec) = 0;
  return;
}

// Unwind@18002fcf0
void Unwind_18002fcf0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11a0) = 0;
  return;
}

// Unwind@18002fde0
void Unwind_18002fde0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1000) = 0;
  return;
}

// Unwind@18002fed0
void Unwind_18002fed0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xea8) = 0;
  return;
}

// Unwind@18002ffc0
void Unwind_18002ffc0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdec) = 0;
  return;
}

// Unwind@1800300b0
void Unwind_1800300b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xe5c) = 0;
  return;
}

// Unwind@1800301a0
void Unwind_1800301a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdc8) = 0;
  return;
}

// Unwind@180030290
void Unwind_180030290(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xdb0) = 0;
  return;
}

// Unwind@180030380
void Unwind_180030380(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd8c) = 0;
  return;
}

// Unwind@180030470
void Unwind_180030470(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd74) = 0;
  return;
}

// Unwind@180030560
void Unwind_180030560(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12a4) = 0;
  return;
}

// Unwind@180030650
void Unwind_180030650(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd54) = 0;
  return;
}

// Unwind@180030740
void Unwind_180030740(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd3c) = 0;
  return;
}

// Unwind@180030830
void Unwind_180030830(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xd24) = 0;
  return;
}

// Unwind@180030920
void Unwind_180030920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3d0);
  return;
}

// Unwind@180030a00
void Unwind_180030a00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3d0);
  return;
}

// Unwind@180030ae0
void Unwind_180030ae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180030bc0
void Unwind_180030bc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3d0);
  return;
}

// Unwind@180030ca0
void Unwind_180030ca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180030d80
void Unwind_180030d80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180030e60
void Unwind_180030e60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180030f40
void Unwind_180030f40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180031020
void Unwind_180031020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3d0);
  return;
}

// Unwind@180031100
void Unwind_180031100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@1800311e0
void Unwind_1800311e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@1800312c0
void Unwind_1800312c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@1800313a0
void Unwind_1800313a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180031480
void Unwind_180031480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180031560
void Unwind_180031560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@180031640
void Unwind_180031640(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x400);
  return;
}

// Unwind@180031720
void Unwind_180031720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180031800
void Unwind_180031800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x590);
  return;
}

// Unwind@1800318e0
void Unwind_1800318e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x440);
  return;
}

// Unwind@1800319c0
void Unwind_1800319c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180031aa0
void Unwind_180031aa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}
