#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1803bd1e0
void Unwind_1803bd1e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800349b0(param_2 + 0x160);
  return;
}

// func_0x1803bd2c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803bd2c0(void)
{
  char *fnPtr_1;
  byte *_Str;
  func_ptr_t fnPtr_2;
  float fVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint8_t auArr_6 [12];
  uint8_t auArr_7 [16];
  char ch_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  uint8_t *pU64_14;
  char *fnPtr_15;
  uint64_t uVal_16;
  float fVal_17;
  float fVal_18;
  float fVal_19;
  float fVal_20;
  float fVal_21;
  float fVal_22;
  float fVal_23;
  float fVal_24;
  float fVal_25;
  uint32_t uVal_27;
  uint64_t uVal_26;
  uint32_t local_178;
  uint32_t uStack_174;
  uint8_t auStack_170 [7];
  uint8_t auStack_169 [8];
  uint8_t uStack_161;
  uint8_t local_160 [16];
  uint64_t local_150;
  uint64_t local_148;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float fStack_124;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  float local_110;
  float local_10c;
  uint8_t local_108 [8];
  uint64_t uStack_100;
  uint8_t local_f8 [24];
  uint64_t local_e0;
  
  local_e0 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_1808405b0) && (func_0x180672ec0(&DAT_1808405b0), DAT_1808405b0 == -1)) {
    DAT_1808405a8 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_1808405b0);
  }
  uVal_27 = DAT_1806c897c;
  fVal_3 = DAT_1806b5c70;
  fVal_23 = DAT_180840588 + DAT_18084058c;
  fVal_21 = (fVal_23 - DAT_1808402b8) * DAT_1806b286c;
  fVal_24 = DAT_1808402b8 + fVal_21;
  fVal_17 = (DAT_1808402bc - DAT_180840554) * DAT_1806b28b4;
  local_110 = DAT_180840554 + fVal_17;
  fVal_17 = DAT_1808402bc - fVal_17;
  local_10c = *(float *)(DAT_1808405a8 + 0x174);
  fVal_22 = fVal_24 + local_10c + DAT_1806ae650;
  fVal_20 = fVal_17 - local_110;
  fVal_25 = (fVal_20 - (local_10c + local_10c)) + DAT_1806b5ef4;
  fVal_18 = (float)func_0x1800cd3b0(&DAT_18083ca38,DAT_1806c897c,3);
  fVal_19 = (float)func_0x1800cfa00(uVal_27,3);
  local_138 = fVal_22 + fVal_25 + fVal_3;
  local_134 = (fVal_17 - fVal_20 * DAT_1806aeae4) - fVal_19 * DAT_1806aeae4;
  local_130 = local_138 + fVal_18 + fVal_3;
  local_12c = local_134;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_1808405c0) && (func_0x180672ec0(&DAT_1808405c0), DAT_1808405c0 == -1)) {
    DAT_1808405b8 = func_0x1800576d0();
    _Init_thread_footer(&DAT_1808405c0);
  }
  ch_8 = func_0x180057f30(DAT_1808405b8,500);
  if (ch_8 != '\0') {
    DAT_1808405b8 = func_0x1800576d0();
    DAT_18083cba0 = DAT_18083cba0 ^ 1;
  }
  fVal_18 = local_110;
  fVal_23 = fVal_23 - fVal_21;
  if ((((DAT_1808402c8 <= fVal_24) || (DAT_1808402cc <= local_110)) || (fVal_23 <= DAT_1808402c8)) ||
     (fVal_17 <= DAT_1808402cc)) {
    uVal_27 = 1;
    func_0x1800d36e0(fVal_24,local_110,fVal_23 - fVal_24,fVal_20,*(uint32_t *)(DAT_1808405a8 + 0x170),
                  &DAT_18083cb80,&DAT_18083cb70,*(uint32_t *)(DAT_1808405a8 + 0x174),0xf,
                  0x40000000);
  }
  else {
    uVal_27 = 1;
    func_0x1800d36e0(fVal_24,local_110,fVal_23 - fVal_24,fVal_20,*(uint32_t *)(DAT_1808405a8 + 0x170),
                  &DAT_18083cba4,&DAT_18083cb70,*(uint32_t *)(DAT_1808405a8 + 0x174),0xf,
                  0x40000000);
    if (DAT_18083ef17 == '\x01') {
      DAT_18083ef17 = '\0';
      DAT_1808402d0 = '\x01';
    }
  }
  auArr_6 = stack0xfffffffffffffe94;
  local_178 = _DAT_1806cb860;
  uStack_174 = _UNK_1806cb864;
  _auStack_170 = CONCAT44(_UNK_1806cb86c,_UNK_1806cb868);
  uStack_161 = auArr_6[11];
  auStack_169 = (uint8_t  [8])0xd9e4f8bccf4e7872;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1270c) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x1270c) = 1;
    func_0x18007d3c0(lVal_11 + 0x126f1,&local_178);
    func_0x180673140(&LAB_180430840);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x126f1);
  func_0x180441340(fnPtr_1);
  _local_108 = ZEXT816(0);
  sz_9 = strlen(fnPtr_1);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
  }
  else {
    uVal_16 = 0xf;
    fnPtr_15 = local_108;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        fnPtr_15 = (char *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        fnPtr_15 = (char *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_15 + -8) = lVal_11;
      }
      local_108 = (uint8_t  [8])fnPtr_15;
    }
    local_f8._8_8_ = uVal_16;
    local_f8._0_8_ = sz_9;
    func_0x1806aa960(fnPtr_15,fnPtr_1,sz_9);
    fnPtr_15[sz_9] = '\0';
    auArr_7 = local_f8._0_16_;
    uVal_10 = local_f8._8_8_;
    fnPtr_1 = (char *)local_108;
    uVal_16 = local_f8._0_8_;
    fnPtr_15 = local_108;
    if (0xf < (uint64_t)local_f8._8_8_) {
      fnPtr_15 = (char *)local_108;
    }
    local_178 = 0;
    local_160 = ZEXT816(0);
    _auStack_170 = ZEXT816(0);
    if (-1 < (int64_t)local_f8._0_8_) {
      if ((uint64_t)local_f8._0_8_ < 0x10) {
        local_160._8_8_ = 0xf;
        local_160._0_8_ = local_f8._0_8_;
        func_0x1806aa960(auStack_170,fnPtr_15);
        auStack_170[uVal_16] = 0;
        if (uVal_16 != 0) goto LAB_1803bd7b4;
        local_150 = 0;
        local_148 = 0xaf63bd4c8601b7df;
      }
      else {
        uVal_12 = local_f8._0_8_ | 0xf;
        uVal_13 = 0x16;
        if (0x16 < uVal_12) {
          uVal_13 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          uVal_12 = func_0x180672de0(uVal_13 + 1);
        }
        else {
          lVal_11 = func_0x180672de0(uVal_13 + 0x28);
          uVal_12 = lVal_11 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_12 - 8) = lVal_11;
        }
        _auStack_170 = uVal_12;
        local_160._8_8_ = uVal_13;
        local_160._0_8_ = uVal_16;
        func_0x1806aa960(uVal_12,fnPtr_15);
        *(uint8_t *)(uVal_12 + uVal_16) = 0;
LAB_1803bd7b4:
        uVal_13 = (uint64_t)(auArr_7._0_4_ & 7);
        if (uVal_16 - 1 < 7) {
          local_150 = 0xcbf29ce484222325;
LAB_1803bd86e:
          uVal_16 = 0;
          do {
            local_150 = local_150 * 0x100000001b3 ^ (int64_t)fnPtr_15[uVal_16];
            uVal_16 = uVal_16 + 1;
          } while (uVal_13 != uVal_16);
        }
        else {
          uVal_16 = uVal_16 & 0x7ffffffffffffff8;
          local_150 = 0xcbf29ce484222325;
          do {
            local_150 = (((((((local_150 * 0x100000001b3 ^ (int64_t)*fnPtr_15) * 0x100000001b3 ^
                             (int64_t)fnPtr_15[1]) * 0x100000001b3 ^ (int64_t)fnPtr_15[2]) *
                            0x100000001b3 ^ (int64_t)fnPtr_15[3]) * 0x100000001b3 ^
                          (int64_t)fnPtr_15[4]) * 0x100000001b3 ^ (int64_t)fnPtr_15[5]) *
                         0x100000001b3 ^ (int64_t)fnPtr_15[6]) * 0x100000001b3 ^
                        (int64_t)fnPtr_15[7];
            fnPtr_15 = fnPtr_15 + 8;
            uVal_16 = uVal_16 - 8;
          } while (uVal_16 != 0);
          if (uVal_13 != 0) goto LAB_1803bd86e;
        }
        local_148 = ((uint64_t)(byte)local_178 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_150;
      }
      if (0xf < uVal_10) {
        uVal_16 = uVal_10 + 1;
        fnPtr_15 = fnPtr_1;
        if (0xfff < uVal_16) {
          fnPtr_15 = *(char **)(fnPtr_1 + -8);
          if ((char *)0x1f < fnPtr_1 + (-8 - (int64_t)fnPtr_15)) goto LAB_1803bdc73;
          uVal_16 = uVal_10 + 0x28;
        }
        thunk_FUN_180695dd0(fnPtr_15,uVal_16);
      }
      auArr_7 = _local_108;
      fStack_124 = fVal_18 + local_10c + fVal_3;
      local_108._4_4_ = fVal_25;
      local_108._0_4_ = fVal_25;
      uStack_100._4_4_ = auArr_7._12_4_;
      uStack_100._0_4_ = 0x3f800000;
      uStack_120 = 0;
      local_128 = fVal_22;
      func_0x1800d4bf0(&DAT_1808402f8,&local_178,&local_128,local_108);
      uVal_5 = _UNK_1806b288c;
      uVal_4 = _UNK_1806b2888;
      fVal_17 = _UNK_1806b2884;
      fVal_3 = _DAT_1806b2880;
      local_108._4_4_ = _UNK_1806b2884;
      local_108._0_4_ = _DAT_1806b2880;
      uStack_100._0_4_ = _UNK_1806b2888;
      uStack_100._4_4_ = _UNK_1806b288c;
      uVal_26 = CONCAT44(uVal_27,3);
      pU64_14 = local_108;
      func_0x1800d00e0(&local_138,&DAT_18083ca38,pU64_14,DAT_1806c897c,0x3f800000,uVal_26,1);
      uVal_27 = (uint32_t)((uint64_t)uVal_26 >> 0x20);
      if ((DAT_18083cba0 == 1) && (DAT_1808402d0 != '\0')) {
        local_128 = fVal_3;
        fStack_124 = fVal_17;
        uStack_120 = uVal_4;
        uStack_11c = uVal_5;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12714) == '\0') {
          lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_11 + 0x12714) = 1;
          *(uint8_t *)(lVal_11 + 0x12710) = 1;
          *(uint16_t *)(lVal_11 + 0x1270e) = 0x9976;
          func_0x180673140(&LAB_180430870);
        }
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        _Str = (byte *)(lVal_11 + 0x1270e);
        if (*(char *)(lVal_11 + 0x12710) == '\x01') {
          *_Str = *_Str ^ 0x29;
          *(byte *)(lVal_11 + 0x1270f) = *(byte *)(lVal_11 + 0x1270f) ^ 0x99;
          *(uint8_t *)(lVal_11 + 0x12710) = 0;
        }
        local_f8._0_16_ = ZEXT816(0);
        _local_108 = ZEXT816(0);
        sz_9 = strlen((char *)_Str);
        if ((int64_t)sz_9 < 0) {
          func_0x18007ba70();
          fnPtr_2 = (func_ptr_t )swi(3);
          (*fnPtr_2)();
          return;
        }
        uVal_16 = 0xf;
        if (0xf < sz_9) {
          uVal_10 = sz_9 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_10) {
            uVal_16 = uVal_10;
          }
          if (uVal_10 < 0xfff) {
            pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            lVal_11 = func_0x180672de0(uVal_16 + 0x28);
            pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_14 + -8) = lVal_11;
          }
          local_108 = (uint8_t  [8])pU64_14;
        }
        local_f8._8_8_ = uVal_16;
        local_f8._0_8_ = sz_9;
        func_0x1806aa960(pU64_14,_Str,sz_9);
        pU64_14[sz_9] = 0;
        func_0x1800d00e0(&local_130,local_108,&local_128,DAT_1806c897c,0x3f800000,CONCAT44(uVal_27,3),1)
        ;
        if (0xf < (uint64_t)local_f8._8_8_) {
          uVal_16 = local_f8._8_8_ + 1;
          lVal_11 = (int64_t)local_108;
          if (0xfff < uVal_16) {
            lVal_11 = *(int64_t *)((int64_t)local_108 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_108 + -8) - lVal_11)) goto LAB_1803bdc73;
            uVal_16 = local_f8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_16);
        }
      }
      if (0xf < (uint64_t)local_160._8_8_) {
        uVal_16 = local_160._8_8_ + 1;
        lVal_11 = _auStack_170;
        if (0xfff < uVal_16) {
          lVal_11 = *(int64_t *)(_auStack_170 + -8);
          if (0x1f < (uint64_t)((_auStack_170 + -8) - lVal_11)) goto LAB_1803bdc73;
          uVal_16 = local_160._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_16);
      }
      return;
    }
  }
  func_0x18007ba70();
LAB_1803bdc73:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1803bdc80
void Unwind_1803bdc80(void)
{
  func_0x180672f60(&DAT_1808405b0);
  return;
}

// Unwind@1803bdd60
void Unwind_1803bdd60(void)
{
  func_0x180672f60(&DAT_1808405c0);
  return;
}

// Unwind@1803bde40
void Unwind_1803bde40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1803bdf20
void Unwind_1803bdf20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1803be000
void Unwind_1803be000(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x50);
  return;
}

// Unwind@1803be0e0
void Unwind_1803be0e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1270c) = 0;
  return;
}

// func_0x1803be1d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803be1d0(uint64_t param_1)
{
  uint8_t auArr_1 [16];
  float fVal_2;
  float fVal_3;
  uint32_t in_XMM0_Dc;
  uint32_t in_XMM0_Dd;
  float fVal_4;
  float fVal_5;
  float fVal_6;
  uint8_t auArr_7 [12];
  uint8_t auArr_9 [16];
  float fVal_10;
  uint8_t auArr_8 [16];
  
  fVal_2 = (float)param_1;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_1808405d0) && (func_0x180672ec0(&DAT_1808405d0), DAT_1808405d0 == -1)) {
    DAT_1808405c8 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_1808405d0);
  }
  fVal_10 = ((DAT_180840554 + DAT_180840558) - *(float *)(DAT_1808405c8 + 0x16c)) - DAT_1808402bc;
  fVal_5 = (DAT_1808402c4 / (fVal_2 + DAT_1808402c4)) * fVal_10;
  fVal_4 = (fVal_10 - fVal_5) * (DAT_1808405d4 / fVal_2) + DAT_1808402bc + DAT_1806b5c70;
  fVal_3 = DAT_1806c886c + DAT_180840588 + DAT_18084058c;
  if (DAT_18083ef14 == '\0') {
    DAT_1808405d8 = '\0';
    _DAT_18083cbb4 = -1.0;
  }
  fVal_6 = fVal_5 + fVal_4 + DAT_1806be594;
  fVal_5 = DAT_180840588 + DAT_18084058c + DAT_1806ae7b0;
  if ((((DAT_1808402c8 <= fVal_3) || (DAT_1808402cc <= fVal_4)) || (fVal_5 <= DAT_1808402c8)) ||
     (fVal_6 <= DAT_1808402cc)) {
    func_0x1800d2e40(fVal_3,fVal_4,fVal_5 - fVal_3,fVal_6 - fVal_4,*(uint32_t *)(DAT_1808405c8 + 0x170),
                  &DAT_18083cb80,0xf,0x3f800000);
  }
  else {
    func_0x1800d2e40(fVal_3,fVal_4,fVal_5 - fVal_3,fVal_6 - fVal_4,*(uint32_t *)(DAT_1808405c8 + 0x170),
                  &DAT_18083cba4,0xf,0x3f800000);
    if (DAT_18083ef17 == '\x01') {
      _DAT_18083cbb4 = DAT_1808402cc;
      DAT_18083ef17 = 0;
      DAT_1808405d8 = 1;
      return;
    }
  }
  if (DAT_1808405d8 == '\x01') {
    fVal_3 = ((DAT_1808402c4 + fVal_2) / fVal_10) * (DAT_1808402cc - _DAT_18083cbb4) + DAT_1808405d4;
    auArr_7 = ZEXT812(0);
    if (0.0 <= fVal_3) {
      auArr_7._4_8_ = 0;
      auArr_7._0_4_ = fVal_3;
    }
    auArr_8._12_4_ = 0;
    auArr_8._0_12_ = auArr_7;
    auArr_9._4_4_ = (int)((uint64_t)param_1 >> 0x20);
    auArr_9._0_4_ = -(uint)(fVal_2 < fVal_3);
    auArr_9._8_4_ = in_XMM0_Dc;
    auArr_9._12_4_ = in_XMM0_Dd;
    auArr_1._8_4_ = in_XMM0_Dc;
    auArr_1._0_8_ = param_1;
    auArr_1._12_4_ = in_XMM0_Dd;
    auArr_9 = blendvps(auArr_8,auArr_1,auArr_9);
    DAT_1808405d4 = auArr_9._0_4_;
    _DAT_18083cbb4 = DAT_1808402cc;
  }
  return;
}

// Unwind@1803be430
void Unwind_1803be430(void)
{
  func_0x180672f60(&DAT_1808405d0);
  return;
}

// func_0x1803be470
/* WARNING: Removing unreachable block (ram,0x0001803bfd37) */
/* WARNING: Removing unreachable block (ram,0x0001803bfd3d) */
/* WARNING: Removing unreachable block (ram,0x0001803bfd4b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x0001803bfd37) */
/* WARNING: Removing unreachable block (ram,0x0001803bfd3d) */
/* WARNING: Removing unreachable block (ram,0x0001803bfd4b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803be470(void)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t *pU64_3;
  char *_Str;
  char *_Str_00;
  byte *_Str_01;
  char ch_4;
  func_ptr_t fnPtr_5;
  uint8_t auArr_6 [16];
  int64_t lVal_7;
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t *pU64_11;
  int64_t *pLong_12;
  uint8_t *_Size;
  uint32_t uVal_13;
  int iVal_14;
  uint32_t uVal_15;
  int iVal_16;
  uint32_t uVal_17;
  size_t sz_18;
  uint64_t *pU64_19;
  uint8_t (*pArr16_20)[16];
  uint64_t uVal_21;
  int64_t lVal_22;
  int64_t lVal_23;
  uint8_t *pU64_24;
  uint64_t *pU64_25;
  uint *pU64_26;
  int iVal_27;
  uint16_t *pU64_28;
  uint64_t uVal_29;
  uint8_t *pU64_30;
  float fVal_31;
  uint8_t auArr_32 [16];
  uint8_t auArr_33 [16];
  uint8_t auArr_34 [16];
  uint8_t auArr_35 [16];
  uint8_t auArr_36 [12];
  uint32_t uVal_37;
  float fVal_38;
  uint8_t auArr_39 [16];
  uint8_t auArr_40 [16];
  float fVal_41;
  float fVal_42;
  float fVal_43;
  float fVal_44;
  uint32_t uVal_45;
  uint32_t uVal_46;
  uint32_t uVal_47;
  float fVal_48;
  float fVal_49;
  float fVal_50;
  float fVal_51;
  float fVal_52;
  int iVal_53;
  uint64_t *in_stack_fffffffffffffd38;
  uint64_t uVal_54;
  uint32_t uVal_55;
  uint uVal_56;
  uint32_t uVal_57;
  uint32_t uVal_59;
  uint64_t uVal_58;
  uint uVal_60;
  uint uVal_61;
  uint8_t uVal_63;
  uint16_t uVal_62;
  float local_268;
  float fStack_264;
  uint32_t uStack_260;
  uint32_t uStack_25c;
  int64_t local_238;
  int64_t *plStack_230;
  uint8_t local_228 [8];
  uint64_t uStack_220;
  uint64_t local_210;
  int local_208;
  float local_204;
  uint *local_200;
  uint8_t local_1f8 [16];
  size_t local_1e8;
  uint64_t uStack_1e0;
  uint *local_1d8;
  uint *local_1d0;
  uint8_t local_1c8 [16];
  uint8_t local_1b8 [2];
  uint8_t auStack_1b6 [14];
  uint64_t local_1a8;
  uint64_t local_1a0;
  uint64_t local_190;
  uint64_t local_188;
  float local_17c;
  float local_178;
  uint32_t local_174;
  float local_170;
  int local_16c;
  uint8_t local_168 [8];
  uint64_t uStack_160;
  uint8_t local_158 [16];
  uint8_t local_148 [8];
  uint64_t uStack_140;
  uint8_t local_138 [20];
  float local_124;
  uint local_120;
  float local_11c;
  uint16_t local_118;
  uint16_t uStack_116;
  uint32_t uStack_114;
  uint32_t uStack_110;
  float fStack_10c;
  uint32_t uStack_108;
  uint32_t uStack_104;
  uint32_t uStack_100;
  uint32_t uStack_fc;
  undefined5 uStack_f8;
  uint64_t local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_1808405e8) goto LAB_1803c05d5;
LAB_1803be509:
  iVal_27 = (int)*(float *)(DAT_1808405e0 + 0x220);
  iVal_16 = (int)*(uint64_t *)(DAT_1808405e0 + 0x218);
  iVal_53 = (int)((uint64_t)*(uint64_t *)(DAT_1808405e0 + 0x218) >> 0x20);
  local_16c = *(int *)(DAT_1808405e0 + 0x218);
  auArr_39 = insertps(ZEXT416(DAT_1808402c0),DAT_1808402c4,0x10);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12724) == '\0') {
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_23 + 0x12724) = 1;
    *(uint8_t *)(lVal_23 + 0x12720) = 1;
    *(uint64_t *)(lVal_23 + 0x12718) = 0x539a7c66af452cc8;
    func_0x180673140(&LAB_180430890);
  }
  lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_3 = (uint64_t *)(lVal_23 + 0x12718);
  if (*(char *)(lVal_23 + 0x12720) == '\x01') {
    *pU64_3 = *pU64_3 ^ 0x53e91b0fc92b438b;
    *(uint8_t *)(lVal_23 + 0x12720) = 0;
  }
  local_1f8 = (uint8_t  [16])0x0;
  sz_18 = strlen((char *)pU64_3);
  if (-1 < (int64_t)sz_18) {
    if (sz_18 < 0x10) {
      pU64_30 = local_1f8;
      uVal_29 = 0xf;
    }
    else {
      uVal_21 = sz_18 | 0xf;
      uVal_29 = 0x16;
      if (0x16 < uVal_21) {
        uVal_29 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_30 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_29 + 0x28);
        pU64_30 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_30 + -8) = lVal_23;
      }
      local_1f8._0_8_ = pU64_30;
    }
    local_1e8 = sz_18;
    uStack_1e0 = uVal_29;
    func_0x1806aa960(pU64_30,pU64_3,sz_18);
    pU64_30[sz_18] = 0;
    pU64_19 = (uint64_t *)func_0x1800becb0();
    uVal_29 = pU64_19[2];
    if (0xf < (uint64_t)pU64_19[3]) {
      pU64_19 = (uint64_t *)*pU64_19;
    }
    if (uStack_1e0 - local_1e8 < uVal_29) {
      pArr16_20 = (uint8_t (*)[16])func_0x1800871a0(local_1f8,uVal_29,local_1e8,0,pU64_19,uVal_29);
      in_stack_fffffffffffffd38 = pU64_19;
    }
    else {
      uVal_21 = uVal_29;
      if (uStack_1e0 < 0x10) {
        pU64_25 = (uint64_t *)local_1f8;
        if (pU64_25 < (uint64_t *)((int64_t)pU64_19 + uVal_29)) goto LAB_1803be6a8;
      }
      else {
        pU64_25 = (uint64_t *)local_1f8._0_8_;
        if ((uint64_t)local_1f8._0_8_ < (uint64_t *)((int64_t)pU64_19 + uVal_29)) {
LAB_1803be6a8:
          if ((pU64_19 <= (uint64_t *)((int64_t)pU64_25 + local_1e8)) &&
             (uVal_21 = (int64_t)pU64_25 - (int64_t)pU64_19,
             pU64_25 < pU64_19 || (int64_t)pU64_25 - (int64_t)pU64_19 == 0)) {
            uVal_21 = 0;
          }
        }
      }
      lVal_23 = local_1e8 + 1;
      local_1e8 = local_1e8 + uVal_29;
      func_0x1806aa960((int64_t)pU64_25 + uVal_29,pU64_25,lVal_23);
      func_0x1806aa960(pU64_25,pU64_19,uVal_21);
      pU64_30 = (uint8_t *)((int64_t)pU64_25 + uVal_21);
      func_0x1806aa960(pU64_30,(int64_t)pU64_19 + uVal_21 + uVal_29,uVal_29 - uVal_21);
      pArr16_20 = &local_1f8;
    }
    _local_168 = *pArr16_20;
    local_158 = pArr16_20[1];
    *(uint64_t *)pArr16_20[1] = 0;
    *(uint64_t *)(pArr16_20[1] + 8) = 0xf;
    (*pArr16_20)[0] = 0;
    if ((uint64_t)local_158._8_8_ < 0x10) {
      pU64_24 = local_168;
    }
    else {
      pU64_24 = (uint8_t *)local_168;
    }
    local_118 = SUB82(pU64_24,0);
    uStack_116 = (uint16_t)((uint64_t)pU64_24 >> 0x10);
    uStack_114 = (uint32_t)((uint64_t)pU64_24 >> 0x20);
    uStack_110 = local_158._0_4_;
    fStack_10c = local_158._4_4_;
    uVal_13 = func_0x180678230();
    func_0x1800a6340(local_1b8,uVal_13,&local_118);
    local_1c8 = (uint8_t  [16])0x0;
    iVal_14 = func_0x180087380(local_1c8,local_1b8,0);
    if (iVal_14 != 0) {
      uVal_29 = func_0x180087670("directory_iterator::directory_iterator",iVal_14,local_1b8);
LAB_1803c0629:
      func_0x180087670("remove",uVal_29 & 0xffffffff,pU64_30);
      goto LAB_1803c063b;
    }
    auArr_32._4_4_ = iVal_27;
    auArr_32._0_4_ = iVal_27;
    auArr_32._8_4_ = iVal_27;
    auArr_32._12_4_ = iVal_27;
    auArr_33._4_4_ = iVal_53 + 1;
    auArr_33._0_4_ = iVal_16 + 1;
    auArr_33._8_4_ = 1;
    auArr_33._12_4_ = 1;
    auArr_33 = pmulld(auArr_32,auArr_33);
    auArr_40._0_4_ = auArr_39._0_4_ - (float)auArr_33._0_4_;
    auArr_40._4_4_ = auArr_39._4_4_ - (float)auArr_33._4_4_;
    auArr_40._8_4_ = auArr_39._8_4_ - (float)auArr_33._8_4_;
    auArr_40._12_4_ = auArr_39._12_4_ - (float)auArr_33._12_4_;
    auArr_39._4_4_ = (float)iVal_53;
    auArr_39._0_4_ = (float)iVal_16;
    auArr_39._8_8_ = 0;
    auArr_39 = divps(auArr_40,auArr_39);
    pLong_12 = (int64_t *)local_1c8._8_8_;
    if ((int64_t *)local_1c8._8_8_ == (int64_t *)0x0) {
      local_238 = local_1c8._0_8_;
      plStack_230 = (int64_t *)0x0;
    }
    else {
      LOCK();
      *(int *)(int64_t *)(local_1c8._8_8_ + 8) = *(int *)(int64_t *)(local_1c8._8_8_ + 8) + 1;
      UNLOCK();
      local_238 = local_1c8._0_8_;
      plStack_230 = (int64_t *)local_1c8._8_8_;
      if ((int64_t *)local_1c8._8_8_ != (int64_t *)0x0) {
        LOCK();
        *(int *)(int64_t *)(local_1c8._8_8_ + 8) = *(int *)(int64_t *)(local_1c8._8_8_ + 8) + 1;
        UNLOCK();
        if ((int64_t *)local_1c8._8_8_ != (int64_t *)0x0) {
          LOCK();
          pLong_1 = (int64_t *)(local_1c8._8_8_ + 8);
          *(int *)pLong_1 = *(int *)pLong_1 + -1;
          UNLOCK();
          if (*(int *)pLong_1 == 0) {
            (***(func_ptr_t **)local_1c8._8_8_)(local_1c8._8_8_);
            LOCK();
            pInt_2 = (int *)((int64_t)pLong_12 + 0xc);
            *pInt_2 = *pInt_2 + -1;
            UNLOCK();
            if (*pInt_2 == 0) {
              (**(func_ptr_t *)(*pLong_12 + 8))(pLong_12);
            }
          }
        }
      }
    }
    local_124 = (float)iVal_27;
    auArr_35 = ZEXT416((uint)local_124);
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_26 = (uint *)(lVal_23 + 0x12728);
    local_268 = auArr_39._0_4_;
    fStack_264 = auArr_39._4_4_;
    uStack_260 = auArr_39._8_4_;
    uStack_25c = auArr_39._12_4_;
    fVal_41 = local_268 + local_124;
    fVal_31 = fStack_264 + local_124;
    _Str = (char *)(lVal_23 + 0x12731);
    local_200 = (uint *)(lVal_23 + 0x1275c);
    _Str_00 = (char *)(lVal_23 + 0x12765);
    local_1d0 = (uint *)(lVal_23 + 0x12780);
    local_204 = fVal_41 * 0.0;
    local_120 = 0;
    iVal_27 = 0;
    uVal_13 = _DAT_1806b2880;
    uVal_45 = _UNK_1806b2884;
    uVal_46 = _UNK_1806b2888;
    uVal_47 = _UNK_1806b288c;
    local_1d8 = pU64_26;
    while( true ) {
      pLong_12 = plStack_230;
      lVal_23 = local_238;
      auArr_36 = auArr_35._4_12_;
      pU64_28 = &local_118;
      if (local_238 == 0) break;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12730) == '\0') {
        lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_22 + 0x12730) = 1;
        *(uint8_t *)(lVal_22 + 0x1272e) = 1;
        *(uint32_t *)(lVal_22 + 0x12728) = 0x2f3832c7;
        *(uint16_t *)(lVal_22 + 0x1272c) = 0x7cd;
        func_0x180673140(&LAB_180430cd0);
        ch_4 = *(char *)((int64_t)pU64_26 + 6);
      }
      else {
        ch_4 = *(char *)((int64_t)pU64_26 + 6);
      }
      if (ch_4 == '\x01') {
        *pU64_26 = *pU64_26 ^ 0x415751e9;
        *(byte *)(pU64_26 + 1) = *(byte *)(pU64_26 + 1) ^ 0xab;
        *(byte *)((int64_t)pU64_26 + 5) = *(byte *)((int64_t)pU64_26 + 5) ^ 7;
        *(uint8_t *)((int64_t)pU64_26 + 6) = 0;
      }
      _local_148 = ZEXT816(0);
      local_138._0_16_ = _local_148;
      sz_18 = strlen((char *)pU64_26);
      if ((int64_t)sz_18 < 0) {
        func_0x18007ba70();
LAB_1803c05b7:
        func_0x18007ba70();
LAB_1803c05bd:
        func_0x18007ba70();
        goto LAB_1803c05c3;
      }
      uVal_29 = 0xf;
      pU64_30 = local_148;
      if (0xf < sz_18) {
        uVal_21 = sz_18 | 0xf;
        uVal_29 = 0x16;
        if (0x16 < uVal_21) {
          uVal_29 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          pU64_30 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
        }
        else {
          lVal_22 = func_0x180672de0(uVal_29 + 0x28);
          pU64_30 = (uint8_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_30 + -8) = lVal_22;
        }
        local_148 = (uint8_t  [8])pU64_30;
      }
      local_138._8_8_ = uVal_29;
      local_138._0_8_ = sz_18;
      func_0x1806aa960(pU64_30,pU64_26,sz_18);
      pU64_30[sz_18] = 0;
      local_228 = (uint8_t  [8])local_148;
      if (0xf < (uint64_t)local_138._8_8_) {
        local_228 = local_148;
      }
      uStack_220 = local_138._0_8_;
      uVal_15 = func_0x180678230();
      func_0x1800a6340(pU64_28,uVal_15,local_228);
      pU64_30 = (uint8_t *)(lVal_23 + 0x20);
      func_0x1803c1680(pU64_30,local_228);
      local_190 = pU64_28;
      if (7 < CONCAT44(uStack_fc,uStack_100)) {
        local_190 = (uint16_t *)CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
      }
      local_188 = CONCAT44(uStack_104,uStack_108);
      iVal_16 = func_0x1804308b0(local_228,&local_190);
      if (7 < local_210) {
        uVal_29 = local_210 * 2 + 2;
        lVal_22 = (int64_t)local_228;
        if (0xfff < uVal_29) {
          lVal_22 = *(int64_t *)((int64_t)local_228 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_228 + -8) - lVal_22)) goto LAB_1803c05af;
          uVal_29 = local_210 * 2 + 0x29;
        }
        thunk_FUN_180695dd0(lVal_22,uVal_29);
      }
      uVal_29 = CONCAT44(uStack_fc,uStack_100);
      if (7 < uVal_29) {
        lVal_7 = CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
        uVal_21 = uVal_29 * 2 + 2;
        lVal_22 = lVal_7;
        if (0xfff < uVal_21) {
          lVal_22 = *(int64_t *)(lVal_7 + -8);
          if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_22)) goto LAB_1803c05af;
          uVal_21 = uVal_29 * 2 + 0x29;
        }
        thunk_FUN_180695dd0(lVal_22,uVal_21);
      }
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 7;
      uStack_fc = 0;
      local_118 = 0;
      if (0xf < (uint64_t)local_138._8_8_) {
        uVal_29 = local_138._8_8_ + 1;
        lVal_22 = (int64_t)local_148;
        if (0xfff < uVal_29) {
          lVal_22 = *(int64_t *)((int64_t)local_148 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_148 + -8) - lVal_22)) goto LAB_1803c05af;
          uVal_29 = local_138._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_22,uVal_29);
      }
      uVal_61 = (uint)((uint64_t)in_stack_fffffffffffffd38 >> 0x20);
      if (iVal_16 == 0) {
        func_0x1803c17e0(pU64_30,pU64_28);
        if (7 < CONCAT44(uStack_fc,uStack_100)) {
          pU64_28 = (uint16_t *)CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
        }
        uStack_220._4_4_ = uStack_104;
        uStack_220._0_4_ = uStack_108;
        local_228 = (uint8_t  [8])pU64_28;
        uVal_13 = func_0x180678230();
        func_0x18008a490(local_148,uVal_13,local_228);
        uVal_29 = CONCAT44(uStack_fc,uStack_100);
        if (7 < uVal_29) {
          lVal_7 = CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
          uVal_21 = uVal_29 * 2 + 2;
          lVal_22 = lVal_7;
          if (0xfff < uVal_21) {
            lVal_22 = *(int64_t *)(lVal_7 + -8);
            if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_22)) goto LAB_1803c05af;
            uVal_21 = uVal_29 * 2 + 0x29;
          }
          thunk_FUN_180695dd0(lVal_22,uVal_21);
        }
        pU64_11 = DAT_1808401f0;
        _Size = (uint8_t *)local_138._0_8_;
        pU64_24 = local_148;
        if (0xf < (uint64_t)local_138._8_8_) {
          pU64_24 = (uint8_t *)local_148;
        }
        pU64_19 = DAT_1808401e0;
        if (DAT_1808401f8 <= &DAT_0000000f) {
          pU64_19 = &DAT_1808401e0;
        }
        uVal_13 = DAT_1806ae650;
        if ((DAT_1808401f0 == (uint8_t *)local_138._0_8_) &&
           (((uint8_t *)local_138._0_8_ == (uint8_t *)0x0 ||
            (iVal_16 = memcmp(pU64_19,pU64_24,local_138._0_8_), uVal_13 = DAT_1806ae650, iVal_16 == 0))
           )) {
          uVal_13 = DAT_1806c8980;
        }
        iVal_16 = iVal_27 + 1;
        fVal_49 = local_204;
        if (iVal_27 < local_16c) {
          fVal_49 = (float)iVal_27 * fVal_41;
        }
        fVal_49 = DAT_1808402b8 + local_124 + fVal_49;
        if (local_16c <= iVal_27) {
          iVal_16 = 1;
        }
        local_120 = local_120 + (local_16c <= iVal_27);
        uVal_29 = (uint64_t)local_120;
        fVal_52 = (float)local_120 * fVal_31 + DAT_1808402bc + local_124;
        fVal_44 = local_268 + fVal_49;
        fVal_48 = fStack_264 + fVal_52;
        local_174 = uVal_13;
        if (pU64_11 == _Size) {
          if (_Size == (uint8_t *)0x0) {
            fVal_51 = fVal_49 + DAT_1806b6134;
            fVal_50 = fVal_44 + DAT_1806b6794;
          }
          else {
            iVal_27 = memcmp(pU64_19,pU64_24,(size_t)_Size);
            fVal_50 = fVal_44 + DAT_1806b6794;
            if (iVal_27 != 0) {
              fVal_50 = fVal_49 + _DAT_1806c8984;
            }
            uVal_29 = (uint64_t)(iVal_27 == 0);
            fVal_51 = *(float *)(&DAT_1806c8988 + uVal_29 * 4) + fVal_49;
          }
        }
        else {
          fVal_51 = fVal_49 + DAT_1806b6550;
          fVal_50 = fVal_49 + _DAT_1806c8984;
        }
        fVal_38 = fVal_48 + DAT_1806b66b0;
        local_11c = fVal_48 + DAT_1806c3800;
        fVal_42 = fVal_44 + _DAT_1806c8990;
        fVal_43 = fVal_44 + DAT_1806c3800;
        local_170 = fVal_44 - fVal_49;
        local_190 = (uint16_t *)
                    CONCAT44(fVal_52 + DAT_1806b6134,local_170 * DAT_1806aeae4 + fVal_49);
        local_208 = iVal_16;
        if ((((DAT_1808402c8 <= fVal_49) || (DAT_1808402cc <= fVal_52)) || (fVal_44 <= DAT_1808402c8))
           || (fVal_48 <= DAT_1808402cc)) {
          uVal_15 = *(uint32_t *)(DAT_1808405e0 + 0x224);
          fVal_49 = DAT_18083cbec;
          if (pU64_11 == _Size) {
            if (_Size == (uint8_t *)0x0) {
              fVal_49 = DAT_18083cbdc + _DAT_1806c8994;
            }
            else {
              iVal_27 = memcmp(pU64_19,pU64_24,(size_t)_Size);
              fVal_49 = DAT_18083cbdc + _DAT_1806c8994;
              if (iVal_27 != 0) {
                fVal_49 = DAT_18083cbec;
              }
            }
          }
          local_118 = (uint16_t)DAT_18083cbe0;
          uStack_116 = (uint16_t)((uint64_t)DAT_18083cbe0 >> 0x10);
          uStack_114 = (uint32_t)((uint64_t)DAT_18083cbe0 >> 0x20);
          uStack_110 = DAT_18083cbe8;
          uVal_59 = 1;
          uVal_63 = 0;
          fStack_10c = fVal_49;
          func_0x1800d36e0();
          uVal_37 = local_174;
          uVal_13 = _DAT_1806b2880;
          uVal_45 = _UNK_1806b2884;
          uVal_46 = _UNK_1806b2888;
          uVal_47 = _UNK_1806b288c;
        }
        else {
          uVal_15 = *(uint32_t *)(DAT_1808405e0 + 0x224);
          uVal_59 = 1;
          uVal_54 = CONCAT44(uVal_61,*(uint32_t *)(DAT_1808405e0 + 0x170));
          uVal_63 = 0;
          func_0x1800d36e0(uVal_29,iVal_16,local_170,CONCAT44(fStack_264,fVal_48 - fVal_52),uVal_54,
                        &DAT_18083cbd0,&DAT_18083cbc0,*(uint32_t *)(DAT_1808405e0 + 0x174),0xf,
                        uVal_15);
          uVal_37 = local_174;
          uVal_47 = _UNK_1806b288c;
          uVal_46 = _UNK_1806b2888;
          uVal_45 = _UNK_1806b2884;
          uVal_13 = _DAT_1806b2880;
          uVal_61 = (uint)((uint64_t)uVal_54 >> 0x20);
          if (((DAT_18083ef17 == '\x01') &&
              (((DAT_1808402c8 <= fVal_51 || (DAT_1808402cc <= fVal_38)) ||
               ((fVal_50 <= DAT_1808402c8 || (local_11c <= DAT_1808402cc)))))) &&
             ((((DAT_1808402c8 <= fVal_42 || (DAT_1808402cc <= fVal_38)) || (fVal_43 <= DAT_1808402c8))
              || (local_11c <= DAT_1808402cc)))) {
            func_0x18039bd20(&DAT_1808401b0,1);
            func_0x180397850(&DAT_1808401b0,local_148,0);
            DAT_18083ef17 = '\0';
          }
        }
        fVal_49 = local_11c;
        uVal_17 = uVal_37;
        if ((((DAT_1808402c8 <= fVal_51) || (DAT_1808402cc <= fVal_38)) || (fVal_50 <= DAT_1808402c8))
           || (local_11c <= DAT_1808402cc)) {
          local_118 = (uint16_t)_DAT_1806c89a0;
          uStack_116 = (uint16_t)((uint)_DAT_1806c89a0 >> 0x10);
          uStack_114 = _UNK_1806c89a4;
          uStack_110 = _UNK_1806c89a8;
          fStack_10c = (float)_UNK_1806c89ac;
          in_stack_fffffffffffffd38 = (uint64_t *)((uint64_t)uVal_61 << 0x20);
          pU64_28 = &local_118;
          func_0x1800d2e40();
          uVal_57 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
          pU64_26 = local_200;
        }
        else {
          local_118 = (uint16_t)_DAT_1806b6070;
          uStack_116 = (uint16_t)((uint)_DAT_1806b6070 >> 0x10);
          uStack_114 = _UNK_1806b6074;
          uStack_110 = _UNK_1806b6078;
          fStack_10c = (float)_UNK_1806b607c;
          in_stack_fffffffffffffd38 = (uint64_t *)((uint64_t)uVal_61 << 0x20);
          pU64_28 = &local_118;
          func_0x1800d2e40();
          uVal_57 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
          uStack_108 = _DAT_1806cb887;
          uStack_104 = _UNK_1806cb88b;
          uStack_100 = _UNK_1806cb88f;
          local_118 = (uint16_t)_DAT_1806cb877;
          uStack_116 = (uint16_t)((uint)_DAT_1806cb877 >> 0x10);
          uStack_114 = _UNK_1806cb87b;
          uStack_110 = _UNK_1806cb87f;
          fStack_10c = (float)_UNK_1806cb883;
          uStack_fc = CONCAT31(0x44ea23,(char)_UNK_1806cb893);
          uStack_f8 = 0x5bbc34b3dd;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12758
                       ) == '\0') {
            lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_22 + 0x12758) = 1;
            func_0x1801b1390(lVal_22 + 0x12731,&local_118);
            func_0x180673140(&LAB_180430d00);
          }
          func_0x180441390(_Str);
          uStack_108 = 0;
          uStack_114 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          local_118 = 0;
          uStack_116 = 0;
          uStack_110 = 0;
          fStack_10c = 0.0;
          uStack_104 = uStack_114;
          sz_18 = strlen(_Str);
          if ((int64_t)sz_18 < 0) goto LAB_1803c05c9;
          uVal_29 = 0xf;
          pU64_28 = &local_118;
          if (0xf < sz_18) {
            uVal_21 = sz_18 | 0xf;
            uVal_29 = 0x16;
            if (0x16 < uVal_21) {
              uVal_29 = uVal_21;
            }
            if (uVal_21 < 0xfff) {
              pU64_28 = (uint16_t *)func_0x180672de0(uVal_29 + 1);
            }
            else {
              lVal_22 = func_0x180672de0(uVal_29 + 0x28);
              pU64_28 = (uint16_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_28 + -4) = lVal_22;
            }
            local_118 = SUB82(pU64_28,0);
            uStack_116 = (uint16_t)((uint64_t)pU64_28 >> 0x10);
            uStack_114 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
          }
          uStack_108 = (uint32_t)sz_18;
          uStack_104 = (uint32_t)(sz_18 >> 0x20);
          uStack_100 = (uint32_t)uVal_29;
          uStack_fc = (uint32_t)(uVal_29 >> 0x20);
          func_0x1806aa960(pU64_28,_Str,sz_18);
          pU64_26 = local_200;
          *(uint8_t *)((int64_t)pU64_28 + sz_18) = 0;
          uVal_29 = CONCAT44(uStack_104,uStack_108);
          pU64_28 = &local_118;
          if (0xf < CONCAT44(uStack_fc,uStack_100)) {
            pU64_28 = (uint16_t *)CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
          }
          if (DAT_18083ca30 < uVal_29) {
            func_0x18007bba0(&DAT_18083ca18,uVal_29);
            if (DAT_18083ef17 == '\x01') goto LAB_1803bf980;
LAB_1803bf9f4:
            uVal_29 = CONCAT44(uStack_fc,uStack_100);
          }
          else {
            pU64_19 = &DAT_18083ca18;
            if (0xf < DAT_18083ca30) {
              pU64_19 = DAT_18083ca18;
            }
            DAT_18083ca28 = uVal_29;
            func_0x1806aa960(pU64_19,pU64_28,uVal_29);
            *(uint8_t *)((int64_t)pU64_19 + uVal_29) = 0;
            if (DAT_18083ef17 != '\x01') goto LAB_1803bf9f4;
LAB_1803bf980:
            pU64_24 = local_148;
            if (0xf < (uint64_t)local_138._8_8_) {
              pU64_24 = (uint8_t *)local_148;
            }
            pU64_11 = (uint8_t *)local_138._0_8_;
            if (DAT_1808401f8 < (uint64_t)local_138._0_8_) {
              func_0x18007bba0(&DAT_1808401e0,local_138._0_8_);
            }
            else {
              pU64_19 = &DAT_1808401e0;
              if (&DAT_0000000f < DAT_1808401f8) {
                pU64_19 = DAT_1808401e0;
              }
              DAT_1808401f0 = (uint8_t *)local_138._0_8_;
              func_0x1806aa960(pU64_19,pU64_24,local_138._0_8_);
              *(uint8_t *)((int64_t)pU64_19 + (int64_t)pU64_11) = 0;
            }
            func_0x18039bd20(&DAT_1808401b0,1);
            DAT_18083ef17 = '\0';
            uVal_29 = CONCAT44(uStack_fc,uStack_100);
          }
          if (0xf < uVal_29) {
            lVal_7 = CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
            uVal_21 = uVal_29 + 1;
            lVal_22 = lVal_7;
            if (0xfff < uVal_21) {
              lVal_22 = *(int64_t *)(lVal_7 + -8);
              if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_22)) goto LAB_1803c05af;
              uVal_21 = uVal_29 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_22,uVal_21);
          }
        }
        auArr_35 = ZEXT416((uint)DAT_1806aeae4);
        local_17c = fVal_51 + (fVal_50 - fVal_51) * DAT_1806aeae4;
        fVal_44 = (fVal_49 - fVal_38) * DAT_1806aeae4 + fVal_38;
        fVal_49 = *(float *)(DAT_1808405e0 + 0x174) + *(float *)(DAT_1808405e0 + 0x174) +
                 (fVal_50 - fVal_51) + DAT_1806b55e0;
        local_228._4_4_ = uVal_45;
        local_228._0_4_ = uVal_13;
        uStack_220._0_4_ = uVal_46;
        uStack_220._4_4_ = uVal_47;
        local_178 = fVal_44;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12764) == '\0') {
          lVal_22 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_22 + 0x12764) = 1;
          *(uint32_t *)(lVal_22 + 0x1275c) = 0x661b5e84;
          *(uint16_t *)(lVal_22 + 0x12760) = 0x119;
          func_0x180673140(&LAB_180430d30);
          ch_4 = *(char *)((int64_t)pU64_26 + 5);
        }
        else {
          ch_4 = *(char *)((int64_t)pU64_26 + 5);
        }
        if (ch_4 == '\x01') {
          *pU64_26 = *pU64_26 ^ 0x234d1fd7;
          *(byte *)(pU64_26 + 1) = *(byte *)(pU64_26 + 1) ^ 0x19;
          *(uint8_t *)((int64_t)pU64_26 + 5) = 0;
        }
        uStack_108 = 0;
        uStack_114 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        local_118 = 0;
        uStack_116 = 0;
        uStack_110 = 0;
        fStack_10c = 0.0;
        uStack_104 = uStack_114;
        sz_18 = strlen((char *)pU64_26);
        uVal_55 = (uint32_t)((uint64_t)in_stack_fffffffffffffd38 >> 0x20);
        if ((int64_t)sz_18 < 0) goto LAB_1803c05b7;
        uVal_29 = 0xf;
        pU64_28 = &local_118;
        if (0xf < sz_18) {
          uVal_21 = sz_18 | 0xf;
          uVal_29 = 0x16;
          if (0x16 < uVal_21) {
            uVal_29 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            pU64_28 = (uint16_t *)func_0x180672de0(uVal_29 + 1);
          }
          else {
            lVal_22 = func_0x180672de0(uVal_29 + 0x28);
            pU64_28 = (uint16_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_28 + -4) = lVal_22;
          }
          local_118 = SUB82(pU64_28,0);
          uStack_116 = (uint16_t)((uint64_t)pU64_28 >> 0x10);
          uStack_114 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
        }
        uStack_108 = (uint32_t)sz_18;
        uStack_104 = (uint32_t)(sz_18 >> 0x20);
        uStack_100 = (uint32_t)uVal_29;
        uStack_fc = (uint32_t)(uVal_29 >> 0x20);
        func_0x1806aa960(pU64_28,local_200,sz_18);
        *(uint8_t *)((int64_t)pU64_28 + sz_18) = 0;
        uVal_61 = CONCAT31((int3)((uint)uVal_15 >> 8),1);
        uVal_62 = CONCAT11(uVal_63,1);
        uVal_60 = CONCAT31((int3)((uint)uVal_17 >> 8),1);
        uVal_58 = CONCAT44(uVal_59,3);
        uVal_54 = CONCAT44(uVal_57,0x3f800000);
        in_stack_fffffffffffffd38 = (uint64_t *)CONCAT44(uVal_55,0x3f800000);
        func_0x1800d05c0(&local_17c,&local_118,local_228,fVal_49,in_stack_fffffffffffffd38,uVal_54,uVal_58
                      ,uVal_60,uVal_62,uVal_61);
        pU64_26 = local_1d8;
        uVal_15 = (uint32_t)((uint64_t)uVal_58 >> 0x20);
        uVal_63 = (uint8_t)((ushort)uVal_62 >> 8);
        uVal_59 = (uint32_t)((uint64_t)uVal_54 >> 0x20);
        uVal_29 = CONCAT44(uStack_fc,uStack_100);
        if (0xf < uVal_29) {
          lVal_7 = CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
          uVal_21 = uVal_29 + 1;
          lVal_22 = lVal_7;
          if (0xfff < uVal_21) {
            lVal_22 = *(int64_t *)(lVal_7 + -8);
            if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_22)) goto LAB_1803c05af;
            uVal_21 = uVal_29 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_22,uVal_21);
        }
        uVal_56 = (uint)((uint64_t)in_stack_fffffffffffffd38 >> 0x20);
        pU64_24 = local_148;
        if ((uint64_t)local_138._8_8_ < 0x10) {
          if (&DAT_0000000f < DAT_1808401f8) goto LAB_1803bf498;
LAB_1803bf473:
          pU64_19 = &DAT_1808401e0;
          if (DAT_1808401f0 != (uint8_t *)local_138._0_8_) goto LAB_1803bf4ba;
LAB_1803bf4a4:
          if ((uint8_t *)local_138._0_8_ != (uint8_t *)0x0) {
            iVal_27 = memcmp(pU64_19,pU64_24,local_138._0_8_);
            uVal_56 = (uint)((uint64_t)in_stack_fffffffffffffd38 >> 0x20);
            if (iVal_27 != 0) goto LAB_1803bf4ba;
          }
        }
        else {
          pU64_24 = (uint8_t *)local_148;
          if (DAT_1808401f8 <= &DAT_0000000f) goto LAB_1803bf473;
LAB_1803bf498:
          pU64_19 = DAT_1808401e0;
          if (DAT_1808401f0 == (uint8_t *)local_138._0_8_) goto LAB_1803bf4a4;
LAB_1803bf4ba:
          if (((DAT_1808402c8 <= fVal_42) || (DAT_1808402cc <= fVal_38)) ||
             ((fVal_43 <= DAT_1808402c8 || (local_11c <= DAT_1808402cc)))) {
            local_118 = (uint16_t)_DAT_1806c89b0;
            uStack_116 = (uint16_t)((uint)_DAT_1806c89b0 >> 0x10);
            uStack_114 = _UNK_1806c89b4;
            uStack_110 = _UNK_1806c89b8;
            fStack_10c = (float)_UNK_1806c89bc;
            in_stack_fffffffffffffd38 = (uint64_t *)((uint64_t)uVal_56 << 0x20);
            auArr_35._4_4_ = fStack_264;
            auArr_35._0_4_ = fVal_38;
            auArr_35._8_4_ = uStack_25c;
            auArr_35._12_4_ = uStack_25c;
            pU64_28 = &local_118;
            func_0x1800d2e40();
            uVal_59 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
            pU64_26 = local_1d0;
          }
          else {
            local_118 = (uint16_t)_DAT_1806b5b30;
            uStack_116 = (uint16_t)((uint)_DAT_1806b5b30 >> 0x10);
            uStack_114 = _UNK_1806b5b34;
            uStack_110 = _UNK_1806b5b38;
            fStack_10c = (float)_UNK_1806b5b3c;
            in_stack_fffffffffffffd38 = (uint64_t *)((uint64_t)uVal_56 << 0x20);
            auArr_35._4_4_ = fStack_264;
            auArr_35._0_4_ = fVal_38;
            auArr_35._8_4_ = uStack_25c;
            auArr_35._12_4_ = uStack_25c;
            pU64_28 = &local_118;
            func_0x1800d2e40();
            uVal_59 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
            local_118 = (uint16_t)_DAT_1806cb89c;
            uStack_116 = (uint16_t)((uint)_DAT_1806cb89c >> 0x10);
            uStack_114 = _UNK_1806cb8a0;
            uStack_110 = _UNK_1806cb8a4;
            fStack_10c = (float)CONCAT13(0xcb,(int3)_UNK_1806cb8a8);
            uStack_108 = CONCAT13(uStack_108._3_1_,0xd364f2);
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x1277c) == '\0') {
              lVal_22 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_22 + 0x1277c) = 1;
              func_0x18007cb80(lVal_22 + 0x12765,&local_118);
              func_0x180673140(&LAB_180430d60);
            }
            func_0x1804413d0(_Str_00);
            uStack_108 = 0;
            uStack_114 = 0;
            uStack_100 = 0;
            uStack_fc = 0;
            local_118 = 0;
            uStack_116 = 0;
            uStack_110 = 0;
            fStack_10c = 0.0;
            uStack_104 = uStack_114;
            sz_18 = strlen(_Str_00);
            if ((int64_t)sz_18 < 0) goto LAB_1803c05cf;
            uVal_29 = 0xf;
            pU64_28 = &local_118;
            if (0xf < sz_18) {
              uVal_21 = sz_18 | 0xf;
              uVal_29 = 0x16;
              if (0x16 < uVal_21) {
                uVal_29 = uVal_21;
              }
              if (uVal_21 < 0xfff) {
                pU64_28 = (uint16_t *)func_0x180672de0(uVal_29 + 1);
              }
              else {
                lVal_22 = func_0x180672de0(uVal_29 + 0x28);
                pU64_28 = (uint16_t *)(lVal_22 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_28 + -4) = lVal_22;
              }
              local_118 = SUB82(pU64_28,0);
              uStack_116 = (uint16_t)((uint64_t)pU64_28 >> 0x10);
              uStack_114 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
            }
            uStack_108 = (uint32_t)sz_18;
            uStack_104 = (uint32_t)(sz_18 >> 0x20);
            uStack_100 = (uint32_t)uVal_29;
            uStack_fc = (uint32_t)(uVal_29 >> 0x20);
            func_0x1806aa960(pU64_28,_Str_00,sz_18);
            *(uint8_t *)((int64_t)pU64_28 + sz_18) = 0;
            uVal_29 = CONCAT44(uStack_104,uStack_108);
            pU64_28 = &local_118;
            if (0xf < CONCAT44(uStack_fc,uStack_100)) {
              pU64_28 = (uint16_t *)CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
            }
            if (DAT_18083ca30 < uVal_29) {
              func_0x18007bba0(&DAT_18083ca18,uVal_29);
              if (DAT_18083ef17 == '\x01') goto LAB_1803bfb16;
LAB_1803bfb8b:
              uVal_29 = CONCAT44(uStack_fc,uStack_100);
              pU64_26 = local_1d0;
            }
            else {
              pU64_19 = &DAT_18083ca18;
              if (0xf < DAT_18083ca30) {
                pU64_19 = DAT_18083ca18;
              }
              DAT_18083ca28 = uVal_29;
              func_0x1806aa960(pU64_19,pU64_28,uVal_29);
              *(uint8_t *)((int64_t)pU64_19 + uVal_29) = 0;
              if (DAT_18083ef17 != '\x01') goto LAB_1803bfb8b;
LAB_1803bfb16:
              pU64_26 = local_1d0;
              pU64_24 = pU64_30;
              if (7 < *(uint64_t *)(lVal_23 + 0x38)) {
                pU64_24 = *(uint8_t **)(lVal_23 + 0x20);
              }
              uVal_29 = func_0x180678990(pU64_24);
              uVal_29 = uVal_29 >> 0x20;
              if (uVal_29 != 0) goto LAB_1803c0629;
              DAT_18083ef17 = '\0';
              uVal_29 = CONCAT44(uStack_fc,uStack_100);
            }
            if (0xf < uVal_29) {
              lVal_22 = CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
              uVal_21 = uVal_29 + 1;
              lVal_23 = lVal_22;
              if (0xfff < uVal_21) {
                lVal_23 = *(int64_t *)(lVal_22 + -8);
                if (0x1f < (uint64_t)((lVal_22 + -8) - lVal_23)) goto LAB_1803c05af;
                uVal_21 = uVal_29 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_23,uVal_21);
            }
          }
          local_17c = fVal_42 + (fVal_43 - fVal_42) * DAT_1806aeae4;
          fVal_49 = *(float *)(DAT_1808405e0 + 0x174) + *(float *)(DAT_1808405e0 + 0x174) +
                   (fVal_43 - fVal_42) + DAT_1806b55e0;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12788
                       ) == '\0') {
            lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_23 + 0x12788) = 1;
            *(uint8_t *)(lVal_23 + 0x12784) = 1;
            *(uint32_t *)(lVal_23 + 0x12780) = 0x1d8b5015;
            local_178 = fVal_44;
            func_0x180673140(&LAB_180430d90);
            ch_4 = *(char *)(pU64_26 + 1);
          }
          else {
            ch_4 = *(char *)(pU64_26 + 1);
            local_178 = fVal_44;
          }
          if (ch_4 == '\x01') {
            *pU64_26 = *pU64_26 ^ 0x1dc71551;
            *(uint8_t *)(pU64_26 + 1) = 0;
          }
          uStack_108 = 0;
          uStack_114 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          local_118 = 0;
          uStack_116 = 0;
          uStack_110 = 0;
          fStack_10c = 0.0;
          uStack_104 = uStack_114;
          sz_18 = strlen((char *)pU64_26);
          uVal_17 = (uint32_t)((uint64_t)in_stack_fffffffffffffd38 >> 0x20);
          if ((int64_t)sz_18 < 0) goto LAB_1803c05bd;
          uVal_29 = 0xf;
          pU64_28 = &local_118;
          if (0xf < sz_18) {
            uVal_21 = sz_18 | 0xf;
            uVal_29 = 0x16;
            if (0x16 < uVal_21) {
              uVal_29 = uVal_21;
            }
            if (uVal_21 < 0xfff) {
              pU64_28 = (uint16_t *)func_0x180672de0(uVal_29 + 1);
            }
            else {
              lVal_23 = func_0x180672de0(uVal_29 + 0x28);
              pU64_28 = (uint16_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_28 + -4) = lVal_23;
            }
            local_118 = SUB82(pU64_28,0);
            uStack_116 = (uint16_t)((uint64_t)pU64_28 >> 0x10);
            uStack_114 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
            pU64_26 = local_1d0;
          }
          uStack_108 = (uint32_t)sz_18;
          uStack_104 = (uint32_t)(sz_18 >> 0x20);
          uStack_100 = (uint32_t)uVal_29;
          uStack_fc = (uint32_t)(uVal_29 >> 0x20);
          func_0x1806aa960(pU64_28,pU64_26,sz_18);
          *(uint8_t *)((int64_t)pU64_28 + sz_18) = 0;
          uVal_61 = CONCAT31((int3)(uVal_61 >> 8),1);
          uVal_62 = CONCAT11(uVal_63,1);
          uVal_60 = CONCAT31((int3)((uint)uVal_37 >> 8),1);
          uVal_58 = CONCAT44(uVal_15,3);
          uVal_54 = CONCAT44(uVal_59,0x3f800000);
          in_stack_fffffffffffffd38 = (uint64_t *)CONCAT44(uVal_17,0x3f800000);
          func_0x1800d05c0(&local_17c,&local_118,local_228,fVal_49,in_stack_fffffffffffffd38,uVal_54,
                        uVal_58,uVal_60,uVal_62,uVal_61);
          pU64_26 = local_1d8;
          uVal_59 = (uint32_t)((uint64_t)uVal_54 >> 0x20);
          uVal_15 = (uint32_t)((uint64_t)uVal_58 >> 0x20);
          uVal_63 = (uint8_t)((ushort)uVal_62 >> 8);
          uVal_29 = CONCAT44(uStack_fc,uStack_100);
          if (0xf < uVal_29) {
            lVal_22 = CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
            uVal_21 = uVal_29 + 1;
            lVal_23 = lVal_22;
            if (0xfff < uVal_21) {
              lVal_23 = *(int64_t *)(lVal_22 + -8);
              if (0x1f < (uint64_t)((lVal_22 + -8) - lVal_23)) goto LAB_1803c05af;
              uVal_21 = uVal_29 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_23,uVal_21);
          }
        }
        fVal_49 = local_190._4_4_;
        if ((DAT_1808402bc <= local_190._4_4_) &&
           (fVal_44 = (float)func_0x1800cfa00(), pU64_26 = local_1d8,
           fVal_49 + fVal_44 <= DAT_180840554 + DAT_180840558)) {
          local_118 = (uint16_t)uVal_13;
          uStack_116 = (uint16_t)((uint)uVal_13 >> 0x10);
          in_stack_fffffffffffffd38 =
               (uint64_t *)
               CONCAT44((int)((uint64_t)in_stack_fffffffffffffd38 >> 0x20),0x3f666666);
          uStack_114 = uVal_45;
          uStack_110 = uVal_46;
          fStack_10c = (float)uVal_47;
          func_0x1800d05c0(&local_190,local_148,&local_118,
                        *(float *)(DAT_1808405e0 + 0x174) + *(float *)(DAT_1808405e0 + 0x174) +
                        local_170 + DAT_1806b55e0,in_stack_fffffffffffffd38,
                        CONCAT44(uVal_59,0x3f800000),CONCAT44(uVal_15,3),uVal_60 & 0xffffff00,
                        CONCAT11(uVal_63,1),uVal_61 & 0xffffff00);
          pU64_26 = local_1d8;
        }
        iVal_27 = local_208;
        if (0xf < (uint64_t)local_138._8_8_) {
          uVal_29 = local_138._8_8_ + 1;
          lVal_23 = (int64_t)local_148;
          if (0xfff < uVal_29) {
            lVal_23 = *(int64_t *)((int64_t)local_148 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_148 + -8) - lVal_23)) goto LAB_1803c05af;
            uVal_29 = local_138._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_23,uVal_29);
          iVal_27 = local_208;
        }
      }
      func_0x180057460(&local_238);
    }
    if (plStack_230 != (int64_t *)0x0) {
      LOCK();
      pLong_1 = plStack_230 + 1;
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (**(func_ptr_t *)*plStack_230)(plStack_230);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_12 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_12 + 8))(pLong_12);
        }
      }
    }
    pLong_12 = (int64_t *)local_1c8._8_8_;
    if ((int64_t *)local_1c8._8_8_ != (int64_t *)0x0) {
      LOCK();
      pLong_1 = (int64_t *)(local_1c8._8_8_ + 8);
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (***(func_ptr_t **)local_1c8._8_8_)(local_1c8._8_8_);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_12 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_12 + 8))(pLong_12);
        }
      }
    }
    if (7 < local_1a0) {
      uVal_29 = local_1a0 * 2 + 2;
      lVal_23 = _local_1b8;
      if (0xfff < uVal_29) {
        lVal_23 = *(int64_t *)(_local_1b8 + -8);
        if (0x1f < (uint64_t)((_local_1b8 + -8) - lVal_23)) goto LAB_1803c05af;
        uVal_29 = local_1a0 * 2 + 0x29;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_29);
    }
    local_1a8 = 0;
    local_1a0 = 7;
    auArr_8._14_2_ = 0;
    auArr_8._0_14_ = auStack_1b6;
    _local_1b8 = auArr_8 << 0x10;
    if (0xf < (uint64_t)local_158._8_8_) {
      uVal_29 = local_158._8_8_ + 1;
      lVal_23 = (int64_t)local_168;
      if (0xfff < uVal_29) {
        lVal_23 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_23)) goto LAB_1803c05af;
        uVal_29 = local_158._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_29);
    }
    local_158 = ZEXT816(0xf) << 0x40;
    auArr_9[15] = 0;
    auArr_9._0_15_ = stack0xfffffffffffffe99;
    _local_168 = auArr_9 << 8;
    if (0xf < uStack_1e0) {
      uVal_29 = uStack_1e0 + 1;
      lVal_23 = local_1f8._0_8_;
      if (0xfff < uVal_29) {
        lVal_23 = *(int64_t *)(local_1f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_1f8._0_8_ + -8) - lVal_23)) goto LAB_1803c05af;
        uVal_29 = uStack_1e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_29);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12790) == '\0') {
      lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_23 + 0x12790) = 1;
      *(uint8_t *)(lVal_23 + 0x1278c) = 1;
      *(uint16_t *)(lVal_23 + 0x1278a) = 0xe326;
      func_0x180673140(&LAB_180430db0);
    }
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_01 = (byte *)(lVal_23 + 0x1278a);
    if (*(char *)(lVal_23 + 0x1278c) == '\x01') {
      *_Str_01 = *_Str_01 ^ 0xd;
      *(byte *)(lVal_23 + 0x1278b) = *(byte *)(lVal_23 + 0x1278b) ^ 0xe3;
      *(uint8_t *)(lVal_23 + 0x1278c) = 0;
    }
    uStack_108 = 0;
    uStack_114 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = 0;
    uStack_116 = 0;
    uStack_110 = 0;
    fStack_10c = 0.0;
    uStack_104 = uStack_114;
    sz_18 = strlen((char *)_Str_01);
    uVal_15 = (uint32_t)((uint64_t)in_stack_fffffffffffffd38 >> 0x20);
    if (-1 < (int64_t)sz_18) goto code_r0x0001803bff22;
  }
LAB_1803c05c3:
  func_0x18007ba70();
LAB_1803c05c9:
  func_0x18007ba70();
LAB_1803c05cf:
  func_0x18007ba70();
LAB_1803c05d5:
  func_0x180672ec0(&DAT_1808405e8);
  if (DAT_1808405e8 == -1) {
    DAT_1808405e0 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_1808405e8);
  }
  goto LAB_1803be509;
code_r0x0001803bff22:
  if (sz_18 < 0x10) {
    pU64_28 = &local_118;
    uVal_29 = 0xf;
  }
  else {
    uVal_21 = sz_18 | 0xf;
    uVal_29 = 0x16;
    if (0x16 < uVal_21) {
      uVal_29 = uVal_21;
    }
    if (uVal_21 < 0xfff) {
      pU64_28 = (uint16_t *)func_0x180672de0(uVal_29 + 1);
    }
    else {
      lVal_23 = func_0x180672de0(uVal_29 + 0x28);
      pU64_28 = (uint16_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_28 + -4) = lVal_23;
    }
    local_118 = SUB82(pU64_28,0);
    uStack_116 = (uint16_t)((uint64_t)pU64_28 >> 0x10);
    uStack_114 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
  }
  uStack_108 = (uint32_t)sz_18;
  uStack_104 = (uint32_t)(sz_18 >> 0x20);
  uStack_100 = (uint32_t)uVal_29;
  uStack_fc = (uint32_t)(uVal_29 >> 0x20);
  func_0x1806aa960(pU64_28,_Str_01,sz_18);
  *(uint8_t *)((int64_t)pU64_28 + sz_18) = 0;
  if (iVal_27 < local_16c) {
    fVal_41 = (float)iVal_27 * fVal_41;
    uStack_260 = auArr_36._4_4_;
    uStack_25c = auArr_36._8_4_;
    fVal_49 = auArr_36._0_4_;
  }
  else {
    fVal_41 = fVal_41 * 0.0;
    fVal_49 = fStack_264;
  }
  fVal_41 = fVal_41 + DAT_1808402b8 + local_124;
  iVal_16 = local_120 + (local_16c <= iVal_27);
  fVal_48 = (float)iVal_16 * fVal_31 + local_124 + DAT_1808402bc;
  auArr_34._4_4_ = fVal_49;
  auArr_34._0_4_ = fVal_41;
  auArr_34._8_4_ = uStack_260;
  auArr_34._12_4_ = uStack_25c;
  auArr_39 = insertps(auArr_34,ZEXT416((uint)fVal_48),0x10);
  fVal_49 = auArr_39._0_4_;
  fVal_44 = auArr_39._4_4_;
  fVal_52 = (local_268 + fVal_49) - fVal_49;
  fVal_50 = (fStack_264 + fVal_44) - fVal_44;
  fVal_31 = DAT_1806b28a0._4_4_ * fVal_50 + fVal_44;
  local_190 = (uint16_t *)CONCAT44(fVal_31,(float)DAT_1806b28a0 * fVal_52 + fVal_49);
  if ((DAT_1808402c8 <= fVal_41) || (DAT_1808402cc <= fVal_48)) {
LAB_1803c01e5:
    uVal_61 = *(uint *)(DAT_1808405e0 + 0x174);
    uVal_37 = 1;
    uVal_59 = 1;
    uVal_54 = CONCAT44(uVal_15,*(uint32_t *)(DAT_1808405e0 + 0x170));
    uVal_63 = 0;
    func_0x1800d36e0(iVal_16,fVal_48,fVal_52,CONCAT44(fVal_50,fVal_50),uVal_54,&DAT_18083cbe0,&DAT_18083cbc0,
                  uVal_61,0xf,*(uint32_t *)(DAT_1808405e0 + 0x224));
    uVal_15 = (uint32_t)((uint64_t)uVal_54 >> 0x20);
LAB_1803c0242:
    if (DAT_1808402bc <= fVal_31) {
LAB_1803c0253:
      fVal_41 = (float)func_0x1800cfa00();
      if (fVal_31 + fVal_41 <= DAT_180840554 + DAT_180840558) {
        unique0x1000064c = uVal_45;
        _local_1b8 = uVal_13;
        unique0x10000650 = uVal_46;
        unique0x10000654 = uVal_47;
        func_0x1800d05c0(&local_190,&local_118,local_1b8,
                      *(float *)(DAT_1808405e0 + 0x174) + *(float *)(DAT_1808405e0 + 0x174) + fVal_52
                      + DAT_1806b5ef4,CONCAT44(uVal_15,0x40200000),CONCAT44(uVal_59,0x3f800000),
                      CONCAT44(uVal_37,3),uVal_61 & 0xffffff00,CONCAT11(uVal_63,1),1);
      }
    }
  }
  else {
    auArr_39 = insertps(ZEXT416((uint)DAT_1808402c8),ZEXT416((uint)DAT_1808402cc),0x10);
    iVal_53 = -(uint)(auArr_39._0_4_ < local_268 + fVal_49);
    iVal_14 = -(uint)(auArr_39._4_4_ < fStack_264 + fVal_44);
    auArr_6._4_4_ = iVal_53;
    auArr_6._0_4_ = iVal_53;
    auArr_6._8_4_ = iVal_14;
    auArr_6._12_4_ = iVal_14;
    iVal_27 = movmskpd((uint)(local_16c <= iVal_27),auArr_6);
    if (iVal_27 != 3) goto LAB_1803c01e5;
    uVal_61 = *(uint *)(DAT_1808405e0 + 0x174);
    uVal_37 = 1;
    uVal_59 = 1;
    uVal_54 = CONCAT44(uVal_15,*(uint32_t *)(DAT_1808405e0 + 0x170));
    uVal_63 = 0;
    func_0x1800d36e0(iVal_16,fVal_48,fVal_52,CONCAT44(fVal_50,fVal_50),uVal_54,&DAT_18083cbd0,&DAT_18083cbc0,
                  uVal_61,0xf,*(uint32_t *)(DAT_1808405e0 + 0x224));
    uVal_15 = (uint32_t)((uint64_t)uVal_54 >> 0x20);
    if (DAT_18083ef17 != '\x01') goto LAB_1803c0242;
    func_0x18039bd20(&DAT_1808401b0,1);
    uVal_17 = func_0x18068a0e8();
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x127a0) == '\0') {
      lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_23 + 0x127a0) = 1;
      *(uint64_t *)(lVal_23 + 0x12798) = 0x1d7a4c2c63afe9d;
      func_0x180673140(&LAB_180430dd0);
    }
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_23 + 0x12798);
    if (*(char *)(lVal_23 + 0x1279f) == '\x01') {
      *pU64_3 = (CONCAT44((uint)*(ushort *)(lVal_23 + 0x1279d) << 8,*(uint32_t *)pU64_3) |
                (uint64_t)*(byte *)(lVal_23 + 0x1279c) << 0x20) ^ SUB168(_DAT_1806c89c0,0);
    }
    _local_168 = ZEXT816(0);
    local_158 = _local_168;
    sz_18 = strlen((char *)pU64_3);
    if ((int64_t)sz_18 < 0) {
LAB_1803c063b:
      func_0x18007ba70();
      fnPtr_5 = (func_ptr_t )swi(3);
      (*fnPtr_5)();
      return;
    }
    uVal_29 = 0xf;
    pU64_30 = local_168;
    if (0xf < sz_18) {
      uVal_21 = sz_18 | 0xf;
      uVal_29 = 0x16;
      if (0x16 < uVal_21) {
        uVal_29 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_30 = (uint8_t *)func_0x180672de0(uVal_29 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_29 + 0x28);
        pU64_30 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_30 + -8) = lVal_23;
      }
      local_168 = (uint8_t  [8])pU64_30;
    }
    local_158._8_8_ = uVal_29;
    local_158._0_8_ = sz_18;
    func_0x1806aa960(pU64_30,pU64_3,sz_18);
    pU64_30[sz_18] = 0;
    local_148._0_4_ = uVal_17;
    local_1f8._8_8_ = local_148;
    local_1f8._0_8_ = 1;
    local_228 = (uint8_t  [8])local_168;
    if (0xf < (uint64_t)local_158._8_8_) {
      local_228 = local_168;
    }
    uStack_220 = local_158._0_8_;
    func_0x18063ff10(local_1b8,local_228,local_1f8);
    func_0x180397850(&DAT_1808401b0,local_1b8,1,1);
    if (0xf < local_1a0) {
      uVal_29 = local_1a0 + 1;
      lVal_23 = _local_1b8;
      if (0xfff < uVal_29) {
        lVal_23 = *(int64_t *)(_local_1b8 + -8);
        if (0x1f < (uint64_t)((_local_1b8 + -8) - lVal_23)) goto LAB_1803c05af;
        uVal_29 = local_1a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_29);
    }
    local_1a8 = 0;
    local_1a0 = 0xf;
    auArr_10[15] = 0;
    auArr_10._0_15_ = stack0xfffffffffffffe49;
    _local_1b8 = auArr_10 << 8;
    if (0xf < (uint64_t)local_158._8_8_) {
      uVal_29 = local_158._8_8_ + 1;
      lVal_23 = (int64_t)local_168;
      if (0xfff < uVal_29) {
        lVal_23 = *(int64_t *)((int64_t)local_168 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_168 + -8) - lVal_23)) goto LAB_1803c05af;
        uVal_29 = local_158._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_29);
    }
    DAT_18083ef17 = '\0';
    fVal_31 = local_190._4_4_;
    if (DAT_1808402bc <= local_190._4_4_) goto LAB_1803c0253;
  }
  uVal_29 = CONCAT44(uStack_fc,uStack_100);
  if (0xf < uVal_29) {
    lVal_22 = CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
    uVal_21 = uVal_29 + 1;
    lVal_23 = lVal_22;
    if (0xfff < uVal_21) {
      lVal_23 = *(int64_t *)(lVal_22 + -8);
      if (0x1f < (uint64_t)((lVal_22 + -8) - lVal_23)) {
LAB_1803c05af:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_21 = uVal_29 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_23,uVal_21);
  }
  return;
}

// Unwind@1803c0650
void Unwind_1803c0650(void)
{
  func_0x180672f60(&DAT_1808405e8);
  return;
}

// Unwind@1803c0730
void Unwind_1803c0730(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1277c) = 0;
  return;
}

// Unwind@1803c0820
void Unwind_1803c0820(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12758) = 0;
  return;
}

// Unwind@1803c0910
void Unwind_1803c0910(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1803c09f0
void Unwind_1803c09f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1803c0ad0
void Unwind_1803c0ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@1803c0bb0
void Unwind_1803c0bb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@1803c0c90
void Unwind_1803c0c90(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x120);
  func_0x1800565c0(param_2 + 0x130);
  return;
}

// Unwind@1803c0d80
void Unwind_1803c0d80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@1803c0e60
void Unwind_1803c0e60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1803c0f40
void Unwind_1803c0f40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1803c1020
void Unwind_1803c1020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@1803c1100
void Unwind_1803c1100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1d0);
  return;
}

// Unwind@1803c11e0
void Unwind_1803c11e0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x1d0);
  return;
}

// Unwind@1803c12c0
void Unwind_1803c12c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x1d0);
  return;
}

// Unwind@1803c13a0
void Unwind_1803c13a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803c1480
void Unwind_1803c1480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1a0);
  return;
}

// Unwind@1803c1560
void Unwind_1803c1560(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x90);
  func_0x18001deb0(param_2 + 0xb0);
  func_0x18001deb0(param_2 + 0x120);
  func_0x1800565c0(param_2 + 0x130);
  func_0x180001e70(param_2 + 0x180);
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// func_0x1803c1680
uint8_t (*func_0x1803c1680(uint64_t *param_1,uint8_t (*param_2)[16]))[16]
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  short *pSize_3;
  short *pSize_4;
  short *pSize_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  short *pSize_8;
  short *pSize_9;
  int64_t lVal_10;
  uint64_t uVal_11;
  uint8_t (*pArr16_12)[16];
  uint64_t uVal_13;
  
  pLong_1 = param_1 + 2;
  if (7 < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  pSize_9 = (short *)((int64_t)param_1 + *pLong_1 * 2);
  pSize_3 = (short *)func_0x180088fc0(param_1,pSize_9);
  pSize_4 = pSize_9;
  do {
    pSize_8 = pSize_4;
    if ((pSize_8 == pSize_3) || (pSize_8[-1] == 0x5c)) break;
    pSize_4 = pSize_8 + -1;
  } while (pSize_8[-1] != 0x2f);
  pSize_4 = (short *)thunk_FUN_180676570(pSize_8,pSize_9,0x3a);
  pSize_9 = pSize_4;
  if ((pSize_8 != pSize_4) && (pSize_3 = pSize_4 + -1, pSize_8 != pSize_3)) {
    if (*pSize_3 == 0x2e) {
      if ((pSize_8 != pSize_4 + -2) || (pSize_4[-2] != 0x2e)) {
        pSize_9 = pSize_3;
      }
    }
    else {
      pSize_3 = pSize_4 + -2;
      do {
        pSize_5 = pSize_3;
        pSize_9 = pSize_4;
        if (pSize_8 == pSize_5) break;
        pSize_3 = pSize_5 + -1;
        pSize_9 = pSize_5;
      } while (*pSize_5 != 0x2e);
    }
  }
  lVal_10 = (int64_t)pSize_4 - (int64_t)pSize_9;
  uVal_13 = lVal_10 >> 1;
  *param_2 = ZEXT816(0);
  if (0x7ffffffffffffffe < uVal_13) {
    func_0x18007ba70();
    fnPtr_2 = (func_ptr_t )swi(3);
    pArr16_12 = (uint8_t (*)[16])(*fnPtr_2)();
    return pArr16_12;
  }
  uVal_11 = 7;
  pArr16_12 = param_2;
  if (7 < uVal_13) {
    uVal_6 = uVal_13 | 7;
    uVal_11 = 10;
    if (10 < uVal_6) {
      uVal_11 = uVal_6;
    }
    if (uVal_6 < 0x7ff) {
      pArr16_12 = (uint8_t (*)[16])func_0x180672de0(uVal_11 * 2 + 2);
    }
    else {
      lVal_7 = func_0x180672de0(uVal_11 * 2 + 0x29);
      pArr16_12 = (uint8_t (*)[16])(lVal_7 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pArr16_12[-1] + 8) = lVal_7;
    }
    *(uint8_t (**)[16])*param_2 = pArr16_12;
  }
  *(uint64_t *)param_2[1] = uVal_13;
  *(uint64_t *)(param_2[1] + 8) = uVal_11;
  func_0x1806aa960(pArr16_12,pSize_9,lVal_10);
  *(uint16_t *)((int64_t)pArr16_12 + lVal_10) = 0;
  return param_2;
}

// func_0x1803c17e0
uint8_t (*func_0x1803c17e0(uint64_t *param_1,uint8_t (*param_2)[16]))[16]
{
  int64_t *pLong_1;
  func_ptr_t fnPtr_2;
  short *pSize_3;
  short *pSize_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  short *pSize_8;
  short *pSize_9;
  uint64_t uVal_10;
  short *pSize_11;
  uint64_t uVal_12;
  uint8_t (*pArr16_13)[16];
  
  pLong_1 = param_1 + 2;
  if (7 < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  pSize_11 = (short *)((int64_t)param_1 + *pLong_1 * 2);
  pSize_3 = (short *)func_0x180088fc0(param_1,pSize_11);
  lVal_6 = -(int64_t)pSize_11;
  pSize_4 = pSize_11;
  do {
    pSize_9 = pSize_4;
    lVal_7 = lVal_6;
    if (pSize_9 == pSize_3) break;
    if (pSize_9[-1] == 0x5c) break;
    lVal_6 = lVal_7 + 2;
    pSize_4 = pSize_9 + -1;
  } while (pSize_9[-1] != 0x2f);
  pSize_4 = (short *)thunk_FUN_180676570(pSize_9,pSize_11,0x3a);
  pSize_11 = pSize_9;
  if ((pSize_9 != pSize_4) && (pSize_3 = pSize_4 + -1, pSize_11 = pSize_4, pSize_9 != pSize_3)) {
    if (*pSize_3 == 0x2e) {
      if ((pSize_9 != pSize_4 + -2) || (pSize_4[-2] != 0x2e)) {
        pSize_11 = pSize_3;
      }
    }
    else {
      pSize_3 = pSize_4 + -2;
      do {
        pSize_8 = pSize_3;
        pSize_11 = pSize_4;
        if (pSize_9 == pSize_8) break;
        pSize_3 = pSize_8 + -1;
        pSize_11 = pSize_8;
      } while (*pSize_8 != 0x2e);
    }
  }
  uVal_12 = (int64_t)pSize_11 + lVal_7 >> 1;
  *param_2 = ZEXT816(0);
  if (0x7ffffffffffffffe < uVal_12) {
    func_0x18007ba70();
    fnPtr_2 = (func_ptr_t )swi(3);
    pArr16_13 = (uint8_t (*)[16])(*fnPtr_2)();
    return pArr16_13;
  }
  uVal_10 = 7;
  pArr16_13 = param_2;
  if (7 < uVal_12) {
    uVal_5 = uVal_12 | 7;
    uVal_10 = 10;
    if (10 < uVal_5) {
      uVal_10 = uVal_5;
    }
    if (uVal_5 < 0x7ff) {
      pArr16_13 = (uint8_t (*)[16])func_0x180672de0(uVal_10 * 2 + 2);
    }
    else {
      lVal_6 = func_0x180672de0(uVal_10 * 2 + 0x29);
      pArr16_13 = (uint8_t (*)[16])(lVal_6 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pArr16_13[-1] + 8) = lVal_6;
    }
    *(uint8_t (**)[16])*param_2 = pArr16_13;
  }
  *(uint64_t *)param_2[1] = uVal_12;
  *(uint64_t *)(param_2[1] + 8) = uVal_10;
  func_0x1806aa960(pArr16_13,pSize_9,(int64_t)pSize_11 + lVal_7);
  *(uint16_t *)(lVal_7 + (int64_t)pSize_11 + (int64_t)pArr16_13) = 0;
  return param_2;
}

// func_0x1803c1960
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803c1960(uint64_t param_1,byte param_2)
{
  int64_t lVal_1;
  byte bFlag_2;
  float fVal_3;
  float fVal_4;
  float fVal_5;
  float fVal_6;
  uint64_t *pU64_7;
  uint32_t uVal_9;
  uint uVal_10;
  uint8_t uVal_11;
  float local_90;
  float local_8c;
  uint64_t local_88;
  uint32_t uStack_80;
  float fStack_7c;
  uint64_t local_70;
  uint32_t uVal_8;
  
  local_70 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_1808405f8) && (func_0x180672ec0(&DAT_1808405f8), DAT_1808405f8 == -1)) {
    DAT_1808405f0 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_1808405f8);
  }
  fVal_4 = DAT_180840588 + DAT_1806c3930;
  fVal_5 = (float)(uint)param_2 * _DAT_1806c89d0 + DAT_1808402bc + *(float *)(DAT_1808405f0 + 0x1e8);
  fVal_3 = DAT_1808402b8 + DAT_1806c8868;
  fVal_6 = DAT_1806ae7b4 + fVal_5;
  if ((((DAT_1808402c8 <= fVal_4) || (DAT_1808402cc <= fVal_5)) || (fVal_3 <= DAT_1808402c8)) ||
     (fVal_6 <= DAT_1808402cc)) {
    uVal_10 = *(uint *)(DAT_1808405f0 + 0x174);
    fStack_7c = DAT_18083cb2c;
    if ((DAT_1808405fc == param_2) && ((param_2 != 2 || (DAT_180840560 == DAT_1808405f0)))) {
      fStack_7c = DAT_18083cb0c + _DAT_1806c8994;
    }
    local_88 = DAT_18083cb20;
    uStack_80 = DAT_18083cb28;
    uVal_9 = 1;
    pU64_7 = &local_88;
    uVal_11 = 0;
    func_0x1800d36e0(fVal_4,fVal_5,fVal_3 - fVal_4,fVal_6 - fVal_5,*(uint32_t *)(DAT_1808405f0 + 0x170),
                  pU64_7,&DAT_18083caf0,uVal_10,0xf,*(uint32_t *)(DAT_1808405f0 + 0x2ac));
    uVal_8 = (uint32_t)((uint64_t)pU64_7 >> 0x20);
  }
  else {
    uVal_10 = *(uint *)(DAT_1808405f0 + 0x174);
    uVal_9 = 1;
    uVal_8 = 1;
    uVal_11 = 0;
    func_0x1800d36e0(fVal_4,fVal_5,fVal_3 - fVal_4,fVal_6 - fVal_5,*(uint32_t *)(DAT_1808405f0 + 0x170),
                  &DAT_18083cb00,&DAT_18083caf0,uVal_10,0xf,*(uint32_t *)(DAT_1808405f0 + 0x2ac));
    bFlag_2 = DAT_1808405fc;
    lVal_1 = DAT_180840580;
    if (DAT_18083ef17 == '\x01') {
      if (param_2 == 0) {
        DAT_180840568 = 0;
        DAT_1808405fc = 0;
      }
      else {
        DAT_1808405fc = param_2;
        if (param_2 == 2) {
          DAT_180840560 = DAT_1808405f0;
        }
      }
      DAT_18084060f = bFlag_2;
      DAT_1808405d4 = 0;
      if (DAT_180840580 != 0) {
        if (*(char *)(DAT_180840580 + 0xd8) == '\x06') {
          *(uint8_t *)(DAT_180840580 + 0x98) = 0;
        }
        else {
          func_0x1801b3250();
          *(uint8_t *)(lVal_1 + 0x98) = 0;
          *(uint8_t *)(lVal_1 + 0xd8) = 6;
        }
      }
      DAT_180840580 = 0;
      DAT_18083cb10 = 0xbf800000;
      DAT_18083ef17 = '\0';
    }
  }
  local_90 = fVal_4 + (fVal_3 - fVal_4) * DAT_1806aeae4;
  local_8c = fVal_5 + (fVal_6 - fVal_5) * DAT_1806aeae4;
  local_88 = CONCAT44(_UNK_1806b2884,_DAT_1806b2880);
  uStack_80 = _UNK_1806b2888;
  fStack_7c = (float)_UNK_1806b288c;
  func_0x1800d05c0(&local_90,param_1,&local_88,
                ((fVal_3 - fVal_4) -
                (*(float *)(DAT_1808405f0 + 0x174) + *(float *)(DAT_1808405f0 + 0x174))) +
                DAT_1806b5ef4,0x3f800000,CONCAT44(uVal_8,0x3f800000),CONCAT44(uVal_9,3),
                uVal_10 & 0xffffff00,CONCAT11(uVal_11,1),1);
  return;
}

// Unwind@1803c1d20
void Unwind_1803c1d20(void)
{
  func_0x180672f60(&DAT_1808405f8);
  return;
}

// func_0x1803c1d90
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803c1d90(uint8_t (*param_1)[12])
{
  char *fnPtr_1;
  uint *_Str;
  uint64_t *_Str_00;
  func_ptr_t fnPtr_2;
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  byte bFlag_9;
  uint8_t (*pArr16_10)[12];
  uint32_t uVal_11;
  byte bFlag_12;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  uint32_t extraout_var_01;
  uint32_t extraout_var_02;
  uint32_t extraout_var_03;
  size_t sz_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  byte bFlag_16;
  char ch_17;
  int64_t lVal_18;
  float *pFloat_19;
  float *pFloat_20;
  uint8_t *pU64_21;
  uint64_t uVal_22;
  int iVal_23;
  float fVal_24;
  float fVal_25;
  uint64_t uVal_26;
  uint64_t extraout_XMM0_Qb;
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
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auArr_39 [16];
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  float fVal_40;
  uint8_t auArr_41 [16];
  uint8_t auArr_42 [16];
  uint8_t auArr_43 [16];
  uint8_t auArr_44 [16];
  uint8_t auArr_45 [16];
  uint8_t auArr_46 [16];
  uint8_t auArr_47 [16];
  uint8_t auArr_48 [16];
  uint8_t auArr_49 [16];
  uint8_t auArr_50 [16];
  uint8_t auArr_51 [16];
  uint8_t auArr_52 [16];
  float fVal_53;
  uint8_t auArr_54 [16];
  uint8_t auArr_55 [16];
  uint8_t auArr_56 [16];
  uint8_t auArr_57 [16];
  uint8_t auArr_58 [16];
  uint8_t auArr_59 [16];
  uint8_t auArr_60 [16];
  uint8_t auArr_61 [16];
  uint8_t auArr_62 [16];
  float fVal_63;
  uint8_t auArr_64 [16];
  uint8_t auArr_65 [16];
  float fVal_66;
  float fVal_67;
  uint8_t auArr_68 [16];
  float fVal_69;
  float fVal_70;
  float fVal_71;
  float fVal_72;
  float fVal_73;
  float fVal_76;
  uint8_t auArr_74 [16];
  uint8_t auArr_75 [16];
  float in_xmmTmp2_Dd;
  uint8_t local_278 [16];
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  uint32_t local_258;
  uint32_t uStack_254;
  uint32_t uStack_250;
  uint32_t uStack_24c;
  uint8_t local_248 [16];
  uint8_t local_238 [16];
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  uint8_t local_218 [8];
  uint32_t uStack_210;
  uint32_t uStack_20c;
  uint8_t *local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  float local_1f0;
  uint32_t local_1ec;
  uint64_t local_1e8;
  uint64_t local_1e0;
  float local_1d8;
  uint32_t uStack_1d4;
  float fStack_1d0;
  uint32_t uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  uint32_t uStack_1b4;
  float local_1b0;
  uint32_t local_1ac;
  int64_t local_1a8;
  uint64_t local_1a0;
  float local_198;
  float local_194;
  uint64_t local_190;
  uint64_t local_188;
  uint64_t *puStack_180;
  uint8_t (*local_170)[12];
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint64_t local_148;
  float fStack_140;
  float fStack_13c;
  uint16_t uStack_138;
  uint8_t uStack_136;
  uint32_t uStack_135;
  uint32_t uStack_131;
  undefined5 uStack_12d;
  float local_128;
  uint8_t local_118 [4];
  uint8_t auStack_114 [4];
  uint64_t uStack_110;
  uint8_t local_108 [24];
  uint64_t local_f0;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_03;
  
  local_f0 = 0xfffffffffffffffe;
  local_170 = param_1;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840608) && (func_0x180672ec0(&DAT_180840608), DAT_180840608 == -1)) {
    DAT_180840600 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840608);
    param_1 = local_170;
  }
  fVal_25 = DAT_1806b26b4;
  fVal_70 = DAT_1806ae7b0;
  fVal_73 = *(float *)param_1[1];
  local_1f0 = *(float *)(*param_1 + 8);
  local_1f8 = *(uint64_t *)*param_1;
  auArr_27._4_4_ = (float)((uint64_t)local_1f8 >> 0x20);
  local_1ec = 0x3f800000;
  local_1d8 = _DAT_1806b5b30;
  uStack_1d4 = _UNK_1806b5b34;
  fStack_1d0 = (float)_UNK_1806b5b38;
  uStack_1cc = _UNK_1806b5b3c;
  local_1c8 = _DAT_1806b2880;
  fStack_1c4 = _UNK_1806b2884;
  fStack_1c0 = _UNK_1806b2888;
  fStack_1bc = _UNK_1806b288c;
  local_268 = _DAT_1806c89e0;
  fStack_264 = _UNK_1806c89e4;
  fStack_260 = _UNK_1806c89e8;
  fStack_25c = _UNK_1806c89ec;
  local_258 = _DAT_1806b5540;
  uStack_254 = _UNK_1806b5544;
  uStack_250 = _UNK_1806b5548;
  uStack_24c = _UNK_1806b554c;
  local_248 = ZEXT816(0);
  fVal_53 = (float)local_1f8;
  auArr_74 = insertps(ZEXT416(DAT_1808402b8),DAT_1808402bc,0x10);
  fVal_72 = auArr_74._0_4_ + _DAT_1806c89f0;
  fVal_76 = auArr_74._4_4_ + _UNK_1806c89f4;
  auArr_46._0_8_ = CONCAT44(fVal_76,fVal_72);
  auArr_46._8_4_ = auArr_74._8_4_ + _UNK_1806c89f8;
  auArr_46._12_4_ = auArr_74._12_4_ + _UNK_1806c89fc;
  local_278._12_4_ = 0;
  local_278._0_12_ = *param_1;
  fVal_63 = DAT_1808402c0 + _DAT_1806c8a00;
  fVal_69 = (DAT_180840554 + DAT_180840558 + DAT_1806c3800) - fVal_76;
  fVal_66 = local_1f0;
  fVal_24 = auArr_27._4_4_;
  if (local_1f0 <= auArr_27._4_4_) {
    fVal_66 = auArr_27._4_4_;
    fVal_24 = local_1f0;
  }
  fVal_40 = (float)(-(uint)(auArr_27._4_4_ < local_1f0) & (uint)DAT_1806ae7b0);
  fVal_71 = fVal_66;
  if (fVal_66 <= fVal_53) {
    fVal_71 = fVal_53;
  }
  auArr_27._0_4_ = -(uint)(fVal_53 < fVal_66);
  auArr_27._8_8_ = 0;
  auArr_74 = blendvps(ZEXT416((uint)fVal_40),ZEXT416((uint)(DAT_1806c8a04 - fVal_40)),auArr_27);
  uVal_26 = local_1f8;
  if (fVal_66 <= fVal_53) {
    uVal_26 = CONCAT44(auArr_27._4_4_,fVal_66);
  }
  fVal_66 = (float)uVal_26;
  fVal_53 = fVal_66;
  if (fVal_24 <= fVal_66) {
    fVal_53 = fVal_24;
  }
  fVal_40 = (float)((uint)((fVal_66 - fVal_24) / (DAT_1806beca0 * (fVal_71 - fVal_53) + DAT_1806c8a08) +
                         auArr_74._0_4_) & _DAT_1806b55f0);
  fVal_67 = (fVal_71 - fVal_53) / (DAT_1806c8a08 + fVal_71);
  local_158 = fVal_76;
  fStack_154 = fVal_76;
  fStack_150 = auArr_46._12_4_;
  fStack_14c = auArr_46._12_4_;
  auArr_74._0_8_ = func_0x18068afa0();
  fVal_66 = DAT_1806b26b4;
  auArr_74._8_8_ = extraout_XMM0_Qb;
  auArr_65._4_12_ = auArr_74._4_12_;
  fVal_24 = (float)auArr_74._0_8_ / DAT_1806b6144;
  fVal_53 = fVal_25 - (fVal_24 - (float)(int)fVal_24);
  if ((uint)(int)fVal_24 < 5) {
    auArr_65._0_4_ = (fVal_24 - (float)(int)fVal_24) + fVal_70 + fVal_25;
                    /* WARNING: Could not recover jumptable at 0x0001803c1fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(func_ptr_t )(&DAT_1806ce6d0 + *(int *)(&DAT_1806ce6d0 + CONCAT44(extraout_var,(int)fVal_24) * 4)))
              (auArr_65._0_8_);
    return;
  }
  local_1d8 = fVal_25;
  uStack_1d4 = 0;
  auArr_74 = insertps(ZEXT416((uint)fVal_63),ZEXT416((uint)(fVal_25 - fVal_71)),0x10);
  auArr_27 = insertps(ZEXT416((uint)fVal_67),ZEXT416((uint)fVal_69),0x10);
  local_190 = CONCAT44(auArr_27._4_4_ * auArr_74._4_4_ + fVal_76,auArr_27._0_4_ * auArr_74._0_4_ + fVal_72
                      );
  auArr_60._8_4_ = auArr_46._8_4_;
  auArr_60._0_8_ = auArr_46._0_8_;
  auArr_60._12_4_ = auArr_46._12_4_;
  auArr_61._4_12_ = auArr_60._4_12_;
  auArr_61._0_4_ = fVal_72 + fVal_63;
  local_164 = DAT_1806c3890 + auArr_61._0_4_;
  local_160 = fVal_40 * fVal_69 + local_158;
  local_198 = DAT_1806c8a0c + auArr_61._0_4_;
  local_194 = (fVal_25 - *(float *)param_1[1]) * fVal_69 + local_158;
  fStack_1d0 = fVal_53;
  if (DAT_18083ef14 == '\x01') {
    if (((auArr_61._0_4_ <= DAT_1808402c8) || (DAT_1808402c8 <= fVal_72)) ||
       (local_158 + fVal_69 <= DAT_1808402cc)) {
      bFlag_12 = 1;
      if (DAT_18084060c != 1) goto LAB_1803c211f;
LAB_1803c21b3:
      if ((DAT_18084060d != 0) || ((DAT_18084060e & 1) != 0)) goto LAB_1803c2121;
      DAT_18084060c = 1;
      auArr_5._4_4_ = fStack_154;
      auArr_5._0_4_ = local_158;
      auArr_5._8_4_ = fStack_150;
      auArr_5._12_4_ = fStack_14c;
      auArr_44._4_12_ = auArr_5._4_12_;
      auArr_44._0_4_ = local_158 + fVal_69;
      auArr_28._4_4_ = fVal_76;
      auArr_28._0_4_ = auArr_61._0_4_;
      auArr_28._8_4_ = auArr_46._8_4_;
      auArr_28._12_4_ = auArr_46._12_4_;
      auArr_27 = insertps(auArr_28,auArr_44,0x10);
      auArr_74 = insertps(ZEXT416((uint)DAT_1808402c8),DAT_1808402cc,0x10);
      auArr_65 = minps(auArr_74,auArr_27);
      auArr_29._4_4_ = -(uint)NAN(auArr_27._4_4_);
      auArr_29._0_4_ = -(uint)NAN(auArr_27._0_4_);
      auArr_29._8_4_ = -(uint)(NAN(auArr_27._8_4_) || NAN(auArr_27._12_4_));
      auArr_29._12_4_ = -(uint)(NAN(auArr_27._12_4_) || NAN(in_xmmTmp2_Dd));
      auArr_27 = blendvps(auArr_65,auArr_74,auArr_29);
      DAT_18084060d = 0;
      auArr_74 = maxps(auArr_27,auArr_46);
      auArr_30._4_4_ = -(uint)NAN(fVal_76);
      auArr_30._0_4_ = -(uint)NAN(fVal_72);
      auArr_30._8_4_ = -(uint)(NAN(auArr_46._8_4_) || NAN(auArr_46._12_4_));
      auArr_30._12_4_ = -(uint)(NAN(auArr_46._12_4_) || NAN(in_xmmTmp2_Dd));
      auArr_27 = blendvps(auArr_74,auArr_27,auArr_30);
      DAT_18084060e = 0;
      local_190 = auArr_27._0_8_;
      fVal_71 = DAT_1806b26b4 - (auArr_27._4_4_ - fVal_76) / fVal_69;
      fVal_63 = (auArr_27._0_4_ - fVal_72) / fVal_63;
      if ((fVal_63 != 0.0) || (NAN(fVal_63))) {
        auArr_61._4_4_ = fVal_76;
        fVal_53 = (float)func_0x18068afa0();
        fVal_53 = fVal_53 / DAT_1806b6144;
        fVal_25 = (fVal_66 - fVal_63) * fVal_71;
        fVal_24 = (fVal_66 - fVal_63 * (fVal_53 - (float)(int)fVal_53)) * fVal_71;
        if ((uint)(int)fVal_53 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0001803c22d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(func_ptr_t )(&DAT_1806ce6e4 +
                    *(int *)(&DAT_1806ce6e4 + CONCAT44(extraout_var_00,(int)fVal_53) * 4)))
                    (&DAT_1806ce6e4,fVal_24,fVal_25,fVal_66 - (fVal_53 - (float)(int)fVal_53));
          return;
        }
        auArr_61._8_4_ = auArr_46._8_4_;
        auArr_61._12_4_ = auArr_46._12_4_;
      }
      else {
LAB_1803c23e3:
        DAT_18084060e = 0;
        fVal_24 = fVal_71;
        fVal_25 = fVal_71;
      }
LAB_1803c2573:
      *(float *)*param_1 = fVal_71;
      *(float *)(*param_1 + 4) = fVal_25;
      *(float *)(*param_1 + 8) = fVal_24;
    }
    else {
      bFlag_12 = DAT_18084060c;
      if ((local_158 < DAT_1808402cc | DAT_18084060c & 1) != 0) goto LAB_1803c21b3;
LAB_1803c211f:
      bFlag_12 = 0;
LAB_1803c2121:
      bFlag_9 = DAT_18084060d;
      if ((DAT_1806b6134 + auArr_61._0_4_ <= DAT_1808402c8) ||
         (DAT_1808402c8 <= DAT_1806b6550 + auArr_61._0_4_)) {
joined_r0x0001803c22ec:
        bFlag_16 = 1;
        if (bFlag_9 == 0) goto LAB_1803c2183;
LAB_1803c22f2:
        if (((DAT_18084060e | bFlag_12) & 1) == 0) {
          auArr_6._4_4_ = fStack_154;
          auArr_6._0_4_ = local_158;
          auArr_6._8_4_ = fStack_150;
          auArr_6._12_4_ = fStack_14c;
          auArr_31._4_12_ = auArr_6._4_12_;
          fVal_25 = local_158 + fVal_69;
          fVal_24 = DAT_1808402cc;
          if (fVal_25 <= DAT_1808402cc) {
            fVal_24 = fVal_25;
          }
          auArr_31._0_4_ = -(uint)NAN(fVal_25);
          auArr_27 = blendvps(ZEXT416((uint)fVal_24),ZEXT416((uint)DAT_1808402cc),auArr_31);
          DAT_18084060c = 0;
          DAT_18084060d = 1;
          DAT_18084060e = 0;
          auArr_41 = auArr_27;
          if (auArr_27._0_4_ <= local_158) {
            auArr_41._4_12_ = auArr_27._4_12_;
            auArr_41._0_4_ = local_158;
          }
          auArr_32._4_12_ = auArr_31._4_12_;
          auArr_32._0_4_ = -(uint)NAN(local_158);
          auArr_27 = blendvps(auArr_41,auArr_27,auArr_32);
          local_160 = auArr_27._0_4_;
          if ((fVal_67 == 0.0) && (!NAN(fVal_67))) goto LAB_1803c23e3;
          fVal_53 = (float)func_0x18068afa0();
          fVal_53 = fVal_53 / DAT_1806b6144;
          fVal_25 = (fVal_66 - fVal_67) * fVal_71;
          fVal_24 = (fVal_66 - fVal_67 * (fVal_53 - (float)(int)fVal_53)) * fVal_71;
          if ((uint)(int)fVal_53 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0001803c24a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(func_ptr_t )(&DAT_1806ce6f8 +
                      *(int *)(&DAT_1806ce6f8 + CONCAT44(extraout_var_01,(int)fVal_53) * 4)))
                      (&DAT_1806ce6f8,fVal_24,fVal_25,fVal_66 - (fVal_53 - (float)(int)fVal_53));
            return;
          }
          auArr_61._4_4_ = fVal_76;
          auArr_61._8_4_ = auArr_46._8_4_;
          auArr_61._12_4_ = auArr_46._12_4_;
          goto LAB_1803c2573;
        }
      }
      else {
        if (local_158 + fVal_69 <= DAT_1808402cc) {
          bFlag_9 = DAT_18084060d & 1;
          goto joined_r0x0001803c22ec;
        }
        bFlag_16 = DAT_18084060d;
        if ((local_158 < DAT_1808402cc | DAT_18084060d & 1) != 0) goto LAB_1803c22f2;
LAB_1803c2183:
        bFlag_16 = 0;
      }
      if ((fVal_73 != DAT_1806ae7b0) || (NAN(fVal_73) || NAN(DAT_1806ae7b0))) {
        if ((DAT_1806ae7b4 + auArr_61._0_4_ <= DAT_1808402c8) ||
           (DAT_1808402c8 <= DAT_1806b67d0 + auArr_61._0_4_)) {
          bFlag_12 = bFlag_12 | bFlag_16 | ~DAT_18084060e;
        }
        else if (DAT_1808402cc < local_158 + fVal_69) {
          bFlag_12 = bFlag_12 | bFlag_16 | DAT_1808402cc <= local_158 & ~DAT_18084060e;
        }
        else {
          bFlag_12 = ~DAT_18084060e | bFlag_12 | bFlag_16;
        }
        if ((bFlag_12 & 1) == 0) {
          DAT_18084060c = 0;
          DAT_18084060d = 0;
          DAT_18084060e = 1;
          auArr_7._4_4_ = fStack_154;
          auArr_7._0_4_ = local_158;
          auArr_7._8_4_ = fStack_150;
          auArr_7._12_4_ = fStack_14c;
          auArr_33._4_12_ = auArr_7._4_12_;
          fVal_24 = local_158 + fVal_69;
          fVal_66 = DAT_1808402cc;
          if (fVal_24 <= DAT_1808402cc) {
            fVal_66 = fVal_24;
          }
          auArr_33._0_4_ = -(uint)NAN(fVal_24);
          auArr_27 = blendvps(ZEXT416((uint)fVal_66),ZEXT416((uint)DAT_1808402cc),auArr_33);
          auArr_42 = auArr_27;
          if (auArr_27._0_4_ <= local_158) {
            auArr_42._4_12_ = auArr_27._4_12_;
            auArr_42._0_4_ = local_158;
          }
          auArr_34._4_12_ = auArr_33._4_12_;
          auArr_34._0_4_ = -(uint)NAN(local_158);
          auArr_27 = blendvps(auArr_42,auArr_27,auArr_34);
          local_194 = auArr_27._0_4_;
          *(float *)param_1[1] = DAT_1806b26b4 - (local_194 - local_158) / fVal_69;
        }
      }
    }
  }
  else {
    DAT_18084060c = 0;
    DAT_18084060d = 0;
    DAT_18084060e = 0;
  }
  fVal_53 = fStack_14c;
  fVal_25 = fStack_150;
  fVal_24 = fStack_154;
  fVal_66 = local_158;
  fVal_76 = local_158 + fVal_69;
  local_148._4_4_ = local_158;
  fVal_63 = auArr_61._0_4_;
  auArr_27 = auArr_61;
  local_15c = fVal_73;
  local_148._0_4_ = fVal_72;
  fStack_140 = fVal_63;
  fStack_13c = fVal_76;
  func_0x1800d4a80(&local_148,&local_1c8,&local_1d8,&local_1c8,&local_1d8);
  local_148._4_4_ = fVal_66;
  fStack_224 = fVal_24;
  fStack_220 = fVal_25;
  fStack_21c = fVal_53;
  local_228 = fVal_76;
  local_148._0_4_ = fVal_72;
  fStack_140 = fVal_63;
  fStack_13c = fVal_76;
  func_0x1800d48c0(&local_148,local_248,&local_258);
  fVal_25 = DAT_1806c8a10;
  fVal_24 = DAT_1806b67d0;
  fVal_66 = DAT_1806b6144;
  fVal_73 = DAT_1806b26b4;
  fVal_53 = DAT_1806b6134 + fVal_63;
  fVal_63 = DAT_1806b6550 + fVal_63;
  iVal_23 = 1;
  _local_218 = auArr_61;
  do {
    auArr_35._0_8_ = func_0x18068afa0((float)(iVal_23 + -1) * fVal_25);
    auArr_35._8_8_ = extraout_XMM0_Qb_00;
    auArr_36._4_12_ = auArr_35._4_12_;
    fVal_72 = (float)auArr_35._0_8_ / fVal_66;
    if ((uint)(int)fVal_72 < 5) {
      auArr_36._0_4_ = (fVal_72 - (float)(int)fVal_72) + fVal_70 + fVal_73;
                    /* WARNING: Could not recover jumptable at 0x0001803c2777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(func_ptr_t )(&DAT_1806ce70c +
                *(int *)(&DAT_1806ce70c + CONCAT44(extraout_var_02,(int)fVal_72) * 4)))
                (auArr_36._0_8_);
      return;
    }
    local_148._0_4_ = fVal_73;
    local_148._4_4_ = 0.0;
    fStack_13c = 1.0;
    fStack_140 = fVal_73 - (fVal_72 - (float)(int)fVal_72);
    auArr_37._0_8_ = func_0x18068afa0((float)iVal_23 * fVal_25);
    auArr_37._8_8_ = extraout_XMM0_Qb_01;
    auArr_38._4_12_ = auArr_37._4_12_;
    fVal_72 = (float)auArr_37._0_8_ / fVal_66;
    if ((uint)(int)fVal_72 < 5) {
      auArr_38._0_4_ = (fVal_72 - (float)(int)fVal_72) + fVal_70 + fVal_73;
                    /* WARNING: Could not recover jumptable at 0x0001803c281c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(func_ptr_t )(&DAT_1806ce720 +
                *(int *)(&DAT_1806ce720 + CONCAT44(extraout_var_03,(int)fVal_72) * 4)))
                (auArr_38._0_8_);
      return;
    }
    local_1b8 = fVal_73;
    uStack_1b4 = 0;
    local_1ac = 0x3f800000;
    auStack_114 = (uint8_t  [4])(((float)(iVal_23 + -1) * fVal_69) / fVal_24 + local_158);
    local_118 = (uint8_t  [4])fVal_63;
    uStack_110._0_4_ = fVal_53;
    uStack_110._4_4_ = ((float)iVal_23 * fVal_69) / fVal_24 + local_158;
    local_1b0 = fVal_73 - (fVal_72 - (float)(int)fVal_72);
    func_0x1800d48c0(local_118,&local_148,&local_1b8);
    fVal_71 = local_158;
    fVal_76 = DAT_1806c3930;
    fVal_72 = DAT_1806b6550;
    iVal_23 = iVal_23 + 1;
  } while (iVal_23 != 0x10);
  auArr_8._4_4_ = fStack_154;
  auArr_8._0_4_ = local_158;
  auArr_8._8_4_ = fStack_150;
  auArr_8._12_4_ = fStack_14c;
  fVal_70 = local_158;
  auArr_74 = insertps(auArr_8,local_218._0_4_,0x10);
  fVal_73 = auArr_74._0_4_ + _DAT_1806c8a20;
  fVal_24 = auArr_74._4_4_ + _UNK_1806c8a24;
  auArr_68._4_4_ = fStack_224;
  auArr_68._0_4_ = local_228;
  auArr_68._8_4_ = fStack_220;
  auArr_68._12_4_ = fStack_21c;
  fVal_66 = fVal_24;
  if ((local_15c != DAT_1806ae7b0) || (fVal_25 = local_15c, NAN(local_15c) || NAN(DAT_1806ae7b0))) {
    fVal_25 = fVal_69 / DAT_1806b6550;
    if (0 < (int)fVal_25) {
      local_218._4_4_ = fVal_24;
      local_218._0_4_ = fVal_73;
      uStack_210 = auArr_74._8_4_ + _UNK_1806c8a28;
      uStack_20c = auArr_74._12_4_ + _UNK_1806c8a2c;
      fVal_66 = DAT_1806c3930 + fVal_24;
      fVal_73 = DAT_1806b6550 + fVal_24;
      iVal_23 = 0;
      do {
        fVal_63 = (float)iVal_23 * fVal_72 + fVal_71;
        fVal_53 = fVal_63 + fVal_76;
        local_148._0_4_ = fVal_24;
        local_148._4_4_ = fVal_63;
        fStack_140 = fVal_66;
        fStack_13c = fVal_53;
        func_0x1800d2a00(&local_148,&local_1c8);
        local_148._0_4_ = fVal_66;
        local_148._4_4_ = fVal_63;
        fStack_140 = fVal_73;
        fStack_13c = fVal_53;
        func_0x1800d2a00(&local_148,&local_268);
        local_148._0_4_ = fVal_24;
        local_148._4_4_ = fVal_53;
        fStack_140 = fVal_66;
        fStack_13c = fVal_63 + fVal_72;
        func_0x1800d2a00(&local_148,&local_268);
        local_148._0_4_ = fVal_66;
        local_148._4_4_ = fVal_53;
        fStack_140 = fVal_73;
        fStack_13c = fVal_63 + fVal_72;
        func_0x1800d2a00(&local_148,&local_1c8);
        iVal_23 = iVal_23 + 1;
      } while ((int)fVal_25 != iVal_23);
      auArr_68._4_4_ = fStack_224;
      auArr_68._0_4_ = local_228;
      auArr_68._8_4_ = fStack_220;
      auArr_68._12_4_ = fStack_21c;
      fVal_73 = (float)local_218._0_4_;
      fVal_66 = (float)local_218._4_4_;
    }
    fVal_25 = local_15c;
    fStack_140 = fVal_72 + fVal_24;
    fStack_13c = auArr_68._0_4_;
    local_148._0_4_ = fVal_24;
    local_148._4_4_ = fVal_70;
    func_0x1800d48c0(&local_148,&local_1f8,local_278);
  }
  local_148._0_4_ = (float)DAT_1806b5f00;
  fVal_70 = (float)local_148;
  local_148._4_4_ = (float)((uint64_t)DAT_1806b5f00 >> 0x20);
  uVal_11 = local_148._4_4_;
  func_0x1800d27b0(&local_190,&local_148,&local_1c8);
  local_148._0_4_ = fVal_70;
  local_148._4_4_ = (float)uVal_11;
  func_0x1800d27b0(&local_164,&local_148,&local_1c8);
  if ((fVal_25 != DAT_1806ae7b0) || (NAN(fVal_25) || NAN(DAT_1806ae7b0))) {
    local_148._0_4_ = fVal_70;
    local_148._4_4_ = (float)uVal_11;
    func_0x1800d25d0(&local_198,&local_148,&local_1c8);
  }
  local_148._0_4_ = (float)DAT_1806c8a30;
  fVal_70 = (float)local_148;
  local_148._4_4_ = (float)((uint64_t)DAT_1806c8a30 >> 0x20);
  uVal_11 = local_148._4_4_;
  func_0x1800d27b0(&local_190,&local_148,&local_1f8);
  local_148._0_4_ = fVal_70;
  local_148._4_4_ = (float)uVal_11;
  func_0x1800d27b0(&local_164,&local_148,&local_1d8);
  pArr16_10 = local_170;
  auArr_74 = insertps(_DAT_1806c8a40,ZEXT416((uint)(fVal_69 * DAT_1806aeae4)),0x30);
  fVal_53 = fVal_66 + auArr_74._0_4_;
  auArr_75._0_8_ = CONCAT44(fVal_73 + auArr_74._4_4_,fVal_53);
  auArr_75._8_4_ = fVal_66 + auArr_74._8_4_;
  auArr_75._12_4_ = fVal_73 + auArr_74._12_4_;
  auArr_4._4_4_ = _UNK_1806b2884;
  auArr_4._0_4_ = _DAT_1806b2880;
  auArr_4._8_4_ = _UNK_1806b2888;
  auArr_4._12_4_ = _UNK_1806b288c;
  auArr_74 = blendvps(ZEXT416(*(uint *)local_170[1]),auArr_4,ZEXT416(-(uint)(DAT_1806ae7b0 == fVal_25))
                    );
  local_238 = auArr_75;
  func_0x1800d2a00(local_238,local_170,auArr_74._0_8_);
  fVal_66 = *(float *)(*pArr16_10 + 8) * DAT_1806c8a50;
  fVal_70 = *(float *)(*pArr16_10 + 4) * DAT_1806c8a50;
  fVal_73 = DAT_1806c8a50 * *(float *)*pArr16_10;
  uStack_138 = (uint16_t)_UNK_1806cb8bf;
  uStack_136 = (uint8_t)((uint3)_UNK_1806cb8bf >> 0x10);
  uStack_135 = _UNK_1806cb8c2;
  uStack_131 = _UNK_1806cb8c6;
  local_148._0_4_ = _DAT_1806cb8af;
  local_148._4_4_ = (float)_UNK_1806cb8b3;
  fStack_140 = (float)_UNK_1806cb8b7;
  fStack_13c = (float)_UNK_1806cb8bb;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x127c0) == '\0') {
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_15 + 0x127c0) = 1;
    func_0x18007c9b0(lVal_15 + 0x127a1,&local_148);
    func_0x180673140(&LAB_180430e00);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x127a1);
  func_0x180441410(fnPtr_1);
  _local_118 = ZEXT816(0);
  local_108._0_16_ = _local_118;
  sz_13 = strlen(fnPtr_1);
  fVal_76 = _UNK_1806b288c;
  fVal_72 = _UNK_1806b2888;
  fVal_69 = _UNK_1806b2884;
  fVal_63 = _DAT_1806b2880;
  if ((int64_t)sz_13 < 0) {
    func_0x18007ba70();
LAB_1803c3c1e:
    func_0x18007ba70();
  }
  else {
    local_158 = (float)(int)fVal_66;
    iVal_23 = (int)fVal_70;
    uVal_22 = 0xf;
    pU64_21 = local_118;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_14) {
        uVal_22 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_22 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      _local_118 = pU64_21;
    }
    local_108._8_8_ = uVal_22;
    local_108._0_8_ = sz_13;
    func_0x1806aa960(pU64_21,fnPtr_1,sz_13);
    pU64_21[sz_13] = 0;
    uStack_138 = (uint16_t)iVal_23;
    uStack_136 = (uint8_t)((uint)iVal_23 >> 0x10);
    local_128 = local_158;
    local_188 = 0x111;
    puStack_180 = &local_148;
    local_1e8 = local_118;
    if (0xf < (uint64_t)local_108._8_8_) {
      local_1e8 = _local_118;
    }
    local_1e0 = local_108._0_8_;
    pFloat_20 = &local_1b8;
    local_148._0_4_ = (float)(int)fVal_73;
    func_0x18063ff10(pFloat_20,&local_1e8,&local_188);
    if (0xf < (uint64_t)local_108._8_8_) {
      uVal_22 = local_108._8_8_ + 1;
      lVal_15 = (int64_t)_local_118;
      if (0xfff < uVal_22) {
        lVal_15 = *(int64_t *)((int64_t)_local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_15)) goto LAB_1803c3bd1;
        uVal_22 = local_108._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_22);
    }
    if ((fVal_25 != DAT_1806ae7b0) || (NAN(fVal_25) || NAN(DAT_1806ae7b0))) {
      fVal_73 = *(float *)local_170[1];
      local_148._0_4_ = _DAT_1806cb8ca;
      local_148._4_4_ = (float)_UNK_1806cb8ce;
      fStack_140 = (float)_UNK_1806cb8d2;
      fStack_13c = (float)_UNK_1806cb8d6;
      uStack_138 = 0xd1b4;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x127d4) == '\0') {
        lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_15 + 0x127d4) = 1;
        func_0x18007c170(lVal_15 + 0x127c1,&local_148);
        func_0x180673140(&LAB_180430e30);
      }
      fnPtr_1 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x127c1
                       );
      func_0x180441460(fnPtr_1);
      _local_118 = ZEXT816(0);
      local_108._0_16_ = _local_118;
      sz_13 = strlen(fnPtr_1);
      if ((int64_t)sz_13 < 0) goto LAB_1803c3c2a;
      uVal_22 = 0xf;
      pU64_21 = local_118;
      if (0xf < sz_13) {
        uVal_14 = sz_13 | 0xf;
        uVal_22 = 0x16;
        if (0x16 < uVal_14) {
          uVal_22 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pU64_21 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
        }
        else {
          lVal_15 = func_0x180672de0(uVal_22 + 0x28);
          pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_21 + -8) = lVal_15;
        }
        _local_118 = pU64_21;
      }
      fVal_73 = fVal_73 * DAT_1806b613c;
      local_108._8_8_ = uVal_22;
      local_108._0_8_ = sz_13;
      func_0x1806aa960(pU64_21,fnPtr_1,sz_13);
      pU64_21[sz_13] = 0;
      local_1e8 = (uint8_t *)CONCAT44(local_1e8._4_4_,fVal_73);
      local_188 = 9;
      local_208 = local_118;
      if (0xf < (uint64_t)local_108._8_8_) {
        local_208 = _local_118;
      }
      local_200 = local_108._0_8_;
      pFloat_19 = (float *)&local_148;
      puStack_180 = &local_1e8;
      func_0x18063ff10(pFloat_19,&local_208,&local_188);
      uVal_22 = CONCAT17((uint8_t)uStack_131,CONCAT43(uStack_135,CONCAT12(uStack_136,uStack_138)));
      if (0xf < CONCAT53(uStack_12d,uStack_131._1_3_)) {
        pFloat_19 = (float *)CONCAT44(local_148._4_4_,(float)local_148);
      }
      if (local_1a0 - local_1a8 < uVal_22) {
        func_0x180082950(&local_1b8,uVal_22,uVal_22,pFloat_19,uVal_22);
        uVal_22 = CONCAT53(uStack_12d,uStack_131._1_3_);
      }
      else {
        lVal_15 = local_1a8 + uVal_22;
        if (0xf < local_1a0) {
          pFloat_20 = (float *)CONCAT44(uStack_1b4,local_1b8);
        }
        lVal_18 = local_1a8 + (int64_t)pFloat_20;
        local_1a8 = lVal_15;
        func_0x1806aa960(lVal_18,pFloat_19);
        *(uint8_t *)((int64_t)pFloat_20 + lVal_15) = 0;
        uVal_22 = CONCAT53(uStack_12d,uStack_131._1_3_);
      }
      if (0xf < uVal_22) {
        lVal_18 = CONCAT44(local_148._4_4_,(float)local_148);
        uVal_14 = uVal_22 + 1;
        lVal_15 = lVal_18;
        if (0xfff < uVal_14) {
          lVal_15 = *(int64_t *)(lVal_18 + -8);
          if (0x1f < (uint64_t)((lVal_18 + -8) - lVal_15)) goto LAB_1803c3bd1;
          uVal_14 = uVal_22 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_14);
      }
      uStack_138 = 0;
      uStack_136 = 0;
      uStack_135 = 0;
      uStack_131 = 0xf00;
      uStack_12d = 0;
      local_148._0_4_ = (float)((uint)(float)local_148 & 0xffffff00);
      if (0xf < (uint64_t)local_108._8_8_) {
        uVal_22 = local_108._8_8_ + 1;
        lVal_15 = (int64_t)_local_118;
        if (0xfff < uVal_22) {
          lVal_15 = *(int64_t *)((int64_t)_local_118 + -8);
          if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_15)) goto LAB_1803c3bd1;
          uVal_22 = local_108._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_22);
      }
    }
    local_148._0_4_ = fVal_63;
    local_148._4_4_ = fVal_69;
    fStack_140 = fVal_72;
    fStack_13c = fVal_76;
    auStack_114 = (uint8_t  [4])(auArr_75._12_4_ + DAT_1806c3930);
    local_118 = (uint8_t  [4])fVal_53;
    pU64_21 = local_118;
    pFloat_20 = (float *)&local_148;
    func_0x1800d00e0(pU64_21,&local_1b8,pFloat_20);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x127e0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x127e0) = 1;
      *(uint32_t *)(lVal_15 + 0x127d8) = 0x982d8afc;
      *(uint16_t *)(lVal_15 + 0x127dc) = 0x1cd;
      func_0x180673140(&LAB_180430e60);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_15 + 0x127d8);
    if (*(char *)(lVal_15 + 0x127dd) == '\x01') {
      *_Str = *_Str ^ 0xfd5bebaf;
      *(byte *)(lVal_15 + 0x127dc) = *(byte *)(lVal_15 + 0x127dc) ^ 0xcd;
      *(uint8_t *)(lVal_15 + 0x127dd) = 0;
    }
    uStack_138 = 0;
    uStack_136 = 0;
    uStack_135 = 0;
    uStack_131 = SUB164(ZEXT816(0),7);
    uStack_12d = 0;
    local_148._0_4_ = 0.0;
    local_148._4_4_ = 0.0;
    fStack_140 = 0.0;
    fStack_13c = 0.0;
    sz_13 = strlen((char *)_Str);
    if ((int64_t)sz_13 < 0) goto LAB_1803c3c1e;
    uVal_22 = 0xf;
    if (0xf < sz_13) {
      uVal_14 = sz_13 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_14) {
        uVal_22 = uVal_14;
      }
      if (uVal_14 < 0xfff) {
        pFloat_20 = (float *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_22 + 0x28);
        pFloat_20 = (float *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pFloat_20 + 0xfffffffffffffffe) = lVal_15;
      }
      local_148._0_4_ = SUB84(pFloat_20,0);
      local_148._4_4_ = (float)((uint64_t)pFloat_20 >> 0x20);
    }
    uStack_138 = (uint16_t)sz_13;
    uStack_136 = (uint8_t)(sz_13 >> 0x10);
    uStack_135 = (uint32_t)(sz_13 >> 0x18);
    uStack_131._0_1_ = (uint8_t)(sz_13 >> 0x38);
    uStack_131._1_3_ = (undefined3)uVal_22;
    uStack_12d = (undefined5)(uVal_22 >> 0x18);
    func_0x1806aa960(pFloat_20,_Str,sz_13);
    *(uint8_t *)((int64_t)pFloat_20 + sz_13) = 0;
    uVal_26 = func_0x1800cd3b0(&local_148);
    auArr_64._8_4_ = (int)extraout_XMM0_Qb_02;
    auArr_64._0_8_ = uVal_26;
    auArr_64._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    auArr_39._0_8_ = func_0x1800cfa00();
    auArr_39._8_8_ = extraout_XMM0_Qb_03;
    fVal_66 = auArr_68._0_4_;
    fVal_73 = DAT_1806b66b0 + fVal_66;
    auArr_74 = insertps(ZEXT416((uint)(DAT_1806b67d4 + fVal_24)),auArr_68,0x10);
    auArr_45._8_4_ = auArr_75._8_4_;
    auArr_45._0_8_ = auArr_75._0_8_;
    auArr_45._12_4_ = auArr_75._12_4_;
    auArr_46 = insertps(auArr_45,ZEXT416((uint)fVal_73),0x10);
    auArr_65 = insertps(auArr_64,auArr_39,0x10);
    fVal_71 = _UNK_1806b28a8 * (auArr_74._8_4_ - auArr_46._8_4_);
    fVal_40 = _UNK_1806b28ac * (auArr_74._12_4_ - auArr_46._12_4_);
    fVal_70 = (float)DAT_1806b28a0 * (auArr_74._0_4_ - auArr_46._0_4_) + auArr_46._0_4_;
    fVal_25 = DAT_1806b28a0._4_4_ * (auArr_74._4_4_ - auArr_46._4_4_) + auArr_46._4_4_;
    local_1e8 = (uint8_t *)
                CONCAT44(fVal_25 - auArr_65._4_4_ * DAT_1806b28a0._4_4_,
                         fVal_70 - auArr_65._0_4_ * (float)DAT_1806b28a0);
    if ((((fVal_53 < DAT_1808402c8) && (fVal_73 < DAT_1808402cc)) &&
        (DAT_1808402c8 < DAT_1806b67d4 + fVal_24)) && (DAT_1808402cc < fVal_66)) {
      fVal_53 = local_1c8 * _DAT_1806c8a60;
      fVal_67 = fStack_1c4 * _UNK_1806c8a64;
      auArr_47._0_8_ = CONCAT44(fVal_67,fVal_53);
      auArr_47._8_4_ = fStack_1c0 * _UNK_1806c8a68;
      auArr_47._12_4_ = fStack_1bc * _UNK_1806c8a6c;
      auArr_58._8_4_ = auArr_47._8_4_;
      auArr_58._0_8_ = auArr_47._0_8_;
      auArr_58._12_4_ = auArr_47._12_4_;
      auArr_52._8_8_ = auArr_47._8_8_;
      if (DAT_1806b26b4 < fVal_53) {
        auArr_27 = roundss(auArr_27,auArr_47,9);
        auArr_57._8_4_ = auArr_47._8_4_;
        auArr_57._0_8_ = auArr_47._0_8_;
        auArr_57._12_4_ = auArr_47._12_4_;
        auArr_58._4_12_ = auArr_57._4_12_;
        auArr_58._0_4_ = fVal_53 - auArr_27._0_4_;
        _auStack_114 = auArr_47._4_12_;
        local_118 = (uint8_t  [4])auArr_58._0_4_;
        if (0.0 <= auArr_58._0_4_) goto LAB_1803c32a0;
LAB_1803c39ee:
        auArr_27 = roundss(ZEXT816(0),auArr_58,10);
        local_118 = (uint8_t  [4])((uint)(auArr_58._0_4_ - auArr_27._0_4_) ^ _DAT_1806af1a0);
        auArr_59._4_4_ = fVal_67;
        auArr_59._0_4_ = fVal_67;
        auArr_59._8_4_ = auArr_47._12_4_;
        auArr_59._12_4_ = auArr_47._12_4_;
        if (fVal_67 <= DAT_1806b26b4) goto LAB_1803c32b1;
LAB_1803c3a1b:
        auArr_27 = roundss(ZEXT816(0),auArr_59,9);
        auArr_59._0_4_ = auArr_59._0_4_ - auArr_27._0_4_;
        auStack_114 = (uint8_t  [4])auArr_59._0_4_;
        if (0.0 <= auArr_59._0_4_) goto LAB_1803c32bd;
LAB_1803c3a3c:
        auArr_27 = roundss(ZEXT816(0),auArr_59,10);
        auStack_114 = (uint8_t  [4])((uint)(auArr_59._0_4_ - auArr_27._0_4_) ^ _DAT_1806af1a0);
        if (auArr_47._8_4_ <= DAT_1806b26b4) goto LAB_1803c32cd;
LAB_1803c3a68:
        auArr_51._8_8_ = auArr_52._8_8_;
        auArr_51._0_8_ = auArr_52._8_8_;
        auArr_27 = roundss(ZEXT816(0),auArr_51,9);
        auArr_52._4_12_ = auArr_51._4_12_;
        auArr_52._0_4_ = auArr_47._8_4_ - auArr_27._0_4_;
        uStack_110._0_4_ = auArr_52._0_4_;
        fVal_53 = auArr_52._0_4_;
      }
      else {
        _local_118 = auArr_47;
        if (fVal_53 < 0.0) goto LAB_1803c39ee;
LAB_1803c32a0:
        auArr_59._4_4_ = fVal_67;
        auArr_59._0_4_ = fVal_67;
        auArr_59._8_4_ = auArr_47._12_4_;
        auArr_59._12_4_ = auArr_47._12_4_;
        if (DAT_1806b26b4 < fVal_67) goto LAB_1803c3a1b;
LAB_1803c32b1:
        if (auArr_59._0_4_ < 0.0) goto LAB_1803c3a3c;
LAB_1803c32bd:
        if (DAT_1806b26b4 < auArr_47._8_4_) goto LAB_1803c3a68;
LAB_1803c32cd:
        auArr_52._0_8_ = auArr_52._8_8_;
        fVal_53 = auArr_47._8_4_;
      }
      if (fVal_53 < 0.0) {
        auArr_27 = roundss(ZEXT816(0),auArr_52,10);
        uStack_110._0_4_ = (uint)(auArr_52._0_4_ - auArr_27._0_4_) ^ _DAT_1806af1a0;
      }
      func_0x1800d36e0();
      if (DAT_18083ef17 != '\x01') goto LAB_1803c3459;
      if (DAT_18084060f == '\0') {
        DAT_180840568 = 0;
      }
      ch_17 = DAT_1808405fc;
      DAT_1808405fc = DAT_18084060f;
      DAT_180840598 = 0;
      DAT_18083ef17 = '\0';
      DAT_18084060f = ch_17;
LAB_1803c38e1:
      uVal_22 = CONCAT53(uStack_12d,uStack_131._1_3_);
      if (0xf < uVal_22) {
        lVal_18 = CONCAT44(local_148._4_4_,(float)local_148);
        uVal_14 = uVal_22 + 1;
        lVal_15 = lVal_18;
        if (0xfff < uVal_14) {
          lVal_15 = *(int64_t *)(lVal_18 + -8);
          if (0x1f < (uint64_t)((lVal_18 + -8) - lVal_15)) goto LAB_1803c3bd1;
          uVal_14 = uVal_22 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_14);
      }
      if (0xf < local_1a0) {
        lVal_18 = CONCAT44(uStack_1b4,local_1b8);
        uVal_22 = local_1a0 + 1;
        lVal_15 = lVal_18;
        if (0xfff < uVal_22) {
          lVal_15 = *(int64_t *)(lVal_18 + -8);
          if (0x1f < (uint64_t)((lVal_18 + -8) - lVal_15)) {
LAB_1803c3bd1:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_22 = local_1a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_22);
      }
      return;
    }
    fVal_53 = local_1c8 * _DAT_1806c89e0;
    fVal_67 = fStack_1c4 * _UNK_1806c89e4;
    auArr_48._0_8_ = CONCAT44(fVal_67,fVal_53);
    auArr_48._8_4_ = fStack_1c0 * _UNK_1806c89e8;
    auArr_48._12_4_ = fStack_1bc * _UNK_1806c89ec;
    auArr_55._8_4_ = auArr_48._8_4_;
    auArr_55._0_8_ = auArr_48._0_8_;
    auArr_55._12_4_ = auArr_48._12_4_;
    auArr_50._8_8_ = auArr_48._8_8_;
    if (DAT_1806b26b4 < fVal_53) {
      auArr_27 = roundss(auArr_27,auArr_48,9);
      auArr_54._8_4_ = auArr_48._8_4_;
      auArr_54._0_8_ = auArr_48._0_8_;
      auArr_54._12_4_ = auArr_48._12_4_;
      auArr_55._4_12_ = auArr_54._4_12_;
      auArr_55._0_4_ = fVal_53 - auArr_27._0_4_;
      _auStack_114 = auArr_48._4_12_;
      local_118 = (uint8_t  [4])auArr_55._0_4_;
      if (0.0 <= auArr_55._0_4_) goto LAB_1803c33c5;
LAB_1803c3598:
      auArr_27 = roundss(ZEXT816(0),auArr_55,10);
      local_118 = (uint8_t  [4])((uint)(auArr_55._0_4_ - auArr_27._0_4_) ^ _DAT_1806af1a0);
      auArr_56._4_4_ = fVal_67;
      auArr_56._0_4_ = fVal_67;
      auArr_56._8_4_ = auArr_48._12_4_;
      auArr_56._12_4_ = auArr_48._12_4_;
      if (fVal_67 <= DAT_1806b26b4) goto LAB_1803c33d6;
LAB_1803c35c5:
      auArr_27 = roundss(ZEXT816(0),auArr_56,9);
      auArr_56._0_4_ = auArr_56._0_4_ - auArr_27._0_4_;
      auStack_114 = (uint8_t  [4])auArr_56._0_4_;
      if (0.0 <= auArr_56._0_4_) goto LAB_1803c33e2;
LAB_1803c35e6:
      auArr_27 = roundss(ZEXT816(0),auArr_56,10);
      auStack_114 = (uint8_t  [4])((uint)(auArr_56._0_4_ - auArr_27._0_4_) ^ _DAT_1806af1a0);
      if (auArr_48._8_4_ <= DAT_1806b26b4) goto LAB_1803c33f2;
LAB_1803c3612:
      auArr_49._8_8_ = auArr_50._8_8_;
      auArr_49._0_8_ = auArr_50._8_8_;
      auArr_27 = roundss(ZEXT816(0),auArr_49,9);
      auArr_50._4_12_ = auArr_49._4_12_;
      auArr_50._0_4_ = auArr_48._8_4_ - auArr_27._0_4_;
      uStack_110._0_4_ = auArr_50._0_4_;
      fVal_53 = auArr_50._0_4_;
    }
    else {
      _local_118 = auArr_48;
      if (fVal_53 < 0.0) goto LAB_1803c3598;
LAB_1803c33c5:
      auArr_56._4_4_ = fVal_67;
      auArr_56._0_4_ = fVal_67;
      auArr_56._8_4_ = auArr_48._12_4_;
      auArr_56._12_4_ = auArr_48._12_4_;
      if (DAT_1806b26b4 < fVal_67) goto LAB_1803c35c5;
LAB_1803c33d6:
      if (auArr_56._0_4_ < 0.0) goto LAB_1803c35e6;
LAB_1803c33e2:
      if (DAT_1806b26b4 < auArr_48._8_4_) goto LAB_1803c3612;
LAB_1803c33f2:
      auArr_50._0_8_ = auArr_50._8_8_;
      fVal_53 = auArr_48._8_4_;
    }
    if (fVal_53 < 0.0) {
      auArr_27 = roundss(ZEXT816(0),auArr_50,10);
      uStack_110._0_4_ = (uint)(auArr_50._0_4_ - auArr_27._0_4_) ^ _DAT_1806af1a0;
    }
    func_0x1800d36e0();
LAB_1803c3459:
    auStack_114 = (uint8_t  [4])fVal_69;
    local_118 = (uint8_t  [4])fVal_63;
    uStack_110._0_4_ = fVal_72;
    uStack_110._4_4_ = fVal_76;
    func_0x1800d00e0(&local_1e8,&local_148,pU64_21);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x127f0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x127f0) = 1;
      *(uint64_t *)(lVal_15 + 0x127e8) = 0x19fffa098f1a660;
      func_0x180673140(&LAB_180430e90);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint64_t *)(lVal_15 + 0x127e8);
    if (*(char *)(lVal_15 + 0x127ef) == '\x01') {
      *_Str_00 = (CONCAT44((uint)*(ushort *)(lVal_15 + 0x127ed) << 8,*(uint32_t *)_Str_00) |
                 (uint64_t)*(byte *)(lVal_15 + 0x127ec) << 0x20) ^ SUB168(_DAT_1806c8a70,0);
    }
    _local_118 = ZEXT816(0);
    local_108._0_16_ = _local_118;
    sz_13 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_13) {
      uVal_22 = 0xf;
      if (0xf < sz_13) {
        uVal_14 = sz_13 | 0xf;
        uVal_22 = 0x16;
        if (0x16 < uVal_14) {
          uVal_22 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          pU64_21 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
        }
        else {
          lVal_15 = func_0x180672de0(uVal_22 + 0x28);
          pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_21 + -8) = lVal_15;
        }
        _local_118 = pU64_21;
      }
      local_108._8_8_ = uVal_22;
      local_108._0_8_ = sz_13;
      func_0x1806aa960(pU64_21,_Str_00,sz_13);
      pU64_21[sz_13] = 0;
      uVal_26 = func_0x1800cd3b0(local_118);
      pArr16_10 = local_170;
      auArr_62._8_4_ = (int)extraout_XMM0_Qb_04;
      auArr_62._0_8_ = uVal_26;
      auArr_62._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
      uVal_26 = func_0x1800cfa00();
      auArr_43._8_4_ = (int)extraout_XMM0_Qb_05;
      auArr_43._0_8_ = uVal_26;
      auArr_43._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_05 >> 0x20);
      fVal_24 = DAT_1806be4a8 + fVal_24;
      auArr_74 = insertps(auArr_62,auArr_43,0x10);
      auArr_3._4_4_ = fVal_25;
      auArr_3._0_4_ = fVal_70;
      auArr_3._8_4_ = fVal_71 + auArr_46._8_4_;
      auArr_3._12_4_ = fVal_40 + auArr_46._12_4_;
      auArr_27 = blendps(ZEXT416((uint)(DAT_1806aeae4 * ((DAT_1806b6514 + fVal_24) - fVal_24) + fVal_24)
                               ),auArr_3,2);
      local_208 = (uint8_t *)
                  CONCAT44(auArr_27._4_4_ + auArr_74._4_4_ * _UNK_1806b6544,
                           auArr_27._0_4_ + auArr_74._0_4_ * _DAT_1806b6540);
      if (((DAT_1808402c8 <= fVal_24) || (DAT_1808402cc <= fVal_73)) ||
         ((DAT_1806b6514 + fVal_24 <= DAT_1808402c8 || (fVal_66 <= DAT_1808402cc)))) {
        func_0x1800d36e0();
LAB_1803c385f:
        local_188 = CONCAT44(fVal_69,fVal_63);
        puStack_180 = (uint64_t *)CONCAT44(fVal_76,fVal_72);
        func_0x1800d00e0(&local_208,local_118,&local_188);
      }
      else {
        func_0x1800d36e0();
        if (DAT_18083ef17 != '\x01') goto LAB_1803c385f;
        if (DAT_18084060f == '\0') {
          DAT_180840568 = 0;
        }
        ch_17 = DAT_1808405fc;
        DAT_1808405fc = DAT_18084060f;
        DAT_180840598 = 0;
        DAT_18084060f = ch_17;
        *(uint32_t *)*pArr16_10 = DAT_18083cb90;
        *(uint32_t *)(*pArr16_10 + 4) = DAT_18083cb94;
        *(uint32_t *)(*pArr16_10 + 8) = DAT_18083cb98;
        *(uint32_t *)pArr16_10[1] = DAT_18083cb9c;
        DAT_18083ef17 = '\0';
      }
      if (0xf < (uint64_t)local_108._8_8_) {
        uVal_22 = local_108._8_8_ + 1;
        lVal_15 = (int64_t)_local_118;
        if (0xfff < uVal_22) {
          lVal_15 = *(int64_t *)((int64_t)_local_118 + -8);
          if (0x1f < (uint64_t)(((int64_t)_local_118 + -8) - lVal_15)) goto LAB_1803c3bd1;
          uVal_22 = local_108._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_22);
      }
      goto LAB_1803c38e1;
    }
  }
  func_0x18007ba70();
LAB_1803c3c2a:
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@1803c3c40
void Unwind_1803c3c40(void)
{
  func_0x180672f60(&DAT_180840608);
  return;
}

// Unwind@1803c3d20
void Unwind_1803c3d20(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x127c0) = 0;
  return;
}

// Unwind@1803c3e10
void Unwind_1803c3e10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1803c3ef0
void Unwind_1803c3ef0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1803c3fd0
void Unwind_1803c3fd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1803c40b0
void Unwind_1803c40b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1803c4190
void Unwind_1803c4190(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1803c4270
void Unwind_1803c4270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1803c4350
void Unwind_1803c4350(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x127d4) = 0;
  return;
}

// func_0x1803c4440
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803c4440(void)
{
  uint8_t (*pArr16_1)[12];
  uint *pU64_2;
  uint64_t *_Str;
  func_ptr_t fnPtr_3;
  byte bFlag_4;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint32_t uVal_8;
  float fVal_9;
  float fVal_10;
  float fVal_11;
  float fVal_12;
  uint uVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint8_t uVal_16;
  int64_t lVal_17;
  char ch_18;
  byte bFlag_19;
  uint uVal_20;
  int iVal_21;
  uint64_t uVal_22;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  uint32_t extraout_var_01;
  size_t sz_23;
  int64_t lVal_24;
  uint32_t extraout_var_02;
  uint32_t extraout_var_03;
  byte bFlag_25;
  int iVal_26;
  uint8_t *pU64_27;
  uint64_t uVal_28;
  int iVal_29;
  uint8_t *pU64_30;
  uint64_t uVal_31;
  uint8_t *pU64_32;
  int64_t lVal_33;
  bool bFlag_34;
  float fVal_35;
  float fVal_36;
  uint64_t uVal_37;
  uint uVal_62;
  uint8_t auArr_38 [16];
  uint8_t auArr_39 [16];
  uint8_t auArr_40 [16];
  uint8_t auArr_41 [16];
  uint8_t auArr_42 [16];
  uint8_t auArr_43 [16];
  uint8_t auArr_44 [16];
  uint8_t auArr_45 [16];
  uint8_t auArr_46 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auArr_47 [16];
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  uint8_t auArr_48 [16];
  uint8_t auArr_49 [16];
  uint8_t auArr_50 [16];
  uint8_t auArr_51 [16];
  uint64_t extraout_XMM0_Qb_10;
  uint8_t auArr_52 [16];
  uint uVal_64;
  uint64_t extraout_XMM0_Qb_12;
  uint8_t auArr_53 [16];
  uint64_t extraout_XMM0_Qb_14;
  uint8_t auArr_54 [16];
  uint uVal_61;
  uint uVal_63;
  uint uVal_65;
  uint8_t auArr_55 [16];
  uint8_t auArr_56 [16];
  uint8_t auArr_57 [16];
  uint8_t auArr_58 [16];
  uint8_t auArr_59 [16];
  uint8_t auArr_60 [16];
  float fVal_66;
  float fVal_67;
  float fVal_68;
  uint8_t auArr_69 [16];
  uint8_t auArr_70 [16];
  uint8_t auArr_71 [16];
  uint8_t auArr_72 [16];
  uint8_t auArr_73 [16];
  uint8_t auArr_74 [16];
  uint8_t auArr_75 [16];
  uint8_t auArr_76 [16];
  uint8_t auArr_77 [16];
  uint8_t auArr_78 [16];
  uint8_t auArr_79 [16];
  uint8_t auArr_80 [16];
  uint8_t auArr_81 [16];
  uint8_t auArr_82 [16];
  uint8_t auArr_83 [16];
  uint8_t auArr_84 [16];
  uint8_t auArr_85 [16];
  uint8_t auArr_86 [16];
  float fVal_87;
  uint8_t auArr_88 [16];
  uint8_t auArr_89 [16];
  float fVal_90;
  float fVal_91;
  uint8_t auArr_92 [16];
  uint8_t auArr_93 [16];
  float fVal_94;
  float fVal_99;
  float fVal_100;
  uint8_t auArr_95 [16];
  float fVal_101;
  uint8_t auArr_96 [16];
  uint8_t auArr_97 [16];
  uint8_t auArr_98 [16];
  uint8_t auArr_102 [16];
  uint8_t auArr_103 [16];
  uint8_t auArr_104 [16];
  float fVal_105;
  uint8_t auArr_106 [16];
  uint8_t auArr_107 [16];
  uint8_t auArr_108 [16];
  float fVal_109;
  float fVal_110;
  float fVal_112;
  uint8_t auArr_111 [16];
  float in_xmmTmp2_Dd;
  uint64_t local_2e8;
  uint64_t local_2e0;
  uint64_t local_2d8;
  uint64_t local_2d0;
  int64_t local_2c8;
  int64_t local_2c0;
  uint8_t local_2b8 [8];
  uint32_t uStack_2b0;
  uint32_t uStack_2ac;
  float local_2a0;
  uint32_t local_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  uint8_t local_288 [8];
  uint64_t uStack_280;
  uint8_t local_278 [16];
  uint8_t local_268 [8];
  uint64_t uStack_260;
  uint8_t local_258 [16];
  uint8_t local_248 [16];
  uint8_t local_238 [16];
  uint8_t local_228 [16];
  uint8_t local_218 [16];
  uint8_t local_208 [4];
  uint8_t auStack_204 [8];
  float fStack_1fc;
  uint8_t local_1f8 [8];
  uint32_t uStack_1f0;
  uint32_t uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint8_t local_1d8 [8];
  uint64_t uStack_1d0;
  uint8_t local_1c8 [16];
  uint8_t local_1b8 [16];
  uint8_t local_1a8 [8];
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  uint8_t local_198 [8];
  uint64_t uStack_190;
  uint8_t local_188 [16];
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  uint64_t local_160;
  uint8_t local_158 [8];
  uint64_t uStack_150;
  uint8_t local_148 [16];
  uint8_t local_138 [4];
  uint8_t auStack_134 [4];
  uint64_t uStack_130;
  uint32_t local_128;
  uint32_t uStack_124;
  uint16_t uStack_120;
  uint16_t uStack_11e;
  uint16_t uStack_11c;
  uint16_t uStack_11a;
  uint16_t uStack_118;
  uint16_t uStack_116;
  uint16_t uStack_114;
  uint16_t uStack_112;
  uint16_t uStack_110;
  uint16_t uStack_10e;
  uint16_t uStack_10c;
  uint16_t local_10a;
  uint16_t uStack_108;
  uint32_t uStack_106;
  uint32_t uStack_102;
  uint32_t uStack_fe;
  uint64_t local_f0;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_09;
  uint64_t extraout_XMM0_Qb_11;
  uint64_t extraout_XMM0_Qb_13;
  uint64_t extraout_XMM0_Qb_15;
  
  local_f0 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840618) && (func_0x180672ec0(&DAT_180840618), DAT_180840618 == -1)) {
    DAT_180840610 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840618);
  }
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840628) && (func_0x180672ec0(&DAT_180840628), DAT_180840628 == -1)) {
    DAT_180840620 = func_0x180375110(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840628);
  }
  auArr_71 = _DAT_1806b5580;
  fVal_110 = DAT_1806b26b0;
  fVal_87 = DAT_1808402b8 + DAT_1806b6550;
  fVal_66 = DAT_1808402bc + _DAT_1806c8a80;
  local_1b8 = ZEXT416((uint)fVal_66);
  fVal_35 = DAT_1808402c0 + _DAT_1806c8a00;
  local_1e8 = (DAT_180840554 + DAT_180840558 + DAT_1806c3800) - fVal_66;
  _local_1f8 = ZEXT416((uint)local_1e8);
  _local_1a8 = ZEXT416((uint)(fVal_87 + fVal_35));
  local_298 = _DAT_1806b2880;
  fStack_294 = _UNK_1806b2884;
  fStack_290 = _UNK_1806b2888;
  fStack_28c = _UNK_1806b288c;
  local_160 = DAT_180840620;
  uVal_20 = *(uint *)(DAT_180840620 + 0x15c);
  uVal_22 = (uint64_t)uVal_20;
  lVal_24 = (uint64_t)(0x20 < (int)uVal_20) * 4;
  fVal_90 = *(float *)(&DAT_1806c8a88 + lVal_24);
  fVal_36 = *(float *)(&DAT_1806c8a90 + lVal_24);
  if (fVal_35 <= local_1e8) {
    local_1e8 = fVal_35;
  }
  fVal_35 = local_1e8 / (float)uVal_20;
  if (0 < (int)uVal_20) {
    fVal_105 = fVal_35 - fVal_90;
    local_208 = (uint8_t  [4])(fVal_35 * 0.0 + fVal_90 + fVal_66);
    iVal_26 = 0x100;
    uVal_31 = 0;
    auArr_95._4_4_ = _UNK_1806b5544;
    auArr_95._0_4_ = _DAT_1806b5540;
    auArr_95._8_4_ = _UNK_1806b5548;
    auArr_95._12_4_ = _UNK_1806b554c;
    do {
      if (0 < (int)uVal_22) {
        if ((int64_t)uVal_31 < 0) {
          fVal_66 = (float)((uint64_t)((uint)uVal_31 & 1) | uVal_31 >> 1);
          fVal_66 = fVal_66 + fVal_66;
        }
        else {
          fVal_66 = (float)uVal_31;
        }
        fVal_67 = fVal_90;
        auArr_38._8_4_ = fVal_90;
        if ((uVal_31 != 0) &&
           (auArr_38._8_4_ = fVal_36, uVal_31 != ((uint)(uVal_22 >> 1) & 0x7fffffff) - 1)) {
          fVal_67 = fVal_36;
        }
        fVal_67 = fVal_35 - fVal_67;
        uVal_20 = (int)uVal_22 - 1;
        if (uVal_31 == uVal_20) {
          fVal_67 = fVal_67 - fVal_36;
        }
        auArr_69._8_4_ = fVal_105 - fVal_36;
        if (uVal_20 != 0) {
          auArr_69._8_4_ = fVal_105;
        }
        local_138 = (uint8_t  [4])(auArr_38._8_4_ + fVal_66 * fVal_35 + fVal_87);
        auStack_134 = local_208;
        uStack_130._0_4_ = fVal_67 + (float)local_138;
        uStack_130._4_4_ = auArr_69._8_4_ + (float)local_208;
        lVal_24 = *(int64_t *)(DAT_180840620 + 0x170);
        lVal_33 = (int64_t)(int)((uint)uVal_31 * 4);
        bFlag_19 = *(byte *)(lVal_24 + 3 + lVal_33);
        fVal_67 = (float)local_138;
        if (bFlag_19 != 0) {
          auArr_69 = ZEXT216(*(ushort *)(lVal_24 + 1 + lVal_33));
          auArr_38 = blendps(ZEXT416((uint)(float)(uint)*(byte *)(lVal_24 + lVal_33)),auArr_95,0xc);
          auArr_69 = pmovzxbd(auArr_69,auArr_69);
          auArr_70._0_4_ = auArr_38._0_4_;
          auArr_70._12_4_ = auArr_38._12_4_;
          auArr_70._4_4_ = (float)auArr_69._0_4_;
          auArr_70._8_4_ = (float)auArr_69._4_4_;
          _local_198 = divps(auArr_70,auArr_71);
          func_0x1800d2a00(local_138,local_198,(float)(uint)bFlag_19 / fVal_110);
          fVal_67 = (float)local_138;
        }
        if ((((fVal_67 < DAT_1808402c8) && ((float)auStack_134 < DAT_1808402cc)) &&
            (DAT_1808402c8 < (float)uStack_130)) && (DAT_1808402cc < uStack_130._4_4_)) {
          ch_18 = func_0x18045fca0();
          lVal_17 = DAT_180840620;
          if (ch_18 != '\0') {
            *(char *)(lVal_24 + lVal_33) = (char)(int)(*(float *)(DAT_180840620 + 0x160) * fVal_110);
            *(char *)(lVal_24 + 1 + lVal_33) = (char)(int)(*(float *)(lVal_17 + 0x164) * fVal_110);
            *(char *)(lVal_24 + 2 + lVal_33) = (char)(int)(*(float *)(lVal_17 + 0x168) * fVal_110);
            *(char *)(lVal_24 + 3 + lVal_33) = (char)(int)(*(float *)(lVal_17 + 0x16c) * fVal_110);
          }
          ch_18 = func_0x18045fcb0();
          if (ch_18 != '\0') {
            *(uint32_t *)(lVal_24 + lVal_33) = 0;
          }
        }
        uVal_22 = (uint64_t)*(uint *)(local_160 + 0x15c);
        if (1 < (int)*(uint *)(local_160 + 0x15c)) {
          uVal_28 = 1;
          iVal_29 = iVal_26;
          do {
            iVal_21 = (int)uVal_22;
            auArr_38._8_4_ = fVal_90;
            auArr_69._8_4_ = fVal_105 - fVal_36;
            fVal_67 = fVal_105;
            if (uVal_31 != 0) {
              fVal_67 = fVal_90;
              if (uVal_31 != ((int)(((uint)(uVal_22 >> 0x1f) & 1) + iVal_21) >> 1) - 1) {
                fVal_67 = fVal_36;
              }
              fVal_67 = fVal_35 - fVal_67;
              auArr_69._8_4_ = fVal_67 - fVal_36;
              auArr_38._8_4_ = fVal_36;
            }
            if (uVal_31 != iVal_21 - 1) {
              auArr_69._8_4_ = fVal_67;
            }
            fVal_67 = fVal_90;
            if (uVal_28 != ((int)(((uint)(uVal_22 >> 0x1f) & 1) + iVal_21) >> 1) - 1) {
              fVal_67 = fVal_36;
            }
            fVal_67 = fVal_35 - fVal_67;
            if (uVal_28 == iVal_21 - 1) {
              fVal_67 = fVal_67 - fVal_36;
            }
            local_138 = (uint8_t  [4])(auArr_38._8_4_ + fVal_66 * fVal_35 + fVal_87);
            auStack_134 = (uint8_t  [4])
                          ((float)(int)uVal_28 * fVal_35 + fVal_36 + (float)local_1b8._0_4_);
            uStack_130._0_4_ = auArr_69._8_4_ + (float)local_138;
            uStack_130._4_4_ = fVal_67 + (float)auStack_134;
            lVal_24 = *(int64_t *)(DAT_180840620 + 0x170);
            lVal_33 = (int64_t)iVal_29;
            bFlag_19 = *(byte *)(lVal_24 + 3 + lVal_33);
            fVal_67 = (float)local_138;
            if (bFlag_19 != 0) {
              auArr_69 = ZEXT216(*(ushort *)(lVal_24 + 1 + lVal_33));
              auArr_38 = blendps(ZEXT416((uint)(float)(uint)*(byte *)(lVal_24 + lVal_33)),auArr_95,0xc);
              auArr_69 = pmovzxbd(auArr_69,auArr_69);
              auArr_102._0_4_ = auArr_38._0_4_;
              auArr_102._12_4_ = auArr_38._12_4_;
              auArr_102._4_4_ = (float)auArr_69._0_4_;
              auArr_102._8_4_ = (float)auArr_69._4_4_;
              _local_198 = divps(auArr_102,auArr_71);
              func_0x1800d2a00(local_138,local_198,(float)(uint)bFlag_19 / fVal_110);
              fVal_67 = (float)local_138;
            }
            if (((fVal_67 < DAT_1808402c8) && ((float)auStack_134 < DAT_1808402cc)) &&
               ((DAT_1808402c8 < (float)uStack_130 && (DAT_1808402cc < uStack_130._4_4_)))) {
              ch_18 = func_0x18045fca0();
              lVal_17 = DAT_180840620;
              if (ch_18 != '\0') {
                *(char *)(lVal_24 + lVal_33) =
                     (char)(int)(*(float *)(DAT_180840620 + 0x160) * fVal_110);
                *(char *)(lVal_24 + 1 + lVal_33) = (char)(int)(*(float *)(lVal_17 + 0x164) * fVal_110);
                *(char *)(lVal_24 + 2 + lVal_33) = (char)(int)(*(float *)(lVal_17 + 0x168) * fVal_110);
                *(char *)(lVal_24 + 3 + lVal_33) = (char)(int)(*(float *)(lVal_17 + 0x16c) * fVal_110);
              }
              ch_18 = func_0x18045fcb0();
              if (ch_18 != '\0') {
                *(uint32_t *)(lVal_24 + lVal_33) = 0;
              }
            }
            uVal_28 = uVal_28 + 1;
            uVal_22 = (uint64_t)*(int *)(local_160 + 0x15c);
            iVal_29 = iVal_29 + 0x100;
          } while ((int64_t)uVal_28 < (int64_t)uVal_22);
        }
      }
      uVal_31 = uVal_31 + 1;
      iVal_26 = iVal_26 + 4;
    } while ((int64_t)uVal_31 < (int64_t)(int)uVal_22);
  }
  fVal_110 = local_1e8;
  local_1a8._0_4_ = SUB164(_local_1a8,0) + DAT_1806b67d0;
  auArr_38._8_4_ = fVal_87 + local_1e8;
  fVal_66 = (float)local_1b8._0_4_;
  fVal_105 = (float)local_1b8._0_4_ + fVal_90;
  auStack_134 = (uint8_t  [4])local_1b8._0_4_;
  local_138 = (uint8_t  [4])fVal_87;
  uStack_130._0_4_ = auArr_38._8_4_ + fVal_36;
  uStack_130._4_4_ = fVal_105;
  func_0x1800d2a00(local_138,&DAT_18083cb50);
  fVal_90 = fVal_90 + fVal_87;
  fVal_110 = fVal_110 + fVal_66;
  fVal_67 = fVal_110 + fVal_36;
  auStack_134 = (uint8_t  [4])fVal_66;
  uStack_130._0_4_ = fVal_90;
  uStack_130._4_4_ = fVal_67;
  func_0x1800d2a00(local_138,&DAT_18083cb50);
  fVal_66 = auArr_38._8_4_ - fVal_36;
  auStack_134 = (uint8_t  [4])fVal_105;
  local_138 = (uint8_t  [4])fVal_66;
  uStack_130._0_4_ = auArr_38._8_4_ + fVal_36;
  func_0x1800d2a00(local_138,&DAT_18083cb50);
  fVal_110 = fVal_110 - fVal_36;
  auStack_134 = (uint8_t  [4])fVal_110;
  local_138 = (uint8_t  [4])fVal_90;
  uStack_130._0_4_ = fVal_66;
  func_0x1800d2a00(local_138,&DAT_18083cb50);
  iVal_26 = *(int *)(local_160 + 0x15c);
  if (1 < iVal_26) {
    iVal_29 = 0;
    do {
      bFlag_34 = iVal_29 == iVal_26 / 2 + -1;
      iVal_29 = iVal_29 + 1;
      auArr_69._8_4_ = (float)iVal_29 * fVal_35;
      fVal_67 = fVal_87 + auArr_69._8_4_;
      if (bFlag_34) {
        auStack_134 = (uint8_t  [4])fVal_105;
        local_138 = (uint8_t  [4])(fVal_67 - fVal_36);
        uStack_130._0_4_ = fVal_36 + fVal_67;
        uStack_130._4_4_ = fVal_110;
        func_0x1800d2a00(local_138,&DAT_18083cb50);
        auStack_134 = (uint8_t  [4])((auArr_69._8_4_ + (float)local_1b8._0_4_) - fVal_36);
        fVal_67 = auArr_69._8_4_ + (float)local_1b8._0_4_;
      }
      else {
        auStack_134 = (uint8_t  [4])fVal_105;
        local_138 = (uint8_t  [4])fVal_67;
        uStack_130._0_4_ = fVal_36 + fVal_67;
        uStack_130._4_4_ = fVal_110;
        func_0x1800d2a00(local_138,&DAT_18083cb50);
        auStack_134 = (uint8_t  [4])(auArr_69._8_4_ + (float)local_1b8._0_4_);
        fVal_67 = (float)auStack_134;
      }
      local_138 = (uint8_t  [4])fVal_90;
      uStack_130._0_4_ = fVal_66;
      uStack_130._4_4_ = fVal_36 + fVal_67;
      func_0x1800d2a00(local_138,&DAT_18083cb50);
      iVal_26 = *(int *)(local_160 + 0x15c);
    } while (iVal_29 < iVal_26 + -1);
  }
  lVal_24 = DAT_180840620;
  fVal_35 = DAT_1806b26b4;
  fVal_110 = DAT_1806ae7b0;
  fVal_90 = *(float *)(DAT_180840620 + 0x168);
  pArr16_1 = (uint8_t (*)[12])(DAT_180840620 + 0x160);
  uVal_37 = *(uint64_t *)*pArr16_1;
  auArr_71._4_4_ = (float)((uint64_t)uVal_37 >> 0x20);
  uStack_130._4_4_ = 1.0;
  _local_138 = *pArr16_1;
  local_198._4_4_ = _UNK_1806b5b34;
  local_198._0_4_ = _DAT_1806b5b30;
  uStack_190._0_4_ = _UNK_1806b5b38;
  uStack_190._4_4_ = _UNK_1806b5b3c;
  local_288._4_4_ = _UNK_1806c89e4;
  local_288._0_4_ = _DAT_1806c89e0;
  uStack_280._0_4_ = _UNK_1806c89e8;
  uStack_280._4_4_ = _UNK_1806c89ec;
  local_268._4_4_ = _UNK_1806b5544;
  local_268._0_4_ = _DAT_1806b5540;
  uStack_260._0_4_ = _UNK_1806b5548;
  uStack_260._4_4_ = _UNK_1806b554c;
  local_248 = ZEXT816(0);
  fVal_66 = (float)uVal_37;
  local_228._12_4_ = 0;
  local_228._0_12_ = *pArr16_1;
  auArr_95 = insertps(ZEXT416((uint)auArr_38._8_4_),local_1b8,0x10);
  fVal_87 = (float)DAT_1806c8aa0 + auArr_95._0_4_;
  fVal_105 = (float)((uint64_t)DAT_1806c8aa0 >> 0x20) + auArr_95._4_4_;
  fVal_67 = auArr_95._8_4_ + 0.0;
  auArr_69._8_4_ = auArr_95._12_4_ + 0.0;
  fVal_36 = fVal_90;
  if (fVal_90 <= auArr_71._4_4_) {
    fVal_36 = auArr_71._4_4_;
  }
  fVal_68 = (float)(-(uint)(auArr_71._4_4_ < fVal_90) & (uint)DAT_1806ae7b0);
  fVal_112 = fVal_36;
  if (fVal_36 <= fVal_66) {
    fVal_112 = fVal_66;
  }
  auArr_71._0_4_ = -(uint)(fVal_66 < fVal_36);
  auArr_71._8_8_ = 0;
  auArr_70 = blendvps(ZEXT416((uint)fVal_68),ZEXT416((uint)(DAT_1806c8a04 - fVal_68)),auArr_71);
  local_1f8._0_4_ = (float)local_1f8._0_4_ + local_1b8._0_4_;
  fVal_68 = auArr_71._4_4_;
  if (fVal_90 <= auArr_71._4_4_) {
    fVal_68 = fVal_90;
  }
  if (fVal_36 <= fVal_66) {
    uVal_37 = CONCAT44(auArr_71._4_4_,fVal_36);
  }
  fVal_36 = (float)uVal_37;
  fVal_90 = fVal_36;
  if (fVal_68 <= fVal_36) {
    fVal_90 = fVal_68;
  }
  auArr_88._4_12_ = SUB1612(_local_1a8,4);
  auArr_5._4_4_ = local_1f8._4_4_;
  auArr_5._0_4_ = local_1f8._0_4_;
  auArr_5._8_4_ = uStack_1f0;
  auArr_5._12_4_ = uStack_1ec;
  _local_208 = insertps(_local_1a8,auArr_5,0x10);
  local_1e8 = (float)DAT_1806c8ab0 + SUB164(_local_208,0);
  fStack_1e4 = (float)((uint64_t)DAT_1806c8ab0 >> 0x20) + SUB164(_local_208,4);
  fStack_1e0 = SUB164(_local_208,8) + 0.0;
  fStack_1dc = SUB164(_local_208,0xc) + 0.0;
  fVal_109 = (fVal_112 - fVal_90) / (DAT_1806c8a08 + fVal_112);
  auArr_111._0_4_ = local_1e8 - fVal_87;
  auArr_111._4_4_ = fStack_1e4 - fVal_105;
  auArr_111._8_4_ = fStack_1e0 - fVal_67;
  auArr_111._12_4_ = fStack_1dc - auArr_69._8_4_;
  auArr_88._0_4_ = (SUB164(_local_1a8,0) + DAT_1806beca0) - fVal_87;
  fVal_66 = (float)((uint)((fVal_36 - fVal_68) / (DAT_1806beca0 * (fVal_112 - fVal_90) + DAT_1806c8a08) +
                         auArr_70._0_4_) & _DAT_1806b55f0);
  auArr_39._0_8_ = func_0x18068afa0();
  fVal_90 = DAT_1806b26b4;
  auArr_39._8_8_ = extraout_XMM0_Qb;
  auArr_40._4_12_ = auArr_39._4_12_;
  fVal_36 = (float)auArr_39._0_8_ / DAT_1806b6144;
  if ((uint)(int)fVal_36 < 5) {
    auArr_40._0_4_ = (fVal_36 - (float)(int)fVal_36) + fVal_110 + fVal_35;
                    /* WARNING: Could not recover jumptable at 0x0001803c4f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(func_ptr_t )(&DAT_1806ce734 + *(int *)(&DAT_1806ce734 + CONCAT44(extraout_var,(int)fVal_36) * 4)))
              (auArr_40._0_8_);
    return;
  }
  local_198._4_4_ = 0;
  local_198._0_4_ = fVal_35;
  uStack_190._0_4_ = fVal_35 - (fVal_36 - (float)(int)fVal_36);
  auArr_71 = insertps(ZEXT416((uint)fVal_109),ZEXT416((uint)(fVal_35 - fVal_112)),0x10);
  local_178 = CONCAT44(auArr_71._4_4_ * auArr_111._4_4_ + fVal_105,
                       auArr_71._0_4_ * auArr_111._0_4_ + fVal_87);
  fVal_68 = DAT_1806c8ac0 + (float)local_1f8._0_4_;
  local_170 = CONCAT44(fVal_68,fVal_66 * auArr_88._0_4_ + fVal_87);
  fVal_36 = DAT_1806c8ac4 + (float)local_1f8._0_4_;
  local_168 = CONCAT44(fVal_36,(fVal_35 - *(float *)(lVal_24 + 0x16c)) * auArr_88._0_4_ + fVal_87);
  if (DAT_18083ef14 == '\0') {
    DAT_18084062c = 0;
    DAT_18084062d = 0;
    DAT_18084062e = 0;
    *(uint8_t *)(lVal_24 + 0x15a) = 0;
  }
  else if (*(char *)(lVal_24 + 0x15a) == '\0') {
    auArr_71 = ZEXT416((uint)DAT_1808402c8);
    if (((fVal_87 + auArr_111._0_4_ <= DAT_1808402c8) || (DAT_1808402c8 <= fVal_87)) ||
       (fVal_105 + auArr_111._4_4_ <= DAT_1808402cc)) {
      bFlag_19 = 1;
      if (DAT_18084062c == 1) goto LAB_1803c6489;
LAB_1803c5061:
      bFlag_19 = 0;
LAB_1803c5063:
      auArr_41._4_4_ = fVal_105;
      auArr_41._0_4_ = fVal_87;
      auArr_41._8_4_ = fVal_67;
      auArr_41._12_4_ = auArr_69._8_4_;
      auArr_55._4_12_ = auArr_41._4_12_;
      fVal_35 = fVal_87 + auArr_88._0_4_;
      if ((fVal_35 <= DAT_1808402c8) || (DAT_1808402c8 <= fVal_87)) {
        if (DAT_18084062d != 0) {
          if (((bFlag_19 | DAT_18084062e) & 1) == 0) {
LAB_1803c749e:
            DAT_18084062c = 0;
            DAT_18084062d = 1;
            fVal_36 = DAT_1808402c8;
            if (fVal_35 <= DAT_1808402c8) {
              fVal_36 = fVal_35;
            }
            auArr_55._0_4_ = -(uint)NAN(fVal_35);
            auArr_71 = blendvps(ZEXT416((uint)fVal_36),auArr_71,auArr_55);
            DAT_18084062e = 0;
            auArr_75 = auArr_71;
            if (auArr_71._0_4_ <= fVal_87) {
              auArr_75._4_12_ = auArr_71._4_12_;
              auArr_75._0_4_ = fVal_87;
            }
            auArr_56._4_4_ = fVal_105;
            auArr_56._0_4_ = fVal_87;
            auArr_56._8_4_ = fVal_67;
            auArr_56._12_4_ = auArr_69._8_4_;
            auArr_57._4_12_ = auArr_56._4_12_;
            auArr_57._0_4_ = -(uint)NAN(fVal_87);
            auArr_71 = blendvps(auArr_75,auArr_71,auArr_57);
            local_170 = CONCAT44(fVal_68,auArr_71._0_4_);
            if ((fVal_109 != 0.0) || (fVal_66 = fVal_112, fVal_35 = fVal_112, NAN(fVal_109))) {
              fVal_36 = (float)func_0x18068afa0();
              fVal_36 = fVal_36 / DAT_1806b6144;
              fVal_35 = (fVal_90 - fVal_109) * fVal_112;
              fVal_66 = (fVal_90 - fVal_109 * (fVal_36 - (float)(int)fVal_36)) * fVal_112;
              if ((uint)(int)fVal_36 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0001803c7988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(func_ptr_t )(&DAT_1806ce75c +
                          *(int *)(&DAT_1806ce75c + CONCAT44(extraout_var_03,(int)fVal_36) * 4)))
                          (&DAT_1806ce75c,fVal_66,fVal_35,fVal_90 - (fVal_36 - (float)(int)fVal_36));
                return;
              }
            }
            goto LAB_1803c74ff;
          }
          bFlag_25 = 1;
          goto LAB_1803c755c;
        }
        if ((DAT_18084062e & 1) == 0) goto LAB_1803c50dc;
        bFlag_25 = 0;
      }
      else {
        if (DAT_1806c3930 + fVal_68 <= DAT_1808402cc) {
          bFlag_25 = 1;
          if ((DAT_18084062d & 1) != 0) goto LAB_1803c748c;
          bFlag_25 = 0;
        }
        else {
          bFlag_25 = DAT_18084062d;
          if ((fVal_68 + DAT_1806c8868 < DAT_1808402cc | DAT_18084062d & 1) == 0) {
            bFlag_25 = 0;
          }
          else {
LAB_1803c748c:
            if (((DAT_18084062e | bFlag_19) & 1) == 0) goto LAB_1803c749e;
          }
        }
        if (DAT_1806c3930 + fVal_36 <= DAT_1808402cc) {
LAB_1803c755c:
          bFlag_4 = DAT_18084062e & 1;
        }
        else {
          bFlag_4 = fVal_36 + DAT_1806c8868 < DAT_1808402cc | DAT_18084062e & 1;
        }
        if (bFlag_4 == 0) goto LAB_1803c50dc;
      }
      if (((bFlag_19 | bFlag_25) & 1) == 0) {
        DAT_18084062c = 0;
        DAT_18084062d = 0;
        DAT_18084062e = 1;
        fVal_90 = DAT_1808402c8;
        if (fVal_35 <= DAT_1808402c8) {
          fVal_90 = fVal_35;
        }
        auArr_58._4_12_ = auArr_55._4_12_;
        auArr_58._0_4_ = -(uint)NAN(fVal_35);
        auArr_71 = blendvps(ZEXT416((uint)fVal_90),auArr_71,auArr_58);
        auArr_76 = auArr_71;
        if (auArr_71._0_4_ <= fVal_87) {
          auArr_76._4_12_ = auArr_71._4_12_;
          auArr_76._0_4_ = fVal_87;
        }
        auArr_59._4_4_ = fVal_105;
        auArr_59._0_4_ = fVal_87;
        auArr_59._8_4_ = fVal_67;
        auArr_59._12_4_ = auArr_69._8_4_;
        auArr_60._4_12_ = auArr_59._4_12_;
        auArr_60._0_4_ = -(uint)NAN(fVal_87);
        auArr_71 = blendvps(auArr_76,auArr_71,auArr_60);
        local_168 = CONCAT44(fVal_36,auArr_71._0_4_);
        *(float *)(lVal_24 + 0x16c) = DAT_1806b26b4 - (auArr_71._0_4_ - fVal_87) / auArr_88._0_4_;
      }
    }
    else {
      bFlag_19 = DAT_18084062c;
      if ((fVal_105 < DAT_1808402cc | DAT_18084062c & 1) == 0) goto LAB_1803c5061;
LAB_1803c6489:
      if ((DAT_18084062d != 0) || ((DAT_18084062e & 1) != 0)) goto LAB_1803c5063;
      DAT_18084062c = 1;
      DAT_18084062d = 0;
      DAT_18084062e = 0;
      auArr_71 = insertps(auArr_71,DAT_1808402cc,0x10);
      auArr_49._0_4_ = fVal_87 + auArr_111._0_4_;
      auArr_49._4_4_ = fVal_105 + auArr_111._4_4_;
      auArr_49._8_4_ = fVal_67 + auArr_111._8_4_;
      auArr_49._12_4_ = auArr_69._8_4_ + auArr_111._12_4_;
      auArr_70 = minps(auArr_71,auArr_49);
      auArr_50._4_4_ = -(uint)NAN(auArr_49._4_4_);
      auArr_50._0_4_ = -(uint)NAN(auArr_49._0_4_);
      auArr_50._8_4_ = -(uint)(NAN(auArr_49._8_4_) || NAN(auArr_49._12_4_));
      auArr_50._12_4_ = -(uint)(NAN(auArr_49._12_4_) || NAN(in_xmmTmp2_Dd));
      auArr_71 = blendvps(auArr_70,auArr_71,auArr_50);
      auArr_7._4_4_ = fVal_105;
      auArr_7._0_4_ = fVal_87;
      auArr_7._8_4_ = fVal_67;
      auArr_7._12_4_ = auArr_69._8_4_;
      auArr_70 = maxps(auArr_71,auArr_7);
      auArr_51._4_4_ = -(uint)NAN(fVal_105);
      auArr_51._0_4_ = -(uint)NAN(fVal_87);
      auArr_51._8_4_ = -(uint)(NAN(fVal_67) || NAN(auArr_69._8_4_));
      auArr_51._12_4_ = -(uint)(NAN(auArr_69._8_4_) || NAN(in_xmmTmp2_Dd));
      auArr_71 = blendvps(auArr_70,auArr_71,auArr_51);
      local_178 = auArr_71._0_8_;
      auArr_104._0_4_ = auArr_71._0_4_ - fVal_87;
      auArr_104._4_4_ = auArr_71._4_4_ - fVal_105;
      auArr_104._8_4_ = auArr_71._8_4_ - fVal_67;
      auArr_104._12_4_ = auArr_71._12_4_ - auArr_69._8_4_;
      auArr_71 = divps(auArr_104,auArr_111);
      fVal_112 = DAT_1806b26b4 - auArr_71._4_4_;
      fVal_36 = auArr_71._0_4_;
      if ((fVal_36 != 0.0) || (fVal_66 = fVal_112, fVal_35 = fVal_112, NAN(fVal_36))) {
        fVal_68 = (float)func_0x18068afa0();
        fVal_68 = fVal_68 / DAT_1806b6144;
        fVal_35 = (fVal_90 - fVal_36) * fVal_112;
        fVal_66 = (fVal_90 - fVal_36 * (fVal_68 - (float)(int)fVal_68)) * fVal_112;
        if ((uint)(int)fVal_68 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0001803c7647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(func_ptr_t )(&DAT_1806ce748 +
                    *(int *)(&DAT_1806ce748 + CONCAT44(extraout_var_02,(int)fVal_68) * 4)))
                    (&DAT_1806ce748,fVal_66,fVal_35,fVal_90 - (fVal_68 - (float)(int)fVal_68));
          return;
        }
      }
LAB_1803c74ff:
      *(float *)(lVal_24 + 0x160) = fVal_112;
      *(float *)(lVal_24 + 0x164) = fVal_35;
      *(float *)(lVal_24 + 0x168) = fVal_66;
    }
  }
LAB_1803c50dc:
  local_2c8 = lVal_24;
  local_2c0 = lVal_24 + 0x160;
  local_158._4_4_ = fVal_105;
  local_158._0_4_ = fVal_87;
  uStack_150._0_4_ = auArr_111._0_4_ + fVal_87;
  uStack_150._4_4_ = auArr_111._4_4_ + fVal_105;
  func_0x1800d4a80(local_158,&local_298,local_198,&local_298,local_198);
  func_0x1800d48c0(local_158,local_248,local_268);
  auArr_71 = _DAT_1806c8ae0;
  fVal_35 = DAT_1806c8a10;
  fVal_36 = DAT_1806b6144;
  fVal_90 = DAT_1806b26b4;
  auArr_6._4_4_ = fVal_105;
  auArr_6._0_4_ = fVal_87;
  auArr_6._8_4_ = fVal_67;
  auArr_6._12_4_ = auArr_69._8_4_;
  auArr_70 = blendps(_DAT_1806c8ad0,auArr_6,1);
  iVal_26 = 1;
  pU64_27 = local_1d8;
  do {
    auArr_42._0_8_ = func_0x18068afa0((float)(iVal_26 + -1) * fVal_35);
    auArr_42._8_8_ = extraout_XMM0_Qb_00;
    auArr_43._4_12_ = auArr_42._4_12_;
    fVal_66 = (float)auArr_42._0_8_ / fVal_36;
    if ((uint)(int)fVal_66 < 5) {
      auArr_43._0_4_ = (fVal_66 - (float)(int)fVal_66) + fVal_110 + fVal_90;
                    /* WARNING: Could not recover jumptable at 0x0001803c529f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(func_ptr_t )(&DAT_1806ce770 +
                *(int *)(&DAT_1806ce770 + CONCAT44(extraout_var_00,(int)fVal_66) * 4)))
                (auArr_43._0_8_);
      return;
    }
    local_158._4_4_ = 0;
    local_158._0_4_ = fVal_90;
    uStack_150._0_4_ = fVal_90 - (fVal_66 - (float)(int)fVal_66);
    uStack_150._4_4_ = 0x3f800000;
    auArr_44._0_8_ = func_0x18068afa0((float)iVal_26 * fVal_35);
    auArr_44._8_8_ = extraout_XMM0_Qb_01;
    auArr_45._4_12_ = auArr_44._4_12_;
    fVal_66 = (float)auArr_44._0_8_ / fVal_36;
    if ((uint)(int)fVal_66 < 5) {
      auArr_45._0_4_ = (fVal_66 - (float)(int)fVal_66) + fVal_110 + fVal_90;
                    /* WARNING: Could not recover jumptable at 0x0001803c534d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(func_ptr_t )(&DAT_1806ce784 +
                *(int *)(&DAT_1806ce784 + CONCAT44(extraout_var_01,(int)fVal_66) * 4)))
                (auArr_45._0_8_);
      return;
    }
    local_1d8._4_4_ = 0;
    local_1d8._0_4_ = fVal_90;
    uStack_1d0._0_4_ = fVal_90 - (fVal_66 - (float)(int)fVal_66);
    uStack_1d0._4_4_ = 0x3f800000;
    auArr_102 = insertps(ZEXT416((uint)((float)(iVal_26 + -1) * auArr_88._0_4_)),local_170._4_4_,0x10);
    auArr_102 = insertps(auArr_102,ZEXT416((uint)((float)iVal_26 * auArr_88._0_4_)),0x20);
    auArr_103._0_12_ = auArr_102._0_12_;
    auArr_103._12_4_ = auArr_102._4_4_;
    auArr_102 = divps(auArr_103,auArr_71);
    local_2b8._4_4_ = auArr_102._4_4_ + auArr_70._4_4_;
    local_2b8._0_4_ = auArr_102._0_4_ + auArr_70._0_4_;
    uStack_2b0 = auArr_102._8_4_ + auArr_70._0_4_;
    uStack_2ac = auArr_102._12_4_ + auArr_70._12_4_;
    func_0x1800d49a0(local_2b8,local_158,pU64_27);
    fVal_68 = DAT_1806c8868;
    fVal_112 = DAT_1806c3930;
    fVal_66 = DAT_1806b6550;
    iVal_26 = iVal_26 + 1;
  } while (iVal_26 != 0x10);
  fVal_90 = auArr_88._0_4_ / DAT_1806b6550;
  if (0 < (int)fVal_90) {
    iVal_26 = 0;
    do {
      fVal_36 = (float)iVal_26 * fVal_66 + fVal_87;
      fVal_110 = fVal_36 + fVal_112;
      local_158._4_4_ = local_168._4_4_ + fVal_68;
      local_158._0_4_ = fVal_36;
      uStack_150._0_4_ = fVal_110;
      uStack_150._4_4_ = local_168._4_4_;
      func_0x1800d2a00(local_158,&local_298);
      local_158._4_4_ = local_168._4_4_;
      uStack_150._4_4_ = local_168._4_4_ + fVal_112;
      func_0x1800d2a00(local_158,local_288);
      fVal_36 = fVal_36 + fVal_66;
      local_158._4_4_ = local_168._4_4_ + fVal_68;
      local_158._0_4_ = fVal_110;
      uStack_150._0_4_ = fVal_36;
      uStack_150._4_4_ = local_168._4_4_;
      func_0x1800d2a00(local_158,local_288);
      local_158._4_4_ = local_168._4_4_;
      uStack_150._4_4_ = local_168._4_4_ + fVal_112;
      func_0x1800d2a00(local_158,&local_298);
      iVal_26 = iVal_26 + 1;
    } while ((int)fVal_90 != iVal_26);
  }
  auArr_46._4_4_ = fVal_105;
  auArr_46._0_4_ = fVal_87;
  auArr_46._8_4_ = fVal_67;
  auArr_46._12_4_ = auArr_69._8_4_;
  auArr_71 = insertps(auArr_46,local_168._4_4_,0x10);
  auArr_70 = insertps(_DAT_1806c8af0,auArr_88,0x20);
  local_158._4_4_ = auArr_70._4_4_ + auArr_71._4_4_;
  local_158._0_4_ = auArr_70._0_4_ + auArr_71._0_4_;
  uStack_150._0_4_ = auArr_70._8_4_ + auArr_71._0_4_;
  uStack_150._4_4_ = auArr_70._12_4_ + auArr_71._4_4_;
  func_0x1800d49a0(local_158,local_138,local_228);
  uVal_37 = DAT_1806c8b00;
  local_158 = (uint8_t  [8])DAT_1806c8b00;
  func_0x1800d27b0(&local_178,local_158,&local_298);
  local_158 = (uint8_t  [8])uVal_37;
  func_0x1800d27b0(&local_170,local_158,&local_298);
  local_158 = (uint8_t  [8])uVal_37;
  func_0x1800d25d0(&local_168,local_158,&local_298);
  uVal_37 = DAT_1806c8b10;
  local_158 = (uint8_t  [8])DAT_1806c8b10;
  func_0x1800d27b0(&local_178,local_158,local_138);
  local_158 = (uint8_t  [8])uVal_37;
  pU64_30 = local_198;
  func_0x1800d27b0(&local_170,local_158,pU64_30);
  fVal_94 = auArr_95._0_4_ + _DAT_1806c8b20;
  fVal_99 = auArr_95._4_4_ + _UNK_1806c8b24;
  fVal_100 = auArr_95._8_4_ + _UNK_1806c8b28;
  fVal_101 = auArr_95._12_4_ + _UNK_1806c8b2c;
  fVal_91 = DAT_1806c3828 + (float)local_1b8._0_4_;
  local_158._4_4_ = fVal_91;
  local_158._0_4_ = DAT_1806c8b30 + auArr_38._8_4_;
  uStack_150._0_4_ = local_1e8;
  uStack_150._4_4_ = fVal_99;
  func_0x1800d2a00(local_158,local_2c0);
  fVal_35 = _UNK_1806b288c;
  fVal_110 = _UNK_1806b2888;
  fVal_36 = _UNK_1806b2884;
  fVal_90 = _DAT_1806b2880;
  fVal_66 = (float)local_208;
  fVal_112 = (float)auStack_204._0_4_;
  fVal_68 = (float)auStack_204._4_4_;
  fVal_109 = fStack_1fc;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x127fc) == '\0') {
    lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_24 + 0x127fc) = 1;
    *(uint8_t *)(lVal_24 + 0x127fa) = 1;
    *(uint32_t *)(lVal_24 + 0x127f4) = 0xa62dc9f0;
    *(uint16_t *)(lVal_24 + 0x127f8) = 0x136f;
    func_0x180673140(&LAB_180430ec0);
  }
  lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_2 = (uint *)(lVal_24 + 0x127f4);
  if (*(char *)(lVal_24 + 0x127fa) == '\x01') {
    *pU64_2 = *pU64_2 ^ 0x9755ffc1;
    *(byte *)(lVal_24 + 0x127f8) = *(byte *)(lVal_24 + 0x127f8) ^ 0x59;
    *(byte *)(lVal_24 + 0x127f9) = *(byte *)(lVal_24 + 0x127f9) ^ 0x13;
    *(uint8_t *)(lVal_24 + 0x127fa) = 0;
  }
  _local_198 = ZEXT816(0);
  local_188 = _local_198;
  sz_23 = strlen((char *)pU64_2);
  if ((int64_t)sz_23 < 0) {
    func_0x18007ba70();
LAB_1803c8074:
    func_0x18007ba70();
LAB_1803c807a:
    func_0x18007ba70();
LAB_1803c8080:
    func_0x18007ba70();
LAB_1803c8086:
    func_0x18007ba70();
LAB_1803c808c:
    func_0x18007ba70();
LAB_1803c8092:
    func_0x18007ba70();
LAB_1803c8098:
    func_0x18007ba70();
LAB_1803c809e:
    func_0x18007ba70();
LAB_1803c80a4:
    func_0x18007ba70();
LAB_1803c80aa:
    func_0x18007ba70();
LAB_1803c80b0:
    func_0x18007ba70();
    fnPtr_3 = (func_ptr_t )swi(3);
    (*fnPtr_3)();
    return;
  }
  uVal_22 = 0xf;
  pU64_32 = local_268;
  if (0xf < sz_23) {
    uVal_31 = sz_23 | 0xf;
    uVal_22 = 0x16;
    if (0x16 < uVal_31) {
      uVal_22 = uVal_31;
    }
    if (uVal_31 < 0xfff) {
      pU64_30 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
    }
    else {
      lVal_24 = func_0x180672de0(uVal_22 + 0x28);
      pU64_30 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_30 + -8) = lVal_24;
    }
    local_198 = (uint8_t  [8])pU64_30;
  }
  local_188._8_8_ = uVal_22;
  local_188._0_8_ = sz_23;
  func_0x1806aa960(pU64_30,pU64_2,sz_23);
  pU64_30[sz_23] = 0;
  uVal_37 = func_0x1800cd3b0(local_198);
  auArr_93._8_4_ = (int)extraout_XMM0_Qb_02;
  auArr_93._0_8_ = uVal_37;
  auArr_93._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
  auArr_47._0_8_ = func_0x1800cfa00();
  fVal_12 = _UNK_1806b28ac;
  fVal_11 = _UNK_1806b28a8;
  fVal_10 = DAT_1806b28a0._4_4_;
  fVal_9 = (float)DAT_1806b28a0;
  auArr_47._8_8_ = extraout_XMM0_Qb_03;
  auArr_72._4_4_ = fVal_105;
  auArr_72._0_4_ = fVal_87;
  auArr_72._8_4_ = fVal_67;
  auArr_72._12_4_ = auArr_69._8_4_;
  auArr_71 = insertps(auArr_72,ZEXT416((uint)fVal_91),0x10);
  auArr_95 = insertps(auArr_93,auArr_47,0x10);
  auArr_106._0_4_ = (fVal_94 - auArr_71._0_4_) * (float)DAT_1806b28a0 + auArr_71._0_4_;
  auArr_106._4_4_ = (fVal_99 - auArr_71._4_4_) * DAT_1806b28a0._4_4_ + auArr_71._4_4_;
  auArr_106._8_4_ = (fVal_100 - auArr_71._8_4_) * _UNK_1806b28a8 + auArr_71._8_4_;
  auArr_106._12_4_ = (fVal_101 - auArr_71._12_4_) * _UNK_1806b28ac + auArr_71._12_4_;
  local_178 = CONCAT44(auArr_106._4_4_ - auArr_95._4_4_ * DAT_1806b28a0._4_4_,
                       auArr_106._0_4_ - auArr_95._0_4_ * (float)DAT_1806b28a0);
  if ((((DAT_1808402c8 <= fVal_87) || (DAT_1808402cc <= fVal_91)) || (fVal_94 <= DAT_1808402c8)) ||
     (fVal_99 <= DAT_1808402cc)) {
    func_0x1800d36e0();
LAB_1803c597c:
    auStack_134 = (uint8_t  [4])fVal_36;
    local_138 = (uint8_t  [4])fVal_90;
    uStack_130._0_4_ = fVal_110;
    uStack_130._4_4_ = fVal_35;
    func_0x1800d00e0(&local_178,local_198,local_138);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12808) == '\0') {
      lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_24 + 0x12808) = 1;
      *(uint8_t *)(lVal_24 + 0x12806) = 1;
      *(uint32_t *)(lVal_24 + 0x12800) = 0x9add13ea;
      *(uint16_t *)(lVal_24 + 0x12804) = 0x5d1d;
      func_0x180673140(&LAB_180430ef0);
    }
    lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_24 + 0x12800);
    if (*(char *)(lVal_24 + 0x12806) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xa9a521d9;
      *(byte *)(lVal_24 + 0x12804) = *(byte *)(lVal_24 + 0x12804) ^ 0x2f;
      *(byte *)(lVal_24 + 0x12805) = *(byte *)(lVal_24 + 0x12805) ^ 0x5d;
      *(uint8_t *)(lVal_24 + 0x12806) = 0;
    }
    _local_288 = ZEXT816(0);
    local_278 = _local_288;
    sz_23 = strlen((char *)pU64_2);
    if ((int64_t)sz_23 < 0) goto LAB_1803c8074;
    if (sz_23 < 0x10) {
      pU64_30 = local_288;
      uVal_22 = 0xf;
    }
    else {
      uVal_31 = sz_23 | 0xf;
      uVal_22 = 0x16;
      if (0x16 < uVal_31) {
        uVal_22 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        pU64_30 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
      }
      else {
        lVal_24 = func_0x180672de0(uVal_22 + 0x28);
        pU64_30 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_30 + -8) = lVal_24;
      }
      local_288 = (uint8_t  [8])pU64_30;
    }
    local_278._8_8_ = uVal_22;
    local_278._0_8_ = sz_23;
    func_0x1806aa960(pU64_30,pU64_2,sz_23);
    pU64_30[sz_23] = 0;
    uVal_37 = func_0x1800cd3b0(local_288);
    pU64_30 = local_248;
    auArr_96._8_4_ = (int)extraout_XMM0_Qb_04;
    auArr_96._0_8_ = uVal_37;
    auArr_96._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
    uVal_37 = func_0x1800cfa00();
    auArr_73._8_4_ = (int)extraout_XMM0_Qb_05;
    auArr_73._0_8_ = uVal_37;
    auArr_73._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_05 >> 0x20);
    fVal_105 = DAT_1806c8b34 + auArr_38._8_4_;
    auArr_95 = insertps(auArr_96,auArr_73,0x10);
    auArr_71 = blendps(ZEXT416((uint)(DAT_1806aeae4 * ((DAT_1806c8b38 + auArr_38._8_4_) - fVal_105) +
                                    fVal_105)),auArr_106,2);
    local_170 = CONCAT44(auArr_71._4_4_ + auArr_95._4_4_ * _UNK_1806b6544,
                         auArr_71._0_4_ + auArr_95._0_4_ * _DAT_1806b6540);
    if (((DAT_1808402c8 <= fVal_105) || (DAT_1808402cc <= fVal_91)) ||
       ((DAT_1806c8b38 + auArr_38._8_4_ <= DAT_1808402c8 || (fVal_99 <= DAT_1808402cc)))) {
      func_0x1800d36e0();
LAB_1803c5c61:
      func_0x1800d00e0(&local_170,local_288,local_138);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12814) == '\0') {
        lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_24 + 0x12814) = 1;
        *(uint8_t *)(lVal_24 + 0x12812) = 1;
        *(uint32_t *)(lVal_24 + 0x1280c) = 0x5767133b;
        *(uint16_t *)(lVal_24 + 0x12810) = 0x5995;
        func_0x180673140(&LAB_180430f20);
      }
      lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint *)(lVal_24 + 0x1280c);
      if (*(char *)(lVal_24 + 0x12812) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0x611f270d;
        *(byte *)(lVal_24 + 0x12810) = *(byte *)(lVal_24 + 0x12810) ^ 0xa1;
        *(byte *)(lVal_24 + 0x12811) = *(byte *)(lVal_24 + 0x12811) ^ 0x59;
        *(uint8_t *)(lVal_24 + 0x12812) = 0;
      }
      _local_268 = ZEXT816(0);
      local_258 = _local_268;
      sz_23 = strlen((char *)pU64_2);
      if ((int64_t)sz_23 < 0) goto LAB_1803c807a;
      uVal_22 = 0xf;
      if (0xf < sz_23) {
        uVal_31 = sz_23 | 0xf;
        uVal_22 = 0x16;
        if (0x16 < uVal_31) {
          uVal_22 = uVal_31;
        }
        if (uVal_31 < 0xfff) {
          pU64_32 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
        }
        else {
          lVal_24 = func_0x180672de0(uVal_22 + 0x28);
          pU64_32 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_32 + -8) = lVal_24;
        }
        local_268 = (uint8_t  [8])pU64_32;
      }
      local_258._8_8_ = uVal_22;
      local_258._0_8_ = sz_23;
      func_0x1806aa960(pU64_32,pU64_2,sz_23);
      pU64_32[sz_23] = 0;
      uVal_37 = func_0x1800cd3b0(local_268);
      auArr_97._8_4_ = (int)extraout_XMM0_Qb_06;
      auArr_97._0_8_ = uVal_37;
      auArr_97._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_06 >> 0x20);
      uVal_37 = func_0x1800cfa00();
      auArr_74._8_4_ = (int)extraout_XMM0_Qb_07;
      auArr_74._0_8_ = uVal_37;
      auArr_74._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_07 >> 0x20);
      fVal_105 = DAT_1806c8b3c + auArr_38._8_4_;
      auArr_95 = insertps(auArr_97,auArr_74,0x10);
      auArr_71 = blendps(ZEXT416((uint)(DAT_1806aeae4 * ((auArr_38._8_4_ + _DAT_1806c8b40) - fVal_105)
                                      + fVal_105)),auArr_106,2);
      local_168 = CONCAT44(auArr_71._4_4_ + auArr_95._4_4_ * _UNK_1806b6544,
                           auArr_71._0_4_ + auArr_95._0_4_ * _DAT_1806b6540);
      if (((DAT_1808402c8 <= fVal_105) || (DAT_1808402cc <= fVal_91)) ||
         ((auArr_38._8_4_ + _DAT_1806c8b40 <= DAT_1808402c8 || (fVal_99 <= DAT_1808402cc)))) {
        auArr_71 = ZEXT416(*(uint *)(DAT_180840610 + 0x174));
        func_0x1800d36e0();
LAB_1803c5f3d:
        pU64_32 = local_138;
        func_0x1800d00e0(&local_168,local_268,pU64_32);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12820) == '\0') {
          lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_24 + 0x12820) = 1;
          *(uint32_t *)(lVal_24 + 0x12818) = 0x6a558ce8;
          *(uint16_t *)(lVal_24 + 0x1281c) = 0x11d;
          func_0x180673140(&LAB_180430f50);
        }
        lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_2 = (uint *)(lVal_24 + 0x12818);
        if (*(char *)(lVal_24 + 0x1281d) == '\x01') {
          *pU64_2 = *pU64_2 ^ 0xf23edbb;
          *(byte *)(lVal_24 + 0x1281c) = *(byte *)(lVal_24 + 0x1281c) ^ 0x1d;
          *(uint8_t *)(lVal_24 + 0x1281d) = 0;
        }
        local_248 = ZEXT816(0);
        local_238 = local_248;
        sz_23 = strlen((char *)pU64_2);
        if ((int64_t)sz_23 < 0) goto LAB_1803c8080;
        uVal_22 = 0xf;
        if (0xf < sz_23) {
          uVal_31 = sz_23 | 0xf;
          uVal_22 = 0x16;
          if (0x16 < uVal_31) {
            uVal_22 = uVal_31;
          }
          if (uVal_31 < 0xfff) {
            pU64_30 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
          }
          else {
            lVal_24 = func_0x180672de0(uVal_22 + 0x28);
            pU64_30 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_30 + -8) = lVal_24;
          }
          local_248._0_8_ = pU64_30;
        }
        local_238._8_8_ = uVal_22;
        local_238._0_8_ = sz_23;
        func_0x1806aa960(pU64_30,pU64_2,sz_23);
        pU64_30[sz_23] = 0;
        uVal_37 = func_0x1800cd3b0(local_248);
        pU64_30 = local_228;
        auArr_98._8_4_ = (int)extraout_XMM0_Qb_08;
        auArr_98._0_8_ = uVal_37;
        auArr_98._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_08 >> 0x20);
        auArr_48._0_8_ = func_0x1800cfa00();
        auArr_48._8_8_ = extraout_XMM0_Qb_09;
        fVal_105 = (float)DAT_1806c8b50 + fVal_66;
        fVal_67 = (float)((uint64_t)DAT_1806c8b50 >> 0x20) + fVal_112;
        auArr_38._8_4_ = fVal_68 + 0.0;
        auArr_69._8_4_ = fVal_109 + 0.0;
        fVal_66 = fVal_66 + _DAT_1806c8b60;
        fVal_112 = fVal_112 + _UNK_1806c8b64;
        fVal_68 = fVal_68 + _UNK_1806c8b68;
        fVal_109 = fVal_109 + _UNK_1806c8b6c;
        auArr_95 = insertps(auArr_98,auArr_48,0x10);
        auArr_89._0_4_ = fVal_9 * (fVal_66 - fVal_105) + fVal_105;
        auArr_89._4_4_ = fVal_10 * (fVal_112 - fVal_67) + fVal_67;
        auArr_89._8_4_ = fVal_11 * (fVal_68 - auArr_38._8_4_) + auArr_38._8_4_;
        auArr_89._12_4_ = fVal_12 * (fVal_109 - auArr_69._8_4_) + auArr_69._8_4_;
        local_2e8 = CONCAT44(auArr_89._4_4_ - auArr_95._4_4_ * fVal_10,
                             auArr_89._0_4_ - auArr_95._0_4_ * fVal_9);
        if ((((DAT_1808402c8 <= fVal_105) || (DAT_1808402cc <= fVal_67)) || (fVal_66 <= DAT_1808402c8))
           || (fVal_112 <= DAT_1808402cc)) {
          auArr_69._8_4_ = local_298 * _DAT_1806c89e0;
          fVal_91 = fStack_294 * _UNK_1806c89e4;
          auArr_38._0_8_ = CONCAT44(fVal_91,auArr_69._8_4_);
          auArr_38._8_4_ = fStack_290 * _UNK_1806c89e8;
          auArr_38._12_4_ = fStack_28c * _UNK_1806c89ec;
          auArr_85._8_4_ = auArr_38._8_4_;
          auArr_85._0_8_ = auArr_38._0_8_;
          auArr_85._12_4_ = auArr_38._12_4_;
          auArr_79._8_8_ = auArr_38._8_8_;
          if (auArr_69._8_4_ <= DAT_1806b26b4) {
            _local_138 = auArr_38;
            if (0.0 <= auArr_69._8_4_) goto LAB_1803c623e;
LAB_1803c62a6:
            auArr_71 = roundss(ZEXT816(0),auArr_85,10);
            local_138 = (uint8_t  [4])((uint)(auArr_85._0_4_ - auArr_71._0_4_) ^ _DAT_1806af1a0);
            auArr_86._4_4_ = fVal_91;
            auArr_86._0_4_ = fVal_91;
            auArr_86._8_4_ = auArr_38._12_4_;
            auArr_86._12_4_ = auArr_38._12_4_;
            if (DAT_1806b26b4 < fVal_91) goto LAB_1803c624f;
LAB_1803c62cf:
            if (0.0 <= auArr_86._0_4_) goto LAB_1803c626c;
LAB_1803c62d7:
            auArr_71 = roundss(ZEXT816(0),auArr_86,10);
            auStack_134 = (uint8_t  [4])((uint)(auArr_86._0_4_ - auArr_71._0_4_) ^ _DAT_1806af1a0);
            if (DAT_1806b26b4 < auArr_38._8_4_) goto LAB_1803c627c;
LAB_1803c6303:
            auArr_80._8_8_ = auArr_79._8_8_;
            auArr_80._0_8_ = auArr_79._8_8_;
          }
          else {
            auArr_71 = roundss(auArr_71,auArr_38,9);
            auArr_84._8_4_ = auArr_38._8_4_;
            auArr_84._0_8_ = auArr_38._0_8_;
            auArr_84._12_4_ = auArr_38._12_4_;
            auArr_85._4_12_ = auArr_84._4_12_;
            auArr_85._0_4_ = auArr_69._8_4_ - auArr_71._0_4_;
            _auStack_134 = auArr_38._4_12_;
            local_138 = (uint8_t  [4])auArr_85._0_4_;
            if (auArr_85._0_4_ < 0.0) goto LAB_1803c62a6;
LAB_1803c623e:
            auArr_86._4_4_ = fVal_91;
            auArr_86._0_4_ = fVal_91;
            auArr_86._8_4_ = auArr_38._12_4_;
            auArr_86._12_4_ = auArr_38._12_4_;
            if (fVal_91 <= DAT_1806b26b4) goto LAB_1803c62cf;
LAB_1803c624f:
            auArr_71 = roundss(ZEXT816(0),auArr_86,9);
            auArr_86._0_4_ = auArr_86._0_4_ - auArr_71._0_4_;
            auStack_134 = (uint8_t  [4])auArr_86._0_4_;
            if (auArr_86._0_4_ < 0.0) goto LAB_1803c62d7;
LAB_1803c626c:
            if (auArr_38._8_4_ <= DAT_1806b26b4) goto LAB_1803c6303;
LAB_1803c627c:
            auArr_79._0_8_ = auArr_79._8_8_;
            auArr_71 = roundss(ZEXT816(0),auArr_79,9);
            auArr_80._4_12_ = auArr_79._4_12_;
            auArr_80._0_4_ = auArr_38._8_4_ - auArr_71._0_4_;
            uStack_130._0_4_ = auArr_80._0_4_;
            auArr_38._8_4_ = auArr_80._0_4_;
          }
          if (auArr_38._8_4_ < 0.0) {
            auArr_71 = roundss(ZEXT816(0),auArr_80,10);
            uStack_130._0_4_ = (float)((uint)(auArr_80._0_4_ - auArr_71._0_4_) ^ _DAT_1806af1a0);
          }
          func_0x1800d36e0();
LAB_1803c636f:
          auStack_134 = (uint8_t  [4])fVal_36;
          local_138 = (uint8_t  [4])fVal_90;
          uStack_130._0_4_ = fVal_110;
          uStack_130._4_4_ = fVal_35;
          pU64_32 = local_138;
          func_0x1800d00e0(&local_2e8,local_248,pU64_32);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1287c
                       ) == '\0') {
            lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_24 + 0x1287c) = 1;
            *(uint8_t *)(lVal_24 + 0x1287a) = 1;
            *(uint32_t *)(lVal_24 + 0x12874) = 0x9a5eb0a3;
            *(uint16_t *)(lVal_24 + 0x12878) = 0xa981;
            func_0x180673140(&LAB_180430fc0);
          }
          lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_2 = (uint *)(lVal_24 + 0x12874);
          if (*(char *)(lVal_24 + 0x1287a) == '\x01') {
            *pU64_2 = *pU64_2 ^ 0xff2dd5f1;
            *(byte *)(lVal_24 + 0x12878) = *(byte *)(lVal_24 + 0x12878) ^ 0xf5;
            *(byte *)(lVal_24 + 0x12879) = *(byte *)(lVal_24 + 0x12879) ^ 0xa9;
            *(uint8_t *)(lVal_24 + 0x1287a) = 0;
          }
          local_228 = ZEXT816(0);
          local_218 = local_228;
          sz_23 = strlen((char *)pU64_2);
          if ((int64_t)sz_23 < 0) goto LAB_1803c8086;
          uVal_22 = 0xf;
          if (0xf < sz_23) {
            uVal_31 = sz_23 | 0xf;
            uVal_22 = 0x16;
            if (0x16 < uVal_31) {
              uVal_22 = uVal_31;
            }
            if (uVal_31 < 0xfff) {
              pU64_30 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
            }
            else {
              lVal_24 = func_0x180672de0(uVal_22 + 0x28);
              pU64_30 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_30 + -8) = lVal_24;
            }
            local_228._0_8_ = pU64_30;
          }
          auStack_204._0_4_ = fVal_112;
          local_208 = (uint8_t  [4])fVal_66;
          auStack_204._4_4_ = fVal_68;
          fStack_1fc = fVal_109;
          local_218._8_8_ = uVal_22;
          local_218._0_8_ = sz_23;
          func_0x1806aa960(pU64_30,pU64_2,sz_23);
          pU64_30[sz_23] = 0;
          uVal_37 = func_0x1800cd3b0(local_228);
          pU64_30 = local_158;
          auArr_107._8_4_ = (int)extraout_XMM0_Qb_10;
          auArr_107._0_8_ = uVal_37;
          auArr_107._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_10 >> 0x20);
          auArr_52._0_8_ = func_0x1800cfa00();
          auArr_52._8_8_ = extraout_XMM0_Qb_11;
          local_1a8._0_4_ = (float)local_1a8._0_4_ + DAT_1806be4a8;
          fVal_66 = local_1e8 - (float)local_1a8._0_4_;
          auArr_95 = insertps(auArr_107,auArr_52,0x10);
          auArr_38._8_4_ = DAT_1806aeae4 * fVal_66 + (float)local_1a8._0_4_;
          auArr_71 = blendps(ZEXT416((uint)auArr_38._8_4_),auArr_89,2);
          local_2e0 = CONCAT44(auArr_71._4_4_ + auArr_95._4_4_ * _UNK_1806b6544,
                               auArr_71._0_4_ + auArr_95._0_4_ * _DAT_1806b6540);
          if (((DAT_1808402c8 <= (float)local_1a8._0_4_) || (DAT_1808402cc <= fVal_67)) ||
             ((local_1e8 <= DAT_1808402c8 || ((float)auStack_204._0_4_ <= DAT_1808402cc)))) {
            func_0x1800d36e0();
LAB_1803c6801:
            auStack_134 = (uint8_t  [4])fVal_36;
            local_138 = (uint8_t  [4])fVal_90;
            uStack_130._0_4_ = fVal_110;
            uStack_130._4_4_ = fVal_35;
            pU64_32 = local_138;
            func_0x1800d00e0(&local_2e0,local_228,pU64_32);
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x1289c) == '\0') {
              lVal_24 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_24 + 0x1289c) = 1;
              *(uint32_t *)(lVal_24 + 0x12894) = 0xf9be4ebf;
              *(uint16_t *)(lVal_24 + 0x12898) = 0x18d;
              func_0x180673140(&LAB_180431010);
            }
            lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            pU64_2 = (uint *)(lVal_24 + 0x12894);
            if (*(char *)(lVal_24 + 0x12899) == '\x01') {
              *pU64_2 = *pU64_2 ^ 0x9ddf21f3;
              *(byte *)(lVal_24 + 0x12898) = *(byte *)(lVal_24 + 0x12898) ^ 0x8d;
              *(uint8_t *)(lVal_24 + 0x12899) = 0;
            }
            _local_158 = ZEXT816(0);
            local_148 = _local_158;
            sz_23 = strlen((char *)pU64_2);
            if ((int64_t)sz_23 < 0) goto LAB_1803c808c;
            uVal_22 = 0xf;
            if (0xf < sz_23) {
              uVal_31 = sz_23 | 0xf;
              uVal_22 = 0x16;
              if (0x16 < uVal_31) {
                uVal_22 = uVal_31;
              }
              if (uVal_31 < 0xfff) {
                pU64_30 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
              }
              else {
                lVal_24 = func_0x180672de0(uVal_22 + 0x28);
                pU64_30 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_30 + -8) = lVal_24;
              }
              local_158 = (uint8_t  [8])pU64_30;
            }
            local_160 = CONCAT44(local_160._4_4_,fVal_66);
            local_148._8_8_ = uVal_22;
            local_148._0_8_ = sz_23;
            func_0x1806aa960(pU64_30,pU64_2,sz_23);
            pU64_30[sz_23] = 0;
            uVal_37 = func_0x1800cd3b0(local_158);
            auArr_108._8_4_ = (int)extraout_XMM0_Qb_12;
            auArr_108._0_8_ = uVal_37;
            auArr_108._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_12 >> 0x20);
            auArr_53._0_8_ = func_0x1800cfa00();
            auArr_53._8_8_ = extraout_XMM0_Qb_13;
            fVal_66 = DAT_1806b66b0 + (float)local_1f8._0_4_;
            auArr_95 = ZEXT416((uint)(DAT_1806aeae4 * ((float)local_1f8._0_4_ - fVal_66) + fVal_66));
            auArr_69 = insertps(auArr_108,auArr_53,0x10);
            auArr_71 = insertps(auArr_89,auArr_95,0x10);
            local_2d8 = CONCAT44(auArr_71._4_4_ + auArr_69._4_4_ * _UNK_1806b6544,
                                 auArr_71._0_4_ + auArr_69._0_4_ * _DAT_1806b6540);
            if (((DAT_1808402c8 <= fVal_105) || (DAT_1808402cc <= fVal_66)) ||
               (((float)local_208 <= DAT_1808402c8 || ((float)local_1f8._0_4_ <= DAT_1808402cc)))) {
              func_0x1800d36e0();
LAB_1803c6be8:
              auStack_134 = (uint8_t  [4])fVal_36;
              local_138 = (uint8_t  [4])fVal_90;
              uStack_130._0_4_ = fVal_110;
              uStack_130._4_4_ = fVal_35;
              pU64_30 = local_138;
              func_0x1800d00e0(&local_2d8,local_158,pU64_30);
              if (*(char *)(*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                           0x128d8) == '\0') {
                lVal_24 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                *(uint8_t *)(lVal_24 + 0x128d8) = 1;
                *(uint64_t *)(lVal_24 + 0x128d0) = 0x12b9b06e637dc80;
                func_0x180673140(&LAB_180431070);
              }
              lVal_24 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              _Str = (uint64_t *)(lVal_24 + 0x128d0);
              if (*(char *)(lVal_24 + 0x128d7) == '\x01') {
                *_Str = (CONCAT44((uint)*(ushort *)(lVal_24 + 0x128d5) << 8,*(uint32_t *)_Str) |
                        (uint64_t)*(byte *)(lVal_24 + 0x128d4) << 0x20) ^ SUB168(_DAT_1806c8bc0,0);
              }
              _local_1d8 = ZEXT816(0);
              local_1c8 = _local_1d8;
              sz_23 = strlen((char *)_Str);
              if ((int64_t)sz_23 < 0) goto LAB_1803c8092;
              uVal_22 = 0xf;
              if (0xf < sz_23) {
                uVal_31 = sz_23 | 0xf;
                uVal_22 = 0x16;
                if (0x16 < uVal_31) {
                  uVal_22 = uVal_31;
                }
                if (uVal_31 < 0xfff) {
                  pU64_27 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
                }
                else {
                  lVal_24 = func_0x180672de0(uVal_22 + 0x28);
                  pU64_27 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_27 + -8) = lVal_24;
                }
                local_1d8 = (uint8_t  [8])pU64_27;
              }
              local_1c8._8_8_ = uVal_22;
              local_1c8._0_8_ = sz_23;
              func_0x1806aa960(pU64_27,_Str,sz_23);
              pU64_27[sz_23] = 0;
              uVal_37 = func_0x1800cd3b0(local_1d8);
              auArr_92._8_4_ = (int)extraout_XMM0_Qb_14;
              auArr_92._0_8_ = uVal_37;
              auArr_92._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_14 >> 0x20);
              auArr_54._0_8_ = func_0x1800cfa00();
              auArr_54._8_8_ = extraout_XMM0_Qb_15;
              auArr_71 = insertps(auArr_92,auArr_54,0x10);
              auArr_95 = insertps(ZEXT416((uint)auArr_38._8_4_),auArr_95,0x10);
              local_2d0 = CONCAT44(auArr_95._4_4_ + auArr_71._4_4_ * _UNK_1806b6544,
                                   auArr_95._0_4_ + auArr_71._0_4_ * _DAT_1806b6540);
              if ((((DAT_1808402c8 <= (float)local_1a8._0_4_) || (DAT_1808402cc <= fVal_66)) ||
                  (local_1e8 <= DAT_1808402c8)) || ((float)local_1f8._0_4_ <= DAT_1808402cc)) {
                func_0x1800d36e0();
LAB_1803c6fce:
                auStack_134 = (uint8_t  [4])fVal_36;
                local_138 = (uint8_t  [4])fVal_90;
                uStack_130._0_4_ = fVal_110;
                uStack_130._4_4_ = fVal_35;
                pU64_27 = local_138;
                func_0x1800d00e0(&local_2d0,local_1d8,pU64_27);
                local_2b8._4_4_ = fVal_36;
                local_2b8._0_4_ = fVal_90;
                uStack_2b0 = fVal_110;
                uStack_2ac = fVal_35;
                uStack_108 = _UNK_1806cb9bf;
                uStack_106 = _UNK_1806cb9c1;
                uStack_102 = _UNK_1806cb9c5;
                uStack_fe = _UNK_1806cb9c9;
                uStack_118 = (uint16_t)_DAT_1806cb9af;
                uStack_116 = (uint16_t)((uint)_DAT_1806cb9af >> 0x10);
                uStack_114 = (uint16_t)_UNK_1806cb9b3;
                uStack_112 = (uint16_t)((uint)_UNK_1806cb9b3 >> 0x10);
                uStack_110 = (uint16_t)_UNK_1806cb9b7;
                uStack_10e = (uint16_t)((uint)_UNK_1806cb9b7 >> 0x10);
                uStack_10c = _UNK_1806cb9bb;
                local_10a = _DAT_1806cb9bd;
                local_128 = _DAT_1806cb99f;
                uStack_124 = _UNK_1806cb9a3;
                uStack_120 = (uint16_t)_UNK_1806cb9a7;
                uStack_11e = (uint16_t)((uint)_UNK_1806cb9a7 >> 0x10);
                uStack_11c = (uint16_t)_UNK_1806cb9ab;
                uStack_11a = (uint16_t)((uint)_UNK_1806cb9ab >> 0x10);
                auStack_134 = (uint8_t  [4])_UNK_1806cb993;
                local_138 = (uint8_t  [4])_DAT_1806cb98f;
                uStack_130._0_4_ = (float)_UNK_1806cb997;
                uStack_130._4_4_ = (float)_UNK_1806cb99b;
                if (*(char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x12948) == '\0') {
                  lVal_24 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  *(uint8_t *)(lVal_24 + 0x12948) = 1;
                  func_0x1802d6be0(lVal_24 + 0x12909,local_138);
                  func_0x180673140(&LAB_1804310d0);
                }
                uVal_13 = _UNK_1806c8bfc;
                uVal_64 = _UNK_1806c8bf8;
                uVal_62 = _UNK_1806c8bf4;
                uVal_20 = _DAT_1806c8bf0;
                lVal_24 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                pU64_2 = (uint *)(lVal_24 + 0x12909);
                if (*(char *)(lVal_24 + 0x12947) == '\x01') {
                  uVal_61 = *(uint *)(lVal_24 + 0x1290d) ^ _UNK_1806c8bf4;
                  uVal_63 = *(uint *)(lVal_24 + 0x12911) ^ _UNK_1806c8bf8;
                  uVal_65 = *(uint *)(lVal_24 + 0x12915) ^ _UNK_1806c8bfc;
                  *pU64_2 = *pU64_2 ^ _DAT_1806c8bf0;
                  *(uint *)(lVal_24 + 0x1290d) = uVal_61;
                  *(uint *)(lVal_24 + 0x12911) = uVal_63;
                  *(uint *)(lVal_24 + 0x12915) = uVal_65;
                  *(uint *)(lVal_24 + 0x12919) = *(uint *)(lVal_24 + 0x12919) ^ uVal_20;
                  *(uint *)(lVal_24 + 0x1291d) = *(uint *)(lVal_24 + 0x1291d) ^ uVal_62;
                  *(uint *)(lVal_24 + 0x12921) = *(uint *)(lVal_24 + 0x12921) ^ uVal_64;
                  *(uint *)(lVal_24 + 0x12925) = *(uint *)(lVal_24 + 0x12925) ^ uVal_13;
                  *(uint *)(lVal_24 + 0x12929) = *(uint *)(lVal_24 + 0x12929) ^ uVal_20;
                  *(uint *)(lVal_24 + 0x1292d) = *(uint *)(lVal_24 + 0x1292d) ^ uVal_62;
                  *(uint *)(lVal_24 + 0x12931) = *(uint *)(lVal_24 + 0x12931) ^ uVal_64;
                  *(uint *)(lVal_24 + 0x12935) = *(uint *)(lVal_24 + 0x12935) ^ uVal_13;
                  *(uint64_t *)(lVal_24 + 0x12939) =
                       CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_24 + 0x12939) >> 0x20) ^
                                _UNK_1806c8c04,
                                (uint)*(uint64_t *)(lVal_24 + 0x12939) ^ _DAT_1806c8c00);
                  *(byte *)(lVal_24 + 0x12941) = *(byte *)(lVal_24 + 0x12941) ^ 0xfd;
                  *(byte *)(lVal_24 + 0x12942) = *(byte *)(lVal_24 + 0x12942) ^ 0xb7;
                  *(byte *)(lVal_24 + 0x12943) = *(byte *)(lVal_24 + 0x12943) ^ 0x8d;
                  *(byte *)(lVal_24 + 0x12944) = *(byte *)(lVal_24 + 0x12944) ^ 0x1b;
                  *(byte *)(lVal_24 + 0x12945) = *(byte *)(lVal_24 + 0x12945) ^ 0xf1;
                  *(byte *)(lVal_24 + 0x12946) = *(byte *)(lVal_24 + 0x12946) ^ 0x4b;
                  *(uint8_t *)(lVal_24 + 0x12947) = 0;
                }
                _local_138 = ZEXT816(0);
                local_128 = 0;
                uStack_124 = 0;
                uStack_120 = 0;
                uStack_11e = 0;
                uStack_11c = 0;
                uStack_11a = 0;
                sz_23 = strlen((char *)pU64_2);
                if ((int64_t)sz_23 < 0) goto LAB_1803c8098;
                uVal_22 = 0xf;
                if (0xf < sz_23) {
                  uVal_31 = sz_23 | 0xf;
                  uVal_22 = 0x16;
                  if (0x16 < uVal_31) {
                    uVal_22 = uVal_31;
                  }
                  if (uVal_31 < 0xfff) {
                    pU64_27 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
                  }
                  else {
                    lVal_24 = func_0x180672de0(uVal_22 + 0x28);
                    pU64_27 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
                    *(int64_t *)(pU64_27 + -8) = lVal_24;
                  }
                  _local_138 = (int64_t)pU64_27;
                }
                local_128 = (uint32_t)sz_23;
                uStack_124 = (uint32_t)(sz_23 >> 0x20);
                uStack_120 = (uint16_t)uVal_22;
                uStack_11e = (uint16_t)(uVal_22 >> 0x10);
                uStack_11c = (uint16_t)(uVal_22 >> 0x20);
                uStack_11a = (uint16_t)(uVal_22 >> 0x30);
                func_0x1806aa960(pU64_27,pU64_2,sz_23);
                pU64_27[sz_23] = 0;
                local_29c = local_1b8._0_4_;
                local_2a0 = fVal_87;
                func_0x1800d00e0(&local_2a0,local_138,local_2b8);
                uVal_22 = CONCAT26(uStack_11a,CONCAT24(uStack_11c,CONCAT22(uStack_11e,uStack_120)));
                if (0xf < uVal_22) {
                  uVal_31 = uVal_22 + 1;
                  lVal_24 = _local_138;
                  if (0xfff < uVal_31) {
                    lVal_24 = *(int64_t *)(_local_138 + -8);
                    if (0x1f < (uint64_t)((_local_138 + -8) - lVal_24)) goto LAB_1803c7ff0;
                    uVal_31 = uVal_22 + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_24,uVal_31);
                }
              }
              else {
                func_0x1800d36e0();
                if (*(char *)(DAT_180840610 + 0x82) == '\x01') {
                  uStack_118 = _UNK_1806cb981;
                  uStack_116 = (uint16_t)_UNK_1806cb983;
                  uStack_114 = (uint16_t)((uint)_UNK_1806cb983 >> 0x10);
                  uStack_112 = (uint16_t)_UNK_1806cb987;
                  uStack_110 = (uint16_t)((uint)_UNK_1806cb987 >> 0x10);
                  uStack_10e = (uint16_t)_UNK_1806cb98b;
                  uStack_10c = (uint16_t)((uint)_UNK_1806cb98b >> 0x10);
                  local_128 = _DAT_1806cb971;
                  uStack_124 = _UNK_1806cb975;
                  uStack_120 = (uint16_t)_UNK_1806cb979;
                  uStack_11e = (uint16_t)((uint)_UNK_1806cb979 >> 0x10);
                  uStack_11c = _UNK_1806cb97d;
                  uStack_11a = _DAT_1806cb97f;
                  auStack_134 = (uint8_t  [4])_UNK_1806cb965;
                  local_138 = (uint8_t  [4])_DAT_1806cb961;
                  uStack_130._0_4_ = (float)_UNK_1806cb969;
                  uStack_130._4_4_ = (float)_UNK_1806cb96d;
                  if (*(char *)(*(int64_t *)
                                 ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                               0x12908) == '\0') {
                    lVal_24 = *(int64_t *)
                              ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                    *(uint8_t *)(lVal_24 + 0x12908) = 1;
                    func_0x1801ba020(lVal_24 + 0x128d9,local_138);
                    func_0x180673140(&LAB_1804310a0);
                    fVal_90 = _DAT_1806b2880;
                    fVal_36 = _UNK_1806b2884;
                    fVal_110 = _UNK_1806b2888;
                    fVal_35 = _UNK_1806b288c;
                  }
                  uVal_13 = _UNK_1806c8bdc;
                  uVal_64 = _UNK_1806c8bd8;
                  uVal_62 = _UNK_1806c8bd4;
                  uVal_20 = _DAT_1806c8bd0;
                  lVal_24 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  pU64_2 = (uint *)(lVal_24 + 0x128d9);
                  if (*(char *)(lVal_24 + 0x12907) == '\x01') {
                    uVal_61 = *(uint *)(lVal_24 + 0x128dd) ^ _UNK_1806c8bd4;
                    uVal_63 = *(uint *)(lVal_24 + 0x128e1) ^ _UNK_1806c8bd8;
                    uVal_65 = *(uint *)(lVal_24 + 0x128e5) ^ _UNK_1806c8bdc;
                    *pU64_2 = *pU64_2 ^ _DAT_1806c8bd0;
                    *(uint *)(lVal_24 + 0x128dd) = uVal_61;
                    *(uint *)(lVal_24 + 0x128e1) = uVal_63;
                    *(uint *)(lVal_24 + 0x128e5) = uVal_65;
                    *(uint *)(lVal_24 + 0x128e9) = *(uint *)(lVal_24 + 0x128e9) ^ uVal_20;
                    *(uint *)(lVal_24 + 0x128ed) = *(uint *)(lVal_24 + 0x128ed) ^ uVal_62;
                    *(uint *)(lVal_24 + 0x128f1) = *(uint *)(lVal_24 + 0x128f1) ^ uVal_64;
                    *(uint *)(lVal_24 + 0x128f5) = *(uint *)(lVal_24 + 0x128f5) ^ uVal_13;
                    *(uint64_t *)(lVal_24 + 0x128f9) =
                         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_24 + 0x128f9) >> 0x20) ^
                                  _UNK_1806c8be4,
                                  (uint)*(uint64_t *)(lVal_24 + 0x128f9) ^ _DAT_1806c8be0);
                    *(byte *)(lVal_24 + 0x12901) = *(byte *)(lVal_24 + 0x12901) ^ 0x95;
                    *(byte *)(lVal_24 + 0x12902) = *(byte *)(lVal_24 + 0x12902) ^ 0xb5;
                    *(byte *)(lVal_24 + 0x12903) = *(byte *)(lVal_24 + 0x12903) ^ 0xdd;
                    *(byte *)(lVal_24 + 0x12904) = *(byte *)(lVal_24 + 0x12904) ^ 0x21;
                    *(byte *)(lVal_24 + 0x12905) = *(byte *)(lVal_24 + 0x12905) ^ 0xef;
                    *(byte *)(lVal_24 + 0x12906) = *(byte *)(lVal_24 + 0x12906) ^ 0xd1;
                    *(uint8_t *)(lVal_24 + 0x12907) = 0;
                  }
                  _local_138 = ZEXT816(0);
                  sz_23 = strlen((char *)pU64_2);
                  if ((int64_t)sz_23 < 0) goto LAB_1803c80b0;
                  uVal_22 = 0xf;
                  if (0xf < sz_23) {
                    uVal_31 = sz_23 | 0xf;
                    uVal_22 = 0x16;
                    if (0x16 < uVal_31) {
                      uVal_22 = uVal_31;
                    }
                    if (uVal_31 < 0xfff) {
                      pU64_30 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
                    }
                    else {
                      lVal_24 = func_0x180672de0(uVal_22 + 0x28);
                      pU64_30 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
                      *(int64_t *)(pU64_30 + -8) = lVal_24;
                    }
                    _local_138 = (int64_t)pU64_30;
                  }
                  local_128 = (uint32_t)sz_23;
                  uStack_124 = (uint32_t)(sz_23 >> 0x20);
                  uStack_120 = (uint16_t)uVal_22;
                  uStack_11e = (uint16_t)(uVal_22 >> 0x10);
                  uStack_11c = (uint16_t)(uVal_22 >> 0x20);
                  uStack_11a = (uint16_t)(uVal_22 >> 0x30);
                  func_0x1806aa960(pU64_30,pU64_2,sz_23);
                  pU64_30[sz_23] = 0;
                  uVal_22 = CONCAT44(DAT_18083ca30._4_4_,(uint32_t)DAT_18083ca30);
                  if (0xf < uVal_22) {
                    lVal_33 = CONCAT44(DAT_18083ca18._4_4_,(uint32_t)DAT_18083ca18);
                    uVal_31 = uVal_22 + 1;
                    lVal_24 = lVal_33;
                    if (0xfff < uVal_31) {
                      lVal_24 = *(int64_t *)(lVal_33 + -8);
                      if (0x1f < (uint64_t)((lVal_33 + -8) - lVal_24)) goto LAB_1803c7ff0;
                      uVal_31 = uVal_22 + 0x28;
                    }
                    thunk_FUN_180695dd0(lVal_24,uVal_31);
                  }
                  DAT_18083ca30._0_4_ = CONCAT22(uStack_11e,uStack_120);
                  DAT_18083ca30._4_4_ = CONCAT22(uStack_11a,uStack_11c);
                  DAT_18083ca28._0_4_ = local_128;
                  DAT_18083ca28._4_4_ = uStack_124;
                  DAT_18083ca18._0_4_ = local_138;
                  DAT_18083ca18._4_4_ = auStack_134;
                  uRam000000018083ca20 = (float)uStack_130;
                  uRam000000018083ca24 = uStack_130._4_4_;
                }
                uVal_16 = DAT_1808405fc;
                if (DAT_18083ef17 != '\x01') goto LAB_1803c6fce;
                DAT_1808405fc = 2;
                DAT_18083ef17 = '\0';
                DAT_18084060f = uVal_16;
              }
              if (0xf < (uint64_t)local_1c8._8_8_) {
                uVal_22 = local_1c8._8_8_ + 1;
                lVal_24 = (int64_t)local_1d8;
                if (0xfff < uVal_22) {
                  lVal_24 = *(int64_t *)((int64_t)local_1d8 + -8);
                  if (0x1f < (uint64_t)(((int64_t)local_1d8 + -8) - lVal_24)) goto LAB_1803c7ff0;
                  uVal_22 = local_1c8._8_8_ + 0x28;
                }
                thunk_FUN_180695dd0(lVal_24,uVal_22);
              }
            }
            else {
              func_0x1800d36e0();
              if (*(char *)(DAT_180840610 + 0x82) == '\x01') {
                uStack_118 = _UNK_1806cb957;
                uStack_116 = (uint16_t)_UNK_1806cb959;
                uStack_114 = (uint16_t)((uint)_UNK_1806cb959 >> 0x10);
                uStack_112 = (uint16_t)_UNK_1806cb95d;
                uStack_110 = (uint16_t)((uint)_UNK_1806cb95d >> 0x10);
                local_128 = _DAT_1806cb947;
                uStack_124 = _UNK_1806cb94b;
                uStack_120 = _UNK_1806cb94f;
                uStack_11e = _DAT_1806cb951;
                uStack_11c = _UNK_1806cb953;
                uStack_11a = _UNK_1806cb955;
                auStack_134 = (uint8_t  [4])_UNK_1806cb93b;
                local_138 = (uint8_t  [4])_DAT_1806cb937;
                uStack_130._0_4_ = (float)_UNK_1806cb93f;
                uStack_130._4_4_ = (float)_UNK_1806cb943;
                if (*(char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x128c8) == '\0') {
                  lVal_24 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  *(uint8_t *)(lVal_24 + 0x128c8) = 1;
                  func_0x18012b7b0(lVal_24 + 0x1289d,local_138);
                  func_0x180673140(&LAB_180431040);
                }
                uVal_13 = _UNK_1806c8bac;
                uVal_64 = _UNK_1806c8ba8;
                uVal_62 = _UNK_1806c8ba4;
                uVal_20 = _DAT_1806c8ba0;
                lVal_24 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                pU64_2 = (uint *)(lVal_24 + 0x1289d);
                if (*(char *)(lVal_24 + 0x128c7) == '\x01') {
                  uVal_61 = *(uint *)(lVal_24 + 0x128a1) ^ _UNK_1806c8ba4;
                  uVal_63 = *(uint *)(lVal_24 + 0x128a5) ^ _UNK_1806c8ba8;
                  uVal_65 = *(uint *)(lVal_24 + 0x128a9) ^ _UNK_1806c8bac;
                  *pU64_2 = *pU64_2 ^ _DAT_1806c8ba0;
                  *(uint *)(lVal_24 + 0x128a1) = uVal_61;
                  *(uint *)(lVal_24 + 0x128a5) = uVal_63;
                  *(uint *)(lVal_24 + 0x128a9) = uVal_65;
                  *(uint *)(lVal_24 + 0x128ad) = *(uint *)(lVal_24 + 0x128ad) ^ uVal_20;
                  *(uint *)(lVal_24 + 0x128b1) = *(uint *)(lVal_24 + 0x128b1) ^ uVal_62;
                  *(uint *)(lVal_24 + 0x128b5) = *(uint *)(lVal_24 + 0x128b5) ^ uVal_64;
                  *(uint *)(lVal_24 + 0x128b9) = *(uint *)(lVal_24 + 0x128b9) ^ uVal_13;
                  *(uint64_t *)(lVal_24 + 0x128bd) =
                       CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_24 + 0x128bd) >> 0x20) ^
                                _UNK_1806c8bb4,
                                (uint)*(uint64_t *)(lVal_24 + 0x128bd) ^ _DAT_1806c8bb0);
                  *(byte *)(lVal_24 + 0x128c5) = *(byte *)(lVal_24 + 0x128c5) ^ 0x8f;
                  *(byte *)(lVal_24 + 0x128c6) = *(byte *)(lVal_24 + 0x128c6) ^ 0x3b;
                  *(uint8_t *)(lVal_24 + 0x128c7) = 0;
                }
                _local_138 = ZEXT816(0);
                sz_23 = strlen((char *)pU64_2);
                if (-1 < (int64_t)sz_23) {
                  uVal_22 = 0xf;
                  if (0xf < sz_23) {
                    uVal_31 = sz_23 | 0xf;
                    uVal_22 = 0x16;
                    if (0x16 < uVal_31) {
                      uVal_22 = uVal_31;
                    }
                    if (uVal_31 < 0xfff) {
                      pU64_32 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
                    }
                    else {
                      lVal_24 = func_0x180672de0(uVal_22 + 0x28);
                      pU64_32 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
                      *(int64_t *)(pU64_32 + -8) = lVal_24;
                    }
                    _local_138 = (int64_t)pU64_32;
                  }
                  local_128 = (uint32_t)sz_23;
                  uStack_124 = (uint32_t)(sz_23 >> 0x20);
                  uStack_120 = (uint16_t)uVal_22;
                  uStack_11e = (uint16_t)(uVal_22 >> 0x10);
                  uStack_11c = (uint16_t)(uVal_22 >> 0x20);
                  uStack_11a = (uint16_t)(uVal_22 >> 0x30);
                  func_0x1806aa960(pU64_32,pU64_2,sz_23);
                  pU64_32[sz_23] = 0;
                  uVal_22 = CONCAT44(DAT_18083ca30._4_4_,(uint32_t)DAT_18083ca30);
                  if (0xf < uVal_22) {
                    lVal_33 = CONCAT44(DAT_18083ca18._4_4_,(uint32_t)DAT_18083ca18);
                    uVal_31 = uVal_22 + 1;
                    lVal_24 = lVal_33;
                    if (0xfff < uVal_31) {
                      lVal_24 = *(int64_t *)(lVal_33 + -8);
                      if (0x1f < (uint64_t)((lVal_33 + -8) - lVal_24)) goto LAB_1803c7ff0;
                      uVal_31 = uVal_22 + 0x28;
                    }
                    thunk_FUN_180695dd0(lVal_24,uVal_31);
                  }
                  DAT_18083ca30._0_4_ = CONCAT22(uStack_11e,uStack_120);
                  DAT_18083ca30._4_4_ = CONCAT22(uStack_11a,uStack_11c);
                  DAT_18083ca28._0_4_ = local_128;
                  DAT_18083ca28._4_4_ = uStack_124;
                  DAT_18083ca18._0_4_ = local_138;
                  DAT_18083ca18._4_4_ = auStack_134;
                  uRam000000018083ca20 = (float)uStack_130;
                  uRam000000018083ca24 = uStack_130._4_4_;
                  goto LAB_1803c76eb;
                }
                goto LAB_1803c809e;
              }
LAB_1803c76eb:
              if (DAT_18083ef17 != '\x01') goto LAB_1803c6be8;
              func_0x1803396c0(DAT_180840620);
              DAT_18083ef17 = '\0';
            }
            if (0xf < (uint64_t)local_148._8_8_) {
              uVal_22 = local_148._8_8_ + 1;
              lVal_24 = (int64_t)local_158;
              if (0xfff < uVal_22) {
                lVal_24 = *(int64_t *)((int64_t)local_158 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_158 + -8) - lVal_24)) goto LAB_1803c7ff0;
                uVal_22 = local_148._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_24,uVal_22);
            }
          }
          else {
            func_0x1800d36e0();
            if (*(char *)(DAT_180840610 + 0x82) == '\x01') {
              auStack_134 = (uint8_t  [4])_UNK_1806cb92b;
              local_138 = (uint8_t  [4])_DAT_1806cb927;
              uStack_130._0_4_ = (float)_UNK_1806cb92f;
              uStack_130._4_4_ = (float)_UNK_1806cb933;
              if (*(char *)(*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                           0x12890) == '\0') {
                lVal_24 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                *(uint8_t *)(lVal_24 + 0x12890) = 1;
                func_0x18007d150(lVal_24 + 0x1287d,local_138);
                func_0x180673140(&LAB_180430ff0);
                fVal_90 = _DAT_1806b2880;
                fVal_36 = _UNK_1806b2884;
                fVal_110 = _UNK_1806b2888;
                fVal_35 = _UNK_1806b288c;
              }
              lVal_24 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              pU64_2 = (uint *)(lVal_24 + 0x1287d);
              if (*(char *)(lVal_24 + 0x1288d) == '\x01') {
                uVal_20 = *(uint *)(lVal_24 + 0x12881) ^ _UNK_1806c8b94;
                uVal_62 = *(uint *)(lVal_24 + 0x12885) ^ _UNK_1806c8b98;
                uVal_64 = *(uint *)(lVal_24 + 0x12889) ^ _UNK_1806c8b9c;
                *pU64_2 = *pU64_2 ^ _DAT_1806c8b90;
                *(uint *)(lVal_24 + 0x12881) = uVal_20;
                *(uint *)(lVal_24 + 0x12885) = uVal_62;
                *(uint *)(lVal_24 + 0x12889) = uVal_64;
                *(uint8_t *)(lVal_24 + 0x1288d) = 0;
              }
              _local_138 = ZEXT816(0);
              sz_23 = strlen((char *)pU64_2);
              if (-1 < (int64_t)sz_23) {
                uVal_22 = 0xf;
                if (0xf < sz_23) {
                  uVal_31 = sz_23 | 0xf;
                  uVal_22 = 0x16;
                  if (0x16 < uVal_31) {
                    uVal_22 = uVal_31;
                  }
                  if (uVal_31 < 0xfff) {
                    pU64_32 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
                  }
                  else {
                    lVal_24 = func_0x180672de0(uVal_22 + 0x28);
                    pU64_32 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
                    *(int64_t *)(pU64_32 + -8) = lVal_24;
                  }
                  _local_138 = (int64_t)pU64_32;
                }
                local_128 = (uint32_t)sz_23;
                uStack_124 = (uint32_t)(sz_23 >> 0x20);
                uStack_120 = (uint16_t)uVal_22;
                uStack_11e = (uint16_t)(uVal_22 >> 0x10);
                uStack_11c = (uint16_t)(uVal_22 >> 0x20);
                uStack_11a = (uint16_t)(uVal_22 >> 0x30);
                func_0x1806aa960(pU64_32,pU64_2,sz_23);
                pU64_32[sz_23] = 0;
                uVal_22 = CONCAT44(DAT_18083ca30._4_4_,(uint32_t)DAT_18083ca30);
                if (0xf < uVal_22) {
                  lVal_33 = CONCAT44(DAT_18083ca18._4_4_,(uint32_t)DAT_18083ca18);
                  uVal_31 = uVal_22 + 1;
                  lVal_24 = lVal_33;
                  if (0xfff < uVal_31) {
                    lVal_24 = *(int64_t *)(lVal_33 + -8);
                    if (0x1f < (uint64_t)((lVal_33 + -8) - lVal_24)) goto LAB_1803c7ff0;
                    uVal_31 = uVal_22 + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_24,uVal_31);
                }
                DAT_18083ca30._0_4_ = CONCAT22(uStack_11e,uStack_120);
                DAT_18083ca30._4_4_ = CONCAT22(uStack_11a,uStack_11c);
                DAT_18083ca28._0_4_ = local_128;
                DAT_18083ca28._4_4_ = uStack_124;
                DAT_18083ca18._0_4_ = local_138;
                DAT_18083ca18._4_4_ = auStack_134;
                uRam000000018083ca20 = (float)uStack_130;
                uRam000000018083ca24 = uStack_130._4_4_;
                goto LAB_1803c7afc;
              }
              goto LAB_1803c80aa;
            }
LAB_1803c7afc:
            if (DAT_18083ef17 != '\x01') goto LAB_1803c6801;
            func_0x1806ab010(*(uint64_t *)(DAT_180840620 + 0x170),0,0x4000);
            DAT_18083ef17 = '\0';
          }
          if (0xf < (uint64_t)local_218._8_8_) {
            uVal_22 = local_218._8_8_ + 1;
            lVal_24 = local_228._0_8_;
            if (0xfff < uVal_22) {
              lVal_24 = *(int64_t *)(local_228._0_8_ + -8);
              if (0x1f < (uint64_t)((local_228._0_8_ + -8) - lVal_24)) goto LAB_1803c7ff0;
              uVal_22 = local_218._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_24,uVal_22);
          }
        }
        else {
          auArr_38._8_4_ = local_298 * _DAT_1806c8a60;
          fVal_91 = fStack_294 * _UNK_1806c8a64;
          auArr_69._0_8_ = CONCAT44(fVal_91,auArr_38._8_4_);
          auArr_69._8_4_ = fStack_290 * _UNK_1806c8a68;
          auArr_69._12_4_ = fStack_28c * _UNK_1806c8a6c;
          auArr_82._8_4_ = auArr_69._8_4_;
          auArr_82._0_8_ = auArr_69._0_8_;
          auArr_82._12_4_ = auArr_69._12_4_;
          auArr_77._8_8_ = auArr_69._8_8_;
          if (auArr_38._8_4_ <= DAT_1806b26b4) {
            _local_138 = auArr_69;
            if (0.0 <= auArr_38._8_4_) goto LAB_1803c6184;
LAB_1803c725f:
            auArr_71 = roundss(ZEXT816(0),auArr_82,10);
            local_138 = (uint8_t  [4])((uint)(auArr_82._0_4_ - auArr_71._0_4_) ^ _DAT_1806af1a0);
            auArr_83._4_4_ = fVal_91;
            auArr_83._0_4_ = fVal_91;
            auArr_83._8_4_ = auArr_69._12_4_;
            auArr_83._12_4_ = auArr_69._12_4_;
            if (DAT_1806b26b4 < fVal_91) goto LAB_1803c6195;
LAB_1803c728c:
            if (0.0 <= auArr_83._0_4_) goto LAB_1803c61b6;
LAB_1803c7298:
            auArr_71 = roundss(ZEXT816(0),auArr_83,10);
            auStack_134 = (uint8_t  [4])((uint)(auArr_83._0_4_ - auArr_71._0_4_) ^ _DAT_1806af1a0);
            if (DAT_1806b26b4 < auArr_69._8_4_) goto LAB_1803c61c6;
LAB_1803c72c4:
            auArr_78._8_8_ = auArr_77._8_8_;
            auArr_78._0_8_ = auArr_77._8_8_;
          }
          else {
            auArr_71 = roundss(auArr_71,auArr_69,9);
            auArr_81._8_4_ = auArr_69._8_4_;
            auArr_81._0_8_ = auArr_69._0_8_;
            auArr_81._12_4_ = auArr_69._12_4_;
            auArr_82._4_12_ = auArr_81._4_12_;
            auArr_82._0_4_ = auArr_38._8_4_ - auArr_71._0_4_;
            _auStack_134 = auArr_69._4_12_;
            local_138 = (uint8_t  [4])auArr_82._0_4_;
            if (auArr_82._0_4_ < 0.0) goto LAB_1803c725f;
LAB_1803c6184:
            auArr_83._4_4_ = fVal_91;
            auArr_83._0_4_ = fVal_91;
            auArr_83._8_4_ = auArr_69._12_4_;
            auArr_83._12_4_ = auArr_69._12_4_;
            if (fVal_91 <= DAT_1806b26b4) goto LAB_1803c728c;
LAB_1803c6195:
            auArr_71 = roundss(ZEXT816(0),auArr_83,9);
            auArr_83._0_4_ = auArr_83._0_4_ - auArr_71._0_4_;
            auStack_134 = (uint8_t  [4])auArr_83._0_4_;
            if (auArr_83._0_4_ < 0.0) goto LAB_1803c7298;
LAB_1803c61b6:
            if (auArr_69._8_4_ <= DAT_1806b26b4) goto LAB_1803c72c4;
LAB_1803c61c6:
            auArr_77._0_8_ = auArr_77._8_8_;
            auArr_71 = roundss(ZEXT816(0),auArr_77,9);
            auArr_78._4_12_ = auArr_77._4_12_;
            auArr_78._0_4_ = auArr_69._8_4_ - auArr_71._0_4_;
            uStack_130._0_4_ = auArr_78._0_4_;
            auArr_69._8_4_ = auArr_78._0_4_;
          }
          if (auArr_69._8_4_ < 0.0) {
            auArr_71 = roundss(ZEXT816(0),auArr_78,10);
            uStack_130._0_4_ = (float)((uint)(auArr_78._0_4_ - auArr_71._0_4_) ^ _DAT_1806af1a0);
          }
          func_0x1800d36e0();
          if (*(char *)(DAT_180840610 + 0x82) == '\x01') {
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x12870) == '\0') {
              lVal_24 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_24 + 0x12870) = 1;
              *(uint8_t *)(lVal_24 + 0x1286c) = 1;
              uVal_15 = _UNK_1806cb8e8;
              uVal_14 = _UNK_1806cb8e4;
              uVal_8 = _UNK_1806cb8e0;
              *(uint32_t *)(lVal_24 + 0x12821) = _DAT_1806cb8dc;
              *(uint32_t *)(lVal_24 + 0x12825) = uVal_8;
              *(uint32_t *)(lVal_24 + 0x12829) = uVal_14;
              *(uint32_t *)(lVal_24 + 0x1282d) = uVal_15;
              uVal_15 = _UNK_1806cb8f8;
              uVal_14 = _UNK_1806cb8f4;
              uVal_8 = _UNK_1806cb8f0;
              *(uint32_t *)(lVal_24 + 0x12831) = _DAT_1806cb8ec;
              *(uint32_t *)(lVal_24 + 0x12835) = uVal_8;
              *(uint32_t *)(lVal_24 + 0x12839) = uVal_14;
              *(uint32_t *)(lVal_24 + 0x1283d) = uVal_15;
              uVal_15 = _UNK_1806cb908;
              uVal_14 = _UNK_1806cb904;
              uVal_8 = _UNK_1806cb900;
              *(uint32_t *)(lVal_24 + 0x12841) = _DAT_1806cb8fc;
              *(uint32_t *)(lVal_24 + 0x12845) = uVal_8;
              *(uint32_t *)(lVal_24 + 0x12849) = uVal_14;
              *(uint32_t *)(lVal_24 + 0x1284d) = uVal_15;
              uVal_15 = _UNK_1806cb918;
              uVal_14 = _UNK_1806cb914;
              uVal_8 = _UNK_1806cb910;
              *(uint32_t *)(lVal_24 + 0x12851) = _DAT_1806cb90c;
              *(uint32_t *)(lVal_24 + 0x12855) = uVal_8;
              *(uint32_t *)(lVal_24 + 0x12859) = uVal_14;
              *(uint32_t *)(lVal_24 + 0x1285d) = uVal_15;
              uVal_15 = _UNK_1806cb923;
              uVal_14 = _UNK_1806cb91f;
              uVal_8 = CONCAT31(_UNK_1806cb91c,UNK_1806cb91b);
              *(uint *)(lVal_24 + 0x1285c) = CONCAT31(_UNK_1806cb918,DAT_1806cb917);
              *(uint32_t *)(lVal_24 + 0x12860) = uVal_8;
              *(uint32_t *)(lVal_24 + 0x12864) = uVal_14;
              *(uint32_t *)(lVal_24 + 0x12868) = uVal_15;
              func_0x180673140(&LAB_180430f80);
            }
            uVal_13 = _UNK_1806c8b7c;
            uVal_64 = _UNK_1806c8b78;
            uVal_62 = _UNK_1806c8b74;
            uVal_20 = _DAT_1806c8b70;
            lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            pU64_2 = (uint *)(lVal_24 + 0x12821);
            if (*(char *)(lVal_24 + 0x1286c) == '\x01') {
              uVal_61 = *(uint *)(lVal_24 + 0x12825) ^ _UNK_1806c8b74;
              uVal_63 = *(uint *)(lVal_24 + 0x12829) ^ _UNK_1806c8b78;
              uVal_65 = *(uint *)(lVal_24 + 0x1282d) ^ _UNK_1806c8b7c;
              *pU64_2 = *pU64_2 ^ _DAT_1806c8b70;
              *(uint *)(lVal_24 + 0x12825) = uVal_61;
              *(uint *)(lVal_24 + 0x12829) = uVal_63;
              *(uint *)(lVal_24 + 0x1282d) = uVal_65;
              *(uint *)(lVal_24 + 0x12831) = *(uint *)(lVal_24 + 0x12831) ^ uVal_20;
              *(uint *)(lVal_24 + 0x12835) = *(uint *)(lVal_24 + 0x12835) ^ uVal_62;
              *(uint *)(lVal_24 + 0x12839) = *(uint *)(lVal_24 + 0x12839) ^ uVal_64;
              *(uint *)(lVal_24 + 0x1283d) = *(uint *)(lVal_24 + 0x1283d) ^ uVal_13;
              *(uint *)(lVal_24 + 0x12841) = *(uint *)(lVal_24 + 0x12841) ^ uVal_20;
              *(uint *)(lVal_24 + 0x12845) = *(uint *)(lVal_24 + 0x12845) ^ uVal_62;
              *(uint *)(lVal_24 + 0x12849) = *(uint *)(lVal_24 + 0x12849) ^ uVal_64;
              *(uint *)(lVal_24 + 0x1284d) = *(uint *)(lVal_24 + 0x1284d) ^ uVal_13;
              *(uint *)(lVal_24 + 0x12851) = *(uint *)(lVal_24 + 0x12851) ^ uVal_20;
              *(uint *)(lVal_24 + 0x12855) = *(uint *)(lVal_24 + 0x12855) ^ uVal_62;
              *(uint *)(lVal_24 + 0x12859) = *(uint *)(lVal_24 + 0x12859) ^ uVal_64;
              *(uint *)(lVal_24 + 0x1285d) = *(uint *)(lVal_24 + 0x1285d) ^ uVal_13;
              *(uint64_t *)(lVal_24 + 0x12861) =
                   CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_24 + 0x12861) >> 0x20) ^
                            _UNK_1806c8b84,(uint)*(uint64_t *)(lVal_24 + 0x12861) ^ _DAT_1806c8b80)
              ;
              *(byte *)(lVal_24 + 0x12869) = *(byte *)(lVal_24 + 0x12869) ^ 0xf1;
              *(byte *)(lVal_24 + 0x1286a) = *(byte *)(lVal_24 + 0x1286a) ^ 9;
              *(byte *)(lVal_24 + 0x1286b) = *(byte *)(lVal_24 + 0x1286b) ^ 0x99;
              *(uint8_t *)(lVal_24 + 0x1286c) = 0;
            }
            _local_138 = ZEXT816(0);
            sz_23 = strlen((char *)pU64_2);
            if (-1 < (int64_t)sz_23) {
              uVal_22 = 0xf;
              if (0xf < sz_23) {
                uVal_31 = sz_23 | 0xf;
                uVal_22 = 0x16;
                if (0x16 < uVal_31) {
                  uVal_22 = uVal_31;
                }
                if (uVal_31 < 0xfff) {
                  pU64_32 = (uint8_t *)func_0x180672de0(uVal_22 + 1);
                }
                else {
                  lVal_24 = func_0x180672de0(uVal_22 + 0x28);
                  pU64_32 = (uint8_t *)(lVal_24 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_32 + -8) = lVal_24;
                }
                _local_138 = (int64_t)pU64_32;
              }
              local_128 = (uint32_t)sz_23;
              uStack_124 = (uint32_t)(sz_23 >> 0x20);
              uStack_120 = (uint16_t)uVal_22;
              uStack_11e = (uint16_t)(uVal_22 >> 0x10);
              uStack_11c = (uint16_t)(uVal_22 >> 0x20);
              uStack_11a = (uint16_t)(uVal_22 >> 0x30);
              func_0x1806aa960(pU64_32,pU64_2,sz_23);
              pU64_32[sz_23] = 0;
              uVal_22 = CONCAT44(DAT_18083ca30._4_4_,(uint32_t)DAT_18083ca30);
              if (0xf < uVal_22) {
                lVal_33 = CONCAT44(DAT_18083ca18._4_4_,(uint32_t)DAT_18083ca18);
                uVal_31 = uVal_22 + 1;
                lVal_24 = lVal_33;
                if (0xfff < uVal_31) {
                  lVal_24 = *(int64_t *)(lVal_33 + -8);
                  if (0x1f < (uint64_t)((lVal_33 + -8) - lVal_24)) goto LAB_1803c7ff0;
                  uVal_31 = uVal_22 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_24,uVal_31);
              }
              DAT_18083ca30._0_4_ = CONCAT22(uStack_11e,uStack_120);
              DAT_18083ca30._4_4_ = CONCAT22(uStack_11a,uStack_11c);
              DAT_18083ca28._0_4_ = local_128;
              DAT_18083ca28._4_4_ = uStack_124;
              DAT_18083ca18._0_4_ = local_138;
              DAT_18083ca18._4_4_ = auStack_134;
              uRam000000018083ca20 = (float)uStack_130;
              uRam000000018083ca24 = uStack_130._4_4_;
              goto LAB_1803c7a2c;
            }
            goto LAB_1803c80a4;
          }
LAB_1803c7a2c:
          if (DAT_18083ef17 != '\x01') goto LAB_1803c636f;
          DAT_18084060f = DAT_1808405fc;
          DAT_1808405fc = 2;
          func_0x1803380d0(DAT_180840620);
          DAT_18083ef17 = '\0';
        }
        if (0xf < (uint64_t)local_238._8_8_) {
          uVal_22 = local_238._8_8_ + 1;
          lVal_24 = local_248._0_8_;
          if (0xfff < uVal_22) {
            lVal_24 = *(int64_t *)(local_248._0_8_ + -8);
            if (0x1f < (uint64_t)((local_248._0_8_ + -8) - lVal_24)) goto LAB_1803c7ff0;
            uVal_22 = local_238._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_24,uVal_22);
        }
      }
      else {
        auArr_71 = ZEXT416(*(uint *)(DAT_180840610 + 0x174));
        func_0x1800d36e0();
        if (DAT_18083ef17 != '\x01') goto LAB_1803c5f3d;
        *(uint32_t *)(local_160 + 0x15c) = 0x40;
        *(uint8_t *)(DAT_180840620 + 0x159) = 0;
        DAT_18083ef17 = '\0';
      }
      if (0xf < (uint64_t)local_258._8_8_) {
        uVal_22 = local_258._8_8_ + 1;
        lVal_24 = (int64_t)local_268;
        if (0xfff < uVal_22) {
          lVal_24 = *(int64_t *)((int64_t)local_268 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_268 + -8) - lVal_24)) goto LAB_1803c7ff0;
          uVal_22 = local_258._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_24,uVal_22);
      }
    }
    else {
      func_0x1800d36e0();
      if (DAT_18083ef17 != '\x01') goto LAB_1803c5c61;
      *(uint32_t *)(local_160 + 0x15c) = 0x20;
      *(uint8_t *)(DAT_180840620 + 0x159) = 0;
      DAT_18083ef17 = '\0';
    }
    if (0xf < (uint64_t)local_278._8_8_) {
      uVal_22 = local_278._8_8_ + 1;
      lVal_24 = (int64_t)local_288;
      if (0xfff < uVal_22) {
        lVal_24 = *(int64_t *)((int64_t)local_288 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_288 + -8) - lVal_24)) goto LAB_1803c7ff0;
        uVal_22 = local_278._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_24,uVal_22);
    }
  }
  else {
    func_0x1800d36e0();
    if (DAT_18083ef17 != '\x01') goto LAB_1803c597c;
    *(uint32_t *)(local_160 + 0x15c) = 0x10;
    *(uint8_t *)(DAT_180840620 + 0x159) = 0;
    DAT_18083ef17 = '\0';
  }
  if (0xf < (uint64_t)local_188._8_8_) {
    uVal_22 = local_188._8_8_ + 1;
    lVal_24 = (int64_t)local_198;
    if (0xfff < uVal_22) {
      lVal_24 = *(int64_t *)((int64_t)local_198 + -8);
      if (0x1f < (uint64_t)(((int64_t)local_198 + -8) - lVal_24)) {
LAB_1803c7ff0:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_22 = local_188._8_8_ + 0x28;
    }
    thunk_FUN_180695dd0(lVal_24,uVal_22);
  }
  return;
}

// Unwind@1803c80c0
void Unwind_1803c80c0(void)
{
  func_0x180672f60(&DAT_180840628);
  return;
}

// Unwind@1803c81a0
void Unwind_1803c81a0(void)
{
  func_0x180672f60(&DAT_180840618);
  return;
}

// Unwind@1803c8280
void Unwind_1803c8280(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12908) = 0;
  return;
}

// Unwind@1803c8370
void Unwind_1803c8370(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12890) = 0;
  return;
}

// Unwind@1803c8460
void Unwind_1803c8460(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x128c8) = 0;
  return;
}

// Unwind@1803c8550
void Unwind_1803c8550(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12948) = 0;
  return;
}

// Unwind@1803c8640
void Unwind_1803c8640(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  return;
}

// Unwind@1803c8720
void Unwind_1803c8720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1803c8800
void Unwind_1803c8800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@1803c88e0
void Unwind_1803c88e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1803c89c0
void Unwind_1803c89c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1803c8aa0
void Unwind_1803c8aa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1803c8b80
void Unwind_1803c8b80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1803c8c60
void Unwind_1803c8c60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// func_0x1803c8d40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803c8d40(void)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  uint64_t *pU64_4;
  uint8_t (*pArr16_5)[16];
  uint32_t *pU64_6;
  func_ptr_t fnPtr_7;
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  uint32_t uVal_18;
  uint32_t uVal_19;
  uint32_t uVal_20;
  uint32_t uVal_21;
  uint32_t uVal_22;
  uint32_t uVal_23;
  uint32_t uVal_24;
  uint uVal_25;
  uint uVal_26;
  char ch_27;
  int iVal_28;
  int iVal_29;
  size_t sz_30;
  uint64_t uVal_31;
  int64_t lVal_32;
  uint64_t uVal_33;
  uint64_t uVal_34;
  uint64_t uVal_35;
  int64_t lVal_36;
  uint64_t *pU64_37;
  uint64_t uVal_38;
  int64_t lVal_39;
  int64_t lVal_40;
  uint32_t *pU64_41;
  uint *pU64_42;
  uint64_t uVal_43;
  int iVal_44;
  float *pFloat_45;
  uint64_t *pU64_46;
  char *fnPtr_47;
  char *fnPtr_48;
  uint8_t *pU64_49;
  uint uVal_55;
  uint uVal_56;
  uint uVal_57;
  uint uVal_58;
  uint8_t auArr_50 [16];
  uint8_t auArr_51 [16];
  uint8_t auArr_52 [16];
  uint8_t auArr_53 [16];
  uint8_t auArr_54 [16];
  uint uVal_59;
  uint uVal_60;
  uint uVal_61;
  float fVal_62;
  int iVal_63;
  uint8_t auArr_64 [16];
  float fVal_65;
  float fVal_66;
  float fVal_67;
  float fVal_68;
  float fVal_69;
  float fVal_70;
  float fVal_71;
  uint8_t auArr_72 [16];
  float fVal_73;
  uint8_t auArr_74 [16];
  uint8_t auArr_75 [16];
  uint64_t in_stack_fffffffffffffda8;
  uint64_t in_stack_fffffffffffffdb0;
  uint32_t uVal_76;
  uint32_t uVal_77;
  uint8_t uVal_78;
  uint32_t local_228;
  uint32_t uStack_224;
  uint32_t uStack_220;
  float fStack_21c;
  uint64_t local_210;
  uint32_t local_208;
  float local_204;
  int64_t local_200;
  uint64_t local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  int64_t local_1e0;
  uint64_t local_1d8;
  uint32_t local_1d0;
  uint64_t local_1c8;
  float fStack_1c0;
  float fStack_1bc;
  uint64_t local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  uint8_t uStack_18c;
  uint16_t uStack_18b;
  uint8_t uStack_189;
  uint8_t uStack_188;
  uint8_t uStack_187;
  uint8_t uStack_186;
  uint8_t uStack_185;
  uint8_t uStack_184;
  uint16_t uStack_183;
  uint8_t uStack_181;
  float fStack_180;
  uint32_t uStack_17c;
  uint32_t uStack_178;
  uint32_t uStack_174;
  uint32_t local_170;
  uint32_t uStack_16c;
  uint8_t uStack_168;
  uint32_t uStack_167;
  uint32_t uStack_163;
  uint32_t uStack_15f;
  uint8_t local_118 [8];
  uint64_t uStack_110;
  uint8_t local_108 [4];
  uint32_t uStack_104;
  uint64_t uStack_100;
  uint64_t local_f0;
  
  uVal_58 = (uint)((uint64_t)in_stack_fffffffffffffdb0 >> 0x20);
  uVal_56 = (uint)((uint64_t)in_stack_fffffffffffffda8 >> 0x20);
  local_f0 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840638) && (func_0x180672ec0(&DAT_180840638), DAT_180840638 == -1)) {
    DAT_180840630 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840638);
  }
  if (CONCAT44(DAT_18083ca30._4_4_,(uint32_t)DAT_18083ca30) < 0x10) {
    DAT_18083ca28 = 0;
    DAT_18083ca18._0_4_ = (float)((uint)(float)DAT_18083ca18 & 0xffffff00);
  }
  else {
    DAT_18083ca28 = 0;
    *(uint8_t *)CONCAT44(DAT_18083ca18._4_4_,(float)DAT_18083ca18) = 0;
  }
  if (DAT_1808400b0 == '\0') {
    return;
  }
  if (DAT_18084063c == '\0') {
    DAT_18084063c = '\x01';
    fStack_194 = (float)((int)DAT_1808400a8 >> 0x1f);
    local_198 = DAT_1808400a8;
    if ((uint64_t)(int64_t)(int)DAT_1808400a8 <=
        (uint64_t)(DAT_1808402f0 - (int64_t)DAT_1808402e0 >> 3)) goto LAB_1803c8e74;
    if ((uint64_t)(int64_t)(int)DAT_1808400a8 >> 0x3d == 0) {
      func_0x18007fe80(&DAT_1808402e0,&local_198);
      goto LAB_1803c8e74;
    }
LAB_1803ce47e:
    func_0x18007c0d0();
LAB_1803ce484:
    func_0x18007ba70();
LAB_1803ce48a:
    func_0x18007ba70();
LAB_1803ce490:
    func_0x18007ba70();
LAB_1803ce496:
    func_0x18007ba70();
  }
  else {
LAB_1803c8e74:
    func_0x1803d1270();
    if (DAT_1808405fc == '\x04') {
      func_0x1803d1880();
      return;
    }
    func_0x18011b920(DAT_180840a50,&local_1c8);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1295c) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x1295c) = 1;
      *(uint64_t *)(lVal_32 + 0x12950) = 0x2ed76030600dd692;
      *(uint32_t *)(lVal_32 + 0x12958) = 0x17fd898;
      func_0x180673140(&LAB_180431110);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_32 + 0x12950);
    if (*(char *)(lVal_32 + 0x1295b) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x41bb4f5f097fb7ff;
      *(uint *)(lVal_32 + 0x12958) =
           (*(uint *)(lVal_32 + 0x12958) & 0xffff | (uint)*(byte *)(lVal_32 + 0x1295a) << 0x10) ^
           SUB164(_DAT_1806c8c10,0);
    }
    _local_108 = (uint8_t  [16])0x0;
    _local_118 = (uint8_t  [16])0x0;
    sz_30 = strlen((char *)pU64_4);
    if ((int64_t)sz_30 < 0) {
      func_0x18007ba70();
LAB_1803ce424:
      func_0x18007ba70();
LAB_1803ce42a:
      func_0x18007ba70();
LAB_1803ce430:
      func_0x18007ba70();
LAB_1803ce436:
      func_0x18007ba70();
LAB_1803ce43c:
      func_0x18007ba70();
LAB_1803ce442:
      func_0x18007ba70();
LAB_1803ce448:
      func_0x18007ba70();
LAB_1803ce44e:
      func_0x18007ba70();
LAB_1803ce454:
      func_0x18007ba70();
LAB_1803ce45a:
      func_0x18007ba70();
LAB_1803ce460:
      func_0x18007ba70();
LAB_1803ce466:
      func_0x18007ba70();
LAB_1803ce46c:
      func_0x18007ba70();
LAB_1803ce472:
      func_0x18007ba70();
LAB_1803ce478:
      func_0x18007ba70();
      goto LAB_1803ce47e;
    }
    uVal_43 = 0xf;
    fnPtr_47 = local_118;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        fnPtr_47 = (char *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        fnPtr_47 = (char *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_47 + -8) = lVal_32;
      }
      local_118 = (uint8_t  [8])fnPtr_47;
    }
    uStack_100 = uVal_43;
    _local_108 = sz_30;
    func_0x1806aa960(fnPtr_47,pU64_4,sz_30);
    fnPtr_47[sz_30] = '\0';
    uVal_43 = _local_108;
    fnPtr_47 = local_118;
    if (0xf < uStack_100) {
      fnPtr_47 = (char *)local_118;
    }
    local_198 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    fVal_69 = fStack_180;
    uStack_17c = 0;
    uVal_76 = uStack_17c;
    uStack_178 = 0;
    uStack_174 = 0;
    if ((int64_t)_local_108 < 0) goto LAB_1803ce424;
    fStack_180 = SUB164(_local_108,0);
    fVal_68 = fStack_180;
    uStack_17c = SUB164(_local_108,4);
    uVal_77 = uStack_17c;
    if (_local_108 < 0x10) {
      uStack_178 = 0xf;
      uStack_174 = 0;
      func_0x1806aa960(&fStack_190,fnPtr_47,_local_108);
      *(uint8_t *)((int64_t)&fStack_190 + uVal_43) = 0;
      if (uVal_43 != 0) goto LAB_1803c90a2;
      uVal_43 = 0xaf63bd4c8601b7df;
      uVal_38 = 0;
    }
    else {
      uVal_38 = _local_108 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_38) {
        uVal_31 = uVal_38;
      }
      fStack_180 = fVal_69;
      uStack_17c = uVal_76;
      if (uVal_38 < 0xfff) {
        uVal_38 = func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_31 + 0x28);
        uVal_38 = lVal_32 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_38 - 8) = lVal_32;
      }
      fStack_190 = (float)uVal_38;
      uStack_18c = (uint8_t)(uVal_38 >> 0x20);
      uStack_18b = (uint16_t)(uVal_38 >> 0x28);
      uStack_189 = (uint8_t)(uVal_38 >> 0x38);
      uStack_178 = (uint32_t)uVal_31;
      uStack_174 = (uint32_t)(uVal_31 >> 0x20);
      fStack_180 = fVal_68;
      uStack_17c = uVal_77;
      func_0x1806aa960(uVal_38,fnPtr_47,uVal_43);
      *(uint8_t *)(uVal_38 + uVal_43) = 0;
LAB_1803c90a2:
      uVal_31 = (uint64_t)((uint)fVal_68 & 7);
      if (uVal_43 - 1 < 7) {
        uVal_38 = 0xcbf29ce484222325;
LAB_1803c914e:
        uVal_43 = 0;
        do {
          uVal_38 = uVal_38 * 0x100000001b3 ^ (int64_t)fnPtr_47[uVal_43];
          uVal_43 = uVal_43 + 1;
        } while (uVal_31 != uVal_43);
      }
      else {
        uVal_43 = uVal_43 & 0x7ffffffffffffff8;
        uVal_38 = 0xcbf29ce484222325;
        do {
          uVal_38 = (((((((uVal_38 * 0x100000001b3 ^ (int64_t)*fnPtr_47) * 0x100000001b3 ^
                        (int64_t)fnPtr_47[1]) * 0x100000001b3 ^ (int64_t)fnPtr_47[2]) *
                       0x100000001b3 ^ (int64_t)fnPtr_47[3]) * 0x100000001b3 ^ (int64_t)fnPtr_47[4])
                     * 0x100000001b3 ^ (int64_t)fnPtr_47[5]) * 0x100000001b3 ^ (int64_t)fnPtr_47[6])
                   * 0x100000001b3 ^ (int64_t)fnPtr_47[7];
          fnPtr_47 = fnPtr_47 + 8;
          uVal_43 = uVal_43 - 8;
        } while (uVal_43 != 0);
        if (uVal_31 != 0) goto LAB_1803c914e;
      }
      uVal_43 = ((uint64_t)local_198._0_1_ ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_38;
    }
    local_170 = (uint32_t)uVal_38;
    uStack_16c = (uint32_t)(uVal_38 >> 0x20);
    uStack_168 = (uint8_t)uVal_43;
    uStack_167 = (uint32_t)(uVal_43 >> 8);
    uStack_163._0_3_ = (undefined3)(uVal_43 >> 0x28);
    ch_27 = func_0x1801011a0(local_1c8,&local_198);
    if (ch_27 == '\0') {
      func_0x1800d4ec0(local_118,PTR_PNG_18083a2f0,DAT_18083a2f8);
    }
    uVal_43 = CONCAT44(uStack_174,uStack_178);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,fStack_190)));
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12970) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12970) = 1;
      *(uint8_t *)(lVal_32 + 0x1296c) = 1;
      *(uint64_t *)(lVal_32 + 0x12960) = 0xc39aa2de961db6a4;
      *(uint32_t *)(lVal_32 + 0x12968) = 0xff1ca4a6;
      func_0x180673140(&LAB_180431140);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_32 + 0x12960);
    if (*(char *)(lVal_32 + 0x1296c) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0xb1f98db1ff6fd7c9;
      *(uint *)(lVal_32 + 0x12968) = *(uint *)(lVal_32 + 0x12968) ^ 0xff6fd7c9;
      *(uint8_t *)(lVal_32 + 0x1296c) = 0;
    }
    _local_108 = (uint8_t  [16])0x0;
    _local_118 = (uint8_t  [16])0x0;
    sz_30 = strlen((char *)pU64_4);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce42a;
    uVal_43 = 0xf;
    fnPtr_47 = local_118;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        fnPtr_47 = (char *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        fnPtr_47 = (char *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_47 + -8) = lVal_32;
      }
      local_118 = (uint8_t  [8])fnPtr_47;
    }
    uStack_100 = uVal_43;
    _local_108 = sz_30;
    func_0x1806aa960(fnPtr_47,pU64_4,sz_30);
    fnPtr_47[sz_30] = '\0';
    uVal_43 = _local_108;
    fnPtr_47 = local_118;
    if (0xf < uStack_100) {
      fnPtr_47 = (char *)local_118;
    }
    local_198 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    fVal_69 = fStack_180;
    uStack_17c = 0;
    uVal_76 = uStack_17c;
    uStack_178 = 0;
    uStack_174 = 0;
    if ((int64_t)_local_108 < 0) goto LAB_1803ce430;
    fStack_180 = SUB164(_local_108,0);
    fVal_68 = fStack_180;
    uStack_17c = SUB164(_local_108,4);
    uVal_77 = uStack_17c;
    if (_local_108 < 0x10) {
      uStack_178 = 0xf;
      uStack_174 = 0;
      func_0x1806aa960(&fStack_190,fnPtr_47,_local_108);
      *(uint8_t *)((int64_t)&fStack_190 + uVal_43) = 0;
      if (uVal_43 != 0) goto LAB_1803c9421;
      uVal_43 = 0xaf63bd4c8601b7df;
      uVal_38 = 0;
    }
    else {
      uVal_38 = _local_108 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_38) {
        uVal_31 = uVal_38;
      }
      fStack_180 = fVal_69;
      uStack_17c = uVal_76;
      if (uVal_38 < 0xfff) {
        uVal_38 = func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_31 + 0x28);
        uVal_38 = lVal_32 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_38 - 8) = lVal_32;
      }
      fStack_190 = (float)uVal_38;
      uStack_18c = (uint8_t)(uVal_38 >> 0x20);
      uStack_18b = (uint16_t)(uVal_38 >> 0x28);
      uStack_189 = (uint8_t)(uVal_38 >> 0x38);
      uStack_178 = (uint32_t)uVal_31;
      uStack_174 = (uint32_t)(uVal_31 >> 0x20);
      fStack_180 = fVal_68;
      uStack_17c = uVal_77;
      func_0x1806aa960(uVal_38,fnPtr_47,uVal_43);
      *(uint8_t *)(uVal_38 + uVal_43) = 0;
LAB_1803c9421:
      uVal_31 = (uint64_t)((uint)fVal_68 & 7);
      if (uVal_43 - 1 < 7) {
        uVal_38 = 0xcbf29ce484222325;
LAB_1803c94ce:
        uVal_43 = 0;
        do {
          uVal_38 = uVal_38 * 0x100000001b3 ^ (int64_t)fnPtr_47[uVal_43];
          uVal_43 = uVal_43 + 1;
        } while (uVal_31 != uVal_43);
      }
      else {
        uVal_43 = uVal_43 & 0x7ffffffffffffff8;
        uVal_38 = 0xcbf29ce484222325;
        do {
          uVal_38 = (((((((uVal_38 * 0x100000001b3 ^ (int64_t)*fnPtr_47) * 0x100000001b3 ^
                        (int64_t)fnPtr_47[1]) * 0x100000001b3 ^ (int64_t)fnPtr_47[2]) *
                       0x100000001b3 ^ (int64_t)fnPtr_47[3]) * 0x100000001b3 ^ (int64_t)fnPtr_47[4])
                     * 0x100000001b3 ^ (int64_t)fnPtr_47[5]) * 0x100000001b3 ^ (int64_t)fnPtr_47[6])
                   * 0x100000001b3 ^ (int64_t)fnPtr_47[7];
          fnPtr_47 = fnPtr_47 + 8;
          uVal_43 = uVal_43 - 8;
        } while (uVal_43 != 0);
        if (uVal_31 != 0) goto LAB_1803c94ce;
      }
      uVal_43 = ((uint64_t)local_198._0_1_ ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_38;
    }
    local_170 = (uint32_t)uVal_38;
    uStack_16c = (uint32_t)(uVal_38 >> 0x20);
    uStack_168 = (uint8_t)uVal_43;
    uStack_167 = (uint32_t)(uVal_43 >> 8);
    uStack_163._0_3_ = (undefined3)(uVal_43 >> 0x28);
    ch_27 = func_0x1801011a0(local_1c8,&local_198);
    if (ch_27 == '\0') {
      func_0x1800d4ec0(local_118,PTR_PNG_18083a290,DAT_18083a298);
    }
    uVal_43 = CONCAT44(uStack_174,uStack_178);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,fStack_190)));
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12984) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12984) = 1;
      *(uint64_t *)(lVal_32 + 0x12978) = 0x6902188248d7bede;
      *(uint32_t *)(lVal_32 + 0x12980) = 0x1a5add2;
      func_0x180673140(&LAB_180431170);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_32 + 0x12978);
    if (*(char *)(lVal_32 + 0x12983) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x1d7137ed21a5dfb3;
      *(uint *)(lVal_32 + 0x12980) =
           (*(uint *)(lVal_32 + 0x12980) & 0xffff | (uint)*(byte *)(lVal_32 + 0x12982) << 0x10) ^
           SUB164(_DAT_1806c8c20,0);
    }
    _local_108 = (uint8_t  [16])0x0;
    _local_118 = (uint8_t  [16])0x0;
    sz_30 = strlen((char *)pU64_4);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce436;
    uVal_43 = 0xf;
    fnPtr_47 = local_118;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        fnPtr_47 = (char *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        fnPtr_47 = (char *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_47 + -8) = lVal_32;
      }
      local_118 = (uint8_t  [8])fnPtr_47;
    }
    uStack_100 = uVal_43;
    _local_108 = sz_30;
    func_0x1806aa960(fnPtr_47,pU64_4,sz_30);
    fnPtr_47[sz_30] = '\0';
    uVal_43 = _local_108;
    fnPtr_47 = local_118;
    if (0xf < uStack_100) {
      fnPtr_47 = (char *)local_118;
    }
    local_198 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    fVal_69 = fStack_180;
    uStack_17c = 0;
    uVal_76 = uStack_17c;
    uStack_178 = 0;
    uStack_174 = 0;
    if ((int64_t)_local_108 < 0) goto LAB_1803ce43c;
    fStack_180 = SUB164(_local_108,0);
    fVal_68 = fStack_180;
    uStack_17c = SUB164(_local_108,4);
    uVal_77 = uStack_17c;
    if (_local_108 < 0x10) {
      uStack_178 = 0xf;
      uStack_174 = 0;
      func_0x1806aa960(&fStack_190,fnPtr_47,_local_108);
      *(uint8_t *)((int64_t)&fStack_190 + uVal_43) = 0;
      if (uVal_43 != 0) goto LAB_1803c97b7;
      uVal_43 = 0xaf63bd4c8601b7df;
      uVal_38 = 0;
    }
    else {
      uVal_38 = _local_108 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_38) {
        uVal_31 = uVal_38;
      }
      fStack_180 = fVal_69;
      uStack_17c = uVal_76;
      if (uVal_38 < 0xfff) {
        uVal_38 = func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_31 + 0x28);
        uVal_38 = lVal_32 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_38 - 8) = lVal_32;
      }
      fStack_190 = (float)uVal_38;
      uStack_18c = (uint8_t)(uVal_38 >> 0x20);
      uStack_18b = (uint16_t)(uVal_38 >> 0x28);
      uStack_189 = (uint8_t)(uVal_38 >> 0x38);
      uStack_178 = (uint32_t)uVal_31;
      uStack_174 = (uint32_t)(uVal_31 >> 0x20);
      fStack_180 = fVal_68;
      uStack_17c = uVal_77;
      func_0x1806aa960(uVal_38,fnPtr_47,uVal_43);
      *(uint8_t *)(uVal_38 + uVal_43) = 0;
LAB_1803c97b7:
      uVal_31 = (uint64_t)((uint)fVal_68 & 7);
      if (uVal_43 - 1 < 7) {
        uVal_38 = 0xcbf29ce484222325;
LAB_1803c985e:
        uVal_43 = 0;
        do {
          uVal_38 = uVal_38 * 0x100000001b3 ^ (int64_t)fnPtr_47[uVal_43];
          uVal_43 = uVal_43 + 1;
        } while (uVal_31 != uVal_43);
      }
      else {
        uVal_43 = uVal_43 & 0x7ffffffffffffff8;
        uVal_38 = 0xcbf29ce484222325;
        do {
          uVal_38 = (((((((uVal_38 * 0x100000001b3 ^ (int64_t)*fnPtr_47) * 0x100000001b3 ^
                        (int64_t)fnPtr_47[1]) * 0x100000001b3 ^ (int64_t)fnPtr_47[2]) *
                       0x100000001b3 ^ (int64_t)fnPtr_47[3]) * 0x100000001b3 ^ (int64_t)fnPtr_47[4])
                     * 0x100000001b3 ^ (int64_t)fnPtr_47[5]) * 0x100000001b3 ^ (int64_t)fnPtr_47[6])
                   * 0x100000001b3 ^ (int64_t)fnPtr_47[7];
          fnPtr_47 = fnPtr_47 + 8;
          uVal_43 = uVal_43 - 8;
        } while (uVal_43 != 0);
        if (uVal_31 != 0) goto LAB_1803c985e;
      }
      uVal_43 = ((uint64_t)local_198._0_1_ ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_38;
    }
    local_170 = (uint32_t)uVal_38;
    uStack_16c = (uint32_t)(uVal_38 >> 0x20);
    uStack_168 = (uint8_t)uVal_43;
    uStack_167 = (uint32_t)(uVal_43 >> 8);
    uStack_163._0_3_ = (undefined3)(uVal_43 >> 0x28);
    ch_27 = func_0x1801011a0(local_1c8,&local_198);
    if (ch_27 == '\0') {
      func_0x1800d4ec0(local_118,PTR_PNG_18083a040,DAT_18083a048);
    }
    uVal_43 = CONCAT44(uStack_174,uStack_178);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,fStack_190)));
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    local_198 = (float)_DAT_1806cb9cd;
    fStack_194 = (float)((uint64_t)_DAT_1806cb9cd >> 0x20);
    fStack_190 = (float)_UNK_1806cb9d5;
    uStack_18c = (uint8_t)((uint64_t)_UNK_1806cb9d5 >> 0x20);
    uStack_18b = (uint16_t)((uint64_t)_UNK_1806cb9d5 >> 0x28);
    uStack_189 = 0xcf;
    uStack_188 = 0xf6;
    uStack_187 = 0x33;
    uStack_186 = 0x85;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1299c) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x1299c) = 1;
      func_0x18007cb80(lVal_32 + 0x12985,&local_198);
      func_0x180673140(&LAB_1804311a0);
    }
    fnPtr_47 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12985)
    ;
    func_0x180441480(fnPtr_47);
    _local_108 = (uint8_t  [16])0x0;
    _local_118 = (uint8_t  [16])0x0;
    sz_30 = strlen(fnPtr_47);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce442;
    uVal_43 = 0xf;
    fnPtr_48 = local_118;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        fnPtr_48 = (char *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        fnPtr_48 = (char *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_48 + -8) = lVal_32;
      }
      local_118 = (uint8_t  [8])fnPtr_48;
    }
    uStack_100 = uVal_43;
    _local_108 = sz_30;
    func_0x1806aa960(fnPtr_48,fnPtr_47,sz_30);
    fnPtr_48[sz_30] = '\0';
    uVal_43 = _local_108;
    fnPtr_47 = local_118;
    if (0xf < uStack_100) {
      fnPtr_47 = (char *)local_118;
    }
    local_198 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    fVal_69 = fStack_180;
    uStack_17c = 0;
    uVal_76 = uStack_17c;
    uStack_178 = 0;
    uStack_174 = 0;
    if ((int64_t)_local_108 < 0) goto LAB_1803ce448;
    fStack_180 = SUB164(_local_108,0);
    fVal_68 = fStack_180;
    uStack_17c = SUB164(_local_108,4);
    uVal_77 = uStack_17c;
    if (_local_108 < 0x10) {
      uStack_178 = 0xf;
      uStack_174 = 0;
      func_0x1806aa960(&fStack_190,fnPtr_47,_local_108);
      *(uint8_t *)((int64_t)&fStack_190 + uVal_43) = 0;
      if (uVal_43 != 0) goto LAB_1803c9b2c;
      uVal_43 = 0xaf63bd4c8601b7df;
      uVal_38 = 0;
    }
    else {
      uVal_38 = _local_108 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_38) {
        uVal_31 = uVal_38;
      }
      fStack_180 = fVal_69;
      uStack_17c = uVal_76;
      if (uVal_38 < 0xfff) {
        uVal_38 = func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_31 + 0x28);
        uVal_38 = lVal_32 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_38 - 8) = lVal_32;
      }
      fStack_190 = (float)uVal_38;
      uStack_18c = (uint8_t)(uVal_38 >> 0x20);
      uStack_18b = (uint16_t)(uVal_38 >> 0x28);
      uStack_189 = (uint8_t)(uVal_38 >> 0x38);
      uStack_178 = (uint32_t)uVal_31;
      uStack_174 = (uint32_t)(uVal_31 >> 0x20);
      fStack_180 = fVal_68;
      uStack_17c = uVal_77;
      func_0x1806aa960(uVal_38,fnPtr_47,uVal_43);
      *(uint8_t *)(uVal_38 + uVal_43) = 0;
LAB_1803c9b2c:
      uVal_31 = (uint64_t)((uint)fVal_68 & 7);
      if (uVal_43 - 1 < 7) {
        uVal_38 = 0xcbf29ce484222325;
LAB_1803c9bde:
        uVal_43 = 0;
        do {
          uVal_38 = uVal_38 * 0x100000001b3 ^ (int64_t)fnPtr_47[uVal_43];
          uVal_43 = uVal_43 + 1;
        } while (uVal_31 != uVal_43);
      }
      else {
        uVal_43 = uVal_43 & 0x7ffffffffffffff8;
        uVal_38 = 0xcbf29ce484222325;
        do {
          uVal_38 = (((((((uVal_38 * 0x100000001b3 ^ (int64_t)*fnPtr_47) * 0x100000001b3 ^
                        (int64_t)fnPtr_47[1]) * 0x100000001b3 ^ (int64_t)fnPtr_47[2]) *
                       0x100000001b3 ^ (int64_t)fnPtr_47[3]) * 0x100000001b3 ^ (int64_t)fnPtr_47[4])
                     * 0x100000001b3 ^ (int64_t)fnPtr_47[5]) * 0x100000001b3 ^ (int64_t)fnPtr_47[6])
                   * 0x100000001b3 ^ (int64_t)fnPtr_47[7];
          fnPtr_47 = fnPtr_47 + 8;
          uVal_43 = uVal_43 - 8;
        } while (uVal_43 != 0);
        if (uVal_31 != 0) goto LAB_1803c9bde;
      }
      uVal_43 = ((uint64_t)local_198._0_1_ ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_38;
    }
    local_170 = (uint32_t)uVal_38;
    uStack_16c = (uint32_t)(uVal_38 >> 0x20);
    uStack_168 = (uint8_t)uVal_43;
    uStack_167 = (uint32_t)(uVal_43 >> 8);
    uStack_163._0_3_ = (undefined3)(uVal_43 >> 0x28);
    ch_27 = func_0x1801011a0(local_1c8,&local_198);
    if (ch_27 == '\0') {
      func_0x1800d4ec0(local_118,PTR_PNG_18083a080,DAT_18083a088);
    }
    uVal_43 = CONCAT44(uStack_174,uStack_178);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,fStack_190)));
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    local_198 = (float)_DAT_1806cb9e0;
    fStack_194 = (float)((uint64_t)_DAT_1806cb9e0 >> 0x20);
    fStack_190 = (float)_UNK_1806cb9e8;
    uStack_18c = (uint8_t)((uint64_t)_UNK_1806cb9e8 >> 0x20);
    uStack_18b = 0x16e9;
    uStack_189 = 2;
    uStack_188 = 0x13;
    uStack_187 = 0xf7;
    uStack_186 = 0x8a;
    uStack_185 = 0x23;
    uStack_184 = 0x65;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x129b4) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x129b4) = 1;
      func_0x18007cd50(lVal_32 + 0x1299d,&local_198);
      func_0x180673140(&LAB_1804311d0);
    }
    fnPtr_47 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1299d)
    ;
    func_0x1804414c0(fnPtr_47);
    _local_108 = (uint8_t  [16])0x0;
    _local_118 = (uint8_t  [16])0x0;
    sz_30 = strlen(fnPtr_47);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce44e;
    uVal_43 = 0xf;
    fnPtr_48 = local_118;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        fnPtr_48 = (char *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        fnPtr_48 = (char *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_48 + -8) = lVal_32;
      }
      local_118 = (uint8_t  [8])fnPtr_48;
    }
    uStack_100 = uVal_43;
    _local_108 = sz_30;
    func_0x1806aa960(fnPtr_48,fnPtr_47,sz_30);
    fnPtr_48[sz_30] = '\0';
    uVal_43 = _local_108;
    fnPtr_47 = local_118;
    if (0xf < uStack_100) {
      fnPtr_47 = (char *)local_118;
    }
    local_198 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    fVal_69 = fStack_180;
    uStack_17c = 0;
    uVal_76 = uStack_17c;
    uStack_178 = 0;
    uStack_174 = 0;
    if ((int64_t)_local_108 < 0) goto LAB_1803ce454;
    fStack_180 = SUB164(_local_108,0);
    fVal_68 = fStack_180;
    uStack_17c = SUB164(_local_108,4);
    uVal_77 = uStack_17c;
    if (_local_108 < 0x10) {
      uStack_178 = 0xf;
      uStack_174 = 0;
      func_0x1806aa960(&fStack_190,fnPtr_47,_local_108);
      *(uint8_t *)((int64_t)&fStack_190 + uVal_43) = 0;
      if (uVal_43 != 0) goto LAB_1803c9eb3;
      uVal_43 = 0xaf63bd4c8601b7df;
      uVal_38 = 0;
    }
    else {
      uVal_38 = _local_108 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_38) {
        uVal_31 = uVal_38;
      }
      fStack_180 = fVal_69;
      uStack_17c = uVal_76;
      if (uVal_38 < 0xfff) {
        uVal_38 = func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_31 + 0x28);
        uVal_38 = lVal_32 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_38 - 8) = lVal_32;
      }
      fStack_190 = (float)uVal_38;
      uStack_18c = (uint8_t)(uVal_38 >> 0x20);
      uStack_18b = (uint16_t)(uVal_38 >> 0x28);
      uStack_189 = (uint8_t)(uVal_38 >> 0x38);
      uStack_178 = (uint32_t)uVal_31;
      uStack_174 = (uint32_t)(uVal_31 >> 0x20);
      fStack_180 = fVal_68;
      uStack_17c = uVal_77;
      func_0x1806aa960(uVal_38,fnPtr_47,uVal_43);
      *(uint8_t *)(uVal_38 + uVal_43) = 0;
LAB_1803c9eb3:
      uVal_31 = (uint64_t)((uint)fVal_68 & 7);
      if (uVal_43 - 1 < 7) {
        uVal_38 = 0xcbf29ce484222325;
LAB_1803c9f5e:
        uVal_43 = 0;
        do {
          uVal_38 = uVal_38 * 0x100000001b3 ^ (int64_t)fnPtr_47[uVal_43];
          uVal_43 = uVal_43 + 1;
        } while (uVal_31 != uVal_43);
      }
      else {
        uVal_43 = uVal_43 & 0x7ffffffffffffff8;
        uVal_38 = 0xcbf29ce484222325;
        do {
          uVal_38 = (((((((uVal_38 * 0x100000001b3 ^ (int64_t)*fnPtr_47) * 0x100000001b3 ^
                        (int64_t)fnPtr_47[1]) * 0x100000001b3 ^ (int64_t)fnPtr_47[2]) *
                       0x100000001b3 ^ (int64_t)fnPtr_47[3]) * 0x100000001b3 ^ (int64_t)fnPtr_47[4])
                     * 0x100000001b3 ^ (int64_t)fnPtr_47[5]) * 0x100000001b3 ^ (int64_t)fnPtr_47[6])
                   * 0x100000001b3 ^ (int64_t)fnPtr_47[7];
          fnPtr_47 = fnPtr_47 + 8;
          uVal_43 = uVal_43 - 8;
        } while (uVal_43 != 0);
        if (uVal_31 != 0) goto LAB_1803c9f5e;
      }
      uVal_43 = ((uint64_t)local_198._0_1_ ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_38;
    }
    local_170 = (uint32_t)uVal_38;
    uStack_16c = (uint32_t)(uVal_38 >> 0x20);
    uStack_168 = (uint8_t)uVal_43;
    uStack_167 = (uint32_t)(uVal_43 >> 8);
    uStack_163._0_3_ = (undefined3)(uVal_43 >> 0x28);
    ch_27 = func_0x1801011a0(local_1c8,&local_198);
    if (ch_27 == '\0') {
      func_0x1800d4ec0(local_118,PTR_PNG_18083a0a0,DAT_18083a0a8);
    }
    uVal_43 = CONCAT44(uStack_174,uStack_178);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,fStack_190)));
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x129d0) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x129d0) = 1;
      uVal_33 = _UNK_1806c8c38;
      *(uint64_t *)(lVal_32 + 0x129c0) = _DAT_1806c8c30;
      *(uint64_t *)(lVal_32 + 0x129c8) = uVal_33;
      func_0x180673140(&LAB_180431200);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_5 = (uint8_t (*)[16])(lVal_32 + 0x129c0);
    if (*(char *)(lVal_32 + 0x129cf) == '\x01') {
      uVal_76 = *(uint32_t *)(lVal_32 + 0x129c8);
      auArr_50 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_76 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_76 >> 0x10),uVal_76)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_32 + 0x129cd) >> 8)),
                                                 (char)((uint)uVal_76 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_32 + 0x129cd),
                                                 (char)uVal_76))),_DAT_1806ae110);
      auArr_50._8_8_ =
           auArr_50._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_32 + 0x129cc) << 0x20;
      auArr_50 = pblendw(auArr_50,*pArr16_5,0xf);
      *pArr16_5 = auArr_50 ^ _DAT_1806c8c40;
    }
    _local_108 = (uint8_t  [16])0x0;
    _local_118 = (uint8_t  [16])0x0;
    sz_30 = strlen((char *)pArr16_5);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce45a;
    uVal_43 = 0xf;
    fnPtr_47 = local_118;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        fnPtr_47 = (char *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        fnPtr_47 = (char *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_47 + -8) = lVal_32;
      }
      local_118 = (uint8_t  [8])fnPtr_47;
    }
    uStack_100 = uVal_43;
    _local_108 = sz_30;
    func_0x1806aa960(fnPtr_47,pArr16_5,sz_30);
    fnPtr_47[sz_30] = '\0';
    uVal_43 = _local_108;
    fnPtr_47 = local_118;
    if (0xf < uStack_100) {
      fnPtr_47 = (char *)local_118;
    }
    local_198 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    fVal_69 = fStack_180;
    uStack_17c = 0;
    uVal_76 = uStack_17c;
    uStack_178 = 0;
    uStack_174 = 0;
    if ((int64_t)_local_108 < 0) goto LAB_1803ce460;
    fStack_180 = SUB164(_local_108,0);
    fVal_68 = fStack_180;
    uStack_17c = SUB164(_local_108,4);
    uVal_77 = uStack_17c;
    if (_local_108 < 0x10) {
      uStack_178 = 0xf;
      uStack_174 = 0;
      func_0x1806aa960(&fStack_190,fnPtr_47,_local_108);
      *(uint8_t *)((int64_t)&fStack_190 + uVal_43) = 0;
      if (uVal_43 != 0) goto LAB_1803ca258;
      uVal_43 = 0xaf63bd4c8601b7df;
      uVal_38 = 0;
    }
    else {
      uVal_38 = _local_108 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_38) {
        uVal_31 = uVal_38;
      }
      fStack_180 = fVal_69;
      uStack_17c = uVal_76;
      if (uVal_38 < 0xfff) {
        uVal_38 = func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_31 + 0x28);
        uVal_38 = lVal_32 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_38 - 8) = lVal_32;
      }
      fStack_190 = (float)uVal_38;
      uStack_18c = (uint8_t)(uVal_38 >> 0x20);
      uStack_18b = (uint16_t)(uVal_38 >> 0x28);
      uStack_189 = (uint8_t)(uVal_38 >> 0x38);
      uStack_178 = (uint32_t)uVal_31;
      uStack_174 = (uint32_t)(uVal_31 >> 0x20);
      fStack_180 = fVal_68;
      uStack_17c = uVal_77;
      func_0x1806aa960(uVal_38,fnPtr_47,uVal_43);
      *(uint8_t *)(uVal_38 + uVal_43) = 0;
LAB_1803ca258:
      uVal_31 = (uint64_t)((uint)fVal_68 & 7);
      if (uVal_43 - 1 < 7) {
        uVal_38 = 0xcbf29ce484222325;
LAB_1803ca2fe:
        uVal_43 = 0;
        do {
          uVal_38 = uVal_38 * 0x100000001b3 ^ (int64_t)fnPtr_47[uVal_43];
          uVal_43 = uVal_43 + 1;
        } while (uVal_31 != uVal_43);
      }
      else {
        uVal_43 = uVal_43 & 0x7ffffffffffffff8;
        uVal_38 = 0xcbf29ce484222325;
        do {
          uVal_38 = (((((((uVal_38 * 0x100000001b3 ^ (int64_t)*fnPtr_47) * 0x100000001b3 ^
                        (int64_t)fnPtr_47[1]) * 0x100000001b3 ^ (int64_t)fnPtr_47[2]) *
                       0x100000001b3 ^ (int64_t)fnPtr_47[3]) * 0x100000001b3 ^ (int64_t)fnPtr_47[4])
                     * 0x100000001b3 ^ (int64_t)fnPtr_47[5]) * 0x100000001b3 ^ (int64_t)fnPtr_47[6])
                   * 0x100000001b3 ^ (int64_t)fnPtr_47[7];
          fnPtr_47 = fnPtr_47 + 8;
          uVal_43 = uVal_43 - 8;
        } while (uVal_43 != 0);
        if (uVal_31 != 0) goto LAB_1803ca2fe;
      }
      uVal_43 = ((uint64_t)local_198._0_1_ ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_38;
    }
    local_170 = (uint32_t)uVal_38;
    uStack_16c = (uint32_t)(uVal_38 >> 0x20);
    uStack_168 = (uint8_t)uVal_43;
    uStack_167 = (uint32_t)(uVal_43 >> 8);
    uStack_163._0_3_ = (undefined3)(uVal_43 >> 0x28);
    ch_27 = func_0x1801011a0(local_1c8,&local_198);
    if (ch_27 == '\0') {
      func_0x1800d4ec0(local_118,PTR_PNG_18083a060,DAT_18083a068);
    }
    uVal_43 = CONCAT44(uStack_174,uStack_178);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,fStack_190)));
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    local_198 = _DAT_1806cb9f5;
    fStack_194 = (float)_UNK_1806cb9f9;
    fStack_190 = _UNK_1806cb9fd;
    uStack_18c = (uint8_t)_UNK_1806cba01;
    uStack_18b = (uint16_t)((uint)_UNK_1806cba01 >> 8);
    uStack_189 = 0x4e;
    uStack_188 = 0xa8;
    uStack_187 = 8;
    uStack_186 = 0x73;
    uStack_185 = 0xca;
    uStack_184 = 0x5e;
    uStack_183 = 0x1fe8;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x129ec) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x129ec) = 1;
      func_0x18007d3c0(lVal_32 + 0x129d1,&local_198);
      func_0x180673140(&LAB_180431230);
    }
    fnPtr_47 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x129d1)
    ;
    func_0x1804414f0(fnPtr_47);
    _local_118 = ZEXT816(0);
    _local_108 = _local_118;
    sz_30 = strlen(fnPtr_47);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce466;
    uVal_43 = 0xf;
    fnPtr_48 = local_118;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        fnPtr_48 = (char *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        fnPtr_48 = (char *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_48 + -8) = lVal_32;
      }
      local_118 = (uint8_t  [8])fnPtr_48;
    }
    uStack_100 = uVal_43;
    _local_108 = sz_30;
    func_0x1806aa960(fnPtr_48,fnPtr_47,sz_30);
    fnPtr_48[sz_30] = '\0';
    uVal_43 = _local_108;
    fnPtr_47 = local_118;
    if (0xf < uStack_100) {
      fnPtr_47 = (char *)local_118;
    }
    local_198 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    uVal_76 = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    fStack_180 = fStack_190;
    uStack_17c = uVal_76;
    if ((int64_t)_local_108 < 0) goto LAB_1803ce46c;
    fStack_180 = SUB164(_local_108,0);
    uVal_61 = (uint)fStack_180;
    uStack_17c = SUB164(_local_108,4);
    uVal_77 = uStack_17c;
    if (_local_108 < 0x10) {
      uStack_178 = 0xf;
      uStack_174 = 0;
      func_0x1806aa960(&fStack_190,fnPtr_47,_local_108);
      *(uint8_t *)((int64_t)&fStack_190 + uVal_43) = 0;
      if (uVal_43 != 0) goto LAB_1803ca5cb;
      uVal_43 = 0xaf63bd4c8601b7df;
      uVal_38 = 0;
    }
    else {
      uVal_38 = _local_108 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_38) {
        uVal_31 = uVal_38;
      }
      if (uVal_38 < 0xfff) {
        fStack_180 = fStack_190;
        uStack_17c = uVal_76;
        uVal_38 = func_0x180672de0(uVal_31 + 1);
      }
      else {
        fStack_180 = fStack_190;
        uStack_17c = uVal_76;
        lVal_32 = func_0x180672de0(uVal_31 + 0x28);
        uVal_38 = lVal_32 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_38 - 8) = lVal_32;
      }
      fStack_190 = (float)uVal_38;
      uStack_18c = (uint8_t)(uVal_38 >> 0x20);
      uStack_18b = (uint16_t)(uVal_38 >> 0x28);
      uStack_189 = (uint8_t)(uVal_38 >> 0x38);
      uStack_178 = (uint32_t)uVal_31;
      uStack_174 = (uint32_t)(uVal_31 >> 0x20);
      fStack_180 = (float)uVal_61;
      uStack_17c = uVal_77;
      func_0x1806aa960(uVal_38,fnPtr_47,uVal_43);
      *(uint8_t *)(uVal_38 + uVal_43) = 0;
LAB_1803ca5cb:
      uVal_31 = (uint64_t)(uVal_61 & 7);
      if (uVal_43 - 1 < 7) {
        uVal_38 = 0xcbf29ce484222325;
LAB_1803ca66e:
        uVal_43 = 0;
        do {
          uVal_38 = uVal_38 * 0x100000001b3 ^ (int64_t)fnPtr_47[uVal_43];
          uVal_43 = uVal_43 + 1;
        } while (uVal_31 != uVal_43);
      }
      else {
        uVal_43 = uVal_43 & 0x7ffffffffffffff8;
        uVal_38 = 0xcbf29ce484222325;
        do {
          uVal_38 = (((((((uVal_38 * 0x100000001b3 ^ (int64_t)*fnPtr_47) * 0x100000001b3 ^
                        (int64_t)fnPtr_47[1]) * 0x100000001b3 ^ (int64_t)fnPtr_47[2]) *
                       0x100000001b3 ^ (int64_t)fnPtr_47[3]) * 0x100000001b3 ^ (int64_t)fnPtr_47[4])
                     * 0x100000001b3 ^ (int64_t)fnPtr_47[5]) * 0x100000001b3 ^ (int64_t)fnPtr_47[6])
                   * 0x100000001b3 ^ (int64_t)fnPtr_47[7];
          fnPtr_47 = fnPtr_47 + 8;
          uVal_43 = uVal_43 - 8;
        } while (uVal_43 != 0);
        if (uVal_31 != 0) goto LAB_1803ca66e;
      }
      uVal_43 = ((uint64_t)local_198._0_1_ ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_38;
    }
    local_170 = (uint32_t)uVal_38;
    uStack_16c = (uint32_t)(uVal_38 >> 0x20);
    uStack_168 = (uint8_t)uVal_43;
    uStack_167 = (uint32_t)(uVal_43 >> 8);
    uStack_163._0_3_ = (undefined3)(uVal_43 >> 0x28);
    ch_27 = func_0x1801011a0(local_1c8,&local_198);
    if (ch_27 == '\0') {
      func_0x1800d4ec0(local_118,PTR_PNG_18083a310,DAT_18083a318);
    }
    uVal_43 = CONCAT44(uStack_174,uStack_178);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,fStack_190)));
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    ch_27 = func_0x1800ff0e0(&DAT_1808402f8);
    if (ch_27 == '\0') {
      uVal_33 = func_0x1800cf950();
      func_0x180107830(uVal_33,1,0,0);
      lVal_32 = (uint64_t)uVal_58 << 0x20;
      uVal_43 = (uint64_t)uVal_56 << 0x20;
      func_0x180107e20(uVal_33,0,0,0,uVal_43,lVal_32);
      uVal_34 = CONCAT44((int)((uint64_t)lVal_32 >> 0x20),0x3f800000);
      uVal_43 = uVal_43 & 0xffffffff00000000;
      func_0x180107e20(uVal_33,0,DAT_1806b26b4,0,uVal_43,uVal_34);
      uVal_31 = CONCAT44((int)((uint64_t)uVal_34 >> 0x20),0x3f800000);
      uVal_34 = CONCAT44((int)(uVal_43 >> 0x20),0x3f800000);
      func_0x180107e20(uVal_33,DAT_1806b26b4,DAT_1806b26b4,0,uVal_34,uVal_31);
      uVal_31 = uVal_31 & 0xffffffff00000000;
      uVal_34 = CONCAT44((int)((uint64_t)uVal_34 >> 0x20),0x3f800000);
      func_0x180107e20(uVal_33,DAT_1806b26b4,0,0,uVal_34,uVal_31);
      uVal_58 = (uint)(uVal_31 >> 0x20);
      uVal_56 = (uint)((uint64_t)uVal_34 >> 0x20);
      func_0x180108350(uVal_33,&DAT_1808402f8);
    }
    pLong_3 = (int64_t *)CONCAT44(fStack_1bc,fStack_1c0);
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
    fVal_68 = DAT_1806b26b4;
    fVal_69 = DAT_1806aeae4;
    if ((byte)(DAT_1808405fc - 4U) < 0xfe) {
      DAT_1808405a0 = '\0';
LAB_1803ca8b8:
      auArr_64._8_8_ = 0;
      auArr_64._0_8_ = *(uint64_t *)(DAT_180840a58 + 0x580);
      auArr_74._8_8_ = 0;
      auArr_74._0_8_ = *(uint64_t *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x48);
      auArr_50 = divps(auArr_64,auArr_74);
      uVal_33 = *(uint64_t *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x50);
      _DAT_1808402c8 =
           CONCAT44((float)((uint64_t)uVal_33 >> 0x20) * auArr_50._4_4_,(float)uVal_33 * auArr_50._0_4_
                   );
    }
    else {
      _DAT_1808402c8 = 0;
      if (DAT_1808405a0 == '\0') goto LAB_1803ca8b8;
    }
    DAT_18084058c =
         *(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x50) * *(float *)(DAT_180840630 + 0x138)
    ;
    DAT_180840558 =
         *(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x54) * *(float *)(DAT_180840630 + 0x13c)
    ;
    DAT_180840588 =
         (*(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x50) - DAT_18084058c) * DAT_1806aeae4;
    local_198 = -1.600597e+31;
    fStack_194 = 2.32002e-14;
    DAT_180840554 =
         (*(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x54) - DAT_180840558) * DAT_1806aeae4;
    DAT_1808402b8 = *(float *)(DAT_180840630 + 0x144) * DAT_18084058c + DAT_180840588;
    DAT_1808402bc = *(float *)(DAT_180840630 + 0x140) * DAT_180840558 + DAT_180840554;
    DAT_1808402c0 = (DAT_180840588 + DAT_18084058c) - DAT_1808402b8;
    DAT_1808402c4 = (DAT_180840554 + DAT_180840558) - DAT_1808402bc;
    func_0x1800cf900();
    lVal_32 = DAT_180840630;
    fVal_70 = *(float *)(DAT_180840630 + 0x1b4);
    local_228 = *(uint32_t *)(DAT_180840630 + 0x1a8);
    uStack_224 = *(uint32_t *)(DAT_180840630 + 0x1ac);
    uStack_220 = *(uint32_t *)(DAT_180840630 + 0x1b0);
    local_210 = *(uint64_t *)(DAT_180840630 + 0x198);
    local_208 = *(uint32_t *)(DAT_180840630 + 0x1a0);
    fVal_66 = (float)DAT_180840c80;
    fStack_21c = *(float *)(DAT_180840630 + 0x10c);
    fVal_71 = *(float *)(DAT_180840630 + 0x1a4);
    fVal_67 = (fVal_68 / fVal_66) * fVal_69;
    if (fVal_70 <= fStack_21c) {
      local_204 = *(float *)(DAT_180840630 + 0x108);
      if (local_204 < fVal_71) goto LAB_1803cac21;
LAB_1803cabec:
      fVal_67 = *(float *)(lVal_32 + 0x110);
      if (fVal_67 < fVal_68) goto LAB_1803cabf9;
LAB_1803cac3a:
      if (fStack_21c <= fVal_70) goto LAB_1803cac3f;
LAB_1803cac48:
      *(float *)(lVal_32 + 0x10c) = fVal_70;
      fStack_21c = fVal_70;
    }
    else {
      fStack_21c = fStack_21c + fVal_67;
      *(float *)(DAT_180840630 + 0x10c) = fStack_21c;
      local_204 = *(float *)(lVal_32 + 0x108);
      if (fVal_71 <= local_204) goto LAB_1803cabec;
LAB_1803cac21:
      local_204 = local_204 + fVal_67;
      *(float *)(lVal_32 + 0x108) = local_204;
      fVal_67 = *(float *)(lVal_32 + 0x110);
      if (fVal_68 <= fVal_67) goto LAB_1803cac3a;
LAB_1803cabf9:
      fVal_67 = fVal_67 + (fVal_68 / fVal_66) * DAT_1806beca0;
      *(float *)(lVal_32 + 0x110) = fVal_67;
      if (fVal_70 < fStack_21c) goto LAB_1803cac48;
LAB_1803cac3f:
      if (*(char *)(lVal_32 + 0x2b3) == '\0') goto LAB_1803cac48;
    }
    if ((fVal_71 < local_204) || (*(char *)(lVal_32 + 0x2b3) == '\0')) {
      *(float *)(lVal_32 + 0x108) = fVal_71;
      local_204 = fVal_71;
    }
    if ((DAT_1806b26b4 < fVal_67) || (*(char *)(lVal_32 + 0x2b3) == '\0')) {
      *(uint32_t *)(lVal_32 + 0x110) = 0x3f800000;
    }
    uVal_33 = func_0x1800cf950();
    local_198 = -1.600597e+31;
    fStack_194 = 2.32002e-14;
    lVal_32 = *(int64_t *)(DAT_180840a58 + 0x648);
    func_0x180107830(uVal_33,0x603,0,0);
    func_0x180108220(uVal_33,&local_228);
    func_0x180107cc0(uVal_33);
    func_0x180107cc0(uVal_33);
    func_0x180108220(uVal_33,&local_210);
    func_0x180107cc0(uVal_33,*(float *)(lVal_32 + 0x50) * fVal_69,*(float *)(lVal_32 + 0x54) * fVal_69,0);
    func_0x180108220(uVal_33,&local_228);
    func_0x180107cc0(uVal_33);
    func_0x180107cc0(uVal_33);
    func_0x180108220(uVal_33,&local_210);
    func_0x180107cc0(uVal_33,*(float *)(lVal_32 + 0x50) * fVal_69,*(float *)(lVal_32 + 0x54) * fVal_69,0);
    func_0x180108220(uVal_33,&local_228);
    func_0x180107cc0(uVal_33);
    func_0x180107cc0(uVal_33);
    func_0x180108220(uVal_33,&local_210);
    func_0x180107cc0(uVal_33,*(float *)(lVal_32 + 0x50) * fVal_69,*(float *)(lVal_32 + 0x54) * fVal_69,0);
    func_0x180108220(uVal_33,&local_228);
    func_0x180107cc0(uVal_33);
    func_0x180107cc0(uVal_33);
    func_0x180108220(uVal_33,&local_210);
    local_1a0 = uVal_33;
    func_0x180107cc0(uVal_33,*(float *)(lVal_32 + 0x50) * fVal_69,*(float *)(lVal_32 + 0x54) * fVal_69,0);
    uVal_33 = func_0x1800cf970();
    uVal_34 = func_0x1800cf950();
    uVal_35 = func_0x1800cf960();
    func_0x18011b260(uVal_35,uVal_34,uVal_33);
    lVal_36 = func_0x180129cf0(DAT_180840a58);
    local_200 = lVal_36 + 0x40;
    *(uint8_t *)(lVal_36 + 0x78) = 1;
    lVal_39 = *(int64_t *)(lVal_36 + 0x60);
    uVal_31 = *(uint64_t *)(lVal_36 + 0x58);
    lVal_40 = *(int64_t *)(lVal_36 + 0x48);
    uVal_43 = *(uint64_t *)(lVal_36 + 0x50) - 1;
    pU64_6 = *(uint32_t **)(lVal_40 + (lVal_39 + -1 + uVal_31 & uVal_43) * 8);
    if (*(uint64_t *)(lVal_36 + 0x50) <= lVal_39 + 1U) {
      func_0x1800f0d80(lVal_36 + 0x40,1);
      lVal_40 = *(int64_t *)(lVal_36 + 0x48);
      lVal_39 = *(int64_t *)(lVal_36 + 0x60);
      uVal_31 = *(uint64_t *)(lVal_36 + 0x58);
      uVal_43 = *(int64_t *)(lVal_36 + 0x50) - 1;
    }
    *(uint64_t *)(lVal_36 + 0x58) = uVal_31 & uVal_43;
    uVal_31 = (uVal_31 & uVal_43) + lVal_39;
    uVal_43 = uVal_43 & uVal_31;
    pU64_41 = *(uint32_t **)(lVal_40 + uVal_43 * 8);
    if (pU64_41 == (uint32_t *)0x0) {
      uVal_33 = func_0x180672de0(0x40);
      *(uint64_t *)(*(int64_t *)(lVal_36 + 0x48) + uVal_43 * 8) = uVal_33;
      pU64_41 = *(uint32_t **)
                 (*(int64_t *)(lVal_36 + 0x48) + (*(int64_t *)(lVal_36 + 0x50) - 1U & uVal_31) * 8);
    }
    uVal_76 = *pU64_6;
    uVal_77 = pU64_6[1];
    uVal_12 = pU64_6[2];
    uVal_13 = pU64_6[3];
    uVal_14 = pU64_6[4];
    uVal_15 = pU64_6[5];
    uVal_16 = pU64_6[6];
    uVal_17 = pU64_6[7];
    uVal_18 = pU64_6[8];
    uVal_19 = pU64_6[9];
    uVal_20 = pU64_6[10];
    uVal_21 = pU64_6[0xb];
    uVal_22 = pU64_6[0xd];
    uVal_23 = pU64_6[0xe];
    uVal_24 = pU64_6[0xf];
    pU64_41[0xc] = pU64_6[0xc];
    pU64_41[0xd] = uVal_22;
    pU64_41[0xe] = uVal_23;
    pU64_41[0xf] = uVal_24;
    pU64_41[8] = uVal_18;
    pU64_41[9] = uVal_19;
    pU64_41[10] = uVal_20;
    pU64_41[0xb] = uVal_21;
    pU64_41[4] = uVal_14;
    pU64_41[5] = uVal_15;
    pU64_41[6] = uVal_16;
    pU64_41[7] = uVal_17;
    *pU64_41 = uVal_76;
    pU64_41[1] = uVal_77;
    pU64_41[2] = uVal_12;
    pU64_41[3] = uVal_13;
    lVal_39 = *(int64_t *)(lVal_36 + 0x60);
    *(int64_t *)(lVal_36 + 0x60) = lVal_39 + 1;
    lVal_40 = DAT_180840630;
    pFloat_45 = *(float **)
               (*(int64_t *)(lVal_36 + 0x48) +
               (*(int64_t *)(lVal_36 + 0x50) - 1U & lVal_39 + *(int64_t *)(lVal_36 + 0x58)) * 8);
    fVal_68 = *(float *)(DAT_180840630 + 0x110);
    fVal_71 = *pFloat_45;
    fVal_66 = pFloat_45[1];
    fVal_67 = pFloat_45[2];
    fVal_62 = pFloat_45[3];
    fVal_73 = pFloat_45[4];
    *pFloat_45 = fVal_71 * fVal_68;
    pFloat_45[1] = fVal_66 * fVal_68;
    pFloat_45[2] = fVal_67 * fVal_68;
    pFloat_45[3] = fVal_62 * fVal_68;
    auArr_8._4_4_ = pFloat_45[5] * fVal_68;
    auArr_8._0_4_ = fVal_73 * fVal_68;
    auArr_8._8_4_ = pFloat_45[6] * fVal_68;
    auArr_8._12_4_ = pFloat_45[7] * fVal_68;
    *(uint8_t (*)[16])(pFloat_45 + 4) = auArr_8;
    fVal_65 = *(float *)(lVal_32 + 0x50) * fVal_69;
    fVal_70 = *(float *)(lVal_40 + 0x110);
    fVal_65 = (fVal_65 - fVal_65 * fVal_70) / fVal_70;
    fVal_69 = fVal_69 * *(float *)(lVal_32 + 0x54);
    fVal_70 = (fVal_69 - fVal_69 * fVal_70) / fVal_70;
    pFloat_45[0xc] = fVal_65 * fVal_71 * fVal_68 + fVal_70 * fVal_73 * fVal_68 + pFloat_45[8] * 0.0 +
                   pFloat_45[0xc];
    pFloat_45[0xd] = fVal_65 * fVal_66 * fVal_68 + fVal_70 * pFloat_45[5] * fVal_68 + pFloat_45[9] * 0.0 +
                   pFloat_45[0xd];
    pFloat_45[0xe] = fVal_65 * fVal_67 * fVal_68 + fVal_70 * pFloat_45[6] * fVal_68 + pFloat_45[10] * 0.0 +
                   pFloat_45[0xe];
    pFloat_45[0xf] = fVal_65 * fVal_62 * fVal_68 + fVal_70 * pFloat_45[7] * fVal_68 + pFloat_45[0xb] * 0.0 +
                   pFloat_45[0xf];
    local_1e0 = lVal_36;
    if (*(char *)(lVal_40 + 0x83) == '\x01') {
      if (*(char *)(lVal_40 + 0x84) == '\x01') {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12a00) == '\0') {
          lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_32 + 0x12a00) = 1;
          uVal_12 = _UNK_1806c8c9c;
          uVal_77 = _UNK_1806c8c98;
          uVal_76 = _UNK_1806c8c94;
          *(uint32_t *)(lVal_32 + 0x129f0) = _DAT_1806c8c90;
          *(uint32_t *)(lVal_32 + 0x129f4) = uVal_76;
          *(uint32_t *)(lVal_32 + 0x129f8) = uVal_77;
          *(uint32_t *)(lVal_32 + 0x129fc) = uVal_12;
          func_0x180673140(&LAB_180431260);
        }
        lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pArr16_5 = (uint8_t (*)[16])(lVal_32 + 0x129f0);
        if (*(char *)(lVal_32 + 0x129ff) == '\x01') {
          uVal_76 = *(uint32_t *)(lVal_32 + 0x129f8);
          auArr_50 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)
                                                  ((uint)uVal_76 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_76 >> 0x10),uVal_76)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_32 + 0x129fd) >> 8)),
                                                  (char)((uint)uVal_76 >> 8)),
                                            CONCAT11((char)*(uint16_t *)(lVal_32 + 0x129fd),
                                                     (char)uVal_76))),_DAT_1806ae110);
          auArr_51._0_8_ = auArr_50._0_8_;
          auArr_51._8_8_ =
               auArr_50._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_32 + 0x129fc) << 0x20;
          auArr_50 = pblendw(auArr_51,*pArr16_5,0xf);
          *pArr16_5 = auArr_50 ^ _DAT_1806c8ca0;
        }
        _local_118 = ZEXT816(0);
        _local_108 = _local_118;
        sz_30 = strlen((char *)pArr16_5);
        if (-1 < (int64_t)sz_30) {
          if (sz_30 < 0x10) {
            pU64_49 = local_118;
            uVal_43 = 0xf;
          }
          else {
            uVal_31 = sz_30 | 0xf;
            uVal_43 = 0x16;
            if (0x16 < uVal_31) {
              uVal_43 = uVal_31;
            }
            if (uVal_31 < 0xfff) {
              pU64_49 = (uint8_t *)func_0x180672de0(uVal_43 + 1);
            }
            else {
              lVal_32 = func_0x180672de0(uVal_43 + 0x28);
              pU64_49 = (uint8_t *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_49 + -8) = lVal_32;
            }
            local_118 = (uint8_t  [8])pU64_49;
          }
          uStack_100 = uVal_43;
          _local_108 = sz_30;
          func_0x1806aa960(pU64_49,pArr16_5,sz_30);
          pU64_49[sz_30] = 0;
          func_0x1800cfa40(&local_198,local_118);
          ch_27 = func_0x1800be560(&local_198,0);
          uVal_43 = CONCAT44(uStack_17c,fStack_180);
          if (0xf < uVal_43) {
            lVal_39 = CONCAT44(fStack_194,local_198);
            uVal_31 = uVal_43 + 1;
            lVal_32 = lVal_39;
            if (0xfff < uVal_31) {
              lVal_32 = *(int64_t *)(lVal_39 + -8);
              if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
              uVal_31 = uVal_43 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_32,uVal_31);
          }
          uStack_188 = 0;
          uStack_187 = 0;
          uStack_186 = 0;
          uStack_185 = 0;
          uStack_184 = 0;
          uStack_183 = 0;
          uStack_181 = 0;
          fStack_180 = 2.101948e-44;
          uStack_17c = 0;
          local_198 = (float)((uint)local_198 & 0xffffff00);
          if (0xf < uStack_100) {
            uVal_43 = uStack_100 + 1;
            lVal_32 = (int64_t)local_118;
            if (0xfff < uVal_43) {
              lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
              uVal_43 = uStack_100 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_32,uVal_43);
          }
          if (ch_27 == '\0') goto LAB_1803cb7b9;
          ch_27 = func_0x180077350(DAT_180840630 + 0x90);
          if (ch_27 == '\0') {
            uVal_33 = func_0x1803d2120();
            uVal_33 = func_0x1803d21a0(uVal_33);
            func_0x180001060(&local_1c8,uVal_33);
            func_0x1800cfa40(local_118,&local_1c8);
            func_0x180076360(&local_198,local_118);
            func_0x180311700(DAT_180840630 + 0x90,&local_198);
            func_0x180311940(&local_198);
            func_0x180001e70(local_118);
            func_0x180001e70(&local_1c8);
            func_0x180076840(DAT_180840630 + 0x90);
          }
          ch_27 = func_0x180077340(DAT_180840630 + 0x90);
          uVal_33 = local_1a0;
          if (ch_27 != '\0') {
            func_0x180107830(local_1a0,1,0,0);
            func_0x1801081a0(uVal_33);
            func_0x180107e20(uVal_33);
            func_0x180107e20(uVal_33);
            uVal_34 = CONCAT44(uVal_56,0x3f800000);
            func_0x180107e20(uVal_33,DAT_180840588 + DAT_18084058c,DAT_180840554 + DAT_180840558,0,
                          uVal_34,CONCAT44(uVal_58,0x3f800000));
            uVal_56 = (uint)((uint64_t)uVal_34 >> 0x20);
            func_0x180107e20(uVal_33,DAT_180840588 + DAT_18084058c);
            func_0x180076960(DAT_180840630 + 0x90,&local_198);
            func_0x18011b920(DAT_180840a50,local_118);
            pU64_37 = (uint64_t *)func_0x180101350(local_118,&local_198);
            func_0x18001deb0(local_118);
            uVal_33 = *pU64_37;
            uVal_34 = func_0x1800cf980();
            uVal_35 = func_0x1800cf960();
            func_0x18011b3c0(uVal_35,local_1a0,uVal_34,uVal_33);
            func_0x180034df0(&local_198);
          }
          goto LAB_1803cb875;
        }
      }
      else {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12a40) == '\0') {
          lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_32 + 0x12a40) = 1;
          uVal_12 = _UNK_1806c8c5c;
          uVal_77 = _UNK_1806c8c58;
          uVal_76 = _UNK_1806c8c54;
          *(uint32_t *)(lVal_32 + 0x12a30) = _DAT_1806c8c50;
          *(uint32_t *)(lVal_32 + 0x12a34) = uVal_76;
          *(uint32_t *)(lVal_32 + 0x12a38) = uVal_77;
          *(uint32_t *)(lVal_32 + 0x12a3c) = uVal_12;
          func_0x180673140(&LAB_1804312c0);
        }
        lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pArr16_5 = (uint8_t (*)[16])(lVal_32 + 0x12a30);
        if (*(char *)(lVal_32 + 0x12a3f) == '\x01') {
          uVal_76 = *(uint32_t *)(lVal_32 + 0x12a38);
          auArr_50 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)
                                                  ((uint)uVal_76 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_76 >> 0x10),uVal_76)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_32 + 0x12a3d) >> 8)),
                                                  (char)((uint)uVal_76 >> 8)),
                                            CONCAT11((char)*(uint16_t *)(lVal_32 + 0x12a3d),
                                                     (char)uVal_76))),_DAT_1806ae110);
          auArr_52._0_8_ = auArr_50._0_8_;
          auArr_52._8_8_ =
               auArr_50._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_32 + 0x12a3c) << 0x20;
          auArr_50 = pblendw(auArr_52,*pArr16_5,0xf);
          *pArr16_5 = auArr_50 ^ _DAT_1806c8c60;
        }
        _local_118 = ZEXT816(0);
        _local_108 = _local_118;
        sz_30 = strlen((char *)pArr16_5);
        if (-1 < (int64_t)sz_30) {
          if (sz_30 < 0x10) {
            pU64_49 = local_118;
            uVal_43 = 0xf;
          }
          else {
            uVal_31 = sz_30 | 0xf;
            uVal_43 = 0x16;
            if (0x16 < uVal_31) {
              uVal_43 = uVal_31;
            }
            if (uVal_31 < 0xfff) {
              pU64_49 = (uint8_t *)func_0x180672de0(uVal_43 + 1);
            }
            else {
              lVal_32 = func_0x180672de0(uVal_43 + 0x28);
              pU64_49 = (uint8_t *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_49 + -8) = lVal_32;
            }
            local_118 = (uint8_t  [8])pU64_49;
          }
          uStack_100 = uVal_43;
          _local_108 = sz_30;
          func_0x1806aa960(pU64_49,pArr16_5,sz_30);
          pU64_49[sz_30] = 0;
          pU64_49 = local_118;
          func_0x1800cfa40(&local_198,pU64_49);
          ch_27 = func_0x1800be560(&local_198,0);
          uVal_43 = CONCAT44(uStack_17c,fStack_180);
          if (0xf < uVal_43) {
            lVal_39 = CONCAT44(fStack_194,local_198);
            uVal_31 = uVal_43 + 1;
            lVal_32 = lVal_39;
            if (0xfff < uVal_31) {
              lVal_32 = *(int64_t *)(lVal_39 + -8);
              if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
              uVal_31 = uVal_43 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_32,uVal_31);
          }
          uStack_188 = 0;
          uStack_187 = 0;
          uStack_186 = 0;
          uStack_185 = 0;
          uStack_184 = 0;
          uStack_183 = 0;
          uStack_181 = 0;
          fStack_180 = 2.101948e-44;
          uStack_17c = 0;
          local_198 = (float)((uint)local_198 & 0xffffff00);
          if (0xf < uStack_100) {
            uVal_43 = uStack_100 + 1;
            lVal_32 = (int64_t)local_118;
            if (0xfff < uVal_43) {
              lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
              uVal_43 = uStack_100 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_32,uVal_43);
          }
          if (ch_27 == '\0') goto LAB_1803cb7b9;
          uVal_76 = *(uint32_t *)(DAT_180840630 + 0x88);
          local_1c8 = CONCAT44(_UNK_1806b2884,_DAT_1806b2880);
          fStack_1c0 = _UNK_1806b2888;
          fStack_1bc = _UNK_1806b288c;
          local_1d8 = DAT_1806b28f0;
          local_1f8 = 0;
          local_1f0 = DAT_18084058c;
          local_1ec = DAT_180840558;
          local_1e8 = DAT_180840588;
          local_1e4 = DAT_180840554;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12a60
                       ) == '\0') {
            lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_32 + 0x12a60) = 1;
            uVal_33 = _UNK_1806c8c78;
            *(uint64_t *)(lVal_32 + 0x12a50) = _DAT_1806c8c70;
            *(uint64_t *)(lVal_32 + 0x12a58) = uVal_33;
            func_0x180673140(&LAB_1804312f0);
          }
          lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pArr16_5 = (uint8_t (*)[16])(lVal_32 + 0x12a50);
          if (*(char *)(lVal_32 + 0x12a5f) == '\x01') {
            uVal_77 = *(uint32_t *)(lVal_32 + 0x12a58);
            auArr_50 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVal_77 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_77 >> 0x10),uVal_77)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_32 + 0x12a5d) >> 8)),
                                                  (char)((uint)uVal_77 >> 8)),
                                              CONCAT11((char)*(uint16_t *)(lVal_32 + 0x12a5d),
                                                       (char)uVal_77))),_DAT_1806ae110);
            auArr_53._0_8_ = auArr_50._0_8_;
            auArr_53._8_8_ =
                 auArr_50._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_32 + 0x12a5c) << 0x20;
            auArr_50 = pblendw(auArr_53,*pArr16_5,0xf);
            *pArr16_5 = auArr_50 ^ _DAT_1806c8c80;
          }
          _local_108 = (uint8_t  [16])0x0;
          _local_118 = (uint8_t  [16])0x0;
          sz_30 = strlen((char *)pArr16_5);
          if (-1 < (int64_t)sz_30) {
            uVal_43 = 0xf;
            if (0xf < sz_30) {
              uVal_31 = sz_30 | 0xf;
              uVal_43 = 0x16;
              if (0x16 < uVal_31) {
                uVal_43 = uVal_31;
              }
              if (uVal_31 < 0xfff) {
                pU64_49 = (uint8_t *)func_0x180672de0(uVal_43 + 1);
              }
              else {
                lVal_32 = func_0x180672de0(uVal_43 + 0x28);
                pU64_49 = (uint8_t *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_49 + -8) = lVal_32;
              }
              local_118 = (uint8_t  [8])pU64_49;
            }
            uStack_100 = uVal_43;
            _local_108 = sz_30;
            func_0x1806aa960(pU64_49,pArr16_5,sz_30);
            pU64_49[sz_30] = 0;
            func_0x1800cfa40(&local_198,local_118);
            pU64_37 = &local_1d8;
            func_0x1800d0930(&local_198,&local_1e8,&local_1f0,&local_1f8,pU64_37,1,&local_1c8,uVal_76);
            uVal_56 = (uint)((uint64_t)pU64_37 >> 0x20);
            uVal_43 = CONCAT44(uStack_17c,fStack_180);
            if (0xf < uVal_43) {
              lVal_39 = CONCAT44(fStack_194,local_198);
              uVal_31 = uVal_43 + 1;
              lVal_32 = lVal_39;
              if (0xfff < uVal_31) {
                lVal_32 = *(int64_t *)(lVal_39 + -8);
                if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
                uVal_31 = uVal_43 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_32,uVal_31);
            }
            uStack_188 = 0;
            uStack_187 = 0;
            uStack_186 = 0;
            uStack_185 = 0;
            uStack_184 = 0;
            uStack_183 = 0;
            uStack_181 = 0;
            fStack_180 = 2.101948e-44;
            uStack_17c = 0;
            local_198 = (float)((uint)local_198 & 0xffffff00);
            if (0xf < uStack_100) {
              uVal_43 = uStack_100 + 1;
              lVal_32 = (int64_t)local_118;
              if (0xfff < uVal_43) {
                lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
                if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
                uVal_43 = uStack_100 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_32,uVal_43);
            }
            goto LAB_1803cb875;
          }
        }
      }
LAB_1803ce3d9:
      func_0x18007ba70();
      goto LAB_1803ce3de;
    }
LAB_1803cb7b9:
    func_0x180107830(local_1a0,2,0,0);
    func_0x1800d36e0(DAT_1806ae7b0 + DAT_180840588,DAT_180840554 + DAT_1806ae7b0);
    uVal_33 = func_0x1800cf970();
    uVal_34 = func_0x1800cf950();
    uVal_35 = func_0x1800cf960();
    func_0x18011b260(uVal_35,uVal_34,uVal_33);
LAB_1803cb875:
    fVal_68 = (DAT_1808402bc - DAT_180840554) * DAT_1806b2870 + DAT_180840554;
    fVal_69 = (float)((uint)(DAT_1808402bc - DAT_180840554) ^ _DAT_1806af1a0) * DAT_1806b2870;
    fVal_71 = DAT_180840588 + DAT_18084058c + fVal_69 + DAT_1806ae7b0;
    fVal_69 = DAT_1808402bc + fVal_69;
    fVal_70 = (fVal_68 - fVal_69) + fVal_71;
    func_0x180107830(local_1a0,2,0,0);
    if ((((DAT_1808402c8 <= fVal_70) || (DAT_1808402cc <= fVal_68)) || (fVal_71 <= DAT_1808402c8)) ||
       (fVal_69 <= DAT_1808402cc)) {
      func_0x1800d36e0();
    }
    else {
      func_0x1800d36e0();
      if (DAT_18083ef17 == '\x01') {
        func_0x1803d21f0(0x1b,1,&local_198);
        DAT_18083ef17 = '\0';
      }
    }
    uVal_33 = func_0x1800cf970();
    uVal_34 = func_0x1800cf950();
    uVal_35 = func_0x1800cf960();
    func_0x18011b260(uVal_35,uVal_34,uVal_33);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12a78) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12a78) = 1;
      *(uint8_t *)(lVal_32 + 0x12a74) = 1;
      *(uint64_t *)(lVal_32 + 0x12a68) = 0x3f3c5286ec49fcaa;
      *(uint32_t *)(lVal_32 + 0x12a70) = 0x8548eea8;
      func_0x180673140(&LAB_180431320);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_32 + 0x12a68);
    if (*(char *)(lVal_32 + 0x12a74) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x4d5f7de9853b9dc7;
      *(uint *)(lVal_32 + 0x12a70) = *(uint *)(lVal_32 + 0x12a70) ^ 0x853b9dc7;
      *(uint8_t *)(lVal_32 + 0x12a74) = 0;
    }
    _local_118 = ZEXT816(0);
    sz_30 = strlen((char *)pU64_4);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce3d9;
    uVal_43 = 0xf;
    fnPtr_47 = local_118;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        fnPtr_47 = (char *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        fnPtr_47 = (char *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_47 + -8) = lVal_32;
      }
      local_118 = (uint8_t  [8])fnPtr_47;
    }
    uStack_100 = uVal_43;
    _local_108 = sz_30;
    func_0x1806aa960(fnPtr_47,pU64_4,sz_30);
    fnPtr_47[sz_30] = '\0';
    uVal_43 = _local_108;
    fnPtr_47 = local_118;
    if (0xf < uStack_100) {
      fnPtr_47 = (char *)local_118;
    }
    local_198 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    uVal_76 = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    fStack_180 = fStack_190;
    uStack_17c = uVal_76;
    if ((int64_t)_local_108 < 0) goto LAB_1803ce472;
    fStack_180 = SUB164(_local_108,0);
    uVal_58 = (uint)fStack_180;
    uStack_17c = SUB164(_local_108,4);
    uVal_77 = uStack_17c;
    if (_local_108 < 0x10) {
      uStack_178 = 0xf;
      uStack_174 = 0;
      func_0x1806aa960(&fStack_190,fnPtr_47,_local_108);
      *(uint8_t *)((int64_t)&fStack_190 + uVal_43) = 0;
      if (uVal_43 != 0) goto LAB_1803cbc11;
      uVal_43 = 0xaf63bd4c8601b7df;
      uVal_38 = 0;
    }
    else {
      uVal_38 = _local_108 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_38) {
        uVal_31 = uVal_38;
      }
      if (uVal_38 < 0xfff) {
        fStack_180 = fStack_190;
        uStack_17c = uVal_76;
        uVal_38 = func_0x180672de0(uVal_31 + 1);
      }
      else {
        fStack_180 = fStack_190;
        uStack_17c = uVal_76;
        lVal_32 = func_0x180672de0(uVal_31 + 0x28);
        uVal_38 = lVal_32 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_38 - 8) = lVal_32;
      }
      fStack_190 = (float)uVal_38;
      uStack_18c = (uint8_t)(uVal_38 >> 0x20);
      uStack_18b = (uint16_t)(uVal_38 >> 0x28);
      uStack_189 = (uint8_t)(uVal_38 >> 0x38);
      uStack_178 = (uint32_t)uVal_31;
      uStack_174 = (uint32_t)(uVal_31 >> 0x20);
      fStack_180 = (float)uVal_58;
      uStack_17c = uVal_77;
      func_0x1806aa960(uVal_38,fnPtr_47,uVal_43);
      *(uint8_t *)(uVal_38 + uVal_43) = 0;
LAB_1803cbc11:
      uVal_31 = (uint64_t)(uVal_58 & 7);
      if (uVal_43 - 1 < 7) {
        uVal_38 = 0xcbf29ce484222325;
LAB_1803cbcbe:
        uVal_43 = 0;
        do {
          uVal_38 = uVal_38 * 0x100000001b3 ^ (int64_t)fnPtr_47[uVal_43];
          uVal_43 = uVal_43 + 1;
        } while (uVal_31 != uVal_43);
      }
      else {
        uVal_43 = uVal_43 & 0x7ffffffffffffff8;
        uVal_38 = 0xcbf29ce484222325;
        do {
          uVal_38 = (((((((uVal_38 * 0x100000001b3 ^ (int64_t)*fnPtr_47) * 0x100000001b3 ^
                        (int64_t)fnPtr_47[1]) * 0x100000001b3 ^ (int64_t)fnPtr_47[2]) *
                       0x100000001b3 ^ (int64_t)fnPtr_47[3]) * 0x100000001b3 ^ (int64_t)fnPtr_47[4])
                     * 0x100000001b3 ^ (int64_t)fnPtr_47[5]) * 0x100000001b3 ^ (int64_t)fnPtr_47[6])
                   * 0x100000001b3 ^ (int64_t)fnPtr_47[7];
          fnPtr_47 = fnPtr_47 + 8;
          uVal_43 = uVal_43 - 8;
        } while (uVal_43 != 0);
        if (uVal_31 != 0) goto LAB_1803cbcbe;
      }
      uVal_43 = ((uint64_t)local_198._0_1_ ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_38;
    }
    local_170 = (uint32_t)uVal_38;
    uStack_16c = (uint32_t)(uVal_38 >> 0x20);
    uStack_168 = (uint8_t)uVal_43;
    uStack_167 = (uint32_t)(uVal_43 >> 8);
    uStack_163._0_3_ = (undefined3)(uVal_43 >> 0x28);
    local_1c8 = CONCAT44(DAT_1806b66b0 + (fVal_69 - fVal_68),(fVal_71 - fVal_70) + DAT_1806b66b0);
    fStack_1c0 = 1.0;
    auArr_50 = insertps(ZEXT416((uint)fVal_70),ZEXT416((uint)fVal_68),0x10);
    local_1d8 = CONCAT44(auArr_50._4_4_ + _UNK_1806c8cb4,auArr_50._0_4_ + _DAT_1806c8cb0);
    local_1d0 = 0;
    func_0x1800d4bf0(&DAT_1808402f8,&local_198,&local_1d8,&local_1c8);
    uVal_43 = CONCAT44(uStack_174,uStack_178);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,fStack_190)));
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    auArr_50 = insertps(ZEXT416((uint)DAT_180840588),DAT_180840554,0x10);
    local_1c8 = CONCAT44(fVal_69 - fVal_68,fVal_71 - fVal_70);
    local_1d8 = CONCAT44(auArr_50._4_4_ + _UNK_1806c8cc4,auArr_50._0_4_ + _DAT_1806c8cc0);
    fStack_1c0 = 1.0;
    local_1d0 = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12a8c) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12a8c) = 1;
      *(uint64_t *)(lVal_32 + 0x12a80) = 0x92038c56a6a3c4a8;
      *(uint32_t *)(lVal_32 + 0x12a88) = 0x1d1caa2;
      func_0x180673140(&LAB_180431350);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_32 + 0x12a80);
    if (*(char *)(lVal_32 + 0x12a8b) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0xfd6fa339cfd1a5c5;
      *(uint *)(lVal_32 + 0x12a88) =
           (*(uint *)(lVal_32 + 0x12a88) & 0xffff | (uint)*(byte *)(lVal_32 + 0x12a8a) << 0x10) ^
           SUB164(_DAT_1806c8cd0,0);
    }
    _local_118 = ZEXT816(0);
    sz_30 = strlen((char *)pU64_4);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce3d9;
    uVal_43 = 0xf;
    fnPtr_47 = local_118;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        fnPtr_47 = (char *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        fnPtr_47 = (char *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(fnPtr_47 + -8) = lVal_32;
      }
      local_118 = (uint8_t  [8])fnPtr_47;
    }
    uStack_100 = uVal_43;
    _local_108 = sz_30;
    func_0x1806aa960(fnPtr_47,pU64_4,sz_30);
    fnPtr_47[sz_30] = '\0';
    uVal_43 = _local_108;
    fnPtr_47 = local_118;
    if (0xf < uStack_100) {
      fnPtr_47 = (char *)local_118;
    }
    local_198 = 0.0;
    fStack_190 = 0.0;
    uVal_76 = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = fStack_190;
    uStack_17c = uVal_76;
    if ((int64_t)_local_108 < 0) goto LAB_1803ce478;
    fStack_180 = SUB164(_local_108,0);
    uVal_58 = (uint)fStack_180;
    uStack_17c = SUB164(_local_108,4);
    uVal_77 = uStack_17c;
    if (_local_108 < 0x10) {
      uStack_178 = 0xf;
      uStack_174 = 0;
      func_0x1806aa960(&fStack_190,fnPtr_47,_local_108);
      *(uint8_t *)((int64_t)&fStack_190 + uVal_43) = 0;
      if (uVal_43 != 0) goto LAB_1803cc001;
      uVal_43 = 0xaf63bd4c8601b7df;
      uVal_38 = 0;
    }
    else {
      uVal_38 = _local_108 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_38) {
        uVal_31 = uVal_38;
      }
      if (uVal_38 < 0xfff) {
        fStack_180 = fStack_190;
        uStack_17c = uVal_76;
        uVal_38 = func_0x180672de0(uVal_31 + 1);
      }
      else {
        fStack_180 = fStack_190;
        uStack_17c = uVal_76;
        lVal_32 = func_0x180672de0(uVal_31 + 0x28);
        uVal_38 = lVal_32 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_38 - 8) = lVal_32;
      }
      fStack_190 = (float)uVal_38;
      uStack_18c = (uint8_t)(uVal_38 >> 0x20);
      uStack_18b = (uint16_t)(uVal_38 >> 0x28);
      uStack_189 = (uint8_t)(uVal_38 >> 0x38);
      uStack_178 = (uint32_t)uVal_31;
      uStack_174 = (uint32_t)(uVal_31 >> 0x20);
      fStack_180 = (float)uVal_58;
      uStack_17c = uVal_77;
      func_0x1806aa960(uVal_38,fnPtr_47,uVal_43);
      *(uint8_t *)(uVal_38 + uVal_43) = 0;
LAB_1803cc001:
      uVal_31 = (uint64_t)(uVal_58 & 7);
      if (uVal_43 - 1 < 7) {
        uVal_38 = 0xcbf29ce484222325;
LAB_1803cc0ae:
        uVal_43 = 0;
        do {
          uVal_38 = uVal_38 * 0x100000001b3 ^ (int64_t)fnPtr_47[uVal_43];
          uVal_43 = uVal_43 + 1;
        } while (uVal_31 != uVal_43);
      }
      else {
        uVal_43 = uVal_43 & 0x7ffffffffffffff8;
        uVal_38 = 0xcbf29ce484222325;
        do {
          uVal_38 = (((((((uVal_38 * 0x100000001b3 ^ (int64_t)*fnPtr_47) * 0x100000001b3 ^
                        (int64_t)fnPtr_47[1]) * 0x100000001b3 ^ (int64_t)fnPtr_47[2]) *
                       0x100000001b3 ^ (int64_t)fnPtr_47[3]) * 0x100000001b3 ^ (int64_t)fnPtr_47[4])
                     * 0x100000001b3 ^ (int64_t)fnPtr_47[5]) * 0x100000001b3 ^ (int64_t)fnPtr_47[6])
                   * 0x100000001b3 ^ (int64_t)fnPtr_47[7];
          fnPtr_47 = fnPtr_47 + 8;
          uVal_43 = uVal_43 - 8;
        } while (uVal_43 != 0);
        if (uVal_31 != 0) goto LAB_1803cc0ae;
      }
      uVal_43 = ((uint64_t)local_198._0_1_ ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVal_38;
    }
    local_170 = (uint32_t)uVal_38;
    uStack_16c = (uint32_t)(uVal_38 >> 0x20);
    uStack_168 = (uint8_t)uVal_43;
    uStack_167 = (uint32_t)(uVal_43 >> 8);
    uStack_163._0_3_ = (undefined3)(uVal_43 >> 0x28);
    func_0x1800d4bf0(&DAT_1808402f8,&local_198,&local_1d8,&local_1c8);
    uVal_43 = CONCAT44(uStack_174,uStack_178);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT17(uStack_189,CONCAT25(uStack_18b,CONCAT14(uStack_18c,fStack_190)));
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    fStack_180 = 0.0;
    uStack_17c = 0;
    uStack_178 = 0xf;
    uStack_174 = 0;
    fStack_190 = (float)((uint)fStack_190 & 0xffffff00);
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    func_0x1800cf900();
    func_0x180107830(local_1a0,2,0,0);
    local_198 = DAT_18084058c + DAT_180840588;
    fStack_194 = DAT_1808402bc;
    local_118._4_4_ = DAT_1808402bc;
    local_118._0_4_ = DAT_180840588;
    pFloat_45 = &local_198;
    func_0x1800d0090(local_118,pFloat_45);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12a9c) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12a9c) = 1;
      *(uint8_t *)(lVal_32 + 0x12a98) = 1;
      *(uint64_t *)(lVal_32 + 0x12a90) = 0x77f8c02b7cf18e50;
      func_0x180673140(&LAB_180431380);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_32 + 0x12a90);
    if (*(char *)(lVal_32 + 0x12a98) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x778ba5470995e11d;
      *(uint8_t *)(lVal_32 + 0x12a98) = 0;
    }
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    uStack_17c = 0;
    local_198 = 0.0;
    fStack_194 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    sz_30 = strlen((char *)pU64_4);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce3d9;
    uVal_43 = 0xf;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pFloat_45 + -2) = lVal_32;
      }
      local_198 = SUB84(pFloat_45,0);
      fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
    }
    uStack_188 = (uint8_t)sz_30;
    uStack_187 = (uint8_t)(sz_30 >> 8);
    uStack_186 = (uint8_t)(sz_30 >> 0x10);
    uStack_185 = (uint8_t)(sz_30 >> 0x18);
    uStack_184 = (uint8_t)(sz_30 >> 0x20);
    uStack_183 = (uint16_t)(sz_30 >> 0x28);
    uStack_181 = (uint8_t)(sz_30 >> 0x38);
    fStack_180 = (float)uVal_43;
    uStack_17c = (uint32_t)(uVal_43 >> 0x20);
    func_0x1806aa960(pFloat_45,pU64_4,sz_30);
    *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
    pFloat_45 = &local_198;
    func_0x1803c1960(pFloat_45,0);
    uVal_43 = CONCAT44(uStack_17c,fStack_180);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT44(fStack_194,local_198);
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12ab0) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12ab0) = 1;
      uVal_12 = _UNK_1806c8cec;
      uVal_77 = _UNK_1806c8ce8;
      uVal_76 = _UNK_1806c8ce4;
      *(uint32_t *)(lVal_32 + 0x12aa0) = _DAT_1806c8ce0;
      *(uint32_t *)(lVal_32 + 0x12aa4) = uVal_76;
      *(uint32_t *)(lVal_32 + 0x12aa8) = uVal_77;
      *(uint32_t *)(lVal_32 + 0x12aac) = uVal_12;
      func_0x180673140(&LAB_1804313a0);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_5 = (uint8_t (*)[16])(lVal_32 + 0x12aa0);
    if (*(char *)(lVal_32 + 0x12aaf) == '\x01') {
      uVal_76 = *(uint32_t *)(lVal_32 + 0x12aa8);
      auArr_50 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_76 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_76 >> 0x10),uVal_76)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_32 + 0x12aad) >> 8)),
                                                 (char)((uint)uVal_76 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_32 + 0x12aad),
                                                 (char)uVal_76))),_DAT_1806ae110);
      auArr_54._0_8_ = auArr_50._0_8_;
      auArr_54._8_8_ =
           auArr_50._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_32 + 0x12aac) << 0x20;
      auArr_50 = pblendw(auArr_54,*pArr16_5,0xf);
      *pArr16_5 = auArr_50 ^ _DAT_1806c8cf0;
    }
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    uStack_17c = 0;
    local_198 = 0.0;
    fStack_194 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    sz_30 = strlen((char *)pArr16_5);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce3d9;
    uVal_43 = 0xf;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pFloat_45 + -2) = lVal_32;
      }
      local_198 = SUB84(pFloat_45,0);
      fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
    }
    uStack_188 = (uint8_t)sz_30;
    uStack_187 = (uint8_t)(sz_30 >> 8);
    uStack_186 = (uint8_t)(sz_30 >> 0x10);
    uStack_185 = (uint8_t)(sz_30 >> 0x18);
    uStack_184 = (uint8_t)(sz_30 >> 0x20);
    uStack_183 = (uint16_t)(sz_30 >> 0x28);
    uStack_181 = (uint8_t)(sz_30 >> 0x38);
    fStack_180 = (float)uVal_43;
    uStack_17c = (uint32_t)(uVal_43 >> 0x20);
    func_0x1806aa960(pFloat_45,pArr16_5,sz_30);
    *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
    pFloat_45 = &local_198;
    func_0x1803c1960(pFloat_45,1);
    uVal_43 = CONCAT44(uStack_17c,fStack_180);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT44(fStack_194,local_198);
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    local_198 = (float)_DAT_1806cba0c;
    fStack_194 = (float)((uint64_t)_DAT_1806cba0c >> 0x20);
    fStack_190 = (float)_UNK_1806cba14;
    uStack_18c = (uint8_t)((uint64_t)_UNK_1806cba14 >> 0x20);
    uStack_18b = (uint16_t)((uint64_t)_UNK_1806cba14 >> 0x28);
    uStack_189 = (uint8_t)((uint64_t)_UNK_1806cba14 >> 0x38);
    uStack_188 = 0xb2;
    uStack_187 = 0x59;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12ac4) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12ac4) = 1;
      func_0x18007c170(lVal_32 + 0x12ab1,&local_198);
      func_0x180673140(&LAB_1804313d0);
    }
    fnPtr_47 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12ab1)
    ;
    func_0x180441540(fnPtr_47);
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    uStack_17c = 0;
    local_198 = 0.0;
    fStack_194 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    sz_30 = strlen(fnPtr_47);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce3d9;
    uVal_43 = 0xf;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pFloat_45 + -2) = lVal_32;
      }
      local_198 = SUB84(pFloat_45,0);
      fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
    }
    uStack_188 = (uint8_t)sz_30;
    uStack_187 = (uint8_t)(sz_30 >> 8);
    uStack_186 = (uint8_t)(sz_30 >> 0x10);
    uStack_185 = (uint8_t)(sz_30 >> 0x18);
    uStack_184 = (uint8_t)(sz_30 >> 0x20);
    uStack_183 = (uint16_t)(sz_30 >> 0x28);
    uStack_181 = (uint8_t)(sz_30 >> 0x38);
    fStack_180 = (float)uVal_43;
    uStack_17c = (uint32_t)(uVal_43 >> 0x20);
    func_0x1806aa960(pFloat_45,fnPtr_47,sz_30);
    *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
    pFloat_45 = &local_198;
    func_0x1803c1960(pFloat_45,2);
    uVal_43 = CONCAT44(uStack_17c,fStack_180);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT44(fStack_194,local_198);
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    local_198 = (float)_DAT_1806cba1e;
    fStack_194 = (float)((uint64_t)_DAT_1806cba1e >> 0x20);
    fStack_190 = (float)_UNK_1806cba26;
    uStack_18c = (uint8_t)((uint64_t)_UNK_1806cba26 >> 0x20);
    uStack_18b = (uint16_t)((uint64_t)_UNK_1806cba26 >> 0x28);
    uStack_189 = (uint8_t)((uint64_t)_UNK_1806cba26 >> 0x38);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12ad8) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12ad8) = 1;
      func_0x18007d150(lVal_32 + 0x12ac5,&local_198);
      func_0x180673140(&LAB_180431400);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_42 = (uint *)(lVal_32 + 0x12ac5);
    if (*(char *)(lVal_32 + 0x12ad5) == '\x01') {
      uVal_58 = *(uint *)(lVal_32 + 0x12ac9) ^ _UNK_1806c8d04;
      uVal_61 = *(uint *)(lVal_32 + 0x12acd) ^ _UNK_1806c8d08;
      uVal_59 = *(uint *)(lVal_32 + 0x12ad1) ^ _UNK_1806c8d0c;
      *pU64_42 = *pU64_42 ^ _DAT_1806c8d00;
      *(uint *)(lVal_32 + 0x12ac9) = uVal_58;
      *(uint *)(lVal_32 + 0x12acd) = uVal_61;
      *(uint *)(lVal_32 + 0x12ad1) = uVal_59;
      *(uint8_t *)(lVal_32 + 0x12ad5) = 0;
    }
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    uStack_17c = 0;
    local_198 = 0.0;
    fStack_194 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    sz_30 = strlen((char *)pU64_42);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce3d9;
    uVal_43 = 0xf;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pFloat_45 + -2) = lVal_32;
      }
      local_198 = SUB84(pFloat_45,0);
      fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
    }
    uStack_188 = (uint8_t)sz_30;
    uStack_187 = (uint8_t)(sz_30 >> 8);
    uStack_186 = (uint8_t)(sz_30 >> 0x10);
    uStack_185 = (uint8_t)(sz_30 >> 0x18);
    uStack_184 = (uint8_t)(sz_30 >> 0x20);
    uStack_183 = (uint16_t)(sz_30 >> 0x28);
    uStack_181 = (uint8_t)(sz_30 >> 0x38);
    fStack_180 = (float)uVal_43;
    uStack_17c = (uint32_t)(uVal_43 >> 0x20);
    func_0x1806aa960(pFloat_45,pU64_42,sz_30);
    *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
    pFloat_45 = &local_198;
    func_0x1803c1960(pFloat_45,3);
    uVal_43 = CONCAT44(uStack_17c,fStack_180);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT44(fStack_194,local_198);
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12aec) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12aec) = 1;
      *(uint64_t *)(lVal_32 + 0x12ae0) = 0xfba857721507700f;
      *(uint32_t *)(lVal_32 + 0x12ae8) = 0x1435728;
      func_0x180673140(&LAB_180431420);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint64_t *)(lVal_32 + 0x12ae0);
    if (*(char *)(lVal_32 + 0x12aeb) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0x8fc1333735432547;
      *(uint *)(lVal_32 + 0x12ae8) =
           (*(uint *)(lVal_32 + 0x12ae8) & 0xffff | (uint)*(byte *)(lVal_32 + 0x12aea) << 0x10) ^
           SUB164(_DAT_1806c8d10,0);
    }
    uStack_188 = 0;
    uStack_187 = 0;
    uStack_186 = 0;
    uStack_185 = 0;
    uStack_184 = 0;
    uStack_183 = 0;
    uStack_181 = 0;
    fStack_180 = 0.0;
    uStack_17c = 0;
    local_198 = 0.0;
    fStack_194 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    sz_30 = strlen((char *)pU64_4);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce3d9;
    uVal_43 = 0xf;
    if (0xf < sz_30) {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pFloat_45 + -2) = lVal_32;
      }
      local_198 = SUB84(pFloat_45,0);
      fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
    }
    uStack_188 = (uint8_t)sz_30;
    uStack_187 = (uint8_t)(sz_30 >> 8);
    uStack_186 = (uint8_t)(sz_30 >> 0x10);
    uStack_185 = (uint8_t)(sz_30 >> 0x18);
    uStack_184 = (uint8_t)(sz_30 >> 0x20);
    uStack_183 = (uint16_t)(sz_30 >> 0x28);
    uStack_181 = (uint8_t)(sz_30 >> 0x38);
    fStack_180 = (float)uVal_43;
    uStack_17c = (uint32_t)(uVal_43 >> 0x20);
    func_0x1806aa960(pFloat_45,pU64_4,sz_30);
    *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
    pFloat_45 = &local_198;
    func_0x1803c1960(pFloat_45,4);
    uVal_43 = CONCAT44(uStack_17c,fStack_180);
    if (0xf < uVal_43) {
      lVal_39 = CONCAT44(fStack_194,local_198);
      uVal_31 = uVal_43 + 1;
      lVal_32 = lVal_39;
      if (0xfff < uVal_31) {
        lVal_32 = *(int64_t *)(lVal_39 + -8);
        if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_31 = uVal_43 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_31);
    }
    fVal_68 = DAT_180840588;
    fVal_69 = DAT_1806c3800;
    fVal_71 = DAT_180840554 + DAT_180840558;
    fVal_70 = DAT_1808402b8 + DAT_1806c3800;
    _local_118 = (uint8_t  [16])0x0;
    _local_108 = ZEXT816(0xf) << 0x40;
    ch_27 = func_0x18045fc60(0x10);
    if (ch_27 == '\0') {
      local_198 = (float)_DAT_1806cba3f;
      fStack_194 = (float)((uint64_t)_DAT_1806cba3f >> 0x20);
      fStack_190 = (float)_UNK_1806cba47;
      uStack_18c = (uint8_t)((uint64_t)_UNK_1806cba47 >> 0x20);
      uStack_18b = (uint16_t)((uint64_t)_UNK_1806cba47 >> 0x28);
      uStack_189 = 0x83;
      uStack_188 = 0xe2;
      uStack_187 = 9;
      uStack_186 = 0xa3;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12b18) == '\0') {
        lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_32 + 0x12b18) = 1;
        func_0x18007cb80(lVal_32 + 0x12b01,&local_198);
        func_0x180673140(&LAB_180431480);
      }
      fnPtr_47 = (char *)(*(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                        0x12b01);
      func_0x180441560(fnPtr_47);
      local_198 = 0.0;
      fStack_194 = 0.0;
      fStack_190 = 0.0;
      uStack_18c = 0;
      uStack_18b = 0;
      uStack_189 = 0;
      sz_30 = strlen(fnPtr_47);
      if (-1 < (int64_t)sz_30) {
        uVal_43 = 0xf;
        if (0xf < sz_30) {
          uVal_31 = sz_30 | 0xf;
          uVal_43 = 0x16;
          if (0x16 < uVal_31) {
            uVal_43 = uVal_31;
          }
          if (uVal_31 < 0xfff) {
            pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
          }
          else {
            lVal_32 = func_0x180672de0(uVal_43 + 0x28);
            pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pFloat_45 + -2) = lVal_32;
          }
          local_198 = SUB84(pFloat_45,0);
          fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
        }
        uStack_188 = (uint8_t)sz_30;
        uStack_187 = (uint8_t)(sz_30 >> 8);
        uStack_186 = (uint8_t)(sz_30 >> 0x10);
        uStack_185 = (uint8_t)(sz_30 >> 0x18);
        uStack_184 = (uint8_t)(sz_30 >> 0x20);
        uStack_183 = (uint16_t)(sz_30 >> 0x28);
        uStack_181 = (uint8_t)(sz_30 >> 0x38);
        fStack_180 = (float)uVal_43;
        uStack_17c = (uint32_t)(uVal_43 >> 0x20);
        func_0x1806aa960(pFloat_45,fnPtr_47,sz_30);
        *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
        goto joined_r0x0001803cca92;
      }
      goto LAB_1803ce48a;
    }
    local_198 = (float)_DAT_1806cba2e;
    fStack_194 = (float)((uint64_t)_DAT_1806cba2e >> 0x20);
    fStack_190 = (float)_UNK_1806cba36;
    uStack_18c = (uint8_t)((uint64_t)_UNK_1806cba36 >> 0x20);
    uStack_18b = (uint16_t)((uint64_t)_UNK_1806cba36 >> 0x28);
    uStack_189 = (uint8_t)((uint64_t)_UNK_1806cba36 >> 0x38);
    uStack_188 = 0xe1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12b00) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12b00) = 1;
      func_0x18007d2b0(lVal_32 + 0x12aed,&local_198);
      func_0x180673140(&LAB_180431450);
    }
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_42 = (uint *)(lVal_32 + 0x12aed);
    if (*(char *)(lVal_32 + 0x12afe) == '\x01') {
      uVal_58 = *(uint *)(lVal_32 + 0x12af1) ^ _UNK_1806c8d34;
      uVal_61 = *(uint *)(lVal_32 + 0x12af5) ^ _UNK_1806c8d38;
      uVal_59 = *(uint *)(lVal_32 + 0x12af9) ^ _UNK_1806c8d3c;
      *pU64_42 = *pU64_42 ^ _DAT_1806c8d30;
      *(uint *)(lVal_32 + 0x12af1) = uVal_58;
      *(uint *)(lVal_32 + 0x12af5) = uVal_61;
      *(uint *)(lVal_32 + 0x12af9) = uVal_59;
      *(byte *)(lVal_32 + 0x12afd) = *(byte *)(lVal_32 + 0x12afd) ^ 0xe1;
      *(uint8_t *)(lVal_32 + 0x12afe) = 0;
    }
    local_198 = 0.0;
    fStack_194 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    sz_30 = strlen((char *)pU64_42);
    if ((int64_t)sz_30 < 0) goto LAB_1803ce484;
    if (sz_30 < 0x10) {
      pFloat_45 = &local_198;
      uVal_43 = 0xf;
    }
    else {
      uVal_31 = sz_30 | 0xf;
      uVal_43 = 0x16;
      if (0x16 < uVal_31) {
        uVal_43 = uVal_31;
      }
      if (uVal_31 < 0xfff) {
        pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
      }
      else {
        lVal_32 = func_0x180672de0(uVal_43 + 0x28);
        pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pFloat_45 + -2) = lVal_32;
      }
      local_198 = SUB84(pFloat_45,0);
      fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
    }
    uStack_188 = (uint8_t)sz_30;
    uStack_187 = (uint8_t)(sz_30 >> 8);
    uStack_186 = (uint8_t)(sz_30 >> 0x10);
    uStack_185 = (uint8_t)(sz_30 >> 0x18);
    uStack_184 = (uint8_t)(sz_30 >> 0x20);
    uStack_183 = (uint16_t)(sz_30 >> 0x28);
    uStack_181 = (uint8_t)(sz_30 >> 0x38);
    fStack_180 = (float)uVal_43;
    uStack_17c = (uint32_t)(uVal_43 >> 0x20);
    func_0x1806aa960(pFloat_45,pU64_42,sz_30);
    *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
joined_r0x0001803cca92:
    if (0xf < uStack_100) {
      uVal_43 = uStack_100 + 1;
      lVal_32 = (int64_t)local_118;
      if (0xfff < uVal_43) {
        lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) goto LAB_1803ce3de;
        uVal_43 = uStack_100 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_32,uVal_43);
    }
    uStack_110._5_2_ = uStack_18b;
    uStack_110._4_1_ = uStack_18c;
    uStack_110._7_1_ = uStack_189;
    local_108[1] = uStack_187;
    local_108[0] = uStack_188;
    local_108[2] = uStack_186;
    local_108[3] = uStack_185;
    uStack_104._1_2_ = uStack_183;
    uStack_104._0_1_ = uStack_184;
    uStack_104._3_1_ = uStack_181;
    uStack_100._0_4_ = fStack_180;
    uStack_100._4_4_ = uStack_17c;
    local_118._4_4_ = fStack_194;
    local_118._0_4_ = local_198;
    uStack_110._0_4_ = fStack_190;
    fVal_67 = (float)func_0x1800cfa00();
    fVal_66 = *(float *)(DAT_180840630 + 0x174);
    func_0x1800cd3b0(local_118);
    fVal_68 = fVal_68 + DAT_1806b6550;
    fVal_62 = DAT_1806c8d20 + fVal_71;
    fVal_67 = fVal_67 + DAT_1806ae650;
    fVal_69 = fVal_69 + fVal_71;
    fVal_71 = fVal_70 - fVal_68;
    auArr_74 = insertps(ZEXT416((uint)(DAT_1806b5c70 + fVal_67)),ZEXT416((uint)(fVal_69 - fVal_62)),0x10
                      );
    fVal_65 = auArr_74._0_4_ * (float)DAT_1806b28a0;
    fVal_73 = DAT_1806aeae4 * fVal_71 + fVal_68;
    auArr_50 = insertps(ZEXT416((uint)fVal_73),ZEXT416((uint)fVal_62),0x10);
    local_1d8 = CONCAT44(auArr_50._4_4_ + auArr_74._4_4_ * DAT_1806b28a0._4_4_,auArr_50._0_4_ + fVal_65)
    ;
    if (((DAT_1808402c8 <= fVal_68) || (DAT_1808402cc <= fVal_62)) ||
       ((fVal_70 <= DAT_1808402c8 || (fVal_69 <= DAT_1808402cc)))) {
      uVal_58 = *(uint *)(DAT_180840630 + 0x174);
      uVal_77 = 1;
      uVal_76 = 1;
      uVal_78 = 0;
      func_0x1800d36e0();
LAB_1803ccde0:
      fVal_71 = (((fVal_71 - (fVal_66 + fVal_66)) + DAT_1806b5ef4) - fVal_67) + DAT_1806be594;
      fVal_68 = (float)func_0x1800cd3b0(local_118);
      fVal_69 = local_1d8._4_4_;
      fVal_70 = (float)func_0x1800cfa00();
      fVal_65 = (fVal_73 - fVal_68 * DAT_1806aeae4) - fVal_65;
      fVal_69 = fVal_69 - fVal_70 * DAT_1806aeae4;
      local_198 = _DAT_1806c8d80;
      fStack_194 = (float)_UNK_1806c8d84;
      fStack_190 = _UNK_1806c8d88;
      uStack_18c = (uint8_t)_UNK_1806c8d8c;
      uStack_18b = (uint16_t)((uint)_UNK_1806c8d8c >> 8);
      uStack_189 = (uint8_t)((uint)_UNK_1806c8d8c >> 0x18);
      fStack_1c0 = DAT_1806b55e0 + fVal_65;
      local_1c8 = CONCAT44(DAT_1806ae7b0 + fVal_69,fVal_65);
      fStack_1bc = fVal_69;
      func_0x1800d2a00(&local_1c8,&local_198);
      local_198 = (float)_DAT_1806c8d90;
      fStack_194 = (float)((uint64_t)_DAT_1806c8d90 >> 0x20);
      fStack_190 = (float)_UNK_1806c8d98;
      uStack_18c = (uint8_t)((uint64_t)_UNK_1806c8d98 >> 0x20);
      uStack_18b = (uint16_t)((uint64_t)_UNK_1806c8d98 >> 0x28);
      uStack_189 = (uint8_t)((uint64_t)_UNK_1806c8d98 >> 0x38);
      fVal_66 = DAT_1806aeae4 + fVal_69;
      local_1c8 = CONCAT44(fVal_69,fVal_65);
      fStack_1c0 = fVal_67 + fVal_65;
      fStack_1bc = fVal_66;
      func_0x1800d2a00(&local_1c8,&local_198);
      local_198 = _DAT_1806c8da0;
      fStack_194 = (float)_UNK_1806c8da4;
      fStack_190 = _UNK_1806c8da8;
      uStack_18c = (uint8_t)_UNK_1806c8dac;
      uStack_18b = (uint16_t)((uint)_UNK_1806c8dac >> 8);
      uStack_189 = (uint8_t)((uint)_UNK_1806c8dac >> 0x18);
      fVal_70 = (float)func_0x1800cfa00();
      fVal_68 = DAT_1806b26b4;
      fStack_1bc = fVal_69 + fVal_70 + DAT_1806b67e0;
      local_1c8 = CONCAT44(fVal_66,fVal_65);
      fStack_1c0 = fVal_67 + fVal_65;
      func_0x1800d2a00(&local_1c8,&local_198);
      local_198 = _DAT_1806b2880;
      fStack_194 = (float)_UNK_1806b2884;
      fStack_190 = _UNK_1806b2888;
      uStack_18c = SUB41(_UNK_1806b288c,0);
      uStack_18b = (uint16_t)((uint)_UNK_1806b288c >> 8);
      uStack_189 = (uint8_t)((uint)_UNK_1806b288c >> 0x18);
      uVal_33 = CONCAT44(uVal_56,0x3f400000);
      pFloat_45 = &local_198;
      func_0x1800d05c0(&local_1d8,local_118,pFloat_45,fVal_71,uVal_33,CONCAT44(uVal_76,0x3f800000),
                    CONCAT44(uVal_77,3),uVal_58 & 0xffffff00,CONCAT11(uVal_78,1),1);
      uVal_76 = (uint32_t)((uint64_t)uVal_33 >> 0x20);
      fVal_69 = *(float *)(DAT_180840630 + 0x1e8);
      local_1c8 = 0;
      iVal_63 = (int)*(uint64_t *)(DAT_180840630 + 0x1e0);
      iVal_29 = (int)((uint64_t)*(uint64_t *)(DAT_180840630 + 0x1e0) >> 0x20);
      auArr_50 = insertps(ZEXT416((uint)DAT_1808402c0),DAT_1808402c4,0x10);
      auArr_72._0_4_ = auArr_50._0_4_ - fVal_69 * (float)(iVal_63 + 1);
      auArr_72._4_4_ = auArr_50._4_4_ - fVal_69 * (float)(iVal_29 + 1);
      auArr_72._8_4_ = auArr_50._8_4_ - 0.0;
      auArr_72._12_4_ = auArr_50._12_4_ - 0.0;
      auArr_75._0_4_ = (float)iVal_63;
      auArr_75._4_4_ = (float)iVal_29;
      auArr_75._8_8_ = 0;
      auArr_74 = divps(auArr_72,auArr_75);
      local_1f8 = auArr_74._0_8_;
      DAT_1808405d4 = (float)DAT_180840290 * DAT_1806b67d0 + DAT_1808405d4;
      DAT_180840290 = 0;
      iVal_28 = func_0x1803d3440(&DAT_1808400a0,&DAT_18083ca38);
      fVal_70 = fVal_69 + auArr_74._4_4_;
      auArr_50 = ZEXT816(0);
      if (iVal_29 * iVal_63 <= iVal_28) {
        fVal_71 = DAT_1806b26b4 +
                 (((float)iVal_28 / auArr_75._0_4_ - auArr_75._4_4_) + DAT_1806b26b4) * fVal_70;
        if (0.0 <= DAT_1808405d4) {
          auArr_50 = ZEXT416((uint)DAT_1808405d4);
        }
        auArr_50 = blendvps(auArr_50,ZEXT416((uint)fVal_71),ZEXT416(-(uint)(fVal_71 < DAT_1808405d4)));
      }
      DAT_1808405d4 = auArr_50._0_4_;
      if ((byte)(DAT_1808405fc - 4U) < 0xfe) {
        DAT_180840590 = 0;
      }
      if (DAT_180840568 == '\0') {
        DAT_180840568 = '\x01';
        func_0x1803d3610();
      }
      lVal_32 = func_0x1800cf960();
      fVal_71 = *(float *)(DAT_180840630 + 0x174);
      func_0x180100390(lVal_32 + 0x10,DAT_1806ae7b0 + DAT_180840588 + fVal_71,
                    DAT_180840554 + DAT_1806ae7b0 + fVal_71,(fVal_68 + DAT_18084058c) - fVal_71,
                    CONCAT44(uVal_76,(DAT_180840558 + fVal_68) - fVal_71));
      switch(DAT_1808405fc) {
      case '\0':
        func_0x1803bd2c0();
        if (DAT_18083ef17 == '\x01') {
          DAT_1808402d0 = 0;
        }
        if (iVal_29 * iVal_63 <= iVal_28) {
          func_0x1803be1d0();
        }
        pU64_37 = DAT_1808402e8;
        fVal_71 = DAT_1806c8dc0;
        fVal_68 = DAT_1806c8980;
        fVal_66 = auArr_74._0_4_ + fVal_69;
        iVal_28 = 0;
        iVal_29 = 0;
        for (pU64_46 = DAT_1808402e0; pU64_46 != pU64_37; pU64_46 = pU64_46 + 1) {
          iVal_44 = iVal_29 + 1;
          fVal_67 = fVal_66 * 0.0;
          if (iVal_29 < iVal_63) {
            fVal_67 = (float)iVal_29 * fVal_66;
          }
          if (iVal_63 <= iVal_29) {
            iVal_44 = 1;
          }
          iVal_28 = iVal_28 + (uint)(iVal_63 <= iVal_29);
          fVal_62 = ((float)iVal_28 * fVal_70 + fVal_69 + DAT_1808402bc) - DAT_1808405d4;
          if ((fVal_62 + fVal_68 < DAT_180840554 + DAT_180840558) &&
             (DAT_1808402bc < auArr_74._4_4_ + fVal_62 + fVal_71)) {
            local_1c8 = CONCAT44(fVal_62,DAT_1808402b8 + fVal_69 + fVal_67);
            func_0x1803b1b40(*pU64_46,&local_1c8,&local_1f8);
          }
          iVal_29 = iVal_44;
        }
        break;
      case '\x01':
        func_0x1803be470();
        break;
      case '\x02':
        uVal_33 = func_0x1800cf970();
        uVal_34 = func_0x1800cf950();
        uVal_35 = func_0x1800cf960();
        func_0x18011b260(uVal_35,uVal_34,uVal_33);
        func_0x1803b5150();
        break;
      case '\x03':
        uVal_33 = func_0x1800cf970();
        uVal_34 = func_0x1800cf950();
        uVal_35 = func_0x1800cf960();
        func_0x18011b260(uVal_35,uVal_34,uVal_33);
        local_198 = _DAT_1806cbb3a;
        fStack_194 = (float)_UNK_1806cbb3e;
        fStack_190 = _UNK_1806cbb42;
        uStack_18c = (uint8_t)_UNK_1806cbb46;
        uStack_18b = (uint16_t)((uint)_UNK_1806cbb46 >> 8);
        uStack_189 = (uint8_t)((uint)_UNK_1806cbb46 >> 0x18);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12c24) == '\0') {
          lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_39 + 0x12c24) = 1;
          func_0x18007d150(lVal_39 + 0x12c11,&local_198);
          func_0x180673140(&LAB_1804317a0);
        }
        lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_42 = (uint *)(lVal_39 + 0x12c11);
        if (*(char *)(lVal_39 + 0x12c21) == '\x01') {
          uVal_56 = *(uint *)(lVal_39 + 0x12c15) ^ _UNK_1806c8db4;
          uVal_58 = *(uint *)(lVal_39 + 0x12c19) ^ _UNK_1806c8db8;
          uVal_61 = *(uint *)(lVal_39 + 0x12c1d) ^ _UNK_1806c8dbc;
          *pU64_42 = *pU64_42 ^ _DAT_1806c8db0;
          *(uint *)(lVal_39 + 0x12c15) = uVal_56;
          *(uint *)(lVal_39 + 0x12c19) = uVal_58;
          *(uint *)(lVal_39 + 0x12c1d) = uVal_61;
          *(uint8_t *)(lVal_39 + 0x12c21) = 0;
        }
        uStack_188 = 0;
        uStack_187 = 0;
        uStack_186 = 0;
        uStack_185 = 0;
        uStack_184 = 0;
        uStack_183 = 0;
        uStack_181 = 0;
        fStack_180 = 0.0;
        uStack_17c = 0;
        local_198 = 0.0;
        fStack_194 = 0.0;
        fStack_190 = 0.0;
        uStack_18c = 0;
        uStack_18b = 0;
        uStack_189 = 0;
        sz_30 = strlen((char *)pU64_42);
        if (-1 < (int64_t)sz_30) {
          uVal_43 = 0xf;
          if (0xf < sz_30) {
            uVal_31 = sz_30 | 0xf;
            uVal_43 = 0x16;
            if (0x16 < uVal_31) {
              uVal_43 = uVal_31;
            }
            if (uVal_31 < 0xfff) {
              pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
            }
            else {
              lVal_39 = func_0x180672de0(uVal_43 + 0x28);
              pFloat_45 = (float *)(lVal_39 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pFloat_45 + -2) = lVal_39;
            }
            local_198 = SUB84(pFloat_45,0);
            fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
          }
          uStack_188 = (uint8_t)sz_30;
          uStack_187 = (uint8_t)(sz_30 >> 8);
          uStack_186 = (uint8_t)(sz_30 >> 0x10);
          uStack_185 = (uint8_t)(sz_30 >> 0x18);
          uStack_184 = (uint8_t)(sz_30 >> 0x20);
          uStack_183 = (uint16_t)(sz_30 >> 0x28);
          uStack_181 = (uint8_t)(sz_30 >> 0x38);
          fStack_180 = (float)uVal_43;
          uStack_17c = (uint32_t)(uVal_43 >> 0x20);
          func_0x1806aa960(pFloat_45,pU64_42,sz_30);
          *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
          func_0x1803b55b0(&DAT_18083e6f0,&local_198,0);
          uVal_43 = CONCAT44(uStack_17c,fStack_180);
          if (0xf < uVal_43) {
            lVal_40 = CONCAT44(fStack_194,local_198);
            uVal_31 = uVal_43 + 1;
            lVal_39 = lVal_40;
            if (0xfff < uVal_31) {
              lVal_39 = *(int64_t *)(lVal_40 + -8);
              if (0x1f < (uint64_t)((lVal_40 + -8) - lVal_39)) goto LAB_1803ce3de;
              uVal_31 = uVal_43 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_39,uVal_31);
          }
          break;
        }
        goto LAB_1803ce490;
      case '\x05':
        func_0x1803c1d90(DAT_180840598);
        break;
      case '\x06':
        func_0x1803c4440();
      }
      uVal_33 = func_0x1800cf970();
      uVal_34 = func_0x1800cf950();
      uVal_35 = func_0x1800cf960();
      func_0x18011b260(uVal_35,uVal_34,uVal_33);
      func_0x1800cfa30();
      func_0x180100440(lVal_32 + 0x10);
      ch_27 = DAT_1808405fc;
      if ((DAT_1808405fc != '\0') && (DAT_1808402d0 = 0, *(char *)(DAT_180840630 + 0x1b9) == '\0'))
      {
        pU64_49 = &DAT_18083ca38;
        if (0xf < DAT_18083ca50) {
          pU64_49 = _DAT_18083ca38;
        }
        DAT_18083ca48 = 0;
        *pU64_49 = 0;
      }
      if ((DAT_180840560 != (int64_t *)0x0 && (ch_27 == '\x05' || ch_27 == '\x02')) &&
         (ch_27 = (**(func_ptr_t *)(*DAT_180840560 + 0xe0))(), pLong_3 = DAT_180840560, ch_27 != '\0'))
      {
        func_0x180134880(DAT_180840560,&local_1f0);
        (**(func_ptr_t *)(*pLong_3 + 0x148))(pLong_3,&local_1e8);
        local_198 = -1.600597e+31;
        fStack_194 = 2.32002e-14;
        lVal_32 = *(int64_t *)(DAT_180840a58 + 0x648);
        *(uint8_t *)(local_1e0 + 0x78) = 1;
        lVal_39 = *(int64_t *)(local_1e0 + 0x60);
        uVal_31 = *(uint64_t *)(local_1e0 + 0x58);
        lVal_40 = *(int64_t *)(local_1e0 + 0x48);
        uVal_43 = *(uint64_t *)(local_1e0 + 0x50) - 1;
        pU64_6 = *(uint32_t **)(lVal_40 + (lVal_39 + -1 + uVal_31 & uVal_43) * 8);
        if (*(uint64_t *)(local_1e0 + 0x50) <= lVal_39 + 1U) {
          func_0x1800f0d80(local_200,1);
          lVal_40 = *(int64_t *)(local_1e0 + 0x48);
          lVal_39 = *(int64_t *)(local_1e0 + 0x60);
          uVal_31 = *(uint64_t *)(local_1e0 + 0x58);
          uVal_43 = *(int64_t *)(local_1e0 + 0x50) - 1;
        }
        *(uint64_t *)(local_1e0 + 0x58) = uVal_31 & uVal_43;
        uVal_31 = (uVal_31 & uVal_43) + lVal_39;
        uVal_43 = uVal_43 & uVal_31;
        pU64_41 = *(uint32_t **)(lVal_40 + uVal_43 * 8);
        if (pU64_41 == (uint32_t *)0x0) {
          uVal_33 = func_0x180672de0(0x40);
          *(uint64_t *)(*(int64_t *)(local_1e0 + 0x48) + uVal_43 * 8) = uVal_33;
          pU64_41 = *(uint32_t **)
                     (*(int64_t *)(local_1e0 + 0x48) +
                     (*(int64_t *)(local_1e0 + 0x50) - 1U & uVal_31) * 8);
        }
        uVal_76 = *pU64_6;
        uVal_77 = pU64_6[1];
        uVal_12 = pU64_6[2];
        uVal_13 = pU64_6[3];
        uVal_14 = pU64_6[4];
        uVal_15 = pU64_6[5];
        uVal_16 = pU64_6[6];
        uVal_17 = pU64_6[7];
        uVal_18 = pU64_6[8];
        uVal_19 = pU64_6[9];
        uVal_20 = pU64_6[10];
        uVal_21 = pU64_6[0xb];
        uVal_22 = pU64_6[0xd];
        uVal_23 = pU64_6[0xe];
        uVal_24 = pU64_6[0xf];
        pU64_41[0xc] = pU64_6[0xc];
        pU64_41[0xd] = uVal_22;
        pU64_41[0xe] = uVal_23;
        pU64_41[0xf] = uVal_24;
        pU64_41[8] = uVal_18;
        pU64_41[9] = uVal_19;
        pU64_41[10] = uVal_20;
        pU64_41[0xb] = uVal_21;
        pU64_41[4] = uVal_14;
        pU64_41[5] = uVal_15;
        pU64_41[6] = uVal_16;
        pU64_41[7] = uVal_17;
        *pU64_41 = uVal_76;
        pU64_41[1] = uVal_77;
        pU64_41[2] = uVal_12;
        pU64_41[3] = uVal_13;
        lVal_39 = *(int64_t *)(local_1e0 + 0x60);
        *(int64_t *)(local_1e0 + 0x60) = lVal_39 + 1;
        pFloat_45 = *(float **)
                   (*(int64_t *)(local_1e0 + 0x48) +
                   (*(int64_t *)(local_1e0 + 0x50) - 1U & lVal_39 + *(int64_t *)(local_1e0 + 0x58))
                   * 8);
        fVal_69 = ((*(float *)(lVal_32 + 0x50) - local_1f0) - local_1e8) + DAT_1806be594;
        fVal_68 = ((*(float *)(lVal_32 + 0x54) - local_1ec) - local_1e4) + DAT_1806be594;
        pFloat_45[0xc] = fVal_69 * *pFloat_45 + fVal_68 * pFloat_45[4] + pFloat_45[8] * 0.0 + pFloat_45[0xc];
        pFloat_45[0xd] = fVal_69 * pFloat_45[1] + fVal_68 * pFloat_45[5] + pFloat_45[9] * 0.0 + pFloat_45[0xd];
        pFloat_45[0xe] = fVal_69 * pFloat_45[2] + fVal_68 * pFloat_45[6] + pFloat_45[10] * 0.0 + pFloat_45[0xe];
        pFloat_45[0xf] = fVal_69 * pFloat_45[3] + fVal_68 * pFloat_45[7] + pFloat_45[0xb] * 0.0 + pFloat_45[0xf]
        ;
        (**(func_ptr_t *)(*pLong_3 + 0x140))(pLong_3,0);
        func_0x1800cfa30();
        *(uint8_t *)(local_1e0 + 0x78) = 1;
        pLong_3 = (int64_t *)(local_1e0 + 0x60);
        *pLong_3 = *pLong_3 + -1;
        if (*pLong_3 == 0) {
          *(uint64_t *)(local_1e0 + 0x58) = 0;
        }
      }
      func_0x180107830(local_1a0,2,0,0);
      if (DAT_18083ca28 != 0) {
        func_0x1803b1840(&DAT_18083ca18);
      }
      uVal_33 = func_0x1800cf970();
      uVal_34 = func_0x1800cf950();
      uVal_35 = func_0x1800cf960();
      func_0x18011b260(uVal_35,uVal_34,uVal_33);
      DAT_18083ef17 = 0;
      DAT_18083ef18 = 0;
      DAT_18083ca16 = 0;
      func_0x1800cfa30();
      *(uint8_t *)(local_1e0 + 0x78) = 1;
      pLong_3 = (int64_t *)(local_1e0 + 0x60);
      *pLong_3 = *pLong_3 + -1;
      if (*pLong_3 == 0) {
        *(uint64_t *)(local_1e0 + 0x58) = 0;
      }
      if (0xf < uStack_100) {
        uVal_43 = uStack_100 + 1;
        lVal_32 = (int64_t)local_118;
        if (0xfff < uVal_43) {
          lVal_32 = *(int64_t *)((int64_t)local_118 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_118 + -8) - lVal_32)) {
LAB_1803ce3de:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_43 = uStack_100 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_32,uVal_43);
      }
      return;
    }
    uVal_58 = *(uint *)(DAT_180840630 + 0x174);
    uVal_77 = 1;
    uVal_76 = 1;
    uVal_78 = 0;
    func_0x1800d36e0();
    if (ch_27 != '\0') {
      uStack_168 = UNK_1806cba82;
      uStack_167 = _UNK_1806cba83;
      uStack_163 = _UNK_1806cba87;
      uStack_15f = _UNK_1806cba8b;
      uStack_178 = _DAT_1806cba72;
      uStack_174 = _UNK_1806cba76;
      local_170 = _UNK_1806cba7a;
      uStack_16c = _UNK_1806cba7e;
      uStack_188 = (uint8_t)_DAT_1806cba62;
      uStack_187 = (uint8_t)((uint)_DAT_1806cba62 >> 8);
      uStack_186 = (uint8_t)((uint)_DAT_1806cba62 >> 0x10);
      uStack_185 = (uint8_t)((uint)_DAT_1806cba62 >> 0x18);
      uStack_184 = (uint8_t)_UNK_1806cba66;
      uStack_183 = (uint16_t)((uint)_UNK_1806cba66 >> 8);
      uStack_181 = (uint8_t)((uint)_UNK_1806cba66 >> 0x18);
      fStack_180 = _UNK_1806cba6a;
      uStack_17c = _UNK_1806cba6e;
      local_198 = (float)_DAT_1806cba52;
      fStack_194 = (float)((uint64_t)_DAT_1806cba52 >> 0x20);
      fStack_190 = (float)_UNK_1806cba5a;
      uStack_18c = (uint8_t)((uint64_t)_UNK_1806cba5a >> 0x20);
      uStack_18b = (uint16_t)((uint64_t)_UNK_1806cba5a >> 0x28);
      uStack_189 = (uint8_t)((uint64_t)_UNK_1806cba5a >> 0x38);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12b58) == '\0') {
        lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_32 + 0x12b58) = 1;
        func_0x1801b4920(lVal_32 + 0x12b19,&local_198);
        func_0x180673140(&LAB_1804314b0);
      }
      uVal_26 = _UNK_1806c8d6c;
      uVal_25 = _UNK_1806c8d68;
      uVal_59 = _UNK_1806c8d64;
      uVal_61 = _DAT_1806c8d60;
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_42 = (uint *)(lVal_32 + 0x12b19);
      if (*(char *)(lVal_32 + 0x12b56) == '\x01') {
        uVal_55 = *(uint *)(lVal_32 + 0x12b1d) ^ _UNK_1806c8d64;
        uVal_57 = *(uint *)(lVal_32 + 0x12b21) ^ _UNK_1806c8d68;
        uVal_60 = *(uint *)(lVal_32 + 0x12b25) ^ _UNK_1806c8d6c;
        *pU64_42 = *pU64_42 ^ _DAT_1806c8d60;
        *(uint *)(lVal_32 + 0x12b1d) = uVal_55;
        *(uint *)(lVal_32 + 0x12b21) = uVal_57;
        *(uint *)(lVal_32 + 0x12b25) = uVal_60;
        *(uint *)(lVal_32 + 0x12b29) = *(uint *)(lVal_32 + 0x12b29) ^ uVal_61;
        *(uint *)(lVal_32 + 0x12b2d) = *(uint *)(lVal_32 + 0x12b2d) ^ uVal_59;
        *(uint *)(lVal_32 + 0x12b31) = *(uint *)(lVal_32 + 0x12b31) ^ uVal_25;
        *(uint *)(lVal_32 + 0x12b35) = *(uint *)(lVal_32 + 0x12b35) ^ uVal_26;
        *(uint *)(lVal_32 + 0x12b39) = *(uint *)(lVal_32 + 0x12b39) ^ uVal_61;
        *(uint *)(lVal_32 + 0x12b3d) = *(uint *)(lVal_32 + 0x12b3d) ^ uVal_59;
        *(uint *)(lVal_32 + 0x12b41) = *(uint *)(lVal_32 + 0x12b41) ^ uVal_25;
        *(uint *)(lVal_32 + 0x12b45) = *(uint *)(lVal_32 + 0x12b45) ^ uVal_26;
        *(uint64_t *)(lVal_32 + 0x12b49) =
             *(uint64_t *)(lVal_32 + 0x12b49) ^ SUB168(_DAT_1806c8d70,0);
        *(byte *)(lVal_32 + 0x12b51) = *(byte *)(lVal_32 + 0x12b51) ^ 0x13;
        *(byte *)(lVal_32 + 0x12b52) = *(byte *)(lVal_32 + 0x12b52) ^ 0x47;
        *(byte *)(lVal_32 + 0x12b53) = *(byte *)(lVal_32 + 0x12b53) ^ 0x1b;
        *(byte *)(lVal_32 + 0x12b54) = *(byte *)(lVal_32 + 0x12b54) ^ 0x25;
        *(byte *)(lVal_32 + 0x12b55) = *(byte *)(lVal_32 + 0x12b55) ^ 0x5f;
        *(uint8_t *)(lVal_32 + 0x12b56) = 0;
      }
      local_198 = 0.0;
      fStack_194 = 0.0;
      fStack_190 = 0.0;
      uStack_18c = 0;
      uStack_18b = 0;
      uStack_189 = 0;
      sz_30 = strlen((char *)pU64_42);
      if (-1 < (int64_t)sz_30) {
        if (sz_30 < 0x10) {
          pFloat_45 = &local_198;
          uVal_43 = 0xf;
        }
        else {
          uVal_31 = sz_30 | 0xf;
          uVal_43 = 0x16;
          if (0x16 < uVal_31) {
            uVal_43 = uVal_31;
          }
          if (uVal_31 < 0xfff) {
            pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
          }
          else {
            lVal_32 = func_0x180672de0(uVal_43 + 0x28);
            pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pFloat_45 + -2) = lVal_32;
          }
          local_198 = SUB84(pFloat_45,0);
          fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
        }
        uStack_188 = (uint8_t)sz_30;
        uStack_187 = (uint8_t)(sz_30 >> 8);
        uStack_186 = (uint8_t)(sz_30 >> 0x10);
        uStack_185 = (uint8_t)(sz_30 >> 0x18);
        uStack_184 = (uint8_t)(sz_30 >> 0x20);
        uStack_183 = (uint16_t)(sz_30 >> 0x28);
        uStack_181 = (uint8_t)(sz_30 >> 0x38);
        fStack_180 = (float)uVal_43;
        uStack_17c = (uint32_t)(uVal_43 >> 0x20);
        func_0x1806aa960(pFloat_45,pU64_42,sz_30);
        *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
        uVal_43 = CONCAT44(DAT_18083ca30._4_4_,(uint32_t)DAT_18083ca30);
        if (0xf < uVal_43) {
          lVal_39 = CONCAT44(DAT_18083ca18._4_4_,(float)DAT_18083ca18);
          uVal_31 = uVal_43 + 1;
          lVal_32 = lVal_39;
          if (0xfff < uVal_31) {
            lVal_32 = *(int64_t *)(lVal_39 + -8);
            if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
            uVal_31 = uVal_43 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_32,uVal_31);
        }
        DAT_18083ca18._0_4_ = local_198;
        DAT_18083ca18._4_4_ = (int)fStack_194;
        fRam000000018083ca20 = fStack_190;
        uRam000000018083ca24 = CONCAT13(uStack_189,CONCAT21(uStack_18b,uStack_18c));
        DAT_18083ca30._0_4_ = fStack_180;
        DAT_18083ca30._4_4_ = uStack_17c;
        DAT_18083ca28 =
             CONCAT44(CONCAT13(uStack_181,CONCAT21(uStack_183,uStack_184)),
                      CONCAT13(uStack_185,CONCAT12(uStack_186,CONCAT11(uStack_187,uStack_188))));
        if (DAT_18083ef17 == '\x01') {
          uStack_188 = (uint8_t)_UNK_1806cba9f;
          uStack_187 = (uint8_t)((uint)_UNK_1806cba9f >> 8);
          uStack_186 = (uint8_t)((uint)_UNK_1806cba9f >> 0x10);
          uStack_185 = (uint8_t)((uint)_UNK_1806cba9f >> 0x18);
          uStack_184 = (uint8_t)_UNK_1806cbaa3;
          uStack_183 = (uint16_t)((uint)_UNK_1806cbaa3 >> 8);
          uStack_181 = (uint8_t)((uint)_UNK_1806cbaa3 >> 0x18);
          fStack_180 = (float)_UNK_1806cbaa7;
          local_198 = _DAT_1806cba8f;
          fStack_194 = (float)_UNK_1806cba93;
          fStack_190 = _UNK_1806cba97;
          uStack_18c = (uint8_t)_DAT_1806cba9b;
          uStack_18b = (uint16_t)((uint)_DAT_1806cba9b >> 8);
          uStack_189 = (uint8_t)((uint)_DAT_1806cba9b >> 0x18);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12b78
                       ) == '\0') {
            lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_32 + 0x12b78) = 1;
            func_0x18008fba0(lVal_32 + 0x12b59,&local_198);
            func_0x180673140(&LAB_1804314f0);
          }
          fnPtr_47 = (char *)(*(int64_t *)
                              ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                            0x12b59);
          func_0x1804415a0(fnPtr_47);
          uStack_188 = 0;
          uStack_187 = 0;
          uStack_186 = 0;
          uStack_185 = 0;
          uStack_184 = 0;
          uStack_183 = 0;
          uStack_181 = 0;
          fStack_180 = 0.0;
          uStack_17c = 0;
          local_198 = 0.0;
          fStack_194 = 0.0;
          fStack_190 = 0.0;
          uStack_18c = 0;
          uStack_18b = 0;
          uStack_189 = 0;
          sz_30 = strlen(fnPtr_47);
          if ((int64_t)sz_30 < 0) goto LAB_1803ce4a2;
          if (sz_30 < 0x10) {
            pFloat_45 = &local_198;
            uVal_43 = 0xf;
          }
          else {
            uVal_31 = sz_30 | 0xf;
            uVal_43 = 0x16;
            if (0x16 < uVal_31) {
              uVal_43 = uVal_31;
            }
            if (uVal_31 < 0xfff) {
              pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
            }
            else {
              lVal_32 = func_0x180672de0(uVal_43 + 0x28);
              pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pFloat_45 + -2) = lVal_32;
            }
            local_198 = SUB84(pFloat_45,0);
            fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
          }
          uStack_188 = (uint8_t)sz_30;
          uStack_187 = (uint8_t)(sz_30 >> 8);
          uStack_186 = (uint8_t)(sz_30 >> 0x10);
          uStack_185 = (uint8_t)(sz_30 >> 0x18);
          uStack_184 = (uint8_t)(sz_30 >> 0x20);
          uStack_183 = (uint16_t)(sz_30 >> 0x28);
          uStack_181 = (uint8_t)(sz_30 >> 0x38);
          fStack_180 = (float)uVal_43;
          uStack_17c = (uint32_t)(uVal_43 >> 0x20);
          func_0x1806aa960(pFloat_45,fnPtr_47,sz_30);
          *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
          func_0x180071c30(&local_198);
          uVal_43 = CONCAT44(uStack_17c,fStack_180);
          if (0xf < uVal_43) {
            lVal_39 = CONCAT44(fStack_194,local_198);
            uVal_31 = uVal_43 + 1;
            lVal_32 = lVal_39;
            if (0xfff < uVal_31) {
              lVal_32 = *(int64_t *)(lVal_39 + -8);
              if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
              uVal_31 = uVal_43 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_32,uVal_31);
          }
          goto LAB_1803cde23;
        }
        goto LAB_1803ccde0;
      }
      goto LAB_1803ce496;
    }
    uStack_178 = _DAT_1806cbacb;
    uStack_174 = _UNK_1806cbacf;
    local_170 = _UNK_1806cbad3;
    uStack_16c = _UNK_1806cbad7;
    uStack_188 = (uint8_t)_DAT_1806cbabb;
    uStack_187 = (uint8_t)((uint)_DAT_1806cbabb >> 8);
    uStack_186 = (uint8_t)((uint)_DAT_1806cbabb >> 0x10);
    uStack_185 = (uint8_t)((uint)_DAT_1806cbabb >> 0x18);
    uStack_184 = (uint8_t)_UNK_1806cbabf;
    uStack_183 = (uint16_t)((uint)_UNK_1806cbabf >> 8);
    uStack_181 = (uint8_t)((uint)_UNK_1806cbabf >> 0x18);
    fStack_180 = _UNK_1806cbac3;
    uStack_17c = _UNK_1806cbac7;
    local_198 = _DAT_1806cbaab;
    fStack_194 = (float)_UNK_1806cbaaf;
    fStack_190 = _UNK_1806cbab3;
    uStack_18c = (uint8_t)_UNK_1806cbab7;
    uStack_18b = (uint16_t)((uint)_UNK_1806cbab7 >> 8);
    uStack_189 = (uint8_t)((uint)_UNK_1806cbab7 >> 0x18);
    uStack_168 = 199;
    uStack_167 = CONCAT31(uStack_167._1_3_,0xa7);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12bac) == '\0') {
      lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_32 + 0x12bac) = 1;
      func_0x1802d74e0(lVal_32 + 0x12b79,&local_198);
      func_0x180673140(&LAB_180431520);
    }
    uVal_26 = _UNK_1806c8d4c;
    uVal_25 = _UNK_1806c8d48;
    uVal_59 = _UNK_1806c8d44;
    uVal_61 = _DAT_1806c8d40;
    lVal_32 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_42 = (uint *)(lVal_32 + 0x12b79);
    if (*(char *)(lVal_32 + 0x12bab) == '\x01') {
      uVal_55 = *(uint *)(lVal_32 + 0x12b7d) ^ _UNK_1806c8d44;
      uVal_57 = *(uint *)(lVal_32 + 0x12b81) ^ _UNK_1806c8d48;
      uVal_60 = *(uint *)(lVal_32 + 0x12b85) ^ _UNK_1806c8d4c;
      *pU64_42 = *pU64_42 ^ _DAT_1806c8d40;
      *(uint *)(lVal_32 + 0x12b7d) = uVal_55;
      *(uint *)(lVal_32 + 0x12b81) = uVal_57;
      *(uint *)(lVal_32 + 0x12b85) = uVal_60;
      *(uint *)(lVal_32 + 0x12b89) = *(uint *)(lVal_32 + 0x12b89) ^ uVal_61;
      *(uint *)(lVal_32 + 0x12b8d) = *(uint *)(lVal_32 + 0x12b8d) ^ uVal_59;
      *(uint *)(lVal_32 + 0x12b91) = *(uint *)(lVal_32 + 0x12b91) ^ uVal_25;
      *(uint *)(lVal_32 + 0x12b95) = *(uint *)(lVal_32 + 0x12b95) ^ uVal_26;
      auArr_9._4_4_ = *(uint *)(lVal_32 + 0x12b9d) ^ uVal_59;
      auArr_9._0_4_ = *(uint *)(lVal_32 + 0x12b99) ^ uVal_61;
      auArr_9._8_4_ = *(uint *)(lVal_32 + 0x12ba1) ^ uVal_25;
      auArr_9._12_4_ = *(uint *)(lVal_32 + 0x12ba5) ^ uVal_26;
      *(uint8_t (*)[16])(lVal_32 + 0x12b99) = auArr_9;
      *(ushort *)(lVal_32 + 0x12ba9) = *(ushort *)(lVal_32 + 0x12ba9) ^ 0xa7b5;
      *(uint8_t *)(lVal_32 + 0x12bab) = 0;
    }
    local_198 = 0.0;
    fStack_194 = 0.0;
    fStack_190 = 0.0;
    uStack_18c = 0;
    uStack_18b = 0;
    uStack_189 = 0;
    sz_30 = strlen((char *)pU64_42);
    if (-1 < (int64_t)sz_30) {
      if (sz_30 < 0x10) {
        pFloat_45 = &local_198;
        uVal_43 = 0xf;
      }
      else {
        uVal_31 = sz_30 | 0xf;
        uVal_43 = 0x16;
        if (0x16 < uVal_31) {
          uVal_43 = uVal_31;
        }
        if (uVal_31 < 0xfff) {
          pFloat_45 = (float *)func_0x180672de0(uVal_43 + 1);
        }
        else {
          lVal_32 = func_0x180672de0(uVal_43 + 0x28);
          pFloat_45 = (float *)(lVal_32 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pFloat_45 + -2) = lVal_32;
        }
        local_198 = SUB84(pFloat_45,0);
        fStack_194 = (float)((uint64_t)pFloat_45 >> 0x20);
      }
      uStack_188 = (uint8_t)sz_30;
      uStack_187 = (uint8_t)(sz_30 >> 8);
      uStack_186 = (uint8_t)(sz_30 >> 0x10);
      uStack_185 = (uint8_t)(sz_30 >> 0x18);
      uStack_184 = (uint8_t)(sz_30 >> 0x20);
      uStack_183 = (uint16_t)(sz_30 >> 0x28);
      uStack_181 = (uint8_t)(sz_30 >> 0x38);
      fStack_180 = (float)uVal_43;
      uStack_17c = (uint32_t)(uVal_43 >> 0x20);
      func_0x1806aa960(pFloat_45,pU64_42,sz_30);
      *(uint8_t *)((int64_t)pFloat_45 + sz_30) = 0;
      uVal_43 = CONCAT44(DAT_18083ca30._4_4_,(uint32_t)DAT_18083ca30);
      if (0xf < uVal_43) {
        lVal_39 = CONCAT44(DAT_18083ca18._4_4_,(float)DAT_18083ca18);
        uVal_31 = uVal_43 + 1;
        lVal_32 = lVal_39;
        if (0xfff < uVal_31) {
          lVal_32 = *(int64_t *)(lVal_39 + -8);
          if (0x1f < (uint64_t)((lVal_39 + -8) - lVal_32)) goto LAB_1803ce3de;
          uVal_31 = uVal_43 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_32,uVal_31);
      }
      uRam000000018083ca24 = CONCAT13(uStack_189,CONCAT21(uStack_18b,uStack_18c));
      DAT_18083ca28 =
           CONCAT44(CONCAT13(uStack_181,CONCAT21(uStack_183,uStack_184)),
                    CONCAT13(uStack_185,CONCAT12(uStack_186,CONCAT11(uStack_187,uStack_188))));
      DAT_18083ca30._0_4_ = fStack_180;
      DAT_18083ca30._4_4_ = uStack_17c;
      DAT_18083ca18._0_4_ = local_198;
      DAT_18083ca18._4_4_ = (int)fStack_194;
      fRam000000018083ca20 = fStack_190;
      if (DAT_18083ef17 == '\x01') {
        uVal_33 = func_0x1800becb0();
        ch_27 = func_0x1800752a0(uVal_33);
        if (ch_27 == '\0') {
          local_198 = -1.600597e+31;
          fStack_194 = 2.32002e-14;
          uVal_33 = *(uint64_t *)(DAT_180840a58 + 0x648);
          pU64_42 = (uint *)func_0x1803d3280();
          uVal_26 = _UNK_1806c8d5c;
          uVal_25 = _UNK_1806c8d58;
          uVal_59 = _UNK_1806c8d54;
          uVal_61 = _DAT_1806c8d50;
          if (*(char *)((int64_t)pU64_42 + 0x41) == '\x01') {
            uVal_55 = pU64_42[1] ^ _UNK_1806c8d54;
            uVal_57 = pU64_42[2] ^ _UNK_1806c8d58;
            uVal_60 = pU64_42[3] ^ _UNK_1806c8d5c;
            *pU64_42 = *pU64_42 ^ _DAT_1806c8d50;
            pU64_42[1] = uVal_55;
            pU64_42[2] = uVal_57;
            pU64_42[3] = uVal_60;
            pU64_42[4] = pU64_42[4] ^ uVal_61;
            pU64_42[5] = pU64_42[5] ^ uVal_59;
            pU64_42[6] = pU64_42[6] ^ uVal_25;
            pU64_42[7] = pU64_42[7] ^ uVal_26;
            auArr_10._4_4_ = pU64_42[9] ^ uVal_59;
            auArr_10._0_4_ = pU64_42[8] ^ uVal_61;
            auArr_10._8_4_ = pU64_42[10] ^ uVal_25;
            auArr_10._12_4_ = pU64_42[0xb] ^ uVal_26;
            *(uint8_t (*)[16])(pU64_42 + 8) = auArr_10;
            auArr_11._4_4_ = pU64_42[0xd] ^ uVal_59;
            auArr_11._0_4_ = pU64_42[0xc] ^ uVal_61;
            auArr_11._8_4_ = pU64_42[0xe] ^ uVal_25;
            auArr_11._12_4_ = pU64_42[0xf] ^ uVal_26;
            *(uint8_t (*)[16])(pU64_42 + 0xc) = auArr_11;
            *(byte *)(pU64_42 + 0x10) = *(byte *)(pU64_42 + 0x10) ^ 0xcb;
            *(uint8_t *)((int64_t)pU64_42 + 0x41) = 0;
          }
          func_0x180001060(&local_198,pU64_42);
          func_0x1802a7ea0(uVal_33,&local_198);
          func_0x180001e70(&local_198);
          uVal_33 = func_0x1803d3370();
          func_0x1804415d0(uVal_33);
          func_0x180001060(&local_198,uVal_33);
          func_0x180071c30(&local_198);
          func_0x180001e70(&local_198);
        }
LAB_1803cde23:
        DAT_18083ef17 = '\0';
      }
      goto LAB_1803ccde0;
    }
  }
  func_0x18007ba70();
LAB_1803ce4a2:
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  (*fnPtr_7)();
  return;
}

// Unwind@1803ce4b0
void Unwind_1803ce4b0(void)
{
  func_0x180672f60(&DAT_180840638);
  return;
}

// Unwind@1803ce590
void Unwind_1803ce590(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12b78) = 0;
  return;
}

// Unwind@1803ce680
void Unwind_1803ce680(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12bac) = 0;
  return;
}

// Unwind@1803ce770
void Unwind_1803ce770(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12b58) = 0;
  return;
}

// Unwind@1803ce860
void Unwind_1803ce860(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12c24) = 0;
  return;
}

// Unwind@1803ce950
void Unwind_1803ce950(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12b18) = 0;
  return;
}

// Unwind@1803cea40
void Unwind_1803cea40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12b00) = 0;
  return;
}

// Unwind@1803ceb30
void Unwind_1803ceb30(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12ad8) = 0;
  return;
}

// Unwind@1803cec20
void Unwind_1803cec20(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12ac4) = 0;
  return;
}

// Unwind@1803ced10
void Unwind_1803ced10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x129ec) = 0;
  return;
}

// Unwind@1803cee00
void Unwind_1803cee00(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x129b4) = 0;
  return;
}

// Unwind@1803ceef0
void Unwind_1803ceef0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1299c) = 0;
  return;
}

// Unwind@1803cefe0
void Unwind_1803cefe0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cf0c0
void Unwind_1803cf0c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cf1a0
void Unwind_1803cf1a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cf280
void Unwind_1803cf280(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x160);
  return;
}

// Unwind@1803cf360
void Unwind_1803cf360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803cf440
void Unwind_1803cf440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cf520
void Unwind_1803cf520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1803cf600
void Unwind_1803cf600(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cf6e0
void Unwind_1803cf6e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803cf7c0
void Unwind_1803cf7c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cf8a0
void Unwind_1803cf8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cf980
void Unwind_1803cf980(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803cfa60
void Unwind_1803cfa60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803cfb40
void Unwind_1803cfb40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803cfc20
void Unwind_1803cfc20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cfd00
void Unwind_1803cfd00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cfde0
void Unwind_1803cfde0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cfec0
void Unwind_1803cfec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803cffa0
void Unwind_1803cffa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803d0080
void Unwind_1803d0080(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803d0160
void Unwind_1803d0160(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803d0240
void Unwind_1803d0240(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803d0320
void Unwind_1803d0320(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803d0400
void Unwind_1803d0400(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803d04e0
void Unwind_1803d04e0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803d05c0
void Unwind_1803d05c0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803d06a0
void Unwind_1803d06a0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803d0780
void Unwind_1803d0780(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0xe0);
  return;
}

// Unwind@1803d0860
void Unwind_1803d0860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d0940
void Unwind_1803d0940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d0a20
void Unwind_1803d0a20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d0b00
void Unwind_1803d0b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d0be0
void Unwind_1803d0be0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d0cc0
void Unwind_1803d0cc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d0da0
void Unwind_1803d0da0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d0e80
void Unwind_1803d0e80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d0f60
void Unwind_1803d0f60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d1040
void Unwind_1803d1040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@1803d1120
void Unwind_1803d1120(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0xb0);
  return;
}

// func_0x1803d1200
uint64_t * func_0x1803d1200(uint64_t *param_1,char *param_2)
{
  size_t sz_1;
  uint64_t *pU64_2;
  
  sz_1 = strlen(param_2);
  if ((uint64_t)param_1[3] < sz_1) {
    pU64_2 = (uint64_t *)func_0x18007bba0(param_1,sz_1);
    return pU64_2;
  }
  pU64_2 = param_1;
  if (0xf < (uint64_t)param_1[3]) {
    pU64_2 = (uint64_t *)*param_1;
  }
  param_1[2] = sz_1;
  func_0x1806aa960(pU64_2,param_2,sz_1);
  *(uint8_t *)((int64_t)pU64_2 + sz_1) = 0;
  return param_1;
}

// func_0x1803d1270
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803d1270(void)
{
  float fVal_1;
  uint8_t auArr_2 [16];
  byte bFlag_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint64_t uVal_8;
  uint8_t auArr_9 [16];
  uint uVal_10;
  uint32_t *pU64_11;
  uint64_t *pU64_12;
  uint64_t *pU64_13;
  char ch_14;
  uint64_t *pU64_15;
  uint32_t *pU64_16;
  uint64_t *pU64_17;
  char ch_18;
  uint32_t *pU64_19;
  bool bFlag_20;
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
  float fVal_33;
  uint8_t auArr_34 [16];
  uint8_t auArr_35 [16];
  uint uVal_36;
  uint8_t auArr_37 [16];
  uint8_t auArr_38 [16];
  uint8_t auArr_39 [16];
  uint8_t auArr_40 [16];
  uint8_t auArr_41 [16];
  uint8_t auArr_42 [16];
  uint8_t auArr_43 [16];
  uint uVal_48;
  uint8_t auArr_44 [16];
  uint8_t auArr_46 [16];
  uint8_t auArr_47 [16];
  uint8_t auArr_49 [16];
  uint8_t auArr_50 [16];
  uint8_t auArr_51 [16];
  uint8_t auArr_52 [16];
  uint8_t auArr_53 [16];
  uint8_t auArr_54 [16];
  uint8_t auArr_55 [16];
  int iVal_56;
  int iVal_57;
  float in_xmmTmp2_Dd;
  uint8_t auArr_45 [16];
  
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840648) && (func_0x180672ec0(&DAT_180840648), DAT_180840648 == -1)) {
    DAT_180840640 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840648);
  }
  _DAT_18083cb60 = *(uint32_t *)(DAT_180840640 + 0x178);
  uRam000000018083cb64 = *(uint32_t *)(DAT_180840640 + 0x17c);
  uRam000000018083cb68 = *(uint32_t *)(DAT_180840640 + 0x180);
  uRam000000018083cb6c = *(uint32_t *)(DAT_180840640 + 0x184);
  _DAT_18083cb50 = *(uint32_t *)(DAT_180840640 + 0x188);
  uRam000000018083cb54 = *(uint32_t *)(DAT_180840640 + 0x18c);
  uRam000000018083cb58 = *(uint32_t *)(DAT_180840640 + 400);
  DAT_18083cb5c = *(uint32_t *)(DAT_180840640 + 0x194);
  _DAT_18083cb80 = *(uint8_t (*)[16])(DAT_180840640 + 0x148);
  auArr_9 = _DAT_18083cb80;
  _DAT_18083cb70 = *(uint32_t *)(DAT_180840640 + 0x158);
  uRam000000018083cb74 = *(uint32_t *)(DAT_180840640 + 0x15c);
  uRam000000018083cb78 = *(uint32_t *)(DAT_180840640 + 0x160);
  uRam000000018083cb7c = *(uint32_t *)(DAT_180840640 + 0x164);
  bFlag_3 = *(byte *)(DAT_180840640 + 0x1ba);
  pU64_15 = (uint64_t *)(DAT_180840640 + 0x1bc);
  pU64_19 = (uint32_t *)(DAT_180840640 + 0x1cc);
  pU64_12 = (uint64_t *)(DAT_180840640 + 500);
  pU64_11 = (uint32_t *)(DAT_180840640 + 0x168);
  bFlag_20 = bFlag_3 == 0;
  if (bFlag_20) {
    pU64_15 = &DAT_18083cb80;
  }
  _DAT_18083ca78 = *(uint32_t *)(pU64_15 + 1);
  DAT_18083ca80._0_4_ = *(uint32_t *)pU64_15;
  DAT_18083ca80._4_4_ = *(uint32_t *)((int64_t)pU64_15 + 4);
  DAT_18083ca88 = _DAT_18083ca78;
  uRam000000018083ca8c = *(uint32_t *)((int64_t)pU64_15 + 0xc);
  if (bFlag_20) {
    pU64_19 = (uint32_t *)&DAT_18083cb70;
  }
  _DAT_18083ca60 = *pU64_19;
  uRam000000018083ca64 = pU64_19[1];
  uRam000000018083ca68 = pU64_19[2];
  uRam000000018083ca6c = pU64_19[3];
  pU64_19 = (uint32_t *)(DAT_180840640 + 0x1dc);
  if (bFlag_20) {
    pU64_19 = pU64_11;
  }
  iVal_56 = *(int *)(DAT_180840640 + 0x1f0);
  ch_18 = (char)iVal_56;
  if (ch_18 == '\0') {
    pU64_12 = &DAT_18083cb80;
  }
  pU64_16 = (uint32_t *)(DAT_180840640 + 0x204);
  _DAT_18083cbd8 = *(uint32_t *)(pU64_12 + 1);
  if (ch_18 == '\0') {
    pU64_16 = (uint32_t *)&DAT_18083cb70;
  }
  DAT_18083cbe0._0_4_ = *(uint32_t *)pU64_12;
  DAT_18083cbe0._4_4_ = *(uint32_t *)((int64_t)pU64_12 + 4);
  DAT_18083cbe8 = _DAT_18083cbd8;
  DAT_18083cbec = *(uint32_t *)((int64_t)pU64_12 + 0xc);
  _DAT_18083cbc0 = *pU64_16;
  uRam000000018083cbc4 = pU64_16[1];
  uRam000000018083cbc8 = pU64_16[2];
  uRam000000018083cbcc = pU64_16[3];
  pU64_17 = (uint64_t *)(DAT_180840640 + 0x22c);
  bFlag_20 = *(char *)(DAT_180840640 + 0x228) == '\0';
  if (bFlag_20) {
    pU64_17 = &DAT_18083cb80;
  }
  pU64_16 = (uint32_t *)(DAT_180840640 + 0x23c);
  if (bFlag_20) {
    pU64_16 = (uint32_t *)&DAT_18083cb70;
  }
  _DAT_18083cb40 = *(uint32_t *)pU64_17;
  uRam000000018083cb44 = *(uint32_t *)((int64_t)pU64_17 + 4);
  uRam000000018083cb48 = *(uint32_t *)(pU64_17 + 1);
  uRam000000018083cb4c = *(uint32_t *)((int64_t)pU64_17 + 0xc);
  _DAT_18083cb30 = *pU64_16;
  uRam000000018083cb34 = pU64_16[1];
  uRam000000018083cb38 = pU64_16[2];
  uRam000000018083cb3c = pU64_16[3];
  iVal_57 = *(int *)(DAT_180840640 + 0x250);
  pU64_13 = (uint64_t *)(DAT_180840640 + 0x254);
  ch_14 = (char)iVal_57;
  if (ch_14 == '\0') {
    pU64_13 = &DAT_18083cb80;
  }
  pU64_16 = (uint32_t *)(DAT_180840640 + 0x264);
  if (ch_14 == '\0') {
    pU64_16 = (uint32_t *)&DAT_18083cb70;
  }
  DAT_18083cb20._0_4_ = *(uint32_t *)pU64_13;
  DAT_18083cb20._4_4_ = *(uint32_t *)((int64_t)pU64_13 + 4);
  DAT_18083cb28 = *(uint32_t *)(pU64_13 + 1);
  DAT_18083cb2c = *(uint32_t *)((int64_t)pU64_13 + 0xc);
  _DAT_18083caf0 = *pU64_16;
  uRam000000018083caf4 = pU64_16[1];
  uRam000000018083caf8 = pU64_16[2];
  uRam000000018083cafc = pU64_16[3];
  _DAT_18083cad0 = *(uint8_t (*)[16])(DAT_180840640 + 0x278);
  auArr_44._8_8_ = 0;
  auArr_44._0_8_ = *(uint64_t *)(DAT_180840640 + 0x280);
  _DAT_18083cae0 = *(uint8_t (*)[16])(DAT_180840640 + 0x288);
  auArr_39._8_8_ = 0;
  auArr_39._0_8_ = *(uint64_t *)(DAT_180840640 + 0x290);
  auArr_2 = *(uint8_t (*)[16])(DAT_180840640 + 0x298);
  _DAT_18083cba4 = SUB164(_DAT_18083cb80,0);
  _DAT_18083cba8 = *(uint32_t *)(DAT_180840640 + 0x14c);
  _DAT_18083cbac = extractps(_DAT_18083cb80,2);
  auRam000000018083cac4 = auArr_2._4_12_;
  auArr_53._8_8_ = 0;
  auArr_53._0_8_ = *pU64_15;
  auArr_37._8_8_ = 0;
  auArr_37._0_8_ = DAT_18083cb80;
  uVal_10 = (uint)bFlag_3;
  auArr_41._0_4_ = uVal_10 << 0x1f;
  auArr_41._4_4_ = uVal_10 << 0x1f;
  auArr_41._8_4_ = uVal_10 << 0x1f;
  auArr_41._12_4_ = uVal_10 << 0x1f;
  auArr_40._8_8_ = 0;
  auArr_40._0_8_ = DAT_18083cb80;
  auArr_41 = blendvps(auArr_40,auArr_53,auArr_41);
  _DAT_18083cbac = CONCAT44(*(uint32_t *)(DAT_180840640 + 0x168),_DAT_18083cbac);
  _DAT_18083ca70 = auArr_41._0_8_;
  if (bFlag_3 == 0) {
    _DAT_18083ca78 = DAT_18083cb88;
  }
  pU64_16 = (uint32_t *)(DAT_180840640 + 0x214);
  _DAT_18083ca7c = *pU64_19;
  auArr_42._8_8_ = 0;
  auArr_42._0_8_ = *pU64_12;
  auArr_21._0_4_ = iVal_56 << 0x1f;
  auArr_21._4_4_ = iVal_56 << 0x1f;
  auArr_21._8_4_ = iVal_56 << 0x1f;
  auArr_21._12_4_ = iVal_56 << 0x1f;
  auArr_49._8_8_ = 0;
  auArr_49._0_8_ = DAT_18083cb80;
  auArr_41 = blendvps(auArr_49,auArr_42,auArr_21);
  _DAT_18083cbd0 = auArr_41._0_8_;
  if (ch_18 == '\0') {
    pU64_16 = pU64_11;
    _DAT_18083cbd8 = DAT_18083cb88;
  }
  DAT_18083cbdc = *pU64_16;
  auArr_43._8_8_ = 0;
  auArr_43._0_8_ = *pU64_13;
  auArr_22._0_4_ = iVal_57 << 0x1f;
  auArr_22._4_4_ = iVal_57 << 0x1f;
  auArr_22._8_4_ = iVal_57 << 0x1f;
  auArr_22._12_4_ = iVal_57 << 0x1f;
  auArr_41 = blendvps(auArr_37,auArr_43,auArr_22);
  _DAT_18083cb00 = auArr_41._0_8_;
  if (ch_14 != '\0') {
    pU64_11 = (uint32_t *)(DAT_180840640 + 0x274);
    DAT_18083cb88 = *(uint32_t *)(pU64_13 + 1);
  }
  _DAT_18083cb08 = DAT_18083cb88;
  DAT_18083cb0c = *pU64_11;
  fVal_1 = *(float *)(DAT_180840640 + 0x2a8);
  auArr_52._0_4_ = SUB164(_DAT_18083cad0,0) * fVal_1;
  auArr_52._4_4_ = SUB164(_DAT_18083cad0,4) * fVal_1;
  auArr_52._8_4_ = SUB164(_DAT_18083cad0,8) * 0.0;
  auArr_52._12_4_ = SUB164(_DAT_18083cad0,0xc) * 0.0;
  auArr_23._4_4_ = -(uint)(DAT_1806b28f0._4_4_ < auArr_52._4_4_);
  auArr_23._0_4_ = -(uint)((float)DAT_1806b28f0 < auArr_52._0_4_);
  auArr_23._8_4_ = -(uint)(_UNK_1806b28f8 < auArr_52._12_4_);
  auArr_23._12_4_ = -(uint)(_UNK_1806b28fc < in_xmmTmp2_Dd);
  auArr_41 = roundps(auArr_43,auArr_52,9);
  auArr_50._0_4_ = auArr_52._0_4_ - auArr_41._0_4_;
  auArr_50._4_4_ = auArr_52._4_4_ - auArr_41._4_4_;
  auArr_50._8_4_ = auArr_52._8_4_ - auArr_41._8_4_;
  auArr_50._12_4_ = auArr_52._12_4_ - auArr_41._12_4_;
  auArr_53 = blendvps(auArr_52,auArr_50,auArr_23);
  auArr_24._4_4_ = -(uint)(auArr_53._4_4_ < 0.0);
  auArr_24._0_4_ = -(uint)(auArr_53._0_4_ < 0.0);
  auArr_24._8_4_ = -(uint)(auArr_53._8_4_ < 0.0);
  auArr_24._12_4_ = -(uint)(auArr_53._12_4_ < in_xmmTmp2_Dd);
  auArr_41 = roundps(auArr_50,auArr_53,10);
  auArr_7._4_4_ = (uint)(auArr_53._4_4_ - auArr_41._4_4_) ^ _UNK_1806af1a4;
  auArr_7._0_4_ = (uint)(auArr_53._0_4_ - auArr_41._0_4_) ^ _DAT_1806af1a0;
  auArr_7._8_4_ = (uint)(auArr_53._8_4_ - auArr_41._8_4_) ^ _UNK_1806af1a8;
  auArr_7._12_4_ = (uint)(auArr_53._12_4_ - auArr_41._12_4_) ^ _UNK_1806af1ac;
  auArr_41 = blendvps(auArr_53,auArr_7,auArr_24);
  uRam000000018083caa4 = auArr_41._4_4_;
  uVal_8 = extractps(_DAT_18083cad0,3);
  _DAT_18083caac = (uint32_t)uVal_8;
  auArr_41 = insertps(auArr_39,auArr_44,0x1c);
  auArr_34._0_4_ = auArr_41._0_4_ * fVal_1;
  auArr_34._4_4_ = auArr_41._4_4_ * fVal_1;
  auArr_34._8_4_ = auArr_41._8_4_ * 0.0;
  auArr_34._12_4_ = auArr_41._12_4_ * 0.0;
  auArr_25._4_4_ = -(uint)(DAT_1806b28f0._4_4_ < auArr_34._4_4_);
  auArr_25._0_4_ = -(uint)((float)DAT_1806b28f0 < auArr_34._0_4_);
  auArr_25._8_4_ = -(uint)(_UNK_1806b28f8 < auArr_34._12_4_);
  auArr_25._12_4_ = -(uint)(_UNK_1806b28fc < in_xmmTmp2_Dd);
  auArr_41 = roundps(auArr_44,auArr_34,9);
  auArr_51._0_4_ = auArr_34._0_4_ - auArr_41._0_4_;
  auArr_51._4_4_ = auArr_34._4_4_ - auArr_41._4_4_;
  auArr_51._8_4_ = auArr_34._8_4_ - auArr_41._8_4_;
  auArr_51._12_4_ = auArr_34._12_4_ - auArr_41._12_4_;
  auArr_35 = blendvps(auArr_34,auArr_51,auArr_25);
  fVal_33 = auArr_35._4_4_;
  auArr_26._4_4_ = fVal_33;
  auArr_26._0_4_ = (uint)fVal_33;
  uVal_36 = auArr_35._12_4_;
  auArr_26._8_4_ = uVal_36;
  auArr_26._12_4_ = uVal_36;
  uVal_48 = auArr_35._8_4_;
  iVal_56 = -(uint)(auArr_35._0_4_ < 0.0);
  iVal_57 = -(uint)(fVal_33 < 0.0);
  auArr_46._4_4_ = iVal_57;
  auArr_46._0_4_ = iVal_56;
  auArr_46._8_4_ = iVal_57;
  auArr_46._12_4_ = iVal_57;
  auArr_45._8_8_ = auArr_46._8_8_;
  auArr_45._4_4_ = iVal_56;
  auArr_45._0_4_ = iVal_56;
  uVal_10 = movmskpd((int)DAT_180840640,auArr_45);
  if ((uVal_10 & 2) != 0) {
    auArr_41 = roundss(ZEXT816(0),auArr_26,10);
    auArr_26._0_4_ = (uint)(fVal_33 - auArr_41._0_4_) ^ _DAT_1806af1a0;
    auArr_26._4_4_ = 0;
    auArr_26._8_4_ = uVal_36 ^ _UNK_1806af1a8;
    auArr_26._12_4_ = uVal_36 ^ _UNK_1806af1ac;
  }
  _DAT_18083caa8 = auArr_26._0_4_;
  if ((uVal_10 & 1) != 0) {
    auArr_41 = roundss(ZEXT816(0),auArr_35,10);
    auArr_35._0_4_ = (uint)(auArr_35._0_4_ - auArr_41._0_4_) ^ _DAT_1806af1a0;
    auArr_35._4_4_ = 0;
    auArr_35._8_4_ = uVal_48 ^ _UNK_1806af1a8;
    auArr_35._12_4_ = uVal_36 ^ _UNK_1806af1ac;
  }
  auArr_47._0_4_ = SUB164(_DAT_18083cae0,0) * fVal_1;
  auArr_47._4_4_ = SUB164(_DAT_18083cae0,4) * fVal_1;
  auArr_47._8_4_ = SUB164(_DAT_18083cae0,8) * 0.0;
  auArr_47._12_4_ = SUB164(_DAT_18083cae0,0xc) * 0.0;
  auArr_27._4_4_ = -(uint)(DAT_1806b28f0._4_4_ < auArr_47._4_4_);
  auArr_27._0_4_ = -(uint)((float)DAT_1806b28f0 < auArr_47._0_4_);
  auArr_27._8_4_ = -(uint)(_UNK_1806b28f8 < auArr_47._12_4_);
  auArr_27._12_4_ = -(uint)(_UNK_1806b28fc < in_xmmTmp2_Dd);
  auArr_53 = roundps(auArr_51,auArr_47,9);
  auArr_54._0_4_ = auArr_47._0_4_ - auArr_53._0_4_;
  auArr_54._4_4_ = auArr_47._4_4_ - auArr_53._4_4_;
  auArr_54._8_4_ = auArr_47._8_4_ - auArr_53._8_4_;
  auArr_54._12_4_ = auArr_47._12_4_ - auArr_53._12_4_;
  auArr_41 = blendvps(auArr_47,auArr_54,auArr_27);
  auArr_28._4_4_ = -(uint)(auArr_41._4_4_ < 0.0);
  auArr_28._0_4_ = -(uint)(auArr_41._0_4_ < 0.0);
  auArr_28._8_4_ = -(uint)(auArr_41._8_4_ < 0.0);
  auArr_28._12_4_ = -(uint)(auArr_41._12_4_ < in_xmmTmp2_Dd);
  auArr_53 = roundps(auArr_53,auArr_41,10);
  auArr_55._0_4_ = (uint)(auArr_41._0_4_ - auArr_53._0_4_) ^ _DAT_1806af1a0;
  auArr_55._4_4_ = (uint)(auArr_41._4_4_ - auArr_53._4_4_) ^ _UNK_1806af1a4;
  auArr_55._8_4_ = (uint)(auArr_41._8_4_ - auArr_53._8_4_) ^ _UNK_1806af1a8;
  auArr_55._12_4_ = (uint)(auArr_41._12_4_ - auArr_53._12_4_) ^ _UNK_1806af1ac;
  auArr_41 = blendvps(auArr_41,auArr_55,auArr_28);
  _DAT_18083cab0 = auArr_41._0_4_;
  uRam000000018083cab4 = auArr_41._4_4_;
  _DAT_18083cab8 = auArr_35._0_4_;
  uVal_8 = extractps(_DAT_18083cae0,3);
  _DAT_18083cabc = (uint32_t)uVal_8;
  _DAT_18083cac0 = (uint32_t)((uint64_t)uVal_8 >> 0x20);
  fVal_33 = *(float *)(DAT_180840640 + 0x2a0) * fVal_1;
  auArr_41 = roundss(ZEXT816(0),ZEXT416((uint)fVal_33),9);
  auArr_53 = blendvps(ZEXT416((uint)fVal_33),ZEXT416((uint)(fVal_33 - auArr_41._0_4_)),
                     ZEXT416(-(uint)(DAT_1806b26b4 < fVal_33)));
  auArr_41 = roundss(ZEXT816(0),auArr_53,10);
  auArr_29._4_12_ = auArr_53._4_12_;
  auArr_29._0_4_ = -(uint)(auArr_53._0_4_ < 0.0);
  auArr_4._4_4_ = auArr_53._4_4_ ^ _UNK_1806af1a4;
  auArr_4._0_4_ = (uint)(auArr_53._0_4_ - auArr_41._0_4_) ^ _DAT_1806af1a0;
  auArr_4._8_4_ = auArr_53._8_4_ ^ _UNK_1806af1a8;
  auArr_4._12_4_ = auArr_53._12_4_ ^ _UNK_1806af1ac;
  auArr_53 = blendvps(auArr_53,auArr_4,auArr_29);
  auArr_38._0_4_ = fVal_1 * auArr_2._0_4_;
  auArr_38._4_4_ = fVal_1 * auArr_2._4_4_;
  auArr_38._8_4_ = auArr_2._8_4_ * 0.0;
  auArr_38._12_4_ = auArr_2._12_4_ * 0.0;
  auArr_32._0_8_ =
       CONCAT44(-(uint)(DAT_1806b28f0._4_4_ < auArr_38._4_4_),
                -(uint)((float)DAT_1806b28f0 < auArr_38._0_4_));
  auArr_32._8_4_ = -(uint)(_UNK_1806b28f8 < auArr_38._12_4_);
  auArr_32._12_4_ = -(uint)(_UNK_1806b28fc < in_xmmTmp2_Dd);
  auArr_41 = roundps(auArr_29,auArr_38,9);
  auArr_30._8_4_ = -(uint)(_UNK_1806b28f8 < auArr_38._12_4_);
  auArr_30._0_8_ = auArr_32._0_8_;
  auArr_30._12_4_ = -(uint)(_UNK_1806b28fc < in_xmmTmp2_Dd);
  auArr_5._4_4_ = auArr_38._4_4_ - auArr_41._4_4_;
  auArr_5._0_4_ = auArr_38._0_4_ - auArr_41._0_4_;
  auArr_5._8_4_ = auArr_38._8_4_ - auArr_41._8_4_;
  auArr_5._12_4_ = auArr_38._12_4_ - auArr_41._12_4_;
  auArr_39 = blendvps(auArr_38,auArr_5,auArr_30);
  auArr_31._4_4_ = -(uint)(auArr_39._4_4_ < 0.0);
  auArr_31._0_4_ = -(uint)(auArr_39._0_4_ < 0.0);
  auArr_31._8_4_ = -(uint)(auArr_39._8_4_ < 0.0);
  auArr_31._12_4_ = -(uint)(auArr_39._12_4_ < in_xmmTmp2_Dd);
  auArr_41 = roundps(auArr_32,auArr_39,10);
  auArr_6._4_4_ = (uint)(auArr_39._4_4_ - auArr_41._4_4_) ^ _UNK_1806af1a4;
  auArr_6._0_4_ = (uint)(auArr_39._0_4_ - auArr_41._0_4_) ^ _DAT_1806af1a0;
  auArr_6._8_4_ = (uint)(auArr_39._8_4_ - auArr_41._8_4_) ^ _UNK_1806af1a8;
  auArr_6._12_4_ = (uint)(auArr_39._12_4_ - auArr_41._12_4_) ^ _UNK_1806af1ac;
  auArr_41 = blendvps(auArr_39,auArr_6,auArr_31);
  _DAT_18083ca90 = auArr_41._0_8_;
  _DAT_18083ca98 = auArr_53._0_4_;
  uVal_8 = extractps(auArr_2,3);
  _DAT_18083ca9c = (uint32_t)uVal_8;
  _DAT_18083caa0 = (uint32_t)((uint64_t)uVal_8 >> 0x20);
  _DAT_18083cb80 = auArr_9;
  return;
}

// Unwind@1803d17e0
void Unwind_1803d17e0(void)
{
  func_0x180672f60(&DAT_180840648);
  return;
}

// func_0x1803d1880
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803d1880(void)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  int64_t **ptr2_Long_4;
  char ch_5;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  int64_t **ptr2_Long_9;
  int64_t **ptr2_Long_10;
  bool bFlag_11;
  float fVal_12;
  uint64_t uVal_13;
  float fVal_15;
  uint8_t auArr_14 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float fVal_16;
  float fVal_18;
  uint8_t auArr_17 [16];
  uint8_t auArr_19 [16];
  uint8_t auArr_21 [16];
  uint8_t auArr_23 [16];
  uint8_t auArr_24 [16];
  uint8_t auArr_25 [16];
  float fVal_26;
  float fVal_27;
  int iVal_28;
  int iVal_29;
  uint32_t uVal_30;
  uint64_t local_a8;
  float fStack_a0;
  float fStack_9c;
  uint64_t local_98;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_70;
  uint8_t auArr_20 [16];
  uint8_t auArr_22 [16];
  
  local_70 = 0xfffffffffffffffe;
  if (DAT_18084075c == '\x01') {
    DAT_18084075c = '\0';
    DAT_180840728 = (int64_t *)0x0;
    DAT_180840568 = 0;
    DAT_18084060f = DAT_1808405fc;
    DAT_1808405fc = 0;
  }
  else {
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_1808407b8) && (func_0x180672ec0(&DAT_1808407b8), DAT_1808407b8 == -1))
    {
      DAT_1808407b0 = func_0x180134bf0(&DAT_1808400a0);
      _Init_thread_footer(&DAT_1808407b8);
    }
    uVal_6 = func_0x1800cf950();
    auArr_14._4_4_ = 0;
    auArr_14._0_4_ = *(uint *)(DAT_1808407b0 + 0x1b0);
    auArr_14._8_4_ = *(uint *)(DAT_1808407b0 + 0x1b0);
    auArr_14._12_4_ = 0;
    auArr_14 = insertps(auArr_14,*(uint32_t *)(DAT_1808407b0 + 0x10c),0x30);
    lVal_1 = *(int64_t *)(DAT_180840a58 + 0x648);
    local_88 = *(uint64_t *)(DAT_1808407b0 + 0x1a8);
    uStack_80 = auArr_14._8_8_;
    func_0x180107830(uVal_6,0x602,0,0);
    func_0x180108220(uVal_6,&local_88);
    func_0x180107cc0(uVal_6);
    func_0x180107cc0(uVal_6);
    func_0x180107cc0(uVal_6);
    func_0x180107cc0(uVal_6);
    func_0x180107cc0(uVal_6);
    func_0x180107cc0(uVal_6);
    if (DAT_18084075d == '\x01') {
      local_98 = (uint8_t *)CONCAT44(_UNK_1806b2884,_DAT_1806b2880);
      uStack_90 = _UNK_1806b2888;
      uStack_8c = _UNK_1806b288c;
      auArr_14 = insertps(ZEXT416((uint)DAT_1806b5bf0),
                         ZEXT416((uint)(*(float *)(lVal_1 + 0x54) * DAT_1806aeae4)),0x10);
      auArr_14 = insertps(auArr_14,*(uint32_t *)(lVal_1 + 0x50),0x20);
      fStack_a0 = auArr_14._8_4_ + _UNK_1806c8dd8;
      fStack_9c = auArr_14._4_4_ + _UNK_1806c8ddc;
      local_a8 = CONCAT44(auArr_14._4_4_ + _UNK_1806c8dd4,auArr_14._0_4_ + _DAT_1806c8dd0);
      func_0x1800d2a00(&local_a8,&local_98);
    }
    if (DAT_18084075e == '\x01') {
      local_98 = (uint8_t *)CONCAT44(_UNK_1806b2884,_DAT_1806b2880);
      uStack_90 = _UNK_1806b2888;
      uStack_8c = _UNK_1806b288c;
      fVal_12 = (float)*(uint64_t *)(lVal_1 + 0x50) * (float)DAT_1806c3cd0;
      fStack_a0 = fVal_12 + _UNK_1806c8de8;
      fStack_9c = (float)((uint64_t)*(uint64_t *)(lVal_1 + 0x50) >> 0x20) * DAT_1806c3cd0._4_4_ +
                  _UNK_1806c8dec;
      local_a8 = CONCAT44(DAT_1806b5bf0 + _UNK_1806c8de4,fVal_12 + _DAT_1806c8de0);
      func_0x1800d2a00(&local_a8,&local_98);
    }
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_1808407e0) && (func_0x180672ec0(&DAT_1808407e0), DAT_1808407e0 == -1))
    {
      uVal_13 = func_0x1803d64b0();
      uVal_13 = func_0x1803d6530(uVal_13);
      func_0x180001060(&DAT_1808407c0,uVal_13);
      func_0x1806731d0(&LAB_1803d6550);
      _Init_thread_footer(&DAT_1808407e0);
    }
    uVal_13 = func_0x1800cd3b0(&DAT_1808407c0);
    auArr_24._8_4_ = (int)extraout_XMM0_Qb;
    auArr_24._0_8_ = uVal_13;
    auArr_24._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auArr_25._0_8_ = func_0x1800cfa00();
    auArr_25._8_8_ = extraout_XMM0_Qb_00;
    auArr_25 = insertps(auArr_24,auArr_25,0x10);
    fVal_26 = (float)*(uint64_t *)(lVal_1 + 0x50) * (float)DAT_1806b28a0 -
             (float)DAT_1806b28a0 * auArr_25._0_4_;
    fVal_27 = (float)((uint64_t)*(uint64_t *)(lVal_1 + 0x50) >> 0x20) * DAT_1806b28a0._4_4_ -
             DAT_1806b28a0._4_4_ * auArr_25._4_4_;
    local_98 = &DAT_28d0f803f34a0611;
    fVal_12 = (float)DAT_1806c8e00 + fVal_26;
    fVal_15 = (float)((uint64_t)DAT_1806c8e00 >> 0x20) + fVal_27;
    auArr_19._0_4_ = (float)DAT_180840f68;
    auArr_19._4_4_ = (float)DAT_180840f6c;
    auArr_19._8_8_ = 0;
    auArr_17._8_8_ = 0;
    auArr_17._0_8_ = *(uint64_t *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x48);
    auArr_14 = divps(auArr_19,auArr_17);
    fVal_16 = (float)*(uint64_t *)(lVal_1 + 0x50) * auArr_14._0_4_;
    fVal_18 = (float)((uint64_t)*(uint64_t *)(lVal_1 + 0x50) >> 0x20) * auArr_14._4_4_;
    iVal_28 = -(uint)(fVal_12 < fVal_16);
    iVal_29 = -(uint)(fVal_15 < fVal_18);
    auArr_21._4_4_ = iVal_29;
    auArr_21._0_4_ = iVal_28;
    auArr_21._8_4_ = iVal_29;
    auArr_21._12_4_ = iVal_29;
    auArr_20._8_8_ = auArr_21._8_8_;
    auArr_20._4_4_ = iVal_28;
    auArr_20._0_4_ = iVal_28;
    iVal_28 = movmskpd((int)*(int64_t *)(DAT_180840a58 + 0x648),auArr_20);
    if (iVal_28 == 3) {
      iVal_28 = -(uint)(fVal_16 < auArr_25._0_4_ + _DAT_1806c8df0 + fVal_12);
      iVal_29 = -(uint)(fVal_18 < auArr_25._4_4_ + _UNK_1806c8df4 + fVal_15);
      auArr_23._4_4_ = iVal_29;
      auArr_23._0_4_ = iVal_28;
      auArr_23._8_4_ = iVal_29;
      auArr_23._12_4_ = iVal_29;
      auArr_22._8_8_ = auArr_23._8_8_;
      auArr_22._4_4_ = iVal_28;
      auArr_22._0_4_ = iVal_28;
      movmskpd(3,auArr_22);
    }
    uVal_30 = 1;
    func_0x1800d2e40();
    uVal_13 = func_0x1800cf970();
    uVal_7 = func_0x1800cf950();
    uVal_8 = func_0x1800cf960();
    func_0x18011b260(uVal_8,uVal_7,uVal_13);
    local_98 = (uint8_t *)CONCAT44(_UNK_1806b2884,_DAT_1806b2880);
    uStack_90 = _UNK_1806b2888;
    uStack_8c = _UNK_1806b288c;
    local_a8 = CONCAT44(fVal_27,fVal_26);
    func_0x1800d00e0(&local_a8,&DAT_1808407c0,&local_98,DAT_1806b676c,0x3f800000,CONCAT44(uVal_30,3),1);
    func_0x1800cfa30();
    ptr2_Long_3 = DAT_1808400a0;
    fVal_12 = DAT_1806b26b4;
    ptr2_Long_9 = (int64_t **)*DAT_1808400a0;
    if (ptr2_Long_9 != DAT_1808400a0) {
      do {
        pLong_2 = ptr2_Long_9[5];
        ch_5 = (**(func_ptr_t *)(*pLong_2 + 0xe0))(pLong_2);
        if ((ch_5 != '\0') && (*(char *)(pLong_2 + 8) == '\x01')) {
          (**(func_ptr_t *)(*pLong_2 + 0x140))(pLong_2,1);
          if (pLong_2 == DAT_180840728) {
            func_0x180134880(DAT_180840728,&local_88);
            (**(func_ptr_t *)(*DAT_180840728 + 0x148))(DAT_180840728,&local_98);
            func_0x180107830(uVal_6,5,0,0);
            uVal_30 = 0x3f000000;
            func_0x1801081a0(uVal_6);
            func_0x180107cc0(uVal_6);
            func_0x180107cc0(uVal_6);
            func_0x180107cc0(uVal_6,(float)local_88 + (float)local_98 + fVal_12,
                          local_88._4_4_ + local_98._4_4_ + fVal_12,0,uVal_30);
            func_0x180107cc0(uVal_6,(float)local_88 + (float)local_98 + fVal_12);
            func_0x180107cc0(uVal_6);
            func_0x1800cf970();
            uVal_13 = func_0x1800cf950();
            uVal_7 = func_0x1800cf960();
            func_0x18011b260(uVal_7,uVal_13);
          }
          func_0x1800cfa30();
        }
        ptr2_Long_4 = (int64_t **)ptr2_Long_9[2];
        ptr2_Long_10 = ptr2_Long_9;
        if (*(char *)((int64_t)ptr2_Long_9[2] + 0x19) == '\0') {
          do {
            ptr2_Long_9 = ptr2_Long_4;
            ptr2_Long_4 = (int64_t **)*ptr2_Long_9;
          } while (*(char *)((int64_t)*ptr2_Long_9 + 0x19) == '\0');
        }
        else {
          do {
            ptr2_Long_9 = (int64_t **)ptr2_Long_10[1];
            if (*(char *)((int64_t)ptr2_Long_9 + 0x19) != '\0') break;
            bFlag_11 = ptr2_Long_10 == (int64_t **)ptr2_Long_9[2];
            ptr2_Long_10 = ptr2_Long_9;
          } while (bFlag_11);
        }
      } while (ptr2_Long_9 != ptr2_Long_3);
    }
    uVal_6 = func_0x1800576d0();
    ch_5 = func_0x18045fc60(0x25);
    if ((((ch_5 != '\0') && (ch_5 = func_0x18045fc60(0x27), ch_5 == '\0')) &&
        (ch_5 = func_0x180057f70(DAT_180840760,uVal_6,0xfa), ch_5 != '\0')) &&
       (ch_5 = func_0x180057f70(DAT_180840780,uVal_6,0x10), ch_5 != '\0')) {
      DAT_180840780 = uVal_6;
      func_0x1803d62b0(0x25);
    }
    ch_5 = func_0x18045fc60(0x26);
    if (((ch_5 != '\0') && (ch_5 = func_0x18045fc60(0x28), ch_5 == '\0')) &&
       ((ch_5 = func_0x180057f70(DAT_180840768,uVal_6,0xfa), ch_5 != '\0' &&
        (ch_5 = func_0x180057f70(DAT_180840788,uVal_6,0x10), ch_5 != '\0')))) {
      DAT_180840788 = uVal_6;
      func_0x1803d62b0(0x26);
    }
    ch_5 = func_0x18045fc60(0x27);
    if (((ch_5 != '\0') && (ch_5 = func_0x18045fc60(0x25), ch_5 == '\0')) &&
       ((ch_5 = func_0x180057f70(DAT_180840770,uVal_6,0xfa), ch_5 != '\0' &&
        (ch_5 = func_0x180057f70(DAT_180840790,uVal_6,0x10), ch_5 != '\0')))) {
      DAT_180840790 = uVal_6;
      func_0x1803d62b0(0x27);
    }
    ch_5 = func_0x18045fc60(0x28);
    if ((((ch_5 != '\0') && (ch_5 = func_0x18045fc60(0x26), ch_5 == '\0')) &&
        (ch_5 = func_0x180057f70(DAT_180840778,uVal_6,0xfa), ch_5 != '\0')) &&
       (ch_5 = func_0x180057f70(DAT_180840798,uVal_6,0x10), ch_5 != '\0')) {
      DAT_180840798 = uVal_6;
      func_0x1803d62b0(0x28);
    }
  }
  return;
}

// Unwind@1803d2080
void Unwind_1803d2080(void)
{
  func_0x180672f60(&DAT_1808407e0);
  return;
}

// Unwind@1803d20d0
void Unwind_1803d20d0(void)
{
  func_0x180672f60(&DAT_1808407b8);
  return;
}

// func_0x1803d2120
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803d2120(void)
{
  int64_t lVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12a20) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12a20) = 1;
    uVal_4 = _UNK_1806c8e1c;
    uVal_3 = _UNK_1806c8e18;
    uVal_2 = _UNK_1806c8e14;
    *(uint32_t *)(lVal_1 + 0x12a10) = _DAT_1806c8e10;
    *(uint32_t *)(lVal_1 + 0x12a14) = uVal_2;
    *(uint32_t *)(lVal_1 + 0x12a18) = uVal_3;
    *(uint32_t *)(lVal_1 + 0x12a1c) = uVal_4;
    func_0x180673140(&LAB_180431290);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12a10;
}

// func_0x1803d21a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803d21a0(uint8_t (*param_1)[16])
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
    *param_1 = auArr_2 ^ _DAT_1806c8e20;
  }
  return;
}

// func_0x1803d21f0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803d21f0(int param_1,char param_2,uint8_t *param_3)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t *******ptr7_U64_4;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
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
  uint32_t uVal_29;
  uint32_t uVal_30;
  uint32_t uVal_31;
  int64_t *pLong_32;
  char ch_33;
  int iVal_34;
  uint64_t uVal_35;
  uint8_t *pU64_36;
  uint8_t (*pArr16_37)[16];
  uint *pU64_38;
  int64_t lVal_39;
  uint64_t *******ptr7_U64_40;
  int64_t lVal_41;
  int64_t lVal_42;
  uint uVal_43;
  uint64_t *pU64_44;
  uint64_t *pU64_45;
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint64_t *******local_a8;
  uint64_t ******local_a0;
  uint64_t *******local_88 [2];
  uint64_t local_78;
  uint64_t local_70;
  uint64_t *******local_68;
  uint64_t ******local_60;
  int64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (DAT_18084028c != '\x01') {
    return;
  }
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840668) && (func_0x180672ec0(&DAT_180840668), DAT_180840668 == -1)) {
    DAT_180840660 = (int64_t *)func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840668);
  }
  if (param_2 == '\0') {
    return;
  }
  if (*(char *)(DAT_180840660 + 8) == '\0') {
    if (DAT_1808402d0 != '\x01') {
      return;
    }
    DAT_1808402d0 = 0;
    pU64_36 = _DAT_18083ca38;
    if (DAT_18083ca50 < 0x10) {
      pU64_36 = &DAT_18083ca38;
    }
    DAT_18083ca48 = 0;
    *pU64_36 = 0;
    return;
  }
  iVal_34 = (**(func_ptr_t *)(*DAT_180840660 + 0x20))();
  if ((param_1 == iVal_34) && (*(char *)((int64_t)DAT_180840660 + 0x81) == '\x01')) {
    *(uint8_t *)((int64_t)DAT_180840660 + 0x81) = 0;
    return;
  }
  *param_3 = 1;
  if (DAT_1808405fc == '\x04') {
    if (param_1 == 0x1b) {
      DAT_180840568 = 0;
      DAT_1808405fc = 0;
      DAT_18084060f = 4;
      DAT_180840728 = 0;
      return;
    }
    uVal_43 = param_1 - 0x25;
    if (3 < uVal_43) {
      return;
    }
    uVal_35 = func_0x1800576d0();
    (&DAT_180840760)[uVal_43] = uVal_35;
    (&DAT_180840780)[uVal_43] = 0;
    func_0x1803d62b0(param_1);
    return;
  }
  if ((DAT_1808402d8 != 0 & DAT_1808405a0) == 1) {
    if (param_1 != 0x1b) {
      if (DAT_180840560 == DAT_180840660) {
        if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x1c39c) < DAT_180840678) &&
           (func_0x180672ec0(&DAT_180840678), pLong_32 = DAT_180840660, DAT_180840678 == -1)) {
          pU64_38 = (uint *)func_0x1803d3b60();
          if (*(char *)(pU64_38 + 1) == '\x01') {
            *pU64_38 = *pU64_38 ^ 0xe3f5359d;
            *(uint8_t *)(pU64_38 + 1) = 0;
          }
          func_0x180001060(&local_68,pU64_38);
          lVal_39 = func_0x1801cf6b0(pLong_32,&local_68);
          func_0x180001e70(&local_68);
          DAT_180840670 = lVal_39;
          _Init_thread_footer(&DAT_180840678);
        }
        if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x1c39c) < DAT_180840688) &&
           (func_0x180672ec0(&DAT_180840688), DAT_180840688 == -1)) {
          uVal_35 = func_0x1803d3c80();
          uVal_35 = func_0x1803d3d10(uVal_35);
          func_0x180001060(&local_68,uVal_35);
          lVal_39 = func_0x1803d3be0(&local_68);
          func_0x180001e70(&local_68);
          DAT_180840680 = lVal_39;
          _Init_thread_footer(&DAT_180840688);
        }
        if ((DAT_1808402d8 == DAT_180840670) && (param_1 == DAT_18083ca10)) {
          local_68 = (uint64_t *******)&DAT_28d0f803f34a0611;
          uVal_35 = *(uint64_t *)(DAT_180840a58 + 0x648);
          local_c8 = PTR_DAT_1806b6f30._0_4_;
          uStack_c4 = PTR_DAT_1806b6f30._4_4_;
          uStack_c0 = _UNK_1806b6f38;
          uStack_bc = _UNK_1806b6f3c;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12c94
                       ) == '\0') {
            lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_39 + 0x12c94) = 1;
            *(uint8_t *)(lVal_39 + 0x12c93) = 1;
            uVal_31 = _UNK_1806cbb56;
            uVal_30 = _UNK_1806cbb52;
            uVal_29 = _UNK_1806cbb4e;
            *(uint32_t *)(lVal_39 + 0x12c3d) = _DAT_1806cbb4a;
            *(uint32_t *)(lVal_39 + 0x12c41) = uVal_29;
            *(uint32_t *)(lVal_39 + 0x12c45) = uVal_30;
            *(uint32_t *)(lVal_39 + 0x12c49) = uVal_31;
            uVal_31 = _UNK_1806cbb66;
            uVal_30 = _UNK_1806cbb62;
            uVal_29 = _UNK_1806cbb5e;
            *(uint32_t *)(lVal_39 + 0x12c4d) = _DAT_1806cbb5a;
            *(uint32_t *)(lVal_39 + 0x12c51) = uVal_29;
            *(uint32_t *)(lVal_39 + 0x12c55) = uVal_30;
            *(uint32_t *)(lVal_39 + 0x12c59) = uVal_31;
            uVal_31 = _UNK_1806cbb76;
            uVal_30 = _UNK_1806cbb72;
            uVal_29 = _UNK_1806cbb6e;
            *(uint32_t *)(lVal_39 + 0x12c5d) = _DAT_1806cbb6a;
            *(uint32_t *)(lVal_39 + 0x12c61) = uVal_29;
            *(uint32_t *)(lVal_39 + 0x12c65) = uVal_30;
            *(uint32_t *)(lVal_39 + 0x12c69) = uVal_31;
            uVal_31 = _UNK_1806cbb86;
            uVal_30 = _UNK_1806cbb82;
            uVal_29 = _UNK_1806cbb7e;
            *(uint32_t *)(lVal_39 + 0x12c6d) = _DAT_1806cbb7a;
            *(uint32_t *)(lVal_39 + 0x12c71) = uVal_29;
            *(uint32_t *)(lVal_39 + 0x12c75) = uVal_30;
            *(uint32_t *)(lVal_39 + 0x12c79) = uVal_31;
            uVal_31 = _UNK_1806cbb96;
            uVal_30 = _UNK_1806cbb92;
            uVal_29 = _UNK_1806cbb8e;
            *(uint32_t *)(lVal_39 + 0x12c7d) = _DAT_1806cbb8a;
            *(uint32_t *)(lVal_39 + 0x12c81) = uVal_29;
            *(uint32_t *)(lVal_39 + 0x12c85) = uVal_30;
            *(uint32_t *)(lVal_39 + 0x12c89) = uVal_31;
            *(uint64_t *)(lVal_39 + 0x12c8b) = 0x67c06d4d1898018e;
            func_0x180673140(&LAB_180433760);
          }
          uVal_28 = _UNK_1806c8e5c;
          uVal_27 = _UNK_1806c8e58;
          uVal_26 = _UNK_1806c8e54;
          uVal_43 = _DAT_1806c8e50;
          lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          if (*(char *)(lVal_39 + 0x12c93) == '\x01') {
            auArr_6._4_4_ = *(uint *)(lVal_39 + 0x12c41) ^ _UNK_1806c8e54;
            auArr_6._0_4_ = *(uint *)*(uint8_t (*)[16])(lVal_39 + 0x12c3d) ^ _DAT_1806c8e50;
            auArr_6._8_4_ = *(uint *)(lVal_39 + 0x12c45) ^ _UNK_1806c8e58;
            auArr_6._12_4_ = *(uint *)(lVal_39 + 0x12c49) ^ _UNK_1806c8e5c;
            *(uint8_t (*)[16])(lVal_39 + 0x12c3d) = auArr_6;
            auArr_9._4_4_ = *(uint *)(lVal_39 + 0x12c51) ^ uVal_26;
            auArr_9._0_4_ = *(uint *)(lVal_39 + 0x12c4d) ^ uVal_43;
            auArr_9._8_4_ = *(uint *)(lVal_39 + 0x12c55) ^ uVal_27;
            auArr_9._12_4_ = *(uint *)(lVal_39 + 0x12c59) ^ uVal_28;
            *(uint8_t (*)[16])(lVal_39 + 0x12c4d) = auArr_9;
            auArr_11._4_4_ = *(uint *)(lVal_39 + 0x12c61) ^ uVal_26;
            auArr_11._0_4_ = *(uint *)(lVal_39 + 0x12c5d) ^ uVal_43;
            auArr_11._8_4_ = *(uint *)(lVal_39 + 0x12c65) ^ uVal_27;
            auArr_11._12_4_ = *(uint *)(lVal_39 + 0x12c69) ^ uVal_28;
            *(uint8_t (*)[16])(lVal_39 + 0x12c5d) = auArr_11;
            auArr_13._4_4_ = *(uint *)(lVal_39 + 0x12c71) ^ uVal_26;
            auArr_13._0_4_ = *(uint *)(lVal_39 + 0x12c6d) ^ uVal_43;
            auArr_13._8_4_ = *(uint *)(lVal_39 + 0x12c75) ^ uVal_27;
            auArr_13._12_4_ = *(uint *)(lVal_39 + 0x12c79) ^ uVal_28;
            *(uint8_t (*)[16])(lVal_39 + 0x12c6d) = auArr_13;
            auArr_7._4_4_ = *(uint *)(lVal_39 + 0x12c81) ^ uVal_26;
            auArr_7._0_4_ = *(uint *)(lVal_39 + 0x12c7d) ^ uVal_43;
            auArr_7._8_4_ = *(uint *)(lVal_39 + 0x12c85) ^ uVal_27;
            auArr_7._12_4_ = *(uint *)(lVal_39 + 0x12c89) ^ uVal_28;
            *(uint8_t (*)[16])(lVal_39 + 0x12c7d) = auArr_7;
            *(uint *)(lVal_39 + 0x12c8d) = *(uint *)(lVal_39 + 0x12c8d) ^ 0x19237df1;
            *(byte *)(lVal_39 + 0x12c91) = *(byte *)(lVal_39 + 0x12c91) ^ 0xe1;
            *(byte *)(lVal_39 + 0x12c92) = *(byte *)(lVal_39 + 0x12c92) ^ 0x67;
            *(uint8_t *)(lVal_39 + 0x12c93) = 0;
          }
          func_0x180001060(&local_68);
          func_0x180143aa0(uVal_35,&local_68,&local_c8);
LAB_1803d2acf:
          func_0x180001e70(&local_68);
          DAT_1808405a0 = 0;
          return;
        }
        if ((DAT_1808402d8 == DAT_180840680) &&
           (iVal_34 = (**(func_ptr_t *)(*DAT_180840660 + 0x20))(), param_1 == iVal_34)) {
          local_68 = (uint64_t *******)&DAT_28d0f803f34a0611;
          uVal_35 = *(uint64_t *)(DAT_180840a58 + 0x648);
          local_b8 = PTR_DAT_1806b6f30._0_4_;
          uStack_b4 = PTR_DAT_1806b6f30._4_4_;
          uStack_b0 = _UNK_1806b6f38;
          uStack_ac = _UNK_1806b6f3c;
          pArr16_37 = (uint8_t (*)[16])func_0x1803d3d30();
          uVal_28 = _UNK_1806c8e3c;
          uVal_27 = _UNK_1806c8e38;
          uVal_26 = _UNK_1806c8e34;
          uVal_43 = _DAT_1806c8e30;
          if (pArr16_37[4][8] == '\x01') {
            uVal_14 = *(uint *)pArr16_37[1];
            uVal_15 = *(uint *)(pArr16_37[1] + 4);
            uVal_16 = *(uint *)(pArr16_37[1] + 8);
            uVal_17 = *(uint *)(pArr16_37[1] + 0xc);
            uVal_18 = *(uint *)pArr16_37[2];
            uVal_19 = *(uint *)(pArr16_37[2] + 4);
            uVal_20 = *(uint *)(pArr16_37[2] + 8);
            uVal_21 = *(uint *)(pArr16_37[2] + 0xc);
            uVal_22 = *(uint *)pArr16_37[3];
            uVal_23 = *(uint *)(pArr16_37[3] + 4);
            uVal_24 = *(uint *)(pArr16_37[3] + 8);
            uVal_25 = *(uint *)(pArr16_37[3] + 0xc);
            auArr_5._4_4_ = *(uint *)(*pArr16_37 + 4) ^ _UNK_1806c8e34;
            auArr_5._0_4_ = *(uint *)*pArr16_37 ^ _DAT_1806c8e30;
            auArr_5._8_4_ = *(uint *)(*pArr16_37 + 8) ^ _UNK_1806c8e38;
            auArr_5._12_4_ = *(uint *)(*pArr16_37 + 0xc) ^ _UNK_1806c8e3c;
            *pArr16_37 = auArr_5;
            auArr_8._4_4_ = uVal_15 ^ uVal_26;
            auArr_8._0_4_ = uVal_14 ^ uVal_43;
            auArr_8._8_4_ = uVal_16 ^ uVal_27;
            auArr_8._12_4_ = uVal_17 ^ uVal_28;
            pArr16_37[1] = auArr_8;
            auArr_10._4_4_ = uVal_19 ^ uVal_26;
            auArr_10._0_4_ = uVal_18 ^ uVal_43;
            auArr_10._8_4_ = uVal_20 ^ uVal_27;
            auArr_10._12_4_ = uVal_21 ^ uVal_28;
            pArr16_37[2] = auArr_10;
            auArr_12._4_4_ = uVal_23 ^ uVal_26;
            auArr_12._0_4_ = uVal_22 ^ uVal_43;
            auArr_12._8_4_ = uVal_24 ^ uVal_27;
            auArr_12._12_4_ = uVal_25 ^ uVal_28;
            pArr16_37[3] = auArr_12;
            *(uint64_t *)pArr16_37[4] =
                 CONCAT44((uint)((uint64_t)*(uint64_t *)pArr16_37[4] >> 0x20) ^ _UNK_1806c8e44,
                          (uint)*(uint64_t *)pArr16_37[4] ^ _DAT_1806c8e40);
            pArr16_37[4][8] = 0;
          }
          func_0x180001060(&local_68,pArr16_37);
          func_0x180143aa0(uVal_35,&local_68,&local_b8);
          goto LAB_1803d2acf;
        }
      }
      **(int **)(DAT_1808402d8 + 0x48) = param_1;
    }
    DAT_1808405a0 = 0;
    return;
  }
  if (param_1 == 0x1b) {
LAB_1803d23a5:
    DAT_1808402d0 = '\0';
    func_0x1803d1200(&DAT_18083ca38,&DAT_180761155);
    pLong_32 = DAT_180840660;
    DAT_180840568 = 0;
    if (*(char *)(DAT_180840660 + 8) != '\0') {
      *(uint8_t *)(DAT_180840660 + 8) = 0;
      func_0x1801dbc50(pLong_32);
      func_0x180001060(local_88,&DAT_180761155);
      lVal_39 = func_0x180137fa0(&DAT_180840a48);
      if (((lVal_39 != 0) && (lVal_39 = func_0x18014cd50(&DAT_180840a48), lVal_39 != 0)) ||
         (local_78 != 0)) {
        pU64_1 = (uint64_t *)pLong_32[0xe];
        for (pU64_45 = (uint64_t *)pLong_32[0xd]; pU64_45 != pU64_1; pU64_45 = pU64_45 + 4) {
          if (local_78 == 0) {
LAB_1803d24d5:
            lVal_39 = *(int64_t *)
                      (*(int64_t *)
                        (*(int64_t *)(*(int64_t *)(DAT_180840a58 + 0x1c8) + 0x20) + 0xf0) + 0x70);
            if (*(int64_t *)(lVal_39 + 0x430) == 0) {
              local_68 = (uint64_t *******)0x185dd108334994f2;
              lVal_41 = 0x400;
            }
            else {
              local_68 = (uint64_t *******)&DAT_18615f6ca6ec3ae1;
              lVal_41 = 0x420;
            }
            pU64_44 = pU64_45;
            if (0xf < (uint64_t)pU64_45[3]) {
              pU64_44 = (uint64_t *)*pU64_45;
            }
            uVal_2 = *(uint64_t *)(lVal_41 + 0x10 + lVal_39);
            if (*(uint64_t *)(lVal_41 + 0x18 + lVal_39) < 0x10) {
              lVal_41 = lVal_41 + lVal_39;
            }
            else {
              lVal_41 = *(int64_t *)(lVal_41 + lVal_39);
            }
            if (((uint64_t)pU64_45[2] <= uVal_2) &&
               ((pU64_45[2] == 0 ||
                (lVal_42 = uVal_2 + lVal_41, lVal_39 = thunk_FUN_180676d20(lVal_41,lVal_42,pU64_44),
                lVal_39 != lVal_42 && lVal_39 - lVal_41 != -1)))) goto LAB_1803d2794;
          }
          else {
            if ((uint64_t)pU64_45[3] < 0x10) {
              pU64_44 = pU64_45;
              if (local_70 < 0x10) goto LAB_1803d2475;
LAB_1803d248e:
              uVal_2 = pU64_45[2];
              ptr7_U64_40 = local_88[0];
            }
            else {
              pU64_44 = (uint64_t *)*pU64_45;
              if (0xf < local_70) goto LAB_1803d248e;
LAB_1803d2475:
              uVal_2 = pU64_45[2];
              ptr7_U64_40 = local_88;
            }
            if (uVal_2 <= local_78) {
              if ((uVal_2 == 0) ||
                 (lVal_41 = local_78 + (int64_t)ptr7_U64_40,
                 lVal_39 = thunk_FUN_180676d20(ptr7_U64_40,lVal_41,pU64_44),
                 lVal_39 != lVal_41 && lVal_39 - (int64_t)ptr7_U64_40 != -1)) goto LAB_1803d2794;
              if (local_78 == 0) goto LAB_1803d24d5;
            }
          }
        }
      }
      (**(func_ptr_t *)(*pLong_32 + 0x10))(pLong_32,&local_68);
      ch_33 = func_0x180052940(&local_68);
      if (ch_33 == '\0') {
        (**(func_ptr_t *)(*pLong_32 + 0x18))(pLong_32,&local_a8);
        func_0x180052a50(&local_a8);
        func_0x180001e70(&local_a8);
      }
      func_0x180001e70(&local_68);
LAB_1803d2794:
      func_0x180001e70(local_88);
      func_0x1801dc7a0(pLong_32,0);
      (**(func_ptr_t *)(*pLong_32 + 0x60))(pLong_32);
    }
  }
  else {
    if (DAT_1808402d0 == '\0') {
      iVal_34 = (**(func_ptr_t *)(*DAT_180840660 + 0x20))();
      if (param_1 == iVal_34) goto LAB_1803d23a5;
      if (DAT_1808402d0 != '\x01') {
        if (*(char *)(DAT_180840660 + 0x56) != '\x01') {
          return;
        }
        lVal_39 = func_0x1803d3f70(DAT_180840a58);
        iVal_34 = *(int *)(lVal_39 + 0x68);
        lVal_3 = *(int64_t *)(lVal_39 + 8);
        lVal_39 = lVal_3 + 0x9c0;
        lVal_41 = lVal_3 + 0x900;
        lVal_42 = lVal_3 + 0x940;
        if (iVal_34 != 1) {
          lVal_42 = lVal_3 + 0x4c0;
          lVal_39 = lVal_3 + 0x540;
          lVal_41 = lVal_3 + 0x480;
        }
        ch_33 = func_0x180116770(lVal_39,param_1);
        if (ch_33 == '\0') {
          lVal_39 = lVal_3 + 0x980;
          if (iVal_34 != 1) {
            lVal_39 = lVal_3 + 0x500;
          }
          ch_33 = func_0x180116770(lVal_39,param_1);
          if (((ch_33 == '\0') && (ch_33 = func_0x180116770(lVal_41,param_1), ch_33 == '\0')) &&
             (ch_33 = func_0x180116770(lVal_42,param_1), ch_33 == '\0')) {
            return;
          }
        }
        pLong_32 = DAT_180840660;
        if (*(char *)(DAT_180840660 + 8) != '\0') {
          *(uint8_t *)(DAT_180840660 + 8) = 0;
          func_0x1801dbc50(pLong_32);
          func_0x180001060(local_88,&DAT_180761155);
          lVal_39 = func_0x180137fa0(&DAT_180840a48);
          if (((lVal_39 != 0) && (lVal_39 = func_0x18014cd50(&DAT_180840a48), lVal_39 != 0)) ||
             (local_78 != 0)) {
            ptr7_U64_4 = (uint64_t *******)pLong_32[0xe];
            for (ptr7_U64_40 = (uint64_t *******)pLong_32[0xd]; ptr7_U64_40 != ptr7_U64_4;
                ptr7_U64_40 = ptr7_U64_40 + 4) {
              if (local_78 == 0) {
LAB_1803d2d72:
                uVal_35 = func_0x18014cd50(&DAT_180840a48);
                uVal_35 = func_0x18014ce50(uVal_35);
                local_a8 = ptr7_U64_40;
                if ((uint64_t ******)0xf < ptr7_U64_40[3]) {
                  local_a8 = (uint64_t *******)*ptr7_U64_40;
                }
                local_a0 = ptr7_U64_40[2];
                ch_33 = func_0x180037b60(uVal_35,&local_a8);
                if (ch_33 != '\0') goto LAB_1803d292c;
              }
              else {
                local_68 = ptr7_U64_40;
                if ((uint64_t ******)0xf < ptr7_U64_40[3]) {
                  local_68 = (uint64_t *******)*ptr7_U64_40;
                }
                local_60 = ptr7_U64_40[2];
                ch_33 = func_0x180037b60(local_88,&local_68);
                if (ch_33 != '\0') goto LAB_1803d292c;
                if (local_78 == 0) goto LAB_1803d2d72;
              }
            }
          }
          (**(func_ptr_t *)(*pLong_32 + 0x10))(pLong_32,&local_68);
          ch_33 = func_0x180052940(&local_68);
          if (ch_33 == '\0') {
            (**(func_ptr_t *)(*pLong_32 + 0x18))(pLong_32,&local_a8);
            func_0x180052a50(&local_a8);
            func_0x180001e70(&local_a8);
          }
          func_0x180001e70(&local_68);
LAB_1803d292c:
          func_0x180001e70(local_88);
          func_0x1801dc7a0(pLong_32,0);
          (**(func_ptr_t *)(*pLong_32 + 0x60))(pLong_32);
        }
        *param_3 = 0;
        return;
      }
    }
    if (param_1 == 8) {
      if (DAT_18083ca48 != 0) {
        DAT_180840568 = 0;
        ch_33 = func_0x18045fc60(0x11);
        if (ch_33 == '\0') {
          func_0x1800d5fe0(&DAT_18083ca38,&local_68,0,DAT_18083ca48 + -1);
          func_0x180034b40(&DAT_18083ca38,&local_68);
          func_0x180001e70(&local_68);
          return;
        }
        func_0x1803d1200(&DAT_18083ca38,&DAT_180761155);
        return;
      }
    }
    else if (DAT_18083ca48 == 0x22) {
      return;
    }
    uVal_35 = func_0x1803d3e30();
    func_0x180441600(uVal_35);
    func_0x180001060(&local_68,uVal_35);
    ptr7_U64_40 = &local_68;
    if (0xf < local_50) {
      ptr7_U64_40 = local_68;
    }
    pU64_36 = (uint8_t *)
              thunk_FUN_180676460(ptr7_U64_40,(uint8_t *)(local_58 + (int64_t)ptr7_U64_40),
                                  param_1);
    ptr7_U64_40 = &local_68;
    if (0xf < local_50) {
      ptr7_U64_40 = local_68;
    }
    if (pU64_36 != (uint8_t *)((int64_t)ptr7_U64_40 + local_58)) {
      func_0x1803d3f10(&DAT_18083ca38,param_1);
      lVal_39 = DAT_18083ca48;
      pU64_36 = &DAT_18083ca38;
      if (0xf < DAT_18083ca50) {
        pU64_36 = _DAT_18083ca38;
      }
      if (DAT_18083ca48 != 0) {
        lVal_41 = 0;
        do {
          iVal_34 = tolower((int)(char)pU64_36[lVal_41]);
          pU64_36[lVal_41] = (char)iVal_34;
          lVal_41 = lVal_41 + 1;
        } while (lVal_39 != lVal_41);
      }
      DAT_1808405d4 = 0;
      DAT_180840590 = 0;
      DAT_180840290 = 0;
      DAT_180840568 = 0;
    }
    func_0x180001e70(&local_68);
  }
  return;
}

// Unwind@1803d2f40
void Unwind_1803d2f40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1803d2f80
void Unwind_1803d2f80(void)
{
  func_0x180672f60(&DAT_180840678);
  return;
}

// Unwind@1803d2fc0
void Unwind_1803d2fc0(void)
{
  func_0x180672f60(&DAT_180840688);
  return;
}

// Unwind@1803d3000
void Unwind_1803d3000(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1803d3040
void Unwind_1803d3040(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1803d3080
void Unwind_1803d3080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803d30c0
void Unwind_1803d30c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1803d3100
void Unwind_1803d3100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1803d3140
void Unwind_1803d3140(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1803d3180
void Unwind_1803d3180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803d31c0
void Unwind_1803d31c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1803d3200
void Unwind_1803d3200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1803d3240
void Unwind_1803d3240(void)
{
  func_0x180672f60(&DAT_180840668);
  return;
}

// func_0x1803d3280
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803d3280(void)
{
  int64_t lVal_1;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint8_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cbb0d;
  uStack_24 = _UNK_1806cbb11;
  uStack_20 = _UNK_1806cbb15;
  uStack_1c = _UNK_1806cbb19;
  local_38 = _DAT_1806cbafd;
  uStack_34 = _UNK_1806cbb01;
  uStack_30 = _UNK_1806cbb05;
  uStack_2c = _UNK_1806cbb09;
  local_48 = _DAT_1806cbaed;
  uStack_44 = _UNK_1806cbaf1;
  uStack_40 = _UNK_1806cbaf5;
  uStack_3c = _UNK_1806cbaf9;
  local_58 = _DAT_1806cbadd;
  uStack_54 = _UNK_1806cbae1;
  uStack_50 = _UNK_1806cbae5;
  uStack_4c = _UNK_1806cbae9;
  local_18 = 0xcb;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12bf0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12bf0) = 1;
    func_0x180431560(lVal_1 + 0x12bad,&local_58);
    func_0x180673140(&LAB_180431730);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12bad;
}

// Unwind@1803d3340
void Unwind_1803d3340(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12bf0) = 0;
  return;
}

// func_0x1803d3370
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803d3370(void)
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
  uStack_28 = _UNK_1806cbb2e;
  uStack_24 = _UNK_1806cbb32;
  uStack_20 = _UNK_1806cbb36;
  local_38 = _DAT_1806cbb1e;
  uStack_34 = _UNK_1806cbb22;
  uStack_30 = _UNK_1806cbb26;
  local_2c = _DAT_1806cbb2a;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12c10) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12c10) = 1;
    func_0x18008fba0(lVal_1 + 0x12bf1,&local_38);
    func_0x180673140(&LAB_180431770);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12bf1;
}

// Unwind@1803d3410
void Unwind_1803d3410(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12c10) = 0;
  return;
}

// func_0x1803d3440
int func_0x1803d3440(int64_t **param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  int64_t **ptr2_Long_2;
  int iVal_3;
  int64_t **ptr2_Long_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint64_t ****ptr4_U64_7;
  int iVal_8;
  uint64_t *pU64_9;
  int64_t **ptr2_Long_10;
  uint64_t uVal_11;
  bool bFlag_12;
  uint64_t ****local_60 [2];
  uint64_t local_50;
  uint64_t local_48;
  
  if (param_2[2] == 0) {
    iVal_8 = *(int *)(param_1 + 1);
  }
  else {
    param_1 = (int64_t **)*param_1;
    if ((int64_t **)*param_1 == param_1) {
      iVal_8 = 0;
    }
    else {
      iVal_8 = 0;
      ptr2_Long_10 = (int64_t **)*param_1;
      do {
        (**(func_ptr_t *)(*ptr2_Long_10[5] + 0x10))(ptr2_Long_10[5],local_60);
        uVal_6 = local_50;
        ptr4_U64_7 = local_60;
        if (0xf < local_48) {
          ptr4_U64_7 = local_60[0];
        }
        if (local_50 == 0) {
          uVal_6 = param_2[2];
          uVal_11 = param_2[3];
          uVal_1 = 0;
        }
        else {
          uVal_11 = 0;
          do {
            iVal_3 = tolower((int)*(char *)((int64_t)ptr4_U64_7 + uVal_11));
            *(char *)((int64_t)ptr4_U64_7 + uVal_11) = (char)iVal_3;
            uVal_11 = uVal_11 + 1;
          } while (uVal_6 != uVal_11);
          uVal_6 = param_2[2];
          uVal_11 = param_2[3];
          uVal_1 = local_50;
        }
        pU64_9 = param_2;
        if (0xf < uVal_11) {
          pU64_9 = (uint64_t *)*param_2;
        }
        ptr4_U64_7 = local_60[0];
        if (local_48 < 0x10) {
          ptr4_U64_7 = local_60;
        }
        if ((uVal_6 <= uVal_1) &&
           ((uVal_6 == 0 ||
            ((lVal_5 = thunk_FUN_180676d20(ptr4_U64_7,uVal_1 + (int64_t)ptr4_U64_7,pU64_9),
             lVal_5 != uVal_1 + (int64_t)ptr4_U64_7 && (lVal_5 - (int64_t)ptr4_U64_7 != -1)))))) {
          iVal_8 = iVal_8 + 1;
        }
        if (0xf < local_48) {
          uVal_6 = local_48 + 1;
          ptr4_U64_7 = local_60[0];
          if (0xfff < uVal_6) {
            ptr4_U64_7 = (uint64_t ****)local_60[0][-1];
            if (0x1f < (uint64_t)((int64_t)local_60[0] + (-8 - (int64_t)ptr4_U64_7))) {
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_6 = local_48 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_7,uVal_6);
        }
        ptr2_Long_2 = (int64_t **)ptr2_Long_10[2];
        if (*(char *)((int64_t)ptr2_Long_10[2] + 0x19) == '\0') {
          do {
            ptr2_Long_4 = ptr2_Long_2;
            ptr2_Long_2 = (int64_t **)*ptr2_Long_4;
          } while (*(char *)((int64_t)*ptr2_Long_4 + 0x19) == '\0');
        }
        else {
          do {
            ptr2_Long_4 = (int64_t **)ptr2_Long_10[1];
            if (*(char *)((int64_t)ptr2_Long_4 + 0x19) != '\0') break;
            bFlag_12 = ptr2_Long_10 == (int64_t **)ptr2_Long_4[2];
            ptr2_Long_10 = ptr2_Long_4;
          } while (bFlag_12);
        }
        ptr2_Long_10 = ptr2_Long_4;
      } while (ptr2_Long_4 != param_1);
    }
  }
  return iVal_8;
}

// func_0x1803d3610
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803d3610(void)
{
  uint8_t uVal_1;
  int64_t **ptr2_Long_2;
  int iVal_3;
  int64_t **ptr2_Long_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  undefined1 *pU64_8;
  int64_t *pLong_9;
  uint64_t *******ptr7_U64_10;
  int64_t *pLong_11;
  int64_t **ptr2_Long_12;
  undefined1 *pU64_13;
  int64_t *pLong_14;
  uint8_t *pU64_15;
  int64_t *pLong_16;
  int64_t **ptr2_Long_17;
  int64_t **ptr2_Long_18;
  bool bFlag_19;
  uint64_t *******local_80 [2];
  int64_t *local_70;
  uint64_t local_68;
  int64_t **local_60;
  int64_t **local_58;
  int64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840658) && (func_0x180672ec0(&DAT_180840658), DAT_180840658 == -1)) {
    DAT_180840650 = func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840658);
  }
  ptr2_Long_2 = DAT_1808400a0;
  if (DAT_1808402e0 != DAT_1808402e8) {
    DAT_1808402e8 = DAT_1808402e0;
  }
  if ((int64_t **)*DAT_1808400a0 != DAT_1808400a0) {
    ptr2_Long_12 = (int64_t **)*DAT_1808400a0;
    do {
      (**(func_ptr_t *)(*ptr2_Long_12[5] + 0x10))(ptr2_Long_12[5],local_80);
      pLong_14 = local_70;
      ptr7_U64_10 = local_80;
      if (0xf < local_68) {
        ptr7_U64_10 = local_80[0];
      }
      if (local_70 == (int64_t *)0x0) {
        pLong_11 = (int64_t *)0x0;
      }
      else {
        pLong_16 = (int64_t *)0x0;
        do {
          iVal_3 = tolower((int)*(char *)((int64_t)ptr7_U64_10 + (int64_t)pLong_16));
          *(char *)((int64_t)ptr7_U64_10 + (int64_t)pLong_16) = (char)iVal_3;
          pLong_16 = (int64_t *)((int64_t)pLong_16 + 1);
          pLong_11 = local_70;
        } while (pLong_14 != pLong_16);
      }
      pU64_8 = &DAT_18083ca38;
      if (0xf < DAT_18083ca50) {
        pU64_8 = _DAT_18083ca38;
      }
      ptr7_U64_10 = local_80[0];
      if (local_68 < 0x10) {
        ptr7_U64_10 = local_80;
      }
      if ((pLong_11 < DAT_18083ca48) ||
         ((DAT_18083ca48 != (int64_t *)0x0 &&
          (lVal_5 = thunk_FUN_180676d20(ptr7_U64_10,(int64_t)pLong_11 + (int64_t)ptr7_U64_10,
                                       pU64_8),
          lVal_5 == (int64_t)pLong_11 + (int64_t)ptr7_U64_10 ||
          lVal_5 - (int64_t)ptr7_U64_10 == -1)))) {
        (**(func_ptr_t *)(*ptr2_Long_12[5] + 0x128))(ptr2_Long_12[5],&local_60);
        ptr2_Long_17 = local_58;
        uVal_7 = DAT_18083ca50;
        pU64_8 = _DAT_18083ca38;
        pLong_14 = DAT_18083ca48;
        ptr2_Long_4 = local_60;
        if (local_60 == local_58) {
          uVal_1 = true;
          ptr2_Long_17 = local_60;
          ptr2_Long_4 = local_58;
        }
        else {
          do {
            pU64_13 = &DAT_18083ca38;
            if (0xf < uVal_7) {
              pU64_13 = pU64_8;
            }
            ptr2_Long_18 = ptr2_Long_4;
            if (&DAT_0000000f < ptr2_Long_4[3]) {
              ptr2_Long_18 = (int64_t **)*ptr2_Long_4;
            }
            if ((pLong_14 <= ptr2_Long_4[2]) &&
               ((pLong_14 == (int64_t *)0x0 ||
                (pU64_15 = (uint8_t *)((int64_t)ptr2_Long_4[2] + (int64_t)ptr2_Long_18),
                pU64_6 = (uint8_t *)thunk_FUN_180676d20(ptr2_Long_18,pU64_15,pU64_13),
                uVal_7 = DAT_18083ca50, pU64_8 = _DAT_18083ca38, pLong_14 = DAT_18083ca48,
                pU64_6 != pU64_15 && (int64_t)pU64_6 - (int64_t)ptr2_Long_18 != -1)))) {
              uVal_1 = false;
              ptr2_Long_17 = local_60;
              ptr2_Long_4 = local_58;
              goto joined_r0x0001803d3846;
            }
            ptr2_Long_4 = ptr2_Long_4 + 4;
          } while (ptr2_Long_4 != ptr2_Long_17);
          uVal_1 = true;
          ptr2_Long_17 = local_60;
          ptr2_Long_4 = local_58;
        }
joined_r0x0001803d3846:
        local_60 = ptr2_Long_17;
        local_58 = ptr2_Long_4;
        if (ptr2_Long_17 != (int64_t **)0x0) {
          if (ptr2_Long_17 == ptr2_Long_4) {
            uVal_7 = local_50 - (int64_t)ptr2_Long_17;
          }
          else {
            do {
              pLong_14 = ptr2_Long_17[3];
              if (&DAT_0000000f < pLong_14) {
                pLong_16 = *ptr2_Long_17;
                pLong_11 = (int64_t *)((int64_t)pLong_14 + 1);
                pLong_9 = pLong_16;
                if ((int64_t *)0xfff < pLong_11) {
                  pLong_9 = (int64_t *)pLong_16[-1];
                  if (0x1f < (uint64_t)((int64_t)pLong_16 + (-8 - (int64_t)pLong_9)))
                  goto LAB_1803d3a54;
                  pLong_11 = pLong_14 + 5;
                }
                thunk_FUN_180695dd0(pLong_9,pLong_11);
              }
              ptr2_Long_17[2] = (int64_t *)0x0;
              ptr2_Long_17[3] = (int64_t *)&DAT_0000000f;
              *(uint8_t *)ptr2_Long_17 = 0;
              ptr2_Long_17 = ptr2_Long_17 + 4;
            } while (ptr2_Long_17 != ptr2_Long_4);
            uVal_7 = local_50 - (int64_t)local_60;
          }
          if (uVal_7 < 0x1000) {
            thunk_FUN_180695dd0(local_60);
          }
          else {
            if (0x1f < (uint64_t)((int64_t)local_60 + (-8 - (int64_t)local_60[-1]))) {
LAB_1803d3a54:
              do {
                invalidInstructionException();
              } while( true );
            }
            thunk_FUN_180695dd0(local_60[-1],uVal_7 + 0x27);
          }
        }
        if (!(bool)uVal_1) goto LAB_1803d3945;
      }
      else {
LAB_1803d3945:
        local_60 = (int64_t **)ptr2_Long_12[5];
        if (DAT_1808402e8 == DAT_1808402f0) {
          func_0x18007f260(&DAT_1808402e0,DAT_1808402e8,&local_60);
        }
        else {
          *DAT_1808402e8 = local_60;
          DAT_1808402e8 = DAT_1808402e8 + 1;
        }
      }
      if (0xf < local_68) {
        uVal_7 = local_68 + 1;
        ptr7_U64_10 = local_80[0];
        if (0xfff < uVal_7) {
          ptr7_U64_10 = (uint64_t *******)local_80[0][-1];
          if (0x1f < (uint64_t)((int64_t)local_80[0] + (-8 - (int64_t)ptr7_U64_10)))
          goto LAB_1803d3a54;
          uVal_7 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(ptr7_U64_10,uVal_7);
      }
      ptr2_Long_17 = (int64_t **)ptr2_Long_12[2];
      if (*(char *)((int64_t)ptr2_Long_12[2] + 0x19) == '\0') {
        do {
          ptr2_Long_4 = ptr2_Long_17;
          ptr2_Long_17 = (int64_t **)*ptr2_Long_4;
        } while (*(char *)((int64_t)*ptr2_Long_4 + 0x19) == '\0');
      }
      else {
        do {
          ptr2_Long_4 = (int64_t **)ptr2_Long_12[1];
          if (*(char *)((int64_t)ptr2_Long_4 + 0x19) != '\0') break;
          bFlag_19 = ptr2_Long_12 == (int64_t **)ptr2_Long_4[2];
          ptr2_Long_12 = ptr2_Long_4;
        } while (bFlag_19);
      }
      ptr2_Long_12 = ptr2_Long_4;
    } while (ptr2_Long_4 != ptr2_Long_2);
  }
  func_0x1804317c0(DAT_1808402e0,DAT_1808402e8,(int64_t)DAT_1808402e8 - (int64_t)DAT_1808402e0 >> 3);
  return;
}

// Unwind@1803d3aa0
void Unwind_1803d3aa0(void)
{
  func_0x180672f60(&DAT_180840658);
  return;
}

// Unwind@1803d3ae0
void Unwind_1803d3ae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x1803d3b20
void func_0x1803d3b20(char param_1)
{
  int iVal_1;
  
  if (param_1 != '\0') {
    iVal_1 = 1;
    if (1 < DAT_180840590) {
      iVal_1 = DAT_180840590;
    }
    DAT_180840290 = DAT_180840290 + -1;
    DAT_180840590 = iVal_1 + -1;
    return;
  }
  DAT_180840290 = DAT_180840290 + 1;
  DAT_180840590 = DAT_180840590 + 1;
  return;
}

// func_0x1803d3b60
int64_t func_0x1803d3b60(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12c30) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12c30) = 1;
    *(uint8_t *)(lVal_1 + 0x12c2c) = 1;
    *(uint32_t *)(lVal_1 + 0x12c28) = 0xe38c50d6;
    func_0x180673140(&LAB_180433710);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12c28;
}

// func_0x1803d3be0
uint64_t * func_0x1803d3be0(uint64_t *param_1)
{
  size_t _Size;
  uint64_t *pU64_1;
  int64_t *pLong_2;
  int iVal_3;
  uint64_t *_Buf1;
  int64_t *pLong_4;
  
  pLong_2 = DAT_18083e6f8;
  if (DAT_18083e6f0 != DAT_18083e6f8) {
    _Size = param_1[2];
    if (0xf < (uint64_t)param_1[3]) {
      param_1 = (uint64_t *)*param_1;
    }
    pLong_4 = DAT_18083e6f0;
    if (_Size == 0) {
      do {
        if (((uint64_t *)*pLong_4)[2] == 0) {
          return (uint64_t *)*pLong_4;
        }
        pLong_4 = pLong_4 + 1;
      } while (pLong_4 != DAT_18083e6f8);
    }
    else {
      do {
        pU64_1 = (uint64_t *)*pLong_4;
        if (pU64_1[2] == _Size) {
          _Buf1 = pU64_1;
          if (0xf < (uint64_t)pU64_1[3]) {
            _Buf1 = (uint64_t *)*pU64_1;
          }
          iVal_3 = memcmp(_Buf1,param_1,_Size);
          if (iVal_3 == 0) {
            return pU64_1;
          }
        }
        pLong_4 = pLong_4 + 1;
      } while (pLong_4 != pLong_2);
    }
  }
  return (uint64_t *)0x0;
}

// func_0x1803d3c80
int64_t func_0x1803d3c80(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12c3c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12c3c) = 1;
    *(uint8_t *)(lVal_1 + 0x12c3a) = 1;
    *(uint32_t *)(lVal_1 + 0x12c34) = 0x8810994e;
    *(uint16_t *)(lVal_1 + 0x12c38) = 0x7139;
    func_0x180673140(&LAB_180433730);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12c34;
}

// func_0x1803d3d10
void func_0x1803d3d10(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0xeb75f30b;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x4d;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0x71;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x1803d3d30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803d3d30(void)
{
  int64_t lVal_1;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cbbd0;
  uStack_24 = _UNK_1806cbbd4;
  uStack_20 = _UNK_1806cbbd8;
  uStack_1c = _UNK_1806cbbdc;
  local_38 = _DAT_1806cbbc0;
  uStack_34 = _UNK_1806cbbc4;
  uStack_30 = _UNK_1806cbbc8;
  uStack_2c = _UNK_1806cbbcc;
  local_48 = _DAT_1806cbbb0;
  uStack_44 = _UNK_1806cbbb4;
  uStack_40 = _UNK_1806cbbb8;
  uStack_3c = _UNK_1806cbbbc;
  local_58 = _DAT_1806cbba0;
  uStack_54 = _UNK_1806cbba4;
  uStack_50 = _UNK_1806cbba8;
  uStack_4c = _UNK_1806cbbac;
  local_18 = 0xe76eb835ec329b2f;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12ce0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12ce0) = 1;
    func_0x1801b2030(lVal_1 + 0x12c95,&local_58);
    func_0x180673140(&LAB_1804337b0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12c95;
}

// Unwind@1803d3e00
void Unwind_1803d3e00(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12ce0) = 0;
  return;
}

// func_0x1803d3e30
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803d3e30(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  undefined5 uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cbbf8;
  uStack_24 = _UNK_1806cbbfc;
  uStack_20 = _UNK_1806cbc00;
  local_38 = _DAT_1806cbbe8;
  uStack_34 = _UNK_1806cbbec;
  uStack_30 = _UNK_1806cbbf0;
  uStack_2c = _UNK_1806cbbf4;
  uStack_1c = CONCAT31(0x657283,(char)_UNK_1806cbc04);
  uStack_18 = 0xd999e43ba8;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12d08) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12d08) = 1;
    func_0x1801b1390(lVal_1 + 0x12ce1,&local_38);
    func_0x180673140(&LAB_1804337f0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12ce1;
}

// Unwind@1803d3ee0
void Unwind_1803d3ee0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12d08) = 0;
  return;
}

// func_0x1803d3f10
uint64_t * func_0x1803d3f10(uint64_t *param_1,uint8_t param_2)
{
  uint64_t uVal_1;
  uint64_t *pU64_2;
  
  uVal_1 = param_1[2];
  if (uVal_1 < (uint64_t)param_1[3]) {
    param_1[2] = uVal_1 + 1;
    pU64_2 = param_1;
    if (0xf < (uint64_t)param_1[3]) {
      pU64_2 = (uint64_t *)*param_1;
    }
    *(uint8_t *)((int64_t)pU64_2 + uVal_1) = param_2;
    *(uint8_t *)((int64_t)pU64_2 + uVal_1 + 1) = 0;
    return param_1;
  }
  func_0x18008c590(param_1,1);
  return param_1;
}

// func_0x1803d3f70
uint64_t func_0x1803d3f70(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int iVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int iVal_7;
  uint64_t uVal_8;
  bool bFlag_9;
  
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x1d8) + 0x30);
  lVal_5 = *(int64_t *)(lVal_4 + 0x118);
  if (lVal_5 == 0) {
    uVal_8 = 0;
  }
  else {
    iVal_7 = *(int *)(lVal_5 + 8);
    do {
      if (iVal_7 == 0) {
        return 0;
      }
      LOCK();
      iVal_3 = *(int *)(lVal_5 + 8);
      bFlag_9 = iVal_7 == iVal_3;
      if (bFlag_9) {
        *(int *)(lVal_5 + 8) = iVal_7 + 1;
        iVal_3 = iVal_7;
      }
      iVal_7 = iVal_3;
      UNLOCK();
    } while (!bFlag_9);
    uVal_8 = *(uint64_t *)(lVal_4 + 0x110);
    pLong_6 = *(int64_t **)(lVal_4 + 0x118);
    if (pLong_6 != (int64_t *)0x0) {
      LOCK();
      pLong_1 = pLong_6 + 1;
      *(int *)pLong_1 = *(int *)pLong_1 + -1;
      UNLOCK();
      if (*(int *)pLong_1 == 0) {
        (**(func_ptr_t *)*pLong_6)(pLong_6);
        LOCK();
        pInt_2 = (int *)((int64_t)pLong_6 + 0xc);
        *pInt_2 = *pInt_2 + -1;
        UNLOCK();
        if (*pInt_2 == 0) {
          (**(func_ptr_t *)(*pLong_6 + 8))(pLong_6);
        }
      }
    }
  }
  return uVal_8;
}

// func_0x1803d3ff0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803d3ff0(uint param_1,byte param_2)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
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
  uint32_t uVal_26;
  uint32_t uVal_27;
  uint32_t uVal_28;
  int64_t *pLong_29;
  byte bFlag_30;
  int iVal_31;
  size_t sz_32;
  uint8_t (*pArr16_33)[16];
  uint64_t uVal_34;
  int64_t lVal_35;
  uint *pU64_36;
  uint64_t uVal_37;
  int iVal_38;
  uint8_t *pU64_39;
  uint64_t uVal_40;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_58._8_8_ = local_58._0_8_;
  local_38 = 0xfffffffffffffffe;
  if (DAT_18084028c != '\x01') {
    return;
  }
  bFlag_30 = DAT_1808402d8 != 0 & DAT_1808405a0;
  if ((param_1 == 1 & param_2 & bFlag_30) == 1) {
    **(uint32_t **)(DAT_1808402d8 + 0x48) = 0;
    DAT_1808405a0 = 0;
    return;
  }
  if ((1 < (int)param_1 & param_2 & bFlag_30) != 1) {
    return;
  }
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_180840698) && (func_0x180672ec0(&DAT_180840698), DAT_180840698 == -1)) {
    DAT_180840690 = (int64_t *)func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_180840698);
  }
  iVal_38 = -1;
  if (param_1 != 4) {
    iVal_38 = param_1 - 2;
  }
  if (param_1 < 4) {
    iVal_38 = param_1 - 1;
  }
  iVal_38 = iVal_38 + -100;
  if (DAT_180840560 == DAT_180840690) {
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_1808406a8) &&
       (func_0x180672ec0(&DAT_1808406a8), pLong_29 = DAT_180840690, DAT_1808406a8 == -1)) {
      pU64_36 = (uint *)func_0x1803d46f0();
      if (*(char *)(pU64_36 + 1) == '\x01') {
        *pU64_36 = *pU64_36 ^ 0xf07337d;
        *(uint8_t *)(pU64_36 + 1) = 0;
      }
      func_0x180001060(local_58,pU64_36);
      lVal_35 = func_0x1801cf6b0(pLong_29,local_58);
      func_0x180001e70(local_58);
      DAT_1808406a0 = lVal_35;
      _Init_thread_footer(&DAT_1808406a8);
    }
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_1808406b8) && (func_0x180672ec0(&DAT_1808406b8), DAT_1808406b8 == -1))
    {
      uVal_37 = func_0x1803d4770();
      uVal_37 = func_0x1803d4800(uVal_37);
      func_0x180001060(local_58,uVal_37);
      lVal_35 = func_0x1803d3be0(local_58);
      func_0x180001e70(local_58);
      DAT_1808406b0 = lVal_35;
      _Init_thread_footer(&DAT_1808406b8);
    }
    if ((DAT_1808402d8 == DAT_1808406a0) && (iVal_38 == DAT_18083ca10)) {
      local_58._0_8_ = &DAT_28d0f803f34a0611;
      uVal_37 = *(uint64_t *)(DAT_180840a58 + 0x648);
      local_78 = PTR_DAT_1806b6f30._0_4_;
      uStack_74 = PTR_DAT_1806b6f30._4_4_;
      uStack_70 = _UNK_1806b6f38;
      uStack_6c = _UNK_1806b6f3c;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12d78) == '\0') {
        lVal_35 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_35 + 0x12d78) = 1;
        *(uint8_t *)(lVal_35 + 0x12d77) = 1;
        uVal_28 = _UNK_1806cbc19;
        uVal_27 = _UNK_1806cbc15;
        uVal_26 = _UNK_1806cbc11;
        *(uint32_t *)(lVal_35 + 0x12d21) = _DAT_1806cbc0d;
        *(uint32_t *)(lVal_35 + 0x12d25) = uVal_26;
        *(uint32_t *)(lVal_35 + 0x12d29) = uVal_27;
        *(uint32_t *)(lVal_35 + 0x12d2d) = uVal_28;
        uVal_28 = _UNK_1806cbc29;
        uVal_27 = _UNK_1806cbc25;
        uVal_26 = _UNK_1806cbc21;
        *(uint32_t *)(lVal_35 + 0x12d31) = _DAT_1806cbc1d;
        *(uint32_t *)(lVal_35 + 0x12d35) = uVal_26;
        *(uint32_t *)(lVal_35 + 0x12d39) = uVal_27;
        *(uint32_t *)(lVal_35 + 0x12d3d) = uVal_28;
        uVal_28 = _UNK_1806cbc39;
        uVal_27 = _UNK_1806cbc35;
        uVal_26 = _UNK_1806cbc31;
        *(uint32_t *)(lVal_35 + 0x12d41) = _DAT_1806cbc2d;
        *(uint32_t *)(lVal_35 + 0x12d45) = uVal_26;
        *(uint32_t *)(lVal_35 + 0x12d49) = uVal_27;
        *(uint32_t *)(lVal_35 + 0x12d4d) = uVal_28;
        uVal_28 = _UNK_1806cbc49;
        uVal_27 = _UNK_1806cbc45;
        uVal_26 = _UNK_1806cbc41;
        *(uint32_t *)(lVal_35 + 0x12d51) = _DAT_1806cbc3d;
        *(uint32_t *)(lVal_35 + 0x12d55) = uVal_26;
        *(uint32_t *)(lVal_35 + 0x12d59) = uVal_27;
        *(uint32_t *)(lVal_35 + 0x12d5d) = uVal_28;
        uVal_28 = _UNK_1806cbc59;
        uVal_27 = _UNK_1806cbc55;
        uVal_26 = _UNK_1806cbc51;
        *(uint32_t *)(lVal_35 + 0x12d61) = _DAT_1806cbc4d;
        *(uint32_t *)(lVal_35 + 0x12d65) = uVal_26;
        *(uint32_t *)(lVal_35 + 0x12d69) = uVal_27;
        *(uint32_t *)(lVal_35 + 0x12d6d) = uVal_28;
        *(uint64_t *)(lVal_35 + 0x12d6f) = 0x99e2c3172cfc7fee;
        func_0x180673140(&LAB_180433870);
      }
      uVal_25 = _UNK_1806c8e8c;
      uVal_24 = _UNK_1806c8e88;
      uVal_23 = _UNK_1806c8e84;
      uVal_22 = _DAT_1806c8e80;
      lVal_35 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pArr16_33 = (uint8_t (*)[16])(lVal_35 + 0x12d21);
      if (*(char *)(lVal_35 + 0x12d77) == '\x01') {
        auArr_2._4_4_ = *(uint *)(lVal_35 + 0x12d25) ^ _UNK_1806c8e84;
        auArr_2._0_4_ = *(uint *)*pArr16_33 ^ _DAT_1806c8e80;
        auArr_2._8_4_ = *(uint *)(lVal_35 + 0x12d29) ^ _UNK_1806c8e88;
        auArr_2._12_4_ = *(uint *)(lVal_35 + 0x12d2d) ^ _UNK_1806c8e8c;
        *pArr16_33 = auArr_2;
        auArr_5._4_4_ = *(uint *)(lVal_35 + 0x12d35) ^ uVal_23;
        auArr_5._0_4_ = *(uint *)(lVal_35 + 0x12d31) ^ uVal_22;
        auArr_5._8_4_ = *(uint *)(lVal_35 + 0x12d39) ^ uVal_24;
        auArr_5._12_4_ = *(uint *)(lVal_35 + 0x12d3d) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_35 + 0x12d31) = auArr_5;
        auArr_7._4_4_ = *(uint *)(lVal_35 + 0x12d45) ^ uVal_23;
        auArr_7._0_4_ = *(uint *)(lVal_35 + 0x12d41) ^ uVal_22;
        auArr_7._8_4_ = *(uint *)(lVal_35 + 0x12d49) ^ uVal_24;
        auArr_7._12_4_ = *(uint *)(lVal_35 + 0x12d4d) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_35 + 0x12d41) = auArr_7;
        auArr_9._4_4_ = *(uint *)(lVal_35 + 0x12d55) ^ uVal_23;
        auArr_9._0_4_ = *(uint *)(lVal_35 + 0x12d51) ^ uVal_22;
        auArr_9._8_4_ = *(uint *)(lVal_35 + 0x12d59) ^ uVal_24;
        auArr_9._12_4_ = *(uint *)(lVal_35 + 0x12d5d) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_35 + 0x12d51) = auArr_9;
        auArr_3._4_4_ = *(uint *)(lVal_35 + 0x12d65) ^ uVal_23;
        auArr_3._0_4_ = *(uint *)(lVal_35 + 0x12d61) ^ uVal_22;
        auArr_3._8_4_ = *(uint *)(lVal_35 + 0x12d69) ^ uVal_24;
        auArr_3._12_4_ = *(uint *)(lVal_35 + 0x12d6d) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_35 + 0x12d61) = auArr_3;
        *(uint *)(lVal_35 + 0x12d71) = *(uint *)(lVal_35 + 0x12d71) ^ 0xb7794995;
        *(byte *)(lVal_35 + 0x12d75) = *(byte *)(lVal_35 + 0x12d75) ^ 0xc3;
        *(byte *)(lVal_35 + 0x12d76) = *(byte *)(lVal_35 + 0x12d76) ^ 0x99;
        *(uint8_t *)(lVal_35 + 0x12d77) = 0;
      }
      local_58 = ZEXT816(0);
      sz_32 = strlen((char *)pArr16_33);
      if (-1 < (int64_t)sz_32) {
        if (sz_32 < 0x10) {
          pU64_39 = local_58;
          uVal_40 = 0xf;
        }
        else {
          uVal_34 = sz_32 | 0xf;
          uVal_40 = 0x16;
          if (0x16 < uVal_34) {
            uVal_40 = uVal_34;
          }
          if (uVal_34 < 0xfff) {
            pU64_39 = (uint8_t *)func_0x180672de0(uVal_40 + 1);
          }
          else {
            lVal_35 = func_0x180672de0(uVal_40 + 0x28);
            pU64_39 = (uint8_t *)(lVal_35 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_39 + -8) = lVal_35;
          }
          local_58._0_8_ = pU64_39;
        }
        local_48 = sz_32;
        local_40 = uVal_40;
        func_0x1806aa960(pU64_39,pArr16_33,sz_32);
        pU64_39[sz_32] = 0;
        func_0x180143aa0(uVal_37,local_58,&local_78);
        if (local_40 < 0x10) {
          DAT_1808405a0 = 0;
          return;
        }
        uVal_40 = local_40 + 1;
        lVal_35 = local_58._0_8_;
        if (0xfff < uVal_40) {
          lVal_35 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_35)) goto LAB_1803d45bf;
          uVal_40 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_35,uVal_40);
        DAT_1808405a0 = 0;
        return;
      }
      func_0x18007ba70();
LAB_1803d45bf:
      do {
        invalidInstructionException();
      } while( true );
    }
    if ((DAT_1808402d8 == DAT_1808406b0) &&
       (iVal_31 = (**(func_ptr_t *)(*DAT_180840690 + 0x20))(), iVal_38 == iVal_31)) {
      local_58._0_8_ = &DAT_28d0f803f34a0611;
      uVal_37 = *(uint64_t *)(DAT_180840a58 + 0x648);
      local_68 = PTR_DAT_1806b6f30._0_4_;
      uStack_64 = PTR_DAT_1806b6f30._4_4_;
      uStack_60 = _UNK_1806b6f38;
      uStack_5c = _UNK_1806b6f3c;
      pArr16_33 = (uint8_t (*)[16])func_0x1803d4820();
      uVal_25 = _UNK_1806c8e6c;
      uVal_24 = _UNK_1806c8e68;
      uVal_23 = _UNK_1806c8e64;
      uVal_22 = _DAT_1806c8e60;
      if (pArr16_33[4][8] == '\x01') {
        uVal_10 = *(uint *)pArr16_33[1];
        uVal_11 = *(uint *)(pArr16_33[1] + 4);
        uVal_12 = *(uint *)(pArr16_33[1] + 8);
        uVal_13 = *(uint *)(pArr16_33[1] + 0xc);
        uVal_14 = *(uint *)pArr16_33[2];
        uVal_15 = *(uint *)(pArr16_33[2] + 4);
        uVal_16 = *(uint *)(pArr16_33[2] + 8);
        uVal_17 = *(uint *)(pArr16_33[2] + 0xc);
        uVal_18 = *(uint *)pArr16_33[3];
        uVal_19 = *(uint *)(pArr16_33[3] + 4);
        uVal_20 = *(uint *)(pArr16_33[3] + 8);
        uVal_21 = *(uint *)(pArr16_33[3] + 0xc);
        auArr_1._4_4_ = *(uint *)(*pArr16_33 + 4) ^ _UNK_1806c8e64;
        auArr_1._0_4_ = *(uint *)*pArr16_33 ^ _DAT_1806c8e60;
        auArr_1._8_4_ = *(uint *)(*pArr16_33 + 8) ^ _UNK_1806c8e68;
        auArr_1._12_4_ = *(uint *)(*pArr16_33 + 0xc) ^ _UNK_1806c8e6c;
        *pArr16_33 = auArr_1;
        auArr_4._4_4_ = uVal_11 ^ uVal_23;
        auArr_4._0_4_ = uVal_10 ^ uVal_22;
        auArr_4._8_4_ = uVal_12 ^ uVal_24;
        auArr_4._12_4_ = uVal_13 ^ uVal_25;
        pArr16_33[1] = auArr_4;
        auArr_6._4_4_ = uVal_15 ^ uVal_23;
        auArr_6._0_4_ = uVal_14 ^ uVal_22;
        auArr_6._8_4_ = uVal_16 ^ uVal_24;
        auArr_6._12_4_ = uVal_17 ^ uVal_25;
        pArr16_33[2] = auArr_6;
        auArr_8._4_4_ = uVal_19 ^ uVal_23;
        auArr_8._0_4_ = uVal_18 ^ uVal_22;
        auArr_8._8_4_ = uVal_20 ^ uVal_24;
        auArr_8._12_4_ = uVal_21 ^ uVal_25;
        pArr16_33[3] = auArr_8;
        *(uint64_t *)pArr16_33[4] =
             CONCAT44((uint)((uint64_t)*(uint64_t *)pArr16_33[4] >> 0x20) ^ _UNK_1806c8e74,
                      (uint)*(uint64_t *)pArr16_33[4] ^ _DAT_1806c8e70);
        pArr16_33[4][8] = 0;
      }
      func_0x180001060(local_58,pArr16_33);
      func_0x180143aa0(uVal_37,local_58,&local_68);
      func_0x180001e70(local_58);
      DAT_1808405a0 = 0;
      return;
    }
  }
  **(int **)(DAT_1808402d8 + 0x48) = iVal_38;
  DAT_1808405a0 = 0;
  return;
}

// Unwind@1803d45d0
void Unwind_1803d45d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803d4600
void Unwind_1803d4600(void)
{
  func_0x180672f60(&DAT_1808406a8);
  return;
}

// Unwind@1803d4630
void Unwind_1803d4630(void)
{
  func_0x180672f60(&DAT_1808406b8);
  return;
}

// Unwind@1803d4660
void Unwind_1803d4660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803d4690
void Unwind_1803d4690(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803d46c0
void Unwind_1803d46c0(void)
{
  func_0x180672f60(&DAT_180840698);
  return;
}

// func_0x1803d46f0
int64_t func_0x1803d46f0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12d14) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12d14) = 1;
    *(uint8_t *)(lVal_1 + 0x12d10) = 1;
    *(uint32_t *)(lVal_1 + 0x12d0c) = 0xf7e5636;
    func_0x180673140(&LAB_180433820);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12d0c;
}

// func_0x1803d4770
int64_t func_0x1803d4770(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12d20) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12d20) = 1;
    *(uint8_t *)(lVal_1 + 0x12d1e) = 1;
    *(uint32_t *)(lVal_1 + 0x12d18) = 0xea9e4d6c;
    *(uint16_t *)(lVal_1 + 0x12d1c) = 0x9bc3;
    func_0x180673140(&LAB_180433840);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12d18;
}

// func_0x1803d4800
void func_0x1803d4800(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x89fb2729;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xb7;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0x9b;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x1803d4820
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803d4820(void)
{
  int64_t lVal_1;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cbc93;
  uStack_24 = _UNK_1806cbc97;
  uStack_20 = _UNK_1806cbc9b;
  uStack_1c = _UNK_1806cbc9f;
  local_38 = _DAT_1806cbc83;
  uStack_34 = _UNK_1806cbc87;
  uStack_30 = _UNK_1806cbc8b;
  uStack_2c = _UNK_1806cbc8f;
  local_48 = _DAT_1806cbc73;
  uStack_44 = _UNK_1806cbc77;
  uStack_40 = _UNK_1806cbc7b;
  uStack_3c = _UNK_1806cbc7f;
  local_58 = _DAT_1806cbc63;
  uStack_54 = _UNK_1806cbc67;
  uStack_50 = _UNK_1806cbc6b;
  uStack_4c = _UNK_1806cbc6f;
  local_18 = 0x473822533cda89c5;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12dc4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12dc4) = 1;
    func_0x1801b2030(lVal_1 + 0x12d79,&local_58);
    func_0x180673140(&LAB_1804338c0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12d79;
}

// Unwind@1803d48f0
void Unwind_1803d48f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12dc4) = 0;
  return;
}

// func_0x1803d4920
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803d4920(int param_1,char param_2)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
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
  uint32_t uVal_26;
  uint32_t uVal_27;
  uint32_t uVal_28;
  int64_t *pLong_29;
  int iVal_30;
  size_t sz_31;
  uint8_t (*pArr16_32)[16];
  uint64_t uVal_33;
  int64_t lVal_34;
  uint *pU64_35;
  uint64_t uVal_36;
  uint8_t *pU64_37;
  uint64_t uVal_38;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_58._8_8_ = local_58._0_8_;
  local_38 = 0xfffffffffffffffe;
  if (param_2 == '\0') {
    return;
  }
  if (DAT_18084028c == '\0') {
    return;
  }
  if (DAT_1808405a0 != '\x01') {
    return;
  }
  if (DAT_1808402d8 == 0) {
    return;
  }
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_1808406c8) && (func_0x180672ec0(&DAT_1808406c8), DAT_1808406c8 == -1)) {
    DAT_1808406c0 = (int64_t *)func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_1808406c8);
  }
  param_1 = param_1 + -0x32;
  if (DAT_180840560 == DAT_1808406c0) {
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_1808406d8) &&
       (func_0x180672ec0(&DAT_1808406d8), pLong_29 = DAT_1808406c0, DAT_1808406d8 == -1)) {
      pU64_35 = (uint *)func_0x1803d4fd0();
      if (*(char *)(pU64_35 + 1) == '\x01') {
        *pU64_35 = *pU64_35 ^ 0x11811747;
        *(uint8_t *)(pU64_35 + 1) = 0;
      }
      func_0x180001060(local_58,pU64_35);
      lVal_34 = func_0x1801cf6b0(pLong_29,local_58);
      func_0x180001e70(local_58);
      DAT_1808406d0 = lVal_34;
      _Init_thread_footer(&DAT_1808406d8);
    }
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_1808406e8) && (func_0x180672ec0(&DAT_1808406e8), DAT_1808406e8 == -1))
    {
      uVal_36 = func_0x1803d5050();
      uVal_36 = func_0x1803d50e0(uVal_36);
      func_0x180001060(local_58,uVal_36);
      lVal_34 = func_0x1803d3be0(local_58);
      func_0x180001e70(local_58);
      DAT_1808406e0 = lVal_34;
      _Init_thread_footer(&DAT_1808406e8);
    }
    if ((DAT_1808402d8 == DAT_1808406d0) && (param_1 == DAT_18083ca10)) {
      local_58._0_8_ = &DAT_28d0f803f34a0611;
      uVal_36 = *(uint64_t *)(DAT_180840a58 + 0x648);
      local_78 = PTR_DAT_1806b6f30._0_4_;
      uStack_74 = PTR_DAT_1806b6f30._4_4_;
      uStack_70 = _UNK_1806b6f38;
      uStack_6c = _UNK_1806b6f3c;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12e34) == '\0') {
        lVal_34 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_34 + 0x12e34) = 1;
        *(uint8_t *)(lVal_34 + 0x12e33) = 1;
        uVal_28 = _UNK_1806cbcb7;
        uVal_27 = _UNK_1806cbcb3;
        uVal_26 = _UNK_1806cbcaf;
        *(uint32_t *)(lVal_34 + 0x12ddd) = _DAT_1806cbcab;
        *(uint32_t *)(lVal_34 + 0x12de1) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12de5) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12de9) = uVal_28;
        uVal_28 = _UNK_1806cbcc7;
        uVal_27 = _UNK_1806cbcc3;
        uVal_26 = _UNK_1806cbcbf;
        *(uint32_t *)(lVal_34 + 0x12ded) = _DAT_1806cbcbb;
        *(uint32_t *)(lVal_34 + 0x12df1) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12df5) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12df9) = uVal_28;
        uVal_28 = _UNK_1806cbcd7;
        uVal_27 = _UNK_1806cbcd3;
        uVal_26 = _UNK_1806cbccf;
        *(uint32_t *)(lVal_34 + 0x12dfd) = _DAT_1806cbccb;
        *(uint32_t *)(lVal_34 + 0x12e01) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12e05) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12e09) = uVal_28;
        uVal_28 = _UNK_1806cbce7;
        uVal_27 = _UNK_1806cbce3;
        uVal_26 = _UNK_1806cbcdf;
        *(uint32_t *)(lVal_34 + 0x12e0d) = _DAT_1806cbcdb;
        *(uint32_t *)(lVal_34 + 0x12e11) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12e15) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12e19) = uVal_28;
        uVal_28 = _UNK_1806cbcf7;
        uVal_27 = _UNK_1806cbcf3;
        uVal_26 = _UNK_1806cbcef;
        *(uint32_t *)(lVal_34 + 0x12e1d) = _DAT_1806cbceb;
        *(uint32_t *)(lVal_34 + 0x12e21) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12e25) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12e29) = uVal_28;
        *(uint64_t *)(lVal_34 + 0x12e2b) = 0x2794a581ee7ea118;
        func_0x180673140(&LAB_180433950);
      }
      uVal_25 = _UNK_1806c8ebc;
      uVal_24 = _UNK_1806c8eb8;
      uVal_23 = _UNK_1806c8eb4;
      uVal_22 = _DAT_1806c8eb0;
      lVal_34 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pArr16_32 = (uint8_t (*)[16])(lVal_34 + 0x12ddd);
      if (*(char *)(lVal_34 + 0x12e33) == '\x01') {
        auArr_2._4_4_ = *(uint *)(lVal_34 + 0x12de1) ^ _UNK_1806c8eb4;
        auArr_2._0_4_ = *(uint *)*pArr16_32 ^ _DAT_1806c8eb0;
        auArr_2._8_4_ = *(uint *)(lVal_34 + 0x12de5) ^ _UNK_1806c8eb8;
        auArr_2._12_4_ = *(uint *)(lVal_34 + 0x12de9) ^ _UNK_1806c8ebc;
        *pArr16_32 = auArr_2;
        auArr_5._4_4_ = *(uint *)(lVal_34 + 0x12df1) ^ uVal_23;
        auArr_5._0_4_ = *(uint *)(lVal_34 + 0x12ded) ^ uVal_22;
        auArr_5._8_4_ = *(uint *)(lVal_34 + 0x12df5) ^ uVal_24;
        auArr_5._12_4_ = *(uint *)(lVal_34 + 0x12df9) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_34 + 0x12ded) = auArr_5;
        auArr_7._4_4_ = *(uint *)(lVal_34 + 0x12e01) ^ uVal_23;
        auArr_7._0_4_ = *(uint *)(lVal_34 + 0x12dfd) ^ uVal_22;
        auArr_7._8_4_ = *(uint *)(lVal_34 + 0x12e05) ^ uVal_24;
        auArr_7._12_4_ = *(uint *)(lVal_34 + 0x12e09) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_34 + 0x12dfd) = auArr_7;
        auArr_9._4_4_ = *(uint *)(lVal_34 + 0x12e11) ^ uVal_23;
        auArr_9._0_4_ = *(uint *)(lVal_34 + 0x12e0d) ^ uVal_22;
        auArr_9._8_4_ = *(uint *)(lVal_34 + 0x12e15) ^ uVal_24;
        auArr_9._12_4_ = *(uint *)(lVal_34 + 0x12e19) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_34 + 0x12e0d) = auArr_9;
        auArr_3._4_4_ = *(uint *)(lVal_34 + 0x12e21) ^ uVal_23;
        auArr_3._0_4_ = *(uint *)(lVal_34 + 0x12e1d) ^ uVal_22;
        auArr_3._8_4_ = *(uint *)(lVal_34 + 0x12e25) ^ uVal_24;
        auArr_3._12_4_ = *(uint *)(lVal_34 + 0x12e29) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_34 + 0x12e1d) = auArr_3;
        *(uint *)(lVal_34 + 0x12e2d) = *(uint *)(lVal_34 + 0x12e2d) ^ 0xd1ef8b17;
        *(byte *)(lVal_34 + 0x12e31) = *(byte *)(lVal_34 + 0x12e31) ^ 0xb5;
        *(byte *)(lVal_34 + 0x12e32) = *(byte *)(lVal_34 + 0x12e32) ^ 0x27;
        *(uint8_t *)(lVal_34 + 0x12e33) = 0;
      }
      local_58 = ZEXT816(0);
      sz_31 = strlen((char *)pArr16_32);
      if (-1 < (int64_t)sz_31) {
        if (sz_31 < 0x10) {
          pU64_37 = local_58;
          uVal_38 = 0xf;
        }
        else {
          uVal_33 = sz_31 | 0xf;
          uVal_38 = 0x16;
          if (0x16 < uVal_33) {
            uVal_38 = uVal_33;
          }
          if (uVal_33 < 0xfff) {
            pU64_37 = (uint8_t *)func_0x180672de0(uVal_38 + 1);
          }
          else {
            lVal_34 = func_0x180672de0(uVal_38 + 0x28);
            pU64_37 = (uint8_t *)(lVal_34 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_37 + -8) = lVal_34;
          }
          local_58._0_8_ = pU64_37;
        }
        local_48 = sz_31;
        local_40 = uVal_38;
        func_0x1806aa960(pU64_37,pArr16_32,sz_31);
        pU64_37[sz_31] = 0;
        func_0x180143aa0(uVal_36,local_58,&local_78);
        if (local_40 < 0x10) {
          DAT_1808405a0 = 0;
          return;
        }
        uVal_38 = local_40 + 1;
        lVal_34 = local_58._0_8_;
        if (0xfff < uVal_38) {
          lVal_34 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_34)) goto LAB_1803d4ead;
          uVal_38 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_34,uVal_38);
        DAT_1808405a0 = 0;
        return;
      }
      func_0x18007ba70();
LAB_1803d4ead:
      do {
        invalidInstructionException();
      } while( true );
    }
    if ((DAT_1808402d8 == DAT_1808406e0) &&
       (iVal_30 = (**(func_ptr_t *)(*DAT_1808406c0 + 0x20))(), param_1 == iVal_30)) {
      local_58._0_8_ = &DAT_28d0f803f34a0611;
      uVal_36 = *(uint64_t *)(DAT_180840a58 + 0x648);
      local_68 = PTR_DAT_1806b6f30._0_4_;
      uStack_64 = PTR_DAT_1806b6f30._4_4_;
      uStack_60 = _UNK_1806b6f38;
      uStack_5c = _UNK_1806b6f3c;
      pArr16_32 = (uint8_t (*)[16])func_0x1803d5100();
      uVal_25 = _UNK_1806c8e9c;
      uVal_24 = _UNK_1806c8e98;
      uVal_23 = _UNK_1806c8e94;
      uVal_22 = _DAT_1806c8e90;
      if (pArr16_32[4][8] == '\x01') {
        uVal_10 = *(uint *)pArr16_32[1];
        uVal_11 = *(uint *)(pArr16_32[1] + 4);
        uVal_12 = *(uint *)(pArr16_32[1] + 8);
        uVal_13 = *(uint *)(pArr16_32[1] + 0xc);
        uVal_14 = *(uint *)pArr16_32[2];
        uVal_15 = *(uint *)(pArr16_32[2] + 4);
        uVal_16 = *(uint *)(pArr16_32[2] + 8);
        uVal_17 = *(uint *)(pArr16_32[2] + 0xc);
        uVal_18 = *(uint *)pArr16_32[3];
        uVal_19 = *(uint *)(pArr16_32[3] + 4);
        uVal_20 = *(uint *)(pArr16_32[3] + 8);
        uVal_21 = *(uint *)(pArr16_32[3] + 0xc);
        auArr_1._4_4_ = *(uint *)(*pArr16_32 + 4) ^ _UNK_1806c8e94;
        auArr_1._0_4_ = *(uint *)*pArr16_32 ^ _DAT_1806c8e90;
        auArr_1._8_4_ = *(uint *)(*pArr16_32 + 8) ^ _UNK_1806c8e98;
        auArr_1._12_4_ = *(uint *)(*pArr16_32 + 0xc) ^ _UNK_1806c8e9c;
        *pArr16_32 = auArr_1;
        auArr_4._4_4_ = uVal_11 ^ uVal_23;
        auArr_4._0_4_ = uVal_10 ^ uVal_22;
        auArr_4._8_4_ = uVal_12 ^ uVal_24;
        auArr_4._12_4_ = uVal_13 ^ uVal_25;
        pArr16_32[1] = auArr_4;
        auArr_6._4_4_ = uVal_15 ^ uVal_23;
        auArr_6._0_4_ = uVal_14 ^ uVal_22;
        auArr_6._8_4_ = uVal_16 ^ uVal_24;
        auArr_6._12_4_ = uVal_17 ^ uVal_25;
        pArr16_32[2] = auArr_6;
        auArr_8._4_4_ = uVal_19 ^ uVal_23;
        auArr_8._0_4_ = uVal_18 ^ uVal_22;
        auArr_8._8_4_ = uVal_20 ^ uVal_24;
        auArr_8._12_4_ = uVal_21 ^ uVal_25;
        pArr16_32[3] = auArr_8;
        *(uint64_t *)pArr16_32[4] =
             CONCAT44((uint)((uint64_t)*(uint64_t *)pArr16_32[4] >> 0x20) ^ _UNK_1806c8ea4,
                      (uint)*(uint64_t *)pArr16_32[4] ^ _DAT_1806c8ea0);
        pArr16_32[4][8] = 0;
      }
      func_0x180001060(local_58,pArr16_32);
      func_0x180143aa0(uVal_36,local_58,&local_68);
      func_0x180001e70(local_58);
      DAT_1808405a0 = 0;
      return;
    }
  }
  **(int **)(DAT_1808402d8 + 0x48) = param_1;
  DAT_1808405a0 = 0;
  return;
}

// Unwind@1803d4eb0
void Unwind_1803d4eb0(void)
{
  func_0x180672f60(&DAT_1808406c8);
  return;
}

// Unwind@1803d4ee0
void Unwind_1803d4ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803d4f10
void Unwind_1803d4f10(void)
{
  func_0x180672f60(&DAT_1808406d8);
  return;
}

// Unwind@1803d4f40
void Unwind_1803d4f40(void)
{
  func_0x180672f60(&DAT_1808406e8);
  return;
}

// Unwind@1803d4f70
void Unwind_1803d4f70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803d4fa0
void Unwind_1803d4fa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1803d4fd0
int64_t func_0x1803d4fd0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12dd0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12dd0) = 1;
    *(uint8_t *)(lVal_1 + 0x12dcc) = 1;
    *(uint32_t *)(lVal_1 + 0x12dc8) = 0x11f8720c;
    func_0x180673140(&LAB_180433900);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12dc8;
}

// func_0x1803d5050
int64_t func_0x1803d5050(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12ddc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12ddc) = 1;
    *(uint8_t *)(lVal_1 + 0x12dda) = 1;
    *(uint32_t *)(lVal_1 + 0x12dd4) = 0xce94d332;
    *(uint16_t *)(lVal_1 + 0x12dd8) = 0x55a9;
    func_0x180673140(&LAB_180433920);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12dd4;
}

// func_0x1803d50e0
void func_0x1803d50e0(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0xadf1b977;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xdd;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0x55;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x1803d5100
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803d5100(void)
{
  int64_t lVal_1;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cbd31;
  uStack_24 = _UNK_1806cbd35;
  uStack_20 = _UNK_1806cbd39;
  uStack_1c = _UNK_1806cbd3d;
  local_38 = _DAT_1806cbd21;
  uStack_34 = _UNK_1806cbd25;
  uStack_30 = _UNK_1806cbd29;
  uStack_2c = _UNK_1806cbd2d;
  local_48 = _DAT_1806cbd11;
  uStack_44 = _UNK_1806cbd15;
  uStack_40 = _UNK_1806cbd19;
  uStack_3c = _UNK_1806cbd1d;
  local_58 = _DAT_1806cbd01;
  uStack_54 = _UNK_1806cbd05;
  uStack_50 = _UNK_1806cbd09;
  uStack_4c = _UNK_1806cbd0d;
  local_18 = 0x56a321f62a6b9ef;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12e80) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12e80) = 1;
    func_0x1801b2030(lVal_1 + 0x12e35,&local_58);
    func_0x180673140(&LAB_1804339a0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12e35;
}

// Unwind@1803d51d0
void Unwind_1803d51d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12e80) = 0;
  return;
}

// func_0x1803d5200
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803d5200(int param_1,char param_2)
{
  uint8_t auArr_1 [16];
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
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
  uint32_t uVal_26;
  uint32_t uVal_27;
  uint32_t uVal_28;
  int64_t *pLong_29;
  int iVal_30;
  size_t sz_31;
  uint8_t (*pArr16_32)[16];
  uint64_t uVal_33;
  int64_t lVal_34;
  uint *pU64_35;
  uint64_t uVal_36;
  uint8_t *pU64_37;
  uint64_t uVal_38;
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_58._8_8_ = local_58._0_8_;
  local_38 = 0xfffffffffffffffe;
  if (param_2 == '\0') {
    return;
  }
  if (DAT_18084028c == '\0') {
    return;
  }
  if (DAT_1808405a0 != '\x01') {
    return;
  }
  if (DAT_1808402d8 == 0) {
    return;
  }
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_1808406f8) && (func_0x180672ec0(&DAT_1808406f8), DAT_1808406f8 == -1)) {
    DAT_1808406f0 = (int64_t *)func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_1808406f8);
  }
  param_1 = param_1 + -0x34;
  if (DAT_180840560 == DAT_1808406f0) {
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_180840708) &&
       (func_0x180672ec0(&DAT_180840708), pLong_29 = DAT_1808406f0, DAT_180840708 == -1)) {
      pU64_35 = (uint *)func_0x1803d58b0();
      if (*(char *)(pU64_35 + 1) == '\x01') {
        *pU64_35 = *pU64_35 ^ 0x9f254d43;
        *(uint8_t *)(pU64_35 + 1) = 0;
      }
      func_0x180001060(local_58,pU64_35);
      lVal_34 = func_0x1801cf6b0(pLong_29,local_58);
      func_0x180001e70(local_58);
      DAT_180840700 = lVal_34;
      _Init_thread_footer(&DAT_180840708);
    }
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_180840718) && (func_0x180672ec0(&DAT_180840718), DAT_180840718 == -1))
    {
      uVal_36 = func_0x1803d5930();
      uVal_36 = func_0x1803d59c0(uVal_36);
      func_0x180001060(local_58,uVal_36);
      lVal_34 = func_0x1803d3be0(local_58);
      func_0x180001e70(local_58);
      DAT_180840710 = lVal_34;
      _Init_thread_footer(&DAT_180840718);
    }
    if ((DAT_1808402d8 == DAT_180840700) && (param_1 == DAT_18083ca10)) {
      local_58._0_8_ = &DAT_28d0f803f34a0611;
      uVal_36 = *(uint64_t *)(DAT_180840a58 + 0x648);
      local_78 = PTR_DAT_1806b6f30._0_4_;
      uStack_74 = PTR_DAT_1806b6f30._4_4_;
      uStack_70 = _UNK_1806b6f38;
      uStack_6c = _UNK_1806b6f3c;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x12ef0) == '\0') {
        lVal_34 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_34 + 0x12ef0) = 1;
        *(uint8_t *)(lVal_34 + 0x12eef) = 1;
        uVal_28 = _UNK_1806cbd55;
        uVal_27 = _UNK_1806cbd51;
        uVal_26 = _UNK_1806cbd4d;
        *(uint32_t *)(lVal_34 + 0x12e99) = _DAT_1806cbd49;
        *(uint32_t *)(lVal_34 + 0x12e9d) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12ea1) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12ea5) = uVal_28;
        uVal_28 = _UNK_1806cbd65;
        uVal_27 = _UNK_1806cbd61;
        uVal_26 = _UNK_1806cbd5d;
        *(uint32_t *)(lVal_34 + 0x12ea9) = _DAT_1806cbd59;
        *(uint32_t *)(lVal_34 + 0x12ead) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12eb1) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12eb5) = uVal_28;
        uVal_28 = _UNK_1806cbd75;
        uVal_27 = _UNK_1806cbd71;
        uVal_26 = _UNK_1806cbd6d;
        *(uint32_t *)(lVal_34 + 0x12eb9) = _DAT_1806cbd69;
        *(uint32_t *)(lVal_34 + 0x12ebd) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12ec1) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12ec5) = uVal_28;
        uVal_28 = _UNK_1806cbd85;
        uVal_27 = _UNK_1806cbd81;
        uVal_26 = _UNK_1806cbd7d;
        *(uint32_t *)(lVal_34 + 0x12ec9) = _DAT_1806cbd79;
        *(uint32_t *)(lVal_34 + 0x12ecd) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12ed1) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12ed5) = uVal_28;
        uVal_28 = _UNK_1806cbd95;
        uVal_27 = _UNK_1806cbd91;
        uVal_26 = _UNK_1806cbd8d;
        *(uint32_t *)(lVal_34 + 0x12ed9) = _DAT_1806cbd89;
        *(uint32_t *)(lVal_34 + 0x12edd) = uVal_26;
        *(uint32_t *)(lVal_34 + 0x12ee1) = uVal_27;
        *(uint32_t *)(lVal_34 + 0x12ee5) = uVal_28;
        *(uint64_t *)(lVal_34 + 0x12ee7) = 0x99ee35dd54aac526;
        func_0x180673140(&LAB_180433a30);
      }
      uVal_25 = _UNK_1806c8eec;
      uVal_24 = _UNK_1806c8ee8;
      uVal_23 = _UNK_1806c8ee4;
      uVal_22 = _DAT_1806c8ee0;
      lVal_34 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pArr16_32 = (uint8_t (*)[16])(lVal_34 + 0x12e99);
      if (*(char *)(lVal_34 + 0x12eef) == '\x01') {
        auArr_2._4_4_ = *(uint *)(lVal_34 + 0x12e9d) ^ _UNK_1806c8ee4;
        auArr_2._0_4_ = *(uint *)*pArr16_32 ^ _DAT_1806c8ee0;
        auArr_2._8_4_ = *(uint *)(lVal_34 + 0x12ea1) ^ _UNK_1806c8ee8;
        auArr_2._12_4_ = *(uint *)(lVal_34 + 0x12ea5) ^ _UNK_1806c8eec;
        *pArr16_32 = auArr_2;
        auArr_5._4_4_ = *(uint *)(lVal_34 + 0x12ead) ^ uVal_23;
        auArr_5._0_4_ = *(uint *)(lVal_34 + 0x12ea9) ^ uVal_22;
        auArr_5._8_4_ = *(uint *)(lVal_34 + 0x12eb1) ^ uVal_24;
        auArr_5._12_4_ = *(uint *)(lVal_34 + 0x12eb5) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_34 + 0x12ea9) = auArr_5;
        auArr_7._4_4_ = *(uint *)(lVal_34 + 0x12ebd) ^ uVal_23;
        auArr_7._0_4_ = *(uint *)(lVal_34 + 0x12eb9) ^ uVal_22;
        auArr_7._8_4_ = *(uint *)(lVal_34 + 0x12ec1) ^ uVal_24;
        auArr_7._12_4_ = *(uint *)(lVal_34 + 0x12ec5) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_34 + 0x12eb9) = auArr_7;
        auArr_9._4_4_ = *(uint *)(lVal_34 + 0x12ecd) ^ uVal_23;
        auArr_9._0_4_ = *(uint *)(lVal_34 + 0x12ec9) ^ uVal_22;
        auArr_9._8_4_ = *(uint *)(lVal_34 + 0x12ed1) ^ uVal_24;
        auArr_9._12_4_ = *(uint *)(lVal_34 + 0x12ed5) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_34 + 0x12ec9) = auArr_9;
        auArr_3._4_4_ = *(uint *)(lVal_34 + 0x12edd) ^ uVal_23;
        auArr_3._0_4_ = *(uint *)(lVal_34 + 0x12ed9) ^ uVal_22;
        auArr_3._8_4_ = *(uint *)(lVal_34 + 0x12ee1) ^ uVal_24;
        auArr_3._12_4_ = *(uint *)(lVal_34 + 0x12ee5) ^ uVal_25;
        *(uint8_t (*)[16])(lVal_34 + 0x12ed9) = auArr_3;
        *(uint *)(lVal_34 + 0x12ee9) = *(uint *)(lVal_34 + 0x12ee9) ^ 0x41b331c3;
        *(byte *)(lVal_34 + 0x12eed) = *(byte *)(lVal_34 + 0x12eed) ^ 0xcf;
        *(byte *)(lVal_34 + 0x12eee) = *(byte *)(lVal_34 + 0x12eee) ^ 0x99;
        *(uint8_t *)(lVal_34 + 0x12eef) = 0;
      }
      local_58 = ZEXT816(0);
      sz_31 = strlen((char *)pArr16_32);
      if (-1 < (int64_t)sz_31) {
        if (sz_31 < 0x10) {
          pU64_37 = local_58;
          uVal_38 = 0xf;
        }
        else {
          uVal_33 = sz_31 | 0xf;
          uVal_38 = 0x16;
          if (0x16 < uVal_33) {
            uVal_38 = uVal_33;
          }
          if (uVal_33 < 0xfff) {
            pU64_37 = (uint8_t *)func_0x180672de0(uVal_38 + 1);
          }
          else {
            lVal_34 = func_0x180672de0(uVal_38 + 0x28);
            pU64_37 = (uint8_t *)(lVal_34 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_37 + -8) = lVal_34;
          }
          local_58._0_8_ = pU64_37;
        }
        local_48 = sz_31;
        local_40 = uVal_38;
        func_0x1806aa960(pU64_37,pArr16_32,sz_31);
        pU64_37[sz_31] = 0;
        func_0x180143aa0(uVal_36,local_58,&local_78);
        if (local_40 < 0x10) {
          DAT_1808405a0 = 0;
          return;
        }
        uVal_38 = local_40 + 1;
        lVal_34 = local_58._0_8_;
        if (0xfff < uVal_38) {
          lVal_34 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_34)) goto LAB_1803d578d;
          uVal_38 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_34,uVal_38);
        DAT_1808405a0 = 0;
        return;
      }
      func_0x18007ba70();
LAB_1803d578d:
      do {
        invalidInstructionException();
      } while( true );
    }
    if ((DAT_1808402d8 == DAT_180840710) &&
       (iVal_30 = (**(func_ptr_t *)(*DAT_1808406f0 + 0x20))(), param_1 == iVal_30)) {
      local_58._0_8_ = &DAT_28d0f803f34a0611;
      uVal_36 = *(uint64_t *)(DAT_180840a58 + 0x648);
      local_68 = PTR_DAT_1806b6f30._0_4_;
      uStack_64 = PTR_DAT_1806b6f30._4_4_;
      uStack_60 = _UNK_1806b6f38;
      uStack_5c = _UNK_1806b6f3c;
      pArr16_32 = (uint8_t (*)[16])func_0x1803d59e0();
      uVal_25 = _UNK_1806c8ecc;
      uVal_24 = _UNK_1806c8ec8;
      uVal_23 = _UNK_1806c8ec4;
      uVal_22 = _DAT_1806c8ec0;
      if (pArr16_32[4][8] == '\x01') {
        uVal_10 = *(uint *)pArr16_32[1];
        uVal_11 = *(uint *)(pArr16_32[1] + 4);
        uVal_12 = *(uint *)(pArr16_32[1] + 8);
        uVal_13 = *(uint *)(pArr16_32[1] + 0xc);
        uVal_14 = *(uint *)pArr16_32[2];
        uVal_15 = *(uint *)(pArr16_32[2] + 4);
        uVal_16 = *(uint *)(pArr16_32[2] + 8);
        uVal_17 = *(uint *)(pArr16_32[2] + 0xc);
        uVal_18 = *(uint *)pArr16_32[3];
        uVal_19 = *(uint *)(pArr16_32[3] + 4);
        uVal_20 = *(uint *)(pArr16_32[3] + 8);
        uVal_21 = *(uint *)(pArr16_32[3] + 0xc);
        auArr_1._4_4_ = *(uint *)(*pArr16_32 + 4) ^ _UNK_1806c8ec4;
        auArr_1._0_4_ = *(uint *)*pArr16_32 ^ _DAT_1806c8ec0;
        auArr_1._8_4_ = *(uint *)(*pArr16_32 + 8) ^ _UNK_1806c8ec8;
        auArr_1._12_4_ = *(uint *)(*pArr16_32 + 0xc) ^ _UNK_1806c8ecc;
        *pArr16_32 = auArr_1;
        auArr_4._4_4_ = uVal_11 ^ uVal_23;
        auArr_4._0_4_ = uVal_10 ^ uVal_22;
        auArr_4._8_4_ = uVal_12 ^ uVal_24;
        auArr_4._12_4_ = uVal_13 ^ uVal_25;
        pArr16_32[1] = auArr_4;
        auArr_6._4_4_ = uVal_15 ^ uVal_23;
        auArr_6._0_4_ = uVal_14 ^ uVal_22;
        auArr_6._8_4_ = uVal_16 ^ uVal_24;
        auArr_6._12_4_ = uVal_17 ^ uVal_25;
        pArr16_32[2] = auArr_6;
        auArr_8._4_4_ = uVal_19 ^ uVal_23;
        auArr_8._0_4_ = uVal_18 ^ uVal_22;
        auArr_8._8_4_ = uVal_20 ^ uVal_24;
        auArr_8._12_4_ = uVal_21 ^ uVal_25;
        pArr16_32[3] = auArr_8;
        *(uint64_t *)pArr16_32[4] =
             CONCAT44((uint)((uint64_t)*(uint64_t *)pArr16_32[4] >> 0x20) ^ _UNK_1806c8ed4,
                      (uint)*(uint64_t *)pArr16_32[4] ^ _DAT_1806c8ed0);
        pArr16_32[4][8] = 0;
      }
      func_0x180001060(local_58,pArr16_32);
      func_0x180143aa0(uVal_36,local_58,&local_68);
      func_0x180001e70(local_58);
      DAT_1808405a0 = 0;
      return;
    }
  }
  **(int **)(DAT_1808402d8 + 0x48) = param_1;
  DAT_1808405a0 = 0;
  return;
}

// Unwind@1803d5790
void Unwind_1803d5790(void)
{
  func_0x180672f60(&DAT_1808406f8);
  return;
}

// Unwind@1803d57c0
void Unwind_1803d57c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803d57f0
void Unwind_1803d57f0(void)
{
  func_0x180672f60(&DAT_180840708);
  return;
}

// Unwind@1803d5820
void Unwind_1803d5820(void)
{
  func_0x180672f60(&DAT_180840718);
  return;
}

// Unwind@1803d5850
void Unwind_1803d5850(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1803d5880
void Unwind_1803d5880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1803d58b0
int64_t func_0x1803d58b0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12e8c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12e8c) = 1;
    *(uint8_t *)(lVal_1 + 0x12e88) = 1;
    *(uint32_t *)(lVal_1 + 0x12e84) = 0x9f5c2808;
    func_0x180673140(&LAB_1804339e0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12e84;
}

// func_0x1803d5930
int64_t func_0x1803d5930(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12e98) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12e98) = 1;
    *(uint8_t *)(lVal_1 + 0x12e96) = 1;
    *(uint32_t *)(lVal_1 + 0x12e90) = 0x920e9f12;
    *(uint16_t *)(lVal_1 + 0x12e94) = 0xe93f;
    func_0x180673140(&LAB_180433a00);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12e90;
}

// func_0x1803d59c0
void func_0x1803d59c0(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0xf16bf557;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x4b;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0xe9;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x1803d59e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803d59e0(void)
{
  int64_t lVal_1;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cbdcf;
  uStack_24 = _UNK_1806cbdd3;
  uStack_20 = _UNK_1806cbdd7;
  uStack_1c = _UNK_1806cbddb;
  local_38 = _DAT_1806cbdbf;
  uStack_34 = _UNK_1806cbdc3;
  uStack_30 = _UNK_1806cbdc7;
  uStack_2c = _UNK_1806cbdcb;
  local_48 = _DAT_1806cbdaf;
  uStack_44 = _UNK_1806cbdb3;
  uStack_40 = _UNK_1806cbdb7;
  uStack_3c = _UNK_1806cbdbb;
  local_58 = _DAT_1806cbd9f;
  uStack_54 = _UNK_1806cbda3;
  uStack_50 = _UNK_1806cbda7;
  uStack_4c = _UNK_1806cbdab;
  local_18 = 0xf7a254037a0ea7e9;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12f3c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12f3c) = 1;
    func_0x1801b2030(lVal_1 + 0x12ef1,&local_58);
    func_0x180673140(&LAB_180433a80);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12ef1;
}

// Unwind@1803d5ab0
void Unwind_1803d5ab0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12f3c) = 0;
  return;
}

// func_0x1803d5ae0
uint8_t func_0x1803d5ae0(void)
{
  return DAT_1808405fc;
}

// func_0x1803d5af0
undefined1 * func_0x1803d5af0(void)
{
  return &DAT_1808405a0;
}

// func_0x1803d5b00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1803d5b00(int param_1,int param_2,int param_3)
{
  int64_t lVal_1;
  int64_t *pLong_2;
  byte bFlag_3;
  uint64_t *pU64_4;
  uint64_t *pU64_5;
  uint64_t *pU64_6;
  char ch_7;
  uint64_t *pU64_8;
  uint64_t *pU64_9;
  bool bFlag_10;
  float extraout_XMM0_Da;
  uint64_t uVal_11;
  uint8_t auArr_12 [16];
  uint64_t extraout_XMM0_Qb;
  float fVal_13;
  float fVal_14;
  float fVal_15;
  float fVal_16;
  uint8_t auArr_17 [16];
  uint8_t auArr_18 [16];
  uint8_t auArr_19 [16];
  uint64_t local_78;
  uint64_t local_70;
  
  pU64_4 = DAT_1808400a0;
  local_70 = 0xfffffffffffffffe;
  pU64_8 = (uint64_t *)(uint64_t)(param_1 - 3U);
  if (0xfffffffd < param_1 - 3U) {
    local_78 = &DAT_28d0f803f34a0611;
    pU64_8 = SUB168(ZEXT816(0x28d0f8d6a40bdc93) * ZEXT816(0xfa3cb7d98cf6a14d),0);
    lVal_1 = *(int64_t *)(DAT_180840a58 + 0x648);
    auArr_19._0_4_ = (float)param_2;
    auArr_19._4_4_ = (float)param_3;
    auArr_19._8_8_ = 0;
    auArr_12._8_8_ = 0;
    auArr_12._0_8_ = *(uint64_t *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x48);
    auArr_12 = divps(auArr_19,auArr_12);
    fVal_15 = (float)*(uint64_t *)(lVal_1 + 0x50) * auArr_12._0_4_;
    fVal_16 = (float)((uint64_t)*(uint64_t *)(lVal_1 + 0x50) >> 0x20) * auArr_12._4_4_;
    pU64_6 = (uint64_t *)*DAT_1808400a0;
joined_r0x0001803d5bf3:
    pU64_9 = pU64_6;
    if (pU64_9 != pU64_4) {
      pLong_2 = (int64_t *)pU64_9[5];
      ch_7 = (**(func_ptr_t *)(*pLong_2 + 0xe0))(pLong_2);
      if (((ch_7 != '\0') && (*(char *)(pLong_2 + 8) == '\x01')) &&
         (ch_7 = (**(func_ptr_t *)(*pLong_2 + 0x150))(pLong_2,fVal_15), bFlag_3 = DAT_1808405fc,
         ch_7 != '\0')) {
        if (param_1 == 2) {
          pU64_8 = (uint64_t *)(uint64_t)DAT_1808405fc;
          DAT_180840560 = pLong_2;
          DAT_1808405fc = 2;
          DAT_18084060f = bFlag_3;
          return pU64_8;
        }
        DAT_18084071c = 1;
        DAT_180840720 = pLong_2;
        DAT_180840728 = pLong_2;
        pU64_8 = (uint64_t *)func_0x180134880(pLong_2,&local_78);
        DAT_180840730 = fVal_15 - (float)local_78;
        _DAT_180840734 = fVal_16 - local_78._4_4_;
        return pU64_8;
      }
      pU64_5 = (uint64_t *)pU64_9[2];
      if (*(char *)((int64_t)(uint64_t *)pU64_9[2] + 0x19) == '\0') {
        do {
          pU64_8 = pU64_5;
          pU64_5 = (uint64_t *)*pU64_8;
          pU64_6 = pU64_8;
        } while (*(char *)((int64_t)(uint64_t *)*pU64_8 + 0x19) == '\0');
      }
      else {
        do {
          pU64_8 = (uint64_t *)pU64_9[1];
          pU64_6 = pU64_8;
          if (*(char *)((int64_t)pU64_8 + 0x19) != '\0') break;
          bFlag_10 = pU64_9 == (uint64_t *)pU64_8[2];
          pU64_9 = pU64_8;
        } while (bFlag_10);
      }
      goto joined_r0x0001803d5bf3;
    }
    if (param_1 == 1) {
      if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x1c39c) < DAT_180840758) && (func_0x180672ec0(&DAT_180840758), DAT_180840758 == -1)
         ) {
        uVal_11 = func_0x1803d5ea0();
        uVal_11 = func_0x1803d5f20(uVal_11);
        func_0x180001060(&DAT_180840738,uVal_11);
        func_0x1806731d0(&LAB_1803d5f40);
        _Init_thread_footer(&DAT_180840758);
      }
      uVal_11 = func_0x1800cd3b0(&DAT_180840738,DAT_1806b26b4,3);
      auArr_17._8_4_ = (int)extraout_XMM0_Qb;
      auArr_17._0_8_ = uVal_11;
      auArr_17._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
      pU64_8 = (uint64_t *)func_0x1800cfa00();
      fVal_14 = (*(float *)(lVal_1 + 0x50) * DAT_1806aeae4 - (float)uVal_11 * DAT_1806aeae4) +
               DAT_1806b5ef4;
      if (fVal_14 <= fVal_15) {
        fVal_13 = DAT_1806aeae4 * *(float *)(lVal_1 + 0x54) - extraout_XMM0_Da * DAT_1806aeae4;
        auArr_18._4_12_ = auArr_17._4_12_;
        auArr_18._0_4_ = (float)uVal_11 + DAT_1806b55e4;
        auArr_12 = blendps(ZEXT416((uint)fVal_14),_DAT_1806c8ef0,0xe);
        auArr_19 = insertps(auArr_18,ZEXT416((uint)fVal_13),0x10);
        if (((fVal_15 < auArr_12._0_4_ + auArr_19._0_4_) &&
            (bFlag_3 = -(auArr_12._4_4_ + auArr_19._4_4_ <= fVal_16),
            pU64_8 = (uint64_t *)(uint64_t)bFlag_3, (bFlag_3 & 1) != 0)) &&
           (fVal_16 < fVal_13 + DAT_1806be594 + extraout_XMM0_Da + DAT_1806b55e0)) {
          DAT_18084075c = 1;
        }
      }
    }
  }
  return pU64_8;
}

// Unwind@1803d5e50
void Unwind_1803d5e50(void)
{
  func_0x180672f60(&DAT_180840758);
  return;
}

// func_0x1803d5ea0
int64_t func_0x1803d5ea0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12f48) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12f48) = 1;
    *(uint32_t *)(lVal_1 + 0x12f40) = 0xf61e72a7;
    *(uint16_t *)(lVal_1 + 0x12f44) = 0x177;
    func_0x180673140(&LAB_180433ac0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12f40;
}

// func_0x1803d5f20
void func_0x1803d5f20(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x9d7d13e5;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x77;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x1803d5fb0
void func_0x1803d5fb0(int param_1)
{
  if (param_1 == 1) {
    DAT_18084071c = 0;
    DAT_180840720 = 0;
    DAT_18084075d = 0;
    DAT_18084075e = 0;
  }
  return;
}

// func_0x1803d5fe0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803d5fe0(int param_1,int param_2)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  bool bFlag_3;
  bool bFlag_4;
  int64_t *pLong_5;
  int iVal_6;
  float fVal_7;
  float fVal_8;
  float fVal_9;
  float fVal_10;
  float fVal_11;
  uint8_t auStack_98 [32];
  float local_78;
  float local_74;
  int64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  
  fVal_8 = DAT_180840730;
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  if ((DAT_18084071c == '\x01') && (DAT_180840720 != (int64_t *)0x0)) {
    local_68 = &DAT_28d0f803f34a0611;
    lVal_1 = *(int64_t *)(DAT_180840a58 + 0x648);
    fVal_9 = ((float)param_1 / *(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x48)) *
            *(float *)(lVal_1 + 0x50);
    fVal_11 = ((float)param_2 / *(float *)(*(int64_t *)(DAT_180840a58 + 0x648) + 0x4c)) *
             *(float *)(lVal_1 + 0x54);
    fVal_10 = fVal_11 - _DAT_180840734;
    (**(func_ptr_t *)(*DAT_180840720 + 0x148))(DAT_180840720,&local_68);
    pLong_5 = DAT_180840720;
    fVal_7 = *(float *)(lVal_1 + 0x50) * DAT_1806aeae4;
    bFlag_3 = fVal_9 < fVal_7 + DAT_1806c3890;
    bFlag_4 = DAT_1806c8ac4 + fVal_7 <= fVal_9;
    DAT_18084075e = bFlag_4 && bFlag_3;
    if (bFlag_4 && bFlag_3) {
      *(uint8_t *)((int64_t)DAT_180840720 + 0x89) = 1;
      local_78 = *(float *)(lVal_1 + 0x50) * DAT_1806aeae4 - DAT_1806aeae4 * (float)local_68;
    }
    else {
      local_78 = fVal_9 - fVal_8;
      *(uint8_t *)((int64_t)DAT_180840720 + 0x89) = 0;
    }
    fVal_8 = *(float *)(lVal_1 + 0x54) * DAT_1806aeae4;
    bFlag_4 = DAT_1806c8ac4 + fVal_8 <= fVal_11;
    bFlag_3 = fVal_11 < fVal_8 + DAT_1806c3890;
    DAT_18084075d = bFlag_3 && bFlag_4;
    if (bFlag_3 && bFlag_4) {
      *(uint8_t *)(pLong_5 + 0x11) = 1;
      fVal_8 = *(float *)(lVal_1 + 0x54) * DAT_1806aeae4;
      fVal_10 = fVal_8 - DAT_1806aeae4 * local_68._4_4_;
    }
    else {
      *(uint8_t *)(pLong_5 + 0x11) = 0;
      fVal_8 = *(float *)(lVal_1 + 0x54) * DAT_1806aeae4;
    }
    iVal_6 = (uint)(*(float *)(lVal_1 + 0x50) * DAT_1806aeae4 <= local_78) +
            (uint)(fVal_8 <= fVal_10) * 2;
    local_74 = fVal_10;
    func_0x180134c70(pLong_5,&local_70,iVal_6,&local_78);
    pLong_5 = DAT_180840720;
    *(int *)(DAT_180840720 + 0x15) = iVal_6;
    pLong_5[0x10] = local_70;
    func_0x1801350e0();
  }
  if (DAT_18083cf40 == (local_60 ^ (uint64_t)auStack_98)) {
    return;
  }
  func_0x180673080(local_60 ^ (uint64_t)auStack_98);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// func_0x1803d62b0
void func_0x1803d62b0(int param_1)
{
  uint32_t local_40;
  uint32_t uStack_3c;
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (((0xfffffffb < param_1 - 0x29U) && (DAT_180840728 != 0)) && (DAT_180840720 == 0)) {
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x1c39c) < DAT_1808407a8) {
      func_0x180672ec0(&DAT_1808407a8);
      if (DAT_1808407a8 == -1) {
        DAT_1808407a0 = func_0x180134bf0(&DAT_1808400a0);
        _Init_thread_footer(&DAT_1808407a8);
      }
    }
    func_0x180134880(DAT_180840728,&local_40);
                    /* WARNING: Could not recover jumptable at 0x0001803d6353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(func_ptr_t )(&DAT_1806ce7b4 + *(int *)(&DAT_1806ce7b4 + (uint64_t)(param_1 - 0x25) * 4)))
              (uStack_3c,CONCAT44(uStack_3c,local_40));
    return;
  }
  return;
}

// Unwind@1803d6480
void Unwind_1803d6480(void)
{
  func_0x180672f60(&DAT_1808407a8);
  return;
}

// func_0x1803d64b0
int64_t func_0x1803d64b0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12f54) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x12f54) = 1;
    *(uint32_t *)(lVal_1 + 0x12f4c) = 0x2282fafb;
    *(uint16_t *)(lVal_1 + 0x12f50) = 0x1ef;
    func_0x180673140(&LAB_180433af0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12f4c;
}

// func_0x1803d6530
void func_0x1803d6530(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 5) == '\x01') {
    *param_1 = *param_1 ^ 0x49e19bb9;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xef;
    *(uint8_t *)((int64_t)param_1 + 5) = 0;
  }
  return;
}

// func_0x1803d65c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1803d65c0(uint64_t *param_1)
{
  uint64_t *pU64_1;
  byte *pU8_2;
  uint *pU64_3;
  char *fnPtr_4;
  uint8_t *pU64_5;
  uint64_t *pU64_6;
  uint32_t uVal_7;
  uint8_t uVal_8;
  func_ptr_t fnPtr_9;
  uint uVal_10;
  uint64_t *pU64_11;
  uint32_t *pU64_12;
  uint64_t uVal_13;
  size_t sz_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  uint64_t ***ptr3_U64_17;
  uint64_t *pU64_18;
  uint64_t ****ptr4_U64_19;
  uint8_t *pU64_20;
  uint8_t *pU64_21;
  uint64_t ****ptr4_U64_22;
  uint64_t uVal_23;
  uint uVal_24;
  uint uVal_25;
  uint uVal_26;
  uint uVal_27;
  uint uVal_28;
  uint uVal_29;
  uint64_t in_stack_fffffffffffffa18;
  uint32_t uVal_30;
  uint8_t ***ptr3_U64_31;
  uint32_t uVal_33;
  uint64_t uVal_32;
  uint in_stack_fffffffffffffa28;
  uint uVal_34;
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
  uint8_t **local_478;
  uint64_t *local_470;
  uint8_t ***local_440;
  uint8_t **local_438;
  uint64_t *local_430;
  uint8_t ***local_400;
  uint8_t **local_3f8;
  uint64_t *local_3f0;
  uint8_t ***local_3c0;
  uint8_t **local_3b8;
  uint64_t *local_3b0;
  uint8_t ***local_380;
  uint64_t local_378;
  uint64_t uStack_370;
  uint64_t local_368;
  uint64_t uStack_360;
  uint64_t local_358;
  uint64_t uStack_350;
  uint8_t local_340 [56];
  uint64_t local_308;
  uint8_t local_300 [56];
  uint64_t local_2c8;
  uint8_t local_2c0 [56];
  uint64_t local_288;
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
  uint64_t uStack_f0;
  uint8_t local_e8;
  uint64_t *local_e0;
  uint8_t local_d8 [16];
  uint32_t local_c8;
  uint32_t uStack_c4;
  uint16_t uStack_c0;
  uint16_t uStack_be;
  uint16_t uStack_bc;
  uint16_t uStack_ba;
  uint16_t local_b8;
  uint32_t uStack_b6;
  uint16_t uStack_b2;
  uint16_t uStack_b0;
  uint8_t local_ad;
  uint8_t local_ac;
  uint8_t local_ab;
  uint8_t local_aa;
  uint8_t local_a9;
  uint8_t local_a8;
  uint8_t local_a7;
  uint8_t local_a6;
  uint8_t local_a5;
  uint8_t local_a4;
  uint8_t local_a3;
  uint8_t local_a2;
  uint8_t local_a1;
  uint8_t local_a0;
  uint8_t local_9f;
  uint8_t local_9e;
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
  uint64_t *local_90;
  uint64_t ****local_88;
  uint32_t uStack_80;
  uint16_t uStack_7c;
  uint16_t uStack_7a;
  uint32_t uStack_78;
  uint16_t uStack_74;
  uint16_t uStack_72;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint8_t local_67;
  uint8_t local_66;
  uint8_t local_65;
  uint8_t local_64;
  uint8_t local_63;
  uint8_t local_62;
  uint8_t local_61;
  uint64_t local_60;
  
  uVal_34 = (uint)((uint64_t)in_stack_fffffffffffffa18 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_d8._8_8_ = 0;
  pU64_12 = (uint32_t *)func_0x180672de0(0x30);
  uVal_7 = s_Displays_the_name_of_every_user_o_180760cd8._12_4_;
  uVal_33 = s_Displays_the_name_of_every_user_o_180760cd8._8_4_;
  uVal_30 = s_Displays_the_name_of_every_user_o_180760cd8._4_4_;
  local_d8._0_8_ = pU64_12;
  local_c8 = 0x2e;
  uStack_c4 = 0;
  uStack_c0 = 0x2f;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_ba = 0;
  *pU64_12 = s_Displays_the_name_of_every_user_o_180760cd8._0_4_;
  pU64_12[1] = uVal_30;
  pU64_12[2] = uVal_33;
  pU64_12[3] = uVal_7;
  uVal_7 = s_Displays_the_name_of_every_user_o_180760cd8._24_4_;
  uVal_33 = s_Displays_the_name_of_every_user_o_180760cd8._20_4_;
  uVal_30 = CONCAT22(s_Displays_the_name_of_every_user_o_180760cd8._30_2_,
                    s_Displays_the_name_of_every_user_o_180760cd8._28_2_);
  pU64_12[4] = s_Displays_the_name_of_every_user_o_180760cd8._16_4_;
  pU64_12[5] = uVal_33;
  pU64_12[6] = uVal_7;
  pU64_12[7] = uVal_30;
  uVal_16 = s_Displays_the_name_of_every_user_o_180760cd8._38_8_;
  *(uint64_t *)((int64_t)pU64_12 + 0x1e) =
       CONCAT62(s_Displays_the_name_of_every_user_o_180760cd8._32_6_,
                s_Displays_the_name_of_every_user_o_180760cd8._30_2_);
  *(uint64_t *)((int64_t)pU64_12 + 0x26) = uVal_16;
  *(uint8_t *)((int64_t)pU64_12 + 0x2e) = 0;
  pU64_21 = local_d8;
  local_90 = param_1;
  func_0x1801c2ba0(param_1,9,0,pU64_21);
  uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
  if (0xf < uVal_23) {
    uVal_13 = uVal_23 + 1;
    lVal_15 = local_d8._0_8_;
    if (0xfff < uVal_13) {
      lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
      uVal_13 = uVal_23 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_15,uVal_13);
  }
  pU64_6 = local_90;
  *local_90 = &PTR_LAB_1806c98d0;
  *(uint8_t (*)[16])(local_90 + 0x12) = ZEXT816(0);
  *(uint8_t (*)[16])(local_90 + 0x10) = ZEXT816(0);
  *(uint32_t *)(local_90 + 0x13) = 0xffffffff;
  *(uint16_t *)(local_90 + 0x14) = 1;
  uVal_7 = _UNK_1806b288c;
  uVal_33 = _UNK_1806b2888;
  uVal_30 = _UNK_1806b2884;
  *(uint32_t *)((int64_t)local_90 + 0xa4) = _DAT_1806b2880;
  *(uint32_t *)(local_90 + 0x15) = uVal_30;
  *(uint32_t *)((int64_t)local_90 + 0xac) = uVal_33;
  *(uint32_t *)(local_90 + 0x16) = uVal_7;
  *(uint8_t *)((int64_t)local_90 + 0xb4) = 1;
  uVal_7 = _UNK_1806c8f0c;
  uVal_33 = _UNK_1806c8f08;
  uVal_30 = _UNK_1806c8f04;
  *(uint32_t *)(local_90 + 0x17) = _DAT_1806c8f00;
  *(uint32_t *)((int64_t)local_90 + 0xbc) = uVal_30;
  *(uint32_t *)(local_90 + 0x18) = uVal_33;
  *(uint32_t *)((int64_t)local_90 + 0xc4) = uVal_7;
  *(uint8_t *)(local_90 + 0x19) = 0;
  *(uint8_t (*)[16])((int64_t)local_90 + 0xcc) = ZEXT416(DAT_1806b26b4);
  *(uint32_t *)((int64_t)local_90 + 0xdc) = 0x3f19999a;
  *(uint8_t *)(local_90 + 0x1c) = 1;
  *(uint64_t *)((int64_t)local_90 + 0xe4) = DAT_1806b5cd0;
  *(uint8_t *)((int64_t)local_90 + 0xec) = 1;
  local_90[0x1e] = 0x50000000a;
  *(uint32_t *)(local_90 + 0x1f) = 0x3f800000;
  *(uint16_t *)((int64_t)local_90 + 0xfc) = 0;
  *(uint8_t *)(local_90 + 0x2a) = 0;
  *(uint16_t *)(local_90 + 0x2b) = 0;
  *(uint8_t *)((int64_t)local_90 + 0x2dc) = 0;
  *(uint8_t *)(local_90 + 0x74) = 0;
  *(uint16_t *)(local_90 + 0x75) = 0;
  pU64_18 = local_90 + 0x79;
  *(uint8_t *)((int64_t)local_90 + 0x52c) = 0;
  *(uint8_t (*)[16])(local_90 + 0xb4) = ZEXT816(0);
  local_90[0xb6] = 0;
  *(uint8_t (*)[16])(local_90 + 0x20) = ZEXT816(0);
  *(uint8_t (*)[16])(local_90 + 0x22) = ZEXT816(0);
  *(uint8_t (*)[16])(local_90 + 0x24) = ZEXT816(0);
  *(uint8_t (*)[16])(local_90 + 0x26) = ZEXT816(0);
  *(uint8_t (*)[16])(local_90 + 0x2c) = ZEXT816(0);
  *(uint16_t *)(local_90 + 0x2e) = 0;
  func_0x1806ab010(local_90 + 0x2f,0,0x12e);
  *(uint8_t (*)[16])(pU64_6 + 0x55) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x57) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x59) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x5c) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x5e) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x60) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x62) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 100) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x66) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pU64_6 + 0x33c) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x6a) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x6c) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x6e) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x70) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0x76) = ZEXT816(0);
  *(uint16_t *)(pU64_6 + 0x78) = 0;
  func_0x1806ab010(pU64_18,0,0x12e);
  *(uint8_t (*)[16])(pU64_6 + 0x9f) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0xa1) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0xa3) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0xa6) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0xa8) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0xaa) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0xac) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0xae) = ZEXT816(0);
  *(uint8_t (*)[16])(pU64_6 + 0xb0) = ZEXT816(0);
  *(uint8_t (*)[16])((int64_t)pU64_6 + 0x58c) = ZEXT816(0);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12f64) == '\0') {
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_15 + 0x12f64) = 1;
    *(uint8_t *)(lVal_15 + 0x12f62) = 1;
    *(uint64_t *)(lVal_15 + 0x12f58) = 0xb0020654a3dbc43;
    *(uint16_t *)(lVal_15 + 0x12f60) = 0xd37e;
    func_0x180673140(&LAB_180433b20);
  }
  lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_15 + 0x12f58);
  if (*(char *)(lVal_15 + 0x12f62) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0x656173452549d30d;
    *(byte *)(lVal_15 + 0x12f60) = *(byte *)(lVal_15 + 0x12f60) ^ 0xd;
    *(byte *)(lVal_15 + 0x12f61) = *(byte *)(lVal_15 + 0x12f61) ^ 0xd3;
    *(uint8_t *)(lVal_15 + 0x12f62) = 0;
  }
  local_e0 = local_90 + 0x10;
  pU64_18 = local_90 + 0x20;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_ba = 0;
  local_d8 = (uint8_t  [16])0x0;
  sz_14 = strlen((char *)pU64_1);
  local_100 = pU64_18;
  if ((int64_t)sz_14 < 0) {
    func_0x18007ba70();
LAB_1803dada3:
    func_0x18007ba70();
LAB_1803dada9:
    local_92 = 1;
    func_0x18007ba70();
LAB_1803dadb6:
    local_91 = 1;
    func_0x18007ba70();
LAB_1803dadc3:
    local_61 = 1;
    func_0x18007ba70();
LAB_1803dadd0:
    local_93 = 1;
    func_0x18007ba70();
LAB_1803daddd:
    local_95 = 1;
    func_0x18007ba70();
LAB_1803dadea:
    local_94 = 1;
    func_0x18007ba70();
LAB_1803dadf7:
    local_97 = 1;
    func_0x18007ba70();
LAB_1803dae04:
    local_96 = 1;
    func_0x18007ba70();
LAB_1803dae11:
    local_99 = 1;
    func_0x18007ba70();
LAB_1803dae1e:
    local_98 = 1;
    func_0x18007ba70();
LAB_1803dae2b:
    local_9a = 1;
    func_0x18007ba70();
LAB_1803dae38:
    local_62 = 1;
    func_0x18007ba70();
LAB_1803dae45:
    local_9c = 1;
    func_0x18007ba70();
LAB_1803dae52:
    local_9b = 1;
    func_0x18007ba70();
LAB_1803dae5f:
    local_9e = 1;
    func_0x18007ba70();
LAB_1803dae6c:
    local_9d = 1;
    func_0x18007ba70();
LAB_1803dae79:
    local_a0 = 1;
    func_0x18007ba70();
LAB_1803dae86:
    local_9f = 1;
    func_0x18007ba70();
LAB_1803dae93:
    local_a2 = 1;
    func_0x18007ba70();
LAB_1803daea0:
    local_a1 = 1;
    func_0x18007ba70();
LAB_1803daead:
    local_a4 = 1;
    func_0x18007ba70();
LAB_1803daeba:
    local_a3 = 1;
    func_0x18007ba70();
LAB_1803daec7:
    local_a6 = 1;
    func_0x18007ba70();
LAB_1803daed4:
    local_a5 = 1;
    func_0x18007ba70();
LAB_1803daee1:
    local_63 = 1;
    func_0x18007ba70();
LAB_1803daeee:
    local_a7 = 1;
    func_0x18007ba70();
LAB_1803daefb:
    local_a9 = 1;
    func_0x18007ba70();
LAB_1803daf08:
    local_a8 = 1;
    func_0x18007ba70();
LAB_1803daf15:
    local_ab = 1;
    func_0x18007ba70();
LAB_1803daf22:
    local_aa = 1;
    func_0x18007ba70();
LAB_1803daf2f:
    local_64 = 1;
    func_0x18007ba70();
LAB_1803daf3c:
    local_ac = 1;
    func_0x18007ba70();
LAB_1803daf49:
    local_65 = 1;
    func_0x18007ba70();
LAB_1803daf56:
    local_ad = 1;
    func_0x18007ba70();
  }
  else {
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU64_1,sz_14);
    pU64_21[sz_14] = 0;
    pU64_21 = local_d8;
    uVal_16 = func_0x1801d3650(local_e0,pU64_21,0);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12f74) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12f74) = 1;
      *(uint8_t *)(lVal_15 + 0x12f72) = 1;
      *(uint64_t *)(lVal_15 + 0x12f68) = 0xd142b4423bc40;
      *(uint16_t *)(lVal_15 + 0x12f70) = 0xd37e;
      func_0x180673140(&LAB_180433b50);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x12f68);
    if (*(char *)(lVal_15 + 0x12f72) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x656173452549d30d;
      *(byte *)(lVal_15 + 0x12f70) = *(byte *)(lVal_15 + 0x12f70) ^ 0xd;
      *(byte *)(lVal_15 + 0x12f71) = *(byte *)(lVal_15 + 0x12f71) ^ 0xd3;
      *(uint8_t *)(lVal_15 + 0x12f72) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803dada3;
    if (sz_14 < 0x10) {
      ptr4_U64_22 = &local_88;
      uVal_23 = 0xf;
    }
    else {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    ptr4_U64_22 = &local_88;
    func_0x1801d3650(uVal_16,ptr4_U64_22,1);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_308 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_308 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_340);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12f78) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12f78) = 1;
      *(uint16_t *)(lVal_15 + 0x12f75) = 0x1c5;
      func_0x180673140(&LAB_180433b80);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x12f75);
    if (*(char *)(lVal_15 + 0x12f76) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xc5;
      *(uint8_t *)(lVal_15 + 0x12f76) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803dada9;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_92 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_92 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12f84) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12f84) = 1;
      *(uint32_t *)(lVal_15 + 0x12f7c) = 0xd5bb1c83;
      *(uint16_t *)(lVal_15 + 0x12f80) = 0x181;
      func_0x180673140(&LAB_180433ba0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x12f7c);
    if (*(char *)(lVal_15 + 0x12f81) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xa1d573c5;
      *(byte *)(lVal_15 + 0x12f80) = *(byte *)(lVal_15 + 0x12f80) ^ 0x81;
      *(uint8_t *)(lVal_15 + 0x12f81) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_1803dadb6;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_91 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_91 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    in_stack_fffffffffffffa28 = in_stack_fffffffffffffa28 & 0xffffff00;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801d3a80(local_90,ptr4_U64_22,pU64_21,local_e0,(uint64_t)uVal_34 << 0x20,local_340,
                  in_stack_fffffffffffffa28);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_2c8 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_2c8 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_300);
    }
    pU64_18 = local_90 + 0x14;
    uVal_8 = *(uint8_t *)pU64_18;
    local_c8 = _DAT_1806cbdf7;
    uStack_c4 = _UNK_1806cbdfb;
    uStack_c0 = (uint16_t)_UNK_1806cbdff;
    uStack_be = (uint16_t)((uint)_UNK_1806cbdff >> 0x10);
    uStack_bc = (uint16_t)_UNK_1806cbe03;
    uStack_ba = (uint16_t)((uint)_UNK_1806cbe03 >> 0x10);
    local_d8._8_8_ = _UNK_1806cbdef;
    local_d8._0_8_ = _DAT_1806cbde7;
    local_b8 = 0xb141;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12fa8) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12fa8) = 1;
      func_0x1800f15f0(lVal_15 + 0x12f85,local_d8);
      func_0x180673140(&LAB_180433bd0);
    }
    fnPtr_4 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12f85);
    func_0x180441640(fnPtr_4);
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen(fnPtr_4);
    if ((int64_t)sz_14 < 0) goto LAB_1803dadc3;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_61 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_61 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,fnPtr_4,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12fb8) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12fb8) = 1;
      *(uint64_t *)(lVal_15 + 0x12fb0) = 0x1f55c5621c8d966;
      func_0x180673140(&LAB_180433c00);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x12fb0);
    if (*(char *)(lVal_15 + 0x12fb7) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_15 + 0x12fb5) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_15 + 0x12fb4) << 0x20) ^ SUB168(_DAT_1806ae7c0,0);
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803dadd0;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_93 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_93 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU64_1,sz_14);
    pU64_21[sz_14] = 0;
    in_stack_fffffffffffffa28 = in_stack_fffffffffffffa28 & 0xffffff00;
    pU64_21 = local_d8;
    ptr4_U64_22 = &local_88;
    func_0x1801ccd70(local_90,pU64_21,ptr4_U64_22,pU64_18,uVal_8,local_300,in_stack_fffffffffffffa28);
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    local_288 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_288 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_2c0);
    }
    pU64_5 = (uint8_t *)((int64_t)local_90 + 0xa1);
    uVal_8 = *pU64_5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12fbc) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12fbc) = 1;
      *(uint16_t *)(lVal_15 + 0x12fb9) = 0x145;
      func_0x180673140(&LAB_180433c30);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x12fb9);
    if (*(char *)(lVal_15 + 0x12fba) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x45;
      *(uint8_t *)(lVal_15 + 0x12fba) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803daddd;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_95 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_95 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12fd0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12fd0) = 1;
      *(uint64_t *)(lVal_15 + 0x12fc0) = 0xc7c86245b7545017;
      *(uint32_t *)(lVal_15 + 0x12fc8) = 0xad455431;
      *(uint16_t *)(lVal_15 + 0x12fcc) = 0x127;
      func_0x180673140(&LAB_180433c50);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x12fc0);
    if (*(char *)(lVal_15 + 0x12fcd) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xe7bf0d27d93d3145;
      *(uint *)(lVal_15 + 0x12fc8) = *(uint *)(lVal_15 + 0x12fc8) ^ 0xd93d3145;
      *(byte *)(lVal_15 + 0x12fcc) = *(byte *)(lVal_15 + 0x12fcc) ^ 0x27;
      *(uint8_t *)(lVal_15 + 0x12fcd) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803dadea;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_94 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_94 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    in_stack_fffffffffffffa28 = in_stack_fffffffffffffa28 & 0xffffff00;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801ccd70(local_90,ptr4_U64_22,pU64_21,pU64_5,uVal_8,local_2c0,in_stack_fffffffffffffa28);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_5b8 = &PTR_LAB_1806cdb50;
    local_5b0 = local_90;
    local_580 = &local_5b8;
    local_378 = *(uint64_t *)((int64_t)local_90 + 0xa4);
    uStack_370 = *(uint64_t *)((int64_t)local_90 + 0xac);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12fd4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12fd4) = 1;
      *(uint16_t *)(lVal_15 + 0x12fd1) = 0x11d;
      func_0x180673140(&LAB_180433c80);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x12fd1);
    if (*(char *)(lVal_15 + 0x12fd2) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x1d;
      *(uint8_t *)(lVal_15 + 0x12fd2) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803dadf7;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_97 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_97 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12fe4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12fe4) = 1;
      *(uint64_t *)(lVal_15 + 0x12fd8) = 0xd74e609f7f351249;
      *(uint32_t *)(lVal_15 + 0x12fe0) = 0x14d0572;
      func_0x180673140(&LAB_180433ca0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x12fd8);
    if (*(char *)(lVal_15 + 0x12fe3) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xbb2103bf0b4d771d;
      *(uint *)(lVal_15 + 0x12fe0) =
           (*(uint *)(lVal_15 + 0x12fe0) & 0xffff | (uint)*(byte *)(lVal_15 + 0x12fe2) << 0x10) ^
           SUB164(_DAT_1806b26d0,0);
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae04;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_96 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_96 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    pU64_18 = local_90;
    lVal_15 = (int64_t)local_90 + 0xa4;
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    in_stack_fffffffffffffa28 = in_stack_fffffffffffffa28 & 0xffffff00;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801cd600(pU64_18,ptr4_U64_22,pU64_21,lVal_15,&local_378,&local_5b8,in_stack_fffffffffffffa28)
    ;
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_248 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_248 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_280);
    }
    pU64_5 = (uint8_t *)((int64_t)local_90 + 0xb4);
    uVal_8 = *pU64_5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12fe8) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12fe8) = 1;
      *(uint16_t *)(lVal_15 + 0x12fe5) = 0x12d;
      func_0x180673140(&LAB_180433cd0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x12fe5);
    if (*(char *)(lVal_15 + 0x12fe6) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x2d;
      *(uint8_t *)(lVal_15 + 0x12fe6) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae11;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_99 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_99 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x12ffc) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x12ffc) = 1;
      *(uint64_t *)(lVal_15 + 0x12ff0) = 0xacfc9ddc72ac826f;
      *(uint32_t *)(lVal_15 + 0x12ff8) = 0x1cf8743;
      func_0x180673140(&LAB_180433cf0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x12ff0);
    if (*(char *)(lVal_15 + 0x12ffb) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xd993efbb19cfe32d;
      *(uint *)(lVal_15 + 0x12ff8) =
           (*(uint *)(lVal_15 + 0x12ff8) & 0xffff | (uint)*(byte *)(lVal_15 + 0x12ffa) << 0x10) ^
           SUB164(_DAT_1806b6880,0);
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae1e;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_98 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_98 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    in_stack_fffffffffffffa28 = in_stack_fffffffffffffa28 & 0xffffff00;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801ccd70(local_90,ptr4_U64_22,pU64_21,pU64_5,uVal_8,local_280,in_stack_fffffffffffffa28);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_578 = &PTR_LAB_1806cdb80;
    local_570 = local_90;
    local_540 = &local_578;
    local_368 = local_90[0x17];
    uStack_360 = local_90[0x18];
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13000) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13000) = 1;
      *(uint16_t *)(lVal_15 + 0x12ffd) = 0x145;
      func_0x180673140(&LAB_180433d20);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x12ffd);
    if (*(char *)(lVal_15 + 0x12ffe) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x45;
      *(uint8_t *)(lVal_15 + 0x12ffe) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae2b;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_9a = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_9a = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    local_f8 = _DAT_1806cbe09;
    uStack_f0 = _UNK_1806cbe11;
    local_e8 = 0x45;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13014) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13014) = 1;
      func_0x18007d2b0(lVal_15 + 0x13001,&local_f8);
      func_0x180673140(&LAB_180433d40);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x13001);
    if (*(char *)(lVal_15 + 0x13012) == '\x01') {
      uVal_34 = *(uint *)(lVal_15 + 0x13005) ^ _UNK_1806b5604;
      uVal_25 = *(uint *)(lVal_15 + 0x13009) ^ _UNK_1806b5608;
      uVal_27 = *(uint *)(lVal_15 + 0x1300d) ^ _UNK_1806b560c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b5600;
      *(uint *)(lVal_15 + 0x13005) = uVal_34;
      *(uint *)(lVal_15 + 0x13009) = uVal_25;
      *(uint *)(lVal_15 + 0x1300d) = uVal_27;
      *(byte *)(lVal_15 + 0x13011) = *(byte *)(lVal_15 + 0x13011) ^ 0x45;
      *(uint8_t *)(lVal_15 + 0x13012) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae38;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_62 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_62 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    pU64_11 = local_90;
    pU64_6 = local_90 + 0x17;
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    pU64_18 = &local_368;
    in_stack_fffffffffffffa28 = in_stack_fffffffffffffa28 & 0xffffff00;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801cd600(pU64_11,ptr4_U64_22,pU64_21,pU64_6,pU64_18,&local_578,in_stack_fffffffffffffa28);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_538 = &PTR_LAB_1806cdb80;
    local_530 = local_90;
    local_500 = &local_538;
    uVal_8 = *(uint8_t *)(local_90 + 0x19);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13018) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13018) = 1;
      *(uint16_t *)(lVal_15 + 0x13015) = 0x137;
      func_0x180673140(&LAB_180433d70);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x13015);
    if (*(char *)(lVal_15 + 0x13016) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x37;
      *(uint8_t *)(lVal_15 + 0x13016) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae45;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_9c = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_9c = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1302c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x1302c) = 1;
      *(uint8_t *)(lVal_15 + 0x13028) = 1;
      *(uint64_t *)(lVal_15 + 0x13020) = 0xeb42f50073878e78;
      func_0x180673140(&LAB_180433d90);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x13020);
    if (*(char *)(lVal_15 + 0x13028) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xeb279b691ff3fb37;
      *(uint8_t *)(lVal_15 + 0x13028) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae52;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_9b = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_9b = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    pU64_11 = local_90;
    pU64_6 = local_90 + 0x19;
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    ptr3_U64_31 = &local_538;
    uVal_16 = CONCAT71((int7)((uint64_t)pU64_18 >> 8),uVal_8);
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801ccd70(pU64_11,ptr4_U64_22,pU64_21,pU64_6,uVal_16,ptr3_U64_31,
                  in_stack_fffffffffffffa28 & 0xffffff00);
    uVal_33 = (uint32_t)((uint64_t)ptr3_U64_31 >> 0x20);
    uVal_30 = (uint32_t)((uint64_t)uVal_16 >> 0x20);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_4f8 = &PTR_LAB_1806cdbb0;
    local_4f0 = local_90;
    local_4c0 = &local_4f8;
    uVal_7 = *(uint32_t *)((int64_t)local_90 + 0xcc);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13030) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13030) = 1;
      *(uint16_t *)(lVal_15 + 0x1302d) = 0x199;
      func_0x180673140(&LAB_180433db0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x1302d);
    if (*(char *)(lVal_15 + 0x1302e) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x99;
      *(uint8_t *)(lVal_15 + 0x1302e) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae5f;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_9e = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_9e = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13048) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13048) = 1;
      *(uint64_t *)(lVal_15 + 0x13038) = 0xdfa6f9e2a5fb26d6;
      *(uint32_t *)(lVal_15 + 0x13040) = 0xacf53aea;
      *(uint16_t *)(lVal_15 + 0x13044) = 0x18b;
      func_0x180673140(&LAB_180433dd0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x13038);
    if (*(char *)(lVal_15 + 0x13045) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xffc3978bc98f5399;
      *(uint *)(lVal_15 + 0x13040) = *(uint *)(lVal_15 + 0x13040) ^ 0xc98f5399;
      *(byte *)(lVal_15 + 0x13044) = *(byte *)(lVal_15 + 0x13044) ^ 0x8b;
      *(uint8_t *)(lVal_15 + 0x13045) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae6c;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_9d = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_9d = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    pU64_18 = local_90;
    lVal_15 = (int64_t)local_90 + 0xcc;
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    uVal_34 = 0x40800000;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801cd2e0(pU64_18,ptr4_U64_22,pU64_21,lVal_15,CONCAT44(uVal_30,uVal_7),
                  CONCAT44(uVal_33,0x3f800000),0x40800000,&local_4f8,0);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_4b8 = &PTR_LAB_1806cdbb0;
    local_4b0 = local_90;
    local_480 = &local_4b8;
    local_358 = local_90[0x1a];
    uStack_350 = local_90[0x1b];
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1304c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x1304c) = 1;
      *(uint16_t *)(lVal_15 + 0x13049) = 0x1e7;
      func_0x180673140(&LAB_180433e00);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x13049);
    if (*(char *)(lVal_15 + 0x1304a) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xe7;
      *(uint8_t *)(lVal_15 + 0x1304a) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae79;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a0 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_a0 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13060) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13060) = 1;
      *(uint8_t *)(lVal_15 + 0x1305e) = 1;
      *(uint64_t *)(lVal_15 + 0x13050) = 0xbbb0fbc6e969fea8;
      *(uint32_t *)(lVal_15 + 0x13058) = 0xea71e484;
      *(uint16_t *)(lVal_15 + 0x1305c) = 0x95dd;
      func_0x180673140(&LAB_180433e20);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x13050);
    if (*(char *)(lVal_15 + 0x1305e) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x9bd595af851d8be7;
      *(uint *)(lVal_15 + 0x13058) = *(uint *)(lVal_15 + 0x13058) ^ 0x851d8be7;
      *(byte *)(lVal_15 + 0x1305c) = *(byte *)(lVal_15 + 0x1305c) ^ 0xaf;
      *(byte *)(lVal_15 + 0x1305d) = *(byte *)(lVal_15 + 0x1305d) ^ 0x95;
      *(uint8_t *)(lVal_15 + 0x1305e) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae86;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_9f = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_9f = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    pU64_11 = local_90;
    pU64_6 = local_90 + 0x1a;
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    pU64_18 = &local_358;
    uVal_34 = uVal_34 & 0xffffff00;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801cd600(pU64_11,ptr4_U64_22,pU64_21,pU64_6,pU64_18,&local_4b8,uVal_34);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_478 = &PTR_LAB_1806cdb80;
    local_470 = local_90;
    local_440 = &local_478;
    uVal_8 = *(uint8_t *)(local_90 + 0x1c);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13064) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13064) = 1;
      *(uint16_t *)(lVal_15 + 0x13061) = 0x173;
      func_0x180673140(&LAB_180433e50);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x13061);
    if (*(char *)(lVal_15 + 0x13062) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x73;
      *(uint8_t *)(lVal_15 + 0x13062) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803dae93;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a2 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_a2 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13078) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13078) = 1;
      *(uint8_t *)(lVal_15 + 0x13076) = 1;
      *(uint64_t *)(lVal_15 + 0x13068) = 0x5680e1ffd5e63c21;
      *(uint32_t *)(lVal_15 + 0x13070) = 0xc9f63d01;
      *(uint16_t *)(lVal_15 + 0x13074) = 0xc1e8;
      func_0x180673140(&LAB_180433e70);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x13068);
    if (*(char *)(lVal_15 + 0x13076) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x39e3c19bbb935373;
      *(uint *)(lVal_15 + 0x13070) = *(uint *)(lVal_15 + 0x13070) ^ 0xbb935373;
      *(byte *)(lVal_15 + 0x13074) = *(byte *)(lVal_15 + 0x13074) ^ 0x9b;
      *(byte *)(lVal_15 + 0x13075) = *(byte *)(lVal_15 + 0x13075) ^ 0xc1;
      *(uint8_t *)(lVal_15 + 0x13076) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803daea0;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a1 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_a1 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    pU64_11 = local_90;
    pU64_6 = local_90 + 0x1c;
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    ptr3_U64_31 = &local_478;
    uVal_16 = CONCAT71((int7)((uint64_t)pU64_18 >> 8),uVal_8);
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801ccd70(pU64_11,ptr4_U64_22,pU64_21,pU64_6,uVal_16,ptr3_U64_31,uVal_34 & 0xffffff00);
    uVal_33 = (uint32_t)((uint64_t)ptr3_U64_31 >> 0x20);
    uVal_30 = (uint32_t)((uint64_t)uVal_16 >> 0x20);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_438 = &PTR_LAB_1806cdbe0;
    local_430 = local_90;
    local_400 = &local_438;
    uVal_7 = *(uint32_t *)((int64_t)local_90 + 0xe4);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1307c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x1307c) = 1;
      *(uint16_t *)(lVal_15 + 0x13079) = 0x199;
      func_0x180673140(&LAB_180433ea0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x13079);
    if (*(char *)(lVal_15 + 0x1307a) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x99;
      *(uint8_t *)(lVal_15 + 0x1307a) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803daead;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a4 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_a4 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1308c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x1308c) = 1;
      *(uint8_t *)(lVal_15 + 0x1308a) = 1;
      *(uint64_t *)(lVal_15 + 0x13080) = 0xb41a194705d828cb;
      *(uint16_t *)(lVal_15 + 0x13088) = 0x47ea;
      func_0x180673140(&LAB_180433ec0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x13080);
    if (*(char *)(lVal_15 + 0x1308a) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xc77f77236bad4799;
      *(byte *)(lVal_15 + 0x13088) = *(byte *)(lVal_15 + 0x13088) ^ 0x99;
      *(byte *)(lVal_15 + 0x13089) = *(byte *)(lVal_15 + 0x13089) ^ 0x47;
      *(uint8_t *)(lVal_15 + 0x1308a) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803daeba;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a3 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_a3 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    pU64_18 = local_90;
    lVal_15 = (int64_t)local_90 + 0xe4;
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    uVal_16 = CONCAT44(uVal_30,uVal_7);
    uVal_32 = CONCAT44(uVal_33,0x3f000000);
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801cd2e0(pU64_18,ptr4_U64_22,pU64_21,lVal_15,uVal_16,uVal_32,0x42340000,&local_438,0);
    uVal_33 = (uint32_t)((uint64_t)uVal_32 >> 0x20);
    uVal_30 = (uint32_t)((uint64_t)uVal_16 >> 0x20);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_3f8 = &PTR_LAB_1806cdbe0;
    local_3f0 = local_90;
    local_3c0 = &local_3f8;
    uVal_7 = *(uint32_t *)(local_90 + 0x1d);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13090) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13090) = 1;
      *(uint16_t *)(lVal_15 + 0x1308d) = 0x1dd;
      func_0x180673140(&LAB_180433ef0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x1308d);
    if (*(char *)(lVal_15 + 0x1308e) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xdd;
      *(uint8_t *)(lVal_15 + 0x1308e) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803daec7;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a6 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_a6 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x130a0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x130a0) = 1;
      *(uint64_t *)(lVal_15 + 0x13098) = 0x1013adac2610a8f;
      func_0x180673140(&LAB_180433f10);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x13098);
    if (*(char *)(lVal_15 + 0x1309f) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_15 + 0x1309d) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_15 + 0x1309c) << 0x20) ^ SUB168(_DAT_1806c8f10,0);
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803daed4;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a5 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_a5 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    pU64_6 = local_90;
    pU64_18 = local_90 + 0x1d;
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    uVal_16 = CONCAT44(uVal_30,uVal_7);
    uVal_34 = 0x41700000;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801cd2e0(pU64_6,ptr4_U64_22,pU64_21,pU64_18,uVal_16,CONCAT44(uVal_33,0x3dcccccd),0x41700000,
                  &local_3f8,0);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_208 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_208 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_240);
    }
    pU64_5 = (uint8_t *)((int64_t)local_90 + 0xec);
    uVal_8 = *pU64_5;
    local_b8 = _UNK_1806cbe3a;
    uStack_b6 = _UNK_1806cbe3c;
    uStack_b2 = (uint16_t)_UNK_1806cbe40;
    uStack_b0 = (uint16_t)((uint)_UNK_1806cbe40 >> 0x10);
    local_c8 = _DAT_1806cbe2a;
    uStack_c4 = _UNK_1806cbe2e;
    uStack_c0 = _UNK_1806cbe32;
    uStack_be = _DAT_1806cbe34;
    uStack_bc = _UNK_1806cbe36;
    uStack_ba = _UNK_1806cbe38;
    local_d8._8_8_ = _UNK_1806cbe22;
    local_d8._0_8_ = _DAT_1806cbe1a;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x130cc) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x130cc) = 1;
      func_0x18012b7b0(lVal_15 + 0x130a1,local_d8);
      func_0x180673140(&LAB_180433f40);
    }
    uVal_10 = _UNK_1806b292c;
    uVal_29 = _UNK_1806b2928;
    uVal_27 = _UNK_1806b2924;
    uVal_25 = _DAT_1806b2920;
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x130a1);
    if (*(char *)(lVal_15 + 0x130cb) == '\x01') {
      uVal_24 = *(uint *)(lVal_15 + 0x130a5) ^ _UNK_1806b2924;
      uVal_26 = *(uint *)(lVal_15 + 0x130a9) ^ _UNK_1806b2928;
      uVal_28 = *(uint *)(lVal_15 + 0x130ad) ^ _UNK_1806b292c;
      *pU64_3 = *pU64_3 ^ _DAT_1806b2920;
      *(uint *)(lVal_15 + 0x130a5) = uVal_24;
      *(uint *)(lVal_15 + 0x130a9) = uVal_26;
      *(uint *)(lVal_15 + 0x130ad) = uVal_28;
      *(uint *)(lVal_15 + 0x130b1) = *(uint *)(lVal_15 + 0x130b1) ^ uVal_25;
      *(uint *)(lVal_15 + 0x130b5) = *(uint *)(lVal_15 + 0x130b5) ^ uVal_27;
      *(uint *)(lVal_15 + 0x130b9) = *(uint *)(lVal_15 + 0x130b9) ^ uVal_29;
      *(uint *)(lVal_15 + 0x130bd) = *(uint *)(lVal_15 + 0x130bd) ^ uVal_10;
      *(uint64_t *)(lVal_15 + 0x130c1) = *(uint64_t *)(lVal_15 + 0x130c1) ^ SUB168(_DAT_1806c8f20,0)
      ;
      *(byte *)(lVal_15 + 0x130c9) = *(byte *)(lVal_15 + 0x130c9) ^ 0xef;
      *(byte *)(lVal_15 + 0x130ca) = *(byte *)(lVal_15 + 0x130ca) ^ 0xb5;
      *(uint8_t *)(lVal_15 + 0x130cb) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_3);
    if ((int64_t)sz_14 < 0) goto LAB_1803daee1;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_63 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_63 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_3,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x130e0) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x130e0) = 1;
      *(uint64_t *)(lVal_15 + 0x130d0) = 0xe427af46c8a8d9bf;
      *(uint32_t *)(lVal_15 + 0x130d8) = 0xc5a7c080;
      *(uint16_t *)(lVal_15 + 0x130dc) = 0x123;
      func_0x180673140(&LAB_180433f70);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x130d0);
    if (*(char *)(lVal_15 + 0x130dd) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x8707dd23b1c9b5ef;
      *(uint *)(lVal_15 + 0x130d8) = *(uint *)(lVal_15 + 0x130d8) ^ 0xb1c9b5ef;
      *(byte *)(lVal_15 + 0x130dc) = *(byte *)(lVal_15 + 0x130dc) ^ 0x23;
      *(uint8_t *)(lVal_15 + 0x130dd) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803daeee;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a7 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_a7 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU64_1,sz_14);
    pU64_21[sz_14] = 0;
    pU64_21 = local_240;
    uVal_16 = CONCAT71((int7)((uint64_t)uVal_16 >> 8),uVal_8);
    pU64_20 = local_d8;
    ptr4_U64_22 = &local_88;
    func_0x1801ccd70(local_90,pU64_20,ptr4_U64_22,pU64_5,uVal_16,pU64_21,uVal_34 & 0xffffff00);
    uVal_33 = (uint32_t)((uint64_t)pU64_21 >> 0x20);
    uVal_30 = (uint32_t)((uint64_t)uVal_16 >> 0x20);
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    local_1c8 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_1c8 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_200);
    }
    pU64_18 = local_90 + 0x1e;
    uVal_7 = *(uint32_t *)pU64_18;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x130e4) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x130e4) = 1;
      *(uint16_t *)(lVal_15 + 0x130e1) = 0x1ed;
      func_0x180673140(&LAB_180433fa0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x130e1);
    if (*(char *)(lVal_15 + 0x130e2) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xed;
      *(uint8_t *)(lVal_15 + 0x130e2) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803daefb;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a9 = 1;
        pU64_20 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_a9 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_20 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_20 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_20;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_20,pU8_2,sz_14);
    pU64_20[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x130f8) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x130f8) = 1;
      *(uint8_t *)(lVal_15 + 0x130f4) = 1;
      *(uint64_t *)(lVal_15 + 0x130e8) = 0xabfc2d2a1993aa0;
      *(uint32_t *)(lVal_15 + 0x130f0) = 0x81923580;
      func_0x180673140(&LAB_180433fc0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x130e8);
    if (*(char *)(lVal_15 + 0x130f4) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x7fd3adb181e15bed;
      *(uint *)(lVal_15 + 0x130f0) = *(uint *)(lVal_15 + 0x130f0) ^ 0x81e15bed;
      *(uint8_t *)(lVal_15 + 0x130f4) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803daf08;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_a8 = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_a8 = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    uVal_16 = CONCAT44(uVal_30,uVal_7);
    uVal_32 = CONCAT44(uVal_33,1);
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801ccff0(local_90,ptr4_U64_22,pU64_21,pU64_18,uVal_16,uVal_32,0x14,local_200,0);
    uVal_33 = (uint32_t)((uint64_t)uVal_32 >> 0x20);
    uVal_30 = (uint32_t)((uint64_t)uVal_16 >> 0x20);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_188 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_188 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_1c0);
    }
    pU64_12 = (uint32_t *)((int64_t)local_90 + 0xf4);
    uVal_7 = *pU64_12;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x130fc) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x130fc) = 1;
      *(uint16_t *)(lVal_15 + 0x130f9) = 0x153;
      func_0x180673140(&LAB_180433ff0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_15 + 0x130f9);
    if (*(char *)(lVal_15 + 0x130fa) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x53;
      *(uint8_t *)(lVal_15 + 0x130fa) = 0;
    }
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen((char *)pU8_2);
    if ((int64_t)sz_14 < 0) goto LAB_1803daf15;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_ab = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_ab = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,pU8_2,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1310c) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x1310c) = 1;
      *(uint64_t *)(lVal_15 + 0x13100) = 0xf2f492db4f01f21e;
      *(uint16_t *)(lVal_15 + 0x13108) = 0x153;
      func_0x180673140(&LAB_180434010);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x13100);
    if (*(char *)(lVal_15 + 0x13109) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x8183fda96f799353;
      *(byte *)(lVal_15 + 0x13108) = *(byte *)(lVal_15 + 0x13108) ^ 0x53;
      *(uint8_t *)(lVal_15 + 0x13109) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803daf22;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_aa = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_aa = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    uVal_16 = CONCAT44(uVal_30,uVal_7);
    uVal_32 = CONCAT44(uVal_33,1);
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801ccff0(local_90,ptr4_U64_22,pU64_21,pU64_12,uVal_16,uVal_32,7,local_1c0,0);
    uVal_33 = (uint32_t)((uint64_t)uVal_32 >> 0x20);
    uVal_30 = (uint32_t)((uint64_t)uVal_16 >> 0x20);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_148 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_148 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_180);
    }
    pU64_18 = local_90 + 0x1f;
    uVal_7 = *(uint32_t *)pU64_18;
    local_88 = _DAT_1806cbe44;
    uStack_80 = (uint32_t)_UNK_1806cbe4c;
    uStack_7c = (uint16_t)((uint64_t)_UNK_1806cbe4c >> 0x20);
    uStack_7a = 0x7c20;
    uStack_78 = 0xe328c9bf;
    uStack_74 = 0xb9b9;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13124) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13124) = 1;
      func_0x18007cab0(lVal_15 + 0x1310d,&local_88);
      func_0x180673140(&LAB_180434040);
    }
    fnPtr_4 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x1310d);
    func_0x180441750(fnPtr_4);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen(fnPtr_4);
    if ((int64_t)sz_14 < 0) goto LAB_1803daf2f;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_64 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_64 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,fnPtr_4,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13134) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13134) = 1;
      *(uint8_t *)(lVal_15 + 0x13132) = 1;
      *(uint64_t *)(lVal_15 + 0x13128) = 0x6324caedef35d8cb;
      *(uint16_t *)(lVal_15 + 0x13130) = 0xbdfa;
      func_0x180673140(&LAB_180434070);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x13128);
    if (*(char *)(lVal_15 + 0x13132) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x194db9cd9b4dbd9f;
      *(byte *)(lVal_15 + 0x13130) = *(byte *)(lVal_15 + 0x13130) ^ 0x9f;
      *(byte *)(lVal_15 + 0x13131) = *(byte *)(lVal_15 + 0x13131) ^ 0xbd;
      *(uint8_t *)(lVal_15 + 0x13132) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803daf3c;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_ac = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_ac = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    uVal_34 = 0x40000000;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801cd2e0(local_90,ptr4_U64_22,pU64_21,pU64_18,CONCAT44(uVal_30,uVal_7),
                  CONCAT44(uVal_33,0x3dcccccd),0x40000000,local_180,0);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_108 = 0;
    if (DAT_180840048 != (uint64_t *)0x0) {
      local_108 = (**(func_ptr_t *)*DAT_180840048)(DAT_180840048,local_140);
    }
    pU64_5 = (uint8_t *)((int64_t)local_90 + 0xfc);
    uVal_8 = *pU64_5;
    uStack_78 = _UNK_1806cbe6a;
    uStack_74 = (uint16_t)_UNK_1806cbe6e;
    uStack_72 = (uint16_t)((uint)_UNK_1806cbe6e >> 0x10);
    uStack_70 = _UNK_1806cbe72;
    local_88 = _DAT_1806cbe5a;
    uStack_80 = _UNK_1806cbe62;
    uStack_7c = (uint16_t)_DAT_1806cbe66;
    uStack_7a = (uint16_t)((uint)_DAT_1806cbe66 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13154) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13154) = 1;
      func_0x18008fba0(lVal_15 + 0x13135,&local_88);
      func_0x180673140(&LAB_1804340a0);
    }
    fnPtr_4 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x13135);
    func_0x180441780(fnPtr_4);
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_be = 0;
    uStack_bc = 0;
    uStack_ba = 0;
    local_d8 = (uint8_t  [16])0x0;
    sz_14 = strlen(fnPtr_4);
    if ((int64_t)sz_14 < 0) goto LAB_1803daf49;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_65 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
      }
      else {
        local_65 = 1;
        lVal_15 = func_0x180672de0(uVal_23 + 0x28);
        pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_15;
      }
      local_d8._0_8_ = pU64_21;
    }
    local_c8 = (uint32_t)sz_14;
    uStack_c4 = (uint32_t)(sz_14 >> 0x20);
    uStack_c0 = (uint16_t)uVal_23;
    uStack_be = (uint16_t)(uVal_23 >> 0x10);
    uStack_bc = (uint16_t)(uVal_23 >> 0x20);
    uStack_ba = (uint16_t)(uVal_23 >> 0x30);
    func_0x1806aa960(pU64_21,fnPtr_4,sz_14);
    pU64_21[sz_14] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13168) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13168) = 1;
      *(uint8_t *)(lVal_15 + 0x13166) = 1;
      *(uint64_t *)(lVal_15 + 0x13158) = 0xe110b2cd79482a75;
      *(uint32_t *)(lVal_15 + 0x13160) = 0x6d5a2659;
      *(uint16_t *)(lVal_15 + 0x13164) = 0xd3d2;
      func_0x180673140(&LAB_1804340d0);
    }
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_15 + 0x13158);
    if (*(char *)(lVal_15 + 0x13166) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xc169d3a1093b4331;
      *(uint *)(lVal_15 + 0x13160) = *(uint *)(lVal_15 + 0x13160) ^ 0x93b4331;
      *(byte *)(lVal_15 + 0x13164) = *(byte *)(lVal_15 + 0x13164) ^ 0xa1;
      *(byte *)(lVal_15 + 0x13165) = *(byte *)(lVal_15 + 0x13165) ^ 0xd3;
      *(uint8_t *)(lVal_15 + 0x13166) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_1);
    if ((int64_t)sz_14 < 0) goto LAB_1803daf56;
    uVal_23 = 0xf;
    if (0xf < sz_14) {
      uVal_13 = sz_14 | 0xf;
      uVal_23 = 0x16;
      if (0x16 < uVal_13) {
        uVal_23 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        local_ad = 1;
        ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
        local_88 = ptr4_U64_22;
      }
      else {
        local_ad = 1;
        ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
        ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
        ptr4_U64_22[-1] = ptr3_U64_17;
        local_88 = ptr4_U64_22;
      }
    }
    uStack_78 = (uint32_t)sz_14;
    uStack_74 = (uint16_t)(sz_14 >> 0x20);
    uStack_72 = (uint16_t)(sz_14 >> 0x30);
    uStack_70 = (uint32_t)uVal_23;
    uStack_6c = (uint32_t)(uVal_23 >> 0x20);
    func_0x1806aa960(ptr4_U64_22,pU64_1,sz_14);
    *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
    uVal_34 = uVal_34 & 0xffffff00;
    ptr4_U64_22 = &local_88;
    pU64_21 = local_d8;
    func_0x1801ccd70(local_90,ptr4_U64_22,pU64_21,pU64_5,uVal_8,local_140,uVal_34);
    uVal_23 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      ptr4_U64_19 = local_88;
      if (0xfff < uVal_13) {
        ptr4_U64_19 = (uint64_t ****)local_88[-1];
        if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_19)))
        goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(ptr4_U64_19,uVal_13);
    }
    uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
    if (0xf < uVal_23) {
      uVal_13 = uVal_23 + 1;
      lVal_15 = local_d8._0_8_;
      if (0xfff < uVal_13) {
        lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
        uVal_13 = uVal_23 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_13);
    }
    local_3b8 = &PTR_LAB_1806cdc10;
    local_3b0 = local_90;
    local_380 = &local_3b8;
    uVal_8 = *(uint8_t *)((int64_t)local_90 + 0xfd);
    local_c8 = _DAT_1806cbe86;
    uStack_c4 = _UNK_1806cbe8a;
    uStack_c0 = (uint16_t)_UNK_1806cbe8e;
    uStack_be = (uint16_t)((uint)_UNK_1806cbe8e >> 0x10);
    uStack_bc = (uint16_t)_UNK_1806cbe92;
    uStack_ba = (uint16_t)((uint)_UNK_1806cbe92 >> 0x10);
    local_d8._8_8_ = _UNK_1806cbe7e;
    local_d8._0_8_ = _DAT_1806cbe76;
    local_b8 = 0xcac0;
    uStack_b6 = 0xac1c3df1;
    uStack_b2 = 0x6f5c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13194) == '\0') {
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_15 + 0x13194) = 1;
      func_0x1801b39d0(lVal_15 + 0x13169,local_d8);
      func_0x180673140(&LAB_180434100);
    }
    uVal_10 = _UNK_1806b68bc;
    uVal_29 = _UNK_1806b68b8;
    uVal_27 = _UNK_1806b68b4;
    uVal_25 = _DAT_1806b68b0;
    lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint *)(lVal_15 + 0x13169);
    if (*(char *)(lVal_15 + 0x13191) == '\x01') {
      uVal_24 = *(uint *)(lVal_15 + 0x1316d) ^ _UNK_1806b68b4;
      uVal_26 = *(uint *)(lVal_15 + 0x13171) ^ _UNK_1806b68b8;
      uVal_28 = *(uint *)(lVal_15 + 0x13175) ^ _UNK_1806b68bc;
      *pU64_3 = *pU64_3 ^ _DAT_1806b68b0;
      *(uint *)(lVal_15 + 0x1316d) = uVal_24;
      *(uint *)(lVal_15 + 0x13171) = uVal_26;
      *(uint *)(lVal_15 + 0x13175) = uVal_28;
      *(uint *)(lVal_15 + 0x13179) = *(uint *)(lVal_15 + 0x13179) ^ uVal_25;
      *(uint *)(lVal_15 + 0x1317d) = *(uint *)(lVal_15 + 0x1317d) ^ uVal_27;
      *(uint *)(lVal_15 + 0x13181) = *(uint *)(lVal_15 + 0x13181) ^ uVal_29;
      *(uint *)(lVal_15 + 0x13185) = *(uint *)(lVal_15 + 0x13185) ^ uVal_10;
      *(uint64_t *)(lVal_15 + 0x13189) = *(uint64_t *)(lVal_15 + 0x13189) ^ SUB168(_DAT_1806c8f30,0)
      ;
      *(uint8_t *)(lVal_15 + 0x13191) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = (uint64_t ****)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_14 = strlen((char *)pU64_3);
    if (-1 < (int64_t)sz_14) {
      uVal_23 = 0xf;
      if (0xf < sz_14) {
        uVal_13 = sz_14 | 0xf;
        uVal_23 = 0x16;
        if (0x16 < uVal_13) {
          uVal_23 = uVal_13;
        }
        if (uVal_13 < 0xfff) {
          local_67 = 1;
          ptr4_U64_22 = (uint64_t ****)func_0x180672de0(uVal_23 + 1);
          local_88 = ptr4_U64_22;
        }
        else {
          local_67 = 1;
          ptr3_U64_17 = (uint64_t ***)func_0x180672de0(uVal_23 + 0x28);
          ptr4_U64_22 = (uint64_t ****)((int64_t)ptr3_U64_17 + 0x27U & 0xffffffffffffffe0);
          ptr4_U64_22[-1] = ptr3_U64_17;
          local_88 = ptr4_U64_22;
        }
      }
      uStack_78 = (uint32_t)sz_14;
      uStack_74 = (uint16_t)(sz_14 >> 0x20);
      uStack_72 = (uint16_t)(sz_14 >> 0x30);
      uStack_70 = (uint32_t)uVal_23;
      uStack_6c = (uint32_t)(uVal_23 >> 0x20);
      func_0x1806aa960(ptr4_U64_22,pU64_3,sz_14);
      *(uint8_t *)((int64_t)ptr4_U64_22 + sz_14) = 0;
      local_f8 = _DAT_1806cbe9e;
      uStack_f0 = _UNK_1806cbea6;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x131a8) == '\0') {
        lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_15 + 0x131a8) = 1;
        func_0x18007d150(lVal_15 + 0x13195,&local_f8);
        func_0x180673140(&LAB_180434130);
      }
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_3 = (uint *)(lVal_15 + 0x13195);
      if (*(char *)(lVal_15 + 0x131a5) == '\x01') {
        uVal_25 = *(uint *)(lVal_15 + 0x13199) ^ _UNK_1806b68b4;
        uVal_27 = *(uint *)(lVal_15 + 0x1319d) ^ _UNK_1806b68b8;
        uVal_29 = *(uint *)(lVal_15 + 0x131a1) ^ _UNK_1806b68bc;
        *pU64_3 = *pU64_3 ^ _DAT_1806b68b0;
        *(uint *)(lVal_15 + 0x13199) = uVal_25;
        *(uint *)(lVal_15 + 0x1319d) = uVal_27;
        *(uint *)(lVal_15 + 0x131a1) = uVal_29;
        *(uint8_t *)(lVal_15 + 0x131a5) = 0;
      }
      local_d8 = (uint8_t  [16])0x0;
      sz_14 = strlen((char *)pU64_3);
      if (-1 < (int64_t)sz_14) {
        uVal_23 = 0xf;
        if (0xf < sz_14) {
          uVal_13 = sz_14 | 0xf;
          uVal_23 = 0x16;
          if (0x16 < uVal_13) {
            uVal_23 = uVal_13;
          }
          if (uVal_13 < 0xfff) {
            local_66 = 1;
            pU64_21 = (uint8_t *)func_0x180672de0(uVal_23 + 1);
          }
          else {
            local_66 = 1;
            lVal_15 = func_0x180672de0(uVal_23 + 0x28);
            pU64_21 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_21 + -8) = lVal_15;
          }
          local_d8._0_8_ = pU64_21;
        }
        pU64_18 = local_90;
        lVal_15 = (int64_t)local_90 + 0xfd;
        local_c8 = (uint32_t)sz_14;
        uStack_c4 = (uint32_t)(sz_14 >> 0x20);
        uStack_c0 = (uint16_t)uVal_23;
        uStack_be = (uint16_t)(uVal_23 >> 0x10);
        uStack_bc = (uint16_t)(uVal_23 >> 0x20);
        uStack_ba = (uint16_t)(uVal_23 >> 0x30);
        func_0x1806aa960(pU64_21,pU64_3,sz_14);
        pU64_21[sz_14] = 0;
        func_0x1801ccd70(pU64_18,local_d8,&local_88,lVal_15,uVal_8,&local_3b8,uVal_34 & 0xffffff00);
        uVal_23 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,uStack_c0)));
        if (0xf < uVal_23) {
          uVal_13 = uVal_23 + 1;
          lVal_15 = local_d8._0_8_;
          if (0xfff < uVal_13) {
            lVal_15 = *(int64_t *)(local_d8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_d8._0_8_ + -8) - lVal_15)) goto LAB_1803dad9b;
            uVal_13 = uVal_23 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_15,uVal_13);
        }
        uVal_23 = CONCAT44(uStack_6c,uStack_70);
        if (0xf < uVal_23) {
          uVal_13 = uVal_23 + 1;
          ptr4_U64_22 = local_88;
          if (0xfff < uVal_13) {
            ptr4_U64_22 = (uint64_t ****)local_88[-1];
            if (0x1f < (uint64_t)((int64_t)local_88 + (-8 - (int64_t)ptr4_U64_22))) {
LAB_1803dad9b:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_13 = uVal_23 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_22,uVal_13);
        }
        return local_90;
      }
      goto LAB_1803daf70;
    }
  }
  local_67 = 1;
  func_0x18007ba70();
LAB_1803daf70:
  local_66 = 1;
  func_0x18007ba70();
  fnPtr_9 = (func_ptr_t )swi(3);
  pU64_18 = (uint64_t *)(*fnPtr_9)();
  return pU64_18;
}

// Unwind@1803daf80
void Unwind_1803daf80(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x300);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2c8));
    *(uint64_t *)(param_2 + 0x300) = 0;
  }
  return;
}

// Unwind@1803daff0
void Unwind_1803daff0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x340);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x308));
    *(uint64_t *)(param_2 + 0x340) = 0;
  }
  return;
}

// Unwind@1803db060
void Unwind_1803db060(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x12fa8) = 0;
  *(uint8_t *)(param_2 + 0x5a7) = 1;
  return;
}

// Unwind@1803db0c0
void Unwind_1803db0c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x380);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x348));
    *(uint64_t *)(param_2 + 0x380) = 0;
  }
  return;
}

// Unwind@1803db130
void Unwind_1803db130(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x3c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x388));
    *(uint64_t *)(param_2 + 0x3c0) = 0;
  }
  return;
}

// Unwind@1803db1a0
void Unwind_1803db1a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x400);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x3c8));
    *(uint64_t *)(param_2 + 0x400) = 0;
  }
  return;
}

// Unwind@1803db210
void Unwind_1803db210(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x130cc) = 0;
  *(uint8_t *)(param_2 + 0x5a5) = 1;
  return;
}

// Unwind@1803db270
void Unwind_1803db270(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x440);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x408));
    *(uint64_t *)(param_2 + 0x440) = 0;
  }
  return;
}

// Unwind@1803db2e0
void Unwind_1803db2e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x480);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x448));
    *(uint64_t *)(param_2 + 0x480) = 0;
  }
  return;
}

// Unwind@1803db350
void Unwind_1803db350(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x4c0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x488));
    *(uint64_t *)(param_2 + 0x4c0) = 0;
  }
  return;
}

// Unwind@1803db3c0
void Unwind_1803db3c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13124) = 0;
  *(uint8_t *)(param_2 + 0x5a4) = 1;
  return;
}

// Unwind@1803db420
void Unwind_1803db420(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x500);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x4c8));
    *(uint64_t *)(param_2 + 0x500) = 0;
  }
  return;
}

// Unwind@1803db490
void Unwind_1803db490(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13154) = 0;
  *(uint8_t *)(param_2 + 0x5a3) = 1;
  return;
}

// Unwind@1803db4f0
void Unwind_1803db4f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x530);
  return;
}

// Unwind@1803db540
void Unwind_1803db540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  return;
}

// Unwind@1803db590
void Unwind_1803db590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x530);
  return;
}

// Unwind@1803db5e0
void Unwind_1803db5e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x577) = 0;
  return;
}

// Unwind@1803db630
void Unwind_1803db630(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x577);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x576) = uVal_1;
  return;
}

// Unwind@1803db680
void Unwind_1803db680(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x576) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x300), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x2c8));
    *(uint64_t *)(param_2 + 0x300) = 0;
  }
  return;
}

// Unwind@1803db6f0
void Unwind_1803db6f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x575) = 0;
  return;
}

// Unwind@1803db740
void Unwind_1803db740(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x575);
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x5a7) = uVal_1;
  return;
}

// Unwind@1803db790
void Unwind_1803db790(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x5a7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x340), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x308));
    *(uint64_t *)(param_2 + 0x340) = 0;
  }
  return;
}

// Unwind@1803db800
void Unwind_1803db800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x574) = 0;
  return;
}

// Unwind@1803db850
void Unwind_1803db850(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x574);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x573) = uVal_1;
  return;
}

// Unwind@1803db8a0
void Unwind_1803db8a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x573) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x380), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x348));
    *(uint64_t *)(param_2 + 0x380) = 0;
  }
  return;
}

// Unwind@1803db910
void Unwind_1803db910(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x572) = 0;
  return;
}

// Unwind@1803db960
void Unwind_1803db960(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x572);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x571) = uVal_1;
  return;
}

// Unwind@1803db9b0
void Unwind_1803db9b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x571) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1803dba20
void Unwind_1803dba20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x570) = 0;
  return;
}

// Unwind@1803dba70
void Unwind_1803dba70(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x570);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x56f) = uVal_1;
  return;
}

// Unwind@1803dbac0
void Unwind_1803dbac0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x56f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x3c0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x388));
    *(uint64_t *)(param_2 + 0x3c0) = 0;
  }
  return;
}

// Unwind@1803dbb30
void Unwind_1803dbb30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x5a6) = 0;
  return;
}

// Unwind@1803dbb80
void Unwind_1803dbb80(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x5a6);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x56e) = uVal_1;
  return;
}

// Unwind@1803dbbd0
void Unwind_1803dbbd0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x56e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1803dbc40
void Unwind_1803dbc40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x56d) = 0;
  return;
}

// Unwind@1803dbc90
void Unwind_1803dbc90(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x56d);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x56c) = uVal_1;
  return;
}

// Unwind@1803dbce0
void Unwind_1803dbce0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x56c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1803dbd50
void Unwind_1803dbd50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x56b) = 0;
  return;
}

// Unwind@1803dbda0
void Unwind_1803dbda0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x56b);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x56a) = uVal_1;
  return;
}

// Unwind@1803dbdf0
void Unwind_1803dbdf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x56a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@1803dbe60
void Unwind_1803dbe60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x569) = 0;
  return;
}

// Unwind@1803dbeb0
void Unwind_1803dbeb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x569);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x568) = uVal_1;
  return;
}

// Unwind@1803dbf00
void Unwind_1803dbf00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x568) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x188), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x150));
    *(uint64_t *)(param_2 + 0x188) = 0;
  }
  return;
}

// Unwind@1803dbf70
void Unwind_1803dbf70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x567) = 0;
  return;
}

// Unwind@1803dbfc0
void Unwind_1803dbfc0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x567);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x566) = uVal_1;
  return;
}

// Unwind@1803dc010
void Unwind_1803dc010(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x566) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1c8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 400));
    *(uint64_t *)(param_2 + 0x1c8) = 0;
  }
  return;
}

// Unwind@1803dc080
void Unwind_1803dc080(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x565) = 0;
  return;
}

// Unwind@1803dc0d0
void Unwind_1803dc0d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x565);
  func_0x180001e70(param_2 + 0x530);
  *(uint8_t *)(param_2 + 0x564) = uVal_1;
  return;
}

// Unwind@1803dc120
void Unwind_1803dc120(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x564) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x208), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1d0));
    *(uint64_t *)(param_2 + 0x208) = 0;
  }
  return;
}

// Unwind@1803dc190
void Unwind_1803dc190(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x580);
  *(uint8_t *)(param_2 + 0x563) = 0;
  return;
}
