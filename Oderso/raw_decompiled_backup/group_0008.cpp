#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@1800cc220
void Unwind_1800cc220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc260
void Unwind_1800cc260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc2a0
void Unwind_1800cc2a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc2e0
void Unwind_1800cc2e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc320
void Unwind_1800cc320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc360
void Unwind_1800cc360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc3a0
void Unwind_1800cc3a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc3e0
void Unwind_1800cc3e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc420
void Unwind_1800cc420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc460
void Unwind_1800cc460(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc4a0
void Unwind_1800cc4a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc4e0
void Unwind_1800cc4e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc520
void Unwind_1800cc520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc560
void Unwind_1800cc560(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc5a0
void Unwind_1800cc5a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cc5e0
void Unwind_1800cc5e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// func_0x1800cc710
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800cc710(int64_t param_1,float param_2,float param_3)
{
  float fVal_1;
  float fVal_2;
  
  fVal_1 = *(float *)(param_1 + 0x68);
  if ((fVal_1 != DAT_1806ae7b0) || (NAN(fVal_1) || NAN(DAT_1806ae7b0))) {
    if (*(char *)(param_1 + 100) == '\0') {
      if (*(char *)(param_1 + 0x65) == '\x01') {
        fVal_1 = param_2 * param_3 + fVal_1;
        *(float *)(param_1 + 0x68) = fVal_1;
        if (fVal_1 < param_3) {
          return;
        }
        *(uint8_t *)(param_1 + 0x65) = 0;
        *(uint8_t *)(param_1 + 0x58) = 0;
        return;
      }
      fVal_1 = *(float *)(param_1 + 0x5c);
      fVal_2 = (fVal_1 - *(float *)(param_1 + 0x60)) * _DAT_1806b2840 + fVal_1;
      *(float *)(param_1 + 0x60) = fVal_2;
      if (fVal_1 != 0.0) {
        return;
      }
      if (NAN(fVal_1)) {
        return;
      }
      if (DAT_1806b2844 <= fVal_2) {
        return;
      }
      *(uint8_t *)(param_1 + 0x65) = 1;
      return;
    }
  }
  else {
    fVal_1 = DAT_1806ae7b0;
    if (*(char *)(param_1 + 100) == '\0') {
      *(uint8_t *)(param_1 + 100) = 1;
      fVal_1 = param_3;
    }
  }
  fVal_1 = fVal_1 - param_3 * param_2;
  *(float *)(param_1 + 0x68) = fVal_1;
  if (0.0 < fVal_1) {
    return;
  }
  *(uint8_t *)(param_1 + 100) = 0;
  *(uint32_t *)(param_1 + 0x68) = 0;
  return;
}

// func_0x1800cc7c0
void func_0x1800cc7c0(int64_t param_1,uint32_t param_2)
{
  *(uint32_t *)(param_1 + 0x44) = param_2;
  *(uint32_t *)(param_1 + 0x48) = param_2;
  return;
}

// func_0x1800cc7d0
void func_0x1800cc7d0(void)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083ed40) {
    func_0x180672ec0(&DAT_18083ed40);
    if (DAT_18083ed40 == -1) {
      DAT_18083ed38 = func_0x1800cc8b0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083ed40);
    }
  }
  if (DAT_18083ed44 == '\0') {
    func_0x180073290(DAT_18083ed38,&DAT_18083ed45,6);
    DAT_18083ed44 = '\x01';
  }
  func_0x180073200(DAT_18083ed38,6);
  return;
}

// Unwind@1800cc880
void Unwind_1800cc880(void)
{
  func_0x180672f60(&DAT_18083ed40);
  return;
}

// func_0x1800cc8b0
int64_t func_0x1800cc8b0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x8182ddd5d0bc9af) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x5b56a1b9400de093) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800cc954;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x5b56a1b9400de093);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800cc97a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x5b56a1b9400de093);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x1b5b412bU) + -0x13;
  }
LAB_1800cc954:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800cc97a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800cc990
void func_0x1800cc990(void)
{
  if (DAT_18083ed44 == '\x01') {
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x1c39c) < DAT_18083ed58) {
      func_0x180672ec0(&DAT_18083ed58);
      if (DAT_18083ed58 == -1) {
        DAT_18083ed50 = func_0x1800cc8b0(&DAT_180840f80);
        _Init_thread_footer(&DAT_18083ed58);
      }
    }
    func_0x180073330(DAT_18083ed50,&DAT_18083ed45,6);
    return;
  }
  return;
}

// Unwind@1800cca30
void Unwind_1800cca30(void)
{
  func_0x180672f60(&DAT_18083ed58);
  return;
}

// func_0x1800cca60
void func_0x1800cca60(void)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083ed68) {
    func_0x180672ec0(&DAT_18083ed68);
    if (DAT_18083ed68 == -1) {
      lVal_1 = func_0x1800ccb20(&DAT_180840f80);
      DAT_18083ed60 = lVal_1 + 4;
      _Init_thread_footer(&DAT_18083ed68);
    }
  }
  func_0x180073330(DAT_18083ed60,&DAT_18076111b,2);
  return;
}

// Unwind@1800ccaf0
void Unwind_1800ccaf0(void)
{
  func_0x180672f60(&DAT_18083ed68);
  return;
}

// func_0x1800ccb20
int64_t func_0x1800ccb20(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xdd3213634b0e80c) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x572b7ef3344aa2ca) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800ccbc4;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x572b7ef3344aa2ca);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800ccbea;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x572b7ef3344aa2ca);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0x6361dc39U) + -0x43;
  }
LAB_1800ccbc4:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800ccbea:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800ccc00
void func_0x1800ccc00(void)
{
  int64_t lVal_1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083ed78) {
    func_0x180672ec0(&DAT_18083ed78);
    if (DAT_18083ed78 == -1) {
      lVal_1 = func_0x1800ccb20(&DAT_180840f80);
      DAT_18083ed70 = lVal_1 + 4;
      _Init_thread_footer(&DAT_18083ed78);
    }
  }
  func_0x180073330(DAT_18083ed70,&DAT_180761153,2);
  return;
}

// Unwind@1800ccc90
void Unwind_1800ccc90(void)
{
  func_0x180672f60(&DAT_18083ed78);
  return;
}

// func_0x1800cccc0
void func_0x1800cccc0(void)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083ed88) {
    func_0x180672ec0(&DAT_18083ed88);
    if (DAT_18083ed88 == -1) {
      DAT_18083ed80 = func_0x1800ccda0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083ed88);
    }
  }
  if (DAT_18083ed8c == '\0') {
    DAT_18083ed8c = '\x01';
    func_0x180073290(DAT_18083ed80,&DAT_18083ed8d,6);
  }
  func_0x180073200(DAT_18083ed80,6);
  return;
}

// Unwind@1800ccd70
void Unwind_1800ccd70(void)
{
  func_0x180672f60(&DAT_18083ed88);
  return;
}

// func_0x1800ccda0
int64_t func_0x1800ccda0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x91e37ad4ce62536) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != 0x5a4207889568e172) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800cce44;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != 0x5a4207889568e172);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800cce6a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != 0x5a4207889568e172);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffcf2ae6faU) + -0x33;
  }
LAB_1800cce44:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800cce6a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// Unwind@1800ccf20
void Unwind_1800ccf20(void)
{
  func_0x180672f60(&DAT_18083eda0);
  return;
}

// func_0x1800ccf50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ccf50(void)
{
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x1c39c) < DAT_18083edb0) {
    func_0x180672ec0(&DAT_18083edb0);
    if (DAT_18083edb0 == -1) {
      DAT_18083eda8 = func_0x1800cd0f0(&DAT_180840f80);
      _Init_thread_footer(&DAT_18083edb0);
    }
  }
  if (DAT_18083edb4 == '\0') {
    DAT_18083edb4 = '\x01';
    func_0x180073290(DAT_18083eda8,&DAT_18083edb5,6);
    DAT_18083edbb = 0xe9;
    _DAT_18083edbc =
         CONCAT13((char)((uint)DAT_18083edb7 >> 0x18) + UNK_1806aeb23,
                  CONCAT12((char)((uint)DAT_18083edb7 >> 0x10) + UNK_1806aeb22,
                           CONCAT11((char)((uint)DAT_18083edb7 >> 8) + UNK_1806aeb21,
                                    (char)DAT_18083edb7 + DAT_1806aeb20)));
    DAT_18083edc0 = 0x90;
  }
  func_0x180073330(DAT_18083eda8,&DAT_18083edbb,6);
  return;
}

// Unwind@1800cd0c0
void Unwind_1800cd0c0(void)
{
  func_0x180672f60(&DAT_18083edb0);
  return;
}

// func_0x1800cd0f0
int64_t func_0x1800cd0f0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0x8ef7f73f988b8c) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x18e52adfb49a2642) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_1800cd194;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x18e52adfb49a2642);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_1800cd1ba;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x18e52adfb49a2642);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xffffffffac7f0c9eU) + -0x25;
  }
LAB_1800cd194:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_1800cd1ba:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x1800cd1d0
void func_0x1800cd1d0(void)
{
  if (DAT_18083edb4 == '\x01') {
    if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x1c39c) < DAT_18083edd0) {
      func_0x180672ec0(&DAT_18083edd0);
      if (DAT_18083edd0 == -1) {
        DAT_18083edc8 = func_0x1800cd0f0(&DAT_180840f80);
        _Init_thread_footer(&DAT_18083edd0);
      }
    }
    func_0x180073330(DAT_18083edc8,&DAT_18083edb5,6);
    return;
  }
  return;
}

// Unwind@1800cd270
void Unwind_1800cd270(void)
{
  func_0x180672f60(&DAT_18083edd0);
  return;
}

// func_0x1800cd2a0
void func_0x1800cd2a0(int64_t *param_1,uint32_t param_2,uint32_t param_3)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  float fVal_8;
  float fVal_9;
  uint8_t auStack_98 [40];
  int64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  
  local_60 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  lVal_6 = *param_1;
  if (param_1[1] == lVal_6) {
    fVal_8 = 0.0;
  }
  else {
    lVal_7 = 0x10;
    uVal_5 = 0;
    fVal_9 = 0.0;
    do {
      uVal_4 = func_0x18011bc80(DAT_180840a50,param_3);
      if (*(uint64_t *)(lVal_6 + 0x18 + lVal_7) < 0x10) {
        local_70 = lVal_7 + lVal_6;
      }
      else {
        local_70 = *(int64_t *)(lVal_6 + lVal_7);
      }
      local_68 = *(uint64_t *)(lVal_6 + 0x10 + lVal_7);
      iVal_2 = func_0x18012ab00(uVal_4,&local_70,param_2,0);
      fVal_8 = (float)iVal_2;
      if ((float)iVal_2 <= fVal_9) {
        fVal_8 = fVal_9;
      }
      uVal_5 = uVal_5 + 1;
      lVal_6 = *param_1;
      uVal_3 = (param_1[1] - lVal_6 >> 4) * -0x5555555555555555;
      lVal_7 = lVal_7 + 0x30;
      fVal_9 = fVal_8;
    } while (uVal_5 <= uVal_3 && uVal_3 - uVal_5 != 0);
  }
  if (DAT_18083cf40 == (local_60 ^ (uint64_t)auStack_98)) {
    return;
  }
  func_0x180673080(fVal_8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800cd3b0
float func_0x1800cd3b0(uint64_t *param_1,uint32_t param_2,uint32_t param_3)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint64_t uVal_3;
  float fVal_4;
  uint8_t auStack_58 [40];
  uint64_t *local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_58;
  uVal_3 = func_0x18011bc80(DAT_180840a50,param_3);
  local_28 = param_1[2];
  if (0xf < (uint64_t)param_1[3]) {
    param_1 = (uint64_t *)*param_1;
  }
  local_30 = param_1;
  iVal_2 = func_0x18012ab00(uVal_3,&local_30,param_2,0);
  if (DAT_18083cf40 == (local_20 ^ (uint64_t)auStack_58)) {
    return (float)iVal_2;
  }
  func_0x180673080(local_20 ^ (uint64_t)auStack_58);
  fnPtr_1 = (func_ptr_t )swi(3);
  fVal_4 = (float)(*fnPtr_1)();
  return fVal_4;
}

// func_0x1800cd4c0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800cd4c0(int64_t param_1,int64_t param_2)
{
  func_ptr_t fnPtr_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint32_t *pU64_4;
  uint64_t *pU64_5;
  uint8_t auStack_68 [32];
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
  uint32_t local_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  uint64_t local_8;
  
  DAT_18083ee68 = *(int64_t *)(param_1 + 0x10);
  local_8 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  DAT_18083ee70 = *(uint64_t *)(DAT_18083ee68 + 0xb8);
  DAT_18083ee78 = *(uint64_t *)(DAT_18083ee68 + 0x30);
  DAT_18083ee58 = param_1;
  DAT_18083ee60 = param_2;
  lVal_2 = func_0x180129cf0(DAT_180840a58);
  func_0x18011b0e0(lVal_2 + 0xc0,&local_48);
  _DAT_18083eeb0 = local_18;
  uRam000000018083eeb4 = uStack_14;
  uRam000000018083eeb8 = uStack_10;
  uRam000000018083eebc = uStack_c;
  _DAT_18083eea0 = local_28;
  uRam000000018083eea4 = uStack_24;
  uRam000000018083eea8 = uStack_20;
  uRam000000018083eeac = uStack_1c;
  _DAT_18083ee90 = local_38;
  uRam000000018083ee94 = uStack_34;
  uRam000000018083ee98 = uStack_30;
  uRam000000018083ee9c = uStack_2c;
  _DAT_18083ee80 = local_48;
  uRam000000018083ee84 = uStack_44;
  uRam000000018083ee88 = uStack_40;
  uRam000000018083ee8c = uStack_3c;
  uVal_3 = func_0x18011baa0(*(uint64_t *)(DAT_180840a58 + 0x1a0));
  pU64_4 = (uint32_t *)func_0x180116a90(uVal_3);
  _DAT_18083eec0 = *pU64_4;
  uRam000000018083eec4 = pU64_4[1];
  uRam000000018083eec8 = pU64_4[2];
  uRam000000018083eecc = pU64_4[3];
  _DAT_18083eed0 = pU64_4[4];
  uRam000000018083eed4 = pU64_4[5];
  uRam000000018083eed8 = pU64_4[6];
  uRam000000018083eedc = pU64_4[7];
  _DAT_18083eee0 = pU64_4[8];
  uRam000000018083eee4 = pU64_4[9];
  uRam000000018083eee8 = pU64_4[10];
  uRam000000018083eeec = pU64_4[0xb];
  _DAT_18083eef0 = pU64_4[0xc];
  uRam000000018083eef4 = pU64_4[0xd];
  uRam000000018083eef8 = pU64_4[0xe];
  uRam000000018083eefc = pU64_4[0xf];
  _DAT_18083ef00 = *(uint64_t *)(DAT_18083ee60 + 0x50);
  if (*(int64_t *)(DAT_180840a58 + 0x1b8) != 0) {
    pU64_5 = (uint64_t *)func_0x18011a7e0();
    DAT_18083ef08 = *pU64_5;
    _DAT_18083ef10 = *(uint32_t *)(pU64_5 + 1);
  }
  func_0x1800cd610();
  if (DAT_18083cf40 == (local_8 ^ (uint64_t)auStack_68)) {
    return;
  }
  func_0x180673080(local_8 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800cd610
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800cd610(void)
{
  uint64_t *pU64_1;
  char *fnPtr_2;
  uint8_t (*_Str)[16];
  uint8_t auArr_3 [16];
  int64_t lVal_4;
  size_t sz_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint8_t *pU64_8;
  uint64_t uVal_9;
  uint32_t local_88;
  uint32_t uStack_84;
  uint uStack_80;
  uint16_t uStack_7c;
  uint8_t uStack_7a;
  uint8_t uStack_79;
  uint16_t uStack_78;
  uint32_t uStack_76;
  uint8_t uStack_72;
  uint8_t uStack_71;
  uint16_t local_70;
  uint32_t uStack_6e;
  uint16_t uStack_6a;
  uint64_t local_68;
  uint8_t local_58 [16];
  uint8_t local_48 [24];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (DAT_18083ef20 == 0) {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x33f8) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x33f8) = 1;
      *(uint8_t *)(lVal_7 + 0x33f6) = 1;
      *(uint64_t *)(lVal_7 + 0x33e8) = 0x585551ae214e8e9e;
      *(uint32_t *)(lVal_7 + 0x33f0) = 0x287d8888;
      *(uint16_t *)(lVal_7 + 0x33f4) = 0x3db5;
      func_0x180673140(&LAB_1800f09a0);
    }
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_7 + 0x33e8);
    if (*(char *)(lVal_7 + 0x33f6) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x7393dc74711e7eb;
      *(uint *)(lVal_7 + 0x33f0) = *(uint *)(lVal_7 + 0x33f0) ^ 0x4711e7eb;
      *(byte *)(lVal_7 + 0x33f4) = *(byte *)(lVal_7 + 0x33f4) ^ 199;
      *(byte *)(lVal_7 + 0x33f5) = *(byte *)(lVal_7 + 0x33f5) ^ 0x3d;
      *(uint8_t *)(lVal_7 + 0x33f6) = 0;
    }
    local_58 = ZEXT816(0);
    sz_5 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_5) {
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,pU64_1,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef20 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      goto LAB_1800cd7dc;
    }
  }
  else {
LAB_1800cd7dc:
    if (DAT_18083ef28 == 0) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3410) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x3410) = 1;
        *(uint8_t *)(lVal_7 + 0x340c) = 1;
        *(uint64_t *)(lVal_7 + 0x3400) = 0xfca32d14cff646a2;
        *(uint32_t *)(lVal_7 + 0x3408) = 0xbbcd4aa5;
        func_0x180673140(&LAB_1800f09d0);
      }
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_7 + 0x3400);
      if (*(char *)(lVal_7 + 0x340c) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x89d75571bba92fd7;
        *(uint *)(lVal_7 + 0x3408) = *(uint *)(lVal_7 + 0x3408) ^ 0xbba92fd7;
        *(uint8_t *)(lVal_7 + 0x340c) = 0;
      }
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen((char *)pU64_1);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,pU64_1,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef28 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef30 == 0) {
      local_88 = _DAT_1806b3fa0;
      uStack_84 = _UNK_1806b3fa4;
      uStack_80 = _UNK_1806b3fa8;
      uStack_7c = (uint16_t)_UNK_1806b3fac;
      uStack_7a = (uint8_t)((uint)_UNK_1806b3fac >> 0x10);
      uStack_79 = (uint8_t)((uint)_UNK_1806b3fac >> 0x18);
      uStack_78 = 0x57e0;
      uStack_76 = 0x20b70428;
      uStack_72 = 0x79;
      uStack_71 = 0xcb;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x342c) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x342c) = 1;
        func_0x18007d9e0(lVal_7 + 0x3411,&local_88);
        func_0x180673140(&LAB_1800f0a00);
      }
      fnPtr_2 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3411)
      ;
      func_0x1800f2ff0(fnPtr_2);
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen(fnPtr_2);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,fnPtr_2,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef30 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef38 == 0) {
      local_88 = _DAT_1806b3fb8;
      uStack_84 = _UNK_1806b3fbc;
      uStack_80 = _UNK_1806b3fc0;
      uStack_7c = (uint16_t)_UNK_1806b3fc4;
      uStack_7a = (uint8_t)((uint)_UNK_1806b3fc4 >> 0x10);
      uStack_79 = (uint8_t)((uint)_UNK_1806b3fc4 >> 0x18);
      uStack_78 = 0x5fa8;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3440) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x3440) = 1;
        func_0x18007c170(lVal_7 + 0x342d,&local_88);
        func_0x180673140(&LAB_1800f0a30);
      }
      fnPtr_2 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x342d)
      ;
      func_0x1800f2340(fnPtr_2);
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen(fnPtr_2);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,fnPtr_2,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef38 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef40 == 0) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3458) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x3458) = 1;
        *(uint8_t *)(lVal_7 + 0x3456) = 1;
        *(uint64_t *)(lVal_7 + 0x3448) = 0xe2e6751e18135850;
        *(uint32_t *)(lVal_7 + 0x3450) = 0x121d624d;
        *(uint16_t *)(lVal_7 + 0x3454) = 0x105;
        func_0x180673140(&LAB_1800f0a60);
      }
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_7 + 0x3448);
      if (*(char *)(lVal_7 + 0x3456) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x8d8f017d7d7f3d23;
        *(uint *)(lVal_7 + 0x3450) = *(uint *)(lVal_7 + 0x3450) ^ 0x7d7f3d23;
        *(byte *)(lVal_7 + 0x3454) = *(byte *)(lVal_7 + 0x3454) ^ 0x7d;
        *(byte *)(lVal_7 + 0x3455) = *(byte *)(lVal_7 + 0x3455) ^ 1;
        *(uint8_t *)(lVal_7 + 0x3456) = 0;
      }
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen((char *)pU64_1);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,pU64_1,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef40 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef48 == 0) {
      uStack_78 = _UNK_1806b3fda;
      uStack_76 = _UNK_1806b3fdc;
      uStack_72 = (uint8_t)_UNK_1806b3fe0;
      uStack_71 = (uint8_t)((uint)_UNK_1806b3fe0 >> 8);
      local_70 = (uint16_t)((uint)_UNK_1806b3fe0 >> 0x10);
      uStack_6e = _UNK_1806b3fe4;
      local_88 = _DAT_1806b3fca;
      uStack_84 = _UNK_1806b3fce;
      uStack_80 = _UNK_1806b3fd2;
      uStack_7c = _UNK_1806b3fd6;
      uStack_7a = (uint8_t)_DAT_1806b3fd8;
      uStack_79 = (uint8_t)((ushort)_DAT_1806b3fd8 >> 8);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3478) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x3478) = 1;
        func_0x18008fa60(lVal_7 + 0x3459,&local_88);
        func_0x180673140(&LAB_1800f0a90);
      }
      fnPtr_2 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3459)
      ;
      func_0x1800f3020(fnPtr_2);
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen(fnPtr_2);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,fnPtr_2,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef48 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef50 == 0) {
      local_88 = _DAT_1806b3fe8;
      uStack_84 = _UNK_1806b3fec;
      uStack_80 = _UNK_1806b3ff0;
      uStack_7c = (uint16_t)_UNK_1806b3ff4;
      uStack_7a = (uint8_t)((uint)_UNK_1806b3ff4 >> 0x10);
      uStack_79 = (uint8_t)((uint)_UNK_1806b3ff4 >> 0x18);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x348c) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x348c) = 1;
        func_0x18007d150(lVal_7 + 0x3479,&local_88);
        func_0x180673140(&LAB_1800f0ac0);
      }
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint8_t (*)[16])(lVal_7 + 0x3479);
      if (*(char *)(lVal_7 + 0x3489) == '\x01') {
        auArr_3._4_4_ = *(uint *)(lVal_7 + 0x347d) ^ _UNK_1806b2854;
        auArr_3._0_4_ = *(uint *)*_Str ^ _DAT_1806b2850;
        auArr_3._8_4_ = *(uint *)(lVal_7 + 0x3481) ^ _UNK_1806b2858;
        auArr_3._12_4_ = *(uint *)(lVal_7 + 0x3485) ^ _UNK_1806b285c;
        *_Str = auArr_3;
        *(uint8_t *)(lVal_7 + 0x3489) = 0;
      }
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen((char *)_Str);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,_Str,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef50 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef58 == 0) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x34a0) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x34a0) = 1;
        *(uint64_t *)(lVal_7 + 0x3490) = 0x38dee68b7024a61a;
        *(uint32_t *)(lVal_7 + 0x3498) = 0x6112ae07;
        *(uint16_t *)(lVal_7 + 0x349c) = 0x1f9;
        func_0x180673140(&LAB_1800f0ae0);
      }
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_7 + 0x3490);
      if (*(char *)(lVal_7 + 0x349d) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x4bad89f9137bcf6f;
        *(uint *)(lVal_7 + 0x3498) = *(uint *)(lVal_7 + 0x3498) ^ 0x137bcf6f;
        *(byte *)(lVal_7 + 0x349c) = *(byte *)(lVal_7 + 0x349c) ^ 0xf9;
        *(uint8_t *)(lVal_7 + 0x349d) = 0;
      }
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen((char *)pU64_1);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,pU64_1,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef58 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef60 == 0) {
      local_88 = _DAT_1806b3ff8;
      uStack_84 = _UNK_1806b3ffc;
      uStack_80 = _UNK_1806b4000;
      uStack_7c = (uint16_t)_UNK_1806b4004;
      uStack_7a = 0xd2;
      uStack_79 = 0xe5;
      uStack_78 = 0x2286;
      uStack_76 = 0xb9855cf3;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x34b8) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x34b8) = 1;
        func_0x18007cab0(lVal_7 + 0x34a1,&local_88);
        func_0x180673140(&LAB_1800f0b10);
      }
      fnPtr_2 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x34a1)
      ;
      func_0x1800f3060(fnPtr_2);
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen(fnPtr_2);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,fnPtr_2,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef60 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef68 == 0) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x34cc) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x34cc) = 1;
        *(uint8_t *)(lVal_7 + 0x34ca) = 1;
        *(uint64_t *)(lVal_7 + 0x34c0) = 0x4b7e2b648742187a;
        *(uint16_t *)(lVal_7 + 0x34c8) = 0x717d;
        func_0x180673140(&LAB_1800f0b40);
      }
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_7 + 0x34c0);
      if (*(char *)(lVal_7 + 0x34ca) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x331b5f3be9257109;
        *(byte *)(lVal_7 + 0x34c8) = *(byte *)(lVal_7 + 0x34c8) ^ 9;
        *(byte *)(lVal_7 + 0x34c9) = *(byte *)(lVal_7 + 0x34c9) ^ 0x71;
        *(uint8_t *)(lVal_7 + 0x34ca) = 0;
      }
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen((char *)pU64_1);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,pU64_1,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef68 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef70 == 0) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x34dc) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x34dc) = 1;
        *(uint8_t *)(lVal_7 + 0x34d8) = 1;
        *(uint64_t *)(lVal_7 + 0x34d0) = 0x6787c828166f1e04;
        func_0x180673140(&LAB_1800f0b70);
      }
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_7 + 0x34d0);
      if (*(char *)(lVal_7 + 0x34d8) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x67f7a945730d6b67;
        *(uint8_t *)(lVal_7 + 0x34d8) = 0;
      }
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen((char *)pU64_1);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,pU64_1,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef70 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef78 == 0) {
      local_88 = _DAT_1806b400e;
      uStack_84 = _UNK_1806b4012;
      uStack_80 = _UNK_1806b4016;
      uStack_7c = (uint16_t)_UNK_1806b401a;
      uStack_7a = (uint8_t)((uint)_UNK_1806b401a >> 0x10);
      uStack_79 = 0x9a;
      uStack_78 = 0xa8f3;
      uStack_76 = 0x1954c5ac;
      uStack_72 = 0x9f;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x34f8) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x34f8) = 1;
        func_0x18007d3c0(lVal_7 + 0x34dd,&local_88);
        func_0x180673140(&LAB_1800f0b90);
      }
      fnPtr_2 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x34dd)
      ;
      func_0x1800f3090(fnPtr_2);
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen(fnPtr_2);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,fnPtr_2,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef78 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef80 == 0) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x350c) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x350c) = 1;
        *(uint64_t *)(lVal_7 + 0x3500) = 0x600883b48e34babd;
        *(uint16_t *)(lVal_7 + 0x3508) = 0x1d3;
        func_0x180673140(&LAB_1800f0bc0);
      }
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_7 + 0x3500);
      if (*(char *)(lVal_7 + 0x3509) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0x769f7ebeb59dbd3;
        *(byte *)(lVal_7 + 0x3508) = *(byte *)(lVal_7 + 0x3508) ^ 0xd3;
        *(uint8_t *)(lVal_7 + 0x3509) = 0;
      }
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen((char *)pU64_1);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,pU64_1,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef80 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef88 == 0) {
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x3520) == '\0') {
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_7 + 0x3520) = 1;
        *(uint8_t *)(lVal_7 + 0x351e) = 1;
        *(uint64_t *)(lVal_7 + 0x3510) = 0xb4e4a118768cba9d;
        *(uint32_t *)(lVal_7 + 0x3518) = 0x6b84afac;
        *(uint16_t *)(lVal_7 + 0x351c) = 0xd533;
        func_0x180673140(&LAB_1800f0bf0);
      }
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_7 + 0x3510);
      if (*(char *)(lVal_7 + 0x351e) == '\x01') {
        *pU64_1 = *pU64_1 ^ 0xd385d54713e1dbf3;
        *(uint *)(lVal_7 + 0x3518) = *(uint *)(lVal_7 + 0x3518) ^ 0x13e1dbf3;
        *(byte *)(lVal_7 + 0x351c) = *(byte *)(lVal_7 + 0x351c) ^ 0x47;
        *(byte *)(lVal_7 + 0x351d) = *(byte *)(lVal_7 + 0x351d) ^ 0xd5;
        *(uint8_t *)(lVal_7 + 0x351e) = 0;
      }
      local_48._0_16_ = ZEXT816(0);
      local_58 = ZEXT816(0);
      sz_5 = strlen((char *)pU64_1);
      if ((int64_t)sz_5 < 0) goto LAB_1800cf35b;
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,pU64_1,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef88 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_9 = local_48._8_8_ + 1;
        lVal_7 = local_58._0_8_;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
    }
    if (DAT_18083ef90 != 0) {
      return;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x3534) == '\0') {
      lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_7 + 0x3534) = 1;
      *(uint8_t *)(lVal_7 + 0x3530) = 1;
      *(uint64_t *)(lVal_7 + 0x3528) = 0x5b9df138a16e5c1e;
      func_0x180673140(&LAB_1800f0c20);
    }
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_7 + 0x3528);
    if (*(char *)(lVal_7 + 0x3530) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x5be9895dd531356b;
      *(uint8_t *)(lVal_7 + 0x3530) = 0;
    }
    local_58 = ZEXT816(0);
    sz_5 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_5) {
      if (sz_5 < 0x10) {
        pU64_8 = local_58;
        uVal_9 = 0xf;
      }
      else {
        uVal_6 = sz_5 | 0xf;
        uVal_9 = 0x16;
        if (0x16 < uVal_6) {
          uVal_9 = uVal_6;
        }
        if (uVal_6 < 0xfff) {
          pU64_8 = (uint8_t *)func_0x180672de0(uVal_9 + 1);
        }
        else {
          lVal_7 = func_0x180672de0(uVal_9 + 0x28);
          pU64_8 = (uint8_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_8 + -8) = lVal_7;
        }
        local_58._0_8_ = pU64_8;
      }
      local_48._8_8_ = uVal_9;
      local_48._0_8_ = sz_5;
      func_0x1806aa960(pU64_8,pU64_1,sz_5);
      pU64_8[sz_5] = 0;
      func_0x180034bf0(&local_88,local_58);
      DAT_18083ef90 = func_0x1800fe8d0(&local_88);
      if (0xf < local_68) {
        lVal_4 = CONCAT17(uStack_79,CONCAT16(uStack_7a,CONCAT24(uStack_7c,uStack_80)));
        uVal_9 = local_68 + 1;
        lVal_7 = lVal_4;
        if (0xfff < uVal_9) {
          lVal_7 = *(int64_t *)(lVal_4 + -8);
          if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) goto LAB_1800cf360;
          uVal_9 = local_68 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_7,uVal_9);
      }
      local_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      local_68 = 0xf;
      uStack_80 = uStack_80 & 0xffffff00;
      if ((uint64_t)local_48._8_8_ < 0x10) {
        return;
      }
      uVal_9 = local_48._8_8_ + 1;
      lVal_7 = local_58._0_8_;
      if (uVal_9 < 0x1000) {
LAB_1800cef2a:
        thunk_FUN_180695dd0(lVal_7,uVal_9);
        return;
      }
      lVal_7 = *(int64_t *)(local_58._0_8_ + -8);
      if ((uint64_t)((local_58._0_8_ + -8) - lVal_7) < 0x20) {
        uVal_9 = local_48._8_8_ + 0x28;
        goto LAB_1800cef2a;
      }
      goto LAB_1800cf360;
    }
  }
LAB_1800cf35b:
  func_0x18007ba70();
LAB_1800cf360:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800cf370
void Unwind_1800cf370(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf3b0
void Unwind_1800cf3b0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf3f0
void Unwind_1800cf3f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x342c) = 0;
  return;
}

// Unwind@1800cf430
void Unwind_1800cf430(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf470
void Unwind_1800cf470(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3440) = 0;
  return;
}

// Unwind@1800cf4b0
void Unwind_1800cf4b0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf4f0
void Unwind_1800cf4f0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf530
void Unwind_1800cf530(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3478) = 0;
  return;
}

// Unwind@1800cf570
void Unwind_1800cf570(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf5b0
void Unwind_1800cf5b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x348c) = 0;
  return;
}

// Unwind@1800cf5f0
void Unwind_1800cf5f0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf630
void Unwind_1800cf630(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf670
void Unwind_1800cf670(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x34b8) = 0;
  return;
}

// Unwind@1800cf6b0
void Unwind_1800cf6b0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf6f0
void Unwind_1800cf6f0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf730
void Unwind_1800cf730(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf770
void Unwind_1800cf770(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x34f8) = 0;
  return;
}

// Unwind@1800cf7b0
void Unwind_1800cf7b0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf7f0
void Unwind_1800cf7f0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf830
void Unwind_1800cf830(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800cf870
void Unwind_1800cf870(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x50);
  return;
}

// func_0x1800cf8b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800cf8b0(uint64_t param_1)
{
  uint64_t *pU64_1;
  
  DAT_18083ee68 = param_1;
  if (*(int64_t *)(DAT_180840a58 + 0x1b8) != 0) {
    pU64_1 = (uint64_t *)func_0x18011a7e0();
    DAT_18083ef08 = *pU64_1;
    _DAT_18083ef10 = *(uint32_t *)(pU64_1 + 1);
  }
  return;
}

// func_0x1800cf900
void func_0x1800cf900(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)
{
  uint32_t *pU64_1;
  
  if (DAT_18083ee78 != (uint32_t *)0x0) {
    *DAT_18083ee78 = param_1;
    DAT_18083ee78[1] = param_2;
    pU64_1 = DAT_18083ee78;
    DAT_18083ee78[2] = param_3;
    pU64_1[3] = param_4;
    *(uint8_t *)(pU64_1 + 4) = 1;
  }
  return;
}

// func_0x1800cf940
void func_0x1800cf940(uint32_t param_1)
{
  func_0x18011bc80(DAT_180840a50,param_1);
  return;
}

// func_0x1800cf950
uint64_t func_0x1800cf950(void)
{
  return DAT_18083ee70;
}

// func_0x1800cf960
uint64_t func_0x1800cf960(void)
{
  return DAT_18083ee68;
}

// func_0x1800cf970
uint64_t func_0x1800cf970(void)
{
  return DAT_18083ef20;
}

// func_0x1800cf980
uint64_t func_0x1800cf980(void)
{
  return DAT_18083ef28;
}

// func_0x1800cf990
uint64_t func_0x1800cf990(void)
{
  return DAT_18083ef30;
}

// func_0x1800cf9a0
uint64_t func_0x1800cf9a0(void)
{
  return DAT_18083ef58;
}

// func_0x1800cf9b0
uint64_t func_0x1800cf9b0(void)
{
  return DAT_18083ef60;
}

// func_0x1800cf9c0
uint64_t func_0x1800cf9c0(void)
{
  return DAT_18083ef68;
}

// func_0x1800cf9d0
uint64_t func_0x1800cf9d0(void)
{
  return DAT_18083ef80;
}

// func_0x1800cf9e0
uint64_t func_0x1800cf9e0(void)
{
  return DAT_18083ef88;
}

// func_0x1800cf9f0
uint64_t func_0x1800cf9f0(void)
{
  return DAT_18083ef90;
}

// func_0x1800cfa00
float func_0x1800cfa00(float param_1)
{
  uint64_t uVal_1;
  float fVal_2;
  
  uVal_1 = func_0x18011bc80(DAT_180840a50);
  fVal_2 = (float)func_0x18012ab70(uVal_1);
  return fVal_2 * param_1;
}

// func_0x1800cfa30
void func_0x1800cfa30(void)
{
  func_0x18010c5e0(DAT_18083ee58);
  return;
}

// func_0x1800cfa40
uint * func_0x1800cfa40(uint *param_1,uint64_t *param_2)
{
  uint64_t *_Str;
  uint **ptr2_U64_1;
  uint *pU64_2;
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  uint uVal_8;
  uint uVal_9;
  int64_t lVal_10;
  size_t sz_11;
  uint **ptr2_U64_12;
  uint *pU64_13;
  uint8_t *pU64_14;
  uint *pU64_15;
  uint64_t uVal_16;
  int64_t lVal_17;
  uint **ptr2_U64_18;
  uint *pU64_19;
  uint64_t uVal_20;
  uint **ptr2_U64_21;
  uint local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint *local_78;
  uint *puStack_70;
  uint8_t local_68 [16];
  size_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x356c) == '\0') {
    lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_17 + 0x356c) = 1;
    *(uint8_t *)(lVal_17 + 0x3568) = 1;
    *(uint64_t *)(lVal_17 + 0x3560) = 0xcb0d96225e405e18;
    func_0x180673140(&LAB_1800f0f80);
  }
  lVal_17 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_17 + 0x3560);
  if (*(char *)(lVal_17 + 0x3568) == '\x01') {
    *_Str = *_Str ^ 0xcb51e54739213351;
    *(uint8_t *)(lVal_17 + 0x3568) = 0;
  }
  local_68 = ZEXT816(0);
  sz_11 = strlen((char *)_Str);
  if ((int64_t)sz_11 < 0) {
    func_0x18007ba70();
LAB_1800cfdb6:
    do {
      invalidInstructionException();
    } while( true );
  }
  if (sz_11 < 0x10) {
    pU64_14 = local_68;
    uVal_20 = 0xf;
  }
  else {
    uVal_16 = sz_11 | 0xf;
    uVal_20 = 0x16;
    if (0x16 < uVal_16) {
      uVal_20 = uVal_16;
    }
    if (uVal_16 < 0xfff) {
      pU64_14 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
    }
    else {
      lVal_17 = func_0x180672de0(uVal_20 + 0x28);
      pU64_14 = (uint8_t *)(lVal_17 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_14 + -8) = lVal_17;
    }
    local_68._0_8_ = pU64_14;
  }
  local_58 = sz_11;
  uStack_50 = uVal_20;
  func_0x1806aa960(pU64_14,_Str,sz_11);
  pU64_14[sz_11] = 0;
  func_0x1800becb0();
  uVal_20 = DAT_18083ec70;
  ptr2_U64_21 = DAT_18083ec60;
  if (DAT_18083ec78 < 0x10) {
    ptr2_U64_21 = (uint **)&DAT_18083ec60;
  }
  if (uStack_50 - local_58 < DAT_18083ec70) {
    ptr2_U64_12 = (uint **)func_0x1800871a0(local_68,DAT_18083ec70,local_58,0,ptr2_U64_21,DAT_18083ec70);
  }
  else {
    ptr2_U64_12 = (uint **)local_68;
    ptr2_U64_18 = (uint **)local_68._0_8_;
    if (uStack_50 < 0x10) {
      ptr2_U64_18 = ptr2_U64_12;
    }
    ptr2_U64_1 = (uint **)((int64_t)ptr2_U64_21 + DAT_18083ec70);
    uVal_16 = DAT_18083ec70;
    if ((ptr2_U64_21 <= (uint **)((int64_t)ptr2_U64_18 + local_58) && ptr2_U64_18 < ptr2_U64_1) &&
       (uVal_16 = (int64_t)ptr2_U64_18 - (int64_t)ptr2_U64_21, ptr2_U64_18 < ptr2_U64_21 || uVal_16 == 0)) {
      uVal_16 = 0;
    }
    lVal_17 = local_58 + 1;
    local_58 = local_58 + DAT_18083ec70;
    func_0x1806aa960((uint8_t *)((int64_t)ptr2_U64_18 + DAT_18083ec70),ptr2_U64_18,lVal_17);
    func_0x1806aa960(ptr2_U64_18,ptr2_U64_21,uVal_16);
    func_0x1806aa960((uint8_t *)((int64_t)ptr2_U64_18 + uVal_16),
                  (uint8_t *)((int64_t)ptr2_U64_1 + uVal_16),uVal_20 - uVal_16);
  }
  local_88 = *(uint *)ptr2_U64_12;
  uStack_84 = *(uint32_t *)((int64_t)ptr2_U64_12 + 4);
  pU64_15 = *ptr2_U64_12;
  uStack_80 = *(uint32_t *)(ptr2_U64_12 + 1);
  uStack_7c = *(uint32_t *)((int64_t)ptr2_U64_12 + 0xc);
  local_78 = ptr2_U64_12[2];
  puStack_70 = ptr2_U64_12[3];
  ptr2_U64_12[2] = (uint *)0x0;
  ptr2_U64_12[3] = (uint *)0xf;
  *(uint8_t *)ptr2_U64_12 = 0;
  uVal_20 = param_2[2];
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  if ((uint64_t)((int64_t)puStack_70 - (int64_t)local_78) < uVal_20) {
    pU64_13 = (uint *)func_0x180082950(&local_88,uVal_20,uVal_20,param_2,uVal_20);
  }
  else {
    pU64_2 = (uint *)((int64_t)local_78 + uVal_20);
    pU64_13 = &local_88;
    pU64_19 = pU64_13;
    if ((uint *)0xf < puStack_70) {
      pU64_19 = pU64_15;
    }
    pU64_14 = (uint8_t *)((int64_t)local_78 + (int64_t)pU64_19);
    local_78 = pU64_2;
    func_0x1806aa960(pU64_14,param_2);
    *(uint8_t *)((int64_t)pU64_19 + (int64_t)pU64_2) = 0;
  }
  uVal_3 = *pU64_13;
  uVal_4 = pU64_13[1];
  uVal_5 = pU64_13[2];
  uVal_6 = pU64_13[3];
  uVal_7 = pU64_13[5];
  uVal_8 = pU64_13[6];
  uVal_9 = pU64_13[7];
  param_1[4] = pU64_13[4];
  param_1[5] = uVal_7;
  param_1[6] = uVal_8;
  param_1[7] = uVal_9;
  *param_1 = uVal_3;
  param_1[1] = uVal_4;
  param_1[2] = uVal_5;
  param_1[3] = uVal_6;
  *(uint64_t *)(pU64_13 + 4) = 0;
  *(uint64_t *)(pU64_13 + 6) = 0xf;
  *(uint8_t *)pU64_13 = 0;
  if ((uint *)0xf < puStack_70) {
    lVal_10 = CONCAT44(uStack_84,local_88);
    pU64_15 = (uint *)((int64_t)puStack_70 + 1);
    lVal_17 = lVal_10;
    if ((uint *)0xfff < pU64_15) {
      lVal_17 = *(int64_t *)(lVal_10 + -8);
      if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_17)) goto LAB_1800cfdb6;
      pU64_15 = puStack_70 + 10;
    }
    thunk_FUN_180695dd0(lVal_17,pU64_15);
  }
  local_78 = (uint *)0x0;
  puStack_70 = (uint *)0xf;
  local_88 = local_88 & 0xffffff00;
  if (0xf < uStack_50) {
    uVal_20 = uStack_50 + 1;
    pU64_15 = (uint *)local_68._0_8_;
    if (0xfff < uVal_20) {
      pU64_15 = *(uint **)(local_68._0_8_ + -8);
      if (0x1f < (uint64_t)(local_68._0_8_ + (-8 - (int64_t)pU64_15))) goto LAB_1800cfdb6;
      uVal_20 = uStack_50 + 0x28;
    }
    thunk_FUN_180695dd0(pU64_15,uVal_20);
  }
  return param_1;
}

// Unwind@1800cfdc0
void Unwind_1800cfdc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800cfe00
void Unwind_1800cfe00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x1800cfe40
void func_0x1800cfe40(uint32_t *param_1,uint32_t *param_2,uint32_t *param_3,uint64_t param_4)
{
  func_0x180108220(DAT_18083ee70,param_4);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_2,param_2[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_3,param_3[1],0);
  return;
}

// func_0x1800cfeb0
void func_0x1800cfeb0(uint32_t *param_1,uint32_t *param_2,uint32_t *param_3,uint32_t *param_4)
{
  func_0x180107830(DAT_18083ee70,1,0,0);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_2,param_2[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_3,param_3[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_4,param_4[1],0);
  func_0x18011b260(DAT_18083ee68,DAT_18083ee70,DAT_18083ef20);
  return;
}

// func_0x1800cff60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800cff60(float *param_1,float *param_2,float param_3)
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  
  fVal_1 = param_1[1] - param_2[1];
  fVal_3 = *param_1 - *param_2;
  fVal_2 = SQRT(fVal_1 * fVal_1 + fVal_3 * fVal_3);
  fVal_1 = ((float)(_DAT_1806af1a0 ^ (uint)fVal_1) / fVal_2) * param_3;
  param_3 = (fVal_3 / fVal_2) * param_3;
  func_0x180107cc0(DAT_18083ee70,*param_1 + fVal_1,param_1[1] + param_3,0);
  func_0x180107cc0(DAT_18083ee70,*param_1 - fVal_1,param_1[1] - param_3,0);
  func_0x180107cc0(DAT_18083ee70,*param_2 - fVal_1,param_2[1] - param_3,0);
  func_0x180107cc0(DAT_18083ee70,*param_1 + fVal_1,param_1[1] + param_3,0);
  func_0x180107cc0(DAT_18083ee70,*param_2 + fVal_1,param_2[1] + param_3,0);
  func_0x180107cc0(DAT_18083ee70,*param_2 - fVal_1,param_2[1] - param_3,0);
  return;
}

// func_0x1800d0090
void func_0x1800d0090(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4)
{
  func_0x180108220(DAT_18083ee70,param_4);
  func_0x1800cff60(param_1,param_2,param_3);
  func_0x1800cff60(param_2,param_1,param_3);
  return;
}

// func_0x1800d00e0
void func_0x1800d00e0(uint32_t *param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,byte param_7)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint32_t uVal_3;
  uint uVal_4;
  uint8_t auStack_e8 [32];
  uint64_t local_c8;
  uint32_t local_c0;
  uint32_t local_b8;
  uint32_t *local_b0;
  uint8_t *local_a8;
  uint32_t local_9c;
  int64_t local_98;
  uint8_t *local_90;
  uint32_t local_88;
  uint32_t local_84;
  uint64_t local_80;
  
  local_80 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  uVal_2 = func_0x18011bc80(DAT_180840a50,param_6);
  local_90 = &DAT_28d0f803f34a0611;
  uVal_3 = func_0x180116d40(*(uint64_t *)(DAT_180840a58 + 0x648),(float)param_1[1] + DAT_1806ae7b0);
  local_90 = &DAT_28d0f803f34a0611;
  uVal_4 = func_0x180116d40(*(uint64_t *)(DAT_180840a58 + 0x648),*param_1);
  local_90 = (uint8_t *)(uint64_t)uVal_4;
  local_84 = 0;
  local_98 = (uint64_t)param_7 << 0x20;
  local_a8 = &DAT_18083ef98;
  local_b0 = &local_9c;
  local_c0 = param_5;
  local_b8 = 0;
  local_c8 = param_3;
  local_9c = param_4;
  local_88 = uVal_3;
  func_0x18010c400(DAT_18083ee58,uVal_2,&local_90,param_2);
  if (DAT_18083cf40 == (local_80 ^ (uint64_t)auStack_e8)) {
    return;
  }
  func_0x180673080(local_80 ^ (uint64_t)auStack_e8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800d02c0
void func_0x1800d02c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint8_t param_7,uint8_t param_8, uint8_t param_9)
{
  uint64_t uVal_1;
  
  uVal_1 = func_0x18011bc80(DAT_180840a50,param_6);
  func_0x1800d0360(uVal_1,param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9);
  return;
}

// func_0x1800d0360
void func_0x1800d0360(uint64_t param_1,float *param_2,uint64_t *param_3,uint64_t param_4, float param_5,uint32_t param_6,byte param_7,char param_8,char param_9)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  float fVal_3;
  uint uVal_4;
  uint uVal_5;
  float fVal_6;
  float fVal_7;
  uint8_t auStack_f8 [32];
  uint64_t local_d8;
  uint32_t local_d0;
  uint32_t local_c8;
  float *local_c0;
  uint8_t *local_b8;
  float local_ac;
  int64_t local_a8;
  uint64_t *local_a0;
  uint64_t local_98;
  uint64_t local_90;
  
  local_90 = DAT_18083cf40 ^ (uint64_t)auStack_f8;
  fVal_6 = *param_2;
  fVal_7 = param_2[1];
  if (param_8 != '\0') {
    local_98 = param_3[2];
    local_a0 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      local_a0 = (uint64_t *)*param_3;
    }
    iVal_2 = func_0x18012ab00(param_1,&local_a0,param_5,0);
    fVal_6 = fVal_6 + (float)iVal_2 * DAT_1806b2860;
  }
  if (param_9 != '\0') {
    fVal_3 = (float)func_0x18012ab70(param_1);
    fVal_7 = fVal_7 + fVal_3 * param_5 * DAT_1806b2860;
  }
  local_a0 = (uint64_t *)&DAT_28d0f803f34a0611;
  uVal_4 = func_0x180116d40(*(uint64_t *)(DAT_180840a58 + 0x648),fVal_7 + DAT_1806ae7b0);
  local_a0 = (uint64_t *)&DAT_28d0f803f34a0611;
  uVal_5 = func_0x180116d40(*(uint64_t *)(DAT_180840a58 + 0x648),fVal_6);
  local_a0 = (uint64_t *)(uint64_t)uVal_5;
  local_98 = (uint64_t)uVal_4;
  local_ac = param_5;
  local_a8 = (uint64_t)param_7 << 0x20;
  local_b8 = &DAT_18083ef98;
  local_c0 = &local_ac;
  local_d0 = param_6;
  local_c8 = 0;
  local_d8 = param_4;
  func_0x18010c400(DAT_18083ee58,param_1,&local_a0,param_3);
  if (DAT_18083cf40 == (local_90 ^ (uint64_t)auStack_f8)) {
    return;
  }
  func_0x180673080(local_90 ^ (uint64_t)auStack_f8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800d05c0
void func_0x1800d05c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint8_t param_8, uint8_t param_9,uint8_t param_10)
{
  uint64_t uVal_1;
  
  uVal_1 = func_0x18011bc80(DAT_180840a50,param_7);
  func_0x1800d0680(uVal_1,param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_10);
  return;
}

// func_0x1800d0680
void func_0x1800d0680(uint64_t param_1,float *param_2,uint64_t *param_3,uint64_t param_4, float param_5,float param_6,uint32_t param_7,byte param_8,char param_9, char param_10)
{
  func_ptr_t fnPtr_1;
  int iVal_2;
  uint uVal_3;
  uint uVal_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  uint8_t auStack_f8 [32];
  uint64_t local_d8;
  uint32_t local_d0;
  uint32_t local_c8;
  float *local_c0;
  uint8_t *local_b8;
  float local_ac;
  int64_t local_a8;
  uint64_t *local_a0;
  uint64_t local_98;
  uint64_t local_90;
  
  local_90 = DAT_18083cf40 ^ (uint64_t)auStack_f8;
  local_98 = param_3[2];
  local_a0 = param_3;
  if (0xf < (uint64_t)param_3[3]) {
    local_a0 = (uint64_t *)*param_3;
  }
  fVal_5 = *param_2;
  fVal_6 = param_2[1];
  iVal_2 = func_0x18012ab00(param_1,&local_a0,param_6,0);
  fVal_7 = (param_5 / (float)iVal_2) * param_6;
  if (fVal_7 <= param_6) {
    param_6 = fVal_7;
  }
  if (param_9 != '\0') {
    local_98 = param_3[2];
    local_a0 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      local_a0 = (uint64_t *)*param_3;
    }
    iVal_2 = func_0x18012ab00(param_1,&local_a0,param_6,0);
    fVal_5 = fVal_5 + (float)iVal_2 * DAT_1806b2860;
  }
  if (param_10 != '\0') {
    fVal_7 = (float)func_0x18012ab70(param_1);
    fVal_6 = fVal_6 + fVal_7 * param_6 * DAT_1806b2860;
  }
  local_a0 = (uint64_t *)&DAT_28d0f803f34a0611;
  uVal_3 = func_0x180116d40(*(uint64_t *)(DAT_180840a58 + 0x648),fVal_6 + DAT_1806ae7b0);
  local_a0 = (uint64_t *)&DAT_28d0f803f34a0611;
  uVal_4 = func_0x180116d40(*(uint64_t *)(DAT_180840a58 + 0x648),fVal_5);
  local_a0 = (uint64_t *)(uint64_t)uVal_4;
  local_98 = (uint64_t)uVal_3;
  local_a8 = (uint64_t)param_8 << 0x20;
  local_b8 = &DAT_18083ef98;
  local_c0 = &local_ac;
  local_d0 = param_7;
  local_c8 = 0;
  local_d8 = param_4;
  local_ac = param_6;
  func_0x18010c400(DAT_18083ee58,param_1,&local_a0,param_3);
  if (DAT_18083cf40 == (local_90 ^ (uint64_t)auStack_f8)) {
    return;
  }
  func_0x180673080(local_90 ^ (uint64_t)auStack_f8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800d0930
void func_0x1800d0930(char **param_1,float *param_2,float *param_3,float *param_4,float *param_5, char param_6,uint64_t param_7,uint32_t param_8)
{
  int64_t *pLong_1;
  int *pInt_2;
  char *fnPtr_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint32_t uVal_7;
  uint in_stack_ffffffffffffff50;
  uint64_t local_a0;
  int64_t *local_98;
  int64_t *local_88;
  int64_t local_80;
  int64_t *local_78;
  uint32_t local_70 [2];
  uint8_t local_68 [16];
  char *local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (DAT_18083ee70 == 0) {
    return;
  }
  fnPtr_3 = param_1[2];
  if (&DAT_0000000f < param_1[3]) {
    param_1 = (char **)*param_1;
  }
  local_68 = ZEXT816(0);
  local_58 = (char *)0x0;
  local_50 = 0xf;
  if (fnPtr_3 < (char *)0x10) {
    local_58 = fnPtr_3;
    func_0x1806aa960(local_68,param_1);
    local_68[(int64_t)fnPtr_3] = 0;
  }
  else {
    func_0x18007bba0(local_68,fnPtr_3,param_3,param_1);
  }
  if (param_6 != '\0') {
    local_70[0] = 2;
  }
  if (fnPtr_3 == (char *)0x0) {
    local_48 = 0;
  }
  else {
    uVal_4 = (uint64_t)((uint)fnPtr_3 & 7);
    if (&DAT_00000007 < fnPtr_3) {
      uVal_6 = (uint64_t)fnPtr_3 & 0xfffffffffffffff8;
      local_48 = 0xcbf29ce484222325;
      do {
        local_48 = (((((((local_48 * 0x100000001b3 ^ (int64_t)*(char *)param_1) * 0x100000001b3 ^
                        (int64_t)*(char *)((int64_t)param_1 + 1)) * 0x100000001b3 ^
                       (int64_t)*(char *)((int64_t)param_1 + 2)) * 0x100000001b3 ^
                      (int64_t)*(char *)((int64_t)param_1 + 3)) * 0x100000001b3 ^
                     (int64_t)*(char *)((int64_t)param_1 + 4)) * 0x100000001b3 ^
                    (int64_t)*(char *)((int64_t)param_1 + 5)) * 0x100000001b3 ^
                   (int64_t)*(char *)((int64_t)param_1 + 6)) * 0x100000001b3 ^
                   (int64_t)*(char *)((int64_t)param_1 + 7);
        param_1 = param_1 + 1;
        uVal_6 = uVal_6 - 8;
      } while (uVal_6 != 0);
      if (uVal_4 == 0) goto LAB_1800d0ab4;
    }
    else {
      local_48 = 0xcbf29ce484222325;
    }
    uVal_6 = 0;
    do {
      local_48 = local_48 * 0x100000001b3 ^ (int64_t)*(char *)((int64_t)param_1 + uVal_6);
      uVal_6 = uVal_6 + 1;
    } while (uVal_4 != uVal_6);
  }
LAB_1800d0ab4:
  local_40 = ((uint64_t)(byte)local_70[0] ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_48;
  func_0x18011b920(DAT_180840a50,&local_80);
  uVal_7 = 0;
  func_0x180101570(local_80 + 0x18,&local_a0,local_70,0,0,in_stack_ffffffffffffff50 & 0xffffff00);
  if (local_78 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_78 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_78)(local_78);
      LOCK();
      pInt_2 = (int *)((int64_t)local_78 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_78 + 8))(local_78);
      }
    }
  }
  func_0x180107830(DAT_18083ee70,1,0,0);
  func_0x1801082b0(DAT_18083ee70,param_7,param_8);
  func_0x180107e20(DAT_18083ee70,*param_2,param_2[1],0,CONCAT44(uVal_7,*param_4),param_4[1]);
  func_0x180107e20(DAT_18083ee70,*param_2,param_2[1] + param_3[1],0,*param_4,param_4[1] + param_5[1]);
  func_0x180107e20(DAT_18083ee70,*param_2 + *param_3,param_2[1] + param_3[1],0,*param_4 + *param_5,
                param_4[1] + param_5[1]);
  func_0x180107e20(DAT_18083ee70,*param_2 + *param_3,param_2[1],0,*param_4 + *param_5,param_4[1]);
  func_0x18011b3c0(DAT_18083ee68,DAT_18083ee70,DAT_18083ef28,local_a0);
  if (local_88 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_88 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_88)(local_88);
      LOCK();
      pInt_2 = (int *)((int64_t)local_88 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_88 + 8))(local_88);
      }
    }
  }
  if (local_98 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_98 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_98)(local_98);
      LOCK();
      pInt_2 = (int *)((int64_t)local_98 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_98 + 8))(local_98);
      }
    }
  }
  if (0xf < local_50) {
    uVal_4 = local_50 + 1;
    lVal_5 = local_68._0_8_;
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(local_68._0_8_ + -8);
      if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_5)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_4 = local_50 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_4);
  }
  return;
}

// Unwind@1800d0d10
void Unwind_1800d0d10(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x58);
  return;
}

// Unwind@1800d0d40
void Unwind_1800d0d40(uint64_t param_1,int64_t param_2)
{
  func_0x1800d0dd0(param_2 + 0x38);
  return;
}

// Unwind@1800d0d70
void Unwind_1800d0d70(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x68);
  return;
}

// Unwind@1800d0da0
void Unwind_1800d0da0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// func_0x1800d0dd0
void func_0x1800d0dd0(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  
  pLong_3 = *(int64_t **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001800d0e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
        return;
      }
    }
  }
  return;
}

// func_0x1800d0e40
void func_0x1800d0e40(float *param_1,float *param_2,float *param_3,float *param_4)
{
  if (DAT_18083ee70 != 0) {
    func_0x180107e20(DAT_18083ee70,*param_1,param_1[1],0,*param_3,param_3[1]);
    func_0x180107e20(DAT_18083ee70,*param_1,param_1[1] + param_2[1],0,*param_3,param_3[1] + param_4[1])
    ;
    func_0x180107e20(DAT_18083ee70,*param_1 + *param_2,param_1[1] + param_2[1],0,*param_3 + *param_4,
                  param_3[1] + param_4[1]);
    func_0x180107e20(DAT_18083ee70,*param_1 + *param_2,param_1[1],0,*param_3 + *param_4,param_3[1]);
  }
  return;
}

// func_0x1800d0f50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800d0f50(int64_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4, char param_5)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint64_t *pU64_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  int64_t *pLong_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int iVal_10;
  size_t sz_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint64_t uVal_15;
  uint64_t uVal_16;
  uint64_t ******ptr6_U64_17;
  uint8_t *pU64_18;
  char *fnPtr_19;
  void *_Buf1;
  bool bFlag_20;
  uint8_t local_5e0 [56];
  uint8_t local_5a8 [32];
  uint64_t local_588;
  uint8_t local_1d8 [8];
  uint64_t uStack_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint32_t local_1b8;
  unkbyte10 Stack_1b4;
  uint16_t uStack_1aa;
  undefined6 uStack_1a8;
  uint8_t local_1a0 [8];
  uint64_t ******ppppppuStack_198;
  uint8_t local_190 [16];
  uint8_t local_180 [16];
  uint64_t local_170;
  uint8_t local_168 [16];
  uint8_t local_158 [16];
  uint8_t local_148 [16];
  uint64_t local_138;
  uint8_t local_130;
  uint16_t local_128;
  uint8_t local_124 [16];
  uint8_t local_114 [16];
  uint8_t local_104 [16];
  uint8_t local_f4 [12];
  uint32_t uStack_e8;
  uint8_t auStack_e4 [12];
  int64_t local_d8;
  uint64_t local_d0;
  uint8_t local_c8 [16];
  uint8_t local_b8 [16];
  uint32_t local_a8;
  uint8_t local_a0 [8];
  uint64_t uStack_98;
  uint8_t local_90 [16];
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  
  uVal_9 = DAT_180840a58;
  uVal_8 = DAT_180840a50;
  uVal_7 = DAT_18083ee68;
  local_70 = 0xfffffffffffffffe;
  local_5a8._0_16_ = ZEXT816(0);
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_18083efb0) && (func_0x180672ec0(&DAT_18083efb0), DAT_18083efb0 == -1)) {
    DAT_18083efa8 = (func_ptr_t )func_0x1800f0c40(&DAT_180840f80);
    _Init_thread_footer(&DAT_18083efb0);
  }
  (*DAT_18083efa8)(local_5e0,uVal_7,uVal_9,uVal_8);
  if (param_5 != '\0') {
LAB_1800d13ac:
    func_0x1801179c0(local_588,local_5e0,param_1,0,*param_2,param_2[1],param_5,param_3,0x3f800000,
                  param_4,0x11);
    pLong_6 = (int64_t *)local_5a8._8_8_;
    goto joined_r0x0001800d13f8;
  }
  if (*(int64_t **)(param_1 + 8) == (int64_t *)0x0) {
    lVal_14 = 0;
  }
  else {
    lVal_14 = **(int64_t **)(param_1 + 8);
  }
  local_d0 = local_588;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3544) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x3544) = 1;
    *(uint64_t *)(lVal_12 + 0x3538) = 0x6294e95999cd053;
    *(uint16_t *)(lVal_12 + 0x3540) = 0x13f;
    func_0x180673140(&LAB_1800f0d20);
  }
  lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_3 = (uint64_t *)(lVal_12 + 0x3538);
  if (*(char *)(lVal_12 + 0x3541) == '\x01') {
    *pU64_3 = *pU64_3 ^ 0x595b2bfdedfdb53f;
    *(byte *)(lVal_12 + 0x3540) = *(byte *)(lVal_12 + 0x3540) ^ 0x3f;
    *(uint8_t *)(lVal_12 + 0x3541) = 0;
  }
  _local_1d8 = ZEXT816(0);
  sz_11 = strlen((char *)pU64_3);
  if ((int64_t)sz_11 < 0) {
    func_0x18007ba70();
LAB_1800d1902:
    func_0x18007ba70();
LAB_1800d1908:
    func_0x18007ba70();
    goto LAB_1800d190e;
  }
  if (sz_11 < 0x10) {
    pU64_18 = local_1d8;
    uVal_16 = 0xf;
  }
  else {
    uVal_13 = sz_11 | 0xf;
    uVal_16 = 0x16;
    if (0x16 < uVal_13) {
      uVal_16 = uVal_13;
    }
    if (uVal_13 < 0xfff) {
      pU64_18 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
    }
    else {
      lVal_12 = func_0x180672de0(uVal_16 + 0x28);
      pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_18 + -8) = lVal_12;
    }
    local_1d8 = (uint8_t  [8])pU64_18;
  }
  local_1c8 = sz_11;
  local_1c0 = uVal_16;
  func_0x1806aa960(pU64_18,pU64_3,sz_11);
  pU64_18[sz_11] = 0;
  uVal_16 = local_1c0;
  if (*(uint64_t *)(lVal_14 + 0xe8) < local_1c8) {
    bFlag_20 = false;
  }
  else {
    if (local_1c0 < 0x10) {
      pU64_18 = local_1d8;
      if (*(uint64_t *)(lVal_14 + 0xf0) < 0x10) goto LAB_1800d1321;
LAB_1800d133e:
      _Buf1 = *(void **)(lVal_14 + 0xd8);
    }
    else {
      pU64_18 = (uint8_t *)local_1d8;
      if (0xf < *(uint64_t *)(lVal_14 + 0xf0)) goto LAB_1800d133e;
LAB_1800d1321:
      _Buf1 = (void *)(lVal_14 + 0xd8);
    }
    iVal_10 = memcmp(_Buf1,pU64_18,local_1c8);
    bFlag_20 = iVal_10 == 0;
  }
  local_588 = local_d0;
  if (0xf < uVal_16) {
    uVal_13 = uVal_16 + 1;
    lVal_14 = (int64_t)local_1d8;
    if (0xfff < uVal_13) {
      lVal_14 = *(int64_t *)((int64_t)local_1d8 + -8);
      if (0x1f < (uint64_t)(((int64_t)local_1d8 + -8) - lVal_14)) goto LAB_1800d190e;
      uVal_13 = uVal_16 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_14,uVal_13);
    local_588 = local_d0;
  }
  local_d0 = local_588;
  if (!bFlag_20) goto LAB_1800d13ac;
  Stack_1b4 = SUB1610(ZEXT816(0),4);
  uStack_1aa = 0;
  uStack_1a8 = 0;
  _local_1a0 = ZEXT816(0);
  local_190 = ZEXT816(0);
  local_170 = 0;
  local_180 = ZEXT816(0xf);
  local_168 = ZEXT816(0);
  local_158 = ZEXT816(0);
  local_138 = 0;
  local_148 = ZEXT816(0xf);
  local_130 = 1;
  local_128 = 0;
  local_124 = ZEXT816(0);
  local_114 = ZEXT816(0);
  local_104 = ZEXT816(0);
  local_f4 = SUB1612(ZEXT816(0),0);
  uStack_e8 = 0;
  auStack_e4 = SUB1612(ZEXT816(0),4);
  stack0xfffffffffffffe2c = SUB1612(ZEXT816(0),4);
  local_1d8._0_4_ = 1;
  uStack_1d0._4_4_ = _DAT_1806b2880;
  local_1c8 = CONCAT44(_UNK_1806b2888,_UNK_1806b2884);
  local_1c0 = CONCAT44(0x3f800000,_UNK_1806b288c);
  local_1b8 = 0xd;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x3558) == '\0') {
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_14 + 0x3558) = 1;
    *(uint8_t *)(lVal_14 + 0x3554) = 1;
    *(uint64_t *)(lVal_14 + 0x3548) = 0xe7d6f116d6b93fd8;
    *(uint32_t *)(lVal_14 + 0x3550) = 0xb7a626dc;
    func_0x180673140(&LAB_1800f0d50);
  }
  lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_3 = (uint64_t *)(lVal_14 + 0x3548);
  if (*(char *)(lVal_14 + 0x3554) == '\x01') {
    *pU64_3 = *pU64_3 ^ 0x93bfdf65b7d54bb9;
    *(uint *)(lVal_14 + 0x3550) = *(uint *)(lVal_14 + 0x3550) ^ 0xb7d54bb9;
    *(uint8_t *)(lVal_14 + 0x3554) = 0;
  }
  local_b8 = ZEXT816(0);
  local_c8 = ZEXT816(0);
  local_d8 = param_1;
  sz_11 = strlen((char *)pU64_3);
  if ((int64_t)sz_11 < 0) goto LAB_1800d1902;
  uVal_16 = 0xf;
  fnPtr_19 = local_c8;
  if (0xf < sz_11) {
    uVal_13 = sz_11 | 0xf;
    uVal_16 = 0x16;
    if (0x16 < uVal_13) {
      uVal_16 = uVal_13;
    }
    if (uVal_13 < 0xfff) {
      fnPtr_19 = (char *)func_0x180672de0(uVal_16 + 1);
    }
    else {
      lVal_14 = func_0x180672de0(uVal_16 + 0x28);
      fnPtr_19 = (char *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(fnPtr_19 + -8) = lVal_14;
    }
    local_c8._0_8_ = fnPtr_19;
  }
  local_b8._8_8_ = uVal_16;
  local_b8._0_8_ = sz_11;
  func_0x1806aa960(fnPtr_19,pU64_3,sz_11);
  fnPtr_19[sz_11] = '\0';
  auArr_4 = local_b8;
  uVal_16 = local_b8._0_8_;
  fnPtr_19 = local_c8;
  if (0xf < (uint64_t)local_b8._8_8_) {
    fnPtr_19 = (char *)local_c8._0_8_;
  }
  local_a8 = 0;
  local_90 = ZEXT816(0);
  _local_a0 = ZEXT816(0);
  if ((int64_t)local_b8._0_8_ < 0) goto LAB_1800d1908;
  if ((uint64_t)local_b8._0_8_ < 0x10) {
    local_90._8_8_ = 0xf;
    local_90._0_8_ = local_b8._0_8_;
    func_0x1806aa960(local_a0,fnPtr_19,local_b8._0_8_);
    local_a0[uVal_16] = 0;
    if (uVal_16 != 0) goto LAB_1800d1549;
    uVal_15 = 0;
  }
  else {
    uVal_15 = local_b8._0_8_ | 0xf;
    uVal_13 = 0x16;
    if (0x16 < uVal_15) {
      uVal_13 = uVal_15;
    }
    if (uVal_15 < 0xfff) {
      uVal_15 = func_0x180672de0(uVal_13 + 1);
    }
    else {
      lVal_14 = func_0x180672de0(uVal_13 + 0x28);
      uVal_15 = lVal_14 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_15 - 8) = lVal_14;
    }
    local_a0 = (uint8_t  [8])uVal_15;
    local_90._8_8_ = uVal_13;
    local_90._0_8_ = uVal_16;
    func_0x1806aa960(uVal_15,fnPtr_19,uVal_16);
    *(uint8_t *)(uVal_15 + uVal_16) = 0;
LAB_1800d1549:
    uVal_13 = (uint64_t)(auArr_4._0_4_ & 7);
    if (uVal_16 - 1 < 7) {
      uVal_15 = 0xcbf29ce484222325;
    }
    else {
      uVal_16 = uVal_16 & 0x7ffffffffffffff8;
      uVal_15 = 0xcbf29ce484222325;
      do {
        uVal_15 = (((((((uVal_15 * 0x100000001b3 ^ (int64_t)*fnPtr_19) * 0x100000001b3 ^
                      (int64_t)fnPtr_19[1]) * 0x100000001b3 ^ (int64_t)fnPtr_19[2]) * 0x100000001b3
                    ^ (int64_t)fnPtr_19[3]) * 0x100000001b3 ^ (int64_t)fnPtr_19[4]) * 0x100000001b3
                  ^ (int64_t)fnPtr_19[5]) * 0x100000001b3 ^ (int64_t)fnPtr_19[6]) * 0x100000001b3 ^
                 (int64_t)fnPtr_19[7];
        fnPtr_19 = fnPtr_19 + 8;
        uVal_16 = uVal_16 - 8;
      } while (uVal_16 != 0);
      if (uVal_13 == 0) goto LAB_1800d1614;
    }
    uVal_16 = 0;
    do {
      uVal_15 = uVal_15 * 0x100000001b3 ^ (int64_t)fnPtr_19[uVal_16];
      uVal_16 = uVal_16 + 1;
    } while (uVal_13 != uVal_16);
  }
LAB_1800d1614:
  auArr_5 = _local_1a0;
  uVal_13 = uVal_15 ^ 0xaf63bd4c8601b7df;
  auArr_4._12_4_ = 0;
  auArr_4._0_12_ = stack0xfffffffffffffe64;
  _local_1a0 = auArr_4 << 0x20;
  auArr_4 = _local_1a0;
  uVal_16 = local_90._0_8_;
  pU64_18 = local_a0;
  if (0xf < (uint64_t)local_90._8_8_) {
    pU64_18 = (uint8_t *)local_a0;
  }
  local_80 = uVal_15;
  local_78 = uVal_13;
  if ((uint64_t)local_180._0_8_ < (uint64_t)local_90._0_8_) {
    func_0x18007bba0(&ppppppuStack_198,local_90._0_8_);
    uVal_15 = local_80;
    uVal_13 = local_78;
  }
  else {
    ptr6_U64_17 = &ppppppuStack_198;
    if (0xf < (uint64_t)local_180._0_8_) {
      ppppppuStack_198 = auArr_5._8_8_;
      ptr6_U64_17 = ppppppuStack_198;
    }
    local_190._8_8_ = local_90._0_8_;
    _local_1a0 = auArr_4;
    func_0x1806aa960(ptr6_U64_17,pU64_18,local_90._0_8_);
    *(uint8_t *)((int64_t)ptr6_U64_17 + uVal_16) = 0;
  }
  local_180._8_8_ = uVal_15;
  local_170 = uVal_13;
  if (0xf < (uint64_t)local_90._8_8_) {
    uVal_16 = local_90._8_8_ + 1;
    lVal_14 = (int64_t)local_a0;
    if (0xfff < uVal_16) {
      lVal_14 = *(int64_t *)((int64_t)local_a0 + -8);
      if (0x1f < (uint64_t)(((int64_t)local_a0 + -8) - lVal_14)) goto LAB_1800d190e;
      uVal_16 = local_90._8_8_ + 0x28;
    }
    thunk_FUN_180695dd0(lVal_14,uVal_16);
  }
  local_90 = ZEXT816(0xf) << 0x40;
  auArr_5[15] = 0;
  auArr_5._0_15_ = stack0xffffffffffffff61;
  _local_a0 = auArr_5 << 8;
  if (0xf < (uint64_t)local_b8._8_8_) {
    uVal_16 = local_b8._8_8_ + 1;
    lVal_14 = local_c8._0_8_;
    if (0xfff < uVal_16) {
      lVal_14 = *(int64_t *)(local_c8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_14)) {
LAB_1800d190e:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_16 = local_b8._8_8_ + 0x28;
    }
    thunk_FUN_180695dd0(lVal_14,uVal_16);
  }
  local_128 = CONCAT11(local_128._1_1_,1);
  func_0x18010c610(DAT_18083ee58,local_1d8);
  func_0x18010c630(DAT_18083ee58,4);
  func_0x1801179c0(local_d0,local_5e0,local_d8,0,*param_2,param_2[1],0,param_3,0x3f800000,param_4,0x11)
  ;
  func_0x18010c620(DAT_18083ee58,local_1d8);
  func_0x1800d1af0(local_1d8);
  pLong_6 = (int64_t *)local_5a8._8_8_;
joined_r0x0001800d13f8:
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
  return;
}

// Unwind@1800d1910
void Unwind_1800d1910(void)
{
  func_0x180672f60(&DAT_18083efb0);
  return;
}

// Unwind@1800d1960
void Unwind_1800d1960(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x90);
  return;
}

// Unwind@1800d19b0
void Unwind_1800d19b0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x590);
  return;
}

// Unwind@1800d1a00
void Unwind_1800d1a00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x570);
  return;
}

// Unwind@1800d1a50
void Unwind_1800d1a50(uint64_t param_1,int64_t param_2)
{
  func_0x1800d1af0(param_2 + 0x460);
  return;
}

// Unwind@1800d1aa0
void Unwind_1800d1aa0(uint64_t param_1,int64_t param_2)
{
  func_0x1800d1cb0(param_2 + 0x58);
  return;
}

// func_0x1800d1af0
void func_0x1800d1af0(int64_t param_1)
{
  int64_t lVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  
  lVal_1 = *(int64_t *)(param_1 + 0xe8);
  if (lVal_1 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 0xf8) - lVal_1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1800d1ca6;
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 0xe8) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0xf8) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 0xd0);
  if (lVal_1 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 0xe0) - lVal_1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1800d1ca6;
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 0xd0) = ZEXT816(0);
    *(uint64_t *)(param_1 + 0xe0) = 0;
  }
  lVal_1 = *(int64_t *)(param_1 + 0xb8);
  if (lVal_1 != 0) {
    uVal_4 = *(int64_t *)(param_1 + 200) - lVal_1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_4) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1800d1ca6;
      uVal_4 = uVal_4 + 0x27;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_4);
    *(uint8_t (*)[16])(param_1 + 0xb8) = ZEXT816(0);
    *(uint64_t *)(param_1 + 200) = 0;
  }
  uVal_4 = *(uint64_t *)(param_1 + 0x90);
  if (0xf < uVal_4) {
    lVal_1 = *(int64_t *)(param_1 + 0x78);
    uVal_2 = uVal_4 + 1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) goto LAB_1800d1ca6;
      uVal_2 = uVal_4 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(uint64_t *)(param_1 + 0x90) = 0xf;
  *(uint8_t *)(param_1 + 0x78) = 0;
  uVal_4 = *(uint64_t *)(param_1 + 0x58);
  if (0xf < uVal_4) {
    lVal_1 = *(int64_t *)(param_1 + 0x40);
    uVal_2 = uVal_4 + 1;
    lVal_3 = lVal_1;
    if (0xfff < uVal_2) {
      lVal_3 = *(int64_t *)(lVal_1 + -8);
      if (0x1f < (uint64_t)((lVal_1 + -8) - lVal_3)) {
LAB_1800d1ca6:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_2 = uVal_4 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_3,uVal_2);
  }
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0xf;
  *(uint8_t *)(param_1 + 0x40) = 0;
  return;
}

// func_0x1800d1cb0
void func_0x1800d1cb0(int64_t param_1)
{
  int64_t *pLong_1;
  int *pInt_2;
  int64_t *pLong_3;
  
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
                    /* WARNING: Could not recover jumptable at 0x0001800d1cdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(func_ptr_t *)(*pLong_3 + 8))(pLong_3);
        return;
      }
    }
  }
  return;
}

// func_0x1800d1cf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1800d1cf0(uint64_t *param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t *pU64_2;
  uint8_t auStack_98 [32];
  uint32_t *local_78;
  uint8_t *local_70;
  uint64_t local_68;
  uint32_t local_60;
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
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_98;
  *param_1 = DAT_1806b2890;
  local_28 = _DAT_18083eef0;
  uStack_24 = uRam000000018083eef4;
  uStack_20 = uRam000000018083eef8;
  uStack_1c = uRam000000018083eefc;
  local_38 = _DAT_18083eee0;
  uStack_34 = uRam000000018083eee4;
  uStack_30 = uRam000000018083eee8;
  uStack_2c = uRam000000018083eeec;
  local_48 = _DAT_18083eed0;
  uStack_44 = uRam000000018083eed4;
  uStack_40 = uRam000000018083eed8;
  uStack_3c = uRam000000018083eedc;
  local_58 = _DAT_18083eec0;
  uStack_54 = uRam000000018083eec4;
  uStack_50 = uRam000000018083eec8;
  uStack_4c = uRam000000018083eecc;
  local_68 = *param_2;
  local_60 = *(uint32_t *)(param_2 + 1);
  local_70 = &DAT_18083ef00;
  local_78 = &local_58;
  func_0x18011b160(&DAT_18083ee80,&DAT_18083ef08,&local_68,param_1);
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_98)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_98);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_2 = (uint64_t *)(*fnPtr_1)();
  return pU64_2;
}

// func_0x1800d1dd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800d1dd0(uint64_t *param_1,uint64_t *param_2,float param_3,uint64_t param_4)
{
  float fVal_1;
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
  float fVal_14;
  float fVal_15;
  float fVal_16;
  float fVal_17;
  float fVal_18;
  float fVal_19;
  float fVal_20;
  float fVal_21;
  float fVal_22;
  float fVal_23;
  float fVal_24;
  float fVal_25;
  float fVal_26;
  float fVal_27;
  float fVal_28;
  
  if ((DAT_18083ee68 != 0) && (DAT_18083ef38 != 0)) {
    fVal_12 = *(float *)(param_1 + 1) - _DAT_18083ef10;
    fVal_1 = DAT_1806aeae4 + fVal_12;
    fVal_14 = ((*(float *)(param_2 + 1) - *(float *)(param_1 + 1)) + fVal_12) - fVal_1;
    fVal_5 = (float)*param_1;
    fVal_6 = (float)((uint64_t)*param_1 >> 0x20);
    fVal_9 = fVal_5 - (float)DAT_18083ef08;
    fVal_11 = fVal_6 - (float)((uint64_t)DAT_18083ef08 >> 0x20);
    fVal_21 = DAT_1806b26b4 * param_3 + 0.0;
    fVal_24 = param_3 * 0.0 + 0.0;
    fVal_2 = (float)DAT_1806b28a0 + fVal_9;
    fVal_3 = DAT_1806b28a0._4_4_ + fVal_11;
    fVal_18 = fVal_24 * (fVal_9 - fVal_2);
    fVal_26 = (fVal_11 - fVal_3) * fVal_21;
    fVal_5 = (((float)*param_2 - fVal_5) + fVal_9) - fVal_2;
    fVal_6 = (((float)((uint64_t)*param_2 >> 0x20) - fVal_6) + fVal_11) - fVal_3;
    fVal_4 = fVal_6 * fVal_21;
    fVal_22 = fVal_21 * (fVal_9 - fVal_2);
    fVal_25 = fVal_24 * (fVal_11 - fVal_3);
    fVal_19 = fVal_26 + fVal_18;
    fVal_15 = fVal_24 * fVal_5;
    fVal_5 = fVal_21 * fVal_5;
    fVal_6 = fVal_24 * fVal_6;
    fVal_17 = fVal_21 * (fVal_12 - fVal_1) + 0.0;
    fVal_12 = (fVal_12 - fVal_1) * fVal_24 + 0.0;
    fVal_7 = fVal_21 * fVal_14 + 0.0;
    fVal_14 = fVal_14 * fVal_24 + 0.0;
    fVal_9 = fVal_25 + fVal_22;
    fVal_26 = fVal_26 + fVal_15;
    fVal_11 = fVal_25 + fVal_5;
    fVal_22 = fVal_22 + fVal_6;
    fVal_5 = fVal_5 + fVal_6;
    fVal_21 = fVal_18 + fVal_4;
    fVal_4 = fVal_4 + fVal_15;
    fVal_13 = fVal_12 + fVal_9 + fVal_2;
    fVal_10 = fVal_12 + fVal_11 + fVal_2;
    fVal_24 = fVal_9 + fVal_14 + fVal_2;
    fVal_11 = fVal_11 + fVal_14 + fVal_2;
    fVal_8 = fVal_12 + fVal_22 + fVal_2;
    fVal_16 = fVal_12 + fVal_5 + fVal_2;
    fVal_28 = fVal_22 + fVal_14 + fVal_2;
    fVal_2 = fVal_5 + fVal_14 + fVal_2;
    fVal_5 = fVal_12 + fVal_19 + fVal_3;
    fVal_9 = fVal_12 + fVal_26 + fVal_3;
    fVal_20 = fVal_19 + fVal_14 + fVal_3;
    fVal_27 = fVal_26 + fVal_14 + fVal_3;
    fVal_22 = fVal_12 + fVal_21 + fVal_3;
    fVal_23 = fVal_12 + fVal_4 + fVal_3;
    fVal_19 = fVal_21 + fVal_14 + fVal_3;
    fVal_3 = fVal_4 + fVal_14 + fVal_3;
    fVal_4 = fVal_17 + fVal_25 + fVal_18 + fVal_1;
    fVal_12 = fVal_17 + fVal_25 + fVal_15 + fVal_1;
    fVal_14 = fVal_25 + fVal_18 + fVal_7 + fVal_1;
    fVal_21 = fVal_25 + fVal_15 + fVal_7 + fVal_1;
    fVal_26 = fVal_17 + fVal_6 + fVal_18 + fVal_1;
    fVal_25 = fVal_17 + fVal_6 + fVal_15 + fVal_1;
    fVal_17 = fVal_6 + fVal_18 + fVal_7 + fVal_1;
    fVal_1 = fVal_6 + fVal_15 + fVal_7 + fVal_1;
    func_0x180108220(DAT_18083ee70,param_4);
    func_0x180107cc0(DAT_18083ee70,fVal_8,fVal_22,fVal_26);
    func_0x180107cc0(DAT_18083ee70,fVal_16,fVal_23,fVal_25);
    func_0x180107cc0(DAT_18083ee70,fVal_16,fVal_23,fVal_25);
    func_0x180107cc0(DAT_18083ee70,fVal_2,fVal_3,fVal_1);
    func_0x180107cc0(DAT_18083ee70,fVal_2,fVal_3,fVal_1);
    func_0x180107cc0(DAT_18083ee70,fVal_28,fVal_19,fVal_17);
    func_0x180107cc0(DAT_18083ee70,fVal_28,fVal_19,fVal_17);
    func_0x180107cc0(DAT_18083ee70,fVal_8,fVal_22,fVal_26);
    func_0x180107cc0(DAT_18083ee70,fVal_13,fVal_5,fVal_4);
    func_0x180107cc0(DAT_18083ee70,fVal_10,fVal_9,fVal_12);
    func_0x180107cc0(DAT_18083ee70,fVal_10,fVal_9,fVal_12);
    func_0x180107cc0(DAT_18083ee70,fVal_11,fVal_27,fVal_21);
    func_0x180107cc0(DAT_18083ee70,fVal_11,fVal_27,fVal_21);
    func_0x180107cc0(DAT_18083ee70,fVal_24,fVal_20,fVal_14);
    func_0x180107cc0(DAT_18083ee70,fVal_24,fVal_20,fVal_14);
    func_0x180107cc0(DAT_18083ee70,fVal_13,fVal_5,fVal_4);
    func_0x180107cc0(DAT_18083ee70,fVal_13,fVal_5,fVal_4);
    func_0x180107cc0(DAT_18083ee70,fVal_8,fVal_22,fVal_26);
    func_0x180107cc0(DAT_18083ee70,fVal_10,fVal_9,fVal_12);
    func_0x180107cc0(DAT_18083ee70,fVal_16,fVal_23,fVal_25);
    func_0x180107cc0(DAT_18083ee70,fVal_24,fVal_20,fVal_14);
    func_0x180107cc0(DAT_18083ee70,fVal_28,fVal_19,fVal_17);
    func_0x180107cc0(DAT_18083ee70,fVal_11,fVal_27,fVal_21);
    func_0x180107cc0(DAT_18083ee70,fVal_2,fVal_3,fVal_1);
    return;
  }
  return;
}

// func_0x1800d25d0
void func_0x1800d25d0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,float param_4, uint32_t param_5)
{
  func_ptr_t fnPtr_1;
  uint8_t auArr_2 [16];
  float fVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auArr_7 [16];
  float fVal_8;
  float fVal_9;
  float fVal_10;
  float fVal_11;
  uint8_t auArr_12 [16];
  uint8_t auArr_13 [16];
  float fVal_14;
  uint8_t auStack_f8 [40];
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t extraout_XMM0_Qb_02;
  
  local_c0 = DAT_18083cf40 ^ (uint64_t)auStack_f8;
  func_0x180108220(DAT_18083ee70,param_3);
  fVal_3 = DAT_1806b28b0;
  fVal_14 = 0.0;
  do {
    fVal_14 = param_4 + fVal_14;
    uVal_4 = func_0x18068dd00();
    uVal_5 = func_0x18068dd00();
    uVal_6 = func_0x18068a470();
    auArr_12._8_4_ = (int)extraout_XMM0_Qb_01;
    auArr_12._0_8_ = uVal_6;
    auArr_12._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    auArr_7._0_8_ = func_0x18068a470();
    auArr_7._8_8_ = extraout_XMM0_Qb_02;
    auArr_13._8_4_ = (int)extraout_XMM0_Qb;
    auArr_13._0_8_ = uVal_4;
    auArr_13._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auArr_13 = insertps(auArr_12,auArr_13,0x10);
    fVal_8 = (float)*param_2;
    fVal_9 = (float)((uint64_t)*param_2 >> 0x20);
    fVal_10 = (float)*param_1;
    fVal_11 = (float)((uint64_t)*param_1 >> 0x20);
    local_c8 = CONCAT44(auArr_13._4_4_ * fVal_9 + fVal_11,auArr_13._0_4_ * fVal_8 + fVal_10);
    auArr_2._8_4_ = (int)extraout_XMM0_Qb_00;
    auArr_2._0_8_ = uVal_5;
    auArr_2._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    auArr_13 = insertps(auArr_7,auArr_2,0x10);
    local_d0 = CONCAT44(auArr_13._4_4_ * fVal_9 + fVal_11,auArr_13._0_4_ * fVal_8 + fVal_10);
    func_0x180108220(DAT_18083ee70,param_3);
    func_0x1800cff60(&local_d0,&local_c8,param_5);
    func_0x1800cff60(&local_c8,&local_d0,param_5);
  } while (fVal_14 < fVal_3);
  if (DAT_18083cf40 == (local_c0 ^ (uint64_t)auStack_f8)) {
    return;
  }
  func_0x180673080(local_c0 ^ (uint64_t)auStack_f8);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800d27b0
void func_0x1800d27b0(float *param_1,float *param_2,uint64_t param_3,float param_4)
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  float fVal_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  
  func_0x180108220(DAT_18083ee70,param_3);
  fVal_2 = DAT_1806b28b0;
  fVal_1 = DAT_1806aeae0;
  fVal_5 = 0.0;
  do {
    fVal_7 = param_4 + fVal_5;
    fVal_5 = fVal_5 * fVal_1;
    fVal_6 = fVal_2;
    if (fVal_7 <= fVal_2) {
      fVal_6 = fVal_7;
    }
    fVal_6 = fVal_6 * fVal_1;
    fVal_3 = (float)func_0x18068dd00(fVal_5);
    fVal_4 = (float)func_0x18068dd00(fVal_6);
    fVal_5 = (float)func_0x18068a470(fVal_5);
    fVal_6 = (float)func_0x18068a470(fVal_6);
    func_0x180107cc0(DAT_18083ee70,fVal_6 * *param_2 + *param_1,fVal_4 * param_2[1] + param_1[1],0);
    func_0x180107cc0(DAT_18083ee70,fVal_5 * *param_2 + *param_1,fVal_3 * param_2[1] + param_1[1]);
    func_0x180107cc0(DAT_18083ee70,*param_1,param_1[1]);
    fVal_5 = fVal_7;
  } while (fVal_7 < fVal_2);
  return;
}

// func_0x1800d2930
void func_0x1800d2930(uint32_t *param_1,uint64_t param_2,uint32_t param_3)
{
  func_0x180107830(DAT_18083ee70,1,0,0);
  func_0x1801082b0(DAT_18083ee70,param_2,param_3);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[3],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[3],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[1],0);
  func_0x18011b260(DAT_18083ee68,DAT_18083ee70,DAT_18083ef20);
  return;
}

// func_0x1800d2a00
void func_0x1800d2a00(uint32_t *param_1,uint32_t *param_2,uint32_t param_3)
{
  func_0x1801081a0(DAT_18083ee70,*param_2,param_2[1],param_2[2],param_3);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[3],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[3],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[3],0);
  return;
}

// func_0x1800d2ad0
void func_0x1800d2ad0(int64_t param_1,uint64_t param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int64_t lVal_3;
  
  lVal_1 = param_1 + 0x80;
  func_0x1800d2c20(param_1,param_2,lVal_1);
  func_0x1800d2c20(param_1 + 0x20,param_2,lVal_1);
  func_0x1800d2c20(param_1 + 0x40,param_2,lVal_1);
  func_0x1800d2c20(param_1 + 0x60,param_2,lVal_1);
  lVal_2 = *(int64_t *)(param_1 + 0x90);
  for (lVal_3 = *(int64_t *)(param_1 + 0x88); lVal_3 != lVal_2; lVal_3 = lVal_3 + 0x20) {
    func_0x1800d2c20(lVal_3,param_2,lVal_1);
  }
  lVal_2 = *(int64_t *)(param_1 + 0xa8);
  for (lVal_3 = *(int64_t *)(param_1 + 0xa0); lVal_3 != lVal_2; lVal_3 = lVal_3 + 0x20) {
    func_0x1800d2c20(lVal_3,param_2,lVal_1);
  }
  lVal_2 = *(int64_t *)(param_1 + 0xc0);
  for (lVal_3 = *(int64_t *)(param_1 + 0xb8); lVal_3 != lVal_2; lVal_3 = lVal_3 + 0x20) {
    func_0x1800d2c20(lVal_3,param_2,lVal_1);
  }
  lVal_2 = *(int64_t *)(param_1 + 0xd8);
  for (lVal_3 = *(int64_t *)(param_1 + 0xd0); lVal_3 != lVal_2; lVal_3 = lVal_3 + 0x20) {
    func_0x1800d2c20(lVal_3,param_2,lVal_1);
  }
  lVal_2 = *(int64_t *)(param_1 + 0xf0);
  for (lVal_3 = *(int64_t *)(param_1 + 0xe8); lVal_3 != lVal_2; lVal_3 = lVal_3 + 0x20) {
    func_0x1800d2c20(lVal_3,param_2,lVal_1);
  }
  return;
}

// func_0x1800d2c20
void func_0x1800d2c20(float *param_1,uint64_t param_2,float *param_3)
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  float fVal_4;
  
  func_0x180108220(DAT_18083ee70);
  fVal_2 = param_1[5] * param_3[1];
  fVal_4 = param_1[4] * *param_3;
  fVal_3 = param_3[1] * param_1[7] + param_1[5];
  fVal_1 = *param_3 * param_1[6] + param_1[4];
  func_0x180107e20(DAT_18083ee70,*param_1,param_1[1],0,fVal_4,fVal_2);
  func_0x180107e20(DAT_18083ee70,*param_1,param_1[1] + param_1[3],0,fVal_4,fVal_3);
  func_0x180107e20(DAT_18083ee70,*param_1 + param_1[2],param_1[1] + param_1[3],0,fVal_1,fVal_3);
  func_0x180107e20(DAT_18083ee70,*param_1 + param_1[2],param_1[1],0,fVal_1,fVal_2);
  return;
}

// func_0x1800d2d50
void func_0x1800d2d50(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint64_t param_6,uint8_t param_7,uint32_t param_8)
{
  func_0x180107830(DAT_18083ee70,2,0,0);
  func_0x1800d2e40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x18011b260(DAT_18083ee68,DAT_18083ee70,DAT_18083ef20);
  return;
}

// func_0x1800d2e40
void func_0x1800d2e40(float param_1,float param_2,float param_3,float param_4,float param_5, uint32_t *param_6,byte param_7,float param_8)
{
  float fVal_1;
  float fVal_2;
  float fVal_3;
  float fVal_4;
  float fVal_5;
  float fVal_6;
  float fVal_7;
  float fVal_8;
  float fVal_9;
  
  fVal_6 = param_2 + param_4;
  fVal_4 = DAT_1806aeae4 * param_3;
  if (param_8 <= DAT_1806aeae4 * param_3) {
    fVal_4 = param_8;
  }
  fVal_3 = param_4 * DAT_1806aeae4;
  if (fVal_4 <= param_4 * DAT_1806aeae4) {
    fVal_3 = fVal_4;
  }
  fVal_5 = fVal_6 - fVal_3;
  param_3 = param_3 + param_1;
  fVal_4 = param_2 + fVal_3;
  if ((param_7 & 0x10) == 0) {
    func_0x1801081a0(DAT_18083ee70,*param_6,param_6[1],param_6[2],param_6[3]);
    func_0x180107cc0(DAT_18083ee70,param_1,fVal_5,0);
    func_0x180107cc0(DAT_18083ee70,param_3,fVal_5,0);
    func_0x180107cc0(DAT_18083ee70,param_3,fVal_4,0);
    func_0x180107cc0(DAT_18083ee70,param_3,fVal_4,0);
    func_0x180107cc0(DAT_18083ee70,param_1,fVal_4,0);
    func_0x180107cc0(DAT_18083ee70,param_1,fVal_5,0);
  }
  if ((param_7 & 0x20) == 0) {
    fVal_8 = param_1 + fVal_3;
    fVal_7 = param_3 - fVal_3;
    func_0x1801081a0(DAT_18083ee70,*param_6,param_6[1],param_6[2],param_6[3]);
    func_0x180107cc0(DAT_18083ee70,fVal_8,fVal_4,0);
    func_0x180107cc0(DAT_18083ee70,fVal_7,fVal_4,0);
    func_0x180107cc0(DAT_18083ee70,fVal_7,param_2,0);
    func_0x180107cc0(DAT_18083ee70,fVal_7,param_2,0);
    func_0x180107cc0(DAT_18083ee70,fVal_8,param_2,0);
    func_0x180107cc0(DAT_18083ee70,fVal_8,fVal_4,0);
  }
  if ((param_7 & 0x40) == 0) {
    fVal_8 = param_1 + fVal_3;
    fVal_7 = param_3 - fVal_3;
    func_0x1801081a0(DAT_18083ee70,*param_6,param_6[1],param_6[2],param_6[3]);
    func_0x180107cc0(DAT_18083ee70,fVal_8,fVal_6,0);
    func_0x180107cc0(DAT_18083ee70,fVal_7,fVal_6,0);
    func_0x180107cc0(DAT_18083ee70,fVal_7,fVal_5,0);
    func_0x180107cc0(DAT_18083ee70,fVal_7,fVal_5,0);
    func_0x180107cc0(DAT_18083ee70,fVal_8,fVal_5,0);
    func_0x180107cc0(DAT_18083ee70,fVal_8,fVal_6,0);
  }
  param_1 = param_1 + fVal_3;
  param_3 = param_3 - fVal_3;
  func_0x180108220(DAT_18083ee70,param_6);
  if ((param_7 & 1) != 0) {
    fVal_6 = 0.0;
    do {
      fVal_7 = DAT_1806b28c4;
      fVal_9 = param_5 + fVal_6;
      fVal_6 = fVal_6 * DAT_1806aeae0;
      fVal_8 = DAT_1806b28c4;
      if (fVal_9 <= DAT_1806b28c4) {
        fVal_8 = fVal_9;
      }
      fVal_8 = fVal_8 * DAT_1806aeae0;
      fVal_1 = (float)func_0x18068dd00(fVal_6);
      fVal_2 = (float)func_0x18068dd00(fVal_8);
      fVal_6 = (float)func_0x18068a470(fVal_6);
      fVal_8 = (float)func_0x18068a470(fVal_8);
      func_0x180107cc0(DAT_18083ee70,fVal_8 * fVal_3 + param_3,fVal_2 * fVal_3 + fVal_5,0);
      func_0x180107cc0(DAT_18083ee70,fVal_6 * fVal_3 + param_3,fVal_1 * fVal_3 + fVal_5);
      func_0x180107cc0(DAT_18083ee70,param_3,fVal_5);
      fVal_6 = fVal_9;
    } while (fVal_9 < fVal_7);
  }
  fVal_6 = DAT_1806b28c4;
  if ((param_7 & 2) != 0) {
    do {
      fVal_7 = DAT_1806b28c8;
      fVal_9 = param_5 + fVal_6;
      fVal_6 = fVal_6 * DAT_1806aeae0;
      fVal_8 = DAT_1806b28c8;
      if (fVal_9 <= DAT_1806b28c8) {
        fVal_8 = fVal_9;
      }
      fVal_8 = fVal_8 * DAT_1806aeae0;
      fVal_1 = (float)func_0x18068dd00(fVal_6);
      fVal_2 = (float)func_0x18068dd00(fVal_8);
      fVal_6 = (float)func_0x18068a470(fVal_6);
      fVal_8 = (float)func_0x18068a470(fVal_8);
      func_0x180107cc0(DAT_18083ee70,fVal_8 * fVal_3 + param_1,fVal_2 * fVal_3 + fVal_5,0);
      func_0x180107cc0(DAT_18083ee70,fVal_6 * fVal_3 + param_1,fVal_1 * fVal_3 + fVal_5);
      func_0x180107cc0(DAT_18083ee70,param_1,fVal_5);
      fVal_6 = fVal_9;
    } while (fVal_9 < fVal_7);
  }
  fVal_6 = DAT_1806b28cc;
  fVal_5 = DAT_1806b28c8;
  if ((param_7 & 8) != 0) {
    do {
      fVal_8 = param_5 + fVal_5;
      fVal_5 = fVal_5 * DAT_1806aeae0;
      fVal_7 = fVal_6;
      if (fVal_8 <= fVal_6) {
        fVal_7 = fVal_8;
      }
      fVal_7 = fVal_7 * DAT_1806aeae0;
      fVal_9 = (float)func_0x18068dd00(fVal_5);
      fVal_1 = (float)func_0x18068dd00(fVal_7);
      fVal_5 = (float)func_0x18068a470(fVal_5);
      fVal_7 = (float)func_0x18068a470(fVal_7);
      func_0x180107cc0(DAT_18083ee70,fVal_7 * fVal_3 + param_1,fVal_1 * fVal_3 + fVal_4,0);
      func_0x180107cc0(DAT_18083ee70,fVal_5 * fVal_3 + param_1,fVal_9 * fVal_3 + fVal_4);
      func_0x180107cc0(DAT_18083ee70,param_1,fVal_4);
      fVal_5 = fVal_8;
    } while (fVal_8 < fVal_6);
  }
  fVal_6 = DAT_1806b28b0;
  fVal_5 = DAT_1806b28cc;
  if ((param_7 & 4) != 0) {
    do {
      fVal_8 = param_5 + fVal_5;
      fVal_5 = fVal_5 * DAT_1806aeae0;
      fVal_7 = fVal_6;
      if (fVal_8 <= fVal_6) {
        fVal_7 = fVal_8;
      }
      fVal_7 = fVal_7 * DAT_1806aeae0;
      fVal_9 = (float)func_0x18068dd00(fVal_5);
      fVal_1 = (float)func_0x18068dd00(fVal_7);
      fVal_5 = (float)func_0x18068a470(fVal_5);
      fVal_7 = (float)func_0x18068a470(fVal_7);
      func_0x180107cc0(DAT_18083ee70,fVal_7 * fVal_3 + param_3,fVal_1 * fVal_3 + fVal_4,0);
      func_0x180107cc0(DAT_18083ee70,fVal_5 * fVal_3 + param_3,fVal_9 * fVal_3 + fVal_4);
      func_0x180107cc0(DAT_18083ee70,param_3,fVal_4);
      fVal_5 = fVal_8;
    } while (fVal_8 < fVal_6);
  }
  return;
}

// func_0x1800d35b0
void func_0x1800d35b0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8, uint16_t param_9,uint32_t param_10)
{
  func_0x180107830(DAT_18083ee70,2,0,0);
  func_0x1800d36e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x18011b260(DAT_18083ee68,DAT_18083ee70,DAT_18083ef20);
  return;
}

// func_0x1800d36e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800d36e0(float param_1,float param_2,float param_3,float param_4,float param_5, uint64_t param_6,uint64_t param_7,float param_8,ushort param_9,float param_10)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
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
  float fVal_19;
  uint8_t auArr_20 [16];
  float fVal_21;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  
  if ((param_8 != 0.0) || (NAN(param_8))) {
    auArr_10._2_2_ = 0;
    auArr_10._0_2_ = param_9;
    auArr_10._4_2_ = param_9;
    auArr_10._6_2_ = 0;
    auArr_10._8_2_ = param_9;
    auArr_10._10_2_ = 0;
    auArr_10._12_2_ = param_9;
    auArr_10._14_2_ = 0;
    auArr_20 = _DAT_1806b28d0 & auArr_10;
    auArr_10 = auArr_10 & _DAT_1806b28e0;
    fVal_19 = DAT_1806aeae4 * param_3;
    if (param_10 <= DAT_1806aeae4 * param_3) {
      fVal_19 = param_10;
    }
    fVal_21 = param_4 * DAT_1806aeae4;
    if (fVal_19 <= param_4 * DAT_1806aeae4) {
      fVal_21 = fVal_19;
    }
    if (auArr_10._0_4_ == 0) {
      func_0x1801081a0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x1801081a0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
    }
    if (auArr_20._12_4_ == 0) {
      func_0x1801081a0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x1801081a0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
    }
    if (auArr_20._8_4_ == 0) {
      func_0x1801081a0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x1801081a0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
    }
    if (auArr_20._4_4_ == 0) {
      func_0x1801081a0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x1801081a0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
    }
    if (auArr_20._0_4_ == 0) {
      func_0x1801081a0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
      func_0x180107cc0(DAT_18083ee70);
    }
    iStack_c4 = auArr_10._4_4_;
    if (iStack_c4 != 0) {
      fVal_19 = 0.0;
      do {
        fVal_19 = param_5 + fVal_19;
        uVal_1 = func_0x18068dd00();
        func_0x18068dd00();
        uVal_2 = func_0x18068a470();
        func_0x18068a470();
        func_0x180108220(DAT_18083ee70,param_7);
        auArr_11._8_4_ = (int)extraout_XMM0_Qb;
        auArr_11._0_8_ = uVal_1;
        auArr_11._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auArr_12._4_12_ = auArr_11._4_12_;
        auArr_12._0_4_ = (float)uVal_1 * fVal_21 + ((param_2 + param_4) - fVal_21);
        auArr_20._8_4_ = (int)extraout_XMM0_Qb_00;
        auArr_20._0_8_ = uVal_2;
        auArr_20._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        auArr_3._4_12_ = auArr_20._4_12_;
        auArr_3._0_4_ = (float)uVal_2 * fVal_21 + ((param_3 + param_1) - fVal_21);
        func_0x180107cc0(DAT_18083ee70,auArr_3._0_8_,auArr_12._0_8_,0);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180108220(DAT_18083ee70,param_6);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
      } while (fVal_19 < DAT_1806b28c4);
    }
    iStack_c0 = auArr_10._8_4_;
    if (iStack_c0 != 0) {
      fVal_19 = DAT_1806b28c4;
      do {
        fVal_19 = param_5 + fVal_19;
        uVal_1 = func_0x18068dd00();
        func_0x18068dd00();
        uVal_2 = func_0x18068a470();
        func_0x18068a470();
        func_0x180108220(DAT_18083ee70,param_7);
        auArr_13._8_4_ = (int)extraout_XMM0_Qb_01;
        auArr_13._0_8_ = uVal_1;
        auArr_13._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
        auArr_14._4_12_ = auArr_13._4_12_;
        auArr_14._0_4_ = (float)uVal_1 * fVal_21 + ((param_2 + param_4) - fVal_21);
        auArr_4._8_4_ = (int)extraout_XMM0_Qb_02;
        auArr_4._0_8_ = uVal_2;
        auArr_4._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
        auArr_5._4_12_ = auArr_4._4_12_;
        auArr_5._0_4_ = (float)uVal_2 * fVal_21 + param_1 + fVal_21;
        func_0x180107cc0(DAT_18083ee70,auArr_5._0_8_,auArr_14._0_8_,0);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180108220(DAT_18083ee70,param_6);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
      } while (fVal_19 < DAT_1806b28c8);
    }
    fVal_19 = DAT_1806b28c8;
    if ((param_9 & 8) != 0) {
      do {
        fVal_19 = param_5 + fVal_19;
        uVal_1 = func_0x18068dd00();
        func_0x18068dd00();
        uVal_2 = func_0x18068a470();
        func_0x18068a470();
        func_0x180108220(DAT_18083ee70,param_7);
        auArr_15._8_4_ = (int)extraout_XMM0_Qb_03;
        auArr_15._0_8_ = uVal_1;
        auArr_15._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
        auArr_16._4_12_ = auArr_15._4_12_;
        auArr_16._0_4_ = (float)uVal_1 * fVal_21 + param_2 + fVal_21;
        auArr_6._8_4_ = (int)extraout_XMM0_Qb_04;
        auArr_6._0_8_ = uVal_2;
        auArr_6._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
        auArr_7._4_12_ = auArr_6._4_12_;
        auArr_7._0_4_ = (float)uVal_2 * fVal_21 + param_1 + fVal_21;
        func_0x180107cc0(DAT_18083ee70,auArr_7._0_8_,auArr_16._0_8_,0);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180108220(DAT_18083ee70,param_6);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
      } while (fVal_19 < DAT_1806b28cc);
    }
    iStack_bc = auArr_10._12_4_;
    if (iStack_bc != 0) {
      fVal_19 = DAT_1806b28cc;
      do {
        fVal_19 = param_5 + fVal_19;
        uVal_1 = func_0x18068dd00();
        func_0x18068dd00();
        uVal_2 = func_0x18068a470();
        func_0x18068a470();
        func_0x180108220(DAT_18083ee70,param_7);
        auArr_17._8_4_ = (int)extraout_XMM0_Qb_05;
        auArr_17._0_8_ = uVal_1;
        auArr_17._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_05 >> 0x20);
        auArr_18._4_12_ = auArr_17._4_12_;
        auArr_18._0_4_ = (float)uVal_1 * fVal_21 + param_2 + fVal_21;
        auArr_8._8_4_ = (int)extraout_XMM0_Qb_06;
        auArr_8._0_8_ = uVal_2;
        auArr_8._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_06 >> 0x20);
        auArr_9._4_12_ = auArr_8._4_12_;
        auArr_9._0_4_ = (float)uVal_2 * fVal_21 + ((param_3 + param_1) - fVal_21);
        func_0x180107cc0(DAT_18083ee70,auArr_9._0_8_,auArr_18._0_8_,0);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180108220(DAT_18083ee70,param_6);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
        func_0x180107cc0(DAT_18083ee70);
      } while (fVal_19 < DAT_1806b28b0);
    }
  }
  else {
    func_0x1800d2e40();
  }
  return;
}

// func_0x1800d48c0
void func_0x1800d48c0(uint32_t *param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180108220(DAT_18083ee70,param_3);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[3],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[3],0);
  func_0x180108220(DAT_18083ee70,param_2);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[1],0);
  func_0x180108220(DAT_18083ee70,param_3);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[3],0);
  return;
}

// func_0x1800d49a0
void func_0x1800d49a0(uint32_t *param_1,uint64_t param_2,uint64_t param_3)
{
  func_0x180108220(DAT_18083ee70);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[3],0);
  func_0x180108220(DAT_18083ee70,param_3);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[3],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[1],0);
  func_0x180108220(DAT_18083ee70,param_2);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[3],0);
  return;
}

// func_0x1800d4a80
void func_0x1800d4a80(uint32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4, uint64_t param_5)
{
  func_0x180108220(DAT_18083ee70,param_4);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[3],0);
  func_0x180108220(DAT_18083ee70,param_5);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[3],0);
  func_0x180108220(DAT_18083ee70,param_3);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[1],0);
  func_0x180107cc0(DAT_18083ee70,param_1[2],param_1[1],0);
  func_0x180108220(DAT_18083ee70,param_2);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[1],0);
  func_0x180108220(DAT_18083ee70,param_4);
  func_0x180107cc0(DAT_18083ee70,*param_1,param_1[3],0);
  return;
}

// func_0x1800d4b90
void func_0x1800d4b90(int param_1,char param_2)
{
  undefined1 *pU64_1;
  
  if (DAT_180840a60 != 0) {
    if (param_1 == 3) {
      if (param_2 == '\0') {
        DAT_18083ef16 = param_2;
        return;
      }
      pU64_1 = &DAT_18083ef19;
      DAT_18083ef16 = param_2;
    }
    else if (param_1 == 2) {
      if (param_2 == '\0') {
        DAT_18083ef15 = param_2;
        return;
      }
      pU64_1 = &DAT_18083ef18;
      DAT_18083ef15 = param_2;
    }
    else {
      if (param_1 != 1) {
        return;
      }
      if (param_2 == '\0') {
        DAT_18083ef14 = param_2;
        return;
      }
      pU64_1 = &DAT_18083ef17;
      DAT_18083ef14 = param_2;
    }
    *pU64_1 = 1;
  }
  return;
}

// func_0x1800d4bf0
void func_0x1800d4bf0(uint64_t param_1,uint64_t param_2,float *param_3,float *param_4)
{
  int64_t *pLong_1;
  int *pInt_2;
  float fVal_3;
  float fVal_4;
  float fVal_5;
  uint32_t *pU64_6;
  uint8_t (*pArr16_7)[16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  float fVal_12;
  float fVal_13;
  float fVal_14;
  float fVal_15;
  float fVal_16;
  float fVal_17;
  float fVal_18;
  uint32_t uVal_19;
  uint32_t uVal_20;
  uint32_t uVal_21;
  uint32_t uVal_22;
  uint32_t uVal_23;
  uint32_t uVal_24;
  uint32_t uVal_25;
  uint32_t uVal_26;
  uint32_t uVal_27;
  uint32_t uVal_28;
  uint32_t uVal_29;
  uint32_t uVal_30;
  uint32_t uVal_31;
  uint32_t uVal_32;
  uint32_t uVal_33;
  char ch_34;
  int64_t lVal_35;
  int64_t lVal_36;
  uint64_t uVal_37;
  uint32_t *pU64_38;
  int64_t lVal_39;
  uint64_t uVal_40;
  uint64_t uVal_41;
  uint64_t local_60;
  int64_t *local_58;
  uint64_t *local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (DAT_18083ee68 != 0) {
    ch_34 = func_0x1800ff0e0();
    if (ch_34 != '\0') {
      func_0x18011b920(DAT_180840a50,&local_60);
      local_50 = (uint64_t *)func_0x180101350(local_60,param_2);
      if (local_50 != (uint64_t *)0x0) {
        lVal_35 = func_0x180129cf0(DAT_180840a58);
        *(uint8_t *)(lVal_35 + 0x78) = 1;
        lVal_39 = *(int64_t *)(lVal_35 + 0x60);
        uVal_40 = *(uint64_t *)(lVal_35 + 0x58);
        lVal_36 = *(int64_t *)(lVal_35 + 0x48);
        uVal_41 = *(uint64_t *)(lVal_35 + 0x50) - 1;
        pU64_6 = *(uint32_t **)(lVal_36 + ((lVal_39 + uVal_40) - 1 & uVal_41) * 8);
        if (*(uint64_t *)(lVal_35 + 0x50) <= lVal_39 + 1U) {
          func_0x1800f0d80(lVal_35 + 0x40,1);
          lVal_36 = *(int64_t *)(lVal_35 + 0x48);
          lVal_39 = *(int64_t *)(lVal_35 + 0x60);
          uVal_40 = *(uint64_t *)(lVal_35 + 0x58);
          uVal_41 = *(int64_t *)(lVal_35 + 0x50) - 1;
        }
        *(uint64_t *)(lVal_35 + 0x58) = uVal_40 & uVal_41;
        uVal_40 = (uVal_40 & uVal_41) + lVal_39;
        uVal_41 = uVal_41 & uVal_40;
        pU64_38 = *(uint32_t **)(lVal_36 + uVal_41 * 8);
        if (pU64_38 == (uint32_t *)0x0) {
          uVal_37 = func_0x180672de0(0x40);
          *(uint64_t *)(*(int64_t *)(lVal_35 + 0x48) + uVal_41 * 8) = uVal_37;
          pU64_38 = *(uint32_t **)
                     (*(int64_t *)(lVal_35 + 0x48) +
                     (*(int64_t *)(lVal_35 + 0x50) - 1U & uVal_40) * 8);
        }
        uVal_19 = *pU64_6;
        uVal_20 = pU64_6[1];
        uVal_21 = pU64_6[2];
        uVal_22 = pU64_6[3];
        uVal_23 = pU64_6[4];
        uVal_24 = pU64_6[5];
        uVal_25 = pU64_6[6];
        uVal_26 = pU64_6[7];
        uVal_27 = pU64_6[8];
        uVal_28 = pU64_6[9];
        uVal_29 = pU64_6[10];
        uVal_30 = pU64_6[0xb];
        uVal_31 = pU64_6[0xd];
        uVal_32 = pU64_6[0xe];
        uVal_33 = pU64_6[0xf];
        pU64_38[0xc] = pU64_6[0xc];
        pU64_38[0xd] = uVal_31;
        pU64_38[0xe] = uVal_32;
        pU64_38[0xf] = uVal_33;
        pU64_38[8] = uVal_27;
        pU64_38[9] = uVal_28;
        pU64_38[10] = uVal_29;
        pU64_38[0xb] = uVal_30;
        pU64_38[4] = uVal_23;
        pU64_38[5] = uVal_24;
        pU64_38[6] = uVal_25;
        pU64_38[7] = uVal_26;
        *pU64_38 = uVal_19;
        pU64_38[1] = uVal_20;
        pU64_38[2] = uVal_21;
        pU64_38[3] = uVal_22;
        lVal_39 = *(int64_t *)(lVal_35 + 0x60);
        *(int64_t *)(lVal_35 + 0x60) = lVal_39 + 1;
        pArr16_7 = *(uint8_t (**)[16])
                   (*(int64_t *)(lVal_35 + 0x48) +
                   (*(int64_t *)(lVal_35 + 0x50) - 1U & lVal_39 + *(int64_t *)(lVal_35 + 0x58)) * 8);
        fVal_3 = *param_3;
        fVal_4 = param_3[1];
        fVal_5 = param_3[2];
        fVal_12 = *(float *)(*pArr16_7 + 4);
        fVal_13 = *(float *)(*pArr16_7 + 8);
        fVal_14 = *(float *)(*pArr16_7 + 0xc);
        fVal_15 = *(float *)pArr16_7[1];
        fVal_16 = *(float *)(pArr16_7[1] + 4);
        fVal_17 = *(float *)(pArr16_7[1] + 8);
        fVal_18 = *(float *)(pArr16_7[1] + 0xc);
        auArr_8._4_4_ = fVal_3 * fVal_12 + fVal_4 * fVal_16 + *(float *)(pArr16_7[2] + 4) * fVal_5 +
                       *(float *)(pArr16_7[3] + 4);
        auArr_8._0_4_ = fVal_3 * *(float *)*pArr16_7 + fVal_4 * fVal_15 + *(float *)pArr16_7[2] * fVal_5 +
                       *(float *)pArr16_7[3];
        auArr_8._8_4_ = fVal_3 * fVal_13 + fVal_4 * fVal_17 + *(float *)(pArr16_7[2] + 8) * fVal_5 +
                       *(float *)(pArr16_7[3] + 8);
        auArr_8._12_4_ =
             fVal_3 * fVal_14 + fVal_4 * fVal_18 + *(float *)(pArr16_7[2] + 0xc) * fVal_5 +
             *(float *)(pArr16_7[3] + 0xc);
        pArr16_7[3] = auArr_8;
        fVal_3 = *param_4;
        fVal_4 = param_4[1];
        fVal_5 = param_4[2];
        auArr_9._4_4_ = fVal_3 * fVal_12;
        auArr_9._0_4_ = fVal_3 * *(float *)*pArr16_7;
        auArr_9._8_4_ = fVal_3 * fVal_13;
        auArr_9._12_4_ = fVal_3 * fVal_14;
        *pArr16_7 = auArr_9;
        auArr_10._4_4_ = fVal_4 * fVal_16;
        auArr_10._0_4_ = fVal_4 * fVal_15;
        auArr_10._8_4_ = fVal_4 * fVal_17;
        auArr_10._12_4_ = fVal_4 * fVal_18;
        pArr16_7[1] = auArr_10;
        auArr_11._4_4_ = fVal_5 * *(float *)(pArr16_7[2] + 4);
        auArr_11._0_4_ = fVal_5 * *(float *)pArr16_7[2];
        auArr_11._8_4_ = fVal_5 * *(float *)(pArr16_7[2] + 8);
        auArr_11._12_4_ = fVal_5 * *(float *)(pArr16_7[2] + 0xc);
        pArr16_7[2] = auArr_11;
        func_0x1800ff650(param_1,DAT_18083ee68 + 0x10,DAT_18083ef28,*local_50);
        *(uint8_t *)(lVal_35 + 0x78) = 1;
        pLong_1 = (int64_t *)(lVal_35 + 0x60);
        *pLong_1 = *pLong_1 + -1;
        if (*pLong_1 == 0) {
          *(uint64_t *)(lVal_35 + 0x58) = 0;
        }
      }
      if (local_58 != (int64_t *)0x0) {
        LOCK();
        pLong_1 = local_58 + 1;
        *(int *)pLong_1 = *(int *)pLong_1 + -1;
        UNLOCK();
        if (*(int *)pLong_1 == 0) {
          (**(func_ptr_t *)*local_58)(local_58);
          LOCK();
          pInt_2 = (int *)((int64_t)local_58 + 0xc);
          *pInt_2 = *pInt_2 + -1;
          UNLOCK();
          if (*pInt_2 == 0) {
            (**(func_ptr_t *)(*local_58 + 8))(local_58);
          }
        }
      }
    }
  }
  return;
}

// Unwind@1800d4e80
void Unwind_1800d4e80(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x28);
  return;
}

// func_0x1800d4ec0
void func_0x1800d4ec0(uint64_t param_1,int64_t param_2,int param_3)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_138 [32];
  int local_118;
  uint32_t local_110;
  uint32_t local_fc;
  int local_f8;
  int local_f4;
  uint8_t local_f0 [16];
  uint64_t local_e0;
  uint32_t local_c0;
  uint32_t local_38;
  int64_t local_30;
  int64_t local_28;
  int64_t local_20;
  int64_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_138;
  local_e0 = 0;
  local_c0 = 0;
  local_38 = 0;
  local_28 = param_3 + param_2;
  local_118 = 0;
  local_30 = param_2;
  local_20 = param_2;
  local_18 = local_28;
  uVal_2 = func_0x1800c2bf0(local_f0,&local_f4,&local_f8,&local_fc);
  local_110 = local_fc;
  local_118 = local_f8;
  func_0x1800d4fa0(param_1,uVal_2,(int64_t)(local_f8 * local_f4 * 4));
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_138)) {
    return;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_138);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800d4fa0
void func_0x1800d4fa0(char **param_1,int64_t param_2,uint64_t param_3,uint32_t param_4, uint32_t param_5,int param_6)
{
  int64_t *pLong_1;
  int *pInt_2;
  char *fnPtr_3;
  int64_t lVal_4;
  uint64_t uVal_5;
  uint64_t uVal_6;
  uint64_t local_f0;
  int64_t *local_e8;
  int local_e0;
  uint32_t local_dc;
  uint32_t local_d8;
  uint32_t local_d4;
  uint8_t local_d0;
  func_ptr_t local_c8;
  uint8_t local_c0 [16];
  func_ptr_t local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  uint32_t local_80 [2];
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_6 - 5U < 0xfffffffc) {
    return;
  }
  fnPtr_3 = param_1[2];
  if (&DAT_0000000f < param_1[3]) {
    param_1 = (char **)*param_1;
  }
  local_80[0] = 0;
  local_78 = ZEXT816(0);
  local_68 = ZEXT816(0);
  if ((int64_t)fnPtr_3 < 0) {
    func_0x18007ba70();
    goto LAB_1800d52cf;
  }
  if (&DAT_0000000f < fnPtr_3) {
    uVal_6 = (uint64_t)fnPtr_3 | 0xf;
    uVal_5 = 0x16;
    if (0x16 < uVal_6) {
      uVal_5 = uVal_6;
    }
    if (uVal_6 < 0xfff) {
      uVal_6 = func_0x180672de0(uVal_5 + 1);
    }
    else {
      lVal_4 = func_0x180672de0(uVal_5 + 0x28);
      uVal_6 = lVal_4 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_6 - 8) = lVal_4;
    }
    local_78._0_8_ = uVal_6;
    local_68._8_8_ = uVal_5;
    local_68._0_8_ = fnPtr_3;
    func_0x1806aa960(uVal_6,param_1);
    fnPtr_3[uVal_6] = '\0';
LAB_1800d50b1:
    uVal_5 = (uint64_t)((uint)fnPtr_3 & 7);
    if (fnPtr_3 + -1 < (char *)0x7) {
      local_58 = 0xcbf29ce484222325;
LAB_1800d516e:
      uVal_6 = 0;
      do {
        local_58 = local_58 * 0x100000001b3 ^ (int64_t)*(char *)((int64_t)param_1 + uVal_6);
        uVal_6 = uVal_6 + 1;
      } while (uVal_5 != uVal_6);
    }
    else {
      uVal_6 = (uint64_t)fnPtr_3 & 0x7ffffffffffffff8;
      local_58 = 0xcbf29ce484222325;
      do {
        local_58 = (((((((local_58 * 0x100000001b3 ^ (int64_t)*(char *)param_1) * 0x100000001b3 ^
                        (int64_t)*(char *)((int64_t)param_1 + 1)) * 0x100000001b3 ^
                       (int64_t)*(char *)((int64_t)param_1 + 2)) * 0x100000001b3 ^
                      (int64_t)*(char *)((int64_t)param_1 + 3)) * 0x100000001b3 ^
                     (int64_t)*(char *)((int64_t)param_1 + 4)) * 0x100000001b3 ^
                    (int64_t)*(char *)((int64_t)param_1 + 5)) * 0x100000001b3 ^
                   (int64_t)*(char *)((int64_t)param_1 + 6)) * 0x100000001b3 ^
                   (int64_t)*(char *)((int64_t)param_1 + 7);
        param_1 = param_1 + 1;
        uVal_6 = uVal_6 - 8;
      } while (uVal_6 != 0);
      if (uVal_5 != 0) goto LAB_1800d516e;
    }
    local_50 = ((uint64_t)(byte)local_80[0] ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_58;
  }
  else {
    local_68._8_8_ = 0xf;
    local_68._0_8_ = fnPtr_3;
    func_0x1806aa960(local_78,param_1);
    local_78[(int64_t)fnPtr_3] = 0;
    if (fnPtr_3 != (char *)0x0) goto LAB_1800d50b1;
    local_50 = 0xaf63bd4c8601b7df;
    local_58 = 0;
  }
  func_0x18011b920(DAT_180840a50,&local_f0);
  local_c8 = func_0x1800fe430;
  local_c0 = ZEXT816(0);
  local_e0 = param_6;
  local_d8 = param_5;
  local_d4 = 1;
  local_d0 = 1;
  local_b0 = func_0x1800fe430;
  local_dc = param_4;
  local_a8 = param_2;
  local_a0 = param_3;
  func_0x1800fd880(&local_c8,&local_b0);
  if (local_a8 != 0) {
    (*local_b0)();
  }
  func_0x1800fd7c0(&local_b0,&local_e0);
  func_0x180100a60(local_f0,local_80,&local_b0);
  if (local_a8 != 0) {
    (*local_b0)();
  }
  if (local_c0._0_8_ != 0) {
    (*local_c8)();
  }
  if (local_e8 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = local_e8 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*local_e8)(local_e8);
      LOCK();
      pInt_2 = (int *)((int64_t)local_e8 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_e8 + 8))(local_e8);
      }
    }
  }
  if (0xf < (uint64_t)local_68._8_8_) {
    uVal_5 = local_68._8_8_ + 1;
    lVal_4 = local_78._0_8_;
    if (0xfff < uVal_5) {
      lVal_4 = *(int64_t *)(local_78._0_8_ + -8);
      if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_4)) {
LAB_1800d52cf:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_5 = local_68._8_8_ + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_5);
  }
  return;
}

// Unwind@1800d52e0
void Unwind_1800d52e0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x70) != 0) {
    (**(func_ptr_t *)(param_2 + 0x68))();
  }
  return;
}

// Unwind@1800d5320
void Unwind_1800d5320(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x70) != 0) {
    (**(func_ptr_t *)(param_2 + 0x68))();
  }
  return;
}

// Unwind@1800d5360
void Unwind_1800d5360(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x58) != 0) {
    (**(func_ptr_t *)(param_2 + 0x50))();
  }
  func_0x18001deb0(param_2 + 0x28);
  return;
}

// Unwind@1800d53b0
void Unwind_1800d53b0(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x98);
  return;
}

// Unwind@1800d53f0
void Unwind_1800d53f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800d5420
void Unwind_1800d5420(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1800d5450
void Unwind_1800d5450(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800d5480
uint64_t func_0x1800d5480(uint param_1)
{
  if (DAT_18083e5d8 == DAT_18083e5e0) {
    func_0x1800d54d0();
  }
  if ((uint64_t)param_1 < (uint64_t)(DAT_18083e5e0 - DAT_18083e5d8 >> 3)) {
    return *(uint64_t *)(DAT_18083e5d8 + (uint64_t)param_1 * 8);
  }
  return 0;
}

// func_0x1800d54d0
void func_0x1800d54d0(void)
{
  int *pInt_1;
  uint64_t *_Str;
  int iVal_2;
  char ch_3;
  uint64_t *pU64_4;
  int iVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  int64_t *pLong_8;
  int64_t **ptr2_Long_9;
  uint64_t *pU64_10;
  size_t sz_11;
  int64_t **ptr2_Long_12;
  uint64_t *pU64_13;
  int64_t lVal_14;
  int64_t **ptr2_Long_15;
  uint64_t uVal_16;
  uint uVal_17;
  int64_t lVal_18;
  uint64_t *pU64_19;
  uint64_t *pU64_20;
  uint64_t uVal_21;
  int64_t *pLong_22;
  uint64_t *pU64_23;
  int64_t *pLong_24;
  bool bFlag_25;
  uint8_t local_a8 [16];
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  uint64_t local_78;
  uint16_t local_62;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (DAT_18083e5c0 == DAT_18083e5c8) {
    local_98 = (uint8_t  [8])&DAT_28d478d88fb3dcdf;
    DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
    if (DAT_180840a60 == 0) {
      DAT_180840a68 = 0;
    }
    uVal_6 = func_0x1801221f0(DAT_180840a60);
    func_0x180119350(uVal_6,local_98);
    pLong_24 = uStack_90;
    if (uStack_90 == (int64_t *)0x0) {
      lVal_18 = 0x50;
    }
    else {
      iVal_5 = *(int *)(uStack_90 + 1);
      do {
        if (iVal_5 == 0) {
          lVal_18 = 0x50;
          goto LAB_1800d55ea;
        }
        LOCK();
        iVal_2 = *(int *)(uStack_90 + 1);
        bFlag_25 = iVal_5 == iVal_2;
        if (bFlag_25) {
          *(int *)(uStack_90 + 1) = iVal_5 + 1;
          iVal_2 = iVal_5;
        }
        iVal_5 = iVal_2;
        UNLOCK();
      } while (!bFlag_25);
      lVal_18 = (int64_t)local_98 + 0x50;
      if (uStack_90 != (int64_t *)0x0) {
        LOCK();
        pLong_22 = uStack_90 + 1;
        *(int *)pLong_22 = *(int *)pLong_22 + -1;
        UNLOCK();
        if (*(int *)pLong_22 == 0) {
          (**(func_ptr_t *)*uStack_90)(uStack_90);
          LOCK();
          pInt_1 = (int *)((int64_t)pLong_24 + 0xc);
          *pInt_1 = *pInt_1 + -1;
          UNLOCK();
          if (*pInt_1 == 0) {
            (**(func_ptr_t *)(*pLong_24 + 8))(pLong_24);
          }
        }
LAB_1800d55ea:
        if (uStack_90 != (int64_t *)0x0) {
          LOCK();
          pInt_1 = (int *)((int64_t)uStack_90 + 0xc);
          *pInt_1 = *pInt_1 + -1;
          UNLOCK();
          if (*pInt_1 == 0) {
            (**(func_ptr_t *)(*uStack_90 + 8))();
          }
        }
      }
    }
    local_a8 = ZEXT816(0);
    lVal_7 = func_0x180672de0(0x48);
    *(int64_t *)lVal_7 = lVal_7;
    *(int64_t *)(lVal_7 + 8) = lVal_7;
    *(int64_t *)(lVal_7 + 0x10) = lVal_7;
    *(uint16_t *)(lVal_7 + 0x18) = 0x101;
    local_a8._0_8_ = lVal_7;
    pLong_24 = *(int64_t **)(lVal_18 + 8);
    pLong_22 = pLong_24;
    while (pLong_22 = (int64_t *)*pLong_22, pLong_22 != pLong_24) {
      if (((int64_t *)pLong_22[3] != (int64_t *)0x0) &&
         (lVal_18 = *(int64_t *)pLong_22[3], lVal_18 != 0)) {
        local_98 = (uint8_t  [8])0x186dcdd5bd60523a;
        pLong_8 = *(int64_t **)(lVal_18 + 0x178);
        if ((pLong_8 != (int64_t *)0x0) && (*pLong_8 != 0)) {
          if ((int64_t *)pLong_22[3] == (int64_t *)0x0) {
            lVal_18 = 0;
          }
          else {
            lVal_18 = *(int64_t *)pLong_22[3];
          }
          if (*(int64_t **)(lVal_18 + 0x178) == (int64_t *)0x0) {
            lVal_18 = 0;
            pLong_8 = (int64_t *)pLong_22[3];
            if (pLong_8 == (int64_t *)0x0) goto LAB_1800d5709;
LAB_1800d56f7:
            lVal_7 = *pLong_8;
          }
          else {
            lVal_18 = **(int64_t **)(lVal_18 + 0x178);
            pLong_8 = (int64_t *)pLong_22[3];
            if (pLong_8 != (int64_t *)0x0) goto LAB_1800d56f7;
LAB_1800d5709:
            lVal_7 = 0;
          }
          local_98 = (uint8_t  [8])0x186dcdd5bd60523a;
          local_62 = func_0x180127fe0(**(uint64_t **)(lVal_7 + 0x178));
          func_0x1800f30e0(local_a8,local_98,&local_62,lVal_18 + 0xe8);
        }
      }
    }
    if (*(char *)(local_a8._0_8_ + 0x19) == '\0') {
      ptr2_Long_15 = *(int64_t ***)local_a8._0_8_;
      if (*(char *)((int64_t)*(int64_t ***)local_a8._0_8_ + 0x19) == '\0') {
        do {
          ptr2_Long_12 = ptr2_Long_15 + 2;
          ptr2_Long_9 = ptr2_Long_15;
          ptr2_Long_15 = (int64_t **)*ptr2_Long_12;
        } while (*(char *)((int64_t)*ptr2_Long_12 + 0x19) == '\0');
      }
      else {
        ptr2_Long_9 = *(int64_t ***)(local_a8._0_8_ + 8);
        ptr2_Long_15 = (int64_t **)local_a8._0_8_;
        if (*(char *)((int64_t)ptr2_Long_9 + 0x19) == '\0') {
          do {
            ptr2_Long_12 = ptr2_Long_9;
            ptr2_Long_9 = ptr2_Long_12;
            if (ptr2_Long_15 != (int64_t **)*ptr2_Long_12) break;
            ptr2_Long_9 = (int64_t **)ptr2_Long_12[1];
            ptr2_Long_15 = ptr2_Long_12;
          } while (*(char *)((int64_t)ptr2_Long_9 + 0x19) == '\0');
          if (*(char *)((int64_t)ptr2_Long_15 + 0x19) != '\0') {
            ptr2_Long_9 = ptr2_Long_15;
          }
        }
      }
    }
    else {
      ptr2_Long_9 = *(int64_t ***)(local_a8._0_8_ + 0x10);
    }
    iVal_5 = *(int *)(ptr2_Long_9 + 4);
    func_0x1800f0fa0(&DAT_18083e5c0,(int64_t)iVal_5 + 1,local_98);
    lVal_18 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint64_t *)(lVal_18 + 0x3570);
    uVal_17 = 0;
    if (-1 < iVal_5) {
      do {
        while( true ) {
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3580)
              == '\0') {
            lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_7 + 0x3580) = 1;
            *(uint8_t *)(lVal_7 + 0x357e) = 1;
            *(uint64_t *)(lVal_7 + 0x3570) = 0xe7680b02ea2d30a0;
            *(uint32_t *)(lVal_7 + 0x3578) = 0xe62263b9;
            *(uint16_t *)(lVal_7 + 0x357c) = 0x7913;
            func_0x180673140(&LAB_1800f1510);
            ch_3 = *(char *)(lVal_18 + 0x357e);
          }
          else {
            ch_3 = *(char *)(lVal_18 + 0x357e);
          }
          if (ch_3 == '\x01') {
            *_Str = *_Str ^ 0x810979618f4359cd;
            *(uint *)(lVal_18 + 0x3578) = *(uint *)(lVal_18 + 0x3578) ^ 0x8f4359cd;
            *(byte *)(lVal_18 + 0x357c) = *(byte *)(lVal_18 + 0x357c) ^ 0x61;
            *(byte *)(lVal_18 + 0x357d) = *(byte *)(lVal_18 + 0x357d) ^ 0x79;
            *(uint8_t *)(lVal_18 + 0x357e) = 0;
          }
          _local_88 = ZEXT816(0);
          _local_98 = ZEXT816(0);
          sz_11 = strlen((char *)_Str);
          if ((int64_t)sz_11 < 0) goto LAB_1800d5cd6;
          uVal_16 = 0xf;
          pLong_24 = (int64_t *)local_98;
          if (0xf < sz_11) {
            uVal_21 = sz_11 | 0xf;
            uVal_16 = 0x16;
            if (0x16 < uVal_21) {
              uVal_16 = uVal_21;
            }
            if (uVal_21 < 0xfff) {
              pLong_24 = (int64_t *)func_0x180672de0(uVal_16 + 1);
            }
            else {
              lVal_7 = func_0x180672de0(uVal_16 + 0x28);
              pLong_24 = (int64_t *)(lVal_7 + 0x27U & 0xffffffffffffffe0);
              pLong_24[-1] = lVal_7;
            }
            local_98 = (uint8_t  [8])pLong_24;
          }
          uStack_80 = uVal_16;
          local_88 = (uint8_t  [8])sz_11;
          func_0x1806aa960(pLong_24,_Str,sz_11);
          *(uint8_t *)((int64_t)pLong_24 + sz_11) = 0;
          if ((uint64_t)(DAT_18083e5c8 - DAT_18083e5c0 >> 5) <= (uint64_t)uVal_17)
          goto LAB_1800d5cdc;
          pLong_24 = (int64_t *)(DAT_18083e5c0 + (uint64_t)uVal_17 * 0x20);
          if (pLong_24 == (int64_t *)local_98) break;
          uVal_16 = pLong_24[3];
          if (0xf < uVal_16) {
            lVal_7 = *pLong_24;
            uVal_21 = uVal_16 + 1;
            lVal_14 = lVal_7;
            if (0xfff < uVal_21) {
              lVal_14 = *(int64_t *)(lVal_7 + -8);
              if (0x1f < (uint64_t)((lVal_7 + -8) - lVal_14)) goto LAB_1800d5ce8;
              uVal_21 = uVal_16 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_14,uVal_21);
          }
          *(uint32_t *)(pLong_24 + 2) = local_88._0_4_;
          *(uint32_t *)((int64_t)pLong_24 + 0x14) = local_88._4_4_;
          *(uint32_t *)(pLong_24 + 3) = (uint32_t)uStack_80;
          *(uint32_t *)((int64_t)pLong_24 + 0x1c) = uStack_80._4_4_;
          *(uint32_t *)pLong_24 = local_98._0_4_;
          *(uint32_t *)((int64_t)pLong_24 + 4) = local_98._4_4_;
          *(uint32_t *)(pLong_24 + 1) = (uint32_t)uStack_90;
          *(uint32_t *)((int64_t)pLong_24 + 0xc) = uStack_90._4_4_;
          uVal_17 = uVal_17 + 1;
          if (iVal_5 < (int)uVal_17) goto LAB_1800d57be;
        }
        if (0xf < uStack_80) {
          uVal_16 = uStack_80 + 1;
          lVal_7 = (int64_t)local_98;
          if (0xfff < uVal_16) {
            lVal_7 = *(int64_t *)((int64_t)local_98 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_7)) goto LAB_1800d5ce8;
            uVal_16 = uStack_80 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_7,uVal_16);
        }
        uVal_17 = uVal_17 + 1;
      } while ((int)uVal_17 <= iVal_5);
    }
LAB_1800d57be:
    pU64_4 = (uint64_t *)local_a8._0_8_;
    pU64_10 = *(uint64_t **)local_a8._0_8_;
LAB_1800d57d0:
    if (pU64_10 != pU64_4) {
      if ((uint64_t)(DAT_18083e5c8 - DAT_18083e5c0 >> 5) <=
          (uint64_t)(int64_t)*(int *)(pU64_10 + 4)) goto LAB_1800d5ce2;
      pU64_13 = (uint64_t *)(DAT_18083e5c0 + (int64_t)*(int *)(pU64_10 + 4) * 0x20);
      pU64_20 = pU64_10 + 5;
      pU64_23 = pU64_10;
      if (pU64_13 == pU64_20) {
LAB_1800d582f:
        pU64_20 = (uint64_t *)pU64_10[2];
        if (*(char *)((int64_t)(uint64_t *)pU64_10[2] + 0x19) == '\0') goto LAB_1800d58a0;
LAB_1800d5870:
        do {
          pU64_10 = (uint64_t *)pU64_23[1];
          if (*(char *)((int64_t)pU64_10 + 0x19) != '\0') break;
          bFlag_25 = pU64_23 == (uint64_t *)pU64_10[2];
          pU64_23 = pU64_10;
        } while (bFlag_25);
      }
      else {
        if (0xf < (uint64_t)pU64_10[8]) {
          pU64_20 = (uint64_t *)pU64_10[5];
        }
        uVal_16 = pU64_10[7];
        if ((uint64_t)pU64_13[3] < uVal_16) {
          func_0x18007bba0(pU64_13,uVal_16);
          goto LAB_1800d582f;
        }
        pU64_19 = pU64_13;
        if (0xf < (uint64_t)pU64_13[3]) {
          pU64_19 = (uint64_t *)*pU64_13;
        }
        pU64_13[2] = uVal_16;
        func_0x1806aa960(pU64_19,pU64_20,uVal_16);
        *(uint8_t *)((int64_t)pU64_19 + uVal_16) = 0;
        pU64_20 = (uint64_t *)pU64_10[2];
        if (*(char *)((int64_t)(uint64_t *)pU64_10[2] + 0x19) != '\0') goto LAB_1800d5870;
LAB_1800d58a0:
        do {
          pU64_10 = pU64_20;
          pU64_20 = (uint64_t *)*pU64_10;
        } while (*(char *)((int64_t)(uint64_t *)*pU64_10 + 0x19) == '\0');
      }
      goto LAB_1800d57d0;
    }
    func_0x1800f1540(local_a8,local_a8,*(uint64_t *)(local_a8._0_8_ + 8));
    thunk_FUN_180695dd0(local_a8._0_8_,0x48);
  }
  if (DAT_18083e5d8 != DAT_18083e5e0) {
    DAT_18083e5e0 = DAT_18083e5d8;
  }
  uVal_16 = DAT_18083e5c8 - DAT_18083e5c0 >> 5;
  uVal_21 = DAT_18083e5e0 - DAT_18083e5d8 >> 3;
  lVal_18 = uVal_16 - uVal_21;
  if (uVal_21 <= uVal_16) {
    if (uVal_21 <= uVal_16 && lVal_18 != 0) {
      if ((uint64_t)(DAT_18083e5e8 - DAT_18083e5d8 >> 3) < uVal_16) {
        func_0x18007bf80(&DAT_18083e5d8,uVal_16,local_98);
      }
      else {
        lVal_7 = DAT_18083e5e0 + lVal_18 * 8;
        func_0x1806ab010(DAT_18083e5e0,0,lVal_18 * 8);
        DAT_18083e5e0 = lVal_7;
      }
    }
  }
  else {
    DAT_18083e5e0 = DAT_18083e5d8 + uVal_16 * 8;
  }
  func_0x1806ab010(DAT_18083e5d8,0,DAT_18083e5e0 - DAT_18083e5d8);
  uVal_17 = 1;
  while( true ) {
    uVal_16 = (uint64_t)uVal_17;
    if ((uint64_t)(DAT_18083e5c8 - DAT_18083e5c0 >> 5) <= uVal_16) {
      return;
    }
    func_0x180034bf0(local_98,DAT_18083e5c0 + uVal_16 * 0x20);
    uVal_6 = func_0x180129830(local_98);
    if ((uint64_t)(DAT_18083e5e0 - DAT_18083e5d8 >> 3) <= uVal_16) break;
    *(uint64_t *)(DAT_18083e5d8 + uVal_16 * 8) = uVal_6;
    if (0xf < local_78) {
      uVal_16 = local_78 + 1;
      lVal_18 = (int64_t)uStack_90;
      if (0xfff < uVal_16) {
        lVal_18 = *(int64_t *)((int64_t)uStack_90 + -8);
        if (0x1f < (uint64_t)(((int64_t)uStack_90 + -8) - lVal_18)) goto LAB_1800d5ce8;
        uVal_16 = local_78 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_18,uVal_16);
    }
    uVal_17 = uVal_17 + 1;
  }
  func_0x18007f460();
LAB_1800d5cd6:
  func_0x18007ba70();
LAB_1800d5cdc:
  func_0x18007f460();
LAB_1800d5ce2:
  func_0x18007f460();
LAB_1800d5ce8:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800d5cf0
void Unwind_1800d5cf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1800d5d30
void Unwind_1800d5d30(uint64_t param_1,int64_t param_2)
{
  func_0x1800d5db0(param_2 + 0x20);
  return;
}

// Unwind@1800d5d70
void Unwind_1800d5d70(uint64_t param_1,int64_t param_2)
{
  func_0x180034df0(param_2 + 0x30);
  return;
}

// func_0x1800d5db0
void func_0x1800d5db0(int64_t *param_1)
{
  func_0x1800f1540(param_1,param_1,*(uint64_t *)(*param_1 + 8));
  thunk_FUN_180695dd0(*param_1,0x48);
  return;
}

// func_0x1800d5de0
void func_0x1800d5de0(void)
{
  if (DAT_18083e5d8 != DAT_18083e5e0) {
    DAT_18083e5e0 = DAT_18083e5d8;
  }
  return;
}

// func_0x1800d5e00
uint64_t * func_0x1800d5e00(uint64_t *param_1,uint64_t *param_2,uint32_t param_3)
{
  uint64_t uVal_1;
  uint64_t *pU64_2;
  uint64_t uVal_3;
  
  uVal_3 = 0xfffffffffffffffe;
  *param_1 = 0;
  uVal_1 = func_0x180673ba0(1);
  pU64_2 = param_1 + 3;
  param_1[4] = uVal_1;
  uVal_1 = func_0x1800f3950(pU64_2);
  param_1[1] = uVal_1;
  uVal_1 = func_0x180096a50(pU64_2);
  param_1[2] = uVal_1;
  pU64_2 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    pU64_2 = (uint64_t *)*param_2;
  }
  func_0x1800f3760(param_1,pU64_2,param_2[2] + (int64_t)pU64_2,param_3,param_1,uVal_3);
  return param_1;
}

// Unwind@1800d5e90
void Unwind_1800d5e90(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x20) + 0x20);
  if (pLong_1 != (int64_t *)0x0) {
    pU64_2 = (uint64_t *)(**(func_ptr_t *)(*pLong_1 + 0x10))();
    if (pU64_2 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_2)(pU64_2,1);
    }
  }
  return;
}

// Unwind@1800d5ee0
void Unwind_1800d5ee0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  uint64_t *pU64_2;
  
  pLong_1 = *(int64_t **)(*(int64_t *)(param_2 + 0x20) + 0x20);
  if (pLong_1 != (int64_t *)0x0) {
    pU64_2 = (uint64_t *)(**(func_ptr_t *)(*pLong_1 + 0x10))();
    if (pU64_2 != (uint64_t *)0x0) {
      (**(func_ptr_t *)*pU64_2)(pU64_2,1);
    }
  }
  return;
}

// Unwind@1800d5f30
void Unwind_1800d5f30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800d5f50
void func_0x1800d5f50(int64_t *param_1)
{
  int *pInt_1;
  uint64_t *pU64_2;
  uint64_t *pU64_3;
  
  if (*param_1 != 0) {
    LOCK();
    pInt_1 = (int *)(*param_1 + 0x2c);
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    pU64_3 = (uint64_t *)*param_1;
    if (pU64_3 != (uint64_t *)0x0 && *pInt_1 == 0) {
      do {
        pU64_2 = (uint64_t *)pU64_3[2];
        pU64_3[2] = 0;
        (**(func_ptr_t *)*pU64_3)(pU64_3,1);
        pU64_3 = pU64_2;
      } while (pU64_2 != (uint64_t *)0x0);
    }
  }
  *param_1 = 0;
  if (((int64_t *)param_1[4] != (int64_t *)0x0) &&
     (pU64_3 = (uint64_t *)(**(func_ptr_t *)(*(int64_t *)param_1[4] + 0x10))(),
     pU64_3 != (uint64_t *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001800d5fcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(func_ptr_t *)*pU64_3)(pU64_3,1,*(func_ptr_t *)*pU64_3);
    return;
  }
  return;
}

// func_0x1800d5fe0
uint8_t (*func_0x1800d5fe0(uint64_t *param_1,uint8_t (*param_2)[16],uint64_t param_3,uint64_t param_4))[16]
{
  uint64_t *pU64_1;
  func_ptr_t fnPtr_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint64_t uVal_6;
  uint8_t (*pArr16_7)[16];
  
  *param_2 = ZEXT816(0);
  uVal_3 = param_1[2] - param_3;
  if ((uint64_t)param_1[2] < param_3) {
    func_0x1800801d0();
  }
  else {
    if (uVal_3 < param_4) {
      param_4 = uVal_3;
    }
    if (-1 < (int64_t)param_4) {
      pU64_1 = (uint64_t *)*param_1;
      uVal_3 = param_1[3];
      uVal_6 = 0xf;
      pArr16_7 = param_2;
      if (0xf < param_4) {
        uVal_4 = param_4 | 0xf;
        uVal_6 = 0x16;
        if (0x16 < uVal_4) {
          uVal_6 = uVal_4;
        }
        if (uVal_4 < 0xfff) {
          pArr16_7 = (uint8_t (*)[16])func_0x180672de0(uVal_6 + 1);
        }
        else {
          lVal_5 = func_0x180672de0(uVal_6 + 0x28);
          pArr16_7 = (uint8_t (*)[16])(lVal_5 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pArr16_7[-1] + 8) = lVal_5;
        }
        *(uint8_t (**)[16])*param_2 = pArr16_7;
      }
      if (0xf < uVal_3) {
        param_1 = pU64_1;
      }
      *(uint64_t *)param_2[1] = param_4;
      *(uint64_t *)(param_2[1] + 8) = uVal_6;
      func_0x1806aa960(pArr16_7,(int64_t)param_1 + param_3,param_4);
      (*pArr16_7)[param_4] = 0;
      return param_2;
    }
  }
  func_0x18007ba70();
  fnPtr_2 = (func_ptr_t )swi(3);
  pArr16_7 = (uint8_t (*)[16])(*fnPtr_2)();
  return pArr16_7;
}

// func_0x1800d60c0
uint64_t func_0x1800d60c0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint8_t (*pArr16_4)[16];
  uint8_t (*local_90)[16];
  uint64_t local_80;
  uint64_t local_78;
  uint8_t **local_70;
  uint64_t local_68;
  uint8_t local_60 [16];
  uint8_t local_50 [16];
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  func_0x1800c0060((uint8_t (*)[16])&local_90);
  local_68 = 0;
  local_70 = &PTR_LAB_1806b4030;
  local_60 = ZEXT816(0);
  local_50 = ZEXT816(0);
  pArr16_4 = (uint8_t (*)[16])&local_90;
  if (0xf < local_78) {
    pArr16_4 = local_90;
  }
  if (-1 < (int64_t)local_80) {
    if (local_80 < 0x10) {
      local_50._8_8_ = 0xf;
      local_60 = *pArr16_4;
    }
    else {
      uVal_1 = local_80 | 0xf;
      uVal_3 = 0x16;
      if (0x16 < uVal_1) {
        uVal_3 = uVal_1;
      }
      if (uVal_1 < 0xfff) {
        uVal_1 = func_0x180672de0(uVal_3 + 1);
      }
      else {
        lVal_2 = func_0x180672de0(uVal_3 + 0x28);
        uVal_1 = lVal_2 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_1 - 8) = lVal_2;
      }
      local_60._0_8_ = uVal_1;
      local_50._8_8_ = uVal_3;
      func_0x1806aa960(uVal_1,pArr16_4,local_80 + 1);
    }
    func_0x1800d62e0(param_1,&local_70,0,param_3);
    local_70 = &PTR_LAB_1806b4030;
    if (0xf < (uint64_t)local_50._8_8_) {
      uVal_3 = local_50._8_8_ + 1;
      lVal_2 = local_60._0_8_;
      if (0xfff < uVal_3) {
        lVal_2 = *(int64_t *)(local_60._0_8_ + -8);
        if (0x1f < (uint64_t)((local_60._0_8_ + -8) - lVal_2)) goto LAB_1800d6251;
        uVal_3 = local_50._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_2,uVal_3);
    }
    if (0xf < local_78) {
      uVal_3 = local_78 + 1;
      pArr16_4 = local_90;
      if (0xfff < uVal_3) {
        pArr16_4 = *(uint8_t (**)[16])(local_90[-1] + 8);
        if (0x1f < (uint64_t)((int64_t)local_90 + (-8 - (int64_t)pArr16_4))) goto LAB_1800d6251;
        uVal_3 = local_78 + 0x28;
      }
      thunk_FUN_180695dd0(pArr16_4,uVal_3);
    }
    return param_1;
  }
  func_0x18007ba70();
LAB_1800d6251:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1800d6260
void Unwind_1800d6260(uint64_t param_1,int64_t param_2)
{
  func_0x1800d64b0(param_2 + 0x48);
  return;
}

// Unwind@1800d62a0
void Unwind_1800d62a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x1800d62e0
uint8_t (*func_0x1800d62e0(uint8_t (*param_1)[16],int64_t *param_2,uint32_t param_3,uint64_t *param_4))[16]
{
  size_t _Size;
  uint32_t uVal_1;
  int iVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint64_t local_78;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58 [12];
  uint32_t uStack_4c;
  size_t local_48;
  uint64_t uStack_40;
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = param_1;
  uVal_1 = (**(func_ptr_t *)(*param_2 + 8))(param_2);
  _local_58 = ZEXT816(0);
  local_48 = 0;
  uStack_40 = 0xf;
  if ((char)uVal_1 != '\0') {
    (**(func_ptr_t *)(*param_2 + 0x38))(param_2,&local_78);
    if (0xf < uStack_40) {
      uVal_3 = uStack_40 + 1;
      lVal_4 = local_58._0_8_;
      if (0xfff < uVal_3) {
        lVal_4 = *(int64_t *)(local_58._0_8_ + -8);
        if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_4)) goto LAB_1800d6442;
        uVal_3 = uStack_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_4,uVal_3);
    }
    local_48 = CONCAT44(uStack_64,local_68);
    uStack_40 = CONCAT44(uStack_5c,uStack_60);
    local_58._8_4_ = uStack_70;
    local_58._0_8_ = local_78;
    uStack_4c = uStack_6c;
  }
  _Size = param_4[2];
  if (_Size == 0) goto LAB_1800d63d4;
  if (_Size == local_48) {
    if (0xf < (uint64_t)param_4[3]) {
      param_4 = (uint64_t *)*param_4;
    }
    if (uStack_40 < 0x10) {
      iVal_2 = memcmp(param_4,local_58,_Size);
      if (iVal_2 == 0) goto LAB_1800d63d4;
      goto LAB_1800d63b8;
    }
    iVal_2 = memcmp(param_4,(void *)local_58._0_8_,_Size);
    if (iVal_2 != 0) goto LAB_1800d63b8;
LAB_1800d63d4:
    local_78 = func_0x1800d6680(param_2,uVal_1,param_3);
    func_0x1800d6520(local_38,local_58,&local_78);
  }
  else {
LAB_1800d63b8:
    *local_38 = ZEXT816(0);
  }
  if (0xf < uStack_40) {
    uVal_3 = uStack_40 + 1;
    lVal_4 = local_58._0_8_;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(local_58._0_8_ + -8);
      if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_4)) {
LAB_1800d6442:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uStack_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  return local_38;
}

// Unwind@1800d6450
void Unwind_1800d6450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Catch@1800d6480
uint64_t Catch_1800d6480(uint64_t param_1,int64_t param_2)
{
  **(uint8_t (**)[16])(param_2 + 0x60) = ZEXT816(0);
  return 0x1800d6433;
}

// func_0x1800d64b0
void func_0x1800d64b0(uint64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  *param_1 = &PTR_LAB_1806b4030;
  uVal_1 = param_1[5];
  if (0xf < uVal_1) {
    lVal_2 = param_1[2];
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
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(uint8_t *)(param_1 + 2) = 0;
  return;
}

// func_0x1800d6520
uint64_t * func_0x1800d6520(uint64_t *param_1,uint64_t **param_2,uint64_t *param_3,uint64_t param_4)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint64_t *pU64_4;
  uint64_t uVal_5;
  uint64_t *pU64_6;
  uint64_t *pU64_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  
  uVal_9 = 0xfffffffffffffffe;
  pU64_4 = (uint64_t *)func_0x180672de0(0x38);
  pU64_4[1] = 0x100000001;
  *pU64_4 = &PTR_LAB_1806b4500;
  pU64_1 = param_2[2];
  if (&DAT_0000000f < param_2[3]) {
    param_2 = (uint64_t **)*param_2;
  }
  if (-1 < (int64_t)pU64_1) {
    uVal_2 = *param_3;
    if (&DAT_0000000f < pU64_1) {
      uVal_5 = (uint64_t)pU64_1 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_7 = (uint64_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        uVal_5 = func_0x180672de0(uVal_8 + 0x28);
        pU64_7 = (uint64_t *)(uVal_5 + 0x27 & 0xffffffffffffffe0);
        pU64_7[-1] = uVal_5;
      }
      func_0x1806aa960(pU64_7,param_2,(uint8_t *)((int64_t)pU64_1 + 1),param_4,pU64_4,uVal_9);
      pU64_6 = (uint64_t *)0x0;
    }
    else {
      pU64_7 = *param_2;
      pU64_6 = param_2[1];
      uVal_8 = 0xf;
    }
    pU64_4[2] = pU64_7;
    pU64_4[3] = pU64_6;
    pU64_4[4] = pU64_1;
    pU64_4[5] = uVal_8;
    pU64_4[6] = uVal_2;
    *param_1 = pU64_4 + 2;
    param_1[1] = pU64_4;
    return param_1;
  }
  func_0x18007ba70();
  fnPtr_3 = (func_ptr_t )swi(3);
  pU64_4 = (uint64_t *)(*fnPtr_3)();
  return pU64_4;
}

// Unwind@1800d6640
void Unwind_1800d6640(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x20),0x38);
  return;
}

// func_0x1800d6680
uint64_t * func_0x1800d6680(int64_t *param_1,uint8_t param_2,int param_3)
{
  uint8_t uVal_1;
  char ch_2;
  uint16_t uVal_3;
  uint32_t uVal_4;
  uint uVal_5;
  int iVal_6;
  uint64_t uVal_7;
  uint64_t *pU64_8;
  int64_t lVal_9;
  int64_t *pLong_10;
  uint64_t uVal_11;
  uint32_t local_d0;
  uint32_t uStack_cc;
  uint32_t uStack_c8;
  uint32_t uStack_c4;
  uint32_t local_c0;
  uint32_t uStack_bc;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  uint32_t local_b0;
  uint32_t uStack_ac;
  uint32_t uStack_a8;
  uint32_t uStack_a4;
  uint32_t local_a0;
  uint32_t uStack_9c;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint64_t local_90;
  uint8_t local_88 [8];
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint64_t local_78;
  uint64_t uStack_70;
  uint64_t *local_68;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  switch(param_2) {
  case 0:
    if (param_3 != 0) {
      pU64_8 = (uint64_t *)func_0x180672de0(0x10);
      *(uint8_t *)(pU64_8 + 1) = 0;
      *pU64_8 = &PTR_FUN_1806b4088;
      return pU64_8;
    }
  default:
    local_68 = (uint64_t *)0x0;
    break;
  case 1:
    local_68 = (uint64_t *)func_0x180672de0(0x18);
    uVal_1 = (**(func_ptr_t *)(*param_1 + 8))(param_1);
    *(uint8_t *)(local_68 + 1) = 1;
    *local_68 = &PTR_FUN_1806b4098;
    *(uint8_t *)(local_68 + 2) = uVal_1;
    break;
  case 2:
    local_68 = (uint64_t *)func_0x180672de0(0x18);
    uVal_3 = (**(func_ptr_t *)(*param_1 + 0x10))(param_1);
    *(uint8_t *)(local_68 + 1) = 2;
    *local_68 = &PTR_FUN_1806b40a8;
    *(uint16_t *)(local_68 + 2) = uVal_3;
    break;
  case 3:
    local_68 = (uint64_t *)func_0x180672de0(0x18);
    uVal_4 = (**(func_ptr_t *)(*param_1 + 0x18))(param_1);
    *(uint8_t *)(local_68 + 1) = 3;
    *local_68 = &PTR_FUN_1806b40b8;
    *(uint32_t *)(local_68 + 2) = uVal_4;
    break;
  case 4:
    local_68 = (uint64_t *)func_0x180672de0(0x18);
    uVal_7 = (**(func_ptr_t *)(*param_1 + 0x20))(param_1);
    *(uint8_t *)(local_68 + 1) = 4;
    *local_68 = &PTR_FUN_1806b40c8;
    local_68[2] = uVal_7;
    break;
  case 5:
    local_68 = (uint64_t *)func_0x180672de0(0x18);
    uVal_4 = (**(func_ptr_t *)(*param_1 + 0x28))(param_1);
    *(uint8_t *)(local_68 + 1) = 5;
    *local_68 = &PTR_FUN_1806b40d8;
    *(uint32_t *)(local_68 + 2) = uVal_4;
    break;
  case 6:
    local_68 = (uint64_t *)func_0x180672de0(0x18);
    uVal_7 = (**(func_ptr_t *)(*param_1 + 0x30))(param_1);
    *(uint8_t *)(local_68 + 1) = 6;
    *local_68 = &PTR_FUN_1806b40e8;
    local_68[2] = uVal_7;
    break;
  case 7:
    iVal_6 = (**(func_ptr_t *)(*param_1 + 0x18))(param_1);
    local_68 = (uint64_t *)func_0x180672de0(0x28);
    *(uint8_t *)(local_68 + 1) = 7;
    *local_68 = &PTR_LAB_1806b40f8;
    *(uint8_t (*)[16])(local_68 + 2) = ZEXT816(0);
    local_68[4] = 0;
    if (iVal_6 != 0) {
      func_0x1800f17a0(local_68 + 2,iVal_6,local_88);
      (**(func_ptr_t *)*param_1)(param_1,local_68[2],iVal_6,0);
    }
    break;
  case 8:
    local_68 = (uint64_t *)func_0x180672de0(0x30);
    (**(func_ptr_t *)(*param_1 + 0x38))(param_1,&local_d0);
    *(uint8_t *)(local_68 + 1) = 8;
    *local_68 = &PTR_LAB_1806b4108;
    *(uint32_t *)(local_68 + 2) = local_d0;
    *(uint32_t *)((int64_t)local_68 + 0x14) = uStack_cc;
    *(uint32_t *)(local_68 + 3) = uStack_c8;
    *(uint32_t *)((int64_t)local_68 + 0x1c) = uStack_c4;
    *(uint32_t *)(local_68 + 4) = local_c0;
    *(uint32_t *)((int64_t)local_68 + 0x24) = uStack_bc;
    *(uint32_t *)(local_68 + 5) = uStack_b8;
    *(uint32_t *)((int64_t)local_68 + 0x2c) = uStack_b4;
    break;
  case 9:
    uVal_4 = (**(func_ptr_t *)(*param_1 + 8))(param_1);
    uVal_5 = (**(func_ptr_t *)(*param_1 + 0x18))(param_1);
    pU64_8 = (uint64_t *)func_0x180672de0(0x30);
    *(uint8_t *)(pU64_8 + 1) = 9;
    *pU64_8 = &PTR_LAB_1806b4118;
    *(uint8_t (*)[16])(pU64_8 + 2) = ZEXT816(0);
    *(uint8_t (*)[16])((int64_t)pU64_8 + 0x19) = ZEXT816(0);
    if (uVal_5 != 0) {
      func_0x18007bf80(pU64_8 + 2,(uint64_t)uVal_5,local_88);
      uVal_11 = 0;
      do {
        uVal_7 = func_0x1800d6680(param_1,uVal_4,param_3 + 1);
        *(uint64_t *)(pU64_8[2] + uVal_11 * 8) = uVal_7;
        uVal_11 = uVal_11 + 1;
      } while (uVal_5 != uVal_11);
    }
    *(char *)(pU64_8 + 5) = (char)uVal_4;
    local_68 = pU64_8;
    break;
  case 10:
    local_68 = (uint64_t *)func_0x180672de0(0x20);
    *(uint8_t *)(local_68 + 1) = 10;
    *local_68 = &PTR_LAB_1806b4128;
    *(uint8_t (*)[16])(local_68 + 2) = ZEXT816(0);
    lVal_9 = func_0x180672de0(0x48);
    pLong_10 = local_68 + 2;
    *(int64_t *)lVal_9 = lVal_9;
    *(int64_t *)(lVal_9 + 8) = lVal_9;
    *(int64_t *)(lVal_9 + 0x10) = lVal_9;
    *(uint16_t *)(lVal_9 + 0x18) = 0x101;
    *pLong_10 = lVal_9;
    do {
      uVal_4 = (**(func_ptr_t *)(*param_1 + 8))(param_1);
      _local_88 = ZEXT816(0);
      local_78 = 0;
      uStack_70 = 0xf;
      if ((char)uVal_4 != '\0') {
        (**(func_ptr_t *)(*param_1 + 0x38))(param_1,&local_b0);
        if (0xf < uStack_70) {
          uVal_11 = uStack_70 + 1;
          lVal_9 = (int64_t)local_88;
          if (0xfff < uVal_11) {
            lVal_9 = *(int64_t *)((int64_t)local_88 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_9)) {
LAB_1800d6b85:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_11 = uStack_70 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_11);
        }
        local_78 = CONCAT44(uStack_9c,local_a0);
        uStack_70 = CONCAT44(uStack_94,uStack_98);
        local_88._4_4_ = uStack_ac;
        local_88._0_4_ = local_b0;
        uStack_80 = uStack_a8;
        uStack_7c = uStack_a4;
      }
      local_90 = func_0x1800d6680(param_1,uVal_4,param_3 + 1);
      ch_2 = func_0x180001050(local_90);
      if (ch_2 != '\0') {
        func_0x1800fc900(pLong_10,&local_b0,local_88,&local_90);
      }
      if (0xf < uStack_70) {
        uVal_11 = uStack_70 + 1;
        lVal_9 = (int64_t)local_88;
        if (0xfff < uVal_11) {
          lVal_9 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_9)) goto LAB_1800d6b85;
          uVal_11 = uStack_70 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_9,uVal_11);
      }
    } while (ch_2 != '\0');
    break;
  case 0xb:
    uVal_5 = (**(func_ptr_t *)(*param_1 + 0x18))(param_1);
    local_68 = (uint64_t *)func_0x180672de0(0x28);
    *(uint8_t *)(local_68 + 1) = 0xb;
    *local_68 = &PTR_LAB_1806b4138;
    *(uint8_t (*)[16])(local_68 + 2) = ZEXT816(0);
    local_68[4] = 0;
    if (uVal_5 != 0) {
      func_0x1800f1b00(local_68 + 2,(uint64_t)uVal_5,local_88);
      uVal_11 = 0;
      do {
        uVal_4 = (**(func_ptr_t *)(*param_1 + 0x18))(param_1);
        *(uint32_t *)(local_68[2] + uVal_11 * 4) = uVal_4;
        uVal_11 = uVal_11 + 1;
      } while (uVal_5 != uVal_11);
    }
    break;
  case 0xc:
    uVal_5 = (**(func_ptr_t *)(*param_1 + 0x18))(param_1);
    local_68 = (uint64_t *)func_0x180672de0(0x28);
    *(uint8_t *)(local_68 + 1) = 0xc;
    *local_68 = &PTR_LAB_1806b4148;
    *(uint8_t (*)[16])(local_68 + 2) = ZEXT816(0);
    local_68[4] = 0;
    if (uVal_5 != 0) {
      func_0x18007bf80(local_68 + 2,(uint64_t)uVal_5,local_88);
      uVal_11 = 0;
      do {
        uVal_7 = (**(func_ptr_t *)(*param_1 + 0x20))(param_1);
        *(uint64_t *)(local_68[2] + uVal_11 * 8) = uVal_7;
        uVal_11 = uVal_11 + 1;
      } while (uVal_5 != uVal_11);
    }
  }
  return local_68;
}

// Unwind@1800d6bf0
void Unwind_1800d6bf0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0x30);
  return;
}

// Unwind@1800d6c40
void Unwind_1800d6c40(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0x20);
  return;
}

// Unwind@1800d6c90
void Unwind_1800d6c90(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0x18);
  return;
}

// Unwind@1800d6ce0
void Unwind_1800d6ce0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0x18);
  return;
}

// Unwind@1800d6d30
void Unwind_1800d6d30(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0x18);
  return;
}

// Unwind@1800d6d80
void Unwind_1800d6d80(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0x18);
  return;
}

// Unwind@1800d6dd0
void Unwind_1800d6dd0(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0x18);
  return;
}

// Unwind@1800d6e20
void Unwind_1800d6e20(uint64_t param_1,int64_t param_2)
{
  thunk_FUN_180695dd0(*(uint64_t *)(param_2 + 0x90),0x18);
  return;
}

// Unwind@1800d6e70
void Unwind_1800d6e70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@1800d70c0
void Unwind_1800d70c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1800d7100
void Unwind_1800d7100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  return;
}

// func_0x1800d7140
uint8_t (*func_0x1800d7140(uint8_t (*param_1)[16],byte param_2))[16]
{
  func_ptr_t fnPtr_1;
  byte bFlag_2;
  uint uVal_3;
  uint uVal_4;
  uint64_t uVal_5;
  uint8_t (*pArr16_6)[16];
  int64_t lVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint16_t auStack_25 [2];
  
  uVal_3 = param_2 | 1;
  uVal_4 = 0x1f;
  if (uVal_3 != 0) {
    for (; uVal_3 >> uVal_4 == 0; uVal_4 = uVal_4 - 1) {
    }
  }
  lVal_7 = *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_4 * 8) + (uint64_t)param_2;
  uVal_8 = lVal_7 >> 0x20;
  uVal_4 = (uint)((uint64_t)lVal_7 >> 0x20);
  if (param_2 < 100) {
    uVal_3 = uVal_4;
    if (9 < param_2) {
      *(uint16_t *)((int64_t)auStack_25 + (uint64_t)(uVal_4 - 2)) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)param_2 * 2);
      goto LAB_1800d71c7;
    }
  }
  else {
    bFlag_2 = (byte)((uint)param_2 * 0x29 >> 0xc);
    *(uint16_t *)((int64_t)auStack_25 + (uint64_t)(uVal_4 - 2)) =
         *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(byte)(param_2 + bFlag_2 * -100) * 2);
    uVal_3 = uVal_4 - 2;
    param_2 = bFlag_2;
  }
  *(byte *)((int64_t)auStack_25 + (uint64_t)(uVal_3 - 1)) = param_2 | 0x30;
LAB_1800d71c7:
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  if (uVal_8 == 0) {
    *(uint64_t *)(param_1[1] + 8) = 0xf;
  }
  else {
    if ((int64_t)uVal_8 < 0) {
      func_0x18007ba70();
      fnPtr_1 = (func_ptr_t )swi(3);
      pArr16_6 = (uint8_t (*)[16])(*fnPtr_1)();
      return pArr16_6;
    }
    uVal_9 = 0xf;
    pArr16_6 = param_1;
    if (0xf < uVal_4) {
      uVal_5 = uVal_8 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_5) {
        uVal_9 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pArr16_6 = (uint8_t (*)[16])func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_9 + 0x28);
        pArr16_6 = (uint8_t (*)[16])(lVal_7 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_6[-1] + 8) = lVal_7;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_6;
    }
    *(uint64_t *)param_1[1] = uVal_8;
    *(uint64_t *)(param_1[1] + 8) = uVal_9;
    func_0x1806aa960(pArr16_6,auStack_25,uVal_8);
    (*pArr16_6)[uVal_8] = 0;
  }
  return param_1;
}

// func_0x1800d7280
uint8_t (*func_0x1800d7280(uint8_t (*param_1)[16],byte param_2))[16]
{
  func_ptr_t fnPtr_1;
  uint uVal_2;
  uint64_t uVal_3;
  byte bFlag_4;
  uint8_t *pU64_5;
  uint8_t (*pArr16_6)[16];
  int64_t lVal_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  uint8_t uStack_25;
  uint8_t auStack_24 [4];
  
  bFlag_4 = (param_2 ^ (char)param_2 >> 7) - ((char)param_2 >> 7);
  uVal_2 = 0x1f;
  if ((bFlag_4 | 1) != 0) {
    for (; (bFlag_4 | 1) >> uVal_2 == 0; uVal_2 = uVal_2 - 1) {
    }
  }
  lVal_7 = *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_2 * 8) + (uint64_t)bFlag_4;
  uVal_2 = (uint)((uint64_t)lVal_7 >> 0x20);
  if ((char)param_2 < '\0') {
    pU64_5 = auStack_24;
    uStack_25 = 0x2d;
    if (bFlag_4 < 100) goto LAB_1800d7309;
LAB_1800d72d9:
    uVal_2 = uVal_2 - 2;
    *(uint16_t *)(pU64_5 + uVal_2) = *(uint16_t *)(&DAT_1806afa88 + (uint64_t)bFlag_4 * 2);
    bFlag_4 = 1;
  }
  else {
    pU64_5 = &uStack_25;
    if (99 < bFlag_4) goto LAB_1800d72d9;
LAB_1800d7309:
    if (9 < bFlag_4) {
      *(uint16_t *)(pU64_5 + (uVal_2 - 2)) = *(uint16_t *)(&DAT_1806afb50 + (uint64_t)bFlag_4 * 2)
      ;
      goto LAB_1800d732e;
    }
  }
  pU64_5[uVal_2 - 1] = bFlag_4 | 0x30;
LAB_1800d732e:
  uVal_8 = (lVal_7 >> 0x20) + (uint64_t)(param_2 >> 7);
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  if (uVal_8 == 0) {
    *(uint64_t *)(param_1[1] + 8) = 0xf;
  }
  else {
    if ((int64_t)uVal_8 < 0) {
      func_0x18007ba70();
      fnPtr_1 = (func_ptr_t )swi(3);
      pArr16_6 = (uint8_t (*)[16])(*fnPtr_1)();
      return pArr16_6;
    }
    uVal_9 = 0xf;
    pArr16_6 = param_1;
    if (0xf < uVal_8) {
      uVal_3 = uVal_8 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_3) {
        uVal_9 = uVal_3;
      }
      if (uVal_3 < 0xfff) {
        pArr16_6 = (uint8_t (*)[16])func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_7 = func_0x180672de0(uVal_9 + 0x28);
        pArr16_6 = (uint8_t (*)[16])(lVal_7 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_6[-1] + 8) = lVal_7;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_6;
    }
    *(uint64_t *)param_1[1] = uVal_8;
    *(uint64_t *)(param_1[1] + 8) = uVal_9;
    func_0x1806aa960(pArr16_6,&uStack_25,uVal_8);
    (*pArr16_6)[uVal_8] = 0;
  }
  return param_1;
}

// func_0x1800d73d0
void func_0x1800d73d0(int64_t param_1)
{
  func_0x1800d73e0(param_1 + 0x10);
  return;
}

// func_0x1800d73e0
bool func_0x1800d73e0(int64_t *param_1,uint64_t *param_2)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  int iVal_3;
  bool bFlag_4;
  void *pVoid_5;
  int64_t lVal_6;
  uint64_t *_Buf2;
  uint64_t uVal_7;
  int64_t lVal_8;
  
  lVal_6 = *param_1;
  lVal_8 = *(int64_t *)(lVal_6 + 8);
  if (*(char *)(lVal_8 + 0x19) == '\0') {
    _Buf2 = param_2;
    if (0xf < (uint64_t)param_2[3]) {
      _Buf2 = (uint64_t *)*param_2;
    }
    uVal_1 = param_2[2];
    do {
      if (*(uint64_t *)(lVal_8 + 0x38) < 0x10) {
        pVoid_5 = (void *)(lVal_8 + 0x20);
      }
      else {
        pVoid_5 = *(void **)(lVal_8 + 0x20);
      }
      uVal_2 = *(uint64_t *)(lVal_8 + 0x30);
      uVal_7 = uVal_2;
      if (uVal_1 < uVal_2) {
        uVal_7 = uVal_1;
      }
      iVal_3 = memcmp(pVoid_5,_Buf2,uVal_7);
      bFlag_4 = uVal_2 < uVal_1;
      if (iVal_3 != 0) {
        bFlag_4 = iVal_3 < 0;
      }
      if (bFlag_4 == false) {
        lVal_6 = lVal_8;
      }
      lVal_8 = *(int64_t *)(lVal_8 + (uint64_t)bFlag_4 * 0x10);
    } while (*(char *)(lVal_8 + 0x19) == '\0');
  }
  if (*(char *)(lVal_6 + 0x19) == '\0') {
    if (*(uint64_t *)(lVal_6 + 0x38) < 0x10) {
      pVoid_5 = (void *)(lVal_6 + 0x20);
      uVal_1 = *(uint64_t *)(lVal_6 + 0x30);
      uVal_2 = param_2[2];
      uVal_7 = param_2[3];
    }
    else {
      pVoid_5 = *(void **)(lVal_6 + 0x20);
      uVal_1 = *(uint64_t *)(lVal_6 + 0x30);
      uVal_2 = param_2[2];
      uVal_7 = param_2[3];
    }
    if (0xf < uVal_7) {
      param_2 = (uint64_t *)*param_2;
    }
    uVal_7 = uVal_2;
    if (uVal_1 < uVal_2) {
      uVal_7 = uVal_1;
    }
    iVal_3 = memcmp(param_2,pVoid_5,uVal_7);
    bFlag_4 = uVal_1 <= uVal_2;
    if (iVal_3 != 0) {
      bFlag_4 = -1 < iVal_3;
    }
  }
  else {
    bFlag_4 = false;
  }
  return bFlag_4;
}

// func_0x1800d74e0
uint16_t func_0x1800d74e0(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t *pLong_2;
  
  ch_1 = func_0x1800d73e0(param_1 + 0x10);
  if (ch_1 != '\0') {
    pLong_2 = (int64_t *)func_0x1800fcc60(param_1 + 0x10,param_2);
    if (*pLong_2 != 0) {
      return *(uint16_t *)(*pLong_2 + 0x10);
    }
  }
  return 0;
}

// func_0x1800d7530
uint32_t func_0x1800d7530(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  int64_t *pLong_2;
  uint32_t uVal_3;
  
  ch_1 = func_0x1800d73e0(param_1 + 0x10);
  uVal_3 = 0;
  if (ch_1 != '\0') {
    pLong_2 = (int64_t *)func_0x1800fcc60(param_1 + 0x10,param_2);
    uVal_3 = 0;
    if (*pLong_2 != 0) {
      uVal_3 = *(uint32_t *)(*pLong_2 + 0x10);
    }
  }
  return uVal_3;
}

// func_0x1800d7570
uint8_t (*func_0x1800d7570(int64_t param_1,uint8_t (*param_2)[16],uint64_t param_3))[16]
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  char ch_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  uint8_t (*pArr16_6)[16];
  uint64_t uVal_7;
  uint64_t uVal_8;
  
  ch_3 = func_0x1800d73e0(param_1 + 0x10,param_3);
  if (ch_3 != '\0') {
    pLong_4 = (int64_t *)func_0x1800fcc60(param_1 + 0x10,param_3);
    lVal_1 = *pLong_4;
    if (lVal_1 != 0) {
      *param_2 = ZEXT816(0);
      *(uint64_t *)param_2[1] = 0;
      uVal_8 = *(int64_t *)(lVal_1 + 0x18) - *(int64_t *)(lVal_1 + 0x10);
      if (uVal_8 == 0) {
        return param_2;
      }
      if (-1 < (int64_t)uVal_8) {
        if (uVal_8 < 0x1000) {
          uVal_7 = func_0x180672de0(uVal_8);
        }
        else {
          lVal_5 = func_0x180672de0(uVal_8 + 0x27);
          uVal_7 = lVal_5 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_7 - 8) = lVal_5;
        }
        *(uint64_t *)*param_2 = uVal_7;
        *(uint64_t *)param_2[1] = uVal_8 + uVal_7;
        lVal_5 = *(int64_t *)(lVal_1 + 0x18) - *(int64_t *)(lVal_1 + 0x10);
        func_0x1806aa960(uVal_7,*(int64_t *)(lVal_1 + 0x10),lVal_5);
        *(uint64_t *)(*param_2 + 8) = lVal_5 + uVal_7;
        return param_2;
      }
      func_0x18007c0d0();
      fnPtr_2 = (func_ptr_t )swi(3);
      pArr16_6 = (uint8_t (*)[16])(*fnPtr_2)();
      return pArr16_6;
    }
  }
  *param_2 = ZEXT816(0);
  *(uint64_t *)param_2[1] = 0;
  return param_2;
}

// func_0x1800d7640
uint8_t (*func_0x1800d7640(int64_t param_1,uint8_t (*param_2)[16],uint64_t param_3))[16]
{
  uint64_t uVal_1;
  func_ptr_t fnPtr_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  char ch_6;
  int64_t *pLong_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint8_t (*pArr16_10)[16];
  uint32_t *pU64_11;
  uint64_t uVal_12;
  
  ch_6 = func_0x1800d73e0(param_1 + 0x10,param_3);
  if (ch_6 != '\0') {
    pLong_7 = (int64_t *)func_0x1800fcc60(param_1 + 0x10,param_3);
    lVal_9 = *pLong_7;
    if (lVal_9 != 0) {
      param_2[1] = ZEXT816(0);
      *param_2 = ZEXT816(0);
      uVal_1 = *(uint64_t *)(lVal_9 + 0x20);
      if (*(uint64_t *)(lVal_9 + 0x28) < 0x10) {
        pU64_11 = (uint32_t *)(lVal_9 + 0x10);
      }
      else {
        pU64_11 = *(uint32_t **)(lVal_9 + 0x10);
      }
      if (-1 < (int64_t)uVal_1) {
        if (uVal_1 < 0x10) {
          *(uint64_t *)param_2[1] = uVal_1;
          *(uint64_t *)(param_2[1] + 8) = 0xf;
          uVal_3 = pU64_11[1];
          uVal_4 = pU64_11[2];
          uVal_5 = pU64_11[3];
          *(uint32_t *)*param_2 = *pU64_11;
          *(uint32_t *)(*param_2 + 4) = uVal_3;
          *(uint32_t *)(*param_2 + 8) = uVal_4;
          *(uint32_t *)(*param_2 + 0xc) = uVal_5;
          return param_2;
        }
        uVal_8 = uVal_1 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_8) {
          uVal_12 = uVal_8;
        }
        if (uVal_8 < 0xfff) {
          uVal_8 = func_0x180672de0(uVal_12 + 1);
        }
        else {
          lVal_9 = func_0x180672de0(uVal_12 + 0x28);
          uVal_8 = lVal_9 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_8 - 8) = lVal_9;
        }
        *(uint64_t *)*param_2 = uVal_8;
        *(uint64_t *)param_2[1] = uVal_1;
        *(uint64_t *)(param_2[1] + 8) = uVal_12;
        func_0x1806aa960(uVal_8,pU64_11,uVal_1 + 1);
        return param_2;
      }
      func_0x18007ba70();
      fnPtr_2 = (func_ptr_t )swi(3);
      pArr16_10 = (uint8_t (*)[16])(*fnPtr_2)();
      return pArr16_10;
    }
  }
  *param_2 = ZEXT816(0);
  *(uint64_t *)param_2[1] = 0;
  *(uint64_t *)(param_2[1] + 8) = 0xf;
  return param_2;
}

// func_0x1800d7740
uint64_t func_0x1800d7740(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  uint64_t *pU64_2;
  
  ch_1 = func_0x1800d73e0(param_1 + 0x10);
  if (ch_1 != '\0') {
    pU64_2 = (uint64_t *)func_0x1800fcc60(param_1 + 0x10,param_2);
    return *pU64_2;
  }
  return 0;
}

// func_0x1800d7780
uint8_t (*func_0x1800d7780(int64_t param_1,uint8_t (*param_2)[16],uint64_t param_3))[16]
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint8_t (*pArr16_7)[16];
  int64_t lVal_8;
  
  ch_3 = func_0x1800d73e0(param_1 + 0x10,param_3);
  if (ch_3 != '\0') {
    pLong_4 = (int64_t *)func_0x1800fcc60(param_1 + 0x10,param_3);
    lVal_1 = *pLong_4;
    if (lVal_1 != 0) {
      *param_2 = ZEXT816(0);
      *(uint64_t *)param_2[1] = 0;
      lVal_8 = *(int64_t *)(lVal_1 + 0x18) - *(int64_t *)(lVal_1 + 0x10);
      if (lVal_8 == 0) {
        return param_2;
      }
      uVal_5 = *(int64_t *)(lVal_1 + 0x18) - *(int64_t *)(lVal_1 + 0x10) >> 3;
      if (uVal_5 >> 0x3d == 0) {
        if (uVal_5 < 0x200) {
          uVal_5 = func_0x180672de0(lVal_8);
        }
        else {
          lVal_6 = func_0x180672de0(lVal_8 + 0x27);
          uVal_5 = lVal_6 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_5 - 8) = lVal_6;
        }
        *(uint64_t *)*param_2 = uVal_5;
        *(uint64_t *)param_2[1] = lVal_8 + uVal_5;
        lVal_8 = *(int64_t *)(lVal_1 + 0x18) - *(int64_t *)(lVal_1 + 0x10);
        func_0x1806aa960(uVal_5,*(int64_t *)(lVal_1 + 0x10),lVal_8);
        *(uint64_t *)(*param_2 + 8) = lVal_8 + uVal_5;
        return param_2;
      }
      func_0x18007c0d0();
      fnPtr_2 = (func_ptr_t )swi(3);
      pArr16_7 = (uint8_t (*)[16])(*fnPtr_2)();
      return pArr16_7;
    }
  }
  *param_2 = ZEXT816(0);
  *(uint64_t *)param_2[1] = 0;
  return param_2;
}

// Unwind@1800d7d00
void Unwind_1800d7d00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1800d7d40
void Unwind_1800d7d40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@1800d7d80
void Unwind_1800d7d80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1800d7dc0
void Unwind_1800d7dc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x80));
  return;
}

// Unwind@1800d7ff0
void Unwind_1800d7ff0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800d8370
void Unwind_1800d8370(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@1800d85d0
void Unwind_1800d85d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1800d8610
void Unwind_1800d8610(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  return;
}

// Unwind@1800d8890
void Unwind_1800d8890(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  return;
}

// Unwind@1800d88d0
void Unwind_1800d88d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1800d8b30
void Unwind_1800d8b30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@1800d8b70
void Unwind_1800d8b70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  return;
}

// func_0x1800d8bb0
uint8_t (*func_0x1800d8bb0(uint8_t (*param_1)[16],uint64_t param_2))[16]
{
  bool bFlag_1;
  int64_t lVal_2;
  func_ptr_t fnPtr_3;
  uint8_t *pU64_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  uint64_t uVal_7;
  uint64_t uVal_8;
  uint uVal_9;
  uint64_t uVal_10;
  uint8_t uStack_38;
  uint8_t auStack_37 [23];
  
  uVal_6 = -param_2;
  if (0 < (int64_t)param_2) {
    uVal_6 = param_2;
  }
  lVal_2 = 0x3f;
  if ((uVal_6 | 1) != 0) {
    for (; (uVal_6 | 1) >> lVal_2 == 0; lVal_2 = lVal_2 + -1) {
    }
  }
  uVal_7 = (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_2] -
          (uint64_t)
          (uVal_6 < *(uint64_t *)(&DAT_1806b0b00 + (uint64_t)(byte)(&DAT_1806b0ac0)[lVal_2] * 8));
  if ((int64_t)param_2 < 0) {
    pU64_4 = auStack_37;
    uStack_38 = 0x2d;
  }
  else {
    pU64_4 = &uStack_38;
  }
  if (uVal_6 < 100) {
    uVal_9 = (uint)uVal_7;
  }
  else {
    uVal_10 = uVal_7 & 0xffffffff;
    uVal_8 = uVal_6;
    do {
      uVal_9 = (int)uVal_10 - 2;
      uVal_10 = (uint64_t)uVal_9;
      uVal_6 = uVal_8 / 100;
      *(uint16_t *)(pU64_4 + uVal_10) = *(uint16_t *)(&DAT_1806afb50 + (uVal_8 % 100) * 2);
      bFlag_1 = 9999 < uVal_8;
      uVal_8 = uVal_6;
    } while (bFlag_1);
  }
  uVal_7 = uVal_7 - ((int64_t)param_2 >> 0x3f);
  if (uVal_6 < 10) {
    pU64_4[uVal_9 - 1] = (byte)uVal_6 | 0x30;
  }
  else {
    *(uint16_t *)(pU64_4 + (uVal_9 - 2)) = *(uint16_t *)(&DAT_1806afb50 + uVal_6 * 2);
  }
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  if (uVal_7 == 0) {
    *(uint64_t *)(param_1[1] + 8) = 0xf;
  }
  else {
    if ((int64_t)uVal_7 < 0) {
      func_0x18007ba70();
      fnPtr_3 = (func_ptr_t )swi(3);
      pArr16_5 = (uint8_t (*)[16])(*fnPtr_3)();
      return pArr16_5;
    }
    uVal_6 = 0xf;
    pArr16_5 = param_1;
    if (0xf < uVal_7) {
      uVal_6 = 0x16;
      if (0x16 < (uVal_7 | 0xf)) {
        uVal_6 = uVal_7 | 0xf;
      }
      pArr16_5 = (uint8_t (*)[16])func_0x180672de0(uVal_6 + 1);
      *(uint8_t (**)[16])*param_1 = pArr16_5;
    }
    *(uint64_t *)param_1[1] = uVal_7;
    *(uint64_t *)(param_1[1] + 8) = uVal_6;
    func_0x1806aa960(pArr16_5,&uStack_38,uVal_7);
    *(uint8_t *)((int64_t)pArr16_5 + uVal_7) = 0;
  }
  return param_1;
}

// func_0x1800d8d40
uint8_t (*func_0x1800d8d40(uint8_t (*param_1)[16],ushort param_2))[16]
{
  uint8_t *pU64_1;
  func_ptr_t fnPtr_2;
  uint uVal_3;
  uint64_t uVal_4;
  uint8_t (*pArr16_5)[16];
  int64_t lVal_6;
  uint64_t uVal_7;
  ushort uVal_8;
  uint uVal_9;
  uint64_t uVal_10;
  uint8_t uStack_26;
  uint8_t auStack_25 [5];
  
  uVal_8 = -param_2;
  if (0 < (short)param_2) {
    uVal_8 = param_2;
  }
  uVal_10 = (uint64_t)uVal_8;
  uVal_9 = 0x1f;
  if ((uVal_8 | 1) != 0) {
    for (; (uVal_8 | 1) >> uVal_9 == 0; uVal_9 = uVal_9 - 1) {
    }
  }
  lVal_6 = *(int64_t *)(&DAT_1806afa50 + (uint64_t)uVal_9 * 8) + uVal_10;
  uVal_9 = (uint)((uint64_t)lVal_6 >> 0x20);
  if ((short)param_2 < 0) {
    pU64_1 = auStack_25;
    uStack_26 = 0x2d;
  }
  else {
    pU64_1 = &uStack_26;
  }
  uVal_7 = uVal_10;
  if (99 < uVal_8) {
    do {
      uVal_9 = uVal_9 - 2;
      uVal_3 = (uint)uVal_7;
      uVal_10 = uVal_7 / 100;
      *(uint16_t *)(pU64_1 + uVal_9) =
           *(uint16_t *)(&DAT_1806afb50 + (uint64_t)(uVal_3 + (int)(uVal_7 / 100) * -100) * 2);
      uVal_7 = uVal_10;
    } while (9999 < uVal_3);
  }
  uVal_7 = (lVal_6 >> 0x20) + (uint64_t)(param_2 >> 0xf);
  if ((uint)uVal_10 < 10) {
    pU64_1[uVal_9 - 1] = (byte)uVal_10 | 0x30;
  }
  else {
    *(uint16_t *)(pU64_1 + (uVal_9 - 2)) = *(uint16_t *)(&DAT_1806afb50 + uVal_10 * 2);
  }
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  if (uVal_7 == 0) {
    *(uint64_t *)(param_1[1] + 8) = 0xf;
  }
  else {
    if ((int64_t)uVal_7 < 0) {
      func_0x18007ba70();
      fnPtr_2 = (func_ptr_t )swi(3);
      pArr16_5 = (uint8_t (*)[16])(*fnPtr_2)();
      return pArr16_5;
    }
    uVal_10 = 0xf;
    pArr16_5 = param_1;
    if (0xf < uVal_7) {
      uVal_4 = uVal_7 | 0xf;
      uVal_10 = 0x16;
      if (0x16 < uVal_4) {
        uVal_10 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pArr16_5 = (uint8_t (*)[16])func_0x180672de0(uVal_10 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_10 + 0x28);
        pArr16_5 = (uint8_t (*)[16])(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_5[-1] + 8) = lVal_6;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_5;
    }
    *(uint64_t *)param_1[1] = uVal_7;
    *(uint64_t *)(param_1[1] + 8) = uVal_10;
    func_0x1806aa960(pArr16_5,&uStack_26,uVal_7);
    (*pArr16_5)[uVal_7] = 0;
  }
  return param_1;
}

// Unwind@1800d9070
void Unwind_1800d9070(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// func_0x1800d90f0
uint64_t * func_0x1800d90f0(uint64_t *param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  uint64_t *pU64_2;
  uint8_t auStack_48 [40];
  uint64_t *local_20;
  uint8_t local_18;
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  *param_1 = std::exception::vftable;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  local_18 = 1;
  local_20 = param_2;
  func_0x18067b3f0(&local_20,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_48)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_2 = (uint64_t *)(*fnPtr_1)();
  return pU64_2;
}

// Unwind@1800d9250
void Unwind_1800d9250(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800d9270
void func_0x1800d9270(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  int iVal_4;
  uint uVal_5;
  uint64_t *pU64_6;
  char *fnPtr_7;
  uint8_t *pU64_8;
  uint64_t uVal_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint8_t local_158 [24];
  uint8_t local_140 [24];
  uint8_t local_128 [24];
  uint8_t local_110 [24];
  uint8_t local_f8 [32];
  uint8_t local_d8 [32];
  uint64_t local_b8;
  uint32_t local_b0;
  int64_t local_a0;
  uint local_98;
  uint64_t local_88;
  int64_t *local_80;
  uint8_t local_78 [16];
  uint64_t local_68;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b0 = 0;
  local_b8 = 0;
  local_78 = ZEXT816(0);
  local_68 = 0;
  iVal_4 = func_0x1800ba330(&local_b8,0x2f,"1.3.1.1-motley",0x70);
  if (iVal_4 == 0) {
    local_b8 = param_3;
    if ((*param_1 < param_4) || (uVal_2 = param_4 * 2, *param_1 < uVal_2)) {
      func_0x1800bdff0(&local_b8);
      fnPtr_7 = "size may use more memory than intended when decompressing";
      pU64_8 = local_140;
    }
    else {
      local_b0 = (uint32_t)param_4;
      uVal_11 = 0;
      while (uVal_10 = uVal_11 + uVal_2, uVal_10 <= *param_1) {
        uVal_1 = param_2[2];
        uVal_9 = uVal_10 - uVal_1;
        if (uVal_10 < uVal_1 || uVal_9 == 0) {
          param_2[2] = uVal_10;
          pU64_6 = param_2;
          if (0xf < (uint64_t)param_2[3]) {
            pU64_6 = (uint64_t *)*param_2;
          }
          *(uint8_t *)((int64_t)pU64_6 + uVal_10) = 0;
          uVal_10 = param_2[3];
        }
        else if (param_2[3] - uVal_1 < uVal_9) {
          func_0x180089e90(param_2,uVal_9,uVal_9,uVal_9,0);
          uVal_10 = param_2[3];
        }
        else {
          param_2[2] = uVal_10;
          pU64_6 = param_2;
          if (0xf < (uint64_t)param_2[3]) {
            pU64_6 = (uint64_t *)*param_2;
          }
          func_0x1806ab010(uVal_1 + (int64_t)pU64_6,0);
          *(uint8_t *)((int64_t)pU64_6 + uVal_10) = 0;
          uVal_10 = param_2[3];
        }
        pU64_6 = param_2;
        if (0xf < uVal_10) {
          pU64_6 = (uint64_t *)*param_2;
        }
        local_a0 = (int64_t)pU64_6 + uVal_11;
        local_98 = (uint)uVal_2;
        uVal_5 = func_0x1800bb890(&local_b8,4);
        if ((1 < uVal_5) && (uVal_5 != 0xfffffffb)) goto LAB_1800d9528;
        uVal_11 = uVal_11 + (uVal_2 - local_98);
        if ((uint64_t)local_98 != 0) {
          if ((((local_78._0_8_ != 0) && ((func_ptr_t )local_78._8_8_ != (func_ptr_t )0x0)) &&
              (local_80 != (int64_t *)0x0)) &&
             (((uint64_t *)*local_80 == &local_b8 && (*(int *)(local_80 + 1) - 0x3f34U < 0x20))))
          {
            if (local_80[8] != 0) {
              (*(func_ptr_t )local_78._8_8_)(local_68,local_80[8]);
            }
            (*(func_ptr_t )local_78._8_8_)(local_68,local_80);
            local_80 = (int64_t *)0x0;
          }
          uVal_2 = param_2[2];
          uVal_10 = uVal_11 - uVal_2;
          if (uVal_11 < uVal_2 || uVal_10 == 0) {
            param_2[2] = uVal_11;
            if (0xf < (uint64_t)param_2[3]) {
              param_2 = (uint64_t *)*param_2;
            }
          }
          else {
            if (param_2[3] - uVal_2 < uVal_10) {
              func_0x180089e90(param_2,uVal_10,uVal_10,uVal_10,0);
              return;
            }
            param_2[2] = uVal_11;
            if (0xf < (uint64_t)param_2[3]) {
              param_2 = (uint64_t *)*param_2;
            }
            func_0x1806ab010(uVal_2 + (int64_t)param_2,0);
          }
          *(uint8_t *)((int64_t)param_2 + uVal_11) = 0;
          return;
        }
      }
      func_0x1800bdff0(&local_b8);
      fnPtr_7 = "size of output string will use more memory then intended when decompressing";
      pU64_8 = local_128;
    }
    func_0x1800d9790(pU64_8,fnPtr_7);
    func_0x18067a120(pU64_8,&DAT_18077f2c0);
LAB_1800d9528:
    func_0x180001060(local_d8,local_88);
    func_0x1800bdff0(&local_b8);
    func_0x1800d90f0(local_110,local_d8);
    func_0x18067a120(local_110,&DAT_18077f2c0);
  }
  else {
    func_0x180094590(local_f8,iVal_4);
    func_0x1800d9690(local_d8,"inflate init failed: ",local_f8);
    func_0x1800d90f0(local_158,local_d8);
    func_0x18067a120(local_158,&DAT_18077f2c0);
  }
  fnPtr_3 = (func_ptr_t )swi(3);
  (*fnPtr_3)();
  return;
}

// Unwind@1800d95d0
void Unwind_1800d95d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@1800d9610
void Unwind_1800d9610(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@1800d9650
void Unwind_1800d9650(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// func_0x1800d9690
uint32_t * func_0x1800d9690(uint32_t *param_1,char **param_2,char **param_3)
{
  char *fnPtr_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  size_t sz_9;
  size_t sz_10;
  char **ptr2_Char_11;
  
  sz_9 = strlen((char *)param_2);
  fnPtr_1 = param_3[2];
  if ((uint64_t)((int64_t)param_3[3] - (int64_t)fnPtr_1) < sz_9) {
    param_3 = (char **)func_0x1800871a0(param_3,sz_9,fnPtr_1,0,param_2,sz_9);
  }
  else {
    param_3[2] = fnPtr_1 + sz_9;
    ptr2_Char_11 = (char **)*param_3;
    if (param_3[3] < (char *)0x10) {
      ptr2_Char_11 = param_3;
    }
    sz_10 = sz_9;
    if ((param_2 <= (char **)((int64_t)ptr2_Char_11 + (int64_t)fnPtr_1) &&
         ptr2_Char_11 < (char **)((int64_t)param_2 + sz_9)) &&
       (sz_10 = (int64_t)ptr2_Char_11 - (int64_t)param_2, ptr2_Char_11 < param_2 || sz_10 == 0)) {
      sz_10 = 0;
    }
    func_0x1806aa960((char *)((int64_t)ptr2_Char_11 + sz_9),ptr2_Char_11,fnPtr_1 + 1);
    func_0x1806aa960(ptr2_Char_11,param_2,sz_10);
    func_0x1806aa960((char *)((int64_t)ptr2_Char_11 + sz_10),
                  (char *)((int64_t)(char **)((int64_t)param_2 + sz_9) + sz_10),sz_9 - sz_10);
  }
  uVal_2 = *(uint32_t *)param_3;
  uVal_3 = *(uint32_t *)((int64_t)param_3 + 4);
  uVal_4 = *(uint32_t *)(param_3 + 1);
  uVal_5 = *(uint32_t *)((int64_t)param_3 + 0xc);
  uVal_6 = *(uint32_t *)((int64_t)param_3 + 0x14);
  uVal_7 = *(uint32_t *)(param_3 + 3);
  uVal_8 = *(uint32_t *)((int64_t)param_3 + 0x1c);
  param_1[4] = *(uint32_t *)(param_3 + 2);
  param_1[5] = uVal_6;
  param_1[6] = uVal_7;
  param_1[7] = uVal_8;
  *param_1 = uVal_2;
  param_1[1] = uVal_3;
  param_1[2] = uVal_4;
  param_1[3] = uVal_5;
  param_3[2] = (char *)0x0;
  param_3[3] = &DAT_0000000f;
  *(uint8_t *)param_3 = 0;
  return param_1;
}

// func_0x1800d9790
uint64_t * func_0x1800d9790(uint64_t *param_1,uint64_t param_2)
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
  *param_1 = std::runtime_error::vftable;
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_48)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  pU64_2 = (uint64_t *)(*fnPtr_1)();
  return pU64_2;
}

// func_0x1800d9840
void func_0x1800d9840(uint8_t *param_1,uint8_t *param_2)
{
  param_1[0x1a] = 1;
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
  return;
}

// Unwind@1800d9ac0
void Unwind_1800d9ac0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1800d9b80
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
uint * func_0x1800d9b80(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5, uint64_t *param_6,uint param_7)
{
  byte *pU8_1;
  uint32_t *pU64_2;
  uint32_t *pU64_3;
  byte bFlag_4;
  ushort uVal_5;
  int iVal_6;
  func_ptr_t fnPtr_7;
  uint32_t uVal_8;
  uint32_t uVal_9;
  uint32_t uVal_10;
  uint32_t uVal_11;
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
  bool bFlag_22;
  bool bFlag_23;
  float fVal_24;
  bool bFlag_25;
  char ch_26;
  uint16_t uVal_27;
  short sz_28;
  int iVal_29;
  uint uVal_30;
  uint uVal_31;
  uint32_t uVal_32;
  int iVal_33;
  int iVal_34;
  int64_t lVal_35;
  uint *pU64_36;
  char *fnPtr_37;
  uint64_t uVal_38;
  uint8_t extraout_AH;
  uint8_t *pU64_39;
  int64_t lVal_40;
  uint *pU64_41;
  byte *pU8_42;
  uint *pU64_43;
  short *pSize_44;
  uint8_t *pU64_45;
  uint8_t *pU64_46;
  uint64_t uVal_47;
  byte *pU8_48;
  uint8_t uVal_49;
  byte bFlag_50;
  uint uVal_51;
  uint8_t *pU64_52;
  uint *pU64_53;
  uint uVal_54;
  uint *pU64_55;
  uint64_t uVal_56;
  uint64_t uVal_57;
  uint64_t uVal_58;
  uint64_t uVal_59;
  uint uVal_60;
  uint64_t uVal_61;
  uint uVal_62;
  uint uVal_63;
  uint uVal_64;
  float fVal_65;
  float fVal_66;
  float fVal_67;
  uint8_t auArr_68 [16];
  uint8_t auArr_69 [16];
  uint8_t auStack_89d8 [32];
  uint local_89b8;
  uint64_t *local_89b0;
  uint local_89a8;
  uint local_89a4;
  uint64_t local_89a0;
  uint64_t local_8998;
  uint32_t local_8990;
  uint local_898c;
  uint64_t local_8988;
  uint64_t local_8980;
  uint64_t local_8978;
  uint64_t local_8970;
  uint64_t local_8968;
  uint local_8960;
  uint local_895c;
  uint *local_8958;
  uint *local_8950;
  int local_8944;
  uint local_8940;
  uint32_t local_893c;
  uint *local_8938;
  uint local_892c;
  int local_8928;
  int local_8924;
  int local_8920;
  int local_891c;
  int local_8918;
  int local_8914;
  int local_8910;
  int local_890c;
  uint64_t local_8908;
  uint64_t local_8900;
  uint64_t local_88f8;
  uint64_t local_88f0;
  uint64_t local_88e8;
  int local_88dc;
  uint local_88d8;
  int local_88d4;
  uint local_88d0;
  uint32_t local_88cc;
  uint32_t local_88c8;
  int local_88c4;
  uint32_t local_88c0;
  int local_88bc;
  uint64_t local_88b8;
  int64_t local_88b0;
  uint64_t local_88a8;
  uint *local_88a0;
  int local_8898;
  uint64_t local_48;
  
  local_89a8 = param_5;
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_89d8;
  *param_6 = 8;
  *(uint32_t *)(param_6 + 1) = 0;
  pU64_43 = param_1 + 0xe;
  pU64_53 = (uint *)((int64_t)param_1 + 0x39);
  pU64_36 = *(uint **)(param_1 + 0x30);
  pU64_55 = *(uint **)(param_1 + 0x32);
  local_8958 = param_2;
  if (pU64_36 < pU64_55) {
    *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_36 + 1);
    pU64_41 = (uint *)((int64_t)pU64_36 + 1);
    if (*(char *)pU64_36 != -0x77) goto LAB_1800da0d0;
LAB_1800d9c84:
    if (pU64_55 <= pU64_41) {
      if (param_1[0xc] != 0) {
        iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
        if (iVal_29 == 0) {
          param_1[0xc] = 0;
          *(uint8_t *)(param_1 + 0xe) = 0;
          ch_26 = '\0';
          pU64_55 = pU64_53;
        }
        else {
          ch_26 = *(char *)pU64_43;
          pU64_55 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
        }
        *(uint **)(param_1 + 0x32) = pU64_55;
        *(uint **)(param_1 + 0x30) = pU64_53;
        pU64_36 = pU64_53;
        if (ch_26 == 'P') goto LAB_1800d9d0c;
      }
      goto LAB_1800da0d0;
    }
    *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_41 + 1);
    pU64_36 = (uint *)((int64_t)pU64_41 + 1);
    if (*(char *)pU64_41 != 'P') goto LAB_1800da0d0;
LAB_1800d9d0c:
    if (pU64_55 <= pU64_36) {
      if (param_1[0xc] != 0) {
        iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
        if (iVal_29 == 0) {
          param_1[0xc] = 0;
          *(uint8_t *)(param_1 + 0xe) = 0;
          ch_26 = '\0';
          pU64_55 = pU64_53;
        }
        else {
          ch_26 = *(char *)pU64_43;
          pU64_55 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
        }
        *(uint **)(param_1 + 0x32) = pU64_55;
        *(uint **)(param_1 + 0x30) = pU64_53;
        pU64_41 = pU64_53;
        if (ch_26 == 'N') goto LAB_1800d9d95;
      }
      goto LAB_1800da0d0;
    }
    *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_36 + 1);
    pU64_41 = (uint *)((int64_t)pU64_36 + 1);
    if (*(char *)pU64_36 != 'N') goto LAB_1800da0d0;
LAB_1800d9d95:
    if (pU64_55 <= pU64_41) {
      if (param_1[0xc] != 0) {
        iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
        if (iVal_29 == 0) {
          param_1[0xc] = 0;
          *(uint8_t *)(param_1 + 0xe) = 0;
          ch_26 = '\0';
          pU64_55 = pU64_53;
        }
        else {
          ch_26 = *(char *)pU64_43;
          pU64_55 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
        }
        *(uint **)(param_1 + 0x32) = pU64_55;
        *(uint **)(param_1 + 0x30) = pU64_53;
        pU64_36 = pU64_53;
        if (ch_26 == 'G') goto LAB_1800d9e1d;
      }
      goto LAB_1800da0d0;
    }
    *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_41 + 1);
    pU64_36 = (uint *)((int64_t)pU64_41 + 1);
    if (*(char *)pU64_41 != 'G') goto LAB_1800da0d0;
LAB_1800d9e1d:
    if (pU64_36 < pU64_55) {
      *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_36 + 1);
      ch_26 = *(char *)pU64_36;
      pU64_36 = (uint *)((int64_t)pU64_36 + 1);
    }
    else {
      if (param_1[0xc] == 0) goto LAB_1800da0d0;
      iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
      if (iVal_29 == 0) {
        param_1[0xc] = 0;
        *(uint8_t *)(param_1 + 0xe) = 0;
        ch_26 = '\0';
        pU64_55 = pU64_53;
      }
      else {
        ch_26 = *(char *)pU64_43;
        pU64_55 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
      }
      *(uint **)(param_1 + 0x32) = pU64_55;
      *(uint **)(param_1 + 0x30) = pU64_53;
      pU64_36 = pU64_53;
    }
    if (ch_26 != '\r') goto LAB_1800da0d0;
    if (pU64_36 < pU64_55) {
      *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_36 + 1);
      ch_26 = *(char *)pU64_36;
      pU64_36 = (uint *)((int64_t)pU64_36 + 1);
    }
    else {
      if (param_1[0xc] == 0) goto LAB_1800da0d0;
      iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
      if (iVal_29 == 0) {
        param_1[0xc] = 0;
        *(uint8_t *)(param_1 + 0xe) = 0;
        ch_26 = '\0';
        pU64_55 = pU64_53;
      }
      else {
        ch_26 = *(char *)pU64_43;
        pU64_55 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
      }
      *(uint **)(param_1 + 0x32) = pU64_55;
      *(uint **)(param_1 + 0x30) = pU64_53;
      pU64_36 = pU64_53;
    }
    if (ch_26 != '\n') goto LAB_1800da0d0;
    if (pU64_36 < pU64_55) {
      *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_36 + 1);
      ch_26 = *(char *)pU64_36;
      pU64_36 = (uint *)((int64_t)pU64_36 + 1);
    }
    else {
      if (param_1[0xc] == 0) goto LAB_1800da0d0;
      iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
      if (iVal_29 == 0) {
        param_1[0xc] = 0;
        *(uint8_t *)(param_1 + 0xe) = 0;
        ch_26 = '\0';
        pU64_55 = pU64_53;
      }
      else {
        ch_26 = *(char *)pU64_43;
        pU64_55 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
      }
      *(uint **)(param_1 + 0x32) = pU64_55;
      *(uint **)(param_1 + 0x30) = pU64_53;
      pU64_36 = pU64_53;
    }
    if (ch_26 != '\x1a') goto LAB_1800da0d0;
    if (pU64_55 <= pU64_36) {
      if (param_1[0xc] != 0) {
        iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
        pU64_36 = pU64_43;
        if (iVal_29 != 0) goto LAB_1800d9feb;
        param_1[0xc] = 0;
        *(uint8_t *)(param_1 + 0xe) = 0;
      }
      goto LAB_1800da0d0;
    }
    *(uint8_t **)(param_1 + 0x30) = (uint8_t *)((int64_t)pU64_36 + 1);
LAB_1800d9feb:
    if (*(char *)pU64_36 != '\n') goto LAB_1800da0d0;
    param_1[0x30] = param_1[0x34];
    param_1[0x31] = param_1[0x35];
    param_1[0x32] = param_1[0x36];
    param_1[0x33] = param_1[0x37];
    local_88b8 = param_1;
    if (4 < local_89a8) {
      *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x3010) = "bad req_comp";
      goto LAB_1800daa64;
    }
    iVal_29 = func_0x1800e23c0(&local_88b8,0);
    pU64_43 = local_88b8;
    if (iVal_29 == 0) {
      pU64_36 = (uint *)0x0;
    }
    else {
      uVal_32 = 8;
      if ((8 < local_8898) && (uVal_32 = 0x10, local_8898 != 0x10)) {
        *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                  0x3010) = "bad bits_per_channel";
        goto LAB_1800daa64;
      }
      *(uint32_t *)param_6 = uVal_32;
      pU64_36 = local_88a0;
      if ((local_89a8 != 0) && (uVal_30 = local_88b8[3], local_89a8 != uVal_30)) {
        local_89b8 = local_88b8[1];
        if (local_8898 < 9) {
          pU64_36 = (uint *)func_0x1800e3d70(local_88a0,uVal_30,local_89a8);
        }
        else {
          pU64_36 = (uint *)func_0x1800e4b40(local_88a0,uVal_30,local_89a8,*local_88b8);
        }
        pU64_43[3] = local_89a8;
        if (pU64_36 == (uint *)0x0) goto LAB_1800daa64;
      }
      *local_8958 = *pU64_43;
      *param_3 = pU64_43[1];
      if (param_4 != (uint *)0x0) {
        *param_4 = pU64_43[2];
      }
      local_88a0 = (uint *)0x0;
    }
    thunk_FUN_180695dd0(local_88a0);
    thunk_FUN_180695dd0(local_88a8);
    thunk_FUN_180695dd0(local_88b0);
  }
  else {
    if (param_1[0xc] != 0) {
      iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
      if (iVal_29 == 0) {
        param_1[0xc] = 0;
        *(uint8_t *)(param_1 + 0xe) = 0;
        ch_26 = '\0';
        pU64_55 = pU64_53;
      }
      else {
        ch_26 = *(char *)pU64_43;
        pU64_55 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
      }
      *(uint **)(param_1 + 0x32) = pU64_55;
      *(uint **)(param_1 + 0x30) = pU64_53;
      pU64_41 = pU64_53;
      if (ch_26 == -0x77) goto LAB_1800d9c84;
    }
LAB_1800da0d0:
    lVal_40 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(char **)(lVal_40 + 0x3010) = "bad png sig";
    pU64_55 = *(uint **)(param_1 + 0x34);
    pU64_36 = *(uint **)(param_1 + 0x36);
    *(uint **)(param_1 + 0x30) = pU64_55;
    *(uint **)(param_1 + 0x32) = pU64_36;
    local_8950 = param_4;
    if (pU64_55 < pU64_36) {
      *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_55 + 1);
      pU64_41 = (uint *)((int64_t)pU64_55 + 1);
      if (*(char *)pU64_55 != 'B') goto LAB_1800da36d;
LAB_1800da1a4:
      if (pU64_36 <= pU64_41) {
        if (param_1[0xc] != 0) {
          iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
          pU64_55 = *(uint **)(param_1 + 0x34);
          param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - (int)pU64_55);
          if (iVal_29 == 0) {
            param_1[0xc] = 0;
            *(uint8_t *)(param_1 + 0xe) = 0;
            pU64_36 = pU64_53;
          }
          else {
            pU64_36 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
          }
          *(uint **)(param_1 + 0x32) = pU64_36;
          *(uint **)(param_1 + 0x30) = pU64_53;
          if (*(char *)pU64_43 == 'M') goto LAB_1800da228;
        }
        goto LAB_1800da36d;
      }
      *(uint8_t **)(param_1 + 0x30) = (uint8_t *)((int64_t)pU64_41 + 1);
      if (*(char *)pU64_41 != 'M') goto LAB_1800da36d;
LAB_1800da228:
      func_0x1800e8400(param_1);
      func_0x1800e8400(param_1);
      func_0x1800e8400(param_1);
      func_0x1800e8400(param_1);
      func_0x1800e8400(param_1);
      func_0x1800e8400(param_1);
      uVal_30 = func_0x1800e8400(param_1);
      iVal_29 = func_0x1800e8400(param_1);
      uVal_30 = iVal_29 << 0x10 | uVal_30;
      if (((0x38 < uVal_30) || ((0x100010000001000U >> ((uint64_t)uVal_30 & 0x3f) & 1) == 0)) &&
         (uVal_30 != 0x6c)) {
        param_1[0x30] = param_1[0x34];
        param_1[0x31] = param_1[0x35];
        param_1[0x32] = param_1[0x36];
        param_1[0x33] = param_1[0x37];
        if (uVal_30 == 0x7c) goto LAB_1800da29f;
        goto LAB_1800da382;
      }
      param_1[0x30] = param_1[0x34];
      param_1[0x31] = param_1[0x35];
      param_1[0x32] = param_1[0x36];
      param_1[0x33] = param_1[0x37];
LAB_1800da29f:
      local_88c0 = 0xff;
      lVal_35 = func_0x1800e8530(param_1,&local_88dc);
      if (lVal_35 != 0) {
        uVal_30 = param_1[1];
        uVal_31 = -uVal_30;
        if (0 < (int)uVal_30) {
          uVal_31 = uVal_30;
        }
        param_1[1] = uVal_31;
        if ((0x1000000 < uVal_31) || (0x1000000 < *param_1)) goto LAB_1800daa5a;
        local_8980 = CONCAT44(local_8980._4_4_,local_88c8);
        local_8998 = CONCAT44(local_8998._4_4_,local_88c4);
        if (local_88d4 != 0xc) {
          if (local_88dc < 0x10) {
            uVal_31 = (int)(local_88d8 - (local_88bc + local_88d4)) >> 2;
            goto LAB_1800da73a;
          }
LAB_1800da86f:
          if ((param_1[0x2e] + (param_1[0x30] - param_1[0x34])) - 0x401 < 0xfffffc00) {
            fnPtr_37 = "bad header";
          }
          else {
            iVal_29 = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
            if ((iVal_29 <= (int)local_88d8) && ((int)(local_88d8 - iVal_29) < 0x401)) {
              local_8990 = local_88d4;
              local_8988 = CONCAT44(local_8988._4_4_,local_88cc);
              local_89a4 = local_88d0;
              local_8978 = (uint8_t *)CONCAT44(local_8978._4_4_,local_88c0);
              local_8968 = (uint64_t)local_88d8;
              func_0x1800e58f0(param_1);
              uVal_62 = 0;
              bFlag_22 = true;
              uVal_31 = 0;
              uVal_32 = (uint)local_8978;
              local_88c4 = (uint)local_8998;
              bFlag_23 = bFlag_22;
              bFlag_25 = (uint)local_8998 == -0x1000000;
              if (local_88dc != 0x18 || (uint)local_8998 != -0x1000000) goto LAB_1800da76e;
              uVal_31 = 3;
              local_8970 = CONCAT44(local_8970._4_4_,0x18);
              bFlag_23 = true;
              goto LAB_1800da77f;
            }
            fnPtr_37 = "bad offset";
          }
          goto LAB_1800daa61;
        }
        if (0x17 < local_88dc) goto LAB_1800da86f;
        uVal_31 = (int)((local_88d8 - local_88bc) + -0x18) / 3;
LAB_1800da73a:
        if (uVal_31 == 0) goto LAB_1800da86f;
        local_8990 = local_88d4;
        local_8988 = CONCAT44(local_8988._4_4_,local_88cc);
        local_89a4 = local_88d0;
        uVal_32 = local_88c0;
        local_8968 = (uint64_t)local_88d8;
        bFlag_23 = false;
        bFlag_25 = local_88c4 == -0x1000000;
LAB_1800da76e:
        bFlag_22 = bFlag_25;
        uVal_62 = uVal_31;
        local_8970 = CONCAT44(local_8970._4_4_,local_88dc);
        uVal_31 = 4 - (local_88c4 == 0);
LAB_1800da77f:
        param_1[2] = uVal_31;
        if (2 < (int)local_89a8) {
          uVal_31 = local_89a8;
        }
        uVal_54 = *param_1;
        local_8938 = param_3;
        if (((int)uVal_54 < 0) ||
           ((((uVal_63 = param_1[1], uVal_54 != 0 && ((uint)(0x7fffffff / (uint64_t)uVal_54) < uVal_31)
              ) || (uVal_60 = uVal_54 * uVal_31, (int)(uVal_60 | uVal_63) < 0)) ||
            ((uVal_63 != 0 && ((uint)(0x7fffffff / (uint64_t)uVal_63) < uVal_60))))))
        goto LAB_1800daa5a;
        local_8978 = (uint8_t *)CONCAT44(local_8978._4_4_,uVal_32);
        local_892c = uVal_30;
        if (((uVal_54 == 0) || (uVal_31 <= (uint)(0x7fffffff / (uint64_t)uVal_54))) &&
           ((uVal_63 == 0 || (uVal_60 <= (uint)(0x7fffffff / (uint64_t)uVal_63))))) {
          local_89a0 = CONCAT44(local_89a0._4_4_,uVal_31);
          pU64_36 = (uint *)_malloc_base((int64_t)(int)(uVal_60 * uVal_63));
          uVal_58 = local_8988;
          iVal_29 = local_8990;
          uVal_30 = local_89a4;
          uVal_47 = local_89a0 & 0xffffffff;
          if (pU64_36 == (uint *)0x0) goto LAB_1800dab61;
          if ((int)local_8970 < 0x10) {
            if (!(bool)(bFlag_23 | 0x100 < (int)uVal_62)) {
              if (0 < (int)uVal_62) {
                local_8998 = (uint64_t)uVal_62;
                pU64_55 = *(uint **)(param_1 + 0x30);
                pU64_41 = *(uint **)(param_1 + 0x32);
                uVal_58 = 0;
                do {
                  if (pU64_55 < pU64_41) {
                    *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_55 + 1);
                    uVal_49 = *(uint8_t *)pU64_55;
                    pU64_55 = (uint *)((int64_t)pU64_55 + 1);
                  }
                  else if (param_1[0xc] == 0) {
                    uVal_49 = 0;
                  }
                  else {
                    iVal_33 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10));
                    param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                    if (iVal_33 == 0) {
                      param_1[0xc] = 0;
                      *(uint8_t *)(param_1 + 0xe) = 0;
                      uVal_49 = 0;
                      pU64_41 = pU64_53;
                    }
                    else {
                      uVal_49 = *(uint8_t *)pU64_43;
                      pU64_41 = (uint *)((int64_t)iVal_33 + (int64_t)pU64_43);
                    }
                    *(uint **)(param_1 + 0x32) = pU64_41;
                    *(uint **)(param_1 + 0x30) = pU64_53;
                    pU64_55 = pU64_53;
                  }
                  *(uint8_t *)((int64_t)&local_88b8 + uVal_58 * 4 + 2) = uVal_49;
                  if (pU64_55 < pU64_41) {
                    *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_55 + 1);
                    uVal_49 = *(uint8_t *)pU64_55;
                    pU64_55 = (uint *)((int64_t)pU64_55 + 1);
                  }
                  else if (param_1[0xc] == 0) {
                    uVal_49 = 0;
                  }
                  else {
                    iVal_33 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10));
                    param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                    if (iVal_33 == 0) {
                      param_1[0xc] = 0;
                      *(uint8_t *)(param_1 + 0xe) = 0;
                      uVal_49 = 0;
                      pU64_41 = pU64_53;
                    }
                    else {
                      uVal_49 = *(uint8_t *)pU64_43;
                      pU64_41 = (uint *)((int64_t)iVal_33 + (int64_t)pU64_43);
                    }
                    *(uint **)(param_1 + 0x32) = pU64_41;
                    *(uint **)(param_1 + 0x30) = pU64_53;
                    pU64_55 = pU64_53;
                  }
                  *(uint8_t *)((int64_t)&local_88b8 + uVal_58 * 4 + 1) = uVal_49;
                  if (pU64_55 < pU64_41) {
                    *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_55 + 1);
                    uVal_49 = *(uint8_t *)pU64_55;
                    pU64_55 = (uint *)((int64_t)pU64_55 + 1);
                  }
                  else if (param_1[0xc] == 0) {
                    uVal_49 = 0;
                  }
                  else {
                    iVal_33 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10));
                    param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                    if (iVal_33 == 0) {
                      param_1[0xc] = 0;
                      *(uint8_t *)(param_1 + 0xe) = 0;
                      uVal_49 = 0;
                      pU64_41 = pU64_53;
                    }
                    else {
                      uVal_49 = *(uint8_t *)pU64_43;
                      pU64_41 = (uint *)((int64_t)iVal_33 + (int64_t)pU64_43);
                    }
                    *(uint **)(param_1 + 0x32) = pU64_41;
                    *(uint **)(param_1 + 0x30) = pU64_53;
                    pU64_55 = pU64_53;
                  }
                  *(uint8_t *)((int64_t)&local_88b8 + uVal_58 * 4) = uVal_49;
                  if (iVal_29 != 0xc) {
                    if (pU64_55 < pU64_41) {
                      pU64_55 = (uint *)((int64_t)pU64_55 + 1);
                    }
                    else {
                      if (param_1[0xc] == 0) goto LAB_1800dac0f;
                      iVal_33 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10));
                      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                      if (iVal_33 == 0) {
                        param_1[0xc] = 0;
                        *(uint8_t *)(param_1 + 0xe) = 0;
                        pU64_41 = pU64_53;
                      }
                      else {
                        pU64_41 = (uint *)((int64_t)iVal_33 + (int64_t)pU64_43);
                      }
                      *(uint **)(param_1 + 0x32) = pU64_41;
                      pU64_55 = pU64_53;
                    }
                    *(uint **)(param_1 + 0x30) = pU64_55;
                  }
LAB_1800dac0f:
                  *(uint8_t *)((int64_t)&local_88b8 + uVal_58 * 4 + 3) = 0xff;
                  uVal_58 = uVal_58 + 1;
                } while (local_8998 != uVal_58);
              }
              func_0x1800e58f0(param_1);
              if ((int)local_8970 == 1) {
                uVal_30 = param_1[1];
                if (0 < (int)uVal_30) {
                  uVal_30 = -(*param_1 + 7 >> 3);
                  local_8998 = CONCAT44(local_8998._4_4_,uVal_30) & 0xffffffff00000003;
                  local_8980 = (uint64_t)(uVal_30 & 3);
                  uVal_58 = 0;
                  iVal_29 = 0;
                  do {
                    pU64_55 = *(uint **)(param_1 + 0x30);
                    pU64_41 = *(uint **)(param_1 + 0x32);
                    local_8970 = CONCAT44(local_8970._4_4_,iVal_29);
                    if (pU64_55 < pU64_41) {
                      *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_55 + 1);
                      uVal_30 = (uint)*(byte *)pU64_55;
                      pU64_55 = (uint *)((int64_t)pU64_55 + 1);
                    }
                    else if (param_1[0xc] == 0) {
                      uVal_30 = 0;
                    }
                    else {
                      iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43);
                      param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                      if (iVal_29 == 0) {
                        param_1[0xc] = 0;
                        *(uint8_t *)(param_1 + 0xe) = 0;
                        uVal_30 = 0;
                        pU64_41 = pU64_53;
                      }
                      else {
                        uVal_30 = (uint)*(byte *)pU64_43;
                        pU64_41 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
                      }
                      *(uint **)(param_1 + 0x32) = pU64_41;
                      *(uint **)(param_1 + 0x30) = pU64_53;
                      pU64_55 = pU64_53;
                    }
                    uVal_31 = *param_1;
                    if (0 < (int)uVal_31) {
                      uVal_62 = 0;
                      uVal_54 = 7;
                      uVal_47 = uVal_58 & 0xffffffff;
                      do {
                        while( true ) {
                          uVal_61 = (uint64_t)((uVal_30 >> (uVal_54 & 0x1f) & 1) != 0);
                          lVal_40 = (int64_t)(int)uVal_47;
                          uVal_58 = lVal_40 + 3;
                          *(uint8_t *)((int64_t)pU64_36 + lVal_40) =
                               *(uint8_t *)((int64_t)&local_88b8 + uVal_61 * 4);
                          *(uint8_t *)((int64_t)pU64_36 + lVal_40 + 1) =
                               *(uint8_t *)((int64_t)&local_88b8 + uVal_61 * 4 + 1);
                          *(uint8_t *)((int64_t)pU64_36 + lVal_40 + 2) =
                               *(uint8_t *)((int64_t)&local_88b8 + uVal_61 * 4 + 2);
                          if ((uint)local_89a0 == 4) {
                            *(uint8_t *)((int64_t)pU64_36 + uVal_58) = 0xff;
                            uVal_58 = (uint64_t)((int)uVal_47 + 4);
                          }
                          uVal_62 = uVal_62 + 1;
                          if (uVal_62 == uVal_31) goto LAB_1800db9d1;
                          if (0 < (int)uVal_54) break;
                          if (pU64_55 < pU64_41) {
                            *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_55 + 1);
                            bFlag_50 = *(byte *)pU64_55;
                            pU64_55 = (uint *)((int64_t)pU64_55 + 1);
                          }
                          else if (param_1[0xc] == 0) {
                            bFlag_50 = 0;
                          }
                          else {
                            iVal_29 = (**(func_ptr_t *)(param_1 + 4))
                                               (*(uint64_t *)(param_1 + 10),pU64_43);
                            param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                            if (iVal_29 == 0) {
                              param_1[0xc] = 0;
                              *(uint8_t *)(param_1 + 0xe) = 0;
                              bFlag_50 = 0;
                              pU64_41 = pU64_53;
                            }
                            else {
                              bFlag_50 = *(byte *)pU64_43;
                              pU64_41 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
                            }
                            *(uint **)(param_1 + 0x32) = pU64_41;
                            *(uint **)(param_1 + 0x30) = pU64_53;
                            uVal_31 = *param_1;
                            pU64_55 = pU64_53;
                          }
                          uVal_30 = (uint)bFlag_50;
                          uVal_54 = 7;
                          uVal_47 = uVal_58 & 0xffffffff;
                          if ((int)uVal_31 <= (int)uVal_62) goto LAB_1800db9d1;
                        }
                        uVal_54 = uVal_54 - 1;
                        uVal_47 = uVal_58 & 0xffffffff;
                      } while ((int)uVal_62 < (int)uVal_31);
                    }
LAB_1800db9d1:
                    iVal_29 = (int)local_8970;
                    if ((uint)local_8998 != 0) {
                      if ((*(int64_t *)(param_1 + 4) == 0) ||
                         ((int)(uint)local_8998 <= (int)pU64_41 - (int)pU64_55)) {
                        *(uint8_t **)(param_1 + 0x30) =
                             (uint8_t *)((int64_t)pU64_55 + local_8980);
                      }
                      else {
                        *(uint **)(param_1 + 0x30) = pU64_41;
                        (**(func_ptr_t *)(param_1 + 6))(*(uint64_t *)(param_1 + 10));
                      }
                    }
                    iVal_29 = iVal_29 + 1;
                    uVal_30 = param_1[1];
                  } while (iVal_29 < (int)uVal_30);
                }
LAB_1800dba12:
                uVal_63 = (uint)local_89a0;
              }
              else {
                if ((int)local_8970 == 8) {
                  uVal_31 = *param_1;
                }
                else {
                  if ((int)local_8970 != 4) {
                    thunk_FUN_180695dd0(pU64_36);
                    fnPtr_37 = "bad bpp";
                    goto LAB_1800daa61;
                  }
                  uVal_31 = *param_1 + 1 >> 1;
                }
                uVal_30 = param_1[1];
                if ((int)uVal_30 < 1) goto LAB_1800dba12;
                local_8998 = CONCAT44(local_8998._4_4_,-uVal_31) & 0xffffffff00000003;
                local_8980 = (uint64_t)(-uVal_31 & 3);
                uVal_58 = 0;
                iVal_29 = 0;
                uVal_47 = local_89a0 & 0xffffffff;
                do {
                  if (0 < (int)*param_1) {
                    pU64_55 = *(uint **)(param_1 + 0x30);
                    pU64_41 = *(uint **)(param_1 + 0x32);
                    iVal_33 = 0;
                    do {
                      if (pU64_55 < pU64_41) {
                        *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_55 + 1);
                        bFlag_50 = *(byte *)pU64_55;
                        pU64_55 = (uint *)((int64_t)pU64_55 + 1);
                      }
                      else if (param_1[0xc] == 0) {
                        bFlag_50 = 0;
                      }
                      else {
                        iVal_34 = (**(func_ptr_t *)(param_1 + 4))
                                           (*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
                        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                        if (iVal_34 == 0) {
                          param_1[0xc] = 0;
                          *(uint8_t *)(param_1 + 0xe) = 0;
                          bFlag_50 = 0;
                          pU64_41 = pU64_53;
                        }
                        else {
                          bFlag_50 = *(byte *)pU64_43;
                          pU64_41 = (uint *)((int64_t)iVal_34 + (int64_t)pU64_43);
                        }
                        uVal_47 = local_89a0 & 0xffffffff;
                        *(uint **)(param_1 + 0x32) = pU64_41;
                        *(uint **)(param_1 + 0x30) = pU64_53;
                        pU64_55 = pU64_53;
                      }
                      uVal_31 = bFlag_50 & 0xf;
                      uVal_30 = (uint)(bFlag_50 >> 4);
                      if ((int)local_8970 != 4) {
                        uVal_30 = (uint)bFlag_50;
                      }
                      uVal_61 = (uint64_t)uVal_30;
                      if ((int)local_8970 != 4) {
                        uVal_31 = 0;
                      }
                      lVal_40 = (int64_t)(int)uVal_58;
                      uVal_59 = lVal_40 + 3;
                      *(uint8_t *)((int64_t)pU64_36 + lVal_40) =
                           *(uint8_t *)((int64_t)&local_88b8 + uVal_61 * 4);
                      *(uint8_t *)((int64_t)pU64_36 + lVal_40 + 1) =
                           *(uint8_t *)((int64_t)&local_88b8 + uVal_61 * 4 + 1);
                      *(uint8_t *)((int64_t)pU64_36 + lVal_40 + 2) =
                           *(uint8_t *)((int64_t)&local_88b8 + uVal_61 * 4 + 2);
                      if ((int)uVal_47 == 4) {
                        *(uint8_t *)((int64_t)pU64_36 + uVal_59) = 0xff;
                        uVal_59 = (uint64_t)((int)uVal_58 + 4);
                      }
                      if (iVal_33 + 1U == *param_1) {
                        uVal_58 = uVal_59 & 0xffffffff;
                        break;
                      }
                      if ((int)local_8970 == 8) {
                        if (pU64_55 < pU64_41) {
                          *(uint **)(param_1 + 0x30) = (uint *)((int64_t)pU64_55 + 1);
                          bFlag_50 = *(byte *)pU64_55;
                          pU64_55 = (uint *)((int64_t)pU64_55 + 1);
                        }
                        else if (param_1[0xc] == 0) {
                          bFlag_50 = 0;
                        }
                        else {
                          iVal_34 = (**(func_ptr_t *)(param_1 + 4))
                                             (*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
                          param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                          if (iVal_34 == 0) {
                            param_1[0xc] = 0;
                            *(uint8_t *)(param_1 + 0xe) = 0;
                            bFlag_50 = 0;
                            pU64_41 = pU64_53;
                          }
                          else {
                            bFlag_50 = *(byte *)pU64_43;
                            pU64_41 = (uint *)((int64_t)iVal_34 + (int64_t)pU64_43);
                          }
                          uVal_47 = local_89a0 & 0xffffffff;
                          *(uint **)(param_1 + 0x32) = pU64_41;
                          *(uint **)(param_1 + 0x30) = pU64_53;
                          pU64_55 = pU64_53;
                        }
                        uVal_31 = (uint)bFlag_50;
                      }
                      lVal_40 = (int64_t)(int)uVal_59;
                      uVal_58 = lVal_40 + 3;
                      uVal_61 = (uint64_t)uVal_31;
                      *(uint8_t *)((int64_t)pU64_36 + lVal_40) =
                           *(uint8_t *)((int64_t)&local_88b8 + uVal_61 * 4);
                      *(uint8_t *)((int64_t)pU64_36 + lVal_40 + 1) =
                           *(uint8_t *)((int64_t)&local_88b8 + uVal_61 * 4 + 1);
                      *(uint8_t *)((int64_t)pU64_36 + lVal_40 + 2) =
                           *(uint8_t *)((int64_t)&local_88b8 + uVal_61 * 4 + 2);
                      if ((int)uVal_47 == 4) {
                        *(uint8_t *)((int64_t)pU64_36 + uVal_58) = 0xff;
                        uVal_58 = (uint64_t)((int)uVal_59 + 4);
                      }
                      iVal_33 = iVal_33 + 2;
                    } while (iVal_33 < (int)*param_1);
                  }
                  if ((uint)local_8998 != 0) {
                    if (*(int64_t *)(param_1 + 4) == 0) {
                      lVal_40 = *(int64_t *)(param_1 + 0x30);
                    }
                    else {
                      lVal_40 = *(int64_t *)(param_1 + 0x30);
                      if ((int)*(uint64_t *)(param_1 + 0x32) - (int)lVal_40 < (int)(uint)local_8998
                         ) {
                        *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x32);
                        (**(func_ptr_t *)(param_1 + 6))(*(uint64_t *)(param_1 + 10));
                        uVal_47 = local_89a0 & 0xffffffff;
                        goto LAB_1800db584;
                      }
                    }
                    *(uint64_t *)(param_1 + 0x30) = lVal_40 + local_8980;
                  }
LAB_1800db584:
                  uVal_63 = (uint)uVal_47;
                  iVal_29 = iVal_29 + 1;
                  uVal_30 = param_1[1];
                } while (iVal_29 < (int)uVal_30);
              }
LAB_1800dc15b:
              if (((uVal_63 == 4) && ((uint)local_8978 == 0)) &&
                 (uVal_31 = *param_1 * uVal_30 * 4 - 1, -1 < (int)uVal_31)) {
                uVal_58 = (uint64_t)uVal_31;
                if ((~uVal_31 & 0x1c) != 0) {
                  uVal_47 = (uint64_t)((uVal_31 >> 2) + 1 & 7);
                  do {
                    *(uint8_t *)((int64_t)pU64_36 + uVal_58) = 0xff;
                    uVal_58 = uVal_58 - 4;
                    uVal_47 = uVal_47 - 1;
                  } while (uVal_47 != 0);
                }
                uVal_63 = (uint)local_89a0;
                if (0x1b < uVal_31) {
                  lVal_40 = uVal_58 + 0x20;
                  do {
                    *(uint8_t *)((int64_t)pU64_36 + lVal_40 + -0x20) = 0xff;
                    *(uint8_t *)((int64_t)pU64_36 + lVal_40 + -0x24) = 0xff;
                    *(uint8_t *)((int64_t)pU64_36 + lVal_40 + -0x28) = 0xff;
                    *(uint8_t *)((int64_t)pU64_36 + lVal_40 + -0x2c) = 0xff;
                    *(uint8_t *)((int64_t)pU64_36 + lVal_40 + -0x30) = 0xff;
                    *(uint8_t *)((int64_t)pU64_36 + lVal_40 + -0x34) = 0xff;
                    *(uint8_t *)((int64_t)pU64_36 + lVal_40 + -0x38) = 0xff;
                    *(uint8_t *)((int64_t)pU64_36 + lVal_40 + -0x3c) = 0xff;
                    lVal_40 = lVal_40 + -0x20;
                  } while (0x1f < lVal_40);
                }
              }
              if ((int)local_892c < 1) {
                uVal_31 = *param_1;
              }
              else {
                uVal_31 = *param_1;
                if ((0 < (int)uVal_30 >> 1) && (uVal_62 = uVal_31 * uVal_63, 0 < (int)uVal_62)) {
                  local_8970 = (uint64_t)(uint)((int)uVal_30 >> 1);
                  uVal_58 = (uint64_t)uVal_62;
                  local_8980 = (uint64_t)(uVal_62 & 0x7fffffe0);
                  uVal_64 = uVal_62 & 0x7ffffffc;
                  uVal_54 = (uVal_30 - 1) * uVal_62;
                  uVal_47 = 0;
                  uVal_60 = 0;
                  local_8998 = CONCAT44(local_8998._4_4_,uVal_62);
                  do {
                    uVal_61 = (uint64_t)uVal_54;
                    uVal_59 = (uint64_t)uVal_60;
                    uVal_63 = (uint)uVal_47;
                    if (uVal_62 < 4) {
LAB_1800dc2b0:
                      uVal_57 = 0;
LAB_1800dc2b2:
                      uVal_56 = uVal_57;
                      if ((uVal_62 & 1) != 0) {
                        uVal_51 = (~uVal_63 + uVal_30) * uVal_62;
                        uVal_49 = *(uint8_t *)((int64_t)pU64_36 + uVal_57 + uVal_62 * uVal_63);
                        *(uint8_t *)((int64_t)pU64_36 + uVal_57 + uVal_62 * uVal_63) =
                             *(uint8_t *)((int64_t)pU64_36 + uVal_57 + uVal_51);
                        *(uint8_t *)((int64_t)pU64_36 + uVal_57 + uVal_51) = uVal_49;
                        uVal_56 = uVal_57 | 1;
                      }
                      if (uVal_57 != uVal_58 - 1) {
                        do {
                          uVal_49 = *(uint8_t *)((int64_t)pU64_36 + uVal_56 + uVal_59);
                          *(uint8_t *)((int64_t)pU64_36 + uVal_56 + uVal_59) =
                               *(uint8_t *)((int64_t)pU64_36 + uVal_56 + uVal_61);
                          *(uint8_t *)((int64_t)pU64_36 + uVal_56 + uVal_61) = uVal_49;
                          uVal_49 = *(uint8_t *)((int64_t)pU64_36 + uVal_56 + uVal_59 + 1);
                          *(uint8_t *)((int64_t)pU64_36 + uVal_56 + uVal_59 + 1) =
                               *(uint8_t *)((int64_t)pU64_36 + uVal_56 + uVal_61 + 1);
                          *(uint8_t *)((int64_t)pU64_36 + uVal_56 + uVal_61 + 1) = uVal_49;
                          uVal_56 = uVal_56 + 2;
                        } while (uVal_58 != uVal_56);
                      }
                    }
                    else {
                      uVal_57 = (uint64_t)((~uVal_63 + uVal_30) * uVal_62);
                      local_8978 = (uint8_t *)((int64_t)pU64_36 + uVal_58);
                      if (((uint8_t *)((int64_t)pU64_36 + (uint64_t)(uVal_62 * uVal_63)) <
                           local_8978 + uVal_57) &&
                         ((uint8_t *)(uVal_57 + (int64_t)pU64_36) < local_8978 + uVal_62 * uVal_63))
                      goto LAB_1800dc2b0;
                      if (uVal_62 < 0x20) {
                        uVal_57 = 0;
LAB_1800dc3a6:
                        do {
                          uVal_32 = *(uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_59);
                          *(uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_59) =
                               *(uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_61);
                          *(uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_61) = uVal_32;
                          uVal_57 = uVal_57 + 4;
                        } while (uVal_64 != uVal_57);
                        uVal_57 = (uint64_t)uVal_64;
                        if (uVal_64 == uVal_62) goto LAB_1800dc255;
                        goto LAB_1800dc2b2;
                      }
                      uVal_57 = 0;
                      do {
                        pU64_2 = (uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_59);
                        uVal_32 = *pU64_2;
                        uVal_8 = pU64_2[1];
                        uVal_9 = pU64_2[2];
                        uVal_10 = pU64_2[3];
                        pU64_2 = (uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_59 + 0x10);
                        uVal_11 = *pU64_2;
                        uVal_12 = pU64_2[1];
                        uVal_13 = pU64_2[2];
                        uVal_14 = pU64_2[3];
                        pU64_3 = (uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_61);
                        uVal_15 = pU64_3[1];
                        uVal_16 = pU64_3[2];
                        uVal_17 = pU64_3[3];
                        pU64_2 = (uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_61 + 0x10);
                        uVal_18 = *pU64_2;
                        uVal_19 = pU64_2[1];
                        uVal_20 = pU64_2[2];
                        uVal_21 = pU64_2[3];
                        pU64_2 = (uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_59);
                        *pU64_2 = *pU64_3;
                        pU64_2[1] = uVal_15;
                        pU64_2[2] = uVal_16;
                        pU64_2[3] = uVal_17;
                        pU64_2 = (uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_59 + 0x10);
                        *pU64_2 = uVal_18;
                        pU64_2[1] = uVal_19;
                        pU64_2[2] = uVal_20;
                        pU64_2[3] = uVal_21;
                        pU64_2 = (uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_61);
                        *pU64_2 = uVal_32;
                        pU64_2[1] = uVal_8;
                        pU64_2[2] = uVal_9;
                        pU64_2[3] = uVal_10;
                        pU64_2 = (uint32_t *)((int64_t)pU64_36 + uVal_57 + uVal_61 + 0x10);
                        *pU64_2 = uVal_11;
                        pU64_2[1] = uVal_12;
                        pU64_2[2] = uVal_13;
                        pU64_2[3] = uVal_14;
                        uVal_57 = uVal_57 + 0x20;
                      } while (local_8980 != uVal_57);
                      if ((uVal_62 & 0x7fffffe0) != uVal_62) {
                        uVal_57 = local_8980;
                        if ((uVal_62 & 0x1c) != 0) goto LAB_1800dc3a6;
                        goto LAB_1800dc2b2;
                      }
                    }
LAB_1800dc255:
                    uVal_47 = uVal_47 + 1;
                    uVal_54 = uVal_54 - uVal_62;
                    uVal_60 = uVal_60 + uVal_62;
                    uVal_63 = (uint)local_89a0;
                    local_89a4 = uVal_31;
                  } while (uVal_47 != local_8970);
                }
              }
              if ((local_89a8 != 0) && (local_89a8 != uVal_63)) {
                local_89b8 = uVal_30;
                pU64_36 = (uint *)func_0x1800e3d70(pU64_36,uVal_63);
                if (pU64_36 == (uint *)0x0) goto LAB_1800daa64;
                uVal_31 = *param_1;
              }
              *local_8958 = uVal_31;
              *local_8938 = param_1[1];
              if (local_8950 != (uint *)0x0) {
                *local_8950 = param_1[2];
              }
              goto LAB_1800daa67;
            }
            thunk_FUN_180695dd0(pU64_36);
            fnPtr_37 = "invalid";
          }
          else {
            uVal_62 = (int)local_8968 - (local_8990 + local_88bc);
            local_8968 = (uint64_t)uVal_62;
            uVal_31 = (uint)local_8988;
            if (uVal_62 != 0) {
              if ((int)uVal_62 < 0) {
                *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x32);
              }
              else {
                if (*(int64_t *)(param_1 + 4) == 0) {
                  lVal_35 = *(int64_t *)(param_1 + 0x30);
LAB_1800dba37:
                  *(uint64_t *)(param_1 + 0x30) = local_8968 + lVal_35;
                }
                else {
                  lVal_35 = *(int64_t *)(param_1 + 0x30);
                  if ((int)uVal_62 <= (int)*(uint64_t *)(param_1 + 0x32) - (int)lVal_35)
                  goto LAB_1800dba37;
                  *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x32);
                  (**(func_ptr_t *)(param_1 + 6))(*(uint64_t *)(param_1 + 10));
                }
                uVal_47 = local_89a0 & 0xffffffff;
              }
            }
            uVal_62 = (uint)local_8980;
            if ((int)local_8970 != 0x10) {
              if ((int)local_8970 == 0x20) {
                local_8988 = CONCAT44(local_8988._4_4_,uVal_31);
                local_8960 = 0;
                if ((bool)((uVal_30 ^ 0xff0000 | uVal_31 ^ 0xff00 | (uint)local_8980 ^ 0xff) == 0 &
                          bFlag_22)) {
                  local_895c = 1;
                  goto LAB_1800dbacc;
                }
                uVal_62 = (uint)local_8980;
                local_89a4 = uVal_30;
                goto LAB_1800dbb25;
              }
              local_8960 = 0;
              if ((int)local_8970 != 0x18) goto LAB_1800dbb25;
              local_8960 = *param_1 & 3;
              local_895c = 0;
LAB_1800dbacc:
              local_8988 = CONCAT44(local_8988._4_4_,uVal_31);
              local_893c = 0;
              local_8968 = local_8968 & 0xffffffff00000000;
              local_8990 = 0;
              local_898c = 0;
              local_8944 = 0;
              uVal_54 = 0;
              uVal_58 = 0;
              uVal_31 = 0;
              uVal_62 = 0;
              local_89a4 = uVal_30;
LAB_1800dbc0f:
              uVal_63 = (uint)uVal_47;
              uVal_30 = param_1[1];
              if (0 < (int)uVal_30) {
                local_8940 = -(int)local_8968;
                local_890c = 8 - uVal_54;
                local_8910 = -local_8990;
                local_8914 = 8 - (int)uVal_58;
                local_8918 = -local_898c;
                local_891c = 8 - uVal_31;
                local_88f8 = (uint64_t)uVal_31;
                local_8924 = -local_8944;
                local_8920 = 8 - uVal_62;
                local_8900 = (uint64_t)uVal_62;
                local_8908 = (uint64_t)local_8960;
                uVal_61 = 0;
                local_88e8 = (uint64_t)(uVal_54 << 2);
                iVal_29 = 0;
                pU8_1 = (byte *)((int64_t)param_1 + 0x39);
                local_88f0 = uVal_58;
                do {
                  local_8928 = iVal_29;
                  if ((char)local_893c == '\0') {
                    if (0 < (int)*param_1) {
                      pU8_48 = *(byte **)(param_1 + 0x30);
                      pU8_42 = *(byte **)(param_1 + 0x32);
                      iVal_29 = 0;
                      do {
                        iVal_33 = (int)uVal_61;
                        if (pU8_48 < pU8_42) {
                          *(byte **)(param_1 + 0x30) = pU8_48 + 1;
                          bFlag_50 = *pU8_48;
                          pU8_48 = pU8_48 + 1;
                        }
                        else if (param_1[0xc] == 0) {
                          bFlag_50 = 0;
                        }
                        else {
                          iVal_34 = (**(func_ptr_t *)(param_1 + 4))
                                             (*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
                          param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                          if (iVal_34 == 0) {
                            param_1[0xc] = 0;
                            *(uint8_t *)(param_1 + 0xe) = 0;
                            bFlag_50 = 0;
                            pU8_42 = pU8_1;
                          }
                          else {
                            bFlag_50 = *(byte *)pU64_43;
                            pU8_42 = (byte *)((int64_t)iVal_34 + (int64_t)pU64_43);
                          }
                          *(byte **)(param_1 + 0x32) = pU8_42;
                          *(byte **)(param_1 + 0x30) = pU8_1;
                          uVal_47 = local_89a0 & 0xffffffff;
                          pU8_48 = pU8_1;
                        }
                        lVal_40 = (int64_t)iVal_33;
                        *(byte *)((int64_t)pU64_36 + lVal_40 + 2) = bFlag_50;
                        if (pU8_48 < pU8_42) {
                          *(byte **)(param_1 + 0x30) = pU8_48 + 1;
                          bFlag_50 = *pU8_48;
                          pU8_48 = pU8_48 + 1;
                        }
                        else if (param_1[0xc] == 0) {
                          bFlag_50 = 0;
                        }
                        else {
                          iVal_34 = (**(func_ptr_t *)(param_1 + 4))
                                             (*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
                          param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                          if (iVal_34 == 0) {
                            param_1[0xc] = 0;
                            *(uint8_t *)(param_1 + 0xe) = 0;
                            bFlag_50 = 0;
                            pU8_42 = pU8_1;
                          }
                          else {
                            bFlag_50 = *(byte *)pU64_43;
                            pU8_42 = (byte *)((int64_t)iVal_34 + (int64_t)pU64_43);
                          }
                          uVal_47 = local_89a0 & 0xffffffff;
                          *(byte **)(param_1 + 0x32) = pU8_42;
                          *(byte **)(param_1 + 0x30) = pU8_1;
                          pU8_48 = pU8_1;
                        }
                        *(byte *)((int64_t)pU64_36 + lVal_40 + 1) = bFlag_50;
                        if (pU8_48 < pU8_42) {
                          *(byte **)(param_1 + 0x30) = pU8_48 + 1;
                          bFlag_50 = *pU8_48;
                          pU8_48 = pU8_48 + 1;
                        }
                        else if (param_1[0xc] == 0) {
                          bFlag_50 = 0;
                        }
                        else {
                          iVal_34 = (**(func_ptr_t *)(param_1 + 4))
                                             (*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
                          param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                          if (iVal_34 == 0) {
                            param_1[0xc] = 0;
                            *(uint8_t *)(param_1 + 0xe) = 0;
                            bFlag_50 = 0;
                            pU8_42 = pU8_1;
                          }
                          else {
                            bFlag_50 = *(byte *)pU64_43;
                            pU8_42 = (byte *)((int64_t)iVal_34 + (int64_t)pU64_43);
                          }
                          uVal_47 = local_89a0 & 0xffffffff;
                          *(byte **)(param_1 + 0x32) = pU8_42;
                          *(byte **)(param_1 + 0x30) = pU8_1;
                          pU8_48 = pU8_1;
                        }
                        *(byte *)((int64_t)pU64_36 + lVal_40) = bFlag_50;
                        bFlag_50 = 0xff;
                        if ((char)local_895c != '\0') {
                          if (pU8_48 < pU8_42) {
                            *(byte **)(param_1 + 0x30) = pU8_48 + 1;
                            bFlag_50 = *pU8_48;
                            pU8_48 = pU8_48 + 1;
                          }
                          else if (param_1[0xc] == 0) {
                            bFlag_50 = 0;
                          }
                          else {
                            iVal_34 = (**(func_ptr_t *)(param_1 + 4))
                                               (*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
                            param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                            if (iVal_34 == 0) {
                              param_1[0xc] = 0;
                              *(uint8_t *)(param_1 + 0xe) = 0;
                              bFlag_50 = 0;
                              pU8_42 = pU8_1;
                            }
                            else {
                              bFlag_50 = *(byte *)pU64_43;
                              pU8_42 = (byte *)((int64_t)iVal_34 + (int64_t)pU64_43);
                            }
                            uVal_47 = local_89a0 & 0xffffffff;
                            *(byte **)(param_1 + 0x32) = pU8_42;
                            *(byte **)(param_1 + 0x30) = pU8_1;
                            pU8_48 = pU8_1;
                          }
                        }
                        uVal_61 = lVal_40 + 3;
                        if ((int)uVal_47 == 4) {
                          *(byte *)((int64_t)pU64_36 + uVal_61) = bFlag_50;
                          uVal_61 = (uint64_t)(iVal_33 + 4);
                        }
                        local_8978 = (uint8_t *)
                                     CONCAT44(local_8978._4_4_,(uint)local_8978 | bFlag_50);
                        iVal_29 = iVal_29 + 1;
                      } while (iVal_29 < (int)*param_1);
                    }
                  }
                  else if (0 < (int)*param_1) {
                    iVal_29 = 0;
                    do {
                      iVal_33 = (int)uVal_61;
                      uVal_30 = func_0x1800e8400(param_1);
                      if ((int)local_8970 != 0x10) {
                        iVal_34 = func_0x1800e8400(param_1);
                        uVal_30 = uVal_30 | iVal_34 << 0x10;
                      }
                      uVal_31 = (uVal_30 & local_89a4) >> ((byte)local_8968 & 0x1f);
                      if ((int)local_8968 < 0) {
                        uVal_31 = (uVal_30 & local_89a4) << ((byte)local_8940 & 0x1f);
                      }
                      uVal_62 = (uVal_30 & (uint)local_8988) >> ((byte)local_8990 & 0x1f);
                      if (local_8990 < 0) {
                        uVal_62 = (uVal_30 & (uint)local_8988) << ((byte)local_8910 & 0x1f);
                      }
                      iVal_34 = *(int *)(&DAT_1806b3b10 + local_88f0 * 4);
                      bFlag_50 = (&DAT_1806b3b40)[local_88f0 * 4];
                      uVal_54 = (uVal_30 & (uint)local_8980) >> ((byte)local_898c & 0x1f);
                      if ((int)local_898c < 0) {
                        uVal_54 = (uVal_30 & (uint)local_8980) << ((byte)local_8918 & 0x1f);
                      }
                      lVal_40 = (int64_t)iVal_33;
                      iVal_6 = *(int *)(&DAT_1806b3b10 + local_88f8 * 4);
                      bFlag_4 = (&DAT_1806b3b40)[local_88f8 * 4];
                      *(char *)((int64_t)pU64_36 + lVal_40) =
                           (char)((int)((uVal_31 >> ((byte)local_890c & 0x1f)) *
                                       *(int *)(&DAT_1806b3b10 + local_88e8)) >>
                                 ((&DAT_1806b3b40)[local_88e8] & 0x1f));
                      *(char *)((int64_t)pU64_36 + lVal_40 + 1) =
                           (char)((int)((uVal_62 >> ((byte)local_8914 & 0x1f)) * iVal_34) >>
                                 (bFlag_50 & 0x1f));
                      *(char *)((int64_t)pU64_36 + lVal_40 + 2) =
                           (char)((int)((uVal_54 >> ((byte)local_891c & 0x1f)) * iVal_6) >>
                                 (bFlag_4 & 0x1f));
                      uVal_47 = local_89a0 & 0xffffffff;
                      if ((uint)local_8998 == 0) {
                        uVal_30 = 0xff;
                      }
                      else {
                        uVal_31 = (uVal_30 & (uint)local_8998) >> ((byte)local_8944 & 0x1f);
                        if (local_8944 < 0) {
                          uVal_31 = (uVal_30 & (uint)local_8998) << ((byte)local_8924 & 0x1f);
                        }
                        uVal_30 = (int)((uVal_31 >> ((byte)local_8920 & 0x1f)) *
                                      *(int *)(&DAT_1806b3b10 + local_8900 * 4)) >>
                                 ((&DAT_1806b3b40)[local_8900 * 4] & 0x1f);
                      }
                      uVal_61 = lVal_40 + 3;
                      if ((uint)local_89a0 == 4) {
                        *(char *)((int64_t)pU64_36 + uVal_61) = (char)uVal_30;
                        uVal_61 = (uint64_t)(iVal_33 + 4);
                      }
                      local_8978 = (uint8_t *)CONCAT44(local_8978._4_4_,(uint)local_8978 | uVal_30)
                      ;
                      iVal_29 = iVal_29 + 1;
                    } while (iVal_29 < (int)*param_1);
                  }
                  iVal_29 = local_8928;
                  if (local_8960 != 0) {
                    if (*(int64_t *)(param_1 + 4) == 0) {
                      lVal_40 = *(int64_t *)(param_1 + 0x30);
                    }
                    else {
                      lVal_40 = *(int64_t *)(param_1 + 0x30);
                      if ((int)*(uint64_t *)(param_1 + 0x32) - (int)lVal_40 < (int)local_8960) {
                        *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x32);
                        (**(func_ptr_t *)(param_1 + 6))(*(uint64_t *)(param_1 + 10));
                        uVal_47 = local_89a0 & 0xffffffff;
                        goto LAB_1800dbcf4;
                      }
                    }
                    *(uint64_t *)(param_1 + 0x30) = lVal_40 + local_8908;
                  }
LAB_1800dbcf4:
                  uVal_63 = (uint)uVal_47;
                  iVal_29 = iVal_29 + 1;
                  uVal_30 = param_1[1];
                } while (iVal_29 < (int)uVal_30);
              }
              goto LAB_1800dc15b;
            }
            local_8960 = *param_1 * 2 & 2;
LAB_1800dbb25:
            if ((uVal_31 != 0 && uVal_30 != 0) && uVal_62 != 0) {
              uVal_32 = func_0x1800e8ab0(uVal_30);
              local_8968 = CONCAT44(local_8968._4_4_,uVal_32);
              local_89a4 = uVal_30;
              uVal_54 = func_0x1800e8b20(uVal_30);
              local_8990 = func_0x1800e8ab0(uVal_58 & 0xffffffff);
              local_8988 = CONCAT44(local_8988._4_4_,uVal_31);
              uVal_30 = func_0x1800e8b20(uVal_58 & 0xffffffff);
              uVal_58 = (uint64_t)uVal_30;
              local_898c = func_0x1800e8ab0(uVal_62);
              uVal_31 = func_0x1800e8b20(uVal_62);
              uVal_47 = local_8998;
              local_8944 = func_0x1800e8ab0(local_8998 & 0xffffffff);
              uVal_47 = uVal_47 & 0xffffffff;
              uVal_62 = func_0x1800e8b20(uVal_47);
              if ((uVal_62 < 9 && uVal_31 < 9) && (uVal_30 < 9 && uVal_54 < 9)) {
                local_8968 = CONCAT44(local_8968._4_4_,(int)local_8968 + -7);
                local_8990 = local_8990 + -7;
                local_898c = local_898c - 7;
                local_8944 = local_8944 + -7;
                local_893c = (uint32_t)CONCAT71((int7)(uVal_47 >> 8),1);
                local_895c = 0;
                uVal_47 = local_89a0 & 0xffffffff;
                goto LAB_1800dbc0f;
              }
            }
            thunk_FUN_180695dd0(pU64_36);
            fnPtr_37 = "bad masks";
          }
          goto LAB_1800daa61;
        }
LAB_1800dab61:
        fnPtr_37 = "outofmem";
        goto LAB_1800daa61;
      }
    }
    else {
      if (param_1[0xc] != 0) {
        iVal_29 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_43,param_1[0xd]);
        pU64_55 = *(uint **)(param_1 + 0x34);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - (int)pU64_55);
        if (iVal_29 == 0) {
          param_1[0xc] = 0;
          *(uint8_t *)(param_1 + 0xe) = 0;
          pU64_36 = pU64_53;
        }
        else {
          pU64_36 = (uint *)((int64_t)iVal_29 + (int64_t)pU64_43);
        }
        *(uint **)(param_1 + 0x32) = pU64_36;
        *(uint **)(param_1 + 0x30) = pU64_53;
        pU64_41 = pU64_53;
        if (*(char *)pU64_43 == 'B') goto LAB_1800da1a4;
      }
LAB_1800da36d:
      *(uint **)(param_1 + 0x30) = pU64_55;
      *(uint64_t *)(param_1 + 0x32) = *(uint64_t *)(param_1 + 0x36);
LAB_1800da382:
      iVal_29 = func_0x1800dc4c0(param_1);
      if (iVal_29 != 0) {
        func_0x1806ab010(&local_88b8,0,0x8870);
        pU64_36 = (uint *)func_0x1800e8bc0(param_1,&local_88b8,local_8950,0);
        if ((pU64_36 == param_1) || (pU64_36 == (uint *)0x0)) {
          if (local_88b0 != 0) {
            thunk_FUN_180695dd0();
          }
          pU64_36 = (uint *)0x0;
        }
        else {
          *local_8958 = (uint)local_88b8;
          *param_3 = local_88b8._4_4_;
          if ((local_89a8 & 0xfffffffb) != 0) {
            local_89b8 = local_88b8._4_4_;
            pU64_36 = (uint *)func_0x1800e3d70(pU64_36,4);
          }
        }
        thunk_FUN_180695dd0(local_88a0);
        thunk_FUN_180695dd0(local_88a8);
        goto LAB_1800daa67;
      }
      iVal_29 = func_0x1800e5980(param_1);
      uVal_30 = func_0x1800e5980(param_1);
      param_1[0x30] = param_1[0x34];
      param_1[0x31] = param_1[0x35];
      param_1[0x32] = param_1[0x36];
      param_1[0x33] = param_1[0x37];
      if ((uVal_30 | iVal_29 << 0x10) != 0x38425053) {
        iVal_29 = func_0x1800dc760(param_1);
        if (iVal_29 != 0) {
          if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_89d8)) {
            pU64_43 = (uint *)func_0x1800dc830(param_1,local_8958,param_3,local_8950);
            return pU64_43;
          }
          goto LAB_1800dc4ac;
        }
        iVal_29 = func_0x1800dd450(param_1);
        if (iVal_29 == 0) {
          iVal_29 = func_0x1800dfab0(param_1);
          if (iVal_29 == 0) {
            iVal_29 = func_0x1800c2ea0(param_1);
            pU64_53 = local_8950;
            pU64_43 = local_8958;
            uVal_30 = local_89a8;
            if (iVal_29 != 0) {
              local_89b8 = local_89a8;
              uVal_38 = func_0x1800dfe80(param_1,local_8958,param_3,local_8950);
              if (uVal_30 == 0) {
                uVal_30 = *pU64_53;
              }
              if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_89d8)) {
                pU64_43 = (uint *)func_0x1800e0a90(uVal_38,*pU64_43,*param_3,uVal_30);
                return pU64_43;
              }
              goto LAB_1800dc4ac;
            }
            iVal_29 = func_0x1800e0e40(param_1);
            if (iVal_29 == 0) {
              fnPtr_37 = "unknown image type";
              goto LAB_1800daa61;
            }
            local_89b8 = local_89a8;
            pU64_43 = (uint *)func_0x1800e1240(param_1,local_8958,param_3,local_8950);
          }
          else {
            local_89b0 = param_6;
            local_89b8 = local_89a8;
            pU64_43 = (uint *)func_0x1800dfbf0(param_1,local_8958,param_3,local_8950);
          }
        }
        else {
          local_89b8 = local_89a8;
          pU64_43 = (uint *)func_0x1800dd5b0(param_1,local_8958,param_3,local_8950);
        }
        if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_89d8)) {
          return pU64_43;
        }
        goto LAB_1800dc4ac;
      }
      iVal_29 = func_0x1800e5980();
      uVal_30 = func_0x1800e5980(param_1);
      if ((uVal_30 | iVal_29 << 0x10) == 0x38425053) {
        iVal_29 = func_0x1800e5980(param_1);
        if (iVal_29 == 1) {
          if (*(int64_t *)(param_1 + 4) == 0) {
            lVal_35 = *(int64_t *)(param_1 + 0x30);
LAB_1800da618:
            *(int64_t *)(param_1 + 0x30) = lVal_35 + 6;
          }
          else {
            lVal_35 = *(int64_t *)(param_1 + 0x30);
            iVal_29 = (int)*(uint64_t *)(param_1 + 0x32) - (int)lVal_35;
            if (5 < iVal_29) goto LAB_1800da618;
            *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x32);
            (**(func_ptr_t *)(param_1 + 6))(*(uint64_t *)(param_1 + 10),6 - iVal_29);
          }
          uVal_30 = func_0x1800e5980(param_1);
          if (uVal_30 < 0x11) {
            local_8998 = CONCAT44(local_8998._4_4_,uVal_30);
            iVal_29 = func_0x1800e5980(param_1);
            uVal_30 = func_0x1800e5980(param_1);
            uVal_30 = uVal_30 | iVal_29 << 0x10;
            iVal_29 = func_0x1800e5980(param_1);
            uVal_31 = func_0x1800e5980(param_1);
            local_8978 = (uint8_t *)CONCAT44(local_8978._4_4_,uVal_30);
            if (((int)uVal_30 < 0x1000001) &&
               (uVal_31 = iVal_29 << 0x10 | uVal_31, (int)uVal_31 < 0x1000001)) {
              local_89a4 = uVal_31;
              uVal_30 = func_0x1800e5980(param_1);
              if ((uVal_30 == 8) || (uVal_30 == 0x10)) {
                iVal_29 = func_0x1800e5980(param_1);
                if (iVal_29 == 3) {
                  uVal_32 = func_0x1800e5950(param_1);
                  func_0x1800e58f0(param_1,uVal_32);
                  uVal_32 = func_0x1800e5950(param_1);
                  func_0x1800e58f0(param_1,uVal_32);
                  uVal_32 = func_0x1800e5950(param_1);
                  func_0x1800e58f0(param_1,uVal_32);
                  uVal_31 = func_0x1800e5980(param_1);
                  if (uVal_31 < 2) {
                    iVal_29 = func_0x1800e8320(4,local_89a4,(uint64_t)local_8978 & 0xffffffff,0);
                    if (iVal_29 == 0) goto LAB_1800daa5a;
                    local_898c = uVal_30;
                    if (((param_7 == 0x10) && (uVal_30 == 0x10)) && (uVal_31 == 0)) {
                      pU64_36 = (uint *)func_0x1800e82c0(8,local_89a4,
                                                      (uint64_t)local_8978 & 0xffffffff,0);
                      *(uint32_t *)param_6 = 0x10;
                    }
                    else {
                      pU64_36 = (uint *)_malloc_base((int64_t)
                                                     (int)((uint)local_8978 * local_89a4 * 4));
                    }
                    if (pU64_36 == (uint *)0x0) goto LAB_1800dab61;
                    uVal_30 = local_89a4 * (uint)local_8978;
                    uVal_58 = (uint64_t)uVal_30;
                    iVal_29 = (uint)local_8998;
                    if (uVal_31 == 0) {
                      local_8990 = CONCAT31(local_8990._1_3_,
                                            (local_898c ^ 0x10 | param_7 ^ 0x10) == 0);
                      local_8968 = local_8998 & 0xffffffff;
                      local_895c = uVal_30 - 1;
                      local_8940 = uVal_30 & 0x7ffffff8;
                      local_8970 = (uint64_t)(uVal_30 & 7);
                      uVal_47 = 0;
                      pU64_52 = (uint8_t *)((int64_t)param_1 + 0x39);
                      pU64_53 = pU64_36;
                      pU64_55 = pU64_36;
                      local_89a0 = uVal_58;
                      local_8988 = uVal_58;
                      local_8938 = param_3;
                      do {
                        local_8980 = uVal_47;
                        if (uVal_47 < local_8968) {
                          if (*(int *)param_6 == 0x10) {
                            if (0 < (int)(uint)local_8988) {
                              lVal_40 = 0;
                              do {
                                uVal_27 = func_0x1800e5980(param_1);
                                *(uint16_t *)(pU64_53 + lVal_40 * 2) = uVal_27;
                                lVal_40 = lVal_40 + 1;
                              } while ((uint)local_89a0 != (int)lVal_40);
                            }
                          }
                          else if (local_898c == 0x10) {
                            if (0 < (int)(uint)local_8988) {
                              lVal_40 = 0;
                              do {
                                func_0x1800e5980(param_1);
                                *(uint8_t *)(pU64_55 + lVal_40) = extraout_AH;
                                lVal_40 = lVal_40 + 1;
                              } while ((uint)local_89a0 != (int)lVal_40);
                            }
                          }
                          else if (0 < (int)(uint)local_8988) {
                            pU64_39 = *(uint8_t **)(param_1 + 0x32);
                            lVal_40 = 0;
                            pU64_46 = *(uint8_t **)(param_1 + 0x30);
                            do {
                              if (pU64_46 < pU64_39) {
                                pU64_45 = pU64_46 + 1;
                                *(uint8_t **)(param_1 + 0x30) = pU64_45;
                                uVal_49 = *pU64_46;
                              }
                              else if (param_1[0xc] == 0) {
                                uVal_49 = 0;
                                pU64_45 = pU64_46;
                              }
                              else {
                                iVal_29 = (**(func_ptr_t *)(param_1 + 4))
                                                   (*(uint64_t *)(param_1 + 10),pU64_43,
                                                    param_1[0xd]);
                                param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
                                if (iVal_29 == 0) {
                                  param_1[0xc] = 0;
                                  *(uint8_t *)(param_1 + 0xe) = 0;
                                  uVal_49 = 0;
                                  pU64_39 = pU64_52;
                                }
                                else {
                                  uVal_49 = *(uint8_t *)pU64_43;
                                  pU64_39 = (uint8_t *)((int64_t)iVal_29 + (int64_t)pU64_43);
                                }
                                *(uint8_t **)(param_1 + 0x32) = pU64_39;
                                *(uint8_t **)(param_1 + 0x30) = pU64_52;
                                pU64_45 = pU64_52;
                              }
                              *(uint8_t *)(pU64_55 + lVal_40) = uVal_49;
                              lVal_40 = lVal_40 + 1;
                              pU64_46 = pU64_45;
                            } while ((uint)local_89a0 != (int)lVal_40);
                          }
                        }
                        else if ((char)local_8990 == '\0') {
                          if (0 < (int)(uint)local_8988) {
                            ch_26 = -(uVal_47 == 3);
                            fnPtr_37 = (char *)(uVal_47 + (int64_t)pU64_36);
                            uVal_30 = local_8940;
                            if (6 < local_895c) {
                              do {
                                *fnPtr_37 = ch_26;
                                fnPtr_37[4] = ch_26;
                                fnPtr_37[8] = ch_26;
                                fnPtr_37[0xc] = ch_26;
                                fnPtr_37[0x10] = ch_26;
                                fnPtr_37[0x14] = ch_26;
                                fnPtr_37[0x18] = ch_26;
                                fnPtr_37[0x1c] = ch_26;
                                fnPtr_37 = fnPtr_37 + 0x20;
                                uVal_30 = uVal_30 - 8;
                              } while (uVal_30 != 0);
                              if ((local_8988 & 7) == 0) goto LAB_1800daedd;
                            }
                            lVal_40 = 0;
                            do {
                              fnPtr_37[lVal_40 * 4] = ch_26;
                              lVal_40 = lVal_40 + 1;
                            } while ((int)local_8970 != (int)lVal_40);
                          }
                        }
                        else if (0 < (int)(uint)local_8988) {
                          sz_28 = -(ushort)(uVal_47 == 3);
                          pSize_44 = (short *)((int64_t)pU64_36 + uVal_47 * 2);
                          uVal_30 = local_8940;
                          if (6 < local_895c) {
                            do {
                              *pSize_44 = sz_28;
                              pSize_44[4] = sz_28;
                              pSize_44[8] = sz_28;
                              pSize_44[0xc] = sz_28;
                              pSize_44[0x10] = sz_28;
                              pSize_44[0x14] = sz_28;
                              pSize_44[0x18] = sz_28;
                              pSize_44[0x1c] = sz_28;
                              pSize_44 = pSize_44 + 0x20;
                              uVal_30 = uVal_30 - 8;
                            } while (uVal_30 != 0);
                            if ((local_8988 & 7) == 0) goto LAB_1800daedd;
                          }
                          lVal_40 = 0;
                          do {
                            pSize_44[lVal_40 * 4] = sz_28;
                            lVal_40 = lVal_40 + 1;
                          } while ((int)local_8970 != (int)lVal_40);
                        }
LAB_1800daedd:
                        uVal_47 = local_8980 + 1;
                        pU64_55 = (uint *)((int64_t)pU64_55 + 1);
                        pU64_53 = (uint *)((int64_t)pU64_53 + 2);
                      } while (uVal_47 != 4);
                      uVal_58 = local_8988;
                      param_3 = local_8938;
                      if (3 < (uint)local_8998) {
LAB_1800db104:
                        fVal_66 = DAT_1806b2940;
                        fVal_24 = DAT_1806b26b4;
                        fVal_65 = DAT_1806b26b0;
                        if (*(int *)param_6 == 0x10) {
                          if (0 < (int)uVal_58) {
                            uVal_47 = 0;
                            do {
                              uVal_5 = *(ushort *)((int64_t)pU64_36 + uVal_47 * 8 + 6);
                              if ((ushort)(uVal_5 - 1) < 0xfffe) {
                                fVal_67 = fVal_24 / ((float)(uint)uVal_5 / fVal_66);
                                fVal_65 = (fVal_24 - fVal_67) * fVal_66;
                                auArr_68 = pmovzxwd(ZEXT416(pU64_36[uVal_47 * 2]),
                                                   ZEXT416(pU64_36[uVal_47 * 2]));
                                auArr_69._0_4_ = (int)(fVal_65 + fVal_67 * (float)auArr_68._0_4_);
                                auArr_69._4_4_ = (int)(fVal_65 + fVal_67 * (float)auArr_68._4_4_);
                                auArr_69._8_4_ = (int)((float)auArr_68._8_4_ * 0.0 + 0.0);
                                auArr_69._12_4_ = (int)((float)auArr_68._12_4_ * 0.0 + 0.0);
                                auArr_68 = pshuflw(auArr_69,auArr_69,0xe8);
                                pU64_36[uVal_47 * 2] = auArr_68._0_4_;
                                *(short *)(pU64_36 + uVal_47 * 2 + 1) =
                                     (short)(int)((float)(uint)*(ushort *)(pU64_36 + uVal_47 * 2 + 1)
                                                  * fVal_67 + fVal_65);
                              }
                              uVal_47 = uVal_47 + 1;
                            } while ((uVal_58 & 0xffffffff) != uVal_47);
                          }
                        }
                        else if (0 < (int)uVal_58) {
                          uVal_47 = 0;
                          do {
                            bFlag_50 = *(byte *)((int64_t)pU64_36 + uVal_47 * 4 + 3);
                            if ((byte)(bFlag_50 - 1) < 0xfe) {
                              fVal_67 = fVal_24 / ((float)(uint)bFlag_50 / fVal_65);
                              fVal_66 = (fVal_24 - fVal_67) * fVal_65;
                              *(char *)(pU64_36 + uVal_47) =
                                   (char)(int)((float)(uint)*(byte *)(pU64_36 + uVal_47) * fVal_67 +
                                              fVal_66);
                              *(char *)((int64_t)pU64_36 + uVal_47 * 4 + 1) =
                                   (char)(int)((float)(uint)*(byte *)((int64_t)pU64_36 +
                                                                     uVal_47 * 4 + 1) * fVal_67 +
                                              fVal_66);
                              *(char *)((int64_t)pU64_36 + uVal_47 * 4 + 2) =
                                   (char)(int)((float)(uint)*(byte *)((int64_t)pU64_36 +
                                                                     uVal_47 * 4 + 2) * fVal_67 +
                                              fVal_66);
                            }
                            uVal_47 = uVal_47 + 1;
                          } while ((uVal_58 & 0xffffffff) != uVal_47);
                        }
                      }
                    }
                    else {
                      func_0x1800e58f0(param_1);
                      if ((int)uVal_30 < 1) {
                        if (iVal_29 != 0) {
                          iVal_29 = func_0x1800ea250(param_1,pU64_36,uVal_30);
                          if (iVal_29 == 0) goto LAB_1800db241;
                          if ((uint)local_8998 != 1) {
                            iVal_29 = func_0x1800ea250(param_1,(uint8_t *)((int64_t)pU64_36 + 1),
                                                   uVal_30);
                            if (iVal_29 == 0) goto LAB_1800db241;
                            if (2 < (uint)local_8998) {
                              iVal_29 = func_0x1800ea250(param_1,(uint8_t *)((int64_t)pU64_36 + 2),
                                                     uVal_30);
                              if (iVal_29 == 0) goto LAB_1800db241;
                              if ((uint)local_8998 != 3) goto LAB_1800db22e;
                            }
                          }
                        }
                      }
                      else {
                        if (iVal_29 == 0) {
                          pU64_43 = pU64_36;
                          if (6 < uVal_30 - 1) {
                            uVal_31 = uVal_30 & 0x7ffffff8;
                            do {
                              *(uint8_t *)pU64_43 = 0;
                              *(uint8_t *)(pU64_43 + 1) = 0;
                              *(uint8_t *)(pU64_43 + 2) = 0;
                              *(uint8_t *)(pU64_43 + 3) = 0;
                              *(uint8_t *)(pU64_43 + 4) = 0;
                              *(uint8_t *)(pU64_43 + 5) = 0;
                              *(uint8_t *)(pU64_43 + 6) = 0;
                              *(uint8_t *)(pU64_43 + 7) = 0;
                              pU64_43 = pU64_43 + 8;
                              uVal_31 = uVal_31 - 8;
                            } while (uVal_31 != 0);
                            if ((uVal_30 & 7) == 0) goto LAB_1800db2db;
                          }
                          lVal_40 = 0;
                          do {
                            *(uint8_t *)(pU64_43 + lVal_40) = 0;
                            lVal_40 = lVal_40 + 1;
                          } while ((uVal_30 & 7) != (uint)lVal_40);
LAB_1800db2db:
                          pU64_52 = (uint8_t *)((int64_t)pU64_36 + 1);
                          if (uVal_30 - 1 < 7) {
LAB_1800db31e:
                            lVal_40 = 0;
                            do {
                              pU64_52[lVal_40 * 4] = 0;
                              lVal_40 = lVal_40 + 1;
                            } while ((uVal_30 & 7) != (uint)lVal_40);
                          }
                          else {
                            uVal_31 = uVal_30 & 0x7ffffff8;
                            do {
                              *pU64_52 = 0;
                              pU64_52[4] = 0;
                              pU64_52[8] = 0;
                              pU64_52[0xc] = 0;
                              pU64_52[0x10] = 0;
                              pU64_52[0x14] = 0;
                              pU64_52[0x18] = 0;
                              pU64_52[0x1c] = 0;
                              pU64_52 = pU64_52 + 0x20;
                              uVal_31 = uVal_31 - 8;
                            } while (uVal_31 != 0);
                            if ((uVal_30 & 7) != 0) goto LAB_1800db31e;
                          }
LAB_1800db334:
                          pU64_52 = (uint8_t *)((int64_t)pU64_36 + 2);
                          if (6 < uVal_30 - 1) {
                            uVal_31 = uVal_30 & 0x7ffffff8;
                            do {
                              *pU64_52 = 0;
                              pU64_52[4] = 0;
                              pU64_52[8] = 0;
                              pU64_52[0xc] = 0;
                              pU64_52[0x10] = 0;
                              pU64_52[0x14] = 0;
                              pU64_52[0x18] = 0;
                              pU64_52[0x1c] = 0;
                              pU64_52 = pU64_52 + 0x20;
                              uVal_31 = uVal_31 - 8;
                            } while (uVal_31 != 0);
                            if ((uVal_30 & 7) == 0) goto LAB_1800db38d;
                          }
                          lVal_40 = 0;
                          do {
                            pU64_52[lVal_40 * 4] = 0;
                            lVal_40 = lVal_40 + 1;
                          } while ((uVal_30 & 7) != (uint)lVal_40);
                        }
                        else {
                          iVal_29 = func_0x1800ea250(param_1,pU64_36,uVal_30);
                          if (iVal_29 == 0) goto LAB_1800db241;
                          if ((uint)local_8998 == 1) goto LAB_1800db2db;
                          iVal_29 = func_0x1800ea250(param_1,(uint8_t *)((int64_t)pU64_36 + 1),uVal_58
                                                );
                          if (iVal_29 == 0) goto LAB_1800db241;
                          if ((uint)local_8998 < 3) goto LAB_1800db334;
                          iVal_29 = func_0x1800ea250(param_1,(uint8_t *)((int64_t)pU64_36 + 2),uVal_58
                                                );
                          if (iVal_29 == 0) {
LAB_1800db241:
                            thunk_FUN_180695dd0(pU64_36);
                            fnPtr_37 = "corrupt";
                            goto LAB_1800daa61;
                          }
                          if ((uint)local_8998 != 3) {
LAB_1800db22e:
                            iVal_29 = func_0x1800ea250(param_1,(uint8_t *)((int64_t)pU64_36 + 3),
                                                   uVal_30);
                            if (iVal_29 != 0) goto LAB_1800db104;
                            goto LAB_1800db241;
                          }
                        }
LAB_1800db38d:
                        pU64_52 = (uint8_t *)((int64_t)pU64_36 + 3);
                        if (6 < uVal_30 - 1) {
                          uVal_31 = uVal_30 & 0x7ffffff8;
                          do {
                            *pU64_52 = 0xff;
                            pU64_52[4] = 0xff;
                            pU64_52[8] = 0xff;
                            pU64_52[0xc] = 0xff;
                            pU64_52[0x10] = 0xff;
                            pU64_52[0x14] = 0xff;
                            pU64_52[0x18] = 0xff;
                            pU64_52[0x1c] = 0xff;
                            pU64_52 = pU64_52 + 0x20;
                            uVal_31 = uVal_31 - 8;
                          } while (uVal_31 != 0);
                          if ((uVal_30 & 7) == 0) goto LAB_1800db3e0;
                        }
                        lVal_40 = 0;
                        do {
                          pU64_52[lVal_40 * 4] = 0xff;
                          lVal_40 = lVal_40 + 1;
                        } while ((uVal_30 & 7) != (uint)lVal_40);
                      }
                    }
LAB_1800db3e0:
                    pU64_53 = local_8950;
                    pU64_43 = local_8958;
                    if ((local_89a8 & 0xfffffffb) != 0) {
                      if (*(int *)param_6 == 0x10) {
                        local_89b8 = (uint)local_8978;
                        pU64_36 = (uint *)func_0x1800e4b40(pU64_36,4,local_89a8,local_89a4);
                      }
                      else {
                        local_89b8 = (uint)local_8978;
                        pU64_36 = (uint *)func_0x1800e3d70(pU64_36,4,local_89a8,local_89a4);
                      }
                      if (pU64_36 == (uint *)0x0) goto LAB_1800daa64;
                    }
                    if (pU64_53 != (uint *)0x0) {
                      *pU64_53 = 4;
                    }
                    *param_3 = (uint)local_8978;
                    *pU64_43 = local_89a4;
                    goto LAB_1800daa67;
                  }
                  fnPtr_37 = "bad compression";
                }
                else {
                  fnPtr_37 = "wrong color format";
                }
              }
              else {
                fnPtr_37 = "unsupported bit depth";
              }
            }
            else {
LAB_1800daa5a:
              fnPtr_37 = "too large";
            }
          }
          else {
            fnPtr_37 = "wrong channel count";
          }
        }
        else {
          fnPtr_37 = "wrong version";
        }
      }
      else {
        fnPtr_37 = "not PSD";
      }
LAB_1800daa61:
      *(char **)(lVal_40 + 0x3010) = fnPtr_37;
    }
LAB_1800daa64:
    pU64_36 = (uint *)0x0;
  }
LAB_1800daa67:
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_89d8)) {
    return pU64_36;
  }
LAB_1800dc4ac:
  func_0x180673080(local_48 ^ (uint64_t)auStack_89d8);
  fnPtr_7 = (func_ptr_t )swi(3);
  pU64_43 = (uint *)(*fnPtr_7)();
  return pU64_43;
}

// func_0x1800dc4c0
bool func_0x1800dc4c0(int64_t param_1)
{
  char *fnPtr_1;
  char ch_2;
  char *fnPtr_3;
  int iVal_4;
  char *fnPtr_5;
  char *fnPtr_6;
  bool bFlag_7;
  
  fnPtr_3 = *(char **)(param_1 + 0xc0);
  fnPtr_5 = *(char **)(param_1 + 200);
  if (fnPtr_3 < fnPtr_5) {
    fnPtr_1 = fnPtr_3 + 1;
    *(char **)(param_1 + 0xc0) = fnPtr_1;
    ch_2 = *fnPtr_3;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      bFlag_7 = false;
      goto LAB_1800dc73e;
    }
    fnPtr_3 = (char *)(param_1 + 0x38);
    iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_4 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      fnPtr_5 = (char *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
    }
    else {
      fnPtr_5 = fnPtr_3 + iVal_4;
    }
    *(char **)(param_1 + 200) = fnPtr_5;
    fnPtr_1 = (char *)(param_1 + 0x39);
    *(char **)(param_1 + 0xc0) = fnPtr_1;
    ch_2 = *fnPtr_3;
  }
  bFlag_7 = false;
  if (ch_2 == 'G') {
    bFlag_7 = false;
    if (fnPtr_1 < fnPtr_5) {
      fnPtr_6 = fnPtr_1 + 1;
      *(char **)(param_1 + 0xc0) = fnPtr_6;
      ch_2 = *fnPtr_1;
    }
    else {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800dc73e;
      fnPtr_3 = (char *)(param_1 + 0x38);
      iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_4 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        fnPtr_5 = (char *)(param_1 + 0x39);
        *(uint8_t *)(param_1 + 0x38) = 0;
      }
      else {
        fnPtr_5 = fnPtr_3 + iVal_4;
      }
      *(char **)(param_1 + 200) = fnPtr_5;
      fnPtr_6 = (char *)(param_1 + 0x39);
      *(char **)(param_1 + 0xc0) = fnPtr_6;
      ch_2 = *fnPtr_3;
    }
    bFlag_7 = false;
    if (ch_2 == 'I') {
      bFlag_7 = false;
      if (fnPtr_6 < fnPtr_5) {
        fnPtr_1 = fnPtr_6 + 1;
        *(char **)(param_1 + 0xc0) = fnPtr_1;
        ch_2 = *fnPtr_6;
      }
      else {
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800dc73e;
        fnPtr_3 = (char *)(param_1 + 0x38);
        iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_4 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          fnPtr_5 = (char *)(param_1 + 0x39);
          *(uint8_t *)(param_1 + 0x38) = 0;
        }
        else {
          fnPtr_5 = fnPtr_3 + iVal_4;
        }
        *(char **)(param_1 + 200) = fnPtr_5;
        fnPtr_1 = (char *)(param_1 + 0x39);
        *(char **)(param_1 + 0xc0) = fnPtr_1;
        ch_2 = *fnPtr_3;
      }
      bFlag_7 = false;
      if (ch_2 == 'F') {
        bFlag_7 = false;
        if (fnPtr_1 < fnPtr_5) {
          fnPtr_6 = fnPtr_1 + 1;
          *(char **)(param_1 + 0xc0) = fnPtr_6;
          ch_2 = *fnPtr_1;
        }
        else {
          if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800dc73e;
          fnPtr_3 = (char *)(param_1 + 0x38);
          iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                            (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34))
          ;
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVal_4 == 0) {
            *(uint32_t *)(param_1 + 0x30) = 0;
            fnPtr_5 = (char *)(param_1 + 0x39);
            *(uint8_t *)(param_1 + 0x38) = 0;
          }
          else {
            fnPtr_5 = fnPtr_3 + iVal_4;
          }
          *(char **)(param_1 + 200) = fnPtr_5;
          fnPtr_6 = (char *)(param_1 + 0x39);
          *(char **)(param_1 + 0xc0) = fnPtr_6;
          ch_2 = *fnPtr_3;
        }
        bFlag_7 = false;
        if (ch_2 == '8') {
          bFlag_7 = false;
          if (fnPtr_5 <= fnPtr_6) {
            if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800dc73e;
            func_0x1800e2360(param_1);
            fnPtr_6 = *(char **)(param_1 + 0xc0);
          }
          bFlag_7 = false;
          fnPtr_5 = fnPtr_6 + 1;
          *(char **)(param_1 + 0xc0) = fnPtr_5;
          if ((*fnPtr_6 == '9') || (*fnPtr_6 == '7')) {
            if (*(char **)(param_1 + 200) <= fnPtr_5) {
              if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800dc73e;
              func_0x1800e2360(param_1);
              fnPtr_5 = *(char **)(param_1 + 0xc0);
            }
            *(char **)(param_1 + 0xc0) = fnPtr_5 + 1;
            bFlag_7 = *fnPtr_5 == 'a';
          }
        }
      }
    }
  }
LAB_1800dc73e:
  *(uint32_t *)(param_1 + 0xc0) = *(uint32_t *)(param_1 + 0xd0);
  *(uint32_t *)(param_1 + 0xc4) = *(uint32_t *)(param_1 + 0xd4);
  *(uint32_t *)(param_1 + 200) = *(uint32_t *)(param_1 + 0xd8);
  *(uint32_t *)(param_1 + 0xcc) = *(uint32_t *)(param_1 + 0xdc);
  return bFlag_7;
}

// func_0x1800dc760
uint64_t func_0x1800dc760(int64_t param_1)
{
  int iVal_1;
  int iVal_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  
  iVal_1 = func_0x1800ea530(param_1,&DAT_1807609f3);
  if (iVal_1 == 0) {
    uVal_4 = 0;
  }
  else {
    uVal_5 = *(uint64_t *)(param_1 + 0xc0);
    uVal_3 = *(uint64_t *)(param_1 + 200);
    iVal_1 = 0x54;
    do {
      if (uVal_5 < uVal_3) {
        uVal_5 = uVal_5 + 1;
LAB_1800dc7a3:
        *(uint64_t *)(param_1 + 0xc0) = uVal_5;
      }
      else if (*(int *)(param_1 + 0x30) != 0) {
        iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),param_1 + 0x38,
                           *(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_2 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          *(uint8_t *)(param_1 + 0x38) = 0;
          uVal_3 = param_1 + 0x39U;
        }
        else {
          uVal_3 = (int64_t)iVal_2 + param_1 + 0x38;
        }
        *(uint64_t *)(param_1 + 200) = uVal_3;
        uVal_5 = param_1 + 0x39U;
        goto LAB_1800dc7a3;
      }
      iVal_1 = iVal_1 + -1;
    } while (iVal_1 != 0);
    uVal_4 = func_0x1800ea530(param_1,&DAT_180760302);
  }
  *(uint32_t *)(param_1 + 0xc0) = *(uint32_t *)(param_1 + 0xd0);
  *(uint32_t *)(param_1 + 0xc4) = *(uint32_t *)(param_1 + 0xd4);
  *(uint32_t *)(param_1 + 200) = *(uint32_t *)(param_1 + 0xd8);
  *(uint32_t *)(param_1 + 0xcc) = *(uint32_t *)(param_1 + 0xdc);
  return uVal_4;
}

// func_0x1800dc830
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
uint64_t func_0x1800dc830(int64_t param_1,uint32_t *param_2,uint *param_3,uint *param_4,uint param_5)
{
  byte *pU8_1;
  byte *pU8_2;
  char ch_3;
  bool bFlag_4;
  func_ptr_t fnPtr_5;
  int64_t lVal_6;
  byte bFlag_7;
  int iVal_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  int64_t lVal_12;
  byte *pU8_13;
  int64_t lVal_14;
  byte *pU8_15;
  uint64_t uVal_16;
  byte *pU8_17;
  uint64_t uVal_18;
  char *fnPtr_19;
  int iVal_20;
  byte *pU8_21;
  uint8_t *pU64_22;
  uint32_t *pU64_23;
  byte bFlag_24;
  uint uVal_25;
  uint *pU64_26;
  uint8_t local_f8 [32];
  uint local_d8;
  uint local_d0;
  uint local_cc;
  uint32_t *local_c8;
  uint *local_c0;
  int64_t local_b8;
  uint64_t local_b0;
  uint local_a4;
  uint8_t *local_a0;
  uint *local_98;
  int local_8c;
  uint64_t local_88;
  uint64_t local_80;
  int64_t local_78;
  uint8_t local_6c;
  uint8_t local_6b;
  uint8_t local_6a;
  uint8_t local_69;
  char local_67 [31];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)local_f8;
  pU8_1 = (byte *)(param_1 + 0x38);
  pU8_2 = (byte *)(param_1 + 0x39);
  pU8_21 = *(byte **)(param_1 + 0xc0);
  pU8_15 = *(byte **)(param_1 + 200);
  iVal_20 = 0x5c;
  do {
    if (pU8_21 < pU8_15) {
      pU8_21 = pU8_21 + 1;
LAB_1800dc883:
      *(byte **)(param_1 + 0xc0) = pU8_21;
    }
    else if (*(int *)(param_1 + 0x30) != 0) {
      iVal_8 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_8 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        pU8_15 = pU8_2;
      }
      else {
        pU8_15 = pU8_1 + iVal_8;
      }
      *(byte **)(param_1 + 200) = pU8_15;
      pU8_21 = pU8_2;
      goto LAB_1800dc883;
    }
    iVal_20 = iVal_20 + -1;
  } while (iVal_20 != 0);
  uVal_9 = func_0x1800e5980(param_1);
  uVal_10 = func_0x1800e5980(param_1);
  if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800dc917:
    if (*(uint64_t *)(param_1 + 0xc0) < *(uint64_t *)(param_1 + 200)) goto LAB_1800dc927;
LAB_1800dc9a0:
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_19 = "bad file";
  }
  else {
    iVal_20 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
    if (iVal_20 != 0) {
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_1800dc917;
      goto LAB_1800dc9a0;
    }
LAB_1800dc927:
    if (uVal_10 == 0) {
      local_c8 = param_2;
      local_c0 = param_3;
      func_0x1800e5980(param_1);
      func_0x1800e5980(param_1);
      func_0x1800e5980(param_1);
      func_0x1800e5980(param_1);
LAB_1800dc9fd:
      iVal_20 = uVal_10 * uVal_9 * 4;
      lVal_12 = _malloc_base(iVal_20);
      if (lVal_12 != 0) {
        local_b8 = lVal_12;
        local_b0 = (uint64_t)uVal_9;
        local_98 = param_4;
        func_0x1806ab010(lVal_12,0xff,iVal_20);
        uVal_9 = 0;
        pU8_21 = (byte *)(local_67 + 1);
        lVal_12 = 0;
        local_a4 = uVal_10;
        do {
          if (lVal_12 == 10) {
LAB_1800dd32f:
            lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            fnPtr_19 = "bad format";
LAB_1800dd365:
            *(char **)(lVal_12 + 0x3010) = fnPtr_19;
LAB_1800dd382:
            pU64_26 = local_c0;
            pU64_23 = local_c8;
            thunk_FUN_180695dd0(local_b8);
            local_b8 = 0;
            goto LAB_1800dd395;
          }
          pU8_15 = *(byte **)(param_1 + 0xc0);
          pU8_13 = *(byte **)(param_1 + 200);
          if (pU8_15 < pU8_13) {
            pU8_17 = pU8_15 + 1;
            *(byte **)(param_1 + 0xc0) = pU8_17;
            local_d0 = (uint)*pU8_15;
joined_r0x0001800dcaca:
            if (pU8_17 < pU8_13) goto LAB_1800dcb50;
LAB_1800dcad0:
            if (*(int *)(param_1 + 0x30) == 0) {
              bFlag_7 = 0;
              pU8_21[-2] = 0;
              pU8_15 = pU8_17;
              if (pU8_13 <= pU8_17) goto LAB_1800dcbb9;
              goto LAB_1800dcb6a;
            }
            iVal_20 = (**(func_ptr_t *)(param_1 + 0x10))
                               (*(uint64_t *)(param_1 + 0x28),pU8_1,
                                *(uint32_t *)(param_1 + 0x34));
            *(int *)(param_1 + 0xb8) =
                 *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
            if (iVal_20 == 0) {
              *(uint32_t *)(param_1 + 0x30) = 0;
              *(uint8_t *)(param_1 + 0x38) = 0;
              bFlag_7 = 0;
              pU8_13 = pU8_2;
            }
            else {
              bFlag_7 = *pU8_1;
              pU8_13 = pU8_1 + iVal_20;
            }
            *(byte **)(param_1 + 200) = pU8_13;
            *(byte **)(param_1 + 0xc0) = pU8_2;
            pU8_21[-2] = bFlag_7;
            pU8_17 = pU8_2;
            pU8_15 = pU8_2;
            if (pU8_2 < pU8_13) goto LAB_1800dcb6a;
LAB_1800dcbb9:
            if (*(int *)(param_1 + 0x30) != 0) {
              iVal_20 = (**(func_ptr_t *)(param_1 + 0x10))
                                 (*(uint64_t *)(param_1 + 0x28),pU8_1,
                                  *(uint32_t *)(param_1 + 0x34));
              *(int *)(param_1 + 0xb8) =
                   *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
              if (iVal_20 == 0) {
                *(uint32_t *)(param_1 + 0x30) = 0;
                *(uint8_t *)(param_1 + 0x38) = 0;
                bFlag_24 = 0;
                pU8_13 = pU8_2;
              }
              else {
                bFlag_24 = *pU8_1;
                pU8_13 = pU8_1 + iVal_20;
              }
              *(byte **)(param_1 + 200) = pU8_13;
              *(byte **)(param_1 + 0xc0) = pU8_2;
              pU8_21[-1] = bFlag_24;
              pU8_17 = pU8_2;
              if (pU8_13 <= pU8_2) goto LAB_1800dcc10;
              goto LAB_1800dcc8a;
            }
            pU8_21[-1] = 0;
            if (pU8_17 < pU8_13) goto LAB_1800dcc8a;
LAB_1800dcc10:
            if (*(int *)(param_1 + 0x30) == 0) {
              bFlag_24 = 0;
              *pU8_21 = 0;
              lVal_14 = *(int64_t *)(param_1 + 0x10);
              pU8_15 = pU8_17;
              goto joined_r0x0001800dcc57;
            }
            iVal_20 = (**(func_ptr_t *)(param_1 + 0x10))
                               (*(uint64_t *)(param_1 + 0x28),pU8_1,
                                *(uint32_t *)(param_1 + 0x34));
            *(int *)(param_1 + 0xb8) =
                 *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
            if (iVal_20 == 0) {
              *(uint32_t *)(param_1 + 0x30) = 0;
              *(uint8_t *)(param_1 + 0x38) = 0;
              bFlag_24 = 0;
              pU8_13 = pU8_2;
            }
            else {
              bFlag_24 = *pU8_1;
              pU8_13 = pU8_1 + iVal_20;
            }
            *(byte **)(param_1 + 200) = pU8_13;
            *(byte **)(param_1 + 0xc0) = pU8_2;
            *pU8_21 = bFlag_24;
            pU8_15 = pU8_2;
            if (*(int64_t *)(param_1 + 0x10) != 0) goto LAB_1800dccd8;
LAB_1800dccfd:
            if (pU8_15 < pU8_13) goto LAB_1800dcd06;
LAB_1800dd34b:
            lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            fnPtr_19 = "bad file";
            goto LAB_1800dd365;
          }
          if (*(int *)(param_1 + 0x30) == 0) {
            local_d0 = 0;
            pU8_17 = pU8_15;
            goto joined_r0x0001800dcaca;
          }
          iVal_20 = (**(func_ptr_t *)(param_1 + 0x10))
                             (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34)
                             );
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(param_1 + 0x30) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            local_d0 = 0;
            pU8_13 = pU8_2;
          }
          else {
            local_d0 = (uint)*pU8_1;
            pU8_13 = pU8_1 + iVal_20;
          }
          *(byte **)(param_1 + 200) = pU8_13;
          *(byte **)(param_1 + 0xc0) = pU8_2;
          pU8_17 = pU8_2;
          if (pU8_13 <= pU8_2) goto LAB_1800dcad0;
LAB_1800dcb50:
          pU8_15 = pU8_17 + 1;
          *(byte **)(param_1 + 0xc0) = pU8_15;
          bFlag_7 = *pU8_17;
          pU8_21[-2] = bFlag_7;
          pU8_17 = pU8_15;
          if (pU8_13 <= pU8_15) goto LAB_1800dcbb9;
LAB_1800dcb6a:
          pU8_17 = pU8_15 + 1;
          *(byte **)(param_1 + 0xc0) = pU8_17;
          pU8_21[-1] = *pU8_15;
          if (pU8_13 <= pU8_17) goto LAB_1800dcc10;
LAB_1800dcc8a:
          pU8_15 = pU8_17 + 1;
          *(byte **)(param_1 + 0xc0) = pU8_15;
          bFlag_24 = *pU8_17;
          *pU8_21 = bFlag_24;
          lVal_14 = *(int64_t *)(param_1 + 0x10);
joined_r0x0001800dcc57:
          if (lVal_14 == 0) goto LAB_1800dccfd;
LAB_1800dccd8:
          iVal_20 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
          if (iVal_20 != 0) {
            if (*(int *)(param_1 + 0x30) != 0) {
              pU8_13 = *(byte **)(param_1 + 200);
              pU8_15 = *(byte **)(param_1 + 0xc0);
              goto LAB_1800dccfd;
            }
            goto LAB_1800dd34b;
          }
LAB_1800dcd06:
          if (bFlag_7 != 8) goto LAB_1800dd32f;
          uVal_9 = uVal_9 | bFlag_24;
          pU8_21 = pU8_21 + 3;
          lVal_12 = lVal_12 + 1;
        } while ((char)local_d0 != '\0');
        uVal_9 = 4 - ((uVal_9 & 0x10) == 0);
        if (local_98 != (uint *)0x0) {
          *local_98 = uVal_9;
        }
        pU64_23 = local_c8;
        pU64_26 = local_c0;
        if (local_a4 != 0) {
          local_8c = (int)local_b0 * 4;
          local_88 = (uint64_t)local_a4;
          uVal_18 = 0;
          local_cc = uVal_9;
          do {
            local_a0 = (uint8_t *)((uint64_t)(uint)(local_8c * (int)uVal_18) + local_b8);
            lVal_14 = 0;
            local_80 = uVal_18;
            do {
              lVal_6 = lVal_14 * 3;
              ch_3 = local_67[lVal_6];
              local_78 = lVal_14;
              if (ch_3 == '\0') {
                if ((uint)local_b0 != 0) {
                  ch_3 = local_67[lVal_6 + 1];
                  uVal_18 = local_b0 & 0xffffffff;
                  pU64_22 = local_a0;
                  do {
                    lVal_14 = func_0x1800ea770(param_1,ch_3,pU64_22);
                    uVal_9 = local_cc;
                    if (lVal_14 == 0) goto LAB_1800dd382;
                    pU64_22 = pU64_22 + 4;
                    uVal_9 = (int)uVal_18 - 1;
                    uVal_18 = (uint64_t)uVal_9;
                  } while (uVal_9 != 0);
                }
              }
              else if (ch_3 == '\x01') {
                pU64_22 = local_a0;
                local_d0 = (uint)local_b0;
                if ((uint)local_b0 != 0) {
LAB_1800dd0ca:
                  pU8_21 = *(byte **)(param_1 + 0xc0);
                  pU8_15 = *(byte **)(param_1 + 200);
                  if (pU8_21 < pU8_15) {
                    *(byte **)(param_1 + 0xc0) = pU8_21 + 1;
                    bFlag_7 = *pU8_21;
                    pU8_21 = pU8_21 + 1;
                  }
                  else if (*(int *)(param_1 + 0x30) == 0) {
                    bFlag_7 = 0;
                  }
                  else {
                    iVal_20 = (**(func_ptr_t *)(param_1 + 0x10))
                                       (*(uint64_t *)(param_1 + 0x28),pU8_1,
                                        *(uint32_t *)(param_1 + 0x34));
                    *(int *)(param_1 + 0xb8) =
                         *(int *)(param_1 + 0xb8) +
                         (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                    if (iVal_20 == 0) {
                      *(uint32_t *)(param_1 + 0x30) = 0;
                      *(uint8_t *)(param_1 + 0x38) = 0;
                      bFlag_7 = 0;
                      pU8_15 = pU8_2;
                    }
                    else {
                      bFlag_7 = *pU8_1;
                      pU8_15 = pU8_1 + iVal_20;
                    }
                    *(byte **)(param_1 + 200) = pU8_15;
                    *(byte **)(param_1 + 0xc0) = pU8_2;
                    pU8_21 = pU8_2;
                  }
                  if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800dd181:
                    if (pU8_15 <= pU8_21) goto LAB_1800dd3d8;
                  }
                  else {
                    iVal_20 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
                    if (iVal_20 != 0) {
                      if (*(int *)(param_1 + 0x30) != 0) {
                        pU8_21 = *(byte **)(param_1 + 0xc0);
                        pU8_15 = *(byte **)(param_1 + 200);
                        goto LAB_1800dd181;
                      }
LAB_1800dd3d8:
                      *(char **)(*(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                                + 0x3010) = "bad file";
                      uVal_9 = local_cc;
                      goto LAB_1800dd382;
                    }
                  }
                  uVal_10 = (uint)bFlag_7;
                  if (local_d0 < bFlag_7) {
                    uVal_10 = local_d0;
                  }
                  lVal_14 = func_0x1800ea770(param_1,local_67[lVal_6 + 1],&local_6c);
                  uVal_9 = local_cc;
                  if (lVal_14 == 0) goto LAB_1800dd382;
                  uVal_9 = uVal_10;
                  if (bFlag_7 != 0) {
                    do {
                      bFlag_7 = local_67[lVal_6 + 1];
                      if ((char)bFlag_7 < '\0') {
                        *pU64_22 = local_6c;
                      }
                      if ((bFlag_7 & 0x40) != 0) {
                        pU64_22[1] = local_6b;
                      }
                      if ((bFlag_7 & 0x20) != 0) {
                        pU64_22[2] = local_6a;
                      }
                      if ((bFlag_7 & 0x10) != 0) {
                        pU64_22[3] = local_69;
                      }
                      pU64_22 = pU64_22 + 4;
                      uVal_9 = uVal_9 - 1;
                    } while (uVal_9 != 0);
                  }
                  uVal_9 = local_d0 - uVal_10;
                  bFlag_4 = (int)local_d0 < (int)uVal_10;
                  local_d0 = uVal_9;
                  if (uVal_9 == 0 || bFlag_4) goto LAB_1800dd277;
                  goto LAB_1800dd0ca;
                }
              }
              else {
                if (ch_3 != '\x02') {
                  *(char **)(*(int64_t *)
                              ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                            0x3010) = "bad format";
                  uVal_9 = local_cc;
                  goto LAB_1800dd382;
                }
                uVal_18 = local_b0 & 0xffffffff;
                pU64_22 = local_a0;
                if ((uint)local_b0 != 0) {
                  do {
                    uVal_10 = (uint)uVal_18;
                    pU8_21 = *(byte **)(param_1 + 0xc0);
                    pU8_15 = *(byte **)(param_1 + 200);
                    if (pU8_21 < pU8_15) {
                      *(byte **)(param_1 + 0xc0) = pU8_21 + 1;
                      bFlag_7 = *pU8_21;
                      pU8_21 = pU8_21 + 1;
                    }
                    else if (*(int *)(param_1 + 0x30) == 0) {
                      bFlag_7 = 0;
                    }
                    else {
                      iVal_20 = (**(func_ptr_t *)(param_1 + 0x10))
                                         (*(uint64_t *)(param_1 + 0x28),pU8_1,
                                          *(uint32_t *)(param_1 + 0x34));
                      *(int *)(param_1 + 0xb8) =
                           *(int *)(param_1 + 0xb8) +
                           (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                      if (iVal_20 == 0) {
                        *(uint32_t *)(param_1 + 0x30) = 0;
                        *(uint8_t *)(param_1 + 0x38) = 0;
                        bFlag_7 = 0;
                        pU8_15 = pU8_2;
                      }
                      else {
                        bFlag_7 = *pU8_1;
                        pU8_15 = pU8_1 + iVal_20;
                      }
                      *(byte **)(param_1 + 200) = pU8_15;
                      *(byte **)(param_1 + 0xc0) = pU8_2;
                      pU8_21 = pU8_2;
                    }
                    if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800dce9c:
                      if (pU8_15 <= pU8_21) goto LAB_1800dd3d8;
                    }
                    else {
                      iVal_20 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
                      if (iVal_20 != 0) {
                        if (*(int *)(param_1 + 0x30) != 0) {
                          pU8_21 = *(byte **)(param_1 + 0xc0);
                          pU8_15 = *(byte **)(param_1 + 200);
                          goto LAB_1800dce9c;
                        }
                        goto LAB_1800dd3d8;
                      }
                    }
                    uVal_11 = (uint)bFlag_7;
                    if ((char)bFlag_7 < '\0') {
                      if (uVal_11 == 0x80) {
                        pU8_21 = *(byte **)(param_1 + 0xc0);
                        pU8_15 = *(byte **)(param_1 + 200);
                        if (pU8_21 < pU8_15) {
                          *(byte **)(param_1 + 0xc0) = pU8_21 + 1;
                          uVal_9 = (uint)*pU8_21;
                          pU8_21 = pU8_21 + 1;
                        }
                        else if (*(int *)(param_1 + 0x30) == 0) {
                          uVal_9 = 0;
                        }
                        else {
                          iVal_20 = (**(func_ptr_t *)(param_1 + 0x10))
                                             (*(uint64_t *)(param_1 + 0x28),pU8_1,
                                              *(uint32_t *)(param_1 + 0x34));
                          *(int *)(param_1 + 0xb8) =
                               *(int *)(param_1 + 0xb8) +
                               (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                          if (iVal_20 == 0) {
                            *(uint32_t *)(param_1 + 0x30) = 0;
                            *(uint8_t *)(param_1 + 0x38) = 0;
                            uVal_9 = 0;
                            pU8_15 = pU8_2;
                          }
                          else {
                            uVal_9 = (uint)*pU8_1;
                            pU8_15 = pU8_1 + iVal_20;
                          }
                          *(byte **)(param_1 + 200) = pU8_15;
                          *(byte **)(param_1 + 0xc0) = pU8_2;
                          pU8_21 = pU8_2;
                        }
                        if (pU8_21 < pU8_15) {
                          *(byte **)(param_1 + 0xc0) = pU8_21 + 1;
                          bFlag_7 = *pU8_21;
                        }
                        else if (*(int *)(param_1 + 0x30) == 0) {
                          bFlag_7 = 0;
                        }
                        else {
                          iVal_20 = (**(func_ptr_t *)(param_1 + 0x10))
                                             (*(uint64_t *)(param_1 + 0x28),pU8_1,
                                              *(uint32_t *)(param_1 + 0x34));
                          *(int *)(param_1 + 0xb8) =
                               *(int *)(param_1 + 0xb8) +
                               (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                          if (iVal_20 == 0) {
                            *(uint32_t *)(param_1 + 0x30) = 0;
                            *(uint8_t *)(param_1 + 0x38) = 0;
                            bFlag_7 = 0;
                            pU8_21 = pU8_2;
                          }
                          else {
                            bFlag_7 = *pU8_1;
                            pU8_21 = pU8_1 + iVal_20;
                          }
                          *(byte **)(param_1 + 200) = pU8_21;
                          *(byte **)(param_1 + 0xc0) = pU8_2;
                        }
                        uVal_11 = (uint)bFlag_7 | uVal_9 << 8;
                      }
                      else {
                        uVal_11 = uVal_11 - 0x7f;
                      }
                      if (uVal_10 < uVal_11) goto LAB_1800dd3d8;
                      lVal_14 = func_0x1800ea770(param_1,local_67[lVal_6 + 1],&local_6c);
                      uVal_9 = local_cc;
                      if (lVal_14 == 0) goto LAB_1800dd382;
                      uVal_9 = uVal_11;
                      if (0 < (int)uVal_11) {
                        do {
                          bFlag_7 = local_67[lVal_6 + 1];
                          if ((char)bFlag_7 < '\0') {
                            *pU64_22 = local_6c;
                          }
                          if ((bFlag_7 & 0x40) != 0) {
                            pU64_22[1] = local_6b;
                          }
                          if ((bFlag_7 & 0x20) != 0) {
                            pU64_22[2] = local_6a;
                          }
                          if ((bFlag_7 & 0x10) != 0) {
                            pU64_22[3] = local_69;
                          }
                          pU64_22 = pU64_22 + 4;
                          uVal_9 = uVal_9 - 1;
                        } while (uVal_9 != 0);
                      }
                    }
                    else {
                      uVal_25 = uVal_11 + 1;
                      local_d0 = uVal_25;
                      if (uVal_10 <= uVal_11) goto LAB_1800dd3d8;
                      do {
                        lVal_14 = func_0x1800ea770(param_1,local_67[lVal_6 + 1],pU64_22);
                        uVal_9 = local_cc;
                        if (lVal_14 == 0) goto LAB_1800dd382;
                        pU64_22 = pU64_22 + 4;
                        uVal_25 = uVal_25 - 1;
                        uVal_11 = local_d0;
                      } while (uVal_25 != 0);
                    }
                    uVal_18 = (uint64_t)(uVal_10 - uVal_11);
                  } while (uVal_10 - uVal_11 != 0 && (int)uVal_11 <= (int)uVal_10);
                }
              }
LAB_1800dd277:
              lVal_14 = local_78 + 1;
            } while (lVal_12 != lVal_14);
            uVal_18 = local_80 + 1;
            pU64_23 = local_c8;
            pU64_26 = local_c0;
            uVal_9 = local_cc;
          } while (uVal_18 != local_88);
        }
LAB_1800dd395:
        *pU64_23 = (int)local_b0;
        *pU64_26 = local_a4;
        if (param_5 != 0) {
          uVal_9 = param_5;
        }
        if (param_5 == 0 && local_98 != (uint *)0x0) {
          uVal_9 = *local_98;
        }
        local_d8 = local_a4;
        uVal_16 = func_0x1800e3d70(local_b8,4,uVal_9);
        goto LAB_1800dd300;
      }
    }
    else {
      if (((uint)(0x7fffffff / (uint64_t)uVal_10) < uVal_9) || (0x1fffffff < uVal_10 * uVal_9)) {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        fnPtr_19 = "too large";
        goto LAB_1800dd2f7;
      }
      local_c8 = param_2;
      local_c0 = param_3;
      func_0x1800e5980(param_1);
      func_0x1800e5980(param_1);
      func_0x1800e5980(param_1);
      func_0x1800e5980(param_1);
      if ((uVal_9 <= (uint)(0x7fffffff / (uint64_t)uVal_10)) && (uVal_10 * uVal_9 < 0x20000000))
      goto LAB_1800dc9fd;
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_19 = "outofmem";
  }
LAB_1800dd2f7:
  *(char **)(lVal_12 + 0x3010) = fnPtr_19;
  uVal_16 = 0;
LAB_1800dd300:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)local_f8)) {
    func_0x180673080(local_48 ^ (uint64_t)local_f8);
    fnPtr_5 = (func_ptr_t )swi(3);
    uVal_16 = (*fnPtr_5)();
    return uVal_16;
  }
  return uVal_16;
}

// func_0x1800dd450
/* WARNING: Removing unreachable block (ram,0x0001800dd4b6) */
/* WARNING: Removing unreachable block (ram,0x0001800dd4b6) */
uint64_t func_0x1800dd450(int64_t param_1)
{
  int64_t lVal_1;
  func_ptr_t fnPtr_2;
  char ch_3;
  int64_t *pLong_4;
  uint64_t uVal_5;
  uint8_t auStack_48 [36];
  uint local_24;
  uint64_t local_20;
  
  local_20 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  pLong_4 = (int64_t *)_calloc_base(1,0x4888);
  if (pLong_4 == (int64_t *)0x0) {
    *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x3010) = "outofmem";
    uVal_5 = 0;
  }
  else {
    *pLong_4 = param_1;
    pLong_4[0x90e] = (int64_t)&LAB_1800eac20;
    pLong_4[0x90f] = (int64_t)&LAB_1800eb190;
    pLong_4[0x910] = (int64_t)&LAB_1800eb290;
    lVal_1 = cpuid_Version_info(1);
    local_24 = *(uint *)(lVal_1 + 8);
    if ((local_24 & 0x4000000) != 0) {
      pLong_4[0x90e] = (int64_t)func_0x1800eb4e0;
      pLong_4[0x90f] = (int64_t)func_0x1800ebcf0;
      pLong_4[0x910] = (int64_t)&LAB_1800ebfb0;
    }
    pLong_4[0x909] = -0x100000000;
    *(uint8_t *)(pLong_4 + 0x905) = 0xff;
    ch_3 = func_0x1800ec2f0(pLong_4);
    if (ch_3 != -0x28) {
      *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x3010) = "no SOI";
    }
    uVal_5 = (uint64_t)(ch_3 == -0x28);
    *(uint32_t *)(param_1 + 0xc0) = *(uint32_t *)(param_1 + 0xd0);
    *(uint32_t *)(param_1 + 0xc4) = *(uint32_t *)(param_1 + 0xd4);
    *(uint32_t *)(param_1 + 200) = *(uint32_t *)(param_1 + 0xd8);
    *(uint32_t *)(param_1 + 0xcc) = *(uint32_t *)(param_1 + 0xdc);
    thunk_FUN_180695dd0(pLong_4);
  }
  if (DAT_18083cf40 != (local_20 ^ (uint64_t)auStack_48)) {
    func_0x180673080(local_20 ^ (uint64_t)auStack_48);
    fnPtr_2 = (func_ptr_t )swi(3);
    uVal_5 = (*fnPtr_2)();
    return uVal_5;
  }
  return uVal_5;
}

// func_0x1800dd5b0
/* WARNING: Removing unreachable block (ram,0x0001800dd640) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x0001800dd640) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1800dd5b0(uint *param_1,uint *param_2,uint *param_3,int *param_4,uint param_5)
{
  short sz_1;
  uint64_t uVal_2;
  bool bFlag_3;
  func_ptr_t fnPtr_4;
  uint3 uVal_5;
  byte bFlag_6;
  short sz_7;
  short sz_8;
  short sz_9;
  short sz_10;
  short sz_11;
  short sz_12;
  short sz_13;
  short sz_14;
  short sz_15;
  short sz_16;
  short sz_17;
  short sz_18;
  short sz_19;
  short sz_20;
  byte bFlag_21;
  char ch_22;
  int iVal_23;
  uint uVal_24;
  int iVal_25;
  uint **ptr2_U64_26;
  byte *pU8_27;
  int64_t lVal_28;
  uint *pU64_29;
  uint64_t uVal_30;
  int64_t lVal_31;
  uint uVal_32;
  char *fnPtr_33;
  uint64_t uVal_34;
  int64_t lVal_35;
  uint8_t *pU64_36;
  uint32_t *pU64_37;
  uint uVal_38;
  int iVal_39;
  int64_t lVal_40;
  uint *pU64_41;
  uint **ptr2_U64_42;
  uint64_t uVal_43;
  int iVal_44;
  uint **ptr2_U64_45;
  uint uVal_46;
  uint64_t uVal_47;
  int *pInt_48;
  int iVal_49;
  uint **ptr2_U64_50;
  uint64_t uVal_51;
  uint16_t uVal_52;
  int iVal_53;
  int64_t lVal_54;
  uint8_t auArr_55 [16];
  uint8_t auArr_56 [16];
  uint8_t auStack_1e8 [32];
  uint64_t local_1c8;
  int local_1c0;
  uint **local_1b8;
  uint64_t local_1b0;
  uint64_t local_1a8;
  uint64_t local_1a0;
  uint **local_198;
  uint64_t local_190;
  uint64_t local_188;
  uint64_t local_180;
  int local_178;
  int local_174;
  uint *local_170;
  uint *local_168;
  int *local_160;
  uint local_158;
  uint64_t local_150 [2];
  int local_140 [42];
  uint8_t local_98 [16];
  uint8_t local_88 [24];
  uint64_t local_70;
  
  local_70 = DAT_18083cf40 ^ (uint64_t)auStack_1e8;
  ptr2_U64_26 = (uint **)_calloc_base(1,0x4888);
  if (ptr2_U64_26 == (uint **)0x0) {
    *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x3010) = "outofmem";
    lVal_31 = 0;
    goto LAB_1800dfa53;
  }
  *ptr2_U64_26 = param_1;
  ptr2_U64_26[0x90e] = (uint *)&LAB_1800eac20;
  ptr2_U64_26[0x90f] = (uint *)&LAB_1800eb190;
  ptr2_U64_26[0x910] = (uint *)&LAB_1800eb290;
  lVal_31 = cpuid_Version_info(1);
  local_158 = *(uint *)(lVal_31 + 8);
  if ((local_158 & 0x4000000) != 0) {
    ptr2_U64_26[0x90e] = (uint *)func_0x1800eb4e0;
    ptr2_U64_26[0x90f] = (uint *)func_0x1800ebcf0;
    ptr2_U64_26[0x910] = (uint *)&LAB_1800ebfb0;
  }
  (*ptr2_U64_26)[2] = 0;
  if (4 < param_5) {
    lVal_31 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_33 = "bad req_comp";
    goto LAB_1800dd6ae;
  }
  *(uint32_t *)(ptr2_U64_26 + 0x90d) = 0;
  *(uint8_t (*)[16])(ptr2_U64_26 + 0x8db) = (uint8_t  [16])0x0;
  *(uint8_t (*)[16])(ptr2_U64_26 + 0x8e7) = (uint8_t  [16])0x0;
  *(uint8_t (*)[16])(ptr2_U64_26 + 0x8f3) = (uint8_t  [16])0x0;
  *(uint8_t (*)[16])(ptr2_U64_26 + 0x8ff) = (uint8_t  [16])0x0;
  local_170 = param_2;
  local_168 = param_3;
  local_160 = param_4;
  iVal_23 = func_0x1800eaad0(ptr2_U64_26,0);
  if (iVal_23 != 0) {
LAB_1800dd73e:
    bFlag_21 = func_0x1800ec2f0();
LAB_1800dd746:
    if (bFlag_21 == 0xda) {
      iVal_23 = func_0x1800e5980(*ptr2_U64_26);
      pU64_29 = *ptr2_U64_26;
      pU64_41 = *(uint **)(pU64_29 + 0x30);
      if (pU64_41 < *(uint **)(pU64_29 + 0x32)) {
        pU8_27 = (byte *)((int64_t)pU64_41 + 1);
      }
      else {
        if (pU64_29[0xc] == 0) {
          *(uint32_t *)((int64_t)ptr2_U64_26 + 0x4854) = 0;
          fnPtr_33 = "bad SOS component count";
          goto LAB_1800df9ad;
        }
        pU64_41 = pU64_29 + 0xe;
        iVal_39 = (**(func_ptr_t *)(pU64_29 + 4))(*(uint64_t *)(pU64_29 + 10),pU64_41,pU64_29[0xd]);
        pU64_29[0x2e] = pU64_29[0x2e] + (pU64_29[0x30] - pU64_29[0x34]);
        if (iVal_39 == 0) {
          pU64_29[0xc] = 0;
          pU8_27 = (byte *)((int64_t)pU64_29 + 0x39);
          *(uint8_t *)(pU64_29 + 0xe) = 0;
        }
        else {
          pU8_27 = (byte *)((int64_t)iVal_39 + (int64_t)pU64_41);
        }
        *(byte **)(pU64_29 + 0x32) = pU8_27;
        pU8_27 = (byte *)((int64_t)pU64_29 + 0x39);
      }
      *(byte **)(pU64_29 + 0x30) = pU8_27;
      bFlag_21 = *(byte *)pU64_41;
      *(uint *)((int64_t)ptr2_U64_26 + 0x4854) = (uint)bFlag_21;
      if (((byte)(bFlag_21 - 5) < 0xfc) || (pU64_41 = *ptr2_U64_26, (int)pU64_41[2] < (int)(uint)bFlag_21))
      {
        fnPtr_33 = "bad SOS component count";
        goto LAB_1800df9ad;
      }
      if (iVal_23 != (uint)bFlag_21 * 2 + 6) {
        fnPtr_33 = "bad SOS len";
        goto LAB_1800df9ad;
      }
      lVal_31 = 0;
      do {
        ptr2_U64_45 = ptr2_U64_26 + 0x8d4;
        pU8_27 = *(byte **)(pU64_41 + 0x30);
        if (pU8_27 < *(byte **)(pU64_41 + 0x32)) {
          *(byte **)(pU64_41 + 0x30) = pU8_27 + 1;
          uVal_46 = (uint)*pU8_27;
          pU64_41 = *ptr2_U64_26;
          pU8_27 = *(byte **)(pU64_41 + 0x30);
          if (*(byte **)(pU64_41 + 0x32) <= pU8_27) goto LAB_1800dd934;
LAB_1800dd83a:
          *(byte **)(pU64_41 + 0x30) = pU8_27 + 1;
          bFlag_21 = *pU8_27;
          pU64_41 = *ptr2_U64_26;
          uVal_38 = pU64_41[2];
joined_r0x0001800dd9b2:
          uVal_51 = (uint64_t)(int)uVal_38;
          if ((int64_t)uVal_51 < 1) goto LAB_1800dd9b8;
LAB_1800dd859:
          uVal_34 = 0;
          ptr2_U64_50 = ptr2_U64_45;
          while (*(uint *)ptr2_U64_50 != uVal_46) {
            uVal_34 = uVal_34 + 1;
            ptr2_U64_50 = ptr2_U64_50 + 0xc;
            if (uVal_51 == uVal_34) goto LAB_1800df9c7;
          }
        }
        else {
          if (pU64_41[0xc] == 0) {
            uVal_46 = 0;
            pU64_41 = *ptr2_U64_26;
            pU8_27 = *(byte **)(pU64_41 + 0x30);
            if (*(byte **)(pU64_41 + 0x32) <= pU8_27) goto LAB_1800dd934;
            goto LAB_1800dd83a;
          }
          pU64_29 = pU64_41 + 0xe;
          iVal_23 = (**(func_ptr_t *)(pU64_41 + 4))(*(uint64_t *)(pU64_41 + 10),pU64_29,pU64_41[0xd]);
          pU64_41[0x2e] = pU64_41[0x2e] + (pU64_41[0x30] - pU64_41[0x34]);
          if (iVal_23 == 0) {
            pU64_41[0xc] = 0;
            pU8_27 = (byte *)((int64_t)pU64_41 + 0x39);
            *(uint8_t *)(pU64_41 + 0xe) = 0;
            uVal_46 = 0;
          }
          else {
            pU8_27 = (byte *)((int64_t)iVal_23 + (int64_t)pU64_29);
            uVal_46 = (uint)*(byte *)pU64_29;
          }
          *(byte **)(pU64_41 + 0x32) = pU8_27;
          *(int64_t *)(pU64_41 + 0x30) = (int64_t)pU64_41 + 0x39;
          pU64_41 = *ptr2_U64_26;
          pU8_27 = *(byte **)(pU64_41 + 0x30);
          if (pU8_27 < *(byte **)(pU64_41 + 0x32)) goto LAB_1800dd83a;
LAB_1800dd934:
          if (pU64_41[0xc] != 0) {
            pU64_29 = pU64_41 + 0xe;
            iVal_23 = (**(func_ptr_t *)(pU64_41 + 4))(*(uint64_t *)(pU64_41 + 10),pU64_29,pU64_41[0xd]);
            pU64_41[0x2e] = pU64_41[0x2e] + (pU64_41[0x30] - pU64_41[0x34]);
            if (iVal_23 == 0) {
              pU64_41[0xc] = 0;
              pU64_36 = (uint8_t *)((int64_t)pU64_41 + 0x39);
              *(uint8_t *)(pU64_41 + 0xe) = 0;
              bFlag_21 = 0;
            }
            else {
              pU64_36 = (uint8_t *)((int64_t)iVal_23 + (int64_t)pU64_29);
              bFlag_21 = *(byte *)pU64_29;
            }
            *(uint8_t **)(pU64_41 + 0x32) = pU64_36;
            *(int64_t *)(pU64_41 + 0x30) = (int64_t)pU64_41 + 0x39;
            pU64_41 = *ptr2_U64_26;
            uVal_38 = pU64_41[2];
            goto joined_r0x0001800dd9b2;
          }
          bFlag_21 = 0;
          pU64_41 = *ptr2_U64_26;
          uVal_51 = (uint64_t)(int)pU64_41[2];
          if (0 < (int64_t)uVal_51) goto LAB_1800dd859;
LAB_1800dd9b8:
          uVal_34 = 0;
        }
        if ((int)uVal_34 == (int)uVal_51) goto LAB_1800df9c7;
        *(uint *)(ptr2_U64_26 + (uVal_34 & 0xffffffff) * 0xc + 0x8d6) = (uint)(bFlag_21 >> 4);
        if (0x3f < bFlag_21) {
          fnPtr_33 = "bad DC huff";
          goto LAB_1800df9ad;
        }
        *(uint *)((int64_t)ptr2_U64_45 + (uVal_34 & 0xffffffff) * 0x60 + 0x14) = bFlag_21 & 0xf;
        if (3 < (bFlag_21 & 0xf)) {
          fnPtr_33 = "bad AC huff";
          goto LAB_1800df9ad;
        }
        *(int *)((int64_t)ptr2_U64_26 + lVal_31 * 4 + 0x4858) = (int)uVal_34;
        lVal_31 = lVal_31 + 1;
      } while (lVal_31 < *(int *)((int64_t)ptr2_U64_26 + 0x4854));
      pU8_27 = *(byte **)(pU64_41 + 0x30);
      if (pU8_27 < *(byte **)(pU64_41 + 0x32)) {
LAB_1800dda3f:
        *(byte **)(pU64_41 + 0x30) = pU8_27 + 1;
        pU64_41 = *ptr2_U64_26;
        *(uint *)((int64_t)ptr2_U64_26 + 0x4834) = (uint)*pU8_27;
        pU8_27 = *(byte **)(pU64_41 + 0x30);
        if (pU8_27 < *(byte **)(pU64_41 + 0x32)) goto LAB_1800dda9d;
LAB_1800dda69:
        if (pU64_41[0xc] != 0) {
          func_0x1800e2360(pU64_41);
          pU8_27 = *(byte **)(pU64_41 + 0x30);
          goto LAB_1800dda9d;
        }
        *(uint32_t *)(ptr2_U64_26 + 0x907) = 0;
        pU8_27 = *(byte **)(pU64_41 + 0x30);
        if (*(byte **)(pU64_41 + 0x32) <= pU8_27) goto LAB_1800ddac7;
LAB_1800ddaff:
        *(byte **)(pU64_41 + 0x30) = pU8_27 + 1;
        bFlag_21 = *pU8_27;
      }
      else {
        if (pU64_41[0xc] != 0) {
          func_0x1800e2360(pU64_41);
          pU8_27 = *(byte **)(pU64_41 + 0x30);
          goto LAB_1800dda3f;
        }
        *(uint32_t *)((int64_t)ptr2_U64_26 + 0x4834) = 0;
        pU8_27 = *(byte **)(pU64_41 + 0x30);
        if (*(byte **)(pU64_41 + 0x32) <= pU8_27) goto LAB_1800dda69;
LAB_1800dda9d:
        *(byte **)(pU64_41 + 0x30) = pU8_27 + 1;
        pU64_41 = *ptr2_U64_26;
        *(uint *)(ptr2_U64_26 + 0x907) = (uint)*pU8_27;
        pU8_27 = *(byte **)(pU64_41 + 0x30);
        if (pU8_27 < *(byte **)(pU64_41 + 0x32)) goto LAB_1800ddaff;
LAB_1800ddac7:
        if (pU64_41[0xc] != 0) {
          func_0x1800e2360(pU64_41);
          pU8_27 = *(byte **)(pU64_41 + 0x30);
          goto LAB_1800ddaff;
        }
        bFlag_21 = 0;
      }
      *(uint *)((int64_t)ptr2_U64_26 + 0x483c) = (uint)(bFlag_21 >> 4);
      uVal_38 = bFlag_21 & 0xf;
      *(uint *)(ptr2_U64_26 + 0x908) = uVal_38;
      uVal_46 = *(uint *)((int64_t)ptr2_U64_26 + 0x4834);
      if (*(int *)(ptr2_U64_26 + 0x906) == 0) {
        if ((uVal_46 | bFlag_21 >> 4 | uVal_38) != 0) goto LAB_1800df8bf;
        *(uint32_t *)(ptr2_U64_26 + 0x907) = 0x3f;
      }
      else if ((((0x3f < (int)uVal_46) || (0x3f < *(int *)(ptr2_U64_26 + 0x907))) ||
               (*(int *)(ptr2_U64_26 + 0x907) < (int)uVal_46)) || ((0xdf < bFlag_21 || (0xd < uVal_38)))) {
LAB_1800df8bf:
        fnPtr_33 = "bad SOS";
        goto LAB_1800df9ad;
      }
      iVal_23 = *(int *)(ptr2_U64_26 + 0x90d);
      if (iVal_23 == 0) {
        iVal_23 = 0x7fffffff;
      }
      ptr2_U64_26[0x904] = (uint *)0x0;
      *(uint32_t *)((int64_t)ptr2_U64_26 + 0x482c) = 0;
      *(uint32_t *)(ptr2_U64_26 + 0x8fb) = 0;
      *(uint32_t *)(ptr2_U64_26 + 0x8ef) = 0;
      *(uint32_t *)(ptr2_U64_26 + 0x8e3) = 0;
      *(uint32_t *)(ptr2_U64_26 + 0x8d7) = 0;
      *(uint8_t *)(ptr2_U64_26 + 0x905) = 0xff;
      *(int *)((int64_t)ptr2_U64_26 + 0x486c) = iVal_23;
      *(uint32_t *)((int64_t)ptr2_U64_26 + 0x4844) = 0;
      if (*(int *)(ptr2_U64_26 + 0x906) == 0) {
        if (*(int *)((int64_t)ptr2_U64_26 + 0x4854) == 1) {
          iVal_23 = *(int *)(ptr2_U64_26 + 0x90b);
          lVal_31 = (int64_t)iVal_23;
          lVal_54 = lVal_31 * 0x60;
          iVal_39 = *(int *)(ptr2_U64_26 + lVal_31 * 0xc + 0x8d8) + 7 >> 3;
          bFlag_3 = true;
          if ((0 < iVal_39) &&
             (uVal_46 = *(int *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46bc) + 7 >> 3, 0 < (int)uVal_46)) {
            iVal_49 = 0;
            local_1b0 = local_1b0 & 0xffffffff00000000;
            do {
              lVal_35 = 0;
              do {
                lVal_28 = (int64_t)*(int *)((int64_t)ptr2_U64_45 + lVal_54 + 0x14);
                local_1b8 = ptr2_U64_26 +
                            (int64_t)*(int *)((int64_t)ptr2_U64_45 + lVal_54 + 0xc) * 0x10 + 0x691;
                local_1c8 = ptr2_U64_26 + lVal_28 * 0x80 + 0x6d1;
                local_1c0 = iVal_23;
                iVal_44 = func_0x1800ee3c0(ptr2_U64_26,&local_158,
                                       ptr2_U64_26 +
                                       (int64_t)*(int *)(ptr2_U64_45 + lVal_31 * 0xc + 2) * 0xd2 + 1,
                                       ptr2_U64_26 + lVal_28 * 0xd2 + 0x349);
                if (iVal_44 == 0) goto LAB_1800de9c7;
                iVal_44 = *(int *)((int64_t)ptr2_U64_45 + lVal_54 + 0x24);
                (*(func_ptr_t )ptr2_U64_26[0x90e])
                          ((int64_t)ptr2_U64_45[lVal_31 * 0xc + 6] + lVal_35 + iVal_49 * iVal_44,iVal_44,
                           &local_158);
                pInt_48 = (int *)((int64_t)ptr2_U64_26 + 0x486c);
                iVal_44 = *pInt_48;
                *pInt_48 = *pInt_48 + -1;
                if (*pInt_48 == 0 || SBORROW4(iVal_44,1) != *pInt_48 < 0) {
                  if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < 0x18) {
                    func_0x1800ee8e0(ptr2_U64_26);
                  }
                  if ((*(byte *)(ptr2_U64_26 + 0x905) & 0xf8) != 0xd0) goto LAB_1800de5c0;
                  ptr2_U64_26[0x904] = (uint *)0x0;
                  *(uint32_t *)((int64_t)ptr2_U64_26 + 0x482c) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8fb) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8ef) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8e3) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8d7) = 0;
                  *(uint8_t *)(ptr2_U64_26 + 0x905) = 0xff;
                  iVal_44 = *(int *)(ptr2_U64_26 + 0x90d);
                  if (iVal_44 == 0) {
                    iVal_44 = 0x7fffffff;
                  }
                  *(int *)((int64_t)ptr2_U64_26 + 0x486c) = iVal_44;
                  *(uint32_t *)((int64_t)ptr2_U64_26 + 0x4844) = 0;
                }
                lVal_35 = lVal_35 + 8;
              } while ((uint64_t)uVal_46 << 3 != lVal_35);
              iVal_44 = (uint)local_1b0 + 1;
              iVal_49 = iVal_49 + 8;
              local_1b0 = CONCAT44(local_1b0._4_4_,iVal_44);
            } while (iVal_44 != iVal_39);
LAB_1800de5c0:
            bFlag_3 = true;
          }
        }
        else {
          iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x4694);
          bFlag_3 = true;
          if ((0 < iVal_39) && (iVal_49 = *(int *)(ptr2_U64_26 + 0x8d2), 0 < iVal_49)) {
            local_1a0 = local_1a0 & 0xffffffff00000000;
            do {
              if (0 < iVal_49) {
                local_1b0 = local_1b0 & 0xffffffff00000000;
                iVal_39 = iVal_23;
                do {
                  iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4854);
                  if (0 < iVal_23) {
                    uVal_51 = 0;
                    do {
                      iVal_39 = *(int *)((int64_t)ptr2_U64_26 + uVal_51 * 4 + 0x4858);
                      lVal_31 = (int64_t)iVal_39;
                      lVal_54 = lVal_31 * 0x60;
                      iVal_49 = *(int *)(ptr2_U64_26 + lVal_31 * 0xc + 0x8d5);
                      if ((0 < iVal_49) &&
                         (iVal_44 = *(int *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46a4), 0 < iVal_44)) {
                        iVal_23 = 0;
                        local_190 = uVal_51;
                        do {
                          if (0 < iVal_44) {
                            iVal_49 = 0;
                            do {
                              iVal_53 = *(int *)(ptr2_U64_26 + lVal_31 * 0xc + 0x8d5);
                              lVal_35 = (int64_t)*(int *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46b4);
                              local_1b8 = ptr2_U64_26 +
                                          (int64_t)*(int *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46ac) *
                                          0x10 + 0x691;
                              local_1c8 = ptr2_U64_26 + lVal_35 * 0x80 + 0x6d1;
                              local_1c0 = iVal_39;
                              iVal_25 = func_0x1800ee3c0(ptr2_U64_26,&local_158,
                                                     ptr2_U64_26 +
                                                     (int64_t)
                                                     *(int *)(ptr2_U64_26 + lVal_31 * 0xc + 0x8d6) *
                                                     0xd2 + 1,ptr2_U64_26 + lVal_35 * 0xd2 + 0x349);
                              if (iVal_25 == 0) goto LAB_1800de9c7;
                              iVal_25 = *(int *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46c4);
                              (*(func_ptr_t )ptr2_U64_26[0x90e])
                                        ((int64_t)ptr2_U64_26[lVal_31 * 0xc + 0x8da] +
                                         (int64_t)(int)((iVal_44 * (uint)local_1b0 + iVal_49) * 8) +
                                         (int64_t)
                                         (int)((iVal_53 * (uint)local_1a0 + iVal_23) * iVal_25 * 8),
                                         iVal_25,&local_158);
                              iVal_49 = iVal_49 + 1;
                              iVal_44 = *(int *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46a4);
                            } while (iVal_49 < iVal_44);
                            iVal_49 = *(int *)(ptr2_U64_26 + lVal_31 * 0xc + 0x8d5);
                            uVal_51 = local_190;
                          }
                          iVal_23 = iVal_23 + 1;
                        } while (iVal_23 < iVal_49);
                        iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4854);
                      }
                      uVal_51 = uVal_51 + 1;
                    } while ((int64_t)uVal_51 < (int64_t)iVal_23);
                    iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x486c);
                  }
                  bFlag_3 = true;
                  iVal_23 = iVal_39 + -1;
                  *(int *)((int64_t)ptr2_U64_26 + 0x486c) = iVal_23;
                  if (iVal_23 == 0 || iVal_39 < 1) {
                    if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < 0x18) {
                      func_0x1800ee8e0(ptr2_U64_26);
                    }
                    if ((*(byte *)(ptr2_U64_26 + 0x905) & 0xf8) != 0xd0) goto LAB_1800de9c9;
                    ptr2_U64_26[0x904] = (uint *)0x0;
                    *(uint32_t *)((int64_t)ptr2_U64_26 + 0x482c) = 0;
                    *(uint32_t *)(ptr2_U64_26 + 0x8fb) = 0;
                    *(uint32_t *)(ptr2_U64_26 + 0x8ef) = 0;
                    *(uint32_t *)(ptr2_U64_26 + 0x8e3) = 0;
                    *(uint32_t *)(ptr2_U64_26 + 0x8d7) = 0;
                    *(uint8_t *)(ptr2_U64_26 + 0x905) = 0xff;
                    iVal_23 = *(int *)(ptr2_U64_26 + 0x90d);
                    if (iVal_23 == 0) {
                      iVal_23 = 0x7fffffff;
                    }
                    *(int *)((int64_t)ptr2_U64_26 + 0x486c) = iVal_23;
                    *(uint32_t *)((int64_t)ptr2_U64_26 + 0x4844) = 0;
                  }
                  iVal_44 = (uint)local_1b0 + 1;
                  iVal_49 = *(int *)(ptr2_U64_26 + 0x8d2);
                  local_1b0 = CONCAT44(local_1b0._4_4_,iVal_44);
                  iVal_39 = iVal_23;
                } while (iVal_44 < iVal_49);
                iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x4694);
              }
              bFlag_3 = true;
              iVal_44 = (uint)local_1a0 + 1;
              local_1a0 = CONCAT44(local_1a0._4_4_,iVal_44);
            } while (iVal_44 < iVal_39);
          }
        }
        goto LAB_1800de9c9;
      }
      if (*(int *)((int64_t)ptr2_U64_26 + 0x4854) == 1) {
        local_180 = (uint64_t)*(int *)(ptr2_U64_26 + 0x90b);
        local_174 = *(int *)(ptr2_U64_26 + local_180 * 0xc + 0x8d8) + 7 >> 3;
        if (0 < local_174) {
          iVal_23 = *(int *)((int64_t)ptr2_U64_26 + local_180 * 0x60 + 0x46bc) + 7 >> 3;
          local_1a8 = CONCAT44(local_1a8._4_4_,iVal_23);
          if (0 < iVal_23) {
            ptr2_U64_45 = ptr2_U64_26 + local_180 * 0xc + 0x8d4;
            local_190 = local_190 & 0xffffffff00000000;
            do {
              iVal_23 = 0;
              do {
                lVal_31 = (int64_t)((*(int *)(ptr2_U64_45 + 0xb) * (int)local_190 + iVal_23) * 0x40) * 2
                         + (int64_t)ptr2_U64_45[10];
                uVal_51 = (uint64_t)*(int *)((int64_t)ptr2_U64_26 + 0x4834);
                local_1a0 = CONCAT44(local_1a0._4_4_,iVal_23);
                if (uVal_51 == 0) {
                  iVal_23 = func_0x1800eeaf0(ptr2_U64_26,lVal_31,
                                         ptr2_U64_26 + (int64_t)*(int *)(ptr2_U64_45 + 2) * 0xd2 + 1);
                  if (iVal_23 == 0) goto LAB_1800df9c7;
                }
                else {
                  lVal_54 = (int64_t)*(int *)((int64_t)ptr2_U64_45 + 0x14);
                  ptr2_U64_50 = ptr2_U64_26 + lVal_54 * 0xd2 + 0x349;
                  local_1b0 = CONCAT44(local_1b0._4_4_,*(uint32_t *)(ptr2_U64_26 + 0x908));
                  iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4844);
                  if (*(int *)((int64_t)ptr2_U64_26 + 0x483c) == 0) {
                    if (iVal_23 == 0) {
                      local_198 = ptr2_U64_45;
                      do {
                        while( true ) {
                          while( true ) {
                            if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < 0x10) {
                              func_0x1800ee8e0(ptr2_U64_26);
                            }
                            uVal_46 = *(uint *)(ptr2_U64_26 + 0x904);
                            uVal_34 = (uint64_t)(uVal_46 >> 0x17);
                            sz_1 = *(short *)((int64_t)ptr2_U64_26 +
                                              uVal_34 * 2 + lVal_54 * 0x400 + 0x3688);
                            uVal_38 = (uint)sz_1;
                            iVal_23 = (int)uVal_51;
                            if (sz_1 == 0) break;
                            uVal_32 = uVal_38 & 0xf;
                            if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < (int)uVal_32)
                            goto LAB_1800df9a6;
                            lVal_35 = (int64_t)iVal_23 + (uint64_t)(uVal_38 >> 4 & 0xf);
                            *(uint *)(ptr2_U64_26 + 0x904) = uVal_46 << (sbyte)uVal_32;
                            *(uint *)((int64_t)ptr2_U64_26 + 0x4824) =
                                 *(int *)((int64_t)ptr2_U64_26 + 0x4824) - uVal_32;
                            uVal_46 = (int)lVal_35 + 1;
                            uVal_51 = (uint64_t)uVal_46;
                            *(short *)(lVal_31 + (uint64_t)(byte)(&DAT_1806b3b70)[lVal_35] * 2) =
                                 (short)((uVal_38 >> 8) << ((byte)local_1b0 & 0x1f));
                            if (*(int *)(ptr2_U64_26 + 0x907) < (int)uVal_46) goto LAB_1800dddb6;
                          }
                          if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < 0x10) {
                            func_0x1800ee8e0(ptr2_U64_26);
                            uVal_46 = *(uint *)(ptr2_U64_26 + 0x904);
                            uVal_34 = (uint64_t)(uVal_46 >> 0x17);
                          }
                          ptr2_U64_45 = local_198;
                          uVal_51 = (uint64_t)*(byte *)((int64_t)ptr2_U64_50 + uVal_34);
                          if (uVal_51 == 0xff) {
                            lVal_35 = 0;
                            do {
                              lVal_28 = lVal_35;
                              lVal_35 = lVal_28 + 1;
                            } while (*(uint *)((int64_t)ptr2_U64_26 +
                                              lVal_28 * 4 + lVal_54 * 0x690 + 0x2074) <=
                                     uVal_46 >> 0x10);
                            iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                            if (lVal_35 == 8) goto LAB_1800df99d;
                            if ((iVal_39 < (int)(lVal_28 + 10)) ||
                               (uVal_38 = (uVal_46 >> (0x17U - (char)lVal_35 & 0x1f) &
                                         *(uint *)(&UNK_1806b3bf4 + lVal_35 * 4)) +
                                         *(int *)((int64_t)ptr2_U64_26 +
                                                 lVal_35 * 4 + lVal_54 * 0x690 + 0x20b8),
                               0xff < uVal_38)) goto LAB_1800df9a6;
                            iVal_39 = (iVal_39 - (int)lVal_35) + -9;
                            *(int *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_39;
                            *(uint *)(ptr2_U64_26 + 0x904) = uVal_46 << ((byte)(lVal_28 + 10) & 0x1f);
                            uVal_51 = (uint64_t)uVal_38;
                          }
                          else {
                            bFlag_21 = *(byte *)((int64_t)ptr2_U64_50 + uVal_51 + 0x500);
                            iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x4824) - (uint)bFlag_21;
                            if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < (int)(uint)bFlag_21)
                            goto LAB_1800df9a6;
                            *(uint *)(ptr2_U64_26 + 0x904) = uVal_46 << (bFlag_21 & 0x1f);
                            *(int *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_39;
                          }
                          bFlag_21 = *(byte *)((int64_t)ptr2_U64_50 + uVal_51 + 0x400);
                          uVal_38 = bFlag_21 & 0xf;
                          bFlag_6 = bFlag_21 >> 4;
                          uVal_46 = (uint)bFlag_6;
                          if ((bFlag_21 & 0xf) == 0) break;
                          lVal_35 = (int64_t)iVal_23 + (uint64_t)uVal_46;
                          bFlag_21 = (&DAT_1806b3b70)[lVal_35];
                          if (iVal_39 < (int)uVal_38) {
                            func_0x1800ee8e0(ptr2_U64_26);
                            iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                          }
                          iVal_23 = 0;
                          if ((int)uVal_38 <= iVal_39) {
                            uVal_46 = *(uint *)(ptr2_U64_26 + 0x904);
                            uVal_24 = uVal_46 << (sbyte)uVal_38 | uVal_46 >> 0x20 - (sbyte)uVal_38;
                            uVal_32 = *(uint *)(&DAT_1806b3bd0 + uVal_38 * 4);
                            *(uint *)(ptr2_U64_26 + 0x904) = ~uVal_32 & uVal_24;
                            *(uint *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_39 - uVal_38;
                            iVal_23 = 0;
                            if (-1 < (int)uVal_46) {
                              iVal_23 = *(int *)(&DAT_1806b3c20 + uVal_38 * 4);
                            }
                            iVal_23 = (uVal_24 & uVal_32) + iVal_23;
                          }
                          uVal_46 = (int)lVal_35 + 1;
                          uVal_51 = (uint64_t)uVal_46;
                          *(short *)(lVal_31 + (uint64_t)bFlag_21 * 2) =
                               (short)(iVal_23 << ((byte)local_1b0 & 0x1f));
                          ptr2_U64_45 = local_198;
                          if (*(int *)(ptr2_U64_26 + 0x907) < (int)uVal_46) goto LAB_1800dddb6;
                        }
                        if (bFlag_21 < 0xf0) {
                          *(int *)((int64_t)ptr2_U64_26 + 0x4844) = 1 << bFlag_6;
                          if (uVal_46 == 0) {
                            iVal_23 = 0;
                          }
                          else {
                            if (iVal_39 < (int)uVal_46) {
                              func_0x1800ee8e0(ptr2_U64_26);
                              iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                            }
                            iVal_23 = -1;
                            if ((int)uVal_46 <= iVal_39) {
                              uVal_32 = *(uint *)(ptr2_U64_26 + 0x904) << bFlag_6 |
                                       *(uint *)(ptr2_U64_26 + 0x904) >> 0x20 - bFlag_6;
                              uVal_38 = *(uint *)(&DAT_1806b3bd0 + (uint64_t)uVal_46 * 4);
                              *(uint *)(ptr2_U64_26 + 0x904) = ~uVal_38 & uVal_32;
                              *(uint *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_39 - uVal_46;
                              iVal_23 = (uVal_32 & uVal_38) - 1;
                            }
                            iVal_23 = iVal_23 + *(int *)((int64_t)ptr2_U64_26 + 0x4844);
                          }
                          goto LAB_1800dddb0;
                        }
                        uVal_51 = (uint64_t)(iVal_23 + 0x10U);
                      } while ((int)(iVal_23 + 0x10U) <= *(int *)(ptr2_U64_26 + 0x907));
                    }
                    else {
                      iVal_23 = iVal_23 + -1;
LAB_1800dddb0:
                      *(int *)((int64_t)ptr2_U64_26 + 0x4844) = iVal_23;
                    }
                  }
                  else {
                    bFlag_21 = (byte)*(uint32_t *)(ptr2_U64_26 + 0x908);
                    if (iVal_23 == 0) {
                      local_178 = (0x10000 << (bFlag_21 & 0x1f)) >> 0x10;
                      local_1b0 = CONCAT44(local_1b0._4_4_,local_178);
                      local_178 = -local_178;
                      ptr2_U64_42 = ptr2_U64_26 + lVal_54 * 0xd2 + 0x417;
                      local_198 = ptr2_U64_42;
                      local_188 = ptr2_U64_50;
                      do {
                        if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < 0x10) {
                          func_0x1800ee8e0(ptr2_U64_26);
                        }
                        uVal_46 = *(uint *)(ptr2_U64_26 + 0x904);
                        uVal_34 = (uint64_t)
                                 *(byte *)((int64_t)ptr2_U64_50 + (uint64_t)(uVal_46 >> 0x17));
                        if (uVal_34 == 0xff) {
                          lVal_54 = 0;
                          do {
                            lVal_35 = lVal_54;
                            lVal_54 = lVal_35 + 1;
                          } while (*(uint *)((int64_t)ptr2_U64_42 + lVal_35 * 4 + -0x44) <=
                                   uVal_46 >> 0x10);
                          iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                          if (lVal_54 == 8) goto LAB_1800df99d;
                          if ((iVal_39 < (int)(lVal_35 + 10)) ||
                             (uVal_38 = (uVal_46 >> (0x17U - (char)lVal_54 & 0x1f) &
                                       *(uint *)(&UNK_1806b3bf4 + lVal_54 * 4)) +
                                       *(int *)((int64_t)ptr2_U64_42 + lVal_54 * 4), 0xff < uVal_38))
                          goto LAB_1800df9a6;
                          iVal_49 = uVal_46 << ((byte)(lVal_35 + 10) & 0x1f);
                          iVal_23 = (iVal_39 - (int)lVal_54) + -9;
                          *(int *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_23;
                          *(int *)(ptr2_U64_26 + 0x904) = iVal_49;
                          uVal_34 = (uint64_t)uVal_38;
                        }
                        else {
                          bFlag_21 = *(byte *)((int64_t)ptr2_U64_50 + uVal_34 + 0x500);
                          iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4824) - (uint)bFlag_21;
                          if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < (int)(uint)bFlag_21)
                          goto LAB_1800df9a6;
                          iVal_49 = uVal_46 << (bFlag_21 & 0x1f);
                          *(int *)(ptr2_U64_26 + 0x904) = iVal_49;
                          *(int *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_23;
                        }
                        bFlag_21 = *(byte *)((int64_t)ptr2_U64_50 + uVal_34 + 0x400);
                        bFlag_6 = bFlag_21 >> 4;
                        uVal_46 = (uint)bFlag_6;
                        uVal_34 = (uint64_t)uVal_46;
                        if ((bFlag_21 & 0xf) == 0) {
                          uVal_52 = 0;
                          uVal_47 = 0xf;
                          if (bFlag_21 < 0xf0) {
                            *(int *)((int64_t)ptr2_U64_26 + 0x4844) = ~(-1 << bFlag_6);
                            uVal_47 = 0x40;
                            if (uVal_46 != 0) {
                              if (iVal_23 < (int)uVal_46) {
                                func_0x1800ee8e0(ptr2_U64_26);
                                iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                              }
                              uVal_52 = 0;
                              uVal_38 = 0;
                              if ((int)uVal_46 <= iVal_23) {
                                uVal_38 = *(uint *)(ptr2_U64_26 + 0x904) << bFlag_6 |
                                         *(uint *)(ptr2_U64_26 + 0x904) >> 0x20 - bFlag_6;
                                uVal_32 = *(uint *)(&DAT_1806b3bd0 + uVal_34 * 4);
                                *(uint *)(ptr2_U64_26 + 0x904) = ~uVal_32 & uVal_38;
                                uVal_38 = uVal_38 & uVal_32;
                                *(uint *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_23 - uVal_46;
                              }
                              *(int *)((int64_t)ptr2_U64_26 + 0x4844) =
                                   *(int *)((int64_t)ptr2_U64_26 + 0x4844) + uVal_38;
                            }
                          }
                        }
                        else {
                          if ((bFlag_21 & 0xf) != 1) goto LAB_1800df9a6;
                          uVal_47 = uVal_34;
                          if (iVal_23 < 1) {
                            func_0x1800ee8e0(ptr2_U64_26);
                            iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                            if (iVal_23 < 1) {
                              uVal_52 = (uint16_t)local_178;
                              goto LAB_1800de079;
                            }
                            iVal_49 = *(int *)(ptr2_U64_26 + 0x904);
                          }
                          *(int *)(ptr2_U64_26 + 0x904) = iVal_49 * 2;
                          *(int *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_23 + -1;
                          if (iVal_49 < 0) {
                            uVal_52 = (uint16_t)local_1b0;
                          }
                          else {
                            uVal_52 = (uint16_t)local_178;
                          }
                        }
LAB_1800de079:
                        iVal_23 = *(int *)(ptr2_U64_26 + 0x907);
                        if ((int)uVal_51 <= iVal_23) {
                          uVal_34 = (int64_t)(int)uVal_51;
                          do {
                            uVal_43 = (uint64_t)(byte)(&DAT_1806b3b70)[uVal_34];
                            if (*(short *)(lVal_31 + uVal_43 * 2) == 0) {
                              if ((int)uVal_47 == 0) {
                                uVal_51 = (uint64_t)((int)uVal_34 + 1);
                                *(uint16_t *)(lVal_31 + uVal_43 * 2) = uVal_52;
                                iVal_23 = *(int *)(ptr2_U64_26 + 0x907);
                                ptr2_U64_42 = local_198;
                                ptr2_U64_50 = local_188;
                                break;
                              }
                              uVal_47 = (uint64_t)((int)uVal_47 - 1);
                            }
                            else {
                              iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                              if (iVal_23 < 1) {
                                func_0x1800ee8e0(ptr2_U64_26);
                                iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                                if (iVal_23 < 1) goto LAB_1800de0a1;
                              }
                              iVal_39 = *(int *)(ptr2_U64_26 + 0x904);
                              *(int *)(ptr2_U64_26 + 0x904) = iVal_39 * 2;
                              *(int *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_23 + -1;
                              if (iVal_39 < 0) {
                                sz_1 = *(short *)(lVal_31 + uVal_43 * 2);
                                if (((uint)local_1b0 & (int)sz_1) == 0) {
                                  sz_7 = (short)local_1b0;
                                  if (sz_1 < 1) {
                                    sz_7 = -sz_7;
                                  }
                                  *(short *)(lVal_31 + uVal_43 * 2) = sz_1 + sz_7;
                                }
                              }
                            }
LAB_1800de0a1:
                            uVal_51 = uVal_34 + 1;
                            iVal_23 = *(int *)(ptr2_U64_26 + 0x907);
                            bFlag_3 = (int64_t)uVal_34 < (int64_t)iVal_23;
                            ptr2_U64_42 = local_198;
                            ptr2_U64_50 = local_188;
                            uVal_34 = uVal_51;
                          } while (bFlag_3);
                        }
                      } while ((int)uVal_51 <= iVal_23);
                    }
                    else {
                      *(int *)((int64_t)ptr2_U64_26 + 0x4844) = iVal_23 + -1;
                      if (*(int *)((int64_t)ptr2_U64_26 + 0x4834) <= *(int *)(ptr2_U64_26 + 0x907)) {
                        uVal_46 = (0x10000 << (bFlag_21 & 0x1f)) >> 0x10;
                        do {
                          uVal_34 = (uint64_t)(byte)(&DAT_1806b3b70)[uVal_51];
                          if (*(short *)(lVal_31 + uVal_34 * 2) != 0) {
                            iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                            if (iVal_23 < 1) {
                              func_0x1800ee8e0(ptr2_U64_26);
                              iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x4824);
                              if (iVal_23 < 1) goto LAB_1800ddcfe;
                            }
                            iVal_39 = *(int *)(ptr2_U64_26 + 0x904);
                            *(int *)(ptr2_U64_26 + 0x904) = iVal_39 * 2;
                            *(int *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_23 + -1;
                            if ((iVal_39 < 0) &&
                               (sz_1 = *(short *)(lVal_31 + uVal_34 * 2), (uVal_46 & (int)sz_1) == 0)
                               ) {
                              uVal_38 = -uVal_46;
                              if (0 < sz_1) {
                                uVal_38 = uVal_46;
                              }
                              *(short *)(lVal_31 + uVal_34 * 2) = (short)uVal_38 + sz_1;
                            }
                          }
LAB_1800ddcfe:
                          bFlag_3 = (int64_t)uVal_51 < (int64_t)*(int *)(ptr2_U64_26 + 0x907);
                          uVal_51 = uVal_51 + 1;
                        } while (bFlag_3);
                      }
                    }
                  }
                }
LAB_1800dddb6:
                pInt_48 = (int *)((int64_t)ptr2_U64_26 + 0x486c);
                iVal_39 = *pInt_48;
                *pInt_48 = *pInt_48 + -1;
                iVal_23 = (uint)local_1a0;
                if (*pInt_48 == 0 || SBORROW4(iVal_39,1) != *pInt_48 < 0) {
                  if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < 0x18) {
                    func_0x1800ee8e0(ptr2_U64_26);
                  }
                  bFlag_21 = *(byte *)(ptr2_U64_26 + 0x905);
                  if ((bFlag_21 & 0xf8) != 0xd0) goto LAB_1800de9d8;
                  ptr2_U64_26[0x904] = (uint *)0x0;
                  *(uint32_t *)((int64_t)ptr2_U64_26 + 0x482c) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8fb) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8ef) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8e3) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8d7) = 0;
                  *(uint8_t *)(ptr2_U64_26 + 0x905) = 0xff;
                  iVal_39 = *(int *)(ptr2_U64_26 + 0x90d);
                  if (iVal_39 == 0) {
                    iVal_39 = 0x7fffffff;
                  }
                  *(int *)((int64_t)ptr2_U64_26 + 0x486c) = iVal_39;
                  *(uint32_t *)((int64_t)ptr2_U64_26 + 0x4844) = 0;
                }
                iVal_23 = iVal_23 + 1;
              } while (iVal_23 != (int)local_1a8);
              iVal_23 = (int)local_190 + 1;
              local_190 = CONCAT44(local_190._4_4_,iVal_23);
            } while (iVal_23 != local_174);
          }
        }
      }
      else {
        iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x4694);
        if ((0 < iVal_39) && (iVal_49 = *(int *)(ptr2_U64_26 + 0x8d2), 0 < iVal_49)) {
          iVal_44 = 0;
          do {
            if (0 < iVal_49) {
              iVal_39 = 0;
              do {
                iVal_49 = *(int *)((int64_t)ptr2_U64_26 + 0x4854);
                if (0 < iVal_49) {
                  lVal_31 = 0;
                  do {
                    iVal_23 = *(int *)((int64_t)ptr2_U64_26 + lVal_31 * 4 + 0x4858);
                    lVal_54 = (int64_t)iVal_23;
                    iVal_53 = *(int *)(ptr2_U64_26 + lVal_54 * 0xc + 0x8d5);
                    if ((0 < iVal_53) &&
                       (iVal_25 = *(int *)((int64_t)ptr2_U64_26 + lVal_54 * 0x60 + 0x46a4), 0 < iVal_25))
                    {
                      iVal_49 = 0;
                      do {
                        if (0 < iVal_25) {
                          iVal_53 = 0;
                          do {
                            iVal_25 = func_0x1800eeaf0(ptr2_U64_26,(int64_t)
                                                            ((iVal_25 * iVal_39 + iVal_53 +
                                                             (*(int *)(ptr2_U64_26 +
                                                                      lVal_54 * 0xc + 0x8d5) * iVal_44
                                                             + iVal_49) *
                                                             *(int *)(ptr2_U64_26 +
                                                                     lVal_54 * 0xc + 0x8df)) * 0x40)
                                                            * 2 + (int64_t)
                                                                  ptr2_U64_26[lVal_54 * 0xc + 0x8de],
                                                   ptr2_U64_26 +
                                                   (int64_t)
                                                   *(int *)(ptr2_U64_26 + lVal_54 * 0xc + 0x8d6) * 0xd2
                                                   + 1,iVal_23);
                            if (iVal_25 == 0) goto LAB_1800df9c7;
                            iVal_53 = iVal_53 + 1;
                            iVal_25 = *(int *)((int64_t)ptr2_U64_26 + lVal_54 * 0x60 + 0x46a4);
                          } while (iVal_53 < iVal_25);
                          iVal_53 = *(int *)(ptr2_U64_26 + lVal_54 * 0xc + 0x8d5);
                        }
                        iVal_49 = iVal_49 + 1;
                      } while (iVal_49 < iVal_53);
                      iVal_49 = *(int *)((int64_t)ptr2_U64_26 + 0x4854);
                    }
                    lVal_31 = lVal_31 + 1;
                  } while (lVal_31 < iVal_49);
                  iVal_23 = *(int *)((int64_t)ptr2_U64_26 + 0x486c);
                }
                iVal_49 = iVal_23 + -1;
                *(int *)((int64_t)ptr2_U64_26 + 0x486c) = iVal_49;
                bFlag_3 = iVal_23 < 1;
                iVal_23 = iVal_49;
                if (iVal_49 == 0 || bFlag_3) {
                  if (*(int *)((int64_t)ptr2_U64_26 + 0x4824) < 0x18) {
                    func_0x1800ee8e0(ptr2_U64_26);
                  }
                  bFlag_21 = *(byte *)(ptr2_U64_26 + 0x905);
                  if ((bFlag_21 & 0xf8) != 0xd0) goto LAB_1800de9d8;
                  ptr2_U64_26[0x904] = (uint *)0x0;
                  *(uint32_t *)((int64_t)ptr2_U64_26 + 0x482c) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8fb) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8ef) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8e3) = 0;
                  *(uint32_t *)(ptr2_U64_26 + 0x8d7) = 0;
                  *(uint8_t *)(ptr2_U64_26 + 0x905) = 0xff;
                  iVal_23 = *(int *)(ptr2_U64_26 + 0x90d);
                  if (iVal_23 == 0) {
                    iVal_23 = 0x7fffffff;
                  }
                  *(int *)((int64_t)ptr2_U64_26 + 0x486c) = iVal_23;
                  *(uint32_t *)((int64_t)ptr2_U64_26 + 0x4844) = 0;
                }
                iVal_39 = iVal_39 + 1;
                iVal_49 = *(int *)(ptr2_U64_26 + 0x8d2);
              } while (iVal_39 < iVal_49);
              iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x4694);
            }
            iVal_44 = iVal_44 + 1;
          } while (iVal_44 < iVal_39);
        }
      }
      goto LAB_1800de9d1;
    }
    if (bFlag_21 != 0xdc) {
      if (bFlag_21 == 0xd9) {
        pU64_41 = *ptr2_U64_26;
        if ((*(int *)(ptr2_U64_26 + 0x906) != 0) && (0 < (int)pU64_41[2])) {
          uVal_51 = 0;
          do {
            lVal_31 = uVal_51 * 0x60;
            iVal_23 = *(int *)(ptr2_U64_26 + uVal_51 * 0xc + 0x8d8) + 7 >> 3;
            local_1b0 = CONCAT44(local_1b0._4_4_,iVal_23);
            if ((0 < iVal_23) &&
               (uVal_46 = *(int *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46bc) + 7 >> 3, 0 < (int)uVal_46))
            {
              iVal_23 = 0;
              local_1a0 = uVal_51;
              do {
                uVal_34 = 0;
                do {
                  pU64_41 = ptr2_U64_26[uVal_51 * 0xc + 0x8de];
                  lVal_28 = (int64_t)
                           ((*(int *)(ptr2_U64_26 + uVal_51 * 0xc + 0x8df) * iVal_23 + (int)uVal_34) *
                           0x40);
                  ptr2_U64_45 = (uint **)((int64_t)pU64_41 + lVal_28 * 2);
                  lVal_54 = (int64_t)*(int *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46ac);
                  lVal_35 = lVal_54 * 0x80;
                  ptr2_U64_50 = ptr2_U64_26 + lVal_54 * 0x10 + 0x691;
                  if ((ptr2_U64_45 < ptr2_U64_26 + lVal_54 * 0x10 + 0x6a1) &&
                     (ptr2_U64_50 < (uint **)((int64_t)pU64_41 + lVal_28 * 2 + 0x80))) {
                    lVal_54 = lVal_28 * 2 + 6;
                    lVal_40 = 0;
                    do {
                      sz_1 = *(short *)((int64_t)pU64_41 + lVal_40 * 2 + lVal_28 * 2 + 2);
                      *(short *)((int64_t)pU64_41 + lVal_40 * 2 + lVal_28 * 2) =
                           *(short *)((int64_t)pU64_41 + lVal_40 * 2 + lVal_28 * 2) *
                           *(short *)((int64_t)ptr2_U64_26 + lVal_40 * 2 + lVal_35 + 0x3488);
                      *(short *)((int64_t)pU64_41 + lVal_40 * 2 + lVal_28 * 2 + 2) =
                           sz_1 * *(short *)((int64_t)ptr2_U64_26 + lVal_40 * 2 + lVal_35 + 0x348a);
                      *(short *)((int64_t)pU64_41 + lVal_40 * 2 + lVal_28 * 2 + 4) =
                           *(short *)((int64_t)pU64_41 + lVal_40 * 2 + lVal_28 * 2 + 4) *
                           *(short *)((int64_t)ptr2_U64_26 + lVal_40 * 2 + lVal_35 + 0x348c);
                      *(short *)((int64_t)pU64_41 + lVal_40 * 2 + lVal_54) =
                           *(short *)((int64_t)pU64_41 + lVal_40 * 2 + lVal_54) *
                           *(short *)((int64_t)ptr2_U64_26 + lVal_40 * 2 + lVal_35 + 0x348e);
                      lVal_40 = lVal_40 + 4;
                    } while (lVal_40 != 0x40);
                  }
                  else {
                    sz_1 = *(short *)((int64_t)ptr2_U64_50 + 2);
                    sz_7 = *(short *)((int64_t)ptr2_U64_50 + 4);
                    sz_8 = *(short *)((int64_t)ptr2_U64_50 + 6);
                    sz_9 = *(short *)(ptr2_U64_50 + 1);
                    sz_10 = *(short *)((int64_t)ptr2_U64_50 + 10);
                    sz_11 = *(short *)((int64_t)ptr2_U64_50 + 0xc);
                    sz_12 = *(short *)((int64_t)ptr2_U64_50 + 0xe);
                    sz_13 = *(short *)(ptr2_U64_50 + 2);
                    sz_14 = *(short *)((int64_t)ptr2_U64_50 + 0x12);
                    sz_15 = *(short *)((int64_t)ptr2_U64_50 + 0x14);
                    sz_16 = *(short *)((int64_t)ptr2_U64_50 + 0x16);
                    sz_17 = *(short *)(ptr2_U64_50 + 3);
                    sz_18 = *(short *)((int64_t)ptr2_U64_50 + 0x1a);
                    sz_19 = *(short *)((int64_t)ptr2_U64_50 + 0x1c);
                    sz_20 = *(short *)((int64_t)ptr2_U64_50 + 0x1e);
                    *(short *)ptr2_U64_45 = *(short *)ptr2_U64_45 * *(short *)ptr2_U64_50;
                    *(short *)((int64_t)ptr2_U64_45 + 2) = *(short *)((int64_t)ptr2_U64_45 + 2) * sz_1;
                    *(short *)((int64_t)ptr2_U64_45 + 4) = *(short *)((int64_t)ptr2_U64_45 + 4) * sz_7;
                    *(short *)((int64_t)ptr2_U64_45 + 6) = *(short *)((int64_t)ptr2_U64_45 + 6) * sz_8;
                    *(short *)(ptr2_U64_45 + 1) = *(short *)(ptr2_U64_45 + 1) * sz_9;
                    *(short *)((int64_t)ptr2_U64_45 + 10) =
                         *(short *)((int64_t)ptr2_U64_45 + 10) * sz_10;
                    *(short *)((int64_t)ptr2_U64_45 + 0xc) =
                         *(short *)((int64_t)ptr2_U64_45 + 0xc) * sz_11;
                    *(short *)((int64_t)ptr2_U64_45 + 0xe) =
                         *(short *)((int64_t)ptr2_U64_45 + 0xe) * sz_12;
                    *(short *)(ptr2_U64_45 + 2) = *(short *)(ptr2_U64_45 + 2) * sz_13;
                    *(short *)((int64_t)ptr2_U64_45 + 0x12) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x12) * sz_14;
                    *(short *)((int64_t)ptr2_U64_45 + 0x14) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x14) * sz_15;
                    *(short *)((int64_t)ptr2_U64_45 + 0x16) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x16) * sz_16;
                    *(short *)(ptr2_U64_45 + 3) = *(short *)(ptr2_U64_45 + 3) * sz_17;
                    *(short *)((int64_t)ptr2_U64_45 + 0x1a) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x1a) * sz_18;
                    *(short *)((int64_t)ptr2_U64_45 + 0x1c) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x1c) * sz_19;
                    *(short *)((int64_t)ptr2_U64_45 + 0x1e) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x1e) * sz_20;
                    sz_1 = *(short *)((int64_t)ptr2_U64_50 + 0x22);
                    sz_7 = *(short *)((int64_t)ptr2_U64_50 + 0x24);
                    sz_8 = *(short *)((int64_t)ptr2_U64_50 + 0x26);
                    sz_9 = *(short *)(ptr2_U64_50 + 5);
                    sz_10 = *(short *)((int64_t)ptr2_U64_50 + 0x2a);
                    sz_11 = *(short *)((int64_t)ptr2_U64_50 + 0x2c);
                    sz_12 = *(short *)((int64_t)ptr2_U64_50 + 0x2e);
                    sz_13 = *(short *)(ptr2_U64_50 + 6);
                    sz_14 = *(short *)((int64_t)ptr2_U64_50 + 0x32);
                    sz_15 = *(short *)((int64_t)ptr2_U64_50 + 0x34);
                    sz_16 = *(short *)((int64_t)ptr2_U64_50 + 0x36);
                    sz_17 = *(short *)(ptr2_U64_50 + 7);
                    sz_18 = *(short *)((int64_t)ptr2_U64_50 + 0x3a);
                    sz_19 = *(short *)((int64_t)ptr2_U64_50 + 0x3c);
                    sz_20 = *(short *)((int64_t)ptr2_U64_50 + 0x3e);
                    *(short *)(ptr2_U64_45 + 4) = *(short *)(ptr2_U64_50 + 4) * *(short *)(ptr2_U64_45 + 4);
                    *(short *)((int64_t)ptr2_U64_45 + 0x22) =
                         sz_1 * *(short *)((int64_t)ptr2_U64_45 + 0x22);
                    *(short *)((int64_t)ptr2_U64_45 + 0x24) =
                         sz_7 * *(short *)((int64_t)ptr2_U64_45 + 0x24);
                    *(short *)((int64_t)ptr2_U64_45 + 0x26) =
                         sz_8 * *(short *)((int64_t)ptr2_U64_45 + 0x26);
                    *(short *)(ptr2_U64_45 + 5) = sz_9 * *(short *)(ptr2_U64_45 + 5);
                    *(short *)((int64_t)ptr2_U64_45 + 0x2a) =
                         sz_10 * *(short *)((int64_t)ptr2_U64_45 + 0x2a);
                    *(short *)((int64_t)ptr2_U64_45 + 0x2c) =
                         sz_11 * *(short *)((int64_t)ptr2_U64_45 + 0x2c);
                    *(short *)((int64_t)ptr2_U64_45 + 0x2e) =
                         sz_12 * *(short *)((int64_t)ptr2_U64_45 + 0x2e);
                    *(short *)(ptr2_U64_45 + 6) = sz_13 * *(short *)(ptr2_U64_45 + 6);
                    *(short *)((int64_t)ptr2_U64_45 + 0x32) =
                         sz_14 * *(short *)((int64_t)ptr2_U64_45 + 0x32);
                    *(short *)((int64_t)ptr2_U64_45 + 0x34) =
                         sz_15 * *(short *)((int64_t)ptr2_U64_45 + 0x34);
                    *(short *)((int64_t)ptr2_U64_45 + 0x36) =
                         sz_16 * *(short *)((int64_t)ptr2_U64_45 + 0x36);
                    *(short *)(ptr2_U64_45 + 7) = sz_17 * *(short *)(ptr2_U64_45 + 7);
                    *(short *)((int64_t)ptr2_U64_45 + 0x3a) =
                         sz_18 * *(short *)((int64_t)ptr2_U64_45 + 0x3a);
                    *(short *)((int64_t)ptr2_U64_45 + 0x3c) =
                         sz_19 * *(short *)((int64_t)ptr2_U64_45 + 0x3c);
                    *(short *)((int64_t)ptr2_U64_45 + 0x3e) =
                         sz_20 * *(short *)((int64_t)ptr2_U64_45 + 0x3e);
                    sz_1 = *(short *)((int64_t)ptr2_U64_50 + 0x42);
                    sz_7 = *(short *)((int64_t)ptr2_U64_50 + 0x44);
                    sz_8 = *(short *)((int64_t)ptr2_U64_50 + 0x46);
                    sz_9 = *(short *)(ptr2_U64_50 + 9);
                    sz_10 = *(short *)((int64_t)ptr2_U64_50 + 0x4a);
                    sz_11 = *(short *)((int64_t)ptr2_U64_50 + 0x4c);
                    sz_12 = *(short *)((int64_t)ptr2_U64_50 + 0x4e);
                    sz_13 = *(short *)(ptr2_U64_50 + 10);
                    sz_14 = *(short *)((int64_t)ptr2_U64_50 + 0x52);
                    sz_15 = *(short *)((int64_t)ptr2_U64_50 + 0x54);
                    sz_16 = *(short *)((int64_t)ptr2_U64_50 + 0x56);
                    sz_17 = *(short *)(ptr2_U64_50 + 0xb);
                    sz_18 = *(short *)((int64_t)ptr2_U64_50 + 0x5a);
                    sz_19 = *(short *)((int64_t)ptr2_U64_50 + 0x5c);
                    sz_20 = *(short *)((int64_t)ptr2_U64_50 + 0x5e);
                    *(short *)(ptr2_U64_45 + 8) = *(short *)(ptr2_U64_45 + 8) * *(short *)(ptr2_U64_50 + 8);
                    *(short *)((int64_t)ptr2_U64_45 + 0x42) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x42) * sz_1;
                    *(short *)((int64_t)ptr2_U64_45 + 0x44) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x44) * sz_7;
                    *(short *)((int64_t)ptr2_U64_45 + 0x46) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x46) * sz_8;
                    *(short *)(ptr2_U64_45 + 9) = *(short *)(ptr2_U64_45 + 9) * sz_9;
                    *(short *)((int64_t)ptr2_U64_45 + 0x4a) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x4a) * sz_10;
                    *(short *)((int64_t)ptr2_U64_45 + 0x4c) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x4c) * sz_11;
                    *(short *)((int64_t)ptr2_U64_45 + 0x4e) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x4e) * sz_12;
                    *(short *)(ptr2_U64_45 + 10) = *(short *)(ptr2_U64_45 + 10) * sz_13;
                    *(short *)((int64_t)ptr2_U64_45 + 0x52) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x52) * sz_14;
                    *(short *)((int64_t)ptr2_U64_45 + 0x54) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x54) * sz_15;
                    *(short *)((int64_t)ptr2_U64_45 + 0x56) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x56) * sz_16;
                    *(short *)(ptr2_U64_45 + 0xb) = *(short *)(ptr2_U64_45 + 0xb) * sz_17;
                    *(short *)((int64_t)ptr2_U64_45 + 0x5a) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x5a) * sz_18;
                    *(short *)((int64_t)ptr2_U64_45 + 0x5c) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x5c) * sz_19;
                    *(short *)((int64_t)ptr2_U64_45 + 0x5e) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x5e) * sz_20;
                    sz_1 = *(short *)((int64_t)ptr2_U64_50 + 0x62);
                    sz_7 = *(short *)((int64_t)ptr2_U64_50 + 100);
                    sz_8 = *(short *)((int64_t)ptr2_U64_50 + 0x66);
                    sz_9 = *(short *)(ptr2_U64_50 + 0xd);
                    sz_10 = *(short *)((int64_t)ptr2_U64_50 + 0x6a);
                    sz_11 = *(short *)((int64_t)ptr2_U64_50 + 0x6c);
                    sz_12 = *(short *)((int64_t)ptr2_U64_50 + 0x6e);
                    sz_13 = *(short *)(ptr2_U64_50 + 0xe);
                    sz_14 = *(short *)((int64_t)ptr2_U64_50 + 0x72);
                    sz_15 = *(short *)((int64_t)ptr2_U64_50 + 0x74);
                    sz_16 = *(short *)((int64_t)ptr2_U64_50 + 0x76);
                    sz_17 = *(short *)(ptr2_U64_50 + 0xf);
                    sz_18 = *(short *)((int64_t)ptr2_U64_50 + 0x7a);
                    sz_19 = *(short *)((int64_t)ptr2_U64_50 + 0x7c);
                    sz_20 = *(short *)((int64_t)ptr2_U64_50 + 0x7e);
                    *(short *)(ptr2_U64_45 + 0xc) =
                         *(short *)(ptr2_U64_45 + 0xc) * *(short *)(ptr2_U64_50 + 0xc);
                    *(short *)((int64_t)ptr2_U64_45 + 0x62) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x62) * sz_1;
                    *(short *)((int64_t)ptr2_U64_45 + 100) =
                         *(short *)((int64_t)ptr2_U64_45 + 100) * sz_7;
                    *(short *)((int64_t)ptr2_U64_45 + 0x66) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x66) * sz_8;
                    *(short *)(ptr2_U64_45 + 0xd) = *(short *)(ptr2_U64_45 + 0xd) * sz_9;
                    *(short *)((int64_t)ptr2_U64_45 + 0x6a) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x6a) * sz_10;
                    *(short *)((int64_t)ptr2_U64_45 + 0x6c) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x6c) * sz_11;
                    *(short *)((int64_t)ptr2_U64_45 + 0x6e) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x6e) * sz_12;
                    *(short *)(ptr2_U64_45 + 0xe) = *(short *)(ptr2_U64_45 + 0xe) * sz_13;
                    *(short *)((int64_t)ptr2_U64_45 + 0x72) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x72) * sz_14;
                    *(short *)((int64_t)ptr2_U64_45 + 0x74) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x74) * sz_15;
                    *(short *)((int64_t)ptr2_U64_45 + 0x76) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x76) * sz_16;
                    *(short *)(ptr2_U64_45 + 0xf) = *(short *)(ptr2_U64_45 + 0xf) * sz_17;
                    *(short *)((int64_t)ptr2_U64_45 + 0x7a) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x7a) * sz_18;
                    *(short *)((int64_t)ptr2_U64_45 + 0x7c) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x7c) * sz_19;
                    *(short *)((int64_t)ptr2_U64_45 + 0x7e) =
                         *(short *)((int64_t)ptr2_U64_45 + 0x7e) * sz_20;
                  }
                  (*(func_ptr_t )ptr2_U64_26[0x90e])
                            ((int64_t)ptr2_U64_26[uVal_51 * 0xc + 0x8da] +
                             uVal_34 * 8 +
                             (int64_t)(iVal_23 * 8 * *(int *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46c4))
                            );
                  uVal_34 = uVal_34 + 1;
                } while (uVal_34 != uVal_46);
                iVal_23 = iVal_23 + 1;
              } while (iVal_23 != (uint)local_1b0);
              pU64_41 = *ptr2_U64_26;
              uVal_51 = local_1a0;
            }
            uVal_51 = uVal_51 + 1;
          } while ((int64_t)uVal_51 < (int64_t)(int)pU64_41[2]);
        }
        goto LAB_1800dee5b;
      }
      iVal_23 = func_0x1800ec450(ptr2_U64_26);
      if (iVal_23 == 0) goto LAB_1800dee58;
      goto LAB_1800dd73e;
    }
    iVal_23 = func_0x1800e5980(*ptr2_U64_26);
    uVal_46 = func_0x1800e5980(*ptr2_U64_26);
    if (iVal_23 != 4) {
      fnPtr_33 = "bad DNL len";
      goto LAB_1800df9ad;
    }
    if (uVal_46 == (*ptr2_U64_26)[1]) goto LAB_1800dd73e;
    fnPtr_33 = "bad DNL height";
    goto LAB_1800df9ad;
  }
LAB_1800df9c7:
  uVal_46 = (*ptr2_U64_26)[2];
  if ((int64_t)(int)uVal_46 < 1) goto LAB_1800dfa49;
  lVal_31 = 0;
  lVal_54 = 0;
  do {
    if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46d8) != 0) {
      thunk_FUN_180695dd0();
      *(uint8_t (*)[16])((int64_t)ptr2_U64_26 + lVal_54 + 0x46d0) = (uint8_t  [16])0x0;
    }
    if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46e0) != 0) {
      thunk_FUN_180695dd0();
      *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46e0) = 0;
      *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46f0) = 0;
    }
    if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46e8) != 0) {
      thunk_FUN_180695dd0();
      *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46e8) = 0;
    }
    lVal_54 = lVal_54 + 0x60;
  } while ((int64_t)(int)uVal_46 * 0x60 != lVal_54);
  goto LAB_1800dfa4b;
LAB_1800de9c7:
  bFlag_3 = false;
LAB_1800de9c9:
  if (!bFlag_3) goto LAB_1800df9c7;
LAB_1800de9d1:
  bFlag_21 = *(byte *)(ptr2_U64_26 + 0x905);
LAB_1800de9d8:
  if (bFlag_21 == 0xff) {
    while (pU64_41 = *ptr2_U64_26, *(int64_t *)(pU64_41 + 4) == 0) {
LAB_1800deb64:
      if (*(uint64_t *)(pU64_41 + 0x32) <= *(uint64_t *)(pU64_41 + 0x30)) goto LAB_1800deb78;
LAB_1800de9ec:
      pU64_41 = *ptr2_U64_26;
      fnPtr_33 = *(char **)(pU64_41 + 0x30);
      if (fnPtr_33 < *(char **)(pU64_41 + 0x32)) {
        *(char **)(pU64_41 + 0x30) = fnPtr_33 + 1;
        ch_22 = *fnPtr_33;
      }
      else if (pU64_41[0xc] == 0) {
        ch_22 = '\0';
      }
      else {
        pU64_29 = pU64_41 + 0xe;
        iVal_23 = (**(func_ptr_t *)(pU64_41 + 4))(*(uint64_t *)(pU64_41 + 10),pU64_29,pU64_41[0xd]);
        pU64_41[0x2e] = pU64_41[0x2e] + (pU64_41[0x30] - pU64_41[0x34]);
        if (iVal_23 == 0) {
          pU64_41[0xc] = 0;
          pU64_36 = (uint8_t *)((int64_t)pU64_41 + 0x39);
          *(uint8_t *)(pU64_41 + 0xe) = 0;
          ch_22 = '\0';
        }
        else {
          pU64_36 = (uint8_t *)((int64_t)iVal_23 + (int64_t)pU64_29);
          ch_22 = *(char *)pU64_29;
        }
        *(uint8_t **)(pU64_41 + 0x32) = pU64_36;
        *(int64_t *)(pU64_41 + 0x30) = (int64_t)pU64_41 + 0x39;
      }
      while (ch_22 == -1) {
        pU64_41 = *ptr2_U64_26;
        if (*(int64_t *)(pU64_41 + 4) == 0) {
LAB_1800deab4:
          if (*(uint64_t *)(pU64_41 + 0x32) <= *(uint64_t *)(pU64_41 + 0x30)) goto LAB_1800deb78;
        }
        else {
          iVal_23 = (**(func_ptr_t *)(pU64_41 + 8))(*(uint64_t *)(pU64_41 + 10));
          if (iVal_23 != 0) {
            if (pU64_41[0xc] != 0) goto LAB_1800deab4;
            goto LAB_1800deb78;
          }
        }
        pU64_41 = *ptr2_U64_26;
        fnPtr_33 = *(char **)(pU64_41 + 0x30);
        if (fnPtr_33 < *(char **)(pU64_41 + 0x32)) {
          *(char **)(pU64_41 + 0x30) = fnPtr_33 + 1;
          ch_22 = *fnPtr_33;
        }
        else if (pU64_41[0xc] == 0) {
          ch_22 = '\0';
        }
        else {
          pU64_29 = pU64_41 + 0xe;
          iVal_23 = (**(func_ptr_t *)(pU64_41 + 4))(*(uint64_t *)(pU64_41 + 10),pU64_29,pU64_41[0xd]);
          pU64_41[0x2e] = pU64_41[0x2e] + (pU64_41[0x30] - pU64_41[0x34]);
          if (iVal_23 == 0) {
            pU64_41[0xc] = 0;
            pU64_36 = (uint8_t *)((int64_t)pU64_41 + 0x39);
            *(uint8_t *)(pU64_41 + 0xe) = 0;
            ch_22 = '\0';
          }
          else {
            pU64_36 = (uint8_t *)((int64_t)iVal_23 + (int64_t)pU64_29);
            ch_22 = *(char *)pU64_29;
          }
          *(uint8_t **)(pU64_41 + 0x32) = pU64_36;
          *(int64_t *)(pU64_41 + 0x30) = (int64_t)pU64_41 + 0x39;
        }
        if ((byte)(ch_22 - 1U) < 0xfe) goto LAB_1800deb7a;
      }
    }
    iVal_23 = (**(func_ptr_t *)(pU64_41 + 8))(*(uint64_t *)(pU64_41 + 10));
    if (iVal_23 == 0) goto LAB_1800de9ec;
    if (pU64_41[0xc] != 0) goto LAB_1800deb64;
LAB_1800deb78:
    ch_22 = -1;
LAB_1800deb7a:
    *(char *)(ptr2_U64_26 + 0x905) = ch_22;
  }
  bFlag_21 = func_0x1800ec2f0(ptr2_U64_26);
  if ((bFlag_21 & 0xf8) == 0xd0) goto LAB_1800dd73e;
  goto LAB_1800dd746;
LAB_1800df99d:
  *(int *)((int64_t)ptr2_U64_26 + 0x4824) = iVal_39 + -0x10;
LAB_1800df9a6:
  fnPtr_33 = "bad huffman code";
LAB_1800df9ad:
  *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3010
            ) = fnPtr_33;
  goto LAB_1800df9c7;
LAB_1800dee58:
  pU64_41 = *ptr2_U64_26;
LAB_1800dee5b:
  uVal_46 = pU64_41[2];
  lVal_54 = (int64_t)(int)uVal_46;
  uVal_38 = (2 < lVal_54) + 1 + (uint)(2 < lVal_54);
  if (param_5 != 0) {
    uVal_38 = param_5;
  }
  if (lVal_54 == 3) {
    uVal_5 = (uint3)(param_5 >> 8);
    uVal_51 = CONCAT71((uint7)uVal_5,1);
    if (*(int *)(ptr2_U64_26 + 0x90a) != 3) {
      if (*(int *)((int64_t)ptr2_U64_26 + 0x484c) != 0) goto LAB_1800dee98;
      uVal_51 = (uint64_t)CONCAT31(uVal_5,*(int *)(ptr2_U64_26 + 0x909) == 0);
    }
  }
  else {
LAB_1800dee98:
    uVal_51 = 0;
  }
  uVal_32 = 1;
  if ((uVal_51 & 1) != 0) {
    uVal_32 = uVal_46;
  }
  if (2 < (int)uVal_38) {
    uVal_32 = uVal_46;
  }
  if (uVal_46 != 3) {
    uVal_32 = uVal_46;
  }
  if ((int)uVal_32 < 1) {
    if ((int)uVal_46 < 1) {
LAB_1800dfa49:
      lVal_31 = 0;
    }
    else {
      lVal_31 = 0;
      lVal_35 = 0;
      do {
        if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_35 + 0x46d8) != 0) {
          thunk_FUN_180695dd0();
          *(uint8_t (*)[16])((int64_t)ptr2_U64_26 + lVal_35 + 0x46d0) = (uint8_t  [16])0x0;
        }
        if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_35 + 0x46e0) != 0) {
          thunk_FUN_180695dd0();
          *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_35 + 0x46e0) = 0;
          *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_35 + 0x46f0) = 0;
        }
        if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_35 + 0x46e8) != 0) {
          thunk_FUN_180695dd0();
          *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_35 + 0x46e8) = 0;
        }
        lVal_35 = lVal_35 + 0x60;
      } while (lVal_54 * 0x60 != lVal_35);
    }
  }
  else {
    local_190 = CONCAT44(local_190._4_4_,(int)uVal_51);
    local_1a0 = CONCAT44(local_1a0._4_4_,uVal_38);
    local_88._0_16_ = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    local_1b0 = (uint64_t)uVal_32;
    uVal_46 = *pU64_41;
    lVal_31 = local_1b0 * 0x30;
    lVal_54 = 0;
    do {
      lVal_35 = _malloc_base(uVal_46 + 3);
      uVal_51 = local_1a0;
      *(int64_t *)((int64_t)ptr2_U64_26 + lVal_54 * 2 + 0x46e8) = lVal_35;
      if (lVal_35 == 0) {
        uVal_46 = pU64_41[2];
        if (0 < (int64_t)(int)uVal_46) {
          lVal_31 = 0;
          do {
            if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46d8) != 0) {
              thunk_FUN_180695dd0();
              *(uint8_t (*)[16])((int64_t)ptr2_U64_26 + lVal_31 + 0x46d0) = (uint8_t  [16])0x0;
            }
            if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46e0) != 0) {
              thunk_FUN_180695dd0();
              *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46e0) = 0;
              *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46f0) = 0;
            }
            if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46e8) != 0) {
              thunk_FUN_180695dd0();
              *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46e8) = 0;
            }
            lVal_31 = lVal_31 + 0x60;
          } while ((int64_t)(int)uVal_46 * 0x60 != lVal_31);
        }
        goto LAB_1800df228;
      }
      uVal_43 = (int64_t)*(int *)(ptr2_U64_26 + 0x8d1) /
               (int64_t)*(int *)((int64_t)ptr2_U64_26 + lVal_54 * 2 + 0x46a4);
      iVal_23 = (int)uVal_43;
      uVal_43 = uVal_43 & 0xffffffff;
      *(int *)((int64_t)local_140 + lVal_54) = iVal_23;
      iVal_39 = *(int *)((int64_t)ptr2_U64_26 + 0x468c) /
               *(int *)((int64_t)ptr2_U64_26 + lVal_54 * 2 + 0x46a8);
      *(int *)((int64_t)local_140 + lVal_54 + 4) = iVal_39;
      *(int *)((int64_t)local_140 + lVal_54 + 0xc) = iVal_39 >> 1;
      uVal_46 = *pU64_41;
      uVal_34 = (uint64_t)((iVal_23 + uVal_46) - 1);
      uVal_47 = uVal_34 % uVal_43;
      *(int *)((int64_t)local_140 + lVal_54 + 8) = (int)(uVal_34 / uVal_43);
      *(uint32_t *)((int64_t)local_140 + lVal_54 + 0x10) = 0;
      uVal_2 = *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_54 * 2 + 0x46d0);
      *(uint64_t *)((int64_t)&local_158 + lVal_54 + 0x10) = uVal_2;
      *(uint64_t *)((int64_t)&local_158 + lVal_54 + 8) = uVal_2;
      if (iVal_23 == 2) {
        pU64_29 = (uint *)&LAB_1800ee0e0;
        if (iVal_39 != 1) {
          if (iVal_39 != 2) goto LAB_1800def0c;
          pU64_29 = ptr2_U64_26[0x910];
        }
      }
      else if (iVal_23 == 1) {
        pU64_29 = (uint *)&LAB_1800ee2a0;
        if (iVal_39 == 2) {
          pU64_29 = (uint *)&LAB_1800edf10;
        }
        if (iVal_39 == 1) {
          pU64_29 = (uint *)&LAB_1800edf00;
        }
      }
      else {
LAB_1800def0c:
        pU64_29 = (uint *)&LAB_1800ee2a0;
      }
      *(uint **)((int64_t)&local_158 + lVal_54) = pU64_29;
      lVal_54 = lVal_54 + 0x30;
    } while (lVal_31 != lVal_54);
    if ((((int)(uVal_46 | (uint)local_1a0) < 0) ||
        ((((uVal_38 = pU64_41[1], uVal_46 != 0 &&
           (uVal_47 = 0x7fffffff % (uint64_t)uVal_46,
           (int)(0x7fffffff / (uint64_t)uVal_46) < (int)(uint)local_1a0)) ||
          (uVal_46 = uVal_46 * (uint)local_1a0, (int)(uVal_38 | uVal_46) < 0)) ||
         ((uVal_38 != 0 &&
          (uVal_47 = 0x7fffffff % (uint64_t)uVal_38,
          (int)(0x7fffffff / (uint64_t)uVal_38) < (int)uVal_46)))))) ||
       ((uVal_46 * uVal_38 == 0x7fffffff ||
        (lVal_31 = _malloc_base((int64_t)(int)(uVal_46 * uVal_38 + 1),uVal_47), uVal_2 = _UNK_1806b2958,
        uVal_34 = _DAT_1806b2950, lVal_31 == 0)))) {
      uVal_46 = pU64_41[2];
      if (0 < (int64_t)(int)uVal_46) {
        lVal_31 = 0;
        do {
          if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46d8) != 0) {
            thunk_FUN_180695dd0();
            *(uint8_t (*)[16])((int64_t)ptr2_U64_26 + lVal_31 + 0x46d0) = (uint8_t  [16])0x0;
          }
          if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46e0) != 0) {
            thunk_FUN_180695dd0();
            *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46e0) = 0;
            *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46f0) = 0;
          }
          if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46e8) != 0) {
            thunk_FUN_180695dd0();
            *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_31 + 0x46e8) = 0;
          }
          lVal_31 = lVal_31 + 0x60;
        } while ((int64_t)(int)uVal_46 * 0x60 != lVal_31);
      }
LAB_1800df228:
      lVal_31 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_33 = "outofmem";
LAB_1800dd6ae:
      *(char **)(lVal_31 + 0x3010) = fnPtr_33;
      goto LAB_1800dfa49;
    }
    if (uVal_38 != 0) {
      local_180 = uVal_51 & 0xffffffff;
      local_198 = ptr2_U64_26 + 0x8d8;
      uVal_46 = 0;
      auArr_56 = ZEXT416(DAT_1806b2960);
      iVal_23 = 0;
      do {
        local_1a8 = (uint64_t)uVal_46;
        local_188 = (uint **)CONCAT44(local_188._4_4_,iVal_23);
        uVal_46 = *pU64_41;
        pInt_48 = local_140 + 4;
        uVal_51 = 0;
        ptr2_U64_45 = local_198;
        do {
          iVal_23 = pInt_48[-1];
          iVal_39 = pInt_48[-3];
          iVal_49 = iVal_39 >> 1;
          local_1c8 = (uint **)CONCAT44(local_1c8._4_4_,pInt_48[-4]);
          uVal_30 = (**(func_ptr_t *)(pInt_48 + -10))
                             (ptr2_U64_45[5],
                              *(uint64_t *)
                               ((int64_t)pInt_48 +
                               ((uint64_t)(iVal_49 <= iVal_23) << 3 | 0xffffffffffffffe0)),
                              *(uint64_t *)
                               ((int64_t)pInt_48 +
                               ((uint64_t)(iVal_23 < iVal_49) << 3 | 0xffffffffffffffe0)));
          uVal_47 = local_180;
          *(uint64_t *)(local_98 + uVal_51 * 8) = uVal_30;
          pInt_48[-1] = iVal_23 + 1;
          if (iVal_39 <= iVal_23 + 1) {
            pInt_48[-1] = 0;
            *(int64_t *)(pInt_48 + -8) = *(int64_t *)(pInt_48 + -6);
            iVal_23 = *pInt_48;
            *pInt_48 = iVal_23 + 1;
            if (iVal_23 + 1 < *(int *)ptr2_U64_45) {
              *(int64_t *)(pInt_48 + -6) =
                   *(int64_t *)(pInt_48 + -6) + (int64_t)*(int *)((int64_t)ptr2_U64_45 + 4);
            }
          }
          uVal_51 = uVal_51 + 1;
          ptr2_U64_45 = ptr2_U64_45 + 0xc;
          pInt_48 = pInt_48 + 0xc;
        } while (local_1b0 != uVal_51);
        iVal_39 = (uint)local_1a0;
        iVal_23 = (int)local_188;
        iVal_49 = (int)local_1a8;
        if ((int)(uint)local_1a0 < 3) {
          pU64_41 = *ptr2_U64_26;
          if ((char)local_190 == '\0') {
            if (pU64_41[2] == 4) {
              if (*(int *)((int64_t)ptr2_U64_26 + 0x484c) == 2) {
                if (*pU64_41 != 0) {
                  pU64_36 = (uint8_t *)((uint64_t)(uVal_46 * (int)local_188) + lVal_31 + 1);
                  uVal_51 = 0;
                  do {
                    iVal_44 = (*(byte *)(local_98._0_8_ + uVal_51) ^ 0xff) *
                             (uint)*(byte *)(local_88._8_8_ + uVal_51);
                    pU64_36[-1] = (char)((iVal_44 + 0x80U >> 8) + iVal_44 + 0x80 >> 8);
                    *pU64_36 = 0xff;
                    uVal_51 = uVal_51 + 1;
                    pU64_36 = pU64_36 + local_180;
                  } while (uVal_51 < *pU64_41);
                }
              }
              else {
                if (*(int *)((int64_t)ptr2_U64_26 + 0x484c) != 0) goto LAB_1800df64d;
                if (*pU64_41 != 0) {
                  pU64_36 = (uint8_t *)((uint64_t)(uVal_46 * (int)local_188) + lVal_31 + 1);
                  uVal_51 = 0;
                  do {
                    bFlag_21 = *(byte *)(local_88._8_8_ + uVal_51);
                    iVal_53 = (uint)*(byte *)(local_98._0_8_ + uVal_51) * (uint)bFlag_21;
                    iVal_44 = (uint)*(byte *)(local_98._8_8_ + uVal_51) * (uint)bFlag_21;
                    iVal_25 = (uint)*(byte *)(local_88._0_8_ + uVal_51) * (uint)bFlag_21;
                    pU64_36[-1] = (char)(((iVal_25 + 0x80U >> 8) + iVal_25 + 0x80 >> 8) * 0x1d +
                                         (iVal_44 + (iVal_44 + 0x80U >> 8) + 0x80 >> 8) * 0x96 +
                                         (iVal_53 + (iVal_53 + 0x80U >> 8) + 0x80 >> 8) * 0x4d >> 8);
                    *pU64_36 = 0xff;
                    uVal_51 = uVal_51 + 1;
                    pU64_36 = pU64_36 + local_180;
                  } while (uVal_51 < *pU64_41);
                }
              }
            }
            else {
LAB_1800df64d:
              if ((uint)local_1a0 == 1) {
                if (*pU64_41 != 0) {
                  uVal_51 = 0;
                  do {
                    *(uint8_t *)((uint64_t)(uVal_46 * (int)local_188) + lVal_31 + uVal_51) =
                         *(uint8_t *)(local_98._0_8_ + uVal_51);
                    uVal_51 = uVal_51 + 1;
                  } while (uVal_51 < *pU64_41);
                }
              }
              else if (*pU64_41 != 0) {
                lVal_54 = (uint64_t)(uVal_46 * (int)local_188) + lVal_31;
                uVal_51 = 0;
                do {
                  *(uint8_t *)(lVal_54 + uVal_51 * 2) = *(uint8_t *)(local_98._0_8_ + uVal_51);
                  *(uint8_t *)(lVal_54 + 1 + uVal_51 * 2) = 0xff;
                  uVal_51 = uVal_51 + 1;
                } while (uVal_51 < *pU64_41);
              }
            }
          }
          else if ((uint)local_1a0 == 1) {
            if (*pU64_41 != 0) {
              uVal_51 = 0;
              do {
                bFlag_21 = *(byte *)(local_88._0_8_ + uVal_51);
                *(char *)((uint64_t)(uVal_46 * (int)local_188) + lVal_31 + uVal_51) =
                     (char)((uint)bFlag_21 * 2 + ((uint)bFlag_21 + (uint)bFlag_21 * 8) * 3 +
                            (uint)*(byte *)(local_98._8_8_ + uVal_51) * 0x96 +
                            (uint)*(byte *)(local_98._0_8_ + uVal_51) * 0x4d >> 8);
                uVal_51 = uVal_51 + 1;
              } while (uVal_51 < *pU64_41);
            }
          }
          else if (*pU64_41 != 0) {
            lVal_54 = (uint64_t)(uVal_46 * (int)local_188) + lVal_31;
            uVal_51 = 0;
            do {
              bFlag_21 = *(byte *)(local_88._0_8_ + uVal_51);
              *(char *)(lVal_54 + uVal_51 * 2) =
                   (char)((uint)bFlag_21 * 2 + ((uint)bFlag_21 + (uint)bFlag_21 * 8) * 3 +
                          (uint)*(byte *)(local_98._8_8_ + uVal_51) * 0x96 +
                          (uint)*(byte *)(local_98._0_8_ + uVal_51) * 0x4d >> 8);
              *(uint8_t *)(lVal_54 + 1 + uVal_51 * 2) = 0xff;
              uVal_51 = uVal_51 + 1;
            } while (uVal_51 < *pU64_41);
          }
        }
        else {
          pU64_37 = (uint32_t *)((uint64_t)(iVal_49 * (uint)local_1a0 * uVal_46) + lVal_31);
          pU64_41 = *ptr2_U64_26;
          if (pU64_41[2] == 3) {
            if ((char)local_190 == '\0') {
LAB_1800df6c2:
              local_1c0 = (uint)local_1a0;
              local_1c8 = (uint **)CONCAT44(local_1c8._4_4_,*pU64_41);
              (*(func_ptr_t )ptr2_U64_26[0x90f])(pU64_37,local_98._0_8_,local_98._8_8_,local_88._0_8_);
              pU64_41 = *ptr2_U64_26;
            }
            else if (*pU64_41 != 0) {
              pU64_36 = (uint8_t *)((uint64_t)(uVal_46 * (int)local_188) + lVal_31 + 3);
              uVal_51 = 0;
              do {
                pU64_36[-3] = *(uint8_t *)(local_98._0_8_ + uVal_51);
                pU64_36[-2] = *(uint8_t *)(local_98._8_8_ + uVal_51);
                pU64_36[-1] = *(uint8_t *)(local_88._0_8_ + uVal_51);
                *pU64_36 = 0xff;
                uVal_51 = uVal_51 + 1;
                pU64_36 = pU64_36 + local_180;
              } while (uVal_51 < *pU64_41);
            }
          }
          else if (pU64_41[2] == 4) {
            if (*(int *)((int64_t)ptr2_U64_26 + 0x484c) == 2) {
              local_1c0 = (uint)local_1a0;
              local_1c8 = (uint **)CONCAT44(local_1c8._4_4_,*pU64_41);
              (*(func_ptr_t )ptr2_U64_26[0x90f])(pU64_37,local_98._0_8_,local_98._8_8_,local_88._0_8_);
              pU64_41 = *ptr2_U64_26;
              if (*pU64_41 != 0) {
                pU8_27 = (byte *)((uint64_t)(uVal_46 * iVal_23) + lVal_31 + 2);
                uVal_51 = 0;
                do {
                  bFlag_21 = *(byte *)(local_88._8_8_ + uVal_51);
                  iVal_44 = (pU8_27[-2] ^ 0xff) * (uint)bFlag_21;
                  pU8_27[-2] = (byte)((iVal_44 + 0x80U >> 8) + iVal_44 + 0x80 >> 8);
                  iVal_44 = (pU8_27[-1] ^ 0xff) * (uint)bFlag_21;
                  pU8_27[-1] = (byte)(iVal_44 + (iVal_44 + 0x80U >> 8) + 0x80 >> 8);
                  iVal_44 = (*pU8_27 ^ 0xff) * (uint)bFlag_21;
                  *pU8_27 = (byte)(iVal_44 + (iVal_44 + 0x80U >> 8) + 0x80 >> 8);
                  uVal_51 = uVal_51 + 1;
                  pU8_27 = pU8_27 + uVal_47;
                } while (uVal_51 < *pU64_41);
              }
            }
            else {
              if (*(int *)((int64_t)ptr2_U64_26 + 0x484c) != 0) goto LAB_1800df6c2;
              if (*pU64_41 != 0) {
                pU64_36 = (uint8_t *)((uint64_t)(uVal_46 * (int)local_188) + lVal_31 + 3);
                uVal_51 = 0;
                do {
                  bFlag_21 = *(byte *)(local_88._8_8_ + uVal_51);
                  iVal_44 = (uint)*(byte *)(local_98._0_8_ + uVal_51) * (uint)bFlag_21;
                  pU64_36[-3] = (char)((iVal_44 + 0x80U >> 8) + iVal_44 + 0x80 >> 8);
                  iVal_44 = (uint)*(byte *)(local_98._8_8_ + uVal_51) * (uint)bFlag_21;
                  pU64_36[-2] = (char)(iVal_44 + (iVal_44 + 0x80U >> 8) + 0x80 >> 8);
                  iVal_44 = (uint)*(byte *)(local_88._0_8_ + uVal_51) * (uint)bFlag_21;
                  pU64_36[-1] = (char)(iVal_44 + (iVal_44 + 0x80U >> 8) + 0x80 >> 8);
                  *pU64_36 = 0xff;
                  uVal_51 = uVal_51 + 1;
                  pU64_36 = pU64_36 + local_180;
                } while (uVal_51 < *pU64_41);
              }
            }
          }
          else if (*pU64_41 != 0) {
            uVal_51 = 0;
            do {
              auArr_55._8_8_ = uVal_2;
              auArr_55._0_8_ =
                   uVal_34 & 0xffffffffffffff00 | (uint64_t)*(byte *)(local_98._0_8_ + uVal_51);
              auArr_55 = pshufb(auArr_55,auArr_56);
              *pU64_37 = auArr_55._0_4_;
              pU64_37 = (uint32_t *)((int64_t)pU64_37 + local_180);
              uVal_51 = uVal_51 + 1;
            } while (uVal_51 < *pU64_41);
          }
        }
        uVal_46 = iVal_49 + 1;
        iVal_23 = iVal_23 + iVal_39;
      } while (uVal_46 < pU64_41[1]);
    }
    uVal_46 = pU64_41[2];
    if (0 < (int64_t)(int)uVal_46) {
      lVal_54 = 0;
      do {
        if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46d8) != 0) {
          thunk_FUN_180695dd0();
          *(uint8_t (*)[16])((int64_t)ptr2_U64_26 + lVal_54 + 0x46d0) = (uint8_t  [16])0x0;
        }
        if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46e0) != 0) {
          thunk_FUN_180695dd0();
          *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46e0) = 0;
          *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46f0) = 0;
        }
        if (*(int64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46e8) != 0) {
          thunk_FUN_180695dd0();
          *(uint64_t *)((int64_t)ptr2_U64_26 + lVal_54 + 0x46e8) = 0;
        }
        lVal_54 = lVal_54 + 0x60;
      } while ((int64_t)(int)uVal_46 * 0x60 != lVal_54);
      pU64_41 = *ptr2_U64_26;
    }
    *local_170 = *pU64_41;
    *local_168 = pU64_41[1];
    if (local_160 != (int *)0x0) {
      *local_160 = (uint)(2 < (int)pU64_41[2]) * 2 + 1;
    }
  }
LAB_1800dfa4b:
  thunk_FUN_180695dd0(ptr2_U64_26);
LAB_1800dfa53:
  if (DAT_18083cf40 != (local_70 ^ (uint64_t)auStack_1e8)) {
    func_0x180673080(local_70 ^ (uint64_t)auStack_1e8);
    fnPtr_4 = (func_ptr_t )swi(3);
    lVal_31 = (*fnPtr_4)();
    return lVal_31;
  }
  return lVal_31;
}

// func_0x1800dfab0
uint64_t func_0x1800dfab0(int64_t param_1)
{
  int iVal_1;
  char *fnPtr_2;
  char *fnPtr_3;
  char ch_4;
  char *fnPtr_5;
  
  fnPtr_3 = *(char **)(param_1 + 0xc0);
  if (fnPtr_3 < *(char **)(param_1 + 200)) {
    fnPtr_5 = fnPtr_3 + 1;
    *(char **)(param_1 + 0xc0) = fnPtr_5;
    ch_4 = *fnPtr_3;
joined_r0x0001800dfb25:
    if (fnPtr_5 < *(char **)(param_1 + 200)) goto LAB_1800dfb88;
LAB_1800dfb27:
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800dfbd0;
    fnPtr_5 = (char *)(param_1 + 0x38);
    iVal_1 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),fnPtr_5,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_1 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      fnPtr_3 = (char *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
    }
    else {
      fnPtr_3 = fnPtr_5 + iVal_1;
    }
    *(char **)(param_1 + 200) = fnPtr_3;
    *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      ch_4 = '\0';
      fnPtr_5 = fnPtr_3;
      goto joined_r0x0001800dfb25;
    }
    fnPtr_3 = (char *)(param_1 + 0x38);
    iVal_1 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_1 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      fnPtr_2 = (char *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
      ch_4 = '\0';
    }
    else {
      fnPtr_2 = fnPtr_3 + iVal_1;
      ch_4 = *fnPtr_3;
    }
    *(char **)(param_1 + 200) = fnPtr_2;
    fnPtr_5 = (char *)(param_1 + 0x39);
    *(char **)(param_1 + 0xc0) = fnPtr_5;
    if (fnPtr_2 <= fnPtr_5) goto LAB_1800dfb27;
LAB_1800dfb88:
    *(char **)(param_1 + 0xc0) = fnPtr_5 + 1;
  }
  if ((ch_4 == 'P') && (0xfd < (byte)(*fnPtr_5 - 0x37U))) {
    return 1;
  }
LAB_1800dfbd0:
  *(uint32_t *)(param_1 + 0xc0) = *(uint32_t *)(param_1 + 0xd0);
  *(uint32_t *)(param_1 + 0xc4) = *(uint32_t *)(param_1 + 0xd4);
  *(uint32_t *)(param_1 + 200) = *(uint32_t *)(param_1 + 0xd8);
  *(uint32_t *)(param_1 + 0xcc) = *(uint32_t *)(param_1 + 0xdc);
  return 0;
}

// func_0x1800dfbf0
int64_t func_0x1800dfbf0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5, uint *param_6)
{
  uint uVal_1;
  uint *pU64_2;
  uint *pU64_3;
  uint uVal_4;
  uint uVal_5;
  func_ptr_t fnPtr_6;
  uint uVal_7;
  int64_t lVal_8;
  uint uVal_9;
  char *fnPtr_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint uVal_13;
  int iVal_14;
  int iVal_15;
  uint uVal_16;
  int iVal_17;
  int64_t lVal_18;
  
  pU64_2 = param_1 + 2;
  pU64_3 = param_1 + 1;
  uVal_7 = func_0x1800eee70(param_1,param_1,pU64_3,pU64_2);
  *param_6 = uVal_7;
  if (uVal_7 == 0) {
    return 0;
  }
  if ((*pU64_3 < 0x1000001) && (*param_1 < 0x1000001)) {
    *param_2 = *param_1;
    uVal_4 = *pU64_3;
    *param_3 = uVal_4;
    uVal_7 = *pU64_2;
    if (param_4 != (uint *)0x0) {
      *param_4 = uVal_7;
      uVal_4 = *pU64_3;
    }
    uVal_9 = *param_6;
    uVal_1 = uVal_9 + 7;
    if ((int)uVal_9 < 0) {
      uVal_9 = uVal_1;
    }
    uVal_5 = *param_1;
    if ((-1 < (int)(uVal_7 | uVal_5)) &&
       ((((uVal_5 == 0 || ((int)uVal_7 <= (int)(0x7fffffff / (uint64_t)uVal_5))) &&
         (uVal_16 = uVal_7 * uVal_5, -1 < (int)(uVal_16 | uVal_4))) &&
        ((uVal_4 == 0 || ((int)uVal_16 <= (int)(0x7fffffff / (uint64_t)uVal_4))))))) {
      uVal_9 = (int)uVal_9 >> 3;
      uVal_13 = uVal_16 * uVal_4;
      if ((-1 < (int)(uVal_13 | uVal_9)) &&
         ((uVal_1 < 0xf || ((int)uVal_13 <= (int)(0x7fffffff / (uint64_t)uVal_9))))) {
        if ((((uVal_5 == 0) || ((int)uVal_7 <= (int)(0x7fffffff / (uint64_t)uVal_5))) &&
            ((uVal_4 == 0 || ((int)uVal_16 <= (int)(0x7fffffff / (uint64_t)uVal_4))))) &&
           ((uVal_1 < 0xf || ((int)uVal_13 <= (int)(0x7fffffff / (uint64_t)uVal_9))))) {
          iVal_14 = uVal_13 * uVal_9;
          lVal_18 = (int64_t)iVal_14;
          lVal_8 = _malloc_base(lVal_18);
          if (lVal_8 != 0) {
            fnPtr_6 = *(func_ptr_t *)(param_1 + 4);
            if (fnPtr_6 == (func_ptr_t )0x0) {
              lVal_12 = *(int64_t *)(param_1 + 0x30);
              uVal_11 = *(uint64_t *)(param_1 + 0x32);
LAB_1800dfdea:
              if ((uint64_t)(lVal_12 + lVal_18) <= uVal_11) {
                func_0x1806aa960(lVal_8,lVal_12,lVal_18);
                *(int64_t *)(param_1 + 0x30) = lVal_12 + lVal_18;
LAB_1800dfe32:
                if (param_5 == 0) {
                  return lVal_8;
                }
                if (param_5 != *pU64_2) {
                  if (*param_6 != 0x10) {
                    lVal_8 = func_0x1800e3d70(lVal_8,*pU64_2,param_5,*param_1,param_1[1]);
                    return lVal_8;
                  }
                  lVal_8 = func_0x1800e4b40(lVal_8);
                  return lVal_8;
                }
                return lVal_8;
              }
            }
            else {
              lVal_12 = *(int64_t *)(param_1 + 0x30);
              uVal_11 = *(uint64_t *)(param_1 + 0x32);
              iVal_17 = (int)uVal_11 - (int)lVal_12;
              iVal_15 = iVal_14 - iVal_17;
              if (iVal_15 == 0 || iVal_14 < iVal_17) goto LAB_1800dfdea;
              func_0x1806aa960(lVal_8,lVal_12,(int64_t)iVal_17);
              iVal_14 = (*fnPtr_6)(*(uint64_t *)(param_1 + 10),lVal_8 + iVal_17,iVal_15);
              *(uint64_t *)(param_1 + 0x30) = *(uint64_t *)(param_1 + 0x32);
              if (iVal_14 == iVal_15) goto LAB_1800dfe32;
            }
            thunk_FUN_180695dd0(lVal_8);
            lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            fnPtr_10 = "bad PNM";
            goto LAB_1800dfcf2;
          }
        }
        lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        fnPtr_10 = "outofmem";
        goto LAB_1800dfcf2;
      }
    }
  }
  lVal_8 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_10 = "too large";
LAB_1800dfcf2:
  *(char **)(lVal_8 + 0x3010) = fnPtr_10;
  return 0;
}

// func_0x1800dfe80
uint64_t * func_0x1800dfe80(int64_t param_1,uint *param_2,uint *param_3,uint32_t *param_4,uint param_5)
{
  func_ptr_t fnPtr_1;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  char acVar4 [16];
  uint uVal_5;
  uint uVal_6;
  byte *pU8_7;
  uint64_t *pU64_8;
  uint64_t *pU64_9;
  byte bFlag_10;
  char *fnPtr_11;
  uint *pU64_12;
  byte *pU8_13;
  uint *pU64_14;
  byte bFlag_15;
  uint64_t unaff_RBX;
  uint unaff_EBP;
  int iVal_16;
  byte *pU8_17;
  byte *pU8_18;
  int iVal_19;
  byte bFlag_20;
  int iVal_21;
  uint64_t uVal_22;
  uint64_t uVal_23;
  int64_t lVal_24;
  float fVal_25;
  float fVal_26;
  double dVal_27;
  uint8_t auArr_28 [16];
  uint8_t auStack_518 [40];
  uint64_t *local_4f0;
  uint64_t local_4e8;
  uint *local_4e0;
  uint64_t local_4d8;
  uint local_4cc;
  uint64_t *local_4c8;
  uint64_t local_4c0;
  int64_t local_4b8;
  int64_t local_4b0;
  uint64_t local_4a8;
  int64_t local_4a0;
  uint64_t local_498;
  uint64_t local_490;
  uint *local_488;
  byte local_480;
  byte local_47f;
  byte local_47e;
  byte local_47d;
  uint32_t local_47c;
  char local_478;
  uint8_t uStack_477;
  byte bStack_476;
  uint uStack_475;
  uint32_t uStack_471;
  undefined5 uStack_46d;
  undefined7 uStack_468;
  uint64_t local_70;
  
  local_70 = DAT_18083cf40 ^ (uint64_t)auStack_518;
  func_0x1800ef5b0(param_1,&local_478);
  if (((CONCAT44(uStack_471,uStack_475) ^ 0x45434e41494441 |
       CONCAT17((uint8_t)uStack_471,
                CONCAT43(uStack_475,CONCAT12(bStack_476,CONCAT11(uStack_477,local_478)))) ^
       0x4e41494441523f23) == 0) ||
     ((uStack_475 ^ 0x454247 |
      CONCAT13((uint8_t)uStack_475,CONCAT12(bStack_476,CONCAT11(uStack_477,local_478))) ^
      0x47523f23) == 0)) {
    func_0x1800ef5b0(param_1,&local_478);
    auArr_28 = s_FORMAT_32_bit_rl_1806b2980._0_16_;
    acVar4 = s_32_bit_rle_rgbe_1806b2970;
    if (local_478 != '\0') {
      unaff_RBX = 0;
      do {
        auArr_3._4_5_ = uStack_46d;
        auArr_3._0_4_ = uStack_471;
        auArr_3._9_7_ = uStack_468;
        auArr_2[1] = uStack_477;
        auArr_2[0] = local_478;
        auArr_2[2] = bStack_476;
        auArr_2._3_4_ = uStack_475;
        auArr_2._7_4_ = uStack_471;
        auArr_2._11_5_ = uStack_46d;
        if ((auArr_2 ^ auArr_28 | auArr_3 ^ (uint8_t  [16])acVar4) == (uint8_t  [16])0x0) {
          unaff_RBX = 1;
        }
        func_0x1800ef5b0(param_1,&local_478);
      } while (local_478 != '\0');
      unaff_EBP = param_5;
      if ((int)unaff_RBX != 0) {
        func_0x1800ef5b0(param_1,&local_478);
        if ((ushort)(bStack_476 ^ 0x20 | CONCAT11(uStack_477,local_478) ^ 0x592d) == 0) {
          local_488 = &uStack_475;
          uVal_5 = func_0x180691c9c(local_488,&local_488,10);
          pU64_12 = (uint *)((int64_t)local_488 + 2);
          do {
            pU64_14 = pU64_12;
            pU64_12 = (uint *)((int64_t)pU64_14 + 1);
          } while (*(char *)((int64_t)pU64_14 + -2) == ' ');
          if (((*(char *)((int64_t)pU64_14 + -2) == '+') &&
              (*(char *)((int64_t)pU64_14 + -1) == 'X')) && (*(char *)pU64_14 == ' ')) {
            local_488 = pU64_12;
            uVal_6 = func_0x180691c9c(pU64_12,0,10);
            if (((int)uVal_5 < 0x1000001) && (unaff_RBX = (uint64_t)uVal_6, (int)uVal_6 < 0x1000001))
            {
              *param_2 = uVal_6;
              *param_3 = uVal_5;
              if (param_4 != (uint32_t *)0x0) {
                *param_4 = 3;
              }
              uVal_22 = 3;
              if (param_5 != 0) {
                uVal_22 = (uint64_t)param_5;
              }
              iVal_19 = func_0x1800ef180(uVal_6,uVal_5,uVal_22,4);
              if (iVal_19 != 0) {
                local_4e8 = uVal_22;
                pU64_8 = (uint64_t *)func_0x1800ef200(unaff_RBX,uVal_5,uVal_22,4);
                fVal_25 = DAT_1806ae650;
                if (pU64_8 != (uint64_t *)0x0) {
                  param_2 = (uint *)0x0;
                  local_4f0 = pU64_8;
                  local_4d8 = unaff_RBX;
                  local_4cc = uVal_5;
                  if (uVal_6 - 0x8000 < 0xffff8008) goto LAB_1800e08b5;
                  if (0 < (int)uVal_5) {
                    local_4c0 = (uint64_t)uVal_6;
                    local_498 = (uint64_t)uVal_5;
                    local_4a0 = (int64_t)(int)local_4e8 * local_4c0 * 4;
                    local_4b8 = (int64_t)(int)local_4e8 << 2;
                    param_2 = (uint *)0x0;
                    uVal_23 = 0;
                    uVal_22 = (uint64_t)(uVal_6 * 4);
                    local_4c8 = pU64_8;
                    do {
                      pU8_13 = *(byte **)(param_1 + 0xc0);
                      pU8_7 = *(byte **)(param_1 + 200);
                      local_490 = uVal_23;
                      if (pU8_13 < pU8_7) {
                        *(byte **)(param_1 + 0xc0) = pU8_13 + 1;
                        bFlag_10 = *pU8_13;
                        pU8_13 = pU8_13 + 1;
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        bFlag_10 = 0;
                      }
                      else {
                        func_0x1800e2360(param_1);
                        pU8_17 = *(byte **)(param_1 + 0xc0);
                        pU8_7 = *(byte **)(param_1 + 200);
                        pU8_13 = pU8_17 + 1;
                        *(byte **)(param_1 + 0xc0) = pU8_13;
                        bFlag_10 = *pU8_17;
                      }
                      if (pU8_13 < pU8_7) {
                        *(byte **)(param_1 + 0xc0) = pU8_13 + 1;
                        bFlag_15 = *pU8_13;
                        pU8_13 = pU8_13 + 1;
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        bFlag_15 = 0;
                      }
                      else {
                        func_0x1800e2360(param_1);
                        pU8_17 = *(byte **)(param_1 + 0xc0);
                        pU8_7 = *(byte **)(param_1 + 200);
                        pU8_13 = pU8_17 + 1;
                        *(byte **)(param_1 + 0xc0) = pU8_13;
                        bFlag_15 = *pU8_17;
                      }
                      if (pU8_7 <= pU8_13) {
                        if (*(int *)(param_1 + 0x30) != 0) {
                          func_0x1800e2360(param_1);
                          pU8_13 = *(byte **)(param_1 + 0xc0);
                          goto LAB_1800e0249;
                        }
                        bFlag_20 = 0;
                        if (bFlag_10 == 2) goto LAB_1800e0265;
LAB_1800e07c4:
                        local_47e = bFlag_20;
                        local_480 = bFlag_10;
                        local_47f = bFlag_15;
                        if (*(byte **)(param_1 + 200) <= pU8_13) {
                          if (*(int *)(param_1 + 0x30) == 0) {
                            local_47d = 0;
                            goto LAB_1800e080b;
                          }
                          func_0x1800e2360(param_1);
                          pU8_13 = *(byte **)(param_1 + 0xc0);
                        }
                        *(byte **)(param_1 + 0xc0) = pU8_13 + 1;
                        local_47d = *pU8_13;
LAB_1800e080b:
                        pU64_8 = local_4f0;
                        func_0x1800ef830(local_4f0,&local_480,local_4e8);
                        thunk_FUN_180695dd0(param_2);
                        param_2 = (uint *)0x0;
                        iVal_19 = 1;
                        goto LAB_1800e08cb;
                      }
LAB_1800e0249:
                      pU8_7 = pU8_13 + 1;
                      *(byte **)(param_1 + 0xc0) = pU8_7;
                      bFlag_20 = *pU8_13;
                      pU8_13 = pU8_7;
                      if (bFlag_10 != 2) goto LAB_1800e07c4;
LAB_1800e0265:
                      unaff_RBX = local_4d8;
                      if ((bFlag_15 != 2) || ((char)bFlag_20 < '\0')) goto LAB_1800e07c4;
                      if (pU8_13 < *(byte **)(param_1 + 200)) {
LAB_1800e02a7:
                        *(byte **)(param_1 + 0xc0) = pU8_13 + 1;
                        uVal_5 = (uint)*pU8_13;
                      }
                      else {
                        if (*(int *)(param_1 + 0x30) != 0) {
                          func_0x1800e2360(param_1);
                          pU8_13 = *(byte **)(param_1 + 0xc0);
                          goto LAB_1800e02a7;
                        }
                        uVal_5 = 0;
                      }
                      if (((uint)bFlag_20 << 8 | uVal_5) != (uint)unaff_RBX) {
                        thunk_FUN_180695dd0(local_4f0);
                        thunk_FUN_180695dd0(param_2);
                        lVal_24 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        fnPtr_11 = "invalid decoded scanline length";
                        goto LAB_1800e072f;
                      }
                      if ((param_2 == (uint *)0x0) &&
                         (param_2 = (uint *)_malloc_base(uVal_22), param_2 == (uint *)0x0)) {
                        thunk_FUN_180695dd0(local_4f0);
                        goto LAB_1800e087c;
                      }
                      pU8_13 = (byte *)(param_1 + 0x38);
                      local_4b0 = 0;
                      pU64_8 = local_4f0;
                      pU64_12 = param_2;
                      local_4e0 = param_2;
                      local_4a8 = uVal_22;
                      do {
                        param_2 = (uint *)0x0;
                        uVal_22 = unaff_RBX & 0xffffffff;
                        do {
                          pU8_17 = *(byte **)(param_1 + 0xc0);
                          pU8_7 = *(byte **)(param_1 + 200);
                          if (pU8_7 <= pU8_17) {
                            if (*(int *)(param_1 + 0x30) != 0) {
                              iVal_19 = (**(func_ptr_t *)(param_1 + 0x10))
                                                 (*(uint64_t *)(param_1 + 0x28),pU8_13,
                                                  *(uint32_t *)(param_1 + 0x34));
                              *(int *)(param_1 + 0xb8) =
                                   *(int *)(param_1 + 0xb8) +
                                   (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                              if (iVal_19 == 0) {
                                *(uint32_t *)(param_1 + 0x30) = 0;
                                *(uint8_t *)(param_1 + 0x38) = 0;
                                pU8_7 = (byte *)(param_1 + 0x39);
                              }
                              else {
                                pU8_7 = pU8_13 + iVal_19;
                              }
                              pU8_18 = (byte *)(param_1 + 0x39);
                              *(byte **)(param_1 + 200) = pU8_7;
                              pU64_8 = local_4f0;
                              pU8_17 = pU8_13;
                              goto LAB_1800e0391;
                            }
LAB_1800e0793:
                            thunk_FUN_180695dd0(pU64_8);
                            thunk_FUN_180695dd0(local_4e0);
                            lVal_24 = *(int64_t *)
                                      ((int64_t)ThreadLocalStoragePointer +
                                      (uint64_t)_tls_index * 8);
                            fnPtr_11 = "corrupt";
                            goto LAB_1800e072f;
                          }
                          pU8_18 = pU8_17 + 1;
LAB_1800e0391:
                          *(byte **)(param_1 + 0xc0) = pU8_18;
                          bFlag_10 = *pU8_17;
                          uVal_5 = (uint)bFlag_10;
                          iVal_19 = (int)param_2;
                          if (bFlag_10 < 0x81) {
                            if ((bFlag_10 != 0) && (uVal_5 <= (uint)uVal_22)) {
                              lVal_24 = 0;
                              do {
                                pU8_7 = *(byte **)(param_1 + 0xc0);
                                if (pU8_7 < *(byte **)(param_1 + 200)) {
                                  *(byte **)(param_1 + 0xc0) = pU8_7 + 1;
                                  bFlag_10 = *pU8_7;
                                }
                                else if (*(int *)(param_1 + 0x30) == 0) {
                                  bFlag_10 = 0;
                                }
                                else {
                                  iVal_21 = (**(func_ptr_t *)(param_1 + 0x10))
                                                     (*(uint64_t *)(param_1 + 0x28),pU8_13,
                                                      *(uint32_t *)(param_1 + 0x34));
                                  *(int *)(param_1 + 0xb8) =
                                       *(int *)(param_1 + 0xb8) +
                                       (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                                  if (iVal_21 == 0) {
                                    *(uint32_t *)(param_1 + 0x30) = 0;
                                    *(uint8_t *)(param_1 + 0x38) = 0;
                                    bFlag_10 = 0;
                                    pU8_7 = (byte *)(param_1 + 0x39);
                                  }
                                  else {
                                    pU8_7 = pU8_13 + iVal_21;
                                    bFlag_10 = *pU8_13;
                                  }
                                  *(byte **)(param_1 + 200) = pU8_7;
                                  *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
                                  pU64_8 = local_4f0;
                                }
                                *(byte *)(pU64_12 + iVal_19 + lVal_24) = bFlag_10;
                                lVal_24 = lVal_24 + 1;
                              } while (uVal_5 != (uint)lVal_24);
                              param_2 = (uint *)(uint64_t)(iVal_19 + (uint)lVal_24);
                              unaff_RBX = local_4d8;
                              goto LAB_1800e0311;
                            }
                            goto LAB_1800e0793;
                          }
                          if (pU8_18 < pU8_7) {
                            *(byte **)(param_1 + 0xc0) = pU8_18 + 1;
                            bFlag_15 = *pU8_18;
                          }
                          else if (*(int *)(param_1 + 0x30) == 0) {
                            bFlag_15 = 0;
                          }
                          else {
                            iVal_21 = (**(func_ptr_t *)(param_1 + 0x10))
                                               (*(uint64_t *)(param_1 + 0x28),pU8_13,
                                                *(uint32_t *)(param_1 + 0x34));
                            *(int *)(param_1 + 0xb8) =
                                 *(int *)(param_1 + 0xb8) +
                                 (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                            if (iVal_21 == 0) {
                              *(uint32_t *)(param_1 + 0x30) = 0;
                              *(uint8_t *)(param_1 + 0x38) = 0;
                              bFlag_15 = 0;
                              pU8_7 = (byte *)(param_1 + 0x39);
                            }
                            else {
                              pU8_7 = pU8_13 + iVal_21;
                              bFlag_15 = *pU8_13;
                            }
                            *(byte **)(param_1 + 200) = pU8_7;
                            *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
                            pU64_8 = local_4f0;
                          }
                          if ((uint)uVal_22 < (uVal_5 & 0x7f)) goto LAB_1800e0793;
                          bFlag_20 = (byte)(uVal_5 & 0x7f);
                          if (bFlag_20 != 0) {
                            param_2 = (uint *)(int64_t)iVal_19;
                            uVal_6 = uVal_5 & 3;
                            if (3 < bFlag_20) {
                              uVal_5 = uVal_5 & 0x7c;
                              do {
                                *(byte *)(pU64_12 + (int64_t)param_2) = bFlag_15;
                                *(byte *)(pU64_12 + (int64_t)param_2 + 1) = bFlag_15;
                                *(byte *)(pU64_12 + (int64_t)param_2 + 2) = bFlag_15;
                                *(byte *)(pU64_12 + (int64_t)param_2 + 3) = bFlag_15;
                                param_2 = param_2 + 1;
                                uVal_5 = uVal_5 - 4;
                              } while (uVal_5 != 0);
                              if ((bFlag_10 & 3) == 0) goto LAB_1800e0311;
                            }
                            do {
                              *(byte *)(pU64_12 + (int64_t)param_2) = bFlag_15;
                              param_2 = (uint *)((int64_t)param_2 + 1);
                              uVal_6 = uVal_6 - 1;
                            } while (uVal_6 != 0);
                          }
LAB_1800e0311:
                          uVal_5 = (int)unaff_RBX - (int)param_2;
                          uVal_22 = (uint64_t)uVal_5;
                        } while (uVal_5 != 0 && (int)param_2 <= (int)unaff_RBX);
                        local_4b0 = local_4b0 + 1;
                        pU64_12 = (uint *)((int64_t)pU64_12 + 1);
                      } while (local_4b0 != 4);
                      uVal_23 = 0;
                      unaff_RBX = local_4c0;
                      lVal_24 = local_4b8;
                      uVal_22 = local_4e8;
                      param_2 = local_4e0;
                      pU64_8 = local_4c8;
                      do {
                        if (*(char *)((int64_t)param_2 + uVal_23 * 4 + 3) == '\0') {
                          switch((int)uVal_22) {
                          case 2:
                            *(uint32_t *)((int64_t)pU64_8 + 4) = 0x3f800000;
                          case 1:
                            *(uint32_t *)pU64_8 = 0;
                            unaff_RBX = local_4c0;
                            lVal_24 = local_4b8;
                            uVal_22 = local_4e8;
                            param_2 = local_4e0;
                            break;
                          case 4:
                            *(uint32_t *)((int64_t)pU64_8 + 0xc) = 0x3f800000;
                          case 3:
                            *(uint32_t *)(pU64_8 + 1) = 0;
                            *pU64_8 = 0;
                            unaff_RBX = local_4c0;
                            lVal_24 = local_4b8;
                            uVal_22 = local_4e8;
                            param_2 = local_4e0;
                          }
                        }
                        else {
                          dVal_27 = (double)func_0x18068bd40();
                          fVal_26 = (float)dVal_27;
                          if ((int)local_4e8 < 3) {
                            *(float *)pU64_8 =
                                 (fVal_26 * (float)((uint)*(byte *)((int64_t)param_2 +
                                                                  uVal_23 * 4 + 2) +
                                                  (uint)*(byte *)((int64_t)param_2 + uVal_23 * 4 + 1
                                                                 ) +
                                                  (uint)*(byte *)(param_2 + uVal_23))) / fVal_25;
                          }
                          else {
                            *(float *)pU64_8 = (float)(uint)*(byte *)(param_2 + uVal_23) * fVal_26;
                            *(float *)((int64_t)pU64_8 + 4) =
                                 (float)(uint)*(byte *)((int64_t)param_2 + uVal_23 * 4 + 1) * fVal_26
                            ;
                            *(float *)(pU64_8 + 1) =
                                 (float)(uint)*(byte *)((int64_t)param_2 + uVal_23 * 4 + 2) * fVal_26
                            ;
                          }
                          uVal_22 = local_4e8;
                          if (param_5 == 4) {
                            *(uint32_t *)((int64_t)pU64_8 + 0xc) = 0x3f800000;
                          }
                          else if (param_5 == 2) {
                            *(uint32_t *)((int64_t)pU64_8 + 4) = 0x3f800000;
                          }
                        }
                        uVal_23 = uVal_23 + 1;
                        pU64_8 = (uint64_t *)((int64_t)pU64_8 + lVal_24);
                      } while (unaff_RBX != uVal_23);
                      uVal_23 = local_490 + 1;
                      local_4c8 = (uint64_t *)((int64_t)local_4c8 + local_4a0);
                      uVal_22 = local_4a8;
                    } while (uVal_23 != local_498);
                    thunk_FUN_180695dd0(param_2);
                    pU64_8 = local_4f0;
                  }
                  goto LAB_1800e0738;
                }
LAB_1800e087c:
                lVal_24 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                fnPtr_11 = "outofmem";
                goto LAB_1800e072f;
              }
            }
            lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            fnPtr_11 = "too large";
            goto LAB_1800e072f;
          }
        }
        lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        fnPtr_11 = "unsupported data layout";
        goto LAB_1800e072f;
      }
    }
    lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_11 = "unsupported format";
  }
  else {
    lVal_24 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_11 = "not HDR";
  }
LAB_1800e072f:
  *(char **)(lVal_24 + 0x3010) = fnPtr_11;
  pU64_8 = (uint64_t *)0x0;
LAB_1800e0738:
  do {
    if (DAT_18083cf40 == (local_70 ^ (uint64_t)auStack_518)) {
      return pU64_8;
    }
    pU64_8 = (uint64_t *)func_0x180673080(local_70 ^ (uint64_t)auStack_518);
    while( true ) {
      param_2 = (uint *)(uint64_t)((int)param_2 + 1);
LAB_1800e08b5:
      iVal_19 = 0;
      param_5 = unaff_EBP;
      if ((int)local_4cc <= (int)param_2) break;
      while (unaff_EBP = param_5, iVal_19 < (int)unaff_RBX) {
LAB_1800e08cb:
        fnPtr_1 = *(func_ptr_t *)(param_1 + 0x10);
        if (fnPtr_1 == (func_ptr_t )0x0) {
          pU64_12 = *(uint **)(param_1 + 0xc0);
          pU64_14 = *(uint **)(param_1 + 200);
LAB_1800e0943:
          if (pU64_12 + 1 <= pU64_14) {
            local_47c = *pU64_12;
            *(uint **)(param_1 + 0xc0) = pU64_12 + 1;
          }
        }
        else {
          pU64_12 = *(uint **)(param_1 + 0xc0);
          pU64_14 = *(uint **)(param_1 + 200);
          iVal_21 = (int)pU64_14 - (int)pU64_12;
          if (3 < iVal_21) goto LAB_1800e0943;
          func_0x1806aa960(&local_47c,pU64_12,(int64_t)iVal_21);
          (*fnPtr_1)(*(uint64_t *)(param_1 + 0x28),(int64_t)&local_47c + (int64_t)iVal_21,
                    4 - iVal_21);
          *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 200);
          pU64_8 = local_4f0;
        }
        unaff_RBX = local_4d8;
        iVal_16 = (int)local_4e8;
        iVal_21 = (int)local_4d8 * iVal_16 * (int)param_2;
        lVal_24 = (int64_t)(iVal_19 * iVal_16);
        if (local_47c._3_1_ == 0) {
          pU64_9 = pU64_8;
          switch(iVal_16) {
          case 2:
            *(uint32_t *)((int64_t)pU64_8 + lVal_24 * 4 + (int64_t)iVal_21 * 4 + 4) = 0x3f800000;
          case 1:
            *(uint32_t *)((int64_t)pU64_8 + lVal_24 * 4 + (int64_t)iVal_21 * 4) = 0;
          default:
switchD_1800e09f3_caseD_4:
            iVal_19 = iVal_19 + 1;
            pU64_8 = pU64_9;
            break;
          case 4:
            *(uint32_t *)((int64_t)pU64_8 + lVal_24 * 4 + (int64_t)iVal_21 * 4 + 0xc) = 0x3f800000
            ;
          case 3:
            *(uint32_t *)((int64_t)pU64_8 + lVal_24 * 4 + (int64_t)iVal_21 * 4 + 8) = 0;
            *(uint64_t *)((int64_t)pU64_8 + lVal_24 * 4 + (int64_t)iVal_21 * 4) = 0;
            iVal_19 = iVal_19 + 1;
          }
        }
        else {
          dVal_27 = (double)func_0x18068bd40(DAT_1806b2878,local_47c._3_1_ - 0x88);
          fVal_25 = (float)dVal_27;
          if ((int)local_4e8 < 3) {
            fVal_26 = (fVal_25 * (float)((local_47c >> 0x10 & 0xff) +
                                      (local_47c >> 8 & 0xff) + (local_47c & 0xff))) / DAT_1806ae650
            ;
          }
          else {
            fVal_26 = (float)(local_47c & 0xff) * fVal_25;
            auArr_28 = pmovzxbd(ZEXT216(local_47c._1_2_),ZEXT216(local_47c._1_2_));
            *(uint64_t *)((int64_t)pU64_8 + lVal_24 * 4 + (int64_t)iVal_21 * 4 + 4) =
                 CONCAT44(fVal_25 * (float)auArr_28._4_4_,fVal_25 * (float)auArr_28._0_4_);
          }
          *(float *)((int64_t)pU64_8 + lVal_24 * 4 + (int64_t)iVal_21 * 4) = fVal_26;
          if (param_5 != 4) {
            pU64_9 = local_4f0;
            if (param_5 == 2) {
              *(uint32_t *)((int64_t)pU64_8 + lVal_24 * 4 + (int64_t)iVal_21 * 4 + 4) = 0x3f800000
              ;
            }
            goto switchD_1800e09f3_caseD_4;
          }
          *(uint32_t *)((int64_t)pU64_8 + lVal_24 * 4 + (int64_t)iVal_21 * 4 + 0xc) = 0x3f800000;
          iVal_19 = iVal_19 + 1;
          pU64_8 = local_4f0;
        }
      }
    }
  } while( true );
}

// func_0x1800e0a90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1800e0a90(int64_t param_1,uint64_t param_2,uint param_3,uint param_4)
{
  float *pFloat_1;
  float *pFloat_2;
  uint8_t auArr_3 [16];
  float fVal_4;
  float fVal_5;
  int iVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  uint64_t uVal_9;
  uint uVal_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  float fVal_16;
  float fVal_17;
  float fVal_18;
  float fVal_19;
  float fVal_20;
  float fVal_21;
  uint8_t auArr_22 [16];
  uint8_t auArr_23 [16];
  uint8_t auArr_24 [16];
  uint8_t auArr_25 [16];
  uint8_t auArr_26 [16];
  
  if (param_1 != 0) {
    uVal_10 = (uint)param_2;
    if (((-1 < (int)(param_3 | uVal_10)) &&
        (((param_3 == 0 ||
          (param_2 = param_2 & 0xffffffff, (int)uVal_10 <= (int)(0x7fffffff / (uint64_t)param_3)))
         && (param_3 = param_3 * (int)param_2, -1 < (int)(param_4 | param_3))))) &&
       (((param_4 == 0 ||
         (param_2 = 0x7fffffff % (uint64_t)param_4, iVal_6 = (int)(0x7fffffff / (uint64_t)param_4),
         param_3 - iVal_6 == 0 || (int)param_3 < iVal_6)) &&
        (lVal_7 = _malloc_base((int64_t)(int)(param_3 * param_4),param_2), fVal_5 = _UNK_1806b29ac,
        fVal_4 = _UNK_1806b29a8, fVal_17 = _UNK_1806b29a4, fVal_16 = _DAT_1806b29a0,
        auArr_3 = ram0x0001806b2990, fVal_19 = DAT_1806b26b0, fVal_18 = DAT_1806aeae4, lVal_7 != 0)))) {
      if (0 < (int)param_3) {
        uVal_10 = (param_4 + (param_4 & 1)) - 1;
        if ((int)uVal_10 < 1) {
          if (0 < (int)param_4) {
            if (param_4 == 1 && 7 < param_3) {
              uVal_14 = (uint64_t)(param_3 & 0x7ffffff8);
              uVal_11 = 0;
              fVal_18 = SUB164(ram0x0001806b2990,0);
              fVal_19 = SUB164(ram0x0001806b2990,4);
              fVal_20 = SUB164(ram0x0001806b2990,8);
              fVal_21 = SUB164(ram0x0001806b2990,0xc);
              auArr_22 = ZEXT416(DAT_1806b29b0);
              do {
                pFloat_1 = (float *)(param_1 + uVal_11 * 4);
                pFloat_2 = (float *)(param_1 + 0x10 + uVal_11 * 4);
                auArr_23._0_4_ = *pFloat_1 * fVal_18 + fVal_16;
                auArr_23._4_4_ = pFloat_1[1] * fVal_19 + fVal_17;
                auArr_23._8_4_ = pFloat_1[2] * fVal_20 + fVal_4;
                auArr_23._12_4_ = pFloat_1[3] * fVal_21 + fVal_5;
                auArr_24._0_4_ = *pFloat_2 * fVal_18 + fVal_16;
                auArr_24._4_4_ = pFloat_2[1] * fVal_19 + fVal_17;
                auArr_24._8_4_ = pFloat_2[2] * fVal_20 + fVal_4;
                auArr_24._12_4_ = pFloat_2[3] * fVal_21 + fVal_5;
                auArr_26 = maxps(ZEXT816(0),auArr_23);
                auArr_23 = maxps(ZEXT816(0),auArr_24);
                auArr_24 = minps(auArr_3,auArr_26);
                auArr_23 = minps(auArr_3,auArr_23);
                auArr_26._0_4_ = (int)auArr_24._0_4_;
                auArr_26._4_4_ = (int)auArr_24._4_4_;
                auArr_26._8_4_ = (int)auArr_24._8_4_;
                auArr_26._12_4_ = (int)auArr_24._12_4_;
                auArr_25._0_4_ = (int)auArr_23._0_4_;
                auArr_25._4_4_ = (int)auArr_23._4_4_;
                auArr_25._8_4_ = (int)auArr_23._8_4_;
                auArr_25._12_4_ = (int)auArr_23._12_4_;
                auArr_23 = pshufb(auArr_26,auArr_22);
                auArr_26 = pshufb(auArr_25,auArr_22);
                *(int *)(lVal_7 + uVal_11) = auArr_23._0_4_;
                *(int *)(lVal_7 + 4 + uVal_11) = auArr_26._0_4_;
                uVal_11 = uVal_11 + 8;
              } while (uVal_14 != uVal_11);
              if ((param_3 & 0x7ffffff8) == param_3) goto LAB_1800e0e21;
            }
            else {
              uVal_14 = 0;
            }
            uVal_9 = (uint64_t)param_4;
            uVal_11 = uVal_14;
            if ((param_3 & 1) != 0) {
              fVal_19 = *(float *)(param_1 + uVal_14 * uVal_9 * 4) * DAT_1806b26b0 + DAT_1806aeae4;
              fVal_18 = 0.0;
              if (0.0 <= fVal_19) {
                fVal_18 = fVal_19;
              }
              fVal_19 = DAT_1806b26b0;
              if (fVal_18 <= DAT_1806b26b0) {
                fVal_19 = fVal_18;
              }
              *(char *)(lVal_7 + uVal_14 * uVal_9) = (char)(int)fVal_19;
              uVal_11 = uVal_14 | 1;
            }
            fVal_19 = DAT_1806b26b0;
            fVal_18 = DAT_1806aeae4;
            if (uVal_14 != (uint64_t)param_3 - 1) {
              lVal_12 = param_3 - uVal_11;
              lVal_13 = (uVal_11 + 1) * uVal_9;
              lVal_8 = 0;
              do {
                fVal_17 = *(float *)(param_1 + uVal_11 * uVal_9 * 4 + lVal_8 * 4) * fVal_19 + fVal_18;
                fVal_16 = 0.0;
                if (0.0 <= fVal_17) {
                  fVal_16 = fVal_17;
                }
                fVal_17 = fVal_19;
                if (fVal_16 <= fVal_19) {
                  fVal_17 = fVal_16;
                }
                *(char *)(lVal_7 + uVal_11 * uVal_9 + lVal_8) = (char)(int)fVal_17;
                fVal_17 = *(float *)(param_1 + lVal_13 * 4 + lVal_8 * 4) * fVal_19 + fVal_18;
                fVal_16 = 0.0;
                if (0.0 <= fVal_17) {
                  fVal_16 = fVal_17;
                }
                fVal_17 = fVal_19;
                if (fVal_16 <= fVal_19) {
                  fVal_17 = fVal_16;
                }
                *(char *)(lVal_7 + lVal_13 + lVal_8) = (char)(int)fVal_17;
                lVal_8 = lVal_8 + uVal_9 * 2;
                lVal_12 = lVal_12 + -2;
              } while (lVal_12 != 0);
            }
          }
        }
        else {
          lVal_8 = (int64_t)(int)param_4;
          uVal_14 = 0;
          lVal_12 = param_1;
          lVal_13 = lVal_7;
          do {
            uVal_11 = 0;
            do {
              fVal_16 = (float)func_0x18068c0d0(*(float *)(lVal_12 + uVal_11 * 4) * _DAT_18083aa9c);
              fVal_17 = fVal_16 * fVal_19 + fVal_18;
              fVal_16 = 0.0;
              if (0.0 <= fVal_17) {
                fVal_16 = fVal_17;
              }
              fVal_17 = fVal_19;
              if (fVal_16 <= fVal_19) {
                fVal_17 = fVal_16;
              }
              *(char *)(lVal_13 + uVal_11) = (char)(int)fVal_17;
              uVal_11 = uVal_11 + 1;
            } while (uVal_10 != uVal_11);
            if ((int)uVal_10 < (int)param_4) {
              lVal_15 = uVal_14 * lVal_8 + (uint64_t)uVal_10;
              fVal_17 = *(float *)(param_1 + lVal_15 * 4) * fVal_19 + fVal_18;
              fVal_16 = 0.0;
              if (0.0 <= fVal_17) {
                fVal_16 = fVal_17;
              }
              fVal_17 = fVal_19;
              if (fVal_16 <= fVal_19) {
                fVal_17 = fVal_16;
              }
              *(char *)(lVal_7 + lVal_15) = (char)(int)fVal_17;
            }
            uVal_14 = uVal_14 + 1;
            lVal_12 = lVal_12 + lVal_8 * 4;
            lVal_13 = lVal_13 + lVal_8;
          } while (uVal_14 != param_3);
        }
      }
LAB_1800e0e21:
      thunk_FUN_180695dd0(param_1);
      return lVal_7;
    }
    thunk_FUN_180695dd0(param_1);
    *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x3010) = "outofmem";
  }
  return 0;
}

// func_0x1800e0e40
bool func_0x1800e0e40(int64_t param_1)
{
  byte bFlag_1;
  int iVal_2;
  uint uVal_3;
  int iVal_4;
  byte *pU8_5;
  byte *pU8_6;
  byte bFlag_7;
  byte *pU8_8;
  bool bFlag_9;
  
  pU8_5 = *(byte **)(param_1 + 0xc0);
  pU8_8 = *(byte **)(param_1 + 200);
  if (pU8_5 < pU8_8) {
    pU8_5 = pU8_5 + 1;
LAB_1800e0eb2:
    *(byte **)(param_1 + 0xc0) = pU8_5;
  }
  else if (*(int *)(param_1 + 0x30) != 0) {
    iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),param_1 + 0x38,
                       *(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_2 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      pU8_8 = (byte *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
    }
    else {
      pU8_8 = (byte *)(param_1 + 0x38 + (int64_t)iVal_2);
    }
    *(byte **)(param_1 + 200) = pU8_8;
    pU8_5 = (byte *)(param_1 + 0x39);
    goto LAB_1800e0eb2;
  }
  if (pU8_5 < pU8_8) {
    pU8_6 = pU8_5 + 1;
LAB_1800e0f18:
    *(byte **)(param_1 + 0xc0) = pU8_6;
    bFlag_7 = *pU8_5;
    pU8_5 = pU8_6;
    if (bFlag_7 < 2) goto LAB_1800e0f2f;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      pU8_5 = (byte *)(param_1 + 0x38);
      iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),pU8_5,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_2 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        pU8_8 = (byte *)(param_1 + 0x39);
        *(uint8_t *)(param_1 + 0x38) = 0;
      }
      else {
        pU8_8 = pU8_5 + iVal_2;
      }
      *(byte **)(param_1 + 200) = pU8_8;
      pU8_6 = (byte *)(param_1 + 0x39);
      goto LAB_1800e0f18;
    }
    bFlag_7 = 0;
LAB_1800e0f2f:
    if (pU8_5 < pU8_8) {
      pU8_6 = pU8_5 + 1;
      *(byte **)(param_1 + 0xc0) = pU8_6;
      bFlag_1 = *pU8_5;
joined_r0x0001800e1091:
      if (bFlag_7 == 0) goto LAB_1800e1097;
LAB_1800e0f52:
      bFlag_9 = false;
      if ((bFlag_1 & 0xf7) != 1) goto LAB_1800e1183;
      if ((*(int64_t *)(param_1 + 0x10) == 0) || (iVal_2 = (int)pU8_8 - (int)pU8_6, 3 < iVal_2)) {
        pU8_6 = pU8_6 + 4;
        *(byte **)(param_1 + 0xc0) = pU8_6;
        if (pU8_6 < pU8_8) goto LAB_1800e1048;
LAB_1800e0fa6:
        bFlag_9 = false;
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e1183;
        pU8_6 = (byte *)(param_1 + 0x38);
        iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),pU8_6,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_2 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          pU8_8 = (byte *)(param_1 + 0x39);
          *(uint8_t *)(param_1 + 0x38) = 0;
        }
        else {
          pU8_8 = pU8_6 + iVal_2;
        }
        *(byte **)(param_1 + 200) = pU8_8;
        pU8_5 = (byte *)(param_1 + 0x39);
        *(byte **)(param_1 + 0xc0) = pU8_5;
        bFlag_1 = *pU8_6;
      }
      else {
        *(byte **)(param_1 + 0xc0) = pU8_8;
        (**(func_ptr_t *)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),4 - iVal_2);
        pU8_6 = *(byte **)(param_1 + 0xc0);
        pU8_8 = *(byte **)(param_1 + 200);
        if (pU8_8 <= pU8_6) goto LAB_1800e0fa6;
LAB_1800e1048:
        pU8_5 = pU8_6 + 1;
        *(byte **)(param_1 + 0xc0) = pU8_5;
        bFlag_1 = *pU8_6;
      }
      bFlag_9 = false;
      if ((0x20 < (uint64_t)bFlag_1) ||
         (bFlag_9 = false, (0x101018100U >> ((uint64_t)bFlag_1 & 0x3f) & 1) == 0)) goto LAB_1800e1183;
      if ((*(int64_t *)(param_1 + 0x10) != 0) && (iVal_2 = (int)pU8_8 - (int)pU8_5, iVal_2 < 4)) {
        *(byte **)(param_1 + 0xc0) = pU8_8;
        iVal_4 = 4;
        goto LAB_1800e112a;
      }
      *(byte **)(param_1 + 0xc0) = pU8_5 + 4;
    }
    else {
      if (*(int *)(param_1 + 0x30) == 0) {
        bFlag_1 = 0;
        pU8_6 = pU8_5;
      }
      else {
        pU8_5 = (byte *)(param_1 + 0x38);
        iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),pU8_5,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_2 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          pU8_8 = (byte *)(param_1 + 0x39);
          *(uint8_t *)(param_1 + 0x38) = 0;
          bFlag_1 = 0;
          *(byte **)(param_1 + 200) = pU8_8;
          pU8_6 = (byte *)(param_1 + 0x39);
          goto joined_r0x0001800e1091;
        }
        pU8_8 = pU8_5 + iVal_2;
        bFlag_1 = *pU8_5;
        *(byte **)(param_1 + 200) = pU8_8;
        pU8_6 = (byte *)(param_1 + 0x39);
      }
      if (bFlag_7 != 0) goto LAB_1800e0f52;
LAB_1800e1097:
      if ((bFlag_1 & 0xf6) != 2) goto LAB_1800e1181;
      if ((*(int64_t *)(param_1 + 0x10) == 0) || (iVal_2 = (int)pU8_8 - (int)pU8_6, 8 < iVal_2)) {
        *(byte **)(param_1 + 0xc0) = pU8_6 + 9;
      }
      else {
        *(byte **)(param_1 + 0xc0) = pU8_8;
        iVal_4 = 9;
LAB_1800e112a:
        (**(func_ptr_t *)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),iVal_4 - iVal_2);
      }
    }
    iVal_2 = func_0x1800e8400(param_1);
    bFlag_9 = false;
    if (iVal_2 == 0) goto LAB_1800e1183;
    iVal_2 = func_0x1800e8400(param_1);
    if (iVal_2 != 0) {
      pU8_5 = *(byte **)(param_1 + 0xc0);
      if (pU8_5 < *(byte **)(param_1 + 200)) {
        *(byte **)(param_1 + 0xc0) = pU8_5 + 1;
        uVal_3 = (uint)*pU8_5;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        uVal_3 = 0;
      }
      else {
        pU8_5 = (byte *)(param_1 + 0x38);
        iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),pU8_5,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_2 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          pU8_8 = (byte *)(param_1 + 0x39);
          *(uint8_t *)(param_1 + 0x38) = 0;
          uVal_3 = 0;
        }
        else {
          pU8_8 = pU8_5 + iVal_2;
          uVal_3 = (uint)*pU8_5;
        }
        *(byte **)(param_1 + 0xc0) = pU8_5;
        *(byte **)(param_1 + 200) = pU8_8;
      }
      bFlag_9 = false;
      if (bFlag_7 == 0) {
        if (((byte)uVal_3 < 0x21) && ((0x101018100U >> ((uint64_t)uVal_3 & 0x3f) & 1) != 0)) {
          bFlag_9 = true;
        }
      }
      else {
        bFlag_9 = ((byte)uVal_3 - 8 & 0xf7) == 0;
      }
      goto LAB_1800e1183;
    }
  }
LAB_1800e1181:
  bFlag_9 = false;
LAB_1800e1183:
  *(uint32_t *)(param_1 + 0xc0) = *(uint32_t *)(param_1 + 0xd0);
  *(uint32_t *)(param_1 + 0xc4) = *(uint32_t *)(param_1 + 0xd4);
  *(uint32_t *)(param_1 + 200) = *(uint32_t *)(param_1 + 0xd8);
  *(uint32_t *)(param_1 + 0xcc) = *(uint32_t *)(param_1 + 0xdc);
  return bFlag_9;
}

// func_0x1800e1240
byte * func_0x1800e1240(uint64_t param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)
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
  uint32_t uVal_11;
  uint32_t uVal_12;
  uint32_t uVal_13;
  uint32_t uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  byte bFlag_18;
  uint32_t uVal_19;
  uint uVal_20;
  uint uVal_21;
  uint uVal_22;
  uint *pU64_23;
  byte *pU8_24;
  byte *pU8_25;
  uint *pU64_26;
  uint *pU64_27;
  uint *pU64_28;
  char *fnPtr_29;
  uint *pU64_30;
  uint *pU64_31;
  uint64_t uVal_32;
  byte *pU8_33;
  int64_t lVal_34;
  uint64_t uVal_35;
  byte *pU8_36;
  uint uVal_37;
  uint uVal_38;
  uint64_t uVal_39;
  uint uVal_40;
  int iVal_41;
  int iVal_43;
  char ch_44;
  bool bFlag_45;
  uint8_t auStack_e8 [32];
  uint32_t local_c8;
  uint local_bc;
  uint64_t local_b8;
  uint32_t local_b0;
  uint local_ac;
  uint64_t local_a8;
  uint64_t local_a0;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint64_t local_88;
  uint *local_80;
  uint32_t local_74;
  uint *local_70;
  uint64_t local_68;
  uint32_t local_5c;
  byte *local_58;
  uint32_t local_4c;
  uint64_t local_48;
  uint uVal_42;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_e8;
  pU8_25 = *(byte **)(param_1 + 0xc0);
  pU8_33 = *(byte **)(param_1 + 200);
  if (pU8_25 < pU8_33) {
    pU8_36 = pU8_25 + 1;
    *(byte **)(param_1 + 0xc0) = pU8_36;
    local_b8 = (byte *)CONCAT44(local_b8._4_4_,(uint)*pU8_25);
joined_r0x0001800e131b:
    pU8_25 = pU8_36;
    if (pU8_33 <= pU8_36) goto LAB_1800e1351;
LAB_1800e12a2:
    pU8_36 = pU8_25 + 1;
    *(byte **)(param_1 + 0xc0) = pU8_36;
    pU8_25 = (byte *)(uint64_t)*pU8_25;
    if (pU8_36 < pU8_33) goto LAB_1800e12bd;
LAB_1800e13c5:
    if (*(int *)(param_1 + 0x30) == 0) {
      local_88 = (byte *)((uint64_t)local_88 & 0xffffffff00000000);
    }
    else {
      pU8_33 = (byte *)(param_1 + 0x38);
      iVal_43 = (**(func_ptr_t *)(param_1 + 0x10))
                         (*(uint64_t *)(param_1 + 0x28),pU8_33,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_43 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        pU8_36 = (byte *)(param_1 + 0x39);
        *(uint8_t *)(param_1 + 0x38) = 0;
        local_88 = (byte *)((uint64_t)local_88._4_4_ << 0x20);
      }
      else {
        pU8_36 = pU8_33 + iVal_43;
        local_88 = (byte *)CONCAT44(local_88._4_4_,(uint)*pU8_33);
      }
      *(byte **)(param_1 + 200) = pU8_36;
      *(uint64_t *)(param_1 + 0xc0) = param_1 + 0x39;
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      local_b8 = (byte *)((uint64_t)local_b8._4_4_ << 0x20);
      pU8_36 = pU8_25;
      goto joined_r0x0001800e131b;
    }
    pU8_25 = (byte *)(param_1 + 0x38);
    iVal_43 = (**(func_ptr_t *)(param_1 + 0x10))
                       (*(uint64_t *)(param_1 + 0x28),pU8_25,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_43 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      pU8_33 = (byte *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
      local_b8 = (byte *)((uint64_t)local_b8._4_4_ << 0x20);
    }
    else {
      pU8_33 = pU8_25 + iVal_43;
      local_b8 = (byte *)CONCAT44(local_b8._4_4_,(uint)*pU8_25);
    }
    *(byte **)(param_1 + 200) = pU8_33;
    pU8_36 = (byte *)(param_1 + 0x39);
    *(byte **)(param_1 + 0xc0) = pU8_36;
    pU8_25 = pU8_36;
    if (pU8_36 < pU8_33) goto LAB_1800e12a2;
LAB_1800e1351:
    if (*(int *)(param_1 + 0x30) != 0) {
      pU8_33 = (byte *)(param_1 + 0x38);
      iVal_43 = (**(func_ptr_t *)(param_1 + 0x10))
                         (*(uint64_t *)(param_1 + 0x28),pU8_33,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_43 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        pU8_24 = (byte *)(param_1 + 0x39);
        *(uint8_t *)(param_1 + 0x38) = 0;
        pU8_25 = (byte *)0x0;
      }
      else {
        pU8_24 = pU8_33 + iVal_43;
        pU8_25 = (byte *)(uint64_t)*pU8_33;
      }
      *(byte **)(param_1 + 200) = pU8_24;
      pU8_36 = (byte *)(param_1 + 0x39);
      *(byte **)(param_1 + 0xc0) = pU8_36;
      if (pU8_36 < pU8_24) goto LAB_1800e12bd;
      goto LAB_1800e13c5;
    }
    pU8_25 = (byte *)0x0;
    if (pU8_33 <= pU8_36) goto LAB_1800e13c5;
LAB_1800e12bd:
    *(byte **)(param_1 + 0xc0) = pU8_36 + 1;
    local_88 = (byte *)CONCAT44(local_88._4_4_,(uint)*pU8_36);
  }
  uVal_19 = func_0x1800e8400(param_1);
  local_8c = func_0x1800e8400(param_1);
  pU8_33 = *(byte **)(param_1 + 0xc0);
  local_68 = (uint *)CONCAT44(local_68._4_4_,uVal_19);
  if (pU8_33 < *(byte **)(param_1 + 200)) {
    *(byte **)(param_1 + 0xc0) = pU8_33 + 1;
    uVal_32 = (uint64_t)*pU8_33;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVal_32 = 0;
  }
  else {
    pU8_33 = (byte *)(param_1 + 0x38);
    iVal_43 = (**(func_ptr_t *)(param_1 + 0x10))
                       (*(uint64_t *)(param_1 + 0x28),pU8_33,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_43 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      pU8_36 = (byte *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
      uVal_32 = 0;
    }
    else {
      pU8_36 = pU8_33 + iVal_43;
      uVal_32 = (uint64_t)*pU8_33;
    }
    *(byte **)(param_1 + 200) = pU8_36;
    *(uint64_t *)(param_1 + 0xc0) = param_1 + 0x39;
  }
  func_0x1800e8400(param_1);
  func_0x1800e8400(param_1);
  uVal_20 = func_0x1800e8400(param_1);
  uVal_21 = func_0x1800e8400(param_1);
  pU64_27 = (uint *)(uint64_t)uVal_21;
  pU8_33 = *(byte **)(param_1 + 0xc0);
  local_a0 = (byte *)CONCAT44(local_a0._4_4_,(int)pU8_25);
  if (pU8_33 < *(byte **)(param_1 + 200)) {
    pU8_36 = pU8_33 + 1;
    *(byte **)(param_1 + 0xc0) = pU8_36;
    local_ac = (uint)*pU8_33;
joined_r0x0001800e15bb:
    if (*(byte **)(param_1 + 200) <= pU8_36) goto LAB_1800e15fd;
LAB_1800e152a:
    *(byte **)(param_1 + 0xc0) = pU8_36 + 1;
    local_a8 = (uint *)CONCAT44(local_a8._4_4_,(uint)*pU8_36);
    ch_44 = (char)pU8_25;
joined_r0x0001800e169a:
    if (ch_44 == '\0') goto LAB_1800e16a0;
LAB_1800e1550:
    pU64_28 = &switchD_1800e156e::switchdataD_1806b46e8;
    pU64_23 = (uint *)((int64_t)&switchD_1800e156e::switchdataD_1806b46e8 +
                      (int64_t)(int)(&switchD_1800e156e::switchdataD_1806b46e8)[(int)uVal_32 - 8]);
    switch((int)uVal_32) {
    case 8:
      goto switchD_1800e156e_caseD_8;
    default:
      goto switchD_1800e156e_caseD_9;
    case 0xf:
    case 0x10:
      goto switchD_1800e156e_caseD_f;
    case 0x18:
    case 0x20:
      goto switchD_1800e156e_caseD_18;
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    local_ac = 0;
    pU8_36 = pU8_33;
    goto joined_r0x0001800e15bb;
  }
  pU8_33 = (byte *)(param_1 + 0x38);
  iVal_43 = (**(func_ptr_t *)(param_1 + 0x10))
                     (*(uint64_t *)(param_1 + 0x28),pU8_33,*(uint32_t *)(param_1 + 0x34));
  *(int *)(param_1 + 0xb8) =
       *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
  if (iVal_43 == 0) {
    *(uint32_t *)(param_1 + 0x30) = 0;
    pU8_24 = (byte *)(param_1 + 0x39);
    *(uint8_t *)(param_1 + 0x38) = 0;
    local_ac = 0;
  }
  else {
    pU8_24 = pU8_33 + iVal_43;
    local_ac = (uint)*pU8_33;
  }
  *(byte **)(param_1 + 200) = pU8_24;
  pU8_36 = (byte *)(param_1 + 0x39);
  *(byte **)(param_1 + 0xc0) = pU8_36;
  pU8_25 = (byte *)((uint64_t)local_a0 & 0xffffffff);
  if (pU8_36 < pU8_24) goto LAB_1800e152a;
LAB_1800e15fd:
  if (*(int *)(param_1 + 0x30) != 0) {
    pU8_33 = (byte *)(param_1 + 0x38);
    iVal_43 = (**(func_ptr_t *)(param_1 + 0x10))
                       (*(uint64_t *)(param_1 + 0x28),pU8_33,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_43 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      pU8_25 = (byte *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
      local_a8 = (uint *)((uint64_t)local_a8._4_4_ << 0x20);
    }
    else {
      pU8_25 = pU8_33 + iVal_43;
      local_a8 = (uint *)CONCAT44(local_a8._4_4_,(uint)*pU8_33);
    }
    *(byte **)(param_1 + 200) = pU8_25;
    *(uint64_t *)(param_1 + 0xc0) = param_1 + 0x39;
    pU8_25 = (byte *)((uint64_t)local_a0 & 0xffffffff);
    ch_44 = (char)local_a0;
    goto joined_r0x0001800e169a;
  }
  local_a8 = (uint *)((uint64_t)local_a8 & 0xffffffff00000000);
  if ((char)pU8_25 != '\0') goto LAB_1800e1550;
LAB_1800e16a0:
  pU64_28 = &switchD_1800e16bb::switchdataD_1806b4684;
  pU64_23 = (uint *)((int64_t)&switchD_1800e16bb::switchdataD_1806b4684 +
                    (int64_t)
                    (int)(&switchD_1800e16bb::switchdataD_1806b4684)[(local_ac & 0xff) - 8]);
  switch(local_ac & 0xff) {
  case 8:
switchD_1800e156e_caseD_8:
    local_b0 = (uint32_t)CONCAT71((int7)((uint64_t)pU64_23 >> 8),1);
    uVal_19 = 0;
    uVal_32 = 1;
    break;
  default:
switchD_1800e156e_caseD_9:
    local_4c = 0;
    lVal_34 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_29 = "bad format";
    goto LAB_1800e1a9e;
  case 0x10:
    pU64_23 = (uint *)((uint64_t)local_88 & 0xff);
    pU64_28 = (uint *)(uint64_t)((int)pU64_23 - 8);
    if ((byte)local_88 < 8) {
      pU64_28 = pU64_23;
    }
    if ((int)pU64_28 == 3) {
      uVal_32 = 2;
      goto LAB_1800e16c5;
    }
  case 0xf:
switchD_1800e156e_caseD_f:
    uVal_32 = 3;
    uVal_19 = (uint32_t)CONCAT71((int7)((uint64_t)pU64_28 >> 8),1);
    local_b0 = 0;
    break;
  case 0x18:
  case 0x20:
    uVal_32 = (uint64_t)local_ac;
switchD_1800e156e_caseD_18:
    uVal_32 = CONCAT71((int7)(uVal_32 >> 8),(byte)uVal_32 >> 3);
LAB_1800e16c5:
    local_b0 = (uint32_t)CONCAT71((int7)((uint64_t)pU64_23 >> 8),1);
    uVal_19 = 0;
  }
  local_4c = 0;
  pU8_25 = (byte *)(uVal_32 & 0xff);
  *param_2 = uVal_20;
  *param_3 = uVal_21;
  uVal_22 = (uint)pU8_25;
  if (param_4 != (uint *)0x0) {
    *param_4 = uVal_22;
  }
  if (uVal_21 == 0) {
    param_3 = (uint *)0x0;
    pU8_33 = pU8_25;
LAB_1800e17a5:
    local_74 = uVal_19;
    pU8_33 = (byte *)_malloc_base((int)param_3 * uVal_22,0x7fffffff % (uint64_t)pU8_33);
    if (pU8_33 != (byte *)0x0) {
      local_5c = (uint32_t)uVal_32;
      if ((byte)local_b8 != 0) {
        if (*(int64_t *)(param_1 + 0x10) == 0) {
          lVal_34 = *(int64_t *)(param_1 + 0xc0);
        }
        else {
          lVal_34 = *(int64_t *)(param_1 + 0xc0);
          if ((int)*(uint64_t *)(param_1 + 200) - (int)lVal_34 < (int)(uint)(byte)local_b8) {
            *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 200);
            (**(func_ptr_t *)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
            goto LAB_1800e1816;
          }
        }
        *(uint64_t *)(param_1 + 0xc0) = (uint64_t)(uint)(byte)local_b8 + lVal_34;
      }
LAB_1800e1816:
      bFlag_18 = (byte)local_a8 >> 5;
      local_a8 = (uint *)CONCAT44(local_a8._4_4_,CONCAT31((int3)((uint64_t)local_a8 >> 8),bFlag_18));
      pU64_28 = param_3;
      local_b8 = pU8_33;
      local_94 = uVal_20;
      if (((7 < (byte)local_88 || (char)local_a0 != '\0') | (byte)local_74) == 0) {
        local_bc = uVal_22;
        local_80 = pU64_27;
        local_70 = param_3;
        if (uVal_21 == 0) goto LAB_1800e2088;
        uVal_20 = uVal_20 * uVal_22;
        pU8_25 = (byte *)(uint64_t)uVal_20;
        if (*(int64_t *)(param_1 + 0x10) == 0) {
          pU64_28 = *(uint **)(param_1 + 0xc0);
          pU64_23 = *(uint **)(param_1 + 200);
          if ((bFlag_18 & 1) == 0) {
            if (uVal_21 != 1) goto LAB_1800e21b5;
            uVal_20 = 0;
            goto LAB_1800e2264;
          }
          iVal_43 = 0;
          if (uVal_21 == 1) {
            iVal_43 = 0;
          }
          else {
            local_a0 = (byte *)(uint64_t)(uVal_21 & 0xfffffffe);
            pU8_33 = (byte *)0x0;
            local_a8 = pU64_27;
            do {
              while (pU8_36 = pU8_33, pU64_27 = (uint *)((int64_t)pU64_28 + (int64_t)pU8_25),
                    pU64_27 <= pU64_23) {
                func_0x1806aa960(local_b8 + iVal_43,pU64_28,pU8_25);
                *(uint **)(param_1 + 0xc0) = pU64_27;
                pU64_26 = (uint *)(pU8_25 + (int64_t)pU64_27);
                pU64_28 = pU64_27;
                if (pU8_25 + (int64_t)pU64_27 <= pU64_23) goto LAB_1800e229d;
LAB_1800e2302:
                iVal_43 = iVal_43 + uVal_20 * 2;
                pU8_33 = pU8_36 + 2;
                if (local_a0 == pU8_36 + 2) goto LAB_1800e2312;
              }
              pU64_26 = (uint *)(pU8_25 + (int64_t)pU64_28);
              pU64_27 = pU64_28;
              if (pU64_23 < pU8_25 + (int64_t)pU64_28) goto LAB_1800e2302;
LAB_1800e229d:
              pU64_28 = pU64_26;
              func_0x1806aa960(local_b8 + (int)(uVal_20 + iVal_43),pU64_27,pU8_25);
              *(uint **)(param_1 + 0xc0) = pU64_28;
              iVal_43 = iVal_43 + uVal_20 * 2;
              pU8_33 = pU8_36 + 2;
            } while (local_a0 != pU8_36 + 2);
LAB_1800e2312:
            iVal_43 = (int)pU8_36 + 2;
            pU8_33 = local_b8;
            if (((uint64_t)local_a8 & 1) == 0) goto LAB_1800e2088;
          }
          pU64_27 = (uint *)((int64_t)pU64_28 + (int64_t)pU8_25);
          pU8_33 = local_b8;
          if (pU64_23 < pU64_27) goto LAB_1800e2088;
          iVal_43 = iVal_43 * uVal_20;
          goto LAB_1800e2336;
        }
        uVal_40 = 0;
        do {
          uVal_21 = uVal_21 - 1;
          uVal_22 = uVal_40;
          if (((uint64_t)local_a8 & 1) == 0) {
            uVal_22 = uVal_21;
          }
          pU64_28 = (uint *)(pU8_33 + (int)(uVal_22 * uVal_20));
          fnPtr_3 = *(func_ptr_t *)(param_1 + 0x10);
          if (fnPtr_3 == (func_ptr_t )0x0) {
            lVal_34 = *(int64_t *)(param_1 + 0xc0);
            pU8_36 = pU8_25 + lVal_34;
            if (pU8_36 <= *(byte **)(param_1 + 200)) {
LAB_1800e1997:
              func_0x1806aa960(pU64_28,lVal_34,pU8_25);
              goto LAB_1800e1919;
            }
          }
          else {
            lVal_34 = *(int64_t *)(param_1 + 0xc0);
            iVal_43 = (int)*(byte **)(param_1 + 200) - (int)lVal_34;
            if (uVal_20 - iVal_43 == 0 || (int)uVal_20 < iVal_43) {
              pU8_36 = pU8_25 + lVal_34;
              pU8_33 = local_b8;
              if (pU8_36 <= *(byte **)(param_1 + 200)) goto LAB_1800e1997;
            }
            else {
              func_0x1806aa960(pU64_28,lVal_34,(int64_t)iVal_43);
              pU64_28 = (uint *)((int64_t)pU64_28 + (int64_t)iVal_43);
              (*fnPtr_3)(*(uint64_t *)(param_1 + 0x28),pU64_28,uVal_20 - iVal_43);
              pU8_36 = *(byte **)(param_1 + 200);
              pU8_33 = local_b8;
LAB_1800e1919:
              *(byte **)(param_1 + 0xc0) = pU8_36;
            }
          }
          uVal_40 = uVal_40 + 1;
          if (uVal_21 == 0) goto LAB_1800e2088;
        } while( true );
      }
      if ((char)local_a0 == '\0') {
        pU8_36 = (byte *)0x0;
        local_bc = uVal_22;
        goto LAB_1800e1b59;
      }
      if (local_8c != 0) {
        local_bc = uVal_22;
        if ((int)local_68 != 0) {
          if (*(int64_t *)(param_1 + 0x10) == 0) {
            lVal_34 = *(int64_t *)(param_1 + 0xc0);
          }
          else {
            lVal_34 = *(int64_t *)(param_1 + 0xc0);
            if ((int)*(uint64_t *)(param_1 + 200) - (int)lVal_34 < (int)local_68) {
              *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 200);
              (**(func_ptr_t *)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
              goto LAB_1800e1a2e;
            }
          }
          *(uint64_t *)(param_1 + 0xc0) = ((uint64_t)local_68 & 0xffffffff) + lVal_34;
        }
LAB_1800e1a2e:
        pU8_25 = (byte *)(uint64_t)(local_8c * local_bc);
        pU8_36 = (byte *)_malloc_base(pU8_25);
        if (pU8_36 == (byte *)0x0) {
          thunk_FUN_180695dd0(pU8_33);
          goto LAB_1800e1a84;
        }
        if ((char)local_b0 == '\0') {
          uVal_32 = (uint64_t)local_bc;
          pU8_33 = pU8_36 + 2;
          uVal_20 = local_8c;
          do {
            uVal_22 = func_0x1800e8400(param_1);
            pU8_33[-2] = (byte)(((uVal_22 >> 10 & 0x1f) * 0xff) / 0x1f);
            pU8_33[-1] = (byte)(((uVal_22 >> 5 & 0x1f) * 0xff) / 0x1f);
            *pU8_33 = (byte)(((uVal_22 & 0x1f) * 0xff) / 0x1f);
            pU8_33 = pU8_33 + uVal_32;
            uVal_20 = uVal_20 - 1;
            pU8_25 = pU8_36;
          } while (uVal_20 != 0);
LAB_1800e1b59:
          local_70 = param_3;
          local_58 = pU8_36;
          if ((int)param_3 != 0) {
            pU8_25 = (byte *)(param_1 + 0x38);
            pU64_28 = (uint *)(param_1 + 0x39);
            uVal_32 = (uint64_t)local_bc;
            bFlag_18 = 1;
            pU64_23 = (uint *)0x0;
            local_90 = 0;
            iVal_43 = 0;
            local_68 = param_3;
            do {
              if ((byte)local_88 < 8) {
LAB_1800e1c70:
joined_r0x0001800e1ddb:
                if ((char)local_a0 == '\0') {
                  if ((char)local_b0 == '\0') {
                    uVal_20 = func_0x1800e8400(param_1);
                    uVal_19 = local_4c;
                  }
                  else {
                    pU64_26 = *(uint **)(param_1 + 200);
                    uVal_39 = 0;
                    pU64_31 = *(uint **)(param_1 + 0xc0);
                    do {
                      if (pU64_31 < pU64_26) {
                        pU64_30 = (uint *)((int64_t)pU64_31 + 1);
                        *(uint **)(param_1 + 0xc0) = pU64_30;
                        bFlag_18 = *(byte *)pU64_31;
                      }
                      else if (*(int *)(param_1 + 0x30) == 0) {
                        bFlag_18 = 0;
                        pU64_30 = pU64_31;
                      }
                      else {
                        iVal_41 = (**(func_ptr_t *)(param_1 + 0x10))
                                           (*(uint64_t *)(param_1 + 0x28),pU8_25,
                                            *(uint32_t *)(param_1 + 0x34));
                        *(int *)(param_1 + 0xb8) =
                             *(int *)(param_1 + 0xb8) +
                             (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                        if (iVal_41 == 0) {
                          *(uint32_t *)(param_1 + 0x30) = 0;
                          *(uint8_t *)(param_1 + 0x38) = 0;
                          bFlag_18 = 0;
                          pU64_26 = pU64_28;
                        }
                        else {
                          bFlag_18 = *pU8_25;
                          pU64_26 = (uint *)(pU8_25 + iVal_41);
                        }
                        *(uint **)(param_1 + 200) = pU64_26;
                        *(uint **)(param_1 + 0xc0) = pU64_28;
                        pU64_30 = pU64_28;
                      }
                      *(byte *)((int64_t)&local_4c + uVal_39) = bFlag_18;
                      uVal_39 = uVal_39 + 1;
                      pU64_31 = pU64_30;
                    } while (uVal_32 != uVal_39);
                  }
                }
                else {
                  if ((char)local_ac == '\b') {
                    pU8_33 = *(byte **)(param_1 + 0xc0);
                    if (pU8_33 < *(byte **)(param_1 + 200)) {
                      *(byte **)(param_1 + 0xc0) = pU8_33 + 1;
                      bFlag_18 = *pU8_33;
                    }
                    else if (*(int *)(param_1 + 0x30) == 0) {
                      bFlag_18 = 0;
                    }
                    else {
                      iVal_41 = (**(func_ptr_t *)(param_1 + 0x10))
                                         (*(uint64_t *)(param_1 + 0x28),pU8_25,
                                          *(uint32_t *)(param_1 + 0x34));
                      *(int *)(param_1 + 0xb8) =
                           *(int *)(param_1 + 0xb8) +
                           (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                      if (iVal_41 == 0) {
                        *(uint32_t *)(param_1 + 0x30) = 0;
                        *(uint8_t *)(param_1 + 0x38) = 0;
                        bFlag_18 = 0;
                        pU64_26 = pU64_28;
                      }
                      else {
                        bFlag_18 = *pU8_25;
                        pU64_26 = (uint *)(pU8_25 + iVal_41);
                      }
                      *(uint **)(param_1 + 200) = pU64_26;
                      *(uint **)(param_1 + 0xc0) = pU64_28;
                    }
                    uVal_20 = (uint)bFlag_18;
                  }
                  else {
                    uVal_20 = func_0x1800e8400(param_1);
                  }
                  if (local_8c <= uVal_20) {
                    uVal_20 = 0;
                  }
                  func_0x1806aa960(&local_4c,local_58 + uVal_20 * uVal_32,uVal_32);
                }
              }
              else {
                if (iVal_43 == 0) {
                  pU8_33 = *(byte **)(param_1 + 0xc0);
                  if (pU8_33 < *(byte **)(param_1 + 200)) {
                    *(byte **)(param_1 + 0xc0) = pU8_33 + 1;
                    bFlag_18 = *pU8_33;
                  }
                  else if (*(int *)(param_1 + 0x30) == 0) {
                    bFlag_18 = 0;
                  }
                  else {
                    iVal_43 = (**(func_ptr_t *)(param_1 + 0x10))
                                       (*(uint64_t *)(param_1 + 0x28),pU8_25,
                                        *(uint32_t *)(param_1 + 0x34));
                    *(int *)(param_1 + 0xb8) =
                         *(int *)(param_1 + 0xb8) +
                         (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
                    if (iVal_43 == 0) {
                      *(uint32_t *)(param_1 + 0x30) = 0;
                      *(uint8_t *)(param_1 + 0x38) = 0;
                      bFlag_18 = 0;
                      pU64_26 = pU64_28;
                    }
                    else {
                      bFlag_18 = *pU8_25;
                      pU64_26 = (uint *)(pU8_25 + iVal_43);
                    }
                    *(uint **)(param_1 + 200) = pU64_26;
                    *(uint **)(param_1 + 0xc0) = pU64_28;
                  }
                  iVal_43 = (bFlag_18 & 0x7f) + 1;
                  local_90 = (uint)(bFlag_18 >> 7);
                  goto joined_r0x0001800e1ddb;
                }
                bFlag_45 = local_90 == 0;
                local_90 = 1;
                if ((bool)(bFlag_45 | bFlag_18)) {
                  local_90 = (uint)!bFlag_45;
                  goto LAB_1800e1c70;
                }
              }
              func_0x1806aa960(local_b8 + local_bc * (int)pU64_23,&local_4c,uVal_32);
              iVal_43 = iVal_43 + -1;
              pU64_23 = (uint *)((int64_t)pU64_23 + 1);
              bFlag_18 = 0;
            } while (pU64_23 != local_68);
          }
          pU8_33 = local_b8;
          if ((((byte)local_a8 & 1 | uVal_21 == 0) == 0) && (local_94 != 0)) {
            uVal_22 = local_94 * local_bc;
            iVal_43 = local_94 * (uVal_21 - 1) * local_bc;
            uVal_20 = 1;
            if ((int)uVal_22 < 1) {
              uVal_20 = uVal_22;
            }
            uVal_20 = uVal_22 - uVal_20;
            uVal_32 = (uint64_t)uVal_20;
            local_a0 = local_b8 + uVal_32 + 1;
            uVal_39 = uVal_32 + 1 & 0xffffffffffffffe0;
            local_ac = uVal_22 - (int)uVal_39;
            param_1 = uVal_32 + 1 & 0x1fffffffc;
            uVal_37 = uVal_22 - (int)param_1;
            local_a8 = (uint *)CONCAT44(local_a8._4_4_,uVal_37);
            local_88 = local_b8 + 0x10;
            uVal_38 = 0;
            uVal_40 = 0;
            do {
              lVal_34 = (int64_t)iVal_43;
              pU64_23 = (uint *)(uint64_t)uVal_38;
              uVal_42 = uVal_22;
              if (uVal_20 < 3) {
LAB_1800e1f7b:
                iVal_41 = uVal_42 + 1;
                pU8_36 = local_b8;
                do {
                  bFlag_18 = pU8_36[(int64_t)pU64_23];
                  pU8_36[(int64_t)pU64_23] = pU8_36[lVal_34];
                  pU8_36[lVal_34] = bFlag_18;
                  pU8_36 = pU8_36 + 1;
                  iVal_41 = iVal_41 + -1;
                  pU64_28 = pU64_23;
                } while (1 < iVal_41);
              }
              else {
                pU8_36 = local_b8 + lVal_34;
                pU8_25 = local_b8 + (int64_t)pU64_23;
                if ((pU8_25 < local_a0 + lVal_34) && (pU8_36 < local_a0 + (int64_t)pU64_23))
                goto LAB_1800e1f7b;
                if (uVal_20 < 0x1f) {
                  uVal_35 = 0;
LAB_1800e201b:
                  pU64_23 = (uint *)(param_1 + (int64_t)pU64_23);
                  lVal_34 = lVal_34 + param_1;
                  do {
                    uVal_19 = *(uint32_t *)(pU8_25 + uVal_35);
                    *(uint32_t *)(pU8_25 + uVal_35) = *(uint32_t *)(pU8_36 + uVal_35);
                    *(uint32_t *)(pU8_36 + uVal_35) = uVal_19;
                    uVal_35 = uVal_35 + 4;
                  } while (param_1 != uVal_35);
                  pU64_28 = pU64_23;
                  uVal_42 = uVal_37;
                  if (uVal_32 + 1 != param_1) goto LAB_1800e1f7b;
                }
                else {
                  pU64_28 = (uint *)(local_88 + (int64_t)pU64_23);
                  uVal_35 = 0;
                  do {
                    pU64_1 = (uint32_t *)((int64_t)pU64_28 + (uVal_35 - 0x10));
                    uVal_19 = *pU64_1;
                    uVal_4 = pU64_1[1];
                    uVal_5 = pU64_1[2];
                    uVal_6 = pU64_1[3];
                    pU64_1 = (uint32_t *)((int64_t)pU64_28 + uVal_35);
                    uVal_7 = *pU64_1;
                    uVal_8 = pU64_1[1];
                    uVal_9 = pU64_1[2];
                    uVal_10 = pU64_1[3];
                    pU64_2 = (uint32_t *)(local_88 + uVal_35 + lVal_34 + -0x10);
                    uVal_11 = pU64_2[1];
                    uVal_12 = pU64_2[2];
                    uVal_13 = pU64_2[3];
                    pU64_1 = (uint32_t *)(local_88 + uVal_35 + lVal_34);
                    uVal_14 = *pU64_1;
                    uVal_15 = pU64_1[1];
                    uVal_16 = pU64_1[2];
                    uVal_17 = pU64_1[3];
                    pU64_1 = (uint32_t *)((int64_t)pU64_28 + (uVal_35 - 0x10));
                    *pU64_1 = *pU64_2;
                    pU64_1[1] = uVal_11;
                    pU64_1[2] = uVal_12;
                    pU64_1[3] = uVal_13;
                    pU64_1 = (uint32_t *)((int64_t)pU64_28 + uVal_35);
                    *pU64_1 = uVal_14;
                    pU64_1[1] = uVal_15;
                    pU64_1[2] = uVal_16;
                    pU64_1[3] = uVal_17;
                    pU64_1 = (uint32_t *)(local_88 + uVal_35 + lVal_34 + -0x10);
                    *pU64_1 = uVal_19;
                    pU64_1[1] = uVal_4;
                    pU64_1[2] = uVal_5;
                    pU64_1[3] = uVal_6;
                    pU64_1 = (uint32_t *)(local_88 + uVal_35 + lVal_34);
                    *pU64_1 = uVal_7;
                    pU64_1[1] = uVal_8;
                    pU64_1[2] = uVal_9;
                    pU64_1[3] = uVal_10;
                    uVal_35 = uVal_35 + 0x20;
                  } while (uVal_39 != uVal_35);
                  if (uVal_32 + 1 != uVal_39) {
                    uVal_35 = uVal_39;
                    if ((uVal_32 + 1 & 0x1c) == 0) {
                      pU64_23 = (uint *)(uVal_39 + (int64_t)pU64_23);
                      lVal_34 = lVal_34 + uVal_39;
                      uVal_42 = local_ac;
                      goto LAB_1800e1f7b;
                    }
                    goto LAB_1800e201b;
                  }
                }
              }
              iVal_43 = iVal_43 - uVal_22;
              uVal_38 = uVal_38 + uVal_22;
              bFlag_45 = uVal_40 != uVal_21 - 1 >> 1;
              uVal_40 = uVal_40 + 1;
            } while (bFlag_45);
          }
          local_80 = pU64_27;
          if (local_58 == (byte *)0x0) goto LAB_1800e2088;
          thunk_FUN_180695dd0();
          goto LAB_1800e2088;
        }
        iVal_43 = func_0x1800e5ab0(param_1,pU8_36,pU8_25);
        if (iVal_43 != 0) goto LAB_1800e1b59;
        thunk_FUN_180695dd0(pU8_33);
        pU8_33 = pU8_36;
      }
      thunk_FUN_180695dd0(pU8_33);
      lVal_34 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_29 = "bad palette";
      goto LAB_1800e1a9e;
    }
  }
  else {
    if (((uint)(0x7fffffff / (uint64_t)uVal_21) < uVal_20) ||
       (param_3 = (uint *)(uint64_t)(uVal_21 * uVal_20),
       (uint)(0x7fffffff / (uint64_t)pU8_25) < uVal_21 * uVal_20)) {
      lVal_34 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_29 = "too large";
      goto LAB_1800e1a9e;
    }
    pU8_33 = (byte *)(uint64_t)uVal_21;
    if (uVal_20 <= (uint)(0x7fffffff / (uint64_t)pU8_33)) goto LAB_1800e17a5;
  }
LAB_1800e1a84:
  lVal_34 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_29 = "outofmem";
LAB_1800e1a9e:
  *(char **)(lVal_34 + 0x3010) = fnPtr_29;
  pU8_33 = (byte *)0x0;
  pU64_23 = (uint *)(uint64_t)uVal_20;
  pU64_28 = param_3;
LAB_1800e1aa8:
  if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_e8)) {
    return pU8_33;
  }
  do {
    uVal_32 = local_48 ^ (uint64_t)auStack_e8;
    pU64_27 = (uint *)func_0x180673080(uVal_32);
    uVal_21 = (uint)uVal_32;
LAB_1800e21b5:
    local_a0 = (byte *)(uint64_t)((uint)pU64_27 & 0xfffffffe);
    iVal_41 = (int)pU8_25;
    iVal_43 = (uVal_21 - 1) * iVal_41;
    pU8_33 = (byte *)0x0;
    local_a8 = pU64_27;
    do {
      while( true ) {
        pU64_27 = (uint *)((int64_t)pU64_28 + (int64_t)pU8_25);
        uVal_20 = (uint)pU8_33;
        if (pU64_27 <= pU64_23) break;
        pU64_26 = (uint *)(pU8_25 + (int64_t)pU64_28);
        pU64_27 = pU64_28;
        if (pU64_23 < pU8_25 + (int64_t)pU64_28) goto LAB_1800e2243;
LAB_1800e21d4:
        pU64_28 = pU64_26;
        func_0x1806aa960(local_b8 + (int)(((uVal_20 ^ 0xfffffffe) + (int)local_80) * iVal_41),pU64_27,
                      pU8_25);
        *(uint **)(param_1 + 0xc0) = pU64_28;
        pU8_33 = pU8_33 + 2;
        iVal_43 = iVal_43 + iVal_41 * -2;
        if (local_a0 == pU8_33) goto LAB_1800e2254;
      }
      func_0x1806aa960(local_b8 + iVal_43,pU64_28,pU8_25);
      *(uint **)(param_1 + 0xc0) = pU64_27;
      pU64_26 = (uint *)(pU8_25 + (int64_t)pU64_27);
      pU64_28 = pU64_27;
      if (pU8_25 + (int64_t)pU64_27 <= pU64_23) goto LAB_1800e21d4;
LAB_1800e2243:
      pU8_33 = pU8_33 + 2;
      iVal_43 = iVal_43 + iVal_41 * -2;
    } while (local_a0 != pU8_33);
LAB_1800e2254:
    uVal_20 = uVal_20 + 2;
    pU8_33 = local_b8;
    if (((uint64_t)local_a8 & 1) != 0) {
LAB_1800e2264:
      pU64_27 = (uint *)((int64_t)pU64_28 + (int64_t)pU8_25);
      pU8_33 = local_b8;
      if (pU64_27 <= pU64_23) {
        iVal_43 = ((int)local_80 + ~uVal_20) * (int)pU8_25;
LAB_1800e2336:
        pU8_33 = local_b8;
        func_0x1806aa960(local_b8 + iVal_43,pU64_28,pU8_25);
        *(uint **)(param_1 + 0xc0) = pU64_27;
      }
    }
LAB_1800e2088:
    pU64_23 = local_80;
    uVal_20 = (uint)local_70;
    uVal_32 = (uint64_t)local_bc;
    if (((uVal_20 == 0 || (byte)local_5c < 3) | (byte)local_74) == 0) {
      uVal_21 = uVal_20 & 3;
      pU8_36 = pU8_33;
      if (2 < uVal_20 - 1) {
        uVal_20 = uVal_20 & 0xfffffffc;
        do {
          bFlag_18 = *pU8_36;
          *pU8_36 = pU8_36[2];
          pU8_36[2] = bFlag_18;
          bFlag_18 = pU8_36[uVal_32];
          pU8_36[uVal_32] = pU8_36[uVal_32 + 2];
          pU8_36[uVal_32 + 2] = bFlag_18;
          bFlag_18 = pU8_36[uVal_32 * 2];
          param_1 = (uint64_t)pU8_36[uVal_32 * 2 + 2];
          pU8_36[uVal_32 * 2] = pU8_36[uVal_32 * 2 + 2];
          pU8_36[uVal_32 * 2 + 2] = bFlag_18;
          bFlag_18 = pU8_36[uVal_32 * 3];
          pU8_36[uVal_32 * 3] = pU8_36[uVal_32 * 3 + 2];
          pU8_36[uVal_32 * 3 + 2] = bFlag_18;
          pU8_36 = pU8_36 + uVal_32 * 4;
          uVal_20 = uVal_20 - 4;
        } while (uVal_20 != 0);
        if (((uint64_t)local_70 & 3) == 0) goto LAB_1800e2167;
      }
      pU8_36 = pU8_36 + 2;
      do {
        bFlag_18 = pU8_36[-2];
        pU8_36[-2] = *pU8_36;
        *pU8_36 = bFlag_18;
        pU8_36 = pU8_36 + uVal_32;
        uVal_21 = uVal_21 - 1;
      } while (uVal_21 != 0);
    }
LAB_1800e2167:
    if ((param_5 == 0) || (param_5 == local_bc)) goto LAB_1800e1aa8;
    local_c8 = SUB84(local_80,0);
    pU8_33 = (byte *)func_0x1800e3d70(pU8_33,uVal_32,param_5,local_94);
    if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_e8)) {
      return pU8_33;
    }
  } while( true );
}

// func_0x1800e2360
void func_0x1800e2360(int64_t param_1)
{
  int64_t lVal_1;
  int iVal_2;
  int64_t lVal_3;
  
  lVal_1 = param_1 + 0x38;
  iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                    (*(uint64_t *)(param_1 + 0x28),lVal_1,*(uint32_t *)(param_1 + 0x34));
  *(int *)(param_1 + 0xb8) =
       *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
  if (iVal_2 == 0) {
    *(uint32_t *)(param_1 + 0x30) = 0;
    lVal_3 = param_1 + 0x39;
    *(uint8_t *)(param_1 + 0x38) = 0;
  }
  else {
    lVal_3 = iVal_2 + lVal_1;
  }
  *(int64_t *)(param_1 + 0xc0) = lVal_1;
  *(int64_t *)(param_1 + 200) = lVal_3;
  return;
}

// func_0x1800e23c0
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
uint64_t func_0x1800e23c0(uint **param_1,int param_2,uint param_3)
{
  byte *pU8_1;
  uint **ptr2_U64_2;
  uint *pU64_3;
  uint *pU64_4;
  char ch_5;
  uint16_t uVal_6;
  int iVal_7;
  int iVal_8;
  uint uVal_9;
  uint uVal_10;
  uint64_t uVal_11;
  uint *pU64_12;
  byte *pU8_13;
  byte *pU8_14;
  uint *pU64_15;
  byte bFlag_16;
  char *fnPtr_17;
  byte *pU8_18;
  int64_t lVal_19;
  uint7 uVal_21;
  int *pInt_20;
  uint64_t uVal_22;
  int iVal_23;
  uint64_t uVal_24;
  int64_t lVal_25;
  uint uVal_26;
  uint uVal_27;
  int64_t lVal_28;
  bool bFlag_29;
  uint8_t auStack_1568 [32];
  uint local_1548;
  uint local_1540;
  int local_1538;
  uint32_t local_1530;
  uint local_151c;
  uint64_t local_1518;
  uint local_1510;
  uint local_150c;
  uint64_t local_1508;
  uint64_t local_1500;
  uint local_14f8;
  int local_14f4;
  uint local_14f0;
  int local_14ec;
  uint64_t local_14e8;
  uint64_t local_14e0;
  uint64_t local_14d8;
  int local_14cc;
  uint local_14c8;
  uint local_14c4;
  uint *local_14c0;
  int64_t local_14b8;
  uint *local_14b0;
  int64_t local_14a8;
  uint64_t local_14a0;
  uint64_t local_1498;
  int local_148c;
  int local_1488;
  int local_1484;
  int64_t local_1480;
  int64_t local_1478;
  uint64_t local_1470;
  uint16_t local_1462 [3];
  uint16_t local_145c;
  uint8_t local_145a;
  uint32_t uStack_1458;
  uint *local_1050;
  int64_t local_1048;
  int local_1030;
  uint *local_1028;
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_1568;
  local_145a = 0;
  local_145c = 0;
  pU64_3 = *param_1;
  pU64_4 = pU64_3 + 0xe;
  pU8_1 = (byte *)((int64_t)pU64_3 + 0x39);
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  param_1[3] = (uint *)0x0;
  pU8_14 = *(byte **)(pU64_3 + 0x30);
  pU8_13 = *(byte **)(pU64_3 + 0x32);
  if (pU8_14 < pU8_13) {
    pU8_18 = pU8_14 + 1;
    *(byte **)(pU64_3 + 0x30) = pU8_18;
    bFlag_16 = *pU8_14;
joined_r0x0001800e24a7:
    if (bFlag_16 == 0x89) {
      if (pU8_18 < pU8_13) {
        pU8_14 = pU8_18 + 1;
        *(byte **)(pU64_3 + 0x30) = pU8_14;
        bFlag_16 = *pU8_18;
      }
      else {
        if (pU64_3[0xc] == 0) goto LAB_1800e2871;
        iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))(*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd]);
        pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
        if (iVal_7 == 0) {
          pU64_3[0xc] = 0;
          *(uint8_t *)(pU64_3 + 0xe) = 0;
          bFlag_16 = 0;
          pU8_13 = pU8_1;
        }
        else {
          bFlag_16 = *(byte *)pU64_4;
          pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
        }
        *(byte **)(pU64_3 + 0x32) = pU8_13;
        *(byte **)(pU64_3 + 0x30) = pU8_1;
        pU8_14 = pU8_1;
      }
      if (bFlag_16 == 0x50) {
        if (pU8_14 < pU8_13) {
          pU8_18 = pU8_14 + 1;
          *(byte **)(pU64_3 + 0x30) = pU8_18;
          bFlag_16 = *pU8_14;
        }
        else {
          if (pU64_3[0xc] == 0) goto LAB_1800e2871;
          iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))(*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd]);
          pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
          if (iVal_7 == 0) {
            pU64_3[0xc] = 0;
            *(uint8_t *)(pU64_3 + 0xe) = 0;
            bFlag_16 = 0;
            pU8_13 = pU8_1;
          }
          else {
            bFlag_16 = *(byte *)pU64_4;
            pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
          }
          *(byte **)(pU64_3 + 0x32) = pU8_13;
          *(byte **)(pU64_3 + 0x30) = pU8_1;
          pU8_18 = pU8_1;
        }
        if (bFlag_16 == 0x4e) {
          if (pU8_18 < pU8_13) {
            pU8_14 = pU8_18 + 1;
            *(byte **)(pU64_3 + 0x30) = pU8_14;
            bFlag_16 = *pU8_18;
          }
          else {
            if (pU64_3[0xc] == 0) goto LAB_1800e2871;
            iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))(*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd]);
            pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
            if (iVal_7 == 0) {
              pU64_3[0xc] = 0;
              *(uint8_t *)(pU64_3 + 0xe) = 0;
              bFlag_16 = 0;
              pU8_13 = pU8_1;
            }
            else {
              bFlag_16 = *(byte *)pU64_4;
              pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
            }
            *(byte **)(pU64_3 + 0x32) = pU8_13;
            *(byte **)(pU64_3 + 0x30) = pU8_1;
            pU8_14 = pU8_1;
          }
          if (bFlag_16 == 0x47) {
            if (pU8_14 < pU8_13) {
              *(byte **)(pU64_3 + 0x30) = pU8_14 + 1;
              bFlag_16 = *pU8_14;
              pU8_14 = pU8_14 + 1;
            }
            else {
              if (pU64_3[0xc] == 0) goto LAB_1800e2871;
              iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))(*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd]);
              pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
              if (iVal_7 == 0) {
                pU64_3[0xc] = 0;
                *(uint8_t *)(pU64_3 + 0xe) = 0;
                bFlag_16 = 0;
                pU8_13 = pU8_1;
              }
              else {
                bFlag_16 = *(byte *)pU64_4;
                pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
              }
              *(byte **)(pU64_3 + 0x32) = pU8_13;
              *(byte **)(pU64_3 + 0x30) = pU8_1;
              pU8_14 = pU8_1;
            }
            if (bFlag_16 == 0xd) {
              if (pU8_14 < pU8_13) {
                *(byte **)(pU64_3 + 0x30) = pU8_14 + 1;
                bFlag_16 = *pU8_14;
                pU8_14 = pU8_14 + 1;
              }
              else {
                if (pU64_3[0xc] == 0) goto LAB_1800e2871;
                iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))(*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd]);
                pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
                if (iVal_7 == 0) {
                  pU64_3[0xc] = 0;
                  *(uint8_t *)(pU64_3 + 0xe) = 0;
                  bFlag_16 = 0;
                  pU8_13 = pU8_1;
                }
                else {
                  bFlag_16 = *(byte *)pU64_4;
                  pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
                }
                *(byte **)(pU64_3 + 0x32) = pU8_13;
                *(byte **)(pU64_3 + 0x30) = pU8_1;
                pU8_14 = pU8_1;
              }
              if (bFlag_16 == 10) {
                if (pU8_14 < pU8_13) {
                  *(byte **)(pU64_3 + 0x30) = pU8_14 + 1;
                  bFlag_16 = *pU8_14;
                  pU8_14 = pU8_14 + 1;
                }
                else {
                  if (pU64_3[0xc] == 0) goto LAB_1800e2871;
                  iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))(*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd])
                  ;
                  pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
                  if (iVal_7 == 0) {
                    pU64_3[0xc] = 0;
                    *(uint8_t *)(pU64_3 + 0xe) = 0;
                    bFlag_16 = 0;
                    pU8_13 = pU8_1;
                  }
                  else {
                    bFlag_16 = *(byte *)pU64_4;
                    pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
                  }
                  *(byte **)(pU64_3 + 0x32) = pU8_13;
                  *(byte **)(pU64_3 + 0x30) = pU8_1;
                  pU8_14 = pU8_1;
                }
                if (bFlag_16 == 0x1a) {
                  if (pU8_14 < pU8_13) {
                    *(byte **)(pU64_3 + 0x30) = pU8_14 + 1;
                    bFlag_16 = *pU8_14;
                  }
                  else {
                    if (pU64_3[0xc] == 0) goto LAB_1800e2871;
                    iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))
                                      (*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd]);
                    pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
                    if (iVal_7 == 0) {
                      pU64_3[0xc] = 0;
                      *(uint8_t *)(pU64_3 + 0xe) = 0;
                      bFlag_16 = 0;
                      pU8_14 = pU8_1;
                    }
                    else {
                      bFlag_16 = *(byte *)pU64_4;
                      pU8_14 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
                    }
                    *(byte **)(pU64_3 + 0x32) = pU8_14;
                    *(byte **)(pU64_3 + 0x30) = pU8_1;
                  }
                  if (bFlag_16 == 10) {
                    uVal_11 = 1;
                    if (param_2 == 1) goto LAB_1800e2894;
                    local_1518 = CONCAT44(local_1518._4_4_,1);
                    local_14a0 = 0;
                    local_1510 = 0;
                    local_14ec = 0;
                    local_14e8 = 0;
                    local_14d8 = 0;
                    local_1508 = 0;
                    local_14e0 = 0;
                    local_151c = 0;
LAB_1800e28db:
                    iVal_7 = func_0x1800e5980(pU64_3);
                    iVal_7 = iVal_7 * 0x10000;
                    local_14b8 = func_0x1800e5980(pU64_3);
                    local_1500 = (uint64_t)(uint)((int)local_14b8 + iVal_7);
                    iVal_8 = func_0x1800e5980(pU64_3);
                    local_1498 = CONCAT44(local_1498._4_4_,iVal_8);
                    uVal_9 = func_0x1800e5980(pU64_3);
                    uVal_26 = iVal_8 << 0x10 | uVal_9;
                    uVal_10 = (uint)local_1500;
                    if ((int)uVal_26 < 0x49484452) {
                      if (uVal_26 == 0x43674249) {
                        local_14ec = 1;
                        if (uVal_10 != 0) {
                          if (iVal_7 < 0) {
LAB_1800e3000:
                            *(uint64_t *)(pU64_3 + 0x30) = *(uint64_t *)(pU64_3 + 0x32);
                          }
                          else {
                            if (*(int64_t *)(pU64_3 + 4) == 0) {
                              lVal_19 = *(int64_t *)(pU64_3 + 0x30);
                            }
                            else {
                              lVal_19 = *(int64_t *)(pU64_3 + 0x30);
                              uVal_11 = *(uint64_t *)(pU64_3 + 0x32);
                              iVal_7 = (int)uVal_11 - (int)lVal_19;
joined_r0x0001800e2dea:
                              if (iVal_7 < (int)uVal_10) {
                                *(uint64_t *)(pU64_3 + 0x30) = uVal_11;
                                (**(func_ptr_t *)(pU64_3 + 6))(*(uint64_t *)(pU64_3 + 10));
                                goto LAB_1800e28cb;
                              }
                            }
LAB_1800e3098:
                            *(uint64_t *)(pU64_3 + 0x30) = (local_1500 & 0xffffffff) + lVal_19;
                          }
                        }
                      }
                      else {
                        if (uVal_26 != 0x49444154) {
                          if (uVal_26 != 0x49454e44) goto LAB_1800e2e02;
                          if ((int)local_1518 != 0) goto LAB_1800e3301;
                          uVal_11 = 1;
                          if (param_2 != 0) goto LAB_1800e2894;
                          pU64_4 = param_1[1];
                          if (pU64_4 == (uint *)0x0) goto LAB_1800e36e6;
                          iVal_7 = pU64_3[2] * pU64_3[1] * (*(int *)(param_1 + 4) * *pU64_3 + 7 >> 3)
                                  + pU64_3[1];
                          lVal_19 = _malloc_base((int64_t)iVal_7);
                          if (lVal_19 == 0) {
LAB_1800e3712:
                            param_1[2] = (uint *)0x0;
                            goto LAB_1800e2892;
                          }
                          local_1048 = (int64_t)(int)local_1508 + (int64_t)pU64_4;
                          local_1548 = (uint)(local_14ec == 0);
                          local_1050 = pU64_4;
                          iVal_7 = func_0x1800c3350(&local_1050,lVal_19,iVal_7,1);
                          if (iVal_7 == 0) {
                            thunk_FUN_180695dd0(local_1028);
                            goto LAB_1800e3712;
                          }
                          local_14f4 = local_1030;
                          param_1[2] = local_1028;
                          if (local_1028 == (uint *)0x0) goto LAB_1800e2892;
                          local_14f4 = local_1030 - (int)local_1028;
                          thunk_FUN_180695dd0(param_1[1]);
                          param_1[1] = (uint *)0x0;
                          uVal_10 = pU64_3[2] + 1;
                          uVal_9 = pU64_3[2];
                          if ((char)local_14e0 != '\0') {
                            uVal_9 = uVal_10;
                          }
                          local_14c8 = uVal_9;
                          if (param_3 != 3) {
                            local_14c8 = uVal_10;
                          }
                          if ((char)local_151c != '\0') {
                            local_14c8 = uVal_9;
                          }
                          if (param_3 != uVal_10) {
                            local_14c8 = uVal_9;
                          }
                          pU64_3[3] = local_14c8;
                          local_14cc = *(int *)(param_1 + 4);
                          local_150c = local_14c8 << (local_14cc == 0x10);
                          local_14b0 = param_1[2];
                          uVal_10 = **param_1;
                          uVal_9 = (*param_1)[1];
                          if (local_1510 == 0) {
                            local_1530 = (uint32_t)local_14a0;
                            local_1548 = uVal_10;
                            local_1540 = uVal_9;
                            local_1538 = local_14cc;
                            iVal_7 = func_0x1800e6260(param_1,local_14b0,local_14f4,local_14c8);
                            if (iVal_7 == 0) goto LAB_1800e2892;
                          }
                          else {
                            if ((((int)(uVal_10 | uVal_9) < 0) ||
                                ((((uVal_9 != 0 &&
                                   ((int)(((uint64_t)(uint)(0 << (local_14cc == 0x10)) << 0x20 |
                                          0x7fffffff) / (uint64_t)uVal_9) < (int)uVal_10)) ||
                                  (uVal_10 = uVal_10 * uVal_9, (int)(uVal_10 | local_150c) < 0)) ||
                                 ((local_150c != 0 &&
                                  ((int)(0x7fffffff / (uint64_t)local_150c) < (int)uVal_10)))))) ||
                               (local_14c0 = (uint *)_malloc_base((int64_t)
                                                                  (int)(uVal_10 * local_150c)),
                               local_14c0 == (uint *)0x0)) goto LAB_1800e3b79;
                            lVal_19 = (int64_t)(int)local_150c;
                            local_14a8 = 0;
                            do {
                              pU64_4 = *param_1;
                              local_1478 = (int64_t)(int)*(uint *)(&DAT_1806b3a80 + local_14a8 * 4)
                              ;
                              uVal_10 = *(uint *)(&DAT_1806b3ac0 + local_14a8 * 4);
                              local_1480 = (int64_t)(int)uVal_10;
                              uVal_26 = ~*(uint *)(&DAT_1806b3a80 + local_14a8 * 4) + *pU64_4 +
                                       uVal_10;
                              local_1510 = uVal_26 / uVal_10;
                              local_14c4 = *(uint *)(&DAT_1806b3aa0 + local_14a8 * 4);
                              local_14f0 = *(uint *)(&DAT_1806b3ae0 + local_14a8 * 4);
                              uVal_9 = ~local_14c4 + pU64_4[1] + local_14f0;
                              local_14f8 = uVal_9 / local_14f0;
                              if ((uVal_10 <= uVal_26) && (local_14f0 <= uVal_9)) {
                                local_148c = local_1510 * local_14cc * pU64_4[2];
                                local_1530 = (uint32_t)local_14a0;
                                local_1538 = local_14cc;
                                local_1548 = local_1510;
                                local_1540 = local_14f8;
                                iVal_7 = func_0x1800e6260(param_1,local_14b0,local_14f4,local_14c8);
                                if (iVal_7 == 0) {
                                  thunk_FUN_180695dd0(local_14c0);
                                  goto LAB_1800e2892;
                                }
                                pU64_4 = param_1[3];
                                if ((0 < (int)local_1510) && (0 < (int)local_14f8)) {
                                  local_14e8 = (uint64_t)local_1510;
                                  local_1470 = (uint64_t)local_14f8;
                                  uVal_10 = **param_1;
                                  local_14d8 = CONCAT44(local_14d8._4_4_,
                                                        local_150c * local_14c4 * uVal_10);
                                  local_1484 = local_150c * local_14f0 * uVal_10;
                                  local_1488 = uVal_10 * local_150c;
                                  local_1500 = (uint64_t)(local_1510 & 0x7ffffffe);
                                  local_1518 = (local_1480 + local_1478) * lVal_19;
                                  local_14b8 = lVal_19 * 2 * local_1480;
                                  local_1498 = lVal_19 * local_1478;
                                  local_1508 = 0;
                                  do {
                                    lVal_25 = local_1508 * local_14e8;
                                    if (local_1510 == 1) {
                                      uVal_24 = 0;
LAB_1800e3927:
                                      func_0x1806aa960((int64_t)local_14c0 +
                                                    (uVal_24 * local_1480 + local_1478) * lVal_19 +
                                                    (uint64_t)
                                                    ((local_14f0 * (int)local_1508 + local_14c4) *
                                                    local_1488),
                                                    (uint *)((lVal_25 + uVal_24) * lVal_19 +
                                                            (int64_t)pU64_4),lVal_19);
                                    }
                                    else {
                                      lVal_28 = (local_14d8 & 0xffffffff) + (int64_t)local_14c0;
                                      uVal_24 = 0;
                                      do {
                                        func_0x1806aa960(lVal_28 + local_1498,
                                                      (uint *)((uVal_24 + lVal_25) * lVal_19 +
                                                              (int64_t)pU64_4),lVal_19);
                                        func_0x1806aa960(lVal_28 + local_1518,
                                                      (uint *)((uVal_24 + lVal_25 + 1) * lVal_19 +
                                                              (int64_t)pU64_4),lVal_19);
                                        uVal_24 = uVal_24 + 2;
                                        lVal_28 = lVal_28 + local_14b8;
                                      } while (local_1500 != uVal_24);
                                      if ((local_14e8 & 1) != 0) goto LAB_1800e3927;
                                    }
                                    local_1508 = local_1508 + 1;
                                    local_14d8 = CONCAT44(local_14d8._4_4_,
                                                          (int)local_14d8 + local_1484);
                                  } while (local_1508 < local_1470);
                                }
                                uVal_10 = ((local_148c + 7 >> 3) + 1) * local_14f8;
                                thunk_FUN_180695dd0(pU64_4);
                                local_14b0 = (uint *)((int64_t)local_14b0 + (uint64_t)uVal_10);
                                local_14f4 = local_14f4 - uVal_10;
                              }
                              local_14a8 = local_14a8 + 1;
                            } while (local_14a8 != 7);
                            param_1[3] = local_14c0;
                          }
                          if ((char)local_14e0 != '\0') {
                            local_1548 = pU64_3[3];
                            uVal_10 = **param_1;
                            uVal_9 = (*param_1)[1];
                            if (*(int *)(param_1 + 4) == 0x10) {
                              func_0x1800e5b60(uVal_10,uVal_9,param_1[3],local_1462);
                            }
                            else {
                              func_0x1800e5d40(uVal_10,uVal_9,param_1[3],&local_145c);
                            }
                          }
                          if (local_14ec != 0) {
                            lVal_19 = *(int64_t *)
                                      ((int64_t)ThreadLocalStoragePointer +
                                      (uint64_t)_tls_index * 8);
                            pInt_20 = (int *)&DAT_18083ed20;
                            if (*(int *)(lVal_19 + 0x302c) != 0) {
                              pInt_20 = (int *)(lVal_19 + 0x3028);
                            }
                            if ((*pInt_20 != 0) && (2 < (int)pU64_3[3])) {
                              func_0x1800e6040(*param_1);
                            }
                          }
                          if ((char)local_151c == '\0') {
                            if ((char)local_14e0 != '\0') {
                              pU64_3[2] = pU64_3[2] + 1;
                            }
                            goto LAB_1800e3d3a;
                          }
                          pU64_3[2] = local_151c & 0xff;
                          uVal_10 = local_151c & 0xff;
                          if (2 < param_3) {
                            uVal_10 = param_3;
                          }
                          pU64_3[3] = uVal_10;
                          uVal_9 = (*param_1)[1] * **param_1;
                          if ((-1 < (int)uVal_9) && (uVal_9 <= (uint)(0x7fffffff / (uint64_t)uVal_10))
                             ) {
                            pU64_4 = param_1[3];
                            pU64_12 = (uint *)_malloc_base(uVal_9 * uVal_10,
                                                           0x7fffffff % (uint64_t)uVal_10);
                            if (pU64_12 != (uint *)0x0) {
                              if (uVal_10 == 3) {
                                if (uVal_9 != 0) {
                                  pU64_15 = pU64_12;
                                  if (uVal_9 == 1) {
                                    uVal_24 = 0;
                                  }
                                  else {
                                    uVal_24 = 0;
                                    do {
                                      uVal_22 = (uint64_t)*(byte *)((int64_t)pU64_4 + uVal_24);
                                      *(uint8_t *)pU64_15 = *(uint8_t *)(&uStack_1458 + uVal_22);
                                      *(uint8_t *)((int64_t)pU64_15 + 1) =
                                           *(uint8_t *)((int64_t)&uStack_1458 + uVal_22 * 4 + 1);
                                      *(uint8_t *)((int64_t)pU64_15 + 2) =
                                           *(uint8_t *)((int64_t)&uStack_1458 + uVal_22 * 4 + 2);
                                      uVal_22 = (uint64_t)*(byte *)((int64_t)pU64_4 + uVal_24 + 1);
                                      *(uint8_t *)((int64_t)pU64_15 + 3) =
                                           *(uint8_t *)(&uStack_1458 + uVal_22);
                                      *(uint8_t *)(pU64_15 + 1) =
                                           *(uint8_t *)((int64_t)&uStack_1458 + uVal_22 * 4 + 1);
                                      *(uint8_t *)((int64_t)pU64_15 + 5) =
                                           *(uint8_t *)((int64_t)&uStack_1458 + uVal_22 * 4 + 2);
                                      pU64_15 = (uint *)((int64_t)pU64_15 + 6);
                                      uVal_24 = uVal_24 + 2;
                                    } while ((uVal_9 & 0x7ffffffe) != uVal_24);
                                    if ((uVal_9 & 1) == 0) goto LAB_1800e3d2e;
                                  }
                                  uVal_24 = (uint64_t)*(byte *)((int64_t)pU64_4 + uVal_24);
                                  *(uint8_t *)pU64_15 = *(uint8_t *)(&uStack_1458 + uVal_24);
                                  *(uint8_t *)((int64_t)pU64_15 + 1) =
                                       *(uint8_t *)((int64_t)&uStack_1458 + uVal_24 * 4 + 1);
                                  *(uint8_t *)((int64_t)pU64_15 + 2) =
                                       *(uint8_t *)((int64_t)&uStack_1458 + uVal_24 * 4 + 2);
                                }
                              }
                              else if (uVal_9 != 0) {
                                pU64_15 = pU64_12;
                                if (uVal_9 < 4) {
                                  uVal_24 = 0;
                                }
                                else {
                                  uVal_24 = 0;
                                  do {
                                    *pU64_15 = (&uStack_1458)[*(byte *)((int64_t)pU64_4 + uVal_24)];
                                    pU64_15[1] = (&uStack_1458)[*(byte *)((int64_t)pU64_4 + uVal_24 + 1)];
                                    pU64_15[2] = (&uStack_1458)[*(byte *)((int64_t)pU64_4 + uVal_24 + 2)];
                                    pU64_15[3] = (&uStack_1458)[*(byte *)((int64_t)pU64_4 + uVal_24 + 3)];
                                    pU64_15 = pU64_15 + 4;
                                    uVal_24 = uVal_24 + 4;
                                  } while ((uVal_9 & 0x7ffffffc) != uVal_24);
                                  if ((uint64_t)(uVal_9 & 3) == 0) goto LAB_1800e3d2e;
                                }
                                uVal_22 = 0;
                                do {
                                  pU64_15[uVal_22] =
                                       (&uStack_1458)[*(byte *)((int64_t)pU64_4 + uVal_22 + uVal_24)]
                                  ;
                                  uVal_22 = uVal_22 + 1;
                                } while ((uVal_9 & 3) != uVal_22);
                              }
LAB_1800e3d2e:
                              thunk_FUN_180695dd0(pU64_4);
                              param_1[3] = pU64_12;
LAB_1800e3d3a:
                              thunk_FUN_180695dd0(param_1[2]);
                              param_1[2] = (uint *)0x0;
                              func_0x1800e5980(pU64_3);
                              func_0x1800e5980(pU64_3);
                              uVal_11 = 1;
                              goto LAB_1800e2894;
                            }
                          }
LAB_1800e3b79:
                          lVal_19 = *(int64_t *)
                                    ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8
                                    );
                          fnPtr_17 = "outofmem";
                          goto LAB_1800e288b;
                        }
                        if ((int)local_1518 != 0) goto LAB_1800e3301;
                        ptr2_U64_2 = param_1 + 1;
                        if (((char)local_151c != '\0') && ((uint)local_14e8 == 0)) {
                          lVal_19 = *(int64_t *)
                                    ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8
                                    );
                          fnPtr_17 = "no PLTE";
                          goto LAB_1800e288b;
                        }
                        if (param_2 == 2) {
                          if ((char)local_151c != '\0') {
                            pU64_3[2] = local_151c & 0xff;
                          }
                          uVal_11 = 1;
                          goto LAB_1800e2894;
                        }
                        if (0x40000000 < uVal_10) {
                          lVal_19 = *(int64_t *)
                                    ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8
                                    );
                          fnPtr_17 = "IDAT size limit";
                          goto LAB_1800e288b;
                        }
                        uVal_9 = uVal_10 + (int)local_1508;
                        uVal_11 = 0;
                        if ((int)uVal_9 < (int)local_1508) goto LAB_1800e2894;
                        if ((uint)local_14d8 < uVal_9) {
                          uVal_24 = 0x1000;
                          if (0x1000 < uVal_10) {
                            uVal_24 = local_1500 & 0xffffffff;
                          }
                          if ((uint)local_14d8 != 0) {
                            uVal_24 = local_14d8 & 0xffffffff;
                          }
                          do {
                            local_14d8 = uVal_24;
                            uVal_24 = (uint64_t)((uint)local_14d8 * 2);
                          } while ((uint)local_14d8 < uVal_9);
                          pU64_12 = (uint *)_realloc_base(*ptr2_U64_2,local_14d8);
                          if (pU64_12 == (uint *)0x0) goto LAB_1800e3b79;
                          *ptr2_U64_2 = pU64_12;
                        }
                        else {
                          pU64_12 = *ptr2_U64_2;
                        }
                        uVal_24 = local_1500;
                        lVal_19 = (local_1508 & 0xffffffff) + (int64_t)pU64_12;
                        iVal_7 = (int)local_1500;
                        if (*(int64_t *)(pU64_3 + 4) == 0) {
                          lVal_25 = *(int64_t *)(pU64_3 + 0x30);
                          uVal_22 = *(uint64_t *)(pU64_3 + 0x32);
                        }
                        else {
                          lVal_25 = *(int64_t *)(pU64_3 + 0x30);
                          uVal_22 = *(uint64_t *)(pU64_3 + 0x32);
                          iVal_8 = (int)uVal_22 - (int)lVal_25;
                          iVal_23 = iVal_7 - iVal_8;
                          local_1500 = CONCAT44(local_1500._4_4_,iVal_23);
                          if (iVal_23 != 0 && iVal_8 <= iVal_7) {
                            local_1518 = (uint64_t)iVal_8;
                            func_0x1806aa960();
                            iVal_7 = (int)local_1500;
                            iVal_8 = (**(func_ptr_t *)(pU64_3 + 4))
                                              (*(uint64_t *)(pU64_3 + 10),lVal_19 + local_1518,
                                               local_1500 & 0xffffffff);
                            local_1518 = local_1518 & 0xffffffff00000000;
                            *(uint64_t *)(pU64_3 + 0x30) = *(uint64_t *)(pU64_3 + 0x32);
                            local_1508 = (uint64_t)uVal_9;
                            if (iVal_8 != iVal_7) goto LAB_1800e344b;
                            goto LAB_1800e28cb;
                          }
                        }
                        uVal_24 = uVal_24 & 0xffffffff;
                        if (uVal_22 < lVal_25 + uVal_24) {
LAB_1800e344b:
                          uVal_11 = 0;
                          *(char **)(*(int64_t *)
                                      ((int64_t)ThreadLocalStoragePointer +
                                      (uint64_t)_tls_index * 8) + 0x3010) = "outofdata";
                          goto LAB_1800e2894;
                        }
                        func_0x1806aa960(lVal_19,lVal_25,uVal_24);
                        *(uint64_t *)(pU64_3 + 0x30) = *(int64_t *)(pU64_3 + 0x30) + uVal_24;
                        local_1518 = local_1518 & 0xffffffff00000000;
                        local_1508 = (uint64_t)uVal_9;
                      }
                    }
                    else {
                      if (uVal_26 != 0x49484452) {
                        uVal_27 = (uint)local_14b8;
                        if (uVal_26 == 0x504c5445) {
                          if ((int)local_1518 == 0) {
                            if (uVal_10 < 0x301) {
                              uVal_9 = uVal_27 * 0xaaab >> 0x11;
                              if (uVal_9 * 3 == uVal_10) {
                                local_14e8 = (uint64_t)uVal_9;
                                if (2 < uVal_27) {
                                  local_1518 = (uint64_t)local_1518._4_4_ << 0x20;
                                  pU8_14 = *(byte **)(pU64_3 + 0x30);
                                  pU8_13 = *(byte **)(pU64_3 + 0x32);
                                  uVal_24 = 0;
                                  do {
                                    if (pU8_14 < pU8_13) {
                                      *(byte **)(pU64_3 + 0x30) = pU8_14 + 1;
                                      bFlag_16 = *pU8_14;
                                      pU8_18 = pU8_14 + 1;
                                    }
                                    else if (pU64_3[0xc] == 0) {
                                      bFlag_16 = 0;
                                      pU8_18 = pU8_14;
                                    }
                                    else {
                                      iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))
                                                        (*(uint64_t *)(pU64_3 + 10),pU64_4,
                                                         pU64_3[0xd]);
                                      pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
                                      if (iVal_7 == 0) {
                                        pU64_3[0xc] = 0;
                                        *(uint8_t *)(pU64_3 + 0xe) = 0;
                                        bFlag_16 = 0;
                                        pU8_13 = pU8_1;
                                      }
                                      else {
                                        bFlag_16 = *(byte *)pU64_4;
                                        pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
                                      }
                                      *(byte **)(pU64_3 + 0x32) = pU8_13;
                                      *(byte **)(pU64_3 + 0x30) = pU8_1;
                                      pU8_18 = pU8_1;
                                    }
                                    *(byte *)(&uStack_1458 + uVal_24) = bFlag_16;
                                    if (pU8_18 < pU8_13) {
                                      *(byte **)(pU64_3 + 0x30) = pU8_18 + 1;
                                      bFlag_16 = *pU8_18;
                                      pU8_18 = pU8_18 + 1;
                                    }
                                    else if (pU64_3[0xc] == 0) {
                                      bFlag_16 = 0;
                                    }
                                    else {
                                      iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))
                                                        (*(uint64_t *)(pU64_3 + 10),pU64_4,
                                                         pU64_3[0xd]);
                                      pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
                                      if (iVal_7 == 0) {
                                        pU64_3[0xc] = 0;
                                        *(uint8_t *)(pU64_3 + 0xe) = 0;
                                        bFlag_16 = 0;
                                        pU8_13 = pU8_1;
                                      }
                                      else {
                                        bFlag_16 = *(byte *)pU64_4;
                                        pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
                                      }
                                      *(byte **)(pU64_3 + 0x32) = pU8_13;
                                      *(byte **)(pU64_3 + 0x30) = pU8_1;
                                      pU8_18 = pU8_1;
                                    }
                                    *(byte *)((int64_t)&uStack_1458 + uVal_24 * 4 + 1) = bFlag_16;
                                    if (pU8_18 < pU8_13) {
                                      pU8_14 = pU8_18 + 1;
                                      *(byte **)(pU64_3 + 0x30) = pU8_14;
                                      bFlag_16 = *pU8_18;
                                    }
                                    else if (pU64_3[0xc] == 0) {
                                      bFlag_16 = 0;
                                      pU8_14 = pU8_18;
                                    }
                                    else {
                                      iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))
                                                        (*(uint64_t *)(pU64_3 + 10),pU64_4,
                                                         pU64_3[0xd]);
                                      pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
                                      if (iVal_7 == 0) {
                                        pU64_3[0xc] = 0;
                                        *(uint8_t *)(pU64_3 + 0xe) = 0;
                                        bFlag_16 = 0;
                                        pU8_13 = pU8_1;
                                      }
                                      else {
                                        bFlag_16 = *(byte *)pU64_4;
                                        pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
                                      }
                                      *(byte **)(pU64_3 + 0x32) = pU8_13;
                                      *(byte **)(pU64_3 + 0x30) = pU8_1;
                                      pU8_14 = pU8_1;
                                    }
                                    *(byte *)((int64_t)&uStack_1458 + uVal_24 * 4 + 2) = bFlag_16;
                                    *(uint8_t *)((int64_t)&uStack_1458 + uVal_24 * 4 + 3) = 0xff;
                                    uVal_24 = uVal_24 + 1;
                                  } while (uVal_9 != uVal_24);
                                  goto LAB_1800e28cb;
                                }
                                goto LAB_1800e28c3;
                              }
                            }
                            lVal_19 = *(int64_t *)
                                      ((int64_t)ThreadLocalStoragePointer +
                                      (uint64_t)_tls_index * 8);
                            fnPtr_17 = "invalid PLTE";
                            goto LAB_1800e288b;
                          }
                        }
                        else {
                          if (uVal_26 == 0x74524e53) {
                            if ((int)local_1518 != 0) goto LAB_1800e3301;
                            if (param_1[1] != (uint *)0x0) {
                              lVal_19 = *(int64_t *)
                                        ((int64_t)ThreadLocalStoragePointer +
                                        (uint64_t)_tls_index * 8);
                              fnPtr_17 = "tRNS after IDAT";
                              goto LAB_1800e288b;
                            }
                            if ((char)local_151c == '\0') {
                              uVal_9 = pU64_3[2];
                              if ((uVal_9 & 1) == 0) {
                                lVal_19 = *(int64_t *)
                                          ((int64_t)ThreadLocalStoragePointer +
                                          (uint64_t)_tls_index * 8);
                                fnPtr_17 = "tRNS with alpha";
                              }
                              else {
                                if (uVal_9 * 2 == uVal_10) {
                                  if (param_2 == 2) {
                                    pU64_3[2] = uVal_9 + 1;
                                    uVal_11 = 1;
                                    goto LAB_1800e2894;
                                  }
                                  uVal_21 = (uint7)(uint3)(uVal_9 * 2 >> 8);
                                  if (*(int *)(param_1 + 4) == 0x10) {
                                    local_14e0 = CONCAT71(uVal_21,1);
                                    if (0 < (int)uVal_9) {
                                      uVal_24 = 0;
                                      do {
                                        uVal_6 = func_0x1800e5980(pU64_3);
                                        local_1462[uVal_24] = uVal_6;
                                        if ((int64_t)(int)pU64_3[2] <= (int64_t)(uVal_24 + 1))
                                        break;
                                        bFlag_29 = uVal_24 < 2;
                                        uVal_24 = uVal_24 + 1;
                                      } while (bFlag_29);
                                    }
                                  }
                                  else {
                                    local_14e0 = CONCAT71(uVal_21,1);
                                    if (0 < (int)uVal_9) {
                                      uVal_24 = 0;
                                      do {
                                        ch_5 = func_0x1800e5980(pU64_3);
                                        *(char *)((int64_t)&local_145c + uVal_24) =
                                             (&DAT_1806b3a70)[*(int *)(param_1 + 4)] * ch_5;
                                        if ((int64_t)(int)pU64_3[2] <= (int64_t)(uVal_24 + 1))
                                        break;
                                        bFlag_29 = uVal_24 < 2;
                                        uVal_24 = uVal_24 + 1;
                                      } while (bFlag_29);
                                    }
                                  }
                                  local_1518 = local_1518 & 0xffffffff00000000;
                                  local_151c = 0;
                                  goto LAB_1800e28cb;
                                }
LAB_1800e340d:
                                lVal_19 = *(int64_t *)
                                          ((int64_t)ThreadLocalStoragePointer +
                                          (uint64_t)_tls_index * 8);
                                fnPtr_17 = "bad tRNS len";
                              }
                              goto LAB_1800e288b;
                            }
                            if (param_2 == 2) {
                              pU64_3[2] = 4;
                              uVal_11 = 1;
                              goto LAB_1800e2894;
                            }
                            if ((uint)local_14e8 == 0) {
                              lVal_19 = *(int64_t *)
                                        ((int64_t)ThreadLocalStoragePointer +
                                        (uint64_t)_tls_index * 8);
                              fnPtr_17 = "tRNS before PLTE";
                              goto LAB_1800e288b;
                            }
                            if ((uint)local_14e8 < uVal_10) goto LAB_1800e340d;
                            local_151c = (uint)CONCAT71((int7)((uint64_t)(param_1 + 1) >> 8),4);
                            if (uVal_10 == 0) goto LAB_1800e28c3;
                            local_1518 = (uint64_t)local_1518._4_4_ << 0x20;
                            pU8_14 = *(byte **)(pU64_3 + 0x32);
                            uVal_24 = 0;
                            pU8_13 = *(byte **)(pU64_3 + 0x30);
                            do {
                              if (pU8_13 < pU8_14) {
                                pU8_18 = pU8_13 + 1;
                                *(byte **)(pU64_3 + 0x30) = pU8_18;
                                bFlag_16 = *pU8_13;
                              }
                              else if (pU64_3[0xc] == 0) {
                                bFlag_16 = 0;
                                pU8_18 = pU8_13;
                              }
                              else {
                                iVal_8 = (**(func_ptr_t *)(pU64_3 + 4))
                                                  (*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd]);
                                pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
                                if (iVal_8 == 0) {
                                  pU64_3[0xc] = 0;
                                  *(uint8_t *)(pU64_3 + 0xe) = 0;
                                  bFlag_16 = 0;
                                  pU8_14 = pU8_1;
                                }
                                else {
                                  bFlag_16 = *(byte *)pU64_4;
                                  pU8_14 = (byte *)((int64_t)iVal_8 + (int64_t)pU64_4);
                                }
                                *(byte **)(pU64_3 + 0x32) = pU8_14;
                                *(byte **)(pU64_3 + 0x30) = pU8_1;
                                pU8_18 = pU8_1;
                              }
                              *(byte *)((int64_t)&uStack_1458 + uVal_24 * 4 + 3) = bFlag_16;
                              uVal_24 = uVal_24 + 1;
                              pU8_13 = pU8_18;
                            } while (uVal_27 + iVal_7 != uVal_24);
                            goto LAB_1800e28cb;
                          }
LAB_1800e2e02:
                          if ((int)local_1518 == 0) {
                            if ((local_1498 & 0x2000) != 0) {
                              if (uVal_10 != 0) {
                                if (-1 < iVal_7) {
                                  if (*(int64_t *)(pU64_3 + 4) != 0) {
                                    local_1518 = (uint64_t)local_1518._4_4_ << 0x20;
                                    lVal_19 = *(int64_t *)(pU64_3 + 0x30);
                                    uVal_11 = *(uint64_t *)(pU64_3 + 0x32);
                                    iVal_7 = (int)uVal_11 - (int)lVal_19;
                                    goto joined_r0x0001800e2dea;
                                  }
                                  local_1518 = (uint64_t)local_1518._4_4_ << 0x20;
                                  lVal_19 = *(int64_t *)(pU64_3 + 0x30);
                                  goto LAB_1800e3098;
                                }
                                local_1518 = (uint64_t)local_1518._4_4_ << 0x20;
                                goto LAB_1800e3000;
                              }
LAB_1800e28c3:
                              local_1518 = (uint64_t)local_1518._4_4_ << 0x20;
                              goto LAB_1800e28cb;
                            }
                            s_XXXX_PNG_chunk_not_known_18083b460[0] = (char)(local_1498 >> 8);
                            fnPtr_17 = s_XXXX_PNG_chunk_not_known_18083b460;
                            s_XXXX_PNG_chunk_not_known_18083b460[1] = (char)local_1498;
                            s_XXXX_PNG_chunk_not_known_18083b460[2] = (char)(uVal_9 >> 8);
                            s_XXXX_PNG_chunk_not_known_18083b460[3] = (char)uVal_9;
                            lVal_19 = *(int64_t *)
                                      ((int64_t)ThreadLocalStoragePointer +
                                      (uint64_t)_tls_index * 8);
                            goto LAB_1800e288b;
                          }
                        }
LAB_1800e3301:
                        lVal_19 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        fnPtr_17 = "first not IHDR";
                        goto LAB_1800e288b;
                      }
                      if ((int)local_1518 == 0) {
                        lVal_19 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        fnPtr_17 = "multiple IHDR";
                        goto LAB_1800e288b;
                      }
                      if (uVal_10 != 0xd) {
                        lVal_19 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        fnPtr_17 = "bad IHDR len";
                        goto LAB_1800e288b;
                      }
                      iVal_7 = func_0x1800e5980(pU64_3);
                      uVal_10 = func_0x1800e5980(pU64_3);
                      *pU64_3 = uVal_10 | iVal_7 << 0x10;
                      iVal_7 = func_0x1800e5980(pU64_3);
                      uVal_10 = func_0x1800e5980(pU64_3);
                      uVal_10 = uVal_10 | iVal_7 << 0x10;
                      pU64_3[1] = uVal_10;
                      if ((0x1000000 < uVal_10) || (0x1000000 < *pU64_3)) goto LAB_1800e327d;
                      pU8_14 = *(byte **)(pU64_3 + 0x30);
                      if (pU8_14 < *(byte **)(pU64_3 + 0x32)) {
                        *(byte **)(pU64_3 + 0x30) = pU8_14 + 1;
                        uVal_10 = (uint)*pU8_14;
                      }
                      else if (pU64_3[0xc] == 0) {
                        uVal_10 = 0;
                      }
                      else {
                        iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))
                                          (*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd]);
                        pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
                        if (iVal_7 == 0) {
                          pU64_3[0xc] = 0;
                          *(uint8_t *)(pU64_3 + 0xe) = 0;
                          uVal_10 = 0;
                          pU8_14 = pU8_1;
                        }
                        else {
                          uVal_10 = (uint)*(byte *)pU64_4;
                          pU8_14 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
                        }
                        *(byte **)(pU64_3 + 0x32) = pU8_14;
                        *(byte **)(pU64_3 + 0x30) = pU8_1;
                      }
                      *(uint *)(param_1 + 4) = uVal_10;
                      bFlag_16 = (byte)uVal_10 - 1;
                      if (((byte)((byte)uVal_10 ^ bFlag_16) <= bFlag_16) || ((uVal_10 & 0x1f) == 0)) {
                        lVal_19 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        fnPtr_17 = "1/2/4/8/16-bit only";
                        goto LAB_1800e288b;
                      }
                      pU8_14 = *(byte **)(pU64_3 + 0x30);
                      if (*(byte **)(pU64_3 + 0x32) <= pU8_14) {
                        if (pU64_3[0xc] != 0) {
                          func_0x1800e2360(pU64_3);
                          pU8_14 = *(byte **)(pU64_3 + 0x30);
                          goto LAB_1800e3106;
                        }
                        bFlag_16 = 0;
                        uVal_24 = 0;
                        goto LAB_1800e3156;
                      }
LAB_1800e3106:
                      pU8_13 = pU8_14 + 1;
                      *(byte **)(pU64_3 + 0x30) = pU8_13;
                      bFlag_16 = *pU8_14;
                      if (6 < bFlag_16) {
LAB_1800e32da:
                        lVal_19 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        fnPtr_17 = "bad ctype";
                        goto LAB_1800e288b;
                      }
                      if (bFlag_16 == 3) {
                        if (*(int *)(param_1 + 4) == 0x10) goto LAB_1800e32da;
                        uVal_24 = 3;
                        bFlag_16 = 3;
                        local_151c = (uint)CONCAT71((int7)((uint64_t)pU8_14 >> 8),3);
                        pU8_14 = pU8_13;
                      }
                      else {
                        uVal_24 = (uint64_t)(uint)bFlag_16;
                        pU8_14 = pU8_13;
                        if ((bFlag_16 & 1) != 0) goto LAB_1800e32da;
                      }
LAB_1800e3156:
                      if (pU8_14 < *(byte **)(pU64_3 + 0x32)) {
LAB_1800e3178:
                        pU8_13 = pU8_14 + 1;
                        *(byte **)(pU64_3 + 0x30) = pU8_13;
                        if (*pU8_14 != 0) {
                          lVal_19 = *(int64_t *)
                                    ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8
                                    );
                          fnPtr_17 = "bad comp method";
                          goto LAB_1800e288b;
                        }
                        if (*(byte **)(pU64_3 + 0x32) <= pU8_13) {
                          if (pU64_3[0xc] == 0) goto LAB_1800e31f4;
                          func_0x1800e2360(pU64_3);
                          pU8_13 = *(byte **)(pU64_3 + 0x30);
                        }
                        pU8_14 = pU8_13 + 1;
                        *(byte **)(pU64_3 + 0x30) = pU8_14;
                        if (*pU8_13 != 0) {
                          lVal_19 = *(int64_t *)
                                    ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8
                                    );
                          fnPtr_17 = "bad filter method";
                          goto LAB_1800e288b;
                        }
                        if (*(byte **)(pU64_3 + 0x32) <= pU8_14) {
                          if (pU64_3[0xc] == 0) goto LAB_1800e31f4;
                          func_0x1800e2360(pU64_3);
                          pU8_14 = *(byte **)(pU64_3 + 0x30);
                        }
                        *(byte **)(pU64_3 + 0x30) = pU8_14 + 1;
                        uVal_10 = (uint)*pU8_14;
                        if (1 < *pU8_14) {
                          lVal_19 = *(int64_t *)
                                    ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8
                                    );
                          fnPtr_17 = "bad interlace method";
                          goto LAB_1800e288b;
                        }
                      }
                      else {
                        if (pU64_3[0xc] != 0) {
                          func_0x1800e2360(pU64_3);
                          pU8_14 = *(byte **)(pU64_3 + 0x30);
                          goto LAB_1800e3178;
                        }
LAB_1800e31f4:
                        uVal_10 = 0;
                      }
                      uVal_9 = *pU64_3;
                      if ((uVal_9 == 0) || (pU64_3[1] == 0)) {
                        lVal_19 = *(int64_t *)
                                  ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                        fnPtr_17 = "0-pixel image";
                        goto LAB_1800e288b;
                      }
                      if ((char)local_151c == '\0') {
                        uVal_26 = (3 < bFlag_16) + 1 + ((uint)uVal_24 & 2);
                        pU64_3[2] = uVal_26;
                        uVal_9 = (uint)((0x40000000 / (uint64_t)uVal_9) / (uint64_t)uVal_26);
                        local_151c = 0;
                      }
                      else {
                        pU64_3[2] = 1;
                        uVal_9 = (uint)(0x40000000 / (uint64_t)uVal_9 >> 2);
                      }
                      local_1518 = local_1518 & 0xffffffff00000000;
                      local_1510 = uVal_10;
                      local_14a0 = uVal_24;
                      if (uVal_9 < pU64_3[1]) goto LAB_1800e327d;
                    }
LAB_1800e28cb:
                    func_0x1800e5980(pU64_3);
                    func_0x1800e5980(pU64_3);
                    goto LAB_1800e28db;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (pU64_3[0xc] != 0) {
    iVal_7 = (**(func_ptr_t *)(pU64_3 + 4))(*(uint64_t *)(pU64_3 + 10),pU64_4,pU64_3[0xd]);
    pU64_3[0x2e] = pU64_3[0x2e] + (pU64_3[0x30] - pU64_3[0x34]);
    if (iVal_7 == 0) {
      pU64_3[0xc] = 0;
      *(uint8_t *)(pU64_3 + 0xe) = 0;
      bFlag_16 = 0;
      pU8_13 = pU8_1;
    }
    else {
      bFlag_16 = *(byte *)pU64_4;
      pU8_13 = (byte *)((int64_t)iVal_7 + (int64_t)pU64_4);
    }
    *(byte **)(pU64_3 + 0x32) = pU8_13;
    *(byte **)(pU64_3 + 0x30) = pU8_1;
    pU8_18 = pU8_1;
    goto joined_r0x0001800e24a7;
  }
LAB_1800e2871:
  lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_17 = "bad png sig";
LAB_1800e288b:
  while( true ) {
    *(char **)(lVal_19 + 0x3010) = fnPtr_17;
LAB_1800e2892:
    uVal_11 = 0;
LAB_1800e2894:
    if (DAT_18083cf40 == (local_48 ^ (uint64_t)auStack_1568)) break;
    func_0x180673080(local_48 ^ (uint64_t)auStack_1568);
LAB_1800e36e6:
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_17 = "no IDAT";
  }
  return uVal_11;
LAB_1800e327d:
  lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_17 = "too large";
  goto LAB_1800e288b;
}

// func_0x1800e3d70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1800e3d70(int64_t param_1,uint param_2,uint param_3,uint param_4,uint param_5)
{
  ushort *pU64_1;
  ushort *pU64_2;
  uint64_t uVal_3;
  uint64_t uVal_4;
  byte bFlag_5;
  uint64_t uVal_6;
  ushort uVal_7;
  ushort uVal_8;
  ushort uVal_9;
  ushort uVal_10;
  ushort uVal_11;
  ushort uVal_12;
  ushort uVal_13;
  ushort uVal_14;
  int64_t lVal_15;
  char *fnPtr_16;
  uint uVal_17;
  uint uVal_18;
  int64_t lVal_21;
  int64_t lVal_22;
  uint64_t uVal_23;
  uint uVal_24;
  int iVal_25;
  uint32_t *pU64_26;
  uint uVal_27;
  uint64_t uVal_28;
  uint uVal_29;
  uint uVal_30;
  int64_t lVal_31;
  uint uVal_32;
  uint uVal_34;
  uint64_t uVal_35;
  int64_t lVal_36;
  ushort *pU64_37;
  byte *pU8_38;
  int64_t lVal_39;
  uint uVal_40;
  uint uVal_41;
  int64_t lVal_42;
  uint8_t auArr_43 [16];
  uint8_t auArr_44 [16];
  ushort uVal_45;
  ushort uVal_80;
  ushort uVal_81;
  ushort uVal_82;
  ushort uVal_83;
  ushort uVal_84;
  ushort uVal_85;
  uint8_t auArr_46 [16];
  uint8_t auArr_47 [16];
  uint8_t auArr_48 [16];
  uint8_t auArr_49 [16];
  uint8_t auArr_50 [16];
  uint8_t auArr_51 [16];
  uint8_t auArr_52 [16];
  uint8_t auArr_53 [16];
  uint8_t auArr_54 [16];
  uint8_t auArr_55 [16];
  ushort uVal_86;
  uint8_t auArr_56 [16];
  uint8_t auArr_57 [16];
  uint8_t auArr_68 [16];
  ushort uVal_87;
  ushort uVal_99;
  ushort uVal_100;
  ushort uVal_101;
  ushort uVal_102;
  ushort uVal_103;
  ushort uVal_104;
  ushort uVal_105;
  uint8_t auArr_88 [16];
  uint local_a8;
  uint64_t uVal_19;
  uint64_t uVal_20;
  uint64_t uVal_33;
  uint8_t auArr_58 [16];
  uint8_t auArr_69 [16];
  uint8_t auArr_70 [16];
  uint8_t auArr_73 [16];
  uint8_t auArr_74 [16];
  uint8_t auArr_75 [16];
  uint8_t auArr_76 [16];
  uint8_t auArr_59 [16];
  uint8_t auArr_71 [16];
  uint8_t auArr_60 [16];
  uint8_t auArr_61 [16];
  uint8_t auArr_62 [16];
  uint8_t auArr_63 [16];
  uint8_t auArr_64 [16];
  uint8_t auArr_65 [16];
  uint8_t auArr_66 [16];
  uint8_t auArr_67 [16];
  uint8_t auArr_72 [16];
  uint8_t auArr_77 [16];
  uint8_t auArr_78 [16];
  uint8_t auArr_79 [16];
  uint8_t auArr_89 [16];
  uint8_t auArr_90 [16];
  uint8_t auArr_91 [16];
  uint8_t auArr_92 [16];
  uint8_t auArr_93 [16];
  uint8_t auArr_94 [16];
  uint8_t auArr_95 [16];
  uint8_t auArr_96 [16];
  uint8_t auArr_97 [16];
  uint8_t auArr_98 [16];
  
  if (param_3 == param_2) {
    return param_1;
  }
  if ((-1 < (int)(param_4 | param_3)) &&
     ((param_4 == 0 || ((int)param_3 <= (int)(0x7fffffff / (uint64_t)param_4))))) {
    uVal_17 = param_4 * param_3;
    uVal_19 = (uint64_t)uVal_17;
    if ((-1 < (int)(param_5 | uVal_17)) &&
       (((param_5 == 0 ||
         (uVal_19 = 0x7fffffff % (uint64_t)param_5,
         (int)uVal_17 <= (int)(0x7fffffff / (uint64_t)param_5))) &&
        (lVal_15 = _malloc_base((int64_t)(int)(uVal_17 * param_5),uVal_19), uVal_14 = _UNK_1806b29ce,
        uVal_13 = _UNK_1806b29cc, uVal_12 = _UNK_1806b29ca, uVal_11 = _UNK_1806b29c8,
        uVal_10 = _UNK_1806b29c6, uVal_9 = _UNK_1806b29c4, uVal_8 = _UNK_1806b29c2,
        uVal_7 = _DAT_1806b29c0, uVal_6 = _UNK_1806b2958, uVal_19 = _DAT_1806b2950, lVal_15 != 0)))) {
      if ((int)param_5 < 1) {
LAB_1800e4af8:
        thunk_FUN_180695dd0();
        return lVal_15;
      }
      uVal_29 = param_3 + param_2 * 8;
      if ((uVal_29 < 0x24) && ((0xe161a1c00U >> ((uint64_t)uVal_29 & 0x3f) & 1) != 0)) {
        uVal_41 = param_4 - 1;
        uVal_35 = 0x10;
        if ((param_4 & 0xf) != 0) {
          uVal_35 = (uint64_t)(param_4 & 0xf);
        }
        lVal_39 = param_4 - uVal_35;
        uVal_34 = param_4 & 3;
        uVal_20 = 4;
        if ((param_4 & 3) != 0) {
          uVal_20 = (uint64_t)uVal_34;
        }
        lVal_36 = param_4 - uVal_20;
        uVal_18 = param_4 & 0xfffffff0;
        uVal_20 = (uint64_t)uVal_18;
        uVal_32 = param_4 & 0xfffffffc;
        uVal_33 = (uint64_t)uVal_32;
        auArr_43 = ZEXT416(DAT_1806b2960);
        auArr_44 = ZEXT416(DAT_1806b29d0);
        uVal_27 = param_4 - 2;
        uVal_28 = 0;
        uVal_40 = 0;
        uVal_24 = 0;
        do {
          iVal_25 = param_4 * (int)uVal_28;
          pU64_37 = (ushort *)((uint64_t)(iVal_25 * param_2) + param_1);
          pU64_26 = (uint32_t *)((uint64_t)(iVal_25 * param_3) + lVal_15);
          lVal_31 = lVal_15 + (uint64_t)uVal_24;
          lVal_21 = param_1 + (uint64_t)uVal_40;
          switch(uVal_29) {
          case 10:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if (3 < param_4) {
                if (param_4 < 0x10) {
                  uVal_23 = 0;
                }
                else {
                  lVal_22 = (uint64_t)uVal_24 + lVal_15 + 0x10;
                  lVal_42 = (uint64_t)uVal_40 + param_1 + 8;
                  uVal_23 = 0;
                  do {
                    uVal_3 = *(uint64_t *)(lVal_42 + -8 + uVal_23);
                    uVal_4 = *(uint64_t *)(lVal_42 + uVal_23);
                    auArr_67._8_6_ = 0;
                    auArr_67._0_8_ = uVal_3;
                    auArr_67[14] = (char)(uVal_3 >> 0x38);
                    auArr_67[15] = 0xff;
                    auArr_66._14_2_ = auArr_67._14_2_;
                    auArr_66._8_5_ = 0;
                    auArr_66._0_8_ = uVal_3;
                    auArr_66[13] = 0xff;
                    auArr_65._13_3_ = auArr_66._13_3_;
                    auArr_65._8_4_ = 0;
                    auArr_65._0_8_ = uVal_3;
                    auArr_65[12] = (char)(uVal_3 >> 0x30);
                    auArr_64._12_4_ = auArr_65._12_4_;
                    auArr_64._8_3_ = 0;
                    auArr_64._0_8_ = uVal_3;
                    auArr_64[11] = 0xff;
                    auArr_63._11_5_ = auArr_64._11_5_;
                    auArr_63._8_2_ = 0;
                    auArr_63._0_8_ = uVal_3;
                    auArr_63[10] = (char)(uVal_3 >> 0x28);
                    auArr_62._10_6_ = auArr_63._10_6_;
                    auArr_62[8] = 0;
                    auArr_62._0_8_ = uVal_3;
                    auArr_62[9] = 0xff;
                    auArr_61._9_7_ = auArr_62._9_7_;
                    auArr_61[8] = (char)(uVal_3 >> 0x20);
                    auArr_61._0_8_ = uVal_3;
                    auArr_60._8_8_ = auArr_61._8_8_;
                    auArr_60._0_8_ = 0xff00000000000000;
                    auArr_59._7_9_ = auArr_60._7_9_;
                    auArr_59[6] = (char)(uVal_3 >> 0x18);
                    auArr_59._0_6_ = 0xff0000000000;
                    auArr_58._5_11_ = auArr_59._5_11_;
                    auArr_58[4] = (char)(uVal_3 >> 0x10);
                    auArr_58._0_4_ = 0xff000000;
                    auArr_57._3_13_ = auArr_58._3_13_;
                    auArr_57[2] = (char)(uVal_3 >> 8);
                    auArr_57[0] = (uint8_t)uVal_3;
                    auArr_57[1] = 0xff;
                    *(uint8_t (*)[16])(lVal_22 + -0x10 + uVal_23 * 2) = auArr_57;
                    auArr_98._8_6_ = 0;
                    auArr_98._0_8_ = uVal_4;
                    auArr_98[14] = (char)(uVal_4 >> 0x38);
                    auArr_98[15] = 0xff;
                    auArr_97._14_2_ = auArr_98._14_2_;
                    auArr_97._8_5_ = 0;
                    auArr_97._0_8_ = uVal_4;
                    auArr_97[13] = 0xff;
                    auArr_96._13_3_ = auArr_97._13_3_;
                    auArr_96._8_4_ = 0;
                    auArr_96._0_8_ = uVal_4;
                    auArr_96[12] = (char)(uVal_4 >> 0x30);
                    auArr_95._12_4_ = auArr_96._12_4_;
                    auArr_95._8_3_ = 0;
                    auArr_95._0_8_ = uVal_4;
                    auArr_95[11] = 0xff;
                    auArr_94._11_5_ = auArr_95._11_5_;
                    auArr_94._8_2_ = 0;
                    auArr_94._0_8_ = uVal_4;
                    auArr_94[10] = (char)(uVal_4 >> 0x28);
                    auArr_93._10_6_ = auArr_94._10_6_;
                    auArr_93[8] = 0;
                    auArr_93._0_8_ = uVal_4;
                    auArr_93[9] = 0xff;
                    auArr_92._9_7_ = auArr_93._9_7_;
                    auArr_92[8] = (char)(uVal_4 >> 0x20);
                    auArr_92._0_8_ = uVal_4;
                    auArr_91._8_8_ = auArr_92._8_8_;
                    auArr_91._0_8_ = 0xff00000000000000;
                    auArr_90._7_9_ = auArr_91._7_9_;
                    auArr_90[6] = (char)(uVal_4 >> 0x18);
                    auArr_90._0_6_ = 0xff0000000000;
                    auArr_89._5_11_ = auArr_90._5_11_;
                    auArr_89[4] = (char)(uVal_4 >> 0x10);
                    auArr_89._0_4_ = 0xff000000;
                    auArr_88._3_13_ = auArr_89._3_13_;
                    auArr_88[2] = (char)(uVal_4 >> 8);
                    auArr_88[0] = (uint8_t)uVal_4;
                    auArr_88[1] = 0xff;
                    *(uint8_t (*)[16])(lVal_22 + uVal_23 * 2) = auArr_88;
                    uVal_23 = uVal_23 + 0x10;
                  } while (uVal_20 != uVal_23);
                  if (uVal_18 == param_4) break;
                  uVal_23 = uVal_20;
                  if ((param_4 & 0xc) == 0) {
                    pU64_26 = (uint32_t *)((int64_t)pU64_26 + uVal_20 * 2);
                    pU64_37 = (ushort *)((int64_t)pU64_37 + uVal_20);
                    uVal_30 = uVal_41 - uVal_18;
                    goto LAB_1800e4a67;
                  }
                }
                pU64_26 = (uint32_t *)((int64_t)pU64_26 + uVal_33 * 2);
                pU64_37 = (ushort *)((int64_t)pU64_37 + uVal_33);
                do {
                  uVal_30 = *(uint *)(lVal_21 + uVal_23);
                  auArr_79._0_15_ = ZEXT415(uVal_30);
                  auArr_79[15] = 0xff;
                  auArr_78._14_2_ = auArr_79._14_2_;
                  auArr_78._0_13_ = ZEXT413(uVal_30);
                  auArr_78[13] = 0xff;
                  auArr_77._13_3_ = auArr_78._13_3_;
                  auArr_77._0_13_ = ZEXT413(uVal_30);
                  auArr_76._12_4_ = auArr_77._12_4_;
                  auArr_76._4_7_ = 0;
                  auArr_76._0_4_ = uVal_30;
                  auArr_76[11] = 0xff;
                  auArr_75._11_5_ = auArr_76._11_5_;
                  auArr_75._4_7_ = 0;
                  auArr_75._0_4_ = uVal_30;
                  auArr_74._10_6_ = auArr_75._10_6_;
                  auArr_74._4_5_ = 0;
                  auArr_74._0_4_ = uVal_30;
                  auArr_74[9] = 0xff;
                  auArr_73._9_7_ = auArr_74._9_7_;
                  auArr_73._4_5_ = 0;
                  auArr_73._0_4_ = uVal_30;
                  auArr_72._8_8_ = auArr_73._8_8_;
                  auArr_72._0_8_ = 0xff00000000000000;
                  auArr_71._7_9_ = auArr_72._7_9_;
                  auArr_71[6] = (char)(uVal_30 >> 0x18);
                  auArr_71._0_6_ = 0xff0000000000;
                  auArr_70._5_11_ = auArr_71._5_11_;
                  auArr_70[4] = (char)(uVal_30 >> 0x10);
                  auArr_70._0_4_ = uVal_30;
                  auArr_69._4_12_ = auArr_70._4_12_;
                  auArr_69._0_4_ = 0xff000000;
                  auArr_68._3_13_ = auArr_69._3_13_;
                  auArr_68[2] = (char)(uVal_30 >> 8);
                  auArr_68[0] = (uint8_t)uVal_30;
                  auArr_68[1] = 0xff;
                  *(int64_t *)(lVal_31 + uVal_23 * 2) = auArr_68._0_8_;
                  uVal_23 = uVal_23 + 4;
                } while (uVal_33 != uVal_23);
                uVal_30 = uVal_41 - uVal_32;
                if (uVal_32 == param_4) break;
              }
LAB_1800e4a67:
              lVal_31 = 0;
              do {
                *(byte *)((int64_t)pU64_26 + lVal_31 * 2) = *(byte *)((int64_t)pU64_37 + lVal_31);
                *(byte *)((int64_t)pU64_26 + lVal_31 * 2 + 1) = 0xff;
                lVal_31 = lVal_31 + 1;
              } while (uVal_30 + 1 != (int)lVal_31);
            }
            break;
          case 0xb:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 3) != 0) {
                lVal_31 = 0;
                do {
                  bFlag_5 = *(byte *)(lVal_21 + lVal_31);
                  *(byte *)((int64_t)pU64_26 + 2) = bFlag_5;
                  *(byte *)((int64_t)pU64_26 + 1) = bFlag_5;
                  *(byte *)pU64_26 = bFlag_5;
                  pU64_26 = (uint32_t *)((int64_t)pU64_26 + 3);
                  lVal_31 = lVal_31 + 1;
                } while (uVal_34 != (uint)lVal_31);
                pU64_37 = (ushort *)(lVal_21 + lVal_31);
                uVal_30 = uVal_41 - (uint)lVal_31;
              }
              if (2 < uVal_41) {
                pU8_38 = (byte *)((int64_t)pU64_26 + 0xb);
                lVal_31 = 0;
                do {
                  bFlag_5 = *(byte *)((int64_t)pU64_37 + lVal_31);
                  pU8_38[-9] = bFlag_5;
                  pU8_38[-10] = bFlag_5;
                  pU8_38[-0xb] = bFlag_5;
                  bFlag_5 = *(byte *)((int64_t)pU64_37 + lVal_31 + 1);
                  pU8_38[-6] = bFlag_5;
                  pU8_38[-7] = bFlag_5;
                  pU8_38[-8] = bFlag_5;
                  bFlag_5 = *(byte *)((int64_t)pU64_37 + lVal_31 + 2);
                  pU8_38[-3] = bFlag_5;
                  pU8_38[-4] = bFlag_5;
                  pU8_38[-5] = bFlag_5;
                  bFlag_5 = *(byte *)((int64_t)pU64_37 + lVal_31 + 3);
                  *pU8_38 = bFlag_5;
                  pU8_38[-1] = bFlag_5;
                  pU8_38[-2] = bFlag_5;
                  lVal_31 = lVal_31 + 4;
                  pU8_38 = pU8_38 + 0xc;
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
            break;
          case 0xc:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 3) != 0) {
                lVal_31 = 0;
                do {
                  auArr_47._8_8_ = uVal_6;
                  auArr_47._0_8_ =
                       uVal_19 & 0xffffffffffffff00 | (uint64_t)*(byte *)(lVal_21 + lVal_31);
                  auArr_46 = pshufb(auArr_47,auArr_43);
                  *pU64_26 = auArr_46._0_4_;
                  pU64_26 = pU64_26 + 1;
                  lVal_31 = lVal_31 + 1;
                } while (uVal_34 != (uint)lVal_31);
                pU64_37 = (ushort *)(lVal_21 + lVal_31);
                uVal_30 = uVal_41 - (uint)lVal_31;
              }
              if (2 < uVal_41) {
                lVal_31 = 0;
                do {
                  auArr_48._8_4_ = 0xffffffff;
                  auArr_48._0_8_ = 0xffffffffffffffff;
                  auArr_48._12_4_ = 0xffffffff;
                  auArr_49._8_8_ = auArr_48._8_8_;
                  auArr_49._0_8_ =
                       (uint64_t)*(byte *)((int64_t)pU64_37 + lVal_31) | 0xffffffffffffff00;
                  auArr_46 = pshufb(auArr_49,auArr_43);
                  pU64_26[lVal_31] = auArr_46._0_4_;
                  auArr_50._8_4_ = 0xffffffff;
                  auArr_50._0_8_ = 0xffffffffffffffff;
                  auArr_50._12_4_ = 0xffffffff;
                  auArr_51._8_8_ = auArr_50._8_8_;
                  auArr_51._0_8_ =
                       (uint64_t)*(byte *)((int64_t)pU64_37 + lVal_31 + 1) | 0xffffffffffffff00;
                  auArr_46 = pshufb(auArr_51,auArr_43);
                  pU64_26[lVal_31 + 1] = auArr_46._0_4_;
                  auArr_52._8_4_ = 0xffffffff;
                  auArr_52._0_8_ = 0xffffffffffffffff;
                  auArr_52._12_4_ = 0xffffffff;
                  auArr_53._8_8_ = auArr_52._8_8_;
                  auArr_53._0_8_ =
                       (uint64_t)*(byte *)((int64_t)pU64_37 + lVal_31 + 2) | 0xffffffffffffff00;
                  auArr_46 = pshufb(auArr_53,auArr_43);
                  pU64_26[lVal_31 + 2] = auArr_46._0_4_;
                  auArr_54._8_4_ = 0xffffffff;
                  auArr_54._0_8_ = 0xffffffffffffffff;
                  auArr_54._12_4_ = 0xffffffff;
                  auArr_55._8_8_ = auArr_54._8_8_;
                  auArr_55._0_8_ =
                       (uint64_t)*(byte *)((int64_t)pU64_37 + lVal_31 + 3) | 0xffffffffffffff00;
                  auArr_46 = pshufb(auArr_55,auArr_43);
                  pU64_26[lVal_31 + 3] = auArr_46._0_4_;
                  lVal_31 = lVal_31 + 4;
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
            break;
          default:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 1) != 0) {
                *(byte *)pU64_26 = *(byte *)pU64_37;
                *(byte *)((int64_t)pU64_26 + 1) = *(byte *)((int64_t)pU64_37 + 1);
                *(byte *)((int64_t)pU64_26 + 2) = *(byte *)(pU64_37 + 1);
                pU64_37 = pU64_37 + 2;
                pU64_26 = (uint32_t *)((int64_t)pU64_26 + 3);
                uVal_30 = uVal_27;
              }
              if (uVal_41 != 0) {
                lVal_31 = 0;
                do {
                  *(byte *)pU64_26 = *(byte *)(pU64_37 + lVal_31 * 2);
                  *(byte *)((int64_t)pU64_26 + 1) = *(byte *)((int64_t)pU64_37 + lVal_31 * 4 + 1);
                  *(byte *)((int64_t)pU64_26 + 2) = *(byte *)(pU64_37 + lVal_31 * 2 + 1);
                  *(byte *)((int64_t)pU64_26 + 3) = *(byte *)(pU64_37 + lVal_31 * 2 + 2);
                  *(byte *)(pU64_26 + 1) = *(byte *)((int64_t)pU64_37 + lVal_31 * 4 + 5);
                  *(byte *)((int64_t)pU64_26 + 5) = *(byte *)(pU64_37 + lVal_31 * 2 + 3);
                  lVal_31 = lVal_31 + 2;
                  pU64_26 = (uint32_t *)((int64_t)pU64_26 + 6);
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
            break;
          case 0x11:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if (4 < param_4) {
                if (param_4 < 0x11) {
                  lVal_22 = 0;
                }
                else {
                  lVal_22 = 0;
                  do {
                    pU64_1 = (ushort *)(lVal_21 + lVal_22 * 2);
                    pU64_2 = (ushort *)(lVal_21 + 0x10 + lVal_22 * 2);
                    uVal_87 = *pU64_2 & uVal_7;
                    uVal_99 = pU64_2[1] & uVal_8;
                    uVal_100 = pU64_2[2] & uVal_9;
                    uVal_101 = pU64_2[3] & uVal_10;
                    uVal_102 = pU64_2[4] & uVal_11;
                    uVal_103 = pU64_2[5] & uVal_12;
                    uVal_104 = pU64_2[6] & uVal_13;
                    uVal_105 = pU64_2[7] & uVal_14;
                    uVal_45 = *pU64_1 & uVal_7;
                    uVal_80 = pU64_1[1] & uVal_8;
                    uVal_81 = pU64_1[2] & uVal_9;
                    uVal_82 = pU64_1[3] & uVal_10;
                    uVal_83 = pU64_1[4] & uVal_11;
                    uVal_84 = pU64_1[5] & uVal_12;
                    uVal_85 = pU64_1[6] & uVal_13;
                    uVal_86 = pU64_1[7] & uVal_14;
                    auArr_46[1] = (0 < (short)uVal_80) * ((short)uVal_80 < 0xff) * (char)uVal_80 -
                                 (0xff < (short)uVal_80);
                    auArr_46[0] = (0 < (short)uVal_45) * ((short)uVal_45 < 0xff) * (char)uVal_45 -
                                 (0xff < (short)uVal_45);
                    auArr_46[2] = (0 < (short)uVal_81) * ((short)uVal_81 < 0xff) * (char)uVal_81 -
                                 (0xff < (short)uVal_81);
                    auArr_46[3] = (0 < (short)uVal_82) * ((short)uVal_82 < 0xff) * (char)uVal_82 -
                                 (0xff < (short)uVal_82);
                    auArr_46[4] = (0 < (short)uVal_83) * ((short)uVal_83 < 0xff) * (char)uVal_83 -
                                 (0xff < (short)uVal_83);
                    auArr_46[5] = (0 < (short)uVal_84) * ((short)uVal_84 < 0xff) * (char)uVal_84 -
                                 (0xff < (short)uVal_84);
                    auArr_46[6] = (0 < (short)uVal_85) * ((short)uVal_85 < 0xff) * (char)uVal_85 -
                                 (0xff < (short)uVal_85);
                    auArr_46[7] = (0 < (short)uVal_86) * ((short)uVal_86 < 0xff) * (char)uVal_86 -
                                 (0xff < (short)uVal_86);
                    auArr_46[8] = (0 < (short)uVal_87) * ((short)uVal_87 < 0xff) * (char)uVal_87 -
                                 (0xff < (short)uVal_87);
                    auArr_46[9] = (0 < (short)uVal_99) * ((short)uVal_99 < 0xff) * (char)uVal_99 -
                                 (0xff < (short)uVal_99);
                    auArr_46[10] = (0 < (short)uVal_100) * ((short)uVal_100 < 0xff) * (char)uVal_100 -
                                  (0xff < (short)uVal_100);
                    auArr_46[11] = (0 < (short)uVal_101) * ((short)uVal_101 < 0xff) * (char)uVal_101 -
                                  (0xff < (short)uVal_101);
                    auArr_46[12] = (0 < (short)uVal_102) * ((short)uVal_102 < 0xff) * (char)uVal_102 -
                                  (0xff < (short)uVal_102);
                    auArr_46[13] = (0 < (short)uVal_103) * ((short)uVal_103 < 0xff) * (char)uVal_103 -
                                  (0xff < (short)uVal_103);
                    auArr_46[14] = (0 < (short)uVal_104) * ((short)uVal_104 < 0xff) * (char)uVal_104 -
                                  (0xff < (short)uVal_104);
                    auArr_46[15] = (0 < (short)uVal_105) * ((short)uVal_105 < 0xff) * (char)uVal_105 -
                                  (0xff < (short)uVal_105);
                    *(uint8_t (*)[16])(lVal_31 + lVal_22) = auArr_46;
                    lVal_22 = lVal_22 + 0x10;
                  } while (lVal_39 != lVal_22);
                  local_a8 = (uint)uVal_35;
                  lVal_22 = lVal_39;
                  if (local_a8 < 5) {
                    pU64_26 = (uint32_t *)((int64_t)pU64_26 + lVal_39);
                    pU64_37 = pU64_37 + lVal_39;
                    uVal_30 = uVal_41 - (int)lVal_39;
                    goto LAB_1800e499e;
                  }
                }
                pU64_26 = (uint32_t *)((int64_t)pU64_26 + lVal_36);
                pU64_37 = pU64_37 + lVal_36;
                do {
                  auArr_56._8_8_ = 0;
                  auArr_56._0_8_ = *(uint64_t *)(lVal_21 + lVal_22 * 2);
                  auArr_46 = pshufb(auArr_56,auArr_44);
                  *(int *)(lVal_31 + lVal_22) = auArr_46._0_4_;
                  lVal_22 = lVal_22 + 4;
                  uVal_30 = uVal_41 - (int)lVal_36;
                } while (lVal_36 != lVal_22);
              }
LAB_1800e499e:
              lVal_31 = 0;
              do {
                *(byte *)((int64_t)pU64_26 + lVal_31) = *(byte *)(pU64_37 + lVal_31);
                lVal_31 = lVal_31 + 1;
              } while (uVal_30 + 1 != (int)lVal_31);
            }
            break;
          case 0x13:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 3) != 0) {
                lVal_21 = 0;
                do {
                  bFlag_5 = *(byte *)pU64_37;
                  *(byte *)(lVal_31 + 2 + lVal_21) = bFlag_5;
                  *(byte *)(lVal_31 + 1 + lVal_21) = bFlag_5;
                  *(byte *)(lVal_31 + lVal_21) = bFlag_5;
                  pU64_37 = pU64_37 + 1;
                  uVal_30 = uVal_30 - 1;
                  lVal_21 = lVal_21 + 3;
                } while ((param_4 & 3) * 3 != (int)lVal_21);
                pU64_26 = (uint32_t *)(lVal_31 + lVal_21);
              }
              if (2 < uVal_41) {
                pU8_38 = (byte *)((int64_t)pU64_26 + 0xb);
                lVal_31 = 0;
                do {
                  bFlag_5 = *(byte *)(pU64_37 + lVal_31);
                  pU8_38[-9] = bFlag_5;
                  pU8_38[-10] = bFlag_5;
                  pU8_38[-0xb] = bFlag_5;
                  bFlag_5 = *(byte *)(pU64_37 + lVal_31 + 1);
                  pU8_38[-6] = bFlag_5;
                  pU8_38[-7] = bFlag_5;
                  pU8_38[-8] = bFlag_5;
                  bFlag_5 = *(byte *)(pU64_37 + lVal_31 + 2);
                  pU8_38[-3] = bFlag_5;
                  pU8_38[-4] = bFlag_5;
                  pU8_38[-5] = bFlag_5;
                  bFlag_5 = *(byte *)(pU64_37 + lVal_31 + 3);
                  *pU8_38 = bFlag_5;
                  pU8_38[-1] = bFlag_5;
                  pU8_38[-2] = bFlag_5;
                  lVal_31 = lVal_31 + 4;
                  pU8_38 = pU8_38 + 0xc;
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
            break;
          case 0x14:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 3) != 0) {
                uVal_30 = 0;
                do {
                  auArr_46 = pshufb(ZEXT216(*pU64_37),auArr_43);
                  *pU64_26 = auArr_46._0_4_;
                  pU64_37 = pU64_37 + 1;
                  pU64_26 = pU64_26 + 1;
                  uVal_30 = uVal_30 + 1;
                } while ((param_4 & 3) != uVal_30);
                uVal_30 = uVal_41 - uVal_30;
              }
              if (2 < uVal_41) {
                lVal_31 = 0;
                do {
                  auArr_46 = pshufb(ZEXT216(pU64_37[lVal_31]),auArr_43);
                  pU64_26[lVal_31] = auArr_46._0_4_;
                  auArr_46 = pshufb(ZEXT216(pU64_37[lVal_31 + 1]),auArr_43);
                  pU64_26[lVal_31 + 1] = auArr_46._0_4_;
                  auArr_46 = pshufb(ZEXT216(pU64_37[lVal_31 + 2]),auArr_43);
                  pU64_26[lVal_31 + 2] = auArr_46._0_4_;
                  auArr_46 = pshufb(ZEXT216(pU64_37[lVal_31 + 3]),auArr_43);
                  pU64_26[lVal_31 + 3] = auArr_46._0_4_;
                  lVal_31 = lVal_31 + 4;
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
            break;
          case 0x19:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 1) != 0) {
                bFlag_5 = *(byte *)(pU64_37 + 1);
                *(byte *)pU64_26 =
                     (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                            (uint)*(byte *)((int64_t)pU64_37 + 1) * 0x96 +
                            (uint)*(byte *)pU64_37 * 0x4d >> 8);
                pU64_37 = (ushort *)((int64_t)pU64_37 + 3);
                pU64_26 = (uint32_t *)((int64_t)pU64_26 + 1);
                uVal_30 = uVal_27;
              }
              if (uVal_41 != 0) {
                pU8_38 = (byte *)((int64_t)pU64_37 + 5);
                lVal_31 = 0;
                do {
                  bFlag_5 = pU8_38[-3];
                  *(byte *)((int64_t)pU64_26 + lVal_31) =
                       (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                              (uint)pU8_38[-4] * 0x96 + (uint)pU8_38[-5] * 0x4d >> 8);
                  bFlag_5 = *pU8_38;
                  *(byte *)((int64_t)pU64_26 + lVal_31 + 1) =
                       (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                              (uint)pU8_38[-1] * 0x96 + (uint)pU8_38[-2] * 0x4d >> 8);
                  lVal_31 = lVal_31 + 2;
                  pU8_38 = pU8_38 + 6;
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
            break;
          case 0x1a:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 1) != 0) {
                bFlag_5 = *(byte *)(pU64_37 + 1);
                *(byte *)pU64_26 =
                     (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                            (uint)*(byte *)((int64_t)pU64_37 + 1) * 0x96 +
                            (uint)*(byte *)pU64_37 * 0x4d >> 8);
                *(byte *)((int64_t)pU64_26 + 1) = 0xff;
                pU64_37 = (ushort *)((int64_t)pU64_37 + 3);
                pU64_26 = (uint32_t *)((int64_t)pU64_26 + 2);
                uVal_30 = uVal_27;
              }
              if (uVal_41 != 0) {
                pU8_38 = (byte *)((int64_t)pU64_37 + 5);
                lVal_31 = 0;
                do {
                  bFlag_5 = pU8_38[-3];
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 2) =
                       (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                              (uint)pU8_38[-4] * 0x96 + (uint)pU8_38[-5] * 0x4d >> 8);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 2 + 1) = 0xff;
                  bFlag_5 = *pU8_38;
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 2 + 2) =
                       (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                              (uint)pU8_38[-1] * 0x96 + (uint)pU8_38[-2] * 0x4d >> 8);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 2 + 3) = 0xff;
                  lVal_31 = lVal_31 + 2;
                  pU8_38 = pU8_38 + 6;
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
            break;
          case 0x1c:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 1) != 0) {
                *(byte *)pU64_26 = *(byte *)pU64_37;
                *(byte *)((int64_t)pU64_26 + 1) = *(byte *)((int64_t)pU64_37 + 1);
                *(byte *)((int64_t)pU64_26 + 2) = *(byte *)(pU64_37 + 1);
                *(byte *)((int64_t)pU64_26 + 3) = 0xff;
                pU64_37 = (ushort *)((int64_t)pU64_37 + 3);
                pU64_26 = pU64_26 + 1;
                uVal_30 = uVal_27;
              }
              if (uVal_41 != 0) {
                lVal_31 = 0;
                do {
                  *(byte *)(pU64_26 + lVal_31) = *(byte *)pU64_37;
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 4 + 1) = *(byte *)((int64_t)pU64_37 + 1);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 4 + 2) = *(byte *)(pU64_37 + 1);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 4 + 3) = 0xff;
                  *(byte *)(pU64_26 + lVal_31 + 1) = *(byte *)((int64_t)pU64_37 + 3);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 4 + 5) = *(byte *)(pU64_37 + 2);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 4 + 6) = *(byte *)((int64_t)pU64_37 + 5);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 4 + 7) = 0xff;
                  lVal_31 = lVal_31 + 2;
                  pU64_37 = pU64_37 + 3;
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
            break;
          case 0x21:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 1) != 0) {
                bFlag_5 = *(byte *)(pU64_37 + 1);
                *(byte *)pU64_26 =
                     (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                            (uint)*(byte *)((int64_t)pU64_37 + 1) * 0x96 +
                            (uint)*(byte *)pU64_37 * 0x4d >> 8);
                pU64_37 = pU64_37 + 2;
                pU64_26 = (uint32_t *)((int64_t)pU64_26 + 1);
                uVal_30 = uVal_27;
              }
              if (uVal_41 != 0) {
                lVal_31 = 0;
                do {
                  bFlag_5 = *(byte *)(pU64_37 + lVal_31 * 2 + 1);
                  *(byte *)((int64_t)pU64_26 + lVal_31) =
                       (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                              (uint)*(byte *)((int64_t)pU64_37 + lVal_31 * 4 + 1) * 0x96 +
                              (uint)*(byte *)(pU64_37 + lVal_31 * 2) * 0x4d >> 8);
                  bFlag_5 = *(byte *)(pU64_37 + lVal_31 * 2 + 3);
                  *(byte *)((int64_t)pU64_26 + lVal_31 + 1) =
                       (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                              (uint)*(byte *)((int64_t)pU64_37 + lVal_31 * 4 + 5) * 0x96 +
                              (uint)*(byte *)(pU64_37 + lVal_31 * 2 + 2) * 0x4d >> 8);
                  lVal_31 = lVal_31 + 2;
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
            break;
          case 0x22:
            if (-1 < (int)uVal_41) {
              uVal_30 = uVal_41;
              if ((param_4 & 1) != 0) {
                bFlag_5 = *(byte *)(pU64_37 + 1);
                *(byte *)pU64_26 =
                     (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                            (uint)*(byte *)((int64_t)pU64_37 + 1) * 0x96 +
                            (uint)*(byte *)pU64_37 * 0x4d >> 8);
                *(byte *)((int64_t)pU64_26 + 1) = *(byte *)((int64_t)pU64_37 + 3);
                pU64_37 = pU64_37 + 2;
                pU64_26 = (uint32_t *)((int64_t)pU64_26 + 2);
                uVal_30 = uVal_27;
              }
              if (uVal_41 != 0) {
                lVal_31 = 0;
                do {
                  bFlag_5 = *(byte *)(pU64_37 + lVal_31 * 2 + 1);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 2) =
                       (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                              (uint)*(byte *)((int64_t)pU64_37 + lVal_31 * 4 + 1) * 0x96 +
                              (uint)*(byte *)(pU64_37 + lVal_31 * 2) * 0x4d >> 8);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 2 + 1) =
                       *(byte *)((int64_t)pU64_37 + lVal_31 * 4 + 3);
                  bFlag_5 = *(byte *)(pU64_37 + lVal_31 * 2 + 3);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 2 + 2) =
                       (byte)((uint)bFlag_5 * 2 + ((uint)bFlag_5 + (uint)bFlag_5 * 8) * 3 +
                              (uint)*(byte *)((int64_t)pU64_37 + lVal_31 * 4 + 5) * 0x96 +
                              (uint)*(byte *)(pU64_37 + lVal_31 * 2 + 2) * 0x4d >> 8);
                  *(byte *)((int64_t)pU64_26 + lVal_31 * 2 + 3) =
                       *(byte *)((int64_t)pU64_37 + lVal_31 * 4 + 7);
                  lVal_31 = lVal_31 + 2;
                } while (uVal_30 + 1 != (int)lVal_31);
              }
            }
          }
          uVal_28 = uVal_28 + 1;
          uVal_24 = uVal_24 + uVal_17;
          uVal_40 = uVal_40 + param_4 * param_2;
        } while (uVal_28 != param_5);
        goto LAB_1800e4af8;
      }
      thunk_FUN_180695dd0();
      thunk_FUN_180695dd0(lVal_15);
      lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_16 = "unsupported";
      goto LAB_1800e4ad3;
    }
  }
  thunk_FUN_180695dd0();
  lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_16 = "outofmem";
LAB_1800e4ad3:
  *(char **)(lVal_15 + 0x3010) = fnPtr_16;
  return 0;
}

// func_0x1800e4b40
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1800e4b40(int64_t param_1,int param_2,int param_3,uint param_4,uint param_5)
{
  uint64_t uVal_1;
  ushort uVal_2;
  uint16_t uVal_3;
  uint8_t auArr_4 [16];
  uint64_t uVal_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint uVal_8;
  char *fnPtr_9;
  uint uVal_10;
  uint uVal_11;
  uint uVal_12;
  int64_t lVal_13;
  int64_t lVal_14;
  int64_t lVal_15;
  uint64_t uVal_16;
  uint uVal_17;
  uint uVal_18;
  uint64_t uVal_19;
  uint uVal_20;
  int iVal_21;
  uint64_t uVal_22;
  int64_t lVal_23;
  int64_t lVal_24;
  uint32_t *pU64_25;
  ushort *pU64_26;
  uint32_t *pU64_27;
  uint16_t *pU64_28;
  uint uVal_29;
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
  uint8_t auArr_44 [16];
  uint8_t auArr_45 [16];
  uint8_t auArr_40 [16];
  uint8_t auArr_41 [16];
  uint8_t auArr_42 [16];
  uint8_t auArr_43 [16];
  uint8_t auArr_46 [16];
  uint8_t auArr_47 [16];
  uint8_t auArr_48 [16];
  uint8_t auArr_49 [16];
  
  if (param_3 == param_2) {
    return param_1;
  }
  lVal_7 = _malloc_base(param_3 * param_4 * param_5 * 2);
  uVal_6 = _UNK_1806b29f8;
  uVal_5 = _DAT_1806b29f0;
  auArr_4 = _DAT_1806b29e0;
  if (lVal_7 == 0) {
    thunk_FUN_180695dd0(param_1);
    lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_9 = "outofmem";
LAB_1800e58a3:
    *(char **)(lVal_7 + 0x3010) = fnPtr_9;
    lVal_7 = 0;
  }
  else {
    if (0 < (int)param_5) {
      uVal_17 = param_3 + param_2 * 8;
      if ((0x23 < uVal_17) || ((0xe161a1c00U >> ((uint64_t)uVal_17 & 0x3f) & 1) == 0)) {
        thunk_FUN_180695dd0(param_1);
        thunk_FUN_180695dd0(lVal_7);
        lVal_7 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        fnPtr_9 = "unsupported";
        goto LAB_1800e58a3;
      }
      uVal_8 = param_4 - 1;
      uVal_10 = param_4 - 2;
      uVal_22 = 8;
      if ((param_4 & 7) != 0) {
        uVal_22 = (uint64_t)(param_4 & 7);
      }
      lVal_13 = param_4 - uVal_22;
      uVal_11 = param_4 & 0xfffffff8;
      uVal_20 = param_4 & 3;
      uVal_22 = 0;
      uVal_29 = 0;
      uVal_12 = 0;
      do {
        iVal_21 = param_4 * (int)uVal_22;
        pU64_25 = (uint32_t *)(param_1 + (uint64_t)(uint)(iVal_21 * param_2) * 2);
        pU64_27 = (uint32_t *)(lVal_7 + (uint64_t)(uint)(iVal_21 * param_3) * 2);
        uVal_19 = (uint64_t)uVal_29;
        uVal_16 = (uint64_t)uVal_12;
        lVal_23 = lVal_7 + uVal_16 * 2;
        lVal_14 = param_1 + uVal_19 * 2;
        switch(uVal_17) {
        case 10:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if (7 < param_4) {
              lVal_23 = param_1 + 8 + uVal_19 * 2;
              lVal_14 = lVal_7 + 0x10 + uVal_16 * 2;
              pU64_27 = pU64_27 + uVal_11;
              pU64_25 = (uint32_t *)((int64_t)pU64_25 + (uint64_t)uVal_11 * 2);
              uVal_16 = 0;
              do {
                uVal_19 = *(uint64_t *)(lVal_23 + -8 + uVal_16);
                uVal_1 = *(uint64_t *)(lVal_23 + uVal_16);
                auArr_43._8_4_ = 0;
                auArr_43._0_8_ = uVal_19;
                auArr_43._12_2_ = (short)(uVal_19 >> 0x30);
                auArr_43._14_2_ = 0xffff;
                auArr_42._12_4_ = auArr_43._12_4_;
                auArr_42._8_2_ = 0;
                auArr_42._0_8_ = uVal_19;
                auArr_42._10_2_ = 0xffff;
                auArr_41._10_6_ = auArr_42._10_6_;
                auArr_41._8_2_ = (short)(uVal_19 >> 0x20);
                auArr_41._0_8_ = uVal_19;
                auArr_40._8_8_ = auArr_41._8_8_;
                auArr_40._0_8_ = 0xffff000000000000;
                auArr_39._6_10_ = auArr_40._6_10_;
                auArr_39._4_2_ = (short)(uVal_19 >> 0x10);
                auArr_39._0_2_ = (uint16_t)uVal_19;
                auArr_39._2_2_ = 0xffff;
                *(uint8_t (*)[16])(lVal_14 + -0x10 + uVal_16 * 2) = auArr_39;
                auArr_49._8_4_ = 0;
                auArr_49._0_8_ = uVal_1;
                auArr_49._12_2_ = (short)(uVal_1 >> 0x30);
                auArr_49._14_2_ = 0xffff;
                auArr_48._12_4_ = auArr_49._12_4_;
                auArr_48._8_2_ = 0;
                auArr_48._0_8_ = uVal_1;
                auArr_48._10_2_ = 0xffff;
                auArr_47._10_6_ = auArr_48._10_6_;
                auArr_47._8_2_ = (short)(uVal_1 >> 0x20);
                auArr_47._0_8_ = uVal_1;
                auArr_46._8_8_ = auArr_47._8_8_;
                auArr_46._0_8_ = 0xffff000000000000;
                auArr_45._6_10_ = auArr_46._6_10_;
                auArr_45._4_2_ = (short)(uVal_1 >> 0x10);
                auArr_45._0_2_ = (uint16_t)uVal_1;
                auArr_45._2_2_ = 0xffff;
                *(uint8_t (*)[16])(lVal_14 + uVal_16 * 2) = auArr_45;
                uVal_16 = uVal_16 + 0x10;
              } while (((uint64_t)param_4 * 2 & 0xfffffffffffffff0) != uVal_16);
              uVal_18 = uVal_8 - uVal_11;
              if (uVal_11 == param_4) break;
            }
            lVal_23 = 0;
            do {
              *(ushort *)(pU64_27 + lVal_23) = *(ushort *)((int64_t)pU64_25 + lVal_23 * 2);
              *(uint16_t *)((int64_t)pU64_27 + lVal_23 * 4 + 2) = 0xffff;
              lVal_23 = lVal_23 + 1;
            } while (uVal_18 + 1 != (int)lVal_23);
          }
          break;
        case 0xb:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 3) != 0) {
              lVal_14 = 0;
              do {
                uVal_2 = *(ushort *)pU64_25;
                *(ushort *)(lVal_23 + 4 + lVal_14) = uVal_2;
                *(ushort *)(lVal_23 + 2 + lVal_14) = uVal_2;
                *(ushort *)(lVal_23 + lVal_14) = uVal_2;
                pU64_25 = (uint32_t *)((int64_t)pU64_25 + 2);
                uVal_18 = uVal_18 - 1;
                lVal_14 = lVal_14 + 6;
              } while (uVal_20 * 6 != (int)lVal_14);
              pU64_27 = (uint32_t *)(lVal_23 + lVal_14);
            }
            if (2 < uVal_8) {
              pU64_28 = (uint16_t *)((int64_t)pU64_27 + 0x16);
              lVal_23 = 0;
              do {
                uVal_2 = *(ushort *)((int64_t)pU64_25 + lVal_23 * 2);
                pU64_28[-9] = uVal_2;
                pU64_28[-10] = uVal_2;
                pU64_28[-0xb] = uVal_2;
                uVal_3 = *(uint16_t *)((int64_t)pU64_25 + lVal_23 * 2 + 2);
                pU64_28[-6] = uVal_3;
                pU64_28[-7] = uVal_3;
                pU64_28[-8] = uVal_3;
                uVal_3 = *(uint16_t *)((int64_t)pU64_25 + lVal_23 * 2 + 4);
                pU64_28[-3] = uVal_3;
                pU64_28[-4] = uVal_3;
                pU64_28[-5] = uVal_3;
                uVal_3 = *(uint16_t *)((int64_t)pU64_25 + lVal_23 * 2 + 6);
                *pU64_28 = uVal_3;
                pU64_28[-1] = uVal_3;
                pU64_28[-2] = uVal_3;
                lVal_23 = lVal_23 + 4;
                pU64_28 = pU64_28 + 0xc;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
          break;
        case 0xc:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 3) != 0) {
              lVal_24 = 0;
              lVal_15 = 0;
              do {
                auArr_44._8_8_ = uVal_6;
                auArr_44._0_8_ = uVal_5 & 0xffffffffffff0000 | (uint64_t)*(ushort *)(lVal_14 + lVal_24)
                ;
                auArr_30 = pshuflw(auArr_44,auArr_44,0x40);
                *(int64_t *)(lVal_23 + lVal_24 * 4) = auArr_30._0_8_;
                uVal_18 = uVal_18 - 1;
                lVal_15 = lVal_15 + -8;
                lVal_24 = lVal_24 + 2;
              } while (uVal_20 * 2 != (int)lVal_24);
              pU64_27 = (uint32_t *)(lVal_23 - lVal_15);
              pU64_25 = (uint32_t *)(lVal_14 + lVal_24);
            }
            if (2 < uVal_8) {
              lVal_23 = 0;
              do {
                auArr_31._8_4_ = 0xffffffff;
                auArr_31._0_8_ = 0xffffffffffffffff;
                auArr_31._12_4_ = 0xffffffff;
                auArr_32._8_8_ = auArr_31._8_8_;
                auArr_32._0_8_ =
                     (uint64_t)*(ushort *)((int64_t)pU64_25 + lVal_23 * 2) | 0xffffffffffff0000;
                auArr_30 = pshuflw(auArr_32,auArr_32,0x40);
                *(int64_t *)(pU64_27 + lVal_23 * 2) = auArr_30._0_8_;
                auArr_33._8_4_ = 0xffffffff;
                auArr_33._0_8_ = 0xffffffffffffffff;
                auArr_33._12_4_ = 0xffffffff;
                auArr_34._8_8_ = auArr_33._8_8_;
                auArr_34._0_8_ =
                     (uint64_t)*(ushort *)((int64_t)pU64_25 + lVal_23 * 2 + 2) | 0xffffffffffff0000
                ;
                auArr_30 = pshuflw(auArr_34,auArr_34,0x40);
                *(int64_t *)(pU64_27 + lVal_23 * 2 + 2) = auArr_30._0_8_;
                auArr_35._8_4_ = 0xffffffff;
                auArr_35._0_8_ = 0xffffffffffffffff;
                auArr_35._12_4_ = 0xffffffff;
                auArr_36._8_8_ = auArr_35._8_8_;
                auArr_36._0_8_ =
                     (uint64_t)*(ushort *)((int64_t)pU64_25 + lVal_23 * 2 + 4) | 0xffffffffffff0000
                ;
                auArr_30 = pshuflw(auArr_36,auArr_36,0x40);
                *(int64_t *)(pU64_27 + lVal_23 * 2 + 4) = auArr_30._0_8_;
                auArr_37._8_4_ = 0xffffffff;
                auArr_37._0_8_ = 0xffffffffffffffff;
                auArr_37._12_4_ = 0xffffffff;
                auArr_38._8_8_ = auArr_37._8_8_;
                auArr_38._0_8_ =
                     (uint64_t)*(ushort *)((int64_t)pU64_25 + lVal_23 * 2 + 6) | 0xffffffffffff0000
                ;
                auArr_30 = pshuflw(auArr_38,auArr_38,0x40);
                *(int64_t *)(pU64_27 + lVal_23 * 2 + 6) = auArr_30._0_8_;
                lVal_23 = lVal_23 + 4;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
          break;
        default:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 3) != 0) {
              uVal_18 = 0;
              do {
                *pU64_27 = *pU64_25;
                *(ushort *)(pU64_27 + 1) = *(ushort *)(pU64_25 + 1);
                pU64_25 = pU64_25 + 2;
                pU64_27 = (uint32_t *)((int64_t)pU64_27 + 6);
                uVal_18 = uVal_18 + 1;
              } while (uVal_20 != uVal_18);
              uVal_18 = uVal_8 - uVal_18;
            }
            if (2 < uVal_8) {
              lVal_23 = 0;
              do {
                *pU64_27 = pU64_25[lVal_23 * 2];
                *(ushort *)(pU64_27 + 1) = *(ushort *)(pU64_25 + lVal_23 * 2 + 1);
                *(uint32_t *)((int64_t)pU64_27 + 6) = pU64_25[lVal_23 * 2 + 2];
                *(ushort *)((int64_t)pU64_27 + 10) = *(ushort *)(pU64_25 + lVal_23 * 2 + 3);
                pU64_27[3] = pU64_25[lVal_23 * 2 + 4];
                *(ushort *)(pU64_27 + 4) = *(ushort *)(pU64_25 + lVal_23 * 2 + 5);
                *(uint32_t *)((int64_t)pU64_27 + 0x12) = pU64_25[lVal_23 * 2 + 6];
                *(ushort *)((int64_t)pU64_27 + 0x16) = *(ushort *)(pU64_25 + lVal_23 * 2 + 7);
                lVal_23 = lVal_23 + 4;
                pU64_27 = pU64_27 + 6;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
          break;
        case 0x11:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if (8 < param_4) {
              lVal_23 = param_1 + 0x10 + uVal_19 * 2;
              pU64_27 = (uint32_t *)((int64_t)pU64_27 + lVal_13 * 2);
              pU64_25 = pU64_25 + lVal_13;
              lVal_14 = 0;
              do {
                auArr_30 = pshufb(*(uint8_t (*)[16])(lVal_23 + -0x10 + lVal_14 * 4),auArr_4);
                auArr_44 = pshufb(*(uint8_t (*)[16])(lVal_23 + lVal_14 * 4),auArr_4);
                auArr_30._8_8_ = auArr_44._0_8_;
                *(uint8_t (*)[16])(lVal_7 + uVal_16 * 2 + lVal_14 * 2) = auArr_30;
                lVal_14 = lVal_14 + 8;
                uVal_18 = uVal_8 - (int)lVal_13;
              } while (lVal_13 != lVal_14);
            }
            lVal_23 = 0;
            do {
              *(ushort *)((int64_t)pU64_27 + lVal_23 * 2) = *(ushort *)(pU64_25 + lVal_23);
              lVal_23 = lVal_23 + 1;
            } while (uVal_18 + 1 != (int)lVal_23);
          }
          break;
        case 0x13:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 3) != 0) {
              lVal_14 = 0;
              do {
                uVal_2 = *(ushort *)pU64_25;
                *(ushort *)(lVal_23 + 4 + lVal_14) = uVal_2;
                *(ushort *)(lVal_23 + 2 + lVal_14) = uVal_2;
                *(ushort *)(lVal_23 + lVal_14) = uVal_2;
                pU64_25 = pU64_25 + 1;
                uVal_18 = uVal_18 - 1;
                lVal_14 = lVal_14 + 6;
              } while (uVal_20 * 6 != (int)lVal_14);
              pU64_27 = (uint32_t *)(lVal_23 + lVal_14);
            }
            if (2 < uVal_8) {
              pU64_26 = (ushort *)((int64_t)pU64_27 + 0x16);
              lVal_23 = 0;
              do {
                uVal_2 = *(ushort *)(pU64_25 + lVal_23);
                pU64_26[-9] = uVal_2;
                pU64_26[-10] = uVal_2;
                pU64_26[-0xb] = uVal_2;
                uVal_2 = *(ushort *)(pU64_25 + lVal_23 + 1);
                pU64_26[-6] = uVal_2;
                pU64_26[-7] = uVal_2;
                pU64_26[-8] = uVal_2;
                uVal_2 = *(ushort *)(pU64_25 + lVal_23 + 2);
                pU64_26[-3] = uVal_2;
                pU64_26[-4] = uVal_2;
                pU64_26[-5] = uVal_2;
                uVal_2 = *(ushort *)(pU64_25 + lVal_23 + 3);
                *pU64_26 = uVal_2;
                pU64_26[-1] = uVal_2;
                pU64_26[-2] = uVal_2;
                lVal_23 = lVal_23 + 4;
                pU64_26 = pU64_26 + 0xc;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
          break;
        case 0x14:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 3) != 0) {
              lVal_15 = 0;
              lVal_24 = 0;
              do {
                auArr_30 = pshuflw(ZEXT416(*(uint *)(lVal_14 + lVal_15)),
                                  ZEXT416(*(uint *)(lVal_14 + lVal_15)),0x40);
                *(int64_t *)(lVal_23 + lVal_15 * 2) = auArr_30._0_8_;
                uVal_18 = uVal_18 - 1;
                lVal_24 = lVal_24 + -8;
                lVal_15 = lVal_15 + 4;
              } while (uVal_20 * 4 != (int)lVal_15);
              pU64_27 = (uint32_t *)(lVal_23 - lVal_24);
              pU64_25 = (uint32_t *)(lVal_14 + lVal_15);
            }
            if (2 < uVal_8) {
              lVal_23 = 0;
              do {
                auArr_30 = pshuflw(ZEXT416((uint)pU64_25[lVal_23]),ZEXT416((uint)pU64_25[lVal_23]),0x40
                                 );
                *(int64_t *)(pU64_27 + lVal_23 * 2) = auArr_30._0_8_;
                auArr_30 = pshuflw(ZEXT416((uint)pU64_25[lVal_23 + 1]),
                                  ZEXT416((uint)pU64_25[lVal_23 + 1]),0x40);
                *(int64_t *)(pU64_27 + lVal_23 * 2 + 2) = auArr_30._0_8_;
                auArr_30 = pshuflw(ZEXT416((uint)pU64_25[lVal_23 + 2]),
                                  ZEXT416((uint)pU64_25[lVal_23 + 2]),0x40);
                *(int64_t *)(pU64_27 + lVal_23 * 2 + 4) = auArr_30._0_8_;
                auArr_30 = pshuflw(ZEXT416((uint)pU64_25[lVal_23 + 3]),
                                  ZEXT416((uint)pU64_25[lVal_23 + 3]),0x40);
                *(int64_t *)(pU64_27 + lVal_23 * 2 + 6) = auArr_30._0_8_;
                lVal_23 = lVal_23 + 4;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
          break;
        case 0x19:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 1) != 0) {
              uVal_2 = *(ushort *)(pU64_25 + 1);
              *(short *)pU64_27 =
                   (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                           (uint)*(ushort *)((int64_t)pU64_25 + 2) * 0x96 +
                           (uint)*(ushort *)pU64_25 * 0x4d >> 8);
              pU64_25 = (uint32_t *)((int64_t)pU64_25 + 6);
              pU64_27 = (uint32_t *)((int64_t)pU64_27 + 2);
              uVal_18 = uVal_10;
            }
            if (uVal_8 != 0) {
              pU64_26 = (ushort *)((int64_t)pU64_25 + 10);
              lVal_23 = 0;
              do {
                uVal_2 = pU64_26[-3];
                *(short *)((int64_t)pU64_27 + lVal_23 * 2) =
                     (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                             (uint)pU64_26[-4] * 0x96 + (uint)pU64_26[-5] * 0x4d >> 8);
                uVal_2 = *pU64_26;
                *(short *)((int64_t)pU64_27 + lVal_23 * 2 + 2) =
                     (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                             (uint)pU64_26[-1] * 0x96 + (uint)pU64_26[-2] * 0x4d >> 8);
                lVal_23 = lVal_23 + 2;
                pU64_26 = pU64_26 + 6;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
          break;
        case 0x1a:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 1) != 0) {
              uVal_2 = *(ushort *)(pU64_25 + 1);
              *(short *)pU64_27 =
                   (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                           (uint)*(ushort *)((int64_t)pU64_25 + 2) * 0x96 +
                           (uint)*(ushort *)pU64_25 * 0x4d >> 8);
              *(uint16_t *)((int64_t)pU64_27 + 2) = 0xffff;
              pU64_25 = (uint32_t *)((int64_t)pU64_25 + 6);
              pU64_27 = pU64_27 + 1;
              uVal_18 = uVal_10;
            }
            if (uVal_8 != 0) {
              pU64_26 = (ushort *)((int64_t)pU64_25 + 10);
              lVal_23 = 0;
              do {
                uVal_2 = pU64_26[-3];
                *(short *)(pU64_27 + lVal_23) =
                     (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                             (uint)pU64_26[-4] * 0x96 + (uint)pU64_26[-5] * 0x4d >> 8);
                *(uint16_t *)((int64_t)pU64_27 + lVal_23 * 4 + 2) = 0xffff;
                uVal_2 = *pU64_26;
                *(short *)(pU64_27 + lVal_23 + 1) =
                     (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                             (uint)pU64_26[-1] * 0x96 + (uint)pU64_26[-2] * 0x4d >> 8);
                *(uint16_t *)((int64_t)pU64_27 + lVal_23 * 4 + 6) = 0xffff;
                lVal_23 = lVal_23 + 2;
                pU64_26 = pU64_26 + 6;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
          break;
        case 0x1c:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 3) != 0) {
              uVal_18 = 0;
              do {
                *pU64_27 = *pU64_25;
                *(ushort *)(pU64_27 + 1) = *(ushort *)(pU64_25 + 1);
                *(uint16_t *)((int64_t)pU64_27 + 6) = 0xffff;
                pU64_25 = (uint32_t *)((int64_t)pU64_25 + 6);
                pU64_27 = pU64_27 + 2;
                uVal_18 = uVal_18 + 1;
              } while (uVal_20 != uVal_18);
              uVal_18 = uVal_8 - uVal_18;
            }
            if (2 < uVal_8) {
              lVal_23 = 0;
              do {
                pU64_27[lVal_23 * 2] = *pU64_25;
                *(ushort *)(pU64_27 + lVal_23 * 2 + 1) = *(ushort *)(pU64_25 + 1);
                *(uint16_t *)((int64_t)pU64_27 + lVal_23 * 8 + 6) = 0xffff;
                pU64_27[lVal_23 * 2 + 2] = *(uint32_t *)((int64_t)pU64_25 + 6);
                *(ushort *)(pU64_27 + lVal_23 * 2 + 3) = *(ushort *)((int64_t)pU64_25 + 10);
                *(uint16_t *)((int64_t)pU64_27 + lVal_23 * 8 + 0xe) = 0xffff;
                pU64_27[lVal_23 * 2 + 4] = pU64_25[3];
                *(ushort *)(pU64_27 + lVal_23 * 2 + 5) = *(ushort *)(pU64_25 + 4);
                *(uint16_t *)((int64_t)pU64_27 + lVal_23 * 8 + 0x16) = 0xffff;
                pU64_27[lVal_23 * 2 + 6] = *(uint32_t *)((int64_t)pU64_25 + 0x12);
                *(ushort *)(pU64_27 + lVal_23 * 2 + 7) = *(ushort *)((int64_t)pU64_25 + 0x16);
                *(uint16_t *)((int64_t)pU64_27 + lVal_23 * 8 + 0x1e) = 0xffff;
                lVal_23 = lVal_23 + 4;
                pU64_25 = pU64_25 + 6;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
          break;
        case 0x21:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 1) != 0) {
              uVal_2 = *(ushort *)(pU64_25 + 1);
              *(short *)pU64_27 =
                   (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                           (uint)*(ushort *)((int64_t)pU64_25 + 2) * 0x96 +
                           (uint)*(ushort *)pU64_25 * 0x4d >> 8);
              pU64_25 = pU64_25 + 2;
              pU64_27 = (uint32_t *)((int64_t)pU64_27 + 2);
              uVal_18 = uVal_10;
            }
            if (uVal_8 != 0) {
              lVal_23 = 0;
              do {
                uVal_2 = *(ushort *)(pU64_25 + lVal_23 * 2 + 1);
                *(short *)((int64_t)pU64_27 + lVal_23 * 2) =
                     (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                             (uint)*(ushort *)((int64_t)pU64_25 + lVal_23 * 8 + 2) * 0x96 +
                             (uint)*(ushort *)(pU64_25 + lVal_23 * 2) * 0x4d >> 8);
                uVal_2 = *(ushort *)(pU64_25 + lVal_23 * 2 + 3);
                *(short *)((int64_t)pU64_27 + lVal_23 * 2 + 2) =
                     (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                             (uint)*(ushort *)((int64_t)pU64_25 + lVal_23 * 8 + 10) * 0x96 +
                             (uint)*(ushort *)(pU64_25 + lVal_23 * 2 + 2) * 0x4d >> 8);
                lVal_23 = lVal_23 + 2;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
          break;
        case 0x22:
          if (-1 < (int)uVal_8) {
            uVal_18 = uVal_8;
            if ((param_4 & 1) != 0) {
              uVal_2 = *(ushort *)(pU64_25 + 1);
              *(short *)pU64_27 =
                   (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                           (uint)*(ushort *)((int64_t)pU64_25 + 2) * 0x96 +
                           (uint)*(ushort *)pU64_25 * 0x4d >> 8);
              *(ushort *)((int64_t)pU64_27 + 2) = *(ushort *)((int64_t)pU64_25 + 6);
              pU64_25 = pU64_25 + 2;
              pU64_27 = pU64_27 + 1;
              uVal_18 = uVal_10;
            }
            if (uVal_8 != 0) {
              lVal_23 = 0;
              do {
                uVal_2 = *(ushort *)(pU64_25 + lVal_23 * 2 + 1);
                *(short *)(pU64_27 + lVal_23) =
                     (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                             (uint)*(ushort *)((int64_t)pU64_25 + lVal_23 * 8 + 2) * 0x96 +
                             (uint)*(ushort *)(pU64_25 + lVal_23 * 2) * 0x4d >> 8);
                *(uint16_t *)((int64_t)pU64_27 + lVal_23 * 4 + 2) =
                     *(uint16_t *)((int64_t)pU64_25 + lVal_23 * 8 + 6);
                uVal_2 = *(ushort *)(pU64_25 + lVal_23 * 2 + 3);
                *(short *)(pU64_27 + lVal_23 + 1) =
                     (short)((uint)uVal_2 * 2 + ((uint)uVal_2 + (uint)uVal_2 * 8) * 3 +
                             (uint)*(ushort *)((int64_t)pU64_25 + lVal_23 * 8 + 10) * 0x96 +
                             (uint)*(ushort *)(pU64_25 + lVal_23 * 2 + 2) * 0x4d >> 8);
                *(uint16_t *)((int64_t)pU64_27 + lVal_23 * 4 + 6) =
                     *(uint16_t *)((int64_t)pU64_25 + lVal_23 * 8 + 0xe);
                lVal_23 = lVal_23 + 2;
              } while (uVal_18 + 1 != (int)lVal_23);
            }
          }
        }
        uVal_22 = uVal_22 + 1;
        uVal_12 = uVal_12 + param_3 * param_4;
        uVal_29 = uVal_29 + param_4 * param_2;
      } while (uVal_22 != param_5);
    }
    thunk_FUN_180695dd0(param_1);
  }
  return lVal_7;
}

// func_0x1800e58f0
void func_0x1800e58f0(int64_t param_1,uint param_2)
{
  int iVal_1;
  int64_t lVal_2;
  int iVal_3;
  
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      lVal_2 = *(int64_t *)(param_1 + 200);
    }
    else {
      if (*(int64_t *)(param_1 + 0x10) == 0) {
        lVal_2 = *(int64_t *)(param_1 + 0xc0);
      }
      else {
        lVal_2 = *(int64_t *)(param_1 + 0xc0);
        iVal_3 = (int)*(uint64_t *)(param_1 + 200) - (int)lVal_2;
        iVal_1 = param_2 - iVal_3;
        if (iVal_1 != 0 && iVal_3 <= (int)param_2) {
          *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x0001800e5929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(func_ptr_t *)(param_1 + 0x18))
                    (*(uint64_t *)(param_1 + 0x28),iVal_1,*(func_ptr_t *)(param_1 + 0x18));
          return;
        }
      }
      lVal_2 = (uint64_t)param_2 + lVal_2;
    }
    *(int64_t *)(param_1 + 0xc0) = lVal_2;
  }
  return;
}

// func_0x1800e5950
uint func_0x1800e5950(uint64_t param_1)
{
  int iVal_1;
  uint uVal_2;
  
  iVal_1 = func_0x1800e5980();
  uVal_2 = func_0x1800e5980(param_1);
  return uVal_2 | iVal_1 << 0x10;
}

// func_0x1800e5980
uint16_t func_0x1800e5980(int64_t param_1)
{
  uint8_t *pU64_1;
  uint8_t uVal_2;
  int iVal_3;
  uint8_t *pU64_4;
  uint8_t *pU64_5;
  uint8_t uVal_6;
  
  pU64_1 = *(uint8_t **)(param_1 + 0xc0);
  if (pU64_1 < *(uint8_t **)(param_1 + 200)) {
    pU64_5 = pU64_1 + 1;
    *(uint8_t **)(param_1 + 0xc0) = pU64_5;
    uVal_6 = *pU64_1;
joined_r0x0001800e59f5:
    if (*(uint8_t **)(param_1 + 200) <= pU64_5) {
LAB_1800e59f7:
      if (*(int *)(param_1 + 0x30) == 0) {
        uVal_2 = 0;
      }
      else {
        pU64_1 = (uint8_t *)(param_1 + 0x38);
        iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),pU64_1,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_3 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          pU64_5 = (uint8_t *)(param_1 + 0x39);
          *(uint8_t *)(param_1 + 0x38) = 0;
          uVal_2 = 0;
        }
        else {
          pU64_5 = pU64_1 + iVal_3;
          uVal_2 = *pU64_1;
        }
        *(uint8_t **)(param_1 + 200) = pU64_5;
        *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
      }
      goto LAB_1800e5a8f;
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVal_6 = 0;
      pU64_5 = pU64_1;
      goto joined_r0x0001800e59f5;
    }
    pU64_1 = (uint8_t *)(param_1 + 0x38);
    iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),pU64_1,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_3 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      pU64_4 = (uint8_t *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
      uVal_6 = 0;
    }
    else {
      pU64_4 = pU64_1 + iVal_3;
      uVal_6 = *pU64_1;
    }
    *(uint8_t **)(param_1 + 200) = pU64_4;
    pU64_5 = (uint8_t *)(param_1 + 0x39);
    *(uint8_t **)(param_1 + 0xc0) = pU64_5;
    if (pU64_4 <= pU64_5) goto LAB_1800e59f7;
  }
  *(uint8_t **)(param_1 + 0xc0) = pU64_5 + 1;
  uVal_2 = *pU64_5;
LAB_1800e5a8f:
  return CONCAT11(uVal_6,uVal_2);
}

// func_0x1800e5ab0
bool func_0x1800e5ab0(int64_t param_1,int64_t param_2,int param_3)
{
  bool bFlag_1;
  int iVal_2;
  uint64_t uVal_3;
  int iVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  
  if (*(int64_t *)(param_1 + 0x10) == 0) {
    lVal_6 = *(int64_t *)(param_1 + 0xc0);
    uVal_3 = *(uint64_t *)(param_1 + 200);
  }
  else {
    lVal_6 = *(int64_t *)(param_1 + 0xc0);
    uVal_3 = *(uint64_t *)(param_1 + 200);
    iVal_2 = (int)uVal_3 - (int)lVal_6;
    iVal_4 = param_3 - iVal_2;
    if (iVal_4 != 0 && iVal_2 <= param_3) {
      func_0x1806aa960(param_2,lVal_6,(int64_t)iVal_2);
      iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),param_2 + iVal_2,iVal_4);
      *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 200);
      return iVal_2 == iVal_4;
    }
  }
  lVal_5 = (int64_t)param_3;
  bFlag_1 = (uint64_t)(lVal_6 + lVal_5) <= uVal_3;
  if (bFlag_1) {
    func_0x1806aa960(param_2,lVal_6,lVal_5);
    *(int64_t *)(param_1 + 0xc0) = *(int64_t *)(param_1 + 0xc0) + lVal_5;
  }
  return bFlag_1;
}

// func_0x1800e5b60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800e5b60(int param_1,int param_2,ushort *param_3,ushort *param_4,int param_5)
{
  uint8_t auArr_1 [16];
  int iVal_2;
  int64_t lVal_3;
  uint uVal_4;
  uint uVal_5;
  ushort *pU64_6;
  int iVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  
  auArr_1 = _DAT_1806b29e0;
  uVal_4 = param_1 * param_2;
  if (param_5 == 2) {
    if (uVal_4 != 0) {
      lVal_3 = 0;
      pU64_6 = param_3;
      if ((0xc < uVal_4) &&
         ((param_4 + 1 <= param_3 || (param_3 + (uint64_t)(uVal_4 - 1) * 2 + 2 <= param_4)))) {
        uVal_8 = 4;
        if ((uVal_4 & 3) != 0) {
          uVal_8 = (uint64_t)(uVal_4 & 3);
        }
        lVal_3 = uVal_4 - uVal_8;
        auArr_10 = pshuflw(ZEXT216(*param_4),ZEXT216(*param_4),0);
        pU64_6 = param_3 + lVal_3 * 2;
        lVal_9 = 0;
        do {
          auArr_11 = pshufb(*(uint8_t (*)[16])(param_3 + lVal_9 * 2),auArr_1);
          param_3[lVal_9 * 2 + 1] = -(ushort)(auArr_11._0_2_ == auArr_10._0_2_) ^ 0xffff;
          param_3[lVal_9 * 2 + 3] = -(ushort)(auArr_11._2_2_ == auArr_10._2_2_) ^ 0xffff;
          param_3[lVal_9 * 2 + 5] = -(ushort)(auArr_11._4_2_ == auArr_10._4_2_) ^ 0xffff;
          param_3[lVal_9 * 2 + 7] = -(ushort)(auArr_11._6_2_ == auArr_10._6_2_) ^ 0xffff;
          lVal_9 = lVal_9 + 4;
        } while (lVal_3 != lVal_9);
      }
      iVal_2 = (int)lVal_3;
      uVal_5 = uVal_4 - iVal_2 & 3;
      iVal_7 = iVal_2;
      if (uVal_5 != 0) {
        iVal_7 = 0;
        do {
          pU64_6[1] = -(ushort)(*pU64_6 != *param_4);
          pU64_6 = pU64_6 + 2;
          iVal_7 = iVal_7 + -1;
        } while (-uVal_5 != iVal_7);
        iVal_7 = iVal_2 - iVal_7;
      }
      if (iVal_2 - uVal_4 < 0xfffffffd) {
        lVal_3 = 0;
        do {
          pU64_6[lVal_3 * 2 + 1] = -(ushort)(pU64_6[lVal_3 * 2] != *param_4);
          pU64_6[lVal_3 * 2 + 3] = -(ushort)(pU64_6[lVal_3 * 2 + 2] != *param_4);
          pU64_6[lVal_3 * 2 + 5] = -(ushort)(pU64_6[lVal_3 * 2 + 4] != *param_4);
          pU64_6[lVal_3 * 2 + 7] = -(ushort)(pU64_6[lVal_3 * 2 + 6] != *param_4);
          lVal_3 = lVal_3 + 4;
        } while (uVal_4 - iVal_7 != (int)lVal_3);
      }
    }
  }
  else if (uVal_4 != 0) {
    lVal_3 = 0;
    do {
      if (((param_3[lVal_3 * 4] == *param_4) && (param_3[lVal_3 * 4 + 1] == param_4[1])) &&
         (param_3[lVal_3 * 4 + 2] == param_4[2])) {
        param_3[lVal_3 * 4 + 3] = 0;
      }
      lVal_3 = lVal_3 + 1;
    } while (uVal_4 != (uint)lVal_3);
  }
  return;
}

// func_0x1800e5d40
void func_0x1800e5d40(int param_1,int param_2,byte *param_3,byte *param_4,int param_5)
{
  int iVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint uVal_4;
  uint uVal_5;
  uint64_t uVal_6;
  byte *pU8_7;
  int iVal_8;
  uint64_t uVal_9;
  uint8_t auArr_10 [16];
  
  uVal_4 = param_1 * param_2;
  if (param_5 != 2) {
    if (uVal_4 == 0) {
      return;
    }
    lVal_3 = 0;
    do {
      if (((param_3[lVal_3 * 4] == *param_4) && (param_3[lVal_3 * 4 + 1] == param_4[1])) &&
         (param_3[lVal_3 * 4 + 2] == param_4[2])) {
        param_3[lVal_3 * 4 + 3] = 0;
      }
      lVal_3 = lVal_3 + 1;
    } while (uVal_4 != (uint)lVal_3);
    return;
  }
  if (uVal_4 == 0) {
    return;
  }
  uVal_2 = 0;
  pU8_7 = param_3;
  if ((8 < uVal_4) &&
     ((param_4 + 1 <= param_3 || (param_3 + (uint64_t)(uVal_4 - 1) * 2 + 2 <= param_4)))) {
    if (uVal_4 < 0x11) {
      uVal_6 = 0;
    }
    else {
      uVal_2 = 0x10;
      if ((uVal_4 & 0xf) != 0) {
        uVal_2 = (uint64_t)(uVal_4 & 0xf);
      }
      uVal_6 = uVal_4 - uVal_2;
      pshufb(ZEXT116(*param_4),(uint8_t  [16])0x0);
      uVal_9 = 0;
      do {
        uVal_9 = uVal_9 + 0x10;
      } while (uVal_6 != uVal_9);
      if ((uint)uVal_2 < 9) {
        pU8_7 = param_3 + uVal_6 * 2;
        uVal_2 = uVal_6 & 0xffffffff;
        goto LAB_1800e5f87;
      }
    }
    uVal_2 = 8;
    if ((uVal_4 & 7) != 0) {
      uVal_2 = (uint64_t)(uVal_4 & 7);
    }
    uVal_2 = uVal_4 - uVal_2;
    auArr_10 = ZEXT216(CONCAT11(*param_4,*param_4));
    pshuflw(auArr_10,auArr_10,0);
    pU8_7 = param_3 + uVal_2 * 2;
    auArr_10._8_8_ = 0;
    auArr_10._0_8_ = DAT_1806b2a00;
    do {
      pshufb(*(uint8_t (*)[16])(param_3 + uVal_6 * 2),auArr_10);
      uVal_6 = uVal_6 + 8;
    } while (uVal_2 != uVal_6);
  }
LAB_1800e5f87:
  iVal_1 = (int)uVal_2;
  uVal_5 = uVal_4 - iVal_1 & 3;
  iVal_8 = iVal_1;
  if (uVal_5 != 0) {
    iVal_8 = 0;
    do {
      pU8_7[1] = -(*pU8_7 != *param_4);
      pU8_7 = pU8_7 + 2;
      iVal_8 = iVal_8 + -1;
    } while (-uVal_5 != iVal_8);
    iVal_8 = iVal_1 - iVal_8;
  }
  if (iVal_1 - uVal_4 < 0xfffffffd) {
    lVal_3 = 0;
    do {
      pU8_7[lVal_3 * 2 + 1] = -(pU8_7[lVal_3 * 2] != *param_4);
      pU8_7[lVal_3 * 2 + 3] = -(pU8_7[lVal_3 * 2 + 2] != *param_4);
      pU8_7[lVal_3 * 2 + 5] = -(pU8_7[lVal_3 * 2 + 4] != *param_4);
      pU8_7[lVal_3 * 2 + 7] = -(pU8_7[lVal_3 * 2 + 6] != *param_4);
      lVal_3 = lVal_3 + 4;
    } while (uVal_4 - iVal_8 != (int)lVal_3);
  }
  return;
}

// func_0x1800e6040
void func_0x1800e6040(int *param_1,uint8_t *param_2)
{
  uint8_t uVal_1;
  byte bFlag_2;
  byte bFlag_3;
  uint uVal_4;
  uint uVal_5;
  int64_t lVal_6;
  int *pInt_7;
  ushort uVal_8;
  
  uVal_4 = param_1[1] * *param_1;
  if (param_1[3] == 3) {
    if (uVal_4 != 0) {
      if (3 < uVal_4) {
        uVal_5 = uVal_4 & 0xfffffffc;
        do {
          uVal_1 = *param_2;
          *param_2 = param_2[2];
          param_2[2] = uVal_1;
          uVal_1 = param_2[3];
          param_2[3] = param_2[5];
          param_2[5] = uVal_1;
          uVal_1 = param_2[6];
          param_2[6] = param_2[8];
          param_2[8] = uVal_1;
          uVal_1 = param_2[9];
          param_2[9] = param_2[0xb];
          param_2[0xb] = uVal_1;
          param_2 = param_2 + 0xc;
          uVal_5 = uVal_5 - 4;
        } while (uVal_5 != 0);
        if ((uVal_4 & 3) == 0) {
          return;
        }
      }
      lVal_6 = 0;
      do {
        uVal_1 = param_2[lVal_6];
        param_2[lVal_6] = param_2[lVal_6 + 2];
        param_2[lVal_6 + 2] = uVal_1;
        lVal_6 = lVal_6 + 3;
      } while ((uVal_4 & 3) * 3 != (int)lVal_6);
    }
  }
  else {
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pInt_7 = (int *)&DAT_18083ed1c;
    if (*(int *)(lVal_6 + 0x3024) != 0) {
      pInt_7 = (int *)(lVal_6 + 0x3020);
    }
    if (*pInt_7 == 0) {
      if (uVal_4 != 0) {
        if (3 < uVal_4) {
          uVal_5 = uVal_4 & 0xfffffffc;
          do {
            uVal_1 = *param_2;
            *param_2 = param_2[2];
            param_2[2] = uVal_1;
            uVal_1 = param_2[4];
            param_2[4] = param_2[6];
            param_2[6] = uVal_1;
            uVal_1 = param_2[8];
            param_2[8] = param_2[10];
            param_2[10] = uVal_1;
            uVal_1 = param_2[0xc];
            param_2[0xc] = param_2[0xe];
            param_2[0xe] = uVal_1;
            param_2 = param_2 + 0x10;
            uVal_5 = uVal_5 - 4;
          } while (uVal_5 != 0);
          if ((uVal_4 & 3) == 0) {
            return;
          }
        }
        lVal_6 = 0;
        do {
          uVal_1 = param_2[lVal_6 * 4];
          param_2[lVal_6 * 4] = param_2[lVal_6 * 4 + 2];
          param_2[lVal_6 * 4 + 2] = uVal_1;
          lVal_6 = lVal_6 + 1;
        } while ((uVal_4 & 3) != (uint)lVal_6);
      }
    }
    else if (uVal_4 != 0) {
      lVal_6 = 0;
      do {
        while( true ) {
          bFlag_2 = param_2[lVal_6 * 4 + 3];
          bFlag_3 = param_2[lVal_6 * 4];
          if (bFlag_2 == 0) break;
          uVal_5 = (uint)(bFlag_2 >> 1);
          uVal_8 = (ushort)bFlag_2;
          param_2[lVal_6 * 4] =
               (char)((((uint)(byte)param_2[lVal_6 * 4 + 2] * 0x100 -
                       (uint)(byte)param_2[lVal_6 * 4 + 2]) + uVal_5 & 0xffff) / (uint)uVal_8);
          param_2[lVal_6 * 4 + 1] =
               (char)((((uint)(byte)param_2[lVal_6 * 4 + 1] * 0x100 -
                       (uint)(byte)param_2[lVal_6 * 4 + 1]) + uVal_5 & 0xffff) / (uint)uVal_8);
          param_2[lVal_6 * 4 + 2] =
               (char)((((uint)bFlag_3 * 0x100 - (uint)bFlag_3) + uVal_5 & 0xffff) / (uint)uVal_8);
          lVal_6 = lVal_6 + 1;
          if (uVal_4 == (uint)lVal_6) {
            return;
          }
        }
        param_2[lVal_6 * 4] = param_2[lVal_6 * 4 + 2];
        param_2[lVal_6 * 4 + 2] = bFlag_3;
        lVal_6 = lVal_6 + 1;
      } while (uVal_4 != (uint)lVal_6);
    }
  }
  return;
}

// func_0x1800e6260
/* WARNING: Removing unreachable block (ram,0x0001800e79e7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x0001800e79e7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1800e6260(int64_t *param_1,byte *param_2,uint param_3,uint param_4,uint param_5,uint param_6, uint param_7,int param_8)
{
  uint uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  int64_t lVal_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t lVal_7;
  int64_t lVal_8;
  int64_t lVal_9;
  int64_t lVal_10;
  int64_t lVal_11;
  byte *pU8_12;
  byte *pU8_13;
  byte bFlag_14;
  ushort uVal_15;
  uint uVal_16;
  uint32_t uVal_17;
  short sz_18;
  short sz_19;
  short sz_20;
  short sz_21;
  short sz_22;
  short sz_23;
  short sz_24;
  short sz_25;
  short sz_26;
  short sz_27;
  short sz_28;
  short sz_29;
  short sz_30;
  short sz_31;
  short sz_32;
  short sz_33;
  uint64_t uVal_34;
  int64_t lVal_35;
  uint8_t auArr_36 [16];
  uint uVal_37;
  uint uVal_38;
  int64_t lVal_39;
  uint64_t uVal_40;
  uint64_t uVal_43;
  uint64_t uVal_44;
  uint64_t uVal_45;
  uint64_t uVal_46;
  uint64_t uVal_47;
  byte *pU8_48;
  int64_t lVal_49;
  ushort *pU64_50;
  byte bFlag_51;
  uint uVal_52;
  char *fnPtr_53;
  uint64_t uVal_54;
  uint64_t uVal_55;
  ushort *pU64_56;
  uint8_t *pU64_57;
  uint8_t (*pArr16_58)[16];
  byte bFlag_59;
  char ch_60;
  int iVal_61;
  uint uVal_62;
  uint uVal_63;
  int64_t lVal_64;
  uint64_t uVal_65;
  byte *pU8_66;
  uint32_t *pU64_67;
  uint64_t uVal_68;
  int64_t lVal_69;
  uint uVal_70;
  uint uVal_71;
  uint uVal_73;
  uint64_t uVal_74;
  uint64_t uVal_75;
  byte *pU8_76;
  uint uVal_77;
  uint64_t uVal_78;
  byte *pU8_79;
  int64_t lVal_80;
  uint uVal_81;
  uint uVal_82;
  uint64_t uVal_83;
  int64_t lVal_84;
  byte *pU8_85;
  int64_t lVal_86;
  uint64_t uVal_87;
  uint uVal_88;
  int64_t lVal_89;
  byte *pU8_90;
  uint64_t uVal_91;
  uint32_t *pU64_92;
  uint uVal_93;
  int64_t lVal_95;
  uint64_t uVal_96;
  uint32_t *pU64_97;
  uint uVal_98;
  uint64_t uVal_99;
  int64_t lVal_100;
  int64_t lVal_101;
  uint64_t uVal_102;
  int iVal_103;
  bool bFlag_104;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auArr_105 [16];
  uint8_t auArr_106 [16];
  uint8_t auArr_113 [16];
  uint uVal_127;
  uint8_t auArr_121 [16];
  uint8_t auArr_122 [16];
  uint8_t auArr_123 [16];
  uint8_t auArr_124 [16];
  int iVal_139;
  int iVal_140;
  uint8_t auArr_128 [16];
  uint8_t auArr_136 [16];
  uint8_t auArr_137 [16];
  int iVal_141;
  uint8_t auArr_138 [16];
  uint8_t in_XMM2 [16];
  uint8_t auArr_142 [16];
  uint8_t auArr_143 [16];
  uint8_t auArr_144 [16];
  uint8_t in_XMM3 [16];
  uint8_t auArr_145 [16];
  uint8_t auArr_146 [16];
  uint8_t auArr_147 [16];
  uint uVal_148;
  uint uVal_152;
  uint uVal_153;
  uint8_t in_XMM4 [16];
  uint8_t auArr_149 [16];
  uint uVal_154;
  uint8_t auArr_150 [16];
  uint8_t auArr_151 [16];
  uint8_t in_XMM5 [16];
  uint8_t auArr_155 [16];
  uint8_t auArr_156 [16];
  uint8_t unaff_XMM6 [16];
  uint8_t auArr_157 [16];
  uint8_t auArr_158 [16];
  uint8_t uVal_159;
  uint8_t uVal_161;
  uint8_t uVal_162;
  uint8_t uVal_163;
  uint8_t uVal_164;
  uint8_t uVal_165;
  uint8_t uVal_166;
  uint8_t uVal_167;
  uint8_t auArr_160 [16];
  uint8_t auArr_168 [16];
  uint8_t auArr_169 [16];
  uint8_t auArr_170 [16];
  uint8_t auArr_171 [16];
  uint8_t auArr_172 [16];
  uint8_t unaff_XMM13 [16];
  uint8_t auArr_173 [16];
  uint8_t auArr_174 [16];
  uint8_t unaff_XMM14 [16];
  uint8_t unaff_XMM15 [16];
  uint32_t *local_380;
  byte local_369;
  uint64_t local_358;
  byte *local_288;
  uint64_t uVal_41;
  uint64_t uVal_42;
  uint64_t uVal_72;
  uint64_t uVal_94;
  uint8_t auArr_114 [16];
  uint8_t auArr_115 [16];
  uint8_t auArr_116 [16];
  uint8_t auArr_117 [16];
  uint8_t auArr_107 [16];
  uint8_t auArr_108 [16];
  uint8_t auArr_109 [16];
  uint8_t auArr_110 [16];
  uint8_t auArr_111 [16];
  uint8_t auArr_112 [16];
  uint8_t auArr_125 [16];
  uint8_t auArr_126 [16];
  uint8_t auArr_118 [16];
  uint8_t auArr_119 [16];
  uint8_t auArr_120 [16];
  uint8_t auArr_129 [16];
  uint8_t auArr_130 [16];
  uint8_t auArr_131 [16];
  uint8_t auArr_132 [16];
  uint8_t auArr_133 [16];
  uint8_t auArr_134 [16];
  uint8_t auArr_135 [16];
  
  bFlag_104 = param_7 == 0x10;
  iVal_103 = param_5 * param_4 << bFlag_104;
  uVal_16 = *(uint *)(*param_1 + 8);
  uVal_88 = param_4 << bFlag_104;
  uVal_98 = uVal_16 << bFlag_104;
  if (((int)(param_6 | param_5) < 0) ||
     ((((param_6 != 0 && ((int)(0x7fffffff / (uint64_t)param_6) < (int)param_5)) ||
       (uVal_52 = param_6 * param_5, (int)(uVal_88 | uVal_52) < 0)) ||
      ((param_4 << bFlag_104 != 0 && ((int)(0x7fffffff / (uint64_t)uVal_88) < (int)uVal_52)))))) {
    param_1[3] = 0;
  }
  else {
    lVal_39 = _malloc_base((int64_t)(int)(uVal_88 * uVal_52));
    param_1[3] = lVal_39;
    if (lVal_39 != 0) {
      if (((-1 < (int)(uVal_16 | param_5)) &&
          ((param_5 == 0 || ((int)uVal_16 <= (int)(0x7fffffff / (uint64_t)param_5))))) &&
         (uVal_88 = uVal_16 * param_5, -1 < (int)(uVal_88 | param_7))) {
        if (param_7 == 0) {
          iVal_61 = 0;
        }
        else {
          iVal_139 = (int)(0x7fffffff / (uint64_t)param_7);
          iVal_61 = uVal_88 * param_7;
          if (uVal_88 - iVal_139 != 0 && iVal_139 <= (int)uVal_88 || 0x7ffffff8 < iVal_61)
          goto LAB_1800e64b3;
        }
        uVal_52 = iVal_61 + 7U >> 3;
        if ((-1 < (int)param_6) &&
           (((param_6 == 0 || (uVal_52 <= (uint)(0x7fffffff / (uint64_t)param_6))) &&
            (uVal_52 * param_6 <= (uVal_52 ^ 0x7fffffff))))) {
          if (param_3 < (uVal_52 + 1) * param_6) {
            lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            fnPtr_53 = "not enough pixels";
            goto LAB_1800e636d;
          }
          lVal_39 = _malloc_base(uVal_52 * 2);
          auArr_36 = _DAT_1806b2a20;
          auArr_105._8_8_ = extraout_XMM0_Qb;
          auArr_105._0_8_ = extraout_XMM0_Qa;
          if (lVal_39 != 0) {
            if (param_6 != 0) {
              if ((int)param_7 < 8) {
                uVal_98 = 1;
              }
              uVal_99 = (uint64_t)uVal_98;
              uVal_81 = param_5;
              if ((int)param_7 < 8) {
                uVal_81 = uVal_52;
              }
              uVal_81 = uVal_81 * uVal_98;
              lVal_89 = (int64_t)(int)uVal_98;
              lVal_64 = (int64_t)(int)uVal_81;
              uVal_74 = lVal_64 - lVal_89;
              uVal_40 = uVal_74 & 0xffffffffffffffe0;
              uVal_102 = uVal_74 & 0xfffffffffffffffc;
              uVal_37 = uVal_98 & 0x7fffffe0;
              uVal_41 = (uint64_t)uVal_37;
              uVal_38 = uVal_98 & 0x7ffffffc;
              uVal_42 = (uint64_t)uVal_38;
              uVal_43 = (uint64_t)(uVal_98 & 3);
              uVal_44 = uVal_74 & 0xfffffffffffffff0;
              uVal_75 = uVal_74 & 0xfffffffffffffff8;
              uVal_45 = (uint64_t)(uVal_81 & 0x7fffffe0);
              uVal_46 = (uint64_t)(uVal_81 & 0x7ffffffc);
              uVal_83 = (uint64_t)(uVal_81 & 3);
              uVal_93 = param_5 & 0xfffffffc;
              uVal_94 = (uint64_t)uVal_93;
              uVal_70 = uVal_88 & 0xfffffff8;
              uVal_72 = (uint64_t)uVal_70;
              uVal_1 = param_5 - 1;
              uVal_47 = (uint64_t)uVal_1;
              uVal_2 = uVal_47 + 1;
              uVal_82 = (uint)uVal_2;
              uVal_65 = (uint64_t)(uVal_82 & 0xfffffff0);
              uVal_78 = (uint64_t)(uVal_82 & 0xfffffffc);
              lVal_84 = lVal_39 - lVal_89;
              uVal_73 = uVal_88 & 0xfffffffe;
              auArr_155._8_4_ = 0xffffffff;
              auArr_155._0_8_ = 0xffffffffffffffff;
              auArr_155._12_4_ = 0xffffffff;
              auArr_169._8_8_ = 0;
              auArr_169._0_8_ = DAT_1806b2a30;
              local_369 = 1;
              uVal_62 = uVal_88 - 1;
              lVal_9 = uVal_40 + lVal_89;
              lVal_10 = uVal_102 + lVal_89;
              lVal_3 = lVal_64 + -1;
              lVal_35 = uVal_47 * 3;
              pU8_66 = param_2 + lVal_89 + 0x11;
              lVal_4 = lVal_64 + 1;
              lVal_5 = lVal_84 + 1;
              lVal_6 = lVal_39 + 1;
              lVal_7 = lVal_39 + 0x10;
              lVal_8 = lVal_39 + 3;
              pU8_79 = param_2 + 1;
              lVal_11 = lVal_39 + lVal_89;
              pU8_85 = param_2 + lVal_89 + 1;
              pU8_90 = param_2 + 0x11;
              local_288 = param_2 + 2;
              lVal_95 = 1;
              uVal_54 = 0;
              local_358 = 0;
              pU8_76 = param_2;
              auArr_136 = _DAT_1806b2a40;
              auArr_143 = _DAT_1806b2a10;
              do {
                uVal_96 = 0;
                if ((uVal_54 & 1) != 0) {
                  uVal_96 = (uint64_t)uVal_52;
                }
                bFlag_51 = *pU8_76;
                if (4 < (uint64_t)bFlag_51) {
                  *(char **)(*(int64_t *)
                              ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                            0x3010) = "invalid filter";
                  thunk_FUN_180695dd0(lVal_39);
                  return 0;
                }
                if (uVal_54 == 0) {
                  bFlag_51 = (&DAT_1806b3afc)[bFlag_51];
                }
                local_380 = (uint32_t *)(lVal_39 + uVal_96);
                lVal_86 = param_1[3];
                if (bFlag_51 < 6) {
                  uVal_68 = (uint64_t)(local_369 * uVal_52);
                  lVal_49 = lVal_8 + uVal_68;
                  pU64_67 = (uint32_t *)(lVal_39 + uVal_68);
                  lVal_80 = lVal_7 + uVal_68;
                  lVal_69 = lVal_7 + uVal_68;
                  uVal_63 = (~(uint)uVal_54 & 1) * uVal_52;
                  iVal_61 = (int)uVal_96;
                  switch(bFlag_51) {
                  case 0:
                    auArr_105._0_8_ = func_0x1806aa960(local_380);
                    auArr_105._8_8_ = extraout_XMM0_Qb_01;
                    break;
                  case 1:
                    auArr_105._0_8_ = func_0x1806aa960(local_380);
                    auArr_105._8_8_ = extraout_XMM0_Qb_02;
                    if ((int)uVal_98 < (int)uVal_81) {
                      lVal_49 = lVal_89;
                      if (0x1f < uVal_98 && 3 < uVal_74) {
                        if (uVal_74 < 0x20) {
                          uVal_68 = 0;
                        }
                        else {
                          uVal_68 = 0;
                          do {
                            pU8_12 = pU8_66 + (uVal_68 - 0x10);
                            pU8_48 = pU8_66 + uVal_68;
                            fnPtr_53 = (char *)((int64_t)local_380 + uVal_68);
                            in_XMM2[0] = *fnPtr_53 + *pU8_12;
                            in_XMM2[1] = fnPtr_53[1] + pU8_12[1];
                            in_XMM2[2] = fnPtr_53[2] + pU8_12[2];
                            in_XMM2[3] = fnPtr_53[3] + pU8_12[3];
                            in_XMM2[4] = fnPtr_53[4] + pU8_12[4];
                            in_XMM2[5] = fnPtr_53[5] + pU8_12[5];
                            in_XMM2[6] = fnPtr_53[6] + pU8_12[6];
                            in_XMM2[7] = fnPtr_53[7] + pU8_12[7];
                            in_XMM2[8] = fnPtr_53[8] + pU8_12[8];
                            in_XMM2[9] = fnPtr_53[9] + pU8_12[9];
                            in_XMM2[10] = fnPtr_53[10] + pU8_12[10];
                            in_XMM2[11] = fnPtr_53[0xb] + pU8_12[0xb];
                            in_XMM2[12] = fnPtr_53[0xc] + pU8_12[0xc];
                            in_XMM2[13] = fnPtr_53[0xd] + pU8_12[0xd];
                            in_XMM2[14] = fnPtr_53[0xe] + pU8_12[0xe];
                            in_XMM2[15] = fnPtr_53[0xf] + pU8_12[0xf];
                            fnPtr_53 = (char *)((int64_t)local_380 + uVal_68 + 0x10);
                            auArr_105[0] = *fnPtr_53 + *pU8_48;
                            auArr_105[1] = fnPtr_53[1] + pU8_48[1];
                            auArr_105[2] = fnPtr_53[2] + pU8_48[2];
                            auArr_105[3] = fnPtr_53[3] + pU8_48[3];
                            auArr_105[4] = fnPtr_53[4] + pU8_48[4];
                            auArr_105[5] = fnPtr_53[5] + pU8_48[5];
                            auArr_105[6] = fnPtr_53[6] + pU8_48[6];
                            auArr_105[7] = fnPtr_53[7] + pU8_48[7];
                            auArr_105[8] = fnPtr_53[8] + pU8_48[8];
                            auArr_105[9] = fnPtr_53[9] + pU8_48[9];
                            auArr_105[10] = fnPtr_53[10] + pU8_48[10];
                            auArr_105[11] = fnPtr_53[0xb] + pU8_48[0xb];
                            auArr_105[12] = fnPtr_53[0xc] + pU8_48[0xc];
                            auArr_105[13] = fnPtr_53[0xd] + pU8_48[0xd];
                            auArr_105[14] = fnPtr_53[0xe] + pU8_48[0xe];
                            auArr_105[15] = fnPtr_53[0xf] + pU8_48[0xf];
                            *(uint8_t (*)[16])((int64_t)local_380 + uVal_68 + lVal_89) = in_XMM2;
                            *(uint8_t (*)[16])((int64_t)local_380 + uVal_68 + lVal_89 + 0x10) =
                                 auArr_105;
                            uVal_68 = uVal_68 + 0x20;
                          } while (uVal_40 != uVal_68);
                          if (uVal_74 == uVal_40) break;
                          uVal_68 = uVal_40;
                          lVal_49 = lVal_9;
                          if ((uVal_74 & 0x1c) == 0) goto LAB_1800e732c;
                        }
                        pU64_67 = (uint32_t *)(uVal_96 + uVal_68 + lVal_39);
                        lVal_49 = -uVal_102 + uVal_68;
                        pU8_48 = param_2 + uVal_68;
                        do {
                          uVal_63 = *(uint *)(pU8_48 + lVal_95 + lVal_89);
                          auArr_105 = ZEXT416(uVal_63);
                          uVal_17 = *pU64_67;
                          *(uint *)((int64_t)pU64_67 + lVal_89) =
                               CONCAT13((char)((uint)uVal_17 >> 0x18) + (char)(uVal_63 >> 0x18),
                                        CONCAT12((char)((uint)uVal_17 >> 0x10) +
                                                 (char)(uVal_63 >> 0x10),
                                                 CONCAT11((char)((uint)uVal_17 >> 8) +
                                                          (char)(uVal_63 >> 8),
                                                          (char)uVal_17 + (char)uVal_63)));
                          pU64_67 = pU64_67 + 1;
                          pU8_48 = pU8_48 + 4;
                          lVal_49 = lVal_49 + 4;
                        } while (lVal_49 != 0);
                        lVal_49 = lVal_10;
                        if (uVal_74 == uVal_102) break;
                      }
LAB_1800e732c:
                      lVal_80 = lVal_49;
                      if ((uVal_81 - (int)lVal_49 & 1) != 0) {
                        *(byte *)((int64_t)local_380 + lVal_49) =
                             *(char *)((int64_t)local_380 + (lVal_49 - lVal_89)) +
                             pU8_76[lVal_49 + 1];
                        lVal_80 = lVal_49 + 1;
                      }
                      if (lVal_49 != lVal_3) {
                        do {
                          *(byte *)(lVal_6 + uVal_96 + -1 + lVal_80) =
                               *(char *)(lVal_5 + uVal_96 + -1 + lVal_80) + local_288[lVal_80 + -1];
                          *(byte *)(lVal_6 + uVal_96 + lVal_80) =
                               *(char *)(lVal_5 + uVal_96 + lVal_80) + local_288[lVal_80];
                          lVal_80 = lVal_80 + 2;
                        } while (lVal_64 != lVal_80);
                      }
                    }
                    break;
                  case 2:
                    if (0 < (int)uVal_81) {
                      uVal_68 = uVal_83;
                      if (uVal_81 < 4) {
                        uVal_87 = 0;
                        uVal_55 = uVal_87;
                      }
                      else {
                        uVal_87 = 0;
                        uVal_55 = 0;
                        if (0x1f < iVal_61 - uVal_63) {
                          if (uVal_81 < 0x20) {
                            uVal_87 = 0;
                          }
                          else {
                            uVal_87 = 0;
                            do {
                              pU8_12 = pU8_90 + (uVal_87 - 0x10);
                              pU8_48 = pU8_90 + uVal_87;
                              fnPtr_53 = (char *)(lVal_80 + -0x10 + uVal_87);
                              in_XMM2[0] = *fnPtr_53 + *pU8_12;
                              in_XMM2[1] = fnPtr_53[1] + pU8_12[1];
                              in_XMM2[2] = fnPtr_53[2] + pU8_12[2];
                              in_XMM2[3] = fnPtr_53[3] + pU8_12[3];
                              in_XMM2[4] = fnPtr_53[4] + pU8_12[4];
                              in_XMM2[5] = fnPtr_53[5] + pU8_12[5];
                              in_XMM2[6] = fnPtr_53[6] + pU8_12[6];
                              in_XMM2[7] = fnPtr_53[7] + pU8_12[7];
                              in_XMM2[8] = fnPtr_53[8] + pU8_12[8];
                              in_XMM2[9] = fnPtr_53[9] + pU8_12[9];
                              in_XMM2[10] = fnPtr_53[10] + pU8_12[10];
                              in_XMM2[11] = fnPtr_53[0xb] + pU8_12[0xb];
                              in_XMM2[12] = fnPtr_53[0xc] + pU8_12[0xc];
                              in_XMM2[13] = fnPtr_53[0xd] + pU8_12[0xd];
                              in_XMM2[14] = fnPtr_53[0xe] + pU8_12[0xe];
                              in_XMM2[15] = fnPtr_53[0xf] + pU8_12[0xf];
                              fnPtr_53 = (char *)(lVal_80 + uVal_87);
                              auArr_105[0] = *fnPtr_53 + *pU8_48;
                              auArr_105[1] = fnPtr_53[1] + pU8_48[1];
                              auArr_105[2] = fnPtr_53[2] + pU8_48[2];
                              auArr_105[3] = fnPtr_53[3] + pU8_48[3];
                              auArr_105[4] = fnPtr_53[4] + pU8_48[4];
                              auArr_105[5] = fnPtr_53[5] + pU8_48[5];
                              auArr_105[6] = fnPtr_53[6] + pU8_48[6];
                              auArr_105[7] = fnPtr_53[7] + pU8_48[7];
                              auArr_105[8] = fnPtr_53[8] + pU8_48[8];
                              auArr_105[9] = fnPtr_53[9] + pU8_48[9];
                              auArr_105[10] = fnPtr_53[10] + pU8_48[10];
                              auArr_105[11] = fnPtr_53[0xb] + pU8_48[0xb];
                              auArr_105[12] = fnPtr_53[0xc] + pU8_48[0xc];
                              auArr_105[13] = fnPtr_53[0xd] + pU8_48[0xd];
                              auArr_105[14] = fnPtr_53[0xe] + pU8_48[0xe];
                              auArr_105[15] = fnPtr_53[0xf] + pU8_48[0xf];
                              *(uint8_t (*)[16])(lVal_7 + uVal_96 + -0x10 + uVal_87) = in_XMM2;
                              *(uint8_t (*)[16])(lVal_7 + uVal_96 + uVal_87) = auArr_105;
                              uVal_87 = uVal_87 + 0x20;
                            } while (uVal_45 != uVal_87);
                            if ((uVal_81 & 0x7fffffe0) == uVal_81) break;
                            uVal_87 = uVal_45;
                            uVal_55 = uVal_45;
                            if ((uVal_81 & 0x1c) == 0) goto joined_r0x0001800e6f4f;
                          }
                          do {
                            uVal_63 = *(uint *)(pU8_79 + uVal_87);
                            auArr_105 = ZEXT416(uVal_63);
                            uVal_17 = *(uint32_t *)((int64_t)pU64_67 + uVal_87);
                            *(uint *)((int64_t)local_380 + uVal_87) =
                                 CONCAT13((char)((uint)uVal_17 >> 0x18) + (char)(uVal_63 >> 0x18),
                                          CONCAT12((char)((uint)uVal_17 >> 0x10) +
                                                   (char)(uVal_63 >> 0x10),
                                                   CONCAT11((char)((uint)uVal_17 >> 8) +
                                                            (char)(uVal_63 >> 8),
                                                            (char)uVal_17 + (char)uVal_63)));
                            uVal_87 = uVal_87 + 4;
                          } while (uVal_46 != uVal_87);
                          uVal_87 = uVal_46;
                          uVal_55 = uVal_46;
                          if ((uVal_81 & 0x7ffffffc) == uVal_81) break;
                        }
                      }
joined_r0x0001800e6f4f:
                      for (; uVal_68 != 0; uVal_68 = uVal_68 - 1) {
                        *(byte *)((int64_t)local_380 + uVal_87) =
                             *(char *)((int64_t)pU64_67 + uVal_87) + pU8_79[uVal_87];
                        uVal_87 = uVal_87 + 1;
                      }
                      if (uVal_55 - uVal_81 < 0xfffffffffffffffd) {
                        lVal_80 = lVal_8 + uVal_96;
                        do {
                          *(byte *)(lVal_80 + -3 + uVal_87) =
                               *(char *)(lVal_49 + -3 + uVal_87) + pU8_79[uVal_87];
                          *(byte *)(lVal_80 + -2 + uVal_87) =
                               *(char *)(lVal_49 + -2 + uVal_87) + pU8_79[uVal_87 + 1];
                          *(byte *)(lVal_80 + -1 + uVal_87) =
                               *(char *)(lVal_49 + -1 + uVal_87) + pU8_79[uVal_87 + 2];
                          *(byte *)(lVal_80 + uVal_87) =
                               *(char *)(lVal_49 + uVal_87) + pU8_79[uVal_87 + 3];
                          uVal_87 = uVal_87 + 4;
                        } while (uVal_81 != uVal_87);
                      }
                    }
                    break;
                  case 3:
                    lVal_49 = lVal_39 + (uint64_t)uVal_63;
                    if (0 < (int)uVal_98) {
                      if (uVal_98 < 4) {
                        uVal_87 = 0;
                      }
                      else {
                        uVal_87 = 0;
                        if (0x1f < iVal_61 - uVal_63) {
                          if (uVal_98 < 0x20) {
                            uVal_87 = 0;
                          }
                          else {
                            uVal_87 = 0;
                            do {
                              auArr_105 = *(uint8_t (*)[16])(pU8_79 + uVal_87);
                              pU8_48 = pU8_79 + uVal_87 + 0x10;
                              pU64_50 = (ushort *)(lVal_69 + -0x10 + uVal_87);
                              pU64_56 = (ushort *)(lVal_69 + uVal_87);
                              auArr_142._0_2_ = *pU64_50 >> 1;
                              auArr_142._2_2_ = pU64_50[1] >> 1;
                              auArr_142._4_2_ = pU64_50[2] >> 1;
                              auArr_142._6_2_ = pU64_50[3] >> 1;
                              auArr_142._8_2_ = pU64_50[4] >> 1;
                              auArr_142._10_2_ = pU64_50[5] >> 1;
                              auArr_142._12_2_ = pU64_50[6] >> 1;
                              auArr_142._14_2_ = pU64_50[7] >> 1;
                              auArr_142 = auArr_142 & auArr_143;
                              in_XMM2[0] = auArr_142[0] + auArr_105[0];
                              in_XMM2[1] = auArr_142[1] + auArr_105[1];
                              in_XMM2[2] = auArr_142[2] + auArr_105[2];
                              in_XMM2[3] = auArr_142[3] + auArr_105[3];
                              in_XMM2[4] = auArr_142[4] + auArr_105[4];
                              in_XMM2[5] = auArr_142[5] + auArr_105[5];
                              in_XMM2[6] = auArr_142[6] + auArr_105[6];
                              in_XMM2[7] = auArr_142[7] + auArr_105[7];
                              in_XMM2[8] = auArr_142[8] + auArr_105[8];
                              in_XMM2[9] = auArr_142[9] + auArr_105[9];
                              in_XMM2[10] = auArr_142[10] + auArr_105[10];
                              in_XMM2[11] = auArr_142[11] + auArr_105[11];
                              in_XMM2[12] = auArr_142[12] + auArr_105[12];
                              in_XMM2[13] = auArr_142[13] + auArr_105[13];
                              in_XMM2[14] = auArr_142[14] + auArr_105[14];
                              in_XMM2[15] = auArr_142[15] + auArr_105[15];
                              auArr_145._0_2_ = *pU64_56 >> 1;
                              auArr_145._2_2_ = pU64_56[1] >> 1;
                              auArr_145._4_2_ = pU64_56[2] >> 1;
                              auArr_145._6_2_ = pU64_56[3] >> 1;
                              auArr_145._8_2_ = pU64_56[4] >> 1;
                              auArr_145._10_2_ = pU64_56[5] >> 1;
                              auArr_145._12_2_ = pU64_56[6] >> 1;
                              auArr_145._14_2_ = pU64_56[7] >> 1;
                              auArr_145 = auArr_145 & auArr_143;
                              in_XMM3[0] = auArr_145[0] + *pU8_48;
                              in_XMM3[1] = auArr_145[1] + pU8_48[1];
                              in_XMM3[2] = auArr_145[2] + pU8_48[2];
                              in_XMM3[3] = auArr_145[3] + pU8_48[3];
                              in_XMM3[4] = auArr_145[4] + pU8_48[4];
                              in_XMM3[5] = auArr_145[5] + pU8_48[5];
                              in_XMM3[6] = auArr_145[6] + pU8_48[6];
                              in_XMM3[7] = auArr_145[7] + pU8_48[7];
                              in_XMM3[8] = auArr_145[8] + pU8_48[8];
                              in_XMM3[9] = auArr_145[9] + pU8_48[9];
                              in_XMM3[10] = auArr_145[10] + pU8_48[10];
                              in_XMM3[11] = auArr_145[11] + pU8_48[0xb];
                              in_XMM3[12] = auArr_145[12] + pU8_48[0xc];
                              in_XMM3[13] = auArr_145[13] + pU8_48[0xd];
                              in_XMM3[14] = auArr_145[14] + pU8_48[0xe];
                              in_XMM3[15] = auArr_145[15] + pU8_48[0xf];
                              *(uint8_t (*)[16])(lVal_7 + uVal_96 + -0x10 + uVal_87) = in_XMM2;
                              *(uint8_t (*)[16])(lVal_7 + uVal_96 + uVal_87) = in_XMM3;
                              uVal_87 = uVal_87 + 0x20;
                            } while (uVal_41 != uVal_87);
                            if (uVal_37 == uVal_98) goto LAB_1800e711e;
                            uVal_87 = uVal_41;
                            if ((uVal_98 & 0x1c) == 0) goto LAB_1800e709d;
                          }
                          do {
                            uVal_127 = *(uint *)(pU8_79 + uVal_87);
                            auArr_105 = ZEXT416(uVal_127);
                            auArr_123 = ZEXT416(CONCAT22((ushort)((uint)*(uint32_t *)
                                                                        ((int64_t)pU64_67 + uVal_87)
                                                                >> 0x11),
                                                        (ushort)*(uint32_t *)
                                                                 ((int64_t)pU64_67 + uVal_87) >> 1))
                                       & auArr_143;
                            *(uint *)((int64_t)local_380 + uVal_87) =
                                 CONCAT13(auArr_123[3] + (char)(uVal_127 >> 0x18),
                                          CONCAT12(auArr_123[2] + (char)(uVal_127 >> 0x10),
                                                   CONCAT11(auArr_123[1] + (char)(uVal_127 >> 8),
                                                            auArr_123[0] + (char)uVal_127)));
                            uVal_87 = uVal_87 + 4;
                          } while (uVal_42 != uVal_87);
                          uVal_87 = uVal_42;
                          if (uVal_38 == uVal_98) goto LAB_1800e711e;
                        }
                      }
LAB_1800e709d:
                      uVal_55 = uVal_87;
                      if ((uVal_98 & 1) != 0) {
                        *(byte *)((int64_t)local_380 + uVal_87) =
                             (*(byte *)(lVal_49 + uVal_87) >> 1) + pU8_76[uVal_87 + 1];
                        uVal_55 = uVal_87 | 1;
                      }
                      if (uVal_87 != uVal_99 - 1) {
                        do {
                          *(byte *)(uVal_96 + lVal_6 + -1 + uVal_55) =
                               (*(byte *)(lVal_6 + uVal_68 + -1 + uVal_55) >> 1) + pU8_79[uVal_55];
                          *(byte *)(uVal_96 + lVal_6 + uVal_55) =
                               (*(byte *)(lVal_6 + uVal_68 + uVal_55) >> 1) + pU8_79[uVal_55 + 1];
                          uVal_55 = uVal_55 + 2;
                        } while (uVal_99 != uVal_55);
                      }
                    }
LAB_1800e711e:
                    if ((int)uVal_98 < (int)uVal_81) {
                      lVal_69 = lVal_89;
                      if (((7 < uVal_74) && (0x1f < iVal_61 - uVal_63)) && (0x1f < uVal_98)) {
                        if (uVal_74 < 0x20) {
                          uVal_87 = 0;
                        }
                        else {
                          pArr16_58 = (uint8_t (*)[16])(uVal_96 + lVal_7);
                          pU8_48 = pU8_90;
                          uVal_87 = uVal_40;
                          do {
                            pU8_13 = pU8_48 + lVal_89 + -0x10;
                            pU8_12 = pU8_48 + lVal_89;
                            in_XMM2 = *(uint8_t (*)[16])(lVal_80 + -0x10 + lVal_89);
                            in_XMM3 = *(uint8_t (*)[16])(lVal_80 + lVal_89);
                            auArr_105 = pArr16_58[-1] & in_XMM2;
                            unaff_XMM6[0] = auArr_105[0] + *pU8_13;
                            unaff_XMM6[1] = auArr_105[1] + pU8_13[1];
                            unaff_XMM6[2] = auArr_105[2] + pU8_13[2];
                            unaff_XMM6[3] = auArr_105[3] + pU8_13[3];
                            unaff_XMM6[4] = auArr_105[4] + pU8_13[4];
                            unaff_XMM6[5] = auArr_105[5] + pU8_13[5];
                            unaff_XMM6[6] = auArr_105[6] + pU8_13[6];
                            unaff_XMM6[7] = auArr_105[7] + pU8_13[7];
                            unaff_XMM6[8] = auArr_105[8] + pU8_13[8];
                            unaff_XMM6[9] = auArr_105[9] + pU8_13[9];
                            unaff_XMM6[10] = auArr_105[10] + pU8_13[10];
                            unaff_XMM6[11] = auArr_105[11] + pU8_13[0xb];
                            unaff_XMM6[12] = auArr_105[12] + pU8_13[0xc];
                            unaff_XMM6[13] = auArr_105[13] + pU8_13[0xd];
                            unaff_XMM6[14] = auArr_105[14] + pU8_13[0xe];
                            unaff_XMM6[15] = auArr_105[15] + pU8_13[0xf];
                            auArr_105 = pArr16_58[-1] ^ in_XMM2;
                            auArr_151._0_2_ = auArr_105._0_2_ >> 1;
                            auArr_151._2_2_ = auArr_105._2_2_ >> 1;
                            auArr_151._4_2_ = auArr_105._4_2_ >> 1;
                            auArr_151._6_2_ = auArr_105._6_2_ >> 1;
                            auArr_151._8_2_ = auArr_105._8_2_ >> 1;
                            auArr_151._10_2_ = auArr_105._10_2_ >> 1;
                            auArr_151._12_2_ = auArr_105._12_2_ >> 1;
                            auArr_151._14_2_ = auArr_105._14_2_ >> 1;
                            auArr_151 = auArr_151 & auArr_143;
                            in_XMM4[0] = auArr_151[0] + unaff_XMM6[0];
                            in_XMM4[1] = auArr_151[1] + unaff_XMM6[1];
                            in_XMM4[2] = auArr_151[2] + unaff_XMM6[2];
                            in_XMM4[3] = auArr_151[3] + unaff_XMM6[3];
                            in_XMM4[4] = auArr_151[4] + unaff_XMM6[4];
                            in_XMM4[5] = auArr_151[5] + unaff_XMM6[5];
                            in_XMM4[6] = auArr_151[6] + unaff_XMM6[6];
                            in_XMM4[7] = auArr_151[7] + unaff_XMM6[7];
                            in_XMM4[8] = auArr_151[8] + unaff_XMM6[8];
                            in_XMM4[9] = auArr_151[9] + unaff_XMM6[9];
                            in_XMM4[10] = auArr_151[10] + unaff_XMM6[10];
                            in_XMM4[11] = auArr_151[11] + unaff_XMM6[11];
                            in_XMM4[12] = auArr_151[12] + unaff_XMM6[12];
                            in_XMM4[13] = auArr_151[13] + unaff_XMM6[13];
                            in_XMM4[14] = auArr_151[14] + unaff_XMM6[14];
                            in_XMM4[15] = auArr_151[15] + unaff_XMM6[15];
                            auArr_123 = *pArr16_58 & in_XMM3;
                            auArr_105[0] = auArr_123[0] + *pU8_12;
                            auArr_105[1] = auArr_123[1] + pU8_12[1];
                            auArr_105[2] = auArr_123[2] + pU8_12[2];
                            auArr_105[3] = auArr_123[3] + pU8_12[3];
                            auArr_105[4] = auArr_123[4] + pU8_12[4];
                            auArr_105[5] = auArr_123[5] + pU8_12[5];
                            auArr_105[6] = auArr_123[6] + pU8_12[6];
                            auArr_105[7] = auArr_123[7] + pU8_12[7];
                            auArr_105[8] = auArr_123[8] + pU8_12[8];
                            auArr_105[9] = auArr_123[9] + pU8_12[9];
                            auArr_105[10] = auArr_123[10] + pU8_12[10];
                            auArr_105[11] = auArr_123[11] + pU8_12[0xb];
                            auArr_105[12] = auArr_123[12] + pU8_12[0xc];
                            auArr_105[13] = auArr_123[13] + pU8_12[0xd];
                            auArr_105[14] = auArr_123[14] + pU8_12[0xe];
                            auArr_105[15] = auArr_123[15] + pU8_12[0xf];
                            auArr_123 = *pArr16_58 ^ in_XMM3;
                            auArr_156._0_2_ = auArr_123._0_2_ >> 1;
                            auArr_156._2_2_ = auArr_123._2_2_ >> 1;
                            auArr_156._4_2_ = auArr_123._4_2_ >> 1;
                            auArr_156._6_2_ = auArr_123._6_2_ >> 1;
                            auArr_156._8_2_ = auArr_123._8_2_ >> 1;
                            auArr_156._10_2_ = auArr_123._10_2_ >> 1;
                            auArr_156._12_2_ = auArr_123._12_2_ >> 1;
                            auArr_156._14_2_ = auArr_123._14_2_ >> 1;
                            auArr_156 = auArr_156 & auArr_143;
                            in_XMM5[0] = auArr_156[0] + auArr_105[0];
                            in_XMM5[1] = auArr_156[1] + auArr_105[1];
                            in_XMM5[2] = auArr_156[2] + auArr_105[2];
                            in_XMM5[3] = auArr_156[3] + auArr_105[3];
                            in_XMM5[4] = auArr_156[4] + auArr_105[4];
                            in_XMM5[5] = auArr_156[5] + auArr_105[5];
                            in_XMM5[6] = auArr_156[6] + auArr_105[6];
                            in_XMM5[7] = auArr_156[7] + auArr_105[7];
                            in_XMM5[8] = auArr_156[8] + auArr_105[8];
                            in_XMM5[9] = auArr_156[9] + auArr_105[9];
                            in_XMM5[10] = auArr_156[10] + auArr_105[10];
                            in_XMM5[11] = auArr_156[11] + auArr_105[11];
                            in_XMM5[12] = auArr_156[12] + auArr_105[12];
                            in_XMM5[13] = auArr_156[13] + auArr_105[13];
                            in_XMM5[14] = auArr_156[14] + auArr_105[14];
                            in_XMM5[15] = auArr_156[15] + auArr_105[15];
                            *(uint8_t (*)[16])(pArr16_58[-1] + lVal_89) = in_XMM4;
                            *(uint8_t (*)[16])(*pArr16_58 + lVal_89) = in_XMM5;
                            pArr16_58 = pArr16_58 + 2;
                            lVal_80 = lVal_80 + 0x20;
                            pU8_48 = pU8_48 + 0x20;
                            uVal_87 = uVal_87 - 0x20;
                          } while (uVal_87 != 0);
                          if (uVal_74 == uVal_40) break;
                          uVal_87 = uVal_40;
                          lVal_69 = lVal_9;
                          if ((uVal_74 & 0x18) == 0) goto LAB_1800e713d;
                        }
                        lVal_80 = lVal_11 + uVal_68;
                        lVal_69 = uVal_96 + lVal_11;
                        pU64_67 = local_380;
                        pU8_48 = pU8_85;
                        uVal_55 = uVal_75;
                        do {
                          uVal_91 = *(uint64_t *)(pU8_48 + uVal_87);
                          auArr_105._8_8_ = 0;
                          auArr_105._0_8_ = uVal_91;
                          uVal_34 = *(uint64_t *)((int64_t)pU64_67 + uVal_87) &
                                   *(uint64_t *)(lVal_80 + uVal_87);
                          in_XMM3[0] = (char)uVal_34 + (char)uVal_91;
                          in_XMM3[1] = (char)(uVal_34 >> 8) + (char)(uVal_91 >> 8);
                          in_XMM3[2] = (char)(uVal_34 >> 0x10) + (char)(uVal_91 >> 0x10);
                          in_XMM3[3] = (char)(uVal_34 >> 0x18) + (char)(uVal_91 >> 0x18);
                          in_XMM3[4] = (char)(uVal_34 >> 0x20) + (char)(uVal_91 >> 0x20);
                          in_XMM3[5] = (char)(uVal_34 >> 0x28) + (char)(uVal_91 >> 0x28);
                          in_XMM3[6] = (char)(uVal_34 >> 0x30) + (char)(uVal_91 >> 0x30);
                          in_XMM3[7] = (char)(uVal_34 >> 0x38) + (char)(uVal_91 >> 0x38);
                          in_XMM3._8_8_ = 0;
                          uVal_91 = *(uint64_t *)((int64_t)pU64_67 + uVal_87) ^
                                   *(uint64_t *)(lVal_80 + uVal_87);
                          auArr_144._0_2_ = (ushort)uVal_91 >> 1;
                          auArr_144._2_2_ = (ushort)(uVal_91 >> 0x10) >> 1;
                          auArr_144._4_2_ = (ushort)(uVal_91 >> 0x20) >> 1;
                          auArr_144._6_2_ = (ushort)(uVal_91 >> 0x31);
                          auArr_144._8_8_ = 0;
                          auArr_144 = auArr_144 & auArr_143;
                          in_XMM2._0_8_ =
                               CONCAT17(auArr_144[7] + in_XMM3[7],
                                        CONCAT16(auArr_144[6] + in_XMM3[6],
                                                 CONCAT15(auArr_144[5] + in_XMM3[5],
                                                          CONCAT14(auArr_144[4] + in_XMM3[4],
                                                                   CONCAT13(auArr_144[3] + in_XMM3[3]
                                                                            ,CONCAT12(auArr_144[2] +
                                                                                      in_XMM3[2],
                                                                                      CONCAT11(
                                                  auArr_144[1] + in_XMM3[1],auArr_144[0] + in_XMM3[0])
                                                  ))))));
                          in_XMM2[8] = auArr_144[8];
                          in_XMM2[9] = auArr_144[9];
                          in_XMM2[10] = auArr_144[10];
                          in_XMM2[11] = auArr_144[11];
                          in_XMM2[12] = auArr_144[12];
                          in_XMM2[13] = auArr_144[13];
                          in_XMM2[14] = auArr_144[14];
                          in_XMM2[15] = auArr_144[15];
                          *(uint64_t *)(lVal_69 + uVal_87) = in_XMM2._0_8_;
                          pU64_67 = pU64_67 + 2;
                          uVal_55 = uVal_55 - 8;
                          lVal_69 = lVal_69 + 8;
                          lVal_80 = lVal_80 + 8;
                          pU8_48 = pU8_48 + 8;
                        } while (uVal_87 != uVal_55);
                        lVal_69 = uVal_75 + lVal_89;
                        if (uVal_74 == uVal_75) break;
                      }
LAB_1800e713d:
                      lVal_80 = lVal_69;
                      if ((uVal_81 - (int)lVal_69 & 1) != 0) {
                        *(byte *)((int64_t)local_380 + lVal_69) =
                             (char)((uint)*(byte *)((int64_t)local_380 + (lVal_69 - lVal_89)) +
                                    (uint)*(byte *)(lVal_49 + lVal_69) >> 1) + pU8_76[lVal_69 + 1];
                        lVal_80 = lVal_69 + 1;
                      }
                      if (lVal_69 != lVal_3) {
                        lVal_101 = uVal_68 + lVal_6;
                        lVal_49 = lVal_5 + uVal_96;
                        lVal_100 = lVal_6 + uVal_96;
                        pU8_48 = local_288;
                        lVal_69 = lVal_64;
                        do {
                          *(byte *)(lVal_100 + -1 + lVal_80) =
                               (char)((uint)*(byte *)(lVal_49 + -1 + lVal_80) +
                                      (uint)*(byte *)(lVal_101 + -1 + lVal_80) >> 1) +
                               pU8_48[lVal_80 + -1];
                          *(byte *)(lVal_100 + lVal_80) =
                               (char)((uint)*(byte *)(lVal_49 + lVal_80) +
                                      (uint)*(byte *)(lVal_101 + lVal_80) >> 1) + pU8_48[lVal_80];
                          lVal_69 = lVal_69 + -2;
                          lVal_49 = lVal_49 + 2;
                          pU8_48 = pU8_48 + 2;
                          lVal_101 = lVal_101 + 2;
                          lVal_100 = lVal_100 + 2;
                        } while (lVal_80 != lVal_69);
                      }
                    }
                    break;
                  case 4:
                    if (0 < (int)uVal_98) {
                      uVal_87 = uVal_43;
                      if (uVal_98 < 4) {
                        uVal_55 = 0;
                        uVal_91 = uVal_55;
                      }
                      else {
                        uVal_55 = 0;
                        uVal_91 = 0;
                        if (0x1f < iVal_61 - uVal_63) {
                          if (uVal_98 < 0x20) {
                            uVal_55 = 0;
                          }
                          else {
                            uVal_55 = 0;
                            do {
                              pU8_48 = pU8_76 + uVal_55 + 1;
                              pU8_12 = pU8_76 + uVal_55 + 0x11;
                              fnPtr_53 = (char *)(lVal_69 + -0x10 + uVal_55);
                              in_XMM2[0] = *fnPtr_53 + *pU8_48;
                              in_XMM2[1] = fnPtr_53[1] + pU8_48[1];
                              in_XMM2[2] = fnPtr_53[2] + pU8_48[2];
                              in_XMM2[3] = fnPtr_53[3] + pU8_48[3];
                              in_XMM2[4] = fnPtr_53[4] + pU8_48[4];
                              in_XMM2[5] = fnPtr_53[5] + pU8_48[5];
                              in_XMM2[6] = fnPtr_53[6] + pU8_48[6];
                              in_XMM2[7] = fnPtr_53[7] + pU8_48[7];
                              in_XMM2[8] = fnPtr_53[8] + pU8_48[8];
                              in_XMM2[9] = fnPtr_53[9] + pU8_48[9];
                              in_XMM2[10] = fnPtr_53[10] + pU8_48[10];
                              in_XMM2[11] = fnPtr_53[0xb] + pU8_48[0xb];
                              in_XMM2[12] = fnPtr_53[0xc] + pU8_48[0xc];
                              in_XMM2[13] = fnPtr_53[0xd] + pU8_48[0xd];
                              in_XMM2[14] = fnPtr_53[0xe] + pU8_48[0xe];
                              in_XMM2[15] = fnPtr_53[0xf] + pU8_48[0xf];
                              fnPtr_53 = (char *)(lVal_69 + uVal_55);
                              auArr_105[0] = *fnPtr_53 + *pU8_12;
                              auArr_105[1] = fnPtr_53[1] + pU8_12[1];
                              auArr_105[2] = fnPtr_53[2] + pU8_12[2];
                              auArr_105[3] = fnPtr_53[3] + pU8_12[3];
                              auArr_105[4] = fnPtr_53[4] + pU8_12[4];
                              auArr_105[5] = fnPtr_53[5] + pU8_12[5];
                              auArr_105[6] = fnPtr_53[6] + pU8_12[6];
                              auArr_105[7] = fnPtr_53[7] + pU8_12[7];
                              auArr_105[8] = fnPtr_53[8] + pU8_12[8];
                              auArr_105[9] = fnPtr_53[9] + pU8_12[9];
                              auArr_105[10] = fnPtr_53[10] + pU8_12[10];
                              auArr_105[11] = fnPtr_53[0xb] + pU8_12[0xb];
                              auArr_105[12] = fnPtr_53[0xc] + pU8_12[0xc];
                              auArr_105[13] = fnPtr_53[0xd] + pU8_12[0xd];
                              auArr_105[14] = fnPtr_53[0xe] + pU8_12[0xe];
                              auArr_105[15] = fnPtr_53[0xf] + pU8_12[0xf];
                              *(uint8_t (*)[16])(uVal_96 + lVal_7 + -0x10 + uVal_55) = in_XMM2;
                              *(uint8_t (*)[16])(uVal_96 + lVal_7 + uVal_55) = auArr_105;
                              uVal_55 = uVal_55 + 0x20;
                            } while (uVal_41 != uVal_55);
                            if (uVal_37 == uVal_98) goto LAB_1800e6d5b;
                            uVal_55 = uVal_41;
                            uVal_91 = uVal_41;
                            if ((uVal_98 & 0x1c) == 0) goto joined_r0x0001800e6cd0;
                          }
                          do {
                            uVal_127 = *(uint *)(pU8_76 + uVal_55 + 1);
                            auArr_105 = ZEXT416(uVal_127);
                            uVal_17 = *(uint32_t *)((int64_t)pU64_67 + uVal_55);
                            *(uint *)((int64_t)local_380 + uVal_55) =
                                 CONCAT13((char)((uint)uVal_17 >> 0x18) + (char)(uVal_127 >> 0x18),
                                          CONCAT12((char)((uint)uVal_17 >> 0x10) +
                                                   (char)(uVal_127 >> 0x10),
                                                   CONCAT11((char)((uint)uVal_17 >> 8) +
                                                            (char)(uVal_127 >> 8),
                                                            (char)uVal_17 + (char)uVal_127)));
                            uVal_55 = uVal_55 + 4;
                          } while (uVal_42 != uVal_55);
                          uVal_55 = uVal_42;
                          uVal_91 = uVal_42;
                          if (uVal_38 == uVal_98) goto LAB_1800e6d5b;
                        }
                      }
joined_r0x0001800e6cd0:
                      for (; uVal_87 != 0; uVal_87 = uVal_87 - 1) {
                        *(byte *)((int64_t)local_380 + uVal_55) =
                             *(char *)((int64_t)pU64_67 + uVal_55) + pU8_76[uVal_55 + 1];
                        uVal_55 = uVal_55 + 1;
                      }
                      if (uVal_91 - uVal_99 < 0xfffffffffffffffd) {
                        lVal_80 = lVal_8 + uVal_96;
                        do {
                          *(byte *)(lVal_80 + -3 + uVal_55) =
                               *(char *)(lVal_49 + -3 + uVal_55) + pU8_76[uVal_55 + 1];
                          *(byte *)(lVal_80 + -2 + uVal_55) =
                               *(char *)(lVal_49 + -2 + uVal_55) + pU8_76[uVal_55 + 2];
                          *(byte *)(lVal_80 + -1 + uVal_55) =
                               *(char *)(lVal_49 + -1 + uVal_55) + pU8_76[uVal_55 + 3];
                          *(byte *)(lVal_80 + uVal_55) =
                               *(char *)(lVal_49 + uVal_55) + pU8_76[uVal_55 + 4];
                          uVal_55 = uVal_55 + 4;
                        } while (uVal_99 != uVal_55);
                      }
                    }
LAB_1800e6d5b:
                    if ((int)uVal_98 < (int)uVal_81) {
                      lVal_49 = lVal_89;
                      if (((3 < uVal_74) && (0xf < (uVal_96 + lVal_89) - (uint64_t)uVal_63)) &&
                         ((0xf < iVal_61 - uVal_63 && (0xf < uVal_98)))) {
                        pU8_48 = pU8_79;
                        uVal_87 = uVal_44;
                        pU64_92 = local_380;
                        pU64_97 = pU64_67;
                        auArr_123 = auArr_36;
                        if (uVal_74 < 0x10) {
                          uVal_87 = 0;
                        }
                        else {
                          do {
                            auArr_143 = pmovzxbd(in_XMM2,pU64_97[2]);
                            auArr_146 = pmovzxbd(in_XMM3,pU64_97[3]);
                            auArr_149 = pmovzxbd(in_XMM4,*pU64_97);
                            unaff_XMM14 = pmovzxbd(unaff_XMM14,pU64_97[1]);
                            auArr_105 = pmovzxbd(auArr_105,*(uint32_t *)
                                                          ((int64_t)pU64_97 + lVal_89 + 8));
                            auArr_157 = pmovzxbd(unaff_XMM6,
                                                *(uint32_t *)((int64_t)pU64_97 + lVal_89 + 0xc));
                            auArr_160 = pmovzxbd(auArr_155,*(uint32_t *)((int64_t)pU64_97 + lVal_89)
                                               );
                            unaff_XMM15 = pmovzxbd(unaff_XMM15,
                                                   *(uint32_t *)((int64_t)pU64_97 + lVal_89 + 4));
                            auArr_123 = pmovzxbd(auArr_123,pU64_92[2]);
                            auArr_169 = pmovzxbd(auArr_169,pU64_92[3]);
                            auArr_155 = pmovzxbd(in_XMM5,*pU64_92);
                            auArr_173 = pmovzxbd(unaff_XMM13,pU64_92[1]);
                            auArr_136 = pmaddwd(auArr_143,auArr_36);
                            uVal_63 = auArr_105._0_4_;
                            uVal_148 = auArr_123._0_4_;
                            uVal_127 = auArr_105._4_4_;
                            uVal_152 = auArr_123._4_4_;
                            uVal_71 = auArr_105._8_4_;
                            uVal_77 = auArr_105._12_4_;
                            uVal_153 = auArr_123._8_4_;
                            uVal_154 = auArr_123._12_4_;
                            iVal_61 = auArr_136._0_4_ - (uVal_63 + uVal_148);
                            iVal_139 = auArr_136._4_4_ - (uVal_127 + uVal_152);
                            iVal_140 = auArr_136._8_4_ - (uVal_71 + uVal_153);
                            iVal_141 = auArr_136._12_4_ - (uVal_77 + uVal_154);
                            auArr_168._0_4_ =
                                 (uVal_63 < uVal_148) * uVal_63 | (uVal_63 >= uVal_148) * uVal_148;
                            auArr_168._4_4_ =
                                 (uVal_127 < uVal_152) * uVal_127 | (uVal_127 >= uVal_152) * uVal_152;
                            auArr_168._8_4_ =
                                 (uVal_71 < uVal_153) * uVal_71 | (uVal_71 >= uVal_153) * uVal_153;
                            auArr_168._12_4_ =
                                 (uVal_77 < uVal_154) * uVal_77 | (uVal_77 >= uVal_154) * uVal_154;
                            auArr_171._0_4_ =
                                 (uVal_148 < uVal_63) * uVal_63 | (uVal_148 >= uVal_63) * uVal_148;
                            auArr_171._4_4_ =
                                 (uVal_152 < uVal_127) * uVal_127 | (uVal_152 >= uVal_127) * uVal_152;
                            auArr_171._8_4_ =
                                 (uVal_153 < uVal_71) * uVal_71 | (uVal_153 >= uVal_71) * uVal_153;
                            auArr_171._12_4_ =
                                 (uVal_154 < uVal_77) * uVal_77 | (uVal_154 >= uVal_77) * uVal_154;
                            auArr_136._0_4_ = -(uint)(iVal_61 < (int)auArr_171._0_4_);
                            auArr_136._4_4_ = -(uint)(iVal_139 < (int)auArr_171._4_4_);
                            auArr_136._8_4_ = -(uint)(iVal_140 < (int)auArr_171._8_4_);
                            auArr_136._12_4_ = -(uint)(iVal_141 < (int)auArr_171._12_4_);
                            auArr_137._0_4_ = -(uint)((int)auArr_168._0_4_ < iVal_61);
                            auArr_137._4_4_ = -(uint)((int)auArr_168._4_4_ < iVal_139);
                            auArr_137._8_4_ = -(uint)((int)auArr_168._8_4_ < iVal_140);
                            auArr_137._12_4_ = -(uint)((int)auArr_168._12_4_ < iVal_141);
                            auArr_136 = blendvps(auArr_168,auArr_143,auArr_136);
                            auArr_105 = pmaddwd(auArr_146,auArr_36);
                            uVal_63 = auArr_157._0_4_;
                            uVal_148 = auArr_169._0_4_;
                            uVal_127 = auArr_157._4_4_;
                            uVal_152 = auArr_169._4_4_;
                            uVal_71 = auArr_157._8_4_;
                            uVal_77 = auArr_157._12_4_;
                            uVal_153 = auArr_169._8_4_;
                            uVal_154 = auArr_169._12_4_;
                            iVal_61 = auArr_105._0_4_ - (uVal_63 + uVal_148);
                            iVal_139 = auArr_105._4_4_ - (uVal_127 + uVal_152);
                            iVal_140 = auArr_105._8_4_ - (uVal_71 + uVal_153);
                            iVal_141 = auArr_105._12_4_ - (uVal_77 + uVal_154);
                            auArr_172._0_4_ =
                                 (uVal_63 < uVal_148) * uVal_63 | (uVal_63 >= uVal_148) * uVal_148;
                            auArr_172._4_4_ =
                                 (uVal_127 < uVal_152) * uVal_127 | (uVal_127 >= uVal_152) * uVal_152;
                            auArr_172._8_4_ =
                                 (uVal_71 < uVal_153) * uVal_71 | (uVal_71 >= uVal_153) * uVal_153;
                            auArr_172._12_4_ =
                                 (uVal_77 < uVal_154) * uVal_77 | (uVal_77 >= uVal_154) * uVal_154;
                            auArr_170._0_4_ =
                                 (uVal_148 < uVal_63) * uVal_63 | (uVal_148 >= uVal_63) * uVal_148;
                            auArr_170._4_4_ =
                                 (uVal_152 < uVal_127) * uVal_127 | (uVal_152 >= uVal_127) * uVal_152;
                            auArr_170._8_4_ =
                                 (uVal_153 < uVal_71) * uVal_71 | (uVal_153 >= uVal_71) * uVal_153;
                            auArr_170._12_4_ =
                                 (uVal_154 < uVal_77) * uVal_77 | (uVal_154 >= uVal_77) * uVal_154;
                            auArr_143._0_4_ = -(uint)(iVal_61 < (int)auArr_170._0_4_);
                            auArr_143._4_4_ = -(uint)(iVal_139 < (int)auArr_170._4_4_);
                            auArr_143._8_4_ = -(uint)(iVal_140 < (int)auArr_170._8_4_);
                            auArr_143._12_4_ = -(uint)(iVal_141 < (int)auArr_170._12_4_);
                            in_XMM2._0_4_ = -(uint)((int)auArr_172._0_4_ < iVal_61);
                            in_XMM2._4_4_ = -(uint)((int)auArr_172._4_4_ < iVal_139);
                            in_XMM2._8_4_ = -(uint)((int)auArr_172._8_4_ < iVal_140);
                            in_XMM2._12_4_ = -(uint)((int)auArr_172._12_4_ < iVal_141);
                            auArr_143 = blendvps(auArr_172,auArr_146,auArr_143);
                            auArr_105 = pmaddwd(auArr_149,auArr_36);
                            uVal_63 = auArr_160._0_4_;
                            uVal_148 = auArr_155._0_4_;
                            uVal_127 = auArr_160._4_4_;
                            uVal_152 = auArr_155._4_4_;
                            uVal_71 = auArr_160._8_4_;
                            uVal_77 = auArr_160._12_4_;
                            uVal_153 = auArr_155._8_4_;
                            uVal_154 = auArr_155._12_4_;
                            iVal_61 = auArr_105._0_4_ - (uVal_63 + uVal_148);
                            iVal_139 = auArr_105._4_4_ - (uVal_127 + uVal_152);
                            iVal_140 = auArr_105._8_4_ - (uVal_71 + uVal_153);
                            iVal_141 = auArr_105._12_4_ - (uVal_77 + uVal_154);
                            auArr_158._0_4_ =
                                 (uVal_63 < uVal_148) * uVal_63 | (uVal_63 >= uVal_148) * uVal_148;
                            auArr_158._4_4_ =
                                 (uVal_127 < uVal_152) * uVal_127 | (uVal_127 >= uVal_152) * uVal_152;
                            auArr_158._8_4_ =
                                 (uVal_71 < uVal_153) * uVal_71 | (uVal_71 >= uVal_153) * uVal_153;
                            auArr_158._12_4_ =
                                 (uVal_77 < uVal_154) * uVal_77 | (uVal_77 >= uVal_154) * uVal_154;
                            auArr_160._0_4_ =
                                 (uVal_148 < uVal_63) * uVal_63 | (uVal_148 >= uVal_63) * uVal_148;
                            auArr_160._4_4_ =
                                 (uVal_152 < uVal_127) * uVal_127 | (uVal_152 >= uVal_127) * uVal_152;
                            auArr_160._8_4_ =
                                 (uVal_153 < uVal_71) * uVal_71 | (uVal_153 >= uVal_71) * uVal_153;
                            auArr_160._12_4_ =
                                 (uVal_154 < uVal_77) * uVal_77 | (uVal_154 >= uVal_77) * uVal_154;
                            auArr_157._0_4_ = -(uint)(iVal_61 < (int)auArr_160._0_4_);
                            auArr_157._4_4_ = -(uint)(iVal_139 < (int)auArr_160._4_4_);
                            auArr_157._8_4_ = -(uint)(iVal_140 < (int)auArr_160._8_4_);
                            auArr_157._12_4_ = -(uint)(iVal_141 < (int)auArr_160._12_4_);
                            in_XMM3._0_4_ = -(uint)((int)auArr_158._0_4_ < iVal_61);
                            in_XMM3._4_4_ = -(uint)((int)auArr_158._4_4_ < iVal_139);
                            in_XMM3._8_4_ = -(uint)((int)auArr_158._8_4_ < iVal_140);
                            in_XMM3._12_4_ = -(uint)((int)auArr_158._12_4_ < iVal_141);
                            unaff_XMM6 = blendvps(auArr_158,auArr_149,auArr_157);
                            auArr_105 = pmaddwd(unaff_XMM14,auArr_36);
                            uVal_63 = unaff_XMM15._0_4_;
                            uVal_148 = auArr_173._0_4_;
                            uVal_127 = unaff_XMM15._4_4_;
                            uVal_152 = auArr_173._4_4_;
                            uVal_71 = unaff_XMM15._8_4_;
                            uVal_77 = unaff_XMM15._12_4_;
                            uVal_153 = auArr_173._8_4_;
                            uVal_154 = auArr_173._12_4_;
                            iVal_61 = auArr_105._0_4_ - (uVal_63 + uVal_148);
                            iVal_139 = auArr_105._4_4_ - (uVal_127 + uVal_152);
                            iVal_140 = auArr_105._8_4_ - (uVal_71 + uVal_153);
                            iVal_141 = auArr_105._12_4_ - (uVal_77 + uVal_154);
                            auArr_173._0_4_ =
                                 (uVal_63 < uVal_148) * uVal_63 | (uVal_63 >= uVal_148) * uVal_148;
                            auArr_173._4_4_ =
                                 (uVal_127 < uVal_152) * uVal_127 | (uVal_127 >= uVal_152) * uVal_152;
                            auArr_173._8_4_ =
                                 (uVal_71 < uVal_153) * uVal_71 | (uVal_71 >= uVal_153) * uVal_153;
                            auArr_173._12_4_ =
                                 (uVal_77 < uVal_154) * uVal_77 | (uVal_77 >= uVal_154) * uVal_154;
                            auArr_174._0_4_ =
                                 (uVal_148 < uVal_63) * uVal_63 | (uVal_148 >= uVal_63) * uVal_148;
                            auArr_174._4_4_ =
                                 (uVal_152 < uVal_127) * uVal_127 | (uVal_152 >= uVal_127) * uVal_152;
                            auArr_174._8_4_ =
                                 (uVal_153 < uVal_71) * uVal_71 | (uVal_153 >= uVal_71) * uVal_153;
                            auArr_174._12_4_ =
                                 (uVal_154 < uVal_77) * uVal_77 | (uVal_154 >= uVal_77) * uVal_154;
                            auArr_149._0_4_ = -(uint)(iVal_61 < (int)auArr_174._0_4_);
                            auArr_149._4_4_ = -(uint)(iVal_139 < (int)auArr_174._4_4_);
                            auArr_149._8_4_ = -(uint)(iVal_140 < (int)auArr_174._8_4_);
                            auArr_149._12_4_ = -(uint)(iVal_141 < (int)auArr_174._12_4_);
                            in_XMM4._0_4_ = -(uint)((int)auArr_173._0_4_ < iVal_61);
                            in_XMM4._4_4_ = -(uint)((int)auArr_173._4_4_ < iVal_139);
                            in_XMM4._8_4_ = -(uint)((int)auArr_173._8_4_ < iVal_140);
                            in_XMM4._12_4_ = -(uint)((int)auArr_173._12_4_ < iVal_141);
                            auArr_155 = blendvps(auArr_173,unaff_XMM14,auArr_149);
                            unaff_XMM13 = blendvps(auArr_174,auArr_155,in_XMM4);
                            auArr_105 = blendvps(auArr_160,unaff_XMM6,in_XMM3);
                            auArr_169 = blendvps(auArr_170,auArr_143,in_XMM2);
                            auArr_143 = blendvps(auArr_171,auArr_136,auArr_137);
                            auArr_136 = packusdw(auArr_105,unaff_XMM13);
                            auArr_123 = packusdw(auArr_143,auArr_169);
                            sz_18 = auArr_136._0_2_;
                            sz_19 = auArr_136._2_2_;
                            sz_20 = auArr_136._4_2_;
                            sz_21 = auArr_136._6_2_;
                            sz_22 = auArr_136._8_2_;
                            sz_23 = auArr_136._10_2_;
                            sz_24 = auArr_136._12_2_;
                            sz_25 = auArr_136._14_2_;
                            sz_26 = auArr_123._0_2_;
                            sz_27 = auArr_123._2_2_;
                            sz_28 = auArr_123._4_2_;
                            sz_29 = auArr_123._6_2_;
                            sz_30 = auArr_123._8_2_;
                            sz_31 = auArr_123._10_2_;
                            sz_32 = auArr_123._12_2_;
                            sz_33 = auArr_123._14_2_;
                            auArr_105 = *(uint8_t (*)[16])(pU8_48 + lVal_89);
                            in_XMM5[0] = ((0 < sz_18) * (sz_18 < 0xff) * auArr_136[0] -
                                         (0xff < sz_18)) + auArr_105[0];
                            in_XMM5[1] = ((0 < sz_19) * (sz_19 < 0xff) * auArr_136[2] -
                                         (0xff < sz_19)) + auArr_105[1];
                            in_XMM5[2] = ((0 < sz_20) * (sz_20 < 0xff) * auArr_136[4] -
                                         (0xff < sz_20)) + auArr_105[2];
                            in_XMM5[3] = ((0 < sz_21) * (sz_21 < 0xff) * auArr_136[6] -
                                         (0xff < sz_21)) + auArr_105[3];
                            in_XMM5[4] = ((0 < sz_22) * (sz_22 < 0xff) * auArr_136[8] -
                                         (0xff < sz_22)) + auArr_105[4];
                            in_XMM5[5] = ((0 < sz_23) * (sz_23 < 0xff) * auArr_136[10] -
                                         (0xff < sz_23)) + auArr_105[5];
                            in_XMM5[6] = ((0 < sz_24) * (sz_24 < 0xff) * auArr_136[12] -
                                         (0xff < sz_24)) + auArr_105[6];
                            in_XMM5[7] = ((0 < sz_25) * (sz_25 < 0xff) * auArr_136[14] -
                                         (0xff < sz_25)) + auArr_105[7];
                            in_XMM5[8] = ((0 < sz_26) * (sz_26 < 0xff) * auArr_123[0] -
                                         (0xff < sz_26)) + auArr_105[8];
                            in_XMM5[9] = ((0 < sz_27) * (sz_27 < 0xff) * auArr_123[2] -
                                         (0xff < sz_27)) + auArr_105[9];
                            in_XMM5[10] = ((0 < sz_28) * (sz_28 < 0xff) * auArr_123[4] -
                                          (0xff < sz_28)) + auArr_105[10];
                            in_XMM5[11] = ((0 < sz_29) * (sz_29 < 0xff) * auArr_123[6] -
                                          (0xff < sz_29)) + auArr_105[11];
                            in_XMM5[12] = ((0 < sz_30) * (sz_30 < 0xff) * auArr_123[8] -
                                          (0xff < sz_30)) + auArr_105[12];
                            in_XMM5[13] = ((0 < sz_31) * (sz_31 < 0xff) * auArr_123[10] -
                                          (0xff < sz_31)) + auArr_105[13];
                            in_XMM5[14] = ((0 < sz_32) * (sz_32 < 0xff) * auArr_123[12] -
                                          (0xff < sz_32)) + auArr_105[14];
                            in_XMM5[15] = ((0 < sz_33) * (sz_33 < 0xff) * auArr_123[14] -
                                          (0xff < sz_33)) + auArr_105[15];
                            *(uint8_t (*)[16])((int64_t)pU64_92 + lVal_89) = in_XMM5;
                            uVal_87 = uVal_87 - 0x10;
                            pU8_48 = pU8_48 + 0x10;
                            pU64_92 = pU64_92 + 4;
                            pU64_97 = pU64_97 + 4;
                          } while (uVal_87 != 0);
                          auArr_155._8_4_ = 0xffffffff;
                          auArr_155._0_8_ = 0xffffffffffffffff;
                          auArr_155._12_4_ = 0xffffffff;
                          auArr_169._8_8_ = 0;
                          auArr_169._0_8_ = DAT_1806b2a30;
                          auArr_136 = _DAT_1806b2a40;
                          auArr_143 = _DAT_1806b2a10;
                          if (uVal_74 == uVal_44) break;
                          uVal_87 = uVal_44;
                          lVal_49 = uVal_44 + lVal_89;
                          if ((uVal_74 & 0xc) == 0) goto LAB_1800e6d7c;
                        }
                        lVal_49 = lVal_11 + uVal_68;
                        lVal_80 = lVal_11 + uVal_96;
                        pU64_92 = local_380;
                        uVal_55 = uVal_102;
                        pU8_48 = pU8_85;
                        pU64_97 = pU64_67;
                        do {
                          in_XMM2 = pmovzxbd(in_XMM2,*(uint32_t *)((int64_t)pU64_97 + uVal_87));
                          auArr_105 = pmovzxbd(auArr_105,*(uint32_t *)(lVal_49 + uVal_87));
                          auArr_146 = pmovzxbd(in_XMM3,*(uint32_t *)((int64_t)pU64_92 + uVal_87));
                          auArr_123 = pmaddwd(in_XMM2,auArr_36);
                          uVal_63 = auArr_146._0_4_;
                          uVal_148 = auArr_105._0_4_;
                          uVal_127 = auArr_146._4_4_;
                          uVal_152 = auArr_105._4_4_;
                          uVal_71 = auArr_146._8_4_;
                          uVal_153 = auArr_105._8_4_;
                          uVal_154 = auArr_105._12_4_;
                          uVal_77 = auArr_146._12_4_;
                          iVal_61 = auArr_123._0_4_ - (uVal_148 + uVal_63);
                          iVal_139 = auArr_123._4_4_ - (uVal_152 + uVal_127);
                          iVal_140 = auArr_123._8_4_ - (uVal_153 + uVal_71);
                          iVal_141 = auArr_123._12_4_ - (uVal_154 + uVal_77);
                          auArr_150._0_4_ =
                               (uVal_148 < uVal_63) * uVal_148 | (uVal_148 >= uVal_63) * uVal_63;
                          auArr_150._4_4_ =
                               (uVal_152 < uVal_127) * uVal_152 | (uVal_152 >= uVal_127) * uVal_127;
                          auArr_150._8_4_ =
                               (uVal_153 < uVal_71) * uVal_153 | (uVal_153 >= uVal_71) * uVal_71;
                          auArr_150._12_4_ =
                               (uVal_154 < uVal_77) * uVal_154 | (uVal_154 >= uVal_77) * uVal_77;
                          auArr_147._0_4_ =
                               (uVal_63 < uVal_148) * uVal_148 | (uVal_63 >= uVal_148) * uVal_63;
                          auArr_147._4_4_ =
                               (uVal_127 < uVal_152) * uVal_152 | (uVal_127 >= uVal_152) * uVal_127;
                          auArr_147._8_4_ =
                               (uVal_71 < uVal_153) * uVal_153 | (uVal_71 >= uVal_153) * uVal_71;
                          auArr_147._12_4_ =
                               (uVal_77 < uVal_154) * uVal_154 | (uVal_77 >= uVal_154) * uVal_77;
                          auArr_121._0_4_ = -(uint)(iVal_61 < (int)auArr_147._0_4_);
                          auArr_121._4_4_ = -(uint)(iVal_139 < (int)auArr_147._4_4_);
                          auArr_121._8_4_ = -(uint)(iVal_140 < (int)auArr_147._8_4_);
                          auArr_121._12_4_ = -(uint)(iVal_141 < (int)auArr_147._12_4_);
                          auArr_138._0_4_ = -(uint)((int)auArr_150._0_4_ < iVal_61);
                          auArr_138._4_4_ = -(uint)((int)auArr_150._4_4_ < iVal_139);
                          auArr_138._8_4_ = -(uint)((int)auArr_150._8_4_ < iVal_140);
                          auArr_138._12_4_ = -(uint)((int)auArr_150._12_4_ < iVal_141);
                          in_XMM4 = blendvps(auArr_150,in_XMM2,auArr_121);
                          auArr_123 = blendvps(auArr_147,in_XMM4,auArr_138);
                          uVal_63 = *(uint *)(pU8_48 + uVal_87);
                          auArr_105 = ZEXT416(uVal_63);
                          auArr_123 = packusdw(auArr_123,auArr_123);
                          sz_18 = auArr_123._0_2_;
                          sz_19 = auArr_123._2_2_;
                          sz_20 = auArr_123._4_2_;
                          sz_21 = auArr_123._6_2_;
                          sz_22 = auArr_123._8_2_;
                          sz_23 = auArr_123._10_2_;
                          sz_24 = auArr_123._12_2_;
                          sz_25 = auArr_123._14_2_;
                          in_XMM3._0_4_ =
                               CONCAT13(((0 < sz_21) * (sz_21 < 0xff) * auArr_123[6] -
                                        (0xff < sz_21)) + (char)(uVal_63 >> 0x18),
                                        CONCAT12(((0 < sz_20) * (sz_20 < 0xff) * auArr_123[4] -
                                                 (0xff < sz_20)) + (char)(uVal_63 >> 0x10),
                                                 CONCAT11(((0 < sz_19) * (sz_19 < 0xff) *
                                                           auArr_123[2] - (0xff < sz_19)) +
                                                          (char)(uVal_63 >> 8),
                                                          ((0 < sz_18) * (sz_18 < 0xff) *
                                                           auArr_123[0] - (0xff < sz_18)) +
                                                          (char)uVal_63)));
                          in_XMM3[4] = (0 < sz_22) * (sz_22 < 0xff) * auArr_123[8] -
                                       (0xff < sz_22);
                          in_XMM3[5] = (0 < sz_23) * (sz_23 < 0xff) * auArr_123[10] -
                                       (0xff < sz_23);
                          in_XMM3[6] = (0 < sz_24) * (sz_24 < 0xff) * auArr_123[12] -
                                       (0xff < sz_24);
                          in_XMM3[7] = (0 < sz_25) * (sz_25 < 0xff) * auArr_123[14] -
                                       (0xff < sz_25);
                          in_XMM3[8] = (0 < sz_18) * (sz_18 < 0xff) * auArr_123[0] -
                                       (0xff < sz_18);
                          in_XMM3[9] = (0 < sz_19) * (sz_19 < 0xff) * auArr_123[2] -
                                       (0xff < sz_19);
                          in_XMM3[10] = (0 < sz_20) * (sz_20 < 0xff) * auArr_123[4] -
                                        (0xff < sz_20);
                          in_XMM3[11] = (0 < sz_21) * (sz_21 < 0xff) * auArr_123[6] -
                                        (0xff < sz_21);
                          in_XMM3[12] = (0 < sz_22) * (sz_22 < 0xff) * auArr_123[8] -
                                        (0xff < sz_22);
                          in_XMM3[13] = (0 < sz_23) * (sz_23 < 0xff) * auArr_123[10] -
                                        (0xff < sz_23);
                          in_XMM3[14] = (0 < sz_24) * (sz_24 < 0xff) * auArr_123[12] -
                                        (0xff < sz_24);
                          in_XMM3[15] = (0 < sz_25) * (sz_25 < 0xff) * auArr_123[14] -
                                        (0xff < sz_25);
                          *(int *)(lVal_80 + uVal_87) = in_XMM3._0_4_;
                          pU64_97 = pU64_97 + 1;
                          pU64_92 = pU64_92 + 1;
                          uVal_55 = uVal_55 - 4;
                          lVal_80 = lVal_80 + 4;
                          lVal_49 = lVal_49 + 4;
                          pU8_48 = pU8_48 + 4;
                        } while (uVal_87 != uVal_55);
                        lVal_49 = lVal_10;
                        if (uVal_74 == uVal_102) break;
                      }
LAB_1800e6d7c:
                      lVal_100 = uVal_68 + lVal_84;
                      lVal_69 = uVal_96 + lVal_84;
                      lVal_80 = lVal_64;
                      pU64_92 = local_380;
                      pU8_48 = pU8_79;
                      do {
                        bFlag_51 = *(byte *)(lVal_100 + lVal_49);
                        bFlag_59 = *(byte *)((int64_t)pU64_67 + lVal_49);
                        bFlag_14 = *(byte *)(lVal_69 + lVal_49);
                        uVal_71 = (uint)bFlag_59;
                        uVal_77 = (uint)bFlag_14;
                        iVal_61 = (((uint)bFlag_51 + (uint)bFlag_51 * 2) - uVal_71) - uVal_77;
                        uVal_63 = (uint)bFlag_59;
                        uVal_127 = uVal_63;
                        if (uVal_77 < uVal_71) {
                          uVal_127 = (uint)bFlag_14;
                        }
                        if (uVal_77 >= uVal_71 && uVal_77 != uVal_63) {
                          uVal_63 = (uint)bFlag_14;
                        }
                        uVal_71 = (uint)bFlag_51;
                        if ((int)uVal_63 <= iVal_61) {
                          uVal_71 = uVal_127;
                        }
                        ch_60 = (char)uVal_71;
                        if (iVal_61 <= (int)uVal_127) {
                          ch_60 = (char)uVal_63;
                        }
                        *(byte *)((int64_t)pU64_92 + lVal_49) = ch_60 + pU8_48[lVal_49];
                        lVal_100 = lVal_100 + 1;
                        lVal_69 = lVal_69 + 1;
                        pU8_48 = pU8_48 + 1;
                        pU64_67 = (uint32_t *)((int64_t)pU64_67 + 1);
                        pU64_92 = (uint32_t *)((int64_t)pU64_92 + 1);
                        lVal_80 = lVal_80 + -1;
                      } while (lVal_49 != lVal_80);
                    }
                    break;
                  case 5:
                    auArr_105._0_8_ = func_0x1806aa960(local_380);
                    auArr_105._8_8_ = extraout_XMM0_Qb_03;
                    if ((int)uVal_98 < (int)uVal_81) {
                      lVal_49 = lVal_89;
                      if (0x1f < uVal_98 && 3 < uVal_74) {
                        if (uVal_74 < 0x20) {
                          uVal_68 = 0;
                        }
                        else {
                          uVal_68 = 0;
                          do {
                            auArr_105 = *(uint8_t (*)[16])(pU8_66 + (uVal_68 - 0x10));
                            pU8_48 = pU8_66 + uVal_68;
                            pU64_56 = (ushort *)((int64_t)local_380 + uVal_68);
                            pU64_50 = (ushort *)((int64_t)local_380 + uVal_68 + 0x10);
                            auArr_123._0_2_ = *pU64_56 >> 1;
                            auArr_123._2_2_ = pU64_56[1] >> 1;
                            auArr_123._4_2_ = pU64_56[2] >> 1;
                            auArr_123._6_2_ = pU64_56[3] >> 1;
                            auArr_123._8_2_ = pU64_56[4] >> 1;
                            auArr_123._10_2_ = pU64_56[5] >> 1;
                            auArr_123._12_2_ = pU64_56[6] >> 1;
                            auArr_123._14_2_ = pU64_56[7] >> 1;
                            auArr_123 = auArr_123 & auArr_143;
                            in_XMM2[0] = auArr_123[0] + auArr_105[0];
                            in_XMM2[1] = auArr_123[1] + auArr_105[1];
                            in_XMM2[2] = auArr_123[2] + auArr_105[2];
                            in_XMM2[3] = auArr_123[3] + auArr_105[3];
                            in_XMM2[4] = auArr_123[4] + auArr_105[4];
                            in_XMM2[5] = auArr_123[5] + auArr_105[5];
                            in_XMM2[6] = auArr_123[6] + auArr_105[6];
                            in_XMM2[7] = auArr_123[7] + auArr_105[7];
                            in_XMM2[8] = auArr_123[8] + auArr_105[8];
                            in_XMM2[9] = auArr_123[9] + auArr_105[9];
                            in_XMM2[10] = auArr_123[10] + auArr_105[10];
                            in_XMM2[11] = auArr_123[11] + auArr_105[11];
                            in_XMM2[12] = auArr_123[12] + auArr_105[12];
                            in_XMM2[13] = auArr_123[13] + auArr_105[13];
                            in_XMM2[14] = auArr_123[14] + auArr_105[14];
                            in_XMM2[15] = auArr_123[15] + auArr_105[15];
                            auArr_146._0_2_ = *pU64_50 >> 1;
                            auArr_146._2_2_ = pU64_50[1] >> 1;
                            auArr_146._4_2_ = pU64_50[2] >> 1;
                            auArr_146._6_2_ = pU64_50[3] >> 1;
                            auArr_146._8_2_ = pU64_50[4] >> 1;
                            auArr_146._10_2_ = pU64_50[5] >> 1;
                            auArr_146._12_2_ = pU64_50[6] >> 1;
                            auArr_146._14_2_ = pU64_50[7] >> 1;
                            auArr_146 = auArr_146 & auArr_143;
                            in_XMM3[0] = auArr_146[0] + *pU8_48;
                            in_XMM3[1] = auArr_146[1] + pU8_48[1];
                            in_XMM3[2] = auArr_146[2] + pU8_48[2];
                            in_XMM3[3] = auArr_146[3] + pU8_48[3];
                            in_XMM3[4] = auArr_146[4] + pU8_48[4];
                            in_XMM3[5] = auArr_146[5] + pU8_48[5];
                            in_XMM3[6] = auArr_146[6] + pU8_48[6];
                            in_XMM3[7] = auArr_146[7] + pU8_48[7];
                            in_XMM3[8] = auArr_146[8] + pU8_48[8];
                            in_XMM3[9] = auArr_146[9] + pU8_48[9];
                            in_XMM3[10] = auArr_146[10] + pU8_48[10];
                            in_XMM3[11] = auArr_146[11] + pU8_48[0xb];
                            in_XMM3[12] = auArr_146[12] + pU8_48[0xc];
                            in_XMM3[13] = auArr_146[13] + pU8_48[0xd];
                            in_XMM3[14] = auArr_146[14] + pU8_48[0xe];
                            in_XMM3[15] = auArr_146[15] + pU8_48[0xf];
                            *(uint8_t (*)[16])((int64_t)local_380 + uVal_68 + lVal_89) = in_XMM2;
                            *(uint8_t (*)[16])((int64_t)local_380 + uVal_68 + lVal_89 + 0x10) =
                                 in_XMM3;
                            uVal_68 = uVal_68 + 0x20;
                          } while (uVal_40 != uVal_68);
                          if (uVal_74 == uVal_40) break;
                          uVal_68 = uVal_40;
                          lVal_49 = lVal_9;
                          if ((uVal_74 & 0x1c) == 0) goto LAB_1800e74c2;
                        }
                        pU64_67 = (uint32_t *)(uVal_96 + uVal_68 + lVal_39);
                        lVal_49 = -uVal_102 + uVal_68;
                        pU8_48 = param_2 + uVal_68;
                        do {
                          uVal_63 = *(uint *)(pU8_48 + lVal_95 + lVal_89);
                          auArr_105 = ZEXT416(uVal_63);
                          auArr_123 = ZEXT416(CONCAT22((ushort)((uint)*pU64_67 >> 0x11),
                                                      (ushort)*pU64_67 >> 1)) & auArr_143;
                          *(uint *)((int64_t)pU64_67 + lVal_89) =
                               CONCAT13(auArr_123[3] + (char)(uVal_63 >> 0x18),
                                        CONCAT12(auArr_123[2] + (char)(uVal_63 >> 0x10),
                                                 CONCAT11(auArr_123[1] + (char)(uVal_63 >> 8),
                                                          auArr_123[0] + (char)uVal_63)));
                          pU64_67 = pU64_67 + 1;
                          pU8_48 = pU8_48 + 4;
                          lVal_49 = lVal_49 + 4;
                        } while (lVal_49 != 0);
                        lVal_49 = lVal_10;
                        if (uVal_74 == uVal_102) break;
                      }
LAB_1800e74c2:
                      lVal_80 = lVal_49;
                      if ((uVal_81 - (int)lVal_49 & 1) != 0) {
                        *(byte *)((int64_t)local_380 + lVal_49) =
                             (*(byte *)((int64_t)local_380 + (lVal_49 - lVal_89)) >> 1) +
                             pU8_76[lVal_49 + 1];
                        lVal_80 = lVal_49 + 1;
                      }
                      if (lVal_49 != lVal_3) {
                        do {
                          *(byte *)(lVal_6 + uVal_96 + -1 + lVal_80) =
                               (*(byte *)(lVal_5 + uVal_96 + -1 + lVal_80) >> 1) + pU8_76[lVal_80 + 1];
                          *(byte *)(lVal_6 + uVal_96 + lVal_80) =
                               (*(byte *)(lVal_5 + uVal_96 + lVal_80) >> 1) + pU8_76[lVal_80 + 2];
                          lVal_80 = lVal_80 + 2;
                        } while (lVal_64 != lVal_80);
                      }
                    }
                  }
                }
                uVal_68 = (uint64_t)(iVal_103 * (uint)uVal_54);
                pU64_56 = (ushort *)(lVal_86 + uVal_68);
                if ((int)param_7 < 8) {
                  bFlag_51 = 1;
                  if (param_8 == 0) {
                    bFlag_51 = (&DAT_1806b3a70)[(int)param_7];
                  }
                  if (param_7 == 4) {
                    if (uVal_88 != 0) {
                      pU64_50 = pU64_56;
                      if (uVal_62 != 0) {
                        lVal_49 = lVal_86 + local_358;
                        lVal_80 = 0;
                        do {
                          bFlag_59 = *(byte *)local_380;
                          local_380 = (uint32_t *)((int64_t)local_380 + 1);
                          *(byte *)(lVal_49 + lVal_80) = (bFlag_59 >> 4) * bFlag_51;
                          *(byte *)(lVal_49 + 1 + lVal_80) = (bFlag_59 & 0xf) * bFlag_51;
                          lVal_80 = lVal_80 + 2;
                        } while (uVal_73 != (uint)lVal_80);
                        if ((uVal_88 & 1) == 0) goto LAB_1800e79ec;
                        pU64_50 = (ushort *)(lVal_49 + lVal_80);
                      }
                      *(byte *)pU64_50 = (*(byte *)local_380 >> 4) * bFlag_51;
                    }
                  }
                  else if (param_7 == 2) {
                    if (uVal_88 != 0) {
                      if (uVal_62 == 0) {
                        bFlag_59 = 0;
                        uVal_96 = 0;
                        pU64_50 = pU64_56;
                      }
                      else {
                        lVal_49 = lVal_86 + local_358;
                        uVal_96 = 0;
                        uVal_68 = 0;
                        do {
                          if ((uVal_96 & 2) == 0) {
                            uVal_68 = (uint64_t)*(byte *)local_380;
                            local_380 = (uint32_t *)((int64_t)local_380 + 1);
                          }
                          *(byte *)(lVal_49 + uVal_96) = (char)(uVal_68 >> 6) * bFlag_51;
                          *(byte *)(lVal_49 + 1 + uVal_96) = ((byte)(uVal_68 >> 4) & 3) * bFlag_51;
                          bFlag_59 = (char)uVal_68 << 4;
                          uVal_68 = (uint64_t)bFlag_59;
                          uVal_96 = uVal_96 + 2;
                        } while (uVal_73 != (uint)uVal_96);
                        if ((uVal_88 & 1) == 0) goto LAB_1800e79ec;
                        pU64_50 = (ushort *)(lVal_49 + uVal_96);
                      }
                      if ((uVal_96 & 3) == 0) {
                        bFlag_59 = *(byte *)local_380;
                      }
                      *(byte *)pU64_50 = (bFlag_59 >> 6) * bFlag_51;
                    }
                  }
                  else if (uVal_88 != 0) {
                    if (uVal_62 == 0) {
                      ch_60 = '\0';
                      uVal_96 = 0;
                      pU64_50 = pU64_56;
                    }
                    else {
                      lVal_49 = local_358 + lVal_86;
                      uVal_96 = 0;
                      ch_60 = '\0';
                      do {
                        if ((uVal_96 & 6) == 0) {
                          ch_60 = *(char *)local_380;
                          local_380 = (uint32_t *)((int64_t)local_380 + 1);
                        }
                        *(byte *)(lVal_49 + uVal_96) = ch_60 >> 7 & bFlag_51;
                        *(byte *)(lVal_49 + 1 + uVal_96) = (char)(ch_60 * '\x02') >> 7 & bFlag_51;
                        ch_60 = ch_60 << 2;
                        uVal_96 = uVal_96 + 2;
                      } while (uVal_73 != (uint)uVal_96);
                      if ((uVal_88 & 1) == 0) goto LAB_1800e79ec;
                      pU64_50 = (ushort *)(lVal_49 + uVal_96);
                    }
                    if ((uVal_96 & 7) == 0) {
                      ch_60 = *(char *)local_380;
                    }
                    *(byte *)pU64_50 = ch_60 >> 7 & bFlag_51;
                  }
LAB_1800e79ec:
                  if (uVal_16 != param_4) {
                    if (uVal_16 == 1) {
                      if (-1 < (int)uVal_1) {
                        uVal_96 = uVal_47;
                        if ((uVal_1 & 3) != 3) {
                          lVal_49 = lVal_86 + local_358;
                          uVal_68 = (uint64_t)(uVal_82 & 3);
                          do {
                            *(uint8_t *)(lVal_49 + 1 + uVal_96 * 2) = 0xff;
                            *(uint8_t *)(lVal_49 + uVal_96 * 2) = *(uint8_t *)(lVal_49 + uVal_96);
                            uVal_96 = uVal_96 - 1;
                            uVal_68 = uVal_68 - 1;
                          } while (uVal_68 != 0);
                        }
                        if (2 < uVal_1) {
                          lVal_86 = lVal_86 + local_358;
                          do {
                            *(uint8_t *)(lVal_86 + 1 + uVal_96 * 2) = 0xff;
                            *(uint8_t *)(lVal_86 + uVal_96 * 2) = *(uint8_t *)(lVal_86 + uVal_96);
                            *(uint8_t *)(lVal_86 + -1 + uVal_96 * 2) = 0xff;
                            *(uint8_t *)(lVal_86 + -2 + uVal_96 * 2) =
                                 *(uint8_t *)(lVal_86 + -1 + uVal_96);
                            *(uint8_t *)(lVal_86 + -3 + uVal_96 * 2) = 0xff;
                            *(uint8_t *)(lVal_86 + -4 + uVal_96 * 2) =
                                 *(uint8_t *)(lVal_86 + -2 + uVal_96);
                            *(uint8_t *)(lVal_86 + -5 + uVal_96 * 2) = 0xff;
                            *(uint8_t *)(lVal_86 + -6 + uVal_96 * 2) =
                                 *(uint8_t *)(lVal_86 + -3 + uVal_96);
                            uVal_96 = uVal_96 - 4;
                          } while (uVal_96 != 0xffffffffffffffff);
                        }
                      }
                    }
                    else if (-1 < (int)uVal_1) {
                      uVal_96 = uVal_47;
                      if ((uVal_1 & 1) == 0) {
                        *(byte *)((int64_t)pU64_56 + uVal_47 * 4 + 3) = 0xff;
                        *(byte *)(pU64_56 + uVal_47 * 2 + 1) =
                             *(byte *)((int64_t)pU64_56 + lVal_35 + 2);
                        *(byte *)((int64_t)pU64_56 + uVal_47 * 4 + 1) =
                             *(byte *)((int64_t)pU64_56 + lVal_35 + 1);
                        *(byte *)(pU64_56 + uVal_47 * 2) = *(byte *)((int64_t)pU64_56 + lVal_35);
                        uVal_96 = uVal_47 - 1;
                      }
                      if (uVal_47 != 0) {
                        pU64_57 = (uint8_t *)(uVal_96 * 3 + local_358 + lVal_86);
                        lVal_86 = lVal_86 + local_358;
                        do {
                          *(uint8_t *)(lVal_86 + 3 + uVal_96 * 4) = 0xff;
                          *(uint8_t *)(lVal_86 + 2 + uVal_96 * 4) = pU64_57[2];
                          *(uint8_t *)(lVal_86 + 1 + uVal_96 * 4) = pU64_57[1];
                          *(uint8_t *)(lVal_86 + uVal_96 * 4) = *pU64_57;
                          *(uint8_t *)(lVal_86 + -1 + uVal_96 * 4) = 0xff;
                          *(uint8_t *)(lVal_86 + -2 + uVal_96 * 4) = pU64_57[-1];
                          *(uint8_t *)(lVal_86 + -3 + uVal_96 * 4) = pU64_57[-2];
                          *(uint8_t *)(lVal_86 + -4 + uVal_96 * 4) = pU64_57[-3];
                          uVal_96 = uVal_96 - 2;
                          pU64_57 = pU64_57 + -6;
                        } while (uVal_96 != 0xffffffffffffffff);
                      }
                    }
                  }
                }
                else if (param_7 == 8) {
                  if (uVal_16 == param_4) {
                    auArr_105._0_8_ = func_0x1806aa960(pU64_56,local_380,uVal_88);
                    auArr_105._8_8_ = extraout_XMM0_Qb_00;
                  }
                  else if (uVal_16 == 1) {
                    if (-1 < (int)uVal_1) {
                      uVal_68 = uVal_47;
                      if (2 < uVal_1) {
                        uVal_159 = auArr_155[0];
                        uVal_161 = auArr_155[1];
                        uVal_162 = auArr_155[2];
                        uVal_163 = auArr_155[3];
                        uVal_164 = auArr_155[4];
                        uVal_165 = auArr_155[5];
                        uVal_166 = auArr_155[6];
                        uVal_167 = auArr_155[7];
                        if (uVal_1 < 0xf) {
                          uVal_87 = 0;
                        }
                        else {
                          lVal_49 = (uVal_47 - 7) + lVal_39 + uVal_96;
                          lVal_80 = uVal_47 * 2 + -0xe + lVal_86 + local_358;
                          lVal_69 = 0;
                          do {
                            uVal_68 = *(uint64_t *)(lVal_49 + lVal_69);
                            uVal_87 = *(uint64_t *)(lVal_49 + -8 + lVal_69);
                            auArr_112._8_6_ = 0;
                            auArr_112._0_8_ = uVal_68;
                            auArr_112[14] = (char)(uVal_68 >> 0x38);
                            auArr_112[15] = uVal_167;
                            auArr_111._14_2_ = auArr_112._14_2_;
                            auArr_111._8_5_ = 0;
                            auArr_111._0_8_ = uVal_68;
                            auArr_111[13] = uVal_166;
                            auArr_110._13_3_ = auArr_111._13_3_;
                            auArr_110._8_4_ = 0;
                            auArr_110._0_8_ = uVal_68;
                            auArr_110[12] = (char)(uVal_68 >> 0x30);
                            auArr_109._12_4_ = auArr_110._12_4_;
                            auArr_109._8_3_ = 0;
                            auArr_109._0_8_ = uVal_68;
                            auArr_109[11] = uVal_165;
                            auArr_108._11_5_ = auArr_109._11_5_;
                            auArr_108._8_2_ = 0;
                            auArr_108._0_8_ = uVal_68;
                            auArr_108[10] = (char)(uVal_68 >> 0x28);
                            auArr_107._10_6_ = auArr_108._10_6_;
                            auArr_107[8] = 0;
                            auArr_107._0_8_ = uVal_68;
                            auArr_107[9] = uVal_164;
                            auArr_106._9_7_ = auArr_107._9_7_;
                            auArr_106[8] = (char)(uVal_68 >> 0x20);
                            auArr_106._0_8_ = uVal_68;
                            auArr_105._8_8_ = auArr_106._8_8_;
                            auArr_105[7] = uVal_163;
                            auArr_105[6] = (char)(uVal_68 >> 0x18);
                            auArr_105[5] = uVal_162;
                            auArr_105[4] = (char)(uVal_68 >> 0x10);
                            auArr_105[3] = uVal_161;
                            auArr_105[2] = (char)(uVal_68 >> 8);
                            auArr_105[0] = (char)uVal_68;
                            auArr_105[1] = uVal_159;
                            *(uint8_t (*)[16])(lVal_80 + lVal_69 * 2) = auArr_105;
                            auArr_135._8_6_ = 0;
                            auArr_135._0_8_ = uVal_87;
                            auArr_135[14] = (char)(uVal_87 >> 0x38);
                            auArr_135[15] = uVal_167;
                            auArr_134._14_2_ = auArr_135._14_2_;
                            auArr_134._8_5_ = 0;
                            auArr_134._0_8_ = uVal_87;
                            auArr_134[13] = uVal_166;
                            auArr_133._13_3_ = auArr_134._13_3_;
                            auArr_133._8_4_ = 0;
                            auArr_133._0_8_ = uVal_87;
                            auArr_133[12] = (char)(uVal_87 >> 0x30);
                            auArr_132._12_4_ = auArr_133._12_4_;
                            auArr_132._8_3_ = 0;
                            auArr_132._0_8_ = uVal_87;
                            auArr_132[11] = uVal_165;
                            auArr_131._11_5_ = auArr_132._11_5_;
                            auArr_131._8_2_ = 0;
                            auArr_131._0_8_ = uVal_87;
                            auArr_131[10] = (char)(uVal_87 >> 0x28);
                            auArr_130._10_6_ = auArr_131._10_6_;
                            auArr_130[8] = 0;
                            auArr_130._0_8_ = uVal_87;
                            auArr_130[9] = uVal_164;
                            auArr_129._9_7_ = auArr_130._9_7_;
                            auArr_129[8] = (char)(uVal_87 >> 0x20);
                            auArr_129._0_8_ = uVal_87;
                            auArr_128._8_8_ = auArr_129._8_8_;
                            auArr_128[7] = uVal_163;
                            auArr_128[6] = (char)(uVal_87 >> 0x18);
                            auArr_128[5] = uVal_162;
                            auArr_128[4] = (char)(uVal_87 >> 0x10);
                            auArr_128[3] = uVal_161;
                            auArr_128[2] = (char)(uVal_87 >> 8);
                            auArr_128[0] = (uint8_t)uVal_87;
                            auArr_128[1] = uVal_159;
                            *(uint8_t (*)[16])(lVal_80 + -0x10 + lVal_69 * 2) = auArr_128;
                            lVal_69 = lVal_69 + -0x10;
                          } while (-uVal_65 != lVal_69);
                          if (uVal_2 == uVal_65) goto LAB_1800e690f;
                          uVal_87 = uVal_65;
                          uVal_68 = uVal_47 - uVal_65;
                          if ((uVal_2 & 0xc) == 0) goto LAB_1800e7da1;
                        }
                        lVal_49 = -uVal_87;
                        do {
                          uVal_63 = *(uint *)(uVal_96 + (uVal_47 - 3) + lVal_39 + lVal_49);
                          auArr_120._0_15_ = ZEXT415(uVal_63);
                          auArr_120[15] = uVal_167;
                          auArr_119._14_2_ = auArr_120._14_2_;
                          auArr_119._0_13_ = ZEXT413(uVal_63);
                          auArr_119[13] = uVal_166;
                          auArr_118._13_3_ = auArr_119._13_3_;
                          auArr_118._0_13_ = ZEXT413(uVal_63);
                          auArr_117._12_4_ = auArr_118._12_4_;
                          auArr_117._4_7_ = 0;
                          auArr_117._0_4_ = uVal_63;
                          auArr_117[11] = uVal_165;
                          auArr_116._11_5_ = auArr_117._11_5_;
                          auArr_116._4_7_ = 0;
                          auArr_116._0_4_ = uVal_63;
                          auArr_115._10_6_ = auArr_116._10_6_;
                          auArr_115._4_5_ = 0;
                          auArr_115._0_4_ = uVal_63;
                          auArr_115[9] = uVal_164;
                          auArr_114._9_7_ = auArr_115._9_7_;
                          auArr_114._4_5_ = 0;
                          auArr_114._0_4_ = uVal_63;
                          auArr_113._8_8_ = auArr_114._8_8_;
                          auArr_113[7] = uVal_163;
                          auArr_113[6] = (char)(uVal_63 >> 0x18);
                          auArr_113[5] = uVal_162;
                          auArr_113[4] = (char)(uVal_63 >> 0x10);
                          auArr_113._0_4_ = uVal_63;
                          auArr_105._4_12_ = auArr_113._4_12_;
                          auArr_105[3] = uVal_161;
                          auArr_105[2] = (char)(uVal_63 >> 8);
                          auArr_105[0] = (char)uVal_63;
                          auArr_105[1] = uVal_159;
                          *(int64_t *)(uVal_47 * 2 + -6 + lVal_86 + local_358 + lVal_49 * 2) =
                               auArr_105._0_8_;
                          lVal_49 = lVal_49 + -4;
                        } while (-uVal_78 != lVal_49);
                        uVal_68 = uVal_47 - uVal_78;
                        if (uVal_2 == uVal_78) goto LAB_1800e690f;
                      }
LAB_1800e7da1:
                      do {
                        *(uint8_t *)(local_358 + lVal_86 + 1 + uVal_68 * 2) = 0xff;
                        *(uint8_t *)(local_358 + lVal_86 + uVal_68 * 2) =
                             *(uint8_t *)((int64_t)local_380 + uVal_68);
                        bFlag_104 = uVal_68 != 0;
                        uVal_68 = uVal_68 - 1;
                      } while (bFlag_104);
                    }
                  }
                  else if (-1 < (int)uVal_1) {
                    uVal_68 = uVal_47;
                    if ((uVal_1 & 1) == 0) {
                      *(byte *)((int64_t)pU64_56 + uVal_47 * 4 + 3) = 0xff;
                      *(byte *)(pU64_56 + uVal_47 * 2 + 1) =
                           *(byte *)((int64_t)local_380 + lVal_35 + 2);
                      *(byte *)((int64_t)pU64_56 + uVal_47 * 4 + 1) =
                           *(byte *)((int64_t)local_380 + lVal_35 + 1);
                      *(byte *)(pU64_56 + uVal_47 * 2) = *(byte *)((int64_t)local_380 + lVal_35);
                      uVal_68 = uVal_47 - 1;
                    }
                    if (uVal_47 != 0) {
                      pU64_57 = (uint8_t *)(uVal_96 + uVal_68 * 3 + lVal_39);
                      lVal_86 = lVal_86 + local_358;
                      do {
                        *(uint8_t *)(lVal_86 + 3 + uVal_68 * 4) = 0xff;
                        *(uint8_t *)(lVal_86 + 2 + uVal_68 * 4) = pU64_57[2];
                        *(uint8_t *)(lVal_86 + 1 + uVal_68 * 4) = pU64_57[1];
                        *(uint8_t *)(lVal_86 + uVal_68 * 4) = *pU64_57;
                        *(uint8_t *)(lVal_86 + -1 + uVal_68 * 4) = 0xff;
                        *(uint8_t *)(lVal_86 + -2 + uVal_68 * 4) = pU64_57[-1];
                        *(uint8_t *)(lVal_86 + -3 + uVal_68 * 4) = pU64_57[-2];
                        *(uint8_t *)(lVal_86 + -4 + uVal_68 * 4) = pU64_57[-3];
                        uVal_68 = uVal_68 - 2;
                        pU64_57 = pU64_57 + -6;
                      } while (uVal_68 != 0xffffffffffffffff);
                    }
                  }
                }
                else if (param_7 == 0x10) {
                  if (uVal_16 == param_4) {
                    if (uVal_88 != 0) {
                      uVal_63 = 0;
                      if ((7 < uVal_88) &&
                         (((ushort *)(uVal_96 + lVal_39 + 2 + (uint64_t)uVal_62 * 2) <= pU64_56 ||
                          ((uint32_t *)(uVal_68 + (uint64_t)uVal_62 * 2 + 2 + lVal_86) <= local_380)
                          ))) {
                        pU64_56 = pU64_56 + uVal_72;
                        uVal_96 = 0;
                        do {
                          auArr_105 = pshufb(*(uint8_t (*)[16])((int64_t)local_380 + uVal_96 * 2),
                                            auArr_136);
                          *(uint8_t (*)[16])(lVal_86 + local_358 + uVal_96 * 2) = auArr_105;
                          uVal_96 = uVal_96 + 8;
                        } while (uVal_72 != uVal_96);
                        local_380 = (uint32_t *)(uVal_72 * 2 + (int64_t)local_380);
                        uVal_63 = uVal_70;
                        if (uVal_70 == uVal_88) goto LAB_1800e690f;
                      }
                      uVal_127 = uVal_63;
                      if ((uVal_88 & 3) != 0) {
                        iVal_61 = 0;
                        do {
                          *pU64_56 = *(ushort *)local_380 << 8 | *(ushort *)local_380 >> 8;
                          pU64_56 = pU64_56 + 1;
                          local_380 = (uint32_t *)((int64_t)local_380 + 2);
                          iVal_61 = iVal_61 + -1;
                        } while (-(uVal_88 & 3) != iVal_61);
                        uVal_127 = uVal_63 - iVal_61;
                      }
                      if (2 < uVal_62 - uVal_63) {
                        lVal_86 = 0;
                        do {
                          uVal_15 = *(ushort *)((int64_t)local_380 + lVal_86 * 2);
                          pU64_56[lVal_86] = uVal_15 << 8 | uVal_15 >> 8;
                          uVal_15 = *(ushort *)((int64_t)local_380 + lVal_86 * 2 + 2);
                          pU64_56[lVal_86 + 1] = uVal_15 << 8 | uVal_15 >> 8;
                          uVal_15 = *(ushort *)((int64_t)local_380 + lVal_86 * 2 + 4);
                          pU64_56[lVal_86 + 2] = uVal_15 << 8 | uVal_15 >> 8;
                          uVal_15 = *(ushort *)((int64_t)local_380 + lVal_86 * 2 + 6);
                          pU64_56[lVal_86 + 3] = uVal_15 << 8 | uVal_15 >> 8;
                          lVal_86 = lVal_86 + 4;
                        } while (uVal_88 - uVal_127 != (int)lVal_86);
                      }
                    }
                  }
                  else if (uVal_16 == 1) {
                    if (param_5 != 0) {
                      pU64_67 = local_380;
                      uVal_63 = 0;
                      if ((3 < param_5) &&
                         (((ushort *)(uVal_96 + lVal_39 + 2 + uVal_47 * 2) <= pU64_56 ||
                          ((uint32_t *)(uVal_68 + uVal_47 * 4 + lVal_86 + 4) <= local_380)))) {
                        pU64_56 = pU64_56 + uVal_94 * 2;
                        pU64_67 = (uint32_t *)(uVal_94 * 2 + (int64_t)local_380);
                        uVal_96 = 0;
                        do {
                          auArr_122._8_8_ = 0;
                          auArr_122._0_8_ = *(uint64_t *)((int64_t)local_380 + uVal_96 * 2);
                          auArr_123 = pshufb(auArr_122,auArr_169);
                          auArr_126._0_12_ = auArr_123._0_12_;
                          auArr_126._12_2_ = auArr_123._6_2_;
                          auArr_126._14_2_ = auArr_155._6_2_;
                          auArr_125._12_4_ = auArr_126._12_4_;
                          auArr_125._0_10_ = auArr_123._0_10_;
                          auArr_125._10_2_ = auArr_155._4_2_;
                          auArr_124._10_6_ = auArr_125._10_6_;
                          auArr_124._0_8_ = auArr_123._0_8_;
                          auArr_124._8_2_ = auArr_123._4_2_;
                          auArr_105._8_8_ = auArr_124._8_8_;
                          auArr_105._6_2_ = auArr_155._2_2_;
                          auArr_105._4_2_ = auArr_123._2_2_;
                          auArr_105._0_2_ = auArr_123._0_2_;
                          auArr_105._2_2_ = auArr_155._0_2_;
                          *(uint8_t (*)[16])(lVal_86 + local_358 + uVal_96 * 4) = auArr_105;
                          uVal_96 = uVal_96 + 4;
                        } while (uVal_94 != uVal_96);
                        uVal_63 = uVal_93;
                        if (uVal_93 == param_5) goto LAB_1800e690f;
                      }
                      uVal_127 = uVal_63;
                      if ((param_5 & 1) != 0) {
                        *pU64_56 = *(ushort *)pU64_67 << 8 | *(ushort *)pU64_67 >> 8;
                        pU64_56[1] = 0xffff;
                        pU64_56 = pU64_56 + 2;
                        pU64_67 = (uint32_t *)((int64_t)pU64_67 + 2);
                        uVal_127 = uVal_63 + 1;
                      }
                      if (param_5 != uVal_63 + 1) {
                        lVal_86 = 0;
                        do {
                          uVal_15 = *(ushort *)((int64_t)pU64_67 + lVal_86 * 2);
                          pU64_56[lVal_86 * 2] = uVal_15 << 8 | uVal_15 >> 8;
                          pU64_56[lVal_86 * 2 + 1] = 0xffff;
                          uVal_15 = *(ushort *)((int64_t)pU64_67 + lVal_86 * 2 + 2);
                          pU64_56[lVal_86 * 2 + 2] = uVal_15 << 8 | uVal_15 >> 8;
                          pU64_56[lVal_86 * 2 + 3] = 0xffff;
                          lVal_86 = lVal_86 + 2;
                        } while (param_5 - uVal_127 != (int)lVal_86);
                      }
                    }
                  }
                  else if (param_5 != 0) {
                    lVal_86 = lVal_86 + local_358;
                    lVal_49 = 0;
                    do {
                      *(ushort *)(lVal_86 + lVal_49 * 8) =
                           *(ushort *)local_380 << 8 | *(ushort *)local_380 >> 8;
                      *(ushort *)(lVal_86 + 2 + lVal_49 * 8) =
                           *(ushort *)((int64_t)local_380 + 2) << 8 |
                           *(ushort *)((int64_t)local_380 + 2) >> 8;
                      *(ushort *)(lVal_86 + 4 + lVal_49 * 8) =
                           *(ushort *)(local_380 + 1) << 8 | *(ushort *)(local_380 + 1) >> 8;
                      *(uint16_t *)(lVal_86 + 6 + lVal_49 * 8) = 0xffff;
                      local_380 = (uint32_t *)((int64_t)local_380 + 6);
                      lVal_49 = lVal_49 + 1;
                    } while (param_5 != (uint)lVal_49);
                  }
                }
LAB_1800e690f:
                pU8_76 = pU8_76 + lVal_64 + 1;
                uVal_54 = uVal_54 + 1;
                pU8_66 = pU8_66 + lVal_4;
                lVal_95 = lVal_95 + lVal_4;
                local_369 = local_369 ^ 1;
                pU8_79 = pU8_79 + lVal_4;
                pU8_85 = pU8_85 + lVal_4;
                pU8_90 = pU8_90 + lVal_4;
                local_288 = local_288 + lVal_4;
                local_358 = (uint64_t)(uint)((int)local_358 + iVal_103);
              } while (uVal_54 != param_6);
            }
            thunk_FUN_180695dd0(lVal_39);
            return 1;
          }
          goto LAB_1800e6353;
        }
      }
LAB_1800e64b3:
      lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_53 = "too large";
      goto LAB_1800e636d;
    }
  }
LAB_1800e6353:
  lVal_39 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_53 = "outofmem";
LAB_1800e636d:
  *(char **)(lVal_39 + 0x3010) = fnPtr_53;
  return 0;
}

// func_0x1800e82c0
uint64_t func_0x1800e82c0(uint param_1,uint64_t param_2,uint param_3,uint param_4)
{
  uint64_t uVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  
  uVal_2 = (uint)param_2;
  if (((-1 < (int)(uVal_2 | param_1)) &&
      (((uVal_3 = param_2 & 0xffffffff, uVal_2 == 0 ||
        (param_2 = 0x7fffffff % uVal_3, (int)param_1 <= (int)(0x7fffffff / uVal_3))) &&
       (uVal_2 = uVal_2 * param_1, -1 < (int)(param_3 | uVal_2))))) &&
     (((param_3 == 0 ||
       (param_2 = 0x7fffffff % (uint64_t)param_3,
       (int)uVal_2 <= (int)(0x7fffffff / (uint64_t)param_3))) &&
      ((int)(uVal_2 * param_3) <= (int)(param_4 ^ 0x7fffffff))))) {
    uVal_1 = _malloc_base((int64_t)(int)(uVal_2 * param_3 + param_4),param_2);
    return uVal_1;
  }
  return 0;
}

// func_0x1800e8320
bool func_0x1800e8320(uint param_1,uint param_2,uint param_3,uint param_4)
{
  bool bFlag_1;
  
  bFlag_1 = false;
  if ((-1 < (int)(param_2 | param_1)) &&
     ((param_2 == 0 || (bFlag_1 = false, (int)param_1 <= (int)(0x7fffffff / (uint64_t)param_2))))) {
    param_2 = param_2 * param_1;
    bFlag_1 = false;
    if ((-1 < (int)(param_3 | param_2)) &&
       ((param_3 == 0 || (bFlag_1 = false, (int)param_2 <= (int)(0x7fffffff / (uint64_t)param_3)))))
    {
      bFlag_1 = (int)(param_2 * param_3) <= (int)(param_4 ^ 0x7fffffff);
    }
  }
  return bFlag_1;
}

// func_0x1800e8390
uint64_t func_0x1800e8390(uint param_1,uint64_t param_2,uint param_3)
{
  uint64_t uVal_1;
  uint uVal_2;
  uint64_t uVal_3;
  
  uVal_2 = (uint)param_2;
  if ((-1 < (int)(uVal_2 | param_1)) &&
     (((uVal_3 = param_2 & 0xffffffff, uVal_2 == 0 ||
       (param_2 = 0x7fffffff % uVal_3, (int)param_1 <= (int)(0x7fffffff / uVal_3))) &&
      ((int)(uVal_2 * param_1) <= (int)(param_3 ^ 0x7fffffff))))) {
    uVal_1 = _malloc_base((int64_t)(int)(uVal_2 * param_1 + param_3),param_2);
    return uVal_1;
  }
  return 0;
}

// func_0x1800e83d0
uint func_0x1800e83d0(uint64_t param_1)
{
  uint uVal_1;
  int iVal_2;
  
  uVal_1 = func_0x1800e8400();
  iVal_2 = func_0x1800e8400(param_1);
  return iVal_2 << 0x10 | uVal_1;
}

// func_0x1800e8400
uint16_t func_0x1800e8400(int64_t param_1)
{
  uint8_t *pU64_1;
  uint8_t uVal_2;
  int iVal_3;
  uint8_t *pU64_4;
  uint8_t *pU64_5;
  uint8_t uVal_6;
  
  pU64_1 = *(uint8_t **)(param_1 + 0xc0);
  if (pU64_1 < *(uint8_t **)(param_1 + 200)) {
    pU64_5 = pU64_1 + 1;
    *(uint8_t **)(param_1 + 0xc0) = pU64_5;
    uVal_6 = *pU64_1;
joined_r0x0001800e8475:
    if (*(uint8_t **)(param_1 + 200) <= pU64_5) {
LAB_1800e8477:
      if (*(int *)(param_1 + 0x30) == 0) {
        uVal_2 = 0;
      }
      else {
        pU64_1 = (uint8_t *)(param_1 + 0x38);
        iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),pU64_1,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_3 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          pU64_5 = (uint8_t *)(param_1 + 0x39);
          *(uint8_t *)(param_1 + 0x38) = 0;
          uVal_2 = 0;
        }
        else {
          pU64_5 = pU64_1 + iVal_3;
          uVal_2 = *pU64_1;
        }
        *(uint8_t **)(param_1 + 200) = pU64_5;
        *(int64_t *)(param_1 + 0xc0) = param_1 + 0x39;
      }
      goto LAB_1800e850f;
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) {
      uVal_6 = 0;
      pU64_5 = pU64_1;
      goto joined_r0x0001800e8475;
    }
    pU64_1 = (uint8_t *)(param_1 + 0x38);
    iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),pU64_1,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_3 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      pU64_4 = (uint8_t *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
      uVal_6 = 0;
    }
    else {
      pU64_4 = pU64_1 + iVal_3;
      uVal_6 = *pU64_1;
    }
    *(uint8_t **)(param_1 + 200) = pU64_4;
    pU64_5 = (uint8_t *)(param_1 + 0x39);
    *(uint8_t **)(param_1 + 0xc0) = pU64_5;
    if (pU64_4 <= pU64_5) goto LAB_1800e8477;
  }
  *(uint8_t **)(param_1 + 0xc0) = pU64_5 + 1;
  uVal_2 = *pU64_5;
LAB_1800e850f:
  return CONCAT11(uVal_2,uVal_6);
}

// func_0x1800e8530
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1800e8530(uint *param_1,int *param_2)
{
  char *fnPtr_1;
  uint *pU64_2;
  char ch_3;
  char *fnPtr_4;
  int iVal_5;
  int iVal_6;
  int iVal_7;
  uint uVal_8;
  int iVal_9;
  uint uVal_10;
  int64_t lVal_11;
  char *fnPtr_12;
  
  fnPtr_4 = *(char **)(param_1 + 0x30);
  fnPtr_12 = *(char **)(param_1 + 0x32);
  if (fnPtr_4 < fnPtr_12) {
    fnPtr_1 = fnPtr_4 + 1;
    *(char **)(param_1 + 0x30) = fnPtr_1;
    ch_3 = *fnPtr_4;
joined_r0x0001800e85c7:
    if (ch_3 == 'B') {
      if (fnPtr_1 < fnPtr_12) {
        *(char **)(param_1 + 0x30) = fnPtr_1 + 1;
        ch_3 = *fnPtr_1;
      }
      else {
        if (param_1[0xc] == 0) goto LAB_1800e876e;
        pU64_2 = param_1 + 0xe;
        iVal_9 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_2,param_1[0xd]);
        param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
        if (iVal_9 == 0) {
          param_1[0xc] = 0;
          fnPtr_12 = (char *)((int64_t)param_1 + 0x39);
          *(uint8_t *)(param_1 + 0xe) = 0;
        }
        else {
          fnPtr_12 = (char *)((int64_t)iVal_9 + (int64_t)pU64_2);
        }
        *(char **)(param_1 + 0x32) = fnPtr_12;
        *(int64_t *)(param_1 + 0x30) = (int64_t)param_1 + 0x39;
        ch_3 = *(char *)pU64_2;
      }
      if (ch_3 == 'M') {
        func_0x1800e8400(param_1);
        func_0x1800e8400(param_1);
        func_0x1800e8400(param_1);
        func_0x1800e8400(param_1);
        uVal_8 = func_0x1800e8400(param_1);
        iVal_9 = func_0x1800e8400(param_1);
        param_2[1] = iVal_9 << 0x10 | uVal_8;
        uVal_8 = func_0x1800e8400(param_1);
        iVal_9 = func_0x1800e8400(param_1);
        uVal_8 = iVal_9 << 0x10 | uVal_8;
        param_2[2] = uVal_8;
        *(uint8_t (*)[16])(param_2 + 3) = ZEXT816(0);
        param_2[8] = 0xe;
        if (-1 < param_2[1]) {
          if ((int)uVal_8 < 0x38) {
            if (uVal_8 != 0xc) {
              if (uVal_8 != 0x28) goto LAB_1800e87aa;
              goto LAB_1800e86d5;
            }
            uVal_10 = func_0x1800e8400(param_1);
            *param_1 = uVal_10;
            uVal_10 = func_0x1800e8400(param_1);
          }
          else {
            if (((uVal_8 != 0x38) && (uVal_8 != 0x6c)) && (uVal_8 != 0x7c)) {
LAB_1800e87aa:
              lVal_11 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              fnPtr_12 = "unknown BMP";
              goto LAB_1800e8788;
            }
LAB_1800e86d5:
            uVal_10 = func_0x1800e8400(param_1);
            iVal_9 = func_0x1800e8400(param_1);
            *param_1 = iVal_9 << 0x10 | uVal_10;
            uVal_10 = func_0x1800e8400(param_1);
            iVal_9 = func_0x1800e8400(param_1);
            uVal_10 = iVal_9 << 0x10 | uVal_10;
          }
          param_1[1] = uVal_10;
          iVal_9 = func_0x1800e8400(param_1);
          if (iVal_9 == 1) {
            iVal_9 = func_0x1800e8400(param_1);
            *param_2 = iVal_9;
            if (uVal_8 == 0xc) {
              return 1;
            }
            uVal_10 = func_0x1800e8400(param_1);
            iVal_9 = func_0x1800e8400(param_1);
            if ((iVal_9 * 0x10000 + uVal_10) - 1 < 2) {
              lVal_11 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              fnPtr_12 = "BMP RLE";
              goto LAB_1800e8788;
            }
            uVal_10 = iVal_9 * 0x10000 | uVal_10;
            if (3 < (int)uVal_10) {
              lVal_11 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              fnPtr_12 = "BMP JPEG/PNG";
              goto LAB_1800e8788;
            }
            if (((uVal_10 != 3) || (*param_2 == 0x10)) || (*param_2 == 0x20)) {
              func_0x1800e83d0(param_1);
              func_0x1800e83d0(param_1);
              func_0x1800e83d0(param_1);
              func_0x1800e83d0(param_1);
              func_0x1800e83d0(param_1);
              if ((int)uVal_8 < 0x6c) {
                if (uVal_8 != 0x28) {
                  if (uVal_8 != 0x38) goto LAB_1800e8a39;
                  func_0x1800e83d0(param_1);
                  func_0x1800e83d0(param_1);
                  func_0x1800e83d0(param_1);
                  func_0x1800e83d0(param_1);
                }
                iVal_7 = _UNK_1806b2a5c;
                iVal_6 = _UNK_1806b2a58;
                iVal_5 = _UNK_1806b2a54;
                iVal_9 = *param_2;
                if ((iVal_9 != 0x20) && (iVal_9 != 0x10)) {
                  return 1;
                }
                if (uVal_10 == 0) {
                  if (iVal_9 == 0x20) {
                    param_2[3] = _DAT_1806b2a50;
                    param_2[4] = iVal_5;
                    param_2[5] = iVal_6;
                    param_2[6] = iVal_7;
                    param_2[7] = 0;
                    return 1;
                  }
                  if (iVal_9 == 0x10) {
                    *(uint64_t *)(param_2 + 3) = 0x3e000007c00;
                    param_2[5] = 0x1f;
                    return 1;
                  }
                  *(uint8_t (*)[16])(param_2 + 3) = ZEXT816(0);
                  return 1;
                }
                if (uVal_10 == 3) {
                  iVal_9 = func_0x1800e83d0(param_1);
                  param_2[3] = iVal_9;
                  iVal_9 = func_0x1800e83d0(param_1);
                  param_2[4] = iVal_9;
                  uVal_8 = func_0x1800e83d0(param_1);
                  param_2[5] = uVal_8;
                  param_2[8] = param_2[8] + 0xc;
                  if ((param_2[4] ^ uVal_8 | param_2[3] ^ param_2[4]) != 0) {
                    return 1;
                  }
                }
              }
              else if ((uVal_8 == 0x6c) || (uVal_8 == 0x7c)) {
                iVal_9 = func_0x1800e83d0(param_1);
                param_2[3] = iVal_9;
                iVal_9 = func_0x1800e83d0(param_1);
                param_2[4] = iVal_9;
                iVal_9 = func_0x1800e83d0(param_1);
                param_2[5] = iVal_9;
                iVal_9 = func_0x1800e83d0(param_1);
                param_2[6] = iVal_9;
                if (uVal_10 != 3) {
                  func_0x1800e8b70(param_2);
                }
                func_0x1800e83d0(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                func_0x1800e8400(param_1);
                if (uVal_8 == 0x6c) {
                  return 1;
                }
                if (uVal_8 == 0x7c) {
                  func_0x1800e83d0(param_1);
                  func_0x1800e83d0(param_1);
                  func_0x1800e83d0(param_1);
                  func_0x1800e83d0(param_1);
                  return 1;
                }
                return 0;
              }
            }
          }
        }
LAB_1800e8a39:
        lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        fnPtr_12 = "bad BMP";
        goto LAB_1800e8788;
      }
    }
  }
  else if (param_1[0xc] != 0) {
    pU64_2 = param_1 + 0xe;
    iVal_9 = (**(func_ptr_t *)(param_1 + 4))(*(uint64_t *)(param_1 + 10),pU64_2,param_1[0xd]);
    param_1[0x2e] = param_1[0x2e] + (param_1[0x30] - param_1[0x34]);
    if (iVal_9 == 0) {
      param_1[0xc] = 0;
      fnPtr_12 = (char *)((int64_t)param_1 + 0x39);
      *(uint8_t *)(param_1 + 0xe) = 0;
    }
    else {
      fnPtr_12 = (char *)((int64_t)iVal_9 + (int64_t)pU64_2);
    }
    *(char **)(param_1 + 0x32) = fnPtr_12;
    fnPtr_1 = (char *)((int64_t)param_1 + 0x39);
    *(char **)(param_1 + 0x30) = fnPtr_1;
    ch_3 = *(char *)pU64_2;
    goto joined_r0x0001800e85c7;
  }
LAB_1800e876e:
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_12 = "not BMP";
LAB_1800e8788:
  *(char **)(lVal_11 + 0x3010) = fnPtr_12;
  return 0;
}

// func_0x1800e8ab0
int func_0x1800e8ab0(uint param_1)
{
  uint uVal_1;
  uint uVal_2;
  int iVal_3;
  int iVal_4;
  
  if (param_1 == 0) {
    return -1;
  }
  uVal_2 = param_1 >> 0x10;
  if (0xffff >= param_1) {
    uVal_2 = param_1;
  }
  iVal_4 = (uint)(0xffff < param_1) * 0x10;
  iVal_3 = iVal_4 + 8;
  uVal_1 = uVal_2 >> 8;
  if (uVal_2 < 0x100) {
    iVal_3 = iVal_4;
    uVal_1 = uVal_2;
  }
  iVal_4 = iVal_3 + 4;
  uVal_2 = uVal_1 >> 4;
  if (uVal_1 < 0x10) {
    iVal_4 = iVal_3;
    uVal_2 = uVal_1;
  }
  iVal_3 = iVal_4 + 2;
  uVal_1 = uVal_2 >> 2;
  if (uVal_2 < 4) {
    iVal_3 = iVal_4;
    uVal_1 = uVal_2;
  }
  return (iVal_3 + 1) - (uint)(uVal_1 < 2);
}

// func_0x1800e8b20
uint func_0x1800e8b20(uint param_1)
{
  uint uVal_1;
  
  uVal_1 = (param_1 >> 1 & 0x55555555) + (param_1 & 0x55555555);
  uVal_1 = (uVal_1 >> 2 & 0x33333333) + (uVal_1 & 0x33333333);
  uVal_1 = (uVal_1 >> 4) + uVal_1 & 0xf0f0f0f;
  uVal_1 = (uVal_1 >> 8) + uVal_1;
  return (uVal_1 >> 0x10) + uVal_1 & 0xff;
}

// func_0x1800e8b70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800e8b70(int *param_1,int param_2)
{
  int iVal_1;
  int iVal_2;
  int iVal_3;
  
  iVal_3 = _UNK_1806b2a5c;
  iVal_2 = _UNK_1806b2a58;
  iVal_1 = _UNK_1806b2a54;
  if (param_2 != 0) {
    return;
  }
  if (*param_1 != 0x20) {
    if (*param_1 == 0x10) {
      *(uint64_t *)(param_1 + 3) = 0x3e000007c00;
      param_1[5] = 0x1f;
      return;
    }
    *(uint8_t (*)[16])(param_1 + 3) = ZEXT816(0);
    return;
  }
  param_1[3] = _DAT_1806b2a50;
  param_1[4] = iVal_1;
  param_1[5] = iVal_2;
  param_1[6] = iVal_3;
  param_1[7] = 0;
  return;
}

// func_0x1800e8bc0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
int64_t func_0x1800e8bc0(int64_t param_1,uint *param_2,uint64_t param_3,int64_t param_4)
{
  byte *pU8_1;
  byte *pU8_2;
  int64_t lVal_3;
  bool bFlag_4;
  bool bFlag_5;
  uint uVal_6;
  uint uVal_7;
  byte bFlag_8;
  byte bFlag_9;
  uint uVal_10;
  int iVal_11;
  int iVal_12;
  int iVal_13;
  uint uVal_14;
  uint uVal_15;
  int64_t lVal_16;
  int64_t lVal_17;
  byte *pU8_18;
  uint64_t uVal_19;
  byte *pU8_20;
  int64_t lVal_21;
  byte *pU8_22;
  byte bFlag_23;
  uint8_t uVal_24;
  char ch_25;
  uint uVal_26;
  uint32_t uVal_27;
  uint uVal_28;
  uint uVal_29;
  uint64_t uVal_30;
  int iVal_31;
  uint uVal_32;
  uint uVal_33;
  uint uVal_34;
  char *local_80;
  
  lVal_3 = *(int64_t *)(param_2 + 2);
  if (lVal_3 == 0) {
    iVal_31 = func_0x1800e9a60(param_1,param_2,param_3,0);
    if (iVal_31 == 0) {
      return 0;
    }
    uVal_28 = *param_2;
    local_80 = "too large";
    if (0x1fffffff < uVal_28) goto LAB_1800e945e;
    uVal_10 = param_2[1];
    if (((int)uVal_10 < 0) ||
       ((uVal_10 != 0 && ((uint)(0x7fffffff / (uint64_t)uVal_10) < uVal_28 * 4)))) goto LAB_1800e945e;
    iVal_31 = uVal_28 * uVal_10;
    iVal_11 = iVal_31 * 4;
    lVal_16 = _malloc_base(iVal_11);
    *(int64_t *)(param_2 + 2) = lVal_16;
    lVal_17 = _malloc_base(iVal_11);
    *(int64_t *)(param_2 + 4) = lVal_17;
    lVal_21 = _malloc_base(iVal_31);
    *(int64_t *)(param_2 + 6) = lVal_21;
    local_80 = "outofmem";
    if ((lVal_16 == 0) || ((lVal_17 == 0 || (lVal_21 == 0)))) goto LAB_1800e945e;
    func_0x1806ab010(lVal_16,0,iVal_11);
    func_0x1806ab010(lVal_17,0,iVal_11);
    func_0x1806ab010(lVal_21,0,iVal_31);
  }
  else {
    uVal_26 = param_2[0xc] >> 2 & 7;
    uVal_10 = param_2[1] * *param_2;
    uVal_28 = 2;
    if (uVal_26 != 3) {
      uVal_28 = uVal_26;
    }
    if (param_4 != 0) {
      uVal_28 = uVal_26;
    }
    if (uVal_28 == 3) {
      if (0 < (int)uVal_10) {
        if (uVal_10 == 1) {
          uVal_19 = 0;
        }
        else {
          uVal_19 = 0;
          do {
            if (*(char *)(*(int64_t *)(param_2 + 6) + uVal_19) != '\0') {
              *(uint32_t *)(*(int64_t *)(param_2 + 2) + uVal_19 * 4) =
                   *(uint32_t *)(param_4 + uVal_19 * 4);
            }
            if (*(char *)(*(int64_t *)(param_2 + 6) + 1 + uVal_19) != '\0') {
              *(uint32_t *)(*(int64_t *)(param_2 + 2) + 4 + uVal_19 * 4) =
                   *(uint32_t *)(param_4 + 4 + uVal_19 * 4);
            }
            uVal_19 = uVal_19 + 2;
          } while ((uVal_10 & 0x7ffffffe) != uVal_19);
          if ((uVal_10 & 1) == 0) goto LAB_1800e8e06;
        }
        if (*(char *)(*(int64_t *)(param_2 + 6) + uVal_19) != '\0') {
          lVal_21 = *(int64_t *)(param_2 + 2);
          uVal_27 = *(uint32_t *)(param_4 + uVal_19 * 4);
          goto LAB_1800e8e03;
        }
      }
    }
    else if ((uVal_28 == 2) && (0 < (int)uVal_10)) {
      if (uVal_10 == 1) {
        uVal_19 = 0;
      }
      else {
        uVal_19 = 0;
        do {
          if (*(char *)(*(int64_t *)(param_2 + 6) + uVal_19) != '\0') {
            *(uint32_t *)(*(int64_t *)(param_2 + 2) + uVal_19 * 4) =
                 *(uint32_t *)(*(int64_t *)(param_2 + 4) + uVal_19 * 4);
          }
          if (*(char *)(*(int64_t *)(param_2 + 6) + 1 + uVal_19) != '\0') {
            *(uint32_t *)(*(int64_t *)(param_2 + 2) + 4 + uVal_19 * 4) =
                 *(uint32_t *)(*(int64_t *)(param_2 + 4) + 4 + uVal_19 * 4);
          }
          uVal_19 = uVal_19 + 2;
        } while ((uVal_10 & 0x7ffffffe) != uVal_19);
        if ((uVal_10 & 1) == 0) goto LAB_1800e8e06;
      }
      if (*(char *)(*(int64_t *)(param_2 + 6) + uVal_19) != '\0') {
        lVal_21 = *(int64_t *)(param_2 + 2);
        uVal_27 = *(uint32_t *)(*(int64_t *)(param_2 + 4) + uVal_19 * 4);
LAB_1800e8e03:
        *(uint32_t *)(lVal_21 + uVal_19 * 4) = uVal_27;
      }
    }
LAB_1800e8e06:
    func_0x1806aa960(*(uint64_t *)(param_2 + 4),*(uint64_t *)(param_2 + 2),
                  (int64_t)(int)param_2[1] * (int64_t)(int)*param_2 * 4);
    lVal_21 = *(int64_t *)(param_2 + 6);
    iVal_31 = param_2[1] * *param_2;
  }
  func_0x1806ab010(lVal_21,0,(int64_t)iVal_31);
  pU8_1 = (byte *)(param_1 + 0x38);
  pU8_2 = (byte *)(param_1 + 0x39);
  local_80 = "unknown code";
LAB_1800e8e50:
  pU8_18 = *(byte **)(param_1 + 0xc0);
  pU8_20 = *(byte **)(param_1 + 200);
  if (pU8_18 < pU8_20) {
    pU8_22 = pU8_18 + 1;
    *(byte **)(param_1 + 0xc0) = pU8_22;
    bFlag_8 = *pU8_18;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e945e;
    iVal_31 = (**(func_ptr_t *)(param_1 + 0x10))
                       (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_31 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      pU8_20 = pU8_2;
    }
    else {
      pU8_20 = pU8_1 + iVal_31;
    }
    *(byte **)(param_1 + 200) = pU8_20;
    *(byte **)(param_1 + 0xc0) = pU8_2;
    bFlag_8 = *pU8_1;
    pU8_22 = pU8_2;
  }
  if (bFlag_8 == 0x21) {
    if (pU8_22 < pU8_20) {
      pU8_18 = pU8_22 + 1;
      *(byte **)(param_1 + 0xc0) = pU8_18;
      bFlag_8 = *pU8_22;
    }
    else {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e920d;
      iVal_31 = (**(func_ptr_t *)(param_1 + 0x10))
                         (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_31 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        pU8_20 = pU8_2;
      }
      else {
        pU8_20 = pU8_1 + iVal_31;
      }
      *(byte **)(param_1 + 200) = pU8_20;
      *(byte **)(param_1 + 0xc0) = pU8_2;
      bFlag_8 = *pU8_1;
      pU8_18 = pU8_2;
    }
    if (bFlag_8 != 0xf9) goto LAB_1800e920d;
    if (pU8_20 <= pU8_18) goto LAB_1800e8f96;
    pU8_22 = pU8_18 + 1;
    *(byte **)(param_1 + 0xc0) = pU8_22;
    bFlag_8 = *pU8_18;
    goto joined_r0x0001800e9035;
  }
  if (bFlag_8 == 0x3b) {
    return param_1;
  }
  if (bFlag_8 != 0x2c) goto LAB_1800e945e;
  iVal_31 = func_0x1800e8400(param_1);
  iVal_11 = func_0x1800e8400(param_1);
  iVal_12 = func_0x1800e8400(param_1);
  iVal_13 = func_0x1800e8400(param_1);
  local_80 = "bad Image Descriptor";
  if (((int)*param_2 < iVal_12 + iVal_31) || ((int)param_2[1] < iVal_13 + iVal_11)) goto LAB_1800e945e;
  uVal_28 = *param_2 * 4;
  param_2[0x2219] = uVal_28;
  param_2[0x2213] = iVal_31 << 2;
  param_2[0x2214] = iVal_11 * uVal_28;
  param_2[0x2215] = (iVal_12 + iVal_31) * 4;
  uVal_10 = (iVal_13 + iVal_11) * uVal_28;
  param_2[0x2216] = uVal_10;
  param_2[0x2217] = iVal_31 << 2;
  if (iVal_12 != 0) {
    uVal_10 = iVal_11 * uVal_28;
  }
  param_2[0x2218] = uVal_10;
  pU8_18 = *(byte **)(param_1 + 0xc0);
  if (pU8_18 < *(byte **)(param_1 + 200)) {
    pU8_20 = pU8_18 + 1;
LAB_1800e9403:
    *(byte **)(param_1 + 0xc0) = pU8_20;
    bFlag_8 = *pU8_18;
    uVal_26 = (uint)bFlag_8;
    param_2[0x2212] = uVal_26;
    uVal_28 = param_2[0x2219] * 8;
    if ((bFlag_8 & 0x40) == 0) {
      uVal_28 = param_2[0x2219];
    }
    uVal_10 = (int)(uVal_26 << 0x19) >> 0x1f & 3;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      iVal_31 = (**(func_ptr_t *)(param_1 + 0x10))
                         (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_31 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        pU8_18 = pU8_2;
      }
      else {
        pU8_18 = pU8_1 + iVal_31;
      }
      *(byte **)(param_1 + 200) = pU8_18;
      pU8_18 = pU8_1;
      pU8_20 = pU8_2;
      goto LAB_1800e9403;
    }
    param_2[0x2212] = 0;
    uVal_10 = 0;
    uVal_26 = 0;
  }
  param_2[0x2211] = uVal_28;
  param_2[0x2210] = uVal_10;
  if (uVal_26 < 0x80) {
    if ((*(byte *)(param_2 + 8) & 0x80) == 0) {
      local_80 = "missing color table";
LAB_1800e945e:
      *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                0x3010) = local_80;
      return 0;
    }
    *(uint **)(param_2 + 0x220e) = param_2 + 0xd;
    pU8_18 = *(byte **)(param_1 + 0xc0);
    if (pU8_18 < *(byte **)(param_1 + 200)) goto LAB_1800e94d8;
LAB_1800e94f9:
    if (*(int *)(param_1 + 0x30) != 0) {
      iVal_31 = (**(func_ptr_t *)(param_1 + 0x10))
                         (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_31 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        pU8_18 = pU8_2;
      }
      else {
        pU8_18 = pU8_1 + iVal_31;
      }
      *(byte **)(param_1 + 200) = pU8_18;
      pU8_18 = pU8_1;
      pU8_20 = pU8_2;
      goto LAB_1800e9549;
    }
    bFlag_8 = 0;
  }
  else {
    uVal_28 = 0xffffffff;
    if ((*(byte *)(param_2 + 0xc) & 1) != 0) {
      uVal_28 = param_2[0xb];
    }
    func_0x1800e9ec0(param_1,param_2 + 0x10d,2 << ((byte)uVal_26 & 7),uVal_28);
    *(uint **)(param_2 + 0x220e) = param_2 + 0x10d;
    pU8_18 = *(byte **)(param_1 + 0xc0);
    if (*(byte **)(param_1 + 200) <= pU8_18) goto LAB_1800e94f9;
LAB_1800e94d8:
    pU8_20 = pU8_18 + 1;
LAB_1800e9549:
    *(byte **)(param_1 + 0xc0) = pU8_20;
    bFlag_8 = *pU8_18;
    if (0xc < bFlag_8) {
      return 0;
    }
  }
  uVal_28 = 1 << (bFlag_8 & 0x1f);
  uVal_19 = (uint64_t)(uVal_28 & 3);
  if (bFlag_8 < 2) {
    uVal_30 = 0;
  }
  else {
    uVal_30 = 0;
    do {
      *(uint16_t *)(param_2 + uVal_30 + 0x20d) = 0xffff;
      ch_25 = (char)uVal_30;
      *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x836) = ch_25;
      *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x837) = ch_25;
      *(uint16_t *)(param_2 + uVal_30 + 0x20e) = 0xffff;
      *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x83a) = ch_25 + '\x01';
      *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x83b) = ch_25 + '\x01';
      *(uint16_t *)(param_2 + uVal_30 + 0x20f) = 0xffff;
      *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x83e) = ch_25 + '\x02';
      *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x83f) = ch_25 + '\x02';
      *(uint16_t *)(param_2 + uVal_30 + 0x210) = 0xffff;
      *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x842) = ch_25 + '\x03';
      *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x843) = ch_25 + '\x03';
      uVal_30 = uVal_30 + 4;
    } while (uVal_30 != (uVal_28 & 0xfffc));
    if (uVal_19 == 0) goto LAB_1800e9630;
  }
  do {
    *(uint16_t *)(param_2 + uVal_30 + 0x20d) = 0xffff;
    *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x836) = (char)uVal_30;
    *(char *)((int64_t)param_2 + uVal_30 * 4 + 0x837) = (char)uVal_30;
    uVal_30 = uVal_30 + 1;
    uVal_19 = uVal_19 - 1;
  } while (uVal_19 != 0);
LAB_1800e9630:
  uVal_14 = (2 << (bFlag_8 & 0x1f)) - 1;
  uVal_33 = 0;
  iVal_31 = 0;
  uVal_10 = 0;
  bFlag_5 = false;
  uVal_26 = uVal_28 + 2;
  uVal_6 = 0xffffffff;
  iVal_11 = bFlag_8 + 1;
  uVal_7 = uVal_14;
LAB_1800e96b3:
  do {
    for (; uVal_15 = uVal_7, iVal_12 = iVal_11, uVal_29 = uVal_6, uVal_32 = uVal_26, bFlag_4 = bFlag_5,
        iVal_11 = iVal_31 - iVal_12, iVal_31 < iVal_12; iVal_31 = iVal_31 + 8) {
      pU8_18 = *(byte **)(param_1 + 0xc0);
      pU8_20 = *(byte **)(param_1 + 200);
      if (uVal_33 == 0) {
        if (pU8_18 < pU8_20) {
          pU8_22 = pU8_18;
          pU8_18 = pU8_18 + 1;
        }
        else {
          if (*(int *)(param_1 + 0x30) == 0) {
LAB_1800e99e9:
            lVal_21 = *(int64_t *)(param_2 + 2);
            if (lVal_21 == 0) {
              return 0;
            }
            if (lVal_3 == 0) {
              uVal_28 = param_2[1];
              uVal_10 = *param_2;
              if (0 < (int)(uVal_28 * uVal_10) && 0 < (int)param_2[9]) {
                uVal_19 = 0;
                do {
                  if (*(char *)(*(int64_t *)(param_2 + 6) + uVal_19) == '\0') {
                    *(uint8_t *)((int64_t)param_2 + (int64_t)(int)param_2[9] * 4 + 0x37) = 0xff;
                    *(uint *)(*(int64_t *)(param_2 + 2) + uVal_19 * 4) =
                         param_2[(int64_t)(int)param_2[9] + 0xd];
                  }
                  uVal_19 = uVal_19 + 1;
                } while (uVal_28 * uVal_10 != uVal_19);
                return lVal_21;
              }
              return lVal_21;
            }
            return lVal_21;
          }
          iVal_11 = (**(func_ptr_t *)(param_1 + 0x10))
                             (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34)
                             );
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVal_11 == 0) {
            *(uint32_t *)(param_1 + 0x30) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            pU8_20 = pU8_2;
          }
          else {
            pU8_20 = pU8_1 + iVal_11;
          }
          *(byte **)(param_1 + 200) = pU8_20;
          pU8_22 = pU8_1;
          pU8_18 = pU8_2;
        }
        *(byte **)(param_1 + 0xc0) = pU8_18;
        uVal_33 = (uint)*pU8_22;
        if (*pU8_22 == 0) goto LAB_1800e99e9;
      }
      if (pU8_18 < pU8_20) {
        *(byte **)(param_1 + 0xc0) = pU8_18 + 1;
        bFlag_9 = *pU8_18;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        bFlag_9 = 0;
      }
      else {
        iVal_11 = (**(func_ptr_t *)(param_1 + 0x10))
                           (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_11 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          *(uint8_t *)(param_1 + 0x38) = 0;
          bFlag_9 = 0;
          pU8_18 = pU8_2;
        }
        else {
          bFlag_9 = *pU8_1;
          pU8_18 = pU8_1 + iVal_11;
        }
        *(byte **)(param_1 + 200) = pU8_18;
        *(byte **)(param_1 + 0xc0) = pU8_2;
      }
      bFlag_23 = (byte)iVal_31;
      uVal_33 = uVal_33 - 1;
      uVal_10 = uVal_10 | (uint)bFlag_9 << (bFlag_23 & 0x1f);
      bFlag_5 = bFlag_4;
      uVal_26 = uVal_32;
      uVal_6 = uVal_29;
      iVal_11 = iVal_12;
      uVal_7 = uVal_15;
    }
    uVal_26 = (int)uVal_10 >> ((byte)iVal_12 & 0x1f);
    uVal_34 = uVal_10 & uVal_15;
    iVal_31 = iVal_11;
    uVal_10 = uVal_26;
    bFlag_5 = true;
    uVal_26 = uVal_28 + 2;
    uVal_6 = 0xffffffff;
    iVal_11 = bFlag_8 + 1;
    uVal_7 = uVal_14;
  } while (uVal_34 == uVal_28);
  if (uVal_34 == uVal_28 + 1) {
    if (uVal_33 == 0) goto LAB_1800e994f;
    if ((int)uVal_33 < 0) {
      *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 200);
      goto LAB_1800e994f;
    }
    if (*(int64_t *)(param_1 + 0x10) == 0) {
      uVal_19 = *(uint64_t *)(param_1 + 0xc0);
    }
    else {
      uVal_19 = *(uint64_t *)(param_1 + 0xc0);
      if ((int)*(uint64_t *)(param_1 + 200) - (int)uVal_19 < (int)uVal_33) {
        *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 200);
        goto LAB_1800e9948;
      }
    }
    pU8_18 = (byte *)(uint64_t)uVal_33;
    do {
      *(byte **)(param_1 + 0xc0) = pU8_18 + uVal_19;
LAB_1800e994f:
      while( true ) {
        pU8_20 = *(byte **)(param_1 + 0xc0);
        pU8_22 = *(byte **)(param_1 + 200);
        if (pU8_20 < pU8_22) {
          pU8_18 = pU8_20 + 1;
        }
        else {
          if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e99e9;
          iVal_31 = (**(func_ptr_t *)(param_1 + 0x10))
                             (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34)
                             );
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVal_31 == 0) {
            *(uint32_t *)(param_1 + 0x30) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            pU8_22 = pU8_2;
          }
          else {
            pU8_22 = pU8_1 + iVal_31;
          }
          *(byte **)(param_1 + 200) = pU8_22;
          pU8_18 = pU8_2;
          pU8_20 = pU8_1;
        }
        *(byte **)(param_1 + 0xc0) = pU8_18;
        bFlag_8 = *pU8_20;
        if (bFlag_8 == 0) goto LAB_1800e99e9;
        if ((*(int64_t *)(param_1 + 0x10) == 0) ||
           ((int)(uint)bFlag_8 <= (int)pU8_22 - (int)pU8_18)) break;
        *(byte **)(param_1 + 0xc0) = pU8_22;
LAB_1800e9948:
        (**(func_ptr_t *)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
      }
      uVal_19 = (uint64_t)(uint)bFlag_8;
    } while( true );
  }
  local_80 = "no clear code";
  if ((int)uVal_32 < (int)uVal_34) {
    local_80 = "illegal code in raster";
    goto LAB_1800e945e;
  }
  if (!bFlag_4) goto LAB_1800e945e;
  if ((int)uVal_29 < 0) {
    if (uVal_34 == uVal_32) goto LAB_1800e9916;
  }
  else {
    if (0x1fff < (int)uVal_32) {
      local_80 = "too many codes";
      goto LAB_1800e945e;
    }
    lVal_21 = (int64_t)(int)uVal_32;
    uVal_32 = uVal_32 + 1;
    *(short *)(param_2 + lVal_21 + 0x20d) = (short)uVal_29;
    uVal_24 = *(uint8_t *)((int64_t)param_2 + (uint64_t)uVal_29 * 4 + 0x836);
    *(uint8_t *)((int64_t)param_2 + lVal_21 * 4 + 0x836) = uVal_24;
    if (uVal_34 != uVal_32) {
      uVal_24 = *(uint8_t *)((int64_t)param_2 + (int64_t)(int)uVal_34 * 4 + 0x836);
    }
    *(uint8_t *)((int64_t)param_2 + lVal_21 * 4 + 0x837) = uVal_24;
  }
  func_0x1800ea130(param_2,uVal_34);
  bFlag_5 = true;
  uVal_26 = uVal_32;
  uVal_6 = uVal_34;
  iVal_11 = iVal_12 + 1;
  uVal_7 = ~(-1 << ((byte)(iVal_12 + 1) & 0x1f));
  if ((uVal_32 & uVal_15) != 0 || 0xfff < (int)uVal_32) {
    iVal_11 = iVal_12;
    uVal_7 = uVal_15;
  }
  goto LAB_1800e96b3;
LAB_1800e8f96:
  if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e8e50;
  iVal_31 = (**(func_ptr_t *)(param_1 + 0x10))
                     (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
  *(int *)(param_1 + 0xb8) =
       *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
  if (iVal_31 == 0) {
    *(uint32_t *)(param_1 + 0x30) = 0;
    *(uint8_t *)(param_1 + 0x38) = 0;
    pU8_20 = pU8_2;
  }
  else {
    pU8_20 = pU8_1 + iVal_31;
  }
  *(byte **)(param_1 + 200) = pU8_20;
  *(byte **)(param_1 + 0xc0) = pU8_2;
  bFlag_8 = *pU8_1;
  pU8_22 = pU8_2;
joined_r0x0001800e9035:
  if (bFlag_8 != 4) {
    if (bFlag_8 != 0) {
      if ((*(int64_t *)(param_1 + 0x10) == 0) || ((int)(uint)bFlag_8 <= (int)pU8_20 - (int)pU8_22))
      {
        *(byte **)(param_1 + 0xc0) = pU8_22 + bFlag_8;
      }
      else {
        *(byte **)(param_1 + 0xc0) = pU8_20;
        (**(func_ptr_t *)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
      }
    }
    goto LAB_1800e8e50;
  }
  if (pU8_22 < pU8_20) {
    *(byte **)(param_1 + 0xc0) = pU8_22 + 1;
    bFlag_8 = *pU8_22;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bFlag_8 = 0;
  }
  else {
    iVal_31 = (**(func_ptr_t *)(param_1 + 0x10))
                       (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_31 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      bFlag_8 = 0;
      pU8_18 = pU8_2;
    }
    else {
      bFlag_8 = *pU8_1;
      pU8_18 = pU8_1 + iVal_31;
    }
    *(byte **)(param_1 + 200) = pU8_18;
    *(byte **)(param_1 + 0xc0) = pU8_2;
  }
  param_2[0xc] = (uint)bFlag_8;
  iVal_31 = func_0x1800e8400(param_1);
  param_2[0x221a] = iVal_31 * 10;
  if (-1 < (int64_t)(int)param_2[0xb]) {
    *(uint8_t *)((int64_t)param_2 + (int64_t)(int)param_2[0xb] * 4 + 0x37) = 0xff;
  }
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    if (*(int64_t *)(param_1 + 0x10) == 0) {
      lVal_21 = *(int64_t *)(param_1 + 0xc0);
    }
    else {
      lVal_21 = *(int64_t *)(param_1 + 0xc0);
      iVal_31 = (int)*(uint64_t *)(param_1 + 200) - (int)lVal_21;
      if (iVal_31 < 1) {
        *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 200);
        (**(func_ptr_t *)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),1 - iVal_31);
        param_2[0xb] = 0xffffffff;
        pU8_18 = *(byte **)(param_1 + 0xc0);
        pU8_20 = *(byte **)(param_1 + 200);
        if (pU8_20 <= pU8_18) goto LAB_1800e9240;
        goto LAB_1800e9220;
      }
    }
    *(int64_t *)(param_1 + 0xc0) = lVal_21 + 1;
    param_2[0xb] = 0xffffffff;
    pU8_18 = *(byte **)(param_1 + 0xc0);
    pU8_20 = *(byte **)(param_1 + 200);
    if (pU8_20 <= pU8_18) goto LAB_1800e9240;
  }
  else {
    pU8_18 = *(byte **)(param_1 + 0xc0);
    if (pU8_18 < *(byte **)(param_1 + 200)) {
      *(byte **)(param_1 + 0xc0) = pU8_18 + 1;
      bFlag_8 = *pU8_18;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      bFlag_8 = 0;
    }
    else {
      iVal_31 = (**(func_ptr_t *)(param_1 + 0x10))
                         (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_31 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        bFlag_8 = 0;
        pU8_18 = pU8_2;
      }
      else {
        bFlag_8 = *pU8_1;
        pU8_18 = pU8_1 + iVal_31;
      }
      *(byte **)(param_1 + 200) = pU8_18;
      *(byte **)(param_1 + 0xc0) = pU8_2;
    }
    param_2[0xb] = (uint)bFlag_8;
    *(uint8_t *)((int64_t)param_2 + (uint64_t)bFlag_8 * 4 + 0x37) = 0;
    pU8_18 = *(byte **)(param_1 + 0xc0);
    pU8_20 = *(byte **)(param_1 + 200);
    if (pU8_20 <= pU8_18) goto LAB_1800e9240;
  }
LAB_1800e9220:
  *(byte **)(param_1 + 0xc0) = pU8_18 + 1;
  bFlag_8 = *pU8_18;
  pU8_18 = pU8_18 + 1;
  if (bFlag_8 != 0) {
    do {
      if ((*(int64_t *)(param_1 + 0x10) == 0) || ((int)(uint)bFlag_8 <= (int)pU8_20 - (int)pU8_18))
      {
        *(byte **)(param_1 + 0xc0) = pU8_18 + bFlag_8;
LAB_1800e920d:
        pU8_18 = *(byte **)(param_1 + 0xc0);
        pU8_20 = *(byte **)(param_1 + 200);
        if (pU8_18 < pU8_20) goto LAB_1800e9220;
      }
      else {
        *(byte **)(param_1 + 0xc0) = pU8_20;
        (**(func_ptr_t *)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
        pU8_18 = *(byte **)(param_1 + 0xc0);
        pU8_20 = *(byte **)(param_1 + 200);
        if (pU8_18 < pU8_20) goto LAB_1800e9220;
      }
LAB_1800e9240:
      if (*(int *)(param_1 + 0x30) == 0) break;
      iVal_31 = (**(func_ptr_t *)(param_1 + 0x10))
                         (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_31 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        pU8_20 = pU8_2;
      }
      else {
        pU8_20 = pU8_1 + iVal_31;
      }
      *(byte **)(param_1 + 200) = pU8_20;
      *(byte **)(param_1 + 0xc0) = pU8_2;
      bFlag_8 = *pU8_1;
      pU8_18 = pU8_2;
      if (bFlag_8 == 0) break;
    } while( true );
  }
  goto LAB_1800e8e50;
LAB_1800e9916:
  local_80 = "illegal code in raster";
  goto LAB_1800e945e;
}

// func_0x1800e9a60
uint64_t func_0x1800e9a60(int64_t param_1,int *param_2,uint32_t *param_3,int param_4)
{
  char *fnPtr_1;
  char ch_2;
  char *fnPtr_3;
  int64_t lVal_4;
  int iVal_5;
  char *fnPtr_6;
  byte *pU8_7;
  uint uVal_8;
  char *fnPtr_9;
  
  fnPtr_3 = *(char **)(param_1 + 0xc0);
  fnPtr_6 = *(char **)(param_1 + 200);
  if (fnPtr_3 < fnPtr_6) {
    fnPtr_1 = fnPtr_3 + 1;
    *(char **)(param_1 + 0xc0) = fnPtr_1;
    ch_2 = *fnPtr_3;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e9d93;
    fnPtr_3 = (char *)(param_1 + 0x38);
    iVal_5 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_5 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      fnPtr_6 = (char *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
    }
    else {
      fnPtr_6 = fnPtr_3 + iVal_5;
    }
    *(char **)(param_1 + 200) = fnPtr_6;
    fnPtr_1 = (char *)(param_1 + 0x39);
    *(char **)(param_1 + 0xc0) = fnPtr_1;
    ch_2 = *fnPtr_3;
  }
  if (ch_2 != 'G') {
LAB_1800e9d93:
    *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x3010) = "not GIF";
    return 0;
  }
  if (fnPtr_1 < fnPtr_6) {
    fnPtr_9 = fnPtr_1 + 1;
    *(char **)(param_1 + 0xc0) = fnPtr_9;
    ch_2 = *fnPtr_1;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e9d93;
    fnPtr_3 = (char *)(param_1 + 0x38);
    iVal_5 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_5 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      fnPtr_6 = (char *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
    }
    else {
      fnPtr_6 = fnPtr_3 + iVal_5;
    }
    *(char **)(param_1 + 200) = fnPtr_6;
    fnPtr_9 = (char *)(param_1 + 0x39);
    *(char **)(param_1 + 0xc0) = fnPtr_9;
    ch_2 = *fnPtr_3;
  }
  if (ch_2 != 'I') goto LAB_1800e9d93;
  if (fnPtr_9 < fnPtr_6) {
    fnPtr_1 = fnPtr_9 + 1;
    *(char **)(param_1 + 0xc0) = fnPtr_1;
    ch_2 = *fnPtr_9;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e9d93;
    fnPtr_3 = (char *)(param_1 + 0x38);
    iVal_5 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_5 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      fnPtr_6 = (char *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
    }
    else {
      fnPtr_6 = fnPtr_3 + iVal_5;
    }
    *(char **)(param_1 + 200) = fnPtr_6;
    fnPtr_1 = (char *)(param_1 + 0x39);
    *(char **)(param_1 + 0xc0) = fnPtr_1;
    ch_2 = *fnPtr_3;
  }
  if (ch_2 != 'F') goto LAB_1800e9d93;
  if (fnPtr_1 < fnPtr_6) {
    fnPtr_9 = fnPtr_1 + 1;
    *(char **)(param_1 + 0xc0) = fnPtr_9;
    ch_2 = *fnPtr_1;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e9d93;
    fnPtr_3 = (char *)(param_1 + 0x38);
    iVal_5 = (**(func_ptr_t *)(param_1 + 0x10))
                      (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_5 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      fnPtr_6 = (char *)(param_1 + 0x39);
      *(uint8_t *)(param_1 + 0x38) = 0;
    }
    else {
      fnPtr_6 = fnPtr_3 + iVal_5;
    }
    *(char **)(param_1 + 200) = fnPtr_6;
    fnPtr_9 = (char *)(param_1 + 0x39);
    *(char **)(param_1 + 0xc0) = fnPtr_9;
    ch_2 = *fnPtr_3;
  }
  if (ch_2 != '8') goto LAB_1800e9d93;
  if (fnPtr_6 <= fnPtr_9) {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e9d93;
    func_0x1800e2360(param_1);
    fnPtr_9 = *(char **)(param_1 + 0xc0);
  }
  fnPtr_6 = fnPtr_9 + 1;
  *(char **)(param_1 + 0xc0) = fnPtr_6;
  if ((*fnPtr_9 != '7') && (*fnPtr_9 != '9')) goto LAB_1800e9d93;
  if (*(char **)(param_1 + 200) <= fnPtr_6) {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800e9d93;
    func_0x1800e2360(param_1);
    fnPtr_6 = *(char **)(param_1 + 0xc0);
  }
  *(char **)(param_1 + 0xc0) = fnPtr_6 + 1;
  if (*fnPtr_6 != 'a') goto LAB_1800e9d93;
  lVal_4 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  *(undefined1 **)(lVal_4 + 0x3010) = &DAT_180761155;
  iVal_5 = func_0x1800e8400(param_1);
  *param_2 = iVal_5;
  iVal_5 = func_0x1800e8400();
  param_2[1] = iVal_5;
  pU8_7 = *(byte **)(param_1 + 0xc0);
  if (pU8_7 < *(byte **)(param_1 + 200)) {
LAB_1800e9d57:
    *(byte **)(param_1 + 0xc0) = pU8_7 + 1;
    param_2[8] = (uint)*pU8_7;
    pU8_7 = *(byte **)(param_1 + 0xc0);
    if (pU8_7 < *(byte **)(param_1 + 200)) goto LAB_1800e9dd9;
LAB_1800e9d78:
    if (*(int *)(param_1 + 0x30) != 0) {
      func_0x1800e2360(param_1);
      pU8_7 = *(byte **)(param_1 + 0xc0);
      goto LAB_1800e9dd9;
    }
    param_2[9] = 0;
    pU8_7 = *(byte **)(param_1 + 0xc0);
    if (*(byte **)(param_1 + 200) <= pU8_7) goto LAB_1800e9dfa;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      func_0x1800e2360(param_1);
      pU8_7 = *(byte **)(param_1 + 0xc0);
      goto LAB_1800e9d57;
    }
    param_2[8] = 0;
    pU8_7 = *(byte **)(param_1 + 0xc0);
    if (*(byte **)(param_1 + 200) <= pU8_7) goto LAB_1800e9d78;
LAB_1800e9dd9:
    *(byte **)(param_1 + 0xc0) = pU8_7 + 1;
    param_2[9] = (uint)*pU8_7;
    pU8_7 = *(byte **)(param_1 + 0xc0);
    if (*(byte **)(param_1 + 200) <= pU8_7) {
LAB_1800e9dfa:
      if (*(int *)(param_1 + 0x30) == 0) {
        uVal_8 = 0;
        goto LAB_1800e9e38;
      }
      func_0x1800e2360(param_1);
      pU8_7 = *(byte **)(param_1 + 0xc0);
    }
  }
  *(byte **)(param_1 + 0xc0) = pU8_7 + 1;
  uVal_8 = (uint)*pU8_7;
LAB_1800e9e38:
  param_2[10] = uVal_8;
  param_2[0xb] = -1;
  if ((0x1000000 < *param_2) || (0x1000000 < param_2[1])) {
    *(char **)(lVal_4 + 0x3010) = "too large";
    return 0;
  }
  if (param_3 != (uint32_t *)0x0) {
    *param_3 = 4;
  }
  if (param_4 != 0) {
    return 1;
  }
  if (-1 < (char)(byte)param_2[8]) {
    return 1;
  }
  func_0x1800e9ec0(param_1,param_2 + 0xd,2 << ((byte)param_2[8] & 7),0xffffffff);
  return 1;
}

// func_0x1800e9ec0
void func_0x1800e9ec0(int64_t param_1,int64_t param_2,uint param_3,uint param_4)
{
  uint8_t *pU64_1;
  uint8_t *pU64_2;
  uint8_t uVal_3;
  int iVal_4;
  uint8_t *pU64_5;
  uint64_t uVal_6;
  
  pU64_1 = (uint8_t *)(param_1 + 0x38);
  pU64_2 = (uint8_t *)(param_1 + 0x39);
  uVal_6 = 0;
  do {
    pU64_5 = *(uint8_t **)(param_1 + 0xc0);
    if (pU64_5 < *(uint8_t **)(param_1 + 200)) {
      *(uint8_t **)(param_1 + 0xc0) = pU64_5 + 1;
      *(uint8_t *)(param_2 + 2 + uVal_6 * 4) = *pU64_5;
      pU64_5 = *(uint8_t **)(param_1 + 0xc0);
      if (*(uint8_t **)(param_1 + 200) <= pU64_5) goto LAB_1800e9fc0;
LAB_1800ea053:
      *(uint8_t **)(param_1 + 0xc0) = pU64_5 + 1;
      *(uint8_t *)(param_2 + 1 + uVal_6 * 4) = *pU64_5;
      pU64_5 = *(uint8_t **)(param_1 + 0xc0);
      if (pU64_5 < *(uint8_t **)(param_1 + 200)) goto LAB_1800e9ef0;
LAB_1800ea0b3:
      if (*(int *)(param_1 + 0x30) == 0) {
        uVal_3 = 0;
      }
      else {
        iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),pU64_1,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_4 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          *(uint8_t *)(param_1 + 0x38) = 0;
          uVal_3 = 0;
          pU64_5 = pU64_2;
        }
        else {
          uVal_3 = *pU64_1;
          pU64_5 = pU64_1 + iVal_4;
        }
        *(uint8_t **)(param_1 + 200) = pU64_5;
        *(uint8_t **)(param_1 + 0xc0) = pU64_2;
      }
    }
    else {
      if (*(int *)(param_1 + 0x30) == 0) {
        *(uint8_t *)(param_2 + 2 + uVal_6 * 4) = 0;
        pU64_5 = *(uint8_t **)(param_1 + 0xc0);
        if (*(uint8_t **)(param_1 + 200) <= pU64_5) goto LAB_1800e9fc0;
        goto LAB_1800ea053;
      }
      iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),pU64_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_4 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        uVal_3 = 0;
        pU64_5 = pU64_2;
      }
      else {
        uVal_3 = *pU64_1;
        pU64_5 = pU64_1 + iVal_4;
      }
      *(uint8_t **)(param_1 + 200) = pU64_5;
      *(uint8_t **)(param_1 + 0xc0) = pU64_2;
      *(uint8_t *)(param_2 + 2 + uVal_6 * 4) = uVal_3;
      pU64_5 = *(uint8_t **)(param_1 + 0xc0);
      if (pU64_5 < *(uint8_t **)(param_1 + 200)) goto LAB_1800ea053;
LAB_1800e9fc0:
      if (*(int *)(param_1 + 0x30) == 0) {
        *(uint8_t *)(param_2 + 1 + uVal_6 * 4) = 0;
        pU64_5 = *(uint8_t **)(param_1 + 0xc0);
        if (pU64_5 < *(uint8_t **)(param_1 + 200)) goto LAB_1800e9ef0;
        goto LAB_1800ea0b3;
      }
      iVal_4 = (**(func_ptr_t *)(param_1 + 0x10))
                        (*(uint64_t *)(param_1 + 0x28),pU64_1,*(uint32_t *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_4 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        uVal_3 = 0;
        pU64_5 = pU64_2;
      }
      else {
        uVal_3 = *pU64_1;
        pU64_5 = pU64_1 + iVal_4;
      }
      *(uint8_t **)(param_1 + 200) = pU64_5;
      *(uint8_t **)(param_1 + 0xc0) = pU64_2;
      *(uint8_t *)(param_2 + 1 + uVal_6 * 4) = uVal_3;
      pU64_5 = *(uint8_t **)(param_1 + 0xc0);
      if (*(uint8_t **)(param_1 + 200) <= pU64_5) goto LAB_1800ea0b3;
LAB_1800e9ef0:
      *(uint8_t **)(param_1 + 0xc0) = pU64_5 + 1;
      uVal_3 = *pU64_5;
    }
    *(uint8_t *)(param_2 + uVal_6 * 4) = uVal_3;
    *(char *)(param_2 + 3 + uVal_6 * 4) = -(param_4 != uVal_6);
    uVal_6 = uVal_6 + 1;
    if (param_3 == uVal_6) {
      return;
    }
  } while( true );
}

// func_0x1800ea130
void func_0x1800ea130(int64_t param_1,ushort param_2)
{
  int64_t lVal_1;
  int64_t lVal_2;
  int iVal_3;
  int64_t lVal_4;
  int iVal_5;
  uint64_t uVal_6;
  
  if (-1 < *(short *)(param_1 + 0x834 + (uint64_t)param_2 * 4)) {
    func_0x1800ea130(param_1);
  }
  if (*(int *)(param_1 + 0x8860) < *(int *)(param_1 + 0x8858)) {
    lVal_4 = (int64_t)*(int *)(param_1 + 0x885c) + (int64_t)*(int *)(param_1 + 0x8860);
    lVal_1 = *(int64_t *)(param_1 + 8);
    iVal_3 = (int)lVal_4;
    iVal_5 = iVal_3 + 3;
    if (-1 < iVal_3) {
      iVal_5 = iVal_3;
    }
    *(uint8_t *)(*(int64_t *)(param_1 + 0x18) + (int64_t)(iVal_5 >> 2)) = 1;
    lVal_2 = *(int64_t *)(param_1 + 0x8838);
    uVal_6 = (uint64_t)*(byte *)(param_1 + 0x837 + (uint64_t)param_2 * 4);
    if (0x80 < *(byte *)(lVal_2 + 3 + uVal_6 * 4)) {
      *(uint8_t *)(lVal_1 + lVal_4) = *(uint8_t *)(lVal_2 + 2 + uVal_6 * 4);
      *(uint8_t *)(lVal_1 + 1 + lVal_4) = *(uint8_t *)(lVal_2 + 1 + uVal_6 * 4);
      *(uint8_t *)(lVal_1 + 2 + lVal_4) = *(uint8_t *)(lVal_2 + uVal_6 * 4);
      *(uint8_t *)(lVal_1 + 3 + lVal_4) = *(uint8_t *)(lVal_2 + 3 + uVal_6 * 4);
    }
    iVal_3 = *(int *)(param_1 + 0x885c) + 4;
    *(int *)(param_1 + 0x885c) = iVal_3;
    if (*(int *)(param_1 + 0x8854) <= iVal_3) {
      *(uint32_t *)(param_1 + 0x885c) = *(uint32_t *)(param_1 + 0x884c);
      iVal_3 = *(int *)(param_1 + 0x8860) + *(int *)(param_1 + 0x8844);
      *(int *)(param_1 + 0x8860) = iVal_3;
      if (*(int *)(param_1 + 0x8858) <= iVal_3) {
        iVal_3 = *(int *)(param_1 + 0x8840);
        do {
          if (iVal_3 < 1) {
            return;
          }
          iVal_5 = *(int *)(param_1 + 0x8864) << ((byte)iVal_3 & 0x1f);
          *(int *)(param_1 + 0x8844) = iVal_5;
          iVal_5 = (iVal_5 >> 1) + *(int *)(param_1 + 0x8850);
          *(int *)(param_1 + 0x8860) = iVal_5;
          iVal_3 = iVal_3 + -1;
          *(int *)(param_1 + 0x8840) = iVal_3;
        } while (*(int *)(param_1 + 0x8858) <= iVal_5);
      }
    }
  }
  return;
}

// func_0x1800ea250
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Type propagation algorithm not settling */
uint64_t func_0x1800ea250(int64_t param_1,byte *param_2,uint param_3)
{
  byte *pU8_1;
  byte *pU8_2;
  byte *pU8_3;
  byte bFlag_4;
  byte bFlag_5;
  int iVal_6;
  byte *pU8_7;
  byte *pU8_8;
  uint uVal_9;
  uint uVal_10;
  uint uVal_11;
  int iVal_12;
  
  if (0 < (int)param_3) {
    pU8_1 = (byte *)(param_1 + 0x38);
    pU8_2 = (byte *)(param_1 + 0x39);
    iVal_12 = 0;
    uVal_11 = param_3;
    do {
      pU8_8 = *(byte **)(param_1 + 0xc0);
      pU8_7 = *(byte **)(param_1 + 200);
      if (pU8_8 < pU8_7) {
        pU8_3 = pU8_8 + 1;
        *(byte **)(param_1 + 0xc0) = pU8_3;
        bFlag_4 = *pU8_8;
joined_r0x0001800ea337:
        if (bFlag_4 != 0x80) {
          uVal_9 = (uint)bFlag_4;
          if (-1 < (char)bFlag_4) {
            if (uVal_11 <= uVal_9) {
              return 0;
            }
            goto LAB_1800ea34e;
          }
          uVal_10 = 0x101 - uVal_9;
          if (uVal_11 < uVal_10) {
            return 0;
          }
          if (pU8_3 < pU8_7) {
            *(byte **)(param_1 + 0xc0) = pU8_3 + 1;
            bFlag_5 = *pU8_3;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            bFlag_5 = 0;
          }
          else {
            iVal_6 = (**(func_ptr_t *)(param_1 + 0x10))
                              (*(uint64_t *)(param_1 + 0x28),pU8_1,
                               *(uint32_t *)(param_1 + 0x34));
            *(int *)(param_1 + 0xb8) =
                 *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
            if (iVal_6 == 0) {
              *(uint32_t *)(param_1 + 0x30) = 0;
              *(uint8_t *)(param_1 + 0x38) = 0;
              bFlag_5 = 0;
              *(byte **)(param_1 + 200) = pU8_2;
              *(byte **)(param_1 + 0xc0) = pU8_2;
            }
            else {
              bFlag_5 = *pU8_1;
              *(byte **)(param_1 + 200) = pU8_1 + iVal_6;
              *(byte **)(param_1 + 0xc0) = pU8_2;
            }
          }
          uVal_11 = uVal_10;
          if ((uVal_10 & 7) != 0) {
            uVal_11 = 0;
            do {
              *param_2 = bFlag_5;
              param_2 = param_2 + 4;
              uVal_11 = uVal_11 + 1;
            } while (((byte)(1 - bFlag_4) & 7) != uVal_11);
            uVal_11 = 0x101 - (uVal_11 + uVal_9);
          }
          if (bFlag_4 < 0xfa) {
            do {
              *param_2 = bFlag_5;
              param_2[4] = bFlag_5;
              param_2[8] = bFlag_5;
              param_2[0xc] = bFlag_5;
              param_2[0x10] = bFlag_5;
              param_2[0x14] = bFlag_5;
              param_2[0x18] = bFlag_5;
              param_2[0x1c] = bFlag_5;
              param_2 = param_2 + 0x20;
              uVal_11 = uVal_11 - 8;
            } while (uVal_11 != 0);
          }
          goto LAB_1800ea296;
        }
      }
      else {
        if (*(int *)(param_1 + 0x30) != 0) {
          iVal_6 = (**(func_ptr_t *)(param_1 + 0x10))
                            (*(uint64_t *)(param_1 + 0x28),pU8_1,*(uint32_t *)(param_1 + 0x34))
          ;
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVal_6 == 0) {
            *(uint32_t *)(param_1 + 0x30) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            pU8_7 = pU8_2;
          }
          else {
            pU8_7 = pU8_1 + iVal_6;
          }
          *(byte **)(param_1 + 200) = pU8_7;
          *(byte **)(param_1 + 0xc0) = pU8_2;
          bFlag_4 = *pU8_1;
          pU8_3 = pU8_2;
          goto joined_r0x0001800ea337;
        }
        uVal_9 = 0;
LAB_1800ea34e:
        uVal_10 = uVal_9 + 1;
        uVal_11 = uVal_10;
        do {
          pU8_8 = *(byte **)(param_1 + 0xc0);
          if (pU8_8 < *(byte **)(param_1 + 200)) {
            *(byte **)(param_1 + 0xc0) = pU8_8 + 1;
            bFlag_4 = *pU8_8;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            bFlag_4 = 0;
          }
          else {
            iVal_6 = (**(func_ptr_t *)(param_1 + 0x10))
                              (*(uint64_t *)(param_1 + 0x28),pU8_1,
                               *(uint32_t *)(param_1 + 0x34));
            *(int *)(param_1 + 0xb8) =
                 *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
            if (iVal_6 == 0) {
              *(uint32_t *)(param_1 + 0x30) = 0;
              *(uint8_t *)(param_1 + 0x38) = 0;
              bFlag_4 = 0;
              pU8_8 = pU8_2;
            }
            else {
              bFlag_4 = *pU8_1;
              pU8_8 = pU8_1 + iVal_6;
            }
            *(byte **)(param_1 + 200) = pU8_8;
            *(byte **)(param_1 + 0xc0) = pU8_2;
          }
          *param_2 = bFlag_4;
          param_2 = param_2 + 4;
          uVal_11 = uVal_11 - 1;
        } while (uVal_11 != 0);
LAB_1800ea296:
        iVal_12 = uVal_10 + iVal_12;
      }
      uVal_11 = param_3 - iVal_12;
    } while (uVal_11 != 0 && iVal_12 <= (int)param_3);
  }
  return 1;
}

// func_0x1800ea530
bool func_0x1800ea530(int64_t param_1,char *param_2)
{
  char *fnPtr_1;
  int iVal_2;
  char *fnPtr_3;
  char *fnPtr_4;
  char *fnPtr_5;
  char ch_6;
  bool bFlag_7;
  
  fnPtr_3 = (char *)(param_1 + 0x38);
  fnPtr_1 = (char *)(param_1 + 0x39);
  fnPtr_5 = *(char **)(param_1 + 0xc0);
  fnPtr_4 = *(char **)(param_1 + 200);
  if (fnPtr_5 < fnPtr_4) {
    *(char **)(param_1 + 0xc0) = fnPtr_5 + 1;
    ch_6 = *fnPtr_5;
    fnPtr_5 = fnPtr_5 + 1;
    if (ch_6 != *param_2) {
      return false;
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    if (*param_2 != '\0') {
      return false;
    }
  }
  else {
    iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),fnPtr_3);
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_2 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      ch_6 = '\0';
      fnPtr_4 = fnPtr_1;
    }
    else {
      ch_6 = *fnPtr_3;
      fnPtr_4 = fnPtr_3 + iVal_2;
    }
    *(char **)(param_1 + 200) = fnPtr_4;
    *(char **)(param_1 + 0xc0) = fnPtr_1;
    fnPtr_5 = fnPtr_1;
    if (ch_6 != *param_2) {
      return false;
    }
  }
  if (fnPtr_5 < fnPtr_4) {
    *(char **)(param_1 + 0xc0) = fnPtr_5 + 1;
    ch_6 = *fnPtr_5;
    fnPtr_5 = fnPtr_5 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    ch_6 = '\0';
  }
  else {
    iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),fnPtr_3);
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVal_2 == 0) {
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint8_t *)(param_1 + 0x38) = 0;
      ch_6 = '\0';
      fnPtr_4 = fnPtr_1;
    }
    else {
      ch_6 = *fnPtr_3;
      fnPtr_4 = fnPtr_3 + iVal_2;
    }
    *(char **)(param_1 + 200) = fnPtr_4;
    *(char **)(param_1 + 0xc0) = fnPtr_1;
    fnPtr_5 = fnPtr_1;
  }
  bFlag_7 = false;
  if (ch_6 == param_2[1]) {
    if (fnPtr_5 < fnPtr_4) {
      *(char **)(param_1 + 0xc0) = fnPtr_5 + 1;
      ch_6 = *fnPtr_5;
      fnPtr_5 = fnPtr_5 + 1;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      ch_6 = '\0';
    }
    else {
      iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))(*(uint64_t *)(param_1 + 0x28),fnPtr_3);
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVal_2 == 0) {
        *(uint32_t *)(param_1 + 0x30) = 0;
        *(uint8_t *)(param_1 + 0x38) = 0;
        ch_6 = '\0';
        fnPtr_4 = fnPtr_1;
      }
      else {
        ch_6 = *fnPtr_3;
        fnPtr_4 = fnPtr_3 + iVal_2;
      }
      *(char **)(param_1 + 200) = fnPtr_4;
      *(char **)(param_1 + 0xc0) = fnPtr_1;
      fnPtr_5 = fnPtr_1;
    }
    bFlag_7 = false;
    if (ch_6 == param_2[2]) {
      if (fnPtr_5 < fnPtr_4) {
        *(char **)(param_1 + 0xc0) = fnPtr_5 + 1;
        ch_6 = *fnPtr_5;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        ch_6 = '\0';
      }
      else {
        iVal_2 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),fnPtr_3,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_2 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          *(uint8_t *)(param_1 + 0x38) = 0;
          ch_6 = '\0';
          fnPtr_3 = fnPtr_1;
        }
        else {
          ch_6 = *fnPtr_3;
          fnPtr_3 = fnPtr_3 + iVal_2;
        }
        *(char **)(param_1 + 200) = fnPtr_3;
        *(char **)(param_1 + 0xc0) = fnPtr_1;
      }
      bFlag_7 = ch_6 == param_2[3];
    }
  }
  return bFlag_7;
}

// func_0x1800ea770
uint8_t * func_0x1800ea770(int64_t param_1,uint param_2,uint8_t *param_3)
{
  uint8_t *pU64_1;
  uint8_t uVal_2;
  int iVal_3;
  uint8_t *pU64_4;
  uint8_t *pU64_5;
  
  pU64_5 = (uint8_t *)(param_1 + 0x38);
  pU64_1 = (uint8_t *)(param_1 + 0x39);
  if (param_2 < 0x80) {
LAB_1800ea7e7:
    if ((param_2 & 0x40) != 0) {
      if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800ea809:
        pU64_4 = *(uint8_t **)(param_1 + 0xc0);
        if (*(uint8_t **)(param_1 + 200) <= pU64_4) goto LAB_1800ea8ce;
LAB_1800ea832:
        *(uint8_t **)(param_1 + 0xc0) = pU64_4 + 1;
        uVal_2 = *pU64_4;
      }
      else {
        iVal_3 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
        if (iVal_3 != 0) {
          if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800ea8ce;
          goto LAB_1800ea809;
        }
        pU64_4 = *(uint8_t **)(param_1 + 0xc0);
        if (pU64_4 < *(uint8_t **)(param_1 + 200)) goto LAB_1800ea832;
        if (*(int *)(param_1 + 0x30) == 0) {
          uVal_2 = 0;
        }
        else {
          iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                            (*(uint64_t *)(param_1 + 0x28),pU64_5,*(uint32_t *)(param_1 + 0x34))
          ;
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVal_3 == 0) {
            *(uint32_t *)(param_1 + 0x30) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            uVal_2 = 0;
            pU64_4 = pU64_1;
          }
          else {
            uVal_2 = *pU64_5;
            pU64_4 = pU64_5 + iVal_3;
          }
          *(uint8_t **)(param_1 + 200) = pU64_4;
          *(uint8_t **)(param_1 + 0xc0) = pU64_1;
        }
      }
      param_3[1] = uVal_2;
    }
    if ((param_2 & 0x20) != 0) {
      if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800ea861:
        pU64_4 = *(uint8_t **)(param_1 + 0xc0);
        if (*(uint8_t **)(param_1 + 200) <= pU64_4) goto LAB_1800ea8ce;
LAB_1800ea887:
        *(uint8_t **)(param_1 + 0xc0) = pU64_4 + 1;
        uVal_2 = *pU64_4;
      }
      else {
        iVal_3 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
        if (iVal_3 != 0) {
          if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800ea8ce;
          goto LAB_1800ea861;
        }
        pU64_4 = *(uint8_t **)(param_1 + 0xc0);
        if (pU64_4 < *(uint8_t **)(param_1 + 200)) goto LAB_1800ea887;
        if (*(int *)(param_1 + 0x30) == 0) {
          uVal_2 = 0;
        }
        else {
          iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                            (*(uint64_t *)(param_1 + 0x28),pU64_5,*(uint32_t *)(param_1 + 0x34))
          ;
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVal_3 == 0) {
            *(uint32_t *)(param_1 + 0x30) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            uVal_2 = 0;
            pU64_4 = pU64_1;
          }
          else {
            uVal_2 = *pU64_5;
            pU64_4 = pU64_5 + iVal_3;
          }
          *(uint8_t **)(param_1 + 200) = pU64_4;
          *(uint8_t **)(param_1 + 0xc0) = pU64_1;
        }
      }
      param_3[2] = uVal_2;
    }
    if ((param_2 & 0x10) == 0) {
      return param_3;
    }
    if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800ea8ba:
      pU64_4 = *(uint8_t **)(param_1 + 0xc0);
      if (*(uint8_t **)(param_1 + 200) <= pU64_4) goto LAB_1800ea8ce;
LAB_1800ea953:
      *(uint8_t **)(param_1 + 0xc0) = pU64_4 + 1;
      uVal_2 = *pU64_4;
    }
    else {
      iVal_3 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
      if (iVal_3 != 0) {
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_1800ea8ce;
        goto LAB_1800ea8ba;
      }
      pU64_4 = *(uint8_t **)(param_1 + 0xc0);
      if (pU64_4 < *(uint8_t **)(param_1 + 200)) goto LAB_1800ea953;
      if (*(int *)(param_1 + 0x30) == 0) {
        uVal_2 = 0;
      }
      else {
        iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                          (*(uint64_t *)(param_1 + 0x28),pU64_5,*(uint32_t *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVal_3 == 0) {
          *(uint32_t *)(param_1 + 0x30) = 0;
          *(uint8_t *)(param_1 + 0x38) = 0;
          uVal_2 = 0;
          pU64_5 = pU64_1;
        }
        else {
          uVal_2 = *pU64_5;
          pU64_5 = pU64_5 + iVal_3;
        }
        *(uint8_t **)(param_1 + 200) = pU64_5;
        *(uint8_t **)(param_1 + 0xc0) = pU64_1;
      }
    }
    param_3[3] = uVal_2;
  }
  else {
    if (*(int64_t *)(param_1 + 0x10) == 0) {
LAB_1800ea7ae:
      pU64_4 = *(uint8_t **)(param_1 + 0xc0);
      if (pU64_4 < *(uint8_t **)(param_1 + 200)) {
LAB_1800ea7d7:
        *(uint8_t **)(param_1 + 0xc0) = pU64_4 + 1;
        uVal_2 = *pU64_4;
LAB_1800ea7e5:
        *param_3 = uVal_2;
        goto LAB_1800ea7e7;
      }
    }
    else {
      iVal_3 = (**(func_ptr_t *)(param_1 + 0x20))(*(uint64_t *)(param_1 + 0x28));
      if (iVal_3 == 0) {
        pU64_4 = *(uint8_t **)(param_1 + 0xc0);
        if (pU64_4 < *(uint8_t **)(param_1 + 200)) goto LAB_1800ea7d7;
        if (*(int *)(param_1 + 0x30) == 0) {
          uVal_2 = 0;
        }
        else {
          iVal_3 = (**(func_ptr_t *)(param_1 + 0x10))
                            (*(uint64_t *)(param_1 + 0x28),pU64_5,*(uint32_t *)(param_1 + 0x34))
          ;
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVal_3 == 0) {
            *(uint32_t *)(param_1 + 0x30) = 0;
            *(uint8_t *)(param_1 + 0x38) = 0;
            uVal_2 = 0;
            pU64_4 = pU64_1;
          }
          else {
            uVal_2 = *pU64_5;
            pU64_4 = pU64_5 + iVal_3;
          }
          *(uint8_t **)(param_1 + 200) = pU64_4;
          *(uint8_t **)(param_1 + 0xc0) = pU64_1;
        }
        goto LAB_1800ea7e5;
      }
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_1800ea7ae;
    }
LAB_1800ea8ce:
    *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
              0x3010) = "bad file";
    param_3 = (uint8_t *)0x0;
  }
  return param_3;
}

// func_0x1800eaad0
uint64_t func_0x1800eaad0(int64_t *param_1,int param_2)
{
  char ch_1;
  byte bFlag_2;
  int iVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  char *fnPtr_6;
  
  param_1[0x909] = -0x100000000;
  *(uint8_t *)(param_1 + 0x905) = 0xff;
  ch_1 = func_0x1800ec2f0();
  if (ch_1 == -0x28) {
    uVal_4 = 1;
    if (param_2 != 1) {
      bFlag_2 = func_0x1800ec2f0(param_1);
      if (bFlag_2 != 0xc2 && (bFlag_2 & 0xfe) != 0xc0) {
        do {
          iVal_3 = func_0x1800ec450(param_1);
          if (iVal_3 == 0) {
            return 0;
          }
LAB_1800eab6e:
          bFlag_2 = func_0x1800ec2f0(param_1);
          if (bFlag_2 == 0xff) {
            lVal_5 = *param_1;
            if (*(int64_t *)(lVal_5 + 0x10) != 0) goto code_r0x0001800eab84;
            goto LAB_1800eab5a;
          }
        } while ((bFlag_2 != 0xc2) && ((bFlag_2 & 0xfe) != 0xc0));
      }
      *(uint *)(param_1 + 0x906) = (uint)(bFlag_2 == 0xc2);
      uVal_4 = func_0x1800ed3a0(param_1,param_2);
      return uVal_4;
    }
  }
  else {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_6 = "no SOI";
LAB_1800eabec:
    *(char **)(lVal_5 + 0x3010) = fnPtr_6;
    uVal_4 = 0;
  }
  return uVal_4;
code_r0x0001800eab84:
  iVal_3 = (**(func_ptr_t *)(lVal_5 + 0x20))(*(uint64_t *)(lVal_5 + 0x28));
  if (iVal_3 != 0) {
    if (*(int *)(lVal_5 + 0x30) != 0) {
LAB_1800eab5a:
      if (*(uint64_t *)(lVal_5 + 0xc0) < *(uint64_t *)(lVal_5 + 200)) goto LAB_1800eab6e;
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_6 = "no SOF";
    goto LAB_1800eabec;
  }
  goto LAB_1800eab6e;
}

// func_0x1800eb4e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800eb4e0(char *param_1,int param_2,short *param_3)
{
  char *fnPtr_1;
  short sz_2;
  short sz_3;
  short sz_4;
  short sz_5;
  short sz_6;
  short sz_7;
  short sz_8;
  short sz_9;
  short sz_10;
  short sz_11;
  short sz_12;
  short sz_13;
  short sz_14;
  short sz_15;
  short sz_16;
  short sz_17;
  short sz_18;
  short sz_19;
  short sz_20;
  short sz_21;
  short sz_22;
  short sz_23;
  short sz_24;
  short sz_25;
  short sz_26;
  short sz_27;
  short sz_28;
  short sz_29;
  short sz_30;
  short sz_31;
  uint6 uVal_32;
  uint6 uVal_33;
  uint8_t auArr_34 [12];
  uint8_t auArr_35 [12];
  uint8_t auArr_36 [12];
  uint8_t auArr_37 [12];
  int64_t lVal_38;
  uint8_t auArr_39 [12];
  int iVal_40;
  int iVal_41;
  int iVal_43;
  int iVal_44;
  int iVal_45;
  int iVal_46;
  int iVal_47;
  uint8_t auArr_42 [16];
  int iVal_48;
  int iVal_49;
  int iVal_50;
  int iVal_51;
  int iVal_52;
  int iVal_55;
  int iVal_56;
  int iVal_57;
  uint8_t auArr_53 [16];
  uint8_t auArr_54 [16];
  int iVal_58;
  int iVal_62;
  short sz_63;
  int iVal_64;
  uint8_t auArr_59 [16];
  int iVal_65;
  uint8_t auArr_60 [16];
  uint8_t auArr_61 [16];
  uint16_t uVal_70;
  uint8_t auArr_66 [16];
  uint8_t auArr_67 [16];
  uint8_t auArr_68 [16];
  uint8_t auArr_69 [16];
  int iVal_71;
  int iVal_72;
  int iVal_81;
  uint8_t auArr_73 [12];
  int iVal_82;
  int iVal_83;
  int iVal_84;
  int iVal_85;
  int iVal_86;
  uint8_t auArr_75 [16];
  uint8_t auArr_76 [16];
  uint8_t auArr_77 [16];
  uint8_t auArr_78 [16];
  uint8_t auArr_79 [16];
  uint8_t auArr_80 [16];
  int iVal_87;
  int iVal_94;
  int iVal_96;
  uint8_t auArr_89 [16];
  int iVal_88;
  int iVal_95;
  int iVal_97;
  int iVal_98;
  int iVal_99;
  uint8_t auArr_90 [16];
  uint8_t auArr_91 [16];
  uint8_t auArr_92 [16];
  uint8_t auArr_93 [16];
  uint8_t auArr_100 [16];
  uint8_t auArr_101 [16];
  uint8_t auArr_102 [16];
  uint8_t auArr_103 [16];
  int iVal_104;
  int iVal_108;
  int iVal_109;
  int iVal_110;
  uint8_t auArr_105 [16];
  uint8_t auArr_106 [16];
  uint8_t auArr_107 [16];
  int iVal_111;
  int iVal_117;
  int iVal_118;
  uint8_t auArr_112 [16];
  uint8_t auArr_113 [16];
  int iVal_119;
  uint8_t auArr_114 [16];
  uint8_t auArr_115 [16];
  uint8_t auArr_116 [16];
  uint8_t auArr_120 [12];
  uint8_t auArr_121 [16];
  uint8_t auArr_122 [16];
  uint8_t auArr_124 [16];
  uint8_t auArr_125 [16];
  uint8_t auArr_129 [16];
  uint8_t auArr_130 [16];
  uint8_t auArr_131 [16];
  uint8_t auArr_132 [16];
  uint8_t auArr_133 [16];
  uint8_t auArr_137 [16];
  uint8_t auArr_138 [16];
  int iVal_139;
  int iVal_148;
  int iVal_150;
  uint8_t auArr_140 [16];
  uint8_t auArr_144 [16];
  int iVal_151;
  uint8_t auArr_145 [16];
  uint8_t auArr_146 [16];
  short sz_149;
  uint8_t auArr_147 [16];
  uint8_t auArr_152 [12];
  uint8_t auArr_153 [16];
  uint8_t auArr_154 [16];
  uint8_t auArr_155 [16];
  uint8_t auArr_156 [16];
  uint8_t auArr_158 [16];
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  uint8_t auArr_74 [16];
  uint8_t auArr_123 [16];
  uint8_t auArr_126 [16];
  uint8_t auArr_127 [16];
  uint8_t auArr_128 [16];
  uint8_t auArr_134 [16];
  uint8_t auArr_135 [16];
  uint8_t auArr_136 [16];
  uint8_t auArr_141 [16];
  uint8_t auArr_142 [16];
  uint8_t auArr_143 [16];
  uint8_t auArr_157 [16];
  
  auArr_89 = *(uint8_t (*)[16])(param_3 + 0x10);
  auArr_113 = *(uint8_t (*)[16])(param_3 + 0x28);
  auArr_122 = *(uint8_t (*)[16])(param_3 + 0x38);
  auArr_128._0_12_ = auArr_89._0_12_;
  auArr_128._12_2_ = auArr_89._6_2_;
  auArr_128._14_2_ = param_3[0x33];
  auArr_127._12_4_ = auArr_128._12_4_;
  auArr_127._0_10_ = auArr_89._0_10_;
  auArr_127._10_2_ = param_3[0x32];
  auArr_126._10_6_ = auArr_127._10_6_;
  auArr_126._0_8_ = auArr_89._0_8_;
  auArr_126._8_2_ = auArr_89._4_2_;
  auArr_125._8_8_ = auArr_126._8_8_;
  auArr_125._6_2_ = param_3[0x31];
  auArr_125._4_2_ = auArr_89._2_2_;
  auArr_125._0_2_ = auArr_89._0_2_;
  auArr_125._2_2_ = param_3[0x30];
  auArr_153._2_2_ = param_3[0x34];
  auArr_153._0_2_ = auArr_89._8_2_;
  auArr_153._4_2_ = auArr_89._10_2_;
  auArr_153._6_2_ = param_3[0x35];
  auArr_153._8_2_ = auArr_89._12_2_;
  auArr_153._10_2_ = param_3[0x36];
  auArr_153._12_2_ = auArr_89._14_2_;
  auArr_153._14_2_ = param_3[0x37];
  auArr_34._10_2_ = param_3[0x22] + param_3[2];
  auArr_34._0_10_ = (unkuint10)0;
  uVal_32 = CONCAT24(param_3[0x25] + param_3[5],(uint)(ushort)(param_3[0x24] + param_3[4]));
  auArr_73._0_10_ = (unkuint10)uVal_32 << 0x10;
  auArr_73._10_2_ = param_3[0x26] + param_3[6];
  auArr_74._12_2_ = 0;
  auArr_74._0_12_ = auArr_73;
  auArr_74._14_2_ = param_3[0x27] + param_3[7];
  auArr_35._10_2_ = param_3[2] - param_3[0x22];
  auArr_35._0_10_ = (unkuint10)0;
  uVal_33 = CONCAT24(param_3[5] - param_3[0x25],(uint)(ushort)(param_3[4] - param_3[0x24]));
  auArr_39._0_10_ = (unkuint10)uVal_33 << 0x10;
  auArr_39._10_2_ = param_3[6] - param_3[0x26];
  auArr_54._12_2_ = 0;
  auArr_54._0_12_ = auArr_39;
  auArr_54._14_2_ = param_3[7] - param_3[0x27];
  auArr_143._0_12_ = auArr_122._0_12_;
  auArr_143._12_2_ = auArr_122._6_2_;
  auArr_143._14_2_ = param_3[0x1b];
  auArr_142._12_4_ = auArr_143._12_4_;
  auArr_142._0_10_ = auArr_122._0_10_;
  auArr_142._10_2_ = param_3[0x1a];
  auArr_141._10_6_ = auArr_142._10_6_;
  auArr_141._0_8_ = auArr_122._0_8_;
  auArr_141._8_2_ = auArr_122._4_2_;
  auArr_140._8_8_ = auArr_141._8_8_;
  auArr_140._6_2_ = param_3[0x19];
  auArr_140._4_2_ = auArr_122._2_2_;
  auArr_140._0_2_ = auArr_122._0_2_;
  auArr_140._2_2_ = param_3[0x18];
  auArr_121._2_2_ = param_3[0x1c];
  auArr_121._0_2_ = auArr_122._8_2_;
  auArr_121._4_2_ = auArr_122._10_2_;
  auArr_121._6_2_ = param_3[0x1d];
  auArr_121._8_2_ = auArr_122._12_2_;
  auArr_121._10_2_ = param_3[0x1e];
  auArr_121._12_2_ = auArr_122._14_2_;
  auArr_121._14_2_ = param_3[0x1f];
  auArr_144 = pmaddwd(auArr_140,_DAT_1806b2b20);
  auArr_103._0_12_ = auArr_113._0_12_;
  auArr_103._12_2_ = auArr_113._6_2_;
  auArr_103._14_2_ = param_3[0xb];
  auArr_115._12_4_ = auArr_103._12_4_;
  auArr_115._0_10_ = auArr_113._0_10_;
  auArr_115._10_2_ = param_3[10];
  auArr_106._10_6_ = auArr_115._10_6_;
  auArr_106._0_8_ = auArr_113._0_8_;
  auArr_106._8_2_ = auArr_113._4_2_;
  auArr_107._8_8_ = auArr_106._8_8_;
  auArr_107._6_2_ = param_3[9];
  auArr_107._4_2_ = auArr_113._2_2_;
  auArr_107._0_2_ = auArr_113._0_2_;
  auArr_107._2_2_ = param_3[8];
  auArr_100._2_2_ = param_3[0xc];
  auArr_100._0_2_ = auArr_113._8_2_;
  auArr_100._4_2_ = auArr_113._10_2_;
  auArr_100._6_2_ = param_3[0xd];
  auArr_100._8_2_ = auArr_113._12_2_;
  auArr_100._10_2_ = param_3[0xe];
  auArr_100._12_2_ = auArr_113._14_2_;
  auArr_100._14_2_ = param_3[0xf];
  sz_63 = auArr_122._6_2_ + param_3[0xb];
  auArr_112._8_8_ =
       (uint64_t)
       (CONCAT64(CONCAT42(CONCAT22(auArr_113._6_2_ + param_3[0x1b],sz_63),
                          auArr_113._4_2_ + param_3[0x1a]),
                 CONCAT22(auArr_122._4_2_ + param_3[10],sz_63)) >> 0x10);
  auArr_112._6_2_ = auArr_113._2_2_ + param_3[0x19];
  auArr_112._4_2_ = auArr_122._2_2_ + param_3[9];
  auArr_112._2_2_ = auArr_107._0_2_ + param_3[0x18];
  auArr_112._0_2_ = auArr_140._0_2_ + param_3[8];
  auArr_59._2_2_ = auArr_113._8_2_ + param_3[0x1c];
  auArr_59._0_2_ = auArr_122._8_2_ + param_3[0xc];
  auArr_59._4_2_ = auArr_122._10_2_ + param_3[0xd];
  auArr_59._6_2_ = auArr_113._10_2_ + param_3[0x1d];
  auArr_59._8_2_ = auArr_122._12_2_ + param_3[0xe];
  auArr_59._10_2_ = auArr_113._12_2_ + param_3[0x1e];
  auArr_59._12_2_ = auArr_122._14_2_ + param_3[0xf];
  auArr_59._14_2_ = auArr_113._14_2_ + param_3[0x1f];
  auArr_89 = pmaddwd(auArr_107,_DAT_1806b2b30);
  auArr_113 = pmaddwd(auArr_112,_DAT_1806b2b60);
  iVal_87 = auArr_89._0_4_ + auArr_113._0_4_;
  iVal_94 = auArr_89._4_4_ + auArr_113._4_4_;
  iVal_96 = auArr_89._8_4_ + auArr_113._8_4_;
  iVal_98 = auArr_89._12_4_ + auArr_113._12_4_;
  iVal_111 = auArr_113._0_4_ + auArr_144._0_4_;
  iVal_117 = auArr_113._4_4_ + auArr_144._4_4_;
  iVal_118 = auArr_113._8_4_ + auArr_144._8_4_;
  iVal_119 = auArr_113._12_4_ + auArr_144._12_4_;
  auArr_122 = pmaddwd(auArr_121,_DAT_1806b2b20);
  auArr_113 = pmaddwd(auArr_100,_DAT_1806b2b30);
  auArr_89 = pmaddwd(auArr_59,_DAT_1806b2b60);
  iVal_88 = auArr_113._0_4_ + auArr_89._0_4_;
  iVal_95 = auArr_113._4_4_ + auArr_89._4_4_;
  iVal_97 = auArr_113._8_4_ + auArr_89._8_4_;
  iVal_99 = auArr_113._12_4_ + auArr_89._12_4_;
  iVal_58 = auArr_89._0_4_ + auArr_122._0_4_;
  iVal_62 = auArr_89._4_4_ + auArr_122._4_4_;
  iVal_64 = auArr_89._8_4_ + auArr_122._8_4_;
  iVal_65 = auArr_89._12_4_ + auArr_122._12_4_;
  auArr_122 = pmaddwd(auArr_140,_DAT_1806b2b10);
  auArr_89 = pmaddwd(auArr_107,_DAT_1806b2b40);
  auArr_113 = pmaddwd(auArr_112,_DAT_1806b2b50);
  iVal_139 = auArr_122._0_4_ + auArr_113._0_4_;
  iVal_148 = auArr_122._4_4_ + auArr_113._4_4_;
  iVal_150 = auArr_122._8_4_ + auArr_113._8_4_;
  iVal_151 = auArr_122._12_4_ + auArr_113._12_4_;
  iVal_104 = auArr_113._0_4_ + auArr_89._0_4_;
  iVal_108 = auArr_113._4_4_ + auArr_89._4_4_;
  iVal_109 = auArr_113._8_4_ + auArr_89._8_4_;
  iVal_110 = auArr_113._12_4_ + auArr_89._12_4_;
  auArr_89 = pmaddwd(auArr_121,_DAT_1806b2b10);
  auArr_122 = pmaddwd(auArr_100,_DAT_1806b2b40);
  auArr_113 = pmaddwd(auArr_59,_DAT_1806b2b50);
  iVal_48 = auArr_89._0_4_ + auArr_113._0_4_;
  iVal_49 = auArr_89._4_4_ + auArr_113._4_4_;
  iVal_50 = auArr_89._8_4_ + auArr_113._8_4_;
  iVal_51 = auArr_89._12_4_ + auArr_113._12_4_;
  iVal_52 = auArr_113._0_4_ + auArr_122._0_4_;
  iVal_55 = auArr_113._4_4_ + auArr_122._4_4_;
  iVal_56 = auArr_113._8_4_ + auArr_122._8_4_;
  iVal_57 = auArr_113._12_4_ + auArr_122._12_4_;
  auArr_89 = pmaddwd(auArr_125,_DAT_1806b2b00);
  iVal_40 = (int)((uint)(ushort)(param_3[0x20] + *param_3) << 0x10) >> 4;
  iVal_43 = SUB164(ZEXT616(CONCAT42(auArr_34._8_4_,param_3[0x21] + param_3[1])) << 0x30,4) >> 4;
  iVal_45 = auArr_34._8_4_ >> 4;
  iVal_41 = iVal_40 + _DAT_1806b2b70 + auArr_89._0_4_;
  iVal_44 = iVal_43 + _UNK_1806b2b74 + auArr_89._4_4_;
  iVal_46 = iVal_45 + _UNK_1806b2b78 + auArr_89._8_4_;
  iVal_47 = _UNK_1806b2b7c + auArr_89._12_4_;
  auArr_154 = pmaddwd(auArr_153,_DAT_1806b2b00);
  iVal_71 = (int)auArr_73._0_10_ >> 4;
  iVal_81 = (int)((int6)uVal_32 >> 0x14);
  iVal_83 = auArr_73._8_4_ >> 4;
  iVal_85 = auArr_74._12_4_ >> 4;
  iVal_72 = iVal_71 + _DAT_1806b2b70 + auArr_154._0_4_;
  iVal_82 = iVal_81 + _UNK_1806b2b74 + auArr_154._4_4_;
  iVal_84 = iVal_83 + _UNK_1806b2b78 + auArr_154._8_4_;
  iVal_86 = iVal_85 + _UNK_1806b2b7c + auArr_154._12_4_;
  auArr_101._0_4_ = iVal_52 + iVal_72 >> 10;
  auArr_101._4_4_ = iVal_55 + iVal_82 >> 10;
  auArr_101._8_4_ = iVal_56 + iVal_84 >> 10;
  auArr_101._12_4_ = iVal_57 + iVal_86 >> 10;
  auArr_145._0_4_ = iVal_104 + iVal_41 >> 10;
  auArr_145._4_4_ = iVal_108 + iVal_44 >> 10;
  auArr_145._8_4_ = iVal_109 + iVal_46 >> 10;
  auArr_145._12_4_ = iVal_110 + iVal_47 >> 10;
  auArr_146 = packssdw(auArr_145,auArr_101);
  auArr_75._0_4_ = iVal_72 - iVal_52 >> 10;
  auArr_75._4_4_ = iVal_82 - iVal_55 >> 10;
  auArr_75._8_4_ = iVal_84 - iVal_56 >> 10;
  auArr_75._12_4_ = iVal_86 - iVal_57 >> 10;
  auArr_67._0_4_ = iVal_41 - iVal_104 >> 10;
  auArr_67._4_4_ = iVal_44 - iVal_108 >> 10;
  auArr_67._8_4_ = iVal_46 - iVal_109 >> 10;
  auArr_67._12_4_ = iVal_47 - iVal_110 >> 10;
  auArr_42 = packssdw(auArr_67,auArr_75);
  auArr_144 = pmaddwd(auArr_125,_DAT_1806b2af0);
  iVal_72 = (int)((uint)(ushort)(*param_3 - param_3[0x20]) << 0x10) >> 4;
  iVal_84 = SUB164(ZEXT616(CONCAT42(auArr_35._8_4_,param_3[1] - param_3[0x21])) << 0x30,4) >> 4;
  iVal_104 = auArr_35._8_4_ >> 4;
  iVal_82 = iVal_72 + _DAT_1806b2b70 + auArr_144._0_4_;
  iVal_86 = iVal_84 + _UNK_1806b2b74 + auArr_144._4_4_;
  iVal_108 = iVal_104 + _UNK_1806b2b78 + auArr_144._8_4_;
  iVal_109 = _UNK_1806b2b7c + auArr_144._12_4_;
  auArr_113 = pmaddwd(auArr_153,_DAT_1806b2af0);
  iVal_41 = (int)auArr_39._0_10_ >> 4;
  iVal_46 = (int)((int6)uVal_33 >> 0x14);
  iVal_52 = auArr_39._8_4_ >> 4;
  iVal_56 = auArr_54._12_4_ >> 4;
  iVal_44 = iVal_41 + _DAT_1806b2b70 + auArr_113._0_4_;
  iVal_47 = iVal_46 + _UNK_1806b2b74 + auArr_113._4_4_;
  iVal_55 = iVal_52 + _UNK_1806b2b78 + auArr_113._8_4_;
  iVal_57 = iVal_56 + _UNK_1806b2b7c + auArr_113._12_4_;
  auArr_156._0_4_ = iVal_58 + iVal_44 >> 10;
  auArr_156._4_4_ = iVal_62 + iVal_47 >> 10;
  auArr_156._8_4_ = iVal_64 + iVal_55 >> 10;
  auArr_156._12_4_ = iVal_65 + iVal_57 >> 10;
  auArr_155._0_4_ = iVal_111 + iVal_82 >> 10;
  auArr_155._4_4_ = iVal_117 + iVal_86 >> 10;
  auArr_155._8_4_ = iVal_118 + iVal_108 >> 10;
  auArr_155._12_4_ = iVal_119 + iVal_109 >> 10;
  auArr_156 = packssdw(auArr_155,auArr_156);
  auArr_122._0_4_ = iVal_44 - iVal_58 >> 10;
  auArr_122._4_4_ = iVal_47 - iVal_62 >> 10;
  auArr_122._8_4_ = iVal_55 - iVal_64 >> 10;
  auArr_122._12_4_ = iVal_57 - iVal_65 >> 10;
  auArr_66._0_4_ = iVal_82 - iVal_111 >> 10;
  auArr_66._4_4_ = iVal_86 - iVal_117 >> 10;
  auArr_66._8_4_ = iVal_108 - iVal_118 >> 10;
  auArr_66._12_4_ = iVal_109 - iVal_119 >> 10;
  auArr_67 = packssdw(auArr_66,auArr_122);
  iVal_44 = (iVal_72 - auArr_144._0_4_) + _DAT_1806b2b70;
  iVal_47 = (iVal_84 - auArr_144._4_4_) + _UNK_1806b2b74;
  iVal_55 = (iVal_104 - auArr_144._8_4_) + _UNK_1806b2b78;
  iVal_57 = _UNK_1806b2b7c - auArr_144._12_4_;
  iVal_41 = (iVal_41 - auArr_113._0_4_) + _DAT_1806b2b70;
  iVal_46 = (iVal_46 - auArr_113._4_4_) + _UNK_1806b2b74;
  iVal_52 = (iVal_52 - auArr_113._8_4_) + _UNK_1806b2b78;
  iVal_56 = (iVal_56 - auArr_113._12_4_) + _UNK_1806b2b7c;
  auArr_144._0_4_ = iVal_88 + iVal_41 >> 10;
  auArr_144._4_4_ = iVal_95 + iVal_46 >> 10;
  auArr_144._8_4_ = iVal_97 + iVal_52 >> 10;
  auArr_144._12_4_ = iVal_99 + iVal_56 >> 10;
  auArr_114._0_4_ = iVal_87 + iVal_44 >> 10;
  auArr_114._4_4_ = iVal_94 + iVal_47 >> 10;
  auArr_114._8_4_ = iVal_96 + iVal_55 >> 10;
  auArr_114._12_4_ = iVal_98 + iVal_57 >> 10;
  auArr_115 = packssdw(auArr_114,auArr_144);
  auArr_132._0_4_ = iVal_41 - iVal_88 >> 10;
  auArr_132._4_4_ = iVal_46 - iVal_95 >> 10;
  auArr_132._8_4_ = iVal_52 - iVal_97 >> 10;
  auArr_132._12_4_ = iVal_56 - iVal_99 >> 10;
  auArr_105._0_4_ = iVal_44 - iVal_87 >> 10;
  auArr_105._4_4_ = iVal_47 - iVal_94 >> 10;
  auArr_105._8_4_ = iVal_55 - iVal_96 >> 10;
  auArr_105._12_4_ = iVal_57 - iVal_98 >> 10;
  auArr_106 = packssdw(auArr_105,auArr_132);
  iVal_52 = (iVal_40 - auArr_89._0_4_) + _DAT_1806b2b70;
  iVal_55 = (iVal_43 - auArr_89._4_4_) + _UNK_1806b2b74;
  iVal_56 = (iVal_45 - auArr_89._8_4_) + _UNK_1806b2b78;
  iVal_57 = _UNK_1806b2b7c - auArr_89._12_4_;
  iVal_41 = (iVal_71 - auArr_154._0_4_) + _DAT_1806b2b70;
  iVal_44 = (iVal_81 - auArr_154._4_4_) + _UNK_1806b2b74;
  iVal_46 = (iVal_83 - auArr_154._8_4_) + _UNK_1806b2b78;
  iVal_47 = (iVal_85 - auArr_154._12_4_) + _UNK_1806b2b7c;
  auArr_154._0_4_ = iVal_48 + iVal_41 >> 10;
  auArr_154._4_4_ = iVal_49 + iVal_44 >> 10;
  auArr_154._8_4_ = iVal_50 + iVal_46 >> 10;
  auArr_154._12_4_ = iVal_51 + iVal_47 >> 10;
  auArr_53._0_4_ = iVal_139 + iVal_52 >> 10;
  auArr_53._4_4_ = iVal_148 + iVal_55 >> 10;
  auArr_53._8_4_ = iVal_150 + iVal_56 >> 10;
  auArr_53._12_4_ = iVal_151 + iVal_57 >> 10;
  auArr_54 = packssdw(auArr_53,auArr_154);
  auArr_130._0_4_ = iVal_41 - iVal_48 >> 10;
  auArr_130._4_4_ = iVal_44 - iVal_49 >> 10;
  auArr_130._8_4_ = iVal_46 - iVal_50 >> 10;
  auArr_130._12_4_ = iVal_47 - iVal_51 >> 10;
  auArr_90._0_4_ = iVal_52 - iVal_139 >> 10;
  auArr_90._4_4_ = iVal_55 - iVal_148 >> 10;
  auArr_90._8_4_ = iVal_56 - iVal_150 >> 10;
  auArr_90._12_4_ = iVal_57 - iVal_151 >> 10;
  auArr_91 = packssdw(auArr_90,auArr_130);
  uVal_70 = auArr_67._4_2_;
  sz_63 = auArr_54._10_2_;
  sz_149 = auArr_54._14_2_;
  auArr_113._2_8_ =
       (int64_t)
       (CONCAT64(CONCAT42(CONCAT22(auArr_42._4_2_,uVal_70),auArr_106._4_2_),
                 CONCAT22(auArr_91._4_2_,uVal_70)) >> 0x10);
  auArr_113._0_2_ = auArr_54._4_2_;
  auArr_113._10_6_ = 0;
  auArr_89._12_4_ = 0;
  auArr_89._0_12_ = SUB1612(auArr_113 << 0x30,4);
  auArr_89 = auArr_89 << 0x20;
  auArr_136._0_12_ = auArr_89._0_12_;
  auArr_136._12_2_ = auArr_54._4_2_;
  auArr_136._14_2_ = auArr_54._12_2_;
  auArr_135._12_4_ = auArr_136._12_4_;
  auArr_135._0_10_ = auArr_89._0_10_;
  auArr_135._10_2_ = auArr_115._12_2_;
  auArr_134._10_6_ = auArr_135._10_6_;
  auArr_134._0_8_ = auArr_89._0_8_;
  auArr_134._8_2_ = auArr_115._4_2_;
  auArr_133._8_8_ = auArr_134._8_8_;
  auArr_133._6_2_ = auArr_156._12_2_;
  auArr_133._4_2_ = auArr_156._4_2_;
  auArr_133._2_2_ = auArr_146._12_2_;
  auArr_133._0_2_ = auArr_146._4_2_;
  auArr_60._2_2_ = auArr_91._12_2_;
  auArr_60._0_2_ = auArr_91._4_2_;
  auArr_60._4_2_ = auArr_106._4_2_;
  auArr_60._6_2_ = auArr_106._12_2_;
  auArr_60._8_2_ = uVal_70;
  auArr_60._10_2_ = auArr_67._12_2_;
  auArr_60._12_2_ = auArr_42._4_2_;
  auArr_60._14_2_ = auArr_42._12_2_;
  auArr_76 = pmaddwd(auArr_133,_DAT_1806b2af0);
  auArr_144 = pmaddwd(_DAT_1806b2af0,auArr_60);
  auArr_137 = pmaddwd(auArr_133,_DAT_1806b2b00);
  auArr_154 = pmaddwd(auArr_60,_DAT_1806b2b00);
  auArr_36._10_2_ = auArr_115._0_2_ + auArr_115._8_2_;
  auArr_36._0_10_ = (unkuint10)0;
  uVal_32 = CONCAT24(auArr_106._0_2_ + auArr_106._8_2_,(uint)(ushort)(auArr_91._0_2_ + auArr_91._8_2_));
  auArr_152._0_10_ = (unkuint10)uVal_32 << 0x10;
  auArr_152._10_2_ = auArr_67._0_2_ + auArr_67._8_2_;
  auArr_157._12_2_ = 0;
  auArr_157._0_12_ = auArr_152;
  auArr_157._14_2_ = auArr_42._0_2_ + auArr_42._8_2_;
  auArr_37._10_2_ = auArr_115._0_2_ - auArr_115._8_2_;
  auArr_37._0_10_ = (unkuint10)0;
  uVal_33 = CONCAT24(auArr_106._0_2_ - auArr_106._8_2_,(uint)(ushort)(auArr_91._0_2_ - auArr_91._8_2_));
  auArr_120._0_10_ = (unkuint10)uVal_33 << 0x10;
  auArr_120._10_2_ = auArr_67._0_2_ - auArr_67._8_2_;
  auArr_123._12_2_ = 0;
  auArr_123._0_12_ = auArr_120;
  auArr_123._14_2_ = auArr_42._0_2_ - auArr_42._8_2_;
  auArr_78._8_8_ =
       (uint64_t)
       (CONCAT64(CONCAT42(CONCAT22(auArr_54._6_2_,sz_149),auArr_115._6_2_),
                 CONCAT22(auArr_115._14_2_,sz_149)) >> 0x10);
  auArr_78._6_2_ = auArr_156._6_2_;
  auArr_78._4_2_ = auArr_156._14_2_;
  auArr_78._2_2_ = auArr_146._6_2_;
  auArr_78._0_2_ = auArr_146._14_2_;
  auArr_129._2_2_ = auArr_91._6_2_;
  auArr_129._0_2_ = auArr_91._14_2_;
  auArr_129._4_2_ = auArr_106._14_2_;
  auArr_129._6_2_ = auArr_106._6_2_;
  auArr_129._8_2_ = auArr_67._14_2_;
  auArr_129._10_2_ = auArr_67._6_2_;
  auArr_129._12_2_ = auArr_42._14_2_;
  auArr_129._14_2_ = auArr_42._6_2_;
  auArr_77 = pmaddwd(auArr_78,_DAT_1806b2b10);
  auArr_89 = pmaddwd(_DAT_1806b2b10,auArr_129);
  auArr_122 = pmaddwd(auArr_78,_DAT_1806b2b20);
  auArr_130 = pmaddwd(auArr_129,_DAT_1806b2b20);
  auArr_68._8_8_ =
       (uint64_t)
       (CONCAT64(CONCAT42(CONCAT22(auArr_54._2_2_,sz_63),auArr_115._2_2_),
                 CONCAT22(auArr_115._10_2_,sz_63)) >> 0x10);
  auArr_68._6_2_ = auArr_156._2_2_;
  auArr_68._4_2_ = auArr_156._10_2_;
  auArr_68._2_2_ = auArr_146._2_2_;
  auArr_68._0_2_ = auArr_146._10_2_;
  auArr_102._2_2_ = auArr_91._2_2_;
  auArr_102._0_2_ = auArr_91._10_2_;
  auArr_102._4_2_ = auArr_106._10_2_;
  auArr_102._6_2_ = auArr_106._2_2_;
  auArr_102._8_2_ = auArr_67._10_2_;
  auArr_102._10_2_ = auArr_67._2_2_;
  auArr_102._12_2_ = auArr_42._10_2_;
  auArr_102._14_2_ = auArr_42._2_2_;
  auArr_107 = pmaddwd(auArr_68,_DAT_1806b2b30);
  auArr_78 = pmaddwd(_DAT_1806b2b30,auArr_102);
  auArr_113 = pmaddwd(auArr_68,_DAT_1806b2b40);
  auArr_103 = pmaddwd(auArr_102,_DAT_1806b2b40);
  sz_149 = sz_149 + auArr_54._2_2_;
  auArr_92._8_8_ =
       (uint64_t)
       (CONCAT64(CONCAT42(CONCAT22(auArr_54._6_2_ + sz_63,sz_149),auArr_115._6_2_ + auArr_115._10_2_)
                 ,CONCAT22(auArr_115._14_2_ + auArr_115._2_2_,sz_149)) >> 0x10);
  auArr_92._6_2_ = auArr_156._6_2_ + auArr_156._10_2_;
  auArr_92._4_2_ = auArr_156._14_2_ + auArr_156._2_2_;
  auArr_92._2_2_ = auArr_146._6_2_ + auArr_146._10_2_;
  auArr_92._0_2_ = auArr_146._14_2_ + auArr_146._2_2_;
  auArr_147._2_2_ = auArr_91._6_2_ + auArr_91._10_2_;
  auArr_147._0_2_ = auArr_91._14_2_ + auArr_91._2_2_;
  auArr_147._4_2_ = auArr_106._14_2_ + auArr_106._2_2_;
  auArr_147._6_2_ = auArr_106._6_2_ + auArr_106._10_2_;
  auArr_147._8_2_ = auArr_67._14_2_ + auArr_67._2_2_;
  auArr_147._10_2_ = auArr_67._6_2_ + auArr_67._10_2_;
  auArr_147._12_2_ = auArr_42._14_2_ + auArr_42._2_2_;
  auArr_147._14_2_ = auArr_42._6_2_ + auArr_42._10_2_;
  auArr_68 = pmaddwd(auArr_92,_DAT_1806b2b50);
  auArr_54 = pmaddwd(_DAT_1806b2b50,auArr_147);
  auArr_42 = pmaddwd(auArr_92,_DAT_1806b2b60);
  auArr_67 = pmaddwd(auArr_147,_DAT_1806b2b60);
  iVal_58 = auArr_107._0_4_ + auArr_42._0_4_;
  iVal_62 = auArr_107._4_4_ + auArr_42._4_4_;
  iVal_64 = auArr_107._8_4_ + auArr_42._8_4_;
  iVal_65 = auArr_107._12_4_ + auArr_42._12_4_;
  iVal_48 = auArr_42._0_4_ + auArr_122._0_4_;
  iVal_49 = auArr_42._4_4_ + auArr_122._4_4_;
  iVal_50 = auArr_42._8_4_ + auArr_122._8_4_;
  iVal_51 = auArr_42._12_4_ + auArr_122._12_4_;
  local_b8 = auArr_78._0_4_;
  iStack_b4 = auArr_78._4_4_;
  iStack_b0 = auArr_78._8_4_;
  iStack_ac = auArr_78._12_4_;
  local_b8 = local_b8 + auArr_67._0_4_;
  iStack_b4 = iStack_b4 + auArr_67._4_4_;
  iStack_b0 = iStack_b0 + auArr_67._8_4_;
  iStack_ac = iStack_ac + auArr_67._12_4_;
  iVal_87 = auArr_67._0_4_ + auArr_130._0_4_;
  iVal_88 = auArr_67._4_4_ + auArr_130._4_4_;
  iVal_94 = auArr_67._8_4_ + auArr_130._8_4_;
  iVal_95 = auArr_67._12_4_ + auArr_130._12_4_;
  local_f8 = auArr_77._0_4_;
  iStack_f4 = auArr_77._4_4_;
  iStack_f0 = auArr_77._8_4_;
  iStack_ec = auArr_77._12_4_;
  local_f8 = local_f8 + auArr_68._0_4_;
  iStack_f4 = iStack_f4 + auArr_68._4_4_;
  iStack_f0 = iStack_f0 + auArr_68._8_4_;
  iStack_ec = iStack_ec + auArr_68._12_4_;
  iVal_57 = auArr_68._0_4_ + auArr_113._0_4_;
  iVal_40 = auArr_68._4_4_ + auArr_113._4_4_;
  iVal_43 = auArr_68._8_4_ + auArr_113._8_4_;
  iVal_45 = auArr_68._12_4_ + auArr_113._12_4_;
  local_e8 = auArr_89._0_4_;
  iStack_e4 = auArr_89._4_4_;
  iStack_e0 = auArr_89._8_4_;
  iStack_dc = auArr_89._12_4_;
  local_e8 = local_e8 + auArr_54._0_4_;
  iStack_e4 = iStack_e4 + auArr_54._4_4_;
  iStack_e0 = iStack_e0 + auArr_54._8_4_;
  iStack_dc = iStack_dc + auArr_54._12_4_;
  iVal_41 = auArr_54._0_4_ + auArr_103._0_4_;
  iVal_44 = auArr_54._4_4_ + auArr_103._4_4_;
  iVal_46 = auArr_54._8_4_ + auArr_103._8_4_;
  iVal_47 = auArr_54._12_4_ + auArr_103._12_4_;
  iVal_72 = (int)((uint)(ushort)(auArr_146._0_2_ + auArr_146._8_2_) << 0x10) >> 4;
  iVal_84 = SUB164(ZEXT616(CONCAT42(auArr_36._8_4_,auArr_156._0_2_ + auArr_156._8_2_)) << 0x30,4) >> 4;
  iVal_104 = auArr_36._8_4_ >> 4;
  iVal_82 = iVal_72 + _DAT_1806b2b80 + auArr_137._0_4_;
  iVal_86 = iVal_84 + _UNK_1806b2b84 + auArr_137._4_4_;
  iVal_108 = iVal_104 + _UNK_1806b2b88 + auArr_137._8_4_;
  iVal_109 = _UNK_1806b2b8c + auArr_137._12_4_;
  iVal_96 = (int)auArr_152._0_10_ >> 4;
  iVal_98 = (int)((int6)uVal_32 >> 0x14);
  iVal_110 = auArr_152._8_4_ >> 4;
  iVal_117 = auArr_157._12_4_ >> 4;
  iVal_97 = iVal_96 + _DAT_1806b2b80 + auArr_154._0_4_;
  iVal_99 = iVal_98 + _UNK_1806b2b84 + auArr_154._4_4_;
  iVal_111 = iVal_110 + _UNK_1806b2b88 + auArr_154._8_4_;
  iVal_118 = iVal_117 + _UNK_1806b2b8c + auArr_154._12_4_;
  auArr_77._0_4_ = iVal_41 + iVal_97 >> 0x11;
  auArr_77._4_4_ = iVal_44 + iVal_99 >> 0x11;
  auArr_77._8_4_ = iVal_46 + iVal_111 >> 0x11;
  auArr_77._12_4_ = iVal_47 + iVal_118 >> 0x11;
  auArr_61._0_4_ = iVal_57 + iVal_82 >> 0x11;
  auArr_61._4_4_ = iVal_40 + iVal_86 >> 0x11;
  auArr_61._8_4_ = iVal_43 + iVal_108 >> 0x11;
  auArr_61._12_4_ = iVal_45 + iVal_109 >> 0x11;
  auArr_68 = packssdw(auArr_61,auArr_77);
  iVal_52 = (int)((uint)(ushort)(auArr_146._0_2_ - auArr_146._8_2_) << 0x10) >> 4;
  iVal_55 = SUB164(ZEXT616(CONCAT42(auArr_37._8_4_,auArr_156._0_2_ - auArr_156._8_2_)) << 0x30,4) >> 4;
  iVal_56 = auArr_37._8_4_ >> 4;
  iVal_71 = (int)auArr_120._0_10_ >> 4;
  iVal_81 = (int)((int6)uVal_33 >> 0x14);
  iVal_83 = auArr_120._8_4_ >> 4;
  iVal_85 = auArr_123._12_4_ >> 4;
  auArr_158._0_4_ = iVal_97 - iVal_41 >> 0x11;
  auArr_158._4_4_ = iVal_99 - iVal_44 >> 0x11;
  auArr_158._8_4_ = iVal_111 - iVal_46 >> 0x11;
  auArr_158._12_4_ = iVal_118 - iVal_47 >> 0x11;
  auArr_116._0_4_ = iVal_82 - iVal_57 >> 0x11;
  auArr_116._4_4_ = iVal_86 - iVal_40 >> 0x11;
  auArr_116._8_4_ = iVal_108 - iVal_43 >> 0x11;
  auArr_116._12_4_ = iVal_109 - iVal_45 >> 0x11;
  auArr_78 = packssdw(auArr_116,auArr_158);
  local_d8 = auArr_76._0_4_;
  iStack_d4 = auArr_76._4_4_;
  iStack_d0 = auArr_76._8_4_;
  iStack_cc = auArr_76._12_4_;
  iVal_41 = iVal_52 + _DAT_1806b2b80 + local_d8;
  iVal_44 = iVal_55 + _UNK_1806b2b84 + iStack_d4;
  iVal_46 = iVal_56 + _UNK_1806b2b88 + iStack_d0;
  local_c8 = auArr_144._0_4_;
  iStack_c4 = auArr_144._4_4_;
  iStack_c0 = auArr_144._8_4_;
  iStack_bc = auArr_144._12_4_;
  iVal_47 = iVal_71 + _DAT_1806b2b80 + local_c8;
  iVal_57 = iVal_81 + _UNK_1806b2b84 + iStack_c4;
  iVal_40 = iVal_83 + _UNK_1806b2b88 + iStack_c0;
  iVal_43 = iVal_85 + _UNK_1806b2b8c + iStack_bc;
  auArr_93._0_4_ = iVal_87 + iVal_47 >> 0x11;
  auArr_93._4_4_ = iVal_88 + iVal_57 >> 0x11;
  auArr_93._8_4_ = iVal_94 + iVal_40 >> 0x11;
  auArr_93._12_4_ = iVal_95 + iVal_43 >> 0x11;
  auArr_76._0_4_ = iVal_48 + iVal_41 >> 0x11;
  auArr_76._4_4_ = iVal_49 + iVal_44 >> 0x11;
  auArr_76._8_4_ = iVal_50 + iVal_46 >> 0x11;
  auArr_76._12_4_ = iVal_51 + _UNK_1806b2b8c + iStack_cc >> 0x11;
  auArr_113 = packssdw(auArr_76,auArr_93);
  sz_63 = auArr_68._0_2_;
  sz_4 = auArr_68._4_2_;
  sz_8 = auArr_68._8_2_;
  sz_12 = auArr_68._12_2_;
  sz_16 = auArr_113._0_2_;
  sz_20 = auArr_113._4_2_;
  sz_24 = auArr_113._8_2_;
  sz_28 = auArr_113._12_2_;
  auArr_124._0_4_ = iVal_47 - iVal_87 >> 0x11;
  auArr_124._4_4_ = iVal_57 - iVal_88 >> 0x11;
  auArr_124._8_4_ = iVal_40 - iVal_94 >> 0x11;
  auArr_124._12_4_ = iVal_43 - iVal_95 >> 0x11;
  auArr_146._0_4_ = iVal_41 - iVal_48 >> 0x11;
  auArr_146._4_4_ = iVal_44 - iVal_49 >> 0x11;
  auArr_146._8_4_ = iVal_46 - iVal_50 >> 0x11;
  auArr_146._12_4_ = (_UNK_1806b2b8c + iStack_cc) - iVal_51 >> 0x11;
  auArr_144 = packssdw(auArr_146,auArr_124);
  sz_149 = auArr_144._0_2_;
  sz_5 = auArr_144._4_2_;
  sz_9 = auArr_144._8_2_;
  sz_13 = auArr_144._12_2_;
  sz_17 = auArr_78._0_2_;
  sz_21 = auArr_78._4_2_;
  sz_25 = auArr_78._8_2_;
  sz_29 = auArr_78._12_2_;
  iVal_41 = (iVal_52 - local_d8) + _DAT_1806b2b80;
  iVal_44 = (iVal_55 - iStack_d4) + _UNK_1806b2b84;
  iVal_46 = (iVal_56 - iStack_d0) + _UNK_1806b2b88;
  iVal_47 = (iVal_71 - local_c8) + _DAT_1806b2b80;
  iVal_52 = (iVal_81 - iStack_c4) + _UNK_1806b2b84;
  iVal_55 = (iVal_83 - iStack_c0) + _UNK_1806b2b88;
  iVal_56 = (iVal_85 - iStack_bc) + _UNK_1806b2b8c;
  auArr_79._0_4_ = local_b8 + iVal_47 >> 0x11;
  auArr_79._4_4_ = iStack_b4 + iVal_52 >> 0x11;
  auArr_79._8_4_ = iStack_b0 + iVal_55 >> 0x11;
  auArr_79._12_4_ = iStack_ac + iVal_56 >> 0x11;
  auArr_91._0_4_ = iVal_58 + iVal_41 >> 0x11;
  auArr_91._4_4_ = iVal_62 + iVal_44 >> 0x11;
  auArr_91._8_4_ = iVal_64 + iVal_46 >> 0x11;
  auArr_91._12_4_ = iVal_65 + (_UNK_1806b2b8c - iStack_cc) >> 0x11;
  auArr_122 = packssdw(auArr_91,auArr_79);
  auArr_138._0_4_ = iVal_47 - local_b8 >> 0x11;
  auArr_138._4_4_ = iVal_52 - iStack_b4 >> 0x11;
  auArr_138._8_4_ = iVal_55 - iStack_b0 >> 0x11;
  auArr_138._12_4_ = iVal_56 - iStack_ac >> 0x11;
  auArr_69._0_4_ = iVal_41 - iVal_58 >> 0x11;
  auArr_69._4_4_ = iVal_44 - iVal_62 >> 0x11;
  auArr_69._8_4_ = iVal_46 - iVal_64 >> 0x11;
  auArr_69._12_4_ = (_UNK_1806b2b8c - iStack_cc) - iVal_65 >> 0x11;
  auArr_67 = packssdw(auArr_69,auArr_138);
  iVal_41 = (iVal_72 - auArr_137._0_4_) + _DAT_1806b2b80;
  iVal_44 = (iVal_84 - auArr_137._4_4_) + _UNK_1806b2b84;
  iVal_46 = (iVal_104 - auArr_137._8_4_) + _UNK_1806b2b88;
  iVal_47 = _UNK_1806b2b8c - auArr_137._12_4_;
  iVal_52 = (iVal_96 - auArr_154._0_4_) + _DAT_1806b2b80;
  iVal_55 = (iVal_98 - auArr_154._4_4_) + _UNK_1806b2b84;
  iVal_56 = (iVal_110 - auArr_154._8_4_) + _UNK_1806b2b88;
  iVal_57 = (iVal_117 - auArr_154._12_4_) + _UNK_1806b2b8c;
  auArr_80._0_4_ = local_e8 + iVal_52 >> 0x11;
  auArr_80._4_4_ = iStack_e4 + iVal_55 >> 0x11;
  auArr_80._8_4_ = iStack_e0 + iVal_56 >> 0x11;
  auArr_80._12_4_ = iStack_dc + iVal_57 >> 0x11;
  auArr_137._0_4_ = local_f8 + iVal_41 >> 0x11;
  auArr_137._4_4_ = iStack_f4 + iVal_44 >> 0x11;
  auArr_137._8_4_ = iStack_f0 + iVal_46 >> 0x11;
  auArr_137._12_4_ = iStack_ec + iVal_47 >> 0x11;
  auArr_54 = packssdw(auArr_137,auArr_80);
  sz_2 = auArr_122._0_2_;
  sz_6 = auArr_122._4_2_;
  sz_10 = auArr_122._8_2_;
  sz_14 = auArr_122._12_2_;
  sz_18 = auArr_54._0_2_;
  sz_22 = auArr_54._4_2_;
  sz_26 = auArr_54._8_2_;
  sz_30 = auArr_54._12_2_;
  auArr_131._0_4_ = iVal_52 - local_e8 >> 0x11;
  auArr_131._4_4_ = iVal_55 - iStack_e4 >> 0x11;
  auArr_131._8_4_ = iVal_56 - iStack_e0 >> 0x11;
  auArr_131._12_4_ = iVal_57 - iStack_dc >> 0x11;
  auArr_42._0_4_ = iVal_41 - local_f8 >> 0x11;
  auArr_42._4_4_ = iVal_44 - iStack_f4 >> 0x11;
  auArr_42._8_4_ = iVal_46 - iStack_f0 >> 0x11;
  auArr_42._12_4_ = iVal_47 - iStack_ec >> 0x11;
  auArr_89 = packssdw(auArr_42,auArr_131);
  sz_3 = auArr_89._0_2_;
  sz_7 = auArr_89._4_2_;
  sz_11 = auArr_89._8_2_;
  sz_15 = auArr_89._12_2_;
  sz_19 = auArr_67._0_2_;
  sz_23 = auArr_67._4_2_;
  sz_27 = auArr_67._8_2_;
  sz_31 = auArr_67._12_2_;
  *param_1 = (0 < sz_63) * (sz_63 < 0xff) * auArr_68[0] - (0xff < sz_63);
  param_1[1] = (0 < sz_16) * (sz_16 < 0xff) * auArr_113[0] - (0xff < sz_16);
  param_1[2] = (0 < sz_2) * (sz_2 < 0xff) * auArr_122[0] - (0xff < sz_2);
  param_1[3] = (0 < sz_18) * (sz_18 < 0xff) * auArr_54[0] - (0xff < sz_18);
  param_1[4] = (0 < sz_3) * (sz_3 < 0xff) * auArr_89[0] - (0xff < sz_3);
  param_1[5] = (0 < sz_19) * (sz_19 < 0xff) * auArr_67[0] - (0xff < sz_19);
  param_1[6] = (0 < sz_149) * (sz_149 < 0xff) * auArr_144[0] - (0xff < sz_149);
  param_1[7] = (0 < sz_17) * (sz_17 < 0xff) * auArr_78[0] - (0xff < sz_17);
  lVal_38 = (int64_t)param_2;
  *(uint64_t *)(param_1 + lVal_38 * 2) =
       CONCAT17((0 < sz_21) * (sz_21 < 0xff) * auArr_78[4] - (0xff < sz_21),
                CONCAT16((0 < sz_5) * (sz_5 < 0xff) * auArr_144[4] - (0xff < sz_5),
                         CONCAT15((0 < sz_23) * (sz_23 < 0xff) * auArr_67[4] - (0xff < sz_23),
                                  CONCAT14((0 < sz_7) * (sz_7 < 0xff) * auArr_89[4] -
                                           (0xff < sz_7),
                                           CONCAT13((0 < sz_22) * (sz_22 < 0xff) * auArr_54[4] -
                                                    (0xff < sz_22),
                                                    CONCAT12((0 < sz_6) * (sz_6 < 0xff) *
                                                             auArr_122[4] - (0xff < sz_6),
                                                             CONCAT11((0 < sz_20) * (sz_20 < 0xff)
                                                                      * auArr_113[4] -
                                                                      (0xff < sz_20),
                                                                      (0 < sz_4) * (sz_4 < 0xff) *
                                                                      auArr_68[4] - (0xff < sz_4))))
                                          ))));
  fnPtr_1 = param_1 + lVal_38 * 4;
  *fnPtr_1 = (0 < sz_8) * (sz_8 < 0xff) * auArr_68[8] - (0xff < sz_8);
  fnPtr_1[1] = (0 < sz_24) * (sz_24 < 0xff) * auArr_113[8] - (0xff < sz_24);
  fnPtr_1[2] = (0 < sz_10) * (sz_10 < 0xff) * auArr_122[8] - (0xff < sz_10);
  fnPtr_1[3] = (0 < sz_26) * (sz_26 < 0xff) * auArr_54[8] - (0xff < sz_26);
  fnPtr_1[4] = (0 < sz_11) * (sz_11 < 0xff) * auArr_89[8] - (0xff < sz_11);
  fnPtr_1[5] = (0 < sz_27) * (sz_27 < 0xff) * auArr_67[8] - (0xff < sz_27);
  fnPtr_1[6] = (0 < sz_9) * (sz_9 < 0xff) * auArr_144[8] - (0xff < sz_9);
  fnPtr_1[7] = (0 < sz_25) * (sz_25 < 0xff) * auArr_78[8] - (0xff < sz_25);
  *(uint64_t *)(param_1 + lVal_38 * 6) =
       CONCAT17((0 < sz_29) * (sz_29 < 0xff) * auArr_78[12] - (0xff < sz_29),
                CONCAT16((0 < sz_13) * (sz_13 < 0xff) * auArr_144[12] - (0xff < sz_13),
                         CONCAT15((0 < sz_31) * (sz_31 < 0xff) * auArr_67[12] - (0xff < sz_31),
                                  CONCAT14((0 < sz_15) * (sz_15 < 0xff) * auArr_89[12] -
                                           (0xff < sz_15),
                                           CONCAT13((0 < sz_30) * (sz_30 < 0xff) * auArr_54[12] -
                                                    (0xff < sz_30),
                                                    CONCAT12((0 < sz_14) * (sz_14 < 0xff) *
                                                             auArr_122[12] - (0xff < sz_14),
                                                             CONCAT11((0 < sz_28) * (sz_28 < 0xff)
                                                                      * auArr_113[12] -
                                                                      (0xff < sz_28),
                                                                      (0 < sz_12) * (sz_12 < 0xff)
                                                                      * auArr_68[12] -
                                                                      (0xff < sz_12))))))));
  return;
}

// func_0x1800ebcf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1800ebcf0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint param_5, int param_6)
{
  uint64_t uVal_1;
  short sz_2;
  short sz_3;
  uint8_t auArr_4 [16];
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [14];
  uint8_t auArr_7 [12];
  unkbyte10 Var8;
  uint8_t auArr_9 [12];
  uint8_t auArr_10 [12];
  uint8_t auArr_11 [12];
  uint8_t auArr_12 [12];
  uint8_t auArr_13 [12];
  uint8_t auArr_14 [12];
  short sz_15;
  short sz_16;
  short sz_17;
  short sz_18;
  short sz_19;
  short sz_20;
  short sz_21;
  short sz_22;
  uint8_t auArr_23 [16];
  uint8_t auArr_24 [16];
  uint8_t auArr_25 [16];
  uint8_t auArr_26 [16];
  uint8_t auArr_27 [16];
  uint8_t *pU64_28;
  uint64_t uVal_29;
  uint64_t uVal_30;
  int iVal_31;
  int iVal_32;
  int64_t lVal_33;
  int iVal_34;
  uint64_t uVal_35;
  int iVal_36;
  uint8_t auArr_37 [16];
  uint8_t auArr_38 [16];
  uint8_t auArr_39 [16];
  uint8_t auArr_40 [16];
  uint8_t auArr_41 [16];
  uint8_t auArr_42 [16];
  uint8_t auArr_50 [16];
  uint8_t auArr_51 [16];
  uint8_t auArr_52 [16];
  uint8_t auArr_53 [16];
  uint8_t auArr_54 [16];
  uint8_t auArr_55 [16];
  ushort uVal_63;
  ushort uVal_71;
  ushort uVal_72;
  ushort uVal_73;
  ushort uVal_74;
  ushort uVal_75;
  ushort uVal_76;
  uint8_t auArr_64 [16];
  ushort uVal_77;
  uint8_t auArr_78 [16];
  uint8_t auArr_79 [16];
  uint8_t auArr_80 [16];
  uint8_t auArr_43 [16];
  uint8_t auArr_44 [16];
  uint8_t auArr_45 [16];
  uint8_t auArr_46 [16];
  uint8_t auArr_47 [16];
  uint8_t auArr_48 [16];
  uint8_t auArr_49 [16];
  uint8_t auArr_56 [16];
  uint8_t auArr_57 [16];
  uint8_t auArr_58 [16];
  uint8_t auArr_59 [16];
  uint8_t auArr_60 [16];
  uint8_t auArr_61 [16];
  uint8_t auArr_62 [16];
  uint8_t auArr_65 [16];
  uint8_t auArr_66 [16];
  uint8_t auArr_67 [16];
  uint8_t auArr_68 [16];
  uint8_t auArr_69 [16];
  uint8_t auArr_70 [16];
  
  auArr_27 = _DAT_1806b2bd0;
  auArr_26 = _DAT_1806b2bc0;
  auArr_25 = _DAT_1806b2bb0;
  auArr_24 = _DAT_1806b2ba0;
  auArr_23 = _DAT_1806b2b90;
  sz_22 = _UNK_1806b29ce;
  sz_21 = _UNK_1806b29cc;
  sz_20 = _UNK_1806b29ca;
  sz_19 = _UNK_1806b29c8;
  sz_18 = _UNK_1806b29c6;
  sz_17 = _UNK_1806b29c4;
  sz_16 = _UNK_1806b29c2;
  sz_15 = _DAT_1806b29c0;
  uVal_30 = 0;
  if (7 < (int)param_5 && param_6 == 4) {
    auArr_37._8_8_ = 0;
    auArr_37._0_8_ = DAT_1806b2be0;
    auArr_38._8_8_ = 0;
    auArr_38._0_8_ = DAT_1806b2bf0;
    lVal_33 = 0;
    uVal_29 = 0;
    do {
      uVal_1 = *(uint64_t *)(param_2 + uVal_29);
      auArr_50._8_8_ = 0;
      auArr_50._0_8_ = *(uint64_t *)(param_4 + uVal_29);
      auArr_54._8_8_ = 0;
      auArr_54._0_8_ = *(uint64_t *)(param_3 + uVal_29);
      auArr_70._0_14_ = auArr_23._0_14_;
      auArr_70[14] = auArr_23[7];
      auArr_70[15] = (char)((uint64_t)uVal_1 >> 0x38);
      auArr_69._14_2_ = auArr_70._14_2_;
      auArr_69._0_13_ = auArr_23._0_13_;
      auArr_69[13] = (char)((uint64_t)uVal_1 >> 0x30);
      auArr_68._13_3_ = auArr_69._13_3_;
      auArr_68._0_12_ = auArr_23._0_12_;
      auArr_68[12] = auArr_23[6];
      auArr_67._12_4_ = auArr_68._12_4_;
      auArr_67._0_11_ = auArr_23._0_11_;
      auArr_67[11] = (char)((uint64_t)uVal_1 >> 0x28);
      auArr_66._11_5_ = auArr_67._11_5_;
      auArr_66._0_10_ = auArr_23._0_10_;
      auArr_66[10] = auArr_23[5];
      auArr_65._10_6_ = auArr_66._10_6_;
      auArr_65._0_9_ = auArr_23._0_9_;
      auArr_65[9] = (char)((uint64_t)uVal_1 >> 0x20);
      auArr_64._9_7_ = auArr_65._9_7_;
      auArr_64._0_8_ = auArr_23._0_8_;
      auArr_64[8] = auArr_23[4];
      Var8 = CONCAT91(CONCAT81(auArr_64._8_8_,(char)((uint64_t)uVal_1 >> 0x18)),auArr_23[3]);
      auArr_7._2_10_ = Var8;
      auArr_7[1] = (char)((uint64_t)uVal_1 >> 0x10);
      auArr_7[0] = auArr_23[2];
      auArr_6._2_12_ = auArr_7;
      auArr_6[1] = (char)((uint64_t)uVal_1 >> 8);
      auArr_6[0] = auArr_23[1];
      auArr_50 = auArr_50 ^ auArr_23;
      auArr_9[10] = 0;
      auArr_9._0_10_ = SUB1610((uint8_t  [16])0x0,0);
      auArr_9[11] = auArr_50[5];
      auArr_11[9] = auArr_50[4];
      auArr_11._0_9_ = SUB169((uint8_t  [16])0x0,0);
      auArr_11._10_2_ = auArr_9._10_2_;
      auArr_13._9_3_ = auArr_11._9_3_;
      auArr_13._0_9_ = (unkuint9)0;
      auArr_51._1_10_ = SUB1610(ZEXT516(CONCAT41(auArr_13._8_4_,auArr_50[3])) << 0x38,6);
      auArr_51[0] = auArr_50[2];
      auArr_51._11_5_ = 0;
      auArr_39._1_12_ = SUB1612(auArr_51 << 0x28,4);
      auArr_39[0] = auArr_50[1];
      auArr_39._13_3_ = 0;
      auArr_78._1_14_ = SUB1614(auArr_39 << 0x18,2);
      auArr_78[0] = auArr_50[0];
      auArr_78[15] = 0;
      auArr_54 = auArr_54 ^ auArr_23;
      auArr_10[10] = 0;
      auArr_10._0_10_ = SUB1610((uint8_t  [16])0x0,0);
      auArr_10[11] = auArr_54[5];
      auArr_12[9] = auArr_54[4];
      auArr_12._0_9_ = SUB169((uint8_t  [16])0x0,0);
      auArr_12._10_2_ = auArr_10._10_2_;
      auArr_14._9_3_ = auArr_12._9_3_;
      auArr_14._0_9_ = (unkuint9)0;
      auArr_5._1_10_ = SUB1610(ZEXT516(CONCAT41(auArr_14._8_4_,auArr_54[3])) << 0x38,6);
      auArr_5[0] = auArr_54[2];
      auArr_5._11_5_ = 0;
      auArr_4._1_12_ = SUB1612(auArr_5 << 0x28,4);
      auArr_4[0] = auArr_54[1];
      auArr_4._13_3_ = 0;
      auArr_79._1_14_ = SUB1614(auArr_4 << 0x18,2);
      auArr_79[0] = auArr_54[0];
      auArr_79[15] = 0;
      uVal_63 = CONCAT11((char)uVal_1,auArr_23[0]) >> 4;
      uVal_71 = auArr_6._0_2_ >> 4;
      uVal_72 = auArr_7._0_2_ >> 4;
      uVal_73 = (ushort)Var8 >> 4;
      uVal_74 = auArr_64._8_2_ >> 4;
      uVal_75 = auArr_66._10_2_ >> 4;
      uVal_76 = auArr_68._12_2_ >> 4;
      uVal_77 = auArr_69._14_2_ >> 4;
      auArr_39 = pmulhw(auArr_78 << 8,auArr_24);
      auArr_51 = pmulhw(auArr_79 << 8,auArr_25);
      auArr_79 = pmulhw(auArr_79 << 8,auArr_26);
      auArr_78 = pmulhw(auArr_78 << 8,auArr_27);
      auArr_40._0_2_ = auArr_39._0_2_ + uVal_63;
      auArr_40._2_2_ = auArr_39._2_2_ + uVal_71;
      auArr_40._4_2_ = auArr_39._4_2_ + uVal_72;
      auArr_40._6_2_ = auArr_39._6_2_ + uVal_73;
      auArr_40._8_2_ = auArr_39._8_2_ + uVal_74;
      auArr_40._10_2_ = auArr_39._10_2_ + uVal_75;
      auArr_40._12_2_ = auArr_39._12_2_ + uVal_76;
      auArr_40._14_2_ = auArr_39._14_2_ + uVal_77;
      auArr_52._0_2_ = auArr_51._0_2_ + uVal_63 + auArr_78._0_2_;
      auArr_52._2_2_ = auArr_51._2_2_ + uVal_71 + auArr_78._2_2_;
      auArr_52._4_2_ = auArr_51._4_2_ + uVal_72 + auArr_78._4_2_;
      auArr_52._6_2_ = auArr_51._6_2_ + uVal_73 + auArr_78._6_2_;
      auArr_52._8_2_ = auArr_51._8_2_ + uVal_74 + auArr_78._8_2_;
      auArr_52._10_2_ = auArr_51._10_2_ + uVal_75 + auArr_78._10_2_;
      auArr_52._12_2_ = auArr_51._12_2_ + uVal_76 + auArr_78._12_2_;
      auArr_52._14_2_ = auArr_51._14_2_ + uVal_77 + auArr_78._14_2_;
      auArr_80._0_2_ = auArr_79._0_2_ + uVal_63;
      auArr_80._2_2_ = auArr_79._2_2_ + uVal_71;
      auArr_80._4_2_ = auArr_79._4_2_ + uVal_72;
      auArr_80._6_2_ = auArr_79._6_2_ + uVal_73;
      auArr_80._8_2_ = auArr_79._8_2_ + uVal_74;
      auArr_80._10_2_ = auArr_79._10_2_ + uVal_75;
      auArr_80._12_2_ = auArr_79._12_2_ + uVal_76;
      auArr_80._14_2_ = auArr_79._14_2_ + uVal_77;
      auArr_78 = psraw(auArr_40,4);
      auArr_79 = psraw(auArr_80,4);
      sz_2 = auArr_78._0_2_;
      sz_3 = auArr_78._2_2_;
      auArr_41[1] = (0 < sz_3) * (sz_3 < 0xff) * auArr_78[2] - (0xff < sz_3);
      auArr_41[0] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[0] - (0xff < sz_2);
      sz_2 = auArr_78._4_2_;
      auArr_41[2] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[4] - (0xff < sz_2);
      sz_2 = auArr_78._6_2_;
      auArr_41[3] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[6] - (0xff < sz_2);
      sz_2 = auArr_78._8_2_;
      auArr_41[4] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[8] - (0xff < sz_2);
      sz_2 = auArr_78._10_2_;
      auArr_41[5] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[10] - (0xff < sz_2);
      sz_2 = auArr_78._12_2_;
      auArr_41[6] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[12] - (0xff < sz_2);
      sz_2 = auArr_78._14_2_;
      auArr_41[7] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[14] - (0xff < sz_2);
      sz_2 = auArr_79._0_2_;
      auArr_41[8] = (0 < sz_2) * (sz_2 < 0xff) * auArr_79[0] - (0xff < sz_2);
      sz_2 = auArr_79._2_2_;
      auArr_41[9] = (0 < sz_2) * (sz_2 < 0xff) * auArr_79[2] - (0xff < sz_2);
      sz_2 = auArr_79._4_2_;
      auArr_41[10] = (0 < sz_2) * (sz_2 < 0xff) * auArr_79[4] - (0xff < sz_2);
      sz_2 = auArr_79._6_2_;
      auArr_41[11] = (0 < sz_2) * (sz_2 < 0xff) * auArr_79[6] - (0xff < sz_2);
      sz_2 = auArr_79._8_2_;
      auArr_41[12] = (0 < sz_2) * (sz_2 < 0xff) * auArr_79[8] - (0xff < sz_2);
      sz_2 = auArr_79._10_2_;
      auArr_41[13] = (0 < sz_2) * (sz_2 < 0xff) * auArr_79[10] - (0xff < sz_2);
      sz_2 = auArr_79._12_2_;
      auArr_41[14] = (0 < sz_2) * (sz_2 < 0xff) * auArr_79[12] - (0xff < sz_2);
      sz_2 = auArr_79._14_2_;
      auArr_41[15] = (0 < sz_2) * (sz_2 < 0xff) * auArr_79[14] - (0xff < sz_2);
      auArr_78 = psraw(auArr_52,4);
      sz_2 = auArr_78._0_2_;
      sz_3 = auArr_78._2_2_;
      auArr_53[1] = (0 < sz_3) * (sz_3 < 0xff) * auArr_78[2] - (0xff < sz_3);
      auArr_53[0] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[0] - (0xff < sz_2);
      sz_2 = auArr_78._4_2_;
      auArr_53[2] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[4] - (0xff < sz_2);
      sz_2 = auArr_78._6_2_;
      auArr_53[3] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[6] - (0xff < sz_2);
      sz_2 = auArr_78._8_2_;
      auArr_53[4] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[8] - (0xff < sz_2);
      sz_2 = auArr_78._10_2_;
      auArr_53[5] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[10] - (0xff < sz_2);
      sz_2 = auArr_78._12_2_;
      auArr_53[6] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[12] - (0xff < sz_2);
      sz_2 = auArr_78._14_2_;
      auArr_53[7] = (0 < sz_2) * (sz_2 < 0xff) * auArr_78[14] - (0xff < sz_2);
      auArr_53[8] = (0 < sz_15) * (sz_15 < 0xff) * (char)sz_15 - (0xff < sz_15);
      auArr_53[9] = (0 < sz_16) * (sz_16 < 0xff) * (char)sz_16 - (0xff < sz_16);
      auArr_53[10] = (0 < sz_17) * (sz_17 < 0xff) * (char)sz_17 - (0xff < sz_17);
      auArr_53[11] = (0 < sz_18) * (sz_18 < 0xff) * (char)sz_18 - (0xff < sz_18);
      auArr_53[12] = (0 < sz_19) * (sz_19 < 0xff) * (char)sz_19 - (0xff < sz_19);
      auArr_53[13] = (0 < sz_20) * (sz_20 < 0xff) * (char)sz_20 - (0xff < sz_20);
      auArr_53[14] = (0 < sz_21) * (sz_21 < 0xff) * (char)sz_21 - (0xff < sz_21);
      auArr_53[15] = (0 < sz_22) * (sz_22 < 0xff) * (char)sz_22 - (0xff < sz_22);
      auArr_78 = pshufb(auArr_41,auArr_37);
      auArr_79 = pshufb(auArr_53,auArr_37);
      auArr_62._0_14_ = auArr_78._0_14_;
      auArr_62[14] = auArr_78[7];
      auArr_62[15] = auArr_79[7];
      auArr_61._14_2_ = auArr_62._14_2_;
      auArr_61._0_13_ = auArr_78._0_13_;
      auArr_61[13] = auArr_79[6];
      auArr_60._13_3_ = auArr_61._13_3_;
      auArr_60._0_12_ = auArr_78._0_12_;
      auArr_60[12] = auArr_78[6];
      auArr_59._12_4_ = auArr_60._12_4_;
      auArr_59._0_11_ = auArr_78._0_11_;
      auArr_59[11] = auArr_79[5];
      auArr_58._11_5_ = auArr_59._11_5_;
      auArr_58._0_10_ = auArr_78._0_10_;
      auArr_58[10] = auArr_78[5];
      auArr_57._10_6_ = auArr_58._10_6_;
      auArr_57._0_9_ = auArr_78._0_9_;
      auArr_57[9] = auArr_79[4];
      auArr_56._9_7_ = auArr_57._9_7_;
      auArr_56._0_8_ = auArr_78._0_8_;
      auArr_56[8] = auArr_78[4];
      auArr_55._8_8_ = auArr_56._8_8_;
      auArr_55[7] = auArr_79[3];
      auArr_55[6] = auArr_78[3];
      auArr_55[5] = auArr_79[2];
      auArr_55[4] = auArr_78[2];
      auArr_55[3] = auArr_79[1];
      auArr_55[2] = auArr_78[1];
      auArr_55[0] = auArr_78[0];
      auArr_55[1] = auArr_79[0];
      auArr_78 = pshufb(auArr_41,auArr_38);
      auArr_79 = pshufb(auArr_53,auArr_38);
      auArr_49._0_14_ = auArr_78._0_14_;
      auArr_49[14] = auArr_78[7];
      auArr_49[15] = auArr_79[7];
      auArr_48._14_2_ = auArr_49._14_2_;
      auArr_48._0_13_ = auArr_78._0_13_;
      auArr_48[13] = auArr_79[6];
      auArr_47._13_3_ = auArr_48._13_3_;
      auArr_47._0_12_ = auArr_78._0_12_;
      auArr_47[12] = auArr_78[6];
      auArr_46._12_4_ = auArr_47._12_4_;
      auArr_46._0_11_ = auArr_78._0_11_;
      auArr_46[11] = auArr_79[5];
      auArr_45._11_5_ = auArr_46._11_5_;
      auArr_45._0_10_ = auArr_78._0_10_;
      auArr_45[10] = auArr_78[5];
      auArr_44._10_6_ = auArr_45._10_6_;
      auArr_44._0_9_ = auArr_78._0_9_;
      auArr_44[9] = auArr_79[4];
      auArr_43._9_7_ = auArr_44._9_7_;
      auArr_43._0_8_ = auArr_78._0_8_;
      auArr_43[8] = auArr_78[4];
      auArr_42._8_8_ = auArr_43._8_8_;
      auArr_42[7] = auArr_79[3];
      auArr_42[6] = auArr_78[3];
      auArr_42[5] = auArr_79[2];
      auArr_42[4] = auArr_78[2];
      auArr_42[3] = auArr_79[1];
      auArr_42[2] = auArr_78[1];
      auArr_42[0] = auArr_78[0];
      auArr_42[1] = auArr_79[0];
      *(uint8_t (*)[16])(param_1 + uVal_29 * 4) = auArr_55;
      *(uint8_t (*)[16])(param_1 + 0x10 + uVal_29 * 4) = auArr_42;
      uVal_30 = uVal_29 + 8;
      uVal_35 = uVal_29 + 0xf;
      lVal_33 = lVal_33 + 0x20;
      uVal_29 = uVal_30;
    } while (uVal_35 < param_5);
    param_1 = param_1 + lVal_33;
  }
  if ((int)uVal_30 < (int)param_5) {
    uVal_30 = uVal_30 & 0xffffffff;
    pU64_28 = (uint8_t *)(param_1 + 3);
    do {
      iVal_32 = (uint)*(byte *)(param_2 + uVal_30) * 0x100000;
      iVal_31 = *(byte *)(param_4 + uVal_30) - 0x80;
      iVal_34 = iVal_31 * 0x166f00 + iVal_32 + 0x80000 >> 0x14;
      if (iVal_34 < 1) {
        iVal_34 = 0;
      }
      if (0xfe < iVal_34) {
        iVal_34 = 0xff;
      }
      iVal_36 = *(byte *)(param_3 + uVal_30) - 0x80;
      iVal_31 = (iVal_36 * -0x58200 & 0xffff0000U) + iVal_31 * -0xb6d00 + iVal_32 + 0x80000;
      if (iVal_31 >> 0x14 < 1) {
        iVal_31 = 0;
      }
      iVal_31 = iVal_31 >> 0x14;
      if (0xfe < iVal_31) {
        iVal_31 = 0xff;
      }
      iVal_36 = iVal_32 + iVal_36 * 0x1c5a00 + 0x80000 >> 0x14;
      iVal_32 = 0;
      if (0 < iVal_36) {
        iVal_32 = iVal_36;
      }
      if (0xfe < iVal_32) {
        iVal_32 = 0xff;
      }
      pU64_28[-3] = (char)iVal_34;
      pU64_28[-2] = (char)iVal_31;
      pU64_28[-1] = (char)iVal_32;
      *pU64_28 = 0xff;
      uVal_30 = uVal_30 + 1;
      pU64_28 = pU64_28 + param_6;
    } while (param_5 != uVal_30);
  }
  return;
}

// func_0x1800ec2f0
uint64_t func_0x1800ec2f0(int64_t *param_1)
{
  char *fnPtr_1;
  byte bFlag_2;
  int64_t lVal_3;
  byte *pU8_4;
  char ch_5;
  int iVal_6;
  uint64_t uVal_7;
  char *fnPtr_8;
  byte *pU8_9;
  
  uVal_7 = (uint64_t)*(byte *)(param_1 + 0x905);
  if (*(byte *)(param_1 + 0x905) == 0xff) {
    lVal_3 = *param_1;
    pU8_4 = *(byte **)(lVal_3 + 0xc0);
    if (pU8_4 < *(byte **)(lVal_3 + 200)) {
      *(byte **)(lVal_3 + 0xc0) = pU8_4 + 1;
      uVal_7 = CONCAT71((int7)((uint64_t)(pU8_4 + 1) >> 8),0xff);
      bFlag_2 = *pU8_4;
      while (bFlag_2 == 0xff) {
        while( true ) {
          lVal_3 = *param_1;
          pU8_4 = *(byte **)(lVal_3 + 0xc0);
          if (pU8_4 < *(byte **)(lVal_3 + 200)) break;
          if (*(int *)(lVal_3 + 0x30) == 0) {
            return 0;
          }
          pU8_4 = (byte *)(lVal_3 + 0x38);
          iVal_6 = (**(func_ptr_t *)(lVal_3 + 0x10))
                            (*(uint64_t *)(lVal_3 + 0x28),pU8_4,*(uint32_t *)(lVal_3 + 0x34));
          *(int *)(lVal_3 + 0xb8) =
               *(int *)(lVal_3 + 0xb8) + (*(int *)(lVal_3 + 0xc0) - *(int *)(lVal_3 + 0xd0));
          if (iVal_6 == 0) {
            *(uint32_t *)(lVal_3 + 0x30) = 0;
            pU8_9 = (byte *)(lVal_3 + 0x39);
            *(uint8_t *)(lVal_3 + 0x38) = 0;
            uVal_7 = 0;
          }
          else {
            pU8_9 = pU8_4 + iVal_6;
            uVal_7 = (uint64_t)*pU8_4;
          }
          *(byte **)(lVal_3 + 200) = pU8_9;
          *(int64_t *)(lVal_3 + 0xc0) = lVal_3 + 0x39;
          ch_5 = (char)uVal_7;
joined_r0x0001800ec3a1:
          if (ch_5 != -1) {
            return uVal_7;
          }
        }
        *(byte **)(lVal_3 + 0xc0) = pU8_4 + 1;
        bFlag_2 = *pU8_4;
        uVal_7 = (uint64_t)bFlag_2;
      }
    }
    else {
      if (*(int *)(lVal_3 + 0x30) != 0) {
        fnPtr_1 = (char *)(lVal_3 + 0x38);
        iVal_6 = (**(func_ptr_t *)(lVal_3 + 0x10))
                          (*(uint64_t *)(lVal_3 + 0x28),fnPtr_1,*(uint32_t *)(lVal_3 + 0x34));
        *(int *)(lVal_3 + 0xb8) =
             *(int *)(lVal_3 + 0xb8) + (*(int *)(lVal_3 + 0xc0) - *(int *)(lVal_3 + 0xd0));
        if (iVal_6 == 0) {
          *(uint32_t *)(lVal_3 + 0x30) = 0;
          fnPtr_8 = (char *)(lVal_3 + 0x39);
          *(uint8_t *)(lVal_3 + 0x38) = 0;
        }
        else {
          fnPtr_8 = fnPtr_1 + iVal_6;
        }
        *(char **)(lVal_3 + 200) = fnPtr_8;
        *(int64_t *)(lVal_3 + 0xc0) = lVal_3 + 0x39;
        uVal_7 = CONCAT71((int7)((uint64_t)(lVal_3 + 0x39) >> 8),0xff);
        ch_5 = *fnPtr_1;
        goto joined_r0x0001800ec3a1;
      }
      uVal_7 = 0xff;
    }
  }
  else {
    *(uint8_t *)(param_1 + 0x905) = 0xff;
  }
  return uVal_7;
}

// func_0x1800ec450
uint64_t func_0x1800ec450(int64_t *param_1,uint param_2)
{
  char **ptr2_Char_1;
  ushort uVal_2;
  uint8_t *pU64_3;
  func_ptr_t fnPtr_4;
  byte bFlag_5;
  uint8_t uVal_6;
  sbyte sz_7;
  char ch_8;
  uint16_t uVal_9;
  uint uVal_10;
  int iVal_11;
  uint32_t uVal_12;
  byte *pU8_13;
  uint64_t uVal_14;
  byte *pU8_15;
  uint8_t *pU64_16;
  char *fnPtr_17;
  char *fnPtr_18;
  int64_t lVal_19;
  int iVal_20;
  char ch_21;
  uint uVal_22;
  int64_t lVal_23;
  char ch_24;
  uint uVal_25;
  int64_t *pLong_26;
  byte bFlag_27;
  int64_t lVal_28;
  byte bFlag_29;
  char ch_30;
  char ch_31;
  uint64_t uVal_32;
  bool bFlag_33;
  uint8_t auStack_b8 [40];
  uint local_90;
  uint local_8c;
  uint local_88 [16];
  uint64_t local_48;
  
  local_48 = DAT_18083cf40 ^ (uint64_t)auStack_b8;
  if ((int)param_2 < 0xdd) {
    if (param_2 == 0xc4) {
      uVal_10 = func_0x1800e5980(*param_1);
      uVal_22 = uVal_10 - 2;
      if (2 < uVal_10) {
        do {
          lVal_28 = *param_1;
          pU8_13 = *(byte **)(lVal_28 + 0xc0);
          if (pU8_13 < *(byte **)(lVal_28 + 200)) {
            *(byte **)(lVal_28 + 0xc0) = pU8_13 + 1;
            uVal_10 = (uint)*pU8_13;
          }
          else if (*(int *)(lVal_28 + 0x30) == 0) {
            uVal_10 = 0;
          }
          else {
            pU8_13 = (byte *)(lVal_28 + 0x38);
            iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))(*(uint64_t *)(lVal_28 + 0x28),pU8_13);
            *(int *)(lVal_28 + 0xb8) =
                 *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
            if (iVal_20 == 0) {
              *(uint32_t *)(lVal_28 + 0x30) = 0;
              pU8_15 = (byte *)(lVal_28 + 0x39);
              *(uint8_t *)(lVal_28 + 0x38) = 0;
              uVal_10 = 0;
            }
            else {
              pU8_15 = pU8_13 + iVal_20;
              uVal_10 = (uint)*pU8_13;
            }
            *(byte **)(lVal_28 + 200) = pU8_15;
            *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
          }
          bFlag_27 = (byte)uVal_10;
          if ((0x1f < bFlag_27) || (bFlag_29 = bFlag_27 & 0xf, 3 < bFlag_29)) {
LAB_1800ecb0d:
            lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            fnPtr_17 = "bad DHT header";
            goto LAB_1800ecba5;
          }
          uVal_25 = 0;
          lVal_28 = 0;
          do {
            lVal_19 = *param_1;
            pU8_13 = *(byte **)(lVal_19 + 0xc0);
            if (pU8_13 < *(byte **)(lVal_19 + 200)) {
              *(byte **)(lVal_19 + 0xc0) = pU8_13 + 1;
              bFlag_5 = *pU8_13;
            }
            else if (*(int *)(lVal_19 + 0x30) == 0) {
              bFlag_5 = 0;
            }
            else {
              pU8_13 = (byte *)(lVal_19 + 0x38);
              iVal_20 = (**(func_ptr_t *)(lVal_19 + 0x10))(*(uint64_t *)(lVal_19 + 0x28),pU8_13);
              *(int *)(lVal_19 + 0xb8) =
                   *(int *)(lVal_19 + 0xb8) + (*(int *)(lVal_19 + 0xc0) - *(int *)(lVal_19 + 0xd0));
              if (iVal_20 == 0) {
                *(uint32_t *)(lVal_19 + 0x30) = 0;
                pU8_15 = (byte *)(lVal_19 + 0x39);
                *(uint8_t *)(lVal_19 + 0x38) = 0;
                bFlag_5 = 0;
              }
              else {
                pU8_15 = pU8_13 + iVal_20;
                bFlag_5 = *pU8_13;
              }
              *(byte **)(lVal_19 + 200) = pU8_15;
              *(int64_t *)(lVal_19 + 0xc0) = lVal_19 + 0x39;
            }
            local_88[lVal_28] = (uint)bFlag_5;
            uVal_25 = uVal_25 + bFlag_5;
            lVal_28 = lVal_28 + 1;
          } while (lVal_28 != 0x10);
          if (0x100 < uVal_25) goto LAB_1800ecb0d;
          uVal_14 = (uint64_t)bFlag_29;
          if (bFlag_27 < 0x10) {
            iVal_20 = func_0x1800edc80(param_1 + uVal_14 * 0xd2 + 1,local_88);
            lVal_28 = 8;
          }
          else {
            iVal_20 = func_0x1800edc80(param_1 + uVal_14 * 0xd2 + 0x349,local_88);
            lVal_28 = 0x1a48;
          }
          if (iVal_20 == 0) goto LAB_1800ecbac;
          local_90 = uVal_22;
          local_8c = uVal_10;
          if (uVal_25 != 0) {
            uVal_32 = 0;
            do {
              lVal_19 = *param_1;
              pU64_3 = *(uint8_t **)(lVal_19 + 0xc0);
              if (pU64_3 < *(uint8_t **)(lVal_19 + 200)) {
                *(uint8_t **)(lVal_19 + 0xc0) = pU64_3 + 1;
                uVal_6 = *pU64_3;
              }
              else if (*(int *)(lVal_19 + 0x30) == 0) {
                uVal_6 = 0;
              }
              else {
                pU64_3 = (uint8_t *)(lVal_19 + 0x38);
                iVal_20 = (**(func_ptr_t *)(lVal_19 + 0x10))(*(uint64_t *)(lVal_19 + 0x28),pU64_3);
                *(int *)(lVal_19 + 0xb8) =
                     *(int *)(lVal_19 + 0xb8) + (*(int *)(lVal_19 + 0xc0) - *(int *)(lVal_19 + 0xd0));
                if (iVal_20 == 0) {
                  *(uint32_t *)(lVal_19 + 0x30) = 0;
                  pU64_16 = (uint8_t *)(lVal_19 + 0x39);
                  *(uint8_t *)(lVal_19 + 0x38) = 0;
                  uVal_6 = 0;
                }
                else {
                  pU64_16 = pU64_3 + iVal_20;
                  uVal_6 = *pU64_3;
                }
                *(uint8_t **)(lVal_19 + 200) = pU64_16;
                *(int64_t *)(lVal_19 + 0xc0) = lVal_19 + 0x39;
              }
              *(uint8_t *)((int64_t)param_1 + uVal_32 + uVal_14 * 0x690 + lVal_28 + 0x400) = uVal_6;
              uVal_32 = uVal_32 + 1;
            } while (uVal_25 != uVal_32);
          }
          if (0xf < (byte)local_8c) {
            lVal_19 = uVal_14 * 0x690;
            lVal_28 = (uint64_t)bFlag_29 * 0x400 + 0x3688;
            lVal_23 = 0;
            do {
              uVal_14 = (uint64_t)*(byte *)((int64_t)param_1 + lVal_23 + lVal_19 + 0x1a48);
              *(uint16_t *)((int64_t)param_1 + lVal_23 * 2 + lVal_28) = 0;
              if (uVal_14 != 0xff) {
                bFlag_27 = *(byte *)((int64_t)param_1 + uVal_14 + lVal_19 + 0x1e48);
                if ((bFlag_27 & 0xf) != 0) {
                  bFlag_29 = *(byte *)((int64_t)param_1 + uVal_14 + lVal_19 + 0x1f48);
                  uVal_2 = (bFlag_27 & 0xf) + (ushort)bFlag_29;
                  if (uVal_2 < 10) {
                    uVal_10 = (int)lVal_23 << (bFlag_29 & 0x1f);
                    sz_7 = (sbyte)(bFlag_27 & 0xf);
                    uVal_22 = -1 << sz_7 | 1;
                    if ((uVal_10 & 0x100) != 0) {
                      uVal_22 = 0;
                    }
                    iVal_20 = uVal_22 + ((uVal_10 & 0x1ff) >> (9U - sz_7 & 0x1f));
                    if ((char)iVal_20 == iVal_20) {
                      *(ushort *)((int64_t)param_1 + lVal_23 * 2 + lVal_28) =
                           (short)iVal_20 * 0x100 | bFlag_27 & 0xfff0 | uVal_2;
                    }
                  }
                }
              }
              lVal_23 = lVal_23 + 1;
            } while (lVal_23 != 0x200);
          }
          uVal_22 = (local_90 - 0x11) - uVal_25;
        } while (uVal_22 != 0 && (int)uVal_25 <= (int)(local_90 - 0x11));
      }
      bFlag_33 = uVal_22 == 0;
      goto LAB_1800ecbae;
    }
    if (param_2 == 0xdb) {
      uVal_10 = func_0x1800e5980(*param_1);
      iVal_20 = uVal_10 - 2;
      if (2 < uVal_10) {
        do {
          while( true ) {
            lVal_28 = *param_1;
            pU8_13 = *(byte **)(lVal_28 + 0xc0);
            if (pU8_13 < *(byte **)(lVal_28 + 200)) break;
            pLong_26 = param_1 + 0x691;
            if (*(int *)(lVal_28 + 0x30) != 0) {
              pU8_13 = (byte *)(lVal_28 + 0x38);
              iVal_11 = (**(func_ptr_t *)(lVal_28 + 0x10))
                                 (*(uint64_t *)(lVal_28 + 0x28),pU8_13,
                                  *(uint32_t *)(lVal_28 + 0x34));
              *(int *)(lVal_28 + 0xb8) =
                   *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
              if (iVal_11 == 0) {
                *(uint32_t *)(lVal_28 + 0x30) = 0;
                pU8_15 = (byte *)(lVal_28 + 0x39);
                *(uint8_t *)(lVal_28 + 0x38) = 0;
              }
              else {
                pU8_15 = pU8_13 + iVal_11;
              }
              *(byte **)(lVal_28 + 200) = pU8_15;
              *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
              bFlag_27 = *pU8_13;
              if (bFlag_27 < 0x20) goto LAB_1800ec56f;
LAB_1800ecb6f:
              lVal_28 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              fnPtr_17 = "bad DQT type";
              goto LAB_1800ecba5;
            }
LAB_1800ec58f:
            lVal_28 = 0;
            do {
              lVal_19 = *param_1;
              pU8_13 = *(byte **)(lVal_19 + 0xc0);
              if (pU8_13 < *(byte **)(lVal_19 + 200)) {
                *(byte **)(lVal_19 + 0xc0) = pU8_13 + 1;
                bFlag_27 = *pU8_13;
              }
              else if (*(int *)(lVal_19 + 0x30) == 0) {
                bFlag_27 = 0;
              }
              else {
                pU8_13 = (byte *)(lVal_19 + 0x38);
                iVal_11 = (**(func_ptr_t *)(lVal_19 + 0x10))
                                   (*(uint64_t *)(lVal_19 + 0x28),pU8_13,
                                    *(uint32_t *)(lVal_19 + 0x34));
                *(int *)(lVal_19 + 0xb8) =
                     *(int *)(lVal_19 + 0xb8) + (*(int *)(lVal_19 + 0xc0) - *(int *)(lVal_19 + 0xd0));
                if (iVal_11 == 0) {
                  *(uint32_t *)(lVal_19 + 0x30) = 0;
                  pU8_15 = (byte *)(lVal_19 + 0x39);
                  *(uint8_t *)(lVal_19 + 0x38) = 0;
                  bFlag_27 = 0;
                }
                else {
                  pU8_15 = pU8_13 + iVal_11;
                  bFlag_27 = *pU8_13;
                }
                *(byte **)(lVal_19 + 200) = pU8_15;
                *(int64_t *)(lVal_19 + 0xc0) = lVal_19 + 0x39;
              }
              *(ushort *)((int64_t)pLong_26 + (uint64_t)(byte)(&DAT_1806b3b70)[lVal_28] * 2) =
                   (ushort)bFlag_27;
              lVal_28 = lVal_28 + 1;
            } while (lVal_28 != 0x40);
            bFlag_33 = SCARRY4(iVal_20,-0x41);
            iVal_20 = iVal_20 + -0x41;
            if (iVal_20 == 0 || bFlag_33 != iVal_20 < 0) goto LAB_1800ec688;
          }
          *(byte **)(lVal_28 + 0xc0) = pU8_13 + 1;
          bFlag_27 = *pU8_13;
          if (0x1f < bFlag_27) goto LAB_1800ecb6f;
LAB_1800ec56f:
          if (3 < (byte)(bFlag_27 & 0xf)) {
            lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            fnPtr_17 = "bad DQT table";
            goto LAB_1800ecba5;
          }
          pLong_26 = (int64_t *)((uint64_t)((bFlag_27 & 0xf) << 7) + (int64_t)(param_1 + 0x691));
          if (bFlag_27 < 0x10) goto LAB_1800ec58f;
          lVal_28 = 0;
          do {
            uVal_9 = func_0x1800e5980(*param_1);
            *(uint16_t *)((int64_t)pLong_26 + (uint64_t)(byte)(&DAT_1806b3b70)[lVal_28] * 2) =
                 uVal_9;
            lVal_28 = lVal_28 + 1;
          } while (lVal_28 != 0x40);
          bFlag_33 = SCARRY4(iVal_20,-0x81);
          iVal_20 = iVal_20 + -0x81;
        } while (iVal_20 != 0 && bFlag_33 == iVal_20 < 0);
      }
LAB_1800ec688:
      bFlag_33 = iVal_20 == 0;
      goto LAB_1800ecbae;
    }
LAB_1800ec6c5:
    if ((param_2 != 0xfe) && ((param_2 & 0xf0) != 0xe0)) {
      lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_17 = "unknown marker";
      goto LAB_1800ecba5;
    }
    uVal_10 = func_0x1800e5980(*param_1);
    if (1 < uVal_10) {
      if (uVal_10 < 7 || param_2 != 0xe0) {
        if (uVal_10 < 0xe || param_2 != 0xee) {
          uVal_22 = uVal_10 - 2;
          goto LAB_1800ed320;
        }
        lVal_28 = *param_1;
        pU8_13 = *(byte **)(lVal_28 + 0xc0);
        if (pU8_13 < *(byte **)(lVal_28 + 200)) {
          *(byte **)(lVal_28 + 0xc0) = pU8_13 + 1;
          local_90 = (uint)*pU8_13;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          local_90 = 0;
        }
        else {
          pU8_13 = (byte *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),pU8_13,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            pU8_15 = (byte *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            local_90 = 0;
          }
          else {
            pU8_15 = pU8_13 + iVal_20;
            local_90 = (uint)*pU8_13;
          }
          *(byte **)(lVal_28 + 200) = pU8_15;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_21 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_21 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_21 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_21 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_30 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_30 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_30 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_30 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_31 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_31 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_31 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_31 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_24 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_24 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_24 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_24 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_8 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_8 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_8 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_8 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        uVal_22 = uVal_10 - 8;
        lVal_28 = *param_1;
        if (((((ch_8 == '\0') && (ch_24 == 'e')) && (ch_31 == 'b')) &&
            ((ch_30 == 'o' && (ch_21 == 'd')))) && ((char)local_90 == 'A')) {
          uVal_14 = *(uint64_t *)(lVal_28 + 0xc0);
          if (uVal_14 < *(uint64_t *)(lVal_28 + 200)) {
LAB_1800ed2c3:
            *(uint64_t *)(lVal_28 + 0xc0) = uVal_14 + 1;
          }
          else if (*(int *)(lVal_28 + 0x30) != 0) {
            func_0x1800e2360(lVal_28);
            uVal_14 = *(uint64_t *)(lVal_28 + 0xc0);
            goto LAB_1800ed2c3;
          }
          func_0x1800e5980(*param_1);
          func_0x1800e5980(*param_1);
          lVal_28 = *param_1;
          pU8_13 = *(byte **)(lVal_28 + 0xc0);
          if (pU8_13 < *(byte **)(lVal_28 + 200)) {
LAB_1800ed309:
            *(byte **)(lVal_28 + 0xc0) = pU8_13 + 1;
            uVal_22 = (uint)*pU8_13;
          }
          else {
            if (*(int *)(lVal_28 + 0x30) != 0) {
              func_0x1800e2360(lVal_28);
              pU8_13 = *(byte **)(lVal_28 + 0xc0);
              goto LAB_1800ed309;
            }
            uVal_22 = 0;
          }
          *(uint *)((int64_t)param_1 + 0x484c) = uVal_22;
          uVal_22 = uVal_10 - 0xe;
          goto LAB_1800ed320;
        }
        if (*(int64_t *)(lVal_28 + 0x10) != 0) goto LAB_1800ed32e;
LAB_1800ed367:
        lVal_19 = *(int64_t *)(lVal_28 + 0xc0);
      }
      else {
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_21 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_21 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_21 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_21 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_30 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_30 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_30 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_30 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_31 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_31 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_31 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_31 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_24 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_24 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_24 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_24 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        lVal_28 = *param_1;
        fnPtr_17 = *(char **)(lVal_28 + 0xc0);
        if (fnPtr_17 < *(char **)(lVal_28 + 200)) {
          *(char **)(lVal_28 + 0xc0) = fnPtr_17 + 1;
          ch_8 = *fnPtr_17;
        }
        else if (*(int *)(lVal_28 + 0x30) == 0) {
          ch_8 = '\0';
        }
        else {
          fnPtr_17 = (char *)(lVal_28 + 0x38);
          iVal_20 = (**(func_ptr_t *)(lVal_28 + 0x10))
                             (*(uint64_t *)(lVal_28 + 0x28),fnPtr_17,*(uint32_t *)(lVal_28 + 0x34))
          ;
          *(int *)(lVal_28 + 0xb8) =
               *(int *)(lVal_28 + 0xb8) + (*(int *)(lVal_28 + 0xc0) - *(int *)(lVal_28 + 0xd0));
          if (iVal_20 == 0) {
            *(uint32_t *)(lVal_28 + 0x30) = 0;
            fnPtr_18 = (char *)(lVal_28 + 0x39);
            *(uint8_t *)(lVal_28 + 0x38) = 0;
            ch_8 = '\0';
          }
          else {
            fnPtr_18 = fnPtr_17 + iVal_20;
            ch_8 = *fnPtr_17;
          }
          *(char **)(lVal_28 + 200) = fnPtr_18;
          *(int64_t *)(lVal_28 + 0xc0) = lVal_28 + 0x39;
        }
        uVal_22 = uVal_10 - 7;
        if (((ch_8 == '\0') && (ch_24 == 'F')) &&
           ((ch_31 == 'I' && ((ch_30 == 'F' && (ch_21 == 'J')))))) {
          *(uint32_t *)(param_1 + 0x909) = 1;
        }
LAB_1800ed320:
        if (uVal_22 == 0) {
LAB_1800ed357:
          bFlag_33 = true;
          goto LAB_1800ecbae;
        }
        lVal_28 = *param_1;
        if (*(int64_t *)(lVal_28 + 0x10) == 0) goto LAB_1800ed367;
LAB_1800ed32e:
        lVal_19 = *(int64_t *)(lVal_28 + 0xc0);
        if ((int)*(uint64_t *)(lVal_28 + 200) - (int)lVal_19 < (int)uVal_22) {
          *(uint64_t *)(lVal_28 + 0xc0) = *(uint64_t *)(lVal_28 + 200);
          (**(func_ptr_t *)(lVal_28 + 0x18))(*(uint64_t *)(lVal_28 + 0x28));
          goto LAB_1800ed357;
        }
      }
      *(uint64_t *)(lVal_28 + 0xc0) = (uint64_t)uVal_22 + lVal_19;
      bFlag_33 = true;
      goto LAB_1800ecbae;
    }
    ptr2_Char_1 = (char **)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x3010)
    ;
    if (param_2 == 0xfe) {
      *ptr2_Char_1 = "bad COM len";
    }
    else {
      *ptr2_Char_1 = "bad APP len";
    }
  }
  else {
    if (param_2 == 0xdd) {
      iVal_20 = func_0x1800e5980(*param_1);
      if (iVal_20 == 4) {
        uVal_12 = func_0x1800e5980(*param_1);
        *(uint32_t *)(param_1 + 0x90d) = uVal_12;
        bFlag_33 = true;
        goto LAB_1800ecbae;
      }
      lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_17 = "bad DRI len";
    }
    else {
      if (param_2 != 0xff) goto LAB_1800ec6c5;
      lVal_28 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_17 = "expected marker";
    }
LAB_1800ecba5:
    *(char **)(lVal_28 + 0x3010) = fnPtr_17;
  }
LAB_1800ecbac:
  bFlag_33 = false;
LAB_1800ecbae:
  if (DAT_18083cf40 != (local_48 ^ (uint64_t)auStack_b8)) {
    func_0x180673080(local_48 ^ (uint64_t)auStack_b8);
    fnPtr_4 = (func_ptr_t )swi(3);
    uVal_14 = (*fnPtr_4)();
    return uVal_14;
  }
  return (uint64_t)bFlag_33;
}

// func_0x1800ed3a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t func_0x1800ed3a0(int **param_1,int param_2)
{
  char ch_1;
  int iVal_2;
  int iVal_3;
  int iVal_4;
  int iVal_5;
  int iVal_6;
  int *pInt_7;
  byte bFlag_8;
  uint uVal_9;
  int iVal_10;
  uint uVal_11;
  byte *pU8_12;
  byte *pU8_13;
  int *pInt_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  char *fnPtr_17;
  uint64_t uVal_18;
  int **ptr2_Int_19;
  int64_t lVal_20;
  uint *pU64_21;
  int *pInt_22;
  int iVal_23;
  int iVal_24;
  uint64_t uVal_25;
  uint uVal_26;
  uint uVal_27;
  uint uVal_28;
  uint uVal_29;
  uint uVal_30;
  uint uVal_31;
  uint uVal_32;
  uint uVal_33;
  uint uVal_34;
  uint uVal_35;
  uint uVal_36;
  uint uVal_37;
  uint uVal_38;
  uint uVal_39;
  uint uVal_40;
  
  pInt_7 = *param_1;
  uVal_9 = func_0x1800e5980(pInt_7);
  if (uVal_9 < 0xb) {
LAB_1800ed3ca:
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    fnPtr_17 = "bad SOF len";
    goto LAB_1800ed58c;
  }
  fnPtr_17 = *(char **)(pInt_7 + 0x30);
  if (fnPtr_17 < *(char **)(pInt_7 + 0x32)) {
    *(char **)(pInt_7 + 0x30) = fnPtr_17 + 1;
    ch_1 = *fnPtr_17;
joined_r0x0001800ed471:
    if (ch_1 == '\b') {
      iVal_10 = func_0x1800e5980(pInt_7);
      pInt_7[1] = iVal_10;
      if (iVal_10 == 0) {
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        fnPtr_17 = "no header height";
        goto LAB_1800ed58c;
      }
      iVal_10 = func_0x1800e5980(pInt_7);
      *pInt_7 = iVal_10;
      if (iVal_10 == 0) {
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        fnPtr_17 = "0 width";
        goto LAB_1800ed58c;
      }
      if (0x1000000 < (uint)pInt_7[1]) {
LAB_1800ed49b:
        lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        fnPtr_17 = "too large";
        goto LAB_1800ed58c;
      }
      pU8_12 = *(byte **)(pInt_7 + 0x30);
      if (pU8_12 < *(byte **)(pInt_7 + 0x32)) {
LAB_1800ed539:
        *(byte **)(pInt_7 + 0x30) = pU8_12 + 1;
        bFlag_8 = *pU8_12;
        if ((bFlag_8 < 5) && ((0x1aU >> (bFlag_8 & 0x1f) & 1) != 0)) {
          uVal_37 = (uint)bFlag_8;
          pInt_7[2] = uVal_37;
          if ((byte)(bFlag_8 - 1) < 3) {
            uVal_25 = 0;
LAB_1800ed620:
            lVal_20 = 0;
            do {
              *(uint64_t *)((int64_t)param_1 + lVal_20 + uVal_25 * 0x60 + 0x46d0) = 0;
              *(uint64_t *)((int64_t)param_1 + lVal_20 + uVal_25 * 0x60 + 0x46e8) = 0;
              lVal_20 = lVal_20 + 0x60;
            } while ((uint64_t)((uVal_37 & 3) << 5) * 3 != lVal_20);
          }
          else {
            ptr2_Int_19 = param_1 + 0x901;
            uVal_25 = 0;
            do {
              ptr2_Int_19[-0x27] = (int *)0x0;
              ptr2_Int_19[-0x24] = (int *)0x0;
              ptr2_Int_19[-0x1b] = (int *)0x0;
              ptr2_Int_19[-0x18] = (int *)0x0;
              ptr2_Int_19[-0xf] = (int *)0x0;
              ptr2_Int_19[-0xc] = (int *)0x0;
              ptr2_Int_19[-3] = (int *)0x0;
              *ptr2_Int_19 = (int *)0x0;
              uVal_25 = uVal_25 + 4;
              ptr2_Int_19 = ptr2_Int_19 + 0x30;
            } while ((uVal_37 & 0x7c) != uVal_25);
            if ((bFlag_8 & 3) != 0) goto LAB_1800ed620;
          }
          if (uVal_9 != pInt_7[2] * 3 + 8U) goto LAB_1800ed3ca;
          *(uint32_t *)(param_1 + 0x90a) = 0;
          uVal_25 = (uint64_t)(uint)pInt_7[2];
          if (0 < pInt_7[2]) {
            pInt_22 = pInt_7 + 0xe;
            pU8_12 = (byte *)((int64_t)pInt_7 + 0x39);
            pU64_21 = (uint *)((int64_t)param_1 + 0x46ac);
            lVal_20 = 0;
            do {
              pU8_13 = *(byte **)(pInt_7 + 0x30);
              if (pU8_13 < *(byte **)(pInt_7 + 0x32)) {
                *(byte **)(pInt_7 + 0x30) = pU8_13 + 1;
                bFlag_8 = *pU8_13;
              }
              else if (pInt_7[0xc] == 0) {
                bFlag_8 = 0;
              }
              else {
                iVal_10 = (**(func_ptr_t *)(pInt_7 + 4))(*(uint64_t *)(pInt_7 + 10),pInt_22,pInt_7[0xd])
                ;
                pInt_7[0x2e] = pInt_7[0x2e] + (pInt_7[0x30] - pInt_7[0x34]);
                if (iVal_10 == 0) {
                  pInt_7[0xc] = 0;
                  *(uint8_t *)(pInt_7 + 0xe) = 0;
                  bFlag_8 = 0;
                  pU8_13 = pU8_12;
                }
                else {
                  bFlag_8 = *(byte *)pInt_22;
                  pU8_13 = (byte *)((int64_t)iVal_10 + (int64_t)pInt_22);
                }
                *(byte **)(pInt_7 + 0x32) = pU8_13;
                *(byte **)(pInt_7 + 0x30) = pU8_12;
              }
              pU64_21[-3] = (uint)bFlag_8;
              if ((pInt_7[2] == 3) && (bFlag_8 == (&DAT_1806b3bbf)[lVal_20])) {
                *(int *)(param_1 + 0x90a) = *(int *)(param_1 + 0x90a) + 1;
              }
              pInt_14 = *(int **)(pInt_7 + 0x30);
              if (pInt_14 < *(int **)(pInt_7 + 0x32)) {
                pU8_13 = (byte *)((int64_t)pInt_14 + 1);
              }
              else {
                if (pInt_7[0xc] == 0) {
                  pU64_21[-2] = 0;
                  goto LAB_1800ed8da;
                }
                iVal_10 = (**(func_ptr_t *)(pInt_7 + 4))(*(uint64_t *)(pInt_7 + 10),pInt_22,pInt_7[0xd])
                ;
                pInt_7[0x2e] = pInt_7[0x2e] + (pInt_7[0x30] - pInt_7[0x34]);
                if (iVal_10 == 0) {
                  pInt_7[0xc] = 0;
                  *(uint8_t *)(pInt_7 + 0xe) = 0;
                  pU8_13 = pU8_12;
                }
                else {
                  pU8_13 = (byte *)((int64_t)iVal_10 + (int64_t)pInt_22);
                }
                *(byte **)(pInt_7 + 0x32) = pU8_13;
                pInt_14 = pInt_22;
                pU8_13 = pU8_12;
              }
              *(byte **)(pInt_7 + 0x30) = pU8_13;
              bFlag_8 = *(byte *)pInt_14;
              pU64_21[-2] = (uint)(bFlag_8 >> 4);
              if ((0x4f < bFlag_8) || (bFlag_8 >> 4 == 0)) goto LAB_1800ed8da;
              pU64_21[-1] = bFlag_8 & 0xf;
              if ((bFlag_8 & 0xf) - 5 < 0xfffffffc) goto LAB_1800edc1c;
              pInt_14 = *(int **)(pInt_7 + 0x30);
              if (pInt_14 < *(int **)(pInt_7 + 0x32)) {
                pU8_13 = (byte *)((int64_t)pInt_14 + 1);
LAB_1800ed837:
                *(byte **)(pInt_7 + 0x30) = pU8_13;
                bFlag_8 = *(byte *)pInt_14;
                *pU64_21 = (uint)bFlag_8;
                if (3 < bFlag_8) {
                  lVal_20 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  fnPtr_17 = "bad TQ";
                  goto LAB_1800ed58c;
                }
              }
              else {
                if (pInt_7[0xc] != 0) {
                  iVal_10 = (**(func_ptr_t *)(pInt_7 + 4))
                                     (*(uint64_t *)(pInt_7 + 10),pInt_22,pInt_7[0xd]);
                  pInt_7[0x2e] = pInt_7[0x2e] + (pInt_7[0x30] - pInt_7[0x34]);
                  if (iVal_10 == 0) {
                    pInt_7[0xc] = 0;
                    *(uint8_t *)(pInt_7 + 0xe) = 0;
                    pU8_13 = pU8_12;
                  }
                  else {
                    pU8_13 = (byte *)((int64_t)iVal_10 + (int64_t)pInt_22);
                  }
                  *(byte **)(pInt_7 + 0x32) = pU8_13;
                  pInt_14 = pInt_22;
                  pU8_13 = pU8_12;
                  goto LAB_1800ed837;
                }
                *pU64_21 = 0;
              }
              lVal_20 = lVal_20 + 1;
              uVal_25 = (uint64_t)pInt_7[2];
              pU64_21 = pU64_21 + 0x18;
            } while (lVal_20 < (int64_t)uVal_25);
          }
          if (param_2 != 0) {
            return 1;
          }
          uVal_9 = (uint)uVal_25;
          iVal_10 = func_0x1800e8320(*pInt_7,pInt_7[1],uVal_25 & 0xffffffff,0);
          if (iVal_10 == 0) goto LAB_1800ed49b;
          uVal_37 = 1;
          uVal_26 = 1;
          if ((int)uVal_9 < 1) goto LAB_1800edaa8;
          uVal_18 = uVal_25 & 0xffffffff;
          if (uVal_9 < 8) {
            uVal_37 = 1;
            uVal_15 = 0;
            uVal_26 = 1;
LAB_1800eda45:
            ptr2_Int_19 = param_1 + uVal_15 * 0xc + 0x8d5;
            lVal_20 = uVal_18 - uVal_15;
            do {
              if ((int)uVal_26 < (int)*(uint *)((int64_t)ptr2_Int_19 + -4)) {
                uVal_26 = *(uint *)((int64_t)ptr2_Int_19 + -4);
              }
              if ((int)uVal_37 < (int)*(uint *)ptr2_Int_19) {
                uVal_37 = *(uint *)ptr2_Int_19;
              }
              ptr2_Int_19 = ptr2_Int_19 + 0xc;
              lVal_20 = lVal_20 + -1;
            } while (lVal_20 != 0);
          }
          else {
            uVal_15 = (uint64_t)(uVal_9 & 0x7ffffff8);
            lVal_20 = 0;
            uVal_26 = _DAT_1806b2c10;
            uVal_11 = _UNK_1806b2c14;
            uVal_27 = _UNK_1806b2c18;
            uVal_28 = _UNK_1806b2c1c;
            uVal_37 = _DAT_1806b2c10;
            uVal_38 = _UNK_1806b2c14;
            uVal_39 = _UNK_1806b2c18;
            uVal_40 = _UNK_1806b2c1c;
            uVal_33 = _DAT_1806b2c10;
            uVal_34 = _UNK_1806b2c14;
            uVal_35 = _UNK_1806b2c18;
            uVal_36 = _UNK_1806b2c1c;
            uVal_29 = _DAT_1806b2c10;
            uVal_30 = _UNK_1806b2c14;
            uVal_31 = _UNK_1806b2c18;
            uVal_32 = _UNK_1806b2c1c;
            do {
              iVal_10 = *(int *)((int64_t)param_1 + lVal_20 + 0x46a4);
              iVal_2 = *(int *)((int64_t)param_1 + lVal_20 + 0x4704);
              iVal_23 = *(int *)((int64_t)param_1 + lVal_20 + 0x4764);
              iVal_24 = *(int *)((int64_t)param_1 + lVal_20 + 0x47c4);
              iVal_3 = *(int *)((int64_t)param_1 + lVal_20 + 0x4824);
              iVal_4 = *(int *)((int64_t)param_1 + lVal_20 + 0x4884);
              iVal_5 = *(int *)((int64_t)param_1 + lVal_20 + 0x48e4);
              iVal_6 = *(int *)((int64_t)param_1 + lVal_20 + 0x4944);
              uVal_26 = (uint)((int)uVal_26 < iVal_10) * iVal_10 | ((int)uVal_26 >= iVal_10) * uVal_26;
              uVal_11 = (uint)((int)uVal_11 < iVal_2) * iVal_2 | ((int)uVal_11 >= iVal_2) * uVal_11;
              uVal_27 = (uint)((int)uVal_27 < iVal_23) * iVal_23 | ((int)uVal_27 >= iVal_23) * uVal_27;
              uVal_28 = (uint)((int)uVal_28 < iVal_24) * iVal_24 | ((int)uVal_28 >= iVal_24) * uVal_28;
              iVal_10 = *(int *)((int64_t)param_1 + lVal_20 + 0x46a8);
              iVal_2 = *(int *)((int64_t)param_1 + lVal_20 + 0x4708);
              iVal_23 = *(int *)((int64_t)param_1 + lVal_20 + 0x4768);
              iVal_24 = *(int *)((int64_t)param_1 + lVal_20 + 0x47c8);
              uVal_33 = (uint)((int)uVal_33 < iVal_3) * iVal_3 | ((int)uVal_33 >= iVal_3) * uVal_33;
              uVal_34 = (uint)((int)uVal_34 < iVal_4) * iVal_4 | ((int)uVal_34 >= iVal_4) * uVal_34;
              uVal_35 = (uint)((int)uVal_35 < iVal_5) * iVal_5 | ((int)uVal_35 >= iVal_5) * uVal_35;
              uVal_36 = (uint)((int)uVal_36 < iVal_6) * iVal_6 | ((int)uVal_36 >= iVal_6) * uVal_36;
              iVal_3 = *(int *)((int64_t)param_1 + lVal_20 + 0x4828);
              iVal_4 = *(int *)((int64_t)param_1 + lVal_20 + 0x4888);
              iVal_5 = *(int *)((int64_t)param_1 + lVal_20 + 0x48e8);
              iVal_6 = *(int *)((int64_t)param_1 + lVal_20 + 0x4948);
              uVal_29 = (uint)((int)uVal_29 < iVal_10) * iVal_10 | ((int)uVal_29 >= iVal_10) * uVal_29;
              uVal_30 = (uint)((int)uVal_30 < iVal_2) * iVal_2 | ((int)uVal_30 >= iVal_2) * uVal_30;
              uVal_31 = (uint)((int)uVal_31 < iVal_23) * iVal_23 | ((int)uVal_31 >= iVal_23) * uVal_31;
              uVal_32 = (uint)((int)uVal_32 < iVal_24) * iVal_24 | ((int)uVal_32 >= iVal_24) * uVal_32;
              uVal_37 = (uint)((int)uVal_37 < iVal_3) * iVal_3 | ((int)uVal_37 >= iVal_3) * uVal_37;
              uVal_38 = (uint)((int)uVal_38 < iVal_4) * iVal_4 | ((int)uVal_38 >= iVal_4) * uVal_38;
              uVal_39 = (uint)((int)uVal_39 < iVal_5) * iVal_5 | ((int)uVal_39 >= iVal_5) * uVal_39;
              uVal_40 = (uint)((int)uVal_40 < iVal_6) * iVal_6 | ((int)uVal_40 >= iVal_6) * uVal_40;
              lVal_20 = lVal_20 + 0x300;
            } while ((uint64_t)((uint)(uVal_25 >> 3) & 0xfffffff) * 0x300 != lVal_20);
            uVal_37 = ((int)uVal_29 < (int)uVal_37) * uVal_37 | ((int)uVal_29 >= (int)uVal_37) * uVal_29;
            uVal_38 = ((int)uVal_30 < (int)uVal_38) * uVal_38 | ((int)uVal_30 >= (int)uVal_38) * uVal_30;
            uVal_39 = ((int)uVal_31 < (int)uVal_39) * uVal_39 | ((int)uVal_31 >= (int)uVal_39) * uVal_31;
            uVal_40 = ((int)uVal_32 < (int)uVal_40) * uVal_40 | ((int)uVal_32 >= (int)uVal_40) * uVal_32;
            uVal_37 = ((int)uVal_39 < (int)uVal_37) * uVal_37 | ((int)uVal_39 >= (int)uVal_37) * uVal_39;
            uVal_38 = ((int)uVal_40 < (int)uVal_38) * uVal_38 | ((int)uVal_40 >= (int)uVal_38) * uVal_40;
            uVal_37 = ((int)uVal_38 < (int)uVal_37) * uVal_37 | ((int)uVal_38 >= (int)uVal_37) * uVal_38;
            uVal_26 = ((int)uVal_26 < (int)uVal_33) * uVal_33 | ((int)uVal_26 >= (int)uVal_33) * uVal_26;
            uVal_11 = ((int)uVal_11 < (int)uVal_34) * uVal_34 | ((int)uVal_11 >= (int)uVal_34) * uVal_11;
            uVal_27 = ((int)uVal_27 < (int)uVal_35) * uVal_35 | ((int)uVal_27 >= (int)uVal_35) * uVal_27;
            uVal_28 = ((int)uVal_28 < (int)uVal_36) * uVal_36 | ((int)uVal_28 >= (int)uVal_36) * uVal_28;
            uVal_26 = ((int)uVal_27 < (int)uVal_26) * uVal_26 | ((int)uVal_27 >= (int)uVal_26) * uVal_27;
            uVal_11 = ((int)uVal_28 < (int)uVal_11) * uVal_11 | ((int)uVal_28 >= (int)uVal_11) * uVal_28;
            uVal_26 = ((int)uVal_11 < (int)uVal_26) * uVal_26 | ((int)uVal_11 >= (int)uVal_26) * uVal_11;
            if ((uVal_9 & 0x7ffffff8) != uVal_9) goto LAB_1800eda45;
          }
          ptr2_Int_19 = param_1 + 0x8d5;
          do {
            if ((int)uVal_26 % *(int *)((int64_t)ptr2_Int_19 + -4) != 0) goto LAB_1800ed8da;
            if ((int)uVal_37 % *(int *)ptr2_Int_19 != 0) goto LAB_1800edc1c;
            ptr2_Int_19 = ptr2_Int_19 + 0xc;
            uVal_18 = uVal_18 - 1;
          } while (uVal_18 != 0);
LAB_1800edaa8:
          *(uint *)(param_1 + 0x8d1) = uVal_26;
          *(uint *)((int64_t)param_1 + 0x468c) = uVal_37;
          *(uint *)(param_1 + 0x8d3) = uVal_26 * 8;
          *(uint *)((int64_t)param_1 + 0x469c) = uVal_37 * 8;
          uVal_9 = ((*pInt_7 + uVal_26 * 8) - 1) / (uVal_26 * 8);
          *(uint *)(param_1 + 0x8d2) = uVal_9;
          uVal_11 = ((pInt_7[1] + uVal_37 * 8) - 1) / (uVal_37 * 8);
          *(uint *)((int64_t)param_1 + 0x4694) = uVal_11;
          if (0 < pInt_7[2]) {
            pInt_22 = (int *)((int64_t)param_1 + 0x46fc);
            lVal_20 = 0;
            do {
              pInt_22[-0x10] = (*pInt_7 * pInt_22[-0x16] + (uVal_26 - 1)) / uVal_26;
              pInt_22[-0xf] = (pInt_7[1] * pInt_22[-0x15] + (uVal_37 - 1)) / uVal_37;
              iVal_24 = pInt_22[-0x16] * uVal_9;
              iVal_10 = iVal_24 * 8;
              pInt_22[-0xe] = iVal_10;
              iVal_23 = pInt_22[-0x15] * uVal_11;
              iVal_2 = iVal_23 * 8;
              pInt_22[-0xd] = iVal_2;
              lVal_16 = func_0x1800e8390(iVal_10,iVal_2,0xf);
              *(uint8_t (*)[16])(pInt_22 + -7) = ZEXT816(0);
              *(uint64_t *)(pInt_22 + -3) = 0;
              *(int64_t *)(pInt_22 + -9) = lVal_16;
              if (lVal_16 == 0) {
LAB_1800edc45:
                *(char **)(*(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                          0x3010) = "outofmem";
                func_0x1800ede60(param_1,(int)lVal_20 + 1);
                return 0;
              }
              *(uint64_t *)(pInt_22 + -0xb) = lVal_16 + 0xfU & 0xfffffffffffffff0;
              if (*(int *)(param_1 + 0x906) != 0) {
                pInt_22[-1] = iVal_24;
                *pInt_22 = iVal_23;
                lVal_16 = func_0x1800e82c0(iVal_10,iVal_2,2,0xf);
                *(int64_t *)(pInt_22 + -7) = lVal_16;
                if (lVal_16 == 0) goto LAB_1800edc45;
                *(uint64_t *)(pInt_22 + -3) = lVal_16 + 0xfU & 0xfffffffffffffff0;
              }
              lVal_20 = lVal_20 + 1;
              pInt_22 = pInt_22 + 0x18;
            } while (lVal_20 < pInt_7[2]);
          }
          return 1;
        }
      }
      else if (pInt_7[0xc] != 0) {
        func_0x1800e2360(pInt_7);
        pU8_12 = *(byte **)(pInt_7 + 0x30);
        goto LAB_1800ed539;
      }
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      fnPtr_17 = "bad component count";
      goto LAB_1800ed58c;
    }
  }
  else if (pInt_7[0xc] != 0) {
    pInt_22 = pInt_7 + 0xe;
    iVal_10 = (**(func_ptr_t *)(pInt_7 + 4))(*(uint64_t *)(pInt_7 + 10),pInt_22,pInt_7[0xd]);
    pInt_7[0x2e] = pInt_7[0x2e] + (pInt_7[0x30] - pInt_7[0x34]);
    if (iVal_10 == 0) {
      pInt_7[0xc] = 0;
      fnPtr_17 = (char *)((int64_t)pInt_7 + 0x39);
      *(uint8_t *)(pInt_7 + 0xe) = 0;
    }
    else {
      fnPtr_17 = (char *)((int64_t)iVal_10 + (int64_t)pInt_22);
    }
    *(char **)(pInt_7 + 0x32) = fnPtr_17;
    *(int64_t *)(pInt_7 + 0x30) = (int64_t)pInt_7 + 0x39;
    ch_1 = *(char *)pInt_22;
    goto joined_r0x0001800ed471;
  }
  lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_17 = "only 8-bit";
  goto LAB_1800ed58c;
LAB_1800ed8da:
  lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_17 = "bad H";
  goto LAB_1800ed58c;
LAB_1800edc1c:
  lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  fnPtr_17 = "bad V";
LAB_1800ed58c:
  *(char **)(lVal_20 + 0x3010) = fnPtr_17;
  return 0;
}

// func_0x1800edc80
uint64_t func_0x1800edc80(int64_t param_1,int64_t param_2)
{
  ushort uVal_1;
  int iVal_2;
  uint64_t uVal_3;
  byte bFlag_4;
  byte *pU8_5;
  int64_t lVal_6;
  uint uVal_7;
  char *fnPtr_8;
  int64_t lVal_9;
  uint uVal_10;
  uint uVal_11;
  int iVal_12;
  uint16_t *pU64_13;
  
  iVal_2 = 0;
  fnPtr_8 = "bad size list";
  lVal_9 = 0;
  do {
    if (0 < *(int *)(param_2 + lVal_9 * 4)) {
      iVal_12 = 0x100;
      if (0x100 < iVal_2) {
        iVal_12 = iVal_2;
      }
      lVal_6 = 0;
      do {
        *(char *)((int64_t)iVal_2 + param_1 + 0x500 + lVal_6) = (char)lVal_9 + '\x01';
        if ((iVal_2 - iVal_12) + (int)lVal_6 == 0) goto LAB_1800edda6;
        lVal_6 = lVal_6 + 1;
      } while ((int)lVal_6 < *(int *)(param_2 + lVal_9 * 4));
      iVal_2 = iVal_2 + (int)lVal_6;
    }
    lVal_9 = lVal_9 + 1;
  } while (lVal_9 != 0x10);
  *(uint8_t *)(param_1 + 0x500 + (int64_t)iVal_2) = 0;
  uVal_10 = 0;
  uVal_3 = 1;
  fnPtr_8 = "bad code lengths";
  uVal_7 = 0;
  do {
    *(uint *)(param_1 + 0x64c + uVal_3 * 4) = uVal_7 - uVal_10;
    lVal_9 = (int64_t)(int)uVal_7;
    if (uVal_3 == *(byte *)(param_1 + 0x500 + lVal_9)) {
      pU64_13 = (uint16_t *)(param_1 + 0x200 + lVal_9 * 2);
      pU8_5 = (byte *)(lVal_9 + param_1 + 0x501);
      do {
        uVal_11 = uVal_10;
        *pU64_13 = (short)uVal_11;
        uVal_10 = uVal_11 + 1;
        bFlag_4 = *pU8_5;
        pU64_13 = pU64_13 + 1;
        uVal_7 = uVal_7 + 1;
        pU8_5 = pU8_5 + 1;
      } while (uVal_3 == bFlag_4);
      if (uVal_11 >> ((byte)uVal_3 & 0x1f) != 0) {
LAB_1800edda6:
        *(char **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                  0x3010) = fnPtr_8;
        return 0;
      }
    }
    *(uint *)(param_1 + 0x604 + uVal_3 * 4) = uVal_10 << (0x10 - (byte)uVal_3 & 0x1f);
    uVal_10 = uVal_10 * 2;
    uVal_3 = uVal_3 + 1;
    if (uVal_3 == 0x11) {
      *(uint32_t *)(param_1 + 0x648) = 0xffffffff;
      func_0x1806ab010(param_1,CONCAT71((int7)((uint64_t)(param_1 + 0x200) >> 8),0xff));
      if (0 < (int)uVal_7) {
        uVal_3 = 0;
        do {
          bFlag_4 = *(byte *)(param_1 + 0x500 + uVal_3);
          if (bFlag_4 < 10) {
            uVal_1 = *(ushort *)(param_1 + 0x200 + uVal_3 * 2);
            bFlag_4 = 9 - bFlag_4;
            lVal_9 = 0;
            do {
              *(char *)(((uint64_t)uVal_1 << (bFlag_4 & 0x3f)) + param_1 + lVal_9) = (char)uVal_3;
              lVal_9 = lVal_9 + 1;
            } while ((uint)lVal_9 >> (bFlag_4 & 0x1f) == 0);
          }
          uVal_3 = uVal_3 + 1;
        } while (uVal_3 != uVal_7);
      }
      return 1;
    }
  } while( true );
}

// func_0x1800ede60
void func_0x1800ede60(int64_t param_1,uint param_2)
{
  int64_t lVal_1;
  
  if (0 < (int)param_2) {
    lVal_1 = 0;
    do {
      if (*(int64_t *)(param_1 + 0x46d8 + lVal_1) != 0) {
        thunk_FUN_180695dd0();
        *(uint8_t (*)[16])(param_1 + 0x46d0 + lVal_1) = ZEXT816(0);
      }
      if (*(int64_t *)(param_1 + 0x46e0 + lVal_1) != 0) {
        thunk_FUN_180695dd0();
        *(uint64_t *)(param_1 + 0x46e0 + lVal_1) = 0;
        *(uint64_t *)(param_1 + 0x46f0 + lVal_1) = 0;
      }
      if (*(int64_t *)(param_1 + 0x46e8 + lVal_1) != 0) {
        thunk_FUN_180695dd0();
        *(uint64_t *)(param_1 + 0x46e8 + lVal_1) = 0;
      }
      lVal_1 = lVal_1 + 0x60;
    } while ((uint64_t)param_2 * 0x60 != lVal_1);
  }
  return;
}
