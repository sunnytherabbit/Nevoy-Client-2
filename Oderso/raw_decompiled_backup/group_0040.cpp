#include <oderso/compat.h>
#include <oderso/decls.h>

// Unwind@180390250
void Unwind_180390250(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x36b) = 0;
  return;
}

// Unwind@1803902d0
void Unwind_1803902d0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x36a) == '\x01') {
    func_0x180001e70(param_2 + 0xe0);
  }
  return;
}

// Unwind@180390350
void Unwind_180390350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@1803903c0
void Unwind_1803903c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x36c) = 0;
  return;
}

// Unwind@180390440
void Unwind_180390440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x36d) = 0;
  return;
}

// Unwind@1803904c0
void Unwind_1803904c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x36e) = 0;
  return;
}

// Unwind@180390540
void Unwind_180390540(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  *(uint8_t *)(param_2 + 0x36f) = 0;
  return;
}

// Unwind@1803905c0
void Unwind_1803905c0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x36b) == '\x01') {
    func_0x180001e70(param_2 + 0xc0);
  }
  return;
}

// Unwind@180390640
void Unwind_180390640(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x36d) == '\x01') {
    func_0x180001e70(param_2 + 0x80);
  }
  return;
}

// Unwind@1803906b0
void Unwind_1803906b0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x36c) == '\x01') {
    func_0x180001e70(param_2 + 0xa0);
  }
  return;
}

// Unwind@180390730
void Unwind_180390730(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@1803907a0
void Unwind_1803907a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@180390810
void Unwind_180390810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@180390880
void Unwind_180390880(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x36f) == '\x01') {
    func_0x180001e70(param_2 + 0x40);
  }
  return;
}

// Unwind@180390900
void Unwind_180390900(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x36e) == '\x01') {
    func_0x180001e70(param_2 + 0x60);
  }
  return;
}

// Unwind@180390980
void Unwind_180390980(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@1803909f0
void Unwind_1803909f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@180390a60
void Unwind_180390a60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@180390ad0
void Unwind_180390ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x370);
  return;
}

// Unwind@180390b40
void Unwind_180390b40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x330);
  return;
}

// func_0x180390bb0
void func_0x180390bb0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint64_t param_4)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint32_t local_80;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  uint64_t local_70;
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
  local_40 = 0x4d;
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

// Unwind@180390c70
void Unwind_180390c70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x48);
  return;
}

// func_0x180390ca0
void func_0x180390ca0(uint64_t param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  int *pInt_2;
  uint8_t auStack_48 [40];
  uint64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  pInt_2 = (int *)func_0x1806823dc();
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  *pInt_2 = 0;
  func_0x18068e534(param_2,&local_20);
  if (param_2 == local_20) {
    func_0x180674490("invalid stof argument");
  }
  else if (*pInt_2 != 0x22) {
    if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
      return;
    }
    goto LAB_180390d1c;
  }
  func_0x1806744f0("stof argument out of range");
LAB_180390d1c:
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180390d30
void func_0x180390d30(uint64_t param_1,uint64_t *param_2)
{
  func_ptr_t fnPtr_1;
  int *pInt_2;
  uint8_t auStack_48 [40];
  uint64_t *local_20;
  uint64_t local_18;
  
  local_18 = DAT_18083cf40 ^ (uint64_t)auStack_48;
  pInt_2 = (int *)func_0x1806823dc();
  if (0xf < (uint64_t)param_2[3]) {
    param_2 = (uint64_t *)*param_2;
  }
  *pInt_2 = 0;
  func_0x180691c9c(param_2,&local_20,10);
  if (param_2 == local_20) {
    func_0x180674490("invalid stoi argument");
  }
  else if (*pInt_2 != 0x22) {
    if (DAT_18083cf40 == (local_18 ^ (uint64_t)auStack_48)) {
      return;
    }
    goto LAB_180390db2;
  }
  func_0x1806744f0("stoi argument out of range");
LAB_180390db2:
  func_0x180673080(local_18 ^ (uint64_t)auStack_48);
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x180390dc0
uint func_0x180390dc0(int64_t param_1,uint64_t param_2,uint64_t *param_3,uint32_t param_4, uint32_t *param_5,uint8_t (*param_6)[16])
{
  uint uVal_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  uint64_t uVal_5;
  uint8_t local_90 [16];
  uint64_t local_80;
  uint32_t local_78;
  uint32_t local_74;
  uint32_t local_70;
  uint32_t uStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint8_t local_60 [16];
  uint8_t local_50 [16];
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVal_1 = func_0x1800d73e0(param_1 + 0x2d0);
  if ((char)uVal_1 == '\0') {
    local_80 = *param_3;
    local_78 = *(uint32_t *)(param_3 + 1);
    local_70 = *param_5;
    uStack_6c = param_5[1];
    uStack_68 = param_5[2];
    uStack_64 = param_5[3];
    local_60 = ZEXT816(0);
    local_50 = ZEXT816(0);
    uVal_4 = *(uint64_t *)param_6[1];
    if (0xf < *(uint64_t *)(param_6[1] + 8)) {
      param_6 = *(uint8_t (**)[16])*param_6;
    }
    local_74 = param_4;
    if ((int64_t)uVal_4 < 0) {
      func_0x18007ba70();
LAB_180390f39:
      do {
        invalidInstructionException();
      } while( true );
    }
    local_50._0_8_ = uVal_4;
    if (uVal_4 < 0x10) {
      local_50._8_8_ = 0xf;
      local_60 = *param_6;
    }
    else {
      uVal_2 = uVal_4 | 0xf;
      uVal_5 = 0x16;
      if (0x16 < uVal_2) {
        uVal_5 = uVal_2;
      }
      if (uVal_2 < 0xfff) {
        uVal_2 = func_0x180672de0(uVal_5 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_5 + 0x28);
        uVal_2 = lVal_3 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_2 - 8) = lVal_3;
      }
      local_60._0_8_ = uVal_2;
      local_50._8_8_ = uVal_5;
      func_0x1806aa960(uVal_2,param_6,uVal_4 + 1);
    }
    func_0x18042d480(param_1 + 0x2d0,local_90,param_2,&local_80);
    if (0xf < (uint64_t)local_50._8_8_) {
      uVal_4 = local_50._8_8_ + 1;
      lVal_3 = local_60._0_8_;
      if (0xfff < uVal_4) {
        lVal_3 = *(int64_t *)(local_60._0_8_ + -8);
        if (0x1f < (uint64_t)((local_60._0_8_ + -8) - lVal_3)) goto LAB_180390f39;
        uVal_4 = local_50._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_3,uVal_4);
    }
  }
  return uVal_1 ^ 1;
}

// Unwind@180390f40
void Unwind_180390f40(uint64_t param_1,int64_t param_2)
{
  func_0x1801ad4d0(param_2 + 0x38);
  return;
}

// func_0x180390f80
void func_0x180390f80(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,int64_t **param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t *pLong_7;
  uint32_t local_b0;
  uint32_t uStack_ac;
  uint32_t uStack_a8;
  uint32_t uStack_a4;
  int64_t **local_a0;
  int64_t *local_98;
  uint32_t local_90;
  uint32_t local_80;
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
  local_b0 = *param_3;
  uStack_ac = param_3[1];
  uStack_a8 = param_3[2];
  uStack_a4 = param_3[3];
  local_98 = param_4[2];
  local_a0 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_a0 = (int64_t **)*param_4;
  }
  local_90 = param_5;
  local_80 = param_6;
  local_70 = param_7;
  local_40 = 0x999dd;
  local_38 = &local_b0;
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
      if (0x1f < (uint64_t)((local_60[0] + -8) - lVal_5)) goto LAB_1803910b4;
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
LAB_1803910b4:
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

// Unwind@1803910c0
void Unwind_1803910c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x78);
  return;
}

// Unwind@1803910f0
void Unwind_1803910f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xb8));
  return;
}

// func_0x180391120
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180391120(void)
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
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  undefined6 uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cb177;
  uStack_24 = _UNK_1806cb17b;
  uStack_20 = _UNK_1806cb17f;
  uStack_1c = (uint16_t)_UNK_1806cb183;
  local_38 = _DAT_1806cb167;
  uStack_34 = _UNK_1806cb16b;
  uStack_30 = _UNK_1806cb16f;
  uStack_2c = _UNK_1806cb173;
  local_48 = _DAT_1806cb157;
  uStack_44 = _UNK_1806cb15b;
  uStack_40 = _UNK_1806cb15f;
  uStack_3c = _UNK_1806cb163;
  local_58 = _DAT_1806cb147;
  uStack_54 = _UNK_1806cb14b;
  uStack_50 = _UNK_1806cb14f;
  uStack_4c = _UNK_1806cb153;
  uStack_1a = 0xfe0d;
  uStack_18 = 0xe5a0bfedc1b9;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x119f0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x119f0) = 1;
    func_0x180210ce0(lVal_1 + 0x119a9,&local_58);
    func_0x180673140(&LAB_18042d7f0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x119a9;
}

// Unwind@1803911f0
void Unwind_1803911f0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x119f0) = 0;
  return;
}

// func_0x180391220
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180391220(void)
{
  int64_t lVal_1;
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
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cb1ad;
  uStack_24 = _UNK_1806cb1b1;
  uStack_20 = _UNK_1806cb1b5;
  uStack_1c = _UNK_1806cb1b9;
  local_38 = _DAT_1806cb19d;
  uStack_34 = _UNK_1806cb1a1;
  uStack_30 = _UNK_1806cb1a5;
  uStack_2c = _UNK_1806cb1a9;
  local_48 = _DAT_1806cb18d;
  uStack_44 = _UNK_1806cb191;
  uStack_40 = _UNK_1806cb195;
  uStack_3c = _UNK_1806cb199;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11a24) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11a24) = 1;
    func_0x1801b4680(lVal_1 + 0x119f1,&local_48);
    func_0x180673140(&LAB_18042d830);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x119f1;
}

// Unwind@1803912d0
void Unwind_1803912d0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11a24) = 0;
  return;
}

// func_0x180391300
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180391300(void)
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
  uStack_28 = _UNK_1806cb1cd;
  uStack_25 = _UNK_1806cb1d0;
  uStack_21 = _UNK_1806cb1d4;
  uStack_1d = _UNK_1806cb1d8;
  local_38 = _DAT_1806cb1bd;
  uStack_34 = _UNK_1806cb1c1;
  uStack_30 = _UNK_1806cb1c5;
  uStack_2c = _UNK_1806cb1c9;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11a48) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11a48) = 1;
    func_0x18007ce20(lVal_1 + 0x11a25,&local_38);
    func_0x180673140(&LAB_18042d860);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11a25;
}

// Unwind@1803913a0
void Unwind_1803913a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11a48) = 0;
  return;
}

// func_0x1803913d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803913d0(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cb1dc;
  uStack_24 = _UNK_1806cb1e0;
  uStack_20 = _UNK_1806cb1e4;
  uStack_1c = _UNK_1806cb1e8;
  local_18 = 0x49cf8044aba15bcb;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11a74) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11a74) = 1;
    func_0x18007d9e0(lVal_1 + 0x11a59,&local_28);
    func_0x180673140(&LAB_18042d9a0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11a59;
}

// Unwind@180391470
void Unwind_180391470(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11a74) = 0;
  return;
}

// func_0x1803914a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803914a0(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cb1f4;
  uStack_24 = _UNK_1806cb1f8;
  uStack_20 = _UNK_1806cb1fc;
  uStack_1c = _UNK_1806cb200;
  local_18 = 0x139da45607779569;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11a90) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11a90) = 1;
    func_0x18007d9e0(lVal_1 + 0x11a75,&local_28);
    func_0x180673140(&LAB_18042d9d0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11a75;
}

// Unwind@180391540
void Unwind_180391540(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11a90) = 0;
  return;
}

// func_0x180391570
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180391570(void)
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
  uint16_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cb21c;
  uStack_24 = _UNK_1806cb220;
  uStack_20 = _UNK_1806cb224;
  uStack_1c = _UNK_1806cb228;
  local_38 = _DAT_1806cb20c;
  uStack_34 = _UNK_1806cb210;
  uStack_30 = _UNK_1806cb214;
  uStack_2c = _UNK_1806cb218;
  local_18 = 0x713;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11ac4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11ac4) = 1;
    func_0x1800f15f0(lVal_1 + 0x11aa1,&local_38);
    func_0x180673140(&LAB_18042da30);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11aa1;
}

// Unwind@180391620
void Unwind_180391620(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11ac4) = 0;
  return;
}

// func_0x180391650
uint64_t func_0x180391650(int64_t param_1,uint64_t param_2)
{
  char ch_1;
  uint64_t uVal_2;
  
  ch_1 = func_0x1800d73e0(param_1 + 0x2d0);
  if (ch_1 != '\0') {
    uVal_2 = func_0x1800fcc60(param_1 + 0x2d0,param_2);
    return uVal_2;
  }
  return 0;
}

// func_0x180391690
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180391690(void)
{
  int64_t lVal_1;
  uint32_t local_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint64_t local_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cb22e;
  uStack_24 = _UNK_1806cb232;
  uStack_20 = _UNK_1806cb236;
  uStack_1c = _UNK_1806cb23a;
  local_18 = 0x19b7cb01f954b19;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11ae0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11ae0) = 1;
    func_0x18007d9e0(lVal_1 + 0x11ac5,&local_28);
    func_0x180673140(&LAB_18042da60);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11ac5;
}

// Unwind@180391730
void Unwind_180391730(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11ae0) = 0;
  return;
}

// func_0x180391760
int64_t func_0x180391760(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11aec) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11aec) = 1;
    *(uint8_t *)(lVal_1 + 0x11ae8) = 1;
    *(uint32_t *)(lVal_1 + 0x11ae4) = 0xc91298d9;
    func_0x180673140(&LAB_18042da90);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11ae4;
}

// func_0x1803917e0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803917e0(void)
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
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint8_t uStack_28;
  uint32_t uStack_27;
  uint32_t uStack_23;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = UNK_1806cb276;
  uStack_27 = _UNK_1806cb277;
  uStack_23 = _UNK_1806cb27b;
  uStack_38 = _DAT_1806cb266;
  uStack_34 = _UNK_1806cb26a;
  uStack_30 = _UNK_1806cb26e;
  uStack_2c = _UNK_1806cb272;
  local_48 = _DAT_1806cb256;
  uStack_44 = _UNK_1806cb25a;
  uStack_40 = _UNK_1806cb25e;
  uStack_3c = _UNK_1806cb262;
  local_58 = _DAT_1806cb246;
  uStack_54 = _UNK_1806cb24a;
  uStack_50 = _UNK_1806cb24e;
  uStack_4c = _UNK_1806cb252;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11b28) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11b28) = 1;
    func_0x1802d71a0(lVal_1 + 0x11aed,&local_58);
    func_0x180673140(&LAB_18042dab0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11aed;
}

// Unwind@1803918a0
void Unwind_1803918a0(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11b28) = 0;
  return;
}

// func_0x1803918d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803918d0(void)
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
  local_28 = _DAT_1806cb28f;
  uStack_24 = _UNK_1806cb293;
  uStack_20 = _UNK_1806cb297;
  uStack_1c = _UNK_1806cb29b;
  local_38 = _DAT_1806cb27f;
  uStack_34 = _UNK_1806cb283;
  uStack_30 = _UNK_1806cb287;
  uStack_2c = _UNK_1806cb28b;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11b4c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11b4c) = 1;
    func_0x18008f8e0(lVal_1 + 0x11b29,&local_38);
    func_0x180673140(&LAB_18042daf0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11b29;
}

// Unwind@180391970
void Unwind_180391970(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11b4c) = 0;
  return;
}

// func_0x1803919a0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x1803919a0(void)
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
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint8_t uStack_28;
  uint32_t uStack_27;
  uint32_t uStack_23;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = UNK_1806cb2cf;
  uStack_27 = _UNK_1806cb2d0;
  uStack_23 = _UNK_1806cb2d4;
  uStack_38 = _DAT_1806cb2bf;
  uStack_34 = _UNK_1806cb2c3;
  uStack_30 = _UNK_1806cb2c7;
  uStack_2c = _UNK_1806cb2cb;
  local_48 = _DAT_1806cb2af;
  uStack_44 = _UNK_1806cb2b3;
  uStack_40 = _UNK_1806cb2b7;
  uStack_3c = _UNK_1806cb2bb;
  local_58 = _DAT_1806cb29f;
  uStack_54 = _UNK_1806cb2a3;
  uStack_50 = _UNK_1806cb2a7;
  uStack_4c = _UNK_1806cb2ab;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11ba0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11ba0) = 1;
    func_0x1802d71a0(lVal_1 + 0x11b65,&local_58);
    func_0x180673140(&LAB_18042db80);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11b65;
}

// Unwind@180391a60
void Unwind_180391a60(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11ba0) = 0;
  return;
}

// func_0x180391a90
int64_t func_0x180391a90(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11bac) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11bac) = 1;
    *(uint8_t *)(lVal_1 + 0x11baa) = 1;
    *(uint32_t *)(lVal_1 + 0x11ba4) = 0xde29ca7a;
    *(uint16_t *)(lVal_1 + 0x11ba8) = 0x9d15;
    func_0x180673140(&LAB_18042dbc0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11ba4;
}

// func_0x180391b20
void func_0x180391b20(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,int64_t **param_4, uint32_t param_5,uint32_t param_6,uint32_t param_7,uint32_t param_8)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  int64_t **ptr2_Long_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  int64_t *pLong_7;
  uint32_t local_c0;
  uint32_t uStack_bc;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  int64_t **local_b0;
  int64_t *local_a8;
  uint32_t local_a0;
  uint32_t local_90;
  uint32_t local_80;
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
  local_c0 = *param_3;
  uStack_bc = param_3[1];
  uStack_b8 = param_3[2];
  uStack_b4 = param_3[3];
  local_a8 = param_4[2];
  local_b0 = param_4;
  if (&DAT_0000000f < param_4[3]) {
    local_b0 = (int64_t **)*param_4;
  }
  local_a0 = param_5;
  local_90 = param_6;
  local_80 = param_7;
  local_70 = param_8;
  local_40 = 0x9999dd;
  local_38 = &local_c0;
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
      if (0x1f < (uint64_t)((local_60[0] + -8) - lVal_5)) goto LAB_180391c61;
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
LAB_180391c61:
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

// Unwind@180391c70
void Unwind_180391c70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x88);
  return;
}

// Unwind@180391ca0
void Unwind_180391ca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 200));
  return;
}

// func_0x180391cd0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180391cd0(void)
{
  int64_t lVal_1;
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
  uint32_t uStack_18;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = _DAT_1806cb34d;
  uStack_24 = _UNK_1806cb351;
  uStack_20 = _UNK_1806cb355;
  local_38 = _DAT_1806cb33d;
  uStack_34 = _UNK_1806cb341;
  uStack_30 = _UNK_1806cb345;
  uStack_2c = _UNK_1806cb349;
  local_48 = _DAT_1806cb32d;
  uStack_44 = _UNK_1806cb331;
  uStack_40 = _UNK_1806cb335;
  uStack_3c = _UNK_1806cb339;
  uStack_1c = CONCAT13(0xf3,(int3)_UNK_1806cb359);
  uStack_18 = CONCAT13(uStack_18._3_1_,0xabe986);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11c3c) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11c3c) = 1;
    func_0x1801b4360(lVal_1 + 0x11c05,&local_48);
    func_0x180673140(&LAB_18042dc40);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11c05;
}

// Unwind@180391d80
void Unwind_180391d80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11c3c) = 0;
  return;
}

// func_0x180391db0
int64_t func_0x180391db0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11ca0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11ca0) = 1;
    *(uint8_t *)(lVal_1 + 0x11c9e) = 1;
    *(uint32_t *)(lVal_1 + 0x11c98) = 0x2113b8ac;
    *(uint16_t *)(lVal_1 + 0x11c9c) = 0xb5af;
    func_0x180673140(&LAB_18042dcd0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11c98;
}

// func_0x180391e40
void func_0x180391e40(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0x4d61d7db;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xcb;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0xb5;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180391e60
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
int64_t func_0x180391e60(void)
{
  int64_t lVal_1;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t local_2a;
  uint16_t uStack_28;
  uint32_t uStack_26;
  uint32_t uStack_22;
  uint32_t uStack_1e;
  uint64_t local_10;
  
  local_10 = 0xfffffffffffffffe;
  uStack_28 = _UNK_1806cb3d5;
  uStack_26 = _UNK_1806cb3d7;
  uStack_22 = _UNK_1806cb3db;
  uStack_1e = _UNK_1806cb3df;
  uStack_38 = _DAT_1806cb3c5;
  uStack_34 = _UNK_1806cb3c9;
  uStack_30 = _UNK_1806cb3cd;
  uStack_2c = _UNK_1806cb3d1;
  local_2a = _DAT_1806cb3d3;
  local_48 = _DAT_1806cb3b5;
  uStack_44 = _UNK_1806cb3b9;
  uStack_40 = _UNK_1806cb3bd;
  uStack_3c = _UNK_1806cb3c1;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11cd0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11cd0) = 1;
    func_0x1801ba020(lVal_1 + 0x11ca1,&local_48);
    func_0x180673140(&LAB_18042dd00);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11ca1;
}

// Unwind@180391f10
void Unwind_180391f10(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11cd0) = 0;
  return;
}

// Unwind@180395af0
void Unwind_180395af0(void)
{
  func_0x180672f60(&DAT_180840178);
  return;
}

// Unwind@180395b40
void Unwind_180395b40(void)
{
  func_0x180672f60(&DAT_180840168);
  return;
}

// Unwind@180395b90
void Unwind_180395b90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180395be0
void Unwind_180395be0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180395c30
void Unwind_180395c30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180395c80
void Unwind_180395c80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180395cd0
void Unwind_180395cd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180395d20
void Unwind_180395d20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180395d70
void Unwind_180395d70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  func_0x180001e70(param_2 + 0x140);
  *(int64_t *)(param_2 + 0xa8) = param_2 + 0x160;
  *(uint8_t *)(param_2 + 0x135) = 1;
  return;
}

// Unwind@180395de0
void Unwind_180395de0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  func_0x180001e70(param_2 + 0x140);
  *(int64_t *)(param_2 + 0x98) = param_2 + 0x160;
  *(uint8_t *)(param_2 + 0x133) = 1;
  return;
}

// Unwind@180395e50
void Unwind_180395e50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  func_0x180001e70(param_2 + 0x140);
  *(int64_t *)(param_2 + 0xa0) = param_2 + 0x160;
  *(uint8_t *)(param_2 + 0x134) = 1;
  return;
}

// Unwind@180395ec0
void Unwind_180395ec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180395f10
void Unwind_180395f10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180395f60
void Unwind_180395f60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180395fb0
void Unwind_180395fb0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0xa0);
  if ((param_2 + 0x140 == lVal_1 | *(byte *)(param_2 + 0x134) & 1) == 0) {
    do {
      lVal_1 = lVal_1 + -0x20;
      func_0x180001e70(lVal_1);
    } while (lVal_1 != param_2 + 0x140);
  }
  return;
}

// Unwind@180396020
void Unwind_180396020(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0x98);
  if ((param_2 + 0x140 == lVal_1 | *(byte *)(param_2 + 0x133) & 1) == 0) {
    do {
      lVal_1 = lVal_1 + -0x20;
      func_0x180001e70(lVal_1);
    } while (lVal_1 != param_2 + 0x140);
  }
  return;
}

// Unwind@180396090
void Unwind_180396090(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0xa8);
  if ((param_2 + 0x140 == lVal_1 | *(byte *)(param_2 + 0x135) & 1) == 0) {
    do {
      lVal_1 = lVal_1 + -0x20;
      func_0x180001e70(lVal_1);
    } while (lVal_1 != param_2 + 0x140);
  }
  return;
}

// Unwind@180396100
void Unwind_180396100(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396150
void Unwind_180396150(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1803961a0
void Unwind_1803961a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1803961f0
void Unwind_1803961f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180396230
void Unwind_180396230(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180396270
void Unwind_180396270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@1803962b0
void Unwind_1803962b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396300
void Unwind_180396300(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396350
void Unwind_180396350(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1803963a0
void Unwind_1803963a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1803963f0
void Unwind_1803963f0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396440
void Unwind_180396440(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396490
void Unwind_180396490(uint64_t param_1,int64_t param_2)
{
  uint64_t uVal_1;
  int64_t lVal_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  
  uVal_1 = *(uint64_t *)(param_2 + 0x178);
  if (0xf < uVal_1) {
    lVal_2 = *(int64_t *)(param_2 + 0x160);
    uVal_3 = uVal_1 + 1;
    lVal_4 = lVal_2;
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(lVal_2 + -8);
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) goto LAB_180396599;
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
      if (0x1f < (uint64_t)((lVal_2 + -8) - lVal_4)) {
LAB_180396599:
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_3 = uVal_1 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  *(uint64_t *)(param_2 + 0x150) = 0;
  *(uint64_t *)(param_2 + 0x158) = 0xf;
  *(uint8_t *)(param_2 + 0x140) = 0;
  *(uint8_t *)(param_2 + 0x187) = 1;
  *(int64_t *)(param_2 + 0xe8) = param_2 + 0x160;
  return;
}

// Unwind@1803965a0
void Unwind_1803965a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  func_0x180001e70(param_2 + 0x140);
  *(uint8_t *)(param_2 + 0x136) = 1;
  *(int64_t *)(param_2 + 0xb0) = param_2 + 0x160;
  return;
}

// Unwind@180396610
void Unwind_180396610(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x160);
  func_0x180001e70(param_2 + 0x140);
  *(uint8_t *)(param_2 + 0x137) = 1;
  *(int64_t *)(param_2 + 0xb8) = param_2 + 0x160;
  return;
}

// Unwind@180396680
void Unwind_180396680(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1803966d0
void Unwind_1803966d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396720
void Unwind_180396720(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396770
void Unwind_180396770(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1803967c0
void Unwind_1803967c0(uint64_t param_1,int64_t param_2)
{
  int64_t lVal_1;
  
  lVal_1 = *(int64_t *)(param_2 + 0xb0);
  if ((param_2 + 0x140 == lVal_1 | *(byte *)(param_2 + 0x136) & 1) == 0) {
    do {
      lVal_1 = lVal_1 + -0x20;
      func_0x180001e70(lVal_1);
    } while (lVal_1 != param_2 + 0x140);
  }
  return;
}

// Unwind@180396830
void Unwind_180396830(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  
  pLong_6 = *(int64_t **)(param_2 + 0xb8);
  if (((int64_t *)(param_2 + 0x140) == *(int64_t **)(param_2 + 0xb8) |
      *(byte *)(param_2 + 0x137) & 1) == 0) {
    do {
      pLong_1 = pLong_6 + -4;
      uVal_2 = pLong_6[-1];
      if (0xf < uVal_2) {
        lVal_3 = *pLong_1;
        uVal_4 = uVal_2 + 1;
        lVal_5 = lVal_3;
        if (0xfff < uVal_4) {
          lVal_5 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_4 = uVal_2 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_4);
      }
      pLong_6[-2] = 0;
      pLong_6[-1] = 0xf;
      *(uint8_t *)(pLong_6 + -4) = 0;
      pLong_6 = pLong_1;
    } while (pLong_1 != (int64_t *)(param_2 + 0x140));
  }
  return;
}

// Unwind@1803968e0
void Unwind_1803968e0(uint64_t param_1,int64_t param_2)
{
  int64_t *pLong_1;
  uint64_t uVal_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  int64_t *pLong_6;
  
  pLong_6 = *(int64_t **)(param_2 + 0xe8);
  if (((int64_t *)(param_2 + 0x140) == *(int64_t **)(param_2 + 0xe8) |
      *(byte *)(param_2 + 0x187) & 1) == 0) {
    do {
      pLong_1 = pLong_6 + -4;
      uVal_2 = pLong_6[-1];
      if (0xf < uVal_2) {
        lVal_3 = *pLong_1;
        uVal_4 = uVal_2 + 1;
        lVal_5 = lVal_3;
        if (0xfff < uVal_4) {
          lVal_5 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) {
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_4 = uVal_2 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_5,uVal_4);
      }
      pLong_6[-2] = 0;
      pLong_6[-1] = 0xf;
      *(uint8_t *)(pLong_6 + -4) = 0;
      pLong_6 = pLong_1;
    } while (pLong_1 != (int64_t *)(param_2 + 0x140));
  }
  return;
}

// Unwind@180396990
void Unwind_180396990(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@1803969e0
void Unwind_1803969e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396a30
void Unwind_180396a30(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396a80
void Unwind_180396a80(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396ad0
void Unwind_180396ad0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180396b10
void Unwind_180396b10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180396b50
void Unwind_180396b50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@180396b90
void Unwind_180396b90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396be0
void Unwind_180396be0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396c30
void Unwind_180396c30(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x138));
  return;
}

// Unwind@180396c80
void Unwind_180396c80(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x138));
  return;
}

// Unwind@180396cd0
void Unwind_180396cd0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// Unwind@180396d20
void Unwind_180396d20(uint64_t param_1,int64_t param_2)
{
  func_0x180037f80(*(uint64_t *)(param_2 + 0x138));
  return;
}

// Unwind@180396d70
void Unwind_180396d70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@180396db0
void Unwind_180396db0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  func_0x180037f80(*(uint64_t *)(param_2 + 0x138));
  return;
}

// func_0x180396ef0
uint64_t func_0x180396ef0(uint64_t param_1,uint64_t *param_2,uint32_t param_3)
{
  func_ptr_t fnPtr_1;
  uint64_t uVal_2;
  uint8_t auStack_68 [40];
  uint64_t *local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint32_t *local_28;
  uint32_t local_20 [4];
  uint64_t local_10;
  
  local_10 = DAT_18083cf40 ^ (uint64_t)auStack_68;
  local_30 = 9;
  local_28 = local_20;
  local_40 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_40 = (uint64_t *)*param_2;
  }
  local_38 = param_2[2];
  local_20[0] = param_3;
  func_0x18063ff10(param_1,&local_40,&local_30);
  if (DAT_18083cf40 == (local_10 ^ (uint64_t)auStack_68)) {
    return param_1;
  }
  func_0x180673080(local_10 ^ (uint64_t)auStack_68);
  fnPtr_1 = (func_ptr_t )swi(3);
  uVal_2 = (*fnPtr_1)();
  return uVal_2;
}

// func_0x180396f80
int64_t func_0x180396f80(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11d78) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11d78) = 1;
    *(uint64_t *)(lVal_1 + 0x11d70) = 0x19df0f96d81cf74;
    func_0x180673140(&LAB_18042df50);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11d70;
}

// func_0x180397000
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180397000(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806c85d0,0);
  }
  return;
}

// func_0x180397130
int64_t func_0x180397130(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11dac) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11dac) = 1;
    *(uint8_t *)(lVal_1 + 0x11da8) = 1;
    *(uint32_t *)(lVal_1 + 0x11da4) = 0x6dac0cbb;
    func_0x180673140(&LAB_18042e010);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11da4;
}

// func_0x1803971b0
int64_t func_0x1803971b0(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11db8) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11db8) = 1;
    *(uint8_t *)(lVal_1 + 0x11db6) = 1;
    *(uint32_t *)(lVal_1 + 0x11db0) = 0xd4fd54fc;
    *(uint16_t *)(lVal_1 + 0x11db4) = 0xa5cb;
    func_0x180673140(&LAB_18042e030);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11db0;
}

// func_0x180397240
void func_0x180397240(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0xbb913b9f;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xb9;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0xa5;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180397260
int64_t func_0x180397260(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11dc4) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11dc4) = 1;
    *(uint8_t *)(lVal_1 + 0x11dc2) = 1;
    *(uint32_t *)(lVal_1 + 0x11dbc) = 0xdf9b7ae0;
    *(uint16_t *)(lVal_1 + 0x11dc0) = 0x91a5;
    func_0x180673140(&LAB_18042e060);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11dbc;
}

// func_0x1803972f0
void func_0x1803972f0(uint *param_1)
{
  if (*(char *)((int64_t)param_1 + 6) == '\x01') {
    *param_1 = *param_1 ^ 0xb3e91597;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) ^ 0xc1;
    *(byte *)((int64_t)param_1 + 5) = *(byte *)((int64_t)param_1 + 5) ^ 0x91;
    *(uint8_t *)((int64_t)param_1 + 6) = 0;
  }
  return;
}

// func_0x180397310
int64_t func_0x180397310(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11dd0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11dd0) = 1;
    *(uint8_t *)(lVal_1 + 0x11dcc) = 1;
    *(uint32_t *)(lVal_1 + 0x11dc8) = 0xf7540ead;
    func_0x180673140(&LAB_18042e090);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11dc8;
}

// func_0x180397390
int64_t func_0x180397390(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11de0) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11de0) = 1;
    *(uint64_t *)(lVal_1 + 0x11dd8) = 0x1f9b0ef5b2db35a;
    func_0x180673140(&LAB_18042e0b0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11dd8;
}

// func_0x180397410
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180397410(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806c85e0,0);
  }
  return;
}

// func_0x180397450
int64_t func_0x180397450(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11e08) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11e08) = 1;
    *(uint64_t *)(lVal_1 + 0x11e00) = 0x11d023bcd9d07ba;
    func_0x180673140(&LAB_18042e140);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11e00;
}

// func_0x1803974d0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x1803974d0(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806c85f0,0);
  }
  return;
}

// func_0x180397510
int64_t func_0x180397510(void)
{
  int64_t lVal_1;
  
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11e30) == '\0') {
    lVal_1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_1 + 0x11e30) = 1;
    *(uint64_t *)(lVal_1 + 0x11e28) = 0x189c4e9a983097c;
    func_0x180673140(&LAB_18042e1d0);
  }
  return *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11e28;
}

// func_0x180397590
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180397590(uint64_t *param_1)
{
  if (*(char *)((int64_t)param_1 + 7) == '\x01') {
    *param_1 = (CONCAT44((uint)*(ushort *)((int64_t)param_1 + 5) << 8,*(uint32_t *)param_1) |
               (uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20) ^ SUB168(_DAT_1806c8600,0);
  }
  return;
}

// func_0x1803975d0
uint8_t (*func_0x1803975d0(uint8_t (*param_1)[16]))[16]
{
  uint64_t *_Str;
  uint8_t (*pArr16_1)[16];
  size_t sz_2;
  int64_t lVal_3;
  uint64_t uVal_4;
  int64_t lVal_5;
  uint8_t *pU64_6;
  uint8_t (*pArr16_7)[16];
  uint64_t uVal_8;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint64_t local_58;
  uint64_t uStack_50;
  uint8_t (*local_48)[16];
  uint8_t (*local_40)[16];
  uint8_t (*local_38)[16];
  uint64_t local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = ZEXT816(0);
  *(uint64_t *)param_1[1] = 0;
  *(uint64_t *)(param_1[1] + 8) = 0xf;
  local_48 = param_1 + 2;
  param_1[2][0] = 0;
  local_40 = param_1 + 3;
  *(uint8_t (*)[16])(param_1[2] + 8) = ZEXT816(0);
  *(uint8_t (*)[16])(param_1[3] + 8) = ZEXT816(0);
  *(uint64_t *)(param_1[4] + 8) = 0xf;
  local_38 = param_1;
  pArr16_1 = (uint8_t (*)[16])func_0x1800becb0();
  if (local_38 != pArr16_1) {
    uVal_8 = *(uint64_t *)pArr16_1[1];
    if (0xf < *(uint64_t *)(pArr16_1[1] + 8)) {
      pArr16_1 = *(uint8_t (**)[16])*pArr16_1;
    }
    if (*(uint64_t *)(local_38[1] + 8) < uVal_8) {
      func_0x18007bba0(local_38,uVal_8);
    }
    else {
      pArr16_7 = local_38;
      if (0xf < *(uint64_t *)(local_38[1] + 8)) {
        pArr16_7 = *(uint8_t (**)[16])*local_38;
      }
      *(uint64_t *)local_38[1] = uVal_8;
      func_0x1806aa960(pArr16_7,pArr16_1,uVal_8);
      (*pArr16_7)[uVal_8] = 0;
    }
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11e5c) == '\0') {
    lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_3 + 0x11e5c) = 1;
    *(uint8_t *)(lVal_3 + 0x11e58) = 1;
    *(uint64_t *)(lVal_3 + 0x11e50) = 0xd9e783ce78a98649;
    func_0x180673140(&LAB_18042e260);
  }
  lVal_3 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_3 + 0x11e50);
  if (*(char *)(lVal_3 + 0x11e58) == '\x01') {
    *_Str = *_Str ^ 0xd993efbb19cfe32d;
    *(uint8_t *)(lVal_3 + 0x11e58) = 0;
  }
  _local_68 = ZEXT816(0);
  sz_2 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_2) {
    if (sz_2 < 0x10) {
      pU64_6 = local_68;
      uVal_8 = 0xf;
    }
    else {
      uVal_4 = sz_2 | 0xf;
      uVal_8 = 0x16;
      if (0x16 < uVal_4) {
        uVal_8 = uVal_4;
      }
      if (uVal_4 < 0xfff) {
        pU64_6 = (uint8_t *)func_0x180672de0(uVal_8 + 1);
      }
      else {
        lVal_3 = func_0x180672de0(uVal_8 + 0x28);
        pU64_6 = (uint8_t *)(lVal_3 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_6 + -8) = lVal_3;
      }
      local_68 = (uint8_t  [8])pU64_6;
    }
    local_58 = sz_2;
    uStack_50 = uVal_8;
    func_0x1806aa960(pU64_6,_Str,sz_2);
    pU64_6[sz_2] = 0;
    pArr16_7 = local_38;
    pArr16_1 = local_40;
    uVal_8 = *(uint64_t *)(local_38[4] + 8);
    if (0xf < uVal_8) {
      lVal_3 = *(int64_t *)*local_40;
      uVal_4 = uVal_8 + 1;
      lVal_5 = lVal_3;
      if (0xfff < uVal_4) {
        lVal_5 = *(int64_t *)(lVal_3 + -8);
        if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_5)) goto LAB_180397808;
        uVal_4 = uVal_8 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_5,uVal_4);
    }
    *(uint32_t *)pArr16_1[1] = (uint32_t)local_58;
    *(uint32_t *)(pArr16_1[1] + 4) = local_58._4_4_;
    *(uint32_t *)(pArr16_1[1] + 8) = (uint32_t)uStack_50;
    *(uint32_t *)(pArr16_1[1] + 0xc) = uStack_50._4_4_;
    *(uint32_t *)*pArr16_1 = local_68._0_4_;
    *(uint32_t *)(*pArr16_1 + 4) = local_68._4_4_;
    *(uint32_t *)(*pArr16_1 + 8) = (uint32_t)uStack_60;
    *(uint32_t *)(*pArr16_1 + 0xc) = uStack_60._4_4_;
    return pArr16_7;
  }
  func_0x18007ba70();
LAB_180397808:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@180397810
void Unwind_180397810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x48));
  func_0x18003c630(*(uint64_t *)(param_2 + 0x40));
  func_0x180001e70(*(uint64_t *)(param_2 + 0x50));
  return;
}

// func_0x180397850
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x180397850(int64_t param_1,uint8_t (*param_2)[16],byte param_3,char param_4)
{
  uint64_t *pU64_1;
  uint *pU64_2;
  char *_Str;
  uint8_t uVal_3;
  uint8_t *pU64_4;
  uint64_t *pU64_5;
  func_ptr_t fnPtr_6;
  uint8_t auArr_7 [16];
  uint8_t auArr_8 [16];
  bool bFlag_9;
  uint8_t auArr_10 [16];
  uint uVal_11;
  uint uVal_12;
  uint uVal_13;
  uint uVal_14;
  uint32_t uVal_15;
  uint32_t uVal_16;
  uint32_t uVal_17;
  int iVal_18;
  size_t sz_19;
  uint64_t *pU64_20;
  uint8_t (*pArr16_21)[16];
  uint64_t uVal_22;
  int64_t lVal_23;
  uint64_t uVal_24;
  uint64_t uVal_25;
  int64_t lVal_26;
  uint64_t *****ptr5_U64_27;
  uint64_t *pU64_28;
  uint64_t *pU64_29;
  uint8_t *pU64_30;
  char *fnPtr_31;
  uint8_t (*pArr16_32)[16];
  uint64_t uVal_33;
  bool bFlag_34;
  uint uVal_35;
  uint uVal_36;
  uint uVal_37;
  uint64_t in_stack_fffffffffffffb18;
  uint32_t uVal_38;
  uint8_t local_4c8 [56];
  uint64_t local_490;
  uint32_t local_488;
  uint32_t uStack_484;
  uint32_t uStack_480;
  uint32_t uStack_47c;
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
  uint8_t *local_448;
  uint64_t uStack_440;
  uint32_t local_438;
  uint32_t uStack_434;
  uint32_t uStack_430;
  uint32_t uStack_42c;
  uint32_t local_428;
  uint32_t uStack_424;
  uint32_t uStack_420;
  uint32_t uStack_41c;
  uint32_t local_418;
  uint32_t uStack_414;
  uint32_t uStack_410;
  uint32_t uStack_40c;
  uint32_t local_408;
  uint32_t uStack_404;
  uint32_t uStack_400;
  uint32_t uStack_3fc;
  uint8_t local_3f8 [16];
  uint64_t local_3e8;
  uint64_t uStack_3e0;
  int64_t *local_3c0;
  uint8_t local_3b0 [168];
  uint8_t *local_308;
  uint64_t local_300;
  uint8_t local_2f8 [16];
  uint8_t local_2e8 [16];
  uint8_t local_2d8 [16];
  uint8_t local_2c8 [16];
  uint8_t local_2b8 [16];
  uint8_t local_2a8 [12];
  int iStack_29c;
  uint8_t local_298 [4];
  uint8_t auStack_294 [12];
  uint8_t local_288 [8];
  uint64_t uStack_280;
  uint32_t local_278;
  uint32_t uStack_274;
  uint32_t uStack_270;
  uint32_t uStack_26c;
  uint8_t uStack_268;
  uint32_t uStack_267;
  uint32_t uStack_263;
  uint32_t uStack_25f;
  uint64_t auStack_250 [13];
  uint8_t **local_1e8 [12];
  uint64_t *****local_188 [2];
  uint64_t local_178;
  uint64_t local_170;
  uint8_t local_168 [16];
  uint8_t local_158 [16];
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [24];
  uint8_t *local_e0;
  uint8_t (*local_d8)[16];
  int64_t local_d0;
  uint8_t local_c8;
  uint64_t *local_c0;
  uint8_t local_b8;
  uint64_t *local_b0;
  uint32_t local_a4;
  char *local_a0;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [26];
  char local_6e;
  byte local_6d;
  uint8_t local_6c;
  uint8_t local_6b;
  uint8_t local_6a;
  uint8_t local_69;
  uint64_t local_68;
  
  uVal_38 = (uint32_t)((uint64_t)in_stack_fffffffffffffb18 >> 0x20);
  local_68 = 0xfffffffffffffffe;
  local_6e = param_4;
  local_6d = param_3;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11e6c) == '\0') {
    lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_23 + 0x11e6c) = 1;
    *(uint8_t *)(lVal_23 + 0x11e68) = 1;
    *(uint64_t *)(lVal_23 + 0x11e60) = 0xffb0f0e2afe13cda;
    func_0x180673140(&LAB_18042e280);
  }
  lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_23 + 0x11e60);
  if (*(char *)(lVal_23 + 0x11e68) == '\x01') {
    *pU64_1 = *pU64_1 ^ 0xffc3978bc98f5399;
    *(uint8_t *)(lVal_23 + 0x11e68) = 0;
  }
  local_3f8 = (uint8_t  [16])0x0;
  sz_19 = strlen((char *)pU64_1);
  if (-1 < (int64_t)sz_19) {
    if (sz_19 < 0x10) {
      pU64_30 = local_3f8;
      uVal_33 = 0xf;
    }
    else {
      uVal_22 = sz_19 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_22) {
        uVal_33 = uVal_22;
      }
      if (uVal_22 < 0xfff) {
        pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        lVal_23 = func_0x180672de0(uVal_33 + 0x28);
        pU64_30 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_30 + -8) = lVal_23;
      }
      local_3f8._0_8_ = pU64_30;
    }
    local_3e8 = sz_19;
    uStack_3e0 = uVal_33;
    func_0x1806aa960(pU64_30,pU64_1,sz_19);
    pU64_30[sz_19] = 0;
    pU64_20 = (uint64_t *)func_0x1800becb0();
    uVal_33 = pU64_20[2];
    if (0xf < (uint64_t)pU64_20[3]) {
      pU64_20 = (uint64_t *)*pU64_20;
    }
    if (uStack_3e0 - local_3e8 < uVal_33) {
      pArr16_21 = (uint8_t (*)[16])func_0x1800871a0(local_3f8,uVal_33,local_3e8,0,pU64_20,uVal_33);
      uVal_38 = (uint32_t)((uint64_t)pU64_20 >> 0x20);
    }
    else {
      uVal_22 = uVal_33;
      if (uStack_3e0 < 0x10) {
        pU64_28 = (uint64_t *)local_3f8;
        if (pU64_28 < (uint64_t *)((int64_t)pU64_20 + uVal_33)) goto LAB_180397a0c;
      }
      else {
        pU64_28 = (uint64_t *)local_3f8._0_8_;
        if ((uint64_t)local_3f8._0_8_ < (uint64_t *)((int64_t)pU64_20 + uVal_33)) {
LAB_180397a0c:
          if ((pU64_20 <= (uint64_t *)((int64_t)pU64_28 + local_3e8)) &&
             (uVal_22 = (int64_t)pU64_28 - (int64_t)pU64_20,
             pU64_28 < pU64_20 || (int64_t)pU64_28 - (int64_t)pU64_20 == 0)) {
            uVal_22 = 0;
          }
        }
      }
      lVal_23 = local_3e8 + 1;
      local_3e8 = local_3e8 + uVal_33;
      func_0x1806aa960((int64_t)pU64_28 + uVal_33,pU64_28,lVal_23);
      func_0x1806aa960(pU64_28,pU64_20,uVal_22);
      func_0x1806aa960((int64_t)pU64_28 + uVal_22,(int64_t)pU64_20 + uVal_22 + uVal_33,uVal_33 - uVal_22);
      pArr16_21 = &local_3f8;
    }
    _local_298 = *pArr16_21;
    local_288 = *(uint8_t (*)[8])pArr16_21[1];
    uStack_280 = *(uint64_t *)(pArr16_21[1] + 8);
    *(uint64_t *)pArr16_21[1] = 0;
    *(uint64_t *)(pArr16_21[1] + 8) = 0xf;
    (*pArr16_21)[0] = 0;
    pU64_30 = local_298;
    func_0x1800bef00(pU64_30);
    if (0xf < uStack_280) {
      uVal_33 = uStack_280 + 1;
      lVal_23 = (int64_t)_local_298;
      if (0xfff < uVal_33) {
        lVal_23 = *(int64_t *)((int64_t)_local_298 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_298 + -8) - lVal_23)) goto LAB_180399942;
        uVal_33 = uStack_280 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_33);
    }
    _local_288 = ZEXT816(0xf) << 0x40;
    auArr_7[15] = 0;
    auArr_7._0_15_ = stack0xfffffffffffffd69;
    _local_298 = auArr_7 << 8;
    if (0xf < uStack_3e0) {
      uVal_33 = uStack_3e0 + 1;
      lVal_23 = local_3f8._0_8_;
      if (0xfff < uVal_33) {
        lVal_23 = *(int64_t *)(local_3f8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_3f8._0_8_ + -8) - lVal_23)) goto LAB_180399942;
        uVal_33 = uStack_3e0 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_33);
    }
    local_168 = (uint8_t  [16])0x0;
    local_158 = (uint8_t  [16])0x0;
    pU64_4 = *(uint8_t **)param_2[1];
    pArr16_21 = param_2;
    if (&DAT_0000000f < *(uint8_t **)(param_2[1] + 8)) {
      pArr16_21 = *(uint8_t (**)[16])*param_2;
    }
    if (-1 < (int64_t)pU64_4) {
      if (&DAT_0000000f < pU64_4) {
        uVal_22 = (uint64_t)pU64_4 | 0xf;
        uVal_33 = 0x16;
        if (0x16 < uVal_22) {
          uVal_33 = uVal_22;
        }
        if (uVal_22 < 0xfff) {
          uVal_22 = func_0x180672de0(uVal_33 + 1);
        }
        else {
          lVal_23 = func_0x180672de0(uVal_33 + 0x28);
          uVal_22 = lVal_23 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_22 - 8) = lVal_23;
        }
        local_168._0_8_ = uVal_22;
        local_158._8_8_ = uVal_33;
        local_158._0_8_ = pU64_4;
        func_0x1806aa960(uVal_22,pArr16_21,pU64_4 + 1);
      }
      else {
        local_158._8_8_ = 0xf;
        local_158._0_8_ = pU64_4;
        local_168 = *pArr16_21;
      }
      local_6a = 1;
      pArr16_21 = (uint8_t (*)[16])func_0x1800becb0();
      local_138 = (uint8_t  [16])0x0;
      local_148 = (uint8_t  [16])0x0;
      uVal_33 = *(uint64_t *)pArr16_21[1];
      if (0xf < *(uint64_t *)(pArr16_21[1] + 8)) {
        pArr16_21 = *(uint8_t (**)[16])*pArr16_21;
      }
      if ((int64_t)uVal_33 < 0) {
        local_6a = 1;
        func_0x18007ba70();
LAB_180399951:
        local_69 = 1;
        func_0x18007ba70();
      }
      else {
        if (uVal_33 < 0x10) {
          local_138._8_8_ = 0xf;
          local_138._0_8_ = uVal_33;
          local_148 = *pArr16_21;
        }
        else {
          uVal_25 = uVal_33 | 0xf;
          uVal_22 = 0x16;
          if (0x16 < uVal_25) {
            uVal_22 = uVal_25;
          }
          if (uVal_25 < 0xfff) {
            local_6a = 1;
            uVal_25 = func_0x180672de0(uVal_22 + 1);
          }
          else {
            local_6a = 1;
            lVal_23 = func_0x180672de0(uVal_22 + 0x28);
            uVal_25 = lVal_23 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_25 - 8) = lVal_23;
          }
          local_148._0_8_ = uVal_25;
          local_138._8_8_ = uVal_22;
          local_138._0_8_ = uVal_33;
          func_0x1806aa960(uVal_25,pArr16_21,uVal_33 + 1);
        }
        local_3f8._8_8_ = _UNK_1806cb3eb;
        local_3f8._0_8_ = _DAT_1806cb3e3;
        local_3e8 = CONCAT62(local_3e8._2_6_,0x5315);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x11e80) == '\0') {
          lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_23 + 0x11e80) = 1;
          func_0x18007c170(lVal_23 + 0x11e6d,local_3f8);
          func_0x180673140(&LAB_18042e2a0);
        }
        fnPtr_31 = (char *)(*(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                          0x11e6d);
        func_0x1802e3320(fnPtr_31);
        _local_288 = (uint8_t  [16])0x0;
        _local_298 = (uint8_t  [16])0x0;
        sz_19 = strlen(fnPtr_31);
        if ((int64_t)sz_19 < 0) goto LAB_180399951;
        uVal_33 = 0xf;
        if (0xf < sz_19) {
          uVal_22 = sz_19 | 0xf;
          uVal_33 = 0x16;
          if (0x16 < uVal_22) {
            uVal_33 = uVal_22;
          }
          if (uVal_22 < 0xfff) {
            local_69 = 1;
            pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
          }
          else {
            local_69 = 1;
            lVal_23 = func_0x180672de0(uVal_33 + 0x28);
            pU64_30 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_30 + -8) = lVal_23;
          }
          _local_298 = (uint64_t *****)pU64_30;
        }
        uStack_280 = uVal_33;
        local_288 = (uint8_t  [8])sz_19;
        func_0x1806aa960(pU64_30,fnPtr_31,sz_19);
        pU64_30[sz_19] = 0;
        func_0x180056840(local_188,local_298,local_148,local_168);
        if (0xf < uStack_280) {
          uVal_33 = uStack_280 + 1;
          lVal_23 = (int64_t)_local_298;
          if (0xfff < uVal_33) {
            lVal_23 = *(int64_t *)((int64_t)_local_298 + -8);
            if (0x1f < (uint64_t)(((int64_t)_local_298 + -8) - lVal_23)) goto LAB_180399942;
            uVal_33 = uStack_280 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_23,uVal_33);
        }
        _local_298 = local_188;
        if (0xf < local_170) {
          _local_298 = local_188[0];
        }
        auStack_294._4_8_ = local_178;
        uVal_17 = func_0x180678230();
        func_0x1800a6340(local_3f8,uVal_17,local_298);
        pU64_30 = local_3f8;
        if (7 < uStack_3e0) {
          pU64_30 = (uint8_t *)local_3f8._0_8_;
        }
        iVal_18 = func_0x180677ed0(pU64_30,local_298,3,0xffffffff);
        uVal_17 = 0;
        if (iVal_18 < 0x7b) {
          if ((0x3e < iVal_18 - 2U) ||
             ((0x4008000000000003U >> ((uint64_t)(iVal_18 - 2U) & 0x3f) & 1) == 0)) {
            if (iVal_18 != 0) goto LAB_1803999e6;
            uVal_17 = 1;
          }
        }
        else if (((iVal_18 != 0x7b) && (iVal_18 != 0xa1)) && (iVal_18 != 0x10b)) {
LAB_1803999e6:
          local_298 = (uint8_t  [4])iVal_18;
          auStack_294._4_8_ = &PTR_PTR_FUN_1806b00d8;
          func_0x18008a340("exists",local_298,local_3f8);
LAB_180399a15:
          func_0x18007ba70();
LAB_180399a1b:
          func_0x1800801d0();
          fnPtr_6 = (func_ptr_t )swi(3);
          (*fnPtr_6)();
          return;
        }
        if (7 < uStack_3e0) {
          uVal_33 = uStack_3e0 * 2 + 2;
          lVal_23 = local_3f8._0_8_;
          if (0xfff < uVal_33) {
            lVal_23 = *(int64_t *)(local_3f8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_3f8._0_8_ + -8) - lVal_23)) goto LAB_180399942;
            uVal_33 = uStack_3e0 * 2 + 0x29;
          }
          thunk_FUN_180695dd0(lVal_23,uVal_33);
        }
        if ((byte)(local_6d | (byte)uVal_17) == 1) {
          pArr16_21 = (uint8_t (*)[16])(param_1 + 0x30);
          local_e0 = local_298;
          local_a4 = uVal_17;
          if (pArr16_21 == param_2) {
LAB_180397f81:
          }
          else {
            pU64_30 = *(uint8_t **)param_2[1];
            pArr16_32 = param_2;
            if (&DAT_0000000f < *(uint8_t **)(param_2[1] + 8)) {
              pArr16_32 = *(uint8_t (**)[16])*param_2;
            }
            if (*(uint8_t **)(param_1 + 0x48) < pU64_30) {
              func_0x18007bba0(pArr16_21,pU64_30);
              goto LAB_180397f81;
            }
            if (&DAT_0000000f < *(uint8_t **)(param_1 + 0x48)) {
              pArr16_21 = *(uint8_t (**)[16])(param_1 + 0x30);
            }
            *(uint8_t **)(param_1 + 0x40) = pU64_30;
            func_0x1806aa960(pArr16_21,pArr16_32,pU64_30);
            (*pArr16_21)[(int64_t)pU64_30] = 0;
          }
          if ((char)local_a4 == '\0') goto LAB_180398c24;
          ptr5_U64_27 = local_188[0];
          if (local_170 < 0x10) {
            ptr5_U64_27 = local_188;
          }
          uVal_33 = CONCAT44(uVal_38,1);
          func_0x1800a64e0(local_298,ptr5_U64_27,0x20,0x40,uVal_33);
          local_a0 = (char *)(param_1 + 0x20);
          local_d8 = param_2;
          local_d0 = param_1;
          func_0x18039a410();
          local_490 = 0;
          local_308 = local_298;
          local_300 = *(uint64_t *)
                       ((int64_t)auStack_250 + (int64_t)*(int *)((int64_t)_local_298 + 4));
          func_0x1800a6a30(local_3f8,&local_308,local_4c8,1,uVal_33 & 0xffffffffffffff00);
          func_0x1800a6c00(local_3f8,0,local_a0);
          func_0x1800a7830(local_3b0);
          if (local_3c0 != (int64_t *)0x0) {
            (**(func_ptr_t *)(*local_3c0 + 0x20))(local_3c0,local_3c0 != (int64_t *)local_3f8);
          }
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11e90
                       ) == '\0') {
            lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_23 + 0x11e90) = 1;
            *(uint64_t *)(lVal_23 + 0x11e88) = 0x14356bee79a4b80;
            func_0x180673140(&LAB_18042e2d0);
          }
          lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_1 = (uint64_t *)(lVal_23 + 0x11e88);
          if (*(char *)(lVal_23 + 0x11e8f) == '\x01') {
            *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_23 + 0x11e8d) << 8,*(uint32_t *)pU64_1) |
                      (uint64_t)*(byte *)(lVal_23 + 0x11e8c) << 0x20) ^ SUB168(_DAT_1806c8610,0);
          }
          local_88._0_16_ = (uint8_t  [16])0x0;
          _local_98 = (uint8_t  [16])0x0;
          sz_19 = strlen((char *)pU64_1);
          if ((int64_t)sz_19 < 0) goto LAB_180399984;
          if (sz_19 < 0x10) {
            pU64_30 = local_98;
            uVal_33 = 0xf;
          }
          else {
            uVal_22 = sz_19 | 0xf;
            uVal_33 = 0x16;
            if (0x16 < uVal_22) {
              uVal_33 = uVal_22;
            }
            if (uVal_22 < 0xfff) {
              pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
            }
            else {
              lVal_23 = func_0x180672de0(uVal_33 + 0x28);
              pU64_30 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_30 + -8) = lVal_23;
            }
            local_98 = (uint8_t  [8])pU64_30;
          }
          local_88._0_8_ = sz_19;
          local_88._8_8_ = uVal_33;
          func_0x1806aa960(pU64_30,pU64_1,sz_19);
          pU64_30[sz_19] = 0;
          local_c0 = (uint64_t *)0x0;
          local_c8 = 3;
          local_c0 = (uint64_t *)func_0x180672de0(0x20);
          fnPtr_31 = local_a0;
          local_c0[2] = local_88._0_8_;
          local_c0[3] = local_88._8_8_;
          *local_c0 = local_98;
          local_c0[1] = uStack_90;
          local_88._0_16_ = ZEXT816(0xf) << 0x40;
          auArr_8[15] = 0;
          auArr_8._0_15_ = stack0xffffffffffffff69;
          _local_98 = auArr_8 << 8;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11e9c
                       ) == '\0') {
            lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_23 + 0x11e9c) = 1;
            *(uint32_t *)(lVal_23 + 0x11e94) = 0xf8905da9;
            *(uint16_t *)(lVal_23 + 0x11e98) = 0x1ed;
            func_0x180673140(&LAB_18042e300);
          }
          lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_2 = (uint *)(lVal_23 + 0x11e94);
          if (*(char *)(lVal_23 + 0x11e99) == '\x01') {
            *pU64_2 = *pU64_2 ^ 0x95ff2fcf;
            *(byte *)(lVal_23 + 0x11e98) = *(byte *)(lVal_23 + 0x11e98) ^ 0xed;
            *(uint8_t *)(lVal_23 + 0x11e99) = 0;
          }
          local_2e8 = (uint8_t  [16])0x0;
          local_2f8 = (uint8_t  [16])0x0;
          sz_19 = strlen((char *)pU64_2);
          if ((int64_t)sz_19 < 0) goto LAB_18039998a;
          if (sz_19 < 0x10) {
            pU64_30 = local_2f8;
            uVal_33 = 0xf;
          }
          else {
            uVal_22 = sz_19 | 0xf;
            uVal_33 = 0x16;
            if (0x16 < uVal_22) {
              uVal_33 = uVal_22;
            }
            if (uVal_22 < 0xfff) {
              pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
            }
            else {
              lVal_23 = func_0x180672de0(uVal_33 + 0x28);
              pU64_30 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_30 + -8) = lVal_23;
            }
            local_2f8._0_8_ = pU64_30;
          }
          local_2e8._8_8_ = uVal_33;
          local_2e8._0_8_ = sz_19;
          func_0x1806aa960(pU64_30,pU64_2,sz_19);
          pU64_30[sz_19] = 0;
          pU64_30 = (uint8_t *)func_0x180056aa0(fnPtr_31,local_2f8);
          uVal_3 = *pU64_30;
          *pU64_30 = local_c8;
          pU64_20 = *(uint64_t **)(pU64_30 + 8);
          *(uint64_t **)(pU64_30 + 8) = local_c0;
          local_c8 = uVal_3;
          local_c0 = pU64_20;
          func_0x180084c70(&local_c0);
          if (0xf < (uint64_t)local_88._8_8_) {
            uVal_33 = local_88._8_8_ + 1;
            lVal_23 = (int64_t)local_98;
            if (0xfff < uVal_33) {
              lVal_23 = *(int64_t *)((int64_t)local_98 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_23)) goto LAB_180399942;
              uVal_33 = local_88._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_23,uVal_33);
          }
          func_0x18039a510(fnPtr_31);
          if (DAT_1808400b0 == '\x01') {
            AcquireSRWLockShared((PSRWLOCK)&DAT_1808400b8);
            fnPtr_31 = local_a0;
            pU64_28 = DAT_1808400a0;
            pU64_20 = (uint64_t *)*DAT_1808400a0;
joined_r0x000180398742:
            pU64_29 = pU64_20;
            if (pU64_29 != pU64_28) {
              (**(func_ptr_t *)(*(int64_t *)pU64_29[5] + 0x88))((int64_t *)pU64_29[5],fnPtr_31);
              pU64_5 = (uint64_t *)pU64_29[2];
              if (*(char *)((int64_t)(uint64_t *)pU64_29[2] + 0x19) == '\0') {
                do {
                  pU64_20 = pU64_5;
                  pU64_5 = (uint64_t *)*pU64_20;
                } while (*(char *)((int64_t)pU64_5 + 0x19) == '\0');
              }
              else {
                do {
                  pU64_20 = (uint64_t *)pU64_29[1];
                  if (*(char *)((int64_t)pU64_20 + 0x19) != '\0') break;
                  bFlag_34 = pU64_29 == (uint64_t *)pU64_20[2];
                  pU64_29 = pU64_20;
                } while (bFlag_34);
              }
              goto joined_r0x000180398742;
            }
            ReleaseSRWLockShared((PSRWLOCK)&DAT_1808400b8);
          }
          if (*(int *)(*(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1c39c)
              < DAT_1808401a8) goto LAB_18039999c;
          goto LAB_180398779;
        }
        _local_298 = (uint64_t *****)&DAT_28d478d88fb3dcdf;
        DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
        uVal_16 = _UNK_1806b6f3c;
        uVal_15 = _UNK_1806b6f38;
        uVal_17 = PTR_DAT_1806b6f30._4_4_;
        uVal_38 = PTR_DAT_1806b6f30._0_4_;
        if (DAT_180840a60 == 0) {
LAB_18039913e:
          DAT_180840a68 = 0;
LAB_180399632:
          if (0xf < local_170) {
            uVal_33 = local_170 + 1;
            ptr5_U64_27 = local_188[0];
            if (0xfff < uVal_33) {
              ptr5_U64_27 = (uint64_t *****)local_188[0][-1];
              if (0x1f < (uint64_t)((int64_t)local_188[0] + (-8 - (int64_t)ptr5_U64_27)))
              goto LAB_180399942;
              uVal_33 = local_170 + 0x28;
            }
            thunk_FUN_180695dd0(ptr5_U64_27,uVal_33);
          }
          return;
        }
        _local_298 = (uint64_t *****)&DAT_28d0f803f34a0611;
        lVal_23 = DAT_180840a58[0xc9];
        local_428 = PTR_DAT_1806b6f30._0_4_;
        uStack_424 = PTR_DAT_1806b6f30._4_4_;
        uStack_420 = _UNK_1806b6f38;
        uStack_41c = _UNK_1806b6f3c;
        local_108 = (uint8_t  [16])0x0;
        local_f8._0_16_ = (uint8_t  [16])0x0;
        pU64_30 = *(uint8_t **)param_2[1];
        if (&DAT_0000000f < *(uint8_t **)(param_2[1] + 8)) {
          param_2 = *(uint8_t (**)[16])*param_2;
        }
        if (-1 < (int64_t)pU64_30) {
          if (&DAT_0000000f < pU64_30) {
            uVal_22 = (uint64_t)pU64_30 | 0xf;
            uVal_33 = 0x16;
            if (0x16 < uVal_22) {
              uVal_33 = uVal_22;
            }
            if (uVal_22 < 0xfff) {
              uVal_22 = func_0x180672de0(uVal_33 + 1);
            }
            else {
              lVal_26 = func_0x180672de0(uVal_33 + 0x28);
              uVal_22 = lVal_26 + 0x27U & 0xffffffffffffffe0;
              *(int64_t *)(uVal_22 - 8) = lVal_26;
            }
            local_108._0_8_ = uVal_22;
            local_f8._8_8_ = uVal_33;
            local_f8._0_8_ = pU64_30;
            func_0x1806aa960(uVal_22,param_2,pU64_30 + 1);
          }
          else {
            local_f8._8_8_ = 0xf;
            local_f8._0_8_ = pU64_30;
            local_108 = *param_2;
          }
          local_418 = PTR_DAT_1806c97c8._0_4_;
          uStack_414 = PTR_DAT_1806c97c8._4_4_;
          uStack_410 = _UNK_1806c97d0;
          uStack_40c = _UNK_1806c97d4;
          local_408 = uVal_38;
          uStack_404 = uVal_17;
          uStack_400 = uVal_15;
          uStack_3fc = uVal_16;
          local_288._4_4_ = _UNK_1806cb467;
          local_288._0_4_ = _DAT_1806cb463;
          uStack_280._0_4_ = _UNK_1806cb46b;
          uStack_280._4_4_ = _UNK_1806cb46f;
          auStack_294._4_8_ = _UNK_1806cb45b;
          _local_298 = (uint64_t *****)_DAT_1806cb453;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11f5c
                       ) == '\0') {
            lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_26 + 0x11f5c) = 1;
            func_0x18008f8e0(lVal_26 + 0x11f39,local_298);
            func_0x180673140(&LAB_18042e460);
          }
          fnPtr_31 = (char *)(*(int64_t *)
                              ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                            0x11f39);
          func_0x18043a360(fnPtr_31);
          local_3f8 = (uint8_t  [16])0x0;
          sz_19 = strlen(fnPtr_31);
          if ((int64_t)sz_19 < 0) goto LAB_180399964;
          if (sz_19 < 0x10) {
            pU64_30 = local_3f8;
            uVal_33 = 0xf;
          }
          else {
            uVal_22 = sz_19 | 0xf;
            uVal_33 = 0x16;
            if (0x16 < uVal_22) {
              uVal_33 = uVal_22;
            }
            if (uVal_22 < 0xfff) {
              local_6c = 1;
              pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
            }
            else {
              local_6c = 1;
              lVal_26 = func_0x180672de0(uVal_33 + 0x28);
              pU64_30 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_30 + -8) = lVal_26;
            }
            local_3f8._0_8_ = pU64_30;
          }
          local_3e8 = sz_19;
          uStack_3e0 = uVal_33;
          func_0x1806aa960(pU64_30,fnPtr_31,sz_19);
          pU64_30[sz_19] = 0;
          func_0x18039d6f0(lVal_23,local_3f8,&local_408,&local_418,local_108,&local_428);
          if (0xf < uStack_3e0) {
            uVal_33 = uStack_3e0 + 1;
            uVal_22 = uStack_3e0;
            lVal_26 = local_3f8._0_8_;
            lVal_23 = local_3f8._0_8_;
            if (0xfff < uVal_33) {
LAB_18039960e:
              lVal_23 = *(int64_t *)(lVal_26 + -8);
              if (0x1f < (uint64_t)((lVal_26 + -8) - lVal_23)) goto LAB_180399942;
              uVal_33 = uVal_22 + 0x28;
            }
LAB_18039962d:
            thunk_FUN_180695dd0(lVal_23,uVal_33);
          }
          goto LAB_180399632;
        }
      }
      func_0x18007ba70();
LAB_180399964:
      local_6c = 1;
      func_0x18007ba70();
LAB_180399971:
      func_0x18007ba70();
LAB_180399977:
      local_6b = 1;
      func_0x18007ba70();
LAB_180399984:
      func_0x18007ba70();
LAB_18039998a:
      func_0x18007ba70();
LAB_180399990:
      func_0x18007ba70();
      do {
        func_0x18007ba70();
LAB_18039999c:
        func_0x180672ec0(&DAT_1808401a8);
        if (DAT_1808401a8 == -1) {
          DAT_1808401a0 = (int64_t *)func_0x180134bf0(&DAT_1808400a0);
          _Init_thread_footer(&DAT_1808401a8);
        }
LAB_180398779:
        iVal_18 = (**(func_ptr_t *)(*DAT_1808401a0 + 0x20))();
        if (iVal_18 == DAT_18083ca10) {
          DAT_18083ca10 = 0x23;
        }
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x11ea8) == '\0') {
          lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_23 + 0x11ea8) = 1;
          *(uint64_t *)(lVal_23 + 0x11ea0) = 0x1af3beaa3fa6bbf;
          func_0x180673140(&LAB_18042e330);
        }
        lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint64_t *)(lVal_23 + 0x11ea0);
        if (*(char *)(lVal_23 + 0x11ea7) == '\x01') {
          *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_23 + 0x11ea5) << 8,*(uint32_t *)pU64_1) |
                    (uint64_t)*(byte *)(lVal_23 + 0x11ea4) << 0x20) ^ SUB168(_DAT_1806c8620,0);
        }
        local_88._0_16_ = (uint8_t  [16])0x0;
        _local_98 = (uint8_t  [16])0x0;
        sz_19 = strlen((char *)pU64_1);
        if ((int64_t)sz_19 < 0) {
          func_0x18007ba70();
          goto LAB_1803999e0;
        }
        if (sz_19 < 0x10) {
          pU64_30 = local_98;
          uVal_33 = 0xf;
        }
        else {
          uVal_22 = sz_19 | 0xf;
          uVal_33 = 0x16;
          if (0x16 < uVal_22) {
            uVal_33 = uVal_22;
          }
          if (uVal_22 < 0xfff) {
            pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
          }
          else {
            lVal_23 = func_0x180672de0(uVal_33 + 0x28);
            pU64_30 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_30 + -8) = lVal_23;
          }
          local_98 = (uint8_t  [8])pU64_30;
        }
        fnPtr_31 = local_a0;
        param_1 = local_d0;
        param_2 = local_d8;
        local_88._8_8_ = uVal_33;
        local_88._0_8_ = sz_19;
        func_0x1806aa960(pU64_30,pU64_1,sz_19);
        pU64_30[sz_19] = 0;
        if (*fnPtr_31 == '\x01') {
          lVal_23 = func_0x1800a5e70(*(uint64_t *)(param_1 + 0x28),local_98);
          bFlag_34 = lVal_23 != **(int64_t **)(param_1 + 0x28);
          bFlag_9 = bFlag_34;
          if (0xf < (uint64_t)local_88._8_8_) goto LAB_180398a55;
LAB_180398986:
          if (!bFlag_34) goto LAB_180398a96;
LAB_18039898f:
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11eb8
                       ) == '\0') {
            lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_23 + 0x11eb8) = 1;
            *(uint64_t *)(lVal_23 + 0x11eb0) = 0x1cdbb760396a781;
            func_0x180673140(&LAB_18042e360);
          }
          lVal_23 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          pU64_1 = (uint64_t *)(lVal_23 + 0x11eb0);
          if (*(char *)(lVal_23 + 0x11eb7) == '\x01') {
            *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_23 + 0x11eb5) << 8,*(uint32_t *)pU64_1) |
                      (uint64_t)*(byte *)(lVal_23 + 0x11eb4) << 0x20) ^ SUB168(_DAT_1806bb170,0);
          }
          local_2c8 = (uint8_t  [16])0x0;
          local_2d8 = (uint8_t  [16])0x0;
          sz_19 = strlen((char *)pU64_1);
          if ((int64_t)sz_19 < 0) goto LAB_180399a15;
          if (sz_19 < 0x10) {
            pU64_30 = local_2d8;
            uVal_33 = 0xf;
          }
          else {
            uVal_22 = sz_19 | 0xf;
            uVal_33 = 0x16;
            if (0x16 < uVal_22) {
              uVal_33 = uVal_22;
            }
            if (uVal_22 < 0xfff) {
              pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
            }
            else {
              lVal_23 = func_0x180672de0(uVal_33 + 0x28);
              pU64_30 = (uint8_t *)(lVal_23 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_30 + -8) = lVal_23;
            }
            local_2d8._0_8_ = pU64_30;
            fnPtr_31 = local_a0;
          }
          local_2c8._8_8_ = uVal_33;
          local_2c8._0_8_ = sz_19;
          func_0x1806aa960(pU64_30,pU64_1,sz_19);
          pU64_30[sz_19] = 0;
          uVal_24 = func_0x180056aa0(fnPtr_31,local_2d8);
          _local_98 = (uint8_t  [16])0x0;
          local_88._0_16_ = ZEXT816(0xf) << 0x40;
          func_0x180086960(uVal_24,local_98);
          param_1 = local_d0;
          param_2 = local_d8;
          if (local_88._0_8_ == 0) goto LAB_180399a1b;
          pU64_30 = local_98;
          if (0xf < (uint64_t)local_88._8_8_) {
            pU64_30 = (uint8_t *)local_98;
          }
          DAT_180840fd0 = *pU64_30;
          if (0xf < (uint64_t)local_88._8_8_) {
            uVal_33 = local_88._8_8_ + 1;
            pU64_30 = (uint8_t *)local_98;
            if (0xfff < uVal_33) {
              pU64_30 = *(uint8_t **)((int64_t)local_98 + -8);
              if ((uint8_t *)0x1f < (uint8_t *)((int64_t)local_98 + (-8 - (int64_t)pU64_30)))
              goto LAB_180399942;
              uVal_33 = local_88._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(pU64_30,uVal_33);
          }
        }
        else {
          bFlag_9 = false;
          bFlag_34 = false;
          if ((uint64_t)local_88._8_8_ < 0x10) goto LAB_180398986;
LAB_180398a55:
          uVal_33 = local_88._8_8_ + 1;
          lVal_23 = (int64_t)local_98;
          if (0xfff < uVal_33) {
            lVal_23 = *(int64_t *)((int64_t)local_98 + -8);
            if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_23)) goto LAB_180399942;
            uVal_33 = local_88._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_23,uVal_33);
          if (bFlag_9) goto LAB_18039898f;
LAB_180398a96:
          DAT_180840fd0 = 0x2e;
        }
        *(uint8_t ***)(local_298 + *(int *)((int64_t)_local_298 + 4)) = &PTR_LAB_1806b0178;
        *(int *)(local_2a8 + (int64_t)*(int *)((int64_t)_local_298 + 4) + 0xc) =
             *(int *)((int64_t)_local_298 + 4) + -0xb0;
        func_0x18008b1c0(local_288);
        local_1e8[0] = &PTR_LAB_1806b0288;
        func_0x180673810(local_1e8);
LAB_180398c24:
        if (local_6e == '\0') goto LAB_180398f7f;
        lVal_23 = param_1 + 0x20;
        func_0x18039a410(lVal_23);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x11ec8) == '\0') {
          lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_26 + 0x11ec8) = 1;
          *(uint64_t *)(lVal_26 + 0x11ec0) = 0x17b12e2cff64388;
          func_0x180673140(&LAB_18042e390);
        }
        lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint64_t *)(lVal_26 + 0x11ec0);
        if (*(char *)(lVal_26 + 0x11ec7) == '\x01') {
          *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_26 + 0x11ec5) << 8,*(uint32_t *)pU64_1) |
                    (uint64_t)*(byte *)(lVal_26 + 0x11ec4) << 0x20) ^ SUB168(_DAT_1806c8630,0);
        }
        _local_288 = (uint8_t  [16])0x0;
        _local_298 = (uint8_t  [16])0x0;
        sz_19 = strlen((char *)pU64_1);
        if ((int64_t)sz_19 < 0) goto LAB_180399990;
        if (sz_19 < 0x10) {
          pU64_30 = local_298;
          uVal_33 = 0xf;
        }
        else {
          uVal_22 = sz_19 | 0xf;
          uVal_33 = 0x16;
          if (0x16 < uVal_22) {
            uVal_33 = uVal_22;
          }
          if (uVal_22 < 0xfff) {
            pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
          }
          else {
            lVal_26 = func_0x180672de0(uVal_33 + 0x28);
            pU64_30 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_30 + -8) = lVal_26;
          }
          _local_298 = (uint64_t *****)pU64_30;
        }
        local_288 = (uint8_t  [8])sz_19;
        uStack_280 = uVal_33;
        func_0x1806aa960(pU64_30,pU64_1,sz_19);
        pU64_30[sz_19] = 0;
        local_b0 = (uint64_t *)0x0;
        local_b8 = 3;
        local_b0 = (uint64_t *)func_0x180672de0(0x20);
        local_b0[2] = local_288;
        local_b0[3] = uStack_280;
        *local_b0 = _local_298;
        local_b0[1] = auStack_294._4_8_;
        _local_288 = ZEXT816(0xf) << 0x40;
        auArr_10[15] = 0;
        auArr_10._0_15_ = stack0xfffffffffffffd69;
        _local_298 = auArr_10 << 8;
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x11ed4) == '\0') {
          lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_26 + 0x11ed4) = 1;
          *(uint32_t *)(lVal_26 + 0x11ecc) = 0xd0fc55a1;
          *(uint16_t *)(lVal_26 + 0x11ed0) = 0x1b1;
          func_0x180673140(&LAB_18042e3c0);
        }
        lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_2 = (uint *)(lVal_26 + 0x11ecc);
        if (*(char *)(lVal_26 + 0x11ed1) == '\x01') {
          *pU64_2 = *pU64_2 ^ 0xbd9327c7;
          *(byte *)(lVal_26 + 0x11ed0) = *(byte *)(lVal_26 + 0x11ed0) ^ 0xb1;
          *(uint8_t *)(lVal_26 + 0x11ed1) = 0;
        }
        _local_2a8 = (uint8_t  [16])0x0;
        local_2b8 = (uint8_t  [16])0x0;
        sz_19 = strlen((char *)pU64_2);
        if (-1 < (int64_t)sz_19) {
          if (sz_19 < 0x10) {
            pU64_30 = local_2b8;
            uVal_33 = 0xf;
          }
          else {
            uVal_22 = sz_19 | 0xf;
            uVal_33 = 0x16;
            if (0x16 < uVal_22) {
              uVal_33 = uVal_22;
            }
            if (uVal_22 < 0xfff) {
              pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
            }
            else {
              lVal_26 = func_0x180672de0(uVal_33 + 0x28);
              pU64_30 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_30 + -8) = lVal_26;
            }
            local_2b8._0_8_ = pU64_30;
          }
          stack0xfffffffffffffd60 = uVal_33;
          local_2a8._0_8_ = sz_19;
          func_0x1806aa960(pU64_30,pU64_2,sz_19);
          pU64_30[sz_19] = 0;
          pU64_30 = (uint8_t *)func_0x180056aa0(lVal_23,local_2b8);
          uVal_3 = *pU64_30;
          *pU64_30 = local_b8;
          pU64_20 = *(uint64_t **)(pU64_30 + 8);
          *(uint64_t **)(pU64_30 + 8) = local_b0;
          local_b8 = uVal_3;
          local_b0 = pU64_20;
          func_0x180084c70(&local_b0);
          if (0xf < uStack_280) {
            uVal_33 = uStack_280 + 1;
            lVal_26 = (int64_t)_local_298;
            if (0xfff < uVal_33) {
              lVal_26 = *(int64_t *)((int64_t)_local_298 + -8);
              if (0x1f < (uint64_t)(((int64_t)_local_298 + -8) - lVal_26)) goto LAB_180399942;
              uVal_33 = uStack_280 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_26,uVal_33);
          }
          DAT_180840fd0 = 0x2e;
          func_0x18039a510(lVal_23);
          if (DAT_1808400b0 != '\x01') goto LAB_180398f7f;
          AcquireSRWLockShared((PSRWLOCK)&DAT_1808400b8);
          pU64_28 = DAT_1808400a0;
          pU64_20 = (uint64_t *)*DAT_1808400a0;
          goto joined_r0x000180398f6d;
        }
      } while( true );
    }
  }
  func_0x18007ba70();
LAB_180399942:
  do {
    invalidInstructionException();
  } while( true );
joined_r0x000180398f6d:
  pU64_29 = pU64_20;
  if (pU64_29 != pU64_28) {
    (**(func_ptr_t *)(*(int64_t *)pU64_29[5] + 0x88))((int64_t *)pU64_29[5],lVal_23);
    pU64_5 = (uint64_t *)pU64_29[2];
    if (*(char *)((int64_t)(uint64_t *)pU64_29[2] + 0x19) == '\0') {
      do {
        pU64_20 = pU64_5;
        pU64_5 = (uint64_t *)*pU64_20;
      } while (*(char *)((int64_t)pU64_5 + 0x19) == '\0');
    }
    else {
      do {
        pU64_20 = (uint64_t *)pU64_29[1];
        if (*(char *)((int64_t)pU64_20 + 0x19) != '\0') break;
        bFlag_34 = pU64_29 == (uint64_t *)pU64_20[2];
        pU64_29 = pU64_20;
      } while (bFlag_34);
    }
    goto joined_r0x000180398f6d;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1808400b8);
LAB_180398f7f:
  if (local_6d != 0) {
    func_0x18039bd20(param_1,1);
  }
  _local_298 = (uint64_t *****)&DAT_28d478d88fb3dcdf;
  DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
  uVal_16 = _UNK_1806b75ac;
  uVal_15 = _UNK_1806b75a8;
  uVal_17 = PTR_DAT_1806b75a0._4_4_;
  uVal_38 = PTR_DAT_1806b75a0._0_4_;
  if (DAT_180840a60 == 0) goto LAB_18039913e;
  _local_298 = (uint64_t *****)&DAT_28d0f803f34a0611;
  lVal_23 = DAT_180840a58[0xc9];
  local_488 = PTR_DAT_1806b75a0._0_4_;
  uStack_484 = PTR_DAT_1806b75a0._4_4_;
  uStack_480 = _UNK_1806b75a8;
  uStack_47c = _UNK_1806b75ac;
  local_128 = (uint8_t  [16])0x0;
  local_118 = (uint8_t  [16])0x0;
  uVal_33 = *(uint64_t *)param_2[1];
  pArr16_21 = param_2;
  if (0xf < *(uint64_t *)(param_2[1] + 8)) {
    pArr16_21 = *(uint8_t (**)[16])*param_2;
  }
  if ((int64_t)uVal_33 < 0) goto LAB_180399971;
  if (uVal_33 < 0x10) {
    local_118._8_8_ = 0xf;
    local_118._0_8_ = uVal_33;
    local_128 = *pArr16_21;
  }
  else {
    uVal_25 = uVal_33 | 0xf;
    uVal_22 = 0x16;
    if (0x16 < uVal_25) {
      uVal_22 = uVal_25;
    }
    if (uVal_25 < 0xfff) {
      uVal_25 = func_0x180672de0(uVal_22 + 1);
    }
    else {
      lVal_26 = func_0x180672de0(uVal_22 + 0x28);
      uVal_25 = lVal_26 + 0x27U & 0xffffffffffffffe0;
      *(int64_t *)(uVal_25 - 8) = lVal_26;
    }
    local_128._0_8_ = uVal_25;
    local_118._8_8_ = uVal_22;
    local_118._0_8_ = uVal_33;
    func_0x1806aa960(uVal_25,pArr16_21,uVal_33 + 1);
  }
  fnPtr_31 = "created";
  if ((char)local_a4 != '\0') {
    fnPtr_31 = "loaded";
  }
  local_478 = PTR_DAT_1806c97c8._0_4_;
  uStack_474 = PTR_DAT_1806c97c8._4_4_;
  uStack_470 = _UNK_1806c97d0;
  uStack_46c = _UNK_1806c97d4;
  local_468 = uVal_38;
  uStack_464 = uVal_17;
  uStack_460 = uVal_15;
  uStack_45c = uVal_16;
  local_288._4_4_ = _UNK_1806cb409;
  local_288._0_4_ = _DAT_1806cb405;
  uStack_280._0_4_ = _UNK_1806cb40d;
  uStack_280._4_4_ = _UNK_1806cb411;
  auStack_294._4_8_ = _UNK_1806cb3fd;
  _local_298 = (uint64_t *****)_DAT_1806cb3f5;
  local_278 = CONCAT31(local_278._1_3_,0x37);
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11ef8) == '\0') {
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_26 + 0x11ef8) = 1;
    func_0x180086ce0(lVal_26 + 0x11ed5,local_298);
    func_0x180673140(&LAB_18042e3f0);
  }
  _Str = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11ed5);
  func_0x18043a330(_Str);
  local_88._0_16_ = (uint8_t  [16])0x0;
  _local_98 = (uint8_t  [16])0x0;
  sz_19 = strlen(_Str);
  if (-1 < (int64_t)sz_19) {
    if (sz_19 < 0x10) {
      pU64_30 = local_98;
      uVal_33 = 0xf;
    }
    else {
      uVal_22 = sz_19 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_22) {
        uVal_33 = uVal_22;
      }
      if (uVal_22 < 0xfff) {
        local_6b = 1;
        pU64_30 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        local_6b = 1;
        lVal_26 = func_0x180672de0(uVal_33 + 0x28);
        pU64_30 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_30 + -8) = lVal_26;
      }
      local_98 = (uint8_t  [8])pU64_30;
    }
    local_88._8_8_ = uVal_33;
    local_88._0_8_ = sz_19;
    func_0x1806aa960(pU64_30,_Str,sz_19);
    pU64_30[sz_19] = 0;
    func_0x18039d450(lVal_23,local_98,&local_468,fnPtr_31,&local_478,local_128,&local_488);
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_33 = local_88._8_8_ + 1;
      lVal_23 = (int64_t)local_98;
      if (0xfff < uVal_33) {
        lVal_23 = *(int64_t *)((int64_t)local_98 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_23)) goto LAB_180399942;
        uVal_33 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_23,uVal_33);
    }
    uVal_3 = DAT_180840fd0;
    if (DAT_1808401ac != '\0') goto LAB_180399632;
    if (*(uint8_t **)param_2[1] == &DAT_00000007) {
      if (&DAT_0000000f < *(uint8_t **)(param_2[1] + 8)) {
        param_2 = *(uint8_t (**)[16])*param_2;
      }
      if ((*(uint *)(*param_2 + 3) ^ 0x746c7561 | *(uint *)*param_2 ^ 0x61666564) == 0)
      goto LAB_180399632;
    }
    DAT_1808401ac = '\x01';
    lVal_23 = DAT_180840a58[0xc9];
    local_458 = PTR_DAT_1806c9858._0_4_;
    uStack_454 = PTR_DAT_1806c9858._4_4_;
    uStack_450 = _UNK_1806c9860;
    uStack_44c = _UNK_1806c9864;
    local_448 = PTR_DAT_1806c9878;
    uStack_440 = _UNK_1806c9880;
    local_438 = PTR_DAT_1806c9858._0_4_;
    uStack_434 = PTR_DAT_1806c9858._4_4_;
    uStack_430 = _UNK_1806c9860;
    uStack_42c = _UNK_1806c9864;
    uStack_268 = UNK_1806cb446;
    uStack_267 = _UNK_1806cb447;
    uStack_263 = _UNK_1806cb44b;
    uStack_25f = _UNK_1806cb44f;
    local_278 = _DAT_1806cb436;
    uStack_274 = _UNK_1806cb43a;
    uStack_270 = _UNK_1806cb43e;
    uStack_26c = _UNK_1806cb442;
    local_288._4_4_ = _UNK_1806cb42a;
    local_288._0_4_ = _DAT_1806cb426;
    uStack_280._0_4_ = _UNK_1806cb42e;
    uStack_280._4_4_ = _UNK_1806cb432;
    auStack_294._4_8_ = _UNK_1806cb41e;
    _local_298 = (uint64_t *****)_DAT_1806cb416;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11f38) == '\0') {
      lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_26 + 0x11f38) = 1;
      func_0x1801b4920(lVal_26 + 0x11ef9,local_298);
      func_0x180673140(&LAB_18042e420);
    }
    uVal_14 = _UNK_1806ae29c;
    uVal_13 = _UNK_1806ae298;
    uVal_12 = _UNK_1806ae294;
    uVal_11 = _DAT_1806ae290;
    lVal_26 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_2 = (uint *)(lVal_26 + 0x11ef9);
    if (*(char *)(lVal_26 + 0x11f36) == '\x01') {
      uVal_35 = *(uint *)(lVal_26 + 0x11efd) ^ _UNK_1806ae294;
      uVal_36 = *(uint *)(lVal_26 + 0x11f01) ^ _UNK_1806ae298;
      uVal_37 = *(uint *)(lVal_26 + 0x11f05) ^ _UNK_1806ae29c;
      *pU64_2 = *pU64_2 ^ _DAT_1806ae290;
      *(uint *)(lVal_26 + 0x11efd) = uVal_35;
      *(uint *)(lVal_26 + 0x11f01) = uVal_36;
      *(uint *)(lVal_26 + 0x11f05) = uVal_37;
      *(uint *)(lVal_26 + 0x11f09) = *(uint *)(lVal_26 + 0x11f09) ^ uVal_11;
      *(uint *)(lVal_26 + 0x11f0d) = *(uint *)(lVal_26 + 0x11f0d) ^ uVal_12;
      *(uint *)(lVal_26 + 0x11f11) = *(uint *)(lVal_26 + 0x11f11) ^ uVal_13;
      *(uint *)(lVal_26 + 0x11f15) = *(uint *)(lVal_26 + 0x11f15) ^ uVal_14;
      *(uint *)(lVal_26 + 0x11f19) = *(uint *)(lVal_26 + 0x11f19) ^ uVal_11;
      *(uint *)(lVal_26 + 0x11f1d) = *(uint *)(lVal_26 + 0x11f1d) ^ uVal_12;
      *(uint *)(lVal_26 + 0x11f21) = *(uint *)(lVal_26 + 0x11f21) ^ uVal_13;
      *(uint *)(lVal_26 + 0x11f25) = *(uint *)(lVal_26 + 0x11f25) ^ uVal_14;
      *(uint64_t *)(lVal_26 + 0x11f29) = *(uint64_t *)(lVal_26 + 0x11f29) ^ SUB168(_DAT_1806c8640,0)
      ;
      *(byte *)(lVal_26 + 0x11f31) = *(byte *)(lVal_26 + 0x11f31) ^ 0x6f;
      *(byte *)(lVal_26 + 0x11f32) = *(byte *)(lVal_26 + 0x11f32) ^ 0xcf;
      *(byte *)(lVal_26 + 0x11f33) = *(byte *)(lVal_26 + 0x11f33) ^ 0x7b;
      *(byte *)(lVal_26 + 0x11f34) = *(byte *)(lVal_26 + 0x11f34) ^ 0x13;
      *(byte *)(lVal_26 + 0x11f35) = *(byte *)(lVal_26 + 0x11f35) ^ 0xf9;
      *(uint8_t *)(lVal_26 + 0x11f36) = 0;
    }
    _local_288 = (uint8_t  [16])0x0;
    _local_298 = (uint8_t  [16])0x0;
    sz_19 = strlen((char *)pU64_2);
    if ((int64_t)sz_19 < 0) {
LAB_1803999e0:
      iVal_18 = func_0x18007ba70();
      goto LAB_1803999e6;
    }
    uVal_33 = 0xf;
    if (0xf < sz_19) {
      uVal_22 = sz_19 | 0xf;
      uVal_33 = 0x16;
      if (0x16 < uVal_22) {
        uVal_33 = uVal_22;
      }
      if (uVal_22 < 0xfff) {
        local_e0 = (uint8_t *)func_0x180672de0(uVal_33 + 1);
      }
      else {
        lVal_26 = func_0x180672de0(uVal_33 + 0x28);
        local_e0 = (uint8_t *)(lVal_26 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(local_e0 + -8) = lVal_26;
      }
      _local_298 = (uint64_t *****)local_e0;
    }
    pU64_30 = local_e0;
    uStack_280 = uVal_33;
    local_288 = (uint8_t  [8])sz_19;
    func_0x1806aa960(local_e0,pU64_2,sz_19);
    pU64_30[sz_19] = 0;
    func_0x18039d5e0(lVal_23,local_298,&local_438,&local_448,uVal_3,&local_458);
    if (uStack_280 < 0x10) goto LAB_180399632;
    uVal_33 = uStack_280 + 1;
    uVal_22 = uStack_280;
    lVal_26 = (int64_t)_local_298;
    lVal_23 = (int64_t)_local_298;
    if (uVal_33 < 0x1000) goto LAB_18039962d;
    goto LAB_18039960e;
  }
  goto LAB_180399977;
}

// Unwind@180399a30
void Unwind_180399a30(void)
{
  func_0x180672f60(&DAT_1808401a8);
  return;
}

// Unwind@180399a80
void Unwind_180399a80(void)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11f38) = 0;
  return;
}

// Unwind@180399ae0
void Unwind_180399ae0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11ef8) = 0;
  *(uint8_t *)(param_2 + 0x49d) = 1;
  return;
}

// Unwind@180399b40
void Unwind_180399b40(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11f5c) = 0;
  *(uint8_t *)(param_2 + 0x49c) = 1;
  return;
}

// Unwind@180399ba0
void Unwind_180399ba0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11e80) = 0;
  *(uint8_t *)(param_2 + 0x49f) = 1;
  return;
}

// Unwind@180399c00
void Unwind_180399c00(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180399c50
void Unwind_180399c50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180399ca0
void Unwind_180399ca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@180399cf0
void Unwind_180399cf0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x110);
  return;
}

// Unwind@180399d40
void Unwind_180399d40(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@180399d90
void Unwind_180399d90(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180399dc0
void Unwind_180399dc0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180399df0
void Unwind_180399df0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@180399e20
void Unwind_180399e20(uint64_t param_1,int64_t param_2)
{
  func_0x1800a7510(param_2 + 0x110);
  return;
}

// Unwind@180399e70
void Unwind_180399e70(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  *(uint8_t *)(param_2 + 0x49d) = 0;
  return;
}

// Unwind@180399ec0
void Unwind_180399ec0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  *(uint8_t *)(param_2 + 0x49c) = 0;
  return;
}

// Catch@180399f10
uint64_t Catch_180399f10(void)
{
  return 0x180398252;
}

// Unwind@180399f50
void Unwind_180399f50(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x450);
  return;
}

// Unwind@180399fa0
void Unwind_180399fa0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x440);
  return;
}

// Unwind@180399ff0
void Unwind_180399ff0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x49d) == '\x01') {
    func_0x180001e70(param_2 + 0x3e0);
  }
  return;
}

// Unwind@18039a040
void Unwind_18039a040(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x49c) == '\x01') {
    func_0x180001e70(param_2 + 0x400);
  }
  return;
}

// Unwind@18039a090
void Unwind_18039a090(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@18039a0e0
void Unwind_18039a0e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x470);
  return;
}

// Unwind@18039a130
void Unwind_18039a130(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  *(uint8_t *)(param_2 + 0x49f) = 0;
  return;
}

// Unwind@18039a180
void Unwind_18039a180(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x270);
  return;
}

// Unwind@18039a1d0
void Unwind_18039a1d0(void)
{
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1808400b8);
  return;
}

// Unwind@18039a220
void Unwind_18039a220(void)
{
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1808400b8);
  return;
}

// Unwind@18039a270
void Unwind_18039a270(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  return;
}

// Unwind@18039a2c0
void Unwind_18039a2c0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x49f);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x3c0);
  }
  *(char *)(param_2 + 0x49e) = ch_1;
  return;
}

// Unwind@18039a320
void Unwind_18039a320(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x49e) == '\x01') {
    func_0x180001e70(param_2 + 0x3a0);
  }
  return;
}

// Unwind@18039a370
void Unwind_18039a370(uint64_t param_1,int64_t param_2)
{
  func_0x1800573d0(param_2 + 0x270);
  return;
}

// Unwind@18039a3c0
void Unwind_18039a3c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x380);
  return;
}

// func_0x18039a410
void func_0x18039a410(uint8_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *pLong_1;
  int64_t lVal_2;
  uint8_t *pU64_3;
  uint64_t *pU64_4;
  uint8_t *pU64_5;
  
  switch(*param_1) {
  case 1:
    pLong_1 = *(int64_t **)(param_1 + 8);
    lVal_2 = *pLong_1;
    func_0x180085870(pLong_1,pLong_1,*(uint64_t *)(lVal_2 + 8),param_4,0xfffffffffffffffe);
    *(int64_t *)(lVal_2 + 8) = lVal_2;
    *(int64_t *)lVal_2 = lVal_2;
    *(int64_t *)(lVal_2 + 0x10) = lVal_2;
    pLong_1[1] = 0;
    break;
  case 2:
    pU64_4 = *(uint64_t **)(param_1 + 8);
    pU64_5 = (uint8_t *)*pU64_4;
    pU64_3 = (uint8_t *)pU64_4[1];
    if (pU64_5 != pU64_3) {
      do {
        func_0x180084c70(pU64_5 + 8,*pU64_5);
        pU64_5 = pU64_5 + 0x10;
      } while (pU64_5 != pU64_3);
      pU64_4[1] = *pU64_4;
    }
    break;
  case 3:
    pU64_4 = *(uint64_t **)(param_1 + 8);
    pU64_4[2] = 0;
    if (0xf < (uint64_t)pU64_4[3]) {
      pU64_4 = (uint64_t *)*pU64_4;
    }
    *(uint8_t *)pU64_4 = 0;
    break;
  case 4:
    param_1[8] = 0;
    break;
  case 5:
  case 6:
  case 7:
    *(uint64_t *)(param_1 + 8) = 0;
    break;
  case 8:
    pLong_1 = *(int64_t **)(param_1 + 8);
    if (*pLong_1 != pLong_1[1]) {
      pLong_1[1] = *pLong_1;
    }
  }
  return;
}

// Unwind@18039a4f0
void Unwind_18039a4f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18039a510
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18039a510(char *param_1)
{
  uint64_t *pU64_1;
  char ch_2;
  uint8_t (*pArr16_3)[16];
  int64_t *pLong_4;
  func_ptr_t fnPtr_5;
  uint8_t (**ptr2_Arr16_6)[16];
  uint32_t uVal_7;
  size_t sz_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  char *fnPtr_11;
  uint64_t uVal_12;
  uint64_t uVal_13;
  int64_t lVal_14;
  uint8_t (**ptr2_Arr16_15)[16];
  uint8_t (*pArr16_16)[16];
  uint8_t *pU64_17;
  uint *_Str;
  uint64_t uVal_18;
  bool bFlag_19;
  uint8_t uVal_20;
  uint8_t local_200 [32];
  uint64_t local_1e0;
  uint8_t (**local_1d8)[16];
  uint8_t (**local_1d0)[16];
  uint8_t local_1c8 [8];
  uint8_t local_1c0 [8];
  uint8_t local_1b8 [8];
  uint8_t local_1b0 [8];
  uint8_t local_1a8 [8];
  uint8_t local_1a0 [8];
  uint8_t local_198 [8];
  uint8_t local_190 [8];
  uint8_t local_188 [16];
  uint64_t local_178;
  uint64_t uStack_170;
  uint64_t local_160;
  uint64_t local_158;
  char *local_150;
  uint *local_148;
  uint *local_140;
  uint *local_138;
  uint *local_130;
  uint8_t local_128 [16];
  uint8_t local_118 [48];
  uint8_t local_e8 [16];
  uint8_t local_d8 [28];
  uint32_t local_bc;
  uint32_t local_b8;
  uint32_t local_b4;
  uint32_t local_b0;
  uint32_t local_ac;
  uint32_t local_a8;
  uint32_t local_a4;
  char *local_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t (*local_78)[16];
  uint64_t local_70;
  
  local_70 = 0xfffffffffffffffe;
  if ((*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x1c39c) < DAT_1808408d0) && (func_0x180672ec0(&DAT_1808408d0), DAT_1808408d0 == -1)) {
    DAT_1808408c8 = (int64_t *)func_0x180134bf0(&DAT_1808400a0);
    _Init_thread_footer(&DAT_1808408d0);
  }
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x13f50) == '\0') {
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_9 + 0x13f50) = 1;
    *(uint64_t *)(lVal_9 + 0x13f48) = 0x1cb25f0ab0e9bce;
    func_0x180673140(&LAB_180435820);
  }
  lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_9 + 0x13f48);
  if (*(char *)(lVal_9 + 0x13f4f) == '\x01') {
    *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_9 + 0x13f4d) << 8,*(uint32_t *)pU64_1) |
              (uint64_t)*(byte *)(lVal_9 + 0x13f4c) << 0x20) ^ SUB168(_DAT_1806b64e0,0);
  }
  local_128 = (uint8_t  [16])0x0;
  sz_8 = strlen((char *)pU64_1);
  if (-1 < (int64_t)sz_8) {
    if (sz_8 < 0x10) {
      pU64_17 = local_128;
      uVal_18 = 0xf;
    }
    else {
      uVal_10 = sz_8 | 0xf;
      uVal_18 = 0x16;
      if (0x16 < uVal_10) {
        uVal_18 = uVal_10;
      }
      if (uVal_10 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_18 + 0x28);
        pU64_17 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_9;
      }
      local_128._0_8_ = pU64_17;
    }
    local_118._8_8_ = uVal_18;
    local_118._0_8_ = sz_8;
    func_0x1806aa960(pU64_17,pU64_1,sz_8);
    pU64_17[sz_8] = 0;
    if (*param_1 == '\x01') {
      lVal_9 = func_0x1800a5e70(*(uint64_t *)(param_1 + 8),local_128);
      bFlag_19 = lVal_9 != **(int64_t **)(param_1 + 8);
      if ((uint64_t)local_118._8_8_ < 0x10) goto LAB_18039a6a7;
LAB_18039a776:
      uVal_18 = local_118._8_8_ + 1;
      lVal_9 = local_128._0_8_;
      if (0xfff < uVal_18) {
        lVal_9 = *(int64_t *)(local_128._0_8_ + -8);
        if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
        uVal_18 = local_118._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_18);
      if (!bFlag_19) goto LAB_18039a7b7;
LAB_18039a6b0:
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x13f60) == '\0') {
        lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_9 + 0x13f60) = 1;
        *(uint64_t *)(lVal_9 + 0x13f58) = 0x1d931c2d920b7f2;
        func_0x180673140(&LAB_180435850);
      }
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_1 = (uint64_t *)(lVal_9 + 0x13f58);
      if (*(char *)(lVal_9 + 0x13f5f) == '\x01') {
        *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_9 + 0x13f5d) << 8,*(uint32_t *)pU64_1) |
                  (uint64_t)*(byte *)(lVal_9 + 0x13f5c) << 0x20) ^ SUB168(_DAT_1806be7a0,0);
      }
      local_118._0_16_ = (uint8_t  [16])0x0;
      local_128 = (uint8_t  [16])0x0;
      sz_8 = strlen((char *)pU64_1);
      if ((int64_t)sz_8 < 0) goto LAB_18039b780;
      if (sz_8 < 0x10) {
        pU64_17 = local_128;
        uVal_18 = 0xf;
      }
      else {
        uVal_10 = sz_8 | 0xf;
        uVal_18 = 0x16;
        if (0x16 < uVal_10) {
          uVal_18 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
        }
        else {
          lVal_9 = func_0x180672de0(uVal_18 + 0x28);
          pU64_17 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_17 + -8) = lVal_9;
        }
        local_128._0_8_ = pU64_17;
      }
      local_118._8_8_ = uVal_18;
      local_118._0_8_ = sz_8;
      func_0x1806aa960(pU64_17,pU64_1,sz_8);
      pU64_17[sz_8] = 0;
      fnPtr_11 = (char *)func_0x18004d550(param_1,local_128);
      if (0xf < (uint64_t)local_118._8_8_) {
        uVal_18 = local_118._8_8_ + 1;
        lVal_9 = local_128._0_8_;
        if (0xfff < uVal_18) {
          lVal_9 = *(int64_t *)(local_128._0_8_ + -8);
          if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
          uVal_18 = local_118._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_9,uVal_18);
      }
    }
    else {
      bFlag_19 = false;
      if (0xf < (uint64_t)local_118._8_8_) goto LAB_18039a776;
LAB_18039a6a7:
      if (bFlag_19) goto LAB_18039a6b0;
LAB_18039a7b7:
      fnPtr_11 = (char *)0x0;
    }
    (**(func_ptr_t *)(*DAT_1808408c8 + 0x10))(DAT_1808408c8,local_128);
    if (*param_1 == '\x01') {
      lVal_9 = func_0x1800a5e70(*(uint64_t *)(param_1 + 8),local_128);
      uVal_20 = lVal_9 != **(int64_t **)(param_1 + 8);
    }
    else {
      uVal_20 = false;
    }
    if (0xf < (uint64_t)local_118._8_8_) {
      uVal_18 = local_118._8_8_ + 1;
      lVal_9 = local_128._0_8_;
      if (0xfff < uVal_18) {
        lVal_9 = *(int64_t *)(local_128._0_8_ + -8);
        if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
        uVal_18 = local_118._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_18);
    }
    if ((bool)uVal_20) {
      (**(func_ptr_t *)(*DAT_1808408c8 + 0x10))(DAT_1808408c8,local_128);
      local_a0 = (char *)func_0x18004d550(param_1,local_128);
      ptr2_Arr16_15 = DAT_18083e6f0;
      ptr2_Arr16_6 = DAT_18083e6f8;
      if (0xf < (uint64_t)local_118._8_8_) {
        uVal_18 = local_118._8_8_ + 1;
        lVal_9 = local_128._0_8_;
        if (0xfff < uVal_18) {
          lVal_9 = *(int64_t *)(local_128._0_8_ + -8);
          if (0x1f < (uint64_t)((local_128._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
          uVal_18 = local_118._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_9,uVal_18);
        ptr2_Arr16_15 = DAT_18083e6f0;
        ptr2_Arr16_6 = DAT_18083e6f8;
      }
    }
    else {
      local_a0 = (char *)0x0;
      ptr2_Arr16_15 = DAT_18083e6f0;
      ptr2_Arr16_6 = DAT_18083e6f8;
    }
    DAT_18083e6f0 = ptr2_Arr16_15;
    DAT_18083e6f8 = ptr2_Arr16_6;
    if (((fnPtr_11 == (char *)0x0) || (*fnPtr_11 == '\0')) &&
       ((local_a0 == (char *)0x0 || (*local_a0 == '\0')))) {
      for (; ptr2_Arr16_15 != ptr2_Arr16_6; ptr2_Arr16_15 = ptr2_Arr16_15 + 1) {
        func_0x1803f17e0(*ptr2_Arr16_15);
      }
      return;
    }
    if (ptr2_Arr16_15 != ptr2_Arr16_6) {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      local_148 = (uint *)(lVal_9 + 0x13f64);
      local_140 = (uint *)(lVal_9 + 0x13f70);
      local_138 = (uint *)(lVal_9 + 0x13f7c);
      local_130 = (uint *)(lVal_9 + 0x13f88);
      local_1d0 = ptr2_Arr16_6;
      local_150 = fnPtr_11;
      do {
        fnPtr_11 = local_150;
        pArr16_3 = *ptr2_Arr16_15;
        local_d8._0_16_ = (uint8_t  [16])0x0;
        local_e8 = (uint8_t  [16])0x0;
        pArr16_16 = pArr16_3;
        if (0xf < *(uint64_t *)(pArr16_3[1] + 8)) {
          pArr16_16 = *(uint8_t (**)[16])*pArr16_3;
        }
        uVal_18 = *(uint64_t *)pArr16_3[1];
        if ((int64_t)uVal_18 < 0) goto LAB_18039b780;
        local_1d8 = ptr2_Arr16_15;
        local_78 = pArr16_3;
        local_d8._0_8_ = uVal_18;
        if (0xf < uVal_18) {
          uVal_12 = uVal_18 | 0xf;
          uVal_10 = 0x16;
          if (0x16 < uVal_12) {
            uVal_10 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            uVal_12 = func_0x180672de0(uVal_10 + 1);
          }
          else {
            lVal_9 = func_0x180672de0(uVal_10 + 0x28);
            uVal_12 = lVal_9 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_12 - 8) = lVal_9;
          }
          local_e8._0_8_ = uVal_12;
          local_d8._8_8_ = uVal_10;
          func_0x1806aa960(uVal_12,pArr16_16,uVal_18 + 1);
          if (fnPtr_11 != (char *)0x0) goto LAB_18039ab44;
LAB_18039aba0:
          if (local_a0 != (char *)0x0) {
            pU64_17 = local_e8;
            if (0xf < (uint64_t)local_d8._8_8_) {
              pU64_17 = (uint8_t *)local_e8._0_8_;
            }
            local_98._0_8_ = pU64_17;
            if ((*local_a0 == '\x01') &&
               (lVal_9 = func_0x1801bc990(*(uint64_t *)(local_a0 + 8),local_98),
               lVal_9 != **(int64_t **)(local_a0 + 8))) {
              fnPtr_11 = (char *)func_0x18004d550(local_a0,local_e8);
              goto LAB_18039ac27;
            }
          }
          func_0x1803f17e0(local_78);
          goto LAB_18039b4bd;
        }
        local_d8._8_8_ = 0xf;
        local_e8 = *pArr16_16;
        if (local_150 == (char *)0x0) goto LAB_18039aba0;
LAB_18039ab44:
        local_98._0_8_ = local_e8;
        if (0xf < (uint64_t)local_d8._8_8_) {
          local_98._0_8_ = local_e8._0_8_;
        }
        if ((*fnPtr_11 != '\x01') ||
           (lVal_9 = func_0x1801bc990(*(uint64_t *)(fnPtr_11 + 8),local_98),
           lVal_9 == **(int64_t **)(local_150 + 8))) goto LAB_18039aba0;
        fnPtr_11 = (char *)func_0x18004d550(local_150,local_e8);
LAB_18039ac27:
        if (*fnPtr_11 == '\0') {
          func_0x1803f17e0();
          goto LAB_18039b4bd;
        }
        switch(*(uint32_t *)local_78[4]) {
        case 0:
          local_a4 = 0;
          func_0x1801b1910(&DAT_1806b5270,fnPtr_11,&local_a4);
          **(uint32_t **)(local_78[4] + 8) = local_a4;
          break;
        case 1:
          local_158 = 0;
          func_0x180211160(fnPtr_11,&local_158);
          **(uint64_t **)(local_78[4] + 8) = local_158;
          break;
        case 2:
          local_160 = 0;
          func_0x180211250(fnPtr_11,&local_160);
          **(uint64_t **)(local_78[4] + 8) = local_160;
          break;
        case 3:
        case 8:
          local_a8 = 0;
          func_0x180112c00(&DAT_1806b5270,fnPtr_11,&local_a8);
          uVal_7 = local_a8;
          goto LAB_18039aee7;
        case 4:
          func_0x18009ff70(local_1c8,fnPtr_11);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13f6c
                       ) == '\0') {
            lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_9 + 0x13f6c) = 1;
            *(uint8_t *)(lVal_9 + 0x13f68) = 1;
            *(uint32_t *)(lVal_9 + 0x13f64) = 0xc579bac1;
            func_0x180673140(&LAB_180435880);
            ch_2 = *(char *)(local_148 + 1);
          }
          else {
            ch_2 = *(char *)(local_148 + 1);
          }
          if (ch_2 == '\x01') {
            *local_148 = *local_148 ^ 0xc51ddfb3;
            *(uint8_t *)(local_148 + 1) = 0;
          }
          local_88 = (uint8_t  [16])0x0;
          local_98 = (uint8_t  [16])0x0;
          sz_8 = strlen((char *)local_148);
          pArr16_3 = local_78;
          if ((int64_t)sz_8 < 0) {
            func_0x18007ba70();
LAB_18039b7c5:
            fnPtr_5 = (func_ptr_t )swi(3);
            (*fnPtr_5)();
            return;
          }
          uVal_18 = 0xf;
          pU64_17 = local_98;
          if (0xf < sz_8) {
            uVal_10 = sz_8 | 0xf;
            uVal_18 = 0x16;
            if (0x16 < uVal_10) {
              uVal_18 = uVal_10;
            }
            if (uVal_10 < 0xfff) {
              pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
            }
            else {
              lVal_9 = func_0x180672de0(uVal_18 + 0x28);
              pU64_17 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_17 + -8) = lVal_9;
            }
            local_98._0_8_ = pU64_17;
          }
          local_88._0_8_ = sz_8;
          local_88._8_8_ = uVal_18;
          func_0x1806aa960(pU64_17,local_148,sz_8);
          pU64_17[sz_8] = 0;
          uVal_13 = func_0x18004d550(local_1c8,local_98);
          local_ac = 0;
          func_0x1801b1910(&DAT_1806b5270,uVal_13,&local_ac);
          **(uint32_t **)(pArr16_3[4] + 8) = local_ac;
          if (0xf < (uint64_t)local_88._8_8_) {
            uVal_18 = local_88._8_8_ + 1;
            lVal_9 = local_98._0_8_;
            if (0xfff < uVal_18) {
              lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
              if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
              uVal_18 = local_88._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_9,uVal_18);
          }
          func_0x180084c70(local_1c0,local_1c8[0]);
          func_0x18009ff70(local_1b8,fnPtr_11);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13f78
                       ) == '\0') {
            lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_9 + 0x13f78) = 1;
            *(uint8_t *)(lVal_9 + 0x13f76) = 1;
            *(uint32_t *)(lVal_9 + 0x13f70) = 0x468c8b1c;
            *(uint16_t *)(lVal_9 + 0x13f74) = 0x79f3;
            func_0x180673140(&LAB_1804358a0);
            ch_2 = *(char *)((int64_t)local_140 + 6);
          }
          else {
            ch_2 = *(char *)((int64_t)local_140 + 6);
          }
          if (ch_2 == '\x01') {
            *local_140 = *local_140 ^ 0x23e9f97b;
            *(byte *)(local_140 + 1) = *(byte *)(local_140 + 1) ^ 0x9d;
            *(byte *)((int64_t)local_140 + 5) = *(byte *)((int64_t)local_140 + 5) ^ 0x79;
            *(uint8_t *)((int64_t)local_140 + 6) = 0;
          }
          local_88 = (uint8_t  [16])0x0;
          local_98 = (uint8_t  [16])0x0;
          sz_8 = strlen((char *)local_140);
          pArr16_3 = local_78;
          if ((int64_t)sz_8 < 0) {
            func_0x18007ba70();
            goto LAB_18039b7c5;
          }
          uVal_18 = 0xf;
          pU64_17 = local_98;
          if (0xf < sz_8) {
            uVal_10 = sz_8 | 0xf;
            uVal_18 = 0x16;
            if (0x16 < uVal_10) {
              uVal_18 = uVal_10;
            }
            if (uVal_10 < 0xfff) {
              pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
            }
            else {
              lVal_9 = func_0x180672de0(uVal_18 + 0x28);
              pU64_17 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_17 + -8) = lVal_9;
            }
            local_98._0_8_ = pU64_17;
          }
          local_88._0_8_ = sz_8;
          local_88._8_8_ = uVal_18;
          func_0x1806aa960(pU64_17,local_140,sz_8);
          pU64_17[sz_8] = 0;
          uVal_13 = func_0x18004d550(local_1b8,local_98);
          local_b0 = 0;
          func_0x1801b1910(&DAT_1806b5270,uVal_13,&local_b0);
          *(uint32_t *)(*(int64_t *)(pArr16_3[4] + 8) + 4) = local_b0;
          if (0xf < (uint64_t)local_88._8_8_) {
            uVal_18 = local_88._8_8_ + 1;
            lVal_9 = local_98._0_8_;
            if (0xfff < uVal_18) {
              lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
              if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
              uVal_18 = local_88._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_9,uVal_18);
          }
          func_0x180084c70(local_1b0,local_1b8[0]);
          func_0x18009ff70(local_1a8,fnPtr_11);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13f84
                       ) == '\0') {
            lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_9 + 0x13f84) = 1;
            *(uint32_t *)(lVal_9 + 0x13f7c) = 0xbae02d5d;
            *(uint16_t *)(lVal_9 + 0x13f80) = 0x1d5;
            func_0x180673140(&LAB_1804358d0);
            ch_2 = *(char *)((int64_t)local_138 + 5);
          }
          else {
            ch_2 = *(char *)((int64_t)local_138 + 5);
          }
          if (ch_2 == '\x01') {
            *local_138 = *local_138 ^ 0xdf95413f;
            *(byte *)(local_138 + 1) = *(byte *)(local_138 + 1) ^ 0xd5;
            *(uint8_t *)((int64_t)local_138 + 5) = 0;
          }
          local_88 = (uint8_t  [16])0x0;
          local_98 = (uint8_t  [16])0x0;
          sz_8 = strlen((char *)local_138);
          pArr16_3 = local_78;
          if ((int64_t)sz_8 < 0) {
            func_0x18007ba70();
            goto LAB_18039b7c5;
          }
          uVal_18 = 0xf;
          pU64_17 = local_98;
          if (0xf < sz_8) {
            uVal_10 = sz_8 | 0xf;
            uVal_18 = 0x16;
            if (0x16 < uVal_10) {
              uVal_18 = uVal_10;
            }
            if (uVal_10 < 0xfff) {
              pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
            }
            else {
              lVal_9 = func_0x180672de0(uVal_18 + 0x28);
              pU64_17 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_17 + -8) = lVal_9;
            }
            local_98._0_8_ = pU64_17;
          }
          local_88._0_8_ = sz_8;
          local_88._8_8_ = uVal_18;
          func_0x1806aa960(pU64_17,local_138,sz_8);
          pU64_17[sz_8] = 0;
          uVal_13 = func_0x18004d550(local_1a8,local_98);
          local_b4 = 0;
          func_0x1801b1910(&DAT_1806b5270,uVal_13,&local_b4);
          *(uint32_t *)(*(int64_t *)(pArr16_3[4] + 8) + 8) = local_b4;
          if (0xf < (uint64_t)local_88._8_8_) {
            uVal_18 = local_88._8_8_ + 1;
            lVal_9 = local_98._0_8_;
            if (0xfff < uVal_18) {
              lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
              if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
              uVal_18 = local_88._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_9,uVal_18);
          }
          func_0x180084c70(local_1a0,local_1a8[0]);
          func_0x18009ff70(local_198,fnPtr_11);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13f90
                       ) == '\0') {
            lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_9 + 0x13f90) = 1;
            *(uint8_t *)(lVal_9 + 0x13f8e) = 1;
            *(uint32_t *)(lVal_9 + 0x13f88) = 0xdbdcf46;
            *(uint16_t *)(lVal_9 + 0x13f8c) = 0x3578;
            func_0x180673140(&LAB_180435900);
            ch_2 = *(char *)((int64_t)local_130 + 6);
            _Str = local_130;
          }
          else {
            ch_2 = *(char *)((int64_t)local_130 + 6);
            _Str = local_130;
          }
          if (ch_2 == '\x01') {
            *_Str = *_Str ^ 0x65cda327;
            *(byte *)(_Str + 1) = *(byte *)(_Str + 1) ^ 0x19;
            *(byte *)((int64_t)_Str + 5) = *(byte *)((int64_t)_Str + 5) ^ 0x35;
            *(uint8_t *)((int64_t)_Str + 6) = 0;
          }
          local_88 = (uint8_t  [16])0x0;
          local_98 = (uint8_t  [16])0x0;
          local_130 = _Str;
          sz_8 = strlen((char *)_Str);
          pArr16_3 = local_78;
          if ((int64_t)sz_8 < 0) {
            func_0x18007ba70();
            goto LAB_18039b7c5;
          }
          uVal_18 = 0xf;
          pU64_17 = local_98;
          if (0xf < sz_8) {
            uVal_10 = sz_8 | 0xf;
            uVal_18 = 0x16;
            if (0x16 < uVal_10) {
              uVal_18 = uVal_10;
            }
            if (uVal_10 < 0xfff) {
              pU64_17 = (uint8_t *)func_0x180672de0(uVal_18 + 1);
            }
            else {
              lVal_9 = func_0x180672de0(uVal_18 + 0x28);
              pU64_17 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_17 + -8) = lVal_9;
            }
            local_98._0_8_ = pU64_17;
            _Str = local_130;
          }
          local_88._8_8_ = uVal_18;
          local_88._0_8_ = sz_8;
          func_0x1806aa960(pU64_17,_Str,sz_8);
          pU64_17[sz_8] = 0;
          uVal_13 = func_0x18004d550(local_198,local_98);
          local_b8 = 0;
          func_0x1801b1910(&DAT_1806b5270,uVal_13,&local_b8);
          *(uint32_t *)(*(int64_t *)(pArr16_3[4] + 8) + 0xc) = local_b8;
          if (0xf < (uint64_t)local_88._8_8_) {
            uVal_18 = local_88._8_8_ + 1;
            lVal_9 = local_98._0_8_;
            if (0xfff < uVal_18) {
              lVal_9 = *(int64_t *)(local_98._0_8_ + -8);
              if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
              uVal_18 = local_88._8_8_ + 0x28;
            }
            thunk_FUN_180695dd0(lVal_9,uVal_18);
          }
          func_0x180084c70(local_190,local_198[0]);
          break;
        case 5:
          if (*fnPtr_11 != '\x04') {
            local_1e0 = func_0x1800833d0(fnPtr_11);
            func_0x180083260(local_200,"type must be boolean, but is ",&local_1e0);
            func_0x180082f00(local_128,0x12e,local_200,fnPtr_11);
            func_0x18067a120(local_128,&DAT_180768700);
            goto LAB_18039b7c5;
          }
          **(char **)(local_78[4] + 8) = fnPtr_11[8];
          break;
        case 6:
          local_188 = ZEXT816(0);
          local_178 = 0;
          uStack_170 = 0xf;
          func_0x180086960(fnPtr_11,local_188);
          pLong_4 = *(int64_t **)(local_78[4] + 8);
          if (pLong_4 == (int64_t *)local_188) {
            if (0xf < uStack_170) {
              uVal_18 = uStack_170 + 1;
              lVal_9 = local_188._0_8_;
              if (0xfff < uVal_18) {
                lVal_9 = *(int64_t *)(local_188._0_8_ + -8);
                if (0x1f < (uint64_t)((local_188._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
                uVal_18 = uStack_170 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_9,uVal_18);
            }
          }
          else {
            uVal_18 = pLong_4[3];
            if (0xf < uVal_18) {
              lVal_9 = *pLong_4;
              uVal_10 = uVal_18 + 1;
              lVal_14 = lVal_9;
              if (0xfff < uVal_10) {
                lVal_14 = *(int64_t *)(lVal_9 + -8);
                if (0x1f < (uint64_t)((lVal_9 + -8) - lVal_14)) goto LAB_18039b785;
                uVal_10 = uVal_18 + 0x28;
              }
              thunk_FUN_180695dd0(lVal_14,uVal_10);
            }
            pLong_4[2] = 0;
            pLong_4[3] = 0xf;
            *(uint8_t *)pLong_4 = 0;
            *pLong_4 = local_188._0_8_;
            pLong_4[1] = local_188._8_8_;
            *(uint32_t *)(pLong_4 + 2) = (uint32_t)local_178;
            *(uint32_t *)((int64_t)pLong_4 + 0x14) = local_178._4_4_;
            *(uint32_t *)(pLong_4 + 3) = (uint32_t)uStack_170;
            *(uint32_t *)((int64_t)pLong_4 + 0x1c) = uStack_170._4_4_;
          }
          break;
        case 7:
          local_bc = 0;
          func_0x180112c00(&DAT_1806b5270,fnPtr_11,&local_bc);
          uVal_7 = local_bc;
LAB_18039aee7:
          **(uint32_t **)(local_78[4] + 8) = uVal_7;
        }
        func_0x1801d8910(local_78);
LAB_18039b4bd:
        ptr2_Arr16_15 = local_1d8;
        if (0xf < (uint64_t)local_d8._8_8_) {
          uVal_18 = local_d8._8_8_ + 1;
          lVal_9 = local_e8._0_8_;
          if (0xfff < uVal_18) {
            lVal_9 = *(int64_t *)(local_e8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_9)) goto LAB_18039b785;
            uVal_18 = local_d8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_18);
        }
        ptr2_Arr16_15 = ptr2_Arr16_15 + 1;
      } while (ptr2_Arr16_15 != local_1d0);
    }
    return;
  }
LAB_18039b780:
  func_0x18007ba70();
LAB_18039b785:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18039b7d0
void Unwind_18039b7d0(void)
{
  func_0x180672f60(&DAT_1808408d0);
  return;
}

// Unwind@18039b810
void Unwind_18039b810(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18039b850
void Unwind_18039b850(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18039b890
void Unwind_18039b890(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18039b8d0
void Unwind_18039b8d0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x100);
  return;
}

// Unwind@18039b910
void Unwind_18039b910(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18039b950
void Unwind_18039b950(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x60);
  return;
}

// Unwind@18039b990
void Unwind_18039b990(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18039b9d0
void Unwind_18039b9d0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x70);
  return;
}

// Unwind@18039ba10
void Unwind_18039ba10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18039ba50
void Unwind_18039ba50(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x80);
  return;
}

// Unwind@18039ba90
void Unwind_18039ba90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 400);
  return;
}

// Unwind@18039bad0
void Unwind_18039bad0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x90);
  return;
}

// Unwind@18039bb10
void Unwind_18039bb10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Catch@18039bb50
uint64_t Catch_18039bb50(void)
{
  return 0x18039b4b0;
}

// Catch@18039bb90
uint64_t Catch_18039bb90(uint64_t param_1,int64_t param_2)
{
  *(uint8_t ***)(param_2 + 0x1c0) = std::exception::vftable;
  func_0x18067b490(param_2 + 0x1c8);
  return 0x18039b4bd;
}

// Unwind@18039bbe0
void Unwind_18039bbe0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18039bc10
void Unwind_18039bc10(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18039bc40
void Unwind_18039bc40(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18039bc70
void Unwind_18039bc70(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18039bca0
void Unwind_18039bca0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x28);
  return;
}

// Unwind@18039bce0
void Unwind_18039bce0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x140);
  return;
}

// func_0x18039bd20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18039bd20(int64_t param_1,char param_2)
{
  uint64_t *_Str;
  uint8_t uVal_1;
  uint64_t *pU64_2;
  func_ptr_t fnPtr_3;
  uint8_t auArr_4 [16];
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  uint uVal_8;
  size_t sz_9;
  uint64_t *pU64_10;
  uint8_t (*pArr16_11)[16];
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  uint64_t uVal_15;
  int64_t lVal_16;
  uint64_t *pU64_17;
  uint64_t ****ptr4_U64_18;
  char *fnPtr_19;
  char *fnPtr_20;
  uint64_t uVal_21;
  uint8_t (*pArr16_22)[16];
  uint8_t *pU64_23;
  uint64_t *pU64_24;
  uint64_t *pU64_25;
  uint64_t *pU64_26;
  bool bFlag_27;
  uint uVal_28;
  uint uVal_29;
  uint64_t *in_stack_fffffffffffffd08;
  uint32_t uVal_30;
  uint32_t local_2e8;
  uint32_t uStack_2e4;
  uint32_t uStack_2e0;
  uint32_t uStack_2dc;
  uint32_t local_2d8;
  uint32_t uStack_2d4;
  uint32_t uStack_2d0;
  uint32_t uStack_2cc;
  uint32_t local_2c8;
  uint32_t uStack_2c4;
  uint32_t uStack_2c0;
  int iStack_2bc;
  uint8_t local_2b8 [8];
  uint64_t uStack_2b0;
  uint8_t local_2a8 [8];
  uint64_t uStack_2a0;
  int64_t alStack_270 [12];
  uint8_t **local_210 [13];
  uint64_t ****local_1a8 [3];
  uint64_t local_190;
  uint8_t local_188 [16];
  uint8_t local_178 [16];
  uint8_t local_168 [16];
  uint64_t local_158;
  uint64_t local_150;
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  uint8_t local_c8 [8];
  uint64_t uStack_c0;
  size_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98 [16];
  uint64_t local_88;
  uint64_t uStack_80;
  uint32_t local_78;
  uint8_t local_64;
  uint8_t local_63;
  uint8_t local_62;
  uint8_t local_61;
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11f6c) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0x11f6c) = 1;
    *(uint8_t *)(lVal_13 + 0x11f68) = 1;
    *(uint64_t *)(lVal_13 + 0x11f60) = 0x499e9a56efef40e6;
    func_0x180673140(&LAB_18042e490);
  }
  lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_24 = (uint64_t *)(lVal_13 + 0x11f60);
  if (*(char *)(lVal_13 + 0x11f68) == '\x01') {
    *pU64_24 = *pU64_24 ^ 0x49edfd3f89812fa5;
    *(uint8_t *)(lVal_13 + 0x11f68) = 0;
  }
  local_98 = (uint8_t  [16])0x0;
  sz_9 = strlen((char *)pU64_24);
  if (-1 < (int64_t)sz_9) {
    if (sz_9 < 0x10) {
      pU64_23 = local_98;
      uVal_21 = 0xf;
    }
    else {
      uVal_12 = sz_9 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_12) {
        uVal_21 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_23 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_21 + 0x28);
        pU64_23 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_23 + -8) = lVal_13;
      }
      local_98._0_8_ = pU64_23;
    }
    local_88 = sz_9;
    uStack_80 = uVal_21;
    func_0x1806aa960(pU64_23,pU64_24,sz_9);
    pU64_23[sz_9] = 0;
    pU64_10 = (uint64_t *)func_0x1800becb0();
    uVal_21 = pU64_10[2];
    if (0xf < (uint64_t)pU64_10[3]) {
      pU64_10 = (uint64_t *)*pU64_10;
    }
    if (uStack_80 - local_88 < uVal_21) {
      pArr16_11 = (uint8_t (*)[16])func_0x1800871a0(local_98,uVal_21,local_88,0,pU64_10,uVal_21);
      in_stack_fffffffffffffd08 = pU64_10;
    }
    else {
      uVal_12 = uVal_21;
      if (uStack_80 < 0x10) {
        pU64_25 = (uint64_t *)local_98;
        if (pU64_25 < (uint64_t *)((int64_t)pU64_10 + uVal_21)) goto LAB_18039bed0;
      }
      else {
        pU64_25 = (uint64_t *)local_98._0_8_;
        if ((uint64_t)local_98._0_8_ < (uint64_t *)((int64_t)pU64_10 + uVal_21)) {
LAB_18039bed0:
          if ((pU64_10 <= (uint64_t *)((int64_t)pU64_25 + local_88)) &&
             (uVal_12 = (int64_t)pU64_25 - (int64_t)pU64_10,
             pU64_25 < pU64_10 || (int64_t)pU64_25 - (int64_t)pU64_10 == 0)) {
            uVal_12 = 0;
          }
        }
      }
      lVal_13 = local_88 + 1;
      local_88 = local_88 + uVal_21;
      func_0x1806aa960((int64_t)pU64_25 + uVal_21,pU64_25,lVal_13);
      func_0x1806aa960(pU64_25,pU64_10,uVal_12);
      func_0x1806aa960((int64_t)pU64_25 + uVal_12,(int64_t)pU64_10 + uVal_12 + uVal_21,uVal_21 - uVal_12);
      pArr16_11 = &local_98;
    }
    _local_2b8 = *pArr16_11;
    local_2a8 = *(uint8_t (*)[8])pArr16_11[1];
    uStack_2a0 = *(uint64_t *)(pArr16_11[1] + 8);
    *(uint64_t *)pArr16_11[1] = 0;
    *(uint64_t *)(pArr16_11[1] + 8) = 0xf;
    (*pArr16_11)[0] = 0;
    pU64_23 = local_2b8;
    func_0x1800bef00(pU64_23);
    if (0xf < uStack_2a0) {
      uVal_21 = uStack_2a0 + 1;
      uVal_12 = (uint64_t)local_2b8;
      if (0xfff < uVal_21) {
        uVal_12 = *(uint64_t *)((int64_t)local_2b8 - 8);
        if (0x1f < ((int64_t)local_2b8 - 8U) - uVal_12) goto LAB_18039cdc2;
        uVal_21 = uStack_2a0 + 0x28;
      }
      thunk_FUN_180695dd0(uVal_12,uVal_21);
    }
    _local_2a8 = ZEXT816(0xf) << 0x40;
    auArr_4[15] = 0;
    auArr_4._0_15_ = stack0xfffffffffffffd49;
    _local_2b8 = auArr_4 << 8;
    if (0xf < uStack_80) {
      uVal_21 = uStack_80 + 1;
      lVal_13 = local_98._0_8_;
      if (0xfff < uVal_21) {
        lVal_13 = *(int64_t *)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)((local_98._0_8_ + -8) - lVal_13)) goto LAB_18039cdc2;
        uVal_21 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_21);
    }
    pArr16_11 = (uint8_t (*)[16])(param_1 + 0x30);
    local_148 = (uint8_t  [16])0x0;
    local_138 = (uint8_t  [16])0x0;
    uVal_21 = *(uint64_t *)(param_1 + 0x40);
    pArr16_22 = pArr16_11;
    if (0xf < *(uint64_t *)(param_1 + 0x48)) {
      pArr16_22 = *(uint8_t (**)[16])(param_1 + 0x30);
    }
    if (-1 < (int64_t)uVal_21) {
      if (uVal_21 < 0x10) {
        local_138._8_8_ = 0xf;
        local_138._0_8_ = uVal_21;
        local_148 = *pArr16_22;
      }
      else {
        uVal_15 = uVal_21 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_15) {
          uVal_12 = uVal_15;
        }
        if (uVal_15 < 0xfff) {
          uVal_15 = func_0x180672de0(uVal_12 + 1);
        }
        else {
          lVal_13 = func_0x180672de0(uVal_12 + 0x28);
          uVal_15 = lVal_13 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_15 - 8) = lVal_13;
        }
        local_148._0_8_ = uVal_15;
        local_138._8_8_ = uVal_12;
        local_138._0_8_ = uVal_21;
        func_0x1806aa960(uVal_15,pArr16_22,uVal_21 + 1);
      }
      local_98._8_8_ = _UNK_1806cb47b;
      local_98._0_8_ = _DAT_1806cb473;
      local_88 = CONCAT71(local_88._1_7_,7);
      if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                   0x11f80) == '\0') {
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        *(uint8_t *)(lVal_13 + 0x11f80) = 1;
        func_0x18007d2b0(lVal_13 + 0x11f6d,local_98);
        func_0x180673140(&LAB_18042e4b0);
      }
      lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      pU64_24 = (uint64_t *)(lVal_13 + 0x11f6d);
      if (*(char *)(lVal_13 + 0x11f7e) == '\x01') {
        uVal_8 = *(uint *)(lVal_13 + 0x11f71) ^ _UNK_1806c3694;
        uVal_28 = *(uint *)(lVal_13 + 0x11f75) ^ _UNK_1806c3698;
        uVal_29 = *(uint *)(lVal_13 + 0x11f79) ^ _UNK_1806c369c;
        *(uint *)pU64_24 = *(uint *)pU64_24 ^ _DAT_1806c3690;
        *(uint *)(lVal_13 + 0x11f71) = uVal_8;
        *(uint *)(lVal_13 + 0x11f75) = uVal_28;
        *(uint *)(lVal_13 + 0x11f79) = uVal_29;
        *(byte *)(lVal_13 + 0x11f7d) = *(byte *)(lVal_13 + 0x11f7d) ^ 7;
        *(uint8_t *)(lVal_13 + 0x11f7e) = 0;
      }
      _local_2a8 = (uint8_t  [16])0x0;
      _local_2b8 = (uint8_t  [16])0x0;
      pU64_17 = pU64_24;
      sz_9 = strlen((char *)pU64_24);
      if ((int64_t)sz_9 < 0) {
        local_61 = 1;
        func_0x18007ba70();
LAB_18039cdd1:
        local_63 = 1;
        func_0x18007ba70();
LAB_18039cdde:
        local_62 = 1;
        func_0x18007ba70();
LAB_18039cdeb:
        uVal_8 = func_0x18007ba70();
LAB_18039cdf1:
        fnPtr_19 = "ios_base::failbit set";
        if (((uint64_t)pU64_17 & 2) == 0) {
          fnPtr_19 = "ios_base::eofbit set";
        }
        fnPtr_20 = "ios_base::badbit set";
        if ((uVal_8 & 4) == 0) {
          fnPtr_20 = fnPtr_19;
        }
        local_c8._0_4_ = 1;
        uStack_c0 = &PTR_vftable_1806b0968;
        func_0x1800968f0(local_98,local_c8,fnPtr_20);
        local_98._0_8_ = std::ios_base::failure::vftable;
        func_0x18067a120(local_98,&DAT_180768ca8);
LAB_18039ce61:
        func_0x18007ba70();
LAB_18039ce67:
        local_64 = 1;
        func_0x18007ba70();
        fnPtr_3 = (func_ptr_t )swi(3);
        (*fnPtr_3)();
        return;
      }
      uVal_21 = 0xf;
      if (0xf < sz_9) {
        uVal_12 = sz_9 | 0xf;
        uVal_21 = 0x16;
        if (0x16 < uVal_12) {
          uVal_21 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          local_61 = 1;
          pU64_23 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
        }
        else {
          local_61 = 1;
          lVal_13 = func_0x180672de0(uVal_21 + 0x28);
          pU64_23 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_23 + -8) = lVal_13;
        }
        local_2b8 = (uint8_t  [8])pU64_23;
      }
      uStack_2a0 = uVal_21;
      local_2a8 = (uint8_t  [8])sz_9;
      func_0x1806aa960(pU64_23,pU64_24,sz_9);
      pU64_23[sz_9] = 0;
      pU64_24 = (uint64_t *)local_2b8;
      pU64_17 = pU64_24;
      func_0x18039d880(pU64_24,local_148);
      if (0xf < uStack_2a0) {
        uVal_21 = uStack_2a0 + 1;
        pU64_17 = (uint64_t *)local_2b8;
        if (0xfff < uVal_21) {
          pU64_17 = *(uint64_t **)((int64_t)local_2b8 + -8);
          if ((char *)0x1f < (char *)((int64_t)local_2b8 + (-8 - (int64_t)pU64_17)))
          goto LAB_18039cdc2;
          uVal_21 = uStack_2a0 + 0x28;
        }
        thunk_FUN_180695dd0(pU64_17,uVal_21);
      }
      local_128 = (uint8_t  [16])0x0;
      local_118 = (uint8_t  [16])0x0;
      uVal_21 = *(uint64_t *)(param_1 + 0x40);
      if (0xf < *(uint64_t *)(param_1 + 0x48)) {
        pArr16_11 = *(uint8_t (**)[16])(param_1 + 0x30);
      }
      if (-1 < (int64_t)uVal_21) {
        if (uVal_21 < 0x10) {
          local_118._8_8_ = 0xf;
          local_118._0_8_ = uVal_21;
          local_128 = *pArr16_11;
        }
        else {
          uVal_15 = uVal_21 | 0xf;
          uVal_12 = 0x16;
          if (0x16 < uVal_15) {
            uVal_12 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            pU64_17 = (uint64_t *)func_0x180672de0(uVal_12 + 1);
          }
          else {
            uVal_15 = func_0x180672de0(uVal_12 + 0x28);
            pU64_17 = (uint64_t *)(uVal_15 + 0x27 & 0xffffffffffffffe0);
            pU64_17[-1] = uVal_15;
          }
          local_128._0_8_ = pU64_17;
          local_118._8_8_ = uVal_12;
          local_118._0_8_ = uVal_21;
          func_0x1806aa960(pU64_17,pArr16_11,uVal_21 + 1);
        }
        local_63 = 1;
        pArr16_11 = (uint8_t (*)[16])func_0x1800becb0();
        local_f8 = (uint8_t  [16])0x0;
        local_108 = (uint8_t  [16])0x0;
        uVal_21 = *(uint64_t *)pArr16_11[1];
        if (0xf < *(uint64_t *)(pArr16_11[1] + 8)) {
          pArr16_11 = *(uint8_t (**)[16])*pArr16_11;
        }
        if ((int64_t)uVal_21 < 0) goto LAB_18039cdd1;
        if (uVal_21 < 0x10) {
          local_f8._8_8_ = 0xf;
          local_f8._0_8_ = uVal_21;
          local_108 = *pArr16_11;
        }
        else {
          uVal_15 = uVal_21 | 0xf;
          uVal_12 = 0x16;
          if (0x16 < uVal_15) {
            uVal_12 = uVal_15;
          }
          if (uVal_15 < 0xfff) {
            local_63 = 1;
            uVal_15 = func_0x180672de0(uVal_12 + 1);
          }
          else {
            local_63 = 1;
            lVal_13 = func_0x180672de0(uVal_12 + 0x28);
            uVal_15 = lVal_13 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_15 - 8) = lVal_13;
          }
          local_108._0_8_ = uVal_15;
          local_f8._8_8_ = uVal_12;
          local_f8._0_8_ = uVal_21;
          func_0x1806aa960(uVal_15,pArr16_11,uVal_21 + 1);
        }
        local_98._8_8_ = _UNK_1806cb48c;
        local_98._0_8_ = _DAT_1806cb484;
        local_88 = CONCAT62(local_88._2_6_,0x2d93);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x11f94) == '\0') {
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_13 + 0x11f94) = 1;
          func_0x18007c170(lVal_13 + 0x11f81,local_98);
          func_0x180673140(&LAB_18042e4e0);
        }
        _Str = (uint64_t *)
               (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x11f81);
        func_0x18043a390(_Str);
        _local_2a8 = (uint8_t  [16])0x0;
        _local_2b8 = (uint8_t  [16])0x0;
        pU64_17 = _Str;
        sz_9 = strlen((char *)_Str);
        if ((int64_t)sz_9 < 0) goto LAB_18039cdde;
        uVal_21 = 0xf;
        if (0xf < sz_9) {
          uVal_12 = sz_9 | 0xf;
          uVal_21 = 0x16;
          if (0x16 < uVal_12) {
            uVal_21 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            local_62 = 1;
            pU64_24 = (uint64_t *)func_0x180672de0(uVal_21 + 1);
          }
          else {
            local_62 = 1;
            uVal_12 = func_0x180672de0(uVal_21 + 0x28);
            pU64_24 = (uint64_t *)(uVal_12 + 0x27 & 0xffffffffffffffe0);
            pU64_24[-1] = uVal_12;
          }
          local_2b8 = (uint8_t  [8])pU64_24;
        }
        uStack_2a0 = uVal_21;
        local_2a8 = (uint8_t  [8])sz_9;
        func_0x1806aa960(pU64_24,_Str,sz_9);
        *(char *)((int64_t)pU64_24 + sz_9) = '\0';
        func_0x180056840(local_1a8,local_2b8,local_108,local_128);
        if (0xf < uStack_2a0) {
          uVal_21 = uStack_2a0 + 1;
          uVal_12 = (uint64_t)local_2b8;
          if (0xfff < uVal_21) {
            uVal_12 = *(uint64_t *)((int64_t)local_2b8 - 8);
            if (0x1f < ((int64_t)local_2b8 - 8U) - uVal_12) goto LAB_18039cdc2;
            uVal_21 = uStack_2a0 + 0x28;
          }
          thunk_FUN_180695dd0(uVal_12,uVal_21);
        }
        uVal_30 = (uint32_t)((uint64_t)in_stack_fffffffffffffd08 >> 0x20);
        param_1 = param_1 + 0x20;
        if (DAT_1808400b0 == '\x01') {
          AcquireSRWLockShared((PSRWLOCK)&DAT_1808400b8);
          pU64_25 = DAT_1808400a0;
          pU64_10 = (uint64_t *)*DAT_1808400a0;
joined_r0x00018039c528:
          pU64_26 = pU64_10;
          uVal_30 = (uint32_t)((uint64_t)in_stack_fffffffffffffd08 >> 0x20);
          if (pU64_26 != pU64_25) {
            (**(func_ptr_t *)(*(int64_t *)pU64_26[5] + 0x90))((int64_t *)pU64_26[5],param_1);
            pU64_2 = (uint64_t *)pU64_26[2];
            if (*(char *)((int64_t)(uint64_t *)pU64_26[2] + 0x19) == '\0') {
              do {
                pU64_10 = pU64_2;
                pU64_2 = (uint64_t *)*pU64_10;
              } while (*(char *)((int64_t)pU64_2 + 0x19) == '\0');
            }
            else {
              do {
                pU64_10 = (uint64_t *)pU64_26[1];
                if (*(char *)((int64_t)pU64_10 + 0x19) != '\0') break;
                bFlag_27 = pU64_26 == (uint64_t *)pU64_10[2];
                pU64_26 = pU64_10;
              } while (bFlag_27);
            }
            goto joined_r0x00018039c528;
          }
          ReleaseSRWLockShared((PSRWLOCK)&DAT_1808400b8);
        }
        func_0x18039dad0(param_1);
        local_150 = 0xf;
        local_158 = 1;
        local_168._1_15_ = SUB1615((uint8_t  [16])0x0,1);
        local_168[0] = DAT_180840fd0;
        local_a0 = 0;
        local_a8 = 3;
        local_a0 = func_0x1800a0a50(local_168);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x11fa0) == '\0') {
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_13 + 0x11fa0) = 1;
          *(uint64_t *)(lVal_13 + 0x11f98) = 0x1417f7ed3308beb;
          func_0x180673140(&LAB_18042e510);
        }
        lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_24 = (uint64_t *)(lVal_13 + 0x11f98);
        if (*(char *)(lVal_13 + 0x11f9f) == '\x01') {
          *pU64_24 = (CONCAT44((uint)*(ushort *)(lVal_13 + 0x11f9d) << 8,*(uint *)pU64_24) |
                     (uint64_t)*(byte *)(lVal_13 + 0x11f9c) << 0x20) ^ SUB168(_DAT_1806ae070,0);
        }
        local_178 = (uint8_t  [16])0x0;
        local_188 = (uint8_t  [16])0x0;
        pU64_17 = pU64_24;
        sz_9 = strlen((char *)pU64_24);
        if ((int64_t)sz_9 < 0) goto LAB_18039cdeb;
        if (sz_9 < 0x10) {
          pU64_23 = local_188;
          uVal_21 = 0xf;
        }
        else {
          uVal_12 = sz_9 | 0xf;
          uVal_21 = 0x16;
          if (0x16 < uVal_12) {
            uVal_21 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            pU64_23 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
          }
          else {
            lVal_13 = func_0x180672de0(uVal_21 + 0x28);
            pU64_23 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_23 + -8) = lVal_13;
          }
          local_188._0_8_ = pU64_23;
        }
        local_178._8_8_ = uVal_21;
        local_178._0_8_ = sz_9;
        func_0x1806aa960(pU64_23,pU64_24,sz_9);
        pU64_23[sz_9] = 0;
        pU64_23 = (uint8_t *)func_0x180056aa0(param_1,local_188);
        uVal_1 = *pU64_23;
        *pU64_23 = local_a8;
        uVal_14 = *(uint64_t *)(pU64_23 + 8);
        *(uint64_t *)(pU64_23 + 8) = local_a0;
        local_a8 = uVal_1;
        local_a0 = uVal_14;
        func_0x180084c70(&local_a0);
        ptr4_U64_18 = local_1a8;
        if (0xf < local_190) {
          ptr4_U64_18 = local_1a8[0];
        }
        func_0x1800f2cb0(local_2b8,ptr4_U64_18,0x20,0x40,CONCAT44(uVal_30,1));
        func_0x1806755c0(local_98,4);
        (*(func_ptr_t )local_98._0_8_)(local_2b8 + *(int *)((int64_t)local_2b8 + 4),local_98._8_8_);
        uVal_14 = func_0x18039ebd0(local_2b8,param_1);
        func_0x180103810(uVal_14);
        func_0x180097080(local_2b8);
        lVal_13 = func_0x18008b2b0(&uStack_2b0);
        if (lVal_13 == 0) {
          lVal_13 = (int64_t)*(int *)((int64_t)local_2b8 + 4);
          pU64_17 = (uint64_t *)(uint64_t)*(uint *)(local_2a8 + lVal_13 + 4);
          uVal_8 = *(uint *)(local_2a8 + lVal_13) & 0x15 |
                  (uint)(*(int64_t *)((int64_t)alStack_270 + lVal_13) == 0) << 2 | 2;
          *(uint *)(local_2a8 + lVal_13) = uVal_8;
          uVal_8 = uVal_8 & *(uint *)(local_2a8 + lVal_13 + 4);
          if (uVal_8 != 0) goto LAB_18039cdf1;
        }
        local_98._0_8_ = &DAT_28d478d88fb3dcdf;
        DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
        uVal_21 = DAT_1808401f0;
        uVal_7 = _UNK_1806b75ac;
        uVal_6 = _UNK_1806b75a8;
        uVal_5 = PTR_DAT_1806b75a0._4_4_;
        uVal_30 = PTR_DAT_1806b75a0._0_4_;
        if (DAT_180840a60 == 0) {
          DAT_180840a68 = 0;
        }
        else if (param_2 != '\0') {
          local_98._0_8_ = &DAT_28d0f803f34a0611;
          lVal_13 = DAT_180840a58[0xc9];
          local_2e8 = PTR_DAT_1806b75a0._0_4_;
          uStack_2e4 = PTR_DAT_1806b75a0._4_4_;
          uStack_2e0 = _UNK_1806b75a8;
          uStack_2dc = _UNK_1806b75ac;
          local_e8 = (uint8_t  [16])0x0;
          local_d8 = (uint8_t  [16])0x0;
          pArr16_11 = DAT_1808401e0;
          if (DAT_1808401f8 < 0x10) {
            pArr16_11 = (uint8_t (*)[16])&DAT_1808401e0;
          }
          if ((int64_t)DAT_1808401f0 < 0) goto LAB_18039ce61;
          if (DAT_1808401f0 < 0x10) {
            local_d8._8_8_ = 0xf;
            local_d8._0_8_ = DAT_1808401f0;
            local_e8 = *pArr16_11;
          }
          else {
            uVal_15 = DAT_1808401f0 | 0xf;
            uVal_12 = 0x16;
            if (0x16 < uVal_15) {
              uVal_12 = uVal_15;
            }
            if (uVal_15 < 0xfff) {
              uVal_15 = func_0x180672de0(uVal_12 + 1);
            }
            else {
              lVal_16 = func_0x180672de0(uVal_12 + 0x28);
              uVal_15 = lVal_16 + 0x27U & 0xffffffffffffffe0;
              *(int64_t *)(uVal_15 - 8) = lVal_16;
            }
            local_e8._0_8_ = uVal_15;
            local_d8._8_8_ = uVal_12;
            local_d8._0_8_ = uVal_21;
            func_0x1806aa960(uVal_15,pArr16_11,uVal_21 + 1);
          }
          local_2d8 = PTR_DAT_1806c97c8._0_4_;
          uStack_2d4 = PTR_DAT_1806c97c8._4_4_;
          uStack_2d0 = _UNK_1806c97d0;
          uStack_2cc = _UNK_1806c97d4;
          local_2c8 = uVal_30;
          uStack_2c4 = uVal_5;
          uStack_2c0 = uVal_6;
          iStack_2bc = uVal_7;
          local_88 = CONCAT44(_UNK_1806cb4aa,_DAT_1806cb4a6);
          uStack_80 = CONCAT44(_UNK_1806cb4b2,_UNK_1806cb4ae);
          local_98._0_8_ = _DAT_1806cb496;
          local_98._8_8_ = _UNK_1806cb49e;
          local_78 = 0xbb6ea6ee;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11fc8
                       ) == '\0') {
            lVal_16 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_16 + 0x11fc8) = 1;
            func_0x180086790(lVal_16 + 0x11fa1,local_98);
            func_0x180673140(&LAB_18042e540);
          }
          fnPtr_19 = (char *)(*(int64_t *)
                              ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                            0x11fa1);
          func_0x1800a5e40(fnPtr_19);
          _local_c8 = (uint8_t  [16])0x0;
          sz_9 = strlen(fnPtr_19);
          if ((int64_t)sz_9 < 0) goto LAB_18039ce67;
          if (sz_9 < 0x10) {
            pU64_23 = local_c8;
            uVal_21 = 0xf;
          }
          else {
            uVal_12 = sz_9 | 0xf;
            uVal_21 = 0x16;
            if (0x16 < uVal_12) {
              uVal_21 = uVal_12;
            }
            if (uVal_12 < 0xfff) {
              local_64 = 1;
              pU64_23 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
            }
            else {
              local_64 = 1;
              lVal_16 = func_0x180672de0(uVal_21 + 0x28);
              pU64_23 = (uint8_t *)(lVal_16 + 0x27U & 0xffffffffffffffe0);
              *(int64_t *)(pU64_23 + -8) = lVal_16;
            }
            local_c8 = (uint8_t  [8])pU64_23;
          }
          local_b8 = sz_9;
          local_b0 = uVal_21;
          func_0x1806aa960(pU64_23,fnPtr_19,sz_9);
          pU64_23[sz_9] = 0;
          func_0x18039d6f0(lVal_13,local_c8,&local_2c8,&local_2d8,local_e8,&local_2e8);
          if (0xf < local_b0) {
            uVal_21 = local_b0 + 1;
            lVal_13 = (int64_t)local_c8;
            if (0xfff < uVal_21) {
              lVal_13 = *(int64_t *)((int64_t)local_c8 + -8);
              if (0x1f < (uint64_t)(((int64_t)local_c8 + -8) - lVal_13)) goto LAB_18039cdc2;
              uVal_21 = local_b0 + 0x28;
            }
            thunk_FUN_180695dd0(lVal_13,uVal_21);
          }
        }
        *(uint8_t ***)(local_2b8 + *(int *)((int64_t)local_2b8 + 4)) = &PTR_LAB_1806b3a48;
        *(int *)(local_2b8 + (int64_t)*(int *)((int64_t)local_2b8 + 4) + -4) =
             *(int *)((int64_t)local_2b8 + 4) + -0xa8;
        func_0x18008b1c0(&uStack_2b0);
        local_210[0] = &PTR_LAB_1806b0288;
        func_0x180673810(local_210);
        if (0xf < local_150) {
          uVal_21 = local_150 + 1;
          lVal_13 = local_168._0_8_;
          if (0xfff < uVal_21) {
            lVal_13 = *(int64_t *)(local_168._0_8_ + -8);
            if (0x1f < (uint64_t)((local_168._0_8_ + -8) - lVal_13)) goto LAB_18039cdc2;
            uVal_21 = local_150 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_21);
        }
        if (0xf < local_190) {
          uVal_21 = local_190 + 1;
          ptr4_U64_18 = local_1a8[0];
          if (0xfff < uVal_21) {
            ptr4_U64_18 = (uint64_t ****)local_1a8[0][-1];
            if (0x1f < (uint64_t)((int64_t)local_1a8[0] + (-8 - (int64_t)ptr4_U64_18)))
            goto LAB_18039cdc2;
            uVal_21 = local_190 + 0x28;
          }
          thunk_FUN_180695dd0(ptr4_U64_18,uVal_21);
        }
        return;
      }
    }
  }
  func_0x18007ba70();
LAB_18039cdc2:
  do {
    invalidInstructionException();
  } while( true );
}

// Unwind@18039ce80
void Unwind_18039ce80(void)
{
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1808400b8);
  return;
}

// Unwind@18039ced0
void Unwind_18039ced0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18039cf10
void Unwind_18039cf10(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x280);
  return;
}

// Unwind@18039cf60
void Unwind_18039cf60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  *(uint8_t *)(param_2 + 0x2b7) = 0;
  return;
}

// Unwind@18039cfb0
void Unwind_18039cfb0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x2b7) == '\x01') {
    func_0x180001e70(param_2 + 0x1d0);
  }
  return;
}

// Unwind@18039d000
void Unwind_18039d000(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  *(uint8_t *)(param_2 + 0x2b6) = 0;
  return;
}

// Unwind@18039d050
void Unwind_18039d050(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x2b6);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x210);
  }
  *(char *)(param_2 + 0x2b5) = ch_1;
  return;
}

// Unwind@18039d0b0
void Unwind_18039d0b0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x2b5) == '\x01') {
    func_0x180001e70(param_2 + 0x1f0);
  }
  return;
}

// Unwind@18039d100
void Unwind_18039d100(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x270);
  return;
}

// Unwind@18039d150
void Unwind_18039d150(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x250);
  *(uint8_t *)(param_2 + 0x2b4) = 0;
  return;
}

// Unwind@18039d1a0
void Unwind_18039d1a0(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x2b4) == '\x01') {
    func_0x180001e70(param_2 + 0x230);
  }
  return;
}

// Unwind@18039d1f0
void Unwind_18039d1f0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18039d220
void Unwind_18039d220(uint64_t param_1,int64_t param_2)
{
  func_0x1800c22f0(param_2 + 0x60);
  return;
}

// Unwind@18039d260
void Unwind_18039d260(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x1b0);
  return;
}

// Unwind@18039d2b0
void Unwind_18039d2b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x170);
  return;
}

// Unwind@18039d300
void Unwind_18039d300(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11f80) = 0;
  *(uint8_t *)(param_2 + 0x2b7) = 1;
  return;
}

// Unwind@18039d360
void Unwind_18039d360(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11f94) = 0;
  *(uint8_t *)(param_2 + 0x2b6) = 1;
  return;
}

// Unwind@18039d3c0
void Unwind_18039d3c0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18039d3f0
void Unwind_18039d3f0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11fc8) = 0;
  *(uint8_t *)(param_2 + 0x2b4) = 1;
  return;
}

// func_0x18039d450
void func_0x18039d450(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint64_t param_4, uint32_t *param_5,int64_t **param_6,uint32_t *param_7)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  uint32_t local_a8;
  uint32_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint64_t local_98;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  int64_t **local_78;
  int64_t *local_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  int64_t local_58 [3];
  uint64_t local_40;
  uint64_t local_38;
  uint32_t *local_30;
  uint64_t *local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_88 = *param_5;
  uStack_84 = param_5[1];
  uStack_80 = param_5[2];
  uStack_7c = param_5[3];
  local_70 = param_6[2];
  local_78 = param_6;
  if (&DAT_0000000f < param_6[3]) {
    local_78 = (int64_t **)*param_6;
  }
  local_68 = *param_7;
  uStack_64 = param_7[1];
  uStack_60 = param_7[2];
  uStack_5c = param_7[3];
  local_38 = 0xdddcd;
  local_30 = &local_a8;
  local_28 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_28 = (uint64_t *)*param_2;
  }
  local_20 = param_2[2];
  local_98 = param_4;
  func_0x18063ff10(local_58,&local_28,&local_38);
  func_0x180116b80(param_1,local_58);
  if (0xf < local_40) {
    uVal_3 = local_40 + 1;
    lVal_4 = local_58[0];
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(local_58[0] + -8);
      if (0x1f < (uint64_t)((local_58[0] + -8) - lVal_4)) goto LAB_18039d57a;
      uVal_3 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  pLong_1 = param_6[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_6;
    pLong_6 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_5 = pLong_2;
    if ((int64_t *)0xfff < pLong_6) {
      pLong_5 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_5))) {
LAB_18039d57a:
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_6 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_5,pLong_6);
  }
  return;
}

// Unwind@18039d580
void Unwind_18039d580(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x70);
  return;
}

// Unwind@18039d5b0
void Unwind_18039d5b0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xf8));
  return;
}

// func_0x18039d5e0
void func_0x18039d5e0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t *param_4, uint8_t param_5,uint32_t *param_6)
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
  uint8_t local_80;
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
  local_80 = param_5;
  local_70 = *param_6;
  uStack_6c = param_6[1];
  uStack_68 = param_6[2];
  uStack_64 = param_6[3];
  local_40 = 0xd8dd;
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

// Unwind@18039d6c0
void Unwind_18039d6c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x68);
  return;
}

// func_0x18039d6f0
void func_0x18039d6f0(uint64_t param_1,uint64_t *param_2,uint32_t *param_3,uint32_t *param_4, int64_t **param_5,uint32_t *param_6)
{
  int64_t *pLong_1;
  int64_t *pLong_2;
  uint64_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  int64_t *pLong_6;
  uint32_t local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint32_t local_88;
  uint32_t uStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  int64_t **local_78;
  int64_t *local_70;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  int64_t local_58 [3];
  uint64_t local_40;
  uint64_t local_38;
  uint32_t *local_30;
  uint64_t *local_28;
  uint64_t local_20;
  uint64_t local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_98 = *param_3;
  uStack_94 = param_3[1];
  uStack_90 = param_3[2];
  uStack_8c = param_3[3];
  local_88 = *param_4;
  uStack_84 = param_4[1];
  uStack_80 = param_4[2];
  uStack_7c = param_4[3];
  local_70 = param_5[2];
  local_78 = param_5;
  if (&DAT_0000000f < param_5[3]) {
    local_78 = (int64_t **)*param_5;
  }
  local_68 = *param_6;
  uStack_64 = param_6[1];
  uStack_60 = param_6[2];
  uStack_5c = param_6[3];
  local_38 = 0xdddd;
  local_30 = &local_98;
  local_28 = param_2;
  if (0xf < (uint64_t)param_2[3]) {
    local_28 = (uint64_t *)*param_2;
  }
  local_20 = param_2[2];
  func_0x18063ff10(local_58,&local_28,&local_38);
  func_0x180116b80(param_1,local_58);
  if (0xf < local_40) {
    uVal_3 = local_40 + 1;
    lVal_4 = local_58[0];
    if (0xfff < uVal_3) {
      lVal_4 = *(int64_t *)(local_58[0] + -8);
      if (0x1f < (uint64_t)((local_58[0] + -8) - lVal_4)) goto LAB_18039d80f;
      uVal_3 = local_40 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_4,uVal_3);
  }
  pLong_1 = param_5[3];
  if (&DAT_0000000f < pLong_1) {
    pLong_2 = *param_5;
    pLong_6 = (int64_t *)((int64_t)pLong_1 + 1);
    pLong_5 = pLong_2;
    if ((int64_t *)0xfff < pLong_6) {
      pLong_5 = (int64_t *)pLong_2[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_2 + (-8 - (int64_t)pLong_5))) {
LAB_18039d80f:
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_6 = pLong_1 + 5;
    }
    thunk_FUN_180695dd0(pLong_5,pLong_6);
  }
  return;
}

// Unwind@18039d820
void Unwind_18039d820(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18039d850
void Unwind_18039d850(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0xe0));
  return;
}

// func_0x18039d880
void func_0x18039d880(uint64_t *param_1,int64_t **param_2)
{
  int iVal_1;
  int64_t *pLong_2;
  int64_t *pLong_3;
  int64_t lVal_4;
  int64_t **ptr2_Long_5;
  uint32_t uVal_6;
  uint64_t uVal_7;
  uint64_t ****ptr4_U64_8;
  int64_t *pLong_9;
  int64_t *pLong_10;
  int64_t **local_128;
  int64_t *local_120;
  uint8_t local_c8 [16];
  uint64_t local_b8;
  uint64_t ****local_b0;
  uint64_t local_a8;
  int64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  int64_t ***local_88;
  uint64_t *local_80;
  uint64_t local_78;
  uint64_t ****local_70 [2];
  uint64_t local_60;
  uint64_t local_58;
  int64_t **local_50;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_120 = param_2[2];
  local_128 = param_2;
  if (&DAT_0000000f < param_2[3]) {
    local_128 = (int64_t **)*param_2;
  }
  local_90 = 0xd;
  local_88 = &local_128;
  local_80 = param_1;
  if (0xf < (uint64_t)param_1[3]) {
    local_80 = (uint64_t *)*param_1;
  }
  local_78 = param_1[2];
  local_50 = param_2;
  func_0x18063ff10(local_70,&local_80,&local_90);
  uVal_7 = local_58;
  ptr4_U64_8 = local_70[0];
  lVal_4 = DAT_18083ed00;
  iVal_1 = *(int *)(DAT_18083ed00 + 0x40);
  uVal_6 = func_0x1806520c0(DAT_18083ed00 + 0x88);
  if ((2 < iVal_1 & ((byte)uVal_6 ^ 1)) == 0) {
    local_b0 = local_70;
    if (0xf < uVal_7) {
      local_b0 = ptr4_U64_8;
    }
    local_a8 = local_60;
    if (*(uint64_t *)(lVal_4 + 0x20) < 0x10) {
      local_a0 = lVal_4 + 8;
    }
    else {
      local_a0 = *(int64_t *)(lVal_4 + 8);
    }
    local_98 = *(uint64_t *)(lVal_4 + 0x18);
    local_c8 = ZEXT816(0);
    local_b8 = 0;
    func_0x180652c00(&local_128,local_c8,&local_a0,2,&local_b0);
    func_0x180654f40(lVal_4,&local_128,iVal_1 < 3,uVal_6);
  }
  ptr2_Long_5 = local_50;
  if (0xf < local_58) {
    uVal_7 = local_58 + 1;
    ptr4_U64_8 = local_70[0];
    if (0xfff < uVal_7) {
      ptr4_U64_8 = (uint64_t ****)local_70[0][-1];
      if (0x1f < (uint64_t)((int64_t)local_70[0] + (-8 - (int64_t)ptr4_U64_8)))
      goto LAB_18039da46;
      uVal_7 = local_58 + 0x28;
    }
    thunk_FUN_180695dd0(ptr4_U64_8,uVal_7);
  }
  pLong_2 = ptr2_Long_5[3];
  if (&DAT_0000000f < pLong_2) {
    pLong_3 = *ptr2_Long_5;
    pLong_10 = (int64_t *)((int64_t)pLong_2 + 1);
    pLong_9 = pLong_3;
    if ((int64_t *)0xfff < pLong_10) {
      pLong_9 = (int64_t *)pLong_3[-1];
      if (0x1f < (uint64_t)((int64_t)pLong_3 + (-8 - (int64_t)pLong_9))) {
LAB_18039da46:
        do {
          invalidInstructionException();
        } while( true );
      }
      pLong_10 = pLong_2 + 5;
    }
    thunk_FUN_180695dd0(pLong_9,pLong_10);
  }
  return;
}

// Unwind@18039da50
void Unwind_18039da50(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xe8);
  return;
}

// Unwind@18039da90
void Unwind_18039da90(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(*(uint64_t *)(param_2 + 0x108));
  return;
}

// func_0x18039dad0
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18039dad0(char *param_1)
{
  uint64_t *pU64_1;
  char ch_2;
  uint8_t (*pArr16_3)[16];
  uint64_t uVal_4;
  func_ptr_t fnPtr_5;
  bool bFlag_6;
  uint8_t (**ptr2_Arr16_7)[16];
  uint *_Str;
  size_t sz_8;
  int64_t lVal_9;
  uint64_t uVal_10;
  int64_t lVal_11;
  uint64_t uVal_12;
  uint8_t *pU64_13;
  uint8_t (*pArr16_14)[16];
  uint64_t uVal_15;
  uint8_t (**ptr2_Arr16_16)[16];
  char *fnPtr_17;
  bool bFlag_18;
  uint8_t *local_128;
  uint *local_120;
  uint *local_118;
  uint *local_110;
  uint *local_108;
  char *local_100;
  uint8_t local_f8 [8];
  uint64_t local_f0;
  uint8_t local_e8 [16];
  uint8_t local_d8 [32];
  uint8_t local_b8 [8];
  uint64_t local_b0;
  uint8_t local_a8 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [24];
  uint64_t local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x13fa0) == '\0') {
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_9 + 0x13fa0) = 1;
    *(uint64_t *)(lVal_9 + 0x13f98) = 0x15751be25b41fa0;
    func_0x180673140(&LAB_180435930);
  }
  lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  pU64_1 = (uint64_t *)(lVal_9 + 0x13f98);
  if (*(char *)(lVal_9 + 0x13f9f) == '\x01') {
    *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_9 + 0x13f9d) << 8,*(uint32_t *)pU64_1) |
              (uint64_t)*(byte *)(lVal_9 + 0x13f9c) << 0x20) ^ SUB168(_DAT_1806c8650,0);
  }
  local_e8 = (uint8_t  [16])0x0;
  sz_8 = strlen((char *)pU64_1);
  if ((int64_t)sz_8 < 0) {
LAB_18039e913:
    func_0x18007ba70();
  }
  else {
    if (sz_8 < 0x10) {
      pU64_13 = local_e8;
      uVal_15 = 0xf;
    }
    else {
      uVal_12 = sz_8 | 0xf;
      uVal_15 = 0x16;
      if (0x16 < uVal_12) {
        uVal_15 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
      }
      else {
        lVal_9 = func_0x180672de0(uVal_15 + 0x28);
        pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_13 + -8) = lVal_9;
      }
      local_e8._0_8_ = pU64_13;
    }
    local_d8._8_8_ = uVal_15;
    local_d8._0_8_ = sz_8;
    func_0x1806aa960(pU64_13,pU64_1,sz_8);
    pU64_13[sz_8] = 0;
    if (*param_1 == '\x01') {
      lVal_9 = func_0x1800a5e70(*(uint64_t *)(param_1 + 8),local_e8);
      bFlag_18 = lVal_9 != **(int64_t **)(param_1 + 8);
      bFlag_6 = bFlag_18;
      if ((uint64_t)local_d8._8_8_ < 0x10) goto LAB_18039dc23;
LAB_18039dc39:
      uVal_15 = local_d8._8_8_ + 1;
      lVal_9 = local_e8._0_8_;
      if (0xfff < uVal_15) {
        lVal_9 = *(int64_t *)(local_e8._0_8_ + -8);
        if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_9)) goto LAB_18039e8f9;
        uVal_15 = local_d8._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(lVal_9,uVal_15);
      if (bFlag_6) goto LAB_18039dc77;
    }
    else {
      bFlag_6 = false;
      bFlag_18 = false;
      if (0xf < (uint64_t)local_d8._8_8_) goto LAB_18039dc39;
LAB_18039dc23:
      if (bFlag_18) {
LAB_18039dc77:
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x13fb0) == '\0') {
          lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_9 + 0x13fb0) = 1;
          *(uint64_t *)(lVal_9 + 0x13fa8) = 0x1fd69587bb08b46;
          func_0x180673140(&LAB_180435960);
        }
        lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
        pU64_1 = (uint64_t *)(lVal_9 + 0x13fa8);
        if (*(char *)(lVal_9 + 0x13faf) == '\x01') {
          *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_9 + 0x13fad) << 8,*(uint32_t *)pU64_1) |
                    (uint64_t)*(byte *)(lVal_9 + 0x13fac) << 0x20) ^ SUB168(_DAT_1806c8660,0);
        }
        local_d8._0_16_ = (uint8_t  [16])0x0;
        local_e8 = (uint8_t  [16])0x0;
        sz_8 = strlen((char *)pU64_1);
        if ((int64_t)sz_8 < 0) goto LAB_18039e913;
        if (sz_8 < 0x10) {
          pU64_13 = local_e8;
          uVal_15 = 0xf;
        }
        else {
          uVal_12 = sz_8 | 0xf;
          uVal_15 = 0x16;
          if (0x16 < uVal_12) {
            uVal_15 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
          }
          else {
            lVal_9 = func_0x180672de0(uVal_15 + 0x28);
            pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_13 + -8) = lVal_9;
          }
          local_e8._0_8_ = pU64_13;
        }
        local_d8._8_8_ = uVal_15;
        local_d8._0_8_ = sz_8;
        func_0x1806aa960(pU64_13,pU64_1,sz_8);
        pU64_13[sz_8] = 0;
        func_0x1801bce30(param_1,local_e8);
        if (0xf < (uint64_t)local_d8._8_8_) {
          uVal_15 = local_d8._8_8_ + 1;
          lVal_9 = local_e8._0_8_;
          if (0xfff < uVal_15) {
            lVal_9 = *(int64_t *)(local_e8._0_8_ + -8);
            if (0x1f < (uint64_t)((local_e8._0_8_ + -8) - lVal_9)) goto LAB_18039e8f9;
            uVal_15 = local_d8._8_8_ + 0x28;
          }
          thunk_FUN_180695dd0(lVal_9,uVal_15);
        }
      }
    }
    ptr2_Arr16_7 = DAT_18083e6f8;
    local_b8[0] = 0;
    local_b0 = 0;
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    local_120 = (uint *)(lVal_9 + 0x13fb4);
    local_118 = (uint *)(lVal_9 + 0x13fc0);
    local_110 = (uint *)(lVal_9 + 0x13fcc);
    local_108 = (uint *)(lVal_9 + 0x13fd8);
    local_100 = param_1;
    for (ptr2_Arr16_16 = DAT_18083e6f0; ptr2_Arr16_16 != ptr2_Arr16_7; ptr2_Arr16_16 = ptr2_Arr16_16 + 1) {
      pArr16_3 = *ptr2_Arr16_16;
      local_98 = ZEXT816(0);
      local_a8 = ZEXT816(0);
      pArr16_14 = pArr16_3;
      if (0xf < *(uint64_t *)(pArr16_3[1] + 8)) {
        pArr16_14 = *(uint8_t (**)[16])*pArr16_3;
      }
      uVal_15 = *(uint64_t *)pArr16_3[1];
      if ((int64_t)uVal_15 < 0) {
        func_0x18007ba70();
        goto LAB_18039e8f9;
      }
      if (uVal_15 < 0x10) {
        local_98._8_8_ = 0xf;
        local_98._0_8_ = uVal_15;
        local_a8 = *pArr16_14;
      }
      else {
        uVal_10 = uVal_15 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_10) {
          uVal_12 = uVal_10;
        }
        if (uVal_10 < 0xfff) {
          uVal_10 = func_0x180672de0(uVal_12 + 1);
        }
        else {
          lVal_9 = func_0x180672de0(uVal_12 + 0x28);
          uVal_10 = lVal_9 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_10 - 8) = lVal_9;
        }
        local_a8._0_8_ = uVal_10;
        local_98._8_8_ = uVal_12;
        local_98._0_8_ = uVal_15;
        func_0x1806aa960(uVal_10,pArr16_14,uVal_15 + 1);
      }
      local_f8[0] = 0;
      local_f0 = 0;
      if (*(uint *)pArr16_3[4] < 9) {
        switch(*(uint *)pArr16_3[4]) {
        case 0:
          local_88._0_8_ = local_a8;
          if (0xf < (uint64_t)local_98._8_8_) {
            local_88._0_8_ = local_a8._0_8_;
          }
          func_0x1801d9bd0(local_b8,local_e8,local_88,*(uint64_t *)(pArr16_3[4] + 8));
          break;
        case 1:
          local_88._0_8_ = local_a8;
          if (0xf < (uint64_t)local_98._8_8_) {
            local_88._0_8_ = local_a8._0_8_;
          }
          func_0x1801d9d70(local_b8,local_e8,local_88,*(uint64_t *)(pArr16_3[4] + 8));
          break;
        case 2:
          local_88._0_8_ = local_a8;
          if (0xf < (uint64_t)local_98._8_8_) {
            local_88._0_8_ = local_a8._0_8_;
          }
          func_0x1801d9f10(local_b8,local_e8,local_88,*(uint64_t *)(pArr16_3[4] + 8));
          break;
        default:
          local_88._0_8_ = local_a8;
          if (0xf < (uint64_t)local_98._8_8_) {
            local_88._0_8_ = local_a8._0_8_;
          }
          func_0x1801da0b0(local_b8,local_e8,local_88,*(uint64_t *)(pArr16_3[4] + 8));
          break;
        case 4:
          uVal_4 = *(uint64_t *)(pArr16_3[4] + 8);
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x13fbc
                       ) == '\0') {
            lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_9 + 0x13fbc) = 1;
            *(uint8_t *)(lVal_9 + 0x13fb8) = 1;
            *(uint32_t *)(lVal_9 + 0x13fb4) = 0x5987f44d;
            func_0x180673140(&LAB_180435990);
            ch_2 = *(char *)(local_120 + 1);
          }
          else {
            ch_2 = *(char *)(local_120 + 1);
          }
          if (ch_2 == '\x01') {
            *local_120 = *local_120 ^ 0x59e3913f;
            *(uint8_t *)(local_120 + 1) = 0;
          }
          local_78._0_16_ = ZEXT816(0);
          local_88 = ZEXT816(0);
          sz_8 = strlen((char *)local_120);
          if (-1 < (int64_t)sz_8) {
            uVal_15 = 0xf;
            pU64_13 = local_88;
            if (0xf < sz_8) {
              uVal_12 = sz_8 | 0xf;
              uVal_15 = 0x16;
              if (0x16 < uVal_12) {
                uVal_15 = uVal_12;
              }
              if (uVal_12 < 0xfff) {
                pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
              }
              else {
                lVal_9 = func_0x180672de0(uVal_15 + 0x28);
                pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_13 + -8) = lVal_9;
              }
              local_88._0_8_ = pU64_13;
            }
            local_78._0_8_ = sz_8;
            local_78._8_8_ = uVal_15;
            func_0x1806aa960(pU64_13,local_120,sz_8);
            pU64_13[sz_8] = 0;
            func_0x180136960(local_f8,local_e8,local_88,uVal_4);
            if (0xf < (uint64_t)local_78._8_8_) {
              uVal_15 = local_78._8_8_ + 1;
              lVal_9 = local_88._0_8_;
              if (0xfff < uVal_15) {
                lVal_9 = *(int64_t *)(local_88._0_8_ + -8);
                if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_9)) goto LAB_18039e8f9;
                uVal_15 = local_78._8_8_ + 0x28;
              }
              thunk_FUN_180695dd0(lVal_9,uVal_15);
            }
            lVal_9 = *(int64_t *)(pArr16_3[4] + 8);
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x13fc8) == '\0') {
              lVal_11 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_11 + 0x13fc8) = 1;
              *(uint8_t *)(lVal_11 + 0x13fc6) = 1;
              *(uint32_t *)(lVal_11 + 0x13fc0) = 0x709ec7e4;
              *(uint16_t *)(lVal_11 + 0x13fc4) = 0xd503;
              func_0x180673140(&LAB_1804359b0);
              ch_2 = *(char *)((int64_t)local_118 + 6);
            }
            else {
              ch_2 = *(char *)((int64_t)local_118 + 6);
            }
            if (ch_2 == '\x01') {
              *local_118 = *local_118 ^ 0x15fbb583;
              *(byte *)(local_118 + 1) = *(byte *)(local_118 + 1) ^ 0x6d;
              *(byte *)((int64_t)local_118 + 5) = *(byte *)((int64_t)local_118 + 5) ^ 0xd5;
              *(uint8_t *)((int64_t)local_118 + 6) = 0;
            }
            local_78._0_16_ = ZEXT816(0);
            local_88 = ZEXT816(0);
            sz_8 = strlen((char *)local_118);
            if (-1 < (int64_t)sz_8) {
              uVal_15 = 0xf;
              pU64_13 = local_88;
              if (0xf < sz_8) {
                uVal_12 = sz_8 | 0xf;
                uVal_15 = 0x16;
                if (0x16 < uVal_12) {
                  uVal_15 = uVal_12;
                }
                if (uVal_12 < 0xfff) {
                  pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
                }
                else {
                  lVal_11 = func_0x180672de0(uVal_15 + 0x28);
                  pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_13 + -8) = lVal_11;
                }
                local_88._0_8_ = pU64_13;
              }
              local_78._0_8_ = sz_8;
              local_78._8_8_ = uVal_15;
              func_0x1806aa960(pU64_13,local_118,sz_8);
              pU64_13[sz_8] = 0;
              func_0x180136960(local_f8,local_e8,local_88,lVal_9 + 4);
              if (0xf < (uint64_t)local_78._8_8_) {
                uVal_15 = local_78._8_8_ + 1;
                lVal_9 = local_88._0_8_;
                if (0xfff < uVal_15) {
                  lVal_9 = *(int64_t *)(local_88._0_8_ + -8);
                  if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_9)) goto LAB_18039e8f9;
                  uVal_15 = local_78._8_8_ + 0x28;
                }
                thunk_FUN_180695dd0(lVal_9,uVal_15);
              }
              lVal_9 = *(int64_t *)(pArr16_3[4] + 8);
              if (*(char *)(*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                           0x13fd4) == '\0') {
                lVal_11 = *(int64_t *)
                          ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                *(uint8_t *)(lVal_11 + 0x13fd4) = 1;
                *(uint32_t *)(lVal_11 + 0x13fcc) = 0xfe2a9d2b;
                *(uint16_t *)(lVal_11 + 0x13fd0) = 0x181;
                func_0x180673140(&LAB_1804359e0);
                ch_2 = *(char *)((int64_t)local_110 + 5);
              }
              else {
                ch_2 = *(char *)((int64_t)local_110 + 5);
              }
              if (ch_2 == '\x01') {
                *local_110 = *local_110 ^ 0x9b5ff149;
                *(byte *)(local_110 + 1) = *(byte *)(local_110 + 1) ^ 0x81;
                *(uint8_t *)((int64_t)local_110 + 5) = 0;
              }
              local_78._0_16_ = ZEXT816(0);
              local_88 = ZEXT816(0);
              sz_8 = strlen((char *)local_110);
              if (-1 < (int64_t)sz_8) {
                uVal_15 = 0xf;
                pU64_13 = local_88;
                if (0xf < sz_8) {
                  uVal_12 = sz_8 | 0xf;
                  uVal_15 = 0x16;
                  if (0x16 < uVal_12) {
                    uVal_15 = uVal_12;
                  }
                  if (uVal_12 < 0xfff) {
                    pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
                  }
                  else {
                    lVal_11 = func_0x180672de0(uVal_15 + 0x28);
                    pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
                    *(int64_t *)(pU64_13 + -8) = lVal_11;
                  }
                  local_88._0_8_ = pU64_13;
                }
                local_78._0_8_ = sz_8;
                local_78._8_8_ = uVal_15;
                func_0x1806aa960(pU64_13,local_110,sz_8);
                pU64_13[sz_8] = 0;
                func_0x180136960(local_f8,local_e8,local_88,lVal_9 + 8);
                _Str = local_108;
                if (0xf < (uint64_t)local_78._8_8_) {
                  uVal_15 = local_78._8_8_ + 1;
                  lVal_9 = local_88._0_8_;
                  if (0xfff < uVal_15) {
                    lVal_9 = *(int64_t *)(local_88._0_8_ + -8);
                    if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_9)) goto LAB_18039e8f9;
                    uVal_15 = local_78._8_8_ + 0x28;
                  }
                  thunk_FUN_180695dd0(lVal_9,uVal_15);
                }
                lVal_9 = *(int64_t *)(pArr16_3[4] + 8);
                if (*(char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x13fe0) == '\0') {
                  lVal_11 = *(int64_t *)
                            ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
                  *(uint8_t *)(lVal_11 + 0x13fe0) = 1;
                  *(uint8_t *)(lVal_11 + 0x13fde) = 1;
                  *(uint32_t *)(lVal_11 + 0x13fd8) = 0x337735e2;
                  *(uint16_t *)(lVal_11 + 0x13fdc) = 0x258a;
                  func_0x180673140(&LAB_180435a10);
                  ch_2 = *(char *)((int64_t)_Str + 6);
                }
                else {
                  ch_2 = *(char *)((int64_t)_Str + 6);
                }
                if (ch_2 == '\x01') {
                  *_Str = *_Str ^ 0x5b075983;
                  *(byte *)(_Str + 1) = *(byte *)(_Str + 1) ^ 0xeb;
                  *(byte *)((int64_t)_Str + 5) = *(byte *)((int64_t)_Str + 5) ^ 0x25;
                  *(uint8_t *)((int64_t)_Str + 6) = 0;
                }
                local_78._0_16_ = ZEXT816(0);
                local_88 = ZEXT816(0);
                sz_8 = strlen((char *)_Str);
                if (-1 < (int64_t)sz_8) {
                  uVal_15 = 0xf;
                  pU64_13 = local_88;
                  if (0xf < sz_8) {
                    uVal_12 = sz_8 | 0xf;
                    uVal_15 = 0x16;
                    if (0x16 < uVal_12) {
                      uVal_15 = uVal_12;
                    }
                    if (uVal_12 < 0xfff) {
                      pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
                    }
                    else {
                      lVal_11 = func_0x180672de0(uVal_15 + 0x28);
                      pU64_13 = (uint8_t *)(lVal_11 + 0x27U & 0xffffffffffffffe0);
                      *(int64_t *)(pU64_13 + -8) = lVal_11;
                    }
                    local_88._0_8_ = pU64_13;
                  }
                  local_78._8_8_ = uVal_15;
                  local_78._0_8_ = sz_8;
                  func_0x1806aa960(pU64_13,local_108,sz_8);
                  pU64_13[sz_8] = 0;
                  func_0x180136960(local_f8,local_e8,local_88,lVal_9 + 0xc);
                  if (0xf < (uint64_t)local_78._8_8_) {
                    uVal_15 = local_78._8_8_ + 1;
                    lVal_9 = local_88._0_8_;
                    if (0xfff < uVal_15) {
                      lVal_9 = *(int64_t *)(local_88._0_8_ + -8);
                      if (0x1f < (uint64_t)((local_88._0_8_ + -8) - lVal_9)) goto LAB_18039e8f9;
                      uVal_15 = local_78._8_8_ + 0x28;
                    }
                    thunk_FUN_180695dd0(lVal_9,uVal_15);
                  }
                  local_88._0_8_ = local_a8;
                  if (0xf < (uint64_t)local_98._8_8_) {
                    local_88._0_8_ = local_a8._0_8_;
                  }
                  func_0x180136b00(local_b8,local_e8,local_88,local_f8);
                  break;
                }
                func_0x18007ba70();
              }
              func_0x18007ba70();
            }
            func_0x18007ba70();
          }
          func_0x18007ba70();
          goto LAB_18039e913;
        case 5:
          local_88._0_8_ = local_a8;
          if (0xf < (uint64_t)local_98._8_8_) {
            local_88._0_8_ = local_a8._0_8_;
          }
          func_0x1801da250(local_b8,local_e8,local_88,*(uint64_t *)(pArr16_3[4] + 8));
          break;
        case 6:
          local_88._0_8_ = *(uint64_t *)(pArr16_3[4] + 8);
          if (0xf < *(uint64_t *)(local_88._0_8_ + 0x18)) {
            local_88._0_8_ = *(uint64_t *)local_88._0_8_;
          }
          local_128 = local_a8;
          if (0xf < (uint64_t)local_98._8_8_) {
            local_128 = (uint8_t *)local_a8._0_8_;
          }
          func_0x18018c230(local_b8,local_e8,&local_128,local_88);
          break;
        case 7:
          local_88._0_8_ = local_a8;
          if (0xf < (uint64_t)local_98._8_8_) {
            local_88._0_8_ = local_a8._0_8_;
          }
          func_0x1801da0b0(local_b8,local_e8,local_88,*(uint64_t *)(pArr16_3[4] + 8));
        }
      }
      func_0x180084c70(&local_f0,local_f8[0]);
      if (0xf < (uint64_t)local_98._8_8_) {
        uVal_15 = local_98._8_8_ + 1;
        lVal_9 = local_a8._0_8_;
        if (0xfff < uVal_15) {
          lVal_9 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_9)) goto LAB_18039e8f9;
          uVal_15 = local_98._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_9,uVal_15);
      }
    }
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x13ff0) == '\0') {
      lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_9 + 0x13ff0) = 1;
      *(uint64_t *)(lVal_9 + 0x13fe8) = 0x1e32dfed128416e;
      func_0x180673140(&LAB_180435a40);
    }
    fnPtr_17 = local_100;
    lVal_9 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    pU64_1 = (uint64_t *)(lVal_9 + 0x13fe8);
    if (*(char *)(lVal_9 + 0x13fef) == '\x01') {
      *pU64_1 = (CONCAT44((uint)*(ushort *)(lVal_9 + 0x13fed) << 8,*(uint32_t *)pU64_1) |
                (uint64_t)*(byte *)(lVal_9 + 0x13fec) << 0x20) ^ SUB168(_DAT_1806c8670,0);
    }
    local_98 = (uint8_t  [16])0x0;
    local_a8 = (uint8_t  [16])0x0;
    sz_8 = strlen((char *)pU64_1);
    if (-1 < (int64_t)sz_8) {
      if (sz_8 < 0x10) {
        pU64_13 = local_a8;
        uVal_15 = 0xf;
      }
      else {
        uVal_12 = sz_8 | 0xf;
        uVal_15 = 0x16;
        if (0x16 < uVal_12) {
          uVal_15 = uVal_12;
        }
        if (uVal_12 < 0xfff) {
          pU64_13 = (uint8_t *)func_0x180672de0(uVal_15 + 1);
        }
        else {
          lVal_9 = func_0x180672de0(uVal_15 + 0x28);
          pU64_13 = (uint8_t *)(lVal_9 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_13 + -8) = lVal_9;
        }
        local_a8._0_8_ = pU64_13;
        fnPtr_17 = local_100;
      }
      local_98._0_8_ = sz_8;
      local_98._8_8_ = uVal_15;
      func_0x1806aa960(pU64_13,pU64_1,sz_8);
      pU64_13[sz_8] = 0;
      func_0x18018c3d0(fnPtr_17,local_e8,local_a8,local_b8);
      if (0xf < (uint64_t)local_98._8_8_) {
        uVal_15 = local_98._8_8_ + 1;
        lVal_9 = local_a8._0_8_;
        if (0xfff < uVal_15) {
          lVal_9 = *(int64_t *)(local_a8._0_8_ + -8);
          if (0x1f < (uint64_t)((local_a8._0_8_ + -8) - lVal_9)) {
LAB_18039e8f9:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_15 = local_98._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_9,uVal_15);
      }
      func_0x180084c70(&local_b0,local_b8[0]);
      return;
    }
  }
  func_0x18007ba70();
  fnPtr_5 = (func_ptr_t )swi(3);
  (*fnPtr_5)();
  return;
}

// Unwind@18039e920
void Unwind_18039e920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18039e960
void Unwind_18039e960(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x60);
  return;
}

// Unwind@18039e9a0
void Unwind_18039e9a0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18039e9e0
void Unwind_18039e9e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18039ea20
void Unwind_18039ea20(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18039ea60
void Unwind_18039ea60(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xc0);
  return;
}

// Unwind@18039eaa0
void Unwind_18039eaa0(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x50);
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18039eaf0
void Unwind_18039eaf0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xa0);
  return;
}

// Unwind@18039eb30
void Unwind_18039eb30(uint64_t param_1,int64_t param_2)
{
  func_0x18003c630(param_2 + 0x90);
  return;
}

// Unwind@18039eb70
void Unwind_18039eb70(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// Unwind@18039eba0
void Unwind_18039eba0(void)
{
  func_ptr_t fnPtr_1;
  
  Unwind_18067a240();
  fnPtr_1 = (func_ptr_t )swi(3);
  (*fnPtr_1)();
  return;
}

// func_0x18039ebd0
int64_t * func_0x18039ebd0(int64_t *param_1,uint64_t param_2)
{
  int64_t *pLong_1;
  int *pInt_2;
  uint8_t uVal_3;
  int64_t lVal_4;
  int64_t *pLong_5;
  uint64_t uVal_6;
  int64_t lVal_7;
  uint64_t unaff_R14;
  uint32_t uVal_8;
  uint8_t local_2f0 [8];
  int64_t *local_2e8;
  uint8_t local_90;
  undefined7 uStack_8f;
  uint64_t local_80;
  uint64_t local_78;
  uint8_t local_68 [16];
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVal_7 = *(int64_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x28);
  uVal_8 = 0;
  if (0 < lVal_7) {
    uVal_8 = (uint32_t)lVal_7;
  }
  *(uint64_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x28) = 0;
  uVal_3 = *(uint8_t *)((int64_t)param_1 + (int64_t)*(int *)(*param_1 + 4) + 0x58);
  pLong_5 = (int64_t *)func_0x180672de0(0x20);
  pLong_5[1] = 0x100000001;
  *pLong_5 = (int64_t)&PTR_FUN_1806cd170;
  local_58 = pLong_5 + 2;
  pLong_5[2] = (int64_t)&PTR_LAB_1806cd190;
  pLong_5[3] = (int64_t)param_1;
  LOCK();
  *(int *)(pLong_5 + 1) = *(int *)(pLong_5 + 1) + 1;
  UNLOCK();
  local_68._8_8_ = pLong_5;
  local_68._0_8_ = local_58;
  local_50 = pLong_5;
  func_0x18043a3b0(local_2f0,local_68,CONCAT71((int7)((uint64_t)unaff_R14 >> 8),uVal_3) & 0xffffffff,0)
  ;
  if (pLong_5 != (int64_t *)0x0) {
    LOCK();
    pLong_1 = pLong_5 + 1;
    *(int *)pLong_1 = *(int *)pLong_1 + -1;
    UNLOCK();
    if (*(int *)pLong_1 == 0) {
      (**(func_ptr_t *)*pLong_5)(pLong_5);
      LOCK();
      pInt_2 = (int *)((int64_t)pLong_5 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*pLong_5 + 8))(pLong_5);
      }
    }
  }
  func_0x18043a530(local_2f0,param_2,0 < lVal_7,0,uVal_8,0);
  if (0xf < local_78) {
    lVal_4 = CONCAT71(uStack_8f,local_90);
    uVal_6 = local_78 + 1;
    lVal_7 = lVal_4;
    if (0xfff < uVal_6) {
      lVal_7 = *(int64_t *)(lVal_4 + -8);
      if (0x1f < (uint64_t)((lVal_4 + -8) - lVal_7)) {
        do {
          invalidInstructionException();
        } while( true );
      }
      uVal_6 = local_78 + 0x28;
    }
    thunk_FUN_180695dd0(lVal_7,uVal_6);
  }
  local_80 = 0;
  local_78 = 0xf;
  local_90 = 0;
  if (local_2e8 != (int64_t *)0x0) {
    LOCK();
    pLong_5 = local_2e8 + 1;
    *(int *)pLong_5 = *(int *)pLong_5 + -1;
    UNLOCK();
    if (*(int *)pLong_5 == 0) {
      (**(func_ptr_t *)*local_2e8)(local_2e8);
      LOCK();
      pInt_2 = (int *)((int64_t)local_2e8 + 0xc);
      *pInt_2 = *pInt_2 + -1;
      UNLOCK();
      if (*pInt_2 == 0) {
        (**(func_ptr_t *)(*local_2e8 + 8))(local_2e8);
      }
    }
  }
  return param_1;
}

// Unwind@18039eda0
void Unwind_18039eda0(uint64_t param_1,int64_t param_2)
{
  func_0x18001deb0(param_2 + 0x2d0);
  return;
}

// Unwind@18039ede0
void Unwind_18039ede0(uint64_t param_1,int64_t param_2)
{
  func_0x18043b430(param_2 + 0x38);
  return;
}

// func_0x18039ee20
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18039ee20(int64_t param_1,uint8_t (*param_2)[16])
{
  char *fnPtr_1;
  func_ptr_t fnPtr_2;
  int64_t lVal_3;
  uint32_t uVal_4;
  int iVal_5;
  uint8_t (*pArr16_6)[16];
  size_t sz_7;
  uint64_t uVal_8;
  uint64_t uVal_9;
  int64_t lVal_10;
  uint64_t *******ptr7_U64_11;
  uint64_t ******ptr6_U64_12;
  uint64_t uVal_13;
  uint8_t *pU64_14;
  uint32_t *pU64_15;
  uint32_t *local_168;
  uint64_t local_160;
  uint32_t local_158;
  uint32_t uStack_154;
  uint32_t uStack_150;
  uint32_t uStack_14c;
  uint16_t local_148;
  undefined6 uStack_146;
  uint64_t local_140;
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  uint8_t local_c8 [16];
  uint64_t *******local_b8;
  uint64_t uStack_b0;
  uint16_t local_a8;
  uint64_t local_a0;
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  uint8_t local_78 [16];
  uint8_t local_68 [28];
  uint8_t local_4c;
  uint8_t local_4b;
  uint8_t local_4a;
  uint8_t local_49;
  uint64_t local_48;
  
  local_48 = 0xfffffffffffffffe;
  pArr16_6 = (uint8_t (*)[16])(param_1 + 0x30);
  local_138 = ZEXT816(0);
  local_128 = ZEXT816(0);
  uVal_13 = *(uint64_t *)(param_1 + 0x40);
  if (0xf < *(uint64_t *)(param_1 + 0x48)) {
    pArr16_6 = *(uint8_t (**)[16])(param_1 + 0x30);
  }
  if ((int64_t)uVal_13 < 0) {
    func_0x18007ba70();
LAB_18039f66a:
    local_4a = 1;
    func_0x18007ba70();
LAB_18039f677:
    local_49 = 1;
    func_0x18007ba70();
LAB_18039f684:
    func_0x18007ba70();
LAB_18039f68a:
    local_4c = 1;
    func_0x18007ba70();
  }
  else {
    if (uVal_13 < 0x10) {
      local_128._8_8_ = 0xf;
      local_128._0_8_ = uVal_13;
      local_138 = *pArr16_6;
    }
    else {
      uVal_8 = uVal_13 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_8) {
        uVal_9 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        uVal_8 = func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_10 = func_0x180672de0(uVal_9 + 0x28);
        uVal_8 = lVal_10 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_8 - 8) = lVal_10;
      }
      local_138._0_8_ = uVal_8;
      local_128._8_8_ = uVal_9;
      local_128._0_8_ = uVal_13;
      func_0x1806aa960(uVal_8,pArr16_6,uVal_13 + 1);
    }
    local_4a = 1;
    pArr16_6 = (uint8_t (*)[16])func_0x1800becb0();
    local_108 = ZEXT816(0);
    local_118 = ZEXT816(0);
    uVal_13 = *(uint64_t *)pArr16_6[1];
    if (0xf < *(uint64_t *)(pArr16_6[1] + 8)) {
      pArr16_6 = *(uint8_t (**)[16])*pArr16_6;
    }
    if ((int64_t)uVal_13 < 0) goto LAB_18039f66a;
    if (uVal_13 < 0x10) {
      local_108._8_8_ = 0xf;
      local_108._0_8_ = uVal_13;
      local_118 = *pArr16_6;
    }
    else {
      uVal_8 = uVal_13 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_8) {
        uVal_9 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_4a = 1;
        uVal_8 = func_0x180672de0(uVal_9 + 1);
      }
      else {
        local_4a = 1;
        lVal_10 = func_0x180672de0(uVal_9 + 0x28);
        uVal_8 = lVal_10 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_8 - 8) = lVal_10;
      }
      local_118._0_8_ = uVal_8;
      local_108._8_8_ = uVal_9;
      local_108._0_8_ = uVal_13;
      func_0x1806aa960(uVal_8,pArr16_6,uVal_13 + 1);
    }
    local_158 = _DAT_1806cb4ba;
    uStack_154 = _UNK_1806cb4be;
    uStack_150 = _UNK_1806cb4c2;
    uStack_14c = _UNK_1806cb4c6;
    local_148 = 0x9b81;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11fdc) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x11fdc) = 1;
      func_0x18007c170(lVal_10 + 0x11fc9,&local_158);
      func_0x180673140(&LAB_18042e570);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x11fc9);
    func_0x18043c830(fnPtr_1);
    local_88 = ZEXT816(0);
    local_98 = ZEXT816(0);
    sz_7 = strlen(fnPtr_1);
    if ((int64_t)sz_7 < 0) goto LAB_18039f677;
    if (sz_7 < 0x10) {
      pU64_14 = local_98;
      uVal_13 = 0xf;
    }
    else {
      uVal_9 = sz_7 | 0xf;
      uVal_13 = 0x16;
      if (0x16 < uVal_9) {
        uVal_13 = uVal_9;
      }
      if (uVal_9 < 0xfff) {
        local_49 = 1;
        pU64_14 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
      }
      else {
        local_49 = 1;
        lVal_10 = func_0x180672de0(uVal_13 + 0x28);
        pU64_14 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_14 + -8) = lVal_10;
      }
      local_98._0_8_ = pU64_14;
    }
    local_88._8_8_ = uVal_13;
    local_88._0_8_ = sz_7;
    func_0x1806aa960(pU64_14,fnPtr_1,sz_7);
    pU64_14[sz_7] = 0;
    pU64_15 = &local_158;
    func_0x180056840(pU64_15,local_98,local_118,local_138);
    if (0xf < (uint64_t)local_88._8_8_) {
      uVal_13 = local_88._8_8_ + 1;
      ptr6_U64_12 = (uint64_t ******)local_98._0_8_;
      if (0xfff < uVal_13) {
        ptr6_U64_12 = *(uint64_t *******)(local_98._0_8_ + -8);
        if (0x1f < (uint64_t)(local_98._0_8_ + (-8 - (int64_t)ptr6_U64_12))) goto LAB_18039f663;
        uVal_13 = local_88._8_8_ + 0x28;
      }
      thunk_FUN_180695dd0(ptr6_U64_12,uVal_13);
    }
    local_f8 = ZEXT816(0);
    local_e8 = ZEXT816(0);
    uVal_13 = *(uint64_t *)param_2[1];
    pArr16_6 = param_2;
    if (0xf < *(uint64_t *)(param_2[1] + 8)) {
      pArr16_6 = *(uint8_t (**)[16])*param_2;
    }
    if ((int64_t)uVal_13 < 0) goto LAB_18039f684;
    if (uVal_13 < 0x10) {
      local_e8._8_8_ = 0xf;
      local_e8._0_8_ = uVal_13;
      local_f8 = *pArr16_6;
    }
    else {
      uVal_8 = uVal_13 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_8) {
        uVal_9 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        uVal_8 = func_0x180672de0(uVal_9 + 1);
      }
      else {
        lVal_10 = func_0x180672de0(uVal_9 + 0x28);
        uVal_8 = lVal_10 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_8 - 8) = lVal_10;
      }
      local_f8._0_8_ = uVal_8;
      local_e8._8_8_ = uVal_9;
      local_e8._0_8_ = uVal_13;
      func_0x1806aa960(uVal_8,pArr16_6,uVal_13 + 1);
    }
    local_4c = 1;
    pArr16_6 = (uint8_t (*)[16])func_0x1800becb0();
    local_c8 = ZEXT816(0);
    local_d8 = ZEXT816(0);
    uVal_13 = *(uint64_t *)pArr16_6[1];
    if (0xf < *(uint64_t *)(pArr16_6[1] + 8)) {
      pArr16_6 = *(uint8_t (**)[16])*pArr16_6;
    }
    if ((int64_t)uVal_13 < 0) goto LAB_18039f68a;
    if (uVal_13 < 0x10) {
      local_c8._8_8_ = 0xf;
      local_c8._0_8_ = uVal_13;
      local_d8 = *pArr16_6;
    }
    else {
      uVal_8 = uVal_13 | 0xf;
      uVal_9 = 0x16;
      if (0x16 < uVal_8) {
        uVal_9 = uVal_8;
      }
      if (uVal_8 < 0xfff) {
        local_4c = 1;
        uVal_8 = func_0x180672de0(uVal_9 + 1);
      }
      else {
        local_4c = 1;
        lVal_10 = func_0x180672de0(uVal_9 + 0x28);
        uVal_8 = lVal_10 + 0x27U & 0xffffffffffffffe0;
        *(int64_t *)(uVal_8 - 8) = lVal_10;
      }
      local_d8._0_8_ = uVal_8;
      local_c8._8_8_ = uVal_9;
      local_c8._0_8_ = uVal_13;
      func_0x1806aa960(uVal_8,pArr16_6,uVal_13 + 1);
    }
    local_b8 = (uint64_t *******)CONCAT44(_UNK_1806cb4d0,_DAT_1806cb4cc);
    uStack_b0 = CONCAT44(_UNK_1806cb4d8,_UNK_1806cb4d4);
    local_a8 = 0x57f7;
    if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                 0x11ff0) == '\0') {
      lVal_10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
      *(uint8_t *)(lVal_10 + 0x11ff0) = 1;
      func_0x18007c170(lVal_10 + 0x11fdd,&local_b8);
      func_0x180673140(&LAB_18042e5a0);
    }
    fnPtr_1 = (char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x11fdd);
    func_0x18043c850(fnPtr_1);
    local_68._0_16_ = ZEXT816(0);
    local_78 = ZEXT816(0);
    sz_7 = strlen(fnPtr_1);
    if (-1 < (int64_t)sz_7) {
      if (sz_7 < 0x10) {
        pU64_14 = local_78;
        uVal_13 = 0xf;
      }
      else {
        uVal_9 = sz_7 | 0xf;
        uVal_13 = 0x16;
        if (0x16 < uVal_9) {
          uVal_13 = uVal_9;
        }
        if (uVal_9 < 0xfff) {
          local_4b = 1;
          pU64_14 = (uint8_t *)func_0x180672de0(uVal_13 + 1);
        }
        else {
          local_4b = 1;
          lVal_10 = func_0x180672de0(uVal_13 + 0x28);
          pU64_14 = (uint8_t *)(lVal_10 + 0x27U & 0xffffffffffffffe0);
          *(int64_t *)(pU64_14 + -8) = lVal_10;
        }
        local_78._0_8_ = pU64_14;
      }
      local_68._8_8_ = uVal_13;
      local_68._0_8_ = sz_7;
      func_0x1806aa960(pU64_14,fnPtr_1,sz_7);
      pU64_14[sz_7] = 0;
      func_0x180056840(local_98,local_78,local_d8,local_f8);
      pArr16_6 = (uint8_t (*)[16])(param_1 + 0x30);
      if (0xf < (uint64_t)local_68._8_8_) {
        uVal_13 = local_68._8_8_ + 1;
        lVal_10 = local_78._0_8_;
        if (0xfff < uVal_13) {
          lVal_10 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_10)) goto LAB_18039f663;
          uVal_13 = local_68._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_13);
      }
      local_b8 = (uint64_t *******)local_98;
      if (0xf < (uint64_t)local_88._8_8_) {
        local_b8 = (uint64_t *******)local_98._0_8_;
      }
      uStack_b0 = local_88._0_8_;
      uVal_4 = func_0x180678230();
      func_0x1800a6340(local_78,uVal_4,&local_b8);
      local_160 = CONCAT62(uStack_146,local_148);
      if (0xf < local_140) {
        pU64_15 = (uint32_t *)CONCAT44(uStack_154,local_158);
      }
      local_168 = pU64_15;
      uVal_4 = func_0x180678230();
      func_0x1800a6340(&local_b8,uVal_4,&local_168);
      pU64_14 = local_78;
      if (7 < (uint64_t)local_68._8_8_) {
        pU64_14 = (uint8_t *)local_78._0_8_;
      }
      ptr7_U64_11 = &local_b8;
      if (7 < local_a0) {
        ptr7_U64_11 = local_b8;
      }
      iVal_5 = func_0x180678cc0(ptr7_U64_11,pU64_14);
      if (iVal_5 != 0) goto LAB_18039f6a4;
      if (7 < local_a0) {
        uVal_13 = local_a0 * 2 + 2;
        ptr7_U64_11 = local_b8;
        if (0xfff < uVal_13) {
          ptr7_U64_11 = (uint64_t *******)local_b8[-1];
          if ((uint8_t *)0x1f < (uint8_t *)((int64_t)local_b8 + (-8 - (int64_t)ptr7_U64_11))
             ) goto LAB_18039f663;
          uVal_13 = local_a0 * 2 + 0x29;
        }
        thunk_FUN_180695dd0(ptr7_U64_11,uVal_13);
      }
      if (7 < (uint64_t)local_68._8_8_) {
        uVal_13 = local_68._8_8_ * 2 + 2;
        lVal_10 = local_78._0_8_;
        if (0xfff < uVal_13) {
          lVal_10 = *(int64_t *)(local_78._0_8_ + -8);
          if (0x1f < (uint64_t)((local_78._0_8_ + -8) - lVal_10)) goto LAB_18039f663;
          uVal_13 = local_68._8_8_ * 2 + 0x29;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_13);
      }
      if (pArr16_6 == param_2) {
LAB_18039f518:
      }
      else {
        uVal_13 = *(uint64_t *)param_2[1];
        if (0xf < *(uint64_t *)(param_2[1] + 8)) {
          param_2 = *(uint8_t (**)[16])*param_2;
        }
        if (*(uint64_t *)(param_1 + 0x48) < uVal_13) {
          func_0x18007bba0(pArr16_6,uVal_13);
          goto LAB_18039f518;
        }
        if (0xf < *(uint64_t *)(param_1 + 0x48)) {
          pArr16_6 = *(uint8_t (**)[16])(param_1 + 0x30);
        }
        *(uint64_t *)(param_1 + 0x40) = uVal_13;
        func_0x1806aa960(pArr16_6,param_2,uVal_13);
        (*pArr16_6)[uVal_13] = 0;
      }
      if (0xf < (uint64_t)local_88._8_8_) {
        uVal_13 = local_88._8_8_ + 1;
        ptr6_U64_12 = (uint64_t ******)local_98._0_8_;
        if (0xfff < uVal_13) {
          ptr6_U64_12 = *(uint64_t *******)(local_98._0_8_ + -8);
          if (0x1f < (uint64_t)(local_98._0_8_ + (-8 - (int64_t)ptr6_U64_12)))
          goto LAB_18039f663;
          uVal_13 = local_88._8_8_ + 0x28;
        }
        thunk_FUN_180695dd0(ptr6_U64_12,uVal_13);
      }
      if (0xf < local_140) {
        lVal_3 = CONCAT44(uStack_154,local_158);
        uVal_13 = local_140 + 1;
        lVal_10 = lVal_3;
        if (0xfff < uVal_13) {
          lVal_10 = *(int64_t *)(lVal_3 + -8);
          if (0x1f < (uint64_t)((lVal_3 + -8) - lVal_10)) {
LAB_18039f663:
            do {
              invalidInstructionException();
            } while( true );
          }
          uVal_13 = local_140 + 0x28;
        }
        thunk_FUN_180695dd0(lVal_10,uVal_13);
      }
      return;
    }
  }
  local_4b = 1;
  iVal_5 = func_0x18007ba70();
LAB_18039f6a4:
  func_0x18042e5d0("rename",iVal_5,&local_b8,local_78);
  fnPtr_2 = (func_ptr_t )swi(3);
  (*fnPtr_2)();
  return;
}

// Unwind@18039f6c0
void Unwind_18039f6c0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  *(uint8_t *)(param_2 + 0x13f) = 0;
  return;
}

// Unwind@18039f700
void Unwind_18039f700(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x13f);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0x70);
  }
  *(char *)(param_2 + 0x13e) = ch_1;
  return;
}

// Unwind@18039f750
void Unwind_18039f750(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x13e) == '\x01') {
    func_0x180001e70(param_2 + 0x50);
  }
  return;
}

// Unwind@18039f790
void Unwind_18039f790(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x110);
  *(uint8_t *)(param_2 + 0x13d) = 0;
  return;
}

// Unwind@18039f7d0
void Unwind_18039f7d0(uint64_t param_1,int64_t param_2)
{
  char ch_1;
  
  ch_1 = *(char *)(param_2 + 0x13d);
  if (ch_1 == '\x01') {
    func_0x180001e70(param_2 + 0xb0);
  }
  *(char *)(param_2 + 0x13c) = ch_1;
  return;
}

// Unwind@18039f820
void Unwind_18039f820(uint64_t param_1,int64_t param_2)
{
  if (*(char *)(param_2 + 0x13c) == '\x01') {
    func_0x180001e70(param_2 + 0x90);
  }
  return;
}

// Unwind@18039f860
void Unwind_18039f860(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0xd0);
  return;
}

// Unwind@18039f8a0
void Unwind_18039f8a0(uint64_t param_1,int64_t param_2)
{
  func_0x1800565c0(param_2 + 0x110);
  return;
}

// Unwind@18039f8e0
void Unwind_18039f8e0(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0xf0);
  return;
}

// Unwind@18039f920
void Unwind_18039f920(uint64_t param_1,int64_t param_2)
{
  func_0x180001e70(param_2 + 0x30);
  return;
}

// Unwind@18039f960
void Unwind_18039f960(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11fdc) = 0;
  *(uint8_t *)(param_2 + 0x13f) = 1;
  return;
}

// Unwind@18039f9b0
void Unwind_18039f9b0(uint64_t param_1,int64_t param_2)
{
  *(uint8_t *)
   (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x11ff0) = 0;
  *(uint8_t *)(param_2 + 0x13d) = 1;
  return;
}

// func_0x18039fa00
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void func_0x18039fa00(uint64_t param_1,uint8_t (*param_2)[16])
{
  uint64_t *_Str;
  char *fnPtr_1;
  func_ptr_t fnPtr_2;
  uint8_t auArr_3 [16];
  uint32_t uVal_4;
  uint32_t uVal_5;
  uint32_t uVal_6;
  uint32_t uVal_7;
  int iVal_8;
  size_t sz_9;
  uint64_t *pU64_10;
  uint8_t (*pArr16_11)[16];
  uint64_t uVal_12;
  int64_t lVal_13;
  uint64_t uVal_14;
  int64_t lVal_15;
  char ch_16;
  uint8_t *pU64_17;
  int *pInt_18;
  uint64_t *pU64_19;
  uint32_t *pU64_20;
  uint64_t uVal_21;
  uint32_t local_208;
  uint32_t uStack_204;
  uint32_t uStack_200;
  uint32_t uStack_1fc;
  uint32_t local_1f8;
  uint32_t uStack_1f4;
  uint32_t uStack_1f0;
  uint32_t uStack_1ec;
  uint32_t local_1e8;
  uint32_t uStack_1e4;
  uint32_t uStack_1e0;
  uint32_t uStack_1dc;
  uint32_t local_1d8;
  uint32_t uStack_1d4;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t local_1c8;
  uint32_t uStack_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  uint32_t local_1b8;
  uint32_t uStack_1b4;
  uint32_t uStack_1b0;
  uint32_t uStack_1ac;
  uint32_t local_1a8;
  uint32_t uStack_1a4;
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  uint32_t local_198;
  uint32_t uStack_194;
  uint32_t uStack_190;
  uint32_t uStack_18c;
  uint32_t local_188;
  uint32_t uStack_184;
  uint32_t uStack_180;
  uint32_t uStack_17c;
  int local_178;
  uint32_t uStack_174;
  uint8_t **local_170;
  uint64_t local_160;
  uint8_t local_158 [16];
  uint8_t local_148 [16];
  uint8_t local_138 [16];
  uint8_t local_128 [16];
  uint8_t local_118 [16];
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  uint8_t local_c8 [16];
  uint32_t local_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint8_t local_a8;
  uint32_t uStack_a7;
  uint32_t uStack_a3;
  undefined7 uStack_9f;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint8_t local_78 [4];
  uint32_t uStack_74;
  uint64_t uStack_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint16_t local_58;
  uint8_t local_55;
  uint8_t local_54;
  uint8_t local_53;
  uint8_t local_52;
  uint8_t local_51;
  uint64_t local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
               0x12004) == '\0') {
    lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
    *(uint8_t *)(lVal_13 + 0x12004) = 1;
    *(uint8_t *)(lVal_13 + 0x12000) = 1;
    *(uint64_t *)(lVal_13 + 0x11ff8) = 0xb59098061f89e8fc;
    func_0x180673140(&LAB_18042e890);
  }
  lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
  _Str = (uint64_t *)(lVal_13 + 0x11ff8);
  if (*(char *)(lVal_13 + 0x12000) == '\x01') {
    *_Str = *_Str ^ 0xb5e3ff6f79e787bf;
    *(uint8_t *)(lVal_13 + 0x12000) = 0;
  }
  _local_98 = ZEXT816(0);
  sz_9 = strlen((char *)_Str);
  if (-1 < (int64_t)sz_9) {
    if (sz_9 < 0x10) {
      pU64_17 = local_98;
      uVal_21 = 0xf;
    }
    else {
      uVal_12 = sz_9 | 0xf;
      uVal_21 = 0x16;
      if (0x16 < uVal_12) {
        uVal_21 = uVal_12;
      }
      if (uVal_12 < 0xfff) {
        pU64_17 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
      }
      else {
        lVal_13 = func_0x180672de0(uVal_21 + 0x28);
        pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
        *(int64_t *)(pU64_17 + -8) = lVal_13;
      }
      local_98 = (uint8_t  [8])pU64_17;
    }
    local_88 = sz_9;
    uStack_80 = uVal_21;
    func_0x1806aa960(pU64_17,_Str,sz_9);
    pU64_17[sz_9] = 0;
    pU64_10 = (uint64_t *)func_0x1800becb0();
    uVal_21 = pU64_10[2];
    if (0xf < (uint64_t)pU64_10[3]) {
      pU64_10 = (uint64_t *)*pU64_10;
    }
    if (uStack_80 - local_88 < uVal_21) {
      pArr16_11 = (uint8_t (*)[16])func_0x1800871a0(local_98,uVal_21,local_88,0,pU64_10,uVal_21);
    }
    else {
      uVal_12 = uVal_21;
      if (uStack_80 < 0x10) {
        pU64_19 = (uint64_t *)local_98;
        if (pU64_19 < (uint64_t *)((int64_t)pU64_10 + uVal_21)) goto LAB_18039fba8;
      }
      else {
        pU64_19 = (uint64_t *)local_98;
        if ((uint64_t)local_98 < (uint64_t *)((int64_t)pU64_10 + uVal_21)) {
LAB_18039fba8:
          if ((pU64_10 <= (uint64_t *)((int64_t)pU64_19 + local_88)) &&
             (uVal_12 = (int64_t)pU64_19 - (int64_t)pU64_10,
             pU64_19 < pU64_10 || (int64_t)pU64_19 - (int64_t)pU64_10 == 0)) {
            uVal_12 = 0;
          }
        }
      }
      lVal_13 = local_88 + 1;
      local_88 = local_88 + uVal_21;
      func_0x1806aa960((int64_t)pU64_19 + uVal_21,pU64_19,lVal_13);
      func_0x1806aa960(pU64_19,pU64_10,uVal_12);
      func_0x1806aa960((int64_t)pU64_19 + uVal_12,(int64_t)pU64_10 + uVal_12 + uVal_21,uVal_21 - uVal_12);
      pArr16_11 = (uint8_t (*)[16])local_98;
    }
    _local_78 = *pArr16_11;
    _local_68 = pArr16_11[1];
    *(uint64_t *)pArr16_11[1] = 0;
    *(uint64_t *)(pArr16_11[1] + 8) = 0xf;
    (*pArr16_11)[0] = 0;
    pU64_17 = local_78;
    func_0x1800bef00(pU64_17);
    if (0xf < uStack_60) {
      uVal_21 = uStack_60 + 1;
      lVal_13 = (int64_t)_local_78;
      if (0xfff < uVal_21) {
        lVal_13 = *(int64_t *)((int64_t)_local_78 + -8);
        if (0x1f < (uint64_t)(((int64_t)_local_78 + -8) - lVal_13)) goto LAB_1803a0d6d;
        uVal_21 = uStack_60 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_21);
    }
    _local_68 = ZEXT816(0xf) << 0x40;
    auArr_3[15] = 0;
    auArr_3._0_15_ = stack0xffffffffffffff89;
    _local_78 = auArr_3 << 8;
    if (0xf < uStack_80) {
      uVal_21 = uStack_80 + 1;
      lVal_13 = (int64_t)local_98;
      if (0xfff < uVal_21) {
        lVal_13 = *(int64_t *)((int64_t)local_98 + -8);
        if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_13)) goto LAB_1803a0d6d;
        uVal_21 = uStack_80 + 0x28;
      }
      thunk_FUN_180695dd0(lVal_13,uVal_21);
    }
    local_158 = ZEXT816(0);
    local_148 = ZEXT816(0);
    uVal_21 = *(uint64_t *)param_2[1];
    pArr16_11 = param_2;
    if (0xf < *(uint64_t *)(param_2[1] + 8)) {
      pArr16_11 = *(uint8_t (**)[16])*param_2;
    }
    if (-1 < (int64_t)uVal_21) {
      if (uVal_21 < 0x10) {
        local_148._8_8_ = 0xf;
        local_148._0_8_ = uVal_21;
        local_158 = *pArr16_11;
      }
      else {
        uVal_14 = uVal_21 | 0xf;
        uVal_12 = 0x16;
        if (0x16 < uVal_14) {
          uVal_12 = uVal_14;
        }
        if (uVal_14 < 0xfff) {
          uVal_14 = func_0x180672de0(uVal_12 + 1);
        }
        else {
          lVal_13 = func_0x180672de0(uVal_12 + 0x28);
          uVal_14 = lVal_13 + 0x27U & 0xffffffffffffffe0;
          *(int64_t *)(uVal_14 - 8) = lVal_13;
        }
        local_158._0_8_ = uVal_14;
        local_148._8_8_ = uVal_12;
        local_148._0_8_ = uVal_21;
        func_0x1806aa960(uVal_14,pArr16_11,uVal_21 + 1);
      }
      local_52 = 1;
      pArr16_11 = (uint8_t (*)[16])func_0x1800becb0();
      local_128 = ZEXT816(0);
      local_138 = ZEXT816(0);
      uVal_21 = *(uint64_t *)pArr16_11[1];
      if (0xf < *(uint64_t *)(pArr16_11[1] + 8)) {
        pArr16_11 = *(uint8_t (**)[16])*pArr16_11;
      }
      if ((int64_t)uVal_21 < 0) {
        local_52 = 1;
        func_0x18007ba70();
LAB_1803a0d7c:
        local_51 = 1;
        func_0x18007ba70();
LAB_1803a0d89:
        func_0x180087670("remove");
LAB_1803a0d9d:
        func_0x18007ba70();
LAB_1803a0da3:
        local_53 = 1;
        func_0x18007ba70();
LAB_1803a0db0:
        func_0x18007ba70();
LAB_1803a0db6:
        func_0x18007ba70();
LAB_1803a0dbc:
        local_54 = 1;
        func_0x18007ba70();
LAB_1803a0dc9:
        local_55 = 1;
        iVal_8 = func_0x18007ba70();
      }
      else {
        if (uVal_21 < 0x10) {
          local_128._8_8_ = 0xf;
          local_128._0_8_ = uVal_21;
          local_138 = *pArr16_11;
        }
        else {
          uVal_14 = uVal_21 | 0xf;
          uVal_12 = 0x16;
          if (0x16 < uVal_14) {
            uVal_12 = uVal_14;
          }
          if (uVal_14 < 0xfff) {
            local_52 = 1;
            uVal_14 = func_0x180672de0(uVal_12 + 1);
          }
          else {
            local_52 = 1;
            lVal_13 = func_0x180672de0(uVal_12 + 0x28);
            uVal_14 = lVal_13 + 0x27U & 0xffffffffffffffe0;
            *(int64_t *)(uVal_14 - 8) = lVal_13;
          }
          local_138._0_8_ = uVal_14;
          local_128._8_8_ = uVal_12;
          local_128._0_8_ = uVal_21;
          func_0x1806aa960(uVal_14,pArr16_11,uVal_21 + 1);
        }
        local_98._4_4_ = _UNK_1806cb4e2;
        local_98._0_4_ = _DAT_1806cb4de;
        uStack_90._0_4_ = _UNK_1806cb4e6;
        uStack_90._4_4_ = _UNK_1806cb4ea;
        local_88 = CONCAT62(local_88._2_6_,0x4bab);
        if (*(char *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8)
                     + 0x12018) == '\0') {
          lVal_13 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
          *(uint8_t *)(lVal_13 + 0x12018) = 1;
          func_0x18007c170(lVal_13 + 0x12005,local_98);
          func_0x180673140(&LAB_18042e8b0);
        }
        fnPtr_1 = (char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x12005);
        func_0x18043c870(fnPtr_1);
        _local_68 = ZEXT816(0);
        _local_78 = ZEXT816(0);
        sz_9 = strlen(fnPtr_1);
        if ((int64_t)sz_9 < 0) goto LAB_1803a0d7c;
        uVal_21 = 0xf;
        if (0xf < sz_9) {
          uVal_12 = sz_9 | 0xf;
          uVal_21 = 0x16;
          if (0x16 < uVal_12) {
            uVal_21 = uVal_12;
          }
          if (uVal_12 < 0xfff) {
            local_51 = 1;
            pU64_17 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
          }
          else {
            local_51 = 1;
            lVal_13 = func_0x180672de0(uVal_21 + 0x28);
            pU64_17 = (uint8_t *)(lVal_13 + 0x27U & 0xffffffffffffffe0);
            *(int64_t *)(pU64_17 + -8) = lVal_13;
          }
          _local_78 = pU64_17;
        }
        uStack_60 = uVal_21;
        local_68 = (uint8_t  [8])sz_9;
        func_0x1806aa960(pU64_17,fnPtr_1,sz_9);
        pU64_17[sz_9] = 0;
        func_0x180056840(local_98,local_78,local_138,local_158);
        if (0xf < uStack_60) {
          uVal_21 = uStack_60 + 1;
          lVal_13 = (int64_t)_local_78;
          if (0xfff < uVal_21) {
            lVal_13 = *(int64_t *)((int64_t)_local_78 + -8);
            if (0x1f < (uint64_t)(((int64_t)_local_78 + -8) - lVal_13)) goto LAB_1803a0d6d;
            uVal_21 = uStack_60 + 0x28;
          }
          thunk_FUN_180695dd0(lVal_13,uVal_21);
        }
        _local_78 = local_98;
        if (0xf < uStack_80) {
          _local_78 = (uint8_t *)local_98;
        }
        uStack_70 = local_88;
        uVal_7 = func_0x180678230();
        pU64_20 = &local_b8;
        func_0x1800a6340(pU64_20,uVal_7,local_78);
        if (7 < CONCAT71(uStack_9f,uStack_a3._3_1_)) {
          pU64_20 = (uint32_t *)CONCAT44(uStack_b4,local_b8);
        }
        iVal_8 = func_0x180677ed0(pU64_20,local_78,3,0xffffffff);
        if (iVal_8 < 0x7b) {
          if ((iVal_8 - 2U < 0x3f) &&
             ((0x4008000000000003U >> ((uint64_t)(iVal_8 - 2U) & 0x3f) & 1) != 0))
          goto LAB_1803a004c;
          if (iVal_8 != 0) goto LAB_1803a0dd6;
          if (uStack_80 < 0x10) {
            _local_78 = local_98;
          }
          else {
            _local_78 = (uint8_t *)local_98;
          }
          uStack_70 = local_88;
          uVal_7 = func_0x180678230();
          pInt_18 = &local_178;
          func_0x1800a6340(pInt_18,uVal_7,local_78);
          if (7 < local_160) {
            pInt_18 = (int *)CONCAT44(uStack_174,local_178);
          }
          iVal_8 = func_0x180677ed0(pInt_18,local_78,3,0xffffffff);
          ch_16 = '\x01';
          if (iVal_8 < 0x7b) {
            if ((0x3e < iVal_8 - 2U) ||
               ((0x4008000000000003U >> ((uint64_t)(iVal_8 - 2U) & 0x3f) & 1) == 0)) {
              if (iVal_8 != 0) goto LAB_1803a0dfc;
              if (((_local_68 & (uint8_t  [16])0x400) == (uint8_t  [16])0x0) ||
                 ((local_68._4_4_ != -0x5ffffffd && (local_68._4_4_ != -0x5ffffff4)))) {
                ch_16 = (char)((local_68._0_4_ & 0x10) >> 4);
              }
            }
          }
          else if (((iVal_8 != 0x7b) && (iVal_8 != 0xa1)) && (iVal_8 != 0x10b)) goto LAB_1803a0dfc;
          if (7 < local_160) {
            lVal_15 = CONCAT44(uStack_174,local_178);
            uVal_21 = local_160 * 2 + 2;
            lVal_13 = lVal_15;
            if (0xfff < uVal_21) {
              lVal_13 = *(int64_t *)(lVal_15 + -8);
              if (0x1f < (uint64_t)((lVal_15 + -8) - lVal_13)) goto LAB_1803a0d6d;
              uVal_21 = local_160 * 2 + 0x29;
            }
            thunk_FUN_180695dd0(lVal_13,uVal_21);
          }
LAB_1803a004e:
          uVal_21 = CONCAT71(uStack_9f,uStack_a3._3_1_);
          if (7 < uVal_21) {
            lVal_15 = CONCAT44(uStack_b4,local_b8);
            uVal_12 = uVal_21 * 2 + 2;
            lVal_13 = lVal_15;
            if (0xfff < uVal_12) {
              lVal_13 = *(int64_t *)(lVal_15 + -8);
              if (0x1f < (uint64_t)((lVal_15 + -8) - lVal_13)) goto LAB_1803a0d6d;
              uVal_12 = uVal_21 * 2 + 0x29;
            }
            thunk_FUN_180695dd0(lVal_13,uVal_12);
          }
          if (ch_16 != '\0') {
            _local_78 = &DAT_28d478d88fb3dcdf;
            DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
            uVal_6 = _UNK_1806b6f3c;
            uVal_5 = _UNK_1806b6f38;
            uVal_4 = PTR_DAT_1806b6f30._4_4_;
            uVal_7 = PTR_DAT_1806b6f30._0_4_;
            if (DAT_180840a60 == 0) {
LAB_1803a03fd:
              DAT_180840a68 = 0;
LAB_1803a0b8b:
              if (0xf < uStack_80) {
                uVal_21 = uStack_80 + 1;
                lVal_13 = (int64_t)local_98;
                if (0xfff < uVal_21) {
                  lVal_13 = *(int64_t *)((int64_t)local_98 + -8);
                  if (0x1f < (uint64_t)(((int64_t)local_98 + -8) - lVal_13)) goto LAB_1803a0d6d;
                  uVal_21 = uStack_80 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_13,uVal_21);
              }
              return;
            }
            _local_78 = &DAT_28d0f803f34a0611;
            lVal_13 = DAT_180840a58[0xc9];
            local_208 = PTR_DAT_1806b6f30._0_4_;
            uStack_204 = PTR_DAT_1806b6f30._4_4_;
            uStack_200 = _UNK_1806b6f38;
            uStack_1fc = _UNK_1806b6f3c;
            local_118 = ZEXT816(0);
            local_108 = ZEXT816(0);
            uVal_21 = *(uint64_t *)param_2[1];
            if (0xf < *(uint64_t *)(param_2[1] + 8)) {
              param_2 = *(uint8_t (**)[16])*param_2;
            }
            if ((int64_t)uVal_21 < 0) goto LAB_1803a0d9d;
            if (uVal_21 < 0x10) {
              local_108._8_8_ = 0xf;
              local_108._0_8_ = uVal_21;
              local_118 = *param_2;
            }
            else {
              uVal_14 = uVal_21 | 0xf;
              uVal_12 = 0x16;
              if (0x16 < uVal_14) {
                uVal_12 = uVal_14;
              }
              if (uVal_14 < 0xfff) {
                uVal_14 = func_0x180672de0(uVal_12 + 1);
              }
              else {
                lVal_15 = func_0x180672de0(uVal_12 + 0x28);
                uVal_14 = lVal_15 + 0x27U & 0xffffffffffffffe0;
                *(int64_t *)(uVal_14 - 8) = lVal_15;
              }
              local_118._0_8_ = uVal_14;
              local_108._8_8_ = uVal_12;
              local_108._0_8_ = uVal_21;
              func_0x1806aa960(uVal_14,param_2,uVal_21 + 1);
            }
            local_1f8 = PTR_DAT_1806c97c8._0_4_;
            uStack_1f4 = PTR_DAT_1806c97c8._4_4_;
            uStack_1f0 = _UNK_1806c97d0;
            uStack_1ec = _UNK_1806c97d4;
            local_1e8 = uVal_7;
            uStack_1e4 = uVal_4;
            uStack_1e0 = uVal_5;
            uStack_1dc = uVal_6;
            local_68._4_4_ = _UNK_1806cb504;
            local_68._0_4_ = _DAT_1806cb500;
            uStack_60._0_4_ = _UNK_1806cb508;
            uStack_60._4_4_ = _UNK_1806cb50c;
            uStack_74 = _UNK_1806cb4f4;
            local_78 = (uint8_t  [4])_DAT_1806cb4f0;
            uStack_70._0_4_ = _UNK_1806cb4f8;
            uStack_70._4_4_ = _UNK_1806cb4fc;
            local_58 = 0xcbd8;
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x1203c) == '\0') {
              lVal_15 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_15 + 0x1203c) = 1;
              func_0x1800f15f0(lVal_15 + 0x12019,local_78);
              func_0x180673140(&LAB_18042e8e0);
            }
            fnPtr_1 = (char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x12019);
            func_0x18043c890(fnPtr_1);
            local_b8 = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            uStack_ac = 0;
            sz_9 = strlen(fnPtr_1);
            if (-1 < (int64_t)sz_9) {
              if (sz_9 < 0x10) {
                pU64_20 = &local_b8;
                uVal_21 = 0xf;
              }
              else {
                uVal_12 = sz_9 | 0xf;
                uVal_21 = 0x16;
                if (0x16 < uVal_12) {
                  uVal_21 = uVal_12;
                }
                if (uVal_12 < 0xfff) {
                  local_53 = 1;
                  pU64_20 = (uint32_t *)func_0x180672de0(uVal_21 + 1);
                }
                else {
                  local_53 = 1;
                  lVal_15 = func_0x180672de0(uVal_21 + 0x28);
                  pU64_20 = (uint32_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_20 + -2) = lVal_15;
                }
                local_b8 = SUB84(pU64_20,0);
                uStack_b4 = (uint32_t)((uint64_t)pU64_20 >> 0x20);
              }
              local_a8 = (uint8_t)sz_9;
              uStack_a7 = (uint32_t)(sz_9 >> 8);
              uStack_a3._0_3_ = (undefined3)(sz_9 >> 0x28);
              uStack_a3._3_1_ = (uint8_t)uVal_21;
              uStack_9f = (undefined7)(uVal_21 >> 8);
              func_0x1806aa960(pU64_20,fnPtr_1,sz_9);
              *(uint8_t *)((int64_t)pU64_20 + sz_9) = 0;
              func_0x18039d6f0(lVal_13,&local_b8,&local_1e8,&local_1f8,local_118,&local_208);
LAB_1803a0b46:
              uVal_21 = CONCAT71(uStack_9f,uStack_a3._3_1_);
              if (0xf < uVal_21) {
                lVal_13 = CONCAT44(uStack_b4,local_b8);
joined_r0x0001803a0ad2:
                uVal_12 = uVal_21 + 1;
                lVal_15 = lVal_13;
                if (0xfff < uVal_12) {
                  lVal_15 = *(int64_t *)(lVal_13 + -8);
                  if (0x1f < (uint64_t)((lVal_13 + -8) - lVal_15)) goto LAB_1803a0d6d;
                  uVal_12 = uVal_21 + 0x28;
                }
                thunk_FUN_180695dd0(lVal_15,uVal_12);
              }
              goto LAB_1803a0b8b;
            }
            goto LAB_1803a0da3;
          }
          if (uStack_80 < 0x10) {
            pU64_17 = local_98;
          }
          else {
            pU64_17 = (uint8_t *)local_98;
          }
          local_b8 = SUB84(pU64_17,0);
          uStack_b4 = (uint32_t)((uint64_t)pU64_17 >> 0x20);
          uStack_b0 = (uint32_t)local_88;
          uStack_ac = (uint32_t)(local_88 >> 0x20);
          uVal_7 = func_0x180678230();
          pU64_20 = &local_b8;
          func_0x1800a6340(local_78,uVal_7,pU64_20);
          pU64_17 = local_78;
          if (7 < uStack_60) {
            pU64_17 = _local_78;
          }
          uVal_21 = func_0x180678990(pU64_17);
          if (uVal_21 >> 0x20 != 0) goto LAB_1803a0d89;
          if (7 < uStack_60) {
            uVal_12 = uStack_60 * 2 + 2;
            lVal_13 = (int64_t)_local_78;
            if (0xfff < uVal_12) {
              lVal_13 = *(int64_t *)((int64_t)_local_78 + -8);
              if (0x1f < (uint64_t)(((int64_t)_local_78 + -8) - lVal_13)) goto LAB_1803a0d6d;
              uVal_12 = uStack_60 * 2 + 0x29;
            }
            thunk_FUN_180695dd0(lVal_13,uVal_12);
          }
          _local_78 = &DAT_28d478d88fb3dcdf;
          DAT_180840a60 = (**(func_ptr_t *)(*DAT_180840a58 + 0xf8))();
          uVal_6 = _UNK_1806b6f3c;
          uVal_5 = _UNK_1806b6f38;
          uVal_4 = PTR_DAT_1806b6f30._4_4_;
          uVal_7 = PTR_DAT_1806b6f30._0_4_;
          if (DAT_180840a60 == 0) goto LAB_1803a03fd;
          if ((uVal_21 & 1) != 0) {
            _local_78 = &DAT_28d0f803f34a0611;
            lVal_13 = DAT_180840a58[0xc9];
            local_1d8 = PTR_DAT_1806b6f30._0_4_;
            uStack_1d4 = PTR_DAT_1806b6f30._4_4_;
            uStack_1d0 = _UNK_1806b6f38;
            uStack_1cc = _UNK_1806b6f3c;
            local_f8 = ZEXT816(0);
            local_e8 = ZEXT816(0);
            uVal_21 = *(uint64_t *)param_2[1];
            if (0xf < *(uint64_t *)(param_2[1] + 8)) {
              param_2 = *(uint8_t (**)[16])*param_2;
            }
            if ((int64_t)uVal_21 < 0) goto LAB_1803a0db0;
            if (uVal_21 < 0x10) {
              local_e8._8_8_ = 0xf;
              local_e8._0_8_ = uVal_21;
              local_f8 = *param_2;
            }
            else {
              uVal_14 = uVal_21 | 0xf;
              uVal_12 = 0x16;
              if (0x16 < uVal_14) {
                uVal_12 = uVal_14;
              }
              if (uVal_14 < 0xfff) {
                uVal_14 = func_0x180672de0(uVal_12 + 1);
              }
              else {
                lVal_15 = func_0x180672de0(uVal_12 + 0x28);
                uVal_14 = lVal_15 + 0x27U & 0xffffffffffffffe0;
                *(int64_t *)(uVal_14 - 8) = lVal_15;
              }
              local_f8._0_8_ = uVal_14;
              local_e8._8_8_ = uVal_12;
              local_e8._0_8_ = uVal_21;
              func_0x1806aa960(uVal_14,param_2,uVal_21 + 1);
            }
            local_1c8 = PTR_DAT_1806c97c8._0_4_;
            uStack_1c4 = PTR_DAT_1806c97c8._4_4_;
            uStack_1c0 = _UNK_1806c97d0;
            uStack_1bc = _UNK_1806c97d4;
            local_1b8 = PTR_DAT_1806b75a0._0_4_;
            uStack_1b4 = PTR_DAT_1806b75a0._4_4_;
            uStack_1b0 = _UNK_1806b75a8;
            uStack_1ac = _UNK_1806b75ac;
            local_a8 = UNK_1806cb522;
            uStack_a7 = _UNK_1806cb523;
            uStack_a3 = _UNK_1806cb527;
            local_b8 = _DAT_1806cb512;
            uStack_b4 = _UNK_1806cb516;
            uStack_b0 = _UNK_1806cb51a;
            uStack_ac = _UNK_1806cb51e;
            if (*(char *)(*(int64_t *)
                           ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                         0x12058) == '\0') {
              lVal_15 = *(int64_t *)
                        ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
              *(uint8_t *)(lVal_15 + 0x12058) = 1;
              func_0x1800904a0(lVal_15 + 0x1203d,&local_b8);
              func_0x180673140(&LAB_18042e910);
            }
            fnPtr_1 = (char *)(*(int64_t *)
                               ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                             0x1203d);
            func_0x18043c8c0(fnPtr_1);
            _local_78 = ZEXT816(0);
            sz_9 = strlen(fnPtr_1);
            if (-1 < (int64_t)sz_9) {
              if (sz_9 < 0x10) {
                pU64_17 = local_78;
                uVal_21 = 0xf;
              }
              else {
                uVal_12 = sz_9 | 0xf;
                uVal_21 = 0x16;
                if (0x16 < uVal_12) {
                  uVal_21 = uVal_12;
                }
                if (uVal_12 < 0xfff) {
                  local_54 = 1;
                  pU64_17 = (uint8_t *)func_0x180672de0(uVal_21 + 1);
                }
                else {
                  local_54 = 1;
                  lVal_15 = func_0x180672de0(uVal_21 + 0x28);
                  pU64_17 = (uint8_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
                  *(int64_t *)(pU64_17 + -8) = lVal_15;
                }
                _local_78 = pU64_17;
              }
              uStack_60 = uVal_21;
              local_68 = (uint8_t  [8])sz_9;
              func_0x1806aa960(pU64_17,fnPtr_1,sz_9);
              pU64_17[sz_9] = 0;
              func_0x18039d6f0(lVal_13,local_78,&local_1b8,&local_1c8,local_f8,&local_1d8);
              if (0xf < uStack_60) {
                uVal_21 = uStack_60;
                lVal_13 = (int64_t)_local_78;
                goto joined_r0x0001803a0ad2;
              }
              goto LAB_1803a0b8b;
            }
            goto LAB_1803a0dbc;
          }
          _local_78 = &DAT_28d0f803f34a0611;
          lVal_13 = DAT_180840a58[0xc9];
          local_1a8 = PTR_DAT_1806b6f30._0_4_;
          uStack_1a4 = PTR_DAT_1806b6f30._4_4_;
          uStack_1a0 = _UNK_1806b6f38;
          uStack_19c = _UNK_1806b6f3c;
          local_d8 = ZEXT816(0);
          local_c8 = ZEXT816(0);
          uVal_21 = *(uint64_t *)param_2[1];
          if (0xf < *(uint64_t *)(param_2[1] + 8)) {
            param_2 = *(uint8_t (**)[16])*param_2;
          }
          if ((int64_t)uVal_21 < 0) goto LAB_1803a0db6;
          if (uVal_21 < 0x10) {
            local_c8._8_8_ = 0xf;
            local_c8._0_8_ = uVal_21;
            local_d8 = *param_2;
          }
          else {
            uVal_14 = uVal_21 | 0xf;
            uVal_12 = 0x16;
            if (0x16 < uVal_14) {
              uVal_12 = uVal_14;
            }
            if (uVal_14 < 0xfff) {
              uVal_14 = func_0x180672de0(uVal_12 + 1);
            }
            else {
              lVal_15 = func_0x180672de0(uVal_12 + 0x28);
              uVal_14 = lVal_15 + 0x27U & 0xffffffffffffffe0;
              *(int64_t *)(uVal_14 - 8) = lVal_15;
            }
            local_d8._0_8_ = uVal_14;
            local_c8._8_8_ = uVal_12;
            local_c8._0_8_ = uVal_21;
            func_0x1806aa960(uVal_14,param_2,uVal_21 + 1);
          }
          local_198 = PTR_DAT_1806c97c8._0_4_;
          uStack_194 = PTR_DAT_1806c97c8._4_4_;
          uStack_190 = _UNK_1806c97d0;
          uStack_18c = _UNK_1806c97d4;
          local_188 = uVal_7;
          uStack_184 = uVal_4;
          uStack_180 = uVal_5;
          uStack_17c = uVal_6;
          local_68._4_4_ = _UNK_1806cb53f;
          local_68._0_4_ = _DAT_1806cb53b;
          uStack_60._0_4_ = _UNK_1806cb543;
          uStack_60._4_4_ = _UNK_1806cb547;
          uStack_74 = _UNK_1806cb52f;
          local_78 = (uint8_t  [4])_DAT_1806cb52b;
          uStack_70._0_4_ = _UNK_1806cb533;
          uStack_70._4_4_ = _UNK_1806cb537;
          local_58 = 0x4d3a;
          if (*(char *)(*(int64_t *)
                         ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) + 0x1207c
                       ) == '\0') {
            lVal_15 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8);
            *(uint8_t *)(lVal_15 + 0x1207c) = 1;
            func_0x1800f15f0(lVal_15 + 0x12059,local_78);
            func_0x180673140(&LAB_18042e940);
          }
          fnPtr_1 = (char *)(*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)_tls_index * 8) +
                           0x12059);
          func_0x18043c8f0(fnPtr_1);
          local_b8 = 0;
          uStack_b4 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          sz_9 = strlen(fnPtr_1);
          if (-1 < (int64_t)sz_9) {
            uVal_21 = 0xf;
            if (0xf < sz_9) {
              uVal_12 = sz_9 | 0xf;
              uVal_21 = 0x16;
              if (0x16 < uVal_12) {
                uVal_21 = uVal_12;
              }
              if (uVal_12 < 0xfff) {
                local_55 = 1;
                pU64_20 = (uint32_t *)func_0x180672de0(uVal_21 + 1);
              }
              else {
                local_55 = 1;
                lVal_15 = func_0x180672de0(uVal_21 + 0x28);
                pU64_20 = (uint32_t *)(lVal_15 + 0x27U & 0xffffffffffffffe0);
                *(int64_t *)(pU64_20 + -2) = lVal_15;
              }
              local_b8 = SUB84(pU64_20,0);
              uStack_b4 = (uint32_t)((uint64_t)pU64_20 >> 0x20);
            }
            local_a8 = (uint8_t)sz_9;
            uStack_a7 = (uint32_t)(sz_9 >> 8);
            uStack_a3._0_3_ = (undefined3)(sz_9 >> 0x28);
            uStack_a3._3_1_ = (uint8_t)uVal_21;
            uStack_9f = (undefined7)(uVal_21 >> 8);
            func_0x1806aa960(pU64_20,fnPtr_1,sz_9);
            *(uint8_t *)((int64_t)pU64_20 + sz_9) = 0;
            func_0x18039d6f0(lVal_13,&local_b8,&local_188,&local_198,local_d8,&local_1a8);
            goto LAB_1803a0b46;
          }
          goto LAB_1803a0dc9;
        }
        if (((iVal_8 == 0x7b) || (iVal_8 == 0xa1)) || (iVal_8 == 0x10b)) {
LAB_1803a004c:
          ch_16 = '\x01';
          goto LAB_1803a004e;
        }
      }
LAB_1803a0dd6:
      local_170 = &PTR_PTR_FUN_1806b00d8;
      local_178 = iVal_8;
      iVal_8 = func_0x18008a340("exists",&local_178,&local_b8);
LAB_1803a0dfc:
      func_0x180087670("status",iVal_8,&local_178);
      fnPtr_2 = (func_ptr_t )swi(3);
      (*fnPtr_2)();
      return;
    }
  }
  func_0x18007ba70();
LAB_1803a0d6d:
  do {
    invalidInstructionException();
  } while( true );
}
