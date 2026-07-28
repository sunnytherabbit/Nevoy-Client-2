#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@180336170
void Unwind_180336170(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x396) = 0;
  return;
}

// Unwind@180336240
void Unwind_180336240(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x396);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x3a0) = uVal_1;
  return;
}

// Unwind@180336310
void Unwind_180336310(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x3a0) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x2a8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x270));
    *(uint64_t *)(param_2 + 0x2a8) = 0;
  }
  return;
}

// Unwind@180336400
void Unwind_180336400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x360);
  *(uint8_t *)(param_2 + 0x39f) = 0;
  return;
}

// Unwind@1803364d0
void Unwind_1803364d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x39f);
  func_0x180001e70(param_2 + 800);
  *(uint8_t *)(param_2 + 0x395) = uVal_1;
  return;
}

// Unwind@1803365a0
void Unwind_1803365a0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x395) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x148), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x110));
    *(uint64_t *)(param_2 + 0x148) = 0;
  }
  return;
}

// Unwind@180336690
void Unwind_180336690(uint64_t param_1,int64_t param_2)
{
  func_0x180311940(*(uint64_t *)(param_2 + 0x2c8));
  return;
}

// Unwind@180336760
void Unwind_180336760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x2f8));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0x388));
  return;
}

// Unwind@180336830
void Unwind_180336830(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf6fc) = 0;
  return;
}

// Unwind@180336900
void Unwind_180336900(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf75c) = 0;
  *(uint8_t *)(param_2 + 0x3a7) = 1;
  return;
}

// Unwind@1803369e0
void Unwind_1803369e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf798) = 0;
  *(uint8_t *)(param_2 + 0x3a5) = 1;
  return;
}

// Unwind@180336ac0
void Unwind_180336ac0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf7b4) = 0;
  *(uint8_t *)(param_2 + 0x3a3) = 1;
  return;
}

// Unwind@180336ba0
void Unwind_180336ba0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf7cc) = 0;
  *(uint8_t *)(param_2 + 0x3a2) = 1;
  return;
}

// Unwind@180336c80
void Unwind_180336c80(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf870) = 0;
  *(uint8_t *)(param_2 + 0x3a1) = 1;
  return;
}

// Unwind@180336d60
void Unwind_180336d60(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf8dc) = 0;
  *(uint8_t *)(param_2 + 0x39f) = 1;
  return;
}

// func_0x180336e40
void func_0x180336e40(uint64_t *param_1)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  *param_1 = &PTR_LAB_1806c5020;
  if (param_1[0x11] != 0) {
    thunk_FUN_180695dd0();
  }
  if (param_1[0x2e] != 0) {
    thunk_FUN_180695dd0();
  }
  func_0x180311940(param_1 + 0x16);
  uVal_1 = param_1[0x15];
  if (0xf < uVal_1) {
    lVal_2 = param_1[0x12];
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
  param_1[0x14] = 0;
  param_1[0x15] = 0xf;
  *(uint8_t *)(param_1 + 0x12) = 0;
  func_0x1801c49a0(param_1);
  return;
}

// Unwind@180337050
void Unwind_180337050(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf8f0) = 0;
  return;
}

// Unwind@1803371e0
void Unwind_1803371e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf90c) = 0;
  return;
}

// Unwind@180337ac0
void Unwind_180337ac0(void)
{
  func_0x180672f60(&DAT_18083ff10);
  return;
}

// Unwind@180337b00
void Unwind_180337b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180337b40
void Unwind_180337b40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180337b80
void Unwind_180337b80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180337bc0
void Unwind_180337bc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  *(uint8_t *)(param_2 + 199) = 0;
  return;
}

// Unwind@180337c00
void Unwind_180337c00(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 199) == '\x01') {
    func_0x180001e70(param_2 + 0x50);
  }
  return;
}

// Unwind@180337c40
void Unwind_180337c40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  return;
}

// Unwind@180337c80
void Unwind_180337c80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xf9e0) = 0;
  return;
}

// func_0x180337cd0
int64_t func_0x180337cd0(int64_t param_1)
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
  lVal_5 = (*(uint64_t *)(param_1 + 0x30) & 0xb1de403131180ae) * 0x10;
  lVal_4 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 8 + lVal_5);
  if (lVal_4 == *(int64_t *)(param_1 + 8)) {
    lVal_5 = 0;
  }
  else {
    if (*(int64_t *)(lVal_4 + 0x10) != -0x60877ad591035b2b) {
      lVal_2 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + lVal_5);
      lVal_5 = 0;
      lVal_6 = lVal_4;
      do {
        if (lVal_6 == lVal_2) goto LAB_180337d74;
        lVal_6 = *(int64_t *)(lVal_6 + 8);
      } while (*(int64_t *)(lVal_6 + 0x10) != -0x60877ad591035b2b);
      do {
        if (lVal_4 == lVal_2) {
          func_0x1806744f0("invalid unordered_map<K, T> key");
          goto LAB_180337d9a;
        }
        lVal_4 = *(int64_t *)(lVal_4 + 8);
      } while (*(int64_t *)(lVal_4 + 0x10) != -0x60877ad591035b2b);
    }
    iVal_1 = *(int *)(lVal_4 + 0x18);
    func_0x18063eef0(&local_18);
    lVal_5 = local_18 + ((int64_t)iVal_1 ^ 0xfffffffff18421ffU) + -0x14;
  }
LAB_180337d74:
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_38)) {
    return lVal_5;
  }
LAB_180337d9a:
  func_0x180673080(local_10 ^ (uint64_t)auStack_38);
  fnPtr_3 = (func_ptr_t )swi(3);
  lVal_4 = (*fnPtr_3)();
  return lVal_4;
}

// func_0x180337db0
void func_0x180337db0(uint64_t param_1,uint64_t *param_2,int64_t **param_3)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t *pLong_7;
  int64_t local_70 [3];
  uint64_t local_58;
  uint64_t local_50;
  int64_t ***local_48;
  int64_t **local_40;
  int64_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  int64_t **local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_38 = param_3[2];
  local_40 = param_3;
  if (&DAT_0000000f < param_3[3]) {
    local_40 = (int64_t **)*param_3;
  }
  local_50 = 0xd;
  local_48 = &local_40;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
  local_20 = param_3;
  func_0x18063ff10(local_70,&local_30,&local_50);
  func_0x180116b80(param_1,local_70);
  ptr2_Long_3 = local_20;
  if (0xf < local_58) {
    uVal_4 = local_58 + 1;
    lVal_5 = local_70[0];
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(local_70[0] + -8);
      if (0x1f < (uint64_t)((local_70[0] + -8) - lVal_5)) goto LAB_180337eb5;
      uVal_4 = local_58 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_5,uVal_4);
  }
  pLong_1 = ptr2_Long_3[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *ptr2_Long_3;
    pLong_7 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_6 = pLong_2;
    if ((int64_t *)0xfff < pLong_7) {
      pLong_6 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_6))) {
LAB_180337eb5:
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_7 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_6,pLong_7);
  }
  return;
}

// Unwind@180337ec0
void Unwind_180337ec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@180337ef0
void Unwind_180337ef0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x78));
  return;
}

// Unwind@180337fb0
void Unwind_180337fb0(void)
{
  func_0x180672f60(&DAT_18083ff20);
  return;
}

// Unwind@1803380a0
void Unwind_1803380a0(void)
{
  func_0x180672f60(&DAT_18083ff30);
  return;
}

// func_0x1803380d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803380d0(int64_t param_1)
{
  uint *pU64_1;
  char ch_2;
  uint64_t uVal_3;
  func_ptr_t fnPtr_4;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  int iVal_8;
  uint32_t uVal_9;
  int iVal_10;
  size_t sz_11;
  uint64_t *pU64_12;
  uint8_t (*pArr16_13)[16];
  int64_t lVal_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint8_t *pU64_17;
  char *fnPtr_18;
  int64_t lVal_19;
  uint64_t uVal_20;
  uint64_t uVal_21;
  int64_t lVal_22;
  int64_t lVal_23;
  int64_t lVal_24;
  uint64_t *pU64_25;
  uint8_t *pU64_26;
  uint8_t (*pArr16_27)[16];
  uint8_t *pU64_28;
  bool bFlag_29;
  uint32_t local_178;
  uint32_t uStack_174;
  uint32_t uStack_170;
  uint32_t uStack_16c;
  uint32_t local_168;
  uint32_t uStack_164;
  uint32_t uStack_160;
  uint32_t uStack_15c;
  uint8_t *local_158;
  uint64_t local_150;
  uint32_t local_148;
  uint32_t uStack_144;
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [24];
  int64_t local_f0;
  uint8_t local_e8 [16];
  uint8_t local_d8 [24];
  int64_t local_c0;
  uint8_t local_b8 [16];
  uint64_t local_a8;
  uint64_t uStack_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  uint64_t uStack_90;
  undefined3 local_88;
  uint32_t uStack_85;
  uint32_t uStack_81;
  uint32_t uStack_7d;
  uint8_t uStack_79;
  uint8_t local_78 [4];
  uint32_t uStack_74;
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t uStack_60;
  uint8_t local_58;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  func_0x1806aa960(*(uint64_t *)(param_1 + 0x88),*(uint64_t *)(param_1 + 0x170),0x4000);
  iVal_10 = *(int *)(param_1 + 0x15c);
  lVal_19 = (int64_t)iVal_10;
  local_f0 = thunk_FUN_180672de0(iVal_10 * iVal_10 * 4);
  func_0x1806ab010(local_f0,0);
  if (0 < lVal_19) {
    lVal_14 = *(int64_t *)(param_1 + 0x88);
    lVal_16 = local_f0 + 3;
    iVal_8 = 0;
    lVal_22 = 0;
    do {
      lVal_23 = 0;
      do {
        lVal_24 = (int64_t)(iVal_8 + (int)lVal_23);
        *(uint8_t *)(lVal_16 + -3 + lVal_23) = *(uint8_t *)(lVal_14 + lVal_24);
        *(uint8_t *)(lVal_16 + -2 + lVal_23) = *(uint8_t *)(lVal_14 + 1 + lVal_24);
        *(uint8_t *)(lVal_16 + -1 + lVal_23) = *(uint8_t *)(lVal_14 + 2 + lVal_24);
        *(uint8_t *)(lVal_16 + lVal_23) = *(uint8_t *)(lVal_14 + 3 + lVal_24);
        lVal_23 = lVal_23 + 4;
      } while (lVal_19 * 4 - lVal_23 != 0);
      lVal_22 = lVal_22 + 1;
      iVal_8 = iVal_8 + 0x100;
      lVal_16 = lVal_16 + lVal_19 * 4;
    } while (lVal_22 != lVal_19);
  }
  local_b8 = ZEXT816(0);
  local_a8 = 0;
  uStack_a0 = 0xf;
  local_c0 = param_1;
  if (*(char *)(param_1 + 0x159) == '\x01') {
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xf9ec) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xf9ec) = 1;
      *(uint32_t *)(lVal_19 + 0xf9e4) = 0x8d30bcfd;
      *(uint16_t *)(lVal_19 + 0xf9e8) = 0x1eb;
      func_0x180673140(&LAB_180368060);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_19 + 0xf9e4);
    if (*(char *)(lVal_19 + 0xf9e9) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xeb59dbd3;
      *(byte *)(lVal_19 + 0xf9e8) = *(byte *)(lVal_19 + 0xf9e8) ^ 0xeb;
      *(uint8_t *)(lVal_19 + 0xf9e9) = 0;
    }
    _local_78 = ZEXT816(0);
    sz_11 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_11) {
      if (sz_11 < 0x10) {
        pU64_28 = local_78;
        uVal_20 = 0xf;
      }
      else {
        uVal_21 = sz_11 | 0xf;
        uVal_20 = 0x16;
        if (0x16 < uVal_21) {
          uVal_20 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
        }
        else {
          lVal_19 = func_0x180672de0(uVal_20 + 0x28);
          pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_19;
        }
        _local_78 = (uint8_t (*)[16])pU64_28;
      }
      lVal_19 = local_c0;
      pU64_26 = (uint8_t *)(local_c0 + 0x90);
      local_68 = sz_11;
      uStack_60 = uVal_20;
      func_0x1806aa960(pU64_28,pU64_1,sz_11);
      pU64_28[sz_11] = 0;
      uVal_20 = uStack_60;
      bFlag_29 = true;
      if (local_68 <= *(uint64_t *)(lVal_19 + 0xa0)) {
        if (uStack_60 < 0x10) {
          uVal_21 = *(uint64_t *)(lVal_19 + 0xa8);
          pU64_28 = local_78;
        }
        else {
          uVal_21 = *(uint64_t *)(lVal_19 + 0xa8);
          pU64_28 = *_local_78;
        }
        pU64_17 = pU64_26;
        if (0xf < uVal_21) {
          pU64_17 = *(uint8_t **)(lVal_19 + 0x90);
        }
        iVal_8 = memcmp(pU64_17 + (*(uint64_t *)(lVal_19 + 0xa0) - local_68),pU64_28,local_68);
        bFlag_29 = iVal_8 != 0;
      }
      if (0xf < uVal_20) {
        uVal_21 = uVal_20 + 1;
        lVal_19 = (int64_t)_local_78;
        if (0xfff < uVal_21) {
          lVal_19 = *(int64_t *)((int64_t)_local_78 + -8);
          if (0x1f < (uint64_t)(((int64_t)_local_78 + -8) - lVal_19)) goto LAB_1803392f9;
          uVal_21 = uVal_20 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_19,uVal_21);
      }
      if (!bFlag_29) goto LAB_1803383de;
      if (local_b8 != pU64_26) {
        uVal_20 = *(uint64_t *)(local_c0 + 0xa0);
        if (0xf < *(uint64_t *)(local_c0 + 0xa8)) {
          pU64_26 = *(uint8_t **)(local_c0 + 0x90);
        }
        if (uStack_a0 < uVal_20) {
          func_0x18007bba0(local_b8,uVal_20);
        }
        else {
          pU64_28 = local_b8;
          if (0xf < uStack_a0) {
            pU64_28 = (uint8_t *)local_b8._0_8_;
          }
          local_a8 = uVal_20;
          func_0x1806aa960(pU64_28,pU64_26,uVal_20);
          pU64_28[uVal_20] = 0;
        }
      }
      goto LAB_1803385ec;
    }
LAB_18033931a:
    func_0x18007ba70();
LAB_180339320:
    func_0x18007ba70();
  }
  else {
LAB_1803383de:
    uVal_9 = func_0x18068a0e8();
    uStack_74 = _UNK_1806c71ba;
    local_78 = (uint8_t  [4])_DAT_1806c71b6;
    uStack_70._0_4_ = _UNK_1806c71be;
    uStack_70._4_4_ = _UNK_1806c71c2;
    local_68 = CONCAT71(local_68._1_7_,0xf3);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 64000) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 64000) = 1;
      func_0x18007d2b0(lVal_19 + 0xf9ed,local_78);
      func_0x180673140(&LAB_180368090);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_13 = (uint8_t (*)[16])(lVal_19 + 0xf9ed);
    if (*(char *)(lVal_19 + 0xf9fe) == '\x01') {
      auArr_5._4_4_ = *(uint *)(lVal_19 + 0xf9f1) ^ _UNK_1806b65f4;
      auArr_5._0_4_ = *(uint *)*pArr16_13 ^ _DAT_1806b65f0;
      auArr_5._8_4_ = *(uint *)(lVal_19 + 0xf9f5) ^ _UNK_1806b65f8;
      auArr_5._12_4_ = *(uint *)(lVal_19 + 0xf9f9) ^ _UNK_1806b65fc;
      *pArr16_13 = auArr_5;
      *(byte *)(lVal_19 + 0xf9fd) = *(byte *)(lVal_19 + 0xf9fd) ^ 0xf3;
      *(uint8_t *)(lVal_19 + 0xf9fe) = 0;
    }
    local_d8._0_16_ = ZEXT816(0);
    local_e8 = ZEXT816(0);
    sz_11 = strlen((char *)pArr16_13);
    if ((int64_t)sz_11 < 0) {
LAB_180339301:
      func_0x18007ba70();
LAB_180339307:
      func_0x18007ba70();
LAB_18033930d:
      local_49 = 1;
      func_0x18007ba70();
      goto LAB_18033931a;
    }
    uVal_20 = 0xf;
    pU64_28 = local_e8;
    if (0xf < sz_11) {
      uVal_21 = sz_11 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_21) {
        uVal_20 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_28 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_20 + 0x28);
        pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_28 + -8) = lVal_19;
      }
      local_e8._0_8_ = pU64_28;
    }
    local_d8._8_8_ = uVal_20;
    local_d8._0_8_ = sz_11;
    func_0x1806aa960(pU64_28,pArr16_13,sz_11);
    pU64_28[sz_11] = 0;
    local_98 = 1;
    uStack_94 = 0;
    uStack_90 = (uint64_t *)&local_148;
    local_158 = local_e8;
    if (0xf < (uint64_t)local_d8._8_8_) {
      local_158 = (uint8_t *)local_e8._0_8_;
    }
    local_150 = local_d8._0_8_;
    local_148 = uVal_9;
    func_0x18063ff10(local_78,&local_158,&local_98);
    if (0xf < uStack_a0) {
      uVal_20 = uStack_a0 + 1;
      lVal_19 = local_b8._0_8_;
      if (0xfff < uVal_20) {
        lVal_19 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_19)) goto LAB_1803392f9;
        uVal_20 = uStack_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_20);
    }
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    local_b8 = _local_78;
    local_68 = 0;
    uStack_60 = 0xf;
    auArr_6[15] = 0;
    auArr_6._0_15_ = stack0xffffffffffffff89;
    _local_78 = auArr_6 << 8;
    if (0xf < (uint64_t)local_d8._8_8_) {
      uVal_20 = local_d8._8_8_ + 1;
      lVal_19 = local_e8._0_8_;
      if (0xfff < uVal_20) {
        lVal_19 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_19)) goto LAB_1803392f9;
        uVal_20 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_20);
    }
LAB_1803385ec:
    uStack_74 = _UNK_1806c71cb;
    local_78 = (uint8_t  [4])_DAT_1806c71c7;
    uStack_70._0_4_ = _UNK_1806c71cf;
    uStack_70._4_4_ = _UNK_1806c71d3;
    local_68 = CONCAT62(local_68._2_6_,0x771);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfa14) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xfa14) = 1;
      func_0x18007c170(lVal_19 + 0xfa01,local_78);
      func_0x180673140(&LAB_1803680c0);
    }
    fnPtr_18 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfa01);
    func_0x18011d820(fnPtr_18);
    local_88 = 0;
    uStack_85 = 0;
    uStack_81 = SUB164(ZEXT816(0),7);
    uStack_7d = 0;
    uStack_79 = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90._0_4_ = 0;
    uStack_90._4_4_ = 0;
    sz_11 = strlen(fnPtr_18);
    if ((int64_t)sz_11 < 0) {
      func_0x18007ba70();
      goto LAB_180339301;
    }
    if (sz_11 < 0x10) {
      pU64_12 = (uint64_t *)&local_98;
      uVal_20 = 0xf;
    }
    else {
      uVal_21 = sz_11 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_21) {
        uVal_20 = uVal_21;
      }
      if (uVal_21 < 0xfff) {
        pU64_12 = (uint64_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_20 + 0x28);
        pU64_12 = (uint64_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
        pU64_12[-1] = lVal_19;
      }
      local_98 = SUB84(pU64_12,0);
      uStack_94 = (uint32_t)((uint64_t)pU64_12 >> 0x20);
    }
    lVal_19 = local_c0;
    local_88 = (undefined3)sz_11;
    uStack_85 = (uint32_t)(sz_11 >> 0x18);
    uStack_81._0_1_ = (uint8_t)(sz_11 >> 0x38);
    uStack_81._1_3_ = (undefined3)uVal_20;
    uStack_7d = (uint32_t)(uVal_20 >> 0x18);
    uStack_79 = (uint8_t)(uVal_20 >> 0x38);
    func_0x1806aa960(pU64_12,fnPtr_18,sz_11);
    *(uint8_t *)((int64_t)pU64_12 + sz_11) = 0;
    pU64_12 = (uint64_t *)func_0x1800becb0();
    uVal_20 = pU64_12[2];
    if (0xf < (uint64_t)pU64_12[3]) {
      pU64_12 = (uint64_t *)*pU64_12;
    }
    lVal_14 = CONCAT17((uint8_t)uStack_81,CONCAT43(uStack_85,local_88));
    uVal_21 = CONCAT17(uStack_79,CONCAT43(uStack_7d,uStack_81._1_3_));
    if (uVal_21 - lVal_14 < uVal_20) {
      pArr16_13 = (uint8_t (*)[16])func_0x1800871a0(&local_98,uVal_20,lVal_14,0,pU64_12,uVal_20);
    }
    else {
      lVal_19 = lVal_14 + uVal_20;
      local_88 = (undefined3)lVal_19;
      uStack_85 = (uint32_t)((uint64_t)lVal_19 >> 0x18);
      uStack_81._0_1_ = (uint8_t)((uint64_t)lVal_19 >> 0x38);
      uVal_15 = uVal_20;
      if (uVal_21 < 0x10) {
        pU64_25 = (uint64_t *)&local_98;
        if (pU64_25 < (uint64_t *)((int64_t)pU64_12 + uVal_20)) goto LAB_18033877a;
      }
      else {
        pU64_25 = (uint64_t *)CONCAT44(uStack_94,local_98);
        if (pU64_25 < (uint64_t *)((int64_t)pU64_12 + uVal_20)) {
LAB_18033877a:
          if ((pU64_12 <= (uint64_t *)((int64_t)pU64_25 + lVal_14)) &&
             (uVal_15 = (int64_t)pU64_25 - (int64_t)pU64_12,
             pU64_25 < pU64_12 || (int64_t)pU64_25 - (int64_t)pU64_12 == 0)) {
            uVal_15 = 0;
          }
        }
      }
      func_0x1806aa960((int64_t)pU64_25 + uVal_20,pU64_25,lVal_14 + 1);
      func_0x1806aa960(pU64_25,pU64_12,uVal_15);
      func_0x1806aa960((int64_t)pU64_25 + uVal_15,(int64_t)pU64_12 + uVal_15 + uVal_20,uVal_20 - uVal_15);
      pArr16_13 = (uint8_t (*)[16])&local_98;
      lVal_19 = local_c0;
    }
    _local_78 = *pArr16_13;
    local_68 = *(uint64_t *)pArr16_13[1];
    uStack_60 = *(uint64_t *)(pArr16_13[1] + 8);
    *(uint64_t *)pArr16_13[1] = 0;
    *(uint64_t *)(pArr16_13[1] + 8) = 0xf;
    (*pArr16_13)[0] = 0;
    if (uStack_a0 < 0x10) {
      pU64_28 = local_b8;
    }
    else {
      pU64_28 = (uint8_t *)local_b8._0_8_;
    }
    if (uStack_60 - local_68 < local_a8) {
      pArr16_13 = (uint8_t (*)[16])func_0x180082950(local_78,local_a8,local_a8,pU64_28,local_a8);
    }
    else {
      lVal_14 = local_68 + local_a8;
      pArr16_13 = (uint8_t (*)[16])local_78;
      pArr16_27 = pArr16_13;
      if (0xf < uStack_60) {
        pArr16_27 = _local_78;
      }
      pU64_26 = *pArr16_27 + local_68;
      local_68 = lVal_14;
      func_0x1806aa960(pU64_26,pU64_28);
      (*pArr16_27)[lVal_14] = 0;
    }
    local_e8 = *pArr16_13;
    local_d8._0_16_ = pArr16_13[1];
    *(uint64_t *)pArr16_13[1] = 0;
    *(uint64_t *)(pArr16_13[1] + 8) = 0xf;
    (*pArr16_13)[0] = 0;
    if (0xf < uStack_60) {
      uVal_20 = uStack_60 + 1;
      lVal_14 = (int64_t)_local_78;
      if (0xfff < uVal_20) {
        lVal_14 = *(int64_t *)((int64_t)_local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_78 + -8) - lVal_14)) goto LAB_1803392f9;
        uVal_20 = uStack_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_20);
    }
    local_68 = 0;
    uStack_60 = 0xf;
    auArr_7[15] = 0;
    auArr_7._0_15_ = stack0xffffffffffffff89;
    _local_78 = auArr_7 << 8;
    uVal_20 = CONCAT17(uStack_79,CONCAT43(uStack_7d,uStack_81._1_3_));
    if (0xf < uVal_20) {
      lVal_16 = CONCAT44(uStack_94,local_98);
      uVal_21 = uVal_20 + 1;
      lVal_14 = lVal_16;
      if (0xfff < uVal_21) {
        lVal_14 = *(int64_t *)(lVal_16 + -8);
        if (0x1f < (uint64_t)((lVal_16 + -8) - lVal_14)) goto LAB_1803392f9;
        uVal_21 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_14,uVal_21);
    }
    if ((uint64_t)local_d8._8_8_ < 0x10) {
      fnPtr_18 = local_e8;
    }
    else {
      fnPtr_18 = (char *)local_e8._0_8_;
    }
    fopen_s((FILE **)&local_148,fnPtr_18,"wb");
    uVal_20 = local_a8;
    if (CONCAT44(uStack_144,local_148) != 0) {
      func_0x1801714c0(CONCAT44(uStack_144,local_148),iVal_10,iVal_10,local_f0,1);
      func_0x18068a690(CONCAT44(uStack_144,local_148));
      uVal_20 = local_a8;
      pU64_28 = (uint8_t *)(lVal_19 + 0x90);
      if (pU64_28 == local_b8) {
LAB_1803389cb:
        ch_2 = *(char *)(lVal_19 + 0x159);
      }
      else {
        pU64_26 = local_b8;
        if (0xf < uStack_a0) {
          pU64_26 = (uint8_t *)local_b8._0_8_;
        }
        if (*(uint64_t *)(lVal_19 + 0xa8) < local_a8) {
          func_0x18007bba0(pU64_28,local_a8);
          goto LAB_1803389cb;
        }
        pU64_17 = pU64_28;
        if (0xf < *(uint64_t *)(lVal_19 + 0xa8)) {
          pU64_17 = *(uint8_t **)(lVal_19 + 0x90);
        }
        *(uint64_t *)(lVal_19 + 0xa0) = local_a8;
        func_0x1806aa960(pU64_17,pU64_26,local_a8);
        pU64_17[uVal_20] = 0;
        ch_2 = *(char *)(lVal_19 + 0x159);
      }
      if (ch_2 == '\x01') {
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xfa20) == '\0') {
          lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_14 + 0xfa20) = 1;
          *(uint32_t *)(lVal_14 + 0xfa18) = 0xd73a3a59;
          *(uint16_t *)(lVal_14 + 0xfa1c) = 0x161;
          func_0x180673140(&LAB_1803680f0);
        }
        lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint *)(lVal_14 + 0xfa18);
        if (*(char *)(lVal_14 + 0xfa1d) == '\x01') {
          *pU64_1 = *pU64_1 ^ 0xb1535d77;
          *(byte *)(lVal_14 + 0xfa1c) = *(byte *)(lVal_14 + 0xfa1c) ^ 0x61;
          *(uint8_t *)(lVal_14 + 0xfa1d) = 0;
        }
        _local_78 = ZEXT816(0);
        sz_11 = strlen((char *)pU64_1);
        if ((int64_t)sz_11 < 0) goto LAB_180339333;
        if (sz_11 < 0x10) {
          pU64_26 = local_78;
          uVal_20 = 0xf;
        }
        else {
          uVal_21 = sz_11 | 0xf;
          uVal_20 = 0x16;
          if (0x16 < uVal_21) {
            uVal_20 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            pU64_26 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
          }
          else {
            lVal_14 = func_0x180672de0(uVal_20 + 0x28);
            pU64_26 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_26 + -8) = lVal_14;
          }
          _local_78 = (uint8_t (*)[16])pU64_26;
        }
        local_68 = sz_11;
        uStack_60 = uVal_20;
        func_0x1806aa960(pU64_26,pU64_1,sz_11);
        pU64_26[sz_11] = 0;
        uVal_20 = uStack_60;
        bFlag_29 = true;
        if (local_68 <= *(uint64_t *)(lVal_19 + 0xa0)) {
          if (uStack_60 < 0x10) {
            uVal_21 = *(uint64_t *)(lVal_19 + 0xa8);
            pU64_26 = local_78;
          }
          else {
            uVal_21 = *(uint64_t *)(lVal_19 + 0xa8);
            pU64_26 = *_local_78;
          }
          if (0xf < uVal_21) {
            pU64_28 = *(uint8_t **)(lVal_19 + 0x90);
          }
          iVal_10 = memcmp(pU64_28 + (*(uint64_t *)(lVal_19 + 0xa0) - local_68),pU64_26,local_68);
          bFlag_29 = iVal_10 != 0;
        }
        if (0xf < uVal_20) {
          uVal_21 = uVal_20 + 1;
          lVal_14 = (int64_t)_local_78;
          if (0xfff < uVal_21) {
            lVal_14 = *(int64_t *)((int64_t)_local_78 + -8);
            if (0x1f < (uint64_t)(((int64_t)_local_78 + -8) - lVal_14)) goto LAB_1803392f9;
            uVal_21 = uVal_20 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_14,uVal_21);
        }
        if (bFlag_29) {
          *(uint8_t *)(lVal_19 + 0x158) = 1;
        }
      }
      uVal_20 = local_a8;
      *(uint8_t *)(lVal_19 + 0x159) = 0;
      _local_78 = (uint8_t (*)[16])&DAT_28d0f803f34a0611;
      uVal_3 = *(uint64_t *)(DAT_180840a58 + 0x648);
      local_128 = ZEXT816(0);
      local_138 = ZEXT816(0);
      if (uStack_a0 < 0x10) {
        pArr16_13 = &local_b8;
      }
      else {
        pArr16_13 = (uint8_t (*)[16])local_b8._0_8_;
      }
      if ((int64_t)local_a8 < 0) goto LAB_180339307;
      if (local_a8 < 0x10) {
        local_128._8_8_ = 0xf;
        local_128._0_8_ = local_a8;
        local_138 = *pArr16_13;
      }
      else {
        uVal_15 = local_a8 | 0xf;
        uVal_21 = 0x16;
        if (0x16 < uVal_15) {
          uVal_21 = uVal_15;
        }
        if (uVal_15 < 0xfff) {
          uVal_15 = func_0x180672de0(uVal_21 + 1);
        }
        else {
          lVal_19 = func_0x180672de0(uVal_21 + 0x28);
          uVal_15 = lVal_19 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_15 - 8) = lVal_19;
        }
        local_138._0_8_ = uVal_15;
        local_128._8_8_ = uVal_21;
        local_128._0_8_ = uVal_20;
        func_0x1806aa960(uVal_15,pArr16_13,uVal_20 + 1);
      }
      local_178 = PTR_DAT_1806b75a0._0_4_;
      uStack_174 = PTR_DAT_1806b75a0._4_4_;
      uStack_170 = _UNK_1806b75a8;
      uStack_16c = _UNK_1806b75ac;
      local_68 = CONCAT44(_UNK_1806c71ed,_DAT_1806c71e9);
      uStack_60 = CONCAT44(_UNK_1806c71f5,_UNK_1806c71f1);
      uStack_74 = _UNK_1806c71dd;
      local_78 = (uint8_t  [4])_DAT_1806c71d9;
      uStack_70._0_4_ = _UNK_1806c71e1;
      uStack_70._4_4_ = _UNK_1806c71e5;
      local_58 = 0x97;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xfa44) == '\0') {
        lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_19 + 0xfa44) = 1;
        func_0x180086ce0(lVal_19 + 0xfa21,local_78);
        func_0x180673140(&LAB_180368120);
      }
      fnPtr_18 = (char *)(*(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfa21
                        );
      func_0x180370180(fnPtr_18);
      local_98 = 0;
      uStack_94 = 0;
      uStack_90._0_4_ = 0;
      uStack_90._4_4_ = 0;
      sz_11 = strlen(fnPtr_18);
      if (-1 < (int64_t)sz_11) {
        if (sz_11 < 0x10) {
          pU64_12 = (uint64_t *)&local_98;
          uVal_20 = 0xf;
        }
        else {
          uVal_21 = sz_11 | 0xf;
          uVal_20 = 0x16;
          if (0x16 < uVal_21) {
            uVal_20 = uVal_21;
          }
          if (uVal_21 < 0xfff) {
            local_49 = 1;
            pU64_12 = (uint64_t *)func_0x180672de0(uVal_20 + 1);
          }
          else {
            local_49 = 1;
            lVal_19 = func_0x180672de0(uVal_20 + 0x28);
            pU64_12 = (uint64_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
            pU64_12[-1] = lVal_19;
          }
          local_98 = SUB84(pU64_12,0);
          uStack_94 = (uint32_t)((uint64_t)pU64_12 >> 0x20);
        }
        local_88 = (undefined3)sz_11;
        uStack_85 = (uint32_t)(sz_11 >> 0x18);
        uStack_81._0_1_ = (uint8_t)(sz_11 >> 0x38);
        uStack_81._1_3_ = (undefined3)uVal_20;
        uStack_7d = (uint32_t)(uVal_20 >> 0x18);
        uStack_79 = (uint8_t)(uVal_20 >> 0x38);
        func_0x1806aa960(pU64_12,fnPtr_18,sz_11);
        *(uint8_t *)((int64_t)pU64_12 + sz_11) = 0;
        func_0x180143b90(uVal_3,&local_98,&local_178,local_138);
        uVal_20 = CONCAT17(uStack_79,CONCAT43(uStack_7d,uStack_81._1_3_));
        if (0xf < uVal_20) {
          lVal_19 = CONCAT44(uStack_94,local_98);
          goto joined_r0x0001803390bc;
        }
        goto LAB_1803390e2;
      }
      goto LAB_18033930d;
    }
    _local_78 = (uint8_t (*)[16])&DAT_28d0f803f34a0611;
    uVal_3 = *(uint64_t *)(DAT_180840a58 + 0x648);
    local_108._0_16_ = ZEXT816(0);
    local_118 = ZEXT816(0);
    if (uStack_a0 < 0x10) {
      pArr16_13 = &local_b8;
    }
    else {
      pArr16_13 = (uint8_t (*)[16])local_b8._0_8_;
    }
    if ((int64_t)local_a8 < 0) goto LAB_180339320;
    if (local_a8 < 0x10) {
      local_108._8_8_ = 0xf;
      local_108._0_8_ = local_a8;
      local_118 = *pArr16_13;
    }
    else {
      uVal_15 = local_a8 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_15) {
        uVal_21 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        uVal_15 = func_0x180672de0(uVal_21 + 1);
      }
      else {
        lVal_19 = func_0x180672de0(uVal_21 + 0x28);
        uVal_15 = lVal_19 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_15 - 8) = lVal_19;
      }
      local_118._0_8_ = uVal_15;
      local_108._8_8_ = uVal_21;
      local_108._0_8_ = uVal_20;
      func_0x1806aa960(uVal_15,pArr16_13,uVal_20 + 1);
    }
    local_168 = PTR_DAT_1806b6f30._0_4_;
    uStack_164 = PTR_DAT_1806b6f30._4_4_;
    uStack_160 = _UNK_1806b6f38;
    uStack_15c = _UNK_1806b6f3c;
    local_88 = _UNK_1806c720a;
    uStack_85 = _UNK_1806c720d;
    uStack_81 = _UNK_1806c7211;
    uStack_7d = _UNK_1806c7215;
    local_98 = _DAT_1806c71fa;
    uStack_94 = _UNK_1806c71fe;
    uStack_90._0_4_ = _UNK_1806c7202;
    uStack_90._4_4_ = _UNK_1806c7206;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfa68) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xfa68) = 1;
      func_0x18007ce20(lVal_19 + 0xfa45,&local_98);
      func_0x180673140(&LAB_180368150);
    }
    fnPtr_18 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfa45);
    func_0x1803701b0(fnPtr_18);
    _local_78 = ZEXT816(0);
    sz_11 = strlen(fnPtr_18);
    if (-1 < (int64_t)sz_11) {
      if (sz_11 < 0x10) {
        pU64_28 = local_78;
        uVal_20 = 0xf;
      }
      else {
        uVal_21 = sz_11 | 0xf;
        uVal_20 = 0x16;
        if (0x16 < uVal_21) {
          uVal_20 = uVal_21;
        }
        if (uVal_21 < 0xfff) {
          local_4a = 1;
          pU64_28 = (uint8_t *)func_0x180672de0(uVal_20 + 1);
        }
        else {
          local_4a = 1;
          lVal_19 = func_0x180672de0(uVal_20 + 0x28);
          pU64_28 = (uint8_t *)(lVal_19 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_28 + -8) = lVal_19;
        }
        _local_78 = (uint8_t (*)[16])pU64_28;
      }
      local_68 = sz_11;
      uStack_60 = uVal_20;
      func_0x1806aa960(pU64_28,fnPtr_18,sz_11);
      pU64_28[sz_11] = 0;
      func_0x180143b90(uVal_3,local_78,&local_168,local_118);
      if (0xf < uStack_60) {
        lVal_19 = (int64_t)_local_78;
        uVal_20 = uStack_60;
joined_r0x0001803390bc:
        uVal_21 = uVal_20 + 1;
        lVal_14 = lVal_19;
        if (0xfff < uVal_21) {
          lVal_14 = *(int64_t *)(lVal_19 + -8);
          if (0x1f < (uint64_t)((lVal_19 + -8) - lVal_14)) goto LAB_1803392f9;
          uVal_21 = uVal_20 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_14,uVal_21);
      }
LAB_1803390e2:
      thunk_FUN_180695dd0(local_f0);
      if (0xf < (uint64_t)local_d8._8_8_) {
        uVal_20 = local_d8._8_8_ + 1;
        lVal_19 = local_e8._0_8_;
        if (0xfff < uVal_20) {
          lVal_19 = *(int64_t *)(local_e8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_19)) goto LAB_1803392f9;
          uVal_20 = local_d8._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_19,uVal_20);
      }
      if (0xf < uStack_a0) {
        uVal_20 = uStack_a0 + 1;
        lVal_19 = local_b8._0_8_;
        if (0xfff < uVal_20) {
          lVal_19 = *(int64_t *)(local_b8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_19)) {
LAB_1803392f9:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_20 = uStack_a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_19,uVal_20);
      }
      return;
    }
  }
  local_4a = 1;
  func_0x18007ba70();
LAB_180339333:
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  (*fnPtr_4)();
  return;
}

// Unwind@180339340
void Unwind_180339340(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180339380
void Unwind_180339380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1803393c0
void Unwind_1803393c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@180339400
void Unwind_180339400(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  *(uint8_t *)(param_2 + 0x15f) = 0;
  return;
}

// Unwind@180339440
void Unwind_180339440(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x15f) == '\x01') {
    func_0x180001e70(param_2 + 0x70);
  }
  return;
}

// Unwind@180339480
void Unwind_180339480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  *(uint8_t *)(param_2 + 0x15e) = 0;
  return;
}

// Unwind@1803394c0
void Unwind_1803394c0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x15e) == '\x01') {
    func_0x180001e70(param_2 + 0x90);
  }
  return;
}

// Unwind@180339500
void Unwind_180339500(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180339540
void Unwind_180339540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180339580
void Unwind_180339580(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 64000) = 0;
  return;
}

// Unwind@1803395d0
void Unwind_1803395d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfa14) = 0;
  return;
}

// Unwind@180339620
void Unwind_180339620(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfa44) = 0;
  *(uint8_t *)(param_2 + 0x15f) = 1;
  return;
}

// Unwind@180339670
void Unwind_180339670(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfa68) = 0;
  *(uint8_t *)(param_2 + 0x15e) = 1;
  return;
}

// func_0x1803396c0
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803396c0(int64_t param_1)
{
  char *fnPtr_1;
  uint64_t uVal_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  char ch_5;
  uint uVal_6;
  int iVal_7;
  size_t sz_8;
  int64_t lVal_9;
  uint64_t *pU64_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  int iVal_14;
  uint8_t (*pArr16_15)[16];
  int64_t lVal_16;
  int iVal_17;
  uint8_t (*pArr16_18)[16];
  int64_t lVal_19;
  uint64_t uVal_20;
  uint *pU64_21;
  uint uVal_22;
  uint *pU64_23;
  uint64_t *pU64_24;
  uint32_t *pU64_25;
  bool bFlag_26;
  uint64_t in_stack_fffffffffffffe98;
  uint32_t uVal_27;
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
  uint8_t local_11c [4];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint32_t local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint local_ac;
  uint64_t local_a8;
  uint16_t uStack_a0;
  uint16_t uStack_9e;
  uint16_t uStack_9c;
  uint16_t uStack_9a;
  uint16_t local_98;
  uint32_t uStack_96;
  uint16_t uStack_92;
  uint16_t uStack_90;
  undefined6 uStack_8e;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t local_68;
  uint16_t uStack_66;
  uint16_t uStack_64;
  uint16_t uStack_62;
  uint16_t uStack_60;
  uint16_t uStack_5e;
  uint8_t uStack_5c;
  uint8_t uStack_5b;
  uint16_t uStack_5a;
  undefined5 uStack_58;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  uVal_27 = (uint32_t)((uint64_t)in_stack_fffffffffffffe98 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xfa74) == '\0') {
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_9 + 0xfa74) = 1;
    *(uint32_t *)(lVal_9 + 0xfa6c) = 0x16c3a8f;
    *(uint16_t *)(lVal_9 + 0xfa70) = 0x179;
    func_0x180673140(&LAB_180368180);
  }
  lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_21 = (uint *)(lVal_9 + 0xfa6c);
  if (*(char *)(lVal_9 + 0xfa71) == '\x01') {
    *pU64_21 = *pU64_21 ^ 0x67055da1;
    *(byte *)(lVal_9 + 0xfa70) = *(byte *)(lVal_9 + 0xfa70) ^ 0x79;
    *(uint8_t *)(lVal_9 + 0xfa71) = 0;
  }
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  sz_8 = strlen((char *)pU64_21);
  if ((int64_t)sz_8 < 0) {
LAB_18033a585:
    func_0x18007ba70();
LAB_18033a58a:
    do {
      invalidInstructionException();
    } while( true );
  }
  if (sz_8 < 0x10) {
    pU64_23 = &local_78;
    uVal_20 = 0xf;
  }
  else {
    uVal_13 = sz_8 | 0xf;
    uVal_20 = 0x16;
    if (0x16 < uVal_13) {
      uVal_20 = uVal_13;
    }
    if (uVal_13 < 0xfff) {
      pU64_23 = (uint *)func_0x180672de0(uVal_20 + 1);
    }
    else {
      lVal_9 = func_0x180672de0(uVal_20 + 0x28);
      pU64_23 = (uint *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_23 + -2) = lVal_9;
    }
    local_78 = (uint)pU64_23;
    uStack_74 = (uint)((uint64_t)pU64_23 >> 0x20);
  }
  pArr16_18 = (uint8_t (*)[16])(param_1 + 0x90);
  local_68 = (uint16_t)sz_8;
  uStack_66 = (uint16_t)(sz_8 >> 0x10);
  uStack_64 = (uint16_t)(sz_8 >> 0x20);
  uStack_62 = (uint16_t)(sz_8 >> 0x30);
  uStack_60 = (uint16_t)uVal_20;
  uStack_5e = (uint16_t)(uVal_20 >> 0x10);
  uStack_5c = (uint8_t)(uVal_20 >> 0x20);
  uStack_5b = (uint8_t)(uVal_20 >> 0x28);
  uStack_5a = (uint16_t)(uVal_20 >> 0x30);
  func_0x1806aa960(pU64_23,pU64_21,sz_8);
  *(uint8_t *)((int64_t)pU64_23 + sz_8) = 0;
  uVal_13 = CONCAT26(uStack_5a,CONCAT15(uStack_5b,CONCAT14(uStack_5c,CONCAT22(uStack_5e,uStack_60))))
  ;
  pU64_21 = (uint *)CONCAT44(uStack_74,local_78);
  uVal_20 = CONCAT26(uStack_62,CONCAT24(uStack_64,CONCAT22(uStack_66,local_68)));
  if (*(uint64_t *)(param_1 + 0xa0) < uVal_20) {
    bFlag_26 = false;
    if (0xf < uVal_13) goto LAB_180339959;
LAB_180339810:
    if (!bFlag_26) goto LAB_180339996;
LAB_180339819:
    uVal_2 = *(uint64_t *)(DAT_180840a58 + 0x648);
    local_158 = PTR_DAT_1806b6f30._0_4_;
    uStack_154 = PTR_DAT_1806b6f30._4_4_;
    uStack_150 = _UNK_1806b6f38;
    uStack_14c = _UNK_1806b6f3c;
    local_68 = _UNK_1806c7229;
    uStack_66 = (uint16_t)_UNK_1806c722b;
    uStack_64 = (uint16_t)((uint)_UNK_1806c722b >> 0x10);
    uStack_62 = (uint16_t)_UNK_1806c722f;
    uStack_60 = (uint16_t)((uint)_UNK_1806c722f >> 0x10);
    uStack_5e = (uint16_t)_UNK_1806c7233;
    uStack_5c = (uint8_t)((uint)_UNK_1806c7233 >> 0x10);
    uStack_5b = (uint8_t)((uint)_UNK_1806c7233 >> 0x18);
    local_78 = _DAT_1806c7219;
    uStack_74 = _UNK_1806c721d;
    uStack_70 = _UNK_1806c7221;
    uStack_6c = _UNK_1806c7225;
    uStack_6a = _DAT_1806c7227;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfa94) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xfa94) = 1;
      func_0x18008fa60(lVal_9 + 0xfa75,&local_78);
      func_0x180673140(&LAB_1803681b0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xfa75);
    func_0x180370210(fnPtr_1);
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_18033a585;
    if (sz_8 < 0x10) {
      pU64_21 = &local_78;
      uVal_20 = 0xf;
    }
    else {
      uVal_13 = sz_8 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        pU64_21 = (uint *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_20 + 0x28);
        pU64_21 = (uint *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_21 + -2) = lVal_9;
      }
      local_78 = (uint)pU64_21;
      uStack_74 = (uint)((uint64_t)pU64_21 >> 0x20);
    }
    local_68 = (uint16_t)sz_8;
    uStack_66 = (uint16_t)(sz_8 >> 0x10);
    uStack_64 = (uint16_t)(sz_8 >> 0x20);
    uStack_62 = (uint16_t)(sz_8 >> 0x30);
    uStack_60 = (uint16_t)uVal_20;
    uStack_5e = (uint16_t)(uVal_20 >> 0x10);
    uStack_5c = (uint8_t)(uVal_20 >> 0x20);
    uStack_5b = (uint8_t)(uVal_20 >> 0x28);
    uStack_5a = (uint16_t)(uVal_20 >> 0x30);
    func_0x1806aa960(pU64_21,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)pU64_21 + sz_8) = 0;
    func_0x180143aa0(uVal_2,&local_78,&local_158);
    uVal_20 = CONCAT26(uStack_5a,
                      CONCAT15(uStack_5b,CONCAT14(uStack_5c,CONCAT22(uStack_5e,uStack_60))));
    if (uVal_20 < 0x10) {
      return;
    }
    lVal_9 = CONCAT44(uStack_74,local_78);
  }
  else {
    pU64_23 = &local_78;
    if (0xf < uVal_13) {
      pU64_23 = pU64_21;
    }
    pArr16_15 = pArr16_18;
    if (0xf < *(uint64_t *)(param_1 + 0xa8)) {
      pArr16_15 = *(uint8_t (**)[16])(param_1 + 0x90);
    }
    iVal_17 = memcmp((void *)((int64_t)pArr16_15 + (*(uint64_t *)(param_1 + 0xa0) - uVal_20)),pU64_23
                    ,uVal_20);
    bFlag_26 = iVal_17 == 0;
    if (uVal_13 < 0x10) goto LAB_180339810;
LAB_180339959:
    uVal_20 = uVal_13 + 1;
    pU64_23 = pU64_21;
    if (0xfff < uVal_20) {
      pU64_23 = *(uint **)(pU64_21 + -2);
      if (0x1f < (uint64_t)((int64_t)pU64_21 + (-8 - (int64_t)pU64_23))) goto LAB_18033a58a;
      uVal_20 = uVal_13 + 0x28;
    }
    thunk_FUN_180695dd0(pU64_23,uVal_20);
    if (bFlag_26) goto LAB_180339819;
LAB_180339996:
    local_d8 = _DAT_1806c7237;
    uStack_d4 = _UNK_1806c723b;
    uStack_d0 = _UNK_1806c723f;
    uStack_cc = _UNK_1806c7243;
    local_c8 = CONCAT22(local_c8._2_2_,0x716b);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfaa8) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0xfaa8) = 1;
      func_0x18007c170(lVal_9 + 0xfa95,&local_d8);
      func_0x180673140(&LAB_1803681e0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xfa95);
    func_0x180370250(fnPtr_1);
    local_98 = 0;
    uStack_96 = 0;
    uStack_92 = 0;
    uStack_90 = 0;
    uStack_8e = 0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    sz_8 = strlen(fnPtr_1);
    if ((int64_t)sz_8 < 0) goto LAB_18033a585;
    if (sz_8 < 0x10) {
      pU64_25 = (uint32_t *)&local_a8;
      uVal_20 = 0xf;
    }
    else {
      uVal_13 = sz_8 | 0xf;
      uVal_20 = 0x16;
      if (0x16 < uVal_13) {
        uVal_20 = uVal_13;
      }
      if (uVal_13 < 0xfff) {
        pU64_25 = (uint32_t *)func_0x180672de0(uVal_20 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_20 + 0x28);
        pU64_25 = (uint32_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_25 + 0xfffffffffffffffe) = lVal_9;
      }
      local_a8._0_4_ = (uint)pU64_25;
      local_a8._4_4_ = (uint32_t)((uint64_t)pU64_25 >> 0x20);
    }
    local_98 = (uint16_t)sz_8;
    uStack_96 = (uint32_t)(sz_8 >> 0x10);
    uStack_92 = (uint16_t)(sz_8 >> 0x30);
    uStack_90 = (uint16_t)uVal_20;
    uStack_8e = (undefined6)(uVal_20 >> 0x10);
    func_0x1806aa960(pU64_25,fnPtr_1,sz_8);
    *(uint8_t *)((int64_t)pU64_25 + sz_8) = 0;
    pU64_10 = (uint64_t *)func_0x1800becb0();
    uVal_20 = pU64_10[2];
    if (0xf < (uint64_t)pU64_10[3]) {
      pU64_10 = (uint64_t *)*pU64_10;
    }
    lVal_9 = CONCAT26(uStack_92,CONCAT42(uStack_96,local_98));
    if (CONCAT62(uStack_8e,uStack_90) - lVal_9 < uVal_20) {
      pU64_21 = (uint *)func_0x1800871a0(&local_a8,uVal_20,lVal_9,0,pU64_10,uVal_20);
      uVal_27 = (uint32_t)((uint64_t)pU64_10 >> 0x20);
    }
    else {
      lVal_12 = lVal_9 + uVal_20;
      local_98 = (uint16_t)lVal_12;
      uStack_96 = (uint32_t)((uint64_t)lVal_12 >> 0x10);
      uStack_92 = (uint16_t)((uint64_t)lVal_12 >> 0x30);
      uVal_13 = uVal_20;
      if (CONCAT62(uStack_8e,uStack_90) < 0x10) {
        pU64_24 = &local_a8;
        if (pU64_24 < (uint64_t *)((int64_t)pU64_10 + uVal_20)) goto LAB_180339ba5;
      }
      else {
        pU64_24 = (uint64_t *)CONCAT44(local_a8._4_4_,(uint)local_a8);
        if (pU64_24 < (uint64_t *)((int64_t)pU64_10 + uVal_20)) {
LAB_180339ba5:
          if ((pU64_10 <= (uint64_t *)((int64_t)pU64_24 + lVal_9)) &&
             (uVal_13 = (int64_t)pU64_24 - (int64_t)pU64_10,
             pU64_24 < pU64_10 || (int64_t)pU64_24 - (int64_t)pU64_10 == 0)) {
            uVal_13 = 0;
          }
        }
      }
      func_0x1806aa960((int64_t)pU64_24 + uVal_20,pU64_24,lVal_9 + 1);
      func_0x1806aa960(pU64_24,pU64_10,uVal_13);
      func_0x1806aa960((int64_t)pU64_24 + uVal_13,(int64_t)pU64_10 + uVal_13 + uVal_20,uVal_20 - uVal_13);
      pU64_21 = (uint *)&local_a8;
    }
    local_78 = *pU64_21;
    uStack_74 = pU64_21[1];
    uStack_70 = pU64_21[2];
    uVal_4 = pU64_21[7];
    local_68 = (uint16_t)pU64_21[4];
    uStack_66 = (uint16_t)(pU64_21[4] >> 0x10);
    uStack_64 = (uint16_t)pU64_21[5];
    uStack_62 = (uint16_t)(pU64_21[5] >> 0x10);
    uStack_60 = (uint16_t)pU64_21[6];
    uStack_5e = (uint16_t)(pU64_21[6] >> 0x10);
    uStack_5c = (uint8_t)uVal_4;
    uStack_5b = (uint8_t)(uVal_4 >> 8);
    uStack_5a = (uint16_t)(uVal_4 >> 0x10);
    uStack_6c = (uint16_t)pU64_21[3];
    uStack_6a = (uint16_t)(pU64_21[3] >> 0x10);
    *(uint64_t *)(pU64_21 + 4) = 0;
    *(uint64_t *)(pU64_21 + 6) = 0xf;
    *(uint8_t *)pU64_21 = 0;
    uVal_20 = *(uint64_t *)(param_1 + 0xa0);
    pArr16_15 = pArr16_18;
    if (0xf < *(uint64_t *)(param_1 + 0xa8)) {
      pArr16_15 = *(uint8_t (**)[16])(param_1 + 0x90);
    }
    lVal_9 = CONCAT26(uStack_62,CONCAT24(uStack_64,CONCAT22(uStack_66,local_68)));
    uVal_13 = CONCAT26(uStack_5a,
                      CONCAT15(uStack_5b,CONCAT14(uStack_5c,CONCAT22(uStack_5e,uStack_60))));
    if (uVal_13 - lVal_9 < uVal_20) {
      pU64_21 = (uint *)func_0x180082950(&local_78,uVal_20,uVal_20,pArr16_15,uVal_20);
      uVal_27 = (uint32_t)(uVal_20 >> 0x20);
    }
    else {
      lVal_12 = lVal_9 + uVal_20;
      local_68 = (uint16_t)lVal_12;
      uStack_66 = (uint16_t)((uint64_t)lVal_12 >> 0x10);
      uStack_64 = (uint16_t)((uint64_t)lVal_12 >> 0x20);
      uStack_62 = (uint16_t)((uint64_t)lVal_12 >> 0x30);
      pU64_21 = &local_78;
      pU64_23 = pU64_21;
      if (0xf < uVal_13) {
        pU64_23 = (uint *)CONCAT44(uStack_74,local_78);
      }
      func_0x1806aa960((uint8_t *)(lVal_9 + (int64_t)pU64_23),pArr16_15);
      *(uint8_t *)((int64_t)pU64_23 + lVal_12) = 0;
    }
    local_d8 = *pU64_21;
    uStack_d4 = pU64_21[1];
    uStack_d0 = pU64_21[2];
    uStack_cc = pU64_21[3];
    local_c8 = pU64_21[4];
    uStack_c4 = pU64_21[5];
    uStack_c0 = pU64_21[6];
    uStack_bc = pU64_21[7];
    *(uint64_t *)(pU64_21 + 4) = 0;
    *(uint64_t *)(pU64_21 + 6) = 0xf;
    *(uint8_t *)pU64_21 = 0;
    uVal_20 = CONCAT26(uStack_5a,
                      CONCAT15(uStack_5b,CONCAT14(uStack_5c,CONCAT22(uStack_5e,uStack_60))));
    if (0xf < uVal_20) {
      lVal_12 = CONCAT44(uStack_74,local_78);
      uVal_13 = uVal_20 + 1;
      lVal_9 = lVal_12;
      if (0xfff < uVal_13) {
        lVal_9 = *(int64_t *)(lVal_12 + -8);
        if (0x1f < (uint64_t)((lVal_12 + -8) - lVal_9)) goto LAB_18033a58a;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_13);
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_64 = 0;
    uStack_62 = 0;
    uStack_60 = 0xf;
    uStack_5e = 0;
    uStack_5c = 0;
    uStack_5b = 0;
    uStack_5a = 0;
    local_78 = local_78 & 0xffffff00;
    uVal_20 = CONCAT62(uStack_8e,uStack_90);
    if (0xf < uVal_20) {
      lVal_12 = CONCAT44(local_a8._4_4_,(uint)local_a8);
      uVal_13 = uVal_20 + 1;
      lVal_9 = lVal_12;
      if (0xfff < uVal_13) {
        lVal_9 = *(int64_t *)(lVal_12 + -8);
        if (0x1f < (uint64_t)((lVal_12 + -8) - lVal_9)) goto LAB_18033a58a;
        uVal_13 = uVal_20 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_13);
    }
    pU64_21 = &local_d8;
    ch_5 = func_0x1800be560(pU64_21,0);
    if (ch_5 == '\0') {
      local_78 = 0xf34a0611;
      uStack_74 = 0x28d0f803;
      uVal_2 = *(uint64_t *)(DAT_180840a58 + 0x648);
      local_108 = ZEXT816(0);
      local_118 = ZEXT816(0);
      uVal_20 = *(uint64_t *)(param_1 + 0xa0);
      if (0xf < *(uint64_t *)(param_1 + 0xa8)) {
        pArr16_18 = *(uint8_t (**)[16])(param_1 + 0x90);
      }
      if ((int64_t)uVal_20 < 0) {
        func_0x18007ba70();
      }
      else {
        if (uVal_20 < 0x10) {
          local_108._8_8_ = 0xf;
          local_108._0_8_ = uVal_20;
          local_118 = *pArr16_18;
        }
        else {
          uVal_11 = uVal_20 | 0xf;
          uVal_13 = 0x16;
          if (0x16 < uVal_11) {
            uVal_13 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            uVal_11 = func_0x180672de0(uVal_13 + 1);
          }
          else {
            lVal_9 = func_0x180672de0(uVal_13 + 0x28);
            uVal_11 = lVal_9 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_11 - 8) = lVal_9;
          }
          local_118._0_8_ = uVal_11;
          local_108._8_8_ = uVal_13;
          local_108._0_8_ = uVal_20;
          func_0x1806aa960(uVal_11,pArr16_18,uVal_20 + 1);
        }
        local_148 = PTR_DAT_1806b6f30._0_4_;
        uStack_144 = PTR_DAT_1806b6f30._4_4_;
        uStack_140 = _UNK_1806b6f38;
        uStack_13c = _UNK_1806b6f3c;
        local_98 = _UNK_1806c7259;
        uStack_96 = _UNK_1806c725b;
        uStack_92 = (uint16_t)_UNK_1806c725f;
        uStack_90 = (uint16_t)((uint)_UNK_1806c725f >> 0x10);
        local_a8._0_4_ = _DAT_1806c7249;
        local_a8._4_4_ = _UNK_1806c724d;
        uStack_a0 = _UNK_1806c7251;
        uStack_9e = _DAT_1806c7253;
        uStack_9c = _UNK_1806c7255;
        uStack_9a = _UNK_1806c7257;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xfac4) == '\0') {
          lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_9 + 0xfac4) = 1;
          func_0x1800d9840(lVal_9 + 0xfaa9,&local_a8);
          func_0x180673140(&LAB_180368210);
        }
        fnPtr_1 = (char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0xfaa9);
        func_0x180370270(fnPtr_1);
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_6a = 0;
        sz_8 = strlen(fnPtr_1);
        if (-1 < (int64_t)sz_8) {
          if (sz_8 < 0x10) {
            pU64_21 = &local_78;
            uVal_20 = 0xf;
          }
          else {
            uVal_13 = sz_8 | 0xf;
            uVal_20 = 0x16;
            if (0x16 < uVal_13) {
              uVal_20 = uVal_13;
            }
            if (uVal_13 < 0xfff) {
              local_49 = 1;
              pU64_21 = (uint *)func_0x180672de0(uVal_20 + 1);
            }
            else {
              local_49 = 1;
              lVal_9 = func_0x180672de0(uVal_20 + 0x28);
              pU64_21 = (uint *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_21 + -2) = lVal_9;
            }
            local_78 = (uint)pU64_21;
            uStack_74 = (uint)((uint64_t)pU64_21 >> 0x20);
          }
          local_68 = (uint16_t)sz_8;
          uStack_66 = (uint16_t)(sz_8 >> 0x10);
          uStack_64 = (uint16_t)(sz_8 >> 0x20);
          uStack_62 = (uint16_t)(sz_8 >> 0x30);
          uStack_60 = (uint16_t)uVal_20;
          uStack_5e = (uint16_t)(uVal_20 >> 0x10);
          uStack_5c = (uint8_t)(uVal_20 >> 0x20);
          uStack_5b = (uint8_t)(uVal_20 >> 0x28);
          uStack_5a = (uint16_t)(uVal_20 >> 0x30);
          func_0x1806aa960(pU64_21,fnPtr_1,sz_8);
          *(uint8_t *)((int64_t)pU64_21 + sz_8) = 0;
          func_0x180143b90(uVal_2,&local_78,&local_148,local_118);
          uVal_20 = CONCAT26(uStack_5a,
                            CONCAT15(uStack_5b,CONCAT14(uStack_5c,CONCAT22(uStack_5e,uStack_60))));
          if (0xf < uVal_20) {
            lVal_12 = CONCAT44(uStack_74,local_78);
            uVal_13 = uVal_20 + 1;
            lVal_9 = lVal_12;
            if (0xfff < uVal_13) {
              lVal_9 = *(int64_t *)(lVal_12 + -8);
              if (0x1f < (uint64_t)((lVal_12 + -8) - lVal_9)) goto LAB_18033a58a;
              uVal_13 = uVal_20 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_9,uVal_13);
          }
          goto LAB_18033a3fd;
        }
      }
      local_49 = 1;
      func_0x18007ba70();
LAB_18033a59f:
      func_0x18007ba70();
LAB_18033a5a5:
      local_4a = 1;
      func_0x18007ba70();
      fnPtr_3 = (func_ptr_t )swi(3);
      (*fnPtr_3)();
      return;
    }
    if (0xf < CONCAT44(uStack_bc,uStack_c0)) {
      pU64_21 = (uint *)CONCAT44(uStack_d4,local_d8);
    }
    lVal_9 = thunk_FUN_1800c2a40(pU64_21,&local_7c,&local_ac,local_11c,CONCAT44(uVal_27,4));
    uVal_22 = local_7c;
    uVal_4 = local_ac;
    uVal_20 = (uint64_t)local_ac;
    if ((int)local_ac < 0x41 && (int)local_7c < 0x41) {
      uVal_6 = local_ac;
      if ((int)local_ac < (int)local_7c) {
        uVal_6 = local_7c;
      }
      if ((int)uVal_6 < 0x11) {
        *(uint32_t *)(param_1 + 0x15c) = 0x10;
      }
      else if (uVal_6 < 0x21) {
        *(uint32_t *)(param_1 + 0x15c) = 0x20;
      }
      else {
        *(uint32_t *)(param_1 + 0x15c) = 0x40;
      }
      iVal_17 = 0;
      func_0x1806ab010(*(uint64_t *)(param_1 + 0x170),0,0x4000);
      if (0 < (int)uVal_4 && 0 < (int)uVal_22) {
        iVal_7 = 0;
        do {
          if (0 < (int)uVal_20) {
            lVal_12 = 0;
            iVal_14 = iVal_17;
            do {
              lVal_19 = (int64_t)(int)(local_7c * (int)lVal_12 + iVal_7);
              lVal_16 = (int64_t)iVal_14;
              *(uint8_t *)(*(int64_t *)(param_1 + 0x170) + lVal_16) =
                   *(uint8_t *)(lVal_9 + lVal_19 * 4);
              *(uint8_t *)(*(int64_t *)(param_1 + 0x170) + 1 + lVal_16) =
                   *(uint8_t *)(lVal_9 + 1 + lVal_19 * 4);
              *(uint8_t *)(*(int64_t *)(param_1 + 0x170) + 2 + lVal_16) =
                   *(uint8_t *)(lVal_9 + 2 + lVal_19 * 4);
              *(uint8_t *)(*(int64_t *)(param_1 + 0x170) + 3 + lVal_16) =
                   *(uint8_t *)(lVal_9 + 3 + lVal_19 * 4);
              lVal_12 = lVal_12 + 1;
              uVal_20 = (uint64_t)(int)local_ac;
              iVal_14 = iVal_14 + 0x100;
              uVal_22 = local_7c;
            } while (lVal_12 < (int64_t)uVal_20);
          }
          iVal_7 = iVal_7 + 1;
          iVal_17 = iVal_17 + 4;
        } while (iVal_7 < (int)uVal_22);
      }
      thunk_FUN_180695dd0(lVal_9);
      *(uint8_t *)(param_1 + 0x159) = 1;
    }
    else {
      local_78 = 0xf34a0611;
      uStack_74 = 0x28d0f803;
      uVal_2 = *(uint64_t *)(DAT_180840a58 + 0x648);
      local_e8 = ZEXT816(0);
      local_f8 = ZEXT816(0);
      uVal_20 = *(uint64_t *)(param_1 + 0xa0);
      if (0xf < *(uint64_t *)(param_1 + 0xa8)) {
        pArr16_18 = *(uint8_t (**)[16])(param_1 + 0x90);
      }
      if ((int64_t)uVal_20 < 0) goto LAB_18033a59f;
      if (uVal_20 < 0x10) {
        local_e8._8_8_ = 0xf;
        local_e8._0_8_ = uVal_20;
        local_f8 = *pArr16_18;
      }
      else {
        uVal_11 = uVal_20 | 0xf;
        uVal_13 = 0x16;
        if (0x16 < uVal_11) {
          uVal_13 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          uVal_11 = func_0x180672de0(uVal_13 + 1);
        }
        else {
          lVal_12 = func_0x180672de0(uVal_13 + 0x28);
          uVal_11 = lVal_12 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_11 - 8) = lVal_12;
        }
        local_f8._0_8_ = uVal_11;
        local_e8._8_8_ = uVal_13;
        local_e8._0_8_ = uVal_20;
        func_0x1806aa960(uVal_11,pArr16_18,uVal_20 + 1);
      }
      local_138 = PTR_DAT_1806b6f30._0_4_;
      uStack_134 = PTR_DAT_1806b6f30._4_4_;
      uStack_130 = _UNK_1806b6f38;
      uStack_12c = _UNK_1806b6f3c;
      local_68 = (uint16_t)_DAT_1806c7273;
      uStack_66 = (uint16_t)((uint)_DAT_1806c7273 >> 0x10);
      uStack_64 = (uint16_t)_UNK_1806c7277;
      uStack_62 = (uint16_t)((uint)_UNK_1806c7277 >> 0x10);
      uStack_60 = (uint16_t)_UNK_1806c727b;
      uStack_5e = (uint16_t)((uint)_UNK_1806c727b >> 0x10);
      uStack_5c = (uint8_t)_UNK_1806c727f;
      local_78 = _DAT_1806c7263;
      uStack_74 = _UNK_1806c7267;
      uStack_70 = _UNK_1806c726b;
      uStack_6c = (uint16_t)_UNK_1806c726f;
      uStack_6a = (uint16_t)((uint)_UNK_1806c726f >> 0x10);
      uStack_5b = 0x6b;
      uStack_5a = 0x63a2;
      uStack_58 = 0xc32e42699e;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xfaec) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0xfaec) = 1;
        func_0x1801b1390(lVal_12 + 0xfac5,&local_78);
        func_0x180673140(&LAB_180368240);
      }
      fnPtr_1 = (char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfac5)
      ;
      func_0x1803702a0(fnPtr_1);
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 0;
      uStack_a0 = 0;
      uStack_9e = 0;
      uStack_9c = 0;
      uStack_9a = 0;
      sz_8 = strlen(fnPtr_1);
      if ((int64_t)sz_8 < 0) goto LAB_18033a5a5;
      if (sz_8 < 0x10) {
        pU64_25 = (uint32_t *)&local_a8;
        uVal_20 = 0xf;
      }
      else {
        uVal_13 = sz_8 | 0xf;
        uVal_20 = 0x16;
        if (0x16 < uVal_13) {
          uVal_20 = uVal_13;
        }
        if (uVal_13 < 0xfff) {
          local_4a = 1;
          pU64_25 = (uint32_t *)func_0x180672de0(uVal_20 + 1);
        }
        else {
          local_4a = 1;
          lVal_12 = func_0x180672de0(uVal_20 + 0x28);
          pU64_25 = (uint32_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_25 + 0xfffffffffffffffe) = lVal_12;
        }
        local_a8._0_4_ = (uint)pU64_25;
        local_a8._4_4_ = (uint32_t)((uint64_t)pU64_25 >> 0x20);
      }
      local_98 = (uint16_t)sz_8;
      uStack_96 = (uint32_t)(sz_8 >> 0x10);
      uStack_92 = (uint16_t)(sz_8 >> 0x30);
      uStack_90 = (uint16_t)uVal_20;
      uStack_8e = (undefined6)(uVal_20 >> 0x10);
      func_0x1806aa960(pU64_25,fnPtr_1,sz_8);
      *(uint8_t *)((int64_t)pU64_25 + sz_8) = 0;
      func_0x180143b90(uVal_2,&local_a8,&local_138,local_f8);
      uVal_20 = CONCAT62(uStack_8e,uStack_90);
      if (0xf < uVal_20) {
        lVal_16 = CONCAT44(local_a8._4_4_,(uint)local_a8);
        uVal_13 = uVal_20 + 1;
        lVal_12 = lVal_16;
        if (0xfff < uVal_13) {
          lVal_12 = *(int64_t *)(lVal_16 + -8);
          if (0x1f < (uint64_t)((lVal_16 + -8) - lVal_12)) goto LAB_18033a58a;
          uVal_13 = uVal_20 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_12,uVal_13);
      }
      thunk_FUN_180695dd0(lVal_9);
    }
LAB_18033a3fd:
    uVal_20 = CONCAT44(uStack_bc,uStack_c0);
    if (uVal_20 < 0x10) {
      return;
    }
    lVal_9 = CONCAT44(uStack_d4,local_d8);
  }
  uVal_13 = uVal_20 + 1;
  if (0xfff < uVal_13) {
    if (0x1f < (uint64_t)((lVal_9 + -8) - *(int64_t *)(lVal_9 + -8))) goto LAB_18033a58a;
    uVal_13 = uVal_20 + 0x28;
    lVal_9 = *(int64_t *)(lVal_9 + -8);
  }
  thunk_FUN_180695dd0(lVal_9,uVal_13);
  return;
}

// Unwind@18033a5c0
void Unwind_18033a5c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18033a600
void Unwind_18033a600(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18033a640
void Unwind_18033a640(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@18033a680
void Unwind_18033a680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  *(uint8_t *)(param_2 + 0x13f) = 0;
  return;
}

// Unwind@18033a6c0
void Unwind_18033a6c0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x13f) == '\x01') {
    func_0x180001e70(param_2 + 0x70);
  }
  return;
}

// Unwind@18033a700
void Unwind_18033a700(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  *(uint8_t *)(param_2 + 0x13e) = 0;
  return;
}

// Unwind@18033a740
void Unwind_18033a740(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x13e) == '\x01') {
    func_0x180001e70(param_2 + 0x90);
  }
  return;
}

// Unwind@18033a780
void Unwind_18033a780(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18033a7c0
void Unwind_18033a7c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfa94) = 0;
  return;
}

// Unwind@18033a810
void Unwind_18033a810(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfaa8) = 0;
  return;
}

// Unwind@18033a860
void Unwind_18033a860(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfac4) = 0;
  *(uint8_t *)(param_2 + 0x13f) = 1;
  return;
}

// Unwind@18033a8b0
void Unwind_18033a8b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfaec) = 0;
  *(uint8_t *)(param_2 + 0x13e) = 1;
  return;
}

// Unwind@18033ae50
void Unwind_18033ae50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18033ae80
void Unwind_18033ae80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18033aeb0
void Unwind_18033aeb0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  func_0x18003c630(param_2 + 0x40);
  return;
}

// Unwind@18033aef0
void Unwind_18033aef0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033af10
void Unwind_18033af10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18033af40
void Unwind_18033af40(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033af60
void Unwind_18033af60(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033af80
void Unwind_18033af80(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x50);
  return;
}

// Unwind@18033afb0
void Unwind_18033afb0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033b630
void Unwind_18033b630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18033b670
void Unwind_18033b670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18033b6b0
void Unwind_18033b6b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@18033b6f0
void Unwind_18033b6f0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xa8);
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18033b730
void Unwind_18033b730(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033b750
void Unwind_18033b750(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18033b770
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18033b770(uint64_t *param_1)
{
  uint *_Str;
  uint64_t *pU64_1;
  byte *_Str_00;
  uint32_t uVal_2;
  func_ptr_t fnPtr_3;
  uint uVal_4;
  uint uVal_5;
  uint uVal_6;
  uint uVal_7;
  size_t sz_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t *pU64_11;
  int64_t lVal_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint uVal_15;
  uint uVal_16;
  uint uVal_17;
  uint8_t local_108 [56];
  uint64_t local_d0;
  uint8_t local_c8 [16];
  size_t local_b8;
  uint64_t local_b0;
  int64_t *local_a0;
  uint8_t local_98 [16];
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint8_t uStack_78;
  uint32_t uStack_77;
  uint32_t uStack_73;
  uint32_t uStack_6f;
  uint64_t *local_60;
  uint8_t local_52;
  uint8_t local_51;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  uStack_78 = UNK_1806c72a8;
  uStack_77 = _UNK_1806c72a9;
  uStack_73 = _UNK_1806c72ad;
  uStack_6f = _UNK_1806c72b1;
  local_88 = _DAT_1806c7298;
  uStack_84 = _UNK_1806c729c;
  uStack_80 = _UNK_1806c72a0;
  uStack_7c = _UNK_1806c72a4;
  local_98._8_8_ = _UNK_1806c7290;
  local_98._0_8_ = _DAT_1806c7288;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xfb58) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0xfb58) = 1;
    func_0x1801b2300(lVal_10 + 0xfb29,local_98);
    func_0x180673140(&LAB_180368360);
  }
  uVal_7 = _UNK_1806b2d6c;
  uVal_6 = _UNK_1806b2d68;
  uVal_5 = _UNK_1806b2d64;
  uVal_4 = _DAT_1806b2d60;
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint *)(lVal_10 + 0xfb29);
  if (*(char *)(lVal_10 + 0xfb56) == '\x01') {
    uVal_15 = *(uint *)(lVal_10 + 0xfb2d) ^ _UNK_1806b2d64;
    uVal_16 = *(uint *)(lVal_10 + 0xfb31) ^ _UNK_1806b2d68;
    uVal_17 = *(uint *)(lVal_10 + 0xfb35) ^ _UNK_1806b2d6c;
    *_Str = *_Str ^ _DAT_1806b2d60;
    *(uint *)(lVal_10 + 0xfb2d) = uVal_15;
    *(uint *)(lVal_10 + 0xfb31) = uVal_16;
    *(uint *)(lVal_10 + 0xfb35) = uVal_17;
    *(uint *)(lVal_10 + 0xfb39) = *(uint *)(lVal_10 + 0xfb39) ^ uVal_4;
    *(uint *)(lVal_10 + 0xfb3d) = *(uint *)(lVal_10 + 0xfb3d) ^ uVal_5;
    *(uint *)(lVal_10 + 0xfb41) = *(uint *)(lVal_10 + 0xfb41) ^ uVal_6;
    *(uint *)(lVal_10 + 0xfb45) = *(uint *)(lVal_10 + 0xfb45) ^ uVal_7;
    *(uint64_t *)(lVal_10 + 0xfb49) = *(uint64_t *)(lVal_10 + 0xfb49) ^ SUB168(_DAT_1806b6410,0);
    *(byte *)(lVal_10 + 0xfb51) = *(byte *)(lVal_10 + 0xfb51) ^ 0x75;
    *(byte *)(lVal_10 + 0xfb52) = *(byte *)(lVal_10 + 0xfb52) ^ 0x55;
    *(byte *)(lVal_10 + 0xfb53) = *(byte *)(lVal_10 + 0xfb53) ^ 0x4d;
    *(byte *)(lVal_10 + 0xfb54) = *(byte *)(lVal_10 + 0xfb54) ^ 0xd5;
    *(byte *)(lVal_10 + 0xfb55) = *(byte *)(lVal_10 + 0xfb55) ^ 0x37;
    *(uint8_t *)(lVal_10 + 0xfb56) = 0;
  }
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_98 = (uint8_t  [16])0x0;
  sz_8 = strlen((char *)_Str);
  if ((int64_t)sz_8 < 0) {
    func_0x18007ba70();
LAB_18033beb8:
    func_0x18007ba70();
  }
  else {
    if (sz_8 < 0x10) {
      pU64_13 = local_98;
      uVal_14 = 0xf;
    }
    else {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_13;
    }
    local_88 = (uint32_t)sz_8;
    uStack_84 = (uint32_t)(sz_8 >> 0x20);
    uStack_80 = (uint32_t)uVal_14;
    uStack_7c = (uint32_t)(uVal_14 >> 0x20);
    func_0x1806aa960(pU64_13,_Str,sz_8);
    pU64_13[sz_8] = 0;
    pU64_13 = local_98;
    func_0x1801c2ba0(param_1,0,3,pU64_13);
    uVal_14 = CONCAT44(uStack_7c,uStack_80);
    if (0xf < uVal_14) {
      uVal_9 = uVal_14 + 1;
      lVal_10 = local_98._0_8_;
      if (0xfff < uVal_9) {
        lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18033becb;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_10,uVal_9);
    }
    *param_1 = &PTR_LAB_1806c5150;
    *(uint32_t *)(param_1 + 0x10) = 0x3f400000;
    *(uint8_t (*)[16])(param_1 + 0x11) = (uint8_t  [16])0x0;
    param_1[0x13] = 0;
    param_1[0x14] = 0xf;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfb6c) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0xfb6c) = 1;
      *(uint8_t *)(lVal_10 + 0xfb68) = 1;
      *(uint64_t *)(lVal_10 + 0xfb60) = 0xe9c3d2c6e9092c1b;
      func_0x180673140(&LAB_180368390);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_10 + 0xfb60);
    if (*(char *)(lVal_10 + 0xfb68) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xe9b5b3b1c77d4573;
      *(uint8_t *)(lVal_10 + 0xfb68) = 0;
    }
    local_a0 = param_1 + 0x11;
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    local_60 = param_1;
    if ((int64_t)sz_8 < 0) goto LAB_18033beb8;
    uVal_14 = 0xf;
    if (0xf < sz_8) {
      uVal_9 = sz_8 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_9) {
        uVal_14 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_10 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_13;
    }
    pU64_11 = local_60;
    local_88 = (uint32_t)sz_8;
    uStack_84 = (uint32_t)(sz_8 >> 0x20);
    uStack_80 = (uint32_t)uVal_14;
    uStack_7c = (uint32_t)(uVal_14 >> 0x20);
    func_0x1806aa960(pU64_13,pU64_1,sz_8);
    pU64_13[sz_8] = 0;
    uVal_14 = pU64_11[0x14];
    if (0xf < uVal_14) {
      lVal_10 = *local_a0;
      uVal_9 = uVal_14 + 1;
      lVal_12 = lVal_10;
      if (0xfff < uVal_9) {
        lVal_12 = *(int64_t *)(lVal_10 + -8);
        if (0x1f < (uint64_t)((lVal_10 + -8) - lVal_12)) goto LAB_18033becb;
        uVal_9 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_9);
    }
    local_a0[2] = CONCAT44(uStack_84,local_88);
    local_a0[3] = CONCAT44(uStack_7c,uStack_80);
    *local_a0 = local_98._0_8_;
    local_a0[1] = local_98._8_8_;
    local_d0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_d0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_108);
      pU64_11 = local_60;
    }
    uVal_2 = *(uint32_t *)(pU64_11 + 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfb70) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0xfb70) = 1;
      *(uint16_t *)(lVal_10 + 0xfb6d) = 0x187;
      func_0x180673140(&LAB_1803683b0);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_00 = (byte *)(lVal_10 + 0xfb6d);
    if (*(char *)(lVal_10 + 0xfb6e) == '\x01') {
      *_Str_00 = *_Str_00 ^ 0x87;
      *(uint8_t *)(lVal_10 + 0xfb6e) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)_Str_00);
    if (-1 < (int64_t)sz_8) {
      if (sz_8 < 0x10) {
        pU64_13 = local_98;
        uVal_14 = 0xf;
      }
      else {
        uVal_9 = sz_8 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_9) {
          uVal_14 = uVal_9;
        }
        if (uVal_9 < 0xfff) {
          local_52 = 1;
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
        }
        else {
          local_52 = 1;
          lVal_10 = func_0x180672de0(uVal_14 + 0x28);
          pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_10;
        }
        local_98._0_8_ = pU64_13;
      }
      local_88 = (uint32_t)sz_8;
      uStack_84 = (uint32_t)(sz_8 >> 0x20);
      uStack_80 = (uint32_t)uVal_14;
      uStack_7c = (uint32_t)(uVal_14 >> 0x20);
      func_0x1806aa960(pU64_13,_Str_00,sz_8);
      pU64_13[sz_8] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xfb80) == '\0') {
        lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_10 + 0xfb80) = 1;
        *(uint64_t *)(lVal_10 + 0xfb78) = 0x1aba8c8e6cfa8d1;
        func_0x180673140(&LAB_1803683d0);
      }
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_10 + 0xfb78);
      if (*(char *)(lVal_10 + 0xfb7f) == '\x01') {
        *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_10 + 0xfb7d) << 8,*(uint32_t *)pU64_1) |
                  (uint64_t)*(byte *)(lVal_10 + 0xfb7c) << 0x20) ^ SUB168(_DAT_1806b5ce0,0);
      }
      local_c8 = (uint8_t  [16])0x0;
      sz_8 = strlen((char *)pU64_1);
      if ((int64_t)sz_8 < 0) {
        local_51 = 1;
        func_0x18007ba70();
        fnPtr_3 = (func_ptr_t )swi(3);
        pU64_11 = (uint64_t *)(*fnPtr_3)();
        return pU64_11;
      }
      if (sz_8 < 0x10) {
        pU64_13 = local_c8;
        uVal_14 = 0xf;
      }
      else {
        uVal_9 = sz_8 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_9) {
          uVal_14 = uVal_9;
        }
        if (uVal_9 < 0xfff) {
          local_51 = 1;
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
        }
        else {
          local_51 = 1;
          lVal_10 = func_0x180672de0(uVal_14 + 0x28);
          pU64_13 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_10;
        }
        local_c8._0_8_ = pU64_13;
      }
      local_b8 = sz_8;
      local_b0 = uVal_14;
      func_0x1806aa960(pU64_13,pU64_1,sz_8);
      pU64_13[sz_8] = 0;
      func_0x1801cd2e0(local_60,local_c8,local_98,pU64_11 + 0x10,uVal_2,0,0x3f800000,local_108,0);
      if (0xf < local_b0) {
        uVal_14 = local_b0 + 1;
        lVal_10 = local_c8._0_8_;
        if (0xfff < uVal_14) {
          lVal_10 = *(int64_t *)(local_c8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_c8._0_8_ + -8) - lVal_10)) goto LAB_18033becb;
          uVal_14 = local_b0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_14);
      }
      pU64_11 = local_60;
      uVal_14 = CONCAT44(uStack_7c,uStack_80);
      if (0xf < uVal_14) {
        uVal_9 = uVal_14 + 1;
        lVal_10 = local_98._0_8_;
        if (0xfff < uVal_9) {
          lVal_10 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_10)) goto LAB_18033becb;
          uVal_9 = uVal_14 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_9);
      }
      return pU64_11;
    }
  }
  local_52 = 1;
  func_0x18007ba70();
LAB_18033becb:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18033bee0
void Unwind_18033bee0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18033bf30
void Unwind_18033bf30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18033bf70
void Unwind_18033bf70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x90);
  *(uint8_t *)(param_2 + 0x107) = 0;
  return;
}

// Unwind@18033bfb0
void Unwind_18033bfb0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x107);
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0x106) = uVal_1;
  return;
}

// Unwind@18033c000
void Unwind_18033c000(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x106) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@18033c060
void Unwind_18033c060(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xb8));
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xf8));
  return;
}

// Unwind@18033c0b0
void Unwind_18033c0b0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfb58) = 0;
  return;
}

// Unwind@18033c3c0
void Unwind_18033c3c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfbbc) = 0;
  return;
}

// func_0x18033c400
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void func_0x18033c400(int64_t param_1)
{
  int64_t ****ptr4_Long_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint64_t *pU64_4;
  uint8_t auArr_5 [16];
  uint8_t auArr_6 [16];
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint8_t auArr_9 [16];
  uint8_t auArr_10 [16];
  uint8_t auArr_11 [16];
  int64_t ******ptr6_Long_12;
  char ch_13;
  uint cchWideChar;
  int iVal_14;
  size_t sz_15;
  int64_t *****ptr5_Long_16;
  uint8_t (*pArr16_17)[16];
  uint64_t *pU64_18;
  uint64_t uVal_19;
  int64_t lVal_20;
  uint64_t *pU64_21;
  uint64_t uVal_22;
  int64_t lVal_23;
  LPWSTR pWStr_24;
  uint64_t *****ptr5_U64_25;
  uint64_t ******ptr6_U64_26;
  uint8_t *pU64_27;
  uint64_t *pU64_28;
  int64_t ****ptr4_Long_29;
  int64_t *****ptr5_Long_30;
  uint64_t uVal_31;
  uint64_t *pU64_32;
  uint64_t *pU64_33;
  int64_t ******local_130 [4];
  int64_t ******local_110 [5];
  uint64_t ******local_e8;
  uint64_t uStack_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  int64_t ******local_c8;
  int64_t ******local_c0;
  uint64_t local_b8;
  char *local_b0;
  uint64_t local_a8;
  int64_t ******local_a0;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [16];
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint8_t local_68 [24];
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xfbc8) == '\0') {
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_23 + 0xfbc8) = 1;
    *(uint64_t *)(lVal_23 + 0xfbc0) = 0x1191db6641b9276;
    func_0x180673140(&LAB_180368460);
  }
  lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_28 = (uint64_t *)(lVal_23 + 0xfbc0);
  if (*(char *)(lVal_23 + 0xfbc7) == '\x01') {
    *pU64_28 = (CONCAT44((uint)*(ushort *)(lVal_23 + 0xfbc5) << 8,*(uint32_t *)pU64_28) |
               (uint64_t)*(byte *)(lVal_23 + 0xfbc4) << 0x20) ^ SUB168(_DAT_1806ae7d0,0);
  }
  _local_78 = (uint8_t  [16])0x0;
  sz_15 = strlen((char *)pU64_28);
  if ((int64_t)sz_15 < 0) {
    func_0x18007ba70();
LAB_18033d17a:
    func_0x18007ba70();
LAB_18033d180:
    iVal_14 = func_0x18007ba70();
LAB_18033d186:
    iVal_14 = func_0x180090aa0(iVal_14,local_78);
  }
  else {
    if (sz_15 < 0x10) {
      pU64_27 = local_78;
      uVal_31 = 0xf;
    }
    else {
      uVal_19 = sz_15 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_19) {
        uVal_31 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        pU64_27 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_31 + 0x28);
        pU64_27 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_27 + -8) = lVal_23;
      }
      local_78 = (uint8_t  [8])pU64_27;
    }
    local_68._0_8_ = sz_15;
    local_68._8_8_ = uVal_31;
    func_0x1806aa960(pU64_27,pU64_28,sz_15);
    pU64_27[sz_15] = 0;
    ptr5_Long_16 = (int64_t *****)func_0x1800becb0();
    ptr4_Long_1 = ptr5_Long_16[2];
    if ((int64_t ****)0xf < ptr5_Long_16[3]) {
      ptr5_Long_16 = (int64_t *****)*ptr5_Long_16;
    }
    if ((int64_t ****)(local_68._8_8_ - local_68._0_8_) < ptr4_Long_1) {
      pArr16_17 = (uint8_t (*)[16])
                 func_0x1800871a0(local_78,ptr4_Long_1,local_68._0_8_,0,ptr5_Long_16,ptr4_Long_1);
    }
    else {
      ptr4_Long_29 = ptr4_Long_1;
      if ((uint64_t)local_68._8_8_ < 0x10) {
        ptr5_Long_30 = (int64_t *****)local_78;
        if (ptr5_Long_30 < (int64_t *****)((int64_t)ptr5_Long_16 + (int64_t)ptr4_Long_1))
        goto LAB_18033c5c3;
      }
      else {
        ptr5_Long_30 = (int64_t *****)local_78;
        if ((uint64_t)local_78 < (int64_t *****)((int64_t)ptr5_Long_16 + (int64_t)ptr4_Long_1)) {
LAB_18033c5c3:
          if ((ptr5_Long_16 <= (int64_t *****)((int64_t)ptr5_Long_30 + local_68._0_8_)) &&
             (ptr4_Long_29 = (int64_t ****)((int64_t)ptr5_Long_30 - (int64_t)ptr5_Long_16),
             ptr5_Long_30 < ptr5_Long_16 ||
             (int64_t ****)((int64_t)ptr5_Long_30 - (int64_t)ptr5_Long_16) == (int64_t ****)0x0))
          {
            ptr4_Long_29 = (int64_t ****)0x0;
          }
        }
      }
      lVal_23 = local_68._0_8_ + 1;
      local_68._0_8_ = local_68._0_8_ + (int64_t)ptr4_Long_1;
      func_0x1806aa960((int64_t)ptr5_Long_30 + (int64_t)ptr4_Long_1,ptr5_Long_30,lVal_23);
      func_0x1806aa960(ptr5_Long_30,ptr5_Long_16,ptr4_Long_29);
      func_0x1806aa960((int64_t)ptr5_Long_30 + (int64_t)ptr4_Long_29,
                    (int64_t)ptr5_Long_16 + (int64_t)ptr4_Long_29 + (int64_t)ptr4_Long_1,
                    (int64_t)ptr4_Long_1 - (int64_t)ptr4_Long_29);
      pArr16_17 = (uint8_t (*)[16])local_78;
    }
    lVal_23 = param_1 + 0x88;
    pU64_28 = *(uint64_t **)*pArr16_17;
    _local_98 = *pArr16_17;
    lVal_3 = *(int64_t *)pArr16_17[1];
    uVal_19 = *(uint64_t *)(pArr16_17[1] + 8);
    local_88 = pArr16_17[1];
    *(uint64_t *)pArr16_17[1] = 0;
    *(uint64_t *)(pArr16_17[1] + 8) = 0xf;
    (*pArr16_17)[0] = 0;
    uVal_31 = *(uint64_t *)(param_1 + 0x98);
    lVal_20 = lVal_23;
    if (0xf < *(uint64_t *)(param_1 + 0xa0)) {
      lVal_20 = *(int64_t *)(param_1 + 0x88);
    }
    if (uVal_19 - lVal_3 < uVal_31) {
      pU64_18 = (uint64_t *)func_0x180082950(local_98,uVal_31,uVal_31,lVal_20,uVal_31);
    }
    else {
      local_88._8_8_ = uVal_19;
      local_88._0_8_ = lVal_3 + uVal_31;
      pU64_18 = (uint64_t *)local_98;
      pU64_32 = pU64_18;
      if (0xf < uVal_19) {
        pU64_32 = pU64_28;
      }
      func_0x1806aa960((uint8_t *)(lVal_3 + (int64_t)pU64_32),lVal_20);
      *(uint8_t *)((int64_t)pU64_32 + lVal_3 + uVal_31) = 0;
    }
    local_e8 = (uint64_t ******)*pU64_18;
    uStack_e0 = pU64_18[1];
    local_d8 = pU64_18[2];
    uStack_d0 = pU64_18[3];
    pU64_18[2] = 0;
    pU64_18[3] = 0xf;
    *(uint8_t *)pU64_18 = 0;
    ch_13 = func_0x1800be560(&local_e8,0);
    if (0xf < uStack_d0) {
      uVal_31 = uStack_d0 + 1;
      ptr5_U64_25 = local_e8;
      if (0xfff < uVal_31) {
        ptr5_U64_25 = local_e8[-1];
        if (0x1f < (uint64_t)((int64_t)local_e8 + (-8 - (int64_t)ptr5_U64_25)))
        goto LAB_18033d172;
        uVal_31 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(ptr5_U64_25,uVal_31);
    }
    local_d8 = 0;
    uStack_d0 = 0xf;
    local_e8 = (uint64_t ******)((uint64_t)local_e8 & 0xffffffffffffff00);
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_31 = local_88._8_8_ + 1;
      uVal_19 = (uint64_t)local_98;
      if (0xfff < uVal_31) {
        uVal_19 = *(uint64_t *)((int64_t)local_98 - 8);
        if (0x1f < ((int64_t)local_98 - 8U) - uVal_19) goto LAB_18033d172;
        uVal_31 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(uVal_19,uVal_31);
    }
    local_88 = ZEXT816(0xf) << 0x40;
    auArr_5[15] = 0;
    auArr_5._0_15_ = stack0xffffffffffffff69;
    _local_98 = auArr_5 << 8;
    if (0xf < (uint64_t)local_68._8_8_) {
      uVal_31 = local_68._8_8_ + 1;
      ptr5_Long_16 = (int64_t *****)local_78;
      if (0xfff < uVal_31) {
        ptr5_Long_16 = *(int64_t ******)((int64_t)local_78 + -8);
        if (0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr5_Long_16)))
        goto LAB_18033d172;
        uVal_31 = local_68._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(ptr5_Long_16,uVal_31);
    }
    if (ch_13 == '\0') {
      return;
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfbd8) == '\0') {
      lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_20 + 0xfbd8) = 1;
      *(uint64_t *)(lVal_20 + 0xfbd0) = 0x177472a90f54ec6;
      func_0x180673140(&LAB_180368490);
    }
    lVal_20 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_28 = (uint64_t *)(lVal_20 + 0xfbd0);
    if (*(char *)(lVal_20 + 0xfbd7) == '\x01') {
      *pU64_28 = (CONCAT44((uint)*(ushort *)(lVal_20 + 0xfbd5) << 8,*(uint32_t *)pU64_28) |
                 (uint64_t)*(byte *)(lVal_20 + 0xfbd4) << 0x20) ^ SUB168(_DAT_1806b6770,0);
    }
    local_68._0_16_ = (uint8_t  [16])0x0;
    _local_78 = (uint8_t  [16])0x0;
    sz_15 = strlen((char *)pU64_28);
    if ((int64_t)sz_15 < 0) goto LAB_18033d17a;
    if (sz_15 < 0x10) {
      pU64_27 = local_78;
      uVal_31 = 0xf;
    }
    else {
      uVal_19 = sz_15 | 0xf;
      uVal_31 = 0x16;
      if (0x16 < uVal_19) {
        uVal_31 = uVal_19;
      }
      if (uVal_19 < 0xfff) {
        pU64_27 = (uint8_t *)func_0x180672de0(uVal_31 + 1);
      }
      else {
        lVal_20 = func_0x180672de0(uVal_31 + 0x28);
        pU64_27 = (uint8_t *)(lVal_20 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_27 + -8) = lVal_20;
      }
      local_78 = (uint8_t  [8])pU64_27;
    }
    local_68._8_8_ = uVal_31;
    local_68._0_8_ = sz_15;
    func_0x1806aa960(pU64_27,pU64_28,sz_15);
    pU64_27[sz_15] = 0;
    ptr5_Long_16 = (int64_t *****)func_0x1800becb0();
    ptr4_Long_1 = ptr5_Long_16[2];
    if ((int64_t ****)0xf < ptr5_Long_16[3]) {
      ptr5_Long_16 = (int64_t *****)*ptr5_Long_16;
    }
    lVal_20 = local_68._0_8_;
    if ((int64_t ****)(local_68._8_8_ - local_68._0_8_) < ptr4_Long_1) {
      pArr16_17 = (uint8_t (*)[16])
                 func_0x1800871a0(local_78,ptr4_Long_1,local_68._0_8_,0,ptr5_Long_16,ptr4_Long_1);
    }
    else {
      local_68._0_8_ = local_68._0_8_ + (int64_t)ptr4_Long_1;
      ptr4_Long_29 = ptr4_Long_1;
      if ((uint64_t)local_68._8_8_ < 0x10) {
        ptr5_Long_30 = (int64_t *****)local_78;
        if (ptr5_Long_30 < (int64_t *****)((int64_t)ptr5_Long_16 + (int64_t)ptr4_Long_1))
        goto LAB_18033c9b1;
      }
      else {
        ptr5_Long_30 = (int64_t *****)local_78;
        if ((uint64_t)local_78 < (int64_t *****)((int64_t)ptr5_Long_16 + (int64_t)ptr4_Long_1)) {
LAB_18033c9b1:
          if ((ptr5_Long_16 <= (int64_t *****)((int64_t)ptr5_Long_30 + lVal_20)) &&
             (ptr4_Long_29 = (int64_t ****)((int64_t)ptr5_Long_30 - (int64_t)ptr5_Long_16),
             ptr5_Long_30 < ptr5_Long_16 ||
             (int64_t ****)((int64_t)ptr5_Long_30 - (int64_t)ptr5_Long_16) == (int64_t ****)0x0))
          {
            ptr4_Long_29 = (int64_t ****)0x0;
          }
        }
      }
      func_0x1806aa960((int64_t)ptr5_Long_30 + (int64_t)ptr4_Long_1,ptr5_Long_30,lVal_20 + 1);
      func_0x1806aa960(ptr5_Long_30,ptr5_Long_16,ptr4_Long_29);
      func_0x1806aa960((int64_t)ptr5_Long_30 + (int64_t)ptr4_Long_29,
                    (int64_t)ptr5_Long_16 + (int64_t)ptr4_Long_29 + (int64_t)ptr4_Long_1,
                    (int64_t)ptr4_Long_1 - (int64_t)ptr4_Long_29);
      pArr16_17 = (uint8_t (*)[16])local_78;
    }
    pU64_4 = *(uint64_t **)*pArr16_17;
    _local_98 = *pArr16_17;
    lVal_20 = *(int64_t *)pArr16_17[1];
    uVal_19 = *(uint64_t *)(pArr16_17[1] + 8);
    local_88 = pArr16_17[1];
    *(uint64_t *)pArr16_17[1] = 0;
    *(uint64_t *)(pArr16_17[1] + 8) = 0xf;
    (*pArr16_17)[0] = 0;
    uVal_31 = *(uint64_t *)(param_1 + 0x98);
    if (0xf < *(uint64_t *)(param_1 + 0xa0)) {
      lVal_23 = *(int64_t *)(param_1 + 0x88);
    }
    if (uVal_19 - lVal_20 < uVal_31) {
      pU64_21 = (uint64_t *)func_0x180082950(local_98,uVal_31,uVal_31,lVal_23,uVal_31);
    }
    else {
      local_88._8_8_ = uVal_19;
      local_88._0_8_ = lVal_20 + uVal_31;
      pU64_21 = (uint64_t *)local_98;
      pU64_33 = pU64_21;
      if (0xf < uVal_19) {
        pU64_33 = pU64_4;
      }
      func_0x1806aa960((uint8_t *)(lVal_20 + (int64_t)pU64_33));
      *(uint8_t *)((int64_t)pU64_33 + lVal_20 + uVal_31) = 0;
    }
    local_e8 = (uint64_t ******)*pU64_21;
    uStack_e0 = pU64_21[1];
    local_d8 = pU64_21[2];
    uStack_d0 = pU64_21[3];
    pU64_21[2] = 0;
    pU64_21[3] = 0xf;
    *(uint8_t *)pU64_21 = 0;
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_31 = (uint64_t)local_98;
      if ((0xfff < local_88._8_8_ + 1) &&
         (uVal_31 = *(uint64_t *)((int64_t)local_98 - 8), 0x1f < ((int64_t)local_98 - 8U) - uVal_31
         )) goto LAB_18033d172;
      thunk_FUN_180695dd0(uVal_31);
    }
    local_88 = ZEXT816(0xf) << 0x40;
    auArr_6[15] = 0;
    auArr_6._0_15_ = stack0xffffffffffffff69;
    _local_98 = auArr_6 << 8;
    if (0xf < (uint64_t)local_68._8_8_) {
      ptr5_Long_16 = (int64_t *****)local_78;
      if ((0xfff < local_68._8_8_ + 1) &&
         (ptr5_Long_16 = *(int64_t ******)((int64_t)local_78 + -8),
         0x1f < (uint64_t)((int64_t)local_78 + (-8 - (int64_t)ptr5_Long_16)))) goto LAB_18033d172;
      thunk_FUN_180695dd0(ptr5_Long_16);
    }
    ptr6_U64_26 = &local_e8;
    if (0xf < uStack_d0) {
      ptr6_U64_26 = local_e8;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)ptr6_U64_26,(int)local_d8,(LPWSTR)0x0,0);
    _local_98 = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    if ((int)cchWideChar < 0) goto LAB_18033d180;
    uVal_31 = (uint64_t)(int)cchWideChar;
    if (cchWideChar < 8) {
      local_88._8_8_ = 7;
      local_88._0_8_ = uVal_31;
      pU64_27 = local_98;
      if (cchWideChar != 0) goto LAB_18033cc56;
    }
    else {
      uVal_22 = uVal_31 | 7;
      uVal_19 = 10;
      if (10 < uVal_22) {
        uVal_19 = uVal_22;
      }
      if (uVal_22 < 0x7ff) {
        pU64_27 = (uint8_t *)func_0x180672de0(uVal_19 * 2 + 2);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_19 * 2 + 0x29);
        pU64_27 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_27 + -8) = lVal_23;
      }
      local_98 = (uint8_t  [8])pU64_27;
      local_88._8_8_ = uVal_19;
      local_88._0_8_ = uVal_31;
LAB_18033cc56:
      func_0x1806ab010(pU64_27,0,uVal_31 * 2);
    }
    *(uint16_t *)(pU64_27 + uVal_31 * 2) = 0;
    pWStr_24 = (LPWSTR)local_98;
    if (7 < (uint64_t)local_88._8_8_) {
      pWStr_24 = (LPWSTR)local_98;
    }
    ptr6_U64_26 = local_e8;
    if (uStack_d0 < 0x10) {
      ptr6_U64_26 = &local_e8;
    }
    pU64_28 = (uint64_t *)0x0;
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ptr6_U64_26,(int)local_d8,pWStr_24,cchWideChar);
    lVal_23 = _DAT_18083ff88;
    pWStr_24 = (LPWSTR)local_98;
    if (7 < (uint64_t)local_88._8_8_) {
      pWStr_24 = (LPWSTR)local_98;
    }
    if (local_88._0_4_ != 0) {
      if (pWStr_24[local_88._0_8_ & 0xffffffff] != L'\0') goto LAB_18033d1a4;
      pU64_28 = &uStack_70;
      uStack_70._0_4_ = 1;
      uStack_70._4_4_ = local_88._0_4_;
      local_68._8_8_ = pWStr_24;
    }
    local_78 = (uint8_t  [8])pU64_28;
    local_c8 = (int64_t ******)local_78;
    LOCK();
    _DAT_18083ff88 = _DAT_18083ff88 + 1;
    UNLOCK();
    if (DAT_18083ff80 != (int64_t *)0x0) {
      local_a0 = (int64_t ******)0x0;
      local_b8 = (int64_t ******)CONCAT44(local_b8._4_4_,0x93d);
      local_b0 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Foundation.h"
      ;
      local_a8 = 0;
      iVal_14 = (**(func_ptr_t *)(*DAT_18083ff80 + 0x30))(DAT_18083ff80,pU64_28,&local_a0);
      if (-1 < iVal_14) {
        local_b8 = local_a0;
        LOCK();
        _DAT_18083ff88 = _DAT_18083ff88 + -1;
        UNLOCK();
        goto LAB_18033cd89;
      }
      iVal_14 = func_0x180090aa0(iVal_14,&local_b8);
LAB_18033d1b6:
      iVal_14 = func_0x180090aa0(iVal_14,&local_b8);
LAB_18033d1c2:
      iVal_14 = func_0x180090aa0(iVal_14,local_78);
LAB_18033d1d1:
      func_0x180090aa0(iVal_14,local_78);
      fnPtr_2 = (func_ptr_t )swi(3);
      (*fnPtr_2)();
      return;
    }
    LOCK();
    UNLOCK();
    _DAT_18083ff88 = lVal_23;
    func_0x1803686f0(&DAT_18083ff80,&local_b8,&local_c8);
LAB_18033cd89:
    ptr6_Long_12 = local_b8;
    lVal_23 = _DAT_18083ff68;
    local_c0 = local_b8;
    local_c8 = (int64_t ******)&local_c0;
    LOCK();
    _DAT_18083ff68 = _DAT_18083ff68 + 1;
    UNLOCK();
    if (DAT_18083ff60 == (int64_t *)0x0) {
      LOCK();
      UNLOCK();
      _DAT_18083ff68 = lVal_23;
      func_0x1803684c0(&DAT_18083ff60,local_130,&local_c8);
    }
    else {
      local_a0 = (int64_t ******)0x0;
      local_b8 = (int64_t ******)CONCAT44(local_b8._4_4_,0xb99);
      local_b0 = 
      "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Media.Core.h"
      ;
      local_a8 = 0;
      iVal_14 = (**(func_ptr_t *)(*DAT_18083ff60 + 0x68))(DAT_18083ff60,ptr6_Long_12,&local_a0);
      if (iVal_14 < 0) goto LAB_18033d1b6;
      local_130[0] = local_a0;
      LOCK();
      _DAT_18083ff68 = _DAT_18083ff68 + -1;
      UNLOCK();
    }
    if (local_c0 != (int64_t ******)0x0) {
      func_0x180091220(&local_c0);
    }
    lVal_23 = _DAT_18083ffa8;
    LOCK();
    _DAT_18083ffa8 = _DAT_18083ffa8 + 1;
    UNLOCK();
    if (DAT_18083ffa0 == (int64_t *)0x0) {
      LOCK();
      UNLOCK();
      local_78 = (uint8_t  [8])&LAB_180368ac0;
      _DAT_18083ffa8 = lVal_23;
      func_0x180368920(&DAT_18083ffa0,local_110,local_78);
    }
    else {
      local_b8 = (int64_t ******)0x0;
      local_78._0_4_ = 0x2c;
      uStack_70 = (uint64_t)
                  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Media.Playback.h"
      ;
      auArr_7._8_8_ = 0;
      auArr_7._0_8_ = local_68._8_8_;
      local_68._0_16_ = auArr_7 << 0x40;
      iVal_14 = (**(func_ptr_t *)(*DAT_18083ffa0 + 0x30))(DAT_18083ffa0,&local_b8);
      if (iVal_14 < 0) goto LAB_18033d1c2;
      local_110[0] = local_b8;
      LOCK();
      _DAT_18083ffa8 = _DAT_18083ffa8 + -1;
      UNLOCK();
    }
    lVal_23 = _DAT_18083ffc8;
    local_a0 = (int64_t ******)local_130;
    LOCK();
    _DAT_18083ffc8 = _DAT_18083ffc8 + 1;
    UNLOCK();
    if (DAT_18083ffc0 == (int64_t *)0x0) {
      LOCK();
      UNLOCK();
      _DAT_18083ffc8 = lVal_23;
      func_0x180368b50(&DAT_18083ffc0,local_78,&local_a0);
    }
    else {
      local_b8 = (int64_t ******)0x0;
      local_78._0_4_ = 0xaee;
      uStack_70 = (uint64_t)
                  "C:\\Program Files (x86)\\Windows Kits\\10\\\\include\\10.0.26100.0\\\\cppwinrt\\winrt/Windows.Media.Playback.h"
      ;
      auArr_8._8_8_ = 0;
      auArr_8._0_8_ = local_68._8_8_;
      local_68._0_16_ = auArr_8 << 0x40;
      iVal_14 = (**(func_ptr_t *)(*DAT_18083ffc0 + 0x30))(DAT_18083ffc0,local_130[0],&local_b8);
      if (iVal_14 < 0) goto LAB_18033d1d1;
      local_78 = (uint8_t  [8])local_b8;
      LOCK();
      _DAT_18083ffc8 = _DAT_18083ffc8 + -1;
      UNLOCK();
    }
    ptr6_Long_12 = (int64_t ******)local_78;
    local_b8 = (int64_t ******)local_78;
    if (local_78 == (uint8_t  [8])0x0) {
      local_78 = (uint8_t  [8])0x0;
    }
    else {
      auArr_9._8_8_ = 0;
      auArr_9._0_8_ = uStack_70;
      _local_78 = auArr_9 << 0x40;
      (*(func_ptr_t )**ptr6_Long_12)(ptr6_Long_12,&DAT_1806c8000,local_78);
    }
    func_0x18033d810(local_110,local_78);
    if (local_78 != (uint8_t  [8])0x0) {
      func_0x180091220(local_78);
    }
    if (local_b8 != (int64_t ******)0x0) {
      func_0x180091220(&local_b8);
    }
    local_78._0_4_ = 0x1353;
    uStack_70 = (uint64_t)
                "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Media.Playback.h"
    ;
    auArr_11._8_8_ = 0;
    auArr_11._0_8_ = local_68._8_8_;
    local_68._0_16_ = auArr_11 << 0x40;
    iVal_14 = (*(func_ptr_t )(*local_110[0])[0x17])(local_110[0],(double)*(float *)(param_1 + 0x80));
    if (iVal_14 < 0) goto LAB_18033d186;
    local_78._0_4_ = 0x14f1;
    uStack_70 = (uint64_t)
                "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Media.Playback.h"
    ;
    auArr_10._8_8_ = 0;
    auArr_10._0_8_ = local_68._8_8_;
    local_68._0_16_ = auArr_10 << 0x40;
    iVal_14 = (*(func_ptr_t )(*local_110[0])[0x2d])();
    if (-1 < iVal_14) {
      if (local_110[0] != (int64_t ******)0x0) {
        func_0x180091220(local_110);
      }
      if (local_130[0] != (int64_t ******)0x0) {
        func_0x180091220(local_130);
      }
      if (7 < (uint64_t)local_88._8_8_) {
        uVal_31 = local_88._8_8_ * 2 + 2;
        uVal_19 = (uint64_t)local_98;
        if (0xfff < uVal_31) {
          uVal_19 = *(uint64_t *)((int64_t)local_98 - 8);
          if (0x1f < ((int64_t)local_98 - 8U) - uVal_19) goto LAB_18033d172;
          uVal_31 = local_88._8_8_ * 2 + 0x29;
        }
        thunk_FUN_180695dd0(uVal_19,uVal_31);
      }
      if (0xf < uStack_d0) {
        uVal_31 = uStack_d0 + 1;
        ptr6_U64_26 = local_e8;
        if (0xfff < uVal_31) {
          ptr6_U64_26 = (uint64_t ******)local_e8[-1];
          if (0x1f < (uint64_t)((int64_t)local_e8 + (-8 - (int64_t)ptr6_U64_26))) {
LAB_18033d172:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_31 = uStack_d0 + 0x28;
        }
        thunk_FUN_180695dd0(ptr6_U64_26,uVal_31);
      }
      return;
    }
  }
  func_0x180090aa0(iVal_14,local_78);
LAB_18033d1a4:
                    /* WARNING: Subroutine does not return */
  abort();
}

// Unwind@18033d1f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_18033d1f0(void)
{
  LOCK();
  _DAT_18083ff88 = _DAT_18083ff88 + -1;
  UNLOCK();
  return;
}

// Unwind@18033d230
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_18033d230(void)
{
  LOCK();
  _DAT_18083ff68 = _DAT_18083ff68 + -1;
  UNLOCK();
  return;
}

// Unwind@18033d270
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_18033d270(void)
{
  LOCK();
  _DAT_18083ffa8 = _DAT_18083ffa8 + -1;
  UNLOCK();
  return;
}

// Unwind@18033d2b0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_18033d2b0(void)
{
  LOCK();
  _DAT_18083ffc8 = _DAT_18083ffc8 + -1;
  UNLOCK();
  return;
}

// Unwind@18033d2f0
void Unwind_18033d2f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18033d330
void Unwind_18033d330(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18033d370
void Unwind_18033d370(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@18033d3b0
void Unwind_18033d3b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18033d3f0
void Unwind_18033d3f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@18033d430
void Unwind_18033d430(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0xd8) != 0) {
    func_0x180091220(param_2 + 0xd8);
  }
  return;
}

// Unwind@18033d470
void Unwind_18033d470(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x120) != 0) {
    func_0x180091220(param_2 + 0x120);
  }
  if (*(int64_t *)(param_2 + 0xe0) != 0) {
    func_0x180091220(param_2 + 0xe0);
  }
  return;
}

// Unwind@18033d4d0
void Unwind_18033d4d0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x88) != 0) {
    func_0x180091220(param_2 + 0x88);
  }
  return;
}

// Unwind@18033d510
void Unwind_18033d510(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x68) != 0) {
    func_0x180091220(param_2 + 0x68);
  }
  return;
}

// Unwind@18033d550
void Unwind_18033d550(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x100);
  return;
}

// Unwind@18033d590
void Unwind_18033d590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Catch@18033d5d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t Catch_18033d5d0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  uint8_t *pU64_4;
  
  lVal_2 = DAT_180840a58;
  *(uint8_t **)(param_2 + 0x68) = &DAT_28d0f803f34a0611;
  uVal_1 = *(uint64_t *)
           ((((*(uint64_t *)(param_2 + 0x68) ^ 0xd1631bc266) + 0x443450bf0 ^ 0x779d0cf4) /
             0x4179506e6 - 0x7a6de5f ^ 0x25297bc) + lVal_2);
  func_0x18033da50(*(uint64_t *)(param_2 + 0x150),param_2 + 0xa8);
  if (*(int64_t *)(param_2 + 0xa8) == 0) {
    pU64_4 = &DAT_1807614ee;
  }
  else {
    pU64_4 = *(uint8_t **)(*(int64_t *)(param_2 + 0xa8) + 0x10);
  }
  func_0x18033dcc0(param_2 + 0x68,pU64_4);
  func_0x18033d8f0(param_2 + 0x30,param_2 + 0x68);
  uVal_3 = _UNK_1806b6f38;
  *(uint8_t **)(param_2 + 0x50) = PTR_DAT_1806b6f30;
  *(uint64_t *)(param_2 + 0x58) = uVal_3;
  *(uint8_t *)(param_2 + 0x147) = 1;
  uVal_3 = func_0x18033ddc0();
  func_0x180370310(uVal_3);
  *(uint8_t *)(param_2 + 0x147) = 1;
  func_0x180001060(param_2 + 0x88,uVal_3);
  func_0x180143b90(uVal_1,param_2 + 0x88,param_2 + 0x50,param_2 + 0x30);
  func_0x180001e70(param_2 + 0x88);
  func_0x1800565c0(param_2 + 0x68);
  func_0x18033de90(param_2 + 0xa8);
  return 0x18033d0e6;
}

// Unwind@18033d710
void Unwind_18033d710(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x88);
  *(uint8_t *)(param_2 + 0x147) = 0;
  return;
}

// Unwind@18033d750
void Unwind_18033d750(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x147) == '\x01') {
    func_0x180001e70(param_2 + 0x30);
  }
  return;
}

// Unwind@18033d790
void Unwind_18033d790(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x68);
  return;
}

// Unwind@18033d7d0
void Unwind_18033d7d0(uint64_t param_1,int64_t param_2)
{
  func_0x18033de90(param_2 + 0xa8);
  return;
}

// func_0x18033d810
void func_0x18033d810(uint64_t *param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  int64_t *pLong_2;
  int iVal_3;
  uint64_t local_38;
  char *local_30;
  uint64_t local_28;
  int64_t *local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_38 = (int64_t *)0x0;
  iVal_3 = (***(func_ptr_t **)(uint64_t *)*param_1)((uint64_t *)*param_1,&DAT_1806c7300,&local_38);
  pLong_2 = local_38;
  local_20 = local_38;
  local_38 = (int64_t *)CONCAT44(local_38._4_4_,0x18d4);
  local_30 = 
  "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Media.Playback.h"
  ;
  local_28 = 0;
  if (iVal_3 < 0) {
    iVal_3 = func_0x180090aa0(iVal_3,&local_38);
  }
  else {
    local_38 = (int64_t *)CONCAT44(local_38._4_4_,0x18d6);
    local_30 = 
    "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.26100.0\\cppwinrt\\winrt\\Windows.Media.Playback.h"
    ;
    local_28 = 0;
    iVal_3 = (**(func_ptr_t *)(*pLong_2 + 0x38))(pLong_2,*param_2);
    if (-1 < iVal_3) {
      if (local_20 != (int64_t *)0x0) {
        func_0x180091220(&local_20);
      }
      return;
    }
  }
  func_0x180090aa0(iVal_3,&local_38);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033d8c0
void Unwind_18033d8c0(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    func_0x180091220(param_2 + 0x38);
  }
  return;
}

// func_0x18033d8f0
uint8_t (*func_0x18033d8f0(uint8_t (*param_1)[16],uint64_t *param_2))[16]
{
  int cchWideChar;
  func_ptr_t fnPtr_1;
  uint cbMultiByte;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t *lpWideCharStr;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t (*pArr16_6)[16];
  
  if (param_2[2] == 0) {
    *param_1 = ZEXT816(0);
    *(uint64_t *)param_1[1] = 0;
    *(uint64_t *)(param_1[1] + 8) = 0xf;
  }
  else {
    lpWideCharStr = param_2;
    if (7 < (uint64_t)param_2[3]) {
      lpWideCharStr = (uint64_t *)*param_2;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,(LPCWSTR)lpWideCharStr,(int)param_2[2],(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    *param_1 = ZEXT816(0);
    if ((int)cbMultiByte < 0) {
      func_0x18007ba70();
      fnPtr_1 = (func_ptr_t )swi(3);
      pArr16_6 = (uint8_t (*)[16])(*fnPtr_1)();
      return pArr16_6;
    }
    uVal_5 = (uint64_t)(int)cbMultiByte;
    uVal_4 = 0xf;
    pArr16_6 = param_1;
    if (0xf < cbMultiByte) {
      uVal_2 = uVal_5 | 0xf;
      uVal_4 = 0x16;
      if (0x16 < uVal_2) {
        uVal_4 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        pArr16_6 = (uint8_t (*)[16])func_0x180672de0(uVal_4 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_4 + 0x28);
        pArr16_6 = (uint8_t (*)[16])(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_6[-1] + 8) = lVal_3;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_6;
    }
    *(uint64_t *)param_1[1] = uVal_5;
    *(uint64_t *)(param_1[1] + 8) = uVal_4;
    func_0x1806ab010(pArr16_6,0,uVal_5);
    (*pArr16_6)[uVal_5] = 0;
    if (*(uint64_t *)(param_1[1] + 8) < 0x10) {
      cchWideChar = *(int *)(param_2 + 2);
      uVal_4 = param_2[3];
      pArr16_6 = param_1;
    }
    else {
      pArr16_6 = *(uint8_t (**)[16])*param_1;
      cchWideChar = *(int *)(param_2 + 2);
      uVal_4 = param_2[3];
    }
    if (7 < uVal_4) {
      param_2 = (uint64_t *)*param_2;
    }
    WideCharToMultiByte(0xfde9,0,(LPCWSTR)param_2,cchWideChar,(LPSTR)pArr16_6,cbMultiByte,(LPCSTR)0x0
                        ,(LPBOOL)0x0);
  }
  return param_1;
}

// func_0x18033da50
uint64_t * func_0x18033da50(int64_t param_1,uint64_t *param_2)
{
  int64_t *pLong_1;
  bool bFlag_2;
  int64_t lVal_3;
  LPVOID pVoid_4;
  int iVal_5;
  uint uVal_6;
  DWORD DVar7;
  uint64_t uVal_8;
  HANDLE hHeap;
  uint16_t *pU64_9;
  int64_t local_60;
  int64_t local_58;
  int local_4c;
  LPVOID local_48;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  pLong_1 = *(int64_t **)(param_1 + 0x10);
  if (pLong_1 != (int64_t *)0x0) {
    local_4c = 0;
    local_48 = (LPVOID)0x0;
    local_58 = 0;
    local_60 = 0;
    iVal_5 = (**(func_ptr_t *)(*pLong_1 + 0x18))(pLong_1,&local_48,&local_4c,&local_58,&local_60);
    bFlag_2 = true;
    if ((iVal_5 == 0) && (local_4c == *(int *)(param_1 + 0xc))) {
      if (local_58 == 0) {
        uVal_6 = Ordinal_7(local_48);
        pVoid_4 = local_48;
        if (uVal_6 != 0) {
          pU64_9 = (uint16_t *)((int64_t)local_48 + (uint64_t)uVal_6 * 2);
          do {
            pU64_9 = pU64_9 + -1;
            iVal_5 = func_0x18068bd28(*pU64_9);
            if (iVal_5 == 0) break;
            uVal_6 = uVal_6 - 1;
          } while (uVal_6 != 0);
        }
        uVal_8 = func_0x180091240(pVoid_4);
      }
      else {
        uVal_6 = Ordinal_7();
        lVal_3 = local_58;
        if (uVal_6 != 0) {
          pU64_9 = (uint16_t *)(local_58 + (uint64_t)uVal_6 * 2);
          do {
            pU64_9 = pU64_9 + -1;
            iVal_5 = func_0x18068bd28(*pU64_9);
            if (iVal_5 == 0) break;
            uVal_6 = uVal_6 - 1;
          } while (uVal_6 != 0);
        }
        uVal_8 = func_0x180091240(lVal_3);
      }
      *param_2 = uVal_8;
      bFlag_2 = false;
    }
    if (local_60 != 0) {
      Ordinal_6();
    }
    if (local_58 != 0) {
      Ordinal_6();
    }
    if (local_48 != (LPVOID)0x0) {
      Ordinal_6();
    }
    if (!bFlag_2) {
      return param_2;
    }
  }
  local_48 = (LPVOID)0x0;
  DVar7 = FormatMessageW(0x1300,(LPCVOID)0x0,*(DWORD *)(param_1 + 0xc),0x400,(LPWSTR)&local_48,0,
                         (va_list *)0x0);
  pVoid_4 = local_48;
  if (DVar7 != 0) {
    pU64_9 = (uint16_t *)((int64_t)local_48 + (uint64_t)DVar7 * 2);
    do {
      pU64_9 = pU64_9 + -1;
      iVal_5 = func_0x18068bd28(*pU64_9);
      if (iVal_5 == 0) break;
      DVar7 = DVar7 - 1;
    } while (DVar7 != 0);
  }
  uVal_8 = func_0x180091240(pVoid_4);
  pVoid_4 = local_48;
  *param_2 = uVal_8;
  if (local_48 != (LPVOID)0x0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,pVoid_4);
  }
  return param_2;
}

// Unwind@18033dc60
void Unwind_18033dc60(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033dc80
void Unwind_18033dc80(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033dca0
void Unwind_18033dca0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18033dcc0
uint8_t (*func_0x18033dcc0(uint8_t (*param_1)[16],uint64_t param_2))[16]
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  uint8_t (*pArr16_5)[16];
  uint64_t uVal_6;
  
  param_1[1] = ZEXT816(0);
  *param_1 = ZEXT816(0);
  uVal_2 = func_0x18068e050(param_2);
  if (uVal_2 < 0x7fffffffffffffff) {
    uVal_6 = 7;
    pArr16_5 = param_1;
    if (7 < uVal_2) {
      uVal_3 = uVal_2 | 7;
      if (0x7ffffffffffffffe < uVal_3) goto LAB_18033ddac;
      uVal_6 = 10;
      if (10 < uVal_3) {
        uVal_6 = uVal_3;
      }
      if (uVal_3 < 0x7ff) {
        pArr16_5 = (uint8_t (*)[16])func_0x180672de0(uVal_6 * 2 + 2);
      }
      else {
        if (0x7fffffffffffffeb < uVal_3) goto LAB_18033ddac;
        lVal_4 = func_0x180672de0(uVal_6 * 2 + 0x29);
        pArr16_5 = (uint8_t (*)[16])(lVal_4 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pArr16_5[-1] + 8) = lVal_4;
      }
      *(uint8_t (**)[16])*param_1 = pArr16_5;
    }
    *(uint64_t *)param_1[1] = uVal_2;
    *(uint64_t *)(param_1[1] + 8) = uVal_6;
    func_0x1806aa960(pArr16_5,param_2,uVal_2 * 2);
    *(uint16_t *)(*pArr16_5 + uVal_2 * 2) = 0;
    return param_1;
  }
  func_0x18007ba70();
LAB_18033ddac:
  func_0x18007ba90();
  fnPtr_1 = (func_ptr_t )swi(3);
  pArr16_5 = (uint8_t (*)[16])(*fnPtr_1)();
  return pArr16_5;
}

// func_0x18033ddc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x18033ddc0(void)
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
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806c7330;
  uStack_24 = _UNK_1806c7334;
  uStack_20 = _UNK_1806c7338;
  uStack_1c = _UNK_1806c733c;
  local_38 = _DAT_1806c7320;
  uStack_34 = _UNK_1806c7324;
  uStack_30 = _UNK_1806c7328;
  uStack_2c = _UNK_1806c732c;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xfbfc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0xfbfc) = 1;
    func_0x18008f8e0(lVal_1 + 0xfbd9,&local_38);
    func_0x180673140(&LAB_180368d80);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfbd9;
}

// Unwind@18033de60
void Unwind_18033de60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfbfc) = 0;
  return;
}

// func_0x18033de90
void func_0x18033de90(LPVOID *param_1)
{
  int *pInt_1;
  int iVal_2;
  LPVOID lpMem;
  HANDLE hHeap;
  
  lpMem = *param_1;
  if (lpMem != (LPVOID)0x0) {
    LOCK();
    pInt_1 = (int *)((int64_t)lpMem + 0x18);
    iVal_2 = *pInt_1;
    *pInt_1 = *pInt_1 + -1;
    UNLOCK();
    if (iVal_2 == 1) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,lpMem);
    }
    else if (iVal_2 < 1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *param_1 = (LPVOID)0x0;
  }
  return;
}

// Unwind@18033ec90
void Unwind_18033ec90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18033ed80
void Unwind_18033ed80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18033ee70
void Unwind_18033ee70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xb0);
  return;
}

// Unwind@18033ef50
void Unwind_18033ef50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  *(uint8_t *)(param_2 + 0x117) = 0;
  return;
}

// Unwind@18033f040
void Unwind_18033f040(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x117);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x90);
  }
  *(char *)(param_2 + 0x116) = ch_1;
  return;
}

// Unwind@18033f140
void Unwind_18033f140(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x116) == '\x01') {
    func_0x180001e70(param_2 + 0x70);
  }
  return;
}

// Unwind@18033f230
void Unwind_18033f230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18033f320
void Unwind_18033f320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18033f4f0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void Unwind_18033f4f0(void)
{
  LOCK();
  _DAT_18083ffa8 = _DAT_18083ffa8 + -1;
  UNLOCK();
  return;
}

// Unwind@18033f510
void Unwind_18033f510(uint64_t param_1,int64_t param_2)
{
  if (*(int64_t *)(param_2 + 0x40) != 0) {
    func_0x180091220(param_2 + 0x40);
  }
  return;
}

// Unwind@18033fa90
void Unwind_18033fa90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18033fac0
void Unwind_18033fac0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18033faf0
void Unwind_18033faf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  func_0x18003c630(param_2 + 0x40);
  return;
}

// Unwind@18033fb30
void Unwind_18033fb30(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033fb50
void Unwind_18033fb50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18033fb80
void Unwind_18033fb80(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033fba0
void Unwind_18033fba0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18033fbc0
void Unwind_18033fbc0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x50);
  return;
}

// Unwind@18033fbf0
void Unwind_18033fbf0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180340270
void Unwind_180340270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1803402b0
void Unwind_1803402b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@1803402f0
void Unwind_1803402f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180340330
void Unwind_180340330(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0xa8);
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180340370
void Unwind_180340370(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180340390
void Unwind_180340390(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x1803404a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1803404a0(uint64_t *param_1)
{
  uint8_t (*_Str)[16];
  char *_Str_00;
  uint *_Str_01;
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
  uint32_t uVal_13;
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
  uint32_t local_78;
  uint32_t uStack_74;
  uint32_t uStack_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint16_t local_58;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uStack_68 = _DAT_1806c7428;
  uStack_64 = _UNK_1806c742c;
  uStack_60 = _UNK_1806c7430;
  uStack_5c = _UNK_1806c7434;
  local_78 = _DAT_1806c7418;
  uStack_74 = _UNK_1806c741c;
  uStack_70 = _UNK_1806c7420;
  uStack_6c = _UNK_1806c7424;
  local_88._4_4_ = _UNK_1806c740c;
  local_88._0_4_ = _DAT_1806c7408;
  uStack_80._0_4_ = _UNK_1806c7410;
  uStack_80._4_4_ = _UNK_1806c7414;
  local_58 = 0xd9bb;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xfd50) == '\0') {
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_11 + 0xfd50) = 1;
    func_0x1802d74e0(lVal_11 + 0xfd1d,local_88);
    func_0x180673140(&LAB_180368f80);
  }
  uVal_7 = _UNK_1806b2c9c;
  uVal_6 = _UNK_1806b2c98;
  uVal_5 = _UNK_1806b2c94;
  uVal_4 = _DAT_1806b2c90;
  lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint8_t (*)[16])(lVal_11 + 0xfd1d);
  if (*(char *)(lVal_11 + 0xfd4f) == '\x01') {
    auArr_1._4_4_ = *(uint *)(lVal_11 + 0xfd21) ^ _UNK_1806b2c94;
    auArr_1._0_4_ = *(uint *)*_Str ^ _DAT_1806b2c90;
    auArr_1._8_4_ = *(uint *)(lVal_11 + 0xfd25) ^ _UNK_1806b2c98;
    auArr_1._12_4_ = *(uint *)(lVal_11 + 0xfd29) ^ _UNK_1806b2c9c;
    *_Str = auArr_1;
    auArr_2._4_4_ = *(uint *)(lVal_11 + 0xfd31) ^ uVal_5;
    auArr_2._0_4_ = *(uint *)(lVal_11 + 0xfd2d) ^ uVal_4;
    auArr_2._8_4_ = *(uint *)(lVal_11 + 0xfd35) ^ uVal_6;
    auArr_2._12_4_ = *(uint *)(lVal_11 + 0xfd39) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_11 + 0xfd2d) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_11 + 0xfd41) ^ uVal_5;
    auArr_3._0_4_ = *(uint *)(lVal_11 + 0xfd3d) ^ uVal_4;
    auArr_3._8_4_ = *(uint *)(lVal_11 + 0xfd45) ^ uVal_6;
    auArr_3._12_4_ = *(uint *)(lVal_11 + 0xfd49) ^ uVal_7;
    *(uint8_t (*)[16])(lVal_11 + 0xfd3d) = auArr_3;
    *(ushort *)(lVal_11 + 0xfd4d) = *(ushort *)(lVal_11 + 0xfd4d) ^ 0xd9cf;
    *(uint8_t *)(lVal_11 + 0xfd4f) = 0;
  }
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  _local_88 = ZEXT816(0);
  sz_9 = strlen((char *)_Str);
  if ((int64_t)sz_9 < 0) {
    func_0x18007ba70();
LAB_180340a1b:
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
    local_78 = (uint32_t)sz_9;
    uStack_74 = (uint32_t)(sz_9 >> 0x20);
    uStack_70 = (uint32_t)uVal_14;
    uStack_6c = (uint32_t)(uVal_14 >> 0x20);
    func_0x1806aa960(pU64_12,_Str,sz_9);
    pU64_12[sz_9] = 0;
    pU64_12 = local_88;
    func_0x1801c2ba0(param_1,0,3,pU64_12);
    uVal_14 = CONCAT44(uStack_6c,uStack_70);
    if (0xf < uVal_14) {
      uVal_10 = uVal_14 + 1;
      lVal_11 = (int64_t)local_88;
      if (0xfff < uVal_10) {
        lVal_11 = *(int64_t *)((int64_t)local_88 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_11)) goto LAB_180340a2f;
        uVal_10 = uVal_14 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_10);
    }
    *param_1 = &PTR_LAB_1806c5280;
    *(uint32_t *)(param_1 + 0x10) = 10;
    *(uint8_t (*)[16])(param_1 + 0x11) = ZEXT816(0);
    local_c0 = 0;
    local_90 = param_1;
    if (DAT_18083fd98 == (uint64_t *)0x0) {
      uVal_13 = 10;
    }
    else {
      local_c0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_f8);
      uVal_13 = *(uint32_t *)(param_1 + 0x10);
    }
    local_78 = _DAT_1806c744a;
    uStack_74 = _UNK_1806c744e;
    uStack_70 = _UNK_1806c7452;
    local_88._4_4_ = _UNK_1806c743e;
    local_88._0_4_ = _DAT_1806c743a;
    uStack_80._0_4_ = _UNK_1806c7442;
    uStack_80._4_4_ = _UNK_1806c7446;
    uStack_6c = CONCAT31(0x2bf225,(char)_UNK_1806c7456);
    uStack_68 = 0xda9a7a1c;
    uStack_64 = CONCAT31(uStack_64._1_3_,0x69);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfd78) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0xfd78) = 1;
      func_0x1801b1390(lVal_11 + 0xfd51,local_88);
      func_0x180673140(&LAB_180368fc0);
    }
    _Str_00 = (char *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfd51);
    func_0x180370340(_Str_00);
    local_b8 = ZEXT816(0);
    sz_9 = strlen(_Str_00);
    if ((int64_t)sz_9 < 0) goto LAB_180340a1b;
    if (sz_9 < 0x10) {
      pU64_15 = local_b8;
      uVal_14 = 0xf;
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
                 0xfd84) == '\0') {
      lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_11 + 0xfd84) = 1;
      *(uint8_t *)(lVal_11 + 0xfd82) = 1;
      *(uint32_t *)(lVal_11 + 0xfd7c) = 0xc89d7c31;
      *(uint16_t *)(lVal_11 + 0xfd80) = 0x510;
      func_0x180673140(&LAB_180368ff0);
    }
    lVal_11 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str_01 = (uint *)(lVal_11 + 0xfd7c);
    if (*(char *)(lVal_11 + 0xfd82) == '\x01') {
      *_Str_01 = *_Str_01 ^ 0xa9f11975;
      *(byte *)(lVal_11 + 0xfd80) = *(byte *)(lVal_11 + 0xfd80) ^ 0x69;
      *(byte *)(lVal_11 + 0xfd81) = *(byte *)(lVal_11 + 0xfd81) ^ 5;
      *(uint8_t *)(lVal_11 + 0xfd82) = 0;
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
      local_78 = (uint32_t)sz_9;
      uStack_74 = (uint32_t)(sz_9 >> 0x20);
      uStack_70 = (uint32_t)uVal_14;
      uStack_6c = (uint32_t)(uVal_14 >> 0x20);
      func_0x1806aa960(pU64_12,_Str_01,sz_9);
      pU64_12[sz_9] = 0;
      func_0x1801ccff0(local_90,local_88,local_b8,param_1 + 0x10,uVal_13,5,0x14,local_f8,0);
      uVal_14 = CONCAT44(uStack_6c,uStack_70);
      if (0xf < uVal_14) {
        uVal_10 = uVal_14 + 1;
        lVal_11 = (int64_t)local_88;
        if (0xfff < uVal_10) {
          lVal_11 = *(int64_t *)((int64_t)local_88 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_88 + -8) - lVal_11)) goto LAB_180340a2f;
          uVal_10 = uVal_14 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_10);
      }
      pU64_8 = local_90;
      if (0xf < local_a0) {
        uVal_14 = local_a0 + 1;
        lVal_11 = local_b8._0_8_;
        if (0xfff < uVal_14) {
          lVal_11 = *(int64_t *)(local_b8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_11)) goto LAB_180340a2f;
          uVal_14 = local_a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_11,uVal_14);
      }
      return pU64_8;
    }
  }
  local_4a = 1;
  func_0x18007ba70();
LAB_180340a2f:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180340a40
void Unwind_180340a40(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x88);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180340a90
void Unwind_180340a90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfd78) = 0;
  *(uint8_t *)(param_2 + 0xff) = 1;
  return;
}

// Unwind@180340ae0
void Unwind_180340ae0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180340b20
void Unwind_180340b20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  *(uint8_t *)(param_2 + 0xfe) = 0;
  return;
}

// Unwind@180340b60
void Unwind_180340b60(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0xfe);
  func_0x180001e70(param_2 + 0x90);
  *(uint8_t *)(param_2 + 0xff) = uVal_1;
  return;
}

// Unwind@180340ba0
void Unwind_180340ba0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0xff) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
    *(uint64_t *)(param_2 + 0x88) = 0;
  }
  return;
}

// Unwind@180340c00
void Unwind_180340c00(uint64_t param_1,int64_t param_2)
{
  func_0x1801c49a0(*(uint64_t *)(param_2 + 0xb8));
  return;
}

// Unwind@180340c40
void Unwind_180340c40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfd50) = 0;
  return;
}

// Unwind@180340f40
void Unwind_180340f40(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfdac) = 0;
  return;
}

// func_0x180340f90
uint64_t func_0x180340f90(int64_t param_1)
{
  char ch_1;
  char *fnPtr_2;
  uint64_t uVal_3;
  
  fnPtr_2 = (char *)func_0x18011b6e0(DAT_180840a50);
  uVal_3 = 0;
  if ((*fnPtr_2 == '\x01') && (*(char *)(param_1 + 0x40) != '\0')) {
    ch_1 = func_0x180057f30(*(uint64_t *)(param_1 + 0x88),(int64_t)*(int *)(param_1 + 0x80));
    uVal_3 = 1;
    if (ch_1 != '\0') {
      uVal_3 = func_0x1800576d0();
      *(uint64_t *)(param_1 + 0x88) = uVal_3;
      uVal_3 = 0;
    }
  }
  return uVal_3;
}

// func_0x180340ff0
uint64_t func_0x180340ff0(int64_t param_1)
{
  char ch_1;
  char *fnPtr_2;
  uint64_t uVal_3;
  
  fnPtr_2 = (char *)func_0x18011b6e0(DAT_180840a50);
  uVal_3 = 0;
  if ((*fnPtr_2 == '\x01') && (*(char *)(param_1 + 0x40) != '\0')) {
    ch_1 = func_0x180057f30(*(uint64_t *)(param_1 + 0x90),(int64_t)*(int *)(param_1 + 0x80));
    uVal_3 = 1;
    if (ch_1 != '\0') {
      uVal_3 = func_0x1800576d0();
      *(uint64_t *)(param_1 + 0x90) = uVal_3;
      uVal_3 = 0;
    }
  }
  return uVal_3;
}

// func_0x180341050
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180341050(uint64_t *param_1)
{
  char *_Str;
  uint *pU64_1;
  uint64_t *pU64_2;
  uint8_t (*_Str_00)[16];
  uint32_t uVal_3;
  int64_t *pLong_4;
  int64_t lVal_5;
  func_ptr_t fnPtr_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  uint uVal_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint64_t uVal_13;
  uint64_t *pU64_14;
  int64_t lVal_15;
  uint8_t *pU64_16;
  uint8_t *pU64_17;
  uint8_t *pU64_18;
  uint64_t uVal_19;
  uint uVal_22;
  uint uVal_23;
  uint uVal_24;
  uint8_t auArr_20 [16];
  uint8_t auArr_21 [16];
  uint uVal_25;
  uint uVal_26;
  uint uVal_27;
  uint8_t local_318;
  undefined7 uStack_317;
  uint64_t local_308;
  uint64_t local_300;
  int64_t local_2f0 [7];
  int64_t *local_2b8;
  uint8_t local_2a8 [56];
  uint64_t local_270;
  uint8_t local_268 [56];
  uint64_t local_230;
  uint8_t local_228 [56];
  uint64_t local_1f0;
  uint8_t local_1e8 [56];
  uint64_t local_1b0;
  uint8_t local_1a8 [8];
  uint64_t uStack_1a0;
  uint8_t local_198 [24];
  int64_t local_180 [7];
  int64_t *local_148;
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  uint8_t local_d8 [8];
  uint64_t uStack_d0;
  uint8_t local_c8 [4];
  uint8_t auStack_c4 [4];
  uint64_t uStack_c0;
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint32_t uStack_a8;
  int64_t *local_78;
  uint64_t *local_60;
  uint64_t *local_58;
  uint8_t local_4d;
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  uStack_d0 = _UNK_1806c747b;
  local_d8 = (uint8_t  [8])_DAT_1806c7473;
  local_c8 = (uint8_t  [4])0x99cb4a6;
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xfdc4) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0xfdc4) = 1;
    func_0x18007cfc0(lVal_12 + 0xfdad,local_d8);
    func_0x180673140(&LAB_180369080);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfdad);
  func_0x1801c21d0(_Str);
  _local_c8 = (uint8_t  [16])0x0;
  _local_d8 = (uint8_t  [16])0x0;
  sz_10 = strlen(_Str);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_18034221f:
    func_0x18007ba70();
LAB_180342225:
    func_0x18007ba70();
LAB_18034222b:
    local_4c = 1;
    func_0x18007ba70();
LAB_180342238:
    local_4b = 1;
    func_0x18007ba70();
LAB_180342245:
    local_4a = 1;
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_16 = local_d8;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_d8 = (uint8_t  [8])pU64_16;
    }
    _local_c8 = sz_10;
    uStack_c0 = uVal_19;
    func_0x1806aa960(pU64_16,_Str,sz_10);
    pU64_16[sz_10] = 0;
    pU64_16 = local_d8;
    func_0x18014fe60(local_58,0,0,pU64_16);
    if (0xf < uStack_c0) {
      uVal_19 = uStack_c0 + 1;
      lVal_12 = (int64_t)local_d8;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_d8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_d8 + -8) - lVal_12)) goto LAB_180342217;
        uVal_19 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    *local_58 = &PTR_LAB_1806c53b0;
    *(uint8_t (*)[16])(local_58 + 0x2b) = (uint8_t  [16])0x0;
    *(uint8_t (*)[16])(local_58 + 0x29) = (uint8_t  [16])0x0;
    *(uint32_t *)(local_58 + 0x2c) = 0xffffffff;
    lVal_12 = local_58[0x1e];
    pLong_4 = *(int64_t **)(lVal_12 + -0x10);
    if (pLong_4 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*pLong_4 + 0x20))(pLong_4,pLong_4 != (int64_t *)(lVal_12 + -0x48));
      *(uint64_t *)(lVal_12 + -0x10) = 0;
    }
    uVal_19 = *(uint64_t *)(lVal_12 + -0x58);
    if (0xf < uVal_19) {
      lVal_5 = *(int64_t *)(lVal_12 + -0x70);
      uVal_11 = uVal_19 + 1;
      lVal_15 = lVal_5;
      if (0xfff < uVal_11) {
        lVal_15 = *(int64_t *)(lVal_5 + -8);
        if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_15)) goto LAB_180342217;
        uVal_11 = uVal_19 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_15,uVal_11);
    }
    local_60 = local_58 + 0x29;
    *(uint64_t *)(lVal_12 + -0x60) = 0;
    *(uint64_t *)(lVal_12 + -0x58) = 0xf;
    *(uint8_t *)(lVal_12 + -0x70) = 0;
    local_58[0x1e] = local_58[0x1e] + -0x70;
    local_b8 = _DAT_1806b9547;
    uStack_b4 = _UNK_1806b954b;
    uStack_b0 = _UNK_1806b954f;
    auStack_c4 = (uint8_t  [4])_UNK_1806b953b;
    local_c8 = (uint8_t  [4])_DAT_1806b9537;
    uStack_c0._0_4_ = _UNK_1806b953f;
    uStack_c0._4_4_ = _UNK_1806b9543;
    uStack_d0 = _UNK_1806b952f;
    local_d8 = (uint8_t  [8])_DAT_1806b9527;
    uStack_ac = CONCAT13(0x80,(int3)_UNK_1806b9553);
    uStack_a8 = CONCAT13(uStack_a8._3_1_,0x7d221d);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfdfc) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xfdfc) = 1;
      func_0x1801b4360(lVal_12 + 0xfdc5,local_d8);
      func_0x180673140(&LAB_1803690b0);
    }
    uVal_9 = _UNK_1806b2cac;
    uVal_24 = _UNK_1806b2ca8;
    uVal_23 = _UNK_1806b2ca4;
    uVal_22 = _DAT_1806b2ca0;
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0xfdc5);
    if (*(char *)(lVal_12 + 0xfdf8) == '\x01') {
      uVal_25 = *(uint *)(lVal_12 + 0xfdc9) ^ _UNK_1806b2ca4;
      uVal_26 = *(uint *)(lVal_12 + 0xfdcd) ^ _UNK_1806b2ca8;
      uVal_27 = *(uint *)(lVal_12 + 0xfdd1) ^ _UNK_1806b2cac;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_12 + 0xfdc9) = uVal_25;
      *(uint *)(lVal_12 + 0xfdcd) = uVal_26;
      *(uint *)(lVal_12 + 0xfdd1) = uVal_27;
      *(uint *)(lVal_12 + 0xfdd5) = *(uint *)(lVal_12 + 0xfdd5) ^ uVal_22;
      *(uint *)(lVal_12 + 0xfdd9) = *(uint *)(lVal_12 + 0xfdd9) ^ uVal_23;
      *(uint *)(lVal_12 + 0xfddd) = *(uint *)(lVal_12 + 0xfddd) ^ uVal_24;
      *(uint *)(lVal_12 + 0xfde1) = *(uint *)(lVal_12 + 0xfde1) ^ uVal_9;
      *(uint *)(lVal_12 + 0xfde5) = *(uint *)(lVal_12 + 0xfde5) ^ uVal_22;
      *(uint *)(lVal_12 + 0xfde9) = *(uint *)(lVal_12 + 0xfde9) ^ uVal_23;
      *(uint *)(lVal_12 + 0xfded) = *(uint *)(lVal_12 + 0xfded) ^ uVal_24;
      *(uint *)(lVal_12 + 0xfdf1) = *(uint *)(lVal_12 + 0xfdf1) ^ uVal_9;
      *(ushort *)(lVal_12 + 0xfdf5) = *(ushort *)(lVal_12 + 0xfdf5) ^ 0x4573;
      *(byte *)(lVal_12 + 0xfdf7) = *(byte *)(lVal_12 + 0xfdf7) ^ 0x7d;
      *(uint8_t *)(lVal_12 + 0xfdf8) = 0;
    }
    _local_c8 = (uint8_t  [16])0x0;
    _local_d8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_18034221f;
    uVal_19 = 0xf;
    if (0xf < sz_10) {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_d8 = (uint8_t  [8])pU64_16;
    }
    uStack_c0 = uVal_19;
    _local_c8 = sz_10;
    func_0x1806aa960(pU64_16,pU64_1,sz_10);
    pU64_16[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfe10) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xfe10) = 1;
      *(uint8_t *)(lVal_12 + 0xfe0e) = 1;
      *(uint64_t *)(lVal_12 + 0xfe00) = 0x9dcdd6c5e7192a3e;
      *(uint32_t *)(lVal_12 + 0xfe08) = 0xb7043153;
      *(uint16_t *)(lVal_12 + 0xfe0c) = 0xb3d4;
      func_0x180673140(&LAB_1803690f0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xfe00);
    if (*(char *)(lVal_12 + 0xfe0e) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0xe9b5b3b1c77d4573;
      *(uint *)(lVal_12 + 0xfe08) = *(uint *)(lVal_12 + 0xfe08) ^ 0xc77d4573;
      *(byte *)(lVal_12 + 0xfe0c) = *(byte *)(lVal_12 + 0xfe0c) ^ 0xb1;
      *(byte *)(lVal_12 + 0xfe0d) = *(byte *)(lVal_12 + 0xfe0d) ^ 0xb3;
      *(uint8_t *)(lVal_12 + 0xfe0e) = 0;
    }
    local_198._0_16_ = (uint8_t  [16])0x0;
    _local_1a8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_180342225;
    if (sz_10 < 0x10) {
      pU64_16 = local_1a8;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_1a8 = (uint8_t  [8])pU64_16;
    }
    local_198._8_8_ = uVal_19;
    local_198._0_8_ = sz_10;
    func_0x1806aa960(pU64_16,pU64_2,sz_10);
    pU64_16[sz_10] = 0;
    lVal_12 = func_0x1801cf6b0(local_58,local_1a8);
    pLong_4 = (int64_t *)(lVal_12 + 0x20);
    if (pLong_4 != (int64_t *)local_d8) {
      uVal_19 = *(uint64_t *)(lVal_12 + 0x38);
      if (0xf < uVal_19) {
        lVal_5 = *pLong_4;
        uVal_11 = uVal_19 + 1;
        lVal_15 = lVal_5;
        if (0xfff < uVal_11) {
          lVal_15 = *(int64_t *)(lVal_5 + -8);
          if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_15)) goto LAB_180342217;
          uVal_11 = uVal_19 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_15,uVal_11);
      }
      *(uint8_t (*)[4])(lVal_12 + 0x30) = local_c8;
      *(uint8_t (*)[4])(lVal_12 + 0x34) = auStack_c4;
      *(uint32_t *)(lVal_12 + 0x38) = (uint32_t)uStack_c0;
      *(uint32_t *)(lVal_12 + 0x3c) = uStack_c0._4_4_;
      *pLong_4 = (int64_t)local_d8;
      *(uint64_t *)(lVal_12 + 0x28) = uStack_d0;
      _local_c8 = ZEXT816(0xf) << 0x40;
      auArr_20[15] = 0;
      auArr_20._0_15_ = stack0xffffffffffffff29;
      _local_d8 = auArr_20 << 8;
    }
    if (0xf < (uint64_t)local_198._8_8_) {
      uVal_19 = local_198._8_8_ + 1;
      lVal_12 = (int64_t)local_1a8;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_1a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_1a8 + -8) - lVal_12)) goto LAB_180342217;
        uVal_19 = local_198._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    if (0xf < uStack_c0) {
      uVal_19 = uStack_c0 + 1;
      lVal_12 = (int64_t)local_d8;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_d8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_d8 + -8) - lVal_12)) goto LAB_180342217;
        uVal_19 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    local_270 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_270 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_2a8);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfe1c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xfe1c) = 1;
      *(uint8_t *)(lVal_12 + 0xfe1a) = 1;
      *(uint32_t *)(lVal_12 + 0xfe14) = 0xf8c0aed3;
      *(uint16_t *)(lVal_12 + 0xfe18) = 0xcdd6;
      func_0x180673140(&LAB_180369120);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0xfe14);
    if (*(char *)(lVal_12 + 0xfe1a) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x93a3c787;
      *(byte *)(lVal_12 + 0xfe18) = *(byte *)(lVal_12 + 0xfe18) ^ 0xa5;
      *(byte *)(lVal_12 + 0xfe19) = *(byte *)(lVal_12 + 0xfe19) ^ 0xcd;
      *(uint8_t *)(lVal_12 + 0xfe1a) = 0;
    }
    local_128 = (uint8_t  [16])0x0;
    local_138 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_18034222b;
    if (sz_10 < 0x10) {
      pU64_16 = local_138;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4c = 1;
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_4c = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_12;
      }
      local_138._0_8_ = pU64_16;
    }
    local_128._8_8_ = uVal_19;
    local_128._0_8_ = sz_10;
    func_0x1806aa960(pU64_16,pU64_1,sz_10);
    pU64_16[sz_10] = 0;
    func_0x1801d2eb0(local_d8,local_138,0,local_2a8);
    pU64_16 = local_d8;
    uVal_13 = func_0x1801d30b0(local_60,pU64_16);
    local_230 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_230 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_268);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfe2c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xfe2c) = 1;
      *(uint64_t *)(lVal_12 + 0xfe20) = 0xe253ee709fd5c5e7;
      *(uint16_t *)(lVal_12 + 0xfe28) = 0x1d5;
      func_0x180673140(&LAB_180369150);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xfe20);
    if (*(char *)(lVal_12 + 0xfe29) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x91219b1ff7f5f1d5;
      *(byte *)(lVal_12 + 0xfe28) = *(byte *)(lVal_12 + 0xfe28) ^ 0xd5;
      *(uint8_t *)(lVal_12 + 0xfe29) = 0;
    }
    local_108 = (uint8_t  [16])0x0;
    local_118 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_180342238;
    if (sz_10 < 0x10) {
      pU64_17 = local_118;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4b = 1;
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_4b = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_12;
      }
      local_118._0_8_ = pU64_17;
    }
    local_108._8_8_ = uVal_19;
    local_108._0_8_ = sz_10;
    func_0x1806aa960(pU64_17,pU64_2,sz_10);
    pU64_17[sz_10] = 0;
    func_0x1801d2eb0(local_1a8,local_118,1,local_268);
    pU64_17 = local_1a8;
    uVal_13 = func_0x1801d30b0(uVal_13,pU64_17);
    local_1f0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_1f0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_228);
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfe3c) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xfe3c) = 1;
      *(uint64_t *)(lVal_12 + 0xfe30) = 0x1613062a4d69e13c;
      *(uint16_t *)(lVal_12 + 0xfe38) = 0x10d;
      func_0x180673140(&LAB_180369180);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint64_t *)(lVal_12 + 0xfe30);
    if (*(char *)(lVal_12 + 0xfe39) == '\x01') {
      *pU64_2 = *pU64_2 ^ 0x656173452549d30d;
      *(byte *)(lVal_12 + 0xfe38) = *(byte *)(lVal_12 + 0xfe38) ^ 0xd;
      *(uint8_t *)(lVal_12 + 0xfe39) = 0;
    }
    local_e8 = (uint8_t  [16])0x0;
    local_f8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_2);
    if ((int64_t)sz_10 < 0) goto LAB_180342245;
    if (sz_10 < 0x10) {
      pU64_18 = local_f8;
      uVal_19 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_19 = 0x16;
      if (0x16 < uVal_11) {
        uVal_19 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        local_4a = 1;
        pU64_18 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
      }
      else {
        local_4a = 1;
        lVal_12 = func_0x180672de0(uVal_19 + 0x28);
        pU64_18 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_18 + -8) = lVal_12;
      }
      local_f8._0_8_ = pU64_18;
    }
    local_e8._8_8_ = uVal_19;
    local_e8._0_8_ = sz_10;
    func_0x1806aa960(pU64_18,pU64_2,sz_10);
    pU64_18[sz_10] = 0;
    func_0x1801d2eb0(&local_318,local_f8,2,local_228);
    func_0x1801d30b0(uVal_13,&local_318);
    if (local_2b8 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_2b8 + 0x20))(local_2b8,local_2b8 != local_2f0);
      local_2b8 = (int64_t *)0x0;
    }
    if (0xf < local_300) {
      lVal_5 = CONCAT71(uStack_317,local_318);
      uVal_19 = local_300 + 1;
      lVal_12 = lVal_5;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)(lVal_5 + -8);
        if (0x1f < (uint64_t)((lVal_5 + -8) - lVal_12)) goto LAB_180342217;
        uVal_19 = local_300 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    local_308 = 0;
    local_300 = 0xf;
    local_318 = 0;
    if (0xf < (uint64_t)local_e8._8_8_) {
      uVal_19 = local_e8._8_8_ + 1;
      lVal_12 = local_f8._0_8_;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)(local_f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_f8._0_8_ + -8) - lVal_12)) goto LAB_180342217;
        uVal_19 = local_e8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    if (local_148 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_148 + 0x20))(local_148,local_148 != local_180);
      local_148 = (int64_t *)0x0;
    }
    if (0xf < (uint64_t)local_198._8_8_) {
      uVal_19 = local_198._8_8_ + 1;
      lVal_12 = (int64_t)local_1a8;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_1a8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_1a8 + -8) - lVal_12)) goto LAB_180342217;
        uVal_19 = local_198._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    local_198._0_16_ = ZEXT816(0xf) << 0x40;
    auArr_7[15] = 0;
    auArr_7._0_15_ = stack0xfffffffffffffe59;
    _local_1a8 = auArr_7 << 8;
    if (0xf < (uint64_t)local_108._8_8_) {
      uVal_19 = local_108._8_8_ + 1;
      lVal_12 = local_118._0_8_;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)(local_118._0_8_ + -8);
        if (0x1f < (uint64_t)((local_118._0_8_ + -8) - lVal_12)) goto LAB_180342217;
        uVal_19 = local_108._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    if (local_78 != (int64_t *)0x0) {
      (**(func_ptr_t *)(*local_78 + 0x20))(local_78,local_78 != (int64_t *)&uStack_b0);
      local_78 = (int64_t *)0x0;
    }
    if (0xf < uStack_c0) {
      uVal_19 = uStack_c0 + 1;
      lVal_12 = (int64_t)local_d8;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)((int64_t)local_d8 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_d8 + -8) - lVal_12)) goto LAB_180342217;
        uVal_19 = uStack_c0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    _local_c8 = ZEXT816(0xf) << 0x40;
    auArr_8[15] = 0;
    auArr_8._0_15_ = stack0xffffffffffffff29;
    _local_d8 = auArr_8 << 8;
    if (0xf < (uint64_t)local_128._8_8_) {
      uVal_19 = local_128._8_8_ + 1;
      lVal_12 = local_138._0_8_;
      if (0xfff < uVal_19) {
        lVal_12 = *(int64_t *)(local_138._0_8_ + -8);
        if (0x1f < (uint64_t)((local_138._0_8_ + -8) - lVal_12)) goto LAB_180342217;
        uVal_19 = local_128._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_19);
    }
    local_1b0 = 0;
    if (DAT_18083fd98 != (uint64_t *)0x0) {
      local_1b0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_1e8);
    }
    uStack_1a0 = _UNK_1806c748f;
    local_1a8 = (uint8_t  [8])_DAT_1806c7487;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xfe50) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0xfe50) = 1;
      func_0x18007d150(lVal_12 + 0xfe3d,local_1a8);
      func_0x180673140(&LAB_1803691b0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0xfe3d);
    if (*(char *)(lVal_12 + 0xfe4d) == '\x01') {
      uVal_22 = *(uint *)(lVal_12 + 0xfe41) ^ _UNK_1806ae4d4;
      uVal_23 = *(uint *)(lVal_12 + 0xfe45) ^ _UNK_1806ae4d8;
      uVal_24 = *(uint *)(lVal_12 + 0xfe49) ^ _UNK_1806ae4dc;
      *pU64_1 = *pU64_1 ^ _DAT_1806ae4d0;
      *(uint *)(lVal_12 + 0xfe41) = uVal_22;
      *(uint *)(lVal_12 + 0xfe45) = uVal_23;
      *(uint *)(lVal_12 + 0xfe49) = uVal_24;
      *(uint8_t *)(lVal_12 + 0xfe4d) = 0;
    }
    _local_d8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_10) {
      uVal_19 = 0xf;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_19 = 0x16;
        if (0x16 < uVal_11) {
          uVal_19 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          local_49 = 1;
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
        }
        else {
          local_49 = 1;
          lVal_12 = func_0x180672de0(uVal_19 + 0x28);
          pU64_16 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_16 + -8) = lVal_12;
        }
        local_d8 = (uint8_t  [8])pU64_16;
      }
      uStack_c0 = uVal_19;
      _local_c8 = sz_10;
      func_0x1806aa960(pU64_16,pU64_1,sz_10);
      pU64_16[sz_10] = 0;
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xfe70) == '\0') {
        lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_12 + 0xfe70) = 1;
        uVal_13 = _UNK_1806c3aa8;
        *(uint64_t *)(lVal_12 + 0xfe60) = _DAT_1806c3aa0;
        *(uint64_t *)(lVal_12 + 0xfe68) = uVal_13;
        func_0x180673140(&LAB_1803691d0);
      }
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str_00 = (uint8_t (*)[16])(lVal_12 + 0xfe60);
      if (*(char *)(lVal_12 + 0xfe6f) == '\x01') {
        uVal_3 = *(uint32_t *)(lVal_12 + 0xfe68);
        auArr_20 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_3 >> 0x10),uVal_3)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_12 + 0xfe6d) >> 8)),
                                                  (char)((uint)uVal_3 >> 8)),
                                          CONCAT11((char)*(uint16_t *)(lVal_12 + 0xfe6d),
                                                   (char)uVal_3))),_DAT_1806ae110);
        auArr_21._0_8_ = auArr_20._0_8_;
        auArr_21._8_8_ =
             auArr_20._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_12 + 0xfe6c) << 0x20;
        auArr_20 = pblendw(auArr_21,*_Str_00,0xf);
        *_Str_00 = auArr_20 ^ _DAT_1806c3ab0;
      }
      _local_1a8 = (uint8_t  [16])0x0;
      sz_10 = strlen((char *)_Str_00);
      if (-1 < (int64_t)sz_10) {
        uVal_19 = 0xf;
        if (0xf < sz_10) {
          uVal_11 = sz_10 | 0xf;
          uVal_19 = 0x16;
          if (0x16 < uVal_11) {
            uVal_19 = uVal_11;
          }
          if (uVal_11 < 0xfff) {
            local_4d = 1;
            pU64_17 = (uint8_t *)func_0x180672de0(uVal_19 + 1);
          }
          else {
            local_4d = 1;
            lVal_12 = func_0x180672de0(uVal_19 + 0x28);
            pU64_17 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_17 + -8) = lVal_12;
          }
          local_1a8 = (uint8_t  [8])pU64_17;
        }
        local_198._0_8_ = sz_10;
        local_198._8_8_ = uVal_19;
        func_0x1806aa960(pU64_17,_Str_00,sz_10);
        pU64_17[sz_10] = 0;
        func_0x1801d3a80(local_58,local_1a8,local_d8,local_60,0,local_1e8,0);
        if (0xf < (uint64_t)local_198._8_8_) {
          uVal_19 = local_198._8_8_ + 1;
          lVal_12 = (int64_t)local_1a8;
          if (0xfff < uVal_19) {
            lVal_12 = *(int64_t *)((int64_t)local_1a8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_1a8 + -8) - lVal_12)) goto LAB_180342217;
            uVal_19 = local_198._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_19);
        }
        if (0xf < uStack_c0) {
          uVal_19 = uStack_c0 + 1;
          lVal_12 = (int64_t)local_d8;
          if (0xfff < uVal_19) {
            lVal_12 = *(int64_t *)((int64_t)local_d8 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_d8 + -8) - lVal_12)) {
LAB_180342217:
              do {
                invalidInstructionException();
              } while( true );
            }
            uVal_19 = uStack_c0 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_12,uVal_19);
        }
        return local_58;
      }
      goto LAB_18034225f;
    }
  }
  local_49 = 1;
  func_0x18007ba70();
LAB_18034225f:
  local_4d = 1;
  func_0x18007ba70();
  fnPtr_6 = (func_ptr_t )swi(3);
  pU64_14 = (uint64_t *)(*fnPtr_6)();
  return pU64_14;
}

// Unwind@180342270
void Unwind_180342270(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xe8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xb0));
    *(uint64_t *)(param_2 + 0xe8) = 0;
  }
  return;
}

// Unwind@1803422c0
void Unwind_1803422c0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x128);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf0));
    *(uint64_t *)(param_2 + 0x128) = 0;
  }
  return;
}

// Unwind@180342320
void Unwind_180342320(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x168);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x130));
    *(uint64_t *)(param_2 + 0x168) = 0;
  }
  return;
}

// Unwind@180342380
void Unwind_180342380(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x1a8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@1803423e0
void Unwind_1803423e0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfe50) = 0;
  *(uint8_t *)(param_2 + 0x30f) = 1;
  return;
}

// Unwind@180342430
void Unwind_180342430(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  return;
}

// Unwind@180342470
void Unwind_180342470(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@1803424b0
void Unwind_1803424b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  return;
}

// Unwind@1803424f0
void Unwind_1803424f0(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x40);
  return;
}

// Unwind@180342530
void Unwind_180342530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x30e) = 0;
  return;
}

// Unwind@180342570
void Unwind_180342570(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x30e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x168), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x130));
    *(uint64_t *)(param_2 + 0x168) = 0;
  }
  return;
}

// Unwind@1803425d0
void Unwind_1803425d0(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x1b0);
  return;
}

// Unwind@180342610
void Unwind_180342610(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  *(uint8_t *)(param_2 + 0x30d) = 0;
  return;
}

// Unwind@180342650
void Unwind_180342650(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x30d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x128), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xf0));
    *(uint64_t *)(param_2 + 0x128) = 0;
  }
  return;
}

// Unwind@1803426b0
void Unwind_1803426b0(uint64_t param_1,int64_t param_2)
{
  func_0x180188250(param_2 + 0x280);
  return;
}

// Unwind@1803426f0
void Unwind_1803426f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x220);
  *(uint8_t *)(param_2 + 0x30c) = 0;
  return;
}

// Unwind@180342730
void Unwind_180342730(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x30c) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xe8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xb0));
    *(uint64_t *)(param_2 + 0xe8) = 0;
  }
  return;
}

// Unwind@180342790
void Unwind_180342790(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  *(uint8_t *)(param_2 + 0x30b) = 0;
  return;
}

// Unwind@1803427d0
void Unwind_1803427d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x30b);
  func_0x180001e70(param_2 + 0x280);
  *(uint8_t *)(param_2 + 0x30f) = uVal_1;
  return;
}

// Unwind@180342820
void Unwind_180342820(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x30f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x1a8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x170));
    *(uint64_t *)(param_2 + 0x1a8) = 0;
  }
  return;
}

// Unwind@180342880
void Unwind_180342880(uint64_t param_1,int64_t param_2)
{
  func_0x1800822d0(*(uint64_t *)(param_2 + 0x2f8));
  func_0x180154cc0(*(uint64_t *)(param_2 + 0x300));
  return;
}

// Unwind@1803428d0
void Unwind_1803428d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfdc4) = 0;
  return;
}

// Unwind@180342920
void Unwind_180342920(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfdfc) = 0;
  return;
}

// Unwind@180342c10
void Unwind_180342c10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xfe98) = 0;
  return;
}

// Unwind@180344f30
void Unwind_180344f30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180344f80
void Unwind_180344f80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180344fd0
void Unwind_180344fd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180345020
void Unwind_180345020(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@180345070
void Unwind_180345070(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803450c0
void Unwind_1803450c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@180345100
void Unwind_180345100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180345150
void Unwind_180345150(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1803451a0
void Unwind_1803451a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@1803451f0
void Unwind_1803451f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180345240
void Unwind_180345240(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180345290
void Unwind_180345290(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803452d0
void Unwind_1803452d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180345310
void Unwind_180345310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x78);
  return;
}

// Unwind@180345350
void Unwind_180345350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180345390
void Unwind_180345390(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@1803453d0
void Unwind_1803453d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180345420
void Unwind_180345420(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180345470
void Unwind_180345470(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@1803454b0
void Unwind_1803454b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@1803454f0
void Unwind_1803454f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x78);
  return;
}

// Unwind@180345530
void Unwind_180345530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@180345580
void Unwind_180345580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  func_0x180001e70(*(uint64_t *)(param_2 + 0x128));
  return;
}

// func_0x1803455d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x1803455d0(uint64_t *param_1)
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
  uint16_t uStack_7c;
  uint16_t uStack_7a;
  uint16_t uStack_78;
  uint16_t uStack_76;
  uint16_t uStack_74;
  uint16_t uStack_72;
  uint16_t uStack_70;
  uint16_t uStack_6e;
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
  uStack_78 = _UNK_1806c74b9;
  uStack_76 = (uint16_t)_UNK_1806c74bb;
  uStack_74 = (uint16_t)((uint)_UNK_1806c74bb >> 0x10);
  uStack_72 = (uint16_t)_UNK_1806c74bf;
  uStack_70 = (uint16_t)((uint)_UNK_1806c74bf >> 0x10);
  uStack_6e = (uint16_t)_UNK_1806c74c3;
  uStack_6c = (uint16_t)((uint)_UNK_1806c74c3 >> 0x10);
  local_88 = _DAT_1806c74a9;
  uStack_84 = _UNK_1806c74ad;
  uStack_80 = _UNK_1806c74b1;
  uStack_7c = _UNK_1806c74b5;
  uStack_7a = _DAT_1806c74b7;
  local_58 = param_1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0xff30) == '\0') {
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_19 + 0xff30) = 1;
    func_0x18008fa60(lVal_19 + 0xff11,&local_88);
    func_0x180673140(&LAB_180369430);
  }
  fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0xff11);
  func_0x180370380(fnPtr_1);
  uStack_78 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  uStack_72 = 0;
  uStack_70 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  uStack_69 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  sz_17 = strlen(fnPtr_1);
  if ((int64_t)sz_17 < 0) {
    func_0x18007ba70();
LAB_180346358:
    local_49 = 1;
    func_0x18007ba70();
LAB_180346365:
    local_4c = 1;
    func_0x18007ba70();
LAB_180346372:
    local_4a = 1;
    func_0x18007ba70();
LAB_18034637f:
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
    uStack_78 = (uint16_t)sz_17;
    uStack_76 = (uint16_t)(sz_17 >> 0x10);
    uStack_74 = (uint16_t)(sz_17 >> 0x20);
    uStack_72 = (uint16_t)(sz_17 >> 0x30);
    uStack_70 = (uint16_t)uVal_25;
    uStack_6e = (uint16_t)(uVal_25 >> 0x10);
    uStack_6c = (uint16_t)(uVal_25 >> 0x20);
    uStack_6a = (uint8_t)(uVal_25 >> 0x30);
    uStack_69 = (uint8_t)(uVal_25 >> 0x38);
    func_0x1806aa960(pU64_22,fnPtr_1,sz_17);
    *(uint8_t *)((int64_t)pU64_22 + sz_17) = 0;
    pU64_22 = &local_88;
    func_0x180132ee0(local_58,0,0,pU64_22);
    uVal_25 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70))));
    if (0xf < uVal_25) {
      lVal_9 = CONCAT44(uStack_84,local_88);
      uVal_18 = uVal_25 + 1;
      lVal_19 = lVal_9;
      if (0xfff < uVal_18) {
        lVal_19 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_19)) goto LAB_180346351;
        uVal_18 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_18);
    }
    *local_58 = &PTR_LAB_1806c5520;
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
    if (DAT_18083fd98 == (uint64_t *)0x0) {
      uVal_24 = 0;
    }
    else {
      local_b0 = (**(func_ptr_t *)*DAT_18083fd98)(DAT_18083fd98,local_e8);
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
    uStack_78 = (uint16_t)_DAT_1806bdd80;
    uStack_76 = (uint16_t)((uint)_DAT_1806bdd80 >> 0x10);
    uStack_74 = (uint16_t)_UNK_1806bdd84;
    uStack_72 = (uint16_t)((uint)_UNK_1806bdd84 >> 0x10);
    uStack_70 = (uint16_t)_UNK_1806bdd88;
    uStack_6e = (uint16_t)((uint)_UNK_1806bdd88 >> 0x10);
    uStack_6c = (uint16_t)_UNK_1806bdd8c;
    uStack_6a = (uint8_t)((uint)_UNK_1806bdd8c >> 0x10);
    uStack_69 = (uint8_t)((uint)_UNK_1806bdd8c >> 0x18);
    local_88 = _DAT_1806bdd70;
    uStack_84 = _UNK_1806bdd74;
    uStack_80 = _UNK_1806bdd78;
    uStack_7c = (uint16_t)_UNK_1806bdd7c;
    uStack_7a = (uint16_t)((uint)_UNK_1806bdd7c >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xff64) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xff64) = 1;
      func_0x1801bb2b0(lVal_19 + 0xff31,&local_88);
      func_0x180673140(&LAB_180369460);
    }
    uVal_13 = _UNK_1806b2cac;
    uVal_12 = _UNK_1806b2ca8;
    uVal_11 = _UNK_1806b2ca4;
    uVal_10 = _DAT_1806b2ca0;
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_2 = (uint8_t (*)[16])(lVal_19 + 0xff31);
    if (*(char *)(lVal_19 + 0xff60) == '\x01') {
      auArr_5._4_4_ = *(uint *)(lVal_19 + 0xff35) ^ _UNK_1806b2ca4;
      auArr_5._0_4_ = *(uint *)*pArr16_2 ^ _DAT_1806b2ca0;
      auArr_5._8_4_ = *(uint *)(lVal_19 + 0xff39) ^ _UNK_1806b2ca8;
      auArr_5._12_4_ = *(uint *)(lVal_19 + 0xff3d) ^ _UNK_1806b2cac;
      *pArr16_2 = auArr_5;
      auArr_7._4_4_ = *(uint *)(lVal_19 + 0xff45) ^ uVal_11;
      auArr_7._0_4_ = *(uint *)(lVal_19 + 0xff41) ^ uVal_10;
      auArr_7._8_4_ = *(uint *)(lVal_19 + 0xff49) ^ uVal_12;
      auArr_7._12_4_ = *(uint *)(lVal_19 + 0xff4d) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_19 + 0xff41) = auArr_7;
      *(uint64_t *)(lVal_19 + 0xff51) =
           CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_19 + 0xff51) >> 0x20) ^ _UNK_1806b5c14,
                    (uint)*(uint64_t *)(lVal_19 + 0xff51) ^ _DAT_1806b5c10);
      *(byte *)(lVal_19 + 0xff59) = *(byte *)(lVal_19 + 0xff59) ^ 0x73;
      *(byte *)(lVal_19 + 0xff5a) = *(byte *)(lVal_19 + 0xff5a) ^ 0x45;
      *(byte *)(lVal_19 + 0xff5b) = *(byte *)(lVal_19 + 0xff5b) ^ 0x7d;
      *(byte *)(lVal_19 + 0xff5c) = *(byte *)(lVal_19 + 0xff5c) ^ 199;
      *(byte *)(lVal_19 + 0xff5d) = *(byte *)(lVal_19 + 0xff5d) ^ 0xb1;
      *(byte *)(lVal_19 + 0xff5e) = *(byte *)(lVal_19 + 0xff5e) ^ 0xb3;
      *(byte *)(lVal_19 + 0xff5f) = *(byte *)(lVal_19 + 0xff5f) ^ 0xb5;
      *(uint8_t *)(lVal_19 + 0xff60) = 0;
    }
    local_98 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    sz_17 = strlen((char *)pArr16_2);
    if ((int64_t)sz_17 < 0) goto LAB_180346358;
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
                 0xff74) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xff74) = 1;
      *(uint8_t *)(lVal_19 + 0xff70) = 1;
      *(uint64_t *)(lVal_19 + 0xff68) = 0xe9d0dfd3a60e2c37;
      func_0x180673140(&LAB_180369490);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_19 + 0xff68);
    if (*(char *)(lVal_19 + 0xff70) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0xe9b5b3b1c77d4573;
      *(uint8_t *)(lVal_19 + 0xff70) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_17 = strlen((char *)pU64_3);
    if ((int64_t)sz_17 < 0) goto LAB_180346365;
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
    uStack_78 = (uint16_t)sz_17;
    uStack_76 = (uint16_t)(sz_17 >> 0x10);
    uStack_74 = (uint16_t)(sz_17 >> 0x20);
    uStack_72 = (uint16_t)(sz_17 >> 0x30);
    uStack_70 = (uint16_t)uVal_25;
    uStack_6e = (uint16_t)(uVal_25 >> 0x10);
    uStack_6c = (uint16_t)(uVal_25 >> 0x20);
    uStack_6a = (uint8_t)(uVal_25 >> 0x30);
    uStack_69 = (uint8_t)(uVal_25 >> 0x38);
    func_0x1806aa960(pU64_22,pU64_3,sz_17);
    *(uint8_t *)((int64_t)pU64_22 + sz_17) = 0;
    pU64_22 = &local_88;
    pU64_21 = local_a8;
    func_0x1801ccd70(local_58,pU64_22,pU64_21,pU64_23,uVal_24,local_e8,0);
    uVal_25 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70))));
    if (0xf < uVal_25) {
      lVal_9 = CONCAT44(uStack_84,local_88);
      uVal_18 = uVal_25 + 1;
      lVal_19 = lVal_9;
      if (0xfff < uVal_18) {
        lVal_19 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_19)) goto LAB_180346351;
        uVal_18 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_18);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_25 = local_98._8_8_ + 1;
      lVal_19 = local_a8._0_8_;
      if (0xfff < uVal_25) {
        lVal_19 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_19)) goto LAB_180346351;
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
    uStack_78 = (uint16_t)_DAT_1806bddaf;
    uStack_76 = (uint16_t)((uint)_DAT_1806bddaf >> 0x10);
    uStack_74 = (uint16_t)_UNK_1806bddb3;
    uStack_72 = (uint16_t)((uint)_UNK_1806bddb3 >> 0x10);
    uStack_70 = (uint16_t)_UNK_1806bddb7;
    uStack_6e = (uint16_t)((uint)_UNK_1806bddb7 >> 0x10);
    uStack_6c = _UNK_1806bddbb;
    uStack_6a = (uint8_t)_DAT_1806bddbd;
    uStack_69 = (uint8_t)((ushort)_DAT_1806bddbd >> 8);
    local_88 = _DAT_1806bdd9f;
    uStack_84 = _UNK_1806bdda3;
    uStack_80 = _UNK_1806bdda7;
    uStack_7c = (uint16_t)_UNK_1806bddab;
    uStack_7a = (uint16_t)((uint)_UNK_1806bddab >> 0x10);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xffa4) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xffa4) = 1;
      func_0x1801ba020(lVal_19 + 0xff75,&local_88);
      func_0x180673140(&LAB_1803694b0);
    }
    uVal_13 = _UNK_1806b2d7c;
    uVal_12 = _UNK_1806b2d78;
    uVal_11 = _UNK_1806b2d74;
    uVal_10 = _DAT_1806b2d70;
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_2 = (uint8_t (*)[16])(lVal_19 + 0xff75);
    if (*(char *)(lVal_19 + 0xffa3) == '\x01') {
      auArr_6._4_4_ = *(uint *)(lVal_19 + 0xff79) ^ _UNK_1806b2d74;
      auArr_6._0_4_ = *(uint *)*pArr16_2 ^ _DAT_1806b2d70;
      auArr_6._8_4_ = *(uint *)(lVal_19 + 0xff7d) ^ _UNK_1806b2d78;
      auArr_6._12_4_ = *(uint *)(lVal_19 + 0xff81) ^ _UNK_1806b2d7c;
      *pArr16_2 = auArr_6;
      auArr_8._4_4_ = *(uint *)(lVal_19 + 0xff89) ^ uVal_11;
      auArr_8._0_4_ = *(uint *)(lVal_19 + 0xff85) ^ uVal_10;
      auArr_8._8_4_ = *(uint *)(lVal_19 + 0xff8d) ^ uVal_12;
      auArr_8._12_4_ = *(uint *)(lVal_19 + 0xff91) ^ uVal_13;
      *(uint8_t (*)[16])(lVal_19 + 0xff85) = auArr_8;
      *(uint64_t *)(lVal_19 + 0xff95) =
           CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_19 + 0xff95) >> 0x20) ^ _UNK_1806b5c24,
                    (uint)*(uint64_t *)(lVal_19 + 0xff95) ^ _DAT_1806b5c20);
      *(byte *)(lVal_19 + 0xff9d) = *(byte *)(lVal_19 + 0xff9d) ^ 0x87;
      *(byte *)(lVal_19 + 0xff9e) = *(byte *)(lVal_19 + 0xff9e) ^ 199;
      *(byte *)(lVal_19 + 0xff9f) = *(byte *)(lVal_19 + 0xff9f) ^ 0xa3;
      *(byte *)(lVal_19 + 0xffa0) = *(byte *)(lVal_19 + 0xffa0) ^ 0x93;
      *(byte *)(lVal_19 + 0xffa1) = *(byte *)(lVal_19 + 0xffa1) ^ 0xa5;
      *(byte *)(lVal_19 + 0xffa2) = *(byte *)(lVal_19 + 0xffa2) ^ 0xcd;
      *(uint8_t *)(lVal_19 + 0xffa3) = 0;
    }
    local_98 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    sz_17 = strlen((char *)pArr16_2);
    if ((int64_t)sz_17 < 0) goto LAB_180346372;
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
                 0xffb8) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xffb8) = 1;
      *(uint8_t *)(lVal_19 + 0xffb6) = 1;
      *(uint64_t *)(lVal_19 + 0xffa8) = 0x20c0aec4f183a8c9;
      *(uint32_t *)(lVal_19 + 0xffb0) = 0xfdd6a8f5;
      *(uint16_t *)(lVal_19 + 0xffb4) = 0xcdc1;
      func_0x180673140(&LAB_1803694e0);
    }
    lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_3 = (uint64_t *)(lVal_19 + 0xffa8);
    if (*(char *)(lVal_19 + 0xffb6) == '\x01') {
      *pU64_3 = *pU64_3 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_19 + 0xffb0) = *(uint *)(lVal_19 + 0xffb0) ^ 0x93a3c787;
      *(byte *)(lVal_19 + 0xffb4) = *(byte *)(lVal_19 + 0xffb4) ^ 0xa5;
      *(byte *)(lVal_19 + 0xffb5) = *(byte *)(lVal_19 + 0xffb5) ^ 0xcd;
      *(uint8_t *)(lVal_19 + 0xffb6) = 0;
    }
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    uStack_6e = 0;
    uStack_6c = 0;
    uStack_6a = 0;
    uStack_69 = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    sz_17 = strlen((char *)pU64_3);
    if ((int64_t)sz_17 < 0) goto LAB_18034637f;
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
    uStack_78 = (uint16_t)sz_17;
    uStack_76 = (uint16_t)(sz_17 >> 0x10);
    uStack_74 = (uint16_t)(sz_17 >> 0x20);
    uStack_72 = (uint16_t)(sz_17 >> 0x30);
    uStack_70 = (uint16_t)uVal_25;
    uStack_6e = (uint16_t)(uVal_25 >> 0x10);
    uStack_6c = (uint16_t)(uVal_25 >> 0x20);
    uStack_6a = (uint8_t)(uVal_25 >> 0x30);
    uStack_69 = (uint8_t)(uVal_25 >> 0x38);
    func_0x1806aa960(pU64_22,pU64_3,sz_17);
    *(uint8_t *)((int64_t)pU64_22 + sz_17) = 0;
    pU64_22 = &local_88;
    pU64_23 = local_a8;
    func_0x1801ccd70(pU64_20,pU64_22,pU64_23,lVal_19,uVal_24,&local_168,0);
    uVal_25 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70))));
    if (0xf < uVal_25) {
      lVal_9 = CONCAT44(uStack_84,local_88);
      uVal_18 = uVal_25 + 1;
      lVal_19 = lVal_9;
      if (0xfff < uVal_18) {
        lVal_19 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_19)) goto LAB_180346351;
        uVal_18 = uVal_25 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_18);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_25 = local_98._8_8_ + 1;
      lVal_19 = local_a8._0_8_;
      if (0xfff < uVal_25) {
        lVal_19 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_19)) goto LAB_180346351;
        uVal_25 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_19,uVal_25);
    }
    local_128 = &PTR_LAB_1806ba9a0;
    local_120 = local_58;
    uVal_24 = *(uint8_t *)((int64_t)local_58 + 0xd3);
    uStack_78 = (uint16_t)_DAT_1806c74d7;
    uStack_76 = (uint16_t)((uint)_DAT_1806c74d7 >> 0x10);
    uStack_74 = (uint16_t)_UNK_1806c74db;
    uStack_72 = (uint16_t)((uint)_UNK_1806c74db >> 0x10);
    uStack_70 = (uint16_t)_UNK_1806c74df;
    uStack_6e = (uint16_t)((uint)_UNK_1806c74df >> 0x10);
    uStack_6c = (uint16_t)_UNK_1806c74e3;
    uStack_6a = (uint8_t)((uint)_UNK_1806c74e3 >> 0x10);
    local_88 = _DAT_1806c74c7;
    uStack_84 = _UNK_1806c74cb;
    uStack_80 = _UNK_1806c74cf;
    uStack_7c = (uint16_t)_UNK_1806c74d3;
    uStack_7a = (uint16_t)((uint)_UNK_1806c74d3 >> 0x10);
    uStack_69 = 0xf3;
    uStack_68 = 0x94b9;
    uStack_66 = CONCAT31(uStack_66._1_3_,0xf5);
    local_f0 = &local_128;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0xffe0) == '\0') {
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_19 + 0xffe0) = 1;
      func_0x1801b30c0(lVal_19 + 0xffb9,&local_88);
      func_0x180673140(&LAB_180369510);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0xffb9);
    func_0x1802e4980(fnPtr_1);
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
                   0xffec) == '\0') {
        lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_19 + 0xffec) = 1;
        *(uint32_t *)(lVal_19 + 0xffe4) = 0x92839e98;
        *(uint16_t *)(lVal_19 + 0xffe8) = 0x11f;
        func_0x180673140(&LAB_180369540);
      }
      lVal_19 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      _Str = (uint *)(lVal_19 + 0xffe4);
      if (*(char *)(lVal_19 + 0xffe9) == '\x01') {
        *_Str = *_Str ^ 0xf7f5f1d5;
        *(byte *)(lVal_19 + 0xffe8) = *(byte *)(lVal_19 + 0xffe8) ^ 0x1f;
        *(uint8_t *)(lVal_19 + 0xffe9) = 0;
      }
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_7a = 0;
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
        uStack_78 = (uint16_t)sz_17;
        uStack_76 = (uint16_t)(sz_17 >> 0x10);
        uStack_74 = (uint16_t)(sz_17 >> 0x20);
        uStack_72 = (uint16_t)(sz_17 >> 0x30);
        uStack_70 = (uint16_t)uVal_25;
        uStack_6e = (uint16_t)(uVal_25 >> 0x10);
        uStack_6c = (uint16_t)(uVal_25 >> 0x20);
        uStack_6a = (uint8_t)(uVal_25 >> 0x30);
        uStack_69 = (uint8_t)(uVal_25 >> 0x38);
        func_0x1806aa960(pU64_22,_Str,sz_17);
        *(uint8_t *)((int64_t)pU64_22 + sz_17) = 0;
        func_0x1801ccd70(pU64_20,&local_88,local_a8,lVal_19,uVal_24,&local_128,0);
        uVal_25 = CONCAT17(uStack_69,
                          CONCAT16(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,uStack_70))));
        if (0xf < uVal_25) {
          lVal_9 = CONCAT44(uStack_84,local_88);
          uVal_18 = uVal_25 + 1;
          lVal_19 = lVal_9;
          if (0xfff < uVal_18) {
            lVal_19 = *(int64_t *)(lVal_9 + -8);
            if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_19)) goto LAB_180346351;
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
LAB_180346351:
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
      goto LAB_180346399;
    }
  }
  local_4b = 1;
  func_0x18007ba70();
LAB_180346399:
  local_4e = 1;
  func_0x18007ba70();
  fnPtr_4 = (func_ptr_t )swi(3);
  pU64_20 = (uint64_t *)(*fnPtr_4)();
  return pU64_20;
}

// Unwind@1803463b0
void Unwind_1803463b0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0xf8);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@180346400
void Unwind_180346400(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xff64) = 0;
  *(uint8_t *)(param_2 + 0x15f) = 1;
  return;
}

// Unwind@180346450
void Unwind_180346450(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  return;
}

// Unwind@180346490
void Unwind_180346490(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x15c) = 0;
  return;
}

// Unwind@1803464d0
void Unwind_1803464d0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x15c);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x15f) = uVal_1;
  return;
}

// Unwind@180346520
void Unwind_180346520(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x15f) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xf8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0xc0));
    *(uint64_t *)(param_2 + 0xf8) = 0;
  }
  return;
}

// Unwind@180346580
void Unwind_180346580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x15b) = 0;
  return;
}

// Unwind@1803465c0
void Unwind_1803465c0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x15b);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x15e) = uVal_1;
  return;
}

// Unwind@180346610
void Unwind_180346610(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x15e) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x78), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x40));
    *(uint64_t *)(param_2 + 0x78) = 0;
  }
  return;
}

// Unwind@180346670
void Unwind_180346670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x120);
  *(uint8_t *)(param_2 + 0x15a) = 0;
  return;
}

// Unwind@1803466b0
void Unwind_1803466b0(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x15a);
  func_0x180001e70(param_2 + 0x100);
  *(uint8_t *)(param_2 + 0x15d) = uVal_1;
  return;
}

// Unwind@180346700
void Unwind_180346700(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x15d) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0xb8), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x80));
    *(uint64_t *)(param_2 + 0xb8) = 0;
  }
  return;
}

// Unwind@180346760
void Unwind_180346760(uint64_t param_1,int64_t param_2)
{
  uint64_t *pU64_1;
  
  pU64_1 = *(uint64_t **)(param_2 + 0x150);
  *pU64_1 = &PTR_FUN_1806b6b70;
  func_0x1800822d0(pU64_1 + 0x12);
  func_0x1801c49a0(pU64_1);
  return;
}

// Unwind@1803467c0
void Unwind_1803467c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xff30) = 0;
  return;
}

// Unwind@180346810
void Unwind_180346810(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xffa4) = 0;
  *(uint8_t *)(param_2 + 0x15e) = 1;
  return;
}

// Unwind@180346860
void Unwind_180346860(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0xffe0) = 0;
  *(uint8_t *)(param_2 + 0x15d) = 1;
  return;
}

// Unwind@180346b70
void Unwind_180346b70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10014) = 0;
  return;
}

// Unwind@180347550
void Unwind_180347550(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180347590
void Unwind_180347590(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@1803475d0
void Unwind_1803475d0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@180347620
void Unwind_180347620(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@180347670
void Unwind_180347670(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  pLong_1 = *(int64_t **)(param_2 + 0x58);
  if (pLong_1 != (int64_t *)0x0) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x20));
  }
  return;
}

// Unwind@1803476c0
void Unwind_1803476c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10030) = 0;
  return;
}

// func_0x180347720
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180347720(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  undefined6 uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806c74ff;
  uStack_24 = _UNK_1806c7503;
  uStack_20 = _UNK_1806c7507;
  uStack_1c = (uint16_t)_UNK_1806c750b;
  uStack_1a = 0x9de2;
  uStack_18 = 0x9b51b82c30e3;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1005c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x1005c) = 1;
    func_0x18007cab0(lVal_1 + 0x10045,&local_28);
    func_0x180673140(&LAB_180369630);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10045;
}

// Unwind@1803477c0
void Unwind_1803477c0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1005c) = 0;
  return;
}

// Unwind@180347b10
void Unwind_180347b10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180347d50
void Unwind_180347d50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// func_0x180347d80
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180347d80(uint64_t *param_1)
{
  char *_Str;
  size_t sz_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint8_t *pU64_4;
  uint64_t uVal_5;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  size_t sStack_48;
  uint64_t uStack_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  sStack_48 = CONCAT44(_UNK_1806c7529,_UNK_1806c7525);
  uStack_40 = CONCAT44(uStack_40._4_4_,_UNK_1806c752d);
  local_58._4_4_ = _UNK_1806c7519;
  local_58._0_4_ = _DAT_1806c7515;
  uStack_50._0_4_ = _UNK_1806c751d;
  uStack_50._4_4_ = _DAT_1806c7521;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1009c) == '\0') {
    lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_3 + 0x1009c) = 1;
    func_0x18008fba0(lVal_3 + 0x1007d,local_58);
    func_0x180673140(&LAB_1803696c0);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1007d);
  func_0x1801c0d20(_Str);
  _local_58 = ZEXT816(0);
  sz_1 = strlen(_Str);
  if (-1 < (int64_t)sz_1) {
    if (sz_1 < 0x10) {
      pU64_4 = local_58;
      uVal_5 = 0xf;
    }
    else {
      uVal_2 = sz_1 | 0xf;
      uVal_5 = 0x16;
      if (0x16 < uVal_2) {
        uVal_5 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        pU64_4 = (uint8_t *)func_0x180672de0(uVal_5 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_5 + 0x28);
        pU64_4 = (uint8_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_4 + -8) = lVal_3;
      }
      local_58 = (uint8_t  [8])pU64_4;
    }
    sStack_48 = sz_1;
    uStack_40 = uVal_5;
    func_0x1806aa960(pU64_4,_Str,sz_1);
    pU64_4[sz_1] = 0;
    func_0x1801c2ba0(param_1,0,2,local_58);
    if (0xf < uStack_40) {
      uVal_5 = uStack_40 + 1;
      lVal_3 = (int64_t)local_58;
      if (0xfff < uVal_5) {
        lVal_3 = *(int64_t *)((int64_t)local_58 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_58 + -8) - lVal_3)) goto LAB_180347f35;
        uVal_5 = uStack_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_5);
    }
    *param_1 = &PTR_LAB_1806c5680;
    *(uint32_t *)(param_1 + 0x10) = 0;
    return param_1;
  }
  func_0x18007ba70();
LAB_180347f35:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180347f40
void Unwind_180347f40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180347f70
void Unwind_180347f70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1009c) = 0;
  return;
}

// Unwind@180348260
void Unwind_180348260(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x100c8) = 0;
  return;
}

// Unwind@1803485e0
void Unwind_1803485e0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x100ec) = 0;
  return;
}

// Unwind@180348630
void Unwind_180348630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// func_0x180348670
void func_0x180348670(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t param_4, uint32_t param_5,uint32_t param_6)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint32_t local_a0;
  uint32_t uStack_9c;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint32_t local_90;
  uint32_t local_80;
  uint32_t local_70;
  int64_t local_60 [3];
  uint64_t local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_a0 = *param_3;
  uStack_9c = param_3[1];
  uStack_98 = param_3[2];
  uStack_94 = param_3[3];
  local_80 = param_5;
  local_70 = param_6;
  local_40 = 0x111d;
  local_38 = &local_a0;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
  local_90 = param_4;
  func_0x18063ff10(local_60,&local_30,&local_40);
  func_0x180116b80(param_1,local_60);
  if (0xf < local_48) {
    uVal_1 = local_48 + 1;
    lVal_2 = local_60[0];
    if (0xfff < uVal_1) {
      lVal_2 = *(int64_t *)(local_60[0] + -8);
      if (0x1f < (uint64_t)((local_60[0] + -8) - lVal_2)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_1 = local_48 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_2,uVal_1);
  }
  return;
}

// Unwind@180348740
void Unwind_180348740(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// func_0x180348770
/* WARNING: Removing unreachable block (ram,0x000180348bb2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x000180348bb2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180348770(uint64_t *param_1)
{
  uint8_t (*pArr16_1)[16];
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
  int64_t lVal_14;
  uint64_t uVal_15;
  uint8_t *pU64_16;
  uint64_t uVal_17;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint8_t local_98 [16];
  size_t local_88;
  uint64_t local_80;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t uStack_58;
  uint32_t uStack_57;
  uint32_t uStack_53;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  uStack_58 = UNK_1806c7598;
  uStack_57 = _UNK_1806c7599;
  uStack_53 = _UNK_1806c759d;
  local_68 = _DAT_1806c7588;
  uStack_64 = _UNK_1806c758c;
  uStack_60 = _UNK_1806c7590;
  uStack_5c = _UNK_1806c7594;
  local_78._4_4_ = _UNK_1806c757c;
  local_78._0_4_ = _DAT_1806c7578;
  uStack_70._0_4_ = _UNK_1806c7580;
  uStack_70._4_4_ = _UNK_1806c7584;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10118) == '\0') {
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_14 + 0x10118) = 1;
    func_0x180086af0(lVal_14 + 0x100ed,local_78);
    func_0x180673140(&LAB_1803697d0);
  }
  uVal_9 = _UNK_1806b2c9c;
  uVal_8 = _UNK_1806b2c98;
  uVal_7 = _UNK_1806b2c94;
  uVal_6 = _DAT_1806b2c90;
  lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pArr16_1 = (uint8_t (*)[16])(lVal_14 + 0x100ed);
  if (*(char *)(lVal_14 + 0x10116) == '\x01') {
    auArr_2._4_4_ = *(uint *)(lVal_14 + 0x100f1) ^ _UNK_1806b2c94;
    auArr_2._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b2c90;
    auArr_2._8_4_ = *(uint *)(lVal_14 + 0x100f5) ^ _UNK_1806b2c98;
    auArr_2._12_4_ = *(uint *)(lVal_14 + 0x100f9) ^ _UNK_1806b2c9c;
    *pArr16_1 = auArr_2;
    auArr_5._4_4_ = *(uint *)(lVal_14 + 0x10101) ^ uVal_7;
    auArr_5._0_4_ = *(uint *)(lVal_14 + 0x100fd) ^ uVal_6;
    auArr_5._8_4_ = *(uint *)(lVal_14 + 0x10105) ^ uVal_8;
    auArr_5._12_4_ = *(uint *)(lVal_14 + 0x10109) ^ uVal_9;
    *(uint8_t (*)[16])(lVal_14 + 0x100fd) = auArr_5;
    *(uint64_t *)(lVal_14 + 0x1010d) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_14 + 0x1010d) >> 0x20) ^ _UNK_1806b63e4,
                  (uint)*(uint64_t *)(lVal_14 + 0x1010d) ^ _DAT_1806b63e0);
    *(byte *)(lVal_14 + 0x10115) = *(byte *)(lVal_14 + 0x10115) ^ 0xcf;
    *(uint8_t *)(lVal_14 + 0x10116) = 0;
  }
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  _local_78 = ZEXT816(0);
  sz_13 = strlen((char *)pArr16_1);
  if ((int64_t)sz_13 < 0) {
    func_0x18007ba70();
  }
  else {
    if (sz_13 < 0x10) {
      pU64_16 = local_78;
      uVal_17 = 0xf;
    }
    else {
      uVal_15 = sz_13 | 0xf;
      uVal_17 = 0x16;
      if (0x16 < uVal_15) {
        uVal_17 = uVal_15;
      }
      if (uVal_15 < 0xfff) {
        pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
      }
      else {
        lVal_14 = func_0x180672de0(uVal_17 + 0x28);
        pU64_16 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_16 + -8) = lVal_14;
      }
      local_78 = (uint8_t  [8])pU64_16;
    }
    local_68 = (uint32_t)sz_13;
    uStack_64 = (uint32_t)(sz_13 >> 0x20);
    uStack_60 = (uint32_t)uVal_17;
    uStack_5c = (uint32_t)(uVal_17 >> 0x20);
    func_0x1806aa960(pU64_16,pArr16_1,sz_13);
    pU64_16[sz_13] = 0;
    local_a8 = _DAT_1806c75a1;
    uStack_a4 = _UNK_1806c75a5;
    uStack_a0 = _UNK_1806c75a9;
    uStack_9c = _UNK_1806c75ad;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x1012c) == '\0') {
      lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_14 + 0x1012c) = 1;
      func_0x18007d150(lVal_14 + 0x10119,&local_a8);
      func_0x180673140(&LAB_180369800);
    }
    lVal_14 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pArr16_1 = (uint8_t (*)[16])(lVal_14 + 0x10119);
    if (*(char *)(lVal_14 + 0x10129) == '\x01') {
      auArr_3._4_4_ = *(uint *)(lVal_14 + 0x1011d) ^ _UNK_1806b2c94;
      auArr_3._0_4_ = *(uint *)*pArr16_1 ^ _DAT_1806b2c90;
      auArr_3._8_4_ = *(uint *)(lVal_14 + 0x10121) ^ _UNK_1806b2c98;
      auArr_3._12_4_ = *(uint *)(lVal_14 + 0x10125) ^ _UNK_1806b2c9c;
      *pArr16_1 = auArr_3;
      *(uint8_t *)(lVal_14 + 0x10129) = 0;
    }
    local_98 = ZEXT816(0);
    sz_13 = strlen((char *)pArr16_1);
    if (-1 < (int64_t)sz_13) {
      if (sz_13 < 0x10) {
        pU64_16 = local_98;
        uVal_17 = 0xf;
      }
      else {
        uVal_15 = sz_13 | 0xf;
        uVal_17 = 0x16;
        if (0x16 < uVal_15) {
          uVal_17 = uVal_15;
        }
        if (uVal_15 < 0xfff) {
          pU64_16 = (uint8_t *)func_0x180672de0(uVal_17 + 1);
        }
        else {
          lVal_14 = func_0x180672de0(uVal_17 + 0x28);
          pU64_16 = (uint8_t *)(lVal_14 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_16 + -8) = lVal_14;
        }
        local_98._0_8_ = pU64_16;
      }
      local_88 = sz_13;
      local_80 = uVal_17;
      func_0x1806aa960(pU64_16,pArr16_1,sz_13);
      pU64_16[sz_13] = 0;
      func_0x180348cd0(param_1,local_98,local_78);
      if (0xf < local_80) {
        uVal_17 = local_80 + 1;
        lVal_14 = local_98._0_8_;
        if (0xfff < uVal_17) {
          lVal_14 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_14)) goto LAB_180348bb0;
          uVal_17 = local_80 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_14,uVal_17);
      }
      uVal_17 = CONCAT44(uStack_5c,uStack_60);
      if (0xf < uVal_17) {
        uVal_15 = uVal_17 + 1;
        lVal_14 = (int64_t)local_78;
        if (0xfff < uVal_15) {
          lVal_14 = *(int64_t *)((int64_t)local_78 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_14)) goto LAB_180348bb0;
          uVal_15 = uVal_17 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_14,uVal_15);
      }
      *param_1 = &PTR_LAB_1806c57c0;
      auArr_4._8_8_ = 0;
      auArr_4._0_8_ = DAT_1806c3ae0;
      *(uint8_t (*)[16])(param_1 + 0x17) = auArr_4;
      uVal_12 = _UNK_1806c3afc;
      uVal_11 = _UNK_1806c3af8;
      uVal_10 = _UNK_1806c3af4;
      *(uint32_t *)(param_1 + 0x19) = _DAT_1806c3af0;
      *(uint32_t *)((int64_t)param_1 + 0xcc) = uVal_10;
      *(uint32_t *)(param_1 + 0x1a) = uVal_11;
      *(uint32_t *)((int64_t)param_1 + 0xd4) = uVal_12;
      *(uint32_t *)(param_1 + 0x1b) = 0x3f800000;
      *(uint8_t *)((int64_t)param_1 + 0xdc) = 0;
      local_78 = (uint8_t  [8])0x1f4;
      local_40 = param_1;
      if ((uint64_t)(((int64_t)(param_1[0x12] - param_1[0x10]) >> 3) * 0x6db6db6db6db6db7) < 500)
      {
        func_0x180369820(param_1 + 0x10,local_78);
      }
      return local_40;
    }
  }
  func_0x18007ba70();
LAB_180348bb0:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180348bc0
void Unwind_180348bc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@180348bf0
void Unwind_180348bf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  return;
}

// Unwind@180348c20
void Unwind_180348c20(uint64_t param_1,int64_t param_2)
{
  func_0x18036e5e0(*(uint64_t *)(param_2 + 0x88));
  return;
}

// Unwind@180348c50
void Unwind_180348c50(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10118) = 0;
  return;
}

// Unwind@180348c90
void Unwind_180348c90(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1012c) = 0;
  return;
}

// func_0x180348cd0
uint64_t * func_0x180348cd0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t *pU64_1;
  uint64_t uVal_2;
  uint64_t *local_38;
  
  *param_1 = &PTR_FUN_1806c5860;
  pU64_1 = param_1 + 1;
  *(uint8_t (*)[16])(param_1 + 1) = ZEXT816(0);
  param_1[3] = 0;
  param_1[4] = 0xf;
  local_38 = param_1 + 5;
  *(uint8_t (*)[16])(param_1 + 5) = ZEXT816(0);
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(uint16_t *)(param_1 + 9) = 0x101;
  *(uint8_t (*)[16])(param_1 + 10) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xc) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0xe) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x10) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1 + 0x12) = ZEXT816(0);
  *(uint64_t *)((int64_t)param_1 + 0x9d) = 0;
  *(uint8_t (*)[16])(param_1 + 0x15) = ZEXT816(0);
  if (pU64_1 != param_2) {
    uVal_2 = param_2[2];
    if (0xf < (uint64_t)param_2[3]) {
      param_2 = (uint64_t *)*param_2;
    }
    if (uVal_2 < 0x10) {
      param_1[3] = uVal_2;
      func_0x1806aa960(pU64_1,param_2,uVal_2);
      *(uint8_t *)((int64_t)param_1 + uVal_2 + 8) = 0;
    }
    else {
      func_0x18007bba0(pU64_1,uVal_2);
    }
  }
  if (local_38 != param_3) {
    uVal_2 = param_3[2];
    if (0xf < (uint64_t)param_3[3]) {
      param_3 = (uint64_t *)*param_3;
    }
    if ((uint64_t)param_1[8] < uVal_2) {
      func_0x18007bba0(local_38,uVal_2);
    }
    else {
      if (0xf < (uint64_t)param_1[8]) {
        local_38 = (uint64_t *)param_1[5];
      }
      param_1[7] = uVal_2;
      func_0x1806aa960(local_38,param_3,uVal_2);
      *(uint8_t *)((int64_t)local_38 + uVal_2) = 0;
    }
  }
  return param_1;
}

// Unwind@180348e40
void Unwind_180348e40(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x48);
  func_0x1801d2400(lVal_1 + 0xb0);
  func_0x1801d2400(*(uint64_t *)(param_2 + 0x30));
  func_0x1800349b0(lVal_1 + 0x80);
  func_0x18034d9c0(lVal_1 + 0x68);
  func_0x1800349b0(*(uint64_t *)(param_2 + 0x28));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x40));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x38));
  return;
}

// Unwind@18034a3c0
void Unwind_18034a3c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x260);
  *(uint8_t *)(param_2 + 0x285) = 0;
  return;
}

// Unwind@18034a410
void Unwind_18034a410(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x285);
  func_0x180001e70(param_2 + 0x240);
  *(uint8_t *)(param_2 + 0x294) = 0;
  *(uint8_t *)(param_2 + 0x293) = uVal_1;
  return;
}

// Unwind@18034a470
void Unwind_18034a470(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  char ch_2;
  
  bFlag_1 = *(byte *)(param_2 + 0x293);
  ch_2 = *(char *)(param_2 + 0x294);
  if (ch_2 == '\x01') {
    func_0x180001e70(param_2 + 400);
  }
  *(char *)(param_2 + 0x292) = ch_2;
  *(byte *)(param_2 + 0x291) = bFlag_1 & 1;
  return;
}

// Unwind@18034a4e0
void Unwind_18034a4e0(uint64_t param_1,int64_t param_2)
{
  byte bFlag_1;
  
  bFlag_1 = *(byte *)(param_2 + 0x291);
  if (*(char *)(param_2 + 0x292) == '\x01') {
    func_0x180001e70(param_2 + 0x130);
  }
  *(byte *)(param_2 + 0x290) = bFlag_1 & 1;
  return;
}

// Unwind@18034a540
void Unwind_18034a540(uint64_t param_1,int64_t param_2)
{
  uint8_t uVal_1;
  
  uVal_1 = *(uint8_t *)(param_2 + 0x290);
  func_0x180001e70(param_2 + 0x200);
  *(uint8_t *)(param_2 + 0x297) = uVal_1;
  return;
}

// Unwind@18034a590
void Unwind_18034a590(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  
  if ((*(char *)(param_2 + 0x297) == '\x01') &&
     (pLong_1 = *(int64_t **)(param_2 + 0x88), pLong_1 != (int64_t *)0x0)) {
    (**(func_ptr_t *)(*pLong_1 + 0x20))(pLong_1,pLong_1 != (int64_t *)(param_2 + 0x50));
  }
  return;
}
