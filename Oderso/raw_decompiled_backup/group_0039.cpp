#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@180379430
void Unwind_180379430(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  return;
}

// Unwind@180379480
void Unwind_180379480(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@1803794d0
void Unwind_1803794d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  return;
}

// Unwind@180379520
void Unwind_180379520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180379570
void Unwind_180379570(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@1803795c0
void Unwind_1803795c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180379610
void Unwind_180379610(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  return;
}

// Unwind@180379660
void Unwind_180379660(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@1803796b0
void Unwind_1803796b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x316) = 0;
  return;
}

// Unwind@180379700
void Unwind_180379700(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x316) == '\x01') {
    func_0x180001e70(param_2 + 0x1d0);
  }
  return;
}

// Unwind@180379750
void Unwind_180379750(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@1803797a0
void Unwind_1803797a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x290);
  *(uint8_t *)(param_2 + 0x317) = 0;
  return;
}

// Unwind@1803797f0
void Unwind_1803797f0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x317) == '\x01') {
    func_0x180001e70(param_2 + 0x1f0);
  }
  return;
}

// Unwind@180379840
void Unwind_180379840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180379890
void Unwind_180379890(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@1803798c0
void Unwind_1803798c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2f0);
  return;
}

// Unwind@180379910
void Unwind_180379910(uint64_t param_1,int64_t param_2)
{
  func_0x1800bffd0(param_2 + 0x38);
  return;
}

// Unwind@180379950
void Unwind_180379950(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10fec) = 0;
  return;
}

// Unwind@1803799b0
void Unwind_1803799b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11024) = 0;
  *(uint8_t *)(param_2 + 0x317) = 1;
  return;
}

// func_0x180379a10
uint64_t func_0x180379a10(int64_t *param_1)
{
  int *pInt_1;
  int64_t *pLong_2;
  char ch_3;
  char ch_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  func_ptr_t fnPtr_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  int64_t lVal_11;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    lVal_10 = *param_1;
    lVal_5 = *(int64_t *)(lVal_10 + 8);
    ch_3 = *(char *)(lVal_5 + 0x19);
    lVal_11 = lVal_10;
    lVal_6 = lVal_5;
    ch_4 = ch_3;
    while (ch_4 == '\0') {
      if (0x67b42d5 < *(int *)(lVal_6 + 0x20)) {
        lVal_11 = lVal_6;
      }
      lVal_6 = *(int64_t *)(lVal_6 + (uint64_t)(*(int *)(lVal_6 + 0x20) < 0x67b42d6) * 0x10);
      ch_4 = *(char *)(lVal_6 + 0x19);
    }
    if ((*(char *)(lVal_11 + 0x19) == '\0') && (*(int *)(lVal_11 + 0x20) < 0x67b42d7)) {
      while (ch_3 == '\0') {
        if (0x67b42d5 < *(int *)(lVal_5 + 0x20)) {
          lVal_10 = lVal_5;
        }
        lVal_5 = *(int64_t *)(lVal_5 + (uint64_t)(*(int *)(lVal_5 + 0x20) < 0x67b42d6) * 0x10);
        ch_3 = *(char *)(lVal_5 + 0x19);
      }
      if ((*(char *)(lVal_10 + 0x19) != '\0') || (0x67b42d6 < *(int *)(lVal_10 + 0x20))) {
        func_0x1806744f0("invalid map<K, T> key");
        fnPtr_8 = (func_ptr_t )swi(3);
        uVal_9 = (*fnPtr_8)();
        return uVal_9;
      }
      if (*(int64_t *)(lVal_10 + 0x30) == 0) {
        return *(uint64_t *)(lVal_10 + 0x28);
      }
      LOCK();
      pInt_1 = (int *)(*(int64_t *)(lVal_10 + 0x30) + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
      uVal_9 = *(uint64_t *)(lVal_10 + 0x28);
      pLong_7 = *(int64_t **)(lVal_10 + 0x30);
      if (pLong_7 == (int64_t *)0x0) {
        return uVal_9;
      }
      LOCK();
      pLong_2 = pLong_7 + 1;
      *(int *)pLong_2 = *(int *)pLong_2 + -1;
      UNLOCK();
      if (*(int *)pLong_2 != 0) {
        return uVal_9;
      }
      (**(func_ptr_t *)*pLong_7)(pLong_7);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
      return uVal_9;
    }
  }
  return 0;
}

// func_0x180379b10
int64_t func_0x180379b10(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10efc) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x10efc) = 1;
    *(uint32_t *)(lVal_1 + 0x10ef4) = 0x81efc7d;
    *(uint16_t *)(lVal_1 + 0x10ef8) = 0x1a9;
    func_0x180673140(&LAB_18042c0f0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10ef4;
}

// func_0x180379b90
int64_t func_0x180379b90(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10f08) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x10f08) = 1;
    *(uint32_t *)(lVal_1 + 0x10f00) = 0x5c1af27d;
    *(uint16_t *)(lVal_1 + 0x10f04) = 0x1a9;
    func_0x180673140(&LAB_18042c120);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10f00;
}

// func_0x180379c10
int64_t func_0x180379c10(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x10f14) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x10f14) = 1;
    *(uint8_t *)(lVal_1 + 0x10f12) = 1;
    *(uint32_t *)(lVal_1 + 0x10f0c) = 0xc18f67d;
    *(uint16_t *)(lVal_1 + 0x10f10) = 0xfd9a;
    func_0x180673140(&LAB_18042c150);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x10f0c;
}

// Unwind@18037b7d0
void Unwind_18037b7d0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x230);
  func_0x1800565c0(param_2 + 0x40);
  return;
}

// Unwind@18037b820
void Unwind_18037b820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  return;
}

// Unwind@18037b870
void Unwind_18037b870(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1f0);
  return;
}

// Unwind@18037b8c0
void Unwind_18037b8c0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x240);
  return;
}

// Unwind@18037b910
void Unwind_18037b910(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x150);
  return;
}

// Unwind@18037b960
void Unwind_18037b960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@18037b9b0
void Unwind_18037b9b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18037ba00
void Unwind_18037ba00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18037ba40
void Unwind_18037ba40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@18037ba80
void Unwind_18037ba80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18037bad0
void Unwind_18037bad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1c0);
  return;
}

// Unwind@18037bb20
void Unwind_18037bb20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x240);
  return;
}

// Unwind@18037bb70
void Unwind_18037bb70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x268);
  return;
}

// Unwind@18037bbc0
void Unwind_18037bbc0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x60);
  func_0x18001deb0(param_2 + 0x1b0);
  func_0x18001deb0(param_2 + 0x230);
  func_0x1800565c0(param_2 + 0x40);
  func_0x180001e70(param_2 + 0x170);
  func_0x180001e70(param_2 + 0x1f0);
  return;
}

// Unwind@18037bc40
void Unwind_18037bc40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x1e8));
  return;
}

// func_0x18037bc90
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18037bc90(uint64_t *param_1)
{
  uint64_t *pU64_1;
  uint *_Str;
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
  uint uVal_13;
  uint uVal_14;
  uint uVal_15;
  uint8_t local_b8 [16];
  size_t local_a8;
  uint64_t uStack_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint64_t local_88;
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11114) == '\0') {
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_10 + 0x11114) = 1;
    *(uint8_t *)(lVal_10 + 0x11110) = 1;
    *(uint64_t *)(lVal_10 + 0x11108) = 0x4795a8c2f2ceaebb;
    func_0x180673140(&LAB_18042c4e0);
  }
  lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_10 + 0x11108);
  if (*(char *)(lVal_10 + 0x11110) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0x47abcda593a3c787;
    *(uint8_t *)(lVal_10 + 0x11110) = 0;
  }
  local_78 = ZEXT816(0);
  sz_8 = strlen((char *)pU64_1);
  if ((int64_t)sz_8 < 0) {
    func_0x18007ba70();
LAB_18037c196:
    func_0x18007ba70();
  }
  else {
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
      local_78._0_8_ = pU64_11;
    }
    local_68 = sz_8;
    local_60 = uVal_12;
    func_0x1806aa960(pU64_11,pU64_1,sz_8);
    pU64_11[sz_8] = 0;
    local_98 = _DAT_1806cac4b;
    uStack_94 = _UNK_1806cac4f;
    uStack_90 = _UNK_1806cac53;
    uStack_8c = _UNK_1806cac57;
    local_a8 = CONCAT44(_UNK_1806cac3f,_DAT_1806cac3b);
    uStack_a0 = CONCAT44(_UNK_1806cac47,_UNK_1806cac43);
    local_b8._8_8_ = _UNK_1806cac33;
    local_b8._0_8_ = _DAT_1806cac2b;
    local_88 = 0x47cea1d0f7ccaaa7;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11150) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x11150) = 1;
      func_0x18012b940(lVal_10 + 0x11115,local_b8);
      func_0x180673140(&LAB_18042c500);
    }
    uVal_7 = _UNK_1806b2d7c;
    uVal_6 = _UNK_1806b2d78;
    uVal_5 = _UNK_1806b2d74;
    uVal_4 = _DAT_1806b2d70;
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint *)(lVal_10 + 0x11115);
    if (*(char *)(lVal_10 + 0x1114d) == '\x01') {
      uVal_13 = *(uint *)(lVal_10 + 0x11119) ^ _UNK_1806b2d74;
      uVal_14 = *(uint *)(lVal_10 + 0x1111d) ^ _UNK_1806b2d78;
      uVal_15 = *(uint *)(lVal_10 + 0x11121) ^ _UNK_1806b2d7c;
      *_Str = *_Str ^ _DAT_1806b2d70;
      *(uint *)(lVal_10 + 0x11119) = uVal_13;
      *(uint *)(lVal_10 + 0x1111d) = uVal_14;
      *(uint *)(lVal_10 + 0x11121) = uVal_15;
      auArr_2._4_4_ = *(uint *)(lVal_10 + 0x11129) ^ uVal_5;
      auArr_2._0_4_ = *(uint *)(lVal_10 + 0x11125) ^ uVal_4;
      auArr_2._8_4_ = *(uint *)(lVal_10 + 0x1112d) ^ uVal_6;
      auArr_2._12_4_ = *(uint *)(lVal_10 + 0x11131) ^ uVal_7;
      *(uint8_t (*)[16])(lVal_10 + 0x11125) = auArr_2;
      auArr_3._4_4_ = *(uint *)(lVal_10 + 0x11139) ^ uVal_5;
      auArr_3._0_4_ = *(uint *)(lVal_10 + 0x11135) ^ uVal_4;
      auArr_3._8_4_ = *(uint *)(lVal_10 + 0x1113d) ^ uVal_6;
      auArr_3._12_4_ = *(uint *)(lVal_10 + 0x11141) ^ uVal_7;
      *(uint8_t (*)[16])(lVal_10 + 0x11135) = auArr_3;
      *(uint64_t *)(lVal_10 + 0x11145) = *(uint64_t *)(lVal_10 + 0x11145) ^ SUB168(_DAT_1806b5c20,0)
      ;
      *(uint8_t *)(lVal_10 + 0x1114d) = 0;
    }
    local_48 = (uint8_t  [16])0x0;
    local_58 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)_Str);
    if ((int64_t)sz_8 < 0) goto LAB_18037c196;
    if (sz_8 < 0x10) {
      uVal_12 = 0xf;
      pU64_11 = local_58;
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
      local_58._0_8_ = pU64_11;
    }
    local_48._8_8_ = uVal_12;
    local_48._0_8_ = sz_8;
    func_0x1806aa960(pU64_11,_Str,sz_8);
    pU64_11[sz_8] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11164) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x11164) = 1;
      *(uint64_t *)(lVal_10 + 0x11158) = 0x2bd9a8d3fcd7a2f4;
      *(uint32_t *)(lVal_10 + 0x11160) = 0x1a3bee6;
      func_0x180673140(&LAB_18042c540);
    }
    lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_10 + 0x11158);
    if (*(char *)(lVal_10 + 0x11163) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0x47abcda593a3c787;
      *(uint *)(lVal_10 + 0x11160) =
           (*(uint *)(lVal_10 + 0x11160) & 0xffff | (uint)*(byte *)(lVal_10 + 0x11162) << 0x10) ^
           SUB164(_DAT_1806b6500,0);
    }
    local_b8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_8) {
      if (sz_8 < 0x10) {
        pU64_11 = local_b8;
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
        local_b8._0_8_ = pU64_11;
      }
      local_a8 = sz_8;
      uStack_a0 = uVal_12;
      func_0x1806aa960(pU64_11,pU64_1,sz_8);
      pU64_11[sz_8] = 0;
      func_0x1804c9aa0(param_1,local_b8,local_58,local_78);
      if (0xf < uStack_a0) {
        uVal_12 = uStack_a0 + 1;
        lVal_10 = local_b8._0_8_;
        if (0xfff < uVal_12) {
          lVal_10 = *(int64_t *)(local_b8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_10)) goto LAB_18037c1a2;
          uVal_12 = uStack_a0 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_12);
      }
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_12 = local_48._8_8_ + 1;
        lVal_10 = local_58._0_8_;
        if (0xfff < uVal_12) {
          lVal_10 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_10)) goto LAB_18037c1a2;
          uVal_12 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_12);
      }
      if (0xf < local_60) {
        uVal_12 = local_60 + 1;
        lVal_10 = local_78._0_8_;
        if (0xfff < uVal_12) {
          lVal_10 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_10)) goto LAB_18037c1a2;
          uVal_12 = local_60 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_12);
      }
      *param_1 = &PTR_LAB_1806c9750;
      return param_1;
    }
  }
  func_0x18007ba70();
LAB_18037c1a2:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18037c1b0
void Unwind_18037c1b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18037c1e0
void Unwind_18037c1e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@18037c210
void Unwind_18037c210(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18037c240
void Unwind_18037c240(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11150) = 0;
  return;
}

// Unwind@18037e5d0
void Unwind_18037e5d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@18037e620
void Unwind_18037e620(void)
{
  func_0x180672f60(&DAT_1808400e8);
  return;
}

// Unwind@18037e670
void Unwind_18037e670(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  return;
}

// Unwind@18037e6c0
void Unwind_18037e6c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18037e710
void Unwind_18037e710(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@18037e760
void Unwind_18037e760(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18037e7b0
void Unwind_18037e7b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18037e800
void Unwind_18037e800(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18037e850
void Unwind_18037e850(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@18037e8a0
void Unwind_18037e8a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18037e8f0
void Unwind_18037e8f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  *(uint8_t *)(param_2 + 0x296) = 0;
  return;
}

// Unwind@18037e940
void Unwind_18037e940(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x296) == '\x01') {
    func_0x180001e70(param_2 + 0x150);
  }
  return;
}

// Unwind@18037e990
void Unwind_18037e990(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18037e9e0
void Unwind_18037e9e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x297) = 0;
  return;
}

// Unwind@18037ea30
void Unwind_18037ea30(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x297) == '\x01') {
    func_0x180001e70(param_2 + 0x170);
  }
  return;
}

// Unwind@18037ea80
void Unwind_18037ea80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  return;
}

// Unwind@18037ead0
void Unwind_18037ead0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  return;
}

// Unwind@18037eb20
void Unwind_18037eb20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x210);
  return;
}

// Unwind@18037eb70
void Unwind_18037eb70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11328) = 0;
  return;
}

// Unwind@18037ebd0
void Unwind_18037ebd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@18037ec20
void Unwind_18037ec20(uint64_t param_1,int64_t param_2)
{
  func_0x1800bffd0(param_2 + 0x28);
  return;
}

// Unwind@18037ec60
void Unwind_18037ec60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x111e0) = 0;
  return;
}

// Unwind@18037ecc0
void Unwind_18037ecc0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11280) = 0;
  return;
}

// Unwind@18037ed20
void Unwind_18037ed20(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x112bc) = 0;
  *(uint8_t *)(param_2 + 0x297) = 1;
  return;
}

// Unwind@18037ed80
void Unwind_18037ed80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18037edd0
void Unwind_18037edd0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18037ee00
uint64_t func_0x18037ee00(int64_t *param_1)
{
  int *pInt_1;
  int64_t *pLong_2;
  char ch_3;
  char ch_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  func_ptr_t fnPtr_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  int64_t lVal_11;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    lVal_10 = *param_1;
    lVal_5 = *(int64_t *)(lVal_10 + 8);
    ch_3 = *(char *)(lVal_5 + 0x19);
    lVal_11 = lVal_10;
    lVal_6 = lVal_5;
    ch_4 = ch_3;
    while (ch_4 == '\0') {
      if (-0x61bc6d3f < *(int *)(lVal_6 + 0x20)) {
        lVal_11 = lVal_6;
      }
      lVal_6 = *(int64_t *)(lVal_6 + (uint64_t)(*(int *)(lVal_6 + 0x20) < -0x61bc6d3e) * 0x10);
      ch_4 = *(char *)(lVal_6 + 0x19);
    }
    if ((*(char *)(lVal_11 + 0x19) == '\0') && (*(int *)(lVal_11 + 0x20) < -0x61bc6d3d)) {
      while (ch_3 == '\0') {
        if (-0x61bc6d3f < *(int *)(lVal_5 + 0x20)) {
          lVal_10 = lVal_5;
        }
        lVal_5 = *(int64_t *)(lVal_5 + (uint64_t)(*(int *)(lVal_5 + 0x20) < -0x61bc6d3e) * 0x10);
        ch_3 = *(char *)(lVal_5 + 0x19);
      }
      if ((*(char *)(lVal_10 + 0x19) != '\0') || (-0x61bc6d3e < *(int *)(lVal_10 + 0x20))) {
        func_0x1806744f0("invalid map<K, T> key");
        fnPtr_8 = (func_ptr_t )swi(3);
        uVal_9 = (*fnPtr_8)();
        return uVal_9;
      }
      if (*(int64_t *)(lVal_10 + 0x30) == 0) {
        return *(uint64_t *)(lVal_10 + 0x28);
      }
      LOCK();
      pInt_1 = (int *)(*(int64_t *)(lVal_10 + 0x30) + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
      uVal_9 = *(uint64_t *)(lVal_10 + 0x28);
      pLong_7 = *(int64_t **)(lVal_10 + 0x30);
      if (pLong_7 == (int64_t *)0x0) {
        return uVal_9;
      }
      LOCK();
      pLong_2 = pLong_7 + 1;
      *(int *)pLong_2 = *(int *)pLong_2 + -1;
      UNLOCK();
      if (*(int *)pLong_2 != 0) {
        return uVal_9;
      }
      (**(func_ptr_t *)*pLong_7)(pLong_7);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
      return uVal_9;
    }
  }
  return 0;
}

// Unwind@1803800a0
void Unwind_1803800a0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x180);
  func_0x1800565c0(param_2 + 0x30);
  return;
}

// Unwind@1803800f0
void Unwind_1803800f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180380130
void Unwind_180380130(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@180380170
void Unwind_180380170(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 400);
  return;
}

// Unwind@1803801c0
void Unwind_1803801c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe0);
  return;
}

// Unwind@180380200
void Unwind_180380200(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@180380250
void Unwind_180380250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x130);
  return;
}

// Unwind@1803802a0
void Unwind_1803802a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@1803802f0
void Unwind_1803802f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b8);
  return;
}

// Unwind@180380340
void Unwind_180380340(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x50);
  func_0x18001deb0(param_2 + 0x120);
  func_0x18001deb0(param_2 + 0x180);
  func_0x1800565c0(param_2 + 0x30);
  func_0x180001e70(param_2 + 0x80);
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@1803803c0
void Unwind_1803803c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x158));
  return;
}

// func_0x180380410
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180380410(uint64_t *param_1)
{
  uint64_t *pU64_1;
  char *_Str;
  uint64_t *pU64_2;
  size_t sz_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint64_t uVal_7;
  uint8_t local_b8 [16];
  size_t local_a8;
  uint64_t local_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [24];
  uint64_t *local_70;
  uint8_t local_68 [16];
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1138c) == '\0') {
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_5 + 0x1138c) = 1;
    *(uint64_t *)(lVal_5 + 0x11380) = 0xe913be51b03f2549;
    *(uint16_t *)(lVal_5 + 0x11388) = 0x175;
    func_0x180673140(&LAB_18042c950);
  }
  lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_5 + 0x11380);
  if (*(char *)(lVal_5 + 0x11389) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xd76bd737d54d5575;
    *(byte *)(lVal_5 + 0x11388) = *(byte *)(lVal_5 + 0x11388) ^ 0x75;
    *(uint8_t *)(lVal_5 + 0x11389) = 0;
  }
  local_b8 = ZEXT816(0);
  sz_3 = strlen((char *)pU64_1);
  if ((int64_t)sz_3 < 0) {
    func_0x18007ba70();
LAB_180380a58:
    func_0x18007ba70();
LAB_180380a5e:
    func_0x18007ba70();
  }
  else {
    if (sz_3 < 0x10) {
      pU64_6 = local_b8;
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
      local_b8._0_8_ = pU64_6;
    }
    local_a8 = sz_3;
    local_a0 = uVal_7;
    func_0x1806aa960(pU64_6,pU64_1,sz_3);
    pU64_6[sz_3] = 0;
    local_58 = _DAT_1806cadaf;
    uStack_54 = _UNK_1806cadb3;
    uStack_50 = _UNK_1806cadb7;
    local_68._8_8_ = _UNK_1806cada7;
    local_68._0_8_ = _DAT_1806cad9f;
    uStack_4c = CONCAT13(0xb9,(int3)_UNK_1806cadbb);
    uStack_48 = CONCAT13(uStack_48._3_1_,0x4d2611);
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x113b4) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x113b4) = 1;
      func_0x1801b30c0(lVal_5 + 0x1138d,local_68);
      func_0x180673140(&LAB_18042c980);
    }
    _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x1138d);
    func_0x180439d40(_Str);
    local_88._0_16_ = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_3 = strlen(_Str);
    if ((int64_t)sz_3 < 0) goto LAB_180380a58;
    if (sz_3 < 0x10) {
      pU64_6 = local_98;
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
      local_98._0_8_ = pU64_6;
    }
    local_88._8_8_ = uVal_7;
    local_88._0_8_ = sz_3;
    func_0x1806aa960(pU64_6,_Str,sz_3);
    pU64_6[sz_3] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x113c4) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x113c4) = 1;
      *(uint8_t *)(lVal_5 + 0x113c2) = 1;
      *(uint64_t *)(lVal_5 + 0x113b8) = 0xbe0db245a5393006;
      *(uint16_t *)(lVal_5 + 0x113c0) = 0x550d;
      func_0x180673140(&LAB_18042c9b0);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_5 + 0x113b8);
    if (*(char *)(lVal_5 + 0x113c2) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xd76bd737d54d5575;
      *(byte *)(lVal_5 + 0x113c0) = *(byte *)(lVal_5 + 0x113c0) ^ 0x75;
      *(byte *)(lVal_5 + 0x113c1) = *(byte *)(lVal_5 + 0x113c1) ^ 0x55;
      *(uint8_t *)(lVal_5 + 0x113c2) = 0;
    }
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_68 = (uint8_t  [16])0x0;
    sz_3 = strlen((char *)pU64_1);
    if ((int64_t)sz_3 < 0) goto LAB_180380a5e;
    if (sz_3 < 0x10) {
      pU64_6 = local_68;
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
      local_68._0_8_ = pU64_6;
    }
    local_58 = (uint32_t)sz_3;
    uStack_54 = (uint32_t)(sz_3 >> 0x20);
    uStack_50 = (uint32_t)uVal_7;
    uStack_4c = (uint32_t)(uVal_7 >> 0x20);
    func_0x1806aa960(pU64_6,pU64_1,sz_3);
    pU64_6[sz_3] = 0;
    pU64_6 = local_68;
    func_0x1804c9aa0(param_1,pU64_6,local_98,local_b8);
    uVal_7 = CONCAT44(uStack_4c,uStack_50);
    if (0xf < uVal_7) {
      uVal_4 = uVal_7 + 1;
      lVal_5 = local_68._0_8_;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(local_68._0_8_ + -8);
        if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_5)) goto LAB_180380a6a;
        uVal_4 = uVal_7 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_7 = local_88._8_8_ + 1;
      lVal_5 = local_98._0_8_;
      if (0xfff < uVal_7) {
        lVal_5 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_5)) goto LAB_180380a6a;
        uVal_7 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_7);
    }
    if (0xf < local_a0) {
      uVal_7 = local_a0 + 1;
      lVal_5 = local_b8._0_8_;
      if (0xfff < uVal_7) {
        lVal_5 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_5)) goto LAB_180380a6a;
        uVal_7 = local_a0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_7);
    }
    *param_1 = &PTR_LAB_1806c9790;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x113d0) == '\0') {
      lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_5 + 0x113d0) = 1;
      *(uint64_t *)(lVal_5 + 0x113c8) = 0x1b5cbd8a1183703;
      func_0x180673140(&LAB_18042c9e0);
    }
    lVal_5 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_5 + 0x113c8);
    if (*(char *)(lVal_5 + 0x113cf) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_5 + 0x113cd) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_5 + 0x113cc) << 0x20) ^ SUB168(_DAT_1806ae200,0);
    }
    local_68 = (uint8_t  [16])0x0;
    sz_3 = strlen((char *)pU64_1);
    local_70 = param_1;
    if (-1 < (int64_t)sz_3) {
      uVal_7 = 0xf;
      if (0xf < sz_3) {
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
        local_68._0_8_ = pU64_6;
      }
      pU64_2 = local_70;
      local_58 = (uint32_t)sz_3;
      uStack_54 = (uint32_t)(sz_3 >> 0x20);
      uStack_50 = (uint32_t)uVal_7;
      uStack_4c = (uint32_t)(uVal_7 >> 0x20);
      func_0x1806aa960(pU64_6,pU64_1,sz_3);
      pU64_6[sz_3] = 0;
      func_0x1804c9cb0(pU64_2,local_68);
      pU64_2 = local_70;
      uVal_7 = CONCAT44(uStack_4c,uStack_50);
      if (0xf < uVal_7) {
        uVal_4 = uVal_7 + 1;
        lVal_5 = local_68._0_8_;
        if (0xfff < uVal_4) {
          lVal_5 = *(int64_t *)(local_68._0_8_ + -8);
          if (0x1f < (uint64_t)((local_68._0_8_ + -8) - lVal_5)) goto LAB_180380a6a;
          uVal_4 = uVal_7 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_4);
      }
      return pU64_2;
    }
  }
  func_0x18007ba70();
LAB_180380a6a:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180380a70
void Unwind_180380a70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180380aa0
void Unwind_180380aa0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180380ad0
void Unwind_180380ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180380b00
void Unwind_180380b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180380b30
void Unwind_180380b30(uint64_t param_1,int64_t param_2)
{
  func_0x1804c9cc0(*(uint64_t *)(param_2 + 0x68));
  return;
}

// Unwind@180380b60
void Unwind_180380b60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x113b4) = 0;
  return;
}

// Unwind@180380e30
void Unwind_180380e30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@180380e70
void Unwind_180380e70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x113e8) = 0;
  return;
}

// func_0x180380ec0
void func_0x180380ec0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t *param_4, uint8_t param_5)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint32_t local_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint32_t local_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint8_t local_70;
  int64_t local_60 [3];
  uint64_t local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  uStack_84 = param_3[3];
  local_80 = *param_4;
  uStack_7c = param_4[1];
  uStack_78 = param_4[2];
  uStack_74 = param_4[3];
  local_70 = param_5;
  local_40 = 0x8dd;
  local_38 = &local_90;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
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

// Unwind@180380f90
void Unwind_180380f90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// func_0x180380fc0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180380fc0(uint64_t *param_1)
{
  uint *pU64_1;
  uint64_t *_Str;
  uint uVal_2;
  uint uVal_3;
  uint uVal_4;
  uint uVal_5;
  uint64_t *pU64_6;
  size_t sz_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint8_t *pU64_10;
  uint64_t uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint uVal_14;
  uint8_t local_b8 [16];
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint64_t local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  undefined7 uStack_48;
  uint64_t *local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68._4_4_ = _UNK_1806cadeb;
  local_68._0_4_ = _DAT_1806cade7;
  uStack_60._0_4_ = _UNK_1806cadef;
  uStack_60._4_4_ = _UNK_1806cadf3;
  local_78._4_4_ = _UNK_1806caddb;
  local_78._0_4_ = _DAT_1806cadd7;
  uStack_70._0_4_ = _UNK_1806caddf;
  uStack_70._4_4_ = _UNK_1806cade3;
  local_58 = 0xe9e8d6d6a60e3616;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11414) == '\0') {
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_9 + 0x11414) = 1;
    func_0x1801b39d0(lVal_9 + 0x113e9,local_78);
    func_0x180673140(&LAB_18042ca40);
  }
  uVal_5 = _UNK_1806b2cac;
  uVal_4 = _UNK_1806b2ca8;
  uVal_3 = _UNK_1806b2ca4;
  uVal_2 = _DAT_1806b2ca0;
  lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_9 + 0x113e9);
  if (*(char *)(lVal_9 + 0x11411) == '\x01') {
    uVal_12 = *(uint *)(lVal_9 + 0x113ed) ^ _UNK_1806b2ca4;
    uVal_13 = *(uint *)(lVal_9 + 0x113f1) ^ _UNK_1806b2ca8;
    uVal_14 = *(uint *)(lVal_9 + 0x113f5) ^ _UNK_1806b2cac;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
    *(uint *)(lVal_9 + 0x113ed) = uVal_12;
    *(uint *)(lVal_9 + 0x113f1) = uVal_13;
    *(uint *)(lVal_9 + 0x113f5) = uVal_14;
    *(uint *)(lVal_9 + 0x113f9) = *(uint *)(lVal_9 + 0x113f9) ^ uVal_2;
    *(uint *)(lVal_9 + 0x113fd) = *(uint *)(lVal_9 + 0x113fd) ^ uVal_3;
    *(uint *)(lVal_9 + 0x11401) = *(uint *)(lVal_9 + 0x11401) ^ uVal_4;
    *(uint *)(lVal_9 + 0x11405) = *(uint *)(lVal_9 + 0x11405) ^ uVal_5;
    *(uint64_t *)(lVal_9 + 0x11409) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_9 + 0x11409) >> 0x20) ^ _UNK_1806b5c14,
                  (uint)*(uint64_t *)(lVal_9 + 0x11409) ^ _DAT_1806b5c10);
    *(uint8_t *)(lVal_9 + 0x11411) = 0;
  }
  local_b8 = ZEXT816(0);
  local_a8 = local_b8;
  sz_7 = strlen((char *)pU64_1);
  if ((int64_t)sz_7 < 0) {
    func_0x18007ba70();
LAB_18038168b:
    func_0x18007ba70();
LAB_180381691:
    func_0x18007ba70();
  }
  else {
    if (sz_7 < 0x10) {
      pU64_10 = local_b8;
      uVal_11 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_8) {
        uVal_11 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_9;
      }
      local_b8._0_8_ = pU64_10;
    }
    local_a8._8_8_ = uVal_11;
    local_a8._0_8_ = sz_7;
    func_0x1806aa960(pU64_10,pU64_1,sz_7);
    pU64_10[sz_7] = 0;
    local_58 = CONCAT44(_UNK_1806cae23,_DAT_1806cae1f);
    uStack_50 = _UNK_1806cae27;
    local_68._4_4_ = _UNK_1806cae13;
    local_68._0_4_ = _DAT_1806cae0f;
    uStack_60._0_4_ = _UNK_1806cae17;
    uStack_60._4_4_ = _UNK_1806cae1b;
    uStack_70 = _UNK_1806cae07;
    local_78 = (uint8_t  [8])_DAT_1806cadff;
    uStack_4c = CONCAT13(0x9d,(int3)_UNK_1806cae2b);
    uStack_48 = 0xb5cad4ac092a3b;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11450) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x11450) = 1;
      func_0x1801bb8d0(lVal_9 + 0x11415,local_78);
      func_0x180673140(&LAB_18042ca70);
    }
    uVal_5 = _UNK_1806b2cac;
    uVal_4 = _UNK_1806b2ca8;
    uVal_3 = _UNK_1806b2ca4;
    uVal_2 = _DAT_1806b2ca0;
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_9 + 0x11415);
    if (*(char *)(lVal_9 + 0x1144c) == '\x01') {
      uVal_12 = *(uint *)(lVal_9 + 0x11419) ^ _UNK_1806b2ca4;
      uVal_13 = *(uint *)(lVal_9 + 0x1141d) ^ _UNK_1806b2ca8;
      uVal_14 = *(uint *)(lVal_9 + 0x11421) ^ _UNK_1806b2cac;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_9 + 0x11419) = uVal_12;
      *(uint *)(lVal_9 + 0x1141d) = uVal_13;
      *(uint *)(lVal_9 + 0x11421) = uVal_14;
      *(uint *)(lVal_9 + 0x11425) = *(uint *)(lVal_9 + 0x11425) ^ uVal_2;
      *(uint *)(lVal_9 + 0x11429) = *(uint *)(lVal_9 + 0x11429) ^ uVal_3;
      *(uint *)(lVal_9 + 0x1142d) = *(uint *)(lVal_9 + 0x1142d) ^ uVal_4;
      *(uint *)(lVal_9 + 0x11431) = *(uint *)(lVal_9 + 0x11431) ^ uVal_5;
      *(uint *)(lVal_9 + 0x11435) = *(uint *)(lVal_9 + 0x11435) ^ uVal_2;
      *(uint *)(lVal_9 + 0x11439) = *(uint *)(lVal_9 + 0x11439) ^ uVal_3;
      *(uint *)(lVal_9 + 0x1143d) = *(uint *)(lVal_9 + 0x1143d) ^ uVal_4;
      *(uint *)(lVal_9 + 0x11441) = *(uint *)(lVal_9 + 0x11441) ^ uVal_5;
      *(uint *)(lVal_9 + 0x11445) = *(uint *)(lVal_9 + 0x11445) ^ 0xc77d4573;
      *(byte *)(lVal_9 + 0x11449) = *(byte *)(lVal_9 + 0x11449) ^ 0xb1;
      *(byte *)(lVal_9 + 0x1144a) = *(byte *)(lVal_9 + 0x1144a) ^ 0xb3;
      *(byte *)(lVal_9 + 0x1144b) = *(byte *)(lVal_9 + 0x1144b) ^ 0xb5;
      *(uint8_t *)(lVal_9 + 0x1144c) = 0;
    }
    local_88 = (uint8_t  [16])0x0;
    local_98 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_1);
    if ((int64_t)sz_7 < 0) goto LAB_18038168b;
    if (sz_7 < 0x10) {
      pU64_10 = local_98;
      uVal_11 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_8) {
        uVal_11 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_9;
      }
      local_98._0_8_ = pU64_10;
    }
    local_88._8_8_ = uVal_11;
    local_88._0_8_ = sz_7;
    func_0x1806aa960(pU64_10,pU64_1,sz_7);
    pU64_10[sz_7] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11464) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x11464) = 1;
      *(uint64_t *)(lVal_9 + 0x11458) = 0x82c1dcd9b3052007;
      *(uint32_t *)(lVal_9 + 0x11460) = 0x17d3c16;
      func_0x180673140(&LAB_18042cab0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint64_t *)(lVal_9 + 0x11458);
    if (*(char *)(lVal_9 + 0x11463) == '\x01') {
      *_Str = *_Str ^ 0xe9b5b3b1c77d4573;
      *(uint *)(lVal_9 + 0x11460) =
           (*(uint *)(lVal_9 + 0x11460) & 0xffff | (uint)*(byte *)(lVal_9 + 0x11462) << 0x10) ^
           SUB164(_DAT_1806b69b0,0);
    }
    _local_68 = (uint8_t  [16])0x0;
    _local_78 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)_Str);
    if ((int64_t)sz_7 < 0) goto LAB_180381691;
    if (sz_7 < 0x10) {
      pU64_10 = local_78;
      uVal_11 = 0xf;
    }
    else {
      uVal_8 = sz_7 | 0xf;
      uVal_11 = 0x16;
      if (0x16 < uVal_8) {
        uVal_11 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_11 + 0x28);
        pU64_10 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_10 + -8) = lVal_9;
      }
      local_78 = (uint8_t  [8])pU64_10;
    }
    uStack_60 = uVal_11;
    local_68 = (uint8_t  [8])sz_7;
    func_0x1806aa960(pU64_10,_Str,sz_7);
    pU64_10[sz_7] = 0;
    pU64_10 = local_78;
    func_0x1804c9aa0(param_1,pU64_10,local_98,local_b8);
    if (0xf < uStack_60) {
      uVal_11 = uStack_60 + 1;
      lVal_9 = (int64_t)local_78;
      if (0xfff < uVal_11) {
        lVal_9 = *(int64_t *)((int64_t)local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_9)) goto LAB_18038169d;
        uVal_11 = uStack_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_11);
    }
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_11 = local_88._8_8_ + 1;
      lVal_9 = local_98._0_8_;
      if (0xfff < uVal_11) {
        lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_18038169d;
        uVal_11 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_11);
    }
    if (0xf < (uint64_t)local_a8._8_8_) {
      uVal_11 = local_a8._8_8_ + 1;
      lVal_9 = local_b8._0_8_;
      if (0xfff < uVal_11) {
        lVal_9 = *(int64_t *)(local_b8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_b8._0_8_ + -8) - lVal_9)) goto LAB_18038169d;
        uVal_11 = local_a8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_11);
    }
    *param_1 = &PTR_LAB_1806c97e0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11470) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x11470) = 1;
      *(uint8_t *)(lVal_9 + 0x1146c) = 1;
      *(uint32_t *)(lVal_9 + 0x11468) = 0xe502b9a9;
      func_0x180673140(&LAB_18042cae0);
    }
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_9 + 0x11468);
    if (*(char *)(lVal_9 + 0x1146c) == '\x01') {
      *pU64_1 = *pU64_1 ^ 0xe569d1dd;
      *(uint8_t *)(lVal_9 + 0x1146c) = 0;
    }
    _local_78 = (uint8_t  [16])0x0;
    sz_7 = strlen((char *)pU64_1);
    local_40 = param_1;
    if (-1 < (int64_t)sz_7) {
      uVal_11 = 0xf;
      if (0xf < sz_7) {
        uVal_8 = sz_7 | 0xf;
        uVal_11 = 0x16;
        if (0x16 < uVal_8) {
          uVal_11 = uVal_8;
        }
        if (uVal_8 < 0xfff) {
          pU64_10 = (uint8_t *)func_0x180672de0(uVal_11 + 1);
        }
        else {
          lVal_9 = func_0x180672de0(uVal_11 + 0x28);
          pU64_10 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_10 + -8) = lVal_9;
        }
        local_78 = (uint8_t  [8])pU64_10;
      }
      pU64_6 = local_40;
      local_68 = (uint8_t  [8])sz_7;
      uStack_60 = uVal_11;
      func_0x1806aa960(pU64_10,pU64_1,sz_7);
      pU64_10[sz_7] = 0;
      func_0x1804c9cb0(pU64_6,local_78);
      pU64_6 = local_40;
      if (0xf < uStack_60) {
        uVal_11 = uStack_60 + 1;
        lVal_9 = (int64_t)local_78;
        if (0xfff < uVal_11) {
          lVal_9 = *(int64_t *)((int64_t)local_78 + -8);
          if (0x1f < (uint64_t)(((int64_t)local_78 + -8) - lVal_9)) goto LAB_18038169d;
          uVal_11 = uStack_60 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_9,uVal_11);
      }
      return pU64_6;
    }
  }
  func_0x18007ba70();
LAB_18038169d:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1803816a0
void Unwind_1803816a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@1803816d0
void Unwind_1803816d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180381700
void Unwind_180381700(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180381730
void Unwind_180381730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180381760
void Unwind_180381760(uint64_t param_1,int64_t param_2)
{
  func_0x1804c9cc0(*(uint64_t *)(param_2 + 0x98));
  return;
}

// Unwind@180381790
void Unwind_180381790(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11414) = 0;
  return;
}

// Unwind@1803817d0
void Unwind_1803817d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11450) = 0;
  return;
}

// Unwind@1803851a0
void Unwind_1803851a0(void)
{
  func_0x180672f60(&DAT_1808400f8);
  return;
}

// Unwind@1803851f0
void Unwind_1803851f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11578) = 0;
  *(uint8_t *)(param_2 + 0x436) = 1;
  return;
}

// Unwind@180385260
void Unwind_180385260(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x115a4) = 0;
  *(uint8_t *)(param_2 + 0x435) = 1;
  return;
}

// Unwind@1803852d0
void Unwind_1803852d0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1167c) = 0;
  *(uint8_t *)(param_2 + 0x434) = 1;
  return;
}

// Unwind@180385340
void Unwind_180385340(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x116a8) = 0;
  return;
}

// Unwind@1803853a0
void Unwind_1803853a0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11540) = 0;
  *(uint8_t *)(param_2 + 0x437) = 1;
  return;
}

// Unwind@180385410
void Unwind_180385410(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x114a4) = 0;
  return;
}

// Unwind@180385470
void Unwind_180385470(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x114c4) = 0;
  return;
}

// Unwind@1803854d0
void Unwind_1803854d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x42d) = 1;
  return;
}

// Unwind@180385530
void Unwind_180385530(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  return;
}

// Unwind@180385580
void Unwind_180385580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x230);
  *(uint8_t *)(param_2 + 0x42e) = 1;
  return;
}

// Unwind@1803855e0
void Unwind_1803855e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3e0);
  return;
}

// Unwind@180385630
void Unwind_180385630(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180385680
void Unwind_180385680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  *(uint8_t *)(param_2 + 0x432) = 0;
  return;
}

// Unwind@1803856e0
void Unwind_1803856e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180385730
void Unwind_180385730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  *(uint8_t *)(param_2 + 0x436) = 0;
  return;
}

// Unwind@180385790
void Unwind_180385790(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3e0);
  *(uint8_t *)(param_2 + 0x435) = 0;
  return;
}

// Unwind@1803857f0
void Unwind_1803857f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  return;
}

// Unwind@180385840
void Unwind_180385840(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  *(uint8_t *)(param_2 + 0x434) = 0;
  return;
}

// Unwind@1803858a0
void Unwind_1803858a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x431) = 0;
  return;
}

// Unwind@180385900
void Unwind_180385900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180385950
void Unwind_180385950(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  *(uint8_t *)(param_2 + 0x430) = 0;
  return;
}

// Unwind@1803859b0
void Unwind_1803859b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  return;
}

// Unwind@180385a00
void Unwind_180385a00(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x432) == '\x01') {
    func_0x180001e70(param_2 + 0x270);
  }
  return;
}

// Unwind@180385a60
void Unwind_180385a60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@180385ab0
void Unwind_180385ab0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3e0);
  *(uint8_t *)(param_2 + 0x437) = 0;
  return;
}

// Unwind@180385b10
void Unwind_180385b10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3e0);
  return;
}

// Unwind@180385b60
void Unwind_180385b60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  return;
}

// Unwind@180385bb0
void Unwind_180385bb0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x431) == '\x01') {
    func_0x180001e70(param_2 + 0xb0);
  }
  return;
}

// Unwind@180385c10
void Unwind_180385c10(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x436);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x250);
  }
  *(char *)(param_2 + 0x42d) = ch_1;
  return;
}

// Unwind@180385c70
void Unwind_180385c70(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x435) == '\x01') {
    func_0x180001e70(param_2 + 0x90);
  }
  return;
}

// Unwind@180385cd0
void Unwind_180385cd0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x434) == '\x01') {
    func_0x180001e70(param_2 + 0xd0);
  }
  return;
}

// Unwind@180385d30
void Unwind_180385d30(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x42d) == '\x01') {
    func_0x180001e70(param_2 + 0x30);
  }
  return;
}

// Unwind@180385d90
void Unwind_180385d90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Catch_All@180385de0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint8_t * Catch_All_180385de0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  lVal_2 = DAT_180840a58;
  *(uint8_t **)(param_2 + 0x3c0) = &DAT_28d0f803f34a0611;
  uVal_3 = _UNK_1806b6f38;
  uVal_1 = *(uint64_t *)
           ((((*(uint64_t *)(param_2 + 0x3c0) ^ 0xd1631bc266) + 0x443450bf0 ^ 0x779d0cf4) /
             0x4179506e6 - 0x7a6de5f ^ 0x25297bc) + lVal_2);
  *(uint8_t **)(param_2 + 400) = PTR_DAT_1806b6f30;
  *(uint64_t *)(param_2 + 0x198) = uVal_3;
  uVal_3 = func_0x180386eb0();
  func_0x18043a090(uVal_3);
  func_0x180001060(param_2 + 0x3c0,uVal_3);
  func_0x180143aa0(uVal_1,param_2 + 0x3c0,param_2 + 400);
  func_0x180001e70(param_2 + 0x3c0);
  return &LAB_18038473e;
}

// Unwind@180385ee0
void Unwind_180385ee0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@180385f30
void Unwind_180385f30(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x430) == '\x01') {
    func_0x180001e70(param_2 + 0x70);
  }
  return;
}

// Unwind@180385f90
void Unwind_180385f90(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x437);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x230);
  }
  *(char *)(param_2 + 0x42e) = ch_1;
  return;
}

// Unwind@180385ff0
void Unwind_180385ff0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x42e) == '\x01') {
    func_0x180001e70(param_2 + 0x210);
  }
  return;
}

// Unwind@180386050
void Unwind_180386050(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  return;
}

// Unwind@1803860a0
void Unwind_1803860a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Unwind@1803860f0
void Unwind_1803860f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180386120
void Unwind_180386120(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  return;
}

// Catch_All@180386170
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint8_t * Catch_All_180386170(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  
  lVal_2 = DAT_180840a58;
  *(uint8_t **)(param_2 + 0x3e0) = &DAT_28d0f803f34a0611;
  uVal_3 = _UNK_1806b6f38;
  uVal_1 = *(uint64_t *)
           ((((*(uint64_t *)(param_2 + 0x3e0) ^ 0xd1631bc266) + 0x443450bf0 ^ 0x779d0cf4) /
             0x4179506e6 - 0x7a6de5f ^ 0x25297bc) + lVal_2);
  *(uint8_t **)(param_2 + 0x130) = PTR_DAT_1806b6f30;
  *(uint64_t *)(param_2 + 0x138) = uVal_3;
  uVal_3 = func_0x180386c20();
  func_0x180439e30(uVal_3);
  func_0x180001060(param_2 + 0x3e0,uVal_3);
  func_0x180143aa0(uVal_1,param_2 + 0x3e0,param_2 + 0x130);
  func_0x180001e70(param_2 + 0x3e0);
  return &LAB_180384ad6;
}

// Unwind@180386270
void Unwind_180386270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3e0);
  return;
}

// Unwind@1803862c0
void Unwind_1803862c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  return;
}

// Unwind@180386310
void Unwind_180386310(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x400);
  return;
}

// Unwind@180386360
void Unwind_180386360(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3c0);
  return;
}

// Unwind@1803863b0
void Unwind_1803863b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x2b0);
  *(uint8_t *)(param_2 + 0x433) = 0;
  return;
}

// Unwind@180386410
void Unwind_180386410(uint64_t param_1,int64_t param_2)
{
  func_0x1800bffd0(param_2 + 0x2b0);
  return;
}

// Unwind@180386460
void Unwind_180386460(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x433);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x50);
  }
  *(char *)(param_2 + 0x42f) = ch_1;
  return;
}

// Unwind@1803864c0
void Unwind_1803864c0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x42f) == '\x01') {
    func_0x180001e70(param_2 + 0x1f0);
  }
  return;
}

// Unwind@180386520
void Unwind_180386520(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x3a0);
  return;
}

// func_0x180386570
uint64_t func_0x180386570(int64_t *param_1)
{
  int *pInt_1;
  int64_t *pLong_2;
  char ch_3;
  char ch_4;
  int64_t lVal_5;
  int64_t lVal_6;
  int64_t *pLong_7;
  func_ptr_t fnPtr_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  int64_t lVal_11;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    lVal_10 = *param_1;
    lVal_5 = *(int64_t *)(lVal_10 + 8);
    ch_3 = *(char *)(lVal_5 + 0x19);
    lVal_11 = lVal_10;
    lVal_6 = lVal_5;
    ch_4 = ch_3;
    while (ch_4 == '\0') {
      if (0x7f71100f < *(int *)(lVal_6 + 0x20)) {
        lVal_11 = lVal_6;
      }
      lVal_6 = *(int64_t *)(lVal_6 + (uint64_t)(*(int *)(lVal_6 + 0x20) < 0x7f711010) * 0x10);
      ch_4 = *(char *)(lVal_6 + 0x19);
    }
    if ((*(char *)(lVal_11 + 0x19) == '\0') && (*(int *)(lVal_11 + 0x20) < 0x7f711011)) {
      while (ch_3 == '\0') {
        if (0x7f71100f < *(int *)(lVal_5 + 0x20)) {
          lVal_10 = lVal_5;
        }
        lVal_5 = *(int64_t *)(lVal_5 + (uint64_t)(*(int *)(lVal_5 + 0x20) < 0x7f711010) * 0x10);
        ch_3 = *(char *)(lVal_5 + 0x19);
      }
      if ((*(char *)(lVal_10 + 0x19) != '\0') || (0x7f711010 < *(int *)(lVal_10 + 0x20))) {
        func_0x1806744f0("invalid map<K, T> key");
        fnPtr_8 = (func_ptr_t )swi(3);
        uVal_9 = (*fnPtr_8)();
        return uVal_9;
      }
      if (*(int64_t *)(lVal_10 + 0x30) == 0) {
        return *(uint64_t *)(lVal_10 + 0x28);
      }
      LOCK();
      pInt_1 = (int *)(*(int64_t *)(lVal_10 + 0x30) + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
      uVal_9 = *(uint64_t *)(lVal_10 + 0x28);
      pLong_7 = *(int64_t **)(lVal_10 + 0x30);
      if (pLong_7 == (int64_t *)0x0) {
        return uVal_9;
      }
      LOCK();
      pLong_2 = pLong_7 + 1;
      *(int *)pLong_2 = *(int *)pLong_2 + -1;
      UNLOCK();
      if (*(int *)pLong_2 != 0) {
        return uVal_9;
      }
      (**(func_ptr_t *)*pLong_7)(pLong_7);
      LOCK();
      pInt_1 = (int *)((int64_t)pLong_7 + 0xc);
      *pInt_1 = *pInt_1 + -1;
      UNLOCK();
      if (*pInt_1 == 0) {
        (**(func_ptr_t *)(*pLong_7 + 8))(pLong_7);
      }
      return uVal_9;
    }
  }
  return 0;
}

// func_0x180386670
/* WARNING: Removing unreachable block (ram,0x000180386907) */
/* WARNING: Removing unreachable block (ram,0x000180386911) */
/* WARNING: Removing unreachable block (ram,0x000180386922) */
/* WARNING: Removing unreachable block (ram,0x000180386933) */
/* WARNING: Removing unreachable block (ram,0x00018038693d) */
/* WARNING: Removing unreachable block (ram,0x000180386942) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Removing unreachable block (ram,0x000180386907) */
/* WARNING: Removing unreachable block (ram,0x000180386911) */
/* WARNING: Removing unreachable block (ram,0x000180386922) */
/* WARNING: Removing unreachable block (ram,0x000180386933) */
/* WARNING: Removing unreachable block (ram,0x00018038693d) */
/* WARNING: Removing unreachable block (ram,0x000180386942) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t * func_0x180386670(float *param_1,int64_t *param_2,uint *param_3,uint32_t *param_4)
{
  uint uVal_1;
  uint32_t uVal_2;
  uint32_t uVal_3;
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint64_t *pU64_9;
  uint64_t uVal_10;
  uint64_t uVal_11;
  uint64_t *pU64_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint64_t uVal_17;
  uint64_t *pU64_18;
  float fVal_19;
  uint8_t auArr_20 [16];
  float fVal_21;
  float *pFloat_22;
  uint64_t uVal_23;
  
  uVal_23 = 0xfffffffffffffffe;
  uVal_15 = ((uint64_t)*(byte *)((int64_t)param_3 + 1) ^
           ((uint64_t)*(byte *)param_3 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3;
  uVal_17 = ((uint64_t)*(byte *)((int64_t)param_3 + 3) ^
           (*(byte *)((int64_t)param_3 + 2) ^ uVal_15) * 0x100000001b3) * 0x100000001b3;
  lVal_16 = *(int64_t *)(param_1 + 6);
  lVal_13 = (*(uint64_t *)(param_1 + 0xc) & uVal_17) * 0x10;
  pU64_9 = *(uint64_t **)(lVal_16 + 8 + lVal_13);
  pU64_18 = *(uint64_t **)(param_1 + 2);
  if (pU64_9 != *(uint64_t **)(param_1 + 2)) {
    uVal_1 = *param_3;
    uVal_15 = (uint64_t)uVal_1;
    if (uVal_1 != *(uint *)(pU64_9 + 2)) {
      do {
        pU64_18 = pU64_9;
        if (pU64_9 == *(uint64_t **)(lVal_16 + lVal_13)) goto LAB_18038672d;
        pU64_9 = (uint64_t *)pU64_9[1];
      } while (uVal_1 != *(uint *)(pU64_9 + 2));
    }
    *param_2 = (int64_t)pU64_9;
    *(uint8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_18038672d:
  if (*(int64_t *)(param_1 + 4) == 0x492492492492492) {
    func_0x1806744c0("unordered_map/set too long");
    do {
      invalidInstructionException();
    } while( true );
  }
  pFloat_22 = param_1 + 2;
  pU64_9 = (uint64_t *)func_0x180672de0(0x38,uVal_15,lVal_16,param_4,pFloat_22);
  *(uint *)(pU64_9 + 2) = *param_3;
  uVal_2 = *param_4;
  uVal_3 = param_4[1];
  uVal_4 = param_4[2];
  uVal_5 = param_4[3];
  uVal_6 = param_4[5];
  uVal_7 = param_4[6];
  uVal_8 = param_4[7];
  *(uint32_t *)(pU64_9 + 5) = param_4[4];
  *(uint32_t *)((int64_t)pU64_9 + 0x2c) = uVal_6;
  *(uint32_t *)(pU64_9 + 6) = uVal_7;
  *(uint32_t *)((int64_t)pU64_9 + 0x34) = uVal_8;
  *(uint32_t *)(pU64_9 + 3) = uVal_2;
  *(uint32_t *)((int64_t)pU64_9 + 0x1c) = uVal_3;
  *(uint32_t *)(pU64_9 + 4) = uVal_4;
  *(uint32_t *)((int64_t)pU64_9 + 0x24) = uVal_5;
  *(uint64_t *)(param_4 + 4) = 0;
  *(uint64_t *)(param_4 + 6) = 0xf;
  *(uint8_t *)param_4 = 0;
  uVal_15 = *(int64_t *)(param_1 + 4) + 1;
  if ((int64_t)uVal_15 < 0) {
    fVal_19 = (float)((uint64_t)((uint)uVal_15 & 1) | uVal_15 >> 1);
    auArr_20 = ZEXT416((uint)(fVal_19 + fVal_19));
    fVal_19 = *param_1;
    uVal_15 = *(uint64_t *)(param_1 + 0xe);
    if ((int64_t)uVal_15 < 0) goto LAB_1803867a3;
LAB_1803867f0:
    fVal_21 = auArr_20._0_4_ / (float)uVal_15;
    if (fVal_19 < fVal_21) {
LAB_180386805:
      auArr_20._0_4_ = auArr_20._0_4_ / fVal_19;
      auArr_20 = roundss(auArr_20,auArr_20,10);
      uVal_10 = (uint64_t)auArr_20._0_4_;
      uVal_10 = (int64_t)(auArr_20._0_4_ - _DAT_1806ae420) & (int64_t)uVal_10 >> 0x3f | uVal_10;
      uVal_11 = 8;
      if (8 < uVal_10) {
        uVal_11 = uVal_10;
      }
      uVal_14 = uVal_15;
      if (uVal_15 < uVal_11) {
        uVal_14 = uVal_15 * 8;
        if (uVal_14 < uVal_11 || uVal_14 - uVal_11 == 0) {
          uVal_14 = uVal_11;
        }
        if (0x1ff < uVal_15) {
          uVal_14 = uVal_11;
        }
      }
      func_0x1801c00b0(param_1,uVal_14,uVal_10,fVal_21,pFloat_22,pU64_9,uVal_23);
      lVal_16 = (*(uint64_t *)(param_1 + 0xc) & uVal_17) * 0x10;
      pU64_12 = *(uint64_t **)(*(int64_t *)(param_1 + 6) + 8 + lVal_16);
      pU64_18 = *(uint64_t **)(param_1 + 2);
      if (pU64_12 != *(uint64_t **)(param_1 + 2)) {
        if (*(int *)(pU64_9 + 2) != *(int *)(pU64_12 + 2)) {
          do {
            pU64_18 = pU64_12;
            if (pU64_12 == *(uint64_t **)(*(int64_t *)(param_1 + 6) + lVal_16))
            goto LAB_1803868a6;
            pU64_12 = (uint64_t *)pU64_12[1];
          } while (*(int *)(pU64_9 + 2) != *(int *)(pU64_12 + 2));
        }
        pU64_18 = (uint64_t *)*pU64_12;
      }
    }
  }
  else {
    auArr_20 = ZEXT416((uint)(float)uVal_15);
    fVal_19 = *param_1;
    uVal_15 = *(uint64_t *)(param_1 + 0xe);
    if (-1 < (int64_t)uVal_15) goto LAB_1803867f0;
LAB_1803867a3:
    fVal_21 = (float)((uint64_t)((uint)uVal_15 & 1) | uVal_15 >> 1);
    fVal_21 = auArr_20._0_4_ / (fVal_21 + fVal_21);
    if (fVal_19 < fVal_21) goto LAB_180386805;
  }
LAB_1803868a6:
  pU64_12 = (uint64_t *)pU64_18[1];
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + 1;
  *pU64_9 = pU64_18;
  pU64_9[1] = pU64_12;
  *pU64_12 = pU64_9;
  pU64_18[1] = pU64_9;
  lVal_16 = *(int64_t *)(param_1 + 6);
  lVal_13 = (uVal_17 & *(uint64_t *)(param_1 + 0xc)) * 0x10;
  if (*(uint64_t **)(lVal_16 + lVal_13) == *(uint64_t **)(param_1 + 2)) {
    *(uint64_t **)(lVal_16 + lVal_13) = pU64_9;
  }
  else {
    if (*(uint64_t **)(lVal_16 + lVal_13) == pU64_18) {
      *(uint64_t **)(lVal_16 + lVal_13) = pU64_9;
      goto LAB_1803868f7;
    }
    if (*(uint64_t **)(lVal_16 + 8 + lVal_13) != pU64_12) goto LAB_1803868f7;
  }
  *(uint64_t **)(lVal_16 + 8 + lVal_13) = pU64_9;
LAB_1803868f7:
  *param_2 = (int64_t)pU64_9;
  *(uint8_t *)(param_2 + 1) = 1;
  return param_2;
}

// Unwind@180386990
void Unwind_180386990(uint64_t param_1,int64_t param_2)
{
  func_0x1801c0020(param_2 + 0x20);
  return;
}

// func_0x1803869d0
void func_0x1803869d0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,int64_t **param_4, uint32_t param_5)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t *pLong_7;
  uint32_t local_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  int64_t **local_80;
  int64_t *local_78;
  uint32_t local_70;
  int64_t local_60 [3];
  uint64_t local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  int64_t **local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  uStack_84 = param_3[3];
  local_78 = param_4[2];
  local_80 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_80 = (int64_t **)*param_4;
  }
  local_70 = param_5;
  local_40 = 0x1dd;
  local_38 = &local_90;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
  local_20 = param_4;
  func_0x18063ff10(local_60,&local_30,&local_40);
  func_0x180116b80(param_1,local_60);
  ptr2_Long_3 = local_20;
  if (0xf < local_48) {
    uVal_4 = local_48 + 1;
    lVal_5 = local_60[0];
    if (0xfff < uVal_4) {
      lVal_5 = *(int64_t *)(local_60[0] + -8);
      if (0x1f < (uint64_t)((local_60[0] + -8) - lVal_5)) goto LAB_180386ae3;
      uVal_4 = local_48 + 0x28;
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
LAB_180386ae3:
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

// Unwind@180386af0
void Unwind_180386af0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// Unwind@180386b20
void Unwind_180386b20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x98));
  return;
}

// func_0x180386b50
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180386b50(void)
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
  local_28 = _DAT_1806cae84;
  uStack_24 = _UNK_1806cae88;
  uStack_20 = _UNK_1806cae8c;
  uStack_1c = _UNK_1806cae90;
  local_38 = _DAT_1806cae74;
  uStack_34 = _UNK_1806cae78;
  uStack_30 = _UNK_1806cae7c;
  uStack_2c = _UNK_1806cae80;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11504) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11504) = 1;
    func_0x18008f8e0(lVal_1 + 0x114e1,&local_38);
    func_0x180673140(&LAB_18042cbe0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x114e1;
}

// Unwind@180386bf0
void Unwind_180386bf0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11504) = 0;
  return;
}

// func_0x180386c20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180386c20(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  undefined3 uStack_28;
  uint32_t uStack_25;
  uint32_t uStack_21;
  uint32_t uStack_1d;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = _UNK_1806caea4;
  uStack_25 = _UNK_1806caea7;
  uStack_21 = _UNK_1806caeab;
  uStack_1d = _UNK_1806caeaf;
  local_38 = _DAT_1806cae94;
  uStack_34 = _UNK_1806cae98;
  uStack_30 = _UNK_1806cae9c;
  uStack_2c = _UNK_1806caea0;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11528) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11528) = 1;
    func_0x18007ce20(lVal_1 + 0x11505,&local_38);
    func_0x180673140(&LAB_18042cc10);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11505;
}

// Unwind@180386cc0
void Unwind_180386cc0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11528) = 0;
  return;
}

// func_0x180386cf0
void func_0x180386cf0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t param_4)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint32_t local_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t local_70;
  int64_t local_60 [3];
  uint64_t local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_80 = *param_3;
  uStack_7c = param_3[1];
  uStack_78 = param_3[2];
  uStack_74 = param_3[3];
  local_40 = 0x1d;
  local_38 = &local_80;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
  local_70 = param_4;
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

// Unwind@180386db0
void Unwind_180386db0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x48);
  return;
}

// func_0x180386de0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180386de0(void)
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
  uStack_28 = _UNK_1806caf13;
  uStack_24 = _UNK_1806caf17;
  uStack_20 = _UNK_1806caf1b;
  local_38 = _DAT_1806caf03;
  uStack_34 = _UNK_1806caf07;
  uStack_30 = _UNK_1806caf0b;
  local_2c = _DAT_1806caf0f;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x115d0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x115d0) = 1;
    func_0x18008fba0(lVal_1 + 0x115b1,&local_38);
    func_0x180673140(&LAB_18042cd30);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x115b1;
}

// Unwind@180386e80
void Unwind_180386e80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x115d0) = 0;
  return;
}

// func_0x180386eb0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180386eb0(void)
{
  int64_t lVal_1;
  uint32_t local_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  undefined3 uStack_28;
  uint32_t uStack_25;
  uint32_t uStack_21;
  uint32_t uStack_1d;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = _UNK_1806caf2f;
  uStack_25 = _UNK_1806caf32;
  uStack_21 = _UNK_1806caf36;
  uStack_1d = _UNK_1806caf3a;
  local_38 = _DAT_1806caf1f;
  uStack_34 = _UNK_1806caf23;
  uStack_30 = _UNK_1806caf27;
  uStack_2c = _UNK_1806caf2b;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x115f4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x115f4) = 1;
    func_0x18007ce20(lVal_1 + 0x115d1,&local_38);
    func_0x180673140(&LAB_18042cd60);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x115d1;
}

// Unwind@180386f50
void Unwind_180386f50(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x115f4) = 0;
  return;
}

// func_0x180386f80
void func_0x180386f80(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0xb145a519;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0x67;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0x9d;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// Unwind@1803887f0
void Unwind_1803887f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@180388830
void Unwind_180388830(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@180388870
void Unwind_180388870(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1803888b0
void Unwind_1803888b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// Unwind@1803888f0
void Unwind_1803888f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  func_0x180037f80(*(uint64_t *)(param_2 + 200));
  return;
}

// Unwind@180388940
void Unwind_180388940(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180388980
void Unwind_180388980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@1803889c0
void Unwind_1803889c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180388a00
void Unwind_180388a00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180388a40
void Unwind_180388a40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180388a80
void Unwind_180388a80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@180388ac0
void Unwind_180388ac0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180388b00
void Unwind_180388b00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@180388b40
void Unwind_180388b40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x80);
  return;
}

// Unwind@180388b80
void Unwind_180388b80(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 200));
  return;
}

// Unwind@180388bc0
void Unwind_180388bc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xd0);
  return;
}

// func_0x180388cf0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x180388cf0(uint64_t *param_1)
{
  uint64_t *pU64_1;
  uint8_t (*_Str)[16];
  uint32_t uVal_2;
  uint64_t uVal_3;
  size_t sz_4;
  uint64_t uVal_5;
  int64_t lVal_6;
  uint8_t *pU64_7;
  uint64_t uVal_8;
  uint8_t auArr_9 [16];
  uint8_t local_98 [16];
  size_t local_88;
  uint64_t local_80;
  uint8_t local_78 [16];
  size_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint8_t local_48 [16];
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11728) == '\0') {
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_6 + 0x11728) = 1;
    *(uint64_t *)(lVal_6 + 0x11718) = 0x95d0dfc4a312284f;
    *(uint32_t *)(lVal_6 + 0x11720) = 0xf9112912;
    *(uint16_t *)(lVal_6 + 0x11724) = 0x1b1;
    func_0x180673140(&LAB_18042d010);
  }
  lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_6 + 0x11718);
  if (*(char *)(lVal_6 + 0x11725) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xe9b5b3b1c77d4573;
    *(uint *)(lVal_6 + 0x11720) = *(uint *)(lVal_6 + 0x11720) ^ 0xc77d4573;
    *(byte *)(lVal_6 + 0x11724) = *(byte *)(lVal_6 + 0x11724) ^ 0xb1;
    *(uint8_t *)(lVal_6 + 0x11725) = 0;
  }
  local_98 = (uint8_t  [16])0x0;
  sz_4 = strlen((char *)pU64_1);
  if ((int64_t)sz_4 < 0) {
    func_0x18007ba70();
LAB_1803891da:
    func_0x18007ba70();
  }
  else {
    if (sz_4 < 0x10) {
      pU64_7 = local_98;
      uVal_8 = 0xf;
    }
    else {
      uVal_5 = sz_4 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_7 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_8 + 0x28);
        pU64_7 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_7 + -8) = lVal_6;
      }
      local_98._0_8_ = pU64_7;
    }
    local_88 = sz_4;
    local_80 = uVal_8;
    func_0x1806aa960(pU64_7,pU64_1,sz_4);
    pU64_7[sz_4] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11740) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0x11740) = 1;
      uVal_3 = _UNK_1806c8548;
      *(uint64_t *)(lVal_6 + 0x11730) = _DAT_1806c8540;
      *(uint64_t *)(lVal_6 + 0x11738) = uVal_3;
      func_0x180673140(&LAB_18042d040);
    }
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint8_t (*)[16])(lVal_6 + 0x11730);
    if (*(char *)(lVal_6 + 0x1173f) == '\x01') {
      uVal_2 = *(uint32_t *)(lVal_6 + 0x11738);
      auArr_9 = pshufb(ZEXT716(CONCAT52(CONCAT41(CONCAT31((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVal_2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVal_2 >> 0x10),uVal_2)) >>
                                                  0x20),(char)((ushort)*(uint16_t *)
                                                                        (lVal_6 + 0x1173d) >> 8)),
                                                (char)((uint)uVal_2 >> 8)),
                                       CONCAT11((char)*(uint16_t *)(lVal_6 + 0x1173d),(char)uVal_2))
                             ),_DAT_1806ae110);
      auArr_9._8_8_ = auArr_9._8_8_ & 0xffff00ffffffff | (uint64_t)*(byte *)(lVal_6 + 0x1173c) << 0x20
      ;
      auArr_9 = pblendw(auArr_9,*_Str,0xf);
      *_Str = auArr_9 ^ _DAT_1806b6450;
    }
    local_48 = (uint8_t  [16])0x0;
    local_58 = (uint8_t  [16])0x0;
    sz_4 = strlen((char *)_Str);
    if ((int64_t)sz_4 < 0) goto LAB_1803891da;
    if (sz_4 < 0x10) {
      pU64_7 = local_58;
      uVal_8 = 0xf;
    }
    else {
      uVal_5 = sz_4 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_5) {
        uVal_8 = uVal_5;
      }
      if (uVal_5 < 0xfff) {
        pU64_7 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_6 = func_0x180672de0(uVal_8 + 0x28);
        pU64_7 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_7 + -8) = lVal_6;
      }
      local_58._0_8_ = pU64_7;
    }
    local_48._8_8_ = uVal_8;
    local_48._0_8_ = sz_4;
    func_0x1806aa960(pU64_7,_Str,sz_4);
    pU64_7[sz_4] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11750) == '\0') {
      lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_6 + 0x11750) = 1;
      *(uint64_t *)(lVal_6 + 0x11748) = 0x1b5d7dfae1f2b06;
      func_0x180673140(&LAB_18042d070);
    }
    lVal_6 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_6 + 0x11748);
    if (*(char *)(lVal_6 + 0x1174f) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_6 + 0x1174d) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_6 + 0x1174c) << 0x20) ^ SUB168(_DAT_1806ae200,0);
    }
    local_78 = (uint8_t  [16])0x0;
    sz_4 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_4) {
      if (sz_4 < 0x10) {
        pU64_7 = local_78;
        uVal_8 = 0xf;
      }
      else {
        uVal_5 = sz_4 | 0xf;
        uVal_8 = 0x16;
        if (0x16 < uVal_5) {
          uVal_8 = uVal_5;
        }
        if (uVal_5 < 0xfff) {
          pU64_7 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
        }
        else {
          lVal_6 = func_0x180672de0(uVal_8 + 0x28);
          pU64_7 = (uint8_t *)(lVal_6 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_7 + -8) = lVal_6;
        }
        local_78._0_8_ = pU64_7;
      }
      local_68 = sz_4;
      local_60 = uVal_8;
      func_0x1806aa960(pU64_7,pU64_1,sz_4);
      pU64_7[sz_4] = 0;
      func_0x1804c9aa0(param_1,local_78,local_58,local_98);
      if (0xf < local_60) {
        uVal_8 = local_60 + 1;
        lVal_6 = local_78._0_8_;
        if (0xfff < uVal_8) {
          lVal_6 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_6)) goto LAB_1803891e6;
          uVal_8 = local_60 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_6,uVal_8);
      }
      if (0xf < (uint64_t)local_48._8_8_) {
        uVal_8 = local_48._8_8_ + 1;
        lVal_6 = local_58._0_8_;
        if (0xfff < uVal_8) {
          lVal_6 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_6)) goto LAB_1803891e6;
          uVal_8 = local_48._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_6,uVal_8);
      }
      if (0xf < local_80) {
        uVal_8 = local_80 + 1;
        lVal_6 = local_98._0_8_;
        if (0xfff < uVal_8) {
          lVal_6 = *(int64_t *)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_6)) goto LAB_1803891e6;
          uVal_8 = local_80 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_6,uVal_8);
      }
      *param_1 = &PTR_LAB_1806c9820;
      return param_1;
    }
  }
  func_0x18007ba70();
LAB_1803891e6:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@1803891f0
void Unwind_1803891f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@180389220
void Unwind_180389220(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@180389250
void Unwind_180389250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18038a830
void Unwind_18038a830(void)
{
  func_0x180672f60(&DAT_180840128);
  return;
}

// Unwind@18038a880
void Unwind_18038a880(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@18038a8d0
void Unwind_18038a8d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@18038a920
void Unwind_18038a920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@18038a970
void Unwind_18038a970(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@18038a9c0
void Unwind_18038a9c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  *(uint8_t *)(param_2 + 0x1b7) = 0;
  return;
}

// Unwind@18038aa10
void Unwind_18038aa10(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1b7) == '\x01') {
    func_0x180001e70(param_2 + 0x120);
  }
  return;
}

// Unwind@18038aa60
void Unwind_18038aa60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  return;
}

// Unwind@18038aab0
void Unwind_18038aab0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x180);
  *(uint8_t *)(param_2 + 0x1b6) = 0;
  return;
}

// Unwind@18038ab00
void Unwind_18038ab00(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x1b6) == '\x01') {
    func_0x180001e70(param_2 + 0x30);
  }
  return;
}

// Unwind@18038ab50
void Unwind_18038ab50(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x110);
  return;
}

// Unwind@18038aba0
void Unwind_18038aba0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  return;
}

// Unwind@18038abf0
void Unwind_18038abf0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11784) = 0;
  return;
}

// Unwind@18038ac50
void Unwind_18038ac50(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x117bc) = 0;
  return;
}

// Unwind@18038acb0
void Unwind_18038acb0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x117f0) = 0;
  return;
}

// Unwind@18038ad10
void Unwind_18038ad10(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11818) = 0;
  *(uint8_t *)(param_2 + 0x1b7) = 1;
  return;
}

// Unwind@18038ad70
void Unwind_18038ad70(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1184c) = 0;
  return;
}

// Unwind@18038add0
void Unwind_18038add0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1186c) = 0;
  *(uint8_t *)(param_2 + 0x1b6) = 1;
  return;
}

// func_0x18038ae30
void func_0x18038ae30(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t *param_4, uint32_t *param_5,uint32_t *param_6)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint32_t local_a0;
  uint32_t uStack_9c;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint32_t local_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint32_t local_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t local_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
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
  local_90 = *param_4;
  uStack_8c = param_4[1];
  uStack_88 = param_4[2];
  uStack_84 = param_4[3];
  local_80 = *param_5;
  uStack_7c = param_5[1];
  uStack_78 = param_5[2];
  uStack_74 = param_5[3];
  local_70 = *param_6;
  uStack_6c = param_6[1];
  uStack_68 = param_6[2];
  uStack_64 = param_6[3];
  local_40 = 0xdddd;
  local_38 = &local_a0;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
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

// Unwind@18038af10
void Unwind_18038af10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// func_0x18038af40
void func_0x18038af40(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t *param_4, uint32_t *param_5)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint32_t local_90;
  uint32_t uStack_8c;
  uint32_t uStack_88;
  uint32_t uStack_84;
  uint32_t local_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint32_t local_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  int64_t local_60 [3];
  uint64_t local_48;
  uint64_t local_40;
  uint32_t *local_38;
  uint64_t *local_30;
  uint64_t local_28;
  uint64_t local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  uStack_84 = param_3[3];
  local_80 = *param_4;
  uStack_7c = param_4[1];
  uStack_78 = param_4[2];
  uStack_74 = param_4[3];
  local_70 = *param_5;
  uStack_6c = param_5[1];
  uStack_68 = param_5[2];
  uStack_64 = param_5[3];
  local_40 = 0xddd;
  local_38 = &local_90;
  local_30 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_30 = (uint64_t *)*param_2;
  }
  local_28 = param_2[2];
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

// Unwind@18038b010
void Unwind_18038b010(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x58);
  return;
}

// func_0x18038b040
uint8_t (*func_0x18038b040(int64_t *param_1,uint8_t (*param_2)[16],int64_t *param_3))[16]
{
  int *pInt_1;
  uint64_t *pU64_2;
  func_ptr_t fnPtr_3;
  int64_t *pLong_4;
  uint uVal_5;
  uint8_t *pU64_6;
  int iVal_7;
  uint64_t uVal_8;
  int64_t lVal_9;
  uint64_t *pU64_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t (*pArr16_13)[16];
  uint8_t *_Buf1;
  uint8_t *pU64_14;
  uint *pU64_15;
  uint64_t uVal_16;
  uint64_t *pU64_17;
  uint64_t *pU64_18;
  bool bFlag_19;
  uint local_128;
  uint32_t uStack_124;
  uint32_t uStack_120;
  uint32_t uStack_11c;
  uint32_t local_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  uint8_t (*local_f8)[16];
  int64_t *local_f0;
  uint local_e8;
  uint32_t uStack_e4;
  uint32_t uStack_e0;
  uint32_t uStack_dc;
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint8_t local_c8 [16];
  uint64_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8 [16];
  uint64_t local_98;
  uint64_t local_90;
  uint8_t local_88 [16];
  uint8_t local_78 [24];
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVal_11 = *param_3;
  uVal_12 = param_3[1];
  local_a8 = ZEXT816(0);
  local_90 = 0xf;
  if ((int64_t)uVal_12 < 0) {
    func_0x18007ba70();
    goto LAB_18038b534;
  }
  if (uVal_12 < 0x10) {
    pU64_14 = local_a8;
    if (uVal_12 != 0) goto LAB_18038b0e5;
  }
  else {
    uVal_8 = uVal_12 | 0xf;
    uVal_16 = 0x16;
    if (0x16 < uVal_8) {
      uVal_16 = uVal_8;
    }
    if (uVal_8 < 0xfff) {
      pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
    }
    else {
      lVal_9 = func_0x180672de0(uVal_16 + 0x28);
      pU64_14 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
      *(int64_t *)(pU64_14 + -8) = lVal_9;
    }
    local_a8._0_8_ = pU64_14;
    local_90 = uVal_16;
LAB_18038b0e5:
    uVal_16 = 0;
    do {
      iVal_7 = tolower((int)*(char *)(lVal_11 + uVal_16));
      pU64_14[uVal_16] = (char)iVal_7;
      uVal_16 = uVal_16 + 1;
    } while (uVal_12 != uVal_16);
  }
  local_98 = uVal_12;
  pU64_14[uVal_12] = 0;
  uVal_12 = local_98;
  local_78._0_16_ = ZEXT816(0);
  local_88 = ZEXT816(0);
  if (local_90 < 0x10) {
    pArr16_13 = &local_a8;
  }
  else {
    pArr16_13 = (uint8_t (*)[16])local_a8._0_8_;
  }
  if ((int64_t)local_98 < 0) {
LAB_18038b534:
    func_0x18007ba70();
    fnPtr_3 = (func_ptr_t )swi(3);
    pArr16_13 = (uint8_t (*)[16])(*fnPtr_3)();
    return pArr16_13;
  }
  local_f8 = param_2;
  if (local_98 < 0x10) {
    local_78._8_8_ = 0xf;
    local_78._0_8_ = local_98;
    local_88 = *pArr16_13;
    uVal_16 = 0xf;
  }
  else {
    uVal_8 = local_98 | 0xf;
    uVal_16 = 0x16;
    if (0x16 < uVal_8) {
      uVal_16 = uVal_8;
    }
    if (uVal_8 < 0xfff) {
      uVal_8 = func_0x180672de0(uVal_16 + 1);
    }
    else {
      lVal_11 = func_0x180672de0(uVal_16 + 0x28);
      uVal_8 = lVal_11 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_8 - 8) = lVal_11;
    }
    local_88._0_8_ = uVal_8;
    local_78._8_8_ = uVal_16;
    local_78._0_8_ = uVal_12;
    func_0x1806aa960(uVal_8,pArr16_13,uVal_12 + 1);
  }
  pU64_2 = (uint64_t *)*param_1;
  pU64_10 = (uint64_t *)*pU64_2;
  local_f0 = param_1;
LAB_18038b1d0:
  pU64_18 = pU64_2;
  if (pU64_10 != pU64_2) {
    (**(func_ptr_t *)(*(int64_t *)pU64_10[5] + 8))((int64_t *)pU64_10[5],&local_e8);
    uVal_16 = uStack_d0;
    uVal_12 = local_d8;
    uVal_5 = local_e8;
    local_118 = (uint32_t)local_d8;
    uStack_114 = local_d8._4_4_;
    uStack_110 = (uint32_t)uStack_d0;
    uStack_10c = uStack_d0._4_4_;
    local_128 = local_e8;
    uStack_124 = uStack_e4;
    uStack_120 = uStack_e0;
    uStack_11c = uStack_dc;
    local_d8 = 0;
    uStack_d0 = 0xf;
    local_e8 = local_e8 & 0xffffff00;
    local_c8 = ZEXT816(0);
    pU64_15 = &local_128;
    if (0xf < uVal_16) {
      pU64_15 = (uint *)CONCAT44(uStack_e4,uVal_5);
    }
    local_b0 = 0xf;
    if ((int64_t)uVal_12 < 0) {
      func_0x18007ba70();
      goto LAB_18038b52c;
    }
    if (uVal_12 < 0x10) {
      pU64_14 = local_c8;
      if (uVal_12 != 0) goto LAB_18038b2a5;
    }
    else {
      uVal_8 = uVal_12 | 0xf;
      uVal_16 = 0x16;
      if (0x16 < uVal_8) {
        uVal_16 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_16 + 1);
      }
      else {
        lVal_11 = func_0x180672de0(uVal_16 + 0x28);
        pU64_14 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_11;
      }
      local_c8._0_8_ = pU64_14;
      local_b0 = uVal_16;
LAB_18038b2a5:
      uVal_16 = 0;
      do {
        iVal_7 = tolower((int)*(char *)((int64_t)pU64_15 + uVal_16));
        pU64_14[uVal_16] = (char)iVal_7;
        uVal_16 = uVal_16 + 1;
      } while (uVal_12 != uVal_16);
    }
    local_b8 = uVal_12;
    pU64_14[uVal_12] = 0;
    uVal_12 = CONCAT44(uStack_10c,uStack_110);
    if (0xf < uVal_12) {
      lVal_9 = CONCAT44(uStack_124,local_128);
      uVal_16 = uVal_12 + 1;
      lVal_11 = lVal_9;
      if (0xfff < uVal_16) {
        lVal_11 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_11)) goto LAB_18038b52c;
        uVal_16 = uVal_12 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_16);
    }
    if (0xf < uStack_d0) {
      lVal_9 = CONCAT44(uStack_e4,local_e8);
      uVal_12 = uStack_d0 + 1;
      lVal_11 = lVal_9;
      if (0xfff < uVal_12) {
        lVal_11 = *(int64_t *)(lVal_9 + -8);
        if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_11)) goto LAB_18038b52c;
        uVal_12 = uStack_d0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_11,uVal_12);
    }
    uVal_12 = local_b0;
    uVal_16 = local_78._8_8_;
    pU64_14 = local_88;
    if (0xf < (uint64_t)local_78._8_8_) {
      pU64_14 = (uint8_t *)local_88._0_8_;
    }
    pU64_6 = (uint8_t *)local_c8._0_8_;
    _Buf1 = local_c8;
    if (0xf < local_b0) {
      _Buf1 = (uint8_t *)local_c8._0_8_;
    }
    if (local_b8 == local_78._0_8_) {
      if (local_78._0_8_ == 0) {
        bFlag_19 = true;
      }
      else {
        iVal_7 = memcmp(_Buf1,pU64_14,local_78._0_8_);
        bFlag_19 = iVal_7 == 0;
      }
    }
    else {
      bFlag_19 = false;
    }
    if (0xf < uVal_12) {
      uVal_8 = uVal_12 + 1;
      pU64_14 = pU64_6;
      if (0xfff < uVal_8) {
        pU64_14 = *(uint8_t **)(pU64_6 + -8);
        if ((uint8_t *)0x1f < pU64_6 + (-8 - (int64_t)pU64_14)) goto LAB_18038b52c;
        uVal_8 = uVal_12 + 0x28;
      }
      thunk_FUN_180695dd0(pU64_14,uVal_8);
    }
    pU64_18 = pU64_10;
    if (bFlag_19) goto LAB_18038b454;
    pU64_18 = (uint64_t *)pU64_10[2];
    pU64_17 = pU64_10;
    if (*(char *)((int64_t)(uint64_t *)pU64_10[2] + 0x19) == '\0') {
      do {
        pU64_10 = pU64_18;
        pU64_18 = (uint64_t *)*pU64_10;
      } while (*(char *)((int64_t)(uint64_t *)*pU64_10 + 0x19) == '\0');
    }
    else {
      do {
        pU64_10 = (uint64_t *)pU64_17[1];
        if (*(char *)((int64_t)pU64_10 + 0x19) != '\0') break;
        bFlag_19 = pU64_17 == (uint64_t *)pU64_10[2];
        pU64_17 = pU64_10;
      } while (bFlag_19);
    }
    goto LAB_18038b1d0;
  }
LAB_18038b454:
  pLong_4 = local_f0;
  pArr16_13 = local_f8;
  if (0xf < uVal_16) {
    uVal_12 = uVal_16 + 1;
    lVal_11 = local_88._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_88._0_8_ + -8);
      if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_11)) goto LAB_18038b52c;
      uVal_12 = uVal_16 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  if (pU64_18 == (uint64_t *)*pLong_4) {
    *pArr16_13 = ZEXT816(0);
  }
  else {
    *pArr16_13 = ZEXT816(0);
    if (pU64_18[6] != 0) {
      LOCK();
      pInt_1 = (int *)(pU64_18[6] + 8);
      *pInt_1 = *pInt_1 + 1;
      UNLOCK();
    }
    *(uint64_t *)*pArr16_13 = pU64_18[5];
    *(uint64_t *)(*pArr16_13 + 8) = pU64_18[6];
  }
  if (0xf < local_90) {
    uVal_12 = local_90 + 1;
    lVal_11 = local_a8._0_8_;
    if (0xfff < uVal_12) {
      lVal_11 = *(int64_t *)(local_a8._0_8_ + -8);
      if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_11)) {
LAB_18038b52c:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_12 = local_90 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_11,uVal_12);
  }
  return pArr16_13;
}

// Unwind@18038b540
void Unwind_18038b540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18038b580
void Unwind_18038b580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18038b5c0
void Unwind_18038b5c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18038bb40
void Unwind_18038bb40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18038bb80
void Unwind_18038bb80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18038bbc0
void Unwind_18038bbc0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x50);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x48));
  return;
}

// Unwind@18038bc10
void Unwind_18038bc10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// func_0x18038bc50
int64_t func_0x18038bc50(int64_t param_1)
{
  return param_1 + 0x20;
}

// func_0x18038bc60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
uint64_t * func_0x18038bc60(uint64_t *param_1)
{
  uint *pU64_1;
  uint64_t *_Str;
  uint8_t auArr_2 [16];
  uint8_t auArr_3 [16];
  uint8_t auArr_4 [16];
  uint uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint32_t uVal_8;
  uint64_t *pU64_9;
  size_t sz_10;
  uint64_t uVal_11;
  int64_t lVal_12;
  uint8_t *pU64_13;
  uint64_t uVal_14;
  uint uVal_15;
  uint uVal_16;
  uint uVal_17;
  uint uVal_18;
  uint uVal_19;
  uint uVal_20;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint64_t *local_60;
  uint8_t local_58 [16];
  size_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x118c8) == '\0') {
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_12 + 0x118c8) = 1;
    *(uint8_t *)(lVal_12 + 0x118c5) = 1;
    uVal_8 = _UNK_1806cb07e;
    uVal_7 = _UNK_1806cb07a;
    uVal_6 = _UNK_1806cb076;
    *(uint32_t *)(lVal_12 + 0x11879) = _DAT_1806cb072;
    *(uint32_t *)(lVal_12 + 0x1187d) = uVal_6;
    *(uint32_t *)(lVal_12 + 0x11881) = uVal_7;
    *(uint32_t *)(lVal_12 + 0x11885) = uVal_8;
    uVal_8 = _UNK_1806cb08e;
    uVal_7 = _UNK_1806cb08a;
    uVal_6 = _UNK_1806cb086;
    *(uint32_t *)(lVal_12 + 0x11889) = _DAT_1806cb082;
    *(uint32_t *)(lVal_12 + 0x1188d) = uVal_6;
    *(uint32_t *)(lVal_12 + 0x11891) = uVal_7;
    *(uint32_t *)(lVal_12 + 0x11895) = uVal_8;
    uVal_8 = _UNK_1806cb09e;
    uVal_7 = _UNK_1806cb09a;
    uVal_6 = _UNK_1806cb096;
    *(uint32_t *)(lVal_12 + 0x11899) = _DAT_1806cb092;
    *(uint32_t *)(lVal_12 + 0x1189d) = uVal_6;
    *(uint32_t *)(lVal_12 + 0x118a1) = uVal_7;
    *(uint32_t *)(lVal_12 + 0x118a5) = uVal_8;
    uVal_8 = _DAT_1806cb0ae;
    uVal_7 = _UNK_1806cb0aa;
    uVal_6 = _UNK_1806cb0a6;
    *(uint32_t *)(lVal_12 + 0x118a9) = _DAT_1806cb0a2;
    *(uint32_t *)(lVal_12 + 0x118ad) = uVal_6;
    *(uint32_t *)(lVal_12 + 0x118b1) = uVal_7;
    *(uint32_t *)(lVal_12 + 0x118b5) = uVal_8;
    uVal_8 = _UNK_1806cb0ba;
    uVal_7 = _UNK_1806cb0b6;
    uVal_6 = _UNK_1806cb0b2;
    *(uint32_t *)(lVal_12 + 0x118b5) = _DAT_1806cb0ae;
    *(uint32_t *)(lVal_12 + 0x118b9) = uVal_6;
    *(uint32_t *)(lVal_12 + 0x118bd) = uVal_7;
    *(uint32_t *)(lVal_12 + 0x118c1) = uVal_8;
    func_0x180673140(&LAB_18042d260);
  }
  uVal_5 = _UNK_1806b2cac;
  uVal_20 = _UNK_1806b2ca8;
  uVal_18 = _UNK_1806b2ca4;
  uVal_16 = _DAT_1806b2ca0;
  lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint *)(lVal_12 + 0x11879);
  if (*(char *)(lVal_12 + 0x118c5) == '\x01') {
    uVal_15 = *(uint *)(lVal_12 + 0x1187d) ^ _UNK_1806b2ca4;
    uVal_17 = *(uint *)(lVal_12 + 0x11881) ^ _UNK_1806b2ca8;
    uVal_19 = *(uint *)(lVal_12 + 0x11885) ^ _UNK_1806b2cac;
    *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
    *(uint *)(lVal_12 + 0x1187d) = uVal_15;
    *(uint *)(lVal_12 + 0x11881) = uVal_17;
    *(uint *)(lVal_12 + 0x11885) = uVal_19;
    auArr_2._4_4_ = *(uint *)(lVal_12 + 0x1188d) ^ uVal_18;
    auArr_2._0_4_ = *(uint *)(lVal_12 + 0x11889) ^ uVal_16;
    auArr_2._8_4_ = *(uint *)(lVal_12 + 0x11891) ^ uVal_20;
    auArr_2._12_4_ = *(uint *)(lVal_12 + 0x11895) ^ uVal_5;
    *(uint8_t (*)[16])(lVal_12 + 0x11889) = auArr_2;
    auArr_3._4_4_ = *(uint *)(lVal_12 + 0x1189d) ^ uVal_18;
    auArr_3._0_4_ = *(uint *)(lVal_12 + 0x11899) ^ uVal_16;
    auArr_3._8_4_ = *(uint *)(lVal_12 + 0x118a1) ^ uVal_20;
    auArr_3._12_4_ = *(uint *)(lVal_12 + 0x118a5) ^ uVal_5;
    *(uint8_t (*)[16])(lVal_12 + 0x11899) = auArr_3;
    auArr_4._4_4_ = *(uint *)(lVal_12 + 0x118ad) ^ uVal_18;
    auArr_4._0_4_ = *(uint *)(lVal_12 + 0x118a9) ^ uVal_16;
    auArr_4._8_4_ = *(uint *)(lVal_12 + 0x118b1) ^ uVal_20;
    auArr_4._12_4_ = *(uint *)(lVal_12 + 0x118b5) ^ uVal_5;
    *(uint8_t (*)[16])(lVal_12 + 0x118a9) = auArr_4;
    *(uint64_t *)(lVal_12 + 0x118b9) =
         CONCAT44((uint)((uint64_t)*(uint64_t *)(lVal_12 + 0x118b9) >> 0x20) ^ _UNK_1806b5c14,
                  (uint)*(uint64_t *)(lVal_12 + 0x118b9) ^ _DAT_1806b5c10);
    *(byte *)(lVal_12 + 0x118c1) = *(byte *)(lVal_12 + 0x118c1) ^ 0x73;
    *(byte *)(lVal_12 + 0x118c2) = *(byte *)(lVal_12 + 0x118c2) ^ 0x45;
    *(byte *)(lVal_12 + 0x118c3) = *(byte *)(lVal_12 + 0x118c3) ^ 0x7d;
    *(byte *)(lVal_12 + 0x118c4) = *(byte *)(lVal_12 + 0x118c4) ^ 199;
    *(uint8_t *)(lVal_12 + 0x118c5) = 0;
  }
  local_58 = ZEXT816(0);
  sz_10 = strlen((char *)pU64_1);
  if ((int64_t)sz_10 < 0) {
    func_0x18007ba70();
LAB_18038c303:
    func_0x18007ba70();
LAB_18038c309:
    func_0x18007ba70();
  }
  else {
    if (sz_10 < 0x10) {
      pU64_13 = local_58;
      uVal_14 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_11) {
        uVal_14 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_12;
      }
      local_58._0_8_ = pU64_13;
    }
    local_48 = sz_10;
    local_40 = uVal_14;
    func_0x1806aa960(pU64_13,pU64_1,sz_10);
    pU64_13[sz_10] = 0;
    local_88._8_8_ = _UNK_1806cb0c6;
    local_88._0_8_ = _DAT_1806cb0be;
    local_78[0] = 0x73;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x118dc) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x118dc) = 1;
      func_0x18007d2b0(lVal_12 + 0x118c9,local_88);
      func_0x180673140(&LAB_18042d2a0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x118c9);
    if (*(char *)(lVal_12 + 0x118da) == '\x01') {
      uVal_16 = *(uint *)(lVal_12 + 0x118cd) ^ _UNK_1806b2ca4;
      uVal_18 = *(uint *)(lVal_12 + 0x118d1) ^ _UNK_1806b2ca8;
      uVal_20 = *(uint *)(lVal_12 + 0x118d5) ^ _UNK_1806b2cac;
      *pU64_1 = *pU64_1 ^ _DAT_1806b2ca0;
      *(uint *)(lVal_12 + 0x118cd) = uVal_16;
      *(uint *)(lVal_12 + 0x118d1) = uVal_18;
      *(uint *)(lVal_12 + 0x118d5) = uVal_20;
      *(byte *)(lVal_12 + 0x118d9) = *(byte *)(lVal_12 + 0x118d9) ^ 0x73;
      *(uint8_t *)(lVal_12 + 0x118da) = 0;
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    if ((int64_t)sz_10 < 0) goto LAB_18038c303;
    if (sz_10 < 0x10) {
      pU64_13 = local_a8;
      uVal_14 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_11) {
        uVal_14 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_12;
      }
      local_a8._0_8_ = pU64_13;
    }
    local_98._8_8_ = uVal_14;
    local_98._0_8_ = sz_10;
    func_0x1806aa960(pU64_13,pU64_1,sz_10);
    pU64_13[sz_10] = 0;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x118ec) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x118ec) = 1;
      *(uint64_t *)(lVal_12 + 0x118e0) = 0x9ddbdadeb7042404;
      *(uint16_t *)(lVal_12 + 0x118e8) = 0x173;
      func_0x180673140(&LAB_18042d2d0);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    _Str = (uint64_t *)(lVal_12 + 0x118e0);
    if (*(char *)(lVal_12 + 0x118e9) == '\x01') {
      *_Str = *_Str ^ 0xe9b5b3b1c77d4573;
      *(byte *)(lVal_12 + 0x118e8) = *(byte *)(lVal_12 + 0x118e8) ^ 0x73;
      *(uint8_t *)(lVal_12 + 0x118e9) = 0;
    }
    _local_78 = (uint8_t  [16])0x0;
    local_88 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)_Str);
    if ((int64_t)sz_10 < 0) goto LAB_18038c309;
    if (sz_10 < 0x10) {
      pU64_13 = local_88;
      uVal_14 = 0xf;
    }
    else {
      uVal_11 = sz_10 | 0xf;
      uVal_14 = 0x16;
      if (0x16 < uVal_11) {
        uVal_14 = uVal_11;
      }
      if (uVal_11 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
      }
      else {
        lVal_12 = func_0x180672de0(uVal_14 + 0x28);
        pU64_13 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_12;
      }
      local_88._0_8_ = pU64_13;
    }
    uStack_70 = uVal_14;
    local_78 = (uint8_t  [8])sz_10;
    func_0x1806aa960(pU64_13,_Str,sz_10);
    pU64_13[sz_10] = 0;
    pU64_13 = local_58;
    func_0x1804c9aa0(param_1,local_88,local_a8,pU64_13);
    if (0xf < uStack_70) {
      uVal_14 = uStack_70 + 1;
      lVal_12 = local_88._0_8_;
      if (0xfff < uVal_14) {
        lVal_12 = *(int64_t *)(local_88._0_8_ + -8);
        if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_12)) goto LAB_18038c315;
        uVal_14 = uStack_70 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_14);
    }
    if (0xf < (uint64_t)local_98._8_8_) {
      uVal_14 = local_98._8_8_ + 1;
      lVal_12 = local_a8._0_8_;
      if (0xfff < uVal_14) {
        lVal_12 = *(int64_t *)(local_a8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_12)) goto LAB_18038c315;
        uVal_14 = local_98._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_14);
    }
    if (0xf < local_40) {
      uVal_14 = local_40 + 1;
      lVal_12 = local_58._0_8_;
      if (0xfff < uVal_14) {
        lVal_12 = *(int64_t *)(local_58._0_8_ + -8);
        if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_12)) goto LAB_18038c315;
        uVal_14 = local_40 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_12,uVal_14);
    }
    *param_1 = &PTR_LAB_1806c9890;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x118f4) == '\0') {
      lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_12 + 0x118f4) = 1;
      *(uint32_t *)(lVal_12 + 0x118f0) = 0x169a1aa;
      func_0x180673140(&LAB_18042d300);
    }
    lVal_12 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint *)(lVal_12 + 0x118f0);
    if (*(char *)(lVal_12 + 0x118f3) == '\x01') {
      *pU64_1 = (*pU64_1 & 0xffff | (uint)*(byte *)(lVal_12 + 0x118f2) << 0x10) ^
                SUB164(_DAT_1806be370,0);
    }
    local_58 = (uint8_t  [16])0x0;
    sz_10 = strlen((char *)pU64_1);
    local_60 = param_1;
    if (-1 < (int64_t)sz_10) {
      uVal_14 = 0xf;
      if (0xf < sz_10) {
        uVal_11 = sz_10 | 0xf;
        uVal_14 = 0x16;
        if (0x16 < uVal_11) {
          uVal_14 = uVal_11;
        }
        if (uVal_11 < 0xfff) {
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_14 + 1);
        }
        else {
          lVal_12 = func_0x180672de0(uVal_14 + 0x28);
          pU64_13 = (uint8_t *)(lVal_12 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_12;
        }
        local_58._0_8_ = pU64_13;
      }
      pU64_9 = local_60;
      local_48 = sz_10;
      local_40 = uVal_14;
      func_0x1806aa960(pU64_13,pU64_1,sz_10);
      pU64_13[sz_10] = 0;
      func_0x1804c9cb0(pU64_9,local_58);
      pU64_9 = local_60;
      if (0xf < local_40) {
        uVal_14 = local_40 + 1;
        lVal_12 = local_58._0_8_;
        if (0xfff < uVal_14) {
          lVal_12 = *(int64_t *)(local_58._0_8_ + -8);
          if (0x1f < (uint64_t)((local_58._0_8_ + -8) - lVal_12)) goto LAB_18038c315;
          uVal_14 = local_40 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_12,uVal_14);
      }
      return pU64_9;
    }
  }
  func_0x18007ba70();
LAB_18038c315:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18038c320
void Unwind_18038c320(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x40);
  return;
}

// Unwind@18038c350
void Unwind_18038c350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x20);
  return;
}

// Unwind@18038c380
void Unwind_18038c380(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18038c3b0
void Unwind_18038c3b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18038c3e0
void Unwind_18038c3e0(uint64_t param_1,int64_t param_2)
{
  func_0x1804c9cc0(*(uint64_t *)(param_2 + 0x68));
  return;
}

// Unwind@18038c410
void Unwind_18038c410(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x118dc) = 0;
  return;
}

// Unwind@18038f790
void Unwind_18038f790(void)
{
  func_0x180672f60(&DAT_180840138);
  return;
}

// Unwind@18038f800
void Unwind_18038f800(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11984) = 0;
  return;
}

// Unwind@18038f880
void Unwind_18038f880(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11950) = 0;
  return;
}

// Unwind@18038f900
void Unwind_18038f900(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x363) = 0;
  return;
}

// Unwind@18038f980
void Unwind_18038f980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x366) = 0;
  return;
}

// Unwind@18038fa00
void Unwind_18038fa00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x364) = 0;
  return;
}

// Unwind@18038fa80
void Unwind_18038fa80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1191c) = 0;
  return;
}

// Unwind@18038fb00
void Unwind_18038fb00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x365) = 0;
  return;
}

// Unwind@18038fb80
void Unwind_18038fb80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x367) = 0;
  return;
}

// Unwind@18038fc00
void Unwind_18038fc00(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x363) == '\x01') {
    func_0x180001e70(param_2 + 0x1a0);
  }
  return;
}

// Unwind@18038fc80
void Unwind_18038fc80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x368) = 0;
  return;
}

// Unwind@18038fd00
void Unwind_18038fd00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x369) = 0;
  return;
}

// Unwind@18038fd80
void Unwind_18038fd80(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x364) == '\x01') {
    func_0x180001e70(param_2 + 0x160);
  }
  return;
}

// Unwind@18038fe00
void Unwind_18038fe00(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x366) == '\x01') {
    func_0x180001e70(param_2 + 0x180);
  }
  return;
}

// Unwind@18038fe80
void Unwind_18038fe80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@18038fef0
void Unwind_18038fef0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@18038ff60
void Unwind_18038ff60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@18038ffd0
void Unwind_18038ffd0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x365) == '\x01') {
    func_0x180001e70(param_2 + 0x1c0);
  }
  return;
}

// Unwind@180390050
void Unwind_180390050(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x367) == '\x01') {
    func_0x180001e70(param_2 + 0x140);
  }
  return;
}

// Unwind@1803900d0
void Unwind_1803900d0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x368) == '\x01') {
    func_0x180001e70(param_2 + 0x120);
  }
  return;
}

// Unwind@180390150
void Unwind_180390150(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x369) == '\x01') {
    func_0x180001e70(param_2 + 0x100);
  }
  return;
}

// Unwind@1803901d0
void Unwind_1803901d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x36a) = 0;
  return;
}
