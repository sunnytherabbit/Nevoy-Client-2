#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1801f0470
void Unwind_1801f0470(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x30c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1801f04e0
void Unwind_1801f04e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x30b) = 0;
  return;
}

// Unwind@1801f0530
void Unwind_1801f0530(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x30b);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x30a) = uVal_1;
  return;
}

// Unwind@1801f0580
void Unwind_1801f0580(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x30a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1801f05f0
void Unwind_1801f05f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x309) = 0;
  return;
}

// Unwind@1801f0640
void Unwind_1801f0640(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x309);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x308) = uVal_1;
  return;
}

// Unwind@1801f0690
void Unwind_1801f0690(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x308) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x288), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x250));
    *(uint64_t *)(param_2 + 0x288) = 0;
  }
  return;
}

// Unwind@1801f0700
void Unwind_1801f0700(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x2d8));
  return;
}

// Unwind@1801f0750
void Unwind_1801f0750(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7f6c) = 0;
  return;
}

// Unwind@1801f07b0
void Unwind_1801f07b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x7fe4) = 0;
  *(uint8_t *)(param_2 + 0x316) = 1;
  return;
}

// Unwind@1801f0ad0
void Unwind_1801f0ad0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8084) = 0;
  return;
}

// func_0x1801f0b10
uint64_t * func_0x1801f0b10(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t extraout_var;
  uint64_t *pU64_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  uint8_t auStack_48 [32];
  _FILETIME local_28;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  if (*(char *)(param_1 + 0x81) == '\x01') {
    GetSystemTimeAsFileTime(&local_28);
    fVal_7 = DAT_1806b26b4;
    uVal_1 = ((int64_t)local_28 + 0xfe624e212ac18000U) / 10000 + 1;
    fVal_5 = (float)func_0x18068afa0((float)((int)uVal_1 + (int)(uVal_1 / 3000) * -3000) / DAT_1806b6510,
                                 DAT_1806b26b4);
    uVal_3 = DAT_1806aeae4;
    fVal_5 = fVal_5 / DAT_1806b6144;
    fVal_6 = (fVal_5 - (float)(int)fVal_5) * DAT_1806b2860;
    if ((uint)(int)fVal_5 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0001801f0bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pU64_4 = (uint64_t *)
               (*(func_ptr_t )(&DAT_1806be2bc +
                         *(int *)(&DAT_1806be2bc + CONCAT44(extraout_var,(int)fVal_5) * 4)))
                         (DAT_1806aeae4);
      return pU64_4;
    }
    *(float *)param_2 = fVal_7;
    *(uint32_t *)((int64_t)param_2 + 4) = uVal_3;
    *(float *)(param_2 + 1) = fVal_6 + fVal_7;
  }
  else {
    *param_2 = *(uint64_t *)(param_1 + 0x84);
    *(uint32_t *)(param_2 + 1) = *(uint32_t *)(param_1 + 0x8c);
    fVal_7 = *(float *)(param_1 + 0x90);
  }
  *(float *)((int64_t)param_2 + 0xc) = fVal_7;
  if (DAT_18083cf40 == (local_20 ^ (uint64_t)auStack_48)) {
    return param_2;
  }
  func_0x180673080(local_20 ^ (uint64_t)auStack_48);
  fnPtr_2 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_2)();
  return pU64_4;
}

// func_0x1801f0cc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801f0cc0(uint64_t *param_1)
{
  uint *pU64_1;
  uint64_t *pU64_2;
  uint8_t *pU64_3;
  func_ptr_t fnPtr_4;
  uint uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint64_t uVal_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t *pU64_13;
  uint8_t *pU64_14;
  uint8_t *pU64_15;
  uint8_t uVal_16;
  uint64_t uVal_17;
  uint uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint8_t local_198 [56];
  uint64_t local_160;
  uint8_t local_158 [56];
  uint64_t local_120;
  uint8_t local_118 [56];
  uint64_t local_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint8_t local_c8;
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint8_t uStack_6c;
  uint16_t uStack_6b;
  uint8_t uStack_69;
  undefined5 uStack_68;
  uint64_t *local_58;
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
               0x80dc) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x80dc) = 1;
    *(uint8_t *)(lVal_12 + 0x80da) = 1;
    uVal_8 = _UNK_1806bd860;
    uVal_7 = _UNK_1806bd85c;
    uVal_6 = _UNK_1806bd858;
    *(uint32_t *)(lVal_12 + 0x8085) = _DAT_1806bd854;
    *(uint32_t *)(lVal_12 + 0x8089) = uVal_6;
    *(uint32_t *)(lVal_12 + 0x808d) = uVal_7;
    *(uint32_t *)(lVal_12 + 0x8091) = uVal_8;
    uVal_8 = _UNK_1806bd870;
    uVal_7 = _UNK_1806bd86c;
    uVal_6 = _UNK_1806bd868;
    *(uint32_t *)(lVal_12 + 0x8095) = _DAT_1806bd864;
    *(uint32_t *)(lVal_12 + 0x8099) = uVal_6;
    *(uint32_t *)(lVal_12 + 0x809d) = uVal_7;
    *(uint32_t *)(lVal_12 + 0x80a1) = uVal_8;
    uVal_8 = _UNK_1806bd880;
    uVal_7 = _UNK_1806bd87c;
    uVal_6 = _UNK_1806bd878;
    *(uint32_t *)(lVal_12 + 0x80a5) = _DAT_1806bd874;
    *(uint32_t *)(lVal_12 + 0x80a9) = uVal_6;
    *(uint32_t *)(lVal_12 + 0x80ad) = uVal_7;
    *(uint32_t *)(lVal_12 + 0x80b1) = uVal_8;
    uVal_8 = _UNK_1806bd890;
    uVal_7 = _UNK_1806bd88c;
    uVal_6 = _UNK_1806bd888;
    *(uint32_t *)(lVal_12 + 0x80b5) = _DAT_1806bd884;
    *(uint32_t *)(lVal_12 + 0x80b9) = uVal_6;
    *(uint32_t *)(lVal_12 + 0x80bd) = uVal_7;
    *(uint32_t *)(lVal_12 + 0x80c1) = uVal_8;
    uVal_9 = _UNK_1806bd89c;
    *(uint64_t *)(lVal_12 + 0x80c5) = _DAT_1806bd894;
    *(uint64_t *)(lVal_12 + 0x80cd) = uVal_9;
    *(uint64_t *)(lVal_12 + 0x80d2) = 0xc5618db6ad2b36ef;
    func_0x180673140(&LAB_180212b30);
  }
  uVal_5 = _UNK_1806b2c9c;
  uVal_20 = _UNK_1806b2c98;
  uVal_19 = _UNK_1806b2c94;
  uVal_18 = _DAT_1806b2c90;
  lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_12 + 0x8085);
  if (*(char *)(lVal_12 + 0x80da) == '\x01') {
    uVal_21 = *(uint *)(lVal_12 + 0x8089) ^ _UNK_1806b2c94;
    uVal_22 = *(uint *)(lVal_12 + 0x808d) ^ _UNK_1806b2c98;
    uVal_23 = *(uint *)(lVal_12 + 0x8091) ^ _UNK_1806b2c9c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2c90;
    *(uint *)(lVal_12 + 0x8089) = uVal_21;
    *(uint *)(lVal_12 + 0x808d) = uVal_22;
    *(uint *)(lVal_12 + 0x8091) = uVal_23;
    *(uint *)(lVal_12 + 0x8095) = *(uint *)(lVal_12 + 0x8095) ^ uVal_18;
    *(uint *)(lVal_12 + 0x8099) = *(uint *)(lVal_12 + 0x8099) ^ uVal_19;
    *(uint *)(lVal_12 + 0x809d) = *(uint *)(lVal_12 + 0x809d) ^ uVal_20;
    *(uint *)(lVal_12 + 0x80a1) = *(uint *)(lVal_12 + 0x80a1) ^ uVal_5;
    *(uint *)(lVal_12 + 0x80a5) = *(uint *)(lVal_12 + 0x80a5) ^ uVal_18;
    *(uint *)(lVal_12 + 0x80a9) = *(uint *)(lVal_12 + 0x80a9) ^ uVal_19;
    *(uint *)(lVal_12 + 0x80ad) = *(uint *)(lVal_12 + 0x80ad) ^ uVal_20;
    *(uint *)(lVal_12 + 0x80b1) = *(uint *)(lVal_12 + 0x80b1) ^ uVal_5;
    *(uint *)(lVal_12 + 0x80b5) = *(uint *)(lVal_12 + 0x80b5) ^ uVal_18;
    *(uint *)(lVal_12 + 0x80b9) = *(uint *)(lVal_12 + 0x80b9) ^ uVal_19;
    *(uint *)(lVal_12 + 0x80bd) = *(uint *)(lVal_12 + 0x80bd) ^ uVal_20;
    *(uint *)(lVal_12 + 0x80c1) = *(uint *)(lVal_12 + 0x80c1) ^ uVal_5;
    *(uint *)(lVal_12 + 0x80c5) = *(uint *)(lVal_12 + 0x80c5) ^ uVal_18;
    *(uint *)(lVal_12 + 0x80c9) = *(uint *)(lVal_12 + 0x80c9) ^ uVal_19;
    *(uint *)(lVal_12 + 0x80cd) = *(uint *)(lVal_12 + 0x80cd) ^ uVal_20;
    *(uint *)(lVal_12 + 0x80d1) = *(uint *)(lVal_12 + 0x80d1) ^ uVal_5;
    *(uint *)(lVal_12 + 0x80d5) = *(uint *)(lVal_12 + 0x80d5) ^ 0x9f9d9cf;
    *(byte *)(lVal_12 + 0x80d9) = *(byte *)(lVal_12 + 0x80d9) ^ 0xc5;
    *(uint8_t *)(lVal_12 + 0x80da) = 0;
  }
  local_98 = (uint8_t  [16])0x0;
  sz_10 = strlen((char *)pU64_1);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_1801f1b6b:
    local_49 = 1;
    func_0x18007ba70();
LAB_1801f1b78:
    local_4d = 1;
    func_0x18007ba70();
LAB_1801f1b85:
    local_4b = 1;
    func_0x18007ba70();
LAB_1801f1b92:
    local_4a = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_15 = local_98;
      uVal_17 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_11) {
        uVal_17 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_15;
    }
    local_88 = (uint32_t)sz_10;
    uStack_84 = (uint32_t)(sz_10 >> 0x20);
    uStack_80 = (uint32_t)uVal_17;
    uStack_7c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_15,pU64_1,sz_10);
    pU64_15[sz_10] = 0;
    pU64_15 = local_98;
    func_0x1801c2ba0(local_58,0,1,pU64_15);
    uVal_17 = CONCAT44(uStack_7c,uStack_80);
    if (0xf < uVal_17) {
      uVal_11 = uVal_17 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_1801f1b64;
        uVal_11 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    *local_58 = &PTR_LAB_1806bc120;
    pU64_13 = local_58 + 0x10;
    *(uint16_t *)(local_58 + 0x10) = 0;
    *(uint8_t *)((int64_t)local_58 + 0x82) = 1;
    local_160 = 0;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_16 = 0;
    }
    else {
      local_160 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_198);
      uVal_16 = *(uint8_t *)pU64_13;
    }
    uStack_78._3_1_ = (uint8_t)_UNK_1806bd8cc;
    uStack_78 = CONCAT13(uStack_78._3_1_,_UNK_1806bd8c9);
    uStack_74._3_1_ = (uint8_t)_UNK_1806bd8d0;
    uStack_74 = CONCAT13(uStack_74._3_1_,(int3)((uint)_UNK_1806bd8cc >> 8));
    local_88 = _DAT_1806bd8b9;
    uStack_84 = _UNK_1806bd8bd;
    uStack_80 = _UNK_1806bd8c1;
    uStack_7c = _UNK_1806bd8c5;
    local_98._8_8_ = _UNK_1806bd8b1;
    local_98._0_8_ = _DAT_1806bd8a9;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x810c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x810c) = 1;
      func_0x1801b3830(lVal_12 + 0x80dd,local_98);
      func_0x180673140(&LAB_180212b80);
    }
    uVal_5 = _UNK_1806b4e8c;
    uVal_20 = _UNK_1806b4e88;
    uVal_19 = _UNK_1806b4e84;
    uVal_18 = _DAT_1806b4e80;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x80dd);
    if (*(char *)(lVal_12 + 0x8108) == '\x01') {
      uVal_21 = *(uint *)(lVal_12 + 0x80e1) ^ _UNK_1806b4e84;
      uVal_22 = *(uint *)(lVal_12 + 0x80e5) ^ _UNK_1806b4e88;
      uVal_23 = *(uint *)(lVal_12 + 0x80e9) ^ _UNK_1806b4e8c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b4e80;
      *(uint *)(lVal_12 + 0x80e1) = uVal_21;
      *(uint *)(lVal_12 + 0x80e5) = uVal_22;
      *(uint *)(lVal_12 + 0x80e9) = uVal_23;
      *(uint *)(lVal_12 + 0x80ed) = *(uint *)(lVal_12 + 0x80ed) ^ uVal_18;
      *(uint *)(lVal_12 + 0x80f1) = *(uint *)(lVal_12 + 0x80f1) ^ uVal_19;
      *(uint *)(lVal_12 + 0x80f5) = *(uint *)(lVal_12 + 0x80f5) ^ uVal_20;
      *(uint *)(lVal_12 + 0x80f9) = *(uint *)(lVal_12 + 0x80f9) ^ uVal_5;
      *(uint64_t *)(lVal_12 + 0x80fd) = *(uint64_t *)(lVal_12 + 0x80fd) ^ SUB168(_DAT_1806b63f0,0);
      *(byte *)(lVal_12 + 0x8105) = *(byte *)(lVal_12 + 0x8105) ^ 0x75;
      *(byte *)(lVal_12 + 0x8106) = *(byte *)(lVal_12 + 0x8106) ^ 0x19;
      *(byte *)(lVal_12 + 0x8107) = *(byte *)(lVal_12 + 0x8107) ^ 0xf1;
      *(uint8_t *)(lVal_12 + 0x8108) = 0;
    }
    local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_1801f1b6b;
    if (sz_10 < 0x10) {
      pU64_14 = local_b8;
      uVal_17 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_11) {
        uVal_17 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_49 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_49 = 1;
        lVal_12 = func_0x180672de0(uVal_17 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_b8._0_8_ = pU64_14;
    }
    local_a8._8_8_ = uVal_17;
    local_a8._0_8_ = sz_10;
    func_0x1806aa960(pU64_14,pU64_1,sz_10);
    pU64_14[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8120) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8120) = 1;
      *(uint8_t *)(lVal_12 + 0x811e) = 1;
      *(uint64_t *)(lVal_12 + 0x8110) = 0x34b1601bc69f7e3c;
      *(uint32_t *)(lVal_12 + 0x8118) = 0xc79e7a10;
      *(uint16_t *)(lVal_12 + 0x811c) = 0x50d;
      func_0x180673140(&LAB_180212bb0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0x8110);
    if (*(char *)(lVal_12 + 0x811e) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x47910569a9f11975;
      *(uint *)(lVal_12 + 0x8118) = *(uint *)(lVal_12 + 0x8118) ^ 0xa9f11975;
      *(byte *)(lVal_12 + 0x811c) = *(byte *)(lVal_12 + 0x811c) ^ 0x69;
      *(byte *)(lVal_12 + 0x811d) = *(byte *)(lVal_12 + 0x811d) ^ 5;
      *(uint8_t *)(lVal_12 + 0x811e) = 0;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_1801f1b78;
    uVal_17 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_11) {
        uVal_17 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4d = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_4d = 1;
        lVal_12 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_15;
    }
    local_88 = (uint32_t)sz_10;
    uStack_84 = (uint32_t)(sz_10 >> 0x20);
    uStack_80 = (uint32_t)uVal_17;
    uStack_7c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_15,pU64_2,sz_10);
    pU64_15[sz_10] = 0;
    pU64_15 = local_98;
    pU64_14 = local_b8;
    func_0x1801ccd70(local_58,pU64_15,pU64_14,pU64_13,uVal_16,local_198,0);
    uVal_17 = CONCAT44(uStack_7c,uStack_80);
    if (0xf < uVal_17) {
      uVal_11 = uVal_17 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_1801f1b64;
        uVal_11 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    if (0xf < (uint64_t)local_a8._8_8_) {
      uVal_17 = local_a8._8_8_ + 1;
      lVal_12 = local_b8._0_8_;
      if (0xfff < uVal_17) {
        lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_1801f1b64;
        uVal_17 = local_a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_17);
    }
    local_120 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_120 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_158);
    }
    pU64_3 = (uint8_t *)((int64_t)local_58 + 0x81);
    uVal_16 = *pU64_3;
    uStack_78 = _DAT_1806bd8f4;
    uStack_74 = _UNK_1806bd8f8;
    uStack_70 = _UNK_1806bd8fc;
    uStack_6c = (uint8_t)_UNK_1806bd900;
    local_88 = _DAT_1806bd8e4;
    uStack_84 = _UNK_1806bd8e8;
    uStack_80 = _UNK_1806bd8ec;
    uStack_7c = _UNK_1806bd8f0;
    local_98._8_8_ = _UNK_1806bd8dc;
    local_98._0_8_ = _DAT_1806bd8d4;
    uStack_6b = 0x1db8;
    uStack_69 = 0xb2;
    uStack_68 = 0x37a1233018;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8158) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8158) = 1;
      func_0x1801b94b0(lVal_12 + 0x8121,local_98);
      func_0x180673140(&LAB_180212be0);
    }
    uVal_5 = _UNK_1806b2d6c;
    uVal_20 = _UNK_1806b2d68;
    uVal_19 = _UNK_1806b2d64;
    uVal_18 = _DAT_1806b2d60;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x8121);
    if (*(char *)(lVal_12 + 0x8156) == '\x01') {
      uVal_21 = *(uint *)(lVal_12 + 0x8125) ^ _UNK_1806b2d64;
      uVal_22 = *(uint *)(lVal_12 + 0x8129) ^ _UNK_1806b2d68;
      uVal_23 = *(uint *)(lVal_12 + 0x812d) ^ _UNK_1806b2d6c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d60;
      *(uint *)(lVal_12 + 0x8125) = uVal_21;
      *(uint *)(lVal_12 + 0x8129) = uVal_22;
      *(uint *)(lVal_12 + 0x812d) = uVal_23;
      *(uint *)(lVal_12 + 0x8131) = *(uint *)(lVal_12 + 0x8131) ^ uVal_18;
      *(uint *)(lVal_12 + 0x8135) = *(uint *)(lVal_12 + 0x8135) ^ uVal_19;
      *(uint *)(lVal_12 + 0x8139) = *(uint *)(lVal_12 + 0x8139) ^ uVal_20;
      *(uint *)(lVal_12 + 0x813d) = *(uint *)(lVal_12 + 0x813d) ^ uVal_5;
      *(uint *)(lVal_12 + 0x8141) = *(uint *)(lVal_12 + 0x8141) ^ uVal_18;
      *(uint *)(lVal_12 + 0x8145) = *(uint *)(lVal_12 + 0x8145) ^ uVal_19;
      *(uint *)(lVal_12 + 0x8149) = *(uint *)(lVal_12 + 0x8149) ^ uVal_20;
      *(uint *)(lVal_12 + 0x814d) = *(uint *)(lVal_12 + 0x814d) ^ uVal_5;
      *(uint *)(lVal_12 + 0x8151) = *(uint *)(lVal_12 + 0x8151) ^ 0xd54d5575;
      *(byte *)(lVal_12 + 0x8155) = *(byte *)(lVal_12 + 0x8155) ^ 0x37;
      *(uint8_t *)(lVal_12 + 0x8156) = 0;
    }
    local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_1801f1b85;
    uVal_17 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_11) {
        uVal_17 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4b = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_4b = 1;
        lVal_12 = func_0x180672de0(uVal_17 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_b8._0_8_ = pU64_14;
    }
    local_a8._8_8_ = uVal_17;
    local_a8._0_8_ = sz_10;
    func_0x1806aa960(pU64_14,pU64_1,sz_10);
    pU64_14[sz_10] = 0;
    local_d8 = _DAT_1806bd909;
    uStack_d0 = _UNK_1806bd911;
    local_c8 = 0x75;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x816c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x816c) = 1;
      func_0x18007d2b0(lVal_12 + 0x8159,&local_d8);
      func_0x180673140(&LAB_180212c20);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x8159);
    if (*(char *)(lVal_12 + 0x816a) == '\x01') {
      uVal_18 = *(uint *)(lVal_12 + 0x815d) ^ _UNK_1806b2d64;
      uVal_19 = *(uint *)(lVal_12 + 0x8161) ^ _UNK_1806b2d68;
      uVal_20 = *(uint *)(lVal_12 + 0x8165) ^ _UNK_1806b2d6c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d60;
      *(uint *)(lVal_12 + 0x815d) = uVal_18;
      *(uint *)(lVal_12 + 0x8161) = uVal_19;
      *(uint *)(lVal_12 + 0x8165) = uVal_20;
      *(byte *)(lVal_12 + 0x8169) = *(byte *)(lVal_12 + 0x8169) ^ 0x75;
      *(uint8_t *)(lVal_12 + 0x816a) = 0;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_1801f1b92;
    uVal_17 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_11) {
        uVal_17 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4a = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_4a = 1;
        lVal_12 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_12;
      }
      local_98._0_8_ = pU64_15;
    }
    local_88 = (uint32_t)sz_10;
    uStack_84 = (uint32_t)(sz_10 >> 0x20);
    uStack_80 = (uint32_t)uVal_17;
    uStack_7c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_15,pU64_1,sz_10);
    pU64_15[sz_10] = 0;
    pU64_15 = local_98;
    pU64_14 = local_b8;
    func_0x1801ccd70(local_58,pU64_15,pU64_14,pU64_3,uVal_16,local_158,0);
    uVal_17 = CONCAT44(uStack_7c,uStack_80);
    if (0xf < uVal_17) {
      uVal_11 = uVal_17 + 1;
      lVal_12 = local_98._0_8_;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_1801f1b64;
        uVal_11 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    if (0xf < (uint64_t)local_a8._8_8_) {
      uVal_17 = local_a8._8_8_ + 1;
      lVal_12 = local_b8._0_8_;
      if (0xfff < uVal_17) {
        lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) goto LAB_1801f1b64;
        uVal_17 = local_a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_17);
    }
    local_e0 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_e0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_118);
    }
    pU64_3 = (uint8_t *)((int64_t)local_58 + 0x82);
    uVal_16 = *pU64_3;
    uStack_78._3_1_ = (uint8_t)_UNK_1806bd93d;
    uStack_78 = CONCAT13(uStack_78._3_1_,_UNK_1806bd93a);
    uStack_74._3_1_ = (uint8_t)_UNK_1806bd941;
    uStack_74 = CONCAT13(uStack_74._3_1_,(int3)((uint)_UNK_1806bd93d >> 8));
    uStack_70._3_1_ = (uint8_t)_UNK_1806bd945;
    uStack_70 = CONCAT13(uStack_70._3_1_,(int3)((uint)_UNK_1806bd941 >> 8));
    uStack_6c = (uint8_t)((uint)_UNK_1806bd945 >> 8);
    uStack_6b = (uint16_t)((uint)_UNK_1806bd945 >> 0x10);
    local_88 = _DAT_1806bd92a;
    uStack_84 = _UNK_1806bd92e;
    uStack_80 = _UNK_1806bd932;
    uStack_7c = _UNK_1806bd936;
    local_98._8_8_ = _UNK_1806bd922;
    local_98._0_8_ = _DAT_1806bd91a;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x81a0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x81a0) = 1;
      func_0x1801bb2b0(lVal_12 + 0x816d,local_98);
      func_0x180673140(&LAB_180212c50);
    }
    uVal_5 = _UNK_1806b2cac;
    uVal_20 = _UNK_1806b2ca8;
    uVal_19 = _UNK_1806b2ca4;
    uVal_18 = _DAT_1806b2ca0;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x816d);
    if (*(char *)(lVal_12 + 0x819c) == '\x01') {
      uVal_21 = *(uint *)(lVal_12 + 0x8171) ^ _UNK_1806b2ca4;
      uVal_22 = *(uint *)(lVal_12 + 0x8175) ^ _UNK_1806b2ca8;
      uVal_23 = *(uint *)(lVal_12 + 0x8179) ^ _UNK_1806b2cac;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_12 + 0x8171) = uVal_21;
      *(uint *)(lVal_12 + 0x8175) = uVal_22;
      *(uint *)(lVal_12 + 0x8179) = uVal_23;
      *(uint *)(lVal_12 + 0x817d) = *(uint *)(lVal_12 + 0x817d) ^ uVal_18;
      *(uint *)(lVal_12 + 0x8181) = *(uint *)(lVal_12 + 0x8181) ^ uVal_19;
      *(uint *)(lVal_12 + 0x8185) = *(uint *)(lVal_12 + 0x8185) ^ uVal_20;
      *(uint *)(lVal_12 + 0x8189) = *(uint *)(lVal_12 + 0x8189) ^ uVal_5;
      *(uint64_t *)(lVal_12 + 0x818d) = *(uint64_t *)(lVal_12 + 0x818d) ^ SUB168(_DAT_1806b5c10,0);
      *(byte *)(lVal_12 + 0x8195) = *(byte *)(lVal_12 + 0x8195) ^ 0x73;
      *(byte *)(lVal_12 + 0x8196) = *(byte *)(lVal_12 + 0x8196) ^ 0x45;
      *(byte *)(lVal_12 + 0x8197) = *(byte *)(lVal_12 + 0x8197) ^ 0x7d;
      *(byte *)(lVal_12 + 0x8198) = *(byte *)(lVal_12 + 0x8198) ^ 199;
      *(byte *)(lVal_12 + 0x8199) = *(byte *)(lVal_12 + 0x8199) ^ 0xb1;
      *(byte *)(lVal_12 + 0x819a) = *(byte *)(lVal_12 + 0x819a) ^ 0xb3;
      *(byte *)(lVal_12 + 0x819b) = *(byte *)(lVal_12 + 0x819b) ^ 0xb5;
      *(uint8_t *)(lVal_12 + 0x819c) = 0;
    }
    local_b8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_10) {
      uVal_17 = 0xf;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_11) {
          uVal_17 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          local_4c = 1;
          pU64_14 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
        }
        else {
          local_4c = 1;
          lVal_12 = func_0x180672de0(uVal_17 + 0x28);
          pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_14 + -8) = lVal_12;
        }
        local_b8._0_8_ = pU64_14;
      }
      local_a8._8_8_ = uVal_17;
      local_a8._0_8_ = sz_10;
      func_0x1806aa960(pU64_14,pU64_1,sz_10);
      pU64_14[sz_10] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x81b4) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0x81b4) = 1;
        *(uint64_t *)(lVal_12 + 0x81a8) = 0x8edce19eb31b203f;
        *(uint32_t *)(lVal_12 + 0x81b0) = 0x17d311b;
        func_0x180673140(&LAB_180212c80);
      }
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_12 + 0x81a8);
      if (*(char *)(lVal_12 + 0x81b3) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0xe9b5b3b1c77d4573;
        *(uint *)(lVal_12 + 0x81b0) =
             (*(uint *)(lVal_12 + 0x81b0) & 0xffff | (uint)*(byte *)(lVal_12 + 0x81b2) << 0x10) ^
             SUB164(_DAT_1806b69b0,0);
      }
      local_98 = (uint8_t  [16])0x0;
      sz_10 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_10) {
        uVal_17 = 0xf;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_17 = 0x16;
          if (0x16 < uVal_11) {
            uVal_17 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            local_4e = 1;
            pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
          }
          else {
            local_4e = 1;
            lVal_12 = func_0x180672de0(uVal_17 + 0x28);
            pU64_15 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_15 + -8) = lVal_12;
          }
          local_98._0_8_ = pU64_15;
        }
        local_88 = (uint32_t)sz_10;
        uStack_84 = (uint32_t)(sz_10 >> 0x20);
        uStack_80 = (uint32_t)uVal_17;
        uStack_7c = (uint32_t)(uVal_17 >> 0x20);
        func_0x1806aa960(pU64_15,pU64_2,sz_10);
        pU64_15[sz_10] = 0;
        func_0x1801ccd70(local_58,local_98,local_b8,pU64_3,uVal_16,local_118,0);
        uVal_17 = CONCAT44(uStack_7c,uStack_80);
        if (0xf < uVal_17) {
          uVal_11 = uVal_17 + 1;
          lVal_12 = local_98._0_8_;
          if (0xfff < uVal_11) {
            lVal_12 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_12)) goto LAB_1801f1b64;
            uVal_11 = uVal_17 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_11);
        }
        if (0xf < (uint64_t)local_a8._8_8_) {
          uVal_17 = local_a8._8_8_ + 1;
          lVal_12 = local_b8._0_8_;
          if (0xfff < uVal_17) {
            lVal_12 = *(int64_t *)(local_b8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_12)) {
LAB_1801f1b64:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_17 = local_a8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_17);
        }
        return local_58;
      }
      goto LAB_1801f1bac;
    }
  }
  local_4c = 1;
  func_0x18007ba70();
LAB_1801f1bac:
  local_4e = 1;
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_13 = (uint64_t *)(*fnPtr_4)();
  return pU64_13;
}

// Unwind@1801f1bc0
void Unwind_1801f1bc0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x78);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1801f1c10
void Unwind_1801f1c10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x810c) = 0;
  *(uint8_t *)(param_2 + 399) = 1;
  return;
}

// Unwind@1801f1c60
void Unwind_1801f1c60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xb8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@1801f1cb0
void Unwind_1801f1cb0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8158) = 0;
  *(uint8_t *)(param_2 + 0x18d) = 1;
  return;
}

// Unwind@1801f1d00
void Unwind_1801f1d00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xf8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@1801f1d50
void Unwind_1801f1d50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x81a0) = 0;
  *(uint8_t *)(param_2 + 0x18c) = 1;
  return;
}

// Unwind@1801f1da0
void Unwind_1801f1da0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1801f1de0
void Unwind_1801f1de0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  *(uint8_t *)(param_2 + 0x18b) = 0;
  return;
}

// Unwind@1801f1e20
void Unwind_1801f1e20(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x18b);
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 399) = uVal_1;
  return;
}

// Unwind@1801f1e70
void Unwind_1801f1e70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 399) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@1801f1ed0
void Unwind_1801f1ed0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  *(uint8_t *)(param_2 + 0x18e) = 0;
  return;
}

// Unwind@1801f1f10
void Unwind_1801f1f10(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x18e);
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x18d) = uVal_1;
  return;
}

// Unwind@1801f1f60
void Unwind_1801f1f60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x18d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@1801f1fc0
void Unwind_1801f1fc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  *(uint8_t *)(param_2 + 0x18a) = 0;
  return;
}

// Unwind@1801f2000
void Unwind_1801f2000(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x18a);
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x18c) = uVal_1;
  return;
}

// Unwind@1801f2050
void Unwind_1801f2050(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x18c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@1801f20b0
void Unwind_1801f20b0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x180));
  return;
}

// Unwind@1801f20f0
void Unwind_1801f20f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x816c) = 0;
  *(uint8_t *)(param_2 + 0x18e) = 1;
  return;
}

// Unwind@1801f23f0
void Unwind_1801f23f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x81e4) = 0;
  return;
}

// func_0x1801f2430
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801f2430(uint64_t *param_1)
{
  char *fnPtr_1;
  uint64_t *pU64_2;
  uint32_t *pU64_3;
  byte *_Str;
  uint *_Str_00;
  uint8_t (*pArr16_4)[16];
  uint32_t uVal_5;
  uint8_t uVal_6;
  func_ptr_t fnPtr_7;
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  uint8_t auArr_14 [16];
  uint8_t auArr_15 [16];
  int64_t lVal_16;
  uint uVal_17;
  uint uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint32_t uVal_21;
  uint32_t uVal_22;
  uint32_t uVal_23;
  size_t sz_24;
  uint64_t uVal_25;
  int64_t lVal_26;
  uint64_t *pU64_27;
  uint32_t *pU64_28;
  uint8_t *pU64_29;
  uint8_t *pU64_30;
  uint64_t uVal_31;
  uint32_t uVal_32;
  uint in_stack_fffffffffffffe18;
  uint uVal_33;
  uint8_t **local_1d0;
  uint64_t *local_1c8;
  uint8_t ***local_198;
  uint8_t local_190 [56];
  uint64_t local_158;
  uint8_t local_150 [56];
  uint64_t local_118;
  uint8_t local_110 [56];
  uint64_t local_d8;
  uint64_t *local_d0;
  uint8_t local_c8 [8];
  uint64_t uStack_c0;
  uint8_t local_b8 [16];
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint16_t uStack_90;
  uint8_t uStack_8e;
  uint8_t uStack_8d;
  uint16_t uStack_8c;
  uint8_t uStack_8a;
  uint8_t uStack_89;
  uint16_t uStack_88;
  uint32_t uStack_86;
  uint32_t uStack_82;
  uint64_t *local_70;
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
  uStack_98._3_1_ = (uint8_t)_UNK_1806bd973;
  uStack_98 = CONCAT13(uStack_98._3_1_,_UNK_1806bd970);
  uStack_94._3_1_ = (uint8_t)_UNK_1806bd977;
  uStack_94 = CONCAT13(uStack_94._3_1_,(int3)((uint)_UNK_1806bd973 >> 8));
  uStack_90 = (uint16_t)((uint)_UNK_1806bd977 >> 8);
  uStack_8e = (uint8_t)((uint)_UNK_1806bd977 >> 0x18);
  uStack_8d = (uint8_t)_UNK_1806bd97b;
  uStack_8c = (uint16_t)((uint)_UNK_1806bd97b >> 8);
  uStack_8a = (uint8_t)((uint)_UNK_1806bd97b >> 0x18);
  local_a8 = _DAT_1806bd960;
  uStack_a4 = _UNK_1806bd964;
  uStack_a0 = _UNK_1806bd968;
  uStack_9c = _UNK_1806bd96c;
  local_70 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8208) == '\0') {
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_26 + 0x8208) = 1;
    func_0x18007ce20(lVal_26 + 0x81e5,&local_a8);
    func_0x180673140(&LAB_180212d10);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x81e5);
  func_0x180217850(fnPtr_1);
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8e = 0;
  uStack_8d = 0;
  uStack_8c = 0;
  uStack_8a = 0;
  uStack_89 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  sz_24 = strlen(fnPtr_1);
  if ((int64_t)sz_24 < 0) {
    func_0x18007ba70();
LAB_1801f35aa:
    local_61 = 1;
    func_0x18007ba70();
LAB_1801f35b7:
    local_63 = 1;
    func_0x18007ba70();
LAB_1801f35c4:
    local_65 = 1;
    func_0x18007ba70();
LAB_1801f35d1:
    local_64 = 1;
    func_0x18007ba70();
LAB_1801f35de:
    local_62 = 1;
    func_0x18007ba70();
LAB_1801f35eb:
    local_66 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_24 < 0x10) {
      pU64_28 = &local_a8;
      uVal_31 = 0xf;
    }
    else {
      uVal_25 = sz_24 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_25) {
        uVal_31 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        pU64_28 = (uint32_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_26 = func_0x180672de0(uVal_31 + 0x28);
        pU64_28 = (uint32_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -2) = lVal_26;
      }
      local_a8 = SUB84(pU64_28,0);
      uStack_a4 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
    }
    uStack_98 = (uint32_t)sz_24;
    uStack_94 = (uint32_t)(sz_24 >> 0x20);
    uStack_90 = (uint16_t)uVal_31;
    uStack_8e = (uint8_t)(uVal_31 >> 0x10);
    uStack_8d = (uint8_t)(uVal_31 >> 0x18);
    uStack_8c = (uint16_t)(uVal_31 >> 0x20);
    uStack_8a = (uint8_t)(uVal_31 >> 0x30);
    uStack_89 = (uint8_t)(uVal_31 >> 0x38);
    func_0x1806aa960(pU64_28,fnPtr_1,sz_24);
    *(uint8_t *)((int64_t)pU64_28 + sz_24) = 0;
    func_0x18018c570(local_70,0,0,&local_a8);
    uVal_31 = CONCAT17(uStack_89,
                      CONCAT16(uStack_8a,
                               CONCAT24(uStack_8c,CONCAT13(uStack_8d,CONCAT12(uStack_8e,uStack_90)))
                              ));
    if (0xf < uVal_31) {
      lVal_16 = CONCAT44(uStack_a4,local_a8);
      uVal_25 = uVal_31 + 1;
      lVal_26 = lVal_16;
      if (0xfff < uVal_25) {
        lVal_26 = *(int64_t *)(lVal_16 + -8);
        if (0x1f < (uint64_t)((lVal_16 + -8) - lVal_26)) goto LAB_1801f35a3;
        uVal_25 = uVal_31 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_26,uVal_25);
    }
    *local_70 = &PTR_LAB_1806bc250;
    *(uint8_t *)(local_70 + 0x1a) = 0;
    *(uint32_t *)((int64_t)local_70 + 0xd4) = 0x3f800000;
    *(uint8_t *)(local_70 + 0x1b) = 1;
    *(uint64_t *)((int64_t)local_70 + 0xdc) = 100;
    *(uint32_t *)((int64_t)local_70 + 0xe4) = 0;
    local_d0 = local_70 + 0x1d;
    local_a8 = 0;
    pU64_28 = &local_a8;
    pU64_29 = local_c8;
    func_0x1800959b0(local_d0,pU64_28,pU64_29);
    local_158 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_158 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_190);
    }
    pU64_27 = local_70 + 0x1a;
    uVal_6 = *(uint8_t *)pU64_27;
    local_c8._4_4_ = _UNK_1806bd983;
    local_c8._0_4_ = _DAT_1806bd97f;
    uStack_c0._0_4_ = _UNK_1806bd987;
    uStack_c0._4_4_ = _UNK_1806bd98b;
    local_b8._0_8_ = 0x9145f56a988796be;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8224) == '\0') {
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_26 + 0x8224) = 1;
      func_0x18007d9e0(lVal_26 + 0x8209,local_c8);
      func_0x180673140(&LAB_180212d40);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x8209);
    func_0x1802178b0(fnPtr_1);
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    sz_24 = strlen(fnPtr_1);
    if ((int64_t)sz_24 < 0) goto LAB_1801f35aa;
    uVal_31 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_25) {
        uVal_31 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_61 = 1;
        pU64_28 = (uint32_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        local_61 = 1;
        lVal_26 = func_0x180672de0(uVal_31 + 0x28);
        pU64_28 = (uint32_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -2) = lVal_26;
      }
      local_a8 = SUB84(pU64_28,0);
      uStack_a4 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
    }
    uStack_98 = (uint32_t)sz_24;
    uStack_94 = (uint32_t)(sz_24 >> 0x20);
    uStack_90 = (uint16_t)uVal_31;
    uStack_8e = (uint8_t)(uVal_31 >> 0x10);
    uStack_8d = (uint8_t)(uVal_31 >> 0x18);
    uStack_8c = (uint16_t)(uVal_31 >> 0x20);
    uStack_8a = (uint8_t)(uVal_31 >> 0x30);
    uStack_89 = (uint8_t)(uVal_31 >> 0x38);
    func_0x1806aa960(pU64_28,fnPtr_1,sz_24);
    *(uint8_t *)((int64_t)pU64_28 + sz_24) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8238) == '\0') {
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_26 + 0x8238) = 1;
      *(uint8_t *)(lVal_26 + 0x8236) = 1;
      *(uint64_t *)(lVal_26 + 0x8228) = 0xf64af87e95d59e9b;
      *(uint32_t *)(lVal_26 + 0x8230) = 0x99809ea7;
      *(uint16_t *)(lVal_26 + 0x8234) = 0x9b7b;
      func_0x180673140(&LAB_180212d70);
    }
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_26 + 0x8228);
    if (*(char *)(lVal_26 + 0x8236) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x91219b1ff7f5f1d5;
      *(uint *)(lVal_26 + 0x8230) = *(uint *)(lVal_26 + 0x8230) ^ 0xf7f5f1d5;
      *(byte *)(lVal_26 + 0x8234) = *(byte *)(lVal_26 + 0x8234) ^ 0x1f;
      *(byte *)(lVal_26 + 0x8235) = *(byte *)(lVal_26 + 0x8235) ^ 0x9b;
      *(uint8_t *)(lVal_26 + 0x8236) = 0;
    }
    local_b8 = ZEXT816(0);
    _local_c8 = ZEXT816(0);
    sz_24 = strlen((char *)pU64_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801f35b7;
    uVal_31 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_25) {
        uVal_31 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_63 = 1;
        pU64_29 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        local_63 = 1;
        lVal_26 = func_0x180672de0(uVal_31 + 0x28);
        pU64_29 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_29 + -8) = lVal_26;
      }
      local_c8 = (uint8_t  [8])pU64_29;
    }
    local_b8._8_8_ = uVal_31;
    local_b8._0_8_ = sz_24;
    func_0x1806aa960(pU64_29,pU64_2,sz_24);
    pU64_29[sz_24] = 0;
    pU64_29 = local_190;
    pU64_30 = local_c8;
    pU64_28 = &local_a8;
    func_0x1801ccd70(local_70,pU64_30,pU64_28,pU64_27,uVal_6,pU64_29,
                  in_stack_fffffffffffffe18 & 0xffffff00);
    uVal_32 = (uint32_t)((uint64_t)pU64_29 >> 0x20);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_31 = local_b8._8_8_ + 1;
      lVal_26 = (int64_t)local_c8;
      if (0xfff < uVal_31) {
        lVal_26 = *(int64_t *)((int64_t)local_c8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_26)) goto LAB_1801f35a3;
        uVal_31 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_26,uVal_31);
    }
    uVal_31 = CONCAT17(uStack_89,
                      CONCAT16(uStack_8a,
                               CONCAT24(uStack_8c,CONCAT13(uStack_8d,CONCAT12(uStack_8e,uStack_90)))
                              ));
    if (0xf < uVal_31) {
      lVal_16 = CONCAT44(uStack_a4,local_a8);
      uVal_25 = uVal_31 + 1;
      lVal_26 = lVal_16;
      if (0xfff < uVal_25) {
        lVal_26 = *(int64_t *)(lVal_16 + -8);
        if (0x1f < (uint64_t)((lVal_16 + -8) - lVal_26)) goto LAB_1801f35a3;
        uVal_25 = uVal_31 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_26,uVal_25);
    }
    local_118 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_118 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_150);
    }
    pU64_3 = (uint32_t *)((int64_t)local_70 + 0xd4);
    uVal_5 = *pU64_3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x823c) == '\0') {
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_26 + 0x823c) = 1;
      *(uint16_t *)(lVal_26 + 0x8239) = 0x10d;
      func_0x180673140(&LAB_180212da0);
    }
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (byte *)(lVal_26 + 0x8239);
    if (*(char *)(lVal_26 + 0x823a) == '\x01') {
      *_Str = *_Str ^ 0xd;
      *(uint8_t *)(lVal_26 + 0x823a) = 0;
    }
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    sz_24 = strlen((char *)_Str);
    if ((int64_t)sz_24 < 0) goto LAB_1801f35c4;
    uVal_31 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_25) {
        uVal_31 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_65 = 1;
        pU64_28 = (uint32_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        local_65 = 1;
        lVal_26 = func_0x180672de0(uVal_31 + 0x28);
        pU64_28 = (uint32_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -2) = lVal_26;
      }
      local_a8 = SUB84(pU64_28,0);
      uStack_a4 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
    }
    uStack_98 = (uint32_t)sz_24;
    uStack_94 = (uint32_t)(sz_24 >> 0x20);
    uStack_90 = (uint16_t)uVal_31;
    uStack_8e = (uint8_t)(uVal_31 >> 0x10);
    uStack_8d = (uint8_t)(uVal_31 >> 0x18);
    uStack_8c = (uint16_t)(uVal_31 >> 0x20);
    uStack_8a = (uint8_t)(uVal_31 >> 0x30);
    uStack_89 = (uint8_t)(uVal_31 >> 0x38);
    func_0x1806aa960(pU64_28,_Str,sz_24);
    *(uint8_t *)((int64_t)pU64_28 + sz_24) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8248) == '\0') {
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_26 + 0x8248) = 1;
      *(uint32_t *)(lVal_26 + 0x8240) = 0x4033ba5e;
      *(uint16_t *)(lVal_26 + 0x8244) = 0x145;
      func_0x180673140(&LAB_180212dc0);
    }
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint *)(lVal_26 + 0x8240);
    if (*(char *)(lVal_26 + 0x8245) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x2549d30d;
      *(byte *)(lVal_26 + 0x8244) = *(byte *)(lVal_26 + 0x8244) ^ 0x45;
      *(uint8_t *)(lVal_26 + 0x8245) = 0;
    }
    local_b8 = ZEXT816(0);
    _local_c8 = ZEXT816(0);
    sz_24 = strlen((char *)_Str_00);
    if ((int64_t)sz_24 < 0) goto LAB_1801f35d1;
    uVal_31 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_25) {
        uVal_31 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_64 = 1;
        pU64_30 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        local_64 = 1;
        lVal_26 = func_0x180672de0(uVal_31 + 0x28);
        pU64_30 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_30 + -8) = lVal_26;
      }
      local_c8 = (uint8_t  [8])pU64_30;
    }
    local_b8._0_8_ = sz_24;
    local_b8._8_8_ = uVal_31;
    func_0x1806aa960(pU64_30,_Str_00,sz_24);
    pU64_30[sz_24] = 0;
    uVal_33 = 0x40000000;
    pU64_29 = local_c8;
    pU64_28 = &local_a8;
    func_0x1801cd2e0(local_70,pU64_29,pU64_28,pU64_3,uVal_5,CONCAT44(uVal_32,0x3f000000),0x40000000,
                  local_150,0);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_31 = local_b8._8_8_ + 1;
      lVal_26 = (int64_t)local_c8;
      if (0xfff < uVal_31) {
        lVal_26 = *(int64_t *)((int64_t)local_c8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_26)) goto LAB_1801f35a3;
        uVal_31 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_26,uVal_31);
    }
    uVal_31 = CONCAT17(uStack_89,
                      CONCAT16(uStack_8a,
                               CONCAT24(uStack_8c,CONCAT13(uStack_8d,CONCAT12(uStack_8e,uStack_90)))
                              ));
    if (0xf < uVal_31) {
      lVal_16 = CONCAT44(uStack_a4,local_a8);
      uVal_25 = uVal_31 + 1;
      lVal_26 = lVal_16;
      if (0xfff < uVal_25) {
        lVal_26 = *(int64_t *)(lVal_16 + -8);
        if (0x1f < (uint64_t)((lVal_16 + -8) - lVal_26)) goto LAB_1801f35a3;
        uVal_25 = uVal_31 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_26,uVal_25);
    }
    local_d8 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_d8 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_110);
    }
    pU64_27 = local_70 + 0x1b;
    uVal_6 = *(uint8_t *)pU64_27;
    uStack_88 = _UNK_1806bd9b7;
    uStack_86 = _UNK_1806bd9b9;
    uStack_82 = _UNK_1806bd9bd;
    uStack_98 = _DAT_1806bd9a7;
    uStack_94 = _UNK_1806bd9ab;
    uStack_90 = _UNK_1806bd9af;
    uStack_8e = (uint8_t)_DAT_1806bd9b1;
    uStack_8d = (uint8_t)((ushort)_DAT_1806bd9b1 >> 8);
    uStack_8c = _UNK_1806bd9b3;
    uStack_8a = (uint8_t)_UNK_1806bd9b5;
    uStack_89 = (uint8_t)((ushort)_UNK_1806bd9b5 >> 8);
    local_a8 = _DAT_1806bd997;
    uStack_a4 = _UNK_1806bd99b;
    uStack_a0 = _UNK_1806bd99f;
    uStack_9c = _UNK_1806bd9a3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8274) == '\0') {
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_26 + 0x8274) = 1;
      func_0x18012b7b0(lVal_26 + 0x8249,&local_a8);
      func_0x180673140(&LAB_180212df0);
    }
    uVal_20 = _UNK_1806ae4dc;
    uVal_19 = _UNK_1806ae4d8;
    uVal_18 = _UNK_1806ae4d4;
    uVal_17 = _DAT_1806ae4d0;
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_4 = (uint8_t (*)[16])(lVal_26 + 0x8249);
    if (*(char *)(lVal_26 + 0x8273) == '\x01') {
      auArr_8._4_4_ = *(uint *)(lVal_26 + 0x824d) ^ _UNK_1806ae4d4;
      auArr_8._0_4_ = *(uint *)*pArr16_4 ^ _DAT_1806ae4d0;
      auArr_8._8_4_ = *(uint *)(lVal_26 + 0x8251) ^ _UNK_1806ae4d8;
      auArr_8._12_4_ = *(uint *)(lVal_26 + 0x8255) ^ _UNK_1806ae4dc;
      *pArr16_4 = auArr_8;
      auArr_9._4_4_ = *(uint *)(lVal_26 + 0x825d) ^ uVal_18;
      auArr_9._0_4_ = *(uint *)(lVal_26 + 0x8259) ^ uVal_17;
      auArr_9._8_4_ = *(uint *)(lVal_26 + 0x8261) ^ uVal_19;
      auArr_9._12_4_ = *(uint *)(lVal_26 + 0x8265) ^ uVal_20;
      *(uint8_t (*)[16])(lVal_26 + 0x8259) = auArr_9;
      *(uint64_t *)(lVal_26 + 0x8269) =
           CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_26 + 0x8269) >> 0x20) ^ _UNK_1806b54d4,
                    (uint)*(uint64_t *)(lVal_26 + 0x8269) ^ _DAT_1806b54d0);
      *(byte *)(lVal_26 + 0x8271) = *(byte *)(lVal_26 + 0x8271) ^ 0xc5;
      *(byte *)(lVal_26 + 0x8272) = *(byte *)(lVal_26 + 0x8272) ^ 0x73;
      *(uint8_t *)(lVal_26 + 0x8273) = 0;
    }
    local_b8 = ZEXT816(0);
    _local_c8 = ZEXT816(0);
    sz_24 = strlen((char *)pArr16_4);
    if ((int64_t)sz_24 < 0) goto LAB_1801f35de;
    uVal_31 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_25) {
        uVal_31 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_62 = 1;
        pU64_29 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        local_62 = 1;
        lVal_26 = func_0x180672de0(uVal_31 + 0x28);
        pU64_29 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_29 + -8) = lVal_26;
      }
      local_c8 = (uint8_t  [8])pU64_29;
    }
    local_b8._8_8_ = uVal_31;
    local_b8._0_8_ = sz_24;
    func_0x1806aa960(pU64_29,pArr16_4,sz_24);
    pU64_29[sz_24] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8288) == '\0') {
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_26 + 0x8288) = 1;
      *(uint8_t *)(lVal_26 + 0x8284) = 1;
      *(uint64_t *)(lVal_26 + 0x8278) = 0x9fe7d7e2d5bc0496;
      *(uint32_t *)(lVal_26 + 0x8280) = 0xa1be10a4;
      func_0x180673140(&LAB_180212e20);
    }
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_26 + 0x8278);
    if (*(char *)(lVal_26 + 0x8284) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xefc7bf81a1d573c5;
      *(uint *)(lVal_26 + 0x8280) = *(uint *)(lVal_26 + 0x8280) ^ 0xa1d573c5;
      *(uint8_t *)(lVal_26 + 0x8284) = 0;
    }
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8d = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    sz_24 = strlen((char *)pU64_2);
    if ((int64_t)sz_24 < 0) goto LAB_1801f35eb;
    uVal_31 = 0xf;
    if (0xf < sz_24) {
      uVal_25 = sz_24 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_25) {
        uVal_31 = uVal_25;
      }
      if (uVal_25 < 0xfff) {
        local_66 = 1;
        pU64_28 = (uint32_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        local_66 = 1;
        lVal_26 = func_0x180672de0(uVal_31 + 0x28);
        pU64_28 = (uint32_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -2) = lVal_26;
      }
      local_a8 = SUB84(pU64_28,0);
      uStack_a4 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
    }
    uStack_98 = (uint32_t)sz_24;
    uStack_94 = (uint32_t)(sz_24 >> 0x20);
    uStack_90 = (uint16_t)uVal_31;
    uStack_8e = (uint8_t)(uVal_31 >> 0x10);
    uStack_8d = (uint8_t)(uVal_31 >> 0x18);
    uStack_8c = (uint16_t)(uVal_31 >> 0x20);
    uStack_8a = (uint8_t)(uVal_31 >> 0x30);
    uStack_89 = (uint8_t)(uVal_31 >> 0x38);
    func_0x1806aa960(pU64_28,pU64_2,sz_24);
    *(uint8_t *)((int64_t)pU64_28 + sz_24) = 0;
    pU64_29 = local_110;
    pU64_28 = &local_a8;
    pU64_30 = local_c8;
    func_0x1801ccd70(local_70,pU64_28,pU64_30,pU64_27,uVal_6,pU64_29,uVal_33 & 0xffffff00);
    uVal_32 = (uint32_t)((uint64_t)pU64_29 >> 0x20);
    uVal_31 = CONCAT17(uStack_89,
                      CONCAT16(uStack_8a,
                               CONCAT24(uStack_8c,CONCAT13(uStack_8d,CONCAT12(uStack_8e,uStack_90)))
                              ));
    if (0xf < uVal_31) {
      lVal_16 = CONCAT44(uStack_a4,local_a8);
      uVal_25 = uVal_31 + 1;
      lVal_26 = lVal_16;
      if (0xfff < uVal_25) {
        lVal_26 = *(int64_t *)(lVal_16 + -8);
        if (0x1f < (uint64_t)((lVal_16 + -8) - lVal_26)) goto LAB_1801f35a3;
        uVal_25 = uVal_31 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_26,uVal_25);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_31 = local_b8._8_8_ + 1;
      lVal_26 = (int64_t)local_c8;
      if (0xfff < uVal_31) {
        lVal_26 = *(int64_t *)((int64_t)local_c8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_26)) goto LAB_1801f35a3;
        uVal_31 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_26,uVal_31);
    }
    local_1d0 = &PTR_LAB_1806be0e0;
    local_1c8 = local_70;
    local_198 = &local_1d0;
    uVal_5 = *(uint32_t *)((int64_t)local_70 + 0xdc);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x82ec) == '\0') {
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_26 + 0x82ec) = 1;
      *(uint8_t *)(lVal_26 + 0x82e9) = 1;
      uVal_23 = _UNK_1806bd9cd;
      uVal_22 = _UNK_1806bd9c9;
      uVal_21 = _UNK_1806bd9c5;
      *(uint32_t *)(lVal_26 + 0x8289) = _DAT_1806bd9c1;
      *(uint32_t *)(lVal_26 + 0x828d) = uVal_21;
      *(uint32_t *)(lVal_26 + 0x8291) = uVal_22;
      *(uint32_t *)(lVal_26 + 0x8295) = uVal_23;
      uVal_23 = _UNK_1806bd9dd;
      uVal_22 = _UNK_1806bd9d9;
      uVal_21 = _UNK_1806bd9d5;
      *(uint32_t *)(lVal_26 + 0x8299) = _DAT_1806bd9d1;
      *(uint32_t *)(lVal_26 + 0x829d) = uVal_21;
      *(uint32_t *)(lVal_26 + 0x82a1) = uVal_22;
      *(uint32_t *)(lVal_26 + 0x82a5) = uVal_23;
      uVal_23 = _UNK_1806bd9ed;
      uVal_22 = _UNK_1806bd9e9;
      uVal_21 = _UNK_1806bd9e5;
      *(uint32_t *)(lVal_26 + 0x82a9) = _DAT_1806bd9e1;
      *(uint32_t *)(lVal_26 + 0x82ad) = uVal_21;
      *(uint32_t *)(lVal_26 + 0x82b1) = uVal_22;
      *(uint32_t *)(lVal_26 + 0x82b5) = uVal_23;
      uVal_23 = _UNK_1806bd9fd;
      uVal_22 = _UNK_1806bd9f9;
      uVal_21 = _UNK_1806bd9f5;
      *(uint32_t *)(lVal_26 + 0x82b9) = _DAT_1806bd9f1;
      *(uint32_t *)(lVal_26 + 0x82bd) = uVal_21;
      *(uint32_t *)(lVal_26 + 0x82c1) = uVal_22;
      *(uint32_t *)(lVal_26 + 0x82c5) = uVal_23;
      uVal_23 = _UNK_1806bda0d;
      uVal_22 = _UNK_1806bda09;
      uVal_21 = _UNK_1806bda05;
      *(uint32_t *)(lVal_26 + 0x82c9) = _DAT_1806bda01;
      *(uint32_t *)(lVal_26 + 0x82cd) = uVal_21;
      *(uint32_t *)(lVal_26 + 0x82d1) = uVal_22;
      *(uint32_t *)(lVal_26 + 0x82d5) = uVal_23;
      uVal_23 = _UNK_1806bda1d;
      uVal_22 = _UNK_1806bda19;
      uVal_21 = _UNK_1806bda15;
      *(uint32_t *)(lVal_26 + 0x82d9) = _DAT_1806bda11;
      *(uint32_t *)(lVal_26 + 0x82dd) = uVal_21;
      *(uint32_t *)(lVal_26 + 0x82e1) = uVal_22;
      *(uint32_t *)(lVal_26 + 0x82e5) = uVal_23;
      func_0x180673140(&LAB_180212e50);
    }
    uVal_19 = _UNK_1806b649c;
    uVal_18 = _UNK_1806b6498;
    uVal_17 = _UNK_1806b6494;
    uVal_33 = _DAT_1806b6490;
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_4 = (uint8_t (*)[16])(lVal_26 + 0x8289);
    if (*(char *)(lVal_26 + 0x82e9) == '\x01') {
      auArr_10._4_4_ = *(uint *)(lVal_26 + 0x828d) ^ _UNK_1806b6494;
      auArr_10._0_4_ = *(uint *)*pArr16_4 ^ _DAT_1806b6490;
      auArr_10._8_4_ = *(uint *)(lVal_26 + 0x8291) ^ _UNK_1806b6498;
      auArr_10._12_4_ = *(uint *)(lVal_26 + 0x8295) ^ _UNK_1806b649c;
      *pArr16_4 = auArr_10;
      auArr_13._4_4_ = *(uint *)(lVal_26 + 0x829d) ^ uVal_17;
      auArr_13._0_4_ = *(uint *)(lVal_26 + 0x8299) ^ uVal_33;
      auArr_13._8_4_ = *(uint *)(lVal_26 + 0x82a1) ^ uVal_18;
      auArr_13._12_4_ = *(uint *)(lVal_26 + 0x82a5) ^ uVal_19;
      *(uint8_t (*)[16])(lVal_26 + 0x8299) = auArr_13;
      auArr_14._4_4_ = *(uint *)(lVal_26 + 0x82ad) ^ uVal_17;
      auArr_14._0_4_ = *(uint *)(lVal_26 + 0x82a9) ^ uVal_33;
      auArr_14._8_4_ = *(uint *)(lVal_26 + 0x82b1) ^ uVal_18;
      auArr_14._12_4_ = *(uint *)(lVal_26 + 0x82b5) ^ uVal_19;
      *(uint8_t (*)[16])(lVal_26 + 0x82a9) = auArr_14;
      auArr_15._4_4_ = *(uint *)(lVal_26 + 0x82bd) ^ uVal_17;
      auArr_15._0_4_ = *(uint *)(lVal_26 + 0x82b9) ^ uVal_33;
      auArr_15._8_4_ = *(uint *)(lVal_26 + 0x82c1) ^ uVal_18;
      auArr_15._12_4_ = *(uint *)(lVal_26 + 0x82c5) ^ uVal_19;
      *(uint8_t (*)[16])(lVal_26 + 0x82b9) = auArr_15;
      auArr_11._4_4_ = *(uint *)(lVal_26 + 0x82cd) ^ uVal_17;
      auArr_11._0_4_ = *(uint *)(lVal_26 + 0x82c9) ^ uVal_33;
      auArr_11._8_4_ = *(uint *)(lVal_26 + 0x82d1) ^ uVal_18;
      auArr_11._12_4_ = *(uint *)(lVal_26 + 0x82d5) ^ uVal_19;
      *(uint8_t (*)[16])(lVal_26 + 0x82c9) = auArr_11;
      auArr_12._4_4_ = *(uint *)(lVal_26 + 0x82dd) ^ uVal_17;
      auArr_12._0_4_ = *(uint *)(lVal_26 + 0x82d9) ^ uVal_33;
      auArr_12._8_4_ = *(uint *)(lVal_26 + 0x82e1) ^ uVal_18;
      auArr_12._12_4_ = *(uint *)(lVal_26 + 0x82e5) ^ uVal_19;
      *(uint8_t (*)[16])(lVal_26 + 0x82d9) = auArr_12;
      *(uint8_t *)(lVal_26 + 0x82e9) = 0;
    }
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    sz_24 = strlen((char *)pArr16_4);
    if (-1 < (int64_t)sz_24) {
      uVal_31 = 0xf;
      if (0xf < sz_24) {
        uVal_25 = sz_24 | 0xf;
        uVal_31 = 0x16;
        if (0x16 < uVal_25) {
          uVal_31 = uVal_25;
        }
        if (uVal_25 < 0xfff) {
          local_68 = 1;
          pU64_28 = (uint32_t *)func_0x180672de0(uVal_31 + 1);
        }
        else {
          local_68 = 1;
          lVal_26 = func_0x180672de0(uVal_31 + 0x28);
          pU64_28 = (uint32_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -2) = lVal_26;
        }
        local_a8 = SUB84(pU64_28,0);
        uStack_a4 = (uint32_t)((uint64_t)pU64_28 >> 0x20);
      }
      uStack_98 = (uint32_t)sz_24;
      uStack_94 = (uint32_t)(sz_24 >> 0x20);
      uStack_90 = (uint16_t)uVal_31;
      uStack_8e = (uint8_t)(uVal_31 >> 0x10);
      uStack_8d = (uint8_t)(uVal_31 >> 0x18);
      uStack_8c = (uint16_t)(uVal_31 >> 0x20);
      uStack_8a = (uint8_t)(uVal_31 >> 0x30);
      uStack_89 = (uint8_t)(uVal_31 >> 0x38);
      func_0x1806aa960(pU64_28,pArr16_4,sz_24);
      *(uint8_t *)((int64_t)pU64_28 + sz_24) = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x8300) == '\0') {
        lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_26 + 0x8300) = 1;
        *(uint64_t *)(lVal_26 + 0x82f0) = 0x839f6544ad544616;
        *(uint32_t *)(lVal_26 + 0x82f8) = 0xa05c5d20;
        *(uint16_t *)(lVal_26 + 0x82fc) = 0x127;
        func_0x180673140(&LAB_180212ea0);
      }
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_2 = (uint64_t *)(lVal_26 + 0x82f0);
      if (*(char *)(lVal_26 + 0x82fd) == '\x01') {
        *pU64_2 = *pU64_2 ^ 0xe7bf0d27d93d3145;
        *(uint *)(lVal_26 + 0x82f8) = *(uint *)(lVal_26 + 0x82f8) ^ 0xd93d3145;
        *(byte *)(lVal_26 + 0x82fc) = *(byte *)(lVal_26 + 0x82fc) ^ 0x27;
        *(uint8_t *)(lVal_26 + 0x82fd) = 0;
      }
      _local_c8 = ZEXT816(0);
      sz_24 = strlen((char *)pU64_2);
      if (-1 < (int64_t)sz_24) {
        uVal_31 = 0xf;
        if (0xf < sz_24) {
          uVal_25 = sz_24 | 0xf;
          uVal_31 = 0x16;
          if (0x16 < uVal_25) {
            uVal_31 = uVal_25;
          }
          if (uVal_25 < 0xfff) {
            local_67 = 1;
            pU64_30 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
          }
          else {
            local_67 = 1;
            lVal_26 = func_0x180672de0(uVal_31 + 0x28);
            pU64_30 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_30 + -8) = lVal_26;
          }
          local_c8 = (uint8_t  [8])pU64_30;
        }
        pU64_27 = local_70;
        lVal_26 = (int64_t)local_70 + 0xdc;
        local_b8._0_8_ = sz_24;
        local_b8._8_8_ = uVal_31;
        func_0x1806aa960(pU64_30,pU64_2,sz_24);
        pU64_30[sz_24] = 0;
        func_0x1801ccff0(pU64_27,local_c8,&local_a8,lVal_26,uVal_5,CONCAT44(uVal_32,0x28),0x14,&local_1d0,
                      0);
        if (0xf < (uint64_t)local_b8._8_8_) {
          uVal_31 = local_b8._8_8_ + 1;
          lVal_26 = (int64_t)local_c8;
          if (0xfff < uVal_31) {
            lVal_26 = *(int64_t *)((int64_t)local_c8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_26)) goto LAB_1801f35a3;
            uVal_31 = local_b8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_26,uVal_31);
        }
        uVal_31 = CONCAT17(uStack_89,
                          CONCAT16(uStack_8a,
                                   CONCAT24(uStack_8c,
                                            CONCAT13(uStack_8d,CONCAT12(uStack_8e,uStack_90)))));
        if (0xf < uVal_31) {
          lVal_16 = CONCAT44(uStack_a4,local_a8);
          uVal_25 = uVal_31 + 1;
          lVal_26 = lVal_16;
          if (0xfff < uVal_25) {
            lVal_26 = *(int64_t *)(lVal_16 + -8);
            if (0x1f < (uint64_t)((lVal_16 + -8) - lVal_26)) {
LAB_1801f35a3:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_25 = uVal_31 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_26,uVal_25);
        }
        return local_70;
      }
      goto LAB_1801f3605;
    }
  }
  local_68 = 1;
  func_0x18007ba70();
LAB_1801f3605:
  local_67 = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_27 = (uint64_t *)(*fnPtr_7)();
  return pU64_27;
}

// Unwind@1801f3620
void Unwind_1801f3620(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xc0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x88));
    *(uint64_t *)(param_2 + 0xc0) = 0;
  }
  return;
}

// Unwind@1801f3680
void Unwind_1801f3680(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8224) = 0;
  *(uint8_t *)(param_2 + 0x1b7) = 1;
  return;
}

// Unwind@1801f36e0
void Unwind_1801f36e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x100);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 200));
    *(uint64_t *)(param_2 + 0x100) = 0;
  }
  return;
}

// Unwind@1801f3740
void Unwind_1801f3740(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x140);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1801f37b0
void Unwind_1801f37b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8274) = 0;
  *(uint8_t *)(param_2 + 0x1b6) = 1;
  return;
}

// Unwind@1801f3810
void Unwind_1801f3810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  return;
}

// Unwind@1801f3860
void Unwind_1801f3860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1b5) = 0;
  return;
}

// Unwind@1801f38b0
void Unwind_1801f38b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1b5);
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1b7) = uVal_1;
  return;
}

// Unwind@1801f3900
void Unwind_1801f3900(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1b7) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xc0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x88));
    *(uint64_t *)(param_2 + 0xc0) = 0;
  }
  return;
}

// Unwind@1801f3970
void Unwind_1801f3970(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1b4) = 0;
  return;
}

// Unwind@1801f39c0
void Unwind_1801f39c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1b4);
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1b3) = uVal_1;
  return;
}

// Unwind@1801f3a10
void Unwind_1801f3a10(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1b3) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x100), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 200));
    *(uint64_t *)(param_2 + 0x100) = 0;
  }
  return;
}

// Unwind@1801f3a80
void Unwind_1801f3a80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1b2) = 0;
  return;
}

// Unwind@1801f3ad0
void Unwind_1801f3ad0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1b2);
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1b6) = uVal_1;
  return;
}

// Unwind@1801f3b20
void Unwind_1801f3b20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1b6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x140), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1801f3b90
void Unwind_1801f3b90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x1b1) = 0;
  return;
}

// Unwind@1801f3be0
void Unwind_1801f3be0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x1b1);
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x1b0) = uVal_1;
  return;
}

// Unwind@1801f3c30
void Unwind_1801f3c30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x1b0) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x80), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x48));
    *(int64_t **)(param_2 + 0x80) = (int64_t *)0x0;
  }
  return;
}

// Unwind@1801f3ca0
void Unwind_1801f3ca0(uint64_t param_1,int64_t param_2)
{
  func_0x18003a120(*(uint64_t *)(param_2 + 0x148));
  return;
}

// Unwind@1801f3cf0
void Unwind_1801f3cf0(uint64_t param_1,int64_t param_2)
{
  func_0x18018ce50(*(uint64_t *)(param_2 + 0x1a8));
  return;
}

// Unwind@1801f3d40
void Unwind_1801f3d40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8208) = 0;
  return;
}

// func_0x1801f3da0
void func_0x1801f3da0(uint64_t *param_1)
{
  int64_t lVal_1;
  int64_t **ptr2_Long_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t *pLong_5;
  
  *param_1 = &PTR_LAB_1806bc250;
  lVal_1 = param_1[0x20];
  if (lVal_1 != 0) {
    uVal_4 = param_1[0x22] - lVal_1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 0x20) = ZEXT816(0);
    param_1[0x22] = 0;
  }
  ptr2_Long_2 = (int64_t **)param_1[0x1e];
  *ptr2_Long_2[1] = 0;
  pLong_5 = *ptr2_Long_2;
  if (pLong_5 != (int64_t *)0x0) {
    do {
      pLong_5 = (int64_t *)*pLong_5;
      func_0x180081c50(param_1 + 0x1e);
    } while (pLong_5 != (int64_t *)0x0);
  }
  thunk_FUN_180695dd0(param_1[0x1e],0x50);
  *param_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(param_1 + 0x16);
  *param_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(param_1 + 0x12);
  func_0x1801c49a0(param_1);
  return;
}

// Unwind@1801f4150
void Unwind_1801f4150(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8330) = 0;
  return;
}

// Unwind@1801f6d40
void Unwind_1801f6d40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1801f6d90
void Unwind_1801f6d90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1801f6de0
void Unwind_1801f6de0(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0xe0);
  return;
}

// Unwind@1801f6e30
void Unwind_1801f6e30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1801f6e80
void Unwind_1801f6e80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1801f6ed0
void Unwind_1801f6ed0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1801f6f20
void Unwind_1801f6f20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1801f6f70
void Unwind_1801f6f70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1801f6fc0
void Unwind_1801f6fc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1801f7010
void Unwind_1801f7010(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1801f7060
void Unwind_1801f7060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1801f70b0
void Unwind_1801f70b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1801f7100
void Unwind_1801f7100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1801f7150
void Unwind_1801f7150(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1801f71a0
void Unwind_1801f71a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1801f71f0
void Unwind_1801f71f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1801f7240
void Unwind_1801f7240(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0xe0);
  return;
}

// Unwind@1801f7290
void Unwind_1801f7290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1801f72e0
void Unwind_1801f72e0(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0xe0);
  return;
}

// Unwind@1801f7330
void Unwind_1801f7330(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1801f7380
void Unwind_1801f7380(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0xe0);
  return;
}

// Unwind@1801f73d0
void Unwind_1801f73d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1801f7420
void Unwind_1801f7420(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x90);
  return;
}

// Unwind@1801f7470
void Unwind_1801f7470(uint64_t param_1,int64_t param_2)
{
  func_0x1801b3cd0(param_2 + 0xe0);
  return;
}

// Unwind@1801f74c0
void Unwind_1801f74c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1801f7510
void Unwind_1801f7510(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x30);
  return;
}

// Unwind@1801f7560
void Unwind_1801f7560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1801f75b0
void Unwind_1801f75b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1801f7600
void Unwind_1801f7600(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x83a8) = 0;
  return;
}

// Unwind@1801f7660
void Unwind_1801f7660(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x83bc) = 0;
  return;
}

// Unwind@1801f8730
void Unwind_1801f8730(uint64_t param_1,int64_t param_2)
{
  func_0x1802184e0(param_2 + 0x90);
  return;
}

// Unwind@1801f87a0
void Unwind_1801f87a0(uint64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  
  if (*(int *)(param_2 + 0x88) == 0) {
    return;
  }
  func_0x18068d0ec();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1801f8810
void Unwind_1801f8810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1801f8880
void Unwind_1801f8880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@1801f88f0
void Unwind_1801f88f0(void)
{
  func_0x180672f60(&DAT_18083fac8);
  return;
}

// Unwind@1801f8960
void Unwind_1801f8960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// func_0x1801f89d0
int64_t func_0x1801f89d0(int64_t param_1,uint64_t *param_2)
{
  uint64_t _Size;
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  void *_Buf2;
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  
  _Size = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  uVal_3 = 0xcbf29ce484222325;
  if (_Size != 0) {
    uVal_6 = (uint64_t)((uint)_Size & 3);
    if (_Size < 4) {
      uVal_7 = 0;
    }
    else {
      uVal_7 = 0;
      do {
        uVal_3 = ((uint64_t)*(byte *)((int64_t)param_2 + uVal_7 + 3) ^
                ((uint64_t)*(byte *)((int64_t)param_2 + uVal_7 + 2) ^
                ((uint64_t)*(byte *)((int64_t)param_2 + uVal_7 + 1) ^
                (*(byte *)((int64_t)param_2 + uVal_7) ^ uVal_3) * 0x100000001b3) * 0x100000001b3) *
                0x100000001b3) * 0x100000001b3;
        uVal_7 = uVal_7 + 4;
      } while ((_Size & 0xfffffffffffffffc) != uVal_7);
      if (uVal_6 == 0) goto LAB_1801f8a97;
    }
    uVal_8 = 0;
    do {
      uVal_3 = (*(byte *)((int64_t)param_2 + uVal_8 + uVal_7) ^ uVal_3) * 0x100000001b3;
      uVal_8 = uVal_8 + 1;
    } while (uVal_6 != uVal_8);
  }
LAB_1801f8a97:
  lVal_4 = (uVal_3 & *(uint64_t *)(param_1 + 0x30)) * 0x10;
  lVal_5 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_4);
  if (lVal_5 != *(int64_t *)(param_1 + 8)) {
    lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_4);
    if (_Size == 0) {
      for (; *(int64_t *)(lVal_5 + 0x20) != 0; lVal_5 = *(int64_t *)(lVal_5 + 8)) {
        if (lVal_5 == lVal_4) goto LAB_1801f8b31;
      }
LAB_1801f8b20:
      return lVal_5 + 0x30;
    }
    uVal_3 = *(uint64_t *)(lVal_5 + 0x20);
    while( true ) {
      if (_Size == uVal_3) {
        if (*(uint64_t *)(lVal_5 + 0x28) < 0x10) {
          _Buf2 = (void *)(lVal_5 + 0x10);
        }
        else {
          _Buf2 = *(void **)(lVal_5 + 0x10);
        }
        iVal_2 = memcmp(param_2,_Buf2,_Size);
        if (iVal_2 == 0) goto LAB_1801f8b20;
      }
      if (lVal_5 == lVal_4) break;
      lVal_5 = *(int64_t *)(lVal_5 + 8);
      uVal_3 = *(uint64_t *)(lVal_5 + 0x20);
    }
  }
LAB_1801f8b31:
  func_0x1806744f0("invalid unordered_map<K, T> key");
  fnPtr_1 = (func_ptr_t )swi(3);
  lVal_5 = (*fnPtr_1)();
  return lVal_5;
}

// Unwind@1801f8f80
void Unwind_1801f8f80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x1801f8fc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801f8fc0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint8_t *pU64_2;
  uint64_t *pU64_3;
  uint *pU64_4;
  uint32_t uVal_5;
  func_ptr_t fnPtr_6;
  int64_t lVal_7;
  uint32_t uVal_8;
  uint64_t *pU64_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t *pU64_13;
  uint8_t *pU64_14;
  uint32_t *pU64_15;
  uint64_t uVal_16;
  uint8_t uVal_17;
  uint8_t ***ptr3_U64_18;
  uint32_t uVal_19;
  uint in_stack_fffffffffffffe38;
  uint uVal_20;
  uint8_t **local_1b0;
  uint64_t *local_1a8;
  uint8_t ***local_178;
  uint8_t **local_170;
  uint64_t *local_168;
  uint8_t ***local_138;
  uint8_t **local_130;
  uint64_t *local_128;
  uint8_t ***local_f8;
  uint8_t local_f0 [56];
  uint64_t local_b8;
  uint64_t *local_b0;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint8_t local_98 [16];
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint8_t uStack_7c;
  uint8_t uStack_7b;
  uint16_t uStack_7a;
  uint32_t uStack_78;
  uint8_t uStack_74;
  uint8_t uStack_73;
  uint16_t uStack_72;
  uint32_t uStack_70;
  uint32_t uStack_6c;
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
  local_a8._4_4_ = _UNK_1806bda5f;
  local_a8._0_4_ = _DAT_1806bda5b;
  uStack_a0._0_4_ = _UNK_1806bda63;
  uStack_a0._4_4_ = _UNK_1806bda67;
  local_98._8_8_ = local_98._0_8_;
  local_98._0_8_ = 0xe9d9dfdea35d3716;
  local_b0 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8438) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x8438) = 1;
    func_0x18007d9e0(lVal_12 + 0x841d,local_a8);
    func_0x180673140(&LAB_1802131b0);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x841d);
  func_0x180218550(fnPtr_1);
  local_98 = ZEXT816(0);
  _local_a8 = ZEXT816(0);
  sz_10 = strlen(fnPtr_1);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_1801fa044:
    local_61 = 1;
    func_0x18007ba70();
LAB_1801fa051:
    local_65 = 1;
    func_0x18007ba70();
LAB_1801fa05e:
    local_62 = 1;
    func_0x18007ba70();
LAB_1801fa06b:
    local_66 = 1;
    func_0x18007ba70();
LAB_1801fa078:
    local_63 = 1;
    func_0x18007ba70();
LAB_1801fa085:
    local_67 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_14 = local_a8;
      uVal_16 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_a8 = (uint8_t  [8])pU64_14;
    }
    local_98._0_8_ = sz_10;
    local_98._8_8_ = uVal_16;
    func_0x1806aa960(pU64_14,fnPtr_1,sz_10);
    pU64_14[sz_10] = 0;
    pU64_14 = local_a8;
    func_0x180132ee0(local_b0,0,0,pU64_14);
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_16 = local_98._8_8_ + 1;
      lVal_12 = (int64_t)local_a8;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_12)) goto LAB_1801fa03d;
        uVal_16 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    *local_b0 = &PTR_LAB_1806bc3b0;
    uVal_8 = _UNK_1806b5c0c;
    uVal_5 = _UNK_1806b5c08;
    uVal_19 = _UNK_1806b5c04;
    *(uint32_t *)(local_b0 + 0x16) = _DAT_1806b5c00;
    *(uint32_t *)((int64_t)local_b0 + 0xb4) = uVal_19;
    *(uint32_t *)(local_b0 + 0x17) = uVal_5;
    *(uint32_t *)((int64_t)local_b0 + 0xbc) = uVal_8;
    *(uint32_t *)(local_b0 + 0x18) = 0x3f800000;
    *(uint16_t *)((int64_t)local_b0 + 0xc4) = 0;
    pU64_2 = (uint8_t *)((int64_t)local_b0 + 0xd2);
    local_b0[0x19] = 0;
    *(uint32_t *)((int64_t)local_b0 + 0xcf) = 0;
    *(uint8_t *)((int64_t)local_b0 + 0xd3) = 1;
    *(uint64_t *)((int64_t)local_b0 + 0xd4) = DAT_1806b2890;
    local_b8 = 0;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_17 = 0;
    }
    else {
      local_b8 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_f0);
      uVal_17 = *pU64_2;
    }
    local_88 = _DAT_1806bda73;
    uStack_84 = _UNK_1806bda77;
    uStack_80 = _UNK_1806bda7b;
    uStack_7c = (uint8_t)_UNK_1806bda7f;
    uStack_7b = (uint8_t)((uint)_UNK_1806bda7f >> 8);
    uStack_7a = (uint16_t)((uint)_UNK_1806bda7f >> 0x10);
    uStack_78 = 0x8149a3b8;
    uStack_74 = 0xa4;
    uStack_73 = 0x45;
    uStack_72 = 0x756b;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8454) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8454) = 1;
      func_0x18007d9e0(lVal_12 + 0x8439,&local_88);
      func_0x180673140(&LAB_1802131e0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x8439);
    func_0x180218580(fnPtr_1);
    local_98 = ZEXT816(0);
    _local_a8 = ZEXT816(0);
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1801fa044;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_61 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_61 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_a8 = (uint8_t  [8])pU64_14;
    }
    local_98._8_8_ = uVal_16;
    local_98._0_8_ = sz_10;
    func_0x1806aa960(pU64_14,fnPtr_1,sz_10);
    pU64_14[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8464) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8464) = 1;
      *(uint8_t *)(lVal_12 + 0x8460) = 1;
      *(uint64_t *)(lVal_12 + 0x8458) = 0x756245a9841ab899;
      func_0x180673140(&LAB_180213210);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_12 + 0x8458);
    if (*(char *)(lVal_12 + 0x8460) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x750729cbe569d1dd;
      *(uint8_t *)(lVal_12 + 0x8460) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1801fa051;
    if (sz_10 < 0x10) {
      pU64_15 = &local_88;
      uVal_16 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_65 = 1;
        pU64_15 = (uint32_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_65 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint32_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -2) = lVal_12;
      }
      local_88 = SUB84(pU64_15,0);
      uStack_84 = (uint32_t)((uint64_t)pU64_15 >> 0x20);
    }
    uStack_78 = (uint32_t)sz_10;
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint16_t)(sz_10 >> 0x30);
    uStack_70 = (uint32_t)uVal_16;
    uStack_6c = (uint32_t)(uVal_16 >> 0x20);
    func_0x1806aa960(pU64_15,pU64_3,sz_10);
    *(uint8_t *)((int64_t)pU64_15 + sz_10) = 0;
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffff00;
    pU64_15 = &local_88;
    pU64_14 = local_a8;
    func_0x1801ccd70(local_b0,pU64_15,pU64_14,pU64_2,uVal_17,local_f0,in_stack_fffffffffffffe38);
    uVal_16 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_16) {
      lVal_7 = CONCAT44(uStack_84,local_88);
      uVal_11 = uVal_16 + 1;
      lVal_12 = lVal_7;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(lVal_7 + -8);
        if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_12)) goto LAB_1801fa03d;
        uVal_11 = uVal_16 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_16 = local_98._8_8_ + 1;
      lVal_12 = (int64_t)local_a8;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_12)) goto LAB_1801fa03d;
        uVal_16 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_1b0 = &PTR_LAB_1806be110;
    local_1a8 = local_b0;
    local_178 = &local_1b0;
    uVal_17 = *(uint8_t *)((int64_t)local_b0 + 0xd1);
    uStack_78 = _UNK_1806bda9b;
    uStack_74 = (uint8_t)_UNK_1806bda9f;
    uStack_73 = (uint8_t)((uint)_UNK_1806bda9f >> 8);
    uStack_72 = (uint16_t)((uint)_UNK_1806bda9f >> 0x10);
    uStack_70 = _UNK_1806bdaa3;
    local_88 = _DAT_1806bda8b;
    uStack_84 = _UNK_1806bda8f;
    uStack_80 = _UNK_1806bda93;
    uStack_7c = (uint8_t)_DAT_1806bda97;
    uStack_7b = (uint8_t)((uint)_DAT_1806bda97 >> 8);
    uStack_7a = (uint16_t)((uint)_DAT_1806bda97 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8484) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8484) = 1;
      func_0x18008fba0(lVal_12 + 0x8465,&local_88);
      func_0x180673140(&LAB_180213230);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x8465);
    func_0x1802185b0(fnPtr_1);
    local_98 = ZEXT816(0);
    _local_a8 = ZEXT816(0);
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1801fa05e;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_62 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_62 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_a8 = (uint8_t  [8])pU64_14;
    }
    local_98._8_8_ = uVal_16;
    local_98._0_8_ = sz_10;
    func_0x1806aa960(pU64_14,fnPtr_1,sz_10);
    pU64_14[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8498) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x8498) = 1;
      *(uint8_t *)(lVal_12 + 0x8494) = 1;
      *(uint64_t *)(lVal_12 + 0x8488) = 0x348bbedcf2d4abc6;
      *(uint32_t *)(lVal_12 + 0x8490) = 0x93d4a8ef;
      func_0x180673140(&LAB_180213260);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_12 + 0x8488);
    if (*(char *)(lVal_12 + 0x8494) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_12 + 0x8490) = *(uint *)(lVal_12 + 0x8490) ^ 0x93a3c787;
      *(uint8_t *)(lVal_12 + 0x8494) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    sz_10 = strlen((char *)pU64_3);
    if ((int64_t)sz_10 < 0) goto LAB_1801fa06b;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_66 = 1;
        pU64_15 = (uint32_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_66 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint32_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -2) = lVal_12;
      }
      local_88 = SUB84(pU64_15,0);
      uStack_84 = (uint32_t)((uint64_t)pU64_15 >> 0x20);
    }
    pU64_13 = local_b0;
    lVal_12 = (int64_t)local_b0 + 0xd1;
    uStack_78 = (uint32_t)sz_10;
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint16_t)(sz_10 >> 0x30);
    uStack_70 = (uint32_t)uVal_16;
    uStack_6c = (uint32_t)(uVal_16 >> 0x20);
    func_0x1806aa960(pU64_15,pU64_3,sz_10);
    *(uint8_t *)((int64_t)pU64_15 + sz_10) = 0;
    ptr3_U64_18 = &local_1b0;
    pU64_15 = &local_88;
    pU64_14 = local_a8;
    func_0x1801ccd70(pU64_13,pU64_15,pU64_14,lVal_12,uVal_17,ptr3_U64_18,
                  in_stack_fffffffffffffe38 & 0xffffff00);
    uVal_19 = (uint32_t)((uint64_t)ptr3_U64_18 >> 0x20);
    uVal_16 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_16) {
      lVal_7 = CONCAT44(uStack_84,local_88);
      uVal_11 = uVal_16 + 1;
      lVal_12 = lVal_7;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(lVal_7 + -8);
        if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_12)) goto LAB_1801fa03d;
        uVal_11 = uVal_16 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_16 = local_98._8_8_ + 1;
      lVal_12 = (int64_t)local_a8;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_12)) goto LAB_1801fa03d;
        uVal_16 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_170 = &PTR_LAB_1806be110;
    local_168 = local_b0;
    local_138 = &local_170;
    uVal_5 = *(uint32_t *)(local_b0 + 0x18);
    local_88 = _DAT_1806bdaa7;
    uStack_84 = _UNK_1806bdaab;
    uStack_80 = _UNK_1806bdaaf;
    uStack_7c = (uint8_t)_UNK_1806bdab3;
    uStack_7b = (uint8_t)((uint)_UNK_1806bdab3 >> 8);
    uStack_7a = 0xe344;
    uStack_78 = 0x9b9a95f5;
    uStack_74 = 0x73;
    uStack_73 = 0x9b;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x84b0) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x84b0) = 1;
      func_0x18007cab0(lVal_12 + 0x8499,&local_88);
      func_0x180673140(&LAB_180213290);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x8499);
    func_0x180218610(fnPtr_1);
    local_98 = ZEXT816(0);
    _local_a8 = ZEXT816(0);
    sz_10 = strlen(fnPtr_1);
    if ((int64_t)sz_10 < 0) goto LAB_1801fa078;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_63 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_63 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_12;
      }
      local_a8 = (uint8_t  [8])pU64_14;
    }
    local_98._8_8_ = uVal_16;
    local_98._0_8_ = sz_10;
    func_0x1806aa960(pU64_14,fnPtr_1,sz_10);
    pU64_14[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x84bc) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x84bc) = 1;
      *(uint8_t *)(lVal_12 + 0x84ba) = 1;
      *(uint32_t *)(lVal_12 + 0x84b4) = 0x9b949286;
      *(uint16_t *)(lVal_12 + 0x84b8) = 0x9b7a;
      func_0x180673140(&LAB_1802132c0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_4 = (uint *)(lVal_12 + 0x84b4);
    if (*(char *)(lVal_12 + 0x84ba) == '\x01') {
      *pU64_4 = *pU64_4 ^ 0xf7f5f1d5;
      *(byte *)(lVal_12 + 0x84b8) = *(byte *)(lVal_12 + 0x84b8) ^ 0x1f;
      *(byte *)(lVal_12 + 0x84b9) = *(byte *)(lVal_12 + 0x84b9) ^ 0x9b;
      *(uint8_t *)(lVal_12 + 0x84ba) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_7a = 0;
    sz_10 = strlen((char *)pU64_4);
    if ((int64_t)sz_10 < 0) goto LAB_1801fa085;
    uVal_16 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_11) {
        uVal_16 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_67 = 1;
        pU64_15 = (uint32_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_67 = 1;
        lVal_12 = func_0x180672de0(uVal_16 + 0x28);
        pU64_15 = (uint32_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -2) = lVal_12;
      }
      local_88 = SUB84(pU64_15,0);
      uStack_84 = (uint32_t)((uint64_t)pU64_15 >> 0x20);
    }
    pU64_9 = local_b0;
    pU64_13 = local_b0 + 0x18;
    uStack_78 = (uint32_t)sz_10;
    uStack_74 = (uint8_t)(sz_10 >> 0x20);
    uStack_73 = (uint8_t)(sz_10 >> 0x28);
    uStack_72 = (uint16_t)(sz_10 >> 0x30);
    uStack_70 = (uint32_t)uVal_16;
    uStack_6c = (uint32_t)(uVal_16 >> 0x20);
    func_0x1806aa960(pU64_15,pU64_4,sz_10);
    *(uint8_t *)((int64_t)pU64_15 + sz_10) = 0;
    uVal_20 = 0x40a00000;
    pU64_15 = &local_88;
    pU64_14 = local_a8;
    func_0x1801cd2e0(pU64_9,pU64_15,pU64_14,pU64_13,uVal_5,CONCAT44(uVal_19,0x3dcccccd),0x40a00000,
                  &local_170,0);
    uVal_16 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_16) {
      lVal_7 = CONCAT44(uStack_84,local_88);
      uVal_11 = uVal_16 + 1;
      lVal_12 = lVal_7;
      if (0xfff < uVal_11) {
        lVal_12 = *(int64_t *)(lVal_7 + -8);
        if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_12)) goto LAB_1801fa03d;
        uVal_11 = uVal_16 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_11);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_16 = local_98._8_8_ + 1;
      lVal_12 = (int64_t)local_a8;
      if (0xfff < uVal_16) {
        lVal_12 = *(int64_t *)((int64_t)local_a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_12)) goto LAB_1801fa03d;
        uVal_16 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_16);
    }
    local_130 = &PTR_LAB_1806be110;
    local_128 = local_b0;
    local_f8 = &local_130;
    uVal_17 = *(uint8_t *)((int64_t)local_b0 + 0xd3);
    uStack_78._1_3_ = (undefined3)_UNK_1806bdace;
    uStack_78 = CONCAT31(uStack_78._1_3_,UNK_1806bdacd);
    uStack_74 = (uint8_t)((uint)_UNK_1806bdace >> 0x18);
    uStack_73 = (uint8_t)_UNK_1806bdad2;
    uStack_72 = (uint16_t)((uint)_UNK_1806bdad2 >> 8);
    uStack_70._1_3_ = (undefined3)_UNK_1806bdad6;
    uStack_70 = CONCAT31(uStack_70._1_3_,(char)((uint)_UNK_1806bdad2 >> 0x18));
    local_88 = _DAT_1806bdabd;
    uStack_84 = _UNK_1806bdac1;
    uStack_80 = _UNK_1806bdac5;
    uStack_7c = (uint8_t)_UNK_1806bdac9;
    uStack_7b = (uint8_t)((uint)_UNK_1806bdac9 >> 8);
    uStack_7a = (uint16_t)((uint)_UNK_1806bdac9 >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x84dc) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x84dc) = 1;
      func_0x18007cc40(lVal_12 + 0x84bd,&local_88);
      func_0x180673140(&LAB_1802132f0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x84bd);
    func_0x1801bdd90(fnPtr_1);
    _local_a8 = ZEXT816(0);
    sz_10 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_10) {
      uVal_16 = 0xf;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_16 = 0x16;
        if (0x16 < uVal_11) {
          uVal_16 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          local_64 = 1;
          pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
        }
        else {
          local_64 = 1;
          lVal_12 = func_0x180672de0(uVal_16 + 0x28);
          pU64_14 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_14 + -8) = lVal_12;
        }
        local_a8 = (uint8_t  [8])pU64_14;
      }
      local_98._8_8_ = uVal_16;
      local_98._0_8_ = sz_10;
      func_0x1806aa960(pU64_14,fnPtr_1,sz_10);
      pU64_14[sz_10] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x84e8) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0x84e8) = 1;
        *(uint32_t *)(lVal_12 + 0x84e0) = 0x403fbc40;
        *(uint16_t *)(lVal_12 + 0x84e4) = 0x145;
        func_0x180673140(&LAB_180213320);
      }
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_4 = (uint *)(lVal_12 + 0x84e0);
      if (*(char *)(lVal_12 + 0x84e5) == '\x01') {
        *pU64_4 = *pU64_4 ^ 0x2549d30d;
        *(byte *)(lVal_12 + 0x84e4) = *(byte *)(lVal_12 + 0x84e4) ^ 0x45;
        *(uint8_t *)(lVal_12 + 0x84e5) = 0;
      }
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_7a = 0;
      sz_10 = strlen((char *)pU64_4);
      if (-1 < (int64_t)sz_10) {
        uVal_16 = 0xf;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_11) {
            uVal_16 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            local_68 = 1;
            pU64_15 = (uint32_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            local_68 = 1;
            lVal_12 = func_0x180672de0(uVal_16 + 0x28);
            pU64_15 = (uint32_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_15 + -2) = lVal_12;
          }
          local_88 = SUB84(pU64_15,0);
          uStack_84 = (uint32_t)((uint64_t)pU64_15 >> 0x20);
        }
        pU64_13 = local_b0;
        lVal_12 = (int64_t)local_b0 + 0xd3;
        uStack_78 = (uint32_t)sz_10;
        uStack_74 = (uint8_t)(sz_10 >> 0x20);
        uStack_73 = (uint8_t)(sz_10 >> 0x28);
        uStack_72 = (uint16_t)(sz_10 >> 0x30);
        uStack_70 = (uint32_t)uVal_16;
        uStack_6c = (uint32_t)(uVal_16 >> 0x20);
        func_0x1806aa960(pU64_15,pU64_4,sz_10);
        *(uint8_t *)((int64_t)pU64_15 + sz_10) = 0;
        func_0x1801ccd70(pU64_13,&local_88,local_a8,lVal_12,uVal_17,&local_130,uVal_20 & 0xffffff00);
        uVal_16 = CONCAT44(uStack_6c,uStack_70);
        if (0xf < uVal_16) {
          lVal_7 = CONCAT44(uStack_84,local_88);
          uVal_11 = uVal_16 + 1;
          lVal_12 = lVal_7;
          if (0xfff < uVal_11) {
            lVal_12 = *(int64_t *)(lVal_7 + -8);
            if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_12)) goto LAB_1801fa03d;
            uVal_11 = uVal_16 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_11);
        }
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_16 = local_98._8_8_ + 1;
          lVal_12 = (int64_t)local_a8;
          if (0xfff < uVal_16) {
            lVal_12 = *(int64_t *)((int64_t)local_a8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_a8 + -8) - lVal_12)) {
LAB_1801fa03d:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_16 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_16);
        }
        return local_b0;
      }
      goto LAB_1801fa09f;
    }
  }
  local_64 = 1;
  func_0x18007ba70();
LAB_1801fa09f:
  local_68 = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_13 = (uint64_t *)(*fnPtr_6)();
  return pU64_13;
}

// Unwind@1801fa0b0
void Unwind_1801fa0b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x140);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1801fa120
void Unwind_1801fa120(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8454) = 0;
  *(uint8_t *)(param_2 + 0x197) = 1;
  return;
}

// Unwind@1801fa180
void Unwind_1801fa180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1801fa1d0
void Unwind_1801fa1d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x193) = 0;
  return;
}

// Unwind@1801fa220
void Unwind_1801fa220(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x193);
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x197) = uVal_1;
  return;
}

// Unwind@1801fa270
void Unwind_1801fa270(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x197) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x140), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x108));
    *(uint64_t *)(param_2 + 0x140) = 0;
  }
  return;
}

// Unwind@1801fa2e0
void Unwind_1801fa2e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x192) = 0;
  return;
}

// Unwind@1801fa330
void Unwind_1801fa330(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x192);
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x196) = uVal_1;
  return;
}

// Unwind@1801fa380
void Unwind_1801fa380(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x196) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x80), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x48));
    *(int64_t **)(param_2 + 0x80) = (int64_t *)0x0;
  }
  return;
}

// Unwind@1801fa3f0
void Unwind_1801fa3f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 0x191) = 0;
  return;
}

// Unwind@1801fa440
void Unwind_1801fa440(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x191);
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x195) = uVal_1;
  return;
}

// Unwind@1801fa490
void Unwind_1801fa490(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x195) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xc0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x88));
    *(uint64_t *)(param_2 + 0xc0) = 0;
  }
  return;
}

// Unwind@1801fa500
void Unwind_1801fa500(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  *(uint8_t *)(param_2 + 400) = 0;
  return;
}

// Unwind@1801fa550
void Unwind_1801fa550(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 400);
  func_0x180001e70(param_2 + 0x150);
  *(uint8_t *)(param_2 + 0x194) = uVal_1;
  return;
}

// Unwind@1801fa5a0
void Unwind_1801fa5a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x194) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x100), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 200));
    *(uint64_t *)(param_2 + 0x100) = 0;
  }
  return;
}

// Unwind@1801fa610
void Unwind_1801fa610(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x148);
  *pU64_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(pU64_1 + 0x12);
  func_0x1801c49a0(pU64_1);
  return;
}

// Unwind@1801fa670
void Unwind_1801fa670(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8438) = 0;
  return;
}

// Unwind@1801fa6d0
void Unwind_1801fa6d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8484) = 0;
  *(uint8_t *)(param_2 + 0x196) = 1;
  return;
}

// Unwind@1801fa730
void Unwind_1801fa730(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x84b0) = 0;
  *(uint8_t *)(param_2 + 0x195) = 1;
  return;
}

// Unwind@1801fa790
void Unwind_1801fa790(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x84dc) = 0;
  *(uint8_t *)(param_2 + 0x194) = 1;
  return;
}

// Unwind@1801faaa0
void Unwind_1801faaa0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8514) = 0;
  return;
}

// Unwind@1801fb520
void Unwind_1801fb520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1801fb560
void Unwind_1801fb560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1801fb5a0
void Unwind_1801fb5a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8530) = 0;
  return;
}

// func_0x1801fb5f0
int64_t func_0x1801fb5f0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8554) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x8554) = 1;
    *(uint64_t *)(lVal_1 + 0x8548) = 0xd84e47c3b6278e7b;
    *(uint32_t *)(lVal_1 + 0x8550) = 0x1438976;
    func_0x180673140(&LAB_180213410);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8548;
}

// func_0x1801fb680
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1801fb680(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 0xb) == '\x01') {
    *param_1 = *param_1 ^ 0xa12f2bb3e943fb13;
    *(uint *)(param_1 + 1) =
         (*(uint *)(param_1 + 1) & 0xffff | (uint)*(byte *)((int64_t)param_1 + 10) << 0x10) ^
         SUB164(_DAT_1806ae4e0,0);
  }
  return;
}

// Unwind@1801fb9c0
void Unwind_1801fb9c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1801fbbf0
void Unwind_1801fbbf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x1801fbc20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801fbc20(uint64_t *param_1)
{
  char *_Str;
  byte *_Str_00;
  uint64_t *_Str_01;
  uint64_t *pU64_1;
  size_t sz_2;
  uint64_t uVal_3;
  uint64_t **ptr2_U64_4;
  int64_t lVal_5;
  uint64_t ***ptr3_U64_6;
  uint64_t ***ptr3_U64_7;
  uint64_t uVal_8;
  uint8_t *pU64_9;
  uint32_t uVal_10;
  uint8_t local_d8 [56];
  uint64_t local_a0;
  uint8_t local_98 [16];
  size_t local_88;
  uint64_t local_80;
  uint64_t *local_70;
  uint64_t ***local_68;
  uint16_t uStack_60;
  uint32_t uStack_5e;
  uint16_t uStack_5a;
  uint16_t uStack_58;
  uint32_t uStack_56;
  uint16_t uStack_52;
  uint16_t uStack_50;
  undefined6 uStack_4e;
  uint8_t local_42;
  uint8_t local_41;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  uStack_58 = _UNK_1806bdb16;
  uStack_56 = _UNK_1806bdb18;
  uStack_52 = (uint16_t)_UNK_1806bdb1c;
  uStack_50 = (uint16_t)((uint)_UNK_1806bdb1c >> 0x10);
  local_68 = (uint64_t ***)_DAT_1806bdb06;
  uStack_60 = _UNK_1806bdb0e;
  uStack_5e = _DAT_1806bdb10;
  uStack_5a = _UNK_1806bdb14;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8590) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0x8590) = 1;
    func_0x1800d9840(lVal_5 + 0x8575,&local_68);
    func_0x180673140(&LAB_1802134a0);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8575);
  func_0x180218670(_Str);
  uStack_58 = 0;
  uStack_56 = 0;
  uStack_52 = 0;
  uStack_50 = 0;
  uStack_4e = 0;
  local_68 = (uint64_t ***)0x0;
  uStack_60 = 0;
  uStack_5e = 0;
  uStack_5a = 0;
  sz_2 = strlen(_Str);
  if ((int64_t)sz_2 < 0) {
    func_0x18007ba70();
LAB_1801fc14d:
    local_42 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_2 < 0x10) {
      ptr3_U64_7 = &local_68;
      uVal_8 = 0xf;
    }
    else {
      uVal_3 = sz_2 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_3) {
        uVal_8 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        ptr3_U64_7 = (uint64_t ***)func_0x180672de0(uVal_8 + 1);
        local_68 = ptr3_U64_7;
      }
      else {
        ptr2_U64_4 = (uint64_t **)func_0x180672de0(uVal_8 + 0x28);
        ptr3_U64_7 = (uint64_t ***)((int64_t)ptr2_U64_4 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_7[-1] = ptr2_U64_4;
        local_68 = ptr3_U64_7;
      }
    }
    uStack_58 = (uint16_t)sz_2;
    uStack_56 = (uint32_t)(sz_2 >> 0x10);
    uStack_52 = (uint16_t)(sz_2 >> 0x30);
    uStack_50 = (uint16_t)uVal_8;
    uStack_4e = (undefined6)(uVal_8 >> 0x10);
    func_0x1806aa960(ptr3_U64_7,_Str,sz_2);
    *(uint8_t *)((int64_t)ptr3_U64_7 + sz_2) = 0;
    ptr3_U64_7 = &local_68;
    func_0x1801c2ba0(param_1,0,3,ptr3_U64_7);
    uVal_8 = CONCAT62(uStack_4e,uStack_50);
    if (0xf < uVal_8) {
      uVal_3 = uVal_8 + 1;
      ptr3_U64_6 = local_68;
      if (0xfff < uVal_3) {
        ptr3_U64_6 = (uint64_t ***)local_68[-1];
        if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr3_U64_6))) goto LAB_1801fc161;
        uVal_3 = uVal_8 + 0x28;
      }
      thunk_FUN_180695dd0(ptr3_U64_6,uVal_3);
    }
    *param_1 = &PTR_LAB_1806bc510;
    *(uint32_t *)(param_1 + 0x10) = 5;
    local_a0 = 0;
    local_70 = param_1;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_10 = 5;
    }
    else {
      local_a0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_d8);
      uVal_10 = *(uint32_t *)(param_1 + 0x10);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8594) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x8594) = 1;
      *(uint16_t *)(lVal_5 + 0x8591) = 0x175;
      func_0x180673140(&LAB_1802134d0);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (byte *)(lVal_5 + 0x8591);
    if (*(char *)(lVal_5 + 0x8592) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x75;
      *(uint8_t *)(lVal_5 + 0x8592) = 0;
    }
    local_68 = (uint64_t ***)0x0;
    uStack_60 = 0;
    uStack_5e = 0;
    uStack_5a = 0;
    sz_2 = strlen((char *)_Str_00);
    if ((int64_t)sz_2 < 0) goto LAB_1801fc14d;
    uVal_8 = 0xf;
    if (0xf < sz_2) {
      uVal_3 = sz_2 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_3) {
        uVal_8 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        local_42 = 1;
        ptr3_U64_7 = (uint64_t ***)func_0x180672de0(uVal_8 + 1);
        local_68 = ptr3_U64_7;
      }
      else {
        local_42 = 1;
        ptr2_U64_4 = (uint64_t **)func_0x180672de0(uVal_8 + 0x28);
        ptr3_U64_7 = (uint64_t ***)((int64_t)ptr2_U64_4 + 0x27U & 0xffffffffffffffe0);
        ptr3_U64_7[-1] = ptr2_U64_4;
        local_68 = ptr3_U64_7;
      }
    }
    uStack_58 = (uint16_t)sz_2;
    uStack_56 = (uint32_t)(sz_2 >> 0x10);
    uStack_52 = (uint16_t)(sz_2 >> 0x30);
    uStack_50 = (uint16_t)uVal_8;
    uStack_4e = (undefined6)(uVal_8 >> 0x10);
    func_0x1806aa960(ptr3_U64_7,_Str_00,sz_2);
    *(uint8_t *)((int64_t)ptr3_U64_7 + sz_2) = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x85a4) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x85a4) = 1;
      *(uint64_t *)(lVal_5 + 0x8598) = 0x2efd7500dd9d6c38;
      *(uint32_t *)(lVal_5 + 0x85a0) = 0x1f16b10;
      func_0x180673140(&LAB_1802134f0);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_01 = (uint64_t *)(lVal_5 + 0x8598);
    if (*(char *)(lVal_5 + 0x85a3) == '\x01') {
      *_Str_01 = *_Str_01 ^ 0x47910569a9f11975;
      *(uint *)(lVal_5 + 0x85a0) =
           (*(uint *)(lVal_5 + 0x85a0) & 0xffff | (uint)*(byte *)(lVal_5 + 0x85a2) << 0x10) ^
           SUB164(_DAT_1806b6630,0);
    }
    local_98 = (uint8_t  [16])0x0;
    sz_2 = strlen((char *)_Str_01);
    if (-1 < (int64_t)sz_2) {
      if (sz_2 < 0x10) {
        pU64_9 = local_98;
        uVal_8 = 0xf;
      }
      else {
        uVal_3 = sz_2 | 0xf;
        uVal_8 = 0x16;
        if (0x16 < uVal_3) {
          uVal_8 = uVal_3;
        }
        if (uVal_3 < 0xfff) {
          local_41 = 1;
          pU64_9 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
        }
        else {
          local_41 = 1;
          lVal_5 = func_0x180672de0(uVal_8 + 0x28);
          pU64_9 = (uint8_t *)(lVal_5 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_9 + -8) = lVal_5;
        }
        local_98._0_8_ = pU64_9;
      }
      local_88 = sz_2;
      local_80 = uVal_8;
      func_0x1806aa960(pU64_9,_Str_01,sz_2);
      pU64_9[sz_2] = 0;
      func_0x1801ccff0(local_70,local_98,&local_68,param_1 + 0x10,uVal_10,0,0x32,local_d8,0);
      if (0xf < local_80) {
        uVal_8 = local_80 + 1;
        lVal_5 = local_98._0_8_;
        if (0xfff < uVal_8) {
          lVal_5 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_5)) goto LAB_1801fc161;
          uVal_8 = local_80 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_8);
      }
      pU64_1 = local_70;
      uVal_8 = CONCAT62(uStack_4e,uStack_50);
      if (0xf < uVal_8) {
        uVal_3 = uVal_8 + 1;
        ptr3_U64_7 = local_68;
        if (0xfff < uVal_3) {
          ptr3_U64_7 = (uint64_t ***)local_68[-1];
          if (0x1f < (uint64_t)((int64_t)local_68 + (-8 - (int64_t)ptr3_U64_7)))
          goto LAB_1801fc161;
          uVal_3 = uVal_8 + 0x28;
        }
        thunk_FUN_180695dd0(ptr3_U64_7,uVal_3);
      }
      return pU64_1;
    }
  }
  local_41 = 1;
  func_0x18007ba70();
LAB_1801fc161:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1801fc170
void Unwind_1801fc170(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1801fc1c0
void Unwind_1801fc1c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1801fc200
void Unwind_1801fc200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  *(uint8_t *)(param_2 + 0xe7) = 0;
  return;
}

// Unwind@1801fc240
void Unwind_1801fc240(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xe7);
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0xe6) = uVal_1;
  return;
}

// Unwind@1801fc280
void Unwind_1801fc280(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xe6) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1801fc2d0
void Unwind_1801fc2d0(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xb8));
  return;
}

// Unwind@1801fc310
void Unwind_1801fc310(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8590) = 0;
  return;
}

// Unwind@1801fc4b0
void Unwind_1801fc4b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x85bc) = 0;
  return;
}

// Unwind@1801fc640
void Unwind_1801fc640(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x85dc) = 0;
  return;
}

// func_0x1801fc680
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1801fc680(uint64_t *param_1)
{
  uint *pU64_1;
  byte *pU8_2;
  uint8_t *pU64_3;
  char *fnPtr_4;
  uint64_t *pU64_5;
  uint8_t uVal_6;
  func_ptr_t fnPtr_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint64_t *pU64_10;
  size_t sz_11;
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t *pU64_14;
  uint8_t *pU64_15;
  uint8_t *pU64_16;
  uint64_t uVal_17;
  uint uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint32_t uVal_25;
  uint64_t in_stack_fffffffffffffc78;
  uint32_t uVal_26;
  uint64_t in_stack_fffffffffffffc80;
  uint32_t uVal_27;
  uint uVal_28;
  uint8_t **local_358;
  uint64_t *local_350;
  uint8_t ***local_320;
  uint8_t **local_318;
  uint64_t *local_310;
  uint8_t ***local_2e0;
  uint8_t **local_2d8;
  uint64_t *local_2d0;
  uint8_t ***local_2a0;
  uint64_t local_298;
  uint64_t uStack_290;
  uint64_t local_288;
  uint64_t uStack_280;
  uint8_t local_270 [56];
  uint64_t local_238;
  uint8_t local_230 [56];
  uint64_t local_1f8;
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
  uint64_t uStack_e0;
  uint8_t local_d8;
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint16_t uStack_88;
  undefined3 uStack_86;
  undefined3 uStack_83;
  uint64_t *local_80;
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
  
  uVal_27 = (uint32_t)((uint64_t)in_stack_fffffffffffffc80 >> 0x20);
  uVal_26 = (uint32_t)((uint64_t)in_stack_fffffffffffffc78 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  local_98 = _DAT_1806bdb60;
  uStack_94 = _UNK_1806bdb64;
  uStack_90 = _UNK_1806bdb68;
  uStack_8c = _UNK_1806bdb6c;
  local_a8._8_8_ = _UNK_1806bdb58;
  local_a8._0_8_ = _DAT_1806bdb50;
  uStack_88 = 0xbfbc;
  uStack_86 = 0xbf8c49;
  uStack_83 = 0x756a4c;
  local_80 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x8608) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0x8608) = 1;
    func_0x1801b39d0(lVal_13 + 0x85dd,local_a8);
    func_0x180673140(&LAB_180213580);
  }
  uVal_23 = _UNK_1806b5b0c;
  uVal_21 = _UNK_1806b5b08;
  uVal_19 = _UNK_1806b5b04;
  uVal_28 = _DAT_1806b5b00;
  lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_13 + 0x85dd);
  if (*(char *)(lVal_13 + 0x8605) == '\x01') {
    uVal_18 = *(uint *)(lVal_13 + 0x85e1) ^ _UNK_1806b5b04;
    uVal_20 = *(uint *)(lVal_13 + 0x85e5) ^ _UNK_1806b5b08;
    uVal_22 = *(uint *)(lVal_13 + 0x85e9) ^ _UNK_1806b5b0c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b5b00;
    *(uint *)(lVal_13 + 0x85e1) = uVal_18;
    *(uint *)(lVal_13 + 0x85e5) = uVal_20;
    *(uint *)(lVal_13 + 0x85e9) = uVal_22;
    *(uint *)(lVal_13 + 0x85ed) = *(uint *)(lVal_13 + 0x85ed) ^ uVal_28;
    *(uint *)(lVal_13 + 0x85f1) = *(uint *)(lVal_13 + 0x85f1) ^ uVal_19;
    *(uint *)(lVal_13 + 0x85f5) = *(uint *)(lVal_13 + 0x85f5) ^ uVal_21;
    *(uint *)(lVal_13 + 0x85f9) = *(uint *)(lVal_13 + 0x85f9) ^ uVal_23;
    *(uint64_t *)(lVal_13 + 0x85fd) = *(uint64_t *)(lVal_13 + 0x85fd) ^ SUB168(_DAT_1806b5b10,0);
    *(uint8_t *)(lVal_13 + 0x8605) = 0;
  }
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_a8 = (uint8_t  [16])0x0;
  sz_11 = strlen((char *)pU64_1);
  if ((int64_t)sz_11 < 0) {
    func_0x18007ba70();
LAB_1801fe9ff:
    local_67 = 1;
    func_0x18007ba70();
LAB_1801fea0c:
    local_66 = 1;
    func_0x18007ba70();
LAB_1801fea19:
    local_61 = 1;
    func_0x18007ba70();
LAB_1801fea26:
    local_68 = 1;
    func_0x18007ba70();
LAB_1801fea33:
    local_69 = 1;
    func_0x18007ba70();
LAB_1801fea40:
    local_62 = 1;
    func_0x18007ba70();
LAB_1801fea4d:
    local_63 = 1;
    func_0x18007ba70();
LAB_1801fea5a:
    local_6a = 1;
    func_0x18007ba70();
LAB_1801fea67:
    local_6c = 1;
    func_0x18007ba70();
LAB_1801fea74:
    local_6b = 1;
    func_0x18007ba70();
LAB_1801fea81:
    local_6e = 1;
    func_0x18007ba70();
LAB_1801fea8e:
    local_6d = 1;
    func_0x18007ba70();
LAB_1801fea9b:
    local_70 = 1;
    func_0x18007ba70();
LAB_1801feaa8:
    local_6f = 1;
    func_0x18007ba70();
LAB_1801feab5:
    local_72 = 1;
    func_0x18007ba70();
LAB_1801feac2:
    local_71 = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_11 < 0x10) {
      pU64_15 = local_a8;
      uVal_17 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_15;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_15,pU64_1,sz_11);
    pU64_15[sz_11] = 0;
    pU64_15 = local_a8;
    func_0x18018c570(local_80,0,0,pU64_15);
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    *local_80 = &PTR_LAB_1806bc640;
    pU64_14 = local_80 + 0x1a;
    *(uint32_t *)(local_80 + 0x1a) = 0x3f800000;
    *(uint8_t *)((int64_t)local_80 + 0xd4) = 1;
    uVal_9 = _UNK_1806bb1ec;
    uVal_8 = _UNK_1806bb1e8;
    uVal_25 = _UNK_1806bb1e4;
    *(uint32_t *)(local_80 + 0x1b) = _DAT_1806bb1e0;
    *(uint32_t *)((int64_t)local_80 + 0xdc) = uVal_25;
    *(uint32_t *)(local_80 + 0x1c) = uVal_8;
    *(uint32_t *)((int64_t)local_80 + 0xe4) = uVal_9;
    *(uint16_t *)(local_80 + 0x1d) = 1;
    uVal_9 = _UNK_1806b5cbc;
    uVal_8 = _UNK_1806b5cb8;
    uVal_25 = _UNK_1806b5cb4;
    *(uint32_t *)((int64_t)local_80 + 0xec) = _DAT_1806b5cb0;
    *(uint32_t *)(local_80 + 0x1e) = uVal_25;
    *(uint32_t *)((int64_t)local_80 + 0xf4) = uVal_8;
    *(uint32_t *)(local_80 + 0x1f) = uVal_9;
    *(uint16_t *)((int64_t)local_80 + 0xfc) = 0x100;
    *(uint8_t *)((int64_t)local_80 + 0xfe) = 0;
    *(uint32_t *)(local_80 + 0x20) = 0;
    local_f0 = local_80 + 0x21;
    *(uint8_t (*)[16])(local_80 + 0x21) = (uint8_t  [16])0x0;
    local_80[0x23] = 0;
    local_238 = 0;
    uVal_25 = DAT_1806b26b4;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_238 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_270);
      uVal_25 = *(uint32_t *)pU64_14;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x860c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x860c) = 1;
      *(uint16_t *)(lVal_13 + 0x8609) = 0x187;
      func_0x180673140(&LAB_1802135b0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_13 + 0x8609);
    if (*(char *)(lVal_13 + 0x860a) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x87;
      *(uint8_t *)(lVal_13 + 0x860a) = 0;
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU8_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801fe9ff;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_67 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_67 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_15;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_15,pU8_2,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8618) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x8618) = 1;
      *(uint32_t *)(lVal_13 + 0x8610) = 0xf6d9aed4;
      *(uint16_t *)(lVal_13 + 0x8614) = 0x1a5;
      func_0x180673140(&LAB_1802135d0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0x8610);
    if (*(char *)(lVal_13 + 0x8615) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x93a3c787;
      *(byte *)(lVal_13 + 0x8614) = *(byte *)(lVal_13 + 0x8614) ^ 0xa5;
      *(uint8_t *)(lVal_13 + 0x8615) = 0;
    }
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea0c;
    if (sz_11 < 0x10) {
      pU64_15 = local_c8;
      uVal_17 = 0xf;
    }
    else {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_66 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_66 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8._0_8_ = sz_11;
    local_b8._8_8_ = uVal_17;
    func_0x1806aa960(pU64_15,pU64_1,sz_11);
    pU64_15[sz_11] = 0;
    uVal_28 = 0x40000000;
    pU64_15 = local_c8;
    pU64_16 = local_a8;
    func_0x1801cd2e0(local_80,pU64_15,pU64_16,pU64_14,CONCAT44(uVal_26,uVal_25),
                  CONCAT44(uVal_27,0x3f000000),0x40000000,local_270,0);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_17 = local_b8._8_8_ + 1;
      lVal_13 = local_c8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_17 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_1f8 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_1f8 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_230);
    }
    pU64_3 = (uint8_t *)((int64_t)local_80 + 0xd4);
    uVal_6 = *pU64_3;
    local_98 = _DAT_1806bdb88;
    uStack_94 = _UNK_1806bdb8c;
    uStack_90 = _UNK_1806bdb90;
    local_a8._8_8_ = _UNK_1806bdb80;
    local_a8._0_8_ = _DAT_1806bdb78;
    uStack_8c = CONCAT31(0xb144f3,(char)_UNK_1806bdb94);
    uStack_88 = 0x94a1;
    uStack_86 = 0x1f838d;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8640) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x8640) = 1;
      func_0x1801b1390(lVal_13 + 0x8619,local_a8);
      func_0x180673140(&LAB_180213600);
    }
    fnPtr_4 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x8619);
    func_0x180218720(fnPtr_4);
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_4);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea19;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_61 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_61 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8._8_8_ = uVal_17;
    local_b8._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,fnPtr_4,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8654) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x8654) = 1;
      *(uint64_t *)(lVal_13 + 0x8648) = 0xe44ee9789c969097;
      *(uint32_t *)(lVal_13 + 0x8650) = 0x1f595bb;
      func_0x180673140(&LAB_180213630);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_13 + 0x8648);
    if (*(char *)(lVal_13 + 0x8653) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0x91219b1ff7f5f1d5;
      *(uint *)(lVal_13 + 0x8650) =
           (*(uint *)(lVal_13 + 0x8650) & 0xffff | (uint)*(byte *)(lVal_13 + 0x8652) << 0x10) ^
           SUB164(_DAT_1806b5c40,0);
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_5);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea26;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_68 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_68 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_16;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_16,pU64_5,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_15 = local_a8;
    pU64_16 = local_c8;
    func_0x1801ccd70(local_80,pU64_15,pU64_16,pU64_3,uVal_6,local_230,uVal_28);
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_17 = local_b8._8_8_ + 1;
      lVal_13 = local_c8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_17 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    local_358 = &PTR_LAB_1806bdfc0;
    local_350 = local_80;
    local_320 = &local_358;
    local_298 = local_80[0x1b];
    uStack_290 = local_80[0x1c];
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8658) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x8658) = 1;
      *(uint16_t *)(lVal_13 + 0x8655) = 0x10d;
      func_0x180673140(&LAB_180213660);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_13 + 0x8655);
    if (*(char *)(lVal_13 + 0x8656) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0xd;
      *(uint8_t *)(lVal_13 + 0x8656) = 0;
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU8_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea33;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_69 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_69 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_15;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_15,pU8_2,sz_11);
    pU64_15[sz_11] = 0;
    local_e8 = _DAT_1806bdb9d;
    uStack_e0 = _UNK_1806bdba5;
    local_d8 = 0xd;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x866c) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x866c) = 1;
      func_0x18007d2b0(lVal_13 + 0x8659,&local_e8);
      func_0x180673140(&LAB_180213680);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0x8659);
    if (*(char *)(lVal_13 + 0x866a) == '\x01') {
      uVal_19 = *(uint *)(lVal_13 + 0x865d) ^ _UNK_1806b54c4;
      uVal_21 = *(uint *)(lVal_13 + 0x8661) ^ _UNK_1806b54c8;
      uVal_23 = *(uint *)(lVal_13 + 0x8665) ^ _UNK_1806b54cc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b54c0;
      *(uint *)(lVal_13 + 0x865d) = uVal_19;
      *(uint *)(lVal_13 + 0x8661) = uVal_21;
      *(uint *)(lVal_13 + 0x8665) = uVal_23;
      *(byte *)(lVal_13 + 0x8669) = *(byte *)(lVal_13 + 0x8669) ^ 0xd;
      *(uint8_t *)(lVal_13 + 0x866a) = 0;
    }
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea40;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_62 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_62 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_c8._0_8_ = pU64_16;
    }
    pU64_10 = local_80;
    pU64_14 = local_80 + 0x1b;
    local_b8._0_8_ = sz_11;
    local_b8._8_8_ = uVal_17;
    func_0x1806aa960(pU64_16,pU64_1,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_15 = local_c8;
    pU64_16 = local_a8;
    func_0x1801cd600(pU64_10,pU64_15,pU64_16,pU64_14,&local_298,&local_358,uVal_28);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_17 = local_b8._8_8_ + 1;
      lVal_13 = local_c8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_17 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_1b8 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_1b8 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_1f0);
    }
    pU64_14 = local_80 + 0x1d;
    uVal_6 = *(uint8_t *)pU64_14;
    local_98 = _DAT_1806bdbbe;
    uStack_94 = _UNK_1806bdbc2;
    uStack_90 = _UNK_1806bdbc6;
    uStack_8c = _UNK_1806bdbca;
    local_a8._8_8_ = _UNK_1806bdbb6;
    local_a8._0_8_ = _DAT_1806bdbae;
    uStack_88 = 0x73b1;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8690) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x8690) = 1;
      func_0x1800f15f0(lVal_13 + 0x866d,local_a8);
      func_0x180673140(&LAB_1802136b0);
    }
    fnPtr_4 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x866d);
    func_0x180218760(fnPtr_4);
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_11 = strlen(fnPtr_4);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea4d;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_63 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_63 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8._8_8_ = uVal_17;
    local_b8._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,fnPtr_4,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x86a0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x86a0) = 1;
      *(uint64_t *)(lVal_13 + 0x8698) = 0x1c7c8eec5b41b96;
      func_0x180673140(&LAB_1802136e0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_13 + 0x8698);
    if (*(char *)(lVal_13 + 0x869f) == '\x01') {
      *pU64_5 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0x869d) << 8,*(uint32_t *)pU64_5) |
                (uint64_t)*(byte *)(lVal_13 + 0x869c) << 0x20) ^ SUB168(_DAT_1806ae220,0);
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_5);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea5a;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6a = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_6a = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_16;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_16,pU64_5,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_15 = local_a8;
    pU64_16 = local_c8;
    func_0x1801ccd70(local_80,pU64_15,pU64_16,pU64_14,uVal_6,local_1f0,uVal_28);
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_17 = local_b8._8_8_ + 1;
      lVal_13 = local_c8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_17 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    local_318 = &PTR_LAB_1806be140;
    local_310 = local_80;
    local_2e0 = &local_318;
    uVal_6 = *(uint8_t *)((int64_t)local_80 + 0xe9);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x86a4) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x86a4) = 1;
      *(uint16_t *)(lVal_13 + 0x86a1) = 0x135;
      func_0x180673140(&LAB_180213710);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_13 + 0x86a1);
    if (*(char *)(lVal_13 + 0x86a2) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x35;
      *(uint8_t *)(lVal_13 + 0x86a2) = 0;
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU8_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea67;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6c = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_6c = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_15;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_15,pU8_2,sz_11);
    pU64_15[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x86b8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x86b8) = 1;
      *(uint64_t *)(lVal_13 + 0x86a8) = 0xa982445b2bc0d067;
      *(uint32_t *)(lVal_13 + 0x86b0) = 0x31d1d441;
      *(uint16_t *)(lVal_13 + 0x86b4) = 0x139;
      func_0x180673140(&LAB_180213730);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_13 + 0x86a8);
    if (*(char *)(lVal_13 + 0x86b5) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0x89f52b3945a9b135;
      *(uint *)(lVal_13 + 0x86b0) = *(uint *)(lVal_13 + 0x86b0) ^ 0x45a9b135;
      *(byte *)(lVal_13 + 0x86b4) = *(byte *)(lVal_13 + 0x86b4) ^ 0x39;
      *(uint8_t *)(lVal_13 + 0x86b5) = 0;
    }
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_5);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea74;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6b = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_6b = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_c8._0_8_ = pU64_16;
    }
    pU64_14 = local_80;
    lVal_13 = (int64_t)local_80 + 0xe9;
    local_b8._8_8_ = uVal_17;
    local_b8._0_8_ = sz_11;
    func_0x1806aa960(pU64_16,pU64_5,sz_11);
    pU64_16[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_15 = local_c8;
    pU64_16 = local_a8;
    func_0x1801ccd70(pU64_14,pU64_15,pU64_16,lVal_13,uVal_6,&local_318,uVal_28);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_17 = local_b8._8_8_ + 1;
      lVal_13 = local_c8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_17 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_2d8 = &PTR_LAB_1806be170;
    local_2d0 = local_80;
    local_2a0 = &local_2d8;
    local_288 = *(uint64_t *)((int64_t)local_80 + 0xec);
    uStack_280 = *(uint64_t *)((int64_t)local_80 + 0xf4);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x86bc) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x86bc) = 1;
      *(uint16_t *)(lVal_13 + 0x86b9) = 0x145;
      func_0x180673140(&LAB_180213760);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_13 + 0x86b9);
    if (*(char *)(lVal_13 + 0x86ba) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x45;
      *(uint8_t *)(lVal_13 + 0x86ba) = 0;
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU8_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea81;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6e = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_6e = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_16;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_16,pU8_2,sz_11);
    pU64_16[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x86cc) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x86cc) = 1;
      *(uint64_t *)(lVal_13 + 0x86c0) = 0x8bd06e07ad455411;
      *(uint32_t *)(lVal_13 + 0x86c8) = 0x13d432a;
      func_0x180673140(&LAB_180213780);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_13 + 0x86c0);
    if (*(char *)(lVal_13 + 0x86cb) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0xe7bf0d27d93d3145;
      *(uint *)(lVal_13 + 0x86c8) =
           (*(uint *)(lVal_13 + 0x86c8) & 0xffff | (uint)*(byte *)(lVal_13 + 0x86ca) << 0x10) ^
           SUB164(_DAT_1806b5ca0,0);
    }
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_5);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea8e;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6d = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_6d = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_c8._0_8_ = pU64_15;
    }
    pU64_14 = local_80;
    lVal_13 = (int64_t)local_80 + 0xec;
    local_b8._8_8_ = uVal_17;
    local_b8._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,pU64_5,sz_11);
    pU64_15[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_15 = local_c8;
    pU64_16 = local_a8;
    func_0x1801cd600(pU64_14,pU64_15,pU64_16,lVal_13,&local_288,&local_2d8,uVal_28);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_17 = local_b8._8_8_ + 1;
      lVal_13 = local_c8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_17 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_178 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_178 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_1b0);
    }
    pU64_3 = (uint8_t *)((int64_t)local_80 + 0xfc);
    uVal_6 = *pU64_3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x86d0) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x86d0) = 1;
      *(uint16_t *)(lVal_13 + 0x86cd) = 0x11d;
      func_0x180673140(&LAB_1802137b0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_13 + 0x86cd);
    if (*(char *)(lVal_13 + 0x86ce) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x1d;
      *(uint8_t *)(lVal_13 + 0x86ce) = 0;
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU8_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801fea9b;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_70 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_70 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_16;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_16,pU8_2,sz_11);
    pU64_16[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x86e8) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x86e8) = 1;
      *(uint64_t *)(lVal_13 + 0x86d8) = 0xd50166d37b201e4e;
      *(uint32_t *)(lVal_13 + 0x86e0) = 0x78281a7c;
      *(uint16_t *)(lVal_13 + 0x86e4) = 0x1bf;
      func_0x180673140(&LAB_1802137d0);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_13 + 0x86d8);
    if (*(char *)(lVal_13 + 0x86e5) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0xbb2103bf0b4d771d;
      *(uint *)(lVal_13 + 0x86e0) = *(uint *)(lVal_13 + 0x86e0) ^ 0xb4d771d;
      *(byte *)(lVal_13 + 0x86e4) = *(byte *)(lVal_13 + 0x86e4) ^ 0xbf;
      *(uint8_t *)(lVal_13 + 0x86e5) = 0;
    }
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_5);
    if ((int64_t)sz_11 < 0) goto LAB_1801feaa8;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_6f = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_6f = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8._8_8_ = uVal_17;
    local_b8._0_8_ = sz_11;
    func_0x1806aa960(pU64_15,pU64_5,sz_11);
    pU64_15[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_15 = local_c8;
    pU64_16 = local_a8;
    func_0x1801ccd70(local_80,pU64_15,pU64_16,pU64_3,uVal_6,local_1b0,uVal_28);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_17 = local_b8._8_8_ + 1;
      lVal_13 = local_c8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_17 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_138 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_138 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_170);
    }
    pU64_3 = (uint8_t *)((int64_t)local_80 + 0xfd);
    uVal_6 = *pU64_3;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x86ec) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x86ec) = 1;
      *(uint16_t *)(lVal_13 + 0x86e9) = 0x12d;
      func_0x180673140(&LAB_180213800);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU8_2 = (byte *)(lVal_13 + 0x86e9);
    if (*(char *)(lVal_13 + 0x86ea) == '\x01') {
      *pU8_2 = *pU8_2 ^ 0x2d;
      *(uint8_t *)(lVal_13 + 0x86ea) = 0;
    }
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_a8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU8_2);
    if ((int64_t)sz_11 < 0) goto LAB_1801feab5;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_72 = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_72 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_13;
      }
      local_a8._0_8_ = pU64_16;
    }
    local_98 = (uint32_t)sz_11;
    uStack_94 = (uint32_t)(sz_11 >> 0x20);
    uStack_90 = (uint32_t)uVal_17;
    uStack_8c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_16,pU8_2,sz_11);
    pU64_16[sz_11] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x86fc) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x86fc) = 1;
      *(uint8_t *)(lVal_13 + 0x86fa) = 1;
      *(uint64_t *)(lVal_13 + 0x86f0) = 0xbce7869b6ea08b7e;
      *(uint16_t *)(lVal_13 + 0x86f8) = 0xe340;
      func_0x180673140(&LAB_180213820);
    }
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_5 = (uint64_t *)(lVal_13 + 0x86f0);
    if (*(char *)(lVal_13 + 0x86fa) == '\x01') {
      *pU64_5 = *pU64_5 ^ 0xd993efbb19cfe32d;
      *(byte *)(lVal_13 + 0x86f8) = *(byte *)(lVal_13 + 0x86f8) ^ 0x2d;
      *(byte *)(lVal_13 + 0x86f9) = *(byte *)(lVal_13 + 0x86f9) ^ 0xe3;
      *(uint8_t *)(lVal_13 + 0x86fa) = 0;
    }
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_5);
    if ((int64_t)sz_11 < 0) goto LAB_1801feac2;
    uVal_17 = 0xf;
    if (0xf < sz_11) {
      uVal_12 = sz_11 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_12) {
        uVal_17 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        local_71 = 1;
        pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        local_71 = 1;
        lVal_13 = func_0x180672de0(uVal_17 + 0x28);
        pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_15 + -8) = lVal_13;
      }
      local_c8._0_8_ = pU64_15;
    }
    local_b8._0_8_ = sz_11;
    local_b8._8_8_ = uVal_17;
    func_0x1806aa960(pU64_15,pU64_5,sz_11);
    pU64_15[sz_11] = 0;
    uVal_28 = uVal_28 & 0xffffff00;
    pU64_15 = local_c8;
    pU64_16 = local_a8;
    func_0x1801ccd70(local_80,pU64_15,pU64_16,pU64_3,uVal_6,local_170,uVal_28);
    if (0xf < (uint64_t)local_b8._8_8_) {
      uVal_17 = local_b8._8_8_ + 1;
      lVal_13 = local_c8._0_8_;
      if (0xfff < uVal_17) {
        lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_17 = local_b8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_17);
    }
    uVal_17 = CONCAT44(uStack_8c,uStack_90);
    if (0xf < uVal_17) {
      uVal_12 = uVal_17 + 1;
      lVal_13 = local_a8._0_8_;
      if (0xfff < uVal_12) {
        lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
        uVal_12 = uVal_17 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_12);
    }
    local_f8 = 0;
    if (DAT_18083f940 != (uint64_t *)0x0) {
      local_f8 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_130);
    }
    pU64_3 = (uint8_t *)((int64_t)local_80 + 0xfe);
    uVal_6 = *pU64_3;
    local_98 = _DAT_1806bdbe0;
    uStack_94 = _UNK_1806bdbe4;
    uStack_90 = _UNK_1806bdbe8;
    uStack_8c = _UNK_1806bdbec;
    local_a8._8_8_ = _UNK_1806bdbd8;
    local_a8._0_8_ = _DAT_1806bdbd0;
    uStack_88 = 0xe420;
    uStack_86 = 0x16a7e7;
    uStack_83 = 0x5f1d31;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8728) == '\0') {
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_13 + 0x8728) = 1;
      func_0x1801b39d0(lVal_13 + 0x86fd,local_a8);
      func_0x180673140(&LAB_180213850);
    }
    uVal_18 = _UNK_1806b560c;
    uVal_23 = _UNK_1806b5608;
    uVal_21 = _UNK_1806b5604;
    uVal_19 = _DAT_1806b5600;
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_13 + 0x86fd);
    if (*(char *)(lVal_13 + 0x8725) == '\x01') {
      uVal_20 = *(uint *)(lVal_13 + 0x8701) ^ _UNK_1806b5604;
      uVal_22 = *(uint *)(lVal_13 + 0x8705) ^ _UNK_1806b5608;
      uVal_24 = *(uint *)(lVal_13 + 0x8709) ^ _UNK_1806b560c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b5600;
      *(uint *)(lVal_13 + 0x8701) = uVal_20;
      *(uint *)(lVal_13 + 0x8705) = uVal_22;
      *(uint *)(lVal_13 + 0x8709) = uVal_24;
      *(uint *)(lVal_13 + 0x870d) = *(uint *)(lVal_13 + 0x870d) ^ uVal_19;
      *(uint *)(lVal_13 + 0x8711) = *(uint *)(lVal_13 + 0x8711) ^ uVal_21;
      *(uint *)(lVal_13 + 0x8715) = *(uint *)(lVal_13 + 0x8715) ^ uVal_23;
      *(uint *)(lVal_13 + 0x8719) = *(uint *)(lVal_13 + 0x8719) ^ uVal_18;
      *(uint64_t *)(lVal_13 + 0x871d) = *(uint64_t *)(lVal_13 + 0x871d) ^ SUB168(_DAT_1806b5b60,0);
      *(uint8_t *)(lVal_13 + 0x8725) = 0;
    }
    local_b8 = (uint8_t  [16])0x0;
    local_c8 = (uint8_t  [16])0x0;
    sz_11 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_11) {
      uVal_17 = 0xf;
      if (0xf < sz_11) {
        uVal_12 = sz_11 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_12) {
          uVal_17 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          local_65 = 1;
          pU64_15 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
        }
        else {
          local_65 = 1;
          lVal_13 = func_0x180672de0(uVal_17 + 0x28);
          pU64_15 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_15 + -8) = lVal_13;
        }
        local_c8._0_8_ = pU64_15;
      }
      local_b8._8_8_ = uVal_17;
      local_b8._0_8_ = sz_11;
      func_0x1806aa960(pU64_15,pU64_1,sz_11);
      pU64_15[sz_11] = 0;
      local_e8 = _DAT_1806bdbf8;
      uStack_e0 = _UNK_1806bdc00;
      local_d8 = 0x45;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x873c) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0x873c) = 1;
        func_0x18007d2b0(lVal_13 + 0x8729,&local_e8);
        func_0x180673140(&LAB_180213880);
      }
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint *)(lVal_13 + 0x8729);
      if (*(char *)(lVal_13 + 0x873a) == '\x01') {
        uVal_19 = *(uint *)(lVal_13 + 0x872d) ^ _UNK_1806b5604;
        uVal_21 = *(uint *)(lVal_13 + 0x8731) ^ _UNK_1806b5608;
        uVal_23 = *(uint *)(lVal_13 + 0x8735) ^ _UNK_1806b560c;
        *pU64_1 = *pU64_1 ^ _DAT_1806b5600;
        *(uint *)(lVal_13 + 0x872d) = uVal_19;
        *(uint *)(lVal_13 + 0x8731) = uVal_21;
        *(uint *)(lVal_13 + 0x8735) = uVal_23;
        *(byte *)(lVal_13 + 0x8739) = *(byte *)(lVal_13 + 0x8739) ^ 0x45;
        *(uint8_t *)(lVal_13 + 0x873a) = 0;
      }
      local_a8 = (uint8_t  [16])0x0;
      sz_11 = strlen((char *)pU64_1);
      if (-1 < (int64_t)sz_11) {
        uVal_17 = 0xf;
        if (0xf < sz_11) {
          uVal_12 = sz_11 | 0xf;
          uVal_17 = 0x16;
          if (0x16 < uVal_12) {
            uVal_17 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            local_64 = 1;
            pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
          }
          else {
            local_64 = 1;
            lVal_13 = func_0x180672de0(uVal_17 + 0x28);
            pU64_16 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_16 + -8) = lVal_13;
          }
          local_a8._0_8_ = pU64_16;
        }
        local_98 = (uint32_t)sz_11;
        uStack_94 = (uint32_t)(sz_11 >> 0x20);
        uStack_90 = (uint32_t)uVal_17;
        uStack_8c = (uint32_t)(uVal_17 >> 0x20);
        func_0x1806aa960(pU64_16,pU64_1,sz_11);
        pU64_16[sz_11] = 0;
        func_0x1801ccd70(local_80,local_a8,local_c8,pU64_3,uVal_6,local_130,uVal_28 & 0xffffff00);
        uVal_17 = CONCAT44(uStack_8c,uStack_90);
        if (0xf < uVal_17) {
          uVal_12 = uVal_17 + 1;
          lVal_13 = local_a8._0_8_;
          if (0xfff < uVal_12) {
            lVal_13 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_13)) goto LAB_1801fe9f8;
            uVal_12 = uVal_17 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_12);
        }
        if (0xf < (uint64_t)local_b8._8_8_) {
          uVal_17 = local_b8._8_8_ + 1;
          lVal_13 = local_c8._0_8_;
          if (0xfff < uVal_17) {
            lVal_13 = *(int64_t *)(local_c8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_13)) {
LAB_1801fe9f8:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_17 = local_b8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_17);
        }
        return local_80;
      }
      goto LAB_1801feadc;
    }
  }
  local_65 = 1;
  func_0x18007ba70();
LAB_1801feadc:
  local_64 = 1;
  func_0x18007ba70();
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_7)();
  return pU64_14;
}

// Unwind@1801feaf0
void Unwind_1801feaf0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x170);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x138));
    *(uint64_t *)(param_2 + 0x170) = 0;
  }
  return;
}

// Unwind@1801feb60
void Unwind_1801feb60(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1b0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x178));
    *(uint64_t *)(param_2 + 0x1b0) = 0;
  }
  return;
}

// Unwind@1801febd0
void Unwind_1801febd0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8640) = 0;
  *(uint8_t *)(param_2 + 0x347) = 1;
  return;
}

// Unwind@1801fec30
void Unwind_1801fec30(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1f0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b8));
    *(uint64_t *)(param_2 + 0x1f0) = 0;
  }
  return;
}

// Unwind@1801feca0
void Unwind_1801feca0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8690) = 0;
  *(uint8_t *)(param_2 + 0x345) = 1;
  return;
}

// Unwind@1801fed00
void Unwind_1801fed00(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x230);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f8));
    *(uint64_t *)(param_2 + 0x230) = 0;
  }
  return;
}

// Unwind@1801fed70
void Unwind_1801fed70(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x270);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x238));
    *(uint64_t *)(param_2 + 0x270) = 0;
  }
  return;
}

// Unwind@1801fede0
void Unwind_1801fede0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x2b0);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x278));
    *(uint64_t *)(param_2 + 0x2b0) = 0;
  }
  return;
}

// Unwind@1801fee50
void Unwind_1801fee50(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8728) = 0;
  *(uint8_t *)(param_2 + 0x343) = 1;
  return;
}

// Unwind@1801feeb0
void Unwind_1801feeb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  return;
}

// Unwind@1801fef00
void Unwind_1801fef00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x342) = 0;
  return;
}

// Unwind@1801fef50
void Unwind_1801fef50(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x342);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x341) = uVal_1;
  return;
}

// Unwind@1801fefa0
void Unwind_1801fefa0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x341) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x170), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x138));
    *(uint64_t *)(param_2 + 0x170) = 0;
  }
  return;
}

// Unwind@1801ff010
void Unwind_1801ff010(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x340) = 0;
  return;
}

// Unwind@1801ff060
void Unwind_1801ff060(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x340);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x347) = uVal_1;
  return;
}

// Unwind@1801ff0b0
void Unwind_1801ff0b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x347) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1b0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x178));
    *(uint64_t *)(param_2 + 0x1b0) = 0;
  }
  return;
}

// Unwind@1801ff120
void Unwind_1801ff120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x346) = 0;
  return;
}

// Unwind@1801ff170
void Unwind_1801ff170(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x346);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x33f) = uVal_1;
  return;
}

// Unwind@1801ff1c0
void Unwind_1801ff1c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x33f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@1801ff230
void Unwind_1801ff230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x33e) = 0;
  return;
}

// Unwind@1801ff280
void Unwind_1801ff280(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x33e);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x345) = uVal_1;
  return;
}

// Unwind@1801ff2d0
void Unwind_1801ff2d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x345) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1f0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1b8));
    *(uint64_t *)(param_2 + 0x1f0) = 0;
  }
  return;
}

// Unwind@1801ff340
void Unwind_1801ff340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x33d) = 0;
  return;
}

// Unwind@1801ff390
void Unwind_1801ff390(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x33d);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x33c) = uVal_1;
  return;
}

// Unwind@1801ff3e0
void Unwind_1801ff3e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x33c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 200), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x90));
    *(uint64_t *)(param_2 + 200) = 0;
  }
  return;
}

// Unwind@1801ff450
void Unwind_1801ff450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x33b) = 0;
  return;
}

// Unwind@1801ff4a0
void Unwind_1801ff4a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x33b);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x33a) = uVal_1;
  return;
}

// Unwind@1801ff4f0
void Unwind_1801ff4f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x33a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x108), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xd0));
    *(uint64_t *)(param_2 + 0x108) = 0;
  }
  return;
}

// Unwind@1801ff560
void Unwind_1801ff560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x339) = 0;
  return;
}

// Unwind@1801ff5b0
void Unwind_1801ff5b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x339);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x338) = uVal_1;
  return;
}

// Unwind@1801ff600
void Unwind_1801ff600(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x338) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x230), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x1f8));
    *(uint64_t *)(param_2 + 0x230) = 0;
  }
  return;
}

// Unwind@1801ff670
void Unwind_1801ff670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x337) = 0;
  return;
}

// Unwind@1801ff6c0
void Unwind_1801ff6c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x337);
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x336) = uVal_1;
  return;
}

// Unwind@1801ff710
void Unwind_1801ff710(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x336) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x270), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x238));
    *(uint64_t *)(param_2 + 0x270) = 0;
  }
  return;
}

// Unwind@1801ff780
void Unwind_1801ff780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x300);
  *(uint8_t *)(param_2 + 0x344) = 0;
  return;
}

// Unwind@1801ff7d0
void Unwind_1801ff7d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x344);
  func_0x180001e70(param_2 + 0x2e0);
  *(uint8_t *)(param_2 + 0x343) = uVal_1;
  return;
}

// Unwind@1801ff820
void Unwind_1801ff820(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x343) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2b0), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x278));
    *(uint64_t *)(param_2 + 0x2b0) = 0;
  }
  return;
}

// Unwind@1801ff890
void Unwind_1801ff890(uint64_t param_1,int64_t param_2)
{
  func_0x1801ffa00(*(uint64_t *)(param_2 + 0x2b8));
  func_0x18018ce50(*(uint64_t *)(param_2 + 0x328));
  return;
}

// Unwind@1801ff8e0
void Unwind_1801ff8e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8608) = 0;
  return;
}

// Unwind@1801ff940
void Unwind_1801ff940(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x866c) = 0;
  *(uint8_t *)(param_2 + 0x346) = 1;
  return;
}

// Unwind@1801ff9a0
void Unwind_1801ff9a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x873c) = 0;
  *(uint8_t *)(param_2 + 0x344) = 1;
  return;
}

// func_0x1801ffa00
void func_0x1801ffa00(uint8_t (*param_1)[16])
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  lVal_6 = *(int64_t *)*param_1;
  if (lVal_6 != 0) {
    lVal_1 = *(int64_t *)(*param_1 + 8);
    if (lVal_6 == lVal_1) {
      uVal_5 = *(int64_t *)param_1[1] - lVal_6;
    }
    else {
      do {
        uVal_5 = *(uint64_t *)(lVal_6 + 0x30);
        if (0xf < uVal_5) {
          lVal_2 = *(int64_t *)(lVal_6 + 0x18);
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ffae3;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        *(uint64_t *)(lVal_6 + 0x28) = 0;
        *(uint64_t *)(lVal_6 + 0x30) = 0xf;
        *(uint8_t *)(lVal_6 + 0x18) = 0;
        lVal_6 = lVal_6 + 0x38;
      } while (lVal_6 != lVal_1);
      lVal_6 = *(int64_t *)*param_1;
      uVal_5 = *(int64_t *)param_1[1] - lVal_6;
    }
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) {
LAB_1801ffae3:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      lVal_6 = *(int64_t *)(lVal_6 + -8);
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
  }
  return;
}

// func_0x1801ffaf0
void func_0x1801ffaf0(uint64_t *param_1)
{
  int64_t lVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  
  *param_1 = &PTR_LAB_1806bc640;
  lVal_6 = param_1[0x21];
  if (lVal_6 != 0) {
    lVal_1 = param_1[0x22];
    if (lVal_6 == lVal_1) {
      uVal_5 = param_1[0x23] - lVal_6;
    }
    else {
      do {
        uVal_5 = *(uint64_t *)(lVal_6 + 0x30);
        if (0xf < uVal_5) {
          lVal_2 = *(int64_t *)(lVal_6 + 0x18);
          uVal_3 = uVal_5 + 1;
          lVal_4 = lVal_2;
          if (0xfff < uVal_3) {
            lVal_4 = *(int64_t *)(lVal_2 + -8);
            if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_1801ffc2f;
            uVal_3 = uVal_5 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_4,uVal_3);
        }
        *(uint64_t *)(lVal_6 + 0x28) = 0;
        *(uint64_t *)(lVal_6 + 0x30) = 0xf;
        *(uint8_t *)(lVal_6 + 0x18) = 0;
        lVal_6 = lVal_6 + 0x38;
      } while (lVal_6 != lVal_1);
      lVal_6 = *(int64_t *)*(uint8_t (*)[16])(param_1 + 0x21);
      uVal_5 = param_1[0x23] - lVal_6;
    }
    if (0xfff < uVal_5) {
      if (0x1f < (uint64_t)((lVal_6 + -8) - *(int64_t *)(lVal_6 + -8))) {
LAB_1801ffc2f:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = uVal_5 + 0x27;
      lVal_6 = *(int64_t *)(lVal_6 + -8);
    }
    thunk_FUN_180695dd0(lVal_6,uVal_5);
    *(uint8_t (*)[16])(param_1 + 0x21) = ZEXT816(0);
    param_1[0x23] = 0;
  }
  *param_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(param_1 + 0x16);
  *param_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(param_1 + 0x12);
  func_0x1801c49a0(param_1);
  return;
}

// Unwind@1801fff00
void Unwind_1801fff00(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x875c) = 0;
  return;
}

// Unwind@1802022c0
void Unwind_1802022c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1802023a0
void Unwind_1802023a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180202470
void Unwind_180202470(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x150);
  return;
}

// Unwind@180202550
void Unwind_180202550(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1d7) = 0;
  return;
}

// Unwind@180202630
void Unwind_180202630(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1d7) == '\x01') {
    func_0x180001e70(param_2 + 0x40);
  }
  return;
}

// Unwind@180202710
void Unwind_180202710(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1802027e0
void Unwind_1802027e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1802028c0
void Unwind_1802028c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@1802029a0
void Unwind_1802029a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180202a70
void Unwind_180202a70(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(param_2 + 0x150);
  return;
}

// Unwind@180202b50
void Unwind_180202b50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  *(uint8_t *)(param_2 + 0x1d6) = 0;
  return;
}

// Unwind@180202c30
void Unwind_180202c30(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1d6) == '\x01') {
    func_0x180001e70(param_2 + 0x60);
  }
  return;
}

// Unwind@180202d10
void Unwind_180202d10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@180202df0
void Unwind_180202df0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@180202ed0
void Unwind_180202ed0(uint64_t param_1,int64_t param_2)
{
  func_0x18015fd20(param_2 + 0x90);
  return;
}

// Unwind@180202fa0
void Unwind_180202fa0(uint64_t param_1,int64_t param_2)
{
  func_0x18015fd20(param_2 + 0x90);
  return;
}

// func_0x180203070
uint64_t func_0x180203070(uint64_t param_1,uint64_t *param_2,uint32_t param_3,int64_t **param_4)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  int64_t *pLong_4;
  uint32_t local_60 [4];
  int64_t **local_50;
  int64_t *local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  int64_t **local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_48 = param_4[2];
  local_50 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_50 = (int64_t **)*param_4;
  }
  local_40 = 0xd1;
  local_38 = local_60;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
  local_60[0] = param_3;
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

// Unwind@180203130
void Unwind_180203130(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x68));
  return;
}

// func_0x180203150
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180203150(int64_t param_1,uint64_t param_2,float param_3,float param_4,float param_5, uint param_6)
{
  uint64_t uVal_1;
  uint8_t uVal_2;
  uint32_t uVal_3;
  int64_t lVal_4;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  float fVal_5;
  float fVal_6;
  _FILETIME local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  if (*(char *)(param_1 + 0xfe) == '\x01') {
    if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1c39c) < DAT_18083fb10) && (func_0x180672ec0(&DAT_18083fb10), DAT_18083fb10 == -1))
    {
      _DAT_18083fad0 = _DAT_1806bb230;
      uRam000000018083fad4 = _UNK_1806bb234;
      _DAT_18083fad8 = _UNK_1806bb238;
      _DAT_18083fadc = _UNK_1806bb23c;
      _DAT_18083fae0 = _DAT_1806bb240;
      uRam000000018083fae4 = _UNK_1806bb244;
      uRam000000018083fae8 = _UNK_1806bb248;
      uRam000000018083faec = _UNK_1806bb24c;
      _DAT_18083faf0 = _DAT_1806bb250;
      uRam000000018083faf4 = _UNK_1806bb254;
      uRam000000018083faf8 = _UNK_1806bb258;
      uRam000000018083fafc = _UNK_1806bb25c;
      _DAT_18083fb00 = _DAT_1806bb260;
      uRam000000018083fb04 = _UNK_1806bb264;
      uRam000000018083fb08 = _UNK_1806bb268;
      uRam000000018083fb0c = _UNK_1806bb26c;
      _Init_thread_footer(&DAT_18083fb10);
    }
    if (param_6 < 4) {
      lVal_4 = (uint64_t)param_6 * 0x10;
      local_70 = *(_FILETIME *)(&DAT_18083fad0 + lVal_4);
      local_68 = *(float *)(&DAT_18083fad8 + lVal_4);
      local_64 = *(float *)(&DAT_18083fadc + lVal_4);
      goto LAB_1802033d4;
    }
    if (*(char *)(param_1 + 0xe9) != '\x01') goto LAB_1802033a1;
    GetSystemTimeAsFileTime(&local_70);
    fVal_6 = DAT_1806b26b4;
    uVal_1 = ((int64_t)local_70 + 0xfe624e212ac18000U) / 10000 + 1;
    fVal_5 = (float)func_0x18068afa0((float)((int)uVal_1 + (int)(uVal_1 / 3000) * -3000) / DAT_1806b6510,
                                 DAT_1806b26b4);
    fVal_5 = fVal_5 / DAT_1806b6144;
    local_68 = (fVal_5 - (float)(int)fVal_5) * DAT_1806b2860 + fVal_6;
    local_70.dwHighDateTime = (DWORD)DAT_1806aeae4;
    local_64 = fVal_6;
    if ((uint)(int)fVal_5 < 5) {
                    /* WARNING: Could not recover jumptable at 0x000180203396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(func_ptr_t )(&DAT_1806be2e4 +
                *(int *)(&DAT_1806be2e4 + CONCAT44(extraout_var_00,(int)fVal_5) * 4)))
                (DAT_1806aeae4,local_68,DAT_1806b2860,
                 (fVal_6 - (fVal_5 - (float)(int)fVal_5)) * DAT_1806b2860 + fVal_6);
      return;
    }
  }
  else if (*(char *)(param_1 + 0xe9) == '\x01') {
    GetSystemTimeAsFileTime(&local_70);
    fVal_6 = DAT_1806b26b4;
    uVal_1 = ((int64_t)local_70 + 0xfe624e212ac18000U) / 10000 + 1;
    fVal_5 = (float)func_0x18068afa0((float)((int)uVal_1 + (int)(uVal_1 / 3000) * -3000) / DAT_1806b6510,
                                 DAT_1806b26b4);
    fVal_5 = fVal_5 / DAT_1806b6144;
    local_68 = (fVal_5 - (float)(int)fVal_5) * DAT_1806b2860 + fVal_6;
    local_70.dwHighDateTime = (DWORD)DAT_1806aeae4;
    local_64 = fVal_6;
    if ((uint)(int)fVal_5 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0001802032c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(func_ptr_t )(&DAT_1806be2d0 + *(int *)(&DAT_1806be2d0 + CONCAT44(extraout_var,(int)fVal_5) * 4)))
                (DAT_1806aeae4,local_68,DAT_1806b2860,
                 (fVal_6 - (fVal_5 - (float)(int)fVal_5)) * DAT_1806b2860 + fVal_6);
      return;
    }
  }
  else {
LAB_1802033a1:
    fVal_6 = *(float *)(param_1 + 0xec);
    local_68 = *(float *)(param_1 + 0xf4);
    local_70.dwHighDateTime = (DWORD)*(float *)(param_1 + 0xf0);
    local_64 = *(float *)(param_1 + 0xf8);
  }
  local_70.dwLowDateTime = (DWORD)fVal_6;
LAB_1802033d4:
  uVal_3 = func_0x18018ce30(param_1);
  fVal_5 = (float)func_0x1800cfa00(*(uint32_t *)(param_1 + 0xd0),uVal_3);
  uVal_2 = *(uint8_t *)(param_1 + 0xe8);
  uVal_3 = func_0x18018ce30(param_1);
  fVal_6 = *(float *)(param_1 + 0xd0);
  local_60 = param_3 + fVal_6;
  local_5c = ((param_4 + param_5 * DAT_1806aeae4) - fVal_5 * DAT_1806aeae4) + fVal_6;
  func_0x1800d00e0(&local_60,param_2,&local_70,fVal_6,0x3f800000,uVal_3,uVal_2);
  return;
}

// Unwind@180203890
void Unwind_180203890(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1802039a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802039a0(uint64_t *param_1)
{
  uint *pU64_1;
  uint64_t *_Str;
  uint8_t (*_Str_00)[16];
  char *fnPtr_2;
  uint32_t uVal_3;
  func_ptr_t fnPtr_4;
  uint uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint64_t uVal_8;
  size_t sz_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t *pU64_12;
  uint8_t *pU64_13;
  uint8_t *pU64_14;
  uint8_t uVal_15;
  uint64_t uVal_16;
  uint uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint8_t auArr_17 [16];
  uint uVal_23;
  uint8_t **local_258;
  uint64_t *local_250;
  uint8_t ***local_220;
  uint8_t **local_218;
  uint64_t *local_210;
  uint8_t ***local_1e0;
  uint8_t **local_1d8;
  uint64_t *local_1d0;
  uint8_t ***local_1a0;
  uint8_t **local_198;
  uint64_t *local_190;
  uint8_t ***local_160;
  uint32_t local_158;
  uint32_t uStack_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint32_t local_148;
  uint32_t uStack_144;
  uint32_t uStack_140;
  uint32_t uStack_13c;
  uint32_t local_138;
  uint32_t uStack_134;
  uint32_t uStack_130;
  uint32_t uStack_12c;
  uint32_t local_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  uint8_t local_118 [56];
  uint64_t local_e0;
  uint64_t local_d8;
  undefined5 uStack_d0;
  undefined3 uStack_cb;
  uint16_t uStack_c8;
  uint32_t uStack_c6;
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint32_t local_88;
  uint32_t uStack_84;
  uint16_t uStack_80;
  uint8_t uStack_7e;
  uint8_t uStack_7d;
  uint16_t uStack_7c;
  uint8_t uStack_7a;
  uint8_t uStack_79;
  uint16_t uStack_78;
  uint8_t uStack_76;
  uint8_t uStack_75;
  uint16_t uStack_74;
  uint8_t uStack_72;
  uint8_t uStack_71;
  uint16_t uStack_70;
  uint8_t uStack_6e;
  uint8_t uStack_6d;
  uint32_t uStack_6c;
  uint64_t *local_60;
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
  uStack_78 = (uint16_t)_UNK_1806bdc3a;
  uStack_76 = (uint8_t)((uint3)_UNK_1806bdc3a >> 0x10);
  uStack_75 = (uint8_t)_UNK_1806bdc3d;
  uStack_74 = (uint16_t)((uint)_UNK_1806bdc3d >> 8);
  uStack_72 = (uint8_t)((uint)_UNK_1806bdc3d >> 0x18);
  uStack_71 = (uint8_t)_UNK_1806bdc41;
  uStack_70 = (uint16_t)((uint)_UNK_1806bdc41 >> 8);
  uStack_6e = (uint8_t)((uint)_UNK_1806bdc41 >> 0x18);
  local_88 = _DAT_1806bdc2a;
  uStack_84 = _UNK_1806bdc2e;
  uStack_80 = (uint16_t)_UNK_1806bdc32;
  uStack_7e = (uint8_t)((uint)_UNK_1806bdc32 >> 0x10);
  uStack_7d = (uint8_t)((uint)_UNK_1806bdc32 >> 0x18);
  uStack_7c = (uint16_t)_UNK_1806bdc36;
  uStack_7a = (uint8_t)((uint)_UNK_1806bdc36 >> 0x10);
  uStack_79 = (uint8_t)((uint)_UNK_1806bdc36 >> 0x18);
  local_98._8_8_ = _UNK_1806bdc22;
  local_98._0_8_ = _DAT_1806bdc1a;
  local_60 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x87dc) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0x87dc) = 1;
    func_0x1801b3830(lVal_11 + 0x87ad,local_98);
    func_0x180673140(&LAB_180214210);
  }
  uVal_5 = _UNK_1806b2d6c;
  uVal_23 = _UNK_1806b2d68;
  uVal_21 = _UNK_1806b2d64;
  uVal_19 = _DAT_1806b2d60;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_11 + 0x87ad);
  if (*(char *)(lVal_11 + 0x87d8) == '\x01') {
    uVal_18 = *(uint *)(lVal_11 + 0x87b1) ^ _UNK_1806b2d64;
    uVal_20 = *(uint *)(lVal_11 + 0x87b5) ^ _UNK_1806b2d68;
    uVal_22 = *(uint *)(lVal_11 + 0x87b9) ^ _UNK_1806b2d6c;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2d60;
    *(uint *)(lVal_11 + 0x87b1) = uVal_18;
    *(uint *)(lVal_11 + 0x87b5) = uVal_20;
    *(uint *)(lVal_11 + 0x87b9) = uVal_22;
    *(uint *)(lVal_11 + 0x87bd) = *(uint *)(lVal_11 + 0x87bd) ^ uVal_19;
    *(uint *)(lVal_11 + 0x87c1) = *(uint *)(lVal_11 + 0x87c1) ^ uVal_21;
    *(uint *)(lVal_11 + 0x87c5) = *(uint *)(lVal_11 + 0x87c5) ^ uVal_23;
    *(uint *)(lVal_11 + 0x87c9) = *(uint *)(lVal_11 + 0x87c9) ^ uVal_5;
    *(uint64_t *)(lVal_11 + 0x87cd) = *(uint64_t *)(lVal_11 + 0x87cd) ^ SUB168(_DAT_1806b6410,0);
    *(byte *)(lVal_11 + 0x87d5) = *(byte *)(lVal_11 + 0x87d5) ^ 0x75;
    *(byte *)(lVal_11 + 0x87d6) = *(byte *)(lVal_11 + 0x87d6) ^ 0x55;
    *(byte *)(lVal_11 + 0x87d7) = *(byte *)(lVal_11 + 0x87d7) ^ 0x4d;
    *(uint8_t *)(lVal_11 + 0x87d8) = 0;
  }
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7e = 0;
  uStack_7d = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_79 = 0;
  local_98 = (uint8_t  [16])0x0;
  sz_9 = strlen((char *)pU64_1);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_180205006:
    local_49 = 1;
    func_0x18007ba70();
LAB_180205013:
    local_51 = 1;
    func_0x18007ba70();
LAB_180205020:
    local_4a = 1;
    func_0x18007ba70();
LAB_18020502d:
    local_52 = 1;
    func_0x18007ba70();
LAB_18020503a:
    local_4c = 1;
    func_0x18007ba70();
LAB_180205047:
    local_4b = 1;
    func_0x18007ba70();
LAB_180205054:
    local_4e = 1;
    func_0x18007ba70();
LAB_180205061:
    local_4d = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_9 < 0x10) {
      pU64_14 = local_98;
      uVal_16 = 0xf;
    }
    else {
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
      local_98._0_8_ = pU64_14;
    }
    local_88 = (uint32_t)sz_9;
    uStack_84 = (uint32_t)(sz_9 >> 0x20);
    uStack_80 = (uint16_t)uVal_16;
    uStack_7e = (uint8_t)(uVal_16 >> 0x10);
    uStack_7d = (uint8_t)(uVal_16 >> 0x18);
    uStack_7c = (uint16_t)(uVal_16 >> 0x20);
    uStack_7a = (uint8_t)(uVal_16 >> 0x30);
    uStack_79 = (uint8_t)(uVal_16 >> 0x38);
    func_0x1806aa960(pU64_14,pU64_1,sz_9);
    pU64_14[sz_9] = 0;
    pU64_14 = local_98;
    func_0x18014fe60(local_60,0,0,pU64_14);
    uVal_16 = CONCAT17(uStack_79,
                      CONCAT16(uStack_7a,
                               CONCAT24(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80)))
                              ));
    if (0xf < uVal_16) {
      uVal_10 = uVal_16 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
        uVal_10 = uVal_16 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    *local_60 = &PTR_LAB_1806bc7a0;
    pU64_12 = local_60 + 0x29;
    *(uint8_t *)(local_60 + 0x29) = 1;
    uVal_7 = _UNK_1806bb27c;
    uVal_6 = _UNK_1806bb278;
    uVal_3 = _UNK_1806bb274;
    *(uint32_t *)((int64_t)local_60 + 0x14c) = _DAT_1806bb270;
    *(uint32_t *)(local_60 + 0x2a) = uVal_3;
    *(uint32_t *)((int64_t)local_60 + 0x154) = uVal_6;
    *(uint32_t *)(local_60 + 0x2b) = uVal_7;
    uVal_7 = _UNK_1806bb28c;
    uVal_6 = _UNK_1806bb288;
    uVal_3 = _UNK_1806bb284;
    *(uint32_t *)((int64_t)local_60 + 0x15c) = _DAT_1806bb280;
    *(uint32_t *)(local_60 + 0x2c) = uVal_3;
    *(uint32_t *)((int64_t)local_60 + 0x164) = uVal_6;
    *(uint32_t *)(local_60 + 0x2d) = uVal_7;
    uVal_7 = _UNK_1806bb29c;
    uVal_6 = _UNK_1806bb298;
    uVal_3 = _UNK_1806bb294;
    *(uint32_t *)((int64_t)local_60 + 0x16c) = _DAT_1806bb290;
    *(uint32_t *)(local_60 + 0x2e) = uVal_3;
    *(uint32_t *)((int64_t)local_60 + 0x174) = uVal_6;
    *(uint32_t *)(local_60 + 0x2f) = uVal_7;
    uVal_8 = _UNK_1806bb2a8;
    *(uint64_t *)((int64_t)local_60 + 0x17c) = _DAT_1806bb2a0;
    *(uint64_t *)((int64_t)local_60 + 0x184) = uVal_8;
    local_e0 = 0;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_15 = 1;
    }
    else {
      local_e0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_118);
      uVal_15 = *(uint8_t *)pU64_12;
    }
    uStack_78 = _UNK_1806bdc65;
    uStack_76 = (uint8_t)_UNK_1806bdc67;
    uStack_75 = (uint8_t)((uint)_UNK_1806bdc67 >> 8);
    uStack_74 = (uint16_t)((uint)_UNK_1806bdc67 >> 0x10);
    uStack_72 = (uint8_t)_UNK_1806bdc6b;
    uStack_71 = (uint8_t)((uint)_UNK_1806bdc6b >> 8);
    uStack_70 = (uint16_t)((uint)_UNK_1806bdc6b >> 0x10);
    local_88 = _DAT_1806bdc55;
    uStack_84 = _UNK_1806bdc59;
    uStack_80 = _UNK_1806bdc5d;
    uStack_7e = (uint8_t)_DAT_1806bdc5f;
    uStack_7d = (uint8_t)((ushort)_DAT_1806bdc5f >> 8);
    uStack_7c = _UNK_1806bdc61;
    uStack_7a = (uint8_t)_UNK_1806bdc63;
    uStack_79 = (uint8_t)((ushort)_UNK_1806bdc63 >> 8);
    local_98._8_8_ = _UNK_1806bdc4d;
    local_98._0_8_ = _DAT_1806bdc45;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8808) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x8808) = 1;
      func_0x18012b7b0(lVal_11 + 0x87dd,local_98);
      func_0x180673140(&LAB_180214240);
    }
    uVal_5 = _UNK_1806b2cac;
    uVal_23 = _UNK_1806b2ca8;
    uVal_21 = _UNK_1806b2ca4;
    uVal_19 = _DAT_1806b2ca0;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x87dd);
    if (*(char *)(lVal_11 + 0x8807) == '\x01') {
      uVal_18 = *(uint *)(lVal_11 + 0x87e1) ^ _UNK_1806b2ca4;
      uVal_20 = *(uint *)(lVal_11 + 0x87e5) ^ _UNK_1806b2ca8;
      uVal_22 = *(uint *)(lVal_11 + 0x87e9) ^ _UNK_1806b2cac;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_11 + 0x87e1) = uVal_18;
      *(uint *)(lVal_11 + 0x87e5) = uVal_20;
      *(uint *)(lVal_11 + 0x87e9) = uVal_22;
      *(uint *)(lVal_11 + 0x87ed) = *(uint *)(lVal_11 + 0x87ed) ^ uVal_19;
      *(uint *)(lVal_11 + 0x87f1) = *(uint *)(lVal_11 + 0x87f1) ^ uVal_21;
      *(uint *)(lVal_11 + 0x87f5) = *(uint *)(lVal_11 + 0x87f5) ^ uVal_23;
      *(uint *)(lVal_11 + 0x87f9) = *(uint *)(lVal_11 + 0x87f9) ^ uVal_5;
      *(uint64_t *)(lVal_11 + 0x87fd) = *(uint64_t *)(lVal_11 + 0x87fd) ^ SUB168(_DAT_1806b5c10,0);
      *(byte *)(lVal_11 + 0x8805) = *(byte *)(lVal_11 + 0x8805) ^ 0x73;
      *(byte *)(lVal_11 + 0x8806) = *(byte *)(lVal_11 + 0x8806) ^ 0x45;
      *(uint8_t *)(lVal_11 + 0x8807) = 0;
    }
    local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_180205006;
    if (sz_9 < 0x10) {
      pU64_13 = local_b8;
      uVal_16 = 0xf;
    }
    else {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_49 = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_49 = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_11;
      }
      local_b8._0_8_ = pU64_13;
    }
    local_a8._8_8_ = uVal_16;
    local_a8._0_8_ = sz_9;
    func_0x1806aa960(pU64_13,pU64_1,sz_9);
    pU64_13[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8820) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x8820) = 1;
      *(uint8_t *)(lVal_11 + 0x881e) = 1;
      *(uint64_t *)(lVal_11 + 0x8810) = 0xc9d6dadca6133c37;
      *(uint32_t *)(lVal_11 + 0x8818) = 0xa8112a10;
      *(uint16_t *)(lVal_11 + 0x881c) = 0xb3c3;
      func_0x180673140(&LAB_180214270);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint64_t *)(lVal_11 + 0x8810);
    if (*(char *)(lVal_11 + 0x881e) == '\x01') {
      *_Str = *_Str ^ 0xe9b5b3b1c77d4573;
      *(uint *)(lVal_11 + 0x8818) = *(uint *)(lVal_11 + 0x8818) ^ 0xc77d4573;
      *(byte *)(lVal_11 + 0x881c) = *(byte *)(lVal_11 + 0x881c) ^ 0xb1;
      *(byte *)(lVal_11 + 0x881d) = *(byte *)(lVal_11 + 0x881d) ^ 0xb3;
      *(uint8_t *)(lVal_11 + 0x881e) = 0;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)_Str);
    if ((int64_t)sz_9 < 0) goto LAB_180205013;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_51 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_51 = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_14;
    }
    local_88 = (uint32_t)sz_9;
    uStack_84 = (uint32_t)(sz_9 >> 0x20);
    uStack_80 = (uint16_t)uVal_16;
    uStack_7e = (uint8_t)(uVal_16 >> 0x10);
    uStack_7d = (uint8_t)(uVal_16 >> 0x18);
    uStack_7c = (uint16_t)(uVal_16 >> 0x20);
    uStack_7a = (uint8_t)(uVal_16 >> 0x30);
    uStack_79 = (uint8_t)(uVal_16 >> 0x38);
    func_0x1806aa960(pU64_14,_Str,sz_9);
    pU64_14[sz_9] = 0;
    pU64_14 = local_98;
    pU64_13 = local_b8;
    func_0x1801ccd70(local_60,pU64_14,pU64_13,pU64_12,uVal_15,local_118,0);
    uVal_16 = CONCAT17(uStack_79,
                      CONCAT16(uStack_7a,
                               CONCAT24(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80)))
                              ));
    if (0xf < uVal_16) {
      uVal_10 = uVal_16 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
        uVal_10 = uVal_16 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    if (0xf < (uint64_t)local_a8._8_8_) {
      uVal_16 = local_a8._8_8_ + 1;
      lVal_11 = local_b8._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
        uVal_16 = local_a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    local_258 = &PTR_LAB_1806bac70;
    local_250 = local_60;
    local_220 = &local_258;
    local_158 = *(uint32_t *)((int64_t)local_60 + 0x14c);
    uStack_154 = *(uint32_t *)(local_60 + 0x2a);
    uStack_150 = *(uint32_t *)((int64_t)local_60 + 0x154);
    uStack_14c = *(uint32_t *)(local_60 + 0x2b);
    local_88 = _DAT_1806bdc7f;
    uStack_84 = _UNK_1806bdc83;
    uStack_80 = (uint16_t)_UNK_1806bdc87;
    uStack_7e = (uint8_t)((uint)_UNK_1806bdc87 >> 0x10);
    uStack_7d = (uint8_t)((uint)_UNK_1806bdc87 >> 0x18);
    uStack_7c = (uint16_t)_UNK_1806bdc8b;
    uStack_7a = (uint8_t)((uint)_UNK_1806bdc8b >> 0x10);
    uStack_79 = (uint8_t)((uint)_UNK_1806bdc8b >> 0x18);
    local_98._8_8_ = _UNK_1806bdc77;
    local_98._0_8_ = _DAT_1806bdc6f;
    uStack_78 = 0xf9fd;
    uStack_76 = 0x55;
    uStack_75 = 0xc5;
    uStack_74 = 0x1cfd;
    uStack_72 = 0x2e;
    uStack_71 = 0x75;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x884c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x884c) = 1;
      func_0x1801b39d0(lVal_11 + 0x8821,local_98);
      func_0x180673140(&LAB_1802142a0);
    }
    uVal_5 = _UNK_1806b5b0c;
    uVal_23 = _UNK_1806b5b08;
    uVal_21 = _UNK_1806b5b04;
    uVal_19 = _DAT_1806b5b00;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x8821);
    if (*(char *)(lVal_11 + 0x8849) == '\x01') {
      uVal_18 = *(uint *)(lVal_11 + 0x8825) ^ _UNK_1806b5b04;
      uVal_20 = *(uint *)(lVal_11 + 0x8829) ^ _UNK_1806b5b08;
      uVal_22 = *(uint *)(lVal_11 + 0x882d) ^ _UNK_1806b5b0c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b5b00;
      *(uint *)(lVal_11 + 0x8825) = uVal_18;
      *(uint *)(lVal_11 + 0x8829) = uVal_20;
      *(uint *)(lVal_11 + 0x882d) = uVal_22;
      *(uint *)(lVal_11 + 0x8831) = *(uint *)(lVal_11 + 0x8831) ^ uVal_19;
      *(uint *)(lVal_11 + 0x8835) = *(uint *)(lVal_11 + 0x8835) ^ uVal_21;
      *(uint *)(lVal_11 + 0x8839) = *(uint *)(lVal_11 + 0x8839) ^ uVal_23;
      *(uint *)(lVal_11 + 0x883d) = *(uint *)(lVal_11 + 0x883d) ^ uVal_5;
      *(uint64_t *)(lVal_11 + 0x8841) = *(uint64_t *)(lVal_11 + 0x8841) ^ SUB168(_DAT_1806b5b10,0);
      *(uint8_t *)(lVal_11 + 0x8849) = 0;
    }
    local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_180205020;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4a = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4a = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_11;
      }
      local_b8._0_8_ = pU64_13;
    }
    local_a8._8_8_ = uVal_16;
    local_a8._0_8_ = sz_9;
    func_0x1806aa960(pU64_13,pU64_1,sz_9);
    pU64_13[sz_9] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8860) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x8860) = 1;
      uVal_8 = _UNK_1806bb2b8;
      *(uint64_t *)(lVal_11 + 0x8850) = _DAT_1806bb2b0;
      *(uint64_t *)(lVal_11 + 0x8858) = uVal_8;
      func_0x180673140(&LAB_1802142d0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (uint8_t (*)[16])(lVal_11 + 0x8850);
    if (*(char *)(lVal_11 + 0x885f) == '\x01') {
      uVal_3 = *(uint32_t *)(lVal_11 + 0x8858);
      auArr_17 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_3 >> 0x10),uVal_3)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_11 + 0x885d) >> 8)),
                                                 (char)((uint)uVal_3 >> 8)),
                                        CONCAT11((char)*(uint16_t *)(lVal_11 + 0x885d),(char)uVal_3)
                                       )),_DAT_1806ae110);
      auArr_17._8_8_ =
           auArr_17._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_11 + 0x885c) << 0x20;
      auArr_17 = pblendw(auArr_17,*_Str_00,0xf);
      *_Str_00 = auArr_17 ^ _DAT_1806b6470;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)_Str_00);
    if ((int64_t)sz_9 < 0) goto LAB_18020502d;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_52 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_52 = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_14;
    }
    pU64_12 = local_60;
    lVal_11 = (int64_t)local_60 + 0x14c;
    local_88 = (uint32_t)sz_9;
    uStack_84 = (uint32_t)(sz_9 >> 0x20);
    uStack_80 = (uint16_t)uVal_16;
    uStack_7e = (uint8_t)(uVal_16 >> 0x10);
    uStack_7d = (uint8_t)(uVal_16 >> 0x18);
    uStack_7c = (uint16_t)(uVal_16 >> 0x20);
    uStack_7a = (uint8_t)(uVal_16 >> 0x30);
    uStack_79 = (uint8_t)(uVal_16 >> 0x38);
    func_0x1806aa960(pU64_14,_Str_00,sz_9);
    pU64_14[sz_9] = 0;
    pU64_14 = local_98;
    pU64_13 = local_b8;
    func_0x1801cd600(pU64_12,pU64_14,pU64_13,lVal_11,&local_158,&local_258,0);
    uVal_16 = CONCAT17(uStack_79,
                      CONCAT16(uStack_7a,
                               CONCAT24(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80)))
                              ));
    if (0xf < uVal_16) {
      uVal_10 = uVal_16 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
        uVal_10 = uVal_16 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    if (0xf < (uint64_t)local_a8._8_8_) {
      uVal_16 = local_a8._8_8_ + 1;
      lVal_11 = local_b8._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
        uVal_16 = local_a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    local_218 = &PTR_LAB_1806bac70;
    local_210 = local_60;
    local_148 = *(uint32_t *)((int64_t)local_60 + 0x15c);
    uStack_144 = *(uint32_t *)(local_60 + 0x2c);
    uStack_140 = *(uint32_t *)((int64_t)local_60 + 0x164);
    uStack_13c = *(uint32_t *)(local_60 + 0x2d);
    uStack_78 = (uint16_t)_UNK_1806bdcb7;
    uStack_76 = (uint8_t)((uint)_UNK_1806bdcb7 >> 0x10);
    uStack_75 = (uint8_t)((uint)_UNK_1806bdcb7 >> 0x18);
    uStack_74 = (uint16_t)_UNK_1806bdcbb;
    uStack_72 = (uint8_t)((uint)_UNK_1806bdcbb >> 0x10);
    uStack_71 = (uint8_t)((uint)_UNK_1806bdcbb >> 0x18);
    uStack_70 = (uint16_t)_UNK_1806bdcbf;
    uStack_6e = (uint8_t)((uint)_UNK_1806bdcbf >> 0x10);
    uStack_6d = (uint8_t)((uint)_UNK_1806bdcbf >> 0x18);
    local_88 = _DAT_1806bdca7;
    uStack_84 = _UNK_1806bdcab;
    uStack_80 = (uint16_t)_UNK_1806bdcaf;
    uStack_7e = (uint8_t)((uint)_UNK_1806bdcaf >> 0x10);
    uStack_7d = (uint8_t)((uint)_UNK_1806bdcaf >> 0x18);
    uStack_7c = (uint16_t)_DAT_1806bdcb3;
    uStack_7a = (uint8_t)((uint)_DAT_1806bdcb3 >> 0x10);
    uStack_79 = (uint8_t)((uint)_DAT_1806bdcb3 >> 0x18);
    local_98._8_8_ = _UNK_1806bdc9f;
    local_98._0_8_ = _DAT_1806bdc97;
    local_1e0 = &local_218;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8890) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x8890) = 1;
      func_0x1801b1b20(lVal_11 + 0x8861,local_98);
      func_0x180673140(&LAB_180214300);
    }
    uVal_5 = _UNK_1806b2d7c;
    uVal_23 = _UNK_1806b2d78;
    uVal_21 = _UNK_1806b2d74;
    uVal_19 = _DAT_1806b2d70;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x8861);
    if (*(char *)(lVal_11 + 0x888d) == '\x01') {
      uVal_18 = *(uint *)(lVal_11 + 0x8865) ^ _UNK_1806b2d74;
      uVal_20 = *(uint *)(lVal_11 + 0x8869) ^ _UNK_1806b2d78;
      uVal_22 = *(uint *)(lVal_11 + 0x886d) ^ _UNK_1806b2d7c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d70;
      *(uint *)(lVal_11 + 0x8865) = uVal_18;
      *(uint *)(lVal_11 + 0x8869) = uVal_20;
      *(uint *)(lVal_11 + 0x886d) = uVal_22;
      *(uint *)(lVal_11 + 0x8871) = *(uint *)(lVal_11 + 0x8871) ^ uVal_19;
      *(uint *)(lVal_11 + 0x8875) = *(uint *)(lVal_11 + 0x8875) ^ uVal_21;
      *(uint *)(lVal_11 + 0x8879) = *(uint *)(lVal_11 + 0x8879) ^ uVal_23;
      *(uint *)(lVal_11 + 0x887d) = *(uint *)(lVal_11 + 0x887d) ^ uVal_5;
      *(uint64_t *)(lVal_11 + 0x8881) = *(uint64_t *)(lVal_11 + 0x8881) ^ SUB168(_DAT_1806b5c20,0);
      *(byte *)(lVal_11 + 0x8889) = *(byte *)(lVal_11 + 0x8889) ^ 0x87;
      *(byte *)(lVal_11 + 0x888a) = *(byte *)(lVal_11 + 0x888a) ^ 199;
      *(byte *)(lVal_11 + 0x888b) = *(byte *)(lVal_11 + 0x888b) ^ 0xa3;
      *(byte *)(lVal_11 + 0x888c) = *(byte *)(lVal_11 + 0x888c) ^ 0x93;
      *(uint8_t *)(lVal_11 + 0x888d) = 0;
    }
    local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_18020503a;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4c = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4c = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_11;
      }
      local_b8._0_8_ = pU64_13;
    }
    local_a8._8_8_ = uVal_16;
    local_a8._0_8_ = sz_9;
    func_0x1806aa960(pU64_13,pU64_1,sz_9);
    pU64_13[sz_9] = 0;
    local_d8 = _DAT_1806bdcc3;
    uStack_d0 = (undefined5)_UNK_1806bdccb;
    uStack_cb = (undefined3)((uint64_t)_UNK_1806bdccb >> 0x28);
    uStack_c8 = 0xc7f5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x88a4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x88a4) = 1;
      func_0x18007c170(lVal_11 + 0x8891,&local_d8);
      func_0x180673140(&LAB_180214330);
    }
    fnPtr_2 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x8891);
    func_0x180218800(fnPtr_2);
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen(fnPtr_2);
    if ((int64_t)sz_9 < 0) goto LAB_180205047;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4b = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4b = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_14;
    }
    pU64_12 = local_60;
    lVal_11 = (int64_t)local_60 + 0x15c;
    local_88 = (uint32_t)sz_9;
    uStack_84 = (uint32_t)(sz_9 >> 0x20);
    uStack_80 = (uint16_t)uVal_16;
    uStack_7e = (uint8_t)(uVal_16 >> 0x10);
    uStack_7d = (uint8_t)(uVal_16 >> 0x18);
    uStack_7c = (uint16_t)(uVal_16 >> 0x20);
    uStack_7a = (uint8_t)(uVal_16 >> 0x30);
    uStack_79 = (uint8_t)(uVal_16 >> 0x38);
    func_0x1806aa960(pU64_14,fnPtr_2,sz_9);
    pU64_14[sz_9] = 0;
    pU64_14 = local_98;
    pU64_13 = local_b8;
    func_0x1801cd600(pU64_12,pU64_14,pU64_13,lVal_11,&local_148,&local_218,0);
    uVal_16 = CONCAT17(uStack_79,
                      CONCAT16(uStack_7a,
                               CONCAT24(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80)))
                              ));
    if (0xf < uVal_16) {
      uVal_10 = uVal_16 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
        uVal_10 = uVal_16 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    if (0xf < (uint64_t)local_a8._8_8_) {
      uVal_16 = local_a8._8_8_ + 1;
      lVal_11 = local_b8._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
        uVal_16 = local_a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    local_1d8 = &PTR_LAB_1806bac70;
    local_1d0 = local_60;
    local_1a0 = &local_1d8;
    local_138 = *(uint32_t *)((int64_t)local_60 + 0x16c);
    uStack_134 = *(uint32_t *)(local_60 + 0x2e);
    uStack_130 = *(uint32_t *)((int64_t)local_60 + 0x174);
    uStack_12c = *(uint32_t *)(local_60 + 0x2f);
    uStack_78 = (uint16_t)_UNK_1806bdcf5;
    uStack_76 = (uint8_t)((uint3)_UNK_1806bdcf5 >> 0x10);
    uStack_75 = (uint8_t)_UNK_1806bdcf8;
    uStack_74 = (uint16_t)((uint)_UNK_1806bdcf8 >> 8);
    uStack_72 = (uint8_t)((uint)_UNK_1806bdcf8 >> 0x18);
    uStack_71 = (uint8_t)_UNK_1806bdcfc;
    uStack_70 = (uint16_t)((uint)_UNK_1806bdcfc >> 8);
    uStack_6e = (uint8_t)((uint)_UNK_1806bdcfc >> 0x18);
    local_88 = _DAT_1806bdce5;
    uStack_84 = _UNK_1806bdce9;
    uStack_80 = (uint16_t)_UNK_1806bdced;
    uStack_7e = (uint8_t)((uint)_UNK_1806bdced >> 0x10);
    uStack_7d = (uint8_t)((uint)_UNK_1806bdced >> 0x18);
    uStack_7c = (uint16_t)_UNK_1806bdcf1;
    uStack_7a = (uint8_t)((uint)_UNK_1806bdcf1 >> 0x10);
    uStack_79 = (uint8_t)((uint)_UNK_1806bdcf1 >> 0x18);
    local_98._8_8_ = _UNK_1806bdcdd;
    local_98._0_8_ = _DAT_1806bdcd5;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x88d4) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x88d4) = 1;
      func_0x1801b3830(lVal_11 + 0x88a5,local_98);
      func_0x180673140(&LAB_180214360);
    }
    uVal_5 = _UNK_1806b2d1c;
    uVal_23 = _UNK_1806b2d18;
    uVal_21 = _UNK_1806b2d14;
    uVal_19 = _DAT_1806b2d10;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x88a5);
    if (*(char *)(lVal_11 + 0x88d0) == '\x01') {
      uVal_18 = *(uint *)(lVal_11 + 0x88a9) ^ _UNK_1806b2d14;
      uVal_20 = *(uint *)(lVal_11 + 0x88ad) ^ _UNK_1806b2d18;
      uVal_22 = *(uint *)(lVal_11 + 0x88b1) ^ _UNK_1806b2d1c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d10;
      *(uint *)(lVal_11 + 0x88a9) = uVal_18;
      *(uint *)(lVal_11 + 0x88ad) = uVal_20;
      *(uint *)(lVal_11 + 0x88b1) = uVal_22;
      *(uint *)(lVal_11 + 0x88b5) = *(uint *)(lVal_11 + 0x88b5) ^ uVal_19;
      *(uint *)(lVal_11 + 0x88b9) = *(uint *)(lVal_11 + 0x88b9) ^ uVal_21;
      *(uint *)(lVal_11 + 0x88bd) = *(uint *)(lVal_11 + 0x88bd) ^ uVal_23;
      *(uint *)(lVal_11 + 0x88c1) = *(uint *)(lVal_11 + 0x88c1) ^ uVal_5;
      *(uint64_t *)(lVal_11 + 0x88c5) = *(uint64_t *)(lVal_11 + 0x88c5) ^ SUB168(_DAT_1806b5c30,0);
      *(byte *)(lVal_11 + 0x88cd) = *(byte *)(lVal_11 + 0x88cd) ^ 0xd5;
      *(byte *)(lVal_11 + 0x88ce) = *(byte *)(lVal_11 + 0x88ce) ^ 0xf1;
      *(byte *)(lVal_11 + 0x88cf) = *(byte *)(lVal_11 + 0x88cf) ^ 0xf5;
      *(uint8_t *)(lVal_11 + 0x88d0) = 0;
    }
    local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_180205054;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4e = 1;
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4e = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_11;
      }
      local_b8._0_8_ = pU64_13;
    }
    local_a8._8_8_ = uVal_16;
    local_a8._0_8_ = sz_9;
    func_0x1806aa960(pU64_13,pU64_1,sz_9);
    pU64_13[sz_9] = 0;
    local_d8 = _DAT_1806bdd00;
    uStack_d0 = (undefined5)_UNK_1806bdd08;
    uStack_cb = (undefined3)((uint64_t)_UNK_1806bdd08 >> 0x28);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x88e8) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x88e8) = 1;
      func_0x18007d150(lVal_11 + 0x88d5,&local_d8);
      func_0x180673140(&LAB_180214390);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x88d5);
    if (*(char *)(lVal_11 + 0x88e5) == '\x01') {
      uVal_19 = *(uint *)(lVal_11 + 0x88d9) ^ _UNK_1806b2d14;
      uVal_21 = *(uint *)(lVal_11 + 0x88dd) ^ _UNK_1806b2d18;
      uVal_23 = *(uint *)(lVal_11 + 0x88e1) ^ _UNK_1806b2d1c;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2d10;
      *(uint *)(lVal_11 + 0x88d9) = uVal_19;
      *(uint *)(lVal_11 + 0x88dd) = uVal_21;
      *(uint *)(lVal_11 + 0x88e1) = uVal_23;
      *(uint8_t *)(lVal_11 + 0x88e5) = 0;
    }
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    uStack_79 = 0;
    local_98 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if ((int64_t)sz_9 < 0) goto LAB_180205061;
    uVal_16 = 0xf;
    if (0xf < sz_9) {
      uVal_10 = sz_9 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_10) {
        uVal_16 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        local_4d = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        local_4d = 1;
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_11;
      }
      local_98._0_8_ = pU64_14;
    }
    pU64_12 = local_60;
    lVal_11 = (int64_t)local_60 + 0x16c;
    local_88 = (uint32_t)sz_9;
    uStack_84 = (uint32_t)(sz_9 >> 0x20);
    uStack_80 = (uint16_t)uVal_16;
    uStack_7e = (uint8_t)(uVal_16 >> 0x10);
    uStack_7d = (uint8_t)(uVal_16 >> 0x18);
    uStack_7c = (uint16_t)(uVal_16 >> 0x20);
    uStack_7a = (uint8_t)(uVal_16 >> 0x30);
    uStack_79 = (uint8_t)(uVal_16 >> 0x38);
    func_0x1806aa960(pU64_14,pU64_1,sz_9);
    pU64_14[sz_9] = 0;
    pU64_14 = local_98;
    pU64_13 = local_b8;
    func_0x1801cd600(pU64_12,pU64_14,pU64_13,lVal_11,&local_138,&local_1d8,0);
    uVal_16 = CONCAT17(uStack_79,
                      CONCAT16(uStack_7a,
                               CONCAT24(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80)))
                              ));
    if (0xf < uVal_16) {
      uVal_10 = uVal_16 + 1;
      lVal_11 = local_98._0_8_;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
        uVal_10 = uVal_16 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    if (0xf < (uint64_t)local_a8._8_8_) {
      uVal_16 = local_a8._8_8_ + 1;
      lVal_11 = local_b8._0_8_;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
        uVal_16 = local_a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    local_198 = &PTR_LAB_1806bac70;
    local_190 = local_60;
    local_160 = &local_198;
    local_128 = *(uint32_t *)((int64_t)local_60 + 0x17c);
    uStack_124 = *(uint32_t *)(local_60 + 0x30);
    uStack_120 = *(uint32_t *)((int64_t)local_60 + 0x184);
    uStack_11c = *(uint32_t *)(local_60 + 0x31);
    uStack_78 = (uint16_t)_DAT_1806bdd30;
    uStack_76 = (uint8_t)((uint)_DAT_1806bdd30 >> 0x10);
    uStack_75 = (uint8_t)((uint)_DAT_1806bdd30 >> 0x18);
    uStack_74 = (uint16_t)_UNK_1806bdd34;
    uStack_72 = (uint8_t)((uint)_UNK_1806bdd34 >> 0x10);
    uStack_71 = (uint8_t)((uint)_UNK_1806bdd34 >> 0x18);
    uStack_70 = (uint16_t)_UNK_1806bdd38;
    uStack_6e = (uint8_t)((uint)_UNK_1806bdd38 >> 0x10);
    uStack_6d = (uint8_t)((uint)_UNK_1806bdd38 >> 0x18);
    uStack_6c = _UNK_1806bdd3c;
    local_88 = _DAT_1806bdd20;
    uStack_84 = _UNK_1806bdd24;
    uStack_80 = (uint16_t)_UNK_1806bdd28;
    uStack_7e = (uint8_t)((uint)_UNK_1806bdd28 >> 0x10);
    uStack_7d = (uint8_t)((uint)_UNK_1806bdd28 >> 0x18);
    uStack_7c = (uint16_t)_UNK_1806bdd2c;
    uStack_7a = (uint8_t)((uint)_UNK_1806bdd2c >> 0x10);
    uStack_79 = (uint8_t)((uint)_UNK_1806bdd2c >> 0x18);
    local_98._8_8_ = _UNK_1806bdd18;
    local_98._0_8_ = _DAT_1806bdd10;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x891c) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0x891c) = 1;
      func_0x1801b4680(lVal_11 + 0x88e9,local_98);
      func_0x180673140(&LAB_1802143b0);
    }
    uVal_5 = _UNK_1806b54cc;
    uVal_23 = _UNK_1806b54c8;
    uVal_21 = _UNK_1806b54c4;
    uVal_19 = _DAT_1806b54c0;
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_11 + 0x88e9);
    if (*(char *)(lVal_11 + 0x8919) == '\x01') {
      uVal_18 = *(uint *)(lVal_11 + 0x88ed) ^ _UNK_1806b54c4;
      uVal_20 = *(uint *)(lVal_11 + 0x88f1) ^ _UNK_1806b54c8;
      uVal_22 = *(uint *)(lVal_11 + 0x88f5) ^ _UNK_1806b54cc;
      *pU64_1 = *pU64_1 ^ _DAT_1806b54c0;
      *(uint *)(lVal_11 + 0x88ed) = uVal_18;
      *(uint *)(lVal_11 + 0x88f1) = uVal_20;
      *(uint *)(lVal_11 + 0x88f5) = uVal_22;
      *(uint *)(lVal_11 + 0x88f9) = *(uint *)(lVal_11 + 0x88f9) ^ uVal_19;
      *(uint *)(lVal_11 + 0x88fd) = *(uint *)(lVal_11 + 0x88fd) ^ uVal_21;
      *(uint *)(lVal_11 + 0x8901) = *(uint *)(lVal_11 + 0x8901) ^ uVal_23;
      *(uint *)(lVal_11 + 0x8905) = *(uint *)(lVal_11 + 0x8905) ^ uVal_5;
      *(uint *)(lVal_11 + 0x8909) = *(uint *)(lVal_11 + 0x8909) ^ uVal_19;
      *(uint *)(lVal_11 + 0x890d) = *(uint *)(lVal_11 + 0x890d) ^ uVal_21;
      *(uint *)(lVal_11 + 0x8911) = *(uint *)(lVal_11 + 0x8911) ^ uVal_23;
      *(uint *)(lVal_11 + 0x8915) = *(uint *)(lVal_11 + 0x8915) ^ uVal_5;
      *(uint8_t *)(lVal_11 + 0x8919) = 0;
    }
    local_a8 = (uint8_t  [16])0x0;
    local_b8 = (uint8_t  [16])0x0;
    sz_9 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_9) {
      uVal_16 = 0xf;
      if (0xf < sz_9) {
        uVal_10 = sz_9 | 0xf;
        uVal_16 = 0x16;
        if (0x16 < uVal_10) {
          uVal_16 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          local_50 = 1;
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
        }
        else {
          local_50 = 1;
          lVal_11 = func_0x180672de0(uVal_16 + 0x28);
          pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_11;
        }
        local_b8._0_8_ = pU64_13;
      }
      local_a8._8_8_ = uVal_16;
      local_a8._0_8_ = sz_9;
      func_0x1806aa960(pU64_13,pU64_1,sz_9);
      pU64_13[sz_9] = 0;
      local_d8 = _DAT_1806bdd40;
      uStack_d0 = (undefined5)_UNK_1806bdd48;
      uStack_cb = 0x64114;
      uStack_c8 = 0xbf62;
      uStack_c6 = CONCAT13(uStack_c6._3_1_,0x455726);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x8934) == '\0') {
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_11 + 0x8934) = 1;
        func_0x18007cd50(lVal_11 + 0x891d,&local_d8);
        func_0x180673140(&LAB_1802143e0);
      }
      fnPtr_2 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x891d)
      ;
      func_0x180218820(fnPtr_2);
      local_98 = (uint8_t  [16])0x0;
      sz_9 = strlen(fnPtr_2);
      if (-1 < (int64_t)sz_9) {
        uVal_16 = 0xf;
        if (0xf < sz_9) {
          uVal_10 = sz_9 | 0xf;
          uVal_16 = 0x16;
          if (0x16 < uVal_10) {
            uVal_16 = uVal_10;
          }
          if (uVal_10 < 0xfff) {
            local_4f = 1;
            pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
          }
          else {
            local_4f = 1;
            lVal_11 = func_0x180672de0(uVal_16 + 0x28);
            pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_14 + -8) = lVal_11;
          }
          local_98._0_8_ = pU64_14;
        }
        pU64_12 = local_60;
        lVal_11 = (int64_t)local_60 + 0x17c;
        local_88 = (uint32_t)sz_9;
        uStack_84 = (uint32_t)(sz_9 >> 0x20);
        uStack_80 = (uint16_t)uVal_16;
        uStack_7e = (uint8_t)(uVal_16 >> 0x10);
        uStack_7d = (uint8_t)(uVal_16 >> 0x18);
        uStack_7c = (uint16_t)(uVal_16 >> 0x20);
        uStack_7a = (uint8_t)(uVal_16 >> 0x30);
        uStack_79 = (uint8_t)(uVal_16 >> 0x38);
        func_0x1806aa960(pU64_14,fnPtr_2,sz_9);
        pU64_14[sz_9] = 0;
        func_0x1801cd600(pU64_12,local_98,local_b8,lVal_11,&local_128,&local_198,0);
        uVal_16 = CONCAT17(uStack_79,
                          CONCAT16(uStack_7a,
                                   CONCAT24(uStack_7c,
                                            CONCAT13(uStack_7d,CONCAT12(uStack_7e,uStack_80)))));
        if (0xf < uVal_16) {
          uVal_10 = uVal_16 + 1;
          lVal_11 = local_98._0_8_;
          if (0xfff < uVal_10) {
            lVal_11 = *(int64_t *)(local_98._0_8_ + -8);
            if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_11)) goto LAB_180204fff;
            uVal_10 = uVal_16 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_10);
        }
        if (0xf < (uint64_t)local_a8._8_8_) {
          uVal_16 = local_a8._8_8_ + 1;
          lVal_11 = local_b8._0_8_;
          if (0xfff < uVal_16) {
            lVal_11 = *(int64_t *)(local_b8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_11)) {
LAB_180204fff:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_16 = local_a8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_11,uVal_16);
        }
        return local_60;
      }
      goto LAB_18020507b;
    }
  }
  local_50 = 1;
  func_0x18007ba70();
LAB_18020507b:
  local_4f = 1;
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_12 = (uint64_t *)(*fnPtr_4)();
  return pU64_12;
}

// Unwind@180205090
void Unwind_180205090(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1b8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
    *(uint64_t *)(param_2 + 0x1b8) = 0;
  }
  return;
}

// Unwind@1802050f0
void Unwind_1802050f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8808) = 0;
  *(uint8_t *)(param_2 + 0x24f) = 1;
  return;
}

// Unwind@180205140
void Unwind_180205140(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  return;
}

// Unwind@180205180
void Unwind_180205180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x247) = 0;
  return;
}

// Unwind@1802051c0
void Unwind_1802051c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x247);
  func_0x180001e70(param_2 + 0x1e0);
  *(uint8_t *)(param_2 + 0x24f) = uVal_1;
  return;
}

// Unwind@180205210
void Unwind_180205210(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x24f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1b8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x180));
    *(uint64_t *)(param_2 + 0x1b8) = 0;
  }
  return;
}

// Unwind@180205270
void Unwind_180205270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x246) = 0;
  return;
}

// Unwind@1802052b0
void Unwind_1802052b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x246);
  func_0x180001e70(param_2 + 0x1e0);
  *(uint8_t *)(param_2 + 0x24e) = uVal_1;
  return;
}

// Unwind@180205300
void Unwind_180205300(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x24e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180205360
void Unwind_180205360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x24d) = 0;
  return;
}

// Unwind@1802053a0
void Unwind_1802053a0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x24d);
  func_0x180001e70(param_2 + 0x1e0);
  *(uint8_t *)(param_2 + 0x24c) = uVal_1;
  return;
}

// Unwind@1802053f0
void Unwind_1802053f0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x24c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@180205450
void Unwind_180205450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x24b) = 0;
  return;
}

// Unwind@180205490
void Unwind_180205490(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x24b);
  func_0x180001e70(param_2 + 0x1e0);
  *(uint8_t *)(param_2 + 0x24a) = uVal_1;
  return;
}

// Unwind@1802054e0
void Unwind_1802054e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x24a) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@180205540
void Unwind_180205540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x249) = 0;
  return;
}

// Unwind@180205580
void Unwind_180205580(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x249);
  func_0x180001e70(param_2 + 0x1e0);
  *(uint8_t *)(param_2 + 0x248) = uVal_1;
  return;
}

// Unwind@1802055d0
void Unwind_1802055d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x248) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x138), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x100));
    *(uint64_t *)(param_2 + 0x138) = 0;
  }
  return;
}

// Unwind@180205630
void Unwind_180205630(uint64_t param_1,int64_t param_2)
{
  func_0x180154cc0(*(uint64_t *)(param_2 + 0x238));
  return;
}

// Unwind@180205670
void Unwind_180205670(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x87dc) = 0;
  return;
}

// Unwind@1802056c0
void Unwind_1802056c0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x884c) = 0;
  *(uint8_t *)(param_2 + 0x24e) = 1;
  return;
}

// Unwind@180205710
void Unwind_180205710(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8890) = 0;
  *(uint8_t *)(param_2 + 0x24c) = 1;
  return;
}

// Unwind@180205760
void Unwind_180205760(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x88a4) = 0;
  *(uint8_t *)(param_2 + 0x24d) = 1;
  return;
}

// Unwind@1802057b0
void Unwind_1802057b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x88d4) = 0;
  *(uint8_t *)(param_2 + 0x24a) = 1;
  return;
}

// Unwind@180205800
void Unwind_180205800(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x88e8) = 0;
  *(uint8_t *)(param_2 + 0x24b) = 1;
  return;
}

// Unwind@180205850
void Unwind_180205850(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x891c) = 0;
  *(uint8_t *)(param_2 + 0x248) = 1;
  return;
}

// Unwind@1802058a0
void Unwind_1802058a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8934) = 0;
  *(uint8_t *)(param_2 + 0x249) = 1;
  return;
}

// Unwind@180206e20
void Unwind_180206e20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@180206e80
void Unwind_180206e80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180206ee0
void Unwind_180206ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180206f40
void Unwind_180206f40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@180206fa0
void Unwind_180206fa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180207000
void Unwind_180207000(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180207060
void Unwind_180207060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@1802070c0
void Unwind_1802070c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180207120
void Unwind_180207120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180207930
void Unwind_180207930(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180207970
void Unwind_180207970(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1802079b0
void Unwind_1802079b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xa8));
  return;
}

// func_0x1802079f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1802079f0(uint64_t *param_1)
{
  char *fnPtr_1;
  uint8_t (*pArr16_2)[16];
  uint64_t *pU64_3;
  uint *_Str;
  func_ptr_t fnPtr_4;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  int64_t lVal_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  size_t sz_17;
  uint64_t uVal_18;
  int64_t lVal_19;
  uint64_t *pU64_20;
  uint8_t *pU64_21;
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
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint16_t uStack_6c;
  uint8_t uStack_6a;
  uint8_t uStack_69;
  uint16_t uStack_68;
  uint32_t uStack_66;
  uint32_t uStack_62;
  uint32_t uStack_5e;
  uint8_t uStack_5a;
  uint64_t *local_58;
  uint8_t local_4e;
  uint8_t local_4d;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uStack_78._3_1_ = (uint8_t)_UNK_1806bdd68;
  uStack_78 = CONCAT13(uStack_78._3_1_,_UNK_1806bdd65);
  uStack_74._3_1_ = (uint8_t)_UNK_1806bdd6c;
  uStack_74 = CONCAT13(uStack_74._3_1_,(int3)((uint)_UNK_1806bdd68 >> 8));
  local_88 = _DAT_1806bdd55;
  uStack_84 = _UNK_1806bdd59;
  uStack_80 = _UNK_1806bdd5d;
  uStack_7c = _UNK_1806bdd61;
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x89f4) == '\0') {
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_19 + 0x89f4) = 1;
    func_0x18007c9b0(lVal_19 + 0x89d5,&local_88);
    func_0x180673140(&LAB_180214620);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x89d5);
  func_0x1801c0c70(fnPtr_1);
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  uStack_69 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  sz_17 = strlen(fnPtr_1);
  if ((int64_t)sz_17 < 0) {
    func_0x18007ba70();
LAB_18020876e:
    local_49 = 1;
    func_0x18007ba70();
LAB_18020877b:
    local_4c = 1;
    func_0x18007ba70();
LAB_180208788:
    local_4a = 1;
    func_0x18007ba70();
LAB_180208795:
    local_4d = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_17 < 0x10) {
      pU64_22 = &local_88;
      uVal_25 = 0xf;
    }
    else {
      uVal_18 = sz_17 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_18) {
        uVal_25 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        pU64_22 = (uint32_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_25 + 0x28);
        pU64_22 = (uint32_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -2) = lVal_19;
      }
      local_88 = SUB84(pU64_22,0);
      uStack_84 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
    }
    uStack_78 = (uint32_t)sz_17;
    uStack_74 = (uint32_t)(sz_17 >> 0x20);
    uStack_70 = (uint32_t)uVal_25;
    uStack_6c = (uint16_t)(uVal_25 >> 0x20);
    uStack_6a = (uint8_t)(uVal_25 >> 0x30);
    uStack_69 = (uint8_t)(uVal_25 >> 0x38);
    func_0x1806aa960(pU64_22,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)pU64_22 + sz_17) = 0;
    pU64_22 = &local_88;
    func_0x180132ee0(local_58,0,0,pU64_22);
    uVal_25 = CONCAT17(uStack_69,CONCAT16(uStack_6a,CONCAT24(uStack_6c,uStack_70)));
    if (0xf < uVal_25) {
      lVal_9 = CONCAT44(uStack_84,local_88);
      uVal_18 = uVal_25 + 1;
      lVal_19 = lVal_9;
      if (0xfff < uVal_18) {
        lVal_19 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_19)) goto LAB_180208767;
        uVal_18 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_18);
    }
    *local_58 = &PTR_LAB_1806bc910;
    uVal_16 = _UNK_1806b5c0c;
    uVal_15 = _UNK_1806b5c08;
    uVal_14 = _UNK_1806b5c04;
    *(uint32_t *)(local_58 + 0x16) = _DAT_1806b5c00;
    *(uint32_t *)((int64_t)local_58 + 0xb4) = uVal_14;
    *(uint32_t *)(local_58 + 0x17) = uVal_15;
    *(uint32_t *)((int64_t)local_58 + 0xbc) = uVal_16;
    *(uint16_t *)(local_58 + 0x18) = 0;
    pU64_23 = (uint8_t *)((int64_t)local_58 + 0xd1);
    local_58[0x19] = 0;
    *(uint32_t *)((int64_t)local_58 + 0xcf) = 0;
    *(uint8_t *)((int64_t)local_58 + 0xd3) = 1;
    *(uint64_t *)((int64_t)local_58 + 0xd4) = DAT_1806b2890;
    local_b0 = 0;
    if (DAT_18083f940 == (uint64_t *)0x0) {
      uVal_24 = 0;
    }
    else {
      local_b0 = (**(func_ptr_t *)*DAT_18083f940)(DAT_18083f940,local_e8);
      uVal_24 = *pU64_23;
    }
    uStack_68 = (uint16_t)_UNK_1806bdd90;
    uStack_66._1_3_ = (undefined3)_UNK_1806bdd93;
    uStack_66 = CONCAT31(uStack_66._1_3_,(char)((uint3)_UNK_1806bdd90 >> 0x10));
    uStack_62._1_3_ = (undefined3)_UNK_1806bdd97;
    uStack_62 = CONCAT31(uStack_62._1_3_,(char)((uint)_UNK_1806bdd93 >> 0x18));
    uStack_5e._1_3_ = (undefined3)_UNK_1806bdd9b;
    uStack_5e = CONCAT31(uStack_5e._1_3_,(char)((uint)_UNK_1806bdd97 >> 0x18));
    uStack_5a = (uint8_t)((uint)_UNK_1806bdd9b >> 0x18);
    uStack_78 = _DAT_1806bdd80;
    uStack_74 = _UNK_1806bdd84;
    uStack_70 = _UNK_1806bdd88;
    uStack_6c = (uint16_t)_UNK_1806bdd8c;
    uStack_6a = (uint8_t)((uint)_UNK_1806bdd8c >> 0x10);
    uStack_69 = (uint8_t)((uint)_UNK_1806bdd8c >> 0x18);
    local_88 = _DAT_1806bdd70;
    uStack_84 = _UNK_1806bdd74;
    uStack_80 = _UNK_1806bdd78;
    uStack_7c = _UNK_1806bdd7c;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8a28) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x8a28) = 1;
      func_0x1801bb2b0(lVal_19 + 0x89f5,&local_88);
      func_0x180673140(&LAB_180214650);
    }
    uVal_13 = _UNK_1806b2cac;
    uVal_12 = _UNK_1806b2ca8;
    uVal_11 = _UNK_1806b2ca4;
    uVal_10 = _DAT_1806b2ca0;
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_2 = (uint8_t (*)[16])(lVal_19 + 0x89f5);
    if (*(char *)(lVal_19 + 0x8a24) == '\x01') {
      auArr_5._4_4_ = *(uint *)(lVal_19 + 0x89f9) ^ _UNK_1806b2ca4;
      auArr_5._0_4_ = *(uint *)*pArr16_2 ^ _DAT_1806b2ca0;
      auArr_5._8_4_ = *(uint *)(lVal_19 + 0x89fd) ^ _UNK_1806b2ca8;
      auArr_5._12_4_ = *(uint *)(lVal_19 + 0x8a01) ^ _UNK_1806b2cac;
      *pArr16_2 = auArr_5;
      auArr_7._4_4_ = *(uint *)(lVal_19 + 0x8a09) ^ uVal_11;
      auArr_7._0_4_ = *(uint *)(lVal_19 + 0x8a05) ^ uVal_10;
      auArr_7._8_4_ = *(uint *)(lVal_19 + 0x8a0d) ^ uVal_12;
      auArr_7._12_4_ = *(uint *)(lVal_19 + 0x8a11) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_19 + 0x8a05) = auArr_7;
      *(uint64_t *)(lVal_19 + 0x8a15) =
           CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_19 + 0x8a15) >> 0x20) ^ _UNK_1806b5c14,
                    (uint)*(uint64_t *)(lVal_19 + 0x8a15) ^ _DAT_1806b5c10);
      *(byte *)(lVal_19 + 0x8a1d) = *(byte *)(lVal_19 + 0x8a1d) ^ 0x73;
      *(byte *)(lVal_19 + 0x8a1e) = *(byte *)(lVal_19 + 0x8a1e) ^ 0x45;
      *(byte *)(lVal_19 + 0x8a1f) = *(byte *)(lVal_19 + 0x8a1f) ^ 0x7d;
      *(byte *)(lVal_19 + 0x8a20) = *(byte *)(lVal_19 + 0x8a20) ^ 199;
      *(byte *)(lVal_19 + 0x8a21) = *(byte *)(lVal_19 + 0x8a21) ^ 0xb1;
      *(byte *)(lVal_19 + 0x8a22) = *(byte *)(lVal_19 + 0x8a22) ^ 0xb3;
      *(byte *)(lVal_19 + 0x8a23) = *(byte *)(lVal_19 + 0x8a23) ^ 0xb5;
      *(uint8_t *)(lVal_19 + 0x8a24) = 0;
    }
    local_98 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    sz_17 = strlen((char *)pArr16_2);
    if ((int64_t)sz_17 < 0) goto LAB_18020876e;
    if (sz_17 < 0x10) {
      pU64_21 = local_a8;
      uVal_25 = 0xf;
    }
    else {
      uVal_18 = sz_17 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_18) {
        uVal_25 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_49 = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_49 = 1;
        lVal_19 = func_0x180672de0(uVal_25 + 0x28);
        pU64_21 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_19;
      }
      local_a8._0_8_ = pU64_21;
    }
    local_98._8_8_ = uVal_25;
    local_98._0_8_ = sz_17;
    func_0x1806aa960(pU64_21,pArr16_2,sz_17);
    pU64_21[sz_17] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8a3c) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x8a3c) = 1;
      *(uint8_t *)(lVal_19 + 0x8a38) = 1;
      *(uint64_t *)(lVal_19 + 0x8a30) = 0xe9d0dfd3a60e2c37;
      func_0x180673140(&LAB_180214680);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_19 + 0x8a30);
    if (*(char *)(lVal_19 + 0x8a38) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xe9b5b3b1c77d4573;
      *(uint8_t *)(lVal_19 + 0x8a38) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    sz_17 = strlen((char *)pU64_3);
    if ((int64_t)sz_17 < 0) goto LAB_18020877b;
    uVal_25 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_18) {
        uVal_25 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_4c = 1;
        pU64_22 = (uint32_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_4c = 1;
        lVal_19 = func_0x180672de0(uVal_25 + 0x28);
        pU64_22 = (uint32_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -2) = lVal_19;
      }
      local_88 = SUB84(pU64_22,0);
      uStack_84 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
    }
    uStack_78 = (uint32_t)sz_17;
    uStack_74 = (uint32_t)(sz_17 >> 0x20);
    uStack_70 = (uint32_t)uVal_25;
    uStack_6c = (uint16_t)(uVal_25 >> 0x20);
    uStack_6a = (uint8_t)(uVal_25 >> 0x30);
    uStack_69 = (uint8_t)(uVal_25 >> 0x38);
    func_0x1806aa960(pU64_22,pU64_3,sz_17);
    *(uint8_t *)((int64_t)pU64_22 + sz_17) = 0;
    pU64_22 = &local_88;
    pU64_21 = local_a8;
    func_0x1801ccd70(local_58,pU64_22,pU64_21,pU64_23,uVal_24,local_e8,0);
    uVal_25 = CONCAT17(uStack_69,CONCAT16(uStack_6a,CONCAT24(uStack_6c,uStack_70)));
    if (0xf < uVal_25) {
      lVal_9 = CONCAT44(uStack_84,local_88);
      uVal_18 = uVal_25 + 1;
      lVal_19 = lVal_9;
      if (0xfff < uVal_18) {
        lVal_19 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_19)) goto LAB_180208767;
        uVal_18 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_18);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_25 = local_98._8_8_ + 1;
      lVal_19 = local_a8._0_8_;
      if (0xfff < uVal_25) {
        lVal_19 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_19)) goto LAB_180208767;
        uVal_25 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_25);
    }
    local_168 = &PTR_LAB_1806ba9a0;
    local_160 = local_58;
    local_130 = &local_168;
    uVal_24 = *(uint8_t *)((int64_t)local_58 + 0xd2);
    uStack_68 = _UNK_1806bddbf;
    uStack_66 = _UNK_1806bddc1;
    uStack_62 = _UNK_1806bddc5;
    uStack_5e = _UNK_1806bddc9;
    uStack_78 = _DAT_1806bddaf;
    uStack_74 = _UNK_1806bddb3;
    uStack_70 = _UNK_1806bddb7;
    uStack_6c = _UNK_1806bddbb;
    uStack_6a = (uint8_t)_DAT_1806bddbd;
    uStack_69 = (uint8_t)((ushort)_DAT_1806bddbd >> 8);
    local_88 = _DAT_1806bdd9f;
    uStack_84 = _UNK_1806bdda3;
    uStack_80 = _UNK_1806bdda7;
    uStack_7c = _UNK_1806bddab;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8a6c) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x8a6c) = 1;
      func_0x1801ba020(lVal_19 + 0x8a3d,&local_88);
      func_0x180673140(&LAB_1802146a0);
    }
    uVal_13 = _UNK_1806b2d7c;
    uVal_12 = _UNK_1806b2d78;
    uVal_11 = _UNK_1806b2d74;
    uVal_10 = _DAT_1806b2d70;
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_2 = (uint8_t (*)[16])(lVal_19 + 0x8a3d);
    if (*(char *)(lVal_19 + 0x8a6b) == '\x01') {
      auArr_6._4_4_ = *(uint *)(lVal_19 + 0x8a41) ^ _UNK_1806b2d74;
      auArr_6._0_4_ = *(uint *)*pArr16_2 ^ _DAT_1806b2d70;
      auArr_6._8_4_ = *(uint *)(lVal_19 + 0x8a45) ^ _UNK_1806b2d78;
      auArr_6._12_4_ = *(uint *)(lVal_19 + 0x8a49) ^ _UNK_1806b2d7c;
      *pArr16_2 = auArr_6;
      auArr_8._4_4_ = *(uint *)(lVal_19 + 0x8a51) ^ uVal_11;
      auArr_8._0_4_ = *(uint *)(lVal_19 + 0x8a4d) ^ uVal_10;
      auArr_8._8_4_ = *(uint *)(lVal_19 + 0x8a55) ^ uVal_12;
      auArr_8._12_4_ = *(uint *)(lVal_19 + 0x8a59) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_19 + 0x8a4d) = auArr_8;
      *(uint64_t *)(lVal_19 + 0x8a5d) =
           CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_19 + 0x8a5d) >> 0x20) ^ _UNK_1806b5c24,
                    (uint)*(uint64_t *)(lVal_19 + 0x8a5d) ^ _DAT_1806b5c20);
      *(byte *)(lVal_19 + 0x8a65) = *(byte *)(lVal_19 + 0x8a65) ^ 0x87;
      *(byte *)(lVal_19 + 0x8a66) = *(byte *)(lVal_19 + 0x8a66) ^ 199;
      *(byte *)(lVal_19 + 0x8a67) = *(byte *)(lVal_19 + 0x8a67) ^ 0xa3;
      *(byte *)(lVal_19 + 0x8a68) = *(byte *)(lVal_19 + 0x8a68) ^ 0x93;
      *(byte *)(lVal_19 + 0x8a69) = *(byte *)(lVal_19 + 0x8a69) ^ 0xa5;
      *(byte *)(lVal_19 + 0x8a6a) = *(byte *)(lVal_19 + 0x8a6a) ^ 0xcd;
      *(uint8_t *)(lVal_19 + 0x8a6b) = 0;
    }
    local_98 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    sz_17 = strlen((char *)pArr16_2);
    if ((int64_t)sz_17 < 0) goto LAB_180208788;
    uVal_25 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_18) {
        uVal_25 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_4a = 1;
        pU64_21 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_4a = 1;
        lVal_19 = func_0x180672de0(uVal_25 + 0x28);
        pU64_21 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -8) = lVal_19;
      }
      local_a8._0_8_ = pU64_21;
    }
    local_98._8_8_ = uVal_25;
    local_98._0_8_ = sz_17;
    func_0x1806aa960(pU64_21,pArr16_2,sz_17);
    pU64_21[sz_17] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8a80) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x8a80) = 1;
      *(uint8_t *)(lVal_19 + 0x8a7e) = 1;
      *(uint64_t *)(lVal_19 + 0x8a70) = 0x20c0aec4f183a8c9;
      *(uint32_t *)(lVal_19 + 0x8a78) = 0xfdd6a8f5;
      *(uint16_t *)(lVal_19 + 0x8a7c) = 0xcdc1;
      func_0x180673140(&LAB_1802146d0);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_19 + 0x8a70);
    if (*(char *)(lVal_19 + 0x8a7e) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_19 + 0x8a78) = *(uint *)(lVal_19 + 0x8a78) ^ 0x93a3c787;
      *(byte *)(lVal_19 + 0x8a7c) = *(byte *)(lVal_19 + 0x8a7c) ^ 0xa5;
      *(byte *)(lVal_19 + 0x8a7d) = *(byte *)(lVal_19 + 0x8a7d) ^ 0xcd;
      *(uint8_t *)(lVal_19 + 0x8a7e) = 0;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    sz_17 = strlen((char *)pU64_3);
    if ((int64_t)sz_17 < 0) goto LAB_180208795;
    uVal_25 = 0xf;
    if (0xf < sz_17) {
      uVal_18 = sz_17 | 0xf;
      uVal_25 = 0x16;
      if (0x16 < uVal_18) {
        uVal_25 = uVal_18;
      }
      if (uVal_18 < 0xfff) {
        local_4d = 1;
        pU64_22 = (uint32_t *)func_0x180672de0(uVal_25 + 1);
      }
      else {
        local_4d = 1;
        lVal_19 = func_0x180672de0(uVal_25 + 0x28);
        pU64_22 = (uint32_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_22 + -2) = lVal_19;
      }
      local_88 = SUB84(pU64_22,0);
      uStack_84 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
    }
    pU64_20 = local_58;
    lVal_19 = (int64_t)local_58 + 0xd2;
    uStack_78 = (uint32_t)sz_17;
    uStack_74 = (uint32_t)(sz_17 >> 0x20);
    uStack_70 = (uint32_t)uVal_25;
    uStack_6c = (uint16_t)(uVal_25 >> 0x20);
    uStack_6a = (uint8_t)(uVal_25 >> 0x30);
    uStack_69 = (uint8_t)(uVal_25 >> 0x38);
    func_0x1806aa960(pU64_22,pU64_3,sz_17);
    *(uint8_t *)((int64_t)pU64_22 + sz_17) = 0;
    pU64_22 = &local_88;
    pU64_23 = local_a8;
    func_0x1801ccd70(pU64_20,pU64_22,pU64_23,lVal_19,uVal_24,&local_168,0);
    uVal_25 = CONCAT17(uStack_69,CONCAT16(uStack_6a,CONCAT24(uStack_6c,uStack_70)));
    if (0xf < uVal_25) {
      lVal_9 = CONCAT44(uStack_84,local_88);
      uVal_18 = uVal_25 + 1;
      lVal_19 = lVal_9;
      if (0xfff < uVal_18) {
        lVal_19 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_19)) goto LAB_180208767;
        uVal_18 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_18);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_25 = local_98._8_8_ + 1;
      lVal_19 = local_a8._0_8_;
      if (0xfff < uVal_25) {
        lVal_19 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_19)) goto LAB_180208767;
        uVal_25 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_25);
    }
    local_128 = &PTR_LAB_1806ba9a0;
    local_120 = local_58;
    uVal_24 = *(uint8_t *)((int64_t)local_58 + 0xd3);
    uStack_78 = _DAT_1806bdddd;
    uStack_74 = _UNK_1806bdde1;
    uStack_70 = _UNK_1806bdde5;
    uStack_6c = (uint16_t)_UNK_1806bdde9;
    uStack_6a = (uint8_t)((uint)_UNK_1806bdde9 >> 0x10);
    uStack_69 = (uint8_t)((uint)_UNK_1806bdde9 >> 0x18);
    local_88 = _DAT_1806bddcd;
    uStack_84 = _UNK_1806bddd1;
    uStack_80 = _UNK_1806bddd5;
    uStack_7c = _UNK_1806bddd9;
    local_f0 = &local_128;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x8aa4) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0x8aa4) = 1;
      func_0x18008f8e0(lVal_19 + 0x8a81,&local_88);
      func_0x180673140(&LAB_180214700);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x8a81);
    func_0x180217260(fnPtr_1);
    local_a8 = ZEXT816(0);
    sz_17 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_17) {
      uVal_25 = 0xf;
      if (0xf < sz_17) {
        uVal_18 = sz_17 | 0xf;
        uVal_25 = 0x16;
        if (0x16 < uVal_18) {
          uVal_25 = uVal_18;
        }
        if (uVal_18 < 0xfff) {
          local_4b = 1;
          pU64_23 = (uint8_t *)func_0x180672de0(uVal_25 + 1);
        }
        else {
          local_4b = 1;
          lVal_19 = func_0x180672de0(uVal_25 + 0x28);
          pU64_23 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_23 + -8) = lVal_19;
        }
        local_a8._0_8_ = pU64_23;
      }
      local_98._8_8_ = uVal_25;
      local_98._0_8_ = sz_17;
      func_0x1806aa960(pU64_23,fnPtr_1,sz_17);
      pU64_23[sz_17] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x8ab0) == '\0') {
        lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_19 + 0x8ab0) = 1;
        *(uint32_t *)(lVal_19 + 0x8aa8) = 0x92839e98;
        *(uint16_t *)(lVal_19 + 0x8aac) = 0x11f;
        func_0x180673140(&LAB_180214730);
      }
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_19 + 0x8aa8);
      if (*(char *)(lVal_19 + 0x8aad) == '\x01') {
        *_Str = *_Str ^ 0xf7f5f1d5;
        *(byte *)(lVal_19 + 0x8aac) = *(byte *)(lVal_19 + 0x8aac) ^ 0x1f;
        *(uint8_t *)(lVal_19 + 0x8aad) = 0;
      }
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      sz_17 = strlen((char *)_Str);
      if (-1 < (int64_t)sz_17) {
        uVal_25 = 0xf;
        if (0xf < sz_17) {
          uVal_18 = sz_17 | 0xf;
          uVal_25 = 0x16;
          if (0x16 < uVal_18) {
            uVal_25 = uVal_18;
          }
          if (uVal_18 < 0xfff) {
            local_4e = 1;
            pU64_22 = (uint32_t *)func_0x180672de0(uVal_25 + 1);
          }
          else {
            local_4e = 1;
            lVal_19 = func_0x180672de0(uVal_25 + 0x28);
            pU64_22 = (uint32_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_22 + -2) = lVal_19;
          }
          local_88 = SUB84(pU64_22,0);
          uStack_84 = (uint32_t)((uint64_t)pU64_22 >> 0x20);
        }
        pU64_20 = local_58;
        lVal_19 = (int64_t)local_58 + 0xd3;
        uStack_78 = (uint32_t)sz_17;
        uStack_74 = (uint32_t)(sz_17 >> 0x20);
        uStack_70 = (uint32_t)uVal_25;
        uStack_6c = (uint16_t)(uVal_25 >> 0x20);
        uStack_6a = (uint8_t)(uVal_25 >> 0x30);
        uStack_69 = (uint8_t)(uVal_25 >> 0x38);
        func_0x1806aa960(pU64_22,_Str,sz_17);
        *(uint8_t *)((int64_t)pU64_22 + sz_17) = 0;
        func_0x1801ccd70(pU64_20,&local_88,local_a8,lVal_19,uVal_24,&local_128,0);
        uVal_25 = CONCAT17(uStack_69,CONCAT16(uStack_6a,CONCAT24(uStack_6c,uStack_70)));
        if (0xf < uVal_25) {
          lVal_9 = CONCAT44(uStack_84,local_88);
          uVal_18 = uVal_25 + 1;
          lVal_19 = lVal_9;
          if (0xfff < uVal_18) {
            lVal_19 = *(int64_t *)(lVal_9 + -8);
            if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_19)) goto LAB_180208767;
            uVal_18 = uVal_25 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_19,uVal_18);
        }
        if (0xf < (uint64_t)local_98._8_8_) {
          uVal_25 = local_98._8_8_ + 1;
          lVal_19 = local_a8._0_8_;
          if (0xfff < uVal_25) {
            lVal_19 = *(int64_t *)(local_a8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_19)) {
LAB_180208767:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_25 = local_98._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_19,uVal_25);
        }
        return local_58;
      }
      goto LAB_1802087af;
    }
  }
  local_4b = 1;
  func_0x18007ba70();
LAB_1802087af:
  local_4e = 1;
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_20 = (uint64_t *)(*fnPtr_4)();
  return pU64_20;
}

// Unwind@1802087c0
void Unwind_1802087c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xf8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@180208810
void Unwind_180208810(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x8a28) = 0;
  *(uint8_t *)(param_2 + 0x15f) = 1;
  return;
}

// Unwind@180208860
void Unwind_180208860(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@1802088a0
void Unwind_1802088a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x15c) = 0;
  return;
}

// Unwind@1802088e0
void Unwind_1802088e0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x15c);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x15f) = uVal_1;
  return;
}

// Unwind@180208930
void Unwind_180208930(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x15f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@180208990
void Unwind_180208990(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x15b) = 0;
  return;
}

// Unwind@1802089d0
void Unwind_1802089d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x15b);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x15e) = uVal_1;
  return;
}

// Unwind@180208a20
void Unwind_180208a20(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x15e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180208a80
void Unwind_180208a80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x15a) = 0;
  return;
}

// Unwind@180208ac0
void Unwind_180208ac0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x15a);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x15d) = uVal_1;
  return;
}
