#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1803a0e10
void Unwind_1803a0e10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1207c) = 0;
  *(uint8_t *)(param_2 + 0x1e3) = 1;
  return;
}

// Unwind@1803a0e70
void Unwind_1803a0e70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12058) = 0;
  *(uint8_t *)(param_2 + 0x1e4) = 1;
  return;
}

// Unwind@1803a0ed0
void Unwind_1803a0ed0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1203c) = 0;
  *(uint8_t *)(param_2 + 0x1e5) = 1;
  return;
}

// Unwind@1803a0f30
void Unwind_1803a0f30(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12018) = 0;
  *(uint8_t *)(param_2 + 0x1e7) = 1;
  return;
}

// Unwind@1803a0f90
void Unwind_1803a0f90(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0xc0);
  return;
}

// Unwind@1803a0fd0
void Unwind_1803a0fd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1e3) = 0;
  return;
}

// Unwind@1803a1020
void Unwind_1803a1020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  *(uint8_t *)(param_2 + 0x1e4) = 0;
  return;
}

// Unwind@1803a1070
void Unwind_1803a1070(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x180);
  return;
}

// Unwind@1803a10b0
void Unwind_1803a10b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1e5) = 0;
  return;
}

// Unwind@1803a1100
void Unwind_1803a1100(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1e4) == '\x01') {
    func_0x180001e70(param_2 + 0x140);
  }
  return;
}

// Unwind@1803a1150
void Unwind_1803a1150(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1e3) == '\x01') {
    func_0x180001e70(param_2 + 0x160);
  }
  return;
}

// Unwind@1803a11a0
void Unwind_1803a11a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x1c0);
  return;
}

// Unwind@1803a11e0
void Unwind_1803a11e0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1e5) == '\x01') {
    func_0x180001e70(param_2 + 0x120);
  }
  return;
}

// Unwind@1803a1230
void Unwind_1803a1230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  *(uint8_t *)(param_2 + 0x1e7) = 0;
  return;
}

// Unwind@1803a1280
void Unwind_1803a1280(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@1803a12c0
void Unwind_1803a12c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803a1300
void Unwind_1803a1300(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x1e7);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x100);
  }
  *(char *)(param_2 + 0x1e6) = ch_1;
  return;
}

// Unwind@1803a1360
void Unwind_1803a1360(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1e6) == '\x01') {
    func_0x180001e70(param_2 + 0xe0);
  }
  return;
}

// Unwind@1803a13b0
void Unwind_1803a13b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// func_0x1803a13f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803a13f0(char param_1)
{
  uint64_t *pU64_1;
  char *fnPtr_2;
  byte *_Str;
  func_ptr_t fnPtr_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint32_t uVal_6;
  int iVal_7;
  size_t sz_8;
  uint64_t *pU64_9;
  uint32_t *pU64_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint8_t (*pArr16_14)[16];
  uint64_t uVal_15;
  uint16_t *pU64_16;
  uint64_t *pU64_17;
  uint16_t *pU64_18;
  uint8_t (*pArr16_19)[16];
  uint8_t *pU64_20;
  uint8_t (*pArr16_21)[16];
  uint32_t *pU64_22;
  uint64_t uVal_23;
  uint8_t local_218 [32];
  uint8_t local_1f8 [32];
  uint32_t local_1d8;
  uint32_t uStack_1d4;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t local_1c8;
  uint32_t uStack_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  uint64_t local_1b0;
  uint8_t (*local_1a8)[16];
  uint64_t local_1a0;
  uint64_t local_198;
  uint64_t local_190;
  uint32_t local_188;
  uint32_t uStack_184;
  uint32_t uStack_180;
  uint32_t uStack_17c;
  uint32_t local_178;
  uint32_t uStack_174;
  uint32_t uStack_170;
  uint32_t uStack_16c;
  uint32_t local_168;
  uint32_t uStack_164;
  uint32_t uStack_160;
  uint32_t uStack_15c;
  uint32_t local_158;
  uint32_t uStack_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t (*local_108)[16];
  uint64_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  uint64_t local_c8;
  uint8_t **local_c0;
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint8_t uStack_ac;
  uint8_t uStack_ab;
  uint8_t uStack_aa;
  uint8_t uStack_a9;
  uint16_t uStack_a8;
  uint8_t uStack_a6;
  uint8_t uStack_a5;
  uint8_t uStack_a4;
  uint8_t uStack_a3;
  uint16_t uStack_a2;
  uint16_t uStack_a0;
  uint16_t uStack_9e;
  uint16_t uStack_9c;
  uint16_t uStack_9a;
  uint8_t local_98 [4];
  uint32_t uStack_94;
  uint64_t uStack_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint8_t local_78 [16];
  uint8_t local_68 [27];
  char local_4d;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_4d = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1208c) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x1208c) = 1;
    *(uint8_t *)(lVal_11 + 0x12088) = 1;
    *(uint64_t *)(lVal_11 + 0x12080) = 0xf9d6041a635de4d6;
    func_0x180673140(&LAB_18042e970);
  }
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_11 + 0x12080);
  if (*(char *)(lVal_11 + 0x12088) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xf9a5637305338b95;
    *(uint8_t *)(lVal_11 + 0x12088) = 0;
  }
  _local_98 = ZEXT816(0);
  sz_8 = strlen((char *)pU64_1);
  if ((int64_t)sz_8 < 0) {
    func_0x18007ba70();
LAB_1803a2e08:
    func_0x18007ba70();
LAB_1803a2e0e:
    func_0x18007ba70();
LAB_1803a2e14:
    func_0x18007ba70();
LAB_1803a2e1a:
    func_0x18007ba70();
LAB_1803a2e20:
    func_0x18007ba90();
LAB_1803a2e26:
    local_49 = 1;
    func_0x18007ba70();
LAB_1803a2e33:
    local_4a = 1;
    func_0x18007ba70();
LAB_1803a2e40:
    func_0x18007ba70();
LAB_1803a2e46:
    local_4b = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_8 < 0x10) {
      pU64_20 = local_98;
      uVal_23 = 0xf;
    }
    else {
      uVal_12 = sz_8 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_12) {
        uVal_23 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_11;
      }
      _local_98 = (uint8_t (*)[16])pU64_20;
    }
    local_88 = (uint8_t  [8])sz_8;
    uStack_80 = uVal_23;
    func_0x1806aa960(pU64_20,pU64_1,sz_8);
    pU64_20[sz_8] = 0;
    pU64_9 = (uint64_t *)func_0x1800becb0();
    uVal_23 = pU64_9[2];
    if (0xf < (uint64_t)pU64_9[3]) {
      pU64_9 = (uint64_t *)*pU64_9;
    }
    if (uStack_80 - (int64_t)local_88 < uVal_23) {
      pU64_10 = (uint32_t *)func_0x1800871a0(local_98,uVal_23,local_88,0,pU64_9,uVal_23);
    }
    else {
      uVal_12 = uVal_23;
      if (uStack_80 < 0x10) {
        pU64_17 = (uint64_t *)local_98;
        if (pU64_17 < (uint64_t *)((int64_t)pU64_9 + uVal_23)) goto LAB_1803a1595;
      }
      else {
        pU64_17 = (uint64_t *)_local_98;
        if (_local_98 < (uint64_t *)((int64_t)pU64_9 + uVal_23)) {
LAB_1803a1595:
          if ((pU64_9 <= (uint64_t *)((int64_t)pU64_17 + (int64_t)local_88)) &&
             (uVal_12 = (int64_t)pU64_17 - (int64_t)pU64_9,
             pU64_17 < pU64_9 || (int64_t)pU64_17 - (int64_t)pU64_9 == 0)) {
            uVal_12 = 0;
          }
        }
      }
      lVal_11 = (int64_t)local_88 + 1;
      local_88 = (uint8_t  [8])((int64_t)local_88 + uVal_23);
      func_0x1806aa960((int64_t)pU64_17 + uVal_23,pU64_17,lVal_11);
      func_0x1806aa960(pU64_17,pU64_9,uVal_12);
      func_0x1806aa960((int64_t)pU64_17 + uVal_12,(int64_t)pU64_9 + uVal_12 + uVal_23,uVal_23 - uVal_12);
      pU64_10 = (uint32_t *)local_98;
    }
    local_188 = *pU64_10;
    uStack_184 = pU64_10[1];
    uStack_180 = pU64_10[2];
    uStack_17c = pU64_10[3];
    local_178 = pU64_10[4];
    uStack_174 = pU64_10[5];
    uStack_170 = pU64_10[6];
    uStack_16c = pU64_10[7];
    *(uint64_t *)(pU64_10 + 4) = 0;
    *(uint64_t *)(pU64_10 + 6) = 0xf;
    *(uint8_t *)pU64_10 = 0;
    if (0xf < uStack_80) {
      uVal_23 = uStack_80 + 1;
      lVal_11 = (int64_t)_local_98;
      if (0xfff < uVal_23) {
        lVal_11 = *(int64_t *)((int64_t)_local_98 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_98 + -8) - lVal_11)) goto LAB_1803a2e00;
        uVal_23 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_23);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x120a0) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x120a0) = 1;
      *(uint8_t *)(lVal_11 + 0x1209e) = 1;
      *(uint64_t *)(lVal_11 + 0x12090) = 0xfab1beea89c5b8a4;
      *(uint32_t *)(lVal_11 + 0x12098) = 0x9fdebc84;
      *(uint16_t *)(lVal_11 + 0x1209c) = 0xd9f0;
      func_0x180673140(&LAB_18042e990);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_11 + 0x12090);
    if (*(char *)(lVal_11 + 0x1209e) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x9bf3d983efabd7e7;
      *(uint *)(lVal_11 + 0x12098) = *(uint *)(lVal_11 + 0x12098) ^ 0xefabd7e7;
      *(byte *)(lVal_11 + 0x1209c) = *(byte *)(lVal_11 + 0x1209c) ^ 0x83;
      *(byte *)(lVal_11 + 0x1209d) = *(byte *)(lVal_11 + 0x1209d) ^ 0xd9;
      *(uint8_t *)(lVal_11 + 0x1209e) = 0;
    }
    _local_88 = ZEXT816(0);
    _local_98 = ZEXT816(0);
    sz_8 = strlen((char *)pU64_1);
    if ((int64_t)sz_8 < 0) goto LAB_1803a2e08;
    if (sz_8 < 0x10) {
      pU64_20 = local_98;
      uVal_23 = 0xf;
    }
    else {
      uVal_12 = sz_8 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_12) {
        uVal_23 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_11;
      }
      _local_98 = (uint8_t (*)[16])pU64_20;
    }
    uStack_80 = uVal_23;
    local_88 = (uint8_t  [8])sz_8;
    func_0x1806aa960(pU64_20,pU64_1,sz_8);
    pU64_20[sz_8] = 0;
    pU64_9 = (uint64_t *)func_0x1800becb0();
    uVal_23 = pU64_9[2];
    if (0xf < (uint64_t)pU64_9[3]) {
      pU64_9 = (uint64_t *)*pU64_9;
    }
    lVal_11 = (int64_t)local_88;
    if (uStack_80 - (int64_t)local_88 < uVal_23) {
      pU64_10 = (uint32_t *)func_0x1800871a0(local_98,uVal_23,local_88,0,pU64_9,uVal_23);
    }
    else {
      local_88 = (uint8_t  [8])((int64_t)local_88 + uVal_23);
      uVal_12 = uVal_23;
      if (uStack_80 < 0x10) {
        pU64_17 = (uint64_t *)local_98;
        if (pU64_17 < (uint64_t *)((int64_t)pU64_9 + uVal_23)) goto LAB_1803a17e2;
      }
      else {
        pU64_17 = (uint64_t *)_local_98;
        if (_local_98 < (uint64_t *)((int64_t)pU64_9 + uVal_23)) {
LAB_1803a17e2:
          if ((pU64_9 <= (uint64_t *)((int64_t)pU64_17 + lVal_11)) &&
             (uVal_12 = (int64_t)pU64_17 - (int64_t)pU64_9,
             pU64_17 < pU64_9 || (int64_t)pU64_17 - (int64_t)pU64_9 == 0)) {
            uVal_12 = 0;
          }
        }
      }
      func_0x1806aa960((int64_t)pU64_17 + uVal_23,pU64_17,lVal_11 + 1);
      func_0x1806aa960(pU64_17,pU64_9,uVal_12);
      func_0x1806aa960((int64_t)pU64_17 + uVal_12,(int64_t)pU64_9 + uVal_12 + uVal_23,uVal_23 - uVal_12);
      pU64_10 = (uint32_t *)local_98;
    }
    local_168 = *pU64_10;
    uStack_164 = pU64_10[1];
    uStack_160 = pU64_10[2];
    uStack_15c = pU64_10[3];
    local_158 = pU64_10[4];
    uStack_154 = pU64_10[5];
    uStack_150 = pU64_10[6];
    uStack_14c = pU64_10[7];
    *(uint64_t *)(pU64_10 + 4) = 0;
    *(uint64_t *)(pU64_10 + 6) = 0xf;
    *(uint8_t *)pU64_10 = 0;
    if (0xf < uStack_80) {
      uVal_23 = uStack_80 + 1;
      lVal_11 = (int64_t)_local_98;
      if (0xfff < uVal_23) {
        lVal_11 = *(int64_t *)((int64_t)_local_98 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_98 + -8) - lVal_11)) goto LAB_1803a2e00;
        uVal_23 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_23);
    }
    func_0x1800bef00(&local_188);
    func_0x1800bef00(&local_168);
    lVal_11 = func_0x1800576d0();
    local_1b0 = _Xtime_get_ticks();
    auArr_4 = _local_88;
    local_88._4_4_ = _UNK_1806cb561;
    local_88._0_4_ = _UNK_1806cb55d;
    uStack_80._4_4_ = auArr_4._12_4_;
    uStack_80._0_4_ = _UNK_1806cb565;
    uStack_94 = _UNK_1806cb551;
    local_98 = (uint8_t  [4])_DAT_1806cb54d;
    uStack_90._0_4_ = _UNK_1806cb555;
    uStack_90._4_4_ = _DAT_1806cb559;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x120c0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x120c0) = 1;
      func_0x18008fba0(lVal_13 + 0x120a1,local_98);
      func_0x180673140(&LAB_18042e9c0);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x120a1);
    func_0x18043c920(fnPtr_2);
    local_d8 = ZEXT816(0);
    local_e8 = ZEXT816(0);
    sz_8 = strlen(fnPtr_2);
    if ((int64_t)sz_8 < 0) goto LAB_1803a2e0e;
    uVal_23 = 0xf;
    pArr16_19 = &local_e8;
    if (0xf < sz_8) {
      uVal_12 = sz_8 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_12) {
        uVal_23 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pArr16_19 = (uint8_t (*)[16])func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_23 + 0x28);
        pArr16_19 = (uint8_t (*)[16])(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_19[-1] + 8) = lVal_13;
      }
      local_e8._0_8_ = pArr16_19;
    }
    local_d8._8_8_ = uVal_23;
    local_d8._0_8_ = sz_8;
    func_0x1806aa960(pArr16_19,fnPtr_2,sz_8);
    (*pArr16_19)[sz_8] = 0;
    local_c8 = local_1b0;
    uStack_90 = &LAB_1800adb80;
    _local_98 = (uint8_t (*)[16])&local_c8;
    local_88 = (uint8_t  [8])(lVal_11 % 1000);
    local_b8 = 0x3f;
    uStack_b4 = 0;
    pArr16_19 = (uint8_t (*)[16])local_98;
    uStack_b0 = SUB84(pArr16_19,0);
    uStack_ac = (uint8_t)((uint64_t)pArr16_19 >> 0x20);
    uStack_ab = (uint8_t)((uint64_t)pArr16_19 >> 0x28);
    uStack_aa = (uint8_t)((uint64_t)pArr16_19 >> 0x30);
    uStack_a9 = (uint8_t)((uint64_t)pArr16_19 >> 0x38);
    local_1a8 = &local_e8;
    if (0xf < (uint64_t)local_d8._8_8_) {
      local_1a8 = (uint8_t (*)[16])local_e8._0_8_;
    }
    local_1a0 = local_d8._0_8_;
    pU64_22 = &local_b8;
    func_0x18063ff10((uint8_t (*)[16])&local_108,&local_1a8,pU64_22);
    pU64_10 = &local_168;
    if (0xf < (uint64_t)local_d8._8_8_) {
      uVal_23 = local_d8._8_8_ + 1;
      lVal_11 = local_e8._0_8_;
      if (0xfff < uVal_23) {
        lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_1803a2e00;
        uVal_23 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_23);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x120c8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x120c8) = 1;
      *(uint8_t *)(lVal_11 + 0x120c4) = 1;
      *(uint16_t *)(lVal_11 + 0x120c2) = 0x3be7;
      func_0x180673140(&LAB_18042e9f0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (byte *)(lVal_11 + 0x120c2);
    if (*(char *)(lVal_11 + 0x120c4) == '\x01') {
      *_Str = *_Str ^ 0xbb;
      *(byte *)(lVal_11 + 0x120c3) = *(byte *)(lVal_11 + 0x120c3) ^ 0x3b;
      *(uint8_t *)(lVal_11 + 0x120c4) = 0;
    }
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a5 = 0;
    uStack_a4 = 0;
    uStack_a3 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_ab = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    sz_8 = strlen((char *)_Str);
    if ((int64_t)sz_8 < 0) goto LAB_1803a2e14;
    uVal_23 = 0xf;
    if (0xf < sz_8) {
      uVal_12 = sz_8 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_12) {
        uVal_23 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_22 = (uint32_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_23 + 0x28);
        pU64_22 = (uint32_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -2) = lVal_11;
      }
      local_b8 = SUB84(pU64_22,0);
      uStack_b4 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
    }
    uStack_a8 = (uint16_t)sz_8;
    uStack_a6 = (uint8_t)(sz_8 >> 0x10);
    uStack_a5 = (uint8_t)(sz_8 >> 0x18);
    uStack_a4 = (uint8_t)(sz_8 >> 0x20);
    uStack_a3 = (uint8_t)(sz_8 >> 0x28);
    uStack_a2 = (uint16_t)(sz_8 >> 0x30);
    uStack_a0 = (uint16_t)uVal_23;
    uStack_9e = (uint16_t)(uVal_23 >> 0x10);
    uStack_9c = (uint16_t)(uVal_23 >> 0x20);
    uStack_9a = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_22,_Str,sz_8);
    *(uint8_t *)((int64_t)pU64_22 + sz_8) = 0;
    uVal_23 = CONCAT44(uStack_154,local_158);
    if (0xf < CONCAT44(uStack_14c,uStack_150)) {
      pU64_10 = (uint32_t *)CONCAT44(uStack_164,local_168);
    }
    lVal_11 = CONCAT26(uStack_a2,
                      CONCAT15(uStack_a3,
                               CONCAT14(uStack_a4,CONCAT13(uStack_a5,CONCAT12(uStack_a6,uStack_a8)))
                              ));
    uVal_12 = CONCAT26(uStack_9a,CONCAT24(uStack_9c,CONCAT22(uStack_9e,uStack_a0)));
    if (uVal_12 - lVal_11 < uVal_23) {
      pArr16_14 = (uint8_t (*)[16])func_0x1800871a0(&local_b8,uVal_23,lVal_11,0,pU64_10,uVal_23);
    }
    else {
      lVal_13 = lVal_11 + uVal_23;
      uStack_a8 = (uint16_t)lVal_13;
      uStack_a6 = (uint8_t)((uint64_t)lVal_13 >> 0x10);
      uStack_a5 = (uint8_t)((uint64_t)lVal_13 >> 0x18);
      uStack_a4 = (uint8_t)((uint64_t)lVal_13 >> 0x20);
      uStack_a3 = (uint8_t)((uint64_t)lVal_13 >> 0x28);
      uStack_a2 = (uint16_t)((uint64_t)lVal_13 >> 0x30);
      uVal_15 = uVal_23;
      if (uVal_12 < 0x10) {
        pU64_22 = &local_b8;
        if (pU64_22 < (uint32_t *)((int64_t)pU64_10 + uVal_23)) goto LAB_1803a1c32;
      }
      else {
        pU64_22 = (uint32_t *)CONCAT44(uStack_b4,local_b8);
        if (pU64_22 < (uint32_t *)((int64_t)pU64_10 + uVal_23)) {
LAB_1803a1c32:
          if ((pU64_10 <= (uint32_t *)((int64_t)pU64_22 + lVal_11)) &&
             (uVal_15 = (int64_t)pU64_22 - (int64_t)pU64_10,
             pU64_22 < pU64_10 || (int64_t)pU64_22 - (int64_t)pU64_10 == 0)) {
            uVal_15 = 0;
          }
        }
      }
      func_0x1806aa960((int64_t)pU64_22 + uVal_23,pU64_22,lVal_11 + 1);
      func_0x1806aa960(pU64_22,pU64_10,uVal_15);
      func_0x1806aa960((int64_t)pU64_22 + uVal_15,(int64_t)pU64_10 + uVal_15 + uVal_23,uVal_23 - uVal_15);
      pArr16_14 = (uint8_t (*)[16])&local_b8;
    }
    _local_98 = *pArr16_14;
    _local_88 = pArr16_14[1];
    *(uint64_t *)pArr16_14[1] = 0;
    *(uint64_t *)(pArr16_14[1] + 8) = 0xf;
    (*pArr16_14)[0] = 0;
    pArr16_14 = (uint8_t (*)[16])&local_108;
    if (0xf < local_f0) {
      pArr16_14 = local_108;
    }
    lVal_11 = (int64_t)local_88;
    if (uStack_80 - (int64_t)local_88 < local_f8) {
      pArr16_19 = (uint8_t (*)[16])func_0x180082950(local_98,local_f8,local_f8,pArr16_14,local_f8);
    }
    else {
      lVal_13 = (int64_t)local_88 + local_f8;
      local_88 = (uint8_t  [8])lVal_13;
      pArr16_21 = pArr16_19;
      if (0xf < uStack_80) {
        pArr16_21 = _local_98;
      }
      func_0x1806aa960(*pArr16_21 + lVal_11,pArr16_14);
      (*pArr16_21)[lVal_13] = 0;
    }
    local_e8 = *pArr16_19;
    local_d8 = pArr16_19[1];
    *(uint64_t *)pArr16_19[1] = 0;
    *(uint64_t *)(pArr16_19[1] + 8) = 0xf;
    (*pArr16_19)[0] = 0;
    if (0xf < uStack_80) {
      uVal_23 = uStack_80 + 1;
      lVal_11 = (int64_t)_local_98;
      if (0xfff < uVal_23) {
        lVal_11 = *(int64_t *)((int64_t)_local_98 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_98 + -8) - lVal_11)) goto LAB_1803a2e00;
        uVal_23 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_23);
    }
    _local_88 = ZEXT816(0xf) << 0x40;
    auArr_4[15] = 0;
    auArr_4._0_15_ = stack0xffffffffffffff69;
    _local_98 = auArr_4 << 8;
    uVal_23 = CONCAT26(uStack_9a,CONCAT24(uStack_9c,CONCAT22(uStack_9e,uStack_a0)));
    if (0xf < uVal_23) {
      lVal_13 = CONCAT44(uStack_b4,local_b8);
      uVal_12 = uVal_23 + 1;
      lVal_11 = lVal_13;
      if (0xfff < uVal_12) {
        lVal_11 = *(int64_t *)(lVal_13 + -8);
        if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_11)) goto LAB_1803a2e00;
        uVal_12 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_12);
    }
    local_c8 = local_c8 & 0xffffffff00000000;
    local_c0 = &PTR_PTR_FUN_1806b00d8;
    if ((uint64_t)local_d8._8_8_ < 0x10) {
      _local_98 = &local_e8;
    }
    else {
      _local_98 = (uint8_t (*)[16])local_e8._0_8_;
    }
    uStack_90 = local_d8._0_8_;
    uVal_6 = func_0x180678230();
    func_0x1800a6340(&local_b8,uVal_6,local_98);
    uStack_90._4_4_ = uStack_174;
    uStack_90._0_4_ = local_178;
    _local_98 = (uint8_t (*)[16])&local_188;
    if (0xf < CONCAT44(uStack_16c,uStack_170)) {
      _local_98 = (uint8_t (*)[16])CONCAT44(uStack_184,local_188);
    }
    uVal_6 = func_0x180678230();
    func_0x1800a6340((uint8_t (*)[16])&local_1a8,uVal_6,local_98);
    local_68._0_16_ = ZEXT816(0);
    local_78 = ZEXT816(0);
    _local_88 = ZEXT816(0);
    _local_98 = ZEXT816(0);
    pArr16_19 = (uint8_t (*)[16])&local_1a8;
    if (7 < local_190) {
      pArr16_19 = local_1a8;
    }
    if (0x7ffffffffffffffe < local_198) goto LAB_1803a2e1a;
    pU64_18 = (uint16_t *)local_78;
    pU64_16 = pU64_18;
    if (7 < local_198) {
      uVal_23 = local_198 | 7;
      if (uVal_23 < 0x7fffffffffffffff) {
        uVal_12 = 10;
        if (10 < uVal_23) {
          uVal_12 = uVal_23;
        }
        if (uVal_23 < 0x7ff) {
          uVal_23 = func_0x180672de0(uVal_12 * 2 + 2);
        }
        else {
          if (0x7fffffffffffffeb < uVal_23) goto LAB_1803a2e20;
          lVal_11 = func_0x180672de0(uVal_12 * 2 + 0x29);
          uVal_23 = lVal_11 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_23 - 8) = lVal_11;
        }
        local_78._0_8_ = uVal_23;
        local_68._8_8_ = uVal_12;
        local_68._0_8_ = local_198;
        func_0x1806aa960(uVal_23,pArr16_19,local_198 * 2 + 2);
        local_c8 = local_c8 & 0xffffffff00000000;
        if (7 < (uint64_t)local_68._8_8_) {
          pU64_16 = (uint16_t *)local_78._0_8_;
        }
        goto LAB_1803a1fcd;
      }
      goto LAB_1803a2e20;
    }
    local_68._8_8_ = 7;
    local_68._0_8_ = local_198;
    local_78 = *pArr16_19;
    local_c8 = local_c8 & 0xffffffff00000000;
LAB_1803a1fcd:
    local_c0 = &PTR_PTR_FUN_1806b00d8;
    pU64_20 = local_98;
    iVal_7 = func_0x180677ed0(pU64_16,pU64_20,0x3e,0xffffffff);
    if (iVal_7 == 0) {
      uVal_6 = 6;
      if ((_local_88 & (uint8_t  [16])0x400) == (uint8_t  [16])0x0) {
        uVal_6 = 0x3e;
      }
      uStack_80._4_4_ = uVal_6;
LAB_1803a203f:
      if ((int)local_c8 != 0) goto joined_r0x0001803a205b;
LAB_1803a2072:
      func_0x18042ea10(local_98,&local_b8,0x10,&local_c8);
    }
    else {
      uStack_80._4_4_ = 0;
      if (iVal_7 < 0x7b) {
        if ((iVal_7 - 2U < 0x3f) &&
           ((0x4008000000000003U >> ((uint64_t)(iVal_7 - 2U) & 0x3f) & 1) != 0)) goto LAB_1803a203f;
      }
      else if (((iVal_7 == 0x7b) || (iVal_7 == 0xa1)) || (iVal_7 == 0x10b)) goto LAB_1803a203f;
      local_c8 = CONCAT44(local_c8._4_4_,iVal_7);
      local_c0 = &PTR_PTR_FUN_1806b00d8;
joined_r0x0001803a205b:
      auArr_5._8_8_ = 0;
      auArr_5._0_8_ = local_68._8_8_;
      if (7 < (uint64_t)local_68._8_8_) {
        pU64_18 = (uint16_t *)local_78._0_8_;
      }
      local_68._0_16_ = auArr_5 << 0x40;
      *pU64_18 = 0;
      if ((int)local_c8 == 0) goto LAB_1803a2072;
    }
    if (7 < (uint64_t)local_68._8_8_) {
      uVal_23 = local_68._8_8_ * 2 + 2;
      lVal_11 = local_78._0_8_;
      if (0xfff < uVal_23) {
        lVal_11 = *(int64_t *)(local_78._0_8_ + -8);
        if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_11)) goto LAB_1803a2e00;
        uVal_23 = local_68._8_8_ * 2 + 0x29;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_23);
    }
    if (7 < local_190) {
      uVal_23 = local_190 * 2 + 2;
      pArr16_19 = local_1a8;
      if (0xfff < uVal_23) {
        pArr16_19 = *(uint8_t (**)[16])(local_1a8[-1] + 8);
        if (0x1f < (uint64_t)((int64_t)local_1a8 + (-8 - (int64_t)pArr16_19))) goto LAB_1803a2e00;
        uVal_23 = local_190 * 2 + 0x29;
      }
      thunk_FUN_180695dd0(pArr16_19,uVal_23);
    }
    uVal_23 = CONCAT26(uStack_9a,CONCAT24(uStack_9c,CONCAT22(uStack_9e,uStack_a0)));
    if (7 < uVal_23) {
      lVal_13 = CONCAT44(uStack_b4,local_b8);
      uVal_12 = uVal_23 * 2 + 2;
      lVal_11 = lVal_13;
      if (0xfff < uVal_12) {
        lVal_11 = *(int64_t *)(lVal_13 + -8);
        if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_11)) goto LAB_1803a2e00;
        uVal_12 = uVal_23 * 2 + 0x29;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_12);
    }
    uVal_23 = local_f8;
    if ((int)local_c8 != 0) {
      (**(func_ptr_t *)(*local_c0 + 0x10))(local_c0,local_218);
      uStack_a8 = (uint16_t)_UNK_1806cb579;
      uStack_a6 = (uint8_t)((uint)_UNK_1806cb579 >> 0x10);
      uStack_a5 = (uint8_t)((uint)_UNK_1806cb579 >> 0x18);
      uStack_a4 = (uint8_t)_UNK_1806cb57d;
      uStack_a3 = (uint8_t)((uint)_UNK_1806cb57d >> 8);
      uStack_a2 = (uint16_t)((uint)_UNK_1806cb57d >> 0x10);
      uStack_a0 = (uint16_t)_UNK_1806cb581;
      uStack_9e = (uint16_t)((uint)_UNK_1806cb581 >> 0x10);
      local_b8 = _DAT_1806cb569;
      uStack_b4 = _UNK_1806cb56d;
      uStack_b0 = _UNK_1806cb571;
      uStack_ac = (uint8_t)_DAT_1806cb575;
      uStack_ab = (uint8_t)((uint)_DAT_1806cb575 >> 8);
      uStack_aa = (uint8_t)((uint)_DAT_1806cb575 >> 0x10);
      uStack_a9 = (uint8_t)((uint)_DAT_1806cb575 >> 0x18);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x120e8) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x120e8) = 1;
        func_0x18008fba0(lVal_11 + 0x120c9,&local_b8);
        func_0x180673140(&LAB_18042f780);
      }
      fnPtr_2 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x120c9
                       );
      func_0x18043c950(fnPtr_2);
      _local_88 = ZEXT816(0);
      _local_98 = ZEXT816(0);
      sz_8 = strlen(fnPtr_2);
      if ((int64_t)sz_8 < 0) goto LAB_1803a2e26;
      uVal_23 = 0xf;
      if (0xf < sz_8) {
        uVal_12 = sz_8 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_12) {
          uVal_23 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          local_49 = 1;
          pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
        }
        else {
          local_49 = 1;
          lVal_11 = func_0x180672de0(uVal_23 + 0x28);
          pU64_20 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_20 + -8) = lVal_11;
        }
        _local_98 = (uint8_t (*)[16])pU64_20;
      }
      uStack_80 = uVal_23;
      local_88 = (uint8_t  [8])sz_8;
      func_0x1806aa960(pU64_20,fnPtr_2,sz_8);
      pU64_20[sz_8] = 0;
      pU64_20 = local_98;
      func_0x18039d880(pU64_20,local_218);
      if (0xf < uStack_80) {
        uVal_23 = uStack_80 + 1;
        lVal_11 = (int64_t)_local_98;
        if (0xfff < uVal_23) {
          lVal_11 = *(int64_t *)((int64_t)_local_98 + -8);
          if (0x1f < (uint64_t)(((int64_t)_local_98 + -8) - lVal_11)) goto LAB_1803a2e00;
          uVal_23 = uStack_80 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_23);
      }
      _local_98 = (uint8_t (*)[16])&DAT_28d478d88fb3dcdf;
      DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
      if (DAT_180840a60 == 0) {
LAB_1803a28b0:
        DAT_180840a68 = 0;
LAB_1803a2ad4:
        if (0xf < (uint64_t)local_d8._8_8_) {
          uVal_23 = local_d8._8_8_ + 1;
          lVal_11 = local_e8._0_8_;
          if (0xfff < uVal_23) {
            lVal_11 = *(int64_t *)(local_e8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_11)) goto LAB_1803a2e00;
            uVal_23 = local_d8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_23);
        }
        if (0xf < local_f0) {
          uVal_23 = local_f0 + 1;
          pArr16_19 = local_108;
          if (0xfff < uVal_23) {
            pArr16_19 = *(uint8_t (**)[16])(local_108[-1] + 8);
            if (0x1f < (uint64_t)((int64_t)local_108 + (-8 - (int64_t)pArr16_19)))
            goto LAB_1803a2e00;
            uVal_23 = local_f0 + 0x28;
          }
          thunk_FUN_180695dd0(pArr16_19,uVal_23);
        }
        uVal_23 = CONCAT44(uStack_14c,uStack_150);
        if (0xf < uVal_23) {
          lVal_13 = CONCAT44(uStack_164,local_168);
          uVal_12 = uVal_23 + 1;
          lVal_11 = lVal_13;
          if (0xfff < uVal_12) {
            lVal_11 = *(int64_t *)(lVal_13 + -8);
            if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_11)) goto LAB_1803a2e00;
            uVal_12 = uVal_23 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_12);
        }
        uVal_23 = CONCAT44(uStack_16c,uStack_170);
        if (0xf < uVal_23) {
          lVal_13 = CONCAT44(uStack_184,local_188);
          uVal_12 = uVal_23 + 1;
          lVal_11 = lVal_13;
          if (0xfff < uVal_12) {
            lVal_11 = *(int64_t *)(lVal_13 + -8);
            if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_11)) {
LAB_1803a2e00:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_12 = uVal_23 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_12);
        }
        return;
      }
      _local_98 = (uint8_t (*)[16])&DAT_28d0f803f34a0611;
      lVal_11 = DAT_180840a58[0xc9];
      (**(func_ptr_t *)(*local_c0 + 0x10))(local_c0,local_1f8,local_c8 & 0xffffffff);
      local_1d8 = PTR_DAT_1806b6f30._0_4_;
      uStack_1d4 = PTR_DAT_1806b6f30._4_4_;
      uStack_1d0 = _UNK_1806b6f38;
      uStack_1cc = _UNK_1806b6f3c;
      uStack_a8 = _UNK_1806cb595;
      uStack_a6 = (uint8_t)_UNK_1806cb597;
      uStack_a5 = (uint8_t)((uint)_UNK_1806cb597 >> 8);
      uStack_a4 = (uint8_t)((uint)_UNK_1806cb597 >> 0x10);
      uStack_a3 = (uint8_t)((uint)_UNK_1806cb597 >> 0x18);
      uStack_a2 = (uint16_t)_UNK_1806cb59b;
      uStack_a0 = (uint16_t)((uint)_UNK_1806cb59b >> 0x10);
      uStack_9e = (uint16_t)_UNK_1806cb59f;
      uStack_9c = (uint16_t)((uint)_UNK_1806cb59f >> 0x10);
      local_b8 = _DAT_1806cb585;
      uStack_b4 = _UNK_1806cb589;
      uStack_b0 = _UNK_1806cb58d;
      uStack_ac = (uint8_t)_UNK_1806cb591;
      uStack_ab = (uint8_t)((ushort)_UNK_1806cb591 >> 8);
      uStack_aa = (uint8_t)_DAT_1806cb593;
      uStack_a9 = (uint8_t)((ushort)_DAT_1806cb593 >> 8);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12108) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0x12108) = 1;
        func_0x18008fa60(lVal_13 + 0x120e9,&local_b8);
        func_0x180673140(&LAB_18042f7b0);
      }
      fnPtr_2 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x120e9
                       );
      func_0x18043c980(fnPtr_2);
      _local_88 = ZEXT816(0);
      _local_98 = ZEXT816(0);
      sz_8 = strlen(fnPtr_2);
      if (-1 < (int64_t)sz_8) {
        uVal_23 = 0xf;
        if (0xf < sz_8) {
          uVal_12 = sz_8 | 0xf;
          uVal_23 = 0x16;
          if (0x16 < uVal_12) {
            uVal_23 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            local_4a = 1;
            pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
          }
          else {
            local_4a = 1;
            lVal_13 = func_0x180672de0(uVal_23 + 0x28);
            pU64_20 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_20 + -8) = lVal_13;
          }
          _local_98 = (uint8_t (*)[16])pU64_20;
        }
        uStack_80 = uVal_23;
        local_88 = (uint8_t  [8])sz_8;
        func_0x1806aa960(pU64_20,fnPtr_2,sz_8);
        pU64_20[sz_8] = 0;
        func_0x180143b90(lVal_11,local_98,&local_1d8,local_1f8);
LAB_1803a2a8f:
        if (0xf < uStack_80) {
          uVal_23 = uStack_80 + 1;
          lVal_11 = (int64_t)_local_98;
          if (0xfff < uVal_23) {
            lVal_11 = *(int64_t *)((int64_t)_local_98 + -8);
            if (0x1f < (uint64_t)(((int64_t)_local_98 + -8) - lVal_11)) goto LAB_1803a2e00;
            uVal_23 = uStack_80 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_23);
        }
        goto LAB_1803a2ad4;
      }
      goto LAB_1803a2e33;
    }
    if (local_4d == '\0') goto LAB_1803a2ad4;
    local_138 = ZEXT816(0);
    local_148 = ZEXT816(0);
    pArr16_19 = local_108;
    if (local_f0 < 0x10) {
      pArr16_19 = (uint8_t (*)[16])&local_108;
    }
    if ((int64_t)local_f8 < 0) goto LAB_1803a2e40;
    if (local_f8 < 0x10) {
      local_138._8_8_ = 0xf;
      local_138._0_8_ = local_f8;
      local_148 = *pArr16_19;
    }
    else {
      uVal_15 = local_f8 | 0xf;
      uVal_12 = 0x16;
      if (0x16 < uVal_15) {
        uVal_12 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        uVal_15 = func_0x180672de0(uVal_12 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_12 + 0x28);
        uVal_15 = lVal_11 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_15 - 8) = lVal_11;
      }
      local_148._0_8_ = uVal_15;
      local_138._8_8_ = uVal_12;
      local_138._0_8_ = uVal_23;
      func_0x1806aa960(uVal_15,pArr16_19,uVal_23 + 1);
    }
    local_b8 = _DAT_1806cb5a3;
    uStack_b4 = _UNK_1806cb5a7;
    uStack_b0 = _UNK_1806cb5ab;
    uStack_ac = (uint8_t)_UNK_1806cb5af;
    uStack_ab = (uint8_t)((uint)_UNK_1806cb5af >> 8);
    uStack_aa = (uint8_t)((uint)_UNK_1806cb5af >> 0x10);
    uStack_a9 = 0x49;
    uStack_a8 = 0x1e00;
    uStack_a6 = 0x69;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12120) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x12120) = 1;
      func_0x18007cb80(lVal_11 + 0x12109,&local_b8);
      func_0x180673140(&LAB_18042f7e0);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12109);
    func_0x18043c9c0(fnPtr_2);
    _local_88 = ZEXT816(0);
    _local_98 = ZEXT816(0);
    sz_8 = strlen(fnPtr_2);
    if ((int64_t)sz_8 < 0) goto LAB_1803a2e46;
    if (sz_8 < 0x10) {
      pU64_20 = local_98;
      uVal_23 = 0xf;
    }
    else {
      uVal_12 = sz_8 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_12) {
        uVal_23 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_4b = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_4b = 1;
        lVal_11 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_11;
      }
      _local_98 = (uint8_t (*)[16])pU64_20;
    }
    uStack_80 = uVal_23;
    local_88 = (uint8_t  [8])sz_8;
    func_0x1806aa960(pU64_20,fnPtr_2,sz_8);
    pU64_20[sz_8] = 0;
    pU64_20 = local_98;
    func_0x18039d880(pU64_20,local_148);
    if (0xf < uStack_80) {
      uVal_23 = uStack_80 + 1;
      lVal_11 = (int64_t)_local_98;
      if (0xfff < uVal_23) {
        lVal_11 = *(int64_t *)((int64_t)_local_98 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_98 + -8) - lVal_11)) goto LAB_1803a2e00;
        uVal_23 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_23);
    }
    _local_98 = (uint8_t (*)[16])&DAT_28d478d88fb3dcdf;
    DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
    if (DAT_180840a60 == 0) goto LAB_1803a28b0;
    _local_98 = (uint8_t (*)[16])&DAT_28d0f803f34a0611;
    lVal_11 = DAT_180840a58[0xc9];
    local_118 = ZEXT816(0);
    local_128 = ZEXT816(0);
    pArr16_19 = local_108;
    if (local_f0 < 0x10) {
      pArr16_19 = (uint8_t (*)[16])&local_108;
    }
    if (-1 < (int64_t)local_f8) {
      if (local_f8 < 0x10) {
        local_118._8_8_ = 0xf;
        local_118._0_8_ = local_f8;
        local_128 = *pArr16_19;
      }
      else {
        uVal_12 = local_f8 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_12) {
          uVal_23 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          uVal_12 = func_0x180672de0(uVal_23 + 1);
        }
        else {
          lVal_13 = func_0x180672de0(uVal_23 + 0x28);
          uVal_12 = lVal_13 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_12 - 8) = lVal_13;
        }
        local_128._0_8_ = uVal_12;
        local_118._8_8_ = uVal_23;
        local_118._0_8_ = local_f8;
        func_0x1806aa960(uVal_12,pArr16_19,local_f8 + 1);
      }
      local_1c8 = PTR_DAT_1806b75a0._0_4_;
      uStack_1c4 = PTR_DAT_1806b75a0._4_4_;
      uStack_1c0 = _UNK_1806b75a8;
      uStack_1bc = _UNK_1806b75ac;
      local_b8 = _DAT_1806cb5b6;
      uStack_b4 = _UNK_1806cb5ba;
      uStack_b0 = _UNK_1806cb5be;
      uStack_ac = (uint8_t)_UNK_1806cb5c2;
      uStack_ab = 0x26;
      uStack_aa = 0xfe;
      uStack_a9 = 0x59;
      uStack_a8 = 0x5761;
      uStack_a6 = 0x1e;
      uStack_a5 = 0xb2;
      uStack_a4 = 0x93;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12138) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0x12138) = 1;
        func_0x18007cd50(lVal_13 + 0x12121,&local_b8);
        func_0x180673140(&LAB_18042f810);
      }
      fnPtr_2 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12121
                       );
      func_0x18043ca00(fnPtr_2);
      _local_88 = ZEXT816(0);
      _local_98 = ZEXT816(0);
      sz_8 = strlen(fnPtr_2);
      if ((int64_t)sz_8 < 0) goto LAB_1803a2e59;
      uVal_23 = 0xf;
      if (0xf < sz_8) {
        uVal_12 = sz_8 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_12) {
          uVal_23 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          local_4c = 1;
          pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
        }
        else {
          local_4c = 1;
          lVal_13 = func_0x180672de0(uVal_23 + 0x28);
          pU64_20 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_20 + -8) = lVal_13;
        }
        _local_98 = (uint8_t (*)[16])pU64_20;
      }
      uStack_80 = uVal_23;
      local_88 = (uint8_t  [8])sz_8;
      func_0x1806aa960(pU64_20,fnPtr_2,sz_8);
      pU64_20[sz_8] = 0;
      func_0x180143b90(lVal_11,local_98,&local_1c8,local_128);
      goto LAB_1803a2a8f;
    }
  }
  func_0x18007ba70();
LAB_1803a2e59:
  local_4c = 1;
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// Unwind@1803a2e70
void Unwind_1803a2e70(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12138) = 0;
  *(uint8_t *)(param_2 + 0x1fc) = 1;
  return;
}

// Unwind@1803a2ec0
void Unwind_1803a2ec0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12120) = 0;
  *(uint8_t *)(param_2 + 0x1fd) = 1;
  return;
}

// Unwind@1803a2f10
void Unwind_1803a2f10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12108) = 0;
  *(uint8_t *)(param_2 + 0x1fe) = 1;
  return;
}

// Unwind@1803a2f60
void Unwind_1803a2f60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x120e8) = 0;
  *(uint8_t *)(param_2 + 0x1ff) = 1;
  return;
}

// Unwind@1803a2fb0
void Unwind_1803a2fb0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x120c0) = 0;
  return;
}

// Unwind@1803a3000
void Unwind_1803a3000(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  *(uint8_t *)(param_2 + 0x1fc) = 0;
  return;
}

// Unwind@1803a3040
void Unwind_1803a3040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  *(uint8_t *)(param_2 + 0x1fd) = 0;
  return;
}

// Unwind@1803a3080
void Unwind_1803a3080(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1fc) == '\x01') {
    func_0x180001e70(param_2 + 0x120);
  }
  return;
}

// Unwind@1803a30d0
void Unwind_1803a30d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  *(uint8_t *)(param_2 + 0x1fe) = 0;
  return;
}

// Unwind@1803a3110
void Unwind_1803a3110(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1fd) == '\x01') {
    func_0x180001e70(param_2 + 0x100);
  }
  return;
}

// Unwind@1803a3160
void Unwind_1803a3160(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1803a31a0
void Unwind_1803a31a0(uint64_t param_1,int64_t param_2)
{
  func_0x180088f50(param_2 + 0x1b0);
  return;
}

// Unwind@1803a31e0
void Unwind_1803a31e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  *(uint8_t *)(param_2 + 0x1ff) = 0;
  return;
}

// Unwind@1803a3220
void Unwind_1803a3220(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1fe) == '\x01') {
    func_0x180001e70(param_2 + 0x50);
  }
  return;
}

// Unwind@1803a3260
void Unwind_1803a3260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1803a32a0
void Unwind_1803a32a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803a32e0
void Unwind_1803a32e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1803a3320
void Unwind_1803a3320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1803a3360
void Unwind_1803a3360(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1ff) == '\x01') {
    func_0x180001e70(param_2 + 0x30);
  }
  return;
}

// Unwind@1803a33a0
void Unwind_1803a33a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0xa0);
  return;
}

// Unwind@1803a33e0
void Unwind_1803a33e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 400);
  return;
}

// Unwind@1803a3420
void Unwind_1803a3420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803a3460
void Unwind_1803a3460(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1803a34a0
void Unwind_1803a34a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803a34e0
void Unwind_1803a34e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x1803a3520
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
bool func_0x1803a3520(uint64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t *pU64_3;
  byte *pU8_4;
  char ch_5;
  func_ptr_t fnPtr_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t uVal_13;
  uint32_t uVal_14;
  int iVal_15;
  size_t sz_16;
  uint64_t *pU64_17;
  uint8_t (*pArr16_18)[16];
  uint64_t uVal_19;
  int64_t lVal_20;
  uint64_t uVal_21;
  int64_t lVal_22;
  uint64_t *pU64_23;
  int64_t *pLong_24;
  int64_t lVal_25;
  int64_t lVal_26;
  uint64_t *******ptr7_U64_27;
  uint8_t *pU64_28;
  uint64_t uVal_29;
  uint *_Str;
  bool bFlag_30;
  uint8_t *local_2b0;
  uint64_t local_2a8;
  uint64_t local_2a0;
  uint8_t local_298 [8];
  uint64_t uStack_290;
  uint8_t local_288 [16];
  uint8_t local_278 [16];
  uint8_t local_268 [16];
  uint8_t local_258 [16];
  uint8_t local_248 [16];
  uint8_t local_238 [16];
  uint8_t local_228 [16];
  uint8_t local_218 [16];
  uint8_t local_208 [16];
  uint8_t local_1f8 [16];
  uint8_t local_1e8 [16];
  uint8_t local_1d8 [16];
  uint8_t local_1c8 [16];
  uint8_t local_1b8 [16];
  uint8_t local_1a8 [16];
  uint8_t local_198 [24];
  int64_t local_180;
  uint *local_178;
  uint64_t *local_170;
  int64_t local_168;
  int64_t *plStack_160;
  uint64_t *******local_158;
  int64_t lStack_150;
  int64_t local_148;
  uint64_t uStack_140;
  uint *local_130;
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint64_t *******local_108 [2];
  uint64_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  size_t local_c8;
  uint64_t uStack_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint64_t local_a8;
  uint64_t uStack_a0;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [24];
  uint64_t local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1214c) == '\0') {
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_22 + 0x1214c) = 1;
    *(uint8_t *)(lVal_22 + 0x12148) = 1;
    *(uint64_t *)(lVal_22 + 0x12140) = 0xfba0682ad74d56a2;
    func_0x180673140(&LAB_18042f840);
  }
  lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_3 = (uint64_t *)(lVal_22 + 0x12140);
  if (*(char *)(lVal_22 + 0x12148) == '\x01') {
    *pU64_3 = *pU64_3 ^ 0xfbd30f43b12339e1;
    *(uint8_t *)(lVal_22 + 0x12148) = 0;
  }
  local_d8 = (uint8_t  [16])0x0;
  sz_16 = strlen((char *)pU64_3);
  if (-1 < (int64_t)sz_16) {
    local_2a0 = param_1;
    if (sz_16 < 0x10) {
      pU64_28 = local_d8;
      uVal_29 = 0xf;
    }
    else {
      uVal_19 = sz_16 | 0xf;
      uVal_29 = 0x16;
      if (0x16 < uVal_19) {
        uVal_29 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
      }
      else {
        lVal_22 = func_0x180672de0(uVal_29 + 0x28);
        pU64_28 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_22;
      }
      local_d8._0_8_ = pU64_28;
    }
    local_c8 = sz_16;
    uStack_c0 = uVal_29;
    func_0x1806aa960(pU64_28,pU64_3,sz_16);
    pU64_28[sz_16] = 0;
    pU64_17 = (uint64_t *)func_0x1800becb0();
    uVal_29 = pU64_17[2];
    if (0xf < (uint64_t)pU64_17[3]) {
      pU64_17 = (uint64_t *)*pU64_17;
    }
    if (uStack_c0 - local_c8 < uVal_29) {
      pArr16_18 = (uint8_t (*)[16])func_0x1800871a0(local_d8,uVal_29,local_c8,0,pU64_17,uVal_29);
    }
    else {
      uVal_19 = uVal_29;
      if (uStack_c0 < 0x10) {
        pU64_23 = (uint64_t *)local_d8;
        if (pU64_23 < (uint64_t *)((int64_t)pU64_17 + uVal_29)) goto LAB_1803a36d7;
      }
      else {
        pU64_23 = (uint64_t *)local_d8._0_8_;
        if ((uint64_t)local_d8._0_8_ < (uint64_t *)((int64_t)pU64_17 + uVal_29)) {
LAB_1803a36d7:
          if ((pU64_17 <= (uint64_t *)((int64_t)pU64_23 + local_c8)) &&
             (uVal_19 = (int64_t)pU64_23 - (int64_t)pU64_17,
             pU64_23 < pU64_17 || (int64_t)pU64_23 - (int64_t)pU64_17 == 0)) {
            uVal_19 = 0;
          }
        }
      }
      lVal_22 = local_c8 + 1;
      local_c8 = local_c8 + uVal_29;
      func_0x1806aa960((int64_t)pU64_23 + uVal_29,pU64_23,lVal_22);
      func_0x1806aa960(pU64_23,pU64_17,uVal_19);
      func_0x1806aa960((int64_t)pU64_23 + uVal_19,(int64_t)pU64_17 + uVal_19 + uVal_29,uVal_29 - uVal_19);
      pArr16_18 = &local_d8;
    }
    _local_298 = *pArr16_18;
    local_288 = pArr16_18[1];
    *(uint64_t *)pArr16_18[1] = 0;
    *(uint64_t *)(pArr16_18[1] + 8) = 0xf;
    (*pArr16_18)[0] = 0;
    func_0x1800bef00(local_298);
    if (0xf < (uint64_t)local_288._8_8_) {
      uVal_29 = local_288._8_8_ + 1;
      lVal_22 = (int64_t)local_298;
      if (0xfff < uVal_29) {
        lVal_22 = *(int64_t *)((int64_t)local_298 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_298 + -8) - lVal_22)) goto LAB_1803a47eb;
        uVal_29 = local_288._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_29);
    }
    local_288 = ZEXT816(0xf) << 0x40;
    auArr_7[15] = 0;
    auArr_7._0_15_ = stack0xfffffffffffffd69;
    _local_298 = auArr_7 << 8;
    if (0xf < uStack_c0) {
      uVal_29 = uStack_c0 + 1;
      lVal_22 = local_d8._0_8_;
      if (0xfff < uVal_29) {
        lVal_22 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_22)) goto LAB_1803a47eb;
        uVal_29 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_22,uVal_29);
    }
    local_298 = (uint8_t  [8])func_0x1800becb0();
    pU64_17 = (uint64_t *)((int64_t)local_298 + 0x10);
    if (0xf < *(uint64_t *)((int64_t)local_298 + 0x18)) {
      local_298 = *(uint8_t (*)[8])local_298;
    }
    uStack_290 = *pU64_17;
    uVal_14 = func_0x180678230();
    func_0x1800a6340(local_d8,uVal_14,local_298);
    local_e8 = (uint8_t  [16])0x0;
    iVal_15 = func_0x180087380(local_e8,local_d8,0);
    if (iVal_15 != 0) goto LAB_1803a4832;
    pLong_24 = (int64_t *)local_e8._8_8_;
    if ((int64_t *)local_e8._8_8_ == (int64_t *)0x0) {
      local_168 = local_e8._0_8_;
      plStack_160 = (int64_t *)0x0;
LAB_1803a38ce:
      local_198._0_16_ = (uint8_t  [16])0x0;
    }
    else {
      LOCK();
      *(int *)(int64_t *)(local_e8._8_8_ + 8) = *(int *)(int64_t *)(local_e8._8_8_ + 8) + 1;
      UNLOCK();
      local_168 = local_e8._0_8_;
      plStack_160 = (int64_t *)local_e8._8_8_;
      if ((int64_t *)local_e8._8_8_ == (int64_t *)0x0) goto LAB_1803a38ce;
      LOCK();
      *(int *)(int64_t *)(local_e8._8_8_ + 8) = *(int *)(int64_t *)(local_e8._8_8_ + 8) + 1;
      UNLOCK();
      local_198._0_16_ = (uint8_t  [16])0x0;
      if ((int64_t *)local_e8._8_8_ != (int64_t *)0x0) {
        LOCK();
        pLong_1 = (int64_t *)(local_e8._8_8_ + 8);
        *(int *)pLong_1 = *(int *)pLong_1 + -1;
        UNLOCK();
        if (*(int *)pLong_1 == 0) {
          (***(func_ptr_t **)local_e8._8_8_)(local_e8._8_8_);
          LOCK();
          pInt_2 = (int *)((int64_t)pLong_24 + 0xc);
          *pInt_2 = *pInt_2 + -1;
          UNLOCK();
          if (*pInt_2 == 0) {
            (**(func_ptr_t *)(*pLong_24 + 8))(pLong_24);
          }
        }
      }
    }
    uVal_10 = DAT_1806aecb0;
    lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_22 + 0x12150);
    local_178 = (uint *)(lVal_22 + 0x12158);
    local_170 = (uint64_t *)(lVal_22 + 0x12168);
    local_130 = _Str;
    while( true ) {
      lVal_11 = local_168;
      pU64_28 = local_298;
      lVal_22 = local_198._0_8_;
      if (local_168 == local_198._0_8_) break;
      lVal_25 = local_168 + 0x20;
      func_0x1800569a0(lVal_25,pU64_28);
      local_98 = (uint8_t  [8])pU64_28;
      if (7 < (uint64_t)local_288._8_8_) {
        local_98 = local_298;
      }
      uStack_90 = local_288._0_8_;
      uVal_14 = func_0x180678230();
      func_0x18008a490(local_108,uVal_14,local_98,local_b8);
      if (7 < (uint64_t)local_288._8_8_) {
        uVal_29 = local_288._8_8_ * 2 + 2;
        lVal_20 = (int64_t)local_298;
        if (0xfff < uVal_29) {
          lVal_20 = *(int64_t *)((int64_t)local_298 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_298 + -8) - lVal_20)) goto LAB_1803a47eb;
          uVal_29 = local_288._8_8_ * 2 + 0x29;
        }
        thunk_FUN_180695dd0(lVal_20,uVal_29);
      }
      func_0x18008a030(lVal_11,pU64_28,3);
      if (((int)uStack_290 != 0) && ((local_298._0_4_ & 0xfffffff7) != 1)) {
        func_0x180087670("directory_entry::status",(int)uStack_290,lVal_25);
LAB_1803a47fd:
        func_0x18007ba70();
LAB_1803a4803:
        func_0x18007ba70();
LAB_1803a4809:
        func_0x18007ba70();
LAB_1803a480f:
        func_0x18007ba70();
LAB_1803a4815:
        func_0x18042e5d0("copy_file");
        goto LAB_1803a482c;
      }
      if (local_298._0_4_ == 2) {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12154) == '\0') {
          lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_20 + 0x12154) = 1;
          *(uint32_t *)(lVal_20 + 0x12150) = 0x137adff;
          func_0x180673140(&LAB_18042f860);
          ch_5 = *(char *)((int64_t)_Str + 3);
        }
        else {
          ch_5 = *(char *)((int64_t)_Str + 3);
        }
        if (ch_5 == '\x01') {
          *_Str = (*_Str & 0xffff | (uint)*(byte *)((int64_t)_Str + 2) << 0x10) ^ uVal_10;
        }
        _local_298 = ZEXT816(0);
        sz_16 = strlen((char *)_Str);
        if ((int64_t)sz_16 < 0) goto LAB_1803a47fd;
        uVal_29 = 0xf;
        if (0xf < sz_16) {
          uVal_19 = sz_16 | 0xf;
          uVal_29 = 0x16;
          if (0x16 < uVal_19) {
            uVal_29 = uVal_19;
          }
          if (uVal_19 < 0xfff) {
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
          }
          else {
            lVal_20 = func_0x180672de0(uVal_29 + 0x28);
            pU64_28 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_20;
          }
          local_298 = (uint8_t  [8])pU64_28;
        }
        _Str = local_130;
        local_288._8_8_ = uVal_29;
        local_288._0_8_ = sz_16;
        func_0x1806aa960(pU64_28,local_130,sz_16);
        pU64_28[sz_16] = 0;
        uVal_29 = local_288._8_8_;
        if (local_f8 < (uint64_t)local_288._0_8_) {
          bFlag_30 = false;
        }
        else {
          pU64_28 = local_298;
          if (0xf < (uint64_t)local_288._8_8_) {
            pU64_28 = (uint8_t *)local_298;
          }
          ptr7_U64_27 = local_108;
          if (0xf < local_f0) {
            ptr7_U64_27 = local_108[0];
          }
          iVal_15 = memcmp((void *)((int64_t)ptr7_U64_27 + (local_f8 - local_288._0_8_)),pU64_28,
                          local_288._0_8_);
          bFlag_30 = iVal_15 == 0;
        }
        if (0xf < uVal_29) {
          uVal_19 = uVal_29 + 1;
          lVal_20 = (int64_t)local_298;
          if (0xfff < uVal_19) {
            lVal_20 = *(int64_t *)((int64_t)local_298 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_298 + -8) - lVal_20)) goto LAB_1803a47eb;
            uVal_19 = uVal_29 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_20,uVal_19);
        }
        if (!bFlag_30) goto LAB_1803a43c5;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12160) == '\0') {
          lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_20 + 0x12160) = 1;
          *(uint8_t *)(lVal_20 + 0x1215e) = 1;
          *(uint32_t *)(lVal_20 + 0x12158) = 0x413876d7;
          *(uint16_t *)(lVal_20 + 0x1215c) = 0x4951;
          func_0x180673140(&LAB_18042f890);
          ch_5 = *(char *)((int64_t)local_178 + 6);
        }
        else {
          ch_5 = *(char *)((int64_t)local_178 + 6);
        }
        if (ch_5 == '\x01') {
          *local_178 = *local_178 ^ 0x2f5715f9;
          *(byte *)(local_178 + 1) = *(byte *)(local_178 + 1) ^ 0x37;
          *(byte *)((int64_t)local_178 + 5) = *(byte *)((int64_t)local_178 + 5) ^ 0x49;
          *(uint8_t *)((int64_t)local_178 + 6) = 0;
        }
        local_88._0_16_ = ZEXT816(0);
        _local_98 = ZEXT816(0);
        sz_16 = strlen((char *)local_178);
        if ((int64_t)sz_16 < 0) goto LAB_1803a4803;
        uVal_29 = 0xf;
        pU64_28 = local_98;
        if (0xf < sz_16) {
          uVal_19 = sz_16 | 0xf;
          uVal_29 = 0x16;
          if (0x16 < uVal_19) {
            uVal_29 = uVal_19;
          }
          if (uVal_19 < 0xfff) {
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
          }
          else {
            lVal_20 = func_0x180672de0(uVal_29 + 0x28);
            pU64_28 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_20;
          }
          local_98 = (uint8_t  [8])pU64_28;
        }
        local_88._8_8_ = uVal_29;
        local_88._0_8_ = sz_16;
        func_0x1806aa960(pU64_28,local_178,sz_16);
        pU64_28[sz_16] = 0;
        ptr7_U64_27 = local_108;
        if (0xf < local_f0) {
          ptr7_U64_27 = local_108[0];
        }
        if (local_f8 == 0) {
          uVal_19 = 0xffffffffffffffff;
          uVal_29 = 0;
        }
        else if (local_f8 + 1 < 0x10) {
          local_1a8 = ZEXT816(0);
          local_1b8 = ZEXT816(0);
          local_1c8 = ZEXT816(0);
          local_1d8 = ZEXT816(0);
          local_1e8 = ZEXT816(0);
          local_1f8 = ZEXT816(0);
          local_208 = ZEXT816(0);
          local_218 = ZEXT816(0);
          local_228 = ZEXT816(0);
          local_238 = ZEXT816(0);
          local_248 = ZEXT816(0);
          local_258 = ZEXT816(0);
          local_268 = ZEXT816(0);
          local_288 = ZEXT816(0);
          _local_298 = ZEXT816(0);
          local_278._0_14_ = SUB1614(ZEXT816(0),0);
          local_278[14] = 1;
          local_278[15] = 0;
          lVal_20 = (int64_t)ptr7_U64_27 + (local_f8 - 1);
          ch_5 = local_298[*(byte *)((int64_t)ptr7_U64_27 + (local_f8 - 1))];
          uVal_19 = local_f8;
          while (uVal_29 = local_f8, ch_5 == '\0') {
            uVal_19 = uVal_19 - 1;
            if (uVal_19 == 0) {
              uVal_19 = 0xffffffffffffffff;
              goto LAB_1803a3d90;
            }
            pU8_4 = (byte *)(lVal_20 + -1);
            lVal_20 = lVal_20 + -1;
            ch_5 = local_298[*pU8_4];
          }
          uVal_19 = lVal_20 - (int64_t)ptr7_U64_27;
        }
        else {
          uVal_19 = func_0x180676ba0(ptr7_U64_27,local_f8,&DAT_180760d19,1);
          uVal_29 = local_f8;
        }
LAB_1803a3d90:
        uVal_12 = local_f0;
        ptr7_U64_27 = local_108[0];
        local_180 = lVal_22;
        _local_b8 = ZEXT816(0);
        if (uVal_29 < uVal_19) {
          uVal_19 = uVal_29;
        }
        if ((int64_t)uVal_19 < 0) goto LAB_1803a480f;
        uVal_29 = 0xf;
        pU64_28 = local_b8;
        if (0xf < uVal_19) {
          uVal_21 = uVal_19 | 0xf;
          uVal_29 = 0x16;
          if (0x16 < uVal_21) {
            uVal_29 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
          }
          else {
            lVal_22 = func_0x180672de0(uVal_29 + 0x28);
            pU64_28 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_22;
          }
          local_b8 = (uint8_t  [8])pU64_28;
        }
        if (uVal_12 < 0x10) {
          ptr7_U64_27 = local_108;
        }
        local_a8 = uVal_19;
        uStack_a0 = uVal_29;
        func_0x1806aa960(pU64_28,ptr7_U64_27,uVal_19);
        pU64_28[uVal_19] = 0;
        func_0x180094870(local_298);
        pU64_3 = local_170;
        lVal_22 = local_180;
        if (0xf < uStack_a0) {
          uVal_29 = uStack_a0 + 1;
          lVal_20 = (int64_t)local_b8;
          if (0xfff < uVal_29) {
            lVal_20 = *(int64_t *)((int64_t)local_b8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_20)) goto LAB_1803a47eb;
            uVal_29 = uStack_a0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_20,uVal_29);
        }
        if (0xf < (uint64_t)local_88._8_8_) {
          uVal_29 = local_88._8_8_ + 1;
          lVal_20 = (int64_t)local_98;
          if (0xfff < uVal_29) {
            lVal_20 = *(int64_t *)((int64_t)local_98 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_20)) goto LAB_1803a47eb;
            uVal_29 = local_88._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_20,uVal_29);
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12174) == '\0') {
          lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_20 + 0x12174) = 1;
          *(uint64_t *)(lVal_20 + 0x12168) = 0x1f245ab621b51c84;
          *(uint16_t *)(lVal_20 + 0x12170) = 0x1c7;
          func_0x180673140(&LAB_18042f8c0);
          ch_5 = *(char *)((int64_t)pU64_3 + 9);
        }
        else {
          ch_5 = *(char *)((int64_t)pU64_3 + 9);
        }
        if (ch_5 == '\x01') {
          *pU64_3 = *pU64_3 ^ 0x43573ddf47db73c7;
          *(byte *)(pU64_3 + 1) = *(byte *)(pU64_3 + 1) ^ 199;
          *(uint8_t *)((int64_t)pU64_3 + 9) = 0;
        }
        local_118 = ZEXT816(0);
        local_128 = ZEXT816(0);
        sz_16 = strlen((char *)pU64_3);
        if ((int64_t)sz_16 < 0) goto LAB_1803a4809;
        uVal_29 = 0xf;
        pU64_28 = local_128;
        if (0xf < sz_16) {
          uVal_19 = sz_16 | 0xf;
          uVal_29 = 0x16;
          if (0x16 < uVal_19) {
            uVal_29 = uVal_19;
          }
          if (uVal_19 < 0xfff) {
            pU64_28 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
          }
          else {
            lVal_20 = func_0x180672de0(uVal_29 + 0x28);
            pU64_28 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -8) = lVal_20;
          }
          local_128._0_8_ = pU64_28;
        }
        local_118._8_8_ = uVal_29;
        local_118._0_8_ = sz_16;
        func_0x1806aa960(pU64_28,local_170,sz_16);
        pU64_28[sz_16] = 0;
        pU64_23 = (uint64_t *)func_0x1800becb0();
        _Str = local_130;
        pU64_17 = pU64_23;
        if (0xf < (uint64_t)pU64_23[3]) {
          pU64_17 = (uint64_t *)*pU64_23;
        }
        uVal_29 = pU64_23[2];
        lVal_20 = local_118._0_8_;
        if ((uint64_t)(local_118._8_8_ - local_118._0_8_) < uVal_29) {
          pLong_24 = (int64_t *)func_0x1800871a0(local_128,uVal_29,local_118._0_8_,0,pU64_17,uVal_29);
        }
        else {
          local_118._0_8_ = local_118._0_8_ + uVal_29;
          pU64_23 = (uint64_t *)local_128;
          if (0xf < (uint64_t)local_118._8_8_) {
            pU64_23 = (uint64_t *)local_128._0_8_;
          }
          uVal_19 = uVal_29;
          if (((pU64_23 < (uint64_t *)((int64_t)pU64_17 + uVal_29)) &&
              (pU64_17 <= (uint64_t *)((int64_t)pU64_23 + lVal_20))) &&
             (uVal_19 = (int64_t)pU64_23 - (int64_t)pU64_17, pU64_23 < pU64_17 || uVal_19 == 0)) {
            uVal_19 = 0;
          }
          func_0x1806aa960((int64_t)pU64_23 + uVal_29,pU64_23,lVal_20 + 1);
          func_0x1806aa960(pU64_23,pU64_17,uVal_19);
          func_0x1806aa960((int64_t)pU64_23 + uVal_19,
                        (int64_t)(uint64_t *)((int64_t)pU64_17 + uVal_29) + uVal_19,
                        uVal_29 - uVal_19);
          pLong_24 = (int64_t *)local_128;
          _Str = local_130;
          lVal_22 = local_180;
        }
        local_158 = (uint64_t *******)*pLong_24;
        lStack_150 = pLong_24[1];
        local_148 = pLong_24[2];
        uStack_140 = pLong_24[3];
        pLong_24[2] = 0;
        pLong_24[3] = 0xf;
        *(uint8_t *)pLong_24 = 0;
        pU64_28 = local_298;
        if (0xf < (uint64_t)local_288._8_8_) {
          pU64_28 = (uint8_t *)local_298;
        }
        if (uStack_140 - local_148 < (uint64_t)local_288._0_8_) {
          pArr16_18 = (uint8_t (*)[16])
                     func_0x180082950(&local_158,local_288._0_8_,local_288._0_8_,pU64_28,
                                   local_288._0_8_);
        }
        else {
          lVal_20 = local_148 + local_288._0_8_;
          ptr7_U64_27 = &local_158;
          if (0xf < uStack_140) {
            ptr7_U64_27 = local_158;
          }
          lVal_26 = local_148 + (int64_t)ptr7_U64_27;
          local_148 = lVal_20;
          func_0x1806aa960(lVal_26,pU64_28);
          *(uint8_t *)((int64_t)ptr7_U64_27 + lVal_20) = 0;
          pArr16_18 = (uint8_t (*)[16])&local_158;
        }
        _local_b8 = *pArr16_18;
        local_a8 = *(uint64_t *)pArr16_18[1];
        uStack_a0 = *(uint64_t *)(pArr16_18[1] + 8);
        *(uint64_t *)pArr16_18[1] = 0;
        *(uint64_t *)(pArr16_18[1] + 8) = 0xf;
        (*pArr16_18)[0] = 0;
        local_2b0 = local_b8;
        if (0xf < uStack_a0) {
          local_2b0 = (uint8_t *)local_b8;
        }
        local_2a8 = local_a8;
        uVal_14 = func_0x180678230();
        func_0x1800a6340(local_98,uVal_14,&local_2b0);
        pU64_28 = local_98;
        if (7 < (uint64_t)local_88._8_8_) {
          pU64_28 = (uint8_t *)local_98;
        }
        if (7 < *(uint64_t *)(lVal_11 + 0x38)) {
          lVal_25 = *(int64_t *)(lVal_11 + 0x20);
        }
        uVal_29 = func_0x180677a20(lVal_25,pU64_28,2);
        if (uVal_29 >> 0x20 != 0) goto LAB_1803a4815;
        if (7 < (uint64_t)local_88._8_8_) {
          uVal_19 = local_88._8_8_ * 2 + 2;
          lVal_25 = (int64_t)local_98;
          if (0xfff < uVal_19) {
            lVal_25 = *(int64_t *)((int64_t)local_98 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_25)) goto LAB_1803a47eb;
            uVal_19 = local_88._8_8_ * 2 + 0x29;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_19);
        }
        local_88._0_16_ = ZEXT816(7) << 0x40;
        auArr_8._14_2_ = 0;
        auArr_8._0_14_ = stack0xffffffffffffff6a;
        _local_98 = auArr_8 << 0x10;
        if (0xf < uStack_a0) {
          uVal_19 = uStack_a0 + 1;
          lVal_25 = (int64_t)local_b8;
          if (0xfff < uVal_19) {
            lVal_25 = *(int64_t *)((int64_t)local_b8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_b8 + -8) - lVal_25)) goto LAB_1803a47eb;
            uVal_19 = uStack_a0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_19);
        }
        local_a8 = 0;
        uStack_a0 = 0xf;
        auArr_9[15] = 0;
        auArr_9._0_15_ = stack0xffffffffffffff49;
        _local_b8 = auArr_9 << 8;
        if (0xf < uStack_140) {
          uVal_19 = uStack_140 + 1;
          ptr7_U64_27 = local_158;
          if (0xfff < uVal_19) {
            ptr7_U64_27 = (uint64_t *******)local_158[-1];
            if (0x1f < (uint64_t)((int64_t)local_158 + (-8 - (int64_t)ptr7_U64_27)))
            goto LAB_1803a47eb;
            uVal_19 = uStack_140 + 0x28;
          }
          thunk_FUN_180695dd0(ptr7_U64_27,uVal_19);
        }
        local_148 = 0;
        uStack_140 = 0xf;
        local_158 = (uint64_t *******)((uint64_t)local_158 & 0xffffffffffffff00);
        if (0xf < (uint64_t)local_118._8_8_) {
          uVal_19 = local_118._8_8_ + 1;
          lVal_25 = local_128._0_8_;
          if (0xfff < uVal_19) {
            lVal_25 = *(int64_t *)(local_128._0_8_ + -8);
            if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_25)) goto LAB_1803a47eb;
            uVal_19 = local_118._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_19);
        }
        if (0xf < (uint64_t)local_288._8_8_) {
          uVal_19 = local_288._8_8_ + 1;
          lVal_25 = (int64_t)local_298;
          if (0xfff < uVal_19) {
            lVal_25 = *(int64_t *)((int64_t)local_298 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_298 + -8) - lVal_25)) goto LAB_1803a47eb;
            uVal_19 = local_288._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_25,uVal_19);
        }
        if ((uVal_29 & 1) != 0) goto LAB_1803a43c5;
        if (0xf < local_f0) {
          uVal_29 = local_f0 + 1;
          ptr7_U64_27 = local_108[0];
          if (0xfff < uVal_29) {
            ptr7_U64_27 = (uint64_t *******)local_108[0][-1];
            if (0x1f < (uint64_t)((int64_t)local_108[0] + (-8 - (int64_t)ptr7_U64_27)))
            goto LAB_1803a47eb;
            uVal_29 = local_f0 + 0x28;
          }
          thunk_FUN_180695dd0(ptr7_U64_27,uVal_29);
        }
        break;
      }
LAB_1803a43c5:
      if (0xf < local_f0) {
        uVal_29 = local_f0 + 1;
        ptr7_U64_27 = local_108[0];
        if (0xfff < uVal_29) {
          ptr7_U64_27 = (uint64_t *******)local_108[0][-1];
          if (0x1f < (uint64_t)((int64_t)local_108[0] + (-8 - (int64_t)ptr7_U64_27)))
          goto LAB_1803a47eb;
          uVal_29 = local_f0 + 0x28;
        }
        thunk_FUN_180695dd0(ptr7_U64_27,uVal_29);
      }
      func_0x180057460(&local_168);
    }
    pLong_24 = (int64_t *)local_198._8_8_;
    if ((int64_t *)local_198._8_8_ != (int64_t *)0x0) {
      LOCK();
      pLong_1 = (int64_t *)(local_198._8_8_ + 8);
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (***(func_ptr_t **)local_198._8_8_)(local_198._8_8_);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_24 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_24 + 8))(pLong_24);
        }
      }
    }
    pLong_24 = plStack_160;
    if (plStack_160 != (int64_t *)0x0) {
      LOCK();
      pLong_1 = plStack_160 + 1;
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (**(func_ptr_t *)*plStack_160)(plStack_160);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_24 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_24 + 8))(pLong_24);
        }
      }
    }
    pLong_24 = (int64_t *)local_e8._8_8_;
    if ((int64_t *)local_e8._8_8_ != (int64_t *)0x0) {
      LOCK();
      pLong_1 = (int64_t *)(local_e8._8_8_ + 8);
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (***(func_ptr_t **)local_e8._8_8_)(local_e8._8_8_);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_24 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_24 + 8))(pLong_24);
        }
      }
    }
    if (7 < uStack_c0) {
      uVal_29 = uStack_c0 * 2 + 2;
      lVal_25 = local_d8._0_8_;
      if (0xfff < uVal_29) {
        lVal_25 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_25)) goto LAB_1803a47eb;
        uVal_29 = uStack_c0 * 2 + 0x29;
      }
      thunk_FUN_180695dd0(lVal_25,uVal_29);
    }
    if (lVal_11 != lVal_22) {
LAB_1803a473d:
      return lVal_11 == lVal_22;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12184) == '\0') {
      lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_25 + 0x12184) = 1;
      *(uint8_t *)(lVal_25 + 0x12180) = 1;
      *(uint64_t *)(lVal_25 + 0x12178) = 0xaf21c3b0ceff1cd9;
      func_0x180673140(&LAB_18042f8f0);
    }
    lVal_25 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_25 + 0x12178);
    if (*(char *)(lVal_25 + 0x12180) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xaf55afc5af9979bd;
      *(uint8_t *)(lVal_25 + 0x12180) = 0;
    }
    _local_298 = (uint8_t  [16])0x0;
    sz_16 = strlen((char *)pU64_3);
    if (-1 < (int64_t)sz_16) {
      if (sz_16 < 0x10) {
        pU64_28 = local_298;
        uVal_29 = 0xf;
      }
      else {
        uVal_19 = sz_16 | 0xf;
        uVal_29 = 0x16;
        if (0x16 < uVal_19) {
          uVal_29 = uVal_19;
        }
        if (uVal_19 < 0xfff) {
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
        }
        else {
          lVal_25 = func_0x180672de0(uVal_29 + 0x28);
          pU64_28 = (uint8_t *)(lVal_25 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_25;
        }
        local_298 = (uint8_t  [8])pU64_28;
      }
      local_288._0_8_ = sz_16;
      local_288._8_8_ = uVal_29;
      func_0x1806aa960(pU64_28,pU64_3,sz_16);
      pU64_28[sz_16] = 0;
      func_0x180397850(local_2a0,local_298,1,0);
      if (0xf < (uint64_t)local_288._8_8_) {
        uVal_29 = local_288._8_8_ + 1;
        lVal_25 = (int64_t)local_298;
        if (0xfff < uVal_29) {
          lVal_25 = *(int64_t *)((int64_t)local_298 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_298 + -8) - lVal_25)) {
LAB_1803a47eb:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_29 = local_288._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_25,uVal_29);
      }
      goto LAB_1803a473d;
    }
  }
LAB_1803a482c:
  iVal_15 = func_0x18007ba70();
LAB_1803a4832:
  func_0x180087670("directory_iterator::directory_iterator",iVal_15,local_d8);
  fnPtr_6 = (func_ptr_t )swi(3);
  uVal_13 = (*fnPtr_6)();
  return (bool)uVal_13;
}

// Unwind@1803a4850
void Unwind_1803a4850(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x200);
  func_0x1800565c0(param_2 + 0x210);
  return;
}

// Unwind@1803a48b0
void Unwind_1803a48b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1803a4900
void Unwind_1803a4900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  return;
}

// Unwind@1803a4950
void Unwind_1803a4950(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x50);
  return;
}

// Unwind@1803a49a0
void Unwind_1803a49a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@1803a49f0
void Unwind_1803a49f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@1803a4a40
void Unwind_1803a4a40(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x250);
  return;
}

// Unwind@1803a4a90
void Unwind_1803a4a90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@1803a4ae0
void Unwind_1803a4ae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1803a4b30
void Unwind_1803a4b30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@1803a4b80
void Unwind_1803a4b80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1803a4bd0
void Unwind_1803a4bd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1e0);
  return;
}

// Unwind@1803a4c20
void Unwind_1803a4c20(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x150);
  func_0x18001deb0(param_2 + 0x180);
  func_0x18001deb0(param_2 + 0x200);
  func_0x1800565c0(param_2 + 0x210);
  return;
}

// Unwind@1803a4ca0
void Unwind_1803a4ca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1803a4de0
void Unwind_1803a4de0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1803a4e00
uint8_t (*func_0x1803a4e00(uint8_t (*param_1)[16]))[16]
{
  uint64_t *_Str;
  size_t sz_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  int64_t *pLong_6;
  uint64_t uVal_7;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t uStack_60;
  uint8_t (*local_50)[16];
  int64_t *local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  param_1[2] = ZEXT816(0);
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[3] = 0xf;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12194) == '\0') {
    lVal_2 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_2 + 0x12194) = 1;
    *(uint8_t *)(lVal_2 + 0x12190) = 1;
    *(uint64_t *)(lVal_2 + 0x12188) = 0x9152ff71929c8393;
    func_0x180673140(&LAB_18042f910);
  }
  lVal_2 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_2 + 0x12188);
  if (*(char *)(lVal_2 + 0x12190) == '\x01') {
    *_Str = *_Str ^ 0x91219b1ff7f5f1d5;
    *(uint8_t *)(lVal_2 + 0x12190) = 0;
  }
  pLong_6 = (int64_t *)(param_1[1] + 8);
  _local_78 = ZEXT816(0);
  sz_1 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_1) {
    if (sz_1 < 0x10) {
      pU64_5 = local_78;
      uVal_7 = 0xf;
    }
    else {
      uVal_3 = sz_1 | 0xf;
      uVal_7 = 0x16;
      if (0x16 < uVal_3) {
        uVal_7 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        local_50 = param_1;
        local_48 = pLong_6;
        pU64_5 = (uint8_t *)func_0x180672de0(uVal_7 + 1);
      }
      else {
        local_50 = param_1;
        local_48 = pLong_6;
        lVal_2 = func_0x180672de0(uVal_7 + 0x28);
        pU64_5 = (uint8_t *)(lVal_2 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -8) = lVal_2;
      }
      local_78 = (uint8_t  [8])pU64_5;
      pLong_6 = local_48;
      param_1 = local_50;
    }
    local_68 = sz_1;
    uStack_60 = uVal_7;
    func_0x1806aa960(pU64_5,_Str,sz_1);
    pU64_5[sz_1] = 0;
    uVal_7 = *(uint64_t *)param_1[3];
    if (0xf < uVal_7) {
      lVal_2 = *pLong_6;
      uVal_3 = uVal_7 + 1;
      lVal_4 = lVal_2;
      if (0xfff < uVal_3) {
        lVal_4 = *(int64_t *)(lVal_2 + -8);
        if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1803a4fe1;
        uVal_3 = uVal_7 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_3);
    }
    *(uint32_t *)(pLong_6 + 2) = (uint32_t)local_68;
    *(uint32_t *)((int64_t)pLong_6 + 0x14) = local_68._4_4_;
    *(uint32_t *)(pLong_6 + 3) = (uint32_t)uStack_60;
    *(uint32_t *)((int64_t)pLong_6 + 0x1c) = uStack_60._4_4_;
    *(uint32_t *)pLong_6 = local_78._0_4_;
    *(uint32_t *)((int64_t)pLong_6 + 4) = local_78._4_4_;
    *(uint32_t *)(pLong_6 + 1) = (uint32_t)uStack_70;
    *(uint32_t *)((int64_t)pLong_6 + 0xc) = uStack_70._4_4_;
    return param_1;
  }
  local_50 = param_1;
  local_48 = pLong_6;
  func_0x18007ba70();
LAB_1803a4fe1:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1803a4ff0
void Unwind_1803a4ff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x50));
  func_0x180037f80(*(uint64_t *)(param_2 + 0x48));
  return;
}

// func_0x1803a5180
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803a5180(void)
{
  uint64_t *_Str;
  size_t sz_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  uint8_t *local_68;
  uint64_t uStack_60;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  func_0x18039bd20(&DAT_1808401b0,1);
  func_0x1803a54d0(&DAT_1808400a0);
  func_0x1804c8f80(&DAT_180840fc0);
  func_0x1800ccc00();
  func_0x1800cc990();
  if (DAT_180840238 == '\0') {
    do {
      Sleep(0x10);
    } while (DAT_180840238 != '\x01');
  }
  func_0x18048e000();
  func_0x18063e2c0();
  local_58._0_8_ = &DAT_28d478d88fb3dcdf;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  if (DAT_180840a60 == 0) {
    DAT_180840a68 = 0;
  }
  else if ((DAT_180840ae8 == '\0') && (DAT_180840aea == '\0')) {
    local_58._0_8_ = &DAT_28d0f803f34a0611;
    lVal_4 = DAT_180840a58[0xc9];
    local_68 = PTR_DAT_1806b6f30;
    uStack_60 = _UNK_1806b6f38;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x121a4) == '\0') {
      lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_3 + 0x121a4) = 1;
      *(uint64_t *)(lVal_3 + 0x12198) = 0xc80d2274672e583a;
      *(uint32_t *)(lVal_3 + 0x121a0) = 0x16b0425;
      func_0x180673140(&LAB_18042f930);
    }
    lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint64_t *)(lVal_3 + 0x12198);
    if (*(char *)(lVal_3 + 0x121a3) == '\x01') {
      *_Str = *_Str ^ 0xad7941110d6b2541;
      *(uint *)(lVal_3 + 0x121a0) =
           (*(uint *)(lVal_3 + 0x121a0) & 0xffff | (uint)*(byte *)(lVal_3 + 0x121a2) << 0x10) ^
           SUB164(_DAT_1806bb2d0,0);
    }
    local_58 = (uint8_t  [16])0x0;
    sz_1 = strlen((char *)_Str);
    if ((int64_t)sz_1 < 0) {
      func_0x18007ba70();
LAB_1803a549e:
      do {
        invalidInstructionException();
      } while( true );
    }
    if (sz_1 < 0x10) {
      pU64_5 = local_58;
      uVal_6 = 0xf;
    }
    else {
      uVal_2 = sz_1 | 0xf;
      uVal_6 = 0x16;
      if (0x16 < uVal_2) {
        uVal_6 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        pU64_5 = (uint8_t *)func_0x180672de0(uVal_6 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_6 + 0x28);
        pU64_5 = (uint8_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_5 + -8) = lVal_3;
      }
      local_58._0_8_ = pU64_5;
    }
    local_48 = sz_1;
    local_40 = uVal_6;
    func_0x1806aa960(pU64_5,_Str,sz_1);
    pU64_5[sz_1] = 0;
    func_0x180143aa0(lVal_4,local_58,&local_68);
    if (0xf < local_40) {
      uVal_6 = local_40 + 1;
      lVal_4 = local_58._0_8_;
      if (0xfff < uVal_6) {
        lVal_4 = *(int64_t *)(local_58._0_8_ + -8);
        if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_4)) goto LAB_1803a549e;
        uVal_6 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_6);
    }
  }
  return;
}

// Unwind@1803a54a0
void Unwind_1803a54a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// func_0x1803a54d0
void func_0x1803a54d0(uint64_t *param_1)
{
  uint64_t uVal_1;
  char ch_2;
  char ch_3;
  uint64_t *pU64_4;
  uint8_t *pU64_5;
  int64_t lVal_6;
  uint64_t uVal_7;
  int64_t *pLong_8;
  uint8_t *pU64_9;
  int64_t lVal_10;
  uint64_t *pU64_11;
  uint64_t *pU64_12;
  int64_t *pLong_13;
  uint64_t *pU64_14;
  uint64_t *pU64_15;
  uint8_t *pU64_16;
  int64_t lVal_17;
  bool bFlag_18;
  int64_t local_e0 [3];
  uint64_t local_c8;
  uint64_t *local_c0;
  uint64_t *local_b8;
  PSRWLOCK local_b0;
  uint8_t local_a8 [16];
  uint64_t local_98;
  uint64_t local_90;
  uint8_t *local_80 [3];
  uint64_t local_68;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_b0 = (PSRWLOCK)(param_1 + 3);
  AcquireSRWLockShared(local_b0);
  pU64_12 = (uint64_t *)*param_1;
  pU64_4 = (uint64_t *)*pU64_12;
  local_c0 = param_1;
  local_b8 = pU64_12;
  do {
    if (pU64_4 == pU64_12) {
      *(uint8_t *)(local_c0 + 2) = 0;
      pLong_8 = DAT_18083e6f8;
      for (pLong_13 = DAT_18083e6f0; pLong_13 != pLong_8; pLong_13 = pLong_13 + 1) {
        lVal_6 = *pLong_13;
        if (lVal_6 != 0) {
          func_0x1801d4ce0(lVal_6);
          thunk_FUN_180695dd0(lVal_6,0x178);
          pLong_8 = DAT_18083e6f8;
        }
      }
      ReleaseSRWLockShared(local_b0);
      return;
    }
    pLong_8 = (int64_t *)pU64_4[5];
    if (*(char *)(pLong_8 + 8) == '\x01') {
      *(uint8_t *)(pLong_8 + 8) = 0;
      func_0x1801dbc50(pLong_8);
      local_a8 = ZEXT816(0);
      local_98 = 0;
      local_90 = 0xf;
      local_80[0] = &DAT_28d478d88fb3dcdf;
      DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
      if (DAT_180840a60 == 0) {
        DAT_180840a68 = 0;
joined_r0x0001803a56f3:
        if (local_98 != 0) goto LAB_1803a5830;
      }
      else {
        local_80[0] = (uint8_t *)0x186e75fd59d743a9;
        if (*(int64_t *)(*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70) ==
            0) goto joined_r0x0001803a56f3;
LAB_1803a5830:
        pU64_15 = (uint64_t *)pLong_8[0xe];
        for (pU64_11 = (uint64_t *)pLong_8[0xd]; pU64_11 != pU64_15; pU64_11 = pU64_11 + 4) {
          if (local_98 == 0) {
LAB_1803a58d5:
            lVal_6 = *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70);
            if (*(int64_t *)(lVal_6 + 0x430) == 0) {
              local_80[0] = (uint8_t *)0x185dd108334994f2;
              lVal_10 = 0x400;
              uVal_7 = pU64_11[2];
              uVal_1 = pU64_11[3];
            }
            else {
              local_80[0] = &DAT_18615f6ca6ec3ae1;
              lVal_10 = 0x420;
              uVal_7 = pU64_11[2];
              uVal_1 = pU64_11[3];
            }
            pU64_14 = pU64_11;
            if (0xf < uVal_1) {
              pU64_14 = (uint64_t *)*pU64_11;
            }
            uVal_1 = *(uint64_t *)(lVal_10 + 0x10 + lVal_6);
            if (*(uint64_t *)(lVal_10 + 0x18 + lVal_6) < 0x10) {
              lVal_10 = lVal_10 + lVal_6;
            }
            else {
              lVal_10 = *(int64_t *)(lVal_10 + lVal_6);
            }
            if ((uVal_7 <= uVal_1) &&
               ((pU64_12 = local_b8, uVal_7 == 0 ||
                (lVal_17 = uVal_1 + lVal_10, lVal_6 = thunk_FUN_180676d20(lVal_10,lVal_17,pU64_14),
                pU64_12 = local_b8, lVal_6 != lVal_17 && lVal_6 - lVal_10 != -1)))) goto LAB_1803a5b3a;
          }
          else {
            if ((uint64_t)pU64_11[3] < 0x10) {
              pU64_14 = pU64_11;
              if (local_90 < 0x10) goto LAB_1803a586b;
LAB_1803a588e:
              uVal_7 = pU64_11[2];
              pU64_9 = (uint8_t *)local_a8._0_8_;
            }
            else {
              pU64_14 = (uint64_t *)*pU64_11;
              if (0xf < local_90) goto LAB_1803a588e;
LAB_1803a586b:
              uVal_7 = pU64_11[2];
              pU64_9 = local_a8;
            }
            if (uVal_7 <= local_98) {
              pU64_12 = local_b8;
              if ((uVal_7 == 0) ||
                 (pU64_16 = pU64_9 + local_98,
                 pU64_5 = (uint8_t *)thunk_FUN_180676d20(pU64_9,pU64_16,pU64_14),
                 pU64_12 = local_b8, pU64_5 != pU64_16 && (int64_t)pU64_5 - (int64_t)pU64_9 != -1)
                 ) goto LAB_1803a5b3a;
              if (local_98 == 0) goto LAB_1803a58d5;
            }
          }
        }
      }
      (**(func_ptr_t *)(*pLong_8 + 0x10))(pLong_8,local_80);
      pU64_12 = local_b8;
      ch_2 = func_0x180052940(local_80);
      ch_3 = '\x01';
      if (ch_2 == '\0') {
        (**(func_ptr_t *)(*pLong_8 + 0x18))(pLong_8,local_e0);
        ch_3 = func_0x180052a50(local_e0);
        if (0xf < local_c8) {
          uVal_7 = local_c8 + 1;
          lVal_6 = local_e0[0];
          if (0xfff < uVal_7) {
            lVal_6 = *(int64_t *)(local_e0[0] + -8);
            if (0x1f < (uint64_t)((local_e0[0] + -8) - lVal_6)) {
LAB_1803a5c50:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_7 = local_c8 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_6,uVal_7);
        }
      }
      if (0xf < local_68) {
        uVal_7 = local_68 + 1;
        pU64_9 = local_80[0];
        if (0xfff < uVal_7) {
          pU64_9 = *(uint8_t **)(local_80[0] + -8);
          if ((uint8_t *)0x1f < local_80[0] + (-8 - (int64_t)pU64_9)) goto LAB_1803a5c50;
          uVal_7 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(pU64_9,uVal_7);
      }
      if (ch_3 == '\0') {
        if (0xf < local_90) {
          uVal_7 = local_90 + 1;
          lVal_6 = local_a8._0_8_;
          if (0xfff < uVal_7) {
            lVal_6 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_6)) goto LAB_1803a5c50;
            uVal_7 = local_90 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_6,uVal_7);
        }
        func_0x1801dc7a0(pLong_8,0);
      }
      else {
LAB_1803a5b3a:
        if (0xf < local_90) {
          uVal_7 = local_90 + 1;
          lVal_6 = local_a8._0_8_;
          if (0xfff < uVal_7) {
            lVal_6 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_6)) goto LAB_1803a5c50;
            uVal_7 = local_90 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_6,uVal_7);
        }
        func_0x1801dc7a0(pLong_8,0);
      }
      (**(func_ptr_t *)(*pLong_8 + 0x60))(pLong_8);
    }
    pU64_11 = (uint64_t *)pU64_4[2];
    pU64_15 = pU64_4;
    if (*(char *)((int64_t)(uint64_t *)pU64_4[2] + 0x19) == '\0') {
      do {
        pU64_4 = pU64_11;
        pU64_11 = (uint64_t *)*pU64_4;
      } while (*(char *)((int64_t)(uint64_t *)*pU64_4 + 0x19) == '\0');
    }
    else {
      do {
        pU64_4 = (uint64_t *)pU64_15[1];
        if (*(char *)((int64_t)pU64_4 + 0x19) != '\0') break;
        bFlag_18 = pU64_15 == (uint64_t *)pU64_4[2];
        pU64_15 = pU64_4;
      } while (bFlag_18);
    }
  } while( true );
}

// Unwind@1803a5c60
void Unwind_1803a5c60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1803a5ca0
void Unwind_1803a5ca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x88);
  return;
}

// Unwind@1803a5ce0
void Unwind_1803a5ce0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1803a5d20
void Unwind_1803a5d20(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x58));
  return;
}

// Unwind@1803a5e60
void Unwind_1803a5e60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x1803a5e90
void func_0x1803a5e90(uint64_t *param_1)
{
  int iVal_1;
  int64_t lVal_2;
  uint32_t uVal_3;
  uint64_t uVal_4;
  uint64_t ****ptr4_U64_5;
  uint8_t local_128 [96];
  uint8_t local_c8 [16];
  uint64_t local_b8;
  uint64_t ****local_a8;
  uint64_t local_a0;
  int64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  uint8_t *local_80;
  uint64_t *local_78;
  uint64_t local_70;
  uint64_t ****local_68 [2];
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88 = 0;
  local_80 = local_128;
  local_78 = param_1;
  if (0xf < (uint64_t)param_1[3]) {
    local_78 = (uint64_t *)*param_1;
  }
  local_70 = param_1[2];
  func_0x18063ff10(local_68,&local_78,&local_88);
  uVal_4 = local_50;
  ptr4_U64_5 = local_68[0];
  lVal_2 = DAT_18083ed00;
  iVal_1 = *(int *)(DAT_18083ed00 + 0x40);
  uVal_3 = func_0x1806520c0(DAT_18083ed00 + 0x88);
  if ((2 < iVal_1 & ((byte)uVal_3 ^ 1)) == 0) {
    local_a8 = local_68;
    if (0xf < uVal_4) {
      local_a8 = ptr4_U64_5;
    }
    local_a0 = local_58;
    if (*(uint64_t *)(lVal_2 + 0x20) < 0x10) {
      local_98 = lVal_2 + 8;
    }
    else {
      local_98 = *(int64_t *)(lVal_2 + 8);
    }
    local_90 = *(uint64_t *)(lVal_2 + 0x18);
    local_c8 = ZEXT816(0);
    local_b8 = 0;
    func_0x180652c00(local_128,local_c8,&local_98,2,&local_a8);
    func_0x180654f40(lVal_2,local_128,iVal_1 < 3,uVal_3);
  }
  if (0xf < local_50) {
    uVal_4 = local_50 + 1;
    ptr4_U64_5 = local_68[0];
    if (0xfff < uVal_4) {
      ptr4_U64_5 = (uint64_t ****)local_68[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_68[0] + (-8 - (int64_t)ptr4_U64_5))) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(ptr4_U64_5,uVal_4);
  }
  return;
}

// Unwind@1803a6000
void Unwind_1803a6000(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// func_0x1803a6040
int64_t func_0x1803a6040(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x121b8) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x121b8) = 1;
    *(uint8_t *)(lVal_1 + 0x121b4) = 1;
    *(uint64_t *)(lVal_1 + 0x121a8) = 0xc47f489d77161184;
    *(uint32_t *)(lVal_1 + 0x121b0) = 0x7574bf9;
    func_0x180673140(&LAB_18042f960);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x121a8;
}

// func_0x1803a60d0
void func_0x1803a60d0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xc) == '\x01') {
    *param_1 = *param_1 ^ 0xa31121ed077965d7;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) ^ 0x77965d7;
    *(uint8_t *)((int64_t)param_1 + 0xc) = 0;
  }
  return;
}

// func_0x1803a6100
int64_t func_0x1803a6100(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x121cc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x121cc) = 1;
    *(uint8_t *)(lVal_1 + 0x121ca) = 1;
    *(uint64_t *)(lVal_1 + 0x121c0) = 0xcdbea9c612f74a72;
    *(uint16_t *)(lVal_1 + 0x121c8) = 0x234b;
    func_0x180673140(&LAB_18042f990);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x121c0;
}

// func_0x1803a6190
void func_0x1803a6190(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 10) == '\x01') {
    *param_1 = *param_1 ^ 0xabdfdba57799233f;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x3f;
    *(byte *)((int64_t)param_1 + 9) = *(byte *)((int64_t)param_1 + 9) ^ 0x23;
    *(uint8_t *)((int64_t)param_1 + 10) = 0;
  }
  return;
}

// Unwind@1803ab8e0
void Unwind_1803ab8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ab9a0
void Unwind_1803ab9a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803aba60
void Unwind_1803aba60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803abb20
void Unwind_1803abb20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803abbe0
void Unwind_1803abbe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803abca0
void Unwind_1803abca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803abd60
void Unwind_1803abd60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803abe20
void Unwind_1803abe20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803abee0
void Unwind_1803abee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803abfa0
void Unwind_1803abfa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803ac060
void Unwind_1803ac060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ac120
void Unwind_1803ac120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803ac1e0
void Unwind_1803ac1e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ac2a0
void Unwind_1803ac2a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803ac360
void Unwind_1803ac360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ac420
void Unwind_1803ac420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803ac4e0
void Unwind_1803ac4e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ac5a0
void Unwind_1803ac5a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803ac660
void Unwind_1803ac660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ac720
void Unwind_1803ac720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803ac7e0
void Unwind_1803ac7e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ac8a0
void Unwind_1803ac8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803ac960
void Unwind_1803ac960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803aca20
void Unwind_1803aca20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803acae0
void Unwind_1803acae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803acba0
void Unwind_1803acba0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803acc60
void Unwind_1803acc60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803acd20
void Unwind_1803acd20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803acde0
void Unwind_1803acde0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803acea0
void Unwind_1803acea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x19f) = 0;
  return;
}

// Unwind@1803acf70
void Unwind_1803acf70(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x19f) == '\x01') {
    func_0x180001e70(param_2 + 0x30);
  }
  return;
}

// Unwind@1803ad030
void Unwind_1803ad030(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ad0f0
void Unwind_1803ad0f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ad1b0
void Unwind_1803ad1b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ad270
void Unwind_1803ad270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  *(uint8_t *)(param_2 + 0x19e) = 0;
  return;
}

// Unwind@1803ad340
void Unwind_1803ad340(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x19e) == '\x01') {
    func_0x180001e70(param_2 + 0x50);
  }
  return;
}

// Unwind@1803ad400
void Unwind_1803ad400(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x148),0x120);
  return;
}

// Unwind@1803ad4c0
void Unwind_1803ad4c0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x148),1);
  return;
}

// Unwind@1803ad590
void Unwind_1803ad590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ad650
void Unwind_1803ad650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803ad710
void Unwind_1803ad710(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0x150);
  return;
}

// Unwind@1803ad7d0
void Unwind_1803ad7d0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x148),1);
  return;
}

// Unwind@1803ad8a0
void Unwind_1803ad8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ad960
void Unwind_1803ad960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1803ada20
void Unwind_1803ada20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803adae0
void Unwind_1803adae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x19d) = 0;
  return;
}

// Unwind@1803adbb0
void Unwind_1803adbb0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x19d) == '\x01') {
    func_0x180001e70(param_2 + 0x70);
  }
  return;
}

// Unwind@1803adc80
void Unwind_1803adc80(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 200);
  return;
}

// Unwind@1803add40
void Unwind_1803add40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1803ade00
void Unwind_1803ade00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803adec0
void Unwind_1803adec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x19c) = 0;
  return;
}

// Unwind@1803adf90
void Unwind_1803adf90(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x19c) == '\x01') {
    func_0x180001e70(param_2 + 0x90);
  }
  return;
}

// Unwind@1803ae060
void Unwind_1803ae060(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 200);
  return;
}

// Unwind@1803ae120
void Unwind_1803ae120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803ae1e0
void Unwind_1803ae1e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xf8);
  if (*(char *)(param_2 + 0x148) == '\0') {
    func_0x180001e70(param_2 + 0x1a0);
  }
  *(uint8_t *)(param_2 + 0x19b) = uVal_1;
  return;
}

// Unwind@1803ae2b0
void Unwind_1803ae2b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803ae380
void Unwind_1803ae380(uint64_t param_1,int64_t param_2)
{
  func_0x18018a6c0(param_2 + 0x150);
  func_0x18001deb0(param_2 + 0x100);
  return;
}

// Unwind@1803ae450
void Unwind_1803ae450(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  if (*(int *)(param_2 + 0xf0) == 0) {
    return;
  }
  func_0x18068d0ec();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1803ae510
void Unwind_1803ae510(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  if (*(int *)(param_2 + 0xe0) == 0) {
    return;
  }
  func_0x18068d0ec();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1803ae5d0
void Unwind_1803ae5d0(uint64_t param_1,int64_t param_2)
{
  func_0x1803b0a90(param_2 + 0xb8);
  return;
}

// Unwind@1803ae690
void Unwind_1803ae690(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x122b4) = 0;
  return;
}

// Unwind@1803ae760
void Unwind_1803ae760(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x122cc) = 0;
  return;
}

// Unwind@1803ae830
void Unwind_1803ae830(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x122f8) = 0;
  *(uint8_t *)(param_2 + 0x19f) = 1;
  return;
}

// Unwind@1803ae910
void Unwind_1803ae910(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12318) = 0;
  return;
}

// Unwind@1803ae9e0
void Unwind_1803ae9e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x123bc) = 0;
  *(uint8_t *)(param_2 + 0x19e) = 1;
  return;
}

// Unwind@1803aeac0
void Unwind_1803aeac0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x123e0) = 0;
  return;
}

// Unwind@1803aeb90
void Unwind_1803aeb90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x123f8) = 0;
  return;
}

// Unwind@1803aec60
void Unwind_1803aec60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12440) = 0;
  *(uint8_t *)(param_2 + 0x19d) = 1;
  return;
}

// Unwind@1803aed40
void Unwind_1803aed40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12490) = 0;
  *(uint8_t *)(param_2 + 0x19c) = 1;
  return;
}

// Unwind@1803aee20
void Unwind_1803aee20(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x124bc) = 0;
  return;
}

// Unwind@1803aeef0
void Unwind_1803aeef0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x124d4) = 0;
  *(uint8_t *)(param_2 + 0x19b) = 1;
  return;
}

// Unwind@1803aefd0
void Unwind_1803aefd0(void)
{
  func_0x180672f60(&DAT_18083f8f0);
  return;
}

// func_0x1803af090
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803af090(void)
{
  DWORD dwLen;
  BOOL BVar1;
  int64_t lVal_2;
  LPCVOID lpData;
  uint64_t uVal_3;
  uint local_138;
  DWORD local_134;
  LPVOID local_130;
  CHAR local_128 [272];
  
  if (DAT_18084097c == '\0') {
    DAT_18084097c = '\x01';
    func_0x1806ab010(local_128,0,0x104);
    GetModuleFileNameA((HMODULE)0x0,local_128,0x104);
    dwLen = GetFileVersionInfoSizeA(local_128,&local_134);
    if (dwLen == 0) {
      _DAT_18083ec1c = 1;
    }
    else {
      uVal_3 = (uint64_t)dwLen;
      if (dwLen < 0x1000) {
        lpData = (LPCVOID)func_0x180672de0(uVal_3);
      }
      else {
        lVal_2 = func_0x180672de0(uVal_3 + 0x27);
        lpData = (LPCVOID)(lVal_2 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)((int64_t)lpData - 8) = lVal_2;
      }
      func_0x1806ab010(lpData,0,uVal_3);
      BVar1 = GetFileVersionInfoA(local_128,local_134,dwLen,lpData);
      if (BVar1 == 0) {
        _DAT_18083ec1c = 2;
      }
      else {
        local_130 = (LPVOID)0x0;
        local_138 = 0;
        BVar1 = VerQueryValueA(lpData,"\\",&local_130,&local_138);
        if (BVar1 != 0) {
          _DAT_18083ec14 = *(uint *)((int64_t)local_130 + 8) & 0xffff;
          _DAT_18083ec10 = *(uint *)((int64_t)local_130 + 8) >> 0x10;
          _DAT_18083ec18 = (uint)*(ushort *)((int64_t)local_130 + 0xe);
        }
      }
      if (0xfff < dwLen) {
        if (0x1f < (uint64_t)
                   ((int64_t)lpData + (-8 - (int64_t)*(LPCVOID *)((int64_t)lpData + -8)))) {
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_3 = uVal_3 + 0x27;
        lpData = *(LPCVOID *)((int64_t)lpData + -8);
      }
      thunk_FUN_180695dd0(lpData,uVal_3);
    }
  }
  return;
}

// func_0x1803af1f0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1803af1f0(void)
{
  uint64_t *pU64_1;
  char *fnPtr_2;
  int iVal_3;
  func_ptr_t fnPtr_4;
  int64_t lVal_5;
  bool bFlag_6;
  uint32_t uVal_7;
  uint uVal_8;
  size_t sz_9;
  int64_t ********ptr8_Long_10;
  int64_t ********ptr8_Long_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t *pU64_14;
  int64_t *pLong_15;
  int64_t *******ptr7_Long_16;
  char *fnPtr_17;
  uint64_t *******ptr7_U64_18;
  uint64_t *pU64_19;
  uint *pU64_20;
  uint64_t uVal_21;
  int64_t *******ptr7_Long_22;
  bool bFlag_23;
  uint64_t in_stack_fffffffffffffd28;
  uint32_t uVal_24;
  uint8_t local_2c8 [56];
  uint64_t local_290;
  uint64_t local_288;
  undefined5 uStack_280;
  undefined3 uStack_27b;
  undefined5 uStack_278;
  undefined3 uStack_273;
  int64_t *******ppppppplStack_270;
  uint64_t auStack_240 [13];
  uint8_t **local_1d8 [12];
  uint64_t *local_178;
  uint64_t local_170;
  int64_t ********local_168;
  undefined6 uStack_160;
  uint16_t uStack_15a;
  undefined6 uStack_158;
  uint16_t uStack_152;
  uint64_t uStack_150;
  int64_t ********local_130;
  uint8_t local_120 [168];
  uint64_t *******local_78;
  int64_t lStack_70;
  int64_t local_68;
  uint64_t uStack_60;
  char local_58 [8];
  int64_t *local_50;
  byte local_41;
  uint64_t local_40;
  
  uVal_24 = (uint32_t)((uint64_t)in_stack_fffffffffffffd28 >> 0x20);
  local_40 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x13edc) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0x13edc) = 1;
    *(uint8_t *)(lVal_13 + 0x13ed8) = 1;
    *(uint64_t *)(lVal_13 + 0x13ed0) = 0xb15ac0266d410488;
    func_0x180673140(&LAB_180435710);
  }
  lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_13 + 0x13ed0);
  if (*(char *)(lVal_13 + 0x13ed8) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xb129a74f0b2f6bcb;
    *(uint8_t *)(lVal_13 + 0x13ed8) = 0;
  }
  local_168 = (int64_t ********)0x0;
  uStack_160 = 0;
  uStack_15a = 0;
  sz_9 = strlen((char *)pU64_1);
  if (-1 < (int64_t)sz_9) {
    if (sz_9 < 0x10) {
      ptr8_Long_10 = (int64_t ********)&local_168;
      uVal_21 = 0xf;
    }
    else {
      uVal_12 = sz_9 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_12) {
        uVal_21 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        ptr8_Long_10 = (int64_t ********)func_0x180672de0(uVal_21 + 1);
        local_168 = ptr8_Long_10;
      }
      else {
        ptr7_Long_16 = (int64_t *******)func_0x180672de0(uVal_21 + 0x28);
        ptr8_Long_10 = (int64_t ********)((int64_t)ptr7_Long_16 + 0x27U & 0xffffffffffffffe0);
        ptr8_Long_10[-1] = ptr7_Long_16;
        local_168 = ptr8_Long_10;
      }
    }
    uStack_158 = (undefined6)sz_9;
    uStack_152 = (uint16_t)(sz_9 >> 0x30);
    uStack_150 = uVal_21;
    func_0x1806aa960(ptr8_Long_10,pU64_1,sz_9);
    *(uint8_t *)((int64_t)ptr8_Long_10 + sz_9) = 0;
    ptr8_Long_10 = (int64_t ********)func_0x1800becb0();
    ptr7_Long_16 = ptr8_Long_10[2];
    if (&DAT_0000000f < ptr8_Long_10[3]) {
      ptr8_Long_10 = (int64_t ********)*ptr8_Long_10;
    }
    lVal_13 = CONCAT26(uStack_152,uStack_158);
    if ((int64_t *******)(uStack_150 - lVal_13) < ptr7_Long_16) {
      ptr8_Long_11 =
           (int64_t ********)
           func_0x1800871a0(&local_168,ptr7_Long_16,lVal_13,0,ptr8_Long_10,ptr7_Long_16);
      uVal_24 = (uint32_t)((uint64_t)ptr8_Long_10 >> 0x20);
    }
    else {
      uStack_158 = (undefined6)(lVal_13 + (int64_t)ptr7_Long_16);
      uStack_152 = (uint16_t)((uint64_t)(lVal_13 + (int64_t)ptr7_Long_16) >> 0x30);
      ptr7_Long_22 = ptr7_Long_16;
      if (uStack_150 < 0x10) {
        ptr8_Long_11 = (int64_t ********)&local_168;
        if (ptr8_Long_11 < (int64_t ********)((int64_t)ptr8_Long_10 + (int64_t)ptr7_Long_16)
           ) goto LAB_1803af38d;
      }
      else {
        ptr8_Long_11 = local_168;
        if (local_168 < (int64_t ********)((int64_t)ptr8_Long_10 + (int64_t)ptr7_Long_16)) {
LAB_1803af38d:
          if ((ptr8_Long_10 <= (int64_t ********)((int64_t)ptr8_Long_11 + lVal_13)) &&
             (ptr7_Long_22 =
                   (int64_t *******)((int64_t)ptr8_Long_11 - (int64_t)ptr8_Long_10),
             ptr8_Long_11 < ptr8_Long_10 ||
             (int64_t *******)((int64_t)ptr8_Long_11 - (int64_t)ptr8_Long_10) ==
             (int64_t *******)0x0)) {
            ptr7_Long_22 = (int64_t *******)0x0;
          }
        }
      }
      func_0x1806aa960((int64_t)ptr8_Long_11 + (int64_t)ptr7_Long_16,ptr8_Long_11,lVal_13 + 1);
      func_0x1806aa960(ptr8_Long_11,ptr8_Long_10,ptr7_Long_22);
      func_0x1806aa960((int64_t)ptr8_Long_11 + (int64_t)ptr7_Long_22,
                    (int64_t)ptr8_Long_10 + (int64_t)ptr7_Long_16 + (int64_t)ptr7_Long_22,
                    (int64_t)ptr7_Long_16 - (int64_t)ptr7_Long_22);
      ptr8_Long_11 = (int64_t ********)&local_168;
    }
    ppppppplStack_270 = ptr8_Long_11[3];
    uStack_278 = SUB85(ptr8_Long_11[2],0);
    uStack_273 = (undefined3)((uint64_t)ptr8_Long_11[2] >> 0x28);
    local_288._0_4_ = (uint)*ptr8_Long_11;
    local_288._4_4_ = (uint32_t)((uint64_t)*ptr8_Long_11 >> 0x20);
    uStack_280 = SUB85(ptr8_Long_11[1],0);
    uStack_27b = (undefined3)((uint64_t)ptr8_Long_11[1] >> 0x28);
    ptr8_Long_11[2] = (int64_t *******)0x0;
    ptr8_Long_11[3] = (int64_t *******)0xf;
    *(uint8_t *)ptr8_Long_11 = 0;
    pU64_20 = (uint *)&local_288;
    func_0x1800bef00(pU64_20);
    if ((int64_t *******)0xf < ppppppplStack_270) {
      lVal_5 = CONCAT44(local_288._4_4_,(uint)local_288);
      ptr7_Long_16 = (int64_t *******)((int64_t)ppppppplStack_270 + 1);
      lVal_13 = lVal_5;
      if ((int64_t *******)0xfff < ptr7_Long_16) {
        lVal_13 = *(int64_t *)(lVal_5 + -8);
        if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_13)) goto LAB_1803b016c;
        ptr7_Long_16 = ppppppplStack_270 + 5;
      }
      thunk_FUN_180695dd0(lVal_13,ptr7_Long_16);
    }
    uStack_278 = 0;
    uStack_273 = 0;
    ppppppplStack_270 = (int64_t *******)0xf;
    local_288._0_4_ = (uint)local_288 & 0xffffff00;
    if (0xf < uStack_150) {
      uVal_21 = uStack_150 + 1;
      ptr8_Long_10 = local_168;
      if (0xfff < uVal_21) {
        ptr8_Long_10 = (int64_t ********)local_168[-1];
        if (0x1f < (uint64_t)((int64_t)local_168 + (-8 - (int64_t)ptr8_Long_10)))
        goto LAB_1803b016c;
        uVal_21 = uStack_150 + 0x28;
      }
      thunk_FUN_180695dd0(ptr8_Long_10,uVal_21);
    }
    local_288._0_4_ = (uint)_DAT_1806cc89a;
    local_288._4_4_ = (uint32_t)((uint64_t)_DAT_1806cc89a >> 0x20);
    uStack_280 = (undefined5)_UNK_1806cc8a2;
    uStack_27b = 0x212785;
    uStack_278 = 0xeb7d4b50ee;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13ef4) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x13ef4) = 1;
      func_0x18007cd50(lVal_13 + 0x13edd,&local_288);
      func_0x180673140(&LAB_180435730);
    }
    fnPtr_17 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13edd)
    ;
    func_0x180441ae0(fnPtr_17);
    uStack_278 = 0;
    uStack_273 = 0;
    ppppppplStack_270 = (int64_t *******)0x0;
    local_288._0_4_ = 0;
    local_288._4_4_ = 0;
    uStack_280 = 0;
    uStack_27b = 0;
    sz_9 = strlen(fnPtr_17);
    if (-1 < (int64_t)sz_9) {
      uVal_21 = 0xf;
      if (0xf < sz_9) {
        uVal_12 = sz_9 | 0xf;
        uVal_21 = 0x16;
        if (0x16 < uVal_12) {
          uVal_21 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          pU64_20 = (uint *)func_0x180672de0(uVal_21 + 1);
        }
        else {
          lVal_13 = func_0x180672de0(uVal_21 + 0x28);
          pU64_20 = (uint *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_20 + 0xfffffffffffffffe) = lVal_13;
        }
        local_288._0_4_ = (uint)pU64_20;
        local_288._4_4_ = (uint32_t)((uint64_t)pU64_20 >> 0x20);
      }
      uStack_278 = (undefined5)sz_9;
      uStack_273 = (undefined3)(sz_9 >> 0x28);
      ppppppplStack_270 = (int64_t *******)uVal_21;
      func_0x1806aa960(pU64_20,fnPtr_17,sz_9);
      *(uint8_t *)((int64_t)pU64_20 + sz_9) = 0;
      pU64_14 = (uint64_t *)func_0x1800becb0();
      uVal_21 = pU64_14[2];
      if (0xf < (uint64_t)pU64_14[3]) {
        pU64_14 = (uint64_t *)*pU64_14;
      }
      lVal_13 = CONCAT35(uStack_273,uStack_278);
      if ((uint64_t)((int64_t)ppppppplStack_270 - lVal_13) < uVal_21) {
        pLong_15 = (int64_t *)func_0x1800871a0(&local_288,uVal_21,lVal_13,0,pU64_14,uVal_21);
        uVal_24 = (uint32_t)((uint64_t)pU64_14 >> 0x20);
      }
      else {
        uStack_278 = (undefined5)(lVal_13 + uVal_21);
        uStack_273 = (undefined3)(lVal_13 + uVal_21 >> 0x28);
        uVal_12 = uVal_21;
        if (ppppppplStack_270 < 0x10) {
          pU64_19 = &local_288;
          if (pU64_19 < (uint64_t *)((int64_t)pU64_14 + uVal_21)) goto LAB_1803af609;
        }
        else {
          pU64_19 = (uint64_t *)CONCAT44(local_288._4_4_,(uint)local_288);
          if (pU64_19 < (uint64_t *)((int64_t)pU64_14 + uVal_21)) {
LAB_1803af609:
            if ((pU64_14 <= (uint64_t *)((int64_t)pU64_19 + lVal_13)) &&
               (uVal_12 = (int64_t)pU64_19 - (int64_t)pU64_14,
               pU64_19 < pU64_14 || (int64_t)pU64_19 - (int64_t)pU64_14 == 0)) {
              uVal_12 = 0;
            }
          }
        }
        func_0x1806aa960((int64_t)pU64_19 + uVal_21,pU64_19,lVal_13 + 1);
        func_0x1806aa960(pU64_19,pU64_14,uVal_12);
        sz_9 = (int64_t)pU64_19 + uVal_12;
        func_0x1806aa960(sz_9,(int64_t)pU64_14 + uVal_12 + uVal_21,uVal_21 - uVal_12);
        pLong_15 = &local_288;
      }
      local_78 = (uint64_t *******)*pLong_15;
      lStack_70 = pLong_15[1];
      local_68 = pLong_15[2];
      uStack_60 = pLong_15[3];
      pLong_15[2] = 0;
      pLong_15[3] = 0xf;
      *(uint8_t *)pLong_15 = 0;
      if (0xf < ppppppplStack_270) {
        lVal_5 = CONCAT44(local_288._4_4_,(uint)local_288);
        uVal_21 = (int64_t)ppppppplStack_270 + 1;
        lVal_13 = lVal_5;
        if (0xfff < uVal_21) {
          lVal_13 = *(int64_t *)(lVal_5 + -8);
          if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_13)) goto LAB_1803b016c;
          uVal_21 = (int64_t)ppppppplStack_270 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_13,uVal_21);
      }
      ptr7_U64_18 = local_78;
      if (uStack_60 < 0x10) {
        ptr7_U64_18 = &local_78;
      }
      local_288._0_4_ = (uint)ptr7_U64_18;
      local_288._4_4_ = (uint32_t)((uint64_t)ptr7_U64_18 >> 0x20);
      uStack_280 = (undefined5)local_68;
      uStack_27b = (undefined3)((uint64_t)local_68 >> 0x28);
      uVal_7 = func_0x180678230();
      func_0x1800a6340(&local_168,uVal_7,&local_288);
      ptr8_Long_10 = (int64_t ********)&local_168;
      if (7 < uStack_150) {
        ptr8_Long_10 = local_168;
      }
      uVal_8 = func_0x180677ed0(ptr8_Long_10,&local_288,3,0xffffffff);
      if (0x7a < (int)uVal_8) {
        bFlag_23 = false;
        if (((uVal_8 == 0x7b) || (bFlag_23 = false, uVal_8 == 0xa1)) || (uVal_8 == 0x10b))
        goto LAB_1803af75c;
LAB_1803b0180:
        uStack_280 = 0x1806b00d8;
        uStack_27b = 0;
        local_288._0_4_ = uVal_8;
        func_0x18008a340("exists",&local_288,&local_168);
LAB_1803b01a6:
        func_0x18007ba70();
        fnPtr_4 = (func_ptr_t )swi(3);
        uVal_21 = (*fnPtr_4)();
        return uVal_21;
      }
      if ((0x3e < uVal_8 - 2) ||
         (bFlag_23 = false, (0x4008000000000003U >> ((uint64_t)(uVal_8 - 2) & 0x3f) & 1) == 0)) {
        if (uVal_8 != 0) goto LAB_1803b0180;
        bFlag_23 = true;
      }
LAB_1803af75c:
      if (7 < uStack_150) {
        uVal_21 = uStack_150 * 2 + 2;
        ptr8_Long_10 = local_168;
        if (0xfff < uVal_21) {
          ptr8_Long_10 = (int64_t ********)local_168[-1];
          if (0x1f < (uint64_t)((int64_t)local_168 + (-8 - (int64_t)ptr8_Long_10)))
          goto LAB_1803b016c;
          uVal_21 = uStack_150 * 2 + 0x29;
        }
        thunk_FUN_180695dd0(ptr8_Long_10,uVal_21);
      }
      uVal_21 = CONCAT71((int7)(sz_9 >> 8),1);
      if (bFlag_23) {
        ptr7_U64_18 = local_78;
        if (uStack_60 < 0x10) {
          ptr7_U64_18 = &local_78;
        }
        uVal_21 = CONCAT44(uVal_24,1);
        func_0x1800a64e0(&local_288,ptr7_U64_18,0x20,0x40,uVal_21);
        local_58[0] = '\0';
        local_50 = (int64_t *)0x0;
        local_290 = 0;
        local_178 = &local_288;
        local_170 = *(uint64_t *)
                     ((int64_t)auStack_240 +
                     (int64_t)*(int *)(CONCAT44(local_288._4_4_,(uint)local_288) + 4));
        local_41 = 1;
        func_0x1800a6a30(&local_168,&local_178,local_2c8,1,uVal_21 & 0xffffffffffffff00);
        ptr8_Long_10 = (int64_t ********)&local_168;
        func_0x1800a6c00(ptr8_Long_10,0,local_58);
        func_0x1800a7830(local_120);
        if (local_130 != (int64_t ********)0x0) {
          (*(func_ptr_t )(*local_130)[4])(local_130,local_130 != ptr8_Long_10);
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x13f00) == '\0') {
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_13 + 0x13f00) = 1;
          *(uint64_t *)(lVal_13 + 0x13ef8) = 0x1ed915eebee43c2;
          func_0x180673140(&LAB_180435760);
        }
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint64_t *)(lVal_13 + 0x13ef8);
        if (*(char *)(lVal_13 + 0x13eff) == '\x01') {
          *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0x13efd) << 8,*(uint32_t *)pU64_1) |
                    (uint64_t)*(byte *)(lVal_13 + 0x13efc) << 0x20) ^ SUB168(_DAT_1806be750,0);
        }
        uStack_158 = 0;
        uStack_152 = 0;
        uStack_150 = 0;
        local_168 = (int64_t ********)0x0;
        uStack_160 = 0;
        uStack_15a = 0;
        sz_9 = strlen((char *)pU64_1);
        if ((int64_t)sz_9 < 0) {
          func_0x18007ba70();
LAB_1803b0174:
          func_0x18007ba70();
LAB_1803b017a:
          uVal_8 = func_0x18007ba70();
          goto LAB_1803b0180;
        }
        uVal_21 = 0xf;
        if (0xf < sz_9) {
          uVal_12 = sz_9 | 0xf;
          uVal_21 = 0x16;
          if (0x16 < uVal_12) {
            uVal_21 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            ptr8_Long_10 = (int64_t ********)func_0x180672de0(uVal_21 + 1);
            local_168 = ptr8_Long_10;
          }
          else {
            ptr7_Long_16 = (int64_t *******)func_0x180672de0(uVal_21 + 0x28);
            ptr8_Long_10 =
                 (int64_t ********)((int64_t)ptr7_Long_16 + 0x27U & 0xffffffffffffffe0);
            ptr8_Long_10[-1] = ptr7_Long_16;
            local_168 = ptr8_Long_10;
          }
        }
        uStack_158 = (undefined6)sz_9;
        uStack_152 = (uint16_t)(sz_9 >> 0x30);
        uStack_150 = uVal_21;
        func_0x1806aa960(ptr8_Long_10,pU64_1,sz_9);
        *(uint8_t *)((int64_t)ptr8_Long_10 + sz_9) = 0;
        if (local_58[0] == '\x01') {
          lVal_13 = func_0x1800a5e70(local_50,&local_168);
          bFlag_23 = lVal_13 != *local_50;
          bFlag_6 = bFlag_23;
          if (0xf < uStack_150) goto LAB_1803afa13;
LAB_1803af9fa:
          if (bFlag_23) goto LAB_1803afa54;
        }
        else {
          bFlag_6 = false;
          bFlag_23 = false;
          if (uStack_150 < 0x10) goto LAB_1803af9fa;
LAB_1803afa13:
          uVal_21 = uStack_150 + 1;
          ptr8_Long_10 = local_168;
          if (0xfff < uVal_21) {
            ptr8_Long_10 = (int64_t ********)local_168[-1];
            if (0x1f < (uint64_t)((int64_t)local_168 + (-8 - (int64_t)ptr8_Long_10)))
            goto LAB_1803b016c;
            uVal_21 = uStack_150 + 0x28;
          }
          thunk_FUN_180695dd0(ptr8_Long_10,uVal_21);
          if (bFlag_6) {
LAB_1803afa54:
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x13f10) == '\0') {
              lVal_13 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_13 + 0x13f10) = 1;
              *(uint64_t *)(lVal_13 + 0x13f08) = 0x157e372516c4192;
              func_0x180673140(&LAB_180435790);
            }
            lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            pU64_1 = (uint64_t *)(lVal_13 + 0x13f08);
            if (*(char *)(lVal_13 + 0x13f0f) == '\x01') {
              *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0x13f0d) << 8,*(uint32_t *)pU64_1) |
                        (uint64_t)*(byte *)(lVal_13 + 0x13f0c) << 0x20) ^ SUB168(_DAT_1806c8700,0);
            }
            uStack_158 = 0;
            uStack_152 = 0;
            uStack_150 = 0;
            local_168 = (int64_t ********)0x0;
            uStack_160 = 0;
            uStack_15a = 0;
            sz_9 = strlen((char *)pU64_1);
            if ((int64_t)sz_9 < 0) goto LAB_1803b0174;
            if (sz_9 < 0x10) {
              ptr8_Long_10 = (int64_t ********)&local_168;
              uVal_21 = 0xf;
            }
            else {
              uVal_12 = sz_9 | 0xf;
              uVal_21 = 0x16;
              if (0x16 < uVal_12) {
                uVal_21 = uVal_12;
              }
              if (uVal_12 < 0xfff) {
                ptr8_Long_10 = (int64_t ********)func_0x180672de0(uVal_21 + 1);
                local_168 = ptr8_Long_10;
              }
              else {
                ptr7_Long_16 = (int64_t *******)func_0x180672de0(uVal_21 + 0x28);
                ptr8_Long_10 =
                     (int64_t ********)((int64_t)ptr7_Long_16 + 0x27U & 0xffffffffffffffe0);
                ptr8_Long_10[-1] = ptr7_Long_16;
                local_168 = ptr8_Long_10;
              }
            }
            uStack_158 = (undefined6)sz_9;
            uStack_152 = (uint16_t)(sz_9 >> 0x30);
            uStack_150 = uVal_21;
            func_0x1806aa960(ptr8_Long_10,pU64_1,sz_9);
            *(uint8_t *)((int64_t)ptr8_Long_10 + sz_9) = 0;
            ptr8_Long_10 = (int64_t ********)&local_168;
            fnPtr_17 = (char *)func_0x18004d550(local_58,ptr8_Long_10);
            if (0xf < uStack_150) {
              uVal_21 = uStack_150 + 1;
              ptr8_Long_11 = local_168;
              if (0xfff < uVal_21) {
                ptr8_Long_11 = (int64_t ********)local_168[-1];
                if (0x1f < (uint64_t)((int64_t)local_168 + (-8 - (int64_t)ptr8_Long_11)))
                goto LAB_1803b016c;
                uVal_21 = uStack_150 + 0x28;
              }
              thunk_FUN_180695dd0(ptr8_Long_11,uVal_21);
            }
            if (*fnPtr_17 != '\0') {
              local_168 = (int64_t ********)_DAT_1806cc8af;
              uStack_160 = (undefined6)_UNK_1806cc8b7;
              uStack_15a = 0xe007;
              uStack_158 = 0xc1bcd9885e66;
              if (*(char *)(*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                           0x13f28) == '\0') {
                lVal_13 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                *(uint8_t *)(lVal_13 + 0x13f28) = 1;
                func_0x18007cab0(lVal_13 + 0x13f11,&local_168);
                func_0x180673140(&LAB_1804357c0);
              }
              fnPtr_2 = (char *)(*(int64_t *)
                                 ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                               0x13f11);
              func_0x180441b10(fnPtr_2);
              uStack_158 = 0;
              uStack_152 = 0;
              uStack_150 = 0;
              local_168 = (int64_t ********)0x0;
              uStack_160 = 0;
              uStack_15a = 0;
              sz_9 = strlen(fnPtr_2);
              if ((int64_t)sz_9 < 0) goto LAB_1803b017a;
              uVal_21 = 0xf;
              if (0xf < sz_9) {
                uVal_12 = sz_9 | 0xf;
                uVal_21 = 0x16;
                if (0x16 < uVal_12) {
                  uVal_21 = uVal_12;
                }
                if (uVal_12 < 0xfff) {
                  ptr8_Long_10 = (int64_t ********)func_0x180672de0(uVal_21 + 1);
                  local_168 = ptr8_Long_10;
                }
                else {
                  ptr7_Long_16 = (int64_t *******)func_0x180672de0(uVal_21 + 0x28);
                  ptr8_Long_10 =
                       (int64_t ********)((int64_t)ptr7_Long_16 + 0x27U & 0xffffffffffffffe0);
                  ptr8_Long_10[-1] = ptr7_Long_16;
                  local_168 = ptr8_Long_10;
                }
              }
              uStack_158 = (undefined6)sz_9;
              uStack_152 = (uint16_t)(sz_9 >> 0x30);
              uStack_150 = uVal_21;
              func_0x1806aa960(ptr8_Long_10,fnPtr_2,sz_9);
              *(uint8_t *)((int64_t)ptr8_Long_10 + sz_9) = 0;
              bFlag_23 = true;
              if (*fnPtr_17 == '\x01') {
                lVal_13 = func_0x1800a5e70(*(uint64_t *)(fnPtr_17 + 8),&local_168);
                bFlag_23 = lVal_13 == **(int64_t **)(fnPtr_17 + 8);
              }
              if (0xf < uStack_150) {
                uVal_21 = uStack_150 + 1;
                ptr8_Long_10 = local_168;
                if (0xfff < uVal_21) {
                  ptr8_Long_10 = (int64_t ********)local_168[-1];
                  if (0x1f < (uint64_t)((int64_t)local_168 + (-8 - (int64_t)ptr8_Long_10)))
                  goto LAB_1803b016c;
                  uVal_21 = uStack_150 + 0x28;
                }
                thunk_FUN_180695dd0(ptr8_Long_10,uVal_21);
              }
              if (bFlag_23) {
                local_41 = 1;
              }
              else {
                local_168 = (int64_t ********)_DAT_1806cc8c5;
                uStack_160 = (undefined6)_UNK_1806cc8cd;
                uStack_15a = 0x8a83;
                uStack_158 = 0x410af55c04bc;
                if (*(char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x13f40) == '\0') {
                  lVal_13 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  *(uint8_t *)(lVal_13 + 0x13f40) = 1;
                  func_0x18007cab0(lVal_13 + 0x13f29,&local_168);
                  func_0x180673140(&LAB_1804357f0);
                }
                fnPtr_2 = (char *)(*(int64_t *)
                                   ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                                 + 0x13f29);
                func_0x180441b40(fnPtr_2);
                uStack_158 = 0;
                uStack_152 = 0;
                uStack_150 = 0;
                local_168 = (int64_t ********)0x0;
                uStack_160 = 0;
                uStack_15a = 0;
                sz_9 = strlen(fnPtr_2);
                if ((int64_t)sz_9 < 0) goto LAB_1803b01a6;
                if (sz_9 < 0x10) {
                  local_41 = 1;
                  ptr8_Long_10 = (int64_t ********)&local_168;
                  uVal_21 = 0xf;
                }
                else {
                  local_41 = 1;
                  uVal_12 = sz_9 | 0xf;
                  uVal_21 = 0x16;
                  if (0x16 < uVal_12) {
                    uVal_21 = uVal_12;
                  }
                  if (uVal_12 < 0xfff) {
                    ptr8_Long_10 = (int64_t ********)func_0x180672de0(uVal_21 + 1);
                    local_168 = ptr8_Long_10;
                  }
                  else {
                    ptr7_Long_16 = (int64_t *******)func_0x180672de0(uVal_21 + 0x28);
                    ptr8_Long_10 =
                         (int64_t ********)((int64_t)ptr7_Long_16 + 0x27U & 0xffffffffffffffe0);
                    ptr8_Long_10[-1] = ptr7_Long_16;
                    local_168 = ptr8_Long_10;
                  }
                }
                uStack_158 = (undefined6)sz_9;
                uStack_152 = (uint16_t)(sz_9 >> 0x30);
                uStack_150 = uVal_21;
                func_0x1806aa960(ptr8_Long_10,fnPtr_2,sz_9);
                *(uint8_t *)((int64_t)ptr8_Long_10 + sz_9) = 0;
                fnPtr_17 = (char *)func_0x18004d550(fnPtr_17,&local_168);
                if (0xf < uStack_150) {
                  uVal_21 = uStack_150 + 1;
                  ptr8_Long_10 = local_168;
                  if (0xfff < uVal_21) {
                    ptr8_Long_10 = (int64_t ********)local_168[-1];
                    if (0x1f < (uint64_t)((int64_t)local_168 + (-8 - (int64_t)ptr8_Long_10)))
                    goto LAB_1803b016c;
                    uVal_21 = uStack_150 + 0x28;
                  }
                  thunk_FUN_180695dd0(ptr8_Long_10,uVal_21);
                }
                if (*fnPtr_17 != '\0') {
                  if (*fnPtr_17 != '\x04') {
                    local_178 = (uint64_t *)func_0x1800833d0(fnPtr_17);
                    func_0x180083260(local_2c8,"type must be boolean, but is ",&local_178);
                    func_0x180082f00(&local_168,0x12e,local_2c8,fnPtr_17);
                    func_0x18067a120(&local_168,&DAT_180768700);
                    goto LAB_1803b0167;
                  }
                  local_41 = fnPtr_17[8];
                }
              }
            }
          }
        }
        func_0x180084c70(&local_50,local_58[0]);
        *(uint8_t ***)
         ((int64_t)&local_288 + (int64_t)*(int *)(CONCAT44(local_288._4_4_,(uint)local_288) + 4))
             = &PTR_LAB_1806b0178;
        iVal_3 = *(int *)(CONCAT44(local_288._4_4_,(uint)local_288) + 4);
        *(int *)((int64_t)&local_290 + (int64_t)iVal_3 + 4) = iVal_3 + -0xb0;
        func_0x18008b1c0(&uStack_278);
        local_1d8[0] = &PTR_LAB_1806b0288;
        func_0x180673810(local_1d8);
        uVal_21 = (uint64_t)local_41;
      }
      if (0xf < uStack_60) {
        uVal_12 = uStack_60 + 1;
        ptr7_U64_18 = local_78;
        if (0xfff < uVal_12) {
          ptr7_U64_18 = (uint64_t *******)local_78[-1];
          if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr7_U64_18)))
          goto LAB_1803b016c;
          uVal_12 = uStack_60 + 0x28;
        }
        thunk_FUN_180695dd0(ptr7_U64_18,uVal_12);
      }
      return uVal_21 & 0xffffffff;
    }
  }
LAB_1803b0167:
  func_0x18007ba70();
LAB_1803b016c:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1803b01b0
void Unwind_1803b01b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1803b01e0
void Unwind_1803b01e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1803b0220
void Unwind_1803b0220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1803b0250
void Unwind_1803b0250(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 400);
  return;
}

// Unwind@1803b0290
void Unwind_1803b0290(uint64_t param_1,int64_t param_2)
{
  func_0x1800a7510(param_2 + 400);
  return;
}

// Catch@1803b02d0
uint64_t Catch_1803b02d0(void)
{
  return 0x1803afedf;
}

// Unwind@1803b0300
void Unwind_1803b0300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1803b0340
void Unwind_1803b0340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1803b0380
void Unwind_1803b0380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  return;
}

// Unwind@1803b03c0
void Unwind_1803b03c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13ef4) = 0;
  return;
}

// Unwind@1803b0400
void Unwind_1803b0400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1803b0440
void Unwind_1803b0440(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13f28) = 0;
  return;
}

// Unwind@1803b0480
void Unwind_1803b0480(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13f40) = 0;
  return;
}

// Unwind@1803b04c0
void Unwind_1803b04c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1803b0500
void Unwind_1803b0500(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1803b0530
void Unwind_1803b0530(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1803b0550
void Unwind_1803b0550(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1803b0570
void Unwind_1803b0570(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x2a0);
  func_0x1800573d0(param_2 + 0x70);
  return;
}

// func_0x1803b05b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803b05b0(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t local_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = _UNK_1806cb69b;
  uStack_24 = _UNK_1806cb69f;
  uStack_20 = _UNK_1806cb6a3;
  local_38 = _DAT_1806cb68b;
  uStack_34 = _UNK_1806cb68f;
  uStack_30 = _UNK_1806cb693;
  local_2c = _DAT_1806cb697;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x123a4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x123a4) = 1;
    func_0x18008fba0(lVal_1 + 0x12385,&local_38);
    func_0x180673140(&LAB_18042fd20);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12385;
}

// Unwind@1803b0650
void Unwind_1803b0650(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x123a4) = 0;
  return;
}

// func_0x1803b0680
void func_0x1803b0680(int64_t param_1)
{
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  func_0x1803f1b80(param_1);
  func_0x1803f1de0(param_1);
  func_0x1803f2040(param_1);
  func_0x1803f22a0(param_1);
  func_0x1803f2500(param_1);
  func_0x1803f2760(param_1);
  func_0x1803f29c0(param_1);
  func_0x1803f2c20(param_1);
  func_0x1803f2e80(param_1);
  func_0x1803f30e0(param_1);
  func_0x1803f3340(param_1);
  func_0x1803f35a0(param_1);
  func_0x1803f3800(param_1);
  func_0x1803f3a60(param_1);
  func_0x1803f3cc0(param_1);
  func_0x1803f3f20(param_1);
  func_0x1803f4180(param_1);
  func_0x1803f43e0(param_1);
  func_0x1803f4640(param_1);
  func_0x1803f48a0(param_1);
  func_0x1803f4b00(param_1);
  func_0x1803f4d60(param_1);
  func_0x1803f4fc0(param_1);
  func_0x1803f5220(param_1);
  func_0x1803f5480(param_1);
  func_0x1803f56e0(param_1);
  func_0x1803f5940(param_1);
  func_0x1803f5ba0(param_1);
  func_0x1803f5e00(param_1);
  func_0x1803f6060(param_1);
  func_0x1803f62c0(param_1);
  func_0x1803f6520(param_1);
  func_0x1803f6780(param_1);
  func_0x1803f69e0(param_1);
  func_0x1803f6c40(param_1);
  func_0x1803f6ea0(param_1);
  func_0x1803f7100(param_1);
  func_0x1803f7360(param_1);
  func_0x1803f75c0(param_1);
  func_0x1803f7820(param_1);
  func_0x1803f7a80(param_1);
  func_0x1803f7ce0(param_1);
  func_0x1803f7f40(param_1);
  func_0x1803f81a0(param_1);
  func_0x1803f8400(param_1);
  func_0x1803f8660(param_1);
  func_0x1803f88c0(param_1);
  func_0x1803f8b20(param_1);
  func_0x1803f8d80(param_1);
  func_0x1803f8fe0(param_1);
  func_0x1803f9240(param_1);
  func_0x1803f94a0(param_1);
  func_0x1803f9700(param_1);
  func_0x1803f9960(param_1);
  func_0x1803f9bc0(param_1);
  func_0x1803f9e20(param_1);
  func_0x1803fa080(param_1);
  func_0x1803fa2e0(param_1);
  func_0x1803fa540(param_1);
  func_0x1803fa7a0(param_1);
  func_0x1803faa00(param_1);
  func_0x1803fac60(param_1);
  func_0x1803faec0(param_1);
  func_0x1803fb120(param_1);
  func_0x1803fb380(param_1);
  func_0x1803fb5e0(param_1);
  func_0x1803fb840(param_1);
  func_0x1803fbaa0(param_1);
  func_0x1803fbd00(param_1);
  func_0x1803fbf60(param_1);
  func_0x1803fc1c0(param_1);
  func_0x1803fc420(param_1);
  func_0x1803fc680(param_1);
  func_0x1803fc8e0(param_1);
  func_0x1803fcb40(param_1);
  func_0x1803fcda0(param_1);
  func_0x1803fd000(param_1);
  func_0x1803fd260(param_1);
  func_0x1803fd4c0(param_1);
  func_0x1803fd720(param_1);
  func_0x1803fd980(param_1);
  func_0x1803fdbe0(param_1);
  func_0x1803fde40(param_1);
  func_0x1803fe0a0(param_1);
  func_0x1803fe300(param_1);
  func_0x1803fe560(param_1);
  func_0x1803fe7c0(param_1);
  func_0x1803fea20(param_1);
  func_0x1803fec80(param_1);
  func_0x1803feee0(param_1);
  func_0x1803ff140(param_1);
  func_0x1803ff3a0(param_1);
  func_0x1803ff600(param_1);
  func_0x1803ff860(param_1);
  func_0x1803ffac0(param_1);
  func_0x1803ffd20(param_1);
  func_0x1803fff80(param_1);
  func_0x1804001e0(param_1);
  func_0x180400440(param_1);
  func_0x1804006a0(param_1);
  func_0x180400900(param_1);
  func_0x180400b60(param_1);
  func_0x180400dc0(param_1);
  func_0x180401020(param_1);
  func_0x1803dfe90();
  *(uint8_t *)(param_1 + 0x10) = 1;
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  return;
}

// Unwind@1803b0a70
void Unwind_1803b0a70(uint64_t param_1,int64_t param_2)
{
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_2 + 0x28));
  return;
}

// func_0x1803b0a90
void func_0x1803b0a90(int64_t *param_1)
{
  uint64_t *pU64_1;
  uint64_t *pU64_2;
  
  pU64_2 = (uint64_t *)*param_1;
  if (pU64_2 != (uint64_t *)0x0) {
    LOCK();
    pU64_1 = pU64_2 + 1;
    *(int *)pU64_1 = *(int *)pU64_1 + -1;
    UNLOCK();
    if (*(int *)pU64_1 == 0) {
      if ((uint64_t *)pU64_2[0x19] != (uint64_t *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001803b0ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (***(func_ptr_t **)(uint64_t *)pU64_2[0x19])();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001803b0ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(func_ptr_t *)*pU64_2)(pU64_2,1);
      return;
    }
  }
  return;
}

// func_0x1803b0ad0
uint64_t func_0x1803b0ad0(HMODULE param_1,int param_2)
{
  uint *pU64_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint uVal_4;
  size_t sz_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t uVal_8;
  uint64_t *pU64_9;
  char *fnPtr_10;
  char *fnPtr_11;
  uint8_t *pU64_12;
  uint64_t uVal_13;
  int64_t local_288;
  uint8_t local_280 [8];
  uint auStack_278 [14];
  int64_t alStack_240 [12];
  uint8_t **local_1e0 [11];
  int iStack_184;
  int64_t local_180;
  uint8_t local_178 [8];
  uint auStack_170 [14];
  int64_t alStack_138 [12];
  uint8_t **local_d8 [12];
  uint32_t local_78 [2];
  uint8_t **local_70;
  uint8_t local_68 [16];
  uint8_t local_58 [32];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    if (param_2 == 1) {
      DisableThreadLibraryCalls(param_1);
      CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&DAT_1803a61c0,param_1,0,
                   (LPDWORD)0x0);
    }
    return 1;
  }
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840260) && (func_0x180672ec0(&DAT_180840260), DAT_180840260 == -1)) {
    uVal_8 = func_0x1803b1490();
    uVal_8 = func_0x1803b1520(uVal_8);
    func_0x180001060(&local_288,uVal_8);
    uVal_8 = func_0x1800becb0();
    func_0x1800bebb0(&DAT_180840240,uVal_8,&local_288);
    func_0x180001e70(&local_288);
    func_0x1806731d0(&LAB_1803b1560);
    _Init_thread_footer(&DAT_180840260);
  }
  pU64_9 = DAT_180840240;
  if (DAT_180840258 < 0x10) {
    pU64_9 = &DAT_180840240;
  }
  func_0x1800f2cb0(&local_288,pU64_9,2,0x40,1);
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840288) && (func_0x180672ec0(&DAT_180840288), DAT_180840288 == -1)) {
    uVal_8 = func_0x1803b15d0();
    uVal_8 = func_0x1803b1660(uVal_8);
    func_0x180001060(&local_180,uVal_8);
    uVal_8 = func_0x1800becb0();
    func_0x1800bebb0(&DAT_180840268,uVal_8,&local_180);
    func_0x180001e70(&local_180);
    func_0x1806731d0(&LAB_1803b1680);
    _Init_thread_footer(&DAT_180840288);
  }
  pU64_9 = DAT_180840268;
  if (DAT_180840280 < 0x10) {
    pU64_9 = &DAT_180840268;
  }
  func_0x1800f2cb0(&local_180,pU64_9,2,0x40,1);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12518) == '\0') {
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_7 + 0x12518) = 1;
    *(uint32_t *)(lVal_7 + 0x12510) = 0x3de93213;
    *(uint16_t *)(lVal_7 + 0x12514) = 0x1af;
    func_0x180673140(&LAB_180430380);
  }
  lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_7 + 0x12510);
  if (*(char *)(lVal_7 + 0x12515) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0x5185477d;
    *(byte *)(lVal_7 + 0x12514) = *(byte *)(lVal_7 + 0x12514) ^ 0xaf;
    *(uint8_t *)(lVal_7 + 0x12515) = 0;
  }
  local_58._0_16_ = ZEXT816(0);
  local_68 = ZEXT816(0);
  sz_5 = strlen((char *)pU64_1);
  if ((int64_t)sz_5 < 0) {
    func_0x18007ba70();
  }
  else {
    uVal_13 = 0xf;
    pU64_12 = local_68;
    if (0xf < sz_5) {
      uVal_6 = sz_5 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_6) {
        uVal_13 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_13 + 0x28);
        pU64_12 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_12 + -8) = lVal_7;
      }
      local_68._0_8_ = pU64_12;
    }
    local_58._0_8_ = sz_5;
    local_58._8_8_ = uVal_13;
    func_0x1806aa960(pU64_12,pU64_1,sz_5);
    pU64_12[sz_5] = 0;
    pU64_12 = local_68;
    if (0xf < (uint64_t)local_58._8_8_) {
      pU64_12 = (uint8_t *)local_68._0_8_;
    }
    uVal_8 = func_0x1801038e0(&local_288,pU64_12,local_58._0_8_);
    func_0x180103810(uVal_8);
    if (0xf < (uint64_t)local_58._8_8_) {
      uVal_13 = local_58._8_8_ + 1;
      lVal_7 = local_68._0_8_;
      if (0xfff < uVal_13) {
        lVal_7 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_7)) goto LAB_1803b118b;
        uVal_13 = local_58._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_13);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12524) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x12524) = 1;
      *(uint32_t *)(lVal_7 + 0x1251c) = 0x87010227;
      *(uint16_t *)(lVal_7 + 0x12520) = 0x1b5;
      func_0x180673140(&LAB_1804303b0);
    }
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_7 + 0x1251c);
    if (*(char *)(lVal_7 + 0x12521) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xeb6d7749;
      *(byte *)(lVal_7 + 0x12520) = *(byte *)(lVal_7 + 0x12520) ^ 0xb5;
      *(uint8_t *)(lVal_7 + 0x12521) = 0;
    }
    local_58._0_16_ = ZEXT816(0);
    local_68 = ZEXT816(0);
    sz_5 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_5) {
      uVal_13 = 0xf;
      pU64_12 = local_68;
      if (0xf < sz_5) {
        uVal_6 = sz_5 | 0xf;
        uVal_13 = 0x16;
        if (0x16 < uVal_6) {
          uVal_13 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_12 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_13 + 0x28);
          pU64_12 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_12 + -8) = lVal_7;
        }
        local_68._0_8_ = pU64_12;
      }
      local_58._0_8_ = sz_5;
      local_58._8_8_ = uVal_13;
      func_0x1806aa960(pU64_12,pU64_1,sz_5);
      pU64_12[sz_5] = 0;
      pU64_12 = local_68;
      if (0xf < (uint64_t)local_58._8_8_) {
        pU64_12 = (uint8_t *)local_68._0_8_;
      }
      uVal_8 = func_0x1801038e0(&local_180,pU64_12,local_58._0_8_);
      func_0x180103810(uVal_8);
      if (0xf < (uint64_t)local_58._8_8_) {
        uVal_13 = local_58._8_8_ + 1;
        lVal_7 = local_68._0_8_;
        if (0xfff < uVal_13) {
          lVal_7 = *(int64_t *)(local_68._0_8_ + -8);
          if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_7)) goto LAB_1803b118b;
          uVal_13 = local_58._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_13);
      }
      lVal_7 = func_0x18008b2b0(local_280);
      if (lVal_7 == 0) {
        lVal_7 = (int64_t)*(int *)(local_288 + 4);
        uVal_4 = *(uint *)((int64_t)auStack_278 + lVal_7 + 4);
        uVal_3 = *(uint *)((int64_t)auStack_278 + lVal_7) & 0x15 |
                (uint)(*(int64_t *)((int64_t)alStack_240 + lVal_7) == 0) << 2 | 2;
        *(uint *)((int64_t)auStack_278 + lVal_7) = uVal_3;
        uVal_3 = uVal_3 & uVal_4;
        if (uVal_3 != 0) {
          fnPtr_10 = "ios_base::failbit set";
          if ((uVal_4 & 2) == 0) {
            fnPtr_10 = "ios_base::eofbit set";
          }
          fnPtr_11 = "ios_base::badbit set";
          if ((uVal_3 & 4) == 0) {
            fnPtr_11 = fnPtr_10;
          }
          local_78[0] = 1;
          local_70 = &PTR_vftable_1806b0968;
          func_0x1800968f0(local_68,local_78,fnPtr_11);
          local_68._0_8_ = std::ios_base::failure::vftable;
          pU64_12 = local_68;
          uVal_4 = func_0x18067a120(pU64_12,&DAT_180768ca8);
          goto LAB_1803b11fd;
        }
      }
      lVal_7 = func_0x18008b2b0(local_178);
      if (lVal_7 == 0) {
        lVal_7 = (int64_t)*(int *)(local_180 + 4);
        uVal_3 = *(uint *)((int64_t)auStack_170 + lVal_7 + 4);
        pU64_12 = (uint8_t *)(uint64_t)uVal_3;
        uVal_4 = *(uint *)((int64_t)auStack_170 + lVal_7) & 0x15 |
                (uint)(*(int64_t *)((int64_t)alStack_138 + lVal_7) == 0) << 2 | 2;
        *(uint *)((int64_t)auStack_170 + lVal_7) = uVal_4;
        uVal_4 = uVal_4 & uVal_3;
        if (uVal_4 != 0) {
LAB_1803b11fd:
          fnPtr_10 = "ios_base::failbit set";
          if (((uint64_t)pU64_12 & 2) == 0) {
            fnPtr_10 = "ios_base::eofbit set";
          }
          fnPtr_11 = "ios_base::badbit set";
          if ((uVal_4 & 4) == 0) {
            fnPtr_11 = fnPtr_10;
          }
          local_78[0] = 1;
          local_70 = &PTR_vftable_1806b0968;
          func_0x1800968f0(local_68,local_78,fnPtr_11);
          local_68._0_8_ = std::ios_base::failure::vftable;
          func_0x18067a120(local_68,&DAT_180768ca8);
          fnPtr_2 = (func_ptr_t )swi(3);
          uVal_8 = (*fnPtr_2)();
          return uVal_8;
        }
      }
      *(uint8_t ***)(local_178 + (int64_t)*(int *)(local_180 + 4) + -8) = &PTR_LAB_1806b3a48;
      *(int *)((int64_t)&iStack_184 + (int64_t)*(int *)(local_180 + 4)) =
           *(int *)(local_180 + 4) + -0xa8;
      func_0x18008b1c0(local_178);
      local_d8[0] = &PTR_LAB_1806b0288;
      func_0x180673810(local_d8);
      *(uint8_t ***)(local_280 + (int64_t)*(int *)(local_288 + 4) + -8) = &PTR_LAB_1806b3a48;
      *(int *)((int64_t)auStack_278 + (int64_t)*(int *)(local_288 + 4) + -0x14) =
           *(int *)(local_288 + 4) + -0xa8;
      func_0x18008b1c0(local_280);
      local_1e0[0] = &PTR_LAB_1806b0288;
      func_0x180673810(local_1e0);
      return 1;
    }
  }
  func_0x18007ba70();
LAB_1803b118b:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1803b1270
void Unwind_1803b1270(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1803b1290
void Unwind_1803b1290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1803b12c0
void Unwind_1803b12c0(void)
{
  func_0x180672f60(&DAT_180840260);
  return;
}

// Unwind@1803b1300
void Unwind_1803b1300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x138);
  return;
}

// Unwind@1803b1340
void Unwind_1803b1340(void)
{
  func_0x180672f60(&DAT_180840288);
  return;
}

// Unwind@1803b1380
void Unwind_1803b1380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@1803b13c0
void Unwind_1803b13c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@1803b1400
void Unwind_1803b1400(uint64_t param_1,int64_t param_2)
{
  func_0x1800c22f0(param_2 + 0x138);
  return;
}

// Unwind@1803b1440
void Unwind_1803b1440(uint64_t param_1,int64_t param_2)
{
  func_0x1800c22f0(param_2 + 0x30);
  return;
}

// Unwind@1803b1470
void Unwind_1803b1470(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1803b1490
int64_t func_0x1803b1490(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x124fc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x124fc) = 1;
    *(uint64_t *)(lVal_1 + 0x124f0) = 0xb7690bf2cb954aac;
    *(uint32_t *)(lVal_1 + 75000) = 0x1e75ba7;
    func_0x180673140(&LAB_180430320);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x124f0;
}

// func_0x1803b1520
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803b1520(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0xc3477997bde72fdf;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806c8710,0);
  }
  return;
}

// func_0x1803b15d0
int64_t func_0x1803b15d0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1250c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x1250c) = 1;
    *(uint64_t *)(lVal_1 + 0x12500) = 0x73b9d13734aa328d;
    *(uint16_t *)(lVal_1 + 0x12508) = 0x1e3;
    func_0x180673140(&LAB_180430350);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12500;
}

// func_0x1803b1660
void func_0x1803b1660(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 9) == '\x01') {
    *param_1 = *param_1 ^ 0x7c1a51951c753e3;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xe3;
    *(uint8_t *)((int64_t)param_1 + 9) = 0;
  }
  return;
}

// func_0x1803b1840
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803b1840(uint64_t param_1)
{
  float fVal_1;
  func_ptr_t fnPtr_2;
  float fVal_3;
  float fVal_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  float fVal_8;
  uint8_t auArr_9 [16];
  float fVal_11;
  uint8_t auArr_10 [16];
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  float in_xmmTmp2_Dd;
  uint8_t auStack_e8 [32];
  uint32_t local_c8;
  uint32_t local_c0;
  uint8_t local_b8;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint64_t local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  uStack_70 = local_78;
  local_78 = (uint8_t  [8])&DAT_28d0f803f34a0611;
  fVal_11 = *(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x50);
  fVal_1 = *(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x54);
  fVal_8 = (float)func_0x1800cd3b0(param_1,DAT_1806c3c18,3);
  auArr_9 = blendvps(ZEXT416((uint)(DAT_1808402c8 - (DAT_1806b6550 + fVal_8))),
                    ZEXT416((uint)(DAT_1806ae650 + DAT_1808402c8)),
                    ZEXT416(-(uint)(fVal_8 + DAT_1806ae650 + DAT_1808402c8 + DAT_1806b5c70 < fVal_11))
                   );
  auArr_12 = insertps(ZEXT416((uint)((fVal_11 + DAT_1806be594) - fVal_8)),
                     ZEXT416((uint)(fVal_1 + _DAT_1806c8720)),0x10);
  auArr_13._0_4_ = auArr_12._0_4_ + _DAT_1806c8730;
  auArr_13._4_4_ = auArr_12._4_4_ + _UNK_1806c8734;
  auArr_13._8_4_ = auArr_12._8_4_ + _UNK_1806c8738;
  auArr_13._12_4_ = auArr_12._12_4_ + _UNK_1806c873c;
  auArr_12 = insertps(auArr_9,ZEXT416((uint)(DAT_1808402cc + DAT_1806b6794)),0x1c);
  auArr_10 = maxps(ZEXT816(0),auArr_12);
  auArr_9._4_4_ = -(uint)(auArr_13._4_4_ < auArr_12._4_4_);
  auArr_9._0_4_ = -(uint)(auArr_13._0_4_ < auArr_12._0_4_);
  auArr_9._8_4_ = -(uint)(auArr_13._8_4_ < auArr_12._12_4_);
  auArr_9._12_4_ = -(uint)(auArr_13._12_4_ < in_xmmTmp2_Dd);
  auArr_9 = blendvps(auArr_10,auArr_13,auArr_9);
  fVal_11 = auArr_9._4_4_;
  auArr_12._4_4_ = fVal_11;
  auArr_12._0_4_ = fVal_11;
  auArr_12._8_4_ = auArr_9._12_4_;
  auArr_12._12_4_ = auArr_9._12_4_;
  auArr_10._4_12_ = auArr_12._4_12_;
  auArr_10._0_4_ = fVal_11 + DAT_1806c8750;
  auArr_12 = insertps(auArr_9,ZEXT416((uint)(DAT_1806b55e0 + auArr_9._0_4_ + fVal_8)),0x20);
  auArr_12 = insertps(auArr_12,auArr_10,0x30);
  local_98 = auArr_12._0_4_ + _DAT_1806c8760;
  fStack_94 = auArr_12._4_4_ + _UNK_1806c8764;
  fStack_90 = auArr_12._8_4_ + _UNK_1806c8768;
  fStack_8c = auArr_12._12_4_ + _UNK_1806c876c;
  local_80 = CONCAT44((float)((uint64_t)DAT_1806c8740 >> 0x20) + fVal_11,
                      (float)DAT_1806c8740 + auArr_9._0_4_);
  local_78._4_4_ = _UNK_1806c8774;
  local_78._0_4_ = _DAT_1806c8770;
  uStack_70._0_4_ = _UNK_1806c8778;
  uStack_70._4_4_ = _UNK_1806c877c;
  func_0x1800d2a00(&local_98,local_78);
  fVal_3 = _UNK_1806c879c;
  fVal_8 = _UNK_1806c8798;
  fVal_1 = _UNK_1806c8794;
  fVal_11 = _DAT_1806c8790;
  local_a8 = _DAT_1806c8780;
  uStack_a4 = _UNK_1806c8784;
  uStack_a0 = _UNK_1806c8788;
  uStack_9c = _UNK_1806c878c;
  local_78._4_4_ = fStack_94 + _UNK_1806c8794;
  local_78._0_4_ = local_98 + _DAT_1806c8790;
  uStack_70._0_4_ = fStack_90 + _UNK_1806c8798;
  uStack_70._4_4_ = fStack_94 + _UNK_1806c879c;
  func_0x1800d2a00(local_78,&local_a8);
  fVal_7 = _UNK_1806c87ac;
  fVal_6 = _UNK_1806c87a8;
  fVal_5 = _UNK_1806c87a4;
  fVal_4 = _DAT_1806c87a0;
  local_78._4_4_ = fStack_94 + _UNK_1806c87a4;
  local_78._0_4_ = local_98 + _DAT_1806c87a0;
  uStack_70._0_4_ = local_98 + _UNK_1806c87a8;
  uStack_70._4_4_ = fStack_94 + _UNK_1806c87ac;
  func_0x1800d2a00(local_78,&local_a8);
  local_78._4_4_ = fStack_94 + fVal_5;
  local_78._0_4_ = fStack_90 + fVal_4;
  uStack_70._0_4_ = fStack_90 + fVal_6;
  uStack_70._4_4_ = fStack_8c + fVal_7;
  func_0x1800d2a00(local_78,&local_a8);
  local_78._4_4_ = fStack_8c + fVal_1;
  local_78._0_4_ = local_98 + fVal_11;
  uStack_70._0_4_ = fStack_90 + fVal_8;
  uStack_70._4_4_ = fStack_8c + fVal_3;
  func_0x1800d2a00(local_78,&local_a8);
  local_b8 = 0;
  local_c0 = 3;
  local_c8 = 0x3f800000;
  func_0x1800d00e0(&local_80,param_1,&DAT_1808402a0);
  if (DAT_18083cf40 == (local_60 ^ (uint64_t)auStack_e8)) {
    return;
  }
  func_0x180673080(local_60 ^ (uint64_t)auStack_e8);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1803b1b40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803b1b40(int64_t *param_1,int64_t *param_2,float *param_3)
{
  uint *pU64_1;
  bool bFlag_2;
  bool bFlag_3;
  func_ptr_t fnPtr_4;
  uint32_t uVal_5;
  uint8_t uVal_6;
  uint8_t *pU64_7;
  undefined3 uVal_8;
  uint8_t uVal_9;
  char ch_10;
  char ch_11;
  uint uVal_12;
  size_t sz_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint8_t *pU64_18;
  byte bFlag_19;
  ushort uVal_20;
  int64_t *pLong_21;
  uint8_t (*_Str)[16];
  char *fnPtr_22;
  int64_t lVal_23;
  uint8_t *pU64_24;
  int64_t lVal_25;
  uint64_t *pU64_26;
  uint64_t *pU64_27;
  uint64_t *pU64_28;
  uint64_t *pU64_29;
  uint32_t *pU64_30;
  float fVal_31;
  float fVal_32;
  float fVal_33;
  float fVal_34;
  float fVal_35;
  float fVal_36;
  float fVal_37;
  float fVal_38;
  float fVal_39;
  uint8_t auArr_40 [16];
  float fVal_41;
  float fVal_42;
  float fVal_43;
  float fVal_44;
  float fVal_45;
  uint32_t uVal_46;
  uint64_t *pU64_47;
  uint64_t uVal_48;
  uint8_t *pU64_49;
  float fVal_50;
  uint32_t uVal_51;
  int64_t local_1e8 [3];
  uint64_t local_1d0;
  uint8_t local_1c8 [16];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint64_t local_1a0;
  uint32_t local_198;
  uint64_t local_190;
  uint8_t local_188 [8];
  uint32_t uStack_180;
  uint32_t uStack_17c;
  uint64_t local_178;
  uint64_t uStack_170;
  uint8_t local_168 [8];
  uint64_t uStack_160;
  uint64_t local_158;
  uint64_t local_150;
  int64_t *local_140;
  uint32_t local_138;
  uint32_t uStack_134;
  uint uStack_130;
  uint8_t uStack_12c;
  uint16_t uStack_12b;
  uint32_t uStack_129;
  uint8_t uStack_125;
  uint32_t uStack_124;
  uint uStack_120;
  uint32_t uStack_11c;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint32_t local_f4;
  uint64_t local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  (**(func_ptr_t *)(*param_1 + 0x10))(param_1,local_1e8);
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840550) && (func_0x180672ec0(&DAT_180840550), DAT_180840550 == -1)) {
    DAT_180840548 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840550);
  }
  fVal_31 = (float)*param_2;
  fVal_32 = fVal_31 + *param_3;
  fVal_34 = (float)((uint64_t)*param_2 >> 0x20);
  fVal_36 = param_3[1] + fVal_34;
  fVal_35 = fVal_32 - fVal_31;
  fVal_37 = DAT_1806aeae4 * fVal_35;
  fVal_41 = fVal_31 + *param_3;
  auArr_40 = blendps(_DAT_1806b5c90,ZEXT416((uint)fVal_37),1);
  fVal_39 = auArr_40._0_4_ + fVal_31;
  local_190 = CONCAT44(auArr_40._4_4_ + fVal_34,fVal_39);
  fVal_50 = *(float *)(DAT_180840548 + 0x174);
  bFlag_19 = 0xf;
  fVal_33 = fVal_36;
  if ((DAT_180840554 + DAT_180840558) - fVal_50 <= fVal_36) {
    fVal_33 = DAT_180840554 + DAT_180840558 + *(float *)(DAT_180840548 + 0x1ec);
    bFlag_19 = 0x8c;
  }
  fVal_43 = (float)DAT_1806c87c0 + fVal_41;
  fVal_44 = (float)((uint64_t)DAT_1806c87c0 >> 0x20) + fVal_34;
  fVal_41 = fVal_41 + _DAT_1806c87d0;
  fVal_42 = fVal_34 + _UNK_1806c87d4;
  fStack_1b0 = _UNK_1806c87dc + 0.0;
  fVal_37 = fVal_37 + fVal_31;
  if (fVal_34 < DAT_1808402bc) {
    fVal_34 = DAT_1808402bc - *(float *)(DAT_180840548 + 0x1ec);
    bFlag_19 = 0x43;
  }
  fVal_38 = DAT_1806c87b0 + fVal_37;
  fVal_45 = DAT_1806b66b0 + fVal_36;
  fVal_37 = fVal_37 + _DAT_1806c87b4;
  fVal_36 = fVal_36 + DAT_1806c3800;
  local_1c8._4_4_ = fVal_44;
  local_1c8._0_4_ = fVal_44;
  local_1c8._8_8_ = 0;
  uVal_20 = (ushort)bFlag_19;
  local_1b8 = fVal_42;
  fStack_1b4 = fVal_42;
  fStack_1ac = fStack_1b0;
  if ((((fVal_31 < DAT_1808402c8) && (fVal_34 < DAT_1808402cc)) && (DAT_1808402c8 < fVal_32)) &&
     (DAT_1808402cc < fVal_33)) {
    uVal_46 = *(uint32_t *)(DAT_180840548 + 0x170);
    uVal_51 = *(uint32_t *)(DAT_180840548 + 0x1ec);
    pU64_49 = &DAT_18083ca60;
    pU64_47 = (uint64_t *)&DAT_18083ca70;
    func_0x1800d36e0();
    uVal_6 = 0;
    uStack_134 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_138 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_12b = 0;
    uStack_129 = 0;
    uVal_12 = uStack_129;
    uVal_16 = param_1[6];
    if ((uint64_t)param_1[7] < 0x10) {
      param_2 = param_1 + 4;
    }
    else {
      param_2 = (int64_t *)param_1[4];
    }
    uStack_125 = uVal_6;
    uStack_124 = uStack_134;
    if (-1 < (int64_t)uVal_16) {
      uStack_125 = (uint8_t)(uVal_16 >> 0x18);
      uVal_9 = uStack_125;
      uStack_129._1_3_ = (undefined3)uVal_16;
      uVal_8 = uStack_129._1_3_;
      uStack_124 = (uint32_t)(uVal_16 >> 0x20);
      uVal_5 = uStack_124;
      if (uVal_16 < 0x10) {
        uStack_120 = 0xf;
        uStack_11c = 0;
        local_138 = *(uint32_t *)param_2;
        uStack_134 = *(uint32_t *)((int64_t)param_2 + 4);
        uStack_130 = *(uint *)(param_2 + 1);
        uVal_5 = *(uint32_t *)((int64_t)param_2 + 0xc);
        uStack_12c = (uint8_t)uVal_5;
        uStack_12b = (uint16_t)((uint)uVal_5 >> 8);
        uStack_129._0_1_ = (uint8_t)((uint)uVal_5 >> 0x18);
        ch_11 = *(char *)(DAT_180840548 + 0x82);
      }
      else {
        uVal_14 = uVal_16 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_14) {
          uVal_17 = uVal_14;
        }
        uStack_129 = uVal_12;
        if (uVal_14 < 0xfff) {
          uStack_125 = uVal_6;
          uStack_124 = uStack_134;
          uVal_14 = func_0x180672de0(uVal_17 + 1);
        }
        else {
          uStack_125 = uVal_6;
          uStack_124 = uStack_134;
          lVal_15 = func_0x180672de0(uVal_17 + 0x28);
          uVal_14 = lVal_15 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_14 - 8) = lVal_15;
        }
        local_138 = (uint32_t)uVal_14;
        uStack_134 = (uint32_t)(uVal_14 >> 0x20);
        uStack_129 = CONCAT31(uVal_8,(uint8_t)uStack_129);
        uStack_120 = (uint)uVal_17;
        uStack_11c = (uint32_t)(uVal_17 >> 0x20);
        uStack_125 = uVal_9;
        uStack_124 = uVal_5;
        func_0x1806aa960(uVal_14,param_2,uVal_16 + 1);
        ch_11 = *(char *)(DAT_180840548 + 0x82);
      }
      if (ch_11 == '\x01') {
        uStack_129._1_3_ = (undefined3)(uStack_129 >> 8);
        uVal_16 = CONCAT44(uStack_124,CONCAT13(uStack_125,uStack_129._1_3_));
        if (uVal_16 != 0) {
          if (CONCAT44(uStack_11c,uStack_120) < 0x10) {
            pU64_30 = &local_138;
          }
          else {
            pU64_30 = (uint32_t *)CONCAT44(uStack_134,local_138);
          }
          if (DAT_18083ca30 < uVal_16) {
            func_0x18007bba0(&DAT_18083ca18,uVal_16);
          }
          else {
            param_2 = DAT_18083ca18;
            if (DAT_18083ca30 < 0x10) {
              param_2 = (int64_t *)&DAT_18083ca18;
            }
            DAT_18083ca28 = uVal_16;
            func_0x1806aa960(param_2,pU64_30,uVal_16,pU64_30,uVal_46,pU64_47,pU64_49,fVal_50,uVal_20,uVal_51
                         );
            *(uint8_t *)((int64_t)param_2 + uVal_16) = 0;
          }
        }
      }
      if (((DAT_18083ef17 == '\x01') &&
          (((DAT_1808402c8 <= fVal_38 || (DAT_1808402cc <= fVal_45)) ||
           ((fVal_37 <= DAT_1808402c8 || (fVal_36 <= DAT_1808402cc)))))) &&
         ((((DAT_1808402c8 <= fVal_43 || (DAT_1808402cc <= (float)local_1c8._0_4_)) ||
           (fVal_41 <= DAT_1808402c8)) || (local_1b8 <= DAT_1808402cc)))) {
        DAT_18084060f = DAT_1808405fc;
        DAT_1808405fc = 2;
        DAT_18083ef17 = '\0';
        DAT_180840560 = param_1;
      }
      uVal_16 = CONCAT44(uStack_11c,uStack_120);
      if (0xf < uVal_16) {
        lVal_23 = CONCAT44(uStack_134,local_138);
        uVal_17 = uVal_16 + 1;
        lVal_15 = lVal_23;
        if (0xfff < uVal_17) {
          lVal_15 = *(int64_t *)(lVal_23 + -8);
          if (0x1f < (uint64_t)((lVal_23 + -8) - lVal_15)) goto LAB_1803b40f4;
          uVal_17 = uVal_16 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_17);
      }
      goto LAB_1803b1de3;
    }
LAB_1803b4108:
    func_0x18007ba70();
LAB_1803b410e:
    func_0x18007ba70();
LAB_1803b4114:
    func_0x18007ba70();
LAB_1803b411a:
    func_0x18007ba70();
LAB_1803b4120:
    func_0x18007ba70();
    fnPtr_4 = (func_ptr_t )swi(3);
    (*fnPtr_4)();
    return;
  }
  uVal_46 = *(uint32_t *)(DAT_180840548 + 0x170);
  uVal_51 = *(uint32_t *)(DAT_180840548 + 0x1ec);
  pU64_49 = &DAT_18083ca60;
  pU64_47 = &DAT_18083ca80;
  func_0x1800d36e0();
LAB_1803b1de3:
  fVal_33 = *(float *)(DAT_180840548 + 0x1ec);
  pU64_29 = pU64_47;
  if ((DAT_1808402bc < fVal_36 - fVal_33) && (fVal_45 + fVal_33 < DAT_1808402c4 + DAT_1808402bc)) {
    fVal_31 = (DAT_180840554 + DAT_180840558) - *(float *)(DAT_180840548 + 0x174);
    bFlag_2 = NAN(fVal_36);
    bFlag_3 = fVal_31 <= fVal_36;
    if (bFlag_3) {
      fVal_36 = DAT_180840554 + DAT_180840558 + fVal_33;
    }
    uVal_12 = 0x4c;
    if ((bFlag_2 || NAN(fVal_31)) || !bFlag_3) {
      uVal_12 = 0xf;
    }
    auArr_40 = blendvps(ZEXT416((uint)(DAT_1808402bc - fVal_33)),ZEXT416((uint)fVal_45),
                       ZEXT416(-(uint)(DAT_1808402bc < fVal_45)));
    local_f4 = (uint)(byte)((char)uVal_12 + 0x14);
    if (DAT_1808402bc < fVal_45) {
      local_f4 = uVal_12;
    }
    local_140 = param_1;
    if ((((DAT_1808402c8 <= fVal_38) || (DAT_1808402cc <= auArr_40._0_4_)) ||
        (fVal_37 <= DAT_1808402c8)) || (fVal_36 <= DAT_1808402cc)) {
      _local_168 = ZEXT816(0);
      local_158 = 0;
      local_150 = 0xf;
      local_138 = 0x8fb3dcdf;
      uStack_134 = 0x28d478d8;
      DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
      if (DAT_180840a60 == 0) {
        DAT_180840a68 = 0;
joined_r0x0001803b2228:
        if (local_158 != 0) goto LAB_1803b222e;
      }
      else {
        local_138 = 0x59d743a9;
        uStack_134 = 0x186e75fd;
        if (*(int64_t *)(*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70) ==
            0) goto joined_r0x0001803b2228;
LAB_1803b222e:
        pU64_28 = (uint64_t *)local_140[0xd];
        pU64_27 = (uint64_t *)local_140[0xe];
        if (pU64_28 != pU64_27) {
          pU64_29 = (uint64_t *)&DAT_18083cac0;
          do {
            if (local_158 == 0) {
LAB_1803b22f6:
              lVal_15 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70);
              if (*(int64_t *)(lVal_15 + 0x430) == 0) {
                local_138 = 0x334994f2;
                uStack_134 = 0x185dd108;
                lVal_23 = 0x400;
                uVal_16 = pU64_28[2];
                uVal_17 = pU64_28[3];
              }
              else {
                local_138 = 0xa6ec3ae1;
                uStack_134 = 0x18615f6c;
                lVal_23 = 0x420;
                uVal_16 = pU64_28[2];
                uVal_17 = pU64_28[3];
              }
              pU64_26 = pU64_28;
              if (0xf < uVal_17) {
                pU64_26 = (uint64_t *)*pU64_28;
              }
              uVal_17 = *(uint64_t *)(lVal_23 + 0x10 + lVal_15);
              if (*(uint64_t *)(lVal_23 + 0x18 + lVal_15) < 0x10) {
                lVal_23 = lVal_23 + lVal_15;
              }
              else {
                lVal_23 = *(int64_t *)(lVal_23 + lVal_15);
              }
              if ((uVal_16 <= uVal_17) &&
                 ((param_1 = local_140, uVal_16 == 0 ||
                  (lVal_25 = uVal_17 + lVal_23, lVal_15 = thunk_FUN_180676d20(lVal_23,lVal_25,pU64_26),
                  param_1 = local_140, lVal_15 != lVal_25 && lVal_15 - lVal_23 != -1))))
              goto LAB_1803b2653;
            }
            else {
              if ((uint64_t)pU64_28[3] < 0x10) {
                pU64_26 = pU64_28;
                if (0xf < local_150) goto LAB_1803b22af;
LAB_1803b228f:
                uVal_16 = pU64_28[2];
                pU64_7 = local_168;
              }
              else {
                pU64_26 = (uint64_t *)*pU64_28;
                if (local_150 < 0x10) goto LAB_1803b228f;
LAB_1803b22af:
                uVal_16 = pU64_28[2];
                pU64_7 = (uint8_t *)local_168;
              }
              if (uVal_16 <= local_158) {
                param_1 = local_140;
                if ((uVal_16 == 0) ||
                   (pU64_24 = pU64_7 + local_158,
                   pU64_18 = (uint8_t *)
                             thunk_FUN_180676d20(pU64_7,pU64_24,pU64_26,uVal_16,uVal_46,pU64_47,
                                                 pU64_49,fVal_50,uVal_20,uVal_51), param_1 = local_140,
                   pU64_18 != pU64_24 && (int64_t)pU64_18 - (int64_t)pU64_7 != -1))
                goto LAB_1803b2653;
                if (local_158 == 0) goto LAB_1803b22f6;
              }
            }
            pU64_28 = pU64_28 + 4;
          } while (pU64_28 != pU64_27);
        }
      }
      param_1 = local_140;
      (**(func_ptr_t *)(*local_140 + 0x10))(local_140,&local_138);
      ch_11 = func_0x180052940(&local_138);
      ch_10 = '\x01';
      if (ch_11 == '\0') {
        (**(func_ptr_t *)(*param_1 + 0x18))(param_1,local_188);
        ch_10 = func_0x180052a50(local_188);
        if (0xf < uStack_170) {
          uVal_16 = uStack_170 + 1;
          lVal_15 = (int64_t)local_188;
          if (0xfff < uVal_16) {
            lVal_15 = *(int64_t *)((int64_t)local_188 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_188 + -8) - lVal_15)) goto LAB_1803b40f4;
            uVal_16 = uStack_170 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_15,uVal_16);
        }
      }
      uVal_16 = CONCAT44(uStack_11c,uStack_120);
      if (0xf < uVal_16) {
        lVal_23 = CONCAT44(uStack_134,local_138);
        uVal_17 = uVal_16 + 1;
        lVal_15 = lVal_23;
        if (0xfff < uVal_17) {
          lVal_15 = *(int64_t *)(lVal_23 + -8);
          if (0x1f < (uint64_t)((lVal_23 + -8) - lVal_15)) goto LAB_1803b40f4;
          uVal_17 = uVal_16 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_17);
      }
      if (ch_10 == '\0') {
        pU64_29 = (uint64_t *)&DAT_18083cae0;
        if (*(char *)(param_1 + 8) != '\0') {
          pU64_29 = (uint64_t *)&DAT_18083cad0;
        }
      }
      else {
        pU64_29 = (uint64_t *)&DAT_18083cac0;
      }
LAB_1803b2653:
      uVal_46 = *(uint32_t *)(DAT_180840548 + 0x170);
      pU64_49 = (uint8_t *)CONCAT71((int7)((uint64_t)pU64_49 >> 8),(char)local_f4);
      func_0x1800d2e40();
      fVal_50 = fVal_33;
      if (0xf < local_150) {
        uVal_16 = local_150 + 1;
        lVal_15 = (int64_t)local_168;
        if (0xfff < uVal_16) {
          lVal_15 = *(int64_t *)((int64_t)local_168 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_15)) goto LAB_1803b40f4;
          uVal_16 = local_150 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_16);
        fVal_50 = fVal_33;
      }
    }
    else {
      _local_168 = ZEXT816(0);
      local_158 = 0;
      local_150 = 0xf;
      local_138 = 0x8fb3dcdf;
      uStack_134 = 0x28d478d8;
      DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
      if (DAT_180840a60 == 0) {
        DAT_180840a68 = 0;
joined_r0x0001803b30a9:
        if (local_158 != 0) goto LAB_1803b30af;
      }
      else {
        local_138 = 0x59d743a9;
        uStack_134 = 0x186e75fd;
        if (*(int64_t *)(*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70) ==
            0) goto joined_r0x0001803b30a9;
LAB_1803b30af:
        pU64_28 = (uint64_t *)local_140[0xd];
        pU64_27 = (uint64_t *)local_140[0xe];
        if (pU64_28 != pU64_27) {
          pU64_29 = (uint64_t *)&DAT_18083ca90;
          do {
            if (local_158 == 0) {
LAB_1803b317f:
              lVal_15 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70);
              if (*(int64_t *)(lVal_15 + 0x430) == 0) {
                local_138 = 0x334994f2;
                uStack_134 = 0x185dd108;
                lVal_23 = 0x400;
                uVal_16 = pU64_28[2];
                uVal_17 = pU64_28[3];
              }
              else {
                local_138 = 0xa6ec3ae1;
                uStack_134 = 0x18615f6c;
                lVal_23 = 0x420;
                uVal_16 = pU64_28[2];
                uVal_17 = pU64_28[3];
              }
              pU64_26 = pU64_28;
              if (0xf < uVal_17) {
                pU64_26 = (uint64_t *)*pU64_28;
              }
              uVal_17 = *(uint64_t *)(lVal_23 + 0x10 + lVal_15);
              if (*(uint64_t *)(lVal_23 + 0x18 + lVal_15) < 0x10) {
                pLong_21 = (int64_t *)(lVal_23 + lVal_15);
              }
              else {
                pLong_21 = *(int64_t **)(lVal_23 + lVal_15);
              }
              if ((uVal_16 <= uVal_17) &&
                 ((param_1 = local_140, uVal_16 == 0 ||
                  (lVal_23 = uVal_17 + (int64_t)pLong_21,
                  lVal_15 = thunk_FUN_180676d20(pLong_21,lVal_23,pU64_26), param_2 = pLong_21,
                  param_1 = local_140, lVal_15 != lVal_23 && lVal_15 - (int64_t)pLong_21 != -1))))
              goto LAB_1803b38d3;
            }
            else {
              if ((uint64_t)pU64_28[3] < 0x10) {
                pU64_26 = pU64_28;
                if (0xf < local_150) goto LAB_1803b3137;
LAB_1803b311c:
                param_2 = (int64_t *)local_168;
                uVal_16 = pU64_28[2];
              }
              else {
                pU64_26 = (uint64_t *)*pU64_28;
                if (local_150 < 0x10) goto LAB_1803b311c;
LAB_1803b3137:
                uVal_16 = pU64_28[2];
                param_2 = (int64_t *)local_168;
              }
              if (uVal_16 <= local_158) {
                param_1 = local_140;
                if ((uVal_16 == 0) ||
                   (lVal_23 = local_158 + (int64_t)param_2,
                   lVal_15 = thunk_FUN_180676d20(param_2,lVal_23,pU64_26,uVal_16,uVal_46,pU64_47,pU64_49
                                                ,fVal_50,uVal_20,uVal_51), param_1 = local_140,
                   lVal_15 != lVal_23 && lVal_15 - (int64_t)param_2 != -1)) goto LAB_1803b38d3;
                if (local_158 == 0) goto LAB_1803b317f;
              }
            }
            pU64_28 = pU64_28 + 4;
          } while (pU64_28 != pU64_27);
        }
      }
      param_1 = local_140;
      (**(func_ptr_t *)(*local_140 + 0x10))(local_140,&local_138);
      ch_11 = func_0x180052940(&local_138);
      param_2 = (int64_t *)CONCAT71((int7)((uint64_t)param_2 >> 8),1);
      if (ch_11 == '\0') {
        (**(func_ptr_t *)(*param_1 + 0x18))(param_1,local_188);
        uVal_12 = func_0x180052a50(local_188);
        param_2 = (int64_t *)(uint64_t)uVal_12;
        if (0xf < uStack_170) {
          uVal_16 = uStack_170 + 1;
          lVal_15 = (int64_t)local_188;
          if (0xfff < uVal_16) {
            lVal_15 = *(int64_t *)((int64_t)local_188 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_188 + -8) - lVal_15)) goto LAB_1803b40f4;
            uVal_16 = uStack_170 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_15,uVal_16);
        }
      }
      uVal_16 = CONCAT44(uStack_11c,uStack_120);
      if (0xf < uVal_16) {
        lVal_23 = CONCAT44(uStack_134,local_138);
        uVal_17 = uVal_16 + 1;
        lVal_15 = lVal_23;
        if (0xfff < uVal_17) {
          lVal_15 = *(int64_t *)(lVal_23 + -8);
          if (0x1f < (uint64_t)((lVal_23 + -8) - lVal_15)) goto LAB_1803b40f4;
          uVal_17 = uVal_16 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_17);
      }
      if ((char)param_2 == '\0') {
        pU64_29 = (uint64_t *)&DAT_18083cab0;
        if (*(char *)(param_1 + 8) != '\0') {
          pU64_29 = (uint64_t *)&DAT_18083caa0;
        }
      }
      else {
        pU64_29 = (uint64_t *)&DAT_18083ca90;
      }
LAB_1803b38d3:
      uVal_46 = *(uint32_t *)(DAT_180840548 + 0x170);
      pU64_49 = (uint8_t *)CONCAT71((int7)((uint64_t)pU64_49 >> 8),(char)local_f4);
      func_0x1800d2e40();
      if (0xf < local_150) {
        uVal_16 = local_150 + 1;
        lVal_15 = (int64_t)local_168;
        if (0xfff < uVal_16) {
          lVal_15 = *(int64_t *)((int64_t)local_168 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_15)) goto LAB_1803b40f4;
          uVal_16 = local_150 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_16);
      }
      fVal_50 = fVal_33;
      if (DAT_18083ef17 == '\x01') {
        local_f4 = CONCAT31(local_f4._1_3_,*(uint8_t *)(param_1 + 8));
        uVal_16 = CONCAT71((int7)((uint64_t)param_2 >> 8),*(uint8_t *)(param_1 + 8)) ^ 1;
        *(char *)(param_1 + 8) = (char)uVal_16;
        func_0x1801dbc50(param_1);
        _local_168 = ZEXT816(0);
        local_158 = 0;
        local_150 = 0xf;
        local_138 = 0x8fb3dcdf;
        uStack_134 = 0x28d478d8;
        DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
        if (DAT_180840a60 == 0) {
          DAT_180840a68 = 0;
LAB_1803b3b11:
          if (local_158 != 0) goto LAB_1803b3b1c;
        }
        else {
          lVal_15 = func_0x18014cd50(&DAT_180840a48);
          if (lVal_15 == 0) goto LAB_1803b3b11;
LAB_1803b3b1c:
          pU64_28 = (uint64_t *)local_140[0xe];
          for (pU64_47 = (uint64_t *)local_140[0xd]; pU64_47 != pU64_28; pU64_47 = pU64_47 + 4) {
            if (local_158 == 0) {
LAB_1803b3bd6:
              lVal_15 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(DAT_180840a58[0x39] + 0x20) + 0xf0) + 0x70);
              if (*(int64_t *)(lVal_15 + 0x430) == 0) {
                local_138 = 0x334994f2;
                uStack_134 = 0x185dd108;
                lVal_23 = 0x400;
              }
              else {
                local_138 = 0xa6ec3ae1;
                uStack_134 = 0x18615f6c;
                lVal_23 = 0x420;
              }
              pU64_27 = pU64_47;
              if (0xf < (uint64_t)pU64_47[3]) {
                pU64_27 = (uint64_t *)*pU64_47;
              }
              uVal_17 = *(uint64_t *)(lVal_23 + 0x10 + lVal_15);
              if (*(uint64_t *)(lVal_23 + 0x18 + lVal_15) < 0x10) {
                lVal_23 = lVal_23 + lVal_15;
              }
              else {
                lVal_23 = *(int64_t *)(lVal_23 + lVal_15);
              }
              if (((uint64_t)pU64_47[2] <= uVal_17) &&
                 ((pU64_47[2] == 0 ||
                  (lVal_25 = uVal_17 + lVal_23, lVal_15 = thunk_FUN_180676d20(lVal_23,lVal_25,pU64_27),
                  lVal_15 != lVal_25 && lVal_15 - lVal_23 != -1)))) goto LAB_1803b3e79;
            }
            else {
              if ((uint64_t)pU64_47[3] < 0x10) {
                pU64_27 = pU64_47;
                if (0xf < local_150) goto LAB_1803b3b8e;
LAB_1803b3b73:
                uVal_17 = pU64_47[2];
                pU64_7 = local_168;
              }
              else {
                pU64_27 = (uint64_t *)*pU64_47;
                if (local_150 < 0x10) goto LAB_1803b3b73;
LAB_1803b3b8e:
                uVal_17 = pU64_47[2];
                pU64_7 = (uint8_t *)local_168;
              }
              if (uVal_17 <= local_158) {
                if ((uVal_17 == 0) ||
                   (pU64_24 = pU64_7 + local_158,
                   pU64_18 = (uint8_t *)thunk_FUN_180676d20(pU64_7,pU64_24,pU64_27),
                   pU64_18 != pU64_24 && (int64_t)pU64_18 - (int64_t)pU64_7 != -1))
                goto LAB_1803b3e79;
                if (local_158 == 0) goto LAB_1803b3bd6;
              }
            }
          }
        }
        pLong_21 = local_140;
        (**(func_ptr_t *)(*local_140 + 0x10))(local_140,&local_138);
        ch_11 = func_0x180052940(&local_138);
        if (ch_11 == '\0') {
          (**(func_ptr_t *)(*pLong_21 + 0x18))(pLong_21,local_188);
          ch_11 = func_0x180052a50(local_188);
          func_0x180001e70(local_188);
          func_0x180001e70(&local_138);
          if (ch_11 != '\0') goto LAB_1803b3e79;
          func_0x180001e70(local_168);
          param_1 = local_140;
          func_0x1801dc7a0(local_140,uVal_16 & 0xffffffff);
          if ((char)local_f4 != '\0') goto LAB_1803b3f04;
          (**(func_ptr_t *)(*param_1 + 0x58))(param_1);
        }
        else {
          func_0x180001e70(&local_138);
LAB_1803b3e79:
          if (0xf < local_150) {
            uVal_16 = local_150 + 1;
            lVal_15 = (int64_t)local_168;
            if (0xfff < uVal_16) {
              lVal_15 = *(int64_t *)((int64_t)local_168 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_15)) goto LAB_1803b40f4;
              uVal_16 = local_150 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_15,uVal_16);
          }
          param_1 = local_140;
          if ((char)local_f4 == '\0') {
            *(uint8_t *)(local_140 + 8) = 0;
            func_0x1801dc420(local_140);
          }
          else {
            func_0x1801dc7a0(local_140,0);
LAB_1803b3f04:
            (**(func_ptr_t *)(*param_1 + 0x60))(param_1);
          }
        }
        DAT_18083ef17 = '\0';
        fVal_50 = fVal_33;
        if (*(char *)(DAT_180840548 + 0x1b8) == '\x01') {
          DAT_180840568 = 0;
        }
      }
    }
  }
  if ((DAT_1808402bc < (float)local_1c8._0_4_) && (local_1b8 < DAT_1808402c4 + DAT_1808402bc)) {
    _local_188 = ZEXT816(0);
    local_178 = 0;
    uStack_170 = 0xf;
    if ((DAT_1808402c8 <= fVal_43) ||
       (((DAT_1808402cc <= (float)local_1c8._0_4_ || (fVal_41 <= DAT_1808402c8)) ||
        (local_1b8 <= DAT_1808402cc)))) {
      if (*(char *)((int64_t)param_1 + 0x19) == '\x01') {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12570) == '\0') {
          lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_15 + 0x12570) = 1;
          uVal_5 = _UNK_1806c87fc;
          uVal_46 = _UNK_1806c87f8;
          uVal_51 = _UNK_1806c87f4;
          *(uint32_t *)(lVal_15 + 0x12560) = _DAT_1806c87f0;
          *(uint32_t *)(lVal_15 + 0x12564) = uVal_51;
          *(uint32_t *)(lVal_15 + 0x12568) = uVal_46;
          *(uint32_t *)(lVal_15 + 0x1256c) = uVal_5;
          func_0x180673140(&LAB_180430440);
        }
        lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint8_t (*)[16])(lVal_15 + 0x12560);
        if (*(char *)(lVal_15 + 0x1256f) == '\x01') {
          uVal_51 = *(uint32_t *)(lVal_15 + 0x12568);
          auArr_40 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)
                                                  ((uint)uVal_51 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_51 >> 0x10),uVal_51)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_15 + 0x1256d) >> 8)),
                                                  (char)((uint)uVal_51 >> 8)),
                                            CONCAT11((char)*(uint16_t *)(lVal_15 + 0x1256d),
                                                     (char)uVal_51))),_DAT_1806ae110);
          auArr_40._8_8_ =
               auArr_40._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_15 + 0x1256c) << 0x20;
          auArr_40 = pblendw(auArr_40,*_Str,0xf);
          *_Str = auArr_40 ^ _DAT_1806c8800;
        }
        local_138 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_12b = 0;
        uStack_129 = uStack_129 & 0xffffff00;
        sz_13 = strlen((char *)_Str);
        if (-1 < (int64_t)sz_13) {
          if (sz_13 < 0x10) goto LAB_1803b2986;
          uVal_17 = sz_13 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_17) {
            uVal_16 = uVal_17;
          }
          if (uVal_17 < 0xfff) {
            pU64_30 = (uint32_t *)func_0x180672de0(uVal_16 + 1);
            goto LAB_1803b2b0b;
          }
          lVal_15 = func_0x180672de0(uVal_16 + 0x28);
LAB_1803b29c1:
          pU64_30 = (uint32_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_30 + -2) = lVal_15;
LAB_1803b2b0e:
          local_138 = SUB84(pU64_30,0);
          uStack_134 = (uint32_t)((uint64_t)pU64_30 >> 0x20);
LAB_1803b2b15:
          uStack_129._1_3_ = (undefined3)sz_13;
          uStack_125 = (uint8_t)(sz_13 >> 0x18);
          uStack_124 = (uint32_t)(sz_13 >> 0x20);
          uStack_120 = (uint)uVal_16;
          uStack_11c = (uint32_t)(uVal_16 >> 0x20);
          func_0x1806aa960(pU64_30,_Str,sz_13);
          *(uint8_t *)((int64_t)pU64_30 + sz_13) = 0;
          if (0xf < uStack_170) {
            uVal_16 = uStack_170 + 1;
            lVal_15 = (int64_t)local_188;
            if (0xfff < uVal_16) {
              lVal_15 = *(int64_t *)((int64_t)local_188 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_188 + -8) - lVal_15)) goto LAB_1803b40f4;
              uVal_16 = uStack_170 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_15,uVal_16);
          }
          uStack_17c._1_2_ = uStack_12b;
          uStack_17c._0_1_ = uStack_12c;
          uStack_17c._3_1_ = (uint8_t)uStack_129;
          local_178 = CONCAT44(uStack_124,CONCAT13(uStack_125,uStack_129._1_3_));
          uStack_170 = CONCAT44(uStack_11c,uStack_120);
          local_188._4_4_ = uStack_134;
          local_188._0_4_ = local_138;
          uStack_180 = uStack_130;
          goto LAB_1803b2b8b;
        }
LAB_1803b40fc:
        func_0x18007ba70();
      }
      else {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12584) == '\0') {
          lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_15 + 0x12584) = 1;
          *(uint64_t *)(lVal_15 + 0x12578) = 0xf1dcde6884138a5c;
          *(uint32_t *)(lVal_15 + 0x12580) = 0x1619950;
          func_0x180673140(&LAB_180430470);
        }
        lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (uint8_t (*)[16])(lVal_15 + 0x12578);
        if (*(char *)(lVal_15 + 0x12583) == '\x01') {
          *(uint64_t *)*_Str = *(uint64_t *)*_Str ^ 0x85aff107ed61eb31;
          *(uint *)(lVal_15 + 0x12580) =
               (*(uint *)(lVal_15 + 0x12580) & 0xffff | (uint)*(byte *)(lVal_15 + 0x12582) << 0x10) ^
               SUB164(_DAT_1806c87e0,0);
        }
        local_138 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_12b = 0;
        uStack_129 = uStack_129 & 0xffffff00;
        sz_13 = strlen((char *)_Str);
        if (-1 < (int64_t)sz_13) {
          if (0xf < sz_13) {
            uVal_17 = sz_13 | 0xf;
            uVal_16 = 0x16;
            if (0x16 < uVal_17) {
              uVal_16 = uVal_17;
            }
            if (0xffe < uVal_17) {
              lVal_15 = func_0x180672de0(uVal_16 + 0x28);
              goto LAB_1803b29c1;
            }
            pU64_30 = (uint32_t *)func_0x180672de0(uVal_16 + 1);
LAB_1803b2b0b:
            goto LAB_1803b2b0e;
          }
LAB_1803b2986:
          pU64_30 = &local_138;
          uVal_16 = 0xf;
          goto LAB_1803b2b15;
        }
      }
      func_0x18007ba70();
      goto LAB_1803b4108;
    }
    if (*(char *)((int64_t)param_1 + 0x19) != '\x01') {
      local_138 = _DAT_1806cb7f7;
      uStack_134 = _UNK_1806cb7fb;
      uStack_130 = _UNK_1806cb7ff;
      uStack_12c = (uint8_t)_UNK_1806cb803;
      uStack_12b = 0xda7f;
      uStack_129 = 0xc112728;
      uStack_125 = 0x9d;
      uStack_124 = CONCAT31(uStack_124._1_3_,0xb5);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12554) == '\0') {
        lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_15 + 0x12554) = 1;
        func_0x18007cd50(lVal_15 + 0x1253d,&local_138,local_1b8,local_1c8._0_4_,uVal_46,pU64_29,pU64_49,
                      fVal_50);
        func_0x180673140(&LAB_180430410);
      }
      fnPtr_22 = (char *)(*(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                        0x1253d);
      func_0x1804412f0(fnPtr_22);
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_12b = 0;
      uStack_129 = uStack_129 & 0xffffff00;
      sz_13 = strlen(fnPtr_22);
      if (-1 < (int64_t)sz_13) {
        if (0xf < sz_13) {
          uVal_17 = sz_13 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_17) {
            uVal_16 = uVal_17;
          }
          if (0xffe < uVal_17) {
            lVal_15 = func_0x180672de0(uVal_16 + 0x28);
            goto LAB_1803b3085;
          }
          pU64_30 = (uint32_t *)func_0x180672de0(uVal_16 + 1);
LAB_1803b3537:
          goto LAB_1803b353a;
        }
LAB_1803b2ae4:
        pU64_30 = &local_138;
        uVal_16 = 0xf;
        goto LAB_1803b3541;
      }
      goto LAB_1803b4114;
    }
    local_138 = _DAT_1806cb7e4;
    uStack_134 = _UNK_1806cb7e8;
    uStack_130 = _UNK_1806cb7ec;
    uStack_12c = (uint8_t)_UNK_1806cb7f0;
    uStack_12b = (uint16_t)((uint)_UNK_1806cb7f0 >> 8);
    uStack_129 = 0xab4b3a41;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1253c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x1253c) = 1;
      func_0x18007cb80(lVal_15 + 0x12525,&local_138);
      func_0x180673140(&LAB_1804303e0);
    }
    fnPtr_22 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12525)
    ;
    func_0x1804412b0(fnPtr_22);
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_12b = 0;
    uStack_129 = uStack_129 & 0xffffff00;
    sz_13 = strlen(fnPtr_22);
    if ((int64_t)sz_13 < 0) goto LAB_1803b410e;
    if (sz_13 < 0x10) goto LAB_1803b2ae4;
    uVal_17 = sz_13 | 0xf;
    uVal_16 = 0x16;
    if (0x16 < uVal_17) {
      uVal_16 = uVal_17;
    }
    if (uVal_17 < 0xfff) {
      pU64_30 = (uint32_t *)func_0x180672de0(uVal_16 + 1);
      goto LAB_1803b3537;
    }
    lVal_15 = func_0x180672de0(uVal_16 + 0x28);
LAB_1803b3085:
    pU64_30 = (uint32_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
    *(int64_t *)(pU64_30 + -2) = lVal_15;
LAB_1803b353a:
    local_138 = SUB84(pU64_30,0);
    uStack_134 = (uint32_t)((uint64_t)pU64_30 >> 0x20);
LAB_1803b3541:
    uStack_129._1_3_ = (undefined3)sz_13;
    uStack_125 = (uint8_t)(sz_13 >> 0x18);
    uStack_124 = (uint32_t)(sz_13 >> 0x20);
    uStack_120 = (uint)uVal_16;
    uStack_11c = (uint32_t)(uVal_16 >> 0x20);
    func_0x1806aa960(pU64_30,fnPtr_22,sz_13);
    *(uint8_t *)((int64_t)pU64_30 + sz_13) = 0;
    if (0xf < uStack_170) {
      uVal_16 = uStack_170 + 1;
      lVal_15 = (int64_t)local_188;
      if (0xfff < uVal_16) {
        lVal_15 = *(int64_t *)((int64_t)local_188 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_188 + -8) - lVal_15)) goto LAB_1803b40f4;
        uVal_16 = uStack_170 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_16);
    }
    uStack_17c._1_2_ = uStack_12b;
    uStack_17c._0_1_ = uStack_12c;
    uStack_17c._3_1_ = (uint8_t)uStack_129;
    local_178 = CONCAT44(uStack_124,CONCAT13(uStack_125,uStack_129._1_3_));
    uStack_170 = CONCAT44(uStack_11c,uStack_120);
    local_188._4_4_ = uStack_134;
    local_188._0_4_ = local_138;
    uStack_180 = uStack_130;
    if (DAT_18083ef17 == '\x01') {
      *(byte *)((int64_t)param_1 + 0x19) = *(byte *)((int64_t)param_1 + 0x19) ^ 1;
      DAT_180840568 = 0;
      DAT_18083ef17 = '\0';
    }
LAB_1803b2b8b:
    uVal_16 = local_178;
    if (uStack_170 < 0x10) {
      fnPtr_22 = local_188;
    }
    else {
      fnPtr_22 = (char *)local_188;
    }
    local_138 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_12b = 0;
    uStack_129 = SUB164(ZEXT816(0),7);
    uStack_125 = 0;
    uStack_124 = 0;
    uVal_51 = 0;
    local_118 = 0;
    if ((int64_t)local_178 < 0) {
      uStack_120 = uStack_130;
      uStack_11c = uVal_51;
      func_0x18007ba70();
      goto LAB_1803b40fc;
    }
    uStack_120 = (uint)local_178;
    uVal_12 = uStack_120;
    uStack_11c = (uint32_t)(local_178 >> 0x20);
    uVal_46 = uStack_11c;
    if (local_178 < 0x10) {
      local_118 = 0xf;
      func_0x1806aa960(&uStack_130,fnPtr_22);
      *(uint8_t *)((int64_t)&uStack_130 + uVal_16) = 0;
      if (uVal_16 != 0) goto LAB_1803b2c78;
      local_108 = 0xaf63bd4c8601b7df;
      local_110 = 0;
    }
    else {
      uVal_14 = local_178 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_14) {
        uVal_17 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        uStack_120 = uStack_130;
        uStack_11c = uVal_51;
        uVal_14 = func_0x180672de0(uVal_17 + 1);
      }
      else {
        uStack_120 = uStack_130;
        uStack_11c = uVal_51;
        lVal_15 = func_0x180672de0(uVal_17 + 0x28);
        uVal_14 = lVal_15 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_14 - 8) = lVal_15;
      }
      uStack_130 = (uint)uVal_14;
      uStack_12c = (uint8_t)(uVal_14 >> 0x20);
      uStack_12b = (uint16_t)(uVal_14 >> 0x28);
      uStack_129._0_1_ = (uint8_t)(uVal_14 >> 0x38);
      uStack_120 = uVal_12;
      uStack_11c = uVal_46;
      local_118 = uVal_17;
      func_0x1806aa960(uVal_14,fnPtr_22);
      *(uint8_t *)(uVal_14 + uVal_16) = 0;
LAB_1803b2c78:
      uVal_17 = (uint64_t)(uVal_12 & 7);
      if (uVal_16 - 1 < 7) {
        local_110 = 0xcbf29ce484222325;
LAB_1803b2d2e:
        uVal_16 = 0;
        do {
          local_110 = local_110 * 0x100000001b3 ^ (int64_t)fnPtr_22[uVal_16];
          uVal_16 = uVal_16 + 1;
        } while (uVal_17 != uVal_16);
      }
      else {
        uVal_16 = uVal_16 & 0x7ffffffffffffff8;
        local_110 = 0xcbf29ce484222325;
        do {
          local_110 = (((((((local_110 * 0x100000001b3 ^ (int64_t)*fnPtr_22) * 0x100000001b3 ^
                           (int64_t)fnPtr_22[1]) * 0x100000001b3 ^ (int64_t)fnPtr_22[2]) *
                          0x100000001b3 ^ (int64_t)fnPtr_22[3]) * 0x100000001b3 ^
                        (int64_t)fnPtr_22[4]) * 0x100000001b3 ^ (int64_t)fnPtr_22[5]) *
                       0x100000001b3 ^ (int64_t)fnPtr_22[6]) * 0x100000001b3 ^ (int64_t)fnPtr_22[7];
          fnPtr_22 = fnPtr_22 + 8;
          uVal_16 = uVal_16 - 8;
        } while (uVal_16 != 0);
        if (uVal_17 != 0) goto LAB_1803b2d2e;
      }
      local_108 = ((uint64_t)(byte)local_138 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_110;
    }
    local_168._4_4_ = fVal_42 - fVal_44;
    local_168._0_4_ = fVal_41 - fVal_43;
    uStack_160._0_4_ = 0x3f800000;
    local_1a0 = CONCAT44(fVal_44,fVal_43);
    local_198 = 0;
    func_0x1800d4bf0(&DAT_1808402f8,&local_138,&local_1a0,local_168);
    if (0xf < local_118) {
      lVal_23 = CONCAT17((uint8_t)uStack_129,CONCAT25(uStack_12b,CONCAT14(uStack_12c,uStack_130)));
      uVal_16 = local_118 + 1;
      lVal_15 = lVal_23;
      if (0xfff < uVal_16) {
        lVal_15 = *(int64_t *)(lVal_23 + -8);
        if (0x1f < (uint64_t)((lVal_23 + -8) - lVal_15)) goto LAB_1803b40f4;
        uVal_16 = local_118 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_16);
    }
    if (0xf < uStack_170) {
      uVal_16 = uStack_170 + 1;
      lVal_15 = (int64_t)local_188;
      if (0xfff < uVal_16) {
        lVal_15 = *(int64_t *)((int64_t)local_188 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_188 + -8) - lVal_15)) goto LAB_1803b40f4;
        uVal_16 = uStack_170 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_16);
    }
  }
  uVal_51 = (uint32_t)((uint64_t)pU64_29 >> 0x20);
  fVal_50 = local_190._4_4_;
  if ((DAT_1808402bc <= local_190._4_4_) &&
     (fVal_31 = (float)func_0x1800cfa00(), fVal_33 = DAT_1806b26b4,
     fVal_50 + fVal_31 <= DAT_180840554 + DAT_180840558)) {
    fVal_50 = *(float *)(DAT_180840548 + 0x174);
    fVal_31 = (float)func_0x1800cd3b0(local_1e8);
    fVal_31 = ((fVal_35 - (fVal_50 + fVal_50)) + DAT_1806b5ef4) / fVal_31;
    if (fVal_31 <= fVal_33) {
      fVal_33 = fVal_31;
    }
    local_138 = _DAT_1806b2880;
    uStack_134 = _UNK_1806b2884;
    uStack_130 = _UNK_1806b2888;
    uStack_12c = (uint8_t)_UNK_1806b288c;
    uStack_12b = (uint16_t)((uint)_UNK_1806b288c >> 8);
    uStack_129._0_1_ = (uint8_t)((uint)_UNK_1806b288c >> 0x18);
    uVal_16 = (uint64_t)pU64_49 & 0xffffffffffffff00;
    uVal_48 = CONCAT44(uVal_51,3);
    pU64_30 = &local_138;
    func_0x1800d02c0(&local_190,local_1e8,pU64_30,fVal_33,0x3f800000,uVal_48,uVal_16,1,uVal_20 & 0xff00);
    uVal_51 = (uint32_t)((uint64_t)uVal_48 >> 0x20);
    if ((*(char *)(param_1 + 0xc) == '\x01') && (*(char *)(DAT_180840548 + 0x2b2) == '\x01')) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12590) == '\0') {
        lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_15 + 0x12590) = 1;
        *(uint8_t *)(lVal_15 + 0x1258c) = 1;
        *(uint32_t *)(lVal_15 + 0x12588) = 0x47d000ad;
        func_0x180673140(&LAB_1804304a0);
      }
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_15 + 0x12588);
      if (*(char *)(lVal_15 + 0x1258c) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x478745e3;
        *(uint8_t *)(lVal_15 + 0x1258c) = 0;
      }
      uStack_125 = 0;
      uStack_134 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      local_138 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_12b = 0;
      uStack_129 = 0;
      uStack_124 = uStack_134;
      sz_13 = strlen((char *)pU64_1);
      if ((int64_t)sz_13 < 0) goto LAB_1803b411a;
      uVal_17 = 0xf;
      if (0xf < sz_13) {
        uVal_14 = sz_13 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_14) {
          uVal_17 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pU64_30 = (uint32_t *)func_0x180672de0(uVal_17 + 1);
        }
        else {
          lVal_15 = func_0x180672de0(uVal_17 + 0x28);
          pU64_30 = (uint32_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_30 + -2) = lVal_15;
        }
        local_138 = SUB84(pU64_30,0);
        uStack_134 = (uint32_t)((uint64_t)pU64_30 >> 0x20);
      }
      uStack_129._1_3_ = (undefined3)sz_13;
      uStack_125 = (uint8_t)(sz_13 >> 0x18);
      uStack_124 = (uint32_t)(sz_13 >> 0x20);
      uStack_120 = (uint)uVal_17;
      uStack_11c = (uint32_t)(uVal_17 >> 0x20);
      func_0x1806aa960(pU64_30,pU64_1,sz_13);
      *(uint8_t *)((int64_t)pU64_30 + sz_13) = 0;
      pU64_30 = &local_138;
      fVal_33 = (float)func_0x1800cd3b0(pU64_30);
      fVal_50 = local_190._4_4_;
      fVal_31 = (float)func_0x1800cfa00();
      local_168._4_4_ = (fVal_50 + DAT_1806ae7b0) - fVal_31;
      local_168._0_4_ = fVal_39 + fVal_33 * DAT_1806b2860;
      uVal_17 = CONCAT44(uStack_11c,uStack_120);
      if (0xf < uVal_17) {
        lVal_23 = CONCAT44(uStack_134,local_138);
        uVal_14 = uVal_17 + 1;
        lVal_15 = lVal_23;
        if (0xfff < uVal_14) {
          lVal_15 = *(int64_t *)(lVal_23 + -8);
          if (0x1f < (uint64_t)((lVal_23 + -8) - lVal_15)) goto LAB_1803b40f4;
          uVal_14 = uVal_17 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_14);
      }
      local_188._4_4_ = _UNK_1806b5b34;
      local_188._0_4_ = _DAT_1806b5b30;
      uStack_180 = _UNK_1806b5b38;
      uStack_17c = _UNK_1806b5b3c;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x1259c) == '\0') {
        lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_15 + 0x1259c) = 1;
        *(uint8_t *)(lVal_15 + 0x12598) = 1;
        *(uint32_t *)(lVal_15 + 0x12594) = 0x91468a1f;
        func_0x180673140(&LAB_1804304c0);
      }
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_15 + 0x12594);
      if (*(char *)(lVal_15 + 0x12598) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x9111cf51;
        *(uint8_t *)(lVal_15 + 0x12598) = 0;
      }
      uStack_125 = 0;
      uStack_134 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      local_138 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      uStack_12b = 0;
      uStack_129 = 0;
      uStack_124 = uStack_134;
      sz_13 = strlen((char *)pU64_1);
      if ((int64_t)sz_13 < 0) goto LAB_1803b4120;
      uVal_17 = 0xf;
      if (0xf < sz_13) {
        uVal_14 = sz_13 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_14) {
          uVal_17 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pU64_30 = (uint32_t *)func_0x180672de0(uVal_17 + 1);
        }
        else {
          lVal_15 = func_0x180672de0(uVal_17 + 0x28);
          pU64_30 = (uint32_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_30 + -2) = lVal_15;
        }
        local_138 = SUB84(pU64_30,0);
        uStack_134 = (uint32_t)((uint64_t)pU64_30 >> 0x20);
      }
      uStack_129._1_3_ = (undefined3)sz_13;
      uStack_125 = (uint8_t)(sz_13 >> 0x18);
      uStack_124 = (uint32_t)(sz_13 >> 0x20);
      uStack_120 = (uint)uVal_17;
      uStack_11c = (uint32_t)(uVal_17 >> 0x20);
      func_0x1806aa960(pU64_30,pU64_1,sz_13);
      *(uint8_t *)((int64_t)pU64_30 + sz_13) = 0;
      func_0x1800d00e0(local_168,&local_138,local_188,DAT_1806b28c0,0x3f800000,CONCAT44(uVal_51,3),
                    uVal_16 & 0xffffffffffffff00);
      uVal_16 = CONCAT44(uStack_11c,uStack_120);
      if (0xf < uVal_16) {
        lVal_23 = CONCAT44(uStack_134,local_138);
        uVal_17 = uVal_16 + 1;
        lVal_15 = lVal_23;
        if (0xfff < uVal_17) {
          lVal_15 = *(int64_t *)(lVal_23 + -8);
          if (0x1f < (uint64_t)((lVal_23 + -8) - lVal_15)) goto LAB_1803b40f4;
          uVal_17 = uVal_16 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_17);
      }
    }
  }
  if (0xf < local_1d0) {
    uVal_16 = local_1d0 + 1;
    lVal_15 = local_1e8[0];
    if (0xfff < uVal_16) {
      lVal_15 = *(int64_t *)(local_1e8[0] + -8);
      if (0x1f < (uint64_t)((local_1e8[0] + -8) - lVal_15)) {
LAB_1803b40f4:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_16 = local_1d0 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_15,uVal_16);
  }
  return;
}

// Unwind@1803b4130
void Unwind_1803b4130(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1803b4210
void Unwind_1803b4210(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1803b42f0
void Unwind_1803b42f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1803b43d0
void Unwind_1803b43d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1803b44b0
void Unwind_1803b44b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1803b4590
void Unwind_1803b4590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1803b4670
void Unwind_1803b4670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1803b4750
void Unwind_1803b4750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1803b4830
void Unwind_1803b4830(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1803b4910
void Unwind_1803b4910(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x100);
  return;
}

// Unwind@1803b49f0
void Unwind_1803b49f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1803b4ad0
void Unwind_1803b4ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1803b4bb0
void Unwind_1803b4bb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@1803b4c90
void Unwind_1803b4c90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1803b4d70
void Unwind_1803b4d70(void)
{
  func_0x180672f60(&DAT_180840550);
  return;
}

// Unwind@1803b4e50
void Unwind_1803b4e50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1803b4f30
void Unwind_1803b4f30(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1253c) = 0;
  return;
}

// Unwind@1803b5020
void Unwind_1803b5020(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12554) = 0;
  return;
}

// func_0x1803b5110
void func_0x1803b5110(char param_1)
{
  if (param_1 != '\0') {
    DAT_18084060f = DAT_1808405fc;
    DAT_1808405fc = param_1;
    return;
  }
  DAT_180840568 = 0;
  DAT_18084060f = DAT_1808405fc;
  DAT_1808405fc = param_1;
  return;
}

// func_0x1803b5150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803b5150(void)
{
  uint8_t (*_Str)[16];
  func_ptr_t fnPtr_1;
  uint8_t auArr_2 [16];
  int64_t *pLong_3;
  char ch_4;
  size_t sz_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t *pU64_8;
  uint64_t *pU64_9;
  uint8_t *pU64_10;
  uint64_t uVal_11;
  int64_t local_b8 [3];
  uint64_t local_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  int64_t local_78;
  uint64_t *puStack_70;
  uint64_t *local_68;
  uint64_t local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  pLong_3 = DAT_180840560;
  local_38 = 0xfffffffffffffffe;
  local_78 = 0;
  puStack_70 = (uint64_t *)0x0;
  local_68 = (uint64_t *)0x0;
  pU64_8 = (uint64_t *)DAT_180840560[9];
  pU64_9 = (uint64_t *)DAT_180840560[10];
  local_58 = (int64_t)pU64_9 - (int64_t)pU64_8 >> 3;
  if (pU64_9 != pU64_8) {
    if (local_58 >> 0x3d != 0) {
LAB_1803b54a3:
      func_0x18007c0d0();
      fnPtr_1 = (func_ptr_t )swi(3);
      (*fnPtr_1)();
      return;
    }
    func_0x18007fe80(&local_78,&local_58);
    pU64_8 = (uint64_t *)pLong_3[9];
    pU64_9 = (uint64_t *)pLong_3[10];
  }
joined_r0x0001803b51c9:
  if (pU64_8 != pU64_9) {
    do {
      local_58 = *pU64_8;
      ch_4 = func_0x1801dd480();
      if (ch_4 != '\0') {
        if (puStack_70 != local_68) goto code_r0x0001803b51fd;
        func_0x18007f260(&local_78,puStack_70,&local_58);
      }
      pU64_8 = pU64_8 + 1;
      if (pU64_8 == pU64_9) break;
    } while( true );
  }
  pLong_3 = DAT_180840560;
  local_58 = CONCAT44(_UNK_1806cb810,_DAT_1806cb80c);
  uStack_50 = _UNK_1806cb814;
  uStack_4c = _UNK_1806cb818;
  local_48 = CONCAT71(local_48._1_7_,0xcd);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x125b0) == '\0') {
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_7 + 0x125b0) = 1;
    func_0x18007d2b0(lVal_7 + 0x1259d,&local_58);
    func_0x180673140(&LAB_1804304e0);
  }
  lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_7 + 0x1259d);
  if (*(char *)(lVal_7 + 0x125ae) == '\x01') {
    auArr_2._4_4_ = *(uint *)(lVal_7 + 0x125a1) ^ _UNK_1806bb0d4;
    auArr_2._0_4_ = *(uint *)*_Str ^ _DAT_1806bb0d0;
    auArr_2._8_4_ = *(uint *)(lVal_7 + 0x125a5) ^ _UNK_1806bb0d8;
    auArr_2._12_4_ = *(uint *)(lVal_7 + 0x125a9) ^ _UNK_1806bb0dc;
    *_Str = auArr_2;
    *(byte *)(lVal_7 + 0x125ad) = *(byte *)(lVal_7 + 0x125ad) ^ 0xcd;
    *(uint8_t *)(lVal_7 + 0x125ae) = 0;
  }
  local_88 = ZEXT816(0);
  local_98 = ZEXT816(0);
  sz_5 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_5) {
    if (sz_5 < 0x10) {
      pU64_10 = local_98;
      uVal_11 = 0xf;
    }
    else {
      uVal_6 = sz_5 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_6) {
        uVal_11 = uVal_6;
      }
      if (uVal_6 < 0xfff) {
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_7;
      }
      local_98._0_8_ = pU64_10;
    }
    local_88._8_8_ = uVal_11;
    local_88._0_8_ = sz_5;
    func_0x1806aa960(pU64_10,_Str,sz_5);
    pU64_10[sz_5] = 0;
    (**(func_ptr_t *)(*DAT_180840560 + 0x10))(DAT_180840560,local_b8);
    func_0x180094870(&local_58);
    func_0x1803b55b0(&local_78,&local_58,pLong_3);
    if (0xf < local_40) {
      uVal_11 = local_40 + 1;
      uVal_6 = local_58;
      if (0xfff < uVal_11) {
        uVal_6 = *(uint64_t *)(local_58 - 8);
        if (0x1f < (local_58 - 8) - uVal_6) goto LAB_1803b549b;
        uVal_11 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(uVal_6,uVal_11);
    }
    local_48 = 0;
    local_40 = 0xf;
    local_58 = local_58 & 0xffffffffffffff00;
    if (0xf < local_a0) {
      uVal_11 = local_a0 + 1;
      lVal_7 = local_b8[0];
      if (0xfff < uVal_11) {
        lVal_7 = *(int64_t *)(local_b8[0] + -8);
        if (0x1f < (uint64_t)((local_b8[0] + -8) - lVal_7)) goto LAB_1803b549b;
        uVal_11 = local_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_11);
    }
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_11 = local_88._8_8_ + 1;
      lVal_7 = local_98._0_8_;
      if (0xfff < uVal_11) {
        lVal_7 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_7)) goto LAB_1803b549b;
        uVal_11 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_11);
    }
    if (local_78 != 0) {
      uVal_11 = (int64_t)local_68 - local_78;
      lVal_7 = local_78;
      if (0xfff < uVal_11) {
        lVal_7 = *(int64_t *)(local_78 + -8);
        if (0x1f < (uint64_t)((local_78 + -8) - lVal_7)) {
LAB_1803b549b:
          do {
            invalidInstructionException();
          } while( true );
        }
        uVal_11 = uVal_11 + 0x27;
      }
      thunk_FUN_180695dd0(lVal_7,uVal_11);
    }
    return;
  }
  func_0x18007ba70();
  goto LAB_1803b54a3;
code_r0x0001803b51fd:
  *puStack_70 = local_58;
  puStack_70 = puStack_70 + 1;
  pU64_8 = pU64_8 + 1;
  goto joined_r0x0001803b51c9;
}

// Unwind@1803b54b0
void Unwind_1803b54b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x125b0) = 0;
  return;
}

// Unwind@1803b54f0
void Unwind_1803b54f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1803b5520
void Unwind_1803b5520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1803b5550
void Unwind_1803b5550(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803b5580
void Unwind_1803b5580(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x60);
  return;
}

// func_0x1803b55b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803b55b0(int64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVal_1;
  int iVal_2;
  int64_t **ptr2_Long_3;
  func_ptr_t fnPtr_4;
  bool bFlag_5;
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint uVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  char *_Str;
  char ch_12;
  char ch_13;
  byte bFlag_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint64_t uVal_17;
  uint64_t uVal_18;
  uint64_t uVal_19;
  size_t sz_20;
  uint64_t *pU64_21;
  uint64_t uVal_22;
  uint8_t (*pArr16_23)[16];
  uint64_t uVal_24;
  uint64_t uVal_25;
  uint64_t *pU64_26;
  uint8_t (*pArr16_27)[16];
  int64_t **ptr2_Long_28;
  int64_t lVal_29;
  int64_t lVal_30;
  uint8_t *pU64_31;
  int64_t *pLong_32;
  int iVal_33;
  bool bFlag_34;
  float fVal_35;
  float fVal_36;
  float fVal_37;
  float fVal_38;
  uint32_t uVal_39;
  uint8_t auArr_40 [16];
  uint8_t auArr_41 [16];
  uint8_t auArr_42 [16];
  uint8_t auArr_43 [16];
  float fVal_44;
  float fVal_45;
  float fVal_46;
  float fVal_48;
  uint8_t auArr_47 [16];
  float fVal_49;
  float fVal_50;
  uint32_t uVal_51;
  uint32_t uVal_52;
  uint32_t uVal_53;
  float fVal_54;
  float fVal_55;
  uint64_t in_stack_fffffffffffffcc8;
  int64_t *pLong_56;
  uint64_t *pU64_57;
  uint64_t *pU64_58;
  uint8_t *pU64_59;
  uint7 uVal_60;
  undefined7 uVal_61;
  uint uVal_62;
  uint16_t uVal_63;
  uint8_t uVal_64;
  uint32_t uVal_65;
  uint32_t local_308;
  uint32_t uStack_304;
  uint32_t uStack_300;
  uint32_t uStack_2fc;
  int64_t local_2f8;
  int64_t local_2f0;
  uint8_t local_2e8 [16];
  uint8_t local_2d8 [16];
  uint64_t local_2c8;
  uint *local_2c0;
  byte *local_2b8;
  byte *local_2b0;
  char *local_2a8;
  uint64_t *local_2a0;
  uint *local_298;
  uint *local_290;
  uint *local_288;
  uint *local_280;
  uint *local_278;
  uint *local_270;
  uint *local_268;
  uint *local_260;
  uint *local_258;
  uint *local_250;
  uint *local_248;
  uint *local_240;
  uint *local_238;
  uint *local_230;
  uint64_t *local_228;
  uint *local_220;
  uint *local_218;
  int local_20c;
  uint64_t local_208;
  uint64_t *local_200;
  int64_t local_1f8;
  uint64_t *puStack_1f0;
  uint64_t *local_1e8;
  uint8_t local_1d8 [8];
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  int local_1c0;
  float local_1bc;
  uint8_t local_1b8 [4];
  uint8_t auStack_1b4 [12];
  uint8_t local_1a8 [16];
  uint64_t local_198;
  uint64_t local_190;
  uint64_t local_188;
  uint8_t *puStack_180;
  uint8_t local_178 [24];
  float local_160;
  float local_15c;
  uint8_t local_158 [8];
  uint64_t uStack_150;
  uint8_t local_148 [4];
  uint32_t uStack_144;
  uint64_t uStack_140;
  uint32_t local_138;
  uint32_t uStack_134;
  uint32_t uStack_130;
  uint32_t uStack_12c;
  uint8_t local_128;
  float local_120;
  float fStack_11c;
  uint8_t local_118 [4];
  float fStack_114;
  uint64_t uStack_110;
  uint8_t local_108 [24];
  uint64_t local_f0;
  
  uStack_150 = local_158;
  uVal_51 = (uint32_t)((uint64_t)in_stack_fffffffffffffcc8 >> 0x20);
  local_f0 = 0xfffffffffffffffe;
  local_2f0 = param_3;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840578) && (func_0x180672ec0(&DAT_180840578), DAT_180840578 == -1)) {
    DAT_180840570 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840578);
  }
  local_2c8 = func_0x1800cf950();
  func_0x180107830(local_2c8,2,0,0);
  auArr_47 = insertps(ZEXT416((uint)DAT_1808402b8),DAT_1808402bc,0x10);
  fVal_44 = (float)DAT_1806c8810 + auArr_47._0_4_;
  fVal_45 = (float)((uint64_t)DAT_1806c8810 >> 0x20) + auArr_47._4_4_;
  fVal_46 = auArr_47._0_4_ + _DAT_1806c8820;
  fVal_48 = auArr_47._4_4_ + _UNK_1806c8824;
  if ((((DAT_1808402c8 <= fVal_44) || (DAT_1808402cc <= fVal_45)) || (fVal_46 <= DAT_1808402c8)) ||
     (fVal_48 <= DAT_1808402cc)) {
    uVal_65 = *(uint32_t *)(DAT_180840570 + 0x2ac);
    uVal_52 = *(uint32_t *)(DAT_180840570 + 0x174);
    pU64_59 = &DAT_18083caf0;
    pU64_57 = &DAT_18083cb20;
    uVal_17 = CONCAT44(uVal_51,*(uint32_t *)(DAT_180840570 + 0x170));
    uVal_63 = 0xf;
    func_0x1800d36e0();
  }
  else {
    uVal_65 = *(uint32_t *)(DAT_180840570 + 0x2ac);
    uVal_52 = *(uint32_t *)(DAT_180840570 + 0x174);
    pU64_59 = &DAT_18083caf0;
    pU64_57 = (uint64_t *)&DAT_18083cb00;
    uVal_17 = CONCAT44(uVal_51,*(uint32_t *)(DAT_180840570 + 0x170));
    uVal_63 = 0xf;
    func_0x1800d36e0();
    ptr2_Long_3 = DAT_180840580;
    if (DAT_18083ef17 == 1) {
      DAT_180840568 = 0;
      DAT_18084060f = DAT_1808405fc;
      DAT_1808405fc = 0;
      DAT_180840560 = 0;
      if (DAT_180840580 != (int64_t **)0x0) {
        if (*(char *)(DAT_180840580 + 0x1b) == '\x06') {
          *(uint8_t *)(DAT_180840580 + 0x13) = 0;
        }
        else {
          func_0x1801b3250();
          *(uint8_t *)(ptr2_Long_3 + 0x13) = 0;
          *(uint8_t *)(ptr2_Long_3 + 0x1b) = 6;
        }
      }
      DAT_180840580 = (int64_t **)0x0;
      DAT_18083ef17 = 0;
      DAT_18083cb10 = -1.0;
      return;
    }
  }
  fVal_44 = fVal_44 + (fVal_46 - fVal_44) * (float)DAT_1806b28a0;
  fVal_45 = fVal_45 + (fVal_48 - fVal_45) * DAT_1806b28a0._4_4_;
  fVal_49 = (float)DAT_1806c8830 + fVal_44;
  local_158._4_4_ = (float)((uint64_t)DAT_1806c8830 >> 0x20) + fVal_45;
  local_158._0_4_ = fVal_49;
  fStack_114 = DAT_1806c3930 + fVal_45;
  local_188 = CONCAT44((float)((uint64_t)DAT_1806c8840 >> 0x20) + fVal_45,
                       (float)DAT_1806c8840 + fVal_44);
  local_118 = (uint8_t  [4])fVal_49;
  func_0x1800cfe40(&local_188,local_118,local_158,&DAT_1808402a0,uVal_17,pU64_57,pU64_59,uVal_52,uVal_63,
                uVal_65);
  fVal_48 = DAT_1806b26b4;
  uVal_51 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
  uVal_65 = (uint32_t)((uint64_t)pU64_57 >> 0x20);
  uStack_110 = 0;
  local_158._4_4_ = fVal_45 + _UNK_1806c8854;
  local_158._0_4_ = fVal_49 + _DAT_1806c8850;
  uStack_150._0_4_ = fVal_44 + _UNK_1806c8858;
  uStack_150._4_4_ = fVal_45 + _UNK_1806c885c;
  func_0x1800d2a00(local_158,&DAT_1808402a0,DAT_1806b26b4);
  uStack_110 = 0;
  local_158._4_4_ = _UNK_1806b2884;
  local_158._0_4_ = _DAT_1806b2880;
  uStack_150._0_4_ = (float)_UNK_1806b2888;
  uStack_150._4_4_ = (float)_UNK_1806b288c;
  fVal_44 = (float)func_0x1800cfa00();
  fStack_114 = fVal_44 * DAT_1806b2860 + fVal_45;
  local_118 = (uint8_t  [4])(fVal_46 + DAT_1806b6550);
  uStack_110 = 0;
  uVal_16 = CONCAT44(uVal_51,0x3f800000);
  func_0x1800d00e0(local_118,param_2,local_158,fVal_48,uVal_16,CONCAT44(uVal_65,3),
                (uint64_t)pU64_59 & 0xffffffffffffff00);
  fVal_44 = DAT_1808402bc + DAT_1806ae7b4;
  fVal_45 = DAT_180840588 + DAT_18084058c + DAT_1806c3800;
  fVal_46 = DAT_180840554 + DAT_180840558 + DAT_1806c3800;
  uVal_62 = *(uint *)(DAT_180840570 + 0x174);
  pU64_59 = &DAT_18083cb30;
  pU64_58 = (uint64_t *)&DAT_18083cb40;
  uVal_16 = uVal_16 & 0xffffffff00000000;
  uVal_63 = 0;
  func_0x1800d36e0();
  DAT_1808402b0 = DAT_1808402bc + _DAT_1806c39d0;
  DAT_1808402b4 = DAT_1808402b8;
  local_1f8 = 0;
  puStack_1f0 = (uint64_t *)0x0;
  local_1e8 = (uint64_t *)0x0;
  pU64_57 = (uint64_t *)*param_1;
  pU64_26 = (uint64_t *)param_1[1];
  uVal_15 = (int64_t)pU64_26 - (int64_t)pU64_57 >> 3;
  local_158 = (uint8_t  [8])uVal_15;
  if (pU64_26 != pU64_57) {
    if (uVal_15 >> 0x3d != 0) {
LAB_1803bb442:
      func_0x18007c0d0();
LAB_1803bb448:
      func_0x18007ba70();
LAB_1803bb44e:
      func_0x18011cb80();
LAB_1803bb454:
      func_0x18011cb80();
LAB_1803bb45a:
      func_0x18011cb80();
LAB_1803bb460:
      func_0x18007ba70();
LAB_1803bb466:
      func_0x18007ba70();
LAB_1803bb46c:
      func_0x18007ba70();
LAB_1803bb472:
      func_0x18007ba70();
LAB_1803bb478:
      func_0x18007ba70();
LAB_1803bb47e:
      func_0x18007ba70();
LAB_1803bb484:
      func_0x18007ba70();
LAB_1803bb48a:
      func_0x18007ba70();
LAB_1803bb490:
      func_0x18007ba70();
LAB_1803bb496:
      func_0x18007ba70();
LAB_1803bb49c:
      func_0x18007ba70();
LAB_1803bb4a2:
      func_0x18007ba70();
LAB_1803bb4a8:
      func_0x18007ba70();
LAB_1803bb4ae:
      func_0x18007ba70();
LAB_1803bb4b4:
      func_0x18007ba70();
LAB_1803bb4ba:
      func_0x18011cb80();
LAB_1803bb4c0:
      func_0x180674610();
LAB_1803bb4c6:
      func_0x18011cb80();
LAB_1803bb4cc:
      func_0x18011cb80();
LAB_1803bb4d2:
      func_0x18007ba70();
LAB_1803bb4d8:
      func_0x18007ba70();
      fnPtr_4 = (func_ptr_t )swi(3);
      (*fnPtr_4)();
      return;
    }
    func_0x18007fe80(&local_1f8,local_158);
    pU64_57 = (uint64_t *)*param_1;
    pU64_26 = (uint64_t *)param_1[1];
  }
  uVal_51 = (uint32_t)(uVal_16 >> 0x20);
  local_1c0 = (int)((fVal_46 - fVal_44) / _DAT_1806c8860 + DAT_1806ae7b0);
joined_r0x0001803b5a74:
  if (pU64_57 != pU64_26) {
    do {
      local_158 = (uint8_t  [8])*pU64_57;
      ch_12 = func_0x1801dd480();
      uVal_51 = (uint32_t)(uVal_16 >> 0x20);
      if (ch_12 != '\0') {
        if (puStack_1f0 != local_1e8) goto code_r0x0001803b5ab5;
        func_0x18007f260(&local_1f8,puStack_1f0,local_158);
      }
      uVal_51 = (uint32_t)(uVal_16 >> 0x20);
      pU64_57 = pU64_57 + 1;
      if (pU64_57 == pU64_26) break;
    } while( true );
  }
  uVal_16 = (int64_t)puStack_1f0 - local_1f8 >> 3;
  uVal_15 = (uint64_t)local_1c0;
  if (uVal_15 < uVal_16) {
    lVal_30 = (int64_t)DAT_180840590;
    if (uVal_16 < lVal_30 + uVal_15) {
      DAT_180840590 = (int)uVal_16 - local_1c0;
    }
    uVal_17 = CONCAT44(uVal_51,*(uint32_t *)(DAT_180840570 + 0x170));
    func_0x1800d36e0(uVal_15,lVal_30 + uVal_15,(fVal_45 + DAT_1806be590) - (DAT_1806c8864 + fVal_45),
                  (fVal_46 + DAT_1806c8868) - (fVal_44 + DAT_1806c3930),uVal_17,&DAT_18083cb60,
                  &DAT_18083cb50,*(uint32_t *)(DAT_180840570 + 0x174),0xf,0x3f800000);
    uVal_62 = *(uint *)(DAT_180840570 + 0x174);
    pU64_59 = &DAT_18083cb70;
    pU64_58 = &DAT_18083cb80;
    uVal_51 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
    uVal_63 = 0;
    func_0x1800d36e0();
  }
  else {
    DAT_180840590 = 0;
  }
  uVal_17 = func_0x1800cf970();
  uVal_18 = func_0x1800cf950();
  uVal_19 = func_0x1800cf960();
  func_0x18011b260(uVal_19,uVal_18,uVal_17);
  local_2f8 = func_0x1800cf960();
  local_2f8 = local_2f8 + 0x10;
  uVal_17 = CONCAT44(uVal_51,DAT_180840558 + DAT_1806c3800);
  func_0x180100390(local_2f8,DAT_180840588 + DAT_1806ae7b0,DAT_180840554,
                (DAT_18084058c + DAT_1806b26b4) - *(float *)(DAT_180840570 + 0x174),uVal_17);
  lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  local_298 = (uint *)(lVal_30 + 0x126c0);
  local_260 = (uint *)(lVal_30 + 0x126cc);
  local_290 = (uint *)(lVal_30 + 0x1264c);
  local_258 = (uint *)(lVal_30 + 0x12658);
  local_220 = (uint *)(lVal_30 + 0x12664);
  local_218 = (uint *)(lVal_30 + 0x1266d);
  local_228 = (uint64_t *)(lVal_30 + 0x126b0);
  local_2a0 = (uint64_t *)(lVal_30 + 0x126a4);
  local_288 = (uint *)(lVal_30 + 0x12634);
  local_250 = (uint *)(lVal_30 + 0x12640);
  local_2c0 = (uint *)(lVal_30 + 0x12614);
  local_278 = (uint *)(lVal_30 + 0x1261c);
  local_240 = (uint *)(lVal_30 + 0x12628);
  local_200 = (uint64_t *)(lVal_30 + 0x125f0);
  local_270 = (uint *)(lVal_30 + 0x125fc);
  local_238 = (uint *)(lVal_30 + 0x12608);
  local_2b8 = (byte *)(lVal_30 + 0x125ca);
  local_268 = (uint *)(lVal_30 + 0x125d4);
  local_230 = (uint *)(lVal_30 + 0x125e0);
  local_280 = (uint *)(lVal_30 + 0x125b4);
  local_248 = (uint *)(lVal_30 + 0x125c0);
  local_2b0 = (byte *)(lVal_30 + 0x126d6);
  local_2a8 = (char *)(lVal_30 + 0x126dd);
  auArr_47 = ZEXT816(0);
  iVal_33 = DAT_180840590;
  do {
    if (((uint64_t)((int64_t)puStack_1f0 - local_1f8 >> 3) <= (uint64_t)(int64_t)iVal_33) ||
       (DAT_180840590 + local_1c0 < iVal_33)) {
      func_0x180100440(local_2f8);
      if (DAT_180840580 != (int64_t **)0x0 && DAT_18083cb10 != DAT_1806ae7b0) {
        pLong_56 = DAT_180840580[0x25];
        iVal_33 = 0;
        func_0x180107830(local_2c8,2,0,0);
        uVal_65 = DAT_1806b67e0;
        fVal_45 = DAT_1806b6794;
        uVal_51 = DAT_1806b2870;
        fVal_44 = DAT_1806b26b4;
        lVal_1 = pLong_56[1];
        for (lVal_30 = *pLong_56; lVal_30 != lVal_1; lVal_30 = lVal_30 + 0x70) {
          ch_12 = func_0x1801d3090(lVal_30);
          uVal_52 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
          uVal_53 = (uint32_t)((uint64_t)pU64_58 >> 0x20);
          if (ch_12 != '\0') {
            pU64_26 = (uint64_t *)func_0x18008c4e0(lVal_30);
            local_108._8_8_ = 0xf;
            local_108._0_8_ = 3;
            stack0xfffffffffffffeeb = SUB1613(ZEXT816(0),3);
            local_118._0_3_ = 0x202020;
            pU64_57 = pU64_26;
            if (0xf < (uint64_t)pU64_26[3]) {
              pU64_57 = (uint64_t *)*pU64_26;
            }
            uVal_16 = pU64_26[2];
            if (uVal_16 < 0xd) {
              local_108._8_8_ = 0xf;
              local_108._0_8_ = uVal_16 + 3;
              func_0x1806aa960(local_118 + 3,pU64_57,uVal_16);
              local_118[uVal_16 + 3] = 0;
              pArr16_27 = (uint8_t (*)[16])local_118;
            }
            else {
              pArr16_27 = (uint8_t (*)[16])func_0x180082950((uint8_t (*)[16])local_118,uVal_16);
              uVal_52 = (uint32_t)(uVal_16 >> 0x20);
            }
            _local_158 = *pArr16_27;
            _local_148 = pArr16_27[1];
            *(uint64_t *)pArr16_27[1] = 0;
            *(uint64_t *)(pArr16_27[1] + 8) = 0xf;
            (*pArr16_27)[0] = 0;
            if (0xf < (uint64_t)local_108._8_8_) {
              uVal_16 = local_108._8_8_ + 1;
              lVal_29 = (int64_t)_local_118;
              if (0xfff < uVal_16) {
                lVal_29 = *(int64_t *)((int64_t)_local_118 + -8);
                if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_29)) goto LAB_1803bb3b4;
                uVal_16 = local_108._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_29,uVal_16);
            }
            local_118 = (uint8_t  [4])
                        (DAT_1808402c0 * DAT_1806b28b8 +
                        DAT_180840588 + DAT_18084058c + DAT_1806c3800);
            fVal_46 = (float)iVal_33;
            iVal_33 = iVal_33 + 1;
            fStack_114 = fVal_46 * DAT_1806c8750 + DAT_18083cb10;
            uStack_110._0_4_ = DAT_180840588 + DAT_18084058c + fVal_45;
            uStack_110._4_4_ = (float)iVal_33 * DAT_1806c8750 + DAT_18083cb10;
            auStack_1b4._0_4_ = fStack_114 + fVal_44;
            local_1b8 = local_118;
            local_188 = CONCAT44(_UNK_1806b2884,_DAT_1806b2880);
            puStack_180 = (uint8_t *)CONCAT44(_UNK_1806b288c,_UNK_1806b2888);
            ch_12 = func_0x1801d3080(lVal_30);
            uVal_17 = func_0x1801d37a0(pLong_56);
            ch_13 = func_0x1801d3080(uVal_17);
            uVal_39 = uVal_51;
            if ((ch_12 != ch_13) &&
               (((DAT_1808402c8 <= (float)local_118 || (DAT_1808402cc <= fStack_114)) ||
                (((float)uStack_110 <= DAT_1808402c8 || (uStack_110._4_4_ <= DAT_1808402cc)))))) {
              uVal_39 = 0;
            }
            local_188 = CONCAT44(uVal_39,uVal_39);
            puStack_180 = (uint8_t *)CONCAT44(0x3f800000,uVal_39);
            func_0x1800d2a00((uint8_t (*)[16])local_118,&local_188,fVal_44);
            func_0x1800cf900();
            pU64_59 = (uint8_t *)((uint64_t)pU64_59 & 0xffffffffffffff00);
            pU64_58 = (uint64_t *)CONCAT44(uVal_53,3);
            uVal_17 = CONCAT44(uVal_52,0x3f800000);
            func_0x1800d00e0(local_1b8,local_158,&DAT_1808402a0,uVal_65,uVal_17,pU64_58,pU64_59);
            bFlag_34 = true;
            if (((((float)local_118 < DAT_1808402c8) && (fStack_114 < DAT_1808402cc)) &&
                (DAT_1808402c8 < (float)uStack_110)) &&
               ((DAT_1808402cc < uStack_110._4_4_ && (DAT_18083ef17 != 0)))) {
              bFlag_14 = func_0x1801d3080(lVal_30);
              ptr2_Long_3 = DAT_180840580;
              *(uint *)DAT_180840580[9] = (uint)bFlag_14;
              if (*(char *)(ptr2_Long_3 + 0x1b) == '\x06') {
                *(uint8_t *)(ptr2_Long_3 + 0x13) = 0;
              }
              else {
                func_0x1801b3250();
                *(uint8_t *)(ptr2_Long_3 + 0x13) = 0;
                *(uint8_t *)(ptr2_Long_3 + 0x1b) = 6;
              }
              DAT_18083cb10 = -1.0;
              DAT_180840580 = (int64_t **)0x0;
              DAT_18083ef17 = 0;
              bFlag_34 = false;
            }
            if (0xf < uStack_140) {
              uVal_16 = uStack_140 + 1;
              lVal_29 = (int64_t)local_158;
              if (0xfff < uVal_16) {
                lVal_29 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_29)) goto LAB_1803bb3b4;
                uVal_16 = uStack_140 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_29,uVal_16);
            }
            if (!bFlag_34) break;
          }
        }
        uVal_17 = func_0x1800cf970();
        uVal_18 = func_0x1800cf950();
        uVal_19 = func_0x1800cf960();
        func_0x18011b260(uVal_19,uVal_18,uVal_17);
        func_0x1800cfa30();
        ptr2_Long_3 = DAT_180840580;
        if (DAT_18083ef17 == 1) {
          if (*(char *)(DAT_180840580 + 0x1b) == '\x06') {
            *(uint8_t *)(DAT_180840580 + 0x13) = 0;
          }
          else {
            func_0x1801b3250();
            *(uint8_t *)(ptr2_Long_3 + 0x13) = 0;
            *(uint8_t *)(ptr2_Long_3 + 0x1b) = 6;
          }
          DAT_18083cb10 = -1.0;
          DAT_180840580 = (int64_t **)0x0;
          DAT_18083ef17 = 0;
        }
      }
      if (local_1f8 == 0) {
        return;
      }
      uVal_16 = (int64_t)local_1e8 - local_1f8;
      lVal_30 = local_1f8;
      if (uVal_16 < 0x1000) {
LAB_1803bb319:
        thunk_FUN_180695dd0(lVal_30,uVal_16);
        return;
      }
      lVal_30 = *(int64_t *)(local_1f8 + -8);
      if ((uint64_t)((local_1f8 + -8) - lVal_30) < 0x20) {
        uVal_16 = uVal_16 + 0x27;
        goto LAB_1803bb319;
      }
      goto LAB_1803bb3b4;
    }
    ptr2_Long_3 = *(int64_t ***)(local_1f8 + (int64_t)iVal_33 * 8);
    local_20c = iVal_33;
    ch_12 = func_0x1801dd480(ptr2_Long_3);
    if (ch_12 != '\0') {
      func_0x180107830(local_2c8,2,0,0);
      fVal_48 = DAT_1808402b4;
      fVal_44 = DAT_1808402b0;
      uVal_51 = (uint32_t)((uint64_t)pU64_58 >> 0x20);
      uVal_64 = (uint8_t)((ushort)uVal_63 >> 8);
      uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
      fStack_11c = DAT_1808402b0 + DAT_1806b26b4;
      fVal_49 = DAT_1808402b4 + DAT_1806b5c70 + DAT_1806b6550;
      fVal_46 = DAT_180840588 + DAT_18084058c + DAT_1806c3800;
      fVal_45 = 0.0;
      _local_1d8 = ZEXT416((uint)fVal_46);
      local_120 = fVal_49;
      switch(*(uint32_t *)(ptr2_Long_3 + 8)) {
      case 0:
        local_15c = DAT_1808402b4;
        uVal_52 = *(uint32_t *)ptr2_Long_3[9];
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x125f8) == '\0') {
          lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_30 + 0x125f8) = 1;
          *(uint64_t *)(lVal_30 + 0x125f0) = 0x12f269909c19f00;
          func_0x180673140(&LAB_1804305b0);
          ch_12 = *(char *)((int64_t)local_200 + 7);
        }
        else {
          ch_12 = *(char *)((int64_t)local_200 + 7);
        }
        if (ch_12 == '\x01') {
          *local_200 = (CONCAT44((uint)*(ushort *)((int64_t)local_200 + 5) << 8,
                                 *(uint32_t *)local_200) |
                       (uint64_t)*(byte *)((int64_t)local_200 + 4) << 0x20) ^
                       SUB168(_DAT_1806c88d0,0);
        }
        _local_118 = auArr_47;
        local_108._0_16_ = auArr_47;
        sz_20 = strlen((char *)local_200);
        if ((int64_t)sz_20 < 0) goto LAB_1803bb42a;
        uVal_16 = 0xf;
        pU64_31 = local_118;
        if (0xf < sz_20) {
          uVal_15 = sz_20 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_15) {
            uVal_16 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            lVal_30 = func_0x180672de0(uVal_16 + 0x28);
            pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_31 + -8) = lVal_30;
          }
          _local_118 = pU64_31;
        }
        local_108._8_8_ = uVal_16;
        local_108._0_8_ = sz_20;
        func_0x1806aa960(pU64_31,local_200,sz_20);
        pU64_31[sz_20] = 0;
        local_1b8 = (uint8_t  [4])uVal_52;
        local_188 = 9;
        puStack_180 = local_1b8;
        local_198 = local_118;
        if (0xf < (uint64_t)local_108._8_8_) {
          local_198 = _local_118;
        }
        local_190 = local_108._0_8_;
        func_0x18063ff10(local_158,&local_198,&local_188);
        if (0xf < (uint64_t)local_108._8_8_) {
          uVal_16 = local_108._8_8_ + 1;
          lVal_30 = (int64_t)_local_118;
          if (0xfff < uVal_16) {
            lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
            if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
            uVal_16 = local_108._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_30,uVal_16);
        }
        fVal_45 = DAT_1808402c0;
        fVal_44 = DAT_1808402b8;
        fVal_46 = (float)func_0x1800cd3b0(local_158);
        fVal_45 = (((fVal_44 + fVal_45 / DAT_1806ae650 + DAT_1806b5c70 + DAT_1806b6550) - fVal_46) +
                  DAT_1806be594 + DAT_1806c886c) - local_120;
        fVal_44 = (float)func_0x1800cd3b0(ptr2_Long_3);
        if ((*(char *)(ptr2_Long_3 + 0x2e) == '\x01') && (*(char *)(DAT_180840570 + 0x2b2) == '\x01')) {
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12604
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x12604) = 1;
            *(uint8_t *)(lVal_30 + 0x12600) = 1;
            *(uint32_t *)(lVal_30 + 0x125fc) = 0xf78802fd;
            func_0x180673140(&LAB_1804305e0);
            ch_12 = *(char *)(local_270 + 1);
          }
          else {
            ch_12 = *(char *)(local_270 + 1);
          }
          if (ch_12 == '\x01') {
            *local_270 = *local_270 ^ 0xf7df47b3;
            *(uint8_t *)(local_270 + 1) = 0;
          }
          _local_118 = ZEXT816(0);
          local_108._0_16_ = _local_118;
          sz_20 = strlen((char *)local_270);
          if (-1 < (int64_t)sz_20) {
            uVal_16 = 0xf;
            pU64_31 = local_118;
            if (0xf < sz_20) {
              uVal_15 = sz_20 | 0xf;
              uVal_16 = 0x16;
              if (0x16 < uVal_15) {
                uVal_16 = uVal_15;
              }
              if (uVal_15 < 0xfff) {
                pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_16 + 0x28);
                pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_31 + -8) = lVal_30;
              }
              _local_118 = pU64_31;
            }
            fVal_46 = DAT_1806b5c70;
            local_108._8_8_ = uVal_16;
            local_108._0_8_ = sz_20;
            func_0x1806aa960(pU64_31,local_270,sz_20);
            pU64_31[sz_20] = 0;
            fVal_48 = (float)func_0x1800cd3b0(local_118);
            if (0xf < (uint64_t)local_108._8_8_) {
              uVal_16 = local_108._8_8_ + 1;
              lVal_30 = (int64_t)_local_118;
              if (0xfff < uVal_16) {
                lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
                if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_16 = local_108._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_16);
            }
            fVal_44 = fVal_44 + fVal_48 + fVal_46;
            goto LAB_1803b7f41;
          }
          goto LAB_1803bb496;
        }
LAB_1803b7f41:
        fVal_48 = fStack_11c;
        fVal_46 = local_120;
        fVal_49 = (float)func_0x1800cfa00();
        fVal_45 = (fVal_45 / fVal_44) * DAT_1806c3c18;
        fVal_44 = DAT_1806c3c18;
        if (fVal_45 <= DAT_1806c3c18) {
          fVal_44 = fVal_45;
        }
        auStack_1b4._0_4_ = fVal_48 + fVal_49 * DAT_1806aeae4;
        local_1b8 = (uint8_t  [4])fVal_46;
        uVal_63 = CONCAT11(uVal_64,1);
        uVal_62 = uVal_62 & 0xffffff00;
        uVal_16 = (uint64_t)pU64_59 & 0xffffffffffffff00;
        uVal_18 = CONCAT44(uVal_51,3);
        uVal_17 = CONCAT44(uVal_65,0x3f800000);
        func_0x1800d02c0(local_1b8,ptr2_Long_3,&DAT_1808402a0,fVal_44,uVal_17,uVal_18,uVal_16,uVal_62,uVal_63);
        uVal_64 = (uint8_t)((ushort)uVal_63 >> 8);
        uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
        uVal_51 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
        if ((*(char *)(ptr2_Long_3 + 0x2e) != '\x01') || (*(char *)(DAT_180840570 + 0x2b2) != '\x01')) {
LAB_1803b9310:
          DAT_1808402b4 = DAT_1808402c0 / DAT_1806ae650 + DAT_1808402b8;
          fVal_44 = DAT_1808402b0 + DAT_1806ae7b0 + DAT_1806c8750;
          local_160 = (float)local_1d8._0_4_ + DAT_1806c3800;
          fVal_46 = DAT_1808402b0 + DAT_1806b26b4;
          fVal_45 = DAT_1808402b4 + DAT_1806b5c70 + DAT_1806b6550;
          fVal_48 = (fVal_44 - fVal_46) * DAT_1806aeae4;
          local_2e8 = ZEXT416((uint)DAT_1808402b0);
          if ((DAT_1808402c8 <= fVal_45 - fVal_48) || (DAT_1808402cc <= fVal_46)) {
            bFlag_14 = 0;
          }
          else {
            bFlag_14 = -(DAT_1808402c8 < fVal_48 + fVal_48 + local_160 && DAT_1808402cc < fVal_44);
          }
          bFlag_34 = DAT_180840580 == (int64_t **)0x0;
          if (*(char *)(ptr2_Long_3 + 0x1b) != '\x01') goto LAB_1803bb418;
          local_2d8 = ZEXT416((uint)(DAT_1808402b0 + _DAT_1806c8860));
          if (*(char *)(ptr2_Long_3 + 0x24) != '\x01') goto LAB_1803bb436;
          local_1bc = *(float *)(ptr2_Long_3 + 0x13);
          fVal_49 = *(float *)(ptr2_Long_3 + 0x1c);
          fVal_35 = *(float *)ptr2_Long_3[9];
          fVal_38 = (float)func_0x1800cd3b0(local_158);
          fVal_46 = fVal_46 + DAT_1806b676c;
          fStack_114 = fVal_46;
          local_118 = (uint8_t  [4])((fVal_45 - fVal_38) + DAT_1806be594 + DAT_1806c886c);
          pU64_59 = (uint8_t *)(uVal_16 & 0xffffffffffffff00);
          pU64_58 = (uint64_t *)CONCAT44(uVal_51,3);
          uVal_17 = CONCAT44(uVal_65,0x3f800000);
          func_0x1800d00e0(local_118,local_158,&DAT_1808402a0,DAT_1806b67e0,uVal_17,pU64_58,pU64_59);
          bFlag_14 = bFlag_14 & bFlag_34;
          fVal_38 = DAT_1806b26b4;
          if ((bFlag_14 == 0) && (*(char *)((int64_t)ptr2_Long_3 + 0x171) == '\0')) {
            fVal_38 = DAT_1806b28c0;
          }
          fVal_36 = fVal_35 - local_1bc;
          if (0.0 <= fVal_35 - local_1bc) {
            fVal_36 = 0.0;
          }
          fVal_49 = fVal_49 - local_1bc;
          fVal_35 = fVal_49;
          if (fVal_36 <= fVal_49) {
            fVal_35 = fVal_36;
          }
          fVal_50 = local_160 - fVal_45;
          fVal_35 = (fVal_35 / fVal_49) * fVal_50;
          fVal_37 = fVal_45 + fVal_35;
          auArr_47 = insertps(_DAT_1806b5540,DAT_18083cb88,0x20);
          auArr_7._8_4_ = DAT_18083cb88;
          auArr_7._0_8_ = DAT_18083cb80;
          auArr_7._12_4_ = uRam000000018083cb8c;
          auArr_47 = blendps(auArr_47,auArr_7,3);
          fStack_114 = auArr_47._4_4_ * _UNK_1806c3864;
          local_118 = (uint8_t  [4])(auArr_47._0_4_ * _DAT_1806c3860);
          uStack_110._0_4_ = auArr_47._8_4_ * _UNK_1806c3868;
          uStack_110._4_4_ = auArr_47._12_4_ * _UNK_1806c386c;
          fVal_36 = (fVal_44 + DAT_1806b676c) - fVal_46;
          fVal_55 = fVal_46 + DAT_1806b5c70;
          local_188 = CONCAT44(fVal_55,fVal_45);
          fVal_54 = fVal_44 + DAT_1806b676c + DAT_1806be594;
          puStack_180 = (uint8_t *)CONCAT44(fVal_54,fVal_36 * DAT_1806aeae4 + fVal_37);
          func_0x1800d2a00(&local_188,local_118,fVal_38);
          fVal_44 = DAT_1806b26b4;
          if ((bFlag_14 == 0) && (*(char *)((int64_t)ptr2_Long_3 + 0x171) == '\0')) {
            fVal_44 = DAT_1806b28c0;
          }
          fStack_114 = _UNK_1806b29a4;
          local_118 = (uint8_t  [4])_DAT_1806b29a0;
          uStack_110._0_4_ = _UNK_1806b29a8;
          uStack_110._4_4_ = _UNK_1806b29ac;
          local_188 = CONCAT44(fVal_55,fVal_37);
          puStack_180 = (uint8_t *)CONCAT44(fVal_54,local_160);
          func_0x1800d2a00(&local_188,local_118,fVal_44);
          fStack_114 = fVal_48;
          local_118 = (uint8_t  [4])fVal_48;
          local_188 = CONCAT44(fVal_36 * DAT_1806aeae4 + fVal_46,fVal_37);
          func_0x1800d27b0(&local_188,local_118,&DAT_1808402a0,*(uint32_t *)(DAT_180840570 + 0x170));
          if (*(char *)((int64_t)ptr2_Long_3 + 0x171) == '\x01') {
            if ((DAT_18083ef14 == '\x01') && (DAT_18083ef15 == '\0')) {
              fVal_35 = DAT_1808402c8 - fVal_45;
            }
            else {
              *(uint8_t *)((int64_t)ptr2_Long_3 + 0x171) = 0;
            }
          }
          else if ((DAT_18083ef17 & bFlag_14) == 1) {
            DAT_18083ef17 = 0;
            *(uint8_t *)((int64_t)ptr2_Long_3 + 0x171) = 1;
          }
          *(float *)ptr2_Long_3[9] = local_1bc + fVal_49 * (fVal_35 / fVal_50);
          func_0x1801d8910(ptr2_Long_3);
          if ((bFlag_14 & DAT_18083ef19) != 1) {
LAB_1803b9755:
            DAT_1808402b0 = DAT_1808402b0 + _DAT_1806c8860;
            auArr_47 = ZEXT416(0);
            fVal_44 = (float)local_2e8._0_4_;
            fVal_45 = (float)local_2d8._0_4_;
            uVal_16 = uStack_140;
            fVal_46 = (float)local_1d8._0_4_;
            DAT_1808402b4 = DAT_1808402b8;
            fVal_48 = local_15c;
            goto joined_r0x0001803ba199;
          }
          DAT_18083ef19 = 0;
          if (*(char *)(ptr2_Long_3 + 0x12) == '\x01') {
            *(uint32_t *)ptr2_Long_3[9] = *(uint32_t *)(ptr2_Long_3 + 10);
            goto LAB_1803b9755;
          }
          goto LAB_1803bb45a;
        }
        local_198._0_4_ = local_120;
        local_198._4_4_ = fStack_11c;
        fVal_45 = (float)func_0x1800cd3b0(ptr2_Long_3);
        local_198._0_4_ = fVal_45 + DAT_1806b5c70 + (float)local_198;
        fVal_45 = (float)func_0x1800cfa00();
        local_198 = (uint8_t *)CONCAT44(fVal_45 * DAT_1806aeae4 + local_198._4_4_,(float)local_198)
        ;
        fVal_44 = (fVal_44 / DAT_1806c3c18) * DAT_1806b28c0;
        local_188 = CONCAT44(_UNK_1806b5b34,_DAT_1806b5b30);
        puStack_180 = (uint8_t *)CONCAT44(_UNK_1806b5b3c,_UNK_1806b5b38);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12610) == '\0') {
          lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_30 + 0x12610) = 1;
          *(uint8_t *)(lVal_30 + 0x1260c) = 1;
          *(uint32_t *)(lVal_30 + 0x12608) = 0xb4e26bd;
          func_0x180673140(&LAB_180430600);
          ch_12 = *(char *)(local_238 + 1);
        }
        else {
          ch_12 = *(char *)(local_238 + 1);
        }
        if (ch_12 == '\x01') {
          *local_238 = *local_238 ^ 0xb1963f3;
          *(uint8_t *)(local_238 + 1) = 0;
        }
        _local_118 = ZEXT816(0);
        local_108._0_16_ = _local_118;
        sz_20 = strlen((char *)local_238);
        if (-1 < (int64_t)sz_20) {
          uVal_15 = 0xf;
          pU64_59 = local_118;
          if (0xf < sz_20) {
            uVal_22 = sz_20 | 0xf;
            uVal_15 = 0x16;
            if (0x16 < uVal_22) {
              uVal_15 = uVal_22;
            }
            if (uVal_22 < 0xfff) {
              pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
            }
            else {
              lVal_30 = func_0x180672de0(uVal_15 + 0x28);
              pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_59 + -8) = lVal_30;
            }
            _local_118 = pU64_59;
          }
          local_108._8_8_ = uVal_15;
          local_108._0_8_ = sz_20;
          func_0x1806aa960(pU64_59,local_238,sz_20);
          pU64_59[sz_20] = 0;
          uVal_63 = CONCAT11(uVal_64,1);
          uVal_62 = uVal_62 & 0xffffff00;
          uVal_16 = uVal_16 & 0xffffffffffffff00;
          uVal_18 = CONCAT44(uVal_51,3);
          uVal_17 = CONCAT44(uVal_65,0x3f800000);
          func_0x1800d02c0(&local_198,local_118,&local_188,fVal_44,uVal_17,uVal_18,uVal_16,uVal_62,uVal_63);
          uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
          uVal_51 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
          if (0xf < (uint64_t)local_108._8_8_) {
            uVal_15 = local_108._8_8_ + 1;
            lVal_30 = (int64_t)_local_118;
            if (0xfff < uVal_15) {
              lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
              if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
              uVal_15 = local_108._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_30,uVal_15);
          }
          goto LAB_1803b9310;
        }
        goto LAB_1803bb4a2;
      default:
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x126dc) == '\0') {
          lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_30 + 0x126dc) = 1;
          *(uint8_t *)(lVal_30 + 0x126d8) = 1;
          *(uint16_t *)(lVal_30 + 0x126d6) = 0x6f4c;
          func_0x180673140(&LAB_1804307f0);
          bFlag_14 = local_2b0[2];
        }
        else {
          bFlag_14 = local_2b0[2];
        }
        if (bFlag_14 == 1) {
          *local_2b0 = *local_2b0 ^ 0x65;
          local_2b0[1] = local_2b0[1] ^ 0x6f;
          local_2b0[2] = 0;
        }
        _local_118 = auArr_47;
        local_108._0_16_ = auArr_47;
        sz_20 = strlen((char *)local_2b0);
        if (-1 < (int64_t)sz_20) {
          uVal_16 = 0xf;
          pU64_31 = local_118;
          if (0xf < sz_20) {
            uVal_15 = sz_20 | 0xf;
            uVal_16 = 0x16;
            if (0x16 < uVal_15) {
              uVal_16 = uVal_15;
            }
            if (uVal_15 < 0xfff) {
              pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
            }
            else {
              lVal_30 = func_0x180672de0(uVal_16 + 0x28);
              pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_31 + -8) = lVal_30;
            }
            _local_118 = pU64_31;
            fVal_46 = (float)local_1d8._0_4_;
          }
          local_108._8_8_ = uVal_16;
          local_108._0_8_ = sz_20;
          func_0x1806aa960(pU64_31,local_2b0,sz_20);
          pU64_31[sz_20] = 0;
          local_158._4_4_ = _UNK_1806cb852;
          local_158._0_4_ = _DAT_1806cb84e;
          uStack_150._0_4_ = (float)_UNK_1806cb856;
          uStack_150._4_4_ = (float)_UNK_1806cb85a;
          local_148._0_2_ = 0x6f4d;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x126f0
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x126f0) = 1;
            func_0x18007c170(lVal_30 + 0x126dd,local_158);
            func_0x180673140(&LAB_180430810);
          }
          _Str = local_2a8;
          func_0x180441320(local_2a8);
          _local_1b8 = auArr_47;
          local_1a8 = auArr_47;
          sz_20 = strlen(_Str);
          if (-1 < (int64_t)sz_20) {
            uVal_16 = 0xf;
            pU64_31 = local_1b8;
            if (0xf < sz_20) {
              uVal_15 = sz_20 | 0xf;
              uVal_16 = 0x16;
              if (0x16 < uVal_15) {
                uVal_16 = uVal_15;
              }
              if (uVal_15 < 0xfff) {
                pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_16 + 0x28);
                pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_31 + -8) = lVal_30;
              }
              _local_1b8 = pU64_31;
            }
            local_1a8._8_8_ = uVal_16;
            local_1a8._0_8_ = sz_20;
            func_0x1806aa960(pU64_31,local_2a8,sz_20);
            pU64_31[sz_20] = 0;
            pLong_56 = ptr2_Long_3[2];
            ptr2_Long_28 = ptr2_Long_3;
            if ((int64_t *)0xf < ptr2_Long_3[3]) {
              ptr2_Long_28 = (int64_t **)*ptr2_Long_3;
            }
            lVal_30 = local_1a8._0_8_;
            if ((int64_t *)(local_1a8._8_8_ - local_1a8._0_8_) < pLong_56) {
              pU64_21 = (uint64_t *)func_0x180082950(local_1b8,pLong_56,pLong_56,ptr2_Long_28,pLong_56);
              uVal_65 = (uint32_t)((uint64_t)pLong_56 >> 0x20);
            }
            else {
              lVal_1 = local_1a8._0_8_ + (int64_t)pLong_56;
              local_1a8._0_8_ = lVal_1;
              pU64_31 = local_1b8;
              if (0xf < (uint64_t)local_1a8._8_8_) {
                pU64_31 = _local_1b8;
              }
              func_0x1806aa960(pU64_31 + lVal_30,ptr2_Long_28);
              pU64_31[lVal_1] = 0;
              pU64_21 = (uint64_t *)local_1b8;
            }
            local_188 = *pU64_21;
            puStack_180 = (uint8_t *)pU64_21[1];
            local_178._0_16_ = *(uint8_t (*)[16])(pU64_21 + 2);
            pU64_21[2] = 0;
            pU64_21[3] = 0xf;
            *(uint8_t *)pU64_21 = 0;
            func_0x180094870(local_158);
            if (0xf < (uint64_t)local_178._8_8_) {
              uVal_16 = local_178._8_8_ + 1;
              uVal_15 = local_188;
              if (0xfff < uVal_16) {
                uVal_15 = *(uint64_t *)(local_188 - 8);
                if (0x1f < (local_188 - 8) - uVal_15) goto LAB_1803bb3b4;
                uVal_16 = local_178._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(uVal_15,uVal_16);
            }
            local_178._0_16_ = ZEXT816(0xf) << 0x40;
            local_188 = local_188 & 0xffffffffffffff00;
            if (0xf < (uint64_t)local_1a8._8_8_) {
              uVal_16 = local_1a8._8_8_ + 1;
              uVal_15 = (uint64_t)_local_1b8;
              if (0xfff < uVal_16) {
                uVal_15 = *(uint64_t *)((int64_t)_local_1b8 - 8);
                if (0x1f < ((int64_t)_local_1b8 - 8U) - uVal_15) goto LAB_1803bb3b4;
                uVal_16 = local_1a8._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(uVal_15,uVal_16);
            }
            if (0xf < (uint64_t)local_108._8_8_) {
              uVal_16 = local_108._8_8_ + 1;
              lVal_30 = (int64_t)_local_118;
              if (0xfff < uVal_16) {
                lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
                if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_16 = local_108._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_16);
            }
            pU64_59 = (uint8_t *)((uint64_t)pU64_59 & 0xffffffffffffff00);
            pU64_58 = (uint64_t *)CONCAT44(uVal_51,3);
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d00e0(&local_120,local_158,&DAT_1808402a0,DAT_1806c3c18,uVal_17,pU64_58,pU64_59);
            DAT_1808402b0 = DAT_1808402b0 + _DAT_1806c8860;
            uVal_16 = uStack_140;
joined_r0x0001803b9d34:
            if (uVal_16 < 0x10) goto switchD_1803b5f31_caseD_6;
LAB_1803ba19f:
            uVal_15 = uVal_16 + 1;
            lVal_30 = (int64_t)local_158;
            if (0xfff < uVal_15) {
              lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
              uVal_15 = uVal_16 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_30,uVal_15);
            if (fVal_48 < DAT_1808402c8) goto LAB_1803ba1e8;
            goto LAB_1803ba390;
          }
LAB_1803bb40c:
          func_0x18007ba70();
LAB_1803bb412:
          func_0x18011cb80();
LAB_1803bb418:
          func_0x18011cb80();
        }
        func_0x18007ba70();
LAB_1803bb424:
        func_0x18011cb80();
LAB_1803bb42a:
        func_0x18007ba70();
LAB_1803bb430:
        func_0x18007ba70();
LAB_1803bb436:
        func_0x18011cb80();
LAB_1803bb43c:
        func_0x18007ba70();
        goto LAB_1803bb442;
      case 3:
        local_15c = DAT_1808402b4;
        uVal_52 = *(uint32_t *)ptr2_Long_3[9];
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12618) == '\0') {
          lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_30 + 0x12618) = 1;
          *(uint32_t *)(lVal_30 + 0x12614) = 0x1af5838;
          func_0x180673140(&LAB_180430620);
          ch_12 = *(char *)((int64_t)local_2c0 + 3);
        }
        else {
          ch_12 = *(char *)((int64_t)local_2c0 + 3);
        }
        if (ch_12 == '\x01') {
          *local_2c0 = (*local_2c0 & 0xffff | (uint)*(byte *)((int64_t)local_2c0 + 2) << 0x10) ^
                       SUB164(_DAT_1806c88c0,0);
        }
        _local_118 = auArr_47;
        local_108._0_16_ = auArr_47;
        sz_20 = strlen((char *)local_2c0);
        if ((int64_t)sz_20 < 0) goto LAB_1803bb430;
        uVal_16 = 0xf;
        pU64_31 = local_118;
        if (0xf < sz_20) {
          uVal_15 = sz_20 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_15) {
            uVal_16 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            lVal_30 = func_0x180672de0(uVal_16 + 0x28);
            pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_31 + -8) = lVal_30;
          }
          _local_118 = pU64_31;
        }
        local_108._8_8_ = uVal_16;
        local_108._0_8_ = sz_20;
        func_0x1806aa960(pU64_31,local_2c0,sz_20);
        pU64_31[sz_20] = 0;
        local_1b8 = (uint8_t  [4])uVal_52;
        local_188 = 1;
        puStack_180 = local_1b8;
        local_198 = local_118;
        if (0xf < (uint64_t)local_108._8_8_) {
          local_198 = _local_118;
        }
        local_190 = local_108._0_8_;
        func_0x18063ff10(local_158,&local_198,&local_188);
        if (0xf < (uint64_t)local_108._8_8_) {
          uVal_16 = local_108._8_8_ + 1;
          lVal_30 = (int64_t)_local_118;
          if (0xfff < uVal_16) {
            lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
            if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
            uVal_16 = local_108._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_30,uVal_16);
        }
        fVal_45 = DAT_1808402c0;
        fVal_44 = DAT_1808402b8;
        fVal_46 = (float)func_0x1800cd3b0(local_158);
        fVal_45 = (((fVal_44 + fVal_45 / DAT_1806ae650 + DAT_1806b5c70 + DAT_1806b6550) - fVal_46) +
                  DAT_1806be594 + DAT_1806c886c) - local_120;
        fVal_44 = (float)func_0x1800cd3b0(ptr2_Long_3);
        if ((*(char *)(ptr2_Long_3 + 0x2e) != '\x01') || (*(char *)(DAT_180840570 + 0x2b2) != '\x01')) {
LAB_1803b81d1:
          fVal_48 = fStack_11c;
          fVal_46 = local_120;
          fVal_49 = (float)func_0x1800cfa00();
          fVal_45 = (fVal_45 / fVal_44) * DAT_1806c3c18;
          fVal_44 = DAT_1806c3c18;
          if (fVal_45 <= DAT_1806c3c18) {
            fVal_44 = fVal_45;
          }
          auStack_1b4._0_4_ = fVal_48 + fVal_49 * DAT_1806aeae4;
          local_1b8 = (uint8_t  [4])fVal_46;
          uVal_63 = CONCAT11(uVal_64,1);
          uVal_62 = uVal_62 & 0xffffff00;
          uVal_16 = (uint64_t)pU64_59 & 0xffffffffffffff00;
          uVal_18 = CONCAT44(uVal_51,3);
          uVal_17 = CONCAT44(uVal_65,0x3f800000);
          func_0x1800d02c0(local_1b8,ptr2_Long_3,&DAT_1808402a0,fVal_44,uVal_17,uVal_18,uVal_16,uVal_62,uVal_63);
          uVal_64 = (uint8_t)((ushort)uVal_63 >> 8);
          uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
          uVal_51 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
          if ((*(char *)(ptr2_Long_3 + 0x2e) != '\x01') || (*(char *)(DAT_180840570 + 0x2b2) != '\x01'))
          {
LAB_1803b986e:
            DAT_1808402b4 = DAT_1808402c0 / DAT_1806ae650 + DAT_1808402b8;
            fVal_45 = DAT_1808402b0 + DAT_1806ae7b0 + DAT_1806c8750;
            local_160 = (float)local_1d8._0_4_ + DAT_1806c3800;
            fVal_44 = DAT_1808402b0 + DAT_1806b26b4;
            fVal_48 = DAT_1808402b4 + DAT_1806b5c70 + DAT_1806b6550;
            fVal_46 = (fVal_45 - fVal_44) * DAT_1806aeae4;
            local_2d8 = ZEXT416((uint)(DAT_1808402b0 + _DAT_1806c8860));
            if ((DAT_1808402c8 <= fVal_48 - fVal_46) || (DAT_1808402cc <= fVal_44)) {
              bFlag_34 = false;
              if (*(char *)(ptr2_Long_3 + 0x1b) == '\x04') goto LAB_1803b997f;
              goto LAB_1803bb400;
            }
            bFlag_34 = DAT_1808402c8 < fVal_46 + fVal_46 + local_160 && DAT_1808402cc < fVal_45;
            if (*(char *)(ptr2_Long_3 + 0x1b) != '\x04') goto LAB_1803bb400;
LAB_1803b997f:
            bFlag_5 = DAT_180840580 == (int64_t **)0x0;
            local_2e8 = ZEXT416((uint)DAT_1808402b0);
            if (*(char *)(ptr2_Long_3 + 0x24) != '\x04') goto LAB_1803bb412;
            local_1bc = (float)*(int *)(ptr2_Long_3 + 0x13);
            iVal_33 = *(int *)(ptr2_Long_3 + 0x1c);
            iVal_2 = *(int *)ptr2_Long_3[9];
            fVal_49 = (float)func_0x1800cd3b0(local_158);
            fVal_44 = fVal_44 + DAT_1806b676c;
            fStack_114 = fVal_44;
            local_118 = (uint8_t  [4])((fVal_48 - fVal_49) + DAT_1806be594 + DAT_1806c886c);
            pU64_59 = (uint8_t *)(uVal_16 & 0xffffffffffffff00);
            pU64_58 = (uint64_t *)CONCAT44(uVal_51,3);
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d00e0(local_118,local_158,&DAT_1808402a0,DAT_1806b67e0,uVal_17,pU64_58,pU64_59);
            bFlag_34 = (bool)(bFlag_34 & bFlag_5);
            fVal_49 = DAT_1806b26b4;
            if ((!bFlag_34) && (*(char *)((int64_t)ptr2_Long_3 + 0x171) == '\0')) {
              fVal_49 = DAT_1806b28c0;
            }
            fVal_35 = (float)iVal_2 - local_1bc;
            if (0.0 <= (float)iVal_2 - local_1bc) {
              fVal_35 = 0.0;
            }
            fVal_36 = (float)iVal_33 - local_1bc;
            fVal_38 = fVal_36;
            if (fVal_35 <= fVal_36) {
              fVal_38 = fVal_35;
            }
            fVal_55 = local_160 - fVal_48;
            fVal_38 = (fVal_38 / fVal_36) * fVal_55;
            fVal_50 = fVal_48 + fVal_38;
            auArr_42 = insertps(_DAT_1806b5540,DAT_18083cb88,0x20);
            auArr_47._8_4_ = DAT_18083cb88;
            auArr_47._0_8_ = DAT_18083cb80;
            auArr_47._12_4_ = uRam000000018083cb8c;
            auArr_47 = blendps(auArr_42,auArr_47,3);
            fStack_114 = auArr_47._4_4_ * _UNK_1806c3864;
            local_118 = (uint8_t  [4])(auArr_47._0_4_ * _DAT_1806c3860);
            uStack_110._0_4_ = auArr_47._8_4_ * _UNK_1806c3868;
            uStack_110._4_4_ = auArr_47._12_4_ * _UNK_1806c386c;
            fVal_35 = (fVal_45 + DAT_1806b676c) - fVal_44;
            fVal_54 = fVal_44 + DAT_1806b5c70;
            local_188 = CONCAT44(fVal_54,fVal_48);
            fVal_37 = fVal_45 + DAT_1806b676c + DAT_1806be594;
            puStack_180 = (uint8_t *)CONCAT44(fVal_37,fVal_35 * DAT_1806aeae4 + fVal_50);
            func_0x1800d2a00(&local_188,local_118,fVal_49);
            fVal_45 = DAT_1806b26b4;
            if ((bFlag_34 == false) && (*(char *)((int64_t)ptr2_Long_3 + 0x171) == '\0')) {
              fVal_45 = DAT_1806b28c0;
            }
            fStack_114 = _UNK_1806b29a4;
            local_118 = (uint8_t  [4])_DAT_1806b29a0;
            uStack_110._0_4_ = _UNK_1806b29a8;
            uStack_110._4_4_ = _UNK_1806b29ac;
            local_188 = CONCAT44(fVal_54,fVal_50);
            puStack_180 = (uint8_t *)CONCAT44(fVal_37,local_160);
            func_0x1800d2a00(&local_188,local_118,fVal_45);
            fStack_114 = fVal_46;
            local_118 = (uint8_t  [4])fVal_46;
            local_188 = CONCAT44(fVal_35 * DAT_1806aeae4 + fVal_44,fVal_50);
            func_0x1800d27b0(&local_188,local_118,&DAT_1808402a0,*(uint32_t *)(DAT_180840570 + 0x170)
                         );
            if (*(char *)((int64_t)ptr2_Long_3 + 0x171) == '\x01') {
              if ((DAT_18083ef14 == '\x01') && (DAT_18083ef15 == '\0')) {
                fVal_38 = DAT_1808402c8 - fVal_48;
              }
              else {
                *(uint8_t *)((int64_t)ptr2_Long_3 + 0x171) = 0;
              }
            }
            else if ((DAT_18083ef17 & bFlag_34) == 1) {
              DAT_18083ef17 = 0;
              *(uint8_t *)((int64_t)ptr2_Long_3 + 0x171) = 1;
            }
            fVal_44 = fVal_36 * (fVal_38 / fVal_55) + local_1bc;
            auArr_47 = ZEXT416((uint)fVal_44 & _DAT_1806af1a0) | _DAT_1806c37f0;
            auArr_40._4_12_ = auArr_47._4_12_;
            auArr_40._0_4_ = auArr_47._0_4_ + fVal_44;
            auArr_47 = roundss(auArr_40,auArr_40,0xb);
            *(int *)ptr2_Long_3[9] = (int)auArr_47._0_4_;
            uVal_64 = *(uint8_t *)(ptr2_Long_3 + 0x25);
            *(uint8_t *)(ptr2_Long_3 + 0x25) = 0;
            func_0x1801d8910(ptr2_Long_3);
            *(uint8_t *)(ptr2_Long_3 + 0x25) = uVal_64;
            if ((bFlag_34 & DAT_18083ef19) != 1) {
LAB_1803b9cf5:
              DAT_1808402b0 = DAT_1808402b0 + _DAT_1806c8860;
              auArr_47 = ZEXT416(0);
              DAT_1808402b4 = DAT_1808402b8;
              fVal_44 = (float)local_2e8._0_4_;
              fVal_45 = (float)local_2d8._0_4_;
              uVal_16 = uStack_140;
              fVal_46 = (float)local_1d8._0_4_;
              fVal_48 = local_15c;
              goto joined_r0x0001803b9d34;
            }
            DAT_18083ef19 = 0;
            if (*(char *)(ptr2_Long_3 + 0x12) == '\x04') {
              *(uint32_t *)ptr2_Long_3[9] = *(uint32_t *)(ptr2_Long_3 + 10);
              goto LAB_1803b9cf5;
            }
            goto LAB_1803bb454;
          }
          local_198._0_4_ = local_120;
          local_198._4_4_ = fStack_11c;
          fVal_45 = (float)func_0x1800cd3b0(ptr2_Long_3);
          local_198._0_4_ = fVal_45 + DAT_1806b5c70 + (float)local_198;
          fVal_45 = (float)func_0x1800cfa00();
          local_198 = (uint8_t *)
                      CONCAT44(fVal_45 * DAT_1806aeae4 + local_198._4_4_,(float)local_198);
          fVal_44 = (fVal_44 / DAT_1806c3c18) * DAT_1806b28c0;
          local_188 = CONCAT44(_UNK_1806b5b34,_DAT_1806b5b30);
          puStack_180 = (uint8_t *)CONCAT44(_UNK_1806b5b3c,_UNK_1806b5b38);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12630
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x12630) = 1;
            *(uint8_t *)(lVal_30 + 0x1262c) = 1;
            *(uint32_t *)(lVal_30 + 0x12628) = 0xe7a4048b;
            func_0x180673140(&LAB_180430670);
            ch_12 = *(char *)(local_240 + 1);
          }
          else {
            ch_12 = *(char *)(local_240 + 1);
          }
          if (ch_12 == '\x01') {
            *local_240 = *local_240 ^ 0xe7f341c5;
            *(uint8_t *)(local_240 + 1) = 0;
          }
          _local_118 = ZEXT816(0);
          local_108._0_16_ = _local_118;
          sz_20 = strlen((char *)local_240);
          if (-1 < (int64_t)sz_20) {
            uVal_15 = 0xf;
            pU64_59 = local_118;
            if (0xf < sz_20) {
              uVal_22 = sz_20 | 0xf;
              uVal_15 = 0x16;
              if (0x16 < uVal_22) {
                uVal_15 = uVal_22;
              }
              if (uVal_22 < 0xfff) {
                pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_15 + 0x28);
                pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_59 + -8) = lVal_30;
              }
              _local_118 = pU64_59;
            }
            local_108._8_8_ = uVal_15;
            local_108._0_8_ = sz_20;
            func_0x1806aa960(pU64_59,local_240,sz_20);
            pU64_59[sz_20] = 0;
            uVal_63 = CONCAT11(uVal_64,1);
            uVal_62 = uVal_62 & 0xffffff00;
            uVal_16 = uVal_16 & 0xffffffffffffff00;
            uVal_18 = CONCAT44(uVal_51,3);
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d02c0(&local_198,local_118,&local_188,fVal_44,uVal_17,uVal_18,uVal_16,uVal_62,uVal_63)
            ;
            uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
            uVal_51 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
            if (0xf < (uint64_t)local_108._8_8_) {
              uVal_15 = local_108._8_8_ + 1;
              lVal_30 = (int64_t)_local_118;
              if (0xfff < uVal_15) {
                lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
                if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_15 = local_108._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_15);
            }
            goto LAB_1803b986e;
          }
          goto LAB_1803bb490;
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12624) == '\0') {
          lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_30 + 0x12624) = 1;
          *(uint8_t *)(lVal_30 + 0x12620) = 1;
          *(uint32_t *)(lVal_30 + 0x1261c) = 0x93e8ba53;
          func_0x180673140(&LAB_180430650);
          ch_12 = *(char *)(local_278 + 1);
        }
        else {
          ch_12 = *(char *)(local_278 + 1);
        }
        if (ch_12 == '\x01') {
          *local_278 = *local_278 ^ 0x93bfff1d;
          *(uint8_t *)(local_278 + 1) = 0;
        }
        _local_118 = ZEXT816(0);
        local_108._0_16_ = _local_118;
        sz_20 = strlen((char *)local_278);
        if (-1 < (int64_t)sz_20) {
          uVal_16 = 0xf;
          pU64_31 = local_118;
          if (0xf < sz_20) {
            uVal_15 = sz_20 | 0xf;
            uVal_16 = 0x16;
            if (0x16 < uVal_15) {
              uVal_16 = uVal_15;
            }
            if (uVal_15 < 0xfff) {
              pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
            }
            else {
              lVal_30 = func_0x180672de0(uVal_16 + 0x28);
              pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_31 + -8) = lVal_30;
            }
            _local_118 = pU64_31;
          }
          fVal_46 = DAT_1806b5c70;
          local_108._8_8_ = uVal_16;
          local_108._0_8_ = sz_20;
          func_0x1806aa960(pU64_31,local_278,sz_20);
          pU64_31[sz_20] = 0;
          fVal_48 = (float)func_0x1800cd3b0(local_118);
          if (0xf < (uint64_t)local_108._8_8_) {
            uVal_16 = local_108._8_8_ + 1;
            lVal_30 = (int64_t)_local_118;
            if (0xfff < uVal_16) {
              lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
              if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
              uVal_16 = local_108._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_30,uVal_16);
          }
          fVal_44 = fVal_44 + fVal_48 + fVal_46;
          goto LAB_1803b81d1;
        }
        goto LAB_1803bb4ae;
      case 4:
        fVal_46 = fVal_46 + DAT_1806c3800;
        fVal_35 = fVal_46 + _DAT_1806c8720;
        fVal_44 = (float)func_0x1800cd3b0(ptr2_Long_3);
        if ((*(char *)(ptr2_Long_3 + 0x2e) != '\x01') || (*(char *)(DAT_180840570 + 0x2b2) != '\x01')) {
LAB_1803b792e:
          fVal_38 = fStack_11c;
          fVal_45 = local_120;
          fVal_36 = (float)func_0x1800cfa00();
          fVal_49 = ((fVal_35 - fVal_49) / fVal_44) * DAT_1806c3c18;
          fVal_44 = DAT_1806c3c18;
          if (fVal_49 <= DAT_1806c3c18) {
            fVal_44 = fVal_49;
          }
          local_188 = CONCAT44(fVal_38 + fVal_36 * DAT_1806aeae4,fVal_45);
          uVal_63 = CONCAT11(uVal_64,1);
          uVal_62 = uVal_62 & 0xffffff00;
          pU64_59 = (uint8_t *)((uint64_t)pU64_59 & 0xffffffffffffff00);
          pU64_58 = (uint64_t *)CONCAT44(uVal_51,3);
          uVal_17 = CONCAT44(uVal_65,0x3f800000);
          func_0x1800d02c0(&local_188,ptr2_Long_3,&DAT_1808402a0,fVal_44,uVal_17,pU64_58,pU64_59,uVal_62,
                        uVal_63);
          auArr_42 = _local_1b8;
          uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
          uVal_51 = (uint32_t)((uint64_t)pU64_58 >> 0x20);
          uVal_64 = (uint8_t)((ushort)uVal_63 >> 8);
          if ((*(char *)(ptr2_Long_3 + 0x2e) != '\x01') || (*(char *)(DAT_180840570 + 0x2b2) != '\x01'))
          {
LAB_1803b8e59:
            fVal_45 = (float)func_0x1800cd3b0(ptr2_Long_3);
            fVal_44 = DAT_1808402b0;
            DAT_1808402b4 = fVal_45 + DAT_1808402b4;
            uStack_110._4_4_ = DAT_1808402b0 + DAT_1806b26b4 + DAT_1806c8750;
            auArr_42 = insertps(ZEXT416((uint)fVal_35),ZEXT416((uint)DAT_1808402b0),0x10);
            auArr_42 = insertps(auArr_42,ZEXT416((uint)fVal_46),0x20);
            fVal_46 = auArr_42._4_4_ + _UNK_1806c8894;
            uStack_110._0_4_ = auArr_42._8_4_ + _UNK_1806c8898;
            fStack_114 = DAT_1808402b0 + DAT_1806b5c70;
            local_118 = (uint8_t  [4])fVal_35;
            fVal_45 = DAT_1808402b0 + _DAT_1806c8860;
            if ((DAT_1808402c8 <= fVal_35) || (DAT_1808402cc <= DAT_1808402b0 + DAT_1806b5c70)) {
              bFlag_14 = 0;
            }
            else {
              bFlag_14 = -(DAT_1808402c8 < (float)uStack_110 && DAT_1808402cc < uStack_110._4_4_);
            }
            bFlag_34 = DAT_180840580 == (int64_t **)0x0;
            local_158._4_4_ = fVal_46 + _UNK_1806c88a4;
            local_158._0_4_ = auArr_42._0_4_ + _DAT_1806c8890 + _DAT_1806c88a0;
            uStack_150._0_4_ = (float)uStack_110 + _UNK_1806c88a8;
            uStack_150._4_4_ = fVal_46 + _UNK_1806c88ac;
            func_0x1800d2a00(local_158,&DAT_1808402a0,DAT_1806b26b4);
            local_158._4_4_ = fStack_114 + _UNK_1806c88b4;
            local_158._0_4_ = (float)local_118 + _DAT_1806c88b0;
            uStack_150._0_4_ = (float)local_118 + _UNK_1806c88b8;
            uStack_150._4_4_ = fStack_114 + _UNK_1806c88bc;
            func_0x1800d2a00(local_158,&DAT_1808402a0,DAT_1806b26b4);
            local_158._4_4_ = SUB164(_local_118,4) + _UNK_1806c88b4;
            local_158._0_4_ = SUB164(_local_118,8) + _DAT_1806c88b0;
            uStack_150._0_4_ = SUB164(_local_118,8) + _UNK_1806c88b8;
            uStack_150._4_4_ = SUB164(_local_118,0xc) + _UNK_1806c88bc;
            func_0x1800d2a00(local_158,uStack_110,DAT_1806b26b4);
            uVal_18 = uStack_110;
            local_158._0_4_ = (float)local_118 + _DAT_1806c88a0;
            local_158._4_4_ = uStack_110._4_4_ + _UNK_1806c88a4;
            uStack_150._0_4_ = SUB164(_local_118,8) + _UNK_1806c88a8;
            uStack_150._4_4_ = uStack_110._4_4_ + _UNK_1806c88ac;
            func_0x1800d2a00(uVal_18,&DAT_1808402a0,DAT_1806b26b4);
            bFlag_14 = bFlag_14 & bFlag_34;
            fVal_46 = DAT_1806b26b4;
            if (bFlag_14 == 0) {
              fVal_46 = DAT_1806b28c0;
            }
            func_0x1800d2a00(local_118,ptr2_Long_3[9],fVal_46);
            if ((DAT_18083ef17 & bFlag_14) == 1) {
              DAT_18084060f = DAT_1808405fc;
              DAT_1808405fc = 5;
              DAT_180840598 = ptr2_Long_3[9];
              DAT_18083cb90 = *(uint32_t *)DAT_180840598;
              DAT_18083cb94 = *(uint32_t *)((int64_t)DAT_180840598 + 4);
              DAT_18083cb98 = *(uint32_t *)(DAT_180840598 + 1);
              DAT_18083cb9c = *(uint32_t *)((int64_t)DAT_180840598 + 0xc);
              DAT_18083ef17 = 0;
            }
            if ((bFlag_14 & DAT_18083ef19) != 1) {
LAB_1803b90f1:
              func_0x1801d8910(ptr2_Long_3);
              DAT_1808402b0 = DAT_1808402b0 + _DAT_1806c8860;
              fVal_46 = (float)local_1d8._0_4_;
              DAT_1808402b4 = DAT_1808402b8;
joined_r0x0001803b8d91:
              if (fVal_48 < DAT_1808402c8) goto LAB_1803ba1e8;
              goto LAB_1803ba390;
            }
            DAT_18083ef19 = 0;
            if (*(char *)(ptr2_Long_3 + 0x12) == '\x05') {
              pLong_56 = ptr2_Long_3[9];
              *(uint32_t *)pLong_56 = *(uint32_t *)(ptr2_Long_3 + 10);
              *(uint32_t *)((int64_t)pLong_56 + 4) = *(uint32_t *)((int64_t)ptr2_Long_3 + 0x54);
              *(uint32_t *)(pLong_56 + 1) = *(uint32_t *)(ptr2_Long_3 + 0xb);
              *(uint32_t *)((int64_t)pLong_56 + 0xc) = *(uint32_t *)((int64_t)ptr2_Long_3 + 0x5c);
              goto LAB_1803b90f1;
            }
            goto LAB_1803bb44e;
          }
          auStack_1b4._0_4_ = fStack_11c;
          local_1b8 = (uint8_t  [4])local_120;
          auStack_1b4._4_8_ = auArr_42._8_8_;
          fVal_45 = (float)func_0x1800cd3b0(ptr2_Long_3);
          local_1b8 = (uint8_t  [4])(fVal_45 + DAT_1806b5c70 + (float)local_1b8);
          fVal_45 = (float)func_0x1800cfa00();
          auStack_1b4._0_4_ = fVal_45 * DAT_1806aeae4 + (float)auStack_1b4._0_4_;
          fVal_44 = (fVal_44 / DAT_1806c3c18) * DAT_1806b28c0;
          fStack_114 = (float)_UNK_1806b5b34;
          local_118 = (uint8_t  [4])_DAT_1806b5b30;
          uStack_110._0_4_ = (float)_UNK_1806b5b38;
          uStack_110._4_4_ = (float)_UNK_1806b5b3c;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12648
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x12648) = 1;
            *(uint8_t *)(lVal_30 + 0x12644) = 1;
            *(uint32_t *)(lVal_30 + 0x12640) = 0x93a4d407;
            func_0x180673140(&LAB_1804306b0);
            ch_12 = *(char *)(local_250 + 1);
          }
          else {
            ch_12 = *(char *)(local_250 + 1);
          }
          if (ch_12 == '\x01') {
            *local_250 = *local_250 ^ 0x93f39149;
            *(uint8_t *)(local_250 + 1) = 0;
          }
          _local_158 = auArr_47;
          _local_148 = auArr_47;
          sz_20 = strlen((char *)local_250);
          if (-1 < (int64_t)sz_20) {
            uVal_16 = 0xf;
            pU64_31 = local_158;
            if (0xf < sz_20) {
              uVal_15 = sz_20 | 0xf;
              uVal_16 = 0x16;
              if (0x16 < uVal_15) {
                uVal_16 = uVal_15;
              }
              if (uVal_15 < 0xfff) {
                pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_16 + 0x28);
                pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_31 + -8) = lVal_30;
              }
              local_158 = (uint8_t  [8])pU64_31;
            }
            uStack_140 = uVal_16;
            _local_148 = (int64_t *)sz_20;
            func_0x1806aa960(pU64_31,local_250,sz_20);
            pU64_31[sz_20] = 0;
            uVal_63 = CONCAT11(uVal_64,1);
            uVal_62 = uVal_62 & 0xffffff00;
            pU64_59 = (uint8_t *)((uint64_t)pU64_59 & 0xffffffffffffff00);
            pU64_58 = (uint64_t *)CONCAT44(uVal_51,3);
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d02c0(local_1b8,local_158,local_118,fVal_44,uVal_17,pU64_58,pU64_59,uVal_62,uVal_63)
            ;
            if (0xf < uStack_140) {
              uVal_16 = uStack_140 + 1;
              lVal_30 = (int64_t)local_158;
              if (0xfff < uVal_16) {
                lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_16 = uStack_140 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_16);
            }
            goto LAB_1803b8e59;
          }
          goto LAB_1803bb478;
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x1263c) == '\0') {
          lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_30 + 0x1263c) = 1;
          *(uint8_t *)(lVal_30 + 0x12638) = 1;
          *(uint32_t *)(lVal_30 + 0x12634) = 0xd94ba91;
          func_0x180673140(&LAB_180430690);
          ch_12 = *(char *)(local_288 + 1);
        }
        else {
          ch_12 = *(char *)(local_288 + 1);
        }
        if (ch_12 == '\x01') {
          *local_288 = *local_288 ^ 0xdc3ffdf;
          *(uint8_t *)(local_288 + 1) = 0;
        }
        _local_158 = auArr_47;
        _local_148 = auArr_47;
        sz_20 = strlen((char *)local_288);
        if (-1 < (int64_t)sz_20) {
          uVal_16 = 0xf;
          pU64_31 = local_158;
          if (0xf < sz_20) {
            uVal_15 = sz_20 | 0xf;
            uVal_16 = 0x16;
            if (0x16 < uVal_15) {
              uVal_16 = uVal_15;
            }
            if (uVal_15 < 0xfff) {
              pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
            }
            else {
              lVal_30 = func_0x180672de0(uVal_16 + 0x28);
              pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_31 + -8) = lVal_30;
            }
            local_158 = (uint8_t  [8])pU64_31;
          }
          uStack_140 = uVal_16;
          _local_148 = (int64_t *)sz_20;
          func_0x1806aa960(pU64_31,local_288,sz_20);
          pU64_31[sz_20] = 0;
          fVal_45 = (float)func_0x1800cd3b0(local_158);
          fVal_45 = fVal_45 + DAT_1806b5c70;
          if (0xf < uStack_140) {
            uVal_16 = uStack_140 + 1;
            lVal_30 = (int64_t)local_158;
            if (0xfff < uVal_16) {
              lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
              uVal_16 = uStack_140 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_30,uVal_16);
          }
          fVal_44 = fVal_44 + fVal_45;
          goto LAB_1803b792e;
        }
        goto LAB_1803bb484;
      case 5:
        fVal_46 = fVal_46 + DAT_1806c3800;
        if ((DAT_1808402c8 <= fVal_49 + DAT_1806b5c70) ||
           (DAT_1808402cc <= fStack_11c + DAT_1806b26b4)) {
LAB_1803b6612:
          fVal_45 = fVal_46 + _DAT_1806c8940;
          local_158._0_4_ = _DAT_1806b29a0;
          local_158._4_4_ = _UNK_1806b29a4;
          uStack_150._0_4_ = _UNK_1806b29a8;
          uStack_150._4_4_ = _UNK_1806b29ac;
          if (*(char *)ptr2_Long_3[9] == '\x01') {
            auArr_42 = insertps(_DAT_1806b5540,DAT_18083cb88,0x20);
            auArr_6._8_4_ = DAT_18083cb88;
            auArr_6._0_8_ = DAT_18083cb80;
            auArr_6._12_4_ = uRam000000018083cb8c;
            auArr_42 = blendps(auArr_42,auArr_6,3);
            local_158._0_4_ = auArr_42._0_4_ * _DAT_1806c3860;
            local_158._4_4_ = auArr_42._4_4_ * _UNK_1806c3864;
            uStack_150._0_4_ = auArr_42._8_4_ * _UNK_1806c3868;
            uStack_150._4_4_ = auArr_42._12_4_ * _UNK_1806c386c;
          }
          pU64_31 = local_158;
          uVal_17 = CONCAT44(uVal_65,*(uint32_t *)(DAT_180840570 + 0x170));
          uVal_62 = 0x40819999;
          uVal_16 = CONCAT71((int7)((uint64_t)pU64_59 >> 8),0xf);
          func_0x1800d2e40();
          local_158._4_4_ = _UNK_1806c8954;
          local_158._0_4_ = _DAT_1806c8950;
          uStack_150._0_4_ = (float)_UNK_1806c8958;
          uStack_150._4_4_ = (float)_UNK_1806c895c;
          _local_118 = (uint8_t *)DAT_1806c8960;
          fVal_46 = fVal_46 + _DAT_1806c8974;
          if (*(char *)ptr2_Long_3[9] == '\0') {
            fVal_46 = fVal_45 + _DAT_1806c8978;
          }
          local_188 = CONCAT44(fStack_11c + _DAT_1806c8970,fVal_46);
          func_0x1800d27b0(&local_188,local_118,local_158,*(uint32_t *)(DAT_180840570 + 0x170),uVal_17
                        ,pU64_31,uVal_16,uVal_62);
          uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
          uVal_51 = (uint32_t)((uint64_t)pU64_31 >> 0x20);
          fVal_45 = fVal_45 - local_120;
          fVal_46 = (float)func_0x1800cd3b0(ptr2_Long_3);
          if ((*(char *)(ptr2_Long_3 + 0x2e) == '\x01') && (*(char *)(DAT_180840570 + 0x2b2) == '\x01'))
          {
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x125bc) == '\0') {
              lVal_30 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_30 + 0x125bc) = 1;
              *(uint8_t *)(lVal_30 + 0x125b8) = 1;
              *(uint32_t *)(lVal_30 + 0x125b4) = 0xd9c06ca7;
              func_0x180673140(&LAB_180430510);
              ch_12 = *(char *)(local_280 + 1);
            }
            else {
              ch_12 = *(char *)(local_280 + 1);
            }
            if (ch_12 == '\x01') {
              *local_280 = *local_280 ^ 0xd99729e9;
              *(uint8_t *)(local_280 + 1) = 0;
            }
            _local_158 = auArr_47;
            _local_148 = auArr_47;
            sz_20 = strlen((char *)local_280);
            if (-1 < (int64_t)sz_20) {
              uVal_15 = 0xf;
              pU64_59 = local_158;
              if (0xf < sz_20) {
                uVal_22 = sz_20 | 0xf;
                uVal_15 = 0x16;
                if (0x16 < uVal_22) {
                  uVal_15 = uVal_22;
                }
                if (uVal_22 < 0xfff) {
                  pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
                }
                else {
                  lVal_30 = func_0x180672de0(uVal_15 + 0x28);
                  pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_59 + -8) = lVal_30;
                }
                local_158 = (uint8_t  [8])pU64_59;
              }
              uStack_140 = uVal_15;
              _local_148 = (int64_t *)sz_20;
              func_0x1806aa960(pU64_59,local_280,sz_20);
              pU64_59[sz_20] = 0;
              fVal_49 = (float)func_0x1800cd3b0(local_158);
              fVal_49 = fVal_49 + DAT_1806b5c70;
              if (0xf < uStack_140) {
                uVal_15 = uStack_140 + 1;
                lVal_30 = (int64_t)local_158;
                if (0xfff < uVal_15) {
                  lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
                  if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
                  uVal_15 = uStack_140 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_30,uVal_15);
              }
              fVal_46 = fVal_46 + fVal_49;
              goto LAB_1803b7cb6;
            }
            goto LAB_1803bb49c;
          }
LAB_1803b7cb6:
          fVal_35 = fStack_11c;
          fVal_49 = local_120;
          fVal_38 = (float)func_0x1800cfa00();
          fVal_46 = (fVal_45 / fVal_46) * DAT_1806c3c18;
          fVal_45 = DAT_1806c3c18;
          if (fVal_46 <= DAT_1806c3c18) {
            fVal_45 = fVal_46;
          }
          local_188 = CONCAT44(fVal_35 + fVal_38 * DAT_1806aeae4,fVal_49);
          uVal_63 = CONCAT11(uVal_64,1);
          uVal_62 = uVal_62 & 0xffffff00;
          pU64_59 = (uint8_t *)(uVal_16 & 0xffffffffffffff00);
          pU64_58 = (uint64_t *)CONCAT44(uVal_51,3);
          uVal_17 = CONCAT44(uVal_65,0x3f800000);
          func_0x1800d02c0(&local_188,ptr2_Long_3,&DAT_1808402a0,fVal_45,uVal_17,pU64_58,pU64_59,uVal_62,
                        uVal_63);
          auArr_42 = _local_1b8;
          uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
          uVal_51 = (uint32_t)((uint64_t)pU64_58 >> 0x20);
          uVal_64 = (uint8_t)((ushort)uVal_63 >> 8);
          if ((*(char *)(ptr2_Long_3 + 0x2e) != '\x01') || (*(char *)(DAT_180840570 + 0x2b2) != '\x01'))
          {
LAB_1803b9208:
            fVal_45 = fVal_44 + DAT_1806c8750 + DAT_1806b5c70;
            DAT_1808402b0 = DAT_1808402b0 + _DAT_1806c8860;
            fVal_46 = (float)local_1d8._0_4_;
            goto joined_r0x0001803b8d91;
          }
          auStack_1b4._0_4_ = fStack_11c;
          local_1b8 = (uint8_t  [4])local_120;
          auStack_1b4._4_8_ = auArr_42._8_8_;
          fVal_46 = (float)func_0x1800cd3b0(ptr2_Long_3);
          local_1b8 = (uint8_t  [4])(fVal_46 + DAT_1806b5c70 + (float)local_1b8);
          fVal_46 = (float)func_0x1800cfa00();
          auStack_1b4._0_4_ = fVal_46 * DAT_1806aeae4 + (float)auStack_1b4._0_4_;
          fVal_45 = (fVal_45 / DAT_1806c3c18) * DAT_1806b28c0;
          fStack_114 = (float)_UNK_1806b5b34;
          local_118 = (uint8_t  [4])_DAT_1806b5b30;
          uStack_110._0_4_ = (float)_UNK_1806b5b38;
          uStack_110._4_4_ = (float)_UNK_1806b5b3c;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x125c8
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x125c8) = 1;
            *(uint8_t *)(lVal_30 + 0x125c4) = 1;
            *(uint32_t *)(lVal_30 + 0x125c0) = 0xb7289679;
            func_0x180673140(&LAB_180430530);
            ch_12 = *(char *)(local_248 + 1);
          }
          else {
            ch_12 = *(char *)(local_248 + 1);
          }
          if (ch_12 == '\x01') {
            *local_248 = *local_248 ^ 0xb77fd337;
            *(uint8_t *)(local_248 + 1) = 0;
          }
          _local_158 = auArr_47;
          _local_148 = auArr_47;
          sz_20 = strlen((char *)local_248);
          if (-1 < (int64_t)sz_20) {
            uVal_16 = 0xf;
            pU64_31 = local_158;
            if (0xf < sz_20) {
              uVal_15 = sz_20 | 0xf;
              uVal_16 = 0x16;
              if (0x16 < uVal_15) {
                uVal_16 = uVal_15;
              }
              if (uVal_15 < 0xfff) {
                pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_16 + 0x28);
                pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_31 + -8) = lVal_30;
              }
              local_158 = (uint8_t  [8])pU64_31;
            }
            uStack_140 = uVal_16;
            _local_148 = (int64_t *)sz_20;
            func_0x1806aa960(pU64_31,local_248,sz_20);
            pU64_31[sz_20] = 0;
            uVal_63 = CONCAT11(uVal_64,1);
            uVal_62 = uVal_62 & 0xffffff00;
            pU64_59 = (uint8_t *)((uint64_t)pU64_59 & 0xffffffffffffff00);
            pU64_58 = (uint64_t *)CONCAT44(uVal_51,3);
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d02c0(local_1b8,local_158,local_118,fVal_45,uVal_17,pU64_58,pU64_59,uVal_62,uVal_63)
            ;
            if (0xf < uStack_140) {
              uVal_16 = uStack_140 + 1;
              lVal_30 = (int64_t)local_158;
              if (0xfff < uVal_16) {
                lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_16 = uStack_140 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_16);
            }
            goto LAB_1803b9208;
          }
          goto LAB_1803bb4a8;
        }
        bFlag_14 = DAT_180840580 == (int64_t **)0x0 &
                 -(DAT_1808402cc < fStack_11c + DAT_1806c8750 + DAT_1806ae7b0 &&
                  DAT_1808402c8 < fVal_46);
        if ((bFlag_14 == 1) && (DAT_18083ef17 != 0)) {
          DAT_18083ef17 = 0;
          *(byte *)ptr2_Long_3[9] = *(byte *)ptr2_Long_3[9] ^ 1;
        }
        if ((bFlag_14 & DAT_18083ef19) != 1) goto LAB_1803b6612;
        DAT_18083ef19 = 0;
        if (*(char *)(ptr2_Long_3 + 0x12) == '\x06') {
          *(uint8_t *)ptr2_Long_3[9] = *(uint8_t *)(ptr2_Long_3 + 10);
          goto LAB_1803b6612;
        }
        goto LAB_1803bb4ba;
      case 6:
switchD_1803b5f31_caseD_6:
        if (fVal_48 < DAT_1808402c8) {
LAB_1803ba1e8:
          if ((((fVal_44 < DAT_1808402cc) && (DAT_1808402c8 < fVal_46)) && (DAT_1808402cc < fVal_45))
             && (DAT_180840580 == (int64_t **)0x0)) {
            if (ptr2_Long_3[7] < (int64_t *)0x10) {
              pArr16_27 = (uint8_t (*)[16])(ptr2_Long_3 + 4);
            }
            else {
              pArr16_27 = (uint8_t (*)[16])ptr2_Long_3[4];
            }
            pLong_56 = ptr2_Long_3[6];
            _local_158 = auArr_47;
            _local_148 = auArr_47;
            if ((int64_t)pLong_56 < 0) {
              func_0x18007ba70();
LAB_1803bb3fa:
              func_0x18011cb80();
LAB_1803bb400:
              func_0x18011cb80();
              goto LAB_1803bb406;
            }
            if (pLong_56 < (int64_t *)0x10) {
              uStack_140 = 0xf;
              _local_148 = pLong_56;
              _local_158 = *pArr16_27;
              if (*(char *)(DAT_180840570 + 0x82) != '\x01') goto LAB_1803ba33e;
LAB_1803ba2fa:
              uVal_16 = (uint64_t)_local_148;
              if (_local_148 == (int64_t *)0x0) goto LAB_1803ba33e;
              pU64_31 = local_158;
              if (0xf < uStack_140) {
                pU64_31 = (uint8_t *)local_158;
              }
              if (DAT_18083ca30 < _local_148) {
                func_0x18007bba0(&DAT_18083ca18,_local_148);
                goto LAB_1803ba33e;
              }
              pU64_57 = &DAT_18083ca18;
              if (0xf < DAT_18083ca30) {
                pU64_57 = DAT_18083ca18;
              }
              DAT_18083ca28 = (uint64_t)_local_148;
              func_0x1806aa960(pU64_57,pU64_31,_local_148);
              *(uint8_t *)((int64_t)pU64_57 + uVal_16) = 0;
            }
            else {
              uVal_15 = (uint64_t)pLong_56 | 0xf;
              uVal_16 = 0x16;
              if (0x16 < uVal_15) {
                uVal_16 = uVal_15;
              }
              if (uVal_15 < 0xfff) {
                uVal_15 = func_0x180672de0(uVal_16 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_16 + 0x28);
                uVal_15 = lVal_30 + 0x27U & 0xffffffffffffffe0;
                *(int64_t *)(uVal_15 - 8) = lVal_30;
              }
              local_158 = (uint8_t  [8])uVal_15;
              uStack_140 = uVal_16;
              _local_148 = pLong_56;
              func_0x1806aa960(uVal_15,pArr16_27,(int64_t)pLong_56 + 1);
              if (*(char *)(DAT_180840570 + 0x82) == '\x01') goto LAB_1803ba2fa;
LAB_1803ba33e:
            }
            if (0xf < uStack_140) {
              uVal_16 = uStack_140 + 1;
              lVal_30 = (int64_t)local_158;
              if (0xfff < uVal_16) {
                lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) {
LAB_1803bb3b4:
                  do {
                    invalidInstructionException();
                  } while( true );
                }
                uVal_16 = uStack_140 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_16);
            }
          }
        }
LAB_1803ba390:
        uVal_18 = func_0x1800cf970();
        uVal_19 = func_0x1800cf950();
        uVal_24 = func_0x1800cf960();
        func_0x18011b260(uVal_24,uVal_19,uVal_18);
        func_0x1800cfa30();
        goto LAB_1803b5e40;
      case 7:
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x125d0) == '\0') {
          lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_30 + 0x125d0) = 1;
          *(uint8_t *)(lVal_30 + 0x125cc) = 1;
          *(uint16_t *)(lVal_30 + 0x125ca) = 0x6561;
          func_0x180673140(&LAB_180430550);
          bFlag_14 = local_2b8[2];
        }
        else {
          bFlag_14 = local_2b8[2];
        }
        if (bFlag_14 == 1) {
          *local_2b8 = *local_2b8 ^ 0x5b;
          local_2b8[1] = local_2b8[1] ^ 0x65;
          local_2b8[2] = 0;
        }
        _local_118 = auArr_47;
        local_108._0_16_ = auArr_47;
        sz_20 = strlen((char *)local_2b8);
        if ((int64_t)sz_20 < 0) {
LAB_1803bb406:
          func_0x18007ba70();
          goto LAB_1803bb40c;
        }
        local_15c = fVal_48;
        uVal_16 = 0xf;
        pU64_31 = local_118;
        uVal_51 = 0;
        uVal_52 = 0;
        uVal_53 = 0;
        if (0xf < sz_20) {
          uVal_15 = sz_20 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_15) {
            uVal_16 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            lVal_30 = func_0x180672de0(uVal_16 + 0x28);
            pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_31 + -8) = lVal_30;
          }
          _local_118 = pU64_31;
          fVal_46 = (float)local_1d8._0_4_;
          uVal_51 = local_1d8._4_4_;
          uVal_52 = uStack_1d0;
          uVal_53 = uStack_1cc;
        }
        local_108._8_8_ = uVal_16;
        local_108._0_8_ = sz_20;
        func_0x1806aa960(pU64_31,local_2b8,sz_20);
        pU64_31[sz_20] = 0;
        pLong_56 = ptr2_Long_3[2];
        ptr2_Long_28 = ptr2_Long_3;
        if ((int64_t *)0xf < ptr2_Long_3[3]) {
          ptr2_Long_28 = (int64_t **)*ptr2_Long_3;
        }
        lVal_30 = local_108._0_8_;
        if ((int64_t *)(local_108._8_8_ - local_108._0_8_) < pLong_56) {
          pArr16_27 = (uint8_t (*)[16])
                     func_0x1800871a0(local_118,pLong_56,local_108._0_8_,0,ptr2_Long_28,pLong_56);
          uVal_65 = (uint32_t)((uint64_t)ptr2_Long_28 >> 0x20);
        }
        else {
          local_108._0_8_ = local_108._0_8_ + (int64_t)pLong_56;
          pU64_31 = local_118;
          if (0xf < (uint64_t)local_108._8_8_) {
            pU64_31 = _local_118;
          }
          pLong_32 = pLong_56;
          if (((pU64_31 < (uint8_t *)((int64_t)ptr2_Long_28 + (int64_t)pLong_56)) &&
              (ptr2_Long_28 <= pU64_31 + lVal_30)) &&
             (pLong_32 = (int64_t *)(pU64_31 + -(int64_t)ptr2_Long_28),
             pU64_31 < ptr2_Long_28 || pLong_32 == (int64_t *)0x0)) {
            pLong_32 = (int64_t *)0x0;
          }
          func_0x1806aa960(pU64_31 + (int64_t)pLong_56,pU64_31,lVal_30 + 1);
          func_0x1806aa960(pU64_31,ptr2_Long_28,pLong_32);
          func_0x1806aa960(pU64_31 + (int64_t)pLong_32,
                        (uint8_t *)((int64_t)ptr2_Long_28 + (int64_t)pLong_56) + (int64_t)pLong_32,
                        (int64_t)pLong_56 - (int64_t)pLong_32);
          pArr16_27 = (uint8_t (*)[16])local_118;
        }
        _local_158 = *pArr16_27;
        _local_148 = pArr16_27[1];
        *(uint64_t *)pArr16_27[1] = 0;
        *(uint64_t *)(pArr16_27[1] + 8) = 0xf;
        (*pArr16_27)[0] = 0;
        if (0xf < (uint64_t)local_108._8_8_) {
          uVal_16 = local_108._8_8_ + 1;
          lVal_30 = (int64_t)_local_118;
          if (0xfff < uVal_16) {
            lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
            if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
            uVal_16 = local_108._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_30,uVal_16);
        }
        fVal_49 = fStack_11c;
        fVal_45 = DAT_1808402b0 + DAT_1806c8750 + DAT_1806b5c70;
        if (*(char *)(ptr2_Long_3 + 0x1b) != '\x06') goto LAB_1803bb424;
        fVal_35 = DAT_1808402c0 * DAT_1806b28b8 + fVal_46;
        fVal_48 = fStack_11c + DAT_1806c8750;
        uVal_60 = (uint7)((uint64_t)pU64_59 >> 8);
        if ((((DAT_1808402c8 <= fVal_35) || (DAT_1808402cc <= fStack_11c)) ||
            ((fVal_46 + DAT_1806c3800 <= DAT_1808402c8 || (fVal_48 <= DAT_1808402cc)))) ||
           ((DAT_180840580 != (int64_t **)0x0 && (DAT_180840580 != ptr2_Long_3)))) {
          fStack_114 = (float)_UNK_1806b5cc4;
          local_118 = (uint8_t  [4])_DAT_1806b5cc0;
          uStack_110._0_4_ = (float)_UNK_1806b5cc8;
          uStack_110._4_4_ = (float)_UNK_1806b5ccc;
          uVal_16 = (uint64_t)uVal_60 << 8;
          uVal_39 = (uint32_t)((uint64_t)local_118 >> 0x20);
          uVal_62 = 0x403570a3;
          func_0x1800d2e40();
LAB_1803b6ba7:
          fVal_38 = fVal_35 - local_120;
          fVal_48 = (float)func_0x1800cd3b0(local_158);
          if ((*(char *)(ptr2_Long_3 + 0x2e) != '\x01') || (*(char *)(DAT_180840570 + 0x2b2) != '\x01'))
          {
LAB_1803b845d:
            fVal_50 = fStack_11c;
            fVal_36 = local_120;
            fVal_37 = (float)func_0x1800cfa00();
            fVal_38 = (fVal_38 / fVal_48) * DAT_1806c3c18;
            fVal_48 = DAT_1806c3c18;
            if (fVal_38 <= DAT_1806c3c18) {
              fVal_48 = fVal_38;
            }
            auStack_1b4._0_4_ = fVal_50 + fVal_37 * DAT_1806aeae4;
            local_1b8 = (uint8_t  [4])fVal_36;
            uVal_63 = CONCAT11(uVal_64,1);
            uVal_62 = uVal_62 & 0xffffff00;
            uVal_16 = uVal_16 & 0xffffffffffffff00;
            uVal_18 = CONCAT44(uVal_39,3);
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d02c0(local_1b8,local_158,&DAT_1808402a0,fVal_48,uVal_17,uVal_18,uVal_16,uVal_62,
                          uVal_63);
            uVal_64 = (uint8_t)((ushort)uVal_63 >> 8);
            uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
            uVal_39 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
            if ((*(char *)(ptr2_Long_3 + 0x2e) != '\x01') ||
               (*(char *)(DAT_180840570 + 0x2b2) != '\x01')) {
LAB_1803b9dfa:
              uVal_17 = func_0x1801d37a0(ptr2_Long_3[0x25]);
              pArr16_23 = (uint8_t (*)[16])func_0x18008c4e0(uVal_17);
              auArr_47 = ZEXT816(0);
              pArr16_27 = pArr16_23;
              if (0xf < *(uint64_t *)(pArr16_23[1] + 8)) {
                pArr16_27 = *(uint8_t (**)[16])*pArr16_23;
              }
              uVal_15 = *(uint64_t *)pArr16_23[1];
              _local_118 = auArr_47;
              local_108._0_16_ = auArr_47;
              if (-1 < (int64_t)uVal_15) {
                if (uVal_15 < 0x10) {
                  local_108._8_8_ = 0xf;
                  local_108._0_8_ = uVal_15;
                  _local_118 = *pArr16_27;
                }
                else {
                  uVal_25 = uVal_15 | 0xf;
                  uVal_22 = 0x16;
                  if (0x16 < uVal_25) {
                    uVal_22 = uVal_25;
                  }
                  if (uVal_25 < 0xfff) {
                    uVal_25 = func_0x180672de0(uVal_22 + 1);
                  }
                  else {
                    lVal_30 = func_0x180672de0(uVal_22 + 0x28);
                    uVal_25 = lVal_30 + 0x27U & 0xffffffffffffffe0;
                    *(int64_t *)(uVal_25 - 8) = lVal_30;
                  }
                  _local_118 = (uint8_t *)uVal_25;
                  local_108._8_8_ = uVal_22;
                  local_108._0_8_ = uVal_15;
                  func_0x1806aa960(uVal_25,pArr16_27,uVal_15 + 1);
                }
                fVal_48 = local_15c;
                fVal_38 = (float)func_0x1800cfa00();
                local_188 = CONCAT44(fVal_38 * DAT_1806b2860 + fVal_49 + _DAT_1806c8870,
                                     fVal_35 + DAT_1806c3930);
                pU64_59 = (uint8_t *)(uVal_16 & 0xffffffffffffff00);
                pU64_58 = (uint64_t *)CONCAT44(uVal_39,3);
                uVal_17 = CONCAT44(uVal_65,0x3f800000);
                func_0x1800d00e0(&local_188,local_118,&DAT_1808402a0,DAT_1806b67e0,uVal_17,pU64_58,
                              pU64_59);
                local_188 = CONCAT44(_UNK_1806b2884,_DAT_1806b2880);
                puStack_180 = (uint8_t *)CONCAT44(_UNK_1806b288c,_UNK_1806b2888);
                auArr_41._4_4_ = uVal_51;
                auArr_41._0_4_ = fVal_46;
                auArr_41._8_4_ = uVal_52;
                auArr_41._12_4_ = uVal_53;
                auArr_42 = insertps(auArr_41,fStack_11c,0x10);
                fVal_49 = auArr_42._0_4_ + _DAT_1806c8900;
                local_198 = (uint8_t *)CONCAT44(auArr_42._4_4_ + _UNK_1806c8904,fVal_49);
                local_208 = CONCAT44(auArr_42._4_4_ + _UNK_1806c8914,auArr_42._0_4_ + _DAT_1806c8910);
                func_0x1800d0090(&local_208,&local_198,DAT_1806b286c,&local_188);
                local_188 = CONCAT44(_UNK_1806b2884,_DAT_1806b2880);
                puStack_180 = (uint8_t *)CONCAT44(_UNK_1806b288c,_UNK_1806b2888);
                auArr_43._4_4_ = uVal_51;
                auArr_43._0_4_ = fVal_46;
                auArr_43._8_4_ = uVal_52;
                auArr_43._12_4_ = uVal_53;
                auArr_42 = insertps(auArr_43,ZEXT416((uint)fStack_11c),0x10);
                local_198 = (uint8_t *)CONCAT44(fStack_11c + _DAT_1806c8920,fVal_49);
                local_208 = CONCAT44(auArr_42._4_4_ + _UNK_1806c8934,auArr_42._0_4_ + _DAT_1806c8930);
                func_0x1800d0090(&local_208,&local_198,DAT_1806b286c);
                DAT_1808402b0 = DAT_1808402b0 + _DAT_1806c8860;
                if (0xf < (uint64_t)local_108._8_8_) {
                  uVal_16 = local_108._8_8_ + 1;
                  lVal_30 = (int64_t)_local_118;
                  if (0xfff < uVal_16) {
                    lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
                    if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30))
                    goto LAB_1803bb3b4;
                    uVal_16 = local_108._8_8_ + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_30,uVal_16);
                }
                uVal_16 = uStack_140;
                goto joined_r0x0001803ba199;
              }
              goto LAB_1803bb43c;
            }
            local_198._0_4_ = local_120;
            local_198._4_4_ = fStack_11c;
            fVal_38 = (float)func_0x1800cd3b0(local_158);
            local_198._0_4_ = fVal_38 + DAT_1806b5c70 + (float)local_198;
            fVal_38 = (float)func_0x1800cfa00();
            local_198 = (uint8_t *)
                        CONCAT44(fVal_38 * DAT_1806aeae4 + local_198._4_4_,(float)local_198);
            fVal_48 = (fVal_48 / DAT_1806c3c18) * DAT_1806b28c0;
            local_188 = CONCAT44(_UNK_1806b5b34,_DAT_1806b5b30);
            puStack_180 = (uint8_t *)CONCAT44(_UNK_1806b5b3c,_UNK_1806b5b38);
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x125e8) == '\0') {
              lVal_30 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_30 + 0x125e8) = 1;
              *(uint8_t *)(lVal_30 + 0x125e4) = 1;
              *(uint32_t *)(lVal_30 + 0x125e0) = 0xff1cb0f1;
              func_0x180673140(&LAB_180430590);
            }
            _local_118 = ZEXT816(0);
            if (*(char *)(local_230 + 1) == '\x01') {
              *local_230 = *local_230 ^ 0xff4bf5bf;
              *(uint8_t *)(local_230 + 1) = 0;
            }
            local_108._0_16_ = _local_118;
            sz_20 = strlen((char *)local_230);
            if (-1 < (int64_t)sz_20) {
              uVal_15 = 0xf;
              pU64_59 = local_118;
              if (0xf < sz_20) {
                uVal_22 = sz_20 | 0xf;
                uVal_15 = 0x16;
                if (0x16 < uVal_22) {
                  uVal_15 = uVal_22;
                }
                if (uVal_22 < 0xfff) {
                  pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
                }
                else {
                  lVal_30 = func_0x180672de0(uVal_15 + 0x28);
                  pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_59 + -8) = lVal_30;
                }
                _local_118 = pU64_59;
              }
              local_108._8_8_ = uVal_15;
              local_108._0_8_ = sz_20;
              func_0x1806aa960(pU64_59,local_230,sz_20);
              pU64_59[sz_20] = 0;
              uVal_63 = CONCAT11(uVal_64,1);
              uVal_62 = uVal_62 & 0xffffff00;
              uVal_16 = uVal_16 & 0xffffffffffffff00;
              uVal_18 = CONCAT44(uVal_39,3);
              uVal_17 = CONCAT44(uVal_65,0x3f800000);
              func_0x1800d02c0(&local_198,local_118,&local_188,fVal_48,uVal_17,uVal_18,uVal_16,uVal_62,
                            uVal_63);
              uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
              uVal_39 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
              if (0xf < (uint64_t)local_108._8_8_) {
                uVal_15 = local_108._8_8_ + 1;
                lVal_30 = (int64_t)_local_118;
                if (0xfff < uVal_15) {
                  lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
                  if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
                  uVal_15 = local_108._8_8_ + 0x28;
                }
                thunk_FUN_180695dd0(lVal_30,uVal_15);
              }
              goto LAB_1803b9dfa;
            }
            goto LAB_1803bb460;
          }
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x125dc
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x125dc) = 1;
            *(uint8_t *)(lVal_30 + 0x125d8) = 1;
            *(uint32_t *)(lVal_30 + 0x125d4) = 0xf34be4f;
            func_0x180673140(&LAB_180430570);
            ch_12 = *(char *)(local_268 + 1);
          }
          else {
            ch_12 = *(char *)(local_268 + 1);
          }
          if (ch_12 == '\x01') {
            *local_268 = *local_268 ^ 0xf63fb01;
            *(uint8_t *)(local_268 + 1) = 0;
          }
          _local_118 = ZEXT816(0);
          local_108._0_16_ = _local_118;
          sz_20 = strlen((char *)local_268);
          if (-1 < (int64_t)sz_20) {
            uVal_15 = 0xf;
            pU64_59 = local_118;
            if (0xf < sz_20) {
              uVal_22 = sz_20 | 0xf;
              uVal_15 = 0x16;
              if (0x16 < uVal_22) {
                uVal_15 = uVal_22;
              }
              if (uVal_22 < 0xfff) {
                pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_15 + 0x28);
                pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_59 + -8) = lVal_30;
              }
              _local_118 = pU64_59;
            }
            local_108._8_8_ = uVal_15;
            local_108._0_8_ = sz_20;
            func_0x1806aa960(pU64_59,local_268,sz_20);
            pU64_59[sz_20] = 0;
            fVal_36 = (float)func_0x1800cd3b0(local_118);
            fVal_36 = fVal_36 + DAT_1806b5c70;
            if (0xf < (uint64_t)local_108._8_8_) {
              uVal_15 = local_108._8_8_ + 1;
              lVal_30 = (int64_t)_local_118;
              if (0xfff < uVal_15) {
                lVal_30 = *(int64_t *)((int64_t)_local_118 + -8);
                if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_15 = local_108._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_15);
            }
            fVal_48 = fVal_48 + fVal_36;
            goto LAB_1803b845d;
          }
          goto LAB_1803bb466;
        }
        fStack_114 = (float)_UNK_1806c88f4;
        local_118 = (uint8_t  [4])_DAT_1806c88f0;
        uStack_110._0_4_ = (float)_UNK_1806c88f8;
        uStack_110._4_4_ = (float)_UNK_1806c88fc;
        uVal_16 = (uint64_t)uVal_60 << 8;
        uVal_39 = (uint32_t)((uint64_t)local_118 >> 0x20);
        uVal_62 = 0x403570a3;
        func_0x1800d2e40();
        if (DAT_18083ef17 == 1) {
          DAT_180840580 = ptr2_Long_3;
          if (*(byte *)(ptr2_Long_3 + 0x13) != 0) {
            DAT_180840580 = (int64_t **)0x0;
            fVal_48 = DAT_1806ae7b0;
          }
          *(byte *)(ptr2_Long_3 + 0x13) = *(byte *)(ptr2_Long_3 + 0x13) ^ 1;
          DAT_18083ef17 = 0;
          DAT_18083cb10 = fVal_48;
        }
        if (DAT_18083ef19 != 1) goto LAB_1803b6ba7;
        DAT_18083ef19 = 0;
        if (*(char *)(ptr2_Long_3 + 0x12) == '\x04') {
          *(uint32_t *)ptr2_Long_3[9] = *(uint32_t *)(ptr2_Long_3 + 10);
          goto LAB_1803b6ba7;
        }
        goto LAB_1803bb4cc;
      case 8:
        local_15c = DAT_1808402b4;
        fVal_48 = DAT_1808402c0 / DAT_1806c886c;
        fVal_46 = (float)func_0x1800cd3b0(ptr2_Long_3);
        if ((*(char *)(ptr2_Long_3 + 0x2e) == '\x01') && (*(char *)(DAT_180840570 + 0x2b2) == '\x01')) {
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12654
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x12654) = 1;
            *(uint8_t *)(lVal_30 + 0x12650) = 1;
            *(uint32_t *)(lVal_30 + 0x1264c) = 0xf9ce32db;
            func_0x180673140(&LAB_1804306d0);
            ch_12 = *(char *)(local_290 + 1);
          }
          else {
            ch_12 = *(char *)(local_290 + 1);
          }
          if (ch_12 == '\x01') {
            *local_290 = *local_290 ^ 0xf9997795;
            *(uint8_t *)(local_290 + 1) = 0;
          }
          _local_158 = auArr_47;
          _local_148 = auArr_47;
          sz_20 = strlen((char *)local_290);
          if (-1 < (int64_t)sz_20) {
            uVal_16 = 0xf;
            pU64_31 = local_158;
            if (0xf < sz_20) {
              uVal_15 = sz_20 | 0xf;
              uVal_16 = 0x16;
              if (0x16 < uVal_15) {
                uVal_16 = uVal_15;
              }
              if (uVal_15 < 0xfff) {
                pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_16 + 0x28);
                pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_31 + -8) = lVal_30;
              }
              local_158 = (uint8_t  [8])pU64_31;
            }
            uStack_140 = uVal_16;
            _local_148 = (int64_t *)sz_20;
            func_0x1806aa960(pU64_31,local_290,sz_20);
            pU64_31[sz_20] = 0;
            fVal_35 = (float)func_0x1800cd3b0(local_158);
            fVal_35 = fVal_35 + DAT_1806b5c70;
            if (0xf < uStack_140) {
              uVal_16 = uStack_140 + 1;
              lVal_30 = (int64_t)local_158;
              if (0xfff < uVal_16) {
                lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_16 = uStack_140 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_16);
            }
            fVal_46 = fVal_46 + fVal_35;
            goto LAB_1803b7407;
          }
          goto LAB_1803bb472;
        }
LAB_1803b7407:
        fVal_38 = fStack_11c;
        fVal_35 = local_120;
        fVal_36 = (float)func_0x1800cfa00();
        fVal_48 = (((fVal_48 + (float)local_1d8._0_4_) - fVal_49) / fVal_46) * DAT_1806c3c18;
        fVal_46 = DAT_1806c3c18;
        if (fVal_48 <= DAT_1806c3c18) {
          fVal_46 = fVal_48;
        }
        local_188 = CONCAT44(fVal_38 + fVal_36 * DAT_1806aeae4,fVal_35);
        uVal_63 = CONCAT11(uVal_64,1);
        uVal_62 = uVal_62 & 0xffffff00;
        uVal_16 = (uint64_t)pU64_59 & 0xffffffffffffff00;
        uVal_18 = CONCAT44(uVal_51,3);
        uVal_17 = CONCAT44(uVal_65,0x3f800000);
        func_0x1800d02c0(&local_188,ptr2_Long_3,&DAT_1808402a0,fVal_46,uVal_17,uVal_18,uVal_16,uVal_62,uVal_63);
        auArr_42 = _local_1b8;
        uVal_51 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
        uVal_64 = (uint8_t)((ushort)uVal_63 >> 8);
        uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
        if ((*(char *)(ptr2_Long_3 + 0x2e) == '\x01') && (*(char *)(DAT_180840570 + 0x2b2) == '\x01')) {
          auStack_1b4._0_4_ = fStack_11c;
          local_1b8 = (uint8_t  [4])local_120;
          auStack_1b4._4_8_ = auArr_42._8_8_;
          fVal_48 = (float)func_0x1800cd3b0(ptr2_Long_3);
          local_1b8 = (uint8_t  [4])(fVal_48 + DAT_1806b5c70 + (float)local_1b8);
          fVal_48 = (float)func_0x1800cfa00();
          auStack_1b4._0_4_ = fVal_48 * DAT_1806aeae4 + (float)auStack_1b4._0_4_;
          fVal_46 = (fVal_46 / DAT_1806c3c18) * DAT_1806b28c0;
          fStack_114 = (float)_UNK_1806b5b34;
          local_118 = (uint8_t  [4])_DAT_1806b5b30;
          uStack_110._0_4_ = (float)_UNK_1806b5b38;
          uStack_110._4_4_ = (float)_UNK_1806b5b3c;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12660
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x12660) = 1;
            *(uint8_t *)(lVal_30 + 0x1265c) = 1;
            *(uint32_t *)(lVal_30 + 0x12658) = 0xa3e256fd;
            func_0x180673140(&LAB_1804306f0);
            ch_12 = *(char *)(local_258 + 1);
          }
          else {
            ch_12 = *(char *)(local_258 + 1);
          }
          if (ch_12 == '\x01') {
            *local_258 = *local_258 ^ 0xa3b513b3;
            *(uint8_t *)(local_258 + 1) = 0;
          }
          _local_158 = auArr_47;
          _local_148 = auArr_47;
          sz_20 = strlen((char *)local_258);
          if (-1 < (int64_t)sz_20) {
            uVal_15 = 0xf;
            pU64_59 = local_158;
            if (0xf < sz_20) {
              uVal_22 = sz_20 | 0xf;
              uVal_15 = 0x16;
              if (0x16 < uVal_22) {
                uVal_15 = uVal_22;
              }
              if (uVal_22 < 0xfff) {
                pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_15 + 0x28);
                pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_59 + -8) = lVal_30;
              }
              local_158 = (uint8_t  [8])pU64_59;
            }
            uStack_140 = uVal_15;
            _local_148 = (int64_t *)sz_20;
            func_0x1806aa960(pU64_59,local_258,sz_20);
            pU64_59[sz_20] = 0;
            uVal_63 = CONCAT11(uVal_64,1);
            uVal_16 = uVal_16 & 0xffffffffffffff00;
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d02c0(local_1b8,local_158,local_118,fVal_46,uVal_17,CONCAT44(uVal_51,3),uVal_16,
                          uVal_62 & 0xffffff00,uVal_63);
            uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
            if (0xf < uStack_140) {
              uVal_15 = uStack_140 + 1;
              lVal_30 = (int64_t)local_158;
              if (0xfff < uVal_15) {
                lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_15 = uStack_140 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_15);
            }
            goto LAB_1803b870b;
          }
          goto LAB_1803bb46c;
        }
LAB_1803b870b:
        fVal_46 = fStack_11c;
        fVal_48 = DAT_1808402c0 / DAT_1806c886c + (float)local_1d8._0_4_;
        fVal_49 = (float)local_1d8._0_4_ + DAT_1806c3800;
        uVal_61 = (undefined7)(uVal_16 >> 8);
        if ((((DAT_1808402c8 <= fVal_48) || (DAT_1808402cc <= fStack_11c)) ||
            (fVal_49 <= DAT_1808402c8)) ||
           ((fStack_11c + DAT_1806c8750 <= DAT_1808402cc || (DAT_180840580 != (int64_t **)0x0)))) {
          if (DAT_18083ef17 == 1) {
            DAT_1808405a0 = '\0';
          }
          uVal_51 = 1;
          uVal_62 = 0x403570a3;
          uVal_16 = CONCAT71(uVal_61,0xf);
          func_0x1800d2e40();
LAB_1803b88cc:
          if ((DAT_1808405a0 == '\x01') && (DAT_1808402d8 == ptr2_Long_3)) {
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x126ac) == '\0') {
              lVal_30 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_30 + 0x126ac) = 1;
              *(uint8_t *)(lVal_30 + 0x126a8) = 1;
              *(uint32_t *)(lVal_30 + 0x126a4) = 0x733f21eb;
              func_0x180673140(&LAB_180430770);
              ch_12 = *(char *)((int64_t)local_2a0 + 4);
            }
            else {
              ch_12 = *(char *)((int64_t)local_2a0 + 4);
            }
            if (ch_12 == '\x01') {
              *(uint *)local_2a0 = *(uint *)local_2a0 ^ 0x73110fc5;
              *(uint8_t *)((int64_t)local_2a0 + 4) = 0;
            }
            _local_158 = auArr_47;
            _local_148 = auArr_47;
            sz_20 = strlen((char *)local_2a0);
            if (-1 < (int64_t)sz_20) {
              uVal_15 = 0xf;
              pU64_59 = local_158;
              if (0xf < sz_20) {
                uVal_22 = sz_20 | 0xf;
                uVal_15 = 0x16;
                if (0x16 < uVal_22) {
                  uVal_15 = uVal_22;
                }
                if (uVal_22 < 0xfff) {
                  pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
                }
                else {
                  lVal_30 = func_0x180672de0(uVal_15 + 0x28);
                  pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_59 + -8) = lVal_30;
                }
                local_158 = (uint8_t  [8])pU64_59;
              }
              uStack_140 = uVal_15;
              _local_148 = (int64_t *)sz_20;
              pU64_21 = local_2a0;
LAB_1803ba0b1:
              func_0x1806aa960(pU64_59,pU64_21,sz_20);
              pU64_59[sz_20] = 0;
              goto LAB_1803ba0be;
            }
            goto LAB_1803bb448;
          }
          if (*(int *)ptr2_Long_3[9] != 0) {
            func_0x1802ccf40(local_158);
LAB_1803ba0be:
            uVal_52 = DAT_1806b67e0;
            fVal_35 = (float)func_0x1800cfa00();
            fVal_38 = (float)func_0x1800cd3b0(local_158);
            fStack_114 = (fVal_46 + _DAT_1806c8870) - fVal_35 * DAT_1806aeae4;
            local_118 = (uint8_t  [4])
                        (((fVal_49 - fVal_48) * DAT_1806aeae4 + fVal_48) - fVal_38 * DAT_1806aeae4);
            pU64_59 = (uint8_t *)(uVal_16 & 0xffffffffffffff00);
            pU64_58 = (uint64_t *)CONCAT44(uVal_51,3);
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d00e0(local_118,local_158,&DAT_1808402a0,uVal_52,uVal_17,pU64_58,pU64_59);
            DAT_1808402b0 = DAT_1808402b0 + _DAT_1806c8860;
            uVal_16 = uStack_140;
            fVal_46 = (float)local_1d8._0_4_;
            fVal_48 = local_15c;
joined_r0x0001803ba199:
            if (0xf < uVal_16) goto LAB_1803ba19f;
            goto switchD_1803b5f31_caseD_6;
          }
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x126bc
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x126bc) = 1;
            *(uint8_t *)(lVal_30 + 0x126b8) = 1;
            *(uint64_t *)(lVal_30 + 0x126b0) = 0xa1ebcb421c736190;
            func_0x180673140(&LAB_180430790);
            ch_12 = *(char *)(local_228 + 1);
          }
          else {
            ch_12 = *(char *)(local_228 + 1);
          }
          if (ch_12 == '\x01') {
            *local_228 = *local_228 ^ 0xa18fa53773110fc5;
            *(uint8_t *)(local_228 + 1) = 0;
          }
          _local_158 = auArr_47;
          _local_148 = auArr_47;
          sz_20 = strlen((char *)local_228);
          if (-1 < (int64_t)sz_20) {
            uVal_15 = 0xf;
            pU64_59 = local_158;
            if (0xf < sz_20) {
              uVal_22 = sz_20 | 0xf;
              uVal_15 = 0x16;
              if (0x16 < uVal_22) {
                uVal_15 = uVal_22;
              }
              if (uVal_22 < 0xfff) {
                pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_15 + 0x28);
                pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_59 + -8) = lVal_30;
              }
              local_158 = (uint8_t  [8])pU64_59;
            }
            uStack_140 = uVal_15;
            _local_148 = (int64_t *)sz_20;
            pU64_21 = local_228;
            goto LAB_1803ba0b1;
          }
          goto LAB_1803bb4b4;
        }
        uVal_51 = 1;
        uVal_62 = 0x403570a3;
        uVal_16 = CONCAT71(uVal_61,0xf);
        func_0x1800d2e40();
        if ((DAT_18083ef17 == 1) && (DAT_1808405a0 == '\0')) {
          DAT_1808405a0 = '\x01';
          DAT_18083ef17 = 0;
          DAT_1808402d8 = ptr2_Long_3;
        }
        if (DAT_18083ef18 != '\x01') goto LAB_1803b88cc;
        if (local_2f0 != DAT_180840570) {
LAB_1803bad04:
          *(uint32_t *)ptr2_Long_3[9] = 0;
          DAT_18083ef18 = '\0';
          goto LAB_1803b88cc;
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x1266c) == '\0') {
          lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_30 + 0x1266c) = 1;
          *(uint8_t *)(lVal_30 + 0x12668) = 1;
          *(uint32_t *)(lVal_30 + 0x12664) = 0x6b965c86;
          func_0x180673140(&LAB_180430710);
          if (*(char *)(local_220 + 1) != '\x01') goto LAB_1803baa6f;
LAB_1803b884d:
          *local_220 = *local_220 ^ 0x6bef39cd;
          *(uint8_t *)(local_220 + 1) = 0;
          _local_158 = auArr_47;
          uVal_15 = strlen((char *)local_220);
        }
        else {
          if (*(char *)(local_220 + 1) == '\x01') goto LAB_1803b884d;
LAB_1803baa6f:
          _local_158 = auArr_47;
          uVal_15 = strlen((char *)local_220);
        }
        if (-1 < (int64_t)uVal_15) {
          uVal_22 = 0xf;
          pU64_59 = local_158;
          if (0xf < uVal_15) {
            uVal_25 = uVal_15 | 0xf;
            uVal_22 = 0x16;
            if (0x16 < uVal_25) {
              uVal_22 = uVal_25;
            }
            if (uVal_25 < 0xfff) {
              pU64_59 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
            }
            else {
              lVal_30 = func_0x180672de0(uVal_22 + 0x28);
              pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_59 + -8) = lVal_30;
            }
            local_158 = (uint8_t  [8])pU64_59;
          }
          uStack_140 = uVal_22;
          _local_148 = (int64_t *)uVal_15;
          func_0x1806aa960(pU64_59,local_220,uVal_15);
          pU64_59[uVal_15] = 0;
          pU64_59 = (uint8_t *)local_158;
          uVal_15 = uStack_140;
          pU64_31 = local_158;
          if (0xf < uStack_140) {
            pU64_31 = (uint8_t *)local_158;
          }
          ptr2_Long_28 = ptr2_Long_3;
          if ((int64_t *)0xf < ptr2_Long_3[3]) {
            ptr2_Long_28 = (int64_t **)*ptr2_Long_3;
          }
          if (ptr2_Long_3[2] == _local_148) {
            if (_local_148 == (int64_t *)0x0) {
              bFlag_34 = true;
            }
            else {
              iVal_33 = memcmp(ptr2_Long_28,pU64_31,(size_t)_local_148);
              bFlag_34 = iVal_33 == 0;
            }
          }
          else {
            bFlag_34 = false;
          }
          if (0xf < uVal_15) {
            uVal_22 = uVal_15 + 1;
            pU64_31 = pU64_59;
            if (0xfff < uVal_22) {
              pU64_31 = *(uint8_t **)(pU64_59 + -8);
              if ((uint8_t *)0x1f < pU64_59 + (-8 - (int64_t)pU64_31)) goto LAB_1803bb3b4;
              uVal_22 = uVal_15 + 0x28;
            }
            thunk_FUN_180695dd0(pU64_31,uVal_22);
          }
          if (bFlag_34) {
            uVal_17 = *(uint64_t *)(DAT_180840a58 + 0x648);
            local_308 = PTR_DAT_1806b6f30._0_4_;
            uStack_304 = PTR_DAT_1806b6f30._4_4_;
            uStack_300 = _UNK_1806b6f38;
            uStack_2fc = _UNK_1806b6f3c;
            local_138 = _DAT_1806cb83d;
            uStack_134 = _UNK_1806cb841;
            uStack_130 = _UNK_1806cb845;
            uStack_12c = _UNK_1806cb849;
            uStack_144 = _UNK_1806cb831;
            local_148 = (uint8_t  [4])_DAT_1806cb82d;
            uStack_140._0_4_ = _UNK_1806cb835;
            uStack_140._4_4_ = _UNK_1806cb839;
            local_158._4_4_ = _UNK_1806cb821;
            local_158._0_4_ = _DAT_1806cb81d;
            uStack_150._0_4_ = (float)_UNK_1806cb825;
            uStack_150._4_4_ = (float)_UNK_1806cb829;
            local_128 = 0xd5;
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x126a0) == '\0') {
              lVal_30 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_30 + 0x126a0) = 1;
              func_0x1802148a0(lVal_30 + 0x1266d,local_158);
              func_0x180673140(&LAB_180430730);
              auArr_47 = ZEXT816(0);
              ch_12 = *(char *)((int64_t)local_218 + 0x31);
              uVal_8 = _DAT_1806c8880;
              uVal_9 = _UNK_1806c8884;
              uVal_10 = _UNK_1806c8888;
              uVal_11 = _UNK_1806c888c;
            }
            else {
              ch_12 = *(char *)((int64_t)local_218 + 0x31);
              uVal_8 = _DAT_1806c8880;
              uVal_9 = _UNK_1806c8884;
              uVal_10 = _UNK_1806c8888;
              uVal_11 = _UNK_1806c888c;
            }
            _DAT_1806c8880 = uVal_8;
            _UNK_1806c8884 = uVal_9;
            _UNK_1806c8888 = uVal_10;
            _UNK_1806c888c = uVal_11;
            if (ch_12 == '\x01') {
              *local_218 = *local_218 ^ uVal_8;
              local_218[1] = local_218[1] ^ uVal_9;
              local_218[2] = local_218[2] ^ uVal_10;
              local_218[3] = local_218[3] ^ uVal_11;
              local_218[4] = local_218[4] ^ uVal_8;
              local_218[5] = local_218[5] ^ uVal_9;
              local_218[6] = local_218[6] ^ uVal_10;
              local_218[7] = local_218[7] ^ uVal_11;
              auArr_42._4_4_ = local_218[9] ^ uVal_9;
              auArr_42._0_4_ = local_218[8] ^ uVal_8;
              auArr_42._8_4_ = local_218[10] ^ uVal_10;
              auArr_42._12_4_ = local_218[0xb] ^ uVal_11;
              *(uint8_t (*)[16])(local_218 + 8) = auArr_42;
              *(byte *)(local_218 + 0xc) = *(byte *)(local_218 + 0xc) ^ 0xd5;
              *(uint8_t *)((int64_t)local_218 + 0x31) = 0;
            }
            _local_158 = auArr_47;
            _local_148 = auArr_47;
            sz_20 = strlen((char *)local_218);
            if ((int64_t)sz_20 < 0) goto LAB_1803bb4d8;
            uVal_15 = 0xf;
            pU64_59 = local_158;
            if (0xf < sz_20) {
              uVal_22 = sz_20 | 0xf;
              uVal_15 = 0x16;
              if (0x16 < uVal_22) {
                uVal_15 = uVal_22;
              }
              if (uVal_22 < 0xfff) {
                pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_15 + 0x28);
                pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_59 + -8) = lVal_30;
              }
              local_158 = (uint8_t  [8])pU64_59;
            }
            uStack_140 = uVal_15;
            _local_148 = (int64_t *)sz_20;
            func_0x1806aa960(pU64_59,local_218,sz_20);
            pU64_59[sz_20] = 0;
            func_0x180143aa0(uVal_17,local_158,&local_308);
            if (0xf < uStack_140) {
              uVal_15 = uStack_140 + 1;
              lVal_30 = (int64_t)local_158;
              if (0xfff < uVal_15) {
                lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_15 = uStack_140 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_15);
            }
            DAT_18083ef18 = '\0';
            goto LAB_1803b88cc;
          }
          goto LAB_1803bad04;
        }
        break;
      case 9:
        fVal_46 = DAT_1808402c0 / DAT_1806c886c;
        fVal_45 = (float)func_0x1800cd3b0(ptr2_Long_3);
        if ((*(char *)(ptr2_Long_3 + 0x2e) == '\x01') && (*(char *)(DAT_180840570 + 0x2b2) == '\x01')) {
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x126c8
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x126c8) = 1;
            *(uint8_t *)(lVal_30 + 0x126c4) = 1;
            *(uint32_t *)(lVal_30 + 0x126c0) = 0xc5ba546b;
            func_0x180673140(&LAB_1804307b0);
            ch_12 = *(char *)(local_298 + 1);
          }
          else {
            ch_12 = *(char *)(local_298 + 1);
          }
          if (ch_12 == '\x01') {
            *local_298 = *local_298 ^ 0xc5ed1125;
            *(uint8_t *)(local_298 + 1) = 0;
          }
          _local_158 = auArr_47;
          _local_148 = auArr_47;
          sz_20 = strlen((char *)local_298);
          if (-1 < (int64_t)sz_20) {
            uVal_16 = 0xf;
            pU64_31 = local_158;
            if (0xf < sz_20) {
              uVal_15 = sz_20 | 0xf;
              uVal_16 = 0x16;
              if (0x16 < uVal_15) {
                uVal_16 = uVal_15;
              }
              if (uVal_15 < 0xfff) {
                pU64_31 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_16 + 0x28);
                pU64_31 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_31 + -8) = lVal_30;
              }
              local_158 = (uint8_t  [8])pU64_31;
            }
            uStack_140 = uVal_16;
            _local_148 = (int64_t *)sz_20;
            func_0x1806aa960(pU64_31,local_298,sz_20);
            pU64_31[sz_20] = 0;
            fVal_35 = (float)func_0x1800cd3b0(local_158);
            fVal_35 = fVal_35 + DAT_1806b5c70;
            if (0xf < uStack_140) {
              uVal_16 = uStack_140 + 1;
              lVal_30 = (int64_t)local_158;
              if (0xfff < uVal_16) {
                lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_16 = uStack_140 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_16);
            }
            fVal_45 = fVal_45 + fVal_35;
            goto LAB_1803b769c;
          }
          goto LAB_1803bb48a;
        }
LAB_1803b769c:
        fVal_38 = fStack_11c;
        fVal_35 = local_120;
        fVal_36 = (float)func_0x1800cfa00();
        fVal_46 = (((fVal_46 + (float)local_1d8._0_4_) - fVal_49) / fVal_45) * DAT_1806c3c18;
        fVal_45 = DAT_1806c3c18;
        if (fVal_46 <= DAT_1806c3c18) {
          fVal_45 = fVal_46;
        }
        local_188 = CONCAT44(fVal_38 + fVal_36 * DAT_1806aeae4,fVal_35);
        uVal_63 = CONCAT11(uVal_64,1);
        uVal_62 = uVal_62 & 0xffffff00;
        uVal_16 = (uint64_t)pU64_59 & 0xffffffffffffff00;
        uVal_18 = CONCAT44(uVal_51,3);
        uVal_17 = CONCAT44(uVal_65,0x3f800000);
        func_0x1800d02c0(&local_188,ptr2_Long_3,&DAT_1808402a0,fVal_45,uVal_17,uVal_18,uVal_16,uVal_62,uVal_63);
        auArr_42 = _local_1b8;
        uVal_51 = (uint32_t)((uint64_t)uVal_18 >> 0x20);
        uVal_64 = (uint8_t)((ushort)uVal_63 >> 8);
        uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
        if ((*(char *)(ptr2_Long_3 + 0x2e) == '\x01') && (*(char *)(DAT_180840570 + 0x2b2) == '\x01')) {
          auStack_1b4._0_4_ = fStack_11c;
          local_1b8 = (uint8_t  [4])local_120;
          auStack_1b4._4_8_ = auArr_42._8_8_;
          fVal_46 = (float)func_0x1800cd3b0(ptr2_Long_3);
          local_1b8 = (uint8_t  [4])(fVal_46 + DAT_1806b5c70 + (float)local_1b8);
          fVal_46 = (float)func_0x1800cfa00();
          auStack_1b4._0_4_ = fVal_46 * DAT_1806aeae4 + (float)auStack_1b4._0_4_;
          fVal_45 = (fVal_45 / DAT_1806c3c18) * DAT_1806b28c0;
          fStack_114 = (float)_UNK_1806b5b34;
          local_118 = (uint8_t  [4])_DAT_1806b5b30;
          uStack_110._0_4_ = (float)_UNK_1806b5b38;
          uStack_110._4_4_ = (float)_UNK_1806b5b3c;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x126d4
                       ) == '\0') {
            lVal_30 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_30 + 0x126d4) = 1;
            *(uint8_t *)(lVal_30 + 0x126d0) = 1;
            *(uint32_t *)(lVal_30 + 0x126cc) = 0x7ff882b5;
            func_0x180673140(&LAB_1804307d0);
            ch_12 = *(char *)(local_260 + 1);
          }
          else {
            ch_12 = *(char *)(local_260 + 1);
          }
          if (ch_12 == '\x01') {
            *local_260 = *local_260 ^ 0x7fafc7fb;
            *(uint8_t *)(local_260 + 1) = 0;
          }
          _local_158 = auArr_47;
          _local_148 = auArr_47;
          sz_20 = strlen((char *)local_260);
          if (-1 < (int64_t)sz_20) {
            uVal_15 = 0xf;
            pU64_59 = local_158;
            if (0xf < sz_20) {
              uVal_22 = sz_20 | 0xf;
              uVal_15 = 0x16;
              if (0x16 < uVal_22) {
                uVal_15 = uVal_22;
              }
              if (uVal_22 < 0xfff) {
                pU64_59 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
              }
              else {
                lVal_30 = func_0x180672de0(uVal_15 + 0x28);
                pU64_59 = (uint8_t *)(lVal_30 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_59 + -8) = lVal_30;
              }
              local_158 = (uint8_t  [8])pU64_59;
            }
            uStack_140 = uVal_15;
            _local_148 = (int64_t *)sz_20;
            func_0x1806aa960(pU64_59,local_260,sz_20);
            pU64_59[sz_20] = 0;
            uVal_63 = CONCAT11(uVal_64,1);
            uVal_16 = uVal_16 & 0xffffffffffffff00;
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d02c0(local_1b8,local_158,local_118,fVal_45,uVal_17,CONCAT44(uVal_51,3),uVal_16,
                          uVal_62 & 0xffffff00,uVal_63);
            uVal_65 = (uint32_t)((uint64_t)uVal_17 >> 0x20);
            if (0xf < uStack_140) {
              uVal_15 = uStack_140 + 1;
              lVal_30 = (int64_t)local_158;
              if (0xfff < uVal_15) {
                lVal_30 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_30)) goto LAB_1803bb3b4;
                uVal_15 = uStack_140 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_30,uVal_15);
            }
            goto LAB_1803b8b45;
          }
          goto LAB_1803bb47e;
        }
LAB_1803b8b45:
        fVal_45 = fStack_11c;
        fVal_49 = DAT_1808402c0 / DAT_1806c886c + (float)local_1d8._0_4_;
        fVal_46 = (float)local_1d8._0_4_ + DAT_1806c3800;
        uVal_61 = (undefined7)(uVal_16 >> 8);
        if ((((DAT_1808402c8 <= fVal_49) || (DAT_1808402cc <= fStack_11c)) ||
            (fVal_46 <= DAT_1808402c8)) ||
           ((fStack_11c + DAT_1806c8750 <= DAT_1808402cc || (DAT_180840580 != (int64_t **)0x0)))) {
          if (DAT_18083ef17 == 1) {
            DAT_1808405a0 = '\0';
          }
          uVal_51 = 1;
          uVal_62 = 0x403570a3;
          uVal_16 = CONCAT71(uVal_61,0xf);
          func_0x1800d2e40();
LAB_1803b8ca1:
          if (*(char *)(ptr2_Long_3 + 0x1b) == '\a') {
            fVal_35 = (float)func_0x1800cfa00();
            fVal_38 = (float)func_0x1800cd3b0(ptr2_Long_3 + 0x13);
            local_158._4_4_ = (fVal_45 + _DAT_1806c8870) - fVal_35 * DAT_1806aeae4;
            local_158._0_4_ = ((fVal_46 - fVal_49) * DAT_1806aeae4 + fVal_49) - fVal_38 * DAT_1806aeae4;
            pU64_59 = (uint8_t *)(uVal_16 & 0xffffffffffffff00);
            pU64_58 = (uint64_t *)CONCAT44(uVal_51,3);
            uVal_17 = CONCAT44(uVal_65,0x3f800000);
            func_0x1800d00e0(local_158,ptr2_Long_3 + 0x13,&DAT_1808402a0,DAT_1806b67e0,uVal_17,pU64_58,
                          pU64_59,uVal_62);
            DAT_1808402b0 = DAT_1808402b0 + _DAT_1806c8860;
            fVal_45 = 0.0;
            fVal_46 = (float)local_1d8._0_4_;
            goto joined_r0x0001803b8d91;
          }
          goto LAB_1803bb3fa;
        }
        uVal_51 = 1;
        uVal_62 = 0x403570a3;
        uVal_16 = CONCAT71(uVal_61,0xf);
        func_0x1800d2e40();
        if (DAT_18083ef17 != 1) goto LAB_1803b8ca1;
        if (*(char *)(ptr2_Long_3 + 0x12) == '\t') {
          if (ptr2_Long_3[0x11] != (int64_t *)0x0) {
            (**(func_ptr_t *)(*ptr2_Long_3[0x11] + 0x10))();
            DAT_18083ef17 = 0;
            goto LAB_1803b8ca1;
          }
          goto LAB_1803bb4c0;
        }
        goto LAB_1803bb4c6;
      }
      goto LAB_1803bb4d2;
    }
LAB_1803b5e40:
    iVal_33 = local_20c + 1;
  } while( true );
code_r0x0001803b5ab5:
  *puStack_1f0 = local_158;
  puStack_1f0 = puStack_1f0 + 1;
  pU64_57 = pU64_57 + 1;
  goto joined_r0x0001803b5a74;
}

// Unwind@1803bb4e0
void Unwind_1803bb4e0(void)
{
  func_0x180672f60(&DAT_180840578);
  return;
}

// Unwind@1803bb5c0
void Unwind_1803bb5c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x126a0) = 0;
  return;
}

// Unwind@1803bb6b0
void Unwind_1803bb6b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x126f0) = 0;
  return;
}

// Unwind@1803bb7a0
void Unwind_1803bb7a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bb880
void Unwind_1803bb880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bb960
void Unwind_1803bb960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bba40
void Unwind_1803bba40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bbb20
void Unwind_1803bbb20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bbc00
void Unwind_1803bbc00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bbce0
void Unwind_1803bbce0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bbdc0
void Unwind_1803bbdc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bbea0
void Unwind_1803bbea0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bbf80
void Unwind_1803bbf80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bc060
void Unwind_1803bc060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bc140
void Unwind_1803bc140(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bc220
void Unwind_1803bc220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bc300
void Unwind_1803bc300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bc3e0
void Unwind_1803bc3e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bc4c0
void Unwind_1803bc4c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bc5a0
void Unwind_1803bc5a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bc680
void Unwind_1803bc680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bc760
void Unwind_1803bc760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bc840
void Unwind_1803bc840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@1803bc920
void Unwind_1803bc920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bca00
void Unwind_1803bca00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803bcae0
void Unwind_1803bcae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bcbc0
void Unwind_1803bcbc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bcca0
void Unwind_1803bcca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bcd80
void Unwind_1803bcd80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@1803bce60
void Unwind_1803bce60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bcf40
void Unwind_1803bcf40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bd020
void Unwind_1803bd020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803bd100
void Unwind_1803bd100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}
